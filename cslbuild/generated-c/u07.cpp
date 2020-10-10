
// $destdir/u07.c        Machine generated C code

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


// Code for clear!-column

static LispObject CC_clearKcolumn(LispObject env,
                         LispObject v_3, LispObject v_4,
                         LispObject v_5, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_188, v_189, v_190;
    LispObject v_6;
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
        push(v_3,v_4,v_5,v_6);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_6,v_5,v_4,v_3);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil, nil, nil, nil, nil);
    real_push(nil, nil, nil, nil, nil);
    push(nil, nil);
    stack_popper stack_popper_var(13);
// copy arguments values to proper place
    stack[-8] = v_6;
    stack[-9] = v_5;
    v_188 = v_4;
    stack[-10] = v_3;
// end of prologue
// Binding null!-space!-basis
// FLUIDBIND: reloadenv=12 litvec-offset=1 saveloc=11
{   bind_fluid_stack bind_fluid_var(-12, 1, -11);
    setvalue(basic_elt(env, 1), v_188); // null!-space!-basis
    v_188 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[0] = v_188;
v_17:
    v_189 = stack[-9];
    v_188 = stack[0];
    v_189 = Lgetv(nil, v_189, v_188);
    env = stack[-12];
    v_188 = stack[-10];
    v_189 = Lgetv(nil, v_189, v_188);
    env = stack[-12];
    v_188 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_189 == v_188) goto v_25;
    else goto v_26;
v_25:
    v_188 = lisp_true;
    goto v_24;
v_26:
    v_189 = stack[0];
    v_188 = stack[-10];
    if ((static_cast<std::intptr_t>(v_189) < static_cast<std::intptr_t>(v_188))) goto v_39;
    v_188 = nil;
    goto v_37;
v_39:
    v_189 = stack[-9];
    v_188 = stack[0];
    v_189 = Lgetv(nil, v_189, v_188);
    env = stack[-12];
    v_188 = stack[0];
    v_189 = Lgetv(nil, v_189, v_188);
    env = stack[-12];
    v_188 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_188 = (v_189 == v_188 ? lisp_true : nil);
    v_188 = (v_188 == nil ? lisp_true : nil);
    goto v_37;
    v_188 = nil;
v_37:
    goto v_24;
    v_188 = nil;
v_24:
    if (v_188 == nil) goto v_22;
    v_188 = stack[0];
    v_189 = static_cast<LispObject>(static_cast<std::intptr_t>(v_188) + 0x10);
    stack[0] = v_189;
    v_188 = stack[-8];
    if ((static_cast<std::intptr_t>(v_189) > static_cast<std::intptr_t>(v_188))) goto v_55;
    else goto v_56;
v_55:
    v_189 = stack[-10];
    v_188 = qvalue(basic_elt(env, 1)); // null!-space!-basis
    v_188 = cons(v_189, v_188);
    goto v_16;
v_56:
    goto v_17;
    goto v_20;
v_22:
v_20:
    v_189 = stack[-9];
    v_188 = stack[0];
    v_188 = Lgetv(nil, v_189, v_188);
    env = stack[-12];
    stack[-7] = v_188;
    stack[-1] = stack[-9];
    v_189 = stack[-9];
    v_188 = stack[-10];
    v_188 = Lgetv(nil, v_189, v_188);
    env = stack[-12];
    v_188 = Lputv(nil, stack[-1], stack[0], v_188);
    env = stack[-12];
    v_190 = stack[-9];
    v_189 = stack[-10];
    v_188 = stack[-7];
    v_188 = Lputv(nil, v_190, v_189, v_188);
    env = stack[-12];
    v_189 = stack[-9];
    v_188 = stack[-10];
    v_189 = Lgetv(nil, v_189, v_188);
    env = stack[-12];
    v_188 = stack[-10];
    v_188 = Lgetv(nil, v_189, v_188);
    env = stack[-12];
    v_188 = Lmodular_reciprocal(nil, v_188);
    env = stack[-12];
    {   std::intptr_t w = int_of_fixnum(v_188);
        if (w != 0) w = current_modulus - w;
        v_188 = fixnum_of_int(w);
    }
    stack[-7] = v_188;
    v_188 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-6] = v_188;
v_88:
    v_189 = stack[-8];
    v_188 = stack[-6];
    v_188 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_189) - static_cast<std::uintptr_t>(v_188) + TAG_FIXNUM);
    v_188 = (static_cast<std::intptr_t>(v_188) < 0 ? lisp_true : nil);
    if (v_188 == nil) goto v_93;
    goto v_87;
v_93:
    v_189 = stack[-6];
    v_188 = stack[-10];
    if (equal(v_189, v_188)) goto v_102;
    v_189 = stack[-9];
    v_188 = stack[-6];
    v_189 = Lgetv(nil, v_189, v_188);
    env = stack[-12];
    v_188 = stack[-10];
    v_188 = Lgetv(nil, v_189, v_188);
    env = stack[-12];
    stack[-5] = v_188;
    v_189 = stack[-5];
    v_188 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_189 == v_188) goto v_116;
    v_189 = stack[-5];
    v_188 = stack[-7];
    v_188 = Lmodular_times(nil, v_189, v_188);
    env = stack[-12];
    stack[-5] = v_188;
    v_188 = stack[-10];
    stack[-4] = v_188;
v_125:
    v_189 = stack[-8];
    v_188 = stack[-4];
    v_188 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_189) - static_cast<std::uintptr_t>(v_188) + TAG_FIXNUM);
    v_188 = (static_cast<std::intptr_t>(v_188) < 0 ? lisp_true : nil);
    if (v_188 == nil) goto v_130;
    goto v_124;
v_130:
    v_189 = stack[-9];
    v_188 = stack[-6];
    stack[-3] = Lgetv(nil, v_189, v_188);
    env = stack[-12];
    stack[-2] = stack[-4];
    v_189 = stack[-9];
    v_188 = stack[-6];
    v_189 = Lgetv(nil, v_189, v_188);
    env = stack[-12];
    v_188 = stack[-4];
    stack[-1] = Lgetv(nil, v_189, v_188);
    env = stack[-12];
    stack[0] = stack[-5];
    v_189 = stack[-9];
    v_188 = stack[-10];
    v_189 = Lgetv(nil, v_189, v_188);
    env = stack[-12];
    v_188 = stack[-4];
    v_188 = Lgetv(nil, v_189, v_188);
    env = stack[-12];
    v_188 = Lmodular_times(nil, stack[0], v_188);
    env = stack[-12];
    {   std::intptr_t w = int_of_fixnum(stack[-1]) + int_of_fixnum(v_188);
        if (w >= current_modulus) w -= current_modulus;
        v_188 = fixnum_of_int(w);
    }
    v_188 = Lputv(nil, stack[-3], stack[-2], v_188);
    env = stack[-12];
    v_188 = stack[-4];
    v_188 = static_cast<LispObject>(static_cast<std::intptr_t>(v_188) + 0x10);
    stack[-4] = v_188;
    goto v_125;
v_124:
    goto v_114;
v_116:
v_114:
    goto v_100;
v_102:
v_100:
    v_188 = stack[-6];
    v_188 = static_cast<LispObject>(static_cast<std::intptr_t>(v_188) + 0x10);
    stack[-6] = v_188;
    goto v_88;
v_87:
    v_188 = stack[-10];
    stack[-2] = v_188;
v_161:
    v_189 = stack[-8];
    v_188 = stack[-2];
    v_188 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_189) - static_cast<std::uintptr_t>(v_188) + TAG_FIXNUM);
    v_188 = (static_cast<std::intptr_t>(v_188) < 0 ? lisp_true : nil);
    if (v_188 == nil) goto v_166;
    goto v_160;
v_166:
    v_189 = stack[-9];
    v_188 = stack[-10];
    stack[-1] = Lgetv(nil, v_189, v_188);
    env = stack[-12];
    stack[0] = stack[-2];
    v_189 = stack[-9];
    v_188 = stack[-10];
    v_189 = Lgetv(nil, v_189, v_188);
    env = stack[-12];
    v_188 = stack[-2];
    v_189 = Lgetv(nil, v_189, v_188);
    env = stack[-12];
    v_188 = stack[-7];
    v_188 = Lmodular_times(nil, v_189, v_188);
    env = stack[-12];
    v_188 = Lputv(nil, stack[-1], stack[0], v_188);
    env = stack[-12];
    v_188 = stack[-2];
    v_188 = static_cast<LispObject>(static_cast<std::intptr_t>(v_188) + 0x10);
    stack[-2] = v_188;
    goto v_161;
v_160:
    v_188 = qvalue(basic_elt(env, 1)); // null!-space!-basis
v_16:
    ;}  // end of a binding scope
    return onevalue(v_188);
}



// Code for lalr_add_goto

static LispObject CC_lalr_add_goto(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_15, v_16, v_17;
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
    v_15 = v_4;
    v_16 = v_3;
    v_17 = v_2;
// end of prologue
    stack[-3] = v_16;
    stack[-2] = qvalue(basic_elt(env, 1)); // goto_table
    stack[-1] = v_17;
    stack[0] = v_15;
    v_15 = qvalue(basic_elt(env, 1)); // goto_table
    {   LispObject fn = basic_elt(env, 2); // gethash
    v_15 = (*qfn2(fn))(fn, v_16, v_15);
    }
    env = stack[-4];
    v_15 = acons(stack[-1], stack[0], v_15);
    env = stack[-4];
    {
        LispObject v_22 = stack[-3];
        LispObject v_23 = stack[-2];
        LispObject fn = basic_elt(env, 3); // puthash
        return (*qfn3(fn))(fn, v_22, v_23, v_15);
    }
}



// Code for wulessp

static LispObject CC_wulessp(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_95;
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
    v_95 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // wuconstantp
    v_95 = (*qfn1(fn))(fn, v_95);
    }
    env = stack[-3];
    if (v_95 == nil) goto v_12;
    v_95 = nil;
    stack[-2] = v_95;
    goto v_10;
v_12:
    v_95 = stack[-1];
    if (!car_legal(v_95)) v_95 = carerror(v_95); else
    v_95 = car(v_95);
    if (!car_legal(v_95)) v_95 = carerror(v_95); else
    v_95 = car(v_95);
    if (!car_legal(v_95)) v_95 = carerror(v_95); else
    v_95 = car(v_95);
    stack[-2] = v_95;
    goto v_10;
    stack[-2] = nil;
v_10:
    v_95 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // wuconstantp
    v_95 = (*qfn1(fn))(fn, v_95);
    }
    env = stack[-3];
    if (v_95 == nil) goto v_25;
    v_95 = nil;
    goto v_23;
v_25:
    v_95 = stack[0];
    if (!car_legal(v_95)) v_95 = carerror(v_95); else
    v_95 = car(v_95);
    if (!car_legal(v_95)) v_95 = carerror(v_95); else
    v_95 = car(v_95);
    if (!car_legal(v_95)) v_95 = carerror(v_95); else
    v_95 = car(v_95);
    goto v_23;
    v_95 = nil;
v_23:
    {   LispObject fn = basic_elt(env, 2); // symbollessp
    v_95 = (*qfn2(fn))(fn, stack[-2], v_95);
    }
    env = stack[-3];
    if (v_95 == nil) goto v_7;
    else goto v_6;
v_7:
    v_95 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // wuconstantp
    v_95 = (*qfn1(fn))(fn, v_95);
    }
    env = stack[-3];
    if (v_95 == nil) goto v_42;
    v_95 = nil;
    stack[-2] = v_95;
    goto v_40;
v_42:
    v_95 = stack[-1];
    if (!car_legal(v_95)) v_95 = carerror(v_95); else
    v_95 = car(v_95);
    if (!car_legal(v_95)) v_95 = carerror(v_95); else
    v_95 = car(v_95);
    if (!car_legal(v_95)) v_95 = carerror(v_95); else
    v_95 = car(v_95);
    stack[-2] = v_95;
    goto v_40;
    stack[-2] = nil;
v_40:
    v_95 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // wuconstantp
    v_95 = (*qfn1(fn))(fn, v_95);
    }
    env = stack[-3];
    if (v_95 == nil) goto v_55;
    v_95 = nil;
    goto v_53;
v_55:
    v_95 = stack[0];
    if (!car_legal(v_95)) v_95 = carerror(v_95); else
    v_95 = car(v_95);
    if (!car_legal(v_95)) v_95 = carerror(v_95); else
    v_95 = car(v_95);
    if (!car_legal(v_95)) v_95 = carerror(v_95); else
    v_95 = car(v_95);
    goto v_53;
    v_95 = nil;
v_53:
    if (equal(stack[-2], v_95)) goto v_37;
    else goto v_38;
v_37:
    v_95 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // wuconstantp
    v_95 = (*qfn1(fn))(fn, v_95);
    }
    env = stack[-3];
    if (v_95 == nil) goto v_69;
    v_95 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-1] = v_95;
    goto v_67;
v_69:
    v_95 = stack[-1];
    if (!car_legal(v_95)) v_95 = carerror(v_95); else
    v_95 = car(v_95);
    if (!car_legal(v_95)) v_95 = carerror(v_95); else
    v_95 = car(v_95);
    if (!car_legal(v_95)) v_95 = cdrerror(v_95); else
    v_95 = cdr(v_95);
    stack[-1] = v_95;
    goto v_67;
    stack[-1] = nil;
v_67:
    v_95 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // wuconstantp
    v_95 = (*qfn1(fn))(fn, v_95);
    }
    if (v_95 == nil) goto v_82;
    v_95 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_80;
v_82:
    v_95 = stack[0];
    if (!car_legal(v_95)) v_95 = carerror(v_95); else
    v_95 = car(v_95);
    if (!car_legal(v_95)) v_95 = carerror(v_95); else
    v_95 = car(v_95);
    if (!car_legal(v_95)) v_95 = cdrerror(v_95); else
    v_95 = cdr(v_95);
    goto v_80;
    v_95 = nil;
v_80:
    {
        LispObject v_99 = stack[-1];
        return Llessp_2(nil, v_99, v_95);
    }
v_38:
    v_95 = nil;
    goto v_36;
    v_95 = nil;
v_36:
v_6:
    return onevalue(v_95);
}



// Code for talp_smwupdknowl

static LispObject CC_talp_smwupdknowl(LispObject env, LispObject v_2,
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
        LispObject fn = basic_elt(env, 2); // cl_smupdknowl
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
        LispObject fn = basic_elt(env, 3); // talp_smupdknowl
        return (*qfn4up(fn))(fn, v_37, v_38, v_39, v_26);
    }
    v_26 = nil;
    return onevalue(v_26);
}



// Code for mri_0mk2

static LispObject CC_mri_0mk2(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_11, v_12, v_13, v_14;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_13 = v_4;
    v_11 = v_3;
    v_12 = v_2;
// end of prologue
    v_14 = v_12;
    v_12 = v_11;
    v_11 = nil;
    return list4(v_14, v_12, v_11, v_13);
}



// Code for rl_simpat

static LispObject CC_rl_simpat(LispObject env,
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
    stack[0] = qvalue(basic_elt(env, 1)); // rl_simpat!*
    v_8 = ncons(v_8);
    env = stack[-1];
    {
        LispObject v_10 = stack[0];
        LispObject fn = basic_elt(env, 2); // apply
        return (*qfn2(fn))(fn, v_10, v_8);
    }
}



// Code for ibalp_varlt1

static LispObject CC_ibalp_varlt1(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_53, v_54, v_55;
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
    v_55 = v_2;
// end of prologue
    v_54 = v_55;
    v_53 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_54 == v_53) goto v_13;
    else goto v_14;
v_13:
    v_53 = lisp_true;
    goto v_12;
v_14:
    v_54 = v_55;
    v_53 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_53 = (v_54 == v_53 ? lisp_true : nil);
    goto v_12;
    v_53 = nil;
v_12:
    if (v_53 == nil) goto v_10;
    v_53 = nil;
    goto v_6;
v_10:
    v_53 = v_55;
    if (symbolp(v_53)) goto v_26;
    else goto v_27;
v_26:
    v_54 = v_55;
    v_53 = stack[0];
    {
        LispObject fn = basic_elt(env, 1); // lto_insertq
        return (*qfn2(fn))(fn, v_54, v_53);
    }
v_27:
    v_53 = v_55;
    {   LispObject fn = basic_elt(env, 2); // ibalp_argn
    v_53 = (*qfn1(fn))(fn, v_53);
    }
    env = stack[-2];
    stack[-1] = v_53;
v_35:
    v_53 = stack[-1];
    if (v_53 == nil) goto v_40;
    else goto v_41;
v_40:
    goto v_34;
v_41:
    v_53 = stack[-1];
    if (!car_legal(v_53)) v_53 = carerror(v_53); else
    v_53 = car(v_53);
    v_54 = v_53;
    v_53 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // ibalp_varlt1
    v_53 = (*qfn2(fn))(fn, v_54, v_53);
    }
    env = stack[-2];
    stack[0] = v_53;
    v_53 = stack[-1];
    if (!car_legal(v_53)) v_53 = cdrerror(v_53); else
    v_53 = cdr(v_53);
    stack[-1] = v_53;
    goto v_35;
v_34:
    v_53 = stack[0];
v_6:
    return onevalue(v_53);
}



// Code for ev_invlexcomp

static LispObject CC_ev_invlexcomp(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_61, v_62;
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
    v_61 = stack[-1];
    if (v_61 == nil) goto v_10;
    else goto v_11;
v_10:
    v_61 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_7;
v_11:
    v_61 = stack[-1];
    if (!car_legal(v_61)) v_62 = carerror(v_61); else
    v_62 = car(v_61);
    v_61 = stack[0];
    if (!car_legal(v_61)) v_61 = carerror(v_61); else
    v_61 = car(v_61);
    {   LispObject fn = basic_elt(env, 1); // iequal
    v_61 = (*qfn2(fn))(fn, v_62, v_61);
    }
    env = stack[-3];
    if (v_61 == nil) goto v_17;
    v_61 = stack[-1];
    if (!car_legal(v_61)) v_62 = cdrerror(v_61); else
    v_62 = cdr(v_61);
    v_61 = stack[0];
    if (!car_legal(v_61)) v_61 = cdrerror(v_61); else
    v_61 = cdr(v_61);
    stack[-1] = v_62;
    stack[0] = v_61;
    goto v_1;
v_17:
    v_61 = stack[-1];
    if (!car_legal(v_61)) v_62 = cdrerror(v_61); else
    v_62 = cdr(v_61);
    v_61 = stack[0];
    if (!car_legal(v_61)) v_61 = cdrerror(v_61); else
    v_61 = cdr(v_61);
    {   LispObject fn = basic_elt(env, 0); // ev_invlexcomp
    v_61 = (*qfn2(fn))(fn, v_62, v_61);
    }
    env = stack[-3];
    stack[-2] = v_61;
    v_62 = stack[-2];
    v_61 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {   LispObject fn = basic_elt(env, 1); // iequal
    v_61 = (*qfn2(fn))(fn, v_62, v_61);
    }
    env = stack[-3];
    if (v_61 == nil) goto v_35;
    else goto v_36;
v_35:
    v_61 = stack[-2];
    goto v_7;
v_36:
    v_61 = stack[0];
    if (!car_legal(v_61)) v_62 = carerror(v_61); else
    v_62 = car(v_61);
    v_61 = stack[-1];
    if (!car_legal(v_61)) v_61 = carerror(v_61); else
    v_61 = car(v_61);
    {   LispObject fn = basic_elt(env, 1); // iequal
    v_61 = (*qfn2(fn))(fn, v_62, v_61);
    }
    if (v_61 == nil) goto v_44;
    v_61 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_7;
v_44:
    v_61 = stack[0];
    if (!car_legal(v_61)) v_62 = carerror(v_61); else
    v_62 = car(v_61);
    v_61 = stack[-1];
    if (!car_legal(v_61)) v_61 = carerror(v_61); else
    v_61 = car(v_61);
    if ((static_cast<std::intptr_t>(v_62) > static_cast<std::intptr_t>(v_61))) goto v_53;
    else goto v_54;
v_53:
    v_61 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_7;
v_54:
    v_61 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
v_7:
    return onevalue(v_61);
}



// Code for powers2

static LispObject CC_powers2(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    v_52 = stack[-2];
    if (!consp(v_52)) goto v_16;
    else goto v_17;
v_16:
    v_52 = lisp_true;
    goto v_15;
v_17:
    v_52 = stack[-2];
    if (!car_legal(v_52)) v_52 = carerror(v_52); else
    v_52 = car(v_52);
    v_52 = (consp(v_52) ? nil : lisp_true);
    goto v_15;
    v_52 = nil;
v_15:
    if (v_52 == nil) goto v_13;
    v_52 = stack[-2];
    if (v_52 == nil) goto v_27;
    else goto v_28;
v_27:
    v_52 = stack[-1];
    goto v_8;
v_28:
    v_53 = stack[0];
    v_52 = stack[-1];
    {
        LispObject fn = basic_elt(env, 1); // powers4
        return (*qfn2(fn))(fn, v_53, v_52);
    }
    goto v_11;
v_13:
    v_52 = stack[-2];
    if (!car_legal(v_52)) v_52 = carerror(v_52); else
    v_52 = car(v_52);
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    stack[-3] = v_52;
    v_52 = stack[-2];
    if (!car_legal(v_52)) v_54 = cdrerror(v_52); else
    v_54 = cdr(v_52);
    v_53 = stack[-1];
    v_52 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // powers2
    v_52 = (*qfn3(fn))(fn, v_54, v_53, v_52);
    }
    env = stack[-4];
    stack[-1] = v_52;
    v_52 = stack[-2];
    if (!car_legal(v_52)) v_52 = carerror(v_52); else
    v_52 = car(v_52);
    if (!car_legal(v_52)) v_53 = carerror(v_52); else
    v_53 = car(v_52);
    v_52 = stack[0];
    v_52 = cons(v_53, v_52);
    env = stack[-4];
    stack[0] = v_52;
    v_52 = stack[-3];
    stack[-2] = v_52;
    goto v_9;
v_11:
    v_52 = nil;
v_8:
    return onevalue(v_52);
}



// Code for find

static LispObject CC_find(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_72, v_73;
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
    v_72 = stack[0];
    v_72 = Lexplode(nil, v_72);
    env = stack[-2];
    stack[0] = v_72;
    v_73 = stack[-1];
    v_72 = stack[0];
    {   LispObject fn = basic_elt(env, 8); // find2
    v_72 = (*qfn2(fn))(fn, v_73, v_72);
    }
    env = stack[-2];
    stack[-1] = v_72;
    v_72 = stack[-1];
    if (!car_legal(v_72)) v_73 = carerror(v_72); else
    v_73 = car(v_72);
    v_72 = basic_elt(env, 1); // !=
    if (v_73 == v_72) goto v_16;
    v_73 = stack[-1];
    v_72 = stack[0];
    {   LispObject fn = basic_elt(env, 8); // find2
    v_72 = (*qfn2(fn))(fn, v_73, v_72);
    }
    env = stack[-2];
    stack[-1] = v_72;
    goto v_14;
v_16:
v_14:
    v_73 = basic_elt(env, 2); // !"
    v_72 = stack[-1];
    {   LispObject fn = basic_elt(env, 9); // delall
    v_72 = (*qfn2(fn))(fn, v_73, v_72);
    }
    env = stack[-2];
    stack[-1] = v_72;
    v_73 = basic_elt(env, 1); // !=
    v_72 = stack[-1];
    {   LispObject fn = basic_elt(env, 9); // delall
    v_72 = (*qfn2(fn))(fn, v_73, v_72);
    }
    env = stack[-2];
    stack[-1] = v_72;
    v_73 = basic_elt(env, 3); // !$
    v_72 = stack[-1];
    {   LispObject fn = basic_elt(env, 9); // delall
    v_72 = (*qfn2(fn))(fn, v_73, v_72);
    }
    env = stack[-2];
    stack[-1] = v_72;
    v_73 = stack[-1];
    v_72 = basic_elt(env, 4); // (stop)
    if (equal(v_73, v_72)) goto v_35;
    v_72 = stack[-1];
    v_72 = Lreverse(nil, v_72);
    env = stack[-2];
    if (!car_legal(v_72)) v_73 = carerror(v_72); else
    v_73 = car(v_72);
    v_72 = basic_elt(env, 5); // !/
    if (v_73 == v_72) goto v_40;
    else goto v_41;
v_40:
    v_72 = stack[-1];
    v_72 = Lreverse(nil, v_72);
    env = stack[-2];
    if (!car_legal(v_72)) v_72 = cdrerror(v_72); else
    v_72 = cdr(v_72);
    v_72 = Lreverse(nil, v_72);
    env = stack[-2];
    stack[-1] = v_72;
    goto v_39;
v_41:
v_39:
    goto v_33;
v_35:
v_33:
    v_73 = stack[-1];
    v_72 = basic_elt(env, 4); // (stop)
    if (equal(v_73, v_72)) goto v_53;
    v_73 = stack[0];
    v_72 = basic_elt(env, 6); // (d e f i n i t i o n u r l)
    if (equal(v_73, v_72)) goto v_58;
    else goto v_59;
v_58:
    v_73 = basic_elt(env, 7); // ! 
    v_72 = stack[-1];
    {
        LispObject fn = basic_elt(env, 9); // delall
        return (*qfn2(fn))(fn, v_73, v_72);
    }
v_59:
    v_72 = stack[-1];
    {
        LispObject fn = basic_elt(env, 10); // compress!*
        return (*qfn1(fn))(fn, v_72);
    }
    goto v_51;
v_53:
    v_72 = nil;
    goto v_7;
v_51:
    v_72 = nil;
v_7:
    return onevalue(v_72);
}



// Code for simp!*

static LispObject CC_simpH(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_123, v_124;
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
// Binding !*asymp!*
// FLUIDBIND: reloadenv=4 litvec-offset=1 saveloc=3
{   bind_fluid_stack bind_fluid_var(-4, 1, -3);
    setvalue(basic_elt(env, 1), nil); // !*asymp!*
    v_124 = stack[-2];
    v_123 = basic_elt(env, 2); // !*sq
    if (!consp(v_124)) goto v_16;
    v_124 = car(v_124);
    if (v_124 == v_123) goto v_15;
    else goto v_16;
v_15:
    v_123 = stack[-2];
    if (!car_legal(v_123)) v_123 = cdrerror(v_123); else
    v_123 = cdr(v_123);
    if (!car_legal(v_123)) v_123 = cdrerror(v_123); else
    v_123 = cdr(v_123);
    if (!car_legal(v_123)) v_123 = carerror(v_123); else
    v_123 = car(v_123);
    if (v_123 == nil) goto v_22;
    else goto v_23;
v_22:
    v_123 = nil;
    goto v_21;
v_23:
    v_123 = qvalue(basic_elt(env, 3)); // !*resimp
    v_123 = (v_123 == nil ? lisp_true : nil);
    goto v_21;
    v_123 = nil;
v_21:
    goto v_14;
v_16:
    v_123 = nil;
    goto v_14;
    v_123 = nil;
v_14:
    if (v_123 == nil) goto v_12;
    v_123 = stack[-2];
    if (!car_legal(v_123)) v_123 = cdrerror(v_123); else
    v_123 = cdr(v_123);
    if (!car_legal(v_123)) v_123 = carerror(v_123); else
    v_123 = car(v_123);
    goto v_8;
v_12:
    v_124 = qvalue(basic_elt(env, 4)); // mul!*
    v_123 = qvalue(basic_elt(env, 5)); // !*sub2
    v_123 = cons(v_124, v_123);
    env = stack[-4];
    stack[-1] = v_123;
    v_123 = nil;
    setvalue(basic_elt(env, 4), v_123); // mul!*
    v_123 = stack[-2];
    {   LispObject fn = basic_elt(env, 13); // simp
    v_123 = (*qfn1(fn))(fn, v_123);
    }
    env = stack[-4];
    stack[-2] = v_123;
    v_123 = qvalue(basic_elt(env, 6)); // !*nospurp
    if (v_123 == nil) goto v_48;
    v_124 = qvalue(basic_elt(env, 4)); // mul!*
    v_123 = basic_elt(env, 7); // (isimpq)
    {   LispObject fn = basic_elt(env, 14); // union
    v_123 = (*qfn2(fn))(fn, v_124, v_123);
    }
    env = stack[-4];
    setvalue(basic_elt(env, 4), v_123); // mul!*
    goto v_46;
v_48:
v_46:
    v_123 = qvalue(basic_elt(env, 4)); // mul!*
    stack[0] = v_123;
v_56:
    v_123 = stack[0];
    if (v_123 == nil) goto v_60;
    else goto v_61;
v_60:
    goto v_55;
v_61:
    v_123 = stack[0];
    if (!car_legal(v_123)) v_123 = carerror(v_123); else
    v_123 = car(v_123);
    v_124 = v_123;
    v_123 = stack[-2];
    v_123 = Lapply1(nil, v_124, v_123);
    env = stack[-4];
    stack[-2] = v_123;
    v_123 = stack[0];
    if (!car_legal(v_123)) v_123 = cdrerror(v_123); else
    v_123 = cdr(v_123);
    stack[0] = v_123;
    goto v_56;
v_55:
    v_123 = stack[-1];
    if (!car_legal(v_123)) v_123 = carerror(v_123); else
    v_123 = car(v_123);
    setvalue(basic_elt(env, 4), v_123); // mul!*
    v_123 = stack[-2];
    {   LispObject fn = basic_elt(env, 15); // subs2
    v_123 = (*qfn1(fn))(fn, v_123);
    }
    env = stack[-4];
    stack[-2] = v_123;
    v_123 = qvalue(basic_elt(env, 8)); // !*combinelogs
    if (v_123 == nil) goto v_79;
    v_123 = stack[-2];
    {   LispObject fn = basic_elt(env, 16); // clogsq!*
    v_123 = (*qfn1(fn))(fn, v_123);
    }
    env = stack[-4];
    stack[-2] = v_123;
    goto v_77;
v_79:
v_77:
    v_124 = qvalue(basic_elt(env, 9)); // dmode!*
    v_123 = basic_elt(env, 10); // !:gi!:
    if (v_124 == v_123) goto v_89;
    else goto v_90;
v_89:
    v_123 = qvalue(basic_elt(env, 11)); // !*norationalgi
    v_123 = (v_123 == nil ? lisp_true : nil);
    goto v_88;
v_90:
    v_123 = nil;
    goto v_88;
    v_123 = nil;
v_88:
    if (v_123 == nil) goto v_86;
    v_123 = stack[-2];
    {   LispObject fn = basic_elt(env, 17); // girationalize!:
    v_123 = (*qfn1(fn))(fn, v_123);
    }
    env = stack[-4];
    stack[-2] = v_123;
    goto v_84;
v_86:
    v_123 = qvalue(basic_elt(env, 12)); // !*rationalize
    if (v_123 == nil) goto v_101;
    v_123 = stack[-2];
    {   LispObject fn = basic_elt(env, 18); // rationalizesq
    v_123 = (*qfn1(fn))(fn, v_123);
    }
    env = stack[-4];
    stack[-2] = v_123;
    goto v_84;
v_101:
    v_123 = stack[-2];
    {   LispObject fn = basic_elt(env, 19); // rationalizei
    v_123 = (*qfn1(fn))(fn, v_123);
    }
    env = stack[-4];
    stack[-2] = v_123;
    goto v_84;
v_84:
    v_123 = stack[-1];
    if (!car_legal(v_123)) v_123 = cdrerror(v_123); else
    v_123 = cdr(v_123);
    setvalue(basic_elt(env, 5), v_123); // !*sub2
    v_123 = qvalue(basic_elt(env, 1)); // !*asymp!*
    if (v_123 == nil) goto v_114;
    v_123 = qvalue(basic_elt(env, 12)); // !*rationalize
    if (v_123 == nil) goto v_114;
    v_123 = stack[-2];
    {   LispObject fn = basic_elt(env, 20); // gcdchk
    v_123 = (*qfn1(fn))(fn, v_123);
    }
    stack[-2] = v_123;
    goto v_112;
v_114:
v_112:
    v_123 = stack[-2];
v_8:
    ;}  // end of a binding scope
    return onevalue(v_123);
}



// Code for downwght

static LispObject CC_downwght(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    v_12 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // delhisto
    v_12 = (*qfn1(fn))(fn, v_12);
    }
    env = stack[-2];
    v_13 = stack[-1];
    v_12 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // downwght1
    v_12 = (*qfn2(fn))(fn, v_13, v_12);
    }
    env = stack[-2];
    v_12 = stack[-1];
    {
        LispObject fn = basic_elt(env, 3); // inshisto
        return (*qfn1(fn))(fn, v_12);
    }
}



// Code for freexp

static LispObject CC_freexp(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
v_1:
    v_22 = stack[0];
    if (!consp(v_22)) goto v_6;
    else goto v_7;
v_6:
    v_22 = stack[0];
    {
        LispObject fn = basic_elt(env, 1); // pm!:free
        return (*qfn1(fn))(fn, v_22);
    }
v_7:
    v_22 = stack[0];
    if (!car_legal(v_22)) v_22 = carerror(v_22); else
    v_22 = car(v_22);
    {   LispObject fn = basic_elt(env, 0); // freexp
    v_22 = (*qfn1(fn))(fn, v_22);
    }
    env = stack[-1];
    if (v_22 == nil) goto v_15;
    else goto v_14;
v_15:
    v_22 = stack[0];
    if (!car_legal(v_22)) v_22 = cdrerror(v_22); else
    v_22 = cdr(v_22);
    stack[0] = v_22;
    goto v_1;
v_14:
    goto v_5;
    v_22 = nil;
v_5:
    return onevalue(v_22);
}



// Code for termordp

static LispObject CC_termordp(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_10 = v_2;
// end of prologue
    {   LispObject fn = basic_elt(env, 1); // wedgefax
    stack[-1] = (*qfn1(fn))(fn, v_10);
    }
    env = stack[-2];
    v_10 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // wedgefax
    v_10 = (*qfn1(fn))(fn, v_10);
    }
    env = stack[-2];
    {
        LispObject v_13 = stack[-1];
        LispObject fn = basic_elt(env, 2); // monordp
        return (*qfn2(fn))(fn, v_13, v_10);
    }
}



// Code for gizerop!:

static LispObject CC_gizeropT(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_20, v_21, v_22;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_21 = v_2;
// end of prologue
    v_20 = v_21;
    if (!car_legal(v_20)) v_20 = cdrerror(v_20); else
    v_20 = cdr(v_20);
    if (!car_legal(v_20)) v_22 = carerror(v_20); else
    v_22 = car(v_20);
    v_20 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_22 == v_20) goto v_6;
    else goto v_7;
v_6:
    v_20 = v_21;
    if (!car_legal(v_20)) v_20 = cdrerror(v_20); else
    v_20 = cdr(v_20);
    if (!car_legal(v_20)) v_21 = cdrerror(v_20); else
    v_21 = cdr(v_20);
    v_20 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_20 = (v_21 == v_20 ? lisp_true : nil);
    goto v_5;
v_7:
    v_20 = nil;
    goto v_5;
    v_20 = nil;
v_5:
    return onevalue(v_20);
}



// Code for repeatsp

static LispObject CC_repeatsp(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_23, v_24, v_25;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_24 = v_2;
// end of prologue
v_1:
    v_23 = v_24;
    if (v_23 == nil) goto v_6;
    else goto v_7;
v_6:
    v_23 = nil;
    goto v_5;
v_7:
    v_23 = v_24;
    if (!car_legal(v_23)) v_25 = carerror(v_23); else
    v_25 = car(v_23);
    v_23 = v_24;
    if (!car_legal(v_23)) v_23 = cdrerror(v_23); else
    v_23 = cdr(v_23);
    v_23 = Lmember(nil, v_25, v_23);
    if (v_23 == nil) goto v_14;
    else goto v_13;
v_14:
    v_23 = v_24;
    if (!car_legal(v_23)) v_23 = cdrerror(v_23); else
    v_23 = cdr(v_23);
    v_24 = v_23;
    goto v_1;
v_13:
    goto v_5;
    v_23 = nil;
v_5:
    return onevalue(v_23);
}



// Code for bc!=simp

static LispObject CC_bcMsimp(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_78, v_79;
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
    v_78 = basic_elt(env, 1); // cali
    if (!symbolp(v_78)) v_78 = nil;
    else { v_78 = qfastgets(v_78);
           if (v_78 != nil) { v_78 = elt(v_78, 20); // rules
#ifdef RECORD_GET
             if (v_78 != SPID_NOPROP)
                record_get(elt(fastget_names, 20), 1);
             else record_get(elt(fastget_names, 20), 0),
                v_78 = nil; }
           else record_get(elt(fastget_names, 20), 0); }
#else
             if (v_78 == SPID_NOPROP) v_78 = nil; }}
#endif
    stack[-4] = v_78;
    v_78 = stack[-4];
    if (v_78 == nil) goto v_10;
    v_78 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[0] = v_78;
    v_78 = stack[-4];
    stack[-2] = v_78;
v_22:
    v_78 = stack[-2];
    if (v_78 == nil) goto v_25;
    v_79 = stack[0];
    v_78 = static_cast<LispObject>(16000)+TAG_FIXNUM; // 1000
    v_78 = static_cast<LispObject>(lessp2(v_79, v_78));
    v_78 = v_78 ? lisp_true : nil;
    env = stack[-5];
    if (v_78 == nil) goto v_25;
    goto v_26;
v_25:
    goto v_21;
v_26:
    v_79 = stack[-3];
    v_78 = stack[-2];
    if (!car_legal(v_78)) v_78 = carerror(v_78); else
    v_78 = car(v_78);
    if (!car_legal(v_78)) v_78 = carerror(v_78); else
    v_78 = car(v_78);
    {   LispObject fn = basic_elt(env, 3); // qremf
    v_78 = (*qfn2(fn))(fn, v_79, v_78);
    }
    env = stack[-5];
    stack[-1] = v_78;
    v_78 = stack[-1];
    if (!car_legal(v_78)) v_78 = carerror(v_78); else
    v_78 = car(v_78);
    if (v_78 == nil) goto v_41;
    else goto v_42;
v_41:
    v_78 = stack[-2];
    if (!car_legal(v_78)) v_78 = cdrerror(v_78); else
    v_78 = cdr(v_78);
    stack[-2] = v_78;
    goto v_40;
v_42:
    v_78 = stack[-1];
    if (!car_legal(v_78)) v_79 = carerror(v_78); else
    v_79 = car(v_78);
    v_78 = stack[-2];
    if (!car_legal(v_78)) v_78 = carerror(v_78); else
    v_78 = car(v_78);
    if (!car_legal(v_78)) v_78 = cdrerror(v_78); else
    v_78 = cdr(v_78);
    {   LispObject fn = basic_elt(env, 4); // multf
    v_79 = (*qfn2(fn))(fn, v_79, v_78);
    }
    env = stack[-5];
    v_78 = stack[-1];
    if (!car_legal(v_78)) v_78 = cdrerror(v_78); else
    v_78 = cdr(v_78);
    {   LispObject fn = basic_elt(env, 5); // addf
    v_78 = (*qfn2(fn))(fn, v_79, v_78);
    }
    env = stack[-5];
    stack[-3] = v_78;
    v_78 = stack[0];
    v_78 = add1(v_78);
    env = stack[-5];
    stack[0] = v_78;
    v_78 = stack[-4];
    stack[-2] = v_78;
    goto v_40;
v_40:
    goto v_22;
v_21:
    v_79 = stack[0];
    v_78 = static_cast<LispObject>(16000)+TAG_FIXNUM; // 1000
    v_78 = static_cast<LispObject>(lessp2(v_79, v_78));
    v_78 = v_78 ? lisp_true : nil;
    env = stack[-5];
    if (v_78 == nil) goto v_66;
    v_78 = stack[-3];
    goto v_16;
v_66:
    v_78 = basic_elt(env, 2); // "recursion depth of bc!=simp too high"
    {   LispObject fn = basic_elt(env, 6); // rederr
    v_78 = (*qfn1(fn))(fn, v_78);
    }
    goto v_64;
v_64:
    v_78 = nil;
v_16:
    goto v_8;
v_10:
    v_78 = stack[-3];
    goto v_8;
    v_78 = nil;
v_8:
    return onevalue(v_78);
}



// Code for gperm2

static LispObject CC_gperm2(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    stack[-3] = v_4;
    stack[-4] = v_3;
    v_30 = v_2;
// end of prologue
v_9:
    v_31 = v_30;
    if (v_31 == nil) goto v_12;
    else goto v_13;
v_12:
    v_30 = stack[-3];
    goto v_8;
v_13:
    v_31 = v_30;
    if (!car_legal(v_31)) v_31 = cdrerror(v_31); else
    v_31 = cdr(v_31);
    stack[-5] = v_31;
    if (!car_legal(v_30)) v_31 = carerror(v_30); else
    v_31 = car(v_30);
    v_30 = nil;
    {   LispObject fn = basic_elt(env, 1); // rev
    stack[-2] = (*qfn2(fn))(fn, v_31, v_30);
    }
    env = stack[-6];
    stack[-1] = stack[-4];
    stack[0] = nil;
    v_30 = stack[-3];
    v_30 = ncons(v_30);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 2); // gperm1
    v_30 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_30);
    }
    env = stack[-6];
    stack[-3] = v_30;
    v_30 = stack[-5];
    goto v_9;
    v_30 = nil;
v_8:
    return onevalue(v_30);
}



// Code for exptmod!:

static LispObject CC_exptmodT(LispObject env,
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
    if (!car_legal(v_11)) v_11 = cdrerror(v_11); else
    v_11 = cdr(v_11);
    {   LispObject fn = basic_elt(env, 1); // general!-modular!-expt
    v_10 = (*qfn2(fn))(fn, v_11, v_10);
    }
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // !*modular2f
        return (*qfn1(fn))(fn, v_10);
    }
}



// Code for convprec!*

static LispObject CC_convprecH(LispObject env,
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
    v_17 = v_16;
    if (!consp(v_17)) goto v_7;
    else goto v_8;
v_7:
    goto v_6;
v_8:
    v_17 = basic_elt(env, 1); // !:rd!:
    v_16 = cons(v_17, v_16);
    env = stack[0];
    goto v_6;
    v_16 = nil;
v_6:
    {
        LispObject fn = basic_elt(env, 2); // convchk
        return (*qfn1(fn))(fn, v_16);
    }
}



// Code for rat_numrn

static LispObject CC_rat_numrn(LispObject env,
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
    v_15 = v_2;
// end of prologue
    v_16 = v_15;
    if (!car_legal(v_16)) v_16 = carerror(v_16); else
    v_16 = car(v_16);
    if (v_16 == nil) goto v_6;
    else goto v_7;
v_6:
    v_15 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_5;
v_7:
    if (!car_legal(v_15)) v_15 = carerror(v_15); else
    v_15 = car(v_15);
    goto v_5;
    v_15 = nil;
v_5:
    return onevalue(v_15);
}



// Code for freeof

static LispObject CC_freeof(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_17, v_18, v_19;
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
    v_18 = stack[0];
    v_17 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // smember
    v_17 = (*qfn2(fn))(fn, v_18, v_17);
    }
    env = stack[-2];
    if (v_17 == nil) goto v_7;
    else goto v_6;
v_7:
    v_18 = stack[0];
    v_17 = stack[-1];
    v_19 = qvalue(basic_elt(env, 1)); // depl!*
    v_17 = Lassoc(nil, v_17, v_19);
    v_17 = Lmember(nil, v_18, v_17);
v_6:
    v_17 = (v_17 == nil ? lisp_true : nil);
    return onevalue(v_17);
}



// Code for gcdf1

static LispObject CC_gcdf1(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_155, v_156;
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
    v_155 = stack[-2];
    if (v_155 == nil) goto v_10;
    else goto v_11;
v_10:
    v_155 = stack[-1];
    goto v_7;
v_11:
    v_155 = stack[-1];
    if (v_155 == nil) goto v_14;
    else goto v_15;
v_14:
    v_155 = stack[-2];
    goto v_7;
v_15:
    v_156 = stack[-2];
    v_155 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_156 == v_155) goto v_22;
    else goto v_23;
v_22:
    v_155 = lisp_true;
    goto v_21;
v_23:
    v_156 = stack[-1];
    v_155 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_155 = (v_156 == v_155 ? lisp_true : nil);
    goto v_21;
    v_155 = nil;
v_21:
    if (v_155 == nil) goto v_19;
    v_155 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_7;
v_19:
    v_155 = stack[-2];
    if (!consp(v_155)) goto v_37;
    else goto v_38;
v_37:
    v_155 = lisp_true;
    goto v_36;
v_38:
    v_155 = stack[-2];
    if (!car_legal(v_155)) v_155 = carerror(v_155); else
    v_155 = car(v_155);
    v_155 = (consp(v_155) ? nil : lisp_true);
    goto v_36;
    v_155 = nil;
v_36:
    if (v_155 == nil) goto v_34;
    v_156 = stack[-2];
    v_155 = stack[-1];
    {
        LispObject fn = basic_elt(env, 6); // gcdfd
        return (*qfn2(fn))(fn, v_156, v_155);
    }
v_34:
    v_155 = stack[-1];
    if (!consp(v_155)) goto v_53;
    else goto v_54;
v_53:
    v_155 = lisp_true;
    goto v_52;
v_54:
    v_155 = stack[-1];
    if (!car_legal(v_155)) v_155 = carerror(v_155); else
    v_155 = car(v_155);
    v_155 = (consp(v_155) ? nil : lisp_true);
    goto v_52;
    v_155 = nil;
v_52:
    if (v_155 == nil) goto v_50;
    v_156 = stack[-1];
    v_155 = stack[-2];
    {
        LispObject fn = basic_elt(env, 6); // gcdfd
        return (*qfn2(fn))(fn, v_156, v_155);
    }
v_50:
    v_155 = qvalue(basic_elt(env, 1)); // !*anygcd
    if (v_155 == nil) goto v_69;
    else goto v_70;
v_69:
    v_155 = lisp_true;
    goto v_68;
v_70:
    v_155 = stack[-2];
    {   LispObject fn = basic_elt(env, 7); // num!-exponents
    v_155 = (*qfn1(fn))(fn, v_155);
    }
    env = stack[-4];
    if (v_155 == nil) goto v_77;
    else goto v_78;
v_77:
    v_155 = lisp_true;
    goto v_76;
v_78:
    v_155 = stack[-1];
    {   LispObject fn = basic_elt(env, 7); // num!-exponents
    v_155 = (*qfn1(fn))(fn, v_155);
    }
    env = stack[-4];
    v_155 = (v_155 == nil ? lisp_true : nil);
    goto v_76;
    v_155 = nil;
v_76:
    goto v_68;
    v_155 = nil;
v_68:
    if (v_155 == nil) goto v_66;
    v_155 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_7;
v_66:
    v_156 = stack[-2];
    v_155 = stack[-1];
    {   LispObject fn = basic_elt(env, 8); // quotf1
    v_155 = (*qfn2(fn))(fn, v_156, v_155);
    }
    env = stack[-4];
    if (v_155 == nil) goto v_89;
    v_155 = stack[-1];
    goto v_7;
v_89:
    v_156 = stack[-1];
    v_155 = stack[-2];
    {   LispObject fn = basic_elt(env, 8); // quotf1
    v_155 = (*qfn2(fn))(fn, v_156, v_155);
    }
    env = stack[-4];
    if (v_155 == nil) goto v_95;
    v_155 = stack[-2];
    goto v_7;
v_95:
    v_156 = stack[-2];
    v_155 = stack[-1];
    {   LispObject fn = basic_elt(env, 9); // gcdf2
    v_155 = (*qfn2(fn))(fn, v_156, v_155);
    }
    env = stack[-4];
    stack[-3] = v_155;
    v_155 = qvalue(basic_elt(env, 2)); // !*gcd
    if (v_155 == nil) goto v_106;
    v_156 = qvalue(basic_elt(env, 3)); // dmode!*
    v_155 = basic_elt(env, 4); // (!:rd!: !:cr!:)
    v_155 = Lmemq(nil, v_156, v_155);
    if (v_155 == nil) goto v_112;
    else goto v_113;
v_112:
    v_156 = stack[-2];
    v_155 = stack[-3];
    {   LispObject fn = basic_elt(env, 8); // quotf1
    v_155 = (*qfn2(fn))(fn, v_156, v_155);
    }
    env = stack[-4];
    if (v_155 == nil) goto v_119;
    else goto v_120;
v_119:
    v_155 = lisp_true;
    goto v_118;
v_120:
    v_156 = stack[-1];
    v_155 = stack[-3];
    {   LispObject fn = basic_elt(env, 8); // quotf1
    v_155 = (*qfn2(fn))(fn, v_156, v_155);
    }
    env = stack[-4];
    v_155 = (v_155 == nil ? lisp_true : nil);
    goto v_118;
    v_155 = nil;
v_118:
    goto v_111;
v_113:
    v_155 = nil;
    goto v_111;
    v_155 = nil;
v_111:
    if (v_155 == nil) goto v_106;
    v_155 = stack[-2];
    {   LispObject fn = basic_elt(env, 10); // noncomfp
    v_155 = (*qfn1(fn))(fn, v_155);
    }
    env = stack[-4];
    if (v_155 == nil) goto v_138;
    else goto v_136;
v_138:
    v_155 = stack[-1];
    {   LispObject fn = basic_elt(env, 10); // noncomfp
    v_155 = (*qfn1(fn))(fn, v_155);
    }
    env = stack[-4];
    if (v_155 == nil) goto v_141;
    else goto v_136;
v_141:
    goto v_137;
v_136:
    v_155 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_7;
v_137:
    stack[0] = basic_elt(env, 5); // "gcdf failed"
    v_155 = stack[-2];
    {   LispObject fn = basic_elt(env, 11); // prepf
    stack[-2] = (*qfn1(fn))(fn, v_155);
    }
    env = stack[-4];
    v_155 = stack[-1];
    {   LispObject fn = basic_elt(env, 11); // prepf
    v_155 = (*qfn1(fn))(fn, v_155);
    }
    env = stack[-4];
    v_155 = list3(stack[0], stack[-2], v_155);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 12); // errach
    v_155 = (*qfn1(fn))(fn, v_155);
    }
    goto v_135;
v_135:
    goto v_104;
v_106:
v_104:
    v_155 = stack[-3];
v_7:
    return onevalue(v_155);
}



// Code for talp_smupdknowl

static LispObject CC_talp_smupdknowl(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_47, v_48, v_49;
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
    v_48 = v_4;
    stack[-4] = v_3;
    stack[-5] = v_2;
// end of prologue
    stack[-6] = nil;
v_12:
    v_47 = stack[-4];
    if (v_47 == nil) goto v_15;
    else goto v_16;
v_15:
    goto v_11;
v_16:
    v_47 = stack[-4];
    if (!car_legal(v_47)) v_47 = carerror(v_47); else
    v_47 = car(v_47);
    stack[-6] = v_47;
    v_47 = stack[-4];
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    stack[-4] = v_47;
    stack[-2] = stack[-5];
    stack[-1] = stack[-6];
    stack[0] = v_48;
    v_47 = stack[-3];
    v_47 = ncons(v_47);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 3); // talp_smupdknowl1
    v_47 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_47);
    }
    env = stack[-7];
    v_48 = v_47;
    v_49 = v_48;
    v_47 = basic_elt(env, 1); // false
    if (v_49 == v_47) goto v_31;
    else goto v_32;
v_31:
    v_47 = nil;
    stack[-4] = v_47;
    v_47 = basic_elt(env, 2); // break
    stack[-6] = v_47;
    goto v_30;
v_32:
v_30:
    goto v_12;
v_11:
    v_49 = stack[-6];
    v_47 = basic_elt(env, 2); // break
    if (v_49 == v_47) goto v_39;
    else goto v_40;
v_39:
    v_47 = basic_elt(env, 1); // false
    goto v_9;
v_40:
    v_47 = v_48;
    goto v_9;
    v_47 = nil;
v_9:
    return onevalue(v_47);
}



// Code for qqe_id!-nyt!-branchb

static LispObject CC_qqe_idKnytKbranchb(LispObject env,
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
    if (!consp(v_28)) goto v_6;
    else goto v_7;
v_6:
    v_28 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // qqe_btidp
    v_28 = (*qfn1(fn))(fn, v_28);
    }
    env = stack[-1];
    if (v_28 == nil) goto v_11;
    else goto v_10;
v_11:
    v_28 = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // qqe_nytidp
        return (*qfn1(fn))(fn, v_28);
    }
v_10:
    goto v_5;
v_7:
    v_28 = stack[0];
    if (!car_legal(v_28)) v_28 = carerror(v_28); else
    v_28 = car(v_28);
    {   LispObject fn = basic_elt(env, 3); // qqe_qopaddp
    v_28 = (*qfn1(fn))(fn, v_28);
    }
    env = stack[-1];
    if (v_28 == nil) goto v_20;
    else goto v_19;
v_20:
    v_28 = stack[0];
    if (!car_legal(v_28)) v_28 = carerror(v_28); else
    v_28 = car(v_28);
    {   LispObject fn = basic_elt(env, 4); // qqe_qoptailp
    v_28 = (*qfn1(fn))(fn, v_28);
    }
v_19:
    v_28 = (v_28 == nil ? lisp_true : nil);
    goto v_5;
    v_28 = nil;
v_5:
    return onevalue(v_28);
}



// Code for pasf_deci

static LispObject CC_pasf_deci(LispObject env,
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
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_23 = v_2;
// end of prologue
    {   LispObject fn = basic_elt(env, 1); // pasf_dec
    v_23 = (*qfn1(fn))(fn, v_23);
    }
    v_25 = v_23;
    v_23 = v_25;
    if (!car_legal(v_23)) v_24 = carerror(v_23); else
    v_24 = car(v_23);
    v_23 = v_25;
    if (!car_legal(v_23)) v_23 = cdrerror(v_23); else
    v_23 = cdr(v_23);
    if (v_23 == nil) goto v_14;
    else goto v_15;
v_14:
    v_23 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_13;
v_15:
    v_23 = v_25;
    if (!car_legal(v_23)) v_23 = cdrerror(v_23); else
    v_23 = cdr(v_23);
    goto v_13;
    v_23 = nil;
v_13:
    return cons(v_24, v_23);
    return onevalue(v_23);
}



// Code for ibalp_litlp

static LispObject CC_ibalp_litlp(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // ibalp_litp
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



// Code for mintype

static LispObject CC_mintype(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_14, v_15;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_14 = v_2;
// end of prologue
    v_15 = v_14;
    if (!consp(v_15)) goto v_6;
    else goto v_7;
v_6:
    goto v_5;
v_7:
    if (!car_legal(v_14)) v_14 = carerror(v_14); else
    v_14 = car(v_14);
    goto v_5;
    v_14 = nil;
v_5:
    return onevalue(v_14);
}



// Code for prepd

static LispObject CC_prepd(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_53 = stack[0];
    if (!consp(v_53)) goto v_6;
    else goto v_7;
v_6:
    v_54 = stack[0];
    v_53 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_53 = static_cast<LispObject>(lessp2(v_54, v_53));
    v_53 = v_53 ? lisp_true : nil;
    env = stack[-2];
    if (v_53 == nil) goto v_12;
    stack[-1] = basic_elt(env, 1); // minus
    v_53 = stack[0];
    v_53 = negate(v_53);
    {
        LispObject v_57 = stack[-1];
        return list2(v_57, v_53);
    }
v_12:
    v_53 = stack[0];
    goto v_10;
    v_53 = nil;
v_10:
    goto v_5;
v_7:
    v_53 = stack[0];
    if (!car_legal(v_53)) v_53 = carerror(v_53); else
    v_53 = car(v_53);
    if (!symbolp(v_53)) v_54 = nil;
    else { v_54 = qfastgets(v_53);
           if (v_54 != nil) { v_54 = elt(v_54, 30); // minusp
#ifdef RECORD_GET
             if (v_54 != SPID_NOPROP)
                record_get(elt(fastget_names, 30), 1);
             else record_get(elt(fastget_names, 30), 0),
                v_54 = nil; }
           else record_get(elt(fastget_names, 30), 0); }
#else
             if (v_54 == SPID_NOPROP) v_54 = nil; }}
#endif
    v_53 = stack[0];
    v_53 = Lapply1(nil, v_54, v_53);
    env = stack[-2];
    if (v_53 == nil) goto v_24;
    v_53 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // !:minus
    v_53 = (*qfn1(fn))(fn, v_53);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 4); // prepd1
    v_53 = (*qfn1(fn))(fn, v_53);
    }
    env = stack[-2];
    v_54 = v_53;
    v_53 = v_54;
    if (v_53 == nil) goto v_36;
    else goto v_37;
v_36:
    v_53 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_35;
v_37:
    v_53 = basic_elt(env, 1); // minus
    return list2(v_53, v_54);
    v_53 = nil;
v_35:
    goto v_5;
v_24:
    v_53 = stack[0];
    if (!car_legal(v_53)) v_54 = carerror(v_53); else
    v_54 = car(v_53);
    v_53 = basic_elt(env, 2); // prepfn
    v_54 = get(v_54, v_53);
    v_53 = stack[0];
        return Lapply1(nil, v_54, v_53);
    v_53 = nil;
v_5:
    return onevalue(v_53);
}



// Code for quotematrix

static LispObject CC_quotematrix(LispObject env,
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
    v_5 = basic_elt(env, 1); // matrix
    return onevalue(v_5);
}



// Code for deg!*farg

static LispObject CC_degHfarg(LispObject env,
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
    v_40 = v_2;
// end of prologue
    v_39 = v_40;
    if (!car_legal(v_39)) v_39 = cdrerror(v_39); else
    v_39 = cdr(v_39);
    if (v_39 == nil) goto v_6;
    else goto v_7;
v_6:
    v_39 = v_40;
    if (!car_legal(v_39)) v_39 = carerror(v_39); else
    v_39 = car(v_39);
    {
        LispObject fn = basic_elt(env, 1); // deg!*form
        return (*qfn1(fn))(fn, v_39);
    }
v_7:
    stack[-1] = nil;
    v_39 = v_40;
    stack[0] = v_39;
v_21:
    v_39 = stack[0];
    if (v_39 == nil) goto v_25;
    else goto v_26;
v_25:
    goto v_20;
v_26:
    v_39 = stack[0];
    if (!car_legal(v_39)) v_39 = carerror(v_39); else
    v_39 = car(v_39);
    {   LispObject fn = basic_elt(env, 1); // deg!*form
    v_40 = (*qfn1(fn))(fn, v_39);
    }
    env = stack[-2];
    v_39 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // addf
    v_39 = (*qfn2(fn))(fn, v_40, v_39);
    }
    env = stack[-2];
    stack[-1] = v_39;
    v_39 = stack[0];
    if (!car_legal(v_39)) v_39 = cdrerror(v_39); else
    v_39 = cdr(v_39);
    stack[0] = v_39;
    goto v_21;
v_20:
    v_39 = stack[-1];
    goto v_5;
    v_39 = nil;
v_5:
    return onevalue(v_39);
}



// Code for make!-set

static LispObject CC_makeKset(LispObject env,
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
    v_8 = basic_elt(env, 1); // set!-ordp
    {   LispObject fn = basic_elt(env, 2); // sort
    v_8 = (*qfn2(fn))(fn, v_9, v_8);
    }
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 3); // makelist
        return (*qfn1(fn))(fn, v_8);
    }
}



// Code for optype

static LispObject CC_optype(LispObject env,
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
    v_8 = basic_elt(env, 1); // !*optype!*
    return get(v_7, v_8);
}



// Code for setcloc!*

static LispObject CC_setclocH(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_16, v_17, v_18;
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
    v_16 = qvalue(basic_elt(env, 1)); // ifl!*
    if (v_16 == nil) goto v_5;
    else goto v_6;
v_5:
    v_16 = nil;
    goto v_4;
v_6:
    v_16 = qvalue(basic_elt(env, 1)); // ifl!*
    if (!car_legal(v_16)) v_18 = carerror(v_16); else
    v_18 = car(v_16);
    v_17 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_16 = qvalue(basic_elt(env, 2)); // curline!*
    v_16 = list2star(v_18, v_17, v_16);
    env = stack[0];
    goto v_4;
    v_16 = nil;
v_4:
    setvalue(basic_elt(env, 3), v_16); // cloc!*
    return onevalue(v_16);
}



// Code for red_divtestbe

static LispObject CC_red_divtestbe(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    v_36 = stack[-2];
    if (v_36 == nil) goto v_11;
    else goto v_12;
v_11:
    v_36 = nil;
    goto v_7;
v_12:
    v_36 = stack[-2];
    if (!car_legal(v_36)) v_36 = carerror(v_36); else
    v_36 = car(v_36);
    {   LispObject fn = basic_elt(env, 1); // bas_dpecart
    v_37 = (*qfn1(fn))(fn, v_36);
    }
    env = stack[-3];
    v_36 = stack[0];
    v_36 = static_cast<LispObject>(lesseq2(v_37, v_36));
    v_36 = v_36 ? lisp_true : nil;
    env = stack[-3];
    if (v_36 == nil) goto v_16;
    v_36 = stack[-2];
    if (!car_legal(v_36)) v_36 = carerror(v_36); else
    v_36 = car(v_36);
    {   LispObject fn = basic_elt(env, 2); // bas_dpoly
    v_36 = (*qfn1(fn))(fn, v_36);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 3); // dp_lmon
    v_37 = (*qfn1(fn))(fn, v_36);
    }
    env = stack[-3];
    v_36 = stack[-1];
    {   LispObject fn = basic_elt(env, 4); // mo_vdivides!?
    v_36 = (*qfn2(fn))(fn, v_37, v_36);
    }
    env = stack[-3];
    if (v_36 == nil) goto v_16;
    v_36 = stack[-2];
    if (!car_legal(v_36)) v_36 = carerror(v_36); else
    v_36 = car(v_36);
    goto v_7;
v_16:
    v_36 = stack[-2];
    if (!car_legal(v_36)) v_36 = cdrerror(v_36); else
    v_36 = cdr(v_36);
    stack[-2] = v_36;
    goto v_8;
    v_36 = nil;
v_7:
    return onevalue(v_36);
}



// Code for pappl_pv

static LispObject CC_pappl_pv(LispObject env,
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
    v_53 = v_3;
    stack[-4] = v_2;
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
    if (!car_legal(v_54)) stack[0] = carerror(v_54); else
    stack[0] = car(v_54);
    v_54 = stack[-4];
    if (!car_legal(v_53)) v_53 = cdrerror(v_53); else
    v_53 = cdr(v_53);
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
    if (!car_legal(v_54)) stack[0] = carerror(v_54); else
    stack[0] = car(v_54);
    v_54 = stack[-4];
    if (!car_legal(v_53)) v_53 = cdrerror(v_53); else
    v_53 = cdr(v_53);
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



// Code for !*i2ar

static LispObject CC_Hi2ar(LispObject env,
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
    v_8 = basic_elt(env, 1); // !:ar!:
    return cons(v_8, v_7);
}



// Code for general!-modular!-minus

static LispObject CC_generalKmodularKminus(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_16, v_17, v_18;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_18 = v_2;
// end of prologue
    v_17 = v_18;
    v_16 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_17 == v_16) goto v_6;
    else goto v_7;
v_6:
    v_16 = v_18;
    goto v_5;
v_7:
    v_16 = qvalue(basic_elt(env, 1)); // current!-modulus
    v_17 = v_18;
    return difference2(v_16, v_17);
    v_16 = nil;
v_5:
    return onevalue(v_16);
}



// Code for lalr_analyze_lookaheads

static LispObject CC_lalr_analyze_lookaheads(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_126, v_127, v_128;
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
    stack_popper stack_popper_var(11);
// end of prologue
    stack[-9] = nil;
    v_126 = qvalue(basic_elt(env, 1)); // itemset_collection
    stack[-4] = v_126;
v_17:
    v_126 = stack[-4];
    if (v_126 == nil) goto v_21;
    else goto v_22;
v_21:
    goto v_16;
v_22:
    v_126 = stack[-4];
    if (!car_legal(v_126)) v_126 = carerror(v_126); else
    v_126 = car(v_126);
    stack[-3] = v_126;
    v_126 = stack[-3];
    if (!car_legal(v_126)) v_126 = carerror(v_126); else
    v_126 = car(v_126);
    stack[-2] = v_126;
v_31:
    v_126 = stack[-2];
    if (v_126 == nil) goto v_36;
    else goto v_37;
v_36:
    goto v_30;
v_37:
    v_126 = stack[-2];
    if (!car_legal(v_126)) v_126 = carerror(v_126); else
    v_126 = car(v_126);
    stack[-1] = v_126;
    v_126 = stack[-1];
    if (!car_legal(v_126)) v_127 = carerror(v_126); else
    v_127 = car(v_126);
    v_126 = basic_elt(env, 2); // (-1)
    v_126 = cons(v_127, v_126);
    env = stack[-10];
    v_126 = ncons(v_126);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 4); // lalr_closure
    v_126 = (*qfn1(fn))(fn, v_126);
    }
    env = stack[-10];
    stack[0] = v_126;
v_50:
    v_126 = stack[0];
    if (v_126 == nil) goto v_56;
    else goto v_57;
v_56:
    goto v_49;
v_57:
    v_126 = stack[0];
    if (!car_legal(v_126)) v_126 = carerror(v_126); else
    v_126 = car(v_126);
    v_127 = v_126;
    v_126 = v_127;
    if (!car_legal(v_126)) v_126 = carerror(v_126); else
    v_126 = car(v_126);
    stack[-6] = v_126;
    v_126 = v_127;
    if (!car_legal(v_126)) v_126 = cdrerror(v_126); else
    v_126 = cdr(v_126);
    stack[-8] = v_126;
    v_127 = basic_elt(env, 3); // !.
    v_126 = stack[-6];
    v_126 = Lmember(nil, v_127, v_126);
    if (!car_legal(v_126)) v_126 = cdrerror(v_126); else
    v_126 = cdr(v_126);
    v_127 = v_126;
    if (v_126 == nil) goto v_70;
    v_126 = v_127;
    if (!car_legal(v_126)) v_126 = carerror(v_126); else
    v_126 = car(v_126);
    stack[-5] = v_126;
    v_127 = stack[-3];
    v_126 = stack[-5];
    {   LispObject fn = basic_elt(env, 5); // lalr_goto
    v_126 = (*qfn2(fn))(fn, v_127, v_126);
    }
    env = stack[-10];
    stack[-7] = v_126;
    v_127 = stack[-6];
    v_126 = stack[-5];
    {   LispObject fn = basic_elt(env, 6); // lalr_lr0_move_dot
    v_127 = (*qfn2(fn))(fn, v_127, v_126);
    }
    env = stack[-10];
    v_126 = stack[-7];
    if (!car_legal(v_126)) v_126 = carerror(v_126); else
    v_126 = car(v_126);
    {   LispObject fn = basic_elt(env, 7); // lalr_item_with_rule
    v_126 = (*qfn2(fn))(fn, v_127, v_126);
    }
    env = stack[-10];
    stack[-5] = v_126;
    v_126 = stack[-8];
    stack[-6] = v_126;
v_91:
    v_126 = stack[-6];
    if (v_126 == nil) goto v_95;
    else goto v_96;
v_95:
    goto v_90;
v_96:
    v_126 = stack[-6];
    if (!car_legal(v_126)) v_126 = carerror(v_126); else
    v_126 = car(v_126);
    v_128 = v_126;
    v_127 = v_128;
    v_126 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    if (v_127 == v_126) goto v_104;
    else goto v_105;
v_104:
    v_128 = stack[-1];
    v_127 = stack[-5];
    v_126 = stack[-9];
    v_126 = acons(v_128, v_127, v_126);
    env = stack[-10];
    stack[-9] = v_126;
    goto v_103;
v_105:
    v_126 = stack[-5];
    v_127 = v_128;
    {   LispObject fn = basic_elt(env, 8); // lalr_add_lookahead
    v_126 = (*qfn2(fn))(fn, v_126, v_127);
    }
    env = stack[-10];
    goto v_103;
v_103:
    v_126 = stack[-6];
    if (!car_legal(v_126)) v_126 = cdrerror(v_126); else
    v_126 = cdr(v_126);
    stack[-6] = v_126;
    goto v_91;
v_90:
    goto v_68;
v_70:
v_68:
    v_126 = stack[0];
    if (!car_legal(v_126)) v_126 = cdrerror(v_126); else
    v_126 = cdr(v_126);
    stack[0] = v_126;
    goto v_50;
v_49:
    v_126 = stack[-2];
    if (!car_legal(v_126)) v_126 = cdrerror(v_126); else
    v_126 = cdr(v_126);
    stack[-2] = v_126;
    goto v_31;
v_30:
    v_126 = stack[-4];
    if (!car_legal(v_126)) v_126 = cdrerror(v_126); else
    v_126 = cdr(v_126);
    stack[-4] = v_126;
    goto v_17;
v_16:
    v_126 = stack[-9];
    return onevalue(v_126);
}



// Code for powers1

static LispObject CC_powers1(LispObject env,
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
    v_10 = v_2;
// end of prologue
    stack[0] = v_10;
    v_11 = v_10;
    v_10 = nil;
    {   LispObject fn = basic_elt(env, 1); // powers3
    v_11 = (*qfn2(fn))(fn, v_11, v_10);
    }
    env = stack[-1];
    v_10 = nil;
    {
        LispObject v_13 = stack[0];
        LispObject fn = basic_elt(env, 2); // powers2
        return (*qfn3(fn))(fn, v_13, v_11, v_10);
    }
}



// Code for cl_atfp

static LispObject CC_cl_atfp(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_132, v_133, v_134;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_133 = v_2;
// end of prologue
    v_132 = v_133;
    if (!consp(v_132)) goto v_6;
    else goto v_7;
v_6:
    v_132 = v_133;
    goto v_5;
v_7:
    v_132 = v_133;
    if (!car_legal(v_132)) v_132 = carerror(v_132); else
    v_132 = car(v_132);
    goto v_5;
    v_132 = nil;
v_5:
    v_134 = v_132;
    v_133 = v_134;
    v_132 = basic_elt(env, 1); // true
    if (v_133 == v_132) goto v_21;
    else goto v_22;
v_21:
    v_132 = lisp_true;
    goto v_20;
v_22:
    v_133 = v_134;
    v_132 = basic_elt(env, 2); // false
    v_132 = (v_133 == v_132 ? lisp_true : nil);
    goto v_20;
    v_132 = nil;
v_20:
    if (v_132 == nil) goto v_18;
    v_132 = lisp_true;
    goto v_16;
v_18:
    v_133 = v_134;
    v_132 = basic_elt(env, 3); // or
    if (v_133 == v_132) goto v_48;
    else goto v_49;
v_48:
    v_132 = lisp_true;
    goto v_47;
v_49:
    v_133 = v_134;
    v_132 = basic_elt(env, 4); // and
    v_132 = (v_133 == v_132 ? lisp_true : nil);
    goto v_47;
    v_132 = nil;
v_47:
    if (v_132 == nil) goto v_45;
    v_132 = lisp_true;
    goto v_43;
v_45:
    v_133 = v_134;
    v_132 = basic_elt(env, 5); // not
    v_132 = (v_133 == v_132 ? lisp_true : nil);
    goto v_43;
    v_132 = nil;
v_43:
    if (v_132 == nil) goto v_41;
    v_132 = lisp_true;
    goto v_39;
v_41:
    v_133 = v_134;
    v_132 = basic_elt(env, 6); // impl
    if (v_133 == v_132) goto v_69;
    else goto v_70;
v_69:
    v_132 = lisp_true;
    goto v_68;
v_70:
    v_133 = v_134;
    v_132 = basic_elt(env, 7); // repl
    if (v_133 == v_132) goto v_78;
    else goto v_79;
v_78:
    v_132 = lisp_true;
    goto v_77;
v_79:
    v_133 = v_134;
    v_132 = basic_elt(env, 8); // equiv
    v_132 = (v_133 == v_132 ? lisp_true : nil);
    goto v_77;
    v_132 = nil;
v_77:
    goto v_68;
    v_132 = nil;
v_68:
    goto v_39;
    v_132 = nil;
v_39:
    if (v_132 == nil) goto v_37;
    v_132 = lisp_true;
    goto v_35;
v_37:
    v_133 = v_134;
    v_132 = basic_elt(env, 9); // ex
    if (v_133 == v_132) goto v_97;
    else goto v_98;
v_97:
    v_132 = lisp_true;
    goto v_96;
v_98:
    v_133 = v_134;
    v_132 = basic_elt(env, 10); // all
    v_132 = (v_133 == v_132 ? lisp_true : nil);
    goto v_96;
    v_132 = nil;
v_96:
    if (v_132 == nil) goto v_94;
    v_132 = lisp_true;
    goto v_92;
v_94:
    v_133 = v_134;
    v_132 = basic_elt(env, 11); // bex
    if (v_133 == v_132) goto v_116;
    else goto v_117;
v_116:
    v_132 = lisp_true;
    goto v_115;
v_117:
    v_132 = v_134;
    v_133 = basic_elt(env, 12); // ball
    v_132 = (v_132 == v_133 ? lisp_true : nil);
    goto v_115;
    v_132 = nil;
v_115:
    if (v_132 == nil) goto v_113;
    v_132 = lisp_true;
    goto v_111;
v_113:
    v_132 = v_134;
    if (!symbolp(v_132)) v_132 = nil;
    else { v_132 = qfastgets(v_132);
           if (v_132 != nil) { v_132 = elt(v_132, 21); // rl_external
#ifdef RECORD_GET
             if (v_132 != SPID_NOPROP)
                record_get(elt(fastget_names, 21), 1);
             else record_get(elt(fastget_names, 21), 0),
                v_132 = nil; }
           else record_get(elt(fastget_names, 21), 0); }
#else
             if (v_132 == SPID_NOPROP) v_132 = nil; }}
#endif
    goto v_111;
    v_132 = nil;
v_111:
    goto v_92;
    v_132 = nil;
v_92:
    goto v_35;
    v_132 = nil;
v_35:
    goto v_16;
    v_132 = nil;
v_16:
    v_132 = (v_132 == nil ? lisp_true : nil);
    return onevalue(v_132);
}



// Code for quotk

static LispObject CC_quotk(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_52 = stack[-1];
    if (!car_legal(v_52)) v_52 = carerror(v_52); else
    v_52 = car(v_52);
    if (!car_legal(v_52)) v_53 = cdrerror(v_52); else
    v_53 = cdr(v_52);
    v_52 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // quotf1
    v_52 = (*qfn2(fn))(fn, v_53, v_52);
    }
    env = stack[-3];
    stack[-2] = v_52;
    v_52 = stack[-2];
    if (v_52 == nil) goto v_14;
    v_52 = stack[-1];
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    if (v_52 == nil) goto v_18;
    else goto v_19;
v_18:
    v_52 = stack[-1];
    if (!car_legal(v_52)) v_52 = carerror(v_52); else
    v_52 = car(v_52);
    if (!car_legal(v_52)) v_53 = carerror(v_52); else
    v_53 = car(v_52);
    v_52 = stack[-2];
    v_52 = cons(v_53, v_52);
    return ncons(v_52);
v_19:
    v_52 = stack[-1];
    if (!car_legal(v_52)) v_53 = cdrerror(v_52); else
    v_53 = cdr(v_52);
    v_52 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // quotf1
    v_52 = (*qfn2(fn))(fn, v_53, v_52);
    }
    v_53 = v_52;
    if (v_53 == nil) goto v_38;
    v_53 = stack[-1];
    if (!car_legal(v_53)) v_53 = carerror(v_53); else
    v_53 = car(v_53);
    if (!car_legal(v_53)) v_54 = carerror(v_53); else
    v_54 = car(v_53);
    v_53 = stack[-2];
    return acons(v_54, v_53, v_52);
v_38:
    v_52 = nil;
    goto v_36;
    v_52 = nil;
v_36:
    goto v_17;
    v_52 = nil;
v_17:
    goto v_12;
v_14:
    v_52 = nil;
    goto v_12;
    v_52 = nil;
v_12:
    return onevalue(v_52);
}



// Code for multi_elem

static LispObject CC_multi_elem(LispObject env,
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
    v_26 = Llength(nil, v_25);
    env = stack[-1];
    v_25 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_26 == v_25) goto v_8;
    else goto v_9;
v_8:
    v_25 = stack[0];
    if (!car_legal(v_25)) v_25 = carerror(v_25); else
    v_25 = car(v_25);
    {   LispObject fn = basic_elt(env, 1); // expression
    v_25 = (*qfn1(fn))(fn, v_25);
    }
    goto v_7;
v_9:
    v_25 = stack[0];
    if (!car_legal(v_25)) v_25 = carerror(v_25); else
    v_25 = car(v_25);
    {   LispObject fn = basic_elt(env, 1); // expression
    v_25 = (*qfn1(fn))(fn, v_25);
    }
    env = stack[-1];
    v_25 = stack[0];
    if (!car_legal(v_25)) v_25 = cdrerror(v_25); else
    v_25 = cdr(v_25);
    {   LispObject fn = basic_elt(env, 0); // multi_elem
    v_25 = (*qfn1(fn))(fn, v_25);
    }
    goto v_7;
v_7:
    v_25 = nil;
    return onevalue(v_25);
}



// Code for letmtr3

static LispObject CC_letmtr3(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_242, v_243, v_244, v_245;
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
    stack[-2] = v_5;
    stack[-3] = v_4;
    stack[-4] = v_3;
    stack[-5] = v_2;
// end of prologue
    stack[-6] = nil;
    v_242 = stack[-5];
    if (!car_legal(v_242)) v_242 = cdrerror(v_242); else
    v_242 = cdr(v_242);
    if (!car_legal(v_242)) v_242 = cdrerror(v_242); else
    v_242 = cdr(v_242);
    if (v_242 == nil) goto v_20;
    else goto v_21;
v_20:
    v_243 = stack[-3];
    v_242 = basic_elt(env, 1); // sparsemat
    if (!consp(v_243)) goto v_27;
    v_243 = car(v_243);
    if (v_243 == v_242) goto v_28;
v_27:
    stack[-1] = basic_elt(env, 2); // matrix
    stack[0] = static_cast<LispObject>(160)+TAG_FIXNUM; // 10
    v_244 = basic_elt(env, 3); // "Matrix"
    v_242 = stack[-5];
    if (!car_legal(v_242)) v_243 = carerror(v_242); else
    v_243 = car(v_242);
    v_242 = basic_elt(env, 4); // "not set"
    v_242 = list3(v_244, v_243, v_242);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 7); // rerror
    v_242 = (*qfn3(fn))(fn, stack[-1], stack[0], v_242);
    }
    env = stack[-7];
    goto v_26;
v_28:
    v_242 = stack[-5];
    if (!car_legal(v_242)) v_242 = cdrerror(v_242); else
    v_242 = cdr(v_242);
    {   LispObject fn = basic_elt(env, 8); // revlis
    v_242 = (*qfn1(fn))(fn, v_242);
    }
    env = stack[-7];
    stack[-6] = v_242;
    {   LispObject fn = basic_elt(env, 9); // numlis
    v_242 = (*qfn1(fn))(fn, v_242);
    }
    env = stack[-7];
    if (v_242 == nil) goto v_44;
    else goto v_45;
v_44:
    v_242 = lisp_true;
    goto v_43;
v_45:
    v_242 = stack[-6];
    v_243 = Llength(nil, v_242);
    env = stack[-7];
    v_242 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_242 = Lneq_2(nil, v_243, v_242);
    env = stack[-7];
    goto v_43;
    v_242 = nil;
v_43:
    if (v_242 == nil) goto v_41;
    v_243 = stack[-5];
    v_242 = basic_elt(env, 5); // hold
    {
        LispObject fn = basic_elt(env, 10); // errpri2
        return (*qfn2(fn))(fn, v_243, v_242);
    }
v_41:
v_26:
    v_242 = stack[-3];
    if (!car_legal(v_242)) v_242 = cdrerror(v_242); else
    v_242 = cdr(v_242);
    if (!car_legal(v_242)) v_244 = carerror(v_242); else
    v_244 = car(v_242);
    v_242 = stack[-5];
    if (!car_legal(v_242)) v_242 = cdrerror(v_242); else
    v_242 = cdr(v_242);
    if (!car_legal(v_242)) v_243 = carerror(v_242); else
    v_243 = car(v_242);
    v_242 = stack[-4];
    v_242 = Lputv(nil, v_244, v_243, v_242);
    goto v_19;
v_21:
    v_243 = stack[-3];
    v_242 = basic_elt(env, 1); // sparsemat
    if (!consp(v_243)) goto v_73;
    v_243 = car(v_243);
    if (v_243 == v_242) goto v_74;
v_73:
    stack[-1] = basic_elt(env, 2); // matrix
    stack[0] = static_cast<LispObject>(160)+TAG_FIXNUM; // 10
    v_244 = basic_elt(env, 3); // "Matrix"
    v_242 = stack[-5];
    if (!car_legal(v_242)) v_243 = carerror(v_242); else
    v_243 = car(v_242);
    v_242 = basic_elt(env, 4); // "not set"
    v_242 = list3(v_244, v_243, v_242);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 7); // rerror
    v_242 = (*qfn3(fn))(fn, stack[-1], stack[0], v_242);
    }
    env = stack[-7];
    goto v_72;
v_74:
    v_242 = stack[-5];
    if (!car_legal(v_242)) v_242 = cdrerror(v_242); else
    v_242 = cdr(v_242);
    {   LispObject fn = basic_elt(env, 8); // revlis
    v_242 = (*qfn1(fn))(fn, v_242);
    }
    env = stack[-7];
    stack[-6] = v_242;
    {   LispObject fn = basic_elt(env, 9); // numlis
    v_242 = (*qfn1(fn))(fn, v_242);
    }
    env = stack[-7];
    if (v_242 == nil) goto v_90;
    else goto v_91;
v_90:
    v_242 = lisp_true;
    goto v_89;
v_91:
    v_242 = stack[-6];
    v_243 = Llength(nil, v_242);
    env = stack[-7];
    v_242 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_242 = Lneq_2(nil, v_243, v_242);
    env = stack[-7];
    goto v_89;
    v_242 = nil;
v_89:
    if (v_242 == nil) goto v_87;
    v_243 = stack[-5];
    v_242 = basic_elt(env, 5); // hold
    {
        LispObject fn = basic_elt(env, 10); // errpri2
        return (*qfn2(fn))(fn, v_243, v_242);
    }
v_87:
v_72:
    v_242 = stack[-3];
    if (!car_legal(v_242)) v_242 = cdrerror(v_242); else
    v_242 = cdr(v_242);
    if (!car_legal(v_242)) v_243 = carerror(v_242); else
    v_243 = car(v_242);
    v_242 = stack[-6];
    if (!car_legal(v_242)) v_242 = carerror(v_242); else
    v_242 = car(v_242);
    v_242 = Lgetv(nil, v_243, v_242);
    env = stack[-7];
    v_245 = v_242;
    v_242 = v_245;
    if (v_242 == nil) goto v_114;
    else goto v_115;
v_114:
    v_243 = stack[-4];
    v_242 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_243 == v_242) goto v_123;
    else goto v_124;
v_123:
    v_243 = stack[-2];
    v_242 = basic_elt(env, 6); // cx
    v_242 = (v_243 == v_242 ? lisp_true : nil);
    v_242 = (v_242 == nil ? lisp_true : nil);
    goto v_122;
v_124:
    v_242 = nil;
    goto v_122;
    v_242 = nil;
v_122:
    if (v_242 == nil) goto v_120;
    goto v_118;
v_120:
    v_242 = stack[-3];
    if (!car_legal(v_242)) v_242 = cdrerror(v_242); else
    v_242 = cdr(v_242);
    if (!car_legal(v_242)) stack[-2] = carerror(v_242); else
    stack[-2] = car(v_242);
    v_242 = stack[-6];
    if (!car_legal(v_242)) stack[-1] = carerror(v_242); else
    stack[-1] = car(v_242);
    v_242 = nil;
    stack[0] = ncons(v_242);
    env = stack[-7];
    v_242 = stack[-6];
    if (!car_legal(v_242)) v_242 = cdrerror(v_242); else
    v_242 = cdr(v_242);
    if (!car_legal(v_242)) v_243 = carerror(v_242); else
    v_243 = car(v_242);
    v_242 = stack[-4];
    v_242 = cons(v_243, v_242);
    env = stack[-7];
    v_242 = list2(stack[0], v_242);
    env = stack[-7];
    v_242 = Lputv(nil, stack[-2], stack[-1], v_242);
    goto v_118;
v_118:
    goto v_113;
v_115:
    v_242 = stack[-6];
    if (!car_legal(v_242)) v_242 = cdrerror(v_242); else
    v_242 = cdr(v_242);
    if (!car_legal(v_242)) v_243 = carerror(v_242); else
    v_243 = car(v_242);
    v_242 = v_245;
    v_242 = Latsoc(nil, v_243, v_242);
    v_244 = v_242;
    v_242 = v_244;
    if (v_242 == nil) goto v_161;
    else goto v_162;
v_161:
    v_243 = stack[-4];
    v_242 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_243 == v_242) goto v_170;
    else goto v_171;
v_170:
    v_243 = stack[-2];
    v_242 = basic_elt(env, 6); // cx
    v_242 = (v_243 == v_242 ? lisp_true : nil);
    v_242 = (v_242 == nil ? lisp_true : nil);
    goto v_169;
v_171:
    v_242 = nil;
    goto v_169;
    v_242 = nil;
v_169:
    if (v_242 == nil) goto v_167;
    goto v_165;
v_167:
    v_242 = stack[-6];
    if (!car_legal(v_242)) v_242 = cdrerror(v_242); else
    v_242 = cdr(v_242);
    if (!car_legal(v_242)) v_243 = carerror(v_242); else
    v_243 = car(v_242);
    v_244 = v_245;
    v_242 = stack[-4];
    {   LispObject fn = basic_elt(env, 11); // sortcolelem
    v_242 = (*qfn3(fn))(fn, v_243, v_244, v_242);
    }
    goto v_165;
v_165:
    goto v_160;
v_162:
    v_243 = stack[-4];
    v_242 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_243 == v_242) goto v_199;
    else goto v_200;
v_199:
    v_243 = stack[-2];
    v_242 = basic_elt(env, 6); // cx
    v_242 = (v_243 == v_242 ? lisp_true : nil);
    v_242 = (v_242 == nil ? lisp_true : nil);
    goto v_198;
v_200:
    v_242 = nil;
    goto v_198;
    v_242 = nil;
v_198:
    if (v_242 == nil) goto v_196;
    v_242 = v_245;
    if (!car_legal(v_242)) v_242 = cdrerror(v_242); else
    v_242 = cdr(v_242);
    if (!car_legal(v_242)) v_242 = cdrerror(v_242); else
    v_242 = cdr(v_242);
    if (v_242 == nil) goto v_212;
    else goto v_213;
v_212:
    v_242 = stack[-3];
    if (!car_legal(v_242)) v_242 = cdrerror(v_242); else
    v_242 = cdr(v_242);
    if (!car_legal(v_242)) v_244 = carerror(v_242); else
    v_244 = car(v_242);
    v_242 = stack[-6];
    if (!car_legal(v_242)) v_243 = carerror(v_242); else
    v_243 = car(v_242);
    v_242 = nil;
    v_242 = Lputv(nil, v_244, v_243, v_242);
    goto v_211;
v_213:
    stack[0] = v_245;
    v_242 = v_244;
    v_243 = v_245;
    v_242 = Ldelete(nil, v_242, v_243);
    if (!car_legal(v_242)) v_242 = cdrerror(v_242); else
    v_242 = cdr(v_242);
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_242);
    goto v_211;
v_211:
    goto v_194;
v_196:
    v_243 = v_244;
    v_242 = stack[-4];
    if (!car_legal(v_243)) rplacd_fails(v_243);
    setcdr(v_243, v_242);
    goto v_194;
v_194:
    goto v_160;
v_160:
    goto v_113;
v_113:
    goto v_19;
v_19:
    v_242 = nil;
    return onevalue(v_242);
}



// Code for nextarg

static LispObject CC_nextarg(LispObject env,
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
    v_15 = qvalue(basic_elt(env, 1)); // symm
    if (v_15 == nil) goto v_7;
    v_15 = v_16;
    {
        LispObject fn = basic_elt(env, 2); // s!-nextarg
        return (*qfn1(fn))(fn, v_15);
    }
v_7:
    v_15 = v_16;
    {
        LispObject fn = basic_elt(env, 3); // o!-nextarg
        return (*qfn1(fn))(fn, v_15);
    }
    v_15 = nil;
    return onevalue(v_15);
}



// Code for diplength

static LispObject CC_diplength(LispObject env,
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
    v_36 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_35 = stack[-1];
    v_35 = cons(v_36, v_35);
    env = stack[-2];
    stack[-1] = v_35;
    v_35 = stack[0];
    if (!car_legal(v_35)) v_35 = cdrerror(v_35); else
    v_35 = cdr(v_35);
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



// Code for divide!:

static LispObject CC_divideT(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    stack[0] = stack[-1];
    v_37 = stack[-2];
    if (!car_legal(v_37)) v_37 = cdrerror(v_37); else
    v_37 = cdr(v_37);
    if (!car_legal(v_37)) v_37 = carerror(v_37); else
    v_37 = car(v_37);
    v_37 = Labsval(nil, v_37);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 2); // msd
    v_37 = (*qfn1(fn))(fn, v_37);
    }
    env = stack[-5];
    v_37 = add1(v_37);
    env = stack[-5];
    v_37 = plus2(stack[0], v_37);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 3); // conv!:mt
    v_37 = (*qfn2(fn))(fn, stack[-3], v_37);
    }
    env = stack[-5];
    stack[-3] = v_37;
    stack[-4] = basic_elt(env, 1); // !:rd!:
    v_37 = stack[-3];
    if (!car_legal(v_37)) v_37 = cdrerror(v_37); else
    v_37 = cdr(v_37);
    if (!car_legal(v_37)) v_38 = carerror(v_37); else
    v_38 = car(v_37);
    v_37 = stack[-2];
    if (!car_legal(v_37)) v_37 = cdrerror(v_37); else
    v_37 = cdr(v_37);
    if (!car_legal(v_37)) v_37 = carerror(v_37); else
    v_37 = car(v_37);
    stack[0] = quot2(v_38, v_37);
    env = stack[-5];
    v_37 = stack[-3];
    if (!car_legal(v_37)) v_37 = cdrerror(v_37); else
    v_37 = cdr(v_37);
    if (!car_legal(v_37)) v_38 = cdrerror(v_37); else
    v_38 = cdr(v_37);
    v_37 = stack[-2];
    if (!car_legal(v_37)) v_37 = cdrerror(v_37); else
    v_37 = cdr(v_37);
    if (!car_legal(v_37)) v_37 = cdrerror(v_37); else
    v_37 = cdr(v_37);
    v_37 = difference2(v_38, v_37);
    env = stack[-5];
    v_37 = list2star(stack[-4], stack[0], v_37);
    env = stack[-5];
    stack[-3] = v_37;
    v_38 = stack[-3];
    v_37 = stack[-1];
    {
        LispObject fn = basic_elt(env, 4); // round!:mt
        return (*qfn2(fn))(fn, v_38, v_37);
    }
    return onevalue(v_37);
}



// Code for list2widestring

static LispObject CC_list2widestring(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_230, v_231, v_232;
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
    v_230 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-6] = v_230;
    v_230 = stack[-8];
    stack[0] = v_230;
v_10:
    v_230 = stack[0];
    if (v_230 == nil) goto v_17;
    else goto v_18;
v_17:
    goto v_11;
v_18:
    v_230 = stack[0];
    if (!car_legal(v_230)) v_230 = carerror(v_230); else
    v_230 = car(v_230);
    stack[-9] = v_230;
    v_230 = stack[0];
    if (!car_legal(v_230)) v_230 = cdrerror(v_230); else
    v_230 = cdr(v_230);
    stack[0] = v_230;
    v_230 = stack[-9];
    if (symbolp(v_230)) goto v_26;
    else goto v_27;
v_26:
    v_230 = stack[-9];
    v_230 = Lsymbol_name(nil, v_230);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 5); // widestring2list
    v_230 = (*qfn1(fn))(fn, v_230);
    }
    env = stack[-10];
    if (!car_legal(v_230)) v_230 = carerror(v_230); else
    v_230 = car(v_230);
    stack[-9] = v_230;
    goto v_25;
v_27:
    v_230 = stack[-9];
    v_230 = Lstringp(nil, v_230);
    env = stack[-10];
    if (v_230 == nil) goto v_34;
    v_231 = stack[-9];
    v_230 = basic_elt(env, 1); // ""
    if (equal(v_231, v_230)) goto v_34;
    v_230 = stack[-9];
    {   LispObject fn = basic_elt(env, 5); // widestring2list
    v_230 = (*qfn1(fn))(fn, v_230);
    }
    env = stack[-10];
    if (!car_legal(v_230)) v_230 = carerror(v_230); else
    v_230 = car(v_230);
    stack[-9] = v_230;
    goto v_25;
v_34:
    v_230 = stack[-9];
    v_230 = integerp(v_230);
    if (v_230 == nil) goto v_44;
    else goto v_45;
v_44:
    v_230 = basic_elt(env, 2); // "Invalid item in arg to list2widestring"
    {   LispObject fn = basic_elt(env, 6); // rederr
    v_230 = (*qfn1(fn))(fn, v_230);
    }
    env = stack[-10];
    goto v_25;
v_45:
v_25:
    v_231 = stack[-9];
    v_230 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_230 = static_cast<LispObject>(lessp2(v_231, v_230));
    v_230 = v_230 ? lisp_true : nil;
    env = stack[-10];
    if (v_230 == nil) goto v_53;
    v_231 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_230 = basic_elt(env, 3); // "Negative integer in list2widestring"
    {   LispObject fn = basic_elt(env, 7); // error
    v_230 = (*qfn2(fn))(fn, v_231, v_230);
    }
    env = stack[-10];
    goto v_51;
v_53:
    v_231 = stack[-9];
    v_230 = static_cast<LispObject>(2048)+TAG_FIXNUM; // 128
    v_230 = static_cast<LispObject>(lessp2(v_231, v_230));
    v_230 = v_230 ? lisp_true : nil;
    env = stack[-10];
    if (v_230 == nil) goto v_61;
    v_230 = stack[-6];
    v_230 = add1(v_230);
    env = stack[-10];
    stack[-6] = v_230;
    goto v_51;
v_61:
    v_231 = stack[-9];
    v_230 = static_cast<LispObject>(32768)+TAG_FIXNUM; // 2048
    v_230 = static_cast<LispObject>(lessp2(v_231, v_230));
    v_230 = v_230 ? lisp_true : nil;
    env = stack[-10];
    if (v_230 == nil) goto v_68;
    v_231 = stack[-6];
    v_230 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_230 = plus2(v_231, v_230);
    env = stack[-10];
    stack[-6] = v_230;
    goto v_51;
v_68:
    v_231 = stack[-9];
    v_230 = static_cast<LispObject>(1048576)+TAG_FIXNUM; // 65536
    v_230 = static_cast<LispObject>(lessp2(v_231, v_230));
    v_230 = v_230 ? lisp_true : nil;
    env = stack[-10];
    if (v_230 == nil) goto v_76;
    v_231 = stack[-6];
    v_230 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_230 = plus2(v_231, v_230);
    env = stack[-10];
    stack[-6] = v_230;
    goto v_51;
v_76:
    v_231 = stack[-9];
    v_230 = static_cast<LispObject>(17825792)+TAG_FIXNUM; // 1114112
    v_230 = static_cast<LispObject>(lessp2(v_231, v_230));
    v_230 = v_230 ? lisp_true : nil;
    env = stack[-10];
    if (v_230 == nil) goto v_84;
    v_231 = stack[-6];
    v_230 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_230 = plus2(v_231, v_230);
    env = stack[-10];
    stack[-6] = v_230;
    goto v_51;
v_84:
    v_231 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_230 = basic_elt(env, 4); // "Integer too large in list2widestring"
    {   LispObject fn = basic_elt(env, 7); // error
    v_230 = (*qfn2(fn))(fn, v_231, v_230);
    }
    env = stack[-10];
    goto v_51;
v_51:
    goto v_10;
v_11:
    v_230 = stack[-6];
    {   LispObject fn = basic_elt(env, 8); // allocate!-string
    v_230 = (*qfn1(fn))(fn, v_230);
    }
    env = stack[-10];
    stack[-7] = v_230;
    v_230 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-6] = v_230;
v_101:
    v_230 = stack[-8];
    if (v_230 == nil) goto v_104;
    else goto v_105;
v_104:
    goto v_100;
v_105:
    v_230 = stack[-8];
    if (!car_legal(v_230)) v_230 = carerror(v_230); else
    v_230 = car(v_230);
    stack[-9] = v_230;
    v_230 = stack[-9];
    if (symbolp(v_230)) goto v_112;
    else goto v_113;
v_112:
    v_230 = stack[-9];
    v_230 = Lsymbol_name(nil, v_230);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 5); // widestring2list
    v_230 = (*qfn1(fn))(fn, v_230);
    }
    env = stack[-10];
    if (!car_legal(v_230)) v_230 = carerror(v_230); else
    v_230 = car(v_230);
    stack[-9] = v_230;
    goto v_111;
v_113:
    v_230 = stack[-9];
    v_230 = Lstringp(nil, v_230);
    env = stack[-10];
    if (v_230 == nil) goto v_120;
    v_231 = stack[-9];
    v_230 = basic_elt(env, 1); // ""
    if (equal(v_231, v_230)) goto v_120;
    v_230 = stack[-9];
    {   LispObject fn = basic_elt(env, 5); // widestring2list
    v_230 = (*qfn1(fn))(fn, v_230);
    }
    env = stack[-10];
    if (!car_legal(v_230)) v_230 = carerror(v_230); else
    v_230 = car(v_230);
    stack[-9] = v_230;
    goto v_111;
v_120:
v_111:
    v_230 = stack[-8];
    if (!car_legal(v_230)) v_230 = cdrerror(v_230); else
    v_230 = cdr(v_230);
    stack[-8] = v_230;
    v_231 = stack[-9];
    v_230 = static_cast<LispObject>(2048)+TAG_FIXNUM; // 128
    v_230 = static_cast<LispObject>(lessp2(v_231, v_230));
    v_230 = v_230 ? lisp_true : nil;
    env = stack[-10];
    if (v_230 == nil) goto v_135;
    v_232 = stack[-7];
    v_231 = stack[-6];
    v_230 = stack[-9];
    {   LispObject fn = basic_elt(env, 9); // string!-store
    v_230 = (*qfn3(fn))(fn, v_232, v_231, v_230);
    }
    env = stack[-10];
    v_230 = stack[-6];
    v_230 = add1(v_230);
    env = stack[-10];
    stack[-6] = v_230;
    goto v_133;
v_135:
    v_231 = stack[-9];
    v_230 = static_cast<LispObject>(32768)+TAG_FIXNUM; // 2048
    v_230 = static_cast<LispObject>(lessp2(v_231, v_230));
    v_230 = v_230 ? lisp_true : nil;
    env = stack[-10];
    if (v_230 == nil) goto v_146;
    stack[-3] = stack[-7];
    stack[-2] = stack[-6];
    stack[0] = static_cast<LispObject>(3072)+TAG_FIXNUM; // 192
    v_231 = stack[-9];
    v_230 = static_cast<LispObject>(-96)+TAG_FIXNUM; // -6
    {   LispObject fn = basic_elt(env, 10); // lshift
    v_230 = (*qfn2(fn))(fn, v_231, v_230);
    }
    env = stack[-10];
    stack[-1] = plus2(stack[0], v_230);
    env = stack[-10];
    stack[0] = static_cast<LispObject>(2048)+TAG_FIXNUM; // 128
    v_231 = stack[-9];
    v_230 = static_cast<LispObject>(1008)+TAG_FIXNUM; // 63
    {   LispObject fn = basic_elt(env, 11); // land
    v_230 = (*qfn2(fn))(fn, v_231, v_230);
    }
    env = stack[-10];
    v_230 = plus2(stack[0], v_230);
    env = stack[-10];
    v_230 = ncons(v_230);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 12); // string!-store2
    v_230 = (*qfn4up(fn))(fn, stack[-3], stack[-2], stack[-1], v_230);
    }
    env = stack[-10];
    v_231 = stack[-6];
    v_230 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_230 = plus2(v_231, v_230);
    env = stack[-10];
    stack[-6] = v_230;
    goto v_133;
v_146:
    v_231 = stack[-9];
    v_230 = static_cast<LispObject>(1048576)+TAG_FIXNUM; // 65536
    v_230 = static_cast<LispObject>(lessp2(v_231, v_230));
    v_230 = v_230 ? lisp_true : nil;
    env = stack[-10];
    if (v_230 == nil) goto v_168;
    stack[-4] = stack[-7];
    stack[-3] = stack[-6];
    stack[0] = static_cast<LispObject>(3584)+TAG_FIXNUM; // 224
    v_231 = stack[-9];
    v_230 = static_cast<LispObject>(-192)+TAG_FIXNUM; // -12
    {   LispObject fn = basic_elt(env, 10); // lshift
    v_230 = (*qfn2(fn))(fn, v_231, v_230);
    }
    env = stack[-10];
    stack[-2] = plus2(stack[0], v_230);
    env = stack[-10];
    stack[0] = static_cast<LispObject>(2048)+TAG_FIXNUM; // 128
    v_231 = stack[-9];
    v_230 = static_cast<LispObject>(-96)+TAG_FIXNUM; // -6
    {   LispObject fn = basic_elt(env, 10); // lshift
    v_231 = (*qfn2(fn))(fn, v_231, v_230);
    }
    env = stack[-10];
    v_230 = static_cast<LispObject>(1008)+TAG_FIXNUM; // 63
    {   LispObject fn = basic_elt(env, 11); // land
    v_230 = (*qfn2(fn))(fn, v_231, v_230);
    }
    env = stack[-10];
    stack[-1] = plus2(stack[0], v_230);
    env = stack[-10];
    stack[0] = static_cast<LispObject>(2048)+TAG_FIXNUM; // 128
    v_231 = stack[-9];
    v_230 = static_cast<LispObject>(1008)+TAG_FIXNUM; // 63
    {   LispObject fn = basic_elt(env, 11); // land
    v_230 = (*qfn2(fn))(fn, v_231, v_230);
    }
    env = stack[-10];
    v_230 = plus2(stack[0], v_230);
    env = stack[-10];
    v_230 = list2(stack[-1], v_230);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 13); // string!-store3
    v_230 = (*qfn4up(fn))(fn, stack[-4], stack[-3], stack[-2], v_230);
    }
    env = stack[-10];
    v_231 = stack[-6];
    v_230 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_230 = plus2(v_231, v_230);
    env = stack[-10];
    stack[-6] = v_230;
    goto v_133;
v_168:
    stack[-5] = stack[-7];
    stack[-4] = stack[-6];
    stack[0] = static_cast<LispObject>(3840)+TAG_FIXNUM; // 240
    v_231 = stack[-9];
    v_230 = static_cast<LispObject>(-288)+TAG_FIXNUM; // -18
    {   LispObject fn = basic_elt(env, 10); // lshift
    v_230 = (*qfn2(fn))(fn, v_231, v_230);
    }
    env = stack[-10];
    stack[-3] = plus2(stack[0], v_230);
    env = stack[-10];
    stack[0] = static_cast<LispObject>(2048)+TAG_FIXNUM; // 128
    v_231 = stack[-9];
    v_230 = static_cast<LispObject>(-192)+TAG_FIXNUM; // -12
    {   LispObject fn = basic_elt(env, 10); // lshift
    v_231 = (*qfn2(fn))(fn, v_231, v_230);
    }
    env = stack[-10];
    v_230 = static_cast<LispObject>(1008)+TAG_FIXNUM; // 63
    {   LispObject fn = basic_elt(env, 11); // land
    v_230 = (*qfn2(fn))(fn, v_231, v_230);
    }
    env = stack[-10];
    stack[-2] = plus2(stack[0], v_230);
    env = stack[-10];
    stack[0] = static_cast<LispObject>(2048)+TAG_FIXNUM; // 128
    v_231 = stack[-9];
    v_230 = static_cast<LispObject>(-96)+TAG_FIXNUM; // -6
    {   LispObject fn = basic_elt(env, 10); // lshift
    v_231 = (*qfn2(fn))(fn, v_231, v_230);
    }
    env = stack[-10];
    v_230 = static_cast<LispObject>(1008)+TAG_FIXNUM; // 63
    {   LispObject fn = basic_elt(env, 11); // land
    v_230 = (*qfn2(fn))(fn, v_231, v_230);
    }
    env = stack[-10];
    stack[-1] = plus2(stack[0], v_230);
    env = stack[-10];
    stack[0] = static_cast<LispObject>(2048)+TAG_FIXNUM; // 128
    v_231 = stack[-9];
    v_230 = static_cast<LispObject>(1008)+TAG_FIXNUM; // 63
    {   LispObject fn = basic_elt(env, 11); // land
    v_230 = (*qfn2(fn))(fn, v_231, v_230);
    }
    env = stack[-10];
    v_230 = plus2(stack[0], v_230);
    env = stack[-10];
    v_230 = list3(stack[-2], stack[-1], v_230);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 14); // string!-store4
    v_230 = (*qfn4up(fn))(fn, stack[-5], stack[-4], stack[-3], v_230);
    }
    env = stack[-10];
    v_231 = stack[-6];
    v_230 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_230 = plus2(v_231, v_230);
    env = stack[-10];
    stack[-6] = v_230;
    goto v_133;
v_133:
    goto v_101;
v_100:
    v_230 = stack[-7];
    return onevalue(v_230);
}



// Code for groeb!=testa

static LispObject CC_groebMtesta(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_3;
    v_12 = v_2;
// end of prologue
    v_13 = v_12;
    v_12 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    {   LispObject fn = basic_elt(env, 1); // nth
    stack[-1] = (*qfn2(fn))(fn, v_13, v_12);
    }
    env = stack[-2];
    v_13 = stack[0];
    v_12 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    {   LispObject fn = basic_elt(env, 1); // nth
    v_12 = (*qfn2(fn))(fn, v_13, v_12);
    }
    env = stack[-2];
    {
        LispObject v_16 = stack[-1];
        LispObject fn = basic_elt(env, 2); // mo_divides!?
        return (*qfn2(fn))(fn, v_16, v_12);
    }
}



// Code for dv_skelhead

static LispObject CC_dv_skelhead(LispObject env,
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
    {
        LispObject fn = basic_elt(env, 1); // dv_cambhead
        return (*qfn1(fn))(fn, v_7);
    }
}



// Code for rnplus!:

static LispObject CC_rnplusT(LispObject env,
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
    v_28 = stack[-1];
    if (!car_legal(v_28)) v_28 = cdrerror(v_28); else
    v_28 = cdr(v_28);
    if (!car_legal(v_28)) v_29 = carerror(v_28); else
    v_29 = car(v_28);
    v_28 = stack[0];
    if (!car_legal(v_28)) v_28 = cdrerror(v_28); else
    v_28 = cdr(v_28);
    if (!car_legal(v_28)) v_28 = cdrerror(v_28); else
    v_28 = cdr(v_28);
    stack[-2] = times2(v_29, v_28);
    env = stack[-3];
    v_28 = stack[-1];
    if (!car_legal(v_28)) v_28 = cdrerror(v_28); else
    v_28 = cdr(v_28);
    if (!car_legal(v_28)) v_29 = cdrerror(v_28); else
    v_29 = cdr(v_28);
    v_28 = stack[0];
    if (!car_legal(v_28)) v_28 = cdrerror(v_28); else
    v_28 = cdr(v_28);
    if (!car_legal(v_28)) v_28 = carerror(v_28); else
    v_28 = car(v_28);
    v_28 = times2(v_29, v_28);
    env = stack[-3];
    stack[-2] = plus2(stack[-2], v_28);
    env = stack[-3];
    v_28 = stack[-1];
    if (!car_legal(v_28)) v_28 = cdrerror(v_28); else
    v_28 = cdr(v_28);
    if (!car_legal(v_28)) v_29 = cdrerror(v_28); else
    v_29 = cdr(v_28);
    v_28 = stack[0];
    if (!car_legal(v_28)) v_28 = cdrerror(v_28); else
    v_28 = cdr(v_28);
    if (!car_legal(v_28)) v_28 = cdrerror(v_28); else
    v_28 = cdr(v_28);
    v_28 = times2(v_29, v_28);
    env = stack[-3];
    {
        LispObject v_33 = stack[-2];
        LispObject fn = basic_elt(env, 1); // mkrn
        return (*qfn2(fn))(fn, v_33, v_28);
    }
}



// Code for lalr_remove_duplicates

static LispObject CC_lalr_remove_duplicates(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_35, v_36, v_37, v_38;
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
    v_38 = nil;
    stack[0] = v_35;
v_10:
    v_35 = stack[0];
    if (v_35 == nil) goto v_14;
    else goto v_15;
v_14:
    goto v_9;
v_15:
    v_35 = stack[0];
    if (!car_legal(v_35)) v_35 = carerror(v_35); else
    v_35 = car(v_35);
    v_37 = v_35;
    v_36 = v_37;
    v_35 = v_38;
    v_35 = Lmember(nil, v_36, v_35);
    if (v_35 == nil) goto v_23;
    else goto v_24;
v_23:
    v_35 = v_37;
    v_36 = v_38;
    v_35 = cons(v_35, v_36);
    env = stack[-1];
    v_38 = v_35;
    goto v_22;
v_24:
v_22:
    v_35 = stack[0];
    if (!car_legal(v_35)) v_35 = cdrerror(v_35); else
    v_35 = cdr(v_35);
    stack[0] = v_35;
    goto v_10;
v_9:
    v_35 = v_38;
        return Lnreverse(nil, v_35);
    return onevalue(v_35);
}



// Code for sfto_gcdf

static LispObject CC_sfto_gcdf(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    v_35 = qvalue(basic_elt(env, 1)); // !*rldavgcd
    if (v_35 == nil) goto v_7;
    else goto v_8;
v_7:
    v_36 = stack[-1];
    v_35 = stack[0];
    {
        LispObject fn = basic_elt(env, 3); // gcdf
        return (*qfn2(fn))(fn, v_36, v_35);
    }
v_8:
    v_36 = stack[-1];
    v_35 = nil;
    {   LispObject fn = basic_elt(env, 4); // sfto_davp
    v_35 = (*qfn2(fn))(fn, v_36, v_35);
    }
    env = stack[-3];
    if (v_35 == nil) goto v_15;
    else goto v_13;
v_15:
    v_36 = stack[0];
    v_35 = nil;
    {   LispObject fn = basic_elt(env, 4); // sfto_davp
    v_35 = (*qfn2(fn))(fn, v_36, v_35);
    }
    env = stack[-3];
    if (v_35 == nil) goto v_19;
    else goto v_13;
v_19:
    goto v_14;
v_13:
    v_35 = nil;
// Binding !*ezgcd
// FLUIDBIND: reloadenv=3 litvec-offset=2 saveloc=2
{   bind_fluid_stack bind_fluid_var(-3, 2, -2);
    setvalue(basic_elt(env, 2), v_35); // !*ezgcd
    v_36 = stack[-1];
    v_35 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // gcdf
    v_35 = (*qfn2(fn))(fn, v_36, v_35);
    }
    ;}  // end of a binding scope
    goto v_6;
v_14:
    v_36 = stack[-1];
    v_35 = stack[0];
    {
        LispObject fn = basic_elt(env, 5); // ezgcdf
        return (*qfn2(fn))(fn, v_36, v_35);
    }
    v_35 = nil;
v_6:
    return onevalue(v_35);
}



// Code for totallessp

static LispObject CC_totallessp(LispObject env,
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
    {   LispObject fn = basic_elt(env, 2); // totalcompare
    v_10 = (*qfn2(fn))(fn, v_11, v_10);
    }
    env = stack[0];
    v_11 = basic_elt(env, 1); // less
    v_10 = (v_10 == v_11 ? lisp_true : nil);
    return onevalue(v_10);
}



// Code for talp_tcfrp

static LispObject CC_talp_tcfrp(LispObject env,
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
    v_16 = v_2;
// end of prologue
    v_15 = v_16;
    if (!consp(v_15)) goto v_6;
    else goto v_7;
v_6:
    v_15 = lisp_true;
    goto v_5;
v_7:
    v_15 = v_16;
    {   LispObject fn = basic_elt(env, 1); // talp_invp
    v_15 = (*qfn1(fn))(fn, v_15);
    }
    goto v_5;
    v_15 = nil;
v_5:
    v_15 = (v_15 == nil ? lisp_true : nil);
    return onevalue(v_15);
}



// Code for pasf_susitf

static LispObject CC_pasf_susitf(LispObject env,
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



// Code for times!-term!-mod!-p

static LispObject CC_timesKtermKmodKp(LispObject env,
                         LispObject v_2, LispObject v_3)
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
v_10:
    v_150 = stack[-1];
    if (v_150 == nil) goto v_14;
    else goto v_15;
v_14:
    v_150 = nil;
    goto v_11;
v_15:
    v_150 = stack[-1];
    if (!consp(v_150)) goto v_22;
    else goto v_23;
v_22:
    v_150 = lisp_true;
    goto v_21;
v_23:
    v_150 = stack[-1];
    if (!car_legal(v_150)) v_150 = carerror(v_150); else
    v_150 = car(v_150);
    v_150 = (consp(v_150) ? nil : lisp_true);
    goto v_21;
    v_150 = nil;
v_21:
    if (v_150 == nil) goto v_19;
    v_150 = stack[-2];
    if (!car_legal(v_150)) v_151 = cdrerror(v_150); else
    v_151 = cdr(v_150);
    v_150 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // multiply!-by!-constant!-mod!-p
    v_151 = (*qfn2(fn))(fn, v_151, v_150);
    }
    env = stack[-4];
    v_150 = nil;
    v_152 = v_151;
    if (v_152 == nil) goto v_40;
    else goto v_41;
v_40:
    goto v_39;
v_41:
    v_152 = stack[-2];
    if (!car_legal(v_152)) v_152 = carerror(v_152); else
    v_152 = car(v_152);
    v_150 = acons(v_152, v_151, v_150);
    goto v_39;
    v_150 = nil;
v_39:
    goto v_11;
v_19:
    v_150 = stack[-2];
    if (!car_legal(v_150)) v_150 = carerror(v_150); else
    v_150 = car(v_150);
    if (!car_legal(v_150)) v_151 = carerror(v_150); else
    v_151 = car(v_150);
    v_150 = stack[-1];
    if (!car_legal(v_150)) v_150 = carerror(v_150); else
    v_150 = car(v_150);
    if (!car_legal(v_150)) v_150 = carerror(v_150); else
    v_150 = car(v_150);
    if (!car_legal(v_150)) v_150 = carerror(v_150); else
    v_150 = car(v_150);
    if (equal(v_151, v_150)) goto v_51;
    else goto v_52;
v_51:
    v_150 = stack[-2];
    if (!car_legal(v_150)) v_150 = carerror(v_150); else
    v_150 = car(v_150);
    if (!car_legal(v_150)) v_152 = carerror(v_150); else
    v_152 = car(v_150);
    v_150 = stack[-2];
    if (!car_legal(v_150)) v_150 = carerror(v_150); else
    v_150 = car(v_150);
    if (!car_legal(v_150)) v_151 = cdrerror(v_150); else
    v_151 = cdr(v_150);
    v_150 = stack[-1];
    if (!car_legal(v_150)) v_150 = carerror(v_150); else
    v_150 = car(v_150);
    if (!car_legal(v_150)) v_150 = carerror(v_150); else
    v_150 = car(v_150);
    if (!car_legal(v_150)) v_150 = cdrerror(v_150); else
    v_150 = cdr(v_150);
    v_150 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_151) + static_cast<std::uintptr_t>(v_150) - TAG_FIXNUM);
    {   LispObject fn = basic_elt(env, 2); // mksp
    stack[0] = (*qfn2(fn))(fn, v_152, v_150);
    }
    env = stack[-4];
    v_150 = stack[-2];
    if (!car_legal(v_150)) v_151 = cdrerror(v_150); else
    v_151 = cdr(v_150);
    v_150 = stack[-1];
    if (!car_legal(v_150)) v_150 = carerror(v_150); else
    v_150 = car(v_150);
    if (!car_legal(v_150)) v_150 = cdrerror(v_150); else
    v_150 = cdr(v_150);
    {   LispObject fn = basic_elt(env, 3); // times!-mod!-p
    v_151 = (*qfn2(fn))(fn, v_151, v_150);
    }
    env = stack[-4];
    v_150 = stack[-3];
    v_150 = acons(stack[0], v_151, v_150);
    env = stack[-4];
    stack[-3] = v_150;
    v_150 = stack[-1];
    if (!car_legal(v_150)) v_150 = cdrerror(v_150); else
    v_150 = cdr(v_150);
    stack[-1] = v_150;
    goto v_10;
v_52:
    v_150 = stack[-2];
    if (!car_legal(v_150)) v_150 = carerror(v_150); else
    v_150 = car(v_150);
    if (!car_legal(v_150)) v_151 = carerror(v_150); else
    v_151 = car(v_150);
    v_150 = stack[-1];
    if (!car_legal(v_150)) v_150 = carerror(v_150); else
    v_150 = car(v_150);
    if (!car_legal(v_150)) v_150 = carerror(v_150); else
    v_150 = car(v_150);
    if (!car_legal(v_150)) v_150 = carerror(v_150); else
    v_150 = car(v_150);
    {   LispObject fn = basic_elt(env, 4); // ordop
    v_150 = (*qfn2(fn))(fn, v_151, v_150);
    }
    env = stack[-4];
    if (v_150 == nil) goto v_83;
    v_150 = stack[-2];
    if (!car_legal(v_150)) v_151 = cdrerror(v_150); else
    v_151 = cdr(v_150);
    v_150 = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // times!-mod!-p
    v_151 = (*qfn2(fn))(fn, v_151, v_150);
    }
    env = stack[-4];
    v_150 = nil;
    v_152 = v_151;
    if (v_152 == nil) goto v_101;
    else goto v_102;
v_101:
    goto v_100;
v_102:
    v_152 = stack[-2];
    if (!car_legal(v_152)) v_152 = carerror(v_152); else
    v_152 = car(v_152);
    v_150 = acons(v_152, v_151, v_150);
    goto v_100;
    v_150 = nil;
v_100:
    goto v_11;
v_83:
    v_150 = stack[-1];
    if (!car_legal(v_150)) v_150 = carerror(v_150); else
    v_150 = car(v_150);
    if (!car_legal(v_150)) stack[0] = carerror(v_150); else
    stack[0] = car(v_150);
    v_151 = stack[-2];
    v_150 = stack[-1];
    if (!car_legal(v_150)) v_150 = carerror(v_150); else
    v_150 = car(v_150);
    if (!car_legal(v_150)) v_150 = cdrerror(v_150); else
    v_150 = cdr(v_150);
    {   LispObject fn = basic_elt(env, 0); // times!-term!-mod!-p
    v_151 = (*qfn2(fn))(fn, v_151, v_150);
    }
    env = stack[-4];
    v_150 = stack[-3];
    v_150 = acons(stack[0], v_151, v_150);
    env = stack[-4];
    stack[-3] = v_150;
    v_150 = stack[-1];
    if (!car_legal(v_150)) v_150 = cdrerror(v_150); else
    v_150 = cdr(v_150);
    stack[-1] = v_150;
    goto v_10;
v_11:
v_128:
    v_151 = stack[-3];
    if (v_151 == nil) goto v_131;
    else goto v_132;
v_131:
    goto v_127;
v_132:
    v_151 = stack[-3];
    if (!car_legal(v_151)) v_151 = cdrerror(v_151); else
    v_151 = cdr(v_151);
    v_152 = v_151;
    v_151 = stack[-3];
    if (!car_legal(v_151)) v_151 = carerror(v_151); else
    v_151 = car(v_151);
    if (!car_legal(v_151)) v_151 = cdrerror(v_151); else
    v_151 = cdr(v_151);
    if (v_151 == nil) goto v_140;
    v_151 = stack[-3];
    if (!car_legal(v_151)) rplacd_fails(v_151);
    setcdr(v_151, v_150);
    v_150 = stack[-3];
    goto v_138;
v_140:
v_138:
    v_151 = v_152;
    stack[-3] = v_151;
    goto v_128;
v_127:
    return onevalue(v_150);
}



// Code for omobjs

static LispObject CC_omobjs(LispObject env)
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// end of prologue
    v_31 = qvalue(basic_elt(env, 1)); // char
    v_30 = basic_elt(env, 2); // (!/ o m a)
    if (equal(v_31, v_30)) goto v_10;
    {   LispObject fn = basic_elt(env, 3); // omobj
    v_30 = (*qfn0(fn))(fn);
    }
    env = stack[-1];
    stack[0] = v_30;
    {   LispObject fn = basic_elt(env, 4); // lex
    v_30 = (*qfn0(fn))(fn);
    }
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 0); // omobjs
    v_30 = (*qfn0(fn))(fn);
    }
    v_31 = stack[0];
    if (v_31 == nil) goto v_18;
    else goto v_19;
v_18:
    v_31 = stack[0];
        return Lappend_2(nil, v_31, v_30);
v_19:
    v_31 = stack[0];
    return cons(v_31, v_30);
    goto v_8;
v_10:
v_8:
    v_30 = nil;
    return onevalue(v_30);
}



// Code for bound

static LispObject CC_bound(LispObject env,
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
    {   LispObject fn = basic_elt(env, 2); // binding
    v_18 = (*qfn1(fn))(fn, v_18);
    }
    env = stack[0];
    v_19 = v_18;
    v_18 = v_19;
    if (v_18 == nil) goto v_9;
    else goto v_10;
v_9:
    v_18 = nil;
    goto v_8;
v_10:
    v_18 = v_19;
    v_19 = basic_elt(env, 1); // unbound
        return Lneq_2(nil, v_18, v_19);
    v_18 = nil;
v_8:
    return onevalue(v_18);
}



// Code for freeindexchk

static LispObject CC_freeindexchk(LispObject env,
                         LispObject v_2)
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
    if (v_20 == nil) goto v_7;
    v_20 = qvalue(basic_elt(env, 1)); // indxl!*
    if (v_20 == nil) goto v_7;
    v_20 = v_21;
    {   LispObject fn = basic_elt(env, 3); // indxchk
    v_20 = (*qfn1(fn))(fn, v_20);
    }
    env = stack[0];
    if (v_20 == nil) goto v_7;
    v_20 = basic_elt(env, 2); // form!-with!-free!-indices
    goto v_5;
v_7:
    v_20 = nil;
    goto v_5;
    v_20 = nil;
v_5:
    return onevalue(v_20);
}



// Code for worderp

static LispObject CC_worderp(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_126, v_127, v_128;
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
v_7:
    v_126 = stack[-1];
    if (!consp(v_126)) goto v_15;
    v_126 = stack[-1];
    if (!car_legal(v_126)) v_126 = carerror(v_126); else
    v_126 = car(v_126);
    if (!symbolp(v_126)) v_126 = nil;
    else { v_126 = qfastgets(v_126);
           if (v_126 != nil) { v_126 = elt(v_126, 16); // indexvar
#ifdef RECORD_GET
             if (v_126 == SPID_NOPROP)
                record_get(elt(fastget_names, 16), 0),
                v_126 = nil;
             else record_get(elt(fastget_names, 16), 1),
                v_126 = lisp_true; }
           else record_get(elt(fastget_names, 16), 0); }
#else
             if (v_126 == SPID_NOPROP) v_126 = nil; else v_126 = lisp_true; }}
#endif
    if (v_126 == nil) goto v_20;
    v_126 = stack[0];
    if (!consp(v_126)) goto v_27;
    v_126 = stack[0];
    if (!car_legal(v_126)) v_126 = carerror(v_126); else
    v_126 = car(v_126);
    if (!symbolp(v_126)) v_126 = nil;
    else { v_126 = qfastgets(v_126);
           if (v_126 != nil) { v_126 = elt(v_126, 16); // indexvar
#ifdef RECORD_GET
             if (v_126 == SPID_NOPROP)
                record_get(elt(fastget_names, 16), 0),
                v_126 = nil;
             else record_get(elt(fastget_names, 16), 1),
                v_126 = lisp_true; }
           else record_get(elt(fastget_names, 16), 0); }
#else
             if (v_126 == SPID_NOPROP) v_126 = nil; else v_126 = lisp_true; }}
#endif
    goto v_25;
v_27:
    v_126 = nil;
    goto v_25;
    v_126 = nil;
v_25:
    goto v_18;
v_20:
    v_126 = nil;
    goto v_18;
    v_126 = nil;
v_18:
    goto v_13;
v_15:
    v_126 = nil;
    goto v_13;
    v_126 = nil;
v_13:
    if (v_126 == nil) goto v_11;
    v_127 = stack[-1];
    v_126 = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // indexvarordp
        return (*qfn2(fn))(fn, v_127, v_126);
    }
v_11:
    v_126 = stack[-1];
    if (!consp(v_126)) goto v_48;
    else goto v_49;
v_48:
    v_126 = lisp_true;
    goto v_47;
v_49:
    v_127 = stack[-1];
    v_126 = qvalue(basic_elt(env, 1)); // kord!*
    v_126 = Lmemq(nil, v_127, v_126);
    goto v_47;
    v_126 = nil;
v_47:
    if (v_126 == nil) goto v_45;
    v_126 = stack[0];
    if (!consp(v_126)) goto v_63;
    else goto v_64;
v_63:
    v_126 = lisp_true;
    goto v_62;
v_64:
    v_127 = stack[0];
    v_126 = qvalue(basic_elt(env, 1)); // kord!*
    v_126 = Lmemq(nil, v_127, v_126);
    goto v_62;
    v_126 = nil;
v_62:
    if (v_126 == nil) goto v_60;
    v_127 = stack[-1];
    v_126 = stack[0];
    {
        LispObject fn = basic_elt(env, 3); // ordop
        return (*qfn2(fn))(fn, v_127, v_126);
    }
v_60:
    v_126 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // peel
    v_126 = (*qfn1(fn))(fn, v_126);
    }
    env = stack[-2];
    v_128 = v_126;
    v_127 = stack[-1];
    v_126 = v_128;
    if (v_127 == v_126) goto v_82;
    else goto v_83;
v_82:
    v_126 = lisp_true;
    goto v_81;
v_83:
    v_126 = stack[-1];
    v_127 = v_128;
    stack[-1] = v_126;
    stack[0] = v_127;
    goto v_1;
    v_126 = nil;
v_81:
    goto v_6;
    goto v_9;
v_45:
    v_126 = stack[0];
    if (!consp(v_126)) goto v_96;
    else goto v_97;
v_96:
    v_126 = lisp_true;
    goto v_95;
v_97:
    v_127 = stack[0];
    v_126 = qvalue(basic_elt(env, 1)); // kord!*
    v_126 = Lmemq(nil, v_127, v_126);
    goto v_95;
    v_126 = nil;
v_95:
    if (v_126 == nil) goto v_93;
    v_126 = stack[-1];
    {   LispObject fn = basic_elt(env, 4); // peel
    v_126 = (*qfn1(fn))(fn, v_126);
    }
    env = stack[-2];
    v_128 = v_126;
    v_127 = v_128;
    v_126 = stack[0];
    if (v_127 == v_126) goto v_110;
    else goto v_111;
v_110:
    v_126 = nil;
    goto v_109;
v_111:
    v_127 = v_128;
    v_126 = stack[0];
    stack[-1] = v_127;
    stack[0] = v_126;
    goto v_1;
    v_126 = nil;
v_109:
    goto v_6;
v_93:
    v_126 = stack[-1];
    {   LispObject fn = basic_elt(env, 4); // peel
    v_126 = (*qfn1(fn))(fn, v_126);
    }
    env = stack[-2];
    stack[-1] = v_126;
    v_126 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // peel
    v_126 = (*qfn1(fn))(fn, v_126);
    }
    env = stack[-2];
    stack[0] = v_126;
    goto v_7;
v_9:
    v_126 = nil;
v_6:
    return onevalue(v_126);
}



// Code for vecopp

static LispObject CC_vecopp(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_43, v_44, v_45;
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
    v_45 = v_2;
// end of prologue
    v_43 = v_45;
    if (symbolp(v_43)) goto v_10;
    v_43 = nil;
    goto v_8;
v_10:
    v_43 = v_45;
    if (!symbolp(v_43)) v_44 = nil;
    else { v_44 = qfastgets(v_43);
           if (v_44 != nil) { v_44 = elt(v_44, 18); // phystype
#ifdef RECORD_GET
             if (v_44 != SPID_NOPROP)
                record_get(elt(fastget_names, 18), 1);
             else record_get(elt(fastget_names, 18), 0),
                v_44 = nil; }
           else record_get(elt(fastget_names, 18), 0); }
#else
             if (v_44 == SPID_NOPROP) v_44 = nil; }}
#endif
    v_43 = basic_elt(env, 1); // vector
    v_43 = (v_44 == v_43 ? lisp_true : nil);
    goto v_8;
    v_43 = nil;
v_8:
    if (v_43 == nil) goto v_6;
    else goto v_5;
v_6:
    v_43 = v_45;
    if (!consp(v_43)) goto v_22;
    v_43 = v_45;
    if (!car_legal(v_43)) v_43 = carerror(v_43); else
    v_43 = car(v_43);
    if (!symbolp(v_43)) v_44 = nil;
    else { v_44 = qfastgets(v_43);
           if (v_44 != nil) { v_44 = elt(v_44, 18); // phystype
#ifdef RECORD_GET
             if (v_44 != SPID_NOPROP)
                record_get(elt(fastget_names, 18), 1);
             else record_get(elt(fastget_names, 18), 0),
                v_44 = nil; }
           else record_get(elt(fastget_names, 18), 0); }
#else
             if (v_44 == SPID_NOPROP) v_44 = nil; }}
#endif
    v_43 = basic_elt(env, 1); // vector
    if (v_44 == v_43) goto v_26;
    else goto v_27;
v_26:
    v_43 = v_45;
    if (!car_legal(v_43)) v_43 = cdrerror(v_43); else
    v_43 = cdr(v_43);
    if (!car_legal(v_43)) v_43 = carerror(v_43); else
    v_43 = car(v_43);
    {   LispObject fn = basic_elt(env, 2); // isanindex
    v_43 = (*qfn1(fn))(fn, v_43);
    }
    v_43 = (v_43 == nil ? lisp_true : nil);
    goto v_25;
v_27:
    v_43 = nil;
    goto v_25;
    v_43 = nil;
v_25:
    goto v_20;
v_22:
    v_43 = nil;
    goto v_20;
    v_43 = nil;
v_20:
v_5:
    return onevalue(v_43);
}



// Code for sroad

static LispObject CC_sroad(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    v_38 = nil;
v_9:
    v_36 = stack[0];
    if (v_36 == nil) goto v_12;
    else goto v_13;
v_12:
    v_36 = v_38;
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn1(fn))(fn, v_36);
    }
v_13:
    v_37 = stack[-2];
    v_36 = stack[0];
    if (!car_legal(v_36)) v_36 = carerror(v_36); else
    v_36 = car(v_36);
    if (equal(v_37, v_36)) goto v_17;
    else goto v_18;
v_17:
    stack[-2] = v_38;
    v_37 = stack[-1];
    v_36 = stack[0];
    if (!car_legal(v_36)) v_36 = cdrerror(v_36); else
    v_36 = cdr(v_36);
    v_36 = Lappend_2(nil, v_37, v_36);
    env = stack[-3];
    {
        LispObject v_42 = stack[-2];
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn2(fn))(fn, v_42, v_36);
    }
v_18:
    v_36 = stack[0];
    if (!car_legal(v_36)) v_36 = carerror(v_36); else
    v_36 = car(v_36);
    v_37 = v_38;
    v_36 = cons(v_36, v_37);
    env = stack[-3];
    v_38 = v_36;
    v_36 = stack[0];
    if (!car_legal(v_36)) v_36 = cdrerror(v_36); else
    v_36 = cdr(v_36);
    stack[0] = v_36;
    goto v_9;
    v_36 = nil;
    return onevalue(v_36);
}



// Code for simpplus

static LispObject CC_simpplus(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_32, v_33;
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
    v_33 = Llength(nil, v_32);
    env = stack[-2];
    v_32 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    if (v_33 == v_32) goto v_10;
    else goto v_11;
v_10:
    v_32 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // ckpreci!#
    v_32 = (*qfn1(fn))(fn, v_32);
    }
    env = stack[-2];
    goto v_9;
v_11:
v_9:
    v_33 = nil;
    v_32 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_32 = cons(v_33, v_32);
    env = stack[-2];
    stack[-1] = v_32;
v_7:
    v_32 = stack[0];
    if (v_32 == nil) goto v_22;
    else goto v_23;
v_22:
    v_32 = stack[-1];
    goto v_6;
v_23:
    v_32 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // simpcar
    v_33 = (*qfn1(fn))(fn, v_32);
    }
    env = stack[-2];
    v_32 = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // addsq
    v_32 = (*qfn2(fn))(fn, v_33, v_32);
    }
    env = stack[-2];
    stack[-1] = v_32;
    v_32 = stack[0];
    if (!car_legal(v_32)) v_32 = cdrerror(v_32); else
    v_32 = cdr(v_32);
    stack[0] = v_32;
    goto v_7;
v_6:
    return onevalue(v_32);
}



// Code for mv!-pow!-mv!-term!-!+

static LispObject CC_mvKpowKmvKtermKL(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    stack[0] = v_3;
    v_12 = v_2;
// end of prologue
    v_13 = v_12;
    v_12 = stack[0];
    if (!car_legal(v_12)) v_12 = carerror(v_12); else
    v_12 = car(v_12);
    {   LispObject fn = basic_elt(env, 1); // mv!-pow!-!+
    v_13 = (*qfn2(fn))(fn, v_13, v_12);
    }
    v_12 = stack[0];
    if (!car_legal(v_12)) v_12 = cdrerror(v_12); else
    v_12 = cdr(v_12);
    return cons(v_13, v_12);
}



// Code for dp_ecart

static LispObject CC_dp_ecart(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_18 = stack[0];
    if (v_18 == nil) goto v_6;
    else goto v_7;
v_6:
    v_18 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_5;
v_7:
    v_18 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // dp!=ecart
    stack[-1] = (*qfn1(fn))(fn, v_18);
    }
    env = stack[-2];
    v_18 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // dp_lmon
    v_18 = (*qfn1(fn))(fn, v_18);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // mo_ecart
    v_18 = (*qfn1(fn))(fn, v_18);
    }
    {
        LispObject v_21 = stack[-1];
        return difference2(v_21, v_18);
    }
    v_18 = nil;
v_5:
    return onevalue(v_18);
}



// Code for adddummy1a

static LispObject CC_adddummy1a(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_49, v_50;
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
    stack[-1] = v_4;
    v_49 = v_3;
    stack[-2] = v_2;
// end of prologue
v_9:
    v_50 = v_49;
    if (v_50 == nil) goto v_12;
    else goto v_13;
v_12:
    v_49 = stack[-1];
    goto v_8;
v_13:
    v_50 = v_49;
    if (!car_legal(v_50)) v_50 = cdrerror(v_50); else
    v_50 = cdr(v_50);
    stack[-3] = v_50;
    v_50 = stack[-1];
    if (v_50 == nil) goto v_23;
    else goto v_24;
v_23:
    v_50 = stack[-2];
    if (!car_legal(v_50)) v_50 = carerror(v_50); else
    v_50 = car(v_50);
    stack[0] = v_50;
    goto v_22;
v_24:
    v_50 = stack[-1];
    if (!car_legal(v_50)) v_50 = carerror(v_50); else
    v_50 = car(v_50);
    stack[0] = v_50;
    goto v_22;
    stack[0] = nil;
v_22:
    if (!car_legal(v_49)) v_50 = carerror(v_49); else
    v_50 = car(v_49);
    v_49 = stack[-2];
    if (!car_legal(v_49)) v_49 = cdrerror(v_49); else
    v_49 = cdr(v_49);
    {   LispObject fn = basic_elt(env, 1); // pappl_pv
    v_50 = (*qfn2(fn))(fn, v_50, v_49);
    }
    env = stack[-4];
    v_49 = stack[-1];
    if (v_49 == nil) goto v_40;
    else goto v_41;
v_40:
    v_49 = stack[-1];
    goto v_39;
v_41:
    v_49 = stack[-1];
    if (!car_legal(v_49)) v_49 = cdrerror(v_49); else
    v_49 = cdr(v_49);
    goto v_39;
    v_49 = nil;
v_39:
    {   LispObject fn = basic_elt(env, 2); // insert_pv
    v_49 = (*qfn2(fn))(fn, v_50, v_49);
    }
    env = stack[-4];
    v_49 = cons(stack[0], v_49);
    env = stack[-4];
    stack[-1] = v_49;
    v_49 = stack[-3];
    goto v_9;
    v_49 = nil;
v_8:
    return onevalue(v_49);
}



setup_type const u07_setup[] =
{
    {"clear-column",            G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_clearKcolumn},
    {"lalr_add_goto",           G0W3,     G1W3,     G2W3,     CC_lalr_add_goto,G4W3},
    {"wulessp",                 G0W2,     G1W2,     CC_wulessp,G3W2,    G4W2},
    {"talp_smwupdknowl",        G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_talp_smwupdknowl},
    {"mri_0mk2",                G0W3,     G1W3,     G2W3,     CC_mri_0mk2,G4W3},
    {"rl_simpat",               G0W1,     CC_rl_simpat,G2W1,  G3W1,     G4W1},
    {"ibalp_varlt1",            G0W2,     G1W2,     CC_ibalp_varlt1,G3W2,G4W2},
    {"ev_invlexcomp",           G0W2,     G1W2,     CC_ev_invlexcomp,G3W2,G4W2},
    {"powers2",                 G0W3,     G1W3,     G2W3,     CC_powers2,G4W3},
    {"find",                    G0W2,     G1W2,     CC_find,  G3W2,     G4W2},
    {"simp*",                   G0W1,     CC_simpH, G2W1,     G3W1,     G4W1},
    {"downwght",                G0W2,     G1W2,     CC_downwght,G3W2,   G4W2},
    {"freexp",                  G0W1,     CC_freexp,G2W1,     G3W1,     G4W1},
    {"termordp",                G0W2,     G1W2,     CC_termordp,G3W2,   G4W2},
    {"gizerop:",                G0W1,     CC_gizeropT,G2W1,   G3W1,     G4W1},
    {"repeatsp",                G0W1,     CC_repeatsp,G2W1,   G3W1,     G4W1},
    {"bc=simp",                 G0W1,     CC_bcMsimp,G2W1,    G3W1,     G4W1},
    {"gperm2",                  G0W3,     G1W3,     G2W3,     CC_gperm2,G4W3},
    {"exptmod:",                G0W2,     G1W2,     CC_exptmodT,G3W2,   G4W2},
    {"convprec*",               G0W1,     CC_convprecH,G2W1,  G3W1,     G4W1},
    {"rat_numrn",               G0W1,     CC_rat_numrn,G2W1,  G3W1,     G4W1},
    {"freeof",                  G0W2,     G1W2,     CC_freeof,G3W2,     G4W2},
    {"gcdf1",                   G0W2,     G1W2,     CC_gcdf1, G3W2,     G4W2},
    {"talp_smupdknowl",         G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_talp_smupdknowl},
    {"qqe_id-nyt-branchb",      G0W1,     CC_qqe_idKnytKbranchb,G2W1,G3W1,G4W1},
    {"pasf_deci",               G0W1,     CC_pasf_deci,G2W1,  G3W1,     G4W1},
    {"ibalp_litlp",             G0W1,     CC_ibalp_litlp,G2W1,G3W1,     G4W1},
    {"mintype",                 G0W1,     CC_mintype,G2W1,    G3W1,     G4W1},
    {"prepd",                   G0W1,     CC_prepd, G2W1,     G3W1,     G4W1},
    {"quotematrix",             G0W1,     CC_quotematrix,G2W1,G3W1,     G4W1},
    {"deg*farg",                G0W1,     CC_degHfarg,G2W1,   G3W1,     G4W1},
    {"make-set",                G0W1,     CC_makeKset,G2W1,   G3W1,     G4W1},
    {"optype",                  G0W1,     CC_optype,G2W1,     G3W1,     G4W1},
    {"setcloc*",                CC_setclocH,G1W0,   G2W0,     G3W0,     G4W0},
    {"red_divtestbe",           G0W3,     G1W3,     G2W3,     CC_red_divtestbe,G4W3},
    {"pappl_pv",                G0W2,     G1W2,     CC_pappl_pv,G3W2,   G4W2},
    {"*i2ar",                   G0W1,     CC_Hi2ar, G2W1,     G3W1,     G4W1},
    {"general-modular-minus",   G0W1,     CC_generalKmodularKminus,G2W1,G3W1,G4W1},
    {"lalr_analyze_lookaheads", CC_lalr_analyze_lookaheads,G1W0,G2W0,G3W0,G4W0},
    {"powers1",                 G0W1,     CC_powers1,G2W1,    G3W1,     G4W1},
    {"cl_atfp",                 G0W1,     CC_cl_atfp,G2W1,    G3W1,     G4W1},
    {"quotk",                   G0W2,     G1W2,     CC_quotk, G3W2,     G4W2},
    {"multi_elem",              G0W1,     CC_multi_elem,G2W1, G3W1,     G4W1},
    {"letmtr3",                 G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_letmtr3},
    {"nextarg",                 G0W1,     CC_nextarg,G2W1,    G3W1,     G4W1},
    {"diplength",               G0W1,     CC_diplength,G2W1,  G3W1,     G4W1},
    {"divide:",                 G0W3,     G1W3,     G2W3,     CC_divideT,G4W3},
    {"list2widestring",         G0W1,     CC_list2widestring,G2W1,G3W1, G4W1},
    {"groeb=testa",             G0W2,     G1W2,     CC_groebMtesta,G3W2,G4W2},
    {"dv_skelhead",             G0W1,     CC_dv_skelhead,G2W1,G3W1,     G4W1},
    {"rnplus:",                 G0W2,     G1W2,     CC_rnplusT,G3W2,    G4W2},
    {"lalr_remove_duplicates",  G0W1,     CC_lalr_remove_duplicates,G2W1,G3W1,G4W1},
    {"sfto_gcdf",               G0W2,     G1W2,     CC_sfto_gcdf,G3W2,  G4W2},
    {"totallessp",              G0W2,     G1W2,     CC_totallessp,G3W2, G4W2},
    {"talp_tcfrp",              G0W1,     CC_talp_tcfrp,G2W1, G3W1,     G4W1},
    {"pasf_susitf",             G0W2,     G1W2,     CC_pasf_susitf,G3W2,G4W2},
    {"times-term-mod-p",        G0W2,     G1W2,     CC_timesKtermKmodKp,G3W2,G4W2},
    {"omobjs",                  CC_omobjs,G1W0,     G2W0,     G3W0,     G4W0},
    {"bound",                   G0W1,     CC_bound, G2W1,     G3W1,     G4W1},
    {"freeindexchk",            G0W1,     CC_freeindexchk,G2W1,G3W1,    G4W1},
    {"worderp",                 G0W2,     G1W2,     CC_worderp,G3W2,    G4W2},
    {"vecopp",                  G0W1,     CC_vecopp,G2W1,     G3W1,     G4W1},
    {"sroad",                   G0W3,     G1W3,     G2W3,     CC_sroad, G4W3},
    {"simpplus",                G0W1,     CC_simpplus,G2W1,   G3W1,     G4W1},
    {"mv-pow-mv-term-+",        G0W2,     G1W2,     CC_mvKpowKmvKtermKL,G3W2,G4W2},
    {"dp_ecart",                G0W1,     CC_dp_ecart,G2W1,   G3W1,     G4W1},
    {"adddummy1a",              G0W3,     G1W3,     G2W3,     CC_adddummy1a,G4W3},
    {nullptr, 
        reinterpret_cast<no_args *>(
            reinterpret_cast<uintptr_t>("u07")),
        reinterpret_cast<one_arg *>(
            reinterpret_cast<uintptr_t>("19092 3978830 9998442")),
        nullptr, nullptr, nullptr}
};

// end of generated code
