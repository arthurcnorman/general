
// $destdir/u27.c        Machine generated C code

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


// Code for gcd!-in!-vector

static LispObject CC_gcdKinKvector(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_148, v_149, v_150;
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
    push(nil, nil);
    stack_popper stack_popper_var(8);
// copy arguments values to proper place
    stack[-3] = v_5;
    stack[-4] = v_4;
    stack[0] = v_3;
    stack[-5] = v_2;
// end of prologue
    v_149 = stack[0];
    v_148 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_149 == v_148) goto v_17;
    else goto v_18;
v_17:
    v_148 = lisp_true;
    goto v_16;
v_18:
    v_149 = stack[-3];
    v_148 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_148 = (v_149 == v_148 ? lisp_true : nil);
    goto v_16;
    v_148 = nil;
v_16:
    if (v_148 == nil) goto v_14;
    v_150 = stack[-5];
    v_149 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_148 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_148 = Lputv(nil, v_150, v_149, v_148);
    v_148 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_9;
v_14:
    v_149 = stack[0];
    v_148 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if ((static_cast<std::intptr_t>(v_149) < static_cast<std::intptr_t>(v_148))) goto v_32;
    v_149 = stack[-3];
    v_148 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if ((static_cast<std::intptr_t>(v_149) < static_cast<std::intptr_t>(v_148))) goto v_32;
    goto v_33;
v_32:
    v_148 = basic_elt(env, 1); // "GCD with zero not allowed"
    {   LispObject fn = basic_elt(env, 2); // errorf
    v_148 = (*qfn1(fn))(fn, v_148);
    }
    env = stack[-7];
    goto v_12;
v_33:
v_12:
v_10:
    stack[-1] = stack[-5];
    stack[-2] = stack[0];
    stack[0] = stack[-4];
    v_148 = stack[-3];
    v_148 = ncons(v_148);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 3); // remainder!-in!-vector
    v_148 = (*qfn4up(fn))(fn, stack[-1], stack[-2], stack[0], v_148);
    }
    env = stack[-7];
    stack[0] = v_148;
    v_149 = stack[0];
    v_148 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_149 == v_148) goto v_50;
    else goto v_51;
v_50:
    v_150 = stack[-5];
    v_149 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_148 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_148 = Lputv(nil, v_150, v_149, v_148);
    v_148 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_9;
v_51:
    v_149 = stack[0];
    v_148 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    if (v_149 == v_148) goto v_59;
    else goto v_60;
v_59:
    v_149 = stack[-4];
    v_148 = stack[-3];
    v_148 = Lgetv(nil, v_149, v_148);
    env = stack[-7];
    v_148 = Lmodular_reciprocal(nil, v_148);
    env = stack[-7];
    stack[-6] = v_148;
    v_148 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-2] = v_148;
v_70:
    v_149 = stack[-3];
    v_148 = stack[-2];
    v_148 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_149) - static_cast<std::uintptr_t>(v_148) + TAG_FIXNUM);
    v_148 = (static_cast<std::intptr_t>(v_148) < 0 ? lisp_true : nil);
    if (v_148 == nil) goto v_75;
    goto v_69;
v_75:
    stack[-1] = stack[-5];
    stack[0] = stack[-2];
    v_149 = stack[-4];
    v_148 = stack[-2];
    v_149 = Lgetv(nil, v_149, v_148);
    env = stack[-7];
    v_148 = stack[-6];
    v_148 = Lmodular_times(nil, v_149, v_148);
    env = stack[-7];
    v_148 = Lputv(nil, stack[-1], stack[0], v_148);
    env = stack[-7];
    v_148 = stack[-2];
    v_148 = static_cast<LispObject>(static_cast<std::intptr_t>(v_148) + 0x10);
    stack[-2] = v_148;
    goto v_70;
v_69:
    v_148 = stack[-3];
    goto v_9;
v_60:
    stack[-2] = stack[-4];
    stack[-1] = stack[-5];
    v_148 = stack[0];
    v_148 = ncons(v_148);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 3); // remainder!-in!-vector
    v_148 = (*qfn4up(fn))(fn, stack[-2], stack[-3], stack[-1], v_148);
    }
    env = stack[-7];
    stack[-3] = v_148;
    v_149 = stack[-3];
    v_148 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_149 == v_148) goto v_100;
    else goto v_101;
v_100:
    v_150 = stack[-5];
    v_149 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_148 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_148 = Lputv(nil, v_150, v_149, v_148);
    v_148 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_9;
v_101:
    v_149 = stack[-3];
    v_148 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    if (v_149 == v_148) goto v_109;
    else goto v_110;
v_109:
    v_149 = stack[-5];
    v_148 = stack[0];
    v_148 = Lgetv(nil, v_149, v_148);
    env = stack[-7];
    v_148 = Lmodular_reciprocal(nil, v_148);
    env = stack[-7];
    stack[-6] = v_148;
    v_149 = stack[-6];
    v_148 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_149 == v_148) goto v_120;
    v_148 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-3] = v_148;
v_126:
    v_149 = stack[0];
    v_148 = stack[-3];
    v_148 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_149) - static_cast<std::uintptr_t>(v_148) + TAG_FIXNUM);
    v_148 = (static_cast<std::intptr_t>(v_148) < 0 ? lisp_true : nil);
    if (v_148 == nil) goto v_131;
    goto v_125;
v_131:
    stack[-2] = stack[-5];
    stack[-1] = stack[-3];
    v_149 = stack[-5];
    v_148 = stack[-3];
    v_149 = Lgetv(nil, v_149, v_148);
    env = stack[-7];
    v_148 = stack[-6];
    v_148 = Lmodular_times(nil, v_149, v_148);
    env = stack[-7];
    v_148 = Lputv(nil, stack[-2], stack[-1], v_148);
    env = stack[-7];
    v_148 = stack[-3];
    v_148 = static_cast<LispObject>(static_cast<std::intptr_t>(v_148) + 0x10);
    stack[-3] = v_148;
    goto v_126;
v_125:
    goto v_118;
v_120:
v_118:
    v_148 = stack[0];
    goto v_9;
v_110:
    goto v_10;
v_9:
    return onevalue(v_148);
}



// Code for lalr_make_compressed_goto_column

static LispObject CC_lalr_make_compressed_goto_column(LispObject env,
                         LispObject v_2)
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
    v_89 = v_2;
// end of prologue
    stack[-4] = nil;
    v_90 = v_89;
    v_89 = qvalue(basic_elt(env, 1)); // goto_table
    {   LispObject fn = basic_elt(env, 2); // gethash
    v_89 = (*qfn2(fn))(fn, v_90, v_89);
    }
    env = stack[-5];
    stack[-3] = v_89;
    v_89 = stack[-3];
    if (v_89 == nil) goto v_20;
    else goto v_21;
v_20:
    v_89 = nil;
    goto v_13;
v_21:
    v_89 = stack[-3];
    if (!car_legal(v_89)) v_89 = carerror(v_89); else
    v_89 = car(v_89);
    v_90 = v_89;
    if (!car_legal(v_90)) v_90 = carerror(v_90); else
    v_90 = car(v_90);
    if (!car_legal(v_90)) v_90 = cdrerror(v_90); else
    v_90 = cdr(v_90);
    if (!car_legal(v_89)) v_89 = cdrerror(v_89); else
    v_89 = cdr(v_89);
    if (!car_legal(v_89)) v_89 = cdrerror(v_89); else
    v_89 = cdr(v_89);
    v_89 = cons(v_90, v_89);
    env = stack[-5];
    v_89 = ncons(v_89);
    env = stack[-5];
    stack[-1] = v_89;
    stack[-2] = v_89;
v_14:
    v_89 = stack[-3];
    if (!car_legal(v_89)) v_89 = cdrerror(v_89); else
    v_89 = cdr(v_89);
    stack[-3] = v_89;
    v_89 = stack[-3];
    if (v_89 == nil) goto v_39;
    else goto v_40;
v_39:
    v_89 = stack[-2];
    goto v_13;
v_40:
    stack[0] = stack[-1];
    v_89 = stack[-3];
    if (!car_legal(v_89)) v_89 = carerror(v_89); else
    v_89 = car(v_89);
    v_90 = v_89;
    if (!car_legal(v_90)) v_90 = carerror(v_90); else
    v_90 = car(v_90);
    if (!car_legal(v_90)) v_90 = cdrerror(v_90); else
    v_90 = cdr(v_90);
    if (!car_legal(v_89)) v_89 = cdrerror(v_89); else
    v_89 = cdr(v_89);
    if (!car_legal(v_89)) v_89 = cdrerror(v_89); else
    v_89 = cdr(v_89);
    v_89 = cons(v_90, v_89);
    env = stack[-5];
    v_89 = ncons(v_89);
    env = stack[-5];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_89);
    v_89 = stack[-1];
    if (!car_legal(v_89)) v_89 = cdrerror(v_89); else
    v_89 = cdr(v_89);
    stack[-1] = v_89;
    goto v_14;
v_13:
    stack[0] = v_89;
    v_89 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // lalr_most_common_dest
    v_89 = (*qfn1(fn))(fn, v_89);
    }
    env = stack[-5];
    stack[-1] = v_89;
    v_89 = stack[0];
    stack[0] = v_89;
v_63:
    v_89 = stack[0];
    if (v_89 == nil) goto v_67;
    else goto v_68;
v_67:
    goto v_62;
v_68:
    v_89 = stack[0];
    if (!car_legal(v_89)) v_89 = carerror(v_89); else
    v_89 = car(v_89);
    v_91 = v_89;
    v_89 = v_91;
    if (!car_legal(v_89)) v_90 = cdrerror(v_89); else
    v_90 = cdr(v_89);
    v_89 = stack[-1];
    if (equal(v_90, v_89)) goto v_77;
    v_90 = v_91;
    v_89 = stack[-4];
    v_89 = cons(v_90, v_89);
    env = stack[-5];
    stack[-4] = v_89;
    goto v_75;
v_77:
v_75:
    v_89 = stack[0];
    if (!car_legal(v_89)) v_89 = cdrerror(v_89); else
    v_89 = cdr(v_89);
    stack[0] = v_89;
    goto v_63;
v_62:
    v_90 = stack[-4];
    v_89 = stack[-1];
    return cons(v_90, v_89);
    return onevalue(v_89);
}



// Code for aex_neg

static LispObject CC_aex_neg(LispObject env,
                         LispObject v_2)
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
    v_10 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // aex_ex
    v_10 = (*qfn1(fn))(fn, v_10);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 2); // negsq
    stack[-1] = (*qfn1(fn))(fn, v_10);
    }
    env = stack[-2];
    v_10 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // aex_ctx
    v_10 = (*qfn1(fn))(fn, v_10);
    }
    env = stack[-2];
    {
        LispObject v_13 = stack[-1];
        LispObject fn = basic_elt(env, 4); // aex_mk
        return (*qfn2(fn))(fn, v_13, v_10);
    }
}



// Code for innprodp2

static LispObject CC_innprodp2(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_34 = v_3;
    stack[-2] = v_2;
// end of prologue
    v_35 = nil;
    v_34 = cons(v_35, v_34);
    env = stack[-4];
v_12:
    v_35 = stack[-2];
    if (v_35 == nil) goto v_15;
    v_35 = v_34;
    if (v_35 == nil) goto v_15;
    goto v_16;
v_15:
    goto v_11;
v_16:
    stack[-3] = nil;
    v_35 = stack[-2];
    if (!car_legal(v_35)) stack[-1] = carerror(v_35); else
    stack[-1] = car(v_35);
    v_35 = v_34;
    if (!car_legal(v_35)) stack[0] = cdrerror(v_35); else
    stack[0] = cdr(v_35);
    if (!car_legal(v_34)) v_34 = carerror(v_34); else
    v_34 = car(v_34);
    v_34 = ncons(v_34);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 1); // innprodkp
    v_34 = (*qfn4up(fn))(fn, stack[-3], stack[-1], stack[0], v_34);
    }
    env = stack[-4];
    v_35 = stack[-2];
    if (!car_legal(v_35)) v_35 = cdrerror(v_35); else
    v_35 = cdr(v_35);
    stack[-2] = v_35;
    goto v_12;
v_11:
    return onevalue(v_34);
}



// Code for talp_subat

static LispObject CC_talp_subat(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_16 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // talp_op
    stack[-3] = (*qfn1(fn))(fn, v_16);
    }
    env = stack[-4];
    stack[0] = stack[-2];
    v_16 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // talp_arg2l
    v_16 = (*qfn1(fn))(fn, v_16);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 3); // talp_subt
    stack[0] = (*qfn2(fn))(fn, stack[0], v_16);
    }
    env = stack[-4];
    v_16 = stack[-1];
    {   LispObject fn = basic_elt(env, 4); // talp_arg2r
    v_16 = (*qfn1(fn))(fn, v_16);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 3); // talp_subt
    v_16 = (*qfn2(fn))(fn, stack[-2], v_16);
    }
    env = stack[-4];
    {
        LispObject v_21 = stack[-3];
        LispObject v_22 = stack[0];
        LispObject fn = basic_elt(env, 5); // talp_mk2
        return (*qfn3(fn))(fn, v_21, v_22, v_16);
    }
}



// Code for rl_updcache

static LispObject CC_rl_updcache(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_89, v_90;
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
    v_89 = qvalue(basic_elt(env, 1)); // rl_bbl!*
    stack[0] = v_89;
v_6:
    v_89 = stack[0];
    if (v_89 == nil) goto v_10;
    else goto v_11;
v_10:
    goto v_5;
v_11:
    v_89 = stack[0];
    if (!car_legal(v_89)) v_89 = carerror(v_89); else
    v_89 = car(v_89);
    v_90 = v_89;
    v_89 = nil;
    v_89 = Lset(nil, v_90, v_89);
    env = stack[-1];
    v_89 = stack[0];
    if (!car_legal(v_89)) v_89 = cdrerror(v_89); else
    v_89 = cdr(v_89);
    stack[0] = v_89;
    goto v_6;
v_5:
    v_89 = qvalue(basic_elt(env, 2)); // rl_cid!*
    if (!car_legal(v_89)) v_90 = carerror(v_89); else
    v_90 = car(v_89);
    v_89 = basic_elt(env, 3); // rl_params
    v_89 = get(v_90, v_89);
    env = stack[-1];
    stack[0] = v_89;
v_25:
    v_89 = stack[0];
    if (v_89 == nil) goto v_32;
    else goto v_33;
v_32:
    goto v_24;
v_33:
    v_89 = stack[0];
    if (!car_legal(v_89)) v_89 = carerror(v_89); else
    v_89 = car(v_89);
    v_90 = v_89;
    if (!car_legal(v_90)) v_90 = carerror(v_90); else
    v_90 = car(v_90);
    if (!car_legal(v_89)) v_89 = cdrerror(v_89); else
    v_89 = cdr(v_89);
    v_89 = Lset(nil, v_90, v_89);
    env = stack[-1];
    v_89 = stack[0];
    if (!car_legal(v_89)) v_89 = cdrerror(v_89); else
    v_89 = cdr(v_89);
    stack[0] = v_89;
    goto v_25;
v_24:
    v_89 = qvalue(basic_elt(env, 4)); // rl_servl!*
    stack[0] = v_89;
v_49:
    v_89 = stack[0];
    if (v_89 == nil) goto v_53;
    else goto v_54;
v_53:
    goto v_48;
v_54:
    v_89 = stack[0];
    if (!car_legal(v_89)) v_89 = carerror(v_89); else
    v_89 = car(v_89);
    v_90 = v_89;
    v_89 = nil;
    v_89 = Lset(nil, v_90, v_89);
    env = stack[-1];
    v_89 = stack[0];
    if (!car_legal(v_89)) v_89 = cdrerror(v_89); else
    v_89 = cdr(v_89);
    stack[0] = v_89;
    goto v_49;
v_48:
    v_89 = qvalue(basic_elt(env, 2)); // rl_cid!*
    if (!car_legal(v_89)) v_90 = carerror(v_89); else
    v_90 = car(v_89);
    v_89 = basic_elt(env, 5); // rl_services
    v_89 = get(v_90, v_89);
    env = stack[-1];
    stack[0] = v_89;
v_68:
    v_89 = stack[0];
    if (v_89 == nil) goto v_75;
    else goto v_76;
v_75:
    v_89 = nil;
    goto v_67;
v_76:
    v_89 = stack[0];
    if (!car_legal(v_89)) v_89 = carerror(v_89); else
    v_89 = car(v_89);
    v_90 = v_89;
    if (!car_legal(v_90)) v_90 = carerror(v_90); else
    v_90 = car(v_90);
    if (!car_legal(v_89)) v_89 = cdrerror(v_89); else
    v_89 = cdr(v_89);
    v_89 = Lset(nil, v_90, v_89);
    env = stack[-1];
    v_89 = stack[0];
    if (!car_legal(v_89)) v_89 = cdrerror(v_89); else
    v_89 = cdr(v_89);
    stack[0] = v_89;
    goto v_68;
v_67:
    return onevalue(v_89);
}



// Code for ioto_form2str1

static LispObject CC_ioto_form2str1(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_165, v_166, v_167;
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
    v_166 = v_2;
// end of prologue
    v_165 = stack[-5];
    if (!consp(v_165)) goto v_12;
    else goto v_13;
v_12:
    v_165 = stack[-5];
    {
        LispObject fn = basic_elt(env, 6); // ioto_prtb
        return (*qfn2(fn))(fn, v_166, v_165);
    }
v_13:
    v_165 = stack[-5];
    if (!car_legal(v_165)) v_165 = carerror(v_165); else
    v_165 = car(v_165);
    v_167 = v_165;
    v_165 = stack[-5];
    if (!car_legal(v_165)) v_165 = cdrerror(v_165); else
    v_165 = cdr(v_165);
    stack[-5] = v_165;
    v_165 = v_167;
    stack[-6] = v_165;
    v_165 = stack[-6];
    if (!symbolp(v_165)) v_165 = nil;
    else { v_165 = qfastgets(v_165);
           if (v_165 != nil) { v_165 = elt(v_165, 23); // infix
#ifdef RECORD_GET
             if (v_165 != SPID_NOPROP)
                record_get(elt(fastget_names, 23), 1);
             else record_get(elt(fastget_names, 23), 0),
                v_165 = nil; }
           else record_get(elt(fastget_names, 23), 0); }
#else
             if (v_165 == SPID_NOPROP) v_165 = nil; }}
#endif
    stack[-3] = v_165;
    v_167 = stack[-6];
    v_165 = basic_elt(env, 1); // minus
    if (v_167 == v_165) goto v_32;
    else goto v_33;
v_32:
    stack[-2] = v_166;
    stack[-1] = basic_elt(env, 2); // !(
    stack[0] = stack[-4];
    v_165 = stack[-3];
    v_165 = ncons(v_165);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 7); // ioto_prtbpar
    v_165 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_165);
    }
    env = stack[-7];
    v_166 = v_165;
    v_165 = stack[-6];
    {   LispObject fn = basic_elt(env, 8); // ioto_prtbop
    v_165 = (*qfn2(fn))(fn, v_166, v_165);
    }
    env = stack[-7];
    v_166 = v_165;
    v_167 = v_166;
    v_165 = stack[-5];
    if (!car_legal(v_165)) v_165 = carerror(v_165); else
    v_165 = car(v_165);
    v_166 = v_165;
    v_165 = stack[-3];
    {   LispObject fn = basic_elt(env, 0); // ioto_form2str1
    v_165 = (*qfn3(fn))(fn, v_167, v_166, v_165);
    }
    env = stack[-7];
    v_166 = v_165;
    stack[-1] = v_166;
    stack[0] = basic_elt(env, 3); // !)
    stack[-2] = stack[-4];
    v_165 = stack[-3];
    v_165 = ncons(v_165);
    env = stack[-7];
    {
        LispObject v_175 = stack[-1];
        LispObject v_176 = stack[0];
        LispObject v_177 = stack[-2];
        LispObject fn = basic_elt(env, 7); // ioto_prtbpar
        return (*qfn4up(fn))(fn, v_175, v_176, v_177, v_165);
    }
v_33:
    v_165 = stack[-3];
    if (v_165 == nil) goto v_67;
    stack[-2] = v_166;
    stack[-1] = basic_elt(env, 2); // !(
    stack[0] = stack[-4];
    v_165 = stack[-3];
    v_165 = ncons(v_165);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 7); // ioto_prtbpar
    v_165 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_165);
    }
    env = stack[-7];
    v_166 = v_165;
    v_167 = v_166;
    v_165 = stack[-5];
    if (!car_legal(v_165)) v_166 = carerror(v_165); else
    v_166 = car(v_165);
    v_165 = stack[-3];
    {   LispObject fn = basic_elt(env, 0); // ioto_form2str1
    v_165 = (*qfn3(fn))(fn, v_167, v_166, v_165);
    }
    env = stack[-7];
    v_166 = v_165;
    v_165 = stack[-5];
    if (!car_legal(v_165)) v_165 = cdrerror(v_165); else
    v_165 = cdr(v_165);
    stack[-1] = v_165;
v_83:
    v_165 = stack[-1];
    if (v_165 == nil) goto v_88;
    else goto v_89;
v_88:
    goto v_82;
v_89:
    v_165 = stack[-1];
    if (!car_legal(v_165)) v_165 = carerror(v_165); else
    v_165 = car(v_165);
    stack[0] = v_165;
    v_167 = stack[-6];
    v_165 = basic_elt(env, 4); // plus
    if (v_167 == v_165) goto v_102;
    v_165 = lisp_true;
    goto v_100;
v_102:
    v_167 = stack[0];
    v_165 = basic_elt(env, 1); // minus
    v_165 = Leqcar(nil, v_167, v_165);
    env = stack[-7];
    v_165 = (v_165 == nil ? lisp_true : nil);
    goto v_100;
    v_165 = nil;
v_100:
    if (v_165 == nil) goto v_98;
    v_165 = stack[-6];
    {   LispObject fn = basic_elt(env, 8); // ioto_prtbop
    v_165 = (*qfn2(fn))(fn, v_166, v_165);
    }
    env = stack[-7];
    v_166 = v_165;
    goto v_96;
v_98:
v_96:
    v_167 = v_166;
    v_166 = stack[0];
    v_165 = stack[-3];
    {   LispObject fn = basic_elt(env, 0); // ioto_form2str1
    v_165 = (*qfn3(fn))(fn, v_167, v_166, v_165);
    }
    env = stack[-7];
    v_166 = v_165;
    v_165 = stack[-1];
    if (!car_legal(v_165)) v_165 = cdrerror(v_165); else
    v_165 = cdr(v_165);
    stack[-1] = v_165;
    goto v_83;
v_82:
    stack[-1] = v_166;
    stack[0] = basic_elt(env, 3); // !)
    stack[-2] = stack[-4];
    v_165 = stack[-3];
    v_165 = ncons(v_165);
    env = stack[-7];
    {
        LispObject v_178 = stack[-1];
        LispObject v_179 = stack[0];
        LispObject v_180 = stack[-2];
        LispObject fn = basic_elt(env, 7); // ioto_prtbpar
        return (*qfn4up(fn))(fn, v_178, v_179, v_180, v_165);
    }
v_67:
    v_165 = stack[-6];
    {   LispObject fn = basic_elt(env, 8); // ioto_prtbop
    v_165 = (*qfn2(fn))(fn, v_166, v_165);
    }
    env = stack[-7];
    v_166 = v_165;
    v_165 = basic_elt(env, 2); // !(
    {   LispObject fn = basic_elt(env, 6); // ioto_prtb
    v_165 = (*qfn2(fn))(fn, v_166, v_165);
    }
    env = stack[-7];
    v_166 = v_165;
    v_165 = stack[-5];
    stack[0] = v_165;
v_137:
    v_165 = stack[0];
    if (v_165 == nil) goto v_141;
    else goto v_142;
v_141:
    goto v_136;
v_142:
    v_167 = v_166;
    v_165 = stack[0];
    if (!car_legal(v_165)) v_166 = carerror(v_165); else
    v_166 = car(v_165);
    v_165 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {   LispObject fn = basic_elt(env, 0); // ioto_form2str1
    v_165 = (*qfn3(fn))(fn, v_167, v_166, v_165);
    }
    env = stack[-7];
    v_166 = v_165;
    v_165 = stack[0];
    if (!car_legal(v_165)) v_165 = cdrerror(v_165); else
    v_165 = cdr(v_165);
    if (v_165 == nil) goto v_155;
    v_165 = basic_elt(env, 5); // !,
    goto v_153;
v_155:
    v_165 = basic_elt(env, 3); // !)
    goto v_153;
    v_165 = nil;
v_153:
    {   LispObject fn = basic_elt(env, 6); // ioto_prtb
    v_165 = (*qfn2(fn))(fn, v_166, v_165);
    }
    env = stack[-7];
    v_166 = v_165;
    v_165 = stack[0];
    if (!car_legal(v_165)) v_165 = cdrerror(v_165); else
    v_165 = cdr(v_165);
    stack[0] = v_165;
    goto v_137;
v_136:
    v_165 = v_166;
    return onevalue(v_165);
}



// Code for lambdafun

static LispObject CC_lambdafun(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_9;
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
    v_9 = Lreverse(nil, v_9);
    if (!car_legal(v_9)) v_9 = carerror(v_9); else
    v_9 = car(v_9);
    return onevalue(v_9);
}



// Code for ft!:zerop

static LispObject CC_ftTzerop(LispObject env,
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
    v_25 = v_2;
// end of prologue
    stack[0] = v_25;
    v_26 = static_cast<LispObject>(160)+TAG_FIXNUM; // 10
    v_25 = qvalue(basic_elt(env, 1)); // !:prec!:
    v_25 = Lexpt(nil, v_26, v_25);
    env = stack[-1];
    v_25 = times2(stack[0], v_25);
    env = stack[-1];
    stack[0] = v_25;
    v_26 = stack[0];
    v_25 = static_cast<LispObject>(-800)+TAG_FIXNUM; // -50
    v_25 = static_cast<LispObject>(greaterp2(v_26, v_25));
    v_25 = v_25 ? lisp_true : nil;
    if (v_25 == nil) goto v_14;
    else goto v_15;
v_14:
    v_25 = nil;
    goto v_13;
v_15:
    v_26 = stack[0];
    v_25 = static_cast<LispObject>(800)+TAG_FIXNUM; // 50
        return Llessp_2(nil, v_26, v_25);
    v_25 = nil;
v_13:
    return onevalue(v_25);
}



// Code for oldmtch

static LispObject CC_oldmtch(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_58, v_59, v_60;
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
    v_58 = stack[-2];
    if (!car_legal(v_58)) v_60 = cdrerror(v_58); else
    v_60 = cdr(v_58);
    v_58 = stack[-1];
    if (!car_legal(v_58)) v_59 = carerror(v_58); else
    v_59 = car(v_58);
    v_58 = stack[-2];
    if (!car_legal(v_58)) v_58 = carerror(v_58); else
    v_58 = car(v_58);
    {   LispObject fn = basic_elt(env, 1); // mcharg
    v_58 = (*qfn3(fn))(fn, v_60, v_59, v_58);
    }
    env = stack[-4];
    stack[0] = v_58;
v_18:
    v_58 = stack[0];
    if (v_58 == nil) goto v_21;
    v_58 = stack[-3];
    if (v_58 == nil) goto v_25;
    else goto v_21;
v_25:
    goto v_22;
v_21:
    goto v_17;
v_22:
    v_58 = stack[0];
    if (!car_legal(v_58)) v_59 = carerror(v_58); else
    v_59 = car(v_58);
    v_58 = stack[-1];
    if (!car_legal(v_58)) v_58 = cdrerror(v_58); else
    v_58 = cdr(v_58);
    if (!car_legal(v_58)) v_58 = carerror(v_58); else
    v_58 = car(v_58);
    if (!car_legal(v_58)) v_58 = cdrerror(v_58); else
    v_58 = cdr(v_58);
    v_58 = Lsubla(nil, v_59, v_58);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 2); // eval
    v_58 = (*qfn1(fn))(fn, v_58);
    }
    env = stack[-4];
    if (v_58 == nil) goto v_31;
    v_58 = stack[0];
    if (!car_legal(v_58)) v_59 = carerror(v_58); else
    v_59 = car(v_58);
    v_58 = stack[-1];
    if (!car_legal(v_58)) v_58 = cdrerror(v_58); else
    v_58 = cdr(v_58);
    if (!car_legal(v_58)) v_58 = cdrerror(v_58); else
    v_58 = cdr(v_58);
    if (!car_legal(v_58)) v_58 = carerror(v_58); else
    v_58 = car(v_58);
    v_58 = Lsubla(nil, v_59, v_58);
    env = stack[-4];
    goto v_29;
v_31:
    v_58 = nil;
v_29:
    stack[-3] = v_58;
    v_58 = stack[0];
    if (!car_legal(v_58)) v_58 = cdrerror(v_58); else
    v_58 = cdr(v_58);
    stack[0] = v_58;
    goto v_18;
v_17:
    v_58 = stack[-3];
    if (v_58 == nil) goto v_52;
    v_58 = stack[-3];
    goto v_50;
v_52:
    v_58 = stack[-2];
    goto v_50;
    v_58 = nil;
v_50:
    return onevalue(v_58);
}



// Code for dipev2f

static LispObject CC_dipev2f(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_39 = stack[-1];
    if (v_39 == nil) goto v_10;
    else goto v_11;
v_10:
    v_39 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_6;
v_11:
    v_39 = stack[-1];
    if (!car_legal(v_39)) v_40 = carerror(v_39); else
    v_40 = car(v_39);
    v_39 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_40 == v_39) goto v_14;
    else goto v_15;
v_14:
    v_39 = stack[-1];
    if (!car_legal(v_39)) v_39 = cdrerror(v_39); else
    v_39 = cdr(v_39);
    stack[-1] = v_39;
    v_39 = stack[0];
    if (!car_legal(v_39)) v_39 = cdrerror(v_39); else
    v_39 = cdr(v_39);
    stack[0] = v_39;
    goto v_7;
v_15:
    v_39 = stack[0];
    if (!car_legal(v_39)) v_40 = carerror(v_39); else
    v_40 = car(v_39);
    v_39 = stack[-1];
    if (!car_legal(v_39)) v_39 = carerror(v_39); else
    v_39 = car(v_39);
    {   LispObject fn = basic_elt(env, 1); // to
    v_40 = (*qfn2(fn))(fn, v_40, v_39);
    }
    env = stack[-3];
    v_39 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_39 = cons(v_40, v_39);
    env = stack[-3];
    stack[-2] = ncons(v_39);
    env = stack[-3];
    v_39 = stack[-1];
    if (!car_legal(v_39)) v_40 = cdrerror(v_39); else
    v_40 = cdr(v_39);
    v_39 = stack[0];
    if (!car_legal(v_39)) v_39 = cdrerror(v_39); else
    v_39 = cdr(v_39);
    {   LispObject fn = basic_elt(env, 0); // dipev2f
    v_39 = (*qfn2(fn))(fn, v_40, v_39);
    }
    env = stack[-3];
    {
        LispObject v_44 = stack[-2];
        LispObject fn = basic_elt(env, 2); // multf
        return (*qfn2(fn))(fn, v_44, v_39);
    }
    v_39 = nil;
v_6:
    return onevalue(v_39);
}



// Code for sfpx1

static LispObject CC_sfpx1(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_162, v_163;
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(9);
// copy arguments values to proper place
    stack[-4] = v_6;
    stack[0] = v_5;
    stack[-1] = v_4;
    stack[-5] = v_3;
    v_162 = v_2;
// end of prologue
    v_163 = v_162;
    if (!consp(v_163)) goto v_23;
    else goto v_24;
v_23:
    v_163 = lisp_true;
    goto v_22;
v_24:
    v_163 = v_162;
    if (!car_legal(v_163)) v_163 = carerror(v_163); else
    v_163 = car(v_163);
    v_163 = (consp(v_163) ? nil : lisp_true);
    goto v_22;
    v_163 = nil;
v_22:
    if (v_163 == nil) goto v_20;
    v_162 = lisp_true;
    goto v_15;
v_20:
    v_163 = v_162;
    v_163 = Lconsp(nil, v_163);
    env = stack[-8];
    if (v_163 == nil) goto v_35;
    else goto v_36;
v_35:
    v_162 = nil;
    goto v_15;
v_36:
    v_163 = v_162;
    if (!car_legal(v_163)) v_163 = carerror(v_163); else
    v_163 = car(v_163);
    if (!car_legal(v_162)) v_162 = cdrerror(v_162); else
    v_162 = cdr(v_162);
    stack[-6] = v_162;
    v_162 = v_163;
    v_162 = Lconsp(nil, v_162);
    env = stack[-8];
    if (v_162 == nil) goto v_46;
    else goto v_47;
v_46:
    v_162 = nil;
    goto v_15;
v_47:
    v_162 = v_163;
    if (!car_legal(v_162)) v_162 = cdrerror(v_162); else
    v_162 = cdr(v_162);
    stack[-2] = v_162;
    v_162 = v_163;
    if (!car_legal(v_162)) v_162 = carerror(v_162); else
    v_162 = car(v_162);
    stack[-3] = v_162;
    v_162 = stack[-3];
    v_162 = Lconsp(nil, v_162);
    env = stack[-8];
    if (v_162 == nil) goto v_57;
    else goto v_58;
v_57:
    v_162 = nil;
    goto v_15;
v_58:
    v_162 = stack[-3];
    if (!car_legal(v_162)) v_162 = carerror(v_162); else
    v_162 = car(v_162);
    stack[-7] = v_162;
    v_162 = stack[-7];
    {   LispObject fn = basic_elt(env, 1); // assert_kernelp
    v_162 = (*qfn1(fn))(fn, v_162);
    }
    env = stack[-8];
    if (v_162 == nil) goto v_66;
    else goto v_67;
v_66:
    v_162 = nil;
    goto v_15;
v_67:
    v_162 = stack[-3];
    if (!car_legal(v_162)) v_162 = cdrerror(v_162); else
    v_162 = cdr(v_162);
    stack[-3] = v_162;
    v_163 = stack[-7];
    v_162 = stack[-1];
    if (v_163 == v_162) goto v_75;
    else goto v_76;
v_75:
    v_163 = stack[-3];
    v_162 = stack[0];
    v_162 = static_cast<LispObject>(lessp2(v_163, v_162));
    v_162 = v_162 ? lisp_true : nil;
    env = stack[-8];
    if (v_162 == nil) goto v_81;
    else goto v_82;
v_81:
    v_162 = nil;
    goto v_80;
v_82:
    stack[-7] = stack[-2];
    v_163 = stack[-1];
    v_162 = stack[-5];
    stack[-2] = cons(v_163, v_162);
    env = stack[-8];
    stack[0] = nil;
    v_163 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_162 = stack[-4];
    v_162 = list2(v_163, v_162);
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 0); // sfpx1
    v_162 = (*qfn4up(fn))(fn, stack[-7], stack[-2], stack[0], v_162);
    }
    env = stack[-8];
    if (v_162 == nil) goto v_91;
    else goto v_92;
v_91:
    v_162 = nil;
    goto v_90;
v_92:
    stack[0] = stack[-6];
    stack[-2] = stack[-5];
    v_163 = stack[-3];
    v_162 = stack[-4];
    v_162 = list2(v_163, v_162);
    env = stack[-8];
    {
        LispObject v_172 = stack[0];
        LispObject v_173 = stack[-2];
        LispObject v_174 = stack[-1];
        LispObject fn = basic_elt(env, 0); // sfpx1
        return (*qfn4up(fn))(fn, v_172, v_173, v_174, v_162);
    }
    v_162 = nil;
v_90:
    goto v_80;
    v_162 = nil;
v_80:
    goto v_15;
v_76:
    v_162 = stack[-1];
    if (v_162 == nil) goto v_115;
    v_163 = stack[-1];
    v_162 = stack[-5];
    v_162 = cons(v_163, v_162);
    env = stack[-8];
    stack[-5] = v_162;
    goto v_113;
v_115:
v_113:
    v_162 = stack[-4];
    if (v_162 == nil) goto v_123;
    v_162 = stack[-5];
    if (v_162 == nil) goto v_123;
    v_163 = stack[-7];
    v_162 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 2); // to
    stack[0] = (*qfn2(fn))(fn, v_163, v_162);
    }
    env = stack[-8];
    v_162 = stack[-5];
    if (!car_legal(v_162)) v_163 = carerror(v_162); else
    v_163 = car(v_162);
    v_162 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 2); // to
    v_162 = (*qfn2(fn))(fn, v_163, v_162);
    }
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 3); // ordpp
    v_162 = (*qfn2(fn))(fn, stack[0], v_162);
    }
    env = stack[-8];
    if (v_162 == nil) goto v_123;
    v_162 = nil;
    goto v_15;
v_123:
    v_163 = stack[-7];
    v_162 = stack[-5];
    stack[-1] = cons(v_163, v_162);
    env = stack[-8];
    stack[0] = nil;
    v_163 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_162 = stack[-4];
    v_162 = list2(v_163, v_162);
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 0); // sfpx1
    v_162 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_162);
    }
    env = stack[-8];
    if (v_162 == nil) goto v_141;
    else goto v_142;
v_141:
    v_162 = nil;
    goto v_140;
v_142:
    stack[0] = stack[-6];
    stack[-1] = stack[-5];
    stack[-2] = stack[-7];
    v_163 = stack[-3];
    v_162 = stack[-4];
    v_162 = list2(v_163, v_162);
    env = stack[-8];
    {
        LispObject v_175 = stack[0];
        LispObject v_176 = stack[-1];
        LispObject v_177 = stack[-2];
        LispObject fn = basic_elt(env, 0); // sfpx1
        return (*qfn4up(fn))(fn, v_175, v_176, v_177, v_162);
    }
    v_162 = nil;
v_140:
v_15:
    return onevalue(v_162);
}



// Code for pcdiv

static LispObject CC_pcdiv(LispObject env,
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
    stack[-4] = v_3;
    v_52 = v_2;
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
    v_52 = v_53;
    if (!car_legal(v_52)) stack[0] = carerror(v_52); else
    stack[0] = car(v_52);
    v_52 = v_53;
    if (!car_legal(v_52)) v_53 = cdrerror(v_52); else
    v_53 = cdr(v_52);
    v_52 = stack[-4];
    {   LispObject fn = basic_elt(env, 1); // cdiv
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
    v_52 = v_53;
    if (!car_legal(v_52)) stack[0] = carerror(v_52); else
    stack[0] = car(v_52);
    v_52 = v_53;
    if (!car_legal(v_52)) v_53 = cdrerror(v_52); else
    v_53 = cdr(v_52);
    v_52 = stack[-4];
    {   LispObject fn = basic_elt(env, 1); // cdiv
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



// Code for sc_rep

static LispObject CC_sc_rep(LispObject env,
                         LispObject v_2)
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
    v_10 = v_2;
// end of prologue
    stack[0] = qvalue(basic_elt(env, 1)); // g_sc_ve
    v_10 = sub1(v_10);
    env = stack[-1];
    v_10 = Lgetv(nil, stack[0], v_10);
    if (!car_legal(v_10)) v_10 = cdrerror(v_10); else
    v_10 = cdr(v_10);
    if (!car_legal(v_10)) v_10 = carerror(v_10); else
    v_10 = car(v_10);
    return onevalue(v_10);
}



// Code for super_der_simp

static LispObject CC_super_der_simp(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_207, v_208, v_209;
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
    real_push(nil);
    stack_popper stack_popper_var(12);
// copy arguments values to proper place
    stack[-9] = v_2;
// end of prologue
    v_207 = stack[-9];
    v_208 = Llength(nil, v_207);
    env = stack[-11];
    v_207 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    if (v_208 == v_207) goto v_6;
    else goto v_7;
v_6:
    v_207 = stack[-9];
    if (!car_legal(v_207)) v_207 = carerror(v_207); else
    v_207 = car(v_207);
    {   LispObject fn = basic_elt(env, 6); // reval
    v_207 = (*qfn1(fn))(fn, v_207);
    }
    env = stack[-11];
    stack[-10] = v_207;
    v_208 = stack[-10];
    v_207 = basic_elt(env, 1); // variables
    v_207 = get(v_208, v_207);
    env = stack[-11];
    stack[-8] = v_207;
    v_207 = stack[-9];
    if (!car_legal(v_207)) v_207 = cdrerror(v_207); else
    v_207 = cdr(v_207);
    if (!car_legal(v_207)) v_207 = carerror(v_207); else
    v_207 = car(v_207);
    {   LispObject fn = basic_elt(env, 7); // simp!*
    v_207 = (*qfn1(fn))(fn, v_207);
    }
    env = stack[-11];
    stack[-9] = v_207;
    v_207 = stack[-9];
    if (!car_legal(v_207)) v_208 = carerror(v_207); else
    v_208 = car(v_207);
    v_207 = basic_elt(env, 2); // (ext)
    {   LispObject fn = basic_elt(env, 8); // split_form
    v_207 = (*qfn2(fn))(fn, v_208, v_207);
    }
    env = stack[-11];
    stack[-7] = v_207;
    v_207 = basic_elt(env, 3); // ext
    v_209 = ncons(v_207);
    env = stack[-11];
    v_207 = stack[-7];
    if (!car_legal(v_207)) v_208 = carerror(v_207); else
    v_208 = car(v_207);
    v_207 = stack[-7];
    if (!car_legal(v_207)) v_207 = cdrerror(v_207); else
    v_207 = cdr(v_207);
    v_207 = acons(v_209, v_208, v_207);
    env = stack[-11];
    stack[-7] = v_207;
    v_207 = stack[-9];
    if (!car_legal(v_207)) v_208 = cdrerror(v_207); else
    v_208 = cdr(v_207);
    v_207 = basic_elt(env, 2); // (ext)
    {   LispObject fn = basic_elt(env, 8); // split_form
    v_207 = (*qfn2(fn))(fn, v_208, v_207);
    }
    env = stack[-11];
    stack[-6] = v_207;
    v_207 = basic_elt(env, 3); // ext
    v_209 = ncons(v_207);
    env = stack[-11];
    v_207 = stack[-6];
    if (!car_legal(v_207)) v_208 = carerror(v_207); else
    v_208 = car(v_207);
    v_207 = stack[-6];
    if (!car_legal(v_207)) v_207 = cdrerror(v_207); else
    v_207 = cdr(v_207);
    v_207 = acons(v_209, v_208, v_207);
    env = stack[-11];
    stack[-6] = v_207;
    v_207 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-5] = v_207;
    v_208 = stack[-10];
    v_207 = basic_elt(env, 4); // even_dimension
    v_208 = get(v_208, v_207);
    env = stack[-11];
    v_207 = stack[-5];
    v_207 = difference2(v_208, v_207);
    env = stack[-11];
    v_207 = Lminusp(nil, v_207);
    env = stack[-11];
    if (v_207 == nil) goto v_61;
    v_207 = nil;
    goto v_55;
v_61:
    v_209 = stack[-10];
    v_208 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_207 = stack[-5];
    v_207 = list3(v_209, v_208, v_207);
    env = stack[-11];
    {   LispObject fn = basic_elt(env, 7); // simp!*
    v_207 = (*qfn1(fn))(fn, v_207);
    }
    env = stack[-11];
    stack[-1] = v_207;
    v_208 = stack[-8];
    v_207 = stack[-5];
    {   LispObject fn = basic_elt(env, 9); // nth
    stack[0] = (*qfn2(fn))(fn, v_208, v_207);
    }
    env = stack[-11];
    v_208 = stack[-1];
    v_207 = basic_elt(env, 2); // (ext)
    {   LispObject fn = basic_elt(env, 10); // split_ext
    v_207 = (*qfn2(fn))(fn, v_208, v_207);
    }
    env = stack[-11];
    v_207 = cons(stack[0], v_207);
    env = stack[-11];
    v_207 = ncons(v_207);
    env = stack[-11];
    stack[-3] = v_207;
    stack[-4] = v_207;
v_56:
    v_207 = stack[-5];
    v_207 = add1(v_207);
    env = stack[-11];
    stack[-5] = v_207;
    v_208 = stack[-10];
    v_207 = basic_elt(env, 4); // even_dimension
    v_208 = get(v_208, v_207);
    env = stack[-11];
    v_207 = stack[-5];
    v_207 = difference2(v_208, v_207);
    env = stack[-11];
    v_207 = Lminusp(nil, v_207);
    env = stack[-11];
    if (v_207 == nil) goto v_88;
    v_207 = stack[-4];
    goto v_55;
v_88:
    stack[-2] = stack[-3];
    v_209 = stack[-10];
    v_208 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_207 = stack[-5];
    v_207 = list3(v_209, v_208, v_207);
    env = stack[-11];
    {   LispObject fn = basic_elt(env, 7); // simp!*
    v_207 = (*qfn1(fn))(fn, v_207);
    }
    env = stack[-11];
    stack[-1] = v_207;
    v_208 = stack[-8];
    v_207 = stack[-5];
    {   LispObject fn = basic_elt(env, 9); // nth
    stack[0] = (*qfn2(fn))(fn, v_208, v_207);
    }
    env = stack[-11];
    v_208 = stack[-1];
    v_207 = basic_elt(env, 2); // (ext)
    {   LispObject fn = basic_elt(env, 10); // split_ext
    v_207 = (*qfn2(fn))(fn, v_208, v_207);
    }
    env = stack[-11];
    v_207 = cons(stack[0], v_207);
    env = stack[-11];
    v_207 = ncons(v_207);
    env = stack[-11];
    if (!car_legal(stack[-2])) rplacd_fails(stack[-2]);
    setcdr(stack[-2], v_207);
    v_207 = stack[-3];
    if (!car_legal(v_207)) v_207 = cdrerror(v_207); else
    v_207 = cdr(v_207);
    stack[-3] = v_207;
    goto v_56;
v_55:
    stack[-5] = v_207;
    v_207 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-4] = v_207;
    v_208 = stack[-10];
    v_207 = basic_elt(env, 5); // odd_dimension
    v_208 = get(v_208, v_207);
    env = stack[-11];
    v_207 = stack[-4];
    v_207 = difference2(v_208, v_207);
    env = stack[-11];
    v_207 = Lminusp(nil, v_207);
    env = stack[-11];
    if (v_207 == nil) goto v_124;
    v_207 = nil;
    goto v_118;
v_124:
    v_209 = stack[-10];
    v_208 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_207 = stack[-4];
    v_207 = list3(v_209, v_208, v_207);
    env = stack[-11];
    {   LispObject fn = basic_elt(env, 7); // simp!*
    v_207 = (*qfn1(fn))(fn, v_207);
    }
    env = stack[-11];
    stack[0] = stack[-4];
    v_208 = v_207;
    v_207 = basic_elt(env, 2); // (ext)
    {   LispObject fn = basic_elt(env, 10); // split_ext
    v_207 = (*qfn2(fn))(fn, v_208, v_207);
    }
    env = stack[-11];
    v_207 = cons(stack[0], v_207);
    env = stack[-11];
    v_207 = ncons(v_207);
    env = stack[-11];
    stack[-2] = v_207;
    stack[-3] = v_207;
v_119:
    v_207 = stack[-4];
    v_207 = add1(v_207);
    env = stack[-11];
    stack[-4] = v_207;
    v_208 = stack[-10];
    v_207 = basic_elt(env, 5); // odd_dimension
    v_208 = get(v_208, v_207);
    env = stack[-11];
    v_207 = stack[-4];
    v_207 = difference2(v_208, v_207);
    env = stack[-11];
    v_207 = Lminusp(nil, v_207);
    env = stack[-11];
    if (v_207 == nil) goto v_149;
    v_207 = stack[-3];
    goto v_118;
v_149:
    stack[-1] = stack[-2];
    v_209 = stack[-10];
    v_208 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_207 = stack[-4];
    v_207 = list3(v_209, v_208, v_207);
    env = stack[-11];
    {   LispObject fn = basic_elt(env, 7); // simp!*
    v_207 = (*qfn1(fn))(fn, v_207);
    }
    env = stack[-11];
    stack[0] = stack[-4];
    v_208 = v_207;
    v_207 = basic_elt(env, 2); // (ext)
    {   LispObject fn = basic_elt(env, 10); // split_ext
    v_207 = (*qfn2(fn))(fn, v_208, v_207);
    }
    env = stack[-11];
    v_207 = cons(stack[0], v_207);
    env = stack[-11];
    v_207 = ncons(v_207);
    env = stack[-11];
    if (!car_legal(stack[-1])) rplacd_fails(stack[-1]);
    setcdr(stack[-1], v_207);
    v_207 = stack[-2];
    if (!car_legal(v_207)) v_207 = cdrerror(v_207); else
    v_207 = cdr(v_207);
    stack[-2] = v_207;
    goto v_119;
v_118:
    stack[-1] = v_207;
    v_208 = stack[-5];
    v_207 = stack[-7];
    {   LispObject fn = basic_elt(env, 11); // even_action
    stack[0] = (*qfn2(fn))(fn, v_208, v_207);
    }
    env = stack[-11];
    v_208 = stack[-1];
    v_207 = stack[-7];
    {   LispObject fn = basic_elt(env, 12); // odd_action
    v_207 = (*qfn2(fn))(fn, v_208, v_207);
    }
    env = stack[-11];
    {   LispObject fn = basic_elt(env, 13); // addsq
    stack[0] = (*qfn2(fn))(fn, stack[0], v_207);
    }
    env = stack[-11];
    v_207 = stack[-9];
    if (!car_legal(v_207)) v_208 = cdrerror(v_207); else
    v_208 = cdr(v_207);
    v_207 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_207 = cons(v_208, v_207);
    env = stack[-11];
    {   LispObject fn = basic_elt(env, 14); // quotsq
    stack[0] = (*qfn2(fn))(fn, stack[0], v_207);
    }
    env = stack[-11];
    v_208 = stack[-5];
    v_207 = stack[-6];
    {   LispObject fn = basic_elt(env, 11); // even_action
    stack[-1] = (*qfn2(fn))(fn, v_208, v_207);
    }
    env = stack[-11];
    v_207 = stack[-9];
    if (!car_legal(v_207)) v_208 = carerror(v_207); else
    v_208 = car(v_207);
    v_207 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_207 = cons(v_208, v_207);
    env = stack[-11];
    {   LispObject fn = basic_elt(env, 15); // super_product_sq
    stack[-1] = (*qfn2(fn))(fn, stack[-1], v_207);
    }
    env = stack[-11];
    v_207 = stack[-9];
    if (!car_legal(v_207)) v_208 = cdrerror(v_207); else
    v_208 = cdr(v_207);
    v_207 = stack[-9];
    if (!car_legal(v_207)) v_207 = cdrerror(v_207); else
    v_207 = cdr(v_207);
    {   LispObject fn = basic_elt(env, 16); // multf
    v_208 = (*qfn2(fn))(fn, v_208, v_207);
    }
    env = stack[-11];
    v_207 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_207 = cons(v_208, v_207);
    env = stack[-11];
    {   LispObject fn = basic_elt(env, 14); // quotsq
    v_207 = (*qfn2(fn))(fn, stack[-1], v_207);
    }
    env = stack[-11];
    {   LispObject fn = basic_elt(env, 17); // negsq
    v_207 = (*qfn1(fn))(fn, v_207);
    }
    env = stack[-11];
    {
        LispObject v_221 = stack[0];
        LispObject fn = basic_elt(env, 13); // addsq
        return (*qfn2(fn))(fn, v_221, v_207);
    }
    goto v_5;
v_7:
    v_207 = stack[-9];
    {
        LispObject fn = basic_elt(env, 18); // simpiden
        return (*qfn1(fn))(fn, v_207);
    }
    v_207 = nil;
v_5:
    return onevalue(v_207);
}



// Code for yylex

static LispObject CC_yylex(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// end of prologue
    stack[-2] = nil;
    {   LispObject fn = basic_elt(env, 14); // lex_basic_token
    v_150 = (*qfn0(fn))(fn);
    }
    env = stack[-4];
    stack[0] = v_150;
v_11:
    v_150 = stack[-2];
    if (v_150 == nil) goto v_18;
    else goto v_19;
v_18:
    v_151 = stack[0];
    v_150 = qvalue(basic_elt(env, 1)); // lex_symbol_code
    if (equal(v_151, v_150)) goto v_23;
    else goto v_24;
v_23:
    v_150 = qvalue(basic_elt(env, 2)); // lex_escaped
    if (v_150 == nil) goto v_29;
    else goto v_30;
v_29:
    v_151 = qvalue(basic_elt(env, 3)); // lexer_style!*
    v_150 = static_cast<LispObject>(1024)+TAG_FIXNUM; // 64
    {   LispObject fn = basic_elt(env, 15); // land
    v_150 = (*qfn2(fn))(fn, v_151, v_150);
    }
    env = stack[-4];
    v_150 = static_cast<LispObject>(zerop(v_150));
    v_150 = v_150 ? lisp_true : nil;
    env = stack[-4];
    v_150 = (v_150 == nil ? lisp_true : nil);
    goto v_28;
v_30:
    v_150 = nil;
    goto v_28;
    v_150 = nil;
v_28:
    goto v_22;
v_24:
    v_150 = nil;
    goto v_22;
    v_150 = nil;
v_22:
    goto v_17;
v_19:
    v_150 = nil;
    goto v_17;
    v_150 = nil;
v_17:
    if (v_150 == nil) goto v_14;
    else goto v_15;
v_14:
    goto v_10;
v_15:
    {   LispObject fn = basic_elt(env, 16); // lex_process_directive
    v_150 = (*qfn0(fn))(fn);
    }
    env = stack[-4];
    if (v_150 == nil) goto v_50;
    {   LispObject fn = basic_elt(env, 14); // lex_basic_token
    v_150 = (*qfn0(fn))(fn);
    }
    env = stack[-4];
    stack[0] = v_150;
    goto v_48;
v_50:
    v_151 = qvalue(basic_elt(env, 4)); // yylval
    v_150 = basic_elt(env, 5); // !#define
    if (v_151 == v_150) goto v_53;
    else goto v_54;
v_53:
    {   LispObject fn = basic_elt(env, 17); // read_s_expression
    v_150 = (*qfn0(fn))(fn);
    }
    env = stack[-4];
    v_150 = qvalue(basic_elt(env, 4)); // yylval
    stack[0] = v_150;
    {   LispObject fn = basic_elt(env, 17); // read_s_expression
    v_150 = (*qfn0(fn))(fn);
    }
    env = stack[-4];
    v_150 = qvalue(basic_elt(env, 4)); // yylval
    stack[-3] = v_150;
    v_150 = stack[0];
    if (symbolp(v_150)) goto v_65;
    else goto v_64;
v_65:
    v_150 = stack[-3];
    if (symbolp(v_150)) goto v_67;
    v_150 = stack[-3];
    if (is_number(v_150)) goto v_67;
    v_150 = stack[-3];
    v_150 = Lstringp(nil, v_150);
    env = stack[-4];
    if (v_150 == nil) goto v_73;
    else goto v_67;
v_73:
    goto v_64;
v_67:
    v_150 = Lposn(nil);
    env = stack[-4];
    v_150 = static_cast<LispObject>(zerop(v_150));
    v_150 = v_150 ? lisp_true : nil;
    env = stack[-4];
    if (v_150 == nil) goto v_78;
    else goto v_79;
v_78:
    v_150 = Lterpri(nil);
    env = stack[-4];
    goto v_77;
v_79:
v_77:
    v_150 = basic_elt(env, 6); // "+++ "
    v_150 = Lprinc(nil, v_150);
    env = stack[-4];
    v_150 = stack[0];
    v_150 = Lprin(nil, v_150);
    env = stack[-4];
    v_150 = basic_elt(env, 7); // " => "
    v_150 = Lprinc(nil, v_150);
    env = stack[-4];
    v_150 = stack[-3];
    v_150 = Lprint(nil, v_150);
    env = stack[-4];
    stack[-1] = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[0] = basic_elt(env, 5); // !#define
    v_150 = stack[-3];
    v_150 = ncons(v_150);
    env = stack[-4];
    v_150 = Lputprop(nil, stack[-1], stack[0], v_150);
    env = stack[-4];
    goto v_62;
v_64:
v_62:
    {   LispObject fn = basic_elt(env, 14); // lex_basic_token
    v_150 = (*qfn0(fn))(fn);
    }
    env = stack[-4];
    stack[0] = v_150;
    goto v_48;
v_54:
    v_151 = qvalue(basic_elt(env, 4)); // yylval
    v_150 = basic_elt(env, 8); // !#eval
    if (v_151 == v_150) goto v_97;
    else goto v_98;
v_97:
    {   LispObject fn = basic_elt(env, 17); // read_s_expression
    v_150 = (*qfn0(fn))(fn);
    }
    env = stack[-4];
    v_152 = qvalue(basic_elt(env, 4)); // yylval
    v_151 = nil;
    v_150 = nil;
    {   LispObject fn = basic_elt(env, 18); // errorset
    v_150 = (*qfn3(fn))(fn, v_152, v_151, v_150);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 14); // lex_basic_token
    v_150 = (*qfn0(fn))(fn);
    }
    env = stack[-4];
    stack[0] = v_150;
    goto v_48;
v_98:
    v_151 = qvalue(basic_elt(env, 4)); // yylval
    v_150 = basic_elt(env, 5); // !#define
    v_150 = get(v_151, v_150);
    env = stack[-4];
    stack[-3] = v_150;
    if (v_150 == nil) goto v_108;
    v_150 = stack[-3];
    if (!car_legal(v_150)) v_150 = carerror(v_150); else
    v_150 = car(v_150);
    setvalue(basic_elt(env, 4), v_150); // yylval
    v_150 = stack[-3];
    if (is_number(v_150)) goto v_116;
    else goto v_117;
v_116:
    v_150 = qvalue(basic_elt(env, 9)); // lex_number_code
    stack[0] = v_150;
    goto v_115;
v_117:
    v_150 = stack[-3];
    v_150 = Lstringp(nil, v_150);
    env = stack[-4];
    if (v_150 == nil) goto v_121;
    v_150 = qvalue(basic_elt(env, 10)); // lex_string_code
    stack[0] = v_150;
    goto v_115;
v_121:
v_115:
    v_150 = lisp_true;
    stack[-2] = v_150;
    goto v_48;
v_108:
    v_150 = lisp_true;
    stack[-2] = v_150;
    goto v_48;
v_48:
    goto v_11;
v_10:
    v_150 = qvalue(basic_elt(env, 11)); // !*tracelex
    if (v_150 == nil) goto v_132;
    v_151 = Lposn(nil);
    env = stack[-4];
    v_150 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_151 == v_150) goto v_137;
    v_150 = Lterpri(nil);
    env = stack[-4];
    goto v_135;
v_137:
v_135:
    v_150 = basic_elt(env, 12); // "yylex = "
    v_150 = Lprinc(nil, v_150);
    env = stack[-4];
    v_150 = qvalue(basic_elt(env, 4)); // yylval
    v_150 = Lprin(nil, v_150);
    env = stack[-4];
    v_150 = basic_elt(env, 13); // " type "
    v_150 = Lprinc(nil, v_150);
    env = stack[-4];
    v_150 = stack[0];
    v_150 = Lprint(nil, v_150);
    goto v_130;
v_132:
v_130:
    v_150 = stack[0];
    return onevalue(v_150);
}



// Code for outrdefun

static LispObject CC_outrdefun(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    v_107 = stack[-2];
    v_106 = stack[-1];
    {   LispObject fn = basic_elt(env, 14); // qtypnm
    v_106 = (*qfn2(fn))(fn, v_107, v_106);
    }
    env = stack[-4];
    stack[-2] = v_106;
    v_107 = stack[-2];
    v_106 = basic_elt(env, 1); // defd
    v_106 = Lflagp(nil, v_107, v_106);
    env = stack[-4];
    if (v_106 == nil) goto v_14;
    v_107 = stack[-2];
    v_106 = stack[-1];
    {   LispObject fn = basic_elt(env, 15); // recref
    v_106 = (*qfn2(fn))(fn, v_107, v_106);
    }
    env = stack[-4];
    goto v_12;
v_14:
    v_106 = stack[-2];
    v_107 = ncons(v_106);
    env = stack[-4];
    v_106 = basic_elt(env, 1); // defd
    v_106 = Lflag(nil, v_107, v_106);
    env = stack[-4];
    goto v_12;
v_12:
    v_107 = stack[-1];
    v_106 = basic_elt(env, 2); // function
    v_106 = Lflagp(nil, v_107, v_106);
    env = stack[-4];
    if (v_106 == nil) goto v_34;
    v_107 = stack[-2];
    v_106 = basic_elt(env, 3); // dclglb
    v_106 = Lflagp(nil, v_107, v_106);
    env = stack[-4];
    if (v_106 == nil) goto v_41;
    v_106 = lisp_true;
    goto v_39;
v_41:
    v_107 = stack[-2];
    v_106 = qvalue(basic_elt(env, 4)); // locls!*
    v_106 = Lassoc(nil, v_107, v_106);
    goto v_39;
    v_106 = nil;
v_39:
    goto v_32;
v_34:
    v_106 = nil;
    goto v_32;
    v_106 = nil;
v_32:
    if (v_106 == nil) goto v_30;
    v_106 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {   LispObject fn = basic_elt(env, 16); // qerline
    v_106 = (*qfn1(fn))(fn, v_106);
    }
    env = stack[-4];
    v_106 = basic_elt(env, 5); // "**** Variable "
    v_106 = Lprinc(nil, v_106);
    env = stack[-4];
    v_106 = stack[-2];
    {   LispObject fn = basic_elt(env, 17); // princng
    v_106 = (*qfn1(fn))(fn, v_106);
    }
    env = stack[-4];
    v_106 = basic_elt(env, 6); // " defined as function"
    v_106 = Lprinc(nil, v_106);
    env = stack[-4];
    v_106 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {   LispObject fn = basic_elt(env, 18); // newline
    v_106 = (*qfn1(fn))(fn, v_106);
    }
    env = stack[-4];
    goto v_28;
v_30:
v_28:
    v_106 = stack[0];
    if (v_106 == nil) goto v_67;
    v_107 = stack[-1];
    v_106 = basic_elt(env, 7); // naryarg
    v_106 = Lflagp(nil, v_107, v_106);
    env = stack[-4];
    if (v_106 == nil) goto v_70;
    else goto v_67;
v_70:
    v_107 = stack[-2];
    v_106 = stack[0];
    {   LispObject fn = basic_elt(env, 19); // defineargs
    v_106 = (*qfn2(fn))(fn, v_107, v_106);
    }
    env = stack[-4];
    goto v_65;
v_67:
    v_107 = stack[-1];
    v_106 = basic_elt(env, 7); // naryarg
    v_106 = Lflagp(nil, v_107, v_106);
    env = stack[-4];
    if (v_106 == nil) goto v_82;
    v_107 = stack[-2];
    v_106 = basic_elt(env, 8); // naryargs
    v_106 = Lflagp(nil, v_107, v_106);
    env = stack[-4];
    v_106 = (v_106 == nil ? lisp_true : nil);
    goto v_80;
v_82:
    v_106 = nil;
    goto v_80;
    v_106 = nil;
v_80:
    if (v_106 == nil) goto v_78;
    v_106 = stack[-2];
    v_107 = ncons(v_106);
    env = stack[-4];
    v_106 = basic_elt(env, 8); // naryargs
    v_106 = Lflag(nil, v_107, v_106);
    env = stack[-4];
    goto v_65;
v_78:
v_65:
    stack[-3] = stack[-2];
    stack[0] = basic_elt(env, 9); // gall
    v_107 = qvalue(basic_elt(env, 10)); // curlin!*
    v_106 = stack[-1];
    v_106 = cons(v_107, v_106);
    env = stack[-4];
    v_106 = Lputprop(nil, stack[-3], stack[0], v_106);
    env = stack[-4];
    v_106 = nil;
    setvalue(basic_elt(env, 11), v_106); // globs!*
    v_106 = nil;
    setvalue(basic_elt(env, 12), v_106); // calls!*
    v_106 = stack[-2];
    setvalue(basic_elt(env, 13), v_106); // curfun!*
    return onevalue(v_106);
}



// Code for ofsf_sippsubst

static LispObject CC_ofsf_sippsubst(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_16, v_17, v_18;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_17 = v_3;
    v_18 = v_2;
// end of prologue
    v_16 = v_17;
    if (v_16 == nil) goto v_8;
    v_16 = v_18;
    {
        LispObject fn = basic_elt(env, 1); // ofsf_sippsubst1
        return (*qfn2(fn))(fn, v_16, v_17);
    }
v_8:
    v_16 = v_18;
    goto v_6;
    v_16 = nil;
v_6:
    return onevalue(v_16);
}



// Code for ofsf_surep

static LispObject CC_ofsf_surep(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_11, v_12, v_13;
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
    v_13 = v_12;
    v_12 = v_11;
    v_11 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    {   LispObject fn = basic_elt(env, 2); // cl_simpl
    v_11 = (*qfn3(fn))(fn, v_13, v_12, v_11);
    }
    env = stack[0];
    v_12 = basic_elt(env, 1); // true
    v_11 = (v_11 == v_12 ? lisp_true : nil);
    return onevalue(v_11);
}



// Code for matpri

static LispObject CC_matpri(LispObject env,
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
    v_8 = nil;
    {
        LispObject fn = basic_elt(env, 1); // matpri1
        return (*qfn2(fn))(fn, v_9, v_8);
    }
}



// Code for termorder1

static LispObject CC_termorder1(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_55, v_56;
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
    v_55 = stack[-1];
    if (v_55 == nil) goto v_10;
    else goto v_11;
v_10:
    v_55 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_6;
v_11:
    v_55 = stack[-1];
    v_55 = static_cast<LispObject>(zerop(v_55));
    v_55 = v_55 ? lisp_true : nil;
    env = stack[-2];
    if (v_55 == nil) goto v_15;
    v_55 = stack[0];
    v_55 = static_cast<LispObject>(zerop(v_55));
    v_55 = v_55 ? lisp_true : nil;
    env = stack[-2];
    if (v_55 == nil) goto v_15;
    v_55 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_6;
v_15:
    v_55 = stack[-1];
    v_55 = static_cast<LispObject>(zerop(v_55));
    v_55 = v_55 ? lisp_true : nil;
    env = stack[-2];
    if (v_55 == nil) goto v_24;
    v_55 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    goto v_6;
v_24:
    v_55 = stack[0];
    v_55 = static_cast<LispObject>(zerop(v_55));
    v_55 = v_55 ? lisp_true : nil;
    env = stack[-2];
    if (v_55 == nil) goto v_29;
    v_55 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_6;
v_29:
    v_55 = stack[-1];
    if (!car_legal(v_55)) v_56 = carerror(v_55); else
    v_56 = car(v_55);
    v_55 = stack[0];
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    v_55 = static_cast<LispObject>(lessp2(v_56, v_55));
    v_55 = v_55 ? lisp_true : nil;
    env = stack[-2];
    if (v_55 == nil) goto v_34;
    v_55 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    goto v_6;
v_34:
    v_55 = stack[-1];
    if (!car_legal(v_55)) v_56 = carerror(v_55); else
    v_56 = car(v_55);
    v_55 = stack[0];
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    v_55 = static_cast<LispObject>(greaterp2(v_56, v_55));
    v_55 = v_55 ? lisp_true : nil;
    env = stack[-2];
    if (v_55 == nil) goto v_42;
    v_55 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_6;
v_42:
    v_55 = stack[-1];
    if (!car_legal(v_55)) v_55 = cdrerror(v_55); else
    v_55 = cdr(v_55);
    stack[-1] = v_55;
    v_55 = stack[0];
    if (!car_legal(v_55)) v_55 = cdrerror(v_55); else
    v_55 = cdr(v_55);
    stack[0] = v_55;
    goto v_7;
    v_55 = nil;
v_6:
    return onevalue(v_55);
}



// Code for sfto_b!:extadd

static LispObject CC_sfto_bTextadd(LispObject env,
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    stack[-1] = v_3;
    stack[-2] = v_2;
// end of prologue
    stack[0] = nil;
v_8:
    v_84 = stack[-2];
    if (v_84 == nil) goto v_11;
    else goto v_12;
v_11:
    v_85 = stack[0];
    v_84 = stack[-1];
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn2(fn))(fn, v_85, v_84);
    }
v_12:
    v_84 = stack[-1];
    if (v_84 == nil) goto v_17;
    else goto v_18;
v_17:
    v_85 = stack[0];
    v_84 = stack[-2];
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn2(fn))(fn, v_85, v_84);
    }
v_18:
    v_84 = stack[-2];
    if (!car_legal(v_84)) v_84 = carerror(v_84); else
    v_84 = car(v_84);
    if (!car_legal(v_84)) v_85 = carerror(v_84); else
    v_85 = car(v_84);
    v_84 = stack[-1];
    if (!car_legal(v_84)) v_84 = carerror(v_84); else
    v_84 = car(v_84);
    if (!car_legal(v_84)) v_84 = carerror(v_84); else
    v_84 = car(v_84);
    if (equal(v_85, v_84)) goto v_23;
    else goto v_24;
v_23:
    stack[-3] = stack[0];
    v_84 = stack[-2];
    if (!car_legal(v_84)) v_84 = carerror(v_84); else
    v_84 = car(v_84);
    if (!car_legal(v_84)) v_85 = cdrerror(v_84); else
    v_85 = cdr(v_84);
    v_84 = stack[-1];
    if (!car_legal(v_84)) v_84 = carerror(v_84); else
    v_84 = car(v_84);
    if (!car_legal(v_84)) v_84 = cdrerror(v_84); else
    v_84 = cdr(v_84);
    {   LispObject fn = basic_elt(env, 2); // addf
    stack[0] = (*qfn2(fn))(fn, v_85, v_84);
    }
    env = stack[-4];
    v_84 = stack[-2];
    if (!car_legal(v_84)) v_85 = cdrerror(v_84); else
    v_85 = cdr(v_84);
    v_84 = stack[-1];
    if (!car_legal(v_84)) v_84 = cdrerror(v_84); else
    v_84 = cdr(v_84);
    {   LispObject fn = basic_elt(env, 0); // sfto_b!:extadd
    v_84 = (*qfn2(fn))(fn, v_85, v_84);
    }
    env = stack[-4];
    v_85 = stack[0];
    v_86 = v_85;
    if (v_86 == nil) goto v_49;
    else goto v_50;
v_49:
    goto v_48;
v_50:
    v_86 = stack[-2];
    if (!car_legal(v_86)) v_86 = carerror(v_86); else
    v_86 = car(v_86);
    if (!car_legal(v_86)) v_86 = carerror(v_86); else
    v_86 = car(v_86);
    v_84 = acons(v_86, v_85, v_84);
    env = stack[-4];
    goto v_48;
    v_84 = nil;
v_48:
    {
        LispObject v_91 = stack[-3];
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn2(fn))(fn, v_91, v_84);
    }
v_24:
    v_84 = stack[-2];
    if (!car_legal(v_84)) v_84 = carerror(v_84); else
    v_84 = car(v_84);
    if (!car_legal(v_84)) v_85 = carerror(v_84); else
    v_85 = car(v_84);
    v_84 = stack[-1];
    if (!car_legal(v_84)) v_84 = carerror(v_84); else
    v_84 = car(v_84);
    if (!car_legal(v_84)) v_84 = carerror(v_84); else
    v_84 = car(v_84);
    {   LispObject fn = basic_elt(env, 3); // sfto_b!:ordexp
    v_84 = (*qfn2(fn))(fn, v_85, v_84);
    }
    env = stack[-4];
    if (v_84 == nil) goto v_62;
    v_84 = stack[-2];
    if (!car_legal(v_84)) v_85 = carerror(v_84); else
    v_85 = car(v_84);
    v_84 = stack[0];
    v_84 = cons(v_85, v_84);
    env = stack[-4];
    stack[0] = v_84;
    v_84 = stack[-2];
    if (!car_legal(v_84)) v_84 = cdrerror(v_84); else
    v_84 = cdr(v_84);
    stack[-2] = v_84;
    goto v_8;
v_62:
    v_84 = stack[-1];
    if (!car_legal(v_84)) v_85 = carerror(v_84); else
    v_85 = car(v_84);
    v_84 = stack[0];
    v_84 = cons(v_85, v_84);
    env = stack[-4];
    stack[0] = v_84;
    v_84 = stack[-1];
    if (!car_legal(v_84)) v_84 = cdrerror(v_84); else
    v_84 = cdr(v_84);
    stack[-1] = v_84;
    goto v_8;
    v_84 = nil;
    return onevalue(v_84);
}



// Code for matrixrowom

static LispObject CC_matrixrowom(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_28;
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
    v_28 = stack[0];
    if (v_28 == nil) goto v_9;
    v_28 = basic_elt(env, 1); // "<OMA>"
    {   LispObject fn = basic_elt(env, 4); // printout
    v_28 = (*qfn1(fn))(fn, v_28);
    }
    env = stack[-1];
    v_28 = lisp_true;
    {   LispObject fn = basic_elt(env, 5); // indent!*
    v_28 = (*qfn1(fn))(fn, v_28);
    }
    env = stack[-1];
    v_28 = basic_elt(env, 2); // "<OMS cd=""linalg1"" name=""matrixrow""/>"
    {   LispObject fn = basic_elt(env, 4); // printout
    v_28 = (*qfn1(fn))(fn, v_28);
    }
    env = stack[-1];
    v_28 = stack[0];
    if (!car_legal(v_28)) v_28 = carerror(v_28); else
    v_28 = car(v_28);
    {   LispObject fn = basic_elt(env, 6); // multiom
    v_28 = (*qfn1(fn))(fn, v_28);
    }
    env = stack[-1];
    v_28 = nil;
    {   LispObject fn = basic_elt(env, 5); // indent!*
    v_28 = (*qfn1(fn))(fn, v_28);
    }
    env = stack[-1];
    v_28 = basic_elt(env, 3); // "</OMA>"
    {   LispObject fn = basic_elt(env, 4); // printout
    v_28 = (*qfn1(fn))(fn, v_28);
    }
    env = stack[-1];
    v_28 = stack[0];
    if (!car_legal(v_28)) v_28 = cdrerror(v_28); else
    v_28 = cdr(v_28);
    {   LispObject fn = basic_elt(env, 0); // matrixrowom
    v_28 = (*qfn1(fn))(fn, v_28);
    }
    goto v_7;
v_9:
v_7:
    v_28 = nil;
    return onevalue(v_28);
}



// Code for rootextractsq

static LispObject CC_rootextractsq(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    v_24 = v_2;
// end of prologue
    v_23 = v_24;
    if (!car_legal(v_23)) v_23 = carerror(v_23); else
    v_23 = car(v_23);
    if (v_23 == nil) goto v_6;
    else goto v_7;
v_6:
    v_23 = v_24;
    goto v_5;
v_7:
    v_23 = v_24;
    {   LispObject fn = basic_elt(env, 1); // subs2q
    v_23 = (*qfn1(fn))(fn, v_23);
    }
    env = stack[-2];
    stack[-1] = v_23;
    v_23 = stack[-1];
    if (!car_legal(v_23)) v_23 = carerror(v_23); else
    v_23 = car(v_23);
    {   LispObject fn = basic_elt(env, 2); // rootextractf
    stack[0] = (*qfn1(fn))(fn, v_23);
    }
    env = stack[-2];
    v_23 = stack[-1];
    if (!car_legal(v_23)) v_23 = cdrerror(v_23); else
    v_23 = cdr(v_23);
    {   LispObject fn = basic_elt(env, 2); // rootextractf
    v_23 = (*qfn1(fn))(fn, v_23);
    }
    {
        LispObject v_27 = stack[0];
        return cons(v_27, v_23);
    }
    v_23 = nil;
v_5:
    return onevalue(v_23);
}



// Code for meq

static LispObject CC_meq(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    {   LispObject fn = basic_elt(env, 2); // binding
    v_23 = (*qfn1(fn))(fn, v_23);
    }
    env = stack[-2];
    v_24 = v_23;
    v_23 = v_24;
    if (v_23 == nil) goto v_11;
    v_23 = v_24;
    v_25 = basic_elt(env, 1); // unbound
    if (v_23 == v_25) goto v_11;
    v_23 = v_24;
    v_24 = v_23;
    goto v_9;
v_11:
    v_23 = stack[-1];
    v_24 = v_23;
    goto v_9;
    v_24 = nil;
v_9:
    v_23 = stack[0];
    v_23 = (equal(v_24, v_23) ? lisp_true : nil);
    return onevalue(v_23);
}



// Code for edge_new_parent

static LispObject CC_edge_new_parent(LispObject env,
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
    v_33 = v_2;
// end of prologue
v_1:
    v_32 = v_33;
    if (v_32 == nil) goto v_6;
    else goto v_7;
v_6:
    v_32 = nil;
    goto v_5;
v_7:
    v_32 = v_33;
    if (!car_legal(v_32)) v_34 = carerror(v_32); else
    v_34 = car(v_32);
    v_32 = qvalue(basic_elt(env, 1)); // new_edge_list
    v_32 = Lassoc(nil, v_34, v_32);
    v_34 = v_32;
    v_32 = v_34;
    if (v_32 == nil) goto v_20;
    stack[0] = v_34;
    v_32 = v_33;
    if (!car_legal(v_32)) v_32 = cdrerror(v_32); else
    v_32 = cdr(v_32);
    {   LispObject fn = basic_elt(env, 0); // edge_new_parent
    v_32 = (*qfn1(fn))(fn, v_32);
    }
    {
        LispObject v_36 = stack[0];
        return cons(v_36, v_32);
    }
v_20:
    v_32 = v_33;
    if (!car_legal(v_32)) v_32 = cdrerror(v_32); else
    v_32 = cdr(v_32);
    v_33 = v_32;
    goto v_1;
    v_32 = nil;
    goto v_5;
    v_32 = nil;
v_5:
    return onevalue(v_32);
}



// Code for log_inlines

static LispObject CC_log_inlines(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    v_24 = v_4;
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    v_25 = stack[-1];
    v_24 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // log_assignment
    v_24 = (*qfn2(fn))(fn, v_25, v_24);
    }
    env = stack[-2];
    if (v_24 == nil) goto v_11;
    v_24 = nil;
    goto v_7;
v_11:
    v_25 = stack[-1];
    v_24 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // log_freevars
    v_24 = (*qfn2(fn))(fn, v_25, v_24);
    }
    if (v_24 == nil) goto v_19;
    v_24 = nil;
    goto v_7;
v_19:
    v_24 = nil;
v_7:
    return onevalue(v_24);
}



// Code for red!=hidelt

static LispObject CC_redMhidelt(LispObject env,
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    stack[-2] = v_2;
// end of prologue
    v_19 = stack[-2];
    {   LispObject fn = basic_elt(env, 1); // bas_dpoly
    v_19 = (*qfn1(fn))(fn, v_19);
    }
    env = stack[-4];
    stack[-3] = v_19;
    v_19 = stack[-2];
    {   LispObject fn = basic_elt(env, 2); // bas_nr
    stack[-1] = (*qfn1(fn))(fn, v_19);
    }
    env = stack[-4];
    v_19 = stack[-3];
    if (!car_legal(v_19)) stack[0] = cdrerror(v_19); else
    stack[0] = cdr(v_19);
    v_19 = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // bas_rep
    stack[-2] = (*qfn1(fn))(fn, v_19);
    }
    env = stack[-4];
    v_19 = stack[-3];
    if (!car_legal(v_19)) v_19 = carerror(v_19); else
    v_19 = car(v_19);
    v_19 = ncons(v_19);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 4); // red!=hide
    v_19 = (*qfn1(fn))(fn, v_19);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 5); // dp_sum
    v_19 = (*qfn2(fn))(fn, stack[-2], v_19);
    }
    env = stack[-4];
    {
        LispObject v_24 = stack[-1];
        LispObject v_25 = stack[0];
        LispObject fn = basic_elt(env, 6); // bas_make1
        return (*qfn3(fn))(fn, v_24, v_25, v_19);
    }
}



// Code for extract_dummy_ids

static LispObject CC_extract_dummy_ids(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_31, v_32, v_33;
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
    v_33 = nil;
v_7:
    v_31 = stack[0];
    if (v_31 == nil) goto v_10;
    else goto v_11;
v_10:
    v_31 = v_33;
    {
        LispObject fn = basic_elt(env, 2); // nreverse
        return (*qfn1(fn))(fn, v_31);
    }
v_11:
    v_31 = stack[0];
    if (!car_legal(v_31)) v_32 = carerror(v_31); else
    v_32 = car(v_31);
    v_31 = qvalue(basic_elt(env, 1)); // dummy_id!*
    v_31 = Lmemq(nil, v_32, v_31);
    if (v_31 == nil) goto v_16;
    v_31 = stack[0];
    if (!car_legal(v_31)) v_31 = carerror(v_31); else
    v_31 = car(v_31);
    v_32 = v_33;
    v_31 = cons(v_31, v_32);
    env = stack[-1];
    v_33 = v_31;
    v_31 = stack[0];
    if (!car_legal(v_31)) v_31 = cdrerror(v_31); else
    v_31 = cdr(v_31);
    stack[0] = v_31;
    goto v_7;
v_16:
    v_31 = stack[0];
    if (!car_legal(v_31)) v_31 = cdrerror(v_31); else
    v_31 = cdr(v_31);
    stack[0] = v_31;
    goto v_7;
    v_31 = nil;
    return onevalue(v_31);
}



// Code for lalr_most_common_dest

static LispObject CC_lalr_most_common_dest(LispObject env,
                         LispObject v_2)
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
    v_75 = v_2;
// end of prologue
    stack[-3] = nil;
    stack[-1] = v_75;
v_11:
    v_75 = stack[-1];
    if (v_75 == nil) goto v_15;
    else goto v_16;
v_15:
    goto v_10;
v_16:
    v_75 = stack[-1];
    if (!car_legal(v_75)) v_75 = carerror(v_75); else
    v_75 = car(v_75);
    v_77 = v_75;
    v_75 = v_77;
    if (!car_legal(v_75)) v_76 = cdrerror(v_75); else
    v_76 = cdr(v_75);
    v_75 = stack[-3];
    v_75 = Lassoc(nil, v_76, v_75);
    stack[-2] = v_75;
    if (v_75 == nil) goto v_25;
    stack[0] = stack[-2];
    v_75 = stack[-2];
    if (!car_legal(v_75)) v_75 = cdrerror(v_75); else
    v_75 = cdr(v_75);
    v_75 = add1(v_75);
    env = stack[-4];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_75);
    goto v_23;
v_25:
    v_75 = v_77;
    if (!car_legal(v_75)) v_77 = cdrerror(v_75); else
    v_77 = cdr(v_75);
    v_76 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_75 = stack[-3];
    v_75 = acons(v_77, v_76, v_75);
    env = stack[-4];
    stack[-3] = v_75;
    goto v_23;
v_23:
    v_75 = stack[-1];
    if (!car_legal(v_75)) v_75 = cdrerror(v_75); else
    v_75 = cdr(v_75);
    stack[-1] = v_75;
    goto v_11;
v_10:
    v_75 = stack[-3];
    if (!car_legal(v_75)) v_75 = carerror(v_75); else
    v_75 = car(v_75);
    stack[-2] = v_75;
    v_75 = stack[-3];
    if (!car_legal(v_75)) v_75 = cdrerror(v_75); else
    v_75 = cdr(v_75);
    stack[-1] = v_75;
v_49:
    v_75 = stack[-1];
    if (v_75 == nil) goto v_54;
    else goto v_55;
v_54:
    goto v_48;
v_55:
    v_75 = stack[-1];
    if (!car_legal(v_75)) v_75 = carerror(v_75); else
    v_75 = car(v_75);
    stack[0] = v_75;
    v_75 = stack[0];
    if (!car_legal(v_75)) v_76 = cdrerror(v_75); else
    v_76 = cdr(v_75);
    v_75 = stack[-2];
    if (!car_legal(v_75)) v_75 = cdrerror(v_75); else
    v_75 = cdr(v_75);
    v_75 = static_cast<LispObject>(greaterp2(v_76, v_75));
    v_75 = v_75 ? lisp_true : nil;
    env = stack[-4];
    if (v_75 == nil) goto v_64;
    v_75 = stack[0];
    stack[-2] = v_75;
    goto v_62;
v_64:
v_62:
    v_75 = stack[-1];
    if (!car_legal(v_75)) v_75 = cdrerror(v_75); else
    v_75 = cdr(v_75);
    stack[-1] = v_75;
    goto v_49;
v_48:
    v_75 = stack[-2];
    if (!car_legal(v_75)) v_75 = carerror(v_75); else
    v_75 = car(v_75);
    return onevalue(v_75);
}



// Code for formrlis

static LispObject CC_formrlis(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_82, v_83, v_84;
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
    v_82 = v_4;
    stack[-1] = v_3;
    stack[-2] = v_2;
// end of prologue
    v_82 = stack[-2];
    if (!car_legal(v_82)) v_83 = carerror(v_82); else
    v_83 = car(v_82);
    v_82 = basic_elt(env, 1); // flagop
    v_82 = Lflagp(nil, v_83, v_82);
    env = stack[-4];
    if (v_82 == nil) goto v_8;
    else goto v_9;
v_8:
    v_82 = stack[-2];
    if (!car_legal(v_82)) stack[-3] = carerror(v_82); else
    stack[-3] = car(v_82);
    stack[0] = basic_elt(env, 2); // list
    v_82 = stack[-2];
    if (!car_legal(v_82)) v_83 = carerror(v_82); else
    v_83 = car(v_82);
    v_82 = basic_elt(env, 3); // share
    if (v_83 == v_82) goto v_21;
    else goto v_22;
v_21:
    stack[-1] = nil;
    v_82 = stack[-2];
    if (!car_legal(v_82)) v_82 = cdrerror(v_82); else
    v_82 = cdr(v_82);
    stack[-2] = v_82;
v_34:
    v_82 = stack[-2];
    if (v_82 == nil) goto v_37;
    else goto v_38;
v_37:
    goto v_33;
v_38:
    v_82 = stack[-2];
    if (!car_legal(v_82)) v_82 = carerror(v_82); else
    v_82 = car(v_82);
    v_83 = Lmkquote(nil, v_82);
    env = stack[-4];
    v_82 = stack[-1];
    v_82 = cons(v_83, v_82);
    env = stack[-4];
    stack[-1] = v_82;
    v_82 = stack[-2];
    if (!car_legal(v_82)) v_82 = cdrerror(v_82); else
    v_82 = cdr(v_82);
    stack[-2] = v_82;
    goto v_34;
v_33:
    v_82 = stack[-1];
    {   LispObject fn = basic_elt(env, 8); // reversip!*
    v_82 = (*qfn1(fn))(fn, v_82);
    }
    env = stack[-4];
    goto v_20;
v_22:
    v_82 = stack[-2];
    if (!car_legal(v_82)) v_84 = cdrerror(v_82); else
    v_84 = cdr(v_82);
    v_83 = stack[-1];
    v_82 = basic_elt(env, 4); // algebraic
    {   LispObject fn = basic_elt(env, 9); // formlis
    v_82 = (*qfn3(fn))(fn, v_84, v_83, v_82);
    }
    env = stack[-4];
    goto v_20;
    v_82 = nil;
v_20:
    v_82 = cons(stack[0], v_82);
    {
        LispObject v_89 = stack[-3];
        return list2(v_89, v_82);
    }
v_9:
    v_82 = stack[-2];
    if (!car_legal(v_82)) v_82 = cdrerror(v_82); else
    v_82 = cdr(v_82);
    {   LispObject fn = basic_elt(env, 10); // idlistp
    v_82 = (*qfn1(fn))(fn, v_82);
    }
    env = stack[-4];
    if (v_82 == nil) goto v_57;
    else goto v_58;
v_57:
    v_83 = basic_elt(env, 5); // !*comma!*
    v_82 = stack[-2];
    if (!car_legal(v_82)) v_82 = cdrerror(v_82); else
    v_82 = cdr(v_82);
    v_83 = cons(v_83, v_82);
    env = stack[-4];
    v_82 = basic_elt(env, 6); // "identifier list"
    {
        LispObject fn = basic_elt(env, 11); // typerr
        return (*qfn2(fn))(fn, v_83, v_82);
    }
v_58:
    stack[-3] = basic_elt(env, 7); // flag
    stack[0] = basic_elt(env, 2); // list
    v_82 = stack[-2];
    if (!car_legal(v_82)) v_84 = cdrerror(v_82); else
    v_84 = cdr(v_82);
    v_83 = stack[-1];
    v_82 = basic_elt(env, 4); // algebraic
    {   LispObject fn = basic_elt(env, 9); // formlis
    v_82 = (*qfn3(fn))(fn, v_84, v_83, v_82);
    }
    env = stack[-4];
    stack[0] = cons(stack[0], v_82);
    env = stack[-4];
    v_82 = stack[-2];
    if (!car_legal(v_82)) v_82 = carerror(v_82); else
    v_82 = car(v_82);
    v_82 = Lmkquote(nil, v_82);
    {
        LispObject v_90 = stack[-3];
        LispObject v_91 = stack[0];
        return list3(v_90, v_91, v_82);
    }
    v_82 = nil;
    return onevalue(v_82);
}



// Code for get!-free!-form

static LispObject CC_getKfreeKform(LispObject env,
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
// space for vars preserved across procedure calls
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[-1] = v_2;
// end of prologue
    stack[-2] = nil;
    v_53 = stack[-1];
    v_52 = qvalue(basic_elt(env, 1)); // frasc!*
    v_52 = Latsoc(nil, v_53, v_52);
    stack[0] = v_52;
    if (v_52 == nil) goto v_11;
    v_52 = stack[0];
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    goto v_7;
v_11:
    v_53 = stack[-1];
    v_52 = basic_elt(env, 2); // !~
    if (!consp(v_53)) goto v_20;
    v_53 = car(v_53);
    if (v_53 == v_52) goto v_19;
    else goto v_20;
v_19:
    v_52 = stack[-1];
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    if (!car_legal(v_52)) v_52 = carerror(v_52); else
    v_52 = car(v_52);
    stack[-1] = v_52;
    v_52 = basic_elt(env, 3); // (!! !~ !! !~)
    stack[0] = v_52;
    v_52 = lisp_true;
    stack[-2] = v_52;
    goto v_18;
v_20:
    v_52 = basic_elt(env, 4); // (!! !~)
    stack[0] = v_52;
    goto v_18;
v_18:
    v_52 = stack[-1];
    v_52 = Lexplode(nil, v_52);
    env = stack[-3];
    v_52 = Lappend_2(nil, stack[0], v_52);
    env = stack[-3];
    v_52 = Lcompress(nil, v_52);
    env = stack[-3];
    v_52 = Lintern(nil, v_52);
    env = stack[-3];
    stack[0] = v_52;
    v_54 = stack[-1];
    v_53 = stack[0];
    v_52 = qvalue(basic_elt(env, 1)); // frasc!*
    v_52 = acons(v_54, v_53, v_52);
    env = stack[-3];
    setvalue(basic_elt(env, 1), v_52); // frasc!*
    v_52 = stack[-2];
    if (v_52 == nil) goto v_45;
    v_52 = stack[0];
    v_53 = ncons(v_52);
    env = stack[-3];
    v_52 = basic_elt(env, 5); // optional
    v_52 = Lflag(nil, v_53, v_52);
    goto v_43;
v_45:
v_43:
    v_52 = stack[0];
v_7:
    return onevalue(v_52);
}



// Code for get_char_value

static LispObject CC_get_char_value(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_60, v_61;
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
    v_61 = v_2;
// end of prologue
    stack[-1] = nil;
    v_60 = nil;
    stack[-3] = v_60;
    v_60 = v_61;
    if (!car_legal(v_60)) v_60 = cdrerror(v_60); else
    v_60 = cdr(v_60);
    stack[0] = v_60;
v_15:
    v_60 = stack[-3];
    if (v_60 == nil) goto v_22;
    else goto v_23;
v_22:
    v_60 = stack[0];
    v_61 = Llength(nil, v_60);
    env = stack[-4];
    v_60 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_60 = static_cast<LispObject>(greaterp2(v_61, v_60));
    v_60 = v_60 ? lisp_true : nil;
    env = stack[-4];
    goto v_21;
v_23:
    v_60 = nil;
    goto v_21;
    v_60 = nil;
v_21:
    if (v_60 == nil) goto v_18;
    else goto v_19;
v_18:
    goto v_14;
v_19:
    v_60 = stack[0];
    if (!car_legal(v_60)) v_60 = carerror(v_60); else
    v_60 = car(v_60);
    if (!car_legal(v_60)) v_61 = carerror(v_60); else
    v_61 = car(v_60);
    v_60 = stack[-2];
    if (equal(v_61, v_60)) goto v_35;
    else goto v_36;
v_35:
    v_60 = stack[0];
    if (!car_legal(v_60)) v_60 = carerror(v_60); else
    v_60 = car(v_60);
    if (!car_legal(v_60)) v_60 = cdrerror(v_60); else
    v_60 = cdr(v_60);
    if (!car_legal(v_60)) v_60 = carerror(v_60); else
    v_60 = car(v_60);
    stack[-1] = v_60;
    v_60 = lisp_true;
    stack[-3] = v_60;
    goto v_34;
v_36:
v_34:
    v_60 = stack[0];
    if (!car_legal(v_60)) v_60 = cdrerror(v_60); else
    v_60 = cdr(v_60);
    stack[0] = v_60;
    goto v_15;
v_14:
    v_60 = stack[-3];
    if (v_60 == nil) goto v_53;
    v_60 = stack[-1];
    goto v_9;
v_53:
    v_60 = basic_elt(env, 1); // "error in get character element"
    {   LispObject fn = basic_elt(env, 2); // rederr
    v_60 = (*qfn1(fn))(fn, v_60);
    }
    goto v_51;
v_51:
    v_60 = nil;
v_9:
    return onevalue(v_60);
}



// Code for qqe_arg!-check!-q

static LispObject CC_qqe_argKcheckKq(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_54;
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
    {   LispObject fn = basic_elt(env, 1); // qqe_id!-nyt!-branchq
    v_54 = (*qfn1(fn))(fn, v_54);
    }
    env = stack[-1];
    if (v_54 == nil) goto v_8;
    else goto v_9;
v_8:
    v_54 = nil;
    goto v_5;
v_9:
    v_54 = stack[0];
    if (!consp(v_54)) goto v_17;
    else goto v_18;
v_17:
    v_54 = stack[0];
    v_54 = (is_number(v_54) ? lisp_true : nil);
    v_54 = (v_54 == nil ? lisp_true : nil);
    goto v_16;
v_18:
    v_54 = nil;
    goto v_16;
    v_54 = nil;
v_16:
    if (v_54 == nil) goto v_14;
    v_54 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // qqe_btidp
    v_54 = (*qfn1(fn))(fn, v_54);
    }
    env = stack[-1];
    if (v_54 == nil) goto v_29;
    v_54 = nil;
    goto v_5;
v_29:
    v_54 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // qqe_nytidp
    v_54 = (*qfn1(fn))(fn, v_54);
    }
    env = stack[-1];
    if (v_54 == nil) goto v_34;
    v_54 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // qqe_qtid
    v_54 = (*qfn1(fn))(fn, v_54);
    }
    env = stack[-1];
    v_54 = stack[0];
    {   LispObject fn = basic_elt(env, 5); // qqe_add2rollbackids
    v_54 = (*qfn1(fn))(fn, v_54);
    }
    v_54 = lisp_true;
    goto v_5;
v_34:
    v_54 = lisp_true;
    goto v_5;
    goto v_7;
v_14:
    v_54 = stack[0];
    if (is_number(v_54)) goto v_48;
    v_54 = stack[0];
    {   LispObject fn = basic_elt(env, 6); // qqe_arg!-check
    v_54 = (*qfn1(fn))(fn, v_54);
    }
    v_54 = lisp_true;
    goto v_5;
v_48:
v_7:
    v_54 = nil;
v_5:
    return onevalue(v_54);
}



// Code for fortranname

static LispObject CC_fortranname(LispObject env,
                         LispObject v_2)
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
    v_52 = stack[0];
    v_52 = Lstringp(nil, v_52);
    env = stack[-1];
    if (v_52 == nil) goto v_7;
    v_52 = stack[0];
    {
        LispObject fn = basic_elt(env, 8); // stringtoatom
        return (*qfn1(fn))(fn, v_52);
    }
v_7:
    v_53 = stack[0];
    v_52 = qvalue(basic_elt(env, 1)); // !*notfortranfuns!*
    v_52 = Lmemq(nil, v_53, v_52);
    if (v_52 == nil) goto v_17;
    v_52 = qvalue(basic_elt(env, 2)); // !*stdout!*
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    v_52 = Lwrs(nil, v_52);
    env = stack[-1];
    v_52 = basic_elt(env, 3); // "*** WARNING: "
    v_52 = Lprinc(nil, v_52);
    env = stack[-1];
    v_52 = stack[0];
    v_52 = Lprin(nil, v_52);
    env = stack[-1];
    v_52 = basic_elt(env, 4); // " is not an intrinsic Fortran function"
    {   LispObject fn = basic_elt(env, 9); // prin2t
    v_52 = (*qfn1(fn))(fn, v_52);
    }
    env = stack[-1];
    goto v_15;
v_17:
v_15:
    v_52 = qvalue(basic_elt(env, 5)); // !*double
    if (v_52 == nil) goto v_34;
    v_53 = stack[0];
    v_52 = basic_elt(env, 6); // !*doublename!*
    v_52 = get(v_53, v_52);
    if (v_52 == nil) goto v_38;
    else goto v_37;
v_38:
    v_52 = stack[0];
v_37:
    goto v_32;
v_34:
    v_53 = stack[0];
    v_52 = basic_elt(env, 7); // !*fortranname!*
    v_52 = get(v_53, v_52);
    if (v_52 == nil) goto v_47;
    else goto v_46;
v_47:
    v_52 = stack[0];
v_46:
    goto v_32;
    v_52 = nil;
v_32:
    goto v_5;
    v_52 = nil;
v_5:
    return onevalue(v_52);
}



// Code for assert_error

static LispObject CC_assert_error(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_74, v_75, v_76;
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
    push(nil, nil);
    stack_popper stack_popper_var(8);
// copy arguments values to proper place
    stack[-1] = v_7;
    v_74 = v_6;
    stack[-2] = v_5;
    stack[-3] = v_4;
    stack[-4] = v_3;
    stack[-5] = v_2;
// end of prologue
// Binding !*lower
// FLUIDBIND: reloadenv=7 litvec-offset=1 saveloc=6
{   bind_fluid_stack bind_fluid_var(-7, 1, -6);
    setvalue(basic_elt(env, 1), nil); // !*lower
    v_74 = qvalue(basic_elt(env, 2)); // !*assertstatistics
    if (v_74 == nil) goto v_18;
    v_75 = stack[-5];
    v_74 = qvalue(basic_elt(env, 3)); // assertstatistics!*
    v_74 = Latsoc(nil, v_75, v_74);
    if (!car_legal(v_74)) v_74 = cdrerror(v_74); else
    v_74 = cdr(v_74);
    v_75 = v_74;
    v_74 = v_75;
    if (!car_legal(v_74)) v_74 = cdrerror(v_74); else
    v_74 = cdr(v_74);
    if (!car_legal(v_74)) stack[0] = cdrerror(v_74); else
    stack[0] = cdr(v_74);
    v_74 = v_75;
    if (!car_legal(v_74)) v_74 = cdrerror(v_74); else
    v_74 = cdr(v_74);
    if (!car_legal(v_74)) v_74 = cdrerror(v_74); else
    v_74 = cdr(v_74);
    if (!car_legal(v_74)) v_74 = carerror(v_74); else
    v_74 = car(v_74);
    v_74 = add1(v_74);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 9); // setcar
    v_74 = (*qfn2(fn))(fn, stack[0], v_74);
    }
    env = stack[-7];
    goto v_16;
v_18:
v_16:
    v_75 = stack[-2];
    v_74 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_74 = Leqn_2(nil, v_75, v_74);
    env = stack[-7];
    if (v_74 == nil) goto v_36;
    stack[0] = basic_elt(env, 4); // "declaration"
    v_76 = stack[-5];
    v_75 = stack[-4];
    v_74 = stack[-3];
    {   LispObject fn = basic_elt(env, 10); // assert_format
    v_76 = (*qfn3(fn))(fn, v_76, v_75, v_74);
    }
    env = stack[-7];
    v_75 = basic_elt(env, 5); // "violated by result"
    v_74 = stack[-1];
    v_74 = list4(stack[0], v_76, v_75, v_74);
    env = stack[-7];
    goto v_34;
v_36:
    stack[0] = basic_elt(env, 4); // "declaration"
    v_76 = stack[-5];
    v_75 = stack[-4];
    v_74 = stack[-3];
    {   LispObject fn = basic_elt(env, 10); // assert_format
    stack[-4] = (*qfn3(fn))(fn, v_76, v_75, v_74);
    }
    env = stack[-7];
    stack[-3] = basic_elt(env, 6); // "violated by"
    v_75 = basic_elt(env, 7); // arg
    v_74 = stack[-2];
    {   LispObject fn = basic_elt(env, 11); // mkid
    v_75 = (*qfn2(fn))(fn, v_75, v_74);
    }
    env = stack[-7];
    v_74 = stack[-1];
    v_74 = list2(v_75, v_74);
    env = stack[-7];
    v_74 = list3star(stack[0], stack[-4], stack[-3], v_74);
    env = stack[-7];
    goto v_34;
    v_74 = nil;
v_34:
    v_75 = v_74;
    v_74 = qvalue(basic_elt(env, 8)); // !*assertbreak
    if (v_74 == nil) goto v_65;
    v_74 = v_75;
    {   LispObject fn = basic_elt(env, 12); // rederr
    v_74 = (*qfn1(fn))(fn, v_74);
    }
    goto v_63;
v_65:
    v_74 = v_75;
    {   LispObject fn = basic_elt(env, 13); // lprim
    v_74 = (*qfn1(fn))(fn, v_74);
    }
    goto v_63;
v_63:
    v_74 = nil;
    ;}  // end of a binding scope
    return onevalue(v_74);
}



// Code for nf

static LispObject CC_nf(LispObject env,
                         LispObject v_3, LispObject v_4,
                         LispObject v_5)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_210, v_211, v_212;
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
    real_push(nil, nil, nil, nil, nil);
    real_push(nil);
    stack_popper stack_popper_var(12);
// copy arguments values to proper place
    stack[-9] = v_5;
    v_210 = v_4;
    v_211 = v_3;
// end of prologue
// Binding gg!*
// FLUIDBIND: reloadenv=11 litvec-offset=1 saveloc=10
{   bind_fluid_stack bind_fluid_var(-11, 1, -10);
    setvalue(basic_elt(env, 1), v_210); // gg!*
    v_210 = qvalue(basic_elt(env, 1)); // gg!*
    if (v_210 == nil) goto v_14;
    else goto v_15;
v_14:
    v_210 = v_211;
    goto v_13;
v_15:
    stack[-3] = nil;
    v_210 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[0] = v_210;
    v_210 = v_211;
    stack[-8] = v_210;
    v_210 = qvalue(basic_elt(env, 1)); // gg!*
    stack[-2] = v_210;
v_33:
    v_210 = stack[-8];
    if (v_210 == nil) goto v_40;
    else goto v_41;
v_40:
    goto v_34;
v_41:
    v_210 = stack[-8];
    if (!car_legal(v_210)) v_210 = carerror(v_210); else
    v_210 = car(v_210);
    if (!car_legal(v_210)) v_210 = carerror(v_210); else
    v_210 = car(v_210);
    stack[-7] = v_210;
v_48:
    v_210 = stack[-2];
    if (v_210 == nil) goto v_56;
    v_211 = stack[-7];
    v_210 = stack[-2];
    if (!car_legal(v_210)) v_210 = carerror(v_210); else
    v_210 = car(v_210);
    if (!car_legal(v_210)) v_210 = cdrerror(v_210); else
    v_210 = cdr(v_210);
    {   LispObject fn = basic_elt(env, 12); // dless
    v_210 = (*qfn2(fn))(fn, v_211, v_210);
    }
    env = stack[-11];
    goto v_54;
v_56:
    v_210 = nil;
    goto v_54;
    v_210 = nil;
v_54:
    if (v_210 == nil) goto v_51;
    else goto v_52;
v_51:
    goto v_47;
v_52:
    v_210 = stack[-2];
    if (!car_legal(v_210)) v_210 = cdrerror(v_210); else
    v_210 = cdr(v_210);
    stack[-2] = v_210;
    goto v_48;
v_47:
    v_210 = stack[-2];
    if (v_210 == nil) goto v_71;
    else goto v_72;
v_71:
    goto v_34;
v_72:
    v_210 = stack[-2];
    stack[-1] = v_210;
v_77:
    v_210 = stack[-1];
    if (v_210 == nil) goto v_80;
    v_210 = stack[-1];
    if (!car_legal(v_210)) v_210 = carerror(v_210); else
    v_210 = car(v_210);
    if (!car_legal(v_210)) v_211 = cdrerror(v_210); else
    v_211 = cdr(v_210);
    v_210 = stack[-7];
    {   LispObject fn = basic_elt(env, 13); // dd
    stack[-4] = (*qfn2(fn))(fn, v_211, v_210);
    }
    env = stack[-11];
    v_211 = stack[-9];
    v_210 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_210 = plus2(v_211, v_210);
    env = stack[-11];
    if ((static_cast<std::intptr_t>(stack[-4]) < static_cast<std::intptr_t>(v_210))) goto v_84;
    else goto v_80;
v_84:
    goto v_81;
v_80:
    goto v_76;
v_81:
    v_210 = stack[-1];
    if (!car_legal(v_210)) v_210 = cdrerror(v_210); else
    v_210 = cdr(v_210);
    stack[-1] = v_210;
    goto v_77;
v_76:
    v_210 = stack[-1];
    if (v_210 == nil) goto v_98;
    else goto v_99;
v_98:
    v_210 = qvalue(basic_elt(env, 2)); // redtails
    if (v_210 == nil) goto v_104;
    v_212 = stack[-7];
    v_210 = stack[-8];
    if (!car_legal(v_210)) v_210 = carerror(v_210); else
    v_210 = car(v_210);
    if (!car_legal(v_210)) v_211 = cdrerror(v_210); else
    v_211 = cdr(v_210);
    v_210 = stack[-3];
    v_210 = acons(v_212, v_211, v_210);
    env = stack[-11];
    stack[-3] = v_210;
    v_210 = stack[-8];
    if (!car_legal(v_210)) v_210 = cdrerror(v_210); else
    v_210 = cdr(v_210);
    stack[-8] = v_210;
    goto v_102;
v_104:
    goto v_34;
v_102:
    goto v_97;
v_99:
    v_211 = qvalue(basic_elt(env, 3)); // gv!*
    v_210 = stack[-1];
    if (!car_legal(v_210)) v_210 = carerror(v_210); else
    v_210 = car(v_210);
    if (!car_legal(v_210)) v_210 = carerror(v_210); else
    v_210 = car(v_210);
    v_210 = Lgetv(nil, v_211, v_210);
    env = stack[-11];
    stack[-6] = v_210;
    v_210 = stack[-8];
    if (!car_legal(v_210)) v_210 = carerror(v_210); else
    v_210 = car(v_210);
    if (!car_legal(v_210)) v_211 = cdrerror(v_210); else
    v_211 = cdr(v_210);
    v_210 = stack[-6];
    if (!car_legal(v_210)) v_210 = carerror(v_210); else
    v_210 = car(v_210);
    if (!car_legal(v_210)) v_210 = cdrerror(v_210); else
    v_210 = cdr(v_210);
    {   LispObject fn = basic_elt(env, 14); // gcdf!*
    v_210 = (*qfn2(fn))(fn, v_211, v_210);
    }
    env = stack[-11];
    stack[-4] = v_210;
    v_210 = stack[-8];
    if (!car_legal(v_210)) v_210 = carerror(v_210); else
    v_210 = car(v_210);
    if (!car_legal(v_210)) v_211 = cdrerror(v_210); else
    v_211 = cdr(v_210);
    v_210 = stack[-4];
    {   LispObject fn = basic_elt(env, 15); // cdiv
    v_210 = (*qfn2(fn))(fn, v_211, v_210);
    }
    env = stack[-11];
    stack[-5] = v_210;
    v_210 = stack[-6];
    if (!car_legal(v_210)) v_210 = carerror(v_210); else
    v_210 = car(v_210);
    if (!car_legal(v_210)) v_211 = cdrerror(v_210); else
    v_211 = cdr(v_210);
    v_210 = stack[-4];
    {   LispObject fn = basic_elt(env, 15); // cdiv
    v_210 = (*qfn2(fn))(fn, v_211, v_210);
    }
    env = stack[-11];
    stack[-4] = v_210;
    v_211 = stack[-8];
    v_210 = stack[-4];
    {   LispObject fn = basic_elt(env, 16); // pcmult
    v_210 = (*qfn2(fn))(fn, v_211, v_210);
    }
    env = stack[-11];
    stack[-8] = v_210;
    v_211 = stack[-3];
    v_210 = stack[-4];
    {   LispObject fn = basic_elt(env, 16); // pcmult
    v_210 = (*qfn2(fn))(fn, v_211, v_210);
    }
    env = stack[-11];
    stack[-3] = v_210;
    v_211 = stack[-6];
    v_210 = stack[-5];
    {   LispObject fn = basic_elt(env, 16); // pcmult
    v_210 = (*qfn2(fn))(fn, v_211, v_210);
    }
    env = stack[-11];
    stack[-6] = v_210;
    v_210 = stack[-6];
    if (!car_legal(v_210)) stack[-4] = cdrerror(v_210); else
    stack[-4] = cdr(v_210);
    v_211 = stack[-7];
    v_210 = stack[-1];
    if (!car_legal(v_210)) v_210 = carerror(v_210); else
    v_210 = car(v_210);
    if (!car_legal(v_210)) v_210 = cdrerror(v_210); else
    v_210 = cdr(v_210);
    {   LispObject fn = basic_elt(env, 17); // dquot
    v_210 = (*qfn2(fn))(fn, v_211, v_210);
    }
    env = stack[-11];
    {   LispObject fn = basic_elt(env, 18); // pdmult
    v_210 = (*qfn2(fn))(fn, stack[-4], v_210);
    }
    env = stack[-11];
    stack[-4] = v_210;
    v_210 = qvalue(basic_elt(env, 4)); // tred
    if (v_210 == nil) goto v_160;
    v_210 = Lterpri(nil);
    env = stack[-11];
    v_210 = basic_elt(env, 5); // "r e d u c t i o n :  "
    v_210 = Lprinc(nil, v_210);
    env = stack[-11];
    v_210 = stack[-7];
    v_210 = Lprinc(nil, v_210);
    env = stack[-11];
    v_210 = basic_elt(env, 6); // "/"
    v_210 = Lprinc(nil, v_210);
    env = stack[-11];
    v_210 = stack[-1];
    if (!car_legal(v_210)) v_210 = carerror(v_210); else
    v_210 = car(v_210);
    if (!car_legal(v_210)) v_210 = cdrerror(v_210); else
    v_210 = cdr(v_210);
    v_210 = Lprinc(nil, v_210);
    env = stack[-11];
    v_210 = Lterpri(nil);
    env = stack[-11];
    goto v_158;
v_160:
v_158:
    v_210 = qvalue(basic_elt(env, 7)); // stars
    if (v_210 == nil) goto v_179;
    v_210 = basic_elt(env, 8); // "*"
    v_210 = Lprinc(nil, v_210);
    env = stack[-11];
    goto v_177;
v_179:
v_177:
    v_210 = stack[0];
    v_210 = static_cast<LispObject>(static_cast<std::intptr_t>(v_210) + 0x10);
    stack[0] = v_210;
    v_210 = stack[-8];
    if (!car_legal(v_210)) v_211 = cdrerror(v_210); else
    v_211 = cdr(v_210);
    v_210 = stack[-4];
    {   LispObject fn = basic_elt(env, 19); // pdif
    v_210 = (*qfn2(fn))(fn, v_211, v_210);
    }
    env = stack[-11];
    stack[-8] = v_210;
    goto v_97;
v_97:
    goto v_33;
v_34:
    v_211 = qvalue(basic_elt(env, 9)); // reductions!*
    v_210 = stack[0];
    v_210 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_211) + static_cast<std::uintptr_t>(v_210) - TAG_FIXNUM);
    setvalue(basic_elt(env, 9), v_210); // reductions!*
    v_210 = qvalue(basic_elt(env, 10)); // nforms!*
    v_210 = static_cast<LispObject>(static_cast<std::intptr_t>(v_210) + 0x10);
    setvalue(basic_elt(env, 10), v_210); // nforms!*
    v_210 = stack[-3];
    v_211 = Lnreverse(nil, v_210);
    env = stack[-11];
    v_210 = stack[-8];
    v_210 = Lappend_2(nil, v_211, v_210);
    env = stack[-11];
    {   LispObject fn = basic_elt(env, 20); // gcdout
    v_210 = (*qfn1(fn))(fn, v_210);
    }
    env = stack[-11];
    stack[-4] = v_210;
    v_210 = stack[-4];
    if (v_210 == nil) goto v_203;
    else goto v_204;
v_203:
    v_210 = qvalue(basic_elt(env, 11)); // zeros!*
    v_210 = static_cast<LispObject>(static_cast<std::intptr_t>(v_210) + 0x10);
    setvalue(basic_elt(env, 11), v_210); // zeros!*
    goto v_202;
v_204:
v_202:
    v_210 = stack[-4];
    goto v_13;
    v_210 = nil;
v_13:
    ;}  // end of a binding scope
    return onevalue(v_210);
}



// Code for lalr_make_compressed_action_table

static LispObject CC_lalr_make_compressed_action_table(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// end of prologue
    v_40 = qvalue(basic_elt(env, 1)); // itemset_collection
    v_40 = Llength(nil, v_40);
    env = stack[-4];
    v_40 = sub1(v_40);
    env = stack[-4];
    v_40 = Lmkvect(nil, v_40);
    env = stack[-4];
    stack[-3] = v_40;
    v_40 = qvalue(basic_elt(env, 1)); // itemset_collection
    stack[-2] = v_40;
v_13:
    v_40 = stack[-2];
    if (v_40 == nil) goto v_17;
    else goto v_18;
v_17:
    goto v_12;
v_18:
    v_40 = stack[-2];
    if (!car_legal(v_40)) v_40 = carerror(v_40); else
    v_40 = car(v_40);
    v_41 = v_40;
    stack[-1] = stack[-3];
    v_40 = v_41;
    if (!car_legal(v_40)) stack[0] = cdrerror(v_40); else
    stack[0] = cdr(v_40);
    v_40 = v_41;
    {   LispObject fn = basic_elt(env, 3); // lalr_make_compressed_action_row
    v_40 = (*qfn1(fn))(fn, v_40);
    }
    env = stack[-4];
    v_40 = Lputv(nil, stack[-1], stack[0], v_40);
    env = stack[-4];
    v_40 = stack[-2];
    if (!car_legal(v_40)) v_40 = cdrerror(v_40); else
    v_40 = cdr(v_40);
    stack[-2] = v_40;
    goto v_13;
v_12:
    v_40 = qvalue(basic_elt(env, 2)); // !*lalr_verbose
    if (v_40 == nil) goto v_35;
    v_40 = stack[-3];
    {   LispObject fn = basic_elt(env, 4); // lalr_print_compressed_action_table
    v_40 = (*qfn1(fn))(fn, v_40);
    }
    goto v_33;
v_35:
v_33:
    v_40 = stack[-3];
    return onevalue(v_40);
}



// Code for outref

static LispObject CC_outref(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_94, v_95, v_96;
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
    stack_popper stack_popper_var(11);
// copy arguments values to proper place
    stack[-5] = v_5;
    stack[-6] = v_4;
    stack[-7] = v_3;
    stack[-8] = v_2;
// end of prologue
// Binding curfun!*
// FLUIDBIND: reloadenv=10 litvec-offset=1 saveloc=9
{   bind_fluid_stack bind_fluid_var(-10, 1, -9);
    setvalue(basic_elt(env, 1), nil); // curfun!*
// Binding calls!*
// FLUIDBIND: reloadenv=10 litvec-offset=2 saveloc=4
{   bind_fluid_stack bind_fluid_var(-10, 2, -4);
    setvalue(basic_elt(env, 2), nil); // calls!*
// Binding globs!*
// FLUIDBIND: reloadenv=10 litvec-offset=3 saveloc=3
{   bind_fluid_stack bind_fluid_var(-10, 3, -3);
    setvalue(basic_elt(env, 3), nil); // globs!*
// Binding locls!*
// FLUIDBIND: reloadenv=10 litvec-offset=4 saveloc=2
{   bind_fluid_stack bind_fluid_var(-10, 4, -2);
    setvalue(basic_elt(env, 4), nil); // locls!*
// Binding toplv!*
// FLUIDBIND: reloadenv=10 litvec-offset=5 saveloc=1
{   bind_fluid_stack bind_fluid_var(-10, 5, -1);
    setvalue(basic_elt(env, 5), nil); // toplv!*
    v_95 = stack[-7];
    v_94 = basic_elt(env, 6); // (anp!!atom anp!!idb anp!!eq anp!!unknown)
    v_94 = Lmemq(nil, v_95, v_94);
    if (v_94 == nil) goto v_23;
    v_94 = nil;
    goto v_21;
v_23:
    v_94 = stack[-7];
    v_94 = Llength(nil, v_94);
    env = stack[-10];
    goto v_21;
    v_94 = nil;
v_21:
    stack[0] = v_94;
    v_96 = stack[-8];
    v_95 = stack[-5];
    v_94 = stack[0];
    if (v_94 == nil) goto v_38;
    v_94 = stack[0];
    goto v_36;
v_38:
    v_94 = stack[-6];
    if (!symbolp(v_94)) v_94 = nil;
    else { v_94 = qfastgets(v_94);
           if (v_94 != nil) { v_94 = elt(v_94, 42); // number!-of!-args
#ifdef RECORD_GET
             if (v_94 != SPID_NOPROP)
                record_get(elt(fastget_names, 42), 1);
             else record_get(elt(fastget_names, 42), 0),
                v_94 = nil; }
           else record_get(elt(fastget_names, 42), 0); }
#else
             if (v_94 == SPID_NOPROP) v_94 = nil; }}
#endif
    goto v_36;
    v_94 = nil;
v_36:
    {   LispObject fn = basic_elt(env, 10); // outrdefun
    v_94 = (*qfn3(fn))(fn, v_96, v_95, v_94);
    }
    env = stack[-10];
    stack[-8] = v_94;
    v_94 = stack[0];
    if (v_94 == nil) goto v_48;
    v_94 = stack[-7];
    {   LispObject fn = basic_elt(env, 11); // add2locs
    v_94 = (*qfn1(fn))(fn, v_94);
    }
    env = stack[-10];
    v_94 = stack[-6];
    {   LispObject fn = basic_elt(env, 12); // anform
    v_94 = (*qfn1(fn))(fn, v_94);
    }
    env = stack[-10];
    v_94 = stack[-7];
    {   LispObject fn = basic_elt(env, 13); // remlocs
    v_94 = (*qfn1(fn))(fn, v_94);
    }
    env = stack[-10];
    goto v_46;
v_48:
    v_94 = stack[-6];
    if (v_94 == nil) goto v_60;
    else goto v_61;
v_60:
    v_94 = lisp_true;
    goto v_59;
v_61:
    v_94 = stack[-6];
    v_94 = Lsymbolp(nil, v_94);
    env = stack[-10];
    v_94 = (v_94 == nil ? lisp_true : nil);
    goto v_59;
    v_94 = nil;
v_59:
    if (v_94 == nil) goto v_57;
    goto v_46;
v_57:
    v_95 = stack[-7];
    v_94 = basic_elt(env, 7); // anp!!eq
    if (v_95 == v_94) goto v_70;
    else goto v_71;
v_70:
    stack[-5] = stack[-8];
    stack[0] = basic_elt(env, 8); // sameas
    v_94 = stack[-6];
    v_94 = ncons(v_94);
    env = stack[-10];
    v_94 = Lputprop(nil, stack[-5], stack[0], v_94);
    env = stack[-10];
    v_96 = stack[-6];
    v_95 = basic_elt(env, 9); // alsois
    v_94 = stack[-8];
    {   LispObject fn = basic_elt(env, 14); // traput
    v_94 = (*qfn3(fn))(fn, v_96, v_95, v_94);
    }
    env = stack[-10];
    goto v_46;
v_71:
    v_94 = stack[-6];
    {   LispObject fn = basic_elt(env, 15); // add2calls
    v_94 = (*qfn1(fn))(fn, v_94);
    }
    env = stack[-10];
    goto v_46;
v_46:
    v_94 = stack[-8];
    {   LispObject fn = basic_elt(env, 16); // outrefend
    v_94 = (*qfn1(fn))(fn, v_94);
    }
    v_94 = nil;
    ;}  // end of a binding scope
    ;}  // end of a binding scope
    ;}  // end of a binding scope
    ;}  // end of a binding scope
    ;}  // end of a binding scope
    return onevalue(v_94);
}



// Code for ofsf_smwmkatl

static LispObject CC_ofsf_smwmkatl(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_26, v_27, v_28, v_29, v_30;
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    v_27 = v_5;
    v_28 = v_4;
    v_29 = v_3;
    v_30 = v_2;
// end of prologue
    v_26 = qvalue(basic_elt(env, 1)); // !*rlsusi
    if (v_26 == nil) goto v_10;
    stack[-2] = v_30;
    stack[-1] = v_29;
    stack[0] = v_28;
    v_26 = v_27;
    v_26 = ncons(v_26);
    env = stack[-3];
    {
        LispObject v_34 = stack[-2];
        LispObject v_35 = stack[-1];
        LispObject v_36 = stack[0];
        LispObject fn = basic_elt(env, 2); // cl_susimkatl
        return (*qfn4up(fn))(fn, v_34, v_35, v_36, v_26);
    }
v_10:
    stack[-2] = v_30;
    stack[-1] = v_29;
    stack[0] = v_28;
    v_26 = v_27;
    v_26 = ncons(v_26);
    env = stack[-3];
    {
        LispObject v_37 = stack[-2];
        LispObject v_38 = stack[-1];
        LispObject v_39 = stack[0];
        LispObject fn = basic_elt(env, 3); // ofsf_smmkatl
        return (*qfn4up(fn))(fn, v_37, v_38, v_39, v_26);
    }
    v_26 = nil;
    return onevalue(v_26);
}



// Code for ioto_smaprinbuf

static LispObject CC_ioto_smaprinbuf(LispObject env,
                         LispObject v_2)
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
    v_13 = basic_elt(env, 1); // !!
    v_12 = qvalue(basic_elt(env, 2)); // rlsmaprinbuf!*
    v_12 = cons(v_13, v_12);
    env = stack[-1];
    setvalue(basic_elt(env, 2), v_12); // rlsmaprinbuf!*
    v_13 = stack[0];
    v_12 = qvalue(basic_elt(env, 2)); // rlsmaprinbuf!*
    v_12 = cons(v_13, v_12);
    env = stack[-1];
    setvalue(basic_elt(env, 2), v_12); // rlsmaprinbuf!*
    v_12 = stack[0];
    return onevalue(v_12);
}



// Code for lambdavar

static LispObject CC_lambdavar(LispObject env,
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
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_11 = v_2;
// end of prologue
    if (!car_legal(v_11)) v_11 = cdrerror(v_11); else
    v_11 = cdr(v_11);
    if (!car_legal(v_11)) v_11 = cdrerror(v_11); else
    v_11 = cdr(v_11);
    v_11 = Lreverse(nil, v_11);
    if (!car_legal(v_11)) v_11 = cdrerror(v_11); else
    v_11 = cdr(v_11);
    return onevalue(v_11);
}



// Code for n_nary

static LispObject CC_n_nary(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_48, v_49;
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
    v_48 = stack[-1];
    if (!car_legal(v_48)) v_49 = carerror(v_48); else
    v_49 = car(v_48);
    v_48 = basic_elt(env, 1); // e
    if (v_49 == v_48) goto v_13;
    else goto v_14;
v_13:
    v_49 = stack[0];
    v_48 = basic_elt(env, 2); // power
    v_48 = (v_49 == v_48 ? lisp_true : nil);
    goto v_12;
v_14:
    v_48 = nil;
    goto v_12;
    v_48 = nil;
v_12:
    if (v_48 == nil) goto v_10;
    v_48 = stack[-1];
    if (!car_legal(v_48)) v_49 = cdrerror(v_48); else
    v_49 = cdr(v_48);
    v_48 = basic_elt(env, 3); // exp
    {   LispObject fn = basic_elt(env, 9); // unary
    v_48 = (*qfn2(fn))(fn, v_49, v_48);
    }
    goto v_8;
v_10:
    v_48 = basic_elt(env, 4); // "<apply>"
    {   LispObject fn = basic_elt(env, 10); // printout
    v_48 = (*qfn1(fn))(fn, v_48);
    }
    env = stack[-2];
    v_48 = basic_elt(env, 5); // "<"
    v_48 = Lprinc(nil, v_48);
    env = stack[-2];
    v_48 = stack[0];
    v_48 = Lprinc(nil, v_48);
    env = stack[-2];
    v_48 = basic_elt(env, 6); // "/>"
    v_48 = Lprinc(nil, v_48);
    env = stack[-2];
    v_49 = qvalue(basic_elt(env, 7)); // indent
    v_48 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_48 = plus2(v_49, v_48);
    env = stack[-2];
    setvalue(basic_elt(env, 7), v_48); // indent
    v_48 = stack[-1];
    {   LispObject fn = basic_elt(env, 11); // multi_elem
    v_48 = (*qfn1(fn))(fn, v_48);
    }
    env = stack[-2];
    v_49 = qvalue(basic_elt(env, 7)); // indent
    v_48 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_48 = difference2(v_49, v_48);
    env = stack[-2];
    setvalue(basic_elt(env, 7), v_48); // indent
    v_48 = basic_elt(env, 8); // "</apply>"
    {   LispObject fn = basic_elt(env, 10); // printout
    v_48 = (*qfn1(fn))(fn, v_48);
    }
    goto v_8;
v_8:
    v_48 = nil;
    return onevalue(v_48);
}



// Code for gcd2

static LispObject CC_gcd2(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_24 = v_2;
// end of prologue
v_1:
    v_23 = stack[0];
    v_23 = Cremainder(v_24, v_23);
    env = stack[-1];
    v_25 = v_23;
    v_24 = v_25;
    v_23 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_24 == v_23) goto v_13;
    else goto v_14;
v_13:
    v_23 = stack[0];
    goto v_12;
v_14:
    v_24 = stack[0];
    v_23 = v_25;
    stack[0] = v_23;
    goto v_1;
    v_23 = nil;
v_12:
    return onevalue(v_23);
}



setup_type const u27_setup[] =
{
    {"gcd-in-vector",           G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_gcdKinKvector},
    {"lalr_make_compressed_goto_column",G0W1,CC_lalr_make_compressed_goto_column,G2W1,G3W1,G4W1},
    {"aex_neg",                 G0W1,     CC_aex_neg,G2W1,    G3W1,     G4W1},
    {"innprodp2",               G0W2,     G1W2,     CC_innprodp2,G3W2,  G4W2},
    {"talp_subat",              G0W2,     G1W2,     CC_talp_subat,G3W2, G4W2},
    {"rl_updcache",             CC_rl_updcache,G1W0,G2W0,     G3W0,     G4W0},
    {"ioto_form2str1",          G0W3,     G1W3,     G2W3,     CC_ioto_form2str1,G4W3},
    {"lambdafun",               G0W1,     CC_lambdafun,G2W1,  G3W1,     G4W1},
    {"ft:zerop",                G0W1,     CC_ftTzerop,G2W1,   G3W1,     G4W1},
    {"oldmtch",                 G0W2,     G1W2,     CC_oldmtch,G3W2,    G4W2},
    {"dipev2f",                 G0W2,     G1W2,     CC_dipev2f,G3W2,    G4W2},
    {"sfpx1",                   G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_sfpx1},
    {"pcdiv",                   G0W2,     G1W2,     CC_pcdiv, G3W2,     G4W2},
    {"sc_rep",                  G0W1,     CC_sc_rep,G2W1,     G3W1,     G4W1},
    {"super_der_simp",          G0W1,     CC_super_der_simp,G2W1,G3W1,  G4W1},
    {"yylex",                   CC_yylex, G1W0,     G2W0,     G3W0,     G4W0},
    {"outrdefun",               G0W3,     G1W3,     G2W3,     CC_outrdefun,G4W3},
    {"ofsf_sippsubst",          G0W2,     G1W2,     CC_ofsf_sippsubst,G3W2,G4W2},
    {"ofsf_surep",              G0W2,     G1W2,     CC_ofsf_surep,G3W2, G4W2},
    {"matpri",                  G0W1,     CC_matpri,G2W1,     G3W1,     G4W1},
    {"termorder1",              G0W2,     G1W2,     CC_termorder1,G3W2, G4W2},
    {"sfto_b:extadd",           G0W2,     G1W2,     CC_sfto_bTextadd,G3W2,G4W2},
    {"matrixrowom",             G0W1,     CC_matrixrowom,G2W1,G3W1,     G4W1},
    {"rootextractsq",           G0W1,     CC_rootextractsq,G2W1,G3W1,   G4W1},
    {"meq",                     G0W2,     G1W2,     CC_meq,   G3W2,     G4W2},
    {"edge_new_parent",         G0W1,     CC_edge_new_parent,G2W1,G3W1, G4W1},
    {"log_inlines",             G0W3,     G1W3,     G2W3,     CC_log_inlines,G4W3},
    {"red=hidelt",              G0W1,     CC_redMhidelt,G2W1, G3W1,     G4W1},
    {"extract_dummy_ids",       G0W1,     CC_extract_dummy_ids,G2W1,G3W1,G4W1},
    {"lalr_most_common_dest",   G0W1,     CC_lalr_most_common_dest,G2W1,G3W1,G4W1},
    {"formrlis",                G0W3,     G1W3,     G2W3,     CC_formrlis,G4W3},
    {"get-free-form",           G0W1,     CC_getKfreeKform,G2W1,G3W1,   G4W1},
    {"get_char_value",          G0W2,     G1W2,     CC_get_char_value,G3W2,G4W2},
    {"qqe_arg-check-q",         G0W1,     CC_qqe_argKcheckKq,G2W1,G3W1, G4W1},
    {"fortranname",             G0W1,     CC_fortranname,G2W1,G3W1,     G4W1},
    {"assert_error",            G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_assert_error},
    {"nf",                      G0W3,     G1W3,     G2W3,     CC_nf,    G4W3},
    {"lalr_make_compressed_action_table",CC_lalr_make_compressed_action_table,G1W0,G2W0,G3W0,G4W0},
    {"outref",                  G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_outref},
    {"ofsf_smwmkatl",           G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_ofsf_smwmkatl},
    {"ioto_smaprinbuf",         G0W1,     CC_ioto_smaprinbuf,G2W1,G3W1, G4W1},
    {"lambdavar",               G0W1,     CC_lambdavar,G2W1,  G3W1,     G4W1},
    {"n_nary",                  G0W2,     G1W2,     CC_n_nary,G3W2,     G4W2},
    {"gcd2",                    G0W2,     G1W2,     CC_gcd2,  G3W2,     G4W2},
    {nullptr, 
        reinterpret_cast<no_args *>(
            reinterpret_cast<uintptr_t>("u27")),
        reinterpret_cast<one_arg *>(
            reinterpret_cast<uintptr_t>("113617 1747335 6307610")),
        nullptr, nullptr, nullptr}
};

// end of generated code
