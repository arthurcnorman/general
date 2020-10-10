
// $destdir/u60.c        Machine generated C code

// $Id$

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cstdarg>
#include <ctime>
#include <csetjmp>
#include <exception>
#include "config.h"

#include "headers.h"


// Code for lie4

static LispObject CC_lie4(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_1130, v_1131, v_1132, v_1133;
#ifdef CHECK_STACK
    if_check_stack;
#endif
#ifdef CONSERVATIVE
    poll();
#else // CONSERVATIVE
    if (++reclaim_trigger_count == reclaim_trigger_target ||
        stack >= stackLimit)
    {
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil, nil, nil, nil, nil);
    real_push(nil, nil, nil, nil, nil);
    real_push(nil, nil, nil, nil, nil);
    stack_popper stack_popper_var(16);
// end of prologue
    stack[-14] = nil;
    stack[-13] = nil;
    stack[-12] = nil;
    stack[-4] = nil;
    v_1130 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-11] = v_1130;
    v_1130 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-10] = v_1130;
    v_1130 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-9] = v_1130;
    v_1132 = basic_elt(env, 1); // l_f
    v_1131 = static_cast<LispObject>(96)+TAG_FIXNUM; // 6
    v_1130 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_1130 = list3(v_1132, v_1131, v_1130);
    env = stack[-15];
    v_1130 = ncons(v_1130);
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 23); // matrix
    v_1130 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 24); // aeval
    v_1130 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    stack[0] = basic_elt(env, 2); // algebraic
    v_1131 = basic_elt(env, 3); // ordv
    v_1130 = static_cast<LispObject>(192)+TAG_FIXNUM; // 12
    v_1130 = list2(v_1131, v_1130);
    env = stack[-15];
    v_1130 = ncons(v_1130);
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 25); // arrayfn
    v_1130 = (*qfn2(fn))(fn, stack[0], v_1130);
    }
    env = stack[-15];
    v_1131 = basic_elt(env, 3); // ordv
    v_1130 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-2] = list2(v_1131, v_1130);
    env = stack[-15];
    v_1131 = basic_elt(env, 3); // ordv
    v_1130 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    stack[-1] = list2(v_1131, v_1130);
    env = stack[-15];
    v_1131 = basic_elt(env, 3); // ordv
    v_1130 = static_cast<LispObject>(112)+TAG_FIXNUM; // 7
    stack[0] = list2(v_1131, v_1130);
    env = stack[-15];
    v_1130 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 24); // aeval
    v_1130 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 26); // setk
    v_1130 = (*qfn2(fn))(fn, stack[0], v_1130);
    }
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 26); // setk
    v_1130 = (*qfn2(fn))(fn, stack[-1], v_1130);
    }
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 26); // setk
    v_1130 = (*qfn2(fn))(fn, stack[-2], v_1130);
    }
    env = stack[-15];
    v_1131 = basic_elt(env, 3); // ordv
    v_1130 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    stack[-2] = list2(v_1131, v_1130);
    env = stack[-15];
    v_1131 = basic_elt(env, 3); // ordv
    v_1130 = static_cast<LispObject>(80)+TAG_FIXNUM; // 5
    stack[-1] = list2(v_1131, v_1130);
    env = stack[-15];
    v_1131 = basic_elt(env, 3); // ordv
    v_1130 = static_cast<LispObject>(144)+TAG_FIXNUM; // 9
    stack[0] = list2(v_1131, v_1130);
    env = stack[-15];
    v_1130 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    {   LispObject fn = basic_elt(env, 24); // aeval
    v_1130 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 26); // setk
    v_1130 = (*qfn2(fn))(fn, stack[0], v_1130);
    }
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 26); // setk
    v_1130 = (*qfn2(fn))(fn, stack[-1], v_1130);
    }
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 26); // setk
    v_1130 = (*qfn2(fn))(fn, stack[-2], v_1130);
    }
    env = stack[-15];
    v_1131 = basic_elt(env, 3); // ordv
    v_1130 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    stack[-2] = list2(v_1131, v_1130);
    env = stack[-15];
    v_1131 = basic_elt(env, 3); // ordv
    v_1130 = static_cast<LispObject>(96)+TAG_FIXNUM; // 6
    stack[-1] = list2(v_1131, v_1130);
    env = stack[-15];
    v_1131 = basic_elt(env, 3); // ordv
    v_1130 = static_cast<LispObject>(176)+TAG_FIXNUM; // 11
    stack[0] = list2(v_1131, v_1130);
    env = stack[-15];
    v_1130 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    {   LispObject fn = basic_elt(env, 24); // aeval
    v_1130 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 26); // setk
    v_1130 = (*qfn2(fn))(fn, stack[0], v_1130);
    }
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 26); // setk
    v_1130 = (*qfn2(fn))(fn, stack[-1], v_1130);
    }
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 26); // setk
    v_1130 = (*qfn2(fn))(fn, stack[-2], v_1130);
    }
    env = stack[-15];
    v_1131 = basic_elt(env, 3); // ordv
    v_1130 = static_cast<LispObject>(128)+TAG_FIXNUM; // 8
    stack[-2] = list2(v_1131, v_1130);
    env = stack[-15];
    v_1131 = basic_elt(env, 3); // ordv
    v_1130 = static_cast<LispObject>(160)+TAG_FIXNUM; // 10
    stack[-1] = list2(v_1131, v_1130);
    env = stack[-15];
    v_1131 = basic_elt(env, 3); // ordv
    v_1130 = static_cast<LispObject>(192)+TAG_FIXNUM; // 12
    stack[0] = list2(v_1131, v_1130);
    env = stack[-15];
    v_1130 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    {   LispObject fn = basic_elt(env, 24); // aeval
    v_1130 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 26); // setk
    v_1130 = (*qfn2(fn))(fn, stack[0], v_1130);
    }
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 26); // setk
    v_1130 = (*qfn2(fn))(fn, stack[-1], v_1130);
    }
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 26); // setk
    v_1130 = (*qfn2(fn))(fn, stack[-2], v_1130);
    }
    env = stack[-15];
    v_1130 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-5] = v_1130;
v_92:
    v_1131 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_1130 = stack[-5];
    v_1130 = difference2(v_1131, v_1130);
    env = stack[-15];
    v_1130 = Lminusp(nil, v_1130);
    env = stack[-15];
    if (v_1130 == nil) goto v_97;
    goto v_91;
v_97:
    v_1132 = basic_elt(env, 1); // l_f
    v_1131 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_1130 = stack[-5];
    stack[0] = list3(v_1132, v_1131, v_1130);
    env = stack[-15];
    v_1133 = basic_elt(env, 4); // cc
    v_1132 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_1131 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_1130 = stack[-5];
    v_1130 = list4(v_1133, v_1132, v_1131, v_1130);
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 27); // aeval!*
    v_1130 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 26); // setk
    v_1130 = (*qfn2(fn))(fn, stack[0], v_1130);
    }
    env = stack[-15];
    v_1132 = basic_elt(env, 1); // l_f
    v_1131 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_1130 = stack[-5];
    stack[0] = list3(v_1132, v_1131, v_1130);
    env = stack[-15];
    v_1133 = basic_elt(env, 4); // cc
    v_1132 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_1131 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_1130 = stack[-5];
    v_1130 = list4(v_1133, v_1132, v_1131, v_1130);
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 27); // aeval!*
    v_1130 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 26); // setk
    v_1130 = (*qfn2(fn))(fn, stack[0], v_1130);
    }
    env = stack[-15];
    v_1132 = basic_elt(env, 1); // l_f
    v_1131 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_1130 = stack[-5];
    stack[0] = list3(v_1132, v_1131, v_1130);
    env = stack[-15];
    v_1133 = basic_elt(env, 4); // cc
    v_1132 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_1131 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_1130 = stack[-5];
    v_1130 = list4(v_1133, v_1132, v_1131, v_1130);
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 27); // aeval!*
    v_1130 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 26); // setk
    v_1130 = (*qfn2(fn))(fn, stack[0], v_1130);
    }
    env = stack[-15];
    v_1132 = basic_elt(env, 1); // l_f
    v_1131 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_1130 = stack[-5];
    stack[0] = list3(v_1132, v_1131, v_1130);
    env = stack[-15];
    v_1133 = basic_elt(env, 4); // cc
    v_1132 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_1131 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_1130 = stack[-5];
    v_1130 = list4(v_1133, v_1132, v_1131, v_1130);
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 27); // aeval!*
    v_1130 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 26); // setk
    v_1130 = (*qfn2(fn))(fn, stack[0], v_1130);
    }
    env = stack[-15];
    v_1132 = basic_elt(env, 1); // l_f
    v_1131 = static_cast<LispObject>(80)+TAG_FIXNUM; // 5
    v_1130 = stack[-5];
    stack[0] = list3(v_1132, v_1131, v_1130);
    env = stack[-15];
    v_1133 = basic_elt(env, 4); // cc
    v_1132 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_1131 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_1130 = stack[-5];
    v_1130 = list4(v_1133, v_1132, v_1131, v_1130);
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 27); // aeval!*
    v_1130 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 26); // setk
    v_1130 = (*qfn2(fn))(fn, stack[0], v_1130);
    }
    env = stack[-15];
    v_1132 = basic_elt(env, 1); // l_f
    v_1131 = static_cast<LispObject>(96)+TAG_FIXNUM; // 6
    v_1130 = stack[-5];
    stack[0] = list3(v_1132, v_1131, v_1130);
    env = stack[-15];
    v_1133 = basic_elt(env, 4); // cc
    v_1132 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_1131 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_1130 = stack[-5];
    v_1130 = list4(v_1133, v_1132, v_1131, v_1130);
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 27); // aeval!*
    v_1130 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 26); // setk
    v_1130 = (*qfn2(fn))(fn, stack[0], v_1130);
    }
    env = stack[-15];
    v_1133 = basic_elt(env, 4); // cc
    v_1132 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_1131 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_1130 = stack[-5];
    stack[-3] = list4(v_1133, v_1132, v_1131, v_1130);
    env = stack[-15];
    v_1133 = basic_elt(env, 4); // cc
    v_1132 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_1131 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_1130 = stack[-5];
    stack[-2] = list4(v_1133, v_1132, v_1131, v_1130);
    env = stack[-15];
    v_1133 = basic_elt(env, 4); // cc
    v_1132 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_1131 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_1130 = stack[-5];
    stack[-1] = list4(v_1133, v_1132, v_1131, v_1130);
    env = stack[-15];
    v_1133 = basic_elt(env, 4); // cc
    v_1132 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_1131 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_1130 = stack[-5];
    stack[0] = list4(v_1133, v_1132, v_1131, v_1130);
    env = stack[-15];
    v_1130 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {   LispObject fn = basic_elt(env, 27); // aeval!*
    v_1130 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 26); // setk
    v_1130 = (*qfn2(fn))(fn, stack[0], v_1130);
    }
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 26); // setk
    v_1130 = (*qfn2(fn))(fn, stack[-1], v_1130);
    }
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 26); // setk
    v_1130 = (*qfn2(fn))(fn, stack[-2], v_1130);
    }
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 26); // setk
    v_1130 = (*qfn2(fn))(fn, stack[-3], v_1130);
    }
    env = stack[-15];
    v_1133 = basic_elt(env, 4); // cc
    v_1132 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_1131 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_1130 = stack[-5];
    stack[-1] = list4(v_1133, v_1132, v_1131, v_1130);
    env = stack[-15];
    stack[0] = basic_elt(env, 5); // minus
    v_1132 = basic_elt(env, 1); // l_f
    v_1131 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_1130 = stack[-5];
    v_1130 = list3(v_1132, v_1131, v_1130);
    env = stack[-15];
    v_1130 = list2(stack[0], v_1130);
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 27); // aeval!*
    v_1130 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 26); // setk
    v_1130 = (*qfn2(fn))(fn, stack[-1], v_1130);
    }
    env = stack[-15];
    v_1133 = basic_elt(env, 4); // cc
    v_1132 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_1131 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_1130 = stack[-5];
    stack[-1] = list4(v_1133, v_1132, v_1131, v_1130);
    env = stack[-15];
    stack[0] = basic_elt(env, 5); // minus
    v_1132 = basic_elt(env, 1); // l_f
    v_1131 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_1130 = stack[-5];
    v_1130 = list3(v_1132, v_1131, v_1130);
    env = stack[-15];
    v_1130 = list2(stack[0], v_1130);
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 27); // aeval!*
    v_1130 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 26); // setk
    v_1130 = (*qfn2(fn))(fn, stack[-1], v_1130);
    }
    env = stack[-15];
    v_1133 = basic_elt(env, 4); // cc
    v_1132 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_1131 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_1130 = stack[-5];
    stack[-1] = list4(v_1133, v_1132, v_1131, v_1130);
    env = stack[-15];
    stack[0] = basic_elt(env, 5); // minus
    v_1132 = basic_elt(env, 1); // l_f
    v_1131 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_1130 = stack[-5];
    v_1130 = list3(v_1132, v_1131, v_1130);
    env = stack[-15];
    v_1130 = list2(stack[0], v_1130);
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 27); // aeval!*
    v_1130 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 26); // setk
    v_1130 = (*qfn2(fn))(fn, stack[-1], v_1130);
    }
    env = stack[-15];
    v_1133 = basic_elt(env, 4); // cc
    v_1132 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_1131 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_1130 = stack[-5];
    stack[-1] = list4(v_1133, v_1132, v_1131, v_1130);
    env = stack[-15];
    stack[0] = basic_elt(env, 5); // minus
    v_1132 = basic_elt(env, 1); // l_f
    v_1131 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_1130 = stack[-5];
    v_1130 = list3(v_1132, v_1131, v_1130);
    env = stack[-15];
    v_1130 = list2(stack[0], v_1130);
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 27); // aeval!*
    v_1130 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 26); // setk
    v_1130 = (*qfn2(fn))(fn, stack[-1], v_1130);
    }
    env = stack[-15];
    v_1133 = basic_elt(env, 4); // cc
    v_1132 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_1131 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_1130 = stack[-5];
    stack[-1] = list4(v_1133, v_1132, v_1131, v_1130);
    env = stack[-15];
    stack[0] = basic_elt(env, 5); // minus
    v_1132 = basic_elt(env, 1); // l_f
    v_1131 = static_cast<LispObject>(80)+TAG_FIXNUM; // 5
    v_1130 = stack[-5];
    v_1130 = list3(v_1132, v_1131, v_1130);
    env = stack[-15];
    v_1130 = list2(stack[0], v_1130);
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 27); // aeval!*
    v_1130 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 26); // setk
    v_1130 = (*qfn2(fn))(fn, stack[-1], v_1130);
    }
    env = stack[-15];
    v_1133 = basic_elt(env, 4); // cc
    v_1132 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_1131 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_1130 = stack[-5];
    stack[-1] = list4(v_1133, v_1132, v_1131, v_1130);
    env = stack[-15];
    stack[0] = basic_elt(env, 5); // minus
    v_1132 = basic_elt(env, 1); // l_f
    v_1131 = static_cast<LispObject>(96)+TAG_FIXNUM; // 6
    v_1130 = stack[-5];
    v_1130 = list3(v_1132, v_1131, v_1130);
    env = stack[-15];
    v_1130 = list2(stack[0], v_1130);
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 27); // aeval!*
    v_1130 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 26); // setk
    v_1130 = (*qfn2(fn))(fn, stack[-1], v_1130);
    }
    env = stack[-15];
    v_1130 = stack[-5];
    v_1130 = add1(v_1130);
    env = stack[-15];
    stack[-5] = v_1130;
    goto v_92;
v_91:
    v_1130 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-8] = v_1130;
v_278:
    v_1131 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_1130 = stack[-8];
    v_1130 = difference2(v_1131, v_1130);
    env = stack[-15];
    v_1130 = Lminusp(nil, v_1130);
    env = stack[-15];
    if (v_1130 == nil) goto v_283;
    goto v_277;
v_283:
    v_1130 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-7] = v_1130;
    v_1130 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-6] = v_1130;
v_293:
    v_1131 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_1130 = stack[-7];
    v_1130 = difference2(v_1131, v_1130);
    env = stack[-15];
    v_1130 = Lminusp(nil, v_1130);
    env = stack[-15];
    if (v_1130 == nil) goto v_299;
    v_1130 = stack[-6];
    goto v_292;
v_299:
    stack[-5] = basic_elt(env, 6); // plus
    stack[-4] = basic_elt(env, 6); // plus
    stack[-1] = basic_elt(env, 7); // times
    v_1133 = basic_elt(env, 4); // cc
    v_1132 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_1131 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_1130 = stack[-7];
    stack[0] = list4(v_1133, v_1132, v_1131, v_1130);
    env = stack[-15];
    v_1133 = basic_elt(env, 4); // cc
    v_1132 = stack[-7];
    v_1131 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_1130 = stack[-8];
    v_1130 = list4(v_1133, v_1132, v_1131, v_1130);
    env = stack[-15];
    stack[-3] = list3(stack[-1], stack[0], v_1130);
    env = stack[-15];
    stack[-1] = basic_elt(env, 7); // times
    v_1133 = basic_elt(env, 4); // cc
    v_1132 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_1131 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_1130 = stack[-7];
    stack[0] = list4(v_1133, v_1132, v_1131, v_1130);
    env = stack[-15];
    v_1133 = basic_elt(env, 4); // cc
    v_1132 = stack[-7];
    v_1131 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_1130 = stack[-8];
    v_1130 = list4(v_1133, v_1132, v_1131, v_1130);
    env = stack[-15];
    stack[-2] = list3(stack[-1], stack[0], v_1130);
    env = stack[-15];
    stack[-1] = basic_elt(env, 7); // times
    v_1133 = basic_elt(env, 4); // cc
    v_1132 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_1131 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_1130 = stack[-7];
    stack[0] = list4(v_1133, v_1132, v_1131, v_1130);
    env = stack[-15];
    v_1133 = basic_elt(env, 4); // cc
    v_1132 = stack[-7];
    v_1131 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_1130 = stack[-8];
    v_1130 = list4(v_1133, v_1132, v_1131, v_1130);
    env = stack[-15];
    v_1130 = list3(stack[-1], stack[0], v_1130);
    env = stack[-15];
    v_1130 = list4(stack[-4], stack[-3], stack[-2], v_1130);
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 27); // aeval!*
    v_1131 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    v_1130 = stack[-6];
    v_1130 = list3(stack[-5], v_1131, v_1130);
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 27); // aeval!*
    v_1130 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    stack[-6] = v_1130;
    v_1130 = stack[-7];
    v_1130 = add1(v_1130);
    env = stack[-15];
    stack[-7] = v_1130;
    goto v_293;
v_292:
    stack[-14] = v_1130;
    v_1130 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-7] = v_1130;
    v_1130 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-6] = v_1130;
v_354:
    v_1131 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_1130 = stack[-7];
    v_1130 = difference2(v_1131, v_1130);
    env = stack[-15];
    v_1130 = Lminusp(nil, v_1130);
    env = stack[-15];
    if (v_1130 == nil) goto v_360;
    v_1130 = stack[-6];
    goto v_353;
v_360:
    stack[-5] = basic_elt(env, 6); // plus
    stack[-4] = basic_elt(env, 6); // plus
    stack[-1] = basic_elt(env, 7); // times
    v_1133 = basic_elt(env, 4); // cc
    v_1132 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_1131 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_1130 = stack[-7];
    stack[0] = list4(v_1133, v_1132, v_1131, v_1130);
    env = stack[-15];
    v_1133 = basic_elt(env, 4); // cc
    v_1132 = stack[-7];
    v_1131 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_1130 = stack[-8];
    v_1130 = list4(v_1133, v_1132, v_1131, v_1130);
    env = stack[-15];
    stack[-3] = list3(stack[-1], stack[0], v_1130);
    env = stack[-15];
    stack[-1] = basic_elt(env, 7); // times
    v_1133 = basic_elt(env, 4); // cc
    v_1132 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_1131 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_1130 = stack[-7];
    stack[0] = list4(v_1133, v_1132, v_1131, v_1130);
    env = stack[-15];
    v_1133 = basic_elt(env, 4); // cc
    v_1132 = stack[-7];
    v_1131 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_1130 = stack[-8];
    v_1130 = list4(v_1133, v_1132, v_1131, v_1130);
    env = stack[-15];
    stack[-2] = list3(stack[-1], stack[0], v_1130);
    env = stack[-15];
    stack[-1] = basic_elt(env, 7); // times
    v_1133 = basic_elt(env, 4); // cc
    v_1132 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_1131 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_1130 = stack[-7];
    stack[0] = list4(v_1133, v_1132, v_1131, v_1130);
    env = stack[-15];
    v_1133 = basic_elt(env, 4); // cc
    v_1132 = stack[-7];
    v_1131 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_1130 = stack[-8];
    v_1130 = list4(v_1133, v_1132, v_1131, v_1130);
    env = stack[-15];
    v_1130 = list3(stack[-1], stack[0], v_1130);
    env = stack[-15];
    v_1130 = list4(stack[-4], stack[-3], stack[-2], v_1130);
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 27); // aeval!*
    v_1131 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    v_1130 = stack[-6];
    v_1130 = list3(stack[-5], v_1131, v_1130);
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 27); // aeval!*
    v_1130 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    stack[-6] = v_1130;
    v_1130 = stack[-7];
    v_1130 = add1(v_1130);
    env = stack[-15];
    stack[-7] = v_1130;
    goto v_354;
v_353:
    stack[-13] = v_1130;
    v_1130 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-7] = v_1130;
    v_1130 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-6] = v_1130;
v_415:
    v_1131 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_1130 = stack[-7];
    v_1130 = difference2(v_1131, v_1130);
    env = stack[-15];
    v_1130 = Lminusp(nil, v_1130);
    env = stack[-15];
    if (v_1130 == nil) goto v_421;
    v_1130 = stack[-6];
    goto v_414;
v_421:
    stack[-5] = basic_elt(env, 6); // plus
    stack[-4] = basic_elt(env, 6); // plus
    stack[-1] = basic_elt(env, 7); // times
    v_1133 = basic_elt(env, 4); // cc
    v_1132 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_1131 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_1130 = stack[-7];
    stack[0] = list4(v_1133, v_1132, v_1131, v_1130);
    env = stack[-15];
    v_1133 = basic_elt(env, 4); // cc
    v_1132 = stack[-7];
    v_1131 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_1130 = stack[-8];
    v_1130 = list4(v_1133, v_1132, v_1131, v_1130);
    env = stack[-15];
    stack[-3] = list3(stack[-1], stack[0], v_1130);
    env = stack[-15];
    stack[-1] = basic_elt(env, 7); // times
    v_1133 = basic_elt(env, 4); // cc
    v_1132 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_1131 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_1130 = stack[-7];
    stack[0] = list4(v_1133, v_1132, v_1131, v_1130);
    env = stack[-15];
    v_1133 = basic_elt(env, 4); // cc
    v_1132 = stack[-7];
    v_1131 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_1130 = stack[-8];
    v_1130 = list4(v_1133, v_1132, v_1131, v_1130);
    env = stack[-15];
    stack[-2] = list3(stack[-1], stack[0], v_1130);
    env = stack[-15];
    stack[-1] = basic_elt(env, 7); // times
    v_1133 = basic_elt(env, 4); // cc
    v_1132 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_1131 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_1130 = stack[-7];
    stack[0] = list4(v_1133, v_1132, v_1131, v_1130);
    env = stack[-15];
    v_1133 = basic_elt(env, 4); // cc
    v_1132 = stack[-7];
    v_1131 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_1130 = stack[-8];
    v_1130 = list4(v_1133, v_1132, v_1131, v_1130);
    env = stack[-15];
    v_1130 = list3(stack[-1], stack[0], v_1130);
    env = stack[-15];
    v_1130 = list4(stack[-4], stack[-3], stack[-2], v_1130);
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 27); // aeval!*
    v_1131 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    v_1130 = stack[-6];
    v_1130 = list3(stack[-5], v_1131, v_1130);
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 27); // aeval!*
    v_1130 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    stack[-6] = v_1130;
    v_1130 = stack[-7];
    v_1130 = add1(v_1130);
    env = stack[-15];
    stack[-7] = v_1130;
    goto v_415;
v_414:
    stack[-12] = v_1130;
    v_1130 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-7] = v_1130;
    v_1130 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-6] = v_1130;
v_476:
    v_1131 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_1130 = stack[-7];
    v_1130 = difference2(v_1131, v_1130);
    env = stack[-15];
    v_1130 = Lminusp(nil, v_1130);
    env = stack[-15];
    if (v_1130 == nil) goto v_482;
    v_1130 = stack[-6];
    goto v_475;
v_482:
    stack[-5] = basic_elt(env, 6); // plus
    stack[-4] = basic_elt(env, 6); // plus
    stack[-1] = basic_elt(env, 7); // times
    v_1133 = basic_elt(env, 4); // cc
    v_1132 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_1131 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_1130 = stack[-7];
    stack[0] = list4(v_1133, v_1132, v_1131, v_1130);
    env = stack[-15];
    v_1133 = basic_elt(env, 4); // cc
    v_1132 = stack[-7];
    v_1131 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_1130 = stack[-8];
    v_1130 = list4(v_1133, v_1132, v_1131, v_1130);
    env = stack[-15];
    stack[-3] = list3(stack[-1], stack[0], v_1130);
    env = stack[-15];
    stack[-1] = basic_elt(env, 7); // times
    v_1133 = basic_elt(env, 4); // cc
    v_1132 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_1131 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_1130 = stack[-7];
    stack[0] = list4(v_1133, v_1132, v_1131, v_1130);
    env = stack[-15];
    v_1133 = basic_elt(env, 4); // cc
    v_1132 = stack[-7];
    v_1131 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_1130 = stack[-8];
    v_1130 = list4(v_1133, v_1132, v_1131, v_1130);
    env = stack[-15];
    stack[-2] = list3(stack[-1], stack[0], v_1130);
    env = stack[-15];
    stack[-1] = basic_elt(env, 7); // times
    v_1133 = basic_elt(env, 4); // cc
    v_1132 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_1131 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_1130 = stack[-7];
    stack[0] = list4(v_1133, v_1132, v_1131, v_1130);
    env = stack[-15];
    v_1133 = basic_elt(env, 4); // cc
    v_1132 = stack[-7];
    v_1131 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_1130 = stack[-8];
    v_1130 = list4(v_1133, v_1132, v_1131, v_1130);
    env = stack[-15];
    v_1130 = list3(stack[-1], stack[0], v_1130);
    env = stack[-15];
    v_1130 = list4(stack[-4], stack[-3], stack[-2], v_1130);
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 27); // aeval!*
    v_1131 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    v_1130 = stack[-6];
    v_1130 = list3(stack[-5], v_1131, v_1130);
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 27); // aeval!*
    v_1130 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    stack[-6] = v_1130;
    v_1130 = stack[-7];
    v_1130 = add1(v_1130);
    env = stack[-15];
    stack[-7] = v_1130;
    goto v_476;
v_475:
    stack[-4] = v_1130;
    v_1130 = stack[-14];
    {   LispObject fn = basic_elt(env, 27); // aeval!*
    v_1131 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    v_1130 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {   LispObject fn = basic_elt(env, 28); // evalneq
    v_1130 = (*qfn2(fn))(fn, v_1131, v_1130);
    }
    env = stack[-15];
    if (v_1130 == nil) goto v_537;
    else goto v_535;
v_537:
    v_1130 = stack[-13];
    {   LispObject fn = basic_elt(env, 27); // aeval!*
    v_1131 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    v_1130 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {   LispObject fn = basic_elt(env, 28); // evalneq
    v_1130 = (*qfn2(fn))(fn, v_1131, v_1130);
    }
    env = stack[-15];
    if (v_1130 == nil) goto v_543;
    else goto v_535;
v_543:
    v_1130 = stack[-12];
    {   LispObject fn = basic_elt(env, 27); // aeval!*
    v_1131 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    v_1130 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {   LispObject fn = basic_elt(env, 28); // evalneq
    v_1130 = (*qfn2(fn))(fn, v_1131, v_1130);
    }
    env = stack[-15];
    if (v_1130 == nil) goto v_549;
    else goto v_535;
v_549:
    v_1130 = stack[-4];
    {   LispObject fn = basic_elt(env, 27); // aeval!*
    v_1131 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    v_1130 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {   LispObject fn = basic_elt(env, 28); // evalneq
    v_1130 = (*qfn2(fn))(fn, v_1131, v_1130);
    }
    env = stack[-15];
    if (v_1130 == nil) goto v_554;
    else goto v_535;
v_554:
    goto v_536;
v_535:
    v_1130 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    {   LispObject fn = basic_elt(env, 27); // aeval!*
    v_1130 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    stack[-8] = v_1130;
    goto v_534;
v_536:
v_534:
    v_1130 = stack[-8];
    v_1130 = add1(v_1130);
    env = stack[-15];
    stack[-8] = v_1130;
    goto v_278;
v_277:
    v_1130 = stack[-14];
    {   LispObject fn = basic_elt(env, 24); // aeval
    v_1131 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    v_1130 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {   LispObject fn = basic_elt(env, 28); // evalneq
    v_1130 = (*qfn2(fn))(fn, v_1131, v_1130);
    }
    env = stack[-15];
    if (v_1130 == nil) goto v_567;
    else goto v_565;
v_567:
    v_1130 = stack[-13];
    {   LispObject fn = basic_elt(env, 24); // aeval
    v_1131 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    v_1130 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {   LispObject fn = basic_elt(env, 28); // evalneq
    v_1130 = (*qfn2(fn))(fn, v_1131, v_1130);
    }
    env = stack[-15];
    if (v_1130 == nil) goto v_573;
    else goto v_565;
v_573:
    v_1130 = stack[-12];
    {   LispObject fn = basic_elt(env, 24); // aeval
    v_1131 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    v_1130 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {   LispObject fn = basic_elt(env, 28); // evalneq
    v_1130 = (*qfn2(fn))(fn, v_1131, v_1130);
    }
    env = stack[-15];
    if (v_1130 == nil) goto v_579;
    else goto v_565;
v_579:
    v_1130 = stack[-4];
    {   LispObject fn = basic_elt(env, 24); // aeval
    v_1131 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    v_1130 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {   LispObject fn = basic_elt(env, 28); // evalneq
    v_1130 = (*qfn2(fn))(fn, v_1131, v_1130);
    }
    env = stack[-15];
    if (v_1130 == nil) goto v_584;
    else goto v_565;
v_584:
    goto v_566;
v_565:
    v_1132 = basic_elt(env, 1); // l_f
    v_1131 = basic_elt(env, 3); // ordv
    v_1130 = basic_elt(env, 4); // cc
    v_1130 = list3(v_1132, v_1131, v_1130);
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 29); // clear
    v_1130 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 24); // aeval
    v_1130 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    v_1130 = basic_elt(env, 8); // "not a Lie algebra"
    {   LispObject fn = basic_elt(env, 30); // rederr
    v_1130 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 24); // aeval
    v_1130 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    goto v_564;
v_566:
v_564:
    v_1130 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {   LispObject fn = basic_elt(env, 24); // aeval
    v_1130 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    stack[-7] = v_1130;
    v_1130 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-1] = v_1130;
v_603:
    v_1131 = static_cast<LispObject>(96)+TAG_FIXNUM; // 6
    v_1130 = stack[-1];
    v_1130 = difference2(v_1131, v_1130);
    env = stack[-15];
    v_1130 = Lminusp(nil, v_1130);
    env = stack[-15];
    if (v_1130 == nil) goto v_608;
    goto v_602;
v_608:
    v_1130 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[0] = v_1130;
v_617:
    v_1131 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_1130 = stack[0];
    v_1130 = difference2(v_1131, v_1130);
    env = stack[-15];
    v_1130 = Lminusp(nil, v_1130);
    env = stack[-15];
    if (v_1130 == nil) goto v_622;
    goto v_616;
v_622:
    v_1132 = basic_elt(env, 1); // l_f
    v_1131 = stack[-1];
    v_1130 = stack[0];
    v_1130 = list3(v_1132, v_1131, v_1130);
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 27); // aeval!*
    v_1131 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    v_1130 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {   LispObject fn = basic_elt(env, 28); // evalneq
    v_1130 = (*qfn2(fn))(fn, v_1131, v_1130);
    }
    env = stack[-15];
    if (v_1130 == nil) goto v_631;
    v_1130 = stack[-1];
    {   LispObject fn = basic_elt(env, 27); // aeval!*
    v_1130 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    stack[-7] = v_1130;
    v_1130 = stack[0];
    {   LispObject fn = basic_elt(env, 27); // aeval!*
    v_1130 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    stack[-11] = v_1130;
    v_1130 = static_cast<LispObject>(96)+TAG_FIXNUM; // 6
    {   LispObject fn = basic_elt(env, 27); // aeval!*
    v_1130 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    stack[-1] = v_1130;
    v_1130 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    {   LispObject fn = basic_elt(env, 27); // aeval!*
    v_1130 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    stack[0] = v_1130;
    goto v_629;
v_631:
v_629:
    v_1130 = stack[0];
    v_1130 = add1(v_1130);
    env = stack[-15];
    stack[0] = v_1130;
    goto v_617;
v_616:
    v_1130 = stack[-1];
    v_1130 = add1(v_1130);
    env = stack[-15];
    stack[-1] = v_1130;
    goto v_603;
v_602:
    v_1131 = stack[-7];
    v_1130 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_1131 == v_1130) goto v_653;
    else goto v_654;
v_653:
    v_1130 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {   LispObject fn = basic_elt(env, 24); // aeval
    v_1130 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    v_1132 = v_1130;
    goto v_652;
v_654:
    v_1131 = stack[-7];
    v_1130 = static_cast<LispObject>(96)+TAG_FIXNUM; // 6
    if (v_1131 == v_1130) goto v_659;
    else goto v_660;
v_659:
    v_1130 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 24); // aeval
    v_1130 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    v_1132 = v_1130;
    goto v_652;
v_660:
    v_1130 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {   LispObject fn = basic_elt(env, 24); // aeval
    v_1130 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    stack[-10] = v_1130;
    v_1130 = stack[-7];
    v_1130 = add1(v_1130);
    env = stack[-15];
    stack[-4] = v_1130;
v_672:
    v_1131 = static_cast<LispObject>(96)+TAG_FIXNUM; // 6
    v_1130 = stack[-4];
    v_1130 = difference2(v_1131, v_1130);
    env = stack[-15];
    v_1130 = Lminusp(nil, v_1130);
    env = stack[-15];
    if (v_1130 == nil) goto v_678;
    goto v_671;
v_678:
    stack[-1] = basic_elt(env, 9); // quotient
    v_1132 = basic_elt(env, 1); // l_f
    v_1131 = stack[-4];
    v_1130 = stack[-11];
    stack[0] = list3(v_1132, v_1131, v_1130);
    env = stack[-15];
    v_1132 = basic_elt(env, 1); // l_f
    v_1131 = stack[-7];
    v_1130 = stack[-11];
    v_1130 = list3(v_1132, v_1131, v_1130);
    env = stack[-15];
    v_1130 = list3(stack[-1], stack[0], v_1130);
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 27); // aeval!*
    v_1130 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    stack[-5] = v_1130;
    v_1130 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-3] = v_1130;
v_698:
    v_1131 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_1130 = stack[-3];
    v_1130 = difference2(v_1131, v_1130);
    env = stack[-15];
    v_1130 = Lminusp(nil, v_1130);
    env = stack[-15];
    if (v_1130 == nil) goto v_703;
    goto v_697;
v_703:
    v_1132 = basic_elt(env, 1); // l_f
    v_1131 = stack[-4];
    v_1130 = stack[-3];
    v_1130 = list3(v_1132, v_1131, v_1130);
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 27); // aeval!*
    stack[-2] = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    stack[-1] = basic_elt(env, 7); // times
    stack[0] = stack[-5];
    v_1132 = basic_elt(env, 1); // l_f
    v_1131 = stack[-7];
    v_1130 = stack[-3];
    v_1130 = list3(v_1132, v_1131, v_1130);
    env = stack[-15];
    v_1130 = list3(stack[-1], stack[0], v_1130);
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 27); // aeval!*
    v_1130 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 28); // evalneq
    v_1130 = (*qfn2(fn))(fn, stack[-2], v_1130);
    }
    env = stack[-15];
    if (v_1130 == nil) goto v_712;
    v_1130 = stack[-4];
    {   LispObject fn = basic_elt(env, 27); // aeval!*
    v_1130 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    stack[-10] = v_1130;
    v_1130 = static_cast<LispObject>(96)+TAG_FIXNUM; // 6
    {   LispObject fn = basic_elt(env, 27); // aeval!*
    v_1130 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    stack[-4] = v_1130;
    v_1130 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    {   LispObject fn = basic_elt(env, 27); // aeval!*
    v_1130 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    stack[-3] = v_1130;
    goto v_710;
v_712:
v_710:
    v_1130 = stack[-3];
    v_1130 = add1(v_1130);
    env = stack[-15];
    stack[-3] = v_1130;
    goto v_698;
v_697:
    v_1130 = stack[-4];
    v_1130 = add1(v_1130);
    env = stack[-15];
    stack[-4] = v_1130;
    goto v_672;
v_671:
    v_1131 = stack[-10];
    v_1130 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_1131 == v_1130) goto v_739;
    else goto v_740;
v_739:
    v_1130 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 24); // aeval
    v_1130 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    v_1132 = v_1130;
    goto v_738;
v_740:
    v_1131 = stack[-10];
    v_1130 = static_cast<LispObject>(96)+TAG_FIXNUM; // 6
    if (v_1131 == v_1130) goto v_745;
    else goto v_746;
v_745:
    v_1130 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    {   LispObject fn = basic_elt(env, 24); // aeval
    v_1130 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    v_1132 = v_1130;
    goto v_738;
v_746:
    v_1130 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {   LispObject fn = basic_elt(env, 24); // aeval
    v_1130 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    stack[-9] = v_1130;
    v_1130 = stack[-10];
    v_1130 = add1(v_1130);
    env = stack[-15];
    stack[-6] = v_1130;
v_758:
    v_1131 = static_cast<LispObject>(96)+TAG_FIXNUM; // 6
    v_1130 = stack[-6];
    v_1130 = difference2(v_1131, v_1130);
    env = stack[-15];
    v_1130 = Lminusp(nil, v_1130);
    env = stack[-15];
    if (v_1130 == nil) goto v_764;
    goto v_757;
v_764:
    stack[-5] = basic_elt(env, 10); // det
    stack[-4] = basic_elt(env, 11); // mat
    v_1132 = basic_elt(env, 1); // l_f
    v_1131 = stack[-7];
    v_1130 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    stack[-1] = list3(v_1132, v_1131, v_1130);
    env = stack[-15];
    v_1132 = basic_elt(env, 1); // l_f
    v_1131 = stack[-7];
    v_1130 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    stack[0] = list3(v_1132, v_1131, v_1130);
    env = stack[-15];
    v_1132 = basic_elt(env, 1); // l_f
    v_1131 = stack[-7];
    v_1130 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_1130 = list3(v_1132, v_1131, v_1130);
    env = stack[-15];
    stack[-3] = list3(stack[-1], stack[0], v_1130);
    env = stack[-15];
    v_1132 = basic_elt(env, 1); // l_f
    v_1131 = stack[-10];
    v_1130 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    stack[-1] = list3(v_1132, v_1131, v_1130);
    env = stack[-15];
    v_1132 = basic_elt(env, 1); // l_f
    v_1131 = stack[-10];
    v_1130 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    stack[0] = list3(v_1132, v_1131, v_1130);
    env = stack[-15];
    v_1132 = basic_elt(env, 1); // l_f
    v_1131 = stack[-10];
    v_1130 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_1130 = list3(v_1132, v_1131, v_1130);
    env = stack[-15];
    stack[-2] = list3(stack[-1], stack[0], v_1130);
    env = stack[-15];
    v_1132 = basic_elt(env, 1); // l_f
    v_1131 = stack[-6];
    v_1130 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    stack[-1] = list3(v_1132, v_1131, v_1130);
    env = stack[-15];
    v_1132 = basic_elt(env, 1); // l_f
    v_1131 = stack[-6];
    v_1130 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    stack[0] = list3(v_1132, v_1131, v_1130);
    env = stack[-15];
    v_1132 = basic_elt(env, 1); // l_f
    v_1131 = stack[-6];
    v_1130 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_1130 = list3(v_1132, v_1131, v_1130);
    env = stack[-15];
    v_1130 = list3(stack[-1], stack[0], v_1130);
    env = stack[-15];
    v_1130 = list4(stack[-4], stack[-3], stack[-2], v_1130);
    env = stack[-15];
    v_1130 = list2(stack[-5], v_1130);
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 27); // aeval!*
    v_1131 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    v_1130 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {   LispObject fn = basic_elt(env, 31); // evalequal
    v_1130 = (*qfn2(fn))(fn, v_1131, v_1130);
    }
    env = stack[-15];
    if (v_1130 == nil) goto v_772;
    stack[-5] = basic_elt(env, 10); // det
    stack[-4] = basic_elt(env, 11); // mat
    v_1132 = basic_elt(env, 1); // l_f
    v_1131 = stack[-7];
    v_1130 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-1] = list3(v_1132, v_1131, v_1130);
    env = stack[-15];
    v_1132 = basic_elt(env, 1); // l_f
    v_1131 = stack[-7];
    v_1130 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    stack[0] = list3(v_1132, v_1131, v_1130);
    env = stack[-15];
    v_1132 = basic_elt(env, 1); // l_f
    v_1131 = stack[-7];
    v_1130 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_1130 = list3(v_1132, v_1131, v_1130);
    env = stack[-15];
    stack[-3] = list3(stack[-1], stack[0], v_1130);
    env = stack[-15];
    v_1132 = basic_elt(env, 1); // l_f
    v_1131 = stack[-10];
    v_1130 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-1] = list3(v_1132, v_1131, v_1130);
    env = stack[-15];
    v_1132 = basic_elt(env, 1); // l_f
    v_1131 = stack[-10];
    v_1130 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    stack[0] = list3(v_1132, v_1131, v_1130);
    env = stack[-15];
    v_1132 = basic_elt(env, 1); // l_f
    v_1131 = stack[-10];
    v_1130 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_1130 = list3(v_1132, v_1131, v_1130);
    env = stack[-15];
    stack[-2] = list3(stack[-1], stack[0], v_1130);
    env = stack[-15];
    v_1132 = basic_elt(env, 1); // l_f
    v_1131 = stack[-6];
    v_1130 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-1] = list3(v_1132, v_1131, v_1130);
    env = stack[-15];
    v_1132 = basic_elt(env, 1); // l_f
    v_1131 = stack[-6];
    v_1130 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    stack[0] = list3(v_1132, v_1131, v_1130);
    env = stack[-15];
    v_1132 = basic_elt(env, 1); // l_f
    v_1131 = stack[-6];
    v_1130 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_1130 = list3(v_1132, v_1131, v_1130);
    env = stack[-15];
    v_1130 = list3(stack[-1], stack[0], v_1130);
    env = stack[-15];
    v_1130 = list4(stack[-4], stack[-3], stack[-2], v_1130);
    env = stack[-15];
    v_1130 = list2(stack[-5], v_1130);
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 27); // aeval!*
    v_1131 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    v_1130 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {   LispObject fn = basic_elt(env, 31); // evalequal
    v_1130 = (*qfn2(fn))(fn, v_1131, v_1130);
    }
    env = stack[-15];
    if (v_1130 == nil) goto v_772;
    stack[-5] = basic_elt(env, 10); // det
    stack[-4] = basic_elt(env, 11); // mat
    v_1132 = basic_elt(env, 1); // l_f
    v_1131 = stack[-7];
    v_1130 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-1] = list3(v_1132, v_1131, v_1130);
    env = stack[-15];
    v_1132 = basic_elt(env, 1); // l_f
    v_1131 = stack[-7];
    v_1130 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    stack[0] = list3(v_1132, v_1131, v_1130);
    env = stack[-15];
    v_1132 = basic_elt(env, 1); // l_f
    v_1131 = stack[-7];
    v_1130 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_1130 = list3(v_1132, v_1131, v_1130);
    env = stack[-15];
    stack[-3] = list3(stack[-1], stack[0], v_1130);
    env = stack[-15];
    v_1132 = basic_elt(env, 1); // l_f
    v_1131 = stack[-10];
    v_1130 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-1] = list3(v_1132, v_1131, v_1130);
    env = stack[-15];
    v_1132 = basic_elt(env, 1); // l_f
    v_1131 = stack[-10];
    v_1130 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    stack[0] = list3(v_1132, v_1131, v_1130);
    env = stack[-15];
    v_1132 = basic_elt(env, 1); // l_f
    v_1131 = stack[-10];
    v_1130 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_1130 = list3(v_1132, v_1131, v_1130);
    env = stack[-15];
    stack[-2] = list3(stack[-1], stack[0], v_1130);
    env = stack[-15];
    v_1132 = basic_elt(env, 1); // l_f
    v_1131 = stack[-6];
    v_1130 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-1] = list3(v_1132, v_1131, v_1130);
    env = stack[-15];
    v_1132 = basic_elt(env, 1); // l_f
    v_1131 = stack[-6];
    v_1130 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    stack[0] = list3(v_1132, v_1131, v_1130);
    env = stack[-15];
    v_1132 = basic_elt(env, 1); // l_f
    v_1131 = stack[-6];
    v_1130 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_1130 = list3(v_1132, v_1131, v_1130);
    env = stack[-15];
    v_1130 = list3(stack[-1], stack[0], v_1130);
    env = stack[-15];
    v_1130 = list4(stack[-4], stack[-3], stack[-2], v_1130);
    env = stack[-15];
    v_1130 = list2(stack[-5], v_1130);
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 27); // aeval!*
    v_1131 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    v_1130 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {   LispObject fn = basic_elt(env, 31); // evalequal
    v_1130 = (*qfn2(fn))(fn, v_1131, v_1130);
    }
    env = stack[-15];
    if (v_1130 == nil) goto v_772;
    stack[-5] = basic_elt(env, 10); // det
    stack[-4] = basic_elt(env, 11); // mat
    v_1132 = basic_elt(env, 1); // l_f
    v_1131 = stack[-7];
    v_1130 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-1] = list3(v_1132, v_1131, v_1130);
    env = stack[-15];
    v_1132 = basic_elt(env, 1); // l_f
    v_1131 = stack[-7];
    v_1130 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    stack[0] = list3(v_1132, v_1131, v_1130);
    env = stack[-15];
    v_1132 = basic_elt(env, 1); // l_f
    v_1131 = stack[-7];
    v_1130 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_1130 = list3(v_1132, v_1131, v_1130);
    env = stack[-15];
    stack[-3] = list3(stack[-1], stack[0], v_1130);
    env = stack[-15];
    v_1132 = basic_elt(env, 1); // l_f
    v_1131 = stack[-10];
    v_1130 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-1] = list3(v_1132, v_1131, v_1130);
    env = stack[-15];
    v_1132 = basic_elt(env, 1); // l_f
    v_1131 = stack[-10];
    v_1130 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    stack[0] = list3(v_1132, v_1131, v_1130);
    env = stack[-15];
    v_1132 = basic_elt(env, 1); // l_f
    v_1131 = stack[-10];
    v_1130 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_1130 = list3(v_1132, v_1131, v_1130);
    env = stack[-15];
    stack[-2] = list3(stack[-1], stack[0], v_1130);
    env = stack[-15];
    v_1132 = basic_elt(env, 1); // l_f
    v_1131 = stack[-6];
    v_1130 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-1] = list3(v_1132, v_1131, v_1130);
    env = stack[-15];
    v_1132 = basic_elt(env, 1); // l_f
    v_1131 = stack[-6];
    v_1130 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    stack[0] = list3(v_1132, v_1131, v_1130);
    env = stack[-15];
    v_1132 = basic_elt(env, 1); // l_f
    v_1131 = stack[-6];
    v_1130 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_1130 = list3(v_1132, v_1131, v_1130);
    env = stack[-15];
    v_1130 = list3(stack[-1], stack[0], v_1130);
    env = stack[-15];
    v_1130 = list4(stack[-4], stack[-3], stack[-2], v_1130);
    env = stack[-15];
    v_1130 = list2(stack[-5], v_1130);
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 27); // aeval!*
    v_1131 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    v_1130 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {   LispObject fn = basic_elt(env, 31); // evalequal
    v_1130 = (*qfn2(fn))(fn, v_1131, v_1130);
    }
    env = stack[-15];
    if (v_1130 == nil) goto v_772;
    goto v_773;
v_772:
    v_1130 = stack[-6];
    {   LispObject fn = basic_elt(env, 27); // aeval!*
    v_1130 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    stack[-9] = v_1130;
    v_1130 = static_cast<LispObject>(96)+TAG_FIXNUM; // 6
    {   LispObject fn = basic_elt(env, 27); // aeval!*
    v_1130 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    stack[-6] = v_1130;
    goto v_771;
v_773:
v_771:
    v_1130 = stack[-6];
    v_1130 = add1(v_1130);
    env = stack[-15];
    stack[-6] = v_1130;
    goto v_758;
v_757:
    v_1131 = stack[-9];
    v_1130 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_1131 == v_1130) goto v_972;
    else goto v_973;
v_972:
    v_1130 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    {   LispObject fn = basic_elt(env, 24); // aeval
    v_1130 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    v_1132 = v_1130;
    goto v_971;
v_973:
    v_1130 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    {   LispObject fn = basic_elt(env, 24); // aeval
    v_1130 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    v_1132 = v_1130;
    goto v_971;
v_971:
    goto v_738;
v_738:
    goto v_652;
v_652:
    v_1131 = v_1132;
    v_1130 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_1131 == v_1130) goto v_984;
    else goto v_985;
v_984:
    v_1130 = qvalue(basic_elt(env, 12)); // !*tr_lie
    {   LispObject fn = basic_elt(env, 32); // revalx
    v_1130 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 33); // boolvalue!*
    v_1130 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    if (v_1130 == nil) goto v_991;
    v_1130 = basic_elt(env, 13); // "Your Lie algebra is commutative"
    {   LispObject fn = basic_elt(env, 24); // aeval
    v_1132 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    v_1131 = nil;
    v_1130 = basic_elt(env, 14); // only
    {   LispObject fn = basic_elt(env, 34); // assgnpri
    v_1130 = (*qfn3(fn))(fn, v_1132, v_1131, v_1130);
    }
    env = stack[-15];
    goto v_989;
v_991:
v_989:
    stack[-2] = basic_elt(env, 15); // lie_class
    stack[-1] = basic_elt(env, 16); // list
    v_1131 = basic_elt(env, 17); // liealg
    v_1130 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    stack[0] = list2(v_1131, v_1130);
    env = stack[-15];
    v_1131 = basic_elt(env, 18); // comtab
    v_1130 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_1130 = list2(v_1131, v_1130);
    env = stack[-15];
    v_1130 = list3(stack[-1], stack[0], v_1130);
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 24); // aeval
    v_1130 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 26); // setk
    v_1130 = (*qfn2(fn))(fn, stack[-2], v_1130);
    }
    env = stack[-15];
    stack[-4] = basic_elt(env, 19); // liemat
    stack[-3] = basic_elt(env, 11); // mat
    v_1133 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_1132 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_1131 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_1130 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-2] = list4(v_1133, v_1132, v_1131, v_1130);
    env = stack[-15];
    v_1133 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_1132 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_1131 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_1130 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-1] = list4(v_1133, v_1132, v_1131, v_1130);
    env = stack[-15];
    v_1133 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_1132 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_1131 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_1130 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[0] = list4(v_1133, v_1132, v_1131, v_1130);
    env = stack[-15];
    v_1133 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_1132 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_1131 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_1130 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_1130 = list4(v_1133, v_1132, v_1131, v_1130);
    env = stack[-15];
    v_1130 = list2(stack[0], v_1130);
    env = stack[-15];
    v_1130 = list3star(stack[-3], stack[-2], stack[-1], v_1130);
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 24); // aeval
    v_1130 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 26); // setk
    v_1130 = (*qfn2(fn))(fn, stack[-4], v_1130);
    }
    env = stack[-15];
    goto v_983;
v_985:
    v_1131 = v_1132;
    v_1130 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    if (v_1131 == v_1130) goto v_1037;
    else goto v_1038;
v_1037:
    stack[-4] = basic_elt(env, 20); // com43
    stack[0] = basic_elt(env, 3); // ordv
    v_1131 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_1130 = stack[-7];
    v_1130 = times2(v_1131, v_1130);
    env = stack[-15];
    v_1130 = sub1(v_1130);
    env = stack[-15];
    stack[-3] = list2(stack[0], v_1130);
    env = stack[-15];
    stack[0] = basic_elt(env, 3); // ordv
    v_1131 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_1130 = stack[-7];
    v_1130 = times2(v_1131, v_1130);
    env = stack[-15];
    stack[-5] = list2(stack[0], v_1130);
    env = stack[-15];
    stack[0] = basic_elt(env, 3); // ordv
    v_1131 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_1130 = stack[-10];
    v_1130 = times2(v_1131, v_1130);
    env = stack[-15];
    v_1130 = sub1(v_1130);
    env = stack[-15];
    stack[-2] = list2(stack[0], v_1130);
    env = stack[-15];
    stack[0] = basic_elt(env, 3); // ordv
    v_1131 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_1130 = stack[-10];
    v_1130 = times2(v_1131, v_1130);
    env = stack[-15];
    stack[-6] = list2(stack[0], v_1130);
    env = stack[-15];
    stack[0] = basic_elt(env, 3); // ordv
    v_1131 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_1130 = stack[-9];
    v_1130 = times2(v_1131, v_1130);
    env = stack[-15];
    v_1130 = sub1(v_1130);
    env = stack[-15];
    stack[-1] = list2(stack[0], v_1130);
    env = stack[-15];
    stack[0] = basic_elt(env, 3); // ordv
    v_1131 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_1130 = stack[-9];
    v_1130 = times2(v_1131, v_1130);
    env = stack[-15];
    v_1130 = list2(stack[0], v_1130);
    env = stack[-15];
    v_1130 = list4(stack[-2], stack[-6], stack[-1], v_1130);
    env = stack[-15];
    v_1130 = list3star(stack[-4], stack[-3], stack[-5], v_1130);
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 24); // aeval
    v_1130 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    goto v_983;
v_1038:
    v_1131 = v_1132;
    v_1130 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_1131 == v_1130) goto v_1078;
    else goto v_1079;
v_1078:
    stack[-2] = basic_elt(env, 21); // com41
    stack[0] = basic_elt(env, 3); // ordv
    v_1131 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_1130 = stack[-7];
    v_1130 = times2(v_1131, v_1130);
    env = stack[-15];
    v_1130 = sub1(v_1130);
    env = stack[-15];
    stack[-1] = list2(stack[0], v_1130);
    env = stack[-15];
    stack[0] = basic_elt(env, 3); // ordv
    v_1131 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_1130 = stack[-7];
    v_1130 = times2(v_1131, v_1130);
    env = stack[-15];
    v_1131 = list2(stack[0], v_1130);
    env = stack[-15];
    v_1130 = stack[-11];
    v_1130 = list4(stack[-2], stack[-1], v_1131, v_1130);
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 24); // aeval
    v_1130 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    goto v_983;
v_1079:
    stack[-3] = basic_elt(env, 22); // com42
    stack[0] = basic_elt(env, 3); // ordv
    v_1131 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_1130 = stack[-7];
    v_1130 = times2(v_1131, v_1130);
    env = stack[-15];
    v_1130 = sub1(v_1130);
    env = stack[-15];
    stack[-2] = list2(stack[0], v_1130);
    env = stack[-15];
    stack[0] = basic_elt(env, 3); // ordv
    v_1131 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_1130 = stack[-7];
    v_1130 = times2(v_1131, v_1130);
    env = stack[-15];
    stack[-4] = list2(stack[0], v_1130);
    env = stack[-15];
    stack[0] = basic_elt(env, 3); // ordv
    v_1131 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_1130 = stack[-10];
    v_1130 = times2(v_1131, v_1130);
    env = stack[-15];
    v_1130 = sub1(v_1130);
    env = stack[-15];
    stack[-1] = list2(stack[0], v_1130);
    env = stack[-15];
    stack[0] = basic_elt(env, 3); // ordv
    v_1131 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_1130 = stack[-10];
    v_1130 = times2(v_1131, v_1130);
    env = stack[-15];
    v_1130 = list2(stack[0], v_1130);
    env = stack[-15];
    v_1130 = list2(stack[-1], v_1130);
    env = stack[-15];
    v_1130 = list3star(stack[-3], stack[-2], stack[-4], v_1130);
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 24); // aeval
    v_1130 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    goto v_983;
v_983:
    v_1131 = basic_elt(env, 3); // ordv
    v_1130 = basic_elt(env, 1); // l_f
    v_1130 = list2(v_1131, v_1130);
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 29); // clear
    v_1130 = (*qfn1(fn))(fn, v_1130);
    }
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 24); // aeval
    v_1130 = (*qfn1(fn))(fn, v_1130);
    }
    v_1130 = nil;
    return onevalue(v_1130);
}



// Code for make!-image!-lc!-list1

static LispObject CC_makeKimageKlcKlist1(LispObject env,
                         LispObject v_3, LispObject v_4,
                         LispObject v_5)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_98, v_99, v_100;
#ifdef CHECK_STACK
    if_check_stack;
#endif
#ifdef CONSERVATIVE
    poll();
#else // CONSERVATIVE
    if (++reclaim_trigger_count == reclaim_trigger_target ||
        stack >= stackLimit)
    {
        push(v_3,v_4,v_5);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_5,v_4,v_3);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil, nil, nil, nil, nil);
    stack_popper stack_popper_var(6);
// copy arguments values to proper place
    v_98 = v_5;
    stack[-3] = v_4;
    v_100 = v_3;
// end of prologue
// Binding varlist
// FLUIDBIND: reloadenv=5 litvec-offset=1 saveloc=4
{   bind_fluid_stack bind_fluid_var(-5, 1, -4);
    setvalue(basic_elt(env, 1), v_98); // varlist
v_14:
    v_98 = stack[-3];
    if (v_98 == nil) goto v_17;
    else goto v_18;
v_17:
    v_98 = nil;
    goto v_13;
v_18:
    v_98 = v_100;
    if (!consp(v_98)) goto v_25;
    else goto v_26;
v_25:
    v_98 = lisp_true;
    goto v_24;
v_26:
    v_98 = v_100;
    if (!car_legal(v_98)) v_98 = carerror(v_98); else
    v_98 = car(v_98);
    v_98 = (consp(v_98) ? nil : lisp_true);
    goto v_24;
    v_98 = nil;
v_24:
    if (v_98 == nil) goto v_22;
    v_98 = v_100;
    {   LispObject fn = basic_elt(env, 3); // !*d2n
    v_99 = (*qfn1(fn))(fn, v_98);
    }
    env = stack[-5];
    v_98 = qvalue(basic_elt(env, 1)); // varlist
    if (!car_legal(v_98)) v_98 = cdrerror(v_98); else
    v_98 = cdr(v_98);
    v_98 = cons(v_99, v_98);
    env = stack[-5];
    v_98 = ncons(v_98);
    goto v_13;
v_22:
    v_98 = v_100;
    if (!car_legal(v_98)) v_98 = carerror(v_98); else
    v_98 = car(v_98);
    if (!car_legal(v_98)) v_98 = carerror(v_98); else
    v_98 = car(v_98);
    if (!car_legal(v_98)) v_99 = carerror(v_98); else
    v_99 = car(v_98);
    v_98 = stack[-3];
    if (!car_legal(v_98)) v_98 = carerror(v_98); else
    v_98 = car(v_98);
    if (!car_legal(v_98)) v_98 = carerror(v_98); else
    v_98 = car(v_98);
    if (equal(v_99, v_98)) goto v_40;
    else goto v_41;
v_40:
    stack[-2] = v_100;
    v_98 = stack[-3];
    if (!car_legal(v_98)) v_98 = carerror(v_98); else
    v_98 = car(v_98);
    if (!car_legal(v_98)) stack[-1] = carerror(v_98); else
    stack[-1] = car(v_98);
    v_98 = stack[-3];
    if (!car_legal(v_98)) v_98 = carerror(v_98); else
    v_98 = car(v_98);
    if (!car_legal(v_98)) stack[0] = cdrerror(v_98); else
    stack[0] = cdr(v_98);
    v_98 = qvalue(basic_elt(env, 2)); // polyzero
    v_99 = v_100;
    if (!car_legal(v_99)) v_99 = carerror(v_99); else
    v_99 = car(v_99);
    if (!car_legal(v_99)) v_99 = carerror(v_99); else
    v_99 = car(v_99);
    if (!car_legal(v_99)) v_99 = cdrerror(v_99); else
    v_99 = cdr(v_99);
    v_98 = list2(v_98, v_99);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 4); // horner!-rule!-for!-one!-var
    v_99 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_98);
    }
    env = stack[-5];
    v_98 = qvalue(basic_elt(env, 1)); // varlist
    if (!car_legal(v_98)) v_98 = cdrerror(v_98); else
    v_98 = cdr(v_98);
    v_98 = cons(v_99, v_98);
    env = stack[-5];
    v_99 = v_98;
    if (!car_legal(v_99)) v_99 = carerror(v_99); else
    v_99 = car(v_99);
    if (v_99 == nil) goto v_71;
    else goto v_72;
v_71:
    v_99 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (!car_legal(v_98)) v_98 = cdrerror(v_98); else
    v_98 = cdr(v_98);
    v_98 = cons(v_99, v_98);
    env = stack[-5];
    v_98 = ncons(v_98);
    goto v_70;
v_72:
    stack[0] = v_98;
    if (!car_legal(v_98)) v_100 = carerror(v_98); else
    v_100 = car(v_98);
    v_98 = stack[-3];
    if (!car_legal(v_98)) v_99 = cdrerror(v_98); else
    v_99 = cdr(v_98);
    v_98 = qvalue(basic_elt(env, 1)); // varlist
    if (!car_legal(v_98)) v_98 = cdrerror(v_98); else
    v_98 = cdr(v_98);
    {   LispObject fn = basic_elt(env, 0); // make!-image!-lc!-list1
    v_98 = (*qfn3(fn))(fn, v_100, v_99, v_98);
    }
    env = stack[-5];
    v_98 = cons(stack[0], v_98);
    goto v_70;
    v_98 = nil;
v_70:
    goto v_13;
v_41:
    v_98 = stack[-3];
    if (!car_legal(v_98)) v_98 = cdrerror(v_98); else
    v_98 = cdr(v_98);
    stack[-3] = v_98;
    v_98 = qvalue(basic_elt(env, 1)); // varlist
    if (!car_legal(v_98)) v_98 = cdrerror(v_98); else
    v_98 = cdr(v_98);
    setvalue(basic_elt(env, 1), v_98); // varlist
    goto v_14;
    v_98 = nil;
v_13:
    ;}  // end of a binding scope
    return onevalue(v_98);
}



// Code for rdzchk

static LispObject CC_rdzchk(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_131, v_132;
#ifdef CHECK_STACK
    if_check_stack;
#endif
#ifdef CONSERVATIVE
    poll();
#else // CONSERVATIVE
    if (++reclaim_trigger_count == reclaim_trigger_target ||
        stack >= stackLimit)
    {
        push(v_2,v_3,v_4);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_4,v_3,v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[0] = v_4;
    stack[-1] = v_3;
    stack[-2] = v_2;
// end of prologue
    v_131 = stack[-2];
    if (!consp(v_131)) goto v_8;
    else goto v_9;
v_8:
    v_132 = stack[-2];
    v_131 = basic_elt(env, 1); // 0.0
    if (equal(v_132, v_131)) goto v_17;
    else goto v_18;
v_17:
    v_131 = lisp_true;
    goto v_16;
v_18:
    v_132 = stack[-1];
    v_131 = basic_elt(env, 1); // 0.0
    v_131 = static_cast<LispObject>(greaterp2(v_132, v_131));
    v_131 = v_131 ? lisp_true : nil;
    env = stack[-3];
    if (v_131 == nil) goto v_29;
    else goto v_30;
v_29:
    v_131 = nil;
    goto v_28;
v_30:
    v_132 = stack[0];
    v_131 = basic_elt(env, 1); // 0.0
    v_131 = static_cast<LispObject>(greaterp2(v_132, v_131));
    v_131 = v_131 ? lisp_true : nil;
    env = stack[-3];
    goto v_28;
    v_131 = nil;
v_28:
    if (v_131 == nil) goto v_26;
    else goto v_25;
v_26:
    v_132 = stack[-1];
    v_131 = basic_elt(env, 1); // 0.0
    v_131 = static_cast<LispObject>(lessp2(v_132, v_131));
    v_131 = v_131 ? lisp_true : nil;
    env = stack[-3];
    if (v_131 == nil) goto v_42;
    else goto v_43;
v_42:
    v_131 = nil;
    goto v_41;
v_43:
    v_132 = stack[0];
    v_131 = basic_elt(env, 1); // 0.0
    v_131 = static_cast<LispObject>(lessp2(v_132, v_131));
    v_131 = v_131 ? lisp_true : nil;
    env = stack[-3];
    goto v_41;
    v_131 = nil;
v_41:
v_25:
    goto v_16;
    v_131 = nil;
v_16:
    if (v_131 == nil) goto v_14;
    v_131 = stack[-2];
    goto v_12;
v_14:
    v_131 = stack[-2];
    stack[0] = Labsval(nil, v_131);
    env = stack[-3];
    v_131 = stack[-1];
    v_132 = Labsval(nil, v_131);
    env = stack[-3];
    v_131 = qvalue(basic_elt(env, 2)); // !!fleps1
    v_131 = times2(v_132, v_131);
    env = stack[-3];
    v_131 = static_cast<LispObject>(lessp2(stack[0], v_131));
    v_131 = v_131 ? lisp_true : nil;
    env = stack[-3];
    if (v_131 == nil) goto v_55;
    v_131 = basic_elt(env, 1); // 0.0
    goto v_12;
v_55:
    v_131 = stack[-2];
    goto v_12;
    v_131 = nil;
v_12:
    goto v_7;
v_9:
    v_131 = stack[-2];
    if (!car_legal(v_131)) v_131 = cdrerror(v_131); else
    v_131 = cdr(v_131);
    if (!car_legal(v_131)) v_132 = carerror(v_131); else
    v_132 = car(v_131);
    v_131 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_132 == v_131) goto v_71;
    else goto v_72;
v_71:
    v_131 = lisp_true;
    goto v_70;
v_72:
    v_131 = stack[-1];
    if (!car_legal(v_131)) v_131 = cdrerror(v_131); else
    v_131 = cdr(v_131);
    if (!car_legal(v_131)) v_132 = carerror(v_131); else
    v_132 = car(v_131);
    v_131 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_131 = static_cast<LispObject>(greaterp2(v_132, v_131));
    v_131 = v_131 ? lisp_true : nil;
    env = stack[-3];
    if (v_131 == nil) goto v_85;
    else goto v_86;
v_85:
    v_131 = nil;
    goto v_84;
v_86:
    v_131 = stack[0];
    if (!car_legal(v_131)) v_131 = cdrerror(v_131); else
    v_131 = cdr(v_131);
    if (!car_legal(v_131)) v_132 = carerror(v_131); else
    v_132 = car(v_131);
    v_131 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_131 = static_cast<LispObject>(greaterp2(v_132, v_131));
    v_131 = v_131 ? lisp_true : nil;
    env = stack[-3];
    goto v_84;
    v_131 = nil;
v_84:
    if (v_131 == nil) goto v_82;
    else goto v_81;
v_82:
    v_131 = stack[-1];
    if (!car_legal(v_131)) v_131 = cdrerror(v_131); else
    v_131 = cdr(v_131);
    if (!car_legal(v_131)) v_132 = carerror(v_131); else
    v_132 = car(v_131);
    v_131 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_131 = static_cast<LispObject>(lessp2(v_132, v_131));
    v_131 = v_131 ? lisp_true : nil;
    env = stack[-3];
    if (v_131 == nil) goto v_102;
    else goto v_103;
v_102:
    v_131 = nil;
    goto v_101;
v_103:
    v_131 = stack[0];
    if (!car_legal(v_131)) v_131 = cdrerror(v_131); else
    v_131 = cdr(v_131);
    if (!car_legal(v_131)) v_132 = carerror(v_131); else
    v_132 = car(v_131);
    v_131 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_131 = static_cast<LispObject>(lessp2(v_132, v_131));
    v_131 = v_131 ? lisp_true : nil;
    env = stack[-3];
    goto v_101;
    v_131 = nil;
v_101:
v_81:
    goto v_70;
    v_131 = nil;
v_70:
    if (v_131 == nil) goto v_68;
    v_131 = stack[-2];
    goto v_7;
v_68:
    v_131 = stack[-2];
    {   LispObject fn = basic_elt(env, 5); // abs!:
    stack[0] = (*qfn1(fn))(fn, v_131);
    }
    env = stack[-3];
    v_131 = stack[-1];
    {   LispObject fn = basic_elt(env, 5); // abs!:
    v_132 = (*qfn1(fn))(fn, v_131);
    }
    env = stack[-3];
    v_131 = qvalue(basic_elt(env, 3)); // rd!-tolerance!*
    {   LispObject fn = basic_elt(env, 6); // times!:
    v_131 = (*qfn2(fn))(fn, v_132, v_131);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 7); // lessp!:
    v_131 = (*qfn2(fn))(fn, stack[0], v_131);
    }
    env = stack[-3];
    if (v_131 == nil) goto v_119;
    v_131 = qvalue(basic_elt(env, 4)); // bfz!*
    goto v_7;
v_119:
    v_131 = stack[-2];
    goto v_7;
    v_131 = nil;
v_7:
    return onevalue(v_131);
}



// Code for memlis

static LispObject CC_memlis(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_26, v_27, v_28, v_29;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_27 = v_3;
    v_28 = v_2;
// end of prologue
v_7:
    v_26 = v_27;
    if (v_26 == nil) goto v_10;
    else goto v_11;
v_10:
    v_26 = nil;
    goto v_6;
v_11:
    v_29 = v_28;
    v_26 = v_27;
    if (!car_legal(v_26)) v_26 = carerror(v_26); else
    v_26 = car(v_26);
    v_26 = Lmember(nil, v_29, v_26);
    if (v_26 == nil) goto v_15;
    v_26 = v_27;
    if (!car_legal(v_26)) v_26 = carerror(v_26); else
    v_26 = car(v_26);
    goto v_6;
v_15:
    v_26 = v_27;
    if (!car_legal(v_26)) v_26 = cdrerror(v_26); else
    v_26 = cdr(v_26);
    v_27 = v_26;
    goto v_7;
    v_26 = nil;
v_6:
    return onevalue(v_26);
}



// Code for modular!-factor!-count

static LispObject CC_modularKfactorKcount(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_114, v_115, v_116;
#ifdef CHECK_STACK
    if_check_stack;
#endif
#ifdef CONSERVATIVE
    poll();
#else // CONSERVATIVE
    if (++reclaim_trigger_count == reclaim_trigger_target ||
        stack >= stackLimit)
    {
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil, nil, nil, nil, nil);
    real_push(nil);
    stack_popper stack_popper_var(7);
// end of prologue
// Binding poly!-vector
// FLUIDBIND: reloadenv=6 litvec-offset=1 saveloc=5
{   bind_fluid_stack bind_fluid_var(-6, 1, -5);
    setvalue(basic_elt(env, 1), nil); // poly!-vector
// Binding null!-space!-basis
// FLUIDBIND: reloadenv=6 litvec-offset=2 saveloc=4
{   bind_fluid_stack bind_fluid_var(-6, 2, -4);
    setvalue(basic_elt(env, 2), nil); // null!-space!-basis
    v_114 = nil;
    setvalue(basic_elt(env, 3), v_114); // known!-factors
    v_114 = qvalue(basic_elt(env, 4)); // poly!-mod!-p
    if (!car_legal(v_114)) v_114 = carerror(v_114); else
    v_114 = car(v_114);
    if (!car_legal(v_114)) v_114 = carerror(v_114); else
    v_114 = car(v_114);
    if (!car_legal(v_114)) v_114 = cdrerror(v_114); else
    v_114 = cdr(v_114);
    setvalue(basic_elt(env, 5), v_114); // dpoly
    v_115 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_114 = qvalue(basic_elt(env, 5)); // dpoly
    v_114 = fixnum_of_int(static_cast<std::intptr_t>(int_of_fixnum(v_115) * int_of_fixnum(v_114)));
    v_114 = Lmkvect(nil, v_114);
    env = stack[-6];
    stack[-3] = v_114;
    v_115 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_114 = qvalue(basic_elt(env, 5)); // dpoly
    v_114 = fixnum_of_int(static_cast<std::intptr_t>(int_of_fixnum(v_115) * int_of_fixnum(v_114)));
    v_114 = Lmkvect(nil, v_114);
    env = stack[-6];
    stack[-1] = v_114;
    v_114 = qvalue(basic_elt(env, 5)); // dpoly
    v_114 = Lmkvect(nil, v_114);
    env = stack[-6];
    stack[-2] = v_114;
    v_114 = qvalue(basic_elt(env, 5)); // dpoly
    v_114 = Lmkvect(nil, v_114);
    env = stack[-6];
    setvalue(basic_elt(env, 1), v_114); // poly!-vector
    v_114 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[0] = v_114;
v_35:
    v_115 = qvalue(basic_elt(env, 5)); // dpoly
    v_114 = stack[0];
    v_114 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_115) - static_cast<std::uintptr_t>(v_114) + TAG_FIXNUM);
    v_114 = (static_cast<std::intptr_t>(v_114) < 0 ? lisp_true : nil);
    if (v_114 == nil) goto v_40;
    goto v_34;
v_40:
    v_116 = qvalue(basic_elt(env, 1)); // poly!-vector
    v_115 = stack[0];
    v_114 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_114 = Lputv(nil, v_116, v_115, v_114);
    env = stack[-6];
    v_114 = stack[0];
    v_114 = static_cast<LispObject>(static_cast<std::intptr_t>(v_114) + 0x10);
    stack[0] = v_114;
    goto v_35;
v_34:
    v_114 = qvalue(basic_elt(env, 4)); // poly!-mod!-p
    {   LispObject fn = basic_elt(env, 6); // poly!-to!-vector
    v_114 = (*qfn1(fn))(fn, v_114);
    }
    env = stack[-6];
    v_116 = stack[-3];
    v_115 = stack[-1];
    v_114 = stack[-2];
    {   LispObject fn = basic_elt(env, 7); // count!-linear!-factors!-mod!-p
    v_114 = (*qfn3(fn))(fn, v_116, v_115, v_114);
    }
    env = stack[-6];
    stack[-1] = v_114;
    v_114 = stack[-1];
    if (!car_legal(v_114)) v_114 = carerror(v_114); else
    v_114 = car(v_114);
    stack[0] = v_114;
    v_115 = qvalue(basic_elt(env, 5)); // dpoly
    v_114 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    if ((static_cast<std::intptr_t>(v_115) < static_cast<std::intptr_t>(v_114))) goto v_62;
    else goto v_63;
v_62:
    v_115 = qvalue(basic_elt(env, 5)); // dpoly
    v_114 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_115 == v_114) goto v_69;
    else goto v_70;
v_69:
    v_114 = stack[0];
    stack[-3] = v_114;
    goto v_68;
v_70:
    v_114 = stack[0];
    v_114 = static_cast<LispObject>(static_cast<std::intptr_t>(v_114) + 0x10);
    stack[-3] = v_114;
    goto v_68;
    stack[-3] = nil;
v_68:
    v_115 = stack[0];
    v_114 = stack[-1];
    if (!car_legal(v_114)) v_114 = cdrerror(v_114); else
    v_114 = cdr(v_114);
    if (!car_legal(v_114)) v_114 = carerror(v_114); else
    v_114 = car(v_114);
    stack[-2] = cons(v_115, v_114);
    env = stack[-6];
    stack[-1] = qvalue(basic_elt(env, 5)); // dpoly
    stack[0] = qvalue(basic_elt(env, 1)); // poly!-vector
    v_114 = nil;
    v_114 = ncons(v_114);
    env = stack[-6];
    v_114 = acons(stack[-1], stack[0], v_114);
    env = stack[-6];
    v_114 = list2star(stack[-3], stack[-2], v_114);
    goto v_14;
v_63:
    v_116 = stack[-2];
    v_114 = stack[-1];
    if (!car_legal(v_114)) v_114 = cdrerror(v_114); else
    v_114 = cdr(v_114);
    if (!car_legal(v_114)) v_114 = cdrerror(v_114); else
    v_114 = cdr(v_114);
    if (!car_legal(v_114)) v_115 = carerror(v_114); else
    v_115 = car(v_114);
    v_114 = stack[-3];
    {   LispObject fn = basic_elt(env, 8); // use!-berlekamp
    v_114 = (*qfn3(fn))(fn, v_116, v_115, v_114);
    }
    env = stack[-6];
    setvalue(basic_elt(env, 2), v_114); // null!-space!-basis
    stack[-2] = stack[0];
    v_114 = qvalue(basic_elt(env, 2)); // null!-space!-basis
    v_114 = Llength(nil, v_114);
    env = stack[-6];
    v_114 = static_cast<LispObject>(static_cast<std::uintptr_t>(stack[-2]) + static_cast<std::uintptr_t>(v_114) - TAG_FIXNUM);
    v_114 = static_cast<LispObject>(static_cast<std::intptr_t>(v_114) + 0x10);
    stack[-3] = v_114;
    v_115 = stack[0];
    v_114 = stack[-1];
    if (!car_legal(v_114)) v_114 = cdrerror(v_114); else
    v_114 = cdr(v_114);
    if (!car_legal(v_114)) v_114 = carerror(v_114); else
    v_114 = car(v_114);
    stack[-2] = cons(v_115, v_114);
    env = stack[-6];
    stack[-1] = qvalue(basic_elt(env, 5)); // dpoly
    stack[0] = qvalue(basic_elt(env, 1)); // poly!-vector
    v_114 = qvalue(basic_elt(env, 2)); // null!-space!-basis
    v_114 = ncons(v_114);
    env = stack[-6];
    v_114 = acons(stack[-1], stack[0], v_114);
    env = stack[-6];
    v_114 = list2star(stack[-3], stack[-2], v_114);
v_14:
    ;}  // end of a binding scope
    ;}  // end of a binding scope
    return onevalue(v_114);
}



// Code for ofsf_chsimpat1

static LispObject CC_ofsf_chsimpat1(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_63, v_64, v_65;
#ifdef CHECK_STACK
    if_check_stack;
#endif
#ifdef CONSERVATIVE
    poll();
#else // CONSERVATIVE
    if (++reclaim_trigger_count == reclaim_trigger_target ||
        stack >= stackLimit)
    {
        push(v_2);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    stack[-2] = v_2;
// end of prologue
    stack[0] = nil;
    stack[-3] = nil;
    v_63 = stack[-2];
    if (!car_legal(v_63)) v_63 = cdrerror(v_63); else
    v_63 = cdr(v_63);
    if (!car_legal(v_63)) v_63 = carerror(v_63); else
    v_63 = car(v_63);
    stack[-1] = v_63;
    v_63 = stack[-1];
    v_63 = Lconsp(nil, v_63);
    env = stack[-4];
    if (v_63 == nil) goto v_16;
    v_63 = stack[-1];
    if (!car_legal(v_63)) v_64 = carerror(v_63); else
    v_64 = car(v_63);
    v_63 = basic_elt(env, 1); // (lessp leq equal neq geq greaterp)
    v_63 = Lmemq(nil, v_64, v_63);
    if (v_63 == nil) goto v_16;
    v_63 = stack[-1];
    {   LispObject fn = basic_elt(env, 0); // ofsf_chsimpat1
    v_63 = (*qfn1(fn))(fn, v_63);
    }
    env = stack[-4];
    stack[0] = v_63;
    v_63 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // lastcar
    v_63 = (*qfn1(fn))(fn, v_63);
    }
    env = stack[-4];
    if (!car_legal(v_63)) v_63 = cdrerror(v_63); else
    v_63 = cdr(v_63);
    if (!car_legal(v_63)) v_63 = cdrerror(v_63); else
    v_63 = cdr(v_63);
    if (!car_legal(v_63)) v_63 = carerror(v_63); else
    v_63 = car(v_63);
    stack[-1] = v_63;
    goto v_14;
v_16:
v_14:
    v_63 = stack[-2];
    if (!car_legal(v_63)) v_63 = cdrerror(v_63); else
    v_63 = cdr(v_63);
    if (!car_legal(v_63)) v_63 = cdrerror(v_63); else
    v_63 = cdr(v_63);
    if (!car_legal(v_63)) v_63 = carerror(v_63); else
    v_63 = car(v_63);
    v_64 = v_63;
    v_64 = Lconsp(nil, v_64);
    env = stack[-4];
    if (v_64 == nil) goto v_39;
    v_64 = v_63;
    if (!car_legal(v_64)) v_65 = carerror(v_64); else
    v_65 = car(v_64);
    v_64 = basic_elt(env, 1); // (lessp leq equal neq geq greaterp)
    v_64 = Lmemq(nil, v_65, v_64);
    if (v_64 == nil) goto v_39;
    {   LispObject fn = basic_elt(env, 0); // ofsf_chsimpat1
    v_63 = (*qfn1(fn))(fn, v_63);
    }
    env = stack[-4];
    stack[-3] = v_63;
    v_63 = stack[-3];
    if (!car_legal(v_63)) v_63 = carerror(v_63); else
    v_63 = car(v_63);
    if (!car_legal(v_63)) v_63 = cdrerror(v_63); else
    v_63 = cdr(v_63);
    if (!car_legal(v_63)) v_63 = carerror(v_63); else
    v_63 = car(v_63);
    goto v_37;
v_39:
v_37:
    v_64 = stack[-2];
    if (!car_legal(v_64)) v_65 = carerror(v_64); else
    v_65 = car(v_64);
    v_64 = stack[-1];
    v_64 = list3(v_65, v_64, v_63);
    env = stack[-4];
    v_63 = stack[-3];
    v_63 = cons(v_64, v_63);
    {
        LispObject v_70 = stack[0];
        return Lnconc(nil, v_70, v_63);
    }
    return onevalue(v_63);
}



// Code for clearrules

static LispObject CC_clearrules(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_11, v_12;
#ifdef CHECK_STACK
    if_check_stack;
#endif
#ifdef CONSERVATIVE
    poll();
#else // CONSERVATIVE
    if (++reclaim_trigger_count == reclaim_trigger_target ||
        stack >= stackLimit)
    {
        push(v_2);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    v_12 = v_2;
// end of prologue
    v_11 = nil;
// Binding !*sqrtrulep
// FLUIDBIND: reloadenv=1 litvec-offset=1 saveloc=0
{   bind_fluid_stack bind_fluid_var(-1, 1, 0);
    setvalue(basic_elt(env, 1), v_11); // !*sqrtrulep
    v_11 = nil;
    {   LispObject fn = basic_elt(env, 2); // rule!-list
    v_11 = (*qfn2(fn))(fn, v_12, v_11);
    }
    ;}  // end of a binding scope
    return onevalue(v_11);
}



// Code for negdf

static LispObject CC_negdf(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_28, v_29;
#ifdef CHECK_STACK
    if_check_stack;
#endif
#ifdef CONSERVATIVE
    poll();
#else // CONSERVATIVE
    if (++reclaim_trigger_count == reclaim_trigger_target ||
        stack >= stackLimit)
    {
        push(v_2);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[-1] = v_2;
// end of prologue
    stack[-2] = nil;
v_7:
    v_28 = stack[-1];
    if (v_28 == nil) goto v_10;
    else goto v_11;
v_10:
    v_28 = stack[-2];
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn1(fn))(fn, v_28);
    }
v_11:
    v_28 = stack[-1];
    if (!car_legal(v_28)) v_28 = carerror(v_28); else
    v_28 = car(v_28);
    if (!car_legal(v_28)) stack[0] = carerror(v_28); else
    stack[0] = car(v_28);
    v_28 = stack[-1];
    if (!car_legal(v_28)) v_28 = carerror(v_28); else
    v_28 = car(v_28);
    if (!car_legal(v_28)) v_28 = cdrerror(v_28); else
    v_28 = cdr(v_28);
    {   LispObject fn = basic_elt(env, 2); // negsq
    v_29 = (*qfn1(fn))(fn, v_28);
    }
    env = stack[-3];
    v_28 = stack[-2];
    v_28 = acons(stack[0], v_29, v_28);
    env = stack[-3];
    stack[-2] = v_28;
    v_28 = stack[-1];
    if (!car_legal(v_28)) v_28 = cdrerror(v_28); else
    v_28 = cdr(v_28);
    stack[-1] = v_28;
    goto v_7;
    v_28 = nil;
    return onevalue(v_28);
}



// Code for get!*generators

static LispObject CC_getHgenerators(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_9, v_10;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_9 = v_2;
// end of prologue
    v_10 = basic_elt(env, 1); // generators
    return get(v_9, v_10);
    return onevalue(v_9);
}



// Code for formopr

static LispObject CC_formopr(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_27, v_28, v_29, v_30;
#ifdef CHECK_STACK
    if_check_stack;
#endif
#ifdef CONSERVATIVE
    poll();
#else // CONSERVATIVE
    if (++reclaim_trigger_count == reclaim_trigger_target ||
        stack >= stackLimit)
    {
        push(v_2,v_3,v_4);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_4,v_3,v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    v_27 = v_4;
    v_29 = v_3;
    v_30 = v_2;
// end of prologue
    v_28 = v_27;
    v_27 = basic_elt(env, 1); // symbolic
    if (v_28 == v_27) goto v_8;
    else goto v_9;
v_8:
    stack[-1] = basic_elt(env, 2); // flag
    v_27 = v_30;
    if (!car_legal(v_27)) v_27 = cdrerror(v_27); else
    v_27 = cdr(v_27);
    stack[0] = Lmkquote(nil, v_27);
    env = stack[-2];
    v_27 = basic_elt(env, 3); // opfn
    v_27 = Lmkquote(nil, v_27);
    {
        LispObject v_33 = stack[-1];
        LispObject v_34 = stack[0];
        return list3(v_33, v_34, v_27);
    }
v_9:
    stack[0] = basic_elt(env, 4); // operator
    v_27 = v_30;
    if (!car_legal(v_27)) v_27 = cdrerror(v_27); else
    v_27 = cdr(v_27);
    v_28 = v_29;
    {   LispObject fn = basic_elt(env, 5); // mkarg
    v_27 = (*qfn2(fn))(fn, v_27, v_28);
    }
    {
        LispObject v_35 = stack[0];
        return list2(v_35, v_27);
    }
    v_27 = nil;
    return onevalue(v_27);
}



// Code for rnfloor!*

static LispObject CC_rnfloorH(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_25, v_26;
#ifdef CHECK_STACK
    if_check_stack;
#endif
#ifdef CONSERVATIVE
    poll();
#else // CONSERVATIVE
    if (++reclaim_trigger_count == reclaim_trigger_target ||
        stack >= stackLimit)
    {
        push(v_2);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_25 = stack[0];
    if (!car_legal(v_25)) v_25 = cdrerror(v_25); else
    v_25 = cdr(v_25);
    if (!car_legal(v_25)) v_26 = carerror(v_25); else
    v_26 = car(v_25);
    v_25 = stack[0];
    if (!car_legal(v_25)) v_25 = cdrerror(v_25); else
    v_25 = cdr(v_25);
    if (!car_legal(v_25)) v_25 = cdrerror(v_25); else
    v_25 = cdr(v_25);
    v_25 = Ldivide_2(nil, v_26, v_25);
    env = stack[-1];
    stack[0] = v_25;
    if (!car_legal(v_25)) v_26 = cdrerror(v_25); else
    v_26 = cdr(v_25);
    v_25 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_25 = static_cast<LispObject>(lessp2(v_26, v_25));
    v_25 = v_25 ? lisp_true : nil;
    if (v_25 == nil) goto v_7;
    v_25 = stack[0];
    if (!car_legal(v_25)) v_25 = carerror(v_25); else
    v_25 = car(v_25);
    return sub1(v_25);
v_7:
    v_25 = stack[0];
    if (!car_legal(v_25)) v_25 = carerror(v_25); else
    v_25 = car(v_25);
    goto v_5;
    v_25 = nil;
v_5:
    return onevalue(v_25);
}



// Code for codfac

static LispObject CC_codfac(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_96, v_97;
#ifdef CHECK_STACK
    if_check_stack;
#endif
#ifdef CONSERVATIVE
    poll();
#else // CONSERVATIVE
    if (++reclaim_trigger_count == reclaim_trigger_target ||
        stack >= stackLimit)
    {
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// end of prologue
    stack[-3] = nil;
    stack[-2] = nil;
    v_96 = qvalue(basic_elt(env, 1)); // rowmin
    stack[-1] = v_96;
v_10:
    v_97 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    v_96 = stack[-1];
    v_96 = difference2(v_97, v_96);
    env = stack[-4];
    v_96 = Lminusp(nil, v_96);
    env = stack[-4];
    if (v_96 == nil) goto v_15;
    goto v_9;
v_15:
    stack[0] = qvalue(basic_elt(env, 2)); // codmat
    v_97 = qvalue(basic_elt(env, 3)); // maxvar
    v_96 = stack[-1];
    v_96 = plus2(v_97, v_96);
    env = stack[-4];
    v_97 = Lgetv(nil, stack[0], v_96);
    env = stack[-4];
    v_96 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_97 = Lgetv(nil, v_97, v_96);
    env = stack[-4];
    v_96 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    if (v_97 == v_96) goto v_31;
    else goto v_32;
v_31:
    v_96 = lisp_true;
    goto v_30;
v_32:
    stack[0] = qvalue(basic_elt(env, 2)); // codmat
    v_97 = qvalue(basic_elt(env, 3)); // maxvar
    v_96 = stack[-1];
    v_96 = plus2(v_97, v_96);
    env = stack[-4];
    v_97 = Lgetv(nil, stack[0], v_96);
    env = stack[-4];
    v_96 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_97 = Lgetv(nil, v_97, v_96);
    env = stack[-4];
    v_96 = static_cast<LispObject>(-32)+TAG_FIXNUM; // -2
    v_96 = (v_97 == v_96 ? lisp_true : nil);
    goto v_30;
    v_96 = nil;
v_30:
    if (v_96 == nil) goto v_27;
    else goto v_28;
v_27:
    stack[0] = qvalue(basic_elt(env, 2)); // codmat
    v_97 = qvalue(basic_elt(env, 3)); // maxvar
    v_96 = stack[-1];
    v_96 = plus2(v_97, v_96);
    env = stack[-4];
    v_97 = Lgetv(nil, stack[0], v_96);
    env = stack[-4];
    v_96 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_97 = Lgetv(nil, v_97, v_96);
    env = stack[-4];
    v_96 = basic_elt(env, 4); // times
    if (v_97 == v_96) goto v_55;
    else goto v_56;
v_55:
    v_96 = stack[-1];
    {   LispObject fn = basic_elt(env, 5); // samefar
    v_96 = (*qfn1(fn))(fn, v_96);
    }
    env = stack[-4];
    stack[-2] = v_96;
    goto v_54;
v_56:
    v_96 = nil;
    goto v_54;
    v_96 = nil;
v_54:
    goto v_26;
v_28:
    v_96 = nil;
    goto v_26;
    v_96 = nil;
v_26:
    if (v_96 == nil) goto v_24;
    v_96 = lisp_true;
    stack[-3] = v_96;
    v_96 = stack[-2];
    stack[0] = v_96;
v_77:
    v_96 = stack[0];
    if (v_96 == nil) goto v_81;
    else goto v_82;
v_81:
    goto v_76;
v_82:
    v_96 = stack[0];
    if (!car_legal(v_96)) v_96 = carerror(v_96); else
    v_96 = car(v_96);
    v_97 = stack[-1];
    {   LispObject fn = basic_elt(env, 6); // commonfac
    v_96 = (*qfn2(fn))(fn, v_97, v_96);
    }
    env = stack[-4];
    v_96 = stack[0];
    if (!car_legal(v_96)) v_96 = cdrerror(v_96); else
    v_96 = cdr(v_96);
    stack[0] = v_96;
    goto v_77;
v_76:
    goto v_22;
v_24:
v_22:
    v_96 = stack[-1];
    v_96 = add1(v_96);
    env = stack[-4];
    stack[-1] = v_96;
    goto v_10;
v_9:
    v_96 = stack[-3];
    return onevalue(v_96);
}



// Code for qsimpcomb_standard_qexp_part_sf

static LispObject CC_qsimpcomb_standard_qexp_part_sf(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_90, v_91, v_92, v_93;
#ifdef CHECK_STACK
    if_check_stack;
#endif
#ifdef CONSERVATIVE
    poll();
#else // CONSERVATIVE
    if (++reclaim_trigger_count == reclaim_trigger_target ||
        stack >= stackLimit)
    {
        push(v_2,v_3);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_3,v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    v_90 = nil;
    {   LispObject fn = basic_elt(env, 3); // simp
    v_90 = (*qfn1(fn))(fn, v_90);
    }
    env = stack[-3];
    v_93 = v_90;
v_13:
    v_90 = stack[-1];
    v_90 = Lconsp(nil, v_90);
    env = stack[-3];
    if (v_90 == nil) goto v_16;
    v_90 = stack[-1];
    if (!car_legal(v_90)) v_90 = cdrerror(v_90); else
    v_90 = cdr(v_90);
    if (v_90 == nil) goto v_21;
    else goto v_16;
v_21:
    goto v_17;
v_16:
    goto v_12;
v_17:
    v_90 = stack[-1];
    if (!car_legal(v_90)) v_90 = carerror(v_90); else
    v_90 = car(v_90);
    if (!car_legal(v_90)) v_90 = carerror(v_90); else
    v_90 = car(v_90);
    if (!car_legal(v_90)) v_91 = carerror(v_90); else
    v_91 = car(v_90);
    v_90 = stack[0];
    if (v_91 == v_90) goto v_27;
    else goto v_28;
v_27:
    stack[-2] = v_93;
    v_90 = stack[-1];
    if (!car_legal(v_90)) v_90 = carerror(v_90); else
    v_90 = car(v_90);
    if (!car_legal(v_90)) v_90 = carerror(v_90); else
    v_90 = car(v_90);
    if (!car_legal(v_90)) v_90 = cdrerror(v_90); else
    v_90 = cdr(v_90);
    {   LispObject fn = basic_elt(env, 3); // simp
    v_90 = (*qfn1(fn))(fn, v_90);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 4); // addsq
    v_90 = (*qfn2(fn))(fn, stack[-2], v_90);
    }
    env = stack[-3];
    v_93 = v_90;
    goto v_26;
v_28:
    v_90 = stack[-1];
    if (!car_legal(v_90)) v_90 = carerror(v_90); else
    v_90 = car(v_90);
    if (!car_legal(v_90)) v_90 = carerror(v_90); else
    v_90 = car(v_90);
    if (!car_legal(v_90)) v_90 = carerror(v_90); else
    v_90 = car(v_90);
    v_92 = v_90;
    v_90 = v_92;
    v_90 = Lconsp(nil, v_90);
    env = stack[-3];
    if (v_90 == nil) goto v_52;
    v_90 = v_92;
    if (!car_legal(v_90)) v_91 = carerror(v_90); else
    v_91 = car(v_90);
    v_90 = basic_elt(env, 1); // expt
    if (v_91 == v_90) goto v_59;
    else goto v_60;
v_59:
    v_90 = v_92;
    if (!car_legal(v_90)) v_90 = cdrerror(v_90); else
    v_90 = cdr(v_90);
    if (!car_legal(v_90)) v_91 = carerror(v_90); else
    v_91 = car(v_90);
    v_90 = stack[0];
    v_90 = (v_91 == v_90 ? lisp_true : nil);
    goto v_58;
v_60:
    v_90 = nil;
    goto v_58;
    v_90 = nil;
v_58:
    if (v_90 == nil) goto v_52;
    stack[-2] = v_93;
    v_91 = basic_elt(env, 2); // times
    v_90 = v_92;
    if (!car_legal(v_90)) v_90 = cdrerror(v_90); else
    v_90 = cdr(v_90);
    if (!car_legal(v_90)) v_90 = cdrerror(v_90); else
    v_90 = cdr(v_90);
    if (!car_legal(v_90)) v_92 = carerror(v_90); else
    v_92 = car(v_90);
    v_90 = stack[-1];
    if (!car_legal(v_90)) v_90 = carerror(v_90); else
    v_90 = car(v_90);
    if (!car_legal(v_90)) v_90 = carerror(v_90); else
    v_90 = car(v_90);
    if (!car_legal(v_90)) v_90 = cdrerror(v_90); else
    v_90 = cdr(v_90);
    v_90 = list3(v_91, v_92, v_90);
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 3); // simp
    v_90 = (*qfn1(fn))(fn, v_90);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 4); // addsq
    v_90 = (*qfn2(fn))(fn, stack[-2], v_90);
    }
    env = stack[-3];
    v_93 = v_90;
    goto v_50;
v_52:
v_50:
    goto v_26;
v_26:
    v_90 = stack[-1];
    if (!car_legal(v_90)) v_90 = carerror(v_90); else
    v_90 = car(v_90);
    if (!car_legal(v_90)) v_90 = cdrerror(v_90); else
    v_90 = cdr(v_90);
    stack[-1] = v_90;
    goto v_13;
v_12:
    v_90 = v_93;
    return onevalue(v_90);
}



// Code for xreorder

static LispObject CC_xreorder(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_22;
#ifdef CHECK_STACK
    if_check_stack;
#endif
#ifdef CONSERVATIVE
    poll();
#else // CONSERVATIVE
    if (++reclaim_trigger_count == reclaim_trigger_target ||
        stack >= stackLimit)
    {
        push(v_2);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_22 = stack[0];
    if (v_22 == nil) goto v_7;
    v_22 = stack[0];
    if (!car_legal(v_22)) v_22 = carerror(v_22); else
    v_22 = car(v_22);
    if (!car_legal(v_22)) v_22 = carerror(v_22); else
    v_22 = car(v_22);
    {   LispObject fn = basic_elt(env, 1); // xpartitop
    stack[-1] = (*qfn1(fn))(fn, v_22);
    }
    env = stack[-2];
    v_22 = stack[0];
    if (!car_legal(v_22)) v_22 = carerror(v_22); else
    v_22 = car(v_22);
    if (!car_legal(v_22)) v_22 = cdrerror(v_22); else
    v_22 = cdr(v_22);
    {   LispObject fn = basic_elt(env, 2); // reordsq
    v_22 = (*qfn1(fn))(fn, v_22);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // multpfsq
    stack[-1] = (*qfn2(fn))(fn, stack[-1], v_22);
    }
    env = stack[-2];
    v_22 = stack[0];
    if (!car_legal(v_22)) v_22 = cdrerror(v_22); else
    v_22 = cdr(v_22);
    {   LispObject fn = basic_elt(env, 0); // xreorder
    v_22 = (*qfn1(fn))(fn, v_22);
    }
    env = stack[-2];
    {
        LispObject v_25 = stack[-1];
        LispObject fn = basic_elt(env, 4); // addpf
        return (*qfn2(fn))(fn, v_25, v_22);
    }
v_7:
    v_22 = nil;
    return onevalue(v_22);
}



// Code for exdfpf

static LispObject CC_exdfpf(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_70, v_71, v_72;
#ifdef CHECK_STACK
    if_check_stack;
#endif
#ifdef CONSERVATIVE
    poll();
#else // CONSERVATIVE
    if (++reclaim_trigger_count == reclaim_trigger_target ||
        stack >= stackLimit)
    {
        push(v_2);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    stack[-2] = v_2;
// end of prologue
    stack[-3] = nil;
v_8:
    v_70 = stack[-2];
    if (v_70 == nil) goto v_13;
    else goto v_14;
v_13:
    goto v_9;
v_14:
    v_70 = stack[-2];
    if (!car_legal(v_70)) v_70 = carerror(v_70); else
    v_70 = car(v_70);
    if (!car_legal(v_70)) v_71 = carerror(v_70); else
    v_71 = car(v_70);
    v_70 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_71 == v_70) goto v_19;
    else goto v_20;
v_19:
    v_70 = stack[-2];
    if (!car_legal(v_70)) v_70 = carerror(v_70); else
    v_70 = car(v_70);
    if (!car_legal(v_70)) v_70 = cdrerror(v_70); else
    v_70 = cdr(v_70);
    {   LispObject fn = basic_elt(env, 1); // exdf0
    v_70 = (*qfn1(fn))(fn, v_70);
    }
    env = stack[-4];
    v_71 = v_70;
    goto v_18;
v_20:
    v_70 = stack[-2];
    if (!car_legal(v_70)) v_70 = carerror(v_70); else
    v_70 = car(v_70);
    if (!car_legal(v_70)) v_70 = carerror(v_70); else
    v_70 = car(v_70);
    {   LispObject fn = basic_elt(env, 2); // exdfk
    v_71 = (*qfn1(fn))(fn, v_70);
    }
    env = stack[-4];
    v_70 = stack[-2];
    if (!car_legal(v_70)) v_70 = carerror(v_70); else
    v_70 = car(v_70);
    if (!car_legal(v_70)) v_70 = cdrerror(v_70); else
    v_70 = cdr(v_70);
    {   LispObject fn = basic_elt(env, 3); // multpfsq
    stack[-1] = (*qfn2(fn))(fn, v_71, v_70);
    }
    env = stack[-4];
    v_70 = stack[-2];
    if (!car_legal(v_70)) v_70 = carerror(v_70); else
    v_70 = car(v_70);
    if (!car_legal(v_70)) v_70 = cdrerror(v_70); else
    v_70 = cdr(v_70);
    {   LispObject fn = basic_elt(env, 1); // exdf0
    stack[0] = (*qfn1(fn))(fn, v_70);
    }
    env = stack[-4];
    v_70 = stack[-2];
    if (!car_legal(v_70)) v_70 = carerror(v_70); else
    v_70 = car(v_70);
    if (!car_legal(v_70)) v_70 = carerror(v_70); else
    v_70 = car(v_70);
    v_72 = ncons(v_70);
    env = stack[-4];
    v_71 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_70 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_70 = list2star(v_72, v_71, v_70);
    env = stack[-4];
    v_70 = ncons(v_70);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 4); // wedgepf2
    v_70 = (*qfn2(fn))(fn, stack[0], v_70);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 5); // mkuniquewedge
    v_70 = (*qfn1(fn))(fn, v_70);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 6); // addpf
    v_70 = (*qfn2(fn))(fn, stack[-1], v_70);
    }
    env = stack[-4];
    v_71 = v_70;
    goto v_18;
    v_71 = nil;
v_18:
    v_70 = stack[-3];
    v_70 = cons(v_71, v_70);
    env = stack[-4];
    stack[-3] = v_70;
    v_70 = stack[-2];
    if (!car_legal(v_70)) v_70 = cdrerror(v_70); else
    v_70 = cdr(v_70);
    stack[-2] = v_70;
    goto v_8;
v_9:
    v_70 = nil;
    v_71 = v_70;
v_10:
    v_70 = stack[-3];
    if (v_70 == nil) goto v_60;
    else goto v_61;
v_60:
    v_70 = v_71;
    goto v_7;
v_61:
    v_70 = stack[-3];
    v_70 = car(v_70);
    {   LispObject fn = basic_elt(env, 6); // addpf
    v_70 = (*qfn2(fn))(fn, v_70, v_71);
    }
    env = stack[-4];
    v_71 = v_70;
    v_70 = stack[-3];
    v_70 = cdr(v_70);
    stack[-3] = v_70;
    goto v_10;
v_7:
    return onevalue(v_70);
}



// Code for texaeval1

static LispObject CC_texaeval1(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_19, v_20, v_21;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_21 = v_2;
// end of prologue
    v_19 = qvalue(basic_elt(env, 1)); // !*latex
    if (v_19 == nil) goto v_7;
    v_20 = v_21;
    v_19 = basic_elt(env, 2); // tex
    if (!consp(v_20)) goto v_10;
    v_20 = car(v_20);
    if (v_20 == v_19) goto v_7;
v_10:
    v_19 = v_21;
    {
        LispObject fn = basic_elt(env, 3); // texaeval
        return (*qfn1(fn))(fn, v_19);
    }
v_7:
    v_19 = v_21;
    goto v_5;
    v_19 = nil;
v_5:
    return onevalue(v_19);
}



// Code for getphystypestate

static LispObject CC_getphystypestate(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_21;
#ifdef CHECK_STACK
    if_check_stack;
#endif
#ifdef CONSERVATIVE
    poll();
#else // CONSERVATIVE
    if (++reclaim_trigger_count == reclaim_trigger_target ||
        stack >= stackLimit)
    {
        push(v_2);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_21 = stack[0];
    if (!car_legal(v_21)) v_21 = carerror(v_21); else
    v_21 = car(v_21);
    {   LispObject fn = basic_elt(env, 2); // statep!*
    v_21 = (*qfn1(fn))(fn, v_21);
    }
    env = stack[-1];
    if (v_21 == nil) goto v_7;
    v_21 = stack[0];
    if (!car_legal(v_21)) v_21 = cdrerror(v_21); else
    v_21 = cdr(v_21);
    if (!car_legal(v_21)) v_21 = carerror(v_21); else
    v_21 = car(v_21);
    {   LispObject fn = basic_elt(env, 2); // statep!*
    v_21 = (*qfn1(fn))(fn, v_21);
    }
    env = stack[-1];
    if (v_21 == nil) goto v_7;
    v_21 = nil;
    goto v_5;
v_7:
    v_21 = basic_elt(env, 1); // state
    goto v_5;
    v_21 = nil;
v_5:
    return onevalue(v_21);
}



setup_type const u60_setup[] =
{
    {"lie4",                    CC_lie4,  G1W0,     G2W0,     G3W0,     G4W0},
    {"make-image-lc-list1",     G0W3,     G1W3,     G2W3,     CC_makeKimageKlcKlist1,G4W3},
    {"rdzchk",                  G0W3,     G1W3,     G2W3,     CC_rdzchk,G4W3},
    {"memlis",                  G0W2,     G1W2,     CC_memlis,G3W2,     G4W2},
    {"modular-factor-count",    CC_modularKfactorKcount,G1W0,G2W0,G3W0, G4W0},
    {"ofsf_chsimpat1",          G0W1,     CC_ofsf_chsimpat1,G2W1,G3W1,  G4W1},
    {"clearrules",              G0W1,     CC_clearrules,G2W1, G3W1,     G4W1},
    {"negdf",                   G0W1,     CC_negdf, G2W1,     G3W1,     G4W1},
    {"get*generators",          G0W1,     CC_getHgenerators,G2W1,G3W1,  G4W1},
    {"formopr",                 G0W3,     G1W3,     G2W3,     CC_formopr,G4W3},
    {"rnfloor*",                G0W1,     CC_rnfloorH,G2W1,   G3W1,     G4W1},
    {"codfac",                  CC_codfac,G1W0,     G2W0,     G3W0,     G4W0},
    {"qsimpcomb_standard_qexp_part_sf",G0W2,G1W2,   CC_qsimpcomb_standard_qexp_part_sf,G3W2,G4W2},
    {"xreorder",                G0W1,     CC_xreorder,G2W1,   G3W1,     G4W1},
    {"exdfpf",                  G0W1,     CC_exdfpf,G2W1,     G3W1,     G4W1},
    {"texaeval1",               G0W1,     CC_texaeval1,G2W1,  G3W1,     G4W1},
    {"getphystypestate",        G0W1,     CC_getphystypestate,G2W1,G3W1,G4W1},
    {nullptr, 
        reinterpret_cast<no_args *>(
            reinterpret_cast<uintptr_t>("u60")),
        reinterpret_cast<one_arg *>(
            reinterpret_cast<uintptr_t>("22407 1213094 3477608")),
        nullptr, nullptr, nullptr}
};

// end of generated code
