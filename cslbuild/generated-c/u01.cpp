
// $destdir/u01.c        Machine generated C code

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


// Code for mchkopt

static LispObject CC_mchkopt(LispObject env,
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
    v_18 = v_20;
    if (!car_legal(v_18)) v_18 = carerror(v_18); else
    v_18 = car(v_18);
    if (!symbolp(v_18)) v_18 = nil;
    else { v_18 = qfastgets(v_18);
           if (v_18 != nil) { v_18 = elt(v_18, 6); // optional
#ifdef RECORD_GET
             if (v_18 != SPID_NOPROP)
                record_get(elt(fastget_names, 6), 1);
             else record_get(elt(fastget_names, 6), 0),
                v_18 = nil; }
           else record_get(elt(fastget_names, 6), 0); }
#else
             if (v_18 == SPID_NOPROP) v_18 = nil; }}
#endif
    v_19 = v_18;
    v_18 = v_19;
    if (v_18 == nil) goto v_12;
    v_18 = v_21;
    {
        LispObject fn = basic_elt(env, 1); // mchkopt1
        return (*qfn3(fn))(fn, v_18, v_20, v_19);
    }
v_12:
    v_18 = nil;
    return onevalue(v_18);
}



// Code for smember

static LispObject CC_smember(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
v_1:
    v_30 = stack[-1];
    v_29 = stack[0];
    if (equal(v_30, v_29)) goto v_7;
    else goto v_8;
v_7:
    v_29 = lisp_true;
    goto v_6;
v_8:
    v_29 = stack[0];
    if (!consp(v_29)) goto v_12;
    else goto v_13;
v_12:
    v_29 = nil;
    goto v_6;
v_13:
    v_30 = stack[-1];
    v_29 = stack[0];
    if (!car_legal(v_29)) v_29 = carerror(v_29); else
    v_29 = car(v_29);
    {   LispObject fn = basic_elt(env, 0); // smember
    v_29 = (*qfn2(fn))(fn, v_30, v_29);
    }
    env = stack[-2];
    if (v_29 == nil) goto v_20;
    else goto v_19;
v_20:
    v_30 = stack[-1];
    v_29 = stack[0];
    if (!car_legal(v_29)) v_29 = cdrerror(v_29); else
    v_29 = cdr(v_29);
    stack[-1] = v_30;
    stack[0] = v_29;
    goto v_1;
v_19:
    goto v_6;
    v_29 = nil;
v_6:
    return onevalue(v_29);
}



// Code for !*n2f

static LispObject CC_Hn2f(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_14, v_15;
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
    v_15 = v_2;
// end of prologue
    v_14 = v_15;
    v_14 = static_cast<LispObject>(zerop(v_14));
    v_14 = v_14 ? lisp_true : nil;
    if (v_14 == nil) goto v_7;
    v_14 = nil;
    goto v_5;
v_7:
    v_14 = v_15;
    goto v_5;
    v_14 = nil;
v_5:
    return onevalue(v_14);
}



// Code for setdiff

static LispObject CC_setdiff(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_26 = v_2;
// end of prologue
v_7:
    v_27 = stack[0];
    if (v_27 == nil) goto v_10;
    else goto v_11;
v_10:
    goto v_6;
v_11:
    v_27 = v_26;
    if (v_27 == nil) goto v_14;
    else goto v_15;
v_14:
    v_26 = nil;
    goto v_6;
v_15:
    v_27 = stack[0];
    if (!car_legal(v_27)) v_27 = carerror(v_27); else
    v_27 = car(v_27);
    v_26 = Ldelete(nil, v_27, v_26);
    env = stack[-1];
    v_27 = stack[0];
    if (!car_legal(v_27)) v_27 = cdrerror(v_27); else
    v_27 = cdr(v_27);
    stack[0] = v_27;
    goto v_7;
    v_26 = nil;
v_6:
    return onevalue(v_26);
}



// Code for nth

static LispObject CC_nth(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // pnth
    v_9 = (*qfn2(fn))(fn, v_10, v_9);
    }
    if (!car_legal(v_9)) v_9 = carerror(v_9); else
    v_9 = car(v_9);
    return onevalue(v_9);
}



// Code for terminalp

static LispObject CC_terminalp(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_13;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// end of prologue
    v_13 = qvalue(basic_elt(env, 1)); // !*int
    if (v_13 == nil) goto v_5;
    else goto v_6;
v_5:
    v_13 = nil;
    goto v_4;
v_6:
    v_13 = qvalue(basic_elt(env, 2)); // ifl!*
    v_13 = (v_13 == nil ? lisp_true : nil);
    goto v_4;
    v_13 = nil;
v_4:
    return onevalue(v_13);
}



// Code for multf

static LispObject CC_multf(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_18, v_19, v_20;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_19 = v_3;
    v_20 = v_2;
// end of prologue
    v_18 = qvalue(basic_elt(env, 1)); // !*physop!-loaded
    if (v_18 == nil) goto v_8;
    v_18 = v_20;
    {
        LispObject fn = basic_elt(env, 2); // physop!-multf
        return (*qfn2(fn))(fn, v_18, v_19);
    }
v_8:
    v_18 = v_20;
    {
        LispObject fn = basic_elt(env, 3); // poly!-multf
        return (*qfn2(fn))(fn, v_18, v_19);
    }
    v_18 = nil;
    return onevalue(v_18);
}



// Code for monomgetvariabledegree

static LispObject CC_monomgetvariabledegree(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_47, v_48;
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
    v_47 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_47 = Lgetv(nil, v_48, v_47);
    env = stack[-2];
    stack[-1] = v_47;
v_13:
    v_47 = stack[-1];
    if (!car_legal(v_47)) v_47 = carerror(v_47); else
    v_47 = car(v_47);
    if (v_47 == nil) goto v_16;
    v_47 = stack[-1];
    if (!car_legal(v_47)) v_48 = carerror(v_47); else
    v_48 = car(v_47);
    v_47 = stack[0];
    v_47 = static_cast<LispObject>(greaterp2(v_48, v_47));
    v_47 = v_47 ? lisp_true : nil;
    env = stack[-2];
    if (v_47 == nil) goto v_16;
    goto v_17;
v_16:
    goto v_12;
v_17:
    v_47 = stack[-1];
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    stack[-1] = v_47;
    goto v_13;
v_12:
    v_47 = stack[-1];
    if (!car_legal(v_47)) v_47 = carerror(v_47); else
    v_47 = car(v_47);
    if (v_47 == nil) goto v_33;
    v_47 = stack[-1];
    if (!car_legal(v_47)) v_48 = carerror(v_47); else
    v_48 = car(v_47);
    v_47 = stack[0];
    if (equal(v_48, v_47)) goto v_37;
    else goto v_33;
v_37:
    v_47 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_7;
v_33:
    v_47 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_7;
    v_47 = nil;
v_7:
    return onevalue(v_47);
}



// Code for quotelist

static LispObject CC_quotelist(LispObject env,
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
    v_5 = basic_elt(env, 1); // list
    return onevalue(v_5);
}



// Code for num!-exponents

static LispObject CC_numKexponents(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_48;
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
    v_48 = stack[0];
    if (!consp(v_48)) goto v_10;
    else goto v_11;
v_10:
    v_48 = lisp_true;
    goto v_9;
v_11:
    v_48 = stack[0];
    if (!car_legal(v_48)) v_48 = carerror(v_48); else
    v_48 = car(v_48);
    v_48 = (consp(v_48) ? nil : lisp_true);
    goto v_9;
    v_48 = nil;
v_9:
    if (v_48 == nil) goto v_7;
    v_48 = lisp_true;
    goto v_5;
v_7:
    v_48 = stack[0];
    if (!car_legal(v_48)) v_48 = carerror(v_48); else
    v_48 = car(v_48);
    if (!car_legal(v_48)) v_48 = carerror(v_48); else
    v_48 = car(v_48);
    if (!car_legal(v_48)) v_48 = cdrerror(v_48); else
    v_48 = cdr(v_48);
    v_48 = integerp(v_48);
    if (v_48 == nil) goto v_24;
    else goto v_25;
v_24:
    v_48 = nil;
    goto v_23;
v_25:
    v_48 = stack[0];
    if (!car_legal(v_48)) v_48 = carerror(v_48); else
    v_48 = car(v_48);
    if (!car_legal(v_48)) v_48 = cdrerror(v_48); else
    v_48 = cdr(v_48);
    {   LispObject fn = basic_elt(env, 0); // num!-exponents
    v_48 = (*qfn1(fn))(fn, v_48);
    }
    env = stack[-1];
    if (v_48 == nil) goto v_36;
    else goto v_37;
v_36:
    v_48 = nil;
    goto v_35;
v_37:
    v_48 = stack[0];
    if (!car_legal(v_48)) v_48 = cdrerror(v_48); else
    v_48 = cdr(v_48);
    stack[0] = v_48;
    goto v_1;
    v_48 = nil;
v_35:
    goto v_23;
    v_48 = nil;
v_23:
    goto v_5;
    v_48 = nil;
v_5:
    return onevalue(v_48);
}



// Code for simpcar

static LispObject CC_simpcar(LispObject env,
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
        LispObject fn = basic_elt(env, 1); // simp
        return (*qfn1(fn))(fn, v_7);
    }
}



// Code for wuconstantp

static LispObject CC_wuconstantp(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_29, v_30;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_30 = v_2;
// end of prologue
    v_29 = v_30;
    if (!consp(v_29)) goto v_10;
    else goto v_11;
v_10:
    v_29 = lisp_true;
    goto v_9;
v_11:
    v_29 = v_30;
    if (!car_legal(v_29)) v_29 = carerror(v_29); else
    v_29 = car(v_29);
    v_29 = (consp(v_29) ? nil : lisp_true);
    goto v_9;
    v_29 = nil;
v_9:
    if (v_29 == nil) goto v_7;
    v_29 = lisp_true;
    goto v_5;
v_7:
    v_29 = v_30;
    if (!car_legal(v_29)) v_29 = carerror(v_29); else
    v_29 = car(v_29);
    if (!car_legal(v_29)) v_29 = carerror(v_29); else
    v_29 = car(v_29);
    if (!car_legal(v_29)) v_29 = carerror(v_29); else
    v_29 = car(v_29);
    v_30 = qvalue(basic_elt(env, 1)); // wuvarlist!*
    v_29 = Lmemq(nil, v_29, v_30);
    v_29 = (v_29 == nil ? lisp_true : nil);
    goto v_5;
    v_29 = nil;
v_5:
    return onevalue(v_29);
}



// Code for mkcopy

static LispObject CC_mkcopy(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    stack[-1] = nil;
v_7:
    v_25 = stack[0];
    if (!consp(v_25)) goto v_10;
    else goto v_11;
v_10:
    v_26 = stack[-1];
    v_25 = stack[0];
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn2(fn))(fn, v_26, v_25);
    }
v_11:
    v_25 = stack[0];
    if (!car_legal(v_25)) v_25 = carerror(v_25); else
    v_25 = car(v_25);
    {   LispObject fn = basic_elt(env, 0); // mkcopy
    v_26 = (*qfn1(fn))(fn, v_25);
    }
    env = stack[-2];
    v_25 = stack[-1];
    v_25 = cons(v_26, v_25);
    env = stack[-2];
    stack[-1] = v_25;
    v_25 = stack[0];
    if (!car_legal(v_25)) v_25 = cdrerror(v_25); else
    v_25 = cdr(v_25);
    stack[0] = v_25;
    goto v_7;
    v_25 = nil;
    return onevalue(v_25);
}



// Code for revpr

static LispObject CC_revpr(LispObject env,
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
    if (!car_legal(v_10)) v_10 = cdrerror(v_10); else
    v_10 = cdr(v_10);
    if (!car_legal(v_9)) v_9 = carerror(v_9); else
    v_9 = car(v_9);
    return cons(v_10, v_9);
}



// Code for talp_getl

static LispObject CC_talp_getl(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_4;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// end of prologue
    v_4 = qvalue(basic_elt(env, 1)); // talp_lang!*
    return onevalue(v_4);
}



// Code for kernels

static LispObject CC_kernels(LispObject env,
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
        LispObject fn = basic_elt(env, 1); // kernels1
        return (*qfn2(fn))(fn, v_8, v_7);
    }
}



// Code for qqe_rqopp

static LispObject CC_qqe_rqopp(LispObject env,
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
    v_8 = basic_elt(env, 1); // (qequal qneq)
    v_7 = Lmemq(nil, v_7, v_8);
    return onevalue(v_7);
}



// Code for powers

static LispObject CC_powers(LispObject env,
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
        LispObject fn = basic_elt(env, 1); // powers0
        return (*qfn2(fn))(fn, v_8, v_7);
    }
}



// Code for lto_hashid

static LispObject CC_lto_hashid(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // string2list
    v_7 = (*qfn1(fn))(fn, v_7);
    }
    if (!car_legal(v_7)) v_7 = carerror(v_7); else
    v_7 = car(v_7);
    return onevalue(v_7);
}



// Code for noncomfp

static LispObject CC_noncomfp(LispObject env,
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
    v_15 = v_2;
// end of prologue
    v_14 = qvalue(basic_elt(env, 1)); // !*ncmp
    if (v_14 == nil) goto v_6;
    else goto v_7;
v_6:
    v_14 = nil;
    goto v_5;
v_7:
    v_14 = v_15;
    {
        LispObject fn = basic_elt(env, 2); // noncomfp1
        return (*qfn1(fn))(fn, v_14);
    }
    v_14 = nil;
v_5:
    return onevalue(v_14);
}



// Code for ioto_prtb

static LispObject CC_ioto_prtb(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    v_27 = v_3;
    stack[0] = v_2;
// end of prologue
    v_27 = Lexplodec(nil, v_27);
    env = stack[-2];
    stack[-1] = v_27;
v_8:
    v_27 = stack[-1];
    if (v_27 == nil) goto v_13;
    else goto v_14;
v_13:
    goto v_7;
v_14:
    v_27 = stack[-1];
    if (!car_legal(v_27)) v_27 = carerror(v_27); else
    v_27 = car(v_27);
    v_28 = v_27;
    v_27 = stack[0];
    v_27 = cons(v_28, v_27);
    env = stack[-2];
    stack[0] = v_27;
    v_27 = stack[-1];
    if (!car_legal(v_27)) v_27 = cdrerror(v_27); else
    v_27 = cdr(v_27);
    stack[-1] = v_27;
    goto v_8;
v_7:
    v_27 = stack[0];
    return onevalue(v_27);
}



// Code for delall

static LispObject CC_delall(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_31 = stack[0];
    if (v_31 == nil) goto v_10;
    else goto v_11;
v_10:
    v_31 = nil;
    goto v_6;
v_11:
    v_32 = stack[-1];
    v_31 = stack[0];
    if (!car_legal(v_31)) v_31 = carerror(v_31); else
    v_31 = car(v_31);
    if (equal(v_32, v_31)) goto v_14;
    else goto v_15;
v_14:
    v_31 = stack[0];
    if (!car_legal(v_31)) v_31 = cdrerror(v_31); else
    v_31 = cdr(v_31);
    stack[0] = v_31;
    goto v_7;
v_15:
    v_31 = stack[0];
    if (!car_legal(v_31)) v_31 = carerror(v_31); else
    v_31 = car(v_31);
    stack[-2] = ncons(v_31);
    env = stack[-3];
    v_32 = stack[-1];
    v_31 = stack[0];
    if (!car_legal(v_31)) v_31 = cdrerror(v_31); else
    v_31 = cdr(v_31);
    {   LispObject fn = basic_elt(env, 0); // delall
    v_31 = (*qfn2(fn))(fn, v_32, v_31);
    }
    {
        LispObject v_36 = stack[-2];
        return Lappend_2(nil, v_36, v_31);
    }
    v_31 = nil;
v_6:
    return onevalue(v_31);
}



// Code for ordop

static LispObject CC_ordop(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_42, v_43, v_44, v_45, v_46;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_45 = v_3;
    v_46 = v_2;
// end of prologue
    v_42 = qvalue(basic_elt(env, 1)); // !*physop!-loaded
    if (v_42 == nil) goto v_8;
    v_42 = v_46;
    v_43 = v_45;
    {
        LispObject fn = basic_elt(env, 3); // physop!-ordop
        return (*qfn2(fn))(fn, v_42, v_43);
    }
v_8:
    v_42 = qvalue(basic_elt(env, 2)); // kord!*
    v_44 = v_42;
v_18:
    v_42 = v_44;
    if (v_42 == nil) goto v_22;
    else goto v_23;
v_22:
    v_42 = v_46;
    v_43 = v_45;
    {
        LispObject fn = basic_elt(env, 4); // ordp
        return (*qfn2(fn))(fn, v_42, v_43);
    }
v_23:
    v_43 = v_46;
    v_42 = v_44;
    if (!car_legal(v_42)) v_42 = carerror(v_42); else
    v_42 = car(v_42);
    if (v_43 == v_42) goto v_28;
    else goto v_29;
v_28:
    v_42 = lisp_true;
    goto v_17;
v_29:
    v_43 = v_45;
    v_42 = v_44;
    if (!car_legal(v_42)) v_42 = carerror(v_42); else
    v_42 = car(v_42);
    if (v_43 == v_42) goto v_34;
    else goto v_35;
v_34:
    v_42 = nil;
    goto v_17;
v_35:
    v_42 = v_44;
    if (!car_legal(v_42)) v_42 = cdrerror(v_42); else
    v_42 = cdr(v_42);
    v_44 = v_42;
    goto v_18;
v_17:
    goto v_6;
    v_42 = nil;
v_6:
    return onevalue(v_42);
}



// Code for ps!:getv

static LispObject CC_psTgetv(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_37, v_38, v_39;
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
    v_39 = v_2;
// end of prologue
    v_38 = v_39;
    v_37 = basic_elt(env, 1); // !:ps!:
    if (!consp(v_38)) goto v_8;
    v_38 = car(v_38);
    if (v_38 == v_37) goto v_7;
    else goto v_8;
v_7:
    v_37 = v_39;
    if (!car_legal(v_37)) v_37 = cdrerror(v_37); else
    v_37 = cdr(v_37);
    if (symbolp(v_37)) goto v_14;
    else goto v_15;
v_14:
    v_37 = v_39;
    if (!car_legal(v_37)) v_37 = cdrerror(v_37); else
    v_37 = cdr(v_37);
    {   LispObject fn = basic_elt(env, 4); // eval
    v_38 = (*qfn1(fn))(fn, v_37);
    }
    v_37 = stack[0];
        return Lgetv(nil, v_38, v_37);
v_15:
    v_37 = v_39;
    if (!car_legal(v_37)) v_38 = cdrerror(v_37); else
    v_38 = cdr(v_37);
    v_37 = stack[0];
        return Lgetv(nil, v_38, v_37);
    v_37 = nil;
    goto v_6;
v_8:
    stack[-1] = basic_elt(env, 2); // tps
    stack[0] = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_37 = basic_elt(env, 3); // "PS:GETV: not a ps"
    v_38 = v_39;
    v_37 = list2(v_37, v_38);
    env = stack[-2];
    {
        LispObject v_42 = stack[-1];
        LispObject v_43 = stack[0];
        LispObject fn = basic_elt(env, 5); // rerror
        return (*qfn3(fn))(fn, v_42, v_43, v_37);
    }
    v_37 = nil;
v_6:
    return onevalue(v_37);
}



// Code for prepf

static LispObject CC_prepf(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // prepf1a
    v_8 = (*qfn2(fn))(fn, v_9, v_8);
    }
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // replus1
        return (*qfn1(fn))(fn, v_8);
    }
}



// Code for c!:ordxp

static LispObject CC_cTordxp(LispObject env,
                         LispObject v_2, LispObject v_3)
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
        push(v_2,v_3);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_3,v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_35 = v_3;
    v_36 = v_2;
// end of prologue
    v_37 = v_36;
    v_37 = Lconsp(nil, v_37);
    env = stack[0];
    if (v_37 == nil) goto v_8;
    v_37 = v_35;
    v_37 = Lconsp(nil, v_37);
    if (v_37 == nil) goto v_14;
    if (!car_legal(v_36)) v_36 = cdrerror(v_36); else
    v_36 = cdr(v_36);
    if (!car_legal(v_35)) v_35 = cdrerror(v_35); else
    v_35 = cdr(v_35);
        return Llessp_2(nil, v_36, v_35);
v_14:
    v_35 = nil;
    goto v_12;
    v_35 = nil;
v_12:
    goto v_6;
v_8:
    v_37 = v_35;
    v_37 = Lconsp(nil, v_37);
    if (v_37 == nil) goto v_26;
    v_35 = lisp_true;
    goto v_6;
v_26:
        return Llessp_2(nil, v_36, v_35);
    v_35 = nil;
v_6:
    return onevalue(v_35);
}



// Code for zero2nil

static LispObject CC_zero2nil(LispObject env,
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
// space for vars preserved across procedure calls
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_14 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // !:zerop
    v_14 = (*qfn1(fn))(fn, v_14);
    }
    if (v_14 == nil) goto v_7;
    v_14 = nil;
    goto v_5;
v_7:
    v_14 = stack[0];
    goto v_5;
    v_14 = nil;
v_5:
    return onevalue(v_14);
}



// Code for mval

static LispObject CC_mval(LispObject env,
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



// Code for reval

static LispObject CC_reval(LispObject env,
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
        LispObject fn = basic_elt(env, 1); // reval1
        return (*qfn2(fn))(fn, v_8, v_7);
    }
}



// Code for evcomp

static LispObject CC_evcomp(LispObject env,
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
    stack[0] = qvalue(basic_elt(env, 1)); // dipsortevcomp!*
    v_10 = list2(v_11, v_10);
    env = stack[-1];
    {
        LispObject v_13 = stack[0];
        LispObject fn = basic_elt(env, 2); // apply
        return (*qfn2(fn))(fn, v_13, v_10);
    }
}



// Code for evmatrixcomp2

static LispObject CC_evmatrixcomp2(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_61, v_62, v_63, v_64;
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
    v_61 = stack[-2];
    if (v_61 == nil) goto v_12;
    else goto v_13;
v_12:
    v_61 = lisp_true;
    goto v_11;
v_13:
    v_61 = stack[-1];
    v_61 = (v_61 == nil ? lisp_true : nil);
    goto v_11;
    v_61 = nil;
v_11:
    if (v_61 == nil) goto v_9;
    v_61 = stack[0];
    goto v_7;
v_9:
    v_61 = stack[-1];
    if (!car_legal(v_61)) v_61 = carerror(v_61); else
    v_61 = car(v_61);
    stack[-3] = v_61;
    v_62 = stack[-3];
    v_61 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {   LispObject fn = basic_elt(env, 1); // iequal
    v_61 = (*qfn2(fn))(fn, v_62, v_61);
    }
    env = stack[-4];
    if (v_61 == nil) goto v_29;
    v_61 = stack[-2];
    if (!car_legal(v_61)) v_63 = cdrerror(v_61); else
    v_63 = cdr(v_61);
    v_61 = stack[-1];
    if (!car_legal(v_61)) v_62 = cdrerror(v_61); else
    v_62 = cdr(v_61);
    v_61 = stack[0];
    stack[-2] = v_63;
    stack[-1] = v_62;
    stack[0] = v_61;
    goto v_1;
v_29:
    v_62 = stack[-3];
    v_61 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 1); // iequal
    v_61 = (*qfn2(fn))(fn, v_62, v_61);
    }
    env = stack[-4];
    if (v_61 == nil) goto v_40;
    v_61 = stack[-2];
    if (!car_legal(v_61)) v_64 = cdrerror(v_61); else
    v_64 = cdr(v_61);
    v_61 = stack[-1];
    if (!car_legal(v_61)) v_63 = cdrerror(v_61); else
    v_63 = cdr(v_61);
    v_62 = stack[0];
    v_61 = stack[-2];
    if (!car_legal(v_61)) v_61 = carerror(v_61); else
    v_61 = car(v_61);
    v_61 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_62) + static_cast<std::uintptr_t>(v_61) - TAG_FIXNUM);
    stack[-2] = v_64;
    stack[-1] = v_63;
    stack[0] = v_61;
    goto v_1;
v_40:
    v_61 = stack[0];
    v_61 = ncons(v_61);
    env = stack[-4];
    {
        LispObject v_69 = stack[-2];
        LispObject v_70 = stack[-3];
        LispObject v_71 = stack[-1];
        LispObject fn = basic_elt(env, 2); // evmatrixcomp3
        return (*qfn4up(fn))(fn, v_69, v_70, v_71, v_61);
    }
    v_61 = nil;
    goto v_7;
    v_61 = nil;
v_7:
    return onevalue(v_61);
}



// Code for xval

static LispObject CC_xval(LispObject env,
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
    if (!car_legal(v_8)) v_8 = carerror(v_8); else
    v_8 = car(v_8);
    {
        LispObject fn = basic_elt(env, 1); // wedgefax
        return (*qfn1(fn))(fn, v_8);
    }
}



// Code for times!:

static LispObject CC_timesT(LispObject env,
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    stack[-1] = v_3;
    stack[-2] = v_2;
// end of prologue
    stack[-3] = basic_elt(env, 1); // !:rd!:
    v_21 = stack[-2];
    if (!car_legal(v_21)) v_21 = cdrerror(v_21); else
    v_21 = cdr(v_21);
    if (!car_legal(v_21)) v_22 = carerror(v_21); else
    v_22 = car(v_21);
    v_21 = stack[-1];
    if (!car_legal(v_21)) v_21 = cdrerror(v_21); else
    v_21 = cdr(v_21);
    if (!car_legal(v_21)) v_21 = carerror(v_21); else
    v_21 = car(v_21);
    stack[0] = times2(v_22, v_21);
    env = stack[-4];
    v_21 = stack[-2];
    if (!car_legal(v_21)) v_21 = cdrerror(v_21); else
    v_21 = cdr(v_21);
    if (!car_legal(v_21)) v_22 = cdrerror(v_21); else
    v_22 = cdr(v_21);
    v_21 = stack[-1];
    if (!car_legal(v_21)) v_21 = cdrerror(v_21); else
    v_21 = cdr(v_21);
    if (!car_legal(v_21)) v_21 = cdrerror(v_21); else
    v_21 = cdr(v_21);
    v_21 = plus2(v_22, v_21);
    {
        LispObject v_27 = stack[-3];
        LispObject v_28 = stack[0];
        return list2star(v_27, v_28, v_21);
    }
}



// Code for mkvar

static LispObject CC_mkvar(LispObject env,
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



// Code for physopp

static LispObject CC_physopp(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_37, v_38;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_38 = v_2;
// end of prologue
    v_37 = v_38;
    if (!consp(v_37)) goto v_6;
    else goto v_7;
v_6:
    v_37 = v_38;
    if (symbolp(v_37)) goto v_12;
    v_37 = nil;
    goto v_10;
v_12:
    v_37 = v_38;
    if (!symbolp(v_37)) v_37 = nil;
    else { v_37 = qfastgets(v_37);
           if (v_37 != nil) { v_37 = elt(v_37, 2); // rtype
#ifdef RECORD_GET
             if (v_37 != SPID_NOPROP)
                record_get(elt(fastget_names, 2), 1);
             else record_get(elt(fastget_names, 2), 0),
                v_37 = nil; }
           else record_get(elt(fastget_names, 2), 0); }
#else
             if (v_37 == SPID_NOPROP) v_37 = nil; }}
#endif
    v_38 = basic_elt(env, 1); // physop
    v_37 = (v_37 == v_38 ? lisp_true : nil);
    goto v_10;
    v_37 = nil;
v_10:
    goto v_5;
v_7:
    v_37 = v_38;
    if (!car_legal(v_37)) v_37 = carerror(v_37); else
    v_37 = car(v_37);
    if (symbolp(v_37)) goto v_26;
    v_37 = nil;
    goto v_24;
v_26:
    v_37 = v_38;
    if (!car_legal(v_37)) v_37 = carerror(v_37); else
    v_37 = car(v_37);
    if (!symbolp(v_37)) v_37 = nil;
    else { v_37 = qfastgets(v_37);
           if (v_37 != nil) { v_37 = elt(v_37, 2); // rtype
#ifdef RECORD_GET
             if (v_37 != SPID_NOPROP)
                record_get(elt(fastget_names, 2), 1);
             else record_get(elt(fastget_names, 2), 0),
                v_37 = nil; }
           else record_get(elt(fastget_names, 2), 0); }
#else
             if (v_37 == SPID_NOPROP) v_37 = nil; }}
#endif
    v_38 = basic_elt(env, 1); // physop
    v_37 = (v_37 == v_38 ? lisp_true : nil);
    goto v_24;
    v_37 = nil;
v_24:
    goto v_5;
    v_37 = nil;
v_5:
    return onevalue(v_37);
}



// Code for memq_edgelist

static LispObject CC_memq_edgelist(LispObject env,
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
    v_9 = Lassoc(nil, v_10, v_9);
    return onevalue(v_9);
}



// Code for mo_comp

static LispObject CC_mo_comp(LispObject env,
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
    v_16 = v_2;
// end of prologue
    v_17 = v_16;
    if (!car_legal(v_17)) v_17 = carerror(v_17); else
    v_17 = car(v_17);
    if (v_17 == nil) goto v_6;
    else goto v_7;
v_6:
    v_16 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_5;
v_7:
    if (!car_legal(v_16)) v_16 = carerror(v_16); else
    v_16 = car(v_16);
    if (!car_legal(v_16)) v_16 = carerror(v_16); else
    v_16 = car(v_16);
    goto v_5;
    v_16 = nil;
v_5:
    return onevalue(v_16);
}



// Code for c_zero

static LispObject CC_c_zero(LispObject env)
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



// Code for sieve_pv0

static LispObject CC_sieve_pv0(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_56, v_57, v_58;
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
    v_56 = stack[-2];
    if (v_56 == nil) goto v_8;
    else goto v_9;
v_8:
    v_56 = nil;
    goto v_7;
v_9:
v_16:
    v_56 = stack[-1];
    if (v_56 == nil) goto v_19;
    v_56 = stack[-1];
    if (!car_legal(v_56)) v_56 = carerror(v_56); else
    v_56 = car(v_56);
    if (!car_legal(v_56)) v_56 = carerror(v_56); else
    v_56 = car(v_56);
    if (!car_legal(v_56)) v_57 = cdrerror(v_56); else
    v_57 = cdr(v_56);
    v_56 = stack[-2];
    if (!car_legal(v_56)) v_56 = carerror(v_56); else
    v_56 = car(v_56);
    if (!car_legal(v_56)) v_56 = cdrerror(v_56); else
    v_56 = cdr(v_56);
    v_56 = static_cast<LispObject>(greaterp2(v_57, v_56));
    v_56 = v_56 ? lisp_true : nil;
    env = stack[-3];
    if (v_56 == nil) goto v_19;
    goto v_20;
v_19:
    goto v_15;
v_20:
    v_56 = stack[-1];
    if (!car_legal(v_56)) v_56 = cdrerror(v_56); else
    v_56 = cdr(v_56);
    stack[-1] = v_56;
    goto v_16;
v_15:
v_37:
    v_56 = stack[-2];
    if (v_56 == nil) goto v_40;
    v_56 = stack[-1];
    if (v_56 == nil) goto v_40;
    goto v_41;
v_40:
    goto v_36;
v_41:
    v_58 = stack[-2];
    v_56 = stack[-1];
    if (!car_legal(v_56)) v_57 = carerror(v_56); else
    v_57 = car(v_56);
    v_56 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // reduce_pv0
    v_56 = (*qfn3(fn))(fn, v_58, v_57, v_56);
    }
    env = stack[-3];
    stack[-2] = v_56;
    v_56 = stack[-1];
    if (!car_legal(v_56)) v_56 = cdrerror(v_56); else
    v_56 = cdr(v_56);
    stack[-1] = v_56;
    goto v_37;
v_36:
    v_56 = stack[-2];
    goto v_7;
    v_56 = nil;
v_7:
    return onevalue(v_56);
}



// Code for listp

static LispObject CC_listp(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_23, v_24;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_23 = v_2;
// end of prologue
v_1:
    v_24 = v_23;
    if (v_24 == nil) goto v_6;
    else goto v_7;
v_6:
    v_23 = lisp_true;
    goto v_5;
v_7:
    v_24 = v_23;
    if (!consp(v_24)) goto v_15;
    if (!car_legal(v_23)) v_23 = cdrerror(v_23); else
    v_23 = cdr(v_23);
    goto v_1;
v_15:
    v_23 = nil;
    goto v_13;
    v_23 = nil;
v_13:
    goto v_5;
    v_23 = nil;
v_5:
    return onevalue(v_23);
}



// Code for modzerop!:

static LispObject CC_modzeropT(LispObject env,
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
    v_8 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_8 = (v_9 == v_8 ? lisp_true : nil);
    return onevalue(v_8);
}



// Code for getrtypeor

static LispObject CC_getrtypeor(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
v_1:
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
    {   LispObject fn = basic_elt(env, 1); // getrtype
    v_21 = (*qfn1(fn))(fn, v_21);
    }
    env = stack[-1];
    if (v_21 == nil) goto v_14;
    else goto v_13;
v_14:
    v_21 = stack[0];
    if (!car_legal(v_21)) v_21 = cdrerror(v_21); else
    v_21 = cdr(v_21);
    stack[0] = v_21;
    goto v_1;
v_13:
    goto v_5;
    v_21 = nil;
v_5:
    return onevalue(v_21);
}



// Code for lalr_productions

static LispObject CC_lalr_productions(LispObject env,
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
    v_8 = basic_elt(env, 1); // lalr_produces
    return get(v_7, v_8);
}



// Code for random_new_seed

static LispObject CC_random_new_seed(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_137, v_138, v_139;
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
    v_137 = stack[0];
    v_137 = integerp(v_137);
    if (v_137 == nil) goto v_16;
    else goto v_17;
v_16:
    v_137 = lisp_true;
    goto v_15;
v_17:
    v_138 = stack[0];
    v_137 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_137 = static_cast<LispObject>(lesseq2(v_138, v_137));
    v_137 = v_137 ? lisp_true : nil;
    env = stack[-4];
    goto v_15;
    v_137 = nil;
v_15:
    if (v_137 == nil) goto v_13;
    v_138 = stack[0];
    v_137 = basic_elt(env, 1); // "positive integer"
    {   LispObject fn = basic_elt(env, 6); // typerr
    v_137 = (*qfn2(fn))(fn, v_138, v_137);
    }
    env = stack[-4];
    goto v_11;
v_13:
v_11:
    v_138 = stack[0];
    v_137 = qvalue(basic_elt(env, 2)); // randommodulus!*
    v_137 = Cremainder(v_138, v_137);
    env = stack[-4];
    stack[-3] = v_137;
    v_139 = qvalue(basic_elt(env, 3)); // unidev_vec!*
    v_138 = static_cast<LispObject>(864)+TAG_FIXNUM; // 54
    v_137 = stack[-3];
    v_137 = Lputv(nil, v_139, v_138, v_137);
    env = stack[-4];
    v_137 = stack[-3];
    v_137 = add1(v_137);
    env = stack[-4];
    stack[-2] = v_137;
    v_137 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[0] = v_137;
v_41:
    v_138 = static_cast<LispObject>(864)+TAG_FIXNUM; // 54
    v_137 = stack[0];
    v_137 = difference2(v_138, v_137);
    env = stack[-4];
    v_137 = Lminusp(nil, v_137);
    env = stack[-4];
    if (v_137 == nil) goto v_46;
    goto v_40;
v_46:
    v_138 = stack[-2];
    v_137 = stack[-3];
    v_137 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_138) - static_cast<std::uintptr_t>(v_137) + TAG_FIXNUM);
    stack[-1] = v_137;
    v_137 = stack[-1];
    v_137 = (static_cast<std::intptr_t>(v_137) < 0 ? lisp_true : nil);
    if (v_137 == nil) goto v_58;
    v_138 = stack[-1];
    v_137 = qvalue(basic_elt(env, 2)); // randommodulus!*
    v_137 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_138) + static_cast<std::uintptr_t>(v_137) - TAG_FIXNUM);
    stack[-1] = v_137;
    goto v_56;
v_58:
v_56:
    v_138 = static_cast<LispObject>(336)+TAG_FIXNUM; // 21
    v_137 = stack[0];
    v_138 = times2(v_138, v_137);
    env = stack[-4];
    v_137 = static_cast<LispObject>(880)+TAG_FIXNUM; // 55
    v_137 = Cremainder(v_138, v_137);
    env = stack[-4];
    v_139 = qvalue(basic_elt(env, 3)); // unidev_vec!*
    v_138 = static_cast<LispObject>(static_cast<std::intptr_t>(v_137) - 0x10);
    v_137 = stack[-1];
    v_137 = Lputv(nil, v_139, v_138, v_137);
    env = stack[-4];
    v_137 = stack[-3];
    stack[-2] = v_137;
    v_137 = stack[-1];
    stack[-3] = v_137;
    v_137 = stack[0];
    v_137 = add1(v_137);
    env = stack[-4];
    stack[0] = v_137;
    goto v_41;
v_40:
    v_137 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-3] = v_137;
v_81:
    v_138 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_137 = stack[-3];
    v_137 = difference2(v_138, v_137);
    env = stack[-4];
    v_137 = Lminusp(nil, v_137);
    env = stack[-4];
    if (v_137 == nil) goto v_86;
    goto v_80;
v_86:
    v_137 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-2] = v_137;
v_95:
    v_138 = static_cast<LispObject>(864)+TAG_FIXNUM; // 54
    v_137 = stack[-2];
    v_137 = difference2(v_138, v_137);
    env = stack[-4];
    v_137 = Lminusp(nil, v_137);
    env = stack[-4];
    if (v_137 == nil) goto v_100;
    goto v_94;
v_100:
    v_138 = qvalue(basic_elt(env, 3)); // unidev_vec!*
    v_137 = stack[-2];
    stack[-1] = Lgetv(nil, v_138, v_137);
    env = stack[-4];
    stack[0] = qvalue(basic_elt(env, 3)); // unidev_vec!*
    v_138 = stack[-2];
    v_137 = static_cast<LispObject>(496)+TAG_FIXNUM; // 31
    v_138 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_138) + static_cast<std::uintptr_t>(v_137) - TAG_FIXNUM);
    v_137 = static_cast<LispObject>(880)+TAG_FIXNUM; // 55
    v_137 = Cremainder(v_138, v_137);
    env = stack[-4];
    v_137 = Lgetv(nil, stack[0], v_137);
    env = stack[-4];
    v_137 = static_cast<LispObject>(static_cast<std::uintptr_t>(stack[-1]) - static_cast<std::uintptr_t>(v_137) + TAG_FIXNUM);
    stack[-1] = v_137;
    v_137 = stack[-1];
    v_137 = (static_cast<std::intptr_t>(v_137) < 0 ? lisp_true : nil);
    if (v_137 == nil) goto v_120;
    v_138 = stack[-1];
    v_137 = qvalue(basic_elt(env, 2)); // randommodulus!*
    v_137 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_138) + static_cast<std::uintptr_t>(v_137) - TAG_FIXNUM);
    stack[-1] = v_137;
    goto v_118;
v_120:
v_118:
    v_139 = qvalue(basic_elt(env, 3)); // unidev_vec!*
    v_138 = stack[-2];
    v_137 = stack[-1];
    v_137 = Lputv(nil, v_139, v_138, v_137);
    env = stack[-4];
    v_137 = stack[-2];
    v_137 = add1(v_137);
    env = stack[-4];
    stack[-2] = v_137;
    goto v_95;
v_94:
    v_137 = stack[-3];
    v_137 = add1(v_137);
    env = stack[-4];
    stack[-3] = v_137;
    goto v_81;
v_80:
    v_137 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    setvalue(basic_elt(env, 4), v_137); // unidev_next!*
    v_137 = static_cast<LispObject>(496)+TAG_FIXNUM; // 31
    setvalue(basic_elt(env, 5), v_137); // unidev_nextp!*
    v_137 = nil;
    return onevalue(v_137);
}



// Code for monomcompare

static LispObject CC_monomcompare(LispObject env,
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
    v_33 = v_3;
    v_34 = v_2;
// end of prologue
    v_32 = qvalue(basic_elt(env, 1)); // fluidbibasismonomialorder
    v_31 = basic_elt(env, 2); // lex
    if (v_32 == v_31) goto v_9;
    else goto v_10;
v_9:
    v_31 = v_34;
    v_32 = v_33;
    {
        LispObject fn = basic_elt(env, 4); // monomcomparelex
        return (*qfn2(fn))(fn, v_31, v_32);
    }
v_10:
    v_32 = qvalue(basic_elt(env, 1)); // fluidbibasismonomialorder
    v_31 = basic_elt(env, 3); // deglex
    if (v_32 == v_31) goto v_17;
    else goto v_18;
v_17:
    v_31 = v_34;
    v_32 = v_33;
    {
        LispObject fn = basic_elt(env, 5); // monomcomparedeglex
        return (*qfn2(fn))(fn, v_31, v_32);
    }
v_18:
    v_31 = v_34;
    v_32 = v_33;
    {
        LispObject fn = basic_elt(env, 6); // monomcomparedegrevlex
        return (*qfn2(fn))(fn, v_31, v_32);
    }
    v_31 = nil;
    return onevalue(v_31);
}



// Code for makelist

static LispObject CC_makelist(LispObject env,
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
    v_8 = basic_elt(env, 1); // list
    return cons(v_8, v_7);
}



// Code for quotf

static LispObject CC_quotf(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_13 = v_3;
    v_14 = v_2;
// end of prologue
    v_12 = lisp_true;
// Binding !*exp
// FLUIDBIND: reloadenv=1 litvec-offset=1 saveloc=0
{   bind_fluid_stack bind_fluid_var(-1, 1, 0);
    setvalue(basic_elt(env, 1), v_12); // !*exp
    v_12 = v_14;
    {   LispObject fn = basic_elt(env, 2); // quotf1
    v_12 = (*qfn2(fn))(fn, v_12, v_13);
    }
    ;}  // end of a binding scope
    return onevalue(v_12);
}



// Code for mchk!*

static LispObject CC_mchkH(LispObject env,
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
    v_36 = stack[-1];
    v_35 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // mchk
    v_35 = (*qfn2(fn))(fn, v_36, v_35);
    }
    env = stack[-2];
    v_36 = v_35;
    if (v_35 == nil) goto v_11;
    v_35 = v_36;
    goto v_7;
v_11:
    v_35 = qvalue(basic_elt(env, 1)); // !*mcd
    if (v_35 == nil) goto v_18;
    else goto v_16;
v_18:
    v_35 = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // sfp
    v_35 = (*qfn1(fn))(fn, v_35);
    }
    env = stack[-2];
    if (v_35 == nil) goto v_16;
    v_35 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // sfp
    v_35 = (*qfn1(fn))(fn, v_35);
    }
    env = stack[-2];
    if (v_35 == nil) goto v_16;
    goto v_17;
v_16:
    v_35 = nil;
    goto v_7;
v_17:
    v_35 = stack[-1];
    {   LispObject fn = basic_elt(env, 4); // prepf
    stack[-1] = (*qfn1(fn))(fn, v_35);
    }
    env = stack[-2];
    v_35 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // prepf
    v_35 = (*qfn1(fn))(fn, v_35);
    }
    env = stack[-2];
    {
        LispObject v_39 = stack[-1];
        LispObject fn = basic_elt(env, 2); // mchk
        return (*qfn2(fn))(fn, v_39, v_35);
    }
    v_35 = nil;
v_7:
    return onevalue(v_35);
}



// Code for get!+mat!+entry

static LispObject CC_getLmatLentry(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    stack[0] = v_4;
    v_13 = v_3;
    v_14 = v_2;
// end of prologue
    {   LispObject fn = basic_elt(env, 1); // nth
    v_14 = (*qfn2(fn))(fn, v_14, v_13);
    }
    env = stack[-1];
    v_13 = stack[0];
    {
        LispObject fn = basic_elt(env, 1); // nth
        return (*qfn2(fn))(fn, v_14, v_13);
    }
    return onevalue(v_13);
}



// Code for talp_getextl

static LispObject CC_talp_getextl(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_4;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// end of prologue
    v_4 = qvalue(basic_elt(env, 1)); // talp_extlang!*
    return onevalue(v_4);
}



// Code for ibalp_clmember

static LispObject CC_ibalp_clmember(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_24 = stack[0];
    if (v_24 == nil) goto v_7;
    else goto v_8;
v_7:
    v_24 = nil;
    goto v_6;
v_8:
    v_25 = stack[-1];
    v_24 = stack[0];
    if (!car_legal(v_24)) v_24 = carerror(v_24); else
    v_24 = car(v_24);
    {   LispObject fn = basic_elt(env, 1); // ibalp_cequal
    v_24 = (*qfn2(fn))(fn, v_25, v_24);
    }
    env = stack[-2];
    if (v_24 == nil) goto v_15;
    else goto v_14;
v_15:
    v_25 = stack[-1];
    v_24 = stack[0];
    if (!car_legal(v_24)) v_24 = cdrerror(v_24); else
    v_24 = cdr(v_24);
    stack[-1] = v_25;
    stack[0] = v_24;
    goto v_1;
v_14:
    goto v_6;
    v_24 = nil;
v_6:
    return onevalue(v_24);
}



// Code for aex_ex

static LispObject CC_aex_ex(LispObject env,
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
    v_7 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    {
        LispObject fn = basic_elt(env, 1); // nth
        return (*qfn2(fn))(fn, v_8, v_7);
    }
}



// Code for argsofopr

static LispObject CC_argsofopr(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_6;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_6 = v_2;
// end of prologue
    if (!symbolp(v_6)) v_6 = nil;
    else { v_6 = qfastgets(v_6);
           if (v_6 != nil) { v_6 = elt(v_6, 42); // number!-of!-args
#ifdef RECORD_GET
             if (v_6 != SPID_NOPROP)
                record_get(elt(fastget_names, 42), 1);
             else record_get(elt(fastget_names, 42), 0),
                v_6 = nil; }
           else record_get(elt(fastget_names, 42), 0); }
#else
             if (v_6 == SPID_NOPROP) v_6 = nil; }}
#endif
    return onevalue(v_6);
}



// Code for find2

static LispObject CC_find2(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_32, v_33, v_34, v_35;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_33 = v_3;
    v_34 = v_2;
// end of prologue
v_1:
    v_35 = v_33;
    v_32 = nil;
    if (v_35 == v_32) goto v_9;
    else goto v_10;
v_9:
    v_32 = v_34;
    if (v_32 == nil) goto v_16;
    v_32 = v_34;
    if (!car_legal(v_32)) v_32 = cdrerror(v_32); else
    v_32 = cdr(v_32);
    goto v_14;
v_16:
    v_32 = basic_elt(env, 1); // (stop)
    goto v_14;
    v_32 = nil;
v_14:
    goto v_8;
v_10:
    v_32 = v_33;
    if (!car_legal(v_32)) v_32 = carerror(v_32); else
    v_32 = car(v_32);
    v_34 = Lmember(nil, v_32, v_34);
    v_32 = v_33;
    if (!car_legal(v_32)) v_32 = cdrerror(v_32); else
    v_32 = cdr(v_32);
    v_33 = v_32;
    goto v_1;
    v_32 = nil;
v_8:
    return onevalue(v_32);
}



// Code for noncomp

static LispObject CC_noncomp(LispObject env,
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
    v_15 = v_2;
// end of prologue
    v_14 = qvalue(basic_elt(env, 1)); // !*ncmp
    if (v_14 == nil) goto v_6;
    else goto v_7;
v_6:
    v_14 = nil;
    goto v_5;
v_7:
    v_14 = v_15;
    {
        LispObject fn = basic_elt(env, 2); // noncomp1
        return (*qfn1(fn))(fn, v_14);
    }
    v_14 = nil;
v_5:
    return onevalue(v_14);
}



// Code for ps!:order

static LispObject CC_psTorder(LispObject env,
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
    v_35 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_5;
v_7:
    v_36 = v_37;
    v_35 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {
        LispObject fn = basic_elt(env, 2); // ps!:getv
        return (*qfn2(fn))(fn, v_36, v_35);
    }
    v_35 = nil;
v_5:
    return onevalue(v_35);
}



// Code for prepf1a

static LispObject CC_prepf1a(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_10, v_11, v_12;
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
    v_12 = v_11;
    v_11 = v_10;
    v_10 = nil;
    {   LispObject fn = basic_elt(env, 1); // prepf1a_reversed
    v_10 = (*qfn3(fn))(fn, v_12, v_11, v_10);
    }
        return Lnreverse(nil, v_10);
}



// Code for pm!:free

static LispObject CC_pmTfree(LispObject env,
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
    {   LispObject fn = basic_elt(env, 2); // binding
    v_8 = (*qfn1(fn))(fn, v_8);
    }
    env = stack[0];
    v_9 = basic_elt(env, 1); // unbound
    v_8 = (v_8 == v_9 ? lisp_true : nil);
    return onevalue(v_8);
}



// Code for vbcsize

static LispObject CC_vbcsize(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_36 = v_3;
    stack[0] = v_2;
// end of prologue
v_1:
    v_37 = v_36;
    v_35 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    if ((static_cast<std::intptr_t>(v_37) > static_cast<std::intptr_t>(v_35))) goto v_7;
    else goto v_8;
v_7:
    v_35 = nil;
    goto v_6;
v_8:
    v_35 = stack[0];
    if (!consp(v_35)) goto v_12;
    else goto v_13;
v_12:
    v_35 = v_36;
    goto v_6;
v_13:
    v_35 = stack[0];
    if (!car_legal(v_35)) v_35 = carerror(v_35); else
    v_35 = car(v_35);
    v_36 = static_cast<LispObject>(static_cast<std::intptr_t>(v_36) + 0x10);
    {   LispObject fn = basic_elt(env, 0); // vbcsize
    v_35 = (*qfn2(fn))(fn, v_35, v_36);
    }
    env = stack[-1];
    v_36 = v_35;
    v_35 = v_36;
    if (v_35 == nil) goto v_27;
    else goto v_28;
v_27:
    v_35 = nil;
    goto v_19;
v_28:
    v_35 = stack[0];
    if (!car_legal(v_35)) v_35 = cdrerror(v_35); else
    v_35 = cdr(v_35);
    stack[0] = v_35;
    goto v_1;
v_19:
    goto v_6;
    v_35 = nil;
v_6:
    return onevalue(v_35);
}



// Code for pnth

static LispObject CC_pnth(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_28, v_29, v_30;
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
    v_29 = v_3;
    stack[0] = v_2;
// end of prologue
v_7:
    v_28 = stack[0];
    if (v_28 == nil) goto v_10;
    else goto v_11;
v_10:
    v_30 = basic_elt(env, 1); // alg
    v_29 = static_cast<LispObject>(96)+TAG_FIXNUM; // 6
    v_28 = basic_elt(env, 2); // "Index out of range"
    {
        LispObject fn = basic_elt(env, 3); // rerror
        return (*qfn3(fn))(fn, v_30, v_29, v_28);
    }
v_11:
    v_30 = v_29;
    v_28 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_30 == v_28) goto v_17;
    else goto v_18;
v_17:
    v_28 = stack[0];
    goto v_6;
v_18:
    v_28 = stack[0];
    if (!car_legal(v_28)) v_28 = cdrerror(v_28); else
    v_28 = cdr(v_28);
    stack[0] = v_28;
    v_28 = v_29;
    v_28 = sub1(v_28);
    env = stack[-1];
    v_29 = v_28;
    goto v_7;
    v_28 = nil;
v_6:
    return onevalue(v_28);
}



// Code for wedgefax

static LispObject CC_wedgefax(LispObject env,
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
    v_18 = v_2;
// end of prologue
    v_17 = v_18;
    v_19 = basic_elt(env, 1); // wedge
    if (!consp(v_17)) goto v_7;
    v_17 = car(v_17);
    if (v_17 == v_19) goto v_6;
    else goto v_7;
v_6:
    v_17 = v_18;
    if (!car_legal(v_17)) v_17 = cdrerror(v_17); else
    v_17 = cdr(v_17);
    goto v_5;
v_7:
    v_17 = v_18;
    return ncons(v_17);
    v_17 = nil;
v_5:
    return onevalue(v_17);
}



// Code for convprec

static LispObject CC_convprec(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // round!*
    v_7 = (*qfn1(fn))(fn, v_7);
    }
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // convchk
        return (*qfn1(fn))(fn, v_7);
    }
}



// Code for !*physopp

static LispObject CC_Hphysopp(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_33, v_34;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_33 = v_2;
// end of prologue
    v_34 = v_33;
    if (!consp(v_34)) goto v_6;
    else goto v_7;
v_6:
    v_34 = v_33;
    if (symbolp(v_34)) goto v_12;
    v_33 = nil;
    goto v_10;
v_12:
    if (!symbolp(v_33)) v_33 = nil;
    else { v_33 = qfastgets(v_33);
           if (v_33 != nil) { v_33 = elt(v_33, 18); // phystype
#ifdef RECORD_GET
             if (v_33 != SPID_NOPROP)
                record_get(elt(fastget_names, 18), 1);
             else record_get(elt(fastget_names, 18), 0),
                v_33 = nil; }
           else record_get(elt(fastget_names, 18), 0); }
#else
             if (v_33 == SPID_NOPROP) v_33 = nil; }}
#endif
    goto v_10;
    v_33 = nil;
v_10:
    goto v_5;
v_7:
    v_34 = v_33;
    if (!car_legal(v_34)) v_34 = carerror(v_34); else
    v_34 = car(v_34);
    if (symbolp(v_34)) goto v_24;
    v_33 = nil;
    goto v_22;
v_24:
    if (!car_legal(v_33)) v_33 = carerror(v_33); else
    v_33 = car(v_33);
    if (!symbolp(v_33)) v_33 = nil;
    else { v_33 = qfastgets(v_33);
           if (v_33 != nil) { v_33 = elt(v_33, 18); // phystype
#ifdef RECORD_GET
             if (v_33 != SPID_NOPROP)
                record_get(elt(fastget_names, 18), 1);
             else record_get(elt(fastget_names, 18), 0),
                v_33 = nil; }
           else record_get(elt(fastget_names, 18), 0); }
#else
             if (v_33 == SPID_NOPROP) v_33 = nil; }}
#endif
    goto v_22;
    v_33 = nil;
v_22:
    goto v_5;
    v_33 = nil;
v_5:
    return onevalue(v_33);
}



// Code for wideid2list

static LispObject CC_wideid2list(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // id2string
    v_7 = (*qfn1(fn))(fn, v_7);
    }
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // widestring2list
        return (*qfn1(fn))(fn, v_7);
    }
}



// Code for termsf

static LispObject CC_termsf(LispObject env,
                         LispObject v_2)
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
    v_45 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_46 = v_45;
v_10:
    v_45 = stack[0];
    if (!consp(v_45)) goto v_17;
    else goto v_18;
v_17:
    v_45 = lisp_true;
    goto v_16;
v_18:
    v_45 = stack[0];
    if (!car_legal(v_45)) v_45 = carerror(v_45); else
    v_45 = car(v_45);
    v_45 = (consp(v_45) ? nil : lisp_true);
    goto v_16;
    v_45 = nil;
v_16:
    if (v_45 == nil) goto v_14;
    goto v_9;
v_14:
    stack[-1] = v_46;
    v_45 = stack[0];
    if (!car_legal(v_45)) v_45 = carerror(v_45); else
    v_45 = car(v_45);
    if (!car_legal(v_45)) v_45 = cdrerror(v_45); else
    v_45 = cdr(v_45);
    {   LispObject fn = basic_elt(env, 0); // termsf
    v_45 = (*qfn1(fn))(fn, v_45);
    }
    env = stack[-2];
    v_45 = plus2(stack[-1], v_45);
    env = stack[-2];
    v_46 = v_45;
    v_45 = stack[0];
    if (!car_legal(v_45)) v_45 = cdrerror(v_45); else
    v_45 = cdr(v_45);
    stack[0] = v_45;
    goto v_10;
v_9:
    v_45 = stack[0];
    if (v_45 == nil) goto v_37;
    else goto v_38;
v_37:
    v_45 = v_46;
    goto v_36;
v_38:
    v_45 = v_46;
    return add1(v_45);
    v_45 = nil;
v_36:
    return onevalue(v_45);
}



// Code for mkspm

static LispObject CC_mkspm(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    v_40 = stack[0];
    v_39 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_40 == v_39) goto v_7;
    else goto v_8;
v_7:
    v_39 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_6;
v_8:
    v_39 = qvalue(basic_elt(env, 1)); // subfg!*
    if (v_39 == nil) goto v_20;
    v_40 = stack[-1];
    v_39 = qvalue(basic_elt(env, 2)); // asymplis!*
    v_39 = Latsoc(nil, v_40, v_39);
    v_40 = v_39;
    if (v_39 == nil) goto v_20;
    v_39 = v_40;
    if (!car_legal(v_39)) v_40 = cdrerror(v_39); else
    v_40 = cdr(v_39);
    v_39 = stack[0];
    v_39 = static_cast<LispObject>(lesseq2(v_40, v_39));
    v_39 = v_39 ? lisp_true : nil;
    env = stack[-2];
    if (v_39 == nil) goto v_20;
    v_39 = nil;
    goto v_16;
v_20:
    v_39 = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // sub2chk
    v_39 = (*qfn1(fn))(fn, v_39);
    }
    env = stack[-2];
    v_40 = stack[-1];
    v_39 = stack[0];
    {
        LispObject fn = basic_elt(env, 4); // to
        return (*qfn2(fn))(fn, v_40, v_39);
    }
v_16:
    goto v_6;
    v_39 = nil;
v_6:
    return onevalue(v_39);
}



// Code for dssoc

static LispObject CC_dssoc(LispObject env,
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
    v_27 = v_3;
    v_28 = v_2;
// end of prologue
v_7:
    v_26 = v_27;
    if (v_26 == nil) goto v_10;
    else goto v_11;
v_10:
    v_26 = nil;
    goto v_6;
v_11:
    v_29 = v_28;
    v_26 = v_27;
    if (!car_legal(v_26)) v_26 = carerror(v_26); else
    v_26 = car(v_26);
    if (!car_legal(v_26)) v_26 = cdrerror(v_26); else
    v_26 = cdr(v_26);
    if (equal(v_29, v_26)) goto v_14;
    else goto v_15;
v_14:
    v_26 = v_27;
    if (!car_legal(v_26)) v_26 = carerror(v_26); else
    v_26 = car(v_26);
    goto v_6;
v_15:
    v_26 = v_27;
    if (!car_legal(v_26)) v_26 = cdrerror(v_26); else
    v_26 = cdr(v_26);
    v_27 = v_26;
    goto v_7;
    v_26 = nil;
v_6:
    return onevalue(v_26);
}



// Code for noncomlistp

static LispObject CC_noncomlistp(LispObject env,
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
    v_22 = Lconsp(nil, v_22);
    env = stack[-1];
    if (v_22 == nil) goto v_6;
    else goto v_7;
v_6:
    v_22 = nil;
    goto v_5;
v_7:
    v_22 = stack[0];
    if (!car_legal(v_22)) v_22 = carerror(v_22); else
    v_22 = car(v_22);
    {   LispObject fn = basic_elt(env, 1); // noncomp1
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



// Code for rnzerop!:

static LispObject CC_rnzeropT(LispObject env,
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
    if (!car_legal(v_9)) v_9 = cdrerror(v_9); else
    v_9 = cdr(v_9);
    if (!car_legal(v_9)) v_10 = carerror(v_9); else
    v_10 = car(v_9);
    v_9 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_9 = (v_10 == v_9 ? lisp_true : nil);
    return onevalue(v_9);
}



// Code for mksp

static LispObject CC_mksp(LispObject env,
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
    stack[0] = v_3;
    v_9 = v_2;
// end of prologue
    {   LispObject fn = basic_elt(env, 1); // fkern
    v_10 = (*qfn1(fn))(fn, v_9);
    }
    env = stack[-1];
    v_9 = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // getpower
        return (*qfn2(fn))(fn, v_10, v_9);
    }
}



// Code for aeval

static LispObject CC_aeval(LispObject env,
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
        LispObject fn = basic_elt(env, 1); // reval1
        return (*qfn2(fn))(fn, v_8, v_7);
    }
}



// Code for lalr_first

static LispObject CC_lalr_first(LispObject env,
                         LispObject v_2)
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
    stack[0] = nil;
v_10:
    v_64 = stack[-1];
    if (v_64 == nil) goto v_13;
    v_64 = stack[-1];
    if (!car_legal(v_64)) v_64 = carerror(v_64); else
    v_64 = car(v_64);
    if (is_number(v_64)) goto v_21;
    v_66 = nil;
    v_64 = stack[-1];
    if (!car_legal(v_64)) v_65 = carerror(v_64); else
    v_65 = car(v_64);
    v_64 = basic_elt(env, 0); // lalr_first
    v_64 = get(v_65, v_64);
    env = stack[-3];
    stack[0] = v_64;
    v_64 = Lmember(nil, v_66, v_64);
    goto v_19;
v_21:
    v_64 = nil;
    goto v_19;
    v_64 = nil;
v_19:
    if (v_64 == nil) goto v_13;
    goto v_14;
v_13:
    goto v_9;
v_14:
    v_65 = nil;
    v_64 = stack[0];
    v_65 = Ldeleq(nil, v_65, v_64);
    env = stack[-3];
    v_64 = stack[-2];
    {   LispObject fn = basic_elt(env, 1); // union
    v_64 = (*qfn2(fn))(fn, v_65, v_64);
    }
    env = stack[-3];
    stack[-2] = v_64;
    v_64 = stack[-1];
    if (!car_legal(v_64)) v_64 = cdrerror(v_64); else
    v_64 = cdr(v_64);
    stack[-1] = v_64;
    goto v_10;
v_9:
    v_64 = stack[-1];
    if (v_64 == nil) goto v_43;
    else goto v_44;
v_43:
    v_65 = nil;
    v_64 = stack[-2];
    v_64 = cons(v_65, v_64);
    stack[-2] = v_64;
    goto v_42;
v_44:
    v_64 = stack[-1];
    if (!car_legal(v_64)) v_64 = carerror(v_64); else
    v_64 = car(v_64);
    if (is_number(v_64)) goto v_49;
    else goto v_50;
v_49:
    v_64 = stack[-1];
    if (!car_legal(v_64)) v_64 = carerror(v_64); else
    v_64 = car(v_64);
    v_65 = ncons(v_64);
    env = stack[-3];
    v_64 = stack[-2];
    {   LispObject fn = basic_elt(env, 1); // union
    v_64 = (*qfn2(fn))(fn, v_65, v_64);
    }
    stack[-2] = v_64;
    goto v_42;
v_50:
    v_65 = stack[0];
    v_64 = stack[-2];
    {   LispObject fn = basic_elt(env, 1); // union
    v_64 = (*qfn2(fn))(fn, v_65, v_64);
    }
    stack[-2] = v_64;
    goto v_42;
v_42:
    v_64 = stack[-2];
    return onevalue(v_64);
}



// Code for addcomment

static LispObject CC_addcomment(LispObject env,
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
    setvalue(basic_elt(env, 1), v_5); // cursym!*
    return onevalue(v_5);
}



// Code for arrayp

static LispObject CC_arrayp(LispObject env,
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
    if (!symbolp(v_8)) v_8 = nil;
    else { v_8 = qfastgets(v_8);
           if (v_8 != nil) { v_8 = elt(v_8, 2); // rtype
#ifdef RECORD_GET
             if (v_8 != SPID_NOPROP)
                record_get(elt(fastget_names, 2), 1);
             else record_get(elt(fastget_names, 2), 0),
                v_8 = nil; }
           else record_get(elt(fastget_names, 2), 0); }
#else
             if (v_8 == SPID_NOPROP) v_8 = nil; }}
#endif
    v_9 = basic_elt(env, 1); // array
    v_8 = (v_8 == v_9 ? lisp_true : nil);
    return onevalue(v_8);
}



// Code for cl_cflip

static LispObject CC_cl_cflip(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_15, v_16;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_15 = v_3;
    v_16 = v_2;
// end of prologue
    if (v_15 == nil) goto v_8;
    v_15 = v_16;
    goto v_6;
v_8:
    v_15 = v_16;
    {
        LispObject fn = basic_elt(env, 1); // cl_flip
        return (*qfn1(fn))(fn, v_15);
    }
    v_15 = nil;
v_6:
    return onevalue(v_15);
}



// Code for subs3f

static LispObject CC_subs3f(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_8, v_9, v_10;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_8 = v_2;
// end of prologue
    v_10 = v_8;
    v_9 = qvalue(basic_elt(env, 1)); // !*match
    v_8 = lisp_true;
    {
        LispObject fn = basic_elt(env, 2); // subs3f1
        return (*qfn3(fn))(fn, v_10, v_9, v_8);
    }
}



// Code for kernlp

static LispObject CC_kernlp(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_33, v_34;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_33 = v_2;
// end of prologue
v_6:
    v_34 = v_33;
    if (!consp(v_34)) goto v_13;
    else goto v_14;
v_13:
    v_34 = lisp_true;
    goto v_12;
v_14:
    v_34 = v_33;
    if (!car_legal(v_34)) v_34 = carerror(v_34); else
    v_34 = car(v_34);
    v_34 = (consp(v_34) ? nil : lisp_true);
    goto v_12;
    v_34 = nil;
v_12:
    if (v_34 == nil) goto v_10;
    goto v_5;
v_10:
    v_34 = v_33;
    if (!car_legal(v_34)) v_34 = cdrerror(v_34); else
    v_34 = cdr(v_34);
    if (v_34 == nil) goto v_23;
    else goto v_24;
v_23:
    if (!car_legal(v_33)) v_33 = carerror(v_33); else
    v_33 = car(v_33);
    if (!car_legal(v_33)) v_33 = cdrerror(v_33); else
    v_33 = cdr(v_33);
    goto v_6;
v_24:
    v_33 = nil;
    goto v_5;
    v_33 = nil;
v_5:
    return onevalue(v_33);
}



// Code for talp_invp

static LispObject CC_talp_invp(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_28 = stack[0];
    v_28 = Lconsp(nil, v_28);
    env = stack[-2];
    if (v_28 == nil) goto v_6;
    else goto v_7;
v_6:
    v_28 = nil;
    goto v_5;
v_7:
    v_28 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // talp_op
    stack[-1] = (*qfn1(fn))(fn, v_28);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 2); // talp_getl
    v_28 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
    v_28 = Latsoc(nil, stack[-1], v_28);
    if (v_28 == nil) goto v_15;
    else goto v_16;
v_15:
    v_28 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // talp_op
    stack[0] = (*qfn1(fn))(fn, v_28);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // talp_getextl
    v_28 = (*qfn0(fn))(fn);
    }
    v_28 = Latsoc(nil, stack[0], v_28);
    goto v_14;
v_16:
    v_28 = nil;
    goto v_14;
    v_28 = nil;
v_14:
    goto v_5;
    v_28 = nil;
v_5:
    return onevalue(v_28);
}



// Code for qqe_rbopp

static LispObject CC_qqe_rbopp(LispObject env,
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
    v_8 = basic_elt(env, 1); // (equal neq lessp leq geq greaterp)
    v_7 = Lmemq(nil, v_7, v_8);
    return onevalue(v_7);
}



// Code for sub2chk

static LispObject CC_sub2chk(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_29, v_30, v_31;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_31 = v_2;
// end of prologue
    v_29 = qvalue(basic_elt(env, 1)); // subfg!*
    if (v_29 == nil) goto v_7;
    v_30 = v_31;
    v_29 = qvalue(basic_elt(env, 2)); // powlis!*
    v_29 = Latsoc(nil, v_30, v_29);
    if (v_29 == nil) goto v_11;
    else goto v_10;
v_11:
    v_29 = v_31;
    if (!consp(v_29)) goto v_19;
    v_29 = v_31;
    if (!car_legal(v_29)) v_30 = carerror(v_29); else
    v_30 = car(v_29);
    v_29 = basic_elt(env, 3); // (expt sqrt)
    v_29 = Lmemq(nil, v_30, v_29);
    goto v_17;
v_19:
    v_29 = nil;
    goto v_17;
    v_29 = nil;
v_17:
    if (v_29 == nil) goto v_15;
    else goto v_10;
v_15:
    goto v_7;
v_10:
    v_29 = lisp_true;
    setvalue(basic_elt(env, 4), v_29); // !*sub2
    goto v_5;
v_7:
    v_29 = nil;
v_5:
    return onevalue(v_29);
}



// Code for butes

static LispObject CC_butes(LispObject env,
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
    v_38 = v_2;
// end of prologue
    v_35 = v_38;
    if (!car_legal(v_35)) v_35 = carerror(v_35); else
    v_35 = car(v_35);
    v_37 = v_35;
    v_36 = v_37;
    v_35 = basic_elt(env, 1); // ! 
    if (v_36 == v_35) goto v_15;
    else goto v_16;
v_15:
    v_35 = lisp_true;
    goto v_14;
v_16:
    v_36 = v_37;
    v_35 = basic_elt(env, 2); // !$
    v_35 = (v_36 == v_35 ? lisp_true : nil);
    goto v_14;
    v_35 = nil;
v_14:
    if (v_35 == nil) goto v_12;
    v_35 = nil;
    goto v_10;
v_12:
    v_35 = v_38;
    if (!car_legal(v_35)) stack[0] = carerror(v_35); else
    stack[0] = car(v_35);
    v_35 = v_38;
    if (!car_legal(v_35)) v_35 = cdrerror(v_35); else
    v_35 = cdr(v_35);
    {   LispObject fn = basic_elt(env, 0); // butes
    v_35 = (*qfn1(fn))(fn, v_35);
    }
    {
        LispObject v_40 = stack[0];
        return cons(v_40, v_35);
    }
    v_35 = nil;
v_10:
    return onevalue(v_35);
}



// Code for ps!:last!-term

static LispObject CC_psTlastKterm(LispObject env,
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
    v_35 = qvalue(basic_elt(env, 2)); // ps!:max!-order
    goto v_5;
v_7:
    v_36 = v_37;
    v_35 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {
        LispObject fn = basic_elt(env, 3); // ps!:getv
        return (*qfn2(fn))(fn, v_36, v_35);
    }
    v_35 = nil;
v_5:
    return onevalue(v_35);
}



// Code for exchk

static LispObject CC_exchk(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    v_10 = v_2;
// end of prologue
    stack[-2] = v_10;
    stack[-1] = nil;
    stack[0] = nil;
    v_10 = nil;
    v_10 = ncons(v_10);
    env = stack[-3];
    {
        LispObject v_14 = stack[-2];
        LispObject v_15 = stack[-1];
        LispObject v_16 = stack[0];
        LispObject fn = basic_elt(env, 1); // exchk1
        return (*qfn4up(fn))(fn, v_14, v_15, v_16, v_10);
    }
}



// Code for expchk

static LispObject CC_expchk(LispObject env,
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
    v_15 = v_2;
// end of prologue
    v_14 = qvalue(basic_elt(env, 1)); // !*exp
    if (v_14 == nil) goto v_7;
    v_14 = v_15;
    goto v_5;
v_7:
    v_14 = v_15;
    {
        LispObject fn = basic_elt(env, 2); // offexpchk
        return (*qfn1(fn))(fn, v_14);
    }
    v_14 = nil;
v_5:
    return onevalue(v_14);
}



// Code for dm!-abs

static LispObject CC_dmKabs(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // !:minusp
    v_15 = (*qfn1(fn))(fn, v_15);
    }
    env = stack[-1];
    if (v_15 == nil) goto v_7;
    v_15 = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // dm!-minus
        return (*qfn1(fn))(fn, v_15);
    }
v_7:
    v_15 = stack[0];
    goto v_5;
    v_15 = nil;
v_5:
    return onevalue(v_15);
}



// Code for binding

static LispObject CC_binding(LispObject env,
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
    if (!symbolp(v_14)) v_14 = nil;
    else { v_14 = qfastgets(v_14);
           if (v_14 != nil) { v_14 = elt(v_14, 13); // binding
#ifdef RECORD_GET
             if (v_14 != SPID_NOPROP)
                record_get(elt(fastget_names, 13), 1);
             else record_get(elt(fastget_names, 13), 0),
                v_14 = nil; }
           else record_get(elt(fastget_names, 13), 0); }
#else
             if (v_14 == SPID_NOPROP) v_14 = nil; }}
#endif
    v_15 = v_14;
    v_14 = v_15;
    if (v_14 == nil) goto v_10;
    v_14 = v_15;
    if (!car_legal(v_14)) v_14 = carerror(v_14); else
    v_14 = car(v_14);
    goto v_8;
v_10:
    v_14 = nil;
v_8:
    return onevalue(v_14);
}



// Code for evlexcomp

static LispObject CC_evlexcomp(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
v_7:
    v_39 = stack[-1];
    if (v_39 == nil) goto v_10;
    else goto v_11;
v_10:
    v_39 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_6;
v_11:
    v_39 = stack[0];
    if (v_39 == nil) goto v_14;
    else goto v_15;
v_14:
    v_39 = basic_elt(env, 1); // (0)
    stack[0] = v_39;
    goto v_7;
v_15:
    v_39 = stack[-1];
    if (!car_legal(v_39)) v_40 = carerror(v_39); else
    v_40 = car(v_39);
    v_39 = stack[0];
    if (!car_legal(v_39)) v_39 = carerror(v_39); else
    v_39 = car(v_39);
    {   LispObject fn = basic_elt(env, 2); // iequal
    v_39 = (*qfn2(fn))(fn, v_40, v_39);
    }
    env = stack[-2];
    if (v_39 == nil) goto v_19;
    v_39 = stack[-1];
    if (!car_legal(v_39)) v_39 = cdrerror(v_39); else
    v_39 = cdr(v_39);
    stack[-1] = v_39;
    v_39 = stack[0];
    if (!car_legal(v_39)) v_39 = cdrerror(v_39); else
    v_39 = cdr(v_39);
    stack[0] = v_39;
    goto v_7;
v_19:
    v_39 = stack[-1];
    if (!car_legal(v_39)) v_40 = carerror(v_39); else
    v_40 = car(v_39);
    v_39 = stack[0];
    if (!car_legal(v_39)) v_39 = carerror(v_39); else
    v_39 = car(v_39);
    if ((static_cast<std::intptr_t>(v_40) > static_cast<std::intptr_t>(v_39))) goto v_29;
    else goto v_30;
v_29:
    v_39 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_6;
v_30:
    v_39 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    goto v_6;
    v_39 = nil;
v_6:
    return onevalue(v_39);
}



// Code for sc_getmat

static LispObject CC_sc_getmat(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    stack[0] = v_4;
    v_13 = v_3;
    v_14 = v_2;
// end of prologue
    stack[-1] = v_14;
    v_13 = sub1(v_13);
    env = stack[-2];
    stack[-1] = Lgetv(nil, stack[-1], v_13);
    env = stack[-2];
    v_13 = stack[0];
    v_13 = sub1(v_13);
    {
        LispObject v_17 = stack[-1];
        return Lgetv(nil, v_17, v_13);
    }
}



// Code for getrtypecar

static LispObject CC_getrtypecar(LispObject env,
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
        LispObject fn = basic_elt(env, 1); // getrtype
        return (*qfn1(fn))(fn, v_7);
    }
}



// Code for isanindex

static LispObject CC_isanindex(LispObject env,
                         LispObject v_2)
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
        push(v_2);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_41 = v_2;
// end of prologue
    v_39 = v_41;
    if (symbolp(v_39)) goto v_7;
    v_39 = nil;
    goto v_5;
v_7:
    v_40 = v_41;
    v_39 = qvalue(basic_elt(env, 1)); // physopindices!*
    v_39 = Lmemq(nil, v_40, v_39);
    if (v_39 == nil) goto v_14;
    else goto v_13;
v_14:
    v_40 = v_41;
    v_39 = qvalue(basic_elt(env, 2)); // physopvarind!*
    v_39 = Lmember(nil, v_40, v_39);
    if (v_39 == nil) goto v_20;
    else goto v_19;
v_20:
    v_40 = v_41;
    v_39 = qvalue(basic_elt(env, 3)); // frlis!*
    v_39 = Lmemq(nil, v_40, v_39);
    if (v_39 == nil) goto v_26;
    else goto v_27;
v_26:
    v_39 = nil;
    goto v_25;
v_27:
    v_40 = v_41;
    v_39 = qvalue(basic_elt(env, 4)); // frasc!*
    {   LispObject fn = basic_elt(env, 5); // revassoc
    v_39 = (*qfn2(fn))(fn, v_40, v_39);
    }
    env = stack[0];
    v_40 = qvalue(basic_elt(env, 1)); // physopindices!*
    v_39 = Lmember(nil, v_39, v_40);
    goto v_25;
    v_39 = nil;
v_25:
v_19:
v_13:
    goto v_5;
    v_39 = nil;
v_5:
    return onevalue(v_39);
}



// Code for poly!-multf

static LispObject CC_polyKmultf(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_266, v_267, v_268;
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
v_9:
    v_266 = stack[-2];
    if (v_266 == nil) goto v_16;
    else goto v_17;
v_16:
    v_266 = lisp_true;
    goto v_15;
v_17:
    v_266 = stack[-1];
    v_266 = (v_266 == nil ? lisp_true : nil);
    goto v_15;
    v_266 = nil;
v_15:
    if (v_266 == nil) goto v_13;
    v_266 = nil;
    goto v_8;
v_13:
    v_267 = stack[-2];
    v_266 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_267 == v_266) goto v_25;
    else goto v_26;
v_25:
    v_266 = stack[-1];
    goto v_8;
v_26:
    v_267 = stack[-1];
    v_266 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_267 == v_266) goto v_30;
    else goto v_31;
v_30:
    v_266 = stack[-2];
    goto v_8;
v_31:
    v_266 = stack[-2];
    if (!consp(v_266)) goto v_39;
    else goto v_40;
v_39:
    v_266 = lisp_true;
    goto v_38;
v_40:
    v_266 = stack[-2];
    if (!car_legal(v_266)) v_266 = carerror(v_266); else
    v_266 = car(v_266);
    v_266 = (consp(v_266) ? nil : lisp_true);
    goto v_38;
    v_266 = nil;
v_38:
    if (v_266 == nil) goto v_36;
    v_267 = stack[-2];
    v_266 = stack[-1];
    {
        LispObject fn = basic_elt(env, 8); // multd
        return (*qfn2(fn))(fn, v_267, v_266);
    }
v_36:
    v_266 = stack[-1];
    if (!consp(v_266)) goto v_55;
    else goto v_56;
v_55:
    v_266 = lisp_true;
    goto v_54;
v_56:
    v_266 = stack[-1];
    if (!car_legal(v_266)) v_266 = carerror(v_266); else
    v_266 = car(v_266);
    v_266 = (consp(v_266) ? nil : lisp_true);
    goto v_54;
    v_266 = nil;
v_54:
    if (v_266 == nil) goto v_52;
    v_267 = stack[-1];
    v_266 = stack[-2];
    {
        LispObject fn = basic_elt(env, 8); // multd
        return (*qfn2(fn))(fn, v_267, v_266);
    }
v_52:
    v_266 = qvalue(basic_elt(env, 1)); // !*exp
    if (v_266 == nil) goto v_69;
    else goto v_68;
v_69:
    v_266 = qvalue(basic_elt(env, 2)); // ncmp!*
    if (v_266 == nil) goto v_72;
    else goto v_68;
v_72:
    v_266 = qvalue(basic_elt(env, 3)); // wtl!*
    if (v_266 == nil) goto v_75;
    else goto v_68;
v_75:
    v_266 = stack[-3];
    if (v_266 == nil) goto v_77;
    else goto v_68;
v_77:
    v_266 = stack[-2];
    {   LispObject fn = basic_elt(env, 9); // mkprod
    v_266 = (*qfn1(fn))(fn, v_266);
    }
    env = stack[-4];
    stack[-2] = v_266;
    v_266 = stack[-1];
    {   LispObject fn = basic_elt(env, 9); // mkprod
    v_266 = (*qfn1(fn))(fn, v_266);
    }
    env = stack[-4];
    stack[-1] = v_266;
    v_266 = lisp_true;
    stack[-3] = v_266;
    goto v_9;
v_68:
    v_266 = stack[-2];
    if (!car_legal(v_266)) v_266 = carerror(v_266); else
    v_266 = car(v_266);
    if (!car_legal(v_266)) v_266 = carerror(v_266); else
    v_266 = car(v_266);
    if (!car_legal(v_266)) v_266 = carerror(v_266); else
    v_266 = car(v_266);
    stack[-3] = v_266;
    v_266 = stack[-1];
    if (!car_legal(v_266)) v_266 = carerror(v_266); else
    v_266 = car(v_266);
    if (!car_legal(v_266)) v_266 = carerror(v_266); else
    v_266 = car(v_266);
    if (!car_legal(v_266)) v_266 = carerror(v_266); else
    v_266 = car(v_266);
    stack[0] = v_266;
    v_266 = stack[-1];
    {   LispObject fn = basic_elt(env, 10); // noncomfp
    v_266 = (*qfn1(fn))(fn, v_266);
    }
    env = stack[-4];
    if (v_266 == nil) goto v_95;
    v_266 = stack[-3];
    {   LispObject fn = basic_elt(env, 11); // noncomp
    v_266 = (*qfn1(fn))(fn, v_266);
    }
    env = stack[-4];
    if (v_266 == nil) goto v_100;
    else goto v_99;
v_100:
    v_266 = qvalue(basic_elt(env, 4)); // !*!*processed
    if (v_266 == nil) goto v_99;
    goto v_95;
v_99:
    v_267 = stack[-2];
    v_266 = stack[-1];
    {
        LispObject fn = basic_elt(env, 12); // poly!-multfnc
        return (*qfn2(fn))(fn, v_267, v_266);
    }
v_95:
    v_267 = stack[-3];
    v_266 = stack[0];
    if (v_267 == v_266) goto v_108;
    else goto v_109;
v_108:
    v_266 = stack[-2];
    if (!car_legal(v_266)) v_266 = carerror(v_266); else
    v_266 = car(v_266);
    if (!car_legal(v_266)) v_266 = carerror(v_266); else
    v_266 = car(v_266);
    if (!car_legal(v_266)) v_266 = cdrerror(v_266); else
    v_266 = cdr(v_266);
    v_266 = integerp(v_266);
    if (v_266 == nil) goto v_118;
    else goto v_119;
v_118:
    v_266 = lisp_true;
    goto v_117;
v_119:
    v_266 = stack[-1];
    if (!car_legal(v_266)) v_266 = carerror(v_266); else
    v_266 = car(v_266);
    if (!car_legal(v_266)) v_266 = carerror(v_266); else
    v_266 = car(v_266);
    if (!car_legal(v_266)) v_266 = cdrerror(v_266); else
    v_266 = cdr(v_266);
    v_266 = integerp(v_266);
    v_266 = (v_266 == nil ? lisp_true : nil);
    goto v_117;
    v_266 = nil;
v_117:
    if (v_266 == nil) goto v_115;
    stack[0] = stack[-3];
    v_268 = basic_elt(env, 5); // plus
    v_266 = stack[-2];
    if (!car_legal(v_266)) v_266 = carerror(v_266); else
    v_266 = car(v_266);
    if (!car_legal(v_266)) v_266 = carerror(v_266); else
    v_266 = car(v_266);
    if (!car_legal(v_266)) v_267 = cdrerror(v_266); else
    v_267 = cdr(v_266);
    v_266 = stack[-1];
    if (!car_legal(v_266)) v_266 = carerror(v_266); else
    v_266 = car(v_266);
    if (!car_legal(v_266)) v_266 = carerror(v_266); else
    v_266 = car(v_266);
    if (!car_legal(v_266)) v_266 = cdrerror(v_266); else
    v_266 = cdr(v_266);
    v_266 = list3(v_268, v_267, v_266);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 13); // reval
    v_266 = (*qfn1(fn))(fn, v_266);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 14); // to
    v_266 = (*qfn2(fn))(fn, stack[0], v_266);
    }
    env = stack[-4];
    stack[-3] = v_266;
    goto v_113;
v_115:
    stack[0] = stack[-3];
    v_266 = stack[-2];
    if (!car_legal(v_266)) v_266 = carerror(v_266); else
    v_266 = car(v_266);
    if (!car_legal(v_266)) v_266 = carerror(v_266); else
    v_266 = car(v_266);
    if (!car_legal(v_266)) v_267 = cdrerror(v_266); else
    v_267 = cdr(v_266);
    v_266 = stack[-1];
    if (!car_legal(v_266)) v_266 = carerror(v_266); else
    v_266 = car(v_266);
    if (!car_legal(v_266)) v_266 = carerror(v_266); else
    v_266 = car(v_266);
    if (!car_legal(v_266)) v_266 = cdrerror(v_266); else
    v_266 = cdr(v_266);
    v_266 = plus2(v_267, v_266);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 15); // mkspm
    v_266 = (*qfn2(fn))(fn, stack[0], v_266);
    }
    env = stack[-4];
    stack[-3] = v_266;
    goto v_113;
v_113:
    v_266 = stack[-2];
    if (!car_legal(v_266)) v_267 = cdrerror(v_266); else
    v_267 = cdr(v_266);
    v_266 = stack[-1];
    {   LispObject fn = basic_elt(env, 0); // poly!-multf
    stack[0] = (*qfn2(fn))(fn, v_267, v_266);
    }
    env = stack[-4];
    v_266 = stack[-2];
    if (!car_legal(v_266)) v_266 = carerror(v_266); else
    v_266 = car(v_266);
    v_267 = ncons(v_266);
    env = stack[-4];
    v_266 = stack[-1];
    if (!car_legal(v_266)) v_266 = cdrerror(v_266); else
    v_266 = cdr(v_266);
    {   LispObject fn = basic_elt(env, 0); // poly!-multf
    v_266 = (*qfn2(fn))(fn, v_267, v_266);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 16); // addf
    v_266 = (*qfn2(fn))(fn, stack[0], v_266);
    }
    env = stack[-4];
    stack[0] = v_266;
    v_266 = stack[-3];
    if (v_266 == nil) goto v_177;
    else goto v_178;
v_177:
    v_266 = lisp_true;
    goto v_176;
v_178:
    v_266 = stack[-2];
    if (!car_legal(v_266)) v_266 = carerror(v_266); else
    v_266 = car(v_266);
    if (!car_legal(v_266)) v_267 = cdrerror(v_266); else
    v_267 = cdr(v_266);
    v_266 = stack[-1];
    if (!car_legal(v_266)) v_266 = carerror(v_266); else
    v_266 = car(v_266);
    if (!car_legal(v_266)) v_266 = cdrerror(v_266); else
    v_266 = cdr(v_266);
    {   LispObject fn = basic_elt(env, 0); // poly!-multf
    v_266 = (*qfn2(fn))(fn, v_267, v_266);
    }
    env = stack[-4];
    stack[-2] = v_266;
    v_266 = (v_266 == nil ? lisp_true : nil);
    goto v_176;
    v_266 = nil;
v_176:
    if (v_266 == nil) goto v_174;
    v_266 = lisp_true;
    setvalue(basic_elt(env, 6), v_266); // !*asymp!*
    v_266 = stack[0];
    goto v_172;
v_174:
    v_267 = stack[-3];
    v_266 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_267 == v_266) goto v_193;
    else goto v_194;
v_193:
    v_267 = stack[-2];
    v_266 = stack[0];
    {
        LispObject fn = basic_elt(env, 16); // addf
        return (*qfn2(fn))(fn, v_267, v_266);
    }
v_194:
    v_266 = qvalue(basic_elt(env, 7)); // !*mcd
    if (v_266 == nil) goto v_200;
    else goto v_201;
v_200:
    v_267 = stack[-3];
    v_266 = stack[-2];
    v_266 = cons(v_267, v_266);
    env = stack[-4];
    v_267 = ncons(v_266);
    env = stack[-4];
    v_266 = stack[0];
    {
        LispObject fn = basic_elt(env, 16); // addf
        return (*qfn2(fn))(fn, v_267, v_266);
    }
v_201:
    v_268 = stack[-3];
    v_267 = stack[-2];
    v_266 = stack[0];
    return acons(v_268, v_267, v_266);
    v_266 = nil;
v_172:
    goto v_8;
v_109:
    v_267 = stack[-3];
    v_266 = stack[0];
    {   LispObject fn = basic_elt(env, 17); // ordop
    v_266 = (*qfn2(fn))(fn, v_267, v_266);
    }
    env = stack[-4];
    if (v_266 == nil) goto v_216;
    v_266 = stack[-2];
    if (!car_legal(v_266)) v_266 = carerror(v_266); else
    v_266 = car(v_266);
    if (!car_legal(v_266)) v_267 = cdrerror(v_266); else
    v_267 = cdr(v_266);
    v_266 = stack[-1];
    {   LispObject fn = basic_elt(env, 0); // poly!-multf
    v_266 = (*qfn2(fn))(fn, v_267, v_266);
    }
    env = stack[-4];
    stack[-3] = v_266;
    v_266 = stack[-2];
    if (!car_legal(v_266)) v_267 = cdrerror(v_266); else
    v_267 = cdr(v_266);
    v_266 = stack[-1];
    {   LispObject fn = basic_elt(env, 0); // poly!-multf
    v_266 = (*qfn2(fn))(fn, v_267, v_266);
    }
    stack[0] = v_266;
    v_266 = stack[-3];
    if (v_266 == nil) goto v_231;
    else goto v_232;
v_231:
    v_266 = stack[0];
    goto v_230;
v_232:
    v_266 = stack[-2];
    if (!car_legal(v_266)) v_266 = carerror(v_266); else
    v_266 = car(v_266);
    if (!car_legal(v_266)) v_268 = carerror(v_266); else
    v_268 = car(v_266);
    v_267 = stack[-3];
    v_266 = stack[0];
    return acons(v_268, v_267, v_266);
    v_266 = nil;
v_230:
    goto v_8;
v_216:
    v_267 = stack[-2];
    v_266 = stack[-1];
    if (!car_legal(v_266)) v_266 = carerror(v_266); else
    v_266 = car(v_266);
    if (!car_legal(v_266)) v_266 = cdrerror(v_266); else
    v_266 = cdr(v_266);
    {   LispObject fn = basic_elt(env, 0); // poly!-multf
    v_266 = (*qfn2(fn))(fn, v_267, v_266);
    }
    env = stack[-4];
    stack[-3] = v_266;
    v_267 = stack[-2];
    v_266 = stack[-1];
    if (!car_legal(v_266)) v_266 = cdrerror(v_266); else
    v_266 = cdr(v_266);
    {   LispObject fn = basic_elt(env, 0); // poly!-multf
    v_266 = (*qfn2(fn))(fn, v_267, v_266);
    }
    stack[0] = v_266;
    v_266 = stack[-3];
    if (v_266 == nil) goto v_254;
    else goto v_255;
v_254:
    v_266 = stack[0];
    goto v_253;
v_255:
    v_266 = stack[-1];
    if (!car_legal(v_266)) v_266 = carerror(v_266); else
    v_266 = car(v_266);
    if (!car_legal(v_266)) v_268 = carerror(v_266); else
    v_268 = car(v_266);
    v_267 = stack[-3];
    v_266 = stack[0];
    return acons(v_268, v_267, v_266);
    v_266 = nil;
v_253:
v_8:
    return onevalue(v_266);
}



// Code for mo_divides!?

static LispObject CC_mo_dividesW(LispObject env,
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
        LispObject fn = basic_elt(env, 1); // mo!=modiv1
        return (*qfn2(fn))(fn, v_11, v_10);
    }
}



// Code for dlesslex

static LispObject CC_dlesslex(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_34, v_35, v_36, v_37;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_35 = v_3;
    v_36 = v_2;
// end of prologue
v_7:
    v_34 = v_36;
    if (v_34 == nil) goto v_10;
    else goto v_11;
v_10:
    v_34 = nil;
    goto v_6;
v_11:
    v_34 = v_36;
    if (!car_legal(v_34)) v_37 = carerror(v_34); else
    v_37 = car(v_34);
    v_34 = v_35;
    if (!car_legal(v_34)) v_34 = carerror(v_34); else
    v_34 = car(v_34);
    if ((static_cast<std::intptr_t>(v_37) > static_cast<std::intptr_t>(v_34))) goto v_14;
    else goto v_15;
v_14:
    v_34 = nil;
    goto v_6;
v_15:
    v_34 = v_36;
    if (!car_legal(v_34)) v_37 = carerror(v_34); else
    v_37 = car(v_34);
    v_34 = v_35;
    if (!car_legal(v_34)) v_34 = carerror(v_34); else
    v_34 = car(v_34);
    if ((static_cast<std::intptr_t>(v_37) < static_cast<std::intptr_t>(v_34))) goto v_21;
    else goto v_22;
v_21:
    v_34 = lisp_true;
    goto v_6;
v_22:
    v_34 = v_36;
    if (!car_legal(v_34)) v_34 = cdrerror(v_34); else
    v_34 = cdr(v_34);
    v_36 = v_34;
    v_34 = v_35;
    if (!car_legal(v_34)) v_34 = cdrerror(v_34); else
    v_34 = cdr(v_34);
    v_35 = v_34;
    goto v_7;
    v_34 = nil;
v_6:
    return onevalue(v_34);
}



// Code for hasonevector

static LispObject CC_hasonevector(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
v_1:
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
    {   LispObject fn = basic_elt(env, 1); // vecp
    v_21 = (*qfn1(fn))(fn, v_21);
    }
    env = stack[-1];
    if (v_21 == nil) goto v_14;
    else goto v_13;
v_14:
    v_21 = stack[0];
    if (!car_legal(v_21)) v_21 = cdrerror(v_21); else
    v_21 = cdr(v_21);
    stack[0] = v_21;
    goto v_1;
v_13:
    goto v_5;
    v_21 = nil;
v_5:
    return onevalue(v_21);
}



// Code for reduce_pv0

static LispObject CC_reduce_pv0(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_102, v_103;
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
    stack[0] = v_2;
// end of prologue
    v_102 = stack[-4];
    if (v_102 == nil) goto v_8;
    else goto v_9;
v_8:
    v_102 = stack[0];
    goto v_7;
v_9:
    v_102 = stack[0];
    if (v_102 == nil) goto v_12;
    else goto v_13;
v_12:
    v_102 = nil;
    goto v_7;
v_13:
    v_102 = stack[0];
    stack[-5] = v_102;
v_25:
    v_102 = stack[-5];
    if (v_102 == nil) goto v_28;
    v_102 = stack[-4];
    if (v_102 == nil) goto v_28;
    v_102 = stack[-5];
    if (!car_legal(v_102)) v_102 = carerror(v_102); else
    v_102 = car(v_102);
    if (!car_legal(v_102)) v_103 = cdrerror(v_102); else
    v_103 = cdr(v_102);
    v_102 = stack[-4];
    if (!car_legal(v_102)) v_102 = carerror(v_102); else
    v_102 = car(v_102);
    if (!car_legal(v_102)) v_102 = cdrerror(v_102); else
    v_102 = cdr(v_102);
    v_102 = static_cast<LispObject>(greaterp2(v_103, v_102));
    v_102 = v_102 ? lisp_true : nil;
    env = stack[-6];
    if (v_102 == nil) goto v_28;
    goto v_29;
v_28:
    goto v_24;
v_29:
    v_102 = stack[-5];
    if (!car_legal(v_102)) v_102 = cdrerror(v_102); else
    v_102 = cdr(v_102);
    stack[-5] = v_102;
    goto v_25;
v_24:
    v_102 = stack[-5];
    if (v_102 == nil) goto v_49;
    v_102 = stack[-4];
    if (v_102 == nil) goto v_49;
    v_102 = stack[-4];
    if (!car_legal(v_102)) v_102 = carerror(v_102); else
    v_102 = car(v_102);
    if (!car_legal(v_102)) v_103 = cdrerror(v_102); else
    v_103 = cdr(v_102);
    v_102 = stack[-5];
    if (!car_legal(v_102)) v_102 = carerror(v_102); else
    v_102 = car(v_102);
    if (!car_legal(v_102)) v_102 = cdrerror(v_102); else
    v_102 = cdr(v_102);
    if (equal(v_103, v_102)) goto v_55;
    else goto v_49;
v_55:
    v_102 = stack[-5];
    if (!car_legal(v_102)) v_102 = carerror(v_102); else
    v_102 = car(v_102);
    if (!car_legal(v_102)) v_103 = carerror(v_102); else
    v_103 = car(v_102);
    v_102 = stack[-4];
    if (!car_legal(v_102)) v_102 = carerror(v_102); else
    v_102 = car(v_102);
    if (!car_legal(v_102)) v_102 = carerror(v_102); else
    v_102 = car(v_102);
    {   LispObject fn = basic_elt(env, 2); // lcm
    v_102 = (*qfn2(fn))(fn, v_103, v_102);
    }
    env = stack[-6];
    stack[-2] = v_102;
    v_103 = stack[-2];
    v_102 = stack[-5];
    if (!car_legal(v_102)) v_102 = carerror(v_102); else
    v_102 = car(v_102);
    if (!car_legal(v_102)) v_102 = carerror(v_102); else
    v_102 = car(v_102);
    v_102 = quot2(v_103, v_102);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 3); // pv_multc
    stack[-1] = (*qfn2(fn))(fn, stack[0], v_102);
    }
    env = stack[-6];
    stack[0] = stack[-4];
    v_103 = stack[-2];
    v_102 = stack[-4];
    if (!car_legal(v_102)) v_102 = carerror(v_102); else
    v_102 = car(v_102);
    if (!car_legal(v_102)) v_102 = carerror(v_102); else
    v_102 = car(v_102);
    v_102 = quot2(v_103, v_102);
    env = stack[-6];
    v_102 = negate(v_102);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 3); // pv_multc
    v_102 = (*qfn2(fn))(fn, stack[0], v_102);
    }
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 4); // pv_add
    v_102 = (*qfn2(fn))(fn, stack[-1], v_102);
    }
    env = stack[-6];
    stack[0] = v_102;
    v_102 = stack[-3];
    if (v_102 == nil) goto v_87;
    else goto v_88;
v_87:
    stack[-1] = qvalue(basic_elt(env, 1)); // pv_den
    v_103 = stack[-2];
    v_102 = stack[-5];
    if (!car_legal(v_102)) v_102 = carerror(v_102); else
    v_102 = car(v_102);
    if (!car_legal(v_102)) v_102 = carerror(v_102); else
    v_102 = car(v_102);
    v_102 = quot2(v_103, v_102);
    env = stack[-6];
    v_102 = times2(stack[-1], v_102);
    env = stack[-6];
    setvalue(basic_elt(env, 1), v_102); // pv_den
    goto v_86;
v_88:
    v_102 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    setvalue(basic_elt(env, 1), v_102); // pv_den
    goto v_86;
v_86:
    goto v_47;
v_49:
v_47:
    v_102 = stack[0];
    goto v_7;
    v_102 = nil;
v_7:
    return onevalue(v_102);
}



// Code for modonep!:

static LispObject CC_modonepT(LispObject env,
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



// Code for remainder!-in!-vector

static LispObject CC_remainderKinKvector(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_109, v_110, v_111;
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
    push(nil, nil);
    stack_popper stack_popper_var(13);
// copy arguments values to proper place
    stack[-7] = v_5;
    stack[-8] = v_4;
    stack[-9] = v_3;
    stack[-10] = v_2;
// end of prologue
    v_110 = stack[-7];
    v_109 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_110 == v_109) goto v_15;
    else goto v_16;
v_15:
    v_109 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    goto v_12;
v_16:
    v_110 = stack[-7];
    v_109 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    if (v_110 == v_109) goto v_20;
    else goto v_21;
v_20:
    v_109 = basic_elt(env, 1); // "Attempt to divide by zero"
    {   LispObject fn = basic_elt(env, 2); // errorf
    v_109 = (*qfn1(fn))(fn, v_109);
    }
    env = stack[-12];
    goto v_14;
v_21:
v_14:
    v_110 = stack[-8];
    v_109 = stack[-7];
    v_109 = Lgetv(nil, v_110, v_109);
    env = stack[-12];
    v_109 = Lmodular_reciprocal(nil, v_109);
    env = stack[-12];
    {   std::intptr_t w = int_of_fixnum(v_109);
        if (w != 0) w = current_modulus - w;
        v_109 = fixnum_of_int(w);
    }
    stack[-5] = v_109;
    v_109 = stack[-7];
    v_109 = static_cast<LispObject>(static_cast<std::intptr_t>(v_109) - 0x10);
    stack[-6] = v_109;
v_35:
    v_110 = stack[-9];
    v_109 = stack[-7];
    v_110 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_110) - static_cast<std::uintptr_t>(v_109) + TAG_FIXNUM);
    stack[-11] = v_110;
    v_109 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if ((static_cast<std::intptr_t>(v_110) < static_cast<std::intptr_t>(v_109))) goto v_38;
    else goto v_39;
v_38:
    goto v_34;
v_39:
    stack[0] = stack[-5];
    v_110 = stack[-10];
    v_109 = stack[-9];
    v_109 = Lgetv(nil, v_110, v_109);
    env = stack[-12];
    v_109 = Lmodular_times(nil, stack[0], v_109);
    env = stack[-12];
    stack[-4] = v_109;
    v_109 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-3] = v_109;
v_53:
    v_110 = stack[-6];
    v_109 = stack[-3];
    v_109 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_110) - static_cast<std::uintptr_t>(v_109) + TAG_FIXNUM);
    v_109 = (static_cast<std::intptr_t>(v_109) < 0 ? lisp_true : nil);
    if (v_109 == nil) goto v_58;
    goto v_52;
v_58:
    stack[-2] = stack[-10];
    v_110 = stack[-3];
    v_109 = stack[-11];
    stack[-1] = static_cast<LispObject>(static_cast<std::uintptr_t>(v_110) + static_cast<std::uintptr_t>(v_109) - TAG_FIXNUM);
    v_111 = stack[-10];
    v_110 = stack[-3];
    v_109 = stack[-11];
    v_109 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_110) + static_cast<std::uintptr_t>(v_109) - TAG_FIXNUM);
    stack[0] = Lgetv(nil, v_111, v_109);
    env = stack[-12];
    v_110 = stack[-8];
    v_109 = stack[-3];
    v_110 = Lgetv(nil, v_110, v_109);
    env = stack[-12];
    v_109 = stack[-4];
    v_109 = Lmodular_times(nil, v_110, v_109);
    env = stack[-12];
    {   std::intptr_t w = int_of_fixnum(stack[0]) + int_of_fixnum(v_109);
        if (w >= current_modulus) w -= current_modulus;
        v_109 = fixnum_of_int(w);
    }
    v_109 = Lputv(nil, stack[-2], stack[-1], v_109);
    env = stack[-12];
    v_109 = stack[-3];
    v_109 = static_cast<LispObject>(static_cast<std::intptr_t>(v_109) + 0x10);
    stack[-3] = v_109;
    goto v_53;
v_52:
    v_109 = stack[-9];
    v_109 = static_cast<LispObject>(static_cast<std::intptr_t>(v_109) - 0x10);
    stack[-9] = v_109;
v_86:
    v_110 = stack[-9];
    v_109 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if ((static_cast<std::intptr_t>(v_110) < static_cast<std::intptr_t>(v_109))) goto v_94;
    v_110 = stack[-10];
    v_109 = stack[-9];
    v_110 = Lgetv(nil, v_110, v_109);
    env = stack[-12];
    v_109 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_109 = (v_110 == v_109 ? lisp_true : nil);
    goto v_92;
v_94:
    v_109 = nil;
    goto v_92;
    v_109 = nil;
v_92:
    if (v_109 == nil) goto v_89;
    else goto v_90;
v_89:
    goto v_85;
v_90:
    v_109 = stack[-9];
    v_109 = static_cast<LispObject>(static_cast<std::intptr_t>(v_109) - 0x10);
    stack[-9] = v_109;
    goto v_86;
v_85:
    goto v_35;
v_34:
    v_109 = stack[-9];
v_12:
    return onevalue(v_109);
}



// Code for smemql

static LispObject CC_smemql(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_32 = stack[-1];
    if (v_32 == nil) goto v_11;
    else goto v_12;
v_11:
    v_32 = stack[-2];
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn1(fn))(fn, v_32);
    }
v_12:
    v_32 = stack[-1];
    if (!car_legal(v_32)) v_33 = carerror(v_32); else
    v_33 = car(v_32);
    v_32 = stack[0];
    v_32 = Lsmemq(nil, v_33, v_32);
    env = stack[-3];
    if (v_32 == nil) goto v_17;
    v_32 = stack[-1];
    if (!car_legal(v_32)) v_33 = carerror(v_32); else
    v_33 = car(v_32);
    v_32 = stack[-2];
    v_32 = cons(v_33, v_32);
    env = stack[-3];
    stack[-2] = v_32;
    v_32 = stack[-1];
    if (!car_legal(v_32)) v_32 = cdrerror(v_32); else
    v_32 = cdr(v_32);
    stack[-1] = v_32;
    goto v_8;
v_17:
    v_32 = stack[-1];
    if (!car_legal(v_32)) v_32 = cdrerror(v_32); else
    v_32 = cdr(v_32);
    stack[-1] = v_32;
    goto v_8;
    v_32 = nil;
    return onevalue(v_32);
}



// Code for lalr_add_lookahead

static LispObject CC_lalr_add_lookahead(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_22, v_23, v_24;
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
    v_23 = v_3;
    v_24 = v_2;
// end of prologue
    v_22 = v_24;
    if (v_22 == nil) goto v_8;
    stack[0] = v_24;
    v_22 = v_23;
    v_23 = v_24;
    if (!car_legal(v_23)) v_23 = cdrerror(v_23); else
    v_23 = cdr(v_23);
    v_22 = cons(v_22, v_23);
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_22);
    v_22 = stack[0];
    goto v_6;
v_8:
    stack[0] = v_24;
    v_22 = v_23;
    v_22 = ncons(v_22);
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_22);
    v_22 = stack[0];
    goto v_6;
    v_22 = nil;
v_6:
    return onevalue(v_22);
}



// Code for setkorder

static LispObject CC_setkorder(LispObject env,
                         LispObject v_2)
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
    v_19 = qvalue(basic_elt(env, 1)); // kord!*
    stack[0] = v_19;
    v_20 = v_21;
    v_19 = stack[0];
    if (equal(v_20, v_19)) goto v_10;
    else goto v_11;
v_10:
    v_19 = stack[0];
    goto v_6;
v_11:
    v_19 = v_21;
    setvalue(basic_elt(env, 1), v_19); // kord!*
    v_19 = nil;
    v_19 = ncons(v_19);
    env = stack[-1];
    setvalue(basic_elt(env, 2), v_19); // alglist!*
    v_19 = stack[0];
v_6:
    return onevalue(v_19);
}



// Code for mtchp1

static LispObject CC_mtchp1(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_125, v_126, v_127;
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
    v_125 = v_5;
    stack[0] = v_4;
    stack[-1] = v_3;
    stack[-2] = v_2;
// end of prologue
    v_126 = stack[-2];
    v_125 = stack[-1];
    if (equal(v_126, v_125)) goto v_12;
    else goto v_13;
v_12:
    v_125 = nil;
    return ncons(v_125);
v_13:
    v_125 = stack[-2];
    if (!car_legal(v_125)) v_126 = carerror(v_125); else
    v_126 = car(v_125);
    v_125 = stack[-1];
    if (!car_legal(v_125)) v_125 = carerror(v_125); else
    v_125 = car(v_125);
    {   LispObject fn = basic_elt(env, 3); // mchk!*
    v_125 = (*qfn2(fn))(fn, v_126, v_125);
    }
    env = stack[-4];
    stack[-3] = v_125;
    if (v_125 == nil) goto v_18;
    else goto v_19;
v_18:
    v_125 = nil;
    goto v_9;
v_19:
    v_125 = stack[-1];
    if (!car_legal(v_125)) v_126 = cdrerror(v_125); else
    v_126 = cdr(v_125);
    v_125 = qvalue(basic_elt(env, 1)); // frlis!*
    v_125 = Lmemq(nil, v_126, v_125);
    if (v_125 == nil) goto v_27;
    v_125 = stack[-2];
    if (!car_legal(v_125)) v_126 = cdrerror(v_125); else
    v_126 = cdr(v_125);
    v_125 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_126 == v_125) goto v_38;
    else goto v_39;
v_38:
    v_125 = lisp_true;
    goto v_37;
v_39:
    v_125 = stack[-1];
    if (!car_legal(v_125)) v_127 = cdrerror(v_125); else
    v_127 = cdr(v_125);
    v_126 = stack[-3];
    v_125 = stack[-2];
    if (!car_legal(v_125)) v_125 = cdrerror(v_125); else
    v_125 = cdr(v_125);
    {   LispObject fn = basic_elt(env, 4); // powmtch
    v_125 = (*qfn3(fn))(fn, v_127, v_126, v_125);
    }
    env = stack[-4];
    stack[-3] = v_125;
    v_125 = (v_125 == nil ? lisp_true : nil);
    goto v_37;
    v_125 = nil;
v_37:
    if (v_125 == nil) goto v_35;
    v_125 = nil;
    goto v_9;
v_35:
    stack[0] = stack[-3];
    v_125 = stack[-1];
    if (!car_legal(v_125)) v_126 = cdrerror(v_125); else
    v_126 = cdr(v_125);
    v_125 = stack[-2];
    if (!car_legal(v_125)) v_125 = cdrerror(v_125); else
    v_125 = cdr(v_125);
    v_125 = cons(v_126, v_125);
    env = stack[-4];
    {
        LispObject v_132 = stack[0];
        LispObject fn = basic_elt(env, 5); // mapcons
        return (*qfn2(fn))(fn, v_132, v_125);
    }
    goto v_11;
v_27:
    v_125 = stack[0];
    if (v_125 == nil) goto v_65;
    v_125 = stack[-2];
    if (!car_legal(v_125)) v_126 = cdrerror(v_125); else
    v_126 = cdr(v_125);
    v_125 = stack[-1];
    if (!car_legal(v_125)) v_125 = cdrerror(v_125); else
    v_125 = cdr(v_125);
    if (equal(v_126, v_125)) goto v_65;
    goto v_63;
v_65:
    v_125 = stack[-1];
    if (!car_legal(v_125)) v_125 = cdrerror(v_125); else
    v_125 = cdr(v_125);
    if (is_number(v_125)) goto v_77;
    v_125 = lisp_true;
    goto v_75;
v_77:
    v_125 = stack[-2];
    if (!car_legal(v_125)) v_125 = cdrerror(v_125); else
    v_125 = cdr(v_125);
    if (is_number(v_125)) goto v_86;
    v_125 = lisp_true;
    goto v_84;
v_86:
    v_125 = qvalue(basic_elt(env, 2)); // !*mcd
    if (v_125 == nil) goto v_95;
    v_125 = stack[-2];
    if (!car_legal(v_125)) v_126 = cdrerror(v_125); else
    v_126 = cdr(v_125);
    v_125 = stack[-1];
    if (!car_legal(v_125)) v_125 = cdrerror(v_125); else
    v_125 = cdr(v_125);
    v_125 = static_cast<LispObject>(lessp2(v_126, v_125));
    v_125 = v_125 ? lisp_true : nil;
    goto v_93;
v_95:
    v_125 = stack[-2];
    if (!car_legal(v_125)) v_126 = cdrerror(v_125); else
    v_126 = cdr(v_125);
    v_125 = stack[-1];
    if (!car_legal(v_125)) v_125 = cdrerror(v_125); else
    v_125 = cdr(v_125);
    v_126 = times2(v_126, v_125);
    env = stack[-4];
    v_125 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_125 = static_cast<LispObject>(lessp2(v_126, v_125));
    v_125 = v_125 ? lisp_true : nil;
    env = stack[-4];
    if (v_125 == nil) goto v_106;
    else goto v_105;
v_106:
    v_125 = stack[-2];
    if (!car_legal(v_125)) v_125 = cdrerror(v_125); else
    v_125 = cdr(v_125);
    stack[0] = Labsval(nil, v_125);
    env = stack[-4];
    v_125 = stack[-1];
    if (!car_legal(v_125)) v_125 = cdrerror(v_125); else
    v_125 = cdr(v_125);
    v_125 = Labsval(nil, v_125);
    env = stack[-4];
    v_125 = static_cast<LispObject>(lessp2(stack[0], v_125));
    v_125 = v_125 ? lisp_true : nil;
v_105:
    goto v_93;
    v_125 = nil;
v_93:
    goto v_84;
    v_125 = nil;
v_84:
    goto v_75;
    v_125 = nil;
v_75:
    if (v_125 == nil) goto v_73;
    else goto v_63;
v_73:
    goto v_64;
v_63:
    v_125 = nil;
    goto v_9;
v_64:
    v_125 = stack[-3];
    goto v_9;
v_11:
    v_125 = nil;
v_9:
    return onevalue(v_125);
}



// Code for get!+row!+nr

static LispObject CC_getLrowLnr(LispObject env,
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
        return Llength(nil, v_8);
    return onevalue(v_8);
}



// Code for rl_negateat

static LispObject CC_rl_negateat(LispObject env,
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
    stack[0] = qvalue(basic_elt(env, 1)); // rl_negateat!*
    v_8 = ncons(v_8);
    env = stack[-1];
    {
        LispObject v_10 = stack[0];
        LispObject fn = basic_elt(env, 2); // apply
        return (*qfn2(fn))(fn, v_10, v_8);
    }
}



// Code for kernels1

static LispObject CC_kernels1(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_49, v_50, v_51, v_52;
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
    v_51 = v_3;
    v_49 = v_2;
// end of prologue
v_1:
    v_50 = v_49;
    if (!consp(v_50)) goto v_11;
    else goto v_12;
v_11:
    v_50 = lisp_true;
    goto v_10;
v_12:
    v_50 = v_49;
    if (!car_legal(v_50)) v_50 = carerror(v_50); else
    v_50 = car(v_50);
    v_50 = (consp(v_50) ? nil : lisp_true);
    goto v_10;
    v_50 = nil;
v_10:
    if (v_50 == nil) goto v_8;
    v_49 = v_51;
    goto v_6;
v_8:
    v_50 = v_49;
    if (!car_legal(v_50)) v_50 = carerror(v_50); else
    v_50 = car(v_50);
    if (!car_legal(v_50)) v_50 = carerror(v_50); else
    v_50 = car(v_50);
    if (!car_legal(v_50)) v_50 = carerror(v_50); else
    v_50 = car(v_50);
    v_52 = v_50;
    v_50 = v_49;
    if (!car_legal(v_50)) v_50 = carerror(v_50); else
    v_50 = car(v_50);
    if (!car_legal(v_50)) stack[-2] = cdrerror(v_50); else
    stack[-2] = cdr(v_50);
    if (!car_legal(v_49)) stack[-1] = cdrerror(v_49); else
    stack[-1] = cdr(v_49);
    v_50 = v_52;
    v_49 = v_51;
    v_49 = Lmemq(nil, v_50, v_49);
    if (v_49 == nil) goto v_38;
    v_49 = v_51;
    goto v_36;
v_38:
    stack[0] = v_51;
    v_49 = v_52;
    v_49 = ncons(v_49);
    env = stack[-3];
    v_49 = Lappend_2(nil, stack[0], v_49);
    env = stack[-3];
    goto v_36;
    v_49 = nil;
v_36:
    {   LispObject fn = basic_elt(env, 0); // kernels1
    v_50 = (*qfn2(fn))(fn, stack[-1], v_49);
    }
    env = stack[-3];
    v_49 = stack[-2];
    v_51 = v_50;
    goto v_1;
    v_49 = nil;
v_6:
    return onevalue(v_49);
}



// Code for lpri

static LispObject CC_lpri(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_20;
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
v_6:
    v_20 = stack[0];
    if (v_20 == nil) goto v_9;
    else goto v_10;
v_9:
    v_20 = nil;
    goto v_5;
v_10:
    v_20 = stack[0];
    if (!car_legal(v_20)) v_20 = carerror(v_20); else
    v_20 = car(v_20);
    v_20 = Lprinc(nil, v_20);
    env = stack[-1];
    v_20 = basic_elt(env, 1); // " "
    v_20 = Lprinc(nil, v_20);
    env = stack[-1];
    v_20 = stack[0];
    if (!car_legal(v_20)) v_20 = cdrerror(v_20); else
    v_20 = cdr(v_20);
    stack[0] = v_20;
    goto v_6;
v_5:
    return onevalue(v_20);
}



// Code for addd

static LispObject CC_addd(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_44 = nil;
v_8:
    v_43 = stack[0];
    if (v_43 == nil) goto v_11;
    else goto v_12;
v_11:
    v_43 = stack[-1];
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn2(fn))(fn, v_44, v_43);
    }
v_12:
    v_43 = stack[0];
    if (!consp(v_43)) goto v_21;
    else goto v_22;
v_21:
    v_43 = lisp_true;
    goto v_20;
v_22:
    v_43 = stack[0];
    if (!car_legal(v_43)) v_43 = carerror(v_43); else
    v_43 = car(v_43);
    v_43 = (consp(v_43) ? nil : lisp_true);
    goto v_20;
    v_43 = nil;
v_20:
    if (v_43 == nil) goto v_18;
    stack[-2] = v_44;
    v_44 = stack[-1];
    v_43 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // adddm
    v_43 = (*qfn2(fn))(fn, v_44, v_43);
    }
    env = stack[-3];
    {
        LispObject v_48 = stack[-2];
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn2(fn))(fn, v_48, v_43);
    }
v_18:
    v_43 = stack[0];
    if (!car_legal(v_43)) v_43 = carerror(v_43); else
    v_43 = car(v_43);
    v_43 = cons(v_43, v_44);
    env = stack[-3];
    v_44 = v_43;
    v_43 = stack[0];
    if (!car_legal(v_43)) v_43 = cdrerror(v_43); else
    v_43 = cdr(v_43);
    stack[0] = v_43;
    goto v_8;
    v_43 = nil;
    return onevalue(v_43);
}



// Code for compress!*

static LispObject CC_compressH(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_79, v_80, v_81, v_82;
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
    v_79 = v_2;
// end of prologue
    v_82 = nil;
    v_80 = v_79;
    if (!car_legal(v_80)) v_80 = carerror(v_80); else
    v_80 = car(v_80);
    v_80 = Ldigitp(nil, v_80);
    env = stack[-1];
    if (v_80 == nil) goto v_10;
        return Lcompress(nil, v_79);
v_10:
    stack[0] = v_79;
v_19:
    v_79 = stack[0];
    if (v_79 == nil) goto v_23;
    else goto v_24;
v_23:
    goto v_18;
v_24:
    v_79 = stack[0];
    if (!car_legal(v_79)) v_79 = carerror(v_79); else
    v_79 = car(v_79);
    v_81 = v_79;
    v_80 = v_81;
    v_79 = basic_elt(env, 1); // !/
    if (v_80 == v_79) goto v_36;
    else goto v_37;
v_36:
    v_79 = lisp_true;
    goto v_35;
v_37:
    v_80 = v_81;
    v_79 = basic_elt(env, 2); // !-
    if (v_80 == v_79) goto v_45;
    else goto v_46;
v_45:
    v_79 = lisp_true;
    goto v_44;
v_46:
    v_80 = v_81;
    v_79 = basic_elt(env, 3); // !;
    if (v_80 == v_79) goto v_54;
    else goto v_55;
v_54:
    v_79 = lisp_true;
    goto v_53;
v_55:
    v_80 = v_81;
    v_79 = basic_elt(env, 4); // !.
    v_79 = (v_80 == v_79 ? lisp_true : nil);
    goto v_53;
    v_79 = nil;
v_53:
    goto v_44;
    v_79 = nil;
v_44:
    goto v_35;
    v_79 = nil;
v_35:
    if (v_79 == nil) goto v_33;
    v_80 = v_81;
    v_79 = basic_elt(env, 5); // !!
    v_81 = v_82;
    v_79 = list2star(v_80, v_79, v_81);
    env = stack[-1];
    v_82 = v_79;
    goto v_31;
v_33:
    v_79 = v_81;
    v_80 = v_82;
    v_79 = cons(v_79, v_80);
    env = stack[-1];
    v_82 = v_79;
    goto v_31;
v_31:
    v_79 = stack[0];
    if (!car_legal(v_79)) v_79 = cdrerror(v_79); else
    v_79 = cdr(v_79);
    stack[0] = v_79;
    goto v_19;
v_18:
    v_79 = v_82;
    v_79 = Lnreverse(nil, v_79);
    env = stack[-1];
    v_79 = Lcompress(nil, v_79);
        return Lintern(nil, v_79);
    return onevalue(v_79);
}



// Code for noncomfp1

static LispObject CC_noncomfp1(LispObject env,
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
    {   LispObject fn = basic_elt(env, 0); // noncomfp1
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



// Code for ldepends

static LispObject CC_ldepends(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
v_1:
    v_30 = stack[-1];
    if (v_30 == nil) goto v_7;
    else goto v_8;
v_7:
    v_30 = nil;
    goto v_6;
v_8:
    v_30 = stack[-1];
    if (!consp(v_30)) goto v_11;
    else goto v_12;
v_11:
    v_31 = stack[-1];
    v_30 = stack[0];
    {
        LispObject fn = basic_elt(env, 1); // depends
        return (*qfn2(fn))(fn, v_31, v_30);
    }
v_12:
    v_30 = stack[-1];
    if (!car_legal(v_30)) v_31 = carerror(v_30); else
    v_31 = car(v_30);
    v_30 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // depends
    v_30 = (*qfn2(fn))(fn, v_31, v_30);
    }
    env = stack[-2];
    if (v_30 == nil) goto v_21;
    else goto v_20;
v_21:
    v_30 = stack[-1];
    if (!car_legal(v_30)) v_31 = cdrerror(v_30); else
    v_31 = cdr(v_30);
    v_30 = stack[0];
    stack[-1] = v_31;
    stack[0] = v_30;
    goto v_1;
v_20:
    goto v_6;
    v_30 = nil;
v_6:
    return onevalue(v_30);
}



// Code for numlis

static LispObject CC_numlis(LispObject env,
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
    if (is_number(v_25)) goto v_15;
    v_24 = nil;
    goto v_13;
v_15:
    if (!car_legal(v_24)) v_24 = cdrerror(v_24); else
    v_24 = cdr(v_24);
    goto v_1;
    v_24 = nil;
v_13:
    goto v_5;
    v_24 = nil;
v_5:
    return onevalue(v_24);
}



// Code for !:minusp

static LispObject CC_Tminusp(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_18, v_19;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_18 = v_2;
// end of prologue
    v_19 = v_18;
    if (!consp(v_19)) goto v_6;
    else goto v_7;
v_6:
        return Lminusp(nil, v_18);
v_7:
    v_19 = v_18;
    if (!car_legal(v_19)) v_19 = carerror(v_19); else
    v_19 = car(v_19);
    if (!symbolp(v_19)) v_19 = nil;
    else { v_19 = qfastgets(v_19);
           if (v_19 != nil) { v_19 = elt(v_19, 30); // minusp
#ifdef RECORD_GET
             if (v_19 != SPID_NOPROP)
                record_get(elt(fastget_names, 30), 1);
             else record_get(elt(fastget_names, 30), 0),
                v_19 = nil; }
           else record_get(elt(fastget_names, 30), 0); }
#else
             if (v_19 == SPID_NOPROP) v_19 = nil; }}
#endif
        return Lapply1(nil, v_19, v_18);
    v_18 = nil;
    return onevalue(v_18);
}



// Code for evzero!?

static LispObject CC_evzeroW(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_25, v_26, v_27;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_26 = v_2;
// end of prologue
v_1:
    v_25 = v_26;
    if (v_25 == nil) goto v_6;
    else goto v_7;
v_6:
    v_25 = lisp_true;
    goto v_5;
v_7:
    v_25 = v_26;
    if (!car_legal(v_25)) v_27 = carerror(v_25); else
    v_27 = car(v_25);
    v_25 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_27 == v_25) goto v_14;
    else goto v_15;
v_14:
    v_25 = v_26;
    if (!car_legal(v_25)) v_25 = cdrerror(v_25); else
    v_25 = cdr(v_25);
    v_26 = v_25;
    goto v_1;
v_15:
    v_25 = nil;
    goto v_13;
    v_25 = nil;
v_13:
    goto v_5;
    v_25 = nil;
v_5:
    return onevalue(v_25);
}



// Code for factorordp

static LispObject CC_factorordp(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_17, v_18, v_19, v_20;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_19 = v_3;
    v_20 = v_2;
// end of prologue
    v_18 = v_20;
    v_17 = v_19;
    if (v_18 == v_17) goto v_7;
    else goto v_8;
v_7:
    v_17 = nil;
    goto v_6;
v_8:
    v_17 = v_20;
    v_18 = v_19;
    {
        LispObject fn = basic_elt(env, 1); // worderp
        return (*qfn2(fn))(fn, v_17, v_18);
    }
    v_17 = nil;
v_6:
    return onevalue(v_17);
}



// Code for degr

static LispObject CC_degr(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_41, v_42, v_43;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_41 = v_3;
    v_42 = v_2;
// end of prologue
    v_43 = v_42;
    if (!consp(v_43)) goto v_15;
    else goto v_16;
v_15:
    v_43 = lisp_true;
    goto v_14;
v_16:
    v_43 = v_42;
    if (!car_legal(v_43)) v_43 = carerror(v_43); else
    v_43 = car(v_43);
    v_43 = (consp(v_43) ? nil : lisp_true);
    goto v_14;
    v_43 = nil;
v_14:
    if (v_43 == nil) goto v_12;
    v_41 = lisp_true;
    goto v_10;
v_12:
    v_43 = v_42;
    if (!car_legal(v_43)) v_43 = carerror(v_43); else
    v_43 = car(v_43);
    if (!car_legal(v_43)) v_43 = carerror(v_43); else
    v_43 = car(v_43);
    if (!car_legal(v_43)) v_43 = carerror(v_43); else
    v_43 = car(v_43);
    v_41 = (v_43 == v_41 ? lisp_true : nil);
    v_41 = (v_41 == nil ? lisp_true : nil);
    goto v_10;
    v_41 = nil;
v_10:
    if (v_41 == nil) goto v_8;
    v_41 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_6;
v_8:
    v_41 = v_42;
    if (!car_legal(v_41)) v_41 = carerror(v_41); else
    v_41 = car(v_41);
    if (!car_legal(v_41)) v_41 = carerror(v_41); else
    v_41 = car(v_41);
    if (!car_legal(v_41)) v_41 = cdrerror(v_41); else
    v_41 = cdr(v_41);
    goto v_6;
    v_41 = nil;
v_6:
    return onevalue(v_41);
}



// Code for mkround

static LispObject CC_mkround(LispObject env,
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
    if (!consp(v_15)) goto v_6;
    else goto v_7;
v_6:
    v_15 = basic_elt(env, 1); // !:rd!:
    return cons(v_15, v_16);
v_7:
    v_15 = v_16;
    goto v_5;
    v_15 = nil;
v_5:
    return onevalue(v_15);
}



// Code for collectindices

static LispObject CC_collectindices(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // collectindices_reversed
    v_8 = (*qfn2(fn))(fn, v_9, v_8);
    }
        return Lnreverse(nil, v_8);
}



// Code for union_edge

static LispObject CC_union_edge(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_19 = stack[-1];
    v_18 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // memq_edgelist
    v_18 = (*qfn2(fn))(fn, v_19, v_18);
    }
    if (v_18 == nil) goto v_8;
    v_18 = stack[0];
    goto v_6;
v_8:
    v_19 = stack[-1];
    v_18 = stack[0];
    return cons(v_19, v_18);
    v_18 = nil;
v_6:
    return onevalue(v_18);
}



// Code for ring_ecart

static LispObject CC_ring_ecart(LispObject env,
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
    v_7 = static_cast<LispObject>(80)+TAG_FIXNUM; // 5
    {
        LispObject fn = basic_elt(env, 1); // nth
        return (*qfn2(fn))(fn, v_8, v_7);
    }
}



// Code for mtp

static LispObject CC_mtp(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_38, v_39, v_40;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_39 = v_2;
// end of prologue
v_1:
    v_38 = v_39;
    if (v_38 == nil) goto v_6;
    else goto v_7;
v_6:
    v_38 = lisp_true;
    goto v_5;
v_7:
    v_38 = v_39;
    if (!car_legal(v_38)) v_40 = carerror(v_38); else
    v_40 = car(v_38);
    v_38 = qvalue(basic_elt(env, 1)); // frlis!*
    v_38 = Lmemq(nil, v_40, v_38);
    if (v_38 == nil) goto v_14;
    else goto v_15;
v_14:
    v_38 = nil;
    goto v_13;
v_15:
    v_38 = v_39;
    if (!car_legal(v_38)) v_40 = carerror(v_38); else
    v_40 = car(v_38);
    v_38 = v_39;
    if (!car_legal(v_38)) v_38 = cdrerror(v_38); else
    v_38 = cdr(v_38);
    v_38 = Lmember(nil, v_40, v_38);
    if (v_38 == nil) goto v_25;
    else goto v_26;
v_25:
    v_38 = v_39;
    if (!car_legal(v_38)) v_38 = cdrerror(v_38); else
    v_38 = cdr(v_38);
    v_39 = v_38;
    goto v_1;
v_26:
    v_38 = nil;
    goto v_24;
    v_38 = nil;
v_24:
    goto v_13;
    v_38 = nil;
v_13:
    goto v_5;
    v_38 = nil;
v_5:
    return onevalue(v_38);
}



// Code for reduce_pv

static LispObject CC_reduce_pv(LispObject env,
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
    v_9 = lisp_true;
    {
        LispObject fn = basic_elt(env, 1); // reduce_pv0
        return (*qfn3(fn))(fn, v_11, v_10, v_9);
    }
}



// Code for rnequiv

static LispObject CC_rnequiv(LispObject env,
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
    v_18 = v_2;
// end of prologue
    v_17 = v_18;
    if (!car_legal(v_17)) v_17 = cdrerror(v_17); else
    v_17 = cdr(v_17);
    v_18 = v_17;
    if (!car_legal(v_17)) v_19 = cdrerror(v_17); else
    v_19 = cdr(v_17);
    v_17 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_19 == v_17) goto v_6;
    else goto v_7;
v_6:
    v_17 = v_18;
    if (!car_legal(v_17)) v_17 = carerror(v_17); else
    v_17 = car(v_17);
    goto v_5;
v_7:
    v_17 = nil;
    goto v_5;
    v_17 = nil;
v_5:
    return onevalue(v_17);
}



// Code for general!-modular!-times

static LispObject CC_generalKmodularKtimes(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_24 = v_3;
    v_25 = v_2;
// end of prologue
    v_25 = times2(v_25, v_24);
    env = stack[-1];
    v_24 = qvalue(basic_elt(env, 1)); // current!-modulus
    v_24 = Cremainder(v_25, v_24);
    env = stack[-1];
    stack[0] = v_24;
    v_25 = stack[0];
    v_24 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_24 = static_cast<LispObject>(lessp2(v_25, v_24));
    v_24 = v_24 ? lisp_true : nil;
    env = stack[-1];
    if (v_24 == nil) goto v_16;
    v_25 = stack[0];
    v_24 = qvalue(basic_elt(env, 1)); // current!-modulus
    v_24 = plus2(v_25, v_24);
    stack[0] = v_24;
    goto v_14;
v_16:
v_14:
    v_24 = stack[0];
    return onevalue(v_24);
}



// Code for multd

static LispObject CC_multd(LispObject env,
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    stack[-1] = v_3;
    stack[-2] = v_2;
// end of prologue
    stack[-3] = nil;
v_8:
    v_55 = stack[-1];
    if (v_55 == nil) goto v_11;
    else goto v_12;
v_11:
    v_55 = stack[-3];
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn1(fn))(fn, v_55);
    }
v_12:
    v_56 = stack[-1];
    v_55 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_56 == v_55) goto v_16;
    else goto v_17;
v_16:
    v_56 = stack[-3];
    v_55 = stack[-2];
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn2(fn))(fn, v_56, v_55);
    }
v_17:
    v_55 = stack[-1];
    if (!consp(v_55)) goto v_27;
    else goto v_28;
v_27:
    v_55 = lisp_true;
    goto v_26;
v_28:
    v_55 = stack[-1];
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    v_55 = (consp(v_55) ? nil : lisp_true);
    goto v_26;
    v_55 = nil;
v_26:
    if (v_55 == nil) goto v_24;
    stack[0] = stack[-3];
    v_56 = stack[-2];
    v_55 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // multdm
    v_55 = (*qfn2(fn))(fn, v_56, v_55);
    }
    env = stack[-4];
    {
        LispObject v_61 = stack[0];
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn2(fn))(fn, v_61, v_55);
    }
v_24:
    v_55 = stack[-1];
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    if (!car_legal(v_55)) stack[0] = carerror(v_55); else
    stack[0] = car(v_55);
    v_56 = stack[-2];
    v_55 = stack[-1];
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    if (!car_legal(v_55)) v_55 = cdrerror(v_55); else
    v_55 = cdr(v_55);
    {   LispObject fn = basic_elt(env, 0); // multd
    v_56 = (*qfn2(fn))(fn, v_56, v_55);
    }
    env = stack[-4];
    v_55 = stack[-3];
    v_55 = acons(stack[0], v_56, v_55);
    env = stack[-4];
    stack[-3] = v_55;
    v_55 = stack[-1];
    if (!car_legal(v_55)) v_55 = cdrerror(v_55); else
    v_55 = cdr(v_55);
    stack[-1] = v_55;
    goto v_8;
    v_55 = nil;
    return onevalue(v_55);
}



// Code for lalr_lr0_move_dot

static LispObject CC_lalr_lr0_move_dot(LispObject env,
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
    stack[-2] = nil;
v_10:
    v_60 = stack[-1];
    if (!car_legal(v_60)) v_61 = carerror(v_60); else
    v_61 = car(v_60);
    v_60 = basic_elt(env, 1); // !.
    if (v_61 == v_60) goto v_13;
    else goto v_14;
v_13:
    goto v_9;
v_14:
    v_60 = stack[-1];
    if (!car_legal(v_60)) v_61 = carerror(v_60); else
    v_61 = car(v_60);
    v_60 = stack[-2];
    v_60 = cons(v_61, v_60);
    env = stack[-3];
    stack[-2] = v_60;
    v_60 = stack[-1];
    if (!car_legal(v_60)) v_60 = cdrerror(v_60); else
    v_60 = cdr(v_60);
    stack[-1] = v_60;
    goto v_10;
v_9:
    v_60 = stack[-1];
    if (!car_legal(v_60)) v_60 = cdrerror(v_60); else
    v_60 = cdr(v_60);
    stack[-1] = v_60;
    v_60 = stack[-1];
    if (v_60 == nil) goto v_29;
    v_60 = stack[-1];
    if (!car_legal(v_60)) v_61 = carerror(v_60); else
    v_61 = car(v_60);
    v_60 = stack[0];
    if (equal(v_61, v_60)) goto v_33;
    else goto v_29;
v_33:
    goto v_30;
v_29:
    v_60 = nil;
    goto v_7;
v_30:
    v_60 = stack[-1];
    if (!car_legal(v_60)) v_62 = carerror(v_60); else
    v_62 = car(v_60);
    v_61 = basic_elt(env, 1); // !.
    v_60 = stack[-1];
    if (!car_legal(v_60)) v_60 = cdrerror(v_60); else
    v_60 = cdr(v_60);
    v_60 = list2star(v_62, v_61, v_60);
    env = stack[-3];
    stack[-1] = v_60;
v_46:
    v_60 = stack[-2];
    if (v_60 == nil) goto v_49;
    else goto v_50;
v_49:
    goto v_45;
v_50:
    v_60 = stack[-2];
    if (!car_legal(v_60)) v_61 = carerror(v_60); else
    v_61 = car(v_60);
    v_60 = stack[-1];
    v_60 = cons(v_61, v_60);
    env = stack[-3];
    stack[-1] = v_60;
    v_60 = stack[-2];
    if (!car_legal(v_60)) v_60 = cdrerror(v_60); else
    v_60 = cdr(v_60);
    stack[-2] = v_60;
    goto v_46;
v_45:
    v_60 = stack[-1];
v_7:
    return onevalue(v_60);
}



// Code for aex_ctx

static LispObject CC_aex_ctx(LispObject env,
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
    v_7 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    {
        LispObject fn = basic_elt(env, 1); // nth
        return (*qfn2(fn))(fn, v_8, v_7);
    }
}



// Code for prin2x

static LispObject CC_prin2x(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_7, v_8;
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
    v_8 = v_7;
    v_7 = qvalue(basic_elt(env, 1)); // outl!*
    v_7 = cons(v_8, v_7);
    env = stack[0];
    setvalue(basic_elt(env, 1), v_7); // outl!*
    return onevalue(v_7);
}



// Code for minusf

static LispObject CC_minusf(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_46, v_47;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_46 = v_2;
// end of prologue
v_6:
    v_47 = v_46;
    if (v_47 == nil) goto v_9;
    else goto v_10;
v_9:
    v_46 = nil;
    goto v_5;
v_10:
    v_47 = v_46;
    if (!consp(v_47)) goto v_17;
    else goto v_18;
v_17:
    v_47 = lisp_true;
    goto v_16;
v_18:
    v_47 = v_46;
    if (!car_legal(v_47)) v_47 = carerror(v_47); else
    v_47 = car(v_47);
    v_47 = (consp(v_47) ? nil : lisp_true);
    goto v_16;
    v_47 = nil;
v_16:
    if (v_47 == nil) goto v_14;
    v_47 = v_46;
    if (!consp(v_47)) goto v_28;
    else goto v_29;
v_28:
    v_47 = v_46;
    v_46 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
        return Llessp_2(nil, v_47, v_46);
v_29:
    v_47 = v_46;
    if (!car_legal(v_47)) v_47 = carerror(v_47); else
    v_47 = car(v_47);
    if (!symbolp(v_47)) v_47 = nil;
    else { v_47 = qfastgets(v_47);
           if (v_47 != nil) { v_47 = elt(v_47, 30); // minusp
#ifdef RECORD_GET
             if (v_47 != SPID_NOPROP)
                record_get(elt(fastget_names, 30), 1);
             else record_get(elt(fastget_names, 30), 0),
                v_47 = nil; }
           else record_get(elt(fastget_names, 30), 0); }
#else
             if (v_47 == SPID_NOPROP) v_47 = nil; }}
#endif
        return Lapply1(nil, v_47, v_46);
    goto v_8;
v_14:
    if (!car_legal(v_46)) v_46 = carerror(v_46); else
    v_46 = car(v_46);
    if (!car_legal(v_46)) v_46 = cdrerror(v_46); else
    v_46 = cdr(v_46);
    goto v_6;
v_8:
    v_46 = nil;
v_5:
    return onevalue(v_46);
}



// Code for reorder

static LispObject CC_reorder(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_51, v_52;
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
v_8:
    v_51 = stack[-1];
    if (!consp(v_51)) goto v_17;
    else goto v_18;
v_17:
    v_51 = lisp_true;
    goto v_16;
v_18:
    v_51 = stack[-1];
    if (!car_legal(v_51)) v_51 = carerror(v_51); else
    v_51 = car(v_51);
    v_51 = (consp(v_51) ? nil : lisp_true);
    goto v_16;
    v_51 = nil;
v_16:
    if (v_51 == nil) goto v_14;
    goto v_9;
v_14:
    v_51 = stack[-1];
    if (!car_legal(v_51)) v_51 = carerror(v_51); else
    v_51 = car(v_51);
    if (!car_legal(v_51)) stack[0] = carerror(v_51); else
    stack[0] = car(v_51);
    v_51 = stack[-1];
    if (!car_legal(v_51)) v_51 = carerror(v_51); else
    v_51 = car(v_51);
    if (!car_legal(v_51)) v_51 = cdrerror(v_51); else
    v_51 = cdr(v_51);
    {   LispObject fn = basic_elt(env, 0); // reorder
    v_51 = (*qfn1(fn))(fn, v_51);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 1); // rmultpf
    v_52 = (*qfn2(fn))(fn, stack[0], v_51);
    }
    env = stack[-3];
    v_51 = stack[-2];
    v_51 = cons(v_52, v_51);
    env = stack[-3];
    stack[-2] = v_51;
    v_51 = stack[-1];
    if (!car_legal(v_51)) v_51 = cdrerror(v_51); else
    v_51 = cdr(v_51);
    stack[-1] = v_51;
    goto v_8;
v_9:
    v_51 = stack[-1];
    v_52 = v_51;
v_10:
    v_51 = stack[-2];
    if (v_51 == nil) goto v_41;
    else goto v_42;
v_41:
    v_51 = v_52;
    goto v_7;
v_42:
    v_51 = stack[-2];
    v_51 = car(v_51);
    {   LispObject fn = basic_elt(env, 2); // raddf
    v_51 = (*qfn2(fn))(fn, v_51, v_52);
    }
    env = stack[-3];
    v_52 = v_51;
    v_51 = stack[-2];
    v_51 = cdr(v_51);
    stack[-2] = v_51;
    goto v_10;
v_7:
    return onevalue(v_51);
}



// Code for aconc!*

static LispObject CC_aconcH(LispObject env,
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



setup_type const u01_setup[] =
{
    {"mchkopt",                 G0W2,     G1W2,     CC_mchkopt,G3W2,    G4W2},
    {"smember",                 G0W2,     G1W2,     CC_smember,G3W2,    G4W2},
    {"*n2f",                    G0W1,     CC_Hn2f,  G2W1,     G3W1,     G4W1},
    {"setdiff",                 G0W2,     G1W2,     CC_setdiff,G3W2,    G4W2},
    {"nth",                     G0W2,     G1W2,     CC_nth,   G3W2,     G4W2},
    {"terminalp",               CC_terminalp,G1W0,  G2W0,     G3W0,     G4W0},
    {"multf",                   G0W2,     G1W2,     CC_multf, G3W2,     G4W2},
    {"monomgetvariabledegree",  G0W2,     G1W2,     CC_monomgetvariabledegree,G3W2,G4W2},
    {"quotelist",               G0W1,     CC_quotelist,G2W1,  G3W1,     G4W1},
    {"num-exponents",           G0W1,     CC_numKexponents,G2W1,G3W1,   G4W1},
    {"simpcar",                 G0W1,     CC_simpcar,G2W1,    G3W1,     G4W1},
    {"wuconstantp",             G0W1,     CC_wuconstantp,G2W1,G3W1,     G4W1},
    {"mkcopy",                  G0W1,     CC_mkcopy,G2W1,     G3W1,     G4W1},
    {"revpr",                   G0W1,     CC_revpr, G2W1,     G3W1,     G4W1},
    {"talp_getl",               CC_talp_getl,G1W0,  G2W0,     G3W0,     G4W0},
    {"kernels",                 G0W1,     CC_kernels,G2W1,    G3W1,     G4W1},
    {"qqe_rqopp",               G0W1,     CC_qqe_rqopp,G2W1,  G3W1,     G4W1},
    {"powers",                  G0W1,     CC_powers,G2W1,     G3W1,     G4W1},
    {"lto_hashid",              G0W1,     CC_lto_hashid,G2W1, G3W1,     G4W1},
    {"noncomfp",                G0W1,     CC_noncomfp,G2W1,   G3W1,     G4W1},
    {"ioto_prtb",               G0W2,     G1W2,     CC_ioto_prtb,G3W2,  G4W2},
    {"delall",                  G0W2,     G1W2,     CC_delall,G3W2,     G4W2},
    {"ordop",                   G0W2,     G1W2,     CC_ordop, G3W2,     G4W2},
    {"ps:getv",                 G0W2,     G1W2,     CC_psTgetv,G3W2,    G4W2},
    {"prepf",                   G0W1,     CC_prepf, G2W1,     G3W1,     G4W1},
    {"c:ordxp",                 G0W2,     G1W2,     CC_cTordxp,G3W2,    G4W2},
    {"zero2nil",                G0W1,     CC_zero2nil,G2W1,   G3W1,     G4W1},
    {"mval",                    G0W1,     CC_mval,  G2W1,     G3W1,     G4W1},
    {"reval",                   G0W1,     CC_reval, G2W1,     G3W1,     G4W1},
    {"evcomp",                  G0W2,     G1W2,     CC_evcomp,G3W2,     G4W2},
    {"evmatrixcomp2",           G0W3,     G1W3,     G2W3,     CC_evmatrixcomp2,G4W3},
    {"xval",                    G0W1,     CC_xval,  G2W1,     G3W1,     G4W1},
    {"times:",                  G0W2,     G1W2,     CC_timesT,G3W2,     G4W2},
    {"mkvar",                   G0W2,     G1W2,     CC_mkvar, G3W2,     G4W2},
    {"physopp",                 G0W1,     CC_physopp,G2W1,    G3W1,     G4W1},
    {"memq_edgelist",           G0W2,     G1W2,     CC_memq_edgelist,G3W2,G4W2},
    {"mo_comp",                 G0W1,     CC_mo_comp,G2W1,    G3W1,     G4W1},
    {"c_zero",                  CC_c_zero,G1W0,     G2W0,     G3W0,     G4W0},
    {"sieve_pv0",               G0W3,     G1W3,     G2W3,     CC_sieve_pv0,G4W3},
    {"listp",                   G0W1,     CC_listp, G2W1,     G3W1,     G4W1},
    {"modzerop:",               G0W1,     CC_modzeropT,G2W1,  G3W1,     G4W1},
    {"getrtypeor",              G0W1,     CC_getrtypeor,G2W1, G3W1,     G4W1},
    {"lalr_productions",        G0W1,     CC_lalr_productions,G2W1,G3W1,G4W1},
    {"random_new_seed",         G0W1,     CC_random_new_seed,G2W1,G3W1, G4W1},
    {"monomcompare",            G0W2,     G1W2,     CC_monomcompare,G3W2,G4W2},
    {"makelist",                G0W1,     CC_makelist,G2W1,   G3W1,     G4W1},
    {"quotf",                   G0W2,     G1W2,     CC_quotf, G3W2,     G4W2},
    {"mchk*",                   G0W2,     G1W2,     CC_mchkH, G3W2,     G4W2},
    {"get+mat+entry",           G0W3,     G1W3,     G2W3,     CC_getLmatLentry,G4W3},
    {"talp_getextl",            CC_talp_getextl,G1W0,G2W0,    G3W0,     G4W0},
    {"ibalp_clmember",          G0W2,     G1W2,     CC_ibalp_clmember,G3W2,G4W2},
    {"aex_ex",                  G0W1,     CC_aex_ex,G2W1,     G3W1,     G4W1},
    {"argsofopr",               G0W1,     CC_argsofopr,G2W1,  G3W1,     G4W1},
    {"find2",                   G0W2,     G1W2,     CC_find2, G3W2,     G4W2},
    {"noncomp",                 G0W1,     CC_noncomp,G2W1,    G3W1,     G4W1},
    {"ps:order",                G0W1,     CC_psTorder,G2W1,   G3W1,     G4W1},
    {"prepf1a",                 G0W2,     G1W2,     CC_prepf1a,G3W2,    G4W2},
    {"pm:free",                 G0W1,     CC_pmTfree,G2W1,    G3W1,     G4W1},
    {"vbcsize",                 G0W2,     G1W2,     CC_vbcsize,G3W2,    G4W2},
    {"pnth",                    G0W2,     G1W2,     CC_pnth,  G3W2,     G4W2},
    {"wedgefax",                G0W1,     CC_wedgefax,G2W1,   G3W1,     G4W1},
    {"convprec",                G0W1,     CC_convprec,G2W1,   G3W1,     G4W1},
    {"*physopp",                G0W1,     CC_Hphysopp,G2W1,   G3W1,     G4W1},
    {"wideid2list",             G0W1,     CC_wideid2list,G2W1,G3W1,     G4W1},
    {"termsf",                  G0W1,     CC_termsf,G2W1,     G3W1,     G4W1},
    {"mkspm",                   G0W2,     G1W2,     CC_mkspm, G3W2,     G4W2},
    {"dssoc",                   G0W2,     G1W2,     CC_dssoc, G3W2,     G4W2},
    {"noncomlistp",             G0W1,     CC_noncomlistp,G2W1,G3W1,     G4W1},
    {"rnzerop:",                G0W1,     CC_rnzeropT,G2W1,   G3W1,     G4W1},
    {"mksp",                    G0W2,     G1W2,     CC_mksp,  G3W2,     G4W2},
    {"aeval",                   G0W1,     CC_aeval, G2W1,     G3W1,     G4W1},
    {"lalr_first",              G0W1,     CC_lalr_first,G2W1, G3W1,     G4W1},
    {"addcomment",              G0W1,     CC_addcomment,G2W1, G3W1,     G4W1},
    {"arrayp",                  G0W1,     CC_arrayp,G2W1,     G3W1,     G4W1},
    {"cl_cflip",                G0W2,     G1W2,     CC_cl_cflip,G3W2,   G4W2},
    {"subs3f",                  G0W1,     CC_subs3f,G2W1,     G3W1,     G4W1},
    {"kernlp",                  G0W1,     CC_kernlp,G2W1,     G3W1,     G4W1},
    {"talp_invp",               G0W1,     CC_talp_invp,G2W1,  G3W1,     G4W1},
    {"qqe_rbopp",               G0W1,     CC_qqe_rbopp,G2W1,  G3W1,     G4W1},
    {"sub2chk",                 G0W1,     CC_sub2chk,G2W1,    G3W1,     G4W1},
    {"butes",                   G0W1,     CC_butes, G2W1,     G3W1,     G4W1},
    {"ps:last-term",            G0W1,     CC_psTlastKterm,G2W1,G3W1,    G4W1},
    {"exchk",                   G0W1,     CC_exchk, G2W1,     G3W1,     G4W1},
    {"expchk",                  G0W1,     CC_expchk,G2W1,     G3W1,     G4W1},
    {"dm-abs",                  G0W1,     CC_dmKabs,G2W1,     G3W1,     G4W1},
    {"binding",                 G0W1,     CC_binding,G2W1,    G3W1,     G4W1},
    {"evlexcomp",               G0W2,     G1W2,     CC_evlexcomp,G3W2,  G4W2},
    {"sc_getmat",               G0W3,     G1W3,     G2W3,     CC_sc_getmat,G4W3},
    {"getrtypecar",             G0W1,     CC_getrtypecar,G2W1,G3W1,     G4W1},
    {"isanindex",               G0W1,     CC_isanindex,G2W1,  G3W1,     G4W1},
    {"poly-multf",              G0W2,     G1W2,     CC_polyKmultf,G3W2, G4W2},
    {"mo_divides?",             G0W2,     G1W2,     CC_mo_dividesW,G3W2,G4W2},
    {"dlesslex",                G0W2,     G1W2,     CC_dlesslex,G3W2,   G4W2},
    {"hasonevector",            G0W1,     CC_hasonevector,G2W1,G3W1,    G4W1},
    {"reduce_pv0",              G0W3,     G1W3,     G2W3,     CC_reduce_pv0,G4W3},
    {"modonep:",                G0W1,     CC_modonepT,G2W1,   G3W1,     G4W1},
    {"remainder-in-vector",     G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_remainderKinKvector},
    {"smemql",                  G0W2,     G1W2,     CC_smemql,G3W2,     G4W2},
    {"lalr_add_lookahead",      G0W2,     G1W2,     CC_lalr_add_lookahead,G3W2,G4W2},
    {"setkorder",               G0W1,     CC_setkorder,G2W1,  G3W1,     G4W1},
    {"mtchp1",                  G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_mtchp1},
    {"get+row+nr",              G0W1,     CC_getLrowLnr,G2W1, G3W1,     G4W1},
    {"rl_negateat",             G0W1,     CC_rl_negateat,G2W1,G3W1,     G4W1},
    {"kernels1",                G0W2,     G1W2,     CC_kernels1,G3W2,   G4W2},
    {"lpri",                    G0W1,     CC_lpri,  G2W1,     G3W1,     G4W1},
    {"addd",                    G0W2,     G1W2,     CC_addd,  G3W2,     G4W2},
    {"compress*",               G0W1,     CC_compressH,G2W1,  G3W1,     G4W1},
    {"noncomfp1",               G0W1,     CC_noncomfp1,G2W1,  G3W1,     G4W1},
    {"ldepends",                G0W2,     G1W2,     CC_ldepends,G3W2,   G4W2},
    {"numlis",                  G0W1,     CC_numlis,G2W1,     G3W1,     G4W1},
    {":minusp",                 G0W1,     CC_Tminusp,G2W1,    G3W1,     G4W1},
    {"evzero?",                 G0W1,     CC_evzeroW,G2W1,    G3W1,     G4W1},
    {"factorordp",              G0W2,     G1W2,     CC_factorordp,G3W2, G4W2},
    {"degr",                    G0W2,     G1W2,     CC_degr,  G3W2,     G4W2},
    {"mkround",                 G0W1,     CC_mkround,G2W1,    G3W1,     G4W1},
    {"collectindices",          G0W1,     CC_collectindices,G2W1,G3W1,  G4W1},
    {"union_edge",              G0W2,     G1W2,     CC_union_edge,G3W2, G4W2},
    {"ring_ecart",              G0W1,     CC_ring_ecart,G2W1, G3W1,     G4W1},
    {"mtp",                     G0W1,     CC_mtp,   G2W1,     G3W1,     G4W1},
    {"reduce_pv",               G0W2,     G1W2,     CC_reduce_pv,G3W2,  G4W2},
    {"rnequiv",                 G0W1,     CC_rnequiv,G2W1,    G3W1,     G4W1},
    {"general-modular-times",   G0W2,     G1W2,     CC_generalKmodularKtimes,G3W2,G4W2},
    {"multd",                   G0W2,     G1W2,     CC_multd, G3W2,     G4W2},
    {"lalr_lr0_move_dot",       G0W2,     G1W2,     CC_lalr_lr0_move_dot,G3W2,G4W2},
    {"aex_ctx",                 G0W1,     CC_aex_ctx,G2W1,    G3W1,     G4W1},
    {"prin2x",                  G0W1,     CC_prin2x,G2W1,     G3W1,     G4W1},
    {"minusf",                  G0W1,     CC_minusf,G2W1,     G3W1,     G4W1},
    {"reorder",                 G0W1,     CC_reorder,G2W1,    G3W1,     G4W1},
    {"aconc*",                  G0W2,     G1W2,     CC_aconcH,G3W2,     G4W2},
    {nullptr, 
        reinterpret_cast<no_args *>(
            reinterpret_cast<uintptr_t>("u01")),
        reinterpret_cast<one_arg *>(
            reinterpret_cast<uintptr_t>("155351 4382164 1390646")),
        nullptr, nullptr, nullptr}
};

// end of generated code
