
// $destdir/u58.c        Machine generated C code

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


// Code for sc_repkern

static LispObject CC_sc_repkern(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_196, v_197, v_198;
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
    stack[-5] = v_3;
    v_197 = v_2;
// end of prologue
    v_196 = v_197;
    if (!car_legal(v_196)) v_198 = carerror(v_196); else
    v_198 = car(v_196);
    v_196 = basic_elt(env, 1); // !*
    if (v_198 == v_196) goto v_7;
    else goto v_8;
v_7:
    stack[-6] = nil;
    v_196 = v_197;
    if (!car_legal(v_196)) v_196 = cdrerror(v_196); else
    v_196 = cdr(v_196);
    stack[0] = v_196;
    v_196 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-2] = v_196;
v_26:
    v_196 = stack[0];
    if (v_196 == nil) goto v_29;
    else goto v_30;
v_29:
    goto v_25;
v_30:
    v_196 = stack[0];
    if (!car_legal(v_196)) v_196 = carerror(v_196); else
    v_196 = car(v_196);
    stack[-3] = v_196;
    v_196 = stack[-3];
    v_197 = ncons(v_196);
    env = stack[-7];
    v_196 = stack[-6];
    v_196 = cons(v_197, v_196);
    env = stack[-7];
    stack[-6] = v_196;
    v_196 = stack[0];
    if (!car_legal(v_196)) v_196 = cdrerror(v_196); else
    v_196 = cdr(v_196);
    stack[0] = v_196;
    v_196 = nil;
    stack[-4] = v_196;
    v_197 = stack[-2];
    v_196 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_196 = times2(v_197, v_196);
    env = stack[-7];
    v_196 = add1(v_196);
    env = stack[-7];
    stack[-2] = v_196;
    v_196 = stack[0];
    stack[-1] = v_196;
v_49:
    v_196 = stack[-1];
    if (v_196 == nil) goto v_53;
    else goto v_54;
v_53:
    goto v_48;
v_54:
    v_196 = stack[-1];
    if (!car_legal(v_196)) v_196 = carerror(v_196); else
    v_196 = car(v_196);
    stack[0] = v_196;
    v_197 = stack[0];
    v_196 = stack[-3];
    if (v_197 == v_196) goto v_62;
    else goto v_63;
v_62:
    v_197 = stack[-2];
    v_196 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_196 = times2(v_197, v_196);
    env = stack[-7];
    v_196 = add1(v_196);
    env = stack[-7];
    stack[-2] = v_196;
    goto v_61;
v_63:
    v_197 = stack[-2];
    v_196 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_196 = times2(v_197, v_196);
    env = stack[-7];
    stack[-2] = v_196;
    v_197 = stack[0];
    v_196 = stack[-4];
    v_196 = cons(v_197, v_196);
    env = stack[-7];
    stack[-4] = v_196;
    goto v_61;
v_61:
    v_196 = stack[-1];
    if (!car_legal(v_196)) v_196 = cdrerror(v_196); else
    v_196 = cdr(v_196);
    stack[-1] = v_196;
    goto v_49;
v_48:
    v_196 = stack[-4];
    v_196 = Lreverse(nil, v_196);
    env = stack[-7];
    stack[0] = v_196;
    goto v_26;
v_25:
    stack[0] = stack[-2];
    v_196 = stack[-6];
    v_197 = Lreverse(nil, v_196);
    env = stack[-7];
    v_196 = stack[-5];
    {   LispObject fn = basic_elt(env, 3); // pa_list2vect
    v_196 = (*qfn2(fn))(fn, v_197, v_196);
    }
    {
        LispObject v_206 = stack[0];
        return list2(v_206, v_196);
    }
    goto v_6;
v_8:
    stack[-1] = nil;
    stack[-6] = nil;
    stack[-4] = nil;
    v_196 = v_197;
    if (!car_legal(v_196)) v_196 = cdrerror(v_196); else
    v_196 = cdr(v_196);
    v_197 = v_196;
    v_196 = v_197;
    stack[-2] = v_196;
v_104:
    v_196 = stack[-2];
    if (v_196 == nil) goto v_108;
    else goto v_109;
v_108:
    goto v_103;
v_109:
    v_196 = stack[-2];
    if (!car_legal(v_196)) v_196 = carerror(v_196); else
    v_196 = car(v_196);
    v_197 = v_196;
    v_198 = v_197;
    v_196 = stack[-1];
    v_196 = Lassoc(nil, v_198, v_196);
    v_198 = v_196;
    if (v_196 == nil) goto v_118;
    stack[0] = v_198;
    v_196 = v_198;
    if (!car_legal(v_196)) v_196 = cdrerror(v_196); else
    v_196 = cdr(v_196);
    v_196 = add1(v_196);
    env = stack[-7];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_196);
    goto v_116;
v_118:
    v_198 = v_197;
    v_197 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_196 = stack[-1];
    v_196 = acons(v_198, v_197, v_196);
    env = stack[-7];
    stack[-1] = v_196;
    goto v_116;
v_116:
    v_196 = stack[-2];
    if (!car_legal(v_196)) v_196 = cdrerror(v_196); else
    v_196 = cdr(v_196);
    stack[-2] = v_196;
    goto v_104;
v_103:
    v_197 = stack[-1];
    v_196 = basic_elt(env, 2); // lambda_1x539vlzlwg93
    {   LispObject fn = basic_elt(env, 4); // sort
    v_196 = (*qfn2(fn))(fn, v_197, v_196);
    }
    env = stack[-7];
    stack[-1] = v_196;
    v_196 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-3] = v_196;
    v_196 = stack[-1];
    stack[-2] = v_196;
v_142:
    v_196 = stack[-2];
    if (v_196 == nil) goto v_146;
    else goto v_147;
v_146:
    goto v_141;
v_147:
    v_196 = stack[-2];
    if (!car_legal(v_196)) v_196 = carerror(v_196); else
    v_196 = car(v_196);
    stack[-1] = v_196;
    v_196 = stack[-1];
    if (!car_legal(v_196)) v_197 = cdrerror(v_196); else
    v_197 = cdr(v_196);
    v_196 = stack[-3];
    if (equal(v_197, v_196)) goto v_156;
    v_196 = stack[-1];
    if (!car_legal(v_196)) v_198 = cdrerror(v_196); else
    v_198 = cdr(v_196);
    v_197 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_196 = stack[-6];
    v_196 = acons(v_198, v_197, v_196);
    env = stack[-7];
    stack[-6] = v_196;
    v_196 = stack[-1];
    if (!car_legal(v_196)) v_196 = carerror(v_196); else
    v_196 = car(v_196);
    v_197 = ncons(v_196);
    env = stack[-7];
    v_196 = stack[-4];
    v_196 = cons(v_197, v_196);
    env = stack[-7];
    stack[-4] = v_196;
    v_196 = stack[-1];
    if (!car_legal(v_196)) v_196 = cdrerror(v_196); else
    v_196 = cdr(v_196);
    stack[-3] = v_196;
    goto v_154;
v_156:
    v_196 = stack[-6];
    if (!car_legal(v_196)) stack[0] = carerror(v_196); else
    stack[0] = car(v_196);
    v_196 = stack[-6];
    if (!car_legal(v_196)) v_196 = carerror(v_196); else
    v_196 = car(v_196);
    if (!car_legal(v_196)) v_196 = cdrerror(v_196); else
    v_196 = cdr(v_196);
    v_196 = add1(v_196);
    env = stack[-7];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_196);
    stack[0] = stack[-4];
    v_196 = stack[-1];
    if (!car_legal(v_196)) v_197 = carerror(v_196); else
    v_197 = car(v_196);
    v_196 = stack[-4];
    if (!car_legal(v_196)) v_196 = carerror(v_196); else
    v_196 = car(v_196);
    v_196 = cons(v_197, v_196);
    env = stack[-7];
    if (!car_legal(stack[0])) rplaca_fails(stack[0]);
    setcar(stack[0], v_196);
    goto v_154;
v_154:
    v_196 = stack[-2];
    if (!car_legal(v_196)) v_196 = cdrerror(v_196); else
    v_196 = cdr(v_196);
    stack[-2] = v_196;
    goto v_142;
v_141:
    stack[0] = stack[-6];
    v_197 = stack[-4];
    v_196 = stack[-5];
    {   LispObject fn = basic_elt(env, 3); // pa_list2vect
    v_196 = (*qfn2(fn))(fn, v_197, v_196);
    }
    {
        LispObject v_207 = stack[0];
        return list2(v_207, v_196);
    }
    goto v_6;
    v_196 = nil;
v_6:
    return onevalue(v_196);
}



// Code for lambda_1x539vlzlwg93

static LispObject CC_lambda_1x539vlzlwg93(LispObject env,
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
    if (!car_legal(v_10)) v_10 = cdrerror(v_10); else
    v_10 = cdr(v_10);
        return Lleq_2(nil, v_11, v_10);
}



// Code for super_product_sq

static LispObject CC_super_product_sq(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    stack[-1] = v_3;
    v_65 = v_2;
// end of prologue
    v_66 = v_65;
    v_65 = basic_elt(env, 1); // (ext)
    {   LispObject fn = basic_elt(env, 2); // split_ext
    v_65 = (*qfn2(fn))(fn, v_66, v_65);
    }
    env = stack[-7];
    stack[0] = v_65;
    v_66 = stack[-1];
    v_65 = basic_elt(env, 1); // (ext)
    {   LispObject fn = basic_elt(env, 2); // split_ext
    v_65 = (*qfn2(fn))(fn, v_66, v_65);
    }
    env = stack[-7];
    stack[-6] = v_65;
    v_66 = nil;
    v_65 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_65 = cons(v_66, v_65);
    env = stack[-7];
    v_66 = v_65;
    v_65 = stack[0];
    stack[-5] = v_65;
v_22:
    v_65 = stack[-5];
    if (v_65 == nil) goto v_26;
    else goto v_27;
v_26:
    goto v_21;
v_27:
    v_65 = stack[-5];
    if (!car_legal(v_65)) v_65 = carerror(v_65); else
    v_65 = car(v_65);
    stack[-4] = v_65;
    v_65 = stack[-6];
    stack[-3] = v_65;
v_36:
    v_65 = stack[-3];
    if (v_65 == nil) goto v_40;
    else goto v_41;
v_40:
    goto v_35;
v_41:
    v_65 = stack[-3];
    if (!car_legal(v_65)) v_65 = carerror(v_65); else
    v_65 = car(v_65);
    stack[-2] = v_65;
    stack[-1] = v_66;
    v_65 = stack[-4];
    if (!car_legal(v_65)) v_66 = cdrerror(v_65); else
    v_66 = cdr(v_65);
    v_65 = stack[-2];
    if (!car_legal(v_65)) v_65 = cdrerror(v_65); else
    v_65 = cdr(v_65);
    {   LispObject fn = basic_elt(env, 3); // multsq
    stack[0] = (*qfn2(fn))(fn, v_66, v_65);
    }
    env = stack[-7];
    v_65 = stack[-4];
    if (!car_legal(v_65)) v_66 = carerror(v_65); else
    v_66 = car(v_65);
    v_65 = stack[-2];
    if (!car_legal(v_65)) v_65 = carerror(v_65); else
    v_65 = car(v_65);
    {   LispObject fn = basic_elt(env, 4); // ext_mult
    v_65 = (*qfn2(fn))(fn, v_66, v_65);
    }
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 3); // multsq
    v_65 = (*qfn2(fn))(fn, stack[0], v_65);
    }
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 5); // addsq
    v_65 = (*qfn2(fn))(fn, stack[-1], v_65);
    }
    env = stack[-7];
    v_66 = v_65;
    v_65 = stack[-3];
    if (!car_legal(v_65)) v_65 = cdrerror(v_65); else
    v_65 = cdr(v_65);
    stack[-3] = v_65;
    goto v_36;
v_35:
    v_65 = stack[-5];
    if (!car_legal(v_65)) v_65 = cdrerror(v_65); else
    v_65 = cdr(v_65);
    stack[-5] = v_65;
    goto v_22;
v_21:
    v_65 = v_66;
    return onevalue(v_65);
}



// Code for setqdeletedescendants

static LispObject CC_setqdeletedescendants(LispObject env,
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
    v_43 = qvalue(basic_elt(env, 1)); // fluidbibasissetq
    stack[-1] = v_43;
v_10:
    v_43 = stack[-1];
    if (!car_legal(v_43)) v_43 = carerror(v_43); else
    v_43 = car(v_43);
    if (v_43 == nil) goto v_13;
    else goto v_14;
v_13:
    goto v_9;
v_14:
    v_43 = stack[-1];
    if (!car_legal(v_43)) v_44 = carerror(v_43); else
    v_44 = car(v_43);
    v_43 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_44 = Lgetv(nil, v_44, v_43);
    env = stack[-2];
    v_43 = stack[0];
    if (equal(v_44, v_43)) goto v_20;
    else goto v_21;
v_20:
    v_44 = stack[-1];
    v_43 = stack[-1];
    if (!car_legal(v_43)) v_43 = cdrerror(v_43); else
    v_43 = cdr(v_43);
    if (!car_legal(v_43)) v_43 = carerror(v_43); else
    v_43 = car(v_43);
    if (!car_legal(v_44)) rplaca_fails(v_44);
    setcar(v_44, v_43);
    v_43 = stack[-1];
    if (!car_legal(v_43)) v_43 = cdrerror(v_43); else
    v_43 = cdr(v_43);
    if (!car_legal(v_43)) v_43 = cdrerror(v_43); else
    v_43 = cdr(v_43);
    if (!car_legal(v_44)) rplacd_fails(v_44);
    setcdr(v_44, v_43);
    goto v_19;
v_21:
    v_43 = stack[-1];
    if (!car_legal(v_43)) v_43 = cdrerror(v_43); else
    v_43 = cdr(v_43);
    stack[-1] = v_43;
    goto v_19;
v_19:
    goto v_10;
v_9:
    v_43 = nil;
    return onevalue(v_43);
}



// Code for ofsf_ordrelp

static LispObject CC_ofsf_ordrelp(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_11, v_12, v_13;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_12 = v_3;
    v_11 = v_2;
// end of prologue
    v_13 = basic_elt(env, 1); // (equal neq leq lessp geq greaterp)
    v_11 = Lmemq(nil, v_11, v_13);
    if (!car_legal(v_11)) v_11 = cdrerror(v_11); else
    v_11 = cdr(v_11);
    v_11 = Lmemq(nil, v_12, v_11);
    return onevalue(v_11);
}



// Code for yetunknowntypeeval

static LispObject CC_yetunknowntypeeval(LispObject env,
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
    stack[0] = v_3;
    v_10 = v_2;
// end of prologue
    v_11 = v_10;
    v_10 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // eval!-yetunknowntypeexpr
    v_11 = (*qfn2(fn))(fn, v_11, v_10);
    }
    env = stack[-1];
    v_10 = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // reval1
        return (*qfn2(fn))(fn, v_11, v_10);
    }
}



// Code for let0

static LispObject CC_let0(LispObject env,
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
// Binding frasc!*
// FLUIDBIND: reloadenv=1 litvec-offset=1 saveloc=0
{   bind_fluid_stack bind_fluid_var(-1, 1, 0);
    setvalue(basic_elt(env, 1), v_10); // frasc!*
    v_10 = v_11;
    {   LispObject fn = basic_elt(env, 2); // let00
    v_10 = (*qfn1(fn))(fn, v_10);
    }
    ;}  // end of a binding scope
    return onevalue(v_10);
}



// Code for get_rep_matrix_entry

static LispObject CC_get_rep_matrix_entry(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_15, v_16, v_17;
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_5;
    stack[-1] = v_4;
    v_16 = v_3;
    v_15 = v_2;
// end of prologue
    {   LispObject fn = basic_elt(env, 1); // get_rep_matrix_in
    v_17 = (*qfn2(fn))(fn, v_16, v_15);
    }
    env = stack[-2];
    v_16 = stack[-1];
    v_15 = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // get!+mat!+entry
        return (*qfn3(fn))(fn, v_17, v_16, v_15);
    }
    return onevalue(v_15);
}



// Code for mri_dettype

static LispObject CC_mri_dettype(LispObject env,
                         LispObject v_2)
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
    v_64 = v_2;
// end of prologue
    stack[-1] = nil;
    stack[0] = nil;
    {   LispObject fn = basic_elt(env, 3); // mri_arg2l
    v_64 = (*qfn1(fn))(fn, v_64);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 4); // kernels
    v_64 = (*qfn1(fn))(fn, v_64);
    }
    env = stack[-4];
    stack[-3] = v_64;
    v_64 = stack[-3];
    if (v_64 == nil) goto v_16;
    else goto v_17;
v_16:
    v_64 = basic_elt(env, 1); // int
    goto v_10;
v_17:
    v_64 = lisp_true;
    stack[-2] = v_64;
v_23:
    v_64 = stack[-2];
    if (v_64 == nil) goto v_26;
    v_64 = stack[-3];
    if (v_64 == nil) goto v_26;
    goto v_27;
v_26:
    goto v_22;
v_27:
    v_64 = stack[-3];
    if (!car_legal(v_64)) v_64 = carerror(v_64); else
    v_64 = car(v_64);
    v_65 = v_64;
    v_64 = stack[-3];
    if (!car_legal(v_64)) v_64 = cdrerror(v_64); else
    v_64 = cdr(v_64);
    stack[-3] = v_64;
    v_64 = v_65;
    {   LispObject fn = basic_elt(env, 5); // mri_realvarp
    v_64 = (*qfn1(fn))(fn, v_64);
    }
    env = stack[-4];
    if (v_64 == nil) goto v_40;
    v_64 = stack[0];
    if (v_64 == nil) goto v_46;
    v_64 = nil;
    stack[-1] = v_64;
    stack[0] = v_64;
    stack[-2] = v_64;
    goto v_44;
v_46:
    v_64 = basic_elt(env, 2); // real
    stack[-1] = v_64;
    goto v_44;
v_44:
    goto v_38;
v_40:
    v_64 = stack[-1];
    if (v_64 == nil) goto v_53;
    v_64 = nil;
    stack[-1] = v_64;
    stack[0] = v_64;
    stack[-2] = v_64;
    goto v_38;
v_53:
    v_64 = basic_elt(env, 1); // int
    stack[0] = v_64;
    goto v_38;
v_38:
    goto v_23;
v_22:
    v_64 = stack[0];
    if (v_64 == nil) goto v_61;
    else goto v_60;
v_61:
    v_64 = stack[-1];
v_60:
v_10:
    return onevalue(v_64);
}



// Code for qqe_length!-graph!-remove!-mark

static LispObject CC_qqe_lengthKgraphKremoveKmark(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_25, v_26, v_27, v_28;
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
    v_27 = v_3;
    v_25 = v_2;
// end of prologue
    v_28 = v_25;
v_8:
    v_25 = v_28;
    if (v_25 == nil) goto v_12;
    else goto v_13;
v_12:
    v_25 = nil;
    goto v_7;
v_13:
    v_25 = v_28;
    if (!car_legal(v_25)) v_25 = carerror(v_25); else
    v_25 = car(v_25);
    v_26 = v_25;
    v_25 = v_27;
    v_25 = Lremprop(nil, v_26, v_25);
    env = stack[0];
    v_25 = v_28;
    if (!car_legal(v_25)) v_25 = cdrerror(v_25); else
    v_25 = cdr(v_25);
    v_28 = v_25;
    goto v_8;
v_7:
    return onevalue(v_25);
}



// Code for aex_fromsf

static LispObject CC_aex_fromsf(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    v_10 = v_2;
// end of prologue
    stack[-1] = basic_elt(env, 1); // aex
    v_11 = v_10;
    v_10 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[0] = cons(v_11, v_10);
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 2); // ctx_new
    v_10 = (*qfn0(fn))(fn);
    }
    {
        LispObject v_14 = stack[-1];
        LispObject v_15 = stack[0];
        return list3(v_14, v_15, v_10);
    }
}



// Code for ps!:expansion!-point

static LispObject CC_psTexpansionKpoint(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_35, v_36, v_37;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_37 = v_2;
// end of prologue
    v_35 = v_37;
    if (!consp(v_35)) goto v_10;
    else goto v_11;
v_10:
    v_35 = lisp_true;
    goto v_9;
v_11:
    v_35 = v_37;
    if (!car_legal(v_35)) v_36 = carerror(v_35); else
    v_36 = car(v_35);
    v_35 = basic_elt(env, 1); // !:ps!:
    if (v_36 == v_35) goto v_19;
    v_35 = v_37;
    if (!car_legal(v_35)) v_35 = carerror(v_35); else
    v_35 = car(v_35);
    if (!symbolp(v_35)) v_35 = nil;
    else { v_35 = qfastgets(v_35);
           if (v_35 != nil) { v_35 = elt(v_35, 8); // dname
#ifdef RECORD_GET
             if (v_35 != SPID_NOPROP)
                record_get(elt(fastget_names, 8), 1);
             else record_get(elt(fastget_names, 8), 0),
                v_35 = nil; }
           else record_get(elt(fastget_names, 8), 0); }
#else
             if (v_35 == SPID_NOPROP) v_35 = nil; }}
#endif
    goto v_17;
v_19:
    v_35 = nil;
    goto v_17;
    v_35 = nil;
v_17:
    goto v_9;
    v_35 = nil;
v_9:
    if (v_35 == nil) goto v_7;
    v_35 = nil;
    goto v_5;
v_7:
    v_36 = v_37;
    v_35 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    {
        LispObject fn = basic_elt(env, 2); // ps!:getv
        return (*qfn2(fn))(fn, v_36, v_35);
    }
    v_35 = nil;
v_5:
    return onevalue(v_35);
}



// Code for nestprep!:

static LispObject CC_nestprepT(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    v_34 = v_2;
// end of prologue
    stack[-1] = basic_elt(env, 1); // co
    v_33 = v_34;
    v_33 = integerp(v_33);
    if (v_33 == nil) goto v_9;
    v_33 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[0] = v_33;
    goto v_7;
v_9:
    v_33 = v_34;
    if (!car_legal(v_33)) v_33 = cdrerror(v_33); else
    v_33 = cdr(v_33);
    if (!car_legal(v_33)) v_33 = carerror(v_33); else
    v_33 = car(v_33);
    stack[0] = v_33;
    goto v_7;
    stack[0] = nil;
v_7:
    v_33 = v_34;
    v_33 = integerp(v_33);
    if (v_33 == nil) goto v_22;
    v_33 = v_34;
    {   LispObject fn = basic_elt(env, 2); // simp
    v_33 = (*qfn1(fn))(fn, v_33);
    }
    env = stack[-2];
    goto v_20;
v_22:
    v_33 = v_34;
    if (!car_legal(v_33)) v_33 = cdrerror(v_33); else
    v_33 = cdr(v_33);
    if (!car_legal(v_33)) v_33 = cdrerror(v_33); else
    v_33 = cdr(v_33);
    if (!car_legal(v_33)) v_33 = cdrerror(v_33); else
    v_33 = cdr(v_33);
    goto v_20;
    v_33 = nil;
v_20:
    {   LispObject fn = basic_elt(env, 3); // prepsq
    v_33 = (*qfn1(fn))(fn, v_33);
    }
    {
        LispObject v_37 = stack[-1];
        LispObject v_38 = stack[0];
        return list3(v_37, v_38, v_33);
    }
}



// Code for bfdivide

static LispObject CC_bfdivide(LispObject env,
                         LispObject v_2, LispObject v_3)
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
        push(v_2,v_3);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_3,v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_21 = v_3;
    v_22 = v_2;
// end of prologue
    v_20 = v_22;
    if (!consp(v_20)) goto v_7;
    else goto v_8;
v_7:
    v_20 = v_22;
    return quot2(v_20, v_21);
v_8:
    v_20 = qvalue(basic_elt(env, 1)); // !:bprec!:
    {   LispObject fn = basic_elt(env, 2); // divide!:
    v_20 = (*qfn3(fn))(fn, v_22, v_21, v_20);
    }
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 3); // normbf
        return (*qfn1(fn))(fn, v_20);
    }
    v_20 = nil;
    return onevalue(v_20);
}



// Code for calc_map_

static LispObject CC_calc_map_(LispObject env,
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
    real_push(nil, nil, nil, nil, nil);
    real_push(nil);
    stack_popper stack_popper_var(7);
// copy arguments values to proper place
    stack[-4] = v_3;
    v_84 = v_2;
// end of prologue
    v_83 = v_84;
    if (!car_legal(v_83)) v_83 = carerror(v_83); else
    v_83 = car(v_83);
    stack[-2] = v_83;
    v_83 = v_84;
    if (!car_legal(v_83)) v_83 = cdrerror(v_83); else
    v_83 = cdr(v_83);
    if (!car_legal(v_83)) v_83 = carerror(v_83); else
    v_83 = car(v_83);
    stack[-5] = v_83;
    v_83 = v_84;
    if (!car_legal(v_83)) v_83 = cdrerror(v_83); else
    v_83 = cdr(v_83);
    if (!car_legal(v_83)) v_83 = cdrerror(v_83); else
    v_83 = cdr(v_83);
    if (!car_legal(v_83)) v_83 = carerror(v_83); else
    v_83 = car(v_83);
    stack[-3] = v_83;
    v_83 = v_84;
    if (!car_legal(v_83)) v_83 = cdrerror(v_83); else
    v_83 = cdr(v_83);
    if (!car_legal(v_83)) v_83 = cdrerror(v_83); else
    v_83 = cdr(v_83);
    if (!car_legal(v_83)) v_83 = cdrerror(v_83); else
    v_83 = cdr(v_83);
    stack[-1] = v_83;
    v_84 = stack[-4];
    v_83 = stack[-2];
    {   LispObject fn = basic_elt(env, 2); // actual_alst
    v_83 = (*qfn2(fn))(fn, v_84, v_83);
    }
    env = stack[-6];
    stack[0] = v_83;
    v_83 = stack[0];
    if (v_83 == nil) goto v_36;
    else goto v_37;
v_36:
    v_83 = stack[-2];
    goto v_35;
v_37:
    v_83 = nil;
    goto v_35;
    v_83 = nil;
v_35:
    if (v_83 == nil) goto v_33;
    v_83 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_13;
v_33:
    v_84 = stack[0];
    v_83 = stack[-3];
    if (!car_legal(v_83)) v_83 = cdrerror(v_83); else
    v_83 = cdr(v_83);
    v_83 = Lassoc(nil, v_84, v_83);
    stack[-2] = v_83;
    v_83 = stack[-2];
    if (v_83 == nil) goto v_51;
    v_83 = stack[-2];
    if (!car_legal(v_83)) v_83 = cdrerror(v_83); else
    v_83 = cdr(v_83);
    stack[-2] = v_83;
    goto v_49;
v_51:
    v_84 = stack[-5];
    v_83 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // calc_map_tar
    v_83 = (*qfn2(fn))(fn, v_84, v_83);
    }
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 4); // reval
    v_83 = (*qfn1(fn))(fn, v_83);
    }
    env = stack[-6];
    stack[-2] = v_83;
    v_84 = stack[0];
    v_83 = stack[-2];
    v_83 = cons(v_84, v_83);
    env = stack[-6];
    v_83 = ncons(v_83);
    env = stack[-6];
    v_83 = Lnconc(nil, stack[-3], v_83);
    env = stack[-6];
    goto v_49;
v_49:
    v_84 = stack[-1];
    v_83 = stack[-4];
    {   LispObject fn = basic_elt(env, 5); // calc_den_tar
    v_83 = (*qfn2(fn))(fn, v_84, v_83);
    }
    env = stack[-6];
    v_85 = v_83;
    v_84 = v_85;
    v_83 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_84 == v_83) goto v_72;
    else goto v_73;
v_72:
    v_83 = stack[-2];
    goto v_71;
v_73:
    v_84 = basic_elt(env, 1); // quotient
    v_83 = stack[-2];
    return list3(v_84, v_83, v_85);
    v_83 = nil;
v_71:
v_13:
    return onevalue(v_83);
}



// Code for rappend

static LispObject CC_rappend(LispObject env,
                         LispObject v_2)
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
    stack[0] = v_2;
// end of prologue
    v_49 = stack[0];
    v_50 = Llength(nil, v_49);
    env = stack[-3];
    v_49 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    if (v_50 == v_49) goto v_11;
    v_49 = basic_elt(env, 1); // "append has TWO arguments"
    {   LispObject fn = basic_elt(env, 3); // rederr
    v_49 = (*qfn1(fn))(fn, v_49);
    }
    env = stack[-3];
    goto v_9;
v_11:
v_9:
    v_49 = stack[0];
    if (!car_legal(v_49)) v_49 = carerror(v_49); else
    v_49 = car(v_49);
    {   LispObject fn = basic_elt(env, 4); // reval
    v_49 = (*qfn1(fn))(fn, v_49);
    }
    env = stack[-3];
    stack[-2] = v_49;
    v_49 = stack[0];
    if (!car_legal(v_49)) v_49 = cdrerror(v_49); else
    v_49 = cdr(v_49);
    if (!car_legal(v_49)) v_49 = carerror(v_49); else
    v_49 = car(v_49);
    {   LispObject fn = basic_elt(env, 4); // reval
    v_49 = (*qfn1(fn))(fn, v_49);
    }
    env = stack[-3];
    stack[-1] = v_49;
    v_49 = stack[-2];
    {   LispObject fn = basic_elt(env, 5); // baglistp
    v_49 = (*qfn1(fn))(fn, v_49);
    }
    env = stack[-3];
    if (v_49 == nil) goto v_27;
    v_49 = stack[-1];
    {   LispObject fn = basic_elt(env, 5); // baglistp
    v_49 = (*qfn1(fn))(fn, v_49);
    }
    env = stack[-3];
    if (v_49 == nil) goto v_27;
    v_49 = stack[-2];
    if (!car_legal(v_49)) stack[0] = carerror(v_49); else
    stack[0] = car(v_49);
    v_49 = stack[-2];
    if (!car_legal(v_49)) v_50 = cdrerror(v_49); else
    v_50 = cdr(v_49);
    v_49 = stack[-1];
    if (!car_legal(v_49)) v_49 = cdrerror(v_49); else
    v_49 = cdr(v_49);
    v_49 = Lappend_2(nil, v_50, v_49);
    {
        LispObject v_54 = stack[0];
        return cons(v_54, v_49);
    }
v_27:
    v_50 = stack[-2];
    v_49 = stack[-1];
    v_50 = list2(v_50, v_49);
    env = stack[-3];
    v_49 = basic_elt(env, 2); // "list or bag"
    {   LispObject fn = basic_elt(env, 6); // typerr
    v_49 = (*qfn2(fn))(fn, v_50, v_49);
    }
    goto v_25;
v_25:
    v_49 = nil;
    return onevalue(v_49);
}



// Code for formclear

static LispObject CC_formclear(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    v_13 = v_4;
    v_14 = v_3;
    v_15 = v_2;
// end of prologue
    stack[0] = basic_elt(env, 1); // clear
    if (!car_legal(v_15)) v_15 = cdrerror(v_15); else
    v_15 = cdr(v_15);
    {   LispObject fn = basic_elt(env, 2); // formclear1
    v_13 = (*qfn3(fn))(fn, v_15, v_14, v_13);
    }
    {
        LispObject v_17 = stack[0];
        return list2(v_17, v_13);
    }
}



// Code for partsym_zerop

static LispObject CC_partsym_zerop(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_40, v_41, v_42;
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
    v_40 = stack[-1];
    if (v_40 == nil) goto v_7;
    else goto v_8;
v_7:
    v_40 = nil;
    goto v_6;
v_8:
    v_40 = stack[-1];
    if (!car_legal(v_40)) v_40 = carerror(v_40); else
    v_40 = car(v_40);
    {   LispObject fn = basic_elt(env, 2); // repeats
    v_40 = (*qfn1(fn))(fn, v_40);
    }
    env = stack[-2];
    v_42 = v_40;
    v_40 = stack[0];
    if (!car_legal(v_40)) v_41 = carerror(v_40); else
    v_41 = car(v_40);
    v_40 = basic_elt(env, 1); // !-
    if (v_41 == v_40) goto v_23;
    else goto v_24;
v_23:
    v_40 = v_42;
    goto v_22;
v_24:
    v_40 = nil;
    goto v_22;
    v_40 = nil;
v_22:
    if (v_40 == nil) goto v_20;
    v_40 = v_42;
    goto v_18;
v_20:
    v_40 = stack[-1];
    if (!car_legal(v_40)) v_41 = cdrerror(v_40); else
    v_41 = cdr(v_40);
    v_40 = stack[0];
    if (!car_legal(v_40)) v_40 = cdrerror(v_40); else
    v_40 = cdr(v_40);
    stack[-1] = v_41;
    stack[0] = v_40;
    goto v_1;
    v_40 = nil;
v_18:
    goto v_6;
    v_40 = nil;
v_6:
    return onevalue(v_40);
}



// Code for modroots2

static LispObject CC_modroots2(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_100, v_101, v_102, v_103;
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
    v_102 = v_4;
    stack[-3] = v_3;
    v_103 = v_2;
// end of prologue
    v_100 = v_103;
    if (!consp(v_100)) goto v_16;
    else goto v_17;
v_16:
    v_100 = lisp_true;
    goto v_15;
v_17:
    v_100 = v_103;
    if (!car_legal(v_100)) v_100 = carerror(v_100); else
    v_100 = car(v_100);
    v_100 = (consp(v_100) ? nil : lisp_true);
    goto v_15;
    v_100 = nil;
v_15:
    if (v_100 == nil) goto v_13;
    v_100 = v_103;
    goto v_11;
v_13:
    v_100 = nil;
    goto v_11;
    v_100 = nil;
v_11:
    if (v_100 == nil) goto v_9;
    v_100 = nil;
    goto v_7;
v_9:
    v_100 = v_103;
    if (v_100 == nil) goto v_30;
    else goto v_31;
v_30:
    v_101 = stack[-3];
    v_100 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    if (v_101 == v_100) goto v_39;
    else goto v_40;
v_39:
    v_100 = v_102;
    goto v_38;
v_40:
    v_100 = nil;
    goto v_38;
    v_100 = nil;
v_38:
    if (v_100 == nil) goto v_36;
    v_100 = basic_elt(env, 1); // (-1 0 1)
    goto v_34;
v_36:
    v_100 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-4] = v_100;
    v_100 = stack[-3];
    v_101 = sub1(v_100);
    env = stack[-5];
    v_100 = stack[-4];
    v_100 = difference2(v_101, v_100);
    env = stack[-5];
    v_100 = Lminusp(nil, v_100);
    env = stack[-5];
    if (v_100 == nil) goto v_60;
    v_100 = nil;
    goto v_54;
v_60:
    v_100 = stack[-4];
    v_100 = ncons(v_100);
    env = stack[-5];
    stack[-1] = v_100;
    stack[-2] = v_100;
v_55:
    v_100 = stack[-4];
    v_100 = add1(v_100);
    env = stack[-5];
    stack[-4] = v_100;
    v_100 = stack[-3];
    v_101 = sub1(v_100);
    env = stack[-5];
    v_100 = stack[-4];
    v_100 = difference2(v_101, v_100);
    env = stack[-5];
    v_100 = Lminusp(nil, v_100);
    env = stack[-5];
    if (v_100 == nil) goto v_74;
    v_100 = stack[-2];
    goto v_54;
v_74:
    stack[0] = stack[-1];
    v_100 = stack[-4];
    v_100 = ncons(v_100);
    env = stack[-5];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_100);
    v_100 = stack[-1];
    if (!car_legal(v_100)) v_100 = cdrerror(v_100); else
    v_100 = cdr(v_100);
    stack[-1] = v_100;
    goto v_55;
v_54:
    goto v_34;
    v_100 = nil;
v_34:
    goto v_7;
v_31:
    v_101 = stack[-3];
    v_100 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    if (v_101 == v_100) goto v_87;
    else goto v_88;
v_87:
    v_101 = v_103;
    v_100 = lisp_true;
    {
        LispObject fn = basic_elt(env, 2); // modroots4
        return (*qfn3(fn))(fn, v_101, v_100, v_102);
    }
v_88:
    v_101 = v_103;
    v_100 = stack[-3];
    {
        LispObject fn = basic_elt(env, 3); // modroots3
        return (*qfn2(fn))(fn, v_101, v_100);
    }
    v_100 = nil;
v_7:
    return onevalue(v_100);
}



// Code for r2flbf

static LispObject CC_r2flbf(LispObject env,
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
    v_15 = qvalue(basic_elt(env, 1)); // !*bftag
    if (v_15 == nil) goto v_7;
    v_15 = v_16;
    {
        LispObject fn = basic_elt(env, 2); // r2bf
        return (*qfn1(fn))(fn, v_15);
    }
v_7:
    v_15 = v_16;
    {
        LispObject fn = basic_elt(env, 3); // r2fl
        return (*qfn1(fn))(fn, v_15);
    }
    v_15 = nil;
    return onevalue(v_15);
}



// Code for order_of_der

static LispObject CC_order_of_der(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_21, v_22, v_23;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_23 = v_3;
    v_21 = v_2;
// end of prologue
    v_22 = v_21;
    v_21 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_22 == v_21) goto v_7;
    else goto v_8;
v_7:
    v_21 = v_23;
    v_22 = qvalue(basic_elt(env, 1)); // i2o_jetspace!*
    v_21 = Lassoc(nil, v_21, v_22);
    if (!car_legal(v_21)) v_21 = cdrerror(v_21); else
    v_21 = cdr(v_21);
    goto v_6;
v_8:
    v_21 = v_23;
    v_22 = qvalue(basic_elt(env, 2)); // i2o_jetspace_odd!*
    v_21 = Lassoc(nil, v_21, v_22);
    if (!car_legal(v_21)) v_21 = cdrerror(v_21); else
    v_21 = cdr(v_21);
    goto v_6;
    v_21 = nil;
v_6:
    return onevalue(v_21);
}



// Code for talp_gaussand

static LispObject CC_talp_gaussand(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_80, v_81, v_82;
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
    stack[0] = nil;
    v_82 = stack[-4];
    v_80 = stack[-3];
    if (!car_legal(v_80)) v_81 = carerror(v_80); else
    v_81 = car(v_80);
    v_80 = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // talp_trygaussvar
    v_80 = (*qfn3(fn))(fn, v_82, v_81, v_80);
    }
    env = stack[-6];
    stack[-1] = v_80;
    v_81 = stack[-1];
    v_80 = basic_elt(env, 1); // failed
    if (v_81 == v_80) goto v_22;
    else goto v_23;
v_22:
    v_80 = lisp_true;
    goto v_21;
v_23:
    v_81 = stack[-1];
    v_80 = basic_elt(env, 2); // ignore
    v_80 = (v_81 == v_80 ? lisp_true : nil);
    goto v_21;
    v_80 = nil;
v_21:
    if (v_80 == nil) goto v_19;
    v_80 = stack[-3];
    if (!car_legal(v_80)) v_80 = cdrerror(v_80); else
    v_80 = cdr(v_80);
    stack[-3] = v_80;
v_36:
    v_80 = stack[-3];
    if (v_80 == nil) goto v_39;
    v_80 = stack[0];
    if (v_80 == nil) goto v_43;
    else goto v_39;
v_43:
    goto v_40;
v_39:
    goto v_35;
v_40:
    v_82 = stack[-4];
    v_80 = stack[-3];
    if (!car_legal(v_80)) v_81 = carerror(v_80); else
    v_81 = car(v_80);
    v_80 = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // talp_trygaussvar
    v_80 = (*qfn3(fn))(fn, v_82, v_81, v_80);
    }
    env = stack[-6];
    stack[-5] = v_80;
    v_81 = stack[-5];
    v_80 = basic_elt(env, 1); // failed
    if (v_81 == v_80) goto v_58;
    v_81 = stack[-5];
    v_80 = basic_elt(env, 2); // ignore
    v_80 = Lneq_2(nil, v_81, v_80);
    env = stack[-6];
    goto v_56;
v_58:
    v_80 = nil;
    goto v_56;
    v_80 = nil;
v_56:
    if (v_80 == nil) goto v_54;
    v_80 = lisp_true;
    stack[0] = v_80;
    v_80 = stack[-5];
    stack[-1] = v_80;
    goto v_52;
v_54:
v_52:
    v_80 = stack[-3];
    if (!car_legal(v_80)) v_80 = cdrerror(v_80); else
    v_80 = cdr(v_80);
    stack[-3] = v_80;
    goto v_36;
v_35:
    goto v_17;
v_19:
v_17:
    v_80 = stack[-1];
    if (v_80 == nil) goto v_74;
    v_80 = stack[-1];
    goto v_72;
v_74:
    v_80 = basic_elt(env, 1); // failed
    goto v_72;
    v_80 = nil;
v_72:
    return onevalue(v_80);
}



// Code for rl_b2atl

static LispObject CC_rl_b2atl(LispObject env,
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
    stack[0] = qvalue(basic_elt(env, 1)); // rl_b2atl!*
    v_10 = list2(v_11, v_10);
    env = stack[-1];
    {
        LispObject v_13 = stack[0];
        LispObject fn = basic_elt(env, 2); // apply
        return (*qfn2(fn))(fn, v_13, v_10);
    }
}



// Code for rat_0

static LispObject CC_rat_0(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_6, v_7;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// end of prologue
    v_7 = nil;
    v_6 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_7, v_6);
}



// Code for ldt!-dep

static LispObject CC_ldtKdep(LispObject env,
                         LispObject v_2)
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
        push(v_2);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_19 = v_2;
// end of prologue
    {   LispObject fn = basic_elt(env, 2); // ldt!-tvar
    v_19 = (*qfn1(fn))(fn, v_19);
    }
    env = stack[0];
    v_20 = qvalue(basic_elt(env, 1)); // depl!*
    v_19 = Lassoc(nil, v_19, v_20);
    v_20 = v_19;
    v_19 = v_20;
    if (v_19 == nil) goto v_12;
    v_19 = v_20;
    if (!car_legal(v_19)) v_19 = cdrerror(v_19); else
    v_19 = cdr(v_19);
    goto v_10;
v_12:
    v_19 = nil;
    goto v_10;
    v_19 = nil;
v_10:
    return onevalue(v_19);
}



// Code for pm!:gensym

static LispObject CC_pmTgensym(LispObject env)
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
// space for vars preserved across procedure calls
    push(nil, nil);
    stack_popper stack_popper_var(3);
// end of prologue
    stack[-1] = basic_elt(env, 1); // !?
    stack[0] = basic_elt(env, 2); // !_
    v_10 = qvalue(basic_elt(env, 3)); // pm!:gensym!-count!*
    v_10 = add1(v_10);
    env = stack[-2];
    setvalue(basic_elt(env, 3), v_10); // pm!:gensym!-count!*
    v_10 = Lexplode(nil, v_10);
    env = stack[-2];
    v_10 = list2star(stack[-1], stack[0], v_10);
        return Lcompress(nil, v_10);
}



// Code for groebsimpcontnormalform

static LispObject CC_groebsimpcontnormalform(LispObject env,
                         LispObject v_2)
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
    v_64 = stack[-2];
    if (v_64 == nil) goto v_10;
    else goto v_11;
v_10:
    v_64 = lisp_true;
    goto v_9;
v_11:
    v_64 = stack[-2];
    if (!car_legal(v_64)) v_64 = cdrerror(v_64); else
    v_64 = cdr(v_64);
    if (!car_legal(v_64)) v_64 = cdrerror(v_64); else
    v_64 = cdr(v_64);
    if (!car_legal(v_64)) v_64 = cdrerror(v_64); else
    v_64 = cdr(v_64);
    if (!car_legal(v_64)) v_64 = carerror(v_64); else
    v_64 = car(v_64);
    v_64 = (v_64 == nil ? lisp_true : nil);
    goto v_9;
    v_64 = nil;
v_9:
    if (v_64 == nil) goto v_7;
    v_64 = stack[-2];
    goto v_5;
v_7:
    v_64 = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // gsugar
    v_64 = (*qfn1(fn))(fn, v_64);
    }
    env = stack[-4];
    stack[0] = v_64;
    v_64 = stack[-2];
    if (!car_legal(v_64)) v_64 = cdrerror(v_64); else
    v_64 = cdr(v_64);
    if (!car_legal(v_64)) v_64 = cdrerror(v_64); else
    v_64 = cdr(v_64);
    if (!car_legal(v_64)) v_64 = carerror(v_64); else
    v_64 = car(v_64);
    stack[-3] = v_64;
    v_64 = stack[-2];
    {   LispObject fn = basic_elt(env, 4); // vdpsimpcont
    v_64 = (*qfn1(fn))(fn, v_64);
    }
    env = stack[-4];
    stack[-2] = v_64;
    v_65 = stack[-2];
    v_64 = stack[0];
    {   LispObject fn = basic_elt(env, 5); // gsetsugar
    v_64 = (*qfn2(fn))(fn, v_65, v_64);
    }
    env = stack[-4];
    v_64 = qvalue(basic_elt(env, 1)); // !*groebprot
    if (v_64 == nil) goto v_43;
    v_65 = stack[-3];
    v_64 = stack[-2];
    if (!car_legal(v_64)) v_64 = cdrerror(v_64); else
    v_64 = cdr(v_64);
    if (!car_legal(v_64)) v_64 = cdrerror(v_64); else
    v_64 = cdr(v_64);
    if (!car_legal(v_64)) v_64 = carerror(v_64); else
    v_64 = car(v_64);
    if (equal(v_65, v_64)) goto v_43;
    stack[-1] = basic_elt(env, 2); // quotient
    v_64 = stack[-2];
    if (!car_legal(v_64)) v_64 = cdrerror(v_64); else
    v_64 = cdr(v_64);
    if (!car_legal(v_64)) v_64 = cdrerror(v_64); else
    v_64 = cdr(v_64);
    if (!car_legal(v_64)) v_64 = carerror(v_64); else
    v_64 = car(v_64);
    {   LispObject fn = basic_elt(env, 6); // vbc2a
    stack[0] = (*qfn1(fn))(fn, v_64);
    }
    env = stack[-4];
    v_64 = stack[-3];
    {   LispObject fn = basic_elt(env, 6); // vbc2a
    v_64 = (*qfn1(fn))(fn, v_64);
    }
    env = stack[-4];
    v_64 = list3(stack[-1], stack[0], v_64);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 7); // reval
    v_64 = (*qfn1(fn))(fn, v_64);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 8); // groebreductionprotocol2
    v_64 = (*qfn1(fn))(fn, v_64);
    }
    goto v_41;
v_43:
v_41:
    v_64 = stack[-2];
    goto v_5;
    v_64 = nil;
v_5:
    return onevalue(v_64);
}



// Code for !:quotient

static LispObject CC_Tquotient(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    v_84 = v_3;
    stack[0] = v_2;
// end of prologue
    v_83 = stack[0];
    if (v_83 == nil) goto v_11;
    else goto v_12;
v_11:
    v_83 = lisp_true;
    goto v_10;
v_12:
    v_85 = stack[0];
    v_83 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_83 = (v_85 == v_83 ? lisp_true : nil);
    goto v_10;
    v_83 = nil;
v_10:
    if (v_83 == nil) goto v_8;
    v_83 = nil;
    goto v_6;
v_8:
    v_83 = v_84;
    if (v_83 == nil) goto v_25;
    else goto v_26;
v_25:
    v_83 = lisp_true;
    goto v_24;
v_26:
    v_85 = v_84;
    v_83 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_83 = (v_85 == v_83 ? lisp_true : nil);
    goto v_24;
    v_83 = nil;
v_24:
    if (v_83 == nil) goto v_22;
    v_85 = basic_elt(env, 1); // poly
    v_84 = static_cast<LispObject>(192)+TAG_FIXNUM; // 12
    v_83 = basic_elt(env, 2); // "Zero divisor"
    {
        LispObject fn = basic_elt(env, 6); // rerror
        return (*qfn3(fn))(fn, v_85, v_84, v_83);
    }
v_22:
    v_83 = stack[0];
    if (!consp(v_83)) goto v_42;
    else goto v_43;
v_42:
    v_83 = v_84;
    v_83 = (consp(v_83) ? nil : lisp_true);
    goto v_41;
v_43:
    v_83 = nil;
    goto v_41;
    v_83 = nil;
v_41:
    if (v_83 == nil) goto v_39;
    v_83 = qvalue(basic_elt(env, 3)); // dmode!*
    if (v_83 == nil) goto v_52;
    else goto v_53;
v_52:
    v_83 = stack[0];
    return quot2(v_83, v_84);
v_53:
    v_83 = v_84;
    {   LispObject fn = basic_elt(env, 7); // !:recip
    v_83 = (*qfn1(fn))(fn, v_83);
    }
    env = stack[-1];
    v_84 = v_83;
    if (!consp(v_84)) goto v_65;
    else goto v_66;
v_65:
    v_84 = stack[0];
    return times2(v_84, v_83);
v_66:
    v_85 = stack[0];
    v_84 = v_83;
    v_83 = basic_elt(env, 4); // times
    {
        LispObject fn = basic_elt(env, 8); // dcombine
        return (*qfn3(fn))(fn, v_85, v_84, v_83);
    }
    v_83 = nil;
    goto v_51;
    v_83 = nil;
v_51:
    goto v_6;
v_39:
    v_85 = stack[0];
    v_83 = basic_elt(env, 5); // quotient
    {
        LispObject fn = basic_elt(env, 8); // dcombine
        return (*qfn3(fn))(fn, v_85, v_84, v_83);
    }
    v_83 = nil;
v_6:
    return onevalue(v_83);
}



// Code for matcheq

static LispObject CC_matcheq(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_156, v_157;
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
    v_156 = stack[-2];
    if (v_156 == nil) goto v_11;
    else goto v_12;
v_11:
    v_156 = lisp_true;
    goto v_10;
v_12:
    v_156 = stack[-1];
    v_156 = (v_156 == nil ? lisp_true : nil);
    goto v_10;
    v_156 = nil;
v_10:
    if (v_156 == nil) goto v_8;
    v_156 = nil;
    goto v_6;
v_8:
    v_156 = stack[-2];
    if (is_number(v_156)) goto v_20;
    else goto v_21;
v_20:
    v_157 = stack[-2];
    v_156 = stack[-1];
    if (equal(v_157, v_156)) goto v_25;
    else goto v_26;
v_25:
    v_156 = lisp_true;
    return ncons(v_156);
v_26:
    v_156 = nil;
    goto v_24;
    v_156 = nil;
v_24:
    goto v_6;
v_21:
    v_156 = stack[-2];
    if (!consp(v_156)) goto v_34;
    else goto v_35;
v_34:
    v_157 = stack[-2];
    v_156 = basic_elt(env, 0); // matcheq
    stack[-3] = get(v_157, v_156);
    env = stack[-4];
    v_156 = stack[-2];
    stack[0] = Lmkquote(nil, v_156);
    env = stack[-4];
    v_156 = stack[-1];
    if (!consp(v_156)) goto v_50;
    else goto v_51;
v_50:
    v_156 = stack[-1];
    v_156 = ncons(v_156);
    env = stack[-4];
    goto v_49;
v_51:
    v_156 = stack[-1];
    goto v_49;
    v_156 = nil;
v_49:
    v_156 = Lmkquote(nil, v_156);
    env = stack[-4];
    v_156 = list3(stack[-3], stack[0], v_156);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 4); // eval
    v_156 = (*qfn1(fn))(fn, v_156);
    }
    env = stack[-4];
    v_157 = v_156;
    v_156 = v_157;
    if (v_156 == nil) goto v_61;
    v_156 = v_157;
    goto v_59;
v_61:
    v_156 = qvalue(basic_elt(env, 1)); // !*exp
    if (v_156 == nil) goto v_68;
    else goto v_69;
v_68:
    v_156 = stack[-1];
    v_156 = Lconsp(nil, v_156);
    env = stack[-4];
    if (v_156 == nil) goto v_73;
    else goto v_74;
v_73:
    v_156 = nil;
    goto v_72;
v_74:
    v_156 = stack[-1];
    if (!car_legal(v_156)) v_157 = carerror(v_156); else
    v_157 = car(v_156);
    v_156 = basic_elt(env, 2); // (plus difference)
    v_156 = Lmemq(nil, v_157, v_156);
    goto v_72;
    v_156 = nil;
v_72:
    goto v_67;
v_69:
    v_156 = nil;
    goto v_67;
    v_156 = nil;
v_67:
    if (v_156 == nil) goto v_65;
    v_157 = stack[-2];
    v_156 = stack[-1];
    {
        LispObject fn = basic_elt(env, 5); // matchlinear
        return (*qfn2(fn))(fn, v_157, v_156);
    }
v_65:
    v_156 = nil;
    goto v_59;
    v_156 = nil;
v_59:
    goto v_6;
v_35:
    v_156 = stack[-1];
    if (!consp(v_156)) goto v_93;
    else goto v_94;
v_93:
    v_156 = nil;
    goto v_6;
v_94:
    v_156 = stack[-2];
    if (!car_legal(v_156)) v_156 = carerror(v_156); else
    v_156 = car(v_156);
    if (!consp(v_156)) goto v_101;
    else goto v_102;
v_101:
    v_156 = stack[-2];
    if (!car_legal(v_156)) v_157 = carerror(v_156); else
    v_157 = car(v_156);
    v_156 = stack[-1];
    if (!car_legal(v_156)) v_156 = carerror(v_156); else
    v_156 = car(v_156);
    v_156 = (v_157 == v_156 ? lisp_true : nil);
    goto v_100;
v_102:
    v_156 = nil;
    goto v_100;
    v_156 = nil;
v_100:
    if (v_156 == nil) goto v_98;
    v_156 = stack[-2];
    if (!car_legal(v_156)) v_157 = carerror(v_156); else
    v_157 = car(v_156);
    v_156 = basic_elt(env, 0); // matcheq
    stack[0] = get(v_157, v_156);
    env = stack[-4];
    v_156 = stack[-2];
    if (!car_legal(v_156)) v_156 = cdrerror(v_156); else
    v_156 = cdr(v_156);
    stack[-2] = Lmkquote(nil, v_156);
    env = stack[-4];
    v_156 = stack[-1];
    if (!car_legal(v_156)) v_156 = cdrerror(v_156); else
    v_156 = cdr(v_156);
    v_156 = Lmkquote(nil, v_156);
    env = stack[-4];
    v_156 = list3(stack[0], stack[-2], v_156);
    env = stack[-4];
    {
        LispObject fn = basic_elt(env, 4); // eval
        return (*qfn1(fn))(fn, v_156);
    }
v_98:
    v_156 = qvalue(basic_elt(env, 1)); // !*exp
    if (v_156 == nil) goto v_129;
    else goto v_130;
v_129:
    v_156 = stack[-1];
    if (!car_legal(v_156)) v_157 = carerror(v_156); else
    v_157 = car(v_156);
    v_156 = basic_elt(env, 2); // (plus difference)
    v_156 = Lmemq(nil, v_157, v_156);
    if (v_156 == nil) goto v_134;
    else goto v_135;
v_134:
    v_156 = nil;
    goto v_133;
v_135:
    v_156 = stack[-2];
    if (!car_legal(v_156)) v_157 = carerror(v_156); else
    v_157 = car(v_156);
    v_156 = basic_elt(env, 3); // diff
    v_156 = (v_157 == v_156 ? lisp_true : nil);
    goto v_133;
    v_156 = nil;
v_133:
    goto v_128;
v_130:
    v_156 = nil;
    goto v_128;
    v_156 = nil;
v_128:
    if (v_156 == nil) goto v_126;
    v_157 = stack[-2];
    v_156 = stack[-1];
    {
        LispObject fn = basic_elt(env, 5); // matchlinear
        return (*qfn2(fn))(fn, v_157, v_156);
    }
v_126:
    v_156 = nil;
    goto v_6;
    v_156 = nil;
v_6:
    return onevalue(v_156);
}



// Code for tot!-asym!-indp

static LispObject CC_totKasymKindp(LispObject env,
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
v_1:
    v_76 = stack[0];
    if (v_76 == nil) goto v_6;
    else goto v_7;
v_6:
    v_76 = lisp_true;
    goto v_5;
v_7:
    v_76 = stack[0];
    if (!car_legal(v_76)) v_76 = cdrerror(v_76); else
    v_76 = cdr(v_76);
    if (v_76 == nil) goto v_14;
    else goto v_15;
v_14:
    v_76 = lisp_true;
    goto v_13;
v_15:
    v_76 = stack[0];
    if (!car_legal(v_76)) v_77 = carerror(v_76); else
    v_77 = car(v_76);
    v_76 = stack[0];
    if (!car_legal(v_76)) v_76 = cdrerror(v_76); else
    v_76 = cdr(v_76);
    if (!car_legal(v_76)) v_76 = carerror(v_76); else
    v_76 = car(v_76);
    if (equal(v_77, v_76)) goto v_28;
    v_76 = stack[0];
    if (!car_legal(v_76)) v_76 = carerror(v_76); else
    v_76 = car(v_76);
    if (!consp(v_76)) goto v_36;
    else goto v_37;
v_36:
    v_76 = stack[0];
    if (!car_legal(v_76)) v_77 = carerror(v_76); else
    v_77 = car(v_76);
    v_76 = stack[0];
    if (!car_legal(v_76)) v_76 = cdrerror(v_76); else
    v_76 = cdr(v_76);
    if (!car_legal(v_76)) v_76 = carerror(v_76); else
    v_76 = car(v_76);
    {   LispObject fn = basic_elt(env, 1); // indordp
    v_76 = (*qfn2(fn))(fn, v_77, v_76);
    }
    env = stack[-1];
    goto v_35;
v_37:
    v_76 = stack[0];
    if (!car_legal(v_76)) v_76 = carerror(v_76); else
    v_76 = car(v_76);
    {   LispObject fn = basic_elt(env, 2); // indxchk
    v_76 = (*qfn1(fn))(fn, v_76);
    }
    env = stack[-1];
    if (v_76 == nil) goto v_50;
    else goto v_49;
v_50:
    v_76 = stack[0];
    if (!car_legal(v_76)) v_76 = cdrerror(v_76); else
    v_76 = cdr(v_76);
    if (!car_legal(v_76)) v_76 = carerror(v_76); else
    v_76 = car(v_76);
    {   LispObject fn = basic_elt(env, 2); // indxchk
    v_76 = (*qfn1(fn))(fn, v_76);
    }
    env = stack[-1];
    if (v_76 == nil) goto v_56;
    else goto v_55;
v_56:
    v_76 = stack[0];
    if (!car_legal(v_76)) v_77 = carerror(v_76); else
    v_77 = car(v_76);
    v_76 = stack[0];
    if (!car_legal(v_76)) v_76 = cdrerror(v_76); else
    v_76 = cdr(v_76);
    if (!car_legal(v_76)) v_76 = carerror(v_76); else
    v_76 = car(v_76);
    {   LispObject fn = basic_elt(env, 3); // indordlp
    v_76 = (*qfn2(fn))(fn, v_77, v_76);
    }
    env = stack[-1];
v_55:
v_49:
    goto v_35;
    v_76 = nil;
v_35:
    goto v_26;
v_28:
    v_76 = nil;
    goto v_26;
    v_76 = nil;
v_26:
    if (v_76 == nil) goto v_23;
    else goto v_24;
v_23:
    v_76 = nil;
    goto v_22;
v_24:
    v_76 = stack[0];
    if (!car_legal(v_76)) v_76 = cdrerror(v_76); else
    v_76 = cdr(v_76);
    stack[0] = v_76;
    goto v_1;
    v_76 = nil;
v_22:
    goto v_13;
    v_76 = nil;
v_13:
    goto v_5;
    v_76 = nil;
v_5:
    return onevalue(v_76);
}



// Code for !*s2arg

static LispObject CC_Hs2arg(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_83 = v_2;
// end of prologue
    v_82 = v_83;
    if (!consp(v_82)) goto v_11;
    else goto v_12;
v_11:
    v_82 = lisp_true;
    goto v_10;
v_12:
    v_82 = v_83;
    if (!car_legal(v_82)) v_84 = carerror(v_82); else
    v_84 = car(v_82);
    v_82 = basic_elt(env, 1); // quote
    v_82 = (v_84 == v_82 ? lisp_true : nil);
    goto v_10;
    v_82 = nil;
v_10:
    if (v_82 == nil) goto v_8;
    v_82 = v_83;
    goto v_6;
v_8:
    v_82 = v_83;
    if (!car_legal(v_82)) v_82 = carerror(v_82); else
    v_82 = car(v_82);
    if (symbolp(v_82)) goto v_27;
    v_82 = lisp_true;
    goto v_25;
v_27:
    v_82 = v_83;
    if (!car_legal(v_82)) v_84 = carerror(v_82); else
    v_84 = car(v_82);
    v_82 = basic_elt(env, 2); // nochange
    v_82 = Lflagp(nil, v_84, v_82);
    env = stack[-5];
    v_82 = (v_82 == nil ? lisp_true : nil);
    goto v_25;
    v_82 = nil;
v_25:
    if (v_82 == nil) goto v_23;
    v_82 = v_83;
    stack[-4] = v_82;
    v_82 = stack[-4];
    if (v_82 == nil) goto v_47;
    else goto v_48;
v_47:
    v_82 = nil;
    goto v_42;
v_48:
    v_82 = stack[-4];
    if (!car_legal(v_82)) v_82 = carerror(v_82); else
    v_82 = car(v_82);
    v_83 = v_82;
    v_82 = stack[-3];
    {   LispObject fn = basic_elt(env, 0); // !*s2arg
    v_82 = (*qfn2(fn))(fn, v_83, v_82);
    }
    env = stack[-5];
    v_82 = ncons(v_82);
    env = stack[-5];
    stack[-1] = v_82;
    stack[-2] = v_82;
v_43:
    v_82 = stack[-4];
    if (!car_legal(v_82)) v_82 = cdrerror(v_82); else
    v_82 = cdr(v_82);
    stack[-4] = v_82;
    v_82 = stack[-4];
    if (v_82 == nil) goto v_62;
    else goto v_63;
v_62:
    v_82 = stack[-2];
    goto v_42;
v_63:
    stack[0] = stack[-1];
    v_82 = stack[-4];
    if (!car_legal(v_82)) v_82 = carerror(v_82); else
    v_82 = car(v_82);
    v_83 = v_82;
    v_82 = stack[-3];
    {   LispObject fn = basic_elt(env, 0); // !*s2arg
    v_82 = (*qfn2(fn))(fn, v_83, v_82);
    }
    env = stack[-5];
    v_82 = ncons(v_82);
    env = stack[-5];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_82);
    v_82 = stack[-1];
    if (!car_legal(v_82)) v_82 = cdrerror(v_82); else
    v_82 = cdr(v_82);
    stack[-1] = v_82;
    goto v_43;
v_42:
    goto v_6;
v_23:
    v_82 = stack[-3];
    {
        LispObject fn = basic_elt(env, 3); // mkarg
        return (*qfn2(fn))(fn, v_83, v_82);
    }
    v_82 = nil;
v_6:
    return onevalue(v_82);
}



// Code for com43

static LispObject CC_com43(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_892, v_893, v_894, v_895;
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
    real_push(nil, nil, nil, nil, nil);
    real_push(nil);
    stack_popper stack_popper_var(17);
// copy arguments values to proper place
    stack[-4] = v_7;
    stack[-5] = v_6;
    stack[-6] = v_5;
    stack[-7] = v_4;
    stack[-8] = v_3;
    stack[-9] = v_2;
// end of prologue
    v_892 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-15] = v_892;
    v_894 = basic_elt(env, 1); // liemat
    v_893 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_892 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    stack[-1] = list3(v_894, v_893, v_892);
    env = stack[-16];
    v_894 = basic_elt(env, 2); // bb
    v_893 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_892 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    stack[0] = list3(v_894, v_893, v_892);
    env = stack[-16];
    v_894 = basic_elt(env, 3); // ff
    v_893 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_892 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_892 = list3(v_894, v_893, v_892);
    env = stack[-16];
    v_892 = list3(stack[-1], stack[0], v_892);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 15); // matrix
    v_892 = (*qfn1(fn))(fn, v_892);
    }
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 16); // aeval
    v_892 = (*qfn1(fn))(fn, v_892);
    }
    env = stack[-16];
    stack[0] = basic_elt(env, 4); // algebraic
    v_895 = basic_elt(env, 5); // l_z
    v_894 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_893 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_892 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_892 = list4(v_895, v_894, v_893, v_892);
    env = stack[-16];
    v_892 = ncons(v_892);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 17); // arrayfn
    v_892 = (*qfn2(fn))(fn, stack[0], v_892);
    }
    env = stack[-16];
    v_892 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-10] = v_892;
v_39:
    v_893 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_892 = stack[-10];
    v_892 = difference2(v_893, v_892);
    env = stack[-16];
    v_892 = Lminusp(nil, v_892);
    env = stack[-16];
    if (v_892 == nil) goto v_44;
    goto v_38;
v_44:
    v_895 = basic_elt(env, 6); // cc
    v_894 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_893 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_892 = stack[-10];
    stack[-1] = list4(v_895, v_894, v_893, v_892);
    env = stack[-16];
    stack[0] = basic_elt(env, 7); // minus
    v_895 = basic_elt(env, 6); // cc
    v_894 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_893 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_892 = stack[-10];
    v_892 = list4(v_895, v_894, v_893, v_892);
    env = stack[-16];
    v_892 = list2(stack[0], v_892);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 18); // aeval!*
    v_892 = (*qfn1(fn))(fn, v_892);
    }
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 19); // setk
    v_892 = (*qfn2(fn))(fn, stack[-1], v_892);
    }
    env = stack[-16];
    v_895 = basic_elt(env, 6); // cc
    v_894 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_893 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_892 = stack[-10];
    stack[-1] = list4(v_895, v_894, v_893, v_892);
    env = stack[-16];
    stack[0] = basic_elt(env, 7); // minus
    v_895 = basic_elt(env, 6); // cc
    v_894 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_893 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_892 = stack[-10];
    v_892 = list4(v_895, v_894, v_893, v_892);
    env = stack[-16];
    v_892 = list2(stack[0], v_892);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 18); // aeval!*
    v_892 = (*qfn1(fn))(fn, v_892);
    }
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 19); // setk
    v_892 = (*qfn2(fn))(fn, stack[-1], v_892);
    }
    env = stack[-16];
    v_895 = basic_elt(env, 6); // cc
    v_894 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_893 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_892 = stack[-10];
    stack[-1] = list4(v_895, v_894, v_893, v_892);
    env = stack[-16];
    stack[0] = basic_elt(env, 7); // minus
    v_895 = basic_elt(env, 6); // cc
    v_894 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_893 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_892 = stack[-10];
    v_892 = list4(v_895, v_894, v_893, v_892);
    env = stack[-16];
    v_892 = list2(stack[0], v_892);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 18); // aeval!*
    v_892 = (*qfn1(fn))(fn, v_892);
    }
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 19); // setk
    v_892 = (*qfn2(fn))(fn, stack[-1], v_892);
    }
    env = stack[-16];
    v_895 = basic_elt(env, 6); // cc
    v_894 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_893 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_892 = stack[-10];
    stack[-1] = list4(v_895, v_894, v_893, v_892);
    env = stack[-16];
    stack[0] = basic_elt(env, 7); // minus
    v_895 = basic_elt(env, 6); // cc
    v_894 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_893 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_892 = stack[-10];
    v_892 = list4(v_895, v_894, v_893, v_892);
    env = stack[-16];
    v_892 = list2(stack[0], v_892);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 18); // aeval!*
    v_892 = (*qfn1(fn))(fn, v_892);
    }
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 19); // setk
    v_892 = (*qfn2(fn))(fn, stack[-1], v_892);
    }
    env = stack[-16];
    v_895 = basic_elt(env, 6); // cc
    v_894 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_893 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_892 = stack[-10];
    stack[-1] = list4(v_895, v_894, v_893, v_892);
    env = stack[-16];
    stack[0] = basic_elt(env, 7); // minus
    v_895 = basic_elt(env, 6); // cc
    v_894 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_893 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_892 = stack[-10];
    v_892 = list4(v_895, v_894, v_893, v_892);
    env = stack[-16];
    v_892 = list2(stack[0], v_892);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 18); // aeval!*
    v_892 = (*qfn1(fn))(fn, v_892);
    }
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 19); // setk
    v_892 = (*qfn2(fn))(fn, stack[-1], v_892);
    }
    env = stack[-16];
    v_895 = basic_elt(env, 6); // cc
    v_894 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_893 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_892 = stack[-10];
    stack[-1] = list4(v_895, v_894, v_893, v_892);
    env = stack[-16];
    stack[0] = basic_elt(env, 7); // minus
    v_895 = basic_elt(env, 6); // cc
    v_894 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_893 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_892 = stack[-10];
    v_892 = list4(v_895, v_894, v_893, v_892);
    env = stack[-16];
    v_892 = list2(stack[0], v_892);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 18); // aeval!*
    v_892 = (*qfn1(fn))(fn, v_892);
    }
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 19); // setk
    v_892 = (*qfn2(fn))(fn, stack[-1], v_892);
    }
    env = stack[-16];
    v_895 = basic_elt(env, 6); // cc
    v_894 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_893 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_892 = stack[-10];
    stack[-3] = list4(v_895, v_894, v_893, v_892);
    env = stack[-16];
    v_895 = basic_elt(env, 6); // cc
    v_894 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_893 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_892 = stack[-10];
    stack[-2] = list4(v_895, v_894, v_893, v_892);
    env = stack[-16];
    v_895 = basic_elt(env, 6); // cc
    v_894 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_893 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_892 = stack[-10];
    stack[-1] = list4(v_895, v_894, v_893, v_892);
    env = stack[-16];
    v_895 = basic_elt(env, 6); // cc
    v_894 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_893 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_892 = stack[-10];
    stack[0] = list4(v_895, v_894, v_893, v_892);
    env = stack[-16];
    v_892 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {   LispObject fn = basic_elt(env, 18); // aeval!*
    v_892 = (*qfn1(fn))(fn, v_892);
    }
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 19); // setk
    v_892 = (*qfn2(fn))(fn, stack[0], v_892);
    }
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 19); // setk
    v_892 = (*qfn2(fn))(fn, stack[-1], v_892);
    }
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 19); // setk
    v_892 = (*qfn2(fn))(fn, stack[-2], v_892);
    }
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 19); // setk
    v_892 = (*qfn2(fn))(fn, stack[-3], v_892);
    }
    env = stack[-16];
    v_894 = basic_elt(env, 1); // liemat
    v_893 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_892 = stack[-10];
    stack[0] = list3(v_894, v_893, v_892);
    env = stack[-16];
    v_895 = basic_elt(env, 6); // cc
    v_894 = stack[-9];
    v_893 = stack[-8];
    v_892 = stack[-10];
    v_892 = list4(v_895, v_894, v_893, v_892);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 18); // aeval!*
    v_892 = (*qfn1(fn))(fn, v_892);
    }
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 19); // setk
    v_892 = (*qfn2(fn))(fn, stack[0], v_892);
    }
    env = stack[-16];
    v_894 = basic_elt(env, 1); // liemat
    v_893 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_892 = stack[-10];
    stack[0] = list3(v_894, v_893, v_892);
    env = stack[-16];
    v_895 = basic_elt(env, 6); // cc
    v_894 = stack[-7];
    v_893 = stack[-6];
    v_892 = stack[-10];
    v_892 = list4(v_895, v_894, v_893, v_892);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 18); // aeval!*
    v_892 = (*qfn1(fn))(fn, v_892);
    }
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 19); // setk
    v_892 = (*qfn2(fn))(fn, stack[0], v_892);
    }
    env = stack[-16];
    v_894 = basic_elt(env, 1); // liemat
    v_893 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_892 = stack[-10];
    stack[0] = list3(v_894, v_893, v_892);
    env = stack[-16];
    v_895 = basic_elt(env, 6); // cc
    v_894 = stack[-5];
    v_893 = stack[-4];
    v_892 = stack[-10];
    v_892 = list4(v_895, v_894, v_893, v_892);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 18); // aeval!*
    v_892 = (*qfn1(fn))(fn, v_892);
    }
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 19); // setk
    v_892 = (*qfn2(fn))(fn, stack[0], v_892);
    }
    env = stack[-16];
    v_892 = stack[-10];
    v_892 = add1(v_892);
    env = stack[-16];
    stack[-10] = v_892;
    goto v_39;
v_38:
    v_894 = basic_elt(env, 1); // liemat
    v_893 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_892 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[0] = list3(v_894, v_893, v_892);
    env = stack[-16];
    v_892 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 16); // aeval
    v_892 = (*qfn1(fn))(fn, v_892);
    }
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 19); // setk
    v_892 = (*qfn2(fn))(fn, stack[0], v_892);
    }
    env = stack[-16];
    v_893 = basic_elt(env, 8); // det
    v_892 = basic_elt(env, 1); // liemat
    v_892 = list2(v_893, v_892);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 16); // aeval
    v_893 = (*qfn1(fn))(fn, v_892);
    }
    env = stack[-16];
    v_892 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {   LispObject fn = basic_elt(env, 20); // evalneq
    v_892 = (*qfn2(fn))(fn, v_893, v_892);
    }
    env = stack[-16];
    if (v_892 == nil) goto v_205;
    v_892 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 16); // aeval
    v_892 = (*qfn1(fn))(fn, v_892);
    }
    env = stack[-16];
    stack[-15] = v_892;
    goto v_203;
v_205:
    v_892 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    stack[-2] = v_892;
v_219:
    v_893 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_892 = stack[-2];
    v_892 = difference2(v_893, v_892);
    env = stack[-16];
    v_892 = Lminusp(nil, v_892);
    env = stack[-16];
    if (v_892 == nil) goto v_224;
    goto v_218;
v_224:
    stack[-1] = basic_elt(env, 1); // liemat
    stack[0] = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_892 = stack[-2];
    v_892 = sub1(v_892);
    env = stack[-16];
    stack[0] = list3(stack[-1], stack[0], v_892);
    env = stack[-16];
    v_892 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {   LispObject fn = basic_elt(env, 18); // aeval!*
    v_892 = (*qfn1(fn))(fn, v_892);
    }
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 19); // setk
    v_892 = (*qfn2(fn))(fn, stack[0], v_892);
    }
    env = stack[-16];
    v_894 = basic_elt(env, 1); // liemat
    v_893 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_892 = stack[-2];
    stack[0] = list3(v_894, v_893, v_892);
    env = stack[-16];
    v_892 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 18); // aeval!*
    v_892 = (*qfn1(fn))(fn, v_892);
    }
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 19); // setk
    v_892 = (*qfn2(fn))(fn, stack[0], v_892);
    }
    env = stack[-16];
    v_893 = basic_elt(env, 8); // det
    v_892 = basic_elt(env, 1); // liemat
    v_892 = list2(v_893, v_892);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 18); // aeval!*
    v_893 = (*qfn1(fn))(fn, v_892);
    }
    env = stack[-16];
    v_892 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {   LispObject fn = basic_elt(env, 20); // evalneq
    v_892 = (*qfn2(fn))(fn, v_893, v_892);
    }
    env = stack[-16];
    if (v_892 == nil) goto v_248;
    v_892 = stack[-2];
    {   LispObject fn = basic_elt(env, 18); // aeval!*
    v_892 = (*qfn1(fn))(fn, v_892);
    }
    env = stack[-16];
    stack[-15] = v_892;
    v_892 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    {   LispObject fn = basic_elt(env, 18); // aeval!*
    v_892 = (*qfn1(fn))(fn, v_892);
    }
    env = stack[-16];
    stack[-2] = v_892;
    goto v_246;
v_248:
v_246:
    v_892 = stack[-2];
    v_892 = add1(v_892);
    env = stack[-16];
    stack[-2] = v_892;
    goto v_219;
v_218:
    goto v_203;
v_203:
    stack[0] = basic_elt(env, 2); // bb
    v_894 = basic_elt(env, 9); // quotient
    v_893 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_892 = basic_elt(env, 1); // liemat
    v_892 = list3(v_894, v_893, v_892);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 16); // aeval
    v_892 = (*qfn1(fn))(fn, v_892);
    }
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 19); // setk
    v_892 = (*qfn2(fn))(fn, stack[0], v_892);
    }
    env = stack[-16];
    v_892 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-14] = v_892;
v_271:
    v_893 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_892 = stack[-14];
    v_892 = difference2(v_893, v_892);
    env = stack[-16];
    v_892 = Lminusp(nil, v_892);
    env = stack[-16];
    if (v_892 == nil) goto v_276;
    goto v_270;
v_276:
    v_895 = basic_elt(env, 5); // l_z
    v_894 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_893 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_892 = stack[-14];
    stack[-13] = list4(v_895, v_894, v_893, v_892);
    env = stack[-16];
    v_892 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-12] = v_892;
    v_892 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-11] = v_892;
v_292:
    v_893 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_892 = stack[-12];
    v_892 = difference2(v_893, v_892);
    env = stack[-16];
    v_892 = Lminusp(nil, v_892);
    env = stack[-16];
    if (v_892 == nil) goto v_298;
    v_892 = stack[-11];
    goto v_291;
v_298:
    stack[-10] = basic_elt(env, 10); // plus
    v_892 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-9] = v_892;
    v_892 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-8] = v_892;
v_311:
    v_893 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_892 = stack[-9];
    v_892 = difference2(v_893, v_892);
    env = stack[-16];
    v_892 = Lminusp(nil, v_892);
    env = stack[-16];
    if (v_892 == nil) goto v_317;
    v_892 = stack[-8];
    v_893 = v_892;
    goto v_310;
v_317:
    stack[-7] = basic_elt(env, 10); // plus
    v_892 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-6] = v_892;
    v_892 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-5] = v_892;
v_330:
    v_893 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_892 = stack[-6];
    v_892 = difference2(v_893, v_892);
    env = stack[-16];
    v_892 = Lminusp(nil, v_892);
    env = stack[-16];
    if (v_892 == nil) goto v_336;
    v_892 = stack[-5];
    v_893 = v_892;
    goto v_329;
v_336:
    stack[-4] = basic_elt(env, 10); // plus
    stack[-3] = basic_elt(env, 11); // times
    v_894 = basic_elt(env, 1); // liemat
    v_893 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_892 = stack[-12];
    stack[-2] = list3(v_894, v_893, v_892);
    env = stack[-16];
    v_894 = basic_elt(env, 1); // liemat
    v_893 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_892 = stack[-9];
    stack[-1] = list3(v_894, v_893, v_892);
    env = stack[-16];
    v_895 = basic_elt(env, 6); // cc
    v_894 = stack[-12];
    v_893 = stack[-9];
    v_892 = stack[-6];
    stack[0] = list4(v_895, v_894, v_893, v_892);
    env = stack[-16];
    v_894 = basic_elt(env, 2); // bb
    v_893 = stack[-6];
    v_892 = stack[-14];
    v_892 = list3(v_894, v_893, v_892);
    env = stack[-16];
    v_892 = list2(stack[0], v_892);
    env = stack[-16];
    v_892 = list3star(stack[-3], stack[-2], stack[-1], v_892);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 18); // aeval!*
    v_893 = (*qfn1(fn))(fn, v_892);
    }
    env = stack[-16];
    v_892 = stack[-5];
    v_892 = list3(stack[-4], v_893, v_892);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 18); // aeval!*
    v_892 = (*qfn1(fn))(fn, v_892);
    }
    env = stack[-16];
    stack[-5] = v_892;
    v_892 = stack[-6];
    v_892 = add1(v_892);
    env = stack[-16];
    stack[-6] = v_892;
    goto v_330;
v_329:
    v_892 = stack[-8];
    v_892 = list3(stack[-7], v_893, v_892);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 18); // aeval!*
    v_892 = (*qfn1(fn))(fn, v_892);
    }
    env = stack[-16];
    stack[-8] = v_892;
    v_892 = stack[-9];
    v_892 = add1(v_892);
    env = stack[-16];
    stack[-9] = v_892;
    goto v_311;
v_310:
    v_892 = stack[-11];
    v_892 = list3(stack[-10], v_893, v_892);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 18); // aeval!*
    v_892 = (*qfn1(fn))(fn, v_892);
    }
    env = stack[-16];
    stack[-11] = v_892;
    v_892 = stack[-12];
    v_892 = add1(v_892);
    env = stack[-16];
    stack[-12] = v_892;
    goto v_292;
v_291:
    {   LispObject fn = basic_elt(env, 19); // setk
    v_892 = (*qfn2(fn))(fn, stack[-13], v_892);
    }
    env = stack[-16];
    v_895 = basic_elt(env, 5); // l_z
    v_894 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_893 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_892 = stack[-14];
    stack[-13] = list4(v_895, v_894, v_893, v_892);
    env = stack[-16];
    v_892 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-12] = v_892;
    v_892 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-11] = v_892;
v_385:
    v_893 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_892 = stack[-12];
    v_892 = difference2(v_893, v_892);
    env = stack[-16];
    v_892 = Lminusp(nil, v_892);
    env = stack[-16];
    if (v_892 == nil) goto v_391;
    v_892 = stack[-11];
    goto v_384;
v_391:
    stack[-10] = basic_elt(env, 10); // plus
    v_892 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-9] = v_892;
    v_892 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-8] = v_892;
v_404:
    v_893 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_892 = stack[-9];
    v_892 = difference2(v_893, v_892);
    env = stack[-16];
    v_892 = Lminusp(nil, v_892);
    env = stack[-16];
    if (v_892 == nil) goto v_410;
    v_892 = stack[-8];
    v_893 = v_892;
    goto v_403;
v_410:
    stack[-7] = basic_elt(env, 10); // plus
    v_892 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-6] = v_892;
    v_892 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-5] = v_892;
v_423:
    v_893 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_892 = stack[-6];
    v_892 = difference2(v_893, v_892);
    env = stack[-16];
    v_892 = Lminusp(nil, v_892);
    env = stack[-16];
    if (v_892 == nil) goto v_429;
    v_892 = stack[-5];
    v_893 = v_892;
    goto v_422;
v_429:
    stack[-4] = basic_elt(env, 10); // plus
    stack[-3] = basic_elt(env, 11); // times
    v_894 = basic_elt(env, 1); // liemat
    v_893 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_892 = stack[-12];
    stack[-2] = list3(v_894, v_893, v_892);
    env = stack[-16];
    v_894 = basic_elt(env, 1); // liemat
    v_893 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_892 = stack[-9];
    stack[-1] = list3(v_894, v_893, v_892);
    env = stack[-16];
    v_895 = basic_elt(env, 6); // cc
    v_894 = stack[-12];
    v_893 = stack[-9];
    v_892 = stack[-6];
    stack[0] = list4(v_895, v_894, v_893, v_892);
    env = stack[-16];
    v_894 = basic_elt(env, 2); // bb
    v_893 = stack[-6];
    v_892 = stack[-14];
    v_892 = list3(v_894, v_893, v_892);
    env = stack[-16];
    v_892 = list2(stack[0], v_892);
    env = stack[-16];
    v_892 = list3star(stack[-3], stack[-2], stack[-1], v_892);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 18); // aeval!*
    v_893 = (*qfn1(fn))(fn, v_892);
    }
    env = stack[-16];
    v_892 = stack[-5];
    v_892 = list3(stack[-4], v_893, v_892);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 18); // aeval!*
    v_892 = (*qfn1(fn))(fn, v_892);
    }
    env = stack[-16];
    stack[-5] = v_892;
    v_892 = stack[-6];
    v_892 = add1(v_892);
    env = stack[-16];
    stack[-6] = v_892;
    goto v_423;
v_422:
    v_892 = stack[-8];
    v_892 = list3(stack[-7], v_893, v_892);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 18); // aeval!*
    v_892 = (*qfn1(fn))(fn, v_892);
    }
    env = stack[-16];
    stack[-8] = v_892;
    v_892 = stack[-9];
    v_892 = add1(v_892);
    env = stack[-16];
    stack[-9] = v_892;
    goto v_404;
v_403:
    v_892 = stack[-11];
    v_892 = list3(stack[-10], v_893, v_892);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 18); // aeval!*
    v_892 = (*qfn1(fn))(fn, v_892);
    }
    env = stack[-16];
    stack[-11] = v_892;
    v_892 = stack[-12];
    v_892 = add1(v_892);
    env = stack[-16];
    stack[-12] = v_892;
    goto v_385;
v_384:
    {   LispObject fn = basic_elt(env, 19); // setk
    v_892 = (*qfn2(fn))(fn, stack[-13], v_892);
    }
    env = stack[-16];
    v_895 = basic_elt(env, 5); // l_z
    v_894 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_893 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_892 = stack[-14];
    stack[-13] = list4(v_895, v_894, v_893, v_892);
    env = stack[-16];
    v_892 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-12] = v_892;
    v_892 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-11] = v_892;
v_478:
    v_893 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_892 = stack[-12];
    v_892 = difference2(v_893, v_892);
    env = stack[-16];
    v_892 = Lminusp(nil, v_892);
    env = stack[-16];
    if (v_892 == nil) goto v_484;
    v_892 = stack[-11];
    goto v_477;
v_484:
    stack[-10] = basic_elt(env, 10); // plus
    v_892 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-9] = v_892;
    v_892 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-8] = v_892;
v_497:
    v_893 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_892 = stack[-9];
    v_892 = difference2(v_893, v_892);
    env = stack[-16];
    v_892 = Lminusp(nil, v_892);
    env = stack[-16];
    if (v_892 == nil) goto v_503;
    v_892 = stack[-8];
    v_893 = v_892;
    goto v_496;
v_503:
    stack[-7] = basic_elt(env, 10); // plus
    v_892 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-6] = v_892;
    v_892 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-5] = v_892;
v_516:
    v_893 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_892 = stack[-6];
    v_892 = difference2(v_893, v_892);
    env = stack[-16];
    v_892 = Lminusp(nil, v_892);
    env = stack[-16];
    if (v_892 == nil) goto v_522;
    v_892 = stack[-5];
    v_893 = v_892;
    goto v_515;
v_522:
    stack[-4] = basic_elt(env, 10); // plus
    stack[-3] = basic_elt(env, 11); // times
    v_894 = basic_elt(env, 1); // liemat
    v_893 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_892 = stack[-12];
    stack[-2] = list3(v_894, v_893, v_892);
    env = stack[-16];
    v_894 = basic_elt(env, 1); // liemat
    v_893 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_892 = stack[-9];
    stack[-1] = list3(v_894, v_893, v_892);
    env = stack[-16];
    v_895 = basic_elt(env, 6); // cc
    v_894 = stack[-12];
    v_893 = stack[-9];
    v_892 = stack[-6];
    stack[0] = list4(v_895, v_894, v_893, v_892);
    env = stack[-16];
    v_894 = basic_elt(env, 2); // bb
    v_893 = stack[-6];
    v_892 = stack[-14];
    v_892 = list3(v_894, v_893, v_892);
    env = stack[-16];
    v_892 = list2(stack[0], v_892);
    env = stack[-16];
    v_892 = list3star(stack[-3], stack[-2], stack[-1], v_892);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 18); // aeval!*
    v_893 = (*qfn1(fn))(fn, v_892);
    }
    env = stack[-16];
    v_892 = stack[-5];
    v_892 = list3(stack[-4], v_893, v_892);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 18); // aeval!*
    v_892 = (*qfn1(fn))(fn, v_892);
    }
    env = stack[-16];
    stack[-5] = v_892;
    v_892 = stack[-6];
    v_892 = add1(v_892);
    env = stack[-16];
    stack[-6] = v_892;
    goto v_516;
v_515:
    v_892 = stack[-8];
    v_892 = list3(stack[-7], v_893, v_892);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 18); // aeval!*
    v_892 = (*qfn1(fn))(fn, v_892);
    }
    env = stack[-16];
    stack[-8] = v_892;
    v_892 = stack[-9];
    v_892 = add1(v_892);
    env = stack[-16];
    stack[-9] = v_892;
    goto v_497;
v_496:
    v_892 = stack[-11];
    v_892 = list3(stack[-10], v_893, v_892);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 18); // aeval!*
    v_892 = (*qfn1(fn))(fn, v_892);
    }
    env = stack[-16];
    stack[-11] = v_892;
    v_892 = stack[-12];
    v_892 = add1(v_892);
    env = stack[-16];
    stack[-12] = v_892;
    goto v_478;
v_477:
    {   LispObject fn = basic_elt(env, 19); // setk
    v_892 = (*qfn2(fn))(fn, stack[-13], v_892);
    }
    env = stack[-16];
    v_895 = basic_elt(env, 5); // l_z
    v_894 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_893 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_892 = stack[-14];
    stack[-9] = list4(v_895, v_894, v_893, v_892);
    env = stack[-16];
    v_892 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-8] = v_892;
    v_892 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-7] = v_892;
v_571:
    v_893 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_892 = stack[-8];
    v_892 = difference2(v_893, v_892);
    env = stack[-16];
    v_892 = Lminusp(nil, v_892);
    env = stack[-16];
    if (v_892 == nil) goto v_577;
    v_892 = stack[-7];
    goto v_570;
v_577:
    stack[-6] = basic_elt(env, 10); // plus
    v_892 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-5] = v_892;
    v_892 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-4] = v_892;
v_590:
    v_893 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_892 = stack[-5];
    v_892 = difference2(v_893, v_892);
    env = stack[-16];
    v_892 = Lminusp(nil, v_892);
    env = stack[-16];
    if (v_892 == nil) goto v_596;
    v_892 = stack[-4];
    v_893 = v_892;
    goto v_589;
v_596:
    stack[-3] = basic_elt(env, 10); // plus
    stack[-2] = basic_elt(env, 11); // times
    v_894 = basic_elt(env, 1); // liemat
    v_893 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_892 = stack[-8];
    stack[-1] = list3(v_894, v_893, v_892);
    env = stack[-16];
    v_895 = basic_elt(env, 6); // cc
    v_894 = stack[-8];
    v_893 = stack[-15];
    v_892 = stack[-5];
    stack[0] = list4(v_895, v_894, v_893, v_892);
    env = stack[-16];
    v_894 = basic_elt(env, 2); // bb
    v_893 = stack[-5];
    v_892 = stack[-14];
    v_892 = list3(v_894, v_893, v_892);
    env = stack[-16];
    v_892 = list4(stack[-2], stack[-1], stack[0], v_892);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 18); // aeval!*
    v_893 = (*qfn1(fn))(fn, v_892);
    }
    env = stack[-16];
    v_892 = stack[-4];
    v_892 = list3(stack[-3], v_893, v_892);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 18); // aeval!*
    v_892 = (*qfn1(fn))(fn, v_892);
    }
    env = stack[-16];
    stack[-4] = v_892;
    v_892 = stack[-5];
    v_892 = add1(v_892);
    env = stack[-16];
    stack[-5] = v_892;
    goto v_590;
v_589:
    v_892 = stack[-7];
    v_892 = list3(stack[-6], v_893, v_892);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 18); // aeval!*
    v_892 = (*qfn1(fn))(fn, v_892);
    }
    env = stack[-16];
    stack[-7] = v_892;
    v_892 = stack[-8];
    v_892 = add1(v_892);
    env = stack[-16];
    stack[-8] = v_892;
    goto v_571;
v_570:
    {   LispObject fn = basic_elt(env, 19); // setk
    v_892 = (*qfn2(fn))(fn, stack[-9], v_892);
    }
    env = stack[-16];
    v_895 = basic_elt(env, 5); // l_z
    v_894 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_893 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_892 = stack[-14];
    stack[-9] = list4(v_895, v_894, v_893, v_892);
    env = stack[-16];
    v_892 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-8] = v_892;
    v_892 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-7] = v_892;
v_637:
    v_893 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_892 = stack[-8];
    v_892 = difference2(v_893, v_892);
    env = stack[-16];
    v_892 = Lminusp(nil, v_892);
    env = stack[-16];
    if (v_892 == nil) goto v_643;
    v_892 = stack[-7];
    goto v_636;
v_643:
    stack[-6] = basic_elt(env, 10); // plus
    v_892 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-5] = v_892;
    v_892 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-4] = v_892;
v_656:
    v_893 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_892 = stack[-5];
    v_892 = difference2(v_893, v_892);
    env = stack[-16];
    v_892 = Lminusp(nil, v_892);
    env = stack[-16];
    if (v_892 == nil) goto v_662;
    v_892 = stack[-4];
    v_893 = v_892;
    goto v_655;
v_662:
    stack[-3] = basic_elt(env, 10); // plus
    stack[-2] = basic_elt(env, 11); // times
    v_894 = basic_elt(env, 1); // liemat
    v_893 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_892 = stack[-8];
    stack[-1] = list3(v_894, v_893, v_892);
    env = stack[-16];
    v_895 = basic_elt(env, 6); // cc
    v_894 = stack[-8];
    v_893 = stack[-15];
    v_892 = stack[-5];
    stack[0] = list4(v_895, v_894, v_893, v_892);
    env = stack[-16];
    v_894 = basic_elt(env, 2); // bb
    v_893 = stack[-5];
    v_892 = stack[-14];
    v_892 = list3(v_894, v_893, v_892);
    env = stack[-16];
    v_892 = list4(stack[-2], stack[-1], stack[0], v_892);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 18); // aeval!*
    v_893 = (*qfn1(fn))(fn, v_892);
    }
    env = stack[-16];
    v_892 = stack[-4];
    v_892 = list3(stack[-3], v_893, v_892);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 18); // aeval!*
    v_892 = (*qfn1(fn))(fn, v_892);
    }
    env = stack[-16];
    stack[-4] = v_892;
    v_892 = stack[-5];
    v_892 = add1(v_892);
    env = stack[-16];
    stack[-5] = v_892;
    goto v_656;
v_655:
    v_892 = stack[-7];
    v_892 = list3(stack[-6], v_893, v_892);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 18); // aeval!*
    v_892 = (*qfn1(fn))(fn, v_892);
    }
    env = stack[-16];
    stack[-7] = v_892;
    v_892 = stack[-8];
    v_892 = add1(v_892);
    env = stack[-16];
    stack[-8] = v_892;
    goto v_637;
v_636:
    {   LispObject fn = basic_elt(env, 19); // setk
    v_892 = (*qfn2(fn))(fn, stack[-9], v_892);
    }
    env = stack[-16];
    v_895 = basic_elt(env, 5); // l_z
    v_894 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_893 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_892 = stack[-14];
    stack[-9] = list4(v_895, v_894, v_893, v_892);
    env = stack[-16];
    v_892 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-8] = v_892;
    v_892 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-7] = v_892;
v_703:
    v_893 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_892 = stack[-8];
    v_892 = difference2(v_893, v_892);
    env = stack[-16];
    v_892 = Lminusp(nil, v_892);
    env = stack[-16];
    if (v_892 == nil) goto v_709;
    v_892 = stack[-7];
    goto v_702;
v_709:
    stack[-6] = basic_elt(env, 10); // plus
    v_892 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-5] = v_892;
    v_892 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-4] = v_892;
v_722:
    v_893 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_892 = stack[-5];
    v_892 = difference2(v_893, v_892);
    env = stack[-16];
    v_892 = Lminusp(nil, v_892);
    env = stack[-16];
    if (v_892 == nil) goto v_728;
    v_892 = stack[-4];
    v_893 = v_892;
    goto v_721;
v_728:
    stack[-3] = basic_elt(env, 10); // plus
    stack[-2] = basic_elt(env, 11); // times
    v_894 = basic_elt(env, 1); // liemat
    v_893 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_892 = stack[-8];
    stack[-1] = list3(v_894, v_893, v_892);
    env = stack[-16];
    v_895 = basic_elt(env, 6); // cc
    v_894 = stack[-8];
    v_893 = stack[-15];
    v_892 = stack[-5];
    stack[0] = list4(v_895, v_894, v_893, v_892);
    env = stack[-16];
    v_894 = basic_elt(env, 2); // bb
    v_893 = stack[-5];
    v_892 = stack[-14];
    v_892 = list3(v_894, v_893, v_892);
    env = stack[-16];
    v_892 = list4(stack[-2], stack[-1], stack[0], v_892);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 18); // aeval!*
    v_893 = (*qfn1(fn))(fn, v_892);
    }
    env = stack[-16];
    v_892 = stack[-4];
    v_892 = list3(stack[-3], v_893, v_892);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 18); // aeval!*
    v_892 = (*qfn1(fn))(fn, v_892);
    }
    env = stack[-16];
    stack[-4] = v_892;
    v_892 = stack[-5];
    v_892 = add1(v_892);
    env = stack[-16];
    stack[-5] = v_892;
    goto v_722;
v_721:
    v_892 = stack[-7];
    v_892 = list3(stack[-6], v_893, v_892);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 18); // aeval!*
    v_892 = (*qfn1(fn))(fn, v_892);
    }
    env = stack[-16];
    stack[-7] = v_892;
    v_892 = stack[-8];
    v_892 = add1(v_892);
    env = stack[-16];
    stack[-8] = v_892;
    goto v_703;
v_702:
    {   LispObject fn = basic_elt(env, 19); // setk
    v_892 = (*qfn2(fn))(fn, stack[-9], v_892);
    }
    env = stack[-16];
    v_892 = stack[-14];
    v_892 = add1(v_892);
    env = stack[-16];
    stack[-14] = v_892;
    goto v_271;
v_270:
    v_892 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-1] = v_892;
v_764:
    v_893 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_892 = stack[-1];
    v_892 = difference2(v_893, v_892);
    env = stack[-16];
    v_892 = Lminusp(nil, v_892);
    env = stack[-16];
    if (v_892 == nil) goto v_769;
    goto v_763;
v_769:
    v_894 = basic_elt(env, 3); // ff
    v_893 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_892 = stack[-1];
    stack[0] = list3(v_894, v_893, v_892);
    env = stack[-16];
    v_895 = basic_elt(env, 5); // l_z
    v_894 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_893 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_892 = stack[-1];
    v_892 = list4(v_895, v_894, v_893, v_892);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 18); // aeval!*
    v_892 = (*qfn1(fn))(fn, v_892);
    }
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 19); // setk
    v_892 = (*qfn2(fn))(fn, stack[0], v_892);
    }
    env = stack[-16];
    v_894 = basic_elt(env, 3); // ff
    v_893 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_892 = stack[-1];
    stack[0] = list3(v_894, v_893, v_892);
    env = stack[-16];
    v_895 = basic_elt(env, 5); // l_z
    v_894 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_893 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_892 = stack[-1];
    v_892 = list4(v_895, v_894, v_893, v_892);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 18); // aeval!*
    v_892 = (*qfn1(fn))(fn, v_892);
    }
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 19); // setk
    v_892 = (*qfn2(fn))(fn, stack[0], v_892);
    }
    env = stack[-16];
    v_894 = basic_elt(env, 3); // ff
    v_893 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_892 = stack[-1];
    stack[0] = list3(v_894, v_893, v_892);
    env = stack[-16];
    v_895 = basic_elt(env, 5); // l_z
    v_894 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_893 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_892 = stack[-1];
    v_892 = list4(v_895, v_894, v_893, v_892);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 18); // aeval!*
    v_892 = (*qfn1(fn))(fn, v_892);
    }
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 19); // setk
    v_892 = (*qfn2(fn))(fn, stack[0], v_892);
    }
    env = stack[-16];
    v_892 = stack[-1];
    v_892 = add1(v_892);
    env = stack[-16];
    stack[-1] = v_892;
    goto v_764;
v_763:
    v_892 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {   LispObject fn = basic_elt(env, 16); // aeval
    v_892 = (*qfn1(fn))(fn, v_892);
    }
    env = stack[-16];
    stack[-15] = v_892;
    v_892 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-1] = v_892;
v_815:
    v_893 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_892 = stack[-1];
    v_892 = difference2(v_893, v_892);
    env = stack[-16];
    v_892 = Lminusp(nil, v_892);
    env = stack[-16];
    if (v_892 == nil) goto v_820;
    goto v_814;
v_820:
    v_892 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[0] = v_892;
v_829:
    v_893 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_892 = stack[0];
    v_892 = difference2(v_893, v_892);
    env = stack[-16];
    v_892 = Lminusp(nil, v_892);
    env = stack[-16];
    if (v_892 == nil) goto v_834;
    goto v_828;
v_834:
    v_894 = basic_elt(env, 3); // ff
    v_893 = stack[-1];
    v_892 = stack[0];
    v_892 = list3(v_894, v_893, v_892);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 18); // aeval!*
    v_893 = (*qfn1(fn))(fn, v_892);
    }
    env = stack[-16];
    v_892 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {   LispObject fn = basic_elt(env, 20); // evalneq
    v_892 = (*qfn2(fn))(fn, v_893, v_892);
    }
    env = stack[-16];
    if (v_892 == nil) goto v_843;
    v_892 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 18); // aeval!*
    v_892 = (*qfn1(fn))(fn, v_892);
    }
    env = stack[-16];
    stack[-15] = v_892;
    v_892 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    {   LispObject fn = basic_elt(env, 18); // aeval!*
    v_892 = (*qfn1(fn))(fn, v_892);
    }
    env = stack[-16];
    stack[-1] = v_892;
    v_892 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    {   LispObject fn = basic_elt(env, 18); // aeval!*
    v_892 = (*qfn1(fn))(fn, v_892);
    }
    env = stack[-16];
    stack[0] = v_892;
    goto v_841;
v_843:
v_841:
    v_892 = stack[0];
    v_892 = add1(v_892);
    env = stack[-16];
    stack[0] = v_892;
    goto v_829;
v_828:
    v_892 = stack[-1];
    v_892 = add1(v_892);
    env = stack[-16];
    stack[-1] = v_892;
    goto v_815;
v_814:
    v_893 = stack[-15];
    v_892 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_893 == v_892) goto v_863;
    else goto v_864;
v_863:
    v_892 = basic_elt(env, 12); // comcom0
    v_892 = ncons(v_892);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 16); // aeval
    v_892 = (*qfn1(fn))(fn, v_892);
    }
    env = stack[-16];
    goto v_862;
v_864:
    v_893 = basic_elt(env, 8); // det
    v_892 = basic_elt(env, 3); // ff
    v_892 = list2(v_893, v_892);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 16); // aeval
    v_893 = (*qfn1(fn))(fn, v_892);
    }
    env = stack[-16];
    v_892 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {   LispObject fn = basic_elt(env, 21); // evalequal
    v_892 = (*qfn2(fn))(fn, v_893, v_892);
    }
    env = stack[-16];
    if (v_892 == nil) goto v_871;
    v_892 = basic_elt(env, 13); // comcom1
    v_892 = ncons(v_892);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 16); // aeval
    v_892 = (*qfn1(fn))(fn, v_892);
    }
    env = stack[-16];
    goto v_862;
v_871:
    v_892 = basic_elt(env, 14); // comcom3
    v_892 = ncons(v_892);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 16); // aeval
    v_892 = (*qfn1(fn))(fn, v_892);
    }
    env = stack[-16];
    goto v_862;
v_862:
    v_894 = basic_elt(env, 2); // bb
    v_893 = basic_elt(env, 3); // ff
    v_892 = basic_elt(env, 5); // l_z
    v_892 = list3(v_894, v_893, v_892);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 22); // clear
    v_892 = (*qfn1(fn))(fn, v_892);
    }
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 16); // aeval
    v_892 = (*qfn1(fn))(fn, v_892);
    }
    v_892 = nil;
    return onevalue(v_892);
}



// Code for affinep

static LispObject CC_affinep(LispObject env,
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
    if (!car_legal(v_17)) v_18 = carerror(v_17); else
    v_18 = car(v_17);
    v_17 = basic_elt(env, 1); // belong_to_space
    v_17 = get(v_18, v_17);
    env = stack[0];
    v_18 = v_17;
    v_17 = v_18;
    if (v_17 == nil) goto v_12;
    v_17 = v_18;
    {   LispObject fn = basic_elt(env, 2); // get_sign_space
    v_17 = (*qfn1(fn))(fn, v_17);
    }
    v_17 = (v_17 == nil ? lisp_true : nil);
    goto v_10;
v_12:
    v_17 = nil;
v_10:
    return onevalue(v_17);
}



// Code for deg

static LispObject CC_deg(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    v_19 = qvalue(basic_elt(env, 1)); // gdmode!*
// Binding dmode!*
// FLUIDBIND: reloadenv=3 litvec-offset=2 saveloc=2
{   bind_fluid_stack bind_fluid_var(-3, 2, -2);
    setvalue(basic_elt(env, 2), v_19); // dmode!*
    v_19 = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // simp!*
    v_19 = (*qfn1(fn))(fn, v_19);
    }
    env = stack[-3];
    stack[-1] = v_19;
    v_19 = stack[-1];
    if (!car_legal(v_19)) v_20 = cdrerror(v_19); else
    v_20 = cdr(v_19);
    v_19 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // tstpolyarg
    v_19 = (*qfn2(fn))(fn, v_20, v_19);
    }
    env = stack[-3];
    v_19 = stack[-1];
    if (!car_legal(v_19)) v_20 = carerror(v_19); else
    v_20 = car(v_19);
    v_19 = stack[0];
    {   LispObject fn = basic_elt(env, 5); // numrdeg
    v_19 = (*qfn2(fn))(fn, v_20, v_19);
    }
    ;}  // end of a binding scope
    return onevalue(v_19);
}



// Code for odd_action

static LispObject CC_odd_action(LispObject env,
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
    real_push(nil, nil, nil, nil, nil);
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(10);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-7] = v_2;
// end of prologue
    v_82 = nil;
    v_81 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_81 = cons(v_82, v_81);
    env = stack[-9];
    stack[-1] = v_81;
    v_81 = stack[0];
    stack[-4] = v_81;
v_19:
    v_81 = stack[-4];
    if (v_81 == nil) goto v_23;
    else goto v_24;
v_23:
    goto v_18;
v_24:
    v_81 = stack[-4];
    if (!car_legal(v_81)) v_81 = carerror(v_81); else
    v_81 = car(v_81);
    v_82 = v_81;
    v_81 = v_82;
    if (!car_legal(v_81)) v_81 = carerror(v_81); else
    v_81 = car(v_81);
    stack[-6] = v_81;
    v_81 = v_82;
    if (!car_legal(v_81)) v_82 = cdrerror(v_81); else
    v_82 = cdr(v_81);
    v_81 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_81 = cons(v_82, v_81);
    env = stack[-9];
    stack[-5] = v_81;
    v_81 = lisp_true;
    stack[-8] = v_81;
    v_81 = stack[-6];
    if (!car_legal(v_81)) v_81 = cdrerror(v_81); else
    v_81 = cdr(v_81);
    stack[-3] = v_81;
v_40:
    v_81 = stack[-3];
    if (v_81 == nil) goto v_45;
    else goto v_46;
v_45:
    goto v_39;
v_46:
    v_81 = stack[-3];
    if (!car_legal(v_81)) v_81 = carerror(v_81); else
    v_81 = car(v_81);
    stack[0] = v_81;
    v_81 = stack[-8];
    v_81 = (v_81 == nil ? lisp_true : nil);
    stack[-8] = v_81;
    v_82 = stack[0];
    v_81 = stack[-6];
    v_81 = Ldelete(nil, v_82, v_81);
    env = stack[-9];
    {   LispObject fn = basic_elt(env, 1); // !*a2k
    v_81 = (*qfn1(fn))(fn, v_81);
    }
    env = stack[-9];
    v_83 = v_81;
    v_82 = stack[0];
    v_81 = stack[-7];
    v_81 = Lassoc(nil, v_82, v_81);
    stack[-2] = stack[-1];
    stack[-1] = v_81;
    stack[0] = v_83;
    v_81 = stack[-8];
    if (v_81 == nil) goto v_69;
    v_81 = stack[-5];
    {   LispObject fn = basic_elt(env, 2); // negsq
    v_81 = (*qfn1(fn))(fn, v_81);
    }
    env = stack[-9];
    goto v_67;
v_69:
    v_81 = stack[-5];
    goto v_67;
    v_81 = nil;
v_67:
    {   LispObject fn = basic_elt(env, 3); // component_action
    v_81 = (*qfn3(fn))(fn, stack[-1], stack[0], v_81);
    }
    env = stack[-9];
    {   LispObject fn = basic_elt(env, 4); // addsq
    v_81 = (*qfn2(fn))(fn, stack[-2], v_81);
    }
    env = stack[-9];
    stack[-1] = v_81;
    v_81 = stack[-3];
    if (!car_legal(v_81)) v_81 = cdrerror(v_81); else
    v_81 = cdr(v_81);
    stack[-3] = v_81;
    goto v_40;
v_39:
    v_81 = stack[-4];
    if (!car_legal(v_81)) v_81 = cdrerror(v_81); else
    v_81 = cdr(v_81);
    stack[-4] = v_81;
    goto v_19;
v_18:
    v_81 = stack[-1];
    return onevalue(v_81);
}



// Code for ra_onep

static LispObject CC_ra_onep(LispObject env,
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
    stack[0] = basic_elt(env, 1); // ra_onep0
    v_8 = ncons(v_8);
    env = stack[-1];
    {
        LispObject v_10 = stack[0];
        LispObject fn = basic_elt(env, 2); // ra_wrapper
        return (*qfn2(fn))(fn, v_10, v_8);
    }
}



// Code for aex_diff

static LispObject CC_aex_diff(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // aex_ex
    v_21 = (*qfn1(fn))(fn, v_20);
    }
    env = stack[-3];
    v_20 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // diffsq
    v_20 = (*qfn2(fn))(fn, v_21, v_20);
    }
    env = stack[-3];
    stack[-2] = v_20;
    if (!car_legal(v_20)) v_20 = carerror(v_20); else
    v_20 = car(v_20);
    {   LispObject fn = basic_elt(env, 3); // kernels
    stack[0] = (*qfn1(fn))(fn, v_20);
    }
    env = stack[-3];
    v_20 = stack[-1];
    {   LispObject fn = basic_elt(env, 4); // aex_ctx
    v_20 = (*qfn1(fn))(fn, v_20);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 5); // ctx_filter
    v_20 = (*qfn2(fn))(fn, stack[0], v_20);
    }
    env = stack[-3];
    {
        LispObject v_25 = stack[-2];
        LispObject fn = basic_elt(env, 6); // aex_mk
        return (*qfn2(fn))(fn, v_25, v_20);
    }
    return onevalue(v_20);
}



// Code for lto_hentry

static LispObject CC_lto_hentry(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
        push(v_2,v_3,v_4);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_4,v_3,v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    v_27 = v_4;
    v_28 = v_3;
    v_29 = v_2;
// end of prologue
    v_26 = v_28;
    if (v_26 == nil) goto v_8;
    else goto v_9;
v_8:
    v_28 = v_29;
    v_26 = nil;
    return list2star(v_28, v_27, v_26);
v_9:
    stack[0] = v_29;
    v_26 = v_28;
    if (!car_legal(v_26)) v_26 = carerror(v_26); else
    v_26 = car(v_26);
    if (!car_legal(v_28)) v_28 = cdrerror(v_28); else
    v_28 = cdr(v_28);
    {   LispObject fn = basic_elt(env, 0); // lto_hentry
    v_27 = (*qfn3(fn))(fn, v_26, v_28, v_27);
    }
    v_26 = nil;
    {
        LispObject v_31 = stack[0];
        return list2star(v_31, v_27, v_26);
    }
    v_26 = nil;
    return onevalue(v_26);
}



// Code for put!-avalue

static LispObject CC_putKavalue(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    stack[-2] = v_3;
    stack[0] = v_2;
// end of prologue
    v_64 = stack[-2];
    v_63 = basic_elt(env, 1); // scalar
    if (v_64 == v_63) goto v_8;
    else goto v_9;
v_8:
    v_64 = stack[-1];
    v_63 = basic_elt(env, 2); // !*sq
    if (!consp(v_64)) goto v_19;
    v_64 = car(v_64);
    if (v_64 == v_63) goto v_18;
    else goto v_19;
v_18:
    v_64 = stack[0];
    v_63 = stack[-1];
    if (!car_legal(v_63)) v_63 = cdrerror(v_63); else
    v_63 = cdr(v_63);
    if (!car_legal(v_63)) v_63 = carerror(v_63); else
    v_63 = car(v_63);
    {   LispObject fn = basic_elt(env, 6); // sq_member
    v_63 = (*qfn2(fn))(fn, v_64, v_63);
    }
    env = stack[-4];
    goto v_17;
v_19:
    v_63 = nil;
    goto v_17;
    v_63 = nil;
v_17:
    if (v_63 == nil) goto v_15;
    v_63 = stack[0];
    {
        LispObject fn = basic_elt(env, 7); // recursiveerror
        return (*qfn1(fn))(fn, v_63);
    }
v_15:
    v_63 = qvalue(basic_elt(env, 3)); // !*reduce4
    if (v_63 == nil) goto v_34;
    v_65 = stack[0];
    v_64 = stack[-1];
    v_63 = basic_elt(env, 4); // generic
    {
        LispObject fn = basic_elt(env, 8); // putobject
        return (*qfn3(fn))(fn, v_65, v_64, v_63);
    }
v_34:
    stack[-3] = stack[0];
    stack[0] = basic_elt(env, 5); // avalue
    v_64 = stack[-2];
    v_63 = stack[-1];
    v_63 = list2(v_64, v_63);
    {
        LispObject v_70 = stack[-3];
        LispObject v_71 = stack[0];
        return Lputprop(nil, v_70, v_71, v_63);
    }
    v_63 = nil;
    goto v_7;
v_9:
    v_64 = stack[0];
    v_63 = stack[-1];
    {   LispObject fn = basic_elt(env, 9); // smember
    v_63 = (*qfn2(fn))(fn, v_64, v_63);
    }
    env = stack[-4];
    if (v_63 == nil) goto v_49;
    v_63 = stack[0];
    {
        LispObject fn = basic_elt(env, 7); // recursiveerror
        return (*qfn1(fn))(fn, v_63);
    }
v_49:
    stack[-3] = stack[0];
    stack[0] = basic_elt(env, 5); // avalue
    v_64 = stack[-2];
    v_63 = stack[-1];
    v_63 = list2(v_64, v_63);
    {
        LispObject v_72 = stack[-3];
        LispObject v_73 = stack[0];
        return Lputprop(nil, v_72, v_73, v_63);
    }
    v_63 = nil;
v_7:
    return onevalue(v_63);
}



// Code for talp_prepat

static LispObject CC_talp_prepat(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[-1] = v_2;
// end of prologue
    v_21 = stack[-1];
    if (v_21 == nil) goto v_7;
    v_21 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // talp_op
    stack[-2] = (*qfn1(fn))(fn, v_21);
    }
    env = stack[-3];
    v_21 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // talp_arg2l
    v_21 = (*qfn1(fn))(fn, v_21);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 3); // talp_prepterm
    stack[0] = (*qfn1(fn))(fn, v_21);
    }
    env = stack[-3];
    v_21 = stack[-1];
    {   LispObject fn = basic_elt(env, 4); // talp_arg2r
    v_21 = (*qfn1(fn))(fn, v_21);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 3); // talp_prepterm
    v_21 = (*qfn1(fn))(fn, v_21);
    }
    {
        LispObject v_25 = stack[-2];
        LispObject v_26 = stack[0];
        return list3(v_25, v_26, v_21);
    }
v_7:
    v_21 = stack[-1];
    goto v_5;
    v_21 = nil;
v_5:
    return onevalue(v_21);
}



setup_type const u58_setup[] =
{
    {"sc_repkern",              G0W2,     G1W2,     CC_sc_repkern,G3W2, G4W2},
    {"lambda_1x539vlzlwg93",    G0W2,     G1W2,     CC_lambda_1x539vlzlwg93,G3W2,G4W2},
    {"super_product_sq",        G0W2,     G1W2,     CC_super_product_sq,G3W2,G4W2},
    {"setqdeletedescendants",   G0W1,     CC_setqdeletedescendants,G2W1,G3W1,G4W1},
    {"ofsf_ordrelp",            G0W2,     G1W2,     CC_ofsf_ordrelp,G3W2,G4W2},
    {"yetunknowntypeeval",      G0W2,     G1W2,     CC_yetunknowntypeeval,G3W2,G4W2},
    {"let0",                    G0W1,     CC_let0,  G2W1,     G3W1,     G4W1},
    {"get_rep_matrix_entry",    G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_get_rep_matrix_entry},
    {"mri_dettype",             G0W1,     CC_mri_dettype,G2W1,G3W1,     G4W1},
    {"qqe_length-graph-remove-mark",G0W2, G1W2,     CC_qqe_lengthKgraphKremoveKmark,G3W2,G4W2},
    {"aex_fromsf",              G0W1,     CC_aex_fromsf,G2W1, G3W1,     G4W1},
    {"ps:expansion-point",      G0W1,     CC_psTexpansionKpoint,G2W1,G3W1,G4W1},
    {"nestprep:",               G0W1,     CC_nestprepT,G2W1,  G3W1,     G4W1},
    {"bfdivide",                G0W2,     G1W2,     CC_bfdivide,G3W2,   G4W2},
    {"calc_map_",               G0W2,     G1W2,     CC_calc_map_,G3W2,  G4W2},
    {"rappend",                 G0W1,     CC_rappend,G2W1,    G3W1,     G4W1},
    {"formclear",               G0W3,     G1W3,     G2W3,     CC_formclear,G4W3},
    {"partsym_zerop",           G0W2,     G1W2,     CC_partsym_zerop,G3W2,G4W2},
    {"modroots2",               G0W3,     G1W3,     G2W3,     CC_modroots2,G4W3},
    {"r2flbf",                  G0W1,     CC_r2flbf,G2W1,     G3W1,     G4W1},
    {"order_of_der",            G0W2,     G1W2,     CC_order_of_der,G3W2,G4W2},
    {"talp_gaussand",           G0W3,     G1W3,     G2W3,     CC_talp_gaussand,G4W3},
    {"rl_b2atl",                G0W2,     G1W2,     CC_rl_b2atl,G3W2,   G4W2},
    {"rat_0",                   CC_rat_0, G1W0,     G2W0,     G3W0,     G4W0},
    {"ldt-dep",                 G0W1,     CC_ldtKdep,G2W1,    G3W1,     G4W1},
    {"pm:gensym",               CC_pmTgensym,G1W0,  G2W0,     G3W0,     G4W0},
    {"groebsimpcontnormalform", G0W1,     CC_groebsimpcontnormalform,G2W1,G3W1,G4W1},
    {":quotient",               G0W2,     G1W2,     CC_Tquotient,G3W2,  G4W2},
    {"matcheq",                 G0W2,     G1W2,     CC_matcheq,G3W2,    G4W2},
    {"tot-asym-indp",           G0W1,     CC_totKasymKindp,G2W1,G3W1,   G4W1},
    {"*s2arg",                  G0W2,     G1W2,     CC_Hs2arg,G3W2,     G4W2},
    {"com43",                   G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_com43},
    {"affinep",                 G0W1,     CC_affinep,G2W1,    G3W1,     G4W1},
    {"deg",                     G0W2,     G1W2,     CC_deg,   G3W2,     G4W2},
    {"odd_action",              G0W2,     G1W2,     CC_odd_action,G3W2, G4W2},
    {"ra_onep",                 G0W1,     CC_ra_onep,G2W1,    G3W1,     G4W1},
    {"aex_diff",                G0W2,     G1W2,     CC_aex_diff,G3W2,   G4W2},
    {"lto_hentry",              G0W3,     G1W3,     G2W3,     CC_lto_hentry,G4W3},
    {"put-avalue",              G0W3,     G1W3,     G2W3,     CC_putKavalue,G4W3},
    {"talp_prepat",             G0W1,     CC_talp_prepat,G2W1,G3W1,     G4W1},
    {nullptr, 
        reinterpret_cast<no_args *>(
            reinterpret_cast<uintptr_t>("u58")),
        reinterpret_cast<one_arg *>(
            reinterpret_cast<uintptr_t>("167482 1588833 6511275")),
        nullptr, nullptr, nullptr}
};

// end of generated code
