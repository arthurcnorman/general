// lispthrow.h                                      Copyright Codemist 2020

// Some exception processing stuff for CSL

/**************************************************************************
 * Copyright (C) 2020, Codemist.                         A C Norman       *
 *                                                                        *
 * Redistribution and use in source and binary forms, with or without     *
 * modification, are permitted provided that the following conditions are *
 * met:                                                                   *
 *                                                                        *
 *     * Redistributions of source code must retain the relevant          *
 *       copyright notice, this list of conditions and the following      *
 *       disclaimer.                                                      *
 *     * Redistributions in binary form must reproduce the above          *
 *       copyright notice, this list of conditions and the following      *
 *       disclaimer in the documentation and/or other materials provided  *
 *       with the distribution.                                           *
 *                                                                        *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS    *
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT      *
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS      *
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE         *
 * COPYRIGHT OWNERS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,   *
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,   *
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS  *
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND *
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR  *
 * TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF     *
 * THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH   *
 * DAMAGE.                                                                *
 *************************************************************************/

// $Id: lispthrow.h 5519 2020-11-25 13:56:33Z arthurcnorman $

#ifndef __lispthrow_h
#define __lispthrow_h 1

// This version uses a flag rather than genuine C++ exceptions!


//extern thread_local LispObject *stack;
extern LispObject *stack;
//extern thread_local jmp_buf *global_jb;
extern  std::jmp_buf *global_jb;

//extern LispObject **get_stack_addr();
//extern jmp_buf **get_global_jb_addr();
// In any single compilation unit you will only scan this header file
// once, and so the static variables set up here get defined just once
// and the initialization of them should happen during thread initialization.
//static thread_local LispObject **const stack_addr = get_stack_addr();
//static thread_local jmp_buf **const global_jb_addr = get_global_jb_addr();
//#define stack (*stack_addr)
//#define global_jb (*global_jb_addr)

// There is a "Lisp Stack" which is separate from the C++ stack. It has
// a number of uses:
// (1) Prior to the conservative GC all references to heap data must be
//     somewhere "safe" whenever a GC could happen. This is achieved by
//     going { push(x); <dangerous operations>; pop(x); } in many places.
//     This keeps the identification of heap pointers "precise".
// (2) The bytecode interpreter is a variety of stack-based computer with
//     two accumulators (A and B). It works by pushing and popping items
//     on the stack and accessing some relative to the stack top. In the
//     case of deep recursion this naturally lead to a substantial amount
//     of stuff ending up on the Lisp stack.
// (3) Some parts of the interpreter and the implementation of some special
//     forms used the Lisp stack either to marshall data where it is not
//     known in advance how much will be present or to keep precise pointers
//     to a significant number of values.
// When a conservative collector is in use case (1) above becomes an out of
// date constraint (that adds a level of inefficiency) and come cases of (3)
// could be reworked to have tidier code when there is no need for precise
// pointers. By and large (2) will remain. The code should now use real_push()
// in those cases where push and pop must use the Lisp stack and push()
// when the transfer is only needed for precision. So in the conservative
// case push() and pop() can become no-ops while real_push and real_pop()
// continue to behave as always.
// If at some stage the precice GC is totally removed then all calls to
// just push() and pop() can be discarded. Before that the two variants on
// stack access can be instrumented so that the cost impact of the change to
// a conservative GC can be assessed.

// Because in the precise GC model both push() and real_push() do the same
// thing (etc) I view the risk of bugs being introduced into the main-stream
// version as rather low here. But for the conservative code checking that
// every previous push that needs to be upgraded to real_push will need some
// care. However it adds a constraint that uses of push/pop MUST be in the
// style    push(v); ... pop(v);   with the SAME variable used in each
// location and that variable not having its value changed in the "..."
// section. I.e. the use of push and pop is ONLY to ensure that v is garbage
// collection safe and they should not be used to move data around.

#ifdef CONSERVATIVE
inline size_t push_count = 0;
inline size_t real_push_count = 0;
#endif

inline void real_push(LispObject a)
{   *++stack = a;
#ifdef CONSERVATIVE
    real_push_count++;
#endif
}

inline void real_push(LispObject a, LispObject b)
{   *++stack = a;
    *++stack = b;
#ifdef CONSERVATIVE
    real_push_count++;
#endif
}

inline void real_push(LispObject a, LispObject b, LispObject c)
{   *++stack = a;
    *++stack = b;
    *++stack = c;
#ifdef CONSERVATIVE
    real_push_count++;
#endif
}

inline void real_push(LispObject a, LispObject b, LispObject c,
                 LispObject d)
{   *++stack = a;
    *++stack = b;
    *++stack = c;
    *++stack = d;
#ifdef CONSERVATIVE
    real_push_count++;
#endif
}

inline void real_push(LispObject a, LispObject b, LispObject c,
                 LispObject d, LispObject e)
{   *++stack = a;
    *++stack = b;
    *++stack = c;
    *++stack = d;
    *++stack = e;
#ifdef CONSERVATIVE
    real_push_count++;
#endif
}

inline void real_push(LispObject a, LispObject b, LispObject c,
                 LispObject d, LispObject e, LispObject f)
{   *++stack = a;
    *++stack = b;
    *++stack = c;
    *++stack = d;
    *++stack = e;
    *++stack = f;
#ifdef CONSERVATIVE
    real_push_count++;
#endif
}

class RealPush
{   int n;
    LispObject *v1, *v2, *v3, *v4, *v5, *v6;
// I rather hope that when I create one of these the compiler will
// remember rather than store the count from (n) and all the addresses of
// the variables that I save the values of!
public:
    RealPush(LispObject &a1)
    {   n = 1;
        v1 = &a1;
        *++stack = a1;
#ifdef CONSERVATIVE
        real_push_count++;
#endif
    }
    RealPush(LispObject &a1, LispObject &a2)
    {   n = 2;
        v1 = &a1;
        v2 = &a2;
        *++stack = a1;
        *++stack = a2;
#ifdef CONSERVATIVE
        real_push_count++;
#endif
    }
    RealPush(LispObject &a1, LispObject &a2, LispObject &a3)
    {   n = 3;
        v1 = &a1;
        v2 = &a2;
        v3 = &a3;
        *++stack = a1;
        *++stack = a2;
        *++stack = a3;
#ifdef CONSERVATIVE
        real_push_count++;
#endif
    }
    RealPush(LispObject &a1, LispObject &a2, LispObject &a3,
             LispObject &a4)
    {   n = 4;
        v1 = &a1;
        v2 = &a2;
        v3 = &a3;
        v4 = &a4;
        *++stack = a1;
        *++stack = a2;
        *++stack = a3;
        *++stack = a4;
#ifdef CONSERVATIVE
        real_push_count++;
#endif
    }
    RealPush(LispObject &a1, LispObject &a2, LispObject &a3,
             LispObject &a4, LispObject &a5)
    {   n = 5;
        v1 = &a1;
        v2 = &a2;
        v3 = &a3;
        v4 = &a4;
        v5 = &a5;
        *++stack = a1;
        *++stack = a2;
        *++stack = a3;
        *++stack = a4;
        *++stack = a5;
#ifdef CONSERVATIVE
        real_push_count++;
#endif
    }
    RealPush(LispObject &a1, LispObject &a2, LispObject &a3,
             LispObject &a4, LispObject &a5, LispObject &a6)
    {   n = 6;
        v1 = &a1;
        v2 = &a2;
        v3 = &a3;
        v4 = &a4;
        v5 = &a5;
        v6 = &a6;
        *++stack = a1;
        *++stack = a2;
        *++stack = a3;
        *++stack = a4;
        *++stack = a5;
        *++stack = a6;
#ifdef CONSERVATIVE
        real_push_count++;
#endif
    }
    ~RealPush()
    {   switch (n)
        {   case 6:
                *v6 = *stack--;
            case 5:
                *v5 = *stack--;
            case 4:
                *v4 = *stack--;
            case 3:
                *v3 = *stack--;
            case 2:
                *v2 = *stack--;
            case 1:
                *v1 = *stack--;
#ifdef CONSERVATIVE
                real_push_count++;
#endif
        }
    }
};

inline void real_pop(LispObject& a)
{   a = *stack--;
#ifdef CONSERVATIVE
    real_push_count++;
#endif
}

inline void real_pop(volatile LispObject& a)
{   a = *stack--;
#ifdef CONSERVATIVE
    real_push_count++;
#endif
}

inline void real_pop(LispObject& a, LispObject& b)
{   a = *stack--;
    b = *stack--;
#ifdef CONSERVATIVE
    real_push_count++;
#endif
}

inline void real_pop(LispObject& a, LispObject& b, LispObject& c)
{   a = *stack--;
    b = *stack--;
    c = *stack--;
#ifdef CONSERVATIVE
    real_push_count++;
#endif
}

inline void real_pop(LispObject& a, LispObject& b, LispObject& c,
                LispObject& d)
{   a = *stack--;
    b = *stack--;
    c = *stack--;
    d = *stack--;
#ifdef CONSERVATIVE
    real_push_count++;
#endif
}

inline void real_pop(LispObject& a, LispObject& b, LispObject& c,
                LispObject& d, LispObject& e)
{   a = *stack--;
    b = *stack--;
    c = *stack--;
    d = *stack--;
    e = *stack--;
#ifdef CONSERVATIVE
    real_push_count++;
#endif
}

inline void real_pop(LispObject& a, LispObject& b, LispObject& c,
                LispObject& d, LispObject& e, LispObject& f)
{   a = *stack--;
    b = *stack--;
    c = *stack--;
    d = *stack--;
    e = *stack--;
    f = *stack--;
#ifdef CONSERVATIVE
    real_push_count++;
#endif
}

inline void real_popv(int n)
{   stack -= n;
#ifdef CONSERVATIVE
    real_push_count++;
#endif
}

// With a conservative GC I will want real_push and real_pop to exist and
// move things to and from a dedicated Lisp stack (eg as part of the way
// I handle some special forms or functions with huge numbers of arguments)
// but case where it used to be push/pop can replace those with no-operation.

#ifdef CONSERVATIVE

#if 1 // TEMP
inline void push(LispObject a)
{   *++stack = a;
#ifdef CONSERVATIVE
    push_count++;
#endif
}

inline void push(LispObject a, LispObject b)
{   *++stack = a;
    *++stack = b;
#ifdef CONSERVATIVE
    push_count++;
#endif
}

inline void push(LispObject a, LispObject b, LispObject c)
{   *++stack = a;
    *++stack = b;
    *++stack = c;
#ifdef CONSERVATIVE
    push_count++;
#endif
}

inline void push(LispObject a, LispObject b, LispObject c,
                 LispObject d)
{   *++stack = a;
    *++stack = b;
    *++stack = c;
    *++stack = d;
#ifdef CONSERVATIVE
    push_count++;
#endif
}

inline void push(LispObject a, LispObject b, LispObject c,
                 LispObject d, LispObject e)
{   *++stack = a;
    *++stack = b;
    *++stack = c;
    *++stack = d;
    *++stack = e;
#ifdef CONSERVATIVE
    push_count++;
#endif
}

inline void push(LispObject a, LispObject b, LispObject c,
                 LispObject d, LispObject e, LispObject f)
{   *++stack = a;
    *++stack = b;
    *++stack = c;
    *++stack = d;
    *++stack = e;
    *++stack = f;
#ifdef CONSERVATIVE
    push_count++;
#endif
}

inline void pop(LispObject& a)
{   my_assert(a == *stack);
    a = *stack--;
#ifdef CONSERVATIVE
    push_count++;
#endif
}

inline void pop(volatile LispObject& a)
{   my_assert(a == *stack);
    a = *stack--;
#ifdef CONSERVATIVE
    push_count++;
#endif
}

inline void pop(LispObject& a, LispObject& b)
{   my_assert(a == *stack);
    a = *stack--;
    my_assert(b == *stack);
    b = *stack--;
#ifdef CONSERVATIVE
    push_count++;
#endif
}

inline void pop(LispObject& a, LispObject& b, LispObject& c)
{   my_assert(a == *stack);
    a = *stack--;
    my_assert(b == *stack);
    b = *stack--;
    my_assert(c == *stack);
    c = *stack--;
#ifdef CONSERVATIVE
    push_count++;
#endif
}

inline void pop(LispObject& a, LispObject& b, LispObject& c,
                LispObject& d)
{   my_assert(a == *stack);
    a = *stack--;
    my_assert(b == *stack);
    b = *stack--;
    my_assert(c == *stack);
    c = *stack--;
    my_assert(d == *stack);
    d = *stack--;
#ifdef CONSERVATIVE
    push_count++;
#endif
}

inline void pop(LispObject& a, LispObject& b, LispObject& c,
                LispObject& d, LispObject& e)
{   my_assert(a == *stack);
    a = *stack--;
    my_assert(b == *stack);
    b = *stack--;
    my_assert(c == *stack);
    c = *stack--;
    my_assert(d == *stack);
    d = *stack--;
    my_assert(e == *stack);
    e = *stack--;
#ifdef CONSERVATIVE
    push_count++;
#endif
}

inline void pop(LispObject& a, LispObject& b, LispObject& c,
                LispObject& d, LispObject& e, LispObject& f)
{   my_assert(a == *stack);
    a = *stack--;
    my_assert(b == *stack);
    b = *stack--;
    my_assert(c == *stack);
    c = *stack--;
    my_assert(d == *stack);
    d = *stack--;
    my_assert(e == *stack);
    e = *stack--;
    my_assert(f == *stack);
    f = *stack--;
#ifdef CONSERVATIVE
    push_count++;
#endif
}

inline void popv(int n)
{   stack -= n;
#ifdef CONSERVATIVE
    push_count++;
#endif
}

class Push
{   int n;
    LispObject *v1, *v2, *v3, *v4, *v5, *v6;
// I rather hope that when I create one of these the compiler will
// remember rather than store the count from (n) and all the addresses of
// the variables that I save the values of!
public:
    Push(LispObject &a1)
    {   n = 1;
        v1 = &a1;
        *++stack = a1;
#ifdef CONSERVATIVE
        push_count++;
#endif
    }
    Push(LispObject &a1, LispObject &a2)
    {   n = 2;
        v1 = &a1;
        v2 = &a2;
        *++stack = a1;
        *++stack = a2;
#ifdef CONSERVATIVE
        push_count++;
#endif
    }
    Push(LispObject &a1, LispObject &a2, LispObject &a3)
    {   n = 3;
        v1 = &a1;
        v2 = &a2;
        v3 = &a3;
        *++stack = a1;
        *++stack = a2;
        *++stack = a3;
#ifdef CONSERVATIVE
        push_count++;
#endif
    }
    Push(LispObject &a1, LispObject &a2, LispObject &a3,
             LispObject &a4)
    {   n = 4;
        v1 = &a1;
        v2 = &a2;
        v3 = &a3;
        v4 = &a4;
        *++stack = a1;
        *++stack = a2;
        *++stack = a3;
        *++stack = a4;
#ifdef CONSERVATIVE
        push_count++;
#endif
    }
    Push(LispObject &a1, LispObject &a2, LispObject &a3,
             LispObject &a4, LispObject &a5)
    {   n = 5;
        v1 = &a1;
        v2 = &a2;
        v3 = &a3;
        v4 = &a4;
        v5 = &a5;
        *++stack = a1;
        *++stack = a2;
        *++stack = a3;
        *++stack = a4;
        *++stack = a5;
#ifdef CONSERVATIVE
        push_count++;
#endif
    }
    Push(LispObject &a1, LispObject &a2, LispObject &a3,
             LispObject &a4, LispObject &a5, LispObject &a6)
    {   n = 6;
        v1 = &a1;
        v2 = &a2;
        v3 = &a3;
        v4 = &a4;
        v5 = &a5;
        v6 = &a6;
        *++stack = a1;
        *++stack = a2;
        *++stack = a3;
        *++stack = a4;
        *++stack = a5;
        *++stack = a6;
#ifdef CONSERVATIVE
        push_count++;
#endif
    }
    ~Push()
    {   switch (n)
        {   case 6:
                *v6 = *stack--;
            case 5:
                *v5 = *stack--;
            case 4:
                *v4 = *stack--;
            case 3:
                *v3 = *stack--;
            case 2:
                *v2 = *stack--;
            case 1:
                *v1 = *stack--;
#ifdef CONSERVATIVE
                push_count++;
#endif
        }
    }
};

#else // TEMP

inline void push(UNUSED_NAME LispObject a)
{
#ifdef CONSERVATIVE
    push_count++;
#endif
}

inline void push(UNUSED_NAME LispObject a, UNUSED_NAME LispObject b)
{
#ifdef CONSERVATIVE
    push_count++;
#endif
}

inline void push(UNUSED_NAME LispObject a, UNUSED_NAME LispObject b, UNUSED_NAME LispObject c)
{
#ifdef CONSERVATIVE
    push_count++;
#endif
}

inline void push(UNUSED_NAME LispObject a, UNUSED_NAME LispObject b, UNUSED_NAME LispObject c,
                 UNUSED_NAME LispObject d)
{
#ifdef CONSERVATIVE
    push_count++;
#endif
}

inline void push(UNUSED_NAME LispObject a, UNUSED_NAME LispObject b, UNUSED_NAME LispObject c,
                 UNUSED_NAME LispObject d, UNUSED_NAME LispObject e)
{
#ifdef CONSERVATIVE
    push_count++;
#endif
}

inline void push(UNUSED_NAME LispObject a, UNUSED_NAME LispObject b, UNUSED_NAME LispObject c,
                 UNUSED_NAME LispObject d, UNUSED_NAME LispObject e, UNUSED_NAME LispObject f)
{
#ifdef CONSERVATIVE
    push_count++;
#endif
}

inline void pop(UNUSED_NAME LispObject& a)
{
#ifdef CONSERVATIVE
    push_count++;
#endif
}

inline void pop( UNUSED_NAME volatile LispObject& a)
{
#ifdef CONSERVATIVE
    push_count++;
#endif
}

inline void pop(UNUSED_NAME LispObject& a, UNUSED_NAME LispObject& b)
{
#ifdef CONSERVATIVE
    push_count++;
#endif
}

inline void pop(UNUSED_NAME LispObject& a, UNUSED_NAME LispObject& b, UNUSED_NAME LispObject& c)
{
#ifdef CONSERVATIVE
    push_count++;
#endif
}

inline void pop(UNUSED_NAME LispObject& a, UNUSED_NAME LispObject& b, UNUSED_NAME LispObject& c,
                UNUSED_NAME LispObject& d)
{
#ifdef CONSERVATIVE
    push_count++;
#endif
}

inline void pop(UNUSED_NAME LispObject& a, UNUSED_NAME LispObject& b, UNUSED_NAME LispObject& c,
                UNUSED_NAME LispObject& d, UNUSED_NAME LispObject& e)
{
#ifdef CONSERVATIVE
    push_count++;
#endif
}

inline void pop(UNUSED_NAME LispObject& a, UNUSED_NAME LispObject& b, UNUSED_NAME LispObject& c,
                UNUSED_NAME LispObject& d, UNUSED_NAME LispObject& e, UNUSED_NAME LispObject& f)
{
#ifdef CONSERVATIVE
    push_count++;
#endif
}

inline void popv(UNUSED_NAME int n)
{
#ifdef CONSERVATIVE
    push_count++;
#endif
}

class Push
{
public:
    Push(LispObject &a1)
    {
#ifdef CONSERVATIVE
        push_count++;
#endif
    }
    Push(LispObject &a1, LispObject &a2)
    {
#ifdef CONSERVATIVE
        push_count++;
#endif
    }
    Push(LispObject &a1, LispObject &a2, LispObject &a3)
    {
#ifdef CONSERVATIVE
        push_count++;
#endif
    }
    Push(LispObject &a1, LispObject &a2, LispObject &a3,
             LispObject &a4)
    {
#ifdef CONSERVATIVE
        push_count++;
#endif
    }
    Push(LispObject &a1, LispObject &a2, LispObject &a3,
             LispObject &a4, LispObject &a5)
    {
#ifdef CONSERVATIVE
        push_count++;
#endif
    }
    Push(LispObject &a1, LispObject &a2, LispObject &a3,
             LispObject &a4, LispObject &a5, LispObject &a6)
    {
#ifdef CONSERVATIVE
        push_count++;
#endif
    }
    ~Push()
    {
#ifdef CONSERVATIVE
        push_count++;
#endif
    }
};
#endif // TEMP

#else // CONSERVATIVE

// In the non-conservative world oushing and popping must always happen.
// I just have copies of the relevant code here rather than making one
// varient call the other.

inline void push(LispObject a)
{   *++stack = a;
}

inline void push(LispObject a, LispObject b)
{   *++stack = a;
    *++stack = b;
}

inline void push(LispObject a, LispObject b, LispObject c)
{   *++stack = a;
    *++stack = b;
    *++stack = c;
}

inline void push(LispObject a, LispObject b, LispObject c,
                 LispObject d)
{   *++stack = a;
    *++stack = b;
    *++stack = c;
    *++stack = d;
}

inline void push(LispObject a, LispObject b, LispObject c,
                 LispObject d, LispObject e)
{   *++stack = a;
    *++stack = b;
    *++stack = c;
    *++stack = d;
    *++stack = e;
}

inline void push(LispObject a, LispObject b, LispObject c,
                 LispObject d, LispObject e, LispObject f)
{   *++stack = a;
    *++stack = b;
    *++stack = c;
    *++stack = d;
    *++stack = e;
    *++stack = f;
}

inline void pop(LispObject& a)
{   a = *stack--;
}

inline void pop(volatile LispObject& a)
{   a = *stack--;
}

inline void pop(LispObject& a, LispObject& b)
{   a = *stack--;
    b = *stack--;
}

inline void pop(LispObject& a, LispObject& b, LispObject& c)
{   a = *stack--;
    b = *stack--;
    c = *stack--;
}

inline void pop(LispObject& a, LispObject& b, LispObject& c,
                LispObject& d)
{   a = *stack--;
    b = *stack--;
    c = *stack--;
    d = *stack--;
}

inline void pop(LispObject& a, LispObject& b, LispObject& c,
                LispObject& d, LispObject& e)
{   a = *stack--;
    b = *stack--;
    c = *stack--;
    d = *stack--;
    e = *stack--;
}

inline void pop(LispObject& a, LispObject& b, LispObject& c,
                LispObject& d, LispObject& e, LispObject& f)
{   a = *stack--;
    b = *stack--;
    c = *stack--;
    d = *stack--;
    e = *stack--;
    f = *stack--;
}

inline void popv(int n)
{   stack -= n;
}

class Push
{   int n;
    LispObject *v1, *v2, *v3, *v4, *v5, *v6;
// I rather hope that when I create one of these the compiler will
// remember rather than store the count from (n) and all the addresses of
// the variables that I save the values of!
public:
    Push(LispObject &a1)
    {   n = 1;
        v1 = &a1;
        *++stack = a1;
#ifdef CONSERVATIVE
        push_count++;
#endif
    }
    Push(LispObject &a1, LispObject &a2)
    {   n = 2;
        v1 = &a1;
        v2 = &a2;
        *++stack = a1;
        *++stack = a2;
#ifdef CONSERVATIVE
        push_count++;
#endif
    }
    Push(LispObject &a1, LispObject &a2, LispObject &a3)
    {   n = 3;
        v1 = &a1;
        v2 = &a2;
        v3 = &a3;
        *++stack = a1;
        *++stack = a2;
        *++stack = a3;
#ifdef CONSERVATIVE
        push_count++;
#endif
    }
    Push(LispObject &a1, LispObject &a2, LispObject &a3,
             LispObject &a4)
    {   n = 4;
        v1 = &a1;
        v2 = &a2;
        v3 = &a3;
        v4 = &a4;
        *++stack = a1;
        *++stack = a2;
        *++stack = a3;
        *++stack = a4;
#ifdef CONSERVATIVE
        push_count++;
#endif
    }
    Push(LispObject &a1, LispObject &a2, LispObject &a3,
             LispObject &a4, LispObject &a5)
    {   n = 5;
        v1 = &a1;
        v2 = &a2;
        v3 = &a3;
        v4 = &a4;
        v5 = &a5;
        *++stack = a1;
        *++stack = a2;
        *++stack = a3;
        *++stack = a4;
        *++stack = a5;
#ifdef CONSERVATIVE
        push_count++;
#endif
    }
    Push(LispObject &a1, LispObject &a2, LispObject &a3,
             LispObject &a4, LispObject &a5, LispObject &a6)
    {   n = 6;
        v1 = &a1;
        v2 = &a2;
        v3 = &a3;
        v4 = &a4;
        v5 = &a5;
        v6 = &a6;
        *++stack = a1;
        *++stack = a2;
        *++stack = a3;
        *++stack = a4;
        *++stack = a5;
        *++stack = a6;
#ifdef CONSERVATIVE
        push_count++;
#endif
    }
    ~Push()
    {   switch (n)
        {   case 6:
                *v6 = *stack--;
            case 5:
                *v5 = *stack--;
            case 4:
                *v4 = *stack--;
            case 3:
                *v3 = *stack--;
            case 2:
                *v2 = *stack--;
            case 1:
                *v1 = *stack--;
#ifdef CONSERVATIVE
                push_count++;
#endif
        }
    }
};
#endif // CONSERVATIVE

extern volatile bool tick_pending;
extern volatile int unwind_pending;

extern void respond_to_stack_event();

inline void stackcheck0()
{   if_check_stack();
    if ((reinterpret_cast<uintptr_t>(stack) | event_flag.load()) >=
        reinterpret_cast<uintptr_t>(stackLimit)) respond_to_stack_event();
}

inline void stackcheck1(LispObject& a1)
{   if_check_stack();
    if ((reinterpret_cast<uintptr_t>(stack) | event_flag.load()) >=
        reinterpret_cast<uintptr_t>(stackLimit))
    {   push(a1);
        respond_to_stack_event();
        pop(a1);
    }
}

inline void stackcheck2(LispObject& a1, LispObject& a2)
{   if_check_stack();
    if ((reinterpret_cast<uintptr_t>(stack) | event_flag.load()) >=
        reinterpret_cast<uintptr_t>(stackLimit))
    {   push(a1, a2);
        respond_to_stack_event();
        pop(a2, a1);
    }
}

inline void stackcheck3(LispObject& a1, LispObject& a2,
                        LispObject& a3)
{   if_check_stack();
    if ((reinterpret_cast<uintptr_t>(stack) | event_flag.load()) >=
        reinterpret_cast<uintptr_t>(stackLimit))
    {   push(a1, a2, a3);
        respond_to_stack_event();
        pop(a3, a2, a1);
    }
}

inline void stackcheck4(LispObject& a1, LispObject& a2,
                        LispObject& a3, LispObject& a4)
{   if_check_stack();
    if ((reinterpret_cast<uintptr_t>(stack) | event_flag.load()) >=
        reinterpret_cast<uintptr_t>(stackLimit))
    {   push(a1, a2, a3, a4);
        respond_to_stack_event();
        pop(a4, a3, a2, a1);
    }
}

// Now overloads...

inline void stackcheck()
{   if_check_stack();
    if ((reinterpret_cast<uintptr_t>(stack) | event_flag.load()) >=
        reinterpret_cast<uintptr_t>(stackLimit)) respond_to_stack_event();
}

inline void stackcheck(LispObject& a1)
{   if_check_stack();
    if ((reinterpret_cast<uintptr_t>(stack) | event_flag.load()) >=
        reinterpret_cast<uintptr_t>(stackLimit))
    {   push(a1);
        respond_to_stack_event();
        pop(a1);
    }
}

inline void stackcheck(LispObject& a1, LispObject& a2)
{   if_check_stack();
    if ((reinterpret_cast<uintptr_t>(stack) | event_flag.load()) >=
        reinterpret_cast<uintptr_t>(stackLimit))
    {   push(a1, a2);
        respond_to_stack_event();
        pop(a2, a1);
    }
}

inline void stackcheck(LispObject& a1, LispObject& a2, LispObject& a3)
{   if_check_stack();
    if ((reinterpret_cast<uintptr_t>(stack) | event_flag.load()) >=
        reinterpret_cast<uintptr_t>(stackLimit))
    {   push(a1, a2, a3);
        respond_to_stack_event();
        pop(a3, a2, a1);
    }
}

inline void stackcheck(LispObject& a1, LispObject& a2,
                       LispObject& a3, LispObject& a4)
{   if_check_stack();
    if ((reinterpret_cast<uintptr_t>(stack) | event_flag.load()) >=
        reinterpret_cast<uintptr_t>(stackLimit))
    {   push(a1, a2, a3, a4);
        respond_to_stack_event();
        pop(a4, a3, a2, a1);
    }
}

inline void respond_to_fringe_event(LispObject &r, const char *msg)
{
// One possibility is that this is a genuine case of the current part of the
// heap having become full, and so I need to invoke garbage collection to
// try to tidy up.
#ifdef BOOTSTRAP
// The bootstrap version provides a special scheme that is present to
// help me debug storage management. It is set up by calling the Lisp-level
// function gc-forcer. That sets a variable force_cons and each time
// the system checks for space that is decremented. When it becomes zero
// the respond_to_fringe_event() function is called with its second
// argument nullptr. No fringes have been messed with. The system should just
// invoke the garbage collector and return. The intent here is to provide
// a way to force garbage collection at specific (if rather hard to compute!)
// moments.
    if (msg == nullptr)
    {
#ifdef CONSERVATIVE
        reclaim("gc-forcer");
#else
// With a precise collector r is a variable that must be preserved.
        r = reclaim(r, "gc-forcer", GC_USER_HARD, 0);
#endif
        return;
    }
#endif // BOOTSTRAP
//
// If an asynchronous event has arisen then event_flag has an interesting
// value. I want to read and reset it atomically, and these two lines
// using compare_exchange_weak() should achieve that.
    uintptr_t f = event_flag.load();
    while (!event_flag.compare_exchange_weak(f, 0)) {}
// Now one possibility is that this is a perfectly normal ordinary case
// for garbage collection because event_flag had been zero. In that case
// just garbage collect.
    if (f == 0)
    {
#ifdef CONSERVATIVE
        reclaim(msg);
#else
        r = reclaim(r, "gc-forcer", GC_USER_HARD, 0);
#endif
        return;
    }
}

// If I know just how many items will need removing from the stack I
// can create an instance of this class and the stack will be popped when
// that goes out of scope. I rather hope that good compilers will perform
// constant propagation if the argument is a literal constant and so there
// will be no need to store the field "n" that is shown in the class.

class stack_popper
{   int n;
public:
    stack_popper(int nn)
    {   n = nn;
    }
    ~stack_popper()
    {   popv(n);
    }
};

// Sometimes it could be that calls within the scope of a block might
// exit (eg via a throw) in a way that means that the exact state of the
// stack is uncertain. This resets it at block exit. It is liable to involve
// keeping the stackSave value around, and so stack_popper is to be
// preferred where it can be used.

class stack_restorer
{   LispObject *stackSave;
public:
    stack_restorer()
    {   stackSave = stack;
    }
    ~stack_restorer()
    {   stack = stackSave;
    }
};

// I the interpreter need to save the variable current_function at times

class save_current_function
{   LispObject *savestack;
public:
    save_current_function(LispObject newfn)
    {   real_push(current_function);
        savestack = stack;
        current_function = newfn;
    }
    ~save_current_function()
    {   stack = savestack;
        real_pop(current_function);
    }
};

// I am going to need to unbind fluids in the C++ code that I
// sometimes traslate Lisp into. Here is a helper class that will
// be useful for that.

class bind_fluid_stack
{   LispObject *savestack;
    int env_loc;
    int name_loc;
    int val_loc;
public:
    bind_fluid_stack(int e, int name, int val)
    {   savestack = stack;
        env_loc = e;
        name_loc = name;
        val_loc = val;
#ifdef TRACE_FLUID
// While I was debugging things being able to enable some printing here
// seemed a good idea!
        debug_printf("bind_fluid_stack(%d, %d, %d) @ %p\n", e, name, val,
                     stack);
        debug_printf("name="); prin_to_debug(elt(savestack[e], name));
        debug_printf(" old-val=");
        prin_to_debug(qvalue(elt(savestack[e], name)));
        debug_printf("\n");
#endif
        savestack[val] = qvalue(elt(savestack[e], name));
    }
    ~bind_fluid_stack()
    {
#ifdef TRACE_FLUID
        debug_printf("restore(%d, %d, %d) @ %p\n", env_loc, name_loc, val_loc,
                     savestack);
        debug_printf("name=");
        prin_to_debug(elt(savestack[env_loc], name_loc));
        debug_printf(" local-val=");
        prin_to_debug(qvalue(elt(savestack[env_loc], name_loc)));
        debug_printf(" restored-val="); prin_to_debug(savestack[val_loc]);
        debug_printf("\n");
#endif
        setvalue(elt(savestack[env_loc], name_loc), savestack[val_loc]);
// atomic????
    }
};


// I will have a number of exception types. I will NOT make them carry
// Lisp data with them even though that might seem reasonable. This is
// because during the processing of a throw some finalization can occur,
// and if on occasion that managed to cause garbage collection I would
// not be confident that the GC could find the exception object to
// treat it as a list base. So accompanying Lisp data is stored in separate
// variables.

enum LispException
{
// LispNormal is for circumstances when no throw-like situation is in play. 
    LispNormal      = 0x00,

// The next three are all varieties of error states.
    LispError       = 0x11,
    LispSignal      = 0x21,
    LispResource    = 0x31,

// Now thee that are used to implement Lisp control structures within
// the interpreter.
    LispGo          = 0x12,
    LispReturnFrom  = 0x22,
    LispThrow       = 0x32,

// A final case exits from everythind and then sometimes restarts.
    LispRestart     = 0x13

};

inline int exceptionFlag = LispNormal;

inline bool errorState()
{   return (exceptionFlag & 0xf) == 1;
}
inline bool exceptionPending()
{   return exceptionFlag != LispNormal;
}

// If I build for debugging I will verify that the stack pointer is
// properly unchanged across some scopes. This will help...

class RAIIstack_sanity
{   LispObject *saveStack;
    const char *fname;
    const char *file;
    int line;
    LispObject w;
public:
    RAIIstack_sanity(const char *fn, const char *fi, int li)
    {   saveStack = stack;
        fname = fn;
        file = fi;
        line = li;
        w = nil;
    }
    RAIIstack_sanity(const char *fn, const char *fi, int li,
                     LispObject ww)
    {   saveStack = stack;
        fname = fn;
        file = fi;
        line = li;
        w = ww;
    }
// While I am unwinding the stack because of exception handling the stack
// can remain un-restored. It is only once I have caught the exception
// that it must end up correct. Hence get-out of exceptionFlag is set.
    ~RAIIstack_sanity()
    {   if (saveStack != stack && exceptionFlag == LispNormal)
        {   err_printf("[Stack Consistency fails] %p => %p in %s : %s:%d\n",
                       saveStack, stack, fname, file, line);
            err_printf("Data: ");
            prin_to_error(w);
            err_printf("\n");
            err_printf("exit_count = %d, exit_reason = %d\n",
                       exit_count, exit_reason);
            my_abort();
        }
    }
};

inline const char *tidy_filename(const char *a)
{   const char *b = std::strrchr(a, '/');
    return (b == nullptr ? a : b+1);
}

// If the (Lisp) stack were to get out of step with expectations the
// consequences could be dire. To help me check against that I can use one
// of these two macros. The second takes a LispObject that would then
// appear in any diagnostics about stack confusion. If you are compiling
// production code all that is generated is a null statement. But in debug
// mode an object is created that recordsthe current stack pointer, and
// when it goes out of scope at the end of the block it checks if things
// have been put back as expected.

#ifdef DEBUG
#define STACK_SANITY                                  \
    RAIIstack_sanity stack_sanity_object(__func__,    \
        tidy_filename(__FILE__), __LINE__);
#define STACK_SANITY1(w)                              \
    RAIIstack_sanity stack_sanity_object(__func__,    \
        tidy_filename(__FILE__), __LINE__, w);
#else
#define STACK_SANITY            ;
#define STACK_SANITY1(w)        ;
#endif

// In parts of the interpreter I want to save litvec and codevec and be
// certain that I will restore them at function exit. This macro will help
// me.
// This mess may not be required when I have a conservative garbage collector
// if I then make codevec and litvec local rather than global variables, and
// the result might be both clearer code and less overhead.

class RAIIsave_codevec
{   LispObject *saveStack;
public:
    RAIIsave_codevec()
    {   real_push(litvec, codevec);
        saveStack = stack;
    }
    ~RAIIsave_codevec()
    {   stack = saveStack;
        real_pop(codevec, litvec);
    }
};

#define SAVE_CODEVEC RAIIsave_codevec save_codevec_object;


// First I will comment on protection for push/pop against exceptions that
// might arise, as in
//    push(a, b);
//    <exception or sigaction triggered here>
//    pop(b, a);
// where at present I always take care to restore the stack pointer before
// returning. In the newer model I observe that if the condition that causes
// an abrupt is either a throw or a signal (ending in a longjmp) then the
// caller of the current function is not in general going to be relying on the
// status of the stack -- because it too will be terminated. It will not be
// until the stack frame of some function that needs to recover is reached
// that the stack pointer is required. So I will arrange that the general
// code for that saves a copy of the stack pointer to return to.
//
// The places where this complexity is required include:
// (1) errorset
// (2) Places where fluid variables are re-bound
// (3) Any other place where global state is temporarily
//     reset and needs to be restored at the end of an operation.
//     Eg this may include "rdf" for the stream being read and
//     perhaps explode and compress for the same sort of reason.
// (4) Use of system resources that require finalization.
// (5) Places where data structures are temporarily corrupted and then
//     mended later.
// (6) Some places where backtrace-style reports are called for.
//
// Note that the setjmp/longjmp stuff is something I need to think about a
// a lot harder. Including it represents a run-time cost. I really ought not
// to get any exceptions raised! SIGSEGC, SIGBUS, SIGILL, SIGFPE all
// represent system failures, so ANY recovery at all would be a bonus. Perhaps
// the most common or plausible circumstance for them to arise is on stack
// overflow, and typically some level of recovery or backtrace there is
// really desirable, but continuation of the computation afterwards may well
// not be possible. I believe that SIGFPE only arises on integer division
// by zero, and my code is supposed to check for and avoid that.
// I probably want to reduce my use of signal as much as I can!
//
// Let me try to comment a bit more on those.
// (1) errorset need to trap all errors. It should convert GO, RETURN-FROM
//     and THROW into errors, but be transparent to RESTART and QUIT.
// (2) fluids are bound in the interpreter code for LET, LET*, PROG,
//     PROGV and in the bytecode engine. There are implicit fluid
//     re-bindings of PACKAGE and maybe other things in some IO functions
//     such as RDF. And also the interpreter code for LAMBDA and function
//     application.
// (3) Things like the current input and output streams need to be
//     preserved across functions that use the mechanisms they involve,
//     fo EXPLODE, COMPRESS, ... need review.
// (4) Most obviously OPEN/use/CLOSE on files needs protection.
// (5) The current implementation of some binding code reverses the
//     lists of things to bind and then restores later on.
// (6) Much of the interpreter and where the bytecode execution system is
//     called needs to generate backtraces at times.
//
//
// My sketch of the protocol follows the definitions of a couple of
// RAII classes that it relies on.
//

[[noreturn]] extern void global_longjmp();

#ifndef SAVE_STACK_AND_JB_DEFINED

class RAIIsave_stack_and_jb
{   LispObject *saveStack;
    std::jmp_buf *jbsave;
public:
    RAIIsave_stack_and_jb()
    {   jbsave = global_jb;  // preserve the enclosing jmp_buff.
        saveStack = stack;   // record stack value from entry here.
    }
    ~RAIIsave_stack_and_jb()
    {   global_jb = jbsave;  // restore jmp_buf pointer
        stack = saveStack;   // restore stack
    }
};

#endif

class RAIIsave_stack
{   LispObject *saveStack;
public:
    RAIIsave_stack()
    {   saveStack = stack;   // record stack value from entry here.
    }
    ~RAIIsave_stack()
    {   stack = saveStack;   // restore stack
    }
};


//
// try
// {   jmp_buf jb;
//     RAIIsave_stack_and_jb RAII2_Object; // Save SP and setjmp stuff.
//     if (setjmp(jb) != 0) goto EEE;   // signals convert to exceptions!
//     global_jb = &jb;                 // (*) only set new jmp_buf when ready.
//     <ACTIVITY>
//     if (exceptionPending()) goto EEE;
// }                                    // At end of block destructor is called,
//                                      // both for standard and exception exits.
// Then somewhere I have...
// EEE:
//     if (exceptionFlags != WHATEVER EXPECTED) return;
//     <ERROR ACTIVITY>
//  
//
// Explanation...
//
// First the case when the setjmp stuff can be ignored this just like
// "try { <ACTIVITY> } catch (EEE_t) { <ERROR_ACTIVITY> }" which is simple
// code to handle exceptions that are raised within the C++ world. The extra
// bulk and complication arises because I wish to be able to respond to
// events noticed by sigaction(). For those I will arrange that global_jb points
// at a jmp_buf structure, because regardless of official legality I will
// use longjmp to exit from event handlers. Look up "async signal safe" to
// find explanations and discussions of why this is all delicate! I believe
// that things are liable to fail if the signal arose while a system call
// was being executed, and I hope that events prompted directly by my own
// code and nor arising during system calls will be reasonably safe. But my
// official stance has to be that following an exception it is good if I
// can recover enough to produce a diagnostic, but even that is not
// guaranteed.
//
// The constructor and destructor of RAII (Resource Allocation Is
// Initialization) class save and restore global_jb across the extent of
// the try block.
// The setjmp call starts by returning normally with the value zero, and only
// when that has happened do I update global_jb to point to the new jmp_buf.
// A longjmp that is triggered before the line marked (*) just uses the
// jmp_buf from a synamically enclosing context.
//
// If during <ACTIVITY> there is an event signalled and longjmp is called code
// returns from setjmp for a second time an exception is thrown. On the way out
// of the try block towards the exception handler global_jb should be unwound.
//
// The effect should be that signalled conditions as well as C++ exceptions all
// gather together and are processed by <ERROR_ACTIVITY>.
//
// There is HOPE that the overhead from all this will be fairly low, and that
// specifically the handling of both "try" and the construction and destruction
// of RAII_Object will have almost no cost at run time (at least when compilers
// are used at reasonable optimization levels). The setjmp call does have a cost
// even when no event ends up signalled. There will be a space cost in extra
// tables needed to support unwinding, and the unwinding process itself may
// sometimes involve complicated searches in them and so may have non-trivial
// cost.
//

// Even though I describe things in these comments using "try" and "catch"
// I may use the faked exception scheme!

// The full mess I seem to want is ugly and bulky. I will try hiding it
// away in a number of macros... so the user writes
//    try
//    {   START_TRY_BLOCK;
//        <activity>
//    }
//    catch (LispException &e)
//    { whatever }
// and I will make them write the catch clauses explictly since what will be
// needed there is liable to vary from case to case.

// I provide two variants. One JUST preserves the stack pointer, the more
// costly one converts longjmp activations into throws of LispSignal.

#define START_SETJMP_BLOCK                          \
    std::jmp_buf jb;                                \
    RAIIsave_stack_and_jb save_stack_Object;        \
    switch (setjmp(jb))                             \
    {   default:                                    \
        case 1: exit_reason = UNWIND_SIGNAL;        \
                if (miscflags & HEADLINE_FLAG)      \
                    err_printf("\n+++ Error %s: ", errorset_msg); \
                goto endOfTryBlock;                 \
        case 0: break;                              \
    }                                               \
    global_jb = &jb;

#define START_SETJMP_BLOCK1                         \
    std::jmp_buf jb1;                               \
    RAIIsave_stack_and_jb save_stack_Object1;       \
    switch (setjmp(jb1))                            \
    {   default:                                    \
        case 1: exit_reason = UNWIND_SIGNAL;        \
                if (miscflags & HEADLINE_FLAG)      \
                    err_printf("\n+++ Error %s: ", errorset_msg); \
                goto endOfTryBlock1;                \
        case 0: break;                              \
    }                                               \
    global_jb = &jb1;

#define START_TRY_BLOCK                             \
    RAIIsave_stack save_stack_Object;

// There are places where I need to display part of a backtrace when
// unwinding the stack because of an error.
//
//    on_backtrace(do_something(arg1, arg2, arg3); // commas between args OK
//                 do_something_mode(),            // semicolon separators OK
//                 // Now the error handler
//                 printf("Error in %s\n", "something"));

// In the code for both args of on_backtrace I must go
//    if (exceptionPending()) break;
// where relevant.

#define on_backtrace(a, b, howToExit)               \
    for (;;)                                        \
    {   START_TRY_BLOCK;                            \
        a;                                          \
        break;                                      \
    }                                               \
    switch (exceptionFlag)                          \
    {   case LispError:                             \
        case LispSignal:                            \
        case LispResource:                          \
            for (;;)                                \
            {   int _reason = exit_reason;          \
                int flag = exceptionFlag;           \
                exceptionFlag = LispNormal;         \
                b;                                  \
                exceptionFlag = flag;               \
                exit_reason = _reason;              \
                break;                              \
            }                                       \
        default:                                    \
            howToExit;                              \
        case LispNormal:                            \
            break;                                  \
    }
    

// There are also places where I want to continue after error and
// set a default value if some fragmement of computation fails, and
// others where I wish to ignore errors entirely
//
//    if_error(a = construct_a_list(), a = nil);
//    ignore_error(print_a_message());

#define if_error(a, b)                               \
    {{   START_TRY_BLOCK;                            \
         a;                                          \
     }                                               \
 endOfTryBlock:                                      \
     switch (exceptionFlag)                          \
     {   case LispError:                             \
         case LispSignal:                            \
         case LispResource:                          \
             exceptionFlag = LispNormal;             \
             b;                                      \
     }}

#define ignore_error(a)                              \
    {{   START_TRY_BLOCK;                            \
         a;                                          \
     }                                               \
 endOfTryBlock:                                      \
     switch (exceptionFlag)                          \
     {   case LispError:                             \
         case LispSignal:                            \
         case LispResource:                          \
             exceptionFlag = LispNormal;             \
     }}

// ignore_exception() also recovers after any exception (eg SIGSEGV) gets
// raised. Well the state of non-volatile local variables may be undefined
// after recovery via a signal handler and hence via longjmp. This ignores
// all Lisp "errors" and caught signals are treated as just that. But it
// does not catch Lisp "quit", "restart", "return-from", "throw" or
// "resource-limit" exceptions.

#define ignore_exception(a)                          \
    {{   START_SETJMP_BLOCK;                         \
         a;                                          \
     }                                               \
 endOfTryBlock:                                      \
     exceptionFlag = LispNormal; }

// The simple versions do not set a recovery label because the
// protected block is simple enough not to need one.

#define simple_if_error(a, b)                       \
    {   START_TRY_BLOCK;                            \
        a;                                          \
    }                                               \
    switch (exceptionFlag)                          \
    {   case LispError:                             \
        case LispSignal:                            \
        case LispResource:                          \
            exceptionFlag = LispNormal;             \
            b;                                      \
    }

#define simple_ignore_error(a)                      \
    {   START_TRY_BLOCK;                            \
        a;                                          \
    }                                               \
    switch (exceptionFlag)                          \
    {   case LispError:                             \
        case LispSignal:                            \
        case LispResource:                          \
            exceptionFlag = LispNormal;             \
    }

#define simple_ignore_exception(a)                  \
    {   START_SETJMP_BLOCK;                         \
        a;                                          \
    }                                               \
    exceptionFlag = LispNormal;


#endif // __lispthrow_h

// end of lispthrow.h
