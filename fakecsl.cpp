// fakecsl.cpp                                  Copyright (C) 2016 Codemist    

// test harness for lisphash.cpp

// $Id$


#include "headers.h"

///////////////////////////////////////////////////////////////////////////////
LispObject getvector(int tag, int type, size_t size)
{
    char *r = (char *)calloc(doubleword_align_up(size), 1);
    *((Header *)r) = type + (size << (Tw+5)) + TAG_HDR_IMMED;
    return (LispObject)(r + tag);
}

LispObject getvector_init(size_t n, LispObject k)
{   LispObject p, nil;
    push(k);
    p = getvector(TAG_VECTOR, TYPE_SIMPLE_VEC, n);
    pop(k);
    errexit();
    if (!SIXTY_FOUR_BIT && ((n & 4) != 0))
        n += 4;   // Ensure last doubleword is tidy
// Note that on a 32-bit machine this will often round the size of the
// vector up so that (including its header word) it is an even number of
// 32-bit words long, and it will put the initial contents k into not just
// the useful parts of the array but also into any padding words at the end.
    while (n > CELL)
    {   n -= CELL;
        *(LispObject *)((char *)p - TAG_VECTOR + n) = k;
    }
    return p;
}

LispObject wrong_no_3a(LispObject env, LispObject a1)
{   return C_nil;
}
LispObject wrong_no_2(LispObject env, int n, ...)
{   return C_nil;
}
LispObject wrong_no_1(LispObject env, int n, ...)
{   return C_nil;
}
LispObject too_many_1(LispObject env, LispObject a1, LispObject a2)
{   return C_nil;
}
LispObject too_few_2(LispObject env, LispObject a1)
{   return C_nil;
}


#define NTRIALS 1
//#define LIMIT (64-4)
#define LIMIT (64-24)

LispObject hashtab = 0;

static int shift_amount;
static size_t table_size;

int main(int argc, char *argv[])
{
    srand48((long)time(NULL));
// Create a table of initial capacity about 4 that will hash using EQ.
    hashtab = Lmkhash2(nil, fixnum_of_int(4), fixnum_of_int(0));
// As a very initial check just dump the table, insert one item and re-dump.
    dumptable(hashtab, "empty", true);
    Lput_hash(nil, 3, 100, hashtab, 1000);
    dumptable(hashtab, "only one entry", true);
    Lput_hash(nil, 3, 200, hashtab, 2000);
    dumptable(hashtab, "two entries", true);
    Lput_hash(nil, 3, 300, hashtab, 3000);
    dumptable(hashtab, "three entries", true);
    Lput_hash(nil, 3, 400, hashtab, 4000);
    dumptable(hashtab, "four entries", true);
    Lput_hash(nil, 3, 500, hashtab, 5000);
    dumptable(hashtab, "five entries", true);
    Lput_hash(nil, 3, 600, hashtab, 6000);
    dumptable(hashtab, "six entries", true);
    Lput_hash(nil, 3, 700, hashtab, 7000);
    dumptable(hashtab, "seven entries", true);
    Lput_hash(nil, 3, 800, hashtab, 8000);
    dumptable(hashtab, "eight entries", true);
    Lput_hash(nil, 3, 900, hashtab, 9000);
    dumptable(hashtab, "nine entries", true);
    return 0;

    for (shift_amount=64-3; shift_amount>LIMIT; shift_amount--)
    {   table_size = ((size_t)1)<<(64-shift_amount);
        Lclr_hash(nil, hashtab);
        for (int trials=0; trials<NTRIALS; trials++)
        {   size_t n, n0, n1, n2, n3, n4;
            already_n=0, already_h=0, already_c=0;
            inserted_n=0, inserted_h=0, inserted_c=0;
            n0 = (3*table_size)/10;
            n1 = (4*table_size)/10;
            n2 = (5*table_size)/10;
            n3 = (6*table_size)/10;
            n4 = (7*table_size)/10;
            for (n=0; n<table_size; n++)
            {   long key = lrand48();
                Lput_hash(nil, 3, key, hashtab, nil);
#ifdef TRACE
//              dumptable(hashtab, "keeping going", true);
#endif
                checktable(hashtab);
                if (n+1==n0 ||
                    n+1==n1 ||
                    n+1==n2 ||
                    n+1==n3 ||
                    n+1==n4)
                {   showstats(n+1);
                    checktable(hashtab);
                }
            }
            printf("Ended at %"PRIuMAX"/%"PRIuMAX" (%.2f%%)\n",
                (uintmax_t)n, (uintmax_t)table_size,
                100.0*n/(double)table_size);
            showstats(n+1);
            checktable(hashtab);
        }
    }
    return 0;
}

LispObject aerror(const char *s)
{
    printf("\nError: %s\n", s);
    abort();
}

LispObject aerror1(const char *s, LispObject a)
{
    printf("\nError: %s\n", s);
    abort();
}

// end of fakecsl.cpp
