
// $destdir/u08.c        Machine generated C code

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


// Code for general!-plus!-mod!-p

static LispObject CC_generalKplusKmodKp(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_188, v_189, v_190;
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    stack[-1] = v_3;
    stack[-2] = v_2;
// end of prologue
    stack[0] = nil;
v_8:
    v_188 = stack[-2];
    if (v_188 == nil) goto v_11;
    else goto v_12;
v_11:
    v_189 = stack[0];
    v_188 = stack[-1];
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn2(fn))(fn, v_189, v_188);
    }
v_12:
    v_188 = stack[-1];
    if (v_188 == nil) goto v_17;
    else goto v_18;
v_17:
    v_189 = stack[0];
    v_188 = stack[-2];
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn2(fn))(fn, v_189, v_188);
    }
v_18:
    v_188 = stack[-2];
    if (!consp(v_188)) goto v_27;
    else goto v_28;
v_27:
    v_188 = lisp_true;
    goto v_26;
v_28:
    v_188 = stack[-2];
    if (!car_legal(v_188)) v_188 = carerror(v_188); else
    v_188 = car(v_188);
    v_188 = (consp(v_188) ? nil : lisp_true);
    goto v_26;
    v_188 = nil;
v_26:
    if (v_188 == nil) goto v_24;
    v_188 = stack[-1];
    if (!consp(v_188)) goto v_42;
    else goto v_43;
v_42:
    v_188 = lisp_true;
    goto v_41;
v_43:
    v_188 = stack[-1];
    if (!car_legal(v_188)) v_188 = carerror(v_188); else
    v_188 = car(v_188);
    v_188 = (consp(v_188) ? nil : lisp_true);
    goto v_41;
    v_188 = nil;
v_41:
    if (v_188 == nil) goto v_39;
    v_189 = stack[-2];
    v_188 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // general!-modular!-plus
    v_188 = (*qfn2(fn))(fn, v_189, v_188);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 3); // !*n2f
    v_188 = (*qfn1(fn))(fn, v_188);
    }
    env = stack[-4];
    {
        LispObject v_195 = stack[0];
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn2(fn))(fn, v_195, v_188);
    }
v_39:
    v_188 = stack[-1];
    if (!car_legal(v_188)) v_189 = carerror(v_188); else
    v_189 = car(v_188);
    v_188 = stack[0];
    v_188 = cons(v_189, v_188);
    env = stack[-4];
    stack[0] = v_188;
    v_188 = stack[-1];
    if (!car_legal(v_188)) v_188 = cdrerror(v_188); else
    v_188 = cdr(v_188);
    stack[-1] = v_188;
    goto v_8;
    goto v_10;
v_24:
    v_188 = stack[-1];
    if (!consp(v_188)) goto v_69;
    else goto v_70;
v_69:
    v_188 = lisp_true;
    goto v_68;
v_70:
    v_188 = stack[-1];
    if (!car_legal(v_188)) v_188 = carerror(v_188); else
    v_188 = car(v_188);
    v_188 = (consp(v_188) ? nil : lisp_true);
    goto v_68;
    v_188 = nil;
v_68:
    if (v_188 == nil) goto v_66;
    v_188 = stack[-2];
    if (!car_legal(v_188)) v_189 = carerror(v_188); else
    v_189 = car(v_188);
    v_188 = stack[0];
    v_188 = cons(v_189, v_188);
    env = stack[-4];
    stack[0] = v_188;
    v_188 = stack[-2];
    if (!car_legal(v_188)) v_188 = cdrerror(v_188); else
    v_188 = cdr(v_188);
    stack[-2] = v_188;
    goto v_8;
v_66:
    v_188 = stack[-2];
    if (!car_legal(v_188)) v_188 = carerror(v_188); else
    v_188 = car(v_188);
    if (!car_legal(v_188)) v_189 = carerror(v_188); else
    v_189 = car(v_188);
    v_188 = stack[-1];
    if (!car_legal(v_188)) v_188 = carerror(v_188); else
    v_188 = car(v_188);
    if (!car_legal(v_188)) v_188 = carerror(v_188); else
    v_188 = car(v_188);
    if (equal(v_189, v_188)) goto v_84;
    else goto v_85;
v_84:
    stack[-3] = stack[0];
    v_188 = stack[-2];
    if (!car_legal(v_188)) v_188 = carerror(v_188); else
    v_188 = car(v_188);
    if (!car_legal(v_188)) v_189 = cdrerror(v_188); else
    v_189 = cdr(v_188);
    v_188 = stack[-1];
    if (!car_legal(v_188)) v_188 = carerror(v_188); else
    v_188 = car(v_188);
    if (!car_legal(v_188)) v_188 = cdrerror(v_188); else
    v_188 = cdr(v_188);
    {   LispObject fn = basic_elt(env, 0); // general!-plus!-mod!-p
    stack[0] = (*qfn2(fn))(fn, v_189, v_188);
    }
    env = stack[-4];
    v_188 = stack[-2];
    if (!car_legal(v_188)) v_189 = cdrerror(v_188); else
    v_189 = cdr(v_188);
    v_188 = stack[-1];
    if (!car_legal(v_188)) v_188 = cdrerror(v_188); else
    v_188 = cdr(v_188);
    {   LispObject fn = basic_elt(env, 0); // general!-plus!-mod!-p
    v_188 = (*qfn2(fn))(fn, v_189, v_188);
    }
    env = stack[-4];
    v_189 = stack[0];
    v_190 = v_189;
    if (v_190 == nil) goto v_110;
    else goto v_111;
v_110:
    goto v_109;
v_111:
    v_190 = stack[-2];
    if (!car_legal(v_190)) v_190 = carerror(v_190); else
    v_190 = car(v_190);
    if (!car_legal(v_190)) v_190 = carerror(v_190); else
    v_190 = car(v_190);
    v_188 = acons(v_190, v_189, v_188);
    env = stack[-4];
    goto v_109;
    v_188 = nil;
v_109:
    {
        LispObject v_196 = stack[-3];
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn2(fn))(fn, v_196, v_188);
    }
v_85:
    v_188 = stack[-2];
    if (!car_legal(v_188)) v_188 = carerror(v_188); else
    v_188 = car(v_188);
    if (!car_legal(v_188)) v_188 = carerror(v_188); else
    v_188 = car(v_188);
    if (!car_legal(v_188)) v_189 = carerror(v_188); else
    v_189 = car(v_188);
    v_188 = stack[-1];
    if (!car_legal(v_188)) v_188 = carerror(v_188); else
    v_188 = car(v_188);
    if (!car_legal(v_188)) v_188 = carerror(v_188); else
    v_188 = car(v_188);
    if (!car_legal(v_188)) v_188 = carerror(v_188); else
    v_188 = car(v_188);
    if (equal(v_189, v_188)) goto v_127;
    else goto v_128;
v_127:
    v_188 = stack[-2];
    if (!car_legal(v_188)) v_188 = carerror(v_188); else
    v_188 = car(v_188);
    if (!car_legal(v_188)) v_188 = carerror(v_188); else
    v_188 = car(v_188);
    if (!car_legal(v_188)) v_189 = cdrerror(v_188); else
    v_189 = cdr(v_188);
    v_188 = stack[-1];
    if (!car_legal(v_188)) v_188 = carerror(v_188); else
    v_188 = car(v_188);
    if (!car_legal(v_188)) v_188 = carerror(v_188); else
    v_188 = car(v_188);
    if (!car_legal(v_188)) v_188 = cdrerror(v_188); else
    v_188 = cdr(v_188);
    v_188 = (static_cast<std::intptr_t>(v_189) > static_cast<std::intptr_t>(v_188)) ? lisp_true : nil;
    goto v_126;
v_128:
    v_188 = nil;
    goto v_126;
    v_188 = nil;
v_126:
    if (v_188 == nil) goto v_124;
    else goto v_122;
v_124:
    v_188 = stack[-2];
    if (!car_legal(v_188)) v_188 = carerror(v_188); else
    v_188 = car(v_188);
    if (!car_legal(v_188)) v_188 = carerror(v_188); else
    v_188 = car(v_188);
    if (!car_legal(v_188)) v_189 = carerror(v_188); else
    v_189 = car(v_188);
    v_188 = stack[-1];
    if (!car_legal(v_188)) v_188 = carerror(v_188); else
    v_188 = car(v_188);
    if (!car_legal(v_188)) v_188 = carerror(v_188); else
    v_188 = car(v_188);
    if (!car_legal(v_188)) v_188 = carerror(v_188); else
    v_188 = car(v_188);
    if (equal(v_189, v_188)) goto v_153;
    v_188 = stack[-2];
    if (!car_legal(v_188)) v_188 = carerror(v_188); else
    v_188 = car(v_188);
    if (!car_legal(v_188)) v_188 = carerror(v_188); else
    v_188 = car(v_188);
    if (!car_legal(v_188)) v_189 = carerror(v_188); else
    v_189 = car(v_188);
    v_188 = stack[-1];
    if (!car_legal(v_188)) v_188 = carerror(v_188); else
    v_188 = car(v_188);
    if (!car_legal(v_188)) v_188 = carerror(v_188); else
    v_188 = car(v_188);
    if (!car_legal(v_188)) v_188 = carerror(v_188); else
    v_188 = car(v_188);
    {   LispObject fn = basic_elt(env, 4); // ordop
    v_188 = (*qfn2(fn))(fn, v_189, v_188);
    }
    env = stack[-4];
    goto v_151;
v_153:
    v_188 = nil;
    goto v_151;
    v_188 = nil;
v_151:
    if (v_188 == nil) goto v_149;
    else goto v_122;
v_149:
    goto v_123;
v_122:
    v_188 = stack[-2];
    if (!car_legal(v_188)) v_189 = carerror(v_188); else
    v_189 = car(v_188);
    v_188 = stack[0];
    v_188 = cons(v_189, v_188);
    env = stack[-4];
    stack[0] = v_188;
    v_188 = stack[-2];
    if (!car_legal(v_188)) v_188 = cdrerror(v_188); else
    v_188 = cdr(v_188);
    stack[-2] = v_188;
    goto v_8;
v_123:
    v_188 = stack[-1];
    if (!car_legal(v_188)) v_189 = carerror(v_188); else
    v_189 = car(v_188);
    v_188 = stack[0];
    v_188 = cons(v_189, v_188);
    env = stack[-4];
    stack[0] = v_188;
    v_188 = stack[-1];
    if (!car_legal(v_188)) v_188 = cdrerror(v_188); else
    v_188 = cdr(v_188);
    stack[-1] = v_188;
    goto v_8;
v_10:
    v_188 = nil;
    return onevalue(v_188);
}



// Code for get_first_kernel

static LispObject CC_get_first_kernel(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_9, v_10, v_11;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_9 = v_3;
    v_10 = v_2;
// end of prologue
    v_11 = v_10;
    v_10 = v_9;
    v_9 = nil;
    {
        LispObject fn = basic_elt(env, 1); // gfk
        return (*qfn3(fn))(fn, v_11, v_10, v_9);
    }
}



// Code for lalr_precedence

static LispObject CC_lalr_precedence(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_18, v_19;
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
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_18 = v_2;
// end of prologue
    v_19 = qvalue(basic_elt(env, 1)); // precedence_table
    v_18 = Lgetv(nil, v_19, v_18);
    v_19 = v_18;
    v_18 = v_19;
    if (v_18 == nil) goto v_11;
    v_18 = v_19;
    if (!car_legal(v_18)) v_18 = carerror(v_18); else
    v_18 = car(v_18);
    goto v_9;
v_11:
    v_18 = nil;
    goto v_9;
    v_18 = nil;
v_9:
    return onevalue(v_18);
}



// Code for diff

static LispObject CC_diff(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_66, v_67;
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
    real_push(nil, nil, nil, nil, nil);
    stack_popper stack_popper_var(6);
// copy arguments values to proper place
    stack[-2] = v_3;
    stack[-3] = v_2;
// end of prologue
    stack[-4] = nil;
v_9:
    v_66 = stack[-3];
    if (!consp(v_66)) goto v_18;
    else goto v_19;
v_18:
    v_66 = lisp_true;
    goto v_17;
v_19:
    v_66 = stack[-3];
    if (!car_legal(v_66)) v_66 = carerror(v_66); else
    v_66 = car(v_66);
    v_66 = (consp(v_66) ? nil : lisp_true);
    goto v_17;
    v_66 = nil;
v_17:
    if (v_66 == nil) goto v_15;
    goto v_10;
v_15:
    v_66 = stack[-3];
    if (!car_legal(v_66)) v_66 = carerror(v_66); else
    v_66 = car(v_66);
    if (!car_legal(v_66)) v_67 = carerror(v_66); else
    v_67 = car(v_66);
    v_66 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_66 = cons(v_67, v_66);
    env = stack[-5];
    stack[0] = ncons(v_66);
    env = stack[-5];
    v_66 = stack[-3];
    if (!car_legal(v_66)) v_66 = carerror(v_66); else
    v_66 = car(v_66);
    if (!car_legal(v_66)) v_67 = cdrerror(v_66); else
    v_67 = cdr(v_66);
    v_66 = stack[-2];
    {   LispObject fn = basic_elt(env, 0); // diff
    v_66 = (*qfn2(fn))(fn, v_67, v_66);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 1); // multf
    stack[-1] = (*qfn2(fn))(fn, stack[0], v_66);
    }
    env = stack[-5];
    v_66 = stack[-3];
    if (!car_legal(v_66)) v_66 = carerror(v_66); else
    v_66 = car(v_66);
    if (!car_legal(v_66)) stack[0] = cdrerror(v_66); else
    stack[0] = cdr(v_66);
    v_66 = stack[-3];
    if (!car_legal(v_66)) v_66 = carerror(v_66); else
    v_66 = car(v_66);
    if (!car_legal(v_66)) v_67 = carerror(v_66); else
    v_67 = car(v_66);
    v_66 = stack[-2];
    {   LispObject fn = basic_elt(env, 2); // diffp1
    v_66 = (*qfn2(fn))(fn, v_67, v_66);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 1); // multf
    v_66 = (*qfn2(fn))(fn, stack[0], v_66);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 3); // addf
    v_67 = (*qfn2(fn))(fn, stack[-1], v_66);
    }
    env = stack[-5];
    v_66 = stack[-4];
    v_66 = cons(v_67, v_66);
    env = stack[-5];
    stack[-4] = v_66;
    v_66 = stack[-3];
    if (!car_legal(v_66)) v_66 = cdrerror(v_66); else
    v_66 = cdr(v_66);
    stack[-3] = v_66;
    goto v_9;
v_10:
    v_66 = nil;
    v_67 = v_66;
v_11:
    v_66 = stack[-4];
    if (v_66 == nil) goto v_56;
    else goto v_57;
v_56:
    v_66 = v_67;
    goto v_8;
v_57:
    v_66 = stack[-4];
    v_66 = car(v_66);
    {   LispObject fn = basic_elt(env, 3); // addf
    v_66 = (*qfn2(fn))(fn, v_66, v_67);
    }
    env = stack[-5];
    v_67 = v_66;
    v_66 = stack[-4];
    v_66 = cdr(v_66);
    stack[-4] = v_66;
    goto v_11;
v_8:
    return onevalue(v_66);
}



// Code for talp_varlat

static LispObject CC_talp_varlat(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_11;
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
    v_11 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // talp_arg2l
    v_11 = (*qfn1(fn))(fn, v_11);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 2); // talp_varlt
    stack[-1] = (*qfn1(fn))(fn, v_11);
    }
    env = stack[-2];
    v_11 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // talp_arg2r
    v_11 = (*qfn1(fn))(fn, v_11);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 2); // talp_varlt
    v_11 = (*qfn1(fn))(fn, v_11);
    }
    env = stack[-2];
    {
        LispObject v_14 = stack[-1];
        LispObject fn = basic_elt(env, 4); // union
        return (*qfn2(fn))(fn, v_14, v_11);
    }
}



// Code for rl_gettype

static LispObject CC_rl_gettype(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_18, v_19, v_20;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_19 = v_2;
// end of prologue
    v_18 = v_19;
    if (!symbolp(v_18)) v_18 = nil;
    else { v_18 = qfastgets(v_18);
           if (v_18 != nil) { v_18 = elt(v_18, 4); // avalue
#ifdef RECORD_GET
             if (v_18 != SPID_NOPROP)
                record_get(elt(fastget_names, 4), 1);
             else record_get(elt(fastget_names, 4), 0),
                v_18 = nil; }
           else record_get(elt(fastget_names, 4), 0); }
#else
             if (v_18 == SPID_NOPROP) v_18 = nil; }}
#endif
    v_20 = v_18;
    v_18 = v_20;
    if (v_18 == nil) goto v_10;
    v_18 = v_20;
    if (!car_legal(v_18)) v_18 = carerror(v_18); else
    v_18 = car(v_18);
    goto v_8;
v_10:
    v_18 = v_19;
    if (!symbolp(v_18)) v_18 = nil;
    else { v_18 = qfastgets(v_18);
           if (v_18 != nil) { v_18 = elt(v_18, 2); // rtype
#ifdef RECORD_GET
             if (v_18 != SPID_NOPROP)
                record_get(elt(fastget_names, 2), 1);
             else record_get(elt(fastget_names, 2), 0),
                v_18 = nil; }
           else record_get(elt(fastget_names, 2), 0); }
#else
             if (v_18 == SPID_NOPROP) v_18 = nil; }}
#endif
    goto v_8;
    v_18 = nil;
v_8:
    return onevalue(v_18);
}



// Code for quotfail!-mod!-p

static LispObject CC_quotfailKmodKp(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_22, v_23, v_24;
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
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_23 = v_3;
    v_24 = v_2;
// end of prologue
    v_22 = lisp_true;
    setvalue(basic_elt(env, 1), v_22); // exact!-quotient!-flag
    v_22 = v_24;
    {   LispObject fn = basic_elt(env, 3); // quotient!-mod!-p
    v_22 = (*qfn2(fn))(fn, v_22, v_23);
    }
    env = stack[0];
    v_23 = v_22;
    v_22 = qvalue(basic_elt(env, 1)); // exact!-quotient!-flag
    if (v_22 == nil) goto v_15;
    v_22 = v_23;
    goto v_7;
v_15:
    v_22 = basic_elt(env, 2); // "Quotient not exact (mod p)"
    {   LispObject fn = basic_elt(env, 4); // errorf
    v_22 = (*qfn1(fn))(fn, v_22);
    }
    goto v_13;
v_13:
    v_22 = nil;
v_7:
    return onevalue(v_22);
}



// Code for retattributes

static LispObject CC_retattributes(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_41, v_42;
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
v_1:
    v_41 = stack[0];
    if (v_41 == nil) goto v_10;
    else goto v_11;
v_10:
    goto v_9;
v_11:
    v_42 = stack[-1];
    v_41 = stack[0];
    if (!car_legal(v_41)) v_41 = carerror(v_41); else
    v_41 = car(v_41);
    {   LispObject fn = basic_elt(env, 1); // find
    v_41 = (*qfn2(fn))(fn, v_42, v_41);
    }
    env = stack[-3];
    v_42 = v_41;
    if (v_42 == nil) goto v_23;
    v_42 = stack[0];
    if (!car_legal(v_42)) v_42 = carerror(v_42); else
    v_42 = car(v_42);
    stack[-2] = list2(v_42, v_41);
    env = stack[-3];
    v_42 = stack[-1];
    v_41 = stack[0];
    if (!car_legal(v_41)) v_41 = cdrerror(v_41); else
    v_41 = cdr(v_41);
    {   LispObject fn = basic_elt(env, 0); // retattributes
    v_41 = (*qfn2(fn))(fn, v_42, v_41);
    }
    {
        LispObject v_46 = stack[-2];
        return cons(v_46, v_41);
    }
v_23:
    v_42 = stack[-1];
    v_41 = stack[0];
    if (!car_legal(v_41)) v_41 = cdrerror(v_41); else
    v_41 = cdr(v_41);
    stack[-1] = v_42;
    stack[0] = v_41;
    goto v_1;
    goto v_9;
v_9:
    v_41 = nil;
    return onevalue(v_41);
}



// Code for round!:mt

static LispObject CC_roundTmt(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_83, v_84;
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    stack[-1] = v_3;
    stack[-2] = v_2;
// end of prologue
    v_84 = stack[-2];
    v_83 = basic_elt(env, 1); // !:rd!:
    if (!consp(v_84)) goto v_16;
    v_84 = car(v_84);
    if (v_84 == v_83) goto v_15;
    else goto v_16;
v_15:
    v_83 = stack[-2];
    if (!car_legal(v_83)) v_83 = cdrerror(v_83); else
    v_83 = cdr(v_83);
    v_83 = (consp(v_83) ? nil : lisp_true);
    v_83 = (v_83 == nil ? lisp_true : nil);
    goto v_14;
v_16:
    v_83 = nil;
    goto v_14;
    v_83 = nil;
v_14:
    if (v_83 == nil) goto v_12;
    v_83 = stack[-1];
    v_83 = integerp(v_83);
    if (v_83 == nil) goto v_29;
    else goto v_30;
v_29:
    v_83 = nil;
    goto v_28;
v_30:
    v_84 = stack[-1];
    v_83 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_83 = static_cast<LispObject>(greaterp2(v_84, v_83));
    v_83 = v_83 ? lisp_true : nil;
    env = stack[-4];
    goto v_28;
    v_83 = nil;
v_28:
    goto v_10;
v_12:
    v_83 = nil;
    goto v_10;
    v_83 = nil;
v_10:
    if (v_83 == nil) goto v_8;
    v_83 = stack[-2];
    if (!car_legal(v_83)) v_83 = cdrerror(v_83); else
    v_83 = cdr(v_83);
    if (!car_legal(v_83)) v_83 = carerror(v_83); else
    v_83 = car(v_83);
    v_83 = Labsval(nil, v_83);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 2); // msd
    v_84 = (*qfn1(fn))(fn, v_83);
    }
    env = stack[-4];
    v_83 = stack[-1];
    v_83 = difference2(v_84, v_83);
    env = stack[-4];
    v_84 = sub1(v_83);
    env = stack[-4];
    stack[-1] = v_84;
    v_83 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_83 = static_cast<LispObject>(lessp2(v_84, v_83));
    v_83 = v_83 ? lisp_true : nil;
    env = stack[-4];
    if (v_83 == nil) goto v_45;
    v_83 = stack[-2];
    goto v_43;
v_45:
    v_84 = stack[-1];
    v_83 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_84 == v_83) goto v_57;
    else goto v_58;
v_57:
    v_83 = stack[-2];
    {
        LispObject fn = basic_elt(env, 3); // round!:last
        return (*qfn1(fn))(fn, v_83);
    }
v_58:
    stack[-3] = basic_elt(env, 1); // !:rd!:
    v_83 = stack[-2];
    if (!car_legal(v_83)) v_83 = cdrerror(v_83); else
    v_83 = cdr(v_83);
    if (!car_legal(v_83)) stack[0] = carerror(v_83); else
    stack[0] = car(v_83);
    v_83 = stack[-1];
    v_83 = negate(v_83);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 4); // ashift
    stack[0] = (*qfn2(fn))(fn, stack[0], v_83);
    }
    env = stack[-4];
    v_83 = stack[-2];
    if (!car_legal(v_83)) v_83 = cdrerror(v_83); else
    v_83 = cdr(v_83);
    if (!car_legal(v_83)) v_84 = cdrerror(v_83); else
    v_84 = cdr(v_83);
    v_83 = stack[-1];
    v_83 = plus2(v_84, v_83);
    env = stack[-4];
    v_83 = list2star(stack[-3], stack[0], v_83);
    env = stack[-4];
    {
        LispObject fn = basic_elt(env, 3); // round!:last
        return (*qfn1(fn))(fn, v_83);
    }
    v_83 = nil;
v_43:
    goto v_6;
v_8:
    v_83 = basic_elt(env, 0); // round!:mt
    {
        LispObject fn = basic_elt(env, 5); // bflerrmsg
        return (*qfn1(fn))(fn, v_83);
    }
    v_83 = nil;
v_6:
    return onevalue(v_83);
}



// Code for eofcheck

static LispObject CC_eofcheck(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_23, v_24;
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
    stack_popper stack_popper_var(1);
// end of prologue
    v_24 = qvalue(basic_elt(env, 1)); // program!*
    v_23 = qvalue(basic_elt(env, 2)); // !$eof!$
    if (v_24 == v_23) goto v_5;
    else goto v_6;
v_5:
    v_24 = qvalue(basic_elt(env, 3)); // ttype!*
    v_23 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    if (v_24 == v_23) goto v_11;
    else goto v_12;
v_11:
    v_23 = qvalue(basic_elt(env, 4)); // eof!*
    v_23 = add1(v_23);
    env = stack[0];
    setvalue(basic_elt(env, 4), v_23); // eof!*
    goto v_10;
v_12:
    v_23 = nil;
    goto v_10;
    v_23 = nil;
v_10:
    goto v_4;
v_6:
    v_23 = nil;
    goto v_4;
    v_23 = nil;
v_4:
    return onevalue(v_23);
}



// Code for divd

static LispObject CC_divd(LispObject env,
                         LispObject v_2, LispObject v_3)
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
        push(v_2,v_3);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_3,v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    stack[-1] = v_3;
    stack[-2] = v_2;
// end of prologue
    stack[-3] = nil;
v_8:
    v_70 = stack[-1];
    if (v_70 == nil) goto v_11;
    else goto v_12;
v_11:
    v_70 = stack[-2];
    if (v_70 == nil) goto v_16;
    else goto v_17;
v_16:
    stack[0] = stack[-3];
    v_72 = basic_elt(env, 1); // poly
    v_71 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_70 = basic_elt(env, 2); // "0/0 formed"
    {   LispObject fn = basic_elt(env, 4); // rerror
    v_70 = (*qfn3(fn))(fn, v_72, v_71, v_70);
    }
    env = stack[-4];
    {
        LispObject v_77 = stack[0];
        LispObject fn = basic_elt(env, 5); // nreverse
        return (*qfn2(fn))(fn, v_77, v_70);
    }
v_17:
    stack[0] = stack[-3];
    v_72 = basic_elt(env, 1); // poly
    v_71 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_70 = basic_elt(env, 3); // "Zero divisor"
    {   LispObject fn = basic_elt(env, 4); // rerror
    v_70 = (*qfn3(fn))(fn, v_72, v_71, v_70);
    }
    env = stack[-4];
    {
        LispObject v_78 = stack[0];
        LispObject fn = basic_elt(env, 5); // nreverse
        return (*qfn2(fn))(fn, v_78, v_70);
    }
    goto v_10;
v_12:
    v_70 = stack[-2];
    if (v_70 == nil) goto v_33;
    else goto v_34;
v_33:
    v_70 = stack[-3];
    {
        LispObject fn = basic_elt(env, 5); // nreverse
        return (*qfn1(fn))(fn, v_70);
    }
v_34:
    v_70 = stack[-2];
    if (!consp(v_70)) goto v_42;
    else goto v_43;
v_42:
    v_70 = lisp_true;
    goto v_41;
v_43:
    v_70 = stack[-2];
    if (!car_legal(v_70)) v_70 = carerror(v_70); else
    v_70 = car(v_70);
    v_70 = (consp(v_70) ? nil : lisp_true);
    goto v_41;
    v_70 = nil;
v_41:
    if (v_70 == nil) goto v_39;
    stack[0] = stack[-3];
    v_71 = stack[-2];
    v_70 = stack[-1];
    {   LispObject fn = basic_elt(env, 6); // divdm
    v_70 = (*qfn2(fn))(fn, v_71, v_70);
    }
    env = stack[-4];
    {
        LispObject v_79 = stack[0];
        LispObject fn = basic_elt(env, 5); // nreverse
        return (*qfn2(fn))(fn, v_79, v_70);
    }
v_39:
    v_70 = stack[-2];
    if (!car_legal(v_70)) v_70 = carerror(v_70); else
    v_70 = car(v_70);
    if (!car_legal(v_70)) stack[0] = carerror(v_70); else
    stack[0] = car(v_70);
    v_70 = stack[-2];
    if (!car_legal(v_70)) v_70 = carerror(v_70); else
    v_70 = car(v_70);
    if (!car_legal(v_70)) v_71 = cdrerror(v_70); else
    v_71 = cdr(v_70);
    v_70 = stack[-1];
    {   LispObject fn = basic_elt(env, 0); // divd
    v_71 = (*qfn2(fn))(fn, v_71, v_70);
    }
    env = stack[-4];
    v_70 = stack[-3];
    v_70 = acons(stack[0], v_71, v_70);
    env = stack[-4];
    stack[-3] = v_70;
    v_70 = stack[-2];
    if (!car_legal(v_70)) v_70 = cdrerror(v_70); else
    v_70 = cdr(v_70);
    stack[-2] = v_70;
    goto v_8;
v_10:
    v_70 = nil;
    return onevalue(v_70);
}



// Code for dp_times_bc

static LispObject CC_dp_times_bc(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_52, v_53;
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
    real_push(nil, nil, nil, nil, nil);
    real_push(nil);
    stack_popper stack_popper_var(7);
// copy arguments values to proper place
    v_52 = v_3;
    stack[-4] = v_2;
// end of prologue
    stack[-5] = v_52;
    v_52 = stack[-5];
    if (v_52 == nil) goto v_14;
    else goto v_15;
v_14:
    v_52 = nil;
    goto v_9;
v_15:
    v_52 = stack[-5];
    if (!car_legal(v_52)) v_52 = carerror(v_52); else
    v_52 = car(v_52);
    v_53 = v_52;
    if (!car_legal(v_53)) stack[0] = carerror(v_53); else
    stack[0] = car(v_53);
    v_53 = stack[-4];
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    {   LispObject fn = basic_elt(env, 1); // cali_bc_prod
    v_52 = (*qfn2(fn))(fn, v_53, v_52);
    }
    env = stack[-6];
    v_52 = cons(stack[0], v_52);
    env = stack[-6];
    v_52 = ncons(v_52);
    env = stack[-6];
    stack[-2] = v_52;
    stack[-3] = v_52;
v_10:
    v_52 = stack[-5];
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    stack[-5] = v_52;
    v_52 = stack[-5];
    if (v_52 == nil) goto v_33;
    else goto v_34;
v_33:
    v_52 = stack[-3];
    goto v_9;
v_34:
    stack[-1] = stack[-2];
    v_52 = stack[-5];
    if (!car_legal(v_52)) v_52 = carerror(v_52); else
    v_52 = car(v_52);
    v_53 = v_52;
    if (!car_legal(v_53)) stack[0] = carerror(v_53); else
    stack[0] = car(v_53);
    v_53 = stack[-4];
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    {   LispObject fn = basic_elt(env, 1); // cali_bc_prod
    v_52 = (*qfn2(fn))(fn, v_53, v_52);
    }
    env = stack[-6];
    v_52 = cons(stack[0], v_52);
    env = stack[-6];
    v_52 = ncons(v_52);
    env = stack[-6];
    if (!car_legal(stack[-1])) rplacd_fails(stack[-1]);
    setcdr(stack[-1], v_52);
    v_52 = stack[-2];
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    stack[-2] = v_52;
    goto v_10;
v_9:
    return onevalue(v_52);
}



// Code for pdmult

static LispObject CC_pdmult(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_136, v_137;
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
    real_push(nil, nil, nil, nil, nil);
    real_push(nil, nil, nil, nil, nil);
    stack_popper stack_popper_var(11);
// copy arguments values to proper place
    stack[-8] = v_3;
    v_136 = v_2;
// end of prologue
    stack[-9] = v_136;
    v_136 = stack[-9];
    if (v_136 == nil) goto v_14;
    else goto v_15;
v_14:
    v_136 = nil;
    goto v_9;
v_15:
    v_136 = stack[-9];
    if (!car_legal(v_136)) v_136 = carerror(v_136); else
    v_136 = car(v_136);
    stack[-4] = v_136;
    v_136 = stack[-4];
    if (!car_legal(v_136)) v_137 = carerror(v_136); else
    v_137 = car(v_136);
    v_136 = stack[-8];
    {   LispObject fn = basic_elt(env, 1); // pair
    v_136 = (*qfn2(fn))(fn, v_137, v_136);
    }
    env = stack[-10];
    stack[-3] = v_136;
    v_136 = stack[-3];
    if (v_136 == nil) goto v_35;
    else goto v_36;
v_35:
    v_136 = nil;
    v_137 = v_136;
    goto v_27;
v_36:
    v_136 = stack[-3];
    if (!car_legal(v_136)) v_136 = carerror(v_136); else
    v_136 = car(v_136);
    v_137 = v_136;
    if (!car_legal(v_137)) v_137 = carerror(v_137); else
    v_137 = car(v_137);
    if (!car_legal(v_136)) v_136 = cdrerror(v_136); else
    v_136 = cdr(v_136);
    v_136 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_137) + static_cast<std::uintptr_t>(v_136) - TAG_FIXNUM);
    v_136 = ncons(v_136);
    env = stack[-10];
    stack[-1] = v_136;
    stack[-2] = v_136;
v_28:
    v_136 = stack[-3];
    if (!car_legal(v_136)) v_136 = cdrerror(v_136); else
    v_136 = cdr(v_136);
    stack[-3] = v_136;
    v_136 = stack[-3];
    if (v_136 == nil) goto v_52;
    else goto v_53;
v_52:
    v_136 = stack[-2];
    v_137 = v_136;
    goto v_27;
v_53:
    stack[0] = stack[-1];
    v_136 = stack[-3];
    if (!car_legal(v_136)) v_136 = carerror(v_136); else
    v_136 = car(v_136);
    v_137 = v_136;
    if (!car_legal(v_137)) v_137 = carerror(v_137); else
    v_137 = car(v_137);
    if (!car_legal(v_136)) v_136 = cdrerror(v_136); else
    v_136 = cdr(v_136);
    v_136 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_137) + static_cast<std::uintptr_t>(v_136) - TAG_FIXNUM);
    v_136 = ncons(v_136);
    env = stack[-10];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_136);
    v_136 = stack[-1];
    if (!car_legal(v_136)) v_136 = cdrerror(v_136); else
    v_136 = cdr(v_136);
    stack[-1] = v_136;
    goto v_28;
v_27:
    v_136 = stack[-4];
    if (!car_legal(v_136)) v_136 = cdrerror(v_136); else
    v_136 = cdr(v_136);
    v_136 = cons(v_137, v_136);
    env = stack[-10];
    v_136 = ncons(v_136);
    env = stack[-10];
    stack[-6] = v_136;
    stack[-7] = v_136;
v_10:
    v_136 = stack[-9];
    if (!car_legal(v_136)) v_136 = cdrerror(v_136); else
    v_136 = cdr(v_136);
    stack[-9] = v_136;
    v_136 = stack[-9];
    if (v_136 == nil) goto v_75;
    else goto v_76;
v_75:
    v_136 = stack[-7];
    goto v_9;
v_76:
    stack[-5] = stack[-6];
    v_136 = stack[-9];
    if (!car_legal(v_136)) v_136 = carerror(v_136); else
    v_136 = car(v_136);
    stack[-4] = v_136;
    v_136 = stack[-4];
    if (!car_legal(v_136)) v_137 = carerror(v_136); else
    v_137 = car(v_136);
    v_136 = stack[-8];
    {   LispObject fn = basic_elt(env, 1); // pair
    v_136 = (*qfn2(fn))(fn, v_137, v_136);
    }
    env = stack[-10];
    stack[-3] = v_136;
    v_136 = stack[-3];
    if (v_136 == nil) goto v_97;
    else goto v_98;
v_97:
    v_136 = nil;
    v_137 = v_136;
    goto v_89;
v_98:
    v_136 = stack[-3];
    if (!car_legal(v_136)) v_136 = carerror(v_136); else
    v_136 = car(v_136);
    v_137 = v_136;
    if (!car_legal(v_137)) v_137 = carerror(v_137); else
    v_137 = car(v_137);
    if (!car_legal(v_136)) v_136 = cdrerror(v_136); else
    v_136 = cdr(v_136);
    v_136 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_137) + static_cast<std::uintptr_t>(v_136) - TAG_FIXNUM);
    v_136 = ncons(v_136);
    env = stack[-10];
    stack[-1] = v_136;
    stack[-2] = v_136;
v_90:
    v_136 = stack[-3];
    if (!car_legal(v_136)) v_136 = cdrerror(v_136); else
    v_136 = cdr(v_136);
    stack[-3] = v_136;
    v_136 = stack[-3];
    if (v_136 == nil) goto v_114;
    else goto v_115;
v_114:
    v_136 = stack[-2];
    v_137 = v_136;
    goto v_89;
v_115:
    stack[0] = stack[-1];
    v_136 = stack[-3];
    if (!car_legal(v_136)) v_136 = carerror(v_136); else
    v_136 = car(v_136);
    v_137 = v_136;
    if (!car_legal(v_137)) v_137 = carerror(v_137); else
    v_137 = car(v_137);
    if (!car_legal(v_136)) v_136 = cdrerror(v_136); else
    v_136 = cdr(v_136);
    v_136 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_137) + static_cast<std::uintptr_t>(v_136) - TAG_FIXNUM);
    v_136 = ncons(v_136);
    env = stack[-10];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_136);
    v_136 = stack[-1];
    if (!car_legal(v_136)) v_136 = cdrerror(v_136); else
    v_136 = cdr(v_136);
    stack[-1] = v_136;
    goto v_90;
v_89:
    v_136 = stack[-4];
    if (!car_legal(v_136)) v_136 = cdrerror(v_136); else
    v_136 = cdr(v_136);
    v_136 = cons(v_137, v_136);
    env = stack[-10];
    v_136 = ncons(v_136);
    env = stack[-10];
    if (!car_legal(stack[-5])) rplacd_fails(stack[-5]);
    setcdr(stack[-5], v_136);
    v_136 = stack[-6];
    if (!car_legal(v_136)) v_136 = cdrerror(v_136); else
    v_136 = cdr(v_136);
    stack[-6] = v_136;
    goto v_10;
v_9:
    return onevalue(v_136);
}



// Code for mcharg2

static LispObject CC_mcharg2(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_88, v_89, v_90;
    LispObject v_5;
    if (_a4up_ == nil)
        aerror1("not enough arguments provided", basic_elt(env, 0));
    v_5 = car(_a4up_); _a4up_ = cdr(_a4up_);
    if (_a4up_ != nil)
        aerror1("too many arguments provided", basic_elt(env, 0));
#ifdef CHECK_STACK
    if_check_stack;
#endif
#ifdef CONSERVATIVE
    poll();
#else // CONSERVATIVE
    if (++reclaim_trigger_count == reclaim_trigger_target ||
        stack >= stackLimit)
    {
        push(v_2,v_3,v_4,v_5);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_5,v_4,v_3,v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil, nil, nil, nil, nil);
    real_push(nil, nil, nil, nil, nil);
    real_push(nil);
    stack_popper stack_popper_var(12);
// copy arguments values to proper place
    stack[-6] = v_5;
    stack[-7] = v_4;
    stack[-8] = v_3;
    stack[-9] = v_2;
// end of prologue
    v_88 = stack[-9];
    if (v_88 == nil) goto v_12;
    else goto v_13;
v_12:
    v_88 = stack[-7];
    goto v_9;
v_13:
    v_88 = stack[-9];
    if (!car_legal(v_88)) v_89 = carerror(v_88); else
    v_89 = car(v_88);
    v_88 = stack[-8];
    if (!car_legal(v_88)) v_88 = carerror(v_88); else
    v_88 = car(v_88);
    {   LispObject fn = basic_elt(env, 1); // mchk
    v_88 = (*qfn2(fn))(fn, v_89, v_88);
    }
    env = stack[-11];
    v_89 = v_88;
    v_88 = stack[-9];
    if (!car_legal(v_88)) v_88 = cdrerror(v_88); else
    v_88 = cdr(v_88);
    stack[-9] = v_88;
    v_88 = stack[-8];
    if (!car_legal(v_88)) v_88 = cdrerror(v_88); else
    v_88 = cdr(v_88);
    stack[-8] = v_88;
    v_88 = v_89;
    stack[-10] = v_88;
v_30:
    v_88 = stack[-10];
    if (v_88 == nil) goto v_35;
    else goto v_36;
v_35:
    v_88 = nil;
    goto v_29;
v_36:
    v_88 = stack[-10];
    if (!car_legal(v_88)) v_88 = carerror(v_88); else
    v_88 = car(v_88);
    stack[0] = v_88;
    stack[-2] = stack[-9];
    v_90 = stack[0];
    v_89 = stack[-8];
    v_88 = stack[-6];
    {   LispObject fn = basic_elt(env, 2); // updtemplate
    stack[-1] = (*qfn3(fn))(fn, v_90, v_89, v_88);
    }
    env = stack[-11];
    v_89 = stack[-7];
    v_88 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // msappend
    stack[0] = (*qfn2(fn))(fn, v_89, v_88);
    }
    env = stack[-11];
    v_88 = stack[-6];
    v_88 = ncons(v_88);
    env = stack[-11];
    {   LispObject fn = basic_elt(env, 0); // mcharg2
    v_88 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_88);
    }
    env = stack[-11];
    stack[-5] = v_88;
    v_88 = stack[-5];
    {   LispObject fn = basic_elt(env, 4); // lastpair
    v_88 = (*qfn1(fn))(fn, v_88);
    }
    env = stack[-11];
    stack[-4] = v_88;
    v_88 = stack[-10];
    if (!car_legal(v_88)) v_88 = cdrerror(v_88); else
    v_88 = cdr(v_88);
    stack[-10] = v_88;
    v_88 = stack[-4];
    if (!consp(v_88)) goto v_59;
    else goto v_60;
v_59:
    goto v_30;
v_60:
v_31:
    v_88 = stack[-10];
    if (v_88 == nil) goto v_64;
    else goto v_65;
v_64:
    v_88 = stack[-5];
    goto v_29;
v_65:
    stack[-3] = stack[-4];
    v_88 = stack[-10];
    if (!car_legal(v_88)) v_88 = carerror(v_88); else
    v_88 = car(v_88);
    stack[0] = v_88;
    stack[-2] = stack[-9];
    v_90 = stack[0];
    v_89 = stack[-8];
    v_88 = stack[-6];
    {   LispObject fn = basic_elt(env, 2); // updtemplate
    stack[-1] = (*qfn3(fn))(fn, v_90, v_89, v_88);
    }
    env = stack[-11];
    v_89 = stack[-7];
    v_88 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // msappend
    stack[0] = (*qfn2(fn))(fn, v_89, v_88);
    }
    env = stack[-11];
    v_88 = stack[-6];
    v_88 = ncons(v_88);
    env = stack[-11];
    {   LispObject fn = basic_elt(env, 0); // mcharg2
    v_88 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_88);
    }
    env = stack[-11];
    if (!car_legal(stack[-3])) rplacd_fails(stack[-3]);
    setcdr(stack[-3], v_88);
    v_88 = stack[-4];
    {   LispObject fn = basic_elt(env, 4); // lastpair
    v_88 = (*qfn1(fn))(fn, v_88);
    }
    env = stack[-11];
    stack[-4] = v_88;
    v_88 = stack[-10];
    if (!car_legal(v_88)) v_88 = cdrerror(v_88); else
    v_88 = cdr(v_88);
    stack[-10] = v_88;
    goto v_31;
v_29:
v_9:
    return onevalue(v_88);
}



// Code for cancel

static LispObject CC_cancel(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_38, v_39;
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
    v_38 = qvalue(basic_elt(env, 1)); // !*mcd
    if (v_38 == nil) goto v_8;
    else goto v_6;
v_8:
    v_38 = stack[0];
    if (!car_legal(v_38)) v_39 = cdrerror(v_38); else
    v_39 = cdr(v_38);
    v_38 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_39 == v_38) goto v_6;
    goto v_7;
v_6:
    v_38 = stack[0];
    if (!car_legal(v_38)) v_39 = carerror(v_38); else
    v_39 = car(v_38);
    v_38 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-1] = cons(v_39, v_38);
    env = stack[-2];
    v_39 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_38 = stack[0];
    if (!car_legal(v_38)) v_38 = cdrerror(v_38); else
    v_38 = cdr(v_38);
    v_38 = cons(v_39, v_38);
    env = stack[-2];
    {
        LispObject v_42 = stack[-1];
        LispObject fn = basic_elt(env, 2); // multsq
        return (*qfn2(fn))(fn, v_42, v_38);
    }
v_7:
    v_38 = stack[0];
    if (!car_legal(v_38)) v_39 = carerror(v_38); else
    v_39 = car(v_38);
    v_38 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-1] = cons(v_39, v_38);
    env = stack[-2];
    v_38 = stack[0];
    if (!car_legal(v_38)) v_39 = cdrerror(v_38); else
    v_39 = cdr(v_38);
    v_38 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_38 = cons(v_39, v_38);
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // mk!*sq
    v_39 = (*qfn1(fn))(fn, v_38);
    }
    env = stack[-2];
    v_38 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    v_38 = list2(v_39, v_38);
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 4); // simpexpt
    v_38 = (*qfn1(fn))(fn, v_38);
    }
    env = stack[-2];
    {
        LispObject v_43 = stack[-1];
        LispObject fn = basic_elt(env, 2); // multsq
        return (*qfn2(fn))(fn, v_43, v_38);
    }
    v_38 = nil;
    return onevalue(v_38);
}



// Code for canonsq

static LispObject CC_canonsq(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_150, v_151, v_152;
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
    v_150 = stack[-2];
    if (!car_legal(v_150)) v_151 = cdrerror(v_150); else
    v_151 = cdr(v_150);
    v_150 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_151 == v_150) goto v_6;
    else goto v_7;
v_6:
    v_150 = stack[-2];
    goto v_5;
v_7:
    v_150 = stack[-2];
    if (!car_legal(v_150)) v_150 = carerror(v_150); else
    v_150 = car(v_150);
    if (v_150 == nil) goto v_12;
    else goto v_13;
v_12:
    v_151 = nil;
    v_150 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_151, v_150);
v_13:
    stack[-1] = nil;
    v_150 = qvalue(basic_elt(env, 1)); // asymplis!*
    if (v_150 == nil) goto v_28;
    v_150 = stack[-2];
    if (!car_legal(v_150)) v_151 = carerror(v_150); else
    v_151 = car(v_150);
    v_150 = stack[-2];
    if (!car_legal(v_150)) v_150 = cdrerror(v_150); else
    v_150 = cdr(v_150);
    {   LispObject fn = basic_elt(env, 5); // gcdf
    v_151 = (*qfn2(fn))(fn, v_151, v_150);
    }
    env = stack[-4];
    stack[-3] = v_151;
    v_150 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_151 == v_150) goto v_28;
    v_150 = stack[-2];
    if (!car_legal(v_150)) v_151 = carerror(v_150); else
    v_151 = car(v_150);
    v_150 = stack[-3];
    {   LispObject fn = basic_elt(env, 6); // quotf!-fail
    stack[0] = (*qfn2(fn))(fn, v_151, v_150);
    }
    env = stack[-4];
    v_150 = stack[-2];
    if (!car_legal(v_150)) v_151 = cdrerror(v_150); else
    v_151 = cdr(v_150);
    v_150 = stack[-3];
    {   LispObject fn = basic_elt(env, 6); // quotf!-fail
    v_150 = (*qfn2(fn))(fn, v_151, v_150);
    }
    env = stack[-4];
    v_150 = cons(stack[0], v_150);
    env = stack[-4];
    stack[-2] = v_150;
    goto v_26;
v_28:
v_26:
    v_150 = stack[-2];
    if (!car_legal(v_150)) v_150 = cdrerror(v_150); else
    v_150 = cdr(v_150);
    {   LispObject fn = basic_elt(env, 7); // lnc
    v_150 = (*qfn1(fn))(fn, v_150);
    }
    env = stack[-4];
    stack[-3] = v_150;
    v_151 = stack[-3];
    v_150 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_151 == v_150) goto v_52;
    else goto v_53;
v_52:
    v_150 = stack[-2];
    goto v_24;
v_53:
    v_150 = stack[-3];
    if (!consp(v_150)) goto v_57;
    else goto v_58;
v_57:
    v_150 = stack[-3];
    v_150 = Lminusp(nil, v_150);
    env = stack[-4];
    if (v_150 == nil) goto v_63;
    v_150 = stack[-2];
    if (!car_legal(v_150)) v_150 = carerror(v_150); else
    v_150 = car(v_150);
    {   LispObject fn = basic_elt(env, 8); // negf
    stack[0] = (*qfn1(fn))(fn, v_150);
    }
    env = stack[-4];
    v_150 = stack[-2];
    if (!car_legal(v_150)) v_150 = cdrerror(v_150); else
    v_150 = cdr(v_150);
    {   LispObject fn = basic_elt(env, 8); // negf
    v_150 = (*qfn1(fn))(fn, v_150);
    }
    env = stack[-4];
    v_150 = cons(stack[0], v_150);
    env = stack[-4];
    stack[-2] = v_150;
    v_150 = stack[-3];
    v_150 = negate(v_150);
    env = stack[-4];
    stack[-3] = v_150;
    goto v_61;
v_63:
    goto v_61;
v_61:
    goto v_51;
v_58:
    v_150 = stack[-3];
    if (!car_legal(v_150)) v_150 = carerror(v_150); else
    v_150 = car(v_150);
    if (!symbolp(v_150)) v_151 = nil;
    else { v_151 = qfastgets(v_150);
           if (v_151 != nil) { v_151 = elt(v_151, 30); // minusp
#ifdef RECORD_GET
             if (v_151 != SPID_NOPROP)
                record_get(elt(fastget_names, 30), 1);
             else record_get(elt(fastget_names, 30), 0),
                v_151 = nil; }
           else record_get(elt(fastget_names, 30), 0); }
#else
             if (v_151 == SPID_NOPROP) v_151 = nil; }}
#endif
    v_150 = stack[-3];
    v_150 = Lapply1(nil, v_151, v_150);
    env = stack[-4];
    if (v_150 == nil) goto v_79;
    v_150 = stack[-2];
    if (!car_legal(v_150)) v_150 = carerror(v_150); else
    v_150 = car(v_150);
    {   LispObject fn = basic_elt(env, 8); // negf
    stack[0] = (*qfn1(fn))(fn, v_150);
    }
    env = stack[-4];
    v_150 = stack[-2];
    if (!car_legal(v_150)) v_150 = cdrerror(v_150); else
    v_150 = cdr(v_150);
    {   LispObject fn = basic_elt(env, 8); // negf
    v_150 = (*qfn1(fn))(fn, v_150);
    }
    env = stack[-4];
    v_150 = cons(stack[0], v_150);
    env = stack[-4];
    stack[-2] = v_150;
    v_150 = stack[-3];
    if (!car_legal(v_150)) v_151 = carerror(v_150); else
    v_151 = car(v_150);
    v_150 = basic_elt(env, 2); // difference
    stack[0] = get(v_151, v_150);
    env = stack[-4];
    v_150 = stack[-3];
    if (!car_legal(v_150)) v_150 = carerror(v_150); else
    v_150 = car(v_150);
    if (!symbolp(v_150)) v_151 = nil;
    else { v_151 = qfastgets(v_150);
           if (v_151 != nil) { v_151 = elt(v_151, 34); // i2d
#ifdef RECORD_GET
             if (v_151 != SPID_NOPROP)
                record_get(elt(fastget_names, 34), 1);
             else record_get(elt(fastget_names, 34), 0),
                v_151 = nil; }
           else record_get(elt(fastget_names, 34), 0); }
#else
             if (v_151 == SPID_NOPROP) v_151 = nil; }}
#endif
    v_150 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_151 = Lapply1(nil, v_151, v_150);
    env = stack[-4];
    v_150 = stack[-3];
    v_150 = Lapply2(nil, stack[0], v_151, v_150);
    env = stack[-4];
    stack[-3] = v_150;
    goto v_51;
v_79:
v_51:
    v_150 = stack[-3];
    if (is_number(v_150)) goto v_110;
    v_151 = qvalue(basic_elt(env, 3)); // dmode!*
    v_150 = basic_elt(env, 4); // unitsfn
    v_150 = get(v_151, v_150);
    env = stack[-4];
    stack[-1] = v_150;
    goto v_108;
v_110:
    v_150 = nil;
    goto v_108;
    v_150 = nil;
v_108:
    if (v_150 == nil) goto v_106;
    v_152 = stack[-1];
    v_151 = stack[-2];
    v_150 = stack[-3];
        return Lapply2(nil, v_152, v_151, v_150);
v_106:
    v_150 = qvalue(basic_elt(env, 3)); // dmode!*
    if (!symbolp(v_150)) v_150 = nil;
    else { v_150 = qfastgets(v_150);
           if (v_150 != nil) { v_150 = elt(v_150, 3); // field
#ifdef RECORD_GET
             if (v_150 == SPID_NOPROP)
                record_get(elt(fastget_names, 3), 0),
                v_150 = nil;
             else record_get(elt(fastget_names, 3), 1),
                v_150 = lisp_true; }
           else record_get(elt(fastget_names, 3), 0); }
#else
             if (v_150 == SPID_NOPROP) v_150 = nil; else v_150 = lisp_true; }}
#endif
    if (v_150 == nil) goto v_127;
    v_150 = lisp_true;
    goto v_125;
v_127:
    v_150 = stack[-3];
    if (!consp(v_150)) goto v_136;
    v_150 = stack[-3];
    if (!car_legal(v_150)) v_150 = carerror(v_150); else
    v_150 = car(v_150);
    if (!symbolp(v_150)) v_150 = nil;
    else { v_150 = qfastgets(v_150);
           if (v_150 != nil) { v_150 = elt(v_150, 3); // field
#ifdef RECORD_GET
             if (v_150 == SPID_NOPROP)
                record_get(elt(fastget_names, 3), 0),
                v_150 = nil;
             else record_get(elt(fastget_names, 3), 1),
                v_150 = lisp_true; }
           else record_get(elt(fastget_names, 3), 0); }
#else
             if (v_150 == SPID_NOPROP) v_150 = nil; else v_150 = lisp_true; }}
#endif
    goto v_134;
v_136:
    v_150 = nil;
    goto v_134;
    v_150 = nil;
v_134:
    goto v_125;
    v_150 = nil;
v_125:
    if (v_150 == nil) goto v_123;
    v_151 = stack[-3];
    v_150 = stack[-2];
    {
        LispObject fn = basic_elt(env, 9); // fieldconv
        return (*qfn2(fn))(fn, v_151, v_150);
    }
v_123:
    v_150 = stack[-2];
    goto v_104;
    v_150 = nil;
v_104:
v_24:
    goto v_5;
    v_150 = nil;
v_5:
    return onevalue(v_150);
}



// Code for rassoc

static LispObject CC_rassoc(LispObject env,
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
    if (!consp(v_26)) goto v_10;
    else goto v_11;
v_10:
    v_26 = nil;
    goto v_6;
v_11:
    v_29 = v_28;
    v_26 = v_27;
    if (!car_legal(v_26)) v_26 = carerror(v_26); else
    v_26 = car(v_26);
    if (!car_legal(v_26)) v_26 = cdrerror(v_26); else
    v_26 = cdr(v_26);
    if (equal(v_29, v_26)) goto v_14;
    else goto v_15;
v_14:
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



// Code for anforml

static LispObject CC_anforml(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_70, v_71;
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
v_8:
    v_70 = stack[0];
    if (!consp(v_70)) goto v_11;
    else goto v_12;
v_11:
    goto v_7;
v_12:
    v_70 = stack[0];
    if (!car_legal(v_70)) v_70 = carerror(v_70); else
    v_70 = car(v_70);
    {   LispObject fn = basic_elt(env, 5); // anform
    v_70 = (*qfn1(fn))(fn, v_70);
    }
    env = stack[-1];
    v_70 = stack[0];
    if (!car_legal(v_70)) v_70 = cdrerror(v_70); else
    v_70 = cdr(v_70);
    stack[0] = v_70;
    goto v_8;
v_7:
    v_70 = stack[0];
    if (v_70 == nil) goto v_23;
    v_70 = qvalue(basic_elt(env, 1)); // !*globals
    if (v_70 == nil) goto v_28;
    v_70 = stack[0];
    if (v_70 == nil) goto v_28;
    v_71 = stack[0];
    v_70 = lisp_true;
    if (v_71 == v_70) goto v_38;
    v_70 = stack[0];
    if (symbolp(v_70)) goto v_44;
    v_70 = nil;
    goto v_42;
v_44:
    v_71 = stack[0];
    v_70 = qvalue(basic_elt(env, 2)); // locls!*
    v_70 = Lassoc(nil, v_71, v_70);
    v_70 = (v_70 == nil ? lisp_true : nil);
    goto v_42;
    v_70 = nil;
v_42:
    goto v_36;
v_38:
    v_70 = nil;
    goto v_36;
    v_70 = nil;
v_36:
    if (v_70 == nil) goto v_28;
    v_71 = stack[0];
    v_70 = basic_elt(env, 3); // glb2rf
    v_70 = Lflagp(nil, v_71, v_70);
    env = stack[-1];
    if (v_70 == nil) goto v_58;
    else goto v_59;
v_58:
    v_70 = stack[0];
    v_71 = ncons(v_70);
    env = stack[-1];
    v_70 = basic_elt(env, 3); // glb2rf
    v_70 = Lflag(nil, v_71, v_70);
    env = stack[-1];
    v_71 = stack[0];
    v_70 = qvalue(basic_elt(env, 4)); // globs!*
    v_70 = cons(v_71, v_70);
    env = stack[-1];
    setvalue(basic_elt(env, 4), v_70); // globs!*
    goto v_57;
v_59:
v_57:
    goto v_26;
v_28:
v_26:
    goto v_21;
v_23:
v_21:
    v_70 = nil;
    return onevalue(v_70);
}



// Code for cdarx

static LispObject CC_cdarx(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_8, v_9;
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
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_8 = v_2;
// end of prologue
    v_9 = v_8;
    v_8 = basic_elt(env, 1); // cdar
    {   LispObject fn = basic_elt(env, 2); // carx
    v_8 = (*qfn2(fn))(fn, v_9, v_8);
    }
    if (!car_legal(v_8)) v_8 = cdrerror(v_8); else
    v_8 = cdr(v_8);
    return onevalue(v_8);
}



// Code for talp_atfp

static LispObject CC_talp_atfp(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_17, v_18;
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
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_17 = v_2;
// end of prologue
    v_18 = v_17;
    v_18 = Lconsp(nil, v_18);
    env = stack[0];
    if (v_18 == nil) goto v_6;
    else goto v_7;
v_6:
    v_17 = nil;
    goto v_5;
v_7:
    {   LispObject fn = basic_elt(env, 2); // talp_op
    v_17 = (*qfn1(fn))(fn, v_17);
    }
    env = stack[0];
    v_18 = basic_elt(env, 1); // (neq equal)
    v_17 = Lmemq(nil, v_17, v_18);
    goto v_5;
    v_17 = nil;
v_5:
    return onevalue(v_17);
}



// Code for ibalp_simpat

static LispObject CC_ibalp_simpat(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_16;
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
    v_16 = stack[-1];
    if (!car_legal(v_16)) stack[-2] = carerror(v_16); else
    stack[-2] = car(v_16);
    v_16 = stack[-1];
    if (!car_legal(v_16)) v_16 = cdrerror(v_16); else
    v_16 = cdr(v_16);
    if (!car_legal(v_16)) v_16 = carerror(v_16); else
    v_16 = car(v_16);
    {   LispObject fn = basic_elt(env, 1); // ibalp_simpterm
    stack[0] = (*qfn1(fn))(fn, v_16);
    }
    env = stack[-3];
    v_16 = stack[-1];
    if (!car_legal(v_16)) v_16 = cdrerror(v_16); else
    v_16 = cdr(v_16);
    if (!car_legal(v_16)) v_16 = cdrerror(v_16); else
    v_16 = cdr(v_16);
    if (!car_legal(v_16)) v_16 = carerror(v_16); else
    v_16 = car(v_16);
    {   LispObject fn = basic_elt(env, 1); // ibalp_simpterm
    v_16 = (*qfn1(fn))(fn, v_16);
    }
    env = stack[-3];
    {
        LispObject v_20 = stack[-2];
        LispObject v_21 = stack[0];
        LispObject fn = basic_elt(env, 2); // ibalp_mk2
        return (*qfn3(fn))(fn, v_20, v_21, v_16);
    }
}



// Code for checktag

static LispObject CC_checktag(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_15, v_16;
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
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_15 = v_2;
// end of prologue
    v_16 = qvalue(basic_elt(env, 1)); // char
    if (equal(v_16, v_15)) goto v_9;
    v_16 = basic_elt(env, 2); // "Problem"
    v_15 = basic_elt(env, 3); // "problem"
    {   LispObject fn = basic_elt(env, 4); // errorml
    v_15 = (*qfn2(fn))(fn, v_16, v_15);
    }
    goto v_7;
v_9:
v_7:
    v_15 = nil;
    return onevalue(v_15);
}



// Code for subs2f1

static LispObject CC_subs2f1(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_430, v_431, v_432;
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
    real_push(nil, nil, nil, nil, nil);
    real_push(nil, nil, nil, nil, nil);
    stack_popper stack_popper_var(11);
// copy arguments values to proper place
    stack[-8] = v_2;
// end of prologue
    v_430 = stack[-8];
    if (!consp(v_430)) goto v_10;
    else goto v_11;
v_10:
    v_430 = lisp_true;
    goto v_9;
v_11:
    v_430 = stack[-8];
    if (!car_legal(v_430)) v_430 = carerror(v_430); else
    v_430 = car(v_430);
    v_430 = (consp(v_430) ? nil : lisp_true);
    goto v_9;
    v_430 = nil;
v_9:
    if (v_430 == nil) goto v_7;
    v_430 = stack[-8];
    {
        LispObject fn = basic_elt(env, 10); // !*d2q
        return (*qfn1(fn))(fn, v_430);
    }
v_7:
    stack[-2] = nil;
v_32:
    v_430 = nil;
    stack[-4] = v_430;
    v_430 = stack[-8];
    if (!car_legal(v_430)) v_430 = carerror(v_430); else
    v_430 = car(v_430);
    if (!car_legal(v_430)) v_430 = carerror(v_430); else
    v_430 = car(v_430);
    if (!car_legal(v_430)) v_430 = carerror(v_430); else
    v_430 = car(v_430);
    stack[-9] = v_430;
    v_431 = nil;
    v_430 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_430 = cons(v_431, v_430);
    env = stack[-10];
    stack[-3] = v_430;
v_33:
    v_430 = stack[-8];
    if (v_430 == nil) goto v_58;
    else goto v_59;
v_58:
    v_430 = lisp_true;
    goto v_57;
v_59:
    v_431 = stack[-8];
    v_430 = stack[-9];
    {   LispObject fn = basic_elt(env, 11); // degr
    v_431 = (*qfn2(fn))(fn, v_431, v_430);
    }
    env = stack[-10];
    v_430 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_430 = (v_431 == v_430 ? lisp_true : nil);
    goto v_57;
    v_430 = nil;
v_57:
    if (v_430 == nil) goto v_55;
    goto v_34;
v_55:
    v_430 = stack[-8];
    if (!car_legal(v_430)) v_431 = carerror(v_430); else
    v_431 = car(v_430);
    v_430 = stack[-4];
    v_430 = cons(v_431, v_430);
    env = stack[-10];
    stack[-4] = v_430;
    v_430 = stack[-8];
    if (!car_legal(v_430)) v_430 = cdrerror(v_430); else
    v_430 = cdr(v_430);
    stack[-8] = v_430;
    goto v_33;
v_34:
    v_430 = qvalue(basic_elt(env, 1)); // powlis!*
    stack[-5] = v_430;
v_35:
    v_430 = stack[-5];
    if (v_430 == nil) goto v_78;
    else goto v_79;
v_78:
    goto v_36;
v_79:
    v_430 = stack[-4];
    if (!car_legal(v_430)) v_430 = carerror(v_430); else
    v_430 = car(v_430);
    if (!car_legal(v_430)) v_430 = carerror(v_430); else
    v_430 = car(v_430);
    if (!car_legal(v_430)) v_431 = carerror(v_430); else
    v_431 = car(v_430);
    v_430 = stack[-5];
    if (!car_legal(v_430)) v_430 = carerror(v_430); else
    v_430 = car(v_430);
    if (!car_legal(v_430)) v_430 = carerror(v_430); else
    v_430 = car(v_430);
    if (equal(v_431, v_430)) goto v_81;
    else goto v_82;
v_81:
    v_430 = stack[-4];
    if (!car_legal(v_430)) v_430 = carerror(v_430); else
    v_430 = car(v_430);
    if (!car_legal(v_430)) v_432 = carerror(v_430); else
    v_432 = car(v_430);
    v_430 = stack[-5];
    if (!car_legal(v_430)) v_430 = carerror(v_430); else
    v_430 = car(v_430);
    if (!car_legal(v_430)) v_430 = cdrerror(v_430); else
    v_430 = cdr(v_430);
    if (!car_legal(v_430)) v_431 = carerror(v_430); else
    v_431 = car(v_430);
    v_430 = stack[-5];
    if (!car_legal(v_430)) v_430 = carerror(v_430); else
    v_430 = car(v_430);
    if (!car_legal(v_430)) v_430 = cdrerror(v_430); else
    v_430 = cdr(v_430);
    if (!car_legal(v_430)) v_430 = cdrerror(v_430); else
    v_430 = cdr(v_430);
    if (!car_legal(v_430)) v_430 = cdrerror(v_430); else
    v_430 = cdr(v_430);
    if (!car_legal(v_430)) v_430 = carerror(v_430); else
    v_430 = car(v_430);
    {   LispObject fn = basic_elt(env, 12); // subs2p
    v_430 = (*qfn3(fn))(fn, v_432, v_431, v_430);
    }
    env = stack[-10];
    stack[-6] = v_430;
    goto v_42;
v_82:
    v_431 = stack[-9];
    v_430 = basic_elt(env, 2); // expt
    if (!consp(v_431)) goto v_109;
    v_431 = car(v_431);
    if (v_431 == v_430) goto v_108;
    else goto v_109;
v_108:
    v_430 = stack[-9];
    if (!car_legal(v_430)) v_430 = cdrerror(v_430); else
    v_430 = cdr(v_430);
    if (!car_legal(v_430)) v_431 = carerror(v_430); else
    v_431 = car(v_430);
    v_430 = stack[-5];
    if (!car_legal(v_430)) v_430 = carerror(v_430); else
    v_430 = car(v_430);
    if (!car_legal(v_430)) v_430 = carerror(v_430); else
    v_430 = car(v_430);
    if (equal(v_431, v_430)) goto v_115;
    else goto v_116;
v_115:
    v_430 = stack[-9];
    if (!car_legal(v_430)) v_430 = cdrerror(v_430); else
    v_430 = cdr(v_430);
    if (!car_legal(v_430)) v_430 = cdrerror(v_430); else
    v_430 = cdr(v_430);
    if (!car_legal(v_430)) v_431 = carerror(v_430); else
    v_431 = car(v_430);
    v_430 = basic_elt(env, 3); // quotient
    if (!consp(v_431)) goto v_126;
    v_431 = car(v_431);
    if (v_431 == v_430) goto v_125;
    else goto v_126;
v_125:
    v_430 = stack[-9];
    if (!car_legal(v_430)) v_430 = cdrerror(v_430); else
    v_430 = cdr(v_430);
    if (!car_legal(v_430)) v_430 = cdrerror(v_430); else
    v_430 = cdr(v_430);
    if (!car_legal(v_430)) v_430 = carerror(v_430); else
    v_430 = car(v_430);
    if (!car_legal(v_430)) v_430 = cdrerror(v_430); else
    v_430 = cdr(v_430);
    if (!car_legal(v_430)) v_431 = carerror(v_430); else
    v_431 = car(v_430);
    v_430 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_431 == v_430) goto v_135;
    else goto v_136;
v_135:
    v_430 = stack[-9];
    if (!car_legal(v_430)) v_430 = cdrerror(v_430); else
    v_430 = cdr(v_430);
    if (!car_legal(v_430)) v_430 = cdrerror(v_430); else
    v_430 = cdr(v_430);
    if (!car_legal(v_430)) v_430 = carerror(v_430); else
    v_430 = car(v_430);
    if (!car_legal(v_430)) v_430 = cdrerror(v_430); else
    v_430 = cdr(v_430);
    if (!car_legal(v_430)) v_430 = cdrerror(v_430); else
    v_430 = cdr(v_430);
    if (!car_legal(v_430)) v_430 = carerror(v_430); else
    v_430 = car(v_430);
    v_430 = (is_number(v_430) ? lisp_true : nil);
    goto v_134;
v_136:
    v_430 = nil;
    goto v_134;
    v_430 = nil;
v_134:
    goto v_124;
v_126:
    v_430 = nil;
    goto v_124;
    v_430 = nil;
v_124:
    goto v_114;
v_116:
    v_430 = nil;
    goto v_114;
    v_430 = nil;
v_114:
    goto v_107;
v_109:
    v_430 = nil;
    goto v_107;
    v_430 = nil;
v_107:
    if (v_430 == nil) goto v_105;
    v_430 = stack[-4];
    if (!car_legal(v_430)) v_430 = carerror(v_430); else
    v_430 = car(v_430);
    if (!car_legal(v_430)) v_430 = carerror(v_430); else
    v_430 = car(v_430);
    if (!car_legal(v_430)) v_431 = cdrerror(v_430); else
    v_431 = cdr(v_430);
    v_430 = stack[-9];
    if (!car_legal(v_430)) v_430 = cdrerror(v_430); else
    v_430 = cdr(v_430);
    if (!car_legal(v_430)) v_430 = cdrerror(v_430); else
    v_430 = cdr(v_430);
    if (!car_legal(v_430)) v_430 = carerror(v_430); else
    v_430 = car(v_430);
    if (!car_legal(v_430)) v_430 = cdrerror(v_430); else
    v_430 = cdr(v_430);
    if (!car_legal(v_430)) v_430 = cdrerror(v_430); else
    v_430 = cdr(v_430);
    if (!car_legal(v_430)) v_430 = carerror(v_430); else
    v_430 = car(v_430);
    v_430 = Ldivide_2(nil, v_431, v_430);
    env = stack[-10];
    stack[-7] = v_430;
    v_430 = stack[-7];
    if (!car_legal(v_430)) v_431 = carerror(v_430); else
    v_431 = car(v_430);
    v_430 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_431 == v_430) goto v_179;
    v_430 = stack[-9];
    if (!car_legal(v_430)) v_430 = cdrerror(v_430); else
    v_430 = cdr(v_430);
    if (!car_legal(v_430)) v_430 = carerror(v_430); else
    v_430 = car(v_430);
    {   LispObject fn = basic_elt(env, 13); // simp
    v_431 = (*qfn1(fn))(fn, v_430);
    }
    env = stack[-10];
    v_430 = stack[-7];
    if (!car_legal(v_430)) v_430 = carerror(v_430); else
    v_430 = car(v_430);
    {   LispObject fn = basic_elt(env, 14); // exptsq
    v_430 = (*qfn2(fn))(fn, v_431, v_430);
    }
    env = stack[-10];
    stack[-6] = v_430;
    goto v_177;
v_179:
    v_431 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_430 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_430 = cons(v_431, v_430);
    env = stack[-10];
    stack[-6] = v_430;
    goto v_177;
v_177:
    v_430 = stack[-7];
    if (!car_legal(v_430)) v_431 = cdrerror(v_430); else
    v_431 = cdr(v_430);
    v_430 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_431 == v_430) goto v_198;
// Binding alglist!*
// FLUIDBIND: reloadenv=10 litvec-offset=4 saveloc=1
{   bind_fluid_stack bind_fluid_var(-10, 4, -1);
    setvalue(basic_elt(env, 4), nil); // alglist!*
// Binding dmode!*
// FLUIDBIND: reloadenv=10 litvec-offset=5 saveloc=0
{   bind_fluid_stack bind_fluid_var(-10, 5, 0);
    setvalue(basic_elt(env, 5), nil); // dmode!*
    v_430 = nil;
    v_430 = ncons(v_430);
    env = stack[-10];
    setvalue(basic_elt(env, 4), v_430); // alglist!*
    v_430 = stack[-7];
    if (!car_legal(v_430)) v_431 = cdrerror(v_430); else
    v_431 = cdr(v_430);
    v_430 = stack[-9];
    if (!car_legal(v_430)) v_430 = cdrerror(v_430); else
    v_430 = cdr(v_430);
    if (!car_legal(v_430)) v_430 = cdrerror(v_430); else
    v_430 = cdr(v_430);
    if (!car_legal(v_430)) v_430 = carerror(v_430); else
    v_430 = car(v_430);
    if (!car_legal(v_430)) v_430 = cdrerror(v_430); else
    v_430 = cdr(v_430);
    if (!car_legal(v_430)) v_430 = cdrerror(v_430); else
    v_430 = cdr(v_430);
    if (!car_legal(v_430)) v_430 = carerror(v_430); else
    v_430 = car(v_430);
    v_430 = cons(v_431, v_430);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 15); // cancel
    v_430 = (*qfn1(fn))(fn, v_430);
    }
    env = stack[-10];
    stack[-7] = v_430;
    ;}  // end of a binding scope
    ;}  // end of a binding scope
    v_430 = stack[-9];
    if (!car_legal(v_430)) v_430 = cdrerror(v_430); else
    v_430 = cdr(v_430);
    if (!car_legal(v_430)) v_431 = carerror(v_430); else
    v_431 = car(v_430);
    v_430 = stack[-7];
    if (!car_legal(v_430)) v_430 = carerror(v_430); else
    v_430 = car(v_430);
    v_432 = cons(v_431, v_430);
    env = stack[-10];
    v_430 = stack[-5];
    if (!car_legal(v_430)) v_430 = carerror(v_430); else
    v_430 = car(v_430);
    if (!car_legal(v_430)) v_430 = cdrerror(v_430); else
    v_430 = cdr(v_430);
    if (!car_legal(v_430)) v_431 = carerror(v_430); else
    v_431 = car(v_430);
    v_430 = stack[-5];
    if (!car_legal(v_430)) v_430 = carerror(v_430); else
    v_430 = car(v_430);
    if (!car_legal(v_430)) v_430 = cdrerror(v_430); else
    v_430 = cdr(v_430);
    if (!car_legal(v_430)) v_430 = cdrerror(v_430); else
    v_430 = cdr(v_430);
    if (!car_legal(v_430)) v_430 = cdrerror(v_430); else
    v_430 = cdr(v_430);
    if (!car_legal(v_430)) v_430 = carerror(v_430); else
    v_430 = car(v_430);
    {   LispObject fn = basic_elt(env, 12); // subs2p
    v_431 = (*qfn3(fn))(fn, v_432, v_431, v_430);
    }
    env = stack[-10];
    v_430 = stack[-7];
    if (!car_legal(v_430)) v_430 = cdrerror(v_430); else
    v_430 = cdr(v_430);
    {   LispObject fn = basic_elt(env, 16); // raddsq
    v_431 = (*qfn2(fn))(fn, v_431, v_430);
    }
    env = stack[-10];
    v_430 = stack[-6];
    {   LispObject fn = basic_elt(env, 17); // multsq
    v_430 = (*qfn2(fn))(fn, v_431, v_430);
    }
    env = stack[-10];
    stack[-6] = v_430;
    goto v_196;
v_198:
v_196:
    goto v_42;
v_105:
    v_430 = stack[-5];
    if (!car_legal(v_430)) v_430 = cdrerror(v_430); else
    v_430 = cdr(v_430);
    stack[-5] = v_430;
    goto v_35;
v_36:
    v_430 = qvalue(basic_elt(env, 6)); // powlis1!*
    stack[-5] = v_430;
v_37:
    v_430 = stack[-5];
    if (v_430 == nil) goto v_250;
    else goto v_251;
v_250:
    goto v_38;
v_251:
    v_430 = stack[-4];
    if (!car_legal(v_430)) v_430 = carerror(v_430); else
    v_430 = car(v_430);
    if (!car_legal(v_430)) stack[-6] = carerror(v_430); else
    stack[-6] = car(v_430);
    v_430 = stack[-5];
    if (!car_legal(v_430)) v_430 = carerror(v_430); else
    v_430 = car(v_430);
    if (!car_legal(v_430)) stack[-1] = carerror(v_430); else
    stack[-1] = car(v_430);
    v_430 = stack[-5];
    if (!car_legal(v_430)) v_430 = carerror(v_430); else
    v_430 = car(v_430);
    if (!car_legal(v_430)) v_430 = cdrerror(v_430); else
    v_430 = cdr(v_430);
    if (!car_legal(v_430)) v_430 = cdrerror(v_430); else
    v_430 = cdr(v_430);
    if (!car_legal(v_430)) stack[0] = carerror(v_430); else
    stack[0] = car(v_430);
    v_430 = stack[-5];
    if (!car_legal(v_430)) v_430 = carerror(v_430); else
    v_430 = car(v_430);
    if (!car_legal(v_430)) v_430 = cdrerror(v_430); else
    v_430 = cdr(v_430);
    if (!car_legal(v_430)) v_430 = carerror(v_430); else
    v_430 = car(v_430);
    if (!car_legal(v_430)) v_431 = carerror(v_430); else
    v_431 = car(v_430);
    v_430 = stack[-5];
    if (!car_legal(v_430)) v_430 = carerror(v_430); else
    v_430 = car(v_430);
    if (!car_legal(v_430)) v_430 = cdrerror(v_430); else
    v_430 = cdr(v_430);
    if (!car_legal(v_430)) v_430 = carerror(v_430); else
    v_430 = car(v_430);
    if (!car_legal(v_430)) v_430 = cdrerror(v_430); else
    v_430 = cdr(v_430);
    v_430 = list2(v_431, v_430);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 18); // mtchp
    v_430 = (*qfn4up(fn))(fn, stack[-6], stack[-1], stack[0], v_430);
    }
    env = stack[-10];
    stack[-6] = v_430;
    if (v_430 == nil) goto v_254;
    goto v_42;
v_254:
    v_430 = stack[-5];
    if (!car_legal(v_430)) v_430 = cdrerror(v_430); else
    v_430 = cdr(v_430);
    stack[-5] = v_430;
    goto v_37;
v_38:
    v_431 = stack[-9];
    v_430 = basic_elt(env, 2); // expt
    if (!consp(v_431)) goto v_287;
    v_431 = car(v_431);
    if (v_431 == v_430) goto v_286;
    else goto v_287;
v_286:
    v_430 = qvalue(basic_elt(env, 7)); // !*structure
    v_430 = (v_430 == nil ? lisp_true : nil);
    goto v_285;
v_287:
    v_430 = nil;
    goto v_285;
    v_430 = nil;
v_285:
    if (v_430 == nil) goto v_283;
    goto v_43;
v_283:
    v_430 = stack[-4];
    if (!car_legal(v_430)) v_430 = carerror(v_430); else
    v_430 = car(v_430);
    if (!car_legal(v_430)) v_431 = carerror(v_430); else
    v_431 = car(v_430);
    v_430 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_430 = cons(v_431, v_430);
    env = stack[-10];
    v_431 = ncons(v_430);
    env = stack[-10];
    v_430 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[0] = cons(v_431, v_430);
    env = stack[-10];
    v_430 = stack[-4];
    if (!car_legal(v_430)) v_430 = carerror(v_430); else
    v_430 = car(v_430);
    if (!car_legal(v_430)) v_430 = cdrerror(v_430); else
    v_430 = cdr(v_430);
    {   LispObject fn = basic_elt(env, 0); // subs2f1
    v_430 = (*qfn1(fn))(fn, v_430);
    }
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 17); // multsq
    v_431 = (*qfn2(fn))(fn, stack[0], v_430);
    }
    env = stack[-10];
    v_430 = stack[-3];
    {   LispObject fn = basic_elt(env, 19); // addsq
    v_430 = (*qfn2(fn))(fn, v_431, v_430);
    }
    env = stack[-10];
    stack[-3] = v_430;
v_39:
    v_430 = stack[-4];
    if (!car_legal(v_430)) v_430 = cdrerror(v_430); else
    v_430 = cdr(v_430);
    stack[-4] = v_430;
    v_430 = stack[-4];
    if (v_430 == nil) goto v_316;
    goto v_34;
v_316:
v_40:
    v_430 = stack[-8];
    if (!consp(v_430)) goto v_324;
    else goto v_325;
v_324:
    v_430 = lisp_true;
    goto v_323;
v_325:
    v_430 = stack[-8];
    if (!car_legal(v_430)) v_430 = carerror(v_430); else
    v_430 = car(v_430);
    v_430 = (consp(v_430) ? nil : lisp_true);
    goto v_323;
    v_430 = nil;
v_323:
    if (v_430 == nil) goto v_321;
    v_430 = stack[-8];
    {   LispObject fn = basic_elt(env, 10); // !*d2q
    v_430 = (*qfn1(fn))(fn, v_430);
    }
    env = stack[-10];
    stack[-4] = v_430;
    goto v_41;
v_321:
    v_431 = stack[-3];
    v_430 = stack[-2];
    v_430 = cons(v_431, v_430);
    env = stack[-10];
    stack[-2] = v_430;
    goto v_32;
v_41:
    v_430 = qvalue(basic_elt(env, 8)); // !*exp
    if (v_430 == nil) goto v_340;
    else goto v_341;
v_340:
    v_430 = stack[-4];
    if (!car_legal(v_430)) v_430 = carerror(v_430); else
    v_430 = car(v_430);
    {   LispObject fn = basic_elt(env, 20); // mkprod
    stack[0] = (*qfn1(fn))(fn, v_430);
    }
    env = stack[-10];
    v_430 = stack[-4];
    if (!car_legal(v_430)) v_430 = cdrerror(v_430); else
    v_430 = cdr(v_430);
    {   LispObject fn = basic_elt(env, 20); // mkprod
    v_430 = (*qfn1(fn))(fn, v_430);
    }
    env = stack[-10];
    v_430 = cons(stack[0], v_430);
    env = stack[-10];
    stack[-4] = v_430;
    goto v_339;
v_341:
v_339:
    v_431 = stack[-3];
    v_430 = stack[-4];
    {   LispObject fn = basic_elt(env, 19); // addsq
    v_430 = (*qfn2(fn))(fn, v_431, v_430);
    }
    env = stack[-10];
    stack[-4] = v_430;
    v_430 = stack[-2];
    if (v_430 == nil) goto v_356;
    v_430 = stack[-2];
    if (!car_legal(v_430)) v_430 = carerror(v_430); else
    v_430 = car(v_430);
    stack[-3] = v_430;
    v_430 = stack[-2];
    if (!car_legal(v_430)) v_430 = cdrerror(v_430); else
    v_430 = cdr(v_430);
    stack[-2] = v_430;
    goto v_41;
v_356:
    v_430 = stack[-4];
    goto v_31;
v_42:
    stack[0] = stack[-6];
    v_430 = stack[-4];
    if (!car_legal(v_430)) v_430 = carerror(v_430); else
    v_430 = car(v_430);
    if (!car_legal(v_430)) v_430 = cdrerror(v_430); else
    v_430 = cdr(v_430);
    {   LispObject fn = basic_elt(env, 0); // subs2f1
    v_430 = (*qfn1(fn))(fn, v_430);
    }
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 17); // multsq
    v_431 = (*qfn2(fn))(fn, stack[0], v_430);
    }
    env = stack[-10];
    v_430 = stack[-3];
    {   LispObject fn = basic_elt(env, 19); // addsq
    v_430 = (*qfn2(fn))(fn, v_431, v_430);
    }
    env = stack[-10];
    stack[-3] = v_430;
    goto v_39;
v_43:
    v_430 = stack[-4];
    if (!car_legal(v_430)) v_430 = carerror(v_430); else
    v_430 = car(v_430);
    if (!car_legal(v_430)) v_430 = carerror(v_430); else
    v_430 = car(v_430);
    if (!car_legal(v_430)) v_431 = cdrerror(v_430); else
    v_431 = cdr(v_430);
    v_430 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_431 == v_430) goto v_377;
    else goto v_378;
v_377:
    v_430 = stack[-9];
    if (!car_legal(v_430)) v_430 = cdrerror(v_430); else
    v_430 = cdr(v_430);
    if (!car_legal(v_430)) v_431 = carerror(v_430); else
    v_431 = car(v_430);
    v_430 = basic_elt(env, 2); // expt
    v_430 = Leqcar(nil, v_431, v_430);
    env = stack[-10];
    v_430 = (v_430 == nil ? lisp_true : nil);
    goto v_376;
v_378:
    v_430 = nil;
    goto v_376;
    v_430 = nil;
v_376:
    if (v_430 == nil) goto v_374;
    v_431 = stack[-9];
    v_430 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 21); // mksq
    v_430 = (*qfn2(fn))(fn, v_431, v_430);
    }
    env = stack[-10];
    stack[-6] = v_430;
    goto v_372;
v_374:
    v_430 = stack[-9];
    if (!car_legal(v_430)) v_430 = cdrerror(v_430); else
    v_430 = cdr(v_430);
    if (!car_legal(v_430)) stack[0] = carerror(v_430); else
    stack[0] = car(v_430);
    v_432 = basic_elt(env, 9); // times
    v_430 = stack[-9];
    if (!car_legal(v_430)) v_430 = cdrerror(v_430); else
    v_430 = cdr(v_430);
    if (!car_legal(v_430)) v_430 = cdrerror(v_430); else
    v_430 = cdr(v_430);
    if (!car_legal(v_430)) v_431 = carerror(v_430); else
    v_431 = car(v_430);
    v_430 = stack[-4];
    if (!car_legal(v_430)) v_430 = carerror(v_430); else
    v_430 = car(v_430);
    if (!car_legal(v_430)) v_430 = carerror(v_430); else
    v_430 = car(v_430);
    if (!car_legal(v_430)) v_430 = cdrerror(v_430); else
    v_430 = cdr(v_430);
    v_430 = list3(v_432, v_431, v_430);
    env = stack[-10];
    v_430 = list2(stack[0], v_430);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 22); // simpexpt
    v_430 = (*qfn1(fn))(fn, v_430);
    }
    env = stack[-10];
    stack[-6] = v_430;
    goto v_372;
v_372:
    stack[0] = stack[-6];
    v_430 = stack[-4];
    if (!car_legal(v_430)) v_430 = carerror(v_430); else
    v_430 = car(v_430);
    if (!car_legal(v_430)) v_430 = cdrerror(v_430); else
    v_430 = cdr(v_430);
    {   LispObject fn = basic_elt(env, 0); // subs2f1
    v_430 = (*qfn1(fn))(fn, v_430);
    }
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 17); // multsq
    v_431 = (*qfn2(fn))(fn, stack[0], v_430);
    }
    env = stack[-10];
    v_430 = stack[-3];
    {   LispObject fn = basic_elt(env, 19); // addsq
    v_430 = (*qfn2(fn))(fn, v_431, v_430);
    }
    env = stack[-10];
    stack[-3] = v_430;
    v_430 = stack[-4];
    if (!car_legal(v_430)) v_430 = cdrerror(v_430); else
    v_430 = cdr(v_430);
    stack[-4] = v_430;
    v_430 = stack[-4];
    if (v_430 == nil) goto v_426;
    goto v_43;
v_426:
    goto v_40;
    v_430 = nil;
v_31:
    goto v_5;
    v_430 = nil;
v_5:
    return onevalue(v_430);
}



// Code for bcsum

static LispObject CC_bcsum(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_27, v_28, v_29;
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    v_27 = qvalue(basic_elt(env, 1)); // !*grmod!*
    if (v_27 == nil) goto v_8;
    v_28 = stack[-1];
    v_27 = stack[0];
    v_27 = plus2(v_28, v_27);
    env = stack[-2];
    {
        LispObject fn = basic_elt(env, 3); // bcfi
        return (*qfn1(fn))(fn, v_27);
    }
v_8:
    v_29 = stack[-1];
    v_28 = stack[0];
    v_27 = basic_elt(env, 2); // plus2
    {   LispObject fn = basic_elt(env, 4); // bcint2op
    v_27 = (*qfn3(fn))(fn, v_29, v_28, v_27);
    }
    env = stack[-2];
    if (v_27 == nil) goto v_18;
    else goto v_17;
v_18:
    v_28 = stack[-1];
    v_27 = stack[0];
    {   LispObject fn = basic_elt(env, 5); // addsq
    v_27 = (*qfn2(fn))(fn, v_28, v_27);
    }
    env = stack[-2];
    {
        LispObject fn = basic_elt(env, 6); // bccheckz
        return (*qfn1(fn))(fn, v_27);
    }
v_17:
    goto v_6;
    v_27 = nil;
v_6:
    return onevalue(v_27);
}



// Code for vevmaptozero1

static LispObject CC_vevmaptozero1(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_21, v_22;
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    v_21 = v_3;
    stack[0] = v_2;
// end of prologue
v_7:
    v_22 = stack[0];
    if (v_22 == nil) goto v_10;
    else goto v_11;
v_10:
    goto v_6;
v_11:
    v_22 = stack[0];
    if (!car_legal(v_22)) v_22 = cdrerror(v_22); else
    v_22 = cdr(v_22);
    stack[0] = v_22;
    v_22 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_21 = cons(v_22, v_21);
    env = stack[-1];
    goto v_7;
    v_21 = nil;
v_6:
    return onevalue(v_21);
}



// Code for deg!*form

static LispObject CC_degHform(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_141, v_142, v_143;
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
v_1:
    v_141 = stack[0];
    if (!consp(v_141)) goto v_6;
    else goto v_7;
v_6:
    v_141 = stack[0];
    if (!symbolp(v_141)) v_141 = nil;
    else { v_141 = qfastgets(v_141);
           if (v_141 != nil) { v_141 = elt(v_141, 29); // fdegree
#ifdef RECORD_GET
             if (v_141 != SPID_NOPROP)
                record_get(elt(fastget_names, 29), 1);
             else record_get(elt(fastget_names, 29), 0),
                v_141 = nil; }
           else record_get(elt(fastget_names, 29), 0); }
#else
             if (v_141 == SPID_NOPROP) v_141 = nil; }}
#endif
    v_142 = v_141;
    v_141 = v_142;
    if (v_141 == nil) goto v_15;
    v_141 = v_142;
    if (!car_legal(v_141)) v_141 = carerror(v_141); else
    v_141 = car(v_141);
    goto v_13;
v_15:
    v_141 = nil;
    goto v_13;
    v_141 = nil;
v_13:
    goto v_5;
v_7:
    v_141 = stack[0];
    if (!car_legal(v_141)) v_141 = carerror(v_141); else
    v_141 = car(v_141);
    v_143 = v_141;
    v_141 = v_143;
    if (!symbolp(v_141)) v_141 = nil;
    else { v_141 = qfastgets(v_141);
           if (v_141 != nil) { v_141 = elt(v_141, 16); // indexvar
#ifdef RECORD_GET
             if (v_141 == SPID_NOPROP)
                record_get(elt(fastget_names, 16), 0),
                v_141 = nil;
             else record_get(elt(fastget_names, 16), 1),
                v_141 = lisp_true; }
           else record_get(elt(fastget_names, 16), 0); }
#else
             if (v_141 == SPID_NOPROP) v_141 = nil; else v_141 = lisp_true; }}
#endif
    if (v_141 == nil) goto v_30;
    v_141 = stack[0];
    if (!car_legal(v_141)) v_141 = cdrerror(v_141); else
    v_141 = cdr(v_141);
    v_142 = Llength(nil, v_141);
    v_141 = stack[0];
    if (!car_legal(v_141)) v_141 = carerror(v_141); else
    v_141 = car(v_141);
    if (!symbolp(v_141)) v_141 = nil;
    else { v_141 = qfastgets(v_141);
           if (v_141 != nil) { v_141 = elt(v_141, 25); // ifdegree
#ifdef RECORD_GET
             if (v_141 != SPID_NOPROP)
                record_get(elt(fastget_names, 25), 1);
             else record_get(elt(fastget_names, 25), 0),
                v_141 = nil; }
           else record_get(elt(fastget_names, 25), 0); }
#else
             if (v_141 == SPID_NOPROP) v_141 = nil; }}
#endif
    v_141 = Lassoc(nil, v_142, v_141);
    v_142 = v_141;
    v_141 = v_142;
    if (v_141 == nil) goto v_44;
    v_141 = v_142;
    if (!car_legal(v_141)) v_141 = cdrerror(v_141); else
    v_141 = cdr(v_141);
    goto v_42;
v_44:
    v_141 = nil;
    goto v_42;
    v_141 = nil;
v_42:
    goto v_28;
v_30:
    v_142 = v_143;
    v_141 = basic_elt(env, 1); // wedge
    if (v_142 == v_141) goto v_51;
    else goto v_52;
v_51:
    v_141 = stack[0];
    if (!car_legal(v_141)) v_141 = cdrerror(v_141); else
    v_141 = cdr(v_141);
    {
        LispObject fn = basic_elt(env, 11); // deg!*farg
        return (*qfn1(fn))(fn, v_141);
    }
v_52:
    v_142 = v_143;
    v_141 = basic_elt(env, 2); // d
    if (v_142 == v_141) goto v_58;
    else goto v_59;
v_58:
    stack[-1] = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_141 = stack[0];
    if (!car_legal(v_141)) v_141 = cdrerror(v_141); else
    v_141 = cdr(v_141);
    if (!car_legal(v_141)) v_141 = carerror(v_141); else
    v_141 = car(v_141);
    {   LispObject fn = basic_elt(env, 0); // deg!*form
    v_141 = (*qfn1(fn))(fn, v_141);
    }
    env = stack[-2];
    {
        LispObject v_146 = stack[-1];
        LispObject fn = basic_elt(env, 12); // addd
        return (*qfn2(fn))(fn, v_146, v_141);
    }
v_59:
    v_142 = v_143;
    v_141 = basic_elt(env, 3); // hodge
    if (v_142 == v_141) goto v_68;
    else goto v_69;
v_68:
    stack[-1] = qvalue(basic_elt(env, 4)); // dimex!*
    v_141 = stack[0];
    if (!car_legal(v_141)) v_141 = cdrerror(v_141); else
    v_141 = cdr(v_141);
    if (!car_legal(v_141)) v_141 = carerror(v_141); else
    v_141 = car(v_141);
    {   LispObject fn = basic_elt(env, 0); // deg!*form
    v_141 = (*qfn1(fn))(fn, v_141);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 13); // negf
    v_141 = (*qfn1(fn))(fn, v_141);
    }
    env = stack[-2];
    {
        LispObject v_147 = stack[-1];
        LispObject fn = basic_elt(env, 14); // addf
        return (*qfn2(fn))(fn, v_147, v_141);
    }
v_69:
    v_142 = v_143;
    v_141 = basic_elt(env, 5); // partdf
    if (v_142 == v_141) goto v_79;
    else goto v_80;
v_79:
    v_141 = stack[0];
    if (!car_legal(v_141)) v_141 = cdrerror(v_141); else
    v_141 = cdr(v_141);
    if (!car_legal(v_141)) v_141 = cdrerror(v_141); else
    v_141 = cdr(v_141);
    if (v_141 == nil) goto v_86;
    v_141 = nil;
    goto v_84;
v_86:
    v_141 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    goto v_84;
    v_141 = nil;
v_84:
    goto v_28;
v_80:
    v_142 = v_143;
    v_141 = basic_elt(env, 6); // liedf
    if (v_142 == v_141) goto v_94;
    else goto v_95;
v_94:
    v_141 = stack[0];
    if (!car_legal(v_141)) v_141 = cdrerror(v_141); else
    v_141 = cdr(v_141);
    if (!car_legal(v_141)) v_141 = cdrerror(v_141); else
    v_141 = cdr(v_141);
    if (!car_legal(v_141)) v_141 = carerror(v_141); else
    v_141 = car(v_141);
    stack[0] = v_141;
    goto v_1;
v_95:
    v_142 = v_143;
    v_141 = basic_elt(env, 7); // innerprod
    if (v_142 == v_141) goto v_103;
    else goto v_104;
v_103:
    stack[-1] = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    v_141 = stack[0];
    if (!car_legal(v_141)) v_141 = cdrerror(v_141); else
    v_141 = cdr(v_141);
    if (!car_legal(v_141)) v_141 = cdrerror(v_141); else
    v_141 = cdr(v_141);
    if (!car_legal(v_141)) v_141 = carerror(v_141); else
    v_141 = car(v_141);
    {   LispObject fn = basic_elt(env, 0); // deg!*form
    v_141 = (*qfn1(fn))(fn, v_141);
    }
    env = stack[-2];
    {
        LispObject v_148 = stack[-1];
        LispObject fn = basic_elt(env, 12); // addd
        return (*qfn2(fn))(fn, v_148, v_141);
    }
v_104:
    v_142 = v_143;
    v_141 = basic_elt(env, 8); // (plus minus difference quotient)
    v_141 = Lmemq(nil, v_142, v_141);
    if (v_141 == nil) goto v_115;
    v_141 = stack[0];
    if (!car_legal(v_141)) v_141 = cdrerror(v_141); else
    v_141 = cdr(v_141);
    if (!car_legal(v_141)) v_141 = carerror(v_141); else
    v_141 = car(v_141);
    stack[0] = v_141;
    goto v_1;
v_115:
    v_142 = v_143;
    v_141 = basic_elt(env, 9); // times
    if (v_142 == v_141) goto v_123;
    else goto v_124;
v_123:
    v_141 = stack[0];
    if (!car_legal(v_141)) v_141 = cdrerror(v_141); else
    v_141 = cdr(v_141);
    {
        LispObject fn = basic_elt(env, 11); // deg!*farg
        return (*qfn1(fn))(fn, v_141);
    }
v_124:
    v_142 = v_143;
    v_141 = basic_elt(env, 10); // !*sq
    if (v_142 == v_141) goto v_130;
    else goto v_131;
v_130:
    v_141 = stack[0];
    {   LispObject fn = basic_elt(env, 15); // simp!*
    v_141 = (*qfn1(fn))(fn, v_141);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 16); // prepsq
    v_141 = (*qfn1(fn))(fn, v_141);
    }
    env = stack[-2];
    stack[0] = v_141;
    goto v_1;
v_131:
    v_141 = nil;
    goto v_28;
    v_141 = nil;
v_28:
    goto v_5;
    v_141 = nil;
v_5:
    return onevalue(v_141);
}



// Code for physopsim!*

static LispObject CC_physopsimH(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_23, v_24;
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
    v_24 = stack[0];
    v_23 = basic_elt(env, 1); // !:dn!:
    if (!consp(v_24)) goto v_7;
    v_24 = car(v_24);
    if (v_24 == v_23) goto v_6;
    else goto v_7;
v_6:
    v_23 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // simp
    v_23 = (*qfn1(fn))(fn, v_23);
    }
    env = stack[-1];
    {
        LispObject fn = basic_elt(env, 3); // prepsq
        return (*qfn1(fn))(fn, v_23);
    }
v_7:
    v_23 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // !*physopp!*
    v_23 = (*qfn1(fn))(fn, v_23);
    }
    env = stack[-1];
    if (v_23 == nil) goto v_15;
    v_23 = stack[0];
    {
        LispObject fn = basic_elt(env, 5); // physopsm!*
        return (*qfn1(fn))(fn, v_23);
    }
v_15:
    v_23 = stack[0];
    goto v_5;
    v_23 = nil;
v_5:
    return onevalue(v_23);
}



// Code for rread

static LispObject CC_rread(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_6;
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
    stack_popper stack_popper_var(1);
// end of prologue
    v_6 = basic_elt(env, 1); // " '"
    {   LispObject fn = basic_elt(env, 2); // prin2x
    v_6 = (*qfn1(fn))(fn, v_6);
    }
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 3); // rread1
        return (*qfn0(fn))(fn);
    }
}



// Code for reval2

static LispObject CC_reval2(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_35, v_36;
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_3;
    v_36 = v_2;
// end of prologue
    v_35 = stack[0];
    if (v_35 == nil) goto v_9;
    else goto v_7;
v_9:
    v_35 = qvalue(basic_elt(env, 1)); // !*combineexpt
    if (v_35 == nil) goto v_14;
    else goto v_15;
v_14:
    v_35 = lisp_true;
    goto v_13;
v_15:
    v_35 = qvalue(basic_elt(env, 2)); // dmode!*
    goto v_13;
    v_35 = nil;
v_13:
    if (v_35 == nil) goto v_11;
    else goto v_7;
v_11:
    goto v_8;
v_7:
    v_35 = v_36;
    {   LispObject fn = basic_elt(env, 4); // simp!*
    v_36 = (*qfn1(fn))(fn, v_35);
    }
    env = stack[-2];
    v_35 = stack[0];
    {
        LispObject fn = basic_elt(env, 5); // !*q2a1
        return (*qfn2(fn))(fn, v_36, v_35);
    }
v_8:
    v_35 = nil;
// Binding !*mcd
// FLUIDBIND: reloadenv=2 litvec-offset=3 saveloc=1
{   bind_fluid_stack bind_fluid_var(-2, 3, -1);
    setvalue(basic_elt(env, 3), v_35); // !*mcd
    v_35 = v_36;
    {   LispObject fn = basic_elt(env, 4); // simp!*
    v_36 = (*qfn1(fn))(fn, v_35);
    }
    env = stack[-2];
    ;}  // end of a binding scope
    v_35 = stack[0];
    {
        LispObject fn = basic_elt(env, 5); // !*q2a1
        return (*qfn2(fn))(fn, v_36, v_35);
    }
    v_35 = nil;
    return onevalue(v_35);
}



// Code for red!-weight1

static LispObject CC_redKweight1(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_42, v_43;
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
    stack[-2] = nil;
v_9:
    v_42 = stack[-1];
    if (v_42 == nil) goto v_14;
    else goto v_15;
v_14:
    goto v_10;
v_15:
    v_42 = stack[-1];
    if (!car_legal(v_42)) v_42 = carerror(v_42); else
    v_42 = car(v_42);
    v_43 = Labsval(nil, v_42);
    env = stack[-3];
    v_42 = stack[0];
    if (!car_legal(v_42)) v_42 = carerror(v_42); else
    v_42 = car(v_42);
    v_43 = times2(v_43, v_42);
    env = stack[-3];
    v_42 = stack[-2];
    v_42 = cons(v_43, v_42);
    env = stack[-3];
    stack[-2] = v_42;
    v_42 = stack[-1];
    if (!car_legal(v_42)) v_42 = cdrerror(v_42); else
    v_42 = cdr(v_42);
    stack[-1] = v_42;
    v_42 = stack[0];
    if (!car_legal(v_42)) v_42 = cdrerror(v_42); else
    v_42 = cdr(v_42);
    stack[0] = v_42;
    goto v_9;
v_10:
    v_42 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_43 = v_42;
v_11:
    v_42 = stack[-2];
    if (v_42 == nil) goto v_32;
    else goto v_33;
v_32:
    v_42 = v_43;
    goto v_8;
v_33:
    v_42 = stack[-2];
    v_42 = car(v_42);
    v_42 = plus2(v_42, v_43);
    env = stack[-3];
    v_43 = v_42;
    v_42 = stack[-2];
    v_42 = cdr(v_42);
    stack[-2] = v_42;
    goto v_11;
v_8:
    return onevalue(v_42);
}



// Code for bas_make1

static LispObject CC_bas_make1(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_15, v_16;
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
    real_push(nil, nil, nil, nil, nil);
    stack_popper stack_popper_var(6);
// copy arguments values to proper place
    stack[-2] = v_4;
    stack[-3] = v_3;
    v_15 = v_2;
// end of prologue
    stack[-4] = v_15;
    stack[-1] = stack[-3];
    v_15 = stack[-3];
    stack[0] = Llength(nil, v_15);
    env = stack[-5];
    v_15 = stack[-3];
    {   LispObject fn = basic_elt(env, 1); // dp_ecart
    v_16 = (*qfn1(fn))(fn, v_15);
    }
    env = stack[-5];
    v_15 = stack[-2];
    v_15 = list2(v_16, v_15);
    {
        LispObject v_22 = stack[-4];
        LispObject v_23 = stack[-1];
        LispObject v_24 = stack[0];
        return list3star(v_22, v_23, v_24, v_15);
    }
}



// Code for hevenp

static LispObject CC_hevenp(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_16, v_17;
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
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_17 = v_2;
// end of prologue
    v_16 = v_17;
    if (v_16 == nil) goto v_6;
    else goto v_7;
v_6:
    v_16 = lisp_true;
    goto v_5;
v_7:
    v_16 = v_17;
    if (!car_legal(v_16)) v_16 = cdrerror(v_16); else
    v_16 = cdr(v_16);
    {   LispObject fn = basic_elt(env, 0); // hevenp
    v_16 = (*qfn1(fn))(fn, v_16);
    }
    v_16 = (v_16 == nil ? lisp_true : nil);
    goto v_5;
    v_16 = nil;
v_5:
    return onevalue(v_16);
}



// Code for yyreadch

static LispObject CC_yyreadch(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_42, v_43, v_44;
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
    stack_popper stack_popper_var(1);
// end of prologue
    v_42 = qvalue(basic_elt(env, 1)); // lex_peek_char
    if (v_42 == nil) goto v_6;
    v_42 = qvalue(basic_elt(env, 1)); // lex_peek_char
    setvalue(basic_elt(env, 2), v_42); // lex_char
    v_42 = nil;
    setvalue(basic_elt(env, 1), v_42); // lex_peek_char
    v_42 = qvalue(basic_elt(env, 2)); // lex_char
    goto v_4;
v_6:
    v_42 = Lreadch(nil);
    env = stack[0];
    setvalue(basic_elt(env, 2), v_42); // lex_char
    v_43 = qvalue(basic_elt(env, 2)); // lex_char
    v_42 = qvalue(basic_elt(env, 3)); // !$eol!$
    if (equal(v_43, v_42)) goto v_16;
    else goto v_17;
v_16:
    v_42 = qvalue(basic_elt(env, 4)); // which_line
    v_42 = add1(v_42);
    env = stack[0];
    setvalue(basic_elt(env, 4), v_42); // which_line
    goto v_15;
v_17:
v_15:
    v_43 = qvalue(basic_elt(env, 2)); // lex_char
    v_42 = qvalue(basic_elt(env, 5)); // !$eof!$
    if (equal(v_43, v_42)) goto v_25;
    v_42 = qvalue(basic_elt(env, 6)); // last64p
    v_42 = add1(v_42);
    env = stack[0];
    setvalue(basic_elt(env, 6), v_42); // last64p
    v_43 = qvalue(basic_elt(env, 6)); // last64p
    v_42 = static_cast<LispObject>(1024)+TAG_FIXNUM; // 64
    if (v_43 == v_42) goto v_32;
    else goto v_33;
v_32:
    v_42 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    setvalue(basic_elt(env, 6), v_42); // last64p
    goto v_31;
v_33:
v_31:
    v_44 = qvalue(basic_elt(env, 7)); // last64
    v_43 = qvalue(basic_elt(env, 6)); // last64p
    v_42 = qvalue(basic_elt(env, 2)); // lex_char
    v_42 = Lputv(nil, v_44, v_43, v_42);
    env = stack[0];
    goto v_23;
v_25:
v_23:
    v_42 = qvalue(basic_elt(env, 2)); // lex_char
    goto v_4;
    v_42 = nil;
v_4:
    return onevalue(v_42);
}



// Code for talp_candp

static LispObject CC_talp_candp(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_73;
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
    v_73 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // talp_arg2l
    v_73 = (*qfn1(fn))(fn, v_73);
    }
    env = stack[-2];
    stack[-1] = v_73;
    v_73 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // talp_arg2r
    v_73 = (*qfn1(fn))(fn, v_73);
    }
    env = stack[-2];
    stack[0] = v_73;
    v_73 = stack[-1];
    if (!consp(v_73)) goto v_18;
    else goto v_19;
v_18:
    v_73 = stack[0];
    v_73 = (consp(v_73) ? nil : lisp_true);
    goto v_17;
v_19:
    v_73 = nil;
    goto v_17;
    v_73 = nil;
v_17:
    if (v_73 == nil) goto v_15;
    v_73 = nil;
    goto v_7;
v_15:
    v_73 = stack[-1];
    if (!consp(v_73)) goto v_29;
    else goto v_30;
v_29:
    v_73 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // talp_invp
    v_73 = (*qfn1(fn))(fn, v_73);
    }
    env = stack[-2];
    if (v_73 == nil) goto v_34;
    else goto v_35;
v_34:
    v_73 = nil;
    goto v_7;
v_35:
    v_73 = stack[0];
    {   LispObject fn = basic_elt(env, 5); // talp_invarg
    v_73 = (*qfn1(fn))(fn, v_73);
    }
    env = stack[-2];
    if (equal(stack[-1], v_73)) goto v_44;
    v_73 = nil;
    goto v_7;
v_44:
    goto v_33;
v_33:
    goto v_28;
v_30:
    v_73 = stack[0];
    if (!consp(v_73)) goto v_49;
    else goto v_50;
v_49:
    v_73 = stack[-1];
    {   LispObject fn = basic_elt(env, 4); // talp_invp
    v_73 = (*qfn1(fn))(fn, v_73);
    }
    env = stack[-2];
    if (v_73 == nil) goto v_54;
    else goto v_55;
v_54:
    v_73 = nil;
    goto v_7;
v_55:
    v_73 = stack[-1];
    {   LispObject fn = basic_elt(env, 5); // talp_invarg
    v_73 = (*qfn1(fn))(fn, v_73);
    }
    env = stack[-2];
    if (equal(stack[0], v_73)) goto v_64;
    v_73 = nil;
    goto v_7;
v_64:
    goto v_53;
v_53:
    goto v_28;
v_50:
    v_73 = nil;
    goto v_7;
v_28:
    v_73 = basic_elt(env, 1); // true
v_7:
    return onevalue(v_73);
}



// Code for ibalp_litp

static LispObject CC_ibalp_litp(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_31, v_32;
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
    v_31 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // ibalp_atomp
    v_31 = (*qfn1(fn))(fn, v_31);
    }
    env = stack[-1];
    if (v_31 == nil) goto v_6;
    else goto v_5;
v_6:
    v_31 = stack[0];
    if (!consp(v_31)) goto v_15;
    else goto v_16;
v_15:
    v_31 = stack[0];
    v_32 = v_31;
    goto v_14;
v_16:
    v_31 = stack[0];
    if (!car_legal(v_31)) v_31 = carerror(v_31); else
    v_31 = car(v_31);
    v_32 = v_31;
    goto v_14;
    v_32 = nil;
v_14:
    v_31 = basic_elt(env, 1); // not
    if (v_32 == v_31) goto v_11;
    else goto v_12;
v_11:
    v_31 = stack[0];
    if (!car_legal(v_31)) v_31 = cdrerror(v_31); else
    v_31 = cdr(v_31);
    if (!car_legal(v_31)) v_31 = carerror(v_31); else
    v_31 = car(v_31);
    {
        LispObject fn = basic_elt(env, 2); // ibalp_atomp
        return (*qfn1(fn))(fn, v_31);
    }
v_12:
    v_31 = nil;
    goto v_10;
    v_31 = nil;
v_10:
v_5:
    return onevalue(v_31);
}



// Code for rationalizei

static LispObject CC_rationalizei(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_125, v_126;
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
    v_125 = stack[-1];
    if (!car_legal(v_125)) v_125 = cdrerror(v_125); else
    v_125 = cdr(v_125);
    stack[-2] = v_125;
    v_126 = v_125;
    v_125 = v_126;
    if (!consp(v_125)) goto v_18;
    else goto v_19;
v_18:
    v_125 = lisp_true;
    goto v_17;
v_19:
    v_125 = v_126;
    if (!car_legal(v_125)) v_125 = carerror(v_125); else
    v_125 = car(v_125);
    v_125 = (consp(v_125) ? nil : lisp_true);
    goto v_17;
    v_125 = nil;
v_17:
    if (v_125 == nil) goto v_12;
    else goto v_10;
v_12:
    v_126 = basic_elt(env, 1); // i
    v_125 = stack[-2];
    v_125 = Lsmemq(nil, v_126, v_125);
    env = stack[-3];
    if (v_125 == nil) goto v_10;
    goto v_11;
v_10:
    v_125 = stack[-1];
    goto v_7;
v_11:
    v_126 = basic_elt(env, 1); // i
    v_125 = qvalue(basic_elt(env, 2)); // kord!*
    v_125 = cons(v_126, v_125);
    env = stack[-3];
// Binding kord!*
// FLUIDBIND: reloadenv=3 litvec-offset=2 saveloc=0
{   bind_fluid_stack bind_fluid_var(-3, 2, 0);
    setvalue(basic_elt(env, 2), v_125); // kord!*
    v_125 = stack[-1];
    {   LispObject fn = basic_elt(env, 4); // reordsq
    v_125 = (*qfn1(fn))(fn, v_125);
    }
    env = stack[-3];
    stack[-2] = v_125;
    ;}  // end of a binding scope
    v_125 = stack[-2];
    if (!car_legal(v_125)) v_125 = cdrerror(v_125); else
    v_125 = cdr(v_125);
    stack[0] = v_125;
    if (!car_legal(v_125)) v_125 = carerror(v_125); else
    v_125 = car(v_125);
    if (!car_legal(v_125)) v_126 = carerror(v_125); else
    v_126 = car(v_125);
    v_125 = basic_elt(env, 3); // (i . 1)
    if (equal(v_126, v_125)) goto v_46;
    else goto v_47;
v_46:
    v_125 = stack[0];
    if (!car_legal(v_125)) v_125 = cdrerror(v_125); else
    v_125 = cdr(v_125);
    v_125 = (v_125 == nil ? lisp_true : nil);
    goto v_45;
v_47:
    v_125 = nil;
    goto v_45;
    v_125 = nil;
v_45:
    if (v_125 == nil) goto v_43;
    v_125 = stack[-2];
    if (!car_legal(v_125)) v_125 = carerror(v_125); else
    v_125 = car(v_125);
    if (!consp(v_125)) goto v_70;
    else goto v_71;
v_70:
    v_125 = lisp_true;
    goto v_69;
v_71:
    v_125 = stack[-2];
    if (!car_legal(v_125)) v_125 = carerror(v_125); else
    v_125 = car(v_125);
    if (!car_legal(v_125)) v_125 = carerror(v_125); else
    v_125 = car(v_125);
    v_125 = (consp(v_125) ? nil : lisp_true);
    goto v_69;
    v_125 = nil;
v_69:
    if (v_125 == nil) goto v_66;
    else goto v_67;
v_66:
    v_125 = stack[-2];
    if (!car_legal(v_125)) v_125 = carerror(v_125); else
    v_125 = car(v_125);
    if (!car_legal(v_125)) v_125 = carerror(v_125); else
    v_125 = car(v_125);
    if (!car_legal(v_125)) v_125 = carerror(v_125); else
    v_125 = car(v_125);
    if (!car_legal(v_125)) v_126 = carerror(v_125); else
    v_126 = car(v_125);
    v_125 = basic_elt(env, 1); // i
    v_125 = (v_126 == v_125 ? lisp_true : nil);
    goto v_65;
v_67:
    v_125 = nil;
    goto v_65;
    v_125 = nil;
v_65:
    if (v_125 == nil) goto v_63;
    v_125 = stack[-2];
    if (!car_legal(v_125)) v_125 = carerror(v_125); else
    v_125 = car(v_125);
    if (!car_legal(v_125)) v_125 = carerror(v_125); else
    v_125 = car(v_125);
    if (!car_legal(v_125)) stack[-1] = cdrerror(v_125); else
    stack[-1] = cdr(v_125);
    v_126 = basic_elt(env, 1); // i
    v_125 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 5); // to
    v_126 = (*qfn2(fn))(fn, v_126, v_125);
    }
    env = stack[-3];
    v_125 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_125 = cons(v_126, v_125);
    env = stack[-3];
    v_125 = ncons(v_125);
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 6); // negf
    v_126 = (*qfn1(fn))(fn, v_125);
    }
    env = stack[-3];
    v_125 = stack[-2];
    if (!car_legal(v_125)) v_125 = carerror(v_125); else
    v_125 = car(v_125);
    if (!car_legal(v_125)) v_125 = cdrerror(v_125); else
    v_125 = cdr(v_125);
    {   LispObject fn = basic_elt(env, 7); // multf
    v_125 = (*qfn2(fn))(fn, v_126, v_125);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 8); // addf
    v_125 = (*qfn2(fn))(fn, stack[-1], v_125);
    }
    v_126 = v_125;
    goto v_61;
v_63:
    v_126 = basic_elt(env, 1); // i
    v_125 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 5); // to
    v_126 = (*qfn2(fn))(fn, v_126, v_125);
    }
    env = stack[-3];
    v_125 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_125 = cons(v_126, v_125);
    env = stack[-3];
    v_126 = ncons(v_125);
    env = stack[-3];
    v_125 = stack[-2];
    if (!car_legal(v_125)) v_125 = carerror(v_125); else
    v_125 = car(v_125);
    {   LispObject fn = basic_elt(env, 7); // multf
    v_125 = (*qfn2(fn))(fn, v_126, v_125);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 6); // negf
    v_125 = (*qfn1(fn))(fn, v_125);
    }
    v_126 = v_125;
    goto v_61;
    v_126 = nil;
v_61:
    v_125 = stack[0];
    if (!car_legal(v_125)) v_125 = carerror(v_125); else
    v_125 = car(v_125);
    if (!car_legal(v_125)) v_125 = cdrerror(v_125); else
    v_125 = cdr(v_125);
    return cons(v_126, v_125);
v_43:
    v_125 = stack[-1];
    goto v_41;
    v_125 = nil;
v_41:
v_7:
    return onevalue(v_125);
}



// Code for genp

static LispObject CC_genp(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_20, v_21, v_22;
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
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_21 = v_2;
// end of prologue
    v_20 = v_21;
    if (!consp(v_20)) goto v_6;
    else goto v_7;
v_6:
    v_22 = v_21;
    v_20 = basic_elt(env, 1); // gen
    v_20 = get(v_22, v_20);
    env = stack[0];
    if (v_20 == nil) goto v_11;
    else goto v_10;
v_11:
    v_20 = v_21;
    {
        LispObject fn = basic_elt(env, 2); // mgenp
        return (*qfn1(fn))(fn, v_20);
    }
v_10:
    goto v_5;
v_7:
    v_20 = nil;
    goto v_5;
    v_20 = nil;
v_5:
    return onevalue(v_20);
}



// Code for xdegreemon

static LispObject CC_xdegreemon(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_38, v_39, v_40;
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
    v_39 = v_2;
// end of prologue
    v_38 = qvalue(basic_elt(env, 1)); // xdegreelist!*
    if (v_38 == nil) goto v_6;
    else goto v_7;
v_6:
    v_38 = v_39;
    {   LispObject fn = basic_elt(env, 2); // mknwedge
    v_38 = (*qfn1(fn))(fn, v_38);
    }
    env = stack[-1];
    {
        LispObject fn = basic_elt(env, 3); // xdegree
        return (*qfn1(fn))(fn, v_38);
    }
v_7:
    v_38 = v_39;
    stack[0] = v_38;
    v_38 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_40 = v_38;
v_18:
    v_38 = stack[0];
    if (v_38 == nil) goto v_23;
    else goto v_24;
v_23:
    v_38 = v_40;
    goto v_17;
v_24:
    v_38 = stack[0];
    if (!car_legal(v_38)) v_38 = carerror(v_38); else
    v_38 = car(v_38);
    v_39 = v_38;
    v_38 = qvalue(basic_elt(env, 1)); // xdegreelist!*
    v_38 = Latsoc(nil, v_39, v_38);
    if (!car_legal(v_38)) v_38 = cdrerror(v_38); else
    v_38 = cdr(v_38);
    v_39 = v_40;
    v_38 = plus2(v_38, v_39);
    env = stack[-1];
    v_40 = v_38;
    v_38 = stack[0];
    if (!car_legal(v_38)) v_38 = cdrerror(v_38); else
    v_38 = cdr(v_38);
    stack[0] = v_38;
    goto v_18;
v_17:
    goto v_5;
    v_38 = nil;
v_5:
    return onevalue(v_38);
}



// Code for evaluate0

static LispObject CC_evaluate0(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_9, v_10;
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    stack[0] = v_3;
    v_9 = v_2;
// end of prologue
    {   LispObject fn = basic_elt(env, 1); // evaluate!-horner
    v_10 = (*qfn1(fn))(fn, v_9);
    }
    env = stack[-1];
    v_9 = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // evaluate1
        return (*qfn2(fn))(fn, v_10, v_9);
    }
}



// Code for domain!*p

static LispObject CC_domainHp(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_29, v_30;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_30 = v_2;
// end of prologue
    v_29 = v_30;
    if (v_29 == nil) goto v_6;
    else goto v_7;
v_6:
    v_29 = lisp_true;
    goto v_5;
v_7:
    v_29 = v_30;
    v_29 = (is_number(v_29) ? lisp_true : nil);
    if (v_29 == nil) goto v_14;
    else goto v_13;
v_14:
    v_29 = v_30;
    if (!consp(v_29)) goto v_20;
    v_29 = v_30;
    if (!car_legal(v_29)) v_29 = carerror(v_29); else
    v_29 = car(v_29);
    v_30 = qvalue(basic_elt(env, 1)); // domainlist!*
    v_29 = Lmemq(nil, v_29, v_30);
    goto v_18;
v_20:
    v_29 = nil;
    goto v_18;
    v_29 = nil;
v_18:
v_13:
    goto v_5;
    v_29 = nil;
v_5:
    return onevalue(v_29);
}



// Code for rnquotient!:

static LispObject CC_rnquotientT(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_20, v_21;
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
    v_20 = stack[-1];
    if (!car_legal(v_20)) v_20 = cdrerror(v_20); else
    v_20 = cdr(v_20);
    if (!car_legal(v_20)) v_21 = carerror(v_20); else
    v_21 = car(v_20);
    v_20 = stack[0];
    if (!car_legal(v_20)) v_20 = cdrerror(v_20); else
    v_20 = cdr(v_20);
    if (!car_legal(v_20)) v_20 = cdrerror(v_20); else
    v_20 = cdr(v_20);
    stack[-2] = times2(v_21, v_20);
    env = stack[-3];
    v_20 = stack[-1];
    if (!car_legal(v_20)) v_20 = cdrerror(v_20); else
    v_20 = cdr(v_20);
    if (!car_legal(v_20)) v_21 = cdrerror(v_20); else
    v_21 = cdr(v_20);
    v_20 = stack[0];
    if (!car_legal(v_20)) v_20 = cdrerror(v_20); else
    v_20 = cdr(v_20);
    if (!car_legal(v_20)) v_20 = carerror(v_20); else
    v_20 = car(v_20);
    v_20 = times2(v_21, v_20);
    env = stack[-3];
    {
        LispObject v_25 = stack[-2];
        LispObject fn = basic_elt(env, 1); // mkrn
        return (*qfn2(fn))(fn, v_25, v_20);
    }
}



// Code for gintequiv!:

static LispObject CC_gintequivT(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_18, v_19, v_20;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_19 = v_2;
// end of prologue
    v_18 = v_19;
    if (!car_legal(v_18)) v_18 = cdrerror(v_18); else
    v_18 = cdr(v_18);
    if (!car_legal(v_18)) v_20 = cdrerror(v_18); else
    v_20 = cdr(v_18);
    v_18 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_20 == v_18) goto v_6;
    else goto v_7;
v_6:
    v_18 = v_19;
    if (!car_legal(v_18)) v_18 = cdrerror(v_18); else
    v_18 = cdr(v_18);
    if (!car_legal(v_18)) v_18 = carerror(v_18); else
    v_18 = car(v_18);
    goto v_5;
v_7:
    v_18 = nil;
    goto v_5;
    v_18 = nil;
v_5:
    return onevalue(v_18);
}



// Code for procstat

static LispObject CC_procstat(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_5;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// end of prologue
    v_5 = nil;
    {
        LispObject fn = basic_elt(env, 1); // procstat1
        return (*qfn1(fn))(fn, v_5);
    }
}



// Code for !*sqprint

static LispObject CC_Hsqprint(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_8;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_8 = v_2;
// end of prologue
    if (!car_legal(v_8)) v_8 = cdrerror(v_8); else
    v_8 = cdr(v_8);
    if (!car_legal(v_8)) v_8 = carerror(v_8); else
    v_8 = car(v_8);
    {
        LispObject fn = basic_elt(env, 1); // sqprint
        return (*qfn1(fn))(fn, v_8);
    }
}



// Code for mcharg

static LispObject CC_mcharg(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_89, v_90, v_91;
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
    real_push(nil, nil, nil, nil, nil);
    stack_popper stack_popper_var(6);
// copy arguments values to proper place
    stack[-3] = v_4;
    stack[0] = v_3;
    v_91 = v_2;
// end of prologue
    v_90 = basic_elt(env, 1); // minus
    v_89 = stack[0];
    v_89 = Latsoc(nil, v_90, v_89);
    if (v_89 == nil) goto v_9;
    v_90 = v_91;
    v_89 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // reform!-minus
    v_91 = (*qfn2(fn))(fn, v_90, v_89);
    }
    env = stack[-5];
    v_90 = stack[0];
    v_89 = stack[-3];
    {
        LispObject fn = basic_elt(env, 4); // mcharg1
        return (*qfn3(fn))(fn, v_91, v_90, v_89);
    }
v_9:
    v_89 = stack[0];
    if (v_89 == nil) goto v_20;
    v_89 = stack[0];
    if (!car_legal(v_89)) v_90 = carerror(v_89); else
    v_90 = car(v_89);
    v_89 = basic_elt(env, 2); // slash
    if (!consp(v_90)) goto v_20;
    v_90 = car(v_90);
    if (v_90 == v_89) goto v_23;
    else goto v_20;
v_23:
    v_90 = v_91;
    v_89 = stack[0];
    {   LispObject fn = basic_elt(env, 5); // reform!-minus2
    v_89 = (*qfn2(fn))(fn, v_90, v_89);
    }
    env = stack[-5];
    stack[-4] = v_89;
v_33:
    v_89 = stack[-4];
    if (v_89 == nil) goto v_40;
    else goto v_41;
v_40:
    v_89 = nil;
    goto v_32;
v_41:
    v_89 = stack[-4];
    if (!car_legal(v_89)) v_89 = carerror(v_89); else
    v_89 = car(v_89);
    v_90 = v_89;
    if (!car_legal(v_90)) v_91 = carerror(v_90); else
    v_91 = car(v_90);
    if (!car_legal(v_89)) v_90 = cdrerror(v_89); else
    v_90 = cdr(v_89);
    v_89 = stack[-3];
    {   LispObject fn = basic_elt(env, 4); // mcharg1
    v_89 = (*qfn3(fn))(fn, v_91, v_90, v_89);
    }
    env = stack[-5];
    stack[-2] = v_89;
    v_89 = stack[-2];
    {   LispObject fn = basic_elt(env, 6); // lastpair
    v_89 = (*qfn1(fn))(fn, v_89);
    }
    env = stack[-5];
    stack[-1] = v_89;
    v_89 = stack[-4];
    if (!car_legal(v_89)) v_89 = cdrerror(v_89); else
    v_89 = cdr(v_89);
    stack[-4] = v_89;
    v_89 = stack[-1];
    if (!consp(v_89)) goto v_59;
    else goto v_60;
v_59:
    goto v_33;
v_60:
v_34:
    v_89 = stack[-4];
    if (v_89 == nil) goto v_64;
    else goto v_65;
v_64:
    v_89 = stack[-2];
    goto v_32;
v_65:
    stack[0] = stack[-1];
    v_89 = stack[-4];
    if (!car_legal(v_89)) v_89 = carerror(v_89); else
    v_89 = car(v_89);
    v_90 = v_89;
    if (!car_legal(v_90)) v_91 = carerror(v_90); else
    v_91 = car(v_90);
    if (!car_legal(v_89)) v_90 = cdrerror(v_89); else
    v_90 = cdr(v_89);
    v_89 = stack[-3];
    {   LispObject fn = basic_elt(env, 4); // mcharg1
    v_89 = (*qfn3(fn))(fn, v_91, v_90, v_89);
    }
    env = stack[-5];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_89);
    v_89 = stack[-1];
    {   LispObject fn = basic_elt(env, 6); // lastpair
    v_89 = (*qfn1(fn))(fn, v_89);
    }
    env = stack[-5];
    stack[-1] = v_89;
    v_89 = stack[-4];
    if (!car_legal(v_89)) v_89 = cdrerror(v_89); else
    v_89 = cdr(v_89);
    stack[-4] = v_89;
    goto v_34;
v_32:
    goto v_7;
v_20:
    v_90 = stack[0];
    v_89 = stack[-3];
    {
        LispObject fn = basic_elt(env, 4); // mcharg1
        return (*qfn3(fn))(fn, v_91, v_90, v_89);
    }
    v_89 = nil;
v_7:
    return onevalue(v_89);
}



// Code for tayexp!-min2

static LispObject CC_tayexpKmin2(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_16, v_17;
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    v_17 = stack[-1];
    v_16 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // tayexp!-lessp
    v_16 = (*qfn2(fn))(fn, v_17, v_16);
    }
    if (v_16 == nil) goto v_8;
    v_16 = stack[-1];
    goto v_6;
v_8:
    v_16 = stack[0];
    goto v_6;
    v_16 = nil;
v_6:
    return onevalue(v_16);
}



// Code for talp_smupdknowl1

static LispObject CC_talp_smupdknowl1(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_55, v_56, v_57;
    LispObject v_5;
    if (_a4up_ == nil)
        aerror1("not enough arguments provided", basic_elt(env, 0));
    v_5 = car(_a4up_); _a4up_ = cdr(_a4up_);
    if (_a4up_ != nil)
        aerror1("too many arguments provided", basic_elt(env, 0));
#ifdef CHECK_STACK
    if_check_stack;
#endif
#ifdef CONSERVATIVE
    poll();
#else // CONSERVATIVE
    if (++reclaim_trigger_count == reclaim_trigger_target ||
        stack >= stackLimit)
    {
        push(v_2,v_3,v_4,v_5);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_5,v_4,v_3,v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    stack[0] = v_5;
    stack[-1] = v_4;
    stack[-2] = v_3;
    v_55 = v_2;
// end of prologue
    v_56 = v_55;
    v_55 = basic_elt(env, 1); // or
    if (v_56 == v_55) goto v_13;
    else goto v_14;
v_13:
    v_55 = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // rl_negateat
    v_55 = (*qfn1(fn))(fn, v_55);
    }
    env = stack[-4];
    stack[-3] = v_55;
    v_55 = stack[-2];
    goto v_12;
v_14:
    v_55 = stack[-2];
    stack[-3] = v_55;
    v_55 = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // rl_negateat
    v_55 = (*qfn1(fn))(fn, v_55);
    }
    env = stack[-4];
    goto v_12;
v_12:
    v_56 = v_55;
    v_55 = stack[-1];
    v_55 = Lassoc(nil, v_56, v_55);
    if (v_55 == nil) goto v_30;
    v_55 = basic_elt(env, 2); // false
    goto v_10;
v_30:
    v_56 = stack[-3];
    v_55 = stack[-1];
    {   LispObject fn = basic_elt(env, 4); // talp_chkknowl
    v_55 = (*qfn2(fn))(fn, v_56, v_55);
    }
    env = stack[-4];
    if (v_55 == nil) goto v_38;
    v_55 = basic_elt(env, 2); // false
    goto v_10;
v_38:
    v_56 = stack[-3];
    v_55 = stack[-1];
    v_55 = Lassoc(nil, v_56, v_55);
    if (v_55 == nil) goto v_46;
    v_55 = stack[-1];
    goto v_10;
v_46:
    v_57 = stack[-3];
    v_56 = stack[0];
    v_55 = stack[-1];
    v_55 = acons(v_57, v_56, v_55);
v_10:
    return onevalue(v_55);
}



// Code for ibalp_atomp

static LispObject CC_ibalp_atomp(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_53, v_54;
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
    v_54 = stack[0];
    v_53 = basic_elt(env, 1); // true
    if (v_54 == v_53) goto v_10;
    else goto v_11;
v_10:
    v_53 = lisp_true;
    goto v_9;
v_11:
    v_54 = stack[0];
    v_53 = basic_elt(env, 2); // false
    v_53 = (v_54 == v_53 ? lisp_true : nil);
    goto v_9;
    v_53 = nil;
v_9:
    if (v_53 == nil) goto v_7;
    v_53 = lisp_true;
    goto v_5;
v_7:
    v_53 = stack[0];
    if (!consp(v_53)) goto v_29;
    else goto v_30;
v_29:
    v_53 = stack[0];
    v_54 = v_53;
    goto v_28;
v_30:
    v_53 = stack[0];
    if (!car_legal(v_53)) v_53 = carerror(v_53); else
    v_53 = car(v_53);
    v_54 = v_53;
    goto v_28;
    v_54 = nil;
v_28:
    v_53 = basic_elt(env, 3); // equal
    if (v_54 == v_53) goto v_25;
    else goto v_26;
v_25:
    v_53 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // ibalp_arg2l
    v_53 = (*qfn1(fn))(fn, v_53);
    }
    env = stack[-1];
    if (symbolp(v_53)) goto v_41;
    v_53 = nil;
    goto v_39;
v_41:
    v_53 = stack[0];
    {   LispObject fn = basic_elt(env, 5); // ibalp_arg2r
    v_53 = (*qfn1(fn))(fn, v_53);
    }
    v_53 = (is_number(v_53) ? lisp_true : nil);
    goto v_39;
    v_53 = nil;
v_39:
    goto v_24;
v_26:
    v_53 = nil;
    goto v_24;
    v_53 = nil;
v_24:
    goto v_5;
    v_53 = nil;
v_5:
    return onevalue(v_53);
}



// Code for isarb_int

static LispObject CC_isarb_int(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_26, v_27, v_28;
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
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_27 = v_2;
// end of prologue
    v_26 = v_27;
    v_26 = Lconsp(nil, v_26);
    env = stack[0];
    if (v_26 == nil) goto v_9;
    v_26 = v_27;
    if (!car_legal(v_26)) v_28 = carerror(v_26); else
    v_28 = car(v_26);
    v_26 = basic_elt(env, 1); // arbint
    if (v_28 == v_26) goto v_14;
    else goto v_15;
v_14:
    v_26 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    setvalue(basic_elt(env, 2), v_26); // found_int
    goto v_13;
v_15:
    v_26 = v_27;
    if (!car_legal(v_26)) v_26 = cdrerror(v_26); else
    v_26 = cdr(v_26);
    {   LispObject fn = basic_elt(env, 3); // multi_isarb_int
    v_26 = (*qfn1(fn))(fn, v_26);
    }
    goto v_13;
v_13:
    goto v_7;
v_9:
v_7:
    v_26 = nil;
    return onevalue(v_26);
}



// Code for retimes1

static LispObject CC_retimes1(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_80, v_81;
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
    stack[-1] = nil;
v_7:
    v_80 = stack[0];
    if (v_80 == nil) goto v_10;
    else goto v_11;
v_10:
    v_80 = stack[-1];
    {
        LispObject fn = basic_elt(env, 4); // nreverse
        return (*qfn1(fn))(fn, v_80);
    }
v_11:
    v_80 = stack[0];
    if (!car_legal(v_80)) v_81 = carerror(v_80); else
    v_81 = car(v_80);
    v_80 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_81 == v_80) goto v_15;
    else goto v_16;
v_15:
    v_80 = stack[0];
    if (!car_legal(v_80)) v_80 = cdrerror(v_80); else
    v_80 = cdr(v_80);
    stack[0] = v_80;
    goto v_7;
v_16:
    v_80 = stack[0];
    if (!car_legal(v_80)) v_80 = carerror(v_80); else
    v_80 = car(v_80);
    v_80 = Lminusp(nil, v_80);
    env = stack[-2];
    if (v_80 == nil) goto v_23;
    v_80 = qvalue(basic_elt(env, 1)); // !*bool
    v_80 = (v_80 == nil ? lisp_true : nil);
    setvalue(basic_elt(env, 1), v_80); // !*bool
    v_80 = stack[0];
    if (!car_legal(v_80)) v_80 = carerror(v_80); else
    v_80 = car(v_80);
    v_81 = negate(v_80);
    env = stack[-2];
    v_80 = stack[0];
    if (!car_legal(v_80)) v_80 = cdrerror(v_80); else
    v_80 = cdr(v_80);
    v_80 = cons(v_81, v_80);
    env = stack[-2];
    stack[0] = v_80;
    goto v_7;
v_23:
    v_80 = stack[0];
    if (!car_legal(v_80)) v_80 = carerror(v_80); else
    v_80 = car(v_80);
    if (!consp(v_80)) goto v_35;
    else goto v_36;
v_35:
    v_80 = stack[0];
    if (!car_legal(v_80)) v_81 = carerror(v_80); else
    v_81 = car(v_80);
    v_80 = stack[-1];
    v_80 = cons(v_81, v_80);
    env = stack[-2];
    stack[-1] = v_80;
    v_80 = stack[0];
    if (!car_legal(v_80)) v_80 = cdrerror(v_80); else
    v_80 = cdr(v_80);
    stack[0] = v_80;
    goto v_7;
v_36:
    v_80 = stack[0];
    if (!car_legal(v_80)) v_80 = carerror(v_80); else
    v_80 = car(v_80);
    if (!car_legal(v_80)) v_81 = carerror(v_80); else
    v_81 = car(v_80);
    v_80 = basic_elt(env, 2); // minus
    if (v_81 == v_80) goto v_45;
    else goto v_46;
v_45:
    v_80 = qvalue(basic_elt(env, 1)); // !*bool
    v_80 = (v_80 == nil ? lisp_true : nil);
    setvalue(basic_elt(env, 1), v_80); // !*bool
    v_80 = stack[0];
    if (!car_legal(v_80)) v_80 = carerror(v_80); else
    v_80 = car(v_80);
    if (!car_legal(v_80)) v_80 = cdrerror(v_80); else
    v_80 = cdr(v_80);
    if (!car_legal(v_80)) v_81 = carerror(v_80); else
    v_81 = car(v_80);
    v_80 = stack[0];
    if (!car_legal(v_80)) v_80 = cdrerror(v_80); else
    v_80 = cdr(v_80);
    v_80 = cons(v_81, v_80);
    env = stack[-2];
    stack[0] = v_80;
    goto v_7;
v_46:
    v_80 = stack[0];
    if (!car_legal(v_80)) v_80 = carerror(v_80); else
    v_80 = car(v_80);
    if (!car_legal(v_80)) v_81 = carerror(v_80); else
    v_81 = car(v_80);
    v_80 = basic_elt(env, 3); // times
    if (v_81 == v_80) goto v_60;
    else goto v_61;
v_60:
    v_80 = stack[0];
    if (!car_legal(v_80)) v_80 = carerror(v_80); else
    v_80 = car(v_80);
    if (!car_legal(v_80)) v_81 = cdrerror(v_80); else
    v_81 = cdr(v_80);
    v_80 = stack[0];
    if (!car_legal(v_80)) v_80 = cdrerror(v_80); else
    v_80 = cdr(v_80);
    v_80 = Lappend_2(nil, v_81, v_80);
    env = stack[-2];
    stack[0] = v_80;
    goto v_7;
v_61:
    v_80 = stack[0];
    if (!car_legal(v_80)) v_81 = carerror(v_80); else
    v_81 = car(v_80);
    v_80 = stack[-1];
    v_80 = cons(v_81, v_80);
    env = stack[-2];
    stack[-1] = v_80;
    v_80 = stack[0];
    if (!car_legal(v_80)) v_80 = cdrerror(v_80); else
    v_80 = cdr(v_80);
    stack[0] = v_80;
    goto v_7;
    v_80 = nil;
    return onevalue(v_80);
}



// Code for vdpsave

static LispObject CC_vdpsave(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_5;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_5 = v_2;
// end of prologue
    return onevalue(v_5);
}



// Code for gsetsugar

static LispObject CC_gsetsugar(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_26, v_27;
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
    v_27 = v_3;
    stack[-1] = v_2;
// end of prologue
    v_26 = qvalue(basic_elt(env, 1)); // !*gsugar
    if (v_26 == nil) goto v_10;
    else goto v_11;
v_10:
    v_26 = nil;
    goto v_9;
v_11:
    stack[-2] = stack[-1];
    stack[0] = basic_elt(env, 2); // sugar
    v_26 = v_27;
    if (v_26 == nil) goto v_21;
    else goto v_20;
v_21:
    v_26 = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // vdptdeg
    v_26 = (*qfn1(fn))(fn, v_26);
    }
    env = stack[-3];
v_20:
    {   LispObject fn = basic_elt(env, 4); // vdpputprop
    v_26 = (*qfn3(fn))(fn, stack[-2], stack[0], v_26);
    }
    goto v_9;
    v_26 = nil;
v_9:
    if (v_26 == nil) goto v_7;
    else goto v_6;
v_7:
    v_26 = stack[-1];
v_6:
    return onevalue(v_26);
}



// Code for add2inputbuf

static LispObject CC_add2inputbuf(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_27, v_28, v_29;
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    {   LispObject fn = basic_elt(env, 4); // terminalp
    v_27 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
    if (v_27 == nil) goto v_13;
    else goto v_14;
v_13:
    v_27 = lisp_true;
    goto v_12;
v_14:
    v_27 = qvalue(basic_elt(env, 1)); // !*nosave!*
    goto v_12;
    v_27 = nil;
v_12:
    if (v_27 == nil) goto v_10;
    v_27 = nil;
    goto v_6;
v_10:
    v_29 = qvalue(basic_elt(env, 2)); // statcounter
    v_28 = stack[0];
    v_27 = stack[-1];
    v_28 = list3(v_29, v_28, v_27);
    env = stack[-2];
    v_27 = qvalue(basic_elt(env, 3)); // inputbuflis!*
    v_27 = cons(v_28, v_27);
    env = stack[-2];
    setvalue(basic_elt(env, 3), v_27); // inputbuflis!*
    v_27 = nil;
v_6:
    return onevalue(v_27);
}



// Code for simpdiff

static LispObject CC_simpdiff(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_12;
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
    v_12 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // ckpreci!#
    v_12 = (*qfn1(fn))(fn, v_12);
    }
    env = stack[-2];
    v_12 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // simpcar
    stack[-1] = (*qfn1(fn))(fn, v_12);
    }
    env = stack[-2];
    v_12 = stack[0];
    if (!car_legal(v_12)) v_12 = cdrerror(v_12); else
    v_12 = cdr(v_12);
    {   LispObject fn = basic_elt(env, 3); // simpminus
    v_12 = (*qfn1(fn))(fn, v_12);
    }
    env = stack[-2];
    {
        LispObject v_15 = stack[-1];
        LispObject fn = basic_elt(env, 4); // addsq
        return (*qfn2(fn))(fn, v_15, v_12);
    }
}



// Code for mv!-pow!-minusp

static LispObject CC_mvKpowKminusp(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_22, v_23;
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
v_1:
    v_22 = stack[0];
    if (v_22 == nil) goto v_6;
    else goto v_7;
v_6:
    v_22 = nil;
    goto v_5;
v_7:
    v_22 = stack[0];
    if (!car_legal(v_22)) v_23 = carerror(v_22); else
    v_23 = car(v_22);
    v_22 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_22 = static_cast<LispObject>(lessp2(v_23, v_22));
    v_22 = v_22 ? lisp_true : nil;
    env = stack[-1];
    if (v_22 == nil) goto v_14;
    else goto v_13;
v_14:
    v_22 = stack[0];
    if (!car_legal(v_22)) v_22 = cdrerror(v_22); else
    v_22 = cdr(v_22);
    stack[0] = v_22;
    goto v_1;
v_13:
    goto v_5;
    v_22 = nil;
v_5:
    return onevalue(v_22);
}



// Code for mo!=deglist

static LispObject CC_moMdeglist(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_106, v_107;
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
    real_push(nil, nil, nil, nil, nil);
    real_push(nil);
    stack_popper stack_popper_var(7);
// copy arguments values to proper place
    stack[-4] = v_2;
// end of prologue
    v_106 = stack[-4];
    if (v_106 == nil) goto v_6;
    else goto v_7;
v_6:
    v_106 = qvalue(basic_elt(env, 1)); // cali!=basering
    {   LispObject fn = basic_elt(env, 3); // ring_degrees
    v_106 = (*qfn1(fn))(fn, v_106);
    }
    env = stack[-6];
    stack[-3] = v_106;
    v_106 = stack[-3];
    if (v_106 == nil) goto v_19;
    else goto v_20;
v_19:
    v_106 = nil;
    goto v_13;
v_20:
    v_106 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_106 = ncons(v_106);
    env = stack[-6];
    stack[-1] = v_106;
    stack[-2] = v_106;
v_14:
    v_106 = stack[-3];
    if (!car_legal(v_106)) v_106 = cdrerror(v_106); else
    v_106 = cdr(v_106);
    stack[-3] = v_106;
    v_106 = stack[-3];
    if (v_106 == nil) goto v_32;
    else goto v_33;
v_32:
    v_106 = stack[-2];
    goto v_13;
v_33:
    stack[0] = stack[-1];
    v_106 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_106 = ncons(v_106);
    env = stack[-6];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_106);
    v_106 = stack[-1];
    if (!car_legal(v_106)) v_106 = cdrerror(v_106); else
    v_106 = cdr(v_106);
    stack[-1] = v_106;
    goto v_14;
v_13:
    goto v_5;
v_7:
    v_106 = stack[-4];
    if (!car_legal(v_106)) v_107 = carerror(v_106); else
    v_107 = car(v_106);
    v_106 = qvalue(basic_elt(env, 2)); // cali!=degrees
    v_106 = Lassoc(nil, v_107, v_106);
    stack[-5] = v_106;
    v_106 = qvalue(basic_elt(env, 1)); // cali!=basering
    {   LispObject fn = basic_elt(env, 3); // ring_degrees
    v_106 = (*qfn1(fn))(fn, v_106);
    }
    env = stack[-6];
    stack[-3] = v_106;
    v_106 = stack[-3];
    if (v_106 == nil) goto v_63;
    else goto v_64;
v_63:
    v_106 = nil;
    v_107 = v_106;
    goto v_57;
v_64:
    v_106 = stack[-3];
    if (!car_legal(v_106)) v_106 = carerror(v_106); else
    v_106 = car(v_106);
    v_107 = stack[-4];
    if (!car_legal(v_107)) v_107 = cdrerror(v_107); else
    v_107 = cdr(v_107);
    {   LispObject fn = basic_elt(env, 4); // mo!=sprod
    v_106 = (*qfn2(fn))(fn, v_107, v_106);
    }
    env = stack[-6];
    v_106 = ncons(v_106);
    env = stack[-6];
    stack[-1] = v_106;
    stack[-2] = v_106;
v_58:
    v_106 = stack[-3];
    if (!car_legal(v_106)) v_106 = cdrerror(v_106); else
    v_106 = cdr(v_106);
    stack[-3] = v_106;
    v_106 = stack[-3];
    if (v_106 == nil) goto v_79;
    else goto v_80;
v_79:
    v_106 = stack[-2];
    v_107 = v_106;
    goto v_57;
v_80:
    stack[0] = stack[-1];
    v_106 = stack[-3];
    if (!car_legal(v_106)) v_106 = carerror(v_106); else
    v_106 = car(v_106);
    v_107 = stack[-4];
    if (!car_legal(v_107)) v_107 = cdrerror(v_107); else
    v_107 = cdr(v_107);
    {   LispObject fn = basic_elt(env, 4); // mo!=sprod
    v_106 = (*qfn2(fn))(fn, v_107, v_106);
    }
    env = stack[-6];
    v_106 = ncons(v_106);
    env = stack[-6];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_106);
    v_106 = stack[-1];
    if (!car_legal(v_106)) v_106 = cdrerror(v_106); else
    v_106 = cdr(v_106);
    stack[-1] = v_106;
    goto v_58;
v_57:
    v_106 = stack[-5];
    if (v_106 == nil) goto v_98;
    v_106 = stack[-5];
    if (!car_legal(v_106)) v_106 = cdrerror(v_106); else
    v_106 = cdr(v_106);
    if (!car_legal(v_106)) v_106 = cdrerror(v_106); else
    v_106 = cdr(v_106);
    goto v_96;
v_98:
    v_106 = nil;
    goto v_96;
    v_106 = nil;
v_96:
    {
        LispObject fn = basic_elt(env, 5); // mo!=sum
        return (*qfn2(fn))(fn, v_107, v_106);
    }
    v_106 = nil;
v_5:
    return onevalue(v_106);
}



// Code for psum

static LispObject CC_psum(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_127, v_128, v_129;
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
    real_push(nil, nil, nil, nil, nil);
    push(nil, nil, nil);
    stack_popper stack_popper_var(9);
// copy arguments values to proper place
    stack[-5] = v_3;
    stack[-6] = v_2;
// end of prologue
    stack[-3] = nil;
    stack[-2] = nil;
    stack[-1] = nil;
    v_127 = stack[-6];
    if (v_127 == nil) goto v_16;
    else goto v_17;
v_16:
    v_127 = stack[-5];
    stack[-2] = v_127;
    goto v_15;
v_17:
    v_127 = stack[-5];
    if (v_127 == nil) goto v_20;
    else goto v_21;
v_20:
    v_127 = stack[-6];
    stack[-2] = v_127;
    goto v_15;
v_21:
v_28:
    v_127 = stack[-5];
    if (v_127 == nil) goto v_31;
    v_127 = stack[-1];
    if (v_127 == nil) goto v_35;
    else goto v_31;
v_35:
    goto v_32;
v_31:
    goto v_27;
v_32:
    v_127 = stack[-5];
    if (!car_legal(v_127)) v_127 = carerror(v_127); else
    v_127 = car(v_127);
    stack[0] = v_127;
    v_127 = stack[0];
    if (!car_legal(v_127)) v_127 = carerror(v_127); else
    v_127 = car(v_127);
    stack[-7] = v_127;
v_44:
    v_127 = stack[-6];
    if (v_127 == nil) goto v_47;
    v_128 = stack[-7];
    v_127 = stack[-6];
    if (!car_legal(v_127)) v_127 = carerror(v_127); else
    v_127 = car(v_127);
    if (!car_legal(v_127)) v_127 = carerror(v_127); else
    v_127 = car(v_127);
    {   LispObject fn = basic_elt(env, 1); // dless
    v_127 = (*qfn2(fn))(fn, v_128, v_127);
    }
    env = stack[-8];
    if (v_127 == nil) goto v_47;
    goto v_48;
v_47:
    goto v_43;
v_48:
    v_127 = stack[-6];
    if (!car_legal(v_127)) v_128 = carerror(v_127); else
    v_128 = car(v_127);
    v_127 = stack[-3];
    v_127 = cons(v_128, v_127);
    env = stack[-8];
    stack[-3] = v_127;
    v_127 = stack[-6];
    if (!car_legal(v_127)) v_127 = cdrerror(v_127); else
    v_127 = cdr(v_127);
    stack[-6] = v_127;
    goto v_44;
v_43:
    v_127 = stack[-6];
    if (v_127 == nil) goto v_66;
    else goto v_67;
v_66:
    v_127 = stack[-3];
    v_128 = Lreverse(nil, v_127);
    env = stack[-8];
    v_127 = stack[-5];
    v_127 = Lappend_2(nil, v_128, v_127);
    env = stack[-8];
    stack[-2] = v_127;
    v_127 = lisp_true;
    stack[-1] = v_127;
    goto v_65;
v_67:
    v_127 = stack[-6];
    if (!car_legal(v_127)) v_127 = carerror(v_127); else
    v_127 = car(v_127);
    v_129 = v_127;
    v_128 = stack[-7];
    v_127 = v_129;
    if (!car_legal(v_127)) v_127 = carerror(v_127); else
    v_127 = car(v_127);
    if (equal(v_128, v_127)) goto v_80;
    else goto v_81;
v_80:
    v_127 = v_129;
    if (!car_legal(v_127)) v_128 = cdrerror(v_127); else
    v_128 = cdr(v_127);
    v_127 = stack[0];
    if (!car_legal(v_127)) v_127 = cdrerror(v_127); else
    v_127 = cdr(v_127);
    {   LispObject fn = basic_elt(env, 2); // csum
    v_127 = (*qfn2(fn))(fn, v_128, v_127);
    }
    env = stack[-8];
    stack[-4] = v_127;
    stack[0] = stack[-4];
    {   LispObject fn = basic_elt(env, 3); // c_zero
    v_127 = (*qfn0(fn))(fn);
    }
    env = stack[-8];
    if (equal(stack[0], v_127)) goto v_93;
    v_129 = stack[-7];
    v_128 = stack[-4];
    v_127 = stack[-3];
    v_127 = acons(v_129, v_128, v_127);
    env = stack[-8];
    stack[-3] = v_127;
    goto v_91;
v_93:
v_91:
    v_127 = stack[-6];
    if (!car_legal(v_127)) v_127 = cdrerror(v_127); else
    v_127 = cdr(v_127);
    stack[-6] = v_127;
    v_127 = stack[-6];
    if (v_127 == nil) goto v_105;
    goto v_103;
v_105:
v_103:
    goto v_79;
v_81:
    v_128 = stack[0];
    v_127 = stack[-3];
    v_127 = cons(v_128, v_127);
    env = stack[-8];
    stack[-3] = v_127;
    goto v_79;
v_79:
    v_127 = stack[-5];
    if (!car_legal(v_127)) v_127 = cdrerror(v_127); else
    v_127 = cdr(v_127);
    stack[-5] = v_127;
    v_127 = stack[-5];
    if (v_127 == nil) goto v_119;
    else goto v_120;
v_119:
    v_127 = stack[-3];
    v_128 = Lreverse(nil, v_127);
    env = stack[-8];
    v_127 = stack[-6];
    v_127 = Lappend_2(nil, v_128, v_127);
    env = stack[-8];
    stack[-2] = v_127;
    goto v_118;
v_120:
v_118:
    goto v_65;
v_65:
    goto v_28;
v_27:
    goto v_15;
v_15:
    v_127 = stack[-2];
    return onevalue(v_127);
}



// Code for pv_neg

static LispObject CC_pv_neg(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_30, v_31, v_32;
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
    stack[-1] = nil;
v_9:
    v_30 = stack[0];
    if (v_30 == nil) goto v_12;
    else goto v_13;
v_12:
    goto v_8;
v_13:
    v_30 = stack[0];
    if (!car_legal(v_30)) v_30 = carerror(v_30); else
    v_30 = car(v_30);
    if (!car_legal(v_30)) v_30 = carerror(v_30); else
    v_30 = car(v_30);
    v_32 = negate(v_30);
    env = stack[-2];
    v_30 = stack[0];
    if (!car_legal(v_30)) v_30 = carerror(v_30); else
    v_30 = car(v_30);
    if (!car_legal(v_30)) v_31 = cdrerror(v_30); else
    v_31 = cdr(v_30);
    v_30 = stack[-1];
    v_30 = acons(v_32, v_31, v_30);
    env = stack[-2];
    stack[-1] = v_30;
    v_30 = stack[0];
    if (!car_legal(v_30)) v_30 = cdrerror(v_30); else
    v_30 = cdr(v_30);
    stack[0] = v_30;
    goto v_9;
v_8:
    v_30 = stack[-1];
        return Lnreverse(nil, v_30);
    return onevalue(v_30);
}



// Code for klistt

static LispObject CC_klistt(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_26, v_27;
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
    stack[-1] = nil;
v_7:
    v_26 = stack[0];
    if (!consp(v_26)) goto v_10;
    else goto v_11;
v_10:
    v_26 = stack[-1];
    {
        LispObject fn = basic_elt(env, 2); // nreverse
        return (*qfn1(fn))(fn, v_26);
    }
v_11:
    v_26 = stack[0];
    if (!car_legal(v_26)) v_26 = carerror(v_26); else
    v_26 = car(v_26);
    if (!car_legal(v_26)) v_27 = carerror(v_26); else
    v_27 = car(v_26);
    v_26 = stack[-1];
    v_26 = cons(v_27, v_26);
    env = stack[-2];
    stack[-1] = v_26;
    v_27 = stack[0];
    v_26 = basic_elt(env, 1); // list
    {   LispObject fn = basic_elt(env, 3); // carx
    v_26 = (*qfn2(fn))(fn, v_27, v_26);
    }
    env = stack[-2];
    if (!car_legal(v_26)) v_26 = cdrerror(v_26); else
    v_26 = cdr(v_26);
    stack[0] = v_26;
    goto v_7;
    v_26 = nil;
    return onevalue(v_26);
}



setup_type const u08_setup[] =
{
    {"general-plus-mod-p",      G0W2,     G1W2,     CC_generalKplusKmodKp,G3W2,G4W2},
    {"get_first_kernel",        G0W2,     G1W2,     CC_get_first_kernel,G3W2,G4W2},
    {"lalr_precedence",         G0W1,     CC_lalr_precedence,G2W1,G3W1, G4W1},
    {"diff",                    G0W2,     G1W2,     CC_diff,  G3W2,     G4W2},
    {"talp_varlat",             G0W1,     CC_talp_varlat,G2W1,G3W1,     G4W1},
    {"rl_gettype",              G0W1,     CC_rl_gettype,G2W1, G3W1,     G4W1},
    {"quotfail-mod-p",          G0W2,     G1W2,     CC_quotfailKmodKp,G3W2,G4W2},
    {"retattributes",           G0W2,     G1W2,     CC_retattributes,G3W2,G4W2},
    {"round:mt",                G0W2,     G1W2,     CC_roundTmt,G3W2,   G4W2},
    {"eofcheck",                CC_eofcheck,G1W0,   G2W0,     G3W0,     G4W0},
    {"divd",                    G0W2,     G1W2,     CC_divd,  G3W2,     G4W2},
    {"dp_times_bc",             G0W2,     G1W2,     CC_dp_times_bc,G3W2,G4W2},
    {"pdmult",                  G0W2,     G1W2,     CC_pdmult,G3W2,     G4W2},
    {"mcharg2",                 G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_mcharg2},
    {"cancel",                  G0W1,     CC_cancel,G2W1,     G3W1,     G4W1},
    {"canonsq",                 G0W1,     CC_canonsq,G2W1,    G3W1,     G4W1},
    {"rassoc",                  G0W2,     G1W2,     CC_rassoc,G3W2,     G4W2},
    {"anforml",                 G0W1,     CC_anforml,G2W1,    G3W1,     G4W1},
    {"cdarx",                   G0W1,     CC_cdarx, G2W1,     G3W1,     G4W1},
    {"talp_atfp",               G0W1,     CC_talp_atfp,G2W1,  G3W1,     G4W1},
    {"ibalp_simpat",            G0W1,     CC_ibalp_simpat,G2W1,G3W1,    G4W1},
    {"checktag",                G0W1,     CC_checktag,G2W1,   G3W1,     G4W1},
    {"subs2f1",                 G0W1,     CC_subs2f1,G2W1,    G3W1,     G4W1},
    {"bcsum",                   G0W2,     G1W2,     CC_bcsum, G3W2,     G4W2},
    {"vevmaptozero1",           G0W2,     G1W2,     CC_vevmaptozero1,G3W2,G4W2},
    {"deg*form",                G0W1,     CC_degHform,G2W1,   G3W1,     G4W1},
    {"physopsim*",              G0W1,     CC_physopsimH,G2W1, G3W1,     G4W1},
    {"rread",                   CC_rread, G1W0,     G2W0,     G3W0,     G4W0},
    {"reval2",                  G0W2,     G1W2,     CC_reval2,G3W2,     G4W2},
    {"red-weight1",             G0W2,     G1W2,     CC_redKweight1,G3W2,G4W2},
    {"bas_make1",               G0W3,     G1W3,     G2W3,     CC_bas_make1,G4W3},
    {"hevenp",                  G0W1,     CC_hevenp,G2W1,     G3W1,     G4W1},
    {"yyreadch",                CC_yyreadch,G1W0,   G2W0,     G3W0,     G4W0},
    {"talp_candp",              G0W1,     CC_talp_candp,G2W1, G3W1,     G4W1},
    {"ibalp_litp",              G0W1,     CC_ibalp_litp,G2W1, G3W1,     G4W1},
    {"rationalizei",            G0W1,     CC_rationalizei,G2W1,G3W1,    G4W1},
    {"genp",                    G0W1,     CC_genp,  G2W1,     G3W1,     G4W1},
    {"xdegreemon",              G0W1,     CC_xdegreemon,G2W1, G3W1,     G4W1},
    {"evaluate0",               G0W2,     G1W2,     CC_evaluate0,G3W2,  G4W2},
    {"domain*p",                G0W1,     CC_domainHp,G2W1,   G3W1,     G4W1},
    {"rnquotient:",             G0W2,     G1W2,     CC_rnquotientT,G3W2,G4W2},
    {"gintequiv:",              G0W1,     CC_gintequivT,G2W1, G3W1,     G4W1},
    {"procstat",                CC_procstat,G1W0,   G2W0,     G3W0,     G4W0},
    {"*sqprint",                G0W1,     CC_Hsqprint,G2W1,   G3W1,     G4W1},
    {"mcharg",                  G0W3,     G1W3,     G2W3,     CC_mcharg,G4W3},
    {"tayexp-min2",             G0W2,     G1W2,     CC_tayexpKmin2,G3W2,G4W2},
    {"talp_smupdknowl1",        G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_talp_smupdknowl1},
    {"ibalp_atomp",             G0W1,     CC_ibalp_atomp,G2W1,G3W1,     G4W1},
    {"isarb_int",               G0W1,     CC_isarb_int,G2W1,  G3W1,     G4W1},
    {"retimes1",                G0W1,     CC_retimes1,G2W1,   G3W1,     G4W1},
    {"vdpsave",                 G0W1,     CC_vdpsave,G2W1,    G3W1,     G4W1},
    {"gsetsugar",               G0W2,     G1W2,     CC_gsetsugar,G3W2,  G4W2},
    {"add2inputbuf",            G0W2,     G1W2,     CC_add2inputbuf,G3W2,G4W2},
    {"simpdiff",                G0W1,     CC_simpdiff,G2W1,   G3W1,     G4W1},
    {"mv-pow-minusp",           G0W1,     CC_mvKpowKminusp,G2W1,G3W1,   G4W1},
    {"mo=deglist",              G0W1,     CC_moMdeglist,G2W1, G3W1,     G4W1},
    {"psum",                    G0W2,     G1W2,     CC_psum,  G3W2,     G4W2},
    {"pv_neg",                  G0W1,     CC_pv_neg,G2W1,     G3W1,     G4W1},
    {"klistt",                  G0W1,     CC_klistt,G2W1,     G3W1,     G4W1},
    {nullptr, 
        reinterpret_cast<no_args *>(
            reinterpret_cast<uintptr_t>("u08")),
        reinterpret_cast<one_arg *>(
            reinterpret_cast<uintptr_t>("11333 5477096 8454293")),
        nullptr, nullptr, nullptr}
};

// end of generated code
