
// $destdir/u59.c        Machine generated C code

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


// Code for pasf_premf1

static LispObject CC_pasf_premf1(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_67, v_68;
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
    v_67 = stack[-3];
    if (!consp(v_67)) goto v_17;
    else goto v_18;
v_17:
    v_67 = lisp_true;
    goto v_16;
v_18:
    v_67 = stack[-3];
    if (!car_legal(v_67)) v_67 = carerror(v_67); else
    v_67 = car(v_67);
    v_67 = (consp(v_67) ? nil : lisp_true);
    goto v_16;
    v_67 = nil;
v_16:
    if (v_67 == nil) goto v_14;
    v_67 = stack[-3];
    {   LispObject fn = basic_elt(env, 1); // minusf
    v_67 = (*qfn1(fn))(fn, v_67);
    }
    env = stack[-5];
    if (v_67 == nil) goto v_29;
    v_68 = stack[-3];
    v_67 = stack[-2];
    {
        LispObject fn = basic_elt(env, 2); // addf
        return (*qfn2(fn))(fn, v_68, v_67);
    }
v_29:
    v_67 = stack[-3];
    goto v_27;
    v_67 = nil;
v_27:
    goto v_10;
v_14:
    v_67 = stack[-3];
    if (!car_legal(v_67)) v_67 = carerror(v_67); else
    v_67 = car(v_67);
    if (!car_legal(v_67)) v_68 = cdrerror(v_67); else
    v_68 = cdr(v_67);
    v_67 = stack[-2];
    {   LispObject fn = basic_elt(env, 0); // pasf_premf1
    v_67 = (*qfn2(fn))(fn, v_68, v_67);
    }
    env = stack[-5];
    stack[-4] = v_67;
    v_67 = stack[-3];
    if (!car_legal(v_67)) v_67 = carerror(v_67); else
    v_67 = car(v_67);
    if (!car_legal(v_67)) v_67 = carerror(v_67); else
    v_67 = car(v_67);
    if (!car_legal(v_67)) v_68 = carerror(v_67); else
    v_68 = car(v_67);
    v_67 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 3); // to
    v_68 = (*qfn2(fn))(fn, v_68, v_67);
    }
    env = stack[-5];
    v_67 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_67 = cons(v_68, v_67);
    env = stack[-5];
    v_67 = ncons(v_67);
    env = stack[-5];
    stack[-1] = v_67;
    v_67 = stack[-3];
    if (!car_legal(v_67)) v_67 = carerror(v_67); else
    v_67 = car(v_67);
    if (!car_legal(v_67)) v_67 = carerror(v_67); else
    v_67 = car(v_67);
    if (!car_legal(v_67)) v_67 = cdrerror(v_67); else
    v_67 = cdr(v_67);
    stack[0] = v_67;
    v_67 = stack[-3];
    if (!car_legal(v_67)) v_68 = cdrerror(v_67); else
    v_68 = cdr(v_67);
    v_67 = stack[-2];
    {   LispObject fn = basic_elt(env, 0); // pasf_premf1
    v_67 = (*qfn2(fn))(fn, v_68, v_67);
    }
    env = stack[-5];
    stack[-2] = v_67;
    stack[-3] = stack[-4];
    v_68 = stack[-1];
    v_67 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // exptf
    v_67 = (*qfn2(fn))(fn, v_68, v_67);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 5); // multf
    v_68 = (*qfn2(fn))(fn, stack[-3], v_67);
    }
    env = stack[-5];
    v_67 = stack[-2];
    {
        LispObject fn = basic_elt(env, 2); // addf
        return (*qfn2(fn))(fn, v_68, v_67);
    }
v_10:
    return onevalue(v_67);
}



// Code for search4facf

static LispObject CC_search4facf(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_45, v_46;
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
    v_45 = stack[-3];
    if (v_45 == nil) goto v_8;
    else goto v_9;
v_8:
    v_46 = stack[-4];
    v_45 = stack[-2];
    {
        LispObject fn = basic_elt(env, 1); // tryfactorf
        return (*qfn2(fn))(fn, v_46, v_45);
    }
v_9:
    v_45 = stack[-3];
    if (!car_legal(v_45)) v_45 = carerror(v_45); else
    v_45 = car(v_45);
    stack[-5] = v_45;
v_20:
    v_45 = stack[-5];
    if (v_45 == nil) goto v_25;
    else goto v_26;
v_25:
    v_45 = nil;
    goto v_19;
v_26:
    stack[-1] = stack[-4];
    v_45 = stack[-3];
    if (!car_legal(v_45)) stack[0] = cdrerror(v_45); else
    stack[0] = cdr(v_45);
    v_45 = stack[-5];
    if (!car_legal(v_45)) v_46 = carerror(v_45); else
    v_46 = car(v_45);
    v_45 = stack[-2];
    v_45 = cons(v_46, v_45);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 0); // search4facf
    v_45 = (*qfn3(fn))(fn, stack[-1], stack[0], v_45);
    }
    env = stack[-6];
    v_46 = v_45;
    v_45 = v_46;
    if (v_45 == nil) goto v_39;
    else goto v_40;
v_39:
    v_45 = stack[-5];
    if (!car_legal(v_45)) v_45 = cdrerror(v_45); else
    v_45 = cdr(v_45);
    stack[-5] = v_45;
    goto v_20;
v_40:
    v_45 = v_46;
v_19:
    goto v_7;
    v_45 = nil;
v_7:
    return onevalue(v_45);
}



// Code for frlp

static LispObject CC_frlp(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_26, v_27, v_28;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_27 = v_2;
// end of prologue
v_1:
    v_26 = v_27;
    if (v_26 == nil) goto v_6;
    else goto v_7;
v_6:
    v_26 = lisp_true;
    goto v_5;
v_7:
    v_26 = v_27;
    if (!car_legal(v_26)) v_28 = carerror(v_26); else
    v_28 = car(v_26);
    v_26 = qvalue(basic_elt(env, 1)); // frlis!*
    v_26 = Lmemq(nil, v_28, v_26);
    if (v_26 == nil) goto v_14;
    else goto v_15;
v_14:
    v_26 = nil;
    goto v_13;
v_15:
    v_26 = v_27;
    if (!car_legal(v_26)) v_26 = cdrerror(v_26); else
    v_26 = cdr(v_26);
    v_27 = v_26;
    goto v_1;
    v_26 = nil;
v_13:
    goto v_5;
    v_26 = nil;
v_5:
    return onevalue(v_26);
}



// Code for xvarp

static LispObject CC_xvarp(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_46, v_47;
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
    v_47 = qvalue(basic_elt(env, 1)); // xvars!*
    v_46 = lisp_true;
    if (equal(v_47, v_46)) goto v_7;
    v_46 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // xdegree
    v_47 = (*qfn1(fn))(fn, v_46);
    }
    env = stack[-1];
    v_46 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_47 == v_46) goto v_13;
    v_46 = lisp_true;
    goto v_11;
v_13:
    v_46 = stack[0];
    v_47 = qvalue(basic_elt(env, 1)); // xvars!*
    v_46 = Lmemq(nil, v_46, v_47);
    goto v_11;
    v_46 = nil;
v_11:
    goto v_5;
v_7:
    v_46 = stack[0];
    if (!consp(v_46)) goto v_23;
    else goto v_24;
v_23:
    v_46 = stack[0];
    if (!symbolp(v_46)) v_46 = nil;
    else { v_46 = qfastgets(v_46);
           if (v_46 != nil) { v_46 = elt(v_46, 29); // fdegree
#ifdef RECORD_GET
             if (v_46 != SPID_NOPROP)
                record_get(elt(fastget_names, 29), 1);
             else record_get(elt(fastget_names, 29), 0),
                v_46 = nil; }
           else record_get(elt(fastget_names, 29), 0); }
#else
             if (v_46 == SPID_NOPROP) v_46 = nil; }}
#endif
    goto v_5;
v_24:
    v_46 = stack[0];
    if (!car_legal(v_46)) v_46 = carerror(v_46); else
    v_46 = car(v_46);
    if (!symbolp(v_46)) v_46 = nil;
    else { v_46 = qfastgets(v_46);
           if (v_46 != nil) { v_46 = elt(v_46, 16); // indexvar
#ifdef RECORD_GET
             if (v_46 == SPID_NOPROP)
                record_get(elt(fastget_names, 16), 0),
                v_46 = nil;
             else record_get(elt(fastget_names, 16), 1),
                v_46 = lisp_true; }
           else record_get(elt(fastget_names, 16), 0); }
#else
             if (v_46 == SPID_NOPROP) v_46 = nil; else v_46 = lisp_true; }}
#endif
    if (v_46 == nil) goto v_29;
    v_46 = stack[0];
    if (!car_legal(v_46)) v_46 = cdrerror(v_46); else
    v_46 = cdr(v_46);
    v_47 = Llength(nil, v_46);
    v_46 = stack[0];
    if (!car_legal(v_46)) v_46 = carerror(v_46); else
    v_46 = car(v_46);
    if (!symbolp(v_46)) v_46 = nil;
    else { v_46 = qfastgets(v_46);
           if (v_46 != nil) { v_46 = elt(v_46, 25); // ifdegree
#ifdef RECORD_GET
             if (v_46 != SPID_NOPROP)
                record_get(elt(fastget_names, 25), 1);
             else record_get(elt(fastget_names, 25), 0),
                v_46 = nil; }
           else record_get(elt(fastget_names, 25), 0); }
#else
             if (v_46 == SPID_NOPROP) v_46 = nil; }}
#endif
    v_46 = Lassoc(nil, v_47, v_46);
    goto v_5;
v_29:
    v_46 = stack[0];
    if (!car_legal(v_46)) v_46 = carerror(v_46); else
    v_46 = car(v_46);
    v_47 = basic_elt(env, 2); // (wedge d partdf hodge innerprod liedf)
    v_46 = Lmemq(nil, v_46, v_47);
    goto v_5;
    v_46 = nil;
v_5:
    return onevalue(v_46);
}



// Code for kernelp

static LispObject CC_kernelp(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_50, v_51, v_52;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_51 = v_2;
// end of prologue
    v_50 = v_51;
    if (!consp(v_50)) goto v_18;
    else goto v_19;
v_18:
    v_50 = lisp_true;
    goto v_17;
v_19:
    v_50 = v_51;
    if (!car_legal(v_50)) v_50 = carerror(v_50); else
    v_50 = car(v_50);
    v_50 = (consp(v_50) ? nil : lisp_true);
    goto v_17;
    v_50 = nil;
v_17:
    if (v_50 == nil) goto v_14;
    else goto v_15;
v_14:
    v_50 = v_51;
    if (!car_legal(v_50)) v_50 = cdrerror(v_50); else
    v_50 = cdr(v_50);
    v_50 = (v_50 == nil ? lisp_true : nil);
    goto v_13;
v_15:
    v_50 = nil;
    goto v_13;
    v_50 = nil;
v_13:
    if (v_50 == nil) goto v_11;
    v_50 = v_51;
    if (!car_legal(v_50)) v_50 = carerror(v_50); else
    v_50 = car(v_50);
    if (!car_legal(v_50)) v_52 = cdrerror(v_50); else
    v_52 = cdr(v_50);
    v_50 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_50 = (v_52 == v_50 ? lisp_true : nil);
    goto v_9;
v_11:
    v_50 = nil;
    goto v_9;
    v_50 = nil;
v_9:
    if (v_50 == nil) goto v_7;
    v_50 = v_51;
    if (!car_legal(v_50)) v_50 = carerror(v_50); else
    v_50 = car(v_50);
    if (!car_legal(v_50)) v_50 = carerror(v_50); else
    v_50 = car(v_50);
    if (!car_legal(v_50)) v_51 = cdrerror(v_50); else
    v_51 = cdr(v_50);
    v_50 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_50 = (v_51 == v_50 ? lisp_true : nil);
    goto v_5;
v_7:
    v_50 = nil;
    goto v_5;
    v_50 = nil;
v_5:
    return onevalue(v_50);
}



// Code for mo_deletecomp

static LispObject CC_mo_deletecomp(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    v_32 = v_2;
// end of prologue
    v_33 = v_32;
    if (!car_legal(v_33)) v_33 = carerror(v_33); else
    v_33 = car(v_33);
    if (v_33 == nil) goto v_6;
    else goto v_7;
v_6:
    goto v_5;
v_7:
    v_33 = v_32;
    if (!car_legal(v_33)) v_33 = carerror(v_33); else
    v_33 = car(v_33);
    if (!car_legal(v_33)) v_33 = cdrerror(v_33); else
    v_33 = cdr(v_33);
    if (v_33 == nil) goto v_11;
    else goto v_12;
v_11:
    stack[0] = nil;
    v_32 = nil;
    {   LispObject fn = basic_elt(env, 1); // mo!=deglist
    v_32 = (*qfn1(fn))(fn, v_32);
    }
    {
        LispObject v_35 = stack[0];
        return cons(v_35, v_32);
    }
v_12:
    v_33 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (!car_legal(v_32)) v_32 = carerror(v_32); else
    v_32 = car(v_32);
    if (!car_legal(v_32)) v_32 = cdrerror(v_32); else
    v_32 = cdr(v_32);
    v_32 = cons(v_33, v_32);
    env = stack[-1];
    stack[0] = v_32;
    {   LispObject fn = basic_elt(env, 1); // mo!=deglist
    v_32 = (*qfn1(fn))(fn, v_32);
    }
    {
        LispObject v_36 = stack[0];
        return cons(v_36, v_32);
    }
    v_32 = nil;
v_5:
    return onevalue(v_32);
}



// Code for algebnp

static LispObject CC_algebnp(LispObject env,
                         LispObject v_2)
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
    v_42 = stack[0];
    if (!consp(v_42)) goto v_6;
    else goto v_7;
v_6:
    v_42 = nil;
    goto v_5;
v_7:
    v_42 = stack[0];
    if (!car_legal(v_42)) v_43 = carerror(v_42); else
    v_43 = car(v_42);
    v_42 = basic_elt(env, 1); // !:ar!:
    if (v_43 == v_42) goto v_10;
    else goto v_11;
v_10:
    v_42 = lisp_true;
    goto v_5;
v_11:
    v_42 = stack[0];
    if (!consp(v_42)) goto v_20;
    else goto v_21;
v_20:
    v_42 = lisp_true;
    goto v_19;
v_21:
    v_42 = stack[0];
    if (!car_legal(v_42)) v_42 = carerror(v_42); else
    v_42 = car(v_42);
    v_42 = (consp(v_42) ? nil : lisp_true);
    goto v_19;
    v_42 = nil;
v_19:
    if (v_42 == nil) goto v_17;
    v_42 = nil;
    goto v_5;
v_17:
    v_42 = stack[0];
    if (!car_legal(v_42)) v_42 = carerror(v_42); else
    v_42 = car(v_42);
    if (!car_legal(v_42)) v_42 = cdrerror(v_42); else
    v_42 = cdr(v_42);
    {   LispObject fn = basic_elt(env, 0); // algebnp
    v_42 = (*qfn1(fn))(fn, v_42);
    }
    env = stack[-1];
    if (v_42 == nil) goto v_34;
    else goto v_33;
v_34:
    v_42 = stack[0];
    if (!car_legal(v_42)) v_42 = cdrerror(v_42); else
    v_42 = cdr(v_42);
    stack[0] = v_42;
    goto v_1;
v_33:
    goto v_5;
    v_42 = nil;
v_5:
    return onevalue(v_42);
}



// Code for ratleqp

static LispObject CC_ratleqp(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // ratdif
    v_11 = (*qfn2(fn))(fn, v_12, v_11);
    }
    if (!car_legal(v_11)) v_12 = carerror(v_11); else
    v_12 = car(v_11);
    v_11 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
        return Lleq_2(nil, v_12, v_11);
}



// Code for gcdk

static LispObject CC_gcdk(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_292, v_293, v_294;
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
    stack[-1] = v_2;
// end of prologue
    stack[-10] = nil;
    stack[-8] = nil;
    stack[0] = nil;
    v_293 = stack[-1];
    v_292 = stack[-9];
    if (equal(v_293, v_292)) goto v_14;
    else goto v_15;
v_14:
    v_292 = stack[-1];
    goto v_10;
v_15:
    v_292 = stack[-1];
    if (!consp(v_292)) goto v_27;
    else goto v_28;
v_27:
    v_292 = lisp_true;
    goto v_26;
v_28:
    v_292 = stack[-1];
    if (!car_legal(v_292)) v_292 = carerror(v_292); else
    v_292 = car(v_292);
    v_292 = (consp(v_292) ? nil : lisp_true);
    goto v_26;
    v_292 = nil;
v_26:
    if (v_292 == nil) goto v_24;
    v_292 = lisp_true;
    goto v_22;
v_24:
    v_293 = stack[-9];
    v_292 = stack[-1];
    if (!car_legal(v_292)) v_292 = carerror(v_292); else
    v_292 = car(v_292);
    if (!car_legal(v_292)) v_292 = carerror(v_292); else
    v_292 = car(v_292);
    if (!car_legal(v_292)) v_292 = carerror(v_292); else
    v_292 = car(v_292);
    stack[-8] = v_292;
    {   LispObject fn = basic_elt(env, 6); // degr
    v_293 = (*qfn2(fn))(fn, v_293, v_292);
    }
    env = stack[-11];
    v_292 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_292 = (v_293 == v_292 ? lisp_true : nil);
    goto v_22;
    v_292 = nil;
v_22:
    if (v_292 == nil) goto v_20;
    v_292 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_10;
v_20:
    v_292 = stack[-1];
    if (!car_legal(v_292)) v_292 = carerror(v_292); else
    v_292 = car(v_292);
    if (!car_legal(v_292)) v_292 = carerror(v_292); else
    v_292 = car(v_292);
    if (!car_legal(v_292)) v_293 = cdrerror(v_292); else
    v_293 = cdr(v_292);
    v_292 = stack[-9];
    if (!car_legal(v_292)) v_292 = carerror(v_292); else
    v_292 = car(v_292);
    if (!car_legal(v_292)) v_292 = carerror(v_292); else
    v_292 = car(v_292);
    if (!car_legal(v_292)) v_292 = cdrerror(v_292); else
    v_292 = cdr(v_292);
    v_292 = static_cast<LispObject>(lessp2(v_293, v_292));
    v_292 = v_292 ? lisp_true : nil;
    env = stack[-11];
    if (v_292 == nil) goto v_49;
    v_292 = stack[-1];
    stack[-7] = v_292;
    v_292 = stack[-9];
    stack[-1] = v_292;
    v_292 = stack[-7];
    stack[-9] = v_292;
    goto v_13;
v_49:
v_13:
    v_293 = stack[-1];
    v_292 = stack[-9];
    {   LispObject fn = basic_elt(env, 7); // quotf1
    v_292 = (*qfn2(fn))(fn, v_293, v_292);
    }
    env = stack[-11];
    if (v_292 == nil) goto v_65;
    v_292 = stack[-9];
    goto v_10;
v_65:
    v_292 = qvalue(basic_elt(env, 1)); // !*heugcd
    if (v_292 == nil) goto v_71;
    v_292 = qvalue(basic_elt(env, 2)); // !*ezgcd
    if (v_292 == nil) goto v_77;
    else goto v_78;
v_77:
    v_293 = stack[-1];
    v_292 = stack[-9];
    {   LispObject fn = basic_elt(env, 8); // heu!-gcd
    v_292 = (*qfn2(fn))(fn, v_293, v_292);
    }
    env = stack[-11];
    stack[0] = v_292;
    goto v_76;
v_78:
    v_292 = nil;
    goto v_76;
    v_292 = nil;
v_76:
    if (v_292 == nil) goto v_71;
    v_292 = stack[0];
    goto v_10;
v_71:
    v_292 = stack[-9];
    if (!car_legal(v_292)) v_292 = carerror(v_292); else
    v_292 = car(v_292);
    if (!car_legal(v_292)) v_292 = carerror(v_292); else
    v_292 = car(v_292);
    if (!car_legal(v_292)) v_293 = cdrerror(v_292); else
    v_293 = cdr(v_292);
    v_292 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_293 == v_292) goto v_91;
    else goto v_92;
v_91:
    v_292 = lisp_true;
    goto v_90;
v_92:
    v_292 = basic_elt(env, 3); // modular!-multicheck
    {   LispObject fn = basic_elt(env, 9); // getd
    v_292 = (*qfn1(fn))(fn, v_292);
    }
    env = stack[-11];
    if (v_292 == nil) goto v_106;
    else goto v_107;
v_106:
    v_292 = nil;
    goto v_105;
v_107:
    v_294 = stack[-1];
    v_293 = stack[-9];
    v_292 = stack[-8];
    {   LispObject fn = basic_elt(env, 3); // modular!-multicheck
    v_292 = (*qfn3(fn))(fn, v_294, v_293, v_292);
    }
    env = stack[-11];
    goto v_105;
    v_292 = nil;
v_105:
    if (v_292 == nil) goto v_103;
    else goto v_102;
v_103:
    v_292 = qvalue(basic_elt(env, 4)); // !*mcd
    v_292 = (v_292 == nil ? lisp_true : nil);
v_102:
    goto v_90;
    v_292 = nil;
v_90:
    if (v_292 == nil) goto v_88;
    v_292 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_10;
v_88:
v_11:
    v_293 = stack[-1];
    v_292 = stack[-9];
    {   LispObject fn = basic_elt(env, 10); // remk
    v_292 = (*qfn2(fn))(fn, v_293, v_292);
    }
    env = stack[-11];
    stack[-7] = v_292;
    v_292 = stack[-7];
    if (v_292 == nil) goto v_125;
    else goto v_126;
v_125:
    v_292 = stack[-9];
    goto v_10;
v_126:
    v_293 = stack[-7];
    v_292 = stack[-8];
    {   LispObject fn = basic_elt(env, 6); // degr
    v_293 = (*qfn2(fn))(fn, v_293, v_292);
    }
    env = stack[-11];
    v_292 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_293 == v_292) goto v_129;
    else goto v_130;
v_129:
    v_292 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_10;
v_130:
    v_293 = stack[-9];
    v_292 = stack[-10];
    {   LispObject fn = basic_elt(env, 11); // addlc
    v_292 = (*qfn2(fn))(fn, v_293, v_292);
    }
    env = stack[-11];
    stack[-10] = v_292;
    v_293 = stack[-7];
    v_292 = stack[-7];
    if (!car_legal(v_292)) v_292 = carerror(v_292); else
    v_292 = car(v_292);
    if (!car_legal(v_292)) v_292 = cdrerror(v_292); else
    v_292 = cdr(v_292);
    {   LispObject fn = basic_elt(env, 7); // quotf1
    v_292 = (*qfn2(fn))(fn, v_293, v_292);
    }
    env = stack[-11];
    stack[0] = v_292;
    if (v_292 == nil) goto v_142;
    v_292 = stack[0];
    stack[-7] = v_292;
    goto v_140;
v_142:
    v_292 = stack[-10];
    stack[-6] = v_292;
v_154:
    v_292 = stack[-6];
    if (v_292 == nil) goto v_158;
    else goto v_159;
v_158:
    goto v_153;
v_159:
    v_292 = stack[-6];
    if (!car_legal(v_292)) v_292 = carerror(v_292); else
    v_292 = car(v_292);
    stack[-5] = v_292;
    v_292 = stack[-5];
    if (!consp(v_292)) goto v_175;
    else goto v_176;
v_175:
    v_292 = qvalue(basic_elt(env, 5)); // dmode!*
    if (!symbolp(v_292)) v_292 = nil;
    else { v_292 = qfastgets(v_292);
           if (v_292 != nil) { v_292 = elt(v_292, 3); // field
#ifdef RECORD_GET
             if (v_292 == SPID_NOPROP)
                record_get(elt(fastget_names, 3), 0),
                v_292 = nil;
             else record_get(elt(fastget_names, 3), 1),
                v_292 = lisp_true; }
           else record_get(elt(fastget_names, 3), 0); }
#else
             if (v_292 == SPID_NOPROP) v_292 = nil; else v_292 = lisp_true; }}
#endif
    v_292 = (v_292 == nil ? lisp_true : nil);
    goto v_174;
v_176:
    v_292 = nil;
    goto v_174;
    v_292 = nil;
v_174:
    if (v_292 == nil) goto v_172;
    v_292 = lisp_true;
    goto v_170;
v_172:
    v_292 = stack[-5];
    if (!consp(v_292)) goto v_193;
    else goto v_194;
v_193:
    v_292 = lisp_true;
    goto v_192;
v_194:
    v_292 = stack[-5];
    if (!car_legal(v_292)) v_292 = carerror(v_292); else
    v_292 = car(v_292);
    v_292 = (consp(v_292) ? nil : lisp_true);
    goto v_192;
    v_292 = nil;
v_192:
    if (v_292 == nil) goto v_190;
    v_292 = qvalue(basic_elt(env, 5)); // dmode!*
    if (!symbolp(v_292)) v_292 = nil;
    else { v_292 = qfastgets(v_292);
           if (v_292 != nil) { v_292 = elt(v_292, 3); // field
#ifdef RECORD_GET
             if (v_292 == SPID_NOPROP)
                record_get(elt(fastget_names, 3), 0),
                v_292 = nil;
             else record_get(elt(fastget_names, 3), 1),
                v_292 = lisp_true; }
           else record_get(elt(fastget_names, 3), 0); }
#else
             if (v_292 == SPID_NOPROP) v_292 = nil; else v_292 = lisp_true; }}
#endif
    if (v_292 == nil) goto v_205;
    v_292 = lisp_true;
    goto v_203;
v_205:
    v_292 = stack[-5];
    if (!car_legal(v_292)) v_292 = carerror(v_292); else
    v_292 = car(v_292);
    if (!symbolp(v_292)) v_292 = nil;
    else { v_292 = qfastgets(v_292);
           if (v_292 != nil) { v_292 = elt(v_292, 27); // units
#ifdef RECORD_GET
             if (v_292 != SPID_NOPROP)
                record_get(elt(fastget_names, 27), 1);
             else record_get(elt(fastget_names, 27), 0),
                v_292 = nil; }
           else record_get(elt(fastget_names, 27), 0); }
#else
             if (v_292 == SPID_NOPROP) v_292 = nil; }}
#endif
    stack[0] = v_292;
    if (v_292 == nil) goto v_213;
    else goto v_214;
v_213:
    v_292 = nil;
    goto v_212;
v_214:
    stack[-4] = stack[-5];
    v_292 = stack[0];
    stack[-3] = v_292;
    v_292 = stack[-3];
    if (v_292 == nil) goto v_231;
    else goto v_232;
v_231:
    v_292 = nil;
    goto v_226;
v_232:
    v_292 = stack[-3];
    if (!car_legal(v_292)) v_292 = carerror(v_292); else
    v_292 = car(v_292);
    if (!car_legal(v_292)) v_292 = carerror(v_292); else
    v_292 = car(v_292);
    v_292 = ncons(v_292);
    env = stack[-11];
    stack[-1] = v_292;
    stack[-2] = v_292;
v_227:
    v_292 = stack[-3];
    if (!car_legal(v_292)) v_292 = cdrerror(v_292); else
    v_292 = cdr(v_292);
    stack[-3] = v_292;
    v_292 = stack[-3];
    if (v_292 == nil) goto v_245;
    else goto v_246;
v_245:
    v_292 = stack[-2];
    goto v_226;
v_246:
    stack[0] = stack[-1];
    v_292 = stack[-3];
    if (!car_legal(v_292)) v_292 = carerror(v_292); else
    v_292 = car(v_292);
    if (!car_legal(v_292)) v_292 = carerror(v_292); else
    v_292 = car(v_292);
    v_292 = ncons(v_292);
    env = stack[-11];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_292);
    v_292 = stack[-1];
    if (!car_legal(v_292)) v_292 = cdrerror(v_292); else
    v_292 = cdr(v_292);
    stack[-1] = v_292;
    goto v_227;
v_226:
    v_292 = Lmember(nil, stack[-4], v_292);
    goto v_212;
    v_292 = nil;
v_212:
    goto v_203;
    v_292 = nil;
v_203:
    goto v_188;
v_190:
    v_292 = nil;
    goto v_188;
    v_292 = nil;
v_188:
    v_292 = (v_292 == nil ? lisp_true : nil);
    goto v_170;
    v_292 = nil;
v_170:
    if (v_292 == nil) goto v_168;
v_266:
    v_293 = stack[-7];
    v_292 = stack[-5];
    {   LispObject fn = basic_elt(env, 7); // quotf1
    v_292 = (*qfn2(fn))(fn, v_293, v_292);
    }
    env = stack[-11];
    stack[0] = v_292;
    if (v_292 == nil) goto v_269;
    else goto v_270;
v_269:
    goto v_265;
v_270:
    v_292 = stack[0];
    stack[-7] = v_292;
    goto v_266;
v_265:
    goto v_166;
v_168:
v_166:
    v_292 = stack[-6];
    if (!car_legal(v_292)) v_292 = cdrerror(v_292); else
    v_292 = cdr(v_292);
    stack[-6] = v_292;
    goto v_154;
v_153:
    goto v_140;
v_140:
    v_292 = stack[-9];
    stack[-1] = v_292;
    v_292 = stack[-7];
    {   LispObject fn = basic_elt(env, 12); // prim!-part
    v_292 = (*qfn1(fn))(fn, v_292);
    }
    env = stack[-11];
    stack[-9] = v_292;
    v_293 = stack[-9];
    v_292 = stack[-8];
    {   LispObject fn = basic_elt(env, 6); // degr
    v_293 = (*qfn2(fn))(fn, v_293, v_292);
    }
    env = stack[-11];
    v_292 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_293 == v_292) goto v_283;
    else goto v_284;
v_283:
    v_292 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_10;
v_284:
    goto v_11;
    v_292 = nil;
v_10:
    return onevalue(v_292);
}



// Code for interglue

static LispObject CC_interglue(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_205, v_206;
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
    v_205 = stack[-4];
    if (v_205 == nil) goto v_13;
    else goto v_14;
v_13:
    v_205 = lisp_true;
    goto v_12;
v_14:
    v_205 = stack[-3];
    if (v_205 == nil) goto v_21;
    else goto v_22;
v_21:
    v_205 = lisp_true;
    goto v_20;
v_22:
    v_205 = stack[-4];
    if (!consp(v_205)) goto v_30;
    v_205 = lisp_true;
    goto v_28;
v_30:
    v_205 = stack[-3];
    v_205 = (consp(v_205) ? nil : lisp_true);
    v_205 = (v_205 == nil ? lisp_true : nil);
    goto v_28;
    v_205 = nil;
v_28:
    goto v_20;
    v_205 = nil;
v_20:
    goto v_12;
    v_205 = nil;
v_12:
    if (v_205 == nil) goto v_10;
    v_205 = nil;
    goto v_8;
v_10:
    v_205 = stack[-4];
    if (!symbolp(v_205)) v_205 = nil;
    else { v_205 = qfastgets(v_205);
           if (v_205 != nil) { v_205 = elt(v_205, 7); // class
#ifdef RECORD_GET
             if (v_205 != SPID_NOPROP)
                record_get(elt(fastget_names, 7), 1);
             else record_get(elt(fastget_names, 7), 0),
                v_205 = nil; }
           else record_get(elt(fastget_names, 7), 0); }
#else
             if (v_205 == SPID_NOPROP) v_205 = nil; }}
#endif
    stack[0] = v_205;
    v_205 = stack[-3];
    if (!symbolp(v_205)) v_205 = nil;
    else { v_205 = qfastgets(v_205);
           if (v_205 != nil) { v_205 = elt(v_205, 7); // class
#ifdef RECORD_GET
             if (v_205 != SPID_NOPROP)
                record_get(elt(fastget_names, 7), 1);
             else record_get(elt(fastget_names, 7), 0),
                v_205 = nil; }
           else record_get(elt(fastget_names, 7), 0); }
#else
             if (v_205 == SPID_NOPROP) v_205 = nil; }}
#endif
    v_206 = stack[0];
    v_205 = get(v_206, v_205);
    env = stack[-6];
    stack[-5] = v_205;
    v_205 = stack[-5];
    if (v_205 == nil) goto v_55;
    else goto v_56;
v_55:
    v_205 = nil;
    goto v_45;
v_56:
    v_206 = stack[-4];
    v_205 = basic_elt(env, 1); // !\co! 
    if (v_206 == v_205) goto v_61;
    else goto v_62;
v_61:
    v_206 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_205 = static_cast<LispObject>(-160000)+TAG_FIXNUM; // -10000
    return list2(v_206, v_205);
v_62:
    v_206 = stack[-5];
    v_205 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_205 = static_cast<LispObject>(lessp2(v_206, v_205));
    v_205 = v_205 ? lisp_true : nil;
    env = stack[-6];
    if (v_205 == nil) goto v_71;
    v_206 = stack[-2];
    v_205 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_205 = static_cast<LispObject>(greaterp2(v_206, v_205));
    v_205 = v_205 ? lisp_true : nil;
    env = stack[-6];
    if (v_205 == nil) goto v_78;
    v_205 = nil;
    goto v_45;
v_78:
    v_205 = stack[-5];
    v_205 = negate(v_205);
    env = stack[-6];
    stack[-5] = v_205;
    goto v_76;
v_76:
    goto v_69;
v_71:
v_69:
    v_206 = stack[-5];
    v_205 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_206 == v_205) goto v_89;
    else goto v_90;
v_89:
    stack[0] = static_cast<LispObject>(1295360)+TAG_FIXNUM; // 80960
    v_206 = stack[-1];
    v_205 = static_cast<LispObject>(160)+TAG_FIXNUM; // 10
    v_206 = times2(v_206, v_205);
    env = stack[-6];
    v_205 = static_cast<LispObject>(320)+TAG_FIXNUM; // 20
    v_205 = plus2(v_206, v_205);
    {
        LispObject v_213 = stack[0];
        return list2(v_213, v_205);
    }
v_90:
    v_206 = stack[-5];
    v_205 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    if (v_206 == v_205) goto v_100;
    else goto v_101;
v_100:
    v_206 = stack[-4];
    v_205 = basic_elt(env, 2); // !+
    if (v_206 == v_205) goto v_110;
    else goto v_111;
v_110:
    v_205 = lisp_true;
    goto v_109;
v_111:
    v_206 = stack[-4];
    v_205 = basic_elt(env, 3); // !-
    v_205 = (v_206 == v_205 ? lisp_true : nil);
    goto v_109;
    v_205 = nil;
v_109:
    if (v_205 == nil) goto v_107;
    v_205 = nil;
    goto v_45;
v_107:
    v_206 = stack[-3];
    v_205 = basic_elt(env, 2); // !+
    if (v_206 == v_205) goto v_123;
    else goto v_124;
v_123:
    stack[0] = static_cast<LispObject>(2621440)+TAG_FIXNUM; // 163840
    v_206 = stack[-1];
    v_205 = static_cast<LispObject>(480)+TAG_FIXNUM; // 30
    v_206 = times2(v_206, v_205);
    env = stack[-6];
    v_205 = static_cast<LispObject>(6240)+TAG_FIXNUM; // 390
    v_205 = difference2(v_206, v_205);
    {
        LispObject v_214 = stack[0];
        return list2(v_214, v_205);
    }
v_124:
    v_206 = stack[-3];
    v_205 = basic_elt(env, 3); // !-
    if (v_206 == v_205) goto v_140;
    else goto v_141;
v_140:
    v_206 = stack[0];
    v_205 = basic_elt(env, 4); // ord
    if (v_206 == v_205) goto v_146;
    else goto v_147;
v_146:
    v_205 = lisp_true;
    goto v_145;
v_147:
    v_206 = stack[0];
    v_205 = basic_elt(env, 5); // clo
    v_205 = (v_206 == v_205 ? lisp_true : nil);
    goto v_145;
    v_205 = nil;
v_145:
    goto v_139;
v_141:
    v_205 = nil;
    goto v_139;
    v_205 = nil;
v_139:
    if (v_205 == nil) goto v_137;
    stack[0] = static_cast<LispObject>(2621440)+TAG_FIXNUM; // 163840
    v_206 = stack[-1];
    v_205 = static_cast<LispObject>(480)+TAG_FIXNUM; // 30
    v_206 = times2(v_206, v_205);
    env = stack[-6];
    v_205 = static_cast<LispObject>(3360)+TAG_FIXNUM; // 210
    v_205 = difference2(v_206, v_205);
    {
        LispObject v_215 = stack[0];
        return list2(v_215, v_205);
    }
v_137:
    v_206 = stack[-4];
    v_205 = basic_elt(env, 6); // !\cdot! 
    if (v_206 == v_205) goto v_168;
    else goto v_169;
v_168:
    stack[0] = static_cast<LispObject>(2621440)+TAG_FIXNUM; // 163840
    v_206 = stack[-1];
    v_205 = static_cast<LispObject>(160)+TAG_FIXNUM; // 10
    v_206 = times2(v_206, v_205);
    env = stack[-6];
    v_205 = static_cast<LispObject>(800)+TAG_FIXNUM; // 50
    v_205 = plus2(v_206, v_205);
    {
        LispObject v_216 = stack[0];
        return list2(v_216, v_205);
    }
v_169:
    v_206 = stack[-3];
    v_205 = basic_elt(env, 6); // !\cdot! 
    if (v_206 == v_205) goto v_181;
    else goto v_182;
v_181:
    v_205 = nil;
    goto v_45;
v_182:
    stack[0] = static_cast<LispObject>(2621440)+TAG_FIXNUM; // 163840
    v_206 = stack[-1];
    v_205 = static_cast<LispObject>(160)+TAG_FIXNUM; // 10
    v_205 = times2(v_206, v_205);
    {
        LispObject v_217 = stack[0];
        return list2(v_217, v_205);
    }
v_101:
    v_206 = stack[-5];
    v_205 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    if (v_206 == v_205) goto v_191;
    else goto v_192;
v_191:
    stack[0] = static_cast<LispObject>(10485760)+TAG_FIXNUM; // 655360
    v_206 = stack[-1];
    v_205 = static_cast<LispObject>(160)+TAG_FIXNUM; // 10
    v_206 = times2(v_206, v_205);
    env = stack[-6];
    v_205 = static_cast<LispObject>(800)+TAG_FIXNUM; // 50
    v_205 = difference2(v_206, v_205);
    {
        LispObject v_218 = stack[0];
        return list2(v_218, v_205);
    }
v_192:
    v_205 = nil;
    goto v_45;
    v_205 = nil;
v_45:
    goto v_8;
    v_205 = nil;
v_8:
    return onevalue(v_205);
}



// Code for pasf_qff2ivl

static LispObject CC_pasf_qff2ivl(LispObject env,
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
    {   LispObject fn = basic_elt(env, 2); // pasf_uprap
    v_18 = (*qfn1(fn))(fn, v_18);
    }
    env = stack[-1];
    if (v_18 == nil) goto v_7;
    v_18 = basic_elt(env, 1); // "pasf_qff2ivl : uniform Presburger arithmetic formula in input"
    v_18 = ncons(v_18);
    env = stack[-1];
    {
        LispObject fn = basic_elt(env, 3); // rederr
        return (*qfn1(fn))(fn, v_18);
    }
v_7:
    v_18 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // pasf_dnf
    v_18 = (*qfn1(fn))(fn, v_18);
    }
    env = stack[-1];
    {
        LispObject fn = basic_elt(env, 5); // pasf_qff2ivl1
        return (*qfn1(fn))(fn, v_18);
    }
    v_18 = nil;
    return onevalue(v_18);
}



// Code for cfrmconstant

static LispObject CC_cfrmconstant(LispObject env,
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
    v_7 = qvalue(basic_elt(env, 1)); // cfrmcrd!*
    {
        LispObject fn = basic_elt(env, 2); // freeoffl
        return (*qfn2(fn))(fn, v_8, v_7);
    }
}



// Code for cflot

static LispObject CC_cflot(LispObject env,
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
    v_20 = v_2;
// end of prologue
    v_21 = v_20;
    v_21 = Lfloatp(nil, v_21);
    env = stack[0];
    if (v_21 == nil) goto v_7;
    goto v_5;
v_7:
    v_21 = v_20;
    if (!consp(v_21)) goto v_11;
    else goto v_12;
v_11:
        return Lfloat(nil, v_20);
v_12:
    {
        LispObject fn = basic_elt(env, 1); // bf2flr
        return (*qfn1(fn))(fn, v_20);
    }
    v_20 = nil;
v_5:
    return onevalue(v_20);
}



// Code for partitpartdf

static LispObject CC_partitpartdf(LispObject env,
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
    v_22 = v_2;
// end of prologue
    v_21 = v_22;
    if (!car_legal(v_21)) v_21 = cdrerror(v_21); else
    v_21 = cdr(v_21);
    if (v_21 == nil) goto v_6;
    else goto v_7;
v_6:
    v_21 = v_22;
    if (!car_legal(v_21)) v_21 = carerror(v_21); else
    v_21 = car(v_21);
    {   LispObject fn = basic_elt(env, 1); // !*a2k
    v_21 = (*qfn1(fn))(fn, v_21);
    }
    env = stack[-1];
    {
        LispObject fn = basic_elt(env, 2); // mknatvec
        return (*qfn1(fn))(fn, v_21);
    }
v_7:
    stack[0] = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_21 = v_22;
    {   LispObject fn = basic_elt(env, 3); // simppartdf0
    v_21 = (*qfn1(fn))(fn, v_21);
    }
    env = stack[-1];
    v_21 = cons(stack[0], v_21);
    return ncons(v_21);
    v_21 = nil;
    return onevalue(v_21);
}



// Code for propagator

static LispObject CC_propagator(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_29 = stack[-1];
    if (v_29 == nil) goto v_7;
    else goto v_8;
v_7:
    v_29 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_6;
v_8:
    v_29 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // repeatsp
    v_29 = (*qfn1(fn))(fn, v_29);
    }
    env = stack[-3];
    if (v_29 == nil) goto v_13;
    else goto v_11;
v_13:
    v_29 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // repeatsp
    v_29 = (*qfn1(fn))(fn, v_29);
    }
    env = stack[-3];
    if (v_29 == nil) goto v_16;
    else goto v_11;
v_16:
    goto v_12;
v_11:
    v_29 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_6;
v_12:
    stack[-2] = basic_elt(env, 1); // plus
    v_29 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // permutations
    v_30 = (*qfn1(fn))(fn, v_29);
    }
    env = stack[-3];
    v_29 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // propag
    v_29 = (*qfn3(fn))(fn, stack[-1], v_30, v_29);
    }
    {
        LispObject v_34 = stack[-2];
        return cons(v_34, v_29);
    }
    v_29 = nil;
v_6:
    return onevalue(v_29);
}



// Code for invbase!*

static LispObject CC_invbaseH(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_423, v_424, v_425;
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
    real_push(nil, nil, nil, nil, nil);
    real_push(nil);
    stack_popper stack_popper_var(17);
// end of prologue
// Binding thirdway!*
// FLUIDBIND: reloadenv=16 litvec-offset=1 saveloc=14
{   bind_fluid_stack bind_fluid_var(-16, 1, -14);
    setvalue(basic_elt(env, 1), nil); // thirdway!*
// Binding shortway!*
// FLUIDBIND: reloadenv=16 litvec-offset=2 saveloc=13
{   bind_fluid_stack bind_fluid_var(-16, 2, -13);
    setvalue(basic_elt(env, 2), nil); // shortway!*
    stack[-12] = nil;
    v_423 = qvalue(basic_elt(env, 3)); // !*trinvbase
    if (v_423 == nil) goto v_24;
    v_423 = Lterpri(nil);
    env = stack[-16];
    goto v_22;
v_24:
v_22:
    v_423 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    setvalue(basic_elt(env, 4), v_423); // maxord!*
    stack[-11] = v_423;
    v_423 = qvalue(basic_elt(env, 5)); // path
    if (v_423 == nil) goto v_31;
    v_423 = Lterpri(nil);
    env = stack[-16];
    goto v_29;
v_31:
v_29:
    v_425 = nil;
    v_424 = qvalue(basic_elt(env, 6)); // gg!*
    v_423 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 18); // redall
    v_423 = (*qfn3(fn))(fn, v_425, v_424, v_423);
    }
    env = stack[-16];
    setvalue(basic_elt(env, 6), v_423); // gg!*
    v_424 = qvalue(basic_elt(env, 6)); // gg!*
    v_423 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 19); // newbasis
    v_423 = (*qfn2(fn))(fn, v_424, v_423);
    }
    env = stack[-16];
    v_423 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-10] = v_423;
    v_423 = qvalue(basic_elt(env, 6)); // gg!*
    stack[0] = v_423;
v_45:
    v_423 = stack[0];
    if (v_423 == nil) goto v_49;
    else goto v_50;
v_49:
    goto v_44;
v_50:
    v_423 = stack[0];
    if (!car_legal(v_423)) v_423 = carerror(v_423); else
    v_423 = car(v_423);
    stack[-1] = stack[-10];
    if (!car_legal(v_423)) v_423 = cdrerror(v_423); else
    v_423 = cdr(v_423);
    {   LispObject fn = basic_elt(env, 20); // ord
    v_423 = (*qfn1(fn))(fn, v_423);
    }
    env = stack[-16];
    v_423 = plus2(stack[-1], v_423);
    env = stack[-16];
    stack[-10] = v_423;
    v_423 = stack[0];
    if (!car_legal(v_423)) v_423 = cdrerror(v_423); else
    v_423 = cdr(v_423);
    stack[0] = v_423;
    goto v_45;
v_44:
    stack[0] = stack[-10];
    v_423 = qvalue(basic_elt(env, 7)); // varlist!*
    v_423 = Llength(nil, v_423);
    env = stack[-16];
    v_423 = sub1(v_423);
    env = stack[-16];
    v_423 = plus2(stack[0], v_423);
    env = stack[-16];
    stack[-10] = v_423;
v_19:
    v_423 = qvalue(basic_elt(env, 6)); // gg!*
    v_423 = Lreverse(nil, v_423);
    env = stack[-16];
    stack[-15] = v_423;
v_72:
    v_423 = stack[-15];
    if (v_423 == nil) goto v_75;
    v_424 = qvalue(basic_elt(env, 8)); // bv!*
    v_423 = stack[-15];
    if (!car_legal(v_423)) v_423 = carerror(v_423); else
    v_423 = car(v_423);
    if (!car_legal(v_423)) v_423 = carerror(v_423); else
    v_423 = car(v_423);
    v_423 = Lgetv(nil, v_424, v_423);
    env = stack[-16];
    if (v_423 == nil) goto v_79;
    else goto v_75;
v_79:
    goto v_76;
v_75:
    goto v_71;
v_76:
    v_423 = stack[-15];
    if (!car_legal(v_423)) v_423 = cdrerror(v_423); else
    v_423 = cdr(v_423);
    stack[-15] = v_423;
    goto v_72;
v_71:
    v_423 = stack[-15];
    if (v_423 == nil) goto v_91;
    v_423 = stack[-15];
    if (!car_legal(v_423)) v_423 = carerror(v_423); else
    v_423 = car(v_423);
    if (!car_legal(v_423)) v_423 = cdrerror(v_423); else
    v_423 = cdr(v_423);
    if (!car_legal(v_423)) v_424 = carerror(v_423); else
    v_424 = car(v_423);
    v_423 = qvalue(basic_elt(env, 6)); // gg!*
    if (!car_legal(v_423)) v_423 = carerror(v_423); else
    v_423 = car(v_423);
    if (!car_legal(v_423)) v_423 = cdrerror(v_423); else
    v_423 = cdr(v_423);
    if (!car_legal(v_423)) v_423 = carerror(v_423); else
    v_423 = car(v_423);
    if (equal(v_424, v_423)) goto v_95;
    else goto v_96;
v_95:
    v_423 = stack[-11];
    v_424 = stack[-15];
    if (!car_legal(v_424)) v_424 = carerror(v_424); else
    v_424 = car(v_424);
    if (!car_legal(v_424)) v_424 = cdrerror(v_424); else
    v_424 = cdr(v_424);
    if (!car_legal(v_424)) v_424 = carerror(v_424); else
    v_424 = car(v_424);
    stack[-11] = v_424;
    v_424 = qvalue(basic_elt(env, 3)); // !*trinvbase
    if (v_424 == nil) goto v_113;
    v_424 = stack[-11];
    v_423 = static_cast<LispObject>(greaterp2(v_424, v_423));
    v_423 = v_423 ? lisp_true : nil;
    env = stack[-16];
    if (v_423 == nil) goto v_113;
    v_423 = Lterpri(nil);
    env = stack[-16];
    v_423 = basic_elt(env, 9); // "---------- ORDER = "
    v_423 = Lprinc(nil, v_423);
    env = stack[-16];
    v_423 = qvalue(basic_elt(env, 6)); // gg!*
    if (!car_legal(v_423)) v_423 = carerror(v_423); else
    v_423 = car(v_423);
    if (!car_legal(v_423)) v_423 = cdrerror(v_423); else
    v_423 = cdr(v_423);
    if (!car_legal(v_423)) v_423 = carerror(v_423); else
    v_423 = car(v_423);
    v_423 = Lprinc(nil, v_423);
    env = stack[-16];
    v_423 = basic_elt(env, 10); // " ----------"
    v_423 = Lprinc(nil, v_423);
    env = stack[-16];
    v_423 = Lterpri(nil);
    env = stack[-16];
    v_423 = Lterpri(nil);
    env = stack[-16];
    goto v_111;
v_113:
v_111:
    v_424 = stack[-11];
    v_423 = stack[-10];
    v_423 = static_cast<LispObject>(greaterp2(v_424, v_423));
    v_423 = v_423 ? lisp_true : nil;
    env = stack[-16];
    if (v_423 == nil) goto v_137;
    v_425 = nil;
    v_424 = qvalue(basic_elt(env, 6)); // gg!*
    v_423 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {   LispObject fn = basic_elt(env, 18); // redall
    v_423 = (*qfn3(fn))(fn, v_425, v_424, v_423);
    }
    env = stack[-16];
    setvalue(basic_elt(env, 6), v_423); // gg!*
    v_424 = qvalue(basic_elt(env, 6)); // gg!*
    v_423 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {   LispObject fn = basic_elt(env, 19); // newbasis
    v_423 = (*qfn2(fn))(fn, v_424, v_423);
    }
    env = stack[-16];
    v_423 = nil;
    v_423 = ncons(v_423);
    env = stack[-16];
    setvalue(basic_elt(env, 11), v_423); // alglist!*
    stack[-9] = basic_elt(env, 12); // list
    v_423 = qvalue(basic_elt(env, 6)); // gg!*
    stack[-8] = v_423;
    v_423 = stack[-8];
    if (v_423 == nil) goto v_161;
    else goto v_162;
v_161:
    v_423 = nil;
    goto v_156;
v_162:
    v_423 = stack[-8];
    if (!car_legal(v_423)) v_423 = carerror(v_423); else
    v_423 = car(v_423);
    stack[-4] = basic_elt(env, 13); // plus
    v_424 = qvalue(basic_elt(env, 14)); // gv!*
    if (!car_legal(v_423)) v_423 = carerror(v_423); else
    v_423 = car(v_423);
    v_423 = Lgetv(nil, v_424, v_423);
    env = stack[-16];
    stack[-3] = v_423;
    v_423 = stack[-3];
    if (v_423 == nil) goto v_183;
    else goto v_184;
v_183:
    v_423 = nil;
    goto v_175;
v_184:
    v_423 = stack[-3];
    if (!car_legal(v_423)) v_423 = carerror(v_423); else
    v_423 = car(v_423);
    v_424 = ncons(v_423);
    env = stack[-16];
    v_423 = qvalue(basic_elt(env, 7)); // varlist!*
    {   LispObject fn = basic_elt(env, 21); // !*di2q
    v_423 = (*qfn2(fn))(fn, v_424, v_423);
    }
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 22); // prepsq
    v_423 = (*qfn1(fn))(fn, v_423);
    }
    env = stack[-16];
    v_423 = ncons(v_423);
    env = stack[-16];
    stack[-1] = v_423;
    stack[-2] = v_423;
v_176:
    v_423 = stack[-3];
    if (!car_legal(v_423)) v_423 = cdrerror(v_423); else
    v_423 = cdr(v_423);
    stack[-3] = v_423;
    v_423 = stack[-3];
    if (v_423 == nil) goto v_200;
    else goto v_201;
v_200:
    v_423 = stack[-2];
    goto v_175;
v_201:
    stack[0] = stack[-1];
    v_423 = stack[-3];
    if (!car_legal(v_423)) v_423 = carerror(v_423); else
    v_423 = car(v_423);
    v_424 = ncons(v_423);
    env = stack[-16];
    v_423 = qvalue(basic_elt(env, 7)); // varlist!*
    {   LispObject fn = basic_elt(env, 21); // !*di2q
    v_423 = (*qfn2(fn))(fn, v_424, v_423);
    }
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 22); // prepsq
    v_423 = (*qfn1(fn))(fn, v_423);
    }
    env = stack[-16];
    v_423 = ncons(v_423);
    env = stack[-16];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_423);
    v_423 = stack[-1];
    if (!car_legal(v_423)) v_423 = cdrerror(v_423); else
    v_423 = cdr(v_423);
    stack[-1] = v_423;
    goto v_176;
v_175:
    v_423 = cons(stack[-4], v_423);
    env = stack[-16];
    v_423 = ncons(v_423);
    env = stack[-16];
    stack[-6] = v_423;
    stack[-7] = v_423;
v_157:
    v_423 = stack[-8];
    if (!car_legal(v_423)) v_423 = cdrerror(v_423); else
    v_423 = cdr(v_423);
    stack[-8] = v_423;
    v_423 = stack[-8];
    if (v_423 == nil) goto v_221;
    else goto v_222;
v_221:
    v_423 = stack[-7];
    goto v_156;
v_222:
    stack[-5] = stack[-6];
    v_423 = stack[-8];
    if (!car_legal(v_423)) v_423 = carerror(v_423); else
    v_423 = car(v_423);
    stack[-4] = basic_elt(env, 13); // plus
    v_424 = qvalue(basic_elt(env, 14)); // gv!*
    if (!car_legal(v_423)) v_423 = carerror(v_423); else
    v_423 = car(v_423);
    v_423 = Lgetv(nil, v_424, v_423);
    env = stack[-16];
    stack[-3] = v_423;
    v_423 = stack[-3];
    if (v_423 == nil) goto v_244;
    else goto v_245;
v_244:
    v_423 = nil;
    goto v_236;
v_245:
    v_423 = stack[-3];
    if (!car_legal(v_423)) v_423 = carerror(v_423); else
    v_423 = car(v_423);
    v_424 = ncons(v_423);
    env = stack[-16];
    v_423 = qvalue(basic_elt(env, 7)); // varlist!*
    {   LispObject fn = basic_elt(env, 21); // !*di2q
    v_423 = (*qfn2(fn))(fn, v_424, v_423);
    }
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 22); // prepsq
    v_423 = (*qfn1(fn))(fn, v_423);
    }
    env = stack[-16];
    v_423 = ncons(v_423);
    env = stack[-16];
    stack[-1] = v_423;
    stack[-2] = v_423;
v_237:
    v_423 = stack[-3];
    if (!car_legal(v_423)) v_423 = cdrerror(v_423); else
    v_423 = cdr(v_423);
    stack[-3] = v_423;
    v_423 = stack[-3];
    if (v_423 == nil) goto v_261;
    else goto v_262;
v_261:
    v_423 = stack[-2];
    goto v_236;
v_262:
    stack[0] = stack[-1];
    v_423 = stack[-3];
    if (!car_legal(v_423)) v_423 = carerror(v_423); else
    v_423 = car(v_423);
    v_424 = ncons(v_423);
    env = stack[-16];
    v_423 = qvalue(basic_elt(env, 7)); // varlist!*
    {   LispObject fn = basic_elt(env, 21); // !*di2q
    v_423 = (*qfn2(fn))(fn, v_424, v_423);
    }
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 22); // prepsq
    v_423 = (*qfn1(fn))(fn, v_423);
    }
    env = stack[-16];
    v_423 = ncons(v_423);
    env = stack[-16];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_423);
    v_423 = stack[-1];
    if (!car_legal(v_423)) v_423 = cdrerror(v_423); else
    v_423 = cdr(v_423);
    stack[-1] = v_423;
    goto v_237;
v_236:
    v_423 = cons(stack[-4], v_423);
    env = stack[-16];
    v_423 = ncons(v_423);
    env = stack[-16];
    if (!car_legal(stack[-5])) rplacd_fails(stack[-5]);
    setcdr(stack[-5], v_423);
    v_423 = stack[-6];
    if (!car_legal(v_423)) v_423 = cdrerror(v_423); else
    v_423 = cdr(v_423);
    stack[-6] = v_423;
    goto v_157;
v_156:
    v_423 = cons(stack[-9], v_423);
    env = stack[-16];
    setvalue(basic_elt(env, 15), v_423); // invtempbasis
    v_423 = basic_elt(env, 16); // "Maximum degree bound exceeded."
    {   LispObject fn = basic_elt(env, 23); // rederr
    v_423 = (*qfn1(fn))(fn, v_423);
    }
    env = stack[-16];
    goto v_135;
v_137:
v_135:
    v_424 = qvalue(basic_elt(env, 4)); // maxord!*
    v_423 = qvalue(basic_elt(env, 6)); // gg!*
    if (!car_legal(v_423)) v_423 = carerror(v_423); else
    v_423 = car(v_423);
    if (!car_legal(v_423)) v_423 = cdrerror(v_423); else
    v_423 = cdr(v_423);
    if (!car_legal(v_423)) v_423 = carerror(v_423); else
    v_423 = car(v_423);
    {   LispObject fn = basic_elt(env, 24); // max
    v_423 = (*qfn2(fn))(fn, v_424, v_423);
    }
    env = stack[-16];
    setvalue(basic_elt(env, 4), v_423); // maxord!*
    v_423 = qvalue(basic_elt(env, 6)); // gg!*
    if (!car_legal(v_423)) v_423 = carerror(v_423); else
    v_423 = car(v_423);
    if (!car_legal(v_423)) v_423 = cdrerror(v_423); else
    v_423 = cdr(v_423);
    if (!car_legal(v_423)) v_424 = carerror(v_423); else
    v_424 = car(v_423);
    v_423 = qvalue(basic_elt(env, 4)); // maxord!*
    v_423 = static_cast<LispObject>(lessp2(v_424, v_423));
    v_423 = v_423 ? lisp_true : nil;
    env = stack[-16];
    if (v_423 == nil) goto v_293;
    v_423 = lisp_true;
    stack[-12] = v_423;
    goto v_291;
v_293:
v_291:
    goto v_94;
v_96:
v_94:
    v_423 = stack[-12];
    if (v_423 == nil) goto v_305;
    goto v_20;
v_305:
    v_423 = stack[-15];
    if (!car_legal(v_423)) v_423 = carerror(v_423); else
    v_423 = car(v_423);
    if (!car_legal(v_423)) v_423 = carerror(v_423); else
    v_423 = car(v_423);
    stack[0] = v_423;
    v_424 = qvalue(basic_elt(env, 14)); // gv!*
    v_423 = stack[0];
    v_423 = Lgetv(nil, v_424, v_423);
    env = stack[-16];
    stack[-6] = v_423;
    v_425 = qvalue(basic_elt(env, 8)); // bv!*
    v_424 = stack[0];
    v_423 = nil;
    v_423 = Lputv(nil, v_425, v_424, v_423);
    env = stack[-16];
    v_423 = stack[-6];
    {   LispObject fn = basic_elt(env, 25); // ljet
    v_423 = (*qfn1(fn))(fn, v_423);
    }
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 26); // class
    v_423 = (*qfn1(fn))(fn, v_423);
    }
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 27); // nonmult
    v_423 = (*qfn1(fn))(fn, v_423);
    }
    env = stack[-16];
    stack[-5] = v_423;
v_324:
    v_423 = stack[-5];
    if (v_423 == nil) goto v_328;
    else goto v_329;
v_328:
    goto v_323;
v_329:
    v_423 = stack[-5];
    if (!car_legal(v_423)) v_423 = carerror(v_423); else
    v_423 = car(v_423);
    stack[0] = v_423;
    v_423 = qvalue(basic_elt(env, 17)); // ng!*
    v_423 = add1(v_423);
    env = stack[-16];
    setvalue(basic_elt(env, 17), v_423); // ng!*
    v_424 = stack[-6];
    v_423 = stack[0];
    {   LispObject fn = basic_elt(env, 28); // pdmult
    v_423 = (*qfn2(fn))(fn, v_424, v_423);
    }
    env = stack[-16];
    stack[-2] = v_423;
    v_425 = qvalue(basic_elt(env, 14)); // gv!*
    v_424 = qvalue(basic_elt(env, 17)); // ng!*
    v_423 = stack[-2];
    v_423 = Lputv(nil, v_425, v_424, v_423);
    env = stack[-16];
    v_425 = qvalue(basic_elt(env, 8)); // bv!*
    v_424 = qvalue(basic_elt(env, 17)); // ng!*
    v_423 = lisp_true;
    v_423 = Lputv(nil, v_425, v_424, v_423);
    env = stack[-16];
    stack[-1] = qvalue(basic_elt(env, 6)); // gg!*
    stack[0] = qvalue(basic_elt(env, 17)); // ng!*
    v_423 = stack[-2];
    {   LispObject fn = basic_elt(env, 25); // ljet
    v_423 = (*qfn1(fn))(fn, v_423);
    }
    env = stack[-16];
    v_423 = cons(stack[0], v_423);
    env = stack[-16];
    v_424 = ncons(v_423);
    env = stack[-16];
    v_423 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 18); // redall
    v_423 = (*qfn3(fn))(fn, stack[-1], v_424, v_423);
    }
    env = stack[-16];
    setvalue(basic_elt(env, 6), v_423); // gg!*
    v_423 = qvalue(basic_elt(env, 1)); // thirdway!*
    if (v_423 == nil) goto v_359;
    v_424 = qvalue(basic_elt(env, 6)); // gg!*
    v_423 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 19); // newbasis
    v_423 = (*qfn2(fn))(fn, v_424, v_423);
    }
    env = stack[-16];
    goto v_357;
v_359:
    v_423 = qvalue(basic_elt(env, 2)); // shortway!*
    if (v_423 == nil) goto v_365;
    v_423 = qvalue(basic_elt(env, 6)); // gg!*
    stack[-4] = v_423;
v_370:
    v_423 = stack[-4];
    if (v_423 == nil) goto v_374;
    else goto v_375;
v_374:
    goto v_369;
v_375:
    v_423 = stack[-4];
    if (!car_legal(v_423)) v_423 = carerror(v_423); else
    v_423 = car(v_423);
    v_425 = v_423;
    v_423 = v_425;
    if (!car_legal(v_423)) v_424 = carerror(v_423); else
    v_424 = car(v_423);
    v_423 = qvalue(basic_elt(env, 17)); // ng!*
    if (equal(v_424, v_423)) goto v_384;
    stack[-3] = qvalue(basic_elt(env, 14)); // gv!*
    v_423 = v_425;
    if (!car_legal(v_423)) stack[-2] = carerror(v_423); else
    stack[-2] = car(v_423);
    v_423 = qvalue(basic_elt(env, 14)); // gv!*
    v_424 = v_425;
    if (!car_legal(v_424)) v_424 = carerror(v_424); else
    v_424 = car(v_424);
    stack[-1] = Lgetv(nil, v_423, v_424);
    env = stack[-16];
    stack[0] = qvalue(basic_elt(env, 17)); // ng!*
    v_424 = qvalue(basic_elt(env, 14)); // gv!*
    v_423 = qvalue(basic_elt(env, 17)); // ng!*
    v_423 = Lgetv(nil, v_424, v_423);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 25); // ljet
    v_423 = (*qfn1(fn))(fn, v_423);
    }
    env = stack[-16];
    v_423 = cons(stack[0], v_423);
    env = stack[-16];
    v_424 = ncons(v_423);
    env = stack[-16];
    v_423 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 29); // nf
    v_423 = (*qfn3(fn))(fn, stack[-1], v_424, v_423);
    }
    env = stack[-16];
    v_423 = Lputv(nil, stack[-3], stack[-2], v_423);
    env = stack[-16];
    goto v_382;
v_384:
v_382:
    v_423 = stack[-4];
    if (!car_legal(v_423)) v_423 = cdrerror(v_423); else
    v_423 = cdr(v_423);
    stack[-4] = v_423;
    goto v_370;
v_369:
    goto v_357;
v_365:
v_357:
    v_423 = stack[-5];
    if (!car_legal(v_423)) v_423 = cdrerror(v_423); else
    v_423 = cdr(v_423);
    stack[-5] = v_423;
    goto v_324;
v_323:
    goto v_19;
v_91:
v_20:
    {   LispObject fn = basic_elt(env, 30); // stat
    v_423 = (*qfn0(fn))(fn);
    }
    env = stack[-16];
    v_424 = stack[-11];
    v_423 = stack[-10];
    v_423 = static_cast<LispObject>(lesseq2(v_424, v_423));
    v_423 = v_423 ? lisp_true : nil;
    env = stack[-16];
    if (v_423 == nil) goto v_415;
    v_423 = qvalue(basic_elt(env, 6)); // gg!*
    {   LispObject fn = basic_elt(env, 31); // dim
    v_423 = (*qfn1(fn))(fn, v_423);
    }
    goto v_413;
v_415:
v_413:
    v_423 = nil;
    ;}  // end of a binding scope
    ;}  // end of a binding scope
    return onevalue(v_423);
}



// Code for st_flatten

static LispObject CC_st_flatten(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_63, v_64;
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
    v_63 = v_64;
    if (!car_legal(v_63)) v_63 = cdrerror(v_63); else
    v_63 = cdr(v_63);
    if (!car_legal(v_63)) v_63 = carerror(v_63); else
    v_63 = car(v_63);
    if (is_number(v_63)) goto v_6;
    else goto v_7;
v_6:
    v_63 = v_64;
    if (!car_legal(v_63)) v_63 = cdrerror(v_63); else
    v_63 = cdr(v_63);
    goto v_5;
v_7:
    v_63 = v_64;
    if (!car_legal(v_63)) v_63 = cdrerror(v_63); else
    v_63 = cdr(v_63);
    stack[-3] = v_63;
v_20:
    v_63 = stack[-3];
    if (v_63 == nil) goto v_26;
    else goto v_27;
v_26:
    v_63 = nil;
    goto v_19;
v_27:
    v_63 = stack[-3];
    if (!car_legal(v_63)) v_63 = carerror(v_63); else
    v_63 = car(v_63);
    {   LispObject fn = basic_elt(env, 0); // st_flatten
    v_63 = (*qfn1(fn))(fn, v_63);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 1); // copy
    v_63 = (*qfn1(fn))(fn, v_63);
    }
    env = stack[-4];
    stack[-2] = v_63;
    v_63 = stack[-2];
    {   LispObject fn = basic_elt(env, 2); // lastpair
    v_63 = (*qfn1(fn))(fn, v_63);
    }
    env = stack[-4];
    stack[-1] = v_63;
    v_63 = stack[-3];
    if (!car_legal(v_63)) v_63 = cdrerror(v_63); else
    v_63 = cdr(v_63);
    stack[-3] = v_63;
    v_63 = stack[-1];
    if (!consp(v_63)) goto v_42;
    else goto v_43;
v_42:
    goto v_20;
v_43:
v_21:
    v_63 = stack[-3];
    if (v_63 == nil) goto v_47;
    else goto v_48;
v_47:
    v_63 = stack[-2];
    goto v_19;
v_48:
    stack[0] = stack[-1];
    v_63 = stack[-3];
    if (!car_legal(v_63)) v_63 = carerror(v_63); else
    v_63 = car(v_63);
    {   LispObject fn = basic_elt(env, 0); // st_flatten
    v_63 = (*qfn1(fn))(fn, v_63);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 1); // copy
    v_63 = (*qfn1(fn))(fn, v_63);
    }
    env = stack[-4];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_63);
    v_63 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // lastpair
    v_63 = (*qfn1(fn))(fn, v_63);
    }
    env = stack[-4];
    stack[-1] = v_63;
    v_63 = stack[-3];
    if (!car_legal(v_63)) v_63 = cdrerror(v_63); else
    v_63 = cdr(v_63);
    stack[-3] = v_63;
    goto v_21;
v_19:
    goto v_5;
    v_63 = nil;
v_5:
    return onevalue(v_63);
}



// Code for dependsp

static LispObject CC_dependsp(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_87, v_88;
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
    v_87 = stack[0];
    if (v_87 == nil) goto v_7;
    else goto v_8;
v_7:
    v_87 = lisp_true;
    goto v_6;
v_8:
    v_88 = stack[-1];
    v_87 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // depends
    v_87 = (*qfn2(fn))(fn, v_88, v_87);
    }
    env = stack[-3];
    if (v_87 == nil) goto v_12;
    v_87 = stack[-1];
    goto v_6;
v_12:
    v_87 = stack[-1];
    if (!consp(v_87)) goto v_17;
    else goto v_18;
v_17:
    v_88 = stack[-1];
    v_87 = stack[0];
    if (v_88 == v_87) goto v_22;
    else goto v_23;
v_22:
    v_87 = stack[-1];
    goto v_21;
v_23:
    v_87 = nil;
    goto v_21;
    v_87 = nil;
v_21:
    goto v_6;
v_18:
    v_87 = stack[-1];
    if (!car_legal(v_87)) v_88 = carerror(v_87); else
    v_88 = car(v_87);
    v_87 = basic_elt(env, 1); // !*sq
    if (v_88 == v_87) goto v_30;
    else goto v_31;
v_30:
    v_87 = stack[-1];
    if (!car_legal(v_87)) v_87 = cdrerror(v_87); else
    v_87 = cdr(v_87);
    if (!car_legal(v_87)) v_88 = carerror(v_87); else
    v_88 = car(v_87);
    v_87 = stack[0];
    {
        LispObject fn = basic_elt(env, 4); // involvesq
        return (*qfn2(fn))(fn, v_88, v_87);
    }
v_31:
    v_87 = stack[-1];
    {   LispObject fn = basic_elt(env, 5); // taylorp
    v_87 = (*qfn1(fn))(fn, v_87);
    }
    env = stack[-3];
    if (v_87 == nil) goto v_41;
    v_88 = stack[0];
    v_87 = qvalue(basic_elt(env, 2)); // taylorvariable
    if (v_88 == v_87) goto v_46;
    else goto v_47;
v_46:
    v_87 = qvalue(basic_elt(env, 2)); // taylorvariable
    goto v_45;
v_47:
    v_87 = nil;
    goto v_45;
    v_87 = nil;
v_45:
    goto v_6;
v_41:
    v_88 = stack[-1];
    v_87 = stack[0];
    if (equal(v_88, v_87)) goto v_62;
    else goto v_63;
v_62:
    v_87 = stack[0];
    goto v_58;
v_63:
    v_87 = stack[-1];
    stack[-2] = v_87;
    v_87 = stack[-1];
    if (!car_legal(v_87)) v_87 = cdrerror(v_87); else
    v_87 = cdr(v_87);
    stack[-1] = v_87;
v_59:
    v_87 = stack[-1];
    if (v_87 == nil) goto v_72;
    else goto v_73;
v_72:
    v_87 = nil;
    goto v_58;
v_73:
    v_87 = stack[-1];
    if (!car_legal(v_87)) v_88 = carerror(v_87); else
    v_88 = car(v_87);
    v_87 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // dependsp
    v_87 = (*qfn2(fn))(fn, v_88, v_87);
    }
    env = stack[-3];
    if (v_87 == nil) goto v_79;
    v_87 = stack[-2];
    goto v_58;
v_79:
    v_87 = stack[-1];
    if (!car_legal(v_87)) v_87 = cdrerror(v_87); else
    v_87 = cdr(v_87);
    stack[-1] = v_87;
    goto v_59;
v_58:
    goto v_6;
    v_87 = nil;
v_6:
    return onevalue(v_87);
}



// Code for bf2rn1

static LispObject CC_bf2rn1(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_147, v_148, v_149, v_150;
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
    stack[-10] = nil;
    stack[-8] = nil;
    stack[-7] = nil;
    stack[-6] = nil;
    stack[-5] = nil;
    stack[-4] = nil;
    stack[-2] = nil;
    stack[0] = nil;
    v_147 = stack[-9];
    if (!car_legal(v_147)) v_147 = cdrerror(v_147); else
    v_147 = cdr(v_147);
    if (!car_legal(v_147)) v_148 = carerror(v_147); else
    v_148 = car(v_147);
    v_147 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_147 = static_cast<LispObject>(lessp2(v_148, v_147));
    v_147 = v_147 ? lisp_true : nil;
    env = stack[-11];
    if (v_147 == nil) goto v_21;
    v_147 = lisp_true;
    stack[-10] = v_147;
    v_147 = stack[-9];
    {   LispObject fn = basic_elt(env, 3); // minus!:
    v_147 = (*qfn1(fn))(fn, v_147);
    }
    env = stack[-11];
    stack[-9] = v_147;
    goto v_19;
v_21:
v_19:
    v_147 = stack[-9];
    stack[-3] = v_147;
v_17:
    v_147 = stack[-9];
    if (!car_legal(v_147)) v_147 = cdrerror(v_147); else
    v_147 = cdr(v_147);
    if (!car_legal(v_147)) v_148 = carerror(v_147); else
    v_148 = car(v_147);
    v_147 = stack[-9];
    if (!car_legal(v_147)) v_147 = cdrerror(v_147); else
    v_147 = cdr(v_147);
    if (!car_legal(v_147)) v_147 = cdrerror(v_147); else
    v_147 = cdr(v_147);
    v_150 = v_148;
    v_149 = v_147;
    v_148 = v_149;
    v_147 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_148 == v_147) goto v_41;
    else goto v_42;
v_41:
    v_147 = v_150;
    goto v_40;
v_42:
    v_147 = v_150;
    v_148 = v_149;
    {   LispObject fn = basic_elt(env, 4); // lshift
    v_147 = (*qfn2(fn))(fn, v_147, v_148);
    }
    env = stack[-11];
    goto v_40;
    v_147 = nil;
v_40:
    stack[-1] = v_147;
    v_149 = basic_elt(env, 1); // !:rd!:
    v_148 = stack[-1];
    v_147 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_147 = list2star(v_149, v_148, v_147);
    env = stack[-11];
    {   LispObject fn = basic_elt(env, 5); // normbf
    v_147 = (*qfn1(fn))(fn, v_147);
    }
    env = stack[-11];
    {   LispObject fn = basic_elt(env, 6); // difbf
    v_147 = (*qfn2(fn))(fn, stack[-9], v_147);
    }
    env = stack[-11];
    stack[-9] = v_147;
    v_147 = stack[-4];
    if (v_147 == nil) goto v_60;
    else goto v_61;
v_60:
    v_147 = lisp_true;
    stack[-4] = v_147;
    v_147 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-8] = v_147;
    v_147 = stack[-1];
    stack[-7] = v_147;
    v_147 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-6] = v_147;
    v_147 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-5] = v_147;
    goto v_59;
v_61:
    stack[-2] = stack[-8];
    v_148 = stack[-1];
    v_147 = stack[-7];
    v_147 = times2(v_148, v_147);
    env = stack[-11];
    v_147 = plus2(stack[-2], v_147);
    env = stack[-11];
    v_148 = v_147;
    v_147 = stack[-7];
    stack[-8] = v_147;
    v_147 = v_148;
    stack[-7] = v_147;
    v_147 = stack[0];
    stack[-2] = v_147;
    stack[0] = stack[-6];
    v_148 = stack[-1];
    v_147 = stack[-5];
    v_147 = times2(v_148, v_147);
    env = stack[-11];
    v_147 = plus2(stack[0], v_147);
    env = stack[-11];
    v_148 = v_147;
    v_147 = stack[-5];
    stack[-6] = v_147;
    v_147 = v_148;
    stack[-5] = v_147;
    goto v_59;
v_59:
    stack[-1] = stack[-3];
    v_149 = basic_elt(env, 1); // !:rd!:
    v_148 = stack[-7];
    v_147 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[0] = list2star(v_149, v_148, v_147);
    env = stack[-11];
    v_149 = basic_elt(env, 1); // !:rd!:
    v_148 = stack[-5];
    v_147 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_148 = list2star(v_149, v_148, v_147);
    env = stack[-11];
    v_147 = qvalue(basic_elt(env, 2)); // !:bprec!:
    {   LispObject fn = basic_elt(env, 7); // divide!:
    v_147 = (*qfn3(fn))(fn, stack[0], v_148, v_147);
    }
    env = stack[-11];
    {   LispObject fn = basic_elt(env, 5); // normbf
    v_147 = (*qfn1(fn))(fn, v_147);
    }
    env = stack[-11];
    {   LispObject fn = basic_elt(env, 6); // difbf
    v_147 = (*qfn2(fn))(fn, stack[-1], v_147);
    }
    env = stack[-11];
    {   LispObject fn = basic_elt(env, 8); // abs!:
    v_147 = (*qfn1(fn))(fn, v_147);
    }
    env = stack[-11];
    stack[0] = v_147;
    v_147 = stack[-9];
    {   LispObject fn = basic_elt(env, 9); // bfzerop!:
    v_147 = (*qfn1(fn))(fn, v_147);
    }
    env = stack[-11];
    if (v_147 == nil) goto v_103;
    else goto v_101;
v_103:
    v_147 = stack[0];
    {   LispObject fn = basic_elt(env, 9); // bfzerop!:
    v_147 = (*qfn1(fn))(fn, v_147);
    }
    env = stack[-11];
    if (v_147 == nil) goto v_106;
    else goto v_101;
v_106:
    goto v_102;
v_101:
    v_147 = stack[-10];
    if (v_147 == nil) goto v_112;
    v_147 = stack[-7];
    v_148 = negate(v_147);
    v_147 = stack[-5];
    return cons(v_148, v_147);
v_112:
    v_148 = stack[-7];
    v_147 = stack[-5];
    return cons(v_148, v_147);
    v_147 = nil;
    goto v_16;
v_102:
    v_147 = stack[-2];
    if (v_147 == nil) goto v_124;
    v_148 = stack[-2];
    v_147 = stack[0];
    {   LispObject fn = basic_elt(env, 10); // greaterp!:
    v_147 = (*qfn2(fn))(fn, v_148, v_147);
    }
    env = stack[-11];
    if (v_147 == nil) goto v_127;
    else goto v_124;
v_127:
    v_147 = stack[-10];
    if (v_147 == nil) goto v_134;
    v_147 = stack[-8];
    v_148 = negate(v_147);
    v_147 = stack[-6];
    return cons(v_148, v_147);
v_134:
    v_148 = stack[-8];
    v_147 = stack[-6];
    return cons(v_148, v_147);
    v_147 = nil;
    goto v_16;
v_124:
    v_147 = stack[-9];
    {   LispObject fn = basic_elt(env, 11); // invbf
    v_147 = (*qfn1(fn))(fn, v_147);
    }
    env = stack[-11];
    stack[-9] = v_147;
    goto v_17;
v_16:
    return onevalue(v_147);
}



// Code for anu_mk

static LispObject CC_anu_mk(LispObject env,
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
    v_11 = basic_elt(env, 1); // anu
    return list3(v_11, v_10, v_9);
}



// Code for conjgd

static LispObject CC_conjgd(LispObject env,
                         LispObject v_2)
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
    v_131 = nil;
    v_130 = stack[-1];
    if (!consp(v_130)) goto v_9;
    else goto v_10;
v_9:
    v_130 = stack[-1];
    goto v_8;
v_10:
    v_130 = stack[-1];
    if (!consp(v_130)) goto v_21;
    else goto v_22;
v_21:
    v_130 = lisp_true;
    goto v_20;
v_22:
    v_130 = stack[-1];
    if (!car_legal(v_130)) v_130 = carerror(v_130); else
    v_130 = car(v_130);
    v_130 = (consp(v_130) ? nil : lisp_true);
    goto v_20;
    v_130 = nil;
v_20:
    if (v_130 == nil) goto v_18;
    v_130 = stack[-1];
    if (!car_legal(v_130)) v_131 = carerror(v_130); else
    v_131 = car(v_130);
    v_130 = basic_elt(env, 1); // cmpxfn
    v_130 = get(v_131, v_130);
    env = stack[-3];
    v_131 = v_130;
    goto v_16;
v_18:
    v_130 = nil;
    goto v_16;
    v_130 = nil;
v_16:
    if (v_130 == nil) goto v_14;
    stack[-2] = v_131;
    v_130 = stack[-1];
    if (!car_legal(v_130)) v_130 = cdrerror(v_130); else
    v_130 = cdr(v_130);
    if (!car_legal(v_130)) stack[0] = carerror(v_130); else
    stack[0] = car(v_130);
    v_130 = stack[-1];
    if (!car_legal(v_130)) v_130 = cdrerror(v_130); else
    v_130 = cdr(v_130);
    if (!car_legal(v_130)) v_130 = cdrerror(v_130); else
    v_130 = cdr(v_130);
    if (is_number(v_130)) goto v_44;
    else goto v_45;
v_44:
    v_130 = stack[-1];
    if (!car_legal(v_130)) v_130 = cdrerror(v_130); else
    v_130 = cdr(v_130);
    if (!car_legal(v_130)) v_130 = cdrerror(v_130); else
    v_130 = cdr(v_130);
    v_130 = negate(v_130);
    goto v_43;
v_45:
    v_130 = stack[-1];
    if (!car_legal(v_130)) v_130 = cdrerror(v_130); else
    v_130 = cdr(v_130);
    if (!car_legal(v_130)) v_130 = cdrerror(v_130); else
    v_130 = cdr(v_130);
    if (!consp(v_130)) goto v_61;
    else goto v_62;
v_61:
    v_130 = lisp_true;
    goto v_60;
v_62:
    v_130 = stack[-1];
    if (!car_legal(v_130)) v_130 = cdrerror(v_130); else
    v_130 = cdr(v_130);
    if (!car_legal(v_130)) v_130 = cdrerror(v_130); else
    v_130 = cdr(v_130);
    if (!car_legal(v_130)) v_130 = carerror(v_130); else
    v_130 = car(v_130);
    v_130 = (consp(v_130) ? nil : lisp_true);
    goto v_60;
    v_130 = nil;
v_60:
    if (v_130 == nil) goto v_58;
    v_130 = stack[-1];
    if (!car_legal(v_130)) v_130 = cdrerror(v_130); else
    v_130 = cdr(v_130);
    if (!car_legal(v_130)) v_130 = cdrerror(v_130); else
    v_130 = cdr(v_130);
    if (!car_legal(v_130)) v_130 = carerror(v_130); else
    v_130 = car(v_130);
    v_130 = (is_number(v_130) ? lisp_true : nil);
    v_130 = (v_130 == nil ? lisp_true : nil);
    goto v_56;
v_58:
    v_130 = nil;
    goto v_56;
    v_130 = nil;
v_56:
    if (v_130 == nil) goto v_54;
    v_130 = stack[-1];
    if (!car_legal(v_130)) v_130 = cdrerror(v_130); else
    v_130 = cdr(v_130);
    if (!car_legal(v_130)) v_130 = cdrerror(v_130); else
    v_130 = cdr(v_130);
    {   LispObject fn = basic_elt(env, 3); // !:minus
    v_130 = (*qfn1(fn))(fn, v_130);
    }
    goto v_43;
v_54:
    v_130 = stack[-1];
    if (!car_legal(v_130)) v_131 = carerror(v_130); else
    v_131 = car(v_130);
    v_130 = basic_elt(env, 2); // realtype
    v_131 = get(v_131, v_130);
    env = stack[-3];
    v_130 = stack[-1];
    if (!car_legal(v_130)) v_130 = cdrerror(v_130); else
    v_130 = cdr(v_130);
    if (!car_legal(v_130)) v_130 = cdrerror(v_130); else
    v_130 = cdr(v_130);
    v_130 = cons(v_131, v_130);
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 3); // !:minus
    v_130 = (*qfn1(fn))(fn, v_130);
    }
    if (!car_legal(v_130)) v_130 = cdrerror(v_130); else
    v_130 = cdr(v_130);
    goto v_43;
    v_130 = nil;
v_43:
    {
        LispObject v_135 = stack[-2];
        LispObject v_136 = stack[0];
        return Lapply2(nil, v_135, v_136, v_130);
    }
v_14:
    v_130 = stack[-1];
    if (!consp(v_130)) goto v_103;
    else goto v_104;
v_103:
    v_130 = lisp_true;
    goto v_102;
v_104:
    v_130 = stack[-1];
    if (!car_legal(v_130)) v_130 = carerror(v_130); else
    v_130 = car(v_130);
    v_130 = (consp(v_130) ? nil : lisp_true);
    goto v_102;
    v_130 = nil;
v_102:
    if (v_130 == nil) goto v_100;
    v_130 = stack[-1];
    goto v_8;
v_100:
    v_130 = stack[-1];
    if (!car_legal(v_130)) v_130 = carerror(v_130); else
    v_130 = car(v_130);
    if (!car_legal(v_130)) v_131 = carerror(v_130); else
    v_131 = car(v_130);
    v_130 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_130 = cons(v_131, v_130);
    env = stack[-3];
    stack[0] = ncons(v_130);
    env = stack[-3];
    v_130 = stack[-1];
    if (!car_legal(v_130)) v_130 = carerror(v_130); else
    v_130 = car(v_130);
    if (!car_legal(v_130)) v_130 = cdrerror(v_130); else
    v_130 = cdr(v_130);
    {   LispObject fn = basic_elt(env, 0); // conjgd
    v_130 = (*qfn1(fn))(fn, v_130);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 4); // multf
    stack[0] = (*qfn2(fn))(fn, stack[0], v_130);
    }
    env = stack[-3];
    v_130 = stack[-1];
    if (!car_legal(v_130)) v_130 = cdrerror(v_130); else
    v_130 = cdr(v_130);
    {   LispObject fn = basic_elt(env, 0); // conjgd
    v_130 = (*qfn1(fn))(fn, v_130);
    }
    env = stack[-3];
    {
        LispObject v_137 = stack[0];
        LispObject fn = basic_elt(env, 5); // addf
        return (*qfn2(fn))(fn, v_137, v_130);
    }
    v_130 = nil;
v_8:
    return onevalue(v_130);
}



// Code for mk_character

static LispObject CC_mk_character(LispObject env,
                         LispObject v_2)
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
    v_62 = stack[-5];
    {   LispObject fn = basic_elt(env, 1); // get_group_in
    v_62 = (*qfn1(fn))(fn, v_62);
    }
    env = stack[-7];
    stack[-6] = v_62;
    v_62 = stack[-6];
    {   LispObject fn = basic_elt(env, 2); // get!*elements
    v_62 = (*qfn1(fn))(fn, v_62);
    }
    env = stack[-7];
    stack[-4] = v_62;
    v_62 = stack[-4];
    if (v_62 == nil) goto v_21;
    else goto v_22;
v_21:
    v_62 = nil;
    goto v_15;
v_22:
    v_62 = stack[-4];
    if (!car_legal(v_62)) v_62 = carerror(v_62); else
    v_62 = car(v_62);
    stack[0] = v_62;
    v_63 = v_62;
    v_62 = stack[-5];
    {   LispObject fn = basic_elt(env, 3); // get_rep_matrix_in
    v_62 = (*qfn2(fn))(fn, v_63, v_62);
    }
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 4); // mk!+trace
    v_62 = (*qfn1(fn))(fn, v_62);
    }
    env = stack[-7];
    v_62 = list2(stack[0], v_62);
    env = stack[-7];
    v_62 = ncons(v_62);
    env = stack[-7];
    stack[-2] = v_62;
    stack[-3] = v_62;
v_16:
    v_62 = stack[-4];
    if (!car_legal(v_62)) v_62 = cdrerror(v_62); else
    v_62 = cdr(v_62);
    stack[-4] = v_62;
    v_62 = stack[-4];
    if (v_62 == nil) goto v_39;
    else goto v_40;
v_39:
    v_62 = stack[-3];
    goto v_15;
v_40:
    stack[-1] = stack[-2];
    v_62 = stack[-4];
    if (!car_legal(v_62)) v_62 = carerror(v_62); else
    v_62 = car(v_62);
    stack[0] = v_62;
    v_63 = v_62;
    v_62 = stack[-5];
    {   LispObject fn = basic_elt(env, 3); // get_rep_matrix_in
    v_62 = (*qfn2(fn))(fn, v_63, v_62);
    }
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 4); // mk!+trace
    v_62 = (*qfn1(fn))(fn, v_62);
    }
    env = stack[-7];
    v_62 = list2(stack[0], v_62);
    env = stack[-7];
    v_62 = ncons(v_62);
    env = stack[-7];
    if (!car_legal(stack[-1])) rplacd_fails(stack[-1]);
    setcdr(stack[-1], v_62);
    v_62 = stack[-2];
    if (!car_legal(v_62)) v_62 = cdrerror(v_62); else
    v_62 = cdr(v_62);
    stack[-2] = v_62;
    goto v_16;
v_15:
    stack[0] = v_62;
    v_62 = stack[-6];
    v_63 = ncons(v_62);
    v_62 = stack[0];
        return Lappend_2(nil, v_63, v_62);
    return onevalue(v_62);
}



// Code for rl_cput

static LispObject CC_rl_cput(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_19, v_20, v_21, v_22;
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
    v_19 = v_4;
    v_21 = v_3;
    v_22 = v_2;
// end of prologue
    v_20 = v_19;
    v_19 = v_21;
    v_19 = get(v_20, v_19);
    v_20 = v_19;
    v_19 = v_20;
    if (v_19 == nil) goto v_13;
    v_19 = v_22;
        return Lputprop(nil, v_19, v_21, v_20);
v_13:
    v_19 = nil;
    return onevalue(v_19);
}



// Code for acfsf_smmkatl

static LispObject CC_acfsf_smmkatl(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_11, v_12, v_13, v_14;
    LispObject v_5;
    if (_a4up_ == nil)
        aerror1("not enough arguments provided", basic_elt(env, 0));
    v_5 = car(_a4up_); _a4up_ = cdr(_a4up_);
    if (_a4up_ != nil)
        aerror1("too many arguments provided", basic_elt(env, 0));
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_11 = v_5;
    v_12 = v_4;
    v_13 = v_3;
    v_14 = v_2;
// end of prologue
    v_13 = v_14;
    {
        LispObject fn = basic_elt(env, 1); // acfsf_irl2atl
        return (*qfn3(fn))(fn, v_13, v_12, v_11);
    }
}



// Code for vp1

static LispObject CC_vp1(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    v_40 = nil;
v_9:
    v_38 = stack[0];
    if (v_38 == nil) goto v_12;
    else goto v_13;
v_12:
    stack[0] = v_40;
    v_38 = basic_elt(env, 1); // "Var not in z-list after all"
    {   LispObject fn = basic_elt(env, 2); // interr
    v_38 = (*qfn1(fn))(fn, v_38);
    }
    env = stack[-3];
    {
        LispObject v_44 = stack[0];
        LispObject fn = basic_elt(env, 3); // nreverse
        return (*qfn2(fn))(fn, v_44, v_38);
    }
v_13:
    v_39 = stack[-2];
    v_38 = stack[0];
    if (!car_legal(v_38)) v_38 = carerror(v_38); else
    v_38 = car(v_38);
    if (equal(v_39, v_38)) goto v_19;
    else goto v_20;
v_19:
    stack[-2] = v_40;
    v_38 = stack[0];
    if (!car_legal(v_38)) v_38 = cdrerror(v_38); else
    v_38 = cdr(v_38);
    {   LispObject fn = basic_elt(env, 4); // vp2
    v_38 = (*qfn1(fn))(fn, v_38);
    }
    env = stack[-3];
    v_38 = cons(stack[-1], v_38);
    env = stack[-3];
    {
        LispObject v_45 = stack[-2];
        LispObject fn = basic_elt(env, 3); // nreverse
        return (*qfn2(fn))(fn, v_45, v_38);
    }
v_20:
    v_38 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_39 = v_40;
    v_38 = cons(v_38, v_39);
    env = stack[-3];
    v_40 = v_38;
    v_38 = stack[0];
    if (!car_legal(v_38)) v_38 = cdrerror(v_38); else
    v_38 = cdr(v_38);
    stack[0] = v_38;
    goto v_9;
    v_38 = nil;
    return onevalue(v_38);
}



// Code for ps!:depvar

static LispObject CC_psTdepvar(LispObject env,
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
    v_35 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    {
        LispObject fn = basic_elt(env, 2); // ps!:getv
        return (*qfn2(fn))(fn, v_36, v_35);
    }
    v_35 = nil;
v_5:
    return onevalue(v_35);
}



// Code for numberofoccs

static LispObject CC_numberofoccs(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    v_55 = stack[0];
    if (!consp(v_55)) goto v_7;
    else goto v_8;
v_7:
    v_56 = stack[-1];
    v_55 = stack[0];
    if (equal(v_56, v_55)) goto v_12;
    else goto v_13;
v_12:
    v_55 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_11;
v_13:
    v_55 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_11;
    v_55 = nil;
v_11:
    goto v_6;
v_8:
    v_55 = stack[0];
    if (!car_legal(v_55)) v_55 = cdrerror(v_55); else
    v_55 = cdr(v_55);
    if (v_55 == nil) goto v_26;
    v_56 = stack[-1];
    v_55 = stack[0];
    if (!car_legal(v_55)) v_55 = cdrerror(v_55); else
    v_55 = cdr(v_55);
    {   LispObject fn = basic_elt(env, 0); // numberofoccs
    v_55 = (*qfn2(fn))(fn, v_56, v_55);
    }
    env = stack[-3];
    stack[-2] = v_55;
    goto v_24;
v_26:
    v_55 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-2] = v_55;
    goto v_24;
    stack[-2] = nil;
v_24:
    v_56 = stack[-1];
    v_55 = stack[0];
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    if (equal(v_56, v_55)) goto v_38;
    else goto v_39;
v_38:
    v_55 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_37;
v_39:
    v_55 = stack[0];
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    if (!consp(v_55)) goto v_45;
    v_56 = stack[-1];
    v_55 = stack[0];
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    {   LispObject fn = basic_elt(env, 0); // numberofoccs
    v_55 = (*qfn2(fn))(fn, v_56, v_55);
    }
    goto v_37;
v_45:
    v_55 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_37;
    v_55 = nil;
v_37:
    {
        LispObject v_60 = stack[-2];
        return plus2(v_60, v_55);
    }
    v_55 = nil;
v_6:
    return onevalue(v_55);
}



// Code for !:mod!:units

static LispObject CC_TmodTunits(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_53, v_54;
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
    v_54 = stack[-3];
    v_53 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_54 == v_53) goto v_9;
    else goto v_10;
v_9:
    v_53 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_8;
v_10:
    v_54 = stack[-3];
    v_53 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_54 == v_53) goto v_14;
    else goto v_15;
v_14:
    v_54 = stack[-1];
    v_53 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_53 = static_cast<LispObject>(lessp2(v_54, v_53));
    v_53 = v_53 ? lisp_true : nil;
    env = stack[-6];
    if (v_53 == nil) goto v_21;
    v_53 = stack[-1];
    v_54 = qvalue(basic_elt(env, 1)); // current!-modulus
    return plus2(v_53, v_54);
v_21:
    v_53 = stack[-1];
    goto v_19;
    v_53 = nil;
v_19:
    goto v_8;
v_15:
    v_54 = stack[-4];
    v_53 = stack[-3];
    v_53 = quot2(v_54, v_53);
    env = stack[-6];
    stack[-5] = v_53;
    stack[0] = stack[-3];
    v_54 = stack[-3];
    v_53 = stack[-5];
    v_53 = times2(v_54, v_53);
    env = stack[-6];
    stack[-4] = difference2(stack[-4], v_53);
    env = stack[-6];
    stack[-3] = stack[-1];
    v_54 = stack[-1];
    v_53 = stack[-5];
    v_53 = times2(v_54, v_53);
    env = stack[-6];
    v_53 = difference2(stack[-2], v_53);
    env = stack[-6];
    v_53 = ncons(v_53);
    env = stack[-6];
    {
        LispObject v_61 = stack[0];
        LispObject v_62 = stack[-4];
        LispObject v_63 = stack[-3];
        LispObject fn = basic_elt(env, 0); // !:mod!:units
        return (*qfn4up(fn))(fn, v_61, v_62, v_63, v_53);
    }
    goto v_8;
    v_53 = nil;
v_8:
    return onevalue(v_53);
}



// Code for idealp

static LispObject CC_idealp(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_17, v_18, v_19;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_19 = v_2;
// end of prologue
    v_18 = v_19;
    v_17 = basic_elt(env, 1); // i
    if (!consp(v_18)) goto v_7;
    v_18 = car(v_18);
    if (v_18 == v_17) goto v_6;
    else goto v_7;
v_6:
    v_17 = lisp_true;
    goto v_5;
v_7:
    v_17 = v_19;
    v_18 = basic_elt(env, 2); // list
        return Leqcar(nil, v_17, v_18);
    v_17 = nil;
v_5:
    return onevalue(v_17);
}



// Code for lexorder

static LispObject CC_lexorder(LispObject env,
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
    real_push(nil, nil, nil, nil, nil);
    stack_popper stack_popper_var(6);
// copy arguments values to proper place
    v_43 = v_2;
// end of prologue
    stack[-4] = nil;
    stack[-3] = v_43;
v_11:
    v_43 = stack[-3];
    if (v_43 == nil) goto v_15;
    else goto v_16;
v_15:
    goto v_10;
v_16:
    v_43 = stack[-3];
    if (!car_legal(v_43)) v_43 = carerror(v_43); else
    v_43 = car(v_43);
    stack[-2] = v_43;
    stack[-1] = qvalue(basic_elt(env, 1)); // gv!*
    v_43 = stack[-2];
    if (!car_legal(v_43)) stack[0] = carerror(v_43); else
    stack[0] = car(v_43);
    v_44 = qvalue(basic_elt(env, 1)); // gv!*
    v_43 = stack[-2];
    if (!car_legal(v_43)) v_43 = carerror(v_43); else
    v_43 = car(v_43);
    v_43 = Lgetv(nil, v_44, v_43);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 2); // !*g2lex
    v_43 = (*qfn1(fn))(fn, v_43);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 3); // gcdout
    v_43 = (*qfn1(fn))(fn, v_43);
    }
    env = stack[-5];
    v_43 = Lputv(nil, stack[-1], stack[0], v_43);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 4); // ljet
    v_43 = (*qfn1(fn))(fn, v_43);
    }
    env = stack[-5];
    v_44 = stack[-2];
    if (!car_legal(v_44)) v_44 = carerror(v_44); else
    v_44 = car(v_44);
    v_44 = cons(v_44, v_43);
    env = stack[-5];
    v_43 = stack[-4];
    {   LispObject fn = basic_elt(env, 5); // insert
    v_43 = (*qfn2(fn))(fn, v_44, v_43);
    }
    env = stack[-5];
    stack[-4] = v_43;
    v_43 = stack[-3];
    if (!car_legal(v_43)) v_43 = cdrerror(v_43); else
    v_43 = cdr(v_43);
    stack[-3] = v_43;
    goto v_11;
v_10:
    v_43 = stack[-4];
    return onevalue(v_43);
}



// Code for pst_partition

static LispObject CC_pst_partition(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_94, v_95, v_96;
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
    v_94 = v_2;
// end of prologue
    stack[-5] = nil;
    stack[-2] = v_94;
v_14:
    v_94 = stack[-2];
    if (v_94 == nil) goto v_18;
    else goto v_19;
v_18:
    goto v_13;
v_19:
    v_94 = stack[-2];
    if (!car_legal(v_94)) v_94 = carerror(v_94); else
    v_94 = car(v_94);
    stack[-1] = v_94;
    v_96 = stack[-1];
    v_95 = stack[-4];
    v_94 = stack[-3];
    {   LispObject fn = basic_elt(env, 2); // pst_d
    v_94 = (*qfn3(fn))(fn, v_96, v_95, v_94);
    }
    env = stack[-6];
    v_95 = v_94;
    v_96 = v_95;
    v_94 = stack[-5];
    v_94 = Lassoc(nil, v_96, v_94);
    v_96 = v_94;
    if (v_94 == nil) goto v_32;
    stack[0] = v_96;
    v_94 = stack[-1];
    v_95 = v_96;
    if (!car_legal(v_95)) v_95 = cdrerror(v_95); else
    v_95 = cdr(v_95);
    v_94 = cons(v_94, v_95);
    env = stack[-6];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_94);
    goto v_30;
v_32:
    stack[0] = v_95;
    v_94 = stack[-1];
    v_95 = ncons(v_94);
    env = stack[-6];
    v_94 = stack[-5];
    v_94 = acons(stack[0], v_95, v_94);
    env = stack[-6];
    stack[-5] = v_94;
    goto v_30;
v_30:
    v_94 = stack[-2];
    if (!car_legal(v_94)) v_94 = cdrerror(v_94); else
    v_94 = cdr(v_94);
    stack[-2] = v_94;
    goto v_14;
v_13:
    v_95 = stack[-5];
    v_94 = basic_elt(env, 1); // lambda_sorneshiwvd12
    {   LispObject fn = basic_elt(env, 3); // sort
    v_94 = (*qfn2(fn))(fn, v_95, v_94);
    }
    env = stack[-6];
    stack[-5] = v_94;
    v_94 = stack[-5];
    stack[-3] = v_94;
    v_94 = stack[-3];
    if (v_94 == nil) goto v_64;
    else goto v_65;
v_64:
    v_94 = nil;
    goto v_59;
v_65:
    v_94 = stack[-3];
    if (!car_legal(v_94)) v_94 = carerror(v_94); else
    v_94 = car(v_94);
    if (!car_legal(v_94)) v_94 = cdrerror(v_94); else
    v_94 = cdr(v_94);
    v_94 = Lreverse(nil, v_94);
    env = stack[-6];
    v_94 = ncons(v_94);
    env = stack[-6];
    stack[-1] = v_94;
    stack[-2] = v_94;
v_60:
    v_94 = stack[-3];
    if (!car_legal(v_94)) v_94 = cdrerror(v_94); else
    v_94 = cdr(v_94);
    stack[-3] = v_94;
    v_94 = stack[-3];
    if (v_94 == nil) goto v_79;
    else goto v_80;
v_79:
    v_94 = stack[-2];
    goto v_59;
v_80:
    stack[0] = stack[-1];
    v_94 = stack[-3];
    if (!car_legal(v_94)) v_94 = carerror(v_94); else
    v_94 = car(v_94);
    if (!car_legal(v_94)) v_94 = cdrerror(v_94); else
    v_94 = cdr(v_94);
    v_94 = Lreverse(nil, v_94);
    env = stack[-6];
    v_94 = ncons(v_94);
    env = stack[-6];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_94);
    v_94 = stack[-1];
    if (!car_legal(v_94)) v_94 = cdrerror(v_94); else
    v_94 = cdr(v_94);
    stack[-1] = v_94;
    goto v_60;
v_59:
    return onevalue(v_94);
}



// Code for lambda_sorneshiwvd12

static LispObject CC_lambda_sorneshiwvd12(LispObject env,
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
    if (!car_legal(v_11)) v_11 = carerror(v_11); else
    v_11 = car(v_11);
    if (!car_legal(v_10)) v_10 = carerror(v_10); else
    v_10 = car(v_10);
    {
        LispObject fn = basic_elt(env, 1); // numlist_ordp
        return (*qfn2(fn))(fn, v_11, v_10);
    }
}



// Code for bibasis

static LispObject CC_bibasis(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_170, v_171;
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
    stack[-1] = v_4;
    stack[-2] = v_3;
    stack[-3] = v_2;
// end of prologue
    stack[-4] = nil;
    v_170 = stack[-3];
    if (v_170 == nil) goto v_14;
    v_170 = stack[-3];
    if (!car_legal(v_170)) v_171 = carerror(v_170); else
    v_171 = car(v_170);
    v_170 = basic_elt(env, 1); // list
    if (v_171 == v_170) goto v_14;
    v_170 = stack[-3];
    {   LispObject fn = basic_elt(env, 15); // mathprint
    v_170 = (*qfn1(fn))(fn, v_170);
    }
    env = stack[-5];
    v_170 = basic_elt(env, 2); // "is not a polynomial list"
    {   LispObject fn = basic_elt(env, 16); // rederr
    v_170 = (*qfn1(fn))(fn, v_170);
    }
    env = stack[-5];
    goto v_12;
v_14:
v_12:
    v_170 = stack[-3];
    if (!car_legal(v_170)) v_170 = cdrerror(v_170); else
    v_170 = cdr(v_170);
    if (v_170 == nil) goto v_28;
    else goto v_29;
v_28:
    v_170 = stack[-3];
    {   LispObject fn = basic_elt(env, 15); // mathprint
    v_170 = (*qfn1(fn))(fn, v_170);
    }
    env = stack[-5];
    v_170 = basic_elt(env, 3); // "polynomial list is empty"
    {   LispObject fn = basic_elt(env, 16); // rederr
    v_170 = (*qfn1(fn))(fn, v_170);
    }
    env = stack[-5];
    goto v_27;
v_29:
v_27:
    v_170 = stack[-2];
    if (v_170 == nil) goto v_40;
    v_170 = stack[-2];
    if (!car_legal(v_170)) v_171 = carerror(v_170); else
    v_171 = car(v_170);
    v_170 = basic_elt(env, 1); // list
    if (v_171 == v_170) goto v_40;
    v_170 = stack[-2];
    {   LispObject fn = basic_elt(env, 15); // mathprint
    v_170 = (*qfn1(fn))(fn, v_170);
    }
    env = stack[-5];
    v_170 = basic_elt(env, 4); // "is not a variable list"
    {   LispObject fn = basic_elt(env, 16); // rederr
    v_170 = (*qfn1(fn))(fn, v_170);
    }
    env = stack[-5];
    goto v_38;
v_40:
v_38:
    v_170 = stack[-2];
    if (!car_legal(v_170)) v_170 = cdrerror(v_170); else
    v_170 = cdr(v_170);
    if (v_170 == nil) goto v_54;
    else goto v_55;
v_54:
    v_170 = stack[-2];
    {   LispObject fn = basic_elt(env, 15); // mathprint
    v_170 = (*qfn1(fn))(fn, v_170);
    }
    env = stack[-5];
    v_170 = basic_elt(env, 5); // "variable list is empty"
    {   LispObject fn = basic_elt(env, 16); // rederr
    v_170 = (*qfn1(fn))(fn, v_170);
    }
    env = stack[-5];
    goto v_53;
v_55:
v_53:
    v_171 = stack[-1];
    v_170 = basic_elt(env, 6); // lex
    if (v_171 == v_170) goto v_70;
    v_171 = stack[-1];
    v_170 = basic_elt(env, 7); // deglex
    if (v_171 == v_170) goto v_76;
    v_171 = stack[-1];
    v_170 = basic_elt(env, 8); // degrevlex
    v_170 = Lneq_2(nil, v_171, v_170);
    env = stack[-5];
    goto v_74;
v_76:
    v_170 = nil;
    goto v_74;
    v_170 = nil;
v_74:
    goto v_68;
v_70:
    v_170 = nil;
    goto v_68;
    v_170 = nil;
v_68:
    if (v_170 == nil) goto v_66;
    v_170 = stack[-1];
    {   LispObject fn = basic_elt(env, 15); // mathprint
    v_170 = (*qfn1(fn))(fn, v_170);
    }
    env = stack[-5];
    v_170 = basic_elt(env, 9); // " is unsupported monomial ordering"
    {   LispObject fn = basic_elt(env, 16); // rederr
    v_170 = (*qfn1(fn))(fn, v_170);
    }
    env = stack[-5];
    goto v_64;
v_66:
v_64:
    v_170 = stack[-2];
    if (!car_legal(v_170)) v_170 = cdrerror(v_170); else
    v_170 = cdr(v_170);
    setvalue(basic_elt(env, 10), v_170); // fluidbibasisvariables
    v_170 = stack[-1];
    setvalue(basic_elt(env, 11), v_170); // fluidbibasismonomialorder
    {   LispObject fn = basic_elt(env, 17); // init
    v_170 = (*qfn0(fn))(fn);
    }
    env = stack[-5];
    v_170 = nil;
    v_170 = ncons(v_170);
    env = stack[-5];
    stack[-2] = v_170;
    v_170 = stack[-3];
    if (v_170 == nil) goto v_102;
    v_170 = stack[-3];
    if (!car_legal(v_170)) v_170 = cdrerror(v_170); else
    v_170 = cdr(v_170);
    stack[-3] = v_170;
v_107:
    v_170 = stack[-3];
    if (v_170 == nil) goto v_112;
    else goto v_113;
v_112:
    goto v_106;
v_113:
    v_170 = stack[-3];
    if (!car_legal(v_170)) v_170 = carerror(v_170); else
    v_170 = car(v_170);
    stack[-1] = stack[-2];
    {   LispObject fn = basic_elt(env, 18); // reval
    v_170 = (*qfn1(fn))(fn, v_170);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 19); // simp
    v_170 = (*qfn1(fn))(fn, v_170);
    }
    env = stack[-5];
    if (!car_legal(v_170)) v_170 = carerror(v_170); else
    v_170 = car(v_170);
    {   LispObject fn = basic_elt(env, 20); // polynomread
    v_170 = (*qfn1(fn))(fn, v_170);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 21); // sortedpolynomlistinsert
    v_170 = (*qfn2(fn))(fn, stack[-1], v_170);
    }
    env = stack[-5];
    v_170 = stack[-3];
    if (!car_legal(v_170)) v_170 = cdrerror(v_170); else
    v_170 = cdr(v_170);
    stack[-3] = v_170;
    goto v_107;
v_106:
    goto v_100;
v_102:
v_100:
    v_170 = Ltime(nil);
    env = stack[-5];
    setvalue(basic_elt(env, 12), v_170); // fluidbibasisrunningtime
    v_170 = Lgctime(nil);
    env = stack[-5];
    setvalue(basic_elt(env, 13), v_170); // fluidbibasisgctime
    v_171 = stack[-2];
    v_170 = stack[0];
    {   LispObject fn = basic_elt(env, 22); // constructinvolutivebasis
    v_170 = (*qfn2(fn))(fn, v_171, v_170);
    }
    env = stack[-5];
    stack[-2] = v_170;
    v_171 = Lgctime(nil);
    env = stack[-5];
    v_170 = qvalue(basic_elt(env, 13)); // fluidbibasisgctime
    v_170 = difference2(v_171, v_170);
    env = stack[-5];
    setvalue(basic_elt(env, 13), v_170); // fluidbibasisgctime
    v_171 = Ltime(nil);
    env = stack[-5];
    v_170 = qvalue(basic_elt(env, 12)); // fluidbibasisrunningtime
    v_171 = difference2(v_171, v_170);
    env = stack[-5];
    v_170 = qvalue(basic_elt(env, 13)); // fluidbibasisgctime
    v_170 = difference2(v_171, v_170);
    env = stack[-5];
    setvalue(basic_elt(env, 12), v_170); // fluidbibasisrunningtime
v_145:
    v_170 = stack[-2];
    if (!car_legal(v_170)) v_170 = carerror(v_170); else
    v_170 = car(v_170);
    if (v_170 == nil) goto v_148;
    else goto v_149;
v_148:
    goto v_144;
v_149:
    stack[0] = basic_elt(env, 14); // !*sq
    v_170 = stack[-2];
    if (!car_legal(v_170)) v_170 = carerror(v_170); else
    v_170 = car(v_170);
    {   LispObject fn = basic_elt(env, 23); // polynomwrite
    v_171 = (*qfn1(fn))(fn, v_170);
    }
    env = stack[-5];
    v_170 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_171 = cons(v_171, v_170);
    env = stack[-5];
    v_170 = lisp_true;
    v_171 = list3(stack[0], v_171, v_170);
    env = stack[-5];
    v_170 = stack[-4];
    v_170 = cons(v_171, v_170);
    env = stack[-5];
    stack[-4] = v_170;
    v_170 = stack[-2];
    if (!car_legal(v_170)) v_170 = cdrerror(v_170); else
    v_170 = cdr(v_170);
    stack[-2] = v_170;
    goto v_145;
v_144:
    stack[0] = basic_elt(env, 1); // list
    v_170 = stack[-4];
    v_170 = Lreverse(nil, v_170);
    {
        LispObject v_177 = stack[0];
        return cons(v_177, v_170);
    }
    return onevalue(v_170);
}



// Code for evalleq

static LispObject CC_evalleq(LispObject env,
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
    v_9 = v_3;
    v_10 = v_2;
// end of prologue
    {   LispObject fn = basic_elt(env, 1); // evalgreaterp
    v_9 = (*qfn2(fn))(fn, v_10, v_9);
    }
    v_9 = (v_9 == nil ? lisp_true : nil);
    return onevalue(v_9);
}



// Code for taysimpsq!*

static LispObject CC_taysimpsqH(LispObject env,
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
// Binding !*taylorautoexpand
// FLUIDBIND: reloadenv=1 litvec-offset=1 saveloc=0
{   bind_fluid_stack bind_fluid_var(-1, 1, 0);
    setvalue(basic_elt(env, 1), v_10); // !*taylorautoexpand
    v_10 = v_11;
    {   LispObject fn = basic_elt(env, 2); // taysimpsq
    v_10 = (*qfn1(fn))(fn, v_10);
    }
    ;}  // end of a binding scope
    return onevalue(v_10);
}



// Code for repr_atfnew

static LispObject CC_repr_atfnew(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_107, v_108;
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
    stack[-5] = v_4;
    v_107 = v_3;
    stack[0] = v_2;
// end of prologue
    v_108 = stack[0];
    if (!car_legal(v_108)) v_108 = carerror(v_108); else
    v_108 = car(v_108);
    stack[-6] = v_108;
    v_108 = stack[0];
    if (!car_legal(v_108)) v_108 = cdrerror(v_108); else
    v_108 = cdr(v_108);
    if (!car_legal(v_108)) v_108 = carerror(v_108); else
    v_108 = car(v_108);
    {   LispObject fn = basic_elt(env, 2); // pasf_coeflst
    v_107 = (*qfn2(fn))(fn, v_108, v_107);
    }
    env = stack[-7];
    stack[-1] = v_107;
    v_107 = stack[-1];
    if (!car_legal(v_107)) v_107 = carerror(v_107); else
    v_107 = car(v_107);
    if (!car_legal(v_107)) v_107 = carerror(v_107); else
    v_107 = car(v_107);
    {   LispObject fn = basic_elt(env, 3); // minusf
    v_107 = (*qfn1(fn))(fn, v_107);
    }
    env = stack[-7];
    if (v_107 == nil) goto v_20;
    v_107 = stack[0];
    v_107 = Lconsp(nil, v_107);
    env = stack[-7];
    if (v_107 == nil) goto v_28;
    v_107 = stack[0];
    if (!car_legal(v_107)) v_107 = carerror(v_107); else
    v_107 = car(v_107);
    v_107 = Lconsp(nil, v_107);
    env = stack[-7];
    if (v_107 == nil) goto v_28;
    v_107 = stack[0];
    if (!car_legal(v_107)) v_107 = carerror(v_107); else
    v_107 = car(v_107);
    if (!car_legal(v_107)) v_108 = carerror(v_107); else
    v_108 = car(v_107);
    v_107 = basic_elt(env, 1); // (cong ncong)
    v_107 = Lmemq(nil, v_108, v_107);
    if (v_107 == nil) goto v_28;
    v_107 = stack[-6];
    if (!car_legal(v_107)) v_107 = carerror(v_107); else
    v_107 = car(v_107);
    {   LispObject fn = basic_elt(env, 4); // pasf_anegrel
    v_108 = (*qfn1(fn))(fn, v_107);
    }
    env = stack[-7];
    v_107 = stack[-6];
    if (!car_legal(v_107)) v_107 = cdrerror(v_107); else
    v_107 = cdr(v_107);
    v_107 = cons(v_108, v_107);
    env = stack[-7];
    goto v_26;
v_28:
    v_107 = stack[-6];
    {   LispObject fn = basic_elt(env, 4); // pasf_anegrel
    v_107 = (*qfn1(fn))(fn, v_107);
    }
    env = stack[-7];
    goto v_26;
    v_107 = nil;
v_26:
    stack[-6] = v_107;
    v_107 = stack[-1];
    stack[-4] = v_107;
    v_107 = stack[-4];
    if (v_107 == nil) goto v_62;
    else goto v_63;
v_62:
    v_107 = nil;
    goto v_57;
v_63:
    v_107 = stack[-4];
    if (!car_legal(v_107)) v_107 = carerror(v_107); else
    v_107 = car(v_107);
    stack[0] = v_107;
    v_107 = stack[0];
    if (!car_legal(v_107)) v_108 = carerror(v_107); else
    v_108 = car(v_107);
    v_107 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    {   LispObject fn = basic_elt(env, 5); // multf
    v_108 = (*qfn2(fn))(fn, v_108, v_107);
    }
    env = stack[-7];
    v_107 = stack[0];
    if (!car_legal(v_107)) v_107 = cdrerror(v_107); else
    v_107 = cdr(v_107);
    v_107 = cons(v_108, v_107);
    env = stack[-7];
    v_107 = ncons(v_107);
    env = stack[-7];
    stack[-2] = v_107;
    stack[-3] = v_107;
v_58:
    v_107 = stack[-4];
    if (!car_legal(v_107)) v_107 = cdrerror(v_107); else
    v_107 = cdr(v_107);
    stack[-4] = v_107;
    v_107 = stack[-4];
    if (v_107 == nil) goto v_81;
    else goto v_82;
v_81:
    v_107 = stack[-3];
    goto v_57;
v_82:
    stack[-1] = stack[-2];
    v_107 = stack[-4];
    if (!car_legal(v_107)) v_107 = carerror(v_107); else
    v_107 = car(v_107);
    stack[0] = v_107;
    v_107 = stack[0];
    if (!car_legal(v_107)) v_108 = carerror(v_107); else
    v_108 = car(v_107);
    v_107 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    {   LispObject fn = basic_elt(env, 5); // multf
    v_108 = (*qfn2(fn))(fn, v_108, v_107);
    }
    env = stack[-7];
    v_107 = stack[0];
    if (!car_legal(v_107)) v_107 = cdrerror(v_107); else
    v_107 = cdr(v_107);
    v_107 = cons(v_108, v_107);
    env = stack[-7];
    v_107 = ncons(v_107);
    env = stack[-7];
    if (!car_legal(stack[-1])) rplacd_fails(stack[-1]);
    setcdr(stack[-1], v_107);
    v_107 = stack[-2];
    if (!car_legal(v_107)) v_107 = cdrerror(v_107); else
    v_107 = cdr(v_107);
    stack[-2] = v_107;
    goto v_58;
v_57:
    stack[-1] = v_107;
    goto v_18;
v_20:
v_18:
    stack[0] = stack[-5];
    stack[-2] = stack[-6];
    v_107 = nil;
    v_107 = ncons(v_107);
    env = stack[-7];
    {
        LispObject v_116 = stack[0];
        LispObject v_117 = stack[-2];
        LispObject v_118 = stack[-1];
        LispObject fn = basic_elt(env, 6); // repr_new
        return (*qfn4up(fn))(fn, v_116, v_117, v_118, v_107);
    }
    return onevalue(v_107);
}



// Code for ev_disjointp

static LispObject CC_ev_disjointp(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_37 = stack[-1];
    if (v_37 == nil) goto v_10;
    else goto v_11;
v_10:
    v_37 = lisp_true;
    goto v_6;
v_11:
    v_37 = stack[-1];
    if (!car_legal(v_37)) v_38 = carerror(v_37); else
    v_38 = car(v_37);
    v_37 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_38 == v_37) goto v_19;
    v_37 = stack[0];
    if (!car_legal(v_37)) v_38 = carerror(v_37); else
    v_38 = car(v_37);
    v_37 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_37 = Lneq_2(nil, v_38, v_37);
    env = stack[-2];
    goto v_17;
v_19:
    v_37 = nil;
    goto v_17;
    v_37 = nil;
v_17:
    if (v_37 == nil) goto v_15;
    v_37 = nil;
    goto v_6;
v_15:
    v_37 = stack[-1];
    if (!car_legal(v_37)) v_37 = cdrerror(v_37); else
    v_37 = cdr(v_37);
    stack[-1] = v_37;
    v_37 = stack[0];
    if (!car_legal(v_37)) v_37 = cdrerror(v_37); else
    v_37 = cdr(v_37);
    stack[0] = v_37;
    goto v_7;
    v_37 = nil;
v_6:
    return onevalue(v_37);
}



// Code for exdfp0

static LispObject CC_exdfp0(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    v_64 = v_2;
// end of prologue
    v_63 = v_64;
    if (!car_legal(v_63)) v_63 = carerror(v_63); else
    v_63 = car(v_63);
    stack[0] = v_63;
    v_63 = v_64;
    if (!car_legal(v_63)) v_63 = cdrerror(v_63); else
    v_63 = cdr(v_63);
    stack[-2] = v_63;
    v_63 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // sfp
    v_63 = (*qfn1(fn))(fn, v_63);
    }
    env = stack[-3];
    if (v_63 == nil) goto v_18;
    else goto v_17;
v_18:
    v_63 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // exformp
    v_63 = (*qfn1(fn))(fn, v_63);
    }
    env = stack[-3];
    if (v_63 == nil) goto v_22;
    else goto v_17;
v_22:
    v_63 = qvalue(basic_elt(env, 1)); // subfg!*
    if (v_63 == nil) goto v_17;
    goto v_16;
v_17:
    v_63 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // sfp
    v_63 = (*qfn1(fn))(fn, v_63);
    }
    env = stack[-3];
    if (v_63 == nil) goto v_31;
    v_63 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // exdff0
    v_63 = (*qfn1(fn))(fn, v_63);
    }
    env = stack[-3];
    goto v_29;
v_31:
    v_63 = stack[0];
    {   LispObject fn = basic_elt(env, 5); // exdfk
    v_63 = (*qfn1(fn))(fn, v_63);
    }
    env = stack[-3];
    goto v_29;
    v_63 = nil;
v_29:
    v_65 = v_63;
    if (v_63 == nil) goto v_16;
    v_64 = stack[-2];
    v_63 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_64 == v_63) goto v_42;
    else goto v_43;
v_42:
    v_63 = v_65;
    goto v_41;
v_43:
    stack[-1] = v_65;
    v_63 = stack[-2];
    v_63 = sub1(v_63);
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 6); // to
    v_64 = (*qfn2(fn))(fn, stack[0], v_63);
    }
    env = stack[-3];
    v_63 = stack[-2];
    v_63 = cons(v_64, v_63);
    env = stack[-3];
    v_64 = ncons(v_63);
    env = stack[-3];
    v_63 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_63 = cons(v_64, v_63);
    env = stack[-3];
    {
        LispObject v_69 = stack[-1];
        LispObject fn = basic_elt(env, 7); // multpfsq
        return (*qfn2(fn))(fn, v_69, v_63);
    }
    v_63 = nil;
v_41:
    goto v_14;
v_16:
    v_63 = nil;
    goto v_14;
    v_63 = nil;
v_14:
    return onevalue(v_63);
}



// Code for rand_functionp

static LispObject CC_rand_functionp(LispObject env,
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
    v_12 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // getd
    v_12 = (*qfn1(fn))(fn, v_12);
    }
    env = stack[-1];
    if (v_12 == nil) goto v_6;
    else goto v_5;
v_6:
    v_12 = stack[0];
    v_13 = basic_elt(env, 1); // lambda
        return Leqcar(nil, v_12, v_13);
v_5:
    return onevalue(v_12);
}



// Code for partdff

static LispObject CC_partdff(LispObject env,
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
    real_push(nil, nil, nil, nil, nil);
    stack_popper stack_popper_var(6);
// copy arguments values to proper place
    stack[-2] = v_3;
    stack[-3] = v_2;
// end of prologue
    stack[-4] = nil;
v_9:
    v_83 = stack[-3];
    if (!consp(v_83)) goto v_18;
    else goto v_19;
v_18:
    v_83 = lisp_true;
    goto v_17;
v_19:
    v_83 = stack[-3];
    if (!car_legal(v_83)) v_83 = carerror(v_83); else
    v_83 = car(v_83);
    v_83 = (consp(v_83) ? nil : lisp_true);
    goto v_17;
    v_83 = nil;
v_17:
    if (v_83 == nil) goto v_15;
    goto v_10;
v_15:
    v_83 = qvalue(basic_elt(env, 1)); // !*product!-rule
    if (v_83 == nil) goto v_30;
    else goto v_31;
v_30:
    v_83 = stack[-3];
    if (!car_legal(v_83)) v_84 = carerror(v_83); else
    v_84 = car(v_83);
    v_83 = stack[-2];
    {   LispObject fn = basic_elt(env, 2); // partdft
    v_83 = (*qfn2(fn))(fn, v_84, v_83);
    }
    env = stack[-5];
    v_84 = v_83;
    goto v_29;
v_31:
    v_83 = stack[-3];
    if (!car_legal(v_83)) v_83 = carerror(v_83); else
    v_83 = car(v_83);
    if (!car_legal(v_83)) v_84 = carerror(v_83); else
    v_84 = car(v_83);
    v_83 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_83 = cons(v_84, v_83);
    env = stack[-5];
    v_84 = ncons(v_83);
    env = stack[-5];
    v_83 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[0] = cons(v_84, v_83);
    env = stack[-5];
    v_83 = stack[-3];
    if (!car_legal(v_83)) v_83 = carerror(v_83); else
    v_83 = car(v_83);
    if (!car_legal(v_83)) v_84 = cdrerror(v_83); else
    v_84 = cdr(v_83);
    v_83 = stack[-2];
    {   LispObject fn = basic_elt(env, 0); // partdff
    v_83 = (*qfn2(fn))(fn, v_84, v_83);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 3); // multsq
    stack[-1] = (*qfn2(fn))(fn, stack[0], v_83);
    }
    env = stack[-5];
    v_83 = stack[-3];
    if (!car_legal(v_83)) v_83 = carerror(v_83); else
    v_83 = car(v_83);
    if (!car_legal(v_83)) v_84 = carerror(v_83); else
    v_84 = car(v_83);
    v_83 = stack[-2];
    {   LispObject fn = basic_elt(env, 4); // partdfpow
    stack[0] = (*qfn2(fn))(fn, v_84, v_83);
    }
    env = stack[-5];
    v_83 = stack[-3];
    if (!car_legal(v_83)) v_83 = carerror(v_83); else
    v_83 = car(v_83);
    if (!car_legal(v_83)) v_84 = cdrerror(v_83); else
    v_84 = cdr(v_83);
    v_83 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_83 = cons(v_84, v_83);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 3); // multsq
    v_83 = (*qfn2(fn))(fn, stack[0], v_83);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 5); // addsq
    v_83 = (*qfn2(fn))(fn, stack[-1], v_83);
    }
    env = stack[-5];
    v_84 = v_83;
    goto v_29;
    v_84 = nil;
v_29:
    v_83 = stack[-4];
    v_83 = cons(v_84, v_83);
    env = stack[-5];
    stack[-4] = v_83;
    v_83 = stack[-3];
    if (!car_legal(v_83)) v_83 = cdrerror(v_83); else
    v_83 = cdr(v_83);
    stack[-3] = v_83;
    goto v_9;
v_10:
    v_84 = nil;
    v_83 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_83 = cons(v_84, v_83);
    env = stack[-5];
    v_84 = v_83;
v_11:
    v_83 = stack[-4];
    if (v_83 == nil) goto v_73;
    else goto v_74;
v_73:
    v_83 = v_84;
    goto v_8;
v_74:
    v_83 = stack[-4];
    v_83 = car(v_83);
    {   LispObject fn = basic_elt(env, 5); // addsq
    v_83 = (*qfn2(fn))(fn, v_83, v_84);
    }
    env = stack[-5];
    v_84 = v_83;
    v_83 = stack[-4];
    v_83 = cdr(v_83);
    stack[-4] = v_83;
    goto v_11;
v_8:
    return onevalue(v_83);
}



// Code for find_triangl_coeff

static LispObject CC_find_triangl_coeff(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_12, v_13, v_14;
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
    v_12 = v_4;
    v_13 = v_3;
    v_14 = v_2;
// end of prologue
    stack[-2] = v_14;
    stack[-1] = nil;
    stack[0] = v_13;
    v_12 = ncons(v_12);
    env = stack[-3];
    {
        LispObject v_18 = stack[-2];
        LispObject v_19 = stack[-1];
        LispObject v_20 = stack[0];
        LispObject fn = basic_elt(env, 1); // find_triangle_coeff
        return (*qfn4up(fn))(fn, v_18, v_19, v_20, v_12);
    }
}



setup_type const u59_setup[] =
{
    {"pasf_premf1",             G0W2,     G1W2,     CC_pasf_premf1,G3W2,G4W2},
    {"search4facf",             G0W3,     G1W3,     G2W3,     CC_search4facf,G4W3},
    {"frlp",                    G0W1,     CC_frlp,  G2W1,     G3W1,     G4W1},
    {"xvarp",                   G0W1,     CC_xvarp, G2W1,     G3W1,     G4W1},
    {"kernelp",                 G0W1,     CC_kernelp,G2W1,    G3W1,     G4W1},
    {"mo_deletecomp",           G0W1,     CC_mo_deletecomp,G2W1,G3W1,   G4W1},
    {"algebnp",                 G0W1,     CC_algebnp,G2W1,    G3W1,     G4W1},
    {"ratleqp",                 G0W2,     G1W2,     CC_ratleqp,G3W2,    G4W2},
    {"gcdk",                    G0W2,     G1W2,     CC_gcdk,  G3W2,     G4W2},
    {"interglue",               G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_interglue},
    {"pasf_qff2ivl",            G0W1,     CC_pasf_qff2ivl,G2W1,G3W1,    G4W1},
    {"cfrmconstant",            G0W1,     CC_cfrmconstant,G2W1,G3W1,    G4W1},
    {"cflot",                   G0W1,     CC_cflot, G2W1,     G3W1,     G4W1},
    {"partitpartdf",            G0W1,     CC_partitpartdf,G2W1,G3W1,    G4W1},
    {"propagator",              G0W2,     G1W2,     CC_propagator,G3W2, G4W2},
    {"invbase*",                CC_invbaseH,G1W0,   G2W0,     G3W0,     G4W0},
    {"st_flatten",              G0W1,     CC_st_flatten,G2W1, G3W1,     G4W1},
    {"dependsp",                G0W2,     G1W2,     CC_dependsp,G3W2,   G4W2},
    {"bf2rn1",                  G0W1,     CC_bf2rn1,G2W1,     G3W1,     G4W1},
    {"anu_mk",                  G0W2,     G1W2,     CC_anu_mk,G3W2,     G4W2},
    {"conjgd",                  G0W1,     CC_conjgd,G2W1,     G3W1,     G4W1},
    {"mk_character",            G0W1,     CC_mk_character,G2W1,G3W1,    G4W1},
    {"rl_cput",                 G0W3,     G1W3,     G2W3,     CC_rl_cput,G4W3},
    {"acfsf_smmkatl",           G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_acfsf_smmkatl},
    {"vp1",                     G0W3,     G1W3,     G2W3,     CC_vp1,   G4W3},
    {"ps:depvar",               G0W1,     CC_psTdepvar,G2W1,  G3W1,     G4W1},
    {"numberofoccs",            G0W2,     G1W2,     CC_numberofoccs,G3W2,G4W2},
    {":mod:units",              G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_TmodTunits},
    {"idealp",                  G0W1,     CC_idealp,G2W1,     G3W1,     G4W1},
    {"lexorder",                G0W1,     CC_lexorder,G2W1,   G3W1,     G4W1},
    {"pst_partition",           G0W3,     G1W3,     G2W3,     CC_pst_partition,G4W3},
    {"lambda_sorneshiwvd12",    G0W2,     G1W2,     CC_lambda_sorneshiwvd12,G3W2,G4W2},
    {"bibasis",                 G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_bibasis},
    {"evalleq",                 G0W2,     G1W2,     CC_evalleq,G3W2,    G4W2},
    {"taysimpsq*",              G0W1,     CC_taysimpsqH,G2W1, G3W1,     G4W1},
    {"repr_atfnew",             G0W3,     G1W3,     G2W3,     CC_repr_atfnew,G4W3},
    {"ev_disjointp",            G0W2,     G1W2,     CC_ev_disjointp,G3W2,G4W2},
    {"exdfp0",                  G0W1,     CC_exdfp0,G2W1,     G3W1,     G4W1},
    {"rand_functionp",          G0W1,     CC_rand_functionp,G2W1,G3W1,  G4W1},
    {"partdff",                 G0W2,     G1W2,     CC_partdff,G3W2,    G4W2},
    {"find_triangl_coeff",      G0W3,     G1W3,     G2W3,     CC_find_triangl_coeff,G4W3},
    {nullptr, 
        reinterpret_cast<no_args *>(
            reinterpret_cast<uintptr_t>("u59")),
        reinterpret_cast<one_arg *>(
            reinterpret_cast<uintptr_t>("131655 2833294 5332876")),
        nullptr, nullptr, nullptr}
};

// end of generated code
