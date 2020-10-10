
// $destdir/u30.c        Machine generated C code

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


// Code for pterpri

static LispObject CC_pterpri(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_64, v_65, v_66;
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
    v_64 = nil;
    v_64 = Lwrs(nil, v_64);
    env = stack[-4];
    stack[-3] = v_64;
    v_64 = qvalue(basic_elt(env, 1)); // !*pprinbuf!*
    v_64 = Lnreverse(nil, v_64);
    env = stack[-4];
    stack[-2] = v_64;
    v_64 = qvalue(basic_elt(env, 2)); // !*outchanl!*
    stack[-1] = v_64;
v_14:
    v_64 = stack[-1];
    if (v_64 == nil) goto v_18;
    else goto v_19;
v_18:
    goto v_13;
v_19:
    v_64 = stack[-1];
    if (!car_legal(v_64)) v_64 = carerror(v_64); else
    v_64 = car(v_64);
    v_64 = Lwrs(nil, v_64);
    env = stack[-4];
    v_64 = static_cast<LispObject>(4800)+TAG_FIXNUM; // 300
    v_64 = Llinelength(nil, v_64);
    env = stack[-4];
    v_64 = stack[-2];
    stack[0] = v_64;
v_32:
    v_64 = stack[0];
    if (v_64 == nil) goto v_36;
    else goto v_37;
v_36:
    goto v_31;
v_37:
    v_64 = stack[0];
    if (!car_legal(v_64)) v_64 = carerror(v_64); else
    v_64 = car(v_64);
    v_66 = v_64;
    v_65 = qvalue(basic_elt(env, 3)); // gentranlang!*
    v_64 = basic_elt(env, 4); // fortran
    if (v_65 == v_64) goto v_45;
    else goto v_46;
v_45:
    v_64 = v_66;
    {   LispObject fn = basic_elt(env, 6); // fprin2
    v_64 = (*qfn1(fn))(fn, v_64);
    }
    env = stack[-4];
    goto v_44;
v_46:
    v_64 = v_66;
    v_64 = Lprinc(nil, v_64);
    env = stack[-4];
    goto v_44;
v_44:
    v_64 = stack[0];
    if (!car_legal(v_64)) v_64 = cdrerror(v_64); else
    v_64 = cdr(v_64);
    stack[0] = v_64;
    goto v_32;
v_31:
    v_64 = Lterpri(nil);
    env = stack[-4];
    v_64 = stack[-1];
    if (!car_legal(v_64)) v_64 = cdrerror(v_64); else
    v_64 = cdr(v_64);
    stack[-1] = v_64;
    goto v_14;
v_13:
    v_64 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    setvalue(basic_elt(env, 5), v_64); // !*posn!*
    v_64 = nil;
    setvalue(basic_elt(env, 1), v_64); // !*pprinbuf!*
    v_64 = stack[-3];
    v_64 = Lwrs(nil, v_64);
    v_64 = nil;
    return onevalue(v_64);
}



// Code for assert_declarestat1

static LispObject CC_assert_declarestat1(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_188, v_189, v_190, v_191;
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
    push(nil, nil);
    stack_popper stack_popper_var(13);
// copy arguments values to proper place
    stack[-4] = v_2;
// end of prologue
    stack[-10] = nil;
    v_188 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-7] = v_188;
    v_188 = stack[-4];
    if (!car_legal(v_188)) v_188 = carerror(v_188); else
    v_188 = car(v_188);
    v_188 = Lexplode(nil, v_188);
    env = stack[-12];
    stack[0] = v_188;
    v_188 = basic_elt(env, 1); // assert!:
    v_189 = Lexplode(nil, v_188);
    env = stack[-12];
    v_188 = stack[0];
    v_188 = Lnconc(nil, v_189, v_188);
    env = stack[-12];
    v_188 = Lcompress(nil, v_188);
    env = stack[-12];
    v_188 = Lintern(nil, v_188);
    env = stack[-12];
    stack[-9] = v_188;
    v_188 = basic_elt(env, 2); // noassert!:
    v_189 = Lexplode(nil, v_188);
    env = stack[-12];
    v_188 = stack[0];
    v_188 = Lnconc(nil, v_189, v_188);
    env = stack[-12];
    v_188 = Lcompress(nil, v_188);
    env = stack[-12];
    v_188 = Lintern(nil, v_188);
    env = stack[-12];
    stack[-5] = v_188;
    v_188 = stack[-4];
    if (!car_legal(v_188)) v_188 = cdrerror(v_188); else
    v_188 = cdr(v_188);
    if (!car_legal(v_188)) v_188 = carerror(v_188); else
    v_188 = car(v_188);
    stack[-6] = v_188;
    v_188 = stack[-6];
    if (v_188 == nil) goto v_44;
    else goto v_45;
v_44:
    v_188 = nil;
    goto v_37;
v_45:
    stack[0] = basic_elt(env, 3); // a
    v_188 = stack[-7];
    v_188 = add1(v_188);
    env = stack[-12];
    stack[-7] = v_188;
    {   LispObject fn = basic_elt(env, 18); // mkid
    v_188 = (*qfn2(fn))(fn, stack[0], v_188);
    }
    env = stack[-12];
    v_188 = ncons(v_188);
    env = stack[-12];
    stack[-2] = v_188;
    stack[-3] = v_188;
v_38:
    v_188 = stack[-6];
    if (!car_legal(v_188)) v_188 = cdrerror(v_188); else
    v_188 = cdr(v_188);
    stack[-6] = v_188;
    v_188 = stack[-6];
    if (v_188 == nil) goto v_60;
    else goto v_61;
v_60:
    v_188 = stack[-3];
    goto v_37;
v_61:
    stack[-1] = stack[-2];
    stack[0] = basic_elt(env, 3); // a
    v_188 = stack[-7];
    v_188 = add1(v_188);
    env = stack[-12];
    stack[-7] = v_188;
    {   LispObject fn = basic_elt(env, 18); // mkid
    v_188 = (*qfn2(fn))(fn, stack[0], v_188);
    }
    env = stack[-12];
    v_188 = ncons(v_188);
    env = stack[-12];
    if (!car_legal(stack[-1])) rplacd_fails(stack[-1]);
    setcdr(stack[-1], v_188);
    v_188 = stack[-2];
    if (!car_legal(v_188)) v_188 = cdrerror(v_188); else
    v_188 = cdr(v_188);
    stack[-2] = v_188;
    goto v_38;
v_37:
    stack[-3] = v_188;
    v_188 = stack[-4];
    if (!car_legal(v_188)) v_188 = carerror(v_188); else
    v_188 = car(v_188);
    v_188 = Lmkquote(nil, v_188);
    env = stack[-12];
    stack[-8] = v_188;
    v_188 = stack[-5];
    v_188 = Lmkquote(nil, v_188);
    env = stack[-12];
    stack[-7] = v_188;
    v_189 = basic_elt(env, 4); // list
    v_188 = stack[-3];
    v_188 = cons(v_189, v_188);
    env = stack[-12];
    stack[-6] = v_188;
    stack[-11] = basic_elt(env, 4); // list
    v_188 = stack[-4];
    if (!car_legal(v_188)) v_188 = cdrerror(v_188); else
    v_188 = cdr(v_188);
    if (!car_legal(v_188)) v_188 = carerror(v_188); else
    v_188 = car(v_188);
    stack[-5] = v_188;
    v_188 = stack[-5];
    if (v_188 == nil) goto v_97;
    else goto v_98;
v_97:
    v_188 = nil;
    goto v_90;
v_98:
    v_188 = stack[-5];
    if (!car_legal(v_188)) v_188 = carerror(v_188); else
    v_188 = car(v_188);
    v_188 = Lmkquote(nil, v_188);
    env = stack[-12];
    v_188 = ncons(v_188);
    env = stack[-12];
    stack[-1] = v_188;
    stack[-2] = v_188;
v_91:
    v_188 = stack[-5];
    if (!car_legal(v_188)) v_188 = cdrerror(v_188); else
    v_188 = cdr(v_188);
    stack[-5] = v_188;
    v_188 = stack[-5];
    if (v_188 == nil) goto v_111;
    else goto v_112;
v_111:
    v_188 = stack[-2];
    goto v_90;
v_112:
    stack[0] = stack[-1];
    v_188 = stack[-5];
    if (!car_legal(v_188)) v_188 = carerror(v_188); else
    v_188 = car(v_188);
    v_188 = Lmkquote(nil, v_188);
    env = stack[-12];
    v_188 = ncons(v_188);
    env = stack[-12];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_188);
    v_188 = stack[-1];
    if (!car_legal(v_188)) v_188 = cdrerror(v_188); else
    v_188 = cdr(v_188);
    stack[-1] = v_188;
    goto v_91;
v_90:
    v_188 = cons(stack[-11], v_188);
    env = stack[-12];
    stack[-11] = v_188;
    v_188 = stack[-4];
    if (!car_legal(v_188)) v_188 = cdrerror(v_188); else
    v_188 = cdr(v_188);
    if (!car_legal(v_188)) v_188 = cdrerror(v_188); else
    v_188 = cdr(v_188);
    if (!car_legal(v_188)) v_188 = carerror(v_188); else
    v_188 = car(v_188);
    v_188 = Lmkquote(nil, v_188);
    env = stack[-12];
    stack[-5] = basic_elt(env, 5); // de
    stack[-4] = stack[-9];
    stack[-2] = basic_elt(env, 6); // assert_check1
    stack[-1] = stack[-8];
    stack[0] = stack[-7];
    v_190 = stack[-6];
    v_189 = stack[-11];
    v_188 = list3(v_190, v_189, v_188);
    env = stack[-12];
    v_188 = list3star(stack[-2], stack[-1], stack[0], v_188);
    env = stack[-12];
    v_189 = list4(stack[-5], stack[-4], stack[-3], v_188);
    env = stack[-12];
    v_188 = stack[-10];
    v_188 = cons(v_189, v_188);
    env = stack[-12];
    stack[-10] = v_188;
    stack[-2] = basic_elt(env, 7); // put
    stack[-1] = stack[-8];
    stack[0] = basic_elt(env, 8); // (quote assert_assertfn)
    v_188 = stack[-9];
    v_188 = Lmkquote(nil, v_188);
    env = stack[-12];
    v_189 = list4(stack[-2], stack[-1], stack[0], v_188);
    env = stack[-12];
    v_188 = stack[-10];
    v_188 = cons(v_189, v_188);
    env = stack[-12];
    stack[-10] = v_188;
    v_191 = basic_elt(env, 7); // put
    v_190 = stack[-8];
    v_189 = basic_elt(env, 9); // (quote assert_noassertfn)
    v_188 = stack[-7];
    v_189 = list4(v_191, v_190, v_189, v_188);
    env = stack[-12];
    v_188 = stack[-10];
    v_188 = cons(v_189, v_188);
    env = stack[-12];
    stack[-10] = v_188;
    v_191 = basic_elt(env, 7); // put
    v_190 = stack[-8];
    v_189 = basic_elt(env, 10); // (quote assert_installed)
    v_188 = nil;
    v_189 = list4(v_191, v_190, v_189, v_188);
    env = stack[-12];
    v_188 = stack[-10];
    v_188 = cons(v_189, v_188);
    env = stack[-12];
    stack[-10] = v_188;
    stack[-3] = basic_elt(env, 11); // cond
    stack[0] = basic_elt(env, 12); // not
    v_190 = basic_elt(env, 13); // member
    v_189 = stack[-8];
    v_188 = basic_elt(env, 14); // assert_functionl!*
    v_188 = list3(v_190, v_189, v_188);
    env = stack[-12];
    stack[-2] = list2(stack[0], v_188);
    env = stack[-12];
    stack[-1] = basic_elt(env, 15); // setq
    stack[0] = basic_elt(env, 14); // assert_functionl!*
    v_190 = basic_elt(env, 16); // cons
    v_189 = stack[-8];
    v_188 = basic_elt(env, 14); // assert_functionl!*
    v_188 = list3(v_190, v_189, v_188);
    env = stack[-12];
    v_188 = list3(stack[-1], stack[0], v_188);
    env = stack[-12];
    v_188 = list2(stack[-2], v_188);
    env = stack[-12];
    v_189 = list2(stack[-3], v_188);
    env = stack[-12];
    v_188 = stack[-10];
    v_188 = cons(v_189, v_188);
    env = stack[-12];
    stack[-10] = v_188;
    v_189 = basic_elt(env, 17); // progn
    v_188 = stack[-10];
    v_188 = Lnreverse(nil, v_188);
    return cons(v_189, v_188);
    return onevalue(v_188);
}



// Code for mksf

static LispObject CC_mksf(LispObject env,
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
// space for vars preserved across procedure calls
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_27 = stack[0];
    v_26 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 2); // mksq
    v_26 = (*qfn2(fn))(fn, v_27, v_26);
    }
    env = stack[-1];
    v_28 = v_26;
    v_26 = v_28;
    if (!car_legal(v_26)) v_27 = cdrerror(v_26); else
    v_27 = cdr(v_26);
    v_26 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_27 == v_26) goto v_12;
    else goto v_13;
v_12:
    v_26 = v_28;
    if (!car_legal(v_26)) v_26 = carerror(v_26); else
    v_26 = car(v_26);
    goto v_6;
v_13:
    v_26 = lisp_true;
    setvalue(basic_elt(env, 1), v_26); // !*sub2
    v_27 = stack[0];
    v_26 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 3); // mksp
    v_27 = (*qfn2(fn))(fn, v_27, v_26);
    }
    env = stack[-1];
    v_26 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_26 = cons(v_27, v_26);
    return ncons(v_26);
v_6:
    return onevalue(v_26);
}



// Code for dvfsf_susitf

static LispObject CC_dvfsf_susitf(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_6, v_7;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_6 = v_3;
    v_7 = v_2;
// end of prologue
    v_6 = v_7;
    return onevalue(v_6);
}



// Code for ofsf_smmkatl

static LispObject CC_ofsf_smmkatl(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_29, v_30, v_31, v_32;
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
    stack_popper stack_popper_var(6);
// copy arguments values to proper place
    v_30 = v_5;
    stack[-3] = v_4;
    v_31 = v_3;
    v_32 = v_2;
// end of prologue
    v_29 = qvalue(basic_elt(env, 1)); // !*rlsippatl
    if (v_29 == nil) goto v_10;
    stack[-4] = v_32;
    stack[-2] = v_32;
    stack[-1] = v_31;
    stack[0] = stack[-3];
    v_29 = v_30;
    v_29 = ncons(v_29);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 2); // ofsf_smmkatl1
    v_30 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_29);
    }
    env = stack[-5];
    v_29 = stack[-3];
    {
        LispObject v_38 = stack[-4];
        LispObject fn = basic_elt(env, 3); // ofsf_sippatl
        return (*qfn3(fn))(fn, v_38, v_30, v_29);
    }
v_10:
    stack[-1] = v_32;
    stack[0] = v_31;
    stack[-2] = stack[-3];
    v_29 = v_30;
    v_29 = ncons(v_29);
    env = stack[-5];
    {
        LispObject v_39 = stack[-1];
        LispObject v_40 = stack[0];
        LispObject v_41 = stack[-2];
        LispObject fn = basic_elt(env, 2); // ofsf_smmkatl1
        return (*qfn4up(fn))(fn, v_39, v_40, v_41, v_29);
    }
    v_29 = nil;
    return onevalue(v_29);
}



// Code for cl_nnfnot

static LispObject CC_cl_nnfnot(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_7, v_8;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_7 = v_2;
// end of prologue
    v_8 = v_7;
    v_7 = nil;
    {
        LispObject fn = basic_elt(env, 1); // cl_nnf1
        return (*qfn2(fn))(fn, v_8, v_7);
    }
}



// Code for fctrf

static LispObject CC_fctrf(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_180, v_181, v_182;
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
    v_181 = qvalue(basic_elt(env, 1)); // !*exp
    v_180 = qvalue(basic_elt(env, 2)); // ncmp!*
// Binding !*exp
// FLUIDBIND: reloadenv=7 litvec-offset=1 saveloc=6
{   bind_fluid_stack bind_fluid_var(-7, 1, -6);
    setvalue(basic_elt(env, 1), v_181); // !*exp
// Binding ncmp!*
// FLUIDBIND: reloadenv=7 litvec-offset=2 saveloc=4
{   bind_fluid_stack bind_fluid_var(-7, 2, -4);
    setvalue(basic_elt(env, 2), v_180); // ncmp!*
// Binding !*ezgcd
// FLUIDBIND: reloadenv=7 litvec-offset=3 saveloc=3
{   bind_fluid_stack bind_fluid_var(-7, 3, -3);
    setvalue(basic_elt(env, 3), nil); // !*ezgcd
// Binding !*gcd
// FLUIDBIND: reloadenv=7 litvec-offset=4 saveloc=2
{   bind_fluid_stack bind_fluid_var(-7, 4, -2);
    setvalue(basic_elt(env, 4), nil); // !*gcd
    stack[-1] = nil;
    v_180 = stack[-5];
    if (!consp(v_180)) goto v_25;
    else goto v_26;
v_25:
    v_180 = lisp_true;
    goto v_24;
v_26:
    v_180 = stack[-5];
    if (!car_legal(v_180)) v_180 = carerror(v_180); else
    v_180 = car(v_180);
    v_180 = (consp(v_180) ? nil : lisp_true);
    goto v_24;
    v_180 = nil;
v_24:
    if (v_180 == nil) goto v_22;
    v_180 = stack[-5];
    v_180 = ncons(v_180);
    goto v_18;
v_22:
    v_180 = qvalue(basic_elt(env, 2)); // ncmp!*
    if (v_180 == nil) goto v_37;
    v_180 = stack[-5];
    {   LispObject fn = basic_elt(env, 14); // noncomfp
    v_180 = (*qfn1(fn))(fn, v_180);
    }
    env = stack[-7];
    if (v_180 == nil) goto v_40;
    else goto v_37;
v_40:
    v_180 = nil;
    setvalue(basic_elt(env, 2), v_180); // ncmp!*
    goto v_20;
v_37:
v_20:
    v_180 = lisp_true;
    setvalue(basic_elt(env, 4), v_180); // !*gcd
    v_180 = qvalue(basic_elt(env, 5)); // !*limitedfactors
    if (v_180 == nil) goto v_51;
    else goto v_52;
v_51:
    v_180 = qvalue(basic_elt(env, 6)); // dmode!*
    v_180 = (v_180 == nil ? lisp_true : nil);
    goto v_50;
v_52:
    v_180 = nil;
    goto v_50;
    v_180 = nil;
v_50:
    if (v_180 == nil) goto v_48;
    v_180 = lisp_true;
    setvalue(basic_elt(env, 3), v_180); // !*ezgcd
    goto v_46;
v_48:
v_46:
    v_180 = qvalue(basic_elt(env, 7)); // !*mcd
    if (v_180 == nil) goto v_62;
    else goto v_63;
v_62:
    v_182 = basic_elt(env, 8); // poly
    v_181 = static_cast<LispObject>(240)+TAG_FIXNUM; // 15
    v_180 = basic_elt(env, 9); // "Factorization invalid with MCD off"
    {   LispObject fn = basic_elt(env, 15); // rerror
    v_180 = (*qfn3(fn))(fn, v_182, v_181, v_180);
    }
    env = stack[-7];
    goto v_61;
v_63:
    v_180 = qvalue(basic_elt(env, 1)); // !*exp
    if (v_180 == nil) goto v_69;
    else goto v_70;
v_69:
    v_180 = lisp_true;
    setvalue(basic_elt(env, 1), v_180); // !*exp
    v_181 = stack[-5];
    v_180 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_180 = cons(v_181, v_180);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 16); // resimp
    v_180 = (*qfn1(fn))(fn, v_180);
    }
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 17); // !*q2f
    v_180 = (*qfn1(fn))(fn, v_180);
    }
    env = stack[-7];
    stack[-5] = v_180;
    goto v_61;
v_70:
v_61:
    v_181 = qvalue(basic_elt(env, 6)); // dmode!*
    v_180 = basic_elt(env, 10); // !:rn!:
    if (v_181 == v_180) goto v_80;
    else goto v_81;
v_80:
    v_180 = nil;
    setvalue(basic_elt(env, 6), v_180); // dmode!*
    v_180 = nil;
    v_180 = ncons(v_180);
    env = stack[-7];
    setvalue(basic_elt(env, 11), v_180); // alglist!*
    v_180 = stack[-5];
    {   LispObject fn = basic_elt(env, 18); // prepf
    v_180 = (*qfn1(fn))(fn, v_180);
    }
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 19); // simp
    v_180 = (*qfn1(fn))(fn, v_180);
    }
    env = stack[-7];
    stack[0] = v_180;
    v_180 = stack[0];
    if (!car_legal(v_180)) v_180 = cdrerror(v_180); else
    v_180 = cdr(v_180);
    if (!consp(v_180)) goto v_92;
    else goto v_93;
v_92:
    v_180 = stack[0];
    if (!car_legal(v_180)) v_180 = cdrerror(v_180); else
    v_180 = cdr(v_180);
    stack[-1] = v_180;
    v_180 = stack[0];
    if (!car_legal(v_180)) v_180 = carerror(v_180); else
    v_180 = car(v_180);
    stack[-5] = v_180;
    goto v_91;
v_93:
    v_180 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-1] = v_180;
    goto v_91;
v_91:
    goto v_79;
v_81:
v_79:
    v_180 = qvalue(basic_elt(env, 2)); // ncmp!*
    if (v_180 == nil) goto v_105;
    else goto v_106;
v_105:
    v_180 = stack[-5];
    {   LispObject fn = basic_elt(env, 20); // sf2ss
    v_180 = (*qfn1(fn))(fn, v_180);
    }
    env = stack[-7];
    stack[0] = v_180;
    v_180 = stack[0];
    {   LispObject fn = basic_elt(env, 21); // homogp
    v_180 = (*qfn1(fn))(fn, v_180);
    }
    env = stack[-7];
    if (v_180 == nil) goto v_113;
    v_180 = qvalue(basic_elt(env, 12)); // !*trfac
    if (v_180 == nil) goto v_119;
    v_180 = basic_elt(env, 13); // "This polynomial is homogeneous - variables scaled"
    {   LispObject fn = basic_elt(env, 22); // prin2t
    v_180 = (*qfn1(fn))(fn, v_180);
    }
    env = stack[-7];
    goto v_117;
v_119:
v_117:
    v_180 = stack[0];
    if (!car_legal(v_180)) v_180 = carerror(v_180); else
    v_180 = car(v_180);
    if (!car_legal(v_180)) v_180 = carerror(v_180); else
    v_180 = car(v_180);
    if (!car_legal(v_180)) stack[-1] = carerror(v_180); else
    stack[-1] = car(v_180);
    v_180 = stack[0];
    if (!car_legal(v_180)) v_180 = cdrerror(v_180); else
    v_180 = cdr(v_180);
    if (!car_legal(v_180)) v_180 = carerror(v_180); else
    v_180 = car(v_180);
    if (!car_legal(v_180)) v_180 = carerror(v_180); else
    v_180 = car(v_180);
    if (!car_legal(v_180)) v_180 = carerror(v_180); else
    v_180 = car(v_180);
    {   LispObject fn = basic_elt(env, 23); // listsum
    v_180 = (*qfn1(fn))(fn, v_180);
    }
    env = stack[-7];
    v_180 = cons(stack[-1], v_180);
    env = stack[-7];
    stack[-5] = v_180;
    v_180 = stack[0];
    if (!car_legal(v_180)) stack[-1] = carerror(v_180); else
    stack[-1] = car(v_180);
    v_180 = stack[0];
    if (!car_legal(v_180)) v_180 = cdrerror(v_180); else
    v_180 = cdr(v_180);
    if (!car_legal(v_180)) v_180 = carerror(v_180); else
    v_180 = car(v_180);
    {   LispObject fn = basic_elt(env, 24); // subs0
    v_180 = (*qfn1(fn))(fn, v_180);
    }
    env = stack[-7];
    v_181 = Lreverse(nil, v_180);
    env = stack[-7];
    v_180 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_180 = list2star(stack[-1], v_181, v_180);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 25); // ss2sf
    v_180 = (*qfn1(fn))(fn, v_180);
    }
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 26); // fctrf1
    v_180 = (*qfn1(fn))(fn, v_180);
    }
    env = stack[-7];
    stack[0] = v_180;
    v_181 = stack[-5];
    v_180 = stack[0];
    {   LispObject fn = basic_elt(env, 27); // rconst
    v_180 = (*qfn2(fn))(fn, v_181, v_180);
    }
    env = stack[-7];
    stack[0] = v_180;
    v_180 = stack[0];
    if (!car_legal(v_180)) stack[-1] = carerror(v_180); else
    stack[-1] = car(v_180);
    v_180 = stack[0];
    if (!car_legal(v_180)) v_180 = cdrerror(v_180); else
    v_180 = cdr(v_180);
    {   LispObject fn = basic_elt(env, 28); // sort!-factors
    v_180 = (*qfn1(fn))(fn, v_180);
    }
    env = stack[-7];
    v_180 = cons(stack[-1], v_180);
    goto v_18;
v_113:
    goto v_104;
v_106:
v_104:
    v_180 = stack[-5];
    {   LispObject fn = basic_elt(env, 26); // fctrf1
    v_180 = (*qfn1(fn))(fn, v_180);
    }
    env = stack[-7];
    stack[-5] = v_180;
    v_180 = stack[-1];
    if (v_180 == nil) goto v_159;
    v_180 = nil;
    v_180 = ncons(v_180);
    env = stack[-7];
    setvalue(basic_elt(env, 11), v_180); // alglist!*
    v_180 = basic_elt(env, 10); // !:rn!:
    setvalue(basic_elt(env, 6), v_180); // dmode!*
    stack[0] = stack[-5];
    v_180 = stack[-5];
    if (!car_legal(v_180)) v_181 = carerror(v_180); else
    v_181 = car(v_180);
    v_180 = stack[-1];
    {   LispObject fn = basic_elt(env, 29); // quotf!*
    v_180 = (*qfn2(fn))(fn, v_181, v_180);
    }
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 30); // setcar
    v_180 = (*qfn2(fn))(fn, stack[0], v_180);
    }
    env = stack[-7];
    goto v_157;
v_159:
v_157:
    v_180 = stack[-5];
    if (!car_legal(v_180)) stack[0] = carerror(v_180); else
    stack[0] = car(v_180);
    v_180 = stack[-5];
    if (!car_legal(v_180)) v_180 = cdrerror(v_180); else
    v_180 = cdr(v_180);
    {   LispObject fn = basic_elt(env, 28); // sort!-factors
    v_180 = (*qfn1(fn))(fn, v_180);
    }
    env = stack[-7];
    v_180 = cons(stack[0], v_180);
v_18:
    ;}  // end of a binding scope
    ;}  // end of a binding scope
    ;}  // end of a binding scope
    ;}  // end of a binding scope
    return onevalue(v_180);
}



// Code for ev_insert

static LispObject CC_ev_insert(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_48, v_49, v_50;
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
    stack[-3] = v_2;
// end of prologue
    v_50 = nil;
v_10:
    v_48 = stack[-3];
    if (v_48 == nil) goto v_17;
    else goto v_18;
v_17:
    v_48 = lisp_true;
    goto v_16;
v_18:
    v_48 = stack[0];
    v_48 = (v_48 == nil ? lisp_true : nil);
    goto v_16;
    v_48 = nil;
v_16:
    if (v_48 == nil) goto v_14;
    v_48 = v_50;
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn1(fn))(fn, v_48);
    }
v_14:
    v_48 = stack[0];
    if (!car_legal(v_48)) v_49 = carerror(v_48); else
    v_49 = car(v_48);
    v_48 = stack[-2];
    if (v_49 == v_48) goto v_27;
    else goto v_28;
v_27:
    stack[0] = v_50;
    v_49 = stack[-1];
    v_48 = stack[-3];
    if (!car_legal(v_48)) v_48 = cdrerror(v_48); else
    v_48 = cdr(v_48);
    v_48 = cons(v_49, v_48);
    env = stack[-4];
    {
        LispObject v_55 = stack[0];
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn2(fn))(fn, v_55, v_48);
    }
v_28:
    v_48 = stack[-3];
    if (!car_legal(v_48)) v_48 = carerror(v_48); else
    v_48 = car(v_48);
    v_49 = v_50;
    v_48 = cons(v_48, v_49);
    env = stack[-4];
    v_50 = v_48;
    v_48 = stack[-3];
    if (!car_legal(v_48)) v_48 = cdrerror(v_48); else
    v_48 = cdr(v_48);
    stack[-3] = v_48;
    v_48 = stack[0];
    if (!car_legal(v_48)) v_48 = cdrerror(v_48); else
    v_48 = cdr(v_48);
    stack[0] = v_48;
    goto v_10;
    v_48 = nil;
    return onevalue(v_48);
}



// Code for testpr

static LispObject CC_testpr(LispObject env, LispObject v_2,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(9);
// copy arguments values to proper place
    stack[-5] = v_5;
    stack[-6] = v_4;
    stack[0] = v_3;
    v_92 = v_2;
// end of prologue
    stack[-3] = nil;
    v_93 = qvalue(basic_elt(env, 1)); // jsi
    stack[-2] = v_93;
    stack[-1] = qvalue(basic_elt(env, 2)); // codmat
    v_93 = qvalue(basic_elt(env, 3)); // maxvar
    v_92 = plus2(v_93, v_92);
    env = stack[-8];
    v_93 = Lgetv(nil, stack[-1], v_92);
    env = stack[-8];
    v_92 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_92 = Lgetv(nil, v_93, v_92);
    env = stack[-8];
    stack[-7] = v_92;
    stack[-1] = qvalue(basic_elt(env, 2)); // codmat
    v_93 = qvalue(basic_elt(env, 3)); // maxvar
    v_92 = stack[0];
    v_92 = plus2(v_93, v_92);
    env = stack[-8];
    v_93 = Lgetv(nil, stack[-1], v_92);
    env = stack[-8];
    v_92 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_92 = Lgetv(nil, v_93, v_92);
    env = stack[-8];
    stack[-4] = v_92;
v_33:
    v_92 = stack[-2];
    if (v_92 == nil) goto v_36;
    v_92 = stack[-7];
    if (v_92 == nil) goto v_36;
    goto v_37;
v_36:
    goto v_32;
v_37:
    v_92 = stack[-2];
    if (!car_legal(v_92)) v_93 = carerror(v_92); else
    v_93 = car(v_92);
    stack[-1] = v_93;
    v_92 = stack[-7];
    if (!car_legal(v_92)) v_92 = carerror(v_92); else
    v_92 = car(v_92);
    if (!car_legal(v_92)) v_92 = carerror(v_92); else
    v_92 = car(v_92);
    v_94 = v_92;
    if (equal(v_93, v_92)) goto v_45;
    else goto v_46;
v_45:
    v_93 = stack[-1];
    v_92 = stack[-4];
    {   LispObject fn = basic_elt(env, 4); // pnthxzz
    v_92 = (*qfn2(fn))(fn, v_93, v_92);
    }
    env = stack[-8];
    stack[-4] = v_92;
    v_92 = stack[-7];
    if (!car_legal(v_92)) v_92 = carerror(v_92); else
    v_92 = car(v_92);
    if (!car_legal(v_92)) v_92 = cdrerror(v_92); else
    v_92 = cdr(v_92);
    if (!car_legal(v_92)) v_93 = carerror(v_92); else
    v_93 = car(v_92);
    v_92 = stack[-5];
    {   LispObject fn = basic_elt(env, 5); // dm!-times
    stack[0] = (*qfn2(fn))(fn, v_93, v_92);
    }
    env = stack[-8];
    v_92 = stack[-4];
    if (!car_legal(v_92)) v_92 = carerror(v_92); else
    v_92 = car(v_92);
    if (!car_legal(v_92)) v_92 = cdrerror(v_92); else
    v_92 = cdr(v_92);
    if (!car_legal(v_92)) v_93 = carerror(v_92); else
    v_93 = car(v_92);
    v_92 = stack[-6];
    {   LispObject fn = basic_elt(env, 5); // dm!-times
    v_92 = (*qfn2(fn))(fn, v_93, v_92);
    }
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 6); // dm!-difference
    v_92 = (*qfn2(fn))(fn, stack[0], v_92);
    }
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 7); // zeropp
    v_92 = (*qfn1(fn))(fn, v_92);
    }
    env = stack[-8];
    if (v_92 == nil) goto v_58;
    v_93 = stack[-1];
    v_92 = stack[-3];
    v_92 = cons(v_93, v_92);
    env = stack[-8];
    stack[-3] = v_92;
    goto v_56;
v_58:
v_56:
    v_92 = stack[-2];
    if (!car_legal(v_92)) v_92 = cdrerror(v_92); else
    v_92 = cdr(v_92);
    stack[-2] = v_92;
    v_92 = stack[-7];
    if (!car_legal(v_92)) v_92 = cdrerror(v_92); else
    v_92 = cdr(v_92);
    stack[-7] = v_92;
    goto v_44;
v_46:
    v_92 = stack[-1];
    v_93 = v_94;
    v_92 = static_cast<LispObject>(greaterp2(v_92, v_93));
    v_92 = v_92 ? lisp_true : nil;
    env = stack[-8];
    if (v_92 == nil) goto v_81;
    v_92 = stack[-7];
    if (!car_legal(v_92)) v_92 = cdrerror(v_92); else
    v_92 = cdr(v_92);
    stack[-7] = v_92;
    goto v_44;
v_81:
    v_92 = stack[-2];
    if (!car_legal(v_92)) v_92 = cdrerror(v_92); else
    v_92 = cdr(v_92);
    stack[-2] = v_92;
    goto v_44;
v_44:
    goto v_33;
v_32:
    v_92 = stack[-3];
    return onevalue(v_92);
}



// Code for embed!-null!-fn

static LispObject CC_embedKnullKfn(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_93, v_94, v_95;
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
    v_94 = v_2;
// end of prologue
    v_93 = v_94;
    if (!consp(v_93)) goto v_6;
    else goto v_7;
v_6:
    v_93 = v_94;
    goto v_5;
v_7:
    v_93 = v_94;
    stack[-3] = v_93;
v_17:
    v_93 = stack[-3];
    if (v_93 == nil) goto v_22;
    else goto v_23;
v_22:
    v_93 = nil;
    goto v_16;
v_23:
    v_93 = stack[-3];
    if (!car_legal(v_93)) v_93 = carerror(v_93); else
    v_93 = car(v_93);
    v_95 = v_93;
    v_93 = v_95;
    if (!consp(v_93)) goto v_31;
    else goto v_32;
v_31:
    v_93 = v_95;
    v_93 = ncons(v_93);
    env = stack[-4];
    goto v_30;
v_32:
    v_93 = v_95;
    if (!car_legal(v_93)) v_94 = carerror(v_93); else
    v_94 = car(v_93);
    v_93 = basic_elt(env, 1); // null!-fn
    if (v_94 == v_93) goto v_36;
    else goto v_37;
v_36:
    v_93 = v_95;
    if (!car_legal(v_93)) v_93 = cdrerror(v_93); else
    v_93 = cdr(v_93);
    {   LispObject fn = basic_elt(env, 0); // embed!-null!-fn
    v_93 = (*qfn1(fn))(fn, v_93);
    }
    env = stack[-4];
    goto v_30;
v_37:
    v_93 = v_95;
    {   LispObject fn = basic_elt(env, 0); // embed!-null!-fn
    v_93 = (*qfn1(fn))(fn, v_93);
    }
    env = stack[-4];
    v_93 = ncons(v_93);
    env = stack[-4];
    goto v_30;
    v_93 = nil;
v_30:
    stack[-2] = v_93;
    v_93 = stack[-2];
    {   LispObject fn = basic_elt(env, 2); // lastpair
    v_93 = (*qfn1(fn))(fn, v_93);
    }
    env = stack[-4];
    stack[-1] = v_93;
    v_93 = stack[-3];
    if (!car_legal(v_93)) v_93 = cdrerror(v_93); else
    v_93 = cdr(v_93);
    stack[-3] = v_93;
    v_93 = stack[-1];
    if (!consp(v_93)) goto v_55;
    else goto v_56;
v_55:
    goto v_17;
v_56:
v_18:
    v_93 = stack[-3];
    if (v_93 == nil) goto v_60;
    else goto v_61;
v_60:
    v_93 = stack[-2];
    goto v_16;
v_61:
    stack[0] = stack[-1];
    v_93 = stack[-3];
    if (!car_legal(v_93)) v_93 = carerror(v_93); else
    v_93 = car(v_93);
    v_95 = v_93;
    v_93 = v_95;
    if (!consp(v_93)) goto v_70;
    else goto v_71;
v_70:
    v_93 = v_95;
    v_93 = ncons(v_93);
    env = stack[-4];
    goto v_69;
v_71:
    v_93 = v_95;
    if (!car_legal(v_93)) v_94 = carerror(v_93); else
    v_94 = car(v_93);
    v_93 = basic_elt(env, 1); // null!-fn
    if (v_94 == v_93) goto v_75;
    else goto v_76;
v_75:
    v_93 = v_95;
    if (!car_legal(v_93)) v_93 = cdrerror(v_93); else
    v_93 = cdr(v_93);
    {   LispObject fn = basic_elt(env, 0); // embed!-null!-fn
    v_93 = (*qfn1(fn))(fn, v_93);
    }
    env = stack[-4];
    goto v_69;
v_76:
    v_93 = v_95;
    {   LispObject fn = basic_elt(env, 0); // embed!-null!-fn
    v_93 = (*qfn1(fn))(fn, v_93);
    }
    env = stack[-4];
    v_93 = ncons(v_93);
    env = stack[-4];
    goto v_69;
    v_93 = nil;
v_69:
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_93);
    v_93 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // lastpair
    v_93 = (*qfn1(fn))(fn, v_93);
    }
    env = stack[-4];
    stack[-1] = v_93;
    v_93 = stack[-3];
    if (!car_legal(v_93)) v_93 = cdrerror(v_93); else
    v_93 = cdr(v_93);
    stack[-3] = v_93;
    goto v_18;
v_16:
    goto v_5;
    v_93 = nil;
v_5:
    return onevalue(v_93);
}



// Code for vdpcondense

static LispObject CC_vdpcondense(LispObject env,
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
        LispObject fn = basic_elt(env, 1); // dipcondense
        return (*qfn1(fn))(fn, v_10);
    }
}



// Code for subla!-q

static LispObject CC_sublaKq(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_124, v_125;
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
    v_124 = stack[-1];
    if (v_124 == nil) goto v_14;
    else goto v_15;
v_14:
    v_124 = lisp_true;
    goto v_13;
v_15:
    v_124 = stack[0];
    v_124 = (v_124 == nil ? lisp_true : nil);
    goto v_13;
    v_124 = nil;
v_13:
    if (v_124 == nil) goto v_11;
    v_124 = stack[0];
    goto v_7;
v_11:
    v_124 = stack[0];
    if (!consp(v_124)) goto v_23;
    else goto v_24;
v_23:
    v_125 = stack[0];
    v_124 = stack[-1];
    v_125 = Latsoc(nil, v_125, v_124);
    v_124 = v_125;
    if (v_125 == nil) goto v_29;
    if (!car_legal(v_124)) v_124 = cdrerror(v_124); else
    v_124 = cdr(v_124);
    goto v_27;
v_29:
    v_124 = stack[0];
    goto v_27;
    v_124 = nil;
v_27:
    goto v_7;
v_24:
    v_124 = stack[0];
    if (!car_legal(v_124)) v_125 = carerror(v_124); else
    v_125 = car(v_124);
    v_124 = basic_elt(env, 1); // quote
    if (v_125 == v_124) goto v_42;
    else goto v_43;
v_42:
    v_124 = lisp_true;
    goto v_41;
v_43:
    v_124 = stack[0];
    if (!car_legal(v_124)) v_125 = carerror(v_124); else
    v_125 = car(v_124);
    v_124 = basic_elt(env, 2); // go
    v_124 = (v_125 == v_124 ? lisp_true : nil);
    goto v_41;
    v_124 = nil;
v_41:
    if (v_124 == nil) goto v_39;
    v_124 = stack[0];
    goto v_7;
v_39:
    v_125 = stack[0];
    v_124 = basic_elt(env, 3); // lambda
    if (!consp(v_125)) goto v_64;
    v_125 = car(v_125);
    if (v_125 == v_124) goto v_63;
    else goto v_64;
v_63:
    v_124 = lisp_true;
    goto v_62;
v_64:
    v_125 = stack[0];
    v_124 = basic_elt(env, 4); // prog
    v_124 = Leqcar(nil, v_125, v_124);
    env = stack[-3];
    goto v_62;
    v_124 = nil;
v_62:
    if (v_124 == nil) goto v_60;
    v_124 = stack[0];
    if (!car_legal(v_124)) v_124 = cdrerror(v_124); else
    v_124 = cdr(v_124);
    v_124 = (consp(v_124) ? nil : lisp_true);
    v_124 = (v_124 == nil ? lisp_true : nil);
    goto v_58;
v_60:
    v_124 = nil;
    goto v_58;
    v_124 = nil;
v_58:
    if (v_124 == nil) goto v_56;
    v_124 = stack[0];
    if (!car_legal(v_124)) v_124 = cdrerror(v_124); else
    v_124 = cdr(v_124);
    if (!car_legal(v_124)) v_124 = carerror(v_124); else
    v_124 = car(v_124);
    stack[-2] = v_124;
v_87:
    v_124 = stack[-2];
    if (v_124 == nil) goto v_91;
    else goto v_92;
v_91:
    goto v_86;
v_92:
    v_124 = stack[-2];
    if (!car_legal(v_124)) v_124 = carerror(v_124); else
    v_124 = car(v_124);
    v_125 = v_124;
    v_124 = stack[-1];
    {   LispObject fn = basic_elt(env, 5); // delasc
    v_124 = (*qfn2(fn))(fn, v_125, v_124);
    }
    env = stack[-3];
    stack[-1] = v_124;
    v_124 = stack[-2];
    if (!car_legal(v_124)) v_124 = cdrerror(v_124); else
    v_124 = cdr(v_124);
    stack[-2] = v_124;
    goto v_87;
v_86:
    v_125 = stack[-1];
    v_124 = stack[0];
    if (!car_legal(v_124)) v_124 = carerror(v_124); else
    v_124 = car(v_124);
    {   LispObject fn = basic_elt(env, 0); // subla!-q
    stack[-2] = (*qfn2(fn))(fn, v_125, v_124);
    }
    env = stack[-3];
    v_125 = stack[-1];
    v_124 = stack[0];
    if (!car_legal(v_124)) v_124 = cdrerror(v_124); else
    v_124 = cdr(v_124);
    {   LispObject fn = basic_elt(env, 0); // subla!-q
    v_124 = (*qfn2(fn))(fn, v_125, v_124);
    }
    {
        LispObject v_129 = stack[-2];
        return cons(v_129, v_124);
    }
v_56:
    v_125 = stack[-1];
    v_124 = stack[0];
    if (!car_legal(v_124)) v_124 = carerror(v_124); else
    v_124 = car(v_124);
    {   LispObject fn = basic_elt(env, 0); // subla!-q
    stack[-2] = (*qfn2(fn))(fn, v_125, v_124);
    }
    env = stack[-3];
    v_125 = stack[-1];
    v_124 = stack[0];
    if (!car_legal(v_124)) v_124 = cdrerror(v_124); else
    v_124 = cdr(v_124);
    {   LispObject fn = basic_elt(env, 0); // subla!-q
    v_124 = (*qfn2(fn))(fn, v_125, v_124);
    }
    {
        LispObject v_130 = stack[-2];
        return cons(v_130, v_124);
    }
    v_124 = nil;
v_7:
    return onevalue(v_124);
}



// Code for changearg

static LispObject CC_changearg(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    stack[-3] = nil;
v_9:
    v_41 = stack[0];
    if (!consp(v_41)) goto v_12;
    else goto v_13;
v_12:
    v_42 = stack[-3];
    v_41 = stack[0];
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn2(fn))(fn, v_42, v_41);
    }
v_13:
    v_41 = stack[0];
    if (!car_legal(v_41)) v_42 = carerror(v_41); else
    v_42 = car(v_41);
    v_41 = stack[-2];
    v_41 = Lmemq(nil, v_42, v_41);
    if (v_41 == nil) goto v_19;
    stack[-2] = stack[-3];
    v_41 = stack[0];
    if (!car_legal(v_41)) v_42 = carerror(v_41); else
    v_42 = car(v_41);
    v_41 = stack[-1];
    v_41 = cons(v_42, v_41);
    env = stack[-4];
    {
        LispObject v_48 = stack[-2];
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn2(fn))(fn, v_48, v_41);
    }
v_19:
    v_43 = stack[-2];
    v_42 = stack[-1];
    v_41 = stack[0];
    if (!car_legal(v_41)) v_41 = carerror(v_41); else
    v_41 = car(v_41);
    {   LispObject fn = basic_elt(env, 0); // changearg
    v_42 = (*qfn3(fn))(fn, v_43, v_42, v_41);
    }
    env = stack[-4];
    v_41 = stack[-3];
    v_41 = cons(v_42, v_41);
    env = stack[-4];
    stack[-3] = v_41;
    v_41 = stack[0];
    if (!car_legal(v_41)) v_41 = cdrerror(v_41); else
    v_41 = cdr(v_41);
    stack[0] = v_41;
    goto v_9;
    v_41 = nil;
    return onevalue(v_41);
}



// Code for cons_ordp

static LispObject CC_cons_ordp(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_61, v_62, v_63, v_64, v_65;
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
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_62 = v_4;
    v_63 = v_3;
    v_64 = v_2;
// end of prologue
v_8:
    v_61 = v_64;
    if (v_61 == nil) goto v_11;
    else goto v_12;
v_11:
    v_61 = lisp_true;
    goto v_7;
v_12:
    v_61 = v_63;
    if (v_61 == nil) goto v_15;
    else goto v_16;
v_15:
    v_61 = nil;
    goto v_7;
v_16:
    v_61 = v_64;
    v_61 = Lconsp(nil, v_61);
    env = stack[0];
    if (v_61 == nil) goto v_20;
    v_61 = v_63;
    v_61 = Lconsp(nil, v_61);
    env = stack[0];
    if (v_61 == nil) goto v_26;
    v_61 = v_64;
    if (!car_legal(v_61)) v_65 = carerror(v_61); else
    v_65 = car(v_61);
    v_61 = v_63;
    if (!car_legal(v_61)) v_61 = carerror(v_61); else
    v_61 = car(v_61);
    if (equal(v_65, v_61)) goto v_31;
    else goto v_32;
v_31:
    v_61 = v_64;
    if (!car_legal(v_61)) v_61 = cdrerror(v_61); else
    v_61 = cdr(v_61);
    v_64 = v_61;
    v_61 = v_63;
    if (!car_legal(v_61)) v_61 = cdrerror(v_61); else
    v_61 = cdr(v_61);
    v_63 = v_61;
    goto v_8;
v_32:
    v_61 = v_64;
    if (!car_legal(v_61)) v_61 = carerror(v_61); else
    v_61 = car(v_61);
    v_64 = v_61;
    v_61 = v_63;
    if (!car_legal(v_61)) v_61 = carerror(v_61); else
    v_61 = car(v_61);
    v_63 = v_61;
    goto v_8;
    goto v_24;
v_26:
    v_61 = nil;
    goto v_7;
v_24:
    goto v_10;
v_20:
    v_61 = v_63;
    v_61 = Lconsp(nil, v_61);
    if (v_61 == nil) goto v_51;
    v_61 = lisp_true;
    goto v_7;
v_51:
    v_61 = v_62;
    v_62 = v_64;
        return Lapply2(nil, v_61, v_62, v_63);
v_10:
    v_61 = nil;
v_7:
    return onevalue(v_61);
}



// Code for general!-ordered!-gcd!-mod!-p

static LispObject CC_generalKorderedKgcdKmodKp(LispObject env,
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
    {   LispObject fn = basic_elt(env, 2); // general!-reduce!-degree!-mod!-p
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
        LispObject fn = basic_elt(env, 3); // general!-monic!-mod!-p
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



// Code for gcref_off

static LispObject CC_gcref_off(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil, nil, nil, nil, nil);
    stack_popper stack_popper_var(6);
// end of prologue
    {   LispObject fn = basic_elt(env, 7); // gcref_off1
    v_78 = (*qfn0(fn))(fn);
    }
    env = stack[-5];
    v_79 = Ltime(nil);
    env = stack[-5];
    v_78 = qvalue(basic_elt(env, 1)); // btime!*
    v_78 = difference2(v_79, v_78);
    env = stack[-5];
    v_78 = qvalue(basic_elt(env, 2)); // pfiles!*
    stack[-4] = v_78;
    v_78 = stack[-4];
    if (v_78 == nil) goto v_19;
    else goto v_20;
v_19:
    v_78 = nil;
    goto v_14;
v_20:
    v_78 = stack[-4];
    if (!car_legal(v_78)) v_78 = carerror(v_78); else
    v_78 = car(v_78);
    stack[0] = v_78;
    v_78 = stack[0];
    if (!car_legal(v_78)) v_80 = cdrerror(v_78); else
    v_80 = cdr(v_78);
    v_79 = basic_elt(env, 3); // cref_name
    v_78 = stack[0];
    if (!car_legal(v_78)) v_78 = carerror(v_78); else
    v_78 = car(v_78);
    v_78 = Lputprop(nil, v_80, v_79, v_78);
    env = stack[-5];
    v_78 = stack[0];
    if (!car_legal(v_78)) v_78 = cdrerror(v_78); else
    v_78 = cdr(v_78);
    v_78 = ncons(v_78);
    env = stack[-5];
    stack[-2] = v_78;
    stack[-3] = v_78;
v_15:
    v_78 = stack[-4];
    if (!car_legal(v_78)) v_78 = cdrerror(v_78); else
    v_78 = cdr(v_78);
    stack[-4] = v_78;
    v_78 = stack[-4];
    if (v_78 == nil) goto v_39;
    else goto v_40;
v_39:
    v_78 = stack[-3];
    goto v_14;
v_40:
    stack[-1] = stack[-2];
    v_78 = stack[-4];
    if (!car_legal(v_78)) v_78 = carerror(v_78); else
    v_78 = car(v_78);
    stack[0] = v_78;
    v_78 = stack[0];
    if (!car_legal(v_78)) v_80 = cdrerror(v_78); else
    v_80 = cdr(v_78);
    v_79 = basic_elt(env, 3); // cref_name
    v_78 = stack[0];
    if (!car_legal(v_78)) v_78 = carerror(v_78); else
    v_78 = car(v_78);
    v_78 = Lputprop(nil, v_80, v_79, v_78);
    env = stack[-5];
    v_78 = stack[0];
    if (!car_legal(v_78)) v_78 = cdrerror(v_78); else
    v_78 = cdr(v_78);
    v_78 = ncons(v_78);
    env = stack[-5];
    if (!car_legal(stack[-1])) rplacd_fails(stack[-1]);
    setcdr(stack[-1], v_78);
    v_78 = stack[-2];
    if (!car_legal(v_78)) v_78 = cdrerror(v_78); else
    v_78 = cdr(v_78);
    stack[-2] = v_78;
    goto v_15;
v_14:
    setvalue(basic_elt(env, 2), v_78); // pfiles!*
    v_78 = qvalue(basic_elt(env, 4)); // !*gcrefall
    if (v_78 == nil) goto v_62;
    v_78 = qvalue(basic_elt(env, 5)); // seen!*
    {   LispObject fn = basic_elt(env, 8); // gcref_select
    v_78 = (*qfn1(fn))(fn, v_78);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 9); // gcref_mkgraph
    v_78 = (*qfn1(fn))(fn, v_78);
    }
    env = stack[-5];
    goto v_60;
v_62:
    v_78 = qvalue(basic_elt(env, 5)); // seen!*
    {   LispObject fn = basic_elt(env, 10); // gcref_eselect
    v_78 = (*qfn1(fn))(fn, v_78);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 11); // gcref_mkegraph
    v_78 = (*qfn1(fn))(fn, v_78);
    }
    env = stack[-5];
    goto v_60;
v_60:
    v_78 = qvalue(basic_elt(env, 6)); // !*saveprops
    if (v_78 == nil) goto v_74;
    else goto v_75;
v_74:
    {   LispObject fn = basic_elt(env, 12); // gcref_remprops
    v_78 = (*qfn0(fn))(fn);
    }
    goto v_73;
v_75:
v_73:
    v_78 = nil;
    return onevalue(v_78);
}



// Code for checku

static LispObject CC_checku(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_29, v_30, v_31, v_32;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_30 = v_3;
    v_31 = v_2;
// end of prologue
v_1:
    v_29 = v_31;
    if (v_29 == nil) goto v_7;
    else goto v_8;
v_7:
    v_29 = nil;
    goto v_6;
v_8:
    v_29 = v_30;
    if (!car_legal(v_29)) v_32 = carerror(v_29); else
    v_32 = car(v_29);
    v_29 = v_31;
    if (!car_legal(v_29)) v_29 = carerror(v_29); else
    v_29 = car(v_29);
    if (!car_legal(v_29)) v_29 = carerror(v_29); else
    v_29 = car(v_29);
    if (equal(v_32, v_29)) goto v_15;
    else goto v_16;
v_15:
    v_29 = lisp_true;
    goto v_14;
v_16:
    v_29 = v_31;
    if (!car_legal(v_29)) v_31 = cdrerror(v_29); else
    v_31 = cdr(v_29);
    v_29 = v_30;
    v_30 = v_29;
    goto v_1;
    v_29 = nil;
v_14:
    goto v_6;
    v_29 = nil;
v_6:
    return onevalue(v_29);
}



// Code for make!-modular!-symmetric

static LispObject CC_makeKmodularKsymmetric(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_62, v_63, v_64;
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
    v_62 = stack[0];
    if (v_62 == nil) goto v_6;
    else goto v_7;
v_6:
    v_62 = nil;
    goto v_5;
v_7:
    v_62 = stack[0];
    if (!consp(v_62)) goto v_14;
    else goto v_15;
v_14:
    v_62 = lisp_true;
    goto v_13;
v_15:
    v_62 = stack[0];
    if (!car_legal(v_62)) v_62 = carerror(v_62); else
    v_62 = car(v_62);
    v_62 = (consp(v_62) ? nil : lisp_true);
    goto v_13;
    v_62 = nil;
v_13:
    if (v_62 == nil) goto v_11;
    v_63 = stack[0];
    v_62 = qvalue(basic_elt(env, 1)); // modulus!/2
    v_62 = static_cast<LispObject>(greaterp2(v_63, v_62));
    v_62 = v_62 ? lisp_true : nil;
    env = stack[-2];
    if (v_62 == nil) goto v_26;
    v_63 = stack[0];
    v_62 = qvalue(basic_elt(env, 2)); // current!-modulus
    v_62 = difference2(v_63, v_62);
    env = stack[-2];
    {
        LispObject fn = basic_elt(env, 3); // !*n2f
        return (*qfn1(fn))(fn, v_62);
    }
v_26:
    v_62 = stack[0];
    goto v_24;
    v_62 = nil;
v_24:
    goto v_5;
v_11:
    v_62 = stack[0];
    if (!car_legal(v_62)) v_62 = carerror(v_62); else
    v_62 = car(v_62);
    if (!car_legal(v_62)) v_62 = cdrerror(v_62); else
    v_62 = cdr(v_62);
    {   LispObject fn = basic_elt(env, 0); // make!-modular!-symmetric
    stack[-1] = (*qfn1(fn))(fn, v_62);
    }
    env = stack[-2];
    v_62 = stack[0];
    if (!car_legal(v_62)) v_62 = cdrerror(v_62); else
    v_62 = cdr(v_62);
    {   LispObject fn = basic_elt(env, 0); // make!-modular!-symmetric
    v_62 = (*qfn1(fn))(fn, v_62);
    }
    v_63 = stack[-1];
    v_64 = v_63;
    if (v_64 == nil) goto v_50;
    else goto v_51;
v_50:
    goto v_49;
v_51:
    v_64 = stack[0];
    if (!car_legal(v_64)) v_64 = carerror(v_64); else
    v_64 = car(v_64);
    if (!car_legal(v_64)) v_64 = carerror(v_64); else
    v_64 = car(v_64);
    return acons(v_64, v_63, v_62);
    v_62 = nil;
v_49:
    goto v_5;
    v_62 = nil;
v_5:
    return onevalue(v_62);
}



// Code for opfneval1

static LispObject CC_opfneval1(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_166, v_167, v_168, v_169;
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
    v_167 = stack[-4];
    v_166 = basic_elt(env, 1); // tracealg
    v_166 = Lflagp(nil, v_167, v_166);
    env = stack[-6];
    if (v_166 == nil) goto v_12;
    v_167 = Lposn(nil);
    env = stack[-6];
    v_166 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_167 == v_166) goto v_19;
    v_166 = Lterpri(nil);
    env = stack[-6];
    goto v_17;
v_19:
v_17:
    stack[0] = basic_elt(env, 2); // "+++ Calling %p (%w:%w)%n"
    v_169 = stack[-4];
    v_167 = stack[-4];
    v_166 = basic_elt(env, 3); // defined!-in!-file
    v_168 = get(v_167, v_166);
    env = stack[-6];
    v_167 = stack[-4];
    v_166 = basic_elt(env, 4); // defined!-on!-line
    v_166 = get(v_167, v_166);
    env = stack[-6];
    v_166 = list3(v_169, v_168, v_166);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 11); // printf_internal
    v_166 = (*qfn2(fn))(fn, stack[0], v_166);
    }
    env = stack[-6];
    v_166 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-5] = v_166;
    v_166 = stack[-3];
    stack[-2] = v_166;
v_37:
    v_166 = stack[-2];
    if (v_166 == nil) goto v_41;
    else goto v_42;
v_41:
    goto v_36;
v_42:
    v_166 = stack[-2];
    if (!car_legal(v_166)) v_166 = carerror(v_166); else
    v_166 = car(v_166);
    stack[-1] = v_166;
    stack[0] = basic_elt(env, 5); // "Arg%w = %@p%n"
    v_166 = stack[-5];
    v_168 = add1(v_166);
    env = stack[-6];
    stack[-5] = v_168;
    v_167 = stack[-1];
    v_166 = basic_elt(env, 6); // quote
    if (!consp(v_167)) goto v_56;
    v_167 = car(v_167);
    if (v_167 == v_166) goto v_55;
    else goto v_56;
v_55:
    v_166 = stack[-1];
    if (!car_legal(v_166)) v_166 = cdrerror(v_166); else
    v_166 = cdr(v_166);
    if (!car_legal(v_166)) v_166 = carerror(v_166); else
    v_166 = car(v_166);
    goto v_54;
v_56:
    v_166 = stack[-1];
    goto v_54;
    v_166 = nil;
v_54:
    v_166 = list2(v_168, v_166);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 11); // printf_internal
    v_166 = (*qfn2(fn))(fn, stack[0], v_166);
    }
    env = stack[-6];
    v_166 = stack[-2];
    if (!car_legal(v_166)) v_166 = cdrerror(v_166); else
    v_166 = cdr(v_166);
    stack[-2] = v_166;
    goto v_37;
v_36:
    goto v_10;
v_12:
v_10:
    v_167 = stack[-4];
    v_166 = stack[-3];
    v_167 = cons(v_167, v_166);
    env = stack[-6];
    v_166 = qvalue(basic_elt(env, 7)); // !*backtrace
    {   LispObject fn = basic_elt(env, 12); // errorset!*
    v_166 = (*qfn2(fn))(fn, v_167, v_166);
    }
    env = stack[-6];
    stack[0] = v_166;
    v_166 = stack[0];
    {   LispObject fn = basic_elt(env, 13); // errorp
    v_166 = (*qfn1(fn))(fn, v_166);
    }
    env = stack[-6];
    if (v_166 == nil) goto v_76;
    v_166 = qvalue(basic_elt(env, 7)); // !*backtrace
    if (v_166 == nil) goto v_82;
    v_167 = Lposn(nil);
    env = stack[-6];
    v_166 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_167 == v_166) goto v_87;
    v_166 = Lterpri(nil);
    env = stack[-6];
    goto v_85;
v_87:
v_85:
    stack[0] = basic_elt(env, 8); // "+++ Error in call to %p (%w:%w)%n"
    v_169 = stack[-4];
    v_167 = stack[-4];
    v_166 = basic_elt(env, 3); // defined!-in!-file
    v_168 = get(v_167, v_166);
    env = stack[-6];
    v_167 = stack[-4];
    v_166 = basic_elt(env, 4); // defined!-on!-line
    v_166 = get(v_167, v_166);
    env = stack[-6];
    v_166 = list3(v_169, v_168, v_166);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 11); // printf_internal
    v_166 = (*qfn2(fn))(fn, stack[0], v_166);
    }
    env = stack[-6];
    v_166 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-5] = v_166;
    v_166 = stack[-3];
    stack[-2] = v_166;
v_105:
    v_166 = stack[-2];
    if (v_166 == nil) goto v_109;
    else goto v_110;
v_109:
    goto v_104;
v_110:
    v_166 = stack[-2];
    if (!car_legal(v_166)) v_166 = carerror(v_166); else
    v_166 = car(v_166);
    stack[-1] = v_166;
    stack[0] = basic_elt(env, 5); // "Arg%w = %@p%n"
    v_166 = stack[-5];
    v_168 = add1(v_166);
    env = stack[-6];
    stack[-5] = v_168;
    v_167 = stack[-1];
    v_166 = basic_elt(env, 6); // quote
    if (!consp(v_167)) goto v_124;
    v_167 = car(v_167);
    if (v_167 == v_166) goto v_123;
    else goto v_124;
v_123:
    v_166 = stack[-1];
    if (!car_legal(v_166)) v_166 = cdrerror(v_166); else
    v_166 = cdr(v_166);
    if (!car_legal(v_166)) v_166 = carerror(v_166); else
    v_166 = car(v_166);
    goto v_122;
v_124:
    v_166 = stack[-1];
    goto v_122;
    v_166 = nil;
v_122:
    v_166 = list2(v_168, v_166);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 11); // printf_internal
    v_166 = (*qfn2(fn))(fn, stack[0], v_166);
    }
    env = stack[-6];
    v_166 = stack[-2];
    if (!car_legal(v_166)) v_166 = cdrerror(v_166); else
    v_166 = cdr(v_166);
    stack[-2] = v_166;
    goto v_105;
v_104:
    goto v_80;
v_82:
v_80:
    Lerror_0(nil);
    goto v_74;
v_76:
    v_166 = stack[0];
    if (!car_legal(v_166)) v_166 = carerror(v_166); else
    v_166 = car(v_166);
    stack[0] = v_166;
    v_167 = stack[-4];
    v_166 = basic_elt(env, 1); // tracealg
    v_166 = Lflagp(nil, v_167, v_166);
    env = stack[-6];
    if (v_166 == nil) goto v_144;
    v_167 = Lposn(nil);
    env = stack[-6];
    v_166 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_167 == v_166) goto v_151;
    v_166 = Lterpri(nil);
    env = stack[-6];
    goto v_149;
v_151:
v_149:
    stack[-1] = basic_elt(env, 9); // "%p => %p%n"
    v_167 = stack[-4];
    v_166 = stack[0];
    v_166 = list2(v_167, v_166);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 11); // printf_internal
    v_166 = (*qfn2(fn))(fn, stack[-1], v_166);
    }
    env = stack[-6];
    stack[-1] = basic_elt(env, 10); // "%p => %@p%n"
    v_167 = stack[-4];
    v_166 = stack[0];
    v_166 = list2(v_167, v_166);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 11); // printf_internal
    v_166 = (*qfn2(fn))(fn, stack[-1], v_166);
    }
    goto v_142;
v_144:
v_142:
    v_166 = stack[0];
    goto v_8;
v_74:
    v_166 = nil;
v_8:
    return onevalue(v_166);
}



// Code for atomlis

static LispObject CC_atomlis(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_24, v_25;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_24 = v_2;
// end of prologue
v_1:
    v_25 = v_24;
    if (v_25 == nil) goto v_6;
    else goto v_7;
v_6:
    v_24 = lisp_true;
    goto v_5;
v_7:
    v_25 = v_24;
    if (!car_legal(v_25)) v_25 = carerror(v_25); else
    v_25 = car(v_25);
    if (!consp(v_25)) goto v_14;
    else goto v_15;
v_14:
    if (!car_legal(v_24)) v_24 = cdrerror(v_24); else
    v_24 = cdr(v_24);
    goto v_1;
v_15:
    v_24 = nil;
    goto v_13;
    v_24 = nil;
v_13:
    goto v_5;
    v_24 = nil;
v_5:
    return onevalue(v_24);
}



// Code for bcminus!?

static LispObject CC_bcminusW(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_15, v_16;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_16 = v_2;
// end of prologue
    v_15 = qvalue(basic_elt(env, 1)); // !*grmod!*
    if (v_15 == nil) goto v_6;
    else goto v_7;
v_6:
    v_15 = v_16;
    if (!car_legal(v_15)) v_15 = carerror(v_15); else
    v_15 = car(v_15);
    {
        LispObject fn = basic_elt(env, 2); // minusf
        return (*qfn1(fn))(fn, v_15);
    }
v_7:
    v_15 = nil;
    goto v_5;
    v_15 = nil;
v_5:
    return onevalue(v_15);
}



// Code for dipprod

static LispObject CC_dipprod(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    v_22 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // diplength
    stack[-2] = (*qfn1(fn))(fn, v_22);
    }
    env = stack[-3];
    v_22 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // diplength
    v_22 = (*qfn1(fn))(fn, v_22);
    }
    env = stack[-3];
    v_22 = static_cast<LispObject>(lesseq2(stack[-2], v_22));
    v_22 = v_22 ? lisp_true : nil;
    env = stack[-3];
    if (v_22 == nil) goto v_8;
    v_23 = stack[-1];
    v_22 = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // dipprodin
        return (*qfn2(fn))(fn, v_23, v_22);
    }
v_8:
    v_23 = stack[0];
    v_22 = stack[-1];
    {
        LispObject fn = basic_elt(env, 2); // dipprodin
        return (*qfn2(fn))(fn, v_23, v_22);
    }
    v_22 = nil;
    return onevalue(v_22);
}



// Code for basisformp

static LispObject CC_basisformp(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_15, v_16;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_16 = v_2;
// end of prologue
    v_15 = v_16;
    if (!consp(v_15)) goto v_7;
    v_15 = v_16;
    v_16 = qvalue(basic_elt(env, 1)); // basisforml!*
    v_15 = Lmemq(nil, v_15, v_16);
    goto v_5;
v_7:
    v_15 = nil;
    goto v_5;
    v_15 = nil;
v_5:
    return onevalue(v_15);
}



// Code for sgn1

static LispObject CC_sgn1(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_50, v_51;
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
    v_51 = v_3;
    stack[-4] = v_2;
// end of prologue
    v_50 = stack[-4];
    if (!consp(v_50)) goto v_7;
    else goto v_8;
v_7:
    v_50 = stack[-4];
    {
        LispObject fn = basic_elt(env, 1); // sgn
        return (*qfn1(fn))(fn, v_50);
    }
v_8:
    v_50 = v_51;
    if (!car_legal(v_50)) v_50 = carerror(v_50); else
    v_50 = car(v_50);
    stack[-2] = v_50;
    v_50 = v_51;
    if (!car_legal(v_50)) v_50 = cdrerror(v_50); else
    v_50 = cdr(v_50);
    stack[-1] = v_50;
    v_50 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-3] = v_50;
    v_50 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-5] = v_50;
    v_50 = stack[-4];
    if (!car_legal(v_50)) v_50 = cdrerror(v_50); else
    v_50 = cdr(v_50);
    stack[-4] = v_50;
v_30:
    v_51 = stack[-5];
    v_50 = stack[-4];
    if (!car_legal(v_50)) v_50 = carerror(v_50); else
    v_50 = car(v_50);
    stack[0] = times2(v_51, v_50);
    env = stack[-6];
    v_51 = stack[-2];
    v_50 = stack[-3];
    v_50 = times2(v_51, v_50);
    env = stack[-6];
    v_50 = plus2(stack[0], v_50);
    env = stack[-6];
    stack[-3] = v_50;
    v_51 = stack[-5];
    v_50 = stack[-1];
    v_50 = times2(v_51, v_50);
    env = stack[-6];
    stack[-5] = v_50;
    v_50 = stack[-4];
    if (!car_legal(v_50)) v_50 = cdrerror(v_50); else
    v_50 = cdr(v_50);
    stack[-4] = v_50;
    if (v_50 == nil) goto v_45;
    goto v_30;
v_45:
    v_50 = stack[-3];
    {
        LispObject fn = basic_elt(env, 1); // sgn
        return (*qfn1(fn))(fn, v_50);
    }
    goto v_6;
    v_50 = nil;
v_6:
    return onevalue(v_50);
}



// Code for deginvar

static LispObject CC_deginvar(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_50, v_51;
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
    v_50 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // wuconstantp
    v_50 = (*qfn1(fn))(fn, v_50);
    }
    env = stack[-3];
    if (v_50 == nil) goto v_8;
    v_50 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_6;
v_8:
    v_50 = stack[-1];
    if (!car_legal(v_50)) v_50 = carerror(v_50); else
    v_50 = car(v_50);
    if (!car_legal(v_50)) v_50 = carerror(v_50); else
    v_50 = car(v_50);
    if (!car_legal(v_50)) v_51 = carerror(v_50); else
    v_51 = car(v_50);
    v_50 = stack[0];
    if (equal(v_51, v_50)) goto v_12;
    else goto v_13;
v_12:
    v_50 = stack[-1];
    if (!car_legal(v_50)) v_50 = carerror(v_50); else
    v_50 = car(v_50);
    if (!car_legal(v_50)) v_50 = carerror(v_50); else
    v_50 = car(v_50);
    if (!car_legal(v_50)) v_50 = cdrerror(v_50); else
    v_50 = cdr(v_50);
    goto v_6;
v_13:
// Binding kord!*
// FLUIDBIND: reloadenv=3 litvec-offset=1 saveloc=2
{   bind_fluid_stack bind_fluid_var(-3, 1, -2);
    setvalue(basic_elt(env, 1), nil); // kord!*
    v_50 = stack[0];
    v_50 = ncons(v_50);
    env = stack[-3];
    setvalue(basic_elt(env, 1), v_50); // kord!*
    v_50 = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // reorder
    v_50 = (*qfn1(fn))(fn, v_50);
    }
    stack[-1] = v_50;
    v_50 = stack[-1];
    if (!car_legal(v_50)) v_50 = carerror(v_50); else
    v_50 = car(v_50);
    if (!car_legal(v_50)) v_50 = carerror(v_50); else
    v_50 = car(v_50);
    if (!car_legal(v_50)) v_51 = carerror(v_50); else
    v_51 = car(v_50);
    v_50 = stack[0];
    if (equal(v_51, v_50)) goto v_35;
    else goto v_36;
v_35:
    v_50 = stack[-1];
    if (!car_legal(v_50)) v_50 = carerror(v_50); else
    v_50 = car(v_50);
    if (!car_legal(v_50)) v_50 = carerror(v_50); else
    v_50 = car(v_50);
    if (!car_legal(v_50)) v_50 = cdrerror(v_50); else
    v_50 = cdr(v_50);
    goto v_34;
v_36:
    v_50 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_34;
    v_50 = nil;
v_34:
    ;}  // end of a binding scope
    goto v_6;
    v_50 = nil;
v_6:
    return onevalue(v_50);
}



// Code for dfconst

static LispObject CC_dfconst(LispObject env,
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
// space for vars preserved across procedure calls
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_18 = stack[0];
    if (!car_legal(v_18)) v_18 = carerror(v_18); else
    v_18 = car(v_18);
    if (v_18 == nil) goto v_6;
    else goto v_7;
v_6:
    v_18 = nil;
    goto v_5;
v_7:
    v_18 = qvalue(basic_elt(env, 1)); // zlist
    {   LispObject fn = basic_elt(env, 2); // vp2
    v_19 = (*qfn1(fn))(fn, v_18);
    }
    env = stack[-1];
    v_18 = stack[0];
    v_18 = cons(v_19, v_18);
    return ncons(v_18);
    v_18 = nil;
v_5:
    return onevalue(v_18);
}



// Code for domainvalchk

static LispObject CC_domainvalchk(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    v_45 = qvalue(basic_elt(env, 1)); // dmode!*
    v_44 = basic_elt(env, 0); // domainvalchk
    v_44 = get(v_45, v_44);
    env = stack[-3];
    stack[-2] = v_44;
    if (v_44 == nil) goto v_12;
    v_46 = stack[-2];
    v_45 = stack[-1];
    v_44 = stack[0];
        return Lapply2(nil, v_46, v_45, v_44);
v_12:
    v_44 = stack[0];
    v_44 = Lreverse(nil, v_44);
    env = stack[-3];
    stack[0] = v_44;
v_8:
    v_44 = stack[0];
    if (v_44 == nil) goto v_24;
    else goto v_25;
v_24:
    v_45 = stack[-1];
    v_44 = stack[-2];
    {
        LispObject fn = basic_elt(env, 2); // valuechk
        return (*qfn2(fn))(fn, v_45, v_44);
    }
v_25:
    v_44 = stack[0];
    if (!car_legal(v_44)) v_44 = carerror(v_44); else
    v_44 = car(v_44);
    if (!car_legal(v_44)) v_45 = cdrerror(v_44); else
    v_45 = cdr(v_44);
    v_44 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_45 == v_44) goto v_31;
    v_44 = nil;
    goto v_7;
v_31:
    v_44 = stack[0];
    if (!car_legal(v_44)) v_44 = carerror(v_44); else
    v_44 = car(v_44);
    {   LispObject fn = basic_elt(env, 3); // mk!*sq
    v_45 = (*qfn1(fn))(fn, v_44);
    }
    env = stack[-3];
    v_44 = stack[-2];
    v_44 = cons(v_45, v_44);
    env = stack[-3];
    stack[-2] = v_44;
    v_44 = stack[0];
    if (!car_legal(v_44)) v_44 = cdrerror(v_44); else
    v_44 = cdr(v_44);
    stack[0] = v_44;
    goto v_8;
v_7:
    return onevalue(v_44);
}



// Code for qqe_arg!-check!-lb!-rb

static LispObject CC_qqe_argKcheckKlbKrb(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_37, v_38;
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
    v_37 = stack[0];
    if (!car_legal(v_37)) v_37 = cdrerror(v_37); else
    v_37 = cdr(v_37);
    if (!car_legal(v_37)) v_37 = carerror(v_37); else
    v_37 = car(v_37);
    v_38 = v_37;
    v_37 = stack[0];
    if (!car_legal(v_37)) v_37 = cdrerror(v_37); else
    v_37 = cdr(v_37);
    if (!car_legal(v_37)) v_37 = cdrerror(v_37); else
    v_37 = cdr(v_37);
    if (!car_legal(v_37)) v_37 = carerror(v_37); else
    v_37 = car(v_37);
    stack[-1] = v_37;
    v_37 = v_38;
    {   LispObject fn = basic_elt(env, 2); // qqe_arg!-check!-b
    v_37 = (*qfn1(fn))(fn, v_37);
    }
    env = stack[-2];
    if (v_37 == nil) goto v_17;
    else goto v_18;
v_17:
    {   LispObject fn = basic_elt(env, 3); // qqe_arg!-check!-marked!-ids!-rollback
    v_37 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
    v_38 = stack[0];
    v_37 = basic_elt(env, 1); // "type conflict: arguments don't fit
//             binary op with basic type args"
    {   LispObject fn = basic_elt(env, 4); // typerr
    v_37 = (*qfn2(fn))(fn, v_38, v_37);
    }
    env = stack[-2];
    goto v_16;
v_18:
v_16:
    v_37 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // qqe_arg!-check!-b
    v_37 = (*qfn1(fn))(fn, v_37);
    }
    env = stack[-2];
    if (v_37 == nil) goto v_28;
    else goto v_29;
v_28:
    {   LispObject fn = basic_elt(env, 3); // qqe_arg!-check!-marked!-ids!-rollback
    v_37 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
    v_38 = stack[0];
    v_37 = basic_elt(env, 1); // "type conflict: arguments don't fit
//             binary op with basic type args"
    {   LispObject fn = basic_elt(env, 4); // typerr
    v_37 = (*qfn2(fn))(fn, v_38, v_37);
    }
    goto v_27;
v_29:
v_27:
    v_37 = nil;
    return onevalue(v_37);
}



// Code for relnrd

static LispObject CC_relnrd(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_30, v_31;
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
    {   LispObject fn = basic_elt(env, 5); // lex
    v_30 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
    v_31 = qvalue(basic_elt(env, 1)); // atts
    v_30 = basic_elt(env, 2); // (type definitionurl)
    {   LispObject fn = basic_elt(env, 6); // retattributes
    v_30 = (*qfn2(fn))(fn, v_31, v_30);
    }
    env = stack[-2];
    stack[0] = v_30;
    v_30 = qvalue(basic_elt(env, 3)); // char
    {   LispObject fn = basic_elt(env, 7); // compress!*
    v_31 = (*qfn1(fn))(fn, v_30);
    }
    env = stack[-2];
    v_30 = qvalue(basic_elt(env, 4)); // relations!*
    v_30 = Lassoc(nil, v_31, v_30);
    v_31 = v_30;
    if (v_30 == nil) goto v_14;
    v_30 = v_31;
    if (!car_legal(v_30)) v_30 = cdrerror(v_30); else
    v_30 = cdr(v_30);
    if (!car_legal(v_30)) v_30 = cdrerror(v_30); else
    v_30 = cdr(v_30);
    if (!car_legal(v_30)) stack[-1] = carerror(v_30); else
    stack[-1] = car(v_30);
    v_30 = v_31;
    if (!car_legal(v_30)) v_30 = cdrerror(v_30); else
    v_30 = cdr(v_30);
    if (!car_legal(v_30)) v_31 = carerror(v_30); else
    v_31 = car(v_30);
    v_30 = nil;
    {   LispObject fn = basic_elt(env, 8); // apply
    v_30 = (*qfn2(fn))(fn, v_31, v_30);
    }
    {
        LispObject v_34 = stack[-1];
        LispObject v_35 = stack[0];
        return list2star(v_34, v_35, v_30);
    }
v_14:
    v_30 = nil;
    return onevalue(v_30);
}



// Code for unify

static LispObject CC_unify(LispObject env,
                         LispObject v_5, LispObject v_6,
                         LispObject v_7, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_199, v_200, v_201;
    LispObject v_8, v_9;
    if (_a4up_ == nil)
        aerror1("not enough arguments provided", basic_elt(env, 0));
    v_8 = car(_a4up_); _a4up_ = cdr(_a4up_);
    if (_a4up_ == nil)
        aerror1("not enough arguments provided", basic_elt(env, 0));
    v_9 = car(_a4up_); _a4up_ = cdr(_a4up_);
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
        push(v_5,v_6,v_7,v_8,v_9);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_9,v_8,v_7,v_6,v_5);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil, nil, nil, nil, nil);
    real_push(nil, nil, nil, nil, nil);
    real_push(nil, nil, nil, nil, nil);
    push(nil, nil, nil);
    stack_popper stack_popper_var(19);
// copy arguments values to proper place
    stack[-15] = v_9;
    stack[-16] = v_8;
    v_200 = v_7;
    v_201 = v_6;
    v_199 = v_5;
// end of prologue
// Binding op
// FLUIDBIND: reloadenv=18 litvec-offset=1 saveloc=17
{   bind_fluid_stack bind_fluid_var(-18, 1, -17);
// Binding r
// FLUIDBIND: reloadenv=18 litvec-offset=2 saveloc=14
{   bind_fluid_stack bind_fluid_var(-18, 2, -14);
// Binding p
// FLUIDBIND: reloadenv=18 litvec-offset=3 saveloc=13
{   bind_fluid_stack bind_fluid_var(-18, 3, -13);
    setvalue(basic_elt(env, 1), v_199); // op
    v_199 = v_201;
    setvalue(basic_elt(env, 2), v_199); // r
    v_199 = v_200;
    setvalue(basic_elt(env, 3), v_199); // p
    v_199 = qvalue(basic_elt(env, 2)); // r
    if (v_199 == nil) goto v_28;
    else goto v_29;
v_28:
    v_199 = qvalue(basic_elt(env, 3)); // p
    v_199 = (v_199 == nil ? lisp_true : nil);
    goto v_27;
v_29:
    v_199 = nil;
    goto v_27;
    v_199 = nil;
v_27:
    if (v_199 == nil) goto v_25;
    v_200 = stack[-16];
    v_199 = stack[-15];
    {   LispObject fn = basic_elt(env, 13); // resume
    v_199 = (*qfn2(fn))(fn, v_200, v_199);
    }
    goto v_23;
v_25:
    v_199 = qvalue(basic_elt(env, 2)); // r
    if (v_199 == nil) goto v_39;
    else goto v_40;
v_39:
    v_199 = basic_elt(env, 4); // "UNIFY:pattern over-run for function "
    v_199 = Lprinc(nil, v_199);
    env = stack[-18];
    v_199 = qvalue(basic_elt(env, 1)); // op
    v_199 = Lprint(nil, v_199);
    v_199 = nil;
    goto v_23;
v_40:
    v_199 = qvalue(basic_elt(env, 3)); // p
    if (v_199 == nil) goto v_51;
    else goto v_52;
v_51:
    v_199 = qvalue(basic_elt(env, 1)); // op
    {   LispObject fn = basic_elt(env, 14); // ident
    v_199 = (*qfn1(fn))(fn, v_199);
    }
    env = stack[-18];
    if (v_199 == nil) goto v_56;
    else goto v_55;
v_56:
    v_199 = qvalue(basic_elt(env, 2)); // r
    if (!car_legal(v_199)) v_199 = carerror(v_199); else
    v_199 = car(v_199);
    {   LispObject fn = basic_elt(env, 15); // mgenp
    v_199 = (*qfn1(fn))(fn, v_199);
    }
    env = stack[-18];
v_55:
    v_199 = (v_199 == nil ? lisp_true : nil);
    goto v_50;
v_52:
    v_199 = nil;
    goto v_50;
    v_199 = nil;
v_50:
    if (v_199 == nil) goto v_48;
    v_199 = nil;
    goto v_23;
v_48:
    stack[0] = nil;
    stack[-11] = nil;
// Binding symm
// FLUIDBIND: reloadenv=18 litvec-offset=5 saveloc=10
{   bind_fluid_stack bind_fluid_var(-18, 5, -10);
    setvalue(basic_elt(env, 5), nil); // symm
// Binding comb
// FLUIDBIND: reloadenv=18 litvec-offset=6 saveloc=9
{   bind_fluid_stack bind_fluid_var(-18, 6, -9);
    setvalue(basic_elt(env, 6), nil); // comb
// Binding identity
// FLUIDBIND: reloadenv=18 litvec-offset=7 saveloc=8
{   bind_fluid_stack bind_fluid_var(-18, 7, -8);
    setvalue(basic_elt(env, 7), nil); // identity
// Binding mcontract
// FLUIDBIND: reloadenv=18 litvec-offset=8 saveloc=7
{   bind_fluid_stack bind_fluid_var(-18, 8, -7);
    setvalue(basic_elt(env, 8), nil); // mcontract
// Binding acontract
// FLUIDBIND: reloadenv=18 litvec-offset=9 saveloc=6
{   bind_fluid_stack bind_fluid_var(-18, 9, -6);
    setvalue(basic_elt(env, 9), nil); // acontract
// Binding expand
// FLUIDBIND: reloadenv=18 litvec-offset=10 saveloc=5
{   bind_fluid_stack bind_fluid_var(-18, 10, -5);
    setvalue(basic_elt(env, 10), nil); // expand
// Binding i
// FLUIDBIND: reloadenv=18 litvec-offset=11 saveloc=4
{   bind_fluid_stack bind_fluid_var(-18, 11, -4);
    setvalue(basic_elt(env, 11), nil); // i
// Binding upb
// FLUIDBIND: reloadenv=18 litvec-offset=12 saveloc=3
{   bind_fluid_stack bind_fluid_var(-18, 12, -3);
    setvalue(basic_elt(env, 12), nil); // upb
    v_199 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    setvalue(basic_elt(env, 11), v_199); // i
    v_199 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    setvalue(basic_elt(env, 12), v_199); // upb
    v_199 = qvalue(basic_elt(env, 2)); // r
    if (!car_legal(v_199)) v_199 = carerror(v_199); else
    v_199 = car(v_199);
    {   LispObject fn = basic_elt(env, 16); // pm!:free
    v_199 = (*qfn1(fn))(fn, v_199);
    }
    env = stack[-18];
    if (v_199 == nil) goto v_95;
    v_199 = qvalue(basic_elt(env, 2)); // r
    if (!car_legal(v_199)) v_199 = carerror(v_199); else
    v_199 = car(v_199);
    {   LispObject fn = basic_elt(env, 17); // genp
    v_200 = (*qfn1(fn))(fn, v_199);
    }
    env = stack[-18];
    v_199 = stack[-16];
    v_199 = cons(v_200, v_199);
    env = stack[-18];
    stack[-16] = v_199;
    goto v_93;
v_95:
v_93:
    v_199 = qvalue(basic_elt(env, 3)); // p
    {   LispObject fn = basic_elt(env, 18); // initarg
    v_199 = (*qfn1(fn))(fn, v_199);
    }
    env = stack[-18];
v_108:
    v_199 = stack[0];
    if (v_199 == nil) goto v_115;
    else goto v_116;
v_115:
    v_199 = qvalue(basic_elt(env, 3)); // p
    {   LispObject fn = basic_elt(env, 19); // nextarg
    v_199 = (*qfn1(fn))(fn, v_199);
    }
    env = stack[-18];
    stack[-11] = v_199;
    goto v_114;
v_116:
    v_199 = nil;
    goto v_114;
    v_199 = nil;
v_114:
    if (v_199 == nil) goto v_111;
    else goto v_112;
v_111:
    goto v_107;
v_112:
    v_199 = qvalue(basic_elt(env, 2)); // r
    if (!car_legal(v_199)) v_199 = carerror(v_199); else
    v_199 = car(v_199);
    if (!consp(v_199)) goto v_129;
    stack[-2] = qvalue(basic_elt(env, 1)); // op
    stack[-1] = qvalue(basic_elt(env, 2)); // r
    stack[0] = stack[-11];
    v_200 = stack[-16];
    v_199 = stack[-15];
    v_199 = list2(v_200, v_199);
    env = stack[-18];
    {   LispObject fn = basic_elt(env, 20); // suspend
    v_199 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_199);
    }
    env = stack[-18];
    stack[0] = v_199;
    goto v_127;
v_129:
    v_199 = qvalue(basic_elt(env, 2)); // r
    if (!car_legal(v_199)) v_199 = carerror(v_199); else
    v_199 = car(v_199);
    {   LispObject fn = basic_elt(env, 16); // pm!:free
    v_199 = (*qfn1(fn))(fn, v_199);
    }
    env = stack[-18];
    if (v_199 == nil) goto v_140;
    v_199 = qvalue(basic_elt(env, 2)); // r
    if (!car_legal(v_199)) v_200 = carerror(v_199); else
    v_200 = car(v_199);
    v_199 = stack[-11];
    if (!car_legal(v_199)) v_199 = carerror(v_199); else
    v_199 = car(v_199);
    {   LispObject fn = basic_elt(env, 21); // bind
    v_199 = (*qfn2(fn))(fn, v_200, v_199);
    }
    env = stack[-18];
    v_199 = stack[-16];
    {   LispObject fn = basic_elt(env, 22); // chk
    v_199 = (*qfn1(fn))(fn, v_199);
    }
    env = stack[-18];
    stack[-12] = v_199;
    if (v_199 == nil) goto v_154;
    stack[-2] = qvalue(basic_elt(env, 1)); // op
    v_199 = qvalue(basic_elt(env, 2)); // r
    if (!car_legal(v_199)) v_199 = cdrerror(v_199); else
    v_199 = cdr(v_199);
    {   LispObject fn = basic_elt(env, 23); // mval
    stack[-1] = (*qfn1(fn))(fn, v_199);
    }
    env = stack[-18];
    v_199 = stack[-11];
    if (!car_legal(v_199)) stack[0] = cdrerror(v_199); else
    stack[0] = cdr(v_199);
    v_200 = stack[-12];
    v_199 = stack[-15];
    v_199 = list2(v_200, v_199);
    env = stack[-18];
    {   LispObject fn = basic_elt(env, 0); // unify
    v_199 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_199);
    }
    env = stack[-18];
    stack[0] = v_199;
    goto v_152;
v_154:
v_152:
    v_199 = qvalue(basic_elt(env, 2)); // r
    if (!car_legal(v_199)) v_199 = carerror(v_199); else
    v_199 = car(v_199);
    {   LispObject fn = basic_elt(env, 24); // unbind
    v_199 = (*qfn1(fn))(fn, v_199);
    }
    env = stack[-18];
    goto v_127;
v_140:
    v_199 = qvalue(basic_elt(env, 2)); // r
    if (!car_legal(v_199)) v_200 = carerror(v_199); else
    v_200 = car(v_199);
    v_199 = stack[-11];
    if (!car_legal(v_199)) v_199 = carerror(v_199); else
    v_199 = car(v_199);
    {   LispObject fn = basic_elt(env, 25); // meq
    v_199 = (*qfn2(fn))(fn, v_200, v_199);
    }
    env = stack[-18];
    if (v_199 == nil) goto v_171;
    stack[-2] = qvalue(basic_elt(env, 1)); // op
    v_199 = qvalue(basic_elt(env, 2)); // r
    if (!car_legal(v_199)) v_199 = cdrerror(v_199); else
    v_199 = cdr(v_199);
    {   LispObject fn = basic_elt(env, 23); // mval
    stack[-1] = (*qfn1(fn))(fn, v_199);
    }
    env = stack[-18];
    v_199 = stack[-11];
    if (!car_legal(v_199)) stack[0] = cdrerror(v_199); else
    stack[0] = cdr(v_199);
    v_200 = stack[-16];
    v_199 = stack[-15];
    v_199 = list2(v_200, v_199);
    env = stack[-18];
    {   LispObject fn = basic_elt(env, 0); // unify
    v_199 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_199);
    }
    env = stack[-18];
    stack[0] = v_199;
    goto v_127;
v_171:
v_127:
    goto v_108;
v_107:
    v_199 = stack[0];
    ;}  // end of a binding scope
    ;}  // end of a binding scope
    ;}  // end of a binding scope
    ;}  // end of a binding scope
    ;}  // end of a binding scope
    ;}  // end of a binding scope
    ;}  // end of a binding scope
    ;}  // end of a binding scope
    goto v_23;
    v_199 = nil;
v_23:
    ;}  // end of a binding scope
    ;}  // end of a binding scope
    ;}  // end of a binding scope
    return onevalue(v_199);
}



// Code for dipsum

static LispObject CC_dipsum(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_135, v_136, v_137;
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
    v_135 = stack[-6];
    if (v_135 == nil) goto v_7;
    else goto v_8;
v_7:
    v_135 = stack[-5];
    goto v_6;
v_8:
    v_135 = stack[-5];
    if (v_135 == nil) goto v_11;
    else goto v_12;
v_11:
    v_135 = stack[-6];
    goto v_6;
v_12:
    stack[-7] = nil;
    stack[-2] = nil;
    stack[0] = nil;
v_29:
    v_135 = stack[-7];
    if (v_135 == nil) goto v_33;
    goto v_28;
v_33:
    v_135 = stack[-6];
    if (v_135 == nil) goto v_38;
    else goto v_39;
v_38:
    v_135 = stack[-5];
    stack[-1] = v_135;
    v_135 = lisp_true;
    stack[-7] = v_135;
    goto v_37;
v_39:
    v_135 = stack[-5];
    if (v_135 == nil) goto v_43;
    else goto v_44;
v_43:
    v_135 = stack[-6];
    stack[-1] = v_135;
    v_135 = lisp_true;
    stack[-7] = v_135;
    goto v_37;
v_44:
    v_135 = stack[-6];
    if (!car_legal(v_135)) v_135 = carerror(v_135); else
    v_135 = car(v_135);
    stack[-4] = v_135;
    v_135 = stack[-5];
    if (!car_legal(v_135)) v_135 = carerror(v_135); else
    v_135 = car(v_135);
    stack[-3] = v_135;
    v_136 = stack[-4];
    v_135 = stack[-3];
    {   LispObject fn = basic_elt(env, 1); // evcomp
    v_135 = (*qfn2(fn))(fn, v_136, v_135);
    }
    env = stack[-8];
    stack[-1] = v_135;
    v_136 = stack[-1];
    v_135 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 2); // iequal
    v_135 = (*qfn2(fn))(fn, v_136, v_135);
    }
    env = stack[-8];
    if (v_135 == nil) goto v_60;
    v_137 = stack[-4];
    v_135 = stack[-6];
    if (!car_legal(v_135)) v_135 = cdrerror(v_135); else
    v_135 = cdr(v_135);
    if (!car_legal(v_135)) v_136 = carerror(v_135); else
    v_136 = car(v_135);
    v_135 = nil;
    v_135 = list2star(v_137, v_136, v_135);
    env = stack[-8];
    stack[-1] = v_135;
    v_135 = stack[-6];
    if (!car_legal(v_135)) v_135 = cdrerror(v_135); else
    v_135 = cdr(v_135);
    if (!car_legal(v_135)) v_135 = cdrerror(v_135); else
    v_135 = cdr(v_135);
    stack[-6] = v_135;
    goto v_58;
v_60:
    v_136 = stack[-1];
    v_135 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    {   LispObject fn = basic_elt(env, 2); // iequal
    v_135 = (*qfn2(fn))(fn, v_136, v_135);
    }
    env = stack[-8];
    if (v_135 == nil) goto v_74;
    v_137 = stack[-3];
    v_135 = stack[-5];
    if (!car_legal(v_135)) v_135 = cdrerror(v_135); else
    v_135 = cdr(v_135);
    if (!car_legal(v_135)) v_136 = carerror(v_135); else
    v_136 = car(v_135);
    v_135 = nil;
    v_135 = list2star(v_137, v_136, v_135);
    env = stack[-8];
    stack[-1] = v_135;
    v_135 = stack[-5];
    if (!car_legal(v_135)) v_135 = cdrerror(v_135); else
    v_135 = cdr(v_135);
    if (!car_legal(v_135)) v_135 = cdrerror(v_135); else
    v_135 = cdr(v_135);
    stack[-5] = v_135;
    goto v_58;
v_74:
    v_135 = stack[-6];
    if (!car_legal(v_135)) v_135 = cdrerror(v_135); else
    v_135 = cdr(v_135);
    if (!car_legal(v_135)) v_136 = carerror(v_135); else
    v_136 = car(v_135);
    v_135 = stack[-5];
    if (!car_legal(v_135)) v_135 = cdrerror(v_135); else
    v_135 = cdr(v_135);
    if (!car_legal(v_135)) v_135 = carerror(v_135); else
    v_135 = car(v_135);
    {   LispObject fn = basic_elt(env, 3); // bcsum
    v_135 = (*qfn2(fn))(fn, v_136, v_135);
    }
    env = stack[-8];
    stack[-1] = v_135;
    v_135 = stack[-1];
    {   LispObject fn = basic_elt(env, 4); // bczero!?
    v_135 = (*qfn1(fn))(fn, v_135);
    }
    env = stack[-8];
    if (v_135 == nil) goto v_98;
    else goto v_99;
v_98:
    v_137 = stack[-4];
    v_136 = stack[-1];
    v_135 = nil;
    v_135 = list2star(v_137, v_136, v_135);
    env = stack[-8];
    goto v_97;
v_99:
    v_135 = nil;
    goto v_97;
    v_135 = nil;
v_97:
    stack[-1] = v_135;
    v_135 = stack[-6];
    if (!car_legal(v_135)) v_135 = cdrerror(v_135); else
    v_135 = cdr(v_135);
    if (!car_legal(v_135)) v_135 = cdrerror(v_135); else
    v_135 = cdr(v_135);
    stack[-6] = v_135;
    v_135 = stack[-5];
    if (!car_legal(v_135)) v_135 = cdrerror(v_135); else
    v_135 = cdr(v_135);
    if (!car_legal(v_135)) v_135 = cdrerror(v_135); else
    v_135 = cdr(v_135);
    stack[-5] = v_135;
    goto v_58;
v_58:
    goto v_37;
v_37:
    v_135 = stack[-1];
    if (v_135 == nil) goto v_118;
    v_135 = stack[0];
    if (v_135 == nil) goto v_122;
    else goto v_123;
v_122:
    v_135 = stack[-1];
    stack[-2] = v_135;
    stack[0] = v_135;
    goto v_121;
v_123:
    v_135 = stack[-2];
    if (!car_legal(v_135)) v_136 = cdrerror(v_135); else
    v_136 = cdr(v_135);
    v_135 = stack[-1];
    {   LispObject fn = basic_elt(env, 5); // setcdr
    v_135 = (*qfn2(fn))(fn, v_136, v_135);
    }
    env = stack[-8];
    v_135 = stack[-1];
    stack[-2] = v_135;
    goto v_121;
v_121:
    goto v_116;
v_118:
v_116:
    goto v_29;
v_28:
    v_135 = stack[0];
    goto v_6;
    v_135 = nil;
v_6:
    return onevalue(v_135);
}



// Code for locate_member

static LispObject CC_locate_member(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_26, v_27, v_28, v_29;
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
    v_28 = v_3;
    v_29 = v_2;
// end of prologue
    v_27 = v_29;
    v_26 = v_28;
    v_26 = Lmember(nil, v_27, v_26);
    if (v_26 == nil) goto v_7;
    else goto v_8;
v_7:
    v_26 = nil;
    goto v_6;
v_8:
    v_27 = v_29;
    v_26 = v_28;
    if (!car_legal(v_26)) v_26 = carerror(v_26); else
    v_26 = car(v_26);
    if (equal(v_27, v_26)) goto v_13;
    else goto v_14;
v_13:
    v_26 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_6;
v_14:
    v_26 = v_29;
    v_27 = v_28;
    if (!car_legal(v_27)) v_27 = cdrerror(v_27); else
    v_27 = cdr(v_27);
    {   LispObject fn = basic_elt(env, 0); // locate_member
    v_26 = (*qfn2(fn))(fn, v_26, v_27);
    }
    return add1(v_26);
    v_26 = nil;
v_6:
    return onevalue(v_26);
}



// Code for repartsq

static LispObject CC_repartsq(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_40, v_41, v_42, v_43;
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
    v_40 = stack[0];
    if (!car_legal(v_40)) v_40 = carerror(v_40); else
    v_40 = car(v_40);
    {   LispObject fn = basic_elt(env, 1); // splitcomplex
    stack[-1] = (*qfn1(fn))(fn, v_40);
    }
    env = stack[-4];
    v_40 = stack[0];
    if (!car_legal(v_40)) v_40 = cdrerror(v_40); else
    v_40 = cdr(v_40);
    {   LispObject fn = basic_elt(env, 1); // splitcomplex
    v_40 = (*qfn1(fn))(fn, v_40);
    }
    env = stack[-4];
    v_42 = stack[-1];
    v_41 = v_40;
    v_40 = v_42;
    if (!car_legal(v_40)) v_40 = carerror(v_40); else
    v_40 = car(v_40);
    if (!car_legal(v_42)) v_43 = cdrerror(v_42); else
    v_43 = cdr(v_42);
    v_42 = v_41;
    if (!car_legal(v_42)) v_42 = carerror(v_42); else
    v_42 = car(v_42);
    if (!car_legal(v_41)) v_41 = cdrerror(v_41); else
    v_41 = cdr(v_41);
    stack[-3] = v_43;
    stack[-2] = v_42;
    stack[-1] = v_41;
    v_41 = v_40;
    v_40 = stack[-2];
    {   LispObject fn = basic_elt(env, 2); // multsq
    stack[0] = (*qfn2(fn))(fn, v_41, v_40);
    }
    env = stack[-4];
    v_41 = stack[-3];
    v_40 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // multsq
    v_40 = (*qfn2(fn))(fn, v_41, v_40);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 3); // addsq
    stack[0] = (*qfn2(fn))(fn, stack[0], v_40);
    }
    env = stack[-4];
    v_41 = stack[-2];
    v_40 = stack[-2];
    {   LispObject fn = basic_elt(env, 2); // multsq
    stack[-2] = (*qfn2(fn))(fn, v_41, v_40);
    }
    env = stack[-4];
    v_41 = stack[-1];
    v_40 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // multsq
    v_40 = (*qfn2(fn))(fn, v_41, v_40);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 3); // addsq
    v_40 = (*qfn2(fn))(fn, stack[-2], v_40);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 4); // invsq
    v_40 = (*qfn1(fn))(fn, v_40);
    }
    env = stack[-4];
    {
        LispObject v_48 = stack[0];
        LispObject fn = basic_elt(env, 2); // multsq
        return (*qfn2(fn))(fn, v_48, v_40);
    }
}



// Code for harmonicp

static LispObject CC_harmonicp(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_7, v_8;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_7 = v_2;
// end of prologue
    v_8 = basic_elt(env, 1); // fourier!-angle
    return get(v_7, v_8);
}



// Code for simp!-prop2

static LispObject CC_simpKprop2(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_99, v_100, v_101;
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
    v_99 = qvalue(basic_elt(env, 1)); // propvars!*
    stack[-1] = v_99;
v_16:
    v_99 = stack[-1];
    if (v_99 == nil) goto v_20;
    else goto v_21;
v_20:
    goto v_15;
v_21:
    v_99 = stack[-1];
    if (!car_legal(v_99)) v_99 = carerror(v_99); else
    v_99 = car(v_99);
    stack[0] = v_99;
    v_99 = nil;
    stack[-2] = v_99;
v_30:
    v_99 = stack[-5];
    if (v_99 == nil) goto v_33;
    else goto v_34;
v_33:
    goto v_29;
v_34:
    v_99 = stack[-5];
    if (!car_legal(v_99)) v_99 = carerror(v_99); else
    v_99 = car(v_99);
    stack[-3] = v_99;
    v_99 = stack[-5];
    if (!car_legal(v_99)) v_99 = cdrerror(v_99); else
    v_99 = cdr(v_99);
    stack[-5] = v_99;
    v_100 = basic_elt(env, 2); // prop!*
    v_99 = stack[0];
    v_99 = list2(v_100, v_99);
    env = stack[-7];
    stack[-4] = v_99;
    v_100 = basic_elt(env, 3); // not_prop!*
    v_99 = stack[0];
    v_99 = list2(v_100, v_99);
    env = stack[-7];
    v_101 = v_99;
    v_100 = stack[-4];
    v_99 = stack[-3];
    v_99 = Lmember(nil, v_100, v_99);
    if (v_99 == nil) goto v_49;
    else goto v_50;
v_49:
    v_99 = v_101;
    v_100 = stack[-4];
    v_101 = v_100;
    stack[-4] = v_99;
    goto v_48;
v_50:
v_48:
    v_100 = stack[-4];
    v_99 = stack[-3];
    v_99 = Lsubst(nil, v_101, v_100, v_99);
    env = stack[-7];
    stack[-6] = v_99;
    v_100 = stack[-3];
    v_99 = stack[-2];
    v_99 = cons(v_100, v_99);
    env = stack[-7];
    stack[-2] = v_99;
    v_100 = stack[-6];
    v_99 = stack[-5];
    v_99 = Lmember(nil, v_100, v_99);
    stack[-6] = v_99;
    if (v_99 == nil) goto v_67;
    v_99 = stack[-6];
    if (v_99 == nil) goto v_74;
    v_99 = stack[-6];
    if (!car_legal(v_99)) v_100 = carerror(v_99); else
    v_100 = car(v_99);
    v_99 = stack[-5];
    v_99 = Ldelete(nil, v_100, v_99);
    env = stack[-7];
    stack[-5] = v_99;
    v_99 = stack[-6];
    if (!car_legal(v_99)) v_100 = carerror(v_99); else
    v_100 = car(v_99);
    v_99 = stack[-2];
    v_99 = cons(v_100, v_99);
    env = stack[-7];
    stack[-2] = v_99;
    goto v_72;
v_74:
v_72:
    v_100 = stack[-4];
    v_99 = stack[-3];
    v_99 = Ldelete(nil, v_100, v_99);
    env = stack[-7];
    stack[-3] = v_99;
    v_99 = stack[-3];
    v_100 = ncons(v_99);
    env = stack[-7];
    v_99 = stack[-2];
    {   LispObject fn = basic_elt(env, 4); // union
    v_99 = (*qfn2(fn))(fn, v_100, v_99);
    }
    env = stack[-7];
    stack[-2] = v_99;
    goto v_65;
v_67:
v_65:
    goto v_30;
v_29:
    v_99 = stack[-2];
    stack[-5] = v_99;
    v_99 = stack[-1];
    if (!car_legal(v_99)) v_99 = cdrerror(v_99); else
    v_99 = cdr(v_99);
    stack[-1] = v_99;
    goto v_16;
v_15:
    v_99 = stack[-5];
    {
        LispObject fn = basic_elt(env, 5); // simp!-prop!-condense
        return (*qfn1(fn))(fn, v_99);
    }
    return onevalue(v_99);
}



// Code for reverse!-num1

static LispObject CC_reverseKnum1(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_81, v_82;
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
    stack[0] = v_2;
// end of prologue
    v_82 = stack[0];
    v_81 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_82 == v_81) goto v_7;
    else goto v_8;
v_7:
    v_81 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_6;
v_8:
    v_82 = stack[-2];
    v_81 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_82 == v_81) goto v_12;
    else goto v_13;
v_12:
    v_81 = stack[0];
    goto v_6;
v_13:
    v_82 = stack[-2];
    v_81 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    if (v_82 == v_81) goto v_17;
    else goto v_18;
v_17:
    stack[-1] = qvalue(basic_elt(env, 1)); // reverse!-num!-table!*
    v_82 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_81 = stack[0];
    v_81 = times2(v_82, v_81);
    {
        LispObject v_87 = stack[-1];
        return Lgetv(nil, v_87, v_81);
    }
v_18:
    v_82 = stack[-2];
    v_81 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    if (v_82 == v_81) goto v_26;
    else goto v_27;
v_26:
    stack[-1] = qvalue(basic_elt(env, 1)); // reverse!-num!-table!*
    v_82 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_81 = stack[0];
    v_81 = times2(v_82, v_81);
    {
        LispObject v_88 = stack[-1];
        return Lgetv(nil, v_88, v_81);
    }
v_27:
    v_82 = stack[-2];
    v_81 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    if (v_82 == v_81) goto v_35;
    else goto v_36;
v_35:
    v_82 = qvalue(basic_elt(env, 1)); // reverse!-num!-table!*
    v_81 = stack[0];
        return Lgetv(nil, v_82, v_81);
v_36:
    stack[-1] = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_82 = stack[-2];
    v_81 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_81 = quot2(v_82, v_81);
    env = stack[-4];
    v_81 = Lexpt(nil, stack[-1], v_81);
    env = stack[-4];
    stack[-3] = v_81;
    v_82 = stack[0];
    v_81 = stack[-3];
    v_81 = Ldivide_2(nil, v_82, v_81);
    env = stack[-4];
    stack[-1] = v_81;
    v_81 = stack[-2];
    v_81 = Levenp(nil, v_81);
    env = stack[-4];
    if (v_81 == nil) goto v_58;
    else goto v_59;
v_58:
    v_82 = stack[-3];
    v_81 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_81 = times2(v_82, v_81);
    env = stack[-4];
    stack[-3] = v_81;
    goto v_57;
v_59:
v_57:
    v_81 = stack[-1];
    if (!car_legal(v_81)) stack[0] = cdrerror(v_81); else
    stack[0] = cdr(v_81);
    v_82 = stack[-2];
    v_81 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_81 = quot2(v_82, v_81);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 0); // reverse!-num1
    v_82 = (*qfn2(fn))(fn, stack[0], v_81);
    }
    env = stack[-4];
    v_81 = stack[-3];
    stack[0] = times2(v_82, v_81);
    env = stack[-4];
    v_81 = stack[-1];
    if (!car_legal(v_81)) stack[-1] = carerror(v_81); else
    stack[-1] = car(v_81);
    v_81 = stack[-2];
    v_82 = add1(v_81);
    env = stack[-4];
    v_81 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_81 = quot2(v_82, v_81);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 0); // reverse!-num1
    v_81 = (*qfn2(fn))(fn, stack[-1], v_81);
    }
    {
        LispObject v_89 = stack[0];
        return plus2(v_89, v_81);
    }
    goto v_6;
    v_81 = nil;
v_6:
    return onevalue(v_81);
}



// Code for qtypnm

static LispObject CC_qtypnm(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_95, v_96, v_97;
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
    v_96 = stack[-3];
    v_95 = basic_elt(env, 1); // function
    v_95 = Lflagp(nil, v_96, v_95);
    env = stack[-6];
    if (v_95 == nil) goto v_8;
    v_96 = stack[-4];
    v_95 = basic_elt(env, 2); // seen
    v_95 = Lflagp(nil, v_96, v_95);
    env = stack[-6];
    if (v_95 == nil) goto v_14;
    else goto v_15;
v_14:
    v_95 = stack[-4];
    v_96 = ncons(v_95);
    env = stack[-6];
    v_95 = basic_elt(env, 2); // seen
    v_95 = Lflag(nil, v_96, v_95);
    env = stack[-6];
    v_96 = stack[-4];
    v_95 = qvalue(basic_elt(env, 3)); // seen!*
    v_95 = cons(v_96, v_95);
    env = stack[-6];
    setvalue(basic_elt(env, 3), v_95); // seen!*
    goto v_13;
v_15:
v_13:
    v_95 = stack[-4];
    goto v_6;
v_8:
    v_96 = stack[-3];
    v_95 = basic_elt(env, 4); // tseen
    v_95 = get(v_96, v_95);
    env = stack[-6];
    stack[-2] = v_95;
    if (v_95 == nil) goto v_37;
    v_96 = stack[-4];
    v_95 = stack[-2];
    if (!car_legal(v_95)) v_95 = cdrerror(v_95); else
    v_95 = cdr(v_95);
    v_95 = Latsoc(nil, v_96, v_95);
    stack[-5] = v_95;
    if (v_95 == nil) goto v_37;
    v_95 = stack[-5];
    if (!car_legal(v_95)) v_95 = cdrerror(v_95); else
    v_95 = cdr(v_95);
    goto v_33;
v_37:
    v_95 = stack[-2];
    if (v_95 == nil) goto v_51;
    else goto v_52;
v_51:
    stack[-1] = basic_elt(env, 5); // !(
    v_95 = stack[-3];
    stack[0] = Lexplode(nil, v_95);
    env = stack[-6];
    v_95 = basic_elt(env, 6); // !)
    v_95 = ncons(v_95);
    env = stack[-6];
    v_95 = Lnconc(nil, stack[0], v_95);
    env = stack[-6];
    v_95 = cons(stack[-1], v_95);
    env = stack[-6];
    v_95 = ncons(v_95);
    env = stack[-6];
    stack[-2] = v_95;
    v_97 = stack[-3];
    v_96 = basic_elt(env, 4); // tseen
    v_95 = stack[-2];
    v_95 = Lputprop(nil, v_97, v_96, v_95);
    env = stack[-6];
    v_96 = stack[-3];
    v_95 = qvalue(basic_elt(env, 7)); // tseen!*
    v_95 = cons(v_96, v_95);
    env = stack[-6];
    setvalue(basic_elt(env, 7), v_95); // tseen!*
    goto v_50;
v_52:
v_50:
    v_95 = stack[-4];
    v_95 = Lexplode(nil, v_95);
    env = stack[-6];
    stack[-1] = v_95;
    v_95 = Lcompress(nil, v_95);
    env = stack[-6];
    stack[-5] = v_95;
    stack[0] = stack[-2];
    v_97 = stack[-4];
    v_96 = stack[-5];
    v_95 = stack[-2];
    if (!car_legal(v_95)) v_95 = cdrerror(v_95); else
    v_95 = cdr(v_95);
    v_95 = acons(v_97, v_96, v_95);
    env = stack[-6];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_95);
    v_95 = stack[-2];
    if (!car_legal(v_95)) v_96 = carerror(v_95); else
    v_96 = car(v_95);
    v_95 = stack[-1];
    v_95 = Lappend_2(nil, v_96, v_95);
    env = stack[-6];
    stack[-2] = v_95;
    stack[-1] = stack[-5];
    stack[0] = basic_elt(env, 8); // rccnam
    v_95 = stack[-2];
    v_96 = Llength(nil, v_95);
    env = stack[-6];
    v_95 = stack[-2];
    v_95 = cons(v_96, v_95);
    env = stack[-6];
    v_95 = Lputprop(nil, stack[-1], stack[0], v_95);
    env = stack[-6];
    v_97 = stack[-3];
    v_96 = basic_elt(env, 9); // funs
    v_95 = stack[-5];
    {   LispObject fn = basic_elt(env, 10); // traput
    v_95 = (*qfn3(fn))(fn, v_97, v_96, v_95);
    }
    v_95 = stack[-5];
v_33:
    goto v_6;
    v_95 = nil;
v_6:
    return onevalue(v_95);
}



// Code for ofsf_siatsubf

static LispObject CC_ofsf_siatsubf(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_71, v_72, v_73;
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
    v_71 = stack[-1];
    if (!consp(v_71)) goto v_16;
    else goto v_17;
v_16:
    v_71 = lisp_true;
    goto v_15;
v_17:
    v_71 = stack[-1];
    if (!car_legal(v_71)) v_71 = carerror(v_71); else
    v_71 = car(v_71);
    v_71 = (consp(v_71) ? nil : lisp_true);
    goto v_15;
    v_71 = nil;
v_15:
    if (v_71 == nil) goto v_13;
    v_72 = stack[-1];
    v_71 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_72, v_71);
v_13:
    v_71 = stack[-1];
    if (!car_legal(v_71)) v_72 = cdrerror(v_71); else
    v_72 = cdr(v_71);
    v_71 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // ofsf_siatsubf
    v_71 = (*qfn2(fn))(fn, v_72, v_71);
    }
    env = stack[-3];
    stack[-2] = v_71;
    v_71 = stack[-1];
    if (!car_legal(v_71)) v_71 = carerror(v_71); else
    v_71 = car(v_71);
    if (!car_legal(v_71)) v_72 = cdrerror(v_71); else
    v_72 = cdr(v_71);
    v_71 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // ofsf_siatsubf
    v_71 = (*qfn2(fn))(fn, v_72, v_71);
    }
    env = stack[-3];
    v_72 = v_71;
    v_71 = stack[-1];
    if (!car_legal(v_71)) v_71 = carerror(v_71); else
    v_71 = car(v_71);
    if (!car_legal(v_71)) v_71 = carerror(v_71); else
    v_71 = car(v_71);
    if (!car_legal(v_71)) v_73 = carerror(v_71); else
    v_73 = car(v_71);
    v_71 = stack[0];
    v_71 = Latsoc(nil, v_73, v_71);
    v_73 = v_71;
    if (v_71 == nil) goto v_40;
    stack[0] = v_72;
    v_71 = v_73;
    if (!car_legal(v_71)) v_72 = cdrerror(v_71); else
    v_72 = cdr(v_71);
    v_71 = stack[-1];
    if (!car_legal(v_71)) v_71 = carerror(v_71); else
    v_71 = car(v_71);
    if (!car_legal(v_71)) v_71 = carerror(v_71); else
    v_71 = car(v_71);
    if (!car_legal(v_71)) v_71 = cdrerror(v_71); else
    v_71 = cdr(v_71);
    {   LispObject fn = basic_elt(env, 1); // exptsq
    v_71 = (*qfn2(fn))(fn, v_72, v_71);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 2); // multsq
    v_72 = (*qfn2(fn))(fn, stack[0], v_71);
    }
    env = stack[-3];
    v_71 = stack[-2];
    {
        LispObject fn = basic_elt(env, 3); // addsq
        return (*qfn2(fn))(fn, v_72, v_71);
    }
v_40:
    stack[0] = v_72;
    v_71 = stack[-1];
    if (!car_legal(v_71)) v_71 = carerror(v_71); else
    v_71 = car(v_71);
    if (!car_legal(v_71)) v_71 = carerror(v_71); else
    v_71 = car(v_71);
    if (!car_legal(v_71)) v_72 = carerror(v_71); else
    v_72 = car(v_71);
    v_71 = stack[-1];
    if (!car_legal(v_71)) v_71 = carerror(v_71); else
    v_71 = car(v_71);
    if (!car_legal(v_71)) v_71 = carerror(v_71); else
    v_71 = car(v_71);
    if (!car_legal(v_71)) v_71 = cdrerror(v_71); else
    v_71 = cdr(v_71);
    {   LispObject fn = basic_elt(env, 4); // ofsf_pow2q
    v_71 = (*qfn2(fn))(fn, v_72, v_71);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 2); // multsq
    v_72 = (*qfn2(fn))(fn, stack[0], v_71);
    }
    env = stack[-3];
    v_71 = stack[-2];
    {
        LispObject fn = basic_elt(env, 3); // addsq
        return (*qfn2(fn))(fn, v_72, v_71);
    }
    return onevalue(v_71);
}



// Code for ofsf_simplat1

static LispObject CC_ofsf_simplat1(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_125, v_126, v_127;
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
    v_127 = v_2;
// end of prologue
    v_125 = v_127;
    if (!car_legal(v_125)) v_125 = carerror(v_125); else
    v_125 = car(v_125);
    stack[-3] = v_125;
    v_126 = stack[-3];
    v_125 = basic_elt(env, 1); // (equal neq leq geq lessp greaterp)
    v_125 = Lmemq(nil, v_126, v_125);
    if (v_125 == nil) goto v_13;
    else goto v_14;
v_13:
    v_125 = nil;
    goto v_8;
v_14:
    v_125 = v_127;
    if (!car_legal(v_125)) v_125 = cdrerror(v_125); else
    v_125 = cdr(v_125);
    if (!car_legal(v_125)) v_125 = carerror(v_125); else
    v_125 = car(v_125);
    stack[-1] = v_125;
    v_125 = stack[-1];
    if (!consp(v_125)) goto v_28;
    else goto v_29;
v_28:
    v_125 = lisp_true;
    goto v_27;
v_29:
    v_125 = stack[-1];
    if (!car_legal(v_125)) v_125 = carerror(v_125); else
    v_125 = car(v_125);
    v_125 = (consp(v_125) ? nil : lisp_true);
    goto v_27;
    v_125 = nil;
v_27:
    if (v_125 == nil) goto v_25;
    v_126 = stack[-3];
    v_125 = stack[-1];
    {   LispObject fn = basic_elt(env, 11); // ofsf_evalatp
    v_125 = (*qfn2(fn))(fn, v_126, v_125);
    }
    env = stack[-4];
    if (v_125 == nil) goto v_40;
    v_125 = basic_elt(env, 2); // true
    goto v_38;
v_40:
    v_125 = basic_elt(env, 3); // false
    goto v_38;
    v_125 = nil;
v_38:
    goto v_8;
v_25:
    stack[0] = stack[-1];
    v_125 = stack[-1];
    {   LispObject fn = basic_elt(env, 12); // sfto_dcontentf
    v_125 = (*qfn1(fn))(fn, v_125);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 13); // quotf
    v_125 = (*qfn2(fn))(fn, stack[0], v_125);
    }
    env = stack[-4];
    stack[-1] = v_125;
    v_125 = stack[-1];
    {   LispObject fn = basic_elt(env, 14); // minusf
    v_125 = (*qfn1(fn))(fn, v_125);
    }
    env = stack[-4];
    if (v_125 == nil) goto v_55;
    v_125 = stack[-1];
    {   LispObject fn = basic_elt(env, 15); // negf
    v_125 = (*qfn1(fn))(fn, v_125);
    }
    env = stack[-4];
    stack[-1] = v_125;
    v_125 = stack[-3];
    {   LispObject fn = basic_elt(env, 16); // ofsf_anegrel
    v_125 = (*qfn1(fn))(fn, v_125);
    }
    env = stack[-4];
    stack[-3] = v_125;
    goto v_53;
v_55:
v_53:
    v_125 = qvalue(basic_elt(env, 4)); // !*rlsiatadv
    if (v_125 == nil) goto v_64;
    else goto v_65;
v_64:
    v_127 = stack[-3];
    v_126 = stack[-1];
    v_125 = nil;
    return list3(v_127, v_126, v_125);
v_65:
    v_126 = stack[-3];
    v_125 = basic_elt(env, 5); // equal
    if (v_126 == v_125) goto v_73;
    else goto v_74;
v_73:
    v_126 = stack[-1];
    v_125 = stack[-2];
    {
        LispObject fn = basic_elt(env, 17); // ofsf_simplequal
        return (*qfn2(fn))(fn, v_126, v_125);
    }
v_74:
    v_126 = stack[-3];
    v_125 = basic_elt(env, 6); // neq
    if (v_126 == v_125) goto v_82;
    else goto v_83;
v_82:
    v_126 = stack[-1];
    v_125 = stack[-2];
    {
        LispObject fn = basic_elt(env, 18); // ofsf_simplneq
        return (*qfn2(fn))(fn, v_126, v_125);
    }
v_83:
    v_126 = stack[-3];
    v_125 = basic_elt(env, 7); // leq
    if (v_126 == v_125) goto v_91;
    else goto v_92;
v_91:
    v_126 = stack[-1];
    v_125 = stack[-2];
    {
        LispObject fn = basic_elt(env, 19); // ofsf_simplleq
        return (*qfn2(fn))(fn, v_126, v_125);
    }
v_92:
    v_126 = stack[-3];
    v_125 = basic_elt(env, 8); // geq
    if (v_126 == v_125) goto v_100;
    else goto v_101;
v_100:
    v_126 = stack[-1];
    v_125 = stack[-2];
    {
        LispObject fn = basic_elt(env, 20); // ofsf_simplgeq
        return (*qfn2(fn))(fn, v_126, v_125);
    }
v_101:
    v_126 = stack[-3];
    v_125 = basic_elt(env, 9); // lessp
    if (v_126 == v_125) goto v_109;
    else goto v_110;
v_109:
    v_126 = stack[-1];
    v_125 = stack[-2];
    {
        LispObject fn = basic_elt(env, 21); // ofsf_simpllessp
        return (*qfn2(fn))(fn, v_126, v_125);
    }
v_110:
    v_126 = stack[-3];
    v_125 = basic_elt(env, 10); // greaterp
    if (v_126 == v_125) goto v_118;
    else goto v_119;
v_118:
    v_126 = stack[-1];
    v_125 = stack[-2];
    {
        LispObject fn = basic_elt(env, 22); // ofsf_simplgreaterp
        return (*qfn2(fn))(fn, v_126, v_125);
    }
v_119:
    v_125 = nil;
v_8:
    return onevalue(v_125);
}



// Code for drop_rl_with

static LispObject CC_drop_rl_with(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_13 = v_3;
    v_14 = v_2;
// end of prologue
    stack[-1] = v_13;
    stack[0] = basic_elt(env, 1); // rl_with
    v_15 = v_14;
    v_14 = v_13;
    v_13 = basic_elt(env, 1); // rl_with
    v_13 = get(v_14, v_13);
    env = stack[-2];
    v_13 = Ldelete(nil, v_15, v_13);
    {
        LispObject v_18 = stack[-1];
        LispObject v_19 = stack[0];
        return Lputprop(nil, v_18, v_19, v_13);
    }
}



// Code for width

static LispObject CC_width(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_46, v_47, v_48;
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
    v_47 = v_2;
// end of prologue
    v_48 = v_47;
    v_46 = basic_elt(env, 1); // textag
    v_46 = get(v_48, v_46);
    env = stack[-2];
    stack[-1] = v_46;
    v_46 = stack[-1];
    if (v_46 == nil) goto v_13;
    else goto v_14;
v_13:
    v_46 = basic_elt(env, 2); // "cannot find item "
    v_47 = list2(v_46, v_47);
    env = stack[-2];
    v_46 = basic_elt(env, 3); // fatal
    {   LispObject fn = basic_elt(env, 4); // tri!-error
    v_46 = (*qfn2(fn))(fn, v_47, v_46);
    }
    env = stack[-2];
    goto v_12;
v_14:
v_12:
v_23:
    v_47 = stack[0];
    v_46 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_46 = static_cast<LispObject>(greaterp2(v_47, v_46));
    v_46 = v_46 ? lisp_true : nil;
    env = stack[-2];
    if (v_46 == nil) goto v_26;
    v_46 = stack[-1];
    if (!car_legal(v_46)) v_46 = cdrerror(v_46); else
    v_46 = cdr(v_46);
    if (v_46 == nil) goto v_26;
    goto v_27;
v_26:
    goto v_22;
v_27:
    v_46 = stack[-1];
    if (!car_legal(v_46)) v_46 = cdrerror(v_46); else
    v_46 = cdr(v_46);
    stack[-1] = v_46;
    v_46 = stack[0];
    v_46 = sub1(v_46);
    env = stack[-2];
    stack[0] = v_46;
    goto v_23;
v_22:
    v_46 = stack[-1];
    if (!car_legal(v_46)) v_46 = carerror(v_46); else
    v_46 = car(v_46);
    if (v_46 == nil) goto v_42;
    else goto v_41;
v_42:
    v_46 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
v_41:
    return onevalue(v_46);
}



// Code for qqe_simplterm!-tail

static LispObject CC_qqe_simpltermKtail(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_95, v_96, v_97;
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
    v_95 = stack[-2];
    {   LispObject fn = basic_elt(env, 7); // qqe_arg2l
    v_95 = (*qfn1(fn))(fn, v_95);
    }
    env = stack[-4];
    stack[-3] = v_95;
    v_96 = stack[-3];
    v_95 = basic_elt(env, 1); // qepsilon
    if (v_96 == v_95) goto v_15;
    else goto v_16;
v_15:
    v_95 = basic_elt(env, 1); // qepsilon
    goto v_10;
v_16:
    v_95 = stack[-3];
    if (!consp(v_95)) goto v_22;
    else goto v_23;
v_22:
    v_95 = stack[-2];
    goto v_10;
v_23:
    v_95 = stack[-2];
    {   LispObject fn = basic_elt(env, 8); // qqe_op
    v_95 = (*qfn1(fn))(fn, v_95);
    }
    env = stack[-4];
    stack[-1] = v_95;
    v_95 = stack[-3];
    {   LispObject fn = basic_elt(env, 8); // qqe_op
    v_95 = (*qfn1(fn))(fn, v_95);
    }
    env = stack[-4];
    stack[0] = v_95;
    v_96 = stack[0];
    v_95 = basic_elt(env, 2); // (ladd radd)
    v_95 = Lmemq(nil, v_96, v_95);
    if (v_95 == nil) goto v_33;
    v_95 = stack[-3];
    {   LispObject fn = basic_elt(env, 9); // qqe_arg2r
    v_95 = (*qfn1(fn))(fn, v_95);
    }
    env = stack[-4];
    v_97 = v_95;
    v_96 = v_97;
    v_95 = basic_elt(env, 1); // qepsilon
    if (v_96 == v_95) goto v_41;
    else goto v_42;
v_41:
    v_95 = basic_elt(env, 1); // qepsilon
    goto v_10;
v_42:
    v_96 = stack[-1];
    v_95 = basic_elt(env, 3); // ltail
    if (v_96 == v_95) goto v_56;
    else goto v_57;
v_56:
    v_96 = stack[0];
    v_95 = basic_elt(env, 4); // radd
    v_95 = (v_96 == v_95 ? lisp_true : nil);
    goto v_55;
v_57:
    v_95 = nil;
    goto v_55;
    v_95 = nil;
v_55:
    if (v_95 == nil) goto v_53;
    v_95 = lisp_true;
    goto v_51;
v_53:
    v_96 = stack[-1];
    v_95 = basic_elt(env, 5); // rtail
    if (v_96 == v_95) goto v_71;
    else goto v_72;
v_71:
    v_96 = stack[0];
    v_95 = basic_elt(env, 6); // ladd
    v_95 = (v_96 == v_95 ? lisp_true : nil);
    goto v_70;
v_72:
    v_95 = nil;
    goto v_70;
    v_95 = nil;
v_70:
    goto v_51;
    v_95 = nil;
v_51:
    if (v_95 == nil) goto v_49;
    v_95 = v_97;
    goto v_10;
v_49:
    goto v_31;
v_33:
v_31:
    v_95 = stack[-3];
    {   LispObject fn = basic_elt(env, 10); // qqe_simplterm
    v_95 = (*qfn1(fn))(fn, v_95);
    }
    env = stack[-4];
    v_97 = v_95;
    v_96 = v_97;
    v_95 = stack[-3];
    if (equal(v_96, v_95)) goto v_86;
    else goto v_87;
v_86:
    v_95 = stack[-2];
    goto v_10;
v_87:
    v_95 = stack[-1];
    v_96 = v_97;
    v_95 = list2(v_95, v_96);
    env = stack[-4];
    {
        LispObject fn = basic_elt(env, 10); // qqe_simplterm
        return (*qfn1(fn))(fn, v_95);
    }
v_10:
    return onevalue(v_95);
}



setup_type const u30_setup[] =
{
    {"pterpri",                 CC_pterpri,G1W0,    G2W0,     G3W0,     G4W0},
    {"assert_declarestat1",     G0W1,     CC_assert_declarestat1,G2W1,G3W1,G4W1},
    {"mksf",                    G0W1,     CC_mksf,  G2W1,     G3W1,     G4W1},
    {"dvfsf_susitf",            G0W2,     G1W2,     CC_dvfsf_susitf,G3W2,G4W2},
    {"ofsf_smmkatl",            G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_ofsf_smmkatl},
    {"cl_nnfnot",               G0W1,     CC_cl_nnfnot,G2W1,  G3W1,     G4W1},
    {"fctrf",                   G0W1,     CC_fctrf, G2W1,     G3W1,     G4W1},
    {"ev_insert",               G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_ev_insert},
    {"testpr",                  G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_testpr},
    {"embed-null-fn",           G0W1,     CC_embedKnullKfn,G2W1,G3W1,   G4W1},
    {"vdpcondense",             G0W1,     CC_vdpcondense,G2W1,G3W1,     G4W1},
    {"subla-q",                 G0W2,     G1W2,     CC_sublaKq,G3W2,    G4W2},
    {"changearg",               G0W3,     G1W3,     G2W3,     CC_changearg,G4W3},
    {"cons_ordp",               G0W3,     G1W3,     G2W3,     CC_cons_ordp,G4W3},
    {"general-ordered-gcd-mod-p",G0W2,    G1W2,     CC_generalKorderedKgcdKmodKp,G3W2,G4W2},
    {"gcref_off",               CC_gcref_off,G1W0,  G2W0,     G3W0,     G4W0},
    {"checku",                  G0W2,     G1W2,     CC_checku,G3W2,     G4W2},
    {"make-modular-symmetric",  G0W1,     CC_makeKmodularKsymmetric,G2W1,G3W1,G4W1},
    {"opfneval1",               G0W2,     G1W2,     CC_opfneval1,G3W2,  G4W2},
    {"atomlis",                 G0W1,     CC_atomlis,G2W1,    G3W1,     G4W1},
    {"bcminus?",                G0W1,     CC_bcminusW,G2W1,   G3W1,     G4W1},
    {"dipprod",                 G0W2,     G1W2,     CC_dipprod,G3W2,    G4W2},
    {"basisformp",              G0W1,     CC_basisformp,G2W1, G3W1,     G4W1},
    {"sgn1",                    G0W2,     G1W2,     CC_sgn1,  G3W2,     G4W2},
    {"deginvar",                G0W2,     G1W2,     CC_deginvar,G3W2,   G4W2},
    {"dfconst",                 G0W1,     CC_dfconst,G2W1,    G3W1,     G4W1},
    {"domainvalchk",            G0W2,     G1W2,     CC_domainvalchk,G3W2,G4W2},
    {"qqe_arg-check-lb-rb",     G0W1,     CC_qqe_argKcheckKlbKrb,G2W1,G3W1,G4W1},
    {"relnrd",                  CC_relnrd,G1W0,     G2W0,     G3W0,     G4W0},
    {"unify",                   G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_unify},
    {"dipsum",                  G0W2,     G1W2,     CC_dipsum,G3W2,     G4W2},
    {"locate_member",           G0W2,     G1W2,     CC_locate_member,G3W2,G4W2},
    {"repartsq",                G0W1,     CC_repartsq,G2W1,   G3W1,     G4W1},
    {"harmonicp",               G0W1,     CC_harmonicp,G2W1,  G3W1,     G4W1},
    {"simp-prop2",              G0W1,     CC_simpKprop2,G2W1, G3W1,     G4W1},
    {"reverse-num1",            G0W2,     G1W2,     CC_reverseKnum1,G3W2,G4W2},
    {"qtypnm",                  G0W2,     G1W2,     CC_qtypnm,G3W2,     G4W2},
    {"ofsf_siatsubf",           G0W2,     G1W2,     CC_ofsf_siatsubf,G3W2,G4W2},
    {"ofsf_simplat1",           G0W2,     G1W2,     CC_ofsf_simplat1,G3W2,G4W2},
    {"drop_rl_with",            G0W2,     G1W2,     CC_drop_rl_with,G3W2,G4W2},
    {"width",                   G0W2,     G1W2,     CC_width, G3W2,     G4W2},
    {"qqe_simplterm-tail",      G0W1,     CC_qqe_simpltermKtail,G2W1,G3W1,G4W1},
    {nullptr, 
        reinterpret_cast<no_args *>(
            reinterpret_cast<uintptr_t>("u30")),
        reinterpret_cast<one_arg *>(
            reinterpret_cast<uintptr_t>("169932 8869143 2112391")),
        nullptr, nullptr, nullptr}
};

// end of generated code
