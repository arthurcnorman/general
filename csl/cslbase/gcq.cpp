#include <iostream>
#include <atomic>
#include <mutex>
#include <cstdint>
#include <cinttypes>
#include <condition_variable>
#include <thread>
#include <random>
#include <chrono>

using std::atomic;
using std::cout;
using std::endl;
using std::int32_t;
using std::int64_t;
using std::uint32_t;
using std::uint64_t;
using std::size_t;

typedef intptr_t LispObject;

static std::random_device hopefully_random;

static std::seed_seq initial_random_seed
{
    hopefully_random(),
    static_cast<unsigned int>(
        std::hash<std::thread::id>()(std::this_thread::get_id())),
    static_cast<unsigned int>(std::time(nullptr)),
    static_cast<unsigned int>(
        std::chrono::high_resolution_clock::now().time_since_epoch().count())
};
static std::mt19937 mersenne_twister(initial_random_seed);

uint32_t rand32()
{   return mersenne_twister();
}

class Chunk
{
public:
    atomic<uintptr_t> length;
    atomic<uintptr_t> chunkFringe;
    atomic<bool> isPinned;
    atomic<Chunk *>chunkStack;
// At the start of garbage collection as I collect a chain of pinned chunks
// those chunks may appear on the list in arbitrary order, but at the end
// of garbage collection if a Page has a number of pinned Chunks within it
// they must be sorted into ascending order. Arranging that will mean that
// I can release the gaps between chunks for allocation easily.
// So within a chunk I start off with gFringe pointing at usableSpace and
// gLimit at either the start of the first pinned chunk or at the end of
// the whole page. When that region gets full the gLimit pointer either
// tells me that I have used up the entire page, or the pinned chunk it
// points at lets me find the new gFringe (using the length field) and the
// end of the next free block (using pinChain - and if that is nullptr the
// relevant limit is the end of the page.
    atomic<Chunk *>pinChain;
// The rest of the chunk is the region within which data is kept.
// Its size will be such that the entire Chunk has length a specified by
// its first word.
    atomic<LispObject>usableSpace[1];
// Now I can have some accessor (etc) methods:
//
    uintptr_t dataStart()
    {   return reinterpret_cast<uintptr_t>(&usableSpace);
    }
    uintptr_t dataEnd()
    {   return reinterpret_cast<uintptr_t>(this) + length;
    }
    bool pointsWithin(uintptr_t p)
    {   return p >= dataStart() && p < chunkFringe;
    }
};

atomic<Chunk *> chunkStack;

std::mutex mutexForChunkStack;
bool gcComplete;
std::condition_variable cvForChunkStack;

inline void pushChunk(Chunk *c)
{   Chunk *old = chunkStack.load();
    do
    {   c->chunkStack.store(old);
    } while (!chunkStack.compare_exchange_weak(old, c));
    if (old == nullptr)
    {   {   std::lock_guard<std::mutex> lock(mutexForChunkStack);
        }
        cvForChunkStack.notify_all();
    }
}

// This version is lock-free and it return nullptr if the stack is empty.

inline Chunk *popChunk1()
{   Chunk *old = chunkStack.load(), *c;
    do
    {   if (old == nullptr) return nullptr;
        c = old->chunkStack.load();
    } while (!chunkStack.compare_exchange_weak(old, c));
    return old;
}

// Here is the version for use. If called when the stack is empty it
// waits. This return nullprt when gcComplete is set, otherwise a valid
// chunk.

inline Chunk *popChunk()
{
// First try in a lock-free manner.
    Chunk *c = popChunk1();
// ... if that succeds then I can return with only low overhead.
    if (c != nullptr) return c;
// ** Point A **
// Now my first lock-free try failed. Of course a pushChunk() may have
// happened in the meanwhile - trying again is not a problem! But this time
// I will lock the mutex first. That will allow any pushChunk that adds
// to a non-empty stack to complete in a lock-free manner, but a pushChunk
// on an empty stack will not be able to reach the notify_all step until the
// mutex is released.
    std::unique_lock<std::mutex> lock(mutexForChunkStack);
    while ((c = popChunk1()) == nullptr)
    {
// ** Point B **
// Sometimes this pop will succeed, eg if pushChunk ran while this thread
// was at Point A. In such a case the push operation may have performed a
// notify_all but this thread will not be aware. That could have woken some
// other thread up and there could have been a whole sequence of pushes and
// pops around Point A!
// When popChunk1 fails here it will do so with the mutex locked. That means
// that any push that could install data will do so onto an empty stack and
// when it does that it will attempt to lock the mutex and will hence stall.
// It will first be able to make progress when the lock is released, which
// will be within the wait call here.
// Meanwhile other uses of push could have added more items to the
// stack without problems and other threads may have popped things, including
// the one set up by the stalled push thread.
        cvForChunkStack.wait(lock);
// When the condition variable unlocks the mutex while it waits the push
// can continue. It will perform a notify_all. Because of the activity of
// other threads the stack could be empty again! But that does not matter
// too much - the code here will check the stack again in popChunk1.
// The crucial issue here is the avoidance of a race condition that could
// lead to pushChunk performing its notify_all while this thread was
// as Point B. If that happened the wait could deadlock.
//
// There is one more issue here - at the end of a gc I will want to do
// special things. I set gcComplete and popChunk then returns nil.
// That should let me sort myself out!
        if (gcComplete) return nullptr;
    }
    return c;
}

static uint64_t N = 400000000u;

int makeChunks()
{   cout << "Producer thread starting\n" << std::flush;
    for (auto i=0; i<N; i++)
    {   Chunk *c = new Chunk;
        pushChunk(c);
        std::this_thread::sleep_for(
            std::chrono::nanoseconds(rand32() % 250000U));
    }
    cout << "Producer thread ending\n" << std::flush;
    return 0;
}

int grabChunks()
{   cout << "Consumer thread starting\n" << std::flush;
    Chunk *c;
    while ((c = popChunk()) != nullptr)
    {   delete c;
        std::this_thread::sleep_for(
            std::chrono::nanoseconds(rand32() % 200000U));
    }
    cout << "Consumer thread ending\n" << std::flush;
    return 0;
}

const size_t nThreads = 16;

int main(int argc, char *argv[])
{   cout << "Starting\n" << std::flush;
    std::thread *thr1[nThreads], *thr2[nThreads];
    for (auto i=0; i<nThreads; i++)
        thr1[i] = new std::thread(makeChunks);
    for (auto i=0; i<nThreads; i++)
        thr2[i] = new std::thread(grabChunks);
    cout << "About to join producer threads\n" << std::flush;
    for (auto i=0; i<nThreads; i++)
        thr1[i]->join();
    cout << "All producer threads tidy\n" << std::flush;
    std::this_thread::sleep_for(std::chrono::seconds(1));
    {   std::lock_guard<std::mutex> lock(mutexForChunkStack);
        gcComplete = true;
    }
    cvForChunkStack.notify_all();
    cout << "All consumer threads should now be stopping\n" << std::flush;
    for (auto i=0; i<nThreads; i++)
        thr2[i]->join();
    cout << "Finishing\n" << std::flush;
    return 0;
}

// end of gcq.cpp
