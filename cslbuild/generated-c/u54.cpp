
// $destdir/u54.c        Machine generated C code

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


// Code for rtrnda

static LispObject CC_rtrnda(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_39 = v_3;
    stack[0] = v_2;
// end of prologue
    v_38 = stack[0];
    if (!consp(v_38)) goto v_11;
    else goto v_12;
v_11:
    v_38 = stack[0];
    v_38 = static_cast<LispObject>(zerop(v_38));
    v_38 = v_38 ? lisp_true : nil;
    env = stack[-1];
    goto v_10;
v_12:
    v_38 = stack[0];
    if (!car_legal(v_38)) v_38 = cdrerror(v_38); else
    v_38 = cdr(v_38);
    if (!car_legal(v_38)) v_40 = carerror(v_38); else
    v_40 = car(v_38);
    v_38 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_38 = (v_40 == v_38 ? lisp_true : nil);
    goto v_10;
    v_38 = nil;
v_10:
    if (v_38 == nil) goto v_8;
    v_39 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_38 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_38 = cons(v_39, v_38);
    env = stack[-1];
    setvalue(basic_elt(env, 1), v_38); // rlval!#
    v_38 = stack[0];
    goto v_6;
v_8:
    v_38 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // round!:dec1
    v_38 = (*qfn2(fn))(fn, v_38, v_39);
    }
    env = stack[-1];
    v_39 = v_38;
    setvalue(basic_elt(env, 1), v_39); // rlval!#
    if (!car_legal(v_39)) v_39 = carerror(v_39); else
    v_39 = car(v_39);
    if (!car_legal(v_38)) v_38 = cdrerror(v_38); else
    v_38 = cdr(v_38);
    {
        LispObject fn = basic_elt(env, 3); // decimal2internal
        return (*qfn2(fn))(fn, v_39, v_38);
    }
    v_38 = nil;
v_6:
    return onevalue(v_38);
}



// Code for radd

static LispObject CC_radd(LispObject env,
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
    stack[-2] = nil;
    v_87 = stack[-1];
    if (!consp(v_87)) goto v_13;
    stack[0] = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_87 = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // prepf
    v_87 = (*qfn1(fn))(fn, v_87);
    }
    {
        LispObject v_92 = stack[0];
        return list2(v_92, v_87);
    }
v_13:
    v_88 = stack[-1];
    v_87 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_87 = static_cast<LispObject>(lessp2(v_88, v_87));
    v_87 = v_87 ? lisp_true : nil;
    env = stack[-3];
    if (v_87 == nil) goto v_22;
    v_87 = stack[0];
    v_87 = Levenp(nil, v_87);
    env = stack[-3];
    if (v_87 == nil) goto v_22;
    v_87 = lisp_true;
    stack[-2] = v_87;
    v_87 = stack[-1];
    v_87 = negate(v_87);
    env = stack[-3];
    stack[-1] = v_87;
    goto v_20;
v_22:
v_20:
    v_88 = stack[-1];
    v_87 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // nrootnn
    v_87 = (*qfn2(fn))(fn, v_88, v_87);
    }
    env = stack[-3];
    stack[-1] = v_87;
    v_87 = stack[-2];
    if (v_87 == nil) goto v_39;
    v_87 = qvalue(basic_elt(env, 1)); // !*reduced
    if (v_87 == nil) goto v_44;
    v_88 = stack[0];
    v_87 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    if (v_88 == v_87) goto v_47;
    else goto v_44;
v_47:
    v_87 = stack[-1];
    if (!car_legal(v_87)) stack[0] = carerror(v_87); else
    stack[0] = car(v_87);
    v_88 = basic_elt(env, 2); // i
    v_87 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 5); // to
    v_88 = (*qfn2(fn))(fn, v_88, v_87);
    }
    env = stack[-3];
    v_87 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_87 = cons(v_88, v_87);
    env = stack[-3];
    v_87 = ncons(v_87);
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 6); // multd
    v_87 = (*qfn2(fn))(fn, stack[0], v_87);
    }
    stack[0] = v_87;
    v_87 = stack[-1];
    if (!car_legal(v_87)) v_87 = cdrerror(v_87); else
    v_87 = cdr(v_87);
    stack[-1] = v_87;
    goto v_42;
v_44:
    v_87 = stack[-1];
    if (!car_legal(v_87)) v_87 = carerror(v_87); else
    v_87 = car(v_87);
    stack[0] = v_87;
    v_87 = stack[-1];
    if (!car_legal(v_87)) v_87 = cdrerror(v_87); else
    v_87 = cdr(v_87);
    v_87 = negate(v_87);
    stack[-1] = v_87;
    goto v_42;
v_42:
    goto v_37;
v_39:
    v_87 = stack[-1];
    if (!car_legal(v_87)) v_87 = carerror(v_87); else
    v_87 = car(v_87);
    stack[0] = v_87;
    v_87 = stack[-1];
    if (!car_legal(v_87)) v_87 = cdrerror(v_87); else
    v_87 = cdr(v_87);
    stack[-1] = v_87;
    goto v_37;
v_37:
    v_88 = stack[-1];
    v_87 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_88 == v_87) goto v_76;
    else goto v_77;
v_76:
    v_87 = stack[0];
    return ncons(v_87);
v_77:
    v_88 = stack[0];
    v_87 = stack[-1];
    return list2(v_88, v_87);
    v_87 = nil;
    return onevalue(v_87);
}



// Code for coeffs!-to!-form

static LispObject CC_coeffsKtoKform(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    v_20 = v_3;
    v_21 = v_2;
// end of prologue
    v_19 = v_21;
    if (v_19 == nil) goto v_7;
    else goto v_8;
v_7:
    v_19 = nil;
    goto v_6;
v_8:
    stack[-1] = v_21;
    stack[0] = v_20;
    v_19 = v_21;
    v_19 = Llength(nil, v_19);
    env = stack[-2];
    v_19 = sub1(v_19);
    env = stack[-2];
    {
        LispObject v_24 = stack[-1];
        LispObject v_25 = stack[0];
        LispObject fn = basic_elt(env, 1); // coeffs!-to!-form1
        return (*qfn3(fn))(fn, v_24, v_25, v_19);
    }
    v_19 = nil;
v_6:
    return onevalue(v_19);
}



// Code for aex_psremseq

static LispObject CC_aex_psremseq(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    goto v_13;
    goto v_11;
v_13:
v_11:
    v_60 = stack[-2];
    {   LispObject fn = basic_elt(env, 1); // aex_mklcnt
    v_61 = (*qfn1(fn))(fn, v_60);
    }
    env = stack[-4];
    v_60 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // aex_divposcnt
    v_60 = (*qfn2(fn))(fn, v_61, v_60);
    }
    env = stack[-4];
    stack[-2] = v_60;
    v_60 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // aex_mklcnt
    v_61 = (*qfn1(fn))(fn, v_60);
    }
    env = stack[-4];
    v_60 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // aex_divposcnt
    v_60 = (*qfn2(fn))(fn, v_61, v_60);
    }
    env = stack[-4];
    stack[-1] = v_60;
    v_61 = stack[-1];
    v_60 = stack[-2];
    v_60 = list2(v_61, v_60);
    env = stack[-4];
    stack[-3] = v_60;
v_28:
    v_61 = stack[-1];
    v_60 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // aex_deg
    v_61 = (*qfn2(fn))(fn, v_61, v_60);
    }
    env = stack[-4];
    v_60 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_60 = static_cast<LispObject>(greaterp2(v_61, v_60));
    v_60 = v_60 ? lisp_true : nil;
    env = stack[-4];
    if (v_60 == nil) goto v_31;
    else goto v_32;
v_31:
    goto v_27;
v_32:
    v_62 = stack[-2];
    v_61 = stack[-1];
    v_60 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // aex_psrem
    v_60 = (*qfn3(fn))(fn, v_62, v_61, v_60);
    }
    env = stack[-4];
    v_61 = v_60;
    v_60 = stack[-1];
    stack[-2] = v_60;
    v_60 = v_61;
    {   LispObject fn = basic_elt(env, 5); // aex_neg
    v_60 = (*qfn1(fn))(fn, v_60);
    }
    env = stack[-4];
    stack[-1] = v_60;
    v_60 = stack[-1];
    {   LispObject fn = basic_elt(env, 6); // aex_simplenullp
    v_60 = (*qfn1(fn))(fn, v_60);
    }
    env = stack[-4];
    if (v_60 == nil) goto v_48;
    else goto v_49;
v_48:
    v_61 = stack[-1];
    v_60 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // aex_divposcnt
    v_60 = (*qfn2(fn))(fn, v_61, v_60);
    }
    env = stack[-4];
    stack[-1] = v_60;
    v_61 = stack[-1];
    v_60 = stack[-3];
    v_60 = cons(v_61, v_60);
    env = stack[-4];
    stack[-3] = v_60;
    goto v_47;
v_49:
v_47:
    goto v_28;
v_27:
    v_60 = stack[-3];
        return Lnreverse(nil, v_60);
    return onevalue(v_60);
}



// Code for rl_!*qe

static LispObject CC_rl_Hqe(LispObject env,
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
    stack[0] = basic_elt(env, 1); // rl_qe
    v_10 = list2(v_11, v_10);
    env = stack[-1];
    {
        LispObject v_13 = stack[0];
        LispObject fn = basic_elt(env, 2); // apply
        return (*qfn2(fn))(fn, v_13, v_10);
    }
}



// Code for mkuniquewedge

static LispObject CC_mkuniquewedge(LispObject env,
                         LispObject v_2)
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
    v_41 = stack[0];
    if (v_41 == nil) goto v_13;
    else goto v_14;
v_13:
    goto v_9;
v_14:
    v_41 = stack[0];
    if (!car_legal(v_41)) v_41 = carerror(v_41); else
    v_41 = car(v_41);
    if (!car_legal(v_41)) v_41 = carerror(v_41); else
    v_41 = car(v_41);
    {   LispObject fn = basic_elt(env, 1); // mkuniquewedge1
    v_42 = (*qfn1(fn))(fn, v_41);
    }
    env = stack[-2];
    v_41 = stack[0];
    if (!car_legal(v_41)) v_41 = carerror(v_41); else
    v_41 = car(v_41);
    if (!car_legal(v_41)) v_41 = cdrerror(v_41); else
    v_41 = cdr(v_41);
    {   LispObject fn = basic_elt(env, 2); // multpfsq
    v_42 = (*qfn2(fn))(fn, v_42, v_41);
    }
    env = stack[-2];
    v_41 = stack[-1];
    v_41 = cons(v_42, v_41);
    env = stack[-2];
    stack[-1] = v_41;
    v_41 = stack[0];
    if (!car_legal(v_41)) v_41 = cdrerror(v_41); else
    v_41 = cdr(v_41);
    stack[0] = v_41;
    goto v_8;
v_9:
    v_41 = nil;
    v_42 = v_41;
v_10:
    v_41 = stack[-1];
    if (v_41 == nil) goto v_31;
    else goto v_32;
v_31:
    v_41 = v_42;
    goto v_7;
v_32:
    v_41 = stack[-1];
    v_41 = car(v_41);
    {   LispObject fn = basic_elt(env, 3); // addpf
    v_41 = (*qfn2(fn))(fn, v_41, v_42);
    }
    env = stack[-2];
    v_42 = v_41;
    v_41 = stack[-1];
    v_41 = cdr(v_41);
    stack[-1] = v_41;
    goto v_10;
v_7:
    return onevalue(v_41);
}



// Code for minprec

static LispObject CC_minprec(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_12;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// end of prologue
    v_12 = qvalue(basic_elt(env, 1)); // !*bftag
    if (v_12 == nil) goto v_6;
    v_12 = qvalue(basic_elt(env, 2)); // !:prec!:
    goto v_4;
v_6:
    v_12 = qvalue(basic_elt(env, 3)); // !!nfpd
    goto v_4;
    v_12 = nil;
v_4:
    return onevalue(v_12);
}



// Code for tvectorp

static LispObject CC_tvectorp(LispObject env,
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
    if (!car_legal(v_20)) v_20 = carerror(v_20); else
    v_20 = car(v_20);
    if (!car_legal(v_20)) v_20 = carerror(v_20); else
    v_20 = car(v_20);
    {   LispObject fn = basic_elt(env, 1); // deg!*form
    v_20 = (*qfn1(fn))(fn, v_20);
    }
    v_21 = v_20;
    v_20 = v_21;
    if (is_number(v_20)) goto v_12;
    v_20 = nil;
    goto v_10;
v_12:
    v_20 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
        return Llessp_2(nil, v_21, v_20);
    v_20 = nil;
v_10:
    return onevalue(v_20);
}



// Code for ext_edges

static LispObject CC_ext_edges(LispObject env,
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
    stack[-1] = nil;
v_7:
    v_43 = stack[0];
    if (v_43 == nil) goto v_10;
    else goto v_11;
v_10:
    v_43 = stack[-1];
    {
        LispObject fn = basic_elt(env, 2); // nreverse
        return (*qfn1(fn))(fn, v_43);
    }
v_11:
    v_43 = stack[0];
    if (!car_legal(v_43)) v_43 = carerror(v_43); else
    v_43 = car(v_43);
    if (!car_legal(v_43)) v_44 = carerror(v_43); else
    v_44 = car(v_43);
    v_43 = stack[0];
    if (!car_legal(v_43)) v_43 = cdrerror(v_43); else
    v_43 = cdr(v_43);
    v_43 = Lassoc(nil, v_44, v_43);
    if (v_43 == nil) goto v_17;
    else goto v_15;
v_17:
    v_43 = stack[0];
    if (!car_legal(v_43)) v_43 = carerror(v_43); else
    v_43 = car(v_43);
    if (!car_legal(v_43)) v_44 = carerror(v_43); else
    v_44 = car(v_43);
    v_43 = qvalue(basic_elt(env, 1)); // !_0edge
    if (!car_legal(v_43)) v_43 = carerror(v_43); else
    v_43 = car(v_43);
    if (v_44 == v_43) goto v_15;
    goto v_16;
v_15:
    v_43 = stack[0];
    if (!car_legal(v_43)) v_44 = carerror(v_43); else
    v_44 = car(v_43);
    v_43 = stack[0];
    if (!car_legal(v_43)) v_43 = cdrerror(v_43); else
    v_43 = cdr(v_43);
    {   LispObject fn = basic_elt(env, 3); // delete_edge
    v_43 = (*qfn2(fn))(fn, v_44, v_43);
    }
    env = stack[-2];
    stack[0] = v_43;
    goto v_7;
v_16:
    v_43 = stack[0];
    if (!car_legal(v_43)) v_44 = carerror(v_43); else
    v_44 = car(v_43);
    v_43 = stack[-1];
    v_43 = cons(v_44, v_43);
    env = stack[-2];
    stack[-1] = v_43;
    v_43 = stack[0];
    if (!car_legal(v_43)) v_43 = cdrerror(v_43); else
    v_43 = cdr(v_43);
    stack[0] = v_43;
    goto v_7;
    v_43 = nil;
    return onevalue(v_43);
}



// Code for liendimcom

static LispObject CC_liendimcom(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_589, v_590, v_591, v_592;
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
    v_589 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-9] = v_589;
    stack[0] = basic_elt(env, 1); // lie_dim
    v_589 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {   LispObject fn = basic_elt(env, 14); // aeval
    v_589 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 15); // setk
    v_589 = (*qfn2(fn))(fn, stack[0], v_589);
    }
    env = stack[-10];
    v_589 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-3] = v_589;
v_16:
    stack[0] = basic_elt(env, 2); // difference
    v_591 = basic_elt(env, 2); // difference
    v_590 = stack[-8];
    v_589 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_589 = list3(v_591, v_590, v_589);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 16); // aeval!*
    v_590 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    v_589 = stack[-3];
    v_589 = list3(stack[0], v_590, v_589);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 17); // aminusp!:
    v_589 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    if (v_589 == nil) goto v_21;
    goto v_15;
v_21:
    v_589 = stack[-3];
    stack[-2] = v_589;
v_35:
    stack[0] = basic_elt(env, 2); // difference
    v_589 = stack[-8];
    {   LispObject fn = basic_elt(env, 16); // aeval!*
    v_590 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    v_589 = stack[-2];
    v_589 = list3(stack[0], v_590, v_589);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 17); // aminusp!:
    v_589 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    if (v_589 == nil) goto v_40;
    goto v_34;
v_40:
    v_589 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-1] = v_589;
v_51:
    stack[0] = basic_elt(env, 2); // difference
    v_589 = stack[-8];
    {   LispObject fn = basic_elt(env, 16); // aeval!*
    v_590 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    v_589 = stack[-1];
    v_589 = list3(stack[0], v_590, v_589);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 17); // aminusp!:
    v_589 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    if (v_589 == nil) goto v_56;
    goto v_50;
v_56:
    v_592 = basic_elt(env, 3); // lie_cc
    v_591 = stack[-3];
    v_590 = stack[-2];
    v_589 = stack[-1];
    v_589 = list4(v_592, v_591, v_590, v_589);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 16); // aeval!*
    v_590 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    v_589 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {   LispObject fn = basic_elt(env, 18); // evalneq
    v_589 = (*qfn2(fn))(fn, v_590, v_589);
    }
    env = stack[-10];
    if (v_589 == nil) goto v_67;
    stack[0] = basic_elt(env, 1); // lie_dim
    v_589 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 16); // aeval!*
    v_589 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 15); // setk
    v_589 = (*qfn2(fn))(fn, stack[0], v_589);
    }
    env = stack[-10];
    stack[0] = basic_elt(env, 4); // lie_p
    v_589 = stack[-3];
    {   LispObject fn = basic_elt(env, 16); // aeval!*
    v_589 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 15); // setk
    v_589 = (*qfn2(fn))(fn, stack[0], v_589);
    }
    env = stack[-10];
    stack[0] = basic_elt(env, 5); // lie_q
    v_589 = stack[-2];
    {   LispObject fn = basic_elt(env, 16); // aeval!*
    v_589 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 15); // setk
    v_589 = (*qfn2(fn))(fn, stack[0], v_589);
    }
    env = stack[-10];
    v_589 = stack[-1];
    {   LispObject fn = basic_elt(env, 16); // aeval!*
    v_589 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    stack[-9] = v_589;
    v_589 = stack[-8];
    {   LispObject fn = basic_elt(env, 16); // aeval!*
    v_589 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    stack[-3] = v_589;
    v_591 = basic_elt(env, 6); // plus
    v_590 = stack[-8];
    v_589 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_589 = list3(v_591, v_590, v_589);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 16); // aeval!*
    v_589 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    stack[-1] = v_589;
    stack[-2] = v_589;
    goto v_65;
v_67:
v_65:
    v_589 = stack[-1];
    v_591 = basic_elt(env, 6); // plus
    v_590 = v_589;
    v_589 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_589 = list3(v_591, v_590, v_589);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 16); // aeval!*
    v_589 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    stack[-1] = v_589;
    goto v_51;
v_50:
    v_589 = stack[-2];
    v_591 = basic_elt(env, 6); // plus
    v_590 = v_589;
    v_589 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_589 = list3(v_591, v_590, v_589);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 16); // aeval!*
    v_589 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    stack[-2] = v_589;
    goto v_35;
v_34:
    v_589 = stack[-3];
    v_591 = basic_elt(env, 6); // plus
    v_590 = v_589;
    v_589 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_589 = list3(v_591, v_590, v_589);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 16); // aeval!*
    v_589 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    stack[-3] = v_589;
    goto v_16;
v_15:
    v_589 = basic_elt(env, 1); // lie_dim
    {   LispObject fn = basic_elt(env, 14); // aeval
    v_590 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    v_589 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {   LispObject fn = basic_elt(env, 18); // evalneq
    v_589 = (*qfn2(fn))(fn, v_590, v_589);
    }
    env = stack[-10];
    if (v_589 == nil) goto v_121;
    v_589 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-5] = v_589;
v_129:
    stack[0] = basic_elt(env, 2); // difference
    v_591 = basic_elt(env, 2); // difference
    v_590 = stack[-8];
    v_589 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_589 = list3(v_591, v_590, v_589);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 16); // aeval!*
    v_590 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    v_589 = stack[-5];
    v_589 = list3(stack[0], v_590, v_589);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 17); // aminusp!:
    v_589 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    if (v_589 == nil) goto v_134;
    goto v_128;
v_134:
    v_589 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-4] = v_589;
v_148:
    stack[0] = basic_elt(env, 2); // difference
    v_589 = stack[-8];
    {   LispObject fn = basic_elt(env, 16); // aeval!*
    v_590 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    v_589 = stack[-4];
    v_589 = list3(stack[0], v_590, v_589);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 17); // aminusp!:
    v_589 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    if (v_589 == nil) goto v_153;
    goto v_147;
v_153:
    stack[-1] = basic_elt(env, 7); // quotient
    v_592 = basic_elt(env, 3); // lie_cc
    v_591 = stack[-5];
    v_590 = stack[-4];
    v_589 = stack[-9];
    stack[0] = list4(v_592, v_591, v_590, v_589);
    env = stack[-10];
    v_592 = basic_elt(env, 3); // lie_cc
    v_591 = basic_elt(env, 4); // lie_p
    v_590 = basic_elt(env, 5); // lie_q
    v_589 = stack[-9];
    v_589 = list4(v_592, v_591, v_590, v_589);
    env = stack[-10];
    v_589 = list3(stack[-1], stack[0], v_589);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 16); // aeval!*
    v_589 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    stack[-6] = v_589;
    v_589 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-3] = v_589;
v_177:
    stack[0] = basic_elt(env, 2); // difference
    v_589 = stack[-8];
    {   LispObject fn = basic_elt(env, 16); // aeval!*
    v_590 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    v_589 = stack[-3];
    v_589 = list3(stack[0], v_590, v_589);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 17); // aminusp!:
    v_589 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    if (v_589 == nil) goto v_182;
    goto v_176;
v_182:
    v_592 = basic_elt(env, 3); // lie_cc
    v_591 = stack[-5];
    v_590 = stack[-4];
    v_589 = stack[-3];
    v_589 = list4(v_592, v_591, v_590, v_589);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 16); // aeval!*
    stack[-2] = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    stack[-1] = basic_elt(env, 8); // times
    stack[0] = stack[-6];
    v_592 = basic_elt(env, 3); // lie_cc
    v_591 = basic_elt(env, 4); // lie_p
    v_590 = basic_elt(env, 5); // lie_q
    v_589 = stack[-3];
    v_589 = list4(v_592, v_591, v_590, v_589);
    env = stack[-10];
    v_589 = list3(stack[-1], stack[0], v_589);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 16); // aeval!*
    v_589 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 18); // evalneq
    v_589 = (*qfn2(fn))(fn, stack[-2], v_589);
    }
    env = stack[-10];
    if (v_589 == nil) goto v_193;
    stack[0] = basic_elt(env, 1); // lie_dim
    v_589 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    {   LispObject fn = basic_elt(env, 16); // aeval!*
    v_589 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 15); // setk
    v_589 = (*qfn2(fn))(fn, stack[0], v_589);
    }
    env = stack[-10];
    v_589 = stack[-8];
    {   LispObject fn = basic_elt(env, 16); // aeval!*
    v_589 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    stack[-5] = v_589;
    v_591 = basic_elt(env, 6); // plus
    v_590 = stack[-8];
    v_589 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_589 = list3(v_591, v_590, v_589);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 16); // aeval!*
    v_589 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    stack[-4] = v_589;
    v_591 = basic_elt(env, 6); // plus
    v_590 = stack[-8];
    v_589 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_589 = list3(v_591, v_590, v_589);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 16); // aeval!*
    v_589 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    stack[-3] = v_589;
    goto v_191;
v_193:
v_191:
    v_589 = stack[-3];
    v_591 = basic_elt(env, 6); // plus
    v_590 = v_589;
    v_589 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_589 = list3(v_591, v_590, v_589);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 16); // aeval!*
    v_589 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    stack[-3] = v_589;
    goto v_177;
v_176:
    v_589 = stack[-4];
    v_591 = basic_elt(env, 6); // plus
    v_590 = v_589;
    v_589 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_589 = list3(v_591, v_590, v_589);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 16); // aeval!*
    v_589 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    stack[-4] = v_589;
    goto v_148;
v_147:
    v_589 = stack[-5];
    v_591 = basic_elt(env, 6); // plus
    v_590 = v_589;
    v_589 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_589 = list3(v_591, v_590, v_589);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 16); // aeval!*
    v_589 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    stack[-5] = v_589;
    goto v_129;
v_128:
    v_589 = basic_elt(env, 1); // lie_dim
    {   LispObject fn = basic_elt(env, 14); // aeval
    v_590 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    v_589 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 19); // evalequal
    v_589 = (*qfn2(fn))(fn, v_590, v_589);
    }
    env = stack[-10];
    if (v_589 == nil) goto v_250;
    stack[0] = basic_elt(env, 9); // lie_help
    v_589 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {   LispObject fn = basic_elt(env, 14); // aeval
    v_589 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 15); // setk
    v_589 = (*qfn2(fn))(fn, stack[0], v_589);
    }
    env = stack[-10];
    v_589 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-6] = v_589;
v_262:
    stack[0] = basic_elt(env, 2); // difference
    v_589 = stack[-8];
    {   LispObject fn = basic_elt(env, 16); // aeval!*
    v_590 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    v_589 = stack[-6];
    v_589 = list3(stack[0], v_590, v_589);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 17); // aminusp!:
    v_589 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    if (v_589 == nil) goto v_267;
    goto v_261;
v_267:
    v_589 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-5] = v_589;
v_278:
    stack[0] = basic_elt(env, 2); // difference
    v_589 = stack[-8];
    {   LispObject fn = basic_elt(env, 16); // aeval!*
    v_590 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    v_589 = stack[-5];
    v_589 = list3(stack[0], v_590, v_589);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 17); // aminusp!:
    v_589 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    if (v_589 == nil) goto v_283;
    goto v_277;
v_283:
    v_589 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-4] = v_589;
    v_589 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-3] = v_589;
v_300:
    stack[0] = basic_elt(env, 2); // difference
    v_589 = stack[-8];
    {   LispObject fn = basic_elt(env, 16); // aeval!*
    v_590 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    v_589 = stack[-4];
    v_589 = list3(stack[0], v_590, v_589);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 17); // aminusp!:
    v_589 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    if (v_589 == nil) goto v_306;
    v_589 = stack[-3];
    v_590 = v_589;
    goto v_299;
v_306:
    stack[-2] = basic_elt(env, 6); // plus
    stack[-1] = basic_elt(env, 8); // times
    v_592 = basic_elt(env, 3); // lie_cc
    v_591 = basic_elt(env, 4); // lie_p
    v_590 = basic_elt(env, 5); // lie_q
    v_589 = stack[-4];
    stack[0] = list4(v_592, v_591, v_590, v_589);
    env = stack[-10];
    v_592 = basic_elt(env, 3); // lie_cc
    v_591 = stack[-4];
    v_590 = stack[-6];
    v_589 = stack[-5];
    v_589 = list4(v_592, v_591, v_590, v_589);
    env = stack[-10];
    v_589 = list3(stack[-1], stack[0], v_589);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 16); // aeval!*
    v_590 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    v_589 = stack[-3];
    v_589 = list3(stack[-2], v_590, v_589);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 16); // aeval!*
    v_589 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    stack[-3] = v_589;
    v_589 = stack[-4];
    v_591 = basic_elt(env, 6); // plus
    v_590 = v_589;
    v_589 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_589 = list3(v_591, v_590, v_589);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 16); // aeval!*
    v_589 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    stack[-4] = v_589;
    goto v_300;
v_299:
    v_589 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {   LispObject fn = basic_elt(env, 18); // evalneq
    v_589 = (*qfn2(fn))(fn, v_590, v_589);
    }
    env = stack[-10];
    if (v_589 == nil) goto v_294;
    stack[0] = basic_elt(env, 9); // lie_help
    v_589 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 16); // aeval!*
    v_589 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 15); // setk
    v_589 = (*qfn2(fn))(fn, stack[0], v_589);
    }
    env = stack[-10];
    stack[0] = basic_elt(env, 10); // lie_s
    v_589 = stack[-6];
    {   LispObject fn = basic_elt(env, 16); // aeval!*
    v_589 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 15); // setk
    v_589 = (*qfn2(fn))(fn, stack[0], v_589);
    }
    env = stack[-10];
    v_589 = stack[-5];
    {   LispObject fn = basic_elt(env, 16); // aeval!*
    v_589 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    stack[-9] = v_589;
    v_591 = basic_elt(env, 6); // plus
    v_590 = stack[-8];
    v_589 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_589 = list3(v_591, v_590, v_589);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 16); // aeval!*
    v_589 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    stack[-5] = v_589;
    stack[-6] = v_589;
    goto v_292;
v_294:
v_292:
    v_589 = stack[-5];
    v_591 = basic_elt(env, 6); // plus
    v_590 = v_589;
    v_589 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_589 = list3(v_591, v_590, v_589);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 16); // aeval!*
    v_589 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    stack[-5] = v_589;
    goto v_278;
v_277:
    v_589 = stack[-6];
    v_591 = basic_elt(env, 6); // plus
    v_590 = v_589;
    v_589 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_589 = list3(v_591, v_590, v_589);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 16); // aeval!*
    v_589 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    stack[-6] = v_589;
    goto v_262;
v_261:
    v_589 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-1] = v_589;
v_371:
    stack[0] = basic_elt(env, 2); // difference
    v_589 = stack[-8];
    {   LispObject fn = basic_elt(env, 16); // aeval!*
    v_590 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    v_589 = stack[-1];
    v_589 = list3(stack[0], v_590, v_589);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 17); // aminusp!:
    v_589 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    if (v_589 == nil) goto v_376;
    goto v_370;
v_376:
    v_591 = basic_elt(env, 11); // lientrans
    v_590 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_589 = stack[-1];
    stack[0] = list3(v_591, v_590, v_589);
    env = stack[-10];
    v_592 = basic_elt(env, 3); // lie_cc
    v_591 = basic_elt(env, 4); // lie_p
    v_590 = basic_elt(env, 5); // lie_q
    v_589 = stack[-1];
    v_589 = list4(v_592, v_591, v_590, v_589);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 16); // aeval!*
    v_589 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 15); // setk
    v_589 = (*qfn2(fn))(fn, stack[0], v_589);
    }
    env = stack[-10];
    v_589 = stack[-1];
    v_591 = basic_elt(env, 6); // plus
    v_590 = v_589;
    v_589 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_589 = list3(v_591, v_590, v_589);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 16); // aeval!*
    v_589 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    stack[-1] = v_589;
    goto v_371;
v_370:
    v_589 = basic_elt(env, 9); // lie_help
    {   LispObject fn = basic_elt(env, 14); // aeval
    v_590 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    v_589 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {   LispObject fn = basic_elt(env, 19); // evalequal
    v_589 = (*qfn2(fn))(fn, v_590, v_589);
    }
    env = stack[-10];
    if (v_589 == nil) goto v_405;
    v_591 = basic_elt(env, 11); // lientrans
    v_590 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_589 = basic_elt(env, 4); // lie_p
    stack[-1] = list3(v_591, v_590, v_589);
    env = stack[-10];
    v_591 = basic_elt(env, 11); // lientrans
    v_590 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_589 = basic_elt(env, 5); // lie_q
    stack[0] = list3(v_591, v_590, v_589);
    env = stack[-10];
    v_589 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 14); // aeval
    v_589 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 15); // setk
    v_589 = (*qfn2(fn))(fn, stack[0], v_589);
    }
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 15); // setk
    v_589 = (*qfn2(fn))(fn, stack[-1], v_589);
    }
    env = stack[-10];
    stack[0] = basic_elt(env, 12); // lie_kk!*
    v_589 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 14); // aeval
    v_589 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 15); // setk
    v_589 = (*qfn2(fn))(fn, stack[0], v_589);
    }
    env = stack[-10];
    v_589 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-1] = v_589;
v_429:
    stack[0] = basic_elt(env, 2); // difference
    v_589 = stack[-8];
    {   LispObject fn = basic_elt(env, 16); // aeval!*
    v_590 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    v_589 = stack[-1];
    v_589 = list3(stack[0], v_590, v_589);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 17); // aminusp!:
    v_589 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    if (v_589 == nil) goto v_434;
    goto v_428;
v_434:
    v_592 = basic_elt(env, 3); // lie_cc
    v_591 = basic_elt(env, 4); // lie_p
    v_590 = basic_elt(env, 5); // lie_q
    v_589 = stack[-1];
    v_589 = list4(v_592, v_591, v_590, v_589);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 16); // aeval!*
    v_590 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    v_589 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {   LispObject fn = basic_elt(env, 18); // evalneq
    v_589 = (*qfn2(fn))(fn, v_590, v_589);
    }
    env = stack[-10];
    if (v_589 == nil) goto v_445;
    stack[0] = stack[-1];
    v_589 = basic_elt(env, 4); // lie_p
    {   LispObject fn = basic_elt(env, 16); // aeval!*
    v_589 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 18); // evalneq
    v_589 = (*qfn2(fn))(fn, stack[0], v_589);
    }
    env = stack[-10];
    if (v_589 == nil) goto v_445;
    stack[0] = stack[-1];
    v_589 = basic_elt(env, 5); // lie_q
    {   LispObject fn = basic_elt(env, 16); // aeval!*
    v_589 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 18); // evalneq
    v_589 = (*qfn2(fn))(fn, stack[0], v_589);
    }
    env = stack[-10];
    if (v_589 == nil) goto v_445;
    stack[0] = basic_elt(env, 13); // lie_tt
    v_589 = stack[-1];
    {   LispObject fn = basic_elt(env, 16); // aeval!*
    v_589 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 15); // setk
    v_589 = (*qfn2(fn))(fn, stack[0], v_589);
    }
    env = stack[-10];
    v_591 = basic_elt(env, 6); // plus
    v_590 = stack[-8];
    v_589 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_589 = list3(v_591, v_590, v_589);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 16); // aeval!*
    v_589 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    stack[-1] = v_589;
    goto v_443;
v_445:
v_443:
    v_589 = stack[-1];
    v_591 = basic_elt(env, 6); // plus
    v_590 = v_589;
    v_589 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_589 = list3(v_591, v_590, v_589);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 16); // aeval!*
    v_589 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    stack[-1] = v_589;
    goto v_429;
v_428:
    goto v_403;
v_405:
    v_591 = basic_elt(env, 11); // lientrans
    v_590 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_589 = basic_elt(env, 10); // lie_s
    stack[-7] = list3(v_591, v_590, v_589);
    env = stack[-10];
    stack[-6] = basic_elt(env, 7); // quotient
    v_592 = basic_elt(env, 3); // lie_cc
    v_591 = basic_elt(env, 4); // lie_p
    v_590 = basic_elt(env, 5); // lie_q
    v_589 = stack[-9];
    stack[-5] = list4(v_592, v_591, v_590, v_589);
    env = stack[-10];
    v_589 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-4] = v_589;
    v_589 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-3] = v_589;
v_501:
    stack[0] = basic_elt(env, 2); // difference
    v_589 = stack[-8];
    {   LispObject fn = basic_elt(env, 16); // aeval!*
    v_590 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    v_589 = stack[-4];
    v_589 = list3(stack[0], v_590, v_589);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 17); // aminusp!:
    v_589 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    if (v_589 == nil) goto v_507;
    v_589 = stack[-3];
    goto v_500;
v_507:
    stack[-2] = basic_elt(env, 6); // plus
    stack[-1] = basic_elt(env, 8); // times
    v_592 = basic_elt(env, 3); // lie_cc
    v_591 = basic_elt(env, 4); // lie_p
    v_590 = basic_elt(env, 5); // lie_q
    v_589 = stack[-4];
    stack[0] = list4(v_592, v_591, v_590, v_589);
    env = stack[-10];
    v_592 = basic_elt(env, 3); // lie_cc
    v_591 = stack[-4];
    v_590 = basic_elt(env, 10); // lie_s
    v_589 = stack[-9];
    v_589 = list4(v_592, v_591, v_590, v_589);
    env = stack[-10];
    v_589 = list3(stack[-1], stack[0], v_589);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 16); // aeval!*
    v_590 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    v_589 = stack[-3];
    v_589 = list3(stack[-2], v_590, v_589);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 16); // aeval!*
    v_589 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    stack[-3] = v_589;
    v_589 = stack[-4];
    v_591 = basic_elt(env, 6); // plus
    v_590 = v_589;
    v_589 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_589 = list3(v_591, v_590, v_589);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 16); // aeval!*
    v_589 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    stack[-4] = v_589;
    goto v_501;
v_500:
    v_589 = list3(stack[-6], stack[-5], v_589);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 14); // aeval
    v_589 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 15); // setk
    v_589 = (*qfn2(fn))(fn, stack[-7], v_589);
    }
    env = stack[-10];
    v_589 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-1] = v_589;
v_542:
    stack[0] = basic_elt(env, 2); // difference
    v_589 = stack[-8];
    {   LispObject fn = basic_elt(env, 16); // aeval!*
    v_590 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    v_589 = stack[-1];
    v_589 = list3(stack[0], v_590, v_589);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 17); // aminusp!:
    v_589 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    if (v_589 == nil) goto v_547;
    goto v_541;
v_547:
    v_592 = basic_elt(env, 3); // lie_cc
    v_591 = basic_elt(env, 4); // lie_p
    v_590 = basic_elt(env, 5); // lie_q
    v_589 = stack[-1];
    v_589 = list4(v_592, v_591, v_590, v_589);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 16); // aeval!*
    v_590 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    v_589 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {   LispObject fn = basic_elt(env, 18); // evalneq
    v_589 = (*qfn2(fn))(fn, v_590, v_589);
    }
    env = stack[-10];
    if (v_589 == nil) goto v_558;
    stack[0] = stack[-1];
    v_589 = basic_elt(env, 10); // lie_s
    {   LispObject fn = basic_elt(env, 16); // aeval!*
    v_589 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 18); // evalneq
    v_589 = (*qfn2(fn))(fn, stack[0], v_589);
    }
    env = stack[-10];
    if (v_589 == nil) goto v_558;
    stack[0] = basic_elt(env, 13); // lie_tt
    v_589 = stack[-1];
    {   LispObject fn = basic_elt(env, 16); // aeval!*
    v_589 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 15); // setk
    v_589 = (*qfn2(fn))(fn, stack[0], v_589);
    }
    env = stack[-10];
    v_591 = basic_elt(env, 6); // plus
    v_590 = stack[-8];
    v_589 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_589 = list3(v_591, v_590, v_589);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 16); // aeval!*
    v_589 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    stack[-1] = v_589;
    goto v_556;
v_558:
v_556:
    v_589 = stack[-1];
    v_591 = basic_elt(env, 6); // plus
    v_590 = v_589;
    v_589 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_589 = list3(v_591, v_590, v_589);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 16); // aeval!*
    v_589 = (*qfn1(fn))(fn, v_589);
    }
    env = stack[-10];
    stack[-1] = v_589;
    goto v_542;
v_541:
    goto v_403;
v_403:
    goto v_248;
v_250:
v_248:
    goto v_119;
v_121:
v_119:
    v_589 = nil;
    return onevalue(v_589);
}



// Code for mo!=pair

static LispObject CC_moMpair(LispObject env,
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
    stack[-1] = v_2;
// end of prologue
    v_37 = nil;
v_8:
    v_38 = stack[-1];
    if (v_38 == nil) goto v_15;
    else goto v_16;
v_15:
    v_38 = lisp_true;
    goto v_14;
v_16:
    v_38 = stack[0];
    v_38 = (v_38 == nil ? lisp_true : nil);
    goto v_14;
    v_38 = nil;
v_14:
    if (v_38 == nil) goto v_12;
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn1(fn))(fn, v_37);
    }
v_12:
    v_38 = stack[-1];
    if (!car_legal(v_38)) v_39 = carerror(v_38); else
    v_39 = car(v_38);
    v_38 = stack[0];
    if (!car_legal(v_38)) v_38 = carerror(v_38); else
    v_38 = car(v_38);
    v_37 = acons(v_39, v_38, v_37);
    env = stack[-2];
    v_38 = stack[-1];
    if (!car_legal(v_38)) v_38 = cdrerror(v_38); else
    v_38 = cdr(v_38);
    stack[-1] = v_38;
    v_38 = stack[0];
    if (!car_legal(v_38)) v_38 = cdrerror(v_38); else
    v_38 = cdr(v_38);
    stack[0] = v_38;
    goto v_8;
    v_37 = nil;
    return onevalue(v_37);
}



// Code for gi

static LispObject CC_gi(LispObject env,
                         LispObject v_3, LispObject v_4)
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
        push(v_3,v_4);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_4,v_3);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil, nil, nil, nil, nil);
    stack_popper stack_popper_var(6);
// copy arguments values to proper place
    stack[-3] = v_4;
    v_43 = v_3;
// end of prologue
// Binding gg!*
// FLUIDBIND: reloadenv=5 litvec-offset=1 saveloc=4
{   bind_fluid_stack bind_fluid_var(-5, 1, -4);
    setvalue(basic_elt(env, 1), v_43); // gg!*
    stack[-2] = nil;
    v_43 = qvalue(basic_elt(env, 1)); // gg!*
    stack[-1] = v_43;
v_17:
    v_43 = stack[-1];
    if (v_43 == nil) goto v_21;
    else goto v_22;
v_21:
    goto v_16;
v_22:
    v_43 = stack[-1];
    if (!car_legal(v_43)) v_43 = carerror(v_43); else
    v_43 = car(v_43);
    stack[0] = v_43;
    v_43 = stack[0];
    if (!car_legal(v_43)) v_43 = cdrerror(v_43); else
    v_43 = cdr(v_43);
    {   LispObject fn = basic_elt(env, 2); // class
    v_44 = (*qfn1(fn))(fn, v_43);
    }
    env = stack[-5];
    v_43 = stack[-3];
    if (equal(v_44, v_43)) goto v_30;
    else goto v_31;
v_30:
    v_44 = stack[0];
    v_43 = stack[-2];
    v_43 = cons(v_44, v_43);
    env = stack[-5];
    stack[-2] = v_43;
    goto v_29;
v_31:
v_29:
    v_43 = stack[-1];
    if (!car_legal(v_43)) v_43 = cdrerror(v_43); else
    v_43 = cdr(v_43);
    stack[-1] = v_43;
    goto v_17;
v_16:
    v_43 = stack[-2];
    ;}  // end of a binding scope
    return onevalue(v_43);
}



// Code for !*sf2exb

static LispObject CC_Hsf2exb(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_47, v_48, v_49;
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
    v_48 = stack[-1];
    v_47 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // degr
    v_48 = (*qfn2(fn))(fn, v_48, v_47);
    }
    env = stack[-3];
    v_47 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_48 == v_47) goto v_11;
    else goto v_12;
v_11:
    v_47 = stack[-1];
    if (v_47 == nil) goto v_19;
    else goto v_20;
v_19:
    v_47 = stack[-2];
    {
        LispObject fn = basic_elt(env, 2); // nreverse
        return (*qfn1(fn))(fn, v_47);
    }
v_20:
    stack[0] = stack[-2];
    v_47 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_48 = ncons(v_47);
    env = stack[-3];
    v_47 = stack[-1];
    v_47 = cons(v_48, v_47);
    env = stack[-3];
    v_47 = ncons(v_47);
    env = stack[-3];
    {
        LispObject v_53 = stack[0];
        LispObject fn = basic_elt(env, 2); // nreverse
        return (*qfn2(fn))(fn, v_53, v_47);
    }
    goto v_10;
v_12:
    v_47 = stack[-1];
    if (!car_legal(v_47)) v_47 = carerror(v_47); else
    v_47 = car(v_47);
    if (!car_legal(v_47)) v_47 = carerror(v_47); else
    v_47 = car(v_47);
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    v_49 = ncons(v_47);
    env = stack[-3];
    v_47 = stack[-1];
    if (!car_legal(v_47)) v_47 = carerror(v_47); else
    v_47 = car(v_47);
    if (!car_legal(v_47)) v_48 = cdrerror(v_47); else
    v_48 = cdr(v_47);
    v_47 = stack[-2];
    v_47 = acons(v_49, v_48, v_47);
    env = stack[-3];
    stack[-2] = v_47;
    v_47 = stack[-1];
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    stack[-1] = v_47;
    goto v_8;
v_10:
    v_47 = nil;
    return onevalue(v_47);
}



// Code for prepsqyy

static LispObject CC_prepsqyy(LispObject env,
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
    v_18 = basic_elt(env, 1); // !*sq
    if (!consp(v_19)) goto v_7;
    v_19 = car(v_19);
    if (v_19 == v_18) goto v_6;
    else goto v_7;
v_6:
    v_18 = v_20;
    if (!car_legal(v_18)) v_18 = cdrerror(v_18); else
    v_18 = cdr(v_18);
    if (!car_legal(v_18)) v_18 = carerror(v_18); else
    v_18 = car(v_18);
    {
        LispObject fn = basic_elt(env, 2); // prepsqxx
        return (*qfn1(fn))(fn, v_18);
    }
v_7:
    v_18 = v_20;
    goto v_5;
    v_18 = nil;
v_5:
    return onevalue(v_18);
}



// Code for ordexp

static LispObject CC_ordexp(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_41, v_42, v_43, v_44;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_42 = v_3;
    v_43 = v_2;
// end of prologue
v_7:
    v_41 = v_43;
    if (v_41 == nil) goto v_10;
    else goto v_11;
v_10:
    v_41 = lisp_true;
    goto v_6;
v_11:
    v_41 = v_43;
    if (!car_legal(v_41)) v_44 = carerror(v_41); else
    v_44 = car(v_41);
    v_41 = v_42;
    if (!car_legal(v_41)) v_41 = carerror(v_41); else
    v_41 = car(v_41);
    if (v_44 == v_41) goto v_14;
    else goto v_15;
v_14:
    v_41 = v_43;
    if (!car_legal(v_41)) v_41 = cdrerror(v_41); else
    v_41 = cdr(v_41);
    v_43 = v_41;
    v_41 = v_42;
    if (!car_legal(v_41)) v_41 = cdrerror(v_41); else
    v_41 = cdr(v_41);
    v_42 = v_41;
    goto v_7;
v_15:
    v_41 = v_43;
    if (!car_legal(v_41)) v_41 = carerror(v_41); else
    v_41 = car(v_41);
    if (v_41 == nil) goto v_24;
    else goto v_25;
v_24:
    v_41 = nil;
    goto v_6;
v_25:
    v_41 = v_42;
    if (!car_legal(v_41)) v_41 = carerror(v_41); else
    v_41 = car(v_41);
    if (v_41 == nil) goto v_29;
    else goto v_30;
v_29:
    v_41 = lisp_true;
    goto v_6;
v_30:
    v_41 = v_43;
    if (!car_legal(v_41)) v_41 = carerror(v_41); else
    v_41 = car(v_41);
    if (!car_legal(v_42)) v_42 = carerror(v_42); else
    v_42 = car(v_42);
    {
        LispObject fn = basic_elt(env, 1); // ordop
        return (*qfn2(fn))(fn, v_41, v_42);
    }
    v_41 = nil;
v_6:
    return onevalue(v_41);
}



// Code for cde_mkset

static LispObject CC_cde_mkset(LispObject env,
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
// space for vars preserved across procedure calls
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_38 = nil;
v_7:
    v_36 = stack[0];
    if (v_36 == nil) goto v_11;
    v_36 = stack[0];
    if (!car_legal(v_36)) v_37 = carerror(v_36); else
    v_37 = car(v_36);
    v_36 = stack[0];
    if (!car_legal(v_36)) v_36 = cdrerror(v_36); else
    v_36 = cdr(v_36);
    v_36 = Lmember(nil, v_37, v_36);
    if (v_36 == nil) goto v_16;
    v_36 = stack[0];
    if (!car_legal(v_36)) v_36 = cdrerror(v_36); else
    v_36 = cdr(v_36);
    stack[0] = v_36;
    goto v_7;
v_16:
    v_36 = stack[0];
    if (!car_legal(v_36)) v_36 = carerror(v_36); else
    v_36 = car(v_36);
    v_37 = v_38;
    v_36 = cons(v_36, v_37);
    env = stack[-1];
    v_38 = v_36;
    v_36 = stack[0];
    if (!car_legal(v_36)) v_36 = cdrerror(v_36); else
    v_36 = cdr(v_36);
    stack[0] = v_36;
    goto v_7;
    goto v_9;
v_11:
    v_36 = v_38;
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn1(fn))(fn, v_36);
    }
v_9:
    v_36 = nil;
    return onevalue(v_36);
}



// Code for small!-random!-number

static LispObject CC_smallKrandomKnumber(LispObject env)
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// end of prologue
    {   LispObject fn = basic_elt(env, 4); // next!-random!-number
    v_41 = (*qfn0(fn))(fn);
    }
    env = stack[-3];
    v_40 = static_cast<LispObject>(16000)+TAG_FIXNUM; // 1000
    v_40 = Cremainder(v_41, v_40);
    env = stack[-3];
    stack[-2] = v_40;
    {   LispObject fn = basic_elt(env, 4); // next!-random!-number
    v_41 = (*qfn0(fn))(fn);
    }
    env = stack[-3];
    v_40 = static_cast<LispObject>(16000)+TAG_FIXNUM; // 1000
    stack[0] = Cremainder(v_41, v_40);
    env = stack[-3];
    v_41 = static_cast<LispObject>(16000)+TAG_FIXNUM; // 1000
    v_40 = stack[-2];
    v_40 = times2(v_41, v_40);
    env = stack[-3];
    v_40 = plus2(stack[0], v_40);
    env = stack[-3];
    stack[-2] = v_40;
    v_41 = stack[-2];
    v_40 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_40 = static_cast<LispObject>(lessp2(v_41, v_40));
    v_40 = v_40 ? lisp_true : nil;
    env = stack[-3];
    if (v_40 == nil) goto v_19;
    v_41 = stack[-2];
    v_40 = static_cast<LispObject>(16000000)+TAG_FIXNUM; // 1000000
    v_40 = plus2(v_41, v_40);
    env = stack[-3];
    stack[-2] = v_40;
    goto v_17;
v_19:
v_17:
    stack[-1] = basic_elt(env, 1); // 1.0
    stack[0] = basic_elt(env, 2); // 1.5
    v_40 = stack[-2];
    v_41 = Lfloat(nil, v_40);
    env = stack[-3];
    v_40 = basic_elt(env, 3); // 1.0e+06
    v_40 = quot2(v_41, v_40);
    env = stack[-3];
    v_40 = times2(stack[0], v_40);
    env = stack[-3];
    v_40 = plus2(stack[-1], v_40);
    env = stack[-3];
    stack[-2] = v_40;
    v_41 = stack[-2];
    v_40 = stack[-2];
    v_40 = times2(v_41, v_40);
    env = stack[-3];
    stack[-2] = v_40;
    v_40 = stack[-2];
    {   LispObject fn = basic_elt(env, 5); // exp
    v_40 = (*qfn1(fn))(fn, v_40);
    }
        return Ltruncate(nil, v_40);
    return onevalue(v_40);
}



// Code for ofsf_updsignpow

static LispObject CC_ofsf_updsignpow(LispObject env,
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
    v_26 = basic_elt(env, 1); // (equal greaterp geq neq)
    v_26 = Lmemq(nil, v_27, v_26);
    if (v_26 == nil) goto v_8;
    v_26 = v_29;
    goto v_6;
v_8:
    v_27 = v_29;
    v_26 = basic_elt(env, 2); // (lessp leq)
    v_26 = Lmemq(nil, v_27, v_26);
    if (v_26 == nil) goto v_14;
    v_26 = v_29;
    v_27 = v_28;
    v_27 = Levenp(nil, v_27);
    env = stack[0];
    v_27 = (v_27 == nil ? lisp_true : nil);
    {
        LispObject fn = basic_elt(env, 4); // ofsf_canegrel
        return (*qfn2(fn))(fn, v_26, v_27);
    }
v_14:
    v_26 = basic_elt(env, 3); // unknown
    goto v_6;
    v_26 = nil;
v_6:
    return onevalue(v_26);
}



// Code for chrstrem

static LispObject CC_chrstrem(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_298, v_299;
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
    v_298 = qvalue(basic_elt(env, 1)); // !*trwu
    if (v_298 == nil) goto v_14;
    else goto v_12;
v_14:
    v_298 = qvalue(basic_elt(env, 2)); // !*trchrstrem
    if (v_298 == nil) goto v_16;
    else goto v_12;
v_16:
    goto v_13;
v_12:
    v_298 = lisp_true;
    {   LispObject fn = basic_elt(env, 13); // terpri!*
    v_298 = (*qfn1(fn))(fn, v_298);
    }
    env = stack[-5];
    v_298 = basic_elt(env, 3); // "--------------------------------------------------------"
    {   LispObject fn = basic_elt(env, 14); // prin2t!*
    v_298 = (*qfn1(fn))(fn, v_298);
    }
    env = stack[-5];
    goto v_11;
v_13:
v_11:
v_25:
    v_298 = stack[-3];
    {   LispObject fn = basic_elt(env, 15); // wusort
    v_298 = (*qfn1(fn))(fn, v_298);
    }
    env = stack[-5];
    stack[-3] = v_298;
    v_298 = qvalue(basic_elt(env, 1)); // !*trwu
    if (v_298 == nil) goto v_32;
    else goto v_30;
v_32:
    v_298 = qvalue(basic_elt(env, 2)); // !*trchrstrem
    if (v_298 == nil) goto v_34;
    else goto v_30;
v_34:
    goto v_31;
v_30:
    v_298 = basic_elt(env, 4); // "The new pol-set in ascending order is"
    {   LispObject fn = basic_elt(env, 14); // prin2t!*
    v_298 = (*qfn1(fn))(fn, v_298);
    }
    env = stack[-5];
    v_298 = stack[-3];
    stack[0] = v_298;
v_41:
    v_298 = stack[0];
    if (v_298 == nil) goto v_45;
    else goto v_46;
v_45:
    goto v_40;
v_46:
    v_298 = stack[0];
    if (!car_legal(v_298)) v_298 = carerror(v_298); else
    v_298 = car(v_298);
    {   LispObject fn = basic_elt(env, 16); // printsf
    v_298 = (*qfn1(fn))(fn, v_298);
    }
    env = stack[-5];
    v_298 = stack[0];
    if (!car_legal(v_298)) v_298 = cdrerror(v_298); else
    v_298 = cdr(v_298);
    stack[0] = v_298;
    goto v_41;
v_40:
    v_298 = lisp_true;
    {   LispObject fn = basic_elt(env, 13); // terpri!*
    v_298 = (*qfn1(fn))(fn, v_298);
    }
    env = stack[-5];
    goto v_29;
v_31:
v_29:
    v_298 = stack[-3];
    if (!car_legal(v_298)) v_298 = carerror(v_298); else
    v_298 = car(v_298);
    {   LispObject fn = basic_elt(env, 17); // wuconstantp
    v_298 = (*qfn1(fn))(fn, v_298);
    }
    env = stack[-5];
    if (v_298 == nil) goto v_62;
    v_298 = qvalue(basic_elt(env, 1)); // !*trwu
    if (v_298 == nil) goto v_69;
    v_298 = basic_elt(env, 5); // "which is trivially trivial"
    {   LispObject fn = basic_elt(env, 14); // prin2t!*
    v_298 = (*qfn1(fn))(fn, v_298);
    }
    env = stack[-5];
    goto v_67;
v_69:
v_67:
    v_298 = basic_elt(env, 6); // inconsistent
    stack[-2] = v_298;
    v_298 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_298 = ncons(v_298);
    env = stack[-5];
    stack[-4] = v_298;
    goto v_60;
v_62:
    v_298 = nil;
    stack[-2] = v_298;
    v_298 = stack[-3];
    {   LispObject fn = basic_elt(env, 18); // pickbasicset
    v_298 = (*qfn1(fn))(fn, v_298);
    }
    env = stack[-5];
    v_298 = Lnreverse(nil, v_298);
    env = stack[-5];
    stack[-4] = v_298;
    goto v_60;
v_60:
    v_298 = qvalue(basic_elt(env, 1)); // !*trwu
    if (v_298 == nil) goto v_87;
    v_298 = stack[-2];
    if (v_298 == nil) goto v_90;
    else goto v_87;
v_90:
    v_298 = basic_elt(env, 7); // "A basic set is"
    {   LispObject fn = basic_elt(env, 14); // prin2t!*
    v_298 = (*qfn1(fn))(fn, v_298);
    }
    env = stack[-5];
    v_298 = stack[-4];
    v_298 = Lreverse(nil, v_298);
    env = stack[-5];
    stack[0] = v_298;
v_97:
    v_298 = stack[0];
    if (v_298 == nil) goto v_102;
    else goto v_103;
v_102:
    goto v_96;
v_103:
    v_298 = stack[0];
    if (!car_legal(v_298)) v_298 = carerror(v_298); else
    v_298 = car(v_298);
    {   LispObject fn = basic_elt(env, 16); // printsf
    v_298 = (*qfn1(fn))(fn, v_298);
    }
    env = stack[-5];
    v_298 = stack[0];
    if (!car_legal(v_298)) v_298 = cdrerror(v_298); else
    v_298 = cdr(v_298);
    stack[0] = v_298;
    goto v_97;
v_96:
    v_298 = lisp_true;
    {   LispObject fn = basic_elt(env, 13); // terpri!*
    v_298 = (*qfn1(fn))(fn, v_298);
    }
    env = stack[-5];
    goto v_85;
v_87:
v_85:
    v_299 = stack[-3];
    v_298 = stack[-4];
    {   LispObject fn = basic_elt(env, 19); // setdiff
    v_298 = (*qfn2(fn))(fn, v_299, v_298);
    }
    env = stack[-5];
    stack[-1] = v_298;
v_122:
    v_298 = stack[-1];
    if (v_298 == nil) goto v_126;
    else goto v_127;
v_126:
    goto v_121;
v_127:
    v_298 = stack[-1];
    if (!car_legal(v_298)) v_298 = carerror(v_298); else
    v_298 = car(v_298);
    stack[0] = v_298;
    v_299 = stack[-2];
    v_298 = basic_elt(env, 6); // inconsistent
    if (v_299 == v_298) goto v_136;
    v_298 = qvalue(basic_elt(env, 1)); // !*trwu
    if (v_298 == nil) goto v_142;
    v_298 = basic_elt(env, 8); // "The remainder of "
    {   LispObject fn = basic_elt(env, 20); // prin2!*
    v_298 = (*qfn1(fn))(fn, v_298);
    }
    env = stack[-5];
    v_298 = stack[0];
    {   LispObject fn = basic_elt(env, 16); // printsf
    v_298 = (*qfn1(fn))(fn, v_298);
    }
    env = stack[-5];
    v_298 = basic_elt(env, 9); // "wrt the basic set is "
    {   LispObject fn = basic_elt(env, 20); // prin2!*
    v_298 = (*qfn1(fn))(fn, v_298);
    }
    env = stack[-5];
    goto v_140;
v_142:
v_140:
    v_299 = stack[0];
    v_298 = stack[-4];
    {   LispObject fn = basic_elt(env, 21); // findremainder
    v_298 = (*qfn2(fn))(fn, v_299, v_298);
    }
    env = stack[-5];
    stack[0] = v_298;
    v_298 = qvalue(basic_elt(env, 1)); // !*trwu
    if (v_298 == nil) goto v_156;
    v_298 = stack[0];
    {   LispObject fn = basic_elt(env, 16); // printsf
    v_298 = (*qfn1(fn))(fn, v_298);
    }
    env = stack[-5];
    goto v_154;
v_156:
v_154:
    v_298 = stack[0];
    if (v_298 == nil) goto v_164;
    v_298 = stack[0];
    {   LispObject fn = basic_elt(env, 17); // wuconstantp
    v_298 = (*qfn1(fn))(fn, v_298);
    }
    env = stack[-5];
    if (v_298 == nil) goto v_169;
    v_298 = basic_elt(env, 6); // inconsistent
    stack[-2] = v_298;
    v_298 = qvalue(basic_elt(env, 1)); // !*trwu
    if (v_298 == nil) goto v_176;
    v_298 = basic_elt(env, 10); // "which is a non-zero constant, and so"
    {   LispObject fn = basic_elt(env, 22); // prin2t
    v_298 = (*qfn1(fn))(fn, v_298);
    }
    env = stack[-5];
    v_298 = basic_elt(env, 11); // "the equations are inconsistent."
    {   LispObject fn = basic_elt(env, 22); // prin2t
    v_298 = (*qfn1(fn))(fn, v_298);
    }
    env = stack[-5];
    goto v_174;
v_176:
v_174:
    goto v_167;
v_169:
    v_298 = stack[0];
    {   LispObject fn = basic_elt(env, 23); // absf
    v_298 = (*qfn1(fn))(fn, v_298);
    }
    env = stack[-5];
    v_299 = ncons(v_298);
    env = stack[-5];
    v_298 = stack[-2];
    {   LispObject fn = basic_elt(env, 24); // union
    v_298 = (*qfn2(fn))(fn, v_299, v_298);
    }
    env = stack[-5];
    stack[-2] = v_298;
    goto v_167;
v_167:
    goto v_162;
v_164:
v_162:
    goto v_134;
v_136:
v_134:
    v_298 = stack[-1];
    if (!car_legal(v_298)) v_298 = cdrerror(v_298); else
    v_298 = cdr(v_298);
    stack[-1] = v_298;
    goto v_122;
v_121:
    v_298 = stack[-2];
    if (v_298 == nil) goto v_195;
    v_299 = stack[-2];
    v_298 = basic_elt(env, 6); // inconsistent
    if (v_299 == v_298) goto v_195;
    v_299 = stack[-3];
    v_298 = stack[-2];
    v_298 = Lappend_2(nil, v_299, v_298);
    env = stack[-5];
    stack[-3] = v_298;
    goto v_193;
v_195:
v_193:
    v_298 = stack[-2];
    if (v_298 == nil) goto v_210;
    else goto v_211;
v_210:
    v_298 = lisp_true;
    goto v_209;
v_211:
    v_299 = stack[-2];
    v_298 = basic_elt(env, 6); // inconsistent
    v_298 = (v_299 == v_298 ? lisp_true : nil);
    goto v_209;
    v_298 = nil;
v_209:
    if (v_298 == nil) goto v_206;
    else goto v_207;
v_206:
    goto v_25;
v_207:
    v_299 = stack[-2];
    v_298 = basic_elt(env, 6); // inconsistent
    if (v_299 == v_298) goto v_221;
    else goto v_222;
v_221:
    v_298 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_298 = ncons(v_298);
    env = stack[-5];
    stack[-4] = v_298;
    goto v_220;
v_222:
v_220:
    v_298 = qvalue(basic_elt(env, 1)); // !*trwu
    if (v_298 == nil) goto v_231;
    else goto v_229;
v_231:
    v_298 = qvalue(basic_elt(env, 2)); // !*trchrstrem
    if (v_298 == nil) goto v_233;
    else goto v_229;
v_233:
    goto v_230;
v_229:
    v_298 = lisp_true;
    {   LispObject fn = basic_elt(env, 13); // terpri!*
    v_298 = (*qfn1(fn))(fn, v_298);
    }
    env = stack[-5];
    v_298 = lisp_true;
    {   LispObject fn = basic_elt(env, 13); // terpri!*
    v_298 = (*qfn1(fn))(fn, v_298);
    }
    env = stack[-5];
    v_298 = basic_elt(env, 12); // "The final characteristic set is:"
    {   LispObject fn = basic_elt(env, 14); // prin2t!*
    v_298 = (*qfn1(fn))(fn, v_298);
    }
    env = stack[-5];
    v_298 = stack[-4];
    v_298 = Lreverse(nil, v_298);
    env = stack[-5];
    stack[0] = v_298;
v_244:
    v_298 = stack[0];
    if (v_298 == nil) goto v_249;
    else goto v_250;
v_249:
    goto v_243;
v_250:
    v_298 = stack[0];
    if (!car_legal(v_298)) v_298 = carerror(v_298); else
    v_298 = car(v_298);
    {   LispObject fn = basic_elt(env, 16); // printsf
    v_298 = (*qfn1(fn))(fn, v_298);
    }
    env = stack[-5];
    v_298 = stack[0];
    if (!car_legal(v_298)) v_298 = cdrerror(v_298); else
    v_298 = cdr(v_298);
    stack[0] = v_298;
    goto v_244;
v_243:
    goto v_228;
v_230:
v_228:
    v_298 = stack[-4];
    stack[-3] = v_298;
    v_298 = stack[-3];
    if (v_298 == nil) goto v_270;
    else goto v_271;
v_270:
    v_298 = nil;
    goto v_265;
v_271:
    v_298 = stack[-3];
    if (!car_legal(v_298)) v_298 = carerror(v_298); else
    v_298 = car(v_298);
    {   LispObject fn = basic_elt(env, 23); // absf
    v_298 = (*qfn1(fn))(fn, v_298);
    }
    env = stack[-5];
    v_298 = ncons(v_298);
    env = stack[-5];
    stack[-1] = v_298;
    stack[-2] = v_298;
v_266:
    v_298 = stack[-3];
    if (!car_legal(v_298)) v_298 = cdrerror(v_298); else
    v_298 = cdr(v_298);
    stack[-3] = v_298;
    v_298 = stack[-3];
    if (v_298 == nil) goto v_284;
    else goto v_285;
v_284:
    v_298 = stack[-2];
    goto v_265;
v_285:
    stack[0] = stack[-1];
    v_298 = stack[-3];
    if (!car_legal(v_298)) v_298 = carerror(v_298); else
    v_298 = car(v_298);
    {   LispObject fn = basic_elt(env, 23); // absf
    v_298 = (*qfn1(fn))(fn, v_298);
    }
    env = stack[-5];
    v_298 = ncons(v_298);
    env = stack[-5];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_298);
    v_298 = stack[-1];
    if (!car_legal(v_298)) v_298 = cdrerror(v_298); else
    v_298 = cdr(v_298);
    stack[-1] = v_298;
    goto v_266;
v_265:
        return Lnreverse(nil, v_298);
    return onevalue(v_298);
}



// Code for no_of_tm_sf

static LispObject CC_no_of_tm_sf(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_36;
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
    v_36 = stack[0];
    if (v_36 == nil) goto v_6;
    else goto v_7;
v_6:
    v_36 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_5;
v_7:
    v_36 = stack[0];
    v_36 = Lconsp(nil, v_36);
    env = stack[-2];
    if (v_36 == nil) goto v_14;
    else goto v_15;
v_14:
    v_36 = lisp_true;
    goto v_13;
v_15:
    v_36 = stack[0];
    if (!car_legal(v_36)) v_36 = carerror(v_36); else
    v_36 = car(v_36);
    v_36 = Lconsp(nil, v_36);
    env = stack[-2];
    v_36 = (v_36 == nil ? lisp_true : nil);
    goto v_13;
    v_36 = nil;
v_13:
    if (v_36 == nil) goto v_11;
    v_36 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_5;
v_11:
    v_36 = stack[0];
    if (!car_legal(v_36)) v_36 = carerror(v_36); else
    v_36 = car(v_36);
    if (!car_legal(v_36)) v_36 = cdrerror(v_36); else
    v_36 = cdr(v_36);
    {   LispObject fn = basic_elt(env, 0); // no_of_tm_sf
    stack[-1] = (*qfn1(fn))(fn, v_36);
    }
    env = stack[-2];
    v_36 = stack[0];
    if (!car_legal(v_36)) v_36 = cdrerror(v_36); else
    v_36 = cdr(v_36);
    {   LispObject fn = basic_elt(env, 0); // no_of_tm_sf
    v_36 = (*qfn1(fn))(fn, v_36);
    }
    {
        LispObject v_39 = stack[-1];
        return plus2(v_39, v_36);
    }
    v_36 = nil;
v_5:
    return onevalue(v_36);
}



// Code for giminusp!:

static LispObject CC_giminuspT(LispObject env,
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
    v_23 = v_2;
// end of prologue
    v_22 = v_23;
    if (!car_legal(v_22)) v_22 = cdrerror(v_22); else
    v_22 = cdr(v_22);
    if (!car_legal(v_22)) v_24 = carerror(v_22); else
    v_24 = car(v_22);
    v_22 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_24 == v_22) goto v_6;
    else goto v_7;
v_6:
    v_22 = v_23;
    if (!car_legal(v_22)) v_22 = cdrerror(v_22); else
    v_22 = cdr(v_22);
    if (!car_legal(v_22)) v_22 = cdrerror(v_22); else
    v_22 = cdr(v_22);
        return Lminusp(nil, v_22);
v_7:
    v_22 = v_23;
    if (!car_legal(v_22)) v_22 = cdrerror(v_22); else
    v_22 = cdr(v_22);
    if (!car_legal(v_22)) v_22 = carerror(v_22); else
    v_22 = car(v_22);
        return Lminusp(nil, v_22);
    v_22 = nil;
    return onevalue(v_22);
}



// Code for qqe_qadd!-inside

static LispObject CC_qqe_qaddKinside(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_114, v_115;
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
    v_114 = stack[0];
    if (v_114 == nil) goto v_17;
    else goto v_18;
v_17:
    v_114 = lisp_true;
    goto v_16;
v_18:
    v_114 = stack[0];
    v_114 = (consp(v_114) ? nil : lisp_true);
    goto v_16;
    v_114 = nil;
v_16:
    if (v_114 == nil) goto v_14;
    v_114 = nil;
    goto v_10;
v_14:
    v_114 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // qqe_op
    v_114 = (*qfn1(fn))(fn, v_114);
    }
    env = stack[-3];
    stack[-1] = v_114;
    v_115 = basic_elt(env, 1); // a
    v_114 = qvalue(basic_elt(env, 2)); // qqe_qadd!-location!*
    v_114 = cons(v_115, v_114);
    env = stack[-3];
    setvalue(basic_elt(env, 2), v_114); // qqe_qadd!-location!*
    v_114 = stack[0];
    v_114 = Lconsp(nil, v_114);
    env = stack[-3];
    if (v_114 == nil) goto v_34;
    v_114 = stack[-1];
    {   LispObject fn = basic_elt(env, 5); // qqe_qopaddp
    v_114 = (*qfn1(fn))(fn, v_114);
    }
    env = stack[-3];
    if (v_114 == nil) goto v_38;
    else goto v_34;
v_38:
    v_114 = lisp_true;
    stack[-2] = v_114;
    v_114 = stack[-1];
    v_115 = v_114;
    v_114 = stack[0];
    if (!car_legal(v_114)) v_114 = cdrerror(v_114); else
    v_114 = cdr(v_114);
    stack[-1] = v_114;
    v_114 = qvalue(basic_elt(env, 2)); // qqe_qadd!-location!*
    stack[0] = v_114;
v_48:
    v_114 = stack[-1];
    if (v_114 == nil) goto v_51;
    v_114 = stack[-2];
    if (v_114 == nil) goto v_51;
    goto v_52;
v_51:
    goto v_47;
v_52:
    v_115 = basic_elt(env, 3); // d
    v_114 = stack[0];
    v_114 = cons(v_115, v_114);
    env = stack[-3];
    setvalue(basic_elt(env, 2), v_114); // qqe_qadd!-location!*
    v_114 = qvalue(basic_elt(env, 2)); // qqe_qadd!-location!*
    stack[0] = v_114;
    v_114 = stack[-1];
    if (!consp(v_114)) goto v_69;
    v_114 = stack[-1];
    if (!car_legal(v_114)) v_114 = carerror(v_114); else
    v_114 = car(v_114);
    v_114 = Lconsp(nil, v_114);
    env = stack[-3];
    if (v_114 == nil) goto v_73;
    else goto v_74;
v_73:
    v_114 = nil;
    goto v_72;
v_74:
    v_114 = stack[-1];
    if (!car_legal(v_114)) v_114 = carerror(v_114); else
    v_114 = car(v_114);
    {   LispObject fn = basic_elt(env, 0); // qqe_qadd!-inside
    v_114 = (*qfn1(fn))(fn, v_114);
    }
    env = stack[-3];
    goto v_72;
    v_114 = nil;
v_72:
    goto v_67;
v_69:
    v_114 = nil;
    goto v_67;
    v_114 = nil;
v_67:
    if (v_114 == nil) goto v_65;
    v_114 = nil;
    stack[-2] = v_114;
    goto v_63;
v_65:
v_63:
    v_114 = stack[-1];
    v_115 = v_114;
    v_114 = stack[-1];
    if (!car_legal(v_114)) v_114 = cdrerror(v_114); else
    v_114 = cdr(v_114);
    stack[-1] = v_114;
    goto v_48;
v_47:
    v_114 = stack[-2];
    if (v_114 == nil) goto v_94;
    else goto v_95;
v_94:
    v_114 = v_115;
    goto v_10;
v_95:
    v_114 = nil;
    goto v_10;
    goto v_32;
v_34:
    v_114 = stack[0];
    v_114 = Lconsp(nil, v_114);
    env = stack[-3];
    if (v_114 == nil) goto v_103;
    v_114 = stack[-1];
    {   LispObject fn = basic_elt(env, 5); // qqe_qopaddp
    v_114 = (*qfn1(fn))(fn, v_114);
    }
    if (v_114 == nil) goto v_103;
    v_114 = lisp_true;
    goto v_10;
v_103:
    v_114 = nil;
    goto v_10;
v_32:
    v_114 = nil;
v_10:
    return onevalue(v_114);
}



// Code for dip_reduceconti

static LispObject CC_dip_reduceconti(LispObject env,
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
    v_21 = stack[-2];
    if (v_21 == nil) goto v_8;
    v_21 = stack[-2];
    {   LispObject fn = basic_elt(env, 1); // dip_lbc
    v_22 = (*qfn1(fn))(fn, v_21);
    }
    env = stack[-4];
    v_21 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // bc_quot
    stack[-3] = (*qfn2(fn))(fn, v_22, v_21);
    }
    env = stack[-4];
    v_21 = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // dip_evlmon
    stack[0] = (*qfn1(fn))(fn, v_21);
    }
    env = stack[-4];
    v_21 = stack[-2];
    {   LispObject fn = basic_elt(env, 4); // dip_mred
    v_22 = (*qfn1(fn))(fn, v_21);
    }
    env = stack[-4];
    v_21 = stack[-1];
    {   LispObject fn = basic_elt(env, 0); // dip_reduceconti
    v_21 = (*qfn2(fn))(fn, v_22, v_21);
    }
    env = stack[-4];
    {
        LispObject v_27 = stack[-3];
        LispObject v_28 = stack[0];
        LispObject fn = basic_elt(env, 5); // dip_moncomp
        return (*qfn3(fn))(fn, v_27, v_28, v_21);
    }
v_8:
    v_21 = nil;
    return onevalue(v_21);
}



// Code for crprimp

static LispObject CC_crprimp(LispObject env,
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
    v_26 = v_2;
// end of prologue
    v_25 = v_26;
    v_24 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_25 == v_24) goto v_6;
    else goto v_7;
v_6:
    v_24 = basic_elt(env, 1); // i
    goto v_5;
v_7:
    v_25 = v_26;
    v_24 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    if (v_25 == v_24) goto v_11;
    else goto v_12;
v_11:
    v_24 = basic_elt(env, 2); // minus
    v_25 = basic_elt(env, 1); // i
    return list2(v_24, v_25);
v_12:
    v_24 = basic_elt(env, 3); // times
    v_25 = v_26;
    v_26 = basic_elt(env, 1); // i
    return list3(v_24, v_25, v_26);
    v_24 = nil;
v_5:
    return onevalue(v_24);
}



// Code for rewrite2

static LispObject CC_rewrite2(LispObject env,
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    stack[-2] = v_3;
    v_43 = v_2;
// end of prologue
    stack[-1] = nil;
    stack[0] = v_43;
v_14:
    v_43 = stack[0];
    if (v_43 == nil) goto v_18;
    else goto v_19;
v_18:
    goto v_13;
v_19:
    v_43 = stack[0];
    if (!car_legal(v_43)) v_43 = carerror(v_43); else
    v_43 = car(v_43);
    v_44 = v_43;
    v_43 = v_44;
    if (!car_legal(v_43)) v_43 = cdrerror(v_43); else
    v_43 = cdr(v_43);
    stack[-3] = v_43;
    v_43 = v_44;
    if (!car_legal(v_43)) v_43 = carerror(v_43); else
    v_43 = car(v_43);
    v_44 = v_43;
    v_43 = stack[-2];
    v_43 = plus2(v_44, v_43);
    env = stack[-4];
    v_44 = v_43;
    v_43 = stack[-3];
    v_43 = cons(v_44, v_43);
    env = stack[-4];
    v_44 = v_43;
    v_43 = stack[-1];
    v_43 = cons(v_44, v_43);
    env = stack[-4];
    stack[-1] = v_43;
    v_43 = stack[0];
    if (!car_legal(v_43)) v_43 = cdrerror(v_43); else
    v_43 = cdr(v_43);
    stack[0] = v_43;
    goto v_14;
v_13:
    v_43 = stack[-1];
        return Lreverse(nil, v_43);
    return onevalue(v_43);
}



// Code for weak_xreduce

static LispObject CC_weak_xreduce(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_42 = nil;
    v_42 = ncons(v_42);
    env = stack[-3];
    stack[-2] = v_42;
    v_42 = qvalue(basic_elt(env, 1)); // !*trxmod
    if (v_42 == nil) goto v_14;
    v_42 = stack[-1];
    {   LispObject fn = basic_elt(env, 6); // preppf
    v_42 = (*qfn1(fn))(fn, v_42);
    }
    env = stack[-3];
    v_43 = Lmkquote(nil, v_42);
    env = stack[-3];
    v_42 = nil;
    {   LispObject fn = basic_elt(env, 7); // writepri
    v_42 = (*qfn2(fn))(fn, v_43, v_42);
    }
    env = stack[-3];
    v_43 = basic_elt(env, 2); // " ="
    v_42 = basic_elt(env, 3); // last
    {   LispObject fn = basic_elt(env, 7); // writepri
    v_42 = (*qfn2(fn))(fn, v_43, v_42);
    }
    env = stack[-3];
    goto v_12;
v_14:
v_12:
    v_44 = stack[-1];
    v_43 = stack[0];
    v_42 = stack[-2];
    {   LispObject fn = basic_elt(env, 8); // weak_xreduce1
    v_42 = (*qfn3(fn))(fn, v_44, v_43, v_42);
    }
    env = stack[-3];
    stack[0] = v_42;
    v_42 = qvalue(basic_elt(env, 1)); // !*trxmod
    if (v_42 == nil) goto v_31;
    v_43 = basic_elt(env, 4); // "   "
    v_42 = basic_elt(env, 5); // first
    {   LispObject fn = basic_elt(env, 7); // writepri
    v_42 = (*qfn2(fn))(fn, v_43, v_42);
    }
    env = stack[-3];
    v_42 = stack[0];
    {   LispObject fn = basic_elt(env, 6); // preppf
    v_42 = (*qfn1(fn))(fn, v_42);
    }
    env = stack[-3];
    v_43 = Lmkquote(nil, v_42);
    env = stack[-3];
    v_42 = basic_elt(env, 3); // last
    {   LispObject fn = basic_elt(env, 7); // writepri
    v_42 = (*qfn2(fn))(fn, v_43, v_42);
    }
    goto v_29;
v_31:
v_29:
    v_42 = stack[0];
    return onevalue(v_42);
}



// Code for rand!-comb

static LispObject CC_randKcomb(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_136, v_137, v_138;
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
    stack[-1] = v_2;
// end of prologue
    v_137 = stack[-3];
    v_136 = stack[-1];
    if (equal(v_137, v_136)) goto v_7;
    else goto v_8;
v_7:
    v_136 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-4] = v_136;
    v_136 = stack[-3];
    v_137 = sub1(v_136);
    env = stack[-5];
    v_136 = stack[-4];
    v_136 = difference2(v_137, v_136);
    env = stack[-5];
    v_136 = Lminusp(nil, v_136);
    env = stack[-5];
    if (v_136 == nil) goto v_21;
    v_136 = nil;
    goto v_15;
v_21:
    v_136 = stack[-4];
    v_136 = ncons(v_136);
    env = stack[-5];
    stack[-1] = v_136;
    stack[-2] = v_136;
v_16:
    v_136 = stack[-4];
    v_136 = add1(v_136);
    env = stack[-5];
    stack[-4] = v_136;
    v_136 = stack[-3];
    v_137 = sub1(v_136);
    env = stack[-5];
    v_136 = stack[-4];
    v_136 = difference2(v_137, v_136);
    env = stack[-5];
    v_136 = Lminusp(nil, v_136);
    env = stack[-5];
    if (v_136 == nil) goto v_35;
    v_136 = stack[-2];
    goto v_15;
v_35:
    stack[0] = stack[-1];
    v_136 = stack[-4];
    v_136 = ncons(v_136);
    env = stack[-5];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_136);
    v_136 = stack[-1];
    if (!car_legal(v_136)) v_136 = cdrerror(v_136); else
    v_136 = cdr(v_136);
    stack[-1] = v_136;
    goto v_16;
v_15:
    goto v_6;
v_8:
    stack[-2] = nil;
    v_137 = stack[-1];
    v_136 = stack[-3];
    v_137 = difference2(v_137, v_136);
    env = stack[-5];
    v_136 = stack[-3];
    v_136 = static_cast<LispObject>(lessp2(v_137, v_136));
    v_136 = v_136 ? lisp_true : nil;
    env = stack[-5];
    if (v_136 == nil) goto v_56;
    stack[0] = stack[-1];
    v_137 = stack[-1];
    v_136 = stack[-3];
    v_136 = difference2(v_137, v_136);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 0); // rand!-comb
    v_136 = (*qfn2(fn))(fn, stack[0], v_136);
    }
    env = stack[-5];
    stack[-3] = v_136;
    v_136 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[0] = v_136;
v_73:
    v_136 = stack[-1];
    v_137 = sub1(v_136);
    env = stack[-5];
    v_136 = stack[0];
    v_136 = difference2(v_137, v_136);
    env = stack[-5];
    v_136 = Lminusp(nil, v_136);
    env = stack[-5];
    if (v_136 == nil) goto v_78;
    goto v_72;
v_78:
    v_137 = stack[0];
    v_136 = stack[-3];
    v_136 = Lmember(nil, v_137, v_136);
    if (v_136 == nil) goto v_87;
    else goto v_88;
v_87:
    v_137 = stack[0];
    v_136 = stack[-2];
    v_136 = cons(v_137, v_136);
    env = stack[-5];
    stack[-2] = v_136;
    goto v_86;
v_88:
v_86:
    v_136 = stack[0];
    v_136 = add1(v_136);
    env = stack[-5];
    stack[0] = v_136;
    goto v_73;
v_72:
    goto v_54;
v_56:
    v_136 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[0] = v_136;
v_102:
    v_136 = stack[-3];
    v_137 = sub1(v_136);
    env = stack[-5];
    v_136 = stack[0];
    v_136 = difference2(v_137, v_136);
    env = stack[-5];
    v_136 = Lminusp(nil, v_136);
    env = stack[-5];
    if (v_136 == nil) goto v_107;
    goto v_101;
v_107:
v_119:
    v_136 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // random
    v_137 = (*qfn1(fn))(fn, v_136);
    }
    env = stack[-5];
    v_138 = v_137;
    v_136 = stack[-2];
    v_136 = Lmember(nil, v_137, v_136);
    if (v_136 == nil) goto v_123;
    else goto v_124;
v_123:
    goto v_118;
v_124:
    goto v_119;
v_118:
    v_137 = v_138;
    v_136 = stack[-2];
    v_136 = cons(v_137, v_136);
    env = stack[-5];
    stack[-2] = v_136;
    v_136 = stack[0];
    v_136 = add1(v_136);
    env = stack[-5];
    stack[0] = v_136;
    goto v_102;
v_101:
    goto v_54;
v_54:
    v_136 = stack[-2];
    goto v_6;
    v_136 = nil;
v_6:
    return onevalue(v_136);
}



setup_type const u54_setup[] =
{
    {"rtrnda",                  G0W2,     G1W2,     CC_rtrnda,G3W2,     G4W2},
    {"radd",                    G0W2,     G1W2,     CC_radd,  G3W2,     G4W2},
    {"coeffs-to-form",          G0W2,     G1W2,     CC_coeffsKtoKform,G3W2,G4W2},
    {"aex_psremseq",            G0W3,     G1W3,     G2W3,     CC_aex_psremseq,G4W3},
    {"rl_*qe",                  G0W2,     G1W2,     CC_rl_Hqe,G3W2,     G4W2},
    {"mkuniquewedge",           G0W1,     CC_mkuniquewedge,G2W1,G3W1,   G4W1},
    {"minprec",                 CC_minprec,G1W0,    G2W0,     G3W0,     G4W0},
    {"tvectorp",                G0W1,     CC_tvectorp,G2W1,   G3W1,     G4W1},
    {"ext_edges",               G0W1,     CC_ext_edges,G2W1,  G3W1,     G4W1},
    {"liendimcom",              G0W1,     CC_liendimcom,G2W1, G3W1,     G4W1},
    {"mo=pair",                 G0W2,     G1W2,     CC_moMpair,G3W2,    G4W2},
    {"gi",                      G0W2,     G1W2,     CC_gi,    G3W2,     G4W2},
    {"*sf2exb",                 G0W2,     G1W2,     CC_Hsf2exb,G3W2,    G4W2},
    {"prepsqyy",                G0W1,     CC_prepsqyy,G2W1,   G3W1,     G4W1},
    {"ordexp",                  G0W2,     G1W2,     CC_ordexp,G3W2,     G4W2},
    {"cde_mkset",               G0W1,     CC_cde_mkset,G2W1,  G3W1,     G4W1},
    {"small-random-number",     CC_smallKrandomKnumber,G1W0,G2W0,G3W0,  G4W0},
    {"ofsf_updsignpow",         G0W2,     G1W2,     CC_ofsf_updsignpow,G3W2,G4W2},
    {"chrstrem",                G0W1,     CC_chrstrem,G2W1,   G3W1,     G4W1},
    {"no_of_tm_sf",             G0W1,     CC_no_of_tm_sf,G2W1,G3W1,     G4W1},
    {"giminusp:",               G0W1,     CC_giminuspT,G2W1,  G3W1,     G4W1},
    {"qqe_qadd-inside",         G0W1,     CC_qqe_qaddKinside,G2W1,G3W1, G4W1},
    {"dip_reduceconti",         G0W2,     G1W2,     CC_dip_reduceconti,G3W2,G4W2},
    {"crprimp",                 G0W1,     CC_crprimp,G2W1,    G3W1,     G4W1},
    {"rewrite2",                G0W2,     G1W2,     CC_rewrite2,G3W2,   G4W2},
    {"weak_xreduce",            G0W2,     G1W2,     CC_weak_xreduce,G3W2,G4W2},
    {"rand-comb",               G0W2,     G1W2,     CC_randKcomb,G3W2,  G4W2},
    {nullptr, 
        reinterpret_cast<no_args *>(
            reinterpret_cast<uintptr_t>("u54")),
        reinterpret_cast<one_arg *>(
            reinterpret_cast<uintptr_t>("80309 4310984 5630701")),
        nullptr, nullptr, nullptr}
};

// end of generated code
