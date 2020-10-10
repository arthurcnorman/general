
// $destdir/u25.c        Machine generated C code

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


// Code for pa_coinc_split

static LispObject CC_pa_coinc_split(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_240, v_241, v_242;
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
    real_push(nil);
    stack_popper stack_popper_var(12);
// copy arguments values to proper place
    stack[-8] = v_3;
    stack[-9] = v_2;
// end of prologue
    stack[-6] = nil;
    v_240 = stack[-9];
    if (!car_legal(v_240)) v_240 = cdrerror(v_240); else
    v_240 = cdr(v_240);
    {   LispObject fn = basic_elt(env, 2); // upbve
    v_240 = (*qfn1(fn))(fn, v_240);
    }
    env = stack[-11];
    stack[-4] = v_240;
    v_240 = stack[-4];
    v_240 = sub1(v_240);
    env = stack[-11];
    v_240 = Lmkvect(nil, v_240);
    env = stack[-11];
    stack[-10] = v_240;
    v_240 = stack[-4];
    v_240 = sub1(v_240);
    env = stack[-11];
    v_240 = Lmkvect(nil, v_240);
    env = stack[-11];
    stack[-7] = v_240;
    v_240 = stack[-4];
    v_240 = sub1(v_240);
    env = stack[-11];
    v_240 = Lmkvect(nil, v_240);
    env = stack[-11];
    stack[-5] = v_240;
    v_240 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-3] = v_240;
    v_240 = stack[-9];
    if (!car_legal(v_240)) v_240 = carerror(v_240); else
    v_240 = car(v_240);
    stack[-2] = v_240;
v_34:
    v_240 = stack[-2];
    if (v_240 == nil) goto v_39;
    else goto v_40;
v_39:
    goto v_33;
v_40:
    v_240 = stack[-2];
    if (!car_legal(v_240)) v_240 = carerror(v_240); else
    v_240 = car(v_240);
    stack[-1] = v_240;
    v_240 = stack[-3];
    v_240 = add1(v_240);
    env = stack[-11];
    stack[-3] = v_240;
    stack[0] = stack[-10];
    v_240 = stack[-1];
    v_241 = sub1(v_240);
    env = stack[-11];
    v_240 = stack[-3];
    v_240 = Lputv(nil, stack[0], v_241, v_240);
    env = stack[-11];
    v_240 = stack[-2];
    if (!car_legal(v_240)) v_240 = cdrerror(v_240); else
    v_240 = cdr(v_240);
    stack[-2] = v_240;
    goto v_34;
v_33:
    v_240 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-3] = v_240;
    v_240 = stack[-8];
    if (!car_legal(v_240)) v_240 = carerror(v_240); else
    v_240 = car(v_240);
    stack[-2] = v_240;
v_59:
    v_240 = stack[-2];
    if (v_240 == nil) goto v_64;
    else goto v_65;
v_64:
    goto v_58;
v_65:
    v_240 = stack[-2];
    if (!car_legal(v_240)) v_240 = carerror(v_240); else
    v_240 = car(v_240);
    stack[-1] = v_240;
    v_240 = stack[-3];
    v_240 = add1(v_240);
    env = stack[-11];
    stack[-3] = v_240;
    stack[0] = stack[-7];
    v_240 = stack[-1];
    v_241 = sub1(v_240);
    env = stack[-11];
    v_240 = stack[-3];
    v_240 = Lputv(nil, stack[0], v_241, v_240);
    env = stack[-11];
    v_240 = stack[-2];
    if (!car_legal(v_240)) v_240 = cdrerror(v_240); else
    v_240 = cdr(v_240);
    stack[-2] = v_240;
    goto v_59;
v_58:
    v_240 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-3] = v_240;
v_83:
    v_241 = stack[-4];
    v_240 = stack[-3];
    v_240 = difference2(v_241, v_240);
    env = stack[-11];
    v_240 = Lminusp(nil, v_240);
    env = stack[-11];
    if (v_240 == nil) goto v_88;
    goto v_82;
v_88:
    stack[-1] = stack[-10];
    v_240 = stack[-9];
    if (!car_legal(v_240)) stack[0] = cdrerror(v_240); else
    stack[0] = cdr(v_240);
    v_240 = stack[-3];
    v_240 = sub1(v_240);
    env = stack[-11];
    v_240 = Lgetv(nil, stack[0], v_240);
    env = stack[-11];
    v_240 = sub1(v_240);
    env = stack[-11];
    stack[-2] = Lgetv(nil, stack[-1], v_240);
    env = stack[-11];
    stack[-1] = stack[-7];
    v_240 = stack[-8];
    if (!car_legal(v_240)) stack[0] = cdrerror(v_240); else
    stack[0] = cdr(v_240);
    v_240 = stack[-3];
    v_240 = sub1(v_240);
    env = stack[-11];
    v_240 = Lgetv(nil, stack[0], v_240);
    env = stack[-11];
    v_240 = sub1(v_240);
    env = stack[-11];
    v_240 = Lgetv(nil, stack[-1], v_240);
    env = stack[-11];
    v_240 = cons(stack[-2], v_240);
    env = stack[-11];
    v_242 = v_240;
    v_241 = v_242;
    v_240 = stack[-6];
    v_240 = Lassoc(nil, v_241, v_240);
    stack[-1] = v_240;
    if (v_240 == nil) goto v_114;
    v_240 = stack[-1];
    if (!car_legal(v_240)) stack[0] = cdrerror(v_240); else
    stack[0] = cdr(v_240);
    v_240 = stack[-1];
    if (!car_legal(v_240)) v_240 = cdrerror(v_240); else
    v_240 = cdr(v_240);
    if (!car_legal(v_240)) v_240 = cdrerror(v_240); else
    v_240 = cdr(v_240);
    v_240 = add1(v_240);
    env = stack[-11];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_240);
    stack[0] = stack[-5];
    v_240 = stack[-3];
    v_241 = sub1(v_240);
    env = stack[-11];
    v_240 = stack[-1];
    if (!car_legal(v_240)) v_240 = cdrerror(v_240); else
    v_240 = cdr(v_240);
    if (!car_legal(v_240)) v_240 = carerror(v_240); else
    v_240 = car(v_240);
    v_240 = Lputv(nil, stack[0], v_241, v_240);
    env = stack[-11];
    goto v_112;
v_114:
    v_241 = stack[-3];
    v_240 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_240 = list2star(v_242, v_241, v_240);
    env = stack[-11];
    stack[-1] = v_240;
    v_241 = stack[-1];
    v_240 = stack[-6];
    v_240 = cons(v_241, v_240);
    env = stack[-11];
    stack[-6] = v_240;
    stack[0] = stack[-5];
    v_240 = stack[-3];
    v_241 = sub1(v_240);
    env = stack[-11];
    v_240 = stack[-3];
    v_240 = Lputv(nil, stack[0], v_241, v_240);
    env = stack[-11];
    goto v_112;
v_112:
    v_240 = stack[-3];
    v_240 = add1(v_240);
    env = stack[-11];
    stack[-3] = v_240;
    goto v_83;
v_82:
    v_241 = stack[-6];
    v_240 = basic_elt(env, 1); // lambda_er1ez819f9yx2
    {   LispObject fn = basic_elt(env, 3); // sort
    v_240 = (*qfn2(fn))(fn, v_241, v_240);
    }
    env = stack[-11];
    stack[-6] = v_240;
    v_240 = stack[-6];
    stack[-3] = v_240;
    v_240 = stack[-3];
    if (v_240 == nil) goto v_161;
    else goto v_162;
v_161:
    v_240 = nil;
    v_241 = v_240;
    goto v_156;
v_162:
    v_240 = stack[-3];
    if (!car_legal(v_240)) v_240 = carerror(v_240); else
    v_240 = car(v_240);
    if (!car_legal(v_240)) v_240 = cdrerror(v_240); else
    v_240 = cdr(v_240);
    if (!car_legal(v_240)) v_240 = carerror(v_240); else
    v_240 = car(v_240);
    v_240 = ncons(v_240);
    env = stack[-11];
    stack[-1] = v_240;
    stack[-2] = v_240;
v_157:
    v_240 = stack[-3];
    if (!car_legal(v_240)) v_240 = cdrerror(v_240); else
    v_240 = cdr(v_240);
    stack[-3] = v_240;
    v_240 = stack[-3];
    if (v_240 == nil) goto v_176;
    else goto v_177;
v_176:
    v_240 = stack[-2];
    v_241 = v_240;
    goto v_156;
v_177:
    stack[0] = stack[-1];
    v_240 = stack[-3];
    if (!car_legal(v_240)) v_240 = carerror(v_240); else
    v_240 = car(v_240);
    if (!car_legal(v_240)) v_240 = cdrerror(v_240); else
    v_240 = cdr(v_240);
    if (!car_legal(v_240)) v_240 = carerror(v_240); else
    v_240 = car(v_240);
    v_240 = ncons(v_240);
    env = stack[-11];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_240);
    v_240 = stack[-1];
    if (!car_legal(v_240)) v_240 = cdrerror(v_240); else
    v_240 = cdr(v_240);
    stack[-1] = v_240;
    goto v_157;
v_156:
    v_240 = stack[-5];
    v_240 = cons(v_241, v_240);
    env = stack[-11];
    stack[-5] = v_240;
    v_240 = stack[-6];
    stack[-3] = v_240;
    v_240 = stack[-3];
    if (v_240 == nil) goto v_201;
    else goto v_202;
v_201:
    v_240 = nil;
    goto v_196;
v_202:
    v_240 = stack[-3];
    if (!car_legal(v_240)) v_240 = carerror(v_240); else
    v_240 = car(v_240);
    v_241 = v_240;
    if (!car_legal(v_241)) v_241 = carerror(v_241); else
    v_241 = car(v_241);
    if (!car_legal(v_240)) v_240 = cdrerror(v_240); else
    v_240 = cdr(v_240);
    if (!car_legal(v_240)) v_240 = cdrerror(v_240); else
    v_240 = cdr(v_240);
    v_240 = cons(v_241, v_240);
    env = stack[-11];
    v_240 = ncons(v_240);
    env = stack[-11];
    stack[-1] = v_240;
    stack[-2] = v_240;
v_197:
    v_240 = stack[-3];
    if (!car_legal(v_240)) v_240 = cdrerror(v_240); else
    v_240 = cdr(v_240);
    stack[-3] = v_240;
    v_240 = stack[-3];
    if (v_240 == nil) goto v_219;
    else goto v_220;
v_219:
    v_240 = stack[-2];
    goto v_196;
v_220:
    stack[0] = stack[-1];
    v_240 = stack[-3];
    if (!car_legal(v_240)) v_240 = carerror(v_240); else
    v_240 = car(v_240);
    v_241 = v_240;
    if (!car_legal(v_241)) v_241 = carerror(v_241); else
    v_241 = car(v_241);
    if (!car_legal(v_240)) v_240 = cdrerror(v_240); else
    v_240 = cdr(v_240);
    if (!car_legal(v_240)) v_240 = cdrerror(v_240); else
    v_240 = cdr(v_240);
    v_240 = cons(v_241, v_240);
    env = stack[-11];
    v_240 = ncons(v_240);
    env = stack[-11];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_240);
    v_240 = stack[-1];
    if (!car_legal(v_240)) v_240 = cdrerror(v_240); else
    v_240 = cdr(v_240);
    stack[-1] = v_240;
    goto v_197;
v_196:
    v_241 = v_240;
    v_240 = stack[-5];
    return cons(v_241, v_240);
    return onevalue(v_240);
}



// Code for lambda_er1ez819f9yx2

static LispObject CC_lambda_er1ez819f9yx2(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_36, v_37;
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
    v_36 = stack[-1];
    if (!car_legal(v_36)) v_36 = carerror(v_36); else
    v_36 = car(v_36);
    if (!car_legal(v_36)) v_37 = carerror(v_36); else
    v_37 = car(v_36);
    v_36 = stack[0];
    if (!car_legal(v_36)) v_36 = carerror(v_36); else
    v_36 = car(v_36);
    if (!car_legal(v_36)) v_36 = carerror(v_36); else
    v_36 = car(v_36);
    v_36 = static_cast<LispObject>(lessp2(v_37, v_36));
    v_36 = v_36 ? lisp_true : nil;
    env = stack[-2];
    if (v_36 == nil) goto v_8;
    v_36 = lisp_true;
    goto v_6;
v_8:
    v_36 = stack[0];
    if (!car_legal(v_36)) v_36 = carerror(v_36); else
    v_36 = car(v_36);
    if (!car_legal(v_36)) v_37 = carerror(v_36); else
    v_37 = car(v_36);
    v_36 = stack[-1];
    if (!car_legal(v_36)) v_36 = carerror(v_36); else
    v_36 = car(v_36);
    if (!car_legal(v_36)) v_36 = carerror(v_36); else
    v_36 = car(v_36);
    v_36 = static_cast<LispObject>(lessp2(v_37, v_36));
    v_36 = v_36 ? lisp_true : nil;
    if (v_36 == nil) goto v_18;
    v_36 = nil;
    goto v_6;
v_18:
    v_36 = stack[-1];
    if (!car_legal(v_36)) v_36 = carerror(v_36); else
    v_36 = car(v_36);
    if (!car_legal(v_36)) v_37 = cdrerror(v_36); else
    v_37 = cdr(v_36);
    v_36 = stack[0];
    if (!car_legal(v_36)) v_36 = carerror(v_36); else
    v_36 = car(v_36);
    if (!car_legal(v_36)) v_36 = cdrerror(v_36); else
    v_36 = cdr(v_36);
        return Lleq_2(nil, v_37, v_36);
    v_36 = nil;
v_6:
    return onevalue(v_36);
}



// Code for cde_position

static LispObject CC_cde_position(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_18, v_19, v_20, v_21;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_20 = v_3;
    v_21 = v_2;
// end of prologue
    v_19 = v_21;
    v_18 = v_20;
    v_18 = Lmember(nil, v_19, v_18);
    if (v_18 == nil) goto v_8;
    v_18 = v_21;
    v_19 = v_20;
    {
        LispObject fn = basic_elt(env, 1); // cde_position2
        return (*qfn2(fn))(fn, v_18, v_19);
    }
v_8:
    v_18 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_6;
    v_18 = nil;
v_6:
    return onevalue(v_18);
}



// Code for lto_sgnchg1

static LispObject CC_lto_sgnchg1(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_40;
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
v_6:
    v_40 = stack[0];
    if (v_40 == nil) goto v_13;
    else goto v_14;
v_13:
    v_40 = lisp_true;
    goto v_12;
v_14:
    v_40 = stack[0];
    if (!car_legal(v_40)) v_40 = cdrerror(v_40); else
    v_40 = cdr(v_40);
    v_40 = (v_40 == nil ? lisp_true : nil);
    goto v_12;
    v_40 = nil;
v_12:
    if (v_40 == nil) goto v_10;
    v_40 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_5;
v_10:
    v_40 = stack[0];
    if (!car_legal(v_40)) v_40 = carerror(v_40); else
    v_40 = car(v_40);
    {   LispObject fn = basic_elt(env, 1); // sgn
    stack[-1] = (*qfn1(fn))(fn, v_40);
    }
    env = stack[-2];
    v_40 = stack[0];
    if (!car_legal(v_40)) v_40 = cdrerror(v_40); else
    v_40 = cdr(v_40);
    if (!car_legal(v_40)) v_40 = carerror(v_40); else
    v_40 = car(v_40);
    {   LispObject fn = basic_elt(env, 1); // sgn
    v_40 = (*qfn1(fn))(fn, v_40);
    }
    env = stack[-2];
    if (stack[-1] == v_40) goto v_23;
    else goto v_24;
v_23:
    v_40 = stack[0];
    if (!car_legal(v_40)) v_40 = cdrerror(v_40); else
    v_40 = cdr(v_40);
    stack[0] = v_40;
    goto v_6;
v_24:
    v_40 = stack[0];
    if (!car_legal(v_40)) v_40 = cdrerror(v_40); else
    v_40 = cdr(v_40);
    {   LispObject fn = basic_elt(env, 0); // lto_sgnchg1
    v_40 = (*qfn1(fn))(fn, v_40);
    }
    return add1(v_40);
    v_40 = nil;
v_5:
    return onevalue(v_40);
}



// Code for cl_pnf

static LispObject CC_cl_pnf(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_7;
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
    v_7 = v_2;
// end of prologue
    {   LispObject fn = basic_elt(env, 1); // rl_nnf
    v_7 = (*qfn1(fn))(fn, v_7);
    }
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // cl_pnf1
        return (*qfn1(fn))(fn, v_7);
    }
}



// Code for mri_prepat

static LispObject CC_mri_prepat(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_7;
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
    v_7 = v_2;
// end of prologue
    {   LispObject fn = basic_elt(env, 1); // mri_2pasfat
    v_7 = (*qfn1(fn))(fn, v_7);
    }
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // pasf_prepat
        return (*qfn1(fn))(fn, v_7);
    }
}



// Code for vdp_make

static LispObject CC_vdp_make(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_13, v_14, v_15;
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
    v_13 = v_4;
    v_14 = v_3;
    v_15 = v_2;
// end of prologue
    stack[-2] = basic_elt(env, 1); // vdp
    stack[-1] = v_14;
    stack[0] = v_15;
    v_14 = v_13;
    v_13 = nil;
    v_13 = list2(v_14, v_13);
    {
        LispObject v_19 = stack[-2];
        LispObject v_20 = stack[-1];
        LispObject v_21 = stack[0];
        return list3star(v_19, v_20, v_21, v_13);
    }
}



// Code for max!-degree

static LispObject CC_maxKdegree(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_53, v_54, v_55, v_56;
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
    v_54 = v_3;
    v_55 = v_2;
// end of prologue
v_8:
    v_53 = v_55;
    if (!consp(v_53)) goto v_15;
    else goto v_16;
v_15:
    v_53 = lisp_true;
    goto v_14;
v_16:
    v_53 = v_55;
    if (!car_legal(v_53)) v_53 = carerror(v_53); else
    v_53 = car(v_53);
    v_53 = (consp(v_53) ? nil : lisp_true);
    goto v_14;
    v_53 = nil;
v_14:
    if (v_53 == nil) goto v_12;
    v_53 = v_54;
    goto v_7;
v_12:
    v_56 = v_54;
    v_53 = v_55;
    if (!car_legal(v_53)) v_53 = carerror(v_53); else
    v_53 = car(v_53);
    if (!car_legal(v_53)) v_53 = carerror(v_53); else
    v_53 = car(v_53);
    if (!car_legal(v_53)) v_53 = cdrerror(v_53); else
    v_53 = cdr(v_53);
    if ((static_cast<std::intptr_t>(v_56) > static_cast<std::intptr_t>(v_53))) goto v_25;
    else goto v_26;
v_25:
    v_53 = v_55;
    if (!car_legal(v_53)) v_53 = cdrerror(v_53); else
    v_53 = cdr(v_53);
    stack[0] = v_53;
    v_53 = v_55;
    if (!car_legal(v_53)) v_53 = carerror(v_53); else
    v_53 = car(v_53);
    if (!car_legal(v_53)) v_53 = cdrerror(v_53); else
    v_53 = cdr(v_53);
    {   LispObject fn = basic_elt(env, 0); // max!-degree
    v_53 = (*qfn2(fn))(fn, v_53, v_54);
    }
    env = stack[-1];
    v_54 = v_53;
    v_53 = stack[0];
    v_55 = v_53;
    goto v_8;
v_26:
    v_53 = v_55;
    if (!car_legal(v_53)) v_53 = cdrerror(v_53); else
    v_53 = cdr(v_53);
    stack[0] = v_53;
    v_53 = v_55;
    if (!car_legal(v_53)) v_53 = carerror(v_53); else
    v_53 = car(v_53);
    if (!car_legal(v_53)) v_53 = cdrerror(v_53); else
    v_53 = cdr(v_53);
    v_54 = v_55;
    if (!car_legal(v_54)) v_54 = carerror(v_54); else
    v_54 = car(v_54);
    if (!car_legal(v_54)) v_54 = carerror(v_54); else
    v_54 = car(v_54);
    if (!car_legal(v_54)) v_54 = cdrerror(v_54); else
    v_54 = cdr(v_54);
    {   LispObject fn = basic_elt(env, 0); // max!-degree
    v_53 = (*qfn2(fn))(fn, v_53, v_54);
    }
    env = stack[-1];
    v_54 = v_53;
    v_53 = stack[0];
    v_55 = v_53;
    goto v_8;
    v_53 = nil;
v_7:
    return onevalue(v_53);
}



// Code for binaryrd

static LispObject CC_binaryrd(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_14, v_15, v_16;
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// end of prologue
    {   LispObject fn = basic_elt(env, 1); // mathml
    v_14 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
    stack[-1] = v_14;
    {   LispObject fn = basic_elt(env, 1); // mathml
    v_14 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
    stack[0] = v_14;
    {   LispObject fn = basic_elt(env, 2); // lex
    v_14 = (*qfn0(fn))(fn);
    }
    v_16 = stack[-1];
    v_15 = stack[0];
    v_14 = nil;
    return list2star(v_16, v_15, v_14);
    return onevalue(v_14);
}



// Code for rationalizesq

static LispObject CC_rationalizesq(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_85, v_86;
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
    stack_popper stack_popper_var(6);
// copy arguments values to proper place
    stack[-3] = v_2;
// end of prologue
// Binding !*structure
// FLUIDBIND: reloadenv=5 litvec-offset=1 saveloc=4
{   bind_fluid_stack bind_fluid_var(-5, 1, -4);
    setvalue(basic_elt(env, 1), nil); // !*structure
// Binding !*sub2
// FLUIDBIND: reloadenv=5 litvec-offset=2 saveloc=2
{   bind_fluid_stack bind_fluid_var(-5, 2, -2);
    setvalue(basic_elt(env, 2), nil); // !*sub2
    v_86 = qvalue(basic_elt(env, 3)); // dmode!*
    v_85 = basic_elt(env, 4); // rationalizefn
    v_85 = get(v_86, v_85);
    env = stack[-5];
    stack[0] = v_85;
    if (v_85 == nil) goto v_15;
    v_86 = stack[0];
    v_85 = stack[-3];
    v_85 = Lapply1(nil, v_86, v_85);
    env = stack[-5];
    stack[-3] = v_85;
    goto v_13;
v_15:
v_13:
    v_86 = basic_elt(env, 5); // (i 2 (nil . t) -1 nil)
    v_85 = qvalue(basic_elt(env, 6)); // powlis!*
    v_85 = cons(v_86, v_85);
    env = stack[-5];
    setvalue(basic_elt(env, 6), v_85); // powlis!*
    v_85 = stack[-3];
    {   LispObject fn = basic_elt(env, 9); // subs2q
    v_85 = (*qfn1(fn))(fn, v_85);
    }
    env = stack[-5];
    stack[-1] = v_85;
    v_85 = qvalue(basic_elt(env, 6)); // powlis!*
    if (!car_legal(v_85)) v_85 = cdrerror(v_85); else
    v_85 = cdr(v_85);
    setvalue(basic_elt(env, 6), v_85); // powlis!*
    v_85 = stack[-1];
    if (!car_legal(v_85)) v_85 = cdrerror(v_85); else
    v_85 = cdr(v_85);
    if (!consp(v_85)) goto v_35;
    else goto v_36;
v_35:
    v_85 = lisp_true;
    goto v_34;
v_36:
    v_85 = stack[-1];
    if (!car_legal(v_85)) v_85 = cdrerror(v_85); else
    v_85 = cdr(v_85);
    if (!car_legal(v_85)) v_85 = carerror(v_85); else
    v_85 = car(v_85);
    v_85 = (consp(v_85) ? nil : lisp_true);
    goto v_34;
    v_85 = nil;
v_34:
    if (v_85 == nil) goto v_32;
    v_85 = stack[-1];
    goto v_30;
v_32:
    v_85 = stack[-1];
    if (!car_legal(v_85)) v_85 = cdrerror(v_85); else
    v_85 = cdr(v_85);
    {   LispObject fn = basic_elt(env, 10); // rationalizef
    v_86 = (*qfn1(fn))(fn, v_85);
    }
    env = stack[-5];
    stack[0] = v_86;
    v_85 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_86 == v_85) goto v_48;
    v_85 = stack[-1];
    if (!car_legal(v_85)) v_86 = carerror(v_85); else
    v_86 = car(v_85);
    v_85 = stack[0];
    {   LispObject fn = basic_elt(env, 11); // multf
    stack[-3] = (*qfn2(fn))(fn, v_86, v_85);
    }
    env = stack[-5];
    v_85 = stack[-1];
    if (!car_legal(v_85)) v_86 = cdrerror(v_85); else
    v_86 = cdr(v_85);
    v_85 = stack[0];
    {   LispObject fn = basic_elt(env, 11); // multf
    v_85 = (*qfn2(fn))(fn, v_86, v_85);
    }
    env = stack[-5];
    v_85 = cons(stack[-3], v_85);
    env = stack[-5];
    stack[-1] = v_85;
    v_85 = qvalue(basic_elt(env, 7)); // !*algint
    if (v_85 == nil) goto v_68;
    else goto v_69;
v_68:
    v_85 = qvalue(basic_elt(env, 8)); // !*rationalize
    v_85 = (v_85 == nil ? lisp_true : nil);
    goto v_67;
v_69:
    v_85 = nil;
    goto v_67;
    v_85 = nil;
v_67:
    if (v_85 == nil) goto v_65;
    v_85 = stack[-1];
    {   LispObject fn = basic_elt(env, 12); // gcdchk
    v_85 = (*qfn1(fn))(fn, v_85);
    }
    env = stack[-5];
    stack[-1] = v_85;
    goto v_63;
v_65:
v_63:
    v_85 = stack[-1];
    {   LispObject fn = basic_elt(env, 9); // subs2q
    v_85 = (*qfn1(fn))(fn, v_85);
    }
    goto v_30;
v_48:
    v_85 = stack[-3];
    goto v_30;
    v_85 = nil;
v_30:
    ;}  // end of a binding scope
    ;}  // end of a binding scope
    return onevalue(v_85);
}



// Code for delhisto

static LispObject CC_delhisto(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_85, v_86, v_87;
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
    stack[0] = qvalue(basic_elt(env, 1)); // codmat
    v_86 = qvalue(basic_elt(env, 2)); // maxvar
    v_85 = stack[-2];
    v_85 = plus2(v_86, v_85);
    env = stack[-4];
    v_86 = Lgetv(nil, stack[0], v_85);
    env = stack[-4];
    v_85 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_85 = Lgetv(nil, v_86, v_85);
    env = stack[-4];
    if (v_85 == nil) goto v_7;
    v_86 = stack[-2];
    v_85 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_85 = static_cast<LispObject>(geq2(v_86, v_85));
    v_85 = v_85 ? lisp_true : nil;
    env = stack[-4];
    if (v_85 == nil) goto v_7;
    stack[0] = qvalue(basic_elt(env, 1)); // codmat
    v_86 = qvalue(basic_elt(env, 2)); // maxvar
    v_85 = stack[-2];
    v_85 = plus2(v_86, v_85);
    env = stack[-4];
    v_86 = Lgetv(nil, stack[0], v_85);
    env = stack[-4];
    v_85 = static_cast<LispObject>(112)+TAG_FIXNUM; // 7
    v_85 = Lgetv(nil, v_86, v_85);
    env = stack[-4];
    if (!car_legal(v_85)) v_85 = carerror(v_85); else
    v_85 = car(v_85);
    stack[-3] = v_85;
    stack[0] = qvalue(basic_elt(env, 1)); // codmat
    v_86 = qvalue(basic_elt(env, 2)); // maxvar
    v_85 = stack[-2];
    v_85 = plus2(v_86, v_85);
    env = stack[-4];
    v_86 = Lgetv(nil, stack[0], v_85);
    env = stack[-4];
    v_85 = static_cast<LispObject>(112)+TAG_FIXNUM; // 7
    v_85 = Lgetv(nil, v_86, v_85);
    env = stack[-4];
    if (!car_legal(v_85)) v_85 = cdrerror(v_85); else
    v_85 = cdr(v_85);
    stack[-1] = v_85;
    stack[0] = qvalue(basic_elt(env, 1)); // codmat
    v_86 = qvalue(basic_elt(env, 2)); // maxvar
    v_85 = stack[-2];
    v_85 = plus2(v_86, v_85);
    env = stack[-4];
    v_86 = Lgetv(nil, stack[0], v_85);
    env = stack[-4];
    v_85 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_85 = Lgetv(nil, v_86, v_85);
    env = stack[-4];
    if (!car_legal(v_85)) v_86 = cdrerror(v_85); else
    v_86 = cdr(v_85);
    v_85 = static_cast<LispObject>(3200)+TAG_FIXNUM; // 200
    {   LispObject fn = basic_elt(env, 4); // min
    v_85 = (*qfn2(fn))(fn, v_86, v_85);
    }
    env = stack[-4];
    v_86 = stack[-3];
    if (v_86 == nil) goto v_54;
    stack[0] = qvalue(basic_elt(env, 1)); // codmat
    v_86 = qvalue(basic_elt(env, 2)); // maxvar
    v_85 = stack[-3];
    v_85 = plus2(v_86, v_85);
    env = stack[-4];
    v_86 = Lgetv(nil, stack[0], v_85);
    env = stack[-4];
    v_85 = static_cast<LispObject>(112)+TAG_FIXNUM; // 7
    v_86 = Lgetv(nil, v_86, v_85);
    env = stack[-4];
    v_85 = stack[-1];
    if (!car_legal(v_86)) rplacd_fails(v_86);
    setcdr(v_86, v_85);
    goto v_52;
v_54:
    v_87 = qvalue(basic_elt(env, 3)); // codhisto
    v_86 = v_85;
    v_85 = stack[-1];
    v_85 = Lputv(nil, v_87, v_86, v_85);
    env = stack[-4];
    goto v_52;
v_52:
    v_85 = stack[-1];
    if (v_85 == nil) goto v_74;
    stack[0] = qvalue(basic_elt(env, 1)); // codmat
    v_86 = qvalue(basic_elt(env, 2)); // maxvar
    v_85 = stack[-1];
    v_85 = plus2(v_86, v_85);
    env = stack[-4];
    v_86 = Lgetv(nil, stack[0], v_85);
    env = stack[-4];
    v_85 = static_cast<LispObject>(112)+TAG_FIXNUM; // 7
    v_86 = Lgetv(nil, v_86, v_85);
    v_85 = stack[-3];
    if (!car_legal(v_86)) rplaca_fails(v_86);
    setcar(v_86, v_85);
    goto v_72;
v_74:
v_72:
    v_85 = nil;
    goto v_5;
v_7:
    v_85 = nil;
v_5:
    return onevalue(v_85);
}



// Code for quoteequation

static LispObject CC_quoteequation(LispObject env,
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
    v_5 = basic_elt(env, 1); // equation
    return onevalue(v_5);
}



// Code for gvarlis1

static LispObject CC_gvarlis1(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_38 = stack[-1];
    if (v_38 == nil) goto v_14;
    else goto v_15;
v_14:
    goto v_10;
v_15:
    v_38 = stack[-1];
    if (!car_legal(v_38)) v_39 = carerror(v_38); else
    v_39 = car(v_38);
    v_38 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // gvar1
    v_39 = (*qfn2(fn))(fn, v_39, v_38);
    }
    env = stack[-3];
    v_38 = stack[-2];
    v_38 = cons(v_39, v_38);
    env = stack[-3];
    stack[-2] = v_38;
    v_38 = stack[-1];
    if (!car_legal(v_38)) v_38 = cdrerror(v_38); else
    v_38 = cdr(v_38);
    stack[-1] = v_38;
    goto v_9;
v_10:
    v_38 = stack[0];
    v_39 = v_38;
v_11:
    v_38 = stack[-2];
    if (v_38 == nil) goto v_28;
    else goto v_29;
v_28:
    v_38 = v_39;
    goto v_8;
v_29:
    v_38 = stack[-2];
    v_38 = car(v_38);
    {   LispObject fn = basic_elt(env, 2); // union
    v_38 = (*qfn2(fn))(fn, v_38, v_39);
    }
    env = stack[-3];
    v_39 = v_38;
    v_38 = stack[-2];
    v_38 = cdr(v_38);
    stack[-2] = v_38;
    goto v_11;
v_8:
    return onevalue(v_38);
}



// Code for bcneg

static LispObject CC_bcneg(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_26 = qvalue(basic_elt(env, 1)); // !*grmod!*
    if (v_26 == nil) goto v_7;
    v_27 = stack[0];
    v_26 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_26 = Leqn_2(nil, v_27, v_26);
    env = stack[-1];
    if (v_26 == nil) goto v_12;
    v_26 = stack[0];
    goto v_10;
v_12:
    v_27 = qvalue(basic_elt(env, 2)); // current!-modulus
    v_26 = stack[0];
    v_26 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_27) - static_cast<std::uintptr_t>(v_26) + TAG_FIXNUM);
    goto v_10;
    v_26 = nil;
v_10:
    goto v_5;
v_7:
    v_26 = stack[0];
    {
        LispObject fn = basic_elt(env, 3); // negsq
        return (*qfn1(fn))(fn, v_26);
    }
    v_26 = nil;
v_5:
    return onevalue(v_26);
}



// Code for physopsimp

static LispObject CC_physopsimp(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_339, v_340, v_341;
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(9);
// copy arguments values to proper place
    stack[-6] = v_2;
// end of prologue
    stack[-4] = nil;
    v_339 = stack[-6];
    if (symbolp(v_339)) goto v_13;
    else goto v_14;
v_13:
    v_339 = stack[-6];
    goto v_10;
v_14:
    v_339 = stack[-6];
    if (!car_legal(v_339)) v_339 = carerror(v_339); else
    v_339 = car(v_339);
    stack[-7] = v_339;
    v_339 = stack[-6];
    if (!car_legal(v_339)) v_339 = cdrerror(v_339); else
    v_339 = cdr(v_339);
    stack[-5] = v_339;
    v_339 = stack[-5];
    if (v_339 == nil) goto v_29;
    else goto v_30;
v_29:
    v_339 = nil;
    goto v_23;
v_30:
    v_339 = stack[-5];
    if (!car_legal(v_339)) v_339 = carerror(v_339); else
    v_339 = car(v_339);
    stack[0] = v_339;
    v_339 = stack[0];
    if (symbolp(v_339)) goto v_41;
    else goto v_40;
v_41:
    v_339 = stack[0];
    {   LispObject fn = basic_elt(env, 5); // isanindex
    v_339 = (*qfn1(fn))(fn, v_339);
    }
    env = stack[-8];
    if (v_339 == nil) goto v_44;
    else goto v_43;
v_44:
    v_339 = stack[0];
    {   LispObject fn = basic_elt(env, 6); // isavarindex
    v_339 = (*qfn1(fn))(fn, v_339);
    }
    env = stack[-8];
    if (v_339 == nil) goto v_47;
    else goto v_43;
v_47:
    goto v_40;
v_43:
    v_339 = stack[0];
    goto v_38;
v_40:
    v_339 = stack[0];
    {   LispObject fn = basic_elt(env, 7); // physopsm!*
    v_339 = (*qfn1(fn))(fn, v_339);
    }
    env = stack[-8];
    goto v_38;
    v_339 = nil;
v_38:
    v_339 = ncons(v_339);
    env = stack[-8];
    stack[-2] = v_339;
    stack[-3] = v_339;
v_24:
    v_339 = stack[-5];
    if (!car_legal(v_339)) v_339 = cdrerror(v_339); else
    v_339 = cdr(v_339);
    stack[-5] = v_339;
    v_339 = stack[-5];
    if (v_339 == nil) goto v_59;
    else goto v_60;
v_59:
    v_339 = stack[-3];
    goto v_23;
v_60:
    stack[-1] = stack[-2];
    v_339 = stack[-5];
    if (!car_legal(v_339)) v_339 = carerror(v_339); else
    v_339 = car(v_339);
    stack[0] = v_339;
    v_339 = stack[0];
    if (symbolp(v_339)) goto v_72;
    else goto v_71;
v_72:
    v_339 = stack[0];
    {   LispObject fn = basic_elt(env, 5); // isanindex
    v_339 = (*qfn1(fn))(fn, v_339);
    }
    env = stack[-8];
    if (v_339 == nil) goto v_75;
    else goto v_74;
v_75:
    v_339 = stack[0];
    {   LispObject fn = basic_elt(env, 6); // isavarindex
    v_339 = (*qfn1(fn))(fn, v_339);
    }
    env = stack[-8];
    if (v_339 == nil) goto v_78;
    else goto v_74;
v_78:
    goto v_71;
v_74:
    v_339 = stack[0];
    goto v_69;
v_71:
    v_339 = stack[0];
    {   LispObject fn = basic_elt(env, 7); // physopsm!*
    v_339 = (*qfn1(fn))(fn, v_339);
    }
    env = stack[-8];
    goto v_69;
    v_339 = nil;
v_69:
    v_339 = ncons(v_339);
    env = stack[-8];
    if (!car_legal(stack[-1])) rplacd_fails(stack[-1]);
    setcdr(stack[-1], v_339);
    v_339 = stack[-2];
    if (!car_legal(v_339)) v_339 = cdrerror(v_339); else
    v_339 = cdr(v_339);
    stack[-2] = v_339;
    goto v_24;
v_23:
    stack[0] = v_339;
    stack[-5] = stack[-7];
    v_339 = stack[0];
    stack[-3] = v_339;
    v_339 = stack[-3];
    if (v_339 == nil) goto v_100;
    else goto v_101;
v_100:
    v_339 = nil;
    goto v_95;
v_101:
    v_339 = stack[-3];
    if (!car_legal(v_339)) v_339 = carerror(v_339); else
    v_339 = car(v_339);
    v_341 = v_339;
    v_340 = v_341;
    v_339 = basic_elt(env, 1); // !*sq
    if (!consp(v_340)) goto v_111;
    v_340 = car(v_340);
    if (v_340 == v_339) goto v_110;
    else goto v_111;
v_110:
    v_339 = v_341;
    if (!car_legal(v_339)) v_339 = cdrerror(v_339); else
    v_339 = cdr(v_339);
    if (!car_legal(v_339)) v_339 = carerror(v_339); else
    v_339 = car(v_339);
    {   LispObject fn = basic_elt(env, 8); // prepsqxx
    v_339 = (*qfn1(fn))(fn, v_339);
    }
    env = stack[-8];
    goto v_109;
v_111:
    v_339 = v_341;
    goto v_109;
    v_339 = nil;
v_109:
    v_339 = ncons(v_339);
    env = stack[-8];
    stack[-1] = v_339;
    stack[-2] = v_339;
v_96:
    v_339 = stack[-3];
    if (!car_legal(v_339)) v_339 = cdrerror(v_339); else
    v_339 = cdr(v_339);
    stack[-3] = v_339;
    v_339 = stack[-3];
    if (v_339 == nil) goto v_126;
    else goto v_127;
v_126:
    v_339 = stack[-2];
    goto v_95;
v_127:
    stack[0] = stack[-1];
    v_339 = stack[-3];
    if (!car_legal(v_339)) v_339 = carerror(v_339); else
    v_339 = car(v_339);
    v_341 = v_339;
    v_340 = v_341;
    v_339 = basic_elt(env, 1); // !*sq
    if (!consp(v_340)) goto v_138;
    v_340 = car(v_340);
    if (v_340 == v_339) goto v_137;
    else goto v_138;
v_137:
    v_339 = v_341;
    if (!car_legal(v_339)) v_339 = cdrerror(v_339); else
    v_339 = cdr(v_339);
    if (!car_legal(v_339)) v_339 = carerror(v_339); else
    v_339 = car(v_339);
    {   LispObject fn = basic_elt(env, 8); // prepsqxx
    v_339 = (*qfn1(fn))(fn, v_339);
    }
    env = stack[-8];
    goto v_136;
v_138:
    v_339 = v_341;
    goto v_136;
    v_339 = nil;
v_136:
    v_339 = ncons(v_339);
    env = stack[-8];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_339);
    v_339 = stack[-1];
    if (!car_legal(v_339)) v_339 = cdrerror(v_339); else
    v_339 = cdr(v_339);
    stack[-1] = v_339;
    goto v_96;
v_95:
    v_339 = cons(stack[-5], v_339);
    env = stack[-8];
    stack[-6] = v_339;
    v_339 = stack[-6];
    {   LispObject fn = basic_elt(env, 9); // opmtch!*
    v_339 = (*qfn1(fn))(fn, v_339);
    }
    env = stack[-8];
    stack[0] = v_339;
    if (v_339 == nil) goto v_155;
    v_339 = stack[0];
    goto v_10;
v_155:
    v_339 = stack[-6];
    {   LispObject fn = basic_elt(env, 10); // scalopp
    v_339 = (*qfn1(fn))(fn, v_339);
    }
    env = stack[-8];
    if (v_339 == nil) goto v_162;
    v_339 = stack[-7];
    {   LispObject fn = basic_elt(env, 11); // tensopp
    v_339 = (*qfn1(fn))(fn, v_339);
    }
    env = stack[-8];
    if (v_339 == nil) goto v_162;
    v_340 = stack[-7];
    v_339 = basic_elt(env, 2); // tensdimen
    v_339 = get(v_340, v_339);
    env = stack[-8];
    stack[-5] = v_339;
    v_339 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-3] = v_339;
    v_340 = stack[-5];
    v_339 = stack[-3];
    v_339 = difference2(v_340, v_339);
    env = stack[-8];
    v_339 = Lminusp(nil, v_339);
    env = stack[-8];
    if (v_339 == nil) goto v_182;
    v_339 = nil;
    goto v_176;
v_182:
    v_339 = stack[-6];
    if (!car_legal(v_339)) v_340 = cdrerror(v_339); else
    v_340 = cdr(v_339);
    v_339 = stack[-3];
    {   LispObject fn = basic_elt(env, 12); // nth
    v_339 = (*qfn2(fn))(fn, v_340, v_339);
    }
    env = stack[-8];
    v_339 = ncons(v_339);
    env = stack[-8];
    stack[-1] = v_339;
    stack[-2] = v_339;
v_177:
    v_339 = stack[-3];
    v_339 = add1(v_339);
    env = stack[-8];
    stack[-3] = v_339;
    v_340 = stack[-5];
    v_339 = stack[-3];
    v_339 = difference2(v_340, v_339);
    env = stack[-8];
    v_339 = Lminusp(nil, v_339);
    env = stack[-8];
    if (v_339 == nil) goto v_198;
    v_339 = stack[-2];
    goto v_176;
v_198:
    stack[0] = stack[-1];
    v_339 = stack[-6];
    if (!car_legal(v_339)) v_340 = cdrerror(v_339); else
    v_340 = cdr(v_339);
    v_339 = stack[-3];
    {   LispObject fn = basic_elt(env, 12); // nth
    v_339 = (*qfn2(fn))(fn, v_340, v_339);
    }
    env = stack[-8];
    v_339 = ncons(v_339);
    env = stack[-8];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_339);
    v_339 = stack[-1];
    if (!car_legal(v_339)) v_339 = cdrerror(v_339); else
    v_339 = cdr(v_339);
    stack[-1] = v_339;
    goto v_177;
v_176:
    stack[0] = v_339;
    v_339 = stack[-6];
    if (!car_legal(v_339)) v_339 = cdrerror(v_339); else
    v_339 = cdr(v_339);
    v_340 = Llength(nil, v_339);
    env = stack[-8];
    v_339 = stack[-5];
    v_339 = static_cast<LispObject>(greaterp2(v_340, v_339));
    v_339 = v_339 ? lisp_true : nil;
    env = stack[-8];
    if (v_339 == nil) goto v_216;
    v_339 = stack[-6];
    if (!car_legal(v_339)) stack[-1] = cdrerror(v_339); else
    stack[-1] = cdr(v_339);
    v_339 = stack[-5];
    v_339 = add1(v_339);
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 13); // pnth
    v_339 = (*qfn2(fn))(fn, stack[-1], v_339);
    }
    env = stack[-8];
    stack[-5] = v_339;
    goto v_214;
v_216:
    v_339 = nil;
    stack[-5] = v_339;
    goto v_214;
v_214:
    v_339 = stack[-7];
    if (!symbolp(v_339)) v_339 = nil;
    else { v_339 = qfastgets(v_339);
           if (v_339 != nil) { v_339 = elt(v_339, 43); // symmetric
#ifdef RECORD_GET
             if (v_339 == SPID_NOPROP)
                record_get(elt(fastget_names, 43), 0),
                v_339 = nil;
             else record_get(elt(fastget_names, 43), 1),
                v_339 = lisp_true; }
           else record_get(elt(fastget_names, 43), 0); }
#else
             if (v_339 == SPID_NOPROP) v_339 = nil; else v_339 = lisp_true; }}
#endif
    if (v_339 == nil) goto v_233;
    stack[-1] = stack[-7];
    v_339 = stack[0];
    {   LispObject fn = basic_elt(env, 14); // ordn
    v_339 = (*qfn1(fn))(fn, v_339);
    }
    env = stack[-8];
    v_339 = cons(stack[-1], v_339);
    env = stack[-8];
    stack[-6] = v_339;
    goto v_231;
v_233:
    v_340 = stack[-7];
    v_339 = basic_elt(env, 3); // antisymmetric
    v_339 = Lflagp(nil, v_340, v_339);
    env = stack[-8];
    if (v_339 == nil) goto v_241;
    v_339 = stack[0];
    {   LispObject fn = basic_elt(env, 15); // repeats
    v_339 = (*qfn1(fn))(fn, v_339);
    }
    env = stack[-8];
    if (v_339 == nil) goto v_248;
    v_339 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_10;
v_248:
    v_339 = stack[0];
    {   LispObject fn = basic_elt(env, 14); // ordn
    v_340 = (*qfn1(fn))(fn, v_339);
    }
    env = stack[-8];
    stack[-1] = v_340;
    v_339 = stack[0];
    {   LispObject fn = basic_elt(env, 16); // permp
    v_339 = (*qfn2(fn))(fn, v_340, v_339);
    }
    env = stack[-8];
    if (v_339 == nil) goto v_252;
    else goto v_253;
v_252:
    v_339 = lisp_true;
    stack[-4] = v_339;
    goto v_246;
v_253:
v_246:
    v_339 = stack[-1];
    stack[0] = v_339;
    v_340 = stack[-7];
    v_339 = stack[0];
    v_339 = cons(v_340, v_339);
    env = stack[-8];
    stack[-6] = v_339;
    goto v_231;
v_241:
    v_340 = stack[-7];
    v_339 = stack[0];
    v_339 = cons(v_340, v_339);
    env = stack[-8];
    stack[-6] = v_339;
    goto v_231;
v_231:
    v_339 = stack[-5];
    if (v_339 == nil) goto v_271;
    v_340 = stack[-6];
    v_339 = stack[-5];
    v_339 = Lappend_2(nil, v_340, v_339);
    env = stack[-8];
    stack[-6] = v_339;
    goto v_269;
v_271:
v_269:
    v_339 = stack[-4];
    if (v_339 == nil) goto v_279;
    v_340 = basic_elt(env, 4); // minus
    v_339 = stack[-6];
    return list2(v_340, v_339);
v_279:
    v_339 = stack[-6];
    goto v_277;
    v_339 = nil;
v_277:
    goto v_10;
v_162:
    v_339 = stack[-6];
    {   LispObject fn = basic_elt(env, 17); // vecopp
    v_339 = (*qfn1(fn))(fn, v_339);
    }
    env = stack[-8];
    if (v_339 == nil) goto v_288;
    v_339 = stack[-6];
    {   LispObject fn = basic_elt(env, 18); // listp
    v_339 = (*qfn1(fn))(fn, v_339);
    }
    env = stack[-8];
    if (v_339 == nil) goto v_294;
    v_339 = stack[-6];
    if (!car_legal(v_339)) v_339 = cdrerror(v_339); else
    v_339 = cdr(v_339);
    if (!car_legal(v_339)) v_339 = carerror(v_339); else
    v_339 = car(v_339);
    {   LispObject fn = basic_elt(env, 19); // putanewindex!*
    v_339 = (*qfn1(fn))(fn, v_339);
    }
    goto v_292;
v_294:
v_292:
    v_339 = stack[-6];
    goto v_10;
v_288:
    v_339 = stack[-6];
    {   LispObject fn = basic_elt(env, 11); // tensopp
    v_339 = (*qfn1(fn))(fn, v_339);
    }
    env = stack[-8];
    if (v_339 == nil) goto v_303;
    v_339 = stack[-6];
    {   LispObject fn = basic_elt(env, 18); // listp
    v_339 = (*qfn1(fn))(fn, v_339);
    }
    env = stack[-8];
    if (v_339 == nil) goto v_309;
    v_339 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[0] = v_339;
v_315:
    v_339 = stack[-6];
    if (!car_legal(v_339)) v_339 = cdrerror(v_339); else
    v_339 = cdr(v_339);
    v_340 = Llength(nil, v_339);
    env = stack[-8];
    v_339 = stack[0];
    v_339 = difference2(v_340, v_339);
    env = stack[-8];
    v_339 = Lminusp(nil, v_339);
    env = stack[-8];
    if (v_339 == nil) goto v_320;
    goto v_314;
v_320:
    v_339 = stack[-6];
    if (!car_legal(v_339)) v_340 = cdrerror(v_339); else
    v_340 = cdr(v_339);
    v_339 = stack[0];
    {   LispObject fn = basic_elt(env, 12); // nth
    v_339 = (*qfn2(fn))(fn, v_340, v_339);
    }
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 19); // putanewindex!*
    v_339 = (*qfn1(fn))(fn, v_339);
    }
    env = stack[-8];
    v_339 = stack[0];
    v_339 = add1(v_339);
    env = stack[-8];
    stack[0] = v_339;
    goto v_315;
v_314:
    goto v_307;
v_309:
v_307:
    v_339 = stack[-6];
    goto v_10;
v_303:
    v_339 = stack[-6];
    goto v_10;
    v_339 = nil;
v_10:
    return onevalue(v_339);
}



// Code for ev!-denom2

static LispObject CC_evKdenom2(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_9, v_10;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_9 = v_3;
    v_10 = v_2;
// end of prologue
    if (!car_legal(v_10)) v_10 = carerror(v_10); else
    v_10 = car(v_10);
    {
        LispObject fn = basic_elt(env, 1); // ev!-edgeloop
        return (*qfn2(fn))(fn, v_10, v_9);
    }
}



// Code for copy!-tree

static LispObject CC_copyKtree(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_43, v_44;
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
    v_43 = stack[-2];
    if (v_43 == nil) goto v_6;
    else goto v_7;
v_6:
    v_43 = nil;
    goto v_5;
v_7:
    v_43 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_43 = Lmkvect(nil, v_43);
    env = stack[-4];
    stack[-3] = v_43;
    stack[-1] = stack[-3];
    stack[0] = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_44 = stack[-2];
    v_43 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_43 = Lgetv(nil, v_44, v_43);
    env = stack[-4];
    v_43 = Lputv(nil, stack[-1], stack[0], v_43);
    env = stack[-4];
    stack[-1] = stack[-3];
    stack[0] = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_44 = stack[-2];
    v_43 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_43 = Lgetv(nil, v_44, v_43);
    env = stack[-4];
    v_43 = Lputv(nil, stack[-1], stack[0], v_43);
    env = stack[-4];
    stack[-1] = stack[-3];
    stack[0] = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_44 = stack[-2];
    v_43 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_43 = Lgetv(nil, v_44, v_43);
    env = stack[-4];
    v_43 = Lputv(nil, stack[-1], stack[0], v_43);
    env = stack[-4];
    stack[-1] = stack[-3];
    stack[0] = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_44 = stack[-2];
    v_43 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_43 = Lgetv(nil, v_44, v_43);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 0); // copy!-tree
    v_43 = (*qfn1(fn))(fn, v_43);
    }
    env = stack[-4];
    v_43 = Lputv(nil, stack[-1], stack[0], v_43);
    v_43 = stack[-3];
    goto v_5;
    v_43 = nil;
v_5:
    return onevalue(v_43);
}



// Code for safe!-modrecip

static LispObject CC_safeKmodrecip(LispObject env,
                         LispObject v_2)
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
    v_43 = v_2;
// end of prologue
// Binding !*msg
// FLUIDBIND: reloadenv=3 litvec-offset=1 saveloc=1
{   bind_fluid_stack bind_fluid_var(-3, 1, -1);
    setvalue(basic_elt(env, 1), nil); // !*msg
// Binding !*protfg
// FLUIDBIND: reloadenv=3 litvec-offset=2 saveloc=0
{   bind_fluid_stack bind_fluid_var(-3, 2, 0);
    setvalue(basic_elt(env, 2), nil); // !*protfg
    v_42 = nil;
    setvalue(basic_elt(env, 1), v_42); // !*msg
    v_42 = lisp_true;
    setvalue(basic_elt(env, 2), v_42); // !*protfg
    v_44 = v_43;
    v_42 = basic_elt(env, 3); // !:mod!:
    if (!consp(v_44)) goto v_16;
    v_44 = car(v_44);
    if (v_44 == v_42) goto v_15;
    else goto v_16;
v_15:
    v_42 = v_43;
    if (!car_legal(v_42)) v_42 = cdrerror(v_42); else
    v_42 = cdr(v_42);
    v_43 = v_42;
    goto v_14;
v_16:
v_14:
    v_42 = basic_elt(env, 4); // general!-modular!-reciprocal
    v_44 = list2(v_42, v_43);
    env = stack[-3];
    v_43 = nil;
    v_42 = nil;
    {   LispObject fn = basic_elt(env, 6); // errorset
    v_42 = (*qfn3(fn))(fn, v_44, v_43, v_42);
    }
    env = stack[-3];
    stack[-2] = v_42;
    v_42 = nil;
    setvalue(basic_elt(env, 5), v_42); // erfg!*
    v_42 = stack[-2];
    {   LispObject fn = basic_elt(env, 7); // errorp
    v_42 = (*qfn1(fn))(fn, v_42);
    }
    if (v_42 == nil) goto v_32;
    v_42 = nil;
    goto v_30;
v_32:
    v_42 = stack[-2];
    if (!car_legal(v_42)) v_42 = carerror(v_42); else
    v_42 = car(v_42);
    goto v_30;
    v_42 = nil;
v_30:
    ;}  // end of a binding scope
    ;}  // end of a binding scope
    return onevalue(v_42);
}



// Code for setk_super_vectorfield

static LispObject CC_setk_super_vectorfield(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_110, v_111, v_112;
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
    stack[-3] = v_3;
    stack[0] = v_2;
// end of prologue
    v_110 = stack[0];
    v_111 = Llength(nil, v_110);
    env = stack[-5];
    v_110 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    if (v_111 == v_110) goto v_15;
    stack[-1] = stack[0];
    stack[-2] = stack[-3];
    stack[0] = nil;
    v_110 = lisp_true;
    v_110 = ncons(v_110);
    env = stack[-5];
    {
        LispObject v_118 = stack[-1];
        LispObject v_119 = stack[-2];
        LispObject v_120 = stack[0];
        LispObject fn = basic_elt(env, 5); // let2
        return (*qfn4up(fn))(fn, v_118, v_119, v_120, v_110);
    }
v_15:
    v_110 = stack[0];
    if (!car_legal(v_110)) v_110 = carerror(v_110); else
    v_110 = car(v_110);
    stack[-4] = v_110;
    v_110 = stack[0];
    if (!car_legal(v_110)) v_110 = cdrerror(v_110); else
    v_110 = cdr(v_110);
    if (!car_legal(v_110)) v_110 = carerror(v_110); else
    v_110 = car(v_110);
    stack[0] = v_110;
    v_110 = stack[0];
    if (!consp(v_110)) goto v_37;
    v_110 = stack[0];
    if (!car_legal(v_110)) v_111 = carerror(v_110); else
    v_111 = car(v_110);
    v_110 = basic_elt(env, 1); // ext
    if (v_111 == v_110) goto v_41;
    else goto v_42;
v_41:
    v_110 = stack[0];
    v_111 = Llength(nil, v_110);
    env = stack[-5];
    v_110 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_110 = (v_111 == v_110 ? lisp_true : nil);
    goto v_40;
v_42:
    v_110 = nil;
    goto v_40;
    v_110 = nil;
v_40:
    goto v_35;
v_37:
    v_110 = nil;
    goto v_35;
    v_110 = nil;
v_35:
    if (v_110 == nil) goto v_33;
    v_111 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_110 = stack[0];
    if (!car_legal(v_110)) v_110 = cdrerror(v_110); else
    v_110 = cdr(v_110);
    if (!car_legal(v_110)) v_110 = carerror(v_110); else
    v_110 = car(v_110);
    v_110 = list2(v_111, v_110);
    env = stack[-5];
    goto v_31;
v_33:
    v_111 = stack[-4];
    v_110 = basic_elt(env, 2); // variables
    v_110 = get(v_111, v_110);
    env = stack[-5];
    stack[-1] = v_110;
    v_110 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_112 = v_110;
v_69:
    v_110 = stack[-1];
    if (v_110 == nil) goto v_72;
    v_111 = stack[0];
    v_110 = stack[-1];
    if (!car_legal(v_110)) v_110 = carerror(v_110); else
    v_110 = car(v_110);
    if (equal(v_111, v_110)) goto v_72;
    goto v_73;
v_72:
    goto v_68;
v_73:
    v_110 = stack[-1];
    if (!car_legal(v_110)) v_110 = cdrerror(v_110); else
    v_110 = cdr(v_110);
    stack[-1] = v_110;
    v_110 = v_112;
    v_110 = add1(v_110);
    env = stack[-5];
    v_112 = v_110;
    goto v_69;
v_68:
    v_110 = stack[-1];
    if (v_110 == nil) goto v_87;
    else goto v_88;
v_87:
    stack[-2] = basic_elt(env, 3); // "SETK_SUPER_VECTORFIELD:"
    stack[-1] = stack[0];
    stack[0] = basic_elt(env, 4); // "not a valid variable for"
    v_111 = stack[-4];
    v_110 = lisp_true;
    v_110 = list2(v_111, v_110);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 6); // msgpri
    v_110 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_110);
    }
    env = stack[-5];
    goto v_86;
v_88:
    v_110 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_111 = v_112;
    v_110 = list2(v_110, v_111);
    env = stack[-5];
    goto v_86;
    v_110 = nil;
v_86:
    goto v_31;
    v_110 = nil;
v_31:
    v_111 = stack[-4];
    stack[-1] = cons(v_111, v_110);
    env = stack[-5];
    stack[-2] = stack[-3];
    stack[0] = nil;
    v_110 = lisp_true;
    v_110 = ncons(v_110);
    env = stack[-5];
    {
        LispObject v_121 = stack[-1];
        LispObject v_122 = stack[-2];
        LispObject v_123 = stack[0];
        LispObject fn = basic_elt(env, 5); // let2
        return (*qfn4up(fn))(fn, v_121, v_122, v_123, v_110);
    }
    return onevalue(v_110);
}



// Code for lalr_construct_fn

static LispObject CC_lalr_construct_fn(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_24, v_25, v_26;
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
    v_24 = basic_elt(env, 1); // g
    v_24 = Lgensym1(nil, v_24);
    env = stack[-4];
    stack[-3] = v_24;
    stack[0] = basic_elt(env, 2); // lambda
    v_24 = stack[-1];
    {   LispObject fn = basic_elt(env, 5); // lalr_make_arglist
    v_25 = (*qfn1(fn))(fn, v_24);
    }
    env = stack[-4];
    v_24 = stack[-2];
    v_24 = list2star(stack[0], v_25, v_24);
    env = stack[-4];
    stack[-2] = v_24;
    v_24 = nil;
// Binding !*pwrds
// FLUIDBIND: reloadenv=4 litvec-offset=3 saveloc=0
{   bind_fluid_stack bind_fluid_var(-4, 3, 0);
    setvalue(basic_elt(env, 3), v_24); // !*pwrds
    v_26 = stack[-3];
    v_25 = basic_elt(env, 4); // expr
    v_24 = stack[-2];
    {   LispObject fn = basic_elt(env, 6); // putd
    v_24 = (*qfn3(fn))(fn, v_26, v_25, v_24);
    }
    ;}  // end of a binding scope
    v_24 = stack[-3];
    return onevalue(v_24);
}



// Code for ctx_idl

static LispObject CC_ctx_idl(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_42;
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
    v_42 = v_2;
// end of prologue
    {   LispObject fn = basic_elt(env, 1); // ctx_ial
    v_42 = (*qfn1(fn))(fn, v_42);
    }
    env = stack[-4];
    stack[-3] = v_42;
    v_42 = stack[-3];
    if (v_42 == nil) goto v_14;
    else goto v_15;
v_14:
    v_42 = nil;
    goto v_8;
v_15:
    v_42 = stack[-3];
    if (!car_legal(v_42)) v_42 = carerror(v_42); else
    v_42 = car(v_42);
    if (!car_legal(v_42)) v_42 = carerror(v_42); else
    v_42 = car(v_42);
    v_42 = ncons(v_42);
    env = stack[-4];
    stack[-1] = v_42;
    stack[-2] = v_42;
v_9:
    v_42 = stack[-3];
    if (!car_legal(v_42)) v_42 = cdrerror(v_42); else
    v_42 = cdr(v_42);
    stack[-3] = v_42;
    v_42 = stack[-3];
    if (v_42 == nil) goto v_28;
    else goto v_29;
v_28:
    v_42 = stack[-2];
    goto v_8;
v_29:
    stack[0] = stack[-1];
    v_42 = stack[-3];
    if (!car_legal(v_42)) v_42 = carerror(v_42); else
    v_42 = car(v_42);
    if (!car_legal(v_42)) v_42 = carerror(v_42); else
    v_42 = car(v_42);
    v_42 = ncons(v_42);
    env = stack[-4];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_42);
    v_42 = stack[-1];
    if (!car_legal(v_42)) v_42 = cdrerror(v_42); else
    v_42 = cdr(v_42);
    stack[-1] = v_42;
    goto v_9;
v_8:
    return onevalue(v_42);
}



// Code for wupseudodivide

static LispObject CC_wupseudodivide(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_130, v_131;
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
    real_push(nil);
    stack_popper stack_popper_var(7);
// copy arguments values to proper place
    stack[-1] = v_4;
    stack[-3] = v_3;
    stack[-4] = v_2;
// end of prologue
    v_130 = stack[-4];
    stack[0] = v_130;
    v_130 = stack[-1];
    v_130 = ncons(v_130);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 1); // setkorder
    v_130 = (*qfn1(fn))(fn, v_130);
    }
    env = stack[-6];
    stack[-5] = v_130;
    v_130 = stack[-4];
    {   LispObject fn = basic_elt(env, 2); // reorder
    v_130 = (*qfn1(fn))(fn, v_130);
    }
    env = stack[-6];
    stack[-4] = v_130;
    v_130 = stack[-4];
    {   LispObject fn = basic_elt(env, 3); // wuconstantp
    v_130 = (*qfn1(fn))(fn, v_130);
    }
    env = stack[-6];
    if (v_130 == nil) goto v_25;
    else goto v_23;
v_25:
    v_130 = stack[-4];
    if (!car_legal(v_130)) v_130 = carerror(v_130); else
    v_130 = car(v_130);
    if (!car_legal(v_130)) v_130 = carerror(v_130); else
    v_130 = car(v_130);
    if (!car_legal(v_130)) v_131 = carerror(v_130); else
    v_131 = car(v_130);
    v_130 = stack[-1];
    if (equal(v_131, v_130)) goto v_28;
    else goto v_23;
v_28:
    goto v_24;
v_23:
    v_130 = stack[-5];
    {   LispObject fn = basic_elt(env, 1); // setkorder
    v_130 = (*qfn1(fn))(fn, v_130);
    }
    v_131 = nil;
    v_130 = stack[0];
    return cons(v_131, v_130);
v_24:
    v_130 = stack[-3];
    {   LispObject fn = basic_elt(env, 2); // reorder
    v_130 = (*qfn1(fn))(fn, v_130);
    }
    env = stack[-6];
    stack[-3] = v_130;
    v_130 = stack[-3];
    {   LispObject fn = basic_elt(env, 3); // wuconstantp
    v_130 = (*qfn1(fn))(fn, v_130);
    }
    env = stack[-6];
    if (v_130 == nil) goto v_45;
    else goto v_43;
v_45:
    v_130 = stack[-3];
    if (!car_legal(v_130)) v_130 = carerror(v_130); else
    v_130 = car(v_130);
    if (!car_legal(v_130)) v_130 = carerror(v_130); else
    v_130 = car(v_130);
    if (!car_legal(v_130)) v_131 = carerror(v_130); else
    v_131 = car(v_130);
    v_130 = stack[-1];
    if (equal(v_131, v_130)) goto v_48;
    else goto v_43;
v_48:
    goto v_44;
v_43:
    stack[-1] = stack[-4];
    stack[0] = stack[-3];
    v_130 = stack[-4];
    if (!car_legal(v_130)) v_130 = carerror(v_130); else
    v_130 = car(v_130);
    if (!car_legal(v_130)) v_131 = cdrerror(v_130); else
    v_131 = cdr(v_130);
    v_130 = stack[-3];
    {   LispObject fn = basic_elt(env, 4); // gcdf!*
    v_130 = (*qfn2(fn))(fn, v_131, v_130);
    }
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 5); // quotf
    v_130 = (*qfn2(fn))(fn, stack[0], v_130);
    }
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 6); // multf
    v_130 = (*qfn2(fn))(fn, stack[-1], v_130);
    }
    env = stack[-6];
    stack[-4] = v_130;
    v_130 = stack[-5];
    {   LispObject fn = basic_elt(env, 1); // setkorder
    v_130 = (*qfn1(fn))(fn, v_130);
    }
    env = stack[-6];
    v_130 = stack[-4];
    {   LispObject fn = basic_elt(env, 2); // reorder
    v_130 = (*qfn1(fn))(fn, v_130);
    }
    return ncons(v_130);
v_44:
    v_130 = stack[-4];
    if (!car_legal(v_130)) v_130 = carerror(v_130); else
    v_130 = car(v_130);
    if (!car_legal(v_130)) v_130 = carerror(v_130); else
    v_130 = car(v_130);
    if (!car_legal(v_130)) v_130 = cdrerror(v_130); else
    v_130 = cdr(v_130);
    stack[-2] = v_130;
    v_130 = stack[-3];
    if (!car_legal(v_130)) v_130 = carerror(v_130); else
    v_130 = car(v_130);
    if (!car_legal(v_130)) v_130 = carerror(v_130); else
    v_130 = car(v_130);
    if (!car_legal(v_130)) v_130 = cdrerror(v_130); else
    v_130 = cdr(v_130);
    stack[-1] = v_130;
    v_131 = stack[-2];
    v_130 = stack[-1];
    v_130 = difference2(v_131, v_130);
    env = stack[-6];
    v_131 = add1(v_130);
    env = stack[-6];
    v_130 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_130 = static_cast<LispObject>(lessp2(v_131, v_130));
    v_130 = v_130 ? lisp_true : nil;
    env = stack[-6];
    if (v_130 == nil) goto v_79;
    v_130 = stack[-5];
    {   LispObject fn = basic_elt(env, 1); // setkorder
    v_130 = (*qfn1(fn))(fn, v_130);
    }
    v_131 = nil;
    v_130 = stack[0];
    return cons(v_131, v_130);
v_79:
    v_130 = stack[-3];
    if (!car_legal(v_130)) v_130 = carerror(v_130); else
    v_130 = car(v_130);
    if (!car_legal(v_130)) v_130 = cdrerror(v_130); else
    v_130 = cdr(v_130);
    stack[0] = v_130;
    v_131 = stack[-2];
    v_130 = stack[-1];
    v_130 = difference2(v_131, v_130);
    env = stack[-6];
    v_130 = add1(v_130);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 7); // exptf
    v_130 = (*qfn2(fn))(fn, stack[0], v_130);
    }
    env = stack[-6];
    stack[0] = v_130;
    v_131 = stack[0];
    v_130 = stack[-4];
    {   LispObject fn = basic_elt(env, 6); // multf
    v_131 = (*qfn2(fn))(fn, v_131, v_130);
    }
    env = stack[-6];
    v_130 = stack[-3];
    {   LispObject fn = basic_elt(env, 8); // qremf
    v_130 = (*qfn2(fn))(fn, v_131, v_130);
    }
    env = stack[-6];
    stack[-1] = v_130;
    v_131 = stack[0];
    v_130 = stack[-1];
    if (!car_legal(v_130)) v_130 = cdrerror(v_130); else
    v_130 = cdr(v_130);
    {   LispObject fn = basic_elt(env, 4); // gcdf!*
    v_131 = (*qfn2(fn))(fn, v_131, v_130);
    }
    env = stack[-6];
    v_130 = stack[-1];
    if (!car_legal(v_130)) v_130 = carerror(v_130); else
    v_130 = car(v_130);
    {   LispObject fn = basic_elt(env, 4); // gcdf!*
    v_130 = (*qfn2(fn))(fn, v_131, v_130);
    }
    env = stack[-6];
    stack[-2] = v_130;
    v_130 = stack[-1];
    if (!car_legal(v_130)) v_131 = carerror(v_130); else
    v_131 = car(v_130);
    v_130 = stack[-2];
    {   LispObject fn = basic_elt(env, 5); // quotf
    stack[0] = (*qfn2(fn))(fn, v_131, v_130);
    }
    env = stack[-6];
    v_130 = stack[-1];
    if (!car_legal(v_130)) v_131 = cdrerror(v_130); else
    v_131 = cdr(v_130);
    v_130 = stack[-2];
    {   LispObject fn = basic_elt(env, 5); // quotf
    v_130 = (*qfn2(fn))(fn, v_131, v_130);
    }
    env = stack[-6];
    v_130 = cons(stack[0], v_130);
    env = stack[-6];
    stack[-1] = v_130;
    v_130 = stack[-5];
    {   LispObject fn = basic_elt(env, 1); // setkorder
    v_130 = (*qfn1(fn))(fn, v_130);
    }
    env = stack[-6];
    v_130 = stack[-1];
    if (!car_legal(v_130)) v_130 = carerror(v_130); else
    v_130 = car(v_130);
    {   LispObject fn = basic_elt(env, 2); // reorder
    stack[0] = (*qfn1(fn))(fn, v_130);
    }
    env = stack[-6];
    v_130 = stack[-1];
    if (!car_legal(v_130)) v_130 = cdrerror(v_130); else
    v_130 = cdr(v_130);
    {   LispObject fn = basic_elt(env, 2); // reorder
    v_130 = (*qfn1(fn))(fn, v_130);
    }
    {
        LispObject v_138 = stack[0];
        return cons(v_138, v_130);
    }
    return onevalue(v_130);
}



// Code for evaluatecoeffts

static LispObject CC_evaluatecoeffts(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_81, v_82, v_83;
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
    v_81 = stack[-1];
    if (v_81 == nil) goto v_11;
    else goto v_12;
v_11:
    v_81 = lisp_true;
    goto v_10;
v_12:
    v_81 = stack[-1];
    if (!consp(v_81)) goto v_19;
    else goto v_20;
v_19:
    v_81 = lisp_true;
    goto v_18;
v_20:
    v_81 = stack[-1];
    if (!car_legal(v_81)) v_81 = carerror(v_81); else
    v_81 = car(v_81);
    v_81 = (consp(v_81) ? nil : lisp_true);
    goto v_18;
    v_81 = nil;
v_18:
    goto v_10;
    v_81 = nil;
v_10:
    if (v_81 == nil) goto v_8;
    v_82 = stack[-1];
    v_81 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_82 == v_81) goto v_30;
    else goto v_31;
v_30:
    v_81 = nil;
    goto v_29;
v_31:
    v_81 = stack[-1];
    goto v_29;
    v_81 = nil;
v_29:
    goto v_6;
v_8:
    v_81 = stack[-1];
    if (!car_legal(v_81)) v_81 = carerror(v_81); else
    v_81 = car(v_81);
    if (!car_legal(v_81)) v_81 = carerror(v_81); else
    v_81 = car(v_81);
    if (!car_legal(v_81)) v_82 = carerror(v_81); else
    v_82 = car(v_81);
    v_81 = qvalue(basic_elt(env, 1)); // indexlist
    v_81 = Lmember(nil, v_82, v_81);
    if (v_81 == nil) goto v_46;
    v_81 = stack[-1];
    if (!car_legal(v_81)) v_81 = carerror(v_81); else
    v_81 = car(v_81);
    if (!car_legal(v_81)) v_81 = carerror(v_81); else
    v_81 = car(v_81);
    if (!car_legal(v_81)) v_83 = carerror(v_81); else
    v_83 = car(v_81);
    v_82 = stack[0];
    v_81 = qvalue(basic_elt(env, 1)); // indexlist
    {   LispObject fn = basic_elt(env, 2); // valuecoefft
    v_81 = (*qfn3(fn))(fn, v_83, v_82, v_81);
    }
    env = stack[-3];
    goto v_44;
v_46:
    v_81 = stack[-1];
    if (!car_legal(v_81)) v_81 = carerror(v_81); else
    v_81 = car(v_81);
    if (!car_legal(v_81)) v_82 = carerror(v_81); else
    v_82 = car(v_81);
    v_81 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_81 = cons(v_82, v_81);
    env = stack[-3];
    v_81 = ncons(v_81);
    env = stack[-3];
    goto v_44;
v_44:
    stack[-2] = v_81;
    v_81 = stack[-1];
    if (!car_legal(v_81)) v_81 = carerror(v_81); else
    v_81 = car(v_81);
    if (!car_legal(v_81)) v_82 = cdrerror(v_81); else
    v_82 = cdr(v_81);
    v_81 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // evaluatecoeffts
    v_81 = (*qfn2(fn))(fn, v_82, v_81);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 3); // !*multf
    v_81 = (*qfn2(fn))(fn, stack[-2], v_81);
    }
    env = stack[-3];
    stack[-2] = v_81;
    v_81 = stack[-1];
    if (!car_legal(v_81)) v_82 = cdrerror(v_81); else
    v_82 = cdr(v_81);
    v_81 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // evaluatecoeffts
    v_81 = (*qfn2(fn))(fn, v_82, v_81);
    }
    env = stack[-3];
    {
        LispObject v_87 = stack[-2];
        LispObject fn = basic_elt(env, 4); // addf
        return (*qfn2(fn))(fn, v_87, v_81);
    }
    goto v_6;
    v_81 = nil;
v_6:
    return onevalue(v_81);
}



// Code for vdp_getprop

static LispObject CC_vdp_getprop(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    v_20 = v_3;
    v_21 = v_2;
// end of prologue
    stack[0] = v_20;
    v_20 = v_21;
    {   LispObject fn = basic_elt(env, 1); // vdp_plist
    v_20 = (*qfn1(fn))(fn, v_20);
    }
    v_20 = Latsoc(nil, stack[0], v_20);
    v_21 = v_20;
    v_20 = v_21;
    if (v_20 == nil) goto v_13;
    v_20 = v_21;
    if (!car_legal(v_20)) v_20 = cdrerror(v_20); else
    v_20 = cdr(v_20);
    goto v_11;
v_13:
    v_20 = nil;
    goto v_11;
    v_20 = nil;
v_11:
    return onevalue(v_20);
}



// Code for dip_condense

static LispObject CC_dip_condense(LispObject env,
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



// Code for mml2ir

static LispObject CC_mml2ir(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil);
    stack_popper stack_popper_var(2);
// end of prologue
    v_42 = nil;
    stack[0] = v_42;
    v_42 = nil;
    setvalue(basic_elt(env, 1), v_42); // mmlatts
    v_42 = static_cast<LispObject>(512)+TAG_FIXNUM; // 32
    v_42 = ncons(v_42);
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 11); // list2string
    v_42 = (*qfn1(fn))(fn, v_42);
    }
    env = stack[-1];
    v_42 = Lintern(nil, v_42);
    env = stack[-1];
    setvalue(basic_elt(env, 2), v_42); // space
    v_42 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    setvalue(basic_elt(env, 3), v_42); // count
    v_42 = Lreadch(nil);
    env = stack[-1];
    setvalue(basic_elt(env, 4), v_42); // ch
    v_42 = nil;
    setvalue(basic_elt(env, 5), v_42); // temp2
    {   LispObject fn = basic_elt(env, 12); // lex
    v_42 = (*qfn0(fn))(fn);
    }
    env = stack[-1];
    v_43 = qvalue(basic_elt(env, 6)); // char
    v_42 = basic_elt(env, 7); // (m a t h)
    if (equal(v_43, v_42)) goto v_18;
    else goto v_19;
v_18:
    {   LispObject fn = basic_elt(env, 13); // mathml
    v_42 = (*qfn0(fn))(fn);
    }
    env = stack[-1];
    stack[0] = v_42;
    goto v_17;
v_19:
    v_43 = basic_elt(env, 8); // "<math>"
    v_42 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    {   LispObject fn = basic_elt(env, 14); // errorml
    v_42 = (*qfn2(fn))(fn, v_43, v_42);
    }
    env = stack[-1];
    goto v_17;
v_17:
    {   LispObject fn = basic_elt(env, 12); // lex
    v_42 = (*qfn0(fn))(fn);
    }
    env = stack[-1];
    v_43 = qvalue(basic_elt(env, 6)); // char
    v_42 = basic_elt(env, 9); // (!/ m a t h)
    if (equal(v_43, v_42)) goto v_31;
    else goto v_32;
v_31:
    v_42 = Lterpri(nil);
    goto v_30;
v_32:
    v_43 = basic_elt(env, 10); // "</math>"
    v_42 = static_cast<LispObject>(304)+TAG_FIXNUM; // 19
    {   LispObject fn = basic_elt(env, 14); // errorml
    v_42 = (*qfn2(fn))(fn, v_43, v_42);
    }
    goto v_30;
v_30:
    v_42 = stack[0];
    return onevalue(v_42);
}



// Code for pfordp

static LispObject CC_pfordp(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_43, v_44, v_45, v_46;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_44 = v_3;
    v_45 = v_2;
// end of prologue
v_7:
    v_43 = v_45;
    if (v_43 == nil) goto v_10;
    else goto v_11;
v_10:
    v_43 = nil;
    goto v_6;
v_11:
    v_43 = v_44;
    if (v_43 == nil) goto v_14;
    else goto v_15;
v_14:
    v_43 = v_45;
    if (!car_legal(v_43)) v_43 = carerror(v_43); else
    v_43 = car(v_43);
    if (!car_legal(v_43)) v_44 = carerror(v_43); else
    v_44 = car(v_43);
    v_43 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
        return Lneq_2(nil, v_44, v_43);
v_15:
    v_43 = v_45;
    if (!car_legal(v_43)) v_43 = carerror(v_43); else
    v_43 = car(v_43);
    if (!car_legal(v_43)) v_46 = carerror(v_43); else
    v_46 = car(v_43);
    v_43 = v_44;
    if (!car_legal(v_43)) v_43 = carerror(v_43); else
    v_43 = car(v_43);
    if (!car_legal(v_43)) v_43 = carerror(v_43); else
    v_43 = car(v_43);
    if (v_46 == v_43) goto v_23;
    v_43 = v_45;
    if (!car_legal(v_43)) v_43 = carerror(v_43); else
    v_43 = car(v_43);
    if (!car_legal(v_43)) v_43 = carerror(v_43); else
    v_43 = car(v_43);
    if (!car_legal(v_44)) v_44 = carerror(v_44); else
    v_44 = car(v_44);
    if (!car_legal(v_44)) v_44 = carerror(v_44); else
    v_44 = car(v_44);
    {
        LispObject fn = basic_elt(env, 1); // termordp
        return (*qfn2(fn))(fn, v_43, v_44);
    }
v_23:
    v_43 = v_45;
    if (!car_legal(v_43)) v_43 = cdrerror(v_43); else
    v_43 = cdr(v_43);
    v_45 = v_43;
    v_43 = v_44;
    if (!car_legal(v_43)) v_43 = cdrerror(v_43); else
    v_43 = cdr(v_43);
    v_44 = v_43;
    goto v_7;
    v_43 = nil;
v_6:
    return onevalue(v_43);
}



// Code for prinlatom

static LispObject CC_prinlatom(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_56, v_57;
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
    v_57 = stack[-1];
    v_56 = basic_elt(env, 1); // font
    v_56 = get(v_57, v_56);
    env = stack[-3];
    stack[-2] = v_56;
    if (v_56 == nil) goto v_12;
    v_56 = stack[-2];
    {   LispObject fn = basic_elt(env, 5); // prin2la
    v_56 = (*qfn1(fn))(fn, v_56);
    }
    env = stack[-3];
    goto v_10;
v_12:
v_10:
    v_57 = stack[-1];
    v_56 = basic_elt(env, 2); // accent
    v_56 = get(v_57, v_56);
    env = stack[-3];
    stack[0] = v_56;
    if (v_56 == nil) goto v_21;
    v_56 = stack[0];
    {   LispObject fn = basic_elt(env, 5); // prin2la
    v_56 = (*qfn1(fn))(fn, v_56);
    }
    env = stack[-3];
    goto v_19;
v_21:
v_19:
    v_57 = stack[-1];
    v_56 = basic_elt(env, 3); // name
    v_56 = get(v_57, v_56);
    env = stack[-3];
    v_57 = v_56;
    if (v_56 == nil) goto v_30;
    v_56 = v_57;
    {   LispObject fn = basic_elt(env, 5); // prin2la
    v_56 = (*qfn1(fn))(fn, v_56);
    }
    env = stack[-3];
    goto v_28;
v_30:
    v_56 = stack[-1];
    {   LispObject fn = basic_elt(env, 6); // testchar1
    v_56 = (*qfn1(fn))(fn, v_56);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 5); // prin2la
    v_56 = (*qfn1(fn))(fn, v_56);
    }
    env = stack[-3];
    goto v_28;
v_28:
    v_56 = stack[0];
    if (v_56 == nil) goto v_44;
    v_56 = basic_elt(env, 4); // "}"
    {   LispObject fn = basic_elt(env, 5); // prin2la
    v_56 = (*qfn1(fn))(fn, v_56);
    }
    env = stack[-3];
    goto v_42;
v_44:
v_42:
    v_56 = stack[-2];
    if (v_56 == nil) goto v_51;
    v_56 = basic_elt(env, 4); // "}"
    {   LispObject fn = basic_elt(env, 5); // prin2la
    v_56 = (*qfn1(fn))(fn, v_56);
    }
    goto v_49;
v_51:
v_49:
    v_56 = stack[-1];
    return onevalue(v_56);
}



// Code for exptpri

static LispObject CC_exptpri(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_270, v_271, v_272;
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
    push(nil, nil);
    stack_popper stack_popper_var(8);
// copy arguments values to proper place
    v_270 = v_3;
    stack[-5] = v_2;
// end of prologue
    v_271 = qvalue(basic_elt(env, 1)); // !*utf8
    if (v_271 == nil) goto v_8;
    v_271 = stack[-5];
    {
        LispObject fn = basic_elt(env, 18); // utf8_exptpri
        return (*qfn2(fn))(fn, v_271, v_270);
    }
v_8:
// Binding !*list
// FLUIDBIND: reloadenv=7 litvec-offset=2 saveloc=6
{   bind_fluid_stack bind_fluid_var(-7, 2, -6);
    setvalue(basic_elt(env, 2), nil); // !*list
    stack[0] = nil;
    v_271 = qvalue(basic_elt(env, 3)); // !*nat
    if (v_271 == nil) goto v_30;
    else goto v_31;
v_30:
    v_271 = lisp_true;
    goto v_29;
v_31:
    v_271 = qvalue(basic_elt(env, 4)); // !*fort
    goto v_29;
    v_271 = nil;
v_29:
    if (v_271 == nil) goto v_27;
    v_270 = basic_elt(env, 5); // failed
    goto v_23;
v_27:
    v_271 = basic_elt(env, 6); // expt
    if (!symbolp(v_271)) v_271 = nil;
    else { v_271 = qfastgets(v_271);
           if (v_271 != nil) { v_271 = elt(v_271, 23); // infix
#ifdef RECORD_GET
             if (v_271 != SPID_NOPROP)
                record_get(elt(fastget_names, 23), 1);
             else record_get(elt(fastget_names, 23), 0),
                v_271 = nil; }
           else record_get(elt(fastget_names, 23), 0); }
#else
             if (v_271 == SPID_NOPROP) v_271 = nil; }}
#endif
    stack[-2] = v_271;
    v_270 = static_cast<LispObject>(greaterp2(v_271, v_270));
    v_270 = v_270 ? lisp_true : nil;
    env = stack[-7];
    v_270 = (v_270 == nil ? lisp_true : nil);
    stack[-4] = v_270;
    v_270 = stack[-5];
    if (!car_legal(v_270)) v_270 = cdrerror(v_270); else
    v_270 = cdr(v_270);
    if (!car_legal(v_270)) v_270 = carerror(v_270); else
    v_270 = car(v_270);
    stack[-1] = v_270;
    v_270 = stack[-5];
    if (!car_legal(v_270)) v_270 = cdrerror(v_270); else
    v_270 = cdr(v_270);
    if (!car_legal(v_270)) v_270 = cdrerror(v_270); else
    v_270 = cdr(v_270);
    if (!car_legal(v_270)) v_270 = carerror(v_270); else
    v_270 = car(v_270);
    stack[-3] = v_270;
    v_270 = qvalue(basic_elt(env, 7)); // !*eraise
    if (v_270 == nil) goto v_53;
    v_270 = stack[-1];
    if (!consp(v_270)) goto v_60;
    v_270 = stack[-1];
    if (!car_legal(v_270)) v_270 = carerror(v_270); else
    v_270 = car(v_270);
    if (!symbolp(v_270)) v_270 = nil;
    else { v_270 = qfastgets(v_270);
           if (v_270 != nil) { v_270 = elt(v_270, 57); // prifn
#ifdef RECORD_GET
             if (v_270 != SPID_NOPROP)
                record_get(elt(fastget_names, 57), 1);
             else record_get(elt(fastget_names, 57), 0),
                v_270 = nil; }
           else record_get(elt(fastget_names, 57), 0); }
#else
             if (v_270 == SPID_NOPROP) v_270 = nil; }}
#endif
    stack[0] = v_270;
    if (v_270 == nil) goto v_64;
    else goto v_65;
v_64:
    v_270 = nil;
    goto v_63;
v_65:
    v_271 = stack[0];
    v_270 = basic_elt(env, 6); // expt
    v_271 = get(v_271, v_270);
    env = stack[-7];
    v_270 = basic_elt(env, 8); // inbrackets
    v_270 = (v_271 == v_270 ? lisp_true : nil);
    goto v_63;
    v_270 = nil;
v_63:
    goto v_58;
v_60:
    v_270 = nil;
    goto v_58;
    v_270 = nil;
v_58:
    if (v_270 == nil) goto v_53;
    v_272 = stack[-1];
    v_271 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_270 = basic_elt(env, 8); // inbrackets
    {   LispObject fn = basic_elt(env, 19); // layout!-formula
    v_270 = (*qfn3(fn))(fn, v_272, v_271, v_270);
    }
    env = stack[-7];
    stack[-1] = v_270;
    goto v_51;
v_53:
    v_271 = stack[0];
    v_270 = basic_elt(env, 9); // indexprin
    if (v_271 == v_270) goto v_88;
    else goto v_89;
v_88:
    v_271 = stack[-1];
    v_270 = stack[-3];
    {   LispObject fn = basic_elt(env, 20); // indexpower
    v_271 = (*qfn2(fn))(fn, v_271, v_270);
    }
    env = stack[-7];
    v_270 = basic_elt(env, 5); // failed
    v_270 = (v_271 == v_270 ? lisp_true : nil);
    v_270 = (v_270 == nil ? lisp_true : nil);
    goto v_87;
v_89:
    v_270 = nil;
    goto v_87;
    v_270 = nil;
v_87:
    if (v_270 == nil) goto v_85;
    v_270 = nil;
    goto v_23;
v_85:
    v_272 = stack[-1];
    v_271 = stack[-2];
    v_270 = nil;
    {   LispObject fn = basic_elt(env, 19); // layout!-formula
    v_270 = (*qfn3(fn))(fn, v_272, v_271, v_270);
    }
    env = stack[-7];
    stack[-1] = v_270;
    goto v_51;
v_51:
    v_270 = stack[-1];
    if (v_270 == nil) goto v_110;
    else goto v_111;
v_110:
    v_270 = basic_elt(env, 5); // failed
    goto v_23;
v_111:
// Binding !*ratpri
// FLUIDBIND: reloadenv=7 litvec-offset=10 saveloc=5
{   bind_fluid_stack bind_fluid_var(-7, 10, -5);
    setvalue(basic_elt(env, 10), nil); // !*ratpri
    v_271 = stack[-3];
    v_270 = basic_elt(env, 11); // quotient
    if (!consp(v_271)) goto v_125;
    v_271 = car(v_271);
    if (v_271 == v_270) goto v_124;
    else goto v_125;
v_124:
    v_270 = stack[-3];
    if (!car_legal(v_270)) v_270 = cdrerror(v_270); else
    v_270 = cdr(v_270);
    if (!car_legal(v_270)) v_271 = carerror(v_270); else
    v_271 = car(v_270);
    v_270 = basic_elt(env, 12); // minus
    v_270 = Leqcar(nil, v_271, v_270);
    env = stack[-7];
    goto v_123;
v_125:
    v_270 = nil;
    goto v_123;
    v_270 = nil;
v_123:
    if (v_270 == nil) goto v_121;
    stack[0] = basic_elt(env, 12); // minus
    v_270 = stack[-3];
    if (!car_legal(v_270)) v_272 = carerror(v_270); else
    v_272 = car(v_270);
    v_270 = stack[-3];
    if (!car_legal(v_270)) v_270 = cdrerror(v_270); else
    v_270 = cdr(v_270);
    if (!car_legal(v_270)) v_270 = carerror(v_270); else
    v_270 = car(v_270);
    if (!car_legal(v_270)) v_270 = cdrerror(v_270); else
    v_270 = cdr(v_270);
    if (!car_legal(v_270)) v_271 = carerror(v_270); else
    v_271 = car(v_270);
    v_270 = stack[-3];
    if (!car_legal(v_270)) v_270 = cdrerror(v_270); else
    v_270 = cdr(v_270);
    if (!car_legal(v_270)) v_270 = cdrerror(v_270); else
    v_270 = cdr(v_270);
    if (!car_legal(v_270)) v_270 = carerror(v_270); else
    v_270 = car(v_270);
    v_270 = list3(v_272, v_271, v_270);
    env = stack[-7];
    v_270 = list2(stack[0], v_270);
    env = stack[-7];
    stack[-3] = v_270;
    goto v_119;
v_121:
    v_270 = stack[-3];
    {   LispObject fn = basic_elt(env, 21); // negnumberchk
    v_270 = (*qfn1(fn))(fn, v_270);
    }
    env = stack[-7];
    stack[-3] = v_270;
    goto v_119;
v_119:
    v_272 = stack[-3];
    v_270 = qvalue(basic_elt(env, 7)); // !*eraise
    if (v_270 == nil) goto v_160;
    v_270 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_271 = v_270;
    goto v_158;
v_160:
    v_270 = stack[-2];
    v_271 = v_270;
    goto v_158;
    v_271 = nil;
v_158:
    v_270 = nil;
    {   LispObject fn = basic_elt(env, 19); // layout!-formula
    v_270 = (*qfn3(fn))(fn, v_272, v_271, v_270);
    }
    env = stack[-7];
    stack[-3] = v_270;
    ;}  // end of a binding scope
    v_270 = stack[-3];
    if (v_270 == nil) goto v_170;
    else goto v_171;
v_170:
    v_270 = basic_elt(env, 5); // failed
    goto v_23;
v_171:
    v_270 = stack[-1];
    if (!car_legal(v_270)) v_270 = carerror(v_270); else
    v_270 = car(v_270);
    if (!car_legal(v_270)) v_271 = cdrerror(v_270); else
    v_271 = cdr(v_270);
    v_270 = stack[-3];
    if (!car_legal(v_270)) v_270 = carerror(v_270); else
    v_270 = car(v_270);
    if (!car_legal(v_270)) v_270 = cdrerror(v_270); else
    v_270 = cdr(v_270);
    v_270 = plus2(v_271, v_270);
    env = stack[-7];
    stack[-5] = v_270;
    v_270 = stack[-4];
    if (v_270 == nil) goto v_184;
    v_271 = stack[-5];
    v_270 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_270 = plus2(v_271, v_270);
    env = stack[-7];
    stack[-5] = v_270;
    goto v_182;
v_184:
v_182:
    stack[0] = stack[-5];
    v_270 = nil;
    v_271 = Llinelength(nil, v_270);
    env = stack[-7];
    v_270 = qvalue(basic_elt(env, 13)); // spare!*
    v_271 = difference2(v_271, v_270);
    env = stack[-7];
    v_270 = qvalue(basic_elt(env, 14)); // orig!*
    v_270 = difference2(v_271, v_270);
    env = stack[-7];
    v_270 = static_cast<LispObject>(greaterp2(stack[0], v_270));
    v_270 = v_270 ? lisp_true : nil;
    env = stack[-7];
    if (v_270 == nil) goto v_192;
    v_270 = basic_elt(env, 5); // failed
    goto v_23;
v_192:
    stack[0] = stack[-5];
    v_270 = nil;
    v_271 = Llinelength(nil, v_270);
    env = stack[-7];
    v_270 = qvalue(basic_elt(env, 13)); // spare!*
    v_271 = difference2(v_271, v_270);
    env = stack[-7];
    v_270 = qvalue(basic_elt(env, 15)); // posn!*
    v_270 = difference2(v_271, v_270);
    env = stack[-7];
    v_270 = static_cast<LispObject>(greaterp2(stack[0], v_270));
    v_270 = v_270 ? lisp_true : nil;
    env = stack[-7];
    if (v_270 == nil) goto v_205;
    v_270 = lisp_true;
    {   LispObject fn = basic_elt(env, 22); // terpri!*
    v_270 = (*qfn1(fn))(fn, v_270);
    }
    env = stack[-7];
    goto v_203;
v_205:
v_203:
    v_270 = stack[-4];
    if (v_270 == nil) goto v_219;
    v_270 = basic_elt(env, 16); // "("
    {   LispObject fn = basic_elt(env, 23); // prin2!*
    v_270 = (*qfn1(fn))(fn, v_270);
    }
    env = stack[-7];
    goto v_217;
v_219:
v_217:
    v_270 = stack[-1];
    {   LispObject fn = basic_elt(env, 24); // putpline
    v_270 = (*qfn1(fn))(fn, v_270);
    }
    env = stack[-7];
    v_270 = qvalue(basic_elt(env, 7)); // !*eraise
    if (v_270 == nil) goto v_228;
    v_271 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_270 = stack[-3];
    if (!car_legal(v_270)) v_270 = cdrerror(v_270); else
    v_270 = cdr(v_270);
    if (!car_legal(v_270)) v_270 = carerror(v_270); else
    v_270 = car(v_270);
    v_270 = difference2(v_271, v_270);
    env = stack[-7];
    stack[-5] = v_270;
    goto v_226;
v_228:
    v_270 = basic_elt(env, 6); // expt
    {   LispObject fn = basic_elt(env, 25); // oprin
    v_270 = (*qfn1(fn))(fn, v_270);
    }
    env = stack[-7];
    v_270 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-5] = v_270;
    goto v_226;
v_226:
    v_272 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_271 = stack[-5];
    v_270 = stack[-3];
    if (!car_legal(v_270)) v_270 = carerror(v_270); else
    v_270 = car(v_270);
    if (!car_legal(v_270)) v_270 = carerror(v_270); else
    v_270 = car(v_270);
    {   LispObject fn = basic_elt(env, 26); // update!-pline
    stack[-2] = (*qfn3(fn))(fn, v_272, v_271, v_270);
    }
    env = stack[-7];
    v_270 = stack[-3];
    if (!car_legal(v_270)) v_270 = carerror(v_270); else
    v_270 = car(v_270);
    if (!car_legal(v_270)) stack[-1] = cdrerror(v_270); else
    stack[-1] = cdr(v_270);
    v_270 = stack[-3];
    if (!car_legal(v_270)) v_270 = cdrerror(v_270); else
    v_270 = cdr(v_270);
    if (!car_legal(v_270)) v_271 = carerror(v_270); else
    v_271 = car(v_270);
    v_270 = stack[-5];
    stack[0] = plus2(v_271, v_270);
    env = stack[-7];
    v_270 = stack[-3];
    if (!car_legal(v_270)) v_270 = cdrerror(v_270); else
    v_270 = cdr(v_270);
    if (!car_legal(v_270)) v_271 = cdrerror(v_270); else
    v_271 = cdr(v_270);
    v_270 = stack[-5];
    v_270 = plus2(v_271, v_270);
    env = stack[-7];
    v_270 = cons(stack[0], v_270);
    env = stack[-7];
    v_270 = acons(stack[-2], stack[-1], v_270);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 24); // putpline
    v_270 = (*qfn1(fn))(fn, v_270);
    }
    env = stack[-7];
    v_270 = stack[-4];
    if (v_270 == nil) goto v_265;
    v_270 = basic_elt(env, 17); // ")"
    {   LispObject fn = basic_elt(env, 23); // prin2!*
    v_270 = (*qfn1(fn))(fn, v_270);
    }
    goto v_263;
v_265:
v_263:
    v_270 = nil;
v_23:
    ;}  // end of a binding scope
    goto v_6;
    v_270 = nil;
v_6:
    return onevalue(v_270);
}



// Code for ordop2

static LispObject CC_ordop2(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_32, v_33, v_34, v_35, v_36;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_35 = v_3;
    v_36 = v_2;
// end of prologue
    v_32 = qvalue(basic_elt(env, 1)); // kord!*
    v_34 = v_32;
v_8:
    v_32 = v_34;
    if (v_32 == nil) goto v_12;
    else goto v_13;
v_12:
    v_32 = v_36;
    v_33 = v_35;
    {
        LispObject fn = basic_elt(env, 2); // ordp
        return (*qfn2(fn))(fn, v_32, v_33);
    }
v_13:
    v_33 = v_36;
    v_32 = v_34;
    if (!car_legal(v_32)) v_32 = carerror(v_32); else
    v_32 = car(v_32);
    if (v_33 == v_32) goto v_18;
    else goto v_19;
v_18:
    v_32 = lisp_true;
    goto v_7;
v_19:
    v_33 = v_35;
    v_32 = v_34;
    if (!car_legal(v_32)) v_32 = carerror(v_32); else
    v_32 = car(v_32);
    if (v_33 == v_32) goto v_24;
    else goto v_25;
v_24:
    v_32 = nil;
    goto v_7;
v_25:
    v_32 = v_34;
    if (!car_legal(v_32)) v_32 = cdrerror(v_32); else
    v_32 = cdr(v_32);
    v_34 = v_32;
    goto v_8;
v_7:
    return onevalue(v_32);
}



// Code for edges_parents

static LispObject CC_edges_parents(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_21 = stack[0];
    if (v_21 == nil) goto v_6;
    else goto v_7;
v_6:
    v_21 = nil;
    goto v_5;
v_7:
    v_21 = stack[0];
    if (!car_legal(v_21)) v_21 = carerror(v_21); else
    v_21 = car(v_21);
    {   LispObject fn = basic_elt(env, 1); // edge_new_parents
    v_21 = (*qfn1(fn))(fn, v_21);
    }
    env = stack[-2];
    stack[-1] = v_21;
    v_21 = stack[0];
    if (!car_legal(v_21)) v_21 = cdrerror(v_21); else
    v_21 = cdr(v_21);
    {   LispObject fn = basic_elt(env, 0); // edges_parents
    v_21 = (*qfn1(fn))(fn, v_21);
    }
    {
        LispObject v_24 = stack[-1];
        return Lappend_2(nil, v_24, v_21);
    }
    v_21 = nil;
v_5:
    return onevalue(v_21);
}



// Code for mo_zero

static LispObject CC_mo_zero(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_7;
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// end of prologue
    stack[0] = nil;
    v_7 = nil;
    {   LispObject fn = basic_elt(env, 1); // mo!=deglist
    v_7 = (*qfn1(fn))(fn, v_7);
    }
    {
        LispObject v_9 = stack[0];
        return cons(v_9, v_7);
    }
}



// Code for !*di2q0

static LispObject CC_Hdi2q0(LispObject env,
                         LispObject v_3, LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_95, v_96, v_97, v_98;
#ifdef CHECK_STACK
    if_check_stack;
#endif
#ifdef CONSERVATIVE
    poll();
#else // CONSERVATIVE
    if (++reclaim_trigger_count == reclaim_trigger_target ||
        stack >= stackLimit)
    {
        push(v_3,v_4);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_4,v_3);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil, nil, nil, nil, nil);
    stack_popper stack_popper_var(6);
// copy arguments values to proper place
    v_95 = v_4;
    stack[-3] = v_3;
// end of prologue
// Binding varlist!*
// FLUIDBIND: reloadenv=5 litvec-offset=1 saveloc=4
{   bind_fluid_stack bind_fluid_var(-5, 1, -4);
    setvalue(basic_elt(env, 1), v_95); // varlist!*
    stack[-2] = nil;
v_15:
    v_95 = stack[-3];
    if (v_95 == nil) goto v_20;
    else goto v_21;
v_20:
    goto v_16;
v_21:
    v_95 = stack[-3];
    if (!car_legal(v_95)) v_95 = carerror(v_95); else
    v_95 = car(v_95);
    if (!car_legal(v_95)) stack[-1] = cdrerror(v_95); else
    stack[-1] = cdr(v_95);
    stack[0] = qvalue(basic_elt(env, 1)); // varlist!*
    v_96 = qvalue(basic_elt(env, 2)); // ordering
    v_95 = basic_elt(env, 3); // lex
    if (v_96 == v_95) goto v_31;
    else goto v_32;
v_31:
    v_95 = stack[-3];
    {   LispObject fn = basic_elt(env, 4); // ljet
    v_95 = (*qfn1(fn))(fn, v_95);
    }
    env = stack[-5];
    goto v_30;
v_32:
    v_95 = stack[-3];
    {   LispObject fn = basic_elt(env, 4); // ljet
    v_95 = (*qfn1(fn))(fn, v_95);
    }
    env = stack[-5];
    if (!car_legal(v_95)) v_95 = cdrerror(v_95); else
    v_95 = cdr(v_95);
    goto v_30;
    v_95 = nil;
v_30:
    {   LispObject fn = basic_elt(env, 5); // pair
    v_95 = (*qfn2(fn))(fn, stack[0], v_95);
    }
    env = stack[-5];
    v_98 = stack[-1];
    stack[-1] = v_95;
v_47:
    v_95 = stack[-1];
    if (v_95 == nil) goto v_51;
    else goto v_52;
v_51:
    goto v_46;
v_52:
    v_95 = stack[-1];
    if (!car_legal(v_95)) v_95 = carerror(v_95); else
    v_95 = car(v_95);
    v_97 = v_95;
    v_95 = v_97;
    if (!car_legal(v_95)) v_96 = cdrerror(v_95); else
    v_96 = cdr(v_95);
    v_95 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_96 == v_95) goto v_61;
    stack[0] = v_98;
    v_96 = v_97;
    v_95 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_97 = cons(v_96, v_95);
    env = stack[-5];
    v_96 = nil;
    v_95 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_95 = acons(v_97, v_96, v_95);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 6); // multsq
    v_95 = (*qfn2(fn))(fn, stack[0], v_95);
    }
    env = stack[-5];
    v_98 = v_95;
    goto v_59;
v_61:
v_59:
    v_95 = stack[-1];
    if (!car_legal(v_95)) v_95 = cdrerror(v_95); else
    v_95 = cdr(v_95);
    stack[-1] = v_95;
    goto v_47;
v_46:
    v_96 = v_98;
    v_95 = stack[-2];
    v_95 = cons(v_96, v_95);
    env = stack[-5];
    stack[-2] = v_95;
    v_95 = stack[-3];
    if (!car_legal(v_95)) v_95 = cdrerror(v_95); else
    v_95 = cdr(v_95);
    stack[-3] = v_95;
    goto v_15;
v_16:
    v_96 = nil;
    v_95 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_95 = cons(v_96, v_95);
    env = stack[-5];
    v_96 = v_95;
v_17:
    v_95 = stack[-2];
    if (v_95 == nil) goto v_84;
    else goto v_85;
v_84:
    v_95 = v_96;
    goto v_14;
v_85:
    v_95 = stack[-2];
    v_95 = car(v_95);
    {   LispObject fn = basic_elt(env, 7); // addsq
    v_95 = (*qfn2(fn))(fn, v_95, v_96);
    }
    env = stack[-5];
    v_96 = v_95;
    v_95 = stack[-2];
    v_95 = cdr(v_95);
    stack[-2] = v_95;
    goto v_17;
v_14:
    ;}  // end of a binding scope
    return onevalue(v_95);
}



// Code for dv_skel2factor1

static LispObject CC_dv_skel2factor1(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_85, v_86, v_87;
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
    v_85 = stack[-1];
    if (v_85 == nil) goto v_11;
    else goto v_12;
v_11:
    v_85 = nil;
    goto v_8;
v_12:
    v_85 = stack[-1];
    {   LispObject fn = basic_elt(env, 4); // listp
    v_85 = (*qfn1(fn))(fn, v_85);
    }
    env = stack[-3];
    if (v_85 == nil) goto v_18;
    v_85 = stack[-1];
    if (!car_legal(v_85)) v_86 = carerror(v_85); else
    v_86 = car(v_85);
    v_85 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // dv_skel2factor1
    v_85 = (*qfn2(fn))(fn, v_86, v_85);
    }
    env = stack[-3];
    stack[-2] = v_85;
    v_85 = stack[-1];
    if (!car_legal(v_85)) v_86 = cdrerror(v_85); else
    v_86 = cdr(v_85);
    v_85 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // dv_skel2factor1
    v_85 = (*qfn2(fn))(fn, v_86, v_85);
    }
    env = stack[-3];
    v_85 = cons(stack[-2], v_85);
    goto v_16;
v_18:
    v_86 = stack[-1];
    v_85 = basic_elt(env, 1); // !~dv
    if (v_86 == v_85) goto v_31;
    else goto v_32;
v_31:
    v_85 = stack[0];
    if (!car_legal(v_85)) v_85 = carerror(v_85); else
    v_85 = car(v_85);
    v_87 = v_85;
    v_85 = stack[0];
    if (!car_legal(v_85)) v_85 = cdrerror(v_85); else
    v_85 = cdr(v_85);
    if (v_85 == nil) goto v_40;
    v_86 = stack[0];
    v_85 = stack[0];
    if (!car_legal(v_85)) v_85 = cdrerror(v_85); else
    v_85 = cdr(v_85);
    if (!car_legal(v_85)) v_85 = carerror(v_85); else
    v_85 = car(v_85);
    if (!car_legal(v_86)) rplaca_fails(v_86);
    setcar(v_86, v_85);
    v_86 = stack[0];
    v_85 = stack[0];
    if (!car_legal(v_85)) v_85 = cdrerror(v_85); else
    v_85 = cdr(v_85);
    if (!car_legal(v_85)) v_85 = cdrerror(v_85); else
    v_85 = cdr(v_85);
    if (!car_legal(v_86)) rplacd_fails(v_86);
    setcdr(v_86, v_85);
    goto v_38;
v_40:
v_38:
    v_85 = v_87;
    goto v_16;
v_32:
    v_86 = stack[-1];
    v_85 = basic_elt(env, 2); // !~dva
    if (v_86 == v_85) goto v_55;
    else goto v_56;
v_55:
    v_85 = stack[0];
    if (!car_legal(v_85)) v_85 = carerror(v_85); else
    v_85 = car(v_85);
    v_87 = v_85;
    v_85 = stack[0];
    if (!car_legal(v_85)) v_85 = cdrerror(v_85); else
    v_85 = cdr(v_85);
    if (v_85 == nil) goto v_64;
    v_86 = stack[0];
    v_85 = stack[0];
    if (!car_legal(v_85)) v_85 = cdrerror(v_85); else
    v_85 = cdr(v_85);
    if (!car_legal(v_85)) v_85 = carerror(v_85); else
    v_85 = car(v_85);
    if (!car_legal(v_86)) rplaca_fails(v_86);
    setcar(v_86, v_85);
    v_86 = stack[0];
    v_85 = stack[0];
    if (!car_legal(v_85)) v_85 = cdrerror(v_85); else
    v_85 = cdr(v_85);
    if (!car_legal(v_85)) v_85 = cdrerror(v_85); else
    v_85 = cdr(v_85);
    if (!car_legal(v_86)) rplacd_fails(v_86);
    setcdr(v_86, v_85);
    goto v_62;
v_64:
v_62:
    v_86 = basic_elt(env, 3); // minus
    v_85 = nil;
    return list2star(v_86, v_87, v_85);
v_56:
    v_85 = stack[-1];
    goto v_16;
    v_85 = nil;
v_16:
v_8:
    return onevalue(v_85);
}



// Code for let3

static LispObject CC_let3(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_119, v_120, v_121;
    LispObject v_5, v_6;
    if (_a4up_ == nil)
        aerror1("not enough arguments provided", basic_elt(env, 0));
    v_5 = car(_a4up_); _a4up_ = cdr(_a4up_);
    if (_a4up_ == nil)
        aerror1("not enough arguments provided", basic_elt(env, 0));
    v_6 = car(_a4up_); _a4up_ = cdr(_a4up_);
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
        push(v_2,v_3,v_4,v_5,v_6);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_6,v_5,v_4,v_3,v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil, nil, nil, nil, nil);
    push(nil, nil);
    stack_popper stack_popper_var(8);
// copy arguments values to proper place
    stack[-1] = v_6;
    stack[-2] = v_5;
    stack[-3] = v_4;
    stack[-4] = v_3;
    stack[-5] = v_2;
// end of prologue
    v_119 = stack[-5];
    stack[-6] = v_119;
    v_119 = stack[-6];
    if (v_119 == nil) goto v_17;
    else goto v_18;
v_17:
    v_119 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-5] = v_119;
    v_119 = stack[-5];
    {
        LispObject fn = basic_elt(env, 5); // errpri1
        return (*qfn1(fn))(fn, v_119);
    }
v_18:
    v_119 = stack[-6];
    if (is_number(v_119)) goto v_23;
    else goto v_24;
v_23:
    v_119 = stack[-5];
    {
        LispObject fn = basic_elt(env, 5); // errpri1
        return (*qfn1(fn))(fn, v_119);
    }
v_24:
    v_119 = stack[-4];
    {   LispObject fn = basic_elt(env, 6); // getrtype
    v_119 = (*qfn1(fn))(fn, v_119);
    }
    env = stack[-7];
    stack[0] = v_119;
    v_119 = stack[-2];
    if (v_119 == nil) goto v_33;
    v_119 = stack[-6];
    if (symbolp(v_119)) goto v_36;
    else goto v_33;
v_36:
    v_120 = stack[-6];
    v_119 = basic_elt(env, 1); // rtype
    v_119 = Lremprop(nil, v_120, v_119);
    env = stack[-7];
    v_120 = stack[-6];
    v_119 = basic_elt(env, 2); // avalue
    v_119 = Lremprop(nil, v_120, v_119);
    env = stack[-7];
    goto v_31;
v_33:
v_31:
    v_119 = stack[-6];
    {   LispObject fn = basic_elt(env, 6); // getrtype
    v_119 = (*qfn1(fn))(fn, v_119);
    }
    env = stack[-7];
    v_121 = v_119;
    if (v_119 == nil) goto v_47;
    v_120 = v_121;
    v_119 = basic_elt(env, 3); // typeletfn
    v_119 = get(v_120, v_119);
    env = stack[-7];
    v_120 = v_119;
    if (v_119 == nil) goto v_53;
    stack[-3] = v_120;
    stack[-5] = stack[-6];
    stack[-1] = stack[-4];
    stack[0] = v_121;
    v_119 = stack[-4];
    {   LispObject fn = basic_elt(env, 6); // getrtype
    v_119 = (*qfn1(fn))(fn, v_119);
    }
    env = stack[-7];
    v_119 = list2(stack[-2], v_119);
    env = stack[-7];
    v_119 = list3star(stack[-5], stack[-1], stack[0], v_119);
    env = stack[-7];
    {
        LispObject v_129 = stack[-3];
        LispObject fn = basic_elt(env, 7); // lispapply
        return (*qfn2(fn))(fn, v_129, v_119);
    }
v_53:
    stack[-3] = stack[-6];
    stack[-1] = stack[-4];
    stack[0] = v_121;
    v_119 = stack[-4];
    {   LispObject fn = basic_elt(env, 6); // getrtype
    v_119 = (*qfn1(fn))(fn, v_119);
    }
    env = stack[-7];
    v_119 = list2(stack[-2], v_119);
    env = stack[-7];
    {
        LispObject v_130 = stack[-3];
        LispObject v_131 = stack[-1];
        LispObject v_132 = stack[0];
        LispObject fn = basic_elt(env, 8); // typelet
        return (*qfn4up(fn))(fn, v_130, v_131, v_132, v_119);
    }
    v_119 = nil;
    goto v_13;
v_47:
    v_119 = stack[0];
    if (v_119 == nil) goto v_78;
    v_120 = stack[0];
    v_119 = basic_elt(env, 4); // yetunknowntype
    if (v_120 == v_119) goto v_78;
    v_120 = stack[0];
    v_119 = basic_elt(env, 3); // typeletfn
    v_119 = get(v_120, v_119);
    env = stack[-7];
    v_120 = v_119;
    if (v_119 == nil) goto v_87;
    stack[-3] = v_120;
    stack[-5] = stack[-6];
    stack[-1] = nil;
    v_120 = stack[-2];
    v_119 = stack[0];
    v_119 = list2(v_120, v_119);
    env = stack[-7];
    v_119 = list3star(stack[-5], stack[-4], stack[-1], v_119);
    env = stack[-7];
    {
        LispObject v_133 = stack[-3];
        LispObject fn = basic_elt(env, 7); // lispapply
        return (*qfn2(fn))(fn, v_133, v_119);
    }
v_87:
    stack[-3] = stack[-6];
    stack[-1] = nil;
    v_120 = stack[-2];
    v_119 = stack[0];
    v_119 = list2(v_120, v_119);
    env = stack[-7];
    {
        LispObject v_134 = stack[-3];
        LispObject v_135 = stack[-4];
        LispObject v_136 = stack[-1];
        LispObject fn = basic_elt(env, 8); // typelet
        return (*qfn4up(fn))(fn, v_134, v_135, v_136, v_119);
    }
    v_119 = nil;
    goto v_13;
v_78:
    stack[0] = stack[-5];
    v_121 = stack[-6];
    v_120 = stack[-2];
    v_119 = stack[-1];
    v_119 = list3(v_121, v_120, v_119);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 9); // letscalar
    v_119 = (*qfn4up(fn))(fn, stack[0], stack[-4], stack[-3], v_119);
    }
    goto v_45;
v_45:
    v_119 = nil;
v_13:
    return onevalue(v_119);
}



// Code for lalr_print_compressed_action_table

static LispObject CC_lalr_print_compressed_action_table(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_94, v_95;
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
    v_94 = qvalue(basic_elt(env, 1)); // itemset_collection
    v_94 = Llength(nil, v_94);
    env = stack[-6];
    stack[-5] = v_94;
    v_94 = basic_elt(env, 2); // "=== ACTION TABLE ==="
    v_94 = Lprinc(nil, v_94);
    env = stack[-6];
    v_94 = Lterpri(nil);
    env = stack[-6];
    v_94 = basic_elt(env, 3); // "STATE"
    v_94 = Lprinc(nil, v_94);
    env = stack[-6];
    v_94 = static_cast<LispObject>(96)+TAG_FIXNUM; // 6
    v_94 = Lttab(nil, v_94);
    env = stack[-6];
    v_94 = basic_elt(env, 4); // "TERMINAL"
    v_94 = Lprinc(nil, v_94);
    env = stack[-6];
    v_94 = static_cast<LispObject>(320)+TAG_FIXNUM; // 20
    v_94 = Lttab(nil, v_94);
    env = stack[-6];
    v_94 = basic_elt(env, 5); // "ACTION"
    v_94 = Lprinc(nil, v_94);
    env = stack[-6];
    v_94 = Lterpri(nil);
    env = stack[-6];
    v_94 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-2] = v_94;
v_28:
    v_94 = stack[-5];
    v_95 = sub1(v_94);
    env = stack[-6];
    v_94 = stack[-2];
    v_94 = difference2(v_95, v_94);
    env = stack[-6];
    v_94 = Lminusp(nil, v_94);
    env = stack[-6];
    if (v_94 == nil) goto v_33;
    goto v_27;
v_33:
    v_95 = stack[-4];
    v_94 = stack[-2];
    v_94 = Lgetv(nil, v_95, v_94);
    env = stack[-6];
    if (!car_legal(v_94)) v_94 = carerror(v_94); else
    v_94 = car(v_94);
    stack[0] = v_94;
    v_95 = stack[-4];
    v_94 = stack[-2];
    v_94 = Lgetv(nil, v_95, v_94);
    env = stack[-6];
    if (!car_legal(v_94)) v_94 = cdrerror(v_94); else
    v_94 = cdr(v_94);
    stack[-3] = v_94;
    v_94 = stack[-2];
    v_94 = Lprin(nil, v_94);
    env = stack[-6];
    v_94 = stack[0];
    stack[-1] = v_94;
v_53:
    v_94 = stack[-1];
    if (v_94 == nil) goto v_57;
    else goto v_58;
v_57:
    goto v_52;
v_58:
    v_94 = stack[-1];
    if (!car_legal(v_94)) v_94 = carerror(v_94); else
    v_94 = car(v_94);
    stack[0] = v_94;
    v_94 = static_cast<LispObject>(96)+TAG_FIXNUM; // 6
    v_94 = Lttab(nil, v_94);
    env = stack[-6];
    v_94 = stack[0];
    if (!car_legal(v_94)) v_94 = carerror(v_94); else
    v_94 = car(v_94);
    {   LispObject fn = basic_elt(env, 7); // lalr_prin_symbol
    v_94 = (*qfn1(fn))(fn, v_94);
    }
    env = stack[-6];
    v_94 = static_cast<LispObject>(320)+TAG_FIXNUM; // 20
    v_94 = Lttab(nil, v_94);
    env = stack[-6];
    v_94 = stack[0];
    if (!car_legal(v_94)) v_94 = cdrerror(v_94); else
    v_94 = cdr(v_94);
    {   LispObject fn = basic_elt(env, 8); // lalr_prin_action
    v_94 = (*qfn1(fn))(fn, v_94);
    }
    env = stack[-6];
    v_94 = Lterpri(nil);
    env = stack[-6];
    v_94 = stack[-1];
    if (!car_legal(v_94)) v_94 = cdrerror(v_94); else
    v_94 = cdr(v_94);
    stack[-1] = v_94;
    goto v_53;
v_52:
    v_94 = stack[-3];
    if (v_94 == nil) goto v_80;
    v_94 = static_cast<LispObject>(96)+TAG_FIXNUM; // 6
    v_94 = Lttab(nil, v_94);
    env = stack[-6];
    v_94 = basic_elt(env, 6); // "<any>"
    v_94 = Lprinc(nil, v_94);
    env = stack[-6];
    v_94 = static_cast<LispObject>(320)+TAG_FIXNUM; // 20
    v_94 = Lttab(nil, v_94);
    env = stack[-6];
    v_94 = stack[-3];
    {   LispObject fn = basic_elt(env, 8); // lalr_prin_action
    v_94 = (*qfn1(fn))(fn, v_94);
    }
    env = stack[-6];
    v_94 = Lterpri(nil);
    env = stack[-6];
    goto v_78;
v_80:
v_78:
    v_94 = stack[-2];
    v_94 = add1(v_94);
    env = stack[-6];
    stack[-2] = v_94;
    goto v_28;
v_27:
    v_94 = Lterpri(nil);
    v_94 = nil;
    return onevalue(v_94);
}



// Code for ofsf_subf

static LispObject CC_ofsf_subf(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_73, v_74, v_75;
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    stack[0] = v_4;
    stack[-1] = v_3;
    stack[-2] = v_2;
// end of prologue
    v_73 = stack[-2];
    if (!consp(v_73)) goto v_15;
    else goto v_16;
v_15:
    v_73 = lisp_true;
    goto v_14;
v_16:
    v_73 = stack[-2];
    if (!car_legal(v_73)) v_73 = carerror(v_73); else
    v_73 = car(v_73);
    v_73 = (consp(v_73) ? nil : lisp_true);
    goto v_14;
    v_73 = nil;
v_14:
    if (v_73 == nil) goto v_12;
    v_74 = stack[-2];
    v_73 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_74, v_73);
v_12:
    v_73 = stack[-2];
    if (!car_legal(v_73)) v_75 = cdrerror(v_73); else
    v_75 = cdr(v_73);
    v_74 = stack[-1];
    v_73 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // ofsf_subf
    v_73 = (*qfn3(fn))(fn, v_75, v_74, v_73);
    }
    env = stack[-4];
    stack[-3] = v_73;
    v_73 = stack[-2];
    if (!car_legal(v_73)) v_73 = carerror(v_73); else
    v_73 = car(v_73);
    if (!car_legal(v_73)) v_73 = carerror(v_73); else
    v_73 = car(v_73);
    if (!car_legal(v_73)) v_74 = carerror(v_73); else
    v_74 = car(v_73);
    v_73 = stack[-1];
    if (v_74 == v_73) goto v_34;
    else goto v_35;
v_34:
    v_73 = stack[-2];
    if (!car_legal(v_73)) v_73 = carerror(v_73); else
    v_73 = car(v_73);
    if (!car_legal(v_73)) v_74 = cdrerror(v_73); else
    v_74 = cdr(v_73);
    v_73 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-1] = cons(v_74, v_73);
    env = stack[-4];
    v_74 = stack[0];
    v_73 = stack[-2];
    if (!car_legal(v_73)) v_73 = carerror(v_73); else
    v_73 = car(v_73);
    if (!car_legal(v_73)) v_73 = carerror(v_73); else
    v_73 = car(v_73);
    if (!car_legal(v_73)) v_73 = cdrerror(v_73); else
    v_73 = cdr(v_73);
    {   LispObject fn = basic_elt(env, 1); // exptsq
    v_73 = (*qfn2(fn))(fn, v_74, v_73);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 2); // multsq
    v_74 = (*qfn2(fn))(fn, stack[-1], v_73);
    }
    env = stack[-4];
    v_73 = stack[-3];
    {
        LispObject fn = basic_elt(env, 3); // addsq
        return (*qfn2(fn))(fn, v_74, v_73);
    }
v_35:
    v_73 = stack[-2];
    if (!car_legal(v_73)) v_73 = carerror(v_73); else
    v_73 = car(v_73);
    if (!car_legal(v_73)) v_75 = cdrerror(v_73); else
    v_75 = cdr(v_73);
    v_74 = stack[-1];
    v_73 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // ofsf_subf
    stack[0] = (*qfn3(fn))(fn, v_75, v_74, v_73);
    }
    env = stack[-4];
    v_73 = stack[-2];
    if (!car_legal(v_73)) v_73 = carerror(v_73); else
    v_73 = car(v_73);
    if (!car_legal(v_73)) v_73 = carerror(v_73); else
    v_73 = car(v_73);
    if (!car_legal(v_73)) v_74 = carerror(v_73); else
    v_74 = car(v_73);
    v_73 = stack[-2];
    if (!car_legal(v_73)) v_73 = carerror(v_73); else
    v_73 = car(v_73);
    if (!car_legal(v_73)) v_73 = carerror(v_73); else
    v_73 = car(v_73);
    if (!car_legal(v_73)) v_73 = cdrerror(v_73); else
    v_73 = cdr(v_73);
    {   LispObject fn = basic_elt(env, 4); // ofsf_pow2q
    v_73 = (*qfn2(fn))(fn, v_74, v_73);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 2); // multsq
    v_74 = (*qfn2(fn))(fn, stack[0], v_73);
    }
    env = stack[-4];
    v_73 = stack[-3];
    {
        LispObject fn = basic_elt(env, 3); // addsq
        return (*qfn2(fn))(fn, v_74, v_73);
    }
    return onevalue(v_73);
}



// Code for simpexpt11

static LispObject CC_simpexpt11(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_78, v_79, v_80;
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
    stack[-1] = v_4;
    stack[-2] = v_3;
    stack[-3] = v_2;
// end of prologue
    stack[-4] = nil;
    v_78 = qvalue(basic_elt(env, 1)); // !*precise_complex
    if (v_78 == nil) goto v_12;
    v_80 = stack[-3];
    v_79 = stack[-2];
    v_78 = stack[-1];
    {
        LispObject fn = basic_elt(env, 2); // simpexpt2
        return (*qfn3(fn))(fn, v_80, v_79, v_78);
    }
v_12:
    v_78 = stack[-2];
    if (!car_legal(v_78)) v_78 = cdrerror(v_78); else
    v_78 = cdr(v_78);
    if (!consp(v_78)) goto v_26;
    else goto v_27;
v_26:
    v_78 = lisp_true;
    goto v_25;
v_27:
    v_78 = stack[-2];
    if (!car_legal(v_78)) v_78 = cdrerror(v_78); else
    v_78 = cdr(v_78);
    if (!car_legal(v_78)) v_78 = carerror(v_78); else
    v_78 = car(v_78);
    v_78 = (consp(v_78) ? nil : lisp_true);
    goto v_25;
    v_78 = nil;
v_25:
    if (v_78 == nil) goto v_23;
    v_78 = lisp_true;
    goto v_21;
v_23:
    v_78 = stack[-2];
    if (!car_legal(v_78)) v_79 = carerror(v_78); else
    v_79 = car(v_78);
    v_78 = stack[-2];
    if (!car_legal(v_78)) v_78 = cdrerror(v_78); else
    v_78 = cdr(v_78);
    {   LispObject fn = basic_elt(env, 3); // qremf
    v_78 = (*qfn2(fn))(fn, v_79, v_78);
    }
    env = stack[-5];
    stack[-4] = v_78;
    if (!car_legal(v_78)) v_78 = carerror(v_78); else
    v_78 = car(v_78);
    if (v_78 == nil) goto v_42;
    else goto v_43;
v_42:
    v_78 = nil;
    goto v_41;
v_43:
    v_78 = stack[-4];
    if (!car_legal(v_78)) v_78 = cdrerror(v_78); else
    v_78 = cdr(v_78);
    goto v_41;
    v_78 = nil;
v_41:
    v_78 = (v_78 == nil ? lisp_true : nil);
    goto v_21;
    v_78 = nil;
v_21:
    if (v_78 == nil) goto v_19;
    v_80 = stack[-3];
    v_79 = stack[-2];
    v_78 = stack[-1];
    {
        LispObject fn = basic_elt(env, 2); // simpexpt2
        return (*qfn3(fn))(fn, v_80, v_79, v_78);
    }
v_19:
    stack[0] = stack[-3];
    v_78 = stack[-4];
    if (!car_legal(v_78)) v_79 = carerror(v_78); else
    v_79 = car(v_78);
    v_78 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_79 = cons(v_79, v_78);
    env = stack[-5];
    v_78 = stack[-1];
    {   LispObject fn = basic_elt(env, 4); // simpexpt1
    stack[0] = (*qfn3(fn))(fn, stack[0], v_79, v_78);
    }
    env = stack[-5];
    v_78 = stack[-4];
    if (!car_legal(v_78)) v_79 = cdrerror(v_78); else
    v_79 = cdr(v_78);
    v_78 = stack[-2];
    if (!car_legal(v_78)) v_78 = cdrerror(v_78); else
    v_78 = cdr(v_78);
    v_79 = cons(v_79, v_78);
    env = stack[-5];
    v_78 = stack[-1];
    {   LispObject fn = basic_elt(env, 4); // simpexpt1
    v_78 = (*qfn3(fn))(fn, stack[-3], v_79, v_78);
    }
    env = stack[-5];
    {
        LispObject v_86 = stack[0];
        LispObject fn = basic_elt(env, 5); // multsq
        return (*qfn2(fn))(fn, v_86, v_78);
    }
    v_78 = nil;
    return onevalue(v_78);
}



// Code for quotelog

static LispObject CC_quotelog(LispObject env,
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
    v_5 = basic_elt(env, 1); // logical
    return onevalue(v_5);
}



// Code for encodeir

static LispObject CC_encodeir(LispObject env,
                         LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_29, v_30, v_31;
#ifdef CHECK_STACK
    if_check_stack;
#endif
#ifdef CONSERVATIVE
    poll();
#else // CONSERVATIVE
    if (++reclaim_trigger_count == reclaim_trigger_target ||
        stack >= stackLimit)
    {
        push(v_3);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_3);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    v_29 = v_3;
// end of prologue
// Binding name
// FLUIDBIND: reloadenv=2 litvec-offset=1 saveloc=1
{   bind_fluid_stack bind_fluid_var(-2, 1, -1);
    setvalue(basic_elt(env, 1), v_29); // name
    stack[0] = qvalue(basic_elt(env, 2)); // char
    v_30 = basic_elt(env, 3); // ! 
    v_29 = qvalue(basic_elt(env, 4)); // atts
    v_29 = cons(v_30, v_29);
    env = stack[-2];
    v_29 = Lappend_2(nil, stack[0], v_29);
    env = stack[-2];
    v_30 = basic_elt(env, 5); // !$
    {   LispObject fn = basic_elt(env, 7); // delall
    v_29 = (*qfn2(fn))(fn, v_30, v_29);
    }
    env = stack[-2];
    stack[0] = basic_elt(env, 6); // semantic
    v_31 = qvalue(basic_elt(env, 1)); // name
    v_30 = v_29;
    v_29 = nil;
    v_30 = list2star(v_31, v_30, v_29);
    env = stack[-2];
    v_29 = nil;
    v_29 = list2star(stack[0], v_30, v_29);
    ;}  // end of a binding scope
    return onevalue(v_29);
}



// Code for simpdf!*

static LispObject CC_simpdfH(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_23, v_24, v_25;
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
    v_23 = v_2;
// end of prologue
    {   LispObject fn = basic_elt(env, 1); // simpdf
    v_23 = (*qfn1(fn))(fn, v_23);
    }
    env = stack[-1];
    stack[0] = v_23;
    v_23 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // rootextractsq
    v_23 = (*qfn1(fn))(fn, v_23);
    }
    env = stack[-1];
    v_25 = v_23;
    v_24 = v_25;
    v_23 = stack[0];
    if (equal(v_24, v_23)) goto v_15;
    v_23 = v_25;
    {
        LispObject fn = basic_elt(env, 3); // resimp
        return (*qfn1(fn))(fn, v_23);
    }
v_15:
    v_23 = stack[0];
    goto v_7;
    v_23 = nil;
v_7:
    return onevalue(v_23);
}



// Code for evdif

static LispObject CC_evdif(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_40 = nil;
v_10:
    v_38 = stack[0];
    if (v_38 == nil) goto v_13;
    else goto v_14;
v_13:
    goto v_9;
v_14:
    v_38 = stack[-1];
    if (v_38 == nil) goto v_19;
    else goto v_20;
v_19:
    v_38 = basic_elt(env, 1); // (0)
    stack[-1] = v_38;
    goto v_18;
v_20:
v_18:
    v_38 = stack[-1];
    if (!car_legal(v_38)) v_39 = carerror(v_38); else
    v_39 = car(v_38);
    v_38 = stack[0];
    if (!car_legal(v_38)) v_38 = carerror(v_38); else
    v_38 = car(v_38);
    v_38 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_39) - static_cast<std::uintptr_t>(v_38) + TAG_FIXNUM);
    v_39 = v_40;
    v_38 = cons(v_38, v_39);
    env = stack[-2];
    v_40 = v_38;
    v_38 = stack[-1];
    if (!car_legal(v_38)) v_38 = cdrerror(v_38); else
    v_38 = cdr(v_38);
    stack[-1] = v_38;
    v_38 = stack[0];
    if (!car_legal(v_38)) v_38 = cdrerror(v_38); else
    v_38 = cdr(v_38);
    stack[0] = v_38;
    goto v_10;
v_9:
    v_38 = v_40;
    v_39 = Lnreverse(nil, v_38);
    v_38 = stack[-1];
        return Lnconc(nil, v_39, v_38);
    return onevalue(v_38);
}



// Code for evaluate1

static LispObject CC_evaluate1(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_94, v_95, v_96, v_97;
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
    v_95 = v_3;
    v_96 = v_2;
// end of prologue
    v_94 = v_96;
    if (is_number(v_94)) goto v_7;
    v_94 = v_96;
    if (v_94 == nil) goto v_7;
    goto v_8;
v_7:
    v_94 = v_96;
    {
        LispObject fn = basic_elt(env, 10); // force!-to!-dm
        return (*qfn1(fn))(fn, v_94);
    }
v_8:
    v_94 = v_96;
    v_94 = Lconsp(nil, v_94);
    env = stack[0];
    if (v_94 == nil) goto v_16;
    v_94 = v_96;
    if (!car_legal(v_94)) v_94 = carerror(v_94); else
    v_94 = car(v_94);
    if (!symbolp(v_94)) v_94 = nil;
    else { v_94 = qfastgets(v_94);
           if (v_94 != nil) { v_94 = elt(v_94, 8); // dname
#ifdef RECORD_GET
             if (v_94 != SPID_NOPROP)
                record_get(elt(fastget_names, 8), 1);
             else record_get(elt(fastget_names, 8), 0),
                v_94 = nil; }
           else record_get(elt(fastget_names, 8), 0); }
#else
             if (v_94 == SPID_NOPROP) v_94 = nil; }}
#endif
    if (v_94 == nil) goto v_16;
    v_94 = v_96;
    goto v_6;
v_16:
    v_97 = v_96;
    v_94 = v_95;
    v_94 = Lassoc(nil, v_97, v_94);
    v_97 = v_94;
    v_94 = v_97;
    if (v_94 == nil) goto v_34;
    v_94 = v_97;
    if (!car_legal(v_94)) v_94 = cdrerror(v_94); else
    v_94 = cdr(v_94);
    goto v_32;
v_34:
    v_94 = v_96;
    if (!consp(v_94)) goto v_38;
    else goto v_39;
v_38:
    v_95 = v_96;
    v_94 = basic_elt(env, 1); // i
    if (v_95 == v_94) goto v_43;
    else goto v_44;
v_43:
    v_95 = qvalue(basic_elt(env, 2)); // dmode!*
    v_94 = basic_elt(env, 3); // ivalue
    v_94 = get(v_95, v_94);
    env = stack[0];
    v_96 = v_94;
    if (v_94 == nil) goto v_50;
    v_95 = v_96;
    v_94 = basic_elt(env, 4); // (nil)
    {   LispObject fn = basic_elt(env, 11); // apply
    v_94 = (*qfn2(fn))(fn, v_95, v_94);
    }
    if (!car_legal(v_94)) v_94 = carerror(v_94); else
    v_94 = car(v_94);
    goto v_48;
v_50:
    v_94 = basic_elt(env, 5); // "i used as indeterminate value"
    {
        LispObject fn = basic_elt(env, 12); // rederr
        return (*qfn1(fn))(fn, v_94);
    }
    v_94 = nil;
v_48:
    goto v_42;
v_44:
    v_95 = v_96;
    v_94 = basic_elt(env, 6); // e
    if (v_95 == v_94) goto v_66;
    else goto v_67;
v_66:
    v_94 = lisp_true;
    goto v_65;
v_67:
    v_95 = v_96;
    v_94 = basic_elt(env, 7); // pi
    v_94 = (v_95 == v_94 ? lisp_true : nil);
    goto v_65;
    v_94 = nil;
v_65:
    if (v_94 == nil) goto v_63;
    v_94 = v_96;
    {   LispObject fn = basic_elt(env, 13); // simp
    v_94 = (*qfn1(fn))(fn, v_94);
    }
    env = stack[0];
    if (!car_legal(v_94)) v_94 = carerror(v_94); else
    v_94 = car(v_94);
    {
        LispObject fn = basic_elt(env, 10); // force!-to!-dm
        return (*qfn1(fn))(fn, v_94);
    }
v_63:
    v_94 = lisp_true;
    setvalue(basic_elt(env, 8), v_94); // !*evaluateerror
    v_95 = v_96;
    v_94 = basic_elt(env, 9); // "number"
    {
        LispObject fn = basic_elt(env, 14); // typerr
        return (*qfn2(fn))(fn, v_95, v_94);
    }
    v_94 = nil;
v_42:
    goto v_32;
v_39:
    v_94 = v_96;
    if (!car_legal(v_94)) v_94 = carerror(v_94); else
    v_94 = car(v_94);
    if (!car_legal(v_96)) v_96 = cdrerror(v_96); else
    v_96 = cdr(v_96);
    {
        LispObject fn = basic_elt(env, 15); // evaluate2
        return (*qfn3(fn))(fn, v_94, v_96, v_95);
    }
    v_94 = nil;
v_32:
    goto v_6;
    v_94 = nil;
v_6:
    return onevalue(v_94);
}



// Code for assert_install1

static LispObject CC_assert_install1(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_41, v_42, v_43;
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
    v_42 = stack[0];
    v_41 = basic_elt(env, 1); // assert_installed
    v_41 = get(v_42, v_41);
    env = stack[-1];
    if (v_41 == nil) goto v_7;
    v_42 = basic_elt(env, 2); // "assert already installed for"
    v_41 = stack[0];
    v_41 = list2(v_42, v_41);
    env = stack[-1];
    {
        LispObject fn = basic_elt(env, 7); // lprim
        return (*qfn1(fn))(fn, v_41);
    }
v_7:
    v_41 = stack[0];
    {   LispObject fn = basic_elt(env, 8); // getd
    v_42 = (*qfn1(fn))(fn, v_41);
    }
    env = stack[-1];
    v_41 = basic_elt(env, 3); // expr
    if (!consp(v_42)) goto v_15;
    v_42 = car(v_42);
    if (v_42 == v_41) goto v_16;
v_15:
    v_42 = stack[0];
    v_41 = basic_elt(env, 4); // "is not an expr procedure - ignoring assert"
    v_41 = list2(v_42, v_41);
    env = stack[-1];
    {
        LispObject fn = basic_elt(env, 7); // lprim
        return (*qfn1(fn))(fn, v_41);
    }
v_16:
    v_42 = stack[0];
    v_41 = basic_elt(env, 5); // assert_noassertfn
    v_42 = get(v_42, v_41);
    env = stack[-1];
    v_41 = stack[0];
    {   LispObject fn = basic_elt(env, 9); // copyd
    v_41 = (*qfn2(fn))(fn, v_42, v_41);
    }
    env = stack[-1];
    v_43 = stack[0];
    v_42 = stack[0];
    v_41 = basic_elt(env, 6); // assert_assertfn
    v_41 = get(v_42, v_41);
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 9); // copyd
    v_41 = (*qfn2(fn))(fn, v_43, v_41);
    }
    env = stack[-1];
    v_42 = stack[0];
    v_43 = basic_elt(env, 1); // assert_installed
    v_41 = lisp_true;
        return Lputprop(nil, v_42, v_43, v_41);
    v_41 = nil;
    return onevalue(v_41);
}



// Code for red!=cancelsimp

static LispObject CC_redMcancelsimp(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_23 = stack[-1];
    v_22 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // red_better
    v_22 = (*qfn2(fn))(fn, v_23, v_22);
    }
    env = stack[-2];
    if (v_22 == nil) goto v_7;
    else goto v_8;
v_7:
    v_22 = nil;
    goto v_6;
v_8:
    v_22 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // bas_dpoly
    v_22 = (*qfn1(fn))(fn, v_22);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // dp_lmon
    stack[-1] = (*qfn1(fn))(fn, v_22);
    }
    env = stack[-2];
    v_22 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // bas_dpoly
    v_22 = (*qfn1(fn))(fn, v_22);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // dp_lmon
    v_22 = (*qfn1(fn))(fn, v_22);
    }
    env = stack[-2];
    {
        LispObject v_26 = stack[-1];
        LispObject fn = basic_elt(env, 4); // mo_vdivides!?
        return (*qfn2(fn))(fn, v_26, v_22);
    }
    v_22 = nil;
v_6:
    return onevalue(v_22);
}



setup_type const u25_setup[] =
{
    {"pa_coinc_split",          G0W2,     G1W2,     CC_pa_coinc_split,G3W2,G4W2},
    {"lambda_er1ez819f9yx2",    G0W2,     G1W2,     CC_lambda_er1ez819f9yx2,G3W2,G4W2},
    {"cde_position",            G0W2,     G1W2,     CC_cde_position,G3W2,G4W2},
    {"lto_sgnchg1",             G0W1,     CC_lto_sgnchg1,G2W1,G3W1,     G4W1},
    {"cl_pnf",                  G0W1,     CC_cl_pnf,G2W1,     G3W1,     G4W1},
    {"mri_prepat",              G0W1,     CC_mri_prepat,G2W1, G3W1,     G4W1},
    {"vdp_make",                G0W3,     G1W3,     G2W3,     CC_vdp_make,G4W3},
    {"max-degree",              G0W2,     G1W2,     CC_maxKdegree,G3W2, G4W2},
    {"binaryrd",                CC_binaryrd,G1W0,   G2W0,     G3W0,     G4W0},
    {"rationalizesq",           G0W1,     CC_rationalizesq,G2W1,G3W1,   G4W1},
    {"delhisto",                G0W1,     CC_delhisto,G2W1,   G3W1,     G4W1},
    {"quoteequation",           G0W1,     CC_quoteequation,G2W1,G3W1,   G4W1},
    {"gvarlis1",                G0W2,     G1W2,     CC_gvarlis1,G3W2,   G4W2},
    {"bcneg",                   G0W1,     CC_bcneg, G2W1,     G3W1,     G4W1},
    {"physopsimp",              G0W1,     CC_physopsimp,G2W1, G3W1,     G4W1},
    {"ev-denom2",               G0W2,     G1W2,     CC_evKdenom2,G3W2,  G4W2},
    {"copy-tree",               G0W1,     CC_copyKtree,G2W1,  G3W1,     G4W1},
    {"safe-modrecip",           G0W1,     CC_safeKmodrecip,G2W1,G3W1,   G4W1},
    {"setk_super_vectorfield",  G0W2,     G1W2,     CC_setk_super_vectorfield,G3W2,G4W2},
    {"lalr_construct_fn",       G0W2,     G1W2,     CC_lalr_construct_fn,G3W2,G4W2},
    {"ctx_idl",                 G0W1,     CC_ctx_idl,G2W1,    G3W1,     G4W1},
    {"wupseudodivide",          G0W3,     G1W3,     G2W3,     CC_wupseudodivide,G4W3},
    {"evaluatecoeffts",         G0W2,     G1W2,     CC_evaluatecoeffts,G3W2,G4W2},
    {"vdp_getprop",             G0W2,     G1W2,     CC_vdp_getprop,G3W2,G4W2},
    {"dip_condense",            G0W1,     CC_dip_condense,G2W1,G3W1,    G4W1},
    {"mml2ir",                  CC_mml2ir,G1W0,     G2W0,     G3W0,     G4W0},
    {"pfordp",                  G0W2,     G1W2,     CC_pfordp,G3W2,     G4W2},
    {"prinlatom",               G0W1,     CC_prinlatom,G2W1,  G3W1,     G4W1},
    {"exptpri",                 G0W2,     G1W2,     CC_exptpri,G3W2,    G4W2},
    {"ordop2",                  G0W2,     G1W2,     CC_ordop2,G3W2,     G4W2},
    {"edges_parents",           G0W1,     CC_edges_parents,G2W1,G3W1,   G4W1},
    {"mo_zero",                 CC_mo_zero,G1W0,    G2W0,     G3W0,     G4W0},
    {"*di2q0",                  G0W2,     G1W2,     CC_Hdi2q0,G3W2,     G4W2},
    {"dv_skel2factor1",         G0W2,     G1W2,     CC_dv_skel2factor1,G3W2,G4W2},
    {"let3",                    G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_let3},
    {"lalr_print_compressed_action_table",G0W1,CC_lalr_print_compressed_action_table,G2W1,G3W1,G4W1},
    {"ofsf_subf",               G0W3,     G1W3,     G2W3,     CC_ofsf_subf,G4W3},
    {"simpexpt11",              G0W3,     G1W3,     G2W3,     CC_simpexpt11,G4W3},
    {"quotelog",                G0W1,     CC_quotelog,G2W1,   G3W1,     G4W1},
    {"encodeir",                G0W1,     CC_encodeir,G2W1,   G3W1,     G4W1},
    {"simpdf*",                 G0W1,     CC_simpdfH,G2W1,    G3W1,     G4W1},
    {"evdif",                   G0W2,     G1W2,     CC_evdif, G3W2,     G4W2},
    {"evaluate1",               G0W2,     G1W2,     CC_evaluate1,G3W2,  G4W2},
    {"assert_install1",         G0W1,     CC_assert_install1,G2W1,G3W1, G4W1},
    {"red=cancelsimp",          G0W2,     G1W2,     CC_redMcancelsimp,G3W2,G4W2},
    {nullptr, 
        reinterpret_cast<no_args *>(
            reinterpret_cast<uintptr_t>("u25")),
        reinterpret_cast<one_arg *>(
            reinterpret_cast<uintptr_t>("34501 2156620 9770729")),
        nullptr, nullptr, nullptr}
};

// end of generated code
