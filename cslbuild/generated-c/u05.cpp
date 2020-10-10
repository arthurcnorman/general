
// $destdir/u05.c        Machine generated C code

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


// Code for ibalp_cequal

static LispObject CC_ibalp_cequal(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_176, v_177;
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
    stack[-4] = v_3;
    stack[-5] = v_2;
// end of prologue
    v_176 = stack[-5];
    if (!car_legal(v_176)) v_176 = carerror(v_176); else
    v_176 = car(v_176);
    stack[-3] = v_176;
    v_176 = stack[-3];
    if (v_176 == nil) goto v_21;
    else goto v_22;
v_21:
    v_176 = nil;
    goto v_15;
v_22:
    v_176 = stack[-3];
    if (!car_legal(v_176)) v_176 = carerror(v_176); else
    v_176 = car(v_176);
    if (!car_legal(v_176)) v_176 = carerror(v_176); else
    v_176 = car(v_176);
    v_176 = ncons(v_176);
    env = stack[-7];
    stack[-1] = v_176;
    stack[-2] = v_176;
v_16:
    v_176 = stack[-3];
    if (!car_legal(v_176)) v_176 = cdrerror(v_176); else
    v_176 = cdr(v_176);
    stack[-3] = v_176;
    v_176 = stack[-3];
    if (v_176 == nil) goto v_35;
    else goto v_36;
v_35:
    v_176 = stack[-2];
    goto v_15;
v_36:
    stack[0] = stack[-1];
    v_176 = stack[-3];
    if (!car_legal(v_176)) v_176 = carerror(v_176); else
    v_176 = car(v_176);
    if (!car_legal(v_176)) v_176 = carerror(v_176); else
    v_176 = car(v_176);
    v_176 = ncons(v_176);
    env = stack[-7];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_176);
    v_176 = stack[-1];
    if (!car_legal(v_176)) v_176 = cdrerror(v_176); else
    v_176 = cdr(v_176);
    stack[-1] = v_176;
    goto v_16;
v_15:
    stack[-6] = v_176;
    v_176 = stack[-4];
    if (!car_legal(v_176)) v_176 = carerror(v_176); else
    v_176 = car(v_176);
    stack[-3] = v_176;
    v_176 = stack[-3];
    if (v_176 == nil) goto v_59;
    else goto v_60;
v_59:
    v_176 = nil;
    goto v_53;
v_60:
    v_176 = stack[-3];
    if (!car_legal(v_176)) v_176 = carerror(v_176); else
    v_176 = car(v_176);
    if (!car_legal(v_176)) v_176 = carerror(v_176); else
    v_176 = car(v_176);
    v_176 = ncons(v_176);
    env = stack[-7];
    stack[-1] = v_176;
    stack[-2] = v_176;
v_54:
    v_176 = stack[-3];
    if (!car_legal(v_176)) v_176 = cdrerror(v_176); else
    v_176 = cdr(v_176);
    stack[-3] = v_176;
    v_176 = stack[-3];
    if (v_176 == nil) goto v_73;
    else goto v_74;
v_73:
    v_176 = stack[-2];
    goto v_53;
v_74:
    stack[0] = stack[-1];
    v_176 = stack[-3];
    if (!car_legal(v_176)) v_176 = carerror(v_176); else
    v_176 = car(v_176);
    if (!car_legal(v_176)) v_176 = carerror(v_176); else
    v_176 = car(v_176);
    v_176 = ncons(v_176);
    env = stack[-7];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_176);
    v_176 = stack[-1];
    if (!car_legal(v_176)) v_176 = cdrerror(v_176); else
    v_176 = cdr(v_176);
    stack[-1] = v_176;
    goto v_54;
v_53:
    v_177 = stack[-6];
    {   LispObject fn = basic_elt(env, 1); // lto_setequalq
    v_176 = (*qfn2(fn))(fn, v_177, v_176);
    }
    env = stack[-7];
    if (v_176 == nil) goto v_89;
    else goto v_90;
v_89:
    v_176 = nil;
    goto v_10;
v_90:
    v_176 = stack[-5];
    if (!car_legal(v_176)) v_176 = cdrerror(v_176); else
    v_176 = cdr(v_176);
    if (!car_legal(v_176)) v_176 = carerror(v_176); else
    v_176 = car(v_176);
    stack[-3] = v_176;
    v_176 = stack[-3];
    if (v_176 == nil) goto v_106;
    else goto v_107;
v_106:
    v_176 = nil;
    goto v_99;
v_107:
    v_176 = stack[-3];
    if (!car_legal(v_176)) v_176 = carerror(v_176); else
    v_176 = car(v_176);
    if (!car_legal(v_176)) v_176 = carerror(v_176); else
    v_176 = car(v_176);
    v_176 = ncons(v_176);
    env = stack[-7];
    stack[-1] = v_176;
    stack[-2] = v_176;
v_100:
    v_176 = stack[-3];
    if (!car_legal(v_176)) v_176 = cdrerror(v_176); else
    v_176 = cdr(v_176);
    stack[-3] = v_176;
    v_176 = stack[-3];
    if (v_176 == nil) goto v_120;
    else goto v_121;
v_120:
    v_176 = stack[-2];
    goto v_99;
v_121:
    stack[0] = stack[-1];
    v_176 = stack[-3];
    if (!car_legal(v_176)) v_176 = carerror(v_176); else
    v_176 = car(v_176);
    if (!car_legal(v_176)) v_176 = carerror(v_176); else
    v_176 = car(v_176);
    v_176 = ncons(v_176);
    env = stack[-7];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_176);
    v_176 = stack[-1];
    if (!car_legal(v_176)) v_176 = cdrerror(v_176); else
    v_176 = cdr(v_176);
    stack[-1] = v_176;
    goto v_100;
v_99:
    stack[-3] = v_176;
    v_176 = stack[-4];
    if (!car_legal(v_176)) v_176 = cdrerror(v_176); else
    v_176 = cdr(v_176);
    if (!car_legal(v_176)) v_176 = carerror(v_176); else
    v_176 = car(v_176);
    stack[-4] = v_176;
    v_176 = stack[-4];
    if (v_176 == nil) goto v_145;
    else goto v_146;
v_145:
    v_176 = nil;
    goto v_138;
v_146:
    v_176 = stack[-4];
    if (!car_legal(v_176)) v_176 = carerror(v_176); else
    v_176 = car(v_176);
    if (!car_legal(v_176)) v_176 = carerror(v_176); else
    v_176 = car(v_176);
    v_176 = ncons(v_176);
    env = stack[-7];
    stack[-1] = v_176;
    stack[-2] = v_176;
v_139:
    v_176 = stack[-4];
    if (!car_legal(v_176)) v_176 = cdrerror(v_176); else
    v_176 = cdr(v_176);
    stack[-4] = v_176;
    v_176 = stack[-4];
    if (v_176 == nil) goto v_159;
    else goto v_160;
v_159:
    v_176 = stack[-2];
    goto v_138;
v_160:
    stack[0] = stack[-1];
    v_176 = stack[-4];
    if (!car_legal(v_176)) v_176 = carerror(v_176); else
    v_176 = car(v_176);
    if (!car_legal(v_176)) v_176 = carerror(v_176); else
    v_176 = car(v_176);
    v_176 = ncons(v_176);
    env = stack[-7];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_176);
    v_176 = stack[-1];
    if (!car_legal(v_176)) v_176 = cdrerror(v_176); else
    v_176 = cdr(v_176);
    stack[-1] = v_176;
    goto v_139;
v_138:
    v_177 = stack[-3];
    {
        LispObject fn = basic_elt(env, 1); // lto_setequalq
        return (*qfn2(fn))(fn, v_177, v_176);
    }
v_10:
    return onevalue(v_176);
}



// Code for vdp_poly

static LispObject CC_vdp_poly(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_9;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_9 = v_2;
// end of prologue
    if (!car_legal(v_9)) v_9 = cdrerror(v_9); else
    v_9 = cdr(v_9);
    if (!car_legal(v_9)) v_9 = cdrerror(v_9); else
    v_9 = cdr(v_9);
    if (!car_legal(v_9)) v_9 = cdrerror(v_9); else
    v_9 = cdr(v_9);
    if (!car_legal(v_9)) v_9 = carerror(v_9); else
    v_9 = car(v_9);
    return onevalue(v_9);
}



// Code for ev_comp

static LispObject CC_ev_comp(LispObject env,
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
    stack[0] = qvalue(basic_elt(env, 1)); // dip_sortevcomp!*
    v_10 = list2(v_11, v_10);
    env = stack[-1];
    {
        LispObject v_13 = stack[0];
        LispObject fn = basic_elt(env, 2); // apply
        return (*qfn2(fn))(fn, v_13, v_10);
    }
}



// Code for fullcopy

static LispObject CC_fullcopy(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_65, v_66;
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
    stack[0] = nil;
v_7:
    v_65 = stack[-5];
    v_65 = Lconsp(nil, v_65);
    env = stack[-7];
    if (v_65 == nil) goto v_11;
    v_65 = stack[-5];
    if (!car_legal(v_65)) v_65 = carerror(v_65); else
    v_65 = car(v_65);
    {   LispObject fn = basic_elt(env, 0); // fullcopy
    v_66 = (*qfn1(fn))(fn, v_65);
    }
    env = stack[-7];
    v_65 = stack[0];
    v_65 = cons(v_66, v_65);
    env = stack[-7];
    stack[0] = v_65;
    v_65 = stack[-5];
    if (!car_legal(v_65)) v_65 = cdrerror(v_65); else
    v_65 = cdr(v_65);
    stack[-5] = v_65;
    goto v_7;
v_11:
    v_65 = stack[-5];
    v_65 = Lsimple_vectorp(nil, v_65);
    env = stack[-7];
    if (v_65 == nil) goto v_22;
    stack[-6] = stack[0];
    v_65 = stack[-5];
    v_65 = Lupbv(nil, v_65);
    env = stack[-7];
    stack[-3] = v_65;
    v_65 = stack[-3];
    v_65 = Lmkvect(nil, v_65);
    env = stack[-7];
    stack[-4] = v_65;
    v_65 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-2] = v_65;
v_39:
    v_66 = stack[-3];
    v_65 = stack[-2];
    v_65 = difference2(v_66, v_65);
    env = stack[-7];
    v_65 = Lminusp(nil, v_65);
    env = stack[-7];
    if (v_65 == nil) goto v_44;
    goto v_38;
v_44:
    stack[-1] = stack[-4];
    stack[0] = stack[-2];
    v_66 = stack[-5];
    v_65 = stack[-2];
    v_65 = Lgetv(nil, v_66, v_65);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 0); // fullcopy
    v_65 = (*qfn1(fn))(fn, v_65);
    }
    env = stack[-7];
    v_65 = Lputv(nil, stack[-1], stack[0], v_65);
    env = stack[-7];
    v_65 = stack[-2];
    v_65 = add1(v_65);
    env = stack[-7];
    stack[-2] = v_65;
    goto v_39;
v_38:
    v_65 = stack[-4];
    {
        LispObject v_74 = stack[-6];
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn2(fn))(fn, v_74, v_65);
    }
v_22:
    v_66 = stack[0];
    v_65 = stack[-5];
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn2(fn))(fn, v_66, v_65);
    }
    v_65 = nil;
    return onevalue(v_65);
}



// Code for dm!-times

static LispObject CC_dmKtimes(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_3;
    v_20 = v_2;
// end of prologue
    {   LispObject fn = basic_elt(env, 1); // zero2nil
    stack[-1] = (*qfn1(fn))(fn, v_20);
    }
    env = stack[-2];
    v_20 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // zero2nil
    v_20 = (*qfn1(fn))(fn, v_20);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 2); // !:times
    v_20 = (*qfn2(fn))(fn, stack[-1], v_20);
    }
    v_21 = v_20;
    v_20 = v_21;
    if (v_20 == nil) goto v_13;
    else goto v_14;
v_13:
    v_20 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_12;
v_14:
    v_20 = v_21;
    goto v_12;
    v_20 = nil;
v_12:
    return onevalue(v_20);
}



// Code for getrtype1

static LispObject CC_getrtype1(LispObject env,
                         LispObject v_2)
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
        push(v_2);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_14 = v_2;
// end of prologue
    v_14 = Lthreevectorp(nil, v_14);
    env = stack[0];
    if (v_14 == nil) goto v_7;
    v_14 = basic_elt(env, 1); // !3vector
    goto v_5;
v_7:
    v_14 = nil;
    goto v_5;
    v_14 = nil;
v_5:
    return onevalue(v_14);
}



// Code for vevtdeg

static LispObject CC_vevtdeg(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_35, v_36, v_37;
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
    v_36 = nil;
v_8:
    v_35 = stack[0];
    if (v_35 == nil) goto v_13;
    else goto v_14;
v_13:
    goto v_9;
v_14:
    v_35 = stack[0];
    if (!car_legal(v_35)) v_35 = carerror(v_35); else
    v_35 = car(v_35);
    v_35 = cons(v_35, v_36);
    env = stack[-1];
    v_36 = v_35;
    v_35 = stack[0];
    if (!car_legal(v_35)) v_35 = cdrerror(v_35); else
    v_35 = cdr(v_35);
    stack[0] = v_35;
    goto v_8;
v_9:
    v_35 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
v_10:
    v_37 = v_36;
    if (v_37 == nil) goto v_25;
    else goto v_26;
v_25:
    goto v_7;
v_26:
    v_37 = v_36;
    v_37 = car(v_37);
    v_35 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_37) + static_cast<std::uintptr_t>(v_35) - TAG_FIXNUM);
    v_36 = cdr(v_36);
    goto v_10;
v_7:
    return onevalue(v_35);
}



// Code for safe!-fp!-minus

static LispObject CC_safeKfpKminus(LispObject env,
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
    v_20 = v_2;
// end of prologue
    v_18 = qvalue(basic_elt(env, 1)); // !*nonegzerominus
    if (v_18 == nil) goto v_7;
    v_19 = v_20;
    v_18 = basic_elt(env, 2); // 0.0
    if (equal(v_19, v_18)) goto v_10;
    else goto v_7;
v_10:
    v_18 = basic_elt(env, 2); // 0.0
    goto v_5;
v_7:
    v_18 = v_20;
    return negate(v_18);
    v_18 = nil;
v_5:
    return onevalue(v_18);
}



// Code for prin2!-downcase

static LispObject CC_prin2Kdowncase(LispObject env,
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
    v_34 = v_2;
// end of prologue
    v_34 = Lexplodec(nil, v_34);
    env = stack[-1];
    stack[0] = v_34;
v_7:
    v_34 = stack[0];
    if (v_34 == nil) goto v_12;
    else goto v_13;
v_12:
    v_34 = nil;
    goto v_6;
v_13:
    v_34 = stack[0];
    if (!car_legal(v_34)) v_34 = carerror(v_34); else
    v_34 = car(v_34);
    v_35 = v_34;
    v_34 = v_35;
    v_34 = Lalpha_char_p(nil, v_34);
    env = stack[-1];
    if (v_34 == nil) goto v_22;
    v_34 = v_35;
    {   LispObject fn = basic_elt(env, 1); // red!-char!-downcase
    v_34 = (*qfn1(fn))(fn, v_34);
    }
    env = stack[-1];
    v_34 = Lprinc(nil, v_34);
    env = stack[-1];
    goto v_20;
v_22:
    v_34 = v_35;
    v_34 = Lprinc(nil, v_34);
    env = stack[-1];
    goto v_20;
v_20:
    v_34 = stack[0];
    if (!car_legal(v_34)) v_34 = cdrerror(v_34); else
    v_34 = cdr(v_34);
    stack[0] = v_34;
    goto v_7;
v_6:
    return onevalue(v_34);
}



// Code for readch1

static LispObject CC_readch1(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_265, v_266, v_267;
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
    stack[0] = nil;
    v_265 = qvalue(basic_elt(env, 1)); // peekchar!*
    if (v_265 == nil) goto v_19;
    v_265 = qvalue(basic_elt(env, 1)); // peekchar!*
    if (!car_legal(v_265)) v_265 = carerror(v_265); else
    v_265 = car(v_265);
    stack[-1] = v_265;
    v_265 = qvalue(basic_elt(env, 1)); // peekchar!*
    if (!car_legal(v_265)) v_265 = cdrerror(v_265); else
    v_265 = cdr(v_265);
    setvalue(basic_elt(env, 1), v_265); // peekchar!*
    v_266 = stack[-1];
    v_265 = qvalue(basic_elt(env, 2)); // !$eof!$
    if (v_266 == v_265) goto v_27;
    else goto v_28;
v_27:
    goto v_26;
v_28:
    v_265 = qvalue(basic_elt(env, 3)); // !*psl
    if (v_265 == nil) goto v_33;
    v_265 = qvalue(basic_elt(env, 4)); // !*raise
    if (v_265 == nil) goto v_38;
    v_265 = stack[-1];
    {   LispObject fn = basic_elt(env, 19); // red!-char!-downcase
    v_265 = (*qfn1(fn))(fn, v_265);
    }
    stack[-1] = v_265;
    goto v_36;
v_38:
v_36:
    goto v_26;
v_33:
    v_265 = qvalue(basic_elt(env, 5)); // !*lower
    if (v_265 == nil) goto v_43;
    v_265 = stack[-1];
    {   LispObject fn = basic_elt(env, 20); // char!-downcase
    v_265 = (*qfn1(fn))(fn, v_265);
    }
    stack[-1] = v_265;
    goto v_26;
v_43:
    v_265 = qvalue(basic_elt(env, 4)); // !*raise
    if (v_265 == nil) goto v_48;
    v_265 = stack[-1];
    {   LispObject fn = basic_elt(env, 21); // char!-upcase
    v_265 = (*qfn1(fn))(fn, v_265);
    }
    stack[-1] = v_265;
    goto v_26;
v_48:
v_26:
    v_265 = stack[-1];
    goto v_9;
v_19:
v_10:
    {   LispObject fn = basic_elt(env, 22); // terminalp
    v_265 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
    if (v_265 == nil) goto v_55;
    else goto v_56;
v_55:
    v_265 = Lreadch(nil);
    env = stack[-2];
    stack[-1] = v_265;
    v_266 = stack[-1];
    v_265 = qvalue(basic_elt(env, 6)); // !$eol!$
    if (v_266 == v_265) goto v_61;
    else goto v_62;
v_61:
    v_265 = qvalue(basic_elt(env, 7)); // curline!*
    v_265 = add1(v_265);
    env = stack[-2];
    setvalue(basic_elt(env, 7), v_265); // curline!*
    goto v_60;
v_62:
v_60:
    goto v_54;
v_56:
    v_265 = qvalue(basic_elt(env, 8)); // crbuf1!*
    if (v_265 == nil) goto v_68;
    v_265 = qvalue(basic_elt(env, 8)); // crbuf1!*
    if (!car_legal(v_265)) v_265 = carerror(v_265); else
    v_265 = car(v_265);
    stack[-1] = v_265;
    v_265 = qvalue(basic_elt(env, 8)); // crbuf1!*
    if (!car_legal(v_265)) v_265 = cdrerror(v_265); else
    v_265 = cdr(v_265);
    setvalue(basic_elt(env, 8), v_265); // crbuf1!*
    goto v_54;
v_68:
    v_265 = Lreadch(nil);
    env = stack[-2];
    stack[-1] = v_265;
    goto v_54;
v_54:
    v_266 = stack[-1];
    v_265 = qvalue(basic_elt(env, 9)); // crbuf!*
    v_265 = cons(v_266, v_265);
    env = stack[-2];
    setvalue(basic_elt(env, 9), v_265); // crbuf!*
    v_265 = qvalue(basic_elt(env, 1)); // peekchar!*
    if (v_265 == nil) goto v_82;
    else goto v_83;
v_82:
    v_266 = stack[-1];
    v_265 = basic_elt(env, 10); // !#
    if (v_266 == v_265) goto v_88;
    v_265 = stack[-1];
    goto v_9;
v_88:
    v_266 = qvalue(basic_elt(env, 4)); // !*raise
    v_265 = qvalue(basic_elt(env, 5)); // !*lower
    v_265 = cons(v_266, v_265);
    env = stack[-2];
    stack[0] = v_265;
    v_265 = nil;
    setvalue(basic_elt(env, 5), v_265); // !*lower
    setvalue(basic_elt(env, 4), v_265); // !*raise
    v_266 = stack[-1];
    v_265 = qvalue(basic_elt(env, 1)); // peekchar!*
    v_265 = cons(v_266, v_265);
    env = stack[-2];
    setvalue(basic_elt(env, 1), v_265); // peekchar!*
    goto v_10;
v_83:
    v_266 = stack[-1];
    v_265 = qvalue(basic_elt(env, 2)); // !$eof!$
    if (v_266 == v_265) goto v_104;
    v_265 = stack[-1];
    {   LispObject fn = basic_elt(env, 23); // id2string
    v_265 = (*qfn1(fn))(fn, v_265);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 24); // string!-length
    v_266 = (*qfn1(fn))(fn, v_265);
    }
    env = stack[-2];
    v_265 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_266 == v_265) goto v_109;
    else goto v_110;
v_109:
    v_265 = stack[-1];
    v_265 = Lalpha_char_p(nil, v_265);
    env = stack[-2];
    if (v_265 == nil) goto v_117;
    else goto v_116;
v_117:
    v_265 = stack[-1];
    v_265 = Ldigitp(nil, v_265);
    env = stack[-2];
v_116:
    goto v_108;
v_110:
    v_265 = nil;
    goto v_108;
    v_265 = nil;
v_108:
    goto v_102;
v_104:
    v_265 = nil;
    goto v_102;
    v_265 = nil;
v_102:
    if (v_265 == nil) goto v_100;
    v_266 = stack[-1];
    v_265 = qvalue(basic_elt(env, 1)); // peekchar!*
    v_265 = cons(v_266, v_265);
    env = stack[-2];
    setvalue(basic_elt(env, 1), v_265); // peekchar!*
    goto v_10;
v_100:
    v_265 = stack[0];
    if (!car_legal(v_265)) v_265 = carerror(v_265); else
    v_265 = car(v_265);
    setvalue(basic_elt(env, 4), v_265); // !*raise
    v_265 = stack[0];
    if (!car_legal(v_265)) v_265 = cdrerror(v_265); else
    v_265 = cdr(v_265);
    setvalue(basic_elt(env, 5), v_265); // !*lower
    v_266 = stack[-1];
    v_265 = basic_elt(env, 11); // !;
    if (v_266 == v_265) goto v_142;
    v_265 = lisp_true;
    goto v_140;
v_142:
    v_265 = qvalue(basic_elt(env, 1)); // peekchar!*
    if (!car_legal(v_265)) v_265 = cdrerror(v_265); else
    v_265 = cdr(v_265);
    v_265 = (v_265 == nil ? lisp_true : nil);
    goto v_140;
    v_265 = nil;
v_140:
    if (v_265 == nil) goto v_138;
    v_266 = stack[-1];
    v_265 = qvalue(basic_elt(env, 1)); // peekchar!*
    v_265 = cons(v_266, v_265);
    env = stack[-2];
    v_265 = Lnreverse(nil, v_265);
    env = stack[-2];
    if (!car_legal(v_265)) v_265 = cdrerror(v_265); else
    v_265 = cdr(v_265);
    setvalue(basic_elt(env, 1), v_265); // peekchar!*
    v_265 = basic_elt(env, 10); // !#
    goto v_9;
v_138:
    v_265 = qvalue(basic_elt(env, 1)); // peekchar!*
    v_265 = Lreverse(nil, v_265);
    env = stack[-2];
    if (!car_legal(v_265)) v_265 = cdrerror(v_265); else
    v_265 = cdr(v_265);
    stack[-1] = v_265;
    {   LispObject fn = basic_elt(env, 25); // list2string
    v_265 = (*qfn1(fn))(fn, v_265);
    }
    env = stack[-2];
    v_265 = Lintern(nil, v_265);
    env = stack[-2];
    v_266 = v_265;
    v_265 = basic_elt(env, 12); // unicode_character
    v_265 = get(v_266, v_265);
    env = stack[-2];
    v_266 = v_265;
    if (v_265 == nil) goto v_165;
    v_265 = nil;
    setvalue(basic_elt(env, 1), v_265); // peekchar!*
    v_265 = lisp_true;
    setvalue(basic_elt(env, 13), v_265); // named!-character!*
    v_265 = v_266;
    {
        LispObject fn = basic_elt(env, 26); // int2wideid
        return (*qfn1(fn))(fn, v_265);
    }
v_165:
    v_265 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_267 = v_265;
    v_266 = stack[-1];
    v_265 = basic_elt(env, 14); // u
    if (!consp(v_266)) goto v_181;
    v_266 = car(v_266);
    if (v_266 == v_265) goto v_180;
    else goto v_181;
v_180:
    v_265 = lisp_true;
    goto v_179;
v_181:
    v_266 = stack[-1];
    v_265 = basic_elt(env, 15); // !U
    v_265 = Leqcar(nil, v_266, v_265);
    env = stack[-2];
    goto v_179;
    v_265 = nil;
v_179:
    if (v_265 == nil) goto v_177;
    goto v_12;
v_177:
    v_266 = stack[-1];
    v_265 = basic_elt(env, 16); // x
    if (!consp(v_266)) goto v_198;
    v_266 = car(v_266);
    if (v_266 == v_265) goto v_197;
    else goto v_198;
v_197:
    v_265 = lisp_true;
    goto v_196;
v_198:
    v_266 = stack[-1];
    v_265 = basic_elt(env, 17); // !X
    v_265 = Leqcar(nil, v_266, v_265);
    env = stack[-2];
    goto v_196;
    v_265 = nil;
v_196:
    if (v_265 == nil) goto v_194;
    v_265 = stack[-1];
    if (!car_legal(v_265)) v_265 = cdrerror(v_265); else
    v_265 = cdr(v_265);
    stack[-1] = v_265;
    goto v_192;
v_194:
v_192:
v_11:
    v_265 = stack[-1];
    if (v_265 == nil) goto v_212;
    else goto v_213;
v_212:
    goto v_14;
v_213:
    v_265 = stack[-1];
    if (!car_legal(v_265)) v_266 = carerror(v_265); else
    v_266 = car(v_265);
    v_265 = basic_elt(env, 18); // hexdigit
    v_265 = get(v_266, v_265);
    env = stack[-2];
    stack[0] = v_265;
    v_265 = stack[0];
    if (v_265 == nil) goto v_221;
    else goto v_222;
v_221:
    goto v_15;
v_222:
    v_265 = static_cast<LispObject>(256)+TAG_FIXNUM; // 16
    v_266 = v_267;
    v_266 = times2(v_265, v_266);
    env = stack[-2];
    v_265 = stack[0];
    v_265 = plus2(v_266, v_265);
    env = stack[-2];
    v_267 = v_265;
    v_265 = stack[-1];
    if (!car_legal(v_265)) v_265 = cdrerror(v_265); else
    v_265 = cdr(v_265);
    stack[-1] = v_265;
    goto v_11;
v_12:
    v_265 = stack[-1];
    if (!car_legal(v_265)) v_265 = cdrerror(v_265); else
    v_265 = cdr(v_265);
    stack[-1] = v_265;
v_13:
    v_265 = stack[-1];
    if (v_265 == nil) goto v_235;
    else goto v_236;
v_235:
    goto v_14;
v_236:
    v_265 = stack[-1];
    if (!car_legal(v_265)) v_265 = carerror(v_265); else
    v_265 = car(v_265);
    v_265 = Ldigitp(nil, v_265);
    env = stack[-2];
    if (v_265 == nil) goto v_240;
    else goto v_241;
v_240:
    goto v_15;
v_241:
    v_265 = static_cast<LispObject>(160)+TAG_FIXNUM; // 10
    v_266 = v_267;
    v_267 = times2(v_265, v_266);
    env = stack[-2];
    v_265 = stack[-1];
    if (!car_legal(v_265)) v_266 = carerror(v_265); else
    v_266 = car(v_265);
    v_265 = basic_elt(env, 18); // hexdigit
    v_265 = get(v_266, v_265);
    env = stack[-2];
    v_265 = plus2(v_267, v_265);
    env = stack[-2];
    v_267 = v_265;
    v_265 = stack[-1];
    if (!car_legal(v_265)) v_265 = cdrerror(v_265); else
    v_265 = cdr(v_265);
    stack[-1] = v_265;
    goto v_13;
v_14:
    v_265 = nil;
    setvalue(basic_elt(env, 1), v_265); // peekchar!*
    v_265 = lisp_true;
    setvalue(basic_elt(env, 13), v_265); // named!-character!*
    v_265 = v_267;
    {
        LispObject fn = basic_elt(env, 26); // int2wideid
        return (*qfn1(fn))(fn, v_265);
    }
v_15:
    v_266 = basic_elt(env, 11); // !;
    v_265 = qvalue(basic_elt(env, 1)); // peekchar!*
    v_265 = cons(v_266, v_265);
    env = stack[-2];
    v_265 = Lreverse(nil, v_265);
    env = stack[-2];
    if (!car_legal(v_265)) v_265 = cdrerror(v_265); else
    v_265 = cdr(v_265);
    setvalue(basic_elt(env, 1), v_265); // peekchar!*
    v_265 = basic_elt(env, 10); // !#
v_9:
    return onevalue(v_265);
}



// Code for fs!:plus

static LispObject CC_fsTplus(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_100, v_101, v_102;
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
v_1:
    v_100 = stack[-2];
    if (v_100 == nil) goto v_7;
    else goto v_8;
v_7:
    v_100 = stack[-3];
    goto v_6;
v_8:
    v_100 = stack[-3];
    if (v_100 == nil) goto v_11;
    else goto v_12;
v_11:
    v_100 = stack[-2];
    goto v_6;
v_12:
    v_101 = stack[-3];
    v_100 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[0] = Lgetv(nil, v_101, v_100);
    env = stack[-5];
    v_101 = stack[-2];
    v_100 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_100 = Lgetv(nil, v_101, v_100);
    env = stack[-5];
    if (equal(stack[0], v_100)) goto v_19;
    else goto v_20;
v_19:
    v_101 = stack[-3];
    v_100 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    stack[0] = Lgetv(nil, v_101, v_100);
    env = stack[-5];
    v_101 = stack[-2];
    v_100 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_100 = Lgetv(nil, v_101, v_100);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 1); // angles!-equal
    v_100 = (*qfn2(fn))(fn, stack[0], v_100);
    }
    env = stack[-5];
    goto v_18;
v_20:
    v_100 = nil;
    goto v_18;
    v_100 = nil;
v_18:
    if (v_100 == nil) goto v_16;
    v_101 = stack[-3];
    v_100 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[0] = Lgetv(nil, v_101, v_100);
    env = stack[-5];
    v_101 = stack[-2];
    v_100 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_100 = Lgetv(nil, v_101, v_100);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 2); // addsq
    v_100 = (*qfn2(fn))(fn, stack[0], v_100);
    }
    env = stack[-5];
    v_101 = v_100;
    if (!car_legal(v_101)) v_101 = carerror(v_101); else
    v_101 = car(v_101);
    if (v_101 == nil) goto v_49;
    else goto v_50;
v_49:
    v_101 = stack[-3];
    v_100 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    stack[0] = Lgetv(nil, v_101, v_100);
    env = stack[-5];
    v_101 = stack[-2];
    v_100 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_100 = Lgetv(nil, v_101, v_100);
    env = stack[-5];
    stack[-3] = stack[0];
    stack[-2] = v_100;
    goto v_1;
v_50:
    v_102 = stack[-3];
    v_101 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_100 = Lputv(nil, v_102, v_101, v_100);
    env = stack[-5];
    stack[-4] = stack[-3];
    stack[-1] = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_101 = stack[-3];
    v_100 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    stack[0] = Lgetv(nil, v_101, v_100);
    env = stack[-5];
    v_101 = stack[-2];
    v_100 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_100 = Lgetv(nil, v_101, v_100);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 0); // fs!:plus
    v_100 = (*qfn2(fn))(fn, stack[0], v_100);
    }
    env = stack[-5];
    v_100 = Lputv(nil, stack[-4], stack[-1], v_100);
    v_100 = stack[-3];
    goto v_6;
v_16:
    v_101 = stack[-3];
    v_100 = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // fs!:angle!-order
    v_100 = (*qfn2(fn))(fn, v_101, v_100);
    }
    env = stack[-5];
    if (v_100 == nil) goto v_76;
    stack[-1] = stack[-3];
    stack[0] = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_101 = stack[-3];
    v_100 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_101 = Lgetv(nil, v_101, v_100);
    env = stack[-5];
    v_100 = stack[-2];
    {   LispObject fn = basic_elt(env, 0); // fs!:plus
    v_100 = (*qfn2(fn))(fn, v_101, v_100);
    }
    env = stack[-5];
    v_100 = Lputv(nil, stack[-1], stack[0], v_100);
    v_100 = stack[-3];
    goto v_6;
v_76:
    stack[-1] = stack[-2];
    stack[0] = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_101 = stack[-2];
    v_100 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_101 = Lgetv(nil, v_101, v_100);
    env = stack[-5];
    v_100 = stack[-3];
    {   LispObject fn = basic_elt(env, 0); // fs!:plus
    v_100 = (*qfn2(fn))(fn, v_101, v_100);
    }
    env = stack[-5];
    v_100 = Lputv(nil, stack[-1], stack[0], v_100);
    v_100 = stack[-2];
    goto v_6;
    v_100 = nil;
v_6:
    return onevalue(v_100);
}



// Code for mo!=shorten

static LispObject CC_moMshorten(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    v_28 = v_2;
// end of prologue
    v_28 = Lreverse(nil, v_28);
    env = stack[-1];
    stack[0] = v_28;
v_11:
    v_28 = stack[0];
    if (v_28 == nil) goto v_14;
    v_28 = stack[0];
    if (!car_legal(v_28)) v_29 = carerror(v_28); else
    v_29 = car(v_28);
    v_28 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_28 = Leqn_2(nil, v_29, v_28);
    env = stack[-1];
    if (v_28 == nil) goto v_14;
    goto v_15;
v_14:
    goto v_10;
v_15:
    v_28 = stack[0];
    if (!car_legal(v_28)) v_28 = cdrerror(v_28); else
    v_28 = cdr(v_28);
    stack[0] = v_28;
    goto v_11;
v_10:
    v_28 = stack[0];
        return Lnreverse(nil, v_28);
    return onevalue(v_28);
}



// Code for prin2!*

static LispObject CC_prin2H(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_139, v_140, v_141;
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
    v_139 = qvalue(basic_elt(env, 1)); // !*utf8
    if (v_139 == nil) goto v_7;
    v_139 = stack[-2];
    {
        LispObject fn = basic_elt(env, 14); // utf8_prin2!*
        return (*qfn1(fn))(fn, v_139);
    }
v_7:
    v_139 = qvalue(basic_elt(env, 2)); // outputhandler!*
    if (v_139 == nil) goto v_12;
    v_140 = qvalue(basic_elt(env, 2)); // outputhandler!*
    v_141 = basic_elt(env, 0); // prin2!*
    v_139 = stack[-2];
        return Lapply2(nil, v_140, v_141, v_139);
v_12:
    v_139 = stack[-2];
    if (!symbolp(v_139)) v_139 = nil;
    else { v_139 = qfastgets(v_139);
           if (v_139 != nil) { v_139 = elt(v_139, 12); // oldnam
#ifdef RECORD_GET
             if (v_139 != SPID_NOPROP)
                record_get(elt(fastget_names, 12), 1);
             else record_get(elt(fastget_names, 12), 0),
                v_139 = nil; }
           else record_get(elt(fastget_names, 12), 0); }
#else
             if (v_139 == SPID_NOPROP) v_139 = nil; }}
#endif
    v_140 = v_139;
    if (v_139 == nil) goto v_32;
    v_139 = v_140;
    stack[-2] = v_139;
    goto v_30;
v_32:
v_30:
    v_139 = qvalue(basic_elt(env, 3)); // overflowed!*
    if (v_139 == nil) goto v_39;
    v_139 = basic_elt(env, 4); // overflowed
    goto v_25;
v_39:
    v_139 = qvalue(basic_elt(env, 5)); // !*fort
    if (v_139 == nil) goto v_43;
    v_139 = stack[-2];
    {
        LispObject fn = basic_elt(env, 15); // fprin2!*
        return (*qfn1(fn))(fn, v_139);
    }
v_43:
    v_139 = qvalue(basic_elt(env, 6)); // !*nat
    if (v_139 == nil) goto v_48;
    v_140 = stack[-2];
    v_139 = basic_elt(env, 7); // pi
    if (v_140 == v_139) goto v_52;
    else goto v_53;
v_52:
    v_139 = basic_elt(env, 8); // !.pi
    {   LispObject fn = basic_elt(env, 16); // symbol
    v_139 = (*qfn1(fn))(fn, v_139);
    }
    env = stack[-4];
    stack[-2] = v_139;
    goto v_51;
v_53:
    v_140 = stack[-2];
    v_139 = basic_elt(env, 9); // infinity
    if (v_140 == v_139) goto v_58;
    else goto v_59;
v_58:
    v_139 = basic_elt(env, 9); // infinity
    {   LispObject fn = basic_elt(env, 16); // symbol
    v_139 = (*qfn1(fn))(fn, v_139);
    }
    env = stack[-4];
    stack[-2] = v_139;
    goto v_51;
v_59:
v_51:
    goto v_37;
v_48:
v_37:
    v_139 = stack[-2];
    {   LispObject fn = basic_elt(env, 17); // widelengthc
    v_139 = (*qfn1(fn))(fn, v_139);
    }
    env = stack[-4];
    stack[-1] = v_139;
    v_139 = stack[-2];
    v_139 = integerp(v_139);
    if (v_139 == nil) goto v_69;
    v_140 = stack[-1];
    v_139 = static_cast<LispObject>(800)+TAG_FIXNUM; // 50
    v_139 = static_cast<LispObject>(greaterp2(v_140, v_139));
    v_139 = v_139 ? lisp_true : nil;
    env = stack[-4];
    if (v_139 == nil) goto v_69;
    v_139 = qvalue(basic_elt(env, 10)); // !*rounded
    if (v_139 == nil) goto v_69;
    v_139 = stack[-2];
    {   LispObject fn = basic_elt(env, 18); // i2rd!*
    v_139 = (*qfn1(fn))(fn, v_139);
    }
    env = stack[-4];
    {
        LispObject fn = basic_elt(env, 19); // rd!:prin
        return (*qfn1(fn))(fn, v_139);
    }
v_69:
    v_140 = qvalue(basic_elt(env, 11)); // posn!*
    v_139 = stack[-1];
    v_139 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_140) + static_cast<std::uintptr_t>(v_139) - TAG_FIXNUM);
    stack[-3] = v_139;
    v_139 = nil;
    v_140 = Llinelength(nil, v_139);
    env = stack[-4];
    v_139 = qvalue(basic_elt(env, 12)); // spare!*
    v_139 = difference2(v_140, v_139);
    env = stack[-4];
    stack[0] = v_139;
    v_140 = stack[-3];
    v_139 = stack[0];
    v_139 = static_cast<LispObject>(lesseq2(v_140, v_139));
    v_139 = v_139 ? lisp_true : nil;
    env = stack[-4];
    if (v_139 == nil) goto v_94;
    else goto v_92;
v_94:
    v_139 = qvalue(basic_elt(env, 13)); // testing!-width!*
    if (v_139 == nil) goto v_101;
    else goto v_102;
v_101:
    v_139 = stack[-2];
    v_139 = integerp(v_139);
    if (v_139 == nil) goto v_106;
    else goto v_107;
v_106:
    v_139 = lisp_true;
    {   LispObject fn = basic_elt(env, 20); // terpri!*
    v_139 = (*qfn1(fn))(fn, v_139);
    }
    env = stack[-4];
    goto v_105;
v_107:
    goto v_105;
v_105:
    v_140 = qvalue(basic_elt(env, 11)); // posn!*
    v_139 = stack[-1];
    v_140 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_140) + static_cast<std::uintptr_t>(v_139) - TAG_FIXNUM);
    stack[-3] = v_140;
    v_139 = stack[0];
    v_139 = static_cast<LispObject>(lesseq2(v_140, v_139));
    v_139 = v_139 ? lisp_true : nil;
    env = stack[-4];
    goto v_100;
v_102:
    v_139 = nil;
    goto v_100;
    v_139 = nil;
v_100:
    if (v_139 == nil) goto v_98;
    else goto v_92;
v_98:
    goto v_93;
v_92:
    v_140 = stack[-2];
    v_139 = stack[-3];
    {
        LispObject fn = basic_elt(env, 21); // add_prin_char
        return (*qfn2(fn))(fn, v_140, v_139);
    }
v_93:
    v_139 = qvalue(basic_elt(env, 13)); // testing!-width!*
    if (v_139 == nil) goto v_127;
    v_139 = lisp_true;
    setvalue(basic_elt(env, 3), v_139); // overflowed!*
    v_139 = basic_elt(env, 4); // overflowed
    goto v_91;
v_127:
    v_141 = stack[-2];
    v_139 = qvalue(basic_elt(env, 11)); // posn!*
    v_140 = static_cast<LispObject>(static_cast<std::intptr_t>(v_139) + 0x10);
    v_139 = stack[0];
    v_139 = static_cast<LispObject>(static_cast<std::intptr_t>(v_139) - 0x10);
    {
        LispObject fn = basic_elt(env, 22); // prin2lint
        return (*qfn3(fn))(fn, v_141, v_140, v_139);
    }
    v_139 = nil;
v_91:
v_25:
    goto v_5;
    v_139 = nil;
v_5:
    return onevalue(v_139);
}



// Code for insert_pv1

static LispObject CC_insert_pv1(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
v_9:
    v_66 = stack[-1];
    if (v_66 == nil) goto v_12;
    else goto v_13;
v_12:
    v_66 = stack[-2];
    if (v_66 == nil) goto v_17;
    else goto v_18;
v_17:
    v_66 = stack[0];
        return Lnreverse(nil, v_66);
v_18:
    v_67 = stack[-2];
    v_66 = stack[0];
    v_66 = cons(v_67, v_66);
        return Lnreverse(nil, v_66);
    goto v_11;
v_13:
    v_66 = stack[-2];
    if (v_66 == nil) goto v_28;
    else goto v_29;
v_28:
    v_66 = nil;
    stack[-2] = v_66;
    v_66 = stack[-1];
    if (!car_legal(v_66)) v_66 = cdrerror(v_66); else
    v_66 = cdr(v_66);
    stack[-3] = v_66;
    v_66 = stack[-1];
    if (!car_legal(v_66)) v_67 = carerror(v_66); else
    v_67 = car(v_66);
    v_66 = stack[0];
    v_66 = cons(v_67, v_66);
    env = stack[-4];
    stack[0] = v_66;
    v_66 = stack[-3];
    stack[-1] = v_66;
    goto v_9;
v_29:
    v_66 = stack[-1];
    if (!car_legal(v_66)) v_66 = carerror(v_66); else
    v_66 = car(v_66);
    if (!car_legal(v_66)) v_66 = carerror(v_66); else
    v_66 = car(v_66);
    if (!car_legal(v_66)) v_67 = cdrerror(v_66); else
    v_67 = cdr(v_66);
    v_66 = stack[-2];
    if (!car_legal(v_66)) v_66 = carerror(v_66); else
    v_66 = car(v_66);
    if (!car_legal(v_66)) v_66 = cdrerror(v_66); else
    v_66 = cdr(v_66);
    v_66 = static_cast<LispObject>(greaterp2(v_67, v_66));
    v_66 = v_66 ? lisp_true : nil;
    env = stack[-4];
    if (v_66 == nil) goto v_40;
    v_66 = stack[-1];
    if (!car_legal(v_66)) v_66 = cdrerror(v_66); else
    v_66 = cdr(v_66);
    stack[-3] = v_66;
    v_66 = stack[-1];
    if (!car_legal(v_66)) v_67 = carerror(v_66); else
    v_67 = car(v_66);
    v_66 = stack[-2];
    {   LispObject fn = basic_elt(env, 1); // reduce_pv
    v_66 = (*qfn2(fn))(fn, v_67, v_66);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 2); // pv_renorm
    v_67 = (*qfn1(fn))(fn, v_66);
    }
    env = stack[-4];
    v_66 = stack[0];
    v_66 = cons(v_67, v_66);
    env = stack[-4];
    stack[0] = v_66;
    v_66 = stack[-3];
    stack[-1] = v_66;
    goto v_9;
v_40:
    v_66 = nil;
    stack[-3] = v_66;
    v_67 = stack[-2];
    v_66 = stack[0];
    v_66 = cons(v_67, v_66);
    env = stack[-4];
    stack[0] = v_66;
    v_66 = stack[-3];
    stack[-2] = v_66;
    goto v_9;
v_11:
    v_66 = nil;
    return onevalue(v_66);
}



// Code for noncomp!*

static LispObject CC_noncompH(LispObject env,
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
    v_23 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // noncomp
    v_23 = (*qfn1(fn))(fn, v_23);
    }
    env = stack[-1];
    if (v_23 == nil) goto v_6;
    else goto v_5;
v_6:
    v_24 = stack[0];
    v_23 = basic_elt(env, 1); // expt
    if (!consp(v_24)) goto v_12;
    v_24 = car(v_24);
    if (v_24 == v_23) goto v_11;
    else goto v_12;
v_11:
    v_23 = stack[0];
    if (!car_legal(v_23)) v_23 = cdrerror(v_23); else
    v_23 = cdr(v_23);
    if (!car_legal(v_23)) v_23 = carerror(v_23); else
    v_23 = car(v_23);
    {
        LispObject fn = basic_elt(env, 2); // noncomp
        return (*qfn1(fn))(fn, v_23);
    }
v_12:
    v_23 = nil;
    goto v_10;
    v_23 = nil;
v_10:
v_5:
    return onevalue(v_23);
}



// Code for mkgi

static LispObject CC_mkgi(LispObject env,
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
    v_11 = basic_elt(env, 1); // !:gi!:
    return list2star(v_11, v_10, v_9);
}



// Code for polynomclone

static LispObject CC_polynomclone(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    v_28 = v_2;
// end of prologue
    stack[-1] = nil;
    stack[0] = v_28;
v_11:
    v_28 = stack[0];
    if (v_28 == nil) goto v_14;
    else goto v_15;
v_14:
    goto v_10;
v_15:
    v_28 = stack[0];
    if (!car_legal(v_28)) v_28 = carerror(v_28); else
    v_28 = car(v_28);
    {   LispObject fn = basic_elt(env, 1); // monomclone
    v_29 = (*qfn1(fn))(fn, v_28);
    }
    env = stack[-2];
    v_28 = stack[-1];
    v_28 = cons(v_29, v_28);
    env = stack[-2];
    stack[-1] = v_28;
    v_28 = stack[0];
    if (!car_legal(v_28)) v_28 = cdrerror(v_28); else
    v_28 = cdr(v_28);
    stack[0] = v_28;
    goto v_11;
v_10:
    v_28 = stack[-1];
        return Lreverse(nil, v_28);
    return onevalue(v_28);
}



// Code for gcdf

static LispObject CC_gcdf(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_101, v_102;
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
// Binding !*exp
// FLUIDBIND: reloadenv=5 litvec-offset=1 saveloc=4
{   bind_fluid_stack bind_fluid_var(-5, 1, -4);
    setvalue(basic_elt(env, 1), nil); // !*exp
// Binding !*rounded
// FLUIDBIND: reloadenv=5 litvec-offset=2 saveloc=1
{   bind_fluid_stack bind_fluid_var(-5, 2, -1);
    setvalue(basic_elt(env, 2), nil); // !*rounded
    v_101 = qvalue(basic_elt(env, 3)); // !*mcd
    stack[0] = v_101;
    v_101 = lisp_true;
    setvalue(basic_elt(env, 1), v_101); // !*exp
    v_101 = stack[-3];
    if (!consp(v_101)) goto v_24;
    else goto v_25;
v_24:
    v_101 = lisp_true;
    goto v_23;
v_25:
    v_101 = stack[-3];
    if (!car_legal(v_101)) v_101 = carerror(v_101); else
    v_101 = car(v_101);
    v_101 = (consp(v_101) ? nil : lisp_true);
    goto v_23;
    v_101 = nil;
v_23:
    if (v_101 == nil) goto v_21;
    v_101 = lisp_true;
    goto v_19;
v_21:
    v_101 = stack[-2];
    if (!consp(v_101)) goto v_42;
    else goto v_43;
v_42:
    v_101 = lisp_true;
    goto v_41;
v_43:
    v_101 = stack[-2];
    if (!car_legal(v_101)) v_101 = carerror(v_101); else
    v_101 = car(v_101);
    v_101 = (consp(v_101) ? nil : lisp_true);
    goto v_41;
    v_101 = nil;
v_41:
    if (v_101 == nil) goto v_39;
    v_101 = lisp_true;
    goto v_37;
v_39:
    v_101 = qvalue(basic_elt(env, 4)); // !*ezgcd
    if (v_101 == nil) goto v_56;
    else goto v_57;
v_56:
    v_101 = lisp_true;
    goto v_55;
v_57:
    v_101 = qvalue(basic_elt(env, 5)); // dmode!*
    if (v_101 == nil) goto v_64;
    else goto v_63;
v_64:
    v_101 = stack[-3];
    {   LispObject fn = basic_elt(env, 7); // free!-powerp
    v_101 = (*qfn1(fn))(fn, v_101);
    }
    env = stack[-5];
    if (v_101 == nil) goto v_68;
    else goto v_67;
v_68:
    v_101 = stack[-2];
    {   LispObject fn = basic_elt(env, 7); // free!-powerp
    v_101 = (*qfn1(fn))(fn, v_101);
    }
    env = stack[-5];
v_67:
v_63:
    goto v_55;
    v_101 = nil;
v_55:
    goto v_37;
    v_101 = nil;
v_37:
    goto v_19;
    v_101 = nil;
v_19:
    if (v_101 == nil) goto v_17;
    v_101 = qvalue(basic_elt(env, 6)); // !*combineexpt
    if (v_101 == nil) goto v_76;
    v_101 = lisp_true;
    setvalue(basic_elt(env, 3), v_101); // !*mcd
    goto v_74;
v_76:
v_74:
    v_102 = stack[-3];
    v_101 = stack[-2];
    {   LispObject fn = basic_elt(env, 8); // gcdf1
    v_101 = (*qfn2(fn))(fn, v_102, v_101);
    }
    env = stack[-5];
    goto v_15;
v_17:
    v_102 = stack[-3];
    v_101 = stack[-2];
    {   LispObject fn = basic_elt(env, 9); // ezgcdf
    v_101 = (*qfn2(fn))(fn, v_102, v_101);
    }
    env = stack[-5];
    goto v_15;
    v_101 = nil;
v_15:
    stack[-3] = v_101;
    v_101 = stack[0];
    setvalue(basic_elt(env, 3), v_101); // !*mcd
    v_101 = stack[-3];
    {   LispObject fn = basic_elt(env, 10); // minusf
    v_101 = (*qfn1(fn))(fn, v_101);
    }
    env = stack[-5];
    if (v_101 == nil) goto v_91;
    v_101 = stack[-3];
    {   LispObject fn = basic_elt(env, 11); // negf
    v_101 = (*qfn1(fn))(fn, v_101);
    }
    goto v_89;
v_91:
    v_101 = stack[-3];
    goto v_89;
    v_101 = nil;
v_89:
    ;}  // end of a binding scope
    ;}  // end of a binding scope
    return onevalue(v_101);
}



// Code for reordsq

static LispObject CC_reordsq(LispObject env,
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
    if (!car_legal(v_11)) v_11 = carerror(v_11); else
    v_11 = car(v_11);
    {   LispObject fn = basic_elt(env, 1); // reorder
    stack[-1] = (*qfn1(fn))(fn, v_11);
    }
    env = stack[-2];
    v_11 = stack[0];
    if (!car_legal(v_11)) v_11 = cdrerror(v_11); else
    v_11 = cdr(v_11);
    {   LispObject fn = basic_elt(env, 1); // reorder
    v_11 = (*qfn1(fn))(fn, v_11);
    }
    {
        LispObject v_14 = stack[-1];
        return cons(v_14, v_11);
    }
}



// Code for addsq

static LispObject CC_addsq(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_171, v_172;
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
    v_171 = stack[-3];
    if (!car_legal(v_171)) v_171 = carerror(v_171); else
    v_171 = car(v_171);
    if (v_171 == nil) goto v_7;
    else goto v_8;
v_7:
    v_171 = stack[-2];
    goto v_6;
v_8:
    v_171 = stack[-2];
    if (!car_legal(v_171)) v_171 = carerror(v_171); else
    v_171 = car(v_171);
    if (v_171 == nil) goto v_12;
    else goto v_13;
v_12:
    v_171 = stack[-3];
    goto v_6;
v_13:
    v_171 = stack[-3];
    if (!car_legal(v_171)) v_172 = cdrerror(v_171); else
    v_172 = cdr(v_171);
    v_171 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_172 == v_171) goto v_21;
    else goto v_22;
v_21:
    v_171 = stack[-2];
    if (!car_legal(v_171)) v_172 = cdrerror(v_171); else
    v_172 = cdr(v_171);
    v_171 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_171 = (v_172 == v_171 ? lisp_true : nil);
    goto v_20;
v_22:
    v_171 = nil;
    goto v_20;
    v_171 = nil;
v_20:
    if (v_171 == nil) goto v_18;
    v_171 = stack[-3];
    if (!car_legal(v_171)) v_172 = carerror(v_171); else
    v_172 = car(v_171);
    v_171 = stack[-2];
    if (!car_legal(v_171)) v_171 = carerror(v_171); else
    v_171 = car(v_171);
    {   LispObject fn = basic_elt(env, 4); // addf
    v_172 = (*qfn2(fn))(fn, v_172, v_171);
    }
    v_171 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_172, v_171);
v_18:
    v_171 = qvalue(basic_elt(env, 1)); // !*exp
    if (v_171 == nil) goto v_49;
    else goto v_50;
v_49:
    v_171 = stack[-3];
    if (!car_legal(v_171)) stack[0] = carerror(v_171); else
    stack[0] = car(v_171);
    v_171 = stack[-3];
    if (!car_legal(v_171)) v_171 = cdrerror(v_171); else
    v_171 = cdr(v_171);
    {   LispObject fn = basic_elt(env, 5); // mkprod
    v_171 = (*qfn1(fn))(fn, v_171);
    }
    env = stack[-5];
    v_171 = cons(stack[0], v_171);
    env = stack[-5];
    stack[-3] = v_171;
    v_171 = stack[-2];
    if (!car_legal(v_171)) stack[0] = carerror(v_171); else
    stack[0] = car(v_171);
    v_171 = stack[-2];
    if (!car_legal(v_171)) v_171 = cdrerror(v_171); else
    v_171 = cdr(v_171);
    {   LispObject fn = basic_elt(env, 5); // mkprod
    v_171 = (*qfn1(fn))(fn, v_171);
    }
    env = stack[-5];
    v_171 = cons(stack[0], v_171);
    env = stack[-5];
    stack[-2] = v_171;
    goto v_48;
v_50:
v_48:
    v_171 = qvalue(basic_elt(env, 2)); // !*lcm
    if (v_171 == nil) goto v_67;
    v_171 = stack[-3];
    if (!car_legal(v_171)) v_172 = cdrerror(v_171); else
    v_172 = cdr(v_171);
    v_171 = stack[-2];
    if (!car_legal(v_171)) v_171 = cdrerror(v_171); else
    v_171 = cdr(v_171);
    {   LispObject fn = basic_elt(env, 6); // gcdf!*
    v_171 = (*qfn2(fn))(fn, v_172, v_171);
    }
    env = stack[-5];
    stack[-4] = v_171;
    goto v_65;
v_67:
    v_171 = stack[-3];
    if (!car_legal(v_171)) v_172 = cdrerror(v_171); else
    v_172 = cdr(v_171);
    v_171 = stack[-2];
    if (!car_legal(v_171)) v_171 = cdrerror(v_171); else
    v_171 = cdr(v_171);
    {   LispObject fn = basic_elt(env, 7); // gcdf
    v_171 = (*qfn2(fn))(fn, v_172, v_171);
    }
    env = stack[-5];
    stack[-4] = v_171;
    goto v_65;
v_65:
    v_171 = stack[-3];
    if (!car_legal(v_171)) v_172 = cdrerror(v_171); else
    v_172 = cdr(v_171);
    v_171 = stack[-4];
    {   LispObject fn = basic_elt(env, 8); // quotf!-fail
    stack[0] = (*qfn2(fn))(fn, v_172, v_171);
    }
    env = stack[-5];
    v_171 = stack[-2];
    if (!car_legal(v_171)) v_172 = cdrerror(v_171); else
    v_172 = cdr(v_171);
    v_171 = stack[-4];
    {   LispObject fn = basic_elt(env, 8); // quotf!-fail
    v_171 = (*qfn2(fn))(fn, v_172, v_171);
    }
    env = stack[-5];
    v_171 = cons(stack[0], v_171);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 9); // canonsq
    v_171 = (*qfn1(fn))(fn, v_171);
    }
    env = stack[-5];
    stack[-1] = v_171;
    v_171 = stack[-1];
    if (!car_legal(v_171)) v_172 = cdrerror(v_171); else
    v_172 = cdr(v_171);
    v_171 = stack[-3];
    if (!car_legal(v_171)) v_171 = carerror(v_171); else
    v_171 = car(v_171);
    {   LispObject fn = basic_elt(env, 10); // multf
    stack[0] = (*qfn2(fn))(fn, v_172, v_171);
    }
    env = stack[-5];
    v_171 = stack[-1];
    if (!car_legal(v_171)) v_172 = carerror(v_171); else
    v_172 = car(v_171);
    v_171 = stack[-2];
    if (!car_legal(v_171)) v_171 = carerror(v_171); else
    v_171 = car(v_171);
    {   LispObject fn = basic_elt(env, 10); // multf
    v_171 = (*qfn2(fn))(fn, v_172, v_171);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 4); // addf
    v_171 = (*qfn2(fn))(fn, stack[0], v_171);
    }
    env = stack[-5];
    stack[0] = v_171;
    v_171 = stack[0];
    if (v_171 == nil) goto v_104;
    else goto v_105;
v_104:
    v_172 = nil;
    v_171 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_172, v_171);
v_105:
    v_171 = stack[-3];
    if (!car_legal(v_171)) v_172 = cdrerror(v_171); else
    v_172 = cdr(v_171);
    v_171 = stack[-1];
    if (!car_legal(v_171)) v_171 = cdrerror(v_171); else
    v_171 = cdr(v_171);
    {   LispObject fn = basic_elt(env, 10); // multf
    v_171 = (*qfn2(fn))(fn, v_172, v_171);
    }
    env = stack[-5];
    stack[-1] = v_171;
    v_172 = stack[0];
    v_171 = stack[-4];
    {   LispObject fn = basic_elt(env, 7); // gcdf
    v_172 = (*qfn2(fn))(fn, v_172, v_171);
    }
    env = stack[-5];
    stack[-4] = v_172;
    v_171 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_172 == v_171) goto v_118;
    v_172 = stack[0];
    v_171 = stack[-4];
    {   LispObject fn = basic_elt(env, 8); // quotf!-fail
    v_171 = (*qfn2(fn))(fn, v_172, v_171);
    }
    env = stack[-5];
    stack[0] = v_171;
    v_172 = stack[-1];
    v_171 = stack[-4];
    {   LispObject fn = basic_elt(env, 8); // quotf!-fail
    v_171 = (*qfn2(fn))(fn, v_172, v_171);
    }
    env = stack[-5];
    stack[-1] = v_171;
    goto v_116;
v_118:
v_116:
    v_171 = qvalue(basic_elt(env, 3)); // !*gcd
    if (v_171 == nil) goto v_132;
    v_172 = stack[-4];
    v_171 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_172 == v_171) goto v_136;
    else goto v_137;
v_136:
    v_172 = stack[0];
    v_171 = stack[-1];
    return cons(v_172, v_171);
v_137:
    v_172 = stack[0];
    v_171 = stack[-1];
    v_171 = cons(v_172, v_171);
    env = stack[-5];
    {
        LispObject fn = basic_elt(env, 9); // canonsq
        return (*qfn1(fn))(fn, v_171);
    }
    v_171 = nil;
    goto v_46;
v_132:
    v_172 = stack[0];
    v_171 = stack[-1];
    {   LispObject fn = basic_elt(env, 7); // gcdf
    v_172 = (*qfn2(fn))(fn, v_172, v_171);
    }
    env = stack[-5];
    stack[-4] = v_172;
    v_171 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_172 == v_171) goto v_151;
    else goto v_152;
v_151:
    v_172 = stack[0];
    v_171 = stack[-1];
    v_171 = cons(v_172, v_171);
    env = stack[-5];
    {
        LispObject fn = basic_elt(env, 9); // canonsq
        return (*qfn1(fn))(fn, v_171);
    }
v_152:
    v_172 = stack[0];
    v_171 = stack[-4];
    {   LispObject fn = basic_elt(env, 8); // quotf!-fail
    stack[0] = (*qfn2(fn))(fn, v_172, v_171);
    }
    env = stack[-5];
    v_172 = stack[-1];
    v_171 = stack[-4];
    {   LispObject fn = basic_elt(env, 8); // quotf!-fail
    v_171 = (*qfn2(fn))(fn, v_172, v_171);
    }
    env = stack[-5];
    v_171 = cons(stack[0], v_171);
    env = stack[-5];
    {
        LispObject fn = basic_elt(env, 9); // canonsq
        return (*qfn1(fn))(fn, v_171);
    }
    v_171 = nil;
v_46:
    goto v_6;
    v_171 = nil;
v_6:
    return onevalue(v_171);
}



// Code for ckrn1

static LispObject CC_ckrn1(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    stack[-1] = nil;
    v_94 = stack[0];
    if (!consp(v_94)) goto v_14;
    else goto v_15;
v_14:
    v_94 = lisp_true;
    goto v_13;
v_15:
    v_94 = stack[0];
    if (!car_legal(v_94)) v_94 = carerror(v_94); else
    v_94 = car(v_94);
    v_94 = (consp(v_94) ? nil : lisp_true);
    goto v_13;
    v_94 = nil;
v_13:
    if (v_94 == nil) goto v_11;
    v_94 = stack[0];
    goto v_6;
v_11:
v_7:
    v_94 = stack[0];
    if (!car_legal(v_94)) v_94 = carerror(v_94); else
    v_94 = car(v_94);
    if (!car_legal(v_94)) v_94 = cdrerror(v_94); else
    v_94 = cdr(v_94);
    {   LispObject fn = basic_elt(env, 0); // ckrn1
    v_95 = (*qfn1(fn))(fn, v_94);
    }
    env = stack[-2];
    v_94 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // gck2
    v_94 = (*qfn2(fn))(fn, v_95, v_94);
    }
    env = stack[-2];
    stack[-1] = v_94;
    v_94 = stack[0];
    if (!car_legal(v_94)) v_94 = cdrerror(v_94); else
    v_94 = cdr(v_94);
    if (v_94 == nil) goto v_32;
    else goto v_33;
v_32:
    v_94 = stack[0];
    if (!car_legal(v_94)) v_94 = carerror(v_94); else
    v_94 = car(v_94);
    if (!car_legal(v_94)) v_94 = carerror(v_94); else
    v_94 = car(v_94);
    if (!car_legal(v_94)) v_94 = carerror(v_94); else
    v_94 = car(v_94);
    {   LispObject fn = basic_elt(env, 2); // noncomp
    v_94 = (*qfn1(fn))(fn, v_94);
    }
    env = stack[-2];
    if (v_94 == nil) goto v_39;
    v_94 = stack[-1];
    goto v_37;
v_39:
    v_94 = stack[0];
    if (!car_legal(v_94)) v_94 = carerror(v_94); else
    v_94 = car(v_94);
    if (!car_legal(v_94)) v_95 = carerror(v_94); else
    v_95 = car(v_94);
    v_94 = stack[-1];
    v_94 = cons(v_95, v_94);
    return ncons(v_94);
    v_94 = nil;
v_37:
    goto v_6;
v_33:
    v_94 = stack[0];
    if (!car_legal(v_94)) v_94 = cdrerror(v_94); else
    v_94 = cdr(v_94);
    if (!consp(v_94)) goto v_62;
    else goto v_63;
v_62:
    v_94 = lisp_true;
    goto v_61;
v_63:
    v_94 = stack[0];
    if (!car_legal(v_94)) v_94 = cdrerror(v_94); else
    v_94 = cdr(v_94);
    if (!car_legal(v_94)) v_94 = carerror(v_94); else
    v_94 = car(v_94);
    v_94 = (consp(v_94) ? nil : lisp_true);
    goto v_61;
    v_94 = nil;
v_61:
    if (v_94 == nil) goto v_59;
    v_94 = lisp_true;
    goto v_57;
v_59:
    v_94 = stack[0];
    if (!car_legal(v_94)) v_94 = carerror(v_94); else
    v_94 = car(v_94);
    if (!car_legal(v_94)) v_94 = carerror(v_94); else
    v_94 = car(v_94);
    if (!car_legal(v_94)) v_95 = carerror(v_94); else
    v_95 = car(v_94);
    v_94 = stack[0];
    if (!car_legal(v_94)) v_94 = cdrerror(v_94); else
    v_94 = cdr(v_94);
    if (!car_legal(v_94)) v_94 = carerror(v_94); else
    v_94 = car(v_94);
    if (!car_legal(v_94)) v_94 = carerror(v_94); else
    v_94 = car(v_94);
    if (!car_legal(v_94)) v_94 = carerror(v_94); else
    v_94 = car(v_94);
    v_94 = (v_95 == v_94 ? lisp_true : nil);
    v_94 = (v_94 == nil ? lisp_true : nil);
    goto v_57;
    v_94 = nil;
v_57:
    if (v_94 == nil) goto v_55;
    v_94 = stack[0];
    if (!car_legal(v_94)) v_94 = cdrerror(v_94); else
    v_94 = cdr(v_94);
    {   LispObject fn = basic_elt(env, 0); // ckrn1
    v_95 = (*qfn1(fn))(fn, v_94);
    }
    env = stack[-2];
    v_94 = stack[-1];
    {
        LispObject fn = basic_elt(env, 1); // gck2
        return (*qfn2(fn))(fn, v_95, v_94);
    }
v_55:
    v_94 = stack[0];
    if (!car_legal(v_94)) v_94 = cdrerror(v_94); else
    v_94 = cdr(v_94);
    stack[0] = v_94;
    goto v_7;
v_6:
    return onevalue(v_94);
}



// Code for talp_negateat

static LispObject CC_talp_negateat(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[-1] = v_2;
// end of prologue
    v_25 = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // talp_op
    v_25 = (*qfn1(fn))(fn, v_25);
    }
    env = stack[-3];
    v_26 = v_25;
    v_25 = basic_elt(env, 1); // equal
    if (v_26 == v_25) goto v_11;
    else goto v_12;
v_11:
    v_25 = basic_elt(env, 2); // neq
    goto v_10;
v_12:
    v_25 = basic_elt(env, 1); // equal
    goto v_10;
v_10:
    stack[-2] = v_25;
    v_25 = stack[-1];
    {   LispObject fn = basic_elt(env, 4); // talp_arg2l
    stack[0] = (*qfn1(fn))(fn, v_25);
    }
    env = stack[-3];
    v_25 = stack[-1];
    {   LispObject fn = basic_elt(env, 5); // talp_arg2r
    v_25 = (*qfn1(fn))(fn, v_25);
    }
    env = stack[-3];
    {
        LispObject v_30 = stack[-2];
        LispObject v_31 = stack[0];
        LispObject fn = basic_elt(env, 6); // talp_mk2
        return (*qfn3(fn))(fn, v_30, v_31, v_25);
    }
    return onevalue(v_25);
}



// Code for sort!-factors

static LispObject CC_sortKfactors(LispObject env,
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
    v_7 = basic_elt(env, 1); // orderfactors
    {
        LispObject fn = basic_elt(env, 2); // sort
        return (*qfn2(fn))(fn, v_8, v_7);
    }
}



// Code for mathml_list2string

static LispObject CC_mathml_list2string(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_17;
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
    v_17 = stack[0];
    if (v_17 == nil) goto v_9;
    v_17 = stack[0];
    if (!car_legal(v_17)) v_17 = carerror(v_17); else
    v_17 = car(v_17);
    v_17 = Lprinc(nil, v_17);
    env = stack[-1];
    v_17 = stack[0];
    if (!car_legal(v_17)) v_17 = cdrerror(v_17); else
    v_17 = cdr(v_17);
    {   LispObject fn = basic_elt(env, 0); // mathml_list2string
    v_17 = (*qfn1(fn))(fn, v_17);
    }
    goto v_7;
v_9:
v_7:
    v_17 = nil;
    return onevalue(v_17);
}



// Code for findrow

static LispObject CC_findrow(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_30, v_31, v_32, v_33;
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
    v_30 = v_3;
    v_31 = v_2;
// end of prologue
    v_32 = v_31;
    v_32 = Lconsp(nil, v_32);
    env = stack[0];
    if (v_32 == nil) goto v_12;
    v_32 = v_31;
    if (!car_legal(v_32)) v_32 = carerror(v_32); else
    v_32 = car(v_32);
    v_33 = basic_elt(env, 1); // sparsemat
    if (v_32 == v_33) goto v_16;
    else goto v_12;
v_16:
    if (!car_legal(v_31)) v_31 = cdrerror(v_31); else
    v_31 = cdr(v_31);
    if (!car_legal(v_31)) v_31 = carerror(v_31); else
    v_31 = car(v_31);
    goto v_10;
v_12:
    goto v_10;
v_10:
        return Lgetv(nil, v_31, v_30);
    return onevalue(v_30);
}



// Code for groebsearchinlist

static LispObject CC_groebsearchinlist(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
v_7:
    v_28 = stack[0];
    if (v_28 == nil) goto v_10;
    else goto v_11;
v_10:
    v_28 = nil;
    goto v_6;
v_11:
    v_28 = stack[0];
    if (!car_legal(v_28)) v_28 = carerror(v_28); else
    v_28 = car(v_28);
    if (!car_legal(v_28)) v_28 = cdrerror(v_28); else
    v_28 = cdr(v_28);
    if (!car_legal(v_28)) v_29 = carerror(v_28); else
    v_29 = car(v_28);
    v_28 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // buchvevdivides!?
    v_28 = (*qfn2(fn))(fn, v_29, v_28);
    }
    env = stack[-2];
    if (v_28 == nil) goto v_15;
    v_28 = stack[0];
    if (!car_legal(v_28)) v_28 = carerror(v_28); else
    v_28 = car(v_28);
    goto v_6;
v_15:
    v_28 = stack[0];
    if (!car_legal(v_28)) v_28 = cdrerror(v_28); else
    v_28 = cdr(v_28);
    stack[0] = v_28;
    goto v_7;
    v_28 = nil;
v_6:
    return onevalue(v_28);
}



// Code for find_item

static LispObject CC_find_item(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
v_1:
    v_38 = stack[0];
    if (!car_legal(v_38)) v_38 = cdrerror(v_38); else
    v_38 = cdr(v_38);
    if (v_38 == nil) goto v_7;
    else goto v_8;
v_7:
    v_38 = nil;
    goto v_6;
v_8:
    v_39 = stack[-1];
    v_38 = stack[0];
    if (!car_legal(v_38)) v_38 = cdrerror(v_38); else
    v_38 = cdr(v_38);
    if (!car_legal(v_38)) v_38 = carerror(v_38); else
    v_38 = car(v_38);
    {   LispObject fn = basic_elt(env, 0); // find_item
    v_38 = (*qfn2(fn))(fn, v_39, v_38);
    }
    env = stack[-2];
    if (v_38 == nil) goto v_16;
    else goto v_15;
v_16:
    v_38 = stack[0];
    if (!car_legal(v_38)) v_39 = carerror(v_38); else
    v_39 = car(v_38);
    v_38 = stack[-1];
    if (equal(v_39, v_38)) goto v_27;
    else goto v_28;
v_27:
    v_38 = stack[0];
    goto v_26;
v_28:
    v_38 = nil;
v_26:
    if (v_38 == nil) goto v_24;
    else goto v_23;
v_24:
    v_39 = stack[-1];
    v_38 = stack[0];
    if (!car_legal(v_38)) v_38 = cdrerror(v_38); else
    v_38 = cdr(v_38);
    if (!car_legal(v_38)) v_38 = cdrerror(v_38); else
    v_38 = cdr(v_38);
    stack[-1] = v_39;
    stack[0] = v_38;
    goto v_1;
v_23:
v_15:
    goto v_6;
    v_38 = nil;
v_6:
    return onevalue(v_38);
}



// Code for prin2la

static LispObject CC_prin2la(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_43 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // chundexp
    v_43 = (*qfn1(fn))(fn, v_43);
    }
    env = stack[-2];
    stack[0] = v_43;
    v_43 = stack[0];
    v_43 = Llength(nil, v_43);
    env = stack[-2];
    stack[-1] = v_43;
    v_44 = qvalue(basic_elt(env, 1)); // ncharspr!*
    v_43 = stack[-1];
    v_44 = plus2(v_44, v_43);
    env = stack[-2];
    v_43 = qvalue(basic_elt(env, 2)); // laline!*
    v_43 = static_cast<LispObject>(greaterp2(v_44, v_43));
    v_43 = v_43 ? lisp_true : nil;
    env = stack[-2];
    if (v_43 == nil) goto v_14;
    v_43 = Lterpri(nil);
    env = stack[-2];
    v_43 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    setvalue(basic_elt(env, 1), v_43); // ncharspr!*
    goto v_12;
v_14:
v_12:
    v_43 = stack[0];
    stack[0] = v_43;
v_25:
    v_43 = stack[0];
    if (v_43 == nil) goto v_29;
    else goto v_30;
v_29:
    goto v_24;
v_30:
    v_43 = stack[0];
    if (!car_legal(v_43)) v_43 = carerror(v_43); else
    v_43 = car(v_43);
    v_43 = Lprinc(nil, v_43);
    env = stack[-2];
    v_43 = stack[0];
    if (!car_legal(v_43)) v_43 = cdrerror(v_43); else
    v_43 = cdr(v_43);
    stack[0] = v_43;
    goto v_25;
v_24:
    v_44 = qvalue(basic_elt(env, 1)); // ncharspr!*
    v_43 = stack[-1];
    v_43 = plus2(v_44, v_43);
    env = stack[-2];
    setvalue(basic_elt(env, 1), v_43); // ncharspr!*
    v_43 = nil;
    return onevalue(v_43);
}



// Code for command1

static LispObject CC_command1(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_10;
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
    {   LispObject fn = basic_elt(env, 3); // scan
    v_10 = (*qfn0(fn))(fn);
    }
    env = stack[0];
    {   LispObject fn = basic_elt(env, 4); // setcloc!*
    v_10 = (*qfn0(fn))(fn);
    }
    env = stack[0];
    v_10 = qvalue(basic_elt(env, 1)); // cursym!*
    setvalue(basic_elt(env, 2), v_10); // key!*
    v_10 = nil;
    {
        LispObject fn = basic_elt(env, 5); // xread1
        return (*qfn1(fn))(fn, v_10);
    }
    return onevalue(v_10);
}



// Code for getel1

static LispObject CC_getel1(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
v_8:
    v_51 = stack[-1];
    if (v_51 == nil) goto v_11;
    else goto v_12;
v_11:
    v_51 = stack[-2];
    goto v_7;
v_12:
    v_51 = stack[-1];
    if (!car_legal(v_51)) v_51 = carerror(v_51); else
    v_51 = car(v_51);
    v_51 = integerp(v_51);
    if (v_51 == nil) goto v_15;
    else goto v_16;
v_15:
    v_51 = stack[-1];
    if (!car_legal(v_51)) v_52 = carerror(v_51); else
    v_52 = car(v_51);
    v_51 = basic_elt(env, 1); // "array index"
    {
        LispObject fn = basic_elt(env, 4); // typerr
        return (*qfn2(fn))(fn, v_52, v_51);
    }
v_16:
    v_51 = stack[-1];
    if (!car_legal(v_51)) v_52 = carerror(v_51); else
    v_52 = car(v_51);
    v_51 = stack[0];
    if (!car_legal(v_51)) v_51 = carerror(v_51); else
    v_51 = car(v_51);
    v_51 = static_cast<LispObject>(geq2(v_52, v_51));
    v_51 = v_51 ? lisp_true : nil;
    env = stack[-3];
    if (v_51 == nil) goto v_26;
    else goto v_24;
v_26:
    v_51 = stack[-1];
    if (!car_legal(v_51)) v_52 = carerror(v_51); else
    v_52 = car(v_51);
    v_51 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_51 = static_cast<LispObject>(lessp2(v_52, v_51));
    v_51 = v_51 ? lisp_true : nil;
    env = stack[-3];
    if (v_51 == nil) goto v_32;
    else goto v_24;
v_32:
    goto v_25;
v_24:
    v_53 = basic_elt(env, 2); // rlisp
    v_52 = static_cast<LispObject>(336)+TAG_FIXNUM; // 21
    v_51 = basic_elt(env, 3); // "Array out of bounds"
    {
        LispObject fn = basic_elt(env, 5); // rerror
        return (*qfn3(fn))(fn, v_53, v_52, v_51);
    }
v_25:
    v_52 = stack[-2];
    v_51 = stack[-1];
    if (!car_legal(v_51)) v_51 = carerror(v_51); else
    v_51 = car(v_51);
    v_51 = Lgetv(nil, v_52, v_51);
    env = stack[-3];
    stack[-2] = v_51;
    v_51 = stack[-1];
    if (!car_legal(v_51)) v_51 = cdrerror(v_51); else
    v_51 = cdr(v_51);
    stack[-1] = v_51;
    v_51 = stack[0];
    if (!car_legal(v_51)) v_51 = cdrerror(v_51); else
    v_51 = cdr(v_51);
    stack[0] = v_51;
    goto v_8;
    v_51 = nil;
v_7:
    return onevalue(v_51);
}



// Code for prepsqx

static LispObject CC_prepsqx(LispObject env,
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
    v_15 = qvalue(basic_elt(env, 1)); // !*intstr
    if (v_15 == nil) goto v_7;
    v_15 = v_16;
    {
        LispObject fn = basic_elt(env, 2); // prepsq!*
        return (*qfn1(fn))(fn, v_15);
    }
v_7:
    v_15 = v_16;
    {
        LispObject fn = basic_elt(env, 3); // prepsq
        return (*qfn1(fn))(fn, v_15);
    }
    v_15 = nil;
    return onevalue(v_15);
}



// Code for mo_sum

static LispObject CC_mo_sum(LispObject env,
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
    v_16 = v_3;
    v_17 = v_2;
// end of prologue
    if (!car_legal(v_17)) v_17 = carerror(v_17); else
    v_17 = car(v_17);
    if (!car_legal(v_16)) v_16 = carerror(v_16); else
    v_16 = car(v_16);
    {   LispObject fn = basic_elt(env, 1); // mo!=sum
    v_16 = (*qfn2(fn))(fn, v_17, v_16);
    }
    env = stack[-2];
    stack[-1] = v_16;
    v_16 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // mo!=shorten
    stack[0] = (*qfn1(fn))(fn, v_16);
    }
    env = stack[-2];
    v_16 = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // mo!=deglist
    v_16 = (*qfn1(fn))(fn, v_16);
    }
    {
        LispObject v_20 = stack[0];
        return cons(v_20, v_16);
    }
}



// Code for resimp

static LispObject CC_resimp(LispObject env,
                         LispObject v_2)
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
    v_11 = v_2;
// end of prologue
    v_10 = nil;
// Binding varstack!*
// FLUIDBIND: reloadenv=1 litvec-offset=1 saveloc=0
{   bind_fluid_stack bind_fluid_var(-1, 1, 0);
    setvalue(basic_elt(env, 1), v_10); // varstack!*
    v_10 = v_11;
    {   LispObject fn = basic_elt(env, 2); // resimp1
    v_10 = (*qfn1(fn))(fn, v_10);
    }
    ;}  // end of a binding scope
    return onevalue(v_10);
}



// Code for pv_add

static LispObject CC_pv_add(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    v_110 = stack[-1];
    if (v_110 == nil) goto v_7;
    else goto v_8;
v_7:
    v_110 = stack[0];
    goto v_6;
v_8:
    v_110 = stack[0];
    if (v_110 == nil) goto v_11;
    else goto v_12;
v_11:
    v_110 = stack[-1];
    goto v_6;
v_12:
    stack[-2] = nil;
v_23:
    v_110 = stack[-1];
    if (v_110 == nil) goto v_28;
    else goto v_27;
v_28:
    v_110 = stack[0];
    if (v_110 == nil) goto v_30;
    else goto v_27;
v_30:
    goto v_22;
v_27:
    v_110 = stack[-1];
    if (v_110 == nil) goto v_36;
    v_110 = stack[0];
    if (v_110 == nil) goto v_36;
    v_110 = stack[-1];
    if (!car_legal(v_110)) v_110 = carerror(v_110); else
    v_110 = car(v_110);
    if (!car_legal(v_110)) v_111 = cdrerror(v_110); else
    v_111 = cdr(v_110);
    v_110 = stack[0];
    if (!car_legal(v_110)) v_110 = carerror(v_110); else
    v_110 = car(v_110);
    if (!car_legal(v_110)) v_110 = cdrerror(v_110); else
    v_110 = cdr(v_110);
    if (equal(v_111, v_110)) goto v_42;
    else goto v_36;
v_42:
    v_110 = stack[-1];
    if (!car_legal(v_110)) v_110 = carerror(v_110); else
    v_110 = car(v_110);
    if (!car_legal(v_110)) v_111 = carerror(v_110); else
    v_111 = car(v_110);
    v_110 = stack[0];
    if (!car_legal(v_110)) v_110 = carerror(v_110); else
    v_110 = car(v_110);
    if (!car_legal(v_110)) v_110 = carerror(v_110); else
    v_110 = car(v_110);
    v_110 = plus2(v_111, v_110);
    env = stack[-3];
    v_112 = v_110;
    v_111 = v_112;
    v_110 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_111 == v_110) goto v_59;
    v_110 = stack[-1];
    if (!car_legal(v_110)) v_110 = carerror(v_110); else
    v_110 = car(v_110);
    if (!car_legal(v_110)) v_111 = cdrerror(v_110); else
    v_111 = cdr(v_110);
    v_110 = stack[-2];
    v_110 = acons(v_112, v_111, v_110);
    env = stack[-3];
    stack[-2] = v_110;
    goto v_57;
v_59:
v_57:
    v_110 = stack[-1];
    if (!car_legal(v_110)) v_110 = cdrerror(v_110); else
    v_110 = cdr(v_110);
    stack[-1] = v_110;
    v_110 = stack[0];
    if (!car_legal(v_110)) v_110 = cdrerror(v_110); else
    v_110 = cdr(v_110);
    stack[0] = v_110;
    goto v_34;
v_36:
    v_110 = stack[-1];
    if (v_110 == nil) goto v_75;
    v_110 = stack[0];
    if (v_110 == nil) goto v_78;
    else goto v_75;
v_78:
    goto v_73;
v_75:
    v_110 = stack[-1];
    if (v_110 == nil) goto v_80;
    v_110 = stack[0];
    if (v_110 == nil) goto v_80;
    v_110 = stack[-1];
    if (!car_legal(v_110)) v_110 = carerror(v_110); else
    v_110 = car(v_110);
    if (!car_legal(v_110)) v_111 = cdrerror(v_110); else
    v_111 = cdr(v_110);
    v_110 = stack[0];
    if (!car_legal(v_110)) v_110 = carerror(v_110); else
    v_110 = car(v_110);
    if (!car_legal(v_110)) v_110 = cdrerror(v_110); else
    v_110 = cdr(v_110);
    v_110 = static_cast<LispObject>(greaterp2(v_111, v_110));
    v_110 = v_110 ? lisp_true : nil;
    env = stack[-3];
    if (v_110 == nil) goto v_80;
    goto v_73;
v_80:
    goto v_74;
v_73:
    v_110 = stack[-1];
    if (!car_legal(v_110)) v_111 = carerror(v_110); else
    v_111 = car(v_110);
    v_110 = stack[-2];
    v_110 = cons(v_111, v_110);
    env = stack[-3];
    stack[-2] = v_110;
    v_110 = stack[-1];
    if (!car_legal(v_110)) v_110 = cdrerror(v_110); else
    v_110 = cdr(v_110);
    stack[-1] = v_110;
    goto v_34;
v_74:
    v_110 = stack[0];
    if (!car_legal(v_110)) v_111 = carerror(v_110); else
    v_111 = car(v_110);
    v_110 = stack[-2];
    v_110 = cons(v_111, v_110);
    env = stack[-3];
    stack[-2] = v_110;
    v_110 = stack[0];
    if (!car_legal(v_110)) v_110 = cdrerror(v_110); else
    v_110 = cdr(v_110);
    stack[0] = v_110;
    goto v_34;
v_34:
    goto v_23;
v_22:
    v_110 = stack[-2];
        return Lnreverse(nil, v_110);
    goto v_6;
    v_110 = nil;
v_6:
    return onevalue(v_110);
}



// Code for sgn

static LispObject CC_sgn(LispObject env,
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
    v_21 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_21 = static_cast<LispObject>(greaterp2(v_22, v_21));
    v_21 = v_21 ? lisp_true : nil;
    env = stack[-1];
    if (v_21 == nil) goto v_7;
    v_21 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_5;
v_7:
    v_22 = stack[0];
    v_21 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_21 = static_cast<LispObject>(lessp2(v_22, v_21));
    v_21 = v_21 ? lisp_true : nil;
    if (v_21 == nil) goto v_13;
    v_21 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    goto v_5;
v_13:
    v_21 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_5;
    v_21 = nil;
v_5:
    return onevalue(v_21);
}



// Code for xcomment

static LispObject CC_xcomment(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_19, v_20, v_21;
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
    v_20 = v_2;
// end of prologue
    v_19 = v_21;
    if (v_19 == nil) goto v_8;
    stack[0] = basic_elt(env, 1); // comment
    v_19 = v_21;
    v_19 = Lnreverse(nil, v_19);
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // aconc
    v_19 = (*qfn2(fn))(fn, v_19, v_20);
    }
    {
        LispObject v_23 = stack[0];
        return cons(v_23, v_19);
    }
v_8:
    v_19 = v_20;
    goto v_6;
    v_19 = nil;
v_6:
    return onevalue(v_19);
}



// Code for absf

static LispObject CC_absf(LispObject env,
                         LispObject v_2)
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
    v_15 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // minusf
    v_15 = (*qfn1(fn))(fn, v_15);
    }
    env = stack[-1];
    if (v_15 == nil) goto v_7;
    v_15 = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // negf
        return (*qfn1(fn))(fn, v_15);
    }
v_7:
    v_15 = stack[0];
    goto v_5;
    v_15 = nil;
v_5:
    return onevalue(v_15);
}



// Code for talp_mkinv

static LispObject CC_talp_mkinv(LispObject env,
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
    return list2star(v_11, v_10, v_9);
}



// Code for rl_prepat

static LispObject CC_rl_prepat(LispObject env,
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
    stack[0] = qvalue(basic_elt(env, 1)); // rl_prepat!*
    v_8 = ncons(v_8);
    env = stack[-1];
    {
        LispObject v_10 = stack[0];
        LispObject fn = basic_elt(env, 2); // apply
        return (*qfn2(fn))(fn, v_10, v_8);
    }
}



// Code for ev_tdeg

static LispObject CC_ev_tdeg(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_24, v_25, v_26;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_25 = v_2;
// end of prologue
    v_24 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
v_10:
    v_26 = v_25;
    if (v_26 == nil) goto v_13;
    else goto v_14;
v_13:
    goto v_9;
v_14:
    v_26 = v_25;
    if (!car_legal(v_26)) v_26 = carerror(v_26); else
    v_26 = car(v_26);
    v_24 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_26) + static_cast<std::uintptr_t>(v_24) - TAG_FIXNUM);
    if (!car_legal(v_25)) v_25 = cdrerror(v_25); else
    v_25 = cdr(v_25);
    goto v_10;
v_9:
    return onevalue(v_24);
}



// Code for listsum

static LispObject CC_listsum(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    stack[-1] = nil;
v_8:
    v_35 = stack[0];
    if (v_35 == nil) goto v_13;
    else goto v_14;
v_13:
    goto v_9;
v_14:
    v_35 = stack[0];
    if (!car_legal(v_35)) v_36 = carerror(v_35); else
    v_36 = car(v_35);
    v_35 = stack[-1];
    v_35 = cons(v_36, v_35);
    env = stack[-2];
    stack[-1] = v_35;
    v_35 = stack[0];
    if (!car_legal(v_35)) v_35 = cdrerror(v_35); else
    v_35 = cdr(v_35);
    stack[0] = v_35;
    goto v_8;
v_9:
    v_35 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_36 = v_35;
v_10:
    v_35 = stack[-1];
    if (v_35 == nil) goto v_25;
    else goto v_26;
v_25:
    v_35 = v_36;
    goto v_7;
v_26:
    v_35 = stack[-1];
    v_35 = car(v_35);
    v_35 = plus2(v_35, v_36);
    env = stack[-2];
    v_36 = v_35;
    v_35 = stack[-1];
    v_35 = cdr(v_35);
    stack[-1] = v_35;
    goto v_10;
v_7:
    return onevalue(v_35);
}



// Code for indent!*

static LispObject CC_indentH(LispObject env,
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
    v_23 = lisp_true;
    if (equal(v_24, v_23)) goto v_8;
    else goto v_9;
v_8:
    v_24 = qvalue(basic_elt(env, 1)); // indent
    v_23 = qvalue(basic_elt(env, 2)); // ind
    v_23 = plus2(v_24, v_23);
    env = stack[-1];
    setvalue(basic_elt(env, 1), v_23); // indent
    goto v_7;
v_9:
v_7:
    v_23 = stack[0];
    if (v_23 == nil) goto v_17;
    else goto v_18;
v_17:
    v_24 = qvalue(basic_elt(env, 1)); // indent
    v_23 = qvalue(basic_elt(env, 2)); // ind
    v_23 = difference2(v_24, v_23);
    env = stack[-1];
    setvalue(basic_elt(env, 1), v_23); // indent
    goto v_16;
v_18:
v_16:
    v_23 = nil;
    return onevalue(v_23);
}



// Code for multi_isarb_int

static LispObject CC_multi_isarb_int(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_27;
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
    v_27 = Lconsp(nil, v_27);
    env = stack[-1];
    if (v_27 == nil) goto v_9;
    v_27 = stack[0];
    if (v_27 == nil) goto v_14;
    else goto v_15;
v_14:
    goto v_13;
v_15:
    v_27 = stack[0];
    if (!car_legal(v_27)) v_27 = carerror(v_27); else
    v_27 = car(v_27);
    {   LispObject fn = basic_elt(env, 1); // isarb_int
    v_27 = (*qfn1(fn))(fn, v_27);
    }
    env = stack[-1];
    v_27 = stack[0];
    if (!car_legal(v_27)) v_27 = cdrerror(v_27); else
    v_27 = cdr(v_27);
    {   LispObject fn = basic_elt(env, 0); // multi_isarb_int
    v_27 = (*qfn1(fn))(fn, v_27);
    }
    goto v_13;
v_13:
    goto v_7;
v_9:
v_7:
    v_27 = nil;
    return onevalue(v_27);
}



// Code for c!:ordexp

static LispObject CC_cTordexp(LispObject env,
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
    v_31 = lisp_true;
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
    {
        LispObject fn = basic_elt(env, 1); // c!:ordxp
        return (*qfn2(fn))(fn, v_31, v_32);
    }
    v_31 = nil;
v_6:
    return onevalue(v_31);
}



// Code for int!-equiv!-chk

static LispObject CC_intKequivKchk(LispObject env,
                         LispObject v_2)
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
    v_69 = qvalue(basic_elt(env, 1)); // !*noequiv
    if (v_69 == nil) goto v_7;
    v_69 = stack[0];
    goto v_5;
v_7:
    v_69 = stack[0];
    if (!consp(v_69)) goto v_17;
    else goto v_18;
v_17:
    v_70 = stack[0];
    v_69 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_70 == v_69) goto v_22;
    else goto v_23;
v_22:
    v_69 = nil;
    goto v_21;
v_23:
    v_69 = stack[0];
    goto v_21;
    v_69 = nil;
v_21:
    goto v_14;
v_18:
    v_69 = stack[0];
    if (!car_legal(v_69)) v_69 = carerror(v_69); else
    v_69 = car(v_69);
    if (!symbolp(v_69)) v_70 = nil;
    else { v_70 = qfastgets(v_69);
           if (v_70 != nil) { v_70 = elt(v_70, 15); // zerop
#ifdef RECORD_GET
             if (v_70 != SPID_NOPROP)
                record_get(elt(fastget_names, 15), 1);
             else record_get(elt(fastget_names, 15), 0),
                v_70 = nil; }
           else record_get(elt(fastget_names, 15), 0); }
#else
             if (v_70 == SPID_NOPROP) v_70 = nil; }}
#endif
    v_69 = stack[0];
    v_69 = Lapply1(nil, v_70, v_69);
    env = stack[-1];
    if (v_69 == nil) goto v_31;
    v_69 = nil;
    goto v_14;
v_31:
    v_69 = stack[0];
    if (!car_legal(v_69)) v_69 = carerror(v_69); else
    v_69 = car(v_69);
    if (!symbolp(v_69)) v_70 = nil;
    else { v_70 = qfastgets(v_69);
           if (v_70 != nil) { v_70 = elt(v_70, 26); // onep
#ifdef RECORD_GET
             if (v_70 != SPID_NOPROP)
                record_get(elt(fastget_names, 26), 1);
             else record_get(elt(fastget_names, 26), 0),
                v_70 = nil; }
           else record_get(elt(fastget_names, 26), 0); }
#else
             if (v_70 == SPID_NOPROP) v_70 = nil; }}
#endif
    v_69 = stack[0];
    v_69 = Lapply1(nil, v_70, v_69);
    env = stack[-1];
    if (v_69 == nil) goto v_39;
    v_69 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_14;
v_39:
    v_69 = stack[0];
    if (!car_legal(v_69)) v_69 = carerror(v_69); else
    v_69 = car(v_69);
    if (!symbolp(v_69)) v_69 = nil;
    else { v_69 = qfastgets(v_69);
           if (v_69 != nil) { v_69 = elt(v_69, 33); // intequivfn
#ifdef RECORD_GET
             if (v_69 != SPID_NOPROP)
                record_get(elt(fastget_names, 33), 1);
             else record_get(elt(fastget_names, 33), 0),
                v_69 = nil; }
           else record_get(elt(fastget_names, 33), 0); }
#else
             if (v_69 == SPID_NOPROP) v_69 = nil; }}
#endif
    v_70 = v_69;
    if (v_69 == nil) goto v_47;
    v_69 = stack[0];
    v_69 = Lapply1(nil, v_70, v_69);
    v_70 = v_69;
    if (v_69 == nil) goto v_47;
    v_71 = v_70;
    v_69 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_71 == v_69) goto v_58;
    else goto v_59;
v_58:
    v_69 = nil;
    goto v_57;
v_59:
    v_69 = v_70;
    goto v_57;
    v_69 = nil;
v_57:
    goto v_14;
v_47:
    v_69 = stack[0];
    goto v_14;
    v_69 = nil;
v_14:
    goto v_5;
    v_69 = nil;
v_5:
    return onevalue(v_69);
}



// Code for !*collectphysops

static LispObject CC_Hcollectphysops(LispObject env,
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
    v_8 = nil;
    {   LispObject fn = basic_elt(env, 1); // !*collectphysops_reversed
    v_8 = (*qfn2(fn))(fn, v_9, v_8);
    }
        return Lnreverse(nil, v_8);
}



// Code for dp_term

static LispObject CC_dp_term(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_8, v_9;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_8 = v_3;
    v_9 = v_2;
// end of prologue
    return cons(v_8, v_9);
}



// Code for pv_sort1

static LispObject CC_pv_sort1(LispObject env,
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
v_8:
    v_41 = stack[-1];
    if (v_41 == nil) goto v_11;
    else goto v_12;
v_11:
    v_41 = stack[0];
        return Lnreverse(nil, v_41);
v_12:
    v_41 = stack[-1];
    if (!car_legal(v_41)) v_41 = carerror(v_41); else
    v_41 = car(v_41);
    if (!car_legal(v_41)) v_42 = cdrerror(v_41); else
    v_42 = cdr(v_41);
    v_41 = stack[0];
    if (!car_legal(v_41)) v_41 = carerror(v_41); else
    v_41 = car(v_41);
    if (!car_legal(v_41)) v_41 = cdrerror(v_41); else
    v_41 = cdr(v_41);
    v_41 = static_cast<LispObject>(lessp2(v_42, v_41));
    v_41 = v_41 ? lisp_true : nil;
    env = stack[-3];
    if (v_41 == nil) goto v_17;
    v_41 = stack[-1];
    if (!car_legal(v_41)) v_41 = cdrerror(v_41); else
    v_41 = cdr(v_41);
    stack[-2] = v_41;
    v_41 = stack[-1];
    if (!car_legal(v_41)) v_42 = carerror(v_41); else
    v_42 = car(v_41);
    v_41 = stack[0];
    v_41 = cons(v_42, v_41);
    env = stack[-3];
    stack[0] = v_41;
    v_41 = stack[-2];
    stack[-1] = v_41;
    goto v_8;
v_17:
    v_41 = stack[-1];
    if (!car_legal(v_41)) v_41 = cdrerror(v_41); else
    v_41 = cdr(v_41);
    stack[-2] = v_41;
    v_41 = stack[-1];
    if (!car_legal(v_41)) v_42 = carerror(v_41); else
    v_42 = car(v_41);
    v_41 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // pv_sort2
    v_41 = (*qfn2(fn))(fn, v_42, v_41);
    }
    env = stack[-3];
    stack[0] = v_41;
    v_41 = stack[-2];
    stack[-1] = v_41;
    goto v_8;
    v_41 = nil;
    return onevalue(v_41);
}



// Code for modplus!:

static LispObject CC_modplusT(LispObject env,
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
    if (!car_legal(v_12)) v_12 = cdrerror(v_12); else
    v_12 = cdr(v_12);
    if (!car_legal(v_11)) v_11 = cdrerror(v_11); else
    v_11 = cdr(v_11);
    {   LispObject fn = basic_elt(env, 1); // general!-modular!-plus
    v_11 = (*qfn2(fn))(fn, v_12, v_11);
    }
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // !*modular2f
        return (*qfn1(fn))(fn, v_11);
    }
}



// Code for ofsf_vareqnp

static LispObject CC_ofsf_vareqnp(LispObject env,
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
    if (!car_legal(v_9)) v_9 = cdrerror(v_9); else
    v_9 = cdr(v_9);
    if (!car_legal(v_9)) v_9 = carerror(v_9); else
    v_9 = car(v_9);
    {
        LispObject fn = basic_elt(env, 1); // sfto_varisnump
        return (*qfn1(fn))(fn, v_9);
    }
}



// Code for polynomadd

static LispObject CC_polynomadd(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_96, v_97, v_98;
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
    v_97 = v_3;
    stack[-2] = v_2;
// end of prologue
    v_96 = stack[-2];
    stack[-3] = v_96;
    v_96 = v_97;
    stack[-1] = v_96;
v_15:
    v_96 = stack[-3];
    if (!car_legal(v_96)) v_96 = carerror(v_96); else
    v_96 = car(v_96);
    if (v_96 == nil) goto v_18;
    v_96 = stack[-1];
    if (!car_legal(v_96)) v_96 = carerror(v_96); else
    v_96 = car(v_96);
    if (v_96 == nil) goto v_18;
    goto v_19;
v_18:
    goto v_14;
v_19:
    v_96 = stack[-3];
    if (!car_legal(v_96)) v_97 = carerror(v_96); else
    v_97 = car(v_96);
    v_96 = stack[-1];
    if (!car_legal(v_96)) v_96 = carerror(v_96); else
    v_96 = car(v_96);
    {   LispObject fn = basic_elt(env, 1); // monomcompare
    v_96 = (*qfn2(fn))(fn, v_97, v_96);
    }
    env = stack[-4];
    v_98 = v_96;
    v_97 = v_98;
    v_96 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_97 == v_96) goto v_34;
    else goto v_35;
v_34:
    v_96 = stack[-3];
    if (!car_legal(v_96)) v_96 = cdrerror(v_96); else
    v_96 = cdr(v_96);
    stack[-3] = v_96;
    goto v_33;
v_35:
    v_97 = v_98;
    v_96 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    if (v_97 == v_96) goto v_41;
    else goto v_42;
v_41:
    stack[0] = stack[-3];
    v_96 = stack[-3];
    if (!car_legal(v_96)) v_97 = carerror(v_96); else
    v_97 = car(v_96);
    v_96 = stack[-3];
    if (!car_legal(v_96)) v_96 = cdrerror(v_96); else
    v_96 = cdr(v_96);
    v_96 = cons(v_97, v_96);
    env = stack[-4];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_96);
    v_97 = stack[0];
    v_96 = stack[-1];
    if (!car_legal(v_96)) v_96 = carerror(v_96); else
    v_96 = car(v_96);
    if (!car_legal(v_97)) rplaca_fails(v_97);
    setcar(v_97, v_96);
    v_96 = stack[-3];
    if (!car_legal(v_96)) v_96 = cdrerror(v_96); else
    v_96 = cdr(v_96);
    stack[-3] = v_96;
    v_96 = stack[-1];
    if (!car_legal(v_96)) v_96 = cdrerror(v_96); else
    v_96 = cdr(v_96);
    stack[-1] = v_96;
    goto v_33;
v_42:
    v_97 = stack[-3];
    v_96 = stack[-3];
    if (!car_legal(v_96)) v_96 = cdrerror(v_96); else
    v_96 = cdr(v_96);
    if (!car_legal(v_96)) v_96 = carerror(v_96); else
    v_96 = car(v_96);
    if (!car_legal(v_97)) rplaca_fails(v_97);
    setcar(v_97, v_96);
    v_96 = stack[-3];
    if (!car_legal(v_96)) v_96 = cdrerror(v_96); else
    v_96 = cdr(v_96);
    if (!car_legal(v_96)) v_96 = cdrerror(v_96); else
    v_96 = cdr(v_96);
    if (!car_legal(v_97)) rplacd_fails(v_97);
    setcdr(v_97, v_96);
    v_96 = stack[-1];
    if (!car_legal(v_96)) v_96 = cdrerror(v_96); else
    v_96 = cdr(v_96);
    stack[-1] = v_96;
    goto v_33;
v_33:
    goto v_15;
v_14:
    v_96 = stack[-1];
    if (!car_legal(v_96)) v_96 = carerror(v_96); else
    v_96 = car(v_96);
    if (v_96 == nil) goto v_78;
    v_97 = stack[-3];
    v_96 = stack[-1];
    if (!car_legal(v_97)) rplacd_fails(v_97);
    setcdr(v_97, v_96);
    v_96 = v_97;
    v_98 = v_96;
    v_97 = v_98;
    v_96 = v_98;
    if (!car_legal(v_96)) v_96 = cdrerror(v_96); else
    v_96 = cdr(v_96);
    if (!car_legal(v_96)) v_96 = carerror(v_96); else
    v_96 = car(v_96);
    if (!car_legal(v_97)) rplaca_fails(v_97);
    setcar(v_97, v_96);
    v_96 = v_97;
    v_97 = v_98;
    if (!car_legal(v_97)) v_97 = cdrerror(v_97); else
    v_97 = cdr(v_97);
    if (!car_legal(v_97)) v_97 = cdrerror(v_97); else
    v_97 = cdr(v_97);
    if (!car_legal(v_96)) rplacd_fails(v_96);
    setcdr(v_96, v_97);
    goto v_76;
v_78:
v_76:
    v_96 = stack[-2];
    return onevalue(v_96);
}



// Code for rl_smmkatl

static LispObject CC_rl_smmkatl(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_14, v_15, v_16, v_17;
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    v_14 = v_5;
    v_15 = v_4;
    v_16 = v_3;
    v_17 = v_2;
// end of prologue
    stack[0] = qvalue(basic_elt(env, 1)); // rl_smmkatl!*
    v_14 = list4(v_17, v_16, v_15, v_14);
    env = stack[-1];
    {
        LispObject v_19 = stack[0];
        LispObject fn = basic_elt(env, 2); // apply
        return (*qfn2(fn))(fn, v_19, v_14);
    }
}



// Code for setcar

static LispObject CC_setcar(LispObject env,
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
    v_10 = v_3;
    v_9 = v_2;
// end of prologue
    v_11 = v_9;
    v_9 = v_10;
    if (!car_legal(v_11)) rplaca_fails(v_11);
    setcar(v_11, v_9);
    v_9 = v_10;
    return onevalue(v_9);
}



// Code for multi_isarb_compl

static LispObject CC_multi_isarb_compl(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_27;
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
    v_27 = Lconsp(nil, v_27);
    env = stack[-1];
    if (v_27 == nil) goto v_9;
    v_27 = stack[0];
    if (v_27 == nil) goto v_14;
    else goto v_15;
v_14:
    goto v_13;
v_15:
    v_27 = stack[0];
    if (!car_legal(v_27)) v_27 = carerror(v_27); else
    v_27 = car(v_27);
    {   LispObject fn = basic_elt(env, 1); // isarb_compl
    v_27 = (*qfn1(fn))(fn, v_27);
    }
    env = stack[-1];
    v_27 = stack[0];
    if (!car_legal(v_27)) v_27 = cdrerror(v_27); else
    v_27 = cdr(v_27);
    {   LispObject fn = basic_elt(env, 0); // multi_isarb_compl
    v_27 = (*qfn1(fn))(fn, v_27);
    }
    goto v_13;
v_13:
    goto v_7;
v_9:
v_7:
    v_27 = nil;
    return onevalue(v_27);
}



// Code for minus!:

static LispObject CC_minusT(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    stack[-1] = basic_elt(env, 1); // !:rd!:
    v_13 = stack[0];
    if (!car_legal(v_13)) v_13 = cdrerror(v_13); else
    v_13 = cdr(v_13);
    if (!car_legal(v_13)) v_13 = carerror(v_13); else
    v_13 = car(v_13);
    v_14 = negate(v_13);
    v_13 = stack[0];
    if (!car_legal(v_13)) v_13 = cdrerror(v_13); else
    v_13 = cdr(v_13);
    if (!car_legal(v_13)) v_13 = cdrerror(v_13); else
    v_13 = cdr(v_13);
    {
        LispObject v_17 = stack[-1];
        return list2star(v_17, v_14, v_13);
    }
}



// Code for depends

static LispObject CC_depends(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_176, v_177, v_178;
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
    v_176 = stack[-1];
    if (v_176 == nil) goto v_11;
    else goto v_12;
v_11:
    v_176 = lisp_true;
    goto v_10;
v_12:
    v_176 = stack[-1];
    v_176 = (is_number(v_176) ? lisp_true : nil);
    if (v_176 == nil) goto v_19;
    else goto v_18;
v_19:
    v_176 = stack[0];
    v_176 = (is_number(v_176) ? lisp_true : nil);
v_18:
    goto v_10;
    v_176 = nil;
v_10:
    if (v_176 == nil) goto v_8;
    v_176 = nil;
    goto v_6;
v_8:
    v_177 = stack[-1];
    v_176 = stack[0];
    if (equal(v_177, v_176)) goto v_25;
    else goto v_26;
v_25:
    v_176 = stack[-1];
    goto v_6;
v_26:
    v_176 = stack[-1];
    if (!consp(v_176)) goto v_34;
    else goto v_35;
v_34:
    v_177 = stack[-1];
    v_176 = qvalue(basic_elt(env, 1)); // frlis!*
    v_176 = Lmemq(nil, v_177, v_176);
    goto v_33;
v_35:
    v_176 = nil;
    goto v_33;
    v_176 = nil;
v_33:
    if (v_176 == nil) goto v_31;
    v_176 = lisp_true;
    goto v_6;
v_31:
    v_177 = stack[-1];
    v_176 = qvalue(basic_elt(env, 2)); // depl!*
    v_176 = Lassoc(nil, v_177, v_176);
    v_177 = v_176;
    v_176 = v_177;
    if (v_176 == nil) goto v_52;
    else goto v_53;
v_52:
    v_176 = nil;
    goto v_51;
v_53:
    v_176 = v_177;
    if (!car_legal(v_176)) v_177 = cdrerror(v_176); else
    v_177 = cdr(v_176);
    v_176 = stack[0];
    {   LispObject fn = basic_elt(env, 5); // ldepends
    v_176 = (*qfn2(fn))(fn, v_177, v_176);
    }
    env = stack[-2];
    goto v_51;
    v_176 = nil;
v_51:
    if (v_176 == nil) goto v_45;
    v_176 = lisp_true;
    goto v_6;
v_45:
    v_176 = stack[-1];
    if (!consp(v_176)) goto v_68;
    v_176 = stack[-1];
    if (!car_legal(v_176)) v_176 = carerror(v_176); else
    v_176 = car(v_176);
    if (symbolp(v_176)) goto v_73;
    v_176 = nil;
    goto v_71;
v_73:
    v_176 = stack[-1];
    if (!car_legal(v_176)) v_176 = carerror(v_176); else
    v_176 = car(v_176);
    if (!symbolp(v_176)) v_176 = nil;
    else { v_176 = qfastgets(v_176);
           if (v_176 != nil) { v_176 = elt(v_176, 8); // dname
#ifdef RECORD_GET
             if (v_176 != SPID_NOPROP)
                record_get(elt(fastget_names, 8), 1);
             else record_get(elt(fastget_names, 8), 0),
                v_176 = nil; }
           else record_get(elt(fastget_names, 8), 0); }
#else
             if (v_176 == SPID_NOPROP) v_176 = nil; }}
#endif
    goto v_71;
    v_176 = nil;
v_71:
    goto v_66;
v_68:
    v_176 = nil;
    goto v_66;
    v_176 = nil;
v_66:
    if (v_176 == nil) goto v_64;
    v_176 = stack[-1];
    if (!car_legal(v_176)) v_177 = carerror(v_176); else
    v_177 = car(v_176);
    v_176 = basic_elt(env, 3); // domain!-depends!-fn
    v_176 = get(v_177, v_176);
    v_177 = v_176;
    v_176 = v_177;
    if (v_176 == nil) goto v_93;
    v_178 = v_177;
    v_177 = stack[-1];
    v_176 = stack[0];
        return Lapply2(nil, v_178, v_177, v_176);
v_93:
    v_176 = nil;
    goto v_91;
    v_176 = nil;
v_91:
    goto v_6;
v_64:
    v_176 = stack[-1];
    if (!consp(v_176)) goto v_107;
    v_176 = stack[-1];
    if (!car_legal(v_176)) v_177 = cdrerror(v_176); else
    v_177 = cdr(v_176);
    v_176 = stack[0];
    {   LispObject fn = basic_elt(env, 5); // ldepends
    v_176 = (*qfn2(fn))(fn, v_177, v_176);
    }
    env = stack[-2];
    if (v_176 == nil) goto v_111;
    else goto v_110;
v_111:
    v_176 = stack[-1];
    if (!car_legal(v_176)) v_177 = carerror(v_176); else
    v_177 = car(v_176);
    v_176 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // depends
    v_176 = (*qfn2(fn))(fn, v_177, v_176);
    }
    env = stack[-2];
v_110:
    goto v_105;
v_107:
    v_176 = nil;
    goto v_105;
    v_176 = nil;
v_105:
    if (v_176 == nil) goto v_103;
    v_176 = lisp_true;
    goto v_6;
v_103:
    v_176 = stack[0];
    if (!consp(v_176)) goto v_128;
    else goto v_129;
v_128:
    v_176 = lisp_true;
    goto v_127;
v_129:
    v_176 = stack[0];
    if (!car_legal(v_176)) v_176 = carerror(v_176); else
    v_176 = car(v_176);
    if (symbolp(v_176)) goto v_137;
    v_176 = nil;
    goto v_135;
v_137:
    v_176 = stack[0];
    if (!car_legal(v_176)) v_176 = carerror(v_176); else
    v_176 = car(v_176);
    if (!symbolp(v_176)) v_176 = nil;
    else { v_176 = qfastgets(v_176);
           if (v_176 != nil) { v_176 = elt(v_176, 8); // dname
#ifdef RECORD_GET
             if (v_176 != SPID_NOPROP)
                record_get(elt(fastget_names, 8), 1);
             else record_get(elt(fastget_names, 8), 0),
                v_176 = nil; }
           else record_get(elt(fastget_names, 8), 0); }
#else
             if (v_176 == SPID_NOPROP) v_176 = nil; }}
#endif
    goto v_135;
    v_176 = nil;
v_135:
    goto v_127;
    v_176 = nil;
v_127:
    if (v_176 == nil) goto v_125;
    v_176 = nil;
    goto v_6;
v_125:
    v_177 = stack[-1];
    v_176 = basic_elt(env, 4); // tensor
    v_176 = Lflagp(nil, v_177, v_176);
    env = stack[-2];
    if (v_176 == nil) goto v_152;
    v_176 = stack[0];
    v_176 = Lconsp(nil, v_176);
    if (v_176 == nil) goto v_158;
    else goto v_159;
v_158:
    v_176 = nil;
    goto v_157;
v_159:
    v_177 = stack[-1];
    v_176 = stack[0];
    if (!car_legal(v_176)) v_176 = carerror(v_176); else
    v_176 = car(v_176);
    v_176 = (equal(v_177, v_176) ? lisp_true : nil);
    goto v_157;
    v_176 = nil;
v_157:
    goto v_150;
v_152:
    v_176 = nil;
    goto v_150;
    v_176 = nil;
v_150:
    if (v_176 == nil) goto v_148;
    v_176 = lisp_true;
    goto v_6;
v_148:
    v_176 = nil;
    goto v_6;
    v_176 = nil;
v_6:
    return onevalue(v_176);
}



// Code for dm!-difference

static LispObject CC_dmKdifference(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_19, v_20;
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
    v_19 = v_2;
// end of prologue
    {   LispObject fn = basic_elt(env, 1); // zero2nil
    v_20 = (*qfn1(fn))(fn, v_19);
    }
    env = stack[-1];
    v_19 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // !:difference
    v_19 = (*qfn2(fn))(fn, v_20, v_19);
    }
    v_20 = v_19;
    v_19 = v_20;
    if (v_19 == nil) goto v_12;
    else goto v_13;
v_12:
    v_19 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_11;
v_13:
    v_19 = v_20;
    goto v_11;
    v_19 = nil;
v_11:
    return onevalue(v_19);
}



// Code for rd!:onep

static LispObject CC_rdTonep(LispObject env,
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
    v_23 = v_2;
// end of prologue
    v_24 = v_23;
    if (!car_legal(v_24)) v_24 = cdrerror(v_24); else
    v_24 = cdr(v_24);
    if (!consp(v_24)) goto v_6;
    else goto v_7;
v_6:
    v_24 = basic_elt(env, 1); // 1.0
    if (!car_legal(v_23)) v_23 = cdrerror(v_23); else
    v_23 = cdr(v_23);
    v_23 = difference2(v_24, v_23);
    env = stack[-1];
    v_23 = Labsval(nil, v_23);
    env = stack[-1];
    v_24 = qvalue(basic_elt(env, 2)); // !!fleps1
        return Llessp_2(nil, v_23, v_24);
v_7:
    stack[0] = qvalue(basic_elt(env, 3)); // bfone!*
    {   LispObject fn = basic_elt(env, 4); // bftrim!:
    v_23 = (*qfn1(fn))(fn, v_23);
    }
    env = stack[-1];
    {
        LispObject v_26 = stack[0];
        LispObject fn = basic_elt(env, 5); // equal!:
        return (*qfn2(fn))(fn, v_26, v_23);
    }
    v_23 = nil;
    return onevalue(v_23);
}



// Code for simpminus

static LispObject CC_simpminus(LispObject env,
                         LispObject v_2)
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
        push(v_2);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_9 = v_2;
// end of prologue
    v_10 = v_9;
    v_9 = basic_elt(env, 1); // minus
    {   LispObject fn = basic_elt(env, 2); // carx
    v_9 = (*qfn2(fn))(fn, v_10, v_9);
    }
    env = stack[0];
    {   LispObject fn = basic_elt(env, 3); // simp
    v_9 = (*qfn1(fn))(fn, v_9);
    }
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 4); // negsq
        return (*qfn1(fn))(fn, v_9);
    }
}



// Code for xdiv

static LispObject CC_xdiv(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    stack[-2] = stack[-1];
    v_30 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_30 = ncons(v_30);
    env = stack[-3];
    if (equal(stack[-2], v_30)) goto v_7;
    else goto v_8;
v_7:
    v_30 = stack[0];
    goto v_6;
v_8:
    v_31 = stack[-1];
    v_30 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // sublistp
    v_30 = (*qfn2(fn))(fn, v_31, v_30);
    }
    env = stack[-3];
    if (v_30 == nil) goto v_14;
    v_31 = stack[0];
    v_30 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // listdiff
    v_30 = (*qfn2(fn))(fn, v_31, v_30);
    }
    stack[0] = v_30;
    if (v_30 == nil) goto v_21;
    v_30 = stack[0];
    goto v_19;
v_21:
    v_30 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return ncons(v_30);
    v_30 = nil;
v_19:
    goto v_6;
v_14:
    v_30 = nil;
v_6:
    return onevalue(v_30);
}



// Code for getrmacro

static LispObject CC_getrmacro(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_42 = stack[0];
    if (symbolp(v_42)) goto v_10;
    v_42 = nil;
    goto v_8;
v_10:
    v_42 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // getd
    v_42 = (*qfn1(fn))(fn, v_42);
    }
    env = stack[-1];
    v_44 = v_42;
    if (v_42 == nil) goto v_14;
    v_42 = v_44;
    if (!car_legal(v_42)) v_43 = carerror(v_42); else
    v_43 = car(v_42);
    v_42 = basic_elt(env, 1); // macro
    if (v_43 == v_42) goto v_18;
    else goto v_14;
v_18:
    v_42 = v_44;
    goto v_8;
v_14:
    v_43 = stack[0];
    v_42 = basic_elt(env, 2); // inline
    v_42 = get(v_43, v_42);
    env = stack[-1];
    v_44 = v_42;
    if (v_42 == nil) goto v_24;
    v_42 = basic_elt(env, 2); // inline
    v_43 = v_44;
    return cons(v_42, v_43);
v_24:
    v_43 = stack[0];
    v_42 = basic_elt(env, 3); // smacro
    v_42 = get(v_43, v_42);
    env = stack[-1];
    v_44 = v_42;
    if (v_42 == nil) goto v_32;
    v_42 = basic_elt(env, 3); // smacro
    v_43 = v_44;
    return cons(v_42, v_43);
v_32:
    v_42 = nil;
    goto v_8;
    v_42 = nil;
v_8:
    return onevalue(v_42);
}



// Code for mo_compare

static LispObject CC_mo_compare(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_39, v_40, v_41;
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
    v_39 = stack[-1];
    if (!car_legal(v_39)) v_40 = cdrerror(v_39); else
    v_40 = cdr(v_39);
    v_39 = stack[0];
    if (!car_legal(v_39)) v_39 = cdrerror(v_39); else
    v_39 = cdr(v_39);
    {   LispObject fn = basic_elt(env, 3); // mo!=degcomp
    v_39 = (*qfn2(fn))(fn, v_40, v_39);
    }
    env = stack[-2];
    v_41 = v_39;
    v_40 = v_41;
    v_39 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_40 == v_39) goto v_15;
    else goto v_16;
v_15:
    v_39 = qvalue(basic_elt(env, 1)); // cali!=basering
    {   LispObject fn = basic_elt(env, 4); // ring_tag
    v_40 = (*qfn1(fn))(fn, v_39);
    }
    env = stack[-2];
    v_39 = basic_elt(env, 2); // revlex
    if (v_40 == v_39) goto v_21;
    else goto v_22;
v_21:
    v_39 = stack[-1];
    if (!car_legal(v_39)) v_40 = carerror(v_39); else
    v_40 = car(v_39);
    v_39 = stack[0];
    if (!car_legal(v_39)) v_39 = carerror(v_39); else
    v_39 = car(v_39);
    {   LispObject fn = basic_elt(env, 5); // mo!=revlexcomp
    v_39 = (*qfn2(fn))(fn, v_40, v_39);
    }
    goto v_20;
v_22:
    v_39 = stack[-1];
    if (!car_legal(v_39)) v_40 = carerror(v_39); else
    v_40 = car(v_39);
    v_39 = stack[0];
    if (!car_legal(v_39)) v_39 = carerror(v_39); else
    v_39 = car(v_39);
    {   LispObject fn = basic_elt(env, 6); // mo!=lexcomp
    v_39 = (*qfn2(fn))(fn, v_40, v_39);
    }
    goto v_20;
    v_39 = nil;
v_20:
    v_41 = v_39;
    goto v_14;
v_16:
v_14:
    v_39 = v_41;
    return onevalue(v_39);
}



// Code for vecp

static LispObject CC_vecp(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_88, v_89, v_90, v_91;
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
    v_90 = v_2;
// end of prologue
    v_88 = v_90;
    if (v_88 == nil) goto v_13;
    else goto v_14;
v_13:
    v_88 = lisp_true;
    goto v_12;
v_14:
    v_88 = v_90;
    v_88 = (is_number(v_88) ? lisp_true : nil);
    goto v_12;
    v_88 = nil;
v_12:
    if (v_88 == nil) goto v_10;
    v_88 = nil;
    goto v_8;
v_10:
    v_88 = v_90;
    if (!consp(v_88)) goto v_22;
    else goto v_23;
v_22:
    v_88 = v_90;
    if (!symbolp(v_88)) v_88 = nil;
    else { v_88 = qfastgets(v_88);
           if (v_88 != nil) { v_88 = elt(v_88, 2); // rtype
#ifdef RECORD_GET
             if (v_88 != SPID_NOPROP)
                record_get(elt(fastget_names, 2), 1);
             else record_get(elt(fastget_names, 2), 0),
                v_88 = nil; }
           else record_get(elt(fastget_names, 2), 0); }
#else
             if (v_88 == SPID_NOPROP) v_88 = nil; }}
#endif
    v_89 = basic_elt(env, 1); // !3vector
    if (v_88 == v_89) goto v_27;
    else goto v_28;
v_27:
    v_88 = lisp_true;
    goto v_26;
v_28:
    v_88 = v_90;
        return Lthreevectorp(nil, v_88);
    v_88 = nil;
v_26:
    goto v_8;
v_23:
    v_88 = v_90;
    v_88 = Lthreevectorp(nil, v_88);
    env = stack[0];
    if (v_88 == nil) goto v_38;
    v_88 = lisp_true;
    goto v_8;
v_38:
    v_88 = v_90;
    if (!car_legal(v_88)) v_88 = carerror(v_88); else
    v_88 = car(v_88);
    v_91 = v_88;
    if (!consp(v_88)) goto v_46;
    else goto v_47;
v_46:
    v_88 = v_91;
    if (!symbolp(v_88)) v_89 = nil;
    else { v_89 = qfastgets(v_88);
           if (v_89 != nil) { v_89 = elt(v_89, 2); // rtype
#ifdef RECORD_GET
             if (v_89 != SPID_NOPROP)
                record_get(elt(fastget_names, 2), 1);
             else record_get(elt(fastget_names, 2), 0),
                v_89 = nil; }
           else record_get(elt(fastget_names, 2), 0); }
#else
             if (v_89 == SPID_NOPROP) v_89 = nil; }}
#endif
    v_88 = basic_elt(env, 1); // !3vector
    v_88 = (v_89 == v_88 ? lisp_true : nil);
    goto v_45;
v_47:
    v_88 = nil;
    goto v_45;
    v_88 = nil;
v_45:
    if (v_88 == nil) goto v_43;
    v_88 = v_90;
    if (!car_legal(v_88)) v_88 = cdrerror(v_88); else
    v_88 = cdr(v_88);
    if (!car_legal(v_88)) v_88 = carerror(v_88); else
    v_88 = car(v_88);
    {
        LispObject fn = basic_elt(env, 5); // isvectorindex
        return (*qfn1(fn))(fn, v_88);
    }
v_43:
    v_89 = v_91;
    v_88 = basic_elt(env, 2); // vectorfn
    v_88 = Lflagp(nil, v_89, v_88);
    env = stack[0];
    if (v_88 == nil) goto v_62;
    v_88 = lisp_true;
    goto v_8;
v_62:
    v_89 = v_91;
    v_88 = basic_elt(env, 3); // varithop
    v_88 = Lflagp(nil, v_89, v_88);
    env = stack[0];
    if (v_88 == nil) goto v_72;
    v_88 = lisp_true;
    goto v_70;
v_72:
    v_89 = v_91;
    v_88 = basic_elt(env, 4); // vectormapping
    v_88 = Lflagp(nil, v_89, v_88);
    env = stack[0];
    goto v_70;
    v_88 = nil;
v_70:
    if (v_88 == nil) goto v_68;
    v_88 = v_90;
    if (!car_legal(v_88)) v_88 = cdrerror(v_88); else
    v_88 = cdr(v_88);
    {
        LispObject fn = basic_elt(env, 6); // hasonevector
        return (*qfn1(fn))(fn, v_88);
    }
v_68:
    v_88 = nil;
    goto v_8;
    v_88 = nil;
v_8:
    return onevalue(v_88);
}



// Code for pv_applp

static LispObject CC_pv_applp(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    stack[-4] = v_3;
    v_53 = v_2;
// end of prologue
    stack[-5] = v_53;
    v_53 = stack[-5];
    if (v_53 == nil) goto v_15;
    else goto v_16;
v_15:
    v_53 = nil;
    goto v_10;
v_16:
    v_53 = stack[-5];
    if (!car_legal(v_53)) v_53 = carerror(v_53); else
    v_53 = car(v_53);
    v_54 = v_53;
    v_53 = v_54;
    if (!car_legal(v_53)) stack[0] = carerror(v_53); else
    stack[0] = car(v_53);
    v_53 = v_54;
    if (!car_legal(v_53)) v_54 = cdrerror(v_53); else
    v_54 = cdr(v_53);
    v_53 = stack[-4];
    {   LispObject fn = basic_elt(env, 1); // pappl0
    v_53 = (*qfn2(fn))(fn, v_54, v_53);
    }
    env = stack[-6];
    v_53 = cons(stack[0], v_53);
    env = stack[-6];
    v_53 = ncons(v_53);
    env = stack[-6];
    stack[-2] = v_53;
    stack[-3] = v_53;
v_11:
    v_53 = stack[-5];
    if (!car_legal(v_53)) v_53 = cdrerror(v_53); else
    v_53 = cdr(v_53);
    stack[-5] = v_53;
    v_53 = stack[-5];
    if (v_53 == nil) goto v_34;
    else goto v_35;
v_34:
    v_53 = stack[-3];
    goto v_10;
v_35:
    stack[-1] = stack[-2];
    v_53 = stack[-5];
    if (!car_legal(v_53)) v_53 = carerror(v_53); else
    v_53 = car(v_53);
    v_54 = v_53;
    v_53 = v_54;
    if (!car_legal(v_53)) stack[0] = carerror(v_53); else
    stack[0] = car(v_53);
    v_53 = v_54;
    if (!car_legal(v_53)) v_54 = cdrerror(v_53); else
    v_54 = cdr(v_53);
    v_53 = stack[-4];
    {   LispObject fn = basic_elt(env, 1); // pappl0
    v_53 = (*qfn2(fn))(fn, v_54, v_53);
    }
    env = stack[-6];
    v_53 = cons(stack[0], v_53);
    env = stack[-6];
    v_53 = ncons(v_53);
    env = stack[-6];
    if (!car_legal(stack[-1])) rplacd_fails(stack[-1]);
    setcdr(stack[-1], v_53);
    v_53 = stack[-2];
    if (!car_legal(v_53)) v_53 = cdrerror(v_53); else
    v_53 = cdr(v_53);
    stack[-2] = v_53;
    goto v_11;
v_10:
    {
        LispObject fn = basic_elt(env, 2); // pv_sort
        return (*qfn1(fn))(fn, v_53);
    }
}



// Code for aronep!:

static LispObject CC_aronepT(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_8, v_9;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_8 = v_2;
// end of prologue
    if (!car_legal(v_8)) v_9 = cdrerror(v_8); else
    v_9 = cdr(v_8);
    v_8 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_8 = (v_9 == v_8 ? lisp_true : nil);
    return onevalue(v_8);
}



// Code for mod!#

static LispObject CC_modC(LispObject env,
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
    v_21 = v_2;
// end of prologue
    v_22 = v_21;
    v_21 = qvalue(basic_elt(env, 1)); // current!-modulus
    v_21 = Cremainder(v_22, v_21);
    env = stack[-1];
    stack[0] = v_21;
    v_22 = stack[0];
    v_21 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_21 = static_cast<LispObject>(lessp2(v_22, v_21));
    v_21 = v_21 ? lisp_true : nil;
    env = stack[-1];
    if (v_21 == nil) goto v_11;
    v_21 = stack[0];
    v_22 = qvalue(basic_elt(env, 1)); // current!-modulus
    return plus2(v_21, v_22);
v_11:
    v_21 = stack[0];
    goto v_9;
    v_21 = nil;
v_9:
    return onevalue(v_21);
}



// Code for gen!-mult!-by!-const!-mod!-p

static LispObject CC_genKmultKbyKconstKmodKp(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    v_60 = stack[-1];
    if (v_60 == nil) goto v_7;
    else goto v_8;
v_7:
    v_60 = nil;
    goto v_6;
v_8:
    v_61 = stack[0];
    v_60 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_61 == v_60) goto v_11;
    else goto v_12;
v_11:
    v_60 = stack[-1];
    goto v_6;
v_12:
    v_60 = stack[-1];
    if (!consp(v_60)) goto v_20;
    else goto v_21;
v_20:
    v_60 = lisp_true;
    goto v_19;
v_21:
    v_60 = stack[-1];
    if (!car_legal(v_60)) v_60 = carerror(v_60); else
    v_60 = car(v_60);
    v_60 = (consp(v_60) ? nil : lisp_true);
    goto v_19;
    v_60 = nil;
v_19:
    if (v_60 == nil) goto v_17;
    v_61 = stack[-1];
    v_60 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // general!-modular!-times
    v_60 = (*qfn2(fn))(fn, v_61, v_60);
    }
    env = stack[-3];
    {
        LispObject fn = basic_elt(env, 2); // !*n2f
        return (*qfn1(fn))(fn, v_60);
    }
v_17:
    v_60 = stack[-1];
    if (!car_legal(v_60)) v_60 = carerror(v_60); else
    v_60 = car(v_60);
    if (!car_legal(v_60)) v_61 = cdrerror(v_60); else
    v_61 = cdr(v_60);
    v_60 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // gen!-mult!-by!-const!-mod!-p
    stack[-2] = (*qfn2(fn))(fn, v_61, v_60);
    }
    env = stack[-3];
    v_60 = stack[-1];
    if (!car_legal(v_60)) v_61 = cdrerror(v_60); else
    v_61 = cdr(v_60);
    v_60 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // gen!-mult!-by!-const!-mod!-p
    v_60 = (*qfn2(fn))(fn, v_61, v_60);
    }
    v_61 = stack[-2];
    v_62 = v_61;
    if (v_62 == nil) goto v_48;
    else goto v_49;
v_48:
    goto v_47;
v_49:
    v_62 = stack[-1];
    if (!car_legal(v_62)) v_62 = carerror(v_62); else
    v_62 = car(v_62);
    if (!car_legal(v_62)) v_62 = carerror(v_62); else
    v_62 = car(v_62);
    return acons(v_62, v_61, v_60);
    v_60 = nil;
v_47:
    goto v_6;
    v_60 = nil;
v_6:
    return onevalue(v_60);
}



// Code for copy!-vector

static LispObject CC_copyKvector(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_29, v_30;
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
    stack[-2] = v_4;
    stack[-3] = v_3;
    stack[-4] = v_2;
// end of prologue
    v_29 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-5] = v_29;
v_9:
    v_30 = stack[-3];
    v_29 = stack[-5];
    v_29 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_30) - static_cast<std::uintptr_t>(v_29) + TAG_FIXNUM);
    v_29 = (static_cast<std::intptr_t>(v_29) < 0 ? lisp_true : nil);
    if (v_29 == nil) goto v_14;
    goto v_8;
v_14:
    stack[-1] = stack[-2];
    stack[0] = stack[-5];
    v_30 = stack[-4];
    v_29 = stack[-5];
    v_29 = Lgetv(nil, v_30, v_29);
    env = stack[-6];
    v_29 = Lputv(nil, stack[-1], stack[0], v_29);
    env = stack[-6];
    v_29 = stack[-5];
    v_29 = static_cast<LispObject>(static_cast<std::intptr_t>(v_29) + 0x10);
    stack[-5] = v_29;
    goto v_9;
v_8:
    v_29 = stack[-3];
    return onevalue(v_29);
}



// Code for aconc

static LispObject CC_aconc(LispObject env,
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
    v_9 = v_3;
    v_10 = v_2;
// end of prologue
    stack[0] = v_10;
    v_9 = ncons(v_9);
    {
        LispObject v_12 = stack[0];
        return Lnconc(nil, v_12, v_9);
    }
}



setup_type const u05_setup[] =
{
    {"ibalp_cequal",            G0W2,     G1W2,     CC_ibalp_cequal,G3W2,G4W2},
    {"vdp_poly",                G0W1,     CC_vdp_poly,G2W1,   G3W1,     G4W1},
    {"ev_comp",                 G0W2,     G1W2,     CC_ev_comp,G3W2,    G4W2},
    {"fullcopy",                G0W1,     CC_fullcopy,G2W1,   G3W1,     G4W1},
    {"dm-times",                G0W2,     G1W2,     CC_dmKtimes,G3W2,   G4W2},
    {"getrtype1",               G0W1,     CC_getrtype1,G2W1,  G3W1,     G4W1},
    {"vevtdeg",                 G0W1,     CC_vevtdeg,G2W1,    G3W1,     G4W1},
    {"safe-fp-minus",           G0W1,     CC_safeKfpKminus,G2W1,G3W1,   G4W1},
    {"prin2-downcase",          G0W1,     CC_prin2Kdowncase,G2W1,G3W1,  G4W1},
    {"readch1",                 CC_readch1,G1W0,    G2W0,     G3W0,     G4W0},
    {"fs:plus",                 G0W2,     G1W2,     CC_fsTplus,G3W2,    G4W2},
    {"mo=shorten",              G0W1,     CC_moMshorten,G2W1, G3W1,     G4W1},
    {"prin2*",                  G0W1,     CC_prin2H,G2W1,     G3W1,     G4W1},
    {"insert_pv1",              G0W3,     G1W3,     G2W3,     CC_insert_pv1,G4W3},
    {"noncomp*",                G0W1,     CC_noncompH,G2W1,   G3W1,     G4W1},
    {"mkgi",                    G0W2,     G1W2,     CC_mkgi,  G3W2,     G4W2},
    {"polynomclone",            G0W1,     CC_polynomclone,G2W1,G3W1,    G4W1},
    {"gcdf",                    G0W2,     G1W2,     CC_gcdf,  G3W2,     G4W2},
    {"reordsq",                 G0W1,     CC_reordsq,G2W1,    G3W1,     G4W1},
    {"addsq",                   G0W2,     G1W2,     CC_addsq, G3W2,     G4W2},
    {"ckrn1",                   G0W1,     CC_ckrn1, G2W1,     G3W1,     G4W1},
    {"talp_negateat",           G0W1,     CC_talp_negateat,G2W1,G3W1,   G4W1},
    {"sort-factors",            G0W1,     CC_sortKfactors,G2W1,G3W1,    G4W1},
    {"mathml_list2string",      G0W1,     CC_mathml_list2string,G2W1,G3W1,G4W1},
    {"findrow",                 G0W2,     G1W2,     CC_findrow,G3W2,    G4W2},
    {"groebsearchinlist",       G0W2,     G1W2,     CC_groebsearchinlist,G3W2,G4W2},
    {"find_item",               G0W2,     G1W2,     CC_find_item,G3W2,  G4W2},
    {"prin2la",                 G0W1,     CC_prin2la,G2W1,    G3W1,     G4W1},
    {"command1",                CC_command1,G1W0,   G2W0,     G3W0,     G4W0},
    {"getel1",                  G0W3,     G1W3,     G2W3,     CC_getel1,G4W3},
    {"prepsqx",                 G0W1,     CC_prepsqx,G2W1,    G3W1,     G4W1},
    {"mo_sum",                  G0W2,     G1W2,     CC_mo_sum,G3W2,     G4W2},
    {"resimp",                  G0W1,     CC_resimp,G2W1,     G3W1,     G4W1},
    {"pv_add",                  G0W2,     G1W2,     CC_pv_add,G3W2,     G4W2},
    {"sgn",                     G0W1,     CC_sgn,   G2W1,     G3W1,     G4W1},
    {"xcomment",                G0W2,     G1W2,     CC_xcomment,G3W2,   G4W2},
    {"absf",                    G0W1,     CC_absf,  G2W1,     G3W1,     G4W1},
    {"talp_mkinv",              G0W2,     G1W2,     CC_talp_mkinv,G3W2, G4W2},
    {"rl_prepat",               G0W1,     CC_rl_prepat,G2W1,  G3W1,     G4W1},
    {"ev_tdeg",                 G0W1,     CC_ev_tdeg,G2W1,    G3W1,     G4W1},
    {"listsum",                 G0W1,     CC_listsum,G2W1,    G3W1,     G4W1},
    {"indent*",                 G0W1,     CC_indentH,G2W1,    G3W1,     G4W1},
    {"multi_isarb_int",         G0W1,     CC_multi_isarb_int,G2W1,G3W1, G4W1},
    {"c:ordexp",                G0W2,     G1W2,     CC_cTordexp,G3W2,   G4W2},
    {"int-equiv-chk",           G0W1,     CC_intKequivKchk,G2W1,G3W1,   G4W1},
    {"*collectphysops",         G0W1,     CC_Hcollectphysops,G2W1,G3W1, G4W1},
    {"dp_term",                 G0W2,     G1W2,     CC_dp_term,G3W2,    G4W2},
    {"pv_sort1",                G0W2,     G1W2,     CC_pv_sort1,G3W2,   G4W2},
    {"modplus:",                G0W2,     G1W2,     CC_modplusT,G3W2,   G4W2},
    {"ofsf_vareqnp",            G0W2,     G1W2,     CC_ofsf_vareqnp,G3W2,G4W2},
    {"polynomadd",              G0W2,     G1W2,     CC_polynomadd,G3W2, G4W2},
    {"rl_smmkatl",              G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_rl_smmkatl},
    {"setcar",                  G0W2,     G1W2,     CC_setcar,G3W2,     G4W2},
    {"multi_isarb_compl",       G0W1,     CC_multi_isarb_compl,G2W1,G3W1,G4W1},
    {"minus:",                  G0W1,     CC_minusT,G2W1,     G3W1,     G4W1},
    {"depends",                 G0W2,     G1W2,     CC_depends,G3W2,    G4W2},
    {"dm-difference",           G0W2,     G1W2,     CC_dmKdifference,G3W2,G4W2},
    {"rd:onep",                 G0W1,     CC_rdTonep,G2W1,    G3W1,     G4W1},
    {"simpminus",               G0W1,     CC_simpminus,G2W1,  G3W1,     G4W1},
    {"xdiv",                    G0W2,     G1W2,     CC_xdiv,  G3W2,     G4W2},
    {"getrmacro",               G0W1,     CC_getrmacro,G2W1,  G3W1,     G4W1},
    {"mo_compare",              G0W2,     G1W2,     CC_mo_compare,G3W2, G4W2},
    {"vecp",                    G0W1,     CC_vecp,  G2W1,     G3W1,     G4W1},
    {"pv_applp",                G0W2,     G1W2,     CC_pv_applp,G3W2,   G4W2},
    {"aronep:",                 G0W1,     CC_aronepT,G2W1,    G3W1,     G4W1},
    {"mod#",                    G0W1,     CC_modC,  G2W1,     G3W1,     G4W1},
    {"gen-mult-by-const-mod-p", G0W2,     G1W2,     CC_genKmultKbyKconstKmodKp,G3W2,G4W2},
    {"copy-vector",             G0W3,     G1W3,     G2W3,     CC_copyKvector,G4W3},
    {"aconc",                   G0W2,     G1W2,     CC_aconc, G3W2,     G4W2},
    {nullptr, 
        reinterpret_cast<no_args *>(
            reinterpret_cast<uintptr_t>("u05")),
        reinterpret_cast<one_arg *>(
            reinterpret_cast<uintptr_t>("59962 9967390 5314157")),
        nullptr, nullptr, nullptr}
};

// end of generated code
