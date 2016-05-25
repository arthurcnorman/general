// fakecsl.cpp                                  Copyright (C) 2016 Codemist    

// test harness for lisphash.cpp

// $Id$


#include "headers.h"

///////////////////////////////////////////////////////////////////////////////
LispObject getvector(int tag, int type, size_t size)
{
    char *r = (char *)malloc(doubleword_align_up(size));
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
    while (n > CELL)
    {   n -= CELL;
        *(LispObject *)((char *)p - TAG_VECTOR + n) = k;
    }
    return p;
}

#define NTRIALS 1
//#define LIMIT (64-4)
#define LIMIT (64-24)


int main(int argc, char *argv[])
{
    srand48((long)time(NULL));
    for (shift_amount=64-3; shift_amount>LIMIT; shift_amount--)
    {   table_size = ((size_t)1)<<(64-shift_amount);
//      table = (ENTRY *)malloc(sizeof(ENTRY)*table_size);
        table = (ENTRY *)malloc(sizeof(ENTRY)*32*1024*1024);
        if (table == NULL)
        {   printf("malloc failed\n");
            exit(0);
        }
        for (int trials=0; trials<NTRIALS; trials++)
        {   size_t n, n0, n1, n2, n3, n4;
            already_n=0, already_h=0, already_c=0;
            inserted_n=0, inserted_h=0, inserted_c=0;
            for (n=0; n<table_size; n++) table[n] = EMPTY;
            n0 = (3*table_size)/10;
            n1 = (4*table_size)/10;
            n2 = (5*table_size)/10;
            n3 = (6*table_size)/10;
            n4 = (7*table_size)/10;
            for (n=0; n<table_size; n++)
            {   long key = lrand48();
                if (instrumented_insert(key) == -1)
                {
                    checktable();
#ifdef TRACE
                    dumptable("insert failed", true);
#endif
                    printf("Full at %"PRIuMAX"/%"PRIuMAX" (%.2f%%)\n",
                        (uintmax_t)n, (uintmax_t)table_size,
                        100.0*n/(double)table_size);
                    showstats(n+1);
                    break;
                }
#ifdef TRACE
//              dumptable("keeping going", true);
#endif
//              checktable();
                if (n+1==n0 ||
                    n+1==n1 ||
                    n+1==n2 ||
                    n+1==n3 ||
                    n+1==n4)
                {   showstats(n+1);
                    checktable();
                }
            }
            printf("Ended at %"PRIuMAX"/%"PRIuMAX" (%.2f%%)\n",
                (uintmax_t)n, (uintmax_t)table_size,
                100.0*n/(double)table_size);
            showstats(n+1);
            checktable();
        }
        free(table);
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
