
// $destdir/u03.c        Machine generated C code

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


// Code for rd!:zerop

static LispObject CC_rdTzerop(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_20, v_21;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_20 = v_2;
// end of prologue
    v_21 = v_20;
    if (!car_legal(v_21)) v_21 = cdrerror(v_21); else
    v_21 = cdr(v_21);
    if (!consp(v_21)) goto v_6;
    else goto v_7;
v_6:
    if (!car_legal(v_20)) v_20 = cdrerror(v_20); else
    v_20 = cdr(v_20);
        return Lzerop(nil, v_20);
v_7:
    if (!car_legal(v_20)) v_20 = cdrerror(v_20); else
    v_20 = cdr(v_20);
    if (!car_legal(v_20)) v_21 = carerror(v_20); else
    v_21 = car(v_20);
    v_20 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_20 = (v_21 == v_20 ? lisp_true : nil);
    goto v_5;
    v_20 = nil;
v_5:
    return onevalue(v_20);
}



// Code for ordpp

static LispObject CC_ordpp(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_49, v_50, v_51, v_52, v_53;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_51 = v_3;
    v_52 = v_2;
// end of prologue
    v_49 = v_52;
    if (!car_legal(v_49)) v_50 = carerror(v_49); else
    v_50 = car(v_49);
    v_49 = v_51;
    if (!car_legal(v_49)) v_49 = carerror(v_49); else
    v_49 = car(v_49);
    if (v_50 == v_49) goto v_11;
    else goto v_12;
v_11:
    v_49 = v_52;
    if (!car_legal(v_49)) v_49 = cdrerror(v_49); else
    v_49 = cdr(v_49);
    v_50 = v_51;
    if (!car_legal(v_50)) v_50 = cdrerror(v_50); else
    v_50 = cdr(v_50);
        return Lgreaterp_2(nil, v_49, v_50);
v_12:
    v_49 = qvalue(basic_elt(env, 1)); // kord!*
    v_53 = v_49;
    v_49 = v_52;
    if (!car_legal(v_49)) v_49 = carerror(v_49); else
    v_49 = car(v_49);
    v_52 = v_49;
    v_49 = v_51;
    if (!car_legal(v_49)) v_49 = carerror(v_49); else
    v_49 = car(v_49);
    v_51 = v_49;
v_8:
    v_49 = v_53;
    if (v_49 == nil) goto v_29;
    else goto v_30;
v_29:
    v_49 = v_52;
    v_50 = v_51;
    {
        LispObject fn = basic_elt(env, 2); // ordpa
        return (*qfn2(fn))(fn, v_49, v_50);
    }
v_30:
    v_50 = v_52;
    v_49 = v_53;
    if (!car_legal(v_49)) v_49 = carerror(v_49); else
    v_49 = car(v_49);
    if (v_50 == v_49) goto v_35;
    else goto v_36;
v_35:
    v_49 = lisp_true;
    goto v_7;
v_36:
    v_50 = v_51;
    v_49 = v_53;
    if (!car_legal(v_49)) v_49 = carerror(v_49); else
    v_49 = car(v_49);
    if (v_50 == v_49) goto v_41;
    else goto v_42;
v_41:
    v_49 = nil;
    goto v_7;
v_42:
    v_49 = v_53;
    if (!car_legal(v_49)) v_49 = cdrerror(v_49); else
    v_49 = cdr(v_49);
    v_53 = v_49;
    goto v_8;
v_7:
    return onevalue(v_49);
}



// Code for monordp

static LispObject CC_monordp(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_11, v_12, v_13, v_14;
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
    v_13 = v_3;
    v_14 = v_2;
// end of prologue
    v_12 = basic_elt(env, 1); // wedge
    v_11 = basic_elt(env, 2); // xorder
    v_11 = get(v_12, v_11);
    v_12 = v_14;
        return Lapply2(nil, v_11, v_12, v_13);
}



// Code for !*physopp!*

static LispObject CC_HphysoppH(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_11 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // physopp!*
    v_11 = (*qfn1(fn))(fn, v_11);
    }
    env = stack[-1];
    if (v_11 == nil) goto v_6;
    else goto v_5;
v_6:
    v_11 = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // getphystype
        return (*qfn1(fn))(fn, v_11);
    }
v_5:
    return onevalue(v_11);
}



// Code for cdiv

static LispObject CC_cdiv(LispObject env,
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
    v_10 = cons(v_11, v_10);
    env = stack[0];
    {   LispObject fn = basic_elt(env, 1); // resimp
    v_10 = (*qfn1(fn))(fn, v_10);
    }
    if (!car_legal(v_10)) v_10 = carerror(v_10); else
    v_10 = car(v_10);
    return onevalue(v_10);
}



// Code for pv_multc

static LispObject CC_pv_multc(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_64 = stack[0];
    v_63 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_64 == v_63) goto v_11;
    else goto v_12;
v_11:
    v_63 = lisp_true;
    goto v_10;
v_12:
    v_63 = stack[-1];
    v_63 = (v_63 == nil ? lisp_true : nil);
    goto v_10;
    v_63 = nil;
v_10:
    if (v_63 == nil) goto v_8;
    v_63 = nil;
    goto v_6;
v_8:
    v_64 = stack[0];
    v_63 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_64 == v_63) goto v_21;
    else goto v_22;
v_21:
    v_63 = stack[-1];
    goto v_6;
v_22:
    stack[-2] = nil;
v_33:
    v_63 = stack[-1];
    if (v_63 == nil) goto v_36;
    else goto v_37;
v_36:
    goto v_32;
v_37:
    v_63 = stack[-1];
    if (!car_legal(v_63)) v_63 = carerror(v_63); else
    v_63 = car(v_63);
    if (!car_legal(v_63)) v_64 = carerror(v_63); else
    v_64 = car(v_63);
    v_63 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_64 == v_63) goto v_43;
    v_64 = stack[0];
    v_63 = stack[-1];
    if (!car_legal(v_63)) v_63 = carerror(v_63); else
    v_63 = car(v_63);
    if (!car_legal(v_63)) v_63 = carerror(v_63); else
    v_63 = car(v_63);
    v_65 = times2(v_64, v_63);
    env = stack[-3];
    v_63 = stack[-1];
    if (!car_legal(v_63)) v_63 = carerror(v_63); else
    v_63 = car(v_63);
    if (!car_legal(v_63)) v_64 = cdrerror(v_63); else
    v_64 = cdr(v_63);
    v_63 = stack[-2];
    v_63 = acons(v_65, v_64, v_63);
    env = stack[-3];
    stack[-2] = v_63;
    goto v_41;
v_43:
v_41:
    v_63 = stack[-1];
    if (!car_legal(v_63)) v_63 = cdrerror(v_63); else
    v_63 = cdr(v_63);
    stack[-1] = v_63;
    goto v_33;
v_32:
    v_63 = stack[-2];
        return Lnreverse(nil, v_63);
    goto v_6;
    v_63 = nil;
v_6:
    return onevalue(v_63);
}



// Code for upbve

static LispObject CC_upbve(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_16 = stack[0];
    v_16 = Lupbv(nil, v_16);
    env = stack[-1];
    if (v_16 == nil) goto v_6;
    else goto v_7;
v_6:
    v_16 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_5;
v_7:
    v_16 = stack[0];
    v_16 = Lupbv(nil, v_16);
    return add1(v_16);
    v_16 = nil;
v_5:
    return onevalue(v_16);
}



// Code for striptag

static LispObject CC_striptag(LispObject env,
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
    if (!car_legal(v_14)) v_14 = cdrerror(v_14); else
    v_14 = cdr(v_14);
    goto v_5;
    v_14 = nil;
v_5:
    return onevalue(v_14);
}



// Code for lalr_compute_lr0_goto

static LispObject CC_lalr_compute_lr0_goto(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[-1] = v_3;
    v_37 = v_2;
// end of prologue
    stack[-2] = nil;
    stack[0] = v_37;
v_12:
    v_37 = stack[0];
    if (v_37 == nil) goto v_16;
    else goto v_17;
v_16:
    goto v_11;
v_17:
    v_37 = stack[0];
    if (!car_legal(v_37)) v_37 = carerror(v_37); else
    v_37 = car(v_37);
    v_38 = v_37;
    v_37 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // lalr_lr0_move_dot
    v_37 = (*qfn2(fn))(fn, v_38, v_37);
    }
    env = stack[-3];
    v_38 = v_37;
    if (v_37 == nil) goto v_26;
    v_37 = stack[-2];
    v_37 = cons(v_38, v_37);
    env = stack[-3];
    stack[-2] = v_37;
    goto v_24;
v_26:
v_24:
    v_37 = stack[0];
    if (!car_legal(v_37)) v_37 = cdrerror(v_37); else
    v_37 = cdr(v_37);
    stack[0] = v_37;
    goto v_12;
v_11:
    v_37 = stack[-2];
    {
        LispObject fn = basic_elt(env, 2); // lalr_lr0_closure
        return (*qfn1(fn))(fn, v_37);
    }
    return onevalue(v_37);
}



// Code for monomcomparedegrevlex

static LispObject CC_monomcomparedegrevlex(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_95, v_96;
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
    v_95 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-3] = v_95;
    v_96 = stack[-2];
    v_95 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[0] = Lgetv(nil, v_96, v_95);
    env = stack[-4];
    v_96 = stack[-1];
    v_95 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_95 = Lgetv(nil, v_96, v_95);
    env = stack[-4];
    v_95 = static_cast<LispObject>(greaterp2(stack[0], v_95));
    v_95 = v_95 ? lisp_true : nil;
    env = stack[-4];
    if (v_95 == nil) goto v_14;
    v_95 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-3] = v_95;
    goto v_12;
v_14:
    v_96 = stack[-2];
    v_95 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[0] = Lgetv(nil, v_96, v_95);
    env = stack[-4];
    v_96 = stack[-1];
    v_95 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_95 = Lgetv(nil, v_96, v_95);
    env = stack[-4];
    v_95 = static_cast<LispObject>(lessp2(stack[0], v_95));
    v_95 = v_95 ? lisp_true : nil;
    env = stack[-4];
    if (v_95 == nil) goto v_25;
    v_95 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    stack[-3] = v_95;
    goto v_12;
v_25:
    v_96 = stack[-2];
    v_95 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_95 = Lgetv(nil, v_96, v_95);
    env = stack[-4];
    stack[0] = v_95;
    v_96 = stack[-1];
    v_95 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_95 = Lgetv(nil, v_96, v_95);
    env = stack[-4];
    stack[-1] = v_95;
v_45:
    v_95 = stack[0];
    if (!car_legal(v_95)) v_95 = carerror(v_95); else
    v_95 = car(v_95);
    if (v_95 == nil) goto v_48;
    else goto v_49;
v_48:
    goto v_44;
v_49:
    v_95 = stack[0];
    if (!car_legal(v_95)) v_96 = carerror(v_95); else
    v_96 = car(v_95);
    v_95 = stack[-1];
    if (!car_legal(v_95)) v_95 = carerror(v_95); else
    v_95 = car(v_95);
    v_95 = static_cast<LispObject>(lessp2(v_96, v_95));
    v_95 = v_95 ? lisp_true : nil;
    env = stack[-4];
    if (v_95 == nil) goto v_56;
    v_95 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-3] = v_95;
    v_95 = nil;
    v_95 = ncons(v_95);
    env = stack[-4];
    stack[0] = v_95;
    goto v_54;
v_56:
    v_95 = stack[0];
    if (!car_legal(v_95)) v_96 = carerror(v_95); else
    v_96 = car(v_95);
    v_95 = stack[-1];
    if (!car_legal(v_95)) v_95 = carerror(v_95); else
    v_95 = car(v_95);
    v_95 = static_cast<LispObject>(greaterp2(v_96, v_95));
    v_95 = v_95 ? lisp_true : nil;
    env = stack[-4];
    if (v_95 == nil) goto v_67;
    v_95 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    stack[-3] = v_95;
    v_95 = nil;
    v_95 = ncons(v_95);
    env = stack[-4];
    stack[0] = v_95;
    goto v_54;
v_67:
    v_95 = stack[0];
    if (!car_legal(v_95)) v_95 = cdrerror(v_95); else
    v_95 = cdr(v_95);
    stack[0] = v_95;
    v_95 = stack[-1];
    if (!car_legal(v_95)) v_95 = cdrerror(v_95); else
    v_95 = cdr(v_95);
    stack[-1] = v_95;
    goto v_54;
v_54:
    goto v_45;
v_44:
    v_95 = stack[-1];
    if (!car_legal(v_95)) v_95 = carerror(v_95); else
    v_95 = car(v_95);
    if (v_95 == nil) goto v_87;
    else goto v_88;
v_87:
    v_95 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-3] = v_95;
    goto v_86;
v_88:
v_86:
    goto v_12;
v_12:
    v_95 = stack[-3];
    return onevalue(v_95);
}



// Code for lt!*

static LispObject CC_ltH(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_50, v_51, v_52;
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
    v_50 = qvalue(basic_elt(env, 1)); // !*mcd
    if (v_50 == nil) goto v_8;
    else goto v_6;
v_8:
    v_50 = stack[-1];
    if (!car_legal(v_50)) v_50 = carerror(v_50); else
    v_50 = car(v_50);
    if (!car_legal(v_50)) v_50 = carerror(v_50); else
    v_50 = car(v_50);
    if (!car_legal(v_50)) v_51 = cdrerror(v_50); else
    v_51 = cdr(v_50);
    v_50 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_50 = static_cast<LispObject>(greaterp2(v_51, v_50));
    v_50 = v_50 ? lisp_true : nil;
    env = stack[-3];
    if (v_50 == nil) goto v_10;
    else goto v_6;
v_10:
    goto v_7;
v_6:
    v_50 = stack[-1];
    if (!car_legal(v_50)) v_50 = carerror(v_50); else
    v_50 = car(v_50);
    goto v_5;
v_7:
    v_50 = stack[-1];
    if (!car_legal(v_50)) v_50 = carerror(v_50); else
    v_50 = car(v_50);
    stack[-2] = v_50;
    v_50 = stack[-1];
    if (!car_legal(v_50)) v_50 = carerror(v_50); else
    v_50 = car(v_50);
    if (!car_legal(v_50)) v_50 = carerror(v_50); else
    v_50 = car(v_50);
    if (!car_legal(v_50)) v_50 = carerror(v_50); else
    v_50 = car(v_50);
    stack[0] = v_50;
v_25:
    v_50 = stack[-1];
    if (!car_legal(v_50)) v_50 = cdrerror(v_50); else
    v_50 = cdr(v_50);
    stack[-1] = v_50;
    v_50 = stack[-1];
    if (v_50 == nil) goto v_36;
    else goto v_37;
v_36:
    v_50 = stack[-2];
    goto v_24;
v_37:
    v_51 = stack[-1];
    v_50 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // degr
    v_51 = (*qfn2(fn))(fn, v_51, v_50);
    }
    env = stack[-3];
    v_50 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_51 == v_50) goto v_40;
    else goto v_41;
v_40:
    v_52 = stack[0];
    v_51 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_50 = stack[-1];
    return acons(v_52, v_51, v_50);
v_41:
    goto v_25;
v_24:
    goto v_5;
    v_50 = nil;
v_5:
    return onevalue(v_50);
}



// Code for subs2f

static LispObject CC_subs2f(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_61, v_62, v_63;
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
    v_62 = qvalue(basic_elt(env, 1)); // simpcount!*
    v_61 = qvalue(basic_elt(env, 2)); // simplimit!*
    v_61 = static_cast<LispObject>(greaterp2(v_62, v_61));
    v_61 = v_61 ? lisp_true : nil;
    env = stack[-2];
    if (v_61 == nil) goto v_10;
    v_61 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    setvalue(basic_elt(env, 1), v_61); // simpcount!*
    v_63 = basic_elt(env, 3); // poly
    v_62 = static_cast<LispObject>(336)+TAG_FIXNUM; // 21
    v_61 = basic_elt(env, 4); // "Simplification recursion too deep"
    {   LispObject fn = basic_elt(env, 8); // rerror
    v_61 = (*qfn3(fn))(fn, v_63, v_62, v_61);
    }
    env = stack[-2];
    goto v_8;
v_10:
v_8:
    v_61 = qvalue(basic_elt(env, 1)); // simpcount!*
    v_61 = add1(v_61);
    env = stack[-2];
    setvalue(basic_elt(env, 1), v_61); // simpcount!*
    v_61 = nil;
    setvalue(basic_elt(env, 5), v_61); // !*sub2
    v_61 = stack[0];
    {   LispObject fn = basic_elt(env, 9); // subs2f1
    v_61 = (*qfn1(fn))(fn, v_61);
    }
    env = stack[-2];
    stack[-1] = v_61;
    v_61 = qvalue(basic_elt(env, 5)); // !*sub2
    if (v_61 == nil) goto v_29;
    else goto v_28;
v_29:
    v_61 = qvalue(basic_elt(env, 6)); // powlis1!*
    if (v_61 == nil) goto v_31;
    else goto v_28;
v_31:
    goto v_27;
v_28:
    v_61 = qvalue(basic_elt(env, 7)); // !*resubs
    if (v_61 == nil) goto v_27;
    v_61 = stack[-1];
    if (!car_legal(v_61)) v_62 = carerror(v_61); else
    v_62 = car(v_61);
    v_61 = stack[0];
    if (equal(v_62, v_61)) goto v_41;
    else goto v_42;
v_41:
    v_61 = stack[-1];
    if (!car_legal(v_61)) v_62 = cdrerror(v_61); else
    v_62 = cdr(v_61);
    v_61 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_61 = (v_62 == v_61 ? lisp_true : nil);
    goto v_40;
v_42:
    v_61 = nil;
    goto v_40;
    v_61 = nil;
v_40:
    if (v_61 == nil) goto v_38;
    v_61 = nil;
    setvalue(basic_elt(env, 5), v_61); // !*sub2
    goto v_36;
v_38:
    v_61 = stack[-1];
    {   LispObject fn = basic_elt(env, 10); // subs2q
    v_61 = (*qfn1(fn))(fn, v_61);
    }
    env = stack[-2];
    stack[-1] = v_61;
    goto v_36;
v_36:
    goto v_25;
v_27:
v_25:
    v_61 = qvalue(basic_elt(env, 1)); // simpcount!*
    v_61 = sub1(v_61);
    env = stack[-2];
    setvalue(basic_elt(env, 1), v_61); // simpcount!*
    v_61 = stack[-1];
    return onevalue(v_61);
}



// Code for talp_simpat

static LispObject CC_talp_simpat(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[-1] = v_2;
// end of prologue
    v_32 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // talp_arg2l
    stack[0] = (*qfn1(fn))(fn, v_32);
    }
    env = stack[-3];
    v_32 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // talp_arg2r
    v_32 = (*qfn1(fn))(fn, v_32);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 3); // talp_tordp
    v_32 = (*qfn2(fn))(fn, stack[0], v_32);
    }
    env = stack[-3];
    if (v_32 == nil) goto v_11;
    v_32 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // talp_arg2l
    v_32 = (*qfn1(fn))(fn, v_32);
    }
    env = stack[-3];
    stack[0] = v_32;
    v_32 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // talp_arg2r
    v_32 = (*qfn1(fn))(fn, v_32);
    }
    env = stack[-3];
    stack[-2] = v_32;
    goto v_9;
v_11:
    v_32 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // talp_arg2r
    v_32 = (*qfn1(fn))(fn, v_32);
    }
    env = stack[-3];
    stack[0] = v_32;
    v_32 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // talp_arg2l
    v_32 = (*qfn1(fn))(fn, v_32);
    }
    env = stack[-3];
    stack[-2] = v_32;
    goto v_9;
v_9:
    v_32 = stack[-1];
    {   LispObject fn = basic_elt(env, 4); // talp_op
    v_34 = (*qfn1(fn))(fn, v_32);
    }
    env = stack[-3];
    v_33 = stack[-2];
    v_32 = stack[0];
    {
        LispObject fn = basic_elt(env, 5); // talp_mk2
        return (*qfn3(fn))(fn, v_34, v_33, v_32);
    }
    return onevalue(v_32);
}



// Code for kernord!-sort

static LispObject CC_kernordKsort(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[-1] = v_2;
// end of prologue
    stack[0] = nil;
v_10:
    v_31 = stack[-1];
    if (v_31 == nil) goto v_13;
    else goto v_14;
v_13:
    goto v_9;
v_14:
    v_31 = stack[-1];
    if (!car_legal(v_31)) v_32 = cdrerror(v_31); else
    v_32 = cdr(v_31);
    v_31 = stack[-1];
    if (!car_legal(v_31)) v_31 = carerror(v_31); else
    v_31 = car(v_31);
    {   LispObject fn = basic_elt(env, 1); // maxdeg
    v_31 = (*qfn2(fn))(fn, v_32, v_31);
    }
    env = stack[-3];
    stack[-2] = v_31;
    v_31 = stack[-2];
    if (!car_legal(v_31)) v_32 = carerror(v_31); else
    v_32 = car(v_31);
    v_31 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // delallasc
    v_31 = (*qfn2(fn))(fn, v_32, v_31);
    }
    env = stack[-3];
    stack[-1] = v_31;
    v_31 = stack[-2];
    if (!car_legal(v_31)) v_32 = carerror(v_31); else
    v_32 = car(v_31);
    v_31 = stack[0];
    v_31 = cons(v_32, v_31);
    env = stack[-3];
    stack[0] = v_31;
    goto v_10;
v_9:
    v_31 = stack[0];
    return onevalue(v_31);
}



// Code for printout

static LispObject CC_printout(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_69 = qvalue(basic_elt(env, 1)); // !*web
    if (v_69 == nil) goto v_8;
    else goto v_9;
v_8:
    v_69 = Lterpri(nil);
    env = stack[-2];
    goto v_7;
v_9:
v_7:
    v_69 = qvalue(basic_elt(env, 1)); // !*web
    if (v_69 == nil) goto v_14;
    else goto v_15;
v_14:
    v_69 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-1] = v_69;
v_20:
    v_70 = qvalue(basic_elt(env, 2)); // indent
    v_69 = stack[-1];
    v_69 = difference2(v_70, v_69);
    env = stack[-2];
    v_69 = Lminusp(nil, v_69);
    env = stack[-2];
    if (v_69 == nil) goto v_25;
    goto v_19;
v_25:
    v_69 = basic_elt(env, 3); // " "
    v_69 = Lprinc(nil, v_69);
    env = stack[-2];
    v_69 = stack[-1];
    v_69 = add1(v_69);
    env = stack[-2];
    stack[-1] = v_69;
    goto v_20;
v_19:
    goto v_13;
v_15:
v_13:
    v_69 = stack[0];
    v_69 = Lconsp(nil, v_69);
    env = stack[-2];
    if (v_69 == nil) goto v_38;
    v_69 = stack[0];
    if (!car_legal(v_69)) v_70 = carerror(v_69); else
    v_70 = car(v_69);
    v_69 = basic_elt(env, 4); // !:rd!:
    if (v_70 == v_69) goto v_47;
    else goto v_48;
v_47:
    v_69 = lisp_true;
    goto v_46;
v_48:
    v_69 = stack[0];
    if (!car_legal(v_69)) v_70 = carerror(v_69); else
    v_70 = car(v_69);
    v_69 = basic_elt(env, 5); // !:rn!:
    v_69 = (v_70 == v_69 ? lisp_true : nil);
    goto v_46;
    v_69 = nil;
v_46:
    if (v_69 == nil) goto v_44;
    v_69 = stack[0];
    {   LispObject fn = basic_elt(env, 6); // ma_print
    v_69 = (*qfn1(fn))(fn, v_69);
    }
    goto v_42;
v_44:
    v_69 = stack[0];
    v_69 = Lprinc(nil, v_69);
    goto v_42;
v_42:
    goto v_36;
v_38:
    v_69 = stack[0];
    v_69 = Lprinc(nil, v_69);
    goto v_36;
v_36:
    v_69 = nil;
    return onevalue(v_69);
}



// Code for mgenp

static LispObject CC_mgenp(LispObject env,
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
    v_15 = v_16;
    v_16 = basic_elt(env, 1); // mgen
    return get(v_15, v_16);
v_7:
    v_15 = nil;
    goto v_5;
    v_15 = nil;
v_5:
    return onevalue(v_15);
}



// Code for evcompless!?

static LispObject CC_evcomplessW(LispObject env,
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
    v_11 = v_3;
    v_10 = v_2;
// end of prologue
    stack[0] = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 1); // evcomp
    v_10 = (*qfn2(fn))(fn, v_11, v_10);
    }
    v_10 = (stack[0] == v_10 ? lisp_true : nil);
    return onevalue(v_10);
}



// Code for evmatrixcomp

static LispObject CC_evmatrixcomp(LispObject env,
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
    v_9 = qvalue(basic_elt(env, 1)); // vdpmatrix!*
    {
        LispObject fn = basic_elt(env, 2); // evmatrixcomp1
        return (*qfn3(fn))(fn, v_11, v_10, v_9);
    }
}



// Code for wedgepf2

static LispObject CC_wedgepf2(LispObject env,
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    stack[-1] = v_3;
    stack[-2] = v_2;
// end of prologue
    v_39 = stack[-2];
    if (v_39 == nil) goto v_11;
    else goto v_12;
v_11:
    v_39 = lisp_true;
    goto v_10;
v_12:
    v_39 = stack[-1];
    v_39 = (v_39 == nil ? lisp_true : nil);
    goto v_10;
    v_39 = nil;
v_10:
    if (v_39 == nil) goto v_8;
    v_39 = nil;
    goto v_6;
v_8:
    v_39 = stack[-2];
    if (!car_legal(v_39)) v_40 = carerror(v_39); else
    v_40 = car(v_39);
    v_39 = stack[-1];
    if (!car_legal(v_39)) v_39 = carerror(v_39); else
    v_39 = car(v_39);
    {   LispObject fn = basic_elt(env, 1); // wedget2
    stack[-3] = (*qfn2(fn))(fn, v_40, v_39);
    }
    env = stack[-4];
    v_39 = stack[-2];
    if (!car_legal(v_39)) v_39 = carerror(v_39); else
    v_39 = car(v_39);
    v_40 = ncons(v_39);
    env = stack[-4];
    v_39 = stack[-1];
    if (!car_legal(v_39)) v_39 = cdrerror(v_39); else
    v_39 = cdr(v_39);
    {   LispObject fn = basic_elt(env, 0); // wedgepf2
    stack[0] = (*qfn2(fn))(fn, v_40, v_39);
    }
    env = stack[-4];
    v_39 = stack[-2];
    if (!car_legal(v_39)) v_40 = cdrerror(v_39); else
    v_40 = cdr(v_39);
    v_39 = stack[-1];
    {   LispObject fn = basic_elt(env, 0); // wedgepf2
    v_39 = (*qfn2(fn))(fn, v_40, v_39);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 2); // addpf
    v_39 = (*qfn2(fn))(fn, stack[0], v_39);
    }
    env = stack[-4];
    {
        LispObject v_45 = stack[-3];
        LispObject fn = basic_elt(env, 2); // addpf
        return (*qfn2(fn))(fn, v_45, v_39);
    }
    v_39 = nil;
v_6:
    return onevalue(v_39);
}



// Code for pprin2

static LispObject CC_pprin2(LispObject env,
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
// space for vars preserved across procedure calls
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_15 = stack[0];
    v_14 = qvalue(basic_elt(env, 1)); // !*pprinbuf!*
    v_14 = cons(v_15, v_14);
    env = stack[-2];
    setvalue(basic_elt(env, 1), v_14); // !*pprinbuf!*
    stack[-1] = qvalue(basic_elt(env, 2)); // !*posn!*
    v_14 = stack[0];
    v_14 = Lexplodec(nil, v_14);
    env = stack[-2];
    v_14 = Llength(nil, v_14);
    env = stack[-2];
    v_14 = plus2(stack[-1], v_14);
    env = stack[-2];
    setvalue(basic_elt(env, 2), v_14); // !*posn!*
    v_14 = nil;
    return onevalue(v_14);
}



// Code for !*collectphysops_reversed

static LispObject CC_Hcollectphysops_reversed(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    v_32 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // physopp
    v_32 = (*qfn1(fn))(fn, v_32);
    }
    env = stack[-2];
    if (v_32 == nil) goto v_10;
    v_33 = stack[-1];
    v_32 = stack[0];
    return cons(v_33, v_32);
v_10:
v_18:
    v_32 = stack[-1];
    if (!consp(v_32)) goto v_21;
    else goto v_22;
v_21:
    goto v_17;
v_22:
    v_32 = stack[-1];
    if (!car_legal(v_32)) v_33 = carerror(v_32); else
    v_33 = car(v_32);
    v_32 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // !*collectphysops_reversed
    v_32 = (*qfn2(fn))(fn, v_33, v_32);
    }
    env = stack[-2];
    stack[0] = v_32;
    v_32 = stack[-1];
    if (!car_legal(v_32)) v_32 = cdrerror(v_32); else
    v_32 = cdr(v_32);
    stack[-1] = v_32;
    goto v_18;
v_17:
    v_32 = stack[0];
    return onevalue(v_32);
}



// Code for constimes

static LispObject CC_constimes(LispObject env,
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
        LispObject fn = basic_elt(env, 1); // cstimes
        return (*qfn2(fn))(fn, v_8, v_7);
    }
}



// Code for errorp

static LispObject CC_errorp(LispObject env,
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
    v_14 = lisp_true;
    goto v_5;
v_7:
    if (!car_legal(v_14)) v_14 = cdrerror(v_14); else
    v_14 = cdr(v_14);
    goto v_5;
    v_14 = nil;
v_5:
    return onevalue(v_14);
}



// Code for timesip

static LispObject CC_timesip(LispObject env,
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
    v_19 = v_20;
    v_18 = basic_elt(env, 1); // times
    if (!consp(v_19)) goto v_7;
    v_19 = car(v_19);
    if (v_19 == v_18) goto v_6;
    else goto v_7;
v_6:
    v_18 = basic_elt(env, 2); // i
    v_19 = v_20;
    if (!car_legal(v_19)) v_19 = cdrerror(v_19); else
    v_19 = cdr(v_19);
    v_18 = Lmemq(nil, v_18, v_19);
    goto v_5;
v_7:
    v_18 = nil;
    goto v_5;
    v_18 = nil;
v_5:
    return onevalue(v_18);
}



// Code for fs!:timestermterm

static LispObject CC_fsTtimestermterm(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_156, v_157, v_158;
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
    stack_popper stack_popper_var(11);
// copy arguments values to proper place
    stack[-7] = v_3;
    stack[-8] = v_2;
// end of prologue
    v_156 = static_cast<LispObject>(112)+TAG_FIXNUM; // 7
    v_156 = Lmkvect(nil, v_156);
    env = stack[-10];
    stack[-9] = v_156;
    v_157 = stack[-8];
    v_156 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_156 = Lgetv(nil, v_157, v_156);
    env = stack[-10];
    stack[-5] = v_156;
    v_157 = stack[-7];
    v_156 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_156 = Lgetv(nil, v_157, v_156);
    env = stack[-10];
    stack[-4] = v_156;
    v_156 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-3] = v_156;
v_24:
    v_157 = static_cast<LispObject>(112)+TAG_FIXNUM; // 7
    v_156 = stack[-3];
    v_156 = difference2(v_157, v_156);
    env = stack[-10];
    v_156 = Lminusp(nil, v_156);
    env = stack[-10];
    if (v_156 == nil) goto v_29;
    goto v_23;
v_29:
    stack[-2] = stack[-9];
    stack[-1] = stack[-3];
    v_157 = stack[-5];
    v_156 = stack[-3];
    stack[0] = Lgetv(nil, v_157, v_156);
    env = stack[-10];
    v_157 = stack[-4];
    v_156 = stack[-3];
    v_156 = Lgetv(nil, v_157, v_156);
    env = stack[-10];
    v_156 = plus2(stack[0], v_156);
    env = stack[-10];
    v_156 = Lputv(nil, stack[-2], stack[-1], v_156);
    env = stack[-10];
    v_156 = stack[-3];
    v_156 = add1(v_156);
    env = stack[-10];
    stack[-3] = v_156;
    goto v_24;
v_23:
    v_156 = static_cast<LispObject>(112)+TAG_FIXNUM; // 7
    v_156 = Lmkvect(nil, v_156);
    env = stack[-10];
    stack[-6] = v_156;
    v_156 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-3] = v_156;
v_52:
    v_157 = static_cast<LispObject>(112)+TAG_FIXNUM; // 7
    v_156 = stack[-3];
    v_156 = difference2(v_157, v_156);
    env = stack[-10];
    v_156 = Lminusp(nil, v_156);
    env = stack[-10];
    if (v_156 == nil) goto v_57;
    goto v_51;
v_57:
    stack[-2] = stack[-6];
    stack[-1] = stack[-3];
    v_157 = stack[-5];
    v_156 = stack[-3];
    stack[0] = Lgetv(nil, v_157, v_156);
    env = stack[-10];
    v_157 = stack[-4];
    v_156 = stack[-3];
    v_156 = Lgetv(nil, v_157, v_156);
    env = stack[-10];
    v_156 = difference2(stack[0], v_156);
    env = stack[-10];
    v_156 = Lputv(nil, stack[-2], stack[-1], v_156);
    env = stack[-10];
    v_156 = stack[-3];
    v_156 = add1(v_156);
    env = stack[-10];
    stack[-3] = v_156;
    goto v_52;
v_51:
    v_157 = stack[-8];
    v_156 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[0] = Lgetv(nil, v_157, v_156);
    env = stack[-10];
    v_157 = stack[-7];
    v_156 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_156 = Lgetv(nil, v_157, v_156);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 4); // multsq
    v_156 = (*qfn2(fn))(fn, stack[0], v_156);
    }
    env = stack[-10];
    stack[0] = v_156;
    v_157 = stack[0];
    v_156 = basic_elt(env, 1); // (1 . 2)
    {   LispObject fn = basic_elt(env, 4); // multsq
    v_156 = (*qfn2(fn))(fn, v_157, v_156);
    }
    env = stack[-10];
    stack[0] = v_156;
    v_156 = stack[0];
    if (!car_legal(v_156)) v_156 = carerror(v_156); else
    v_156 = car(v_156);
    if (v_156 == nil) goto v_87;
    else goto v_88;
v_87:
    v_156 = nil;
    goto v_12;
v_88:
    v_157 = stack[-8];
    v_156 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_157 = Lgetv(nil, v_157, v_156);
    env = stack[-10];
    v_156 = basic_elt(env, 2); // sin
    if (v_157 == v_156) goto v_94;
    else goto v_95;
v_94:
    v_157 = stack[-7];
    v_156 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_157 = Lgetv(nil, v_157, v_156);
    env = stack[-10];
    v_156 = basic_elt(env, 2); // sin
    if (v_157 == v_156) goto v_102;
    else goto v_103;
v_102:
    stack[-1] = basic_elt(env, 3); // cos
    stack[-2] = stack[-9];
    v_156 = stack[0];
    {   LispObject fn = basic_elt(env, 5); // negsq
    v_156 = (*qfn1(fn))(fn, v_156);
    }
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 6); // make!-term
    stack[-1] = (*qfn3(fn))(fn, stack[-1], stack[-2], v_156);
    }
    env = stack[-10];
    v_158 = basic_elt(env, 3); // cos
    v_157 = stack[-6];
    v_156 = stack[0];
    {   LispObject fn = basic_elt(env, 6); // make!-term
    v_156 = (*qfn3(fn))(fn, v_158, v_157, v_156);
    }
    env = stack[-10];
    {
        LispObject v_169 = stack[-1];
        LispObject fn = basic_elt(env, 7); // fs!:plus
        return (*qfn2(fn))(fn, v_169, v_156);
    }
v_103:
    v_158 = basic_elt(env, 2); // sin
    v_157 = stack[-9];
    v_156 = stack[0];
    {   LispObject fn = basic_elt(env, 6); // make!-term
    stack[-1] = (*qfn3(fn))(fn, v_158, v_157, v_156);
    }
    env = stack[-10];
    v_158 = basic_elt(env, 2); // sin
    v_157 = stack[-6];
    v_156 = stack[0];
    {   LispObject fn = basic_elt(env, 6); // make!-term
    v_156 = (*qfn3(fn))(fn, v_158, v_157, v_156);
    }
    env = stack[-10];
    {
        LispObject v_170 = stack[-1];
        LispObject fn = basic_elt(env, 7); // fs!:plus
        return (*qfn2(fn))(fn, v_170, v_156);
    }
    goto v_93;
v_95:
    v_157 = stack[-7];
    v_156 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_157 = Lgetv(nil, v_157, v_156);
    env = stack[-10];
    v_156 = basic_elt(env, 2); // sin
    if (v_157 == v_156) goto v_129;
    else goto v_130;
v_129:
    v_158 = basic_elt(env, 2); // sin
    v_157 = stack[-9];
    v_156 = stack[0];
    {   LispObject fn = basic_elt(env, 6); // make!-term
    stack[-2] = (*qfn3(fn))(fn, v_158, v_157, v_156);
    }
    env = stack[-10];
    stack[-1] = basic_elt(env, 2); // sin
    stack[-3] = stack[-6];
    v_156 = stack[0];
    {   LispObject fn = basic_elt(env, 5); // negsq
    v_156 = (*qfn1(fn))(fn, v_156);
    }
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 6); // make!-term
    v_156 = (*qfn3(fn))(fn, stack[-1], stack[-3], v_156);
    }
    env = stack[-10];
    {
        LispObject v_171 = stack[-2];
        LispObject fn = basic_elt(env, 7); // fs!:plus
        return (*qfn2(fn))(fn, v_171, v_156);
    }
v_130:
    v_158 = basic_elt(env, 3); // cos
    v_157 = stack[-9];
    v_156 = stack[0];
    {   LispObject fn = basic_elt(env, 6); // make!-term
    stack[-1] = (*qfn3(fn))(fn, v_158, v_157, v_156);
    }
    env = stack[-10];
    v_158 = basic_elt(env, 3); // cos
    v_157 = stack[-6];
    v_156 = stack[0];
    {   LispObject fn = basic_elt(env, 6); // make!-term
    v_156 = (*qfn3(fn))(fn, v_158, v_157, v_156);
    }
    env = stack[-10];
    {
        LispObject v_172 = stack[-1];
        LispObject fn = basic_elt(env, 7); // fs!:plus
        return (*qfn2(fn))(fn, v_172, v_156);
    }
v_93:
    v_156 = nil;
v_12:
    return onevalue(v_156);
}



// Code for mo_vdivides!?

static LispObject CC_mo_vdividesW(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // mo_comp
    stack[-2] = (*qfn1(fn))(fn, v_20);
    }
    env = stack[-3];
    v_20 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // mo_comp
    v_20 = (*qfn1(fn))(fn, v_20);
    }
    env = stack[-3];
    v_20 = Leqn_2(nil, stack[-2], v_20);
    env = stack[-3];
    if (v_20 == nil) goto v_7;
    else goto v_8;
v_7:
    v_20 = nil;
    goto v_6;
v_8:
    v_21 = stack[-1];
    v_20 = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // mo_divides!?
        return (*qfn2(fn))(fn, v_21, v_20);
    }
    v_20 = nil;
v_6:
    return onevalue(v_20);
}



// Code for dless

static LispObject CC_dless(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_48, v_49, v_50;
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
    v_50 = v_3;
    stack[0] = v_2;
// end of prologue
    v_49 = qvalue(basic_elt(env, 1)); // ordering
    v_48 = basic_elt(env, 2); // lex
    if (v_49 == v_48) goto v_7;
    else goto v_8;
v_7:
    v_48 = stack[0];
    v_49 = v_50;
    {
        LispObject fn = basic_elt(env, 5); // dlesslex
        return (*qfn2(fn))(fn, v_48, v_49);
    }
v_8:
    v_48 = stack[0];
    if (!car_legal(v_48)) v_49 = carerror(v_48); else
    v_49 = car(v_48);
    v_48 = v_50;
    if (!car_legal(v_48)) v_48 = carerror(v_48); else
    v_48 = car(v_48);
    if ((static_cast<std::intptr_t>(v_49) < static_cast<std::intptr_t>(v_48))) goto v_14;
    else goto v_15;
v_14:
    v_48 = lisp_true;
    goto v_6;
v_15:
    v_48 = stack[0];
    if (!car_legal(v_48)) v_49 = carerror(v_48); else
    v_49 = car(v_48);
    v_48 = v_50;
    if (!car_legal(v_48)) v_48 = carerror(v_48); else
    v_48 = car(v_48);
    if ((static_cast<std::intptr_t>(v_49) > static_cast<std::intptr_t>(v_48))) goto v_21;
    else goto v_22;
v_21:
    v_48 = nil;
    goto v_6;
v_22:
    v_49 = qvalue(basic_elt(env, 1)); // ordering
    v_48 = basic_elt(env, 3); // glex
    if (v_49 == v_48) goto v_28;
    else goto v_29;
v_28:
    v_48 = stack[0];
    if (!car_legal(v_48)) v_48 = cdrerror(v_48); else
    v_48 = cdr(v_48);
    v_49 = v_50;
    if (!car_legal(v_49)) v_49 = cdrerror(v_49); else
    v_49 = cdr(v_49);
    {
        LispObject fn = basic_elt(env, 5); // dlesslex
        return (*qfn2(fn))(fn, v_48, v_49);
    }
v_29:
    v_49 = qvalue(basic_elt(env, 1)); // ordering
    v_48 = basic_elt(env, 4); // grev
    if (v_49 == v_48) goto v_37;
    else goto v_38;
v_37:
    v_48 = v_50;
    if (!car_legal(v_48)) v_48 = cdrerror(v_48); else
    v_48 = cdr(v_48);
    stack[-1] = Lreverse(nil, v_48);
    env = stack[-2];
    v_48 = stack[0];
    if (!car_legal(v_48)) v_48 = cdrerror(v_48); else
    v_48 = cdr(v_48);
    v_48 = Lreverse(nil, v_48);
    env = stack[-2];
    {
        LispObject v_53 = stack[-1];
        LispObject fn = basic_elt(env, 5); // dlesslex
        return (*qfn2(fn))(fn, v_53, v_48);
    }
v_38:
    v_48 = nil;
v_6:
    return onevalue(v_48);
}



// Code for pkp

static LispObject CC_pkp(LispObject env,
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
    stack[0] = v_2;
// end of prologue
    stack[-3] = nil;
    v_95 = stack[0];
    if (!consp(v_95)) goto v_15;
    else goto v_16;
v_15:
    v_95 = lisp_true;
    goto v_14;
v_16:
    v_95 = qvalue(basic_elt(env, 1)); // !*ppacked
    v_95 = (v_95 == nil ? lisp_true : nil);
    goto v_14;
    v_95 = nil;
v_14:
    if (v_95 == nil) goto v_12;
    v_95 = stack[0];
    goto v_8;
v_12:
    v_95 = stack[0];
    v_96 = Llength(nil, v_95);
    env = stack[-4];
    v_95 = static_cast<LispObject>(160)+TAG_FIXNUM; // 10
    v_95 = static_cast<LispObject>(geq2(v_96, v_95));
    v_95 = v_95 ? lisp_true : nil;
    env = stack[-4];
    stack[-2] = v_95;
    v_95 = stack[0];
    stack[-1] = v_95;
v_31:
    v_95 = stack[-1];
    if (v_95 == nil) goto v_35;
    else goto v_36;
v_35:
    goto v_30;
v_36:
    v_95 = stack[-1];
    if (!car_legal(v_95)) v_95 = carerror(v_95); else
    v_95 = car(v_95);
    stack[0] = v_95;
    v_95 = stack[-2];
    if (v_95 == nil) goto v_45;
    v_96 = stack[0];
    v_95 = static_cast<LispObject>(160)+TAG_FIXNUM; // 10
    v_95 = static_cast<LispObject>(lessp2(v_96, v_95));
    v_95 = v_95 ? lisp_true : nil;
    env = stack[-4];
    if (v_95 == nil) goto v_50;
    v_96 = stack[0];
    v_95 = qvalue(basic_elt(env, 2)); // diglist!*
    {   LispObject fn = basic_elt(env, 4); // dssoc
    v_95 = (*qfn2(fn))(fn, v_96, v_95);
    }
    env = stack[-4];
    if (!car_legal(v_95)) v_97 = carerror(v_95); else
    v_97 = car(v_95);
    v_96 = basic_elt(env, 3); // !0
    v_95 = stack[-3];
    v_95 = list2star(v_97, v_96, v_95);
    env = stack[-4];
    stack[-3] = v_95;
    goto v_48;
v_50:
    v_96 = stack[0];
    v_95 = static_cast<LispObject>(160)+TAG_FIXNUM; // 10
    v_95 = Ldivide_2(nil, v_96, v_95);
    env = stack[-4];
    stack[0] = v_95;
    v_95 = stack[0];
    if (!car_legal(v_95)) v_96 = carerror(v_95); else
    v_96 = car(v_95);
    v_95 = qvalue(basic_elt(env, 2)); // diglist!*
    {   LispObject fn = basic_elt(env, 4); // dssoc
    v_95 = (*qfn2(fn))(fn, v_96, v_95);
    }
    env = stack[-4];
    if (!car_legal(v_95)) v_96 = carerror(v_95); else
    v_96 = car(v_95);
    v_95 = stack[-3];
    v_95 = cons(v_96, v_95);
    env = stack[-4];
    stack[-3] = v_95;
    v_95 = stack[0];
    if (!car_legal(v_95)) v_96 = cdrerror(v_95); else
    v_96 = cdr(v_95);
    v_95 = qvalue(basic_elt(env, 2)); // diglist!*
    {   LispObject fn = basic_elt(env, 4); // dssoc
    v_95 = (*qfn2(fn))(fn, v_96, v_95);
    }
    env = stack[-4];
    if (!car_legal(v_95)) v_96 = carerror(v_95); else
    v_96 = car(v_95);
    v_95 = stack[-3];
    v_95 = cons(v_96, v_95);
    env = stack[-4];
    stack[-3] = v_95;
    goto v_48;
v_48:
    goto v_43;
v_45:
    v_96 = stack[0];
    v_95 = qvalue(basic_elt(env, 2)); // diglist!*
    {   LispObject fn = basic_elt(env, 4); // dssoc
    v_95 = (*qfn2(fn))(fn, v_96, v_95);
    }
    env = stack[-4];
    if (!car_legal(v_95)) v_96 = carerror(v_95); else
    v_96 = car(v_95);
    v_95 = stack[-3];
    v_95 = cons(v_96, v_95);
    env = stack[-4];
    stack[-3] = v_95;
    goto v_43;
v_43:
    v_95 = stack[-1];
    if (!car_legal(v_95)) v_95 = cdrerror(v_95); else
    v_95 = cdr(v_95);
    stack[-1] = v_95;
    goto v_31;
v_30:
    v_95 = stack[-3];
    v_95 = Lnreverse(nil, v_95);
        return Lcompress(nil, v_95);
v_8:
    return onevalue(v_95);
}



// Code for !*i2rn

static LispObject CC_Hi2rn(LispObject env,
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
    v_10 = basic_elt(env, 1); // !:rn!:
    v_9 = v_8;
    v_8 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return list2star(v_10, v_9, v_8);
}



// Code for gcdfd1

static LispObject CC_gcdfd1(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    stack[0] = v_3;
    v_39 = v_2;
// end of prologue
v_7:
    v_40 = stack[0];
    if (v_40 == nil) goto v_10;
    else goto v_11;
v_10:
    goto v_6;
v_11:
    v_40 = stack[0];
    if (!consp(v_40)) goto v_18;
    else goto v_19;
v_18:
    v_40 = lisp_true;
    goto v_17;
v_19:
    v_40 = stack[0];
    if (!car_legal(v_40)) v_40 = carerror(v_40); else
    v_40 = car(v_40);
    v_40 = (consp(v_40) ? nil : lisp_true);
    goto v_17;
    v_40 = nil;
v_17:
    if (v_40 == nil) goto v_15;
    v_40 = v_39;
    v_39 = stack[0];
    {
        LispObject fn = basic_elt(env, 1); // gcddd
        return (*qfn2(fn))(fn, v_40, v_39);
    }
v_15:
    v_40 = v_39;
    v_39 = stack[0];
    if (!car_legal(v_39)) v_39 = carerror(v_39); else
    v_39 = car(v_39);
    if (!car_legal(v_39)) v_39 = cdrerror(v_39); else
    v_39 = cdr(v_39);
    {   LispObject fn = basic_elt(env, 0); // gcdfd1
    v_39 = (*qfn2(fn))(fn, v_40, v_39);
    }
    env = stack[-1];
    v_40 = stack[0];
    if (!car_legal(v_40)) v_40 = cdrerror(v_40); else
    v_40 = cdr(v_40);
    stack[0] = v_40;
    goto v_7;
    v_39 = nil;
v_6:
    return onevalue(v_39);
}



// Code for lalr_propagate_lookaheads

static LispObject CC_lalr_propagate_lookaheads(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_67, v_68, v_69, v_70;
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
v_11:
    v_67 = nil;
    v_70 = v_67;
    v_67 = stack[-2];
    stack[-1] = v_67;
v_16:
    v_67 = stack[-1];
    if (v_67 == nil) goto v_20;
    else goto v_21;
v_20:
    goto v_15;
v_21:
    v_67 = stack[-1];
    if (!car_legal(v_67)) v_67 = carerror(v_67); else
    v_67 = car(v_67);
    v_68 = v_67;
    if (!car_legal(v_68)) v_68 = carerror(v_68); else
    v_68 = car(v_68);
    if (!car_legal(v_67)) v_67 = cdrerror(v_67); else
    v_67 = cdr(v_67);
    stack[-3] = v_67;
    v_67 = v_68;
    if (!car_legal(v_67)) v_67 = cdrerror(v_67); else
    v_67 = cdr(v_67);
    stack[0] = v_67;
v_34:
    v_67 = stack[0];
    if (v_67 == nil) goto v_39;
    else goto v_40;
v_39:
    goto v_33;
v_40:
    v_67 = stack[0];
    if (!car_legal(v_67)) v_67 = carerror(v_67); else
    v_67 = car(v_67);
    v_69 = v_67;
    v_68 = v_69;
    v_67 = stack[-3];
    if (!car_legal(v_67)) v_67 = cdrerror(v_67); else
    v_67 = cdr(v_67);
    v_67 = Lmember(nil, v_68, v_67);
    if (v_67 == nil) goto v_48;
    else goto v_49;
v_48:
    v_67 = stack[-3];
    v_68 = v_69;
    {   LispObject fn = basic_elt(env, 1); // lalr_add_lookahead
    v_67 = (*qfn2(fn))(fn, v_67, v_68);
    }
    env = stack[-4];
    v_67 = lisp_true;
    v_70 = v_67;
    goto v_47;
v_49:
v_47:
    v_67 = stack[0];
    if (!car_legal(v_67)) v_67 = cdrerror(v_67); else
    v_67 = cdr(v_67);
    stack[0] = v_67;
    goto v_34;
v_33:
    v_67 = stack[-1];
    if (!car_legal(v_67)) v_67 = cdrerror(v_67); else
    v_67 = cdr(v_67);
    stack[-1] = v_67;
    goto v_16;
v_15:
    v_67 = v_70;
    if (v_67 == nil) goto v_65;
    goto v_11;
v_65:
    v_67 = nil;
    return onevalue(v_67);
}



// Code for add2calls

static LispObject CC_add2calls(LispObject env,
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
    stack[0] = v_2;
// end of prologue
    v_34 = stack[0];
    v_33 = basic_elt(env, 1); // cinthis
    v_33 = Lflagp(nil, v_34, v_33);
    env = stack[-1];
    if (v_33 == nil) goto v_6;
    else goto v_7;
v_6:
    v_34 = stack[0];
    v_33 = basic_elt(env, 2); // nolist
    v_33 = Lflagp(nil, v_34, v_33);
    env = stack[-1];
    if (v_33 == nil) goto v_14;
    v_34 = stack[0];
    v_33 = qvalue(basic_elt(env, 3)); // xseen!*
    v_33 = cons(v_34, v_33);
    env = stack[-1];
    setvalue(basic_elt(env, 3), v_33); // xseen!*
    goto v_12;
v_14:
    v_34 = stack[0];
    v_33 = qvalue(basic_elt(env, 4)); // calls!*
    v_33 = cons(v_34, v_33);
    env = stack[-1];
    setvalue(basic_elt(env, 4), v_33); // calls!*
    goto v_12;
v_12:
    v_33 = stack[0];
    v_33 = ncons(v_33);
    env = stack[-1];
    v_34 = basic_elt(env, 1); // cinthis
        return Lflag(nil, v_33, v_34);
v_7:
    v_33 = nil;
    goto v_5;
    v_33 = nil;
v_5:
    return onevalue(v_33);
}



// Code for getrtype2

static LispObject CC_getrtype2(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_68 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // vecp
    v_68 = (*qfn1(fn))(fn, v_68);
    }
    env = stack[-1];
    if (v_68 == nil) goto v_10;
    v_68 = basic_elt(env, 1); // !3vector
    goto v_8;
v_10:
    v_68 = stack[0];
    if (!car_legal(v_68)) v_68 = carerror(v_68); else
    v_68 = car(v_68);
    if (!symbolp(v_68)) v_68 = nil;
    else { v_68 = qfastgets(v_68);
           if (v_68 != nil) { v_68 = elt(v_68, 2); // rtype
#ifdef RECORD_GET
             if (v_68 != SPID_NOPROP)
                record_get(elt(fastget_names, 2), 1);
             else record_get(elt(fastget_names, 2), 0),
                v_68 = nil; }
           else record_get(elt(fastget_names, 2), 0); }
#else
             if (v_68 == SPID_NOPROP) v_68 = nil; }}
#endif
    v_69 = v_68;
    if (v_68 == nil) goto v_15;
    v_68 = v_69;
    if (!symbolp(v_68)) v_68 = nil;
    else { v_68 = qfastgets(v_68);
           if (v_68 != nil) { v_68 = elt(v_68, 19); // rtypefn
#ifdef RECORD_GET
             if (v_68 != SPID_NOPROP)
                record_get(elt(fastget_names, 19), 1);
             else record_get(elt(fastget_names, 19), 0),
                v_68 = nil; }
           else record_get(elt(fastget_names, 19), 0); }
#else
             if (v_68 == SPID_NOPROP) v_68 = nil; }}
#endif
    v_69 = v_68;
    if (v_68 == nil) goto v_15;
    v_68 = stack[0];
    if (!car_legal(v_68)) v_68 = cdrerror(v_68); else
    v_68 = cdr(v_68);
        return Lapply1(nil, v_69, v_68);
v_15:
    v_68 = stack[0];
    if (!car_legal(v_68)) v_68 = carerror(v_68); else
    v_68 = car(v_68);
    if (!symbolp(v_68)) v_68 = nil;
    else { v_68 = qfastgets(v_68);
           if (v_68 != nil) { v_68 = elt(v_68, 19); // rtypefn
#ifdef RECORD_GET
             if (v_68 != SPID_NOPROP)
                record_get(elt(fastget_names, 19), 1);
             else record_get(elt(fastget_names, 19), 0),
                v_68 = nil; }
           else record_get(elt(fastget_names, 19), 0); }
#else
             if (v_68 == SPID_NOPROP) v_68 = nil; }}
#endif
    v_69 = v_68;
    if (v_68 == nil) goto v_28;
    v_68 = stack[0];
    if (!car_legal(v_68)) v_68 = cdrerror(v_68); else
    v_68 = cdr(v_68);
        return Lapply1(nil, v_69, v_68);
v_28:
    v_68 = stack[0];
    if (!car_legal(v_68)) v_69 = carerror(v_68); else
    v_69 = car(v_68);
    v_68 = basic_elt(env, 2); // matmapfn
    v_68 = Lflagp(nil, v_69, v_68);
    env = stack[-1];
    if (v_68 == nil) goto v_41;
    v_68 = stack[0];
    if (!car_legal(v_68)) v_68 = cdrerror(v_68); else
    v_68 = cdr(v_68);
    if (v_68 == nil) goto v_48;
    else goto v_49;
v_48:
    v_68 = nil;
    goto v_47;
v_49:
    v_68 = stack[0];
    if (!car_legal(v_68)) v_68 = cdrerror(v_68); else
    v_68 = cdr(v_68);
    if (!car_legal(v_68)) v_68 = carerror(v_68); else
    v_68 = car(v_68);
    {   LispObject fn = basic_elt(env, 5); // getrtype
    v_69 = (*qfn1(fn))(fn, v_68);
    }
    env = stack[-1];
    v_68 = basic_elt(env, 3); // matrix
    v_68 = (v_69 == v_68 ? lisp_true : nil);
    goto v_47;
    v_68 = nil;
v_47:
    goto v_39;
v_41:
    v_68 = nil;
    goto v_39;
    v_68 = nil;
v_39:
    if (v_68 == nil) goto v_37;
    v_68 = basic_elt(env, 3); // matrix
    goto v_8;
v_37:
    v_68 = nil;
    goto v_8;
    v_68 = nil;
v_8:
    return onevalue(v_68);
}



// Code for maxdeg

static LispObject CC_maxdeg(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
v_8:
    v_32 = stack[-1];
    if (v_32 == nil) goto v_11;
    else goto v_12;
v_11:
    v_32 = stack[0];
    goto v_7;
v_12:
    v_32 = stack[-1];
    if (!car_legal(v_32)) v_32 = carerror(v_32); else
    v_32 = car(v_32);
    if (!car_legal(v_32)) v_33 = cdrerror(v_32); else
    v_33 = cdr(v_32);
    v_32 = stack[0];
    if (!car_legal(v_32)) v_32 = cdrerror(v_32); else
    v_32 = cdr(v_32);
    v_32 = static_cast<LispObject>(greaterp2(v_33, v_32));
    v_32 = v_32 ? lisp_true : nil;
    env = stack[-2];
    if (v_32 == nil) goto v_16;
    v_32 = stack[-1];
    if (!car_legal(v_32)) v_32 = cdrerror(v_32); else
    v_32 = cdr(v_32);
    v_33 = v_32;
    v_32 = stack[-1];
    if (!car_legal(v_32)) v_32 = carerror(v_32); else
    v_32 = car(v_32);
    stack[0] = v_32;
    v_32 = v_33;
    stack[-1] = v_32;
    goto v_8;
v_16:
    v_32 = stack[-1];
    if (!car_legal(v_32)) v_32 = cdrerror(v_32); else
    v_32 = cdr(v_32);
    stack[-1] = v_32;
    goto v_8;
    v_32 = nil;
v_7:
    return onevalue(v_32);
}



// Code for symbollessp

static LispObject CC_symbollessp(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_27 = v_28;
    if (v_27 == nil) goto v_7;
    else goto v_8;
v_7:
    v_27 = nil;
    goto v_6;
v_8:
    v_27 = v_29;
    if (v_27 == nil) goto v_11;
    else goto v_12;
v_11:
    v_27 = lisp_true;
    goto v_6;
v_12:
    v_27 = qvalue(basic_elt(env, 1)); // wukord!*
    if (v_27 == nil) goto v_16;
    v_27 = v_29;
    {
        LispObject fn = basic_elt(env, 2); // wuorderp
        return (*qfn2(fn))(fn, v_27, v_28);
    }
v_16:
    v_27 = v_29;
    v_27 = Lorderp(nil, v_27, v_28);
    v_27 = (v_27 == nil ? lisp_true : nil);
    goto v_6;
    v_27 = nil;
v_6:
    return onevalue(v_27);
}



// Code for multsq

static LispObject CC_multsq(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_86, v_87;
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
    v_86 = stack[-3];
    if (!car_legal(v_86)) v_86 = carerror(v_86); else
    v_86 = car(v_86);
    if (v_86 == nil) goto v_11;
    else goto v_12;
v_11:
    v_86 = lisp_true;
    goto v_10;
v_12:
    v_86 = stack[-2];
    if (!car_legal(v_86)) v_86 = carerror(v_86); else
    v_86 = car(v_86);
    v_86 = (v_86 == nil ? lisp_true : nil);
    goto v_10;
    v_86 = nil;
v_10:
    if (v_86 == nil) goto v_8;
    v_87 = nil;
    v_86 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_87, v_86);
v_8:
    v_86 = stack[-3];
    if (!car_legal(v_86)) v_87 = cdrerror(v_86); else
    v_87 = cdr(v_86);
    v_86 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_87 == v_86) goto v_28;
    else goto v_29;
v_28:
    v_86 = stack[-2];
    if (!car_legal(v_86)) v_87 = cdrerror(v_86); else
    v_87 = cdr(v_86);
    v_86 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_86 = (v_87 == v_86 ? lisp_true : nil);
    goto v_27;
v_29:
    v_86 = nil;
    goto v_27;
    v_86 = nil;
v_27:
    if (v_86 == nil) goto v_25;
    v_86 = stack[-3];
    if (!car_legal(v_86)) v_87 = carerror(v_86); else
    v_87 = car(v_86);
    v_86 = stack[-2];
    if (!car_legal(v_86)) v_86 = carerror(v_86); else
    v_86 = car(v_86);
    {   LispObject fn = basic_elt(env, 1); // multf
    v_87 = (*qfn2(fn))(fn, v_87, v_86);
    }
    v_86 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_87, v_86);
v_25:
    v_86 = stack[-3];
    if (!car_legal(v_86)) v_87 = carerror(v_86); else
    v_87 = car(v_86);
    v_86 = stack[-2];
    if (!car_legal(v_86)) v_86 = cdrerror(v_86); else
    v_86 = cdr(v_86);
    {   LispObject fn = basic_elt(env, 2); // gcdf
    v_86 = (*qfn2(fn))(fn, v_87, v_86);
    }
    env = stack[-5];
    stack[-4] = v_86;
    v_86 = stack[-2];
    if (!car_legal(v_86)) v_87 = carerror(v_86); else
    v_87 = car(v_86);
    v_86 = stack[-3];
    if (!car_legal(v_86)) v_86 = cdrerror(v_86); else
    v_86 = cdr(v_86);
    {   LispObject fn = basic_elt(env, 2); // gcdf
    v_86 = (*qfn2(fn))(fn, v_87, v_86);
    }
    env = stack[-5];
    stack[-1] = v_86;
    v_86 = stack[-3];
    if (!car_legal(v_86)) v_87 = carerror(v_86); else
    v_87 = car(v_86);
    v_86 = stack[-4];
    {   LispObject fn = basic_elt(env, 3); // quotf!-fail
    stack[0] = (*qfn2(fn))(fn, v_87, v_86);
    }
    env = stack[-5];
    v_86 = stack[-2];
    if (!car_legal(v_86)) v_87 = carerror(v_86); else
    v_87 = car(v_86);
    v_86 = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // quotf!-fail
    v_86 = (*qfn2(fn))(fn, v_87, v_86);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 1); // multf
    v_86 = (*qfn2(fn))(fn, stack[0], v_86);
    }
    env = stack[-5];
    stack[0] = v_86;
    v_86 = stack[-3];
    if (!car_legal(v_86)) v_87 = cdrerror(v_86); else
    v_87 = cdr(v_86);
    v_86 = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // quotf!-fail
    stack[-1] = (*qfn2(fn))(fn, v_87, v_86);
    }
    env = stack[-5];
    v_86 = stack[-2];
    if (!car_legal(v_86)) v_87 = cdrerror(v_86); else
    v_87 = cdr(v_86);
    v_86 = stack[-4];
    {   LispObject fn = basic_elt(env, 3); // quotf!-fail
    v_86 = (*qfn2(fn))(fn, v_87, v_86);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 1); // multf
    v_86 = (*qfn2(fn))(fn, stack[-1], v_86);
    }
    env = stack[-5];
    stack[-4] = v_86;
    v_87 = stack[0];
    v_86 = stack[-4];
    v_86 = cons(v_87, v_86);
    env = stack[-5];
    {
        LispObject fn = basic_elt(env, 4); // canonsq
        return (*qfn1(fn))(fn, v_86);
    }
    goto v_6;
    v_86 = nil;
v_6:
    return onevalue(v_86);
}



// Code for rl_smupdknowl

static LispObject CC_rl_smupdknowl(LispObject env, LispObject v_2,
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
    stack[0] = qvalue(basic_elt(env, 1)); // rl_smupdknowl!*
    v_14 = list4(v_17, v_16, v_15, v_14);
    env = stack[-1];
    {
        LispObject v_19 = stack[0];
        LispObject fn = basic_elt(env, 2); // apply
        return (*qfn2(fn))(fn, v_19, v_14);
    }
}



// Code for ibalp_varlt

static LispObject CC_ibalp_varlt(LispObject env,
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
        LispObject fn = basic_elt(env, 1); // ibalp_varlt1
        return (*qfn2(fn))(fn, v_8, v_7);
    }
}



// Code for get!-print!-name

static LispObject CC_getKprintKname(LispObject env,
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
    if (symbolp(v_19)) goto v_10;
    v_19 = nil;
    goto v_8;
v_10:
    v_19 = v_18;
    if (!symbolp(v_19)) v_19 = nil;
    else { v_19 = qfastgets(v_19);
           if (v_19 != nil) { v_19 = elt(v_19, 12); // oldnam
#ifdef RECORD_GET
             if (v_19 != SPID_NOPROP)
                record_get(elt(fastget_names, 12), 1);
             else record_get(elt(fastget_names, 12), 0),
                v_19 = nil; }
           else record_get(elt(fastget_names, 12), 0); }
#else
             if (v_19 == SPID_NOPROP) v_19 = nil; }}
#endif
    goto v_8;
    v_19 = nil;
v_8:
    if (v_19 == nil) goto v_6;
    else goto v_5;
v_6:
    v_19 = v_18;
v_5:
    return onevalue(v_19);
}



// Code for bftrim!:

static LispObject CC_bftrimT(LispObject env,
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
    v_11 = qvalue(basic_elt(env, 1)); // !:bprec!:
    v_10 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_10 = difference2(v_11, v_10);
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // round!:mt
    v_10 = (*qfn2(fn))(fn, stack[0], v_10);
    }
    env = stack[-1];
    {
        LispObject fn = basic_elt(env, 3); // normbf
        return (*qfn1(fn))(fn, v_10);
    }
}



// Code for on1

static LispObject CC_on1(LispObject env,
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
        LispObject fn = basic_elt(env, 1); // onoff
        return (*qfn2(fn))(fn, v_8, v_7);
    }
}



// Code for bcint2op

static LispObject CC_bcint2op(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_90, v_91, v_92, v_93, v_94;
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
    v_94 = v_4;
    v_92 = v_3;
    v_93 = v_2;
// end of prologue
    v_90 = qvalue(basic_elt(env, 1)); // dmode!*
    if (v_90 == nil) goto v_12;
    else goto v_13;
v_12:
    v_91 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_90 = v_93;
    if (!car_legal(v_90)) v_90 = cdrerror(v_90); else
    v_90 = cdr(v_90);
    if (v_91 == v_90) goto v_17;
    else goto v_18;
v_17:
    v_90 = v_93;
    if (!car_legal(v_90)) v_90 = carerror(v_90); else
    v_90 = car(v_90);
    v_93 = v_90;
    if (is_number(v_90)) goto v_25;
    v_90 = nil;
    goto v_23;
v_25:
    v_91 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_90 = v_92;
    if (!car_legal(v_90)) v_90 = cdrerror(v_90); else
    v_90 = cdr(v_90);
    if (v_91 == v_90) goto v_33;
    else goto v_34;
v_33:
    v_90 = v_92;
    if (!car_legal(v_90)) v_90 = carerror(v_90); else
    v_90 = car(v_90);
    v_92 = v_90;
    if (is_number(v_90)) goto v_41;
    v_90 = nil;
    goto v_39;
v_41:
    v_91 = v_94;
    v_90 = basic_elt(env, 2); // times
    if (v_91 == v_90) goto v_49;
    else goto v_50;
v_49:
    v_90 = v_93;
    v_91 = v_92;
    v_90 = times2(v_90, v_91);
    goto v_48;
v_50:
    v_91 = v_94;
    v_90 = basic_elt(env, 3); // plus
    if (v_91 == v_90) goto v_56;
    else goto v_57;
v_56:
    v_90 = v_93;
    v_91 = v_92;
    v_90 = plus2(v_90, v_91);
    goto v_48;
v_57:
    v_90 = v_94;
    v_91 = v_93;
    v_90 = Lapply2(nil, v_90, v_91, v_92);
    goto v_48;
    v_90 = nil;
v_48:
    v_93 = v_90;
    goto v_39;
    v_90 = nil;
v_39:
    goto v_32;
v_34:
    v_90 = nil;
    goto v_32;
    v_90 = nil;
v_32:
    goto v_23;
    v_90 = nil;
v_23:
    goto v_16;
v_18:
    v_90 = nil;
    goto v_16;
    v_90 = nil;
v_16:
    goto v_11;
v_13:
    v_90 = nil;
    goto v_11;
    v_90 = nil;
v_11:
    if (v_90 == nil) goto v_9;
    v_91 = v_93;
    v_90 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_91 == v_90) goto v_81;
    else goto v_82;
v_81:
    v_90 = nil;
    v_91 = v_90;
    goto v_80;
v_82:
    v_90 = v_93;
    v_91 = v_90;
    goto v_80;
    v_91 = nil;
v_80:
    v_90 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_91, v_90);
v_9:
    v_90 = nil;
    return onevalue(v_90);
}



// Code for atomf

static LispObject CC_atomf(LispObject env,
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
    if (!consp(v_16)) goto v_6;
    else goto v_7;
v_6:
    v_15 = lisp_true;
    goto v_5;
v_7:
    if (!car_legal(v_15)) v_15 = carerror(v_15); else
    v_15 = car(v_15);
    if (!symbolp(v_15)) v_15 = nil;
    else { v_15 = qfastgets(v_15);
           if (v_15 != nil) { v_15 = elt(v_15, 16); // indexvar
#ifdef RECORD_GET
             if (v_15 == SPID_NOPROP)
                record_get(elt(fastget_names, 16), 0),
                v_15 = nil;
             else record_get(elt(fastget_names, 16), 1),
                v_15 = lisp_true; }
           else record_get(elt(fastget_names, 16), 0); }
#else
             if (v_15 == SPID_NOPROP) v_15 = nil; else v_15 = lisp_true; }}
#endif
    goto v_5;
    v_15 = nil;
v_5:
    return onevalue(v_15);
}



// Code for negsq

static LispObject CC_negsq(LispObject env,
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
    stack[0] = v_2;
// end of prologue
    v_10 = stack[0];
    if (!car_legal(v_10)) v_10 = carerror(v_10); else
    v_10 = car(v_10);
    {   LispObject fn = basic_elt(env, 1); // negf
    v_11 = (*qfn1(fn))(fn, v_10);
    }
    v_10 = stack[0];
    if (!car_legal(v_10)) v_10 = cdrerror(v_10); else
    v_10 = cdr(v_10);
    return cons(v_11, v_10);
}



// Code for hasonephysop

static LispObject CC_hasonephysop(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // physopp!*
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



// Code for arraychk

static LispObject CC_arraychk(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_13;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_13 = v_2;
// end of prologue
    if (v_13 == nil) goto v_6;
    else goto v_7;
v_6:
    v_13 = basic_elt(env, 1); // array
    goto v_5;
v_7:
    v_13 = nil;
    goto v_5;
    v_13 = nil;
v_5:
    return onevalue(v_13);
}



// Code for fs!:angle!-order

static LispObject CC_fsTangleKorder(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_65, v_66, v_67;
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
    v_65 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-5] = v_65;
    v_66 = stack[-4];
    v_65 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_65 = Lgetv(nil, v_66, v_65);
    env = stack[-6];
    stack[-2] = v_65;
    v_66 = stack[-3];
    v_65 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_65 = Lgetv(nil, v_66, v_65);
    env = stack[-6];
    stack[-1] = v_65;
v_11:
    v_66 = stack[-2];
    v_65 = stack[-5];
    stack[0] = Lgetv(nil, v_66, v_65);
    env = stack[-6];
    v_66 = stack[-1];
    v_65 = stack[-5];
    v_65 = Lgetv(nil, v_66, v_65);
    env = stack[-6];
    v_65 = difference2(stack[0], v_65);
    env = stack[-6];
    v_67 = v_65;
    v_66 = v_67;
    v_65 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_66 == v_65) goto v_29;
    v_66 = v_67;
    v_65 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
        return Lgreaterp_2(nil, v_66, v_65);
v_29:
    v_65 = stack[-5];
    v_65 = add1(v_65);
    env = stack[-6];
    stack[-5] = v_65;
    v_66 = stack[-5];
    v_65 = static_cast<LispObject>(128)+TAG_FIXNUM; // 8
    v_65 = static_cast<LispObject>(lessp2(v_66, v_65));
    v_65 = v_65 ? lisp_true : nil;
    env = stack[-6];
    if (v_65 == nil) goto v_40;
    goto v_11;
v_40:
    v_66 = stack[-4];
    v_65 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[0] = Lgetv(nil, v_66, v_65);
    env = stack[-6];
    v_66 = stack[-3];
    v_65 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_65 = Lgetv(nil, v_66, v_65);
    env = stack[-6];
    if (equal(stack[0], v_65)) goto v_46;
    else goto v_47;
v_46:
    v_65 = nil;
    goto v_45;
v_47:
    v_66 = stack[-4];
    v_65 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_65 = Lgetv(nil, v_66, v_65);
    env = stack[-6];
    v_66 = basic_elt(env, 1); // sin
    if (v_65 == v_66) goto v_55;
    else goto v_56;
v_55:
    v_65 = nil;
    goto v_45;
v_56:
    v_65 = lisp_true;
    goto v_45;
    v_65 = nil;
v_45:
    return onevalue(v_65);
}



// Code for cali_trace

static LispObject CC_cali_trace(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_5;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// end of prologue
    v_5 = basic_elt(env, 1); // cali
    if (!symbolp(v_5)) v_5 = nil;
    else { v_5 = qfastgets(v_5);
           if (v_5 != nil) { v_5 = elt(v_5, 31); // trace
#ifdef RECORD_GET
             if (v_5 != SPID_NOPROP)
                record_get(elt(fastget_names, 31), 1);
             else record_get(elt(fastget_names, 31), 0),
                v_5 = nil; }
           else record_get(elt(fastget_names, 31), 0); }
#else
             if (v_5 == SPID_NOPROP) v_5 = nil; }}
#endif
    return onevalue(v_5);
}



// Code for pcmult

static LispObject CC_pcmult(LispObject env,
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
    if (!car_legal(v_53)) stack[0] = carerror(v_53); else
    stack[0] = car(v_53);
    v_53 = stack[-4];
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    {   LispObject fn = basic_elt(env, 1); // cprod
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
    if (!car_legal(v_53)) stack[0] = carerror(v_53); else
    stack[0] = car(v_53);
    v_53 = stack[-4];
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    {   LispObject fn = basic_elt(env, 1); // cprod
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



// Code for pv_renorm

static LispObject CC_pv_renorm(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_120, v_121;
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
    v_120 = stack[0];
    if (v_120 == nil) goto v_6;
    else goto v_7;
v_6:
    v_120 = nil;
    goto v_5;
v_7:
v_18:
    v_120 = stack[0];
    if (v_120 == nil) goto v_21;
    v_120 = stack[0];
    if (!car_legal(v_120)) v_120 = carerror(v_120); else
    v_120 = car(v_120);
    if (!car_legal(v_120)) v_121 = carerror(v_120); else
    v_121 = car(v_120);
    v_120 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_121 == v_120) goto v_25;
    else goto v_21;
v_25:
    goto v_22;
v_21:
    goto v_17;
v_22:
    v_120 = stack[0];
    if (!car_legal(v_120)) v_120 = cdrerror(v_120); else
    v_120 = cdr(v_120);
    stack[0] = v_120;
    goto v_18;
v_17:
    v_120 = stack[0];
    if (v_120 == nil) goto v_35;
    else goto v_36;
v_35:
    v_120 = nil;
    goto v_15;
v_36:
    v_120 = stack[0];
    if (!car_legal(v_120)) v_120 = carerror(v_120); else
    v_120 = car(v_120);
    if (!car_legal(v_120)) v_121 = carerror(v_120); else
    v_121 = car(v_120);
    v_120 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_120 = static_cast<LispObject>(lessp2(v_121, v_120));
    v_120 = v_120 ? lisp_true : nil;
    env = stack[-4];
    if (v_120 == nil) goto v_42;
    v_120 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // pv_neg
    v_120 = (*qfn1(fn))(fn, v_120);
    }
    env = stack[-4];
    stack[0] = v_120;
    goto v_40;
v_42:
v_40:
    v_120 = stack[0];
    if (!car_legal(v_120)) v_120 = carerror(v_120); else
    v_120 = car(v_120);
    if (!car_legal(v_120)) v_120 = carerror(v_120); else
    v_120 = car(v_120);
    stack[-2] = v_120;
    v_120 = stack[0];
    if (!car_legal(v_120)) v_120 = cdrerror(v_120); else
    v_120 = cdr(v_120);
    stack[-3] = v_120;
v_57:
    v_120 = stack[-3];
    if (v_120 == nil) goto v_60;
    v_121 = stack[-2];
    v_120 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_121 == v_120) goto v_60;
    goto v_61;
v_60:
    goto v_56;
v_61:
    v_121 = stack[-2];
    v_120 = stack[-3];
    if (!car_legal(v_120)) v_120 = carerror(v_120); else
    v_120 = car(v_120);
    if (!car_legal(v_120)) v_120 = carerror(v_120); else
    v_120 = car(v_120);
    {   LispObject fn = basic_elt(env, 2); // gcdf!*
    v_120 = (*qfn2(fn))(fn, v_121, v_120);
    }
    env = stack[-4];
    stack[-2] = v_120;
    v_120 = stack[-3];
    if (!car_legal(v_120)) v_120 = cdrerror(v_120); else
    v_120 = cdr(v_120);
    stack[-3] = v_120;
    goto v_57;
v_56:
    v_120 = nil;
    stack[-3] = v_120;
    v_120 = stack[0];
    stack[-1] = v_120;
v_80:
    v_120 = stack[-1];
    if (v_120 == nil) goto v_84;
    else goto v_85;
v_84:
    goto v_79;
v_85:
    v_120 = stack[-1];
    if (!car_legal(v_120)) v_120 = carerror(v_120); else
    v_120 = car(v_120);
    stack[0] = v_120;
    v_120 = stack[0];
    if (!car_legal(v_120)) v_121 = carerror(v_120); else
    v_121 = car(v_120);
    v_120 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_121 == v_120) goto v_94;
    v_121 = stack[-2];
    v_120 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_121 == v_120) goto v_101;
    else goto v_102;
v_101:
    v_120 = stack[0];
    v_121 = v_120;
    goto v_100;
v_102:
    v_120 = stack[0];
    if (!car_legal(v_120)) v_121 = carerror(v_120); else
    v_121 = car(v_120);
    v_120 = stack[-2];
    v_121 = quot2(v_121, v_120);
    env = stack[-4];
    v_120 = stack[0];
    if (!car_legal(v_120)) v_120 = cdrerror(v_120); else
    v_120 = cdr(v_120);
    v_120 = cons(v_121, v_120);
    env = stack[-4];
    v_121 = v_120;
    goto v_100;
    v_121 = nil;
v_100:
    v_120 = stack[-3];
    v_120 = cons(v_121, v_120);
    env = stack[-4];
    stack[-3] = v_120;
    goto v_92;
v_94:
v_92:
    v_120 = stack[-1];
    if (!car_legal(v_120)) v_120 = cdrerror(v_120); else
    v_120 = cdr(v_120);
    stack[-1] = v_120;
    goto v_80;
v_79:
    v_120 = stack[-3];
        return Lnreverse(nil, v_120);
v_15:
    goto v_5;
    v_120 = nil;
v_5:
    return onevalue(v_120);
}



// Code for plus!-mod!-p

static LispObject CC_plusKmodKp(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_194, v_195, v_196;
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
    v_194 = stack[-1];
    if (v_194 == nil) goto v_14;
    else goto v_15;
v_14:
    v_194 = stack[0];
    v_195 = v_194;
    goto v_11;
v_15:
    v_194 = stack[0];
    if (v_194 == nil) goto v_18;
    else goto v_19;
v_18:
    v_194 = stack[-1];
    v_195 = v_194;
    goto v_11;
v_19:
    v_194 = stack[-1];
    if (!consp(v_194)) goto v_26;
    else goto v_27;
v_26:
    v_194 = lisp_true;
    goto v_25;
v_27:
    v_194 = stack[-1];
    if (!car_legal(v_194)) v_194 = carerror(v_194); else
    v_194 = car(v_194);
    v_194 = (consp(v_194) ? nil : lisp_true);
    goto v_25;
    v_194 = nil;
v_25:
    if (v_194 == nil) goto v_23;
    v_194 = stack[0];
    if (!consp(v_194)) goto v_41;
    else goto v_42;
v_41:
    v_194 = lisp_true;
    goto v_40;
v_42:
    v_194 = stack[0];
    if (!car_legal(v_194)) v_194 = carerror(v_194); else
    v_194 = car(v_194);
    v_194 = (consp(v_194) ? nil : lisp_true);
    goto v_40;
    v_194 = nil;
v_40:
    if (v_194 == nil) goto v_38;
    v_195 = stack[-1];
    v_194 = stack[0];
    {   std::intptr_t w = int_of_fixnum(v_195) + int_of_fixnum(v_194);
        if (w >= current_modulus) w -= current_modulus;
        v_194 = fixnum_of_int(w);
    }
    {   LispObject fn = basic_elt(env, 1); // !*n2f
    v_194 = (*qfn1(fn))(fn, v_194);
    }
    v_195 = v_194;
    goto v_11;
v_38:
    v_194 = stack[0];
    if (!car_legal(v_194)) v_195 = carerror(v_194); else
    v_195 = car(v_194);
    v_194 = stack[-2];
    v_194 = cons(v_195, v_194);
    env = stack[-3];
    stack[-2] = v_194;
    v_194 = stack[0];
    if (!car_legal(v_194)) v_194 = cdrerror(v_194); else
    v_194 = cdr(v_194);
    stack[0] = v_194;
    goto v_10;
    goto v_13;
v_23:
    v_194 = stack[0];
    if (!consp(v_194)) goto v_66;
    else goto v_67;
v_66:
    v_194 = lisp_true;
    goto v_65;
v_67:
    v_194 = stack[0];
    if (!car_legal(v_194)) v_194 = carerror(v_194); else
    v_194 = car(v_194);
    v_194 = (consp(v_194) ? nil : lisp_true);
    goto v_65;
    v_194 = nil;
v_65:
    if (v_194 == nil) goto v_63;
    v_194 = stack[-1];
    if (!car_legal(v_194)) v_195 = carerror(v_194); else
    v_195 = car(v_194);
    v_194 = stack[-2];
    v_194 = cons(v_195, v_194);
    env = stack[-3];
    stack[-2] = v_194;
    v_194 = stack[-1];
    if (!car_legal(v_194)) v_194 = cdrerror(v_194); else
    v_194 = cdr(v_194);
    stack[-1] = v_194;
    goto v_10;
v_63:
    v_194 = stack[-1];
    if (!car_legal(v_194)) v_194 = carerror(v_194); else
    v_194 = car(v_194);
    if (!car_legal(v_194)) v_195 = carerror(v_194); else
    v_195 = car(v_194);
    v_194 = stack[0];
    if (!car_legal(v_194)) v_194 = carerror(v_194); else
    v_194 = car(v_194);
    if (!car_legal(v_194)) v_194 = carerror(v_194); else
    v_194 = car(v_194);
    if (equal(v_195, v_194)) goto v_81;
    else goto v_82;
v_81:
    v_194 = stack[-1];
    if (!car_legal(v_194)) v_194 = carerror(v_194); else
    v_194 = car(v_194);
    if (!car_legal(v_194)) v_195 = cdrerror(v_194); else
    v_195 = cdr(v_194);
    v_194 = stack[0];
    if (!car_legal(v_194)) v_194 = carerror(v_194); else
    v_194 = car(v_194);
    if (!car_legal(v_194)) v_194 = cdrerror(v_194); else
    v_194 = cdr(v_194);
    {   LispObject fn = basic_elt(env, 0); // plus!-mod!-p
    v_194 = (*qfn2(fn))(fn, v_195, v_194);
    }
    env = stack[-3];
    v_195 = v_194;
    if (v_195 == nil) goto v_99;
    v_195 = stack[-1];
    if (!car_legal(v_195)) v_195 = carerror(v_195); else
    v_195 = car(v_195);
    if (!car_legal(v_195)) v_196 = carerror(v_195); else
    v_196 = car(v_195);
    v_195 = v_194;
    v_194 = stack[-2];
    v_194 = acons(v_196, v_195, v_194);
    env = stack[-3];
    stack[-2] = v_194;
    goto v_97;
v_99:
v_97:
    v_194 = stack[-1];
    if (!car_legal(v_194)) v_194 = cdrerror(v_194); else
    v_194 = cdr(v_194);
    stack[-1] = v_194;
    v_194 = stack[0];
    if (!car_legal(v_194)) v_194 = cdrerror(v_194); else
    v_194 = cdr(v_194);
    stack[0] = v_194;
    goto v_10;
v_82:
    v_194 = stack[-1];
    if (!car_legal(v_194)) v_194 = carerror(v_194); else
    v_194 = car(v_194);
    if (!car_legal(v_194)) v_194 = carerror(v_194); else
    v_194 = car(v_194);
    if (!car_legal(v_194)) v_195 = carerror(v_194); else
    v_195 = car(v_194);
    v_194 = stack[0];
    if (!car_legal(v_194)) v_194 = carerror(v_194); else
    v_194 = car(v_194);
    if (!car_legal(v_194)) v_194 = carerror(v_194); else
    v_194 = car(v_194);
    if (!car_legal(v_194)) v_194 = carerror(v_194); else
    v_194 = car(v_194);
    if (equal(v_195, v_194)) goto v_116;
    else goto v_117;
v_116:
    v_194 = stack[-1];
    if (!car_legal(v_194)) v_194 = carerror(v_194); else
    v_194 = car(v_194);
    if (!car_legal(v_194)) v_194 = carerror(v_194); else
    v_194 = car(v_194);
    if (!car_legal(v_194)) v_195 = cdrerror(v_194); else
    v_195 = cdr(v_194);
    v_194 = stack[0];
    if (!car_legal(v_194)) v_194 = carerror(v_194); else
    v_194 = car(v_194);
    if (!car_legal(v_194)) v_194 = carerror(v_194); else
    v_194 = car(v_194);
    if (!car_legal(v_194)) v_194 = cdrerror(v_194); else
    v_194 = cdr(v_194);
    v_194 = (static_cast<std::intptr_t>(v_195) > static_cast<std::intptr_t>(v_194)) ? lisp_true : nil;
    goto v_115;
v_117:
    v_194 = nil;
    goto v_115;
    v_194 = nil;
v_115:
    if (v_194 == nil) goto v_113;
    else goto v_111;
v_113:
    v_194 = stack[-1];
    if (!car_legal(v_194)) v_194 = carerror(v_194); else
    v_194 = car(v_194);
    if (!car_legal(v_194)) v_194 = carerror(v_194); else
    v_194 = car(v_194);
    if (!car_legal(v_194)) v_195 = carerror(v_194); else
    v_195 = car(v_194);
    v_194 = stack[0];
    if (!car_legal(v_194)) v_194 = carerror(v_194); else
    v_194 = car(v_194);
    if (!car_legal(v_194)) v_194 = carerror(v_194); else
    v_194 = car(v_194);
    if (!car_legal(v_194)) v_194 = carerror(v_194); else
    v_194 = car(v_194);
    if (equal(v_195, v_194)) goto v_142;
    v_194 = stack[-1];
    if (!car_legal(v_194)) v_194 = carerror(v_194); else
    v_194 = car(v_194);
    if (!car_legal(v_194)) v_194 = carerror(v_194); else
    v_194 = car(v_194);
    if (!car_legal(v_194)) v_195 = carerror(v_194); else
    v_195 = car(v_194);
    v_194 = stack[0];
    if (!car_legal(v_194)) v_194 = carerror(v_194); else
    v_194 = car(v_194);
    if (!car_legal(v_194)) v_194 = carerror(v_194); else
    v_194 = car(v_194);
    if (!car_legal(v_194)) v_194 = carerror(v_194); else
    v_194 = car(v_194);
    {   LispObject fn = basic_elt(env, 2); // ordop
    v_194 = (*qfn2(fn))(fn, v_195, v_194);
    }
    env = stack[-3];
    goto v_140;
v_142:
    v_194 = nil;
    goto v_140;
    v_194 = nil;
v_140:
    if (v_194 == nil) goto v_138;
    else goto v_111;
v_138:
    goto v_112;
v_111:
    v_194 = stack[-1];
    if (!car_legal(v_194)) v_195 = carerror(v_194); else
    v_195 = car(v_194);
    v_194 = stack[-2];
    v_194 = cons(v_195, v_194);
    env = stack[-3];
    stack[-2] = v_194;
    v_194 = stack[-1];
    if (!car_legal(v_194)) v_194 = cdrerror(v_194); else
    v_194 = cdr(v_194);
    stack[-1] = v_194;
    goto v_10;
v_112:
    v_194 = stack[0];
    if (!car_legal(v_194)) v_195 = carerror(v_194); else
    v_195 = car(v_194);
    v_194 = stack[-2];
    v_194 = cons(v_195, v_194);
    env = stack[-3];
    stack[-2] = v_194;
    v_194 = stack[0];
    if (!car_legal(v_194)) v_194 = cdrerror(v_194); else
    v_194 = cdr(v_194);
    stack[0] = v_194;
    goto v_10;
v_13:
v_11:
v_179:
    v_194 = stack[-2];
    if (v_194 == nil) goto v_182;
    else goto v_183;
v_182:
    goto v_178;
v_183:
    v_194 = stack[-2];
    if (!car_legal(v_194)) v_194 = cdrerror(v_194); else
    v_194 = cdr(v_194);
    stack[-1] = v_194;
    v_194 = stack[-2];
    if (!car_legal(v_194)) rplacd_fails(v_194);
    setcdr(v_194, v_195);
    v_194 = stack[-2];
    v_195 = v_194;
    v_194 = stack[-1];
    stack[-2] = v_194;
    goto v_179;
v_178:
    v_194 = v_195;
    return onevalue(v_194);
}



// Code for split_form

static LispObject CC_split_form(LispObject env,
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
    stack[-1] = v_12;
    stack[0] = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_12 = nil;
    v_12 = ncons(v_12);
    env = stack[-3];
    v_12 = ncons(v_12);
    env = stack[-3];
    {
        LispObject v_17 = stack[-2];
        LispObject v_18 = stack[-1];
        LispObject v_19 = stack[0];
        LispObject fn = basic_elt(env, 1); // split_f
        return (*qfn4up(fn))(fn, v_17, v_18, v_19, v_12);
    }
}



// Code for lalr_goto

static LispObject CC_lalr_goto(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    v_22 = v_3;
    v_23 = v_2;
// end of prologue
    stack[0] = v_23;
    v_23 = v_22;
    v_22 = qvalue(basic_elt(env, 1)); // goto_table
    {   LispObject fn = basic_elt(env, 2); // gethash
    v_22 = (*qfn2(fn))(fn, v_23, v_22);
    }
    v_22 = Lassoc(nil, stack[0], v_22);
    v_23 = v_22;
    if (v_22 == nil) goto v_11;
    v_22 = v_23;
    if (!car_legal(v_22)) v_22 = cdrerror(v_22); else
    v_22 = cdr(v_22);
    goto v_7;
v_11:
    v_22 = nil;
    goto v_7;
    v_22 = nil;
v_7:
    return onevalue(v_22);
}



// Code for toknump

static LispObject CC_toknump(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_22, v_23, v_24;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_24 = v_2;
// end of prologue
    v_22 = v_24;
    v_22 = (is_number(v_22) ? lisp_true : nil);
    if (v_22 == nil) goto v_6;
    else goto v_5;
v_6:
    v_23 = v_24;
    v_22 = basic_elt(env, 1); // !:dn!:
    if (!consp(v_23)) goto v_12;
    v_23 = car(v_23);
    if (v_23 == v_22) goto v_11;
    else goto v_12;
v_11:
    v_22 = lisp_true;
    goto v_10;
v_12:
    v_22 = v_24;
    v_23 = basic_elt(env, 2); // !:int!:
        return Leqcar(nil, v_22, v_23);
    v_22 = nil;
v_10:
v_5:
    return onevalue(v_22);
}



// Code for getrtype

static LispObject CC_getrtype(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_117, v_118, v_119;
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
    v_117 = stack[0];
    if (v_117 == nil) goto v_10;
    else goto v_11;
v_10:
    v_117 = nil;
    goto v_9;
v_11:
    v_117 = stack[0];
    if (!consp(v_117)) goto v_14;
    else goto v_15;
v_14:
    v_117 = stack[0];
    if (symbolp(v_117)) goto v_20;
    v_117 = stack[0];
    if (is_number(v_117)) goto v_25;
    v_117 = stack[0];
    {
        LispObject fn = basic_elt(env, 5); // getrtype1
        return (*qfn1(fn))(fn, v_117);
    }
v_25:
    v_117 = nil;
    goto v_23;
    v_117 = nil;
v_23:
    goto v_18;
v_20:
    v_117 = stack[0];
    if (!symbolp(v_117)) v_117 = nil;
    else { v_117 = qfastgets(v_117);
           if (v_117 != nil) { v_117 = elt(v_117, 17); // share
#ifdef RECORD_GET
             if (v_117 == SPID_NOPROP)
                record_get(elt(fastget_names, 17), 0),
                v_117 = nil;
             else record_get(elt(fastget_names, 17), 1),
                v_117 = lisp_true; }
           else record_get(elt(fastget_names, 17), 0); }
#else
             if (v_117 == SPID_NOPROP) v_117 = nil; else v_117 = lisp_true; }}
#endif
    if (v_117 == nil) goto v_33;
    v_117 = stack[0];
    {   LispObject fn = basic_elt(env, 6); // eval
    v_118 = (*qfn1(fn))(fn, v_117);
    }
    env = stack[-1];
    v_119 = v_118;
    v_117 = stack[0];
    if (v_118 == v_117) goto v_38;
    else goto v_39;
v_38:
    v_117 = nil;
    goto v_37;
v_39:
    v_117 = v_119;
    stack[0] = v_117;
    goto v_1;
    v_117 = nil;
v_37:
    goto v_18;
v_33:
    v_117 = stack[0];
    if (!symbolp(v_117)) v_117 = nil;
    else { v_117 = qfastgets(v_117);
           if (v_117 != nil) { v_117 = elt(v_117, 4); // avalue
#ifdef RECORD_GET
             if (v_117 != SPID_NOPROP)
                record_get(elt(fastget_names, 4), 1);
             else record_get(elt(fastget_names, 4), 0),
                v_117 = nil; }
           else record_get(elt(fastget_names, 4), 0); }
#else
             if (v_117 == SPID_NOPROP) v_117 = nil; }}
#endif
    v_119 = v_117;
    if (v_117 == nil) goto v_50;
    v_117 = v_119;
    if (!car_legal(v_117)) v_118 = carerror(v_117); else
    v_118 = car(v_117);
    v_117 = basic_elt(env, 1); // (scalar generic)
    v_117 = Lmemq(nil, v_118, v_117);
    if (v_117 == nil) goto v_54;
    else goto v_50;
v_54:
    goto v_48;
v_50:
    v_117 = stack[0];
    if (!symbolp(v_117)) v_117 = nil;
    else { v_117 = qfastgets(v_117);
           if (v_117 != nil) { v_117 = elt(v_117, 2); // rtype
#ifdef RECORD_GET
             if (v_117 != SPID_NOPROP)
                record_get(elt(fastget_names, 2), 1);
             else record_get(elt(fastget_names, 2), 0),
                v_117 = nil; }
           else record_get(elt(fastget_names, 2), 0); }
#else
             if (v_117 == SPID_NOPROP) v_117 = nil; }}
#endif
    v_119 = v_117;
    if (v_117 == nil) goto v_59;
    v_117 = v_119;
    v_117 = ncons(v_117);
    v_119 = v_117;
    if (v_117 == nil) goto v_59;
    goto v_48;
v_59:
    goto v_49;
v_48:
    v_117 = v_119;
    if (!car_legal(v_117)) v_117 = carerror(v_117); else
    v_117 = car(v_117);
    if (!symbolp(v_117)) v_117 = nil;
    else { v_117 = qfastgets(v_117);
           if (v_117 != nil) { v_117 = elt(v_117, 19); // rtypefn
#ifdef RECORD_GET
             if (v_117 != SPID_NOPROP)
                record_get(elt(fastget_names, 19), 1);
             else record_get(elt(fastget_names, 19), 0),
                v_117 = nil; }
           else record_get(elt(fastget_names, 19), 0); }
#else
             if (v_117 == SPID_NOPROP) v_117 = nil; }}
#endif
    v_118 = v_117;
    if (v_117 == nil) goto v_69;
    v_117 = nil;
        return Lapply1(nil, v_118, v_117);
v_69:
    v_117 = v_119;
    if (!car_legal(v_117)) v_117 = carerror(v_117); else
    v_117 = car(v_117);
    goto v_67;
    v_117 = nil;
v_67:
    goto v_18;
v_49:
    v_117 = nil;
    goto v_18;
    v_117 = nil;
v_18:
    goto v_9;
v_15:
    v_117 = stack[0];
    if (!car_legal(v_117)) v_117 = carerror(v_117); else
    v_117 = car(v_117);
    if (symbolp(v_117)) goto v_84;
    v_117 = nil;
    goto v_9;
v_84:
    v_117 = stack[0];
    {   LispObject fn = basic_elt(env, 7); // physopp!*
    v_117 = (*qfn1(fn))(fn, v_117);
    }
    env = stack[-1];
    if (v_117 == nil) goto v_89;
    v_117 = basic_elt(env, 2); // physop
    goto v_9;
v_89:
    v_117 = stack[0];
    if (!car_legal(v_117)) v_117 = carerror(v_117); else
    v_117 = car(v_117);
    if (!symbolp(v_117)) v_117 = nil;
    else { v_117 = qfastgets(v_117);
           if (v_117 != nil) { v_117 = elt(v_117, 4); // avalue
#ifdef RECORD_GET
             if (v_117 != SPID_NOPROP)
                record_get(elt(fastget_names, 4), 1);
             else record_get(elt(fastget_names, 4), 0),
                v_117 = nil; }
           else record_get(elt(fastget_names, 4), 0); }
#else
             if (v_117 == SPID_NOPROP) v_117 = nil; }}
#endif
    v_119 = v_117;
    if (v_117 == nil) goto v_94;
    v_117 = v_119;
    if (!car_legal(v_117)) v_117 = carerror(v_117); else
    v_117 = car(v_117);
    if (!symbolp(v_117)) v_117 = nil;
    else { v_117 = qfastgets(v_117);
           if (v_117 != nil) { v_117 = elt(v_117, 19); // rtypefn
#ifdef RECORD_GET
             if (v_117 != SPID_NOPROP)
                record_get(elt(fastget_names, 19), 1);
             else record_get(elt(fastget_names, 19), 0),
                v_117 = nil; }
           else record_get(elt(fastget_names, 19), 0); }
#else
             if (v_117 == SPID_NOPROP) v_117 = nil; }}
#endif
    v_119 = v_117;
    if (v_117 == nil) goto v_94;
    v_118 = v_119;
    v_117 = stack[0];
    if (!car_legal(v_117)) v_117 = cdrerror(v_117); else
    v_117 = cdr(v_117);
        return Lapply1(nil, v_118, v_117);
v_94:
    v_117 = stack[0];
    if (!car_legal(v_117)) v_118 = carerror(v_117); else
    v_118 = car(v_117);
    v_117 = basic_elt(env, 3); // sub
    if (v_118 == v_117) goto v_107;
    else goto v_108;
v_107:
    v_117 = basic_elt(env, 4); // yetunknowntype
    goto v_9;
v_108:
    v_117 = stack[0];
    {
        LispObject fn = basic_elt(env, 8); // getrtype2
        return (*qfn1(fn))(fn, v_117);
    }
    v_117 = nil;
v_9:
    return onevalue(v_117);
}



// Code for rmultpf

static LispObject CC_rmultpf(LispObject env,
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
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_12 = v_3;
    v_13 = v_2;
// end of prologue
    v_12 = cons(v_13, v_12);
    env = stack[0];
    v_12 = ncons(v_12);
    env = stack[0];
    {   LispObject fn = basic_elt(env, 1); // prepf
    v_12 = (*qfn1(fn))(fn, v_12);
    }
    env = stack[0];
    {   LispObject fn = basic_elt(env, 2); // simp!*
    v_12 = (*qfn1(fn))(fn, v_12);
    }
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 3); // !*q2f
        return (*qfn1(fn))(fn, v_12);
    }
}



// Code for mtchp

static LispObject CC_mtchp(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_70, v_71;
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
    push(nil, nil);
    stack_popper stack_popper_var(8);
// copy arguments values to proper place
    stack[-2] = v_6;
    v_70 = v_5;
    stack[-3] = v_4;
    stack[-4] = v_3;
    stack[-5] = v_2;
// end of prologue
    stack[-6] = stack[-5];
    stack[-1] = stack[-4];
    stack[0] = v_70;
    v_70 = stack[-2];
    v_70 = ncons(v_70);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 1); // mtchp1
    v_70 = (*qfn4up(fn))(fn, stack[-6], stack[-1], stack[0], v_70);
    }
    env = stack[-7];
    stack[0] = v_70;
v_11:
    v_70 = stack[0];
    if (v_70 == nil) goto v_21;
    else goto v_22;
v_21:
    v_70 = nil;
    goto v_10;
v_22:
    v_70 = stack[0];
    if (!car_legal(v_70)) v_71 = carerror(v_70); else
    v_71 = car(v_70);
    v_70 = stack[-2];
    v_70 = Lsubla(nil, v_71, v_70);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 2); // lispeval
    v_70 = (*qfn1(fn))(fn, v_70);
    }
    env = stack[-7];
    if (v_70 == nil) goto v_26;
    goto v_12;
v_26:
    v_70 = stack[0];
    if (!car_legal(v_70)) v_70 = cdrerror(v_70); else
    v_70 = cdr(v_70);
    stack[0] = v_70;
    goto v_11;
v_12:
    v_70 = stack[-5];
    if (!car_legal(v_70)) stack[-1] = cdrerror(v_70); else
    stack[-1] = cdr(v_70);
    v_70 = stack[0];
    if (!car_legal(v_70)) v_71 = carerror(v_70); else
    v_71 = car(v_70);
    v_70 = stack[-4];
    if (!car_legal(v_70)) v_70 = cdrerror(v_70); else
    v_70 = cdr(v_70);
    v_70 = Lsubla(nil, v_71, v_70);
    env = stack[-7];
    v_70 = Ldivide_2(nil, stack[-1], v_70);
    env = stack[-7];
    stack[-4] = v_70;
    v_70 = stack[0];
    if (!car_legal(v_70)) v_71 = carerror(v_70); else
    v_71 = car(v_70);
    v_70 = stack[-3];
    v_70 = Lsubla(nil, v_71, v_70);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 3); // simp
    v_71 = (*qfn1(fn))(fn, v_70);
    }
    env = stack[-7];
    v_70 = stack[-4];
    if (!car_legal(v_70)) v_70 = carerror(v_70); else
    v_70 = car(v_70);
    {   LispObject fn = basic_elt(env, 4); // exptsq
    v_70 = (*qfn2(fn))(fn, v_71, v_70);
    }
    env = stack[-7];
    stack[-3] = v_70;
    v_70 = stack[-4];
    if (!car_legal(v_70)) v_71 = cdrerror(v_70); else
    v_71 = cdr(v_70);
    v_70 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_71 == v_70) goto v_53;
    v_70 = stack[-5];
    if (!car_legal(v_70)) v_71 = carerror(v_70); else
    v_71 = car(v_70);
    v_70 = stack[-4];
    if (!car_legal(v_70)) v_70 = cdrerror(v_70); else
    v_70 = cdr(v_70);
    {   LispObject fn = basic_elt(env, 5); // to
    v_71 = (*qfn2(fn))(fn, v_71, v_70);
    }
    env = stack[-7];
    v_70 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_70 = cons(v_71, v_70);
    env = stack[-7];
    v_71 = ncons(v_70);
    env = stack[-7];
    v_70 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_71 = cons(v_71, v_70);
    env = stack[-7];
    v_70 = stack[-3];
    {   LispObject fn = basic_elt(env, 6); // multsq
    v_70 = (*qfn2(fn))(fn, v_71, v_70);
    }
    stack[-3] = v_70;
    goto v_51;
v_53:
v_51:
    v_70 = stack[-3];
v_10:
    return onevalue(v_70);
}



// Code for nocp

static LispObject CC_nocp(LispObject env,
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
v_1:
    v_26 = stack[0];
    if (v_26 == nil) goto v_6;
    else goto v_7;
v_6:
    v_26 = lisp_true;
    goto v_5;
v_7:
    v_26 = stack[0];
    if (!car_legal(v_26)) v_26 = carerror(v_26); else
    v_26 = car(v_26);
    if (!car_legal(v_26)) v_26 = carerror(v_26); else
    v_26 = car(v_26);
    {   LispObject fn = basic_elt(env, 1); // noncomp
    v_26 = (*qfn1(fn))(fn, v_26);
    }
    env = stack[-1];
    if (v_26 == nil) goto v_14;
    else goto v_15;
v_14:
    v_26 = nil;
    goto v_13;
v_15:
    v_26 = stack[0];
    if (!car_legal(v_26)) v_26 = cdrerror(v_26); else
    v_26 = cdr(v_26);
    stack[0] = v_26;
    goto v_1;
    v_26 = nil;
v_13:
    goto v_5;
    v_26 = nil;
v_5:
    return onevalue(v_26);
}



// Code for subs2q

static LispObject CC_subs2q(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_64, v_65, v_66, v_67;
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
v_1:
    v_64 = stack[-2];
    if (!car_legal(v_64)) v_65 = carerror(v_64); else
    v_65 = car(v_64);
    v_64 = stack[-2];
    if (!car_legal(v_64)) v_64 = cdrerror(v_64); else
    v_64 = cdr(v_64);
    stack[-3] = v_65;
    stack[-1] = v_64;
    v_64 = stack[-3];
    {   LispObject fn = basic_elt(env, 1); // subs2f
    stack[0] = (*qfn1(fn))(fn, v_64);
    }
    env = stack[-4];
    v_64 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // subs2f
    v_64 = (*qfn1(fn))(fn, v_64);
    }
    env = stack[-4];
    v_67 = stack[0];
    v_66 = v_64;
    v_64 = v_67;
    if (!car_legal(v_64)) v_65 = cdrerror(v_64); else
    v_65 = cdr(v_64);
    v_64 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_65 == v_64) goto v_22;
    else goto v_23;
v_22:
    v_64 = v_66;
    if (!car_legal(v_64)) v_65 = cdrerror(v_64); else
    v_65 = cdr(v_64);
    v_64 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_64 = (v_65 == v_64 ? lisp_true : nil);
    goto v_21;
v_23:
    v_64 = nil;
    goto v_21;
    v_64 = nil;
v_21:
    if (v_64 == nil) goto v_19;
    v_64 = v_67;
    if (!car_legal(v_64)) v_65 = carerror(v_64); else
    v_65 = car(v_64);
    v_64 = stack[-3];
    if (equal(v_65, v_64)) goto v_40;
    else goto v_41;
v_40:
    v_64 = v_66;
    if (!car_legal(v_64)) v_65 = carerror(v_64); else
    v_65 = car(v_64);
    v_64 = stack[-1];
    v_64 = (equal(v_65, v_64) ? lisp_true : nil);
    goto v_39;
v_41:
    v_64 = nil;
    goto v_39;
    v_64 = nil;
v_39:
    if (v_64 == nil) goto v_37;
    v_64 = stack[-2];
    goto v_35;
v_37:
    v_64 = v_67;
    v_65 = v_66;
    {
        LispObject fn = basic_elt(env, 2); // quotsq
        return (*qfn2(fn))(fn, v_64, v_65);
    }
    v_64 = nil;
v_35:
    goto v_17;
v_19:
    v_64 = v_67;
    v_65 = v_66;
    {   LispObject fn = basic_elt(env, 2); // quotsq
    v_64 = (*qfn2(fn))(fn, v_64, v_65);
    }
    env = stack[-4];
    stack[-2] = v_64;
    goto v_1;
    v_64 = nil;
v_17:
    return onevalue(v_64);
}



// Code for qqe_nytidp

static LispObject CC_qqe_nytidp(LispObject env,
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
    if (!symbolp(v_7)) v_7 = nil;
    else { v_7 = qfastgets(v_7);
           if (v_7 != nil) { v_7 = elt(v_7, 10); // idtype
#ifdef RECORD_GET
             if (v_7 != SPID_NOPROP)
                record_get(elt(fastget_names, 10), 1);
             else record_get(elt(fastget_names, 10), 0),
                v_7 = nil; }
           else record_get(elt(fastget_names, 10), 0); }
#else
             if (v_7 == SPID_NOPROP) v_7 = nil; }}
#endif
    v_7 = (v_7 == nil ? lisp_true : nil);
    return onevalue(v_7);
}



// Code for subs2!*

static LispObject CC_subs2H(LispObject env,
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
    v_10 = qvalue(basic_elt(env, 1)); // !*sub2
// Binding !*sub2
// FLUIDBIND: reloadenv=1 litvec-offset=1 saveloc=0
{   bind_fluid_stack bind_fluid_var(-1, 1, 0);
    setvalue(basic_elt(env, 1), v_10); // !*sub2
    v_10 = v_11;
    {   LispObject fn = basic_elt(env, 2); // subs2
    v_10 = (*qfn1(fn))(fn, v_10);
    }
    ;}  // end of a binding scope
    return onevalue(v_10);
}



// Code for off1

static LispObject CC_off1(LispObject env,
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
        LispObject fn = basic_elt(env, 1); // onoff
        return (*qfn2(fn))(fn, v_8, v_7);
    }
}



// Code for prepsq

static LispObject CC_prepsq(LispObject env,
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
    if (!car_legal(v_16)) v_16 = carerror(v_16); else
    v_16 = car(v_16);
    if (v_16 == nil) goto v_6;
    else goto v_7;
v_6:
    v_16 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_5;
v_7:
    v_16 = basic_elt(env, 1); // prepf
    {
        LispObject fn = basic_elt(env, 2); // sqform
        return (*qfn2(fn))(fn, v_17, v_16);
    }
    v_16 = nil;
v_5:
    return onevalue(v_16);
}



// Code for evsum

static LispObject CC_evsum(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_50, v_51, v_52;
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
    v_52 = nil;
v_10:
    v_50 = stack[-1];
    if (v_50 == nil) goto v_13;
    v_50 = stack[0];
    if (v_50 == nil) goto v_13;
    goto v_14;
v_13:
    goto v_9;
v_14:
    v_50 = stack[-1];
    if (!car_legal(v_50)) v_51 = carerror(v_50); else
    v_51 = car(v_50);
    v_50 = stack[0];
    if (!car_legal(v_50)) v_50 = carerror(v_50); else
    v_50 = car(v_50);
    v_50 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_51) + static_cast<std::uintptr_t>(v_50) - TAG_FIXNUM);
    v_51 = v_52;
    v_50 = cons(v_50, v_51);
    env = stack[-2];
    v_52 = v_50;
    v_50 = stack[-1];
    if (!car_legal(v_50)) v_50 = cdrerror(v_50); else
    v_50 = cdr(v_50);
    stack[-1] = v_50;
    v_50 = stack[0];
    if (!car_legal(v_50)) v_50 = cdrerror(v_50); else
    v_50 = cdr(v_50);
    stack[0] = v_50;
    goto v_10;
v_9:
    v_50 = v_52;
    v_50 = Lnreverse(nil, v_50);
    v_52 = v_50;
    v_50 = stack[-1];
    if (v_50 == nil) goto v_36;
    v_51 = v_52;
    v_50 = stack[-1];
        return Lnconc(nil, v_51, v_50);
v_36:
    v_50 = stack[0];
    if (v_50 == nil) goto v_42;
    v_51 = v_52;
    v_50 = stack[0];
        return Lnconc(nil, v_51, v_50);
v_42:
    v_50 = v_52;
    goto v_34;
    v_50 = nil;
v_34:
    return onevalue(v_50);
}



// Code for rd!:minusp

static LispObject CC_rdTminusp(LispObject env,
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
    v_17 = v_18;
    if (!car_legal(v_17)) v_17 = cdrerror(v_17); else
    v_17 = cdr(v_17);
    if (!consp(v_17)) goto v_6;
    else goto v_7;
v_6:
    v_17 = v_18;
    if (!car_legal(v_17)) v_17 = cdrerror(v_17); else
    v_17 = cdr(v_17);
        return Lminusp(nil, v_17);
v_7:
    v_17 = v_18;
    {
        LispObject fn = basic_elt(env, 1); // minusp!:
        return (*qfn1(fn))(fn, v_17);
    }
    v_17 = nil;
    return onevalue(v_17);
}



// Code for reordop

static LispObject CC_reordop(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_43 = stack[-1];
    v_42 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // reordablep
    v_42 = (*qfn2(fn))(fn, v_43, v_42);
    }
    env = stack[-2];
    if (v_42 == nil) goto v_8;
    v_43 = stack[-1];
    v_42 = stack[0];
    {
        LispObject fn = basic_elt(env, 3); // ordop
        return (*qfn2(fn))(fn, v_43, v_42);
    }
v_8:
    v_42 = qvalue(basic_elt(env, 1)); // !*ncmp
    if (v_42 == nil) goto v_22;
    else goto v_23;
v_22:
    v_42 = nil;
    goto v_21;
v_23:
    v_42 = stack[-1];
    {   LispObject fn = basic_elt(env, 4); // noncomp1
    v_42 = (*qfn1(fn))(fn, v_42);
    }
    env = stack[-2];
    if (v_42 == nil) goto v_30;
    else goto v_31;
v_30:
    v_42 = nil;
    goto v_29;
v_31:
    v_42 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // noncomp1
    v_42 = (*qfn1(fn))(fn, v_42);
    }
    env = stack[-2];
    goto v_29;
    v_42 = nil;
v_29:
    goto v_21;
    v_42 = nil;
v_21:
    if (v_42 == nil) goto v_19;
    else goto v_18;
v_19:
    v_43 = stack[-1];
    v_42 = stack[0];
    {
        LispObject fn = basic_elt(env, 3); // ordop
        return (*qfn2(fn))(fn, v_43, v_42);
    }
v_18:
    goto v_6;
    v_42 = nil;
v_6:
    return onevalue(v_42);
}



// Code for errorset!*

static LispObject CC_errorsetH(LispObject env,
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
    v_9 = qvalue(basic_elt(env, 1)); // !*backtrace
    {
        LispObject fn = basic_elt(env, 2); // errorset
        return (*qfn3(fn))(fn, v_11, v_10, v_9);
    }
}



// Code for fs!:timesterm

static LispObject CC_fsTtimesterm(LispObject env,
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
    v_30 = stack[0];
    if (v_30 == nil) goto v_7;
    else goto v_8;
v_7:
    v_30 = nil;
    goto v_6;
v_8:
    v_30 = stack[-1];
    if (v_30 == nil) goto v_11;
    else goto v_12;
v_11:
    v_30 = nil;
    goto v_6;
v_12:
    v_31 = stack[-1];
    v_30 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // fs!:timestermterm
    v_30 = (*qfn2(fn))(fn, v_31, v_30);
    }
    env = stack[-3];
    stack[-2] = v_30;
    v_31 = stack[0];
    v_30 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_30 = Lgetv(nil, v_31, v_30);
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 0); // fs!:timesterm
    v_30 = (*qfn2(fn))(fn, stack[-1], v_30);
    }
    env = stack[-3];
    {
        LispObject v_35 = stack[-2];
        LispObject fn = basic_elt(env, 2); // fs!:plus
        return (*qfn2(fn))(fn, v_35, v_30);
    }
    goto v_6;
    v_30 = nil;
v_6:
    return onevalue(v_30);
}



// Code for !:minus

static LispObject CC_Tminus(LispObject env,
                         LispObject v_2)
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
        push(v_2);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_37 = v_2;
// end of prologue
    v_36 = v_37;
    if (v_36 == nil) goto v_6;
    else goto v_7;
v_6:
    v_36 = nil;
    goto v_5;
v_7:
    v_36 = v_37;
    if (!consp(v_36)) goto v_10;
    else goto v_11;
v_10:
    v_36 = v_37;
    return negate(v_36);
v_11:
    v_36 = v_37;
    if (!car_legal(v_36)) v_38 = carerror(v_36); else
    v_38 = car(v_36);
    v_36 = basic_elt(env, 1); // minus
    v_36 = get(v_38, v_36);
    env = stack[0];
    v_38 = v_36;
    v_36 = v_38;
    if (v_36 == nil) goto v_25;
    v_36 = v_38;
        return Lapply1(nil, v_36, v_37);
v_25:
    v_38 = v_37;
    v_37 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    v_36 = basic_elt(env, 2); // times
    {
        LispObject fn = basic_elt(env, 3); // dcombine
        return (*qfn3(fn))(fn, v_38, v_37, v_36);
    }
    v_36 = nil;
    goto v_5;
    v_36 = nil;
v_5:
    return onevalue(v_36);
}



// Code for rev

static LispObject CC_rev(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_24, v_25, v_26;
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
v_8:
    v_26 = v_25;
    if (v_26 == nil) goto v_11;
    else goto v_12;
v_11:
    goto v_7;
v_12:
    v_26 = v_25;
    if (!car_legal(v_26)) v_26 = cdrerror(v_26); else
    v_26 = cdr(v_26);
    stack[0] = v_26;
    if (!car_legal(v_25)) v_25 = carerror(v_25); else
    v_25 = car(v_25);
    v_24 = cons(v_25, v_24);
    env = stack[-1];
    v_25 = stack[0];
    goto v_8;
    v_24 = nil;
v_7:
    return onevalue(v_24);
}



// Code for !*!*s2a

static LispObject CC_HHs2a(LispObject env,
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



// Code for lnc

static LispObject CC_lnc(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_32, v_33;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_32 = v_2;
// end of prologue
v_6:
    v_33 = v_32;
    if (v_33 == nil) goto v_9;
    else goto v_10;
v_9:
    v_32 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_5;
v_10:
    v_33 = v_32;
    if (!consp(v_33)) goto v_17;
    else goto v_18;
v_17:
    v_33 = lisp_true;
    goto v_16;
v_18:
    v_33 = v_32;
    if (!car_legal(v_33)) v_33 = carerror(v_33); else
    v_33 = car(v_33);
    v_33 = (consp(v_33) ? nil : lisp_true);
    goto v_16;
    v_33 = nil;
v_16:
    if (v_33 == nil) goto v_14;
    goto v_5;
v_14:
    if (!car_legal(v_32)) v_32 = carerror(v_32); else
    v_32 = car(v_32);
    if (!car_legal(v_32)) v_32 = cdrerror(v_32); else
    v_32 = cdr(v_32);
    goto v_6;
    v_32 = nil;
v_5:
    return onevalue(v_32);
}



// Code for stable!-sortip

static LispObject CC_stableKsortip(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_162 = stack[-3];
    if (v_162 == nil) goto v_12;
    else goto v_13;
v_12:
    v_162 = stack[-3];
    goto v_9;
v_13:
    v_162 = stack[-3];
    stack[-4] = v_162;
    v_162 = stack[-3];
    if (!car_legal(v_162)) v_162 = cdrerror(v_162); else
    v_162 = cdr(v_162);
    stack[-1] = v_162;
    v_162 = stack[-1];
    if (v_162 == nil) goto v_21;
    else goto v_22;
v_21:
    v_162 = stack[-3];
    goto v_9;
v_22:
    v_162 = stack[-1];
    if (!car_legal(v_162)) v_162 = cdrerror(v_162); else
    v_162 = cdr(v_162);
    stack[-3] = v_162;
    v_162 = stack[-3];
    if (v_162 == nil) goto v_29;
    else goto v_30;
v_29:
    v_164 = stack[-2];
    v_162 = stack[-1];
    if (!car_legal(v_162)) v_163 = carerror(v_162); else
    v_163 = car(v_162);
    v_162 = stack[-4];
    if (!car_legal(v_162)) v_162 = carerror(v_162); else
    v_162 = car(v_162);
    v_162 = Lapply2(nil, v_164, v_163, v_162);
    if (v_162 == nil) goto v_35;
    v_162 = stack[-4];
    if (!car_legal(v_162)) v_162 = carerror(v_162); else
    v_162 = car(v_162);
    stack[-3] = v_162;
    v_163 = stack[-4];
    v_162 = stack[-1];
    if (!car_legal(v_162)) v_162 = carerror(v_162); else
    v_162 = car(v_162);
    if (!car_legal(v_163)) rplaca_fails(v_163);
    setcar(v_163, v_162);
    v_163 = stack[-1];
    v_162 = stack[-3];
    if (!car_legal(v_163)) rplaca_fails(v_163);
    setcar(v_163, v_162);
    goto v_33;
v_35:
v_33:
    v_162 = stack[-4];
    goto v_9;
v_30:
    v_162 = stack[-4];
    stack[-3] = v_162;
v_55:
    v_162 = stack[-1];
    if (v_162 == nil) goto v_58;
    v_164 = stack[-2];
    v_162 = stack[-1];
    if (!car_legal(v_162)) v_163 = carerror(v_162); else
    v_163 = car(v_162);
    v_162 = stack[-3];
    if (!car_legal(v_162)) v_162 = carerror(v_162); else
    v_162 = car(v_162);
    v_162 = Lapply2(nil, v_164, v_163, v_162);
    env = stack[-5];
    if (v_162 == nil) goto v_62;
    else goto v_58;
v_62:
    goto v_59;
v_58:
    goto v_54;
v_59:
    v_162 = stack[-1];
    stack[-3] = v_162;
    v_162 = stack[-1];
    if (!car_legal(v_162)) v_162 = cdrerror(v_162); else
    v_162 = cdr(v_162);
    stack[-1] = v_162;
    goto v_55;
v_54:
    v_162 = stack[-1];
    if (v_162 == nil) goto v_75;
    else goto v_76;
v_75:
    v_162 = stack[-4];
    goto v_9;
v_76:
    v_162 = stack[-4];
    stack[-1] = v_162;
    v_162 = stack[-1];
    if (!car_legal(v_162)) v_162 = cdrerror(v_162); else
    v_162 = cdr(v_162);
    if (!car_legal(v_162)) v_162 = cdrerror(v_162); else
    v_162 = cdr(v_162);
    stack[-3] = v_162;
v_85:
    v_162 = stack[-3];
    if (v_162 == nil) goto v_88;
    v_162 = stack[-3];
    if (!car_legal(v_162)) v_162 = cdrerror(v_162); else
    v_162 = cdr(v_162);
    if (v_162 == nil) goto v_88;
    goto v_89;
v_88:
    goto v_84;
v_89:
    v_162 = stack[-1];
    if (!car_legal(v_162)) v_162 = cdrerror(v_162); else
    v_162 = cdr(v_162);
    stack[-1] = v_162;
    v_162 = stack[-3];
    if (!car_legal(v_162)) v_162 = cdrerror(v_162); else
    v_162 = cdr(v_162);
    if (!car_legal(v_162)) v_162 = cdrerror(v_162); else
    v_162 = cdr(v_162);
    stack[-3] = v_162;
    goto v_85;
v_84:
    v_162 = stack[-1];
    stack[-3] = v_162;
    v_162 = stack[-1];
    if (!car_legal(v_162)) v_162 = cdrerror(v_162); else
    v_162 = cdr(v_162);
    stack[-1] = v_162;
    v_163 = stack[-3];
    v_162 = nil;
    if (!car_legal(v_163)) rplacd_fails(v_163);
    setcdr(v_163, v_162);
    v_163 = stack[-4];
    v_162 = stack[-2];
    {   LispObject fn = basic_elt(env, 0); // stable!-sortip
    v_162 = (*qfn2(fn))(fn, v_163, v_162);
    }
    env = stack[-5];
    stack[-4] = v_162;
    v_163 = stack[-1];
    v_162 = stack[-2];
    {   LispObject fn = basic_elt(env, 0); // stable!-sortip
    v_162 = (*qfn2(fn))(fn, v_163, v_162);
    }
    env = stack[-5];
    stack[-1] = v_162;
    v_162 = nil;
    v_162 = ncons(v_162);
    env = stack[-5];
    stack[0] = v_162;
    stack[-3] = v_162;
v_117:
    v_162 = stack[-4];
    if (v_162 == nil) goto v_120;
    v_162 = stack[-1];
    if (v_162 == nil) goto v_120;
    goto v_121;
v_120:
    goto v_116;
v_121:
    v_164 = stack[-2];
    v_162 = stack[-1];
    if (!car_legal(v_162)) v_163 = carerror(v_162); else
    v_163 = car(v_162);
    v_162 = stack[-4];
    if (!car_legal(v_162)) v_162 = carerror(v_162); else
    v_162 = car(v_162);
    v_162 = Lapply2(nil, v_164, v_163, v_162);
    env = stack[-5];
    if (v_162 == nil) goto v_130;
    v_163 = stack[0];
    v_162 = stack[-1];
    if (!car_legal(v_163)) rplacd_fails(v_163);
    setcdr(v_163, v_162);
    v_162 = stack[-1];
    stack[0] = v_162;
    v_162 = stack[-1];
    if (!car_legal(v_162)) v_162 = cdrerror(v_162); else
    v_162 = cdr(v_162);
    stack[-1] = v_162;
    goto v_128;
v_130:
    v_163 = stack[0];
    v_162 = stack[-4];
    if (!car_legal(v_163)) rplacd_fails(v_163);
    setcdr(v_163, v_162);
    v_162 = stack[-4];
    stack[0] = v_162;
    v_162 = stack[-4];
    if (!car_legal(v_162)) v_162 = cdrerror(v_162); else
    v_162 = cdr(v_162);
    stack[-4] = v_162;
    goto v_128;
v_128:
    goto v_117;
v_116:
    v_162 = stack[-4];
    if (v_162 == nil) goto v_154;
    v_162 = stack[-4];
    stack[-1] = v_162;
    goto v_152;
v_154:
v_152:
    v_163 = stack[0];
    v_162 = stack[-1];
    if (!car_legal(v_163)) rplacd_fails(v_163);
    setcdr(v_163, v_162);
    v_162 = stack[-3];
    if (!car_legal(v_162)) v_162 = cdrerror(v_162); else
    v_162 = cdr(v_162);
v_9:
    return onevalue(v_162);
}



// Code for qqe_btidp

static LispObject CC_qqe_btidp(LispObject env,
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
           if (v_8 != nil) { v_8 = elt(v_8, 10); // idtype
#ifdef RECORD_GET
             if (v_8 != SPID_NOPROP)
                record_get(elt(fastget_names, 10), 1);
             else record_get(elt(fastget_names, 10), 0),
                v_8 = nil; }
           else record_get(elt(fastget_names, 10), 0); }
#else
             if (v_8 == SPID_NOPROP) v_8 = nil; }}
#endif
    v_9 = basic_elt(env, 1); // bt
    v_8 = (v_8 == v_9 ? lisp_true : nil);
    return onevalue(v_8);
}



setup_type const u03_setup[] =
{
    {"rd:zerop",                G0W1,     CC_rdTzerop,G2W1,   G3W1,     G4W1},
    {"ordpp",                   G0W2,     G1W2,     CC_ordpp, G3W2,     G4W2},
    {"monordp",                 G0W2,     G1W2,     CC_monordp,G3W2,    G4W2},
    {"*physopp*",               G0W1,     CC_HphysoppH,G2W1,  G3W1,     G4W1},
    {"cdiv",                    G0W2,     G1W2,     CC_cdiv,  G3W2,     G4W2},
    {"pv_multc",                G0W2,     G1W2,     CC_pv_multc,G3W2,   G4W2},
    {"upbve",                   G0W1,     CC_upbve, G2W1,     G3W1,     G4W1},
    {"striptag",                G0W1,     CC_striptag,G2W1,   G3W1,     G4W1},
    {"lalr_compute_lr0_goto",   G0W2,     G1W2,     CC_lalr_compute_lr0_goto,G3W2,G4W2},
    {"monomcomparedegrevlex",   G0W2,     G1W2,     CC_monomcomparedegrevlex,G3W2,G4W2},
    {"lt*",                     G0W1,     CC_ltH,   G2W1,     G3W1,     G4W1},
    {"subs2f",                  G0W1,     CC_subs2f,G2W1,     G3W1,     G4W1},
    {"talp_simpat",             G0W1,     CC_talp_simpat,G2W1,G3W1,     G4W1},
    {"kernord-sort",            G0W1,     CC_kernordKsort,G2W1,G3W1,    G4W1},
    {"printout",                G0W1,     CC_printout,G2W1,   G3W1,     G4W1},
    {"mgenp",                   G0W1,     CC_mgenp, G2W1,     G3W1,     G4W1},
    {"evcompless?",             G0W2,     G1W2,     CC_evcomplessW,G3W2,G4W2},
    {"evmatrixcomp",            G0W2,     G1W2,     CC_evmatrixcomp,G3W2,G4W2},
    {"wedgepf2",                G0W2,     G1W2,     CC_wedgepf2,G3W2,   G4W2},
    {"pprin2",                  G0W1,     CC_pprin2,G2W1,     G3W1,     G4W1},
    {"*collectphysops_reversed",G0W2,     G1W2,     CC_Hcollectphysops_reversed,G3W2,G4W2},
    {"constimes",               G0W1,     CC_constimes,G2W1,  G3W1,     G4W1},
    {"errorp",                  G0W1,     CC_errorp,G2W1,     G3W1,     G4W1},
    {"timesip",                 G0W1,     CC_timesip,G2W1,    G3W1,     G4W1},
    {"fs:timestermterm",        G0W2,     G1W2,     CC_fsTtimestermterm,G3W2,G4W2},
    {"mo_vdivides?",            G0W2,     G1W2,     CC_mo_vdividesW,G3W2,G4W2},
    {"dless",                   G0W2,     G1W2,     CC_dless, G3W2,     G4W2},
    {"pkp",                     G0W1,     CC_pkp,   G2W1,     G3W1,     G4W1},
    {"*i2rn",                   G0W1,     CC_Hi2rn, G2W1,     G3W1,     G4W1},
    {"gcdfd1",                  G0W2,     G1W2,     CC_gcdfd1,G3W2,     G4W2},
    {"lalr_propagate_lookaheads",G0W1,    CC_lalr_propagate_lookaheads,G2W1,G3W1,G4W1},
    {"add2calls",               G0W1,     CC_add2calls,G2W1,  G3W1,     G4W1},
    {"getrtype2",               G0W1,     CC_getrtype2,G2W1,  G3W1,     G4W1},
    {"maxdeg",                  G0W2,     G1W2,     CC_maxdeg,G3W2,     G4W2},
    {"symbollessp",             G0W2,     G1W2,     CC_symbollessp,G3W2,G4W2},
    {"multsq",                  G0W2,     G1W2,     CC_multsq,G3W2,     G4W2},
    {"rl_smupdknowl",           G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_rl_smupdknowl},
    {"ibalp_varlt",             G0W1,     CC_ibalp_varlt,G2W1,G3W1,     G4W1},
    {"get-print-name",          G0W1,     CC_getKprintKname,G2W1,G3W1,  G4W1},
    {"bftrim:",                 G0W1,     CC_bftrimT,G2W1,    G3W1,     G4W1},
    {"on1",                     G0W1,     CC_on1,   G2W1,     G3W1,     G4W1},
    {"bcint2op",                G0W3,     G1W3,     G2W3,     CC_bcint2op,G4W3},
    {"atomf",                   G0W1,     CC_atomf, G2W1,     G3W1,     G4W1},
    {"negsq",                   G0W1,     CC_negsq, G2W1,     G3W1,     G4W1},
    {"hasonephysop",            G0W1,     CC_hasonephysop,G2W1,G3W1,    G4W1},
    {"arraychk",                G0W1,     CC_arraychk,G2W1,   G3W1,     G4W1},
    {"fs:angle-order",          G0W2,     G1W2,     CC_fsTangleKorder,G3W2,G4W2},
    {"cali_trace",              CC_cali_trace,G1W0, G2W0,     G3W0,     G4W0},
    {"pcmult",                  G0W2,     G1W2,     CC_pcmult,G3W2,     G4W2},
    {"pv_renorm",               G0W1,     CC_pv_renorm,G2W1,  G3W1,     G4W1},
    {"plus-mod-p",              G0W2,     G1W2,     CC_plusKmodKp,G3W2, G4W2},
    {"split_form",              G0W2,     G1W2,     CC_split_form,G3W2, G4W2},
    {"lalr_goto",               G0W2,     G1W2,     CC_lalr_goto,G3W2,  G4W2},
    {"toknump",                 G0W1,     CC_toknump,G2W1,    G3W1,     G4W1},
    {"getrtype",                G0W1,     CC_getrtype,G2W1,   G3W1,     G4W1},
    {"rmultpf",                 G0W2,     G1W2,     CC_rmultpf,G3W2,    G4W2},
    {"mtchp",                   G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_mtchp},
    {"nocp",                    G0W1,     CC_nocp,  G2W1,     G3W1,     G4W1},
    {"subs2q",                  G0W1,     CC_subs2q,G2W1,     G3W1,     G4W1},
    {"qqe_nytidp",              G0W1,     CC_qqe_nytidp,G2W1, G3W1,     G4W1},
    {"subs2*",                  G0W1,     CC_subs2H,G2W1,     G3W1,     G4W1},
    {"off1",                    G0W1,     CC_off1,  G2W1,     G3W1,     G4W1},
    {"prepsq",                  G0W1,     CC_prepsq,G2W1,     G3W1,     G4W1},
    {"evsum",                   G0W2,     G1W2,     CC_evsum, G3W2,     G4W2},
    {"rd:minusp",               G0W1,     CC_rdTminusp,G2W1,  G3W1,     G4W1},
    {"reordop",                 G0W2,     G1W2,     CC_reordop,G3W2,    G4W2},
    {"errorset*",               G0W2,     G1W2,     CC_errorsetH,G3W2,  G4W2},
    {"fs:timesterm",            G0W2,     G1W2,     CC_fsTtimesterm,G3W2,G4W2},
    {":minus",                  G0W1,     CC_Tminus,G2W1,     G3W1,     G4W1},
    {"rev",                     G0W2,     G1W2,     CC_rev,   G3W2,     G4W2},
    {"**s2a",                   G0W2,     G1W2,     CC_HHs2a, G3W2,     G4W2},
    {"lnc",                     G0W1,     CC_lnc,   G2W1,     G3W1,     G4W1},
    {"stable-sortip",           G0W2,     G1W2,     CC_stableKsortip,G3W2,G4W2},
    {"qqe_btidp",               G0W1,     CC_qqe_btidp,G2W1,  G3W1,     G4W1},
    {nullptr, 
        reinterpret_cast<no_args *>(
            reinterpret_cast<uintptr_t>("u03")),
        reinterpret_cast<one_arg *>(
            reinterpret_cast<uintptr_t>("31472 3075116 3574010")),
        nullptr, nullptr, nullptr}
};

// end of generated code
