
// $destdir/u21.c        Machine generated C code

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


// Code for mvar_member

static LispObject CC_mvar_member(LispObject env,
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
    v_28 = v_3;
    v_29 = v_2;
// end of prologue
    v_27 = v_29;
    v_26 = v_28;
    if (equal(v_27, v_26)) goto v_7;
    else goto v_8;
v_7:
    v_26 = lisp_true;
    goto v_6;
v_8:
    v_26 = v_28;
    if (!consp(v_26)) goto v_17;
    v_26 = v_29;
    v_27 = v_28;
    if (!car_legal(v_27)) v_27 = cdrerror(v_27); else
    v_27 = cdr(v_27);
    {
        LispObject fn = basic_elt(env, 1); // arglist_member
        return (*qfn2(fn))(fn, v_26, v_27);
    }
v_17:
    v_26 = nil;
    goto v_15;
    v_26 = nil;
v_15:
    goto v_6;
    v_26 = nil;
v_6:
    return onevalue(v_26);
}



// Code for rnminusp!:

static LispObject CC_rnminuspT(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_21, v_22;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_21 = v_2;
// end of prologue
    if (!car_legal(v_21)) v_21 = cdrerror(v_21); else
    v_21 = cdr(v_21);
    if (!car_legal(v_21)) v_22 = carerror(v_21); else
    v_22 = car(v_21);
    v_21 = v_22;
    if (!consp(v_22)) goto v_6;
    else goto v_7;
v_6:
    v_22 = v_21;
    v_21 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
        return Llessp_2(nil, v_22, v_21);
v_7:
    v_22 = v_21;
    if (!car_legal(v_22)) v_22 = carerror(v_22); else
    v_22 = car(v_22);
    if (!symbolp(v_22)) v_22 = nil;
    else { v_22 = qfastgets(v_22);
           if (v_22 != nil) { v_22 = elt(v_22, 30); // minusp
#ifdef RECORD_GET
             if (v_22 != SPID_NOPROP)
                record_get(elt(fastget_names, 30), 1);
             else record_get(elt(fastget_names, 30), 0),
                v_22 = nil; }
           else record_get(elt(fastget_names, 30), 0); }
#else
             if (v_22 == SPID_NOPROP) v_22 = nil; }}
#endif
        return Lapply1(nil, v_22, v_21);
    v_21 = nil;
    return onevalue(v_21);
}



// Code for mo_times_ei

static LispObject CC_mo_times_ei(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_31 = v_3;
    v_30 = v_2;
// end of prologue
    v_29 = v_31;
    if (!car_legal(v_29)) v_29 = carerror(v_29); else
    v_29 = car(v_29);
    if (v_29 == nil) goto v_7;
    else goto v_8;
v_7:
    v_29 = v_30;
    v_29 = ncons(v_29);
    env = stack[-1];
    goto v_6;
v_8:
    v_29 = v_31;
    if (!car_legal(v_29)) v_29 = carerror(v_29); else
    v_29 = car(v_29);
    if (!car_legal(v_29)) v_29 = carerror(v_29); else
    v_29 = car(v_29);
    v_29 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_30) + static_cast<std::uintptr_t>(v_29) - TAG_FIXNUM);
    v_30 = v_31;
    if (!car_legal(v_30)) v_30 = carerror(v_30); else
    v_30 = car(v_30);
    if (!car_legal(v_30)) v_30 = cdrerror(v_30); else
    v_30 = cdr(v_30);
    v_29 = cons(v_29, v_30);
    env = stack[-1];
    goto v_6;
    v_29 = nil;
v_6:
    stack[0] = v_29;
    {   LispObject fn = basic_elt(env, 1); // mo!=deglist
    v_29 = (*qfn1(fn))(fn, v_29);
    }
    {
        LispObject v_33 = stack[0];
        return cons(v_33, v_29);
    }
}



// Code for reverse!-num

static LispObject CC_reverseKnum(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_32 = stack[0];
    v_31 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_32 == v_31) goto v_6;
    else goto v_7;
v_6:
    v_31 = stack[0];
    goto v_5;
v_7:
    v_32 = stack[0];
    v_31 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_31 = static_cast<LispObject>(lessp2(v_32, v_31));
    v_31 = v_31 ? lisp_true : nil;
    env = stack[-2];
    if (v_31 == nil) goto v_12;
    v_31 = stack[0];
    stack[-1] = negate(v_31);
    env = stack[-2];
    v_31 = stack[0];
    v_31 = negate(v_31);
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 1); // ilog2
    v_31 = (*qfn1(fn))(fn, v_31);
    }
    env = stack[-2];
    v_31 = add1(v_31);
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 2); // reverse!-num1
    v_31 = (*qfn2(fn))(fn, stack[-1], v_31);
    }
    return negate(v_31);
v_12:
    stack[-1] = stack[0];
    v_31 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // ilog2
    v_31 = (*qfn1(fn))(fn, v_31);
    }
    env = stack[-2];
    v_31 = add1(v_31);
    env = stack[-2];
    {
        LispObject v_35 = stack[-1];
        LispObject fn = basic_elt(env, 2); // reverse!-num1
        return (*qfn2(fn))(fn, v_35, v_31);
    }
    v_31 = nil;
v_5:
    return onevalue(v_31);
}



// Code for mkcr

static LispObject CC_mkcr(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    stack[-1] = v_3;
    v_11 = v_2;
// end of prologue
    stack[-2] = basic_elt(env, 1); // !:cr!:
    {   LispObject fn = basic_elt(env, 2); // striptag
    stack[0] = (*qfn1(fn))(fn, v_11);
    }
    env = stack[-3];
    v_11 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // striptag
    v_11 = (*qfn1(fn))(fn, v_11);
    }
    {
        LispObject v_15 = stack[-2];
        LispObject v_16 = stack[0];
        return list2star(v_15, v_16, v_11);
    }
}



// Code for lalr_prin_rhs

static LispObject CC_lalr_prin_rhs(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_33, v_34;
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
    v_34 = v_2;
// end of prologue
    v_33 = v_34;
    if (v_33 == nil) goto v_6;
    else goto v_7;
v_6:
    v_33 = basic_elt(env, 1); // "<empty>"
        return Lprinc(nil, v_33);
v_7:
    v_33 = v_34;
    stack[0] = v_33;
v_16:
    v_33 = stack[0];
    if (v_33 == nil) goto v_20;
    else goto v_21;
v_20:
    v_33 = nil;
    goto v_15;
v_21:
    v_33 = stack[0];
    if (!car_legal(v_33)) v_33 = carerror(v_33); else
    v_33 = car(v_33);
    {   LispObject fn = basic_elt(env, 3); // lalr_prin_symbol
    v_33 = (*qfn1(fn))(fn, v_33);
    }
    env = stack[-1];
    v_33 = basic_elt(env, 2); // " "
    v_33 = Lprinc(nil, v_33);
    env = stack[-1];
    v_33 = stack[0];
    if (!car_legal(v_33)) v_33 = cdrerror(v_33); else
    v_33 = cdr(v_33);
    stack[0] = v_33;
    goto v_16;
v_15:
    goto v_5;
    v_33 = nil;
v_5:
    return onevalue(v_33);
}



// Code for cl_nnf

static LispObject CC_cl_nnf(LispObject env,
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
    v_7 = lisp_true;
    {
        LispObject fn = basic_elt(env, 1); // cl_nnf1
        return (*qfn2(fn))(fn, v_8, v_7);
    }
}



// Code for cl_simpl1

static LispObject CC_cl_simpl1(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_463, v_464, v_465;
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
    stack[0] = v_5;
    stack[-2] = v_4;
    stack[-3] = v_3;
    stack[-1] = v_2;
// end of prologue
    v_464 = stack[-2];
    v_463 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_463 = Leqn_2(nil, v_464, v_463);
    env = stack[-5];
    if (v_463 == nil) goto v_16;
    v_463 = stack[-1];
    goto v_12;
v_16:
    v_463 = stack[-1];
    if (!consp(v_463)) goto v_23;
    else goto v_24;
v_23:
    v_463 = stack[-1];
    goto v_22;
v_24:
    v_463 = stack[-1];
    if (!car_legal(v_463)) v_463 = carerror(v_463); else
    v_463 = car(v_463);
    goto v_22;
    v_463 = nil;
v_22:
    stack[-4] = v_463;
    v_464 = stack[-4];
    v_463 = basic_elt(env, 1); // true
    if (v_464 == v_463) goto v_37;
    else goto v_38;
v_37:
    v_463 = lisp_true;
    goto v_36;
v_38:
    v_464 = stack[-4];
    v_463 = basic_elt(env, 2); // false
    v_463 = (v_464 == v_463 ? lisp_true : nil);
    goto v_36;
    v_463 = nil;
v_36:
    if (v_463 == nil) goto v_34;
    v_463 = stack[-1];
    goto v_12;
v_34:
    v_464 = stack[-4];
    v_463 = basic_elt(env, 3); // or
    if (v_464 == v_463) goto v_54;
    else goto v_55;
v_54:
    v_463 = lisp_true;
    goto v_53;
v_55:
    v_464 = stack[-4];
    v_463 = basic_elt(env, 4); // and
    v_463 = (v_464 == v_463 ? lisp_true : nil);
    goto v_53;
    v_463 = nil;
v_53:
    if (v_463 == nil) goto v_51;
    stack[0] = stack[-4];
    v_463 = stack[-1];
    if (!car_legal(v_463)) stack[-1] = cdrerror(v_463); else
    stack[-1] = cdr(v_463);
    v_463 = stack[-2];
    v_463 = ncons(v_463);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 16); // cl_smsimpl!-junct
    v_463 = (*qfn4up(fn))(fn, stack[0], stack[-1], stack[-3], v_463);
    }
    env = stack[-5];
    v_464 = v_463;
    v_463 = v_464;
    if (v_463 == nil) goto v_75;
    v_463 = v_464;
    if (!car_legal(v_463)) v_463 = cdrerror(v_463); else
    v_463 = cdr(v_463);
    if (v_463 == nil) goto v_75;
    v_463 = stack[-4];
    return cons(v_463, v_464);
v_75:
    v_463 = v_464;
    if (v_463 == nil) goto v_84;
    else goto v_85;
v_84:
    v_464 = stack[-4];
    v_463 = basic_elt(env, 4); // and
    if (v_464 == v_463) goto v_89;
    else goto v_90;
v_89:
    v_463 = basic_elt(env, 1); // true
    goto v_88;
v_90:
    v_463 = basic_elt(env, 2); // false
    goto v_88;
    v_463 = nil;
v_88:
    goto v_73;
v_85:
    v_463 = v_464;
    if (!car_legal(v_463)) v_463 = carerror(v_463); else
    v_463 = car(v_463);
    goto v_73;
    v_463 = nil;
v_73:
    goto v_12;
v_51:
    v_464 = stack[-4];
    v_463 = basic_elt(env, 5); // not
    if (v_464 == v_463) goto v_103;
    else goto v_104;
v_103:
    v_463 = stack[-1];
    if (!car_legal(v_463)) v_463 = cdrerror(v_463); else
    v_463 = cdr(v_463);
    if (!car_legal(v_463)) stack[0] = carerror(v_463); else
    stack[0] = car(v_463);
    stack[-1] = stack[-3];
    v_463 = stack[-2];
    stack[-2] = sub1(v_463);
    env = stack[-5];
    v_463 = basic_elt(env, 5); // not
    v_463 = ncons(v_463);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 0); // cl_simpl1
    v_463 = (*qfn4up(fn))(fn, stack[0], stack[-1], stack[-2], v_463);
    }
    env = stack[-5];
    stack[-2] = v_463;
    v_464 = stack[-2];
    v_463 = basic_elt(env, 1); // true
    if (v_464 == v_463) goto v_122;
    else goto v_123;
v_122:
    v_463 = lisp_true;
    goto v_121;
v_123:
    v_464 = stack[-2];
    v_463 = basic_elt(env, 2); // false
    v_463 = (v_464 == v_463 ? lisp_true : nil);
    goto v_121;
    v_463 = nil;
v_121:
    if (v_463 == nil) goto v_119;
    v_463 = stack[-2];
    {
        LispObject fn = basic_elt(env, 17); // cl_flip
        return (*qfn1(fn))(fn, v_463);
    }
v_119:
    v_463 = stack[-2];
    {   LispObject fn = basic_elt(env, 18); // cl_atfp
    v_463 = (*qfn1(fn))(fn, v_463);
    }
    env = stack[-5];
    if (v_463 == nil) goto v_137;
    v_463 = stack[-2];
    {
        LispObject fn = basic_elt(env, 19); // rl_negateat
        return (*qfn1(fn))(fn, v_463);
    }
v_137:
    v_463 = stack[-2];
    {
        LispObject fn = basic_elt(env, 20); // cl_negate!-invol
        return (*qfn1(fn))(fn, v_463);
    }
v_104:
    v_464 = stack[-4];
    v_463 = basic_elt(env, 6); // ex
    if (v_464 == v_463) goto v_150;
    else goto v_151;
v_150:
    v_463 = lisp_true;
    goto v_149;
v_151:
    v_464 = stack[-4];
    v_463 = basic_elt(env, 7); // all
    v_463 = (v_464 == v_463 ? lisp_true : nil);
    goto v_149;
    v_463 = nil;
v_149:
    if (v_463 == nil) goto v_147;
    v_463 = qvalue(basic_elt(env, 8)); // !*rlsism
    if (v_463 == nil) goto v_163;
    v_464 = stack[-3];
    v_463 = stack[-1];
    if (!car_legal(v_463)) v_463 = cdrerror(v_463); else
    v_463 = cdr(v_463);
    if (!car_legal(v_463)) v_463 = carerror(v_463); else
    v_463 = car(v_463);
    {   LispObject fn = basic_elt(env, 21); // rl_smrmknowl
    v_463 = (*qfn2(fn))(fn, v_464, v_463);
    }
    env = stack[-5];
    stack[-3] = v_463;
    goto v_161;
v_163:
v_161:
    v_463 = stack[-1];
    if (!car_legal(v_463)) v_463 = cdrerror(v_463); else
    v_463 = cdr(v_463);
    if (!car_legal(v_463)) v_463 = cdrerror(v_463); else
    v_463 = cdr(v_463);
    if (!car_legal(v_463)) stack[0] = carerror(v_463); else
    stack[0] = car(v_463);
    v_463 = stack[-2];
    stack[-2] = sub1(v_463);
    env = stack[-5];
    v_463 = stack[-4];
    v_463 = ncons(v_463);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 0); // cl_simpl1
    v_463 = (*qfn4up(fn))(fn, stack[0], stack[-3], stack[-2], v_463);
    }
    env = stack[-5];
    stack[-2] = v_463;
    v_464 = stack[-2];
    v_463 = basic_elt(env, 1); // true
    if (v_464 == v_463) goto v_186;
    else goto v_187;
v_186:
    v_463 = lisp_true;
    goto v_185;
v_187:
    v_464 = stack[-2];
    v_463 = basic_elt(env, 2); // false
    v_463 = (v_464 == v_463 ? lisp_true : nil);
    goto v_185;
    v_463 = nil;
v_185:
    if (v_463 == nil) goto v_183;
    v_463 = stack[-2];
    goto v_12;
v_183:
    v_463 = stack[-1];
    if (!car_legal(v_463)) v_463 = cdrerror(v_463); else
    v_463 = cdr(v_463);
    if (!car_legal(v_463)) stack[0] = carerror(v_463); else
    stack[0] = car(v_463);
    v_463 = stack[-2];
    {   LispObject fn = basic_elt(env, 22); // cl_fvarl
    v_463 = (*qfn1(fn))(fn, v_463);
    }
    v_463 = Lmemq(nil, stack[0], v_463);
    if (v_463 == nil) goto v_199;
    else goto v_200;
v_199:
    v_463 = stack[-2];
    goto v_12;
v_200:
    v_465 = stack[-4];
    v_463 = stack[-1];
    if (!car_legal(v_463)) v_463 = cdrerror(v_463); else
    v_463 = cdr(v_463);
    if (!car_legal(v_463)) v_464 = carerror(v_463); else
    v_464 = car(v_463);
    v_463 = stack[-2];
    return list3(v_465, v_464, v_463);
v_147:
    v_464 = stack[-4];
    v_463 = basic_elt(env, 9); // bex
    if (v_464 == v_463) goto v_220;
    else goto v_221;
v_220:
    v_463 = lisp_true;
    goto v_219;
v_221:
    v_464 = stack[-4];
    v_463 = basic_elt(env, 10); // ball
    v_463 = (v_464 == v_463 ? lisp_true : nil);
    goto v_219;
    v_463 = nil;
v_219:
    if (v_463 == nil) goto v_217;
    v_463 = qvalue(basic_elt(env, 8)); // !*rlsism
    if (v_463 == nil) goto v_233;
    v_464 = stack[-3];
    v_463 = stack[-1];
    if (!car_legal(v_463)) v_463 = cdrerror(v_463); else
    v_463 = cdr(v_463);
    if (!car_legal(v_463)) v_463 = carerror(v_463); else
    v_463 = car(v_463);
    {   LispObject fn = basic_elt(env, 21); // rl_smrmknowl
    v_463 = (*qfn2(fn))(fn, v_464, v_463);
    }
    env = stack[-5];
    stack[-3] = v_463;
    goto v_231;
v_233:
v_231:
    v_465 = stack[-1];
    v_464 = stack[-3];
    v_463 = stack[-2];
    {
        LispObject fn = basic_elt(env, 23); // cl_simplbq
        return (*qfn3(fn))(fn, v_465, v_464, v_463);
    }
v_217:
    v_464 = stack[-4];
    v_463 = basic_elt(env, 11); // impl
    if (v_464 == v_463) goto v_246;
    else goto v_247;
v_246:
    v_463 = stack[-1];
    if (!car_legal(v_463)) v_463 = cdrerror(v_463); else
    v_463 = cdr(v_463);
    if (!car_legal(v_463)) stack[0] = carerror(v_463); else
    stack[0] = car(v_463);
    v_463 = stack[-1];
    if (!car_legal(v_463)) v_463 = cdrerror(v_463); else
    v_463 = cdr(v_463);
    if (!car_legal(v_463)) v_463 = cdrerror(v_463); else
    v_463 = cdr(v_463);
    if (!car_legal(v_463)) stack[-1] = carerror(v_463); else
    stack[-1] = car(v_463);
    v_463 = stack[-2];
    v_463 = ncons(v_463);
    env = stack[-5];
    {
        LispObject v_471 = stack[0];
        LispObject v_472 = stack[-1];
        LispObject v_473 = stack[-3];
        LispObject fn = basic_elt(env, 24); // cl_smsimpl!-imprep
        return (*qfn4up(fn))(fn, v_471, v_472, v_473, v_463);
    }
v_247:
    v_464 = stack[-4];
    v_463 = basic_elt(env, 12); // repl
    if (v_464 == v_463) goto v_263;
    else goto v_264;
v_263:
    v_463 = stack[-1];
    if (!car_legal(v_463)) v_463 = cdrerror(v_463); else
    v_463 = cdr(v_463);
    if (!car_legal(v_463)) v_463 = cdrerror(v_463); else
    v_463 = cdr(v_463);
    if (!car_legal(v_463)) stack[0] = carerror(v_463); else
    stack[0] = car(v_463);
    v_463 = stack[-1];
    if (!car_legal(v_463)) v_463 = cdrerror(v_463); else
    v_463 = cdr(v_463);
    if (!car_legal(v_463)) stack[-1] = carerror(v_463); else
    stack[-1] = car(v_463);
    v_463 = stack[-2];
    v_463 = ncons(v_463);
    env = stack[-5];
    {
        LispObject v_474 = stack[0];
        LispObject v_475 = stack[-1];
        LispObject v_476 = stack[-3];
        LispObject fn = basic_elt(env, 24); // cl_smsimpl!-imprep
        return (*qfn4up(fn))(fn, v_474, v_475, v_476, v_463);
    }
v_264:
    v_464 = stack[-4];
    v_463 = basic_elt(env, 13); // equiv
    if (v_464 == v_463) goto v_280;
    else goto v_281;
v_280:
    v_463 = stack[-1];
    if (!car_legal(v_463)) v_463 = cdrerror(v_463); else
    v_463 = cdr(v_463);
    if (!car_legal(v_463)) stack[0] = carerror(v_463); else
    stack[0] = car(v_463);
    v_463 = stack[-1];
    if (!car_legal(v_463)) v_463 = cdrerror(v_463); else
    v_463 = cdr(v_463);
    if (!car_legal(v_463)) v_463 = cdrerror(v_463); else
    v_463 = cdr(v_463);
    if (!car_legal(v_463)) stack[-1] = carerror(v_463); else
    stack[-1] = car(v_463);
    v_463 = stack[-2];
    v_463 = ncons(v_463);
    env = stack[-5];
    {
        LispObject v_477 = stack[0];
        LispObject v_478 = stack[-1];
        LispObject v_479 = stack[-3];
        LispObject fn = basic_elt(env, 25); // cl_smsimpl!-equiv
        return (*qfn4up(fn))(fn, v_477, v_478, v_479, v_463);
    }
v_281:
    v_464 = stack[-4];
    v_463 = basic_elt(env, 14); // cl_simpl
    {   LispObject fn = basic_elt(env, 26); // rl_external
    v_463 = (*qfn2(fn))(fn, v_464, v_463);
    }
    env = stack[-5];
    v_465 = v_463;
    if (v_463 == nil) goto v_298;
    stack[0] = v_465;
    v_463 = stack[-1];
    v_463 = ncons(v_463);
    env = stack[-5];
    {
        LispObject v_480 = stack[0];
        LispObject fn = basic_elt(env, 27); // apply
        return (*qfn2(fn))(fn, v_480, v_463);
    }
v_298:
    v_464 = stack[-1];
    v_463 = stack[0];
    {   LispObject fn = basic_elt(env, 28); // cl_simplat
    v_463 = (*qfn2(fn))(fn, v_464, v_463);
    }
    env = stack[-5];
    v_465 = v_463;
    v_463 = qvalue(basic_elt(env, 8)); // !*rlsism
    if (v_463 == nil) goto v_312;
    v_463 = v_465;
    if (!consp(v_463)) goto v_316;
    else goto v_317;
v_316:
    v_463 = v_465;
    goto v_315;
v_317:
    v_463 = v_465;
    if (!car_legal(v_463)) v_463 = carerror(v_463); else
    v_463 = car(v_463);
    goto v_315;
    v_463 = nil;
v_315:
    stack[-4] = v_463;
    v_464 = stack[-4];
    v_463 = basic_elt(env, 3); // or
    if (v_464 == v_463) goto v_330;
    else goto v_331;
v_330:
    v_463 = lisp_true;
    goto v_329;
v_331:
    v_464 = stack[-4];
    v_463 = basic_elt(env, 4); // and
    v_463 = (v_464 == v_463 ? lisp_true : nil);
    goto v_329;
    v_463 = nil;
v_329:
    if (v_463 == nil) goto v_327;
    stack[-1] = stack[-4];
    v_463 = v_465;
    if (!car_legal(v_463)) stack[0] = cdrerror(v_463); else
    stack[0] = cdr(v_463);
    v_463 = stack[-2];
    v_463 = ncons(v_463);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 16); // cl_smsimpl!-junct
    v_463 = (*qfn4up(fn))(fn, stack[-1], stack[0], stack[-3], v_463);
    }
    env = stack[-5];
    v_464 = v_463;
    v_463 = v_464;
    if (v_463 == nil) goto v_351;
    v_463 = v_464;
    if (!car_legal(v_463)) v_463 = cdrerror(v_463); else
    v_463 = cdr(v_463);
    if (v_463 == nil) goto v_351;
    v_463 = stack[-4];
    return cons(v_463, v_464);
v_351:
    v_463 = v_464;
    if (v_463 == nil) goto v_360;
    else goto v_361;
v_360:
    v_464 = stack[-4];
    v_463 = basic_elt(env, 4); // and
    if (v_464 == v_463) goto v_365;
    else goto v_366;
v_365:
    v_463 = basic_elt(env, 1); // true
    goto v_364;
v_366:
    v_463 = basic_elt(env, 2); // false
    goto v_364;
    v_463 = nil;
v_364:
    goto v_349;
v_361:
    v_463 = v_464;
    if (!car_legal(v_463)) v_463 = carerror(v_463); else
    v_463 = car(v_463);
    goto v_349;
    v_463 = nil;
v_349:
    goto v_12;
v_327:
    v_464 = stack[-4];
    v_463 = basic_elt(env, 1); // true
    if (v_464 == v_463) goto v_383;
    else goto v_384;
v_383:
    v_463 = lisp_true;
    goto v_382;
v_384:
    v_464 = stack[-4];
    v_463 = basic_elt(env, 2); // false
    v_463 = (v_464 == v_463 ? lisp_true : nil);
    goto v_382;
    v_463 = nil;
v_382:
    if (v_463 == nil) goto v_380;
    v_463 = v_465;
    goto v_12;
v_380:
    stack[-4] = basic_elt(env, 4); // and
    v_463 = v_465;
    stack[-1] = ncons(v_463);
    env = stack[-5];
    v_463 = stack[-3];
    {   LispObject fn = basic_elt(env, 29); // rl_smcpknowl
    stack[0] = (*qfn1(fn))(fn, v_463);
    }
    env = stack[-5];
    v_463 = stack[-2];
    v_463 = ncons(v_463);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 30); // rl_smupdknowl
    v_463 = (*qfn4up(fn))(fn, stack[-4], stack[-1], stack[0], v_463);
    }
    env = stack[-5];
    v_465 = v_463;
    v_464 = v_465;
    v_463 = basic_elt(env, 2); // false
    if (v_464 == v_463) goto v_404;
    else goto v_405;
v_404:
    v_463 = basic_elt(env, 2); // false
    goto v_12;
v_405:
    stack[-1] = basic_elt(env, 4); // and
    stack[0] = v_465;
    v_463 = stack[-2];
    v_463 = ncons(v_463);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 31); // rl_smmkatl
    v_463 = (*qfn4up(fn))(fn, stack[-1], stack[-3], stack[0], v_463);
    }
    env = stack[-5];
    v_465 = v_463;
    v_464 = v_465;
    v_463 = basic_elt(env, 2); // false
    if (v_464 == v_463) goto v_417;
    else goto v_418;
v_417:
    v_463 = basic_elt(env, 2); // false
    goto v_416;
v_418:
    v_463 = v_465;
    if (v_463 == nil) goto v_427;
    v_463 = v_465;
    if (!car_legal(v_463)) v_463 = cdrerror(v_463); else
    v_463 = cdr(v_463);
    if (v_463 == nil) goto v_427;
    v_463 = basic_elt(env, 4); // and
    v_464 = v_465;
    return cons(v_463, v_464);
v_427:
    v_463 = v_465;
    if (v_463 == nil) goto v_436;
    else goto v_437;
v_436:
    v_464 = basic_elt(env, 4); // and
    v_463 = basic_elt(env, 4); // and
    if (v_464 == v_463) goto v_441;
    else goto v_442;
v_441:
    v_463 = basic_elt(env, 1); // true
    goto v_440;
v_442:
    v_463 = basic_elt(env, 2); // false
    goto v_440;
    v_463 = nil;
v_440:
    goto v_425;
v_437:
    v_463 = v_465;
    if (!car_legal(v_463)) v_463 = carerror(v_463); else
    v_463 = car(v_463);
    goto v_425;
    v_463 = nil;
v_425:
    goto v_416;
    v_463 = nil;
v_416:
    goto v_12;
v_312:
    v_463 = v_465;
    if (v_463 == nil) goto v_456;
    v_463 = v_465;
    goto v_12;
v_456:
    v_464 = basic_elt(env, 15); // "cl_simpl1(): unknown operator"
    v_463 = stack[-4];
    v_463 = list2(v_464, v_463);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 32); // rederr
    v_463 = (*qfn1(fn))(fn, v_463);
    }
    v_463 = nil;
v_12:
    return onevalue(v_463);
}



// Code for pasf_pdp

static LispObject CC_pasf_pdp(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_163, v_164, v_165;
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
    v_163 = stack[0];
    if (!consp(v_163)) goto v_14;
    else goto v_15;
v_14:
    v_163 = lisp_true;
    goto v_13;
v_15:
    v_163 = stack[0];
    if (!car_legal(v_163)) v_163 = carerror(v_163); else
    v_163 = car(v_163);
    v_163 = (consp(v_163) ? nil : lisp_true);
    goto v_13;
    v_163 = nil;
v_13:
    if (v_163 == nil) goto v_11;
    v_163 = stack[0];
    if (v_163 == nil) goto v_25;
    else goto v_26;
v_25:
    v_163 = basic_elt(env, 1); // indef
    goto v_24;
v_26:
    v_164 = stack[0];
    v_163 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_163 = static_cast<LispObject>(lessp2(v_164, v_163));
    v_163 = v_163 ? lisp_true : nil;
    env = stack[-2];
    if (v_163 == nil) goto v_30;
    v_163 = basic_elt(env, 2); // ndef
    goto v_24;
v_30:
    v_164 = stack[0];
    v_163 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_163 = static_cast<LispObject>(greaterp2(v_164, v_163));
    v_163 = v_163 ? lisp_true : nil;
    env = stack[-2];
    if (v_163 == nil) goto v_36;
    v_163 = basic_elt(env, 3); // pdef
    goto v_24;
v_36:
    v_163 = basic_elt(env, 1); // indef
    goto v_24;
    v_163 = nil;
v_24:
    goto v_7;
v_11:
    v_163 = stack[0];
    if (!car_legal(v_163)) v_163 = carerror(v_163); else
    v_163 = car(v_163);
    if (!car_legal(v_163)) v_163 = carerror(v_163); else
    v_163 = car(v_163);
    if (!car_legal(v_163)) v_163 = cdrerror(v_163); else
    v_163 = cdr(v_163);
    v_163 = Levenp(nil, v_163);
    env = stack[-2];
    if (v_163 == nil) goto v_47;
    v_163 = stack[0];
    if (!car_legal(v_163)) v_163 = carerror(v_163); else
    v_163 = car(v_163);
    if (!car_legal(v_163)) v_163 = cdrerror(v_163); else
    v_163 = cdr(v_163);
    {   LispObject fn = basic_elt(env, 0); // pasf_pdp
    v_163 = (*qfn1(fn))(fn, v_163);
    }
    env = stack[-2];
    stack[-1] = v_163;
    v_163 = stack[0];
    if (!car_legal(v_163)) v_163 = cdrerror(v_163); else
    v_163 = cdr(v_163);
    {   LispObject fn = basic_elt(env, 0); // pasf_pdp
    v_163 = (*qfn1(fn))(fn, v_163);
    }
    env = stack[-2];
    v_165 = v_163;
    v_163 = v_165;
    if (v_163 == nil) goto v_66;
    else goto v_67;
v_66:
    v_164 = stack[-1];
    v_163 = basic_elt(env, 4); // psdef
    if (v_164 == v_163) goto v_71;
    else goto v_72;
v_71:
    v_163 = lisp_true;
    goto v_70;
v_72:
    v_164 = stack[-1];
    v_163 = basic_elt(env, 3); // pdef
    v_163 = (v_164 == v_163 ? lisp_true : nil);
    goto v_70;
    v_163 = nil;
v_70:
    goto v_65;
v_67:
    v_163 = nil;
    goto v_65;
    v_163 = nil;
v_65:
    if (v_163 == nil) goto v_63;
    v_163 = basic_elt(env, 4); // psdef
    goto v_7;
v_63:
    v_163 = v_165;
    if (v_163 == nil) goto v_91;
    else goto v_92;
v_91:
    v_164 = stack[-1];
    v_163 = basic_elt(env, 5); // nsdef
    if (v_164 == v_163) goto v_96;
    else goto v_97;
v_96:
    v_163 = lisp_true;
    goto v_95;
v_97:
    v_164 = stack[-1];
    v_163 = basic_elt(env, 2); // ndef
    v_163 = (v_164 == v_163 ? lisp_true : nil);
    goto v_95;
    v_163 = nil;
v_95:
    goto v_90;
v_92:
    v_163 = nil;
    goto v_90;
    v_163 = nil;
v_90:
    if (v_163 == nil) goto v_88;
    v_163 = basic_elt(env, 5); // nsdef
    goto v_7;
v_88:
    v_164 = v_165;
    v_163 = basic_elt(env, 3); // pdef
    if (v_164 == v_163) goto v_116;
    else goto v_117;
v_116:
    v_164 = stack[-1];
    v_163 = basic_elt(env, 4); // psdef
    if (v_164 == v_163) goto v_122;
    else goto v_123;
v_122:
    v_163 = lisp_true;
    goto v_121;
v_123:
    v_164 = stack[-1];
    v_163 = basic_elt(env, 3); // pdef
    v_163 = (v_164 == v_163 ? lisp_true : nil);
    goto v_121;
    v_163 = nil;
v_121:
    goto v_115;
v_117:
    v_163 = nil;
    goto v_115;
    v_163 = nil;
v_115:
    if (v_163 == nil) goto v_113;
    v_163 = basic_elt(env, 3); // pdef
    goto v_7;
v_113:
    v_164 = v_165;
    v_163 = basic_elt(env, 2); // ndef
    if (v_164 == v_163) goto v_142;
    else goto v_143;
v_142:
    v_164 = stack[-1];
    v_163 = basic_elt(env, 5); // nsdef
    if (v_164 == v_163) goto v_148;
    else goto v_149;
v_148:
    v_163 = lisp_true;
    goto v_147;
v_149:
    v_164 = stack[-1];
    v_163 = basic_elt(env, 2); // ndef
    v_163 = (v_164 == v_163 ? lisp_true : nil);
    goto v_147;
    v_163 = nil;
v_147:
    goto v_141;
v_143:
    v_163 = nil;
    goto v_141;
    v_163 = nil;
v_141:
    if (v_163 == nil) goto v_139;
    v_163 = basic_elt(env, 2); // ndef
    goto v_7;
v_139:
    goto v_45;
v_47:
v_45:
    v_163 = basic_elt(env, 1); // indef
v_7:
    return onevalue(v_163);
}



// Code for bc_zero!?

static LispObject CC_bc_zeroW(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_7;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_7 = v_2;
// end of prologue
    if (!car_legal(v_7)) v_7 = carerror(v_7); else
    v_7 = car(v_7);
    v_7 = (v_7 == nil ? lisp_true : nil);
    return onevalue(v_7);
}



// Code for get!-height

static LispObject CC_getKheight(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_25 = stack[0];
    if (v_25 == nil) goto v_6;
    else goto v_7;
v_6:
    v_25 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_5;
v_7:
    v_25 = stack[0];
    if (is_number(v_25)) goto v_10;
    else goto v_11;
v_10:
    v_25 = stack[0];
        return Labsval(nil, v_25);
v_11:
    v_25 = stack[0];
    if (!car_legal(v_25)) v_25 = carerror(v_25); else
    v_25 = car(v_25);
    if (!car_legal(v_25)) v_25 = cdrerror(v_25); else
    v_25 = cdr(v_25);
    {   LispObject fn = basic_elt(env, 0); // get!-height
    stack[-1] = (*qfn1(fn))(fn, v_25);
    }
    env = stack[-2];
    v_25 = stack[0];
    if (!car_legal(v_25)) v_25 = cdrerror(v_25); else
    v_25 = cdr(v_25);
    {   LispObject fn = basic_elt(env, 0); // get!-height
    v_25 = (*qfn1(fn))(fn, v_25);
    }
    env = stack[-2];
    {
        LispObject v_28 = stack[-1];
        LispObject fn = basic_elt(env, 1); // max
        return (*qfn2(fn))(fn, v_28, v_25);
    }
    v_25 = nil;
v_5:
    return onevalue(v_25);
}



// Code for mchkopt1

static LispObject CC_mchkopt1(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    stack[-4] = v_4;
    v_141 = v_3;
    v_143 = v_2;
// end of prologue
    if (!car_legal(v_141)) v_141 = cdrerror(v_141); else
    v_141 = cdr(v_141);
    v_142 = v_141;
    if (v_141 == nil) goto v_13;
    else goto v_14;
v_13:
    v_141 = nil;
    goto v_10;
v_14:
    v_141 = v_142;
    if (!car_legal(v_141)) v_141 = carerror(v_141); else
    v_141 = car(v_141);
    stack[-3] = v_141;
    v_141 = v_142;
    if (!car_legal(v_141)) v_141 = cdrerror(v_141); else
    v_141 = cdr(v_141);
    v_142 = v_141;
    if (v_141 == nil) goto v_22;
    else goto v_23;
v_22:
    v_141 = nil;
    goto v_10;
v_23:
    v_141 = v_142;
    if (!car_legal(v_141)) v_141 = carerror(v_141); else
    v_141 = car(v_141);
    stack[-5] = v_141;
    v_141 = v_142;
    if (!car_legal(v_141)) v_141 = cdrerror(v_141); else
    v_141 = cdr(v_141);
    if (v_141 == nil) goto v_32;
    v_141 = nil;
    goto v_10;
v_32:
    v_141 = stack[-3];
    if (!symbolp(v_141)) v_141 = nil;
    else { v_141 = qfastgets(v_141);
           if (v_141 != nil) { v_141 = elt(v_141, 6); // optional
#ifdef RECORD_GET
             if (v_141 == SPID_NOPROP)
                record_get(elt(fastget_names, 6), 0),
                v_141 = nil;
             else record_get(elt(fastget_names, 6), 1),
                v_141 = lisp_true; }
           else record_get(elt(fastget_names, 6), 0); }
#else
             if (v_141 == SPID_NOPROP) v_141 = nil; else v_141 = lisp_true; }}
#endif
    if (v_141 == nil) goto v_39;
    v_142 = v_143;
    v_141 = stack[-5];
    {   LispObject fn = basic_elt(env, 1); // mchk
    v_141 = (*qfn2(fn))(fn, v_142, v_141);
    }
    env = stack[-6];
    stack[-5] = v_141;
    v_141 = stack[-5];
    if (v_141 == nil) goto v_53;
    else goto v_54;
v_53:
    v_141 = nil;
    goto v_46;
v_54:
    v_141 = stack[-5];
    if (!car_legal(v_141)) v_141 = carerror(v_141); else
    v_141 = car(v_141);
    v_143 = stack[-3];
    v_142 = stack[-4];
    if (!car_legal(v_142)) v_142 = carerror(v_142); else
    v_142 = car(v_142);
    v_141 = acons(v_143, v_142, v_141);
    env = stack[-6];
    v_141 = ncons(v_141);
    env = stack[-6];
    stack[-1] = v_141;
    stack[-2] = v_141;
v_47:
    v_141 = stack[-5];
    if (!car_legal(v_141)) v_141 = cdrerror(v_141); else
    v_141 = cdr(v_141);
    stack[-5] = v_141;
    v_141 = stack[-5];
    if (v_141 == nil) goto v_70;
    else goto v_71;
v_70:
    v_141 = stack[-2];
    goto v_46;
v_71:
    stack[0] = stack[-1];
    v_141 = stack[-5];
    if (!car_legal(v_141)) v_141 = carerror(v_141); else
    v_141 = car(v_141);
    v_143 = stack[-3];
    v_142 = stack[-4];
    if (!car_legal(v_142)) v_142 = carerror(v_142); else
    v_142 = car(v_142);
    v_141 = acons(v_143, v_142, v_141);
    env = stack[-6];
    v_141 = ncons(v_141);
    env = stack[-6];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_141);
    v_141 = stack[-1];
    if (!car_legal(v_141)) v_141 = cdrerror(v_141); else
    v_141 = cdr(v_141);
    stack[-1] = v_141;
    goto v_47;
v_46:
    goto v_37;
v_39:
    v_141 = stack[-5];
    if (!symbolp(v_141)) v_141 = nil;
    else { v_141 = qfastgets(v_141);
           if (v_141 != nil) { v_141 = elt(v_141, 6); // optional
#ifdef RECORD_GET
             if (v_141 == SPID_NOPROP)
                record_get(elt(fastget_names, 6), 0),
                v_141 = nil;
             else record_get(elt(fastget_names, 6), 1),
                v_141 = lisp_true; }
           else record_get(elt(fastget_names, 6), 0); }
#else
             if (v_141 == SPID_NOPROP) v_141 = nil; else v_141 = lisp_true; }}
#endif
    if (v_141 == nil) goto v_88;
    v_142 = v_143;
    v_141 = stack[-3];
    {   LispObject fn = basic_elt(env, 1); // mchk
    v_141 = (*qfn2(fn))(fn, v_142, v_141);
    }
    env = stack[-6];
    stack[-3] = v_141;
    v_141 = stack[-3];
    if (v_141 == nil) goto v_102;
    else goto v_103;
v_102:
    v_141 = nil;
    goto v_95;
v_103:
    v_141 = stack[-3];
    if (!car_legal(v_141)) v_141 = carerror(v_141); else
    v_141 = car(v_141);
    v_143 = stack[-5];
    v_142 = stack[-4];
    if (!car_legal(v_142)) v_142 = cdrerror(v_142); else
    v_142 = cdr(v_142);
    if (!car_legal(v_142)) v_142 = carerror(v_142); else
    v_142 = car(v_142);
    v_141 = acons(v_143, v_142, v_141);
    env = stack[-6];
    v_141 = ncons(v_141);
    env = stack[-6];
    stack[-1] = v_141;
    stack[-2] = v_141;
v_96:
    v_141 = stack[-3];
    if (!car_legal(v_141)) v_141 = cdrerror(v_141); else
    v_141 = cdr(v_141);
    stack[-3] = v_141;
    v_141 = stack[-3];
    if (v_141 == nil) goto v_120;
    else goto v_121;
v_120:
    v_141 = stack[-2];
    goto v_95;
v_121:
    stack[0] = stack[-1];
    v_141 = stack[-3];
    if (!car_legal(v_141)) v_141 = carerror(v_141); else
    v_141 = car(v_141);
    v_143 = stack[-5];
    v_142 = stack[-4];
    if (!car_legal(v_142)) v_142 = cdrerror(v_142); else
    v_142 = cdr(v_142);
    if (!car_legal(v_142)) v_142 = carerror(v_142); else
    v_142 = car(v_142);
    v_141 = acons(v_143, v_142, v_141);
    env = stack[-6];
    v_141 = ncons(v_141);
    env = stack[-6];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_141);
    v_141 = stack[-1];
    if (!car_legal(v_141)) v_141 = cdrerror(v_141); else
    v_141 = cdr(v_141);
    stack[-1] = v_141;
    goto v_96;
v_95:
    goto v_37;
v_88:
    v_141 = nil;
    goto v_37;
    v_141 = nil;
v_37:
v_10:
    return onevalue(v_141);
}



// Code for simprecip

static LispObject CC_simprecip(LispObject env,
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
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_23 = v_2;
// end of prologue
    v_22 = qvalue(basic_elt(env, 1)); // !*mcd
    if (v_22 == nil) goto v_6;
    else goto v_7;
v_6:
    v_22 = basic_elt(env, 2); // recip
    {   LispObject fn = basic_elt(env, 3); // carx
    v_23 = (*qfn2(fn))(fn, v_23, v_22);
    }
    env = stack[0];
    v_22 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    v_22 = list2(v_23, v_22);
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 4); // simpexpt
        return (*qfn1(fn))(fn, v_22);
    }
v_7:
    v_22 = basic_elt(env, 2); // recip
    {   LispObject fn = basic_elt(env, 3); // carx
    v_22 = (*qfn2(fn))(fn, v_23, v_22);
    }
    env = stack[0];
    {   LispObject fn = basic_elt(env, 5); // simp
    v_22 = (*qfn1(fn))(fn, v_22);
    }
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 6); // invsq
        return (*qfn1(fn))(fn, v_22);
    }
    v_22 = nil;
    return onevalue(v_22);
}



// Code for rd!:prep

static LispObject CC_rdTprep(LispObject env,
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
    v_26 = qvalue(basic_elt(env, 1)); // !*noconvert
    if (v_26 == nil) goto v_7;
    v_26 = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // rdprep1
        return (*qfn1(fn))(fn, v_26);
    }
v_7:
    v_26 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // rd!:onep
    v_26 = (*qfn1(fn))(fn, v_26);
    }
    env = stack[-1];
    if (v_26 == nil) goto v_12;
    v_26 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_5;
v_12:
    v_26 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // rd!:minus
    v_26 = (*qfn1(fn))(fn, v_26);
    }
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // rd!:onep
    v_26 = (*qfn1(fn))(fn, v_26);
    }
    env = stack[-1];
    if (v_26 == nil) goto v_17;
    v_26 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    goto v_5;
v_17:
    v_26 = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // rdprep1
        return (*qfn1(fn))(fn, v_26);
    }
    v_26 = nil;
v_5:
    return onevalue(v_26);
}



// Code for evmtest!?

static LispObject CC_evmtestW(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_35, v_36, v_37, v_38;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_36 = v_3;
    v_37 = v_2;
// end of prologue
v_7:
    v_35 = v_37;
    if (v_35 == nil) goto v_11;
    v_35 = v_36;
    if (v_35 == nil) goto v_11;
    v_35 = v_37;
    if (!car_legal(v_35)) v_38 = carerror(v_35); else
    v_38 = car(v_35);
    v_35 = v_36;
    if (!car_legal(v_35)) v_35 = carerror(v_35); else
    v_35 = car(v_35);
    if ((static_cast<std::intptr_t>(v_38) < static_cast<std::intptr_t>(v_35))) goto v_19;
    v_35 = v_37;
    if (!car_legal(v_35)) v_35 = cdrerror(v_35); else
    v_35 = cdr(v_35);
    v_37 = v_35;
    v_35 = v_36;
    if (!car_legal(v_35)) v_35 = cdrerror(v_35); else
    v_35 = cdr(v_35);
    v_36 = v_35;
    goto v_7;
v_19:
    v_35 = nil;
    goto v_6;
    goto v_9;
v_11:
    v_35 = v_36;
    {
        LispObject fn = basic_elt(env, 1); // evzero!?
        return (*qfn1(fn))(fn, v_35);
    }
v_9:
    v_35 = nil;
v_6:
    return onevalue(v_35);
}



// Code for expvec2a

static LispObject CC_expvec2a(LispObject env,
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
    v_7 = qvalue(basic_elt(env, 1)); // dipvars!*
    {
        LispObject fn = basic_elt(env, 2); // expvec2a1
        return (*qfn2(fn))(fn, v_8, v_7);
    }
}



// Code for treesizep

static LispObject CC_treesizep(LispObject env,
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
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_10 = v_3;
    v_11 = v_2;
// end of prologue
    {   LispObject fn = basic_elt(env, 1); // treesizep1
    v_11 = (*qfn2(fn))(fn, v_11, v_10);
    }
    v_10 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_10 = (v_11 == v_10 ? lisp_true : nil);
    return onevalue(v_10);
}



// Code for ncoeffs

static LispObject CC_ncoeffs(LispObject env,
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
    real_push(nil, nil, nil, nil, nil);
    stack_popper stack_popper_var(6);
// copy arguments values to proper place
    v_54 = v_2;
// end of prologue
    stack[-4] = nil;
    stack[-3] = nil;
    v_53 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-2] = v_53;
    v_53 = v_54;
    stack[-1] = v_53;
v_13:
    v_53 = stack[-1];
    if (v_53 == nil) goto v_17;
    else goto v_18;
v_17:
    goto v_12;
v_18:
    v_53 = stack[-1];
    if (!car_legal(v_53)) v_53 = carerror(v_53); else
    v_53 = car(v_53);
    stack[0] = v_53;
    v_53 = stack[0];
    if (!car_legal(v_53)) v_53 = carerror(v_53); else
    v_53 = car(v_53);
    stack[-4] = v_53;
v_28:
    v_54 = stack[-2];
    v_53 = stack[-4];
    v_53 = static_cast<LispObject>(lessp2(v_54, v_53));
    v_53 = v_53 ? lisp_true : nil;
    env = stack[-5];
    if (v_53 == nil) goto v_31;
    else goto v_32;
v_31:
    goto v_27;
v_32:
    v_54 = nil;
    v_53 = stack[-3];
    v_53 = cons(v_54, v_53);
    env = stack[-5];
    stack[-3] = v_53;
    v_53 = stack[-2];
    v_53 = add1(v_53);
    env = stack[-5];
    stack[-2] = v_53;
    goto v_28;
v_27:
    v_53 = stack[-2];
    v_53 = add1(v_53);
    env = stack[-5];
    stack[-2] = v_53;
    v_53 = stack[0];
    if (!car_legal(v_53)) v_54 = cdrerror(v_53); else
    v_54 = cdr(v_53);
    v_53 = stack[-3];
    v_53 = cons(v_54, v_53);
    env = stack[-5];
    stack[-3] = v_53;
    v_53 = stack[-1];
    if (!car_legal(v_53)) v_53 = cdrerror(v_53); else
    v_53 = cdr(v_53);
    stack[-1] = v_53;
    goto v_13;
v_12:
    v_54 = stack[-4];
    v_53 = stack[-3];
    return cons(v_54, v_53);
    return onevalue(v_53);
}



// Code for next!-random!-number

static LispObject CC_nextKrandomKnumber(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_49, v_50, v_51;
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
    v_50 = qvalue(basic_elt(env, 1)); // unidev_next!*
    v_49 = static_cast<LispObject>(864)+TAG_FIXNUM; // 54
    if (v_50 == v_49) goto v_8;
    else goto v_9;
v_8:
    v_49 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    setvalue(basic_elt(env, 1), v_49); // unidev_next!*
    goto v_7;
v_9:
    v_49 = qvalue(basic_elt(env, 1)); // unidev_next!*
    v_49 = static_cast<LispObject>(static_cast<std::intptr_t>(v_49) + 0x10);
    setvalue(basic_elt(env, 1), v_49); // unidev_next!*
    goto v_7;
v_7:
    v_50 = qvalue(basic_elt(env, 2)); // unidev_nextp!*
    v_49 = static_cast<LispObject>(864)+TAG_FIXNUM; // 54
    if (v_50 == v_49) goto v_19;
    else goto v_20;
v_19:
    v_49 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    setvalue(basic_elt(env, 2), v_49); // unidev_nextp!*
    goto v_18;
v_20:
    v_49 = qvalue(basic_elt(env, 2)); // unidev_nextp!*
    v_49 = static_cast<LispObject>(static_cast<std::intptr_t>(v_49) + 0x10);
    setvalue(basic_elt(env, 2), v_49); // unidev_nextp!*
    goto v_18;
v_18:
    v_50 = qvalue(basic_elt(env, 3)); // unidev_vec!*
    v_49 = qvalue(basic_elt(env, 1)); // unidev_next!*
    stack[0] = Lgetv(nil, v_50, v_49);
    env = stack[-1];
    v_50 = qvalue(basic_elt(env, 3)); // unidev_vec!*
    v_49 = qvalue(basic_elt(env, 2)); // unidev_nextp!*
    v_49 = Lgetv(nil, v_50, v_49);
    env = stack[-1];
    v_49 = static_cast<LispObject>(static_cast<std::uintptr_t>(stack[0]) - static_cast<std::uintptr_t>(v_49) + TAG_FIXNUM);
    stack[0] = v_49;
    v_49 = stack[0];
    v_49 = (static_cast<std::intptr_t>(v_49) < 0 ? lisp_true : nil);
    if (v_49 == nil) goto v_38;
    v_50 = stack[0];
    v_49 = qvalue(basic_elt(env, 4)); // randommodulus!*
    v_49 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_50) + static_cast<std::uintptr_t>(v_49) - TAG_FIXNUM);
    stack[0] = v_49;
    goto v_36;
v_38:
v_36:
    v_51 = qvalue(basic_elt(env, 3)); // unidev_vec!*
    v_50 = qvalue(basic_elt(env, 1)); // unidev_next!*
    v_49 = stack[0];
    v_49 = Lputv(nil, v_51, v_50, v_49);
    v_49 = stack[0];
    return onevalue(v_49);
}



// Code for nfactorial

static LispObject CC_nfactorial(LispObject env,
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
    stack[-1] = v_2;
// end of prologue
    v_41 = stack[-1];
    v_40 = static_cast<LispObject>(320)+TAG_FIXNUM; // 20
    v_40 = static_cast<LispObject>(greaterp2(v_41, v_40));
    v_40 = v_40 ? lisp_true : nil;
    env = stack[-3];
    if (v_40 == nil) goto v_7;
    v_41 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_40 = stack[-1];
    {
        LispObject fn = basic_elt(env, 1); // fac!-part
        return (*qfn2(fn))(fn, v_41, v_40);
    }
v_7:
    v_40 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-2] = v_40;
    v_40 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[0] = v_40;
v_23:
    v_41 = stack[-1];
    v_40 = stack[0];
    v_40 = difference2(v_41, v_40);
    env = stack[-3];
    v_40 = Lminusp(nil, v_40);
    env = stack[-3];
    if (v_40 == nil) goto v_28;
    goto v_22;
v_28:
    v_41 = stack[-2];
    v_40 = stack[0];
    v_40 = times2(v_41, v_40);
    env = stack[-3];
    stack[-2] = v_40;
    v_40 = stack[0];
    v_40 = add1(v_40);
    env = stack[-3];
    stack[0] = v_40;
    goto v_23;
v_22:
    v_40 = stack[-2];
    goto v_5;
    v_40 = nil;
v_5:
    return onevalue(v_40);
}



// Code for reducepowers

static LispObject CC_reducepowers(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_84, v_85;
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
    v_84 = stack[0];
    if (!consp(v_84)) goto v_17;
    else goto v_18;
v_17:
    v_84 = lisp_true;
    goto v_16;
v_18:
    v_84 = stack[0];
    if (!car_legal(v_84)) v_84 = carerror(v_84); else
    v_84 = car(v_84);
    v_84 = (consp(v_84) ? nil : lisp_true);
    goto v_16;
    v_84 = nil;
v_16:
    if (v_84 == nil) goto v_14;
    v_84 = lisp_true;
    goto v_12;
v_14:
    v_84 = stack[0];
    if (!car_legal(v_84)) v_84 = carerror(v_84); else
    v_84 = car(v_84);
    if (!car_legal(v_84)) v_84 = carerror(v_84); else
    v_84 = car(v_84);
    if (!car_legal(v_84)) v_85 = cdrerror(v_84); else
    v_85 = cdr(v_84);
    v_84 = qvalue(basic_elt(env, 1)); // repowl!*
    if (!car_legal(v_84)) v_84 = carerror(v_84); else
    v_84 = car(v_84);
    if (!car_legal(v_84)) v_84 = cdrerror(v_84); else
    v_84 = cdr(v_84);
    v_84 = static_cast<LispObject>(lessp2(v_85, v_84));
    v_84 = v_84 ? lisp_true : nil;
    env = stack[-2];
    goto v_12;
    v_84 = nil;
v_12:
    if (v_84 == nil) goto v_10;
    v_84 = stack[0];
    goto v_5;
v_10:
    v_84 = stack[0];
    if (!car_legal(v_84)) v_84 = carerror(v_84); else
    v_84 = car(v_84);
    if (!car_legal(v_84)) v_84 = carerror(v_84); else
    v_84 = car(v_84);
    if (!car_legal(v_84)) v_85 = cdrerror(v_84); else
    v_85 = cdr(v_84);
    v_84 = qvalue(basic_elt(env, 1)); // repowl!*
    if (!car_legal(v_84)) v_84 = carerror(v_84); else
    v_84 = car(v_84);
    if (!car_legal(v_84)) v_84 = cdrerror(v_84); else
    v_84 = cdr(v_84);
    if (equal(v_85, v_84)) goto v_38;
    else goto v_39;
v_38:
    v_84 = qvalue(basic_elt(env, 1)); // repowl!*
    if (!car_legal(v_84)) v_85 = cdrerror(v_84); else
    v_85 = cdr(v_84);
    v_84 = stack[0];
    if (!car_legal(v_84)) v_84 = carerror(v_84); else
    v_84 = car(v_84);
    if (!car_legal(v_84)) v_84 = cdrerror(v_84); else
    v_84 = cdr(v_84);
    {   LispObject fn = basic_elt(env, 2); // multf
    v_85 = (*qfn2(fn))(fn, v_85, v_84);
    }
    env = stack[-2];
    v_84 = stack[0];
    if (!car_legal(v_84)) v_84 = cdrerror(v_84); else
    v_84 = cdr(v_84);
    {
        LispObject fn = basic_elt(env, 3); // addf
        return (*qfn2(fn))(fn, v_85, v_84);
    }
v_39:
    v_84 = stack[0];
    if (!car_legal(v_84)) v_84 = carerror(v_84); else
    v_84 = car(v_84);
    if (!car_legal(v_84)) v_84 = carerror(v_84); else
    v_84 = car(v_84);
    if (!car_legal(v_84)) stack[-1] = carerror(v_84); else
    stack[-1] = car(v_84);
    v_84 = stack[0];
    if (!car_legal(v_84)) v_84 = carerror(v_84); else
    v_84 = car(v_84);
    if (!car_legal(v_84)) v_84 = carerror(v_84); else
    v_84 = car(v_84);
    if (!car_legal(v_84)) v_85 = cdrerror(v_84); else
    v_85 = cdr(v_84);
    v_84 = qvalue(basic_elt(env, 1)); // repowl!*
    if (!car_legal(v_84)) v_84 = carerror(v_84); else
    v_84 = car(v_84);
    if (!car_legal(v_84)) v_84 = cdrerror(v_84); else
    v_84 = cdr(v_84);
    v_84 = difference2(v_85, v_84);
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 4); // to
    v_85 = (*qfn2(fn))(fn, stack[-1], v_84);
    }
    env = stack[-2];
    v_84 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_84 = cons(v_85, v_84);
    env = stack[-2];
    v_85 = ncons(v_84);
    env = stack[-2];
    v_84 = stack[0];
    if (!car_legal(v_84)) v_84 = carerror(v_84); else
    v_84 = car(v_84);
    if (!car_legal(v_84)) v_84 = cdrerror(v_84); else
    v_84 = cdr(v_84);
    {   LispObject fn = basic_elt(env, 2); // multf
    v_85 = (*qfn2(fn))(fn, v_85, v_84);
    }
    env = stack[-2];
    v_84 = qvalue(basic_elt(env, 1)); // repowl!*
    if (!car_legal(v_84)) v_84 = cdrerror(v_84); else
    v_84 = cdr(v_84);
    {   LispObject fn = basic_elt(env, 2); // multf
    v_85 = (*qfn2(fn))(fn, v_85, v_84);
    }
    env = stack[-2];
    v_84 = stack[0];
    if (!car_legal(v_84)) v_84 = cdrerror(v_84); else
    v_84 = cdr(v_84);
    {   LispObject fn = basic_elt(env, 3); // addf
    v_84 = (*qfn2(fn))(fn, v_85, v_84);
    }
    env = stack[-2];
    stack[0] = v_84;
    goto v_6;
    v_84 = nil;
v_5:
    return onevalue(v_84);
}



// Code for setk0

static LispObject CC_setk0(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_119, v_120, v_121;
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
// Binding frasc!*
// FLUIDBIND: reloadenv=5 litvec-offset=1 saveloc=4
{   bind_fluid_stack bind_fluid_var(-5, 1, -4);
    setvalue(basic_elt(env, 1), nil); // frasc!*
    v_119 = stack[-3];
    {   LispObject fn = basic_elt(env, 6); // getrtype
    v_119 = (*qfn1(fn))(fn, v_119);
    }
    env = stack[-5];
    stack[-1] = v_119;
    if (v_119 == nil) goto v_13;
    v_120 = stack[-1];
    v_119 = basic_elt(env, 2); // setelemfn
    v_119 = get(v_120, v_119);
    env = stack[-5];
    if (v_119 == nil) goto v_13;
    v_119 = nil;
    v_119 = ncons(v_119);
    env = stack[-5];
    setvalue(basic_elt(env, 3), v_119); // alglist!*
    stack[-2] = stack[0];
    stack[-1] = stack[-3];
    stack[0] = nil;
    v_119 = lisp_true;
    v_119 = ncons(v_119);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 7); // let2
    v_119 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_119);
    }
    goto v_11;
v_13:
    v_119 = stack[0];
    if (!consp(v_119)) goto v_34;
    v_119 = stack[0];
    if (!car_legal(v_119)) v_119 = carerror(v_119); else
    v_119 = car(v_119);
    if (symbolp(v_119)) goto v_39;
    v_119 = nil;
    goto v_37;
v_39:
    v_119 = stack[0];
    {   LispObject fn = basic_elt(env, 6); // getrtype
    v_119 = (*qfn1(fn))(fn, v_119);
    }
    env = stack[-5];
    if (v_119 == nil) goto v_54;
    else goto v_53;
v_54:
    v_119 = stack[0];
    if (!car_legal(v_119)) v_119 = carerror(v_119); else
    v_119 = car(v_119);
    if (!symbolp(v_119)) v_119 = nil;
    else { v_119 = qfastgets(v_119);
           if (v_119 != nil) { v_119 = elt(v_119, 2); // rtype
#ifdef RECORD_GET
             if (v_119 != SPID_NOPROP)
                record_get(elt(fastget_names, 2), 1);
             else record_get(elt(fastget_names, 2), 0),
                v_119 = nil; }
           else record_get(elt(fastget_names, 2), 0); }
#else
             if (v_119 == SPID_NOPROP) v_119 = nil; }}
#endif
v_53:
    stack[-1] = v_119;
    if (v_119 == nil) goto v_50;
    else goto v_51;
v_50:
    v_119 = nil;
    goto v_49;
v_51:
    v_120 = stack[-1];
    v_119 = basic_elt(env, 2); // setelemfn
    v_119 = get(v_120, v_119);
    env = stack[-5];
    stack[-1] = v_119;
    goto v_49;
    v_119 = nil;
v_49:
    if (v_119 == nil) goto v_47;
    else goto v_46;
v_47:
    v_119 = stack[0];
    if (!car_legal(v_119)) v_120 = carerror(v_119); else
    v_120 = car(v_119);
    v_119 = basic_elt(env, 4); // setkfn
    v_119 = get(v_120, v_119);
    env = stack[-5];
    stack[-1] = v_119;
v_46:
    goto v_37;
    v_119 = nil;
v_37:
    goto v_32;
v_34:
    v_119 = nil;
    goto v_32;
    v_119 = nil;
v_32:
    if (v_119 == nil) goto v_30;
    v_119 = nil;
    v_119 = ncons(v_119);
    env = stack[-5];
    setvalue(basic_elt(env, 3), v_119); // alglist!*
    v_121 = stack[-1];
    v_120 = stack[0];
    v_119 = stack[-3];
    v_119 = Lapply2(nil, v_121, v_120, v_119);
    goto v_11;
v_30:
    v_119 = stack[0];
    if (!consp(v_119)) goto v_84;
    v_119 = stack[0];
    if (!car_legal(v_119)) v_119 = carerror(v_119); else
    v_119 = car(v_119);
    if (!consp(v_119)) goto v_89;
    v_119 = stack[0];
    if (!car_legal(v_119)) v_119 = carerror(v_119); else
    v_119 = car(v_119);
    if (!car_legal(v_119)) v_120 = carerror(v_119); else
    v_120 = car(v_119);
    v_119 = basic_elt(env, 5); // setstructfn
    v_119 = get(v_120, v_119);
    env = stack[-5];
    stack[-1] = v_119;
    goto v_87;
v_89:
    v_119 = nil;
    goto v_87;
    v_119 = nil;
v_87:
    goto v_82;
v_84:
    v_119 = nil;
    goto v_82;
    v_119 = nil;
v_82:
    if (v_119 == nil) goto v_80;
    v_119 = nil;
    v_119 = ncons(v_119);
    env = stack[-5];
    setvalue(basic_elt(env, 3), v_119); // alglist!*
    v_121 = stack[-1];
    v_120 = stack[0];
    v_119 = stack[-3];
    v_119 = Lapply2(nil, v_121, v_120, v_119);
    goto v_11;
v_80:
    stack[-2] = stack[0];
    stack[-1] = stack[-3];
    stack[0] = nil;
    v_119 = lisp_true;
    v_119 = ncons(v_119);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 7); // let2
    v_119 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_119);
    }
    goto v_11;
v_11:
    v_119 = stack[-3];
    ;}  // end of a binding scope
    return onevalue(v_119);
}



// Code for gcref_select

static LispObject CC_gcref_select(LispObject env,
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
    v_85 = v_2;
// end of prologue
    stack[-3] = v_85;
v_9:
    v_85 = stack[-3];
    if (v_85 == nil) goto v_14;
    else goto v_15;
v_14:
    v_85 = nil;
    goto v_8;
v_15:
    v_85 = stack[-3];
    if (!car_legal(v_85)) v_85 = carerror(v_85); else
    v_85 = car(v_85);
    v_87 = v_85;
    v_86 = v_87;
    v_85 = basic_elt(env, 1); // defd
    v_85 = Lflagp(nil, v_86, v_85);
    env = stack[-4];
    if (v_85 == nil) goto v_28;
    v_86 = v_87;
    v_85 = qvalue(basic_elt(env, 2)); // gcref_nolist!*
    v_85 = Lmemq(nil, v_86, v_85);
    v_85 = (v_85 == nil ? lisp_true : nil);
    goto v_26;
v_28:
    v_85 = nil;
    goto v_26;
    v_85 = nil;
v_26:
    if (v_85 == nil) goto v_24;
    v_85 = v_87;
    v_85 = ncons(v_85);
    env = stack[-4];
    goto v_22;
v_24:
    v_85 = nil;
v_22:
    stack[-2] = v_85;
    v_85 = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // lastpair
    v_85 = (*qfn1(fn))(fn, v_85);
    }
    env = stack[-4];
    stack[-1] = v_85;
    v_85 = stack[-3];
    if (!car_legal(v_85)) v_85 = cdrerror(v_85); else
    v_85 = cdr(v_85);
    stack[-3] = v_85;
    v_85 = stack[-1];
    if (!consp(v_85)) goto v_47;
    else goto v_48;
v_47:
    goto v_9;
v_48:
v_10:
    v_85 = stack[-3];
    if (v_85 == nil) goto v_52;
    else goto v_53;
v_52:
    v_85 = stack[-2];
    goto v_8;
v_53:
    stack[0] = stack[-1];
    v_85 = stack[-3];
    if (!car_legal(v_85)) v_85 = carerror(v_85); else
    v_85 = car(v_85);
    v_87 = v_85;
    v_86 = v_87;
    v_85 = basic_elt(env, 1); // defd
    v_85 = Lflagp(nil, v_86, v_85);
    env = stack[-4];
    if (v_85 == nil) goto v_67;
    v_86 = v_87;
    v_85 = qvalue(basic_elt(env, 2)); // gcref_nolist!*
    v_85 = Lmemq(nil, v_86, v_85);
    v_85 = (v_85 == nil ? lisp_true : nil);
    goto v_65;
v_67:
    v_85 = nil;
    goto v_65;
    v_85 = nil;
v_65:
    if (v_85 == nil) goto v_63;
    v_85 = v_87;
    v_85 = ncons(v_85);
    env = stack[-4];
    goto v_61;
v_63:
    v_85 = nil;
v_61:
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_85);
    v_85 = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // lastpair
    v_85 = (*qfn1(fn))(fn, v_85);
    }
    env = stack[-4];
    stack[-1] = v_85;
    v_85 = stack[-3];
    if (!car_legal(v_85)) v_85 = cdrerror(v_85); else
    v_85 = cdr(v_85);
    stack[-3] = v_85;
    goto v_10;
v_8:
    return onevalue(v_85);
}



// Code for vintersection

static LispObject CC_vintersection(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_71, v_72;
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
    v_71 = stack[-1];
    if (v_71 == nil) goto v_10;
    else goto v_11;
v_10:
    v_71 = nil;
    goto v_9;
v_11:
    v_71 = stack[-1];
    if (!car_legal(v_71)) v_71 = carerror(v_71); else
    v_71 = car(v_71);
    if (!car_legal(v_71)) v_72 = carerror(v_71); else
    v_72 = car(v_71);
    v_71 = stack[0];
    v_71 = Lassoc(nil, v_72, v_71);
    stack[-2] = v_71;
    if (v_71 == nil) goto v_14;
    else goto v_15;
v_14:
    v_71 = stack[-1];
    if (!car_legal(v_71)) v_72 = cdrerror(v_71); else
    v_72 = cdr(v_71);
    v_71 = stack[0];
    stack[-1] = v_72;
    stack[0] = v_71;
    goto v_1;
v_15:
    v_71 = stack[-1];
    if (!car_legal(v_71)) v_71 = carerror(v_71); else
    v_71 = car(v_71);
    if (!car_legal(v_71)) v_72 = cdrerror(v_71); else
    v_72 = cdr(v_71);
    v_71 = stack[-2];
    if (!car_legal(v_71)) v_71 = cdrerror(v_71); else
    v_71 = cdr(v_71);
    v_71 = static_cast<LispObject>(greaterp2(v_72, v_71));
    v_71 = v_71 ? lisp_true : nil;
    env = stack[-3];
    if (v_71 == nil) goto v_26;
    v_71 = stack[-2];
    if (!car_legal(v_71)) v_72 = cdrerror(v_71); else
    v_72 = cdr(v_71);
    v_71 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_72 == v_71) goto v_35;
    else goto v_36;
v_35:
    v_71 = stack[-1];
    if (!car_legal(v_71)) v_72 = cdrerror(v_71); else
    v_72 = cdr(v_71);
    v_71 = stack[0];
    stack[-1] = v_72;
    stack[0] = v_71;
    goto v_1;
v_36:
    v_71 = stack[-1];
    if (!car_legal(v_71)) v_72 = cdrerror(v_71); else
    v_72 = cdr(v_71);
    v_71 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // vintersection
    v_71 = (*qfn2(fn))(fn, v_72, v_71);
    }
    {
        LispObject v_76 = stack[-2];
        return cons(v_76, v_71);
    }
    v_71 = nil;
    goto v_9;
v_26:
    v_71 = stack[-1];
    if (!car_legal(v_71)) v_71 = carerror(v_71); else
    v_71 = car(v_71);
    if (!car_legal(v_71)) v_72 = cdrerror(v_71); else
    v_72 = cdr(v_71);
    v_71 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_72 == v_71) goto v_52;
    else goto v_53;
v_52:
    v_71 = stack[-1];
    if (!car_legal(v_71)) v_72 = cdrerror(v_71); else
    v_72 = cdr(v_71);
    v_71 = stack[0];
    stack[-1] = v_72;
    stack[0] = v_71;
    goto v_1;
v_53:
    v_71 = stack[-1];
    if (!car_legal(v_71)) stack[-2] = carerror(v_71); else
    stack[-2] = car(v_71);
    v_71 = stack[-1];
    if (!car_legal(v_71)) v_72 = cdrerror(v_71); else
    v_72 = cdr(v_71);
    v_71 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // vintersection
    v_71 = (*qfn2(fn))(fn, v_72, v_71);
    }
    {
        LispObject v_77 = stack[-2];
        return cons(v_77, v_71);
    }
    v_71 = nil;
v_9:
    return onevalue(v_71);
}



// Code for cl_atl

static LispObject CC_cl_atl(LispObject env,
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
    {   LispObject fn = basic_elt(env, 2); // cl_atl1
    v_9 = (*qfn1(fn))(fn, v_8);
    }
    env = stack[0];
    v_8 = basic_elt(env, 1); // rl_ordatp
    {
        LispObject fn = basic_elt(env, 3); // sort
        return (*qfn2(fn))(fn, v_9, v_8);
    }
}



// Code for pasf_sisub

static LispObject CC_pasf_sisub(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_271, v_272, v_273;
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
    stack[-4] = v_4;
    stack[-5] = v_3;
    stack[-1] = v_2;
// end of prologue
    v_271 = stack[-1];
    if (!consp(v_271)) goto v_11;
    else goto v_12;
v_11:
    v_271 = stack[-1];
    goto v_10;
v_12:
    v_271 = stack[-1];
    if (!car_legal(v_271)) v_271 = carerror(v_271); else
    v_271 = car(v_271);
    goto v_10;
    v_271 = nil;
v_10:
    stack[-6] = v_271;
    v_272 = stack[-6];
    v_271 = basic_elt(env, 1); // ex
    if (v_272 == v_271) goto v_25;
    else goto v_26;
v_25:
    v_271 = lisp_true;
    goto v_24;
v_26:
    v_272 = stack[-6];
    v_271 = basic_elt(env, 2); // all
    v_271 = (v_272 == v_271 ? lisp_true : nil);
    goto v_24;
    v_271 = nil;
v_24:
    if (v_271 == nil) goto v_22;
    stack[-2] = stack[-6];
    v_271 = stack[-1];
    if (!car_legal(v_271)) v_271 = cdrerror(v_271); else
    v_271 = cdr(v_271);
    if (!car_legal(v_271)) stack[0] = carerror(v_271); else
    stack[0] = car(v_271);
    v_271 = stack[-1];
    if (!car_legal(v_271)) v_271 = cdrerror(v_271); else
    v_271 = cdr(v_271);
    if (!car_legal(v_271)) v_271 = cdrerror(v_271); else
    v_271 = cdr(v_271);
    if (!car_legal(v_271)) v_273 = carerror(v_271); else
    v_273 = car(v_271);
    v_272 = stack[-5];
    v_271 = stack[-4];
    {   LispObject fn = basic_elt(env, 0); // pasf_sisub
    v_271 = (*qfn3(fn))(fn, v_273, v_272, v_271);
    }
    {
        LispObject v_281 = stack[-2];
        LispObject v_282 = stack[0];
        return list3(v_281, v_282, v_271);
    }
v_22:
    v_272 = stack[-6];
    v_271 = basic_elt(env, 3); // bex
    if (v_272 == v_271) goto v_53;
    else goto v_54;
v_53:
    v_271 = lisp_true;
    goto v_52;
v_54:
    v_272 = stack[-6];
    v_271 = basic_elt(env, 4); // ball
    v_271 = (v_272 == v_271 ? lisp_true : nil);
    goto v_52;
    v_271 = nil;
v_52:
    if (v_271 == nil) goto v_50;
    stack[-3] = stack[-6];
    v_271 = stack[-1];
    if (!car_legal(v_271)) v_271 = cdrerror(v_271); else
    v_271 = cdr(v_271);
    if (!car_legal(v_271)) stack[-2] = carerror(v_271); else
    stack[-2] = car(v_271);
    v_271 = stack[-1];
    if (!car_legal(v_271)) v_271 = cdrerror(v_271); else
    v_271 = cdr(v_271);
    if (!car_legal(v_271)) v_271 = cdrerror(v_271); else
    v_271 = cdr(v_271);
    if (!car_legal(v_271)) v_273 = carerror(v_271); else
    v_273 = car(v_271);
    v_272 = stack[-5];
    v_271 = stack[-4];
    {   LispObject fn = basic_elt(env, 0); // pasf_sisub
    stack[0] = (*qfn3(fn))(fn, v_273, v_272, v_271);
    }
    env = stack[-7];
    v_271 = stack[-1];
    if (!car_legal(v_271)) v_271 = cdrerror(v_271); else
    v_271 = cdr(v_271);
    if (!car_legal(v_271)) v_271 = cdrerror(v_271); else
    v_271 = cdr(v_271);
    if (!car_legal(v_271)) v_271 = cdrerror(v_271); else
    v_271 = cdr(v_271);
    if (!car_legal(v_271)) v_273 = carerror(v_271); else
    v_273 = car(v_271);
    v_272 = stack[-5];
    v_271 = stack[-4];
    {   LispObject fn = basic_elt(env, 0); // pasf_sisub
    v_271 = (*qfn3(fn))(fn, v_273, v_272, v_271);
    }
    {
        LispObject v_283 = stack[-3];
        LispObject v_284 = stack[-2];
        LispObject v_285 = stack[0];
        return list4(v_283, v_284, v_285, v_271);
    }
v_50:
    v_272 = stack[-6];
    v_271 = basic_elt(env, 5); // and
    if (v_272 == v_271) goto v_85;
    else goto v_86;
v_85:
    stack[0] = basic_elt(env, 5); // and
    v_271 = stack[-1];
    if (!car_legal(v_271)) stack[-1] = cdrerror(v_271); else
    stack[-1] = cdr(v_271);
    stack[-2] = stack[-5];
    v_273 = stack[-4];
    v_272 = basic_elt(env, 6); // true
    v_271 = basic_elt(env, 7); // false
    v_271 = list3(v_273, v_272, v_271);
    env = stack[-7];
    {
        LispObject v_286 = stack[0];
        LispObject v_287 = stack[-1];
        LispObject v_288 = stack[-2];
        LispObject fn = basic_elt(env, 13); // pasf_sisub!-gand
        return (*qfn4up(fn))(fn, v_286, v_287, v_288, v_271);
    }
v_86:
    v_272 = stack[-6];
    v_271 = basic_elt(env, 8); // or
    if (v_272 == v_271) goto v_100;
    else goto v_101;
v_100:
    stack[0] = basic_elt(env, 8); // or
    v_271 = stack[-1];
    if (!car_legal(v_271)) stack[-1] = cdrerror(v_271); else
    stack[-1] = cdr(v_271);
    stack[-2] = stack[-5];
    v_273 = stack[-4];
    v_272 = basic_elt(env, 7); // false
    v_271 = basic_elt(env, 6); // true
    v_271 = list3(v_273, v_272, v_271);
    env = stack[-7];
    {
        LispObject v_289 = stack[0];
        LispObject v_290 = stack[-1];
        LispObject v_291 = stack[-2];
        LispObject fn = basic_elt(env, 13); // pasf_sisub!-gand
        return (*qfn4up(fn))(fn, v_289, v_290, v_291, v_271);
    }
v_101:
    v_272 = stack[-6];
    v_271 = basic_elt(env, 8); // or
    if (v_272 == v_271) goto v_127;
    else goto v_128;
v_127:
    v_271 = lisp_true;
    goto v_126;
v_128:
    v_272 = stack[-6];
    v_271 = basic_elt(env, 5); // and
    v_271 = (v_272 == v_271 ? lisp_true : nil);
    goto v_126;
    v_271 = nil;
v_126:
    if (v_271 == nil) goto v_124;
    v_271 = lisp_true;
    goto v_122;
v_124:
    v_272 = stack[-6];
    v_271 = basic_elt(env, 9); // not
    v_271 = (v_272 == v_271 ? lisp_true : nil);
    goto v_122;
    v_271 = nil;
v_122:
    if (v_271 == nil) goto v_120;
    v_271 = lisp_true;
    goto v_118;
v_120:
    v_272 = stack[-6];
    v_271 = basic_elt(env, 10); // impl
    if (v_272 == v_271) goto v_148;
    else goto v_149;
v_148:
    v_271 = lisp_true;
    goto v_147;
v_149:
    v_272 = stack[-6];
    v_271 = basic_elt(env, 11); // repl
    if (v_272 == v_271) goto v_157;
    else goto v_158;
v_157:
    v_271 = lisp_true;
    goto v_156;
v_158:
    v_272 = stack[-6];
    v_271 = basic_elt(env, 12); // equiv
    v_271 = (v_272 == v_271 ? lisp_true : nil);
    goto v_156;
    v_271 = nil;
v_156:
    goto v_147;
    v_271 = nil;
v_147:
    goto v_118;
    v_271 = nil;
v_118:
    if (v_271 == nil) goto v_116;
    v_271 = stack[-1];
    if (!car_legal(v_271)) v_271 = cdrerror(v_271); else
    v_271 = cdr(v_271);
    stack[-3] = v_271;
    v_271 = stack[-3];
    if (v_271 == nil) goto v_177;
    else goto v_178;
v_177:
    v_271 = nil;
    goto v_171;
v_178:
    v_271 = stack[-3];
    if (!car_legal(v_271)) v_271 = carerror(v_271); else
    v_271 = car(v_271);
    v_273 = v_271;
    v_272 = stack[-5];
    v_271 = stack[-4];
    {   LispObject fn = basic_elt(env, 0); // pasf_sisub
    v_271 = (*qfn3(fn))(fn, v_273, v_272, v_271);
    }
    env = stack[-7];
    v_271 = ncons(v_271);
    env = stack[-7];
    stack[-1] = v_271;
    stack[-2] = v_271;
v_172:
    v_271 = stack[-3];
    if (!car_legal(v_271)) v_271 = cdrerror(v_271); else
    v_271 = cdr(v_271);
    stack[-3] = v_271;
    v_271 = stack[-3];
    if (v_271 == nil) goto v_193;
    else goto v_194;
v_193:
    v_271 = stack[-2];
    goto v_171;
v_194:
    stack[0] = stack[-1];
    v_271 = stack[-3];
    if (!car_legal(v_271)) v_271 = carerror(v_271); else
    v_271 = car(v_271);
    v_273 = v_271;
    v_272 = stack[-5];
    v_271 = stack[-4];
    {   LispObject fn = basic_elt(env, 0); // pasf_sisub
    v_271 = (*qfn3(fn))(fn, v_273, v_272, v_271);
    }
    env = stack[-7];
    v_271 = ncons(v_271);
    env = stack[-7];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_271);
    v_271 = stack[-1];
    if (!car_legal(v_271)) v_271 = cdrerror(v_271); else
    v_271 = cdr(v_271);
    stack[-1] = v_271;
    goto v_172;
v_171:
    v_272 = v_271;
    v_271 = v_272;
    if (v_271 == nil) goto v_213;
    v_271 = v_272;
    if (!car_legal(v_271)) v_271 = cdrerror(v_271); else
    v_271 = cdr(v_271);
    if (v_271 == nil) goto v_213;
    v_271 = stack[-6];
    return cons(v_271, v_272);
v_213:
    v_271 = v_272;
    if (v_271 == nil) goto v_222;
    else goto v_223;
v_222:
    v_272 = stack[-6];
    v_271 = basic_elt(env, 5); // and
    if (v_272 == v_271) goto v_227;
    else goto v_228;
v_227:
    v_271 = basic_elt(env, 6); // true
    goto v_226;
v_228:
    v_271 = basic_elt(env, 7); // false
    goto v_226;
    v_271 = nil;
v_226:
    goto v_211;
v_223:
    v_271 = v_272;
    if (!car_legal(v_271)) v_271 = carerror(v_271); else
    v_271 = car(v_271);
    goto v_211;
    v_271 = nil;
v_211:
    goto v_8;
v_116:
    v_272 = stack[-6];
    v_271 = basic_elt(env, 6); // true
    if (v_272 == v_271) goto v_245;
    else goto v_246;
v_245:
    v_271 = lisp_true;
    goto v_244;
v_246:
    v_272 = stack[-6];
    v_271 = basic_elt(env, 7); // false
    v_271 = (v_272 == v_271 ? lisp_true : nil);
    goto v_244;
    v_271 = nil;
v_244:
    if (v_271 == nil) goto v_242;
    v_271 = stack[-1];
    goto v_8;
v_242:
    v_271 = stack[-1];
    if (!car_legal(v_271)) stack[0] = carerror(v_271); else
    stack[0] = car(v_271);
    v_271 = stack[-1];
    if (!car_legal(v_271)) v_271 = cdrerror(v_271); else
    v_271 = cdr(v_271);
    if (!car_legal(v_271)) stack[-1] = carerror(v_271); else
    stack[-1] = car(v_271);
    v_272 = stack[-5];
    v_271 = stack[-4];
    v_271 = cons(v_272, v_271);
    env = stack[-7];
    v_271 = ncons(v_271);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 14); // subf
    v_271 = (*qfn2(fn))(fn, stack[-1], v_271);
    }
    env = stack[-7];
    if (!car_legal(v_271)) v_272 = carerror(v_271); else
    v_272 = car(v_271);
    v_271 = nil;
    v_272 = list3(stack[0], v_272, v_271);
    env = stack[-7];
    v_271 = stack[-6];
    {
        LispObject fn = basic_elt(env, 15); // pasf_simplat1
        return (*qfn2(fn))(fn, v_272, v_271);
    }
v_8:
    return onevalue(v_271);
}



// Code for dipevlcomp

static LispObject CC_dipevlcomp(LispObject env,
                         LispObject v_2, LispObject v_3)
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
        push(v_2,v_3);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_3,v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_11 = v_3;
    v_12 = v_2;
// end of prologue
    if (!car_legal(v_12)) v_12 = carerror(v_12); else
    v_12 = car(v_12);
    if (!car_legal(v_11)) v_11 = carerror(v_11); else
    v_11 = car(v_11);
    {   LispObject fn = basic_elt(env, 1); // evcompless!?
    v_11 = (*qfn2(fn))(fn, v_12, v_11);
    }
    v_11 = (v_11 == nil ? lisp_true : nil);
    return onevalue(v_11);
}



// Code for assert_format

static LispObject CC_assert_format(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
        push(v_2,v_3,v_4);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_4,v_3,v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil, nil, nil, nil, nil);
    real_push(nil, nil, nil, nil, nil);
    real_push(nil);
    stack_popper stack_popper_var(12);
// copy arguments values to proper place
    v_75 = v_4;
    stack[-8] = v_3;
    stack[-9] = v_2;
// end of prologue
    v_75 = Lexplode(nil, v_75);
    env = stack[-11];
    stack[-10] = v_75;
    stack[-7] = basic_elt(env, 1); // !!
    stack[-6] = basic_elt(env, 2); // !)
    stack[-5] = basic_elt(env, 1); // !!
    stack[-4] = basic_elt(env, 3); // ! 
    stack[-3] = basic_elt(env, 1); // !!
    stack[-2] = basic_elt(env, 4); // !-
    stack[-1] = basic_elt(env, 1); // !!
    stack[0] = basic_elt(env, 5); // !>
    v_77 = basic_elt(env, 1); // !!
    v_76 = basic_elt(env, 3); // ! 
    v_75 = stack[-10];
    v_75 = list2star(v_77, v_76, v_75);
    env = stack[-11];
    v_75 = list2star(stack[-1], stack[0], v_75);
    env = stack[-11];
    v_75 = list2star(stack[-3], stack[-2], v_75);
    env = stack[-11];
    v_75 = list2star(stack[-5], stack[-4], v_75);
    env = stack[-11];
    v_75 = list2star(stack[-7], stack[-6], v_75);
    env = stack[-11];
    stack[-10] = v_75;
    v_75 = stack[-8];
    v_75 = Lreverse(nil, v_75);
    env = stack[-11];
    stack[-4] = v_75;
v_30:
    v_75 = stack[-4];
    if (v_75 == nil) goto v_35;
    else goto v_36;
v_35:
    goto v_29;
v_36:
    v_75 = stack[-4];
    if (!car_legal(v_75)) v_75 = carerror(v_75); else
    v_75 = car(v_75);
    stack[-3] = basic_elt(env, 1); // !!
    stack[-2] = basic_elt(env, 6); // !,
    stack[-1] = basic_elt(env, 1); // !!
    stack[0] = basic_elt(env, 3); // ! 
    v_76 = Lexplode(nil, v_75);
    env = stack[-11];
    v_75 = stack[-10];
    v_75 = Lnconc(nil, v_76, v_75);
    env = stack[-11];
    v_75 = list2star(stack[-1], stack[0], v_75);
    env = stack[-11];
    v_75 = list2star(stack[-3], stack[-2], v_75);
    env = stack[-11];
    stack[-10] = v_75;
    v_75 = stack[-4];
    if (!car_legal(v_75)) v_75 = cdrerror(v_75); else
    v_75 = cdr(v_75);
    stack[-4] = v_75;
    goto v_30;
v_29:
    v_75 = stack[-10];
    if (!car_legal(v_75)) v_75 = cdrerror(v_75); else
    v_75 = cdr(v_75);
    if (!car_legal(v_75)) v_75 = cdrerror(v_75); else
    v_75 = cdr(v_75);
    if (!car_legal(v_75)) v_75 = cdrerror(v_75); else
    v_75 = cdr(v_75);
    if (!car_legal(v_75)) v_75 = cdrerror(v_75); else
    v_75 = cdr(v_75);
    stack[-10] = v_75;
    stack[-3] = basic_elt(env, 1); // !!
    stack[-2] = basic_elt(env, 7); // !:
    stack[-1] = basic_elt(env, 1); // !!
    stack[0] = basic_elt(env, 3); // ! 
    v_77 = basic_elt(env, 1); // !!
    v_76 = basic_elt(env, 8); // !(
    v_75 = stack[-10];
    v_75 = list2star(v_77, v_76, v_75);
    env = stack[-11];
    v_75 = list2star(stack[-1], stack[0], v_75);
    env = stack[-11];
    v_75 = list2star(stack[-3], stack[-2], v_75);
    env = stack[-11];
    stack[-10] = v_75;
    v_75 = stack[-9];
    v_76 = Lexplode(nil, v_75);
    env = stack[-11];
    v_75 = stack[-10];
    v_75 = Lnconc(nil, v_76, v_75);
    stack[-10] = v_75;
    v_75 = stack[-10];
        return Lcompress(nil, v_75);
    return onevalue(v_75);
}



// Code for mv!-domainlist

static LispObject CC_mvKdomainlist(LispObject env,
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
    stack[0] = v_2;
// end of prologue
    v_25 = nil;
v_7:
    v_24 = stack[0];
    if (v_24 == nil) goto v_10;
    else goto v_11;
v_10:
    v_24 = v_25;
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn1(fn))(fn, v_24);
    }
v_11:
    v_24 = stack[0];
    if (!car_legal(v_24)) v_24 = carerror(v_24); else
    v_24 = car(v_24);
    if (!car_legal(v_24)) v_24 = cdrerror(v_24); else
    v_24 = cdr(v_24);
    v_24 = cons(v_24, v_25);
    env = stack[-1];
    v_25 = v_24;
    v_24 = stack[0];
    if (!car_legal(v_24)) v_24 = cdrerror(v_24); else
    v_24 = cdr(v_24);
    stack[0] = v_24;
    goto v_7;
    v_24 = nil;
    return onevalue(v_24);
}



// Code for rnprep!:

static LispObject CC_rnprepT(LispObject env,
                         LispObject v_2)
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
    v_27 = stack[-1];
    if (!car_legal(v_27)) v_27 = cdrerror(v_27); else
    v_27 = cdr(v_27);
    if (!car_legal(v_27)) v_27 = carerror(v_27); else
    v_27 = car(v_27);
    {   LispObject fn = basic_elt(env, 2); // prepf
    v_27 = (*qfn1(fn))(fn, v_27);
    }
    env = stack[-3];
    v_29 = v_27;
    v_27 = stack[-1];
    if (!car_legal(v_27)) v_27 = cdrerror(v_27); else
    v_27 = cdr(v_27);
    if (!car_legal(v_27)) v_28 = cdrerror(v_27); else
    v_28 = cdr(v_27);
    v_27 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_28 == v_27) goto v_11;
    else goto v_12;
v_11:
    v_27 = v_29;
    goto v_10;
v_12:
    stack[-2] = basic_elt(env, 1); // quotient
    stack[0] = v_29;
    v_27 = stack[-1];
    if (!car_legal(v_27)) v_27 = cdrerror(v_27); else
    v_27 = cdr(v_27);
    if (!car_legal(v_27)) v_27 = cdrerror(v_27); else
    v_27 = cdr(v_27);
    {   LispObject fn = basic_elt(env, 2); // prepf
    v_27 = (*qfn1(fn))(fn, v_27);
    }
    {
        LispObject v_33 = stack[-2];
        LispObject v_34 = stack[0];
        return list3(v_33, v_34, v_27);
    }
    v_27 = nil;
v_10:
    return onevalue(v_27);
}



// Code for rootrnd

static LispObject CC_rootrnd(LispObject env,
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
    v_7 = qvalue(basic_elt(env, 1)); // acc!#
    {
        LispObject fn = basic_elt(env, 2); // rtrnda
        return (*qfn2(fn))(fn, v_8, v_7);
    }
}



// Code for prin_with_margin

static LispObject CC_prin_with_margin(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_13, v_14;
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
    v_13 = v_2;
// end of prologue
    stack[-2] = v_13;
    stack[-1] = Lposn(nil);
    env = stack[-3];
    v_13 = nil;
    v_14 = Llinelength(nil, v_13);
    env = stack[-3];
    v_13 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    stack[0] = difference2(v_14, v_13);
    env = stack[-3];
    v_13 = basic_elt(env, 1); // explode
    v_13 = ncons(v_13);
    env = stack[-3];
    {
        LispObject v_18 = stack[-2];
        LispObject v_19 = stack[-1];
        LispObject v_20 = stack[0];
        LispObject fn = basic_elt(env, 2); // print_with_margin_sub
        return (*qfn4up(fn))(fn, v_18, v_19, v_20, v_13);
    }
}



// Code for mk!+unit!+mat

static LispObject CC_mkLunitLmat(LispObject env,
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
    {
        LispObject fn = basic_elt(env, 1); // gen!+can!+bas
        return (*qfn1(fn))(fn, v_8);
    }
    return onevalue(v_8);
}



// Code for fctrf1

static LispObject CC_fctrf1(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_153, v_154;
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
    stack[-1] = nil;
    v_153 = stack[-3];
    if (!consp(v_153)) goto v_15;
    else goto v_16;
v_15:
    v_153 = lisp_true;
    goto v_14;
v_16:
    v_153 = stack[-3];
    if (!car_legal(v_153)) v_153 = carerror(v_153); else
    v_153 = car(v_153);
    v_153 = (consp(v_153) ? nil : lisp_true);
    goto v_14;
    v_153 = nil;
v_14:
    if (v_153 == nil) goto v_12;
    v_153 = stack[-3];
    return ncons(v_153);
v_12:
    v_153 = qvalue(basic_elt(env, 1)); // dmode!*
    if (!symbolp(v_153)) v_153 = nil;
    else { v_153 = qfastgets(v_153);
           if (v_153 != nil) { v_153 = elt(v_153, 3); // field
#ifdef RECORD_GET
             if (v_153 == SPID_NOPROP)
                record_get(elt(fastget_names, 3), 0),
                v_153 = nil;
             else record_get(elt(fastget_names, 3), 1),
                v_153 = lisp_true; }
           else record_get(elt(fastget_names, 3), 0); }
#else
             if (v_153 == SPID_NOPROP) v_153 = nil; else v_153 = lisp_true; }}
#endif
    if (v_153 == nil) goto v_33;
    v_153 = stack[-3];
    {   LispObject fn = basic_elt(env, 3); // lnc
    v_154 = (*qfn1(fn))(fn, v_153);
    }
    env = stack[-5];
    stack[-1] = v_154;
    v_153 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_153 = Lneq_2(nil, v_154, v_153);
    env = stack[-5];
    goto v_31;
v_33:
    v_153 = nil;
    goto v_31;
    v_153 = nil;
v_31:
    if (v_153 == nil) goto v_29;
    v_153 = stack[-1];
    {   LispObject fn = basic_elt(env, 4); // !:recip
    v_154 = (*qfn1(fn))(fn, v_153);
    }
    env = stack[-5];
    v_153 = stack[-3];
    {   LispObject fn = basic_elt(env, 5); // multd
    v_153 = (*qfn2(fn))(fn, v_154, v_153);
    }
    env = stack[-5];
    stack[-3] = v_153;
    goto v_27;
v_29:
    v_153 = qvalue(basic_elt(env, 1)); // dmode!*
    if (v_153 == nil) goto v_48;
    v_154 = qvalue(basic_elt(env, 1)); // dmode!*
    v_153 = basic_elt(env, 2); // unitsfn
    v_153 = get(v_154, v_153);
    env = stack[-5];
    stack[-2] = v_153;
    if (v_153 == nil) goto v_48;
    stack[-1] = stack[-2];
    v_154 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_153 = stack[-3];
    stack[0] = cons(v_154, v_153);
    env = stack[-5];
    v_153 = stack[-3];
    {   LispObject fn = basic_elt(env, 3); // lnc
    v_153 = (*qfn1(fn))(fn, v_153);
    }
    env = stack[-5];
    v_153 = Lapply2(nil, stack[-1], stack[0], v_153);
    env = stack[-5];
    stack[-4] = v_153;
    v_153 = stack[-4];
    if (!car_legal(v_153)) v_153 = cdrerror(v_153); else
    v_153 = cdr(v_153);
    stack[-3] = v_153;
    v_153 = stack[-4];
    if (!car_legal(v_153)) v_153 = carerror(v_153); else
    v_153 = car(v_153);
    {   LispObject fn = basic_elt(env, 4); // !:recip
    v_153 = (*qfn1(fn))(fn, v_153);
    }
    env = stack[-5];
    stack[-1] = v_153;
    goto v_27;
v_48:
v_27:
    v_153 = stack[-3];
    {   LispObject fn = basic_elt(env, 6); // comfac
    v_153 = (*qfn1(fn))(fn, v_153);
    }
    env = stack[-5];
    stack[-4] = v_153;
    stack[0] = stack[-3];
    v_153 = stack[-4];
    {   LispObject fn = basic_elt(env, 7); // comfac!-to!-poly
    v_153 = (*qfn1(fn))(fn, v_153);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 8); // quotf
    v_153 = (*qfn2(fn))(fn, stack[0], v_153);
    }
    env = stack[-5];
    stack[-3] = v_153;
    v_153 = stack[-4];
    if (!car_legal(v_153)) v_153 = cdrerror(v_153); else
    v_153 = cdr(v_153);
    {   LispObject fn = basic_elt(env, 0); // fctrf1
    v_153 = (*qfn1(fn))(fn, v_153);
    }
    env = stack[-5];
    stack[-2] = v_153;
    v_153 = stack[-4];
    if (!car_legal(v_153)) v_153 = carerror(v_153); else
    v_153 = car(v_153);
    if (v_153 == nil) goto v_79;
    v_153 = stack[-2];
    if (!car_legal(v_153)) stack[0] = carerror(v_153); else
    stack[0] = car(v_153);
    v_153 = stack[-4];
    if (!car_legal(v_153)) v_153 = carerror(v_153); else
    v_153 = car(v_153);
    if (!car_legal(v_153)) v_154 = carerror(v_153); else
    v_154 = car(v_153);
    v_153 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 9); // to
    v_154 = (*qfn2(fn))(fn, v_154, v_153);
    }
    env = stack[-5];
    v_153 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_153 = cons(v_154, v_153);
    env = stack[-5];
    v_154 = ncons(v_153);
    env = stack[-5];
    v_153 = stack[-4];
    if (!car_legal(v_153)) v_153 = carerror(v_153); else
    v_153 = car(v_153);
    if (!car_legal(v_153)) v_153 = cdrerror(v_153); else
    v_153 = cdr(v_153);
    v_154 = cons(v_154, v_153);
    env = stack[-5];
    v_153 = stack[-2];
    if (!car_legal(v_153)) v_153 = cdrerror(v_153); else
    v_153 = cdr(v_153);
    v_153 = list2star(stack[0], v_154, v_153);
    env = stack[-5];
    stack[-2] = v_153;
    goto v_77;
v_79:
v_77:
    v_153 = stack[-1];
    if (v_153 == nil) goto v_102;
    v_154 = stack[-1];
    v_153 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_154 == v_153) goto v_102;
    v_154 = stack[-1];
    v_153 = stack[-2];
    if (!car_legal(v_153)) v_153 = carerror(v_153); else
    v_153 = car(v_153);
    {   LispObject fn = basic_elt(env, 5); // multd
    v_154 = (*qfn2(fn))(fn, v_154, v_153);
    }
    env = stack[-5];
    v_153 = stack[-2];
    if (!car_legal(v_153)) v_153 = cdrerror(v_153); else
    v_153 = cdr(v_153);
    v_153 = cons(v_154, v_153);
    env = stack[-5];
    stack[-2] = v_153;
    goto v_100;
v_102:
v_100:
    v_153 = stack[-3];
    if (!consp(v_153)) goto v_121;
    else goto v_122;
v_121:
    v_153 = lisp_true;
    goto v_120;
v_122:
    v_153 = stack[-3];
    if (!car_legal(v_153)) v_153 = carerror(v_153); else
    v_153 = car(v_153);
    v_153 = (consp(v_153) ? nil : lisp_true);
    goto v_120;
    v_153 = nil;
v_120:
    if (v_153 == nil) goto v_118;
    v_154 = stack[-3];
    v_153 = stack[-2];
    if (!car_legal(v_153)) v_153 = carerror(v_153); else
    v_153 = car(v_153);
    {   LispObject fn = basic_elt(env, 10); // multf
    v_154 = (*qfn2(fn))(fn, v_154, v_153);
    }
    v_153 = stack[-2];
    if (!car_legal(v_153)) v_153 = cdrerror(v_153); else
    v_153 = cdr(v_153);
    return cons(v_154, v_153);
v_118:
    v_153 = stack[-3];
    {   LispObject fn = basic_elt(env, 11); // minusf
    v_153 = (*qfn1(fn))(fn, v_153);
    }
    env = stack[-5];
    if (v_153 == nil) goto v_138;
    v_153 = stack[-3];
    {   LispObject fn = basic_elt(env, 12); // negf
    v_153 = (*qfn1(fn))(fn, v_153);
    }
    env = stack[-5];
    stack[-3] = v_153;
    v_153 = stack[-2];
    if (!car_legal(v_153)) v_153 = carerror(v_153); else
    v_153 = car(v_153);
    {   LispObject fn = basic_elt(env, 12); // negf
    v_154 = (*qfn1(fn))(fn, v_153);
    }
    env = stack[-5];
    v_153 = stack[-2];
    if (!car_legal(v_153)) v_153 = cdrerror(v_153); else
    v_153 = cdr(v_153);
    v_153 = cons(v_154, v_153);
    env = stack[-5];
    stack[-2] = v_153;
    goto v_116;
v_138:
v_116:
    v_153 = stack[-3];
    {   LispObject fn = basic_elt(env, 13); // factor!-prim!-f
    v_154 = (*qfn1(fn))(fn, v_153);
    }
    env = stack[-5];
    v_153 = stack[-2];
    {
        LispObject fn = basic_elt(env, 14); // fac!-merge
        return (*qfn2(fn))(fn, v_154, v_153);
    }
    return onevalue(v_153);
}



// Code for sfto_b!:ordexn

static LispObject CC_sfto_bTordexn(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_54, v_55;
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
    stack[-3] = nil;
v_9:
    v_54 = stack[-1];
    if (v_54 == nil) goto v_12;
    else goto v_13;
v_12:
    v_55 = stack[-2];
    v_54 = stack[-3];
    v_54 = cons(v_55, v_54);
    env = stack[-4];
    v_54 = Lreverse(nil, v_54);
    {
        LispObject v_60 = stack[0];
        return cons(v_60, v_54);
    }
v_13:
    v_55 = stack[-2];
    v_54 = stack[-1];
    if (!car_legal(v_54)) v_54 = carerror(v_54); else
    v_54 = car(v_54);
    if (equal(v_55, v_54)) goto v_21;
    else goto v_22;
v_21:
    v_54 = nil;
    goto v_8;
v_22:
    v_54 = stack[-2];
    if (v_54 == nil) goto v_28;
    v_55 = stack[-2];
    v_54 = stack[-1];
    if (!car_legal(v_54)) v_54 = carerror(v_54); else
    v_54 = car(v_54);
    v_54 = static_cast<LispObject>(greaterp2(v_55, v_54));
    v_54 = v_54 ? lisp_true : nil;
    env = stack[-4];
    if (v_54 == nil) goto v_28;
    v_55 = stack[-2];
    v_54 = stack[-3];
    v_54 = cons(v_55, v_54);
    env = stack[-4];
    v_55 = Lreverse(nil, v_54);
    env = stack[-4];
    v_54 = stack[-1];
    v_54 = Lappend_2(nil, v_55, v_54);
    {
        LispObject v_61 = stack[0];
        return cons(v_61, v_54);
    }
v_28:
    v_54 = stack[-1];
    if (!car_legal(v_54)) v_55 = carerror(v_54); else
    v_55 = car(v_54);
    v_54 = stack[-3];
    v_54 = cons(v_55, v_54);
    env = stack[-4];
    stack[-3] = v_54;
    v_54 = stack[-1];
    if (!car_legal(v_54)) v_54 = cdrerror(v_54); else
    v_54 = cdr(v_54);
    stack[-1] = v_54;
    v_54 = stack[0];
    v_54 = (v_54 == nil ? lisp_true : nil);
    stack[0] = v_54;
    goto v_11;
v_11:
    goto v_9;
v_8:
    return onevalue(v_54);
}



// Code for dm!-gt

static LispObject CC_dmKgt(LispObject env,
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
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_10 = v_3;
    v_9 = v_2;
// end of prologue
    {   LispObject fn = basic_elt(env, 1); // dm!-difference
    v_9 = (*qfn2(fn))(fn, v_10, v_9);
    }
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // !:minusp
        return (*qfn1(fn))(fn, v_9);
    }
}



// Code for chk

static LispObject CC_chk(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
v_1:
    v_63 = stack[0];
    if (v_63 == nil) goto v_6;
    else goto v_7;
v_6:
    v_63 = lisp_true;
    goto v_5;
v_7:
    v_64 = stack[0];
    v_63 = lisp_true;
    if (v_64 == v_63) goto v_14;
    else goto v_15;
v_14:
    v_63 = lisp_true;
    goto v_13;
v_15:
    v_63 = stack[0];
    if (!car_legal(v_63)) v_63 = carerror(v_63); else
    v_63 = car(v_63);
    {   LispObject fn = basic_elt(env, 1); // bsubs
    v_63 = (*qfn1(fn))(fn, v_63);
    }
    env = stack[-2];
    stack[-1] = v_63;
    v_63 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // freexp
    v_63 = (*qfn1(fn))(fn, v_63);
    }
    env = stack[-2];
    if (v_63 == nil) goto v_28;
    v_63 = stack[0];
    if (!car_legal(v_63)) v_63 = cdrerror(v_63); else
    v_63 = cdr(v_63);
    {   LispObject fn = basic_elt(env, 0); // chk
    v_63 = (*qfn1(fn))(fn, v_63);
    }
    v_65 = v_63;
    v_63 = v_65;
    if (v_63 == nil) goto v_37;
    else goto v_38;
v_37:
    v_63 = nil;
    goto v_36;
v_38:
    v_64 = v_65;
    v_63 = lisp_true;
    if (v_64 == v_63) goto v_41;
    else goto v_42;
v_41:
    v_63 = stack[-1];
    return ncons(v_63);
v_42:
    v_63 = stack[-1];
    v_64 = v_65;
    return cons(v_63, v_64);
    v_63 = nil;
v_36:
    goto v_26;
v_28:
    v_63 = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // reval
    v_64 = (*qfn1(fn))(fn, v_63);
    }
    env = stack[-2];
    v_63 = lisp_true;
    if (v_64 == v_63) goto v_52;
    else goto v_53;
v_52:
    v_63 = stack[0];
    if (!car_legal(v_63)) v_63 = cdrerror(v_63); else
    v_63 = cdr(v_63);
    stack[0] = v_63;
    goto v_1;
v_53:
    v_63 = nil;
    goto v_26;
    v_63 = nil;
v_26:
    goto v_13;
    v_63 = nil;
v_13:
    goto v_5;
    v_63 = nil;
v_5:
    return onevalue(v_63);
}



// Code for coposp

static LispObject CC_coposp(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_27, v_28;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_28 = v_2;
// end of prologue
    v_27 = v_28;
    if (!car_legal(v_27)) v_27 = cdrerror(v_27); else
    v_27 = cdr(v_27);
    if (v_27 == nil) goto v_6;
    else goto v_7;
v_6:
    v_27 = lisp_true;
    goto v_5;
v_7:
    v_27 = v_28;
    if (!car_legal(v_27)) v_27 = carerror(v_27); else
    v_27 = car(v_27);
    if (!consp(v_27)) goto v_15;
    else goto v_16;
v_15:
    v_27 = v_28;
    if (!car_legal(v_27)) v_27 = cdrerror(v_27); else
    v_27 = cdr(v_27);
    {
        LispObject fn = basic_elt(env, 1); // contposp
        return (*qfn1(fn))(fn, v_27);
    }
v_16:
    v_27 = v_28;
    if (!car_legal(v_27)) v_27 = cdrerror(v_27); else
    v_27 = cdr(v_27);
    {
        LispObject fn = basic_elt(env, 2); // covposp
        return (*qfn1(fn))(fn, v_27);
    }
    v_27 = nil;
    goto v_5;
    v_27 = nil;
v_5:
    return onevalue(v_27);
}



// Code for partitexdf

static LispObject CC_partitexdf(LispObject env,
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
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_8 = v_2;
// end of prologue
    if (!car_legal(v_8)) v_8 = carerror(v_8); else
    v_8 = car(v_8);
    {   LispObject fn = basic_elt(env, 1); // partitop
    v_8 = (*qfn1(fn))(fn, v_8);
    }
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // exdfpf
        return (*qfn1(fn))(fn, v_8);
    }
}



// Code for inttovec!-solve

static LispObject CC_inttovecKsolve(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_59, v_60;
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
    v_60 = stack[-2];
    v_59 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_60 == v_59) goto v_11;
    else goto v_12;
v_11:
    v_59 = lisp_true;
    goto v_10;
v_12:
    v_60 = stack[-3];
    v_59 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_59 = (v_60 == v_59 ? lisp_true : nil);
    goto v_10;
    v_59 = nil;
v_10:
    if (v_59 == nil) goto v_8;
    v_60 = stack[-2];
    v_59 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    return cons(v_60, v_59);
v_8:
    v_59 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-4] = v_59;
    v_59 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[0] = v_59;
v_35:
    v_59 = stack[0];
    stack[-1] = v_59;
    v_59 = stack[-4];
    v_59 = add1(v_59);
    env = stack[-5];
    stack[-4] = v_59;
    v_60 = stack[-3];
    v_59 = stack[-4];
    v_60 = plus2(v_60, v_59);
    env = stack[-5];
    v_59 = stack[-1];
    v_60 = times2(v_60, v_59);
    env = stack[-5];
    v_59 = stack[-4];
    v_59 = quot2(v_60, v_59);
    env = stack[-5];
    stack[0] = v_59;
    v_60 = stack[0];
    v_59 = stack[-2];
    v_59 = static_cast<LispObject>(greaterp2(v_60, v_59));
    v_59 = v_59 ? lisp_true : nil;
    env = stack[-5];
    if (v_59 == nil) goto v_49;
    else goto v_50;
v_49:
    goto v_35;
v_50:
    stack[0] = stack[-4];
    v_60 = stack[-2];
    v_59 = stack[-1];
    v_59 = difference2(v_60, v_59);
    {
        LispObject v_66 = stack[0];
        return cons(v_66, v_59);
    }
    goto v_6;
    v_59 = nil;
v_6:
    return onevalue(v_59);
}



// Code for contr2!-strand

static LispObject CC_contr2Kstrand(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_69, v_70, v_71;
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
    v_69 = stack[-3];
    if (v_69 == nil) goto v_9;
    else goto v_10;
v_9:
    v_69 = stack[-1];
    goto v_8;
v_10:
    v_69 = stack[-3];
    if (!car_legal(v_69)) v_70 = carerror(v_69); else
    v_70 = car(v_69);
    v_69 = stack[-2];
    {   LispObject fn = basic_elt(env, 1); // contrsp
    v_69 = (*qfn2(fn))(fn, v_70, v_69);
    }
    env = stack[-4];
    v_71 = v_69;
    v_69 = v_71;
    if (v_69 == nil) goto v_23;
    v_69 = v_71;
    if (!car_legal(v_69)) v_70 = carerror(v_69); else
    v_70 = car(v_69);
    v_69 = v_71;
    if (!car_legal(v_69)) v_69 = cdrerror(v_69); else
    v_69 = cdr(v_69);
    v_69 = Lmember(nil, v_70, v_69);
    if (v_69 == nil) goto v_28;
    v_70 = stack[-3];
    v_69 = stack[-1];
        return Lappend_2(nil, v_70, v_69);
v_28:
    v_69 = stack[0];
    if (v_69 == nil) goto v_37;
    else goto v_38;
v_37:
    v_69 = stack[-3];
    if (!car_legal(v_69)) v_70 = cdrerror(v_69); else
    v_70 = cdr(v_69);
    v_69 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // contr2
    stack[-1] = (*qfn3(fn))(fn, v_71, v_70, v_69);
    }
    env = stack[-4];
    stack[0] = nil;
    v_69 = lisp_true;
    v_69 = ncons(v_69);
    env = stack[-4];
    {
        LispObject v_76 = stack[-1];
        LispObject v_77 = stack[-2];
        LispObject v_78 = stack[0];
        LispObject fn = basic_elt(env, 0); // contr2!-strand
        return (*qfn4up(fn))(fn, v_76, v_77, v_78, v_69);
    }
v_38:
    v_69 = stack[-3];
    if (!car_legal(v_69)) v_70 = cdrerror(v_69); else
    v_70 = cdr(v_69);
    v_69 = stack[-1];
    {
        LispObject fn = basic_elt(env, 2); // contr2
        return (*qfn3(fn))(fn, v_71, v_70, v_69);
    }
    v_69 = nil;
    goto v_21;
v_23:
    v_69 = stack[-3];
    if (!car_legal(v_69)) stack[0] = cdrerror(v_69); else
    stack[0] = cdr(v_69);
    v_69 = stack[-3];
    if (!car_legal(v_69)) v_70 = carerror(v_69); else
    v_70 = car(v_69);
    v_69 = stack[-1];
    stack[-1] = cons(v_70, v_69);
    env = stack[-4];
    v_69 = nil;
    v_69 = ncons(v_69);
    env = stack[-4];
    {
        LispObject v_79 = stack[0];
        LispObject v_80 = stack[-2];
        LispObject v_81 = stack[-1];
        LispObject fn = basic_elt(env, 0); // contr2!-strand
        return (*qfn4up(fn))(fn, v_79, v_80, v_81, v_69);
    }
    v_69 = nil;
v_21:
    goto v_8;
    v_69 = nil;
v_8:
    return onevalue(v_69);
}



// Code for sf2mv1

static LispObject CC_sf2mv1(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
v_8:
    v_71 = stack[-3];
    if (v_71 == nil) goto v_11;
    else goto v_12;
v_11:
    v_71 = nil;
    goto v_7;
v_12:
    v_71 = stack[-3];
    if (!consp(v_71)) goto v_19;
    else goto v_20;
v_19:
    v_71 = lisp_true;
    goto v_18;
v_20:
    v_71 = stack[-3];
    if (!car_legal(v_71)) v_71 = carerror(v_71); else
    v_71 = car(v_71);
    v_71 = (consp(v_71) ? nil : lisp_true);
    goto v_18;
    v_71 = nil;
v_18:
    if (v_71 == nil) goto v_16;
    stack[0] = stack[-2];
    v_71 = stack[-1];
    v_71 = Llength(nil, v_71);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 1); // nzeros
    v_71 = (*qfn1(fn))(fn, v_71);
    }
    env = stack[-5];
    v_72 = Lappend_2(nil, stack[0], v_71);
    env = stack[-5];
    v_71 = stack[-3];
    v_71 = cons(v_72, v_71);
    return ncons(v_71);
v_16:
    v_71 = stack[-3];
    if (!car_legal(v_71)) v_71 = carerror(v_71); else
    v_71 = car(v_71);
    if (!car_legal(v_71)) v_71 = carerror(v_71); else
    v_71 = car(v_71);
    if (!car_legal(v_71)) v_72 = carerror(v_71); else
    v_72 = car(v_71);
    v_71 = stack[-1];
    if (!car_legal(v_71)) v_71 = carerror(v_71); else
    v_71 = car(v_71);
    if (equal(v_72, v_71)) goto v_36;
    else goto v_37;
v_36:
    v_71 = stack[-3];
    if (!car_legal(v_71)) v_71 = carerror(v_71); else
    v_71 = car(v_71);
    if (!car_legal(v_71)) stack[-4] = cdrerror(v_71); else
    stack[-4] = cdr(v_71);
    stack[0] = stack[-2];
    v_71 = stack[-3];
    if (!car_legal(v_71)) v_71 = carerror(v_71); else
    v_71 = car(v_71);
    if (!car_legal(v_71)) v_71 = carerror(v_71); else
    v_71 = car(v_71);
    if (!car_legal(v_71)) v_71 = cdrerror(v_71); else
    v_71 = cdr(v_71);
    v_71 = ncons(v_71);
    env = stack[-5];
    v_72 = Lappend_2(nil, stack[0], v_71);
    env = stack[-5];
    v_71 = stack[-1];
    if (!car_legal(v_71)) v_71 = cdrerror(v_71); else
    v_71 = cdr(v_71);
    {   LispObject fn = basic_elt(env, 0); // sf2mv1
    stack[0] = (*qfn3(fn))(fn, stack[-4], v_72, v_71);
    }
    env = stack[-5];
    v_71 = stack[-3];
    if (!car_legal(v_71)) v_73 = cdrerror(v_71); else
    v_73 = cdr(v_71);
    v_72 = stack[-2];
    v_71 = stack[-1];
    {   LispObject fn = basic_elt(env, 0); // sf2mv1
    v_71 = (*qfn3(fn))(fn, v_73, v_72, v_71);
    }
    {
        LispObject v_79 = stack[0];
        return Lappend_2(nil, v_79, v_71);
    }
v_37:
    stack[0] = stack[-2];
    v_71 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_71 = ncons(v_71);
    env = stack[-5];
    v_71 = Lappend_2(nil, stack[0], v_71);
    env = stack[-5];
    stack[-2] = v_71;
    v_71 = stack[-1];
    if (!car_legal(v_71)) v_71 = cdrerror(v_71); else
    v_71 = cdr(v_71);
    stack[-1] = v_71;
    goto v_8;
    v_71 = nil;
v_7:
    return onevalue(v_71);
}



// Code for !:rn2rd

static LispObject CC_Trn2rd(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_17, v_18;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_18 = v_2;
// end of prologue
    v_17 = qvalue(basic_elt(env, 1)); // !*roundall
    if (v_17 == nil) goto v_7;
    v_17 = qvalue(basic_elt(env, 2)); // !*rounded
    if (v_17 == nil) goto v_7;
    v_17 = v_18;
    {
        LispObject fn = basic_elt(env, 3); // !*rn2rd
        return (*qfn1(fn))(fn, v_17);
    }
v_7:
    v_17 = v_18;
    goto v_5;
    v_17 = nil;
v_5:
    return onevalue(v_17);
}



// Code for tensorp

static LispObject CC_tensorp(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_16, v_17;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_17 = v_2;
// end of prologue
    v_16 = v_17;
    if (!consp(v_16)) goto v_7;
    v_16 = v_17;
    if (!car_legal(v_16)) v_16 = carerror(v_16); else
    v_16 = car(v_16);
    v_17 = basic_elt(env, 1); // tensor
        return Lflagp(nil, v_16, v_17);
v_7:
    v_16 = nil;
    goto v_5;
    v_16 = nil;
v_5:
    return onevalue(v_16);
}



// Code for ilcm

static LispObject CC_ilcm(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_41, v_42, v_43, v_44;
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
    v_43 = v_3;
    v_44 = v_2;
// end of prologue
    v_42 = v_44;
    v_41 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_42 == v_41) goto v_11;
    else goto v_12;
v_11:
    v_41 = lisp_true;
    goto v_10;
v_12:
    v_42 = v_43;
    v_41 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_41 = (v_42 == v_41 ? lisp_true : nil);
    goto v_10;
    v_41 = nil;
v_10:
    if (v_41 == nil) goto v_8;
    v_41 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_6;
v_8:
    v_42 = v_44;
    v_41 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_42 == v_41) goto v_22;
    else goto v_23;
v_22:
    v_41 = v_43;
    goto v_6;
v_23:
    v_42 = v_43;
    v_41 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_42 == v_41) goto v_27;
    else goto v_28;
v_27:
    v_41 = v_44;
    goto v_6;
v_28:
    stack[-1] = v_44;
    stack[0] = v_43;
    v_41 = v_44;
    v_42 = v_43;
    v_41 = Lgcd_2(nil, v_41, v_42);
    env = stack[-2];
    v_41 = quot2(stack[0], v_41);
    {
        LispObject v_47 = stack[-1];
        return times2(v_47, v_41);
    }
    v_41 = nil;
v_6:
    return onevalue(v_41);
}



// Code for general!-reciprocal!-by!-gcd

static LispObject CC_generalKreciprocalKbyKgcd(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_56, v_57, v_58;
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
v_11:
    v_57 = stack[-3];
    v_56 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_57 == v_56) goto v_14;
    else goto v_15;
v_14:
    v_58 = basic_elt(env, 1); // alg
    v_57 = static_cast<LispObject>(128)+TAG_FIXNUM; // 8
    v_56 = basic_elt(env, 2); // "Invalid modular division"
    {
        LispObject fn = basic_elt(env, 4); // rerror
        return (*qfn3(fn))(fn, v_58, v_57, v_56);
    }
v_15:
    v_57 = stack[-3];
    v_56 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_57 == v_56) goto v_22;
    else goto v_23;
v_22:
    v_57 = stack[-1];
    v_56 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_56 = static_cast<LispObject>(lessp2(v_57, v_56));
    v_56 = v_56 ? lisp_true : nil;
    env = stack[-6];
    if (v_56 == nil) goto v_29;
    v_56 = stack[-1];
    v_57 = qvalue(basic_elt(env, 3)); // current!-modulus
    return plus2(v_56, v_57);
v_29:
    v_56 = stack[-1];
    goto v_27;
    v_56 = nil;
v_27:
    goto v_10;
v_23:
    v_57 = stack[-4];
    v_56 = stack[-3];
    v_56 = quot2(v_57, v_56);
    env = stack[-6];
    stack[-5] = v_56;
    v_56 = stack[-4];
    v_57 = v_56;
    v_56 = stack[-3];
    stack[-4] = v_56;
    stack[0] = v_57;
    v_57 = stack[-3];
    v_56 = stack[-5];
    v_56 = times2(v_57, v_56);
    env = stack[-6];
    v_56 = difference2(stack[0], v_56);
    env = stack[-6];
    stack[-3] = v_56;
    v_56 = stack[-2];
    v_57 = v_56;
    v_56 = stack[-1];
    stack[-2] = v_56;
    stack[0] = v_57;
    v_57 = stack[-1];
    v_56 = stack[-5];
    v_56 = times2(v_57, v_56);
    env = stack[-6];
    v_56 = difference2(stack[0], v_56);
    env = stack[-6];
    stack[-1] = v_56;
    goto v_11;
v_10:
    return onevalue(v_56);
}



// Code for lalr_precalculate_first_sets

static LispObject CC_lalr_precalculate_first_sets(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil, nil, nil, nil, nil);
    push(nil, nil);
    stack_popper stack_popper_var(8);
// end of prologue
    stack[-3] = nil;
v_11:
    v_127 = nil;
    stack[-6] = v_127;
    v_127 = qvalue(basic_elt(env, 1)); // nonterminals
    stack[-2] = v_127;
v_16:
    v_127 = stack[-2];
    if (v_127 == nil) goto v_20;
    else goto v_21;
v_20:
    goto v_15;
v_21:
    v_127 = stack[-2];
    if (!car_legal(v_127)) v_127 = carerror(v_127); else
    v_127 = car(v_127);
    stack[-1] = v_127;
    v_128 = stack[-1];
    v_127 = basic_elt(env, 2); // lalr_first
    v_127 = get(v_128, v_127);
    env = stack[-7];
    stack[-5] = v_127;
    v_127 = stack[-1];
    {   LispObject fn = basic_elt(env, 4); // lalr_productions
    v_127 = (*qfn1(fn))(fn, v_127);
    }
    env = stack[-7];
    stack[0] = v_127;
v_33:
    v_127 = stack[0];
    if (v_127 == nil) goto v_38;
    else goto v_39;
v_38:
    goto v_32;
v_39:
    v_127 = stack[0];
    if (!car_legal(v_127)) v_127 = carerror(v_127); else
    v_127 = car(v_127);
    if (!car_legal(v_127)) v_127 = carerror(v_127); else
    v_127 = car(v_127);
    stack[-4] = v_127;
v_49:
    v_127 = stack[-4];
    if (v_127 == nil) goto v_52;
    v_127 = stack[-4];
    if (!car_legal(v_127)) v_127 = carerror(v_127); else
    v_127 = car(v_127);
    if (is_number(v_127)) goto v_60;
    v_129 = nil;
    v_127 = stack[-4];
    if (!car_legal(v_127)) v_128 = carerror(v_127); else
    v_128 = car(v_127);
    v_127 = basic_elt(env, 2); // lalr_first
    v_127 = get(v_128, v_127);
    env = stack[-7];
    stack[-3] = v_127;
    v_127 = Lmember(nil, v_129, v_127);
    goto v_58;
v_60:
    v_127 = nil;
    goto v_58;
    v_127 = nil;
v_58:
    if (v_127 == nil) goto v_52;
    goto v_53;
v_52:
    goto v_48;
v_53:
    v_128 = nil;
    v_127 = stack[-3];
    v_128 = Ldeleq(nil, v_128, v_127);
    env = stack[-7];
    v_127 = stack[-5];
    {   LispObject fn = basic_elt(env, 5); // union
    v_127 = (*qfn2(fn))(fn, v_128, v_127);
    }
    env = stack[-7];
    stack[-5] = v_127;
    v_127 = stack[-4];
    if (!car_legal(v_127)) v_127 = cdrerror(v_127); else
    v_127 = cdr(v_127);
    stack[-4] = v_127;
    goto v_49;
v_48:
    v_127 = stack[-4];
    if (v_127 == nil) goto v_82;
    else goto v_83;
v_82:
    v_128 = basic_elt(env, 3); // (nil)
    v_127 = stack[-5];
    {   LispObject fn = basic_elt(env, 5); // union
    v_127 = (*qfn2(fn))(fn, v_128, v_127);
    }
    env = stack[-7];
    stack[-5] = v_127;
    goto v_81;
v_83:
    v_127 = stack[-4];
    if (!car_legal(v_127)) v_127 = carerror(v_127); else
    v_127 = car(v_127);
    if (is_number(v_127)) goto v_88;
    else goto v_89;
v_88:
    v_127 = stack[-4];
    if (!car_legal(v_127)) v_127 = carerror(v_127); else
    v_127 = car(v_127);
    v_128 = ncons(v_127);
    env = stack[-7];
    v_127 = stack[-5];
    {   LispObject fn = basic_elt(env, 5); // union
    v_127 = (*qfn2(fn))(fn, v_128, v_127);
    }
    env = stack[-7];
    stack[-5] = v_127;
    goto v_81;
v_89:
    v_127 = stack[-4];
    if (!car_legal(v_127)) v_128 = carerror(v_127); else
    v_128 = car(v_127);
    v_127 = basic_elt(env, 2); // lalr_first
    v_128 = get(v_128, v_127);
    env = stack[-7];
    v_127 = stack[-5];
    {   LispObject fn = basic_elt(env, 5); // union
    v_127 = (*qfn2(fn))(fn, v_128, v_127);
    }
    env = stack[-7];
    stack[-5] = v_127;
    goto v_81;
v_81:
    v_127 = stack[0];
    if (!car_legal(v_127)) v_127 = cdrerror(v_127); else
    v_127 = cdr(v_127);
    stack[0] = v_127;
    goto v_33;
v_32:
    v_129 = stack[-5];
    v_128 = stack[-1];
    v_127 = basic_elt(env, 2); // lalr_first
    v_127 = get(v_128, v_127);
    env = stack[-7];
    if (equal(v_129, v_127)) goto v_110;
    v_127 = lisp_true;
    stack[-6] = v_127;
    v_129 = stack[-1];
    v_128 = basic_elt(env, 2); // lalr_first
    v_127 = stack[-5];
    v_127 = Lputprop(nil, v_129, v_128, v_127);
    env = stack[-7];
    goto v_108;
v_110:
v_108:
    v_127 = stack[-2];
    if (!car_legal(v_127)) v_127 = cdrerror(v_127); else
    v_127 = cdr(v_127);
    stack[-2] = v_127;
    goto v_16;
v_15:
    v_127 = stack[-6];
    if (v_127 == nil) goto v_125;
    goto v_11;
v_125:
    v_127 = nil;
    return onevalue(v_127);
}



// Code for squared!+matrix!+p

static LispObject CC_squaredLmatrixLp(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_19;
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
    v_19 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // matrix!+p
    v_19 = (*qfn1(fn))(fn, v_19);
    }
    env = stack[-2];
    if (v_19 == nil) goto v_9;
    v_19 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // get!+row!+nr
    stack[-1] = (*qfn1(fn))(fn, v_19);
    }
    env = stack[-2];
    v_19 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // get!+col!+nr
    v_19 = (*qfn1(fn))(fn, v_19);
    }
    if (equal(stack[-1], v_19)) goto v_13;
    else goto v_9;
v_13:
    v_19 = lisp_true;
    goto v_5;
v_9:
    v_19 = nil;
v_5:
    return onevalue(v_19);
}



// Code for cl_flip

static LispObject CC_cl_flip(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_52, v_53, v_54;
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
    v_54 = v_2;
// end of prologue
    v_53 = v_54;
    v_52 = basic_elt(env, 1); // and
    if (v_53 == v_52) goto v_6;
    else goto v_7;
v_6:
    v_52 = basic_elt(env, 2); // or
    goto v_5;
v_7:
    v_53 = v_54;
    v_52 = basic_elt(env, 2); // or
    if (v_53 == v_52) goto v_11;
    else goto v_12;
v_11:
    v_52 = basic_elt(env, 1); // and
    goto v_5;
v_12:
    v_53 = v_54;
    v_52 = basic_elt(env, 3); // all
    if (v_53 == v_52) goto v_16;
    else goto v_17;
v_16:
    v_52 = basic_elt(env, 4); // ex
    goto v_5;
v_17:
    v_53 = v_54;
    v_52 = basic_elt(env, 4); // ex
    if (v_53 == v_52) goto v_21;
    else goto v_22;
v_21:
    v_52 = basic_elt(env, 3); // all
    goto v_5;
v_22:
    v_53 = v_54;
    v_52 = basic_elt(env, 5); // ball
    if (v_53 == v_52) goto v_26;
    else goto v_27;
v_26:
    v_52 = basic_elt(env, 6); // bex
    goto v_5;
v_27:
    v_53 = v_54;
    v_52 = basic_elt(env, 6); // bex
    if (v_53 == v_52) goto v_31;
    else goto v_32;
v_31:
    v_52 = basic_elt(env, 5); // ball
    goto v_5;
v_32:
    v_53 = v_54;
    v_52 = basic_elt(env, 7); // true
    if (v_53 == v_52) goto v_36;
    else goto v_37;
v_36:
    v_52 = basic_elt(env, 8); // false
    goto v_5;
v_37:
    v_53 = v_54;
    v_52 = basic_elt(env, 8); // false
    if (v_53 == v_52) goto v_41;
    else goto v_42;
v_41:
    v_52 = basic_elt(env, 7); // true
    goto v_5;
v_42:
    v_52 = basic_elt(env, 9); // "cl_flip(): don't know"
    v_53 = v_54;
    v_52 = list2(v_52, v_53);
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 10); // rederr
        return (*qfn1(fn))(fn, v_52);
    }
    v_52 = nil;
v_5:
    return onevalue(v_52);
}



// Code for rl_susitf

static LispObject CC_rl_susitf(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    v_10 = v_3;
    v_11 = v_2;
// end of prologue
    stack[0] = qvalue(basic_elt(env, 1)); // rl_susitf!*
    v_10 = list2(v_11, v_10);
    env = stack[-1];
    {
        LispObject v_13 = stack[0];
        LispObject fn = basic_elt(env, 2); // apply
        return (*qfn2(fn))(fn, v_13, v_10);
    }
}



// Code for vsl_boundtype

static LispObject CC_vsl_boundtype(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_10, v_11;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_10 = v_3;
    v_11 = v_2;
// end of prologue
    if (!car_legal(v_11)) v_11 = cdrerror(v_11); else
    v_11 = cdr(v_11);
    if (!car_legal(v_11)) v_11 = carerror(v_11); else
    v_11 = car(v_11);
    {
        LispObject fn = basic_elt(env, 1); // vsl_boundtype1
        return (*qfn2(fn))(fn, v_11, v_10);
    }
}



// Code for sfto_b!:extmult

static LispObject CC_sfto_bTextmult(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_91, v_92;
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
    v_91 = stack[-3];
    if (v_91 == nil) goto v_11;
    else goto v_12;
v_11:
    v_91 = lisp_true;
    goto v_10;
v_12:
    v_91 = stack[-2];
    v_91 = (v_91 == nil ? lisp_true : nil);
    goto v_10;
    v_91 = nil;
v_10:
    if (v_91 == nil) goto v_8;
    v_91 = nil;
    goto v_6;
v_8:
    v_92 = stack[-2];
    v_91 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_92 == v_91) goto v_20;
    else goto v_21;
v_20:
    v_91 = stack[-3];
    goto v_6;
v_21:
    v_91 = stack[-3];
    if (!car_legal(v_91)) v_91 = carerror(v_91); else
    v_91 = car(v_91);
    if (!car_legal(v_91)) v_91 = carerror(v_91); else
    v_91 = car(v_91);
    if (!car_legal(v_91)) v_92 = carerror(v_91); else
    v_92 = car(v_91);
    v_91 = stack[-2];
    if (!car_legal(v_91)) v_91 = carerror(v_91); else
    v_91 = car(v_91);
    if (!car_legal(v_91)) v_91 = carerror(v_91); else
    v_91 = car(v_91);
    {   LispObject fn = basic_elt(env, 1); // sfto_b!:ordexn
    v_91 = (*qfn2(fn))(fn, v_92, v_91);
    }
    env = stack[-5];
    v_92 = v_91;
    v_91 = v_92;
    if (v_91 == nil) goto v_39;
    v_91 = v_92;
    if (!car_legal(v_91)) stack[-4] = cdrerror(v_91); else
    stack[-4] = cdr(v_91);
    v_91 = v_92;
    if (!car_legal(v_91)) v_91 = carerror(v_91); else
    v_91 = car(v_91);
    if (v_91 == nil) goto v_47;
    v_91 = stack[-3];
    if (!car_legal(v_91)) v_91 = carerror(v_91); else
    v_91 = car(v_91);
    if (!car_legal(v_91)) v_92 = cdrerror(v_91); else
    v_92 = cdr(v_91);
    v_91 = stack[-2];
    if (!car_legal(v_91)) v_91 = carerror(v_91); else
    v_91 = car(v_91);
    if (!car_legal(v_91)) v_91 = cdrerror(v_91); else
    v_91 = cdr(v_91);
    {   LispObject fn = basic_elt(env, 2); // multf
    v_91 = (*qfn2(fn))(fn, v_92, v_91);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 3); // negf
    v_91 = (*qfn1(fn))(fn, v_91);
    }
    env = stack[-5];
    stack[-1] = v_91;
    goto v_45;
v_47:
    v_91 = stack[-3];
    if (!car_legal(v_91)) v_91 = carerror(v_91); else
    v_91 = car(v_91);
    if (!car_legal(v_91)) v_92 = cdrerror(v_91); else
    v_92 = cdr(v_91);
    v_91 = stack[-2];
    if (!car_legal(v_91)) v_91 = carerror(v_91); else
    v_91 = car(v_91);
    if (!car_legal(v_91)) v_91 = cdrerror(v_91); else
    v_91 = cdr(v_91);
    {   LispObject fn = basic_elt(env, 2); // multf
    v_91 = (*qfn2(fn))(fn, v_92, v_91);
    }
    env = stack[-5];
    stack[-1] = v_91;
    goto v_45;
    stack[-1] = nil;
v_45:
    v_91 = stack[-3];
    if (!car_legal(v_91)) v_91 = carerror(v_91); else
    v_91 = car(v_91);
    v_92 = ncons(v_91);
    env = stack[-5];
    v_91 = stack[-2];
    if (!car_legal(v_91)) v_91 = cdrerror(v_91); else
    v_91 = cdr(v_91);
    {   LispObject fn = basic_elt(env, 0); // sfto_b!:extmult
    stack[0] = (*qfn2(fn))(fn, v_92, v_91);
    }
    env = stack[-5];
    v_91 = stack[-3];
    if (!car_legal(v_91)) v_92 = cdrerror(v_91); else
    v_92 = cdr(v_91);
    v_91 = stack[-2];
    {   LispObject fn = basic_elt(env, 0); // sfto_b!:extmult
    v_91 = (*qfn2(fn))(fn, v_92, v_91);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 4); // sfto_b!:extadd
    v_91 = (*qfn2(fn))(fn, stack[0], v_91);
    }
    {
        LispObject v_98 = stack[-4];
        LispObject v_99 = stack[-1];
        return acons(v_98, v_99, v_91);
    }
v_39:
    v_91 = stack[-3];
    if (!car_legal(v_91)) v_92 = cdrerror(v_91); else
    v_92 = cdr(v_91);
    v_91 = stack[-2];
    {   LispObject fn = basic_elt(env, 0); // sfto_b!:extmult
    stack[0] = (*qfn2(fn))(fn, v_92, v_91);
    }
    env = stack[-5];
    v_91 = stack[-3];
    if (!car_legal(v_91)) v_91 = carerror(v_91); else
    v_91 = car(v_91);
    v_92 = ncons(v_91);
    env = stack[-5];
    v_91 = stack[-2];
    if (!car_legal(v_91)) v_91 = cdrerror(v_91); else
    v_91 = cdr(v_91);
    {   LispObject fn = basic_elt(env, 0); // sfto_b!:extmult
    v_91 = (*qfn2(fn))(fn, v_92, v_91);
    }
    env = stack[-5];
    {
        LispObject v_100 = stack[0];
        LispObject fn = basic_elt(env, 4); // sfto_b!:extadd
        return (*qfn2(fn))(fn, v_100, v_91);
    }
    v_91 = nil;
    goto v_6;
    v_91 = nil;
v_6:
    return onevalue(v_91);
}



setup_type const u21_setup[] =
{
    {"mvar_member",             G0W2,     G1W2,     CC_mvar_member,G3W2,G4W2},
    {"rnminusp:",               G0W1,     CC_rnminuspT,G2W1,  G3W1,     G4W1},
    {"mo_times_ei",             G0W2,     G1W2,     CC_mo_times_ei,G3W2,G4W2},
    {"reverse-num",             G0W1,     CC_reverseKnum,G2W1,G3W1,     G4W1},
    {"mkcr",                    G0W2,     G1W2,     CC_mkcr,  G3W2,     G4W2},
    {"lalr_prin_rhs",           G0W1,     CC_lalr_prin_rhs,G2W1,G3W1,   G4W1},
    {"cl_nnf",                  G0W1,     CC_cl_nnf,G2W1,     G3W1,     G4W1},
    {"cl_simpl1",               G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_cl_simpl1},
    {"pasf_pdp",                G0W1,     CC_pasf_pdp,G2W1,   G3W1,     G4W1},
    {"bc_zero?",                G0W1,     CC_bc_zeroW,G2W1,   G3W1,     G4W1},
    {"get-height",              G0W1,     CC_getKheight,G2W1, G3W1,     G4W1},
    {"mchkopt1",                G0W3,     G1W3,     G2W3,     CC_mchkopt1,G4W3},
    {"simprecip",               G0W1,     CC_simprecip,G2W1,  G3W1,     G4W1},
    {"rd:prep",                 G0W1,     CC_rdTprep,G2W1,    G3W1,     G4W1},
    {"evmtest?",                G0W2,     G1W2,     CC_evmtestW,G3W2,   G4W2},
    {"expvec2a",                G0W1,     CC_expvec2a,G2W1,   G3W1,     G4W1},
    {"treesizep",               G0W2,     G1W2,     CC_treesizep,G3W2,  G4W2},
    {"ncoeffs",                 G0W1,     CC_ncoeffs,G2W1,    G3W1,     G4W1},
    {"next-random-number",      CC_nextKrandomKnumber,G1W0,G2W0,G3W0,   G4W0},
    {"nfactorial",              G0W1,     CC_nfactorial,G2W1, G3W1,     G4W1},
    {"reducepowers",            G0W1,     CC_reducepowers,G2W1,G3W1,    G4W1},
    {"setk0",                   G0W2,     G1W2,     CC_setk0, G3W2,     G4W2},
    {"gcref_select",            G0W1,     CC_gcref_select,G2W1,G3W1,    G4W1},
    {"vintersection",           G0W2,     G1W2,     CC_vintersection,G3W2,G4W2},
    {"cl_atl",                  G0W1,     CC_cl_atl,G2W1,     G3W1,     G4W1},
    {"pasf_sisub",              G0W3,     G1W3,     G2W3,     CC_pasf_sisub,G4W3},
    {"dipevlcomp",              G0W2,     G1W2,     CC_dipevlcomp,G3W2, G4W2},
    {"assert_format",           G0W3,     G1W3,     G2W3,     CC_assert_format,G4W3},
    {"mv-domainlist",           G0W1,     CC_mvKdomainlist,G2W1,G3W1,   G4W1},
    {"rnprep:",                 G0W1,     CC_rnprepT,G2W1,    G3W1,     G4W1},
    {"rootrnd",                 G0W1,     CC_rootrnd,G2W1,    G3W1,     G4W1},
    {"prin_with_margin",        G0W1,     CC_prin_with_margin,G2W1,G3W1,G4W1},
    {"mk+unit+mat",             G0W1,     CC_mkLunitLmat,G2W1,G3W1,     G4W1},
    {"fctrf1",                  G0W1,     CC_fctrf1,G2W1,     G3W1,     G4W1},
    {"sfto_b:ordexn",           G0W2,     G1W2,     CC_sfto_bTordexn,G3W2,G4W2},
    {"dm-gt",                   G0W2,     G1W2,     CC_dmKgt, G3W2,     G4W2},
    {"chk",                     G0W1,     CC_chk,   G2W1,     G3W1,     G4W1},
    {"coposp",                  G0W1,     CC_coposp,G2W1,     G3W1,     G4W1},
    {"partitexdf",              G0W1,     CC_partitexdf,G2W1, G3W1,     G4W1},
    {"inttovec-solve",          G0W2,     G1W2,     CC_inttovecKsolve,G3W2,G4W2},
    {"contr2-strand",           G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_contr2Kstrand},
    {"sf2mv1",                  G0W3,     G1W3,     G2W3,     CC_sf2mv1,G4W3},
    {":rn2rd",                  G0W1,     CC_Trn2rd,G2W1,     G3W1,     G4W1},
    {"tensorp",                 G0W1,     CC_tensorp,G2W1,    G3W1,     G4W1},
    {"ilcm",                    G0W2,     G1W2,     CC_ilcm,  G3W2,     G4W2},
    {"general-reciprocal-by-gcd",G0W4up,  G1W4up,   G2W4up,   G3W4up,   CC_generalKreciprocalKbyKgcd},
    {"lalr_precalculate_first_sets",CC_lalr_precalculate_first_sets,G1W0,G2W0,G3W0,G4W0},
    {"squared+matrix+p",        G0W1,     CC_squaredLmatrixLp,G2W1,G3W1,G4W1},
    {"cl_flip",                 G0W1,     CC_cl_flip,G2W1,    G3W1,     G4W1},
    {"rl_susitf",               G0W2,     G1W2,     CC_rl_susitf,G3W2,  G4W2},
    {"vsl_boundtype",           G0W2,     G1W2,     CC_vsl_boundtype,G3W2,G4W2},
    {"sfto_b:extmult",          G0W2,     G1W2,     CC_sfto_bTextmult,G3W2,G4W2},
    {nullptr, 
        reinterpret_cast<no_args *>(
            reinterpret_cast<uintptr_t>("u21")),
        reinterpret_cast<one_arg *>(
            reinterpret_cast<uintptr_t>("46859 36522 886874")),
        nullptr, nullptr, nullptr}
};

// end of generated code
