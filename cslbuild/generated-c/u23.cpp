
// $destdir/u23.c        Machine generated C code

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


// Code for arplus!:

static LispObject CC_arplusT(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_21, v_22, v_23;
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
    v_22 = v_3;
    v_23 = v_2;
// end of prologue
// Binding dmode!*
// FLUIDBIND: reloadenv=3 litvec-offset=1 saveloc=2
{   bind_fluid_stack bind_fluid_var(-3, 1, -2);
    setvalue(basic_elt(env, 1), nil); // dmode!*
// Binding !*exp
// FLUIDBIND: reloadenv=3 litvec-offset=2 saveloc=1
{   bind_fluid_stack bind_fluid_var(-3, 2, -1);
    setvalue(basic_elt(env, 2), nil); // !*exp
    v_21 = lisp_true;
    setvalue(basic_elt(env, 2), v_21); // !*exp
    stack[0] = basic_elt(env, 3); // !:ar!:
    v_21 = v_23;
    if (!car_legal(v_21)) v_21 = cdrerror(v_21); else
    v_21 = cdr(v_21);
    if (!car_legal(v_22)) v_22 = cdrerror(v_22); else
    v_22 = cdr(v_22);
    {   LispObject fn = basic_elt(env, 4); // addf
    v_21 = (*qfn2(fn))(fn, v_21, v_22);
    }
    env = stack[-3];
    v_21 = cons(stack[0], v_21);
    ;}  // end of a binding scope
    ;}  // end of a binding scope
    return onevalue(v_21);
}



// Code for gfk

static LispObject CC_gfk(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_61, v_62, v_63, v_64, v_65, v_66;
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
    v_64 = v_4;
    v_65 = v_3;
    v_61 = v_2;
// end of prologue
v_1:
    v_62 = v_64;
    if (v_62 == nil) goto v_10;
    else goto v_8;
v_10:
    v_62 = v_61;
    if (!consp(v_62)) goto v_15;
    else goto v_16;
v_15:
    v_62 = lisp_true;
    goto v_14;
v_16:
    v_62 = v_61;
    if (!car_legal(v_62)) v_62 = carerror(v_62); else
    v_62 = car(v_62);
    v_62 = (consp(v_62) ? nil : lisp_true);
    goto v_14;
    v_62 = nil;
v_14:
    if (v_62 == nil) goto v_12;
    else goto v_8;
v_12:
    goto v_9;
v_8:
    v_61 = v_64;
    goto v_7;
v_9:
    v_62 = v_61;
    if (!car_legal(v_62)) v_62 = carerror(v_62); else
    v_62 = car(v_62);
    if (!car_legal(v_62)) v_62 = carerror(v_62); else
    v_62 = car(v_62);
    if (!car_legal(v_62)) v_62 = carerror(v_62); else
    v_62 = car(v_62);
    v_66 = v_62;
    v_62 = v_61;
    if (!car_legal(v_62)) stack[-1] = cdrerror(v_62); else
    stack[-1] = cdr(v_62);
    stack[0] = v_65;
    if (!car_legal(v_61)) v_61 = carerror(v_61); else
    v_61 = car(v_61);
    if (!car_legal(v_61)) v_63 = cdrerror(v_61); else
    v_63 = cdr(v_61);
    v_62 = v_65;
    v_61 = v_66;
    if (!consp(v_61)) goto v_48;
    v_61 = v_66;
    if (!car_legal(v_61)) v_61 = carerror(v_61); else
    v_61 = car(v_61);
    v_61 = Lmember(nil, v_61, v_65);
    goto v_46;
v_48:
    v_61 = nil;
    goto v_46;
    v_61 = nil;
v_46:
    if (v_61 == nil) goto v_44;
    v_61 = v_66;
    goto v_42;
v_44:
    v_61 = v_64;
    goto v_42;
    v_61 = nil;
v_42:
    {   LispObject fn = basic_elt(env, 0); // gfk
    v_62 = (*qfn3(fn))(fn, v_63, v_62, v_61);
    }
    env = stack[-2];
    v_61 = stack[-1];
    v_65 = stack[0];
    v_64 = v_62;
    goto v_1;
    v_61 = nil;
v_7:
    return onevalue(v_61);
}



// Code for coeffs

static LispObject CC_coeffs(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_110, v_111;
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
    stack[-2] = nil;
    v_110 = stack[-4];
    if (!car_legal(v_110)) v_110 = carerror(v_110); else
    v_110 = car(v_110);
    if (!car_legal(v_110)) v_110 = carerror(v_110); else
    v_110 = car(v_110);
    if (!car_legal(v_110)) v_110 = carerror(v_110); else
    v_110 = car(v_110);
    stack[-1] = v_110;
    v_110 = stack[-4];
    if (!car_legal(v_110)) v_110 = carerror(v_110); else
    v_110 = car(v_110);
    if (!car_legal(v_110)) v_110 = carerror(v_110); else
    v_110 = car(v_110);
    if (!car_legal(v_110)) v_110 = cdrerror(v_110); else
    v_110 = cdr(v_110);
    stack[-5] = v_110;
v_22:
    v_110 = stack[-4];
    if (!consp(v_110)) goto v_33;
    else goto v_34;
v_33:
    v_110 = lisp_true;
    goto v_32;
v_34:
    v_110 = stack[-4];
    if (!car_legal(v_110)) v_110 = carerror(v_110); else
    v_110 = car(v_110);
    v_110 = (consp(v_110) ? nil : lisp_true);
    goto v_32;
    v_110 = nil;
v_32:
    if (v_110 == nil) goto v_29;
    else goto v_30;
v_29:
    v_110 = stack[-4];
    if (!car_legal(v_110)) v_110 = carerror(v_110); else
    v_110 = car(v_110);
    if (!car_legal(v_110)) v_110 = carerror(v_110); else
    v_110 = car(v_110);
    if (!car_legal(v_110)) v_111 = carerror(v_110); else
    v_111 = car(v_110);
    v_110 = stack[-1];
    v_110 = (v_111 == v_110 ? lisp_true : nil);
    goto v_28;
v_30:
    v_110 = nil;
    goto v_28;
    v_110 = nil;
v_28:
    if (v_110 == nil) goto v_25;
    else goto v_26;
v_25:
    goto v_21;
v_26:
    v_110 = stack[-4];
    if (!car_legal(v_110)) v_110 = carerror(v_110); else
    v_110 = car(v_110);
    if (!car_legal(v_110)) v_110 = carerror(v_110); else
    v_110 = car(v_110);
    if (!car_legal(v_110)) v_110 = cdrerror(v_110); else
    v_110 = cdr(v_110);
    stack[-3] = v_110;
    v_110 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[0] = v_110;
v_59:
    v_111 = stack[-5];
    v_110 = stack[-3];
    v_110 = difference2(v_111, v_110);
    env = stack[-6];
    v_111 = sub1(v_110);
    env = stack[-6];
    v_110 = stack[0];
    v_110 = difference2(v_111, v_110);
    env = stack[-6];
    v_110 = Lminusp(nil, v_110);
    env = stack[-6];
    if (v_110 == nil) goto v_64;
    goto v_58;
v_64:
    v_111 = nil;
    v_110 = stack[-2];
    v_110 = cons(v_111, v_110);
    env = stack[-6];
    stack[-2] = v_110;
    v_110 = stack[0];
    v_110 = add1(v_110);
    env = stack[-6];
    stack[0] = v_110;
    goto v_59;
v_58:
    v_110 = stack[-4];
    if (!car_legal(v_110)) v_110 = carerror(v_110); else
    v_110 = car(v_110);
    if (!car_legal(v_110)) v_111 = cdrerror(v_110); else
    v_111 = cdr(v_110);
    v_110 = stack[-2];
    v_110 = cons(v_111, v_110);
    env = stack[-6];
    stack[-2] = v_110;
    v_110 = stack[-4];
    if (!car_legal(v_110)) v_110 = cdrerror(v_110); else
    v_110 = cdr(v_110);
    stack[-4] = v_110;
    v_110 = stack[-3];
    stack[-5] = v_110;
    goto v_22;
v_21:
    v_110 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[0] = v_110;
v_89:
    v_110 = stack[-5];
    v_111 = sub1(v_110);
    env = stack[-6];
    v_110 = stack[0];
    v_110 = difference2(v_111, v_110);
    env = stack[-6];
    v_110 = Lminusp(nil, v_110);
    env = stack[-6];
    if (v_110 == nil) goto v_94;
    goto v_88;
v_94:
    v_111 = nil;
    v_110 = stack[-2];
    v_110 = cons(v_111, v_110);
    env = stack[-6];
    stack[-2] = v_110;
    v_110 = stack[0];
    v_110 = add1(v_110);
    env = stack[-6];
    stack[0] = v_110;
    goto v_89;
v_88:
    v_111 = stack[-4];
    v_110 = stack[-2];
    v_110 = cons(v_111, v_110);
        return Lnreverse(nil, v_110);
    return onevalue(v_110);
}



// Code for dfprint

static LispObject CC_dfprint(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_39, v_40;
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
    v_39 = qvalue(basic_elt(env, 1)); // dfprint!*
    if (v_39 == nil) goto v_7;
    stack[-1] = qvalue(basic_elt(env, 1)); // dfprint!*
    v_39 = stack[0];
    v_39 = ncons(v_39);
    env = stack[-2];
    {
        LispObject v_43 = stack[-1];
        LispObject fn = basic_elt(env, 4); // lispapply
        return (*qfn2(fn))(fn, v_43, v_39);
    }
v_7:
    v_39 = qvalue(basic_elt(env, 2)); // cmsg!*
    if (v_39 == nil) goto v_14;
    v_39 = nil;
    goto v_5;
v_14:
    v_40 = stack[0];
    v_39 = basic_elt(env, 3); // progn
    if (!consp(v_40)) goto v_17;
    v_40 = car(v_40);
    if (v_40 == v_39) goto v_18;
v_17:
    v_39 = stack[0];
    {
        LispObject fn = basic_elt(env, 5); // prettyprint
        return (*qfn1(fn))(fn, v_39);
    }
v_18:
v_28:
    v_39 = stack[0];
    if (!car_legal(v_39)) v_39 = cdrerror(v_39); else
    v_39 = cdr(v_39);
    stack[0] = v_39;
    if (v_39 == nil) goto v_31;
    else goto v_32;
v_31:
    v_39 = nil;
    goto v_27;
v_32:
    v_39 = stack[0];
    if (!car_legal(v_39)) v_39 = carerror(v_39); else
    v_39 = car(v_39);
    {   LispObject fn = basic_elt(env, 0); // dfprint
    v_39 = (*qfn1(fn))(fn, v_39);
    }
    env = stack[-2];
    goto v_28;
v_27:
    goto v_5;
    v_39 = nil;
v_5:
    return onevalue(v_39);
}



// Code for monomwrite

static LispObject CC_monomwrite(LispObject env,
                         LispObject v_2)
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
    v_74 = v_2;
// end of prologue
    stack[-5] = nil;
    v_73 = qvalue(basic_elt(env, 1)); // fluidbibasisnumberofvariables
    stack[-2] = v_73;
    v_73 = qvalue(basic_elt(env, 2)); // fluidbibasisreversedvariables
    stack[-4] = v_73;
    v_73 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_73 = Lgetv(nil, v_74, v_73);
    env = stack[-6];
    stack[-3] = v_73;
v_18:
    v_73 = stack[-3];
    if (!car_legal(v_73)) v_73 = carerror(v_73); else
    v_73 = car(v_73);
    if (v_73 == nil) goto v_21;
    else goto v_22;
v_21:
    goto v_17;
v_22:
    v_73 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[0] = v_73;
v_29:
    v_74 = stack[-2];
    v_73 = stack[-3];
    if (!car_legal(v_73)) v_73 = carerror(v_73); else
    v_73 = car(v_73);
    v_74 = difference2(v_74, v_73);
    env = stack[-6];
    v_73 = stack[0];
    v_73 = difference2(v_74, v_73);
    env = stack[-6];
    v_73 = Lminusp(nil, v_73);
    env = stack[-6];
    if (v_73 == nil) goto v_34;
    goto v_28;
v_34:
    v_73 = stack[-4];
    if (!car_legal(v_73)) v_73 = cdrerror(v_73); else
    v_73 = cdr(v_73);
    stack[-4] = v_73;
    v_73 = stack[0];
    v_73 = add1(v_73);
    env = stack[-6];
    stack[0] = v_73;
    goto v_29;
v_28:
    v_73 = stack[-3];
    if (!car_legal(v_73)) v_73 = carerror(v_73); else
    v_73 = car(v_73);
    stack[-2] = v_73;
    v_73 = stack[-5];
    if (v_73 == nil) goto v_53;
    v_73 = stack[-4];
    if (!car_legal(v_73)) stack[-1] = carerror(v_73); else
    stack[-1] = car(v_73);
    stack[0] = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_73 = stack[-5];
    v_73 = ncons(v_73);
    env = stack[-6];
    v_73 = acons(stack[-1], stack[0], v_73);
    env = stack[-6];
    stack[-5] = v_73;
    goto v_51;
v_53:
    v_73 = stack[-4];
    if (!car_legal(v_73)) v_75 = carerror(v_73); else
    v_75 = car(v_73);
    v_74 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_73 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_73 = acons(v_75, v_74, v_73);
    env = stack[-6];
    stack[-5] = v_73;
    goto v_51;
v_51:
    v_73 = stack[-3];
    if (!car_legal(v_73)) v_73 = cdrerror(v_73); else
    v_73 = cdr(v_73);
    stack[-3] = v_73;
    goto v_18;
v_17:
    v_73 = stack[-5];
    return onevalue(v_73);
}



// Code for mkpartitions1

static LispObject CC_mkpartitions1(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_73, v_74, v_75;
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
    stack[-6] = v_7;
    stack[-7] = v_6;
    stack[-8] = v_5;
    stack[-9] = v_4;
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
v_15:
    v_74 = stack[0];
    v_73 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_74 == v_73) goto v_18;
    else goto v_19;
v_18:
    v_74 = stack[-1];
    v_73 = stack[-9];
    v_73 = static_cast<LispObject>(geq2(v_74, v_73));
    v_73 = v_73 ? lisp_true : nil;
    env = stack[-11];
    if (v_73 == nil) goto v_25;
    v_74 = stack[-1];
    v_73 = stack[-7];
    v_73 = cons(v_74, v_73);
    env = stack[-11];
    v_74 = Lreverse(nil, v_73);
    v_73 = stack[-6];
    return cons(v_74, v_73);
v_25:
    v_73 = stack[-6];
    goto v_14;
    goto v_17;
v_19:
    v_74 = stack[-9];
    v_73 = stack[-8];
    v_73 = static_cast<LispObject>(greaterp2(v_74, v_73));
    v_73 = v_73 ? lisp_true : nil;
    env = stack[-11];
    if (v_73 == nil) goto v_39;
    v_73 = stack[-6];
    goto v_14;
v_39:
    v_74 = stack[-1];
    v_73 = stack[-9];
    v_73 = difference2(v_74, v_73);
    env = stack[-11];
    stack[-10] = v_73;
    v_73 = stack[0];
    v_73 = sub1(v_73);
    env = stack[-11];
    stack[-5] = v_73;
    v_74 = stack[-1];
    v_73 = stack[-9];
    stack[-2] = difference2(v_74, v_73);
    env = stack[-11];
    v_73 = stack[0];
    v_73 = sub1(v_73);
    env = stack[-11];
    v_73 = quot2(stack[-2], v_73);
    env = stack[-11];
    stack[-4] = v_73;
    v_74 = stack[-9];
    v_73 = stack[-7];
    v_73 = cons(v_74, v_73);
    env = stack[-11];
    stack[-3] = v_73;
    stack[-2] = stack[-1];
    stack[-1] = stack[0];
    v_73 = stack[-9];
    stack[0] = add1(v_73);
    env = stack[-11];
    v_75 = stack[-8];
    v_74 = stack[-7];
    v_73 = stack[-6];
    v_73 = list3(v_75, v_74, v_73);
    env = stack[-11];
    {   LispObject fn = basic_elt(env, 0); // mkpartitions1
    v_73 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_73);
    }
    env = stack[-11];
    stack[-6] = v_73;
    v_73 = stack[-3];
    stack[-7] = v_73;
    v_73 = stack[-4];
    stack[-8] = v_73;
    v_73 = stack[-5];
    stack[0] = v_73;
    v_73 = stack[-10];
    stack[-1] = v_73;
    goto v_15;
v_17:
    v_73 = nil;
v_14:
    return onevalue(v_73);
}



// Code for rl_atnum

static LispObject CC_rl_atnum(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_8;
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
    v_8 = v_2;
// end of prologue
    stack[0] = qvalue(basic_elt(env, 1)); // rl_atnum!*
    v_8 = ncons(v_8);
    env = stack[-1];
    {
        LispObject v_10 = stack[0];
        LispObject fn = basic_elt(env, 2); // apply
        return (*qfn2(fn))(fn, v_10, v_8);
    }
}



// Code for tayexp!-times2

static LispObject CC_tayexpKtimes2(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_60, v_61, v_62;
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
    v_61 = v_2;
// end of prologue
    v_60 = v_61;
    if (!consp(v_60)) goto v_11;
    else goto v_12;
v_11:
    v_60 = stack[0];
    v_60 = (consp(v_60) ? nil : lisp_true);
    goto v_10;
v_12:
    v_60 = nil;
    goto v_10;
    v_60 = nil;
v_10:
    if (v_60 == nil) goto v_8;
    v_60 = stack[0];
    return times2(v_61, v_60);
v_8:
    v_60 = v_61;
    if (!consp(v_60)) goto v_26;
    else goto v_27;
v_26:
    v_60 = v_61;
    {   LispObject fn = basic_elt(env, 1); // !*i2rn
    v_61 = (*qfn1(fn))(fn, v_60);
    }
    env = stack[-2];
    v_60 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // rntimes!:
    v_60 = (*qfn2(fn))(fn, v_61, v_60);
    }
    goto v_25;
v_27:
    v_60 = stack[0];
    if (!consp(v_60)) goto v_33;
    else goto v_34;
v_33:
    stack[-1] = v_61;
    v_60 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // !*i2rn
    v_60 = (*qfn1(fn))(fn, v_60);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 2); // rntimes!:
    v_60 = (*qfn2(fn))(fn, stack[-1], v_60);
    }
    goto v_25;
v_34:
    v_60 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // rntimes!:
    v_60 = (*qfn2(fn))(fn, v_61, v_60);
    }
    goto v_25;
    v_60 = nil;
v_25:
    v_62 = v_60;
    v_60 = v_62;
    if (!car_legal(v_60)) v_60 = cdrerror(v_60); else
    v_60 = cdr(v_60);
    if (!car_legal(v_60)) v_61 = cdrerror(v_60); else
    v_61 = cdr(v_60);
    v_60 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_61 == v_60) goto v_48;
    else goto v_49;
v_48:
    v_60 = v_62;
    if (!car_legal(v_60)) v_60 = cdrerror(v_60); else
    v_60 = cdr(v_60);
    if (!car_legal(v_60)) v_60 = carerror(v_60); else
    v_60 = car(v_60);
    goto v_47;
v_49:
    v_60 = v_62;
    goto v_47;
    v_60 = nil;
v_47:
    goto v_6;
    v_60 = nil;
v_6:
    return onevalue(v_60);
}



// Code for talp_subt

static LispObject CC_talp_subt(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_69, v_70, v_71;
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
    v_70 = v_3;
    stack[-4] = v_2;
// end of prologue
    v_69 = v_70;
    if (symbolp(v_69)) goto v_12;
    else goto v_11;
v_12:
    v_71 = v_70;
    v_69 = stack[-4];
    v_69 = Latsoc(nil, v_71, v_69);
    v_71 = v_69;
    if (v_69 == nil) goto v_11;
    v_69 = v_71;
    if (!car_legal(v_69)) v_69 = cdrerror(v_69); else
    v_69 = cdr(v_69);
    goto v_7;
v_11:
    v_69 = v_70;
    if (!consp(v_69)) goto v_22;
    else goto v_23;
v_22:
    v_69 = v_70;
    goto v_7;
v_23:
    v_69 = v_70;
    if (!car_legal(v_69)) stack[-5] = carerror(v_69); else
    stack[-5] = car(v_69);
    v_69 = v_70;
    if (!car_legal(v_69)) v_69 = cdrerror(v_69); else
    v_69 = cdr(v_69);
    stack[-3] = v_69;
    v_69 = stack[-3];
    if (v_69 == nil) goto v_39;
    else goto v_40;
v_39:
    v_69 = nil;
    goto v_33;
v_40:
    v_69 = stack[-3];
    if (!car_legal(v_69)) v_69 = carerror(v_69); else
    v_69 = car(v_69);
    v_70 = stack[-4];
    {   LispObject fn = basic_elt(env, 0); // talp_subt
    v_69 = (*qfn2(fn))(fn, v_70, v_69);
    }
    env = stack[-6];
    v_69 = ncons(v_69);
    env = stack[-6];
    stack[-1] = v_69;
    stack[-2] = v_69;
v_34:
    v_69 = stack[-3];
    if (!car_legal(v_69)) v_69 = cdrerror(v_69); else
    v_69 = cdr(v_69);
    stack[-3] = v_69;
    v_69 = stack[-3];
    if (v_69 == nil) goto v_54;
    else goto v_55;
v_54:
    v_69 = stack[-2];
    goto v_33;
v_55:
    stack[0] = stack[-1];
    v_69 = stack[-3];
    if (!car_legal(v_69)) v_69 = carerror(v_69); else
    v_69 = car(v_69);
    v_70 = stack[-4];
    {   LispObject fn = basic_elt(env, 0); // talp_subt
    v_69 = (*qfn2(fn))(fn, v_70, v_69);
    }
    env = stack[-6];
    v_69 = ncons(v_69);
    env = stack[-6];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_69);
    v_69 = stack[-1];
    if (!car_legal(v_69)) v_69 = cdrerror(v_69); else
    v_69 = cdr(v_69);
    stack[-1] = v_69;
    goto v_34;
v_33:
    {
        LispObject v_78 = stack[-5];
        return cons(v_78, v_69);
    }
v_7:
    return onevalue(v_69);
}



// Code for qqe_arg!-check

static LispObject CC_qqe_argKcheck(LispObject env,
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
    v_80 = stack[0];
    if (!car_legal(v_80)) v_80 = carerror(v_80); else
    v_80 = car(v_80);
    stack[-1] = v_80;
    v_80 = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // qqe_rqopp
    v_80 = (*qfn1(fn))(fn, v_80);
    }
    env = stack[-2];
    if (v_80 == nil) goto v_10;
    v_80 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // qqe_arg!-check!-lq!-rq
    v_80 = (*qfn1(fn))(fn, v_80);
    }
    goto v_8;
v_10:
    v_80 = stack[-1];
    {   LispObject fn = basic_elt(env, 5); // qqe_rbopp
    v_80 = (*qfn1(fn))(fn, v_80);
    }
    env = stack[-2];
    if (v_80 == nil) goto v_16;
    v_80 = stack[0];
    {   LispObject fn = basic_elt(env, 6); // qqe_arg!-check!-lb!-rb
    v_80 = (*qfn1(fn))(fn, v_80);
    }
    goto v_8;
v_16:
    v_80 = stack[-1];
    {   LispObject fn = basic_elt(env, 7); // qqe_qopheadp
    v_80 = (*qfn1(fn))(fn, v_80);
    }
    env = stack[-2];
    if (v_80 == nil) goto v_23;
    else goto v_21;
v_23:
    v_80 = stack[-1];
    {   LispObject fn = basic_elt(env, 8); // qqe_qoptailp
    v_80 = (*qfn1(fn))(fn, v_80);
    }
    env = stack[-2];
    if (v_80 == nil) goto v_26;
    else goto v_21;
v_26:
    goto v_22;
v_21:
    v_80 = stack[0];
    if (!car_legal(v_80)) v_80 = cdrerror(v_80); else
    v_80 = cdr(v_80);
    if (!car_legal(v_80)) v_80 = carerror(v_80); else
    v_80 = car(v_80);
    {   LispObject fn = basic_elt(env, 9); // qqe_arg!-check!-q
    v_80 = (*qfn1(fn))(fn, v_80);
    }
    env = stack[-2];
    if (v_80 == nil) goto v_31;
    else goto v_32;
v_31:
    {   LispObject fn = basic_elt(env, 10); // qqe_arg!-check!-marked!-ids!-rollback
    v_80 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
    v_81 = stack[0];
    v_80 = basic_elt(env, 1); // "some arguments are not of queue type"
    {   LispObject fn = basic_elt(env, 11); // typerr
    v_80 = (*qfn2(fn))(fn, v_81, v_80);
    }
    goto v_30;
v_32:
v_30:
    goto v_8;
v_22:
    v_80 = stack[-1];
    {   LispObject fn = basic_elt(env, 12); // qqe_qopaddp
    v_80 = (*qfn1(fn))(fn, v_80);
    }
    env = stack[-2];
    if (v_80 == nil) goto v_44;
    v_80 = stack[0];
    {   LispObject fn = basic_elt(env, 13); // qqe_arg!-check!-lb!-rq
    v_80 = (*qfn1(fn))(fn, v_80);
    }
    goto v_8;
v_44:
    v_80 = stack[0];
    if (!car_legal(v_80)) v_80 = cdrerror(v_80); else
    v_80 = cdr(v_80);
    stack[-1] = v_80;
v_54:
    v_80 = stack[-1];
    if (v_80 == nil) goto v_59;
    else goto v_60;
v_59:
    goto v_53;
v_60:
    v_80 = stack[-1];
    if (!car_legal(v_80)) v_80 = carerror(v_80); else
    v_80 = car(v_80);
    {   LispObject fn = basic_elt(env, 14); // qqe_arg!-check!-b
    v_80 = (*qfn1(fn))(fn, v_80);
    }
    env = stack[-2];
    if (v_80 == nil) goto v_68;
    else goto v_69;
v_68:
    {   LispObject fn = basic_elt(env, 10); // qqe_arg!-check!-marked!-ids!-rollback
    v_80 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
    v_81 = stack[0];
    v_80 = basic_elt(env, 2); // "some arguments are not of basic type"
    {   LispObject fn = basic_elt(env, 11); // typerr
    v_80 = (*qfn2(fn))(fn, v_81, v_80);
    }
    env = stack[-2];
    goto v_67;
v_69:
v_67:
    v_80 = stack[-1];
    if (!car_legal(v_80)) v_80 = cdrerror(v_80); else
    v_80 = cdr(v_80);
    stack[-1] = v_80;
    goto v_54;
v_53:
    goto v_8;
v_8:
    v_80 = nil;
    return onevalue(v_80);
}



// Code for sq2sstm

static LispObject CC_sq2sstm(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_74, v_75, v_76;
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
    stack[-2] = v_3;
    v_76 = v_2;
// end of prologue
    v_74 = v_76;
    if (!car_legal(v_74)) v_74 = carerror(v_74); else
    v_74 = car(v_74);
    if (!car_legal(v_74)) v_75 = carerror(v_74); else
    v_75 = car(v_74);
    v_74 = stack[-2];
    if (!car_legal(v_74)) v_74 = carerror(v_74); else
    v_74 = car(v_74);
    if (!car_legal(v_74)) v_74 = carerror(v_74); else
    v_74 = car(v_74);
    if (equal(v_75, v_74)) goto v_12;
    else goto v_13;
v_12:
    v_74 = v_76;
    if (!car_legal(v_74)) v_74 = cdrerror(v_74); else
    v_74 = cdr(v_74);
    stack[0] = v_74;
    v_74 = v_76;
    if (!car_legal(v_74)) v_74 = carerror(v_74); else
    v_74 = car(v_74);
    if (!car_legal(v_74)) v_74 = cdrerror(v_74); else
    v_74 = cdr(v_74);
    stack[-3] = v_74;
    v_74 = stack[0];
    if (!consp(v_74)) goto v_31;
    else goto v_32;
v_31:
    v_74 = lisp_true;
    goto v_30;
v_32:
    v_74 = stack[0];
    if (!car_legal(v_74)) v_74 = carerror(v_74); else
    v_74 = car(v_74);
    v_74 = (consp(v_74) ? nil : lisp_true);
    goto v_30;
    v_74 = nil;
v_30:
    if (v_74 == nil) goto v_28;
    stack[-1] = stack[-3];
    v_74 = stack[-2];
    if (!car_legal(v_74)) v_74 = cdrerror(v_74); else
    v_74 = cdr(v_74);
    {   LispObject fn = basic_elt(env, 1); // mkzl
    v_75 = (*qfn1(fn))(fn, v_74);
    }
    env = stack[-4];
    v_74 = stack[0];
    v_74 = acons(stack[-1], v_75, v_74);
    return ncons(v_74);
v_28:
    stack[-1] = stack[0];
    v_74 = stack[-2];
    if (!car_legal(v_74)) v_74 = carerror(v_74); else
    v_74 = car(v_74);
    if (!car_legal(v_74)) stack[0] = cdrerror(v_74); else
    stack[0] = cdr(v_74);
    v_74 = stack[-2];
    if (!car_legal(v_74)) v_74 = cdrerror(v_74); else
    v_74 = cdr(v_74);
    v_74 = sub1(v_74);
    env = stack[-4];
    v_74 = cons(stack[0], v_74);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 2); // sq2sscfpl
    v_74 = (*qfn2(fn))(fn, stack[-1], v_74);
    }
    env = stack[-4];
    goto v_26;
v_26:
    goto v_11;
v_13:
    v_74 = v_76;
    stack[-1] = ncons(v_74);
    env = stack[-4];
    v_74 = stack[-2];
    if (!car_legal(v_74)) v_74 = carerror(v_74); else
    v_74 = car(v_74);
    if (!car_legal(v_74)) stack[0] = cdrerror(v_74); else
    stack[0] = cdr(v_74);
    v_74 = stack[-2];
    if (!car_legal(v_74)) v_74 = cdrerror(v_74); else
    v_74 = cdr(v_74);
    v_74 = sub1(v_74);
    env = stack[-4];
    v_74 = cons(stack[0], v_74);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 2); // sq2sscfpl
    v_74 = (*qfn2(fn))(fn, stack[-1], v_74);
    }
    env = stack[-4];
    v_75 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-3] = v_75;
    goto v_11;
v_11:
    v_75 = stack[-3];
    {
        LispObject fn = basic_elt(env, 3); // mapins
        return (*qfn2(fn))(fn, v_75, v_74);
    }
    return onevalue(v_74);
}



// Code for reform!-minus

static LispObject CC_reformKminus(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_77, v_78, v_79;
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
    v_77 = stack[0];
    if (v_77 == nil) goto v_11;
    else goto v_12;
v_11:
    v_77 = lisp_true;
    goto v_10;
v_12:
    v_77 = stack[-1];
    v_77 = (v_77 == nil ? lisp_true : nil);
    goto v_10;
    v_77 = nil;
v_10:
    if (v_77 == nil) goto v_8;
    v_77 = stack[-1];
    goto v_6;
v_8:
    v_77 = stack[-1];
    if (!car_legal(v_77)) v_77 = carerror(v_77); else
    v_77 = car(v_77);
    v_78 = stack[0];
    if (!car_legal(v_78)) v_79 = carerror(v_78); else
    v_79 = car(v_78);
    v_78 = basic_elt(env, 1); // minus
    if (!consp(v_79)) goto v_33;
    v_79 = car(v_79);
    if (v_79 == v_78) goto v_32;
    else goto v_33;
v_32:
    v_79 = v_77;
    v_78 = basic_elt(env, 2); // quotient
    if (!consp(v_79)) goto v_41;
    v_79 = car(v_79);
    if (v_79 == v_78) goto v_40;
    else goto v_41;
v_40:
    v_78 = v_77;
    if (!car_legal(v_78)) v_78 = cdrerror(v_78); else
    v_78 = cdr(v_78);
    if (!car_legal(v_78)) v_79 = carerror(v_78); else
    v_79 = car(v_78);
    v_78 = basic_elt(env, 1); // minus
    v_78 = Leqcar(nil, v_79, v_78);
    env = stack[-3];
    goto v_39;
v_41:
    v_78 = nil;
    goto v_39;
    v_78 = nil;
v_39:
    goto v_31;
v_33:
    v_78 = nil;
    goto v_31;
    v_78 = nil;
v_31:
    if (v_78 == nil) goto v_29;
    stack[-2] = basic_elt(env, 1); // minus
    v_79 = basic_elt(env, 2); // quotient
    v_78 = v_77;
    if (!car_legal(v_78)) v_78 = cdrerror(v_78); else
    v_78 = cdr(v_78);
    if (!car_legal(v_78)) v_78 = carerror(v_78); else
    v_78 = car(v_78);
    if (!car_legal(v_78)) v_78 = cdrerror(v_78); else
    v_78 = cdr(v_78);
    if (!car_legal(v_78)) v_78 = carerror(v_78); else
    v_78 = car(v_78);
    if (!car_legal(v_77)) v_77 = cdrerror(v_77); else
    v_77 = cdr(v_77);
    if (!car_legal(v_77)) v_77 = cdrerror(v_77); else
    v_77 = cdr(v_77);
    if (!car_legal(v_77)) v_77 = carerror(v_77); else
    v_77 = car(v_77);
    v_77 = list3(v_79, v_78, v_77);
    env = stack[-3];
    v_77 = list2(stack[-2], v_77);
    env = stack[-3];
    stack[-2] = v_77;
    goto v_27;
v_29:
    stack[-2] = v_77;
    goto v_27;
    stack[-2] = nil;
v_27:
    v_77 = stack[-1];
    if (!car_legal(v_77)) v_78 = cdrerror(v_77); else
    v_78 = cdr(v_77);
    v_77 = stack[0];
    if (!car_legal(v_77)) v_77 = cdrerror(v_77); else
    v_77 = cdr(v_77);
    {   LispObject fn = basic_elt(env, 0); // reform!-minus
    v_77 = (*qfn2(fn))(fn, v_78, v_77);
    }
    {
        LispObject v_83 = stack[-2];
        return cons(v_83, v_77);
    }
    v_77 = nil;
v_6:
    return onevalue(v_77);
}



// Code for dm!-minus

static LispObject CC_dmKminus(LispObject env,
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
    v_16 = v_2;
// end of prologue
    {   LispObject fn = basic_elt(env, 1); // !:minus
    v_16 = (*qfn1(fn))(fn, v_16);
    }
    v_17 = v_16;
    v_16 = v_17;
    if (v_16 == nil) goto v_9;
    else goto v_10;
v_9:
    v_16 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_8;
v_10:
    v_16 = v_17;
    goto v_8;
    v_16 = nil;
v_8:
    return onevalue(v_16);
}



// Code for dip!-nc!-ev!-prod1

static LispObject CC_dipKncKevKprod1(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_24, v_25, v_26, v_27;
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
    v_25 = v_4;
    v_26 = v_3;
    v_27 = v_2;
// end of prologue
    v_24 = v_27;
    if (v_24 == nil) goto v_8;
    else goto v_9;
v_8:
    v_24 = v_25;
    goto v_7;
v_9:
    v_24 = v_27;
    if (!car_legal(v_24)) stack[-1] = carerror(v_24); else
    stack[-1] = car(v_24);
    stack[0] = v_26;
    v_24 = v_27;
    if (!car_legal(v_24)) v_24 = cdrerror(v_24); else
    v_24 = cdr(v_24);
    v_26 = static_cast<LispObject>(static_cast<std::intptr_t>(v_26) + 0x10);
    {   LispObject fn = basic_elt(env, 0); // dip!-nc!-ev!-prod1
    v_24 = (*qfn3(fn))(fn, v_24, v_26, v_25);
    }
    env = stack[-2];
    {
        LispObject v_30 = stack[-1];
        LispObject v_31 = stack[0];
        LispObject fn = basic_elt(env, 1); // dip!-nc!-ev!-prod2
        return (*qfn3(fn))(fn, v_30, v_31, v_24);
    }
    v_24 = nil;
v_7:
    return onevalue(v_24);
}



// Code for evgradlexcomp

static LispObject CC_evgradlexcomp(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_64, v_65;
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
v_7:
    v_64 = stack[-2];
    if (v_64 == nil) goto v_10;
    else goto v_11;
v_10:
    v_64 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_6;
v_11:
    v_64 = stack[-1];
    if (v_64 == nil) goto v_14;
    else goto v_15;
v_14:
    v_64 = basic_elt(env, 1); // (0)
    stack[-1] = v_64;
    goto v_7;
v_15:
    v_64 = stack[-2];
    if (!car_legal(v_64)) v_65 = carerror(v_64); else
    v_65 = car(v_64);
    v_64 = stack[-1];
    if (!car_legal(v_64)) v_64 = carerror(v_64); else
    v_64 = car(v_64);
    {   LispObject fn = basic_elt(env, 2); // iequal
    v_64 = (*qfn2(fn))(fn, v_65, v_64);
    }
    env = stack[-4];
    if (v_64 == nil) goto v_19;
    v_64 = stack[-2];
    if (!car_legal(v_64)) v_64 = cdrerror(v_64); else
    v_64 = cdr(v_64);
    stack[-2] = v_64;
    v_64 = stack[-1];
    if (!car_legal(v_64)) v_64 = cdrerror(v_64); else
    v_64 = cdr(v_64);
    stack[-1] = v_64;
    goto v_7;
v_19:
    v_64 = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // evtdeg
    stack[0] = (*qfn1(fn))(fn, v_64);
    }
    env = stack[-4];
    v_64 = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // evtdeg
    v_64 = (*qfn1(fn))(fn, v_64);
    }
    env = stack[-4];
    stack[-3] = stack[0];
    stack[0] = v_64;
    v_65 = stack[-3];
    v_64 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // iequal
    v_64 = (*qfn2(fn))(fn, v_65, v_64);
    }
    if (v_64 == nil) goto v_40;
    v_64 = stack[-2];
    if (!car_legal(v_64)) v_65 = carerror(v_64); else
    v_65 = car(v_64);
    v_64 = stack[-1];
    if (!car_legal(v_64)) v_64 = carerror(v_64); else
    v_64 = car(v_64);
    if ((static_cast<std::intptr_t>(v_65) > static_cast<std::intptr_t>(v_64))) goto v_46;
    else goto v_47;
v_46:
    v_64 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_45;
v_47:
    v_64 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    goto v_45;
    v_64 = nil;
v_45:
    goto v_38;
v_40:
    v_65 = stack[-3];
    v_64 = stack[0];
    if ((static_cast<std::intptr_t>(v_65) > static_cast<std::intptr_t>(v_64))) goto v_56;
    else goto v_57;
v_56:
    v_64 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_38;
v_57:
    v_64 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    goto v_38;
    v_64 = nil;
v_38:
    goto v_6;
    v_64 = nil;
v_6:
    return onevalue(v_64);
}



// Code for collectphystype

static LispObject CC_collectphystype(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_57;
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
    stack[0] = v_2;
// end of prologue
    v_57 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // physopp
    v_57 = (*qfn1(fn))(fn, v_57);
    }
    env = stack[-4];
    if (v_57 == nil) goto v_7;
    v_57 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // getphystype
    v_57 = (*qfn1(fn))(fn, v_57);
    }
    return ncons(v_57);
v_7:
    v_57 = stack[0];
    if (!consp(v_57)) goto v_13;
    else goto v_14;
v_13:
    v_57 = nil;
    goto v_5;
v_14:
    v_57 = stack[0];
    stack[-3] = v_57;
    v_57 = stack[-3];
    if (v_57 == nil) goto v_29;
    else goto v_30;
v_29:
    v_57 = nil;
    goto v_24;
v_30:
    v_57 = stack[-3];
    if (!car_legal(v_57)) v_57 = carerror(v_57); else
    v_57 = car(v_57);
    {   LispObject fn = basic_elt(env, 2); // getphystype
    v_57 = (*qfn1(fn))(fn, v_57);
    }
    env = stack[-4];
    v_57 = ncons(v_57);
    env = stack[-4];
    stack[-1] = v_57;
    stack[-2] = v_57;
v_25:
    v_57 = stack[-3];
    if (!car_legal(v_57)) v_57 = cdrerror(v_57); else
    v_57 = cdr(v_57);
    stack[-3] = v_57;
    v_57 = stack[-3];
    if (v_57 == nil) goto v_43;
    else goto v_44;
v_43:
    v_57 = stack[-2];
    goto v_24;
v_44:
    stack[0] = stack[-1];
    v_57 = stack[-3];
    if (!car_legal(v_57)) v_57 = carerror(v_57); else
    v_57 = car(v_57);
    {   LispObject fn = basic_elt(env, 2); // getphystype
    v_57 = (*qfn1(fn))(fn, v_57);
    }
    env = stack[-4];
    v_57 = ncons(v_57);
    env = stack[-4];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_57);
    v_57 = stack[-1];
    if (!car_legal(v_57)) v_57 = cdrerror(v_57); else
    v_57 = cdr(v_57);
    stack[-1] = v_57;
    goto v_25;
v_24:
    {
        LispObject fn = basic_elt(env, 3); // deletemult!*
        return (*qfn1(fn))(fn, v_57);
    }
    v_57 = nil;
v_5:
    return onevalue(v_57);
}



// Code for replace1_parents

static LispObject CC_replace1_parents(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_14, v_15, v_16;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_14 = v_4;
    v_15 = v_3;
    v_16 = v_2;
// end of prologue
    if (!car_legal(v_16)) v_16 = carerror(v_16); else
    v_16 = car(v_16);
    if (!car_legal(v_15)) v_15 = carerror(v_15); else
    v_15 = car(v_15);
    if (!car_legal(v_14)) v_14 = cdrerror(v_14); else
    v_14 = cdr(v_14);
    if (!car_legal(v_14)) v_14 = carerror(v_14); else
    v_14 = car(v_14);
    {
        LispObject fn = basic_elt(env, 1); // replace2_parents
        return (*qfn3(fn))(fn, v_16, v_15, v_14);
    }
}



// Code for pairxvars

static LispObject CC_pairxvars(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_92, v_93, v_94;
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
    real_push(nil);
    stack_popper stack_popper_var(7);
// copy arguments values to proper place
    stack[-1] = v_5;
    stack[-2] = v_4;
    stack[-3] = v_3;
    stack[-4] = v_2;
// end of prologue
    stack[-5] = nil;
v_13:
    v_92 = stack[-4];
    if (v_92 == nil) goto v_16;
    else goto v_17;
v_16:
    goto v_12;
v_17:
    v_92 = stack[-4];
    if (!car_legal(v_92)) v_93 = carerror(v_92); else
    v_93 = car(v_92);
    v_92 = stack[-3];
    v_92 = Latsoc(nil, v_93, v_92);
    stack[0] = v_92;
    if (v_92 == nil) goto v_23;
    v_93 = stack[0];
    v_92 = stack[-3];
    v_92 = Ldelete(nil, v_93, v_92);
    env = stack[-6];
    stack[-3] = v_92;
    v_92 = stack[0];
    if (!car_legal(v_92)) v_93 = cdrerror(v_92); else
    v_93 = cdr(v_92);
    v_92 = basic_elt(env, 1); // scalar
    if (v_93 == v_92) goto v_34;
    v_92 = stack[-4];
    if (!car_legal(v_92)) v_94 = carerror(v_92); else
    v_94 = car(v_92);
    v_92 = stack[0];
    if (!car_legal(v_92)) v_93 = cdrerror(v_92); else
    v_93 = cdr(v_92);
    v_92 = stack[-5];
    v_92 = acons(v_94, v_93, v_92);
    env = stack[-6];
    stack[-5] = v_92;
    goto v_32;
v_34:
    v_92 = stack[-4];
    if (!car_legal(v_92)) v_94 = carerror(v_92); else
    v_94 = car(v_92);
    v_93 = stack[-1];
    v_92 = stack[-5];
    v_92 = acons(v_94, v_93, v_92);
    env = stack[-6];
    stack[-5] = v_92;
    goto v_32;
v_32:
    goto v_21;
v_23:
    v_92 = stack[-4];
    if (!car_legal(v_92)) v_92 = carerror(v_92); else
    v_92 = car(v_92);
    if (symbolp(v_92)) goto v_56;
    v_92 = lisp_true;
    goto v_54;
v_56:
    v_92 = stack[-4];
    if (!car_legal(v_92)) v_92 = carerror(v_92); else
    v_92 = car(v_92);
    if (!symbolp(v_92)) v_92 = nil;
    else { v_92 = qfastgets(v_92);
           if (v_92 != nil) { v_92 = elt(v_92, 23); // infix
#ifdef RECORD_GET
             if (v_92 != SPID_NOPROP)
                record_get(elt(fastget_names, 23), 1);
             else record_get(elt(fastget_names, 23), 0),
                v_92 = nil; }
           else record_get(elt(fastget_names, 23), 0); }
#else
             if (v_92 == SPID_NOPROP) v_92 = nil; }}
#endif
    if (v_92 == nil) goto v_64;
    else goto v_63;
v_64:
    v_92 = stack[-4];
    if (!car_legal(v_92)) v_92 = carerror(v_92); else
    v_92 = car(v_92);
    if (!symbolp(v_92)) v_92 = nil;
    else { v_92 = qfastgets(v_92);
           if (v_92 != nil) { v_92 = elt(v_92, 36); // stat
#ifdef RECORD_GET
             if (v_92 != SPID_NOPROP)
                record_get(elt(fastget_names, 36), 1);
             else record_get(elt(fastget_names, 36), 0),
                v_92 = nil; }
           else record_get(elt(fastget_names, 36), 0); }
#else
             if (v_92 == SPID_NOPROP) v_92 = nil; }}
#endif
v_63:
    goto v_54;
    v_92 = nil;
v_54:
    if (v_92 == nil) goto v_52;
    v_93 = basic_elt(env, 2); // "Invalid parameter:"
    v_92 = stack[-4];
    if (!car_legal(v_92)) v_92 = carerror(v_92); else
    v_92 = car(v_92);
    v_93 = list2(v_93, v_92);
    env = stack[-6];
    v_92 = nil;
    {   LispObject fn = basic_elt(env, 3); // symerr
    v_92 = (*qfn2(fn))(fn, v_93, v_92);
    }
    env = stack[-6];
    goto v_21;
v_52:
    v_92 = stack[-4];
    if (!car_legal(v_92)) v_94 = carerror(v_92); else
    v_94 = car(v_92);
    v_93 = stack[-1];
    v_92 = stack[-5];
    v_92 = acons(v_94, v_93, v_92);
    env = stack[-6];
    stack[-5] = v_92;
    goto v_21;
v_21:
    v_92 = stack[-4];
    if (!car_legal(v_92)) v_92 = cdrerror(v_92); else
    v_92 = cdr(v_92);
    stack[-4] = v_92;
    goto v_13;
v_12:
    v_92 = stack[-5];
    {   LispObject fn = basic_elt(env, 4); // reversip!*
    v_93 = (*qfn1(fn))(fn, v_92);
    }
    env = stack[-6];
    v_92 = stack[-2];
    v_93 = Lappend_2(nil, v_93, v_92);
    v_92 = stack[-3];
    return cons(v_93, v_92);
    return onevalue(v_92);
}



// Code for scalprod

static LispObject CC_scalprod(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_51, v_52, v_53;
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
    v_51 = stack[-1];
    if (v_51 == nil) goto v_11;
    else goto v_12;
v_11:
    v_51 = stack[0];
    v_51 = (v_51 == nil ? lisp_true : nil);
    goto v_10;
v_12:
    v_51 = nil;
    goto v_10;
    v_51 = nil;
v_10:
    if (v_51 == nil) goto v_8;
    v_52 = nil;
    v_51 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_52, v_51);
v_8:
    v_51 = stack[-1];
    if (v_51 == nil) goto v_26;
    else goto v_27;
v_26:
    v_51 = lisp_true;
    goto v_25;
v_27:
    v_51 = stack[0];
    v_51 = (v_51 == nil ? lisp_true : nil);
    goto v_25;
    v_51 = nil;
v_25:
    if (v_51 == nil) goto v_23;
    v_53 = basic_elt(env, 1); // matrix
    v_52 = static_cast<LispObject>(144)+TAG_FIXNUM; // 9
    v_51 = basic_elt(env, 2); // "Matrix mismatch"
    {
        LispObject fn = basic_elt(env, 3); // rerror
        return (*qfn3(fn))(fn, v_53, v_52, v_51);
    }
v_23:
    v_51 = stack[-1];
    if (!car_legal(v_51)) v_52 = carerror(v_51); else
    v_52 = car(v_51);
    v_51 = stack[0];
    if (!car_legal(v_51)) v_51 = carerror(v_51); else
    v_51 = car(v_51);
    {   LispObject fn = basic_elt(env, 4); // multsq
    stack[-2] = (*qfn2(fn))(fn, v_52, v_51);
    }
    env = stack[-3];
    v_51 = stack[-1];
    if (!car_legal(v_51)) v_52 = cdrerror(v_51); else
    v_52 = cdr(v_51);
    v_51 = stack[0];
    if (!car_legal(v_51)) v_51 = cdrerror(v_51); else
    v_51 = cdr(v_51);
    {   LispObject fn = basic_elt(env, 0); // scalprod
    v_51 = (*qfn2(fn))(fn, v_52, v_51);
    }
    env = stack[-3];
    {
        LispObject v_57 = stack[-2];
        LispObject fn = basic_elt(env, 5); // addsq
        return (*qfn2(fn))(fn, v_57, v_51);
    }
    v_51 = nil;
    return onevalue(v_51);
}



// Code for simp!-prop!-order

static LispObject CC_simpKpropKorder(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_36, v_37, v_38, v_39;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_37 = v_3;
    v_38 = v_2;
// end of prologue
v_7:
    v_36 = v_38;
    if (v_36 == nil) goto v_10;
    else goto v_11;
v_10:
    v_36 = nil;
    goto v_6;
v_11:
    v_36 = v_38;
    if (!car_legal(v_36)) v_36 = carerror(v_36); else
    v_36 = car(v_36);
    if (!car_legal(v_36)) v_39 = carerror(v_36); else
    v_39 = car(v_36);
    v_36 = v_37;
    if (!car_legal(v_36)) v_36 = carerror(v_36); else
    v_36 = car(v_36);
    if (!car_legal(v_36)) v_36 = carerror(v_36); else
    v_36 = car(v_36);
    if (equal(v_39, v_36)) goto v_14;
    else goto v_15;
v_14:
    v_36 = v_38;
    if (!car_legal(v_36)) v_36 = cdrerror(v_36); else
    v_36 = cdr(v_36);
    v_38 = v_36;
    v_36 = v_37;
    if (!car_legal(v_36)) v_36 = cdrerror(v_36); else
    v_36 = cdr(v_36);
    v_37 = v_36;
    goto v_7;
v_15:
    v_36 = v_38;
    if (!car_legal(v_36)) v_36 = carerror(v_36); else
    v_36 = car(v_36);
    if (!car_legal(v_36)) v_36 = carerror(v_36); else
    v_36 = car(v_36);
    v_37 = basic_elt(env, 1); // prop!*
    if (v_36 == v_37) goto v_26;
    else goto v_27;
v_26:
    v_36 = lisp_true;
    goto v_6;
v_27:
    v_36 = nil;
    goto v_6;
    v_36 = nil;
v_6:
    return onevalue(v_36);
}



// Code for yypeek

static LispObject CC_yypeek(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_15;
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
// Binding lex_char
// FLUIDBIND: reloadenv=1 litvec-offset=1 saveloc=0
{   bind_fluid_stack bind_fluid_var(-1, 1, 0);
    setvalue(basic_elt(env, 1), nil); // lex_char
    v_15 = qvalue(basic_elt(env, 2)); // lex_peek_char
    if (v_15 == nil) goto v_9;
    else goto v_10;
v_9:
    {   LispObject fn = basic_elt(env, 3); // yyreadch
    v_15 = (*qfn0(fn))(fn);
    }
    env = stack[-1];
    setvalue(basic_elt(env, 2), v_15); // lex_peek_char
    goto v_8;
v_10:
v_8:
    v_15 = qvalue(basic_elt(env, 2)); // lex_peek_char
    ;}  // end of a binding scope
    return onevalue(v_15);
}



// Code for readprogn

static LispObject CC_readprogn(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil);
    stack_popper stack_popper_var(2);
// end of prologue
    v_27 = basic_elt(env, 1); // group
    {   LispObject fn = basic_elt(env, 5); // xread
    v_27 = (*qfn1(fn))(fn, v_27);
    }
    env = stack[-1];
    v_27 = ncons(v_27);
    env = stack[-1];
    stack[0] = v_27;
v_11:
    v_28 = qvalue(basic_elt(env, 2)); // cursym!*
    v_27 = basic_elt(env, 3); // !*rsqbkt!*
    if (v_28 == v_27) goto v_14;
    else goto v_15;
v_14:
    goto v_10;
v_15:
    v_27 = basic_elt(env, 1); // group
    {   LispObject fn = basic_elt(env, 5); // xread
    v_27 = (*qfn1(fn))(fn, v_27);
    }
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 6); // aconc!*
    v_27 = (*qfn2(fn))(fn, stack[0], v_27);
    }
    env = stack[-1];
    stack[0] = v_27;
    goto v_11;
v_10:
    {   LispObject fn = basic_elt(env, 7); // scan
    v_27 = (*qfn0(fn))(fn);
    }
    env = stack[-1];
    v_28 = basic_elt(env, 4); // progn
    v_27 = stack[0];
    return cons(v_28, v_27);
    return onevalue(v_27);
}



// Code for rl_pnf

static LispObject CC_rl_pnf(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_8;
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
    v_8 = v_2;
// end of prologue
    stack[0] = qvalue(basic_elt(env, 1)); // rl_pnf!*
    v_8 = ncons(v_8);
    env = stack[-1];
    {
        LispObject v_10 = stack[0];
        LispObject fn = basic_elt(env, 2); // apply
        return (*qfn2(fn))(fn, v_10, v_8);
    }
}



// Code for mri_pasf2mri

static LispObject CC_mri_pasf2mri(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_10, v_11;
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
    v_10 = v_3;
    v_11 = v_2;
// end of prologue
    stack[-1] = v_11;
    stack[0] = basic_elt(env, 1); // mri_pasf2mriat
    v_10 = ncons(v_10);
    env = stack[-2];
    {
        LispObject v_14 = stack[-1];
        LispObject v_15 = stack[0];
        LispObject fn = basic_elt(env, 2); // cl_apply2ats1
        return (*qfn3(fn))(fn, v_14, v_15, v_10);
    }
}



// Code for pasf_dt

static LispObject CC_pasf_dt(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_239, v_240, v_241, v_242;
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
    v_240 = stack[0];
    v_239 = basic_elt(env, 1); // true
    if (v_240 == v_239) goto v_14;
    else goto v_15;
v_14:
    v_239 = lisp_true;
    goto v_13;
v_15:
    v_240 = stack[0];
    v_239 = basic_elt(env, 2); // false
    v_239 = (v_240 == v_239 ? lisp_true : nil);
    goto v_13;
    v_239 = nil;
v_13:
    if (v_239 == nil) goto v_11;
    v_239 = stack[0];
    goto v_7;
v_11:
    v_239 = stack[0];
    if (!car_legal(v_239)) v_239 = cdrerror(v_239); else
    v_239 = cdr(v_239);
    if (!car_legal(v_239)) v_239 = carerror(v_239); else
    v_239 = car(v_239);
    {   LispObject fn = basic_elt(env, 16); // pasf_pdp
    v_239 = (*qfn1(fn))(fn, v_239);
    }
    env = stack[-1];
    v_242 = v_239;
    v_240 = stack[0];
    v_239 = basic_elt(env, 1); // true
    if (v_240 == v_239) goto v_35;
    else goto v_36;
v_35:
    v_239 = lisp_true;
    goto v_34;
v_36:
    v_240 = stack[0];
    v_239 = basic_elt(env, 2); // false
    v_239 = (v_240 == v_239 ? lisp_true : nil);
    goto v_34;
    v_239 = nil;
v_34:
    if (v_239 == nil) goto v_32;
    v_239 = stack[0];
    goto v_30;
v_32:
    v_239 = stack[0];
    if (!car_legal(v_239)) v_239 = carerror(v_239); else
    v_239 = car(v_239);
    v_239 = Lconsp(nil, v_239);
    env = stack[-1];
    if (v_239 == nil) goto v_47;
    v_239 = stack[0];
    if (!car_legal(v_239)) v_239 = carerror(v_239); else
    v_239 = car(v_239);
    if (!car_legal(v_239)) v_239 = carerror(v_239); else
    v_239 = car(v_239);
    goto v_30;
v_47:
    v_239 = stack[0];
    if (!car_legal(v_239)) v_239 = carerror(v_239); else
    v_239 = car(v_239);
    goto v_30;
    v_239 = nil;
v_30:
    v_241 = v_239;
    v_240 = v_242;
    v_239 = basic_elt(env, 3); // pdef
    if (v_240 == v_239) goto v_64;
    else goto v_65;
v_64:
    v_240 = v_241;
    v_239 = basic_elt(env, 4); // (equal lessp leq)
    v_239 = Lmemq(nil, v_240, v_239);
    goto v_63;
v_65:
    v_239 = nil;
    goto v_63;
    v_239 = nil;
v_63:
    if (v_239 == nil) goto v_61;
    v_239 = basic_elt(env, 2); // false
    goto v_7;
v_61:
    v_240 = v_242;
    v_239 = basic_elt(env, 5); // ndef
    if (v_240 == v_239) goto v_81;
    else goto v_82;
v_81:
    v_240 = v_241;
    v_239 = basic_elt(env, 6); // (equal greaterp geq)
    v_239 = Lmemq(nil, v_240, v_239);
    goto v_80;
v_82:
    v_239 = nil;
    goto v_80;
    v_239 = nil;
v_80:
    if (v_239 == nil) goto v_78;
    v_239 = basic_elt(env, 2); // false
    goto v_7;
v_78:
    v_240 = v_242;
    v_239 = basic_elt(env, 3); // pdef
    if (v_240 == v_239) goto v_98;
    else goto v_99;
v_98:
    v_240 = v_241;
    v_239 = basic_elt(env, 7); // (neq greaterp geq)
    v_239 = Lmemq(nil, v_240, v_239);
    goto v_97;
v_99:
    v_239 = nil;
    goto v_97;
    v_239 = nil;
v_97:
    if (v_239 == nil) goto v_95;
    v_239 = basic_elt(env, 1); // true
    goto v_7;
v_95:
    v_240 = v_242;
    v_239 = basic_elt(env, 5); // ndef
    if (v_240 == v_239) goto v_115;
    else goto v_116;
v_115:
    v_240 = v_241;
    v_239 = basic_elt(env, 8); // (neq lessp leq)
    v_239 = Lmemq(nil, v_240, v_239);
    goto v_114;
v_116:
    v_239 = nil;
    goto v_114;
    v_239 = nil;
v_114:
    if (v_239 == nil) goto v_112;
    v_239 = basic_elt(env, 1); // true
    goto v_7;
v_112:
    v_240 = v_242;
    v_239 = basic_elt(env, 9); // psdef
    if (v_240 == v_239) goto v_132;
    else goto v_133;
v_132:
    v_240 = v_241;
    v_239 = basic_elt(env, 10); // lessp
    v_239 = (v_240 == v_239 ? lisp_true : nil);
    goto v_131;
v_133:
    v_239 = nil;
    goto v_131;
    v_239 = nil;
v_131:
    if (v_239 == nil) goto v_129;
    v_239 = basic_elt(env, 2); // false
    goto v_7;
v_129:
    v_240 = v_242;
    v_239 = basic_elt(env, 11); // nsdef
    if (v_240 == v_239) goto v_149;
    else goto v_150;
v_149:
    v_240 = v_241;
    v_239 = basic_elt(env, 12); // greaterp
    v_239 = (v_240 == v_239 ? lisp_true : nil);
    goto v_148;
v_150:
    v_239 = nil;
    goto v_148;
    v_239 = nil;
v_148:
    if (v_239 == nil) goto v_146;
    v_239 = basic_elt(env, 2); // false
    goto v_7;
v_146:
    v_240 = v_242;
    v_239 = basic_elt(env, 9); // psdef
    if (v_240 == v_239) goto v_166;
    else goto v_167;
v_166:
    v_240 = v_241;
    v_239 = basic_elt(env, 13); // geq
    v_239 = (v_240 == v_239 ? lisp_true : nil);
    goto v_165;
v_167:
    v_239 = nil;
    goto v_165;
    v_239 = nil;
v_165:
    if (v_239 == nil) goto v_163;
    v_239 = basic_elt(env, 1); // true
    goto v_7;
v_163:
    v_240 = v_242;
    v_239 = basic_elt(env, 11); // nsdef
    if (v_240 == v_239) goto v_183;
    else goto v_184;
v_183:
    v_240 = v_241;
    v_239 = basic_elt(env, 14); // leq
    v_239 = (v_240 == v_239 ? lisp_true : nil);
    goto v_182;
v_184:
    v_239 = nil;
    goto v_182;
    v_239 = nil;
v_182:
    if (v_239 == nil) goto v_180;
    v_239 = basic_elt(env, 1); // true
    goto v_7;
v_180:
    v_240 = v_242;
    v_239 = basic_elt(env, 9); // psdef
    if (v_240 == v_239) goto v_200;
    else goto v_201;
v_200:
    v_240 = v_241;
    v_239 = basic_elt(env, 15); // neq
    v_239 = (v_240 == v_239 ? lisp_true : nil);
    goto v_199;
v_201:
    v_239 = nil;
    goto v_199;
    v_239 = nil;
v_199:
    if (v_239 == nil) goto v_197;
    v_241 = basic_elt(env, 12); // greaterp
    v_239 = stack[0];
    if (!car_legal(v_239)) v_239 = cdrerror(v_239); else
    v_239 = cdr(v_239);
    if (!car_legal(v_239)) v_240 = carerror(v_239); else
    v_240 = car(v_239);
    v_239 = nil;
    return list3(v_241, v_240, v_239);
v_197:
    v_240 = v_242;
    v_239 = basic_elt(env, 11); // nsdef
    if (v_240 == v_239) goto v_222;
    else goto v_223;
v_222:
    v_240 = v_241;
    v_239 = basic_elt(env, 15); // neq
    v_239 = (v_240 == v_239 ? lisp_true : nil);
    goto v_221;
v_223:
    v_239 = nil;
    goto v_221;
    v_239 = nil;
v_221:
    if (v_239 == nil) goto v_219;
    v_241 = basic_elt(env, 10); // lessp
    v_239 = stack[0];
    if (!car_legal(v_239)) v_239 = cdrerror(v_239); else
    v_239 = cdr(v_239);
    if (!car_legal(v_239)) v_240 = carerror(v_239); else
    v_240 = car(v_239);
    v_239 = nil;
    return list3(v_241, v_240, v_239);
v_219:
    v_239 = stack[0];
v_7:
    return onevalue(v_239);
}



// Code for naryom

static LispObject CC_naryom(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_73, v_74;
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
// Binding name
// FLUIDBIND: reloadenv=3 litvec-offset=1 saveloc=0
{   bind_fluid_stack bind_fluid_var(-3, 1, 0);
    setvalue(basic_elt(env, 1), nil); // name
    v_73 = stack[-1];
    if (!car_legal(v_73)) v_73 = carerror(v_73); else
    v_73 = car(v_73);
    setvalue(basic_elt(env, 1), v_73); // name
    v_74 = qvalue(basic_elt(env, 1)); // name
    v_73 = basic_elt(env, 2); // var
    if (v_74 == v_73) goto v_13;
    else goto v_14;
v_13:
    v_73 = basic_elt(env, 3); // variance
    setvalue(basic_elt(env, 1), v_73); // name
    goto v_12;
v_14:
v_12:
    v_74 = qvalue(basic_elt(env, 1)); // name
    v_73 = qvalue(basic_elt(env, 4)); // valid_om!*
    v_73 = Lassoc(nil, v_74, v_73);
    stack[-2] = v_73;
    v_73 = stack[-2];
    if (v_73 == nil) goto v_24;
    v_73 = stack[-2];
    if (!car_legal(v_73)) v_73 = cdrerror(v_73); else
    v_73 = cdr(v_73);
    if (!car_legal(v_73)) v_73 = carerror(v_73); else
    v_73 = car(v_73);
    stack[-2] = v_73;
    goto v_22;
v_24:
v_22:
    v_73 = stack[-1];
    if (!car_legal(v_73)) v_73 = cdrerror(v_73); else
    v_73 = cdr(v_73);
    if (!car_legal(v_73)) v_73 = carerror(v_73); else
    v_73 = car(v_73);
    if (v_73 == nil) goto v_32;
    v_73 = stack[-1];
    if (!car_legal(v_73)) v_73 = cdrerror(v_73); else
    v_73 = cdr(v_73);
    if (!car_legal(v_73)) v_74 = carerror(v_73); else
    v_74 = car(v_73);
    v_73 = basic_elt(env, 5); // multiset
    if (v_74 == v_73) goto v_38;
    else goto v_39;
v_38:
    v_73 = stack[-1];
    if (!car_legal(v_73)) v_73 = cdrerror(v_73); else
    v_73 = cdr(v_73);
    if (!car_legal(v_73)) v_73 = carerror(v_73); else
    v_73 = car(v_73);
    stack[-2] = v_73;
    goto v_37;
v_39:
v_37:
    goto v_30;
v_32:
v_30:
    v_73 = basic_elt(env, 6); // "<OMA>"
    {   LispObject fn = basic_elt(env, 12); // printout
    v_73 = (*qfn1(fn))(fn, v_73);
    }
    env = stack[-3];
    v_74 = qvalue(basic_elt(env, 7)); // indent
    v_73 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_73 = plus2(v_74, v_73);
    env = stack[-3];
    setvalue(basic_elt(env, 7), v_73); // indent
    v_73 = basic_elt(env, 8); // "<OMS cd="""
    {   LispObject fn = basic_elt(env, 12); // printout
    v_73 = (*qfn1(fn))(fn, v_73);
    }
    env = stack[-3];
    v_73 = stack[-2];
    v_73 = Lprinc(nil, v_73);
    env = stack[-3];
    v_73 = basic_elt(env, 9); // """ name="""
    v_73 = Lprinc(nil, v_73);
    env = stack[-3];
    v_73 = qvalue(basic_elt(env, 1)); // name
    v_73 = Lprinc(nil, v_73);
    env = stack[-3];
    v_73 = basic_elt(env, 10); // """>"
    v_73 = Lprinc(nil, v_73);
    env = stack[-3];
    v_73 = stack[-1];
    if (!car_legal(v_73)) v_73 = cdrerror(v_73); else
    v_73 = cdr(v_73);
    if (!car_legal(v_73)) v_73 = cdrerror(v_73); else
    v_73 = cdr(v_73);
    {   LispObject fn = basic_elt(env, 13); // multiom
    v_73 = (*qfn1(fn))(fn, v_73);
    }
    env = stack[-3];
    v_74 = qvalue(basic_elt(env, 7)); // indent
    v_73 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_73 = difference2(v_74, v_73);
    env = stack[-3];
    setvalue(basic_elt(env, 7), v_73); // indent
    v_73 = basic_elt(env, 11); // "</OMA>"
    {   LispObject fn = basic_elt(env, 12); // printout
    v_73 = (*qfn1(fn))(fn, v_73);
    }
    v_73 = nil;
    ;}  // end of a binding scope
    return onevalue(v_73);
}



// Code for subs4q

static LispObject CC_subs4q(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_97, v_98, v_99;
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
    push(nil, nil);
    stack_popper stack_popper_var(8);
// copy arguments values to proper place
    stack[-5] = v_2;
// end of prologue
    stack[-3] = nil;
    stack[-2] = nil;
    v_97 = basic_elt(env, 1); // slash
    if (!symbolp(v_97)) v_97 = nil;
    else { v_97 = qfastgets(v_97);
           if (v_97 != nil) { v_97 = elt(v_97, 9); // opmtch
#ifdef RECORD_GET
             if (v_97 != SPID_NOPROP)
                record_get(elt(fastget_names, 9), 1);
             else record_get(elt(fastget_names, 9), 0),
                v_97 = nil; }
           else record_get(elt(fastget_names, 9), 0); }
#else
             if (v_97 == SPID_NOPROP) v_97 = nil; }}
#endif
    stack[-6] = v_97;
    if (v_97 == nil) goto v_12;
    else goto v_13;
v_12:
    v_97 = stack[-5];
    goto v_9;
v_13:
    v_97 = stack[-5];
    {   LispObject fn = basic_elt(env, 6); // prepsq
    v_97 = (*qfn1(fn))(fn, v_97);
    }
    env = stack[-7];
    stack[-4] = v_97;
    v_98 = basic_elt(env, 1); // slash
    v_97 = basic_elt(env, 2); // opmtch
    v_97 = Lremprop(nil, v_98, v_97);
    env = stack[-7];
    v_99 = basic_elt(env, 3); // slash!*
    v_98 = basic_elt(env, 2); // opmtch
    v_97 = stack[-6];
    v_97 = Lputprop(nil, v_99, v_98, v_97);
    env = stack[-7];
v_28:
    v_97 = stack[-4];
    if (v_97 == nil) goto v_31;
    v_98 = stack[-4];
    stack[-3] = v_98;
    v_97 = basic_elt(env, 4); // quotient
    if (!consp(v_98)) goto v_31;
    v_98 = car(v_98);
    if (v_98 == v_97) goto v_35;
    else goto v_31;
v_35:
    goto v_32;
v_31:
    goto v_27;
v_32:
    v_98 = basic_elt(env, 3); // slash!*
    v_97 = stack[-4];
    if (!car_legal(v_97)) v_97 = cdrerror(v_97); else
    v_97 = cdr(v_97);
    v_97 = cons(v_98, v_97);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 2); // opmtch
    v_97 = (*qfn1(fn))(fn, v_97);
    }
    env = stack[-7];
    if (v_97 == nil) goto v_42;
    else goto v_41;
v_42:
    v_98 = basic_elt(env, 5); // minus
    v_97 = stack[-4];
    if (!car_legal(v_97)) v_97 = cdrerror(v_97); else
    v_97 = cdr(v_97);
    if (!car_legal(v_97)) v_97 = cdrerror(v_97); else
    v_97 = cdr(v_97);
    if (!car_legal(v_97)) v_97 = carerror(v_97); else
    v_97 = car(v_97);
    v_97 = Lsmemq(nil, v_98, v_97);
    env = stack[-7];
    if (v_97 == nil) goto v_50;
    else goto v_51;
v_50:
    v_97 = nil;
    goto v_49;
v_51:
    stack[-1] = basic_elt(env, 3); // slash!*
    v_98 = basic_elt(env, 5); // minus
    v_97 = stack[-4];
    if (!car_legal(v_97)) v_97 = cdrerror(v_97); else
    v_97 = cdr(v_97);
    if (!car_legal(v_97)) v_97 = carerror(v_97); else
    v_97 = car(v_97);
    v_97 = list2(v_98, v_97);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 7); // reval
    stack[0] = (*qfn1(fn))(fn, v_97);
    }
    env = stack[-7];
    v_98 = basic_elt(env, 5); // minus
    v_97 = stack[-4];
    if (!car_legal(v_97)) v_97 = cdrerror(v_97); else
    v_97 = cdr(v_97);
    if (!car_legal(v_97)) v_97 = cdrerror(v_97); else
    v_97 = cdr(v_97);
    if (!car_legal(v_97)) v_97 = carerror(v_97); else
    v_97 = car(v_97);
    v_97 = list2(v_98, v_97);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 7); // reval
    v_97 = (*qfn1(fn))(fn, v_97);
    }
    env = stack[-7];
    v_97 = list3(stack[-1], stack[0], v_97);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 2); // opmtch
    v_97 = (*qfn1(fn))(fn, v_97);
    }
    env = stack[-7];
    goto v_49;
    v_97 = nil;
v_49:
v_41:
    stack[-4] = v_97;
    v_97 = stack[-2];
    if (v_97 == nil) goto v_79;
    else goto v_78;
v_79:
    v_97 = stack[-4];
v_78:
    stack[-2] = v_97;
    goto v_28;
v_27:
    v_97 = stack[-2];
    if (v_97 == nil) goto v_85;
    v_97 = stack[-3];
    {   LispObject fn = basic_elt(env, 8); // simp!*
    v_97 = (*qfn1(fn))(fn, v_97);
    }
    env = stack[-7];
    goto v_83;
v_85:
    v_97 = stack[-5];
    goto v_83;
    v_97 = nil;
v_83:
    stack[-5] = v_97;
    v_99 = basic_elt(env, 1); // slash
    v_98 = basic_elt(env, 2); // opmtch
    v_97 = stack[-6];
    v_97 = Lputprop(nil, v_99, v_98, v_97);
    v_97 = stack[-5];
v_9:
    return onevalue(v_97);
}



// Code for makeset

static LispObject CC_makeset(LispObject env,
                         LispObject v_2)
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
    v_34 = nil;
v_7:
    v_32 = stack[0];
    if (v_32 == nil) goto v_10;
    else goto v_11;
v_10:
    v_32 = v_34;
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn1(fn))(fn, v_32);
    }
v_11:
    v_32 = stack[0];
    if (!car_legal(v_32)) v_33 = carerror(v_32); else
    v_33 = car(v_32);
    v_32 = stack[0];
    if (!car_legal(v_32)) v_32 = cdrerror(v_32); else
    v_32 = cdr(v_32);
    v_32 = Lmember(nil, v_33, v_32);
    if (v_32 == nil) goto v_16;
    v_32 = stack[0];
    if (!car_legal(v_32)) v_32 = cdrerror(v_32); else
    v_32 = cdr(v_32);
    stack[0] = v_32;
    goto v_7;
v_16:
    v_32 = stack[0];
    if (!car_legal(v_32)) v_32 = carerror(v_32); else
    v_32 = car(v_32);
    v_33 = v_34;
    v_32 = cons(v_32, v_33);
    env = stack[-1];
    v_34 = v_32;
    v_32 = stack[0];
    if (!car_legal(v_32)) v_32 = cdrerror(v_32); else
    v_32 = cdr(v_32);
    stack[0] = v_32;
    goto v_7;
    v_32 = nil;
    return onevalue(v_32);
}



// Code for my_letmtr

static LispObject CC_my_letmtr(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_108, v_109, v_110;
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
    push(nil, nil);
    stack_popper stack_popper_var(8);
// copy arguments values to proper place
    stack[-3] = v_4;
    stack[-4] = v_3;
    stack[-5] = v_2;
// end of prologue
    stack[-2] = nil;
    v_109 = stack[-3];
    v_108 = basic_elt(env, 1); // mat
    if (!consp(v_109)) goto v_11;
    v_109 = car(v_109);
    if (v_109 == v_108) goto v_12;
v_11:
    stack[-1] = basic_elt(env, 2); // matrix
    stack[0] = static_cast<LispObject>(160)+TAG_FIXNUM; // 10
    v_110 = basic_elt(env, 3); // "Matrix"
    v_108 = stack[-5];
    if (!car_legal(v_108)) v_109 = carerror(v_108); else
    v_109 = car(v_108);
    v_108 = basic_elt(env, 4); // "not set"
    v_108 = list3(v_110, v_109, v_108);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 6); // rerror
    v_108 = (*qfn3(fn))(fn, stack[-1], stack[0], v_108);
    }
    env = stack[-7];
    goto v_10;
v_12:
    v_108 = stack[-5];
    if (!car_legal(v_108)) v_108 = cdrerror(v_108); else
    v_108 = cdr(v_108);
    stack[-6] = v_108;
    v_108 = stack[-6];
    if (v_108 == nil) goto v_41;
    else goto v_42;
v_41:
    v_108 = nil;
    goto v_35;
v_42:
    v_108 = stack[-6];
    if (!car_legal(v_108)) v_108 = carerror(v_108); else
    v_108 = car(v_108);
    v_109 = v_108;
    v_108 = v_109;
    v_108 = integerp(v_108);
    if (v_108 == nil) goto v_52;
    v_108 = v_109;
    goto v_50;
v_52:
    v_108 = v_109;
    {   LispObject fn = basic_elt(env, 7); // reval
    v_108 = (*qfn1(fn))(fn, v_108);
    }
    env = stack[-7];
    goto v_50;
    v_108 = nil;
v_50:
    v_108 = ncons(v_108);
    env = stack[-7];
    stack[-1] = v_108;
    stack[-2] = v_108;
v_36:
    v_108 = stack[-6];
    if (!car_legal(v_108)) v_108 = cdrerror(v_108); else
    v_108 = cdr(v_108);
    stack[-6] = v_108;
    v_108 = stack[-6];
    if (v_108 == nil) goto v_64;
    else goto v_65;
v_64:
    v_108 = stack[-2];
    goto v_35;
v_65:
    stack[0] = stack[-1];
    v_108 = stack[-6];
    if (!car_legal(v_108)) v_108 = carerror(v_108); else
    v_108 = car(v_108);
    v_109 = v_108;
    v_108 = v_109;
    v_108 = integerp(v_108);
    if (v_108 == nil) goto v_76;
    v_108 = v_109;
    goto v_74;
v_76:
    v_108 = v_109;
    {   LispObject fn = basic_elt(env, 7); // reval
    v_108 = (*qfn1(fn))(fn, v_108);
    }
    env = stack[-7];
    goto v_74;
    v_108 = nil;
v_74:
    v_108 = ncons(v_108);
    env = stack[-7];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_108);
    v_108 = stack[-1];
    if (!car_legal(v_108)) v_108 = cdrerror(v_108); else
    v_108 = cdr(v_108);
    stack[-1] = v_108;
    goto v_36;
v_35:
    stack[-2] = v_108;
    {   LispObject fn = basic_elt(env, 8); // numlis
    v_108 = (*qfn1(fn))(fn, v_108);
    }
    env = stack[-7];
    if (v_108 == nil) goto v_28;
    else goto v_29;
v_28:
    v_108 = lisp_true;
    goto v_27;
v_29:
    v_108 = stack[-2];
    v_109 = Llength(nil, v_108);
    env = stack[-7];
    v_108 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_108 = Lneq_2(nil, v_109, v_108);
    env = stack[-7];
    goto v_27;
    v_108 = nil;
v_27:
    if (v_108 == nil) goto v_25;
    v_109 = stack[-5];
    v_108 = basic_elt(env, 5); // hold
    {
        LispObject fn = basic_elt(env, 9); // errpri2
        return (*qfn2(fn))(fn, v_109, v_108);
    }
v_25:
v_10:
    v_108 = stack[-3];
    if (!car_legal(v_108)) v_109 = cdrerror(v_108); else
    v_109 = cdr(v_108);
    v_108 = stack[-2];
    if (!car_legal(v_108)) v_108 = carerror(v_108); else
    v_108 = car(v_108);
    {   LispObject fn = basic_elt(env, 10); // nth
    v_109 = (*qfn2(fn))(fn, v_109, v_108);
    }
    env = stack[-7];
    v_108 = stack[-2];
    if (!car_legal(v_108)) v_108 = cdrerror(v_108); else
    v_108 = cdr(v_108);
    if (!car_legal(v_108)) v_108 = carerror(v_108); else
    v_108 = car(v_108);
    {   LispObject fn = basic_elt(env, 11); // pnth
    v_109 = (*qfn2(fn))(fn, v_109, v_108);
    }
    v_108 = stack[-4];
    if (!car_legal(v_109)) rplaca_fails(v_109);
    setcar(v_109, v_108);
    v_108 = nil;
    return onevalue(v_108);
}



// Code for xlcm

static LispObject CC_xlcm(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_80 = stack[-1];
    if (v_80 == nil) goto v_15;
    else goto v_16;
v_15:
    v_80 = lisp_true;
    goto v_14;
v_16:
    v_80 = stack[-1];
    if (!car_legal(v_80)) v_81 = carerror(v_80); else
    v_81 = car(v_80);
    v_80 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_80 = (v_81 == v_80 ? lisp_true : nil);
    goto v_14;
    v_80 = nil;
v_14:
    if (v_80 == nil) goto v_12;
    v_81 = stack[-2];
    v_80 = stack[0];
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn2(fn))(fn, v_81, v_80);
    }
v_12:
    v_80 = stack[0];
    if (v_80 == nil) goto v_32;
    else goto v_33;
v_32:
    v_80 = lisp_true;
    goto v_31;
v_33:
    v_80 = stack[0];
    if (!car_legal(v_80)) v_81 = carerror(v_80); else
    v_81 = car(v_80);
    v_80 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_80 = (v_81 == v_80 ? lisp_true : nil);
    goto v_31;
    v_80 = nil;
v_31:
    if (v_80 == nil) goto v_29;
    v_81 = stack[-2];
    v_80 = stack[-1];
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn2(fn))(fn, v_81, v_80);
    }
v_29:
    v_80 = stack[-1];
    if (!car_legal(v_80)) v_81 = carerror(v_80); else
    v_81 = car(v_80);
    v_80 = stack[0];
    if (!car_legal(v_80)) v_80 = carerror(v_80); else
    v_80 = car(v_80);
    if (v_81 == v_80) goto v_45;
    else goto v_46;
v_45:
    v_80 = stack[-1];
    if (!car_legal(v_80)) v_81 = carerror(v_80); else
    v_81 = car(v_80);
    v_80 = stack[-2];
    v_80 = cons(v_81, v_80);
    env = stack[-3];
    stack[-2] = v_80;
    v_80 = stack[-1];
    if (!car_legal(v_80)) v_80 = cdrerror(v_80); else
    v_80 = cdr(v_80);
    stack[-1] = v_80;
    v_80 = stack[0];
    if (!car_legal(v_80)) v_80 = cdrerror(v_80); else
    v_80 = cdr(v_80);
    stack[0] = v_80;
    goto v_8;
v_46:
    v_80 = stack[-1];
    if (!car_legal(v_80)) v_81 = carerror(v_80); else
    v_81 = car(v_80);
    v_80 = stack[0];
    if (!car_legal(v_80)) v_80 = carerror(v_80); else
    v_80 = car(v_80);
    {   LispObject fn = basic_elt(env, 2); // factorordp
    v_80 = (*qfn2(fn))(fn, v_81, v_80);
    }
    env = stack[-3];
    if (v_80 == nil) goto v_60;
    v_80 = stack[-1];
    if (!car_legal(v_80)) v_81 = carerror(v_80); else
    v_81 = car(v_80);
    v_80 = stack[-2];
    v_80 = cons(v_81, v_80);
    env = stack[-3];
    stack[-2] = v_80;
    v_80 = stack[-1];
    if (!car_legal(v_80)) v_80 = cdrerror(v_80); else
    v_80 = cdr(v_80);
    stack[-1] = v_80;
    goto v_8;
v_60:
    v_80 = stack[0];
    if (!car_legal(v_80)) v_81 = carerror(v_80); else
    v_81 = car(v_80);
    v_80 = stack[-2];
    v_80 = cons(v_81, v_80);
    env = stack[-3];
    stack[-2] = v_80;
    v_80 = stack[0];
    if (!car_legal(v_80)) v_80 = cdrerror(v_80); else
    v_80 = cdr(v_80);
    stack[0] = v_80;
    goto v_8;
    v_80 = nil;
    return onevalue(v_80);
}



// Code for physopordchk

static LispObject CC_physopordchk(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_44, v_45, v_46;
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
    v_44 = v_2;
// end of prologue
    {   LispObject fn = basic_elt(env, 2); // !*collectphysops
    v_44 = (*qfn1(fn))(fn, v_44);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // deletemult!*
    v_44 = (*qfn1(fn))(fn, v_44);
    }
    env = stack[-2];
    stack[-1] = v_44;
    v_44 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // !*collectphysops
    v_44 = (*qfn1(fn))(fn, v_44);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // deletemult!*
    v_44 = (*qfn1(fn))(fn, v_44);
    }
    env = stack[-2];
    v_46 = v_44;
    v_44 = stack[-1];
    if (v_44 == nil) goto v_20;
    else goto v_21;
v_20:
    v_44 = lisp_true;
    goto v_19;
v_21:
    v_44 = v_46;
    if (v_44 == nil) goto v_24;
    else goto v_25;
v_24:
    v_44 = nil;
    goto v_19;
v_25:
    v_45 = basic_elt(env, 1); // unit
    v_44 = stack[-1];
    v_44 = Lmember(nil, v_45, v_44);
    if (v_44 == nil) goto v_30;
    else goto v_28;
v_30:
    v_45 = basic_elt(env, 1); // unit
    v_44 = v_46;
    v_44 = Lmember(nil, v_45, v_44);
    if (v_44 == nil) goto v_34;
    else goto v_28;
v_34:
    goto v_29;
v_28:
    v_44 = nil;
    goto v_19;
v_29:
    v_44 = stack[-1];
    v_45 = v_46;
    {
        LispObject fn = basic_elt(env, 4); // physopordchk!*
        return (*qfn2(fn))(fn, v_44, v_45);
    }
    v_44 = nil;
v_19:
    return onevalue(v_44);
}



// Code for def_edge

static LispObject CC_def_edge(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_24, v_25, v_26, v_27;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_26 = v_3;
    v_24 = v_2;
// end of prologue
    if (!car_legal(v_24)) v_24 = cdrerror(v_24); else
    v_24 = cdr(v_24);
    if (!car_legal(v_24)) v_24 = carerror(v_24); else
    v_24 = car(v_24);
    v_27 = v_24;
    v_24 = v_27;
    if (!car_legal(v_24)) v_25 = carerror(v_24); else
    v_25 = car(v_24);
    v_24 = v_26;
    v_24 = Lassoc(nil, v_25, v_24);
    if (v_24 == nil) goto v_11;
    else goto v_12;
v_11:
    v_24 = nil;
    goto v_10;
v_12:
    v_24 = v_27;
    if (!car_legal(v_24)) v_24 = cdrerror(v_24); else
    v_24 = cdr(v_24);
    v_25 = v_26;
    v_24 = Lassoc(nil, v_24, v_25);
    goto v_10;
    v_24 = nil;
v_10:
    return onevalue(v_24);
}



// Code for total!-degree!-in!-powers

static LispObject CC_totalKdegreeKinKpowers(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_84, v_85, v_86;
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
    v_84 = stack[-1];
    if (v_84 == nil) goto v_11;
    else goto v_12;
v_11:
    v_84 = lisp_true;
    goto v_10;
v_12:
    v_84 = stack[-1];
    if (!consp(v_84)) goto v_19;
    else goto v_20;
v_19:
    v_84 = lisp_true;
    goto v_18;
v_20:
    v_84 = stack[-1];
    if (!car_legal(v_84)) v_84 = carerror(v_84); else
    v_84 = car(v_84);
    v_84 = (consp(v_84) ? nil : lisp_true);
    goto v_18;
    v_84 = nil;
v_18:
    goto v_10;
    v_84 = nil;
v_10:
    if (v_84 == nil) goto v_8;
    v_84 = stack[0];
    goto v_6;
v_8:
    v_84 = stack[-1];
    if (!car_legal(v_84)) v_84 = carerror(v_84); else
    v_84 = car(v_84);
    if (!car_legal(v_84)) v_84 = carerror(v_84); else
    v_84 = car(v_84);
    if (!car_legal(v_84)) v_85 = carerror(v_84); else
    v_85 = car(v_84);
    v_84 = stack[0];
    v_84 = Latsoc(nil, v_85, v_84);
    stack[-2] = v_84;
    if (v_84 == nil) goto v_37;
    v_84 = stack[-1];
    if (!car_legal(v_84)) v_84 = carerror(v_84); else
    v_84 = car(v_84);
    if (!car_legal(v_84)) v_84 = carerror(v_84); else
    v_84 = car(v_84);
    if (!car_legal(v_84)) v_85 = cdrerror(v_84); else
    v_85 = cdr(v_84);
    v_84 = stack[-2];
    if (!car_legal(v_84)) v_84 = cdrerror(v_84); else
    v_84 = cdr(v_84);
    v_84 = static_cast<LispObject>(greaterp2(v_85, v_84));
    v_84 = v_84 ? lisp_true : nil;
    env = stack[-3];
    if (v_84 == nil) goto v_46;
    else goto v_47;
v_46:
    goto v_45;
v_47:
    v_85 = stack[-2];
    v_84 = stack[-1];
    if (!car_legal(v_84)) v_84 = carerror(v_84); else
    v_84 = car(v_84);
    if (!car_legal(v_84)) v_84 = carerror(v_84); else
    v_84 = car(v_84);
    if (!car_legal(v_84)) v_84 = cdrerror(v_84); else
    v_84 = cdr(v_84);
    if (!car_legal(v_85)) rplacd_fails(v_85);
    setcdr(v_85, v_84);
    goto v_45;
v_45:
    goto v_35;
v_37:
    v_84 = stack[-1];
    if (!car_legal(v_84)) v_84 = carerror(v_84); else
    v_84 = car(v_84);
    if (!car_legal(v_84)) v_84 = carerror(v_84); else
    v_84 = car(v_84);
    if (!car_legal(v_84)) v_86 = carerror(v_84); else
    v_86 = car(v_84);
    v_84 = stack[-1];
    if (!car_legal(v_84)) v_84 = carerror(v_84); else
    v_84 = car(v_84);
    if (!car_legal(v_84)) v_84 = carerror(v_84); else
    v_84 = car(v_84);
    if (!car_legal(v_84)) v_85 = cdrerror(v_84); else
    v_85 = cdr(v_84);
    v_84 = stack[0];
    v_84 = acons(v_86, v_85, v_84);
    env = stack[-3];
    stack[0] = v_84;
    goto v_35;
v_35:
    v_84 = stack[-1];
    if (!car_legal(v_84)) stack[-2] = cdrerror(v_84); else
    stack[-2] = cdr(v_84);
    v_84 = stack[-1];
    if (!car_legal(v_84)) v_84 = carerror(v_84); else
    v_84 = car(v_84);
    if (!car_legal(v_84)) v_85 = cdrerror(v_84); else
    v_85 = cdr(v_84);
    v_84 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // total!-degree!-in!-powers
    v_84 = (*qfn2(fn))(fn, v_85, v_84);
    }
    env = stack[-3];
    stack[-1] = stack[-2];
    stack[0] = v_84;
    goto v_1;
    goto v_6;
    v_84 = nil;
v_6:
    return onevalue(v_84);
}



// Code for set!-global!-mode

static LispObject CC_setKglobalKmode(LispObject env,
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    stack[-2] = v_2;
// end of prologue
    v_16 = nil;
    v_16 = ncons(v_16);
    env = stack[-4];
    setvalue(basic_elt(env, 1), v_16); // alglist!*
    v_16 = stack[-2];
    setvalue(basic_elt(env, 2), v_16); // !*mode
    stack[-3] = basic_elt(env, 3); // null
    stack[-1] = basic_elt(env, 4); // setq
    stack[0] = basic_elt(env, 2); // !*mode
    v_16 = stack[-2];
    v_16 = Lmkquote(nil, v_16);
    env = stack[-4];
    v_16 = list3(stack[-1], stack[0], v_16);
    {
        LispObject v_21 = stack[-3];
        return list2(v_21, v_16);
    }
    return onevalue(v_16);
}



// Code for setel

static LispObject CC_setel(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_36, v_37, v_38;
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
    v_36 = stack[-2];
    if (!car_legal(v_36)) v_37 = carerror(v_36); else
    v_37 = car(v_36);
    v_36 = basic_elt(env, 1); // dimension
    v_36 = get(v_37, v_36);
    env = stack[-4];
    stack[-3] = v_36;
    v_36 = stack[-3];
    stack[0] = Llength(nil, v_36);
    env = stack[-4];
    v_36 = stack[-2];
    if (!car_legal(v_36)) v_36 = cdrerror(v_36); else
    v_36 = cdr(v_36);
    v_36 = Llength(nil, v_36);
    env = stack[-4];
    if (equal(stack[0], v_36)) goto v_13;
    v_38 = basic_elt(env, 2); // rlisp
    v_37 = static_cast<LispObject>(352)+TAG_FIXNUM; // 22
    v_36 = basic_elt(env, 3); // "Incorrect array reference"
    {
        LispObject fn = basic_elt(env, 4); // rerror
        return (*qfn3(fn))(fn, v_38, v_37, v_36);
    }
v_13:
    v_36 = stack[-2];
    if (!car_legal(v_36)) v_36 = carerror(v_36); else
    v_36 = car(v_36);
    if (!symbolp(v_36)) v_36 = nil;
    else { v_36 = qfastgets(v_36);
           if (v_36 != nil) { v_36 = elt(v_36, 4); // avalue
#ifdef RECORD_GET
             if (v_36 != SPID_NOPROP)
                record_get(elt(fastget_names, 4), 1);
             else record_get(elt(fastget_names, 4), 0),
                v_36 = nil; }
           else record_get(elt(fastget_names, 4), 0); }
#else
             if (v_36 == SPID_NOPROP) v_36 = nil; }}
#endif
    if (!car_legal(v_36)) v_36 = cdrerror(v_36); else
    v_36 = cdr(v_36);
    if (!car_legal(v_36)) stack[0] = carerror(v_36); else
    stack[0] = car(v_36);
    v_36 = stack[-2];
    if (!car_legal(v_36)) stack[-2] = cdrerror(v_36); else
    stack[-2] = cdr(v_36);
    v_36 = stack[-3];
    v_36 = ncons(v_36);
    env = stack[-4];
    {
        LispObject v_43 = stack[0];
        LispObject v_44 = stack[-2];
        LispObject v_45 = stack[-1];
        LispObject fn = basic_elt(env, 5); // setel1
        return (*qfn4up(fn))(fn, v_43, v_44, v_45, v_36);
    }
    v_36 = nil;
    return onevalue(v_36);
}



// Code for groeb!=weight

static LispObject CC_groebMweight(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_14;
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
    v_14 = v_2;
// end of prologue
    {   LispObject fn = basic_elt(env, 1); // mo_ecart
    stack[-2] = (*qfn1(fn))(fn, v_14);
    }
    env = stack[-3];
    v_14 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // bas_dpecart
    stack[-1] = (*qfn1(fn))(fn, v_14);
    }
    env = stack[-3];
    v_14 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // bas_dpecart
    v_14 = (*qfn1(fn))(fn, v_14);
    }
    env = stack[-3];
    v_14 = Lmin_2(nil, stack[-1], v_14);
    {
        LispObject v_18 = stack[-2];
        return plus2(v_18, v_14);
    }
}



// Code for general!-modular!-expt

static LispObject CC_generalKmodularKexpt(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_103, v_104, v_105;
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
v_7:
    v_104 = stack[-1];
    v_103 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_104 == v_103) goto v_10;
    else goto v_11;
v_10:
    v_104 = stack[0];
    v_103 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_104 == v_103) goto v_16;
    else goto v_17;
v_16:
    v_105 = basic_elt(env, 1); // alg
    v_104 = static_cast<LispObject>(1616)+TAG_FIXNUM; // 101
    v_103 = basic_elt(env, 2); // "0^0 formed"
    {
        LispObject fn = basic_elt(env, 4); // rerror
        return (*qfn3(fn))(fn, v_105, v_104, v_103);
    }
v_17:
    v_103 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_6;
    goto v_9;
v_11:
    v_104 = stack[0];
    v_103 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_104 == v_103) goto v_27;
    else goto v_28;
v_27:
    v_103 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_6;
v_28:
    v_104 = stack[0];
    v_103 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_104 == v_103) goto v_32;
    else goto v_33;
v_32:
    v_103 = stack[-1];
    goto v_6;
v_33:
    stack[-2] = stack[0];
    v_103 = qvalue(basic_elt(env, 3)); // current!-modulus
    v_103 = sub1(v_103);
    env = stack[-3];
    v_103 = static_cast<LispObject>(geq2(stack[-2], v_103));
    v_103 = v_103 ? lisp_true : nil;
    env = stack[-3];
    if (v_103 == nil) goto v_38;
    v_103 = qvalue(basic_elt(env, 3)); // current!-modulus
    {   LispObject fn = basic_elt(env, 5); // primep
    v_103 = (*qfn1(fn))(fn, v_103);
    }
    env = stack[-3];
    if (v_103 == nil) goto v_38;
    v_103 = qvalue(basic_elt(env, 3)); // current!-modulus
    v_103 = sub1(v_103);
    env = stack[-3];
    v_103 = Cremainder(stack[0], v_103);
    env = stack[-3];
    stack[0] = v_103;
    goto v_7;
v_38:
v_59:
    v_103 = stack[0];
    v_103 = Levenp(nil, v_103);
    env = stack[-3];
    if (v_103 == nil) goto v_62;
    else goto v_63;
v_62:
    goto v_58;
v_63:
    v_104 = stack[0];
    v_103 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_103 = quot2(v_104, v_103);
    env = stack[-3];
    stack[0] = v_103;
    v_104 = stack[-1];
    v_103 = stack[-1];
    {   LispObject fn = basic_elt(env, 6); // general!-modular!-times
    v_103 = (*qfn2(fn))(fn, v_104, v_103);
    }
    env = stack[-3];
    stack[-1] = v_103;
    goto v_59;
v_58:
    v_103 = stack[0];
    {   LispObject fn = basic_elt(env, 7); // reverse!-num
    v_103 = (*qfn1(fn))(fn, v_103);
    }
    env = stack[-3];
    stack[0] = v_103;
    v_103 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-2] = v_103;
v_78:
    v_104 = stack[0];
    v_103 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_103 = static_cast<LispObject>(greaterp2(v_104, v_103));
    v_103 = v_103 ? lisp_true : nil;
    env = stack[-3];
    if (v_103 == nil) goto v_81;
    else goto v_82;
v_81:
    goto v_77;
v_82:
    v_104 = stack[-2];
    v_103 = stack[-2];
    {   LispObject fn = basic_elt(env, 6); // general!-modular!-times
    v_103 = (*qfn2(fn))(fn, v_104, v_103);
    }
    env = stack[-3];
    stack[-2] = v_103;
    v_103 = stack[0];
    v_103 = Levenp(nil, v_103);
    env = stack[-3];
    if (v_103 == nil) goto v_92;
    else goto v_93;
v_92:
    v_104 = stack[-2];
    v_103 = stack[-1];
    {   LispObject fn = basic_elt(env, 6); // general!-modular!-times
    v_103 = (*qfn2(fn))(fn, v_104, v_103);
    }
    env = stack[-3];
    stack[-2] = v_103;
    goto v_91;
v_93:
v_91:
    v_104 = stack[0];
    v_103 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_103 = quot2(v_104, v_103);
    env = stack[-3];
    stack[0] = v_103;
    goto v_78;
v_77:
    v_103 = stack[-2];
    goto v_6;
v_9:
    v_103 = nil;
v_6:
    return onevalue(v_103);
}



// Code for let2

static LispObject CC_let2(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_161, v_162, v_163;
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(9);
// copy arguments values to proper place
    stack[-3] = v_5;
    stack[-4] = v_4;
    stack[-5] = v_3;
    stack[-6] = v_2;
// end of prologue
    stack[-7] = nil;
    v_161 = stack[-6];
    {   LispObject fn = basic_elt(env, 12); // getrtype
    v_161 = (*qfn1(fn))(fn, v_161);
    }
    env = stack[-8];
    stack[-1] = v_161;
    if (v_161 == nil) goto v_16;
    v_162 = stack[-1];
    v_161 = basic_elt(env, 1); // typeletfn
    v_161 = get(v_162, v_161);
    env = stack[-8];
    v_163 = v_161;
    if (v_161 == nil) goto v_16;
    v_162 = v_163;
    v_161 = basic_elt(env, 2); // direct
    v_161 = Lflagp(nil, v_162, v_161);
    env = stack[-8];
    if (v_161 == nil) goto v_16;
    stack[-2] = v_163;
    stack[-4] = stack[-6];
    stack[0] = stack[-5];
    v_161 = stack[-5];
    {   LispObject fn = basic_elt(env, 12); // getrtype
    v_161 = (*qfn1(fn))(fn, v_161);
    }
    env = stack[-8];
    v_161 = list2(stack[-3], v_161);
    env = stack[-8];
    v_161 = list3star(stack[-4], stack[0], stack[-1], v_161);
    env = stack[-8];
    {
        LispObject v_172 = stack[-2];
        LispObject fn = basic_elt(env, 13); // lispapply
        return (*qfn2(fn))(fn, v_172, v_161);
    }
v_16:
    v_161 = stack[-5];
    {   LispObject fn = basic_elt(env, 12); // getrtype
    v_161 = (*qfn1(fn))(fn, v_161);
    }
    env = stack[-8];
    stack[-1] = v_161;
    if (v_161 == nil) goto v_40;
    v_162 = stack[-1];
    v_161 = basic_elt(env, 1); // typeletfn
    v_161 = get(v_162, v_161);
    env = stack[-8];
    v_163 = v_161;
    if (v_161 == nil) goto v_40;
    v_162 = v_163;
    v_161 = basic_elt(env, 2); // direct
    v_161 = Lflagp(nil, v_162, v_161);
    env = stack[-8];
    if (v_161 == nil) goto v_40;
    stack[-2] = v_163;
    stack[-4] = stack[-6];
    stack[0] = nil;
    v_162 = stack[-3];
    v_161 = stack[-1];
    v_161 = list2(v_162, v_161);
    env = stack[-8];
    v_161 = list3star(stack[-4], stack[-5], stack[0], v_161);
    env = stack[-8];
    {
        LispObject v_173 = stack[-2];
        LispObject fn = basic_elt(env, 13); // lispapply
        return (*qfn2(fn))(fn, v_173, v_161);
    }
v_40:
    v_162 = qvalue(basic_elt(env, 3)); // frasc!*
    v_161 = stack[-6];
    v_161 = Lsubla(nil, v_162, v_161);
    env = stack[-8];
    stack[-2] = v_161;
    v_162 = stack[-2];
    v_161 = stack[-6];
    if (equal(v_162, v_161)) goto v_68;
    v_161 = stack[-2];
    if (!consp(v_161)) goto v_73;
    else goto v_74;
v_73:
    v_161 = stack[-6];
    {
        LispObject fn = basic_elt(env, 14); // errpri1
        return (*qfn1(fn))(fn, v_161);
    }
v_74:
    v_161 = lisp_true;
    stack[-7] = v_161;
    v_161 = stack[-2];
    stack[-6] = v_161;
    goto v_72;
v_72:
    goto v_66;
v_68:
v_66:
    v_162 = qvalue(basic_elt(env, 3)); // frasc!*
    v_161 = stack[-5];
    v_161 = Lsubla(nil, v_162, v_161);
    env = stack[-8];
    stack[-2] = v_161;
    v_162 = stack[-2];
    v_161 = stack[-5];
    if (equal(v_162, v_161)) goto v_88;
    v_161 = stack[-2];
    stack[-5] = v_161;
    v_162 = stack[-5];
    v_161 = basic_elt(env, 4); // !*sq!*
    if (!consp(v_162)) goto v_95;
    v_162 = car(v_162);
    if (v_162 == v_161) goto v_94;
    else goto v_95;
v_94:
    v_161 = stack[-5];
    if (!car_legal(v_161)) v_161 = cdrerror(v_161); else
    v_161 = cdr(v_161);
    if (!car_legal(v_161)) v_161 = carerror(v_161); else
    v_161 = car(v_161);
    {   LispObject fn = basic_elt(env, 15); // prepsq!*
    v_161 = (*qfn1(fn))(fn, v_161);
    }
    env = stack[-8];
    stack[-5] = v_161;
    goto v_93;
v_95:
v_93:
    goto v_86;
v_88:
v_86:
    v_162 = qvalue(basic_elt(env, 5)); // frlis!*
    v_161 = qvalue(basic_elt(env, 6)); // mcond!*
    {   LispObject fn = basic_elt(env, 16); // smemql
    v_161 = (*qfn2(fn))(fn, v_162, v_161);
    }
    env = stack[-8];
    stack[-2] = v_161;
    v_162 = qvalue(basic_elt(env, 5)); // frlis!*
    v_161 = stack[-6];
    {   LispObject fn = basic_elt(env, 16); // smemql
    v_161 = (*qfn2(fn))(fn, v_162, v_161);
    }
    env = stack[-8];
    stack[-1] = v_161;
    v_162 = stack[-2];
    v_161 = stack[-1];
    {   LispObject fn = basic_elt(env, 17); // setdiff
    v_161 = (*qfn2(fn))(fn, v_162, v_161);
    }
    env = stack[-8];
    v_163 = v_161;
    if (v_161 == nil) goto v_113;
    else goto v_111;
v_113:
    v_162 = qvalue(basic_elt(env, 5)); // frlis!*
    v_161 = stack[-5];
    {   LispObject fn = basic_elt(env, 16); // smemql
    v_162 = (*qfn2(fn))(fn, v_162, v_161);
    }
    env = stack[-8];
    v_161 = stack[-2];
    {   LispObject fn = basic_elt(env, 17); // setdiff
    stack[0] = (*qfn2(fn))(fn, v_162, v_161);
    }
    env = stack[-8];
    v_162 = stack[-1];
    v_161 = stack[-2];
    {   LispObject fn = basic_elt(env, 17); // setdiff
    v_161 = (*qfn2(fn))(fn, v_162, v_161);
    }
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 17); // setdiff
    v_161 = (*qfn2(fn))(fn, stack[0], v_161);
    }
    env = stack[-8];
    v_163 = v_161;
    if (v_161 == nil) goto v_117;
    else goto v_111;
v_117:
    goto v_112;
v_111:
    v_161 = basic_elt(env, 7); // "Unmatched free variable(s)"
    v_162 = v_163;
    v_161 = cons(v_161, v_162);
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 18); // lprie
    v_161 = (*qfn1(fn))(fn, v_161);
    }
    env = stack[-8];
    v_161 = basic_elt(env, 8); // hold
    setvalue(basic_elt(env, 9), v_161); // erfg!*
    v_161 = nil;
    goto v_12;
v_112:
    v_161 = stack[-6];
    if (!consp(v_161)) goto v_133;
    else goto v_134;
v_133:
    goto v_110;
v_134:
    v_161 = stack[-6];
    if (!car_legal(v_161)) v_162 = carerror(v_161); else
    v_162 = car(v_161);
    v_161 = basic_elt(env, 10); // getel
    if (v_162 == v_161) goto v_137;
    else goto v_138;
v_137:
    v_161 = stack[-6];
    if (!car_legal(v_161)) v_161 = cdrerror(v_161); else
    v_161 = cdr(v_161);
    if (!car_legal(v_161)) v_161 = carerror(v_161); else
    v_161 = car(v_161);
    {   LispObject fn = basic_elt(env, 19); // lispeval
    v_161 = (*qfn1(fn))(fn, v_161);
    }
    env = stack[-8];
    stack[-6] = v_161;
    goto v_110;
v_138:
    v_161 = stack[-6];
    if (!car_legal(v_161)) v_162 = carerror(v_161); else
    v_162 = car(v_161);
    v_161 = basic_elt(env, 11); // immediate
    v_161 = Lflagp(nil, v_162, v_161);
    env = stack[-8];
    if (v_161 == nil) goto v_147;
    v_161 = stack[-6];
    {   LispObject fn = basic_elt(env, 20); // reval
    v_161 = (*qfn1(fn))(fn, v_161);
    }
    env = stack[-8];
    stack[-6] = v_161;
    goto v_110;
v_147:
v_110:
    stack[0] = stack[-6];
    stack[-1] = stack[-5];
    stack[-2] = stack[-4];
    v_162 = stack[-3];
    v_161 = stack[-7];
    v_161 = list2(v_162, v_161);
    env = stack[-8];
    {
        LispObject v_174 = stack[0];
        LispObject v_175 = stack[-1];
        LispObject v_176 = stack[-2];
        LispObject fn = basic_elt(env, 21); // let3
        return (*qfn4up(fn))(fn, v_174, v_175, v_176, v_161);
    }
v_12:
    return onevalue(v_161);
}



// Code for ordered!-gcd!-mod!-p

static LispObject CC_orderedKgcdKmodKp(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_62, v_63;
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
    v_62 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-2] = v_62;
v_8:
    v_63 = stack[-1];
    v_62 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // reduce!-degree!-mod!-p
    v_62 = (*qfn2(fn))(fn, v_63, v_62);
    }
    env = stack[-3];
    stack[-1] = v_62;
    v_62 = stack[-1];
    if (v_62 == nil) goto v_15;
    else goto v_16;
v_15:
    v_62 = stack[0];
    {
        LispObject fn = basic_elt(env, 3); // monic!-mod!-p
        return (*qfn1(fn))(fn, v_62);
    }
v_16:
    v_62 = stack[-2];
    v_62 = add1(v_62);
    env = stack[-3];
    stack[-2] = v_62;
    v_62 = stack[-1];
    if (!consp(v_62)) goto v_28;
    else goto v_29;
v_28:
    v_62 = lisp_true;
    goto v_27;
v_29:
    v_62 = stack[-1];
    if (!car_legal(v_62)) v_62 = carerror(v_62); else
    v_62 = car(v_62);
    v_62 = (consp(v_62) ? nil : lisp_true);
    goto v_27;
    v_62 = nil;
v_27:
    if (v_62 == nil) goto v_25;
    v_63 = qvalue(basic_elt(env, 1)); // reduction!-count
    v_62 = stack[-2];
    v_62 = plus2(v_63, v_62);
    env = stack[-3];
    setvalue(basic_elt(env, 1), v_62); // reduction!-count
    v_62 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_7;
v_25:
    v_62 = stack[-1];
    if (!car_legal(v_62)) v_62 = carerror(v_62); else
    v_62 = car(v_62);
    if (!car_legal(v_62)) v_62 = carerror(v_62); else
    v_62 = car(v_62);
    if (!car_legal(v_62)) v_63 = cdrerror(v_62); else
    v_63 = cdr(v_62);
    v_62 = stack[0];
    if (!car_legal(v_62)) v_62 = carerror(v_62); else
    v_62 = car(v_62);
    if (!car_legal(v_62)) v_62 = carerror(v_62); else
    v_62 = car(v_62);
    if (!car_legal(v_62)) v_62 = cdrerror(v_62); else
    v_62 = cdr(v_62);
    v_62 = static_cast<LispObject>(lessp2(v_63, v_62));
    v_62 = v_62 ? lisp_true : nil;
    env = stack[-3];
    if (v_62 == nil) goto v_42;
    v_63 = qvalue(basic_elt(env, 1)); // reduction!-count
    v_62 = stack[-2];
    v_62 = plus2(v_63, v_62);
    env = stack[-3];
    setvalue(basic_elt(env, 1), v_62); // reduction!-count
    v_62 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-2] = v_62;
    v_62 = stack[-1];
    v_63 = v_62;
    v_62 = stack[0];
    stack[-1] = v_62;
    v_62 = v_63;
    stack[0] = v_62;
    goto v_23;
v_42:
v_23:
    goto v_8;
v_7:
    return onevalue(v_62);
}



// Code for p_prinl2

static LispObject CC_p_prinl2(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_290, v_291, v_292;
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(9);
// copy arguments values to proper place
    stack[-2] = v_5;
    stack[-4] = v_4;
    stack[-5] = v_3;
    stack[-6] = v_2;
// end of prologue
    v_290 = qvalue(basic_elt(env, 1)); // !*print!-level!*
    v_290 = integerp(v_290);
    if (v_290 == nil) goto v_10;
    v_291 = stack[-5];
    v_290 = qvalue(basic_elt(env, 1)); // !*print!-level!*
    v_290 = static_cast<LispObject>(greaterp2(v_291, v_290));
    v_290 = v_290 ? lisp_true : nil;
    env = stack[-8];
    if (v_290 == nil) goto v_10;
    v_291 = basic_elt(env, 2); // "#"
    v_290 = stack[-2];
    {
        LispObject fn = basic_elt(env, 12); // p_princ
        return (*qfn2(fn))(fn, v_291, v_290);
    }
v_10:
    v_290 = stack[-6];
    if (!consp(v_290)) goto v_25;
    else goto v_26;
v_25:
    v_290 = stack[-6];
    v_290 = Lsimple_vectorp(nil, v_290);
    env = stack[-8];
    if (v_290 == nil) goto v_30;
    else goto v_31;
v_30:
    v_290 = stack[-6];
    {   LispObject fn = basic_elt(env, 13); // gensymp
    v_290 = (*qfn1(fn))(fn, v_290);
    }
    env = stack[-8];
    v_290 = (v_290 == nil ? lisp_true : nil);
    goto v_29;
v_31:
    v_290 = nil;
    goto v_29;
    v_290 = nil;
v_29:
    goto v_24;
v_26:
    v_290 = nil;
    goto v_24;
    v_290 = nil;
v_24:
    if (v_290 == nil) goto v_22;
    v_290 = stack[-4];
    if (v_290 == nil) goto v_46;
    v_291 = stack[-6];
    v_290 = stack[-2];
    {
        LispObject fn = basic_elt(env, 14); // p_prin
        return (*qfn2(fn))(fn, v_291, v_290);
    }
v_46:
    v_291 = stack[-6];
    v_290 = stack[-2];
    {
        LispObject fn = basic_elt(env, 12); // p_princ
        return (*qfn2(fn))(fn, v_291, v_290);
    }
    v_290 = nil;
    goto v_8;
v_22:
    v_291 = stack[-6];
    v_290 = qvalue(basic_elt(env, 3)); // !*prinl_visited_nodes!*
    {   LispObject fn = basic_elt(env, 15); // gethash
    v_290 = (*qfn2(fn))(fn, v_291, v_290);
    }
    env = stack[-8];
    stack[-1] = v_290;
    v_290 = stack[-1];
    if (v_290 == nil) goto v_69;
    v_290 = stack[-1];
    v_290 = static_cast<LispObject>(zerop(v_290));
    v_290 = v_290 ? lisp_true : nil;
    env = stack[-8];
    if (v_290 == nil) goto v_72;
    else goto v_69;
v_72:
    v_291 = stack[-1];
    v_290 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_290 = static_cast<LispObject>(lessp2(v_291, v_290));
    v_290 = v_290 ? lisp_true : nil;
    env = stack[-8];
    if (v_290 == nil) goto v_78;
    v_290 = stack[-1];
    v_292 = negate(v_290);
    env = stack[-8];
    v_291 = stack[-2];
    v_290 = basic_elt(env, 2); // "#"
    {   LispObject fn = basic_elt(env, 16); // p_printref
    v_290 = (*qfn3(fn))(fn, v_292, v_291, v_290);
    }
    v_290 = nil;
    goto v_61;
v_78:
    stack[-3] = stack[-6];
    stack[0] = qvalue(basic_elt(env, 3)); // !*prinl_visited_nodes!*
    v_290 = stack[-1];
    v_290 = negate(v_290);
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 17); // puthash
    v_290 = (*qfn3(fn))(fn, stack[-3], stack[0], v_290);
    }
    env = stack[-8];
    v_292 = stack[-1];
    v_291 = stack[-2];
    v_290 = basic_elt(env, 4); // "="
    {   LispObject fn = basic_elt(env, 16); // p_printref
    v_290 = (*qfn3(fn))(fn, v_292, v_291, v_290);
    }
    env = stack[-8];
    v_290 = nil;
    stack[-2] = v_290;
    goto v_76;
v_76:
    goto v_67;
v_69:
v_67:
    v_290 = stack[-6];
    v_290 = Lsimple_vectorp(nil, v_290);
    env = stack[-8];
    if (v_290 == nil) goto v_103;
    v_291 = basic_elt(env, 5); // "%("
    v_290 = stack[-2];
    {   LispObject fn = basic_elt(env, 12); // p_princ
    v_290 = (*qfn2(fn))(fn, v_291, v_290);
    }
    env = stack[-8];
    v_290 = qvalue(basic_elt(env, 6)); // !*print!-array!*
    if (v_290 == nil) goto v_112;
    v_290 = stack[-6];
    v_290 = Lupbv(nil, v_290);
    env = stack[-8];
    stack[-7] = v_290;
    v_290 = qvalue(basic_elt(env, 7)); // !*print!-length!*
    v_290 = integerp(v_290);
    if (v_290 == nil) goto v_119;
    v_291 = qvalue(basic_elt(env, 7)); // !*print!-length!*
    v_290 = stack[-7];
    v_290 = static_cast<LispObject>(lessp2(v_291, v_290));
    v_290 = v_290 ? lisp_true : nil;
    env = stack[-8];
    if (v_290 == nil) goto v_119;
    v_290 = qvalue(basic_elt(env, 7)); // !*print!-length!*
    stack[-7] = v_290;
    goto v_117;
v_119:
v_117:
    v_290 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-3] = v_290;
v_131:
    v_291 = stack[-7];
    v_290 = stack[-3];
    v_290 = difference2(v_291, v_290);
    env = stack[-8];
    v_290 = Lminusp(nil, v_290);
    env = stack[-8];
    if (v_290 == nil) goto v_136;
    goto v_130;
v_136:
    v_291 = stack[-6];
    v_290 = stack[-3];
    stack[-2] = Lgetv(nil, v_291, v_290);
    env = stack[-8];
    v_290 = stack[-5];
    stack[-1] = add1(v_290);
    env = stack[-8];
    stack[0] = stack[-4];
    v_291 = stack[-3];
    v_290 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_290 = Lneq_2(nil, v_291, v_290);
    env = stack[-8];
    v_290 = ncons(v_290);
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 0); // p_prinl2
    v_290 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_290);
    }
    env = stack[-8];
    v_290 = stack[-3];
    v_290 = add1(v_290);
    env = stack[-8];
    stack[-3] = v_290;
    goto v_131;
v_130:
    goto v_110;
v_112:
    v_291 = basic_elt(env, 8); // "..."
    v_290 = nil;
    {   LispObject fn = basic_elt(env, 12); // p_princ
    v_290 = (*qfn2(fn))(fn, v_291, v_290);
    }
    env = stack[-8];
    goto v_110;
v_110:
    v_291 = basic_elt(env, 9); // ")"
    v_290 = nil;
    {   LispObject fn = basic_elt(env, 12); // p_princ
    v_290 = (*qfn2(fn))(fn, v_291, v_290);
    }
    v_290 = nil;
    goto v_61;
v_103:
    v_290 = stack[-6];
    if (!consp(v_290)) goto v_164;
    else goto v_165;
v_164:
    v_290 = stack[-4];
    if (v_290 == nil) goto v_170;
    v_291 = stack[-6];
    v_290 = stack[-2];
    {   LispObject fn = basic_elt(env, 14); // p_prin
    v_290 = (*qfn2(fn))(fn, v_291, v_290);
    }
    goto v_168;
v_170:
    v_291 = stack[-6];
    v_290 = stack[-2];
    {   LispObject fn = basic_elt(env, 12); // p_princ
    v_290 = (*qfn2(fn))(fn, v_291, v_290);
    }
    goto v_168;
v_168:
    v_290 = nil;
    goto v_61;
v_165:
    v_291 = basic_elt(env, 10); // "("
    v_290 = stack[-2];
    {   LispObject fn = basic_elt(env, 12); // p_princ
    v_290 = (*qfn2(fn))(fn, v_291, v_290);
    }
    env = stack[-8];
    v_290 = stack[-6];
    if (!car_legal(v_290)) stack[-2] = carerror(v_290); else
    stack[-2] = car(v_290);
    v_290 = stack[-5];
    stack[-1] = add1(v_290);
    env = stack[-8];
    stack[0] = stack[-4];
    v_290 = nil;
    v_290 = ncons(v_290);
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 0); // p_prinl2
    v_290 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_290);
    }
    env = stack[-8];
    v_290 = stack[-6];
    if (!car_legal(v_290)) v_290 = cdrerror(v_290); else
    v_290 = cdr(v_290);
    stack[-6] = v_290;
    v_290 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-7] = v_290;
v_62:
    v_290 = stack[-6];
    if (!consp(v_290)) goto v_197;
    else goto v_198;
v_197:
    v_290 = stack[-6];
    if (v_290 == nil) goto v_203;
    v_291 = basic_elt(env, 11); // "."
    v_290 = lisp_true;
    {   LispObject fn = basic_elt(env, 12); // p_princ
    v_290 = (*qfn2(fn))(fn, v_291, v_290);
    }
    env = stack[-8];
    stack[0] = stack[-6];
    stack[-1] = stack[-5];
    stack[-2] = stack[-4];
    v_290 = lisp_true;
    v_290 = ncons(v_290);
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 0); // p_prinl2
    v_290 = (*qfn4up(fn))(fn, stack[0], stack[-1], stack[-2], v_290);
    }
    env = stack[-8];
    goto v_201;
v_203:
v_201:
    v_291 = basic_elt(env, 9); // ")"
    v_290 = nil;
    {
        LispObject fn = basic_elt(env, 12); // p_princ
        return (*qfn2(fn))(fn, v_291, v_290);
    }
v_198:
    v_290 = qvalue(basic_elt(env, 7)); // !*print!-length!*
    v_290 = integerp(v_290);
    if (v_290 == nil) goto v_220;
    v_290 = stack[-7];
    v_291 = add1(v_290);
    env = stack[-8];
    stack[-7] = v_291;
    v_290 = qvalue(basic_elt(env, 7)); // !*print!-length!*
    v_290 = static_cast<LispObject>(greaterp2(v_291, v_290));
    v_290 = v_290 ? lisp_true : nil;
    env = stack[-8];
    if (v_290 == nil) goto v_220;
    v_291 = basic_elt(env, 8); // "..."
    v_290 = lisp_true;
    {   LispObject fn = basic_elt(env, 12); // p_princ
    v_290 = (*qfn2(fn))(fn, v_291, v_290);
    }
    env = stack[-8];
    v_291 = basic_elt(env, 9); // ")"
    v_290 = nil;
    {
        LispObject fn = basic_elt(env, 12); // p_princ
        return (*qfn2(fn))(fn, v_291, v_290);
    }
v_220:
    v_291 = stack[-6];
    v_290 = qvalue(basic_elt(env, 3)); // !*prinl_visited_nodes!*
    {   LispObject fn = basic_elt(env, 15); // gethash
    v_290 = (*qfn2(fn))(fn, v_291, v_290);
    }
    env = stack[-8];
    stack[-1] = v_290;
    v_290 = stack[-1];
    if (v_290 == nil) goto v_241;
    v_290 = stack[-1];
    v_290 = static_cast<LispObject>(zerop(v_290));
    v_290 = v_290 ? lisp_true : nil;
    env = stack[-8];
    if (v_290 == nil) goto v_244;
    else goto v_241;
v_244:
    v_291 = stack[-1];
    v_290 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_290 = static_cast<LispObject>(lessp2(v_291, v_290));
    v_290 = v_290 ? lisp_true : nil;
    env = stack[-8];
    if (v_290 == nil) goto v_250;
    v_291 = basic_elt(env, 11); // "."
    v_290 = lisp_true;
    {   LispObject fn = basic_elt(env, 12); // p_princ
    v_290 = (*qfn2(fn))(fn, v_291, v_290);
    }
    env = stack[-8];
    v_290 = stack[-1];
    v_292 = negate(v_290);
    env = stack[-8];
    v_291 = lisp_true;
    v_290 = basic_elt(env, 2); // "#"
    {   LispObject fn = basic_elt(env, 16); // p_printref
    v_290 = (*qfn3(fn))(fn, v_292, v_291, v_290);
    }
    env = stack[-8];
    v_291 = basic_elt(env, 9); // ")"
    v_290 = nil;
    {
        LispObject fn = basic_elt(env, 12); // p_princ
        return (*qfn2(fn))(fn, v_291, v_290);
    }
v_250:
    v_291 = basic_elt(env, 11); // "."
    v_290 = lisp_true;
    {   LispObject fn = basic_elt(env, 12); // p_princ
    v_290 = (*qfn2(fn))(fn, v_291, v_290);
    }
    env = stack[-8];
    stack[0] = stack[-6];
    v_290 = stack[-5];
    stack[-1] = add1(v_290);
    env = stack[-8];
    stack[-2] = stack[-4];
    v_290 = lisp_true;
    v_290 = ncons(v_290);
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 0); // p_prinl2
    v_290 = (*qfn4up(fn))(fn, stack[0], stack[-1], stack[-2], v_290);
    }
    env = stack[-8];
    v_291 = basic_elt(env, 9); // ")"
    v_290 = nil;
    {
        LispObject fn = basic_elt(env, 12); // p_princ
        return (*qfn2(fn))(fn, v_291, v_290);
    }
    goto v_239;
v_241:
v_239:
    v_290 = stack[-6];
    if (!car_legal(v_290)) stack[-2] = carerror(v_290); else
    stack[-2] = car(v_290);
    v_290 = stack[-5];
    stack[-1] = add1(v_290);
    env = stack[-8];
    stack[0] = stack[-4];
    v_290 = lisp_true;
    v_290 = ncons(v_290);
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 0); // p_prinl2
    v_290 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_290);
    }
    env = stack[-8];
    v_290 = stack[-6];
    if (!car_legal(v_290)) v_290 = cdrerror(v_290); else
    v_290 = cdr(v_290);
    stack[-6] = v_290;
    goto v_62;
v_61:
    goto v_8;
    v_290 = nil;
v_8:
    return onevalue(v_290);
}



// Code for talp_contains

static LispObject CC_talp_contains(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_57, v_58, v_59;
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
    v_57 = v_2;
// end of prologue
    v_59 = nil;
    v_58 = v_57;
    v_58 = Lconsp(nil, v_58);
    env = stack[-2];
    if (v_58 == nil) goto v_11;
    stack[-1] = v_57;
v_17:
    v_57 = stack[-1];
    if (v_57 == nil) goto v_21;
    else goto v_22;
v_21:
    goto v_16;
v_22:
    v_57 = stack[-1];
    if (!car_legal(v_57)) v_57 = carerror(v_57); else
    v_57 = car(v_57);
    v_58 = v_57;
    v_57 = v_58;
    v_57 = Lconsp(nil, v_57);
    env = stack[-2];
    if (v_57 == nil) goto v_31;
    v_57 = v_59;
    if (v_57 == nil) goto v_35;
    else goto v_31;
v_35:
    v_57 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // talp_contains
    v_57 = (*qfn2(fn))(fn, v_58, v_57);
    }
    env = stack[-2];
    v_59 = v_57;
    goto v_29;
v_31:
    v_57 = stack[0];
    if (v_58 == v_57) goto v_44;
    else goto v_45;
v_44:
    v_57 = lisp_true;
    v_59 = v_57;
    goto v_43;
v_45:
v_43:
    goto v_29;
v_29:
    v_57 = stack[-1];
    if (!car_legal(v_57)) v_57 = cdrerror(v_57); else
    v_57 = cdr(v_57);
    stack[-1] = v_57;
    goto v_17;
v_16:
    goto v_9;
v_11:
    v_58 = stack[0];
    if (v_58 == v_57) goto v_51;
    else goto v_52;
v_51:
    v_57 = lisp_true;
    goto v_7;
v_52:
v_9:
    v_57 = v_59;
v_7:
    return onevalue(v_57);
}



// Code for qqe_eta!-in!-term

static LispObject CC_qqe_etaKinKterm(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_68, v_69;
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
    v_68 = nil;
    stack[-1] = v_68;
    v_68 = stack[0];
    if (!consp(v_68)) goto v_11;
    else goto v_12;
v_11:
    v_68 = nil;
    goto v_7;
v_12:
    v_68 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // qqe_op
    v_69 = (*qfn1(fn))(fn, v_68);
    }
    env = stack[-2];
    v_68 = basic_elt(env, 1); // (lhead rhead)
    v_68 = Lmemq(nil, v_69, v_68);
    if (v_68 == nil) goto v_16;
    v_68 = stack[0];
    {
        LispObject fn = basic_elt(env, 3); // qqe_eta!-in!-term1
        return (*qfn1(fn))(fn, v_68);
    }
v_16:
    v_68 = stack[0];
    if (!car_legal(v_68)) v_68 = cdrerror(v_68); else
    v_68 = cdr(v_68);
    stack[0] = v_68;
v_29:
    v_68 = stack[0];
    if (v_68 == nil) goto v_32;
    v_68 = stack[-1];
    if (v_68 == nil) goto v_36;
    else goto v_32;
v_36:
    goto v_33;
v_32:
    goto v_28;
v_33:
    v_68 = stack[0];
    if (!car_legal(v_68)) v_68 = carerror(v_68); else
    v_68 = car(v_68);
    if (!consp(v_68)) goto v_42;
    v_68 = stack[0];
    if (!car_legal(v_68)) v_68 = carerror(v_68); else
    v_68 = car(v_68);
    {   LispObject fn = basic_elt(env, 2); // qqe_op
    v_69 = (*qfn1(fn))(fn, v_68);
    }
    env = stack[-2];
    v_68 = basic_elt(env, 1); // (lhead rhead)
    v_68 = Lmemq(nil, v_69, v_68);
    if (v_68 == nil) goto v_48;
    v_68 = stack[0];
    if (!car_legal(v_68)) v_68 = carerror(v_68); else
    v_68 = car(v_68);
    {   LispObject fn = basic_elt(env, 3); // qqe_eta!-in!-term1
    v_68 = (*qfn1(fn))(fn, v_68);
    }
    env = stack[-2];
    stack[-1] = v_68;
    goto v_46;
v_48:
    v_68 = stack[0];
    if (!car_legal(v_68)) v_68 = carerror(v_68); else
    v_68 = car(v_68);
    {   LispObject fn = basic_elt(env, 0); // qqe_eta!-in!-term
    v_68 = (*qfn1(fn))(fn, v_68);
    }
    env = stack[-2];
    stack[-1] = v_68;
    goto v_46;
v_46:
    goto v_40;
v_42:
v_40:
    v_68 = stack[0];
    if (!car_legal(v_68)) v_68 = cdrerror(v_68); else
    v_68 = cdr(v_68);
    stack[0] = v_68;
    goto v_29;
v_28:
    v_68 = stack[-1];
    goto v_7;
    v_68 = nil;
v_7:
    return onevalue(v_68);
}



// Code for ev_lexcomp

static LispObject CC_ev_lexcomp(LispObject env,
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
    stack[-1] = v_2;
// end of prologue
v_7:
    v_35 = stack[-1];
    if (v_35 == nil) goto v_10;
    else goto v_11;
v_10:
    v_35 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_6;
v_11:
    v_35 = stack[-1];
    if (!car_legal(v_35)) v_36 = carerror(v_35); else
    v_36 = car(v_35);
    v_35 = stack[0];
    if (!car_legal(v_35)) v_35 = carerror(v_35); else
    v_35 = car(v_35);
    {   LispObject fn = basic_elt(env, 1); // iequal
    v_35 = (*qfn2(fn))(fn, v_36, v_35);
    }
    env = stack[-2];
    if (v_35 == nil) goto v_15;
    v_35 = stack[-1];
    if (!car_legal(v_35)) v_35 = cdrerror(v_35); else
    v_35 = cdr(v_35);
    stack[-1] = v_35;
    v_35 = stack[0];
    if (!car_legal(v_35)) v_35 = cdrerror(v_35); else
    v_35 = cdr(v_35);
    stack[0] = v_35;
    goto v_7;
v_15:
    v_35 = stack[-1];
    if (!car_legal(v_35)) v_36 = carerror(v_35); else
    v_36 = car(v_35);
    v_35 = stack[0];
    if (!car_legal(v_35)) v_35 = carerror(v_35); else
    v_35 = car(v_35);
    if ((static_cast<std::intptr_t>(v_36) > static_cast<std::intptr_t>(v_35))) goto v_25;
    else goto v_26;
v_25:
    v_35 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_6;
v_26:
    v_35 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    goto v_6;
    v_35 = nil;
v_6:
    return onevalue(v_35);
}



// Code for row

static LispObject CC_row(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_18;
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
    v_18 = stack[0];
    if (v_18 == nil) goto v_9;
    v_18 = stack[0];
    if (!car_legal(v_18)) v_18 = carerror(v_18); else
    v_18 = car(v_18);
    {   LispObject fn = basic_elt(env, 1); // expression
    v_18 = (*qfn1(fn))(fn, v_18);
    }
    env = stack[-1];
    v_18 = stack[0];
    if (!car_legal(v_18)) v_18 = cdrerror(v_18); else
    v_18 = cdr(v_18);
    {   LispObject fn = basic_elt(env, 0); // row
    v_18 = (*qfn1(fn))(fn, v_18);
    }
    goto v_7;
v_9:
v_7:
    v_18 = nil;
    return onevalue(v_18);
}



// Code for xregister_wedge_pair

static LispObject CC_xregister_wedge_pair(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_4;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// end of prologue
    v_4 = nil;
    return onevalue(v_4);
}



// Code for gfdot

static LispObject CC_gfdot(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_19, v_20, v_21;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_20 = v_3;
    v_21 = v_2;
// end of prologue
    v_19 = v_21;
    if (!car_legal(v_19)) v_19 = carerror(v_19); else
    v_19 = car(v_19);
    if (!consp(v_19)) goto v_7;
    else goto v_8;
v_7:
    v_19 = v_21;
    {
        LispObject fn = basic_elt(env, 1); // gffdot
        return (*qfn2(fn))(fn, v_19, v_20);
    }
v_8:
    v_19 = v_21;
    {
        LispObject fn = basic_elt(env, 2); // gbfdot
        return (*qfn2(fn))(fn, v_19, v_20);
    }
    v_19 = nil;
    return onevalue(v_19);
}



// Code for !:dmpluslst

static LispObject CC_Tdmpluslst(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_24, v_25;
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
    v_25 = v_2;
// end of prologue
    v_24 = v_25;
    if (v_24 == nil) goto v_6;
    else goto v_7;
v_6:
    v_24 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_5;
v_7:
    v_24 = v_25;
    if (!car_legal(v_24)) v_24 = cdrerror(v_24); else
    v_24 = cdr(v_24);
    if (v_24 == nil) goto v_10;
    else goto v_11;
v_10:
    v_24 = v_25;
    if (!car_legal(v_24)) v_24 = carerror(v_24); else
    v_24 = car(v_24);
    goto v_5;
v_11:
    v_24 = v_25;
    if (!car_legal(v_24)) stack[0] = carerror(v_24); else
    stack[0] = car(v_24);
    v_24 = v_25;
    if (!car_legal(v_24)) v_24 = cdrerror(v_24); else
    v_24 = cdr(v_24);
    {   LispObject fn = basic_elt(env, 0); // !:dmpluslst
    v_24 = (*qfn1(fn))(fn, v_24);
    }
    env = stack[-1];
    {
        LispObject v_27 = stack[0];
        LispObject fn = basic_elt(env, 1); // !:plus
        return (*qfn2(fn))(fn, v_27, v_24);
    }
    v_24 = nil;
v_5:
    return onevalue(v_24);
}



// Code for putd

static LispObject CC_putd(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_112, v_113, v_114;
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
    v_113 = stack[0];
    v_112 = basic_elt(env, 1); // funarg
    if (!consp(v_113)) goto v_9;
    v_113 = car(v_113);
    if (v_113 == v_112) goto v_8;
    else goto v_9;
v_8:
    v_113 = basic_elt(env, 2); // lambda
    v_112 = stack[0];
    if (!car_legal(v_112)) v_112 = cdrerror(v_112); else
    v_112 = cdr(v_112);
    if (!car_legal(v_112)) v_112 = cdrerror(v_112); else
    v_112 = cdr(v_112);
    v_112 = cons(v_113, v_112);
    env = stack[-3];
    stack[0] = v_112;
    goto v_7;
v_9:
v_7:
    v_112 = stack[-2];
    if (!symbolp(v_112)) v_112 = nil;
    else { v_112 = qfastgets(v_112);
           if (v_112 != nil) { v_112 = elt(v_112, 1); // lose
#ifdef RECORD_GET
             if (v_112 == SPID_NOPROP)
                record_get(elt(fastget_names, 1), 0),
                v_112 = nil;
             else record_get(elt(fastget_names, 1), 1),
                v_112 = lisp_true; }
           else record_get(elt(fastget_names, 1), 0); }
#else
             if (v_112 == SPID_NOPROP) v_112 = nil; else v_112 = lisp_true; }}
#endif
    if (v_112 == nil) goto v_21;
    v_112 = Lterpri(nil);
    env = stack[-3];
    v_112 = basic_elt(env, 3); // "+++ "
    v_112 = Lprinc(nil, v_112);
    env = stack[-3];
    v_112 = stack[-2];
    v_112 = Lprin(nil, v_112);
    env = stack[-3];
    v_112 = basic_elt(env, 4); // " not defined (LOSE flag)"
    v_112 = Lprintc(nil, v_112);
    v_112 = nil;
    goto v_19;
v_21:
    v_112 = qvalue(basic_elt(env, 5)); // !*redefmsg
    if (v_112 == nil) goto v_37;
    v_112 = stack[-2];
    {   LispObject fn = basic_elt(env, 14); // getd
    v_112 = (*qfn1(fn))(fn, v_112);
    }
    env = stack[-3];
    if (v_112 == nil) goto v_37;
    v_112 = Lterpri(nil);
    env = stack[-3];
    v_112 = basic_elt(env, 3); // "+++ "
    v_112 = Lprinc(nil, v_112);
    env = stack[-3];
    v_112 = stack[-2];
    v_112 = Lprin(nil, v_112);
    env = stack[-3];
    v_112 = basic_elt(env, 6); // " redefined"
    v_112 = Lprintc(nil, v_112);
    env = stack[-3];
    goto v_35;
v_37:
v_35:
    v_113 = stack[-1];
    v_112 = basic_elt(env, 7); // expr
    if (v_113 == v_112) goto v_52;
    else goto v_53;
v_52:
    v_113 = stack[-2];
    v_112 = stack[0];
    v_112 = Lsymbol_set_definition(nil, v_113, v_112);
    goto v_51;
v_53:
    v_113 = stack[-1];
    v_112 = basic_elt(env, 8); // subr
    if (v_113 == v_112) goto v_59;
    else goto v_60;
v_59:
    v_113 = stack[-2];
    v_112 = stack[0];
    v_112 = Lsymbol_set_definition(nil, v_113, v_112);
    goto v_51;
v_60:
    v_113 = stack[-1];
    v_112 = basic_elt(env, 9); // macro
    if (v_113 == v_112) goto v_70;
    else goto v_71;
v_70:
    v_113 = stack[0];
    v_112 = basic_elt(env, 2); // lambda
    v_112 = Leqcar(nil, v_113, v_112);
    env = stack[-3];
    goto v_69;
v_71:
    v_112 = nil;
    goto v_69;
    v_112 = nil;
v_69:
    if (v_112 == nil) goto v_67;
    v_114 = basic_elt(env, 10); // dm
    v_113 = stack[-2];
    v_112 = stack[0];
    if (!car_legal(v_112)) v_112 = cdrerror(v_112); else
    v_112 = cdr(v_112);
    v_112 = list2star(v_114, v_113, v_112);
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 15); // eval
    v_112 = (*qfn1(fn))(fn, v_112);
    }
    goto v_51;
v_67:
    v_113 = stack[-1];
    v_112 = basic_elt(env, 11); // fexpr
    if (v_113 == v_112) goto v_90;
    else goto v_91;
v_90:
    v_113 = stack[0];
    v_112 = basic_elt(env, 2); // lambda
    v_112 = Leqcar(nil, v_113, v_112);
    env = stack[-3];
    goto v_89;
v_91:
    v_112 = nil;
    goto v_89;
    v_112 = nil;
v_89:
    if (v_112 == nil) goto v_87;
    v_114 = basic_elt(env, 12); // df
    v_113 = stack[-2];
    v_112 = stack[0];
    if (!car_legal(v_112)) v_112 = cdrerror(v_112); else
    v_112 = cdr(v_112);
    v_112 = list2star(v_114, v_113, v_112);
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 15); // eval
    v_112 = (*qfn1(fn))(fn, v_112);
    }
    goto v_51;
v_87:
    v_113 = basic_elt(env, 13); // "Bad type ~S in putd"
    v_112 = stack[-1];
    {   LispObject fn = basic_elt(env, 16); // error
    v_112 = (*qfn2(fn))(fn, v_113, v_112);
    }
    goto v_51;
v_51:
    v_112 = stack[-2];
    goto v_19;
    v_112 = nil;
v_19:
    return onevalue(v_112);
}



setup_type const u23_setup[] =
{
    {"arplus:",                 G0W2,     G1W2,     CC_arplusT,G3W2,    G4W2},
    {"gfk",                     G0W3,     G1W3,     G2W3,     CC_gfk,   G4W3},
    {"coeffs",                  G0W1,     CC_coeffs,G2W1,     G3W1,     G4W1},
    {"dfprint",                 G0W1,     CC_dfprint,G2W1,    G3W1,     G4W1},
    {"monomwrite",              G0W1,     CC_monomwrite,G2W1, G3W1,     G4W1},
    {"mkpartitions1",           G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_mkpartitions1},
    {"rl_atnum",                G0W1,     CC_rl_atnum,G2W1,   G3W1,     G4W1},
    {"tayexp-times2",           G0W2,     G1W2,     CC_tayexpKtimes2,G3W2,G4W2},
    {"talp_subt",               G0W2,     G1W2,     CC_talp_subt,G3W2,  G4W2},
    {"qqe_arg-check",           G0W1,     CC_qqe_argKcheck,G2W1,G3W1,   G4W1},
    {"sq2sstm",                 G0W2,     G1W2,     CC_sq2sstm,G3W2,    G4W2},
    {"reform-minus",            G0W2,     G1W2,     CC_reformKminus,G3W2,G4W2},
    {"dm-minus",                G0W1,     CC_dmKminus,G2W1,   G3W1,     G4W1},
    {"dip-nc-ev-prod1",         G0W3,     G1W3,     G2W3,     CC_dipKncKevKprod1,G4W3},
    {"evgradlexcomp",           G0W2,     G1W2,     CC_evgradlexcomp,G3W2,G4W2},
    {"collectphystype",         G0W1,     CC_collectphystype,G2W1,G3W1, G4W1},
    {"replace1_parents",        G0W3,     G1W3,     G2W3,     CC_replace1_parents,G4W3},
    {"pairxvars",               G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_pairxvars},
    {"scalprod",                G0W2,     G1W2,     CC_scalprod,G3W2,   G4W2},
    {"simp-prop-order",         G0W2,     G1W2,     CC_simpKpropKorder,G3W2,G4W2},
    {"yypeek",                  CC_yypeek,G1W0,     G2W0,     G3W0,     G4W0},
    {"readprogn",               CC_readprogn,G1W0,  G2W0,     G3W0,     G4W0},
    {"rl_pnf",                  G0W1,     CC_rl_pnf,G2W1,     G3W1,     G4W1},
    {"mri_pasf2mri",            G0W2,     G1W2,     CC_mri_pasf2mri,G3W2,G4W2},
    {"pasf_dt",                 G0W1,     CC_pasf_dt,G2W1,    G3W1,     G4W1},
    {"naryom",                  G0W1,     CC_naryom,G2W1,     G3W1,     G4W1},
    {"subs4q",                  G0W1,     CC_subs4q,G2W1,     G3W1,     G4W1},
    {"makeset",                 G0W1,     CC_makeset,G2W1,    G3W1,     G4W1},
    {"my_letmtr",               G0W3,     G1W3,     G2W3,     CC_my_letmtr,G4W3},
    {"xlcm",                    G0W2,     G1W2,     CC_xlcm,  G3W2,     G4W2},
    {"physopordchk",            G0W2,     G1W2,     CC_physopordchk,G3W2,G4W2},
    {"def_edge",                G0W2,     G1W2,     CC_def_edge,G3W2,   G4W2},
    {"total-degree-in-powers",  G0W2,     G1W2,     CC_totalKdegreeKinKpowers,G3W2,G4W2},
    {"set-global-mode",         G0W1,     CC_setKglobalKmode,G2W1,G3W1, G4W1},
    {"setel",                   G0W2,     G1W2,     CC_setel, G3W2,     G4W2},
    {"groeb=weight",            G0W3,     G1W3,     G2W3,     CC_groebMweight,G4W3},
    {"general-modular-expt",    G0W2,     G1W2,     CC_generalKmodularKexpt,G3W2,G4W2},
    {"let2",                    G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_let2},
    {"ordered-gcd-mod-p",       G0W2,     G1W2,     CC_orderedKgcdKmodKp,G3W2,G4W2},
    {"p_prinl2",                G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_p_prinl2},
    {"talp_contains",           G0W2,     G1W2,     CC_talp_contains,G3W2,G4W2},
    {"qqe_eta-in-term",         G0W1,     CC_qqe_etaKinKterm,G2W1,G3W1, G4W1},
    {"ev_lexcomp",              G0W2,     G1W2,     CC_ev_lexcomp,G3W2, G4W2},
    {"row",                     G0W1,     CC_row,   G2W1,     G3W1,     G4W1},
    {"xregister_wedge_pair",    CC_xregister_wedge_pair,G1W0,G2W0,G3W0, G4W0},
    {"gfdot",                   G0W2,     G1W2,     CC_gfdot, G3W2,     G4W2},
    {":dmpluslst",              G0W1,     CC_Tdmpluslst,G2W1, G3W1,     G4W1},
    {"putd",                    G0W3,     G1W3,     G2W3,     CC_putd,  G4W3},
    {nullptr, 
        reinterpret_cast<no_args *>(
            reinterpret_cast<uintptr_t>("u23")),
        reinterpret_cast<one_arg *>(
            reinterpret_cast<uintptr_t>("102378 8773268 1936030")),
        nullptr, nullptr, nullptr}
};

// end of generated code
