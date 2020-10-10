
// $destdir/u13.c        Machine generated C code

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


// Code for ibalp_vequal

static LispObject CC_ibalp_vequal(LispObject env,
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
    v_10 = (v_11 == v_10 ? lisp_true : nil);
    return onevalue(v_10);
}



// Code for lesspcdr

static LispObject CC_lesspcdr(LispObject env,
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
        return Llessp_2(nil, v_11, v_10);
}



// Code for sub_math

static LispObject CC_sub_math(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_97, v_98;
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
    v_98 = qvalue(basic_elt(env, 1)); // char
    v_97 = basic_elt(env, 2); // (i d e n t !/)
    if (equal(v_98, v_97)) goto v_10;
    else goto v_11;
v_10:
    v_97 = basic_elt(env, 3); // ident
    return ncons(v_97);
v_11:
    v_98 = qvalue(basic_elt(env, 1)); // char
    v_97 = basic_elt(env, 4); // (v e c t o r)
    if (equal(v_98, v_97)) goto v_18;
    else goto v_19;
v_18:
    {   LispObject fn = basic_elt(env, 10); // vectorrd
    v_97 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
    stack[-1] = v_97;
    v_98 = qvalue(basic_elt(env, 1)); // char
    v_97 = basic_elt(env, 5); // (!/ v e c t o r)
    if (equal(v_98, v_97)) goto v_26;
    v_98 = basic_elt(env, 6); // "</vector>"
    v_97 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    {   LispObject fn = basic_elt(env, 11); // errorml
    v_97 = (*qfn2(fn))(fn, v_98, v_97);
    }
    goto v_24;
v_26:
v_24:
    v_97 = stack[-1];
    goto v_6;
v_19:
    v_97 = qvalue(basic_elt(env, 1)); // char
    {   LispObject fn = basic_elt(env, 12); // compress!*
    v_98 = (*qfn1(fn))(fn, v_97);
    }
    env = stack[-2];
    v_97 = qvalue(basic_elt(env, 7)); // constructors!*
    v_97 = Lassoc(nil, v_98, v_97);
    stack[0] = v_97;
    if (v_97 == nil) goto v_36;
    v_97 = stack[0];
    if (!car_legal(v_97)) v_97 = cdrerror(v_97); else
    v_97 = cdr(v_97);
    if (!car_legal(v_97)) v_98 = carerror(v_97); else
    v_98 = car(v_97);
    v_97 = nil;
    {   LispObject fn = basic_elt(env, 13); // apply
    v_97 = (*qfn2(fn))(fn, v_98, v_97);
    }
    env = stack[-2];
    stack[-1] = v_97;
    v_97 = stack[-1];
    v_97 = Lconsp(nil, v_97);
    env = stack[-2];
    if (v_97 == nil) goto v_49;
    v_97 = stack[-1];
    if (!car_legal(v_97)) v_98 = carerror(v_97); else
    v_98 = car(v_97);
    v_97 = basic_elt(env, 8); // csymbol
    if (v_98 == v_97) goto v_54;
    else goto v_55;
v_54:
    v_97 = stack[-1];
    if (!car_legal(v_97)) v_97 = cdrerror(v_97); else
    v_97 = cdr(v_97);
    if (!car_legal(v_97)) v_97 = cdrerror(v_97); else
    v_97 = cdr(v_97);
    stack[-1] = v_97;
    goto v_53;
v_55:
v_53:
    goto v_47;
v_49:
v_47:
    v_97 = stack[-1];
    v_97 = Lconsp(nil, v_97);
    env = stack[-2];
    if (v_97 == nil) goto v_65;
    v_97 = stack[-1];
    if (!car_legal(v_97)) v_98 = carerror(v_97); else
    v_98 = car(v_97);
    v_97 = basic_elt(env, 9); // fn
    if (v_98 == v_97) goto v_70;
    else goto v_71;
v_70:
    v_97 = stack[-1];
    if (!car_legal(v_97)) v_97 = cdrerror(v_97); else
    v_97 = cdr(v_97);
    if (!car_legal(v_97)) v_97 = cdrerror(v_97); else
    v_97 = cdr(v_97);
    stack[-1] = v_97;
    goto v_69;
v_71:
v_69:
    goto v_63;
v_65:
v_63:
    v_97 = qvalue(basic_elt(env, 1)); // char
    {   LispObject fn = basic_elt(env, 12); // compress!*
    v_98 = (*qfn1(fn))(fn, v_97);
    }
    env = stack[-2];
    v_97 = stack[0];
    if (!car_legal(v_97)) v_97 = cdrerror(v_97); else
    v_97 = cdr(v_97);
    if (!car_legal(v_97)) v_97 = cdrerror(v_97); else
    v_97 = cdr(v_97);
    if (!car_legal(v_97)) v_97 = carerror(v_97); else
    v_97 = car(v_97);
    if (equal(v_98, v_97)) goto v_81;
    v_97 = stack[0];
    if (!car_legal(v_97)) v_97 = cdrerror(v_97); else
    v_97 = cdr(v_97);
    if (!car_legal(v_97)) v_97 = cdrerror(v_97); else
    v_97 = cdr(v_97);
    if (!car_legal(v_97)) v_97 = cdrerror(v_97); else
    v_97 = cdr(v_97);
    if (!car_legal(v_97)) v_98 = carerror(v_97); else
    v_98 = car(v_97);
    v_97 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    {   LispObject fn = basic_elt(env, 11); // errorml
    v_97 = (*qfn2(fn))(fn, v_98, v_97);
    }
    goto v_79;
v_81:
v_79:
    v_97 = stack[-1];
    goto v_6;
v_36:
    v_97 = nil;
v_6:
    return onevalue(v_97);
}



// Code for rd!:minus

static LispObject CC_rdTminus(LispObject env,
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
// space for vars preserved across procedure calls
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    v_20 = v_2;
// end of prologue
    v_19 = v_20;
    if (!car_legal(v_19)) v_19 = cdrerror(v_19); else
    v_19 = cdr(v_19);
    if (!consp(v_19)) goto v_6;
    else goto v_7;
v_6:
    stack[0] = basic_elt(env, 1); // !:rd!:
    v_19 = v_20;
    if (!car_legal(v_19)) v_19 = cdrerror(v_19); else
    v_19 = cdr(v_19);
    {   LispObject fn = basic_elt(env, 2); // safe!-fp!-minus
    v_19 = (*qfn1(fn))(fn, v_19);
    }
    {
        LispObject v_22 = stack[0];
        return cons(v_22, v_19);
    }
v_7:
    v_19 = v_20;
    {
        LispObject fn = basic_elt(env, 3); // minus!:
        return (*qfn1(fn))(fn, v_19);
    }
    v_19 = nil;
    return onevalue(v_19);
}



// Code for zeropp

static LispObject CC_zeropp(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_21, v_22, v_23;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_23 = v_2;
// end of prologue
    v_21 = v_23;
    if (!consp(v_21)) goto v_6;
    else goto v_7;
v_6:
    v_21 = v_23;
        return Lzerop(nil, v_21);
v_7:
    v_21 = v_23;
    if (!car_legal(v_21)) v_22 = carerror(v_21); else
    v_22 = car(v_21);
    v_21 = basic_elt(env, 1); // !:rd!:
    if (v_22 == v_21) goto v_11;
    else goto v_12;
v_11:
    v_21 = v_23;
    {
        LispObject fn = basic_elt(env, 2); // rd!:zerop
        return (*qfn1(fn))(fn, v_21);
    }
v_12:
    v_21 = nil;
    goto v_5;
    v_21 = nil;
v_5:
    return onevalue(v_21);
}



// Code for comm_kernels1

static LispObject CC_comm_kernels1(LispObject env,
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    stack[-2] = v_3;
    v_53 = v_2;
// end of prologue
v_1:
    v_54 = v_53;
    if (!consp(v_54)) goto v_11;
    else goto v_12;
v_11:
    v_54 = lisp_true;
    goto v_10;
v_12:
    v_54 = v_53;
    if (!car_legal(v_54)) v_54 = carerror(v_54); else
    v_54 = car(v_54);
    v_54 = (consp(v_54) ? nil : lisp_true);
    goto v_10;
    v_54 = nil;
v_10:
    if (v_54 == nil) goto v_8;
    v_53 = stack[-2];
    goto v_6;
v_8:
    v_54 = v_53;
    if (!car_legal(v_54)) v_54 = carerror(v_54); else
    v_54 = car(v_54);
    if (!car_legal(v_54)) v_54 = carerror(v_54); else
    v_54 = car(v_54);
    if (!car_legal(v_54)) v_54 = carerror(v_54); else
    v_54 = car(v_54);
    stack[-3] = v_54;
    v_54 = v_53;
    if (!car_legal(v_54)) v_54 = carerror(v_54); else
    v_54 = car(v_54);
    if (!car_legal(v_54)) stack[-1] = cdrerror(v_54); else
    stack[-1] = cdr(v_54);
    if (!car_legal(v_53)) stack[0] = cdrerror(v_53); else
    stack[0] = cdr(v_53);
    v_54 = stack[-3];
    v_53 = stack[-2];
    v_53 = Lmemq(nil, v_54, v_53);
    if (v_53 == nil) goto v_39;
    else goto v_37;
v_39:
    v_53 = stack[-3];
    {   LispObject fn = basic_elt(env, 1); // noncomp
    v_53 = (*qfn1(fn))(fn, v_53);
    }
    env = stack[-4];
    if (v_53 == nil) goto v_43;
    else goto v_37;
v_43:
    goto v_38;
v_37:
    v_53 = stack[-2];
    goto v_36;
v_38:
    v_53 = stack[-3];
    v_53 = ncons(v_53);
    env = stack[-4];
    v_53 = Lappend_2(nil, stack[-2], v_53);
    env = stack[-4];
    goto v_36;
    v_53 = nil;
v_36:
    {   LispObject fn = basic_elt(env, 0); // comm_kernels1
    v_54 = (*qfn2(fn))(fn, stack[0], v_53);
    }
    env = stack[-4];
    v_53 = stack[-1];
    stack[-2] = v_54;
    goto v_1;
    v_53 = nil;
v_6:
    return onevalue(v_53);
}



// Code for sc_null

static LispObject CC_sc_null(LispObject env,
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



// Code for fortranop

static LispObject CC_fortranop(LispObject env,
                         LispObject v_2)
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
        push(v_2);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_13 = v_2;
// end of prologue
    v_12 = v_13;
    v_11 = basic_elt(env, 1); // !*fortranop!*
    v_11 = get(v_12, v_11);
    if (v_11 == nil) goto v_6;
    else goto v_5;
v_6:
    v_11 = v_13;
v_5:
    return onevalue(v_11);
}



// Code for simptimes

static LispObject CC_simptimes(LispObject env,
                         LispObject v_2)
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
    v_89 = stack[-1];
    if (v_89 == nil) goto v_14;
    else goto v_15;
v_14:
    v_90 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_89 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_90, v_89);
v_15:
    v_90 = qvalue(basic_elt(env, 1)); // tstack!*
    v_89 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_90 == v_89) goto v_27;
    v_89 = lisp_true;
    goto v_25;
v_27:
    v_89 = qvalue(basic_elt(env, 2)); // mul!*
    v_89 = (v_89 == nil ? lisp_true : nil);
    goto v_25;
    v_89 = nil;
v_25:
    if (v_89 == nil) goto v_23;
    goto v_8;
v_23:
    v_89 = qvalue(basic_elt(env, 2)); // mul!*
    stack[-2] = v_89;
    v_89 = nil;
    setvalue(basic_elt(env, 2), v_89); // mul!*
v_8:
    v_89 = qvalue(basic_elt(env, 1)); // tstack!*
    v_89 = add1(v_89);
    env = stack[-3];
    setvalue(basic_elt(env, 1), v_89); // tstack!*
    v_89 = stack[-1];
    {   LispObject fn = basic_elt(env, 4); // simpcar
    v_89 = (*qfn1(fn))(fn, v_89);
    }
    env = stack[-3];
    stack[0] = v_89;
v_9:
    v_89 = stack[-1];
    if (!car_legal(v_89)) v_89 = cdrerror(v_89); else
    v_89 = cdr(v_89);
    stack[-1] = v_89;
    v_89 = stack[0];
    if (!car_legal(v_89)) v_89 = carerror(v_89); else
    v_89 = car(v_89);
    if (v_89 == nil) goto v_45;
    else goto v_46;
v_45:
    goto v_11;
v_46:
    v_89 = stack[-1];
    if (v_89 == nil) goto v_49;
    else goto v_50;
v_49:
    goto v_10;
v_50:
    v_89 = stack[-1];
    {   LispObject fn = basic_elt(env, 4); // simpcar
    v_89 = (*qfn1(fn))(fn, v_89);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 5); // multsq
    v_89 = (*qfn2(fn))(fn, stack[0], v_89);
    }
    env = stack[-3];
    stack[0] = v_89;
    goto v_9;
v_10:
    v_89 = qvalue(basic_elt(env, 2)); // mul!*
    if (v_89 == nil) goto v_62;
    else goto v_63;
v_62:
    v_89 = lisp_true;
    goto v_61;
v_63:
    v_90 = qvalue(basic_elt(env, 1)); // tstack!*
    v_89 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_89 = static_cast<LispObject>(greaterp2(v_90, v_89));
    v_89 = v_89 ? lisp_true : nil;
    env = stack[-3];
    goto v_61;
    v_89 = nil;
v_61:
    if (v_89 == nil) goto v_59;
    goto v_11;
v_59:
    v_89 = qvalue(basic_elt(env, 2)); // mul!*
    if (!car_legal(v_89)) v_90 = carerror(v_89); else
    v_90 = car(v_89);
    v_89 = stack[0];
    v_89 = Lapply1(nil, v_90, v_89);
    env = stack[-3];
    stack[0] = v_89;
    v_89 = nil;
    v_89 = ncons(v_89);
    env = stack[-3];
    setvalue(basic_elt(env, 3), v_89); // alglist!*
    v_89 = qvalue(basic_elt(env, 2)); // mul!*
    if (!car_legal(v_89)) v_89 = cdrerror(v_89); else
    v_89 = cdr(v_89);
    setvalue(basic_elt(env, 2), v_89); // mul!*
    goto v_10;
v_11:
    v_89 = qvalue(basic_elt(env, 1)); // tstack!*
    v_89 = sub1(v_89);
    env = stack[-3];
    setvalue(basic_elt(env, 1), v_89); // tstack!*
    v_90 = qvalue(basic_elt(env, 1)); // tstack!*
    v_89 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_90 == v_89) goto v_83;
    else goto v_84;
v_83:
    v_89 = stack[-2];
    setvalue(basic_elt(env, 2), v_89); // mul!*
    goto v_82;
v_84:
v_82:
    v_89 = stack[0];
    return onevalue(v_89);
}



// Code for dividef

static LispObject CC_dividef(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_34, v_35, v_36, v_37;
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
    v_34 = v_3;
    v_35 = v_2;
// end of prologue
    v_34 = Ldivide_2(nil, v_35, v_34);
    v_37 = v_34;
    v_34 = v_37;
    if (!car_legal(v_34)) v_35 = carerror(v_34); else
    v_35 = car(v_34);
    v_34 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_35 == v_34) goto v_12;
    else goto v_13;
v_12:
    v_34 = nil;
    v_36 = v_34;
    goto v_11;
v_13:
    v_34 = v_37;
    if (!car_legal(v_34)) v_34 = carerror(v_34); else
    v_34 = car(v_34);
    v_36 = v_34;
    goto v_11;
    v_36 = nil;
v_11:
    v_34 = v_37;
    if (!car_legal(v_34)) v_35 = cdrerror(v_34); else
    v_35 = cdr(v_34);
    v_34 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_35 == v_34) goto v_24;
    else goto v_25;
v_24:
    v_34 = nil;
    goto v_23;
v_25:
    v_34 = v_37;
    if (!car_legal(v_34)) v_34 = cdrerror(v_34); else
    v_34 = cdr(v_34);
    goto v_23;
    v_34 = nil;
v_23:
    return cons(v_36, v_34);
}



// Code for noncomperm

static LispObject CC_noncomperm(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_88, v_89, v_90;
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
    real_push(nil);
    stack_popper stack_popper_var(7);
// copy arguments values to proper place
    stack[-4] = v_2;
// end of prologue
    v_88 = stack[-4];
    if (v_88 == nil) goto v_6;
    else goto v_7;
v_6:
    v_88 = stack[-4];
    return ncons(v_88);
v_7:
    v_88 = stack[-4];
    stack[-5] = v_88;
v_18:
    v_88 = stack[-5];
    if (v_88 == nil) goto v_23;
    else goto v_24;
v_23:
    v_88 = nil;
    goto v_17;
v_24:
    v_88 = stack[-5];
    if (!car_legal(v_88)) v_88 = carerror(v_88); else
    v_88 = car(v_88);
    stack[0] = v_88;
    v_89 = stack[0];
    v_88 = stack[-4];
    {   LispObject fn = basic_elt(env, 2); // noncomdel
    v_88 = (*qfn2(fn))(fn, v_89, v_88);
    }
    env = stack[-6];
    v_90 = v_88;
    v_89 = v_90;
    v_88 = basic_elt(env, 1); // failed
    if (v_89 == v_88) goto v_36;
    else goto v_37;
v_36:
    v_88 = nil;
    goto v_35;
v_37:
    v_88 = v_90;
    {   LispObject fn = basic_elt(env, 0); // noncomperm
    v_89 = (*qfn1(fn))(fn, v_88);
    }
    env = stack[-6];
    v_88 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // mapcons
    v_88 = (*qfn2(fn))(fn, v_89, v_88);
    }
    env = stack[-6];
    goto v_35;
    v_88 = nil;
v_35:
    stack[-3] = v_88;
    v_88 = stack[-3];
    {   LispObject fn = basic_elt(env, 4); // lastpair
    v_88 = (*qfn1(fn))(fn, v_88);
    }
    env = stack[-6];
    stack[-2] = v_88;
    v_88 = stack[-5];
    if (!car_legal(v_88)) v_88 = cdrerror(v_88); else
    v_88 = cdr(v_88);
    stack[-5] = v_88;
    v_88 = stack[-2];
    if (!consp(v_88)) goto v_53;
    else goto v_54;
v_53:
    goto v_18;
v_54:
v_19:
    v_88 = stack[-5];
    if (v_88 == nil) goto v_58;
    else goto v_59;
v_58:
    v_88 = stack[-3];
    goto v_17;
v_59:
    stack[-1] = stack[-2];
    v_88 = stack[-5];
    if (!car_legal(v_88)) v_88 = carerror(v_88); else
    v_88 = car(v_88);
    stack[0] = v_88;
    v_89 = stack[0];
    v_88 = stack[-4];
    {   LispObject fn = basic_elt(env, 2); // noncomdel
    v_88 = (*qfn2(fn))(fn, v_89, v_88);
    }
    env = stack[-6];
    v_90 = v_88;
    v_89 = v_90;
    v_88 = basic_elt(env, 1); // failed
    if (v_89 == v_88) goto v_72;
    else goto v_73;
v_72:
    v_88 = nil;
    goto v_71;
v_73:
    v_88 = v_90;
    {   LispObject fn = basic_elt(env, 0); // noncomperm
    v_89 = (*qfn1(fn))(fn, v_88);
    }
    env = stack[-6];
    v_88 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // mapcons
    v_88 = (*qfn2(fn))(fn, v_89, v_88);
    }
    env = stack[-6];
    goto v_71;
    v_88 = nil;
v_71:
    if (!car_legal(stack[-1])) rplacd_fails(stack[-1]);
    setcdr(stack[-1], v_88);
    v_88 = stack[-2];
    {   LispObject fn = basic_elt(env, 4); // lastpair
    v_88 = (*qfn1(fn))(fn, v_88);
    }
    env = stack[-6];
    stack[-2] = v_88;
    v_88 = stack[-5];
    if (!car_legal(v_88)) v_88 = cdrerror(v_88); else
    v_88 = cdr(v_88);
    stack[-5] = v_88;
    goto v_19;
v_17:
    goto v_5;
    v_88 = nil;
v_5:
    return onevalue(v_88);
}



// Code for lalr_most_common_reduction

static LispObject CC_lalr_most_common_reduction(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_107, v_108, v_109;
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
    v_107 = v_2;
// end of prologue
    stack[-3] = nil;
    stack[-1] = v_107;
v_12:
    v_107 = stack[-1];
    if (v_107 == nil) goto v_16;
    else goto v_17;
v_16:
    goto v_11;
v_17:
    v_107 = stack[-1];
    if (!car_legal(v_107)) v_107 = carerror(v_107); else
    v_107 = car(v_107);
    v_108 = v_107;
    v_107 = v_108;
    if (!car_legal(v_107)) v_107 = cdrerror(v_107); else
    v_107 = cdr(v_107);
    if (!car_legal(v_107)) v_107 = carerror(v_107); else
    v_107 = car(v_107);
    if (!car_legal(v_107)) v_109 = carerror(v_107); else
    v_109 = car(v_107);
    v_107 = basic_elt(env, 1); // reduce
    if (v_109 == v_107) goto v_29;
    else goto v_30;
v_29:
    v_107 = lisp_true;
    goto v_28;
v_30:
    v_107 = v_108;
    if (!car_legal(v_107)) v_107 = cdrerror(v_107); else
    v_107 = cdr(v_107);
    if (!car_legal(v_107)) v_107 = carerror(v_107); else
    v_107 = car(v_107);
    if (!car_legal(v_107)) v_109 = carerror(v_107); else
    v_109 = car(v_107);
    v_107 = basic_elt(env, 2); // accept
    v_107 = (v_109 == v_107 ? lisp_true : nil);
    goto v_28;
    v_107 = nil;
v_28:
    if (v_107 == nil) goto v_26;
    v_107 = v_108;
    if (!car_legal(v_107)) v_107 = cdrerror(v_107); else
    v_107 = cdr(v_107);
    if (!car_legal(v_107)) v_107 = carerror(v_107); else
    v_107 = car(v_107);
    v_109 = v_107;
    v_107 = v_109;
    v_107 = Lassoc(nil, v_108, v_107);
    stack[-2] = v_107;
    if (v_107 == nil) goto v_51;
    stack[0] = stack[-2];
    v_107 = stack[-2];
    if (!car_legal(v_107)) v_107 = cdrerror(v_107); else
    v_107 = cdr(v_107);
    v_107 = add1(v_107);
    env = stack[-4];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_107);
    goto v_49;
v_51:
    v_108 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_107 = stack[-3];
    v_107 = acons(v_109, v_108, v_107);
    env = stack[-4];
    stack[-3] = v_107;
    goto v_49;
v_49:
    goto v_24;
v_26:
v_24:
    v_107 = stack[-1];
    if (!car_legal(v_107)) v_107 = cdrerror(v_107); else
    v_107 = cdr(v_107);
    stack[-1] = v_107;
    goto v_12;
v_11:
    v_107 = stack[-3];
    if (v_107 == nil) goto v_71;
    v_107 = stack[-3];
    if (!car_legal(v_107)) v_107 = carerror(v_107); else
    v_107 = car(v_107);
    stack[-2] = v_107;
    v_107 = stack[-3];
    if (!car_legal(v_107)) v_107 = cdrerror(v_107); else
    v_107 = cdr(v_107);
    stack[-1] = v_107;
v_78:
    v_107 = stack[-1];
    if (v_107 == nil) goto v_83;
    else goto v_84;
v_83:
    goto v_77;
v_84:
    v_107 = stack[-1];
    if (!car_legal(v_107)) v_107 = carerror(v_107); else
    v_107 = car(v_107);
    stack[0] = v_107;
    v_107 = stack[0];
    if (!car_legal(v_107)) v_108 = cdrerror(v_107); else
    v_108 = cdr(v_107);
    v_107 = stack[-2];
    if (!car_legal(v_107)) v_107 = cdrerror(v_107); else
    v_107 = cdr(v_107);
    v_107 = static_cast<LispObject>(greaterp2(v_108, v_107));
    v_107 = v_107 ? lisp_true : nil;
    env = stack[-4];
    if (v_107 == nil) goto v_93;
    v_107 = stack[0];
    stack[-2] = v_107;
    goto v_91;
v_93:
v_91:
    v_107 = stack[-1];
    if (!car_legal(v_107)) v_107 = cdrerror(v_107); else
    v_107 = cdr(v_107);
    stack[-1] = v_107;
    goto v_78;
v_77:
    v_107 = stack[-2];
    if (!car_legal(v_107)) v_107 = carerror(v_107); else
    v_107 = car(v_107);
    goto v_8;
v_71:
    v_107 = nil;
    goto v_8;
    v_107 = nil;
v_8:
    return onevalue(v_107);
}



// Code for undefdchk

static LispObject CC_undefdchk(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_14, v_15, v_16;
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
    v_16 = v_15;
    v_14 = basic_elt(env, 1); // defd
    v_14 = Lflagp(nil, v_16, v_14);
    env = stack[0];
    if (v_14 == nil) goto v_6;
    else goto v_7;
v_6:
    v_14 = qvalue(basic_elt(env, 2)); // undefns!*
    v_14 = cons(v_15, v_14);
    env = stack[0];
    setvalue(basic_elt(env, 2), v_14); // undefns!*
    goto v_5;
v_7:
    v_14 = nil;
v_5:
    return onevalue(v_14);
}



// Code for mk!+mat!+mult!+mat

static LispObject CC_mkLmatLmultLmat(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_294, v_295, v_296;
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
    real_push(nil, nil, nil, nil, nil);
    real_push(nil);
    stack_popper stack_popper_var(17);
// copy arguments values to proper place
    stack[-13] = v_3;
    stack[-14] = v_2;
// end of prologue
    v_294 = stack[-14];
    {   LispObject fn = basic_elt(env, 4); // matrix!+p
    v_294 = (*qfn1(fn))(fn, v_294);
    }
    env = stack[-16];
    if (v_294 == nil) goto v_17;
    else goto v_18;
v_17:
    v_294 = basic_elt(env, 1); // "no matrix in mult"
    {   LispObject fn = basic_elt(env, 5); // rederr
    v_294 = (*qfn1(fn))(fn, v_294);
    }
    env = stack[-16];
    goto v_16;
v_18:
v_16:
    v_294 = stack[-13];
    {   LispObject fn = basic_elt(env, 4); // matrix!+p
    v_294 = (*qfn1(fn))(fn, v_294);
    }
    env = stack[-16];
    if (v_294 == nil) goto v_25;
    else goto v_26;
v_25:
    v_294 = basic_elt(env, 1); // "no matrix in mult"
    {   LispObject fn = basic_elt(env, 5); // rederr
    v_294 = (*qfn1(fn))(fn, v_294);
    }
    env = stack[-16];
    goto v_24;
v_26:
v_24:
    v_294 = stack[-14];
    {   LispObject fn = basic_elt(env, 6); // get!+col!+nr
    v_294 = (*qfn1(fn))(fn, v_294);
    }
    env = stack[-16];
    stack[-15] = v_294;
    v_294 = stack[-14];
    {   LispObject fn = basic_elt(env, 7); // get!+row!+nr
    v_294 = (*qfn1(fn))(fn, v_294);
    }
    env = stack[-16];
    stack[-12] = v_294;
    v_294 = stack[-13];
    {   LispObject fn = basic_elt(env, 6); // get!+col!+nr
    v_294 = (*qfn1(fn))(fn, v_294);
    }
    env = stack[-16];
    stack[-11] = v_294;
    stack[0] = stack[-15];
    v_294 = stack[-13];
    {   LispObject fn = basic_elt(env, 7); // get!+row!+nr
    v_294 = (*qfn1(fn))(fn, v_294);
    }
    env = stack[-16];
    if (equal(stack[0], v_294)) goto v_40;
    v_294 = basic_elt(env, 2); // "matrices can not be multiplied"
    {   LispObject fn = basic_elt(env, 5); // rederr
    v_294 = (*qfn1(fn))(fn, v_294);
    }
    env = stack[-16];
    goto v_38;
v_40:
v_38:
    v_294 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-10] = v_294;
    v_295 = stack[-12];
    v_294 = stack[-10];
    v_294 = difference2(v_295, v_294);
    env = stack[-16];
    v_294 = Lminusp(nil, v_294);
    env = stack[-16];
    if (v_294 == nil) goto v_56;
    v_294 = nil;
    goto v_50;
v_56:
    v_294 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-5] = v_294;
    v_295 = stack[-11];
    v_294 = stack[-5];
    v_294 = difference2(v_295, v_294);
    env = stack[-16];
    v_294 = Lminusp(nil, v_294);
    env = stack[-16];
    if (v_294 == nil) goto v_73;
    v_294 = nil;
    goto v_67;
v_73:
    v_295 = nil;
    v_294 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_294 = cons(v_295, v_294);
    env = stack[-16];
    stack[0] = v_294;
    v_294 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-1] = v_294;
v_86:
    v_295 = stack[-15];
    v_294 = stack[-1];
    v_294 = difference2(v_295, v_294);
    env = stack[-16];
    v_294 = Lminusp(nil, v_294);
    env = stack[-16];
    if (v_294 == nil) goto v_91;
    goto v_85;
v_91:
    stack[-2] = stack[0];
    v_296 = stack[-14];
    v_295 = stack[-10];
    v_294 = stack[-1];
    {   LispObject fn = basic_elt(env, 8); // get!+mat!+entry
    stack[0] = (*qfn3(fn))(fn, v_296, v_295, v_294);
    }
    env = stack[-16];
    v_296 = stack[-13];
    v_295 = stack[-1];
    v_294 = stack[-5];
    {   LispObject fn = basic_elt(env, 8); // get!+mat!+entry
    v_294 = (*qfn3(fn))(fn, v_296, v_295, v_294);
    }
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 9); // multsq
    v_294 = (*qfn2(fn))(fn, stack[0], v_294);
    }
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 10); // addsq
    v_294 = (*qfn2(fn))(fn, stack[-2], v_294);
    }
    env = stack[-16];
    stack[0] = v_294;
    v_294 = stack[-1];
    v_294 = add1(v_294);
    env = stack[-16];
    stack[-1] = v_294;
    goto v_86;
v_85:
    v_294 = lisp_true;
// Binding !*sub2
// FLUIDBIND: reloadenv=16 litvec-offset=3 saveloc=1
{   bind_fluid_stack bind_fluid_var(-16, 3, -1);
    setvalue(basic_elt(env, 3), v_294); // !*sub2
    v_294 = stack[0];
    {   LispObject fn = basic_elt(env, 11); // subs2
    v_294 = (*qfn1(fn))(fn, v_294);
    }
    env = stack[-16];
    stack[0] = v_294;
    ;}  // end of a binding scope
    v_294 = stack[0];
    v_294 = ncons(v_294);
    env = stack[-16];
    stack[-3] = v_294;
    stack[-4] = v_294;
v_68:
    v_294 = stack[-5];
    v_294 = add1(v_294);
    env = stack[-16];
    stack[-5] = v_294;
    v_295 = stack[-11];
    v_294 = stack[-5];
    v_294 = difference2(v_295, v_294);
    env = stack[-16];
    v_294 = Lminusp(nil, v_294);
    env = stack[-16];
    if (v_294 == nil) goto v_122;
    v_294 = stack[-4];
    goto v_67;
v_122:
    stack[-2] = stack[-3];
    v_295 = nil;
    v_294 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_294 = cons(v_295, v_294);
    env = stack[-16];
    stack[0] = v_294;
    v_294 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-1] = v_294;
v_136:
    v_295 = stack[-15];
    v_294 = stack[-1];
    v_294 = difference2(v_295, v_294);
    env = stack[-16];
    v_294 = Lminusp(nil, v_294);
    env = stack[-16];
    if (v_294 == nil) goto v_141;
    goto v_135;
v_141:
    stack[-6] = stack[0];
    v_296 = stack[-14];
    v_295 = stack[-10];
    v_294 = stack[-1];
    {   LispObject fn = basic_elt(env, 8); // get!+mat!+entry
    stack[0] = (*qfn3(fn))(fn, v_296, v_295, v_294);
    }
    env = stack[-16];
    v_296 = stack[-13];
    v_295 = stack[-1];
    v_294 = stack[-5];
    {   LispObject fn = basic_elt(env, 8); // get!+mat!+entry
    v_294 = (*qfn3(fn))(fn, v_296, v_295, v_294);
    }
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 9); // multsq
    v_294 = (*qfn2(fn))(fn, stack[0], v_294);
    }
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 10); // addsq
    v_294 = (*qfn2(fn))(fn, stack[-6], v_294);
    }
    env = stack[-16];
    stack[0] = v_294;
    v_294 = stack[-1];
    v_294 = add1(v_294);
    env = stack[-16];
    stack[-1] = v_294;
    goto v_136;
v_135:
    v_294 = lisp_true;
// Binding !*sub2
// FLUIDBIND: reloadenv=16 litvec-offset=3 saveloc=1
{   bind_fluid_stack bind_fluid_var(-16, 3, -1);
    setvalue(basic_elt(env, 3), v_294); // !*sub2
    v_294 = stack[0];
    {   LispObject fn = basic_elt(env, 11); // subs2
    v_294 = (*qfn1(fn))(fn, v_294);
    }
    env = stack[-16];
    stack[0] = v_294;
    ;}  // end of a binding scope
    v_294 = stack[0];
    v_294 = ncons(v_294);
    env = stack[-16];
    if (!car_legal(stack[-2])) rplacd_fails(stack[-2]);
    setcdr(stack[-2], v_294);
    v_294 = stack[-3];
    if (!car_legal(v_294)) v_294 = cdrerror(v_294); else
    v_294 = cdr(v_294);
    stack[-3] = v_294;
    goto v_68;
v_67:
    v_294 = ncons(v_294);
    env = stack[-16];
    stack[-8] = v_294;
    stack[-9] = v_294;
v_51:
    v_294 = stack[-10];
    v_294 = add1(v_294);
    env = stack[-16];
    stack[-10] = v_294;
    v_295 = stack[-12];
    v_294 = stack[-10];
    v_294 = difference2(v_295, v_294);
    env = stack[-16];
    v_294 = Lminusp(nil, v_294);
    env = stack[-16];
    if (v_294 == nil) goto v_175;
    v_294 = stack[-9];
    goto v_50;
v_175:
    stack[-7] = stack[-8];
    v_294 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-6] = v_294;
    v_295 = stack[-11];
    v_294 = stack[-6];
    v_294 = difference2(v_295, v_294);
    env = stack[-16];
    v_294 = Lminusp(nil, v_294);
    env = stack[-16];
    if (v_294 == nil) goto v_193;
    v_294 = nil;
    goto v_187;
v_193:
    v_295 = nil;
    v_294 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_294 = cons(v_295, v_294);
    env = stack[-16];
    stack[0] = v_294;
    v_294 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-1] = v_294;
v_206:
    v_295 = stack[-15];
    v_294 = stack[-1];
    v_294 = difference2(v_295, v_294);
    env = stack[-16];
    v_294 = Lminusp(nil, v_294);
    env = stack[-16];
    if (v_294 == nil) goto v_211;
    goto v_205;
v_211:
    stack[-2] = stack[0];
    v_296 = stack[-14];
    v_295 = stack[-10];
    v_294 = stack[-1];
    {   LispObject fn = basic_elt(env, 8); // get!+mat!+entry
    stack[0] = (*qfn3(fn))(fn, v_296, v_295, v_294);
    }
    env = stack[-16];
    v_296 = stack[-13];
    v_295 = stack[-1];
    v_294 = stack[-6];
    {   LispObject fn = basic_elt(env, 8); // get!+mat!+entry
    v_294 = (*qfn3(fn))(fn, v_296, v_295, v_294);
    }
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 9); // multsq
    v_294 = (*qfn2(fn))(fn, stack[0], v_294);
    }
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 10); // addsq
    v_294 = (*qfn2(fn))(fn, stack[-2], v_294);
    }
    env = stack[-16];
    stack[0] = v_294;
    v_294 = stack[-1];
    v_294 = add1(v_294);
    env = stack[-16];
    stack[-1] = v_294;
    goto v_206;
v_205:
    v_294 = lisp_true;
// Binding !*sub2
// FLUIDBIND: reloadenv=16 litvec-offset=3 saveloc=1
{   bind_fluid_stack bind_fluid_var(-16, 3, -1);
    setvalue(basic_elt(env, 3), v_294); // !*sub2
    v_294 = stack[0];
    {   LispObject fn = basic_elt(env, 11); // subs2
    v_294 = (*qfn1(fn))(fn, v_294);
    }
    env = stack[-16];
    stack[0] = v_294;
    ;}  // end of a binding scope
    v_294 = stack[0];
    v_294 = ncons(v_294);
    env = stack[-16];
    stack[-4] = v_294;
    stack[-5] = v_294;
v_188:
    v_294 = stack[-6];
    v_294 = add1(v_294);
    env = stack[-16];
    stack[-6] = v_294;
    v_295 = stack[-11];
    v_294 = stack[-6];
    v_294 = difference2(v_295, v_294);
    env = stack[-16];
    v_294 = Lminusp(nil, v_294);
    env = stack[-16];
    if (v_294 == nil) goto v_242;
    v_294 = stack[-5];
    goto v_187;
v_242:
    stack[-3] = stack[-4];
    v_295 = nil;
    v_294 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_294 = cons(v_295, v_294);
    env = stack[-16];
    stack[0] = v_294;
    v_294 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-2] = v_294;
v_256:
    v_295 = stack[-15];
    v_294 = stack[-2];
    v_294 = difference2(v_295, v_294);
    env = stack[-16];
    v_294 = Lminusp(nil, v_294);
    env = stack[-16];
    if (v_294 == nil) goto v_261;
    goto v_255;
v_261:
    stack[-1] = stack[0];
    v_296 = stack[-14];
    v_295 = stack[-10];
    v_294 = stack[-2];
    {   LispObject fn = basic_elt(env, 8); // get!+mat!+entry
    stack[0] = (*qfn3(fn))(fn, v_296, v_295, v_294);
    }
    env = stack[-16];
    v_296 = stack[-13];
    v_295 = stack[-2];
    v_294 = stack[-6];
    {   LispObject fn = basic_elt(env, 8); // get!+mat!+entry
    v_294 = (*qfn3(fn))(fn, v_296, v_295, v_294);
    }
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 9); // multsq
    v_294 = (*qfn2(fn))(fn, stack[0], v_294);
    }
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 10); // addsq
    v_294 = (*qfn2(fn))(fn, stack[-1], v_294);
    }
    env = stack[-16];
    stack[0] = v_294;
    v_294 = stack[-2];
    v_294 = add1(v_294);
    env = stack[-16];
    stack[-2] = v_294;
    goto v_256;
v_255:
    v_294 = lisp_true;
// Binding !*sub2
// FLUIDBIND: reloadenv=16 litvec-offset=3 saveloc=1
{   bind_fluid_stack bind_fluid_var(-16, 3, -1);
    setvalue(basic_elt(env, 3), v_294); // !*sub2
    v_294 = stack[0];
    {   LispObject fn = basic_elt(env, 11); // subs2
    v_294 = (*qfn1(fn))(fn, v_294);
    }
    env = stack[-16];
    stack[0] = v_294;
    ;}  // end of a binding scope
    v_294 = stack[0];
    v_294 = ncons(v_294);
    env = stack[-16];
    if (!car_legal(stack[-3])) rplacd_fails(stack[-3]);
    setcdr(stack[-3], v_294);
    v_294 = stack[-4];
    if (!car_legal(v_294)) v_294 = cdrerror(v_294); else
    v_294 = cdr(v_294);
    stack[-4] = v_294;
    goto v_188;
v_187:
    v_294 = ncons(v_294);
    env = stack[-16];
    if (!car_legal(stack[-7])) rplacd_fails(stack[-7]);
    setcdr(stack[-7], v_294);
    v_294 = stack[-8];
    if (!car_legal(v_294)) v_294 = cdrerror(v_294); else
    v_294 = cdr(v_294);
    stack[-8] = v_294;
    goto v_51;
v_50:
    return onevalue(v_294);
}



// Code for talp_chkknowl

static LispObject CC_talp_chkknowl(LispObject env,
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
    real_push(nil, nil, nil, nil, nil);
    push(nil, nil, nil);
    stack_popper stack_popper_var(9);
// copy arguments values to proper place
    stack[-1] = v_3;
    stack[-2] = v_2;
// end of prologue
    stack[-4] = nil;
    stack[0] = nil;
    v_124 = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // talp_candp
    v_124 = (*qfn1(fn))(fn, v_124);
    }
    env = stack[-8];
    if (v_124 == nil) goto v_18;
    v_124 = stack[-2];
    {   LispObject fn = basic_elt(env, 4); // talp_arg2l
    v_124 = (*qfn1(fn))(fn, v_124);
    }
    env = stack[-8];
    if (!consp(v_124)) goto v_23;
    else goto v_24;
v_23:
    v_124 = stack[-2];
    {   LispObject fn = basic_elt(env, 4); // talp_arg2l
    v_124 = (*qfn1(fn))(fn, v_124);
    }
    env = stack[-8];
    stack[-5] = v_124;
    v_124 = stack[-2];
    {   LispObject fn = basic_elt(env, 5); // talp_arg2r
    v_124 = (*qfn1(fn))(fn, v_124);
    }
    env = stack[-8];
    goto v_22;
v_24:
    v_124 = stack[-2];
    {   LispObject fn = basic_elt(env, 5); // talp_arg2r
    v_124 = (*qfn1(fn))(fn, v_124);
    }
    env = stack[-8];
    stack[-5] = v_124;
    v_124 = stack[-2];
    {   LispObject fn = basic_elt(env, 4); // talp_arg2l
    v_124 = (*qfn1(fn))(fn, v_124);
    }
    env = stack[-8];
    goto v_22;
    v_124 = nil;
v_22:
    stack[-7] = v_124;
    v_124 = stack[-7];
    {   LispObject fn = basic_elt(env, 6); // talp_invf
    v_124 = (*qfn1(fn))(fn, v_124);
    }
    env = stack[-8];
    stack[-6] = v_124;
    v_124 = stack[-2];
    {   LispObject fn = basic_elt(env, 7); // talp_op
    v_124 = (*qfn1(fn))(fn, v_124);
    }
    env = stack[-8];
    stack[-2] = v_124;
    v_124 = stack[-1];
    stack[-1] = v_124;
v_44:
    v_124 = stack[-1];
    if (v_124 == nil) goto v_47;
    v_124 = stack[-4];
    if (v_124 == nil) goto v_51;
    else goto v_47;
v_51:
    goto v_48;
v_47:
    goto v_43;
v_48:
    v_124 = stack[-1];
    if (!car_legal(v_124)) v_124 = carerror(v_124); else
    v_124 = car(v_124);
    if (!car_legal(v_124)) v_124 = carerror(v_124); else
    v_124 = car(v_124);
    stack[-3] = v_124;
    v_124 = stack[-3];
    {   LispObject fn = basic_elt(env, 3); // talp_candp
    v_124 = (*qfn1(fn))(fn, v_124);
    }
    env = stack[-8];
    if (v_124 == nil) goto v_60;
    v_124 = stack[-3];
    {   LispObject fn = basic_elt(env, 4); // talp_arg2l
    v_124 = (*qfn1(fn))(fn, v_124);
    }
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 8); // talp_invp
    v_124 = (*qfn1(fn))(fn, v_124);
    }
    env = stack[-8];
    if (v_124 == nil) goto v_66;
    v_124 = stack[-3];
    {   LispObject fn = basic_elt(env, 4); // talp_arg2l
    v_124 = (*qfn1(fn))(fn, v_124);
    }
    env = stack[-8];
    goto v_64;
v_66:
    v_124 = stack[-3];
    {   LispObject fn = basic_elt(env, 5); // talp_arg2r
    v_124 = (*qfn1(fn))(fn, v_124);
    }
    env = stack[-8];
    goto v_64;
    v_124 = nil;
v_64:
    stack[-7] = v_124;
    v_124 = stack[-7];
    {   LispObject fn = basic_elt(env, 9); // talp_invarg
    v_125 = (*qfn1(fn))(fn, v_124);
    }
    env = stack[-8];
    v_124 = stack[-5];
    if (v_125 == v_124) goto v_78;
    else goto v_79;
v_78:
    v_124 = stack[-3];
    if (!consp(v_124)) goto v_93;
    else goto v_94;
v_93:
    v_124 = stack[-3];
    v_125 = v_124;
    goto v_92;
v_94:
    v_124 = stack[-3];
    if (!car_legal(v_124)) v_124 = carerror(v_124); else
    v_124 = car(v_124);
    v_125 = v_124;
    goto v_92;
    v_125 = nil;
v_92:
    v_124 = stack[-2];
    if (v_125 == v_124) goto v_89;
    else goto v_90;
v_89:
    v_125 = stack[-2];
    v_124 = basic_elt(env, 1); // neq
    v_124 = (v_125 == v_124 ? lisp_true : nil);
    goto v_88;
v_90:
    v_124 = nil;
    goto v_88;
    v_124 = nil;
v_88:
    if (v_124 == nil) goto v_86;
    v_124 = stack[-7];
    {   LispObject fn = basic_elt(env, 6); // talp_invf
    v_125 = (*qfn1(fn))(fn, v_124);
    }
    env = stack[-8];
    v_124 = stack[-6];
    if (equal(v_125, v_124)) goto v_111;
    v_124 = basic_elt(env, 2); // true
    stack[0] = v_124;
    v_124 = lisp_true;
    stack[-4] = v_124;
    goto v_109;
v_111:
v_109:
    goto v_84;
v_86:
v_84:
    goto v_77;
v_79:
v_77:
    goto v_58;
v_60:
v_58:
    v_124 = stack[-1];
    if (!car_legal(v_124)) v_124 = cdrerror(v_124); else
    v_124 = cdr(v_124);
    stack[-1] = v_124;
    goto v_44;
v_43:
    goto v_16;
v_18:
    v_124 = nil;
    goto v_14;
v_16:
    v_124 = stack[0];
v_14:
    return onevalue(v_124);
}



// Code for qqe_ofsf_prepat

static LispObject CC_qqe_ofsf_prepat(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // qqe_op
    v_17 = (*qfn1(fn))(fn, v_17);
    }
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // qqe_rqopp
    v_17 = (*qfn1(fn))(fn, v_17);
    }
    env = stack[-1];
    if (v_17 == nil) goto v_7;
    v_17 = stack[0];
    {
        LispObject fn = basic_elt(env, 3); // qqe_prepat
        return (*qfn1(fn))(fn, v_17);
    }
v_7:
    v_17 = stack[0];
    {
        LispObject fn = basic_elt(env, 4); // ofsf_prepat
        return (*qfn1(fn))(fn, v_17);
    }
    v_17 = nil;
    return onevalue(v_17);
}



// Code for powers4

static LispObject CC_powers4(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_204, v_205, v_206;
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
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    stack[-3] = nil;
v_8:
    v_204 = stack[-1];
    if (v_204 == nil) goto v_11;
    else goto v_12;
v_11:
    stack[-4] = stack[-3];
    v_204 = stack[0];
    stack[-3] = v_204;
    v_204 = stack[-3];
    if (v_204 == nil) goto v_25;
    else goto v_26;
v_25:
    v_204 = nil;
    goto v_20;
v_26:
    v_204 = stack[-3];
    if (!car_legal(v_204)) v_204 = carerror(v_204); else
    v_204 = car(v_204);
    v_205 = v_204;
    if (!car_legal(v_205)) v_206 = carerror(v_205); else
    v_206 = car(v_205);
    if (!car_legal(v_204)) v_204 = cdrerror(v_204); else
    v_204 = cdr(v_204);
    if (!car_legal(v_204)) v_205 = carerror(v_204); else
    v_205 = car(v_204);
    v_204 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_204 = list2star(v_206, v_205, v_204);
    env = stack[-5];
    v_204 = ncons(v_204);
    env = stack[-5];
    stack[-1] = v_204;
    stack[-2] = v_204;
v_21:
    v_204 = stack[-3];
    if (!car_legal(v_204)) v_204 = cdrerror(v_204); else
    v_204 = cdr(v_204);
    stack[-3] = v_204;
    v_204 = stack[-3];
    if (v_204 == nil) goto v_44;
    else goto v_45;
v_44:
    v_204 = stack[-2];
    goto v_20;
v_45:
    stack[0] = stack[-1];
    v_204 = stack[-3];
    if (!car_legal(v_204)) v_204 = carerror(v_204); else
    v_204 = car(v_204);
    v_205 = v_204;
    if (!car_legal(v_205)) v_206 = carerror(v_205); else
    v_206 = car(v_205);
    if (!car_legal(v_204)) v_204 = cdrerror(v_204); else
    v_204 = cdr(v_204);
    if (!car_legal(v_204)) v_205 = carerror(v_204); else
    v_205 = car(v_204);
    v_204 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_204 = list2star(v_206, v_205, v_204);
    env = stack[-5];
    v_204 = ncons(v_204);
    env = stack[-5];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_204);
    v_204 = stack[-1];
    if (!car_legal(v_204)) v_204 = cdrerror(v_204); else
    v_204 = cdr(v_204);
    stack[-1] = v_204;
    goto v_21;
v_20:
    {
        LispObject v_212 = stack[-4];
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn2(fn))(fn, v_212, v_204);
    }
v_12:
    v_204 = stack[0];
    if (v_204 == nil) goto v_63;
    else goto v_64;
v_63:
    stack[-4] = stack[-3];
    v_204 = stack[-1];
    stack[-3] = v_204;
    v_204 = stack[-3];
    if (v_204 == nil) goto v_77;
    else goto v_78;
v_77:
    v_204 = nil;
    goto v_72;
v_78:
    v_204 = stack[-3];
    if (!car_legal(v_204)) v_204 = carerror(v_204); else
    v_204 = car(v_204);
    v_205 = v_204;
    if (!car_legal(v_205)) v_206 = carerror(v_205); else
    v_206 = car(v_205);
    if (!car_legal(v_204)) v_205 = cdrerror(v_204); else
    v_205 = cdr(v_204);
    v_204 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_204 = list2star(v_206, v_205, v_204);
    env = stack[-5];
    v_204 = ncons(v_204);
    env = stack[-5];
    stack[-1] = v_204;
    stack[-2] = v_204;
v_73:
    v_204 = stack[-3];
    if (!car_legal(v_204)) v_204 = cdrerror(v_204); else
    v_204 = cdr(v_204);
    stack[-3] = v_204;
    v_204 = stack[-3];
    if (v_204 == nil) goto v_95;
    else goto v_96;
v_95:
    v_204 = stack[-2];
    goto v_72;
v_96:
    stack[0] = stack[-1];
    v_204 = stack[-3];
    if (!car_legal(v_204)) v_204 = carerror(v_204); else
    v_204 = car(v_204);
    v_205 = v_204;
    if (!car_legal(v_205)) v_206 = carerror(v_205); else
    v_206 = car(v_205);
    if (!car_legal(v_204)) v_205 = cdrerror(v_204); else
    v_205 = cdr(v_204);
    v_204 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_204 = list2star(v_206, v_205, v_204);
    env = stack[-5];
    v_204 = ncons(v_204);
    env = stack[-5];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_204);
    v_204 = stack[-1];
    if (!car_legal(v_204)) v_204 = cdrerror(v_204); else
    v_204 = cdr(v_204);
    stack[-1] = v_204;
    goto v_73;
v_72:
    {
        LispObject v_213 = stack[-4];
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn2(fn))(fn, v_213, v_204);
    }
v_64:
    v_204 = stack[-1];
    if (!car_legal(v_204)) v_204 = carerror(v_204); else
    v_204 = car(v_204);
    if (!car_legal(v_204)) v_205 = carerror(v_204); else
    v_205 = car(v_204);
    v_204 = stack[0];
    if (!car_legal(v_204)) v_204 = carerror(v_204); else
    v_204 = car(v_204);
    if (!car_legal(v_204)) v_204 = carerror(v_204); else
    v_204 = car(v_204);
    if (equal(v_205, v_204)) goto v_113;
    else goto v_114;
v_113:
    v_204 = stack[-1];
    if (!car_legal(v_204)) v_204 = carerror(v_204); else
    v_204 = car(v_204);
    if (!car_legal(v_204)) v_205 = cdrerror(v_204); else
    v_205 = cdr(v_204);
    v_204 = stack[0];
    if (!car_legal(v_204)) v_204 = carerror(v_204); else
    v_204 = car(v_204);
    if (!car_legal(v_204)) v_204 = cdrerror(v_204); else
    v_204 = cdr(v_204);
    if (!car_legal(v_204)) v_204 = carerror(v_204); else
    v_204 = car(v_204);
    v_204 = static_cast<LispObject>(greaterp2(v_205, v_204));
    v_204 = v_204 ? lisp_true : nil;
    env = stack[-5];
    if (v_204 == nil) goto v_124;
    v_204 = stack[0];
    if (!car_legal(v_204)) v_204 = carerror(v_204); else
    v_204 = car(v_204);
    if (!car_legal(v_204)) v_205 = cdrerror(v_204); else
    v_205 = cdr(v_204);
    v_204 = stack[-1];
    if (!car_legal(v_204)) v_204 = carerror(v_204); else
    v_204 = car(v_204);
    if (!car_legal(v_204)) v_204 = cdrerror(v_204); else
    v_204 = cdr(v_204);
    if (!car_legal(v_205)) rplaca_fails(v_205);
    setcar(v_205, v_204);
    goto v_122;
v_124:
v_122:
    v_204 = stack[-1];
    if (!car_legal(v_204)) v_204 = carerror(v_204); else
    v_204 = car(v_204);
    if (!car_legal(v_204)) v_205 = cdrerror(v_204); else
    v_205 = cdr(v_204);
    v_204 = stack[0];
    if (!car_legal(v_204)) v_204 = carerror(v_204); else
    v_204 = car(v_204);
    if (!car_legal(v_204)) v_204 = cdrerror(v_204); else
    v_204 = cdr(v_204);
    if (!car_legal(v_204)) v_204 = cdrerror(v_204); else
    v_204 = cdr(v_204);
    v_204 = static_cast<LispObject>(lessp2(v_205, v_204));
    v_204 = v_204 ? lisp_true : nil;
    env = stack[-5];
    if (v_204 == nil) goto v_143;
    v_204 = stack[0];
    if (!car_legal(v_204)) v_204 = carerror(v_204); else
    v_204 = car(v_204);
    if (!car_legal(v_204)) v_205 = cdrerror(v_204); else
    v_205 = cdr(v_204);
    v_204 = stack[-1];
    if (!car_legal(v_204)) v_204 = carerror(v_204); else
    v_204 = car(v_204);
    if (!car_legal(v_204)) v_204 = cdrerror(v_204); else
    v_204 = cdr(v_204);
    if (!car_legal(v_205)) rplacd_fails(v_205);
    setcdr(v_205, v_204);
    goto v_141;
v_143:
v_141:
    stack[-2] = stack[0];
    v_204 = stack[-1];
    if (!car_legal(v_204)) v_205 = cdrerror(v_204); else
    v_205 = cdr(v_204);
    v_204 = stack[0];
    if (!car_legal(v_204)) v_204 = cdrerror(v_204); else
    v_204 = cdr(v_204);
    {   LispObject fn = basic_elt(env, 0); // powers4
    v_204 = (*qfn2(fn))(fn, v_205, v_204);
    }
    env = stack[-5];
    if (!car_legal(stack[-2])) rplacd_fails(stack[-2]);
    setcdr(stack[-2], v_204);
    v_204 = stack[-2];
    {
        LispObject v_214 = stack[-3];
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn2(fn))(fn, v_214, v_204);
    }
v_114:
    v_204 = stack[-1];
    if (!car_legal(v_204)) v_204 = carerror(v_204); else
    v_204 = car(v_204);
    if (!car_legal(v_204)) v_205 = carerror(v_204); else
    v_205 = car(v_204);
    v_204 = stack[0];
    if (!car_legal(v_204)) v_204 = carerror(v_204); else
    v_204 = car(v_204);
    if (!car_legal(v_204)) v_204 = carerror(v_204); else
    v_204 = car(v_204);
    {   LispObject fn = basic_elt(env, 2); // ordop
    v_204 = (*qfn2(fn))(fn, v_205, v_204);
    }
    env = stack[-5];
    if (v_204 == nil) goto v_169;
    v_204 = stack[0];
    if (!car_legal(v_204)) v_204 = carerror(v_204); else
    v_204 = car(v_204);
    if (!car_legal(v_204)) v_205 = cdrerror(v_204); else
    v_205 = cdr(v_204);
    v_204 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (!car_legal(v_205)) rplacd_fails(v_205);
    setcdr(v_205, v_204);
    stack[-2] = stack[0];
    v_205 = stack[-1];
    v_204 = stack[0];
    if (!car_legal(v_204)) v_204 = cdrerror(v_204); else
    v_204 = cdr(v_204);
    {   LispObject fn = basic_elt(env, 0); // powers4
    v_204 = (*qfn2(fn))(fn, v_205, v_204);
    }
    env = stack[-5];
    if (!car_legal(stack[-2])) rplacd_fails(stack[-2]);
    setcdr(stack[-2], v_204);
    v_204 = stack[-2];
    {
        LispObject v_215 = stack[-3];
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn2(fn))(fn, v_215, v_204);
    }
v_169:
    v_204 = stack[-1];
    if (!car_legal(v_204)) v_204 = carerror(v_204); else
    v_204 = car(v_204);
    if (!car_legal(v_204)) stack[-2] = carerror(v_204); else
    stack[-2] = car(v_204);
    v_204 = stack[-1];
    if (!car_legal(v_204)) v_204 = carerror(v_204); else
    v_204 = car(v_204);
    if (!car_legal(v_204)) v_205 = cdrerror(v_204); else
    v_205 = cdr(v_204);
    v_204 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_205 = cons(v_205, v_204);
    env = stack[-5];
    v_204 = stack[-3];
    v_204 = acons(stack[-2], v_205, v_204);
    env = stack[-5];
    stack[-3] = v_204;
    v_204 = stack[-1];
    if (!car_legal(v_204)) v_204 = cdrerror(v_204); else
    v_204 = cdr(v_204);
    stack[-1] = v_204;
    goto v_8;
    v_204 = nil;
    return onevalue(v_204);
}



// Code for unbind

static LispObject CC_unbind(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_10, v_11, v_12;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_11 = v_2;
// end of prologue
    v_10 = v_11;
    v_12 = basic_elt(env, 1); // binding
    if (!symbolp(v_11)) v_11 = nil;
    else { v_11 = qfastgets(v_11);
           if (v_11 != nil) { v_11 = elt(v_11, 13); // binding
#ifdef RECORD_GET
             if (v_11 != SPID_NOPROP)
                record_get(elt(fastget_names, 13), 1);
             else record_get(elt(fastget_names, 13), 0),
                v_11 = nil; }
           else record_get(elt(fastget_names, 13), 0); }
#else
             if (v_11 == SPID_NOPROP) v_11 = nil; }}
#endif
    if (!car_legal(v_11)) v_11 = cdrerror(v_11); else
    v_11 = cdr(v_11);
        return Lputprop(nil, v_10, v_12, v_11);
}



// Code for listdiff

static LispObject CC_listdiff(LispObject env,
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



// Code for deletemult!*

static LispObject CC_deletemultH(LispObject env,
                         LispObject v_2)
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
    v_46 = stack[0];
    if (v_46 == nil) goto v_9;
    else goto v_10;
v_9:
    v_46 = stack[0];
    goto v_6;
v_10:
    v_46 = stack[0];
    if (!car_legal(v_46)) v_46 = carerror(v_46); else
    v_46 = car(v_46);
    v_46 = ncons(v_46);
    env = stack[-3];
    stack[-2] = v_46;
    v_46 = stack[0];
    if (!car_legal(v_46)) v_46 = cdrerror(v_46); else
    v_46 = cdr(v_46);
    stack[0] = v_46;
    v_46 = stack[0];
    stack[-1] = v_46;
v_21:
    v_46 = stack[-1];
    if (v_46 == nil) goto v_25;
    else goto v_26;
v_25:
    goto v_20;
v_26:
    v_46 = stack[-1];
    if (!car_legal(v_46)) v_46 = carerror(v_46); else
    v_46 = car(v_46);
    v_48 = v_46;
    v_47 = v_48;
    v_46 = stack[-2];
    v_46 = Lmember(nil, v_47, v_46);
    if (v_46 == nil) goto v_34;
    else goto v_35;
v_34:
    stack[0] = stack[-2];
    v_46 = v_48;
    v_46 = ncons(v_46);
    env = stack[-3];
    v_46 = Lnconc(nil, stack[0], v_46);
    env = stack[-3];
    goto v_33;
v_35:
v_33:
    v_46 = stack[-1];
    if (!car_legal(v_46)) v_46 = cdrerror(v_46); else
    v_46 = cdr(v_46);
    stack[-1] = v_46;
    goto v_21;
v_20:
    v_46 = stack[-2];
v_6:
    return onevalue(v_46);
}



// Code for aminusp!:

static LispObject CC_aminuspT(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[-1] = v_2;
// end of prologue
    stack[-2] = nil;
    v_42 = qvalue(basic_elt(env, 1)); // !*modular
    if (v_42 == nil) goto v_11;
    v_43 = basic_elt(env, 2); // modular
    v_42 = nil;
    {   LispObject fn = basic_elt(env, 5); // setdmode
    v_42 = (*qfn2(fn))(fn, v_43, v_42);
    }
    env = stack[-3];
    stack[-2] = v_42;
    goto v_9;
v_11:
v_9:
    stack[0] = basic_elt(env, 3); // aminusp!:1
    v_42 = stack[-1];
    v_42 = Lmkquote(nil, v_42);
    env = stack[-3];
    v_42 = list2(stack[0], v_42);
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 6); // errorset2
    v_42 = (*qfn1(fn))(fn, v_42);
    }
    env = stack[-3];
    stack[0] = v_42;
    v_42 = stack[-2];
    if (v_42 == nil) goto v_24;
    v_43 = basic_elt(env, 2); // modular
    v_42 = lisp_true;
    {   LispObject fn = basic_elt(env, 5); // setdmode
    v_42 = (*qfn2(fn))(fn, v_43, v_42);
    }
    env = stack[-3];
    goto v_22;
v_24:
v_22:
    v_42 = stack[0];
    {   LispObject fn = basic_elt(env, 7); // errorp
    v_42 = (*qfn1(fn))(fn, v_42);
    }
    env = stack[-3];
    if (v_42 == nil) goto v_32;
    v_43 = stack[-1];
    v_42 = basic_elt(env, 4); // "arithmetic expression"
    {   LispObject fn = basic_elt(env, 8); // typerr
    v_42 = (*qfn2(fn))(fn, v_43, v_42);
    }
    goto v_30;
v_32:
    v_42 = stack[0];
    if (!car_legal(v_42)) v_42 = carerror(v_42); else
    v_42 = car(v_42);
    goto v_7;
v_30:
    v_42 = nil;
v_7:
    return onevalue(v_42);
}



// Code for mo_neg

static LispObject CC_mo_neg(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_81;
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
    stack[-2] = v_2;
// end of prologue
    v_81 = stack[-2];
    if (!car_legal(v_81)) v_81 = carerror(v_81); else
    v_81 = car(v_81);
    stack[-4] = v_81;
    v_81 = stack[-4];
    if (v_81 == nil) goto v_15;
    else goto v_16;
v_15:
    v_81 = nil;
    stack[-4] = v_81;
    goto v_9;
v_16:
    v_81 = stack[-4];
    if (!car_legal(v_81)) v_81 = carerror(v_81); else
    v_81 = car(v_81);
    v_81 = negate(v_81);
    env = stack[-5];
    v_81 = ncons(v_81);
    env = stack[-5];
    stack[-1] = v_81;
    stack[-3] = v_81;
v_10:
    v_81 = stack[-4];
    if (!car_legal(v_81)) v_81 = cdrerror(v_81); else
    v_81 = cdr(v_81);
    stack[-4] = v_81;
    v_81 = stack[-4];
    if (v_81 == nil) goto v_29;
    else goto v_30;
v_29:
    v_81 = stack[-3];
    stack[-4] = v_81;
    goto v_9;
v_30:
    stack[0] = stack[-1];
    v_81 = stack[-4];
    if (!car_legal(v_81)) v_81 = carerror(v_81); else
    v_81 = car(v_81);
    v_81 = negate(v_81);
    env = stack[-5];
    v_81 = ncons(v_81);
    env = stack[-5];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_81);
    v_81 = stack[-1];
    if (!car_legal(v_81)) v_81 = cdrerror(v_81); else
    v_81 = cdr(v_81);
    stack[-1] = v_81;
    goto v_10;
v_9:
    v_81 = stack[-2];
    if (!car_legal(v_81)) v_81 = cdrerror(v_81); else
    v_81 = cdr(v_81);
    stack[-3] = v_81;
    v_81 = stack[-3];
    if (v_81 == nil) goto v_53;
    else goto v_54;
v_53:
    v_81 = nil;
    goto v_47;
v_54:
    v_81 = stack[-3];
    if (!car_legal(v_81)) v_81 = carerror(v_81); else
    v_81 = car(v_81);
    v_81 = negate(v_81);
    env = stack[-5];
    v_81 = ncons(v_81);
    env = stack[-5];
    stack[-1] = v_81;
    stack[-2] = v_81;
v_48:
    v_81 = stack[-3];
    if (!car_legal(v_81)) v_81 = cdrerror(v_81); else
    v_81 = cdr(v_81);
    stack[-3] = v_81;
    v_81 = stack[-3];
    if (v_81 == nil) goto v_67;
    else goto v_68;
v_67:
    v_81 = stack[-2];
    goto v_47;
v_68:
    stack[0] = stack[-1];
    v_81 = stack[-3];
    if (!car_legal(v_81)) v_81 = carerror(v_81); else
    v_81 = car(v_81);
    v_81 = negate(v_81);
    env = stack[-5];
    v_81 = ncons(v_81);
    env = stack[-5];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_81);
    v_81 = stack[-1];
    if (!car_legal(v_81)) v_81 = cdrerror(v_81); else
    v_81 = cdr(v_81);
    stack[-1] = v_81;
    goto v_48;
v_47:
    {
        LispObject v_87 = stack[-4];
        return cons(v_87, v_81);
    }
}



// Code for wtchk

static LispObject CC_wtchk(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_41 = stack[-1];
    if (v_41 == nil) goto v_7;
    else goto v_8;
v_7:
    v_41 = stack[-2];
    goto v_6;
v_8:
    v_41 = stack[-2];
    stack[-3] = ncons(v_41);
    env = stack[-4];
    stack[0] = basic_elt(env, 1); // k!*
    v_42 = stack[-1];
    v_41 = stack[-2];
    if (!car_legal(v_41)) v_41 = carerror(v_41); else
    v_41 = car(v_41);
    if (!car_legal(v_41)) v_41 = cdrerror(v_41); else
    v_41 = cdr(v_41);
    v_41 = times2(v_42, v_41);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 3); // to
    v_42 = (*qfn2(fn))(fn, stack[0], v_41);
    }
    env = stack[-4];
    v_41 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_41 = cons(v_42, v_41);
    env = stack[-4];
    v_41 = ncons(v_41);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 4); // quotf
    v_41 = (*qfn2(fn))(fn, stack[-3], v_41);
    }
    env = stack[-4];
    v_42 = v_41;
    v_41 = v_42;
    if (v_41 == nil) goto v_29;
    else goto v_30;
v_29:
    v_43 = basic_elt(env, 2); // "weight confusion"
    v_42 = stack[-2];
    v_41 = stack[-1];
    v_41 = list3(v_43, v_42, v_41);
    env = stack[-4];
    {
        LispObject fn = basic_elt(env, 5); // errach
        return (*qfn1(fn))(fn, v_41);
    }
v_30:
    v_41 = v_42;
    if (!car_legal(v_41)) v_41 = carerror(v_41); else
    v_41 = car(v_41);
    goto v_28;
    v_41 = nil;
v_28:
    goto v_6;
    v_41 = nil;
v_6:
    return onevalue(v_41);
}



// Code for put!-kvalue

static LispObject CC_putKkvalue(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_40, v_41;
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
    stack[-1] = v_5;
    stack[-2] = v_4;
    stack[-3] = v_3;
    stack[0] = v_2;
// end of prologue
    v_41 = stack[-1];
    v_40 = basic_elt(env, 1); // !*sq
    if (!consp(v_41)) goto v_14;
    v_41 = car(v_41);
    if (v_41 == v_40) goto v_13;
    else goto v_14;
v_13:
    v_41 = stack[-2];
    v_40 = stack[-1];
    if (!car_legal(v_40)) v_40 = cdrerror(v_40); else
    v_40 = cdr(v_40);
    if (!car_legal(v_40)) v_40 = carerror(v_40); else
    v_40 = car(v_40);
    {   LispObject fn = basic_elt(env, 3); // sq_member
    v_40 = (*qfn2(fn))(fn, v_41, v_40);
    }
    env = stack[-5];
    goto v_12;
v_14:
    v_41 = stack[-2];
    v_40 = stack[-1];
    {   LispObject fn = basic_elt(env, 4); // smember
    v_40 = (*qfn2(fn))(fn, v_41, v_40);
    }
    env = stack[-5];
    goto v_12;
    v_40 = nil;
v_12:
    if (v_40 == nil) goto v_10;
    v_40 = stack[-2];
    {
        LispObject fn = basic_elt(env, 5); // recursiveerror
        return (*qfn1(fn))(fn, v_40);
    }
v_10:
    stack[-4] = stack[0];
    stack[0] = basic_elt(env, 2); // kvalue
    v_41 = stack[-2];
    v_40 = stack[-1];
    v_40 = list2(v_41, v_40);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 6); // aconc
    v_40 = (*qfn2(fn))(fn, stack[-3], v_40);
    }
    {
        LispObject v_47 = stack[-4];
        LispObject v_48 = stack[0];
        return Lputprop(nil, v_47, v_48, v_40);
    }
    v_40 = nil;
    return onevalue(v_40);
}



// Code for removeg1

static LispObject CC_removeg1(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_245, v_246, v_247, v_248;
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
    stack[-3] = v_4;
    stack[-4] = v_3;
    stack[-5] = v_2;
// end of prologue
    v_246 = stack[-5];
    v_245 = stack[-4];
    {   LispObject fn = basic_elt(env, 7); // removev
    v_245 = (*qfn2(fn))(fn, v_246, v_245);
    }
    env = stack[-7];
    v_246 = stack[-5];
    v_245 = stack[-3];
    {   LispObject fn = basic_elt(env, 7); // removev
    v_245 = (*qfn2(fn))(fn, v_246, v_245);
    }
    env = stack[-7];
    v_245 = stack[-4];
    if (!car_legal(v_245)) v_245 = cdrerror(v_245); else
    v_245 = cdr(v_245);
    if (!car_legal(v_245)) v_246 = carerror(v_245); else
    v_246 = car(v_245);
    v_245 = stack[-3];
    if (!car_legal(v_245)) v_245 = cdrerror(v_245); else
    v_245 = cdr(v_245);
    if (!car_legal(v_245)) v_245 = cdrerror(v_245); else
    v_245 = cdr(v_245);
    if (!car_legal(v_245)) v_245 = carerror(v_245); else
    v_245 = car(v_245);
    if (v_246 == v_245) goto v_24;
    else goto v_25;
v_24:
    v_245 = stack[-4];
    if (!car_legal(v_245)) v_245 = cdrerror(v_245); else
    v_245 = cdr(v_245);
    if (!car_legal(v_245)) v_245 = cdrerror(v_245); else
    v_245 = cdr(v_245);
    if (!car_legal(v_245)) v_246 = carerror(v_245); else
    v_246 = car(v_245);
    v_245 = stack[-3];
    if (!car_legal(v_245)) v_245 = cdrerror(v_245); else
    v_245 = cdr(v_245);
    if (!car_legal(v_245)) v_245 = carerror(v_245); else
    v_245 = car(v_245);
    v_245 = (v_246 == v_245 ? lisp_true : nil);
    goto v_23;
v_25:
    v_245 = nil;
    goto v_23;
    v_245 = nil;
v_23:
    if (v_245 == nil) goto v_21;
    v_246 = qvalue(basic_elt(env, 1)); // n!*!*2!-1
    v_245 = stack[-5];
    if (!car_legal(v_245)) v_245 = carerror(v_245); else
    v_245 = car(v_245);
    {   LispObject fn = basic_elt(env, 8); // multsq
    v_246 = (*qfn2(fn))(fn, v_246, v_245);
    }
    env = stack[-7];
    v_245 = stack[-5];
    if (!car_legal(v_245)) v_245 = cdrerror(v_245); else
    v_245 = cdr(v_245);
    v_245 = cons(v_246, v_245);
    return ncons(v_245);
v_21:
    v_245 = stack[-5];
    if (!car_legal(v_245)) v_246 = cdrerror(v_245); else
    v_246 = cdr(v_245);
    v_245 = stack[-4];
    if (!car_legal(v_245)) v_245 = cdrerror(v_245); else
    v_245 = cdr(v_245);
    if (!car_legal(v_245)) v_245 = cdrerror(v_245); else
    v_245 = cdr(v_245);
    if (!car_legal(v_245)) v_245 = carerror(v_245); else
    v_245 = car(v_245);
    {   LispObject fn = basic_elt(env, 9); // finde
    v_245 = (*qfn2(fn))(fn, v_246, v_245);
    }
    env = stack[-7];
    stack[-6] = v_245;
    v_245 = stack[-4];
    if (!car_legal(v_245)) v_245 = cdrerror(v_245); else
    v_245 = cdr(v_245);
    if (!car_legal(v_245)) v_246 = carerror(v_245); else
    v_246 = car(v_245);
    v_245 = stack[-3];
    if (!car_legal(v_245)) v_245 = cdrerror(v_245); else
    v_245 = cdr(v_245);
    if (!car_legal(v_245)) v_245 = cdrerror(v_245); else
    v_245 = cdr(v_245);
    if (!car_legal(v_245)) v_245 = carerror(v_245); else
    v_245 = car(v_245);
    if (v_246 == v_245) goto v_61;
    else goto v_62;
v_61:
    v_245 = stack[-6];
    if (v_245 == nil) goto v_73;
    v_245 = stack[-6];
    if (!car_legal(v_245)) v_245 = carerror(v_245); else
    v_245 = car(v_245);
    if (!car_legal(v_245)) v_246 = cdrerror(v_245); else
    v_246 = cdr(v_245);
    v_245 = stack[-3];
    if (!car_legal(v_245)) v_245 = cdrerror(v_245); else
    v_245 = cdr(v_245);
    if (!car_legal(v_245)) v_245 = carerror(v_245); else
    v_245 = car(v_245);
    if (!car_legal(v_246)) rplaca_fails(v_246);
    setcar(v_246, v_245);
    goto v_71;
v_73:
    v_248 = basic_elt(env, 2); // "Free edge"
    v_245 = stack[-4];
    if (!car_legal(v_245)) v_245 = cdrerror(v_245); else
    v_245 = cdr(v_245);
    if (!car_legal(v_245)) v_245 = cdrerror(v_245); else
    v_245 = cdr(v_245);
    if (!car_legal(v_245)) v_247 = carerror(v_245); else
    v_247 = car(v_245);
    v_246 = basic_elt(env, 3); // "in vertex"
    v_245 = stack[-4];
    v_245 = list4(v_248, v_247, v_246, v_245);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 10); // cerror
    v_245 = (*qfn1(fn))(fn, v_245);
    }
    env = stack[-7];
    goto v_71;
v_71:
    v_246 = qvalue(basic_elt(env, 1)); // n!*!*2!-1
    v_245 = qvalue(basic_elt(env, 4)); // su_order
    {   LispObject fn = basic_elt(env, 11); // quotsq
    v_246 = (*qfn2(fn))(fn, v_246, v_245);
    }
    env = stack[-7];
    v_245 = stack[-5];
    if (!car_legal(v_245)) v_245 = carerror(v_245); else
    v_245 = car(v_245);
    {   LispObject fn = basic_elt(env, 8); // multsq
    v_246 = (*qfn2(fn))(fn, v_246, v_245);
    }
    env = stack[-7];
    v_245 = stack[-5];
    if (!car_legal(v_245)) v_245 = cdrerror(v_245); else
    v_245 = cdr(v_245);
    v_245 = cons(v_246, v_245);
    return ncons(v_245);
v_62:
    v_245 = stack[-5];
    if (!car_legal(v_245)) v_246 = cdrerror(v_245); else
    v_246 = cdr(v_245);
    v_245 = stack[-3];
    if (!car_legal(v_245)) v_245 = cdrerror(v_245); else
    v_245 = cdr(v_245);
    if (!car_legal(v_245)) v_245 = cdrerror(v_245); else
    v_245 = cdr(v_245);
    if (!car_legal(v_245)) v_245 = carerror(v_245); else
    v_245 = car(v_245);
    {   LispObject fn = basic_elt(env, 9); // finde
    v_245 = (*qfn2(fn))(fn, v_246, v_245);
    }
    env = stack[-7];
    stack[-2] = v_245;
    v_245 = stack[-4];
    if (!car_legal(v_245)) v_245 = cdrerror(v_245); else
    v_245 = cdr(v_245);
    if (!car_legal(v_245)) v_245 = cdrerror(v_245); else
    v_245 = cdr(v_245);
    if (!car_legal(v_245)) v_246 = carerror(v_245); else
    v_246 = car(v_245);
    v_245 = stack[-3];
    if (!car_legal(v_245)) v_245 = cdrerror(v_245); else
    v_245 = cdr(v_245);
    if (!car_legal(v_245)) v_245 = carerror(v_245); else
    v_245 = car(v_245);
    if (v_246 == v_245) goto v_113;
    else goto v_114;
v_113:
    v_245 = stack[-2];
    if (v_245 == nil) goto v_125;
    v_245 = stack[-2];
    if (!car_legal(v_245)) v_245 = carerror(v_245); else
    v_245 = car(v_245);
    if (!car_legal(v_245)) v_246 = cdrerror(v_245); else
    v_246 = cdr(v_245);
    v_245 = stack[-4];
    if (!car_legal(v_245)) v_245 = cdrerror(v_245); else
    v_245 = cdr(v_245);
    if (!car_legal(v_245)) v_245 = carerror(v_245); else
    v_245 = car(v_245);
    if (!car_legal(v_246)) rplaca_fails(v_246);
    setcar(v_246, v_245);
    goto v_123;
v_125:
    v_248 = basic_elt(env, 2); // "Free edge"
    v_245 = stack[-3];
    if (!car_legal(v_245)) v_245 = cdrerror(v_245); else
    v_245 = cdr(v_245);
    if (!car_legal(v_245)) v_245 = cdrerror(v_245); else
    v_245 = cdr(v_245);
    if (!car_legal(v_245)) v_247 = carerror(v_245); else
    v_247 = car(v_245);
    v_246 = basic_elt(env, 3); // "in vertex"
    v_245 = stack[-3];
    v_245 = list4(v_248, v_247, v_246, v_245);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 10); // cerror
    v_245 = (*qfn1(fn))(fn, v_245);
    }
    env = stack[-7];
    goto v_123;
v_123:
    v_246 = qvalue(basic_elt(env, 1)); // n!*!*2!-1
    v_245 = qvalue(basic_elt(env, 4)); // su_order
    {   LispObject fn = basic_elt(env, 11); // quotsq
    v_246 = (*qfn2(fn))(fn, v_246, v_245);
    }
    env = stack[-7];
    v_245 = stack[-5];
    if (!car_legal(v_245)) v_245 = carerror(v_245); else
    v_245 = car(v_245);
    {   LispObject fn = basic_elt(env, 8); // multsq
    v_246 = (*qfn2(fn))(fn, v_246, v_245);
    }
    env = stack[-7];
    v_245 = stack[-5];
    if (!car_legal(v_245)) v_245 = cdrerror(v_245); else
    v_245 = cdr(v_245);
    v_245 = cons(v_246, v_245);
    return ncons(v_245);
v_114:
    v_245 = stack[-6];
    if (v_245 == nil) goto v_162;
    else goto v_163;
v_162:
    v_245 = lisp_true;
    goto v_161;
v_163:
    v_245 = stack[-2];
    v_245 = (v_245 == nil ? lisp_true : nil);
    goto v_161;
    v_245 = nil;
v_161:
    if (v_245 == nil) goto v_159;
    stack[0] = basic_elt(env, 5); // "Invalid structure of c-graph"
    v_245 = stack[-5];
    if (v_245 == nil) goto v_175;
    else goto v_176;
v_175:
    v_245 = nil;
    goto v_174;
v_176:
    v_245 = stack[-5];
    if (!car_legal(v_245)) v_245 = cdrerror(v_245); else
    v_245 = cdr(v_245);
    if (v_245 == nil) goto v_179;
    else goto v_180;
v_179:
    v_245 = stack[-5];
    if (!car_legal(v_245)) v_245 = carerror(v_245); else
    v_245 = car(v_245);
    goto v_174;
v_180:
    v_246 = basic_elt(env, 6); // times
    v_245 = stack[-5];
    v_245 = cons(v_246, v_245);
    env = stack[-7];
    goto v_174;
    v_245 = nil;
v_174:
    v_245 = list2(stack[0], v_245);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 10); // cerror
    v_245 = (*qfn1(fn))(fn, v_245);
    }
    env = stack[-7];
    goto v_157;
v_159:
v_157:
    v_245 = stack[-6];
    if (!car_legal(v_245)) v_245 = carerror(v_245); else
    v_245 = car(v_245);
    stack[-6] = v_245;
    v_245 = stack[-2];
    if (!car_legal(v_245)) v_245 = carerror(v_245); else
    v_245 = car(v_245);
    stack[-2] = v_245;
    v_245 = stack[-6];
    if (!car_legal(v_245)) v_246 = cdrerror(v_245); else
    v_246 = cdr(v_245);
    v_245 = stack[-3];
    if (!car_legal(v_245)) v_245 = cdrerror(v_245); else
    v_245 = cdr(v_245);
    if (!car_legal(v_245)) v_245 = carerror(v_245); else
    v_245 = car(v_245);
    if (!car_legal(v_246)) rplaca_fails(v_246);
    setcar(v_246, v_245);
    v_245 = stack[-2];
    if (!car_legal(v_245)) v_246 = cdrerror(v_245); else
    v_246 = cdr(v_245);
    v_245 = stack[-4];
    if (!car_legal(v_245)) v_245 = cdrerror(v_245); else
    v_245 = cdr(v_245);
    if (!car_legal(v_245)) v_245 = carerror(v_245); else
    v_245 = car(v_245);
    if (!car_legal(v_246)) rplaca_fails(v_246);
    setcar(v_246, v_245);
    v_245 = stack[-5];
    if (!car_legal(v_245)) stack[0] = carerror(v_245); else
    stack[0] = car(v_245);
    v_245 = stack[-5];
    if (!car_legal(v_245)) v_245 = cdrerror(v_245); else
    v_245 = cdr(v_245);
    {   LispObject fn = basic_elt(env, 12); // mkcopy
    v_245 = (*qfn1(fn))(fn, v_245);
    }
    env = stack[-7];
    v_245 = cons(stack[0], v_245);
    env = stack[-7];
    stack[-1] = v_245;
    v_245 = stack[-1];
    if (!car_legal(v_245)) v_245 = cdrerror(v_245); else
    v_245 = cdr(v_245);
    stack[0] = v_245;
    v_246 = stack[-6];
    v_245 = stack[0];
    v_245 = Lmember(nil, v_246, v_245);
    if (!car_legal(v_245)) v_245 = carerror(v_245); else
    v_245 = car(v_245);
    stack[-6] = v_245;
    v_246 = stack[-2];
    v_245 = stack[0];
    v_245 = Lmember(nil, v_246, v_245);
    if (!car_legal(v_245)) v_245 = carerror(v_245); else
    v_245 = car(v_245);
    stack[-2] = v_245;
    v_245 = stack[-6];
    if (!car_legal(v_245)) v_246 = cdrerror(v_245); else
    v_246 = cdr(v_245);
    v_245 = stack[-4];
    if (!car_legal(v_245)) v_245 = cdrerror(v_245); else
    v_245 = cdr(v_245);
    if (!car_legal(v_245)) v_245 = carerror(v_245); else
    v_245 = car(v_245);
    if (!car_legal(v_246)) rplaca_fails(v_246);
    setcar(v_246, v_245);
    v_245 = stack[-2];
    if (!car_legal(v_245)) v_246 = cdrerror(v_245); else
    v_246 = cdr(v_245);
    v_245 = stack[-3];
    if (!car_legal(v_245)) v_245 = cdrerror(v_245); else
    v_245 = cdr(v_245);
    if (!car_legal(v_245)) v_245 = carerror(v_245); else
    v_245 = car(v_245);
    if (!car_legal(v_246)) rplaca_fails(v_246);
    setcar(v_246, v_245);
    stack[-2] = stack[-5];
    v_246 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    v_245 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_246 = cons(v_246, v_245);
    env = stack[-7];
    v_245 = qvalue(basic_elt(env, 4)); // su_order
    {   LispObject fn = basic_elt(env, 11); // quotsq
    v_246 = (*qfn2(fn))(fn, v_246, v_245);
    }
    env = stack[-7];
    v_245 = stack[-1];
    if (!car_legal(v_245)) v_245 = carerror(v_245); else
    v_245 = car(v_245);
    {   LispObject fn = basic_elt(env, 8); // multsq
    v_246 = (*qfn2(fn))(fn, v_246, v_245);
    }
    v_245 = stack[0];
    {
        LispObject v_256 = stack[-2];
        return list2star(v_256, v_246, v_245);
    }
    return onevalue(v_245);
}



// Code for cl_varl1

static LispObject CC_cl_varl1(LispObject env,
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
        LispObject fn = basic_elt(env, 1); // cl_varl2
        return (*qfn4up(fn))(fn, v_14, v_15, v_16, v_10);
    }
}



// Code for qqe_ofsf_varlterm

static LispObject CC_qqe_ofsf_varlterm(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_58, v_59, v_60, v_61;
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
    v_60 = v_3;
    v_61 = v_2;
// end of prologue
    v_58 = v_61;
    if (!consp(v_58)) goto v_13;
    else goto v_14;
v_13:
    v_58 = v_61;
    if (symbolp(v_58)) goto v_19;
    v_58 = nil;
    goto v_17;
v_19:
    v_59 = v_61;
    v_58 = basic_elt(env, 1); // qepsilon
    v_58 = (v_59 == v_58 ? lisp_true : nil);
    v_58 = (v_58 == nil ? lisp_true : nil);
    goto v_17;
    v_58 = nil;
v_17:
    goto v_12;
v_14:
    v_58 = nil;
    goto v_12;
    v_58 = nil;
v_12:
    if (v_58 == nil) goto v_10;
    v_58 = v_61;
    v_59 = v_60;
    {   LispObject fn = basic_elt(env, 2); // lto_insertq
    v_58 = (*qfn2(fn))(fn, v_58, v_59);
    }
    v_60 = v_58;
    goto v_8;
v_10:
    v_58 = v_61;
    if (!consp(v_58)) goto v_35;
    v_58 = v_61;
    if (!car_legal(v_58)) v_58 = cdrerror(v_58); else
    v_58 = cdr(v_58);
    stack[0] = v_58;
v_40:
    v_58 = stack[0];
    if (v_58 == nil) goto v_45;
    else goto v_46;
v_45:
    goto v_39;
v_46:
    v_58 = stack[0];
    if (!car_legal(v_58)) v_58 = carerror(v_58); else
    v_58 = car(v_58);
    v_59 = v_60;
    {   LispObject fn = basic_elt(env, 0); // qqe_ofsf_varlterm
    v_58 = (*qfn2(fn))(fn, v_58, v_59);
    }
    env = stack[-1];
    v_60 = v_58;
    v_58 = stack[0];
    if (!car_legal(v_58)) v_58 = cdrerror(v_58); else
    v_58 = cdr(v_58);
    stack[0] = v_58;
    goto v_40;
v_39:
    goto v_8;
v_35:
v_8:
    v_58 = v_60;
    return onevalue(v_58);
}



// Code for rl_simp1

static LispObject CC_rl_simp1(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_195, v_196, v_197, v_198;
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
    stack[0] = v_2;
// end of prologue
v_1:
    v_195 = qvalue(basic_elt(env, 1)); // rl_cid!*
    if (v_195 == nil) goto v_10;
    else goto v_11;
v_10:
    v_195 = basic_elt(env, 2); // "select a context"
    v_195 = ncons(v_195);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 10); // rederr
    v_195 = (*qfn1(fn))(fn, v_195);
    }
    env = stack[-5];
    goto v_9;
v_11:
v_9:
    v_195 = stack[0];
    if (!consp(v_195)) goto v_18;
    else goto v_19;
v_18:
    v_195 = stack[0];
    {
        LispObject fn = basic_elt(env, 11); // rl_simpatom
        return (*qfn1(fn))(fn, v_195);
    }
v_19:
    v_195 = lisp_true;
// Binding !*strict_argcount
// FLUIDBIND: reloadenv=5 litvec-offset=3 saveloc=1
{   bind_fluid_stack bind_fluid_var(-5, 3, -1);
    setvalue(basic_elt(env, 3), v_195); // !*strict_argcount
    v_195 = stack[0];
    {   LispObject fn = basic_elt(env, 12); // argnochk
    v_195 = (*qfn1(fn))(fn, v_195);
    }
    env = stack[-5];
    ;}  // end of a binding scope
    v_195 = stack[0];
    if (!car_legal(v_195)) v_196 = carerror(v_195); else
    v_196 = car(v_195);
    v_195 = basic_elt(env, 4); // rl_simpfn
    v_195 = get(v_196, v_195);
    env = stack[-5];
    v_196 = v_195;
    if (v_195 == nil) goto v_32;
    v_195 = v_196;
    if (!symbolp(v_195)) v_195 = nil;
    else { v_195 = qfastgets(v_195);
           if (v_195 != nil) { v_195 = elt(v_195, 62); // full
#ifdef RECORD_GET
             if (v_195 == SPID_NOPROP)
                record_get(elt(fastget_names, 62), 0),
                v_195 = nil;
             else record_get(elt(fastget_names, 62), 1),
                v_195 = lisp_true; }
           else record_get(elt(fastget_names, 62), 0); }
#else
             if (v_195 == SPID_NOPROP) v_195 = nil; else v_195 = lisp_true; }}
#endif
    if (v_195 == nil) goto v_40;
    stack[-1] = v_196;
    v_195 = stack[0];
    v_195 = ncons(v_195);
    env = stack[-5];
    {
        LispObject v_204 = stack[-1];
        LispObject fn = basic_elt(env, 13); // apply
        return (*qfn2(fn))(fn, v_204, v_195);
    }
v_40:
    stack[-1] = v_196;
    v_195 = stack[0];
    if (!car_legal(v_195)) v_195 = cdrerror(v_195); else
    v_195 = cdr(v_195);
    v_195 = ncons(v_195);
    env = stack[-5];
    {
        LispObject v_205 = stack[-1];
        LispObject fn = basic_elt(env, 13); // apply
        return (*qfn2(fn))(fn, v_205, v_195);
    }
    v_195 = nil;
    goto v_7;
v_32:
    v_195 = stack[0];
    if (!car_legal(v_195)) v_197 = carerror(v_195); else
    v_197 = car(v_195);
    v_195 = qvalue(basic_elt(env, 1)); // rl_cid!*
    if (!car_legal(v_195)) v_196 = carerror(v_195); else
    v_196 = car(v_195);
    v_195 = basic_elt(env, 5); // simpfnname
    v_195 = get(v_196, v_195);
    env = stack[-5];
    v_195 = get(v_197, v_195);
    env = stack[-5];
    v_196 = v_195;
    if (v_195 == nil) goto v_57;
    v_195 = v_196;
    if (!symbolp(v_195)) v_195 = nil;
    else { v_195 = qfastgets(v_195);
           if (v_195 != nil) { v_195 = elt(v_195, 62); // full
#ifdef RECORD_GET
             if (v_195 == SPID_NOPROP)
                record_get(elt(fastget_names, 62), 0),
                v_195 = nil;
             else record_get(elt(fastget_names, 62), 1),
                v_195 = lisp_true; }
           else record_get(elt(fastget_names, 62), 0); }
#else
             if (v_195 == SPID_NOPROP) v_195 = nil; else v_195 = lisp_true; }}
#endif
    if (v_195 == nil) goto v_68;
    stack[-1] = v_196;
    v_195 = stack[0];
    v_195 = ncons(v_195);
    env = stack[-5];
    {
        LispObject v_206 = stack[-1];
        LispObject fn = basic_elt(env, 13); // apply
        return (*qfn2(fn))(fn, v_206, v_195);
    }
v_68:
    stack[-1] = v_196;
    v_195 = stack[0];
    if (!car_legal(v_195)) v_195 = cdrerror(v_195); else
    v_195 = cdr(v_195);
    v_195 = ncons(v_195);
    env = stack[-5];
    {
        LispObject v_207 = stack[-1];
        LispObject fn = basic_elt(env, 13); // apply
        return (*qfn2(fn))(fn, v_207, v_195);
    }
    v_195 = nil;
    goto v_7;
v_57:
    v_195 = stack[0];
    if (!car_legal(v_195)) v_195 = carerror(v_195); else
    v_195 = car(v_195);
    if (!symbolp(v_195)) v_195 = nil;
    else { v_195 = qfastgets(v_195);
           if (v_195 != nil) { v_195 = elt(v_195, 45); // psopfn
#ifdef RECORD_GET
             if (v_195 != SPID_NOPROP)
                record_get(elt(fastget_names, 45), 1);
             else record_get(elt(fastget_names, 45), 0),
                v_195 = nil; }
           else record_get(elt(fastget_names, 45), 0); }
#else
             if (v_195 == SPID_NOPROP) v_195 = nil; }}
#endif
    v_196 = v_195;
    if (v_195 == nil) goto v_85;
    v_195 = stack[0];
    if (!car_legal(v_195)) v_195 = cdrerror(v_195); else
    v_195 = cdr(v_195);
    v_195 = Lapply1(nil, v_196, v_195);
    env = stack[-5];
    stack[-1] = v_195;
    v_196 = stack[-1];
    v_195 = stack[0];
    if (equal(v_196, v_195)) goto v_96;
    v_195 = stack[-1];
    stack[0] = v_195;
    goto v_1;
v_96:
    goto v_83;
v_85:
v_83:
    v_195 = stack[0];
    if (!car_legal(v_195)) v_195 = carerror(v_195); else
    v_195 = car(v_195);
    if (!symbolp(v_195)) v_195 = nil;
    else { v_195 = qfastgets(v_195);
           if (v_195 != nil) { v_195 = elt(v_195, 59); // opfn
#ifdef RECORD_GET
             if (v_195 == SPID_NOPROP)
                record_get(elt(fastget_names, 59), 0),
                v_195 = nil;
             else record_get(elt(fastget_names, 59), 1),
                v_195 = lisp_true; }
           else record_get(elt(fastget_names, 59), 0); }
#else
             if (v_195 == SPID_NOPROP) v_195 = nil; else v_195 = lisp_true; }}
#endif
    if (v_195 == nil) goto v_104;
    v_195 = stack[0];
    if (!car_legal(v_195)) stack[-4] = carerror(v_195); else
    stack[-4] = car(v_195);
    v_195 = stack[0];
    if (!car_legal(v_195)) v_195 = cdrerror(v_195); else
    v_195 = cdr(v_195);
    stack[-3] = v_195;
    v_195 = stack[-3];
    if (v_195 == nil) goto v_122;
    else goto v_123;
v_122:
    v_195 = nil;
    goto v_116;
v_123:
    v_195 = stack[-3];
    if (!car_legal(v_195)) v_195 = carerror(v_195); else
    v_195 = car(v_195);
    {   LispObject fn = basic_elt(env, 14); // reval
    v_195 = (*qfn1(fn))(fn, v_195);
    }
    env = stack[-5];
    v_195 = ncons(v_195);
    env = stack[-5];
    stack[-1] = v_195;
    stack[-2] = v_195;
v_117:
    v_195 = stack[-3];
    if (!car_legal(v_195)) v_195 = cdrerror(v_195); else
    v_195 = cdr(v_195);
    stack[-3] = v_195;
    v_195 = stack[-3];
    if (v_195 == nil) goto v_136;
    else goto v_137;
v_136:
    v_195 = stack[-2];
    goto v_116;
v_137:
    stack[0] = stack[-1];
    v_195 = stack[-3];
    if (!car_legal(v_195)) v_195 = carerror(v_195); else
    v_195 = car(v_195);
    {   LispObject fn = basic_elt(env, 14); // reval
    v_195 = (*qfn1(fn))(fn, v_195);
    }
    env = stack[-5];
    v_195 = ncons(v_195);
    env = stack[-5];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_195);
    v_195 = stack[-1];
    if (!car_legal(v_195)) v_195 = cdrerror(v_195); else
    v_195 = cdr(v_195);
    stack[-1] = v_195;
    goto v_117;
v_116:
    {   LispObject fn = basic_elt(env, 13); // apply
    v_195 = (*qfn2(fn))(fn, stack[-4], v_195);
    }
    env = stack[-5];
    stack[0] = v_195;
    goto v_1;
v_104:
    v_195 = stack[0];
    if (!car_legal(v_195)) v_195 = carerror(v_195); else
    v_195 = car(v_195);
    if (!symbolp(v_195)) v_195 = nil;
    else { v_195 = qfastgets(v_195);
           if (v_195 != nil) { v_195 = elt(v_195, 44); // prepfn2
#ifdef RECORD_GET
             if (v_195 != SPID_NOPROP)
                record_get(elt(fastget_names, 44), 1);
             else record_get(elt(fastget_names, 44), 0),
                v_195 = nil; }
           else record_get(elt(fastget_names, 44), 0); }
#else
             if (v_195 == SPID_NOPROP) v_195 = nil; }}
#endif
    v_196 = v_195;
    if (v_195 == nil) goto v_153;
    stack[-1] = v_196;
    v_195 = stack[0];
    v_195 = ncons(v_195);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 13); // apply
    v_195 = (*qfn2(fn))(fn, stack[-1], v_195);
    }
    env = stack[-5];
    stack[0] = v_195;
    goto v_1;
v_153:
    v_195 = stack[0];
    if (!car_legal(v_195)) v_195 = carerror(v_195); else
    v_195 = car(v_195);
    {   LispObject fn = basic_elt(env, 15); // ioto_form2str
    v_195 = (*qfn1(fn))(fn, v_195);
    }
    env = stack[-5];
    stack[-1] = v_195;
    v_195 = stack[0];
    if (!car_legal(v_195)) v_195 = carerror(v_195); else
    v_195 = car(v_195);
    if (!symbolp(v_195)) v_195 = nil;
    else { v_195 = qfastgets(v_195);
           if (v_195 != nil) { v_195 = elt(v_195, 37); // prtch
#ifdef RECORD_GET
             if (v_195 != SPID_NOPROP)
                record_get(elt(fastget_names, 37), 1);
             else record_get(elt(fastget_names, 37), 0),
                v_195 = nil; }
           else record_get(elt(fastget_names, 37), 0); }
#else
             if (v_195 == SPID_NOPROP) v_195 = nil; }}
#endif
    v_196 = v_195;
    if (v_195 == nil) goto v_168;
    v_195 = v_196;
    {   LispObject fn = basic_elt(env, 15); // ioto_form2str
    v_198 = (*qfn1(fn))(fn, v_195);
    }
    env = stack[-5];
    v_197 = basic_elt(env, 6); // " ("
    v_196 = stack[-1];
    v_195 = basic_elt(env, 7); // ")"
    v_195 = list4(v_198, v_197, v_196, v_195);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 16); // lto_sconcat
    v_195 = (*qfn1(fn))(fn, v_195);
    }
    env = stack[-5];
    stack[-1] = v_195;
    goto v_166;
v_168:
v_166:
    v_196 = stack[-1];
    v_195 = basic_elt(env, 8); // "predicate"
    {   LispObject fn = basic_elt(env, 17); // redmsg
    v_195 = (*qfn2(fn))(fn, v_196, v_195);
    }
    env = stack[-5];
    v_195 = stack[0];
    if (!car_legal(v_195)) v_198 = carerror(v_195); else
    v_198 = car(v_195);
    v_195 = qvalue(basic_elt(env, 1)); // rl_cid!*
    if (!car_legal(v_195)) v_196 = carerror(v_195); else
    v_196 = car(v_195);
    v_195 = basic_elt(env, 5); // simpfnname
    v_197 = get(v_196, v_195);
    env = stack[-5];
    v_195 = qvalue(basic_elt(env, 1)); // rl_cid!*
    if (!car_legal(v_195)) v_196 = carerror(v_195); else
    v_196 = car(v_195);
    v_195 = basic_elt(env, 9); // simpdefault
    v_195 = get(v_196, v_195);
    env = stack[-5];
    v_195 = Lputprop(nil, v_198, v_197, v_195);
    env = stack[-5];
    v_195 = stack[0];
    stack[0] = v_195;
    goto v_1;
v_7:
    return onevalue(v_195);
}



// Code for wedget2

static LispObject CC_wedget2(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_51 = stack[-1];
    if (!car_legal(v_51)) v_52 = carerror(v_51); else
    v_52 = car(v_51);
    v_51 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_52 == v_51) goto v_7;
    else goto v_8;
v_7:
    v_51 = stack[0];
    if (!car_legal(v_51)) stack[-2] = carerror(v_51); else
    stack[-2] = car(v_51);
    v_51 = stack[-1];
    if (!car_legal(v_51)) v_52 = cdrerror(v_51); else
    v_52 = cdr(v_51);
    v_51 = stack[0];
    if (!car_legal(v_51)) v_51 = cdrerror(v_51); else
    v_51 = cdr(v_51);
    {   LispObject fn = basic_elt(env, 1); // multsq
    v_51 = (*qfn2(fn))(fn, v_52, v_51);
    }
    env = stack[-3];
    v_51 = cons(stack[-2], v_51);
    return ncons(v_51);
v_8:
    v_51 = stack[0];
    if (!car_legal(v_51)) v_51 = carerror(v_51); else
    v_51 = car(v_51);
    if (!car_legal(v_51)) v_52 = carerror(v_51); else
    v_52 = car(v_51);
    v_51 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_52 == v_51) goto v_21;
    else goto v_22;
v_21:
    v_51 = stack[-1];
    if (!car_legal(v_51)) v_51 = carerror(v_51); else
    v_51 = car(v_51);
    stack[-2] = ncons(v_51);
    env = stack[-3];
    v_51 = stack[-1];
    if (!car_legal(v_51)) v_52 = cdrerror(v_51); else
    v_52 = cdr(v_51);
    v_51 = stack[0];
    if (!car_legal(v_51)) v_51 = cdrerror(v_51); else
    v_51 = cdr(v_51);
    {   LispObject fn = basic_elt(env, 1); // multsq
    v_51 = (*qfn2(fn))(fn, v_52, v_51);
    }
    env = stack[-3];
    v_51 = cons(stack[-2], v_51);
    return ncons(v_51);
v_22:
    v_51 = stack[-1];
    if (!car_legal(v_51)) v_53 = carerror(v_51); else
    v_53 = car(v_51);
    v_51 = stack[0];
    if (!car_legal(v_51)) v_52 = carerror(v_51); else
    v_52 = car(v_51);
    v_51 = nil;
    {   LispObject fn = basic_elt(env, 2); // wedgek2
    stack[-2] = (*qfn3(fn))(fn, v_53, v_52, v_51);
    }
    env = stack[-3];
    v_51 = stack[-1];
    if (!car_legal(v_51)) v_52 = cdrerror(v_51); else
    v_52 = cdr(v_51);
    v_51 = stack[0];
    if (!car_legal(v_51)) v_51 = cdrerror(v_51); else
    v_51 = cdr(v_51);
    {   LispObject fn = basic_elt(env, 1); // multsq
    v_51 = (*qfn2(fn))(fn, v_52, v_51);
    }
    env = stack[-3];
    {
        LispObject v_57 = stack[-2];
        LispObject fn = basic_elt(env, 3); // multpfsq
        return (*qfn2(fn))(fn, v_57, v_51);
    }
    v_51 = nil;
    return onevalue(v_51);
}



// Code for set!-ordp

static LispObject CC_setKordp(LispObject env,
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
    v_22 = v_3;
    v_23 = v_2;
// end of prologue
    v_21 = v_23;
    if (is_number(v_21)) goto v_9;
    else goto v_8;
v_9:
    v_21 = v_22;
    if (is_number(v_21)) goto v_11;
    else goto v_8;
v_11:
    v_21 = v_23;
        return Llessp_2(nil, v_21, v_22);
v_8:
    v_21 = v_23;
    {
        LispObject fn = basic_elt(env, 1); // ordp
        return (*qfn2(fn))(fn, v_21, v_22);
    }
    v_21 = nil;
    return onevalue(v_21);
}



// Code for map__edges

static LispObject CC_map__edges(LispObject env,
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
    v_35 = nil;
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
    {   LispObject fn = basic_elt(env, 1); // union_edges
    v_35 = (*qfn2(fn))(fn, v_35, v_36);
    }
    env = stack[-2];
    v_36 = v_35;
    v_35 = stack[-1];
    v_35 = cdr(v_35);
    stack[-1] = v_35;
    goto v_10;
v_7:
    return onevalue(v_35);
}



// Code for assert_dyntypep

static LispObject CC_assert_dyntypep(LispObject env,
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
    if (symbolp(v_15)) goto v_7;
    v_15 = nil;
    goto v_5;
v_7:
    v_15 = v_16;
    v_16 = basic_elt(env, 1); // assert_dyntype
        return Lflagp(nil, v_15, v_16);
    v_15 = nil;
v_5:
    return onevalue(v_15);
}



// Code for dd

static LispObject CC_dd(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_73, v_74, v_75;
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
    stack[0] = v_3;
    stack[-2] = v_2;
// end of prologue
    v_74 = stack[0];
    v_73 = stack[-2];
    {   LispObject fn = basic_elt(env, 5); // dquot
    v_73 = (*qfn2(fn))(fn, v_74, v_73);
    }
    env = stack[-4];
    v_75 = v_73;
    v_73 = v_75;
    if (v_73 == nil) goto v_14;
    else goto v_15;
v_14:
    v_74 = stack[-2];
    v_73 = stack[0];
    {   LispObject fn = basic_elt(env, 6); // dless
    v_73 = (*qfn2(fn))(fn, v_74, v_73);
    }
    if (v_73 == nil) goto v_20;
    v_73 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_18;
v_20:
    v_73 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_18;
    v_73 = nil;
v_18:
    goto v_8;
v_15:
    v_74 = qvalue(basic_elt(env, 1)); // ordering
    v_73 = basic_elt(env, 2); // lex
    if (v_74 == v_73) goto v_31;
    v_73 = v_75;
    if (!car_legal(v_73)) v_73 = cdrerror(v_73); else
    v_73 = cdr(v_73);
    v_75 = v_73;
    goto v_29;
v_31:
v_29:
    v_73 = v_75;
    {   LispObject fn = basic_elt(env, 7); // leftzeros
    v_73 = (*qfn1(fn))(fn, v_73);
    }
    env = stack[-4];
    stack[-3] = v_73;
    v_73 = qvalue(basic_elt(env, 3)); // nc!*
    if (v_73 == nil) goto v_44;
    else goto v_45;
v_44:
    stack[-1] = stack[-3];
    v_73 = qvalue(basic_elt(env, 4)); // varlist!*
    stack[0] = Llength(nil, v_73);
    env = stack[-4];
    v_73 = stack[-2];
    {   LispObject fn = basic_elt(env, 8); // class
    v_73 = (*qfn1(fn))(fn, v_73);
    }
    env = stack[-4];
    v_73 = static_cast<LispObject>(static_cast<std::uintptr_t>(stack[0]) - static_cast<std::uintptr_t>(v_73) + TAG_FIXNUM);
    v_73 = (static_cast<std::intptr_t>(stack[-1]) < static_cast<std::intptr_t>(v_73)) ? lisp_true : nil;
    v_73 = (v_73 == nil ? lisp_true : nil);
    goto v_43;
v_45:
    v_73 = nil;
    goto v_43;
    v_73 = nil;
v_43:
    if (v_73 == nil) goto v_41;
    v_73 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    goto v_39;
v_41:
    v_73 = qvalue(basic_elt(env, 3)); // nc!*
    if (v_73 == nil) goto v_60;
    stack[0] = stack[-3];
    v_73 = qvalue(basic_elt(env, 4)); // varlist!*
    v_73 = Llength(nil, v_73);
    env = stack[-4];
    v_74 = qvalue(basic_elt(env, 3)); // nc!*
    v_73 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_73) - static_cast<std::uintptr_t>(v_74) + TAG_FIXNUM);
    if ((static_cast<std::intptr_t>(stack[0]) < static_cast<std::intptr_t>(v_73))) goto v_60;
    v_73 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    goto v_39;
v_60:
    v_73 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    goto v_39;
    v_73 = nil;
v_39:
v_8:
    return onevalue(v_73);
}



// Code for pv_times2

static LispObject CC_pv_times2(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    v_28 = v_3;
    stack[-1] = v_2;
// end of prologue
v_9:
    v_29 = v_28;
    if (v_29 == nil) goto v_12;
    else goto v_13;
v_12:
    v_28 = stack[0];
    goto v_8;
v_13:
    v_29 = v_28;
    if (!car_legal(v_29)) v_29 = cdrerror(v_29); else
    v_29 = cdr(v_29);
    stack[-2] = v_29;
    v_29 = stack[-1];
    if (!car_legal(v_28)) v_28 = carerror(v_28); else
    v_28 = car(v_28);
    {   LispObject fn = basic_elt(env, 1); // pv_times3
    v_28 = (*qfn2(fn))(fn, v_29, v_28);
    }
    env = stack[-3];
    v_29 = ncons(v_28);
    env = stack[-3];
    v_28 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // pv_add
    v_28 = (*qfn2(fn))(fn, v_29, v_28);
    }
    env = stack[-3];
    stack[0] = v_28;
    v_28 = stack[-2];
    goto v_9;
    v_28 = nil;
v_8:
    return onevalue(v_28);
}



// Code for exptsq

static LispObject CC_exptsq(LispObject env,
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
    v_151 = stack[-1];
    v_150 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_151 == v_150) goto v_10;
    else goto v_11;
v_10:
    v_150 = stack[-2];
    goto v_7;
v_11:
    v_151 = stack[-1];
    v_150 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_151 == v_150) goto v_15;
    else goto v_16;
v_15:
    v_150 = stack[-2];
    if (!car_legal(v_150)) v_150 = carerror(v_150); else
    v_150 = car(v_150);
    if (v_150 == nil) goto v_21;
    else goto v_22;
v_21:
    v_152 = basic_elt(env, 1); // poly
    v_151 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_150 = basic_elt(env, 2); // " 0**0 formed"
    {
        LispObject fn = basic_elt(env, 5); // rerror
        return (*qfn3(fn))(fn, v_152, v_151, v_150);
    }
v_22:
    v_151 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_150 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_151, v_150);
    v_150 = nil;
    goto v_7;
v_16:
    v_150 = stack[-2];
    if (!car_legal(v_150)) v_150 = carerror(v_150); else
    v_150 = car(v_150);
    if (v_150 == nil) goto v_34;
    else goto v_35;
v_34:
    v_150 = stack[-2];
    goto v_7;
v_35:
    v_151 = stack[-1];
    v_150 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_150 = static_cast<LispObject>(lessp2(v_151, v_150));
    v_150 = v_150 ? lisp_true : nil;
    env = stack[-4];
    if (v_150 == nil) goto v_40;
    v_150 = stack[-2];
    {   LispObject fn = basic_elt(env, 6); // mk!*sq
    v_151 = (*qfn1(fn))(fn, v_150);
    }
    env = stack[-4];
    v_150 = stack[-1];
    v_150 = list2(v_151, v_150);
    env = stack[-4];
    {
        LispObject fn = basic_elt(env, 7); // simpexpt
        return (*qfn1(fn))(fn, v_150);
    }
v_40:
    v_150 = qvalue(basic_elt(env, 3)); // !*exp
    if (v_150 == nil) goto v_49;
    else goto v_50;
v_49:
    v_150 = stack[-2];
    if (!car_legal(v_150)) v_151 = carerror(v_150); else
    v_151 = car(v_150);
    v_150 = stack[-1];
    {   LispObject fn = basic_elt(env, 8); // mksfpf
    stack[0] = (*qfn2(fn))(fn, v_151, v_150);
    }
    env = stack[-4];
    v_150 = stack[-2];
    if (!car_legal(v_150)) v_151 = cdrerror(v_150); else
    v_151 = cdr(v_150);
    v_150 = stack[-1];
    {   LispObject fn = basic_elt(env, 8); // mksfpf
    v_150 = (*qfn2(fn))(fn, v_151, v_150);
    }
    {
        LispObject v_157 = stack[0];
        return cons(v_157, v_150);
    }
v_50:
    v_150 = stack[-2];
    {   LispObject fn = basic_elt(env, 9); // kernp
    v_150 = (*qfn1(fn))(fn, v_150);
    }
    env = stack[-4];
    if (v_150 == nil) goto v_62;
    v_150 = stack[-2];
    if (!car_legal(v_150)) v_150 = carerror(v_150); else
    v_150 = car(v_150);
    if (!car_legal(v_150)) v_150 = carerror(v_150); else
    v_150 = car(v_150);
    if (!car_legal(v_150)) v_150 = carerror(v_150); else
    v_150 = car(v_150);
    if (!car_legal(v_150)) v_151 = carerror(v_150); else
    v_151 = car(v_150);
    v_150 = stack[-1];
    {
        LispObject fn = basic_elt(env, 10); // mksq
        return (*qfn2(fn))(fn, v_151, v_150);
    }
v_62:
    v_150 = stack[-2];
    if (!car_legal(v_150)) v_151 = cdrerror(v_150); else
    v_151 = cdr(v_150);
    v_150 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_151 == v_150) goto v_72;
    else goto v_73;
v_72:
    v_150 = stack[-2];
    if (!car_legal(v_150)) v_151 = carerror(v_150); else
    v_151 = car(v_150);
    v_150 = stack[-1];
    {   LispObject fn = basic_elt(env, 11); // exptf
    v_151 = (*qfn2(fn))(fn, v_151, v_150);
    }
    v_150 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_151, v_150);
v_73:
    v_150 = stack[-2];
    if (!car_legal(v_150)) v_150 = carerror(v_150); else
    v_150 = car(v_150);
    if (!consp(v_150)) goto v_87;
    else goto v_88;
v_87:
    v_150 = lisp_true;
    goto v_86;
v_88:
    v_150 = stack[-2];
    if (!car_legal(v_150)) v_150 = carerror(v_150); else
    v_150 = car(v_150);
    if (!car_legal(v_150)) v_150 = carerror(v_150); else
    v_150 = car(v_150);
    v_150 = (consp(v_150) ? nil : lisp_true);
    goto v_86;
    v_150 = nil;
v_86:
    if (v_150 == nil) goto v_84;
    v_150 = stack[-2];
    if (!car_legal(v_150)) v_151 = carerror(v_150); else
    v_151 = car(v_150);
    v_150 = stack[-1];
    {   LispObject fn = basic_elt(env, 12); // !:expt
    v_151 = (*qfn2(fn))(fn, v_151, v_150);
    }
    env = stack[-4];
    v_150 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-3] = cons(v_151, v_150);
    env = stack[-4];
    stack[0] = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_150 = stack[-2];
    if (!car_legal(v_150)) v_151 = cdrerror(v_150); else
    v_151 = cdr(v_150);
    v_150 = stack[-1];
    {   LispObject fn = basic_elt(env, 11); // exptf
    v_150 = (*qfn2(fn))(fn, v_151, v_150);
    }
    env = stack[-4];
    v_150 = cons(stack[0], v_150);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 13); // multsq
    v_150 = (*qfn2(fn))(fn, stack[-3], v_150);
    }
    env = stack[-4];
    stack[-3] = v_150;
    goto v_9;
v_84:
    v_150 = stack[-2];
    stack[-3] = v_150;
v_116:
    v_150 = stack[-1];
    v_151 = sub1(v_150);
    env = stack[-4];
    stack[-1] = v_151;
    v_150 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_150 = static_cast<LispObject>(greaterp2(v_151, v_150));
    v_150 = v_150 ? lisp_true : nil;
    env = stack[-4];
    if (v_150 == nil) goto v_119;
    else goto v_120;
v_119:
    goto v_115;
v_120:
    v_150 = stack[-2];
    if (!car_legal(v_150)) v_151 = carerror(v_150); else
    v_151 = car(v_150);
    v_150 = stack[-3];
    if (!car_legal(v_150)) v_150 = carerror(v_150); else
    v_150 = car(v_150);
    {   LispObject fn = basic_elt(env, 14); // multf
    stack[0] = (*qfn2(fn))(fn, v_151, v_150);
    }
    env = stack[-4];
    v_150 = stack[-2];
    if (!car_legal(v_150)) v_151 = cdrerror(v_150); else
    v_151 = cdr(v_150);
    v_150 = stack[-3];
    if (!car_legal(v_150)) v_150 = cdrerror(v_150); else
    v_150 = cdr(v_150);
    {   LispObject fn = basic_elt(env, 14); // multf
    v_150 = (*qfn2(fn))(fn, v_151, v_150);
    }
    env = stack[-4];
    v_150 = cons(stack[0], v_150);
    env = stack[-4];
    stack[-3] = v_150;
    goto v_116;
v_115:
    v_150 = stack[-3];
    {   LispObject fn = basic_elt(env, 15); // canonsq
    v_150 = (*qfn1(fn))(fn, v_150);
    }
    env = stack[-4];
    stack[-3] = v_150;
    goto v_9;
v_9:
    v_150 = stack[-3];
    if (!car_legal(v_150)) v_150 = cdrerror(v_150); else
    v_150 = cdr(v_150);
    if (v_150 == nil) goto v_141;
    else goto v_142;
v_141:
    v_152 = basic_elt(env, 1); // poly
    v_151 = static_cast<LispObject>(1616)+TAG_FIXNUM; // 101
    v_150 = basic_elt(env, 4); // "Zero divisor"
    {   LispObject fn = basic_elt(env, 5); // rerror
    v_150 = (*qfn3(fn))(fn, v_152, v_151, v_150);
    }
    goto v_140;
v_142:
v_140:
    v_150 = stack[-3];
v_7:
    return onevalue(v_150);
}



// Code for p_princ

static LispObject CC_p_princ(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_74, v_75;
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
    v_74 = stack[-1];
    v_74 = Lexplodec(nil, v_74);
    env = stack[-3];
    stack[-2] = v_74;
    v_74 = qvalue(basic_elt(env, 1)); // bldmsg_chars!*
    if (v_74 == nil) goto v_13;
    v_74 = stack[0];
    if (v_74 == nil) goto v_18;
    v_75 = basic_elt(env, 2); // ! 
    v_74 = qvalue(basic_elt(env, 1)); // bldmsg_chars!*
    v_74 = cons(v_75, v_74);
    env = stack[-3];
    setvalue(basic_elt(env, 1), v_74); // bldmsg_chars!*
    goto v_16;
v_18:
v_16:
    v_74 = stack[-2];
    stack[0] = v_74;
v_26:
    v_74 = stack[0];
    if (v_74 == nil) goto v_30;
    else goto v_31;
v_30:
    goto v_25;
v_31:
    v_74 = stack[0];
    if (!car_legal(v_74)) v_74 = carerror(v_74); else
    v_74 = car(v_74);
    v_75 = v_74;
    v_74 = qvalue(basic_elt(env, 1)); // bldmsg_chars!*
    v_74 = cons(v_75, v_74);
    env = stack[-3];
    setvalue(basic_elt(env, 1), v_74); // bldmsg_chars!*
    v_74 = stack[0];
    if (!car_legal(v_74)) v_74 = cdrerror(v_74); else
    v_74 = cdr(v_74);
    stack[0] = v_74;
    goto v_26;
v_25:
    goto v_11;
v_13:
    v_74 = stack[0];
    if (v_74 == nil) goto v_47;
    stack[0] = Lposn(nil);
    env = stack[-3];
    v_74 = stack[-2];
    v_74 = Llength(nil, v_74);
    env = stack[-3];
    v_74 = add1(v_74);
    env = stack[-3];
    v_75 = plus2(stack[0], v_74);
    env = stack[-3];
    v_74 = qvalue(basic_elt(env, 3)); // !*ll!*
    v_74 = static_cast<LispObject>(greaterp2(v_75, v_74));
    v_74 = v_74 ? lisp_true : nil;
    env = stack[-3];
    if (v_74 == nil) goto v_52;
    v_74 = Lterpri(nil);
    env = stack[-3];
    goto v_50;
v_52:
v_50:
    v_74 = basic_elt(env, 4); // " "
    v_74 = Lprinc(nil, v_74);
    env = stack[-3];
    goto v_45;
v_47:
    stack[0] = Lposn(nil);
    env = stack[-3];
    v_74 = stack[-2];
    v_74 = Llength(nil, v_74);
    env = stack[-3];
    v_75 = plus2(stack[0], v_74);
    env = stack[-3];
    v_74 = qvalue(basic_elt(env, 3)); // !*ll!*
    v_74 = static_cast<LispObject>(greaterp2(v_75, v_74));
    v_74 = v_74 ? lisp_true : nil;
    env = stack[-3];
    if (v_74 == nil) goto v_64;
    v_74 = Lterpri(nil);
    env = stack[-3];
    goto v_45;
v_64:
v_45:
    v_74 = stack[-1];
    v_74 = Lprinc(nil, v_74);
    goto v_11;
v_11:
    v_74 = nil;
    return onevalue(v_74);
}



// Code for gcref_mknode!-tgf

static LispObject CC_gcref_mknodeKtgf(LispObject env,
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
    v_11 = Lprinc(nil, v_11);
    env = stack[-1];
    v_11 = basic_elt(env, 1); // " "
    v_11 = Lprinc(nil, v_11);
    env = stack[-1];
    v_11 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // prin2t
    v_11 = (*qfn1(fn))(fn, v_11);
    }
    v_11 = nil;
    return onevalue(v_11);
}



// Code for quotfail1

static LispObject CC_quotfail1(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_30, v_31, v_32;
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
    v_31 = v_3;
    v_32 = v_2;
// end of prologue
    v_30 = v_32;
    if (v_30 == nil) goto v_8;
    else goto v_9;
v_8:
    v_30 = qvalue(basic_elt(env, 1)); // polyzero
    goto v_7;
v_9:
    v_30 = v_32;
    {   LispObject fn = basic_elt(env, 2); // quotf
    v_30 = (*qfn2(fn))(fn, v_30, v_31);
    }
    env = stack[-1];
    v_31 = v_30;
    v_30 = v_31;
    if (v_30 == nil) goto v_22;
    else goto v_23;
v_22:
    v_30 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // errorf
    v_30 = (*qfn1(fn))(fn, v_30);
    }
    goto v_21;
v_23:
    v_30 = v_31;
    goto v_16;
v_21:
    v_30 = nil;
v_16:
    goto v_7;
    v_30 = nil;
v_7:
    return onevalue(v_30);
}



// Code for msappend

static LispObject CC_msappend(LispObject env,
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
    real_push(nil, nil, nil, nil, nil);
    real_push(nil);
    stack_popper stack_popper_var(7);
// copy arguments values to proper place
    stack[-4] = v_3;
    v_48 = v_2;
// end of prologue
    stack[-5] = v_48;
    v_48 = stack[-5];
    if (v_48 == nil) goto v_14;
    else goto v_15;
v_14:
    v_48 = nil;
    goto v_9;
v_15:
    v_48 = stack[-5];
    if (!car_legal(v_48)) v_48 = carerror(v_48); else
    v_48 = car(v_48);
    stack[0] = stack[-4];
    v_49 = stack[-4];
    v_48 = Lsublis(nil, v_49, v_48);
    env = stack[-6];
    v_48 = Lappend_2(nil, stack[0], v_48);
    env = stack[-6];
    v_48 = ncons(v_48);
    env = stack[-6];
    stack[-2] = v_48;
    stack[-3] = v_48;
v_10:
    v_48 = stack[-5];
    if (!car_legal(v_48)) v_48 = cdrerror(v_48); else
    v_48 = cdr(v_48);
    stack[-5] = v_48;
    v_48 = stack[-5];
    if (v_48 == nil) goto v_31;
    else goto v_32;
v_31:
    v_48 = stack[-3];
    goto v_9;
v_32:
    stack[-1] = stack[-2];
    v_48 = stack[-5];
    if (!car_legal(v_48)) v_48 = carerror(v_48); else
    v_48 = car(v_48);
    stack[0] = stack[-4];
    v_49 = stack[-4];
    v_48 = Lsublis(nil, v_49, v_48);
    env = stack[-6];
    v_48 = Lappend_2(nil, stack[0], v_48);
    env = stack[-6];
    v_48 = ncons(v_48);
    env = stack[-6];
    if (!car_legal(stack[-1])) rplacd_fails(stack[-1]);
    setcdr(stack[-1], v_48);
    v_48 = stack[-2];
    if (!car_legal(v_48)) v_48 = cdrerror(v_48); else
    v_48 = cdr(v_48);
    stack[-2] = v_48;
    goto v_10;
v_9:
    return onevalue(v_48);
}



// Code for exceeds!-order

static LispObject CC_exceedsKorder(LispObject env,
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
v_1:
    v_50 = stack[-1];
    if (v_50 == nil) goto v_7;
    else goto v_8;
v_7:
    v_50 = nil;
    goto v_6;
v_8:
    v_50 = stack[0];
    if (!car_legal(v_50)) v_50 = carerror(v_50); else
    v_50 = car(v_50);
    stack[-2] = v_50;
    v_50 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_51 = v_50;
v_22:
    v_50 = stack[-2];
    if (v_50 == nil) goto v_28;
    else goto v_29;
v_28:
    v_50 = v_51;
    v_51 = v_50;
    goto v_21;
v_29:
    v_50 = stack[-2];
    if (!car_legal(v_50)) v_50 = carerror(v_50); else
    v_50 = car(v_50);
    {   LispObject fn = basic_elt(env, 1); // tayexp!-plus2
    v_50 = (*qfn2(fn))(fn, v_50, v_51);
    }
    env = stack[-3];
    v_51 = v_50;
    v_50 = stack[-2];
    if (!car_legal(v_50)) v_50 = cdrerror(v_50); else
    v_50 = cdr(v_50);
    stack[-2] = v_50;
    goto v_22;
v_21:
    v_50 = stack[-1];
    if (!car_legal(v_50)) v_50 = carerror(v_50); else
    v_50 = car(v_50);
    {   LispObject fn = basic_elt(env, 2); // tayexp!-lessp
    v_50 = (*qfn2(fn))(fn, v_51, v_50);
    }
    env = stack[-3];
    if (v_50 == nil) goto v_15;
    else goto v_16;
v_15:
    v_50 = lisp_true;
    goto v_14;
v_16:
    v_50 = stack[-1];
    if (!car_legal(v_50)) v_51 = cdrerror(v_50); else
    v_51 = cdr(v_50);
    v_50 = stack[0];
    if (!car_legal(v_50)) v_50 = cdrerror(v_50); else
    v_50 = cdr(v_50);
    stack[-1] = v_51;
    stack[0] = v_50;
    goto v_1;
    v_50 = nil;
v_14:
    goto v_6;
    v_50 = nil;
v_6:
    return onevalue(v_50);
}



// Code for ckrn

static LispObject CC_ckrn(LispObject env,
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
    v_43 = qvalue(basic_elt(env, 1)); // dmode!*
    if (!symbolp(v_43)) v_43 = nil;
    else { v_43 = qfastgets(v_43);
           if (v_43 != nil) { v_43 = elt(v_43, 3); // field
#ifdef RECORD_GET
             if (v_43 == SPID_NOPROP)
                record_get(elt(fastget_names, 3), 0),
                v_43 = nil;
             else record_get(elt(fastget_names, 3), 1),
                v_43 = lisp_true; }
           else record_get(elt(fastget_names, 3), 0); }
#else
             if (v_43 == SPID_NOPROP) v_43 = nil; else v_43 = lisp_true; }}
#endif
    if (v_43 == nil) goto v_11;
    v_44 = qvalue(basic_elt(env, 1)); // dmode!*
    v_43 = basic_elt(env, 2); // (!:rd!: !:cr!:)
    v_43 = Lmemq(nil, v_44, v_43);
    v_43 = (v_43 == nil ? lisp_true : nil);
    goto v_9;
v_11:
    v_43 = nil;
    goto v_9;
    v_43 = nil;
v_9:
    if (v_43 == nil) goto v_7;
    v_43 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // lnc
    v_43 = (*qfn1(fn))(fn, v_43);
    }
    env = stack[-2];
    stack[-1] = v_43;
    v_44 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // quotfd
    v_43 = (*qfn2(fn))(fn, v_44, v_43);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 5); // ckrn1
    v_43 = (*qfn1(fn))(fn, v_43);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 6); // multf
    v_43 = (*qfn2(fn))(fn, stack[-1], v_43);
    }
    v_44 = v_43;
    if (v_44 == nil) goto v_34;
    else goto v_35;
v_34:
    v_43 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_33;
v_35:
v_33:
    goto v_5;
v_7:
    v_43 = stack[0];
    {
        LispObject fn = basic_elt(env, 5); // ckrn1
        return (*qfn1(fn))(fn, v_43);
    }
    v_43 = nil;
v_5:
    return onevalue(v_43);
}



// Code for talp_rnf

static LispObject CC_talp_rnf(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_9, v_10, v_11;
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
    v_11 = v_9;
    v_10 = nil;
    v_9 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    {   LispObject fn = basic_elt(env, 1); // cl_simpl
    v_9 = (*qfn3(fn))(fn, v_11, v_10, v_9);
    }
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // talp_rnf1
        return (*qfn1(fn))(fn, v_9);
    }
}



// Code for qqe_qprefix!-var

static LispObject CC_qqe_qprefixKvar(LispObject env,
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
    stack[0] = v_2;
// end of prologue
v_8:
    v_34 = stack[0];
    if (v_34 == nil) goto v_11;
    v_34 = stack[0];
    if (!consp(v_34)) goto v_11;
    goto v_12;
v_11:
    goto v_7;
v_12:
    v_34 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // qqe_op
    v_35 = (*qfn1(fn))(fn, v_34);
    }
    env = stack[-1];
    v_34 = basic_elt(env, 1); // (ltail rtail lhead rhead)
    v_34 = Lmemq(nil, v_35, v_34);
    if (v_34 == nil) goto v_21;
    v_34 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // qqe_arg2l
    v_34 = (*qfn1(fn))(fn, v_34);
    }
    env = stack[-1];
    stack[0] = v_34;
    goto v_19;
v_21:
    v_34 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // qqe_arg2r
    v_34 = (*qfn1(fn))(fn, v_34);
    }
    env = stack[-1];
    stack[0] = v_34;
    goto v_19;
v_19:
    goto v_8;
v_7:
    v_34 = stack[0];
    return onevalue(v_34);
}



setup_type const u13_setup[] =
{
    {"ibalp_vequal",            G0W2,     G1W2,     CC_ibalp_vequal,G3W2,G4W2},
    {"lesspcdr",                G0W2,     G1W2,     CC_lesspcdr,G3W2,   G4W2},
    {"sub_math",                CC_sub_math,G1W0,   G2W0,     G3W0,     G4W0},
    {"rd:minus",                G0W1,     CC_rdTminus,G2W1,   G3W1,     G4W1},
    {"zeropp",                  G0W1,     CC_zeropp,G2W1,     G3W1,     G4W1},
    {"comm_kernels1",           G0W2,     G1W2,     CC_comm_kernels1,G3W2,G4W2},
    {"sc_null",                 G0W1,     CC_sc_null,G2W1,    G3W1,     G4W1},
    {"fortranop",               G0W1,     CC_fortranop,G2W1,  G3W1,     G4W1},
    {"simptimes",               G0W1,     CC_simptimes,G2W1,  G3W1,     G4W1},
    {"dividef",                 G0W2,     G1W2,     CC_dividef,G3W2,    G4W2},
    {"noncomperm",              G0W1,     CC_noncomperm,G2W1, G3W1,     G4W1},
    {"lalr_most_common_reduction",G0W1,   CC_lalr_most_common_reduction,G2W1,G3W1,G4W1},
    {"undefdchk",               G0W1,     CC_undefdchk,G2W1,  G3W1,     G4W1},
    {"mk+mat+mult+mat",         G0W2,     G1W2,     CC_mkLmatLmultLmat,G3W2,G4W2},
    {"talp_chkknowl",           G0W2,     G1W2,     CC_talp_chkknowl,G3W2,G4W2},
    {"qqe_ofsf_prepat",         G0W1,     CC_qqe_ofsf_prepat,G2W1,G3W1, G4W1},
    {"powers4",                 G0W2,     G1W2,     CC_powers4,G3W2,    G4W2},
    {"unbind",                  G0W1,     CC_unbind,G2W1,     G3W1,     G4W1},
    {"listdiff",                G0W2,     G1W2,     CC_listdiff,G3W2,   G4W2},
    {"deletemult*",             G0W1,     CC_deletemultH,G2W1,G3W1,     G4W1},
    {"aminusp:",                G0W1,     CC_aminuspT,G2W1,   G3W1,     G4W1},
    {"mo_neg",                  G0W1,     CC_mo_neg,G2W1,     G3W1,     G4W1},
    {"wtchk",                   G0W2,     G1W2,     CC_wtchk, G3W2,     G4W2},
    {"put-kvalue",              G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_putKkvalue},
    {"removeg1",                G0W3,     G1W3,     G2W3,     CC_removeg1,G4W3},
    {"cl_varl1",                G0W1,     CC_cl_varl1,G2W1,   G3W1,     G4W1},
    {"qqe_ofsf_varlterm",       G0W2,     G1W2,     CC_qqe_ofsf_varlterm,G3W2,G4W2},
    {"rl_simp1",                G0W1,     CC_rl_simp1,G2W1,   G3W1,     G4W1},
    {"wedget2",                 G0W2,     G1W2,     CC_wedget2,G3W2,    G4W2},
    {"set-ordp",                G0W2,     G1W2,     CC_setKordp,G3W2,   G4W2},
    {"map__edges",              G0W1,     CC_map__edges,G2W1, G3W1,     G4W1},
    {"assert_dyntypep",         G0W1,     CC_assert_dyntypep,G2W1,G3W1, G4W1},
    {"dd",                      G0W2,     G1W2,     CC_dd,    G3W2,     G4W2},
    {"pv_times2",               G0W3,     G1W3,     G2W3,     CC_pv_times2,G4W3},
    {"exptsq",                  G0W2,     G1W2,     CC_exptsq,G3W2,     G4W2},
    {"p_princ",                 G0W2,     G1W2,     CC_p_princ,G3W2,    G4W2},
    {"gcref_mknode-tgf",        G0W1,     CC_gcref_mknodeKtgf,G2W1,G3W1,G4W1},
    {"quotfail1",               G0W3,     G1W3,     G2W3,     CC_quotfail1,G4W3},
    {"msappend",                G0W2,     G1W2,     CC_msappend,G3W2,   G4W2},
    {"exceeds-order",           G0W2,     G1W2,     CC_exceedsKorder,G3W2,G4W2},
    {"ckrn",                    G0W1,     CC_ckrn,  G2W1,     G3W1,     G4W1},
    {"talp_rnf",                G0W1,     CC_talp_rnf,G2W1,   G3W1,     G4W1},
    {"qqe_qprefix-var",         G0W1,     CC_qqe_qprefixKvar,G2W1,G3W1, G4W1},
    {nullptr, 
        reinterpret_cast<no_args *>(
            reinterpret_cast<uintptr_t>("u13")),
        reinterpret_cast<one_arg *>(
            reinterpret_cast<uintptr_t>("146828 5652819 2386908")),
        nullptr, nullptr, nullptr}
};

// end of generated code
