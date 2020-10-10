
// $destdir/u31.c        Machine generated C code

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


// Code for factor!-prim!-sqfree!-f

static LispObject CC_factorKprimKsqfreeKf(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_232, v_233, v_234;
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
// Binding !*msg
// FLUIDBIND: reloadenv=8 litvec-offset=1 saveloc=7
{   bind_fluid_stack bind_fluid_var(-8, 1, -7);
    setvalue(basic_elt(env, 1), nil); // !*msg
    v_232 = qvalue(basic_elt(env, 2)); // !*rounded
    stack[-5] = v_232;
    v_232 = stack[-5];
    if (v_232 == nil) goto v_16;
    v_232 = stack[-6];
    if (!car_legal(v_232)) v_232 = carerror(v_232); else
    v_232 = car(v_232);
    {   LispObject fn = basic_elt(env, 13); // univariatep
    v_232 = (*qfn1(fn))(fn, v_232);
    }
    env = stack[-8];
    if (v_232 == nil) goto v_16;
    v_232 = stack[-6];
    if (!car_legal(v_232)) v_232 = carerror(v_232); else
    v_232 = car(v_232);
    if (!car_legal(v_232)) v_232 = carerror(v_232); else
    v_232 = car(v_232);
    if (!car_legal(v_232)) v_233 = cdrerror(v_232); else
    v_233 = cdr(v_232);
    v_232 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_233 == v_232) goto v_27;
    else goto v_28;
v_27:
    v_232 = stack[-6];
    if (!car_legal(v_232)) v_233 = cdrerror(v_232); else
    v_233 = cdr(v_232);
    v_232 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_232 = (v_233 == v_232 ? lisp_true : nil);
    goto v_26;
v_28:
    v_232 = nil;
    goto v_26;
    v_232 = nil;
v_26:
    if (v_232 == nil) goto v_16;
    v_232 = stack[-6];
    {   LispObject fn = basic_elt(env, 14); // unifactor
    v_232 = (*qfn1(fn))(fn, v_232);
    }
    goto v_10;
v_16:
    v_232 = stack[-5];
    if (v_232 == nil) goto v_45;
    else goto v_43;
v_45:
    v_232 = qvalue(basic_elt(env, 3)); // !*complex
    if (v_232 == nil) goto v_48;
    else goto v_43;
v_48:
    v_232 = qvalue(basic_elt(env, 4)); // !*rational
    if (v_232 == nil) goto v_50;
    else goto v_43;
v_50:
    goto v_44;
v_43:
    v_232 = stack[-5];
    if (v_232 == nil) goto v_55;
    v_232 = basic_elt(env, 5); // rational
    v_232 = ncons(v_232);
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 15); // on
    v_232 = (*qfn1(fn))(fn, v_232);
    }
    env = stack[-8];
    goto v_53;
v_55:
v_53:
    v_232 = stack[-6];
    if (!car_legal(v_232)) v_233 = carerror(v_232); else
    v_233 = car(v_232);
    v_232 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_232 = cons(v_233, v_232);
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 16); // resimp
    v_232 = (*qfn1(fn))(fn, v_232);
    }
    env = stack[-8];
    if (!car_legal(v_232)) v_233 = carerror(v_232); else
    v_233 = car(v_232);
    v_232 = stack[-6];
    if (!car_legal(v_232)) v_232 = cdrerror(v_232); else
    v_232 = cdr(v_232);
    v_232 = cons(v_233, v_232);
    env = stack[-8];
    stack[-6] = v_232;
    goto v_14;
v_44:
v_14:
    v_232 = qvalue(basic_elt(env, 6)); // !*limitedfactors
    if (v_232 == nil) goto v_71;
    else goto v_72;
v_71:
    v_232 = qvalue(basic_elt(env, 7)); // dmode!*
    if (v_232 == nil) goto v_76;
    else goto v_77;
v_76:
    v_232 = basic_elt(env, 8); // internal!-factorf
    stack[0] = v_232;
    goto v_75;
v_77:
    v_233 = qvalue(basic_elt(env, 7)); // dmode!*
    v_232 = basic_elt(env, 9); // sqfrfactorfn
    v_232 = get(v_233, v_232);
    env = stack[-8];
    v_234 = v_232;
    v_233 = qvalue(basic_elt(env, 7)); // dmode!*
    v_232 = basic_elt(env, 10); // factorfn
    v_232 = get(v_233, v_232);
    env = stack[-8];
    stack[0] = v_232;
    v_232 = v_234;
    if (v_232 == nil) goto v_91;
    v_233 = v_234;
    v_232 = stack[0];
    if (v_233 == v_232) goto v_91;
    v_232 = basic_elt(env, 8); // internal!-factorf
    stack[0] = v_232;
    goto v_89;
v_91:
    v_233 = stack[0];
    v_232 = basic_elt(env, 11); // factorf
    if (v_233 == v_232) goto v_98;
    else goto v_99;
v_98:
    v_232 = basic_elt(env, 8); // internal!-factorf
    stack[0] = v_232;
    goto v_89;
v_99:
v_89:
    goto v_75;
v_75:
    v_232 = stack[0];
    if (v_232 == nil) goto v_106;
    v_233 = stack[0];
    v_232 = stack[-6];
    if (!car_legal(v_232)) v_232 = carerror(v_232); else
    v_232 = car(v_232);
    v_232 = Lapply1(nil, v_233, v_232);
    env = stack[-8];
    stack[0] = v_232;
    v_232 = stack[0];
    if (!car_legal(v_232)) v_233 = carerror(v_232); else
    v_233 = car(v_232);
    v_232 = stack[-6];
    if (!car_legal(v_232)) v_232 = cdrerror(v_232); else
    v_232 = cdr(v_232);
    {   LispObject fn = basic_elt(env, 17); // exptf
    stack[-4] = (*qfn2(fn))(fn, v_233, v_232);
    }
    env = stack[-8];
    v_232 = stack[0];
    if (!car_legal(v_232)) v_232 = cdrerror(v_232); else
    v_232 = cdr(v_232);
    stack[-3] = v_232;
    v_232 = stack[-3];
    if (v_232 == nil) goto v_128;
    else goto v_129;
v_128:
    v_232 = nil;
    goto v_122;
v_129:
    v_232 = stack[-3];
    if (!car_legal(v_232)) v_232 = carerror(v_232); else
    v_232 = car(v_232);
    if (!car_legal(v_232)) v_233 = carerror(v_232); else
    v_233 = car(v_232);
    v_232 = stack[-6];
    if (!car_legal(v_232)) v_232 = cdrerror(v_232); else
    v_232 = cdr(v_232);
    v_232 = cons(v_233, v_232);
    env = stack[-8];
    v_232 = ncons(v_232);
    env = stack[-8];
    stack[-1] = v_232;
    stack[-2] = v_232;
v_123:
    v_232 = stack[-3];
    if (!car_legal(v_232)) v_232 = cdrerror(v_232); else
    v_232 = cdr(v_232);
    stack[-3] = v_232;
    v_232 = stack[-3];
    if (v_232 == nil) goto v_145;
    else goto v_146;
v_145:
    v_232 = stack[-2];
    goto v_122;
v_146:
    stack[0] = stack[-1];
    v_232 = stack[-3];
    if (!car_legal(v_232)) v_232 = carerror(v_232); else
    v_232 = car(v_232);
    if (!car_legal(v_232)) v_233 = carerror(v_232); else
    v_233 = car(v_232);
    v_232 = stack[-6];
    if (!car_legal(v_232)) v_232 = cdrerror(v_232); else
    v_232 = cdr(v_232);
    v_232 = cons(v_233, v_232);
    env = stack[-8];
    v_232 = ncons(v_232);
    env = stack[-8];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_232);
    v_232 = stack[-1];
    if (!car_legal(v_232)) v_232 = cdrerror(v_232); else
    v_232 = cdr(v_232);
    stack[-1] = v_232;
    goto v_123;
v_122:
    v_232 = cons(stack[-4], v_232);
    env = stack[-8];
    stack[-6] = v_232;
    goto v_11;
v_106:
    goto v_70;
v_72:
v_70:
    v_232 = stack[-6];
    if (!car_legal(v_232)) v_233 = carerror(v_232); else
    v_233 = car(v_232);
    v_232 = stack[-6];
    if (!car_legal(v_232)) v_232 = cdrerror(v_232); else
    v_232 = cdr(v_232);
    {   LispObject fn = basic_elt(env, 18); // factor!-prim!-sqfree!-f!-1
    v_232 = (*qfn2(fn))(fn, v_233, v_232);
    }
    env = stack[-8];
    stack[-6] = v_232;
v_11:
    v_232 = stack[-5];
    if (v_232 == nil) goto v_170;
    v_232 = basic_elt(env, 12); // rounded
    v_232 = ncons(v_232);
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 15); // on
    v_232 = (*qfn1(fn))(fn, v_232);
    }
    env = stack[-8];
    v_232 = stack[-6];
    if (!car_legal(v_232)) stack[-4] = carerror(v_232); else
    stack[-4] = car(v_232);
    v_232 = stack[-6];
    if (!car_legal(v_232)) v_232 = cdrerror(v_232); else
    v_232 = cdr(v_232);
    stack[-5] = v_232;
    v_232 = stack[-5];
    if (v_232 == nil) goto v_188;
    else goto v_189;
v_188:
    v_232 = nil;
    goto v_182;
v_189:
    v_232 = stack[-5];
    if (!car_legal(v_232)) v_232 = carerror(v_232); else
    v_232 = car(v_232);
    stack[0] = v_232;
    v_232 = stack[0];
    if (!car_legal(v_232)) v_233 = carerror(v_232); else
    v_233 = car(v_232);
    v_232 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_232 = cons(v_233, v_232);
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 16); // resimp
    v_232 = (*qfn1(fn))(fn, v_232);
    }
    env = stack[-8];
    if (!car_legal(v_232)) v_233 = carerror(v_232); else
    v_233 = car(v_232);
    v_232 = stack[0];
    if (!car_legal(v_232)) v_232 = cdrerror(v_232); else
    v_232 = cdr(v_232);
    v_232 = cons(v_233, v_232);
    env = stack[-8];
    v_232 = ncons(v_232);
    env = stack[-8];
    stack[-2] = v_232;
    stack[-3] = v_232;
v_183:
    v_232 = stack[-5];
    if (!car_legal(v_232)) v_232 = cdrerror(v_232); else
    v_232 = cdr(v_232);
    stack[-5] = v_232;
    v_232 = stack[-5];
    if (v_232 == nil) goto v_209;
    else goto v_210;
v_209:
    v_232 = stack[-3];
    goto v_182;
v_210:
    stack[-1] = stack[-2];
    v_232 = stack[-5];
    if (!car_legal(v_232)) v_232 = carerror(v_232); else
    v_232 = car(v_232);
    stack[0] = v_232;
    v_232 = stack[0];
    if (!car_legal(v_232)) v_233 = carerror(v_232); else
    v_233 = car(v_232);
    v_232 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_232 = cons(v_233, v_232);
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 16); // resimp
    v_232 = (*qfn1(fn))(fn, v_232);
    }
    env = stack[-8];
    if (!car_legal(v_232)) v_233 = carerror(v_232); else
    v_233 = car(v_232);
    v_232 = stack[0];
    if (!car_legal(v_232)) v_232 = cdrerror(v_232); else
    v_232 = cdr(v_232);
    v_232 = cons(v_233, v_232);
    env = stack[-8];
    v_232 = ncons(v_232);
    env = stack[-8];
    if (!car_legal(stack[-1])) rplacd_fails(stack[-1]);
    setcdr(stack[-1], v_232);
    v_232 = stack[-2];
    if (!car_legal(v_232)) v_232 = cdrerror(v_232); else
    v_232 = cdr(v_232);
    stack[-2] = v_232;
    goto v_183;
v_182:
    v_232 = cons(stack[-4], v_232);
    stack[-6] = v_232;
    goto v_168;
v_170:
v_168:
    v_232 = stack[-6];
v_10:
    ;}  // end of a binding scope
    return onevalue(v_232);
}



// Code for derad

static LispObject CC_derad(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_83, v_84, v_85;
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
v_8:
    v_83 = stack[0];
    if (v_83 == nil) goto v_11;
    else goto v_12;
v_11:
    stack[0] = stack[-2];
    v_83 = stack[-1];
    v_83 = ncons(v_83);
    env = stack[-3];
    {
        LispObject v_89 = stack[0];
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn2(fn))(fn, v_89, v_83);
    }
v_12:
    v_83 = stack[0];
    if (!car_legal(v_83)) v_83 = carerror(v_83); else
    v_83 = car(v_83);
    if (is_number(v_83)) goto v_18;
    else goto v_19;
v_18:
    v_83 = stack[0];
    if (!car_legal(v_83)) v_84 = carerror(v_83); else
    v_84 = car(v_83);
    v_83 = stack[-2];
    v_83 = cons(v_84, v_83);
    env = stack[-3];
    stack[-2] = v_83;
    v_83 = stack[0];
    if (!car_legal(v_83)) v_83 = cdrerror(v_83); else
    v_83 = cdr(v_83);
    stack[0] = v_83;
    goto v_8;
v_19:
    v_84 = stack[-1];
    v_83 = stack[0];
    if (!car_legal(v_83)) v_83 = carerror(v_83); else
    v_83 = car(v_83);
    if (equal(v_84, v_83)) goto v_28;
    else goto v_29;
v_28:
    v_83 = stack[0];
    if (!car_legal(v_83)) v_83 = cdrerror(v_83); else
    v_83 = cdr(v_83);
    if (v_83 == nil) goto v_36;
    v_83 = stack[0];
    if (!car_legal(v_83)) v_83 = cdrerror(v_83); else
    v_83 = cdr(v_83);
    if (!car_legal(v_83)) v_83 = carerror(v_83); else
    v_83 = car(v_83);
    if (is_number(v_83)) goto v_40;
    else goto v_36;
v_40:
    v_83 = stack[0];
    if (!car_legal(v_83)) v_83 = cdrerror(v_83); else
    v_83 = cdr(v_83);
    if (!car_legal(v_83)) v_83 = carerror(v_83); else
    v_83 = car(v_83);
    v_84 = add1(v_83);
    env = stack[-3];
    v_83 = stack[0];
    if (!car_legal(v_83)) v_83 = cdrerror(v_83); else
    v_83 = cdr(v_83);
    if (!car_legal(v_83)) v_83 = cdrerror(v_83); else
    v_83 = cdr(v_83);
    v_83 = list2star(stack[-1], v_84, v_83);
    env = stack[-3];
    {
        LispObject v_90 = stack[-2];
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn2(fn))(fn, v_90, v_83);
    }
v_36:
    v_85 = stack[-1];
    v_84 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_83 = stack[0];
    if (!car_legal(v_83)) v_83 = cdrerror(v_83); else
    v_83 = cdr(v_83);
    v_83 = list2star(v_85, v_84, v_83);
    env = stack[-3];
    {
        LispObject v_91 = stack[-2];
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn2(fn))(fn, v_91, v_83);
    }
    goto v_10;
v_29:
    v_84 = stack[-1];
    v_83 = stack[0];
    if (!car_legal(v_83)) v_83 = carerror(v_83); else
    v_83 = car(v_83);
    {   LispObject fn = basic_elt(env, 2); // ordp
    v_83 = (*qfn2(fn))(fn, v_84, v_83);
    }
    env = stack[-3];
    if (v_83 == nil) goto v_65;
    v_84 = stack[-1];
    v_83 = stack[0];
    v_83 = cons(v_84, v_83);
    env = stack[-3];
    {
        LispObject v_92 = stack[-2];
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn2(fn))(fn, v_92, v_83);
    }
v_65:
    v_83 = stack[0];
    if (!car_legal(v_83)) v_84 = carerror(v_83); else
    v_84 = car(v_83);
    v_83 = stack[-2];
    v_83 = cons(v_84, v_83);
    env = stack[-3];
    stack[-2] = v_83;
    v_83 = stack[0];
    if (!car_legal(v_83)) v_83 = cdrerror(v_83); else
    v_83 = cdr(v_83);
    stack[0] = v_83;
    goto v_8;
v_10:
    v_83 = nil;
    return onevalue(v_83);
}



// Code for dip2vdp

static LispObject CC_dip2vdp(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_40, v_41;
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
    v_41 = v_2;
// end of prologue
    v_40 = qvalue(basic_elt(env, 1)); // !*groebsubs
    if (v_40 == nil) goto v_7;
    v_40 = v_41;
    {   LispObject fn = basic_elt(env, 3); // dipsubs2
    v_40 = (*qfn1(fn))(fn, v_40);
    }
    env = stack[-3];
    goto v_5;
v_7:
    v_40 = v_41;
    goto v_5;
    v_40 = nil;
v_5:
    v_41 = v_40;
    v_40 = v_41;
    if (v_40 == nil) goto v_17;
    else goto v_18;
v_17:
    stack[-2] = basic_elt(env, 2); // vdp
    stack[-1] = nil;
    v_40 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {   LispObject fn = basic_elt(env, 4); // a2bc
    stack[0] = (*qfn1(fn))(fn, v_40);
    }
    env = stack[-3];
    v_41 = nil;
    v_40 = nil;
    v_40 = list2(v_41, v_40);
    {
        LispObject v_45 = stack[-2];
        LispObject v_46 = stack[-1];
        LispObject v_47 = stack[0];
        return list3star(v_45, v_46, v_47, v_40);
    }
v_18:
    stack[-2] = basic_elt(env, 2); // vdp
    v_40 = v_41;
    if (!car_legal(v_40)) stack[-1] = carerror(v_40); else
    stack[-1] = car(v_40);
    v_40 = v_41;
    if (!car_legal(v_40)) v_40 = cdrerror(v_40); else
    v_40 = cdr(v_40);
    if (!car_legal(v_40)) stack[0] = carerror(v_40); else
    stack[0] = car(v_40);
    v_40 = nil;
    v_40 = list2(v_41, v_40);
    {
        LispObject v_48 = stack[-2];
        LispObject v_49 = stack[-1];
        LispObject v_50 = stack[0];
        return list3star(v_48, v_49, v_50, v_40);
    }
    v_40 = nil;
    return onevalue(v_40);
}



// Code for indordn

static LispObject CC_indordn(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_34, v_35;
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
    v_35 = v_2;
// end of prologue
    v_34 = v_35;
    if (v_34 == nil) goto v_6;
    else goto v_7;
v_6:
    v_34 = nil;
    goto v_5;
v_7:
    v_34 = v_35;
    if (!car_legal(v_34)) v_34 = cdrerror(v_34); else
    v_34 = cdr(v_34);
    if (v_34 == nil) goto v_10;
    else goto v_11;
v_10:
    v_34 = v_35;
    goto v_5;
v_11:
    v_34 = v_35;
    if (!car_legal(v_34)) v_34 = cdrerror(v_34); else
    v_34 = cdr(v_34);
    if (!car_legal(v_34)) v_34 = cdrerror(v_34); else
    v_34 = cdr(v_34);
    if (v_34 == nil) goto v_15;
    else goto v_16;
v_15:
    v_34 = v_35;
    if (!car_legal(v_34)) v_34 = carerror(v_34); else
    v_34 = car(v_34);
    if (!car_legal(v_35)) v_35 = cdrerror(v_35); else
    v_35 = cdr(v_35);
    if (!car_legal(v_35)) v_35 = carerror(v_35); else
    v_35 = car(v_35);
    {
        LispObject fn = basic_elt(env, 1); // indord2
        return (*qfn2(fn))(fn, v_34, v_35);
    }
v_16:
    v_34 = v_35;
    if (!car_legal(v_34)) stack[0] = carerror(v_34); else
    stack[0] = car(v_34);
    v_34 = v_35;
    if (!car_legal(v_34)) v_34 = cdrerror(v_34); else
    v_34 = cdr(v_34);
    {   LispObject fn = basic_elt(env, 0); // indordn
    v_34 = (*qfn1(fn))(fn, v_34);
    }
    env = stack[-1];
    {
        LispObject v_37 = stack[0];
        LispObject fn = basic_elt(env, 2); // indordad
        return (*qfn2(fn))(fn, v_37, v_34);
    }
    v_34 = nil;
v_5:
    return onevalue(v_34);
}



// Code for generic!-sub

static LispObject CC_genericKsub(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_12, v_13;
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
    v_12 = v_3;
    v_13 = v_2;
// end of prologue
    stack[-2] = v_13;
    stack[-1] = basic_elt(env, 1); // dfp
    stack[0] = v_12;
    v_12 = basic_elt(env, 2); // list
    v_12 = ncons(v_12);
    env = stack[-3];
    v_12 = list3(stack[-1], stack[0], v_12);
    env = stack[-3];
    {
        LispObject v_17 = stack[-2];
        LispObject fn = basic_elt(env, 3); // dfp!-sub
        return (*qfn2(fn))(fn, v_17, v_12);
    }
}



// Code for symbol

static LispObject CC_symbol(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_45, v_46, v_47;
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
    v_46 = v_2;
// end of prologue
    v_45 = qvalue(basic_elt(env, 1)); // !*utf8
    if (v_45 == nil) goto v_7;
    v_45 = qvalue(basic_elt(env, 2)); // !*utf82d
    if (v_45 == nil) goto v_12;
    v_47 = v_46;
    v_45 = basic_elt(env, 3); // utf8_2d!-symbol!-character
    v_45 = get(v_47, v_45);
    env = stack[0];
    if (v_45 == nil) goto v_16;
    else goto v_15;
v_16:
    v_47 = v_46;
    v_45 = basic_elt(env, 4); // utf8_symbol!-character
    v_45 = get(v_47, v_45);
    env = stack[0];
    if (v_45 == nil) goto v_22;
    else goto v_21;
v_22:
    v_45 = v_46;
    v_46 = basic_elt(env, 5); // symbol!-character
    return get(v_45, v_46);
v_21:
v_15:
    goto v_10;
v_12:
    v_47 = v_46;
    v_45 = basic_elt(env, 4); // utf8_symbol!-character
    v_45 = get(v_47, v_45);
    env = stack[0];
    if (v_45 == nil) goto v_33;
    else goto v_32;
v_33:
    v_45 = v_46;
    v_46 = basic_elt(env, 5); // symbol!-character
    return get(v_45, v_46);
v_32:
    goto v_10;
    v_45 = nil;
v_10:
    goto v_5;
v_7:
    v_45 = v_46;
    v_46 = basic_elt(env, 5); // symbol!-character
    return get(v_45, v_46);
    v_45 = nil;
v_5:
    return onevalue(v_45);
}



// Code for modp

static LispObject CC_modp(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    v_22 = stack[-1];
    v_21 = stack[0];
    v_21 = Cremainder(v_22, v_21);
    env = stack[-2];
    stack[-1] = v_21;
    v_22 = stack[-1];
    v_21 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_21 = static_cast<LispObject>(lessp2(v_22, v_21));
    v_21 = v_21 ? lisp_true : nil;
    if (v_21 == nil) goto v_11;
    v_22 = stack[-1];
    v_21 = stack[0];
    return plus2(v_22, v_21);
v_11:
    v_21 = stack[-1];
    goto v_9;
    v_21 = nil;
v_9:
    return onevalue(v_21);
}



// Code for horner!-rule!-for!-one!-var

static LispObject CC_hornerKruleKforKoneKvar(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_93, v_94, v_95, v_96, v_97, v_98, v_99;
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
    real_push(nil);
    stack_popper stack_popper_var(7);
// copy arguments values to proper place
    v_95 = v_6;
    v_96 = v_5;
    v_97 = v_4;
    v_99 = v_3;
    v_98 = v_2;
// end of prologue
    v_93 = v_98;
    if (!consp(v_93)) goto v_18;
    else goto v_19;
v_18:
    v_93 = lisp_true;
    goto v_17;
v_19:
    v_93 = v_98;
    if (!car_legal(v_93)) v_93 = carerror(v_93); else
    v_93 = car(v_93);
    v_93 = (consp(v_93) ? nil : lisp_true);
    goto v_17;
    v_93 = nil;
v_17:
    if (v_93 == nil) goto v_15;
    v_93 = lisp_true;
    goto v_13;
v_15:
    v_93 = v_98;
    if (!car_legal(v_93)) v_93 = carerror(v_93); else
    v_93 = car(v_93);
    if (!car_legal(v_93)) v_93 = carerror(v_93); else
    v_93 = car(v_93);
    if (!car_legal(v_93)) v_94 = carerror(v_93); else
    v_94 = car(v_93);
    v_93 = v_99;
    v_93 = (equal(v_94, v_93) ? lisp_true : nil);
    v_93 = (v_93 == nil ? lisp_true : nil);
    goto v_13;
    v_93 = nil;
v_13:
    if (v_93 == nil) goto v_11;
    v_93 = v_97;
    v_93 = static_cast<LispObject>(zerop(v_93));
    v_93 = v_93 ? lisp_true : nil;
    env = stack[-6];
    if (v_93 == nil) goto v_40;
    v_93 = v_98;
    goto v_38;
v_40:
    stack[-1] = v_98;
    stack[0] = v_96;
    v_93 = v_97;
    v_94 = v_95;
    v_93 = Lexpt(nil, v_93, v_94);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 1); // !*n2f
    v_93 = (*qfn1(fn))(fn, v_93);
    }
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 2); // multf
    v_93 = (*qfn2(fn))(fn, stack[0], v_93);
    }
    env = stack[-6];
    {
        LispObject v_106 = stack[-1];
        LispObject fn = basic_elt(env, 3); // addf
        return (*qfn2(fn))(fn, v_106, v_93);
    }
    v_93 = nil;
v_38:
    goto v_9;
v_11:
    v_93 = v_98;
    if (!car_legal(v_93)) v_93 = carerror(v_93); else
    v_93 = car(v_93);
    if (!car_legal(v_93)) v_93 = carerror(v_93); else
    v_93 = car(v_93);
    if (!car_legal(v_93)) v_93 = cdrerror(v_93); else
    v_93 = cdr(v_93);
    stack[-5] = v_93;
    v_93 = v_98;
    if (!car_legal(v_93)) stack[-4] = cdrerror(v_93); else
    stack[-4] = cdr(v_93);
    stack[-3] = v_99;
    stack[-2] = v_97;
    v_93 = v_97;
    v_93 = static_cast<LispObject>(zerop(v_93));
    v_93 = v_93 ? lisp_true : nil;
    env = stack[-6];
    if (v_93 == nil) goto v_72;
    v_93 = v_98;
    if (!car_legal(v_93)) v_93 = carerror(v_93); else
    v_93 = car(v_93);
    if (!car_legal(v_93)) v_93 = cdrerror(v_93); else
    v_93 = cdr(v_93);
    v_94 = v_93;
    goto v_70;
v_72:
    v_93 = v_98;
    if (!car_legal(v_93)) v_93 = carerror(v_93); else
    v_93 = car(v_93);
    if (!car_legal(v_93)) stack[-1] = cdrerror(v_93); else
    stack[-1] = cdr(v_93);
    stack[0] = v_96;
    v_94 = v_97;
    v_93 = stack[-5];
    v_93 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_95) - static_cast<std::uintptr_t>(v_93) + TAG_FIXNUM);
    v_93 = Lexpt(nil, v_94, v_93);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 1); // !*n2f
    v_93 = (*qfn1(fn))(fn, v_93);
    }
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 2); // multf
    v_93 = (*qfn2(fn))(fn, stack[0], v_93);
    }
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 3); // addf
    v_93 = (*qfn2(fn))(fn, stack[-1], v_93);
    }
    env = stack[-6];
    v_94 = v_93;
    goto v_70;
    v_94 = nil;
v_70:
    v_93 = stack[-5];
    v_93 = list2(v_94, v_93);
    env = stack[-6];
    {
        LispObject v_107 = stack[-4];
        LispObject v_108 = stack[-3];
        LispObject v_109 = stack[-2];
        LispObject fn = basic_elt(env, 0); // horner!-rule!-for!-one!-var
        return (*qfn4up(fn))(fn, v_107, v_108, v_109, v_93);
    }
    goto v_9;
    v_93 = nil;
v_9:
    return onevalue(v_93);
}



// Code for letscalar

static LispObject CC_letscalar(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_235, v_236, v_237;
    LispObject v_5, v_6, v_7;
    if (_a4up_ == nil)
        aerror1("not enough arguments provided", basic_elt(env, 0));
    v_5 = car(_a4up_); _a4up_ = cdr(_a4up_);
    if (_a4up_ == nil)
        aerror1("not enough arguments provided", basic_elt(env, 0));
    v_6 = car(_a4up_); _a4up_ = cdr(_a4up_);
    if (_a4up_ == nil)
        aerror1("not enough arguments provided", basic_elt(env, 0));
    v_7 = car(_a4up_); _a4up_ = cdr(_a4up_);
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
        push(v_2,v_3,v_4,v_5,v_6,v_7);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_7,v_6,v_5,v_4,v_3,v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil, nil, nil, nil, nil);
    real_push(nil, nil, nil, nil, nil);
    real_push(nil);
    stack_popper stack_popper_var(12);
// copy arguments values to proper place
    stack[-4] = v_7;
    stack[-5] = v_6;
    stack[-6] = v_5;
    stack[-7] = v_4;
    stack[-8] = v_3;
    stack[-9] = v_2;
// end of prologue
    v_235 = stack[-6];
    if (!consp(v_235)) goto v_14;
    v_235 = stack[-6];
    if (!car_legal(v_235)) v_235 = carerror(v_235); else
    v_235 = car(v_235);
    if (symbolp(v_235)) goto v_19;
    v_236 = stack[-9];
    v_235 = basic_elt(env, 1); // hold
    {
        LispObject fn = basic_elt(env, 24); // errpri2
        return (*qfn2(fn))(fn, v_236, v_235);
    }
v_19:
    v_235 = stack[-6];
    if (!car_legal(v_235)) v_236 = carerror(v_235); else
    v_236 = car(v_235);
    v_235 = basic_elt(env, 2); // df
    if (v_236 == v_235) goto v_25;
    else goto v_26;
v_25:
    stack[-2] = stack[-9];
    stack[-1] = stack[-8];
    stack[0] = stack[-7];
    v_236 = stack[-6];
    v_235 = stack[-5];
    v_235 = list2(v_236, v_235);
    env = stack[-11];
    {   LispObject fn = basic_elt(env, 25); // letdf
    v_235 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_235);
    }
    env = stack[-11];
    if (v_235 == nil) goto v_32;
    else goto v_33;
v_32:
    goto v_31;
v_33:
    v_235 = nil;
    goto v_10;
v_31:
    goto v_17;
v_26:
    v_235 = stack[-6];
    if (!car_legal(v_235)) v_235 = carerror(v_235); else
    v_235 = car(v_235);
    {   LispObject fn = basic_elt(env, 26); // getrtype
    v_235 = (*qfn1(fn))(fn, v_235);
    }
    env = stack[-11];
    if (v_235 == nil) goto v_46;
    v_235 = stack[-6];
    {   LispObject fn = basic_elt(env, 27); // reval
    stack[0] = (*qfn1(fn))(fn, v_235);
    }
    env = stack[-11];
    stack[-1] = stack[-8];
    stack[-2] = stack[-7];
    v_235 = stack[-5];
    v_235 = ncons(v_235);
    env = stack[-11];
    {
        LispObject v_249 = stack[0];
        LispObject v_250 = stack[-1];
        LispObject v_251 = stack[-2];
        LispObject fn = basic_elt(env, 28); // let2
        return (*qfn4up(fn))(fn, v_249, v_250, v_251, v_235);
    }
v_46:
    v_235 = stack[-6];
    if (!car_legal(v_235)) v_235 = carerror(v_235); else
    v_235 = car(v_235);
    if (!symbolp(v_235)) v_235 = nil;
    else { v_235 = qfastgets(v_235);
           if (v_235 != nil) { v_235 = elt(v_235, 22); // simpfn
#ifdef RECORD_GET
             if (v_235 != SPID_NOPROP)
                record_get(elt(fastget_names, 22), 1);
             else record_get(elt(fastget_names, 22), 0),
                v_235 = nil; }
           else record_get(elt(fastget_names, 22), 0); }
#else
             if (v_235 == SPID_NOPROP) v_235 = nil; }}
#endif
    if (v_235 == nil) goto v_57;
    else goto v_58;
v_57:
    v_235 = stack[-6];
    if (!car_legal(v_235)) v_236 = carerror(v_235); else
    v_236 = car(v_235);
    v_235 = basic_elt(env, 3); // "operator"
    {   LispObject fn = basic_elt(env, 29); // redmsg
    v_235 = (*qfn2(fn))(fn, v_236, v_235);
    }
    env = stack[-11];
    v_235 = stack[-6];
    if (!car_legal(v_235)) v_235 = carerror(v_235); else
    v_235 = car(v_235);
    {   LispObject fn = basic_elt(env, 30); // mkop
    v_235 = (*qfn1(fn))(fn, v_235);
    }
    env = stack[-11];
    stack[0] = stack[-9];
    stack[-1] = stack[-8];
    stack[-2] = stack[-7];
    v_236 = stack[-5];
    v_235 = stack[-4];
    v_235 = list2(v_236, v_235);
    env = stack[-11];
    {
        LispObject v_252 = stack[0];
        LispObject v_253 = stack[-1];
        LispObject v_254 = stack[-2];
        LispObject fn = basic_elt(env, 31); // let3
        return (*qfn4up(fn))(fn, v_252, v_253, v_254, v_235);
    }
v_58:
    goto v_17;
v_17:
    goto v_12;
v_14:
    v_235 = stack[-5];
    if (v_235 == nil) goto v_83;
    else goto v_84;
v_83:
    v_235 = stack[-7];
    v_235 = (v_235 == nil ? lisp_true : nil);
    goto v_82;
v_84:
    v_235 = nil;
    goto v_82;
    v_235 = nil;
v_82:
    if (v_235 == nil) goto v_80;
    v_236 = stack[-6];
    v_235 = basic_elt(env, 4); // avalue
    v_235 = Lremprop(nil, v_236, v_235);
    env = stack[-11];
    v_236 = stack[-6];
    v_235 = basic_elt(env, 5); // rtype
    v_235 = Lremprop(nil, v_236, v_235);
    env = stack[-11];
    v_235 = stack[-6];
    v_236 = ncons(v_235);
    env = stack[-11];
    v_235 = basic_elt(env, 6); // antisymmetric
    v_235 = Lremflag(nil, v_236, v_235);
    env = stack[-11];
    v_236 = stack[-6];
    v_235 = basic_elt(env, 7); // infix
    v_235 = Lremprop(nil, v_236, v_235);
    env = stack[-11];
    v_236 = stack[-6];
    v_235 = basic_elt(env, 8); // kvalue
    v_235 = Lremprop(nil, v_236, v_235);
    env = stack[-11];
    v_235 = stack[-6];
    v_236 = ncons(v_235);
    env = stack[-11];
    v_235 = basic_elt(env, 9); // linear
    v_235 = Lremflag(nil, v_236, v_235);
    env = stack[-11];
    v_235 = stack[-6];
    v_236 = ncons(v_235);
    env = stack[-11];
    v_235 = basic_elt(env, 10); // noncom
    v_235 = Lremflag(nil, v_236, v_235);
    env = stack[-11];
    v_236 = stack[-6];
    v_235 = basic_elt(env, 11); // op
    v_235 = Lremprop(nil, v_236, v_235);
    env = stack[-11];
    v_236 = stack[-6];
    v_235 = basic_elt(env, 12); // opmtch
    v_235 = Lremprop(nil, v_236, v_235);
    env = stack[-11];
    v_236 = stack[-6];
    v_235 = basic_elt(env, 13); // simpfn
    v_235 = Lremprop(nil, v_236, v_235);
    env = stack[-11];
    v_235 = stack[-6];
    v_236 = ncons(v_235);
    env = stack[-11];
    v_235 = basic_elt(env, 14); // symmetric
    v_235 = Lremflag(nil, v_236, v_235);
    env = stack[-11];
    v_236 = stack[-6];
    v_235 = qvalue(basic_elt(env, 15)); // wtl!*
    {   LispObject fn = basic_elt(env, 32); // delasc
    v_235 = (*qfn2(fn))(fn, v_236, v_235);
    }
    env = stack[-11];
    setvalue(basic_elt(env, 15), v_235); // wtl!*
    v_235 = stack[-6];
    if (!symbolp(v_235)) v_235 = nil;
    else { v_235 = qfastgets(v_235);
           if (v_235 != nil) { v_235 = elt(v_235, 59); // opfn
#ifdef RECORD_GET
             if (v_235 == SPID_NOPROP)
                record_get(elt(fastget_names, 59), 0),
                v_235 = nil;
             else record_get(elt(fastget_names, 59), 1),
                v_235 = lisp_true; }
           else record_get(elt(fastget_names, 59), 0); }
#else
             if (v_235 == SPID_NOPROP) v_235 = nil; else v_235 = lisp_true; }}
#endif
    if (v_235 == nil) goto v_134;
    v_235 = stack[-6];
    v_236 = ncons(v_235);
    env = stack[-11];
    v_235 = basic_elt(env, 16); // opfn
    v_235 = Lremflag(nil, v_236, v_235);
    env = stack[-11];
    v_235 = stack[-6];
    v_235 = Lremd(nil, v_235);
    env = stack[-11];
    goto v_132;
v_134:
v_132:
    {   LispObject fn = basic_elt(env, 33); // rmsubs
    v_235 = (*qfn0(fn))(fn);
    }
    v_235 = nil;
    goto v_10;
v_80:
v_12:
    v_236 = stack[-6];
    v_235 = basic_elt(env, 17); // expt
    if (!consp(v_236)) goto v_152;
    v_236 = car(v_236);
    if (v_236 == v_235) goto v_151;
    else goto v_152;
v_151:
    v_235 = stack[-6];
    if (!car_legal(v_235)) v_235 = cdrerror(v_235); else
    v_235 = cdr(v_235);
    if (!car_legal(v_235)) v_235 = cdrerror(v_235); else
    v_235 = cdr(v_235);
    if (!car_legal(v_235)) v_236 = carerror(v_235); else
    v_236 = car(v_235);
    v_235 = qvalue(basic_elt(env, 18)); // frlis!*
    v_235 = Lmemq(nil, v_236, v_235);
    goto v_150;
v_152:
    v_235 = nil;
    goto v_150;
    v_235 = nil;
v_150:
    if (v_235 == nil) goto v_148;
    stack[-10] = stack[-9];
    stack[-3] = stack[-8];
    stack[-2] = stack[-7];
    v_236 = stack[-6];
    v_235 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 34); // to
    v_236 = (*qfn2(fn))(fn, v_236, v_235);
    }
    env = stack[-11];
    v_235 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_235 = cons(v_236, v_235);
    env = stack[-11];
    stack[-1] = ncons(v_235);
    env = stack[-11];
    stack[0] = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_236 = stack[-5];
    v_235 = stack[-4];
    v_235 = list2(v_236, v_235);
    env = stack[-11];
    v_235 = acons(stack[-1], stack[0], v_235);
    env = stack[-11];
    {   LispObject fn = basic_elt(env, 35); // letexprn
    v_235 = (*qfn4up(fn))(fn, stack[-10], stack[-3], stack[-2], v_235);
    }
    env = stack[-11];
    goto v_146;
v_148:
    v_236 = stack[-6];
    v_235 = basic_elt(env, 19); // sqrt
    if (!consp(v_236)) goto v_181;
    v_236 = car(v_236);
    if (v_236 == v_235) goto v_180;
    else goto v_181;
v_180:
    v_235 = lisp_true;
    setvalue(basic_elt(env, 20), v_235); // !*sqrtrulep
    v_237 = basic_elt(env, 17); // expt
    v_235 = stack[-6];
    if (!car_legal(v_235)) v_235 = cdrerror(v_235); else
    v_235 = cdr(v_235);
    if (!car_legal(v_235)) v_236 = carerror(v_235); else
    v_236 = car(v_235);
    v_235 = basic_elt(env, 21); // (quotient 1 2)
    stack[-2] = list3(v_237, v_236, v_235);
    env = stack[-11];
    stack[-1] = stack[-8];
    stack[0] = stack[-7];
    v_235 = stack[-5];
    v_235 = ncons(v_235);
    env = stack[-11];
    {   LispObject fn = basic_elt(env, 28); // let2
    v_235 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_235);
    }
    env = stack[-11];
    goto v_146;
v_181:
v_146:
    v_236 = stack[-6];
    v_235 = qvalue(basic_elt(env, 22)); // varstack!*
    v_235 = Ldelete(nil, v_236, v_235);
    env = stack[-11];
    setvalue(basic_elt(env, 22), v_235); // varstack!*
    v_235 = lisp_true;
// Binding !*precise
// FLUIDBIND: reloadenv=11 litvec-offset=23 saveloc=0
{   bind_fluid_stack bind_fluid_var(-11, 23, 0);
    setvalue(basic_elt(env, 23), v_235); // !*precise
    v_235 = stack[-6];
    {   LispObject fn = basic_elt(env, 36); // simp0
    v_235 = (*qfn1(fn))(fn, v_235);
    }
    env = stack[-11];
    stack[-6] = v_235;
    ;}  // end of a binding scope
    v_235 = stack[-6];
    if (!car_legal(v_235)) v_235 = carerror(v_235); else
    v_235 = car(v_235);
    if (!consp(v_235)) goto v_212;
    else goto v_213;
v_212:
    v_235 = lisp_true;
    goto v_211;
v_213:
    v_235 = stack[-6];
    if (!car_legal(v_235)) v_235 = carerror(v_235); else
    v_235 = car(v_235);
    if (!car_legal(v_235)) v_235 = carerror(v_235); else
    v_235 = car(v_235);
    v_235 = (consp(v_235) ? nil : lisp_true);
    goto v_211;
    v_235 = nil;
v_211:
    if (v_235 == nil) goto v_208;
    else goto v_209;
v_208:
    stack[0] = stack[-9];
    stack[-1] = stack[-8];
    stack[-2] = stack[-7];
    v_237 = stack[-6];
    v_236 = stack[-5];
    v_235 = stack[-4];
    v_235 = list3(v_237, v_236, v_235);
    env = stack[-11];
    {
        LispObject v_255 = stack[0];
        LispObject v_256 = stack[-1];
        LispObject v_257 = stack[-2];
        LispObject fn = basic_elt(env, 35); // letexprn
        return (*qfn4up(fn))(fn, v_255, v_256, v_257, v_235);
    }
v_209:
    v_235 = stack[-9];
    {
        LispObject fn = basic_elt(env, 37); // errpri1
        return (*qfn1(fn))(fn, v_235);
    }
    v_235 = nil;
v_10:
    return onevalue(v_235);
}



// Code for ra_l

static LispObject CC_ra_l(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // ra_iv
    v_7 = (*qfn1(fn))(fn, v_7);
    }
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // riv_l
        return (*qfn1(fn))(fn, v_7);
    }
}



// Code for lalr_process_productions

static LispObject CC_lalr_process_productions(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_140, v_141, v_142;
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
    stack[-9] = v_3;
    v_140 = v_2;
// end of prologue
    stack[-6] = v_140;
v_16:
    v_140 = stack[-6];
    if (v_140 == nil) goto v_20;
    else goto v_21;
v_20:
    goto v_15;
v_21:
    v_140 = stack[-6];
    if (!car_legal(v_140)) v_140 = carerror(v_140); else
    v_140 = car(v_140);
    v_141 = v_140;
    v_140 = v_141;
    if (!car_legal(v_140)) v_140 = carerror(v_140); else
    v_140 = car(v_140);
    stack[-10] = v_140;
    v_140 = nil;
    stack[-8] = v_140;
    v_140 = v_141;
    if (!car_legal(v_140)) v_140 = cdrerror(v_140); else
    v_140 = cdr(v_140);
    stack[-5] = v_140;
v_33:
    v_140 = stack[-5];
    if (v_140 == nil) goto v_38;
    else goto v_39;
v_38:
    goto v_32;
v_39:
    v_140 = stack[-5];
    if (!car_legal(v_140)) v_140 = carerror(v_140); else
    v_140 = car(v_140);
    v_141 = v_140;
    if (!car_legal(v_141)) v_141 = carerror(v_141); else
    v_141 = car(v_141);
    if (!car_legal(v_140)) v_140 = cdrerror(v_140); else
    v_140 = cdr(v_140);
    stack[-7] = v_140;
    v_140 = v_141;
    stack[-4] = v_140;
    v_140 = stack[-4];
    if (v_140 == nil) goto v_58;
    else goto v_59;
v_58:
    v_140 = nil;
    goto v_53;
v_59:
    v_140 = stack[-4];
    if (!car_legal(v_140)) v_140 = carerror(v_140); else
    v_140 = car(v_140);
    stack[0] = v_140;
    v_140 = stack[0];
    v_141 = Lintern(nil, v_140);
    env = stack[-11];
    v_140 = qvalue(basic_elt(env, 1)); // nonterminals
    v_140 = Lmember(nil, v_141, v_140);
    if (v_140 == nil) goto v_69;
    v_140 = stack[0];
    v_140 = Lintern(nil, v_140);
    env = stack[-11];
    goto v_67;
v_69:
    v_140 = stack[0];
    v_141 = Lintern(nil, v_140);
    env = stack[-11];
    v_140 = stack[-9];
    {   LispObject fn = basic_elt(env, 3); // carrassoc
    v_140 = (*qfn2(fn))(fn, v_141, v_140);
    }
    env = stack[-11];
    goto v_67;
    v_140 = nil;
v_67:
    v_140 = ncons(v_140);
    env = stack[-11];
    stack[-2] = v_140;
    stack[-3] = v_140;
v_54:
    v_140 = stack[-4];
    if (!car_legal(v_140)) v_140 = cdrerror(v_140); else
    v_140 = cdr(v_140);
    stack[-4] = v_140;
    v_140 = stack[-4];
    if (v_140 == nil) goto v_86;
    else goto v_87;
v_86:
    v_140 = stack[-3];
    goto v_53;
v_87:
    stack[-1] = stack[-2];
    v_140 = stack[-4];
    if (!car_legal(v_140)) v_140 = carerror(v_140); else
    v_140 = car(v_140);
    stack[0] = v_140;
    v_140 = stack[0];
    v_141 = Lintern(nil, v_140);
    env = stack[-11];
    v_140 = qvalue(basic_elt(env, 1)); // nonterminals
    v_140 = Lmember(nil, v_141, v_140);
    if (v_140 == nil) goto v_98;
    v_140 = stack[0];
    v_140 = Lintern(nil, v_140);
    env = stack[-11];
    goto v_96;
v_98:
    v_140 = stack[0];
    v_141 = Lintern(nil, v_140);
    env = stack[-11];
    v_140 = stack[-9];
    {   LispObject fn = basic_elt(env, 3); // carrassoc
    v_140 = (*qfn2(fn))(fn, v_141, v_140);
    }
    env = stack[-11];
    goto v_96;
    v_140 = nil;
v_96:
    v_140 = ncons(v_140);
    env = stack[-11];
    if (!car_legal(stack[-1])) rplacd_fails(stack[-1]);
    setcdr(stack[-1], v_140);
    v_140 = stack[-2];
    if (!car_legal(v_140)) v_140 = cdrerror(v_140); else
    v_140 = cdr(v_140);
    stack[-2] = v_140;
    goto v_54;
v_53:
    v_141 = v_140;
    v_140 = stack[-7];
    v_140 = cons(v_141, v_140);
    env = stack[-11];
    v_141 = v_140;
    v_140 = stack[-8];
    v_140 = cons(v_141, v_140);
    env = stack[-11];
    stack[-8] = v_140;
    v_140 = stack[-5];
    if (!car_legal(v_140)) v_140 = cdrerror(v_140); else
    v_140 = cdr(v_140);
    stack[-5] = v_140;
    goto v_33;
v_32:
    v_140 = stack[-10];
    v_141 = Lintern(nil, v_140);
    env = stack[-11];
    v_140 = basic_elt(env, 2); // lalr_produces
    v_140 = get(v_141, v_140);
    env = stack[-11];
    v_141 = v_140;
    if (v_140 == nil) goto v_125;
    v_140 = stack[-8];
    v_140 = Lappend_2(nil, v_141, v_140);
    env = stack[-11];
    stack[-8] = v_140;
    goto v_123;
v_125:
v_123:
    v_140 = stack[-10];
    v_142 = Lintern(nil, v_140);
    env = stack[-11];
    v_141 = basic_elt(env, 2); // lalr_produces
    v_140 = stack[-8];
    v_140 = Lputprop(nil, v_142, v_141, v_140);
    env = stack[-11];
    v_140 = stack[-6];
    if (!car_legal(v_140)) v_140 = cdrerror(v_140); else
    v_140 = cdr(v_140);
    stack[-6] = v_140;
    goto v_16;
v_15:
    v_140 = nil;
    return onevalue(v_140);
}



// Code for read_signature

static LispObject CC_read_signature(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_140, v_141;
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// end of prologue
    v_140 = qvalue(basic_elt(env, 1)); // cursym!*
    stack[-2] = v_140;
    v_140 = stack[-2];
    {   LispObject fn = basic_elt(env, 10); // valid_as_variable
    v_140 = (*qfn1(fn))(fn, v_140);
    }
    env = stack[-3];
    if (v_140 == nil) goto v_10;
    else goto v_11;
v_10:
    stack[-1] = basic_elt(env, 2); // rlisp
    stack[0] = static_cast<LispObject>(112)+TAG_FIXNUM; // 7
    v_141 = stack[-2];
    v_140 = basic_elt(env, 3); // "invalid as formal parameter name"
    v_140 = list2(v_141, v_140);
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 11); // rerror
    v_140 = (*qfn3(fn))(fn, stack[-1], stack[0], v_140);
    }
    env = stack[-3];
    goto v_9;
v_11:
v_9:
    {   LispObject fn = basic_elt(env, 12); // scan
    v_140 = (*qfn0(fn))(fn);
    }
    env = stack[-3];
    v_141 = qvalue(basic_elt(env, 1)); // cursym!*
    v_140 = basic_elt(env, 4); // !*semicol!*
    if (v_141 == v_140) goto v_23;
    else goto v_24;
v_23:
    v_140 = stack[-2];
    v_140 = ncons(v_140);
    env = stack[-3];
    v_141 = basic_elt(env, 5); // general
    return list2(v_140, v_141);
v_24:
    v_141 = qvalue(basic_elt(env, 1)); // cursym!*
    v_140 = basic_elt(env, 6); // !*colon!*
    if (v_141 == v_140) goto v_33;
    else goto v_34;
v_33:
    {   LispObject fn = basic_elt(env, 12); // scan
    v_140 = (*qfn0(fn))(fn);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 13); // read_type
    v_140 = (*qfn0(fn))(fn);
    }
    env = stack[-3];
    stack[0] = v_140;
    v_141 = qvalue(basic_elt(env, 1)); // cursym!*
    v_140 = basic_elt(env, 4); // !*semicol!*
    if (v_141 == v_140) goto v_41;
    else goto v_42;
v_41:
    v_140 = stack[-2];
    v_141 = ncons(v_140);
    v_140 = stack[0];
    return list2(v_141, v_140);
v_42:
    v_140 = qvalue(basic_elt(env, 1)); // cursym!*
    if (symbolp(v_140)) goto v_54;
    v_140 = lisp_true;
    goto v_52;
v_54:
    v_140 = qvalue(basic_elt(env, 1)); // cursym!*
    if (!symbolp(v_140)) v_140 = nil;
    else { v_140 = qfastgets(v_140);
           if (v_140 != nil) { v_140 = elt(v_140, 23); // infix
#ifdef RECORD_GET
             if (v_140 != SPID_NOPROP)
                record_get(elt(fastget_names, 23), 1);
             else record_get(elt(fastget_names, 23), 0),
                v_140 = nil; }
           else record_get(elt(fastget_names, 23), 0); }
#else
             if (v_140 == SPID_NOPROP) v_140 = nil; }}
#endif
    v_140 = (v_140 == nil ? lisp_true : nil);
    goto v_52;
    v_140 = nil;
v_52:
    if (v_140 == nil) goto v_50;
    v_141 = nil;
    v_140 = qvalue(basic_elt(env, 1)); // cursym!*
    {   LispObject fn = basic_elt(env, 14); // symerr
    v_140 = (*qfn2(fn))(fn, v_141, v_140);
    }
    env = stack[-3];
    goto v_40;
v_50:
v_40:
    v_141 = stack[-2];
    v_140 = stack[0];
    v_140 = cons(v_141, v_140);
    env = stack[-3];
    stack[-2] = v_140;
    v_140 = qvalue(basic_elt(env, 1)); // cursym!*
    stack[0] = v_140;
    {   LispObject fn = basic_elt(env, 12); // scan
    v_140 = (*qfn0(fn))(fn);
    }
    env = stack[-3];
    stack[-1] = stack[-2];
    {   LispObject fn = basic_elt(env, 15); // read_typed_name
    v_140 = (*qfn0(fn))(fn);
    }
    env = stack[-3];
    v_140 = list3(stack[0], stack[-1], v_140);
    env = stack[-3];
    stack[-2] = v_140;
    goto v_32;
v_34:
    v_141 = qvalue(basic_elt(env, 1)); // cursym!*
    v_140 = basic_elt(env, 7); // !*lpar!*
    if (v_141 == v_140) goto v_74;
    else goto v_75;
v_74:
    {   LispObject fn = basic_elt(env, 12); // scan
    v_140 = (*qfn0(fn))(fn);
    }
    env = stack[-3];
    v_141 = qvalue(basic_elt(env, 1)); // cursym!*
    v_140 = basic_elt(env, 8); // !*rpar!*
    if (v_141 == v_140) goto v_81;
    else goto v_82;
v_81:
    v_140 = stack[-2];
    v_140 = ncons(v_140);
    env = stack[-3];
    stack[-2] = v_140;
    goto v_80;
v_82:
    stack[0] = stack[-2];
    {   LispObject fn = basic_elt(env, 16); // read_namelist
    v_140 = (*qfn0(fn))(fn);
    }
    env = stack[-3];
    v_140 = cons(stack[0], v_140);
    env = stack[-3];
    stack[-2] = v_140;
    v_141 = qvalue(basic_elt(env, 1)); // cursym!*
    v_140 = basic_elt(env, 8); // !*rpar!*
    if (v_141 == v_140) goto v_95;
    stack[-1] = basic_elt(env, 2); // rlisp
    stack[0] = static_cast<LispObject>(128)+TAG_FIXNUM; // 8
    v_141 = qvalue(basic_elt(env, 1)); // cursym!*
    v_140 = basic_elt(env, 9); // "found where right parenthesis expected"
    v_140 = list2(v_141, v_140);
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 11); // rerror
    v_140 = (*qfn3(fn))(fn, stack[-1], stack[0], v_140);
    }
    env = stack[-3];
    goto v_93;
v_95:
v_93:
    goto v_80;
v_80:
    {   LispObject fn = basic_elt(env, 12); // scan
    v_140 = (*qfn0(fn))(fn);
    }
    env = stack[-3];
    goto v_32;
v_75:
    v_140 = qvalue(basic_elt(env, 1)); // cursym!*
    if (symbolp(v_140)) goto v_107;
    else goto v_106;
v_107:
    v_140 = qvalue(basic_elt(env, 1)); // cursym!*
    if (!symbolp(v_140)) v_140 = nil;
    else { v_140 = qfastgets(v_140);
           if (v_140 != nil) { v_140 = elt(v_140, 23); // infix
#ifdef RECORD_GET
             if (v_140 != SPID_NOPROP)
                record_get(elt(fastget_names, 23), 1);
             else record_get(elt(fastget_names, 23), 0),
                v_140 = nil; }
           else record_get(elt(fastget_names, 23), 0); }
#else
             if (v_140 == SPID_NOPROP) v_140 = nil; }}
#endif
    if (v_140 == nil) goto v_106;
    v_140 = qvalue(basic_elt(env, 1)); // cursym!*
    stack[0] = v_140;
    {   LispObject fn = basic_elt(env, 12); // scan
    v_140 = (*qfn0(fn))(fn);
    }
    env = stack[-3];
    v_141 = stack[-2];
    v_140 = basic_elt(env, 5); // general
    stack[-1] = cons(v_141, v_140);
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 15); // read_typed_name
    v_140 = (*qfn0(fn))(fn);
    }
    env = stack[-3];
    v_140 = list3(stack[0], stack[-1], v_140);
    env = stack[-3];
    stack[-2] = v_140;
    goto v_32;
v_106:
    stack[0] = stack[-2];
    {   LispObject fn = basic_elt(env, 15); // read_typed_name
    v_140 = (*qfn0(fn))(fn);
    }
    env = stack[-3];
    v_140 = list2(stack[0], v_140);
    env = stack[-3];
    stack[-2] = v_140;
    goto v_32;
v_32:
    v_141 = qvalue(basic_elt(env, 1)); // cursym!*
    v_140 = basic_elt(env, 6); // !*colon!*
    if (v_141 == v_140) goto v_127;
    else goto v_128;
v_127:
    {   LispObject fn = basic_elt(env, 12); // scan
    v_140 = (*qfn0(fn))(fn);
    }
    env = stack[-3];
    stack[0] = stack[-2];
    {   LispObject fn = basic_elt(env, 13); // read_type
    v_140 = (*qfn0(fn))(fn);
    }
    {
        LispObject v_145 = stack[0];
        return list2(v_145, v_140);
    }
v_128:
    v_140 = stack[-2];
    v_141 = basic_elt(env, 5); // general
    return list2(v_140, v_141);
    v_140 = nil;
    return onevalue(v_140);
}



// Code for ofsf_smordtable

static LispObject CC_ofsf_smordtable(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_15, v_16, v_17;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_15 = v_3;
    v_16 = v_2;
// end of prologue
    v_17 = basic_elt(env, 1); // ((equal (equal . false) (neq equal . t) (geq equal . t) (leq . false) (greaterp equal . t) (lessp . false)) (neq (equal equal)
// (neq) (geq) (leq leq) (greaterp) (lessp lessp)) (geq (equal . false) (neq geq . t) (geq geq . t) (leq . false) (greaterp
// geq . t) (lessp . false)) (leq (equal equal) (neq) (geq) (leq leq) (greaterp) (lessp lessp)) (greaterp (equal . false) (neq
// greaterp . t) (geq greaterp . t) (leq . false) (greaterp greaterp . t) (lessp . false)) (lessp (equal equal) (neq) (geq)
// (leq leq) (greaterp) (lessp lessp)))
    v_16 = Latsoc(nil, v_16, v_17);
    v_15 = Latsoc(nil, v_15, v_16);
    if (!car_legal(v_15)) v_15 = cdrerror(v_15); else
    v_15 = cdr(v_15);
    return onevalue(v_15);
}



// Code for mk!+squared!+norm

static LispObject CC_mkLsquaredLnorm(LispObject env,
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
    v_10 = v_9;
    {
        LispObject fn = basic_elt(env, 1); // mk!+inner!+product
        return (*qfn2(fn))(fn, v_10, v_9);
    }
    return onevalue(v_9);
}



// Code for cgp_mk

static LispObject CC_cgp_mk(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_16, v_17, v_18, v_19, v_20;
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    v_16 = v_6;
    v_17 = v_5;
    v_18 = v_4;
    v_19 = v_3;
    v_20 = v_2;
// end of prologue
    stack[-2] = basic_elt(env, 1); // cgp
    stack[-1] = v_20;
    stack[0] = v_19;
    v_16 = list3(v_18, v_17, v_16);
    {
        LispObject v_24 = stack[-2];
        LispObject v_25 = stack[-1];
        LispObject v_26 = stack[0];
        return list3star(v_24, v_25, v_26, v_16);
    }
}



// Code for semanticml

static LispObject CC_semanticml(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_76, v_77;
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
    v_76 = stack[0];
    v_77 = Llength(nil, v_76);
    env = stack[-1];
    v_76 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_76 = static_cast<LispObject>(greaterp2(v_77, v_76));
    v_76 = v_76 ? lisp_true : nil;
    env = stack[-1];
    if (v_76 == nil) goto v_9;
    v_76 = basic_elt(env, 1); // "<apply>"
    {   LispObject fn = basic_elt(env, 13); // printout
    v_76 = (*qfn1(fn))(fn, v_76);
    }
    env = stack[-1];
    v_76 = lisp_true;
    {   LispObject fn = basic_elt(env, 14); // indent!*
    v_76 = (*qfn1(fn))(fn, v_76);
    }
    env = stack[-1];
    v_76 = basic_elt(env, 2); // "<fn>"
    {   LispObject fn = basic_elt(env, 13); // printout
    v_76 = (*qfn1(fn))(fn, v_76);
    }
    env = stack[-1];
    v_76 = lisp_true;
    {   LispObject fn = basic_elt(env, 14); // indent!*
    v_76 = (*qfn1(fn))(fn, v_76);
    }
    env = stack[-1];
    goto v_7;
v_9:
v_7:
    v_76 = basic_elt(env, 3); // "<semantic>"
    {   LispObject fn = basic_elt(env, 13); // printout
    v_76 = (*qfn1(fn))(fn, v_76);
    }
    env = stack[-1];
    v_76 = lisp_true;
    {   LispObject fn = basic_elt(env, 14); // indent!*
    v_76 = (*qfn1(fn))(fn, v_76);
    }
    env = stack[-1];
    v_76 = basic_elt(env, 4); // "<ci><mo>"
    {   LispObject fn = basic_elt(env, 13); // printout
    v_76 = (*qfn1(fn))(fn, v_76);
    }
    env = stack[-1];
    v_76 = stack[0];
    if (!car_legal(v_76)) v_76 = carerror(v_76); else
    v_76 = car(v_76);
    if (!car_legal(v_76)) v_76 = carerror(v_76); else
    v_76 = car(v_76);
    v_76 = Lprinc(nil, v_76);
    env = stack[-1];
    v_76 = basic_elt(env, 5); // "</mo></ci>"
    v_76 = Lprinc(nil, v_76);
    env = stack[-1];
    v_76 = basic_elt(env, 6); // "<annotation-xml encoding=""OpenMath"">"
    {   LispObject fn = basic_elt(env, 13); // printout
    v_76 = (*qfn1(fn))(fn, v_76);
    }
    env = stack[-1];
    v_76 = lisp_true;
    {   LispObject fn = basic_elt(env, 14); // indent!*
    v_76 = (*qfn1(fn))(fn, v_76);
    }
    env = stack[-1];
    v_76 = basic_elt(env, 7); // "<"
    {   LispObject fn = basic_elt(env, 13); // printout
    v_76 = (*qfn1(fn))(fn, v_76);
    }
    env = stack[-1];
    v_76 = stack[0];
    if (!car_legal(v_76)) v_76 = carerror(v_76); else
    v_76 = car(v_76);
    if (!car_legal(v_76)) v_76 = cdrerror(v_76); else
    v_76 = cdr(v_76);
    if (!car_legal(v_76)) v_76 = carerror(v_76); else
    v_76 = car(v_76);
    {   LispObject fn = basic_elt(env, 15); // mathml_list2string
    v_76 = (*qfn1(fn))(fn, v_76);
    }
    env = stack[-1];
    v_76 = basic_elt(env, 8); // ">"
    v_76 = Lprinc(nil, v_76);
    env = stack[-1];
    v_76 = nil;
    {   LispObject fn = basic_elt(env, 14); // indent!*
    v_76 = (*qfn1(fn))(fn, v_76);
    }
    env = stack[-1];
    v_76 = basic_elt(env, 9); // "</annotation-xml>"
    {   LispObject fn = basic_elt(env, 13); // printout
    v_76 = (*qfn1(fn))(fn, v_76);
    }
    env = stack[-1];
    v_76 = nil;
    {   LispObject fn = basic_elt(env, 14); // indent!*
    v_76 = (*qfn1(fn))(fn, v_76);
    }
    env = stack[-1];
    v_76 = basic_elt(env, 10); // "</semantic>"
    {   LispObject fn = basic_elt(env, 13); // printout
    v_76 = (*qfn1(fn))(fn, v_76);
    }
    env = stack[-1];
    v_76 = stack[0];
    v_77 = Llength(nil, v_76);
    env = stack[-1];
    v_76 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_76 = static_cast<LispObject>(greaterp2(v_77, v_76));
    v_76 = v_76 ? lisp_true : nil;
    env = stack[-1];
    if (v_76 == nil) goto v_59;
    v_76 = nil;
    {   LispObject fn = basic_elt(env, 14); // indent!*
    v_76 = (*qfn1(fn))(fn, v_76);
    }
    env = stack[-1];
    v_76 = basic_elt(env, 11); // "</fn>"
    {   LispObject fn = basic_elt(env, 13); // printout
    v_76 = (*qfn1(fn))(fn, v_76);
    }
    env = stack[-1];
    v_76 = stack[0];
    if (!car_legal(v_76)) v_76 = cdrerror(v_76); else
    v_76 = cdr(v_76);
    {   LispObject fn = basic_elt(env, 16); // multi_elem
    v_76 = (*qfn1(fn))(fn, v_76);
    }
    env = stack[-1];
    v_76 = nil;
    {   LispObject fn = basic_elt(env, 14); // indent!*
    v_76 = (*qfn1(fn))(fn, v_76);
    }
    env = stack[-1];
    v_76 = basic_elt(env, 12); // "</apply>"
    {   LispObject fn = basic_elt(env, 13); // printout
    v_76 = (*qfn1(fn))(fn, v_76);
    }
    goto v_57;
v_59:
v_57:
    v_76 = nil;
    return onevalue(v_76);
}



// Code for evalvars

static LispObject CC_evalvars(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_69, v_70;
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
    v_69 = stack[-1];
    if (v_69 == nil) goto v_10;
    else goto v_11;
v_10:
    v_69 = stack[-2];
    {
        LispObject fn = basic_elt(env, 3); // nreverse
        return (*qfn1(fn))(fn, v_69);
    }
v_11:
    v_69 = stack[-1];
    if (!car_legal(v_69)) v_69 = carerror(v_69); else
    v_69 = car(v_69);
    if (!consp(v_69)) goto v_19;
    else goto v_20;
v_19:
    v_69 = lisp_true;
    goto v_18;
v_20:
    v_69 = stack[-1];
    if (!car_legal(v_69)) v_69 = carerror(v_69); else
    v_69 = car(v_69);
    if (!car_legal(v_69)) v_70 = carerror(v_69); else
    v_70 = car(v_69);
    v_69 = basic_elt(env, 1); // intfn
    v_69 = Lflagp(nil, v_70, v_69);
    env = stack[-3];
    goto v_18;
    v_69 = nil;
v_18:
    if (v_69 == nil) goto v_16;
    v_69 = stack[-1];
    if (!car_legal(v_69)) v_70 = carerror(v_69); else
    v_70 = car(v_69);
    v_69 = stack[-2];
    v_69 = cons(v_70, v_69);
    env = stack[-3];
    stack[-2] = v_69;
    v_69 = stack[-1];
    if (!car_legal(v_69)) v_69 = cdrerror(v_69); else
    v_69 = cdr(v_69);
    stack[-1] = v_69;
    goto v_7;
v_16:
    v_69 = stack[-1];
    if (!car_legal(v_69)) v_69 = carerror(v_69); else
    v_69 = car(v_69);
    if (!car_legal(v_69)) v_69 = carerror(v_69); else
    v_69 = car(v_69);
    if (!symbolp(v_69)) v_70 = nil;
    else { v_70 = qfastgets(v_69);
           if (v_70 != nil) { v_70 = elt(v_70, 2); // rtype
#ifdef RECORD_GET
             if (v_70 != SPID_NOPROP)
                record_get(elt(fastget_names, 2), 1);
             else record_get(elt(fastget_names, 2), 0),
                v_70 = nil; }
           else record_get(elt(fastget_names, 2), 0); }
#else
             if (v_70 == SPID_NOPROP) v_70 = nil; }}
#endif
    v_69 = basic_elt(env, 2); // setelemfn
    v_69 = get(v_70, v_69);
    env = stack[-3];
    if (v_69 == nil) goto v_38;
    v_69 = stack[-1];
    if (!car_legal(v_69)) v_69 = carerror(v_69); else
    v_69 = car(v_69);
    if (!car_legal(v_69)) stack[0] = carerror(v_69); else
    stack[0] = car(v_69);
    v_69 = stack[-1];
    if (!car_legal(v_69)) v_69 = carerror(v_69); else
    v_69 = car(v_69);
    if (!car_legal(v_69)) v_69 = cdrerror(v_69); else
    v_69 = cdr(v_69);
    {   LispObject fn = basic_elt(env, 4); // revlis_without_mode
    v_70 = (*qfn1(fn))(fn, v_69);
    }
    env = stack[-3];
    v_69 = stack[-2];
    v_69 = acons(stack[0], v_70, v_69);
    env = stack[-3];
    stack[-2] = v_69;
    v_69 = stack[-1];
    if (!car_legal(v_69)) v_69 = cdrerror(v_69); else
    v_69 = cdr(v_69);
    stack[-1] = v_69;
    goto v_7;
v_38:
    v_69 = stack[-1];
    if (!car_legal(v_69)) v_69 = carerror(v_69); else
    v_69 = car(v_69);
    if (!car_legal(v_69)) stack[0] = carerror(v_69); else
    stack[0] = car(v_69);
    v_69 = stack[-1];
    if (!car_legal(v_69)) v_69 = carerror(v_69); else
    v_69 = car(v_69);
    if (!car_legal(v_69)) v_69 = cdrerror(v_69); else
    v_69 = cdr(v_69);
    {   LispObject fn = basic_elt(env, 5); // revlis
    v_70 = (*qfn1(fn))(fn, v_69);
    }
    env = stack[-3];
    v_69 = stack[-2];
    v_69 = acons(stack[0], v_70, v_69);
    env = stack[-3];
    stack[-2] = v_69;
    v_69 = stack[-1];
    if (!car_legal(v_69)) v_69 = cdrerror(v_69); else
    v_69 = cdr(v_69);
    stack[-1] = v_69;
    goto v_7;
    v_69 = nil;
    return onevalue(v_69);
}



// Code for vdp2a

static LispObject CC_vdp2a(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_10;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_10 = v_2;
// end of prologue
    if (!car_legal(v_10)) v_10 = cdrerror(v_10); else
    v_10 = cdr(v_10);
    if (!car_legal(v_10)) v_10 = cdrerror(v_10); else
    v_10 = cdr(v_10);
    if (!car_legal(v_10)) v_10 = cdrerror(v_10); else
    v_10 = cdr(v_10);
    if (!car_legal(v_10)) v_10 = carerror(v_10); else
    v_10 = car(v_10);
    {
        LispObject fn = basic_elt(env, 1); // dip2a
        return (*qfn1(fn))(fn, v_10);
    }
}



// Code for overall_factor

static LispObject CC_overall_factor(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_28 = stack[0];
    if (v_28 == nil) goto v_7;
    else goto v_8;
v_7:
    v_28 = lisp_true;
    goto v_6;
v_8:
    stack[-2] = stack[-1];
    v_28 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // xval
    v_28 = (*qfn1(fn))(fn, v_28);
    }
    env = stack[-3];
    v_28 = Lmemq(nil, stack[-2], v_28);
    if (v_28 == nil) goto v_15;
    else goto v_16;
v_15:
    v_28 = nil;
    goto v_14;
v_16:
    v_29 = stack[-1];
    v_28 = stack[0];
    if (!car_legal(v_28)) v_28 = cdrerror(v_28); else
    v_28 = cdr(v_28);
    stack[-1] = v_29;
    stack[0] = v_28;
    goto v_1;
    v_28 = nil;
v_14:
    goto v_6;
    v_28 = nil;
v_6:
    return onevalue(v_28);
}



// Code for nconc2

static LispObject CC_nconc2(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_32, v_33, v_34;
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
    v_33 = v_3;
    v_34 = v_2;
// end of prologue
    v_32 = v_34;
    if (!consp(v_32)) goto v_10;
    else goto v_11;
v_10:
    v_32 = v_33;
    goto v_7;
v_11:
    v_32 = v_34;
    v_34 = v_32;
v_17:
    v_32 = v_34;
    if (!car_legal(v_32)) v_32 = cdrerror(v_32); else
    v_32 = cdr(v_32);
    v_32 = Lconsp(nil, v_32);
    env = stack[0];
    if (v_32 == nil) goto v_20;
    else goto v_21;
v_20:
    goto v_16;
v_21:
    v_32 = v_34;
    if (!car_legal(v_32)) v_32 = cdrerror(v_32); else
    v_32 = cdr(v_32);
    v_34 = v_32;
    goto v_17;
v_16:
    v_32 = v_34;
    if (!car_legal(v_32)) rplacd_fails(v_32);
    setcdr(v_32, v_33);
    v_32 = v_34;
v_7:
    return onevalue(v_32);
}



// Code for testchar1

static LispObject CC_testchar1(LispObject env,
                         LispObject v_2)
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
    v_35 = stack[0];
    v_35 = integerp(v_35);
    if (v_35 == nil) goto v_7;
    v_35 = stack[0];
    goto v_5;
v_7:
    v_35 = stack[0];
    v_35 = Lexplodec(nil, v_35);
    env = stack[-1];
    if (!car_legal(v_35)) v_35 = cdrerror(v_35); else
    v_35 = cdr(v_35);
    if (v_35 == nil) goto v_11;
    else goto v_12;
v_11:
    v_35 = stack[0];
    goto v_5;
v_12:
    v_36 = stack[0];
    v_35 = qvalue(basic_elt(env, 1)); // nochar!*
    v_35 = Lmember(nil, v_36, v_35);
    if (v_35 == nil) goto v_18;
    v_35 = stack[0];
    goto v_5;
v_18:
    v_36 = stack[0];
    v_35 = qvalue(basic_elt(env, 2)); // nochar1!*
    v_35 = Lmember(nil, v_36, v_35);
    if (v_35 == nil) goto v_24;
    v_35 = stack[0];
    goto v_5;
v_24:
    v_36 = stack[0];
    v_35 = qvalue(basic_elt(env, 2)); // nochar1!*
    v_35 = cons(v_36, v_35);
    env = stack[-1];
    setvalue(basic_elt(env, 2), v_35); // nochar1!*
    v_35 = stack[0];
    goto v_5;
    v_35 = nil;
v_5:
    return onevalue(v_35);
}



// Code for gparg1p

static LispObject CC_gparg1p(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_25;
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
    v_25 = stack[0];
    if (v_25 == nil) goto v_6;
    else goto v_7;
v_6:
    v_25 = lisp_true;
    goto v_5;
v_7:
    v_25 = stack[0];
    if (!car_legal(v_25)) v_25 = carerror(v_25); else
    v_25 = car(v_25);
    {   LispObject fn = basic_elt(env, 1); // gpargp
    v_25 = (*qfn1(fn))(fn, v_25);
    }
    env = stack[-1];
    if (v_25 == nil) goto v_14;
    else goto v_15;
v_14:
    v_25 = nil;
    goto v_13;
v_15:
    v_25 = stack[0];
    if (!car_legal(v_25)) v_25 = cdrerror(v_25); else
    v_25 = cdr(v_25);
    stack[0] = v_25;
    goto v_1;
    v_25 = nil;
v_13:
    goto v_5;
    v_25 = nil;
v_5:
    return onevalue(v_25);
}



// Code for formsetq

static LispObject CC_formsetq(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_44, v_45, v_46, v_47, v_48;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_46 = v_4;
    v_47 = v_3;
    v_48 = v_2;
// end of prologue
    v_45 = v_46;
    v_44 = basic_elt(env, 1); // symbolic
    if (v_45 == v_44) goto v_9;
    v_44 = v_48;
    v_45 = v_47;
    {
        LispObject fn = basic_elt(env, 4); // formsetq0
        return (*qfn3(fn))(fn, v_44, v_45, v_46);
    }
v_9:
    v_44 = v_48;
    if (!car_legal(v_44)) v_44 = cdrerror(v_44); else
    v_44 = cdr(v_44);
    if (!car_legal(v_44)) v_45 = carerror(v_44); else
    v_45 = car(v_44);
    v_44 = basic_elt(env, 2); // list
    if (!consp(v_45)) goto v_17;
    v_45 = car(v_45);
    if (v_45 == v_44) goto v_16;
    else goto v_17;
v_16:
    v_44 = v_48;
    v_45 = v_47;
    {
        LispObject fn = basic_elt(env, 5); // formsetq1
        return (*qfn3(fn))(fn, v_44, v_45, v_46);
    }
v_17:
    v_44 = v_48;
    if (!car_legal(v_44)) v_44 = cdrerror(v_44); else
    v_44 = cdr(v_44);
    if (!car_legal(v_44)) v_45 = carerror(v_44); else
    v_45 = car(v_44);
    v_44 = basic_elt(env, 3); // cons
    if (!consp(v_45)) goto v_28;
    v_45 = car(v_45);
    if (v_45 == v_44) goto v_27;
    else goto v_28;
v_27:
    v_44 = v_48;
    v_45 = v_47;
    {
        LispObject fn = basic_elt(env, 6); // formsetq2
        return (*qfn3(fn))(fn, v_44, v_45, v_46);
    }
v_28:
    v_44 = v_48;
    v_45 = v_47;
    {
        LispObject fn = basic_elt(env, 4); // formsetq0
        return (*qfn3(fn))(fn, v_44, v_45, v_46);
    }
    v_44 = nil;
    return onevalue(v_44);
}



// Code for mv!-pow!-!>

static LispObject CC_mvKpowKS(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_31, v_32, v_33, v_34;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_32 = v_3;
    v_33 = v_2;
// end of prologue
v_7:
    v_31 = v_33;
    if (v_31 == nil) goto v_10;
    else goto v_11;
v_10:
    v_31 = nil;
    goto v_6;
v_11:
    v_31 = v_33;
    if (!car_legal(v_31)) v_34 = carerror(v_31); else
    v_34 = car(v_31);
    v_31 = v_32;
    if (!car_legal(v_31)) v_31 = carerror(v_31); else
    v_31 = car(v_31);
    if (equal(v_34, v_31)) goto v_14;
    else goto v_15;
v_14:
    v_31 = v_33;
    if (!car_legal(v_31)) v_31 = cdrerror(v_31); else
    v_31 = cdr(v_31);
    v_33 = v_31;
    v_31 = v_32;
    if (!car_legal(v_31)) v_31 = cdrerror(v_31); else
    v_31 = cdr(v_31);
    v_32 = v_31;
    goto v_7;
v_15:
    v_31 = v_33;
    if (!car_legal(v_31)) v_31 = carerror(v_31); else
    v_31 = car(v_31);
    if (!car_legal(v_32)) v_32 = carerror(v_32); else
    v_32 = car(v_32);
        return Lgreaterp_2(nil, v_31, v_32);
    v_31 = nil;
v_6:
    return onevalue(v_31);
}



// Code for red!=subst1

static LispObject CC_redMsubst1(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_111, v_112, v_113;
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
    v_111 = stack[-6];
    {   LispObject fn = basic_elt(env, 5); // bas_dpoly
    v_111 = (*qfn1(fn))(fn, v_111);
    }
    env = stack[-8];
    stack[0] = v_111;
    v_111 = stack[0];
    {   LispObject fn = basic_elt(env, 6); // dp_lc
    v_111 = (*qfn1(fn))(fn, v_111);
    }
    env = stack[-8];
    stack[-1] = v_111;
    v_111 = stack[-6];
    {   LispObject fn = basic_elt(env, 7); // bas_rep
    v_111 = (*qfn1(fn))(fn, v_111);
    }
    env = stack[-8];
    stack[-7] = v_111;
    v_111 = stack[-5];
    {   LispObject fn = basic_elt(env, 5); // bas_dpoly
    v_111 = (*qfn1(fn))(fn, v_111);
    }
    env = stack[-8];
    stack[-3] = v_111;
    v_111 = stack[-3];
    {   LispObject fn = basic_elt(env, 6); // dp_lc
    v_111 = (*qfn1(fn))(fn, v_111);
    }
    env = stack[-8];
    stack[-2] = v_111;
    v_111 = qvalue(basic_elt(env, 1)); // !*bcsimp
    if (v_111 == nil) goto v_29;
    v_111 = stack[-2];
    {   LispObject fn = basic_elt(env, 8); // cali_bc_inv
    v_111 = (*qfn1(fn))(fn, v_111);
    }
    env = stack[-8];
    stack[-4] = v_111;
    if (v_111 == nil) goto v_34;
    v_112 = stack[-1];
    v_111 = stack[-4];
    {   LispObject fn = basic_elt(env, 9); // cali_bc_prod
    v_111 = (*qfn2(fn))(fn, v_112, v_111);
    }
    env = stack[-8];
    stack[-1] = v_111;
    v_111 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 10); // cali_bc_fi
    v_111 = (*qfn1(fn))(fn, v_111);
    }
    env = stack[-8];
    stack[-2] = v_111;
    goto v_32;
v_34:
    v_112 = stack[-2];
    v_111 = stack[-1];
    {   LispObject fn = basic_elt(env, 11); // cali_bc_gcd
    v_111 = (*qfn2(fn))(fn, v_112, v_111);
    }
    env = stack[-8];
    stack[-4] = v_111;
    v_112 = stack[-2];
    v_111 = stack[-4];
    {   LispObject fn = basic_elt(env, 12); // cali_bc_divmod
    v_111 = (*qfn2(fn))(fn, v_112, v_111);
    }
    env = stack[-8];
    if (!car_legal(v_111)) v_111 = carerror(v_111); else
    v_111 = car(v_111);
    stack[-2] = v_111;
    v_112 = stack[-1];
    v_111 = stack[-4];
    {   LispObject fn = basic_elt(env, 12); // cali_bc_divmod
    v_111 = (*qfn2(fn))(fn, v_112, v_111);
    }
    env = stack[-8];
    if (!car_legal(v_111)) v_111 = carerror(v_111); else
    v_111 = car(v_111);
    stack[-1] = v_111;
    goto v_32;
v_32:
    goto v_27;
v_29:
v_27:
    v_111 = stack[0];
    {   LispObject fn = basic_elt(env, 13); // dp_lmon
    stack[-4] = (*qfn1(fn))(fn, v_111);
    }
    env = stack[-8];
    v_111 = stack[-3];
    {   LispObject fn = basic_elt(env, 13); // dp_lmon
    v_111 = (*qfn1(fn))(fn, v_111);
    }
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 14); // mo_diff
    v_111 = (*qfn2(fn))(fn, stack[-4], v_111);
    }
    env = stack[-8];
    stack[-4] = v_111;
    v_112 = stack[-2];
    v_111 = stack[0];
    {   LispObject fn = basic_elt(env, 15); // dp_times_bc
    stack[0] = (*qfn2(fn))(fn, v_112, v_111);
    }
    env = stack[-8];
    v_113 = stack[-1];
    v_112 = stack[-4];
    v_111 = stack[-3];
    {   LispObject fn = basic_elt(env, 16); // dp_times_bcmo
    v_111 = (*qfn3(fn))(fn, v_113, v_112, v_111);
    }
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 17); // dp_diff
    v_111 = (*qfn2(fn))(fn, stack[0], v_111);
    }
    env = stack[-8];
    stack[0] = v_111;
    v_112 = stack[-2];
    v_111 = stack[-7];
    {   LispObject fn = basic_elt(env, 15); // dp_times_bc
    stack[-2] = (*qfn2(fn))(fn, v_112, v_111);
    }
    env = stack[-8];
    v_111 = stack[-5];
    {   LispObject fn = basic_elt(env, 7); // bas_rep
    v_111 = (*qfn1(fn))(fn, v_111);
    }
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 16); // dp_times_bcmo
    v_111 = (*qfn3(fn))(fn, stack[-1], stack[-4], v_111);
    }
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 17); // dp_diff
    v_111 = (*qfn2(fn))(fn, stack[-2], v_111);
    }
    env = stack[-8];
    stack[-1] = v_111;
    {   LispObject fn = basic_elt(env, 18); // cali_trace
    v_112 = (*qfn0(fn))(fn);
    }
    env = stack[-8];
    v_111 = static_cast<LispObject>(1264)+TAG_FIXNUM; // 79
    v_111 = static_cast<LispObject>(greaterp2(v_112, v_111));
    v_111 = v_111 ? lisp_true : nil;
    env = stack[-8];
    if (v_111 == nil) goto v_80;
    v_111 = basic_elt(env, 2); // "---> "
    v_111 = Lprinc(nil, v_111);
    env = stack[-8];
    v_111 = stack[0];
    {   LispObject fn = basic_elt(env, 19); // dp_print
    v_111 = (*qfn1(fn))(fn, v_111);
    }
    env = stack[-8];
    goto v_78;
v_80:
    {   LispObject fn = basic_elt(env, 18); // cali_trace
    v_112 = (*qfn0(fn))(fn);
    }
    env = stack[-8];
    v_111 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_111 = static_cast<LispObject>(greaterp2(v_112, v_111));
    v_111 = v_111 ? lisp_true : nil;
    env = stack[-8];
    if (v_111 == nil) goto v_89;
    v_111 = basic_elt(env, 3); // "."
    v_111 = Lprinc(nil, v_111);
    env = stack[-8];
    goto v_78;
v_89:
v_78:
    {   LispObject fn = basic_elt(env, 18); // cali_trace
    v_112 = (*qfn0(fn))(fn);
    }
    env = stack[-8];
    v_111 = static_cast<LispObject>(1424)+TAG_FIXNUM; // 89
    v_111 = static_cast<LispObject>(greaterp2(v_112, v_111));
    v_111 = v_111 ? lisp_true : nil;
    env = stack[-8];
    if (v_111 == nil) goto v_98;
    v_111 = basic_elt(env, 4); // " uses "
    v_111 = Lprinc(nil, v_111);
    env = stack[-8];
    v_111 = stack[-3];
    {   LispObject fn = basic_elt(env, 19); // dp_print
    v_111 = (*qfn1(fn))(fn, v_111);
    }
    env = stack[-8];
    goto v_96;
v_98:
v_96:
    v_111 = stack[-6];
    {   LispObject fn = basic_elt(env, 20); // bas_nr
    v_113 = (*qfn1(fn))(fn, v_111);
    }
    env = stack[-8];
    v_112 = stack[0];
    v_111 = stack[-1];
    {
        LispObject fn = basic_elt(env, 21); // bas_make1
        return (*qfn3(fn))(fn, v_113, v_112, v_111);
    }
    return onevalue(v_111);
}



// Code for lalr_process_reductions

static LispObject CC_lalr_process_reductions(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_147, v_148, v_149;
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
    push(nil, nil);
    stack_popper stack_popper_var(8);
// end of prologue
    stack[-6] = nil;
    v_147 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    stack[-4] = v_147;
    v_147 = qvalue(basic_elt(env, 1)); // nonterminals
    stack[-5] = v_147;
v_20:
    v_147 = stack[-5];
    if (v_147 == nil) goto v_24;
    else goto v_25;
v_24:
    goto v_19;
v_25:
    v_147 = stack[-5];
    if (!car_legal(v_147)) v_147 = carerror(v_147); else
    v_147 = car(v_147);
    stack[-3] = v_147;
    v_147 = stack[-3];
    {   LispObject fn = basic_elt(env, 3); // lalr_productions
    v_147 = (*qfn1(fn))(fn, v_147);
    }
    env = stack[-7];
    stack[-2] = v_147;
v_34:
    v_147 = stack[-2];
    if (v_147 == nil) goto v_39;
    else goto v_40;
v_39:
    goto v_33;
v_40:
    v_147 = stack[-2];
    if (!car_legal(v_147)) v_147 = carerror(v_147); else
    v_147 = car(v_147);
    stack[-1] = v_147;
    stack[0] = stack[-3];
    v_147 = stack[-1];
    if (!car_legal(v_147)) v_147 = carerror(v_147); else
    v_147 = car(v_147);
    v_148 = Llength(nil, v_147);
    env = stack[-7];
    v_147 = stack[-1];
    if (!car_legal(v_147)) v_147 = cdrerror(v_147); else
    v_147 = cdr(v_147);
    v_147 = acons(stack[0], v_148, v_147);
    env = stack[-7];
    v_149 = v_147;
    v_148 = v_149;
    v_147 = stack[-6];
    v_147 = Lassoc(nil, v_148, v_147);
    stack[0] = v_147;
    v_147 = stack[0];
    if (v_147 == nil) goto v_58;
    else goto v_59;
v_58:
    stack[0] = v_149;
    v_147 = stack[-4];
    v_147 = add1(v_147);
    env = stack[-7];
    stack[-4] = v_147;
    v_147 = cons(stack[0], v_147);
    env = stack[-7];
    stack[0] = v_147;
    v_148 = stack[0];
    v_147 = stack[-6];
    v_147 = cons(v_148, v_147);
    env = stack[-7];
    stack[-6] = v_147;
    goto v_57;
v_59:
v_57:
    v_148 = stack[-1];
    v_147 = stack[0];
    if (!car_legal(v_147)) v_147 = cdrerror(v_147); else
    v_147 = cdr(v_147);
    if (!car_legal(v_148)) rplacd_fails(v_148);
    setcdr(v_148, v_147);
    v_147 = stack[-2];
    if (!car_legal(v_147)) v_147 = cdrerror(v_147); else
    v_147 = cdr(v_147);
    stack[-2] = v_147;
    goto v_34;
v_33:
    v_147 = stack[-5];
    if (!car_legal(v_147)) v_147 = cdrerror(v_147); else
    v_147 = cdr(v_147);
    stack[-5] = v_147;
    goto v_20;
v_19:
    v_147 = stack[-4];
    v_147 = add1(v_147);
    env = stack[-7];
    stack[0] = v_147;
    v_147 = stack[0];
    v_147 = sub1(v_147);
    env = stack[-7];
    v_147 = Lmkvect(nil, v_147);
    env = stack[-7];
    stack[-5] = v_147;
    v_147 = stack[0];
    v_147 = sub1(v_147);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 4); // mkvect16
    v_147 = (*qfn1(fn))(fn, v_147);
    }
    env = stack[-7];
    stack[-3] = v_147;
    v_147 = stack[0];
    v_147 = sub1(v_147);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 5); // mkvect8
    v_147 = (*qfn1(fn))(fn, v_147);
    }
    env = stack[-7];
    stack[-2] = v_147;
    v_147 = stack[-6];
    stack[-1] = v_147;
v_90:
    v_147 = stack[-1];
    if (v_147 == nil) goto v_94;
    else goto v_95;
v_94:
    goto v_89;
v_95:
    v_147 = stack[-1];
    if (!car_legal(v_147)) v_147 = carerror(v_147); else
    v_147 = car(v_147);
    stack[0] = v_147;
    v_147 = stack[0];
    if (!car_legal(v_147)) v_147 = cdrerror(v_147); else
    v_147 = cdr(v_147);
    stack[-4] = v_147;
    v_147 = stack[0];
    if (!car_legal(v_147)) v_147 = carerror(v_147); else
    v_147 = car(v_147);
    if (!car_legal(v_147)) v_147 = carerror(v_147); else
    v_147 = car(v_147);
    if (!car_legal(v_147)) v_147 = cdrerror(v_147); else
    v_147 = cdr(v_147);
    stack[-6] = v_147;
    v_147 = stack[0];
    if (!car_legal(v_147)) v_147 = carerror(v_147); else
    v_147 = car(v_147);
    if (!car_legal(v_147)) v_147 = carerror(v_147); else
    v_147 = car(v_147);
    if (!car_legal(v_147)) v_148 = carerror(v_147); else
    v_148 = car(v_147);
    v_147 = basic_elt(env, 2); // lalr_nonterminal_code
    v_147 = get(v_148, v_147);
    env = stack[-7];
    v_149 = stack[-3];
    v_148 = stack[-4];
    {   LispObject fn = basic_elt(env, 6); // putv16
    v_147 = (*qfn3(fn))(fn, v_149, v_148, v_147);
    }
    env = stack[-7];
    v_149 = stack[-2];
    v_148 = stack[-4];
    v_147 = stack[-6];
    {   LispObject fn = basic_elt(env, 7); // putv8
    v_147 = (*qfn3(fn))(fn, v_149, v_148, v_147);
    }
    env = stack[-7];
    v_147 = stack[0];
    if (!car_legal(v_147)) v_147 = carerror(v_147); else
    v_147 = car(v_147);
    if (!car_legal(v_147)) v_147 = cdrerror(v_147); else
    v_147 = cdr(v_147);
    if (v_147 == nil) goto v_124;
    v_147 = stack[0];
    if (!car_legal(v_147)) v_147 = carerror(v_147); else
    v_147 = car(v_147);
    if (!car_legal(v_147)) v_147 = cdrerror(v_147); else
    v_147 = cdr(v_147);
    v_148 = v_147;
    v_147 = stack[-6];
    {   LispObject fn = basic_elt(env, 8); // lalr_construct_fn
    v_147 = (*qfn2(fn))(fn, v_148, v_147);
    }
    env = stack[-7];
    goto v_122;
v_124:
    v_147 = nil;
    goto v_122;
v_122:
    v_149 = stack[-5];
    v_148 = stack[-4];
    v_147 = Lputv(nil, v_149, v_148, v_147);
    env = stack[-7];
    v_147 = stack[-1];
    if (!car_legal(v_147)) v_147 = cdrerror(v_147); else
    v_147 = cdr(v_147);
    stack[-1] = v_147;
    goto v_90;
v_89:
    v_149 = stack[-5];
    v_148 = stack[-2];
    v_147 = stack[-3];
    return list3(v_149, v_148, v_147);
    return onevalue(v_147);
}



// Code for monomgetfirstmultivar

static LispObject CC_monomgetfirstmultivar(LispObject env,
                         LispObject v_2)
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
    v_22 = stack[0];
    v_21 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_21 = Lgetv(nil, v_22, v_21);
    env = stack[-1];
    if (!car_legal(v_21)) v_21 = carerror(v_21); else
    v_21 = car(v_21);
    if (v_21 == nil) goto v_9;
    v_22 = stack[0];
    v_21 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_21 = Lgetv(nil, v_22, v_21);
    if (!car_legal(v_21)) v_21 = carerror(v_21); else
    v_21 = car(v_21);
    goto v_7;
v_9:
    v_21 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_7;
    v_21 = nil;
v_7:
    return onevalue(v_21);
}



// Code for talp_noffcts

static LispObject CC_talp_noffcts(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_34, v_35;
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
    v_34 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-1] = v_34;
    {   LispObject fn = basic_elt(env, 1); // talp_getl
    v_34 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
    stack[0] = v_34;
v_10:
    v_34 = stack[0];
    if (v_34 == nil) goto v_14;
    else goto v_15;
v_14:
    goto v_9;
v_15:
    v_34 = stack[0];
    if (!car_legal(v_34)) v_34 = carerror(v_34); else
    v_34 = car(v_34);
    if (!car_legal(v_34)) v_35 = cdrerror(v_34); else
    v_35 = cdr(v_34);
    v_34 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_34 = static_cast<LispObject>(greaterp2(v_35, v_34));
    v_34 = v_34 ? lisp_true : nil;
    env = stack[-2];
    if (v_34 == nil) goto v_24;
    v_34 = stack[-1];
    v_34 = add1(v_34);
    env = stack[-2];
    stack[-1] = v_34;
    goto v_22;
v_24:
v_22:
    v_34 = stack[0];
    if (!car_legal(v_34)) v_34 = cdrerror(v_34); else
    v_34 = cdr(v_34);
    stack[0] = v_34;
    goto v_10;
v_9:
    v_34 = stack[-1];
    return onevalue(v_34);
}



// Code for lesspcdadr

static LispObject CC_lesspcdadr(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_14, v_15;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_14 = v_3;
    v_15 = v_2;
// end of prologue
    if (!car_legal(v_15)) v_15 = cdrerror(v_15); else
    v_15 = cdr(v_15);
    if (!car_legal(v_15)) v_15 = carerror(v_15); else
    v_15 = car(v_15);
    if (!car_legal(v_15)) v_15 = cdrerror(v_15); else
    v_15 = cdr(v_15);
    if (!car_legal(v_14)) v_14 = cdrerror(v_14); else
    v_14 = cdr(v_14);
    if (!car_legal(v_14)) v_14 = carerror(v_14); else
    v_14 = car(v_14);
    if (!car_legal(v_14)) v_14 = cdrerror(v_14); else
    v_14 = cdr(v_14);
        return Llessp_2(nil, v_15, v_14);
}



// Code for matrix_rows

static LispObject CC_matrix_rows(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_26;
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
    v_26 = stack[0];
    if (v_26 == nil) goto v_9;
    v_26 = basic_elt(env, 1); // "<matrixrow>"
    {   LispObject fn = basic_elt(env, 3); // printout
    v_26 = (*qfn1(fn))(fn, v_26);
    }
    env = stack[-1];
    v_26 = lisp_true;
    {   LispObject fn = basic_elt(env, 4); // indent!*
    v_26 = (*qfn1(fn))(fn, v_26);
    }
    env = stack[-1];
    v_26 = stack[0];
    if (!car_legal(v_26)) v_26 = carerror(v_26); else
    v_26 = car(v_26);
    {   LispObject fn = basic_elt(env, 5); // row
    v_26 = (*qfn1(fn))(fn, v_26);
    }
    env = stack[-1];
    v_26 = nil;
    {   LispObject fn = basic_elt(env, 4); // indent!*
    v_26 = (*qfn1(fn))(fn, v_26);
    }
    env = stack[-1];
    v_26 = basic_elt(env, 2); // "</matrixrow>"
    {   LispObject fn = basic_elt(env, 3); // printout
    v_26 = (*qfn1(fn))(fn, v_26);
    }
    env = stack[-1];
    v_26 = stack[0];
    if (!car_legal(v_26)) v_26 = cdrerror(v_26); else
    v_26 = cdr(v_26);
    {   LispObject fn = basic_elt(env, 0); // matrix_rows
    v_26 = (*qfn1(fn))(fn, v_26);
    }
    goto v_7;
v_9:
v_7:
    v_26 = nil;
    return onevalue(v_26);
}



// Code for noncomexpf

static LispObject CC_noncomexpf(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
v_1:
    v_40 = stack[0];
    if (!consp(v_40)) goto v_10;
    else goto v_11;
v_10:
    v_40 = lisp_true;
    goto v_9;
v_11:
    v_40 = stack[0];
    if (!car_legal(v_40)) v_40 = carerror(v_40); else
    v_40 = car(v_40);
    v_40 = (consp(v_40) ? nil : lisp_true);
    goto v_9;
    v_40 = nil;
v_9:
    if (v_40 == nil) goto v_6;
    else goto v_7;
v_6:
    v_40 = stack[0];
    if (!car_legal(v_40)) v_40 = carerror(v_40); else
    v_40 = car(v_40);
    if (!car_legal(v_40)) v_40 = carerror(v_40); else
    v_40 = car(v_40);
    if (!car_legal(v_40)) v_40 = carerror(v_40); else
    v_40 = car(v_40);
    {   LispObject fn = basic_elt(env, 1); // noncomp
    v_40 = (*qfn1(fn))(fn, v_40);
    }
    env = stack[-1];
    if (v_40 == nil) goto v_21;
    else goto v_20;
v_21:
    v_40 = stack[0];
    if (!car_legal(v_40)) v_40 = carerror(v_40); else
    v_40 = car(v_40);
    if (!car_legal(v_40)) v_40 = cdrerror(v_40); else
    v_40 = cdr(v_40);
    {   LispObject fn = basic_elt(env, 0); // noncomexpf
    v_40 = (*qfn1(fn))(fn, v_40);
    }
    env = stack[-1];
    if (v_40 == nil) goto v_29;
    else goto v_28;
v_29:
    v_40 = stack[0];
    if (!car_legal(v_40)) v_40 = cdrerror(v_40); else
    v_40 = cdr(v_40);
    stack[0] = v_40;
    goto v_1;
v_28:
v_20:
    goto v_5;
v_7:
    v_40 = nil;
    goto v_5;
    v_40 = nil;
v_5:
    return onevalue(v_40);
}



// Code for xriterion_1

static LispObject CC_xriterion_1(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_131, v_132, v_133;
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
v_1:
    v_131 = stack[-1];
    if (v_131 == nil) goto v_8;
    else goto v_9;
v_8:
    v_131 = nil;
    goto v_7;
v_9:
    v_131 = stack[-2];
    if (!car_legal(v_131)) v_131 = cdrerror(v_131); else
    v_131 = cdr(v_131);
    if (!car_legal(v_131)) v_132 = carerror(v_131); else
    v_132 = car(v_131);
    v_131 = basic_elt(env, 1); // spoly_pair
    if (v_132 == v_131) goto v_13;
    v_131 = nil;
    goto v_7;
v_13:
    v_131 = stack[-1];
    if (!car_legal(v_131)) v_131 = carerror(v_131); else
    v_131 = car(v_131);
    stack[-3] = v_131;
    v_132 = stack[-3];
    v_131 = stack[-2];
    if (!car_legal(v_131)) v_131 = cdrerror(v_131); else
    v_131 = cdr(v_131);
    if (!car_legal(v_131)) v_131 = cdrerror(v_131); else
    v_131 = cdr(v_131);
    if (!car_legal(v_131)) v_131 = carerror(v_131); else
    v_131 = car(v_131);
    if (equal(v_132, v_131)) goto v_30;
    v_132 = stack[-3];
    v_131 = stack[-2];
    if (!car_legal(v_131)) v_131 = cdrerror(v_131); else
    v_131 = cdr(v_131);
    if (!car_legal(v_131)) v_131 = cdrerror(v_131); else
    v_131 = cdr(v_131);
    if (!car_legal(v_131)) v_131 = cdrerror(v_131); else
    v_131 = cdr(v_131);
    if (!car_legal(v_131)) v_131 = carerror(v_131); else
    v_131 = car(v_131);
    if (equal(v_132, v_131)) goto v_39;
    v_131 = stack[-3];
    {   LispObject fn = basic_elt(env, 5); // xval
    v_132 = (*qfn1(fn))(fn, v_131);
    }
    env = stack[-4];
    v_131 = stack[-2];
    if (!car_legal(v_131)) v_131 = carerror(v_131); else
    v_131 = car(v_131);
    {   LispObject fn = basic_elt(env, 6); // xdiv
    v_131 = (*qfn2(fn))(fn, v_132, v_131);
    }
    env = stack[-4];
    if (v_131 == nil) goto v_48;
    else goto v_49;
v_48:
    v_131 = nil;
    goto v_47;
v_49:
    v_132 = stack[-3];
    v_131 = stack[-2];
    if (!car_legal(v_131)) v_131 = cdrerror(v_131); else
    v_131 = cdr(v_131);
    if (!car_legal(v_131)) v_131 = cdrerror(v_131); else
    v_131 = cdr(v_131);
    if (!car_legal(v_131)) v_131 = carerror(v_131); else
    v_131 = car(v_131);
    {   LispObject fn = basic_elt(env, 7); // make_spoly_pair
    v_131 = (*qfn2(fn))(fn, v_132, v_131);
    }
    env = stack[-4];
    v_132 = v_131;
    v_131 = v_132;
    if (v_131 == nil) goto v_71;
    else goto v_72;
v_71:
    v_131 = lisp_true;
    goto v_70;
v_72:
    v_131 = stack[0];
    {   LispObject fn = basic_elt(env, 8); // find_item
    v_131 = (*qfn2(fn))(fn, v_132, v_131);
    }
    env = stack[-4];
    v_131 = (v_131 == nil ? lisp_true : nil);
    goto v_70;
    v_131 = nil;
v_70:
    if (v_131 == nil) goto v_60;
    else goto v_61;
v_60:
    v_131 = nil;
    goto v_59;
v_61:
    v_132 = stack[-3];
    v_131 = stack[-2];
    if (!car_legal(v_131)) v_131 = cdrerror(v_131); else
    v_131 = cdr(v_131);
    if (!car_legal(v_131)) v_131 = cdrerror(v_131); else
    v_131 = cdr(v_131);
    if (!car_legal(v_131)) v_131 = cdrerror(v_131); else
    v_131 = cdr(v_131);
    if (!car_legal(v_131)) v_131 = carerror(v_131); else
    v_131 = car(v_131);
    {   LispObject fn = basic_elt(env, 7); // make_spoly_pair
    v_131 = (*qfn2(fn))(fn, v_132, v_131);
    }
    env = stack[-4];
    v_132 = v_131;
    v_131 = v_132;
    if (v_131 == nil) goto v_98;
    else goto v_99;
v_98:
    v_131 = lisp_true;
    goto v_97;
v_99:
    v_131 = stack[0];
    {   LispObject fn = basic_elt(env, 8); // find_item
    v_131 = (*qfn2(fn))(fn, v_132, v_131);
    }
    env = stack[-4];
    v_131 = (v_131 == nil ? lisp_true : nil);
    goto v_97;
    v_131 = nil;
v_97:
    if (v_131 == nil) goto v_86;
    else goto v_87;
v_86:
    v_131 = nil;
    goto v_85;
v_87:
    v_131 = qvalue(basic_elt(env, 2)); // !*trxideal
    if (v_131 == nil) goto v_114;
    v_132 = basic_elt(env, 3); // "criterion 1 hit"
    v_131 = basic_elt(env, 4); // last
    {   LispObject fn = basic_elt(env, 9); // writepri
    v_131 = (*qfn2(fn))(fn, v_132, v_131);
    }
    env = stack[-4];
    goto v_112;
v_114:
v_112:
    v_131 = lisp_true;
    goto v_85;
    v_131 = nil;
v_85:
    goto v_59;
    v_131 = nil;
v_59:
    goto v_47;
    v_131 = nil;
v_47:
    goto v_37;
v_39:
    v_131 = nil;
    goto v_37;
    v_131 = nil;
v_37:
    goto v_28;
v_30:
    v_131 = nil;
    goto v_28;
    v_131 = nil;
v_28:
    if (v_131 == nil) goto v_26;
    else goto v_25;
v_26:
    v_133 = stack[-2];
    v_131 = stack[-1];
    if (!car_legal(v_131)) v_132 = cdrerror(v_131); else
    v_132 = cdr(v_131);
    v_131 = stack[0];
    stack[-2] = v_133;
    stack[-1] = v_132;
    stack[0] = v_131;
    goto v_1;
v_25:
    goto v_7;
    v_131 = nil;
v_7:
    return onevalue(v_131);
}



// Code for gfplusn

static LispObject CC_gfplusn(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_27, v_28;
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
    v_27 = stack[-1];
    if (!car_legal(v_27)) v_27 = carerror(v_27); else
    v_27 = car(v_27);
    if (!consp(v_27)) goto v_7;
    else goto v_8;
v_7:
    v_28 = stack[-1];
    v_27 = stack[0];
    {
        LispObject fn = basic_elt(env, 1); // gffplus
        return (*qfn2(fn))(fn, v_28, v_27);
    }
v_8:
    v_27 = stack[-1];
    if (!car_legal(v_27)) v_28 = carerror(v_27); else
    v_28 = car(v_27);
    v_27 = stack[0];
    if (!car_legal(v_27)) v_27 = carerror(v_27); else
    v_27 = car(v_27);
    {   LispObject fn = basic_elt(env, 2); // plus!:
    stack[-2] = (*qfn2(fn))(fn, v_28, v_27);
    }
    env = stack[-3];
    v_27 = stack[-1];
    if (!car_legal(v_27)) v_28 = cdrerror(v_27); else
    v_28 = cdr(v_27);
    v_27 = stack[0];
    if (!car_legal(v_27)) v_27 = cdrerror(v_27); else
    v_27 = cdr(v_27);
    {   LispObject fn = basic_elt(env, 2); // plus!:
    v_27 = (*qfn2(fn))(fn, v_28, v_27);
    }
    {
        LispObject v_32 = stack[-2];
        return cons(v_32, v_27);
    }
    v_27 = nil;
    return onevalue(v_27);
}



// Code for sign!-of

static LispObject CC_signKof(LispObject env,
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
    v_18 = ncons(v_18);
    env = stack[0];
    {   LispObject fn = basic_elt(env, 1); // simp!-sign
    v_18 = (*qfn1(fn))(fn, v_18);
    }
    if (!car_legal(v_18)) v_18 = carerror(v_18); else
    v_18 = car(v_18);
    v_19 = v_18;
    v_18 = v_19;
    if (is_number(v_18)) goto v_12;
    v_18 = nil;
    goto v_10;
v_12:
    v_18 = v_19;
    goto v_10;
    v_18 = nil;
v_10:
    return onevalue(v_18);
}



// Code for assert_stat!-parse

static LispObject CC_assert_statKparse(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_55, v_56, v_57;
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// end of prologue
    {   LispObject fn = basic_elt(env, 8); // scan
    v_55 = (*qfn0(fn))(fn);
    }
    env = stack[-3];
    stack[-2] = v_55;
    {   LispObject fn = basic_elt(env, 8); // scan
    v_56 = (*qfn0(fn))(fn);
    }
    env = stack[-3];
    v_55 = basic_elt(env, 1); // !*colon!*
    if (v_56 == v_55) goto v_12;
    v_56 = basic_elt(env, 2); // "expecting ':' in assert but found"
    v_55 = qvalue(basic_elt(env, 3)); // cursym!*
    v_55 = list2(v_56, v_55);
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 9); // rederr
    v_55 = (*qfn1(fn))(fn, v_55);
    }
    env = stack[-3];
    goto v_10;
v_12:
v_10:
    {   LispObject fn = basic_elt(env, 10); // assert_stat1
    v_55 = (*qfn0(fn))(fn);
    }
    env = stack[-3];
    stack[-1] = v_55;
    {   LispObject fn = basic_elt(env, 8); // scan
    v_56 = (*qfn0(fn))(fn);
    }
    env = stack[-3];
    v_55 = basic_elt(env, 4); // difference
    if (v_56 == v_55) goto v_27;
    v_55 = lisp_true;
    goto v_25;
v_27:
    {   LispObject fn = basic_elt(env, 8); // scan
    v_56 = (*qfn0(fn))(fn);
    }
    env = stack[-3];
    v_55 = basic_elt(env, 5); // greaterp
    v_55 = Lneq_2(nil, v_56, v_55);
    env = stack[-3];
    goto v_25;
    v_55 = nil;
v_25:
    if (v_55 == nil) goto v_23;
    v_56 = basic_elt(env, 6); // "expecting '->' in assert but found"
    v_55 = qvalue(basic_elt(env, 3)); // cursym!*
    v_55 = list2(v_56, v_55);
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 9); // rederr
    v_55 = (*qfn1(fn))(fn, v_55);
    }
    env = stack[-3];
    goto v_21;
v_23:
v_21:
    {   LispObject fn = basic_elt(env, 8); // scan
    v_55 = (*qfn0(fn))(fn);
    }
    env = stack[-3];
    stack[0] = v_55;
    {   LispObject fn = basic_elt(env, 8); // scan
    v_55 = (*qfn0(fn))(fn);
    }
    env = stack[-3];
    if (!symbolp(v_55)) v_55 = nil;
    else { v_55 = qfastgets(v_55);
           if (v_55 != nil) { v_55 = elt(v_55, 55); // delim
#ifdef RECORD_GET
             if (v_55 == SPID_NOPROP)
                record_get(elt(fastget_names, 55), 0),
                v_55 = nil;
             else record_get(elt(fastget_names, 55), 1),
                v_55 = lisp_true; }
           else record_get(elt(fastget_names, 55), 0); }
#else
             if (v_55 == SPID_NOPROP) v_55 = nil; else v_55 = lisp_true; }}
#endif
    if (v_55 == nil) goto v_43;
    else goto v_44;
v_43:
    v_56 = basic_elt(env, 7); // "expecting end of assert but found"
    v_55 = qvalue(basic_elt(env, 3)); // cursym!*
    v_55 = list2(v_56, v_55);
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 9); // rederr
    v_55 = (*qfn1(fn))(fn, v_55);
    }
    goto v_42;
v_44:
v_42:
    v_57 = stack[-2];
    v_56 = stack[-1];
    v_55 = stack[0];
    return list3(v_57, v_56, v_55);
    return onevalue(v_55);
}



// Code for comb

static LispObject CC_comb(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_75, v_76, v_77;
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
    stack[-3] = v_3;
    stack[-4] = v_2;
// end of prologue
    stack[-5] = nil;
    v_76 = stack[-3];
    v_75 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_76 == v_75) goto v_13;
    else goto v_14;
v_13:
    v_75 = nil;
    return ncons(v_75);
v_14:
    v_75 = stack[-4];
    v_76 = Llength(nil, v_75);
    env = stack[-6];
    v_75 = stack[-3];
    v_76 = difference2(v_76, v_75);
    env = stack[-6];
    stack[-2] = v_76;
    v_75 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_75 = static_cast<LispObject>(lessp2(v_76, v_75));
    v_75 = v_75 ? lisp_true : nil;
    env = stack[-6];
    if (v_75 == nil) goto v_20;
    v_75 = nil;
    goto v_9;
v_20:
    v_75 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-1] = v_75;
v_31:
    v_76 = stack[-2];
    v_75 = stack[-1];
    v_75 = difference2(v_76, v_75);
    env = stack[-6];
    v_75 = Lminusp(nil, v_75);
    env = stack[-6];
    if (v_75 == nil) goto v_36;
    goto v_30;
v_36:
    v_75 = stack[-4];
    if (!car_legal(v_75)) stack[0] = cdrerror(v_75); else
    stack[0] = cdr(v_75);
    v_75 = stack[-3];
    v_75 = sub1(v_75);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 0); // comb
    v_75 = (*qfn2(fn))(fn, stack[0], v_75);
    }
    env = stack[-6];
    stack[0] = v_75;
v_50:
    v_75 = stack[0];
    if (v_75 == nil) goto v_54;
    else goto v_55;
v_54:
    goto v_49;
v_55:
    v_75 = stack[0];
    if (!car_legal(v_75)) v_75 = carerror(v_75); else
    v_75 = car(v_75);
    v_76 = stack[-4];
    if (!car_legal(v_76)) v_77 = carerror(v_76); else
    v_77 = car(v_76);
    v_76 = v_75;
    v_75 = stack[-5];
    v_75 = acons(v_77, v_76, v_75);
    env = stack[-6];
    stack[-5] = v_75;
    v_75 = stack[0];
    if (!car_legal(v_75)) v_75 = cdrerror(v_75); else
    v_75 = cdr(v_75);
    stack[0] = v_75;
    goto v_50;
v_49:
    v_75 = stack[-4];
    if (!car_legal(v_75)) v_75 = cdrerror(v_75); else
    v_75 = cdr(v_75);
    stack[-4] = v_75;
    v_75 = stack[-1];
    v_75 = add1(v_75);
    env = stack[-6];
    stack[-1] = v_75;
    goto v_31;
v_30:
    v_76 = stack[-4];
    v_75 = stack[-5];
    return cons(v_76, v_75);
v_9:
    return onevalue(v_75);
}



// Code for gcref_off1

static LispObject CC_gcref_off1(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_162, v_163, v_164;
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(9);
// end of prologue
    v_162 = nil;
    setvalue(basic_elt(env, 1), v_162); // dfprint!*
    v_162 = nil;
    setvalue(basic_elt(env, 2), v_162); // !*defn
    v_162 = qvalue(basic_elt(env, 3)); // !*algebraics
    if (v_162 == nil) goto v_10;
    else goto v_11;
v_10:
    v_163 = basic_elt(env, 4); // algebraic
    v_162 = basic_elt(env, 5); // newnam
    v_162 = Lremprop(nil, v_163, v_162);
    env = stack[-8];
    goto v_9;
v_11:
v_9:
    v_162 = qvalue(basic_elt(env, 6)); // seen!*
    stack[-1] = v_162;
v_19:
    v_162 = stack[-1];
    if (v_162 == nil) goto v_23;
    else goto v_24;
v_23:
    goto v_18;
v_24:
    v_162 = stack[-1];
    if (!car_legal(v_162)) v_162 = carerror(v_162); else
    v_162 = car(v_162);
    stack[0] = v_162;
    v_163 = stack[0];
    v_162 = basic_elt(env, 7); // calledby
    v_162 = get(v_163, v_162);
    env = stack[-8];
    if (v_162 == nil) goto v_32;
    else goto v_33;
v_32:
    v_163 = stack[0];
    v_162 = qvalue(basic_elt(env, 8)); // entpts!*
    v_162 = cons(v_163, v_162);
    env = stack[-8];
    setvalue(basic_elt(env, 8), v_162); // entpts!*
    goto v_31;
v_33:
v_31:
    v_162 = stack[0];
    {   LispObject fn = basic_elt(env, 16); // undefdchk
    v_162 = (*qfn1(fn))(fn, v_162);
    }
    env = stack[-8];
    v_162 = stack[-1];
    if (!car_legal(v_162)) v_162 = cdrerror(v_162); else
    v_162 = cdr(v_162);
    stack[-1] = v_162;
    goto v_19;
v_18:
    v_162 = qvalue(basic_elt(env, 9)); // tseen!*
    {   LispObject fn = basic_elt(env, 17); // idsort
    v_162 = (*qfn1(fn))(fn, v_162);
    }
    env = stack[-8];
    stack[-6] = v_162;
    v_162 = stack[-6];
    if (v_162 == nil) goto v_54;
    else goto v_55;
v_54:
    v_162 = nil;
    goto v_48;
v_55:
    v_162 = stack[-6];
    if (!car_legal(v_162)) v_162 = carerror(v_162); else
    v_162 = car(v_162);
    stack[-2] = v_162;
    v_163 = stack[-2];
    v_162 = basic_elt(env, 10); // tseen
    v_162 = Lremprop(nil, v_163, v_162);
    env = stack[-8];
    v_163 = stack[-2];
    v_162 = basic_elt(env, 11); // funs
    v_162 = get(v_163, v_162);
    env = stack[-8];
    stack[-7] = v_162;
    stack[-1] = v_162;
v_68:
    v_162 = stack[-1];
    if (v_162 == nil) goto v_74;
    else goto v_75;
v_74:
    goto v_67;
v_75:
    v_162 = stack[-1];
    if (!car_legal(v_162)) v_162 = carerror(v_162); else
    v_162 = car(v_162);
    stack[0] = v_162;
    v_162 = stack[0];
    {   LispObject fn = basic_elt(env, 16); // undefdchk
    v_162 = (*qfn1(fn))(fn, v_162);
    }
    env = stack[-8];
    v_163 = stack[0];
    v_162 = basic_elt(env, 12); // rccnam
    v_162 = Lremprop(nil, v_163, v_162);
    env = stack[-8];
    v_162 = stack[-1];
    if (!car_legal(v_162)) v_162 = cdrerror(v_162); else
    v_162 = cdr(v_162);
    stack[-1] = v_162;
    goto v_68;
v_67:
    v_163 = stack[-2];
    v_162 = stack[-7];
    v_162 = cons(v_163, v_162);
    env = stack[-8];
    v_162 = ncons(v_162);
    env = stack[-8];
    stack[-4] = v_162;
    stack[-5] = v_162;
v_49:
    v_162 = stack[-6];
    if (!car_legal(v_162)) v_162 = cdrerror(v_162); else
    v_162 = cdr(v_162);
    stack[-6] = v_162;
    v_162 = stack[-6];
    if (v_162 == nil) goto v_95;
    else goto v_96;
v_95:
    v_162 = stack[-5];
    goto v_48;
v_96:
    stack[-3] = stack[-4];
    v_162 = stack[-6];
    if (!car_legal(v_162)) v_162 = carerror(v_162); else
    v_162 = car(v_162);
    stack[-2] = v_162;
    v_163 = stack[-2];
    v_162 = basic_elt(env, 10); // tseen
    v_162 = Lremprop(nil, v_163, v_162);
    env = stack[-8];
    v_163 = stack[-2];
    v_162 = basic_elt(env, 11); // funs
    v_162 = get(v_163, v_162);
    env = stack[-8];
    stack[-7] = v_162;
    stack[-1] = v_162;
v_110:
    v_162 = stack[-1];
    if (v_162 == nil) goto v_116;
    else goto v_117;
v_116:
    goto v_109;
v_117:
    v_162 = stack[-1];
    if (!car_legal(v_162)) v_162 = carerror(v_162); else
    v_162 = car(v_162);
    stack[0] = v_162;
    v_162 = stack[0];
    {   LispObject fn = basic_elt(env, 16); // undefdchk
    v_162 = (*qfn1(fn))(fn, v_162);
    }
    env = stack[-8];
    v_163 = stack[0];
    v_162 = basic_elt(env, 12); // rccnam
    v_162 = Lremprop(nil, v_163, v_162);
    env = stack[-8];
    v_162 = stack[-1];
    if (!car_legal(v_162)) v_162 = cdrerror(v_162); else
    v_162 = cdr(v_162);
    stack[-1] = v_162;
    goto v_110;
v_109:
    v_163 = stack[-2];
    v_162 = stack[-7];
    v_162 = cons(v_163, v_162);
    env = stack[-8];
    v_162 = ncons(v_162);
    env = stack[-8];
    if (!car_legal(stack[-3])) rplacd_fails(stack[-3]);
    setcdr(stack[-3], v_162);
    v_162 = stack[-4];
    if (!car_legal(v_162)) v_162 = cdrerror(v_162); else
    v_162 = cdr(v_162);
    stack[-4] = v_162;
    goto v_49;
v_48:
    setvalue(basic_elt(env, 9), v_162); // tseen!*
    v_162 = qvalue(basic_elt(env, 13)); // gseen!*
    stack[0] = v_162;
v_139:
    v_162 = stack[0];
    if (v_162 == nil) goto v_143;
    else goto v_144;
v_143:
    goto v_138;
v_144:
    v_162 = stack[0];
    if (!car_legal(v_162)) v_162 = carerror(v_162); else
    v_162 = car(v_162);
    v_164 = v_162;
    v_163 = v_164;
    v_162 = basic_elt(env, 14); // usedunby
    v_162 = get(v_163, v_162);
    env = stack[-8];
    if (v_162 == nil) goto v_153;
    v_163 = v_164;
    v_162 = qvalue(basic_elt(env, 15)); // undefg!*
    v_162 = cons(v_163, v_162);
    env = stack[-8];
    setvalue(basic_elt(env, 15), v_162); // undefg!*
    goto v_151;
v_153:
v_151:
    v_162 = stack[0];
    if (!car_legal(v_162)) v_162 = cdrerror(v_162); else
    v_162 = cdr(v_162);
    stack[0] = v_162;
    goto v_139;
v_138:
    v_162 = nil;
    return onevalue(v_162);
}



// Code for sfto_updecf

static LispObject CC_sfto_updecf(LispObject env,
                         LispObject v_2)
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
        push(v_2);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_22 = v_2;
// end of prologue
    v_21 = qvalue(basic_elt(env, 1)); // !*sfto_yun
    if (v_21 == nil) goto v_7;
    v_21 = v_22;
    {
        LispObject fn = basic_elt(env, 4); // sfto_yun!-updecf
        return (*qfn1(fn))(fn, v_21);
    }
v_7:
    v_21 = qvalue(basic_elt(env, 2)); // !*sfto_musser
    if (v_21 == nil) goto v_12;
    v_21 = v_22;
    {
        LispObject fn = basic_elt(env, 5); // sfto_musser!-updecf
        return (*qfn1(fn))(fn, v_21);
    }
v_12:
    v_21 = basic_elt(env, 3); // "sfto_updecf: select a decomposition method"
    v_21 = ncons(v_21);
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 6); // rederr
        return (*qfn1(fn))(fn, v_21);
    }
    v_21 = nil;
    return onevalue(v_21);
}



// Code for simpexpt1

static LispObject CC_simpexpt1(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_396, v_397, v_398;
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(9);
// copy arguments values to proper place
    stack[-4] = v_4;
    stack[-5] = v_3;
    stack[-6] = v_2;
// end of prologue
// Binding !*allfac
// FLUIDBIND: reloadenv=8 litvec-offset=1 saveloc=7
{   bind_fluid_stack bind_fluid_var(-8, 1, -7);
    setvalue(basic_elt(env, 1), nil); // !*allfac
// Binding !*div
// FLUIDBIND: reloadenv=8 litvec-offset=2 saveloc=3
{   bind_fluid_stack bind_fluid_var(-8, 2, -3);
    setvalue(basic_elt(env, 2), nil); // !*div
    v_396 = stack[-6];
    v_396 = Lonep(nil, v_396);
    env = stack[-8];
    if (v_396 == nil) goto v_18;
    v_397 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_396 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_396 = cons(v_397, v_396);
    goto v_14;
v_18:
    v_396 = lisp_true;
    setvalue(basic_elt(env, 1), v_396); // !*allfac
    v_396 = stack[-5];
    if (!car_legal(v_396)) v_396 = carerror(v_396); else
    v_396 = car(v_396);
    stack[-2] = v_396;
    v_397 = stack[-2];
    v_396 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_397 == v_396) goto v_33;
    else goto v_34;
v_33:
    v_396 = stack[-5];
    if (!car_legal(v_396)) v_397 = cdrerror(v_396); else
    v_397 = cdr(v_396);
    v_396 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_396 = (v_397 == v_396 ? lisp_true : nil);
    goto v_32;
v_34:
    v_396 = nil;
    goto v_32;
    v_396 = nil;
v_32:
    if (v_396 == nil) goto v_30;
    v_396 = stack[-6];
    {   LispObject fn = basic_elt(env, 10); // simp
    v_396 = (*qfn1(fn))(fn, v_396);
    }
    goto v_14;
v_30:
    v_397 = stack[-6];
    v_396 = basic_elt(env, 3); // e
    if (v_397 == v_396) goto v_52;
    else goto v_53;
v_52:
    v_396 = stack[-5];
    if (!car_legal(v_396)) v_396 = cdrerror(v_396); else
    v_396 = cdr(v_396);
    if (!consp(v_396)) goto v_62;
    else goto v_63;
v_62:
    v_396 = lisp_true;
    goto v_61;
v_63:
    v_396 = stack[-5];
    if (!car_legal(v_396)) v_396 = cdrerror(v_396); else
    v_396 = cdr(v_396);
    if (!car_legal(v_396)) v_396 = carerror(v_396); else
    v_396 = car(v_396);
    v_396 = (consp(v_396) ? nil : lisp_true);
    goto v_61;
    v_396 = nil;
v_61:
    if (v_396 == nil) goto v_59;
    v_396 = stack[-2];
    if (!consp(v_396)) goto v_79;
    else goto v_80;
v_79:
    v_396 = lisp_true;
    goto v_78;
v_80:
    v_396 = stack[-2];
    if (!car_legal(v_396)) v_396 = carerror(v_396); else
    v_396 = car(v_396);
    v_396 = (consp(v_396) ? nil : lisp_true);
    goto v_78;
    v_396 = nil;
v_78:
    if (v_396 == nil) goto v_75;
    else goto v_76;
v_75:
    v_396 = stack[-2];
    if (!car_legal(v_396)) v_396 = carerror(v_396); else
    v_396 = car(v_396);
    if (!car_legal(v_396)) v_396 = carerror(v_396); else
    v_396 = car(v_396);
    if (!car_legal(v_396)) v_397 = cdrerror(v_396); else
    v_397 = cdr(v_396);
    v_396 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_397 == v_396) goto v_90;
    else goto v_91;
v_90:
    v_396 = stack[-2];
    if (!car_legal(v_396)) v_396 = cdrerror(v_396); else
    v_396 = cdr(v_396);
    if (v_396 == nil) goto v_99;
    else goto v_100;
v_99:
    v_396 = stack[-2];
    if (!car_legal(v_396)) v_396 = carerror(v_396); else
    v_396 = car(v_396);
    if (!car_legal(v_396)) v_396 = carerror(v_396); else
    v_396 = car(v_396);
    if (!car_legal(v_396)) v_397 = carerror(v_396); else
    v_397 = car(v_396);
    v_396 = basic_elt(env, 4); // log
    v_396 = Leqcar(nil, v_397, v_396);
    env = stack[-8];
    goto v_98;
v_100:
    v_396 = nil;
    goto v_98;
    v_396 = nil;
v_98:
    goto v_89;
v_91:
    v_396 = nil;
    goto v_89;
    v_396 = nil;
v_89:
    goto v_74;
v_76:
    v_396 = nil;
    goto v_74;
    v_396 = nil;
v_74:
    goto v_57;
v_59:
    v_396 = nil;
    goto v_57;
    v_396 = nil;
v_57:
    goto v_51;
v_53:
    v_396 = nil;
    goto v_51;
    v_396 = nil;
v_51:
    if (v_396 == nil) goto v_49;
    v_396 = stack[-2];
    if (!car_legal(v_396)) v_396 = carerror(v_396); else
    v_396 = car(v_396);
    if (!car_legal(v_396)) v_396 = carerror(v_396); else
    v_396 = car(v_396);
    if (!car_legal(v_396)) v_396 = carerror(v_396); else
    v_396 = car(v_396);
    if (!car_legal(v_396)) v_396 = cdrerror(v_396); else
    v_396 = cdr(v_396);
    if (!car_legal(v_396)) v_396 = carerror(v_396); else
    v_396 = car(v_396);
    {   LispObject fn = basic_elt(env, 11); // simp!*
    v_396 = (*qfn1(fn))(fn, v_396);
    }
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 12); // prepsq!*
    stack[0] = (*qfn1(fn))(fn, v_396);
    }
    env = stack[-8];
    v_396 = stack[-2];
    if (!car_legal(v_396)) v_396 = carerror(v_396); else
    v_396 = car(v_396);
    if (!car_legal(v_396)) v_397 = cdrerror(v_396); else
    v_397 = cdr(v_396);
    v_396 = stack[-5];
    if (!car_legal(v_396)) v_396 = cdrerror(v_396); else
    v_396 = cdr(v_396);
    v_397 = cons(v_397, v_396);
    env = stack[-8];
    v_396 = nil;
    {   LispObject fn = basic_elt(env, 0); // simpexpt1
    v_396 = (*qfn3(fn))(fn, stack[0], v_397, v_396);
    }
    goto v_14;
v_49:
    v_396 = stack[-2];
    if (!consp(v_396)) goto v_150;
    else goto v_151;
v_150:
    v_396 = lisp_true;
    goto v_149;
v_151:
    v_396 = stack[-2];
    if (!car_legal(v_396)) v_396 = carerror(v_396); else
    v_396 = car(v_396);
    v_396 = (consp(v_396) ? nil : lisp_true);
    goto v_149;
    v_396 = nil;
v_149:
    if (v_396 == nil) goto v_146;
    else goto v_147;
v_146:
    v_396 = lisp_true;
    goto v_145;
v_147:
    v_396 = stack[-5];
    if (!car_legal(v_396)) v_396 = cdrerror(v_396); else
    v_396 = cdr(v_396);
    if (!consp(v_396)) goto v_164;
    else goto v_165;
v_164:
    v_396 = lisp_true;
    goto v_163;
v_165:
    v_396 = stack[-5];
    if (!car_legal(v_396)) v_396 = cdrerror(v_396); else
    v_396 = cdr(v_396);
    if (!car_legal(v_396)) v_396 = carerror(v_396); else
    v_396 = car(v_396);
    v_396 = (consp(v_396) ? nil : lisp_true);
    goto v_163;
    v_396 = nil;
v_163:
    v_396 = (v_396 == nil ? lisp_true : nil);
    goto v_145;
    v_396 = nil;
v_145:
    if (v_396 == nil) goto v_143;
    v_398 = stack[-6];
    v_397 = stack[-5];
    v_396 = stack[-4];
    {   LispObject fn = basic_elt(env, 13); // simpexpt11
    v_396 = (*qfn3(fn))(fn, v_398, v_397, v_396);
    }
    goto v_14;
v_143:
    v_396 = stack[-6];
    {   LispObject fn = basic_elt(env, 10); // simp
    v_396 = (*qfn1(fn))(fn, v_396);
    }
    env = stack[-8];
    stack[-1] = v_396;
    v_396 = stack[-2];
    if (v_396 == nil) goto v_184;
    else goto v_185;
v_184:
    v_396 = stack[-1];
    if (!car_legal(v_396)) v_396 = carerror(v_396); else
    v_396 = car(v_396);
    if (v_396 == nil) goto v_189;
    else goto v_190;
v_189:
    v_398 = basic_elt(env, 5); // alg
    v_397 = static_cast<LispObject>(224)+TAG_FIXNUM; // 14
    v_396 = basic_elt(env, 6); // "0**0 formed"
    {   LispObject fn = basic_elt(env, 14); // rerror
    v_396 = (*qfn3(fn))(fn, v_398, v_397, v_396);
    }
    goto v_188;
v_190:
    v_397 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_396 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_396 = cons(v_397, v_396);
    goto v_188;
    v_396 = nil;
v_188:
    goto v_14;
v_185:
    v_396 = stack[-1];
    if (!car_legal(v_396)) v_396 = carerror(v_396); else
    v_396 = car(v_396);
    if (v_396 == nil) goto v_204;
    else goto v_205;
v_204:
    v_396 = stack[-2];
    if (!consp(v_396)) goto v_218;
    else goto v_219;
v_218:
    v_396 = lisp_true;
    goto v_217;
v_219:
    v_396 = stack[-2];
    if (!car_legal(v_396)) v_396 = carerror(v_396); else
    v_396 = car(v_396);
    v_396 = (consp(v_396) ? nil : lisp_true);
    goto v_217;
    v_396 = nil;
v_217:
    if (v_396 == nil) goto v_215;
    v_396 = stack[-2];
    {   LispObject fn = basic_elt(env, 15); // minusf
    v_396 = (*qfn1(fn))(fn, v_396);
    }
    env = stack[-8];
    goto v_213;
v_215:
    v_396 = nil;
    goto v_213;
    v_396 = nil;
v_213:
    if (v_396 == nil) goto v_211;
    v_398 = basic_elt(env, 5); // alg
    v_397 = static_cast<LispObject>(240)+TAG_FIXNUM; // 15
    v_396 = basic_elt(env, 7); // "Zero divisor"
    {   LispObject fn = basic_elt(env, 14); // rerror
    v_396 = (*qfn3(fn))(fn, v_398, v_397, v_396);
    }
    goto v_209;
v_211:
    v_397 = nil;
    v_396 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_396 = cons(v_397, v_396);
    goto v_209;
    v_396 = nil;
v_209:
    goto v_203;
v_205:
    v_396 = stack[-2];
    if (!consp(v_396)) goto v_245;
    else goto v_246;
v_245:
    v_396 = stack[-5];
    if (!car_legal(v_396)) v_397 = cdrerror(v_396); else
    v_397 = cdr(v_396);
    v_396 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_397 == v_396) goto v_250;
    else goto v_251;
v_250:
    v_396 = stack[-1];
    if (!car_legal(v_396)) v_396 = carerror(v_396); else
    v_396 = car(v_396);
    if (!consp(v_396)) goto v_261;
    else goto v_262;
v_261:
    v_396 = lisp_true;
    goto v_260;
v_262:
    v_396 = stack[-1];
    if (!car_legal(v_396)) v_396 = carerror(v_396); else
    v_396 = car(v_396);
    if (!car_legal(v_396)) v_396 = carerror(v_396); else
    v_396 = car(v_396);
    v_396 = (consp(v_396) ? nil : lisp_true);
    goto v_260;
    v_396 = nil;
v_260:
    if (v_396 == nil) goto v_258;
    v_396 = stack[-1];
    if (!car_legal(v_396)) v_397 = cdrerror(v_396); else
    v_397 = cdr(v_396);
    v_396 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_396 = (v_397 == v_396 ? lisp_true : nil);
    goto v_256;
v_258:
    v_396 = nil;
    goto v_256;
    v_396 = nil;
v_256:
    goto v_249;
v_251:
    v_396 = nil;
    goto v_249;
    v_396 = nil;
v_249:
    goto v_244;
v_246:
    v_396 = nil;
    goto v_244;
    v_396 = nil;
v_244:
    if (v_396 == nil) goto v_242;
    v_396 = stack[-1];
    if (!car_legal(v_396)) v_396 = carerror(v_396); else
    v_396 = car(v_396);
    if (!consp(v_396)) goto v_291;
    else goto v_292;
v_291:
    v_397 = stack[-2];
    v_396 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_396 = static_cast<LispObject>(greaterp2(v_397, v_396));
    v_396 = v_396 ? lisp_true : nil;
    env = stack[-8];
    goto v_290;
v_292:
    v_396 = nil;
    goto v_290;
    v_396 = nil;
v_290:
    if (v_396 == nil) goto v_288;
    v_396 = stack[-1];
    if (!car_legal(v_396)) v_397 = carerror(v_396); else
    v_397 = car(v_396);
    v_396 = stack[-2];
    v_396 = Lexpt(nil, v_397, v_396);
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 16); // !*d2q
    v_396 = (*qfn1(fn))(fn, v_396);
    }
    goto v_286;
v_288:
    v_396 = stack[-1];
    if (!car_legal(v_396)) v_397 = carerror(v_396); else
    v_397 = car(v_396);
    v_396 = stack[-2];
    {   LispObject fn = basic_elt(env, 17); // !:expt
    v_397 = (*qfn2(fn))(fn, v_397, v_396);
    }
    env = stack[-8];
    v_396 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_396 = cons(v_397, v_396);
    env = stack[-8];
    stack[-1] = v_396;
    v_396 = qvalue(basic_elt(env, 8)); // !*mcd
    if (v_396 == nil) goto v_317;
    v_396 = stack[-1];
    {   LispObject fn = basic_elt(env, 18); // resimp
    v_396 = (*qfn1(fn))(fn, v_396);
    }
    goto v_315;
v_317:
    v_396 = stack[-1];
    goto v_315;
    v_396 = nil;
v_315:
    goto v_286;
    v_396 = nil;
v_286:
    goto v_203;
v_242:
    stack[0] = basic_elt(env, 9); // expt
    v_397 = stack[-1];
    v_396 = stack[-5];
    v_396 = list2(v_397, v_396);
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 19); // domainvalchk
    v_396 = (*qfn2(fn))(fn, stack[0], v_396);
    }
    env = stack[-8];
    v_397 = v_396;
    if (v_396 == nil) goto v_325;
    v_396 = v_397;
    goto v_203;
v_325:
    v_396 = stack[-2];
    if (!consp(v_396)) goto v_336;
    else goto v_337;
v_336:
    v_396 = stack[-5];
    if (!car_legal(v_396)) v_397 = cdrerror(v_396); else
    v_397 = cdr(v_396);
    v_396 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_396 = (v_397 == v_396 ? lisp_true : nil);
    goto v_335;
v_337:
    v_396 = nil;
    goto v_335;
    v_396 = nil;
v_335:
    if (v_396 == nil) goto v_333;
    v_397 = stack[-2];
    v_396 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_396 = static_cast<LispObject>(lessp2(v_397, v_396));
    v_396 = v_396 ? lisp_true : nil;
    env = stack[-8];
    if (v_396 == nil) goto v_348;
    else goto v_349;
v_348:
    v_397 = stack[-1];
    v_396 = stack[-2];
    {   LispObject fn = basic_elt(env, 20); // exptsq
    v_396 = (*qfn2(fn))(fn, v_397, v_396);
    }
    goto v_347;
v_349:
    v_396 = qvalue(basic_elt(env, 8)); // !*mcd
    if (v_396 == nil) goto v_357;
    stack[0] = stack[-1];
    v_396 = stack[-2];
    v_396 = negate(v_396);
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 20); // exptsq
    v_396 = (*qfn2(fn))(fn, stack[0], v_396);
    }
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 21); // invsq
    v_396 = (*qfn1(fn))(fn, v_396);
    }
    goto v_347;
v_357:
    v_396 = stack[-1];
    if (!car_legal(v_396)) v_397 = carerror(v_396); else
    v_397 = car(v_396);
    v_396 = stack[-2];
    {   LispObject fn = basic_elt(env, 22); // expf
    stack[0] = (*qfn2(fn))(fn, v_397, v_396);
    }
    env = stack[-8];
    v_396 = stack[-1];
    if (!car_legal(v_396)) stack[-1] = cdrerror(v_396); else
    stack[-1] = cdr(v_396);
    v_396 = stack[-2];
    v_396 = negate(v_396);
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 23); // mksfpf
    v_396 = (*qfn2(fn))(fn, stack[-1], v_396);
    }
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 24); // multf
    v_397 = (*qfn2(fn))(fn, stack[0], v_396);
    }
    env = stack[-8];
    v_396 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_396 = cons(v_397, v_396);
    goto v_347;
    v_396 = nil;
v_347:
    goto v_203;
v_333:
    v_396 = stack[-4];
    if (v_396 == nil) goto v_384;
    v_396 = stack[-6];
    v_398 = v_396;
    goto v_382;
v_384:
    v_396 = stack[-1];
    {   LispObject fn = basic_elt(env, 25); // subs2!*
    v_396 = (*qfn1(fn))(fn, v_396);
    }
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 12); // prepsq!*
    v_396 = (*qfn1(fn))(fn, v_396);
    }
    env = stack[-8];
    v_398 = v_396;
    goto v_382;
    v_398 = nil;
v_382:
    v_397 = stack[-5];
    v_396 = lisp_true;
    {   LispObject fn = basic_elt(env, 13); // simpexpt11
    v_396 = (*qfn3(fn))(fn, v_398, v_397, v_396);
    }
    goto v_203;
    v_396 = nil;
v_203:
v_14:
    ;}  // end of a binding scope
    ;}  // end of a binding scope
    return onevalue(v_396);
}



// Code for get_char_group

static LispObject CC_get_char_group(LispObject env,
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
    if (!car_legal(v_8)) v_8 = carerror(v_8); else
    v_8 = car(v_8);
    return onevalue(v_8);
}



setup_type const u31_setup[] =
{
    {"factor-prim-sqfree-f",    G0W1,     CC_factorKprimKsqfreeKf,G2W1,G3W1,G4W1},
    {"derad",                   G0W2,     G1W2,     CC_derad, G3W2,     G4W2},
    {"dip2vdp",                 G0W1,     CC_dip2vdp,G2W1,    G3W1,     G4W1},
    {"indordn",                 G0W1,     CC_indordn,G2W1,    G3W1,     G4W1},
    {"generic-sub",             G0W2,     G1W2,     CC_genericKsub,G3W2,G4W2},
    {"symbol",                  G0W1,     CC_symbol,G2W1,     G3W1,     G4W1},
    {"modp",                    G0W2,     G1W2,     CC_modp,  G3W2,     G4W2},
    {"horner-rule-for-one-var", G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_hornerKruleKforKoneKvar},
    {"letscalar",               G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_letscalar},
    {"ra_l",                    G0W1,     CC_ra_l,  G2W1,     G3W1,     G4W1},
    {"lalr_process_productions",G0W2,     G1W2,     CC_lalr_process_productions,G3W2,G4W2},
    {"read_signature",          CC_read_signature,G1W0,G2W0,  G3W0,     G4W0},
    {"ofsf_smordtable",         G0W2,     G1W2,     CC_ofsf_smordtable,G3W2,G4W2},
    {"mk+squared+norm",         G0W1,     CC_mkLsquaredLnorm,G2W1,G3W1, G4W1},
    {"cgp_mk",                  G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_cgp_mk},
    {"semanticml",              G0W1,     CC_semanticml,G2W1, G3W1,     G4W1},
    {"evalvars",                G0W1,     CC_evalvars,G2W1,   G3W1,     G4W1},
    {"vdp2a",                   G0W1,     CC_vdp2a, G2W1,     G3W1,     G4W1},
    {"overall_factor",          G0W2,     G1W2,     CC_overall_factor,G3W2,G4W2},
    {"nconc2",                  G0W2,     G1W2,     CC_nconc2,G3W2,     G4W2},
    {"testchar1",               G0W1,     CC_testchar1,G2W1,  G3W1,     G4W1},
    {"gparg1p",                 G0W1,     CC_gparg1p,G2W1,    G3W1,     G4W1},
    {"formsetq",                G0W3,     G1W3,     G2W3,     CC_formsetq,G4W3},
    {"mv-pow->",                G0W2,     G1W2,     CC_mvKpowKS,G3W2,   G4W2},
    {"red=subst1",              G0W2,     G1W2,     CC_redMsubst1,G3W2, G4W2},
    {"lalr_process_reductions", CC_lalr_process_reductions,G1W0,G2W0,G3W0,G4W0},
    {"monomgetfirstmultivar",   G0W1,     CC_monomgetfirstmultivar,G2W1,G3W1,G4W1},
    {"talp_noffcts",            CC_talp_noffcts,G1W0,G2W0,    G3W0,     G4W0},
    {"lesspcdadr",              G0W2,     G1W2,     CC_lesspcdadr,G3W2, G4W2},
    {"matrix_rows",             G0W1,     CC_matrix_rows,G2W1,G3W1,     G4W1},
    {"noncomexpf",              G0W1,     CC_noncomexpf,G2W1, G3W1,     G4W1},
    {"xriterion_1",             G0W3,     G1W3,     G2W3,     CC_xriterion_1,G4W3},
    {"gfplusn",                 G0W2,     G1W2,     CC_gfplusn,G3W2,    G4W2},
    {"sign-of",                 G0W1,     CC_signKof,G2W1,    G3W1,     G4W1},
    {"assert_stat-parse",       CC_assert_statKparse,G1W0,G2W0,G3W0,    G4W0},
    {"comb",                    G0W2,     G1W2,     CC_comb,  G3W2,     G4W2},
    {"gcref_off1",              CC_gcref_off1,G1W0, G2W0,     G3W0,     G4W0},
    {"sfto_updecf",             G0W1,     CC_sfto_updecf,G2W1,G3W1,     G4W1},
    {"simpexpt1",               G0W3,     G1W3,     G2W3,     CC_simpexpt1,G4W3},
    {"get_char_group",          G0W1,     CC_get_char_group,G2W1,G3W1,  G4W1},
    {nullptr, 
        reinterpret_cast<no_args *>(
            reinterpret_cast<uintptr_t>("u31")),
        reinterpret_cast<one_arg *>(
            reinterpret_cast<uintptr_t>("85054 7291130 1149592")),
        nullptr, nullptr, nullptr}
};

// end of generated code
