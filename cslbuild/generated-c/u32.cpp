
// $destdir/u32.c        Machine generated C code

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


// Code for talp_atnum

static LispObject CC_talp_atnum(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_133, v_134, v_135, v_136;
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
    v_135 = v_2;
// end of prologue
v_1:
    v_133 = v_135;
    if (!consp(v_133)) goto v_9;
    else goto v_10;
v_9:
    v_133 = v_135;
    goto v_8;
v_10:
    v_133 = v_135;
    if (!car_legal(v_133)) v_133 = carerror(v_133); else
    v_133 = car(v_133);
    goto v_8;
    v_133 = nil;
v_8:
    v_136 = v_133;
    v_134 = v_136;
    v_133 = basic_elt(env, 1); // or
    if (v_134 == v_133) goto v_31;
    else goto v_32;
v_31:
    v_133 = lisp_true;
    goto v_30;
v_32:
    v_134 = v_136;
    v_133 = basic_elt(env, 2); // and
    v_133 = (v_134 == v_133 ? lisp_true : nil);
    goto v_30;
    v_133 = nil;
v_30:
    if (v_133 == nil) goto v_28;
    v_133 = lisp_true;
    goto v_26;
v_28:
    v_134 = v_136;
    v_133 = basic_elt(env, 3); // not
    v_133 = (v_134 == v_133 ? lisp_true : nil);
    goto v_26;
    v_133 = nil;
v_26:
    if (v_133 == nil) goto v_24;
    v_133 = lisp_true;
    goto v_22;
v_24:
    v_134 = v_136;
    v_133 = basic_elt(env, 4); // impl
    if (v_134 == v_133) goto v_52;
    else goto v_53;
v_52:
    v_133 = lisp_true;
    goto v_51;
v_53:
    v_134 = v_136;
    v_133 = basic_elt(env, 5); // repl
    if (v_134 == v_133) goto v_61;
    else goto v_62;
v_61:
    v_133 = lisp_true;
    goto v_60;
v_62:
    v_134 = v_136;
    v_133 = basic_elt(env, 6); // equiv
    v_133 = (v_134 == v_133 ? lisp_true : nil);
    goto v_60;
    v_133 = nil;
v_60:
    goto v_51;
    v_133 = nil;
v_51:
    goto v_22;
    v_133 = nil;
v_22:
    if (v_133 == nil) goto v_20;
    v_133 = v_135;
    if (!car_legal(v_133)) v_133 = cdrerror(v_133); else
    v_133 = cdr(v_133);
    stack[-1] = v_133;
    v_133 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[0] = v_133;
v_75:
    v_133 = stack[-1];
    if (v_133 == nil) goto v_81;
    else goto v_82;
v_81:
    v_133 = stack[0];
    goto v_74;
v_82:
    v_133 = stack[-1];
    if (!car_legal(v_133)) v_133 = carerror(v_133); else
    v_133 = car(v_133);
    {   LispObject fn = basic_elt(env, 0); // talp_atnum
    v_134 = (*qfn1(fn))(fn, v_133);
    }
    env = stack[-2];
    v_133 = stack[0];
    v_133 = plus2(v_134, v_133);
    env = stack[-2];
    stack[0] = v_133;
    v_133 = stack[-1];
    if (!car_legal(v_133)) v_133 = cdrerror(v_133); else
    v_133 = cdr(v_133);
    stack[-1] = v_133;
    goto v_75;
v_74:
    goto v_6;
v_20:
    v_134 = v_136;
    v_133 = basic_elt(env, 7); // ex
    if (v_134 == v_133) goto v_100;
    else goto v_101;
v_100:
    v_133 = lisp_true;
    goto v_99;
v_101:
    v_134 = v_136;
    v_133 = basic_elt(env, 8); // all
    v_133 = (v_134 == v_133 ? lisp_true : nil);
    goto v_99;
    v_133 = nil;
v_99:
    if (v_133 == nil) goto v_97;
    v_133 = v_135;
    if (!car_legal(v_133)) v_133 = cdrerror(v_133); else
    v_133 = cdr(v_133);
    if (!car_legal(v_133)) v_133 = cdrerror(v_133); else
    v_133 = cdr(v_133);
    if (!car_legal(v_133)) v_133 = carerror(v_133); else
    v_133 = car(v_133);
    v_135 = v_133;
    goto v_1;
v_97:
    v_134 = v_136;
    v_133 = basic_elt(env, 9); // true
    if (v_134 == v_133) goto v_121;
    else goto v_122;
v_121:
    v_133 = lisp_true;
    goto v_120;
v_122:
    v_133 = v_136;
    v_134 = basic_elt(env, 10); // false
    v_133 = (v_133 == v_134 ? lisp_true : nil);
    goto v_120;
    v_133 = nil;
v_120:
    if (v_133 == nil) goto v_118;
    v_133 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_6;
v_118:
    v_133 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
v_6:
    return onevalue(v_133);
}



// Code for minusml

static LispObject CC_minusml(LispObject env,
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
    v_17 = basic_elt(env, 1); // "<apply><minus/>"
    {   LispObject fn = basic_elt(env, 3); // printout
    v_17 = (*qfn1(fn))(fn, v_17);
    }
    env = stack[-1];
    v_17 = lisp_true;
    {   LispObject fn = basic_elt(env, 4); // indent!*
    v_17 = (*qfn1(fn))(fn, v_17);
    }
    env = stack[-1];
    v_17 = stack[0];
    if (!car_legal(v_17)) v_17 = cdrerror(v_17); else
    v_17 = cdr(v_17);
    {   LispObject fn = basic_elt(env, 5); // multiminus
    v_17 = (*qfn1(fn))(fn, v_17);
    }
    env = stack[-1];
    v_17 = nil;
    {   LispObject fn = basic_elt(env, 4); // indent!*
    v_17 = (*qfn1(fn))(fn, v_17);
    }
    env = stack[-1];
    v_17 = basic_elt(env, 2); // "</apply>"
    {   LispObject fn = basic_elt(env, 3); // printout
    v_17 = (*qfn1(fn))(fn, v_17);
    }
    v_17 = nil;
    return onevalue(v_17);
}



// Code for exptplus

static LispObject CC_exptplus(LispObject env,
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
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_38 = v_3;
    v_39 = v_2;
// end of prologue
    v_37 = v_39;
    if (!consp(v_37)) goto v_7;
    else goto v_8;
v_7:
    v_37 = v_38;
    if (!consp(v_37)) goto v_12;
    else goto v_13;
v_12:
    v_37 = v_39;
    return plus2(v_37, v_38);
v_13:
    v_37 = v_39;
    if (!car_legal(v_38)) v_38 = carerror(v_38); else
    v_38 = car(v_38);
    v_37 = plus2(v_37, v_38);
    return ncons(v_37);
    v_37 = nil;
    goto v_6;
v_8:
    v_37 = v_38;
    if (!consp(v_37)) goto v_25;
    else goto v_26;
v_25:
    v_37 = v_39;
    if (!car_legal(v_37)) v_37 = carerror(v_37); else
    v_37 = car(v_37);
    v_37 = plus2(v_37, v_38);
    return ncons(v_37);
v_26:
    v_37 = basic_elt(env, 1); // "Bad exponent sum"
    {
        LispObject fn = basic_elt(env, 2); // interr
        return (*qfn1(fn))(fn, v_37);
    }
    v_37 = nil;
v_6:
    return onevalue(v_37);
}



// Code for add_minus

static LispObject CC_add_minus(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_116, v_117;
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
    v_116 = stack[-1];
    if (!consp(v_116)) goto v_8;
    else goto v_9;
v_8:
    v_116 = stack[-1];
    goto v_5;
v_9:
    v_116 = stack[-1];
    if (!car_legal(v_116)) v_117 = carerror(v_116); else
    v_117 = car(v_116);
    v_116 = basic_elt(env, 1); // !:rd!:
    if (v_117 == v_116) goto v_16;
    else goto v_17;
v_16:
    v_116 = stack[-1];
    if (!car_legal(v_116)) v_117 = cdrerror(v_116); else
    v_117 = cdr(v_116);
    v_116 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_116 = static_cast<LispObject>(geq2(v_117, v_116));
    v_116 = v_116 ? lisp_true : nil;
    env = stack[-3];
    goto v_15;
v_17:
    v_116 = nil;
    goto v_15;
    v_116 = nil;
v_15:
    if (v_116 == nil) goto v_13;
    v_116 = stack[-1];
    goto v_5;
v_13:
    v_116 = stack[-1];
    if (!car_legal(v_116)) v_117 = carerror(v_116); else
    v_117 = car(v_116);
    v_116 = basic_elt(env, 1); // !:rd!:
    if (v_117 == v_116) goto v_33;
    else goto v_34;
v_33:
    v_116 = stack[-1];
    if (!car_legal(v_116)) v_117 = cdrerror(v_116); else
    v_117 = cdr(v_116);
    v_116 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_116 = static_cast<LispObject>(lessp2(v_117, v_116));
    v_116 = v_116 ? lisp_true : nil;
    env = stack[-3];
    goto v_32;
v_34:
    v_116 = nil;
    goto v_32;
    v_116 = nil;
v_32:
    if (v_116 == nil) goto v_30;
    stack[-2] = basic_elt(env, 2); // minus
    stack[0] = basic_elt(env, 1); // !:rd!:
    v_116 = stack[-1];
    if (!car_legal(v_116)) v_116 = cdrerror(v_116); else
    v_116 = cdr(v_116);
    v_116 = Labsval(nil, v_116);
    env = stack[-3];
    v_116 = cons(stack[0], v_116);
    {
        LispObject v_121 = stack[-2];
        return list2(v_121, v_116);
    }
v_30:
    v_116 = stack[-1];
    if (!car_legal(v_116)) v_117 = carerror(v_116); else
    v_117 = car(v_116);
    v_116 = basic_elt(env, 2); // minus
    if (v_117 == v_116) goto v_56;
    else goto v_57;
v_56:
    v_116 = stack[-1];
    if (!car_legal(v_116)) v_116 = cdrerror(v_116); else
    v_116 = cdr(v_116);
    if (!car_legal(v_116)) v_116 = carerror(v_116); else
    v_116 = car(v_116);
    v_116 = (is_number(v_116) ? lisp_true : nil);
    goto v_55;
v_57:
    v_116 = nil;
    goto v_55;
    v_116 = nil;
v_55:
    if (v_116 == nil) goto v_53;
    v_116 = stack[-1];
    goto v_5;
v_53:
    v_116 = stack[-1];
    if (!car_legal(v_116)) v_117 = carerror(v_116); else
    v_117 = car(v_116);
    v_116 = basic_elt(env, 2); // minus
    if (v_117 == v_116) goto v_73;
    else goto v_74;
v_73:
    v_116 = stack[-1];
    if (!car_legal(v_116)) v_116 = cdrerror(v_116); else
    v_116 = cdr(v_116);
    if (!car_legal(v_116)) v_116 = carerror(v_116); else
    v_116 = car(v_116);
    if (!car_legal(v_116)) v_117 = cdrerror(v_116); else
    v_117 = cdr(v_116);
    v_116 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_116 = static_cast<LispObject>(lessp2(v_117, v_116));
    v_116 = v_116 ? lisp_true : nil;
    env = stack[-3];
    goto v_72;
v_74:
    v_116 = nil;
    goto v_72;
    v_116 = nil;
v_72:
    if (v_116 == nil) goto v_70;
    stack[0] = basic_elt(env, 1); // !:rd!:
    v_116 = stack[-1];
    if (!car_legal(v_116)) v_116 = cdrerror(v_116); else
    v_116 = cdr(v_116);
    if (!car_legal(v_116)) v_116 = carerror(v_116); else
    v_116 = car(v_116);
    if (!car_legal(v_116)) v_116 = cdrerror(v_116); else
    v_116 = cdr(v_116);
    v_116 = Labsval(nil, v_116);
    {
        LispObject v_122 = stack[0];
        return cons(v_122, v_116);
    }
v_70:
    v_116 = stack[-1];
    if (!car_legal(v_116)) v_117 = carerror(v_116); else
    v_117 = car(v_116);
    v_116 = basic_elt(env, 2); // minus
    if (v_117 == v_116) goto v_94;
    else goto v_95;
v_94:
    v_116 = stack[-1];
    goto v_5;
v_95:
    v_116 = stack[-1];
    if (!car_legal(v_116)) v_117 = cdrerror(v_116); else
    v_117 = cdr(v_116);
    v_116 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_116 = static_cast<LispObject>(lessp2(v_117, v_116));
    v_116 = v_116 ? lisp_true : nil;
    env = stack[-3];
    if (v_116 == nil) goto v_101;
    stack[-2] = basic_elt(env, 2); // minus
    stack[0] = basic_elt(env, 1); // !:rd!:
    v_116 = stack[-1];
    if (!car_legal(v_116)) v_116 = cdrerror(v_116); else
    v_116 = cdr(v_116);
    v_116 = Labsval(nil, v_116);
    env = stack[-3];
    v_116 = cons(stack[0], v_116);
    {
        LispObject v_123 = stack[-2];
        return list2(v_123, v_116);
    }
v_101:
    v_116 = stack[-1];
    goto v_5;
    v_116 = nil;
v_5:
    return onevalue(v_116);
}



// Code for dipnumcontent

static LispObject CC_dipnumcontent(LispObject env,
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
v_8:
    v_30 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // bcone!?
    v_30 = (*qfn1(fn))(fn, v_30);
    }
    env = stack[-3];
    if (v_30 == nil) goto v_13;
    else goto v_11;
v_13:
    v_30 = stack[-1];
    if (v_30 == nil) goto v_11;
    goto v_12;
v_11:
    v_30 = stack[0];
    goto v_7;
v_12:
    v_30 = stack[-1];
    if (!car_legal(v_30)) v_30 = cdrerror(v_30); else
    v_30 = cdr(v_30);
    if (!car_legal(v_30)) v_30 = cdrerror(v_30); else
    v_30 = cdr(v_30);
    stack[-2] = v_30;
    v_31 = stack[0];
    v_30 = stack[-1];
    if (!car_legal(v_30)) v_30 = cdrerror(v_30); else
    v_30 = cdr(v_30);
    if (!car_legal(v_30)) v_30 = carerror(v_30); else
    v_30 = car(v_30);
    {   LispObject fn = basic_elt(env, 2); // vbcgcd
    v_30 = (*qfn2(fn))(fn, v_31, v_30);
    }
    env = stack[-3];
    stack[0] = v_30;
    v_30 = stack[-2];
    stack[-1] = v_30;
    goto v_8;
    v_30 = nil;
v_7:
    return onevalue(v_30);
}



// Code for sc_getrow

static LispObject CC_sc_getrow(LispObject env,
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
    v_9 = sub1(v_9);
    env = stack[-1];
    {
        LispObject v_12 = stack[0];
        LispObject fn = basic_elt(env, 1); // sc_igetv
        return (*qfn2(fn))(fn, v_12, v_9);
    }
}



// Code for f2dip11

static LispObject CC_f2dip11(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
v_1:
    v_40 = qvalue(basic_elt(env, 1)); // !*notestparameters
    if (v_40 == nil) goto v_6;
    else goto v_5;
v_6:
    v_41 = stack[0];
    v_40 = qvalue(basic_elt(env, 2)); // vdpvars!*
    v_40 = Lmember(nil, v_41, v_40);
    if (v_40 == nil) goto v_11;
    v_41 = stack[0];
    v_40 = basic_elt(env, 3); // "occurs in a parameter and is member of the groebner variables."
    v_40 = list2(v_41, v_40);
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 6); // rederr
    v_40 = (*qfn1(fn))(fn, v_40);
    }
    env = stack[-1];
    goto v_9;
v_11:
v_9:
    v_40 = stack[0];
    if (!consp(v_40)) goto v_21;
    else goto v_22;
v_21:
    v_41 = stack[0];
    v_40 = basic_elt(env, 4); // list
    if (v_41 == v_40) goto v_26;
    else goto v_27;
v_26:
    v_40 = basic_elt(env, 5); // "groebner: LIST not allowed."
    {
        LispObject fn = basic_elt(env, 6); // rederr
        return (*qfn1(fn))(fn, v_40);
    }
v_27:
    v_40 = nil;
    goto v_20;
v_22:
    v_40 = stack[0];
    if (!car_legal(v_40)) v_40 = carerror(v_40); else
    v_40 = car(v_40);
    {   LispObject fn = basic_elt(env, 0); // f2dip11
    v_40 = (*qfn1(fn))(fn, v_40);
    }
    env = stack[-1];
    v_40 = stack[0];
    if (!car_legal(v_40)) v_40 = cdrerror(v_40); else
    v_40 = cdr(v_40);
    stack[0] = v_40;
    goto v_1;
    v_40 = nil;
v_20:
v_5:
    return onevalue(v_40);
}



// Code for eqexpr

static LispObject CC_eqexpr(LispObject env,
                         LispObject v_2)
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
        push(v_2);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_40 = v_2;
// end of prologue
    v_38 = v_40;
    if (!consp(v_38)) goto v_7;
    v_38 = v_40;
    if (!car_legal(v_38)) v_39 = carerror(v_38); else
    v_39 = car(v_38);
    v_38 = basic_elt(env, 1); // equalopr
    v_38 = Lflagp(nil, v_39, v_38);
    if (v_38 == nil) goto v_12;
    v_38 = v_40;
    if (!car_legal(v_38)) v_38 = cdrerror(v_38); else
    v_38 = cdr(v_38);
    if (!car_legal(v_38)) v_38 = cdrerror(v_38); else
    v_38 = cdr(v_38);
    if (v_38 == nil) goto v_19;
    else goto v_20;
v_19:
    v_38 = nil;
    goto v_18;
v_20:
    v_38 = v_40;
    if (!car_legal(v_38)) v_38 = cdrerror(v_38); else
    v_38 = cdr(v_38);
    if (!car_legal(v_38)) v_38 = cdrerror(v_38); else
    v_38 = cdr(v_38);
    if (!car_legal(v_38)) v_38 = cdrerror(v_38); else
    v_38 = cdr(v_38);
    v_38 = (v_38 == nil ? lisp_true : nil);
    goto v_18;
    v_38 = nil;
v_18:
    goto v_10;
v_12:
    v_38 = nil;
    goto v_10;
    v_38 = nil;
v_10:
    goto v_5;
v_7:
    v_38 = nil;
    goto v_5;
    v_38 = nil;
v_5:
    return onevalue(v_38);
}



// Code for formatfort

static LispObject CC_formatfort(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_138, v_139, v_140;
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
// Binding !*lower
// FLUIDBIND: reloadenv=5 litvec-offset=1 saveloc=2
{   bind_fluid_stack bind_fluid_var(-5, 1, -2);
    setvalue(basic_elt(env, 1), nil); // !*lower
    v_138 = static_cast<LispObject>(4800)+TAG_FIXNUM; // 300
    v_138 = Llinelength(nil, v_138);
    env = stack[-5];
    stack[-4] = v_138;
    v_138 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    setvalue(basic_elt(env, 2), v_138); // !*posn!*
    v_138 = stack[0];
    stack[-1] = v_138;
v_16:
    v_138 = stack[-1];
    if (v_138 == nil) goto v_20;
    else goto v_21;
v_20:
    goto v_15;
v_21:
    v_138 = stack[-1];
    if (!car_legal(v_138)) v_138 = carerror(v_138); else
    v_138 = car(v_138);
    stack[0] = v_138;
    v_138 = stack[0];
    v_138 = Lconsp(nil, v_138);
    env = stack[-5];
    if (v_138 == nil) goto v_30;
    v_138 = stack[0];
    {   LispObject fn = basic_elt(env, 10); // lispeval
    v_138 = (*qfn1(fn))(fn, v_138);
    }
    env = stack[-5];
    goto v_28;
v_30:
    v_138 = stack[0];
    v_138 = integerp(v_138);
    if (v_138 == nil) goto v_40;
    v_139 = stack[0];
    v_138 = qvalue(basic_elt(env, 3)); // maxint
    v_138 = static_cast<LispObject>(greaterp2(v_139, v_138));
    v_138 = v_138 ? lisp_true : nil;
    env = stack[-5];
    if (v_138 == nil) goto v_45;
    else goto v_44;
v_45:
    stack[-3] = stack[0];
    v_138 = qvalue(basic_elt(env, 3)); // maxint
    v_138 = negate(v_138);
    env = stack[-5];
    v_138 = static_cast<LispObject>(lessp2(stack[-3], v_138));
    v_138 = v_138 ? lisp_true : nil;
    env = stack[-5];
    if (v_138 == nil) goto v_49;
    else goto v_44;
v_49:
    goto v_40;
v_44:
    v_138 = stack[0];
    {   LispObject fn = basic_elt(env, 11); // i2rd!*
    v_138 = (*qfn1(fn))(fn, v_138);
    }
    env = stack[-5];
    if (!car_legal(v_138)) v_138 = cdrerror(v_138); else
    v_138 = cdr(v_138);
    stack[0] = v_138;
    goto v_38;
v_40:
v_38:
    v_138 = stack[0];
    v_138 = Lexplodec(nil, v_138);
    env = stack[-5];
    stack[-3] = v_138;
    v_138 = stack[0];
    v_138 = Lfloatp(nil, v_138);
    env = stack[-5];
    if (v_138 == nil) goto v_62;
    v_138 = qvalue(basic_elt(env, 4)); // !*double
    if (v_138 == nil) goto v_68;
    v_139 = basic_elt(env, 5); // e
    v_138 = stack[-3];
    v_138 = Lmemq(nil, v_139, v_138);
    if (v_138 == nil) goto v_73;
    v_140 = basic_elt(env, 6); // !D
    v_139 = basic_elt(env, 5); // e
    v_138 = stack[-3];
    v_138 = Lsubst(nil, v_140, v_139, v_138);
    env = stack[-5];
    stack[-3] = v_138;
    goto v_71;
v_73:
    v_139 = basic_elt(env, 7); // !E
    v_138 = stack[-3];
    v_138 = Lmemq(nil, v_139, v_138);
    if (v_138 == nil) goto v_82;
    v_140 = basic_elt(env, 6); // !D
    v_139 = basic_elt(env, 7); // !E
    v_138 = stack[-3];
    v_138 = Lsubst(nil, v_140, v_139, v_138);
    env = stack[-5];
    stack[-3] = v_138;
    goto v_71;
v_82:
    v_139 = stack[-3];
    v_138 = basic_elt(env, 8); // (d !0)
    v_138 = Lappend_2(nil, v_139, v_138);
    env = stack[-5];
    stack[-3] = v_138;
    goto v_71;
v_71:
    goto v_66;
v_68:
    v_139 = basic_elt(env, 5); // e
    v_138 = stack[-3];
    v_138 = Lmemq(nil, v_139, v_138);
    if (v_138 == nil) goto v_96;
    v_140 = basic_elt(env, 7); // !E
    v_139 = basic_elt(env, 5); // e
    v_138 = stack[-3];
    v_138 = Lsubst(nil, v_140, v_139, v_138);
    env = stack[-5];
    stack[-3] = v_138;
    goto v_66;
v_96:
v_66:
    goto v_60;
v_62:
v_60:
    stack[0] = qvalue(basic_elt(env, 2)); // !*posn!*
    v_138 = stack[-3];
    v_138 = Llength(nil, v_138);
    env = stack[-5];
    v_139 = plus2(stack[0], v_138);
    env = stack[-5];
    v_138 = qvalue(basic_elt(env, 9)); // fortlinelen!*
    v_138 = static_cast<LispObject>(greaterp2(v_139, v_138));
    v_138 = v_138 ? lisp_true : nil;
    env = stack[-5];
    if (v_138 == nil) goto v_107;
    {   LispObject fn = basic_elt(env, 12); // fortcontline
    v_138 = (*qfn0(fn))(fn);
    }
    env = stack[-5];
    goto v_105;
v_107:
v_105:
    v_138 = stack[-3];
    stack[0] = v_138;
v_118:
    v_138 = stack[0];
    if (v_138 == nil) goto v_122;
    else goto v_123;
v_122:
    goto v_117;
v_123:
    v_138 = stack[0];
    if (!car_legal(v_138)) v_138 = carerror(v_138); else
    v_138 = car(v_138);
    {   LispObject fn = basic_elt(env, 13); // pprin2
    v_138 = (*qfn1(fn))(fn, v_138);
    }
    env = stack[-5];
    v_138 = stack[0];
    if (!car_legal(v_138)) v_138 = cdrerror(v_138); else
    v_138 = cdr(v_138);
    stack[0] = v_138;
    goto v_118;
v_117:
    goto v_28;
v_28:
    v_138 = stack[-1];
    if (!car_legal(v_138)) v_138 = cdrerror(v_138); else
    v_138 = cdr(v_138);
    stack[-1] = v_138;
    goto v_16;
v_15:
    v_138 = stack[-4];
    v_138 = Llinelength(nil, v_138);
    v_138 = nil;
    ;}  // end of a binding scope
    return onevalue(v_138);
}



// Code for one!-entryp

static LispObject CC_oneKentryp(LispObject env,
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
    v_37 = stack[0];
    if (!consp(v_37)) goto v_10;
    else goto v_11;
v_10:
    v_37 = lisp_true;
    goto v_6;
v_11:
    v_38 = stack[-1];
    v_37 = stack[0];
    if (!car_legal(v_37)) v_37 = carerror(v_37); else
    v_37 = car(v_37);
    v_37 = Lsmemq(nil, v_38, v_37);
    env = stack[-2];
    if (v_37 == nil) goto v_15;
    v_38 = stack[-1];
    v_37 = stack[0];
    if (!car_legal(v_37)) v_37 = cdrerror(v_37); else
    v_37 = cdr(v_37);
    v_37 = Lsmemq(nil, v_38, v_37);
    env = stack[-2];
    if (v_37 == nil) goto v_23;
    v_37 = nil;
    goto v_6;
v_23:
    v_37 = stack[0];
    if (!car_legal(v_37)) v_37 = carerror(v_37); else
    v_37 = car(v_37);
    stack[0] = v_37;
    goto v_7;
    goto v_9;
v_15:
    v_37 = stack[0];
    if (!car_legal(v_37)) v_37 = cdrerror(v_37); else
    v_37 = cdr(v_37);
    stack[0] = v_37;
    goto v_7;
v_9:
    v_37 = nil;
v_6:
    return onevalue(v_37);
}



// Code for subsq

static LispObject CC_subsq(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_43 = stack[-1];
    if (!car_legal(v_43)) v_44 = carerror(v_43); else
    v_44 = car(v_43);
    v_43 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // subf
    v_43 = (*qfn2(fn))(fn, v_44, v_43);
    }
    env = stack[-3];
    stack[-2] = v_43;
    v_43 = stack[-1];
    if (!car_legal(v_43)) v_44 = cdrerror(v_43); else
    v_44 = cdr(v_43);
    v_43 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // subf
    v_43 = (*qfn2(fn))(fn, v_44, v_43);
    }
    env = stack[-3];
    stack[-1] = v_43;
    v_43 = stack[-1];
    {   LispObject fn = basic_elt(env, 5); // subs2!*
    v_43 = (*qfn1(fn))(fn, v_43);
    }
    env = stack[-3];
    if (!car_legal(v_43)) v_43 = carerror(v_43); else
    v_43 = car(v_43);
    if (v_43 == nil) goto v_18;
    else goto v_19;
v_18:
    v_43 = stack[-2];
    {   LispObject fn = basic_elt(env, 5); // subs2!*
    v_43 = (*qfn1(fn))(fn, v_43);
    }
    env = stack[-3];
    if (!car_legal(v_43)) v_43 = carerror(v_43); else
    v_43 = car(v_43);
    if (v_43 == nil) goto v_25;
    else goto v_26;
v_25:
    v_45 = basic_elt(env, 1); // alg
    v_44 = static_cast<LispObject>(3216)+TAG_FIXNUM; // 201
    v_43 = basic_elt(env, 2); // "0/0 formed"
    {   LispObject fn = basic_elt(env, 6); // rerror
    v_43 = (*qfn3(fn))(fn, v_45, v_44, v_43);
    }
    env = stack[-3];
    goto v_24;
v_26:
    v_45 = basic_elt(env, 1); // alg
    v_44 = static_cast<LispObject>(3216)+TAG_FIXNUM; // 201
    v_43 = basic_elt(env, 3); // "Zero divisor"
    {   LispObject fn = basic_elt(env, 6); // rerror
    v_43 = (*qfn3(fn))(fn, v_45, v_44, v_43);
    }
    env = stack[-3];
    goto v_24;
v_24:
    goto v_17;
v_19:
v_17:
    v_44 = stack[-2];
    v_43 = stack[-1];
    {
        LispObject fn = basic_elt(env, 7); // quotsq
        return (*qfn2(fn))(fn, v_44, v_43);
    }
    return onevalue(v_43);
}



// Code for groeb!=rf1

static LispObject CC_groebMrf1(LispObject env,
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
    v_11 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // red_totalred
    v_11 = (*qfn2(fn))(fn, v_11, v_10);
    }
    v_10 = stack[0];
    return list2(v_11, v_10);
}



// Code for length_multiindex

static LispObject CC_length_multiindex(LispObject env,
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
    v_25 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_26 = v_25;
v_8:
    v_25 = stack[0];
    if (v_25 == nil) goto v_13;
    else goto v_14;
v_13:
    v_25 = v_26;
    goto v_7;
v_14:
    v_25 = stack[0];
    if (!car_legal(v_25)) v_25 = carerror(v_25); else
    v_25 = car(v_25);
    v_25 = plus2(v_25, v_26);
    env = stack[-1];
    v_26 = v_25;
    v_25 = stack[0];
    if (!car_legal(v_25)) v_25 = cdrerror(v_25); else
    v_25 = cdr(v_25);
    stack[0] = v_25;
    goto v_8;
v_7:
    return onevalue(v_25);
}



// Code for lex_basic_token

static LispObject CC_lex_basic_token(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_864, v_865, v_866;
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
    stack_popper stack_popper_var(6);
// end of prologue
v_1:
    stack[-4] = nil;
    stack[-3] = nil;
    stack[-2] = nil;
    v_864 = qvalue(basic_elt(env, 1)); // lex_peeked
    if (v_864 == nil) goto v_11;
    v_864 = qvalue(basic_elt(env, 1)); // lex_peeked
    stack[-4] = v_864;
    v_864 = qvalue(basic_elt(env, 2)); // lex_peeked_yylval
    setvalue(basic_elt(env, 3), v_864); // yylval
    v_864 = qvalue(basic_elt(env, 4)); // lex_peeked_escaped
    setvalue(basic_elt(env, 5), v_864); // lex_escaped
    v_864 = nil;
    setvalue(basic_elt(env, 4), v_864); // lex_peeked_escaped
    setvalue(basic_elt(env, 2), v_864); // lex_peeked_yylval
    setvalue(basic_elt(env, 1), v_864); // lex_peeked
    v_864 = stack[-4];
    goto v_7;
v_11:
    v_864 = nil;
    setvalue(basic_elt(env, 5), v_864); // lex_escaped
v_21:
    v_865 = qvalue(basic_elt(env, 6)); // lex_char
    v_864 = basic_elt(env, 7); // ! 
    if (v_865 == v_864) goto v_28;
    else goto v_29;
v_28:
    v_864 = lisp_true;
    goto v_27;
v_29:
    v_865 = qvalue(basic_elt(env, 6)); // lex_char
    v_864 = qvalue(basic_elt(env, 8)); // !$eol!$
    if (equal(v_865, v_864)) goto v_37;
    else goto v_38;
v_37:
    v_864 = lisp_true;
    goto v_36;
v_38:
    v_865 = qvalue(basic_elt(env, 6)); // lex_char
    v_864 = basic_elt(env, 9); // !	
    if (v_865 == v_864) goto v_46;
    else goto v_47;
v_46:
    v_864 = lisp_true;
    goto v_45;
v_47:
    v_864 = qvalue(basic_elt(env, 6)); // lex_char
    {   LispObject fn = basic_elt(env, 46); // lex_start_line_comment
    v_864 = (*qfn1(fn))(fn, v_864);
    }
    env = stack[-5];
    if (v_864 == nil) goto v_58;
    else goto v_59;
v_58:
    v_864 = nil;
    goto v_57;
v_59:
    {   LispObject fn = basic_elt(env, 47); // lex_skip_line_comment
    v_864 = (*qfn0(fn))(fn);
    }
    env = stack[-5];
    goto v_57;
    v_864 = nil;
v_57:
    if (v_864 == nil) goto v_55;
    else goto v_54;
v_55:
    v_864 = qvalue(basic_elt(env, 6)); // lex_char
    {   LispObject fn = basic_elt(env, 48); // lex_start_block_comment
    v_864 = (*qfn1(fn))(fn, v_864);
    }
    env = stack[-5];
    if (v_864 == nil) goto v_68;
    else goto v_69;
v_68:
    v_864 = nil;
    goto v_67;
v_69:
    {   LispObject fn = basic_elt(env, 49); // lex_skip_block_comment
    v_864 = (*qfn0(fn))(fn);
    }
    env = stack[-5];
    goto v_67;
    v_864 = nil;
v_67:
v_54:
    goto v_45;
    v_864 = nil;
v_45:
    goto v_36;
    v_864 = nil;
v_36:
    goto v_27;
    v_864 = nil;
v_27:
    if (v_864 == nil) goto v_24;
    else goto v_25;
v_24:
    goto v_20;
v_25:
    {   LispObject fn = basic_elt(env, 50); // yyreadch
    v_864 = (*qfn0(fn))(fn);
    }
    env = stack[-5];
    goto v_21;
v_20:
    v_865 = qvalue(basic_elt(env, 6)); // lex_char
    v_864 = qvalue(basic_elt(env, 10)); // !$eof!$
    if (equal(v_865, v_864)) goto v_80;
    else goto v_81;
v_80:
    v_864 = qvalue(basic_elt(env, 6)); // lex_char
    setvalue(basic_elt(env, 3), v_864); // yylval
    v_864 = qvalue(basic_elt(env, 11)); // lex_eof_code
    goto v_7;
v_81:
    v_864 = qvalue(basic_elt(env, 6)); // lex_char
    {   LispObject fn = basic_elt(env, 51); // lexer_word_starter
    v_864 = (*qfn1(fn))(fn, v_864);
    }
    env = stack[-5];
    if (v_864 == nil) goto v_90;
    else goto v_88;
v_90:
    v_865 = qvalue(basic_elt(env, 6)); // lex_char
    v_864 = basic_elt(env, 12); // !!
    if (v_865 == v_864) goto v_96;
    else goto v_97;
v_96:
    v_865 = qvalue(basic_elt(env, 13)); // lexer_style!*
    v_864 = static_cast<LispObject>(524288)+TAG_FIXNUM; // 32768
    {   LispObject fn = basic_elt(env, 52); // land
    v_864 = (*qfn2(fn))(fn, v_865, v_864);
    }
    env = stack[-5];
    v_864 = static_cast<LispObject>(zerop(v_864));
    v_864 = v_864 ? lisp_true : nil;
    env = stack[-5];
    if (v_864 == nil) goto v_102;
    else goto v_103;
v_102:
    v_865 = nil;
    v_864 = nil;
// Binding !*raise
// FLUIDBIND: reloadenv=5 litvec-offset=14 saveloc=1
{   bind_fluid_stack bind_fluid_var(-5, 14, -1);
    setvalue(basic_elt(env, 14), v_865); // !*raise
// Binding !*lower
// FLUIDBIND: reloadenv=5 litvec-offset=15 saveloc=0
{   bind_fluid_stack bind_fluid_var(-5, 15, 0);
    setvalue(basic_elt(env, 15), v_864); // !*lower
    {   LispObject fn = basic_elt(env, 50); // yyreadch
    v_864 = (*qfn0(fn))(fn);
    }
    env = stack[-5];
    ;}  // end of a binding scope
    ;}  // end of a binding scope
    v_864 = lisp_true;
    setvalue(basic_elt(env, 5), v_864); // lex_escaped
    goto v_101;
v_103:
    v_864 = nil;
    goto v_101;
    v_864 = nil;
v_101:
    goto v_95;
v_97:
    v_864 = nil;
    goto v_95;
    v_864 = nil;
v_95:
    if (v_864 == nil) goto v_93;
    else goto v_88;
v_93:
    goto v_89;
v_88:
    v_865 = qvalue(basic_elt(env, 6)); // lex_char
    v_864 = stack[-4];
    v_864 = cons(v_865, v_864);
    env = stack[-5];
    stack[-4] = v_864;
v_129:
    {   LispObject fn = basic_elt(env, 50); // yyreadch
    v_864 = (*qfn0(fn))(fn);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 53); // lexer_word_continues
    v_864 = (*qfn1(fn))(fn, v_864);
    }
    env = stack[-5];
    if (v_864 == nil) goto v_134;
    else goto v_133;
v_134:
    v_865 = qvalue(basic_elt(env, 6)); // lex_char
    v_864 = basic_elt(env, 12); // !!
    if (v_865 == v_864) goto v_140;
    else goto v_141;
v_140:
    v_865 = qvalue(basic_elt(env, 13)); // lexer_style!*
    v_864 = static_cast<LispObject>(524288)+TAG_FIXNUM; // 32768
    {   LispObject fn = basic_elt(env, 52); // land
    v_864 = (*qfn2(fn))(fn, v_865, v_864);
    }
    env = stack[-5];
    v_864 = static_cast<LispObject>(zerop(v_864));
    v_864 = v_864 ? lisp_true : nil;
    env = stack[-5];
    if (v_864 == nil) goto v_146;
    else goto v_147;
v_146:
    v_865 = nil;
    v_864 = nil;
// Binding !*raise
// FLUIDBIND: reloadenv=5 litvec-offset=14 saveloc=1
{   bind_fluid_stack bind_fluid_var(-5, 14, -1);
    setvalue(basic_elt(env, 14), v_865); // !*raise
// Binding !*lower
// FLUIDBIND: reloadenv=5 litvec-offset=15 saveloc=0
{   bind_fluid_stack bind_fluid_var(-5, 15, 0);
    setvalue(basic_elt(env, 15), v_864); // !*lower
    {   LispObject fn = basic_elt(env, 50); // yyreadch
    v_864 = (*qfn0(fn))(fn);
    }
    env = stack[-5];
    ;}  // end of a binding scope
    ;}  // end of a binding scope
    v_864 = lisp_true;
    setvalue(basic_elt(env, 5), v_864); // lex_escaped
    goto v_145;
v_147:
    v_864 = nil;
    goto v_145;
    v_864 = nil;
v_145:
    goto v_139;
v_141:
    v_864 = nil;
    goto v_139;
    v_864 = nil;
v_139:
    if (v_864 == nil) goto v_137;
    else goto v_133;
v_137:
    goto v_128;
v_133:
    v_865 = qvalue(basic_elt(env, 6)); // lex_char
    v_864 = stack[-4];
    v_864 = cons(v_865, v_864);
    env = stack[-5];
    stack[-4] = v_864;
    goto v_129;
v_128:
    v_864 = stack[-4];
    v_864 = Lnreverse(nil, v_864);
    env = stack[-5];
    stack[-4] = v_864;
    {   LispObject fn = basic_elt(env, 54); // list2widestring
    v_864 = (*qfn1(fn))(fn, v_864);
    }
    env = stack[-5];
    v_864 = Lintern(nil, v_864);
    env = stack[-5];
    setvalue(basic_elt(env, 3), v_864); // yylval
    v_865 = qvalue(basic_elt(env, 3)); // yylval
    v_864 = basic_elt(env, 16); // comment
    if (v_865 == v_864) goto v_182;
    else goto v_183;
v_182:
    v_865 = qvalue(basic_elt(env, 13)); // lexer_style!*
    v_864 = static_cast<LispObject>(4194304)+TAG_FIXNUM; // 262144
    {   LispObject fn = basic_elt(env, 52); // land
    v_864 = (*qfn2(fn))(fn, v_865, v_864);
    }
    env = stack[-5];
    v_864 = static_cast<LispObject>(zerop(v_864));
    v_864 = v_864 ? lisp_true : nil;
    env = stack[-5];
    if (v_864 == nil) goto v_188;
    else goto v_189;
v_188:
    v_864 = qvalue(basic_elt(env, 5)); // lex_escaped
    v_864 = (v_864 == nil ? lisp_true : nil);
    goto v_187;
v_189:
    v_864 = nil;
    goto v_187;
    v_864 = nil;
v_187:
    goto v_181;
v_183:
    v_864 = nil;
    goto v_181;
    v_864 = nil;
v_181:
    if (v_864 == nil) goto v_179;
v_204:
    v_865 = qvalue(basic_elt(env, 6)); // lex_char
    v_864 = basic_elt(env, 17); // !;
    if (v_865 == v_864) goto v_211;
    else goto v_212;
v_211:
    v_864 = lisp_true;
    goto v_210;
v_212:
    v_865 = qvalue(basic_elt(env, 6)); // lex_char
    v_864 = basic_elt(env, 18); // !$
    v_864 = (v_865 == v_864 ? lisp_true : nil);
    goto v_210;
    v_864 = nil;
v_210:
    if (v_864 == nil) goto v_208;
    goto v_203;
v_208:
    {   LispObject fn = basic_elt(env, 50); // yyreadch
    v_864 = (*qfn0(fn))(fn);
    }
    env = stack[-5];
    goto v_204;
v_203:
    {   LispObject fn = basic_elt(env, 50); // yyreadch
    v_864 = (*qfn0(fn))(fn);
    }
    env = stack[-5];
    goto v_1;
v_179:
    v_864 = qvalue(basic_elt(env, 5)); // lex_escaped
    if (v_864 == nil) goto v_231;
    else goto v_232;
v_231:
    v_865 = qvalue(basic_elt(env, 3)); // yylval
    v_864 = basic_elt(env, 19); // lex_code
    v_864 = get(v_865, v_864);
    env = stack[-5];
    stack[-3] = v_864;
    goto v_230;
v_232:
    v_864 = nil;
    goto v_230;
    v_864 = nil;
v_230:
    if (v_864 == nil) goto v_228;
    v_864 = stack[-3];
    goto v_7;
v_228:
    v_865 = stack[-4];
    v_864 = basic_elt(env, 20); // !'
    if (!consp(v_865)) goto v_246;
    v_865 = car(v_865);
    if (v_865 == v_864) goto v_245;
    else goto v_246;
v_245:
    v_864 = lisp_true;
    goto v_244;
v_246:
    v_865 = stack[-4];
    v_864 = basic_elt(env, 21); // lex_is_typename
    v_864 = get(v_865, v_864);
    env = stack[-5];
    goto v_244;
    v_864 = nil;
v_244:
    if (v_864 == nil) goto v_242;
    v_864 = qvalue(basic_elt(env, 22)); // lex_typename_code
    goto v_7;
v_242:
    v_864 = qvalue(basic_elt(env, 23)); // lex_symbol_code
    goto v_7;
    goto v_87;
v_89:
    v_864 = qvalue(basic_elt(env, 6)); // lex_char
    v_864 = Ldigitp(nil, v_864);
    env = stack[-5];
    if (v_864 == nil) goto v_262;
    else goto v_260;
v_262:
    v_865 = qvalue(basic_elt(env, 6)); // lex_char
    v_864 = basic_elt(env, 24); // !~
    if (v_865 == v_864) goto v_268;
    else goto v_269;
v_268:
    v_865 = qvalue(basic_elt(env, 13)); // lexer_style!*
    v_864 = static_cast<LispObject>(2097152)+TAG_FIXNUM; // 131072
    {   LispObject fn = basic_elt(env, 52); // land
    v_864 = (*qfn2(fn))(fn, v_865, v_864);
    }
    env = stack[-5];
    v_864 = static_cast<LispObject>(zerop(v_864));
    v_864 = v_864 ? lisp_true : nil;
    env = stack[-5];
    if (v_864 == nil) goto v_274;
    else goto v_275;
v_274:
    {   LispObject fn = basic_elt(env, 55); // yypeek
    v_864 = (*qfn0(fn))(fn);
    }
    env = stack[-5];
    v_864 = Ldigitp(nil, v_864);
    env = stack[-5];
    goto v_273;
v_275:
    v_864 = nil;
    goto v_273;
    v_864 = nil;
v_273:
    goto v_267;
v_269:
    v_864 = nil;
    goto v_267;
    v_864 = nil;
v_267:
    if (v_864 == nil) goto v_265;
    else goto v_260;
v_265:
    goto v_261;
v_260:
    v_865 = qvalue(basic_elt(env, 6)); // lex_char
    v_864 = basic_elt(env, 24); // !~
    if (v_865 == v_864) goto v_290;
    else goto v_291;
v_290:
    v_864 = lisp_true;
    stack[-2] = v_864;
    {   LispObject fn = basic_elt(env, 50); // yyreadch
    v_864 = (*qfn0(fn))(fn);
    }
    env = stack[-5];
    goto v_289;
v_291:
v_289:
    v_865 = qvalue(basic_elt(env, 6)); // lex_char
    v_864 = basic_elt(env, 25); // !0
    if (v_865 == v_864) goto v_302;
    else goto v_303;
v_302:
    {   LispObject fn = basic_elt(env, 55); // yypeek
    v_865 = (*qfn0(fn))(fn);
    }
    env = stack[-5];
    v_864 = basic_elt(env, 26); // x
    if (v_865 == v_864) goto v_308;
    else goto v_309;
v_308:
    v_864 = lisp_true;
    goto v_307;
v_309:
    {   LispObject fn = basic_elt(env, 55); // yypeek
    v_865 = (*qfn0(fn))(fn);
    }
    env = stack[-5];
    v_864 = basic_elt(env, 27); // !X
    v_864 = (v_865 == v_864 ? lisp_true : nil);
    goto v_307;
    v_864 = nil;
v_307:
    goto v_301;
v_303:
    v_864 = nil;
    goto v_301;
    v_864 = nil;
v_301:
    if (v_864 == nil) goto v_299;
    v_864 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    setvalue(basic_elt(env, 3), v_864); // yylval
    {   LispObject fn = basic_elt(env, 50); // yyreadch
    v_864 = (*qfn0(fn))(fn);
    }
    env = stack[-5];
v_325:
    {   LispObject fn = basic_elt(env, 50); // yyreadch
    v_864 = (*qfn0(fn))(fn);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 56); // lex_hexval
    v_864 = (*qfn1(fn))(fn, v_864);
    }
    env = stack[-5];
    stack[-3] = v_864;
    if (v_864 == nil) goto v_328;
    else goto v_329;
v_328:
    goto v_324;
v_329:
    v_865 = static_cast<LispObject>(256)+TAG_FIXNUM; // 16
    v_864 = qvalue(basic_elt(env, 3)); // yylval
    v_865 = times2(v_865, v_864);
    env = stack[-5];
    v_864 = stack[-3];
    v_864 = plus2(v_865, v_864);
    env = stack[-5];
    setvalue(basic_elt(env, 3), v_864); // yylval
    goto v_325;
v_324:
    v_864 = stack[-2];
    if (v_864 == nil) goto v_341;
    v_864 = qvalue(basic_elt(env, 3)); // yylval
    v_864 = negate(v_864);
    env = stack[-5];
    setvalue(basic_elt(env, 3), v_864); // yylval
    goto v_339;
v_341:
v_339:
    v_864 = qvalue(basic_elt(env, 28)); // lex_number_code
    goto v_7;
v_299:
    v_864 = qvalue(basic_elt(env, 6)); // lex_char
    v_864 = ncons(v_864);
    env = stack[-5];
    stack[-4] = v_864;
v_350:
    {   LispObject fn = basic_elt(env, 50); // yyreadch
    v_864 = (*qfn0(fn))(fn);
    }
    env = stack[-5];
    v_864 = qvalue(basic_elt(env, 6)); // lex_char
    v_864 = Ldigitp(nil, v_864);
    env = stack[-5];
    if (v_864 == nil) goto v_353;
    else goto v_354;
v_353:
    goto v_349;
v_354:
    v_865 = qvalue(basic_elt(env, 6)); // lex_char
    v_864 = stack[-4];
    v_864 = cons(v_865, v_864);
    env = stack[-5];
    stack[-4] = v_864;
    goto v_350;
v_349:
    v_865 = qvalue(basic_elt(env, 6)); // lex_char
    v_864 = basic_elt(env, 29); // !.
    if (v_865 == v_864) goto v_364;
    else goto v_365;
v_364:
    v_864 = lisp_true;
    stack[-3] = v_864;
    v_865 = qvalue(basic_elt(env, 6)); // lex_char
    v_864 = stack[-4];
    v_864 = cons(v_865, v_864);
    env = stack[-5];
    stack[-4] = v_864;
v_374:
    {   LispObject fn = basic_elt(env, 50); // yyreadch
    v_864 = (*qfn0(fn))(fn);
    }
    env = stack[-5];
    v_864 = qvalue(basic_elt(env, 6)); // lex_char
    v_864 = Ldigitp(nil, v_864);
    env = stack[-5];
    if (v_864 == nil) goto v_377;
    else goto v_378;
v_377:
    goto v_373;
v_378:
    v_865 = qvalue(basic_elt(env, 6)); // lex_char
    v_864 = stack[-4];
    v_864 = cons(v_865, v_864);
    env = stack[-5];
    stack[-4] = v_864;
    goto v_374;
v_373:
    goto v_363;
v_365:
v_363:
    v_865 = qvalue(basic_elt(env, 6)); // lex_char
    v_864 = basic_elt(env, 30); // e
    if (v_865 == v_864) goto v_392;
    else goto v_393;
v_392:
    v_864 = lisp_true;
    goto v_391;
v_393:
    v_865 = qvalue(basic_elt(env, 6)); // lex_char
    v_864 = basic_elt(env, 31); // !E
    v_864 = (v_865 == v_864 ? lisp_true : nil);
    goto v_391;
    v_864 = nil;
v_391:
    if (v_864 == nil) goto v_389;
    v_864 = stack[-3];
    if (v_864 == nil) goto v_404;
    else goto v_405;
v_404:
    v_866 = basic_elt(env, 25); // !0
    v_865 = basic_elt(env, 29); // !.
    v_864 = stack[-4];
    v_864 = list2star(v_866, v_865, v_864);
    env = stack[-5];
    stack[-4] = v_864;
    goto v_403;
v_405:
v_403:
    v_865 = basic_elt(env, 30); // e
    v_864 = stack[-4];
    v_864 = cons(v_865, v_864);
    env = stack[-5];
    stack[-4] = v_864;
    {   LispObject fn = basic_elt(env, 50); // yyreadch
    v_864 = (*qfn0(fn))(fn);
    }
    env = stack[-5];
    v_865 = qvalue(basic_elt(env, 6)); // lex_char
    v_864 = basic_elt(env, 32); // !+
    if (v_865 == v_864) goto v_422;
    else goto v_423;
v_422:
    v_864 = lisp_true;
    goto v_421;
v_423:
    v_865 = qvalue(basic_elt(env, 6)); // lex_char
    v_864 = basic_elt(env, 33); // !-
    v_864 = (v_865 == v_864 ? lisp_true : nil);
    goto v_421;
    v_864 = nil;
v_421:
    if (v_864 == nil) goto v_419;
    v_865 = qvalue(basic_elt(env, 6)); // lex_char
    v_864 = stack[-4];
    v_864 = cons(v_865, v_864);
    env = stack[-5];
    stack[-4] = v_864;
    {   LispObject fn = basic_elt(env, 50); // yyreadch
    v_864 = (*qfn0(fn))(fn);
    }
    env = stack[-5];
    goto v_417;
v_419:
v_417:
    v_864 = qvalue(basic_elt(env, 6)); // lex_char
    v_864 = Ldigitp(nil, v_864);
    env = stack[-5];
    if (v_864 == nil) goto v_438;
    else goto v_439;
v_438:
    v_865 = basic_elt(env, 25); // !0
    v_864 = stack[-4];
    v_864 = cons(v_865, v_864);
    env = stack[-5];
    stack[-4] = v_864;
    goto v_437;
v_439:
    v_865 = qvalue(basic_elt(env, 6)); // lex_char
    v_864 = stack[-4];
    v_864 = cons(v_865, v_864);
    env = stack[-5];
    stack[-4] = v_864;
v_452:
    {   LispObject fn = basic_elt(env, 50); // yyreadch
    v_864 = (*qfn0(fn))(fn);
    }
    env = stack[-5];
    v_864 = qvalue(basic_elt(env, 6)); // lex_char
    v_864 = Ldigitp(nil, v_864);
    env = stack[-5];
    if (v_864 == nil) goto v_455;
    else goto v_456;
v_455:
    goto v_451;
v_456:
    v_865 = qvalue(basic_elt(env, 6)); // lex_char
    v_864 = stack[-4];
    v_864 = cons(v_865, v_864);
    env = stack[-5];
    stack[-4] = v_864;
    goto v_452;
v_451:
    goto v_437;
v_437:
    goto v_387;
v_389:
v_387:
    v_864 = stack[-4];
    v_864 = Lnreverse(nil, v_864);
    env = stack[-5];
    v_864 = Lcompress(nil, v_864);
    env = stack[-5];
    setvalue(basic_elt(env, 3), v_864); // yylval
    v_864 = stack[-2];
    if (v_864 == nil) goto v_470;
    v_864 = qvalue(basic_elt(env, 3)); // yylval
    v_864 = negate(v_864);
    env = stack[-5];
    setvalue(basic_elt(env, 3), v_864); // yylval
    goto v_468;
v_470:
v_468:
    v_864 = qvalue(basic_elt(env, 28)); // lex_number_code
    goto v_7;
v_261:
    v_865 = qvalue(basic_elt(env, 6)); // lex_char
    v_864 = basic_elt(env, 34); // !"
    if (v_865 == v_864) goto v_479;
    else goto v_480;
v_479:
    v_865 = qvalue(basic_elt(env, 13)); // lexer_style!*
    v_864 = static_cast<LispObject>(2048)+TAG_FIXNUM; // 128
    {   LispObject fn = basic_elt(env, 52); // land
    v_864 = (*qfn2(fn))(fn, v_865, v_864);
    }
    env = stack[-5];
    v_864 = static_cast<LispObject>(zerop(v_864));
    v_864 = v_864 ? lisp_true : nil;
    env = stack[-5];
    v_864 = (v_864 == nil ? lisp_true : nil);
    goto v_478;
v_480:
    v_864 = nil;
    goto v_478;
    v_864 = nil;
v_478:
    if (v_864 == nil) goto v_476;
    v_865 = qvalue(basic_elt(env, 13)); // lexer_style!*
    v_864 = static_cast<LispObject>(16384)+TAG_FIXNUM; // 1024
    {   LispObject fn = basic_elt(env, 52); // land
    v_864 = (*qfn2(fn))(fn, v_865, v_864);
    }
    env = stack[-5];
    v_864 = static_cast<LispObject>(zerop(v_864));
    v_864 = v_864 ? lisp_true : nil;
    env = stack[-5];
    if (v_864 == nil) goto v_493;
    else goto v_494;
v_493:
// Binding !*raise
// FLUIDBIND: reloadenv=5 litvec-offset=14 saveloc=1
{   bind_fluid_stack bind_fluid_var(-5, 14, -1);
    setvalue(basic_elt(env, 14), nil); // !*raise
// Binding !*lower
// FLUIDBIND: reloadenv=5 litvec-offset=15 saveloc=0
{   bind_fluid_stack bind_fluid_var(-5, 15, 0);
    setvalue(basic_elt(env, 15), nil); // !*lower
v_507:
    {   LispObject fn = basic_elt(env, 50); // yyreadch
    v_865 = (*qfn0(fn))(fn);
    }
    env = stack[-5];
    v_864 = basic_elt(env, 34); // !"
    if (v_865 == v_864) goto v_515;
    v_864 = lisp_true;
    goto v_513;
v_515:
    {   LispObject fn = basic_elt(env, 55); // yypeek
    v_865 = (*qfn0(fn))(fn);
    }
    env = stack[-5];
    v_864 = basic_elt(env, 34); // !"
    if (v_865 == v_864) goto v_523;
    else goto v_524;
v_523:
    {   LispObject fn = basic_elt(env, 50); // yyreadch
    v_865 = (*qfn0(fn))(fn);
    }
    env = stack[-5];
    v_864 = basic_elt(env, 34); // !"
    v_864 = (v_865 == v_864 ? lisp_true : nil);
    goto v_522;
v_524:
    v_864 = nil;
    goto v_522;
    v_864 = nil;
v_522:
    goto v_513;
    v_864 = nil;
v_513:
    if (v_864 == nil) goto v_510;
    else goto v_511;
v_510:
    goto v_506;
v_511:
    v_865 = qvalue(basic_elt(env, 6)); // lex_char
    v_864 = stack[-4];
    v_864 = cons(v_865, v_864);
    env = stack[-5];
    stack[-4] = v_864;
    goto v_507;
v_506:
    ;}  // end of a binding scope
    ;}  // end of a binding scope
    goto v_492;
v_494:
// Binding !*raise
// FLUIDBIND: reloadenv=5 litvec-offset=14 saveloc=2
{   bind_fluid_stack bind_fluid_var(-5, 14, -2);
    setvalue(basic_elt(env, 14), nil); // !*raise
// Binding !*lower
// FLUIDBIND: reloadenv=5 litvec-offset=15 saveloc=1
{   bind_fluid_stack bind_fluid_var(-5, 15, -1);
    setvalue(basic_elt(env, 15), nil); // !*lower
    stack[0] = nil;
v_550:
    {   LispObject fn = basic_elt(env, 50); // yyreadch
    v_865 = (*qfn0(fn))(fn);
    }
    env = stack[-5];
    v_864 = basic_elt(env, 34); // !"
    if (v_865 == v_864) goto v_558;
    v_864 = lisp_true;
    goto v_556;
v_558:
    v_865 = stack[0];
    v_864 = basic_elt(env, 35); // !\ (backslash)
    v_864 = (v_865 == v_864 ? lisp_true : nil);
    goto v_556;
    v_864 = nil;
v_556:
    if (v_864 == nil) goto v_553;
    else goto v_554;
v_553:
    goto v_549;
v_554:
    v_864 = qvalue(basic_elt(env, 6)); // lex_char
    stack[0] = v_864;
    v_865 = qvalue(basic_elt(env, 6)); // lex_char
    v_864 = stack[-4];
    v_864 = cons(v_865, v_864);
    env = stack[-5];
    stack[-4] = v_864;
    goto v_550;
v_549:
    ;}  // end of a binding scope
    ;}  // end of a binding scope
    goto v_492;
v_492:
    {   LispObject fn = basic_elt(env, 50); // yyreadch
    v_864 = (*qfn0(fn))(fn);
    }
    env = stack[-5];
    v_864 = stack[-4];
    v_864 = Lnreverse(nil, v_864);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 54); // list2widestring
    v_864 = (*qfn1(fn))(fn, v_864);
    }
    env = stack[-5];
    setvalue(basic_elt(env, 3), v_864); // yylval
    v_864 = qvalue(basic_elt(env, 36)); // lex_string_code
    goto v_7;
v_476:
    v_865 = qvalue(basic_elt(env, 6)); // lex_char
    v_864 = basic_elt(env, 20); // !'
    if (v_865 == v_864) goto v_583;
    else goto v_584;
v_583:
    v_865 = qvalue(basic_elt(env, 13)); // lexer_style!*
    v_864 = static_cast<LispObject>(4096)+TAG_FIXNUM; // 256
    {   LispObject fn = basic_elt(env, 52); // land
    v_864 = (*qfn2(fn))(fn, v_865, v_864);
    }
    env = stack[-5];
    v_864 = static_cast<LispObject>(zerop(v_864));
    v_864 = v_864 ? lisp_true : nil;
    env = stack[-5];
    v_864 = (v_864 == nil ? lisp_true : nil);
    goto v_582;
v_584:
    v_864 = nil;
    goto v_582;
    v_864 = nil;
v_582:
    if (v_864 == nil) goto v_580;
// Binding !*raise
// FLUIDBIND: reloadenv=5 litvec-offset=14 saveloc=1
{   bind_fluid_stack bind_fluid_var(-5, 14, -1);
    setvalue(basic_elt(env, 14), nil); // !*raise
// Binding !*lower
// FLUIDBIND: reloadenv=5 litvec-offset=15 saveloc=0
{   bind_fluid_stack bind_fluid_var(-5, 15, 0);
    setvalue(basic_elt(env, 15), nil); // !*lower
v_603:
v_606:
    {   LispObject fn = basic_elt(env, 50); // yyreadch
    v_865 = (*qfn0(fn))(fn);
    }
    env = stack[-5];
    v_864 = basic_elt(env, 20); // !'
    if (v_865 == v_864) goto v_609;
    else goto v_610;
v_609:
    goto v_605;
v_610:
    v_865 = qvalue(basic_elt(env, 6)); // lex_char
    v_864 = stack[-4];
    v_864 = cons(v_865, v_864);
    env = stack[-5];
    stack[-4] = v_864;
    goto v_606;
v_605:
    v_865 = qvalue(basic_elt(env, 6)); // lex_char
    v_864 = stack[-4];
    v_864 = cons(v_865, v_864);
    env = stack[-5];
    stack[-4] = v_864;
    {   LispObject fn = basic_elt(env, 50); // yyreadch
    v_864 = (*qfn0(fn))(fn);
    }
    env = stack[-5];
    v_865 = qvalue(basic_elt(env, 6)); // lex_char
    v_864 = basic_elt(env, 20); // !'
    if (v_865 == v_864) goto v_623;
    else goto v_624;
v_623:
    goto v_603;
v_624:
    ;}  // end of a binding scope
    ;}  // end of a binding scope
    v_864 = stack[-4];
    if (!car_legal(v_864)) v_864 = cdrerror(v_864); else
    v_864 = cdr(v_864);
    v_864 = Lnreverse(nil, v_864);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 54); // list2widestring
    v_864 = (*qfn1(fn))(fn, v_864);
    }
    env = stack[-5];
    setvalue(basic_elt(env, 3), v_864); // yylval
    v_864 = qvalue(basic_elt(env, 37)); // lex_char_code
    goto v_7;
v_580:
    v_865 = qvalue(basic_elt(env, 6)); // lex_char
    v_864 = basic_elt(env, 20); // !'
    if (v_865 == v_864) goto v_638;
    else goto v_639;
v_638:
    v_865 = qvalue(basic_elt(env, 13)); // lexer_style!*
    v_864 = static_cast<LispObject>(4194304)+TAG_FIXNUM; // 262144
    {   LispObject fn = basic_elt(env, 52); // land
    v_864 = (*qfn2(fn))(fn, v_865, v_864);
    }
    env = stack[-5];
    v_864 = static_cast<LispObject>(zerop(v_864));
    v_864 = v_864 ? lisp_true : nil;
    env = stack[-5];
    v_864 = (v_864 == nil ? lisp_true : nil);
    goto v_637;
v_639:
    v_864 = nil;
    goto v_637;
    v_864 = nil;
v_637:
    if (v_864 == nil) goto v_635;
    {   LispObject fn = basic_elt(env, 50); // yyreadch
    v_864 = (*qfn0(fn))(fn);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 57); // read_s_expression
    v_864 = (*qfn0(fn))(fn);
    }
    env = stack[-5];
    v_865 = basic_elt(env, 38); // quote
    v_864 = qvalue(basic_elt(env, 3)); // yylval
    v_864 = list2(v_865, v_864);
    env = stack[-5];
    setvalue(basic_elt(env, 3), v_864); // yylval
    v_864 = qvalue(basic_elt(env, 39)); // lex_list_code
    goto v_7;
v_635:
    v_865 = qvalue(basic_elt(env, 6)); // lex_char
    v_864 = basic_elt(env, 40); // !`
    if (v_865 == v_864) goto v_660;
    else goto v_661;
v_660:
    v_865 = qvalue(basic_elt(env, 13)); // lexer_style!*
    v_864 = static_cast<LispObject>(4194304)+TAG_FIXNUM; // 262144
    {   LispObject fn = basic_elt(env, 52); // land
    v_864 = (*qfn2(fn))(fn, v_865, v_864);
    }
    env = stack[-5];
    v_864 = static_cast<LispObject>(zerop(v_864));
    v_864 = v_864 ? lisp_true : nil;
    env = stack[-5];
    v_864 = (v_864 == nil ? lisp_true : nil);
    goto v_659;
v_661:
    v_864 = nil;
    goto v_659;
    v_864 = nil;
v_659:
    if (v_864 == nil) goto v_657;
    {   LispObject fn = basic_elt(env, 50); // yyreadch
    v_864 = (*qfn0(fn))(fn);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 57); // read_s_expression
    v_864 = (*qfn0(fn))(fn);
    }
    env = stack[-5];
    v_865 = basic_elt(env, 41); // backquote
    v_864 = qvalue(basic_elt(env, 3)); // yylval
    v_864 = list2(v_865, v_864);
    env = stack[-5];
    setvalue(basic_elt(env, 3), v_864); // yylval
    v_864 = qvalue(basic_elt(env, 39)); // lex_list_code
    goto v_7;
v_657:
    v_864 = qvalue(basic_elt(env, 6)); // lex_char
    setvalue(basic_elt(env, 3), v_864); // yylval
    v_865 = qvalue(basic_elt(env, 3)); // yylval
    v_864 = qvalue(basic_elt(env, 10)); // !$eof!$
    if (equal(v_865, v_864)) goto v_683;
    else goto v_684;
v_683:
    v_864 = qvalue(basic_elt(env, 11)); // lex_eof_code
    goto v_7;
v_684:
    v_865 = qvalue(basic_elt(env, 3)); // yylval
    v_864 = basic_elt(env, 42); // !#
    if (v_865 == v_864) goto v_698;
    else goto v_699;
v_698:
    v_865 = qvalue(basic_elt(env, 13)); // lexer_style!*
    v_864 = static_cast<LispObject>(1024)+TAG_FIXNUM; // 64
    {   LispObject fn = basic_elt(env, 52); // land
    v_864 = (*qfn2(fn))(fn, v_865, v_864);
    }
    env = stack[-5];
    v_864 = static_cast<LispObject>(zerop(v_864));
    v_864 = v_864 ? lisp_true : nil;
    env = stack[-5];
    v_864 = (v_864 == nil ? lisp_true : nil);
    goto v_697;
v_699:
    v_864 = nil;
    goto v_697;
    v_864 = nil;
v_697:
    if (v_864 == nil) goto v_695;
    v_864 = lisp_true;
    goto v_693;
v_695:
    v_865 = qvalue(basic_elt(env, 3)); // yylval
    v_864 = basic_elt(env, 43); // lex_dipthong
    v_864 = get(v_865, v_864);
    env = stack[-5];
    if (v_864 == nil) goto v_715;
    else goto v_714;
v_715:
    v_865 = qvalue(basic_elt(env, 13)); // lexer_style!*
    v_864 = static_cast<LispObject>(2097152)+TAG_FIXNUM; // 131072
    {   LispObject fn = basic_elt(env, 52); // land
    v_864 = (*qfn2(fn))(fn, v_865, v_864);
    }
    env = stack[-5];
    v_864 = static_cast<LispObject>(zerop(v_864));
    v_864 = v_864 ? lisp_true : nil;
    env = stack[-5];
    if (v_864 == nil) goto v_721;
    else goto v_722;
v_721:
    v_865 = qvalue(basic_elt(env, 3)); // yylval
    v_864 = basic_elt(env, 44); // sml_opchar
    v_864 = Lflagp(nil, v_865, v_864);
    env = stack[-5];
    goto v_720;
v_722:
    v_864 = nil;
    goto v_720;
    v_864 = nil;
v_720:
v_714:
    goto v_693;
    v_864 = nil;
v_693:
    if (v_864 == nil) goto v_691;
    {   LispObject fn = basic_elt(env, 50); // yyreadch
    v_864 = (*qfn0(fn))(fn);
    }
    env = stack[-5];
    goto v_689;
v_691:
    v_864 = basic_elt(env, 7); // ! 
    setvalue(basic_elt(env, 6), v_864); // lex_char
    goto v_689;
v_689:
    v_865 = qvalue(basic_elt(env, 3)); // yylval
    v_864 = basic_elt(env, 42); // !#
    if (v_865 == v_864) goto v_744;
    else goto v_745;
v_744:
    v_865 = qvalue(basic_elt(env, 13)); // lexer_style!*
    v_864 = static_cast<LispObject>(1024)+TAG_FIXNUM; // 64
    {   LispObject fn = basic_elt(env, 52); // land
    v_864 = (*qfn2(fn))(fn, v_865, v_864);
    }
    env = stack[-5];
    v_864 = static_cast<LispObject>(zerop(v_864));
    v_864 = v_864 ? lisp_true : nil;
    env = stack[-5];
    if (v_864 == nil) goto v_750;
    else goto v_751;
v_750:
    v_864 = qvalue(basic_elt(env, 6)); // lex_char
    v_864 = Lalpha_char_p(nil, v_864);
    env = stack[-5];
    goto v_749;
v_751:
    v_864 = nil;
    goto v_749;
    v_864 = nil;
v_749:
    goto v_743;
v_745:
    v_864 = nil;
    goto v_743;
    v_864 = nil;
v_743:
    if (v_864 == nil) goto v_741;
    else goto v_739;
v_741:
    v_865 = qvalue(basic_elt(env, 6)); // lex_char
    v_864 = basic_elt(env, 12); // !!
    if (v_865 == v_864) goto v_739;
    goto v_740;
v_739:
    {   LispObject fn = basic_elt(env, 0); // lex_basic_token
    v_864 = (*qfn0(fn))(fn);
    }
    env = stack[-5];
    stack[-4] = v_864;
    v_865 = qvalue(basic_elt(env, 3)); // yylval
    v_864 = basic_elt(env, 45); // (if else elif endif define eval)
    v_864 = Lmemq(nil, v_865, v_864);
    if (v_864 == nil) goto v_771;
    stack[0] = basic_elt(env, 42); // !#
    v_864 = qvalue(basic_elt(env, 3)); // yylval
    v_864 = Lsymbol_name(nil, v_864);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 58); // widestring2list
    v_864 = (*qfn1(fn))(fn, v_864);
    }
    env = stack[-5];
    v_864 = cons(stack[0], v_864);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 54); // list2widestring
    v_864 = (*qfn1(fn))(fn, v_864);
    }
    env = stack[-5];
    v_864 = Lintern(nil, v_864);
    env = stack[-5];
    setvalue(basic_elt(env, 3), v_864); // yylval
    goto v_769;
v_771:
    v_864 = stack[-4];
    setvalue(basic_elt(env, 1), v_864); // lex_peeked
    v_864 = qvalue(basic_elt(env, 3)); // yylval
    setvalue(basic_elt(env, 2), v_864); // lex_peeked_yylval
    v_864 = qvalue(basic_elt(env, 5)); // lex_escaped
    setvalue(basic_elt(env, 4), v_864); // lex_peeked_escaped
    v_864 = basic_elt(env, 42); // !#
    setvalue(basic_elt(env, 3), v_864); // yylval
    v_864 = nil;
    setvalue(basic_elt(env, 5), v_864); // lex_escaped
    goto v_769;
v_769:
    goto v_738;
v_740:
v_738:
v_791:
    v_866 = qvalue(basic_elt(env, 6)); // lex_char
    v_865 = qvalue(basic_elt(env, 3)); // yylval
    v_864 = basic_elt(env, 43); // lex_dipthong
    v_864 = get(v_865, v_864);
    env = stack[-5];
    v_864 = Latsoc(nil, v_866, v_864);
    stack[-3] = v_864;
    if (v_864 == nil) goto v_794;
    else goto v_795;
v_794:
    goto v_790;
v_795:
    v_864 = stack[-3];
    if (!car_legal(v_864)) v_864 = cdrerror(v_864); else
    v_864 = cdr(v_864);
    setvalue(basic_elt(env, 3), v_864); // yylval
    {   LispObject fn = basic_elt(env, 50); // yyreadch
    v_864 = (*qfn0(fn))(fn);
    }
    env = stack[-5];
    goto v_791;
v_790:
    v_865 = qvalue(basic_elt(env, 13)); // lexer_style!*
    v_864 = static_cast<LispObject>(2097152)+TAG_FIXNUM; // 131072
    {   LispObject fn = basic_elt(env, 52); // land
    v_864 = (*qfn2(fn))(fn, v_865, v_864);
    }
    env = stack[-5];
    v_864 = static_cast<LispObject>(zerop(v_864));
    v_864 = v_864 ? lisp_true : nil;
    env = stack[-5];
    if (v_864 == nil) goto v_811;
    else goto v_812;
v_811:
    v_864 = qvalue(basic_elt(env, 3)); // yylval
    v_864 = Lexplodec(nil, v_864);
    env = stack[-5];
    stack[-3] = v_864;
    {   LispObject fn = basic_elt(env, 59); // all_sml_opchar
    v_864 = (*qfn1(fn))(fn, v_864);
    }
    env = stack[-5];
    goto v_810;
v_812:
    v_864 = nil;
    goto v_810;
    v_864 = nil;
v_810:
    if (v_864 == nil) goto v_808;
v_825:
    v_865 = qvalue(basic_elt(env, 13)); // lexer_style!*
    v_864 = static_cast<LispObject>(2097152)+TAG_FIXNUM; // 131072
    {   LispObject fn = basic_elt(env, 52); // land
    v_864 = (*qfn2(fn))(fn, v_865, v_864);
    }
    env = stack[-5];
    v_864 = static_cast<LispObject>(zerop(v_864));
    v_864 = v_864 ? lisp_true : nil;
    env = stack[-5];
    if (v_864 == nil) goto v_832;
    else goto v_833;
v_832:
    v_865 = qvalue(basic_elt(env, 6)); // lex_char
    v_864 = basic_elt(env, 44); // sml_opchar
    v_864 = Lflagp(nil, v_865, v_864);
    env = stack[-5];
    goto v_831;
v_833:
    v_864 = nil;
    goto v_831;
    v_864 = nil;
v_831:
    if (v_864 == nil) goto v_828;
    else goto v_829;
v_828:
    goto v_824;
v_829:
    stack[0] = stack[-3];
    v_864 = qvalue(basic_elt(env, 6)); // lex_char
    v_864 = ncons(v_864);
    env = stack[-5];
    v_864 = Lappend_2(nil, stack[0], v_864);
    env = stack[-5];
    stack[-3] = v_864;
    {   LispObject fn = basic_elt(env, 50); // yyreadch
    v_864 = (*qfn0(fn))(fn);
    }
    env = stack[-5];
    goto v_825;
v_824:
    v_864 = stack[-3];
    {   LispObject fn = basic_elt(env, 60); // list2string
    v_864 = (*qfn1(fn))(fn, v_864);
    }
    env = stack[-5];
    v_864 = Lintern(nil, v_864);
    env = stack[-5];
    setvalue(basic_elt(env, 3), v_864); // yylval
    goto v_806;
v_808:
v_806:
    v_865 = qvalue(basic_elt(env, 3)); // yylval
    v_864 = basic_elt(env, 19); // lex_code
    v_864 = get(v_865, v_864);
    env = stack[-5];
    stack[-3] = v_864;
    if (v_864 == nil) goto v_856;
    v_864 = stack[-3];
    goto v_7;
v_856:
    v_864 = qvalue(basic_elt(env, 23)); // lex_symbol_code
    goto v_7;
    goto v_87;
v_87:
    v_864 = nil;
v_7:
    return onevalue(v_864);
}



// Code for in_list1a

static LispObject CC_in_list1a(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    v_210 = qvalue(basic_elt(env, 1)); // !*echo
    stack[-5] = v_210;
    v_210 = qvalue(basic_elt(env, 2)); // !*reduce4
    if (v_210 == nil) goto v_18;
    v_210 = stack[-4];
    {   LispObject fn = basic_elt(env, 17); // type
    v_211 = (*qfn1(fn))(fn, v_210);
    }
    env = stack[-6];
    v_210 = basic_elt(env, 3); // string
    if (v_211 == v_210) goto v_23;
    v_211 = stack[-4];
    v_210 = basic_elt(env, 3); // string
    {   LispObject fn = basic_elt(env, 18); // typerr
    v_210 = (*qfn2(fn))(fn, v_211, v_210);
    }
    env = stack[-6];
    goto v_21;
v_23:
    v_210 = stack[-4];
    {   LispObject fn = basic_elt(env, 19); // value
    v_210 = (*qfn1(fn))(fn, v_210);
    }
    env = stack[-6];
    stack[-4] = v_210;
    goto v_21;
v_21:
    goto v_16;
v_18:
v_16:
    v_210 = stack[-4];
    {   LispObject fn = basic_elt(env, 20); // mkfil!*
    v_210 = (*qfn1(fn))(fn, v_210);
    }
    env = stack[-6];
    stack[-4] = v_210;
    v_210 = stack[-4];
    v_210 = Lexplodec(nil, v_210);
    env = stack[-6];
    stack[-1] = v_210;
    v_211 = stack[-1];
    v_210 = basic_elt(env, 4); // !|
    if (!consp(v_211)) goto v_41;
    v_211 = car(v_211);
    if (v_211 == v_210) goto v_40;
    else goto v_41;
v_40:
    v_210 = lisp_true;
    stack[0] = v_210;
    v_210 = stack[-1];
    if (!car_legal(v_210)) v_210 = cdrerror(v_210); else
    v_210 = cdr(v_210);
    {   LispObject fn = basic_elt(env, 21); // list2string
    v_210 = (*qfn1(fn))(fn, v_210);
    }
    env = stack[-6];
    stack[-4] = v_210;
    goto v_39;
v_41:
    v_211 = stack[-1];
    v_210 = basic_elt(env, 5); // !$
    if (!consp(v_211)) goto v_54;
    v_211 = car(v_211);
    if (v_211 == v_210) goto v_53;
    else goto v_54;
v_53:
    v_210 = stack[-1];
    if (!car_legal(v_210)) v_211 = cdrerror(v_210); else
    v_211 = cdr(v_210);
    v_210 = basic_elt(env, 6); // !/
    if (!consp(v_211)) goto v_61;
    v_211 = car(v_211);
    if (v_211 == v_210) goto v_60;
    else goto v_61;
v_60:
    v_210 = lisp_true;
    goto v_59;
v_61:
    v_210 = stack[-1];
    if (!car_legal(v_210)) v_211 = cdrerror(v_210); else
    v_211 = cdr(v_210);
    v_210 = basic_elt(env, 7); // !\ (backslash)
    v_210 = Leqcar(nil, v_211, v_210);
    env = stack[-6];
    goto v_59;
    v_210 = nil;
v_59:
    goto v_52;
v_54:
    v_210 = nil;
    goto v_52;
    v_210 = nil;
v_52:
    if (v_210 == nil) goto v_50;
    v_210 = qvalue(basic_elt(env, 8)); // ifl!*
    if (v_210 == nil) goto v_78;
    else goto v_79;
v_78:
    v_211 = basic_elt(env, 9); // !.
    v_210 = stack[-1];
    if (!car_legal(v_210)) v_210 = cdrerror(v_210); else
    v_210 = cdr(v_210);
    v_210 = cons(v_211, v_210);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 21); // list2string
    v_210 = (*qfn1(fn))(fn, v_210);
    }
    env = stack[-6];
    stack[-4] = v_210;
    goto v_77;
v_79:
    v_210 = qvalue(basic_elt(env, 8)); // ifl!*
    if (!car_legal(v_210)) v_210 = carerror(v_210); else
    v_210 = car(v_210);
    v_210 = Lexplodec(nil, v_210);
    env = stack[-6];
    v_210 = Lreverse(nil, v_210);
    env = stack[-6];
    v_212 = v_210;
v_94:
    v_210 = v_212;
    if (v_210 == nil) goto v_97;
    v_211 = v_212;
    v_210 = basic_elt(env, 6); // !/
    if (!consp(v_211)) goto v_105;
    v_211 = car(v_211);
    if (v_211 == v_210) goto v_104;
    else goto v_105;
v_104:
    v_210 = lisp_true;
    goto v_103;
v_105:
    v_211 = v_212;
    v_210 = basic_elt(env, 7); // !\ (backslash)
    v_210 = Leqcar(nil, v_211, v_210);
    env = stack[-6];
    goto v_103;
    v_210 = nil;
v_103:
    if (v_210 == nil) goto v_101;
    else goto v_97;
v_101:
    goto v_98;
v_97:
    goto v_93;
v_98:
    v_210 = v_212;
    if (!car_legal(v_210)) v_210 = cdrerror(v_210); else
    v_210 = cdr(v_210);
    v_212 = v_210;
    goto v_94;
v_93:
    v_210 = v_212;
    if (v_210 == nil) goto v_120;
    else goto v_121;
v_120:
    v_210 = basic_elt(env, 10); // (!/ !.)
    v_212 = v_210;
    goto v_119;
v_121:
v_119:
    v_210 = v_212;
    v_211 = Lreverse(nil, v_210);
    env = stack[-6];
    v_210 = stack[-1];
    if (!car_legal(v_210)) v_210 = cdrerror(v_210); else
    v_210 = cdr(v_210);
    if (!car_legal(v_210)) v_210 = cdrerror(v_210); else
    v_210 = cdr(v_210);
    v_210 = Lappend_2(nil, v_211, v_210);
    env = stack[-6];
    stack[-1] = v_210;
    v_210 = stack[-1];
    {   LispObject fn = basic_elt(env, 21); // list2string
    v_210 = (*qfn1(fn))(fn, v_210);
    }
    env = stack[-6];
    stack[-4] = v_210;
    goto v_77;
v_77:
    goto v_39;
v_50:
v_39:
    v_210 = stack[0];
    if (v_210 == nil) goto v_135;
    v_211 = stack[-4];
    v_210 = basic_elt(env, 11); // input
    {   LispObject fn = basic_elt(env, 22); // pipe!-open
    v_210 = (*qfn2(fn))(fn, v_211, v_210);
    }
    env = stack[-6];
    goto v_133;
v_135:
    v_211 = stack[-4];
    v_210 = basic_elt(env, 11); // input
    {   LispObject fn = basic_elt(env, 23); // open
    v_210 = (*qfn2(fn))(fn, v_211, v_210);
    }
    env = stack[-6];
    goto v_133;
    v_210 = nil;
v_133:
    stack[-1] = v_210;
    v_210 = stack[-1];
    v_210 = Lrds(nil, v_210);
    env = stack[-6];
    stack[0] = v_210;
    v_211 = stack[-4];
    v_210 = qvalue(basic_elt(env, 12)); // linelist!*
    v_210 = Lassoc(nil, v_211, v_210);
    if (v_210 == nil) goto v_150;
    goto v_148;
v_150:
v_148:
    v_210 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    setvalue(basic_elt(env, 13), v_210); // curline!*
    v_212 = stack[-4];
    v_211 = stack[-1];
    v_210 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_210 = list3(v_212, v_211, v_210);
    env = stack[-6];
    setvalue(basic_elt(env, 8), v_210); // ifl!*
    v_211 = qvalue(basic_elt(env, 8)); // ifl!*
    v_210 = qvalue(basic_elt(env, 14)); // ipl!*
    v_210 = cons(v_211, v_210);
    env = stack[-6];
    setvalue(basic_elt(env, 14), v_210); // ipl!*
    v_210 = stack[-3];
    setvalue(basic_elt(env, 1), v_210); // !*echo
    v_210 = stack[-2];
    {   LispObject fn = basic_elt(env, 24); // begin1a
    v_210 = (*qfn1(fn))(fn, v_210);
    }
    env = stack[-6];
    v_210 = stack[0];
    v_210 = Lrds(nil, v_210);
    env = stack[-6];
    v_210 = stack[-1];
    v_210 = Lclose(nil, v_210);
    env = stack[-6];
    v_210 = stack[-5];
    setvalue(basic_elt(env, 1), v_210); // !*echo
    v_210 = qvalue(basic_elt(env, 14)); // ipl!*
    if (v_210 == nil) goto v_177;
    else goto v_178;
v_177:
    v_210 = qvalue(basic_elt(env, 15)); // contl!*
    goto v_176;
v_178:
    v_210 = nil;
    goto v_176;
    v_210 = nil;
v_176:
    if (v_210 == nil) goto v_174;
    v_210 = nil;
    goto v_13;
v_174:
    v_210 = qvalue(basic_elt(env, 14)); // ipl!*
    if (v_210 == nil) goto v_189;
    else goto v_190;
v_189:
    v_210 = lisp_true;
    goto v_188;
v_190:
    v_211 = stack[-4];
    v_210 = qvalue(basic_elt(env, 14)); // ipl!*
    if (!car_legal(v_210)) v_210 = carerror(v_210); else
    v_210 = car(v_210);
    if (!car_legal(v_210)) v_210 = carerror(v_210); else
    v_210 = car(v_210);
    v_210 = (v_211 == v_210 ? lisp_true : nil);
    v_210 = (v_210 == nil ? lisp_true : nil);
    goto v_188;
    v_210 = nil;
v_188:
    if (v_210 == nil) goto v_186;
    v_212 = basic_elt(env, 16); // "FILE STACK CONFUSION"
    v_211 = stack[-4];
    v_210 = qvalue(basic_elt(env, 14)); // ipl!*
    v_210 = list3(v_212, v_211, v_210);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 25); // rederr
    v_210 = (*qfn1(fn))(fn, v_210);
    }
    goto v_172;
v_186:
    v_210 = qvalue(basic_elt(env, 14)); // ipl!*
    if (!car_legal(v_210)) v_210 = cdrerror(v_210); else
    v_210 = cdr(v_210);
    setvalue(basic_elt(env, 14), v_210); // ipl!*
    goto v_172;
v_172:
    v_210 = nil;
v_13:
    return onevalue(v_210);
}



// Code for formboollis

static LispObject CC_formboollis(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_44, v_45, v_46;
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
v_12:
    v_44 = stack[-3];
    if (v_44 == nil) goto v_15;
    else goto v_16;
v_15:
    goto v_11;
v_16:
    v_44 = stack[0];
    if (v_44 == nil) goto v_22;
    v_44 = stack[-3];
    if (!car_legal(v_44)) v_46 = carerror(v_44); else
    v_46 = car(v_44);
    v_45 = stack[-2];
    v_44 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // formbool
    v_45 = (*qfn3(fn))(fn, v_46, v_45, v_44);
    }
    env = stack[-5];
    v_44 = stack[-4];
    v_44 = cons(v_45, v_44);
    env = stack[-5];
    stack[-4] = v_44;
    goto v_20;
v_22:
    v_44 = stack[-3];
    if (!car_legal(v_44)) v_46 = carerror(v_44); else
    v_46 = car(v_44);
    v_45 = stack[-2];
    v_44 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // formc!*
    v_45 = (*qfn3(fn))(fn, v_46, v_45, v_44);
    }
    env = stack[-5];
    v_44 = stack[-4];
    v_44 = cons(v_45, v_44);
    env = stack[-5];
    stack[-4] = v_44;
    goto v_20;
v_20:
    v_44 = stack[-3];
    if (!car_legal(v_44)) v_44 = cdrerror(v_44); else
    v_44 = cdr(v_44);
    stack[-3] = v_44;
    goto v_12;
v_11:
    v_44 = stack[-4];
    {
        LispObject fn = basic_elt(env, 3); // reversip!*
        return (*qfn1(fn))(fn, v_44);
    }
    return onevalue(v_44);
}



// Code for talp_specsubt

static LispObject CC_talp_specsubt(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_78, v_79, v_80;
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
    stack[0] = v_4;
    stack[-4] = v_3;
    stack[-5] = v_2;
// end of prologue
    v_78 = stack[0];
    if (!consp(v_78)) goto v_11;
    else goto v_12;
v_11:
    v_79 = stack[0];
    v_78 = stack[-5];
    if (v_79 == v_78) goto v_16;
    else goto v_17;
v_16:
    v_78 = stack[-4];
    goto v_15;
v_17:
    v_78 = stack[0];
    goto v_15;
    v_78 = nil;
v_15:
    goto v_8;
v_12:
    v_79 = stack[-5];
    v_78 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // talp_eqtp
    v_78 = (*qfn2(fn))(fn, v_79, v_78);
    }
    env = stack[-7];
    if (v_78 == nil) goto v_27;
    v_78 = stack[-4];
    goto v_8;
v_27:
    v_78 = stack[0];
    if (!car_legal(v_78)) stack[-6] = carerror(v_78); else
    stack[-6] = car(v_78);
    v_78 = stack[0];
    if (!car_legal(v_78)) v_78 = cdrerror(v_78); else
    v_78 = cdr(v_78);
    stack[-3] = v_78;
    v_78 = stack[-3];
    if (v_78 == nil) goto v_45;
    else goto v_46;
v_45:
    v_78 = nil;
    goto v_39;
v_46:
    v_78 = stack[-3];
    if (!car_legal(v_78)) v_78 = carerror(v_78); else
    v_78 = car(v_78);
    v_80 = stack[-5];
    v_79 = stack[-4];
    {   LispObject fn = basic_elt(env, 0); // talp_specsubt
    v_78 = (*qfn3(fn))(fn, v_80, v_79, v_78);
    }
    env = stack[-7];
    v_78 = ncons(v_78);
    env = stack[-7];
    stack[-1] = v_78;
    stack[-2] = v_78;
v_40:
    v_78 = stack[-3];
    if (!car_legal(v_78)) v_78 = cdrerror(v_78); else
    v_78 = cdr(v_78);
    stack[-3] = v_78;
    v_78 = stack[-3];
    if (v_78 == nil) goto v_61;
    else goto v_62;
v_61:
    v_78 = stack[-2];
    goto v_39;
v_62:
    stack[0] = stack[-1];
    v_78 = stack[-3];
    if (!car_legal(v_78)) v_78 = carerror(v_78); else
    v_78 = car(v_78);
    v_80 = stack[-5];
    v_79 = stack[-4];
    {   LispObject fn = basic_elt(env, 0); // talp_specsubt
    v_78 = (*qfn3(fn))(fn, v_80, v_79, v_78);
    }
    env = stack[-7];
    v_78 = ncons(v_78);
    env = stack[-7];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_78);
    v_78 = stack[-1];
    if (!car_legal(v_78)) v_78 = cdrerror(v_78); else
    v_78 = cdr(v_78);
    stack[-1] = v_78;
    goto v_40;
v_39:
    {
        LispObject v_88 = stack[-6];
        return cons(v_88, v_78);
    }
v_8:
    return onevalue(v_78);
}



// Code for multiminus

static LispObject CC_multiminus(LispObject env,
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
// space for vars preserved across procedure calls
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_20 = stack[0];
    if (!car_legal(v_20)) v_20 = carerror(v_20); else
    v_20 = car(v_20);
    {   LispObject fn = basic_elt(env, 1); // expression
    v_20 = (*qfn1(fn))(fn, v_20);
    }
    env = stack[-1];
    v_20 = stack[0];
    v_21 = Llength(nil, v_20);
    env = stack[-1];
    v_20 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    if (v_21 == v_20) goto v_11;
    else goto v_12;
v_11:
    v_20 = stack[0];
    if (!car_legal(v_20)) v_20 = cdrerror(v_20); else
    v_20 = cdr(v_20);
    if (!car_legal(v_20)) v_20 = carerror(v_20); else
    v_20 = car(v_20);
    {   LispObject fn = basic_elt(env, 1); // expression
    v_20 = (*qfn1(fn))(fn, v_20);
    }
    goto v_10;
v_12:
v_10:
    v_20 = nil;
    return onevalue(v_20);
}



// Code for dm!-min

static LispObject CC_dmKmin(LispObject env,
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
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    v_17 = stack[-1];
    v_16 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // dm!-gt
    v_16 = (*qfn2(fn))(fn, v_17, v_16);
    }
    if (v_16 == nil) goto v_8;
    v_16 = stack[0];
    goto v_6;
v_8:
    v_16 = stack[-1];
    goto v_6;
    v_16 = nil;
v_6:
    return onevalue(v_16);
}



// Code for indxchk

static LispObject CC_indxchk(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    v_65 = v_2;
// end of prologue
    stack[-1] = v_65;
    v_66 = qvalue(basic_elt(env, 1)); // indxl!*
    v_65 = qvalue(basic_elt(env, 2)); // nosuml!*
    {   LispObject fn = basic_elt(env, 3); // union
    v_65 = (*qfn2(fn))(fn, v_66, v_65);
    }
    env = stack[-2];
    stack[0] = v_65;
v_8:
    v_65 = stack[-1];
    if (v_65 == nil) goto v_15;
    else goto v_16;
v_15:
    v_65 = nil;
    goto v_7;
v_16:
    v_65 = stack[-1];
    if (!car_legal(v_65)) v_65 = carerror(v_65); else
    v_65 = car(v_65);
    if (!consp(v_65)) goto v_25;
    else goto v_26;
v_25:
    v_65 = stack[-1];
    if (!car_legal(v_65)) v_65 = carerror(v_65); else
    v_65 = car(v_65);
    if (is_number(v_65)) goto v_31;
    else goto v_32;
v_31:
    v_65 = stack[-1];
    if (!car_legal(v_65)) v_65 = carerror(v_65); else
    v_65 = car(v_65);
    v_65 = Labsval(nil, v_65);
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 4); // !*num2id
    v_65 = (*qfn1(fn))(fn, v_65);
    }
    env = stack[-2];
    goto v_30;
v_32:
    v_65 = stack[-1];
    if (!car_legal(v_65)) v_65 = carerror(v_65); else
    v_65 = car(v_65);
    goto v_30;
    v_65 = nil;
v_30:
    v_66 = v_65;
    goto v_24;
v_26:
    v_65 = stack[-1];
    if (!car_legal(v_65)) v_65 = carerror(v_65); else
    v_65 = car(v_65);
    if (!car_legal(v_65)) v_65 = cdrerror(v_65); else
    v_65 = cdr(v_65);
    if (!car_legal(v_65)) v_65 = carerror(v_65); else
    v_65 = car(v_65);
    if (is_number(v_65)) goto v_43;
    else goto v_44;
v_43:
    v_65 = stack[-1];
    if (!car_legal(v_65)) v_65 = carerror(v_65); else
    v_65 = car(v_65);
    if (!car_legal(v_65)) v_65 = cdrerror(v_65); else
    v_65 = cdr(v_65);
    if (!car_legal(v_65)) v_65 = carerror(v_65); else
    v_65 = car(v_65);
    {   LispObject fn = basic_elt(env, 4); // !*num2id
    v_65 = (*qfn1(fn))(fn, v_65);
    }
    env = stack[-2];
    v_66 = v_65;
    goto v_24;
v_44:
    v_65 = stack[-1];
    if (!car_legal(v_65)) v_65 = carerror(v_65); else
    v_65 = car(v_65);
    if (!car_legal(v_65)) v_65 = cdrerror(v_65); else
    v_65 = cdr(v_65);
    if (!car_legal(v_65)) v_65 = carerror(v_65); else
    v_65 = car(v_65);
    v_66 = v_65;
    goto v_24;
    v_66 = nil;
v_24:
    v_65 = stack[0];
    v_65 = Lmemq(nil, v_66, v_65);
    if (v_65 == nil) goto v_21;
    else goto v_22;
v_21:
    v_65 = lisp_true;
    goto v_7;
v_22:
    v_65 = stack[-1];
    if (!car_legal(v_65)) v_65 = cdrerror(v_65); else
    v_65 = cdr(v_65);
    stack[-1] = v_65;
    goto v_8;
v_7:
    return onevalue(v_65);
}



// Code for incident

static LispObject CC_incident(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    stack[-1] = v_4;
    stack[0] = v_3;
    stack[-2] = v_2;
// end of prologue
v_1:
    v_37 = stack[0];
    if (v_37 == nil) goto v_8;
    else goto v_9;
v_8:
    v_37 = nil;
    goto v_7;
v_9:
    v_39 = stack[-2];
    v_37 = stack[0];
    if (!car_legal(v_37)) v_38 = carerror(v_37); else
    v_38 = car(v_37);
    v_37 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // incident1
    v_37 = (*qfn3(fn))(fn, v_39, v_38, v_37);
    }
    env = stack[-3];
    v_38 = v_37;
    v_37 = v_38;
    if (v_37 == nil) goto v_23;
    v_37 = stack[0];
    if (!car_legal(v_37)) v_37 = cdrerror(v_37); else
    v_37 = cdr(v_37);
    return cons(v_38, v_37);
v_23:
    v_37 = stack[0];
    if (!car_legal(v_37)) stack[0] = cdrerror(v_37); else
    stack[0] = cdr(v_37);
    v_37 = stack[-1];
    v_37 = add1(v_37);
    env = stack[-3];
    stack[-1] = v_37;
    goto v_1;
    v_37 = nil;
    goto v_7;
    v_37 = nil;
v_7:
    return onevalue(v_37);
}



// Code for simp!-prop1

static LispObject CC_simpKprop1(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_305, v_306, v_307;
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
v_1:
    v_305 = stack[-4];
    if (!consp(v_305)) goto v_12;
    else goto v_13;
v_12:
    goto v_8;
v_13:
    v_305 = stack[-4];
    if (!car_legal(v_305)) v_306 = carerror(v_305); else
    v_306 = car(v_305);
    v_305 = qvalue(basic_elt(env, 1)); // !'and
    if (equal(v_306, v_305)) goto v_22;
    else goto v_23;
v_22:
    v_305 = stack[-3];
    goto v_21;
v_23:
    v_305 = nil;
    goto v_21;
    v_305 = nil;
v_21:
    if (v_305 == nil) goto v_19;
    else goto v_17;
v_19:
    v_305 = stack[-4];
    if (!car_legal(v_305)) v_306 = carerror(v_305); else
    v_306 = car(v_305);
    v_305 = qvalue(basic_elt(env, 2)); // !'or
    if (equal(v_306, v_305)) goto v_34;
    else goto v_35;
v_34:
    v_305 = stack[-3];
    v_305 = (v_305 == nil ? lisp_true : nil);
    goto v_33;
v_35:
    v_305 = nil;
    goto v_33;
    v_305 = nil;
v_33:
    if (v_305 == nil) goto v_31;
    else goto v_17;
v_31:
    goto v_18;
v_17:
    v_305 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[0] = v_305;
    v_305 = stack[-4];
    if (!car_legal(v_305)) v_305 = cdrerror(v_305); else
    v_305 = cdr(v_305);
    stack[-1] = v_305;
v_48:
    v_305 = stack[-1];
    if (v_305 == nil) goto v_53;
    else goto v_54;
v_53:
    goto v_47;
v_54:
    v_305 = stack[-1];
    if (!car_legal(v_305)) v_305 = carerror(v_305); else
    v_305 = car(v_305);
    v_306 = v_305;
    v_305 = stack[-3];
    {   LispObject fn = basic_elt(env, 0); // simp!-prop1
    v_305 = (*qfn2(fn))(fn, v_306, v_305);
    }
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 16); // multf
    v_305 = (*qfn2(fn))(fn, stack[0], v_305);
    }
    env = stack[-6];
    stack[0] = v_305;
    v_305 = stack[-1];
    if (!car_legal(v_305)) v_305 = cdrerror(v_305); else
    v_305 = cdr(v_305);
    stack[-1] = v_305;
    goto v_48;
v_47:
    goto v_16;
v_18:
    v_305 = stack[-4];
    if (!car_legal(v_305)) v_306 = carerror(v_305); else
    v_306 = car(v_305);
    v_305 = qvalue(basic_elt(env, 2)); // !'or
    if (equal(v_306, v_305)) goto v_72;
    else goto v_73;
v_72:
    v_305 = stack[-3];
    goto v_71;
v_73:
    v_305 = nil;
    goto v_71;
    v_305 = nil;
v_71:
    if (v_305 == nil) goto v_69;
    else goto v_67;
v_69:
    v_305 = stack[-4];
    if (!car_legal(v_305)) v_306 = carerror(v_305); else
    v_306 = car(v_305);
    v_305 = qvalue(basic_elt(env, 1)); // !'and
    if (equal(v_306, v_305)) goto v_84;
    else goto v_85;
v_84:
    v_305 = stack[-3];
    v_305 = (v_305 == nil ? lisp_true : nil);
    goto v_83;
v_85:
    v_305 = nil;
    goto v_83;
    v_305 = nil;
v_83:
    if (v_305 == nil) goto v_81;
    else goto v_67;
v_81:
    goto v_68;
v_67:
    v_305 = nil;
    stack[0] = v_305;
    v_305 = stack[-4];
    if (!car_legal(v_305)) v_305 = cdrerror(v_305); else
    v_305 = cdr(v_305);
    stack[-1] = v_305;
v_98:
    v_305 = stack[-1];
    if (v_305 == nil) goto v_103;
    else goto v_104;
v_103:
    goto v_97;
v_104:
    v_305 = stack[-1];
    if (!car_legal(v_305)) v_305 = carerror(v_305); else
    v_305 = car(v_305);
    v_306 = v_305;
    v_305 = stack[-3];
    {   LispObject fn = basic_elt(env, 0); // simp!-prop1
    v_305 = (*qfn2(fn))(fn, v_306, v_305);
    }
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 17); // addf
    v_305 = (*qfn2(fn))(fn, stack[0], v_305);
    }
    env = stack[-6];
    stack[0] = v_305;
    v_305 = stack[-1];
    if (!car_legal(v_305)) v_305 = cdrerror(v_305); else
    v_305 = cdr(v_305);
    stack[-1] = v_305;
    goto v_98;
v_97:
    goto v_16;
v_68:
    v_305 = stack[-4];
    if (!car_legal(v_305)) v_306 = carerror(v_305); else
    v_306 = car(v_305);
    v_305 = basic_elt(env, 3); // not
    if (v_306 == v_305) goto v_117;
    else goto v_118;
v_117:
    v_305 = stack[-4];
    if (!car_legal(v_305)) v_305 = cdrerror(v_305); else
    v_305 = cdr(v_305);
    if (!car_legal(v_305)) v_306 = carerror(v_305); else
    v_306 = car(v_305);
    v_305 = stack[-3];
    v_305 = (v_305 == nil ? lisp_true : nil);
    {   LispObject fn = basic_elt(env, 0); // simp!-prop1
    v_305 = (*qfn2(fn))(fn, v_306, v_305);
    }
    stack[0] = v_305;
    goto v_16;
v_118:
    v_305 = stack[-4];
    if (!car_legal(v_305)) v_306 = carerror(v_305); else
    v_306 = car(v_305);
    v_305 = basic_elt(env, 4); // implies
    if (v_306 == v_305) goto v_128;
    else goto v_129;
v_128:
    v_305 = stack[-3];
    if (v_305 == nil) goto v_136;
    stack[0] = basic_elt(env, 5); // or
    v_306 = basic_elt(env, 3); // not
    v_305 = stack[-4];
    if (!car_legal(v_305)) v_305 = cdrerror(v_305); else
    v_305 = cdr(v_305);
    if (!car_legal(v_305)) v_305 = carerror(v_305); else
    v_305 = car(v_305);
    v_306 = list2(v_306, v_305);
    env = stack[-6];
    v_305 = stack[-4];
    if (!car_legal(v_305)) v_305 = cdrerror(v_305); else
    v_305 = cdr(v_305);
    if (!car_legal(v_305)) v_305 = cdrerror(v_305); else
    v_305 = cdr(v_305);
    if (!car_legal(v_305)) v_305 = carerror(v_305); else
    v_305 = car(v_305);
    v_306 = list3(stack[0], v_306, v_305);
    env = stack[-6];
    v_305 = lisp_true;
    {   LispObject fn = basic_elt(env, 0); // simp!-prop1
    v_305 = (*qfn2(fn))(fn, v_306, v_305);
    }
    stack[0] = v_305;
    goto v_134;
v_136:
    stack[0] = basic_elt(env, 5); // or
    v_306 = basic_elt(env, 3); // not
    v_305 = stack[-4];
    if (!car_legal(v_305)) v_305 = cdrerror(v_305); else
    v_305 = cdr(v_305);
    if (!car_legal(v_305)) v_305 = cdrerror(v_305); else
    v_305 = cdr(v_305);
    if (!car_legal(v_305)) v_305 = carerror(v_305); else
    v_305 = car(v_305);
    v_306 = list2(v_306, v_305);
    env = stack[-6];
    v_305 = stack[-4];
    if (!car_legal(v_305)) v_305 = cdrerror(v_305); else
    v_305 = cdr(v_305);
    if (!car_legal(v_305)) v_305 = carerror(v_305); else
    v_305 = car(v_305);
    v_306 = list3(stack[0], v_306, v_305);
    env = stack[-6];
    v_305 = lisp_true;
    {   LispObject fn = basic_elt(env, 0); // simp!-prop1
    v_305 = (*qfn2(fn))(fn, v_306, v_305);
    }
    stack[0] = v_305;
    goto v_134;
v_134:
    goto v_16;
v_129:
    v_305 = stack[-4];
    if (!car_legal(v_305)) v_306 = carerror(v_305); else
    v_306 = car(v_305);
    v_305 = basic_elt(env, 6); // equiv
    if (v_306 == v_305) goto v_166;
    else goto v_167;
v_166:
    stack[-5] = basic_elt(env, 5); // or
    v_307 = basic_elt(env, 7); // and
    v_305 = stack[-4];
    if (!car_legal(v_305)) v_305 = cdrerror(v_305); else
    v_305 = cdr(v_305);
    if (!car_legal(v_305)) v_306 = carerror(v_305); else
    v_306 = car(v_305);
    v_305 = stack[-4];
    if (!car_legal(v_305)) v_305 = cdrerror(v_305); else
    v_305 = cdr(v_305);
    if (!car_legal(v_305)) v_305 = cdrerror(v_305); else
    v_305 = cdr(v_305);
    if (!car_legal(v_305)) v_305 = carerror(v_305); else
    v_305 = car(v_305);
    stack[-2] = list3(v_307, v_306, v_305);
    env = stack[-6];
    stack[-1] = basic_elt(env, 7); // and
    v_306 = basic_elt(env, 3); // not
    v_305 = stack[-4];
    if (!car_legal(v_305)) v_305 = cdrerror(v_305); else
    v_305 = cdr(v_305);
    if (!car_legal(v_305)) v_305 = carerror(v_305); else
    v_305 = car(v_305);
    stack[0] = list2(v_306, v_305);
    env = stack[-6];
    v_306 = basic_elt(env, 3); // not
    v_305 = stack[-4];
    if (!car_legal(v_305)) v_305 = cdrerror(v_305); else
    v_305 = cdr(v_305);
    if (!car_legal(v_305)) v_305 = cdrerror(v_305); else
    v_305 = cdr(v_305);
    if (!car_legal(v_305)) v_305 = carerror(v_305); else
    v_305 = car(v_305);
    v_305 = list2(v_306, v_305);
    env = stack[-6];
    v_305 = list3(stack[-1], stack[0], v_305);
    env = stack[-6];
    v_306 = list3(stack[-5], stack[-2], v_305);
    env = stack[-6];
    v_305 = stack[-3];
    {   LispObject fn = basic_elt(env, 0); // simp!-prop1
    v_305 = (*qfn2(fn))(fn, v_306, v_305);
    }
    stack[0] = v_305;
    goto v_16;
v_167:
    goto v_9;
v_16:
    v_305 = stack[0];
    goto v_7;
v_8:
    v_306 = stack[-4];
    v_305 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_306 == v_305) goto v_206;
    else goto v_207;
v_206:
    v_305 = lisp_true;
    goto v_205;
v_207:
    v_306 = stack[-4];
    v_305 = lisp_true;
    if (equal(v_306, v_305)) goto v_215;
    else goto v_216;
v_215:
    v_305 = lisp_true;
    goto v_214;
v_216:
    v_306 = stack[-4];
    v_305 = basic_elt(env, 8); // true
    v_305 = (v_306 == v_305 ? lisp_true : nil);
    goto v_214;
    v_305 = nil;
v_214:
    goto v_205;
    v_305 = nil;
v_205:
    if (v_305 == nil) goto v_203;
    v_305 = stack[-3];
    stack[-4] = v_305;
    goto v_201;
v_203:
    v_306 = stack[-4];
    v_305 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_306 == v_305) goto v_230;
    else goto v_231;
v_230:
    v_305 = lisp_true;
    goto v_229;
v_231:
    v_305 = stack[-4];
    if (v_305 == nil) goto v_239;
    else goto v_240;
v_239:
    v_305 = lisp_true;
    goto v_238;
v_240:
    v_306 = stack[-4];
    v_305 = basic_elt(env, 9); // false
    v_305 = (v_306 == v_305 ? lisp_true : nil);
    goto v_238;
    v_305 = nil;
v_238:
    goto v_229;
    v_305 = nil;
v_229:
    if (v_305 == nil) goto v_227;
    v_305 = stack[-3];
    v_305 = (v_305 == nil ? lisp_true : nil);
    stack[-4] = v_305;
    goto v_201;
v_227:
v_201:
    v_306 = stack[-4];
    v_305 = lisp_true;
    if (equal(v_306, v_305)) goto v_252;
    else goto v_253;
v_252:
    v_306 = basic_elt(env, 10); // (or !*true (not !*true))
    v_305 = lisp_true;
    stack[-4] = v_306;
    stack[-3] = v_305;
    goto v_1;
v_253:
    v_305 = stack[-4];
    if (v_305 == nil) goto v_261;
    else goto v_262;
v_261:
    v_306 = basic_elt(env, 11); // (and !*true (not !*true))
    v_305 = lisp_true;
    stack[-4] = v_306;
    stack[-3] = v_305;
    goto v_1;
v_262:
v_9:
    v_305 = stack[-4];
    {   LispObject fn = basic_elt(env, 18); // reval
    v_305 = (*qfn1(fn))(fn, v_305);
    }
    env = stack[-6];
    stack[-4] = v_305;
    v_306 = stack[-4];
    v_305 = basic_elt(env, 12); // boolean
    if (!consp(v_306)) goto v_272;
    v_306 = car(v_306);
    if (v_306 == v_305) goto v_271;
    else goto v_272;
v_271:
    v_305 = stack[-4];
    if (!car_legal(v_305)) v_305 = cdrerror(v_305); else
    v_305 = cdr(v_305);
    if (!car_legal(v_305)) v_306 = carerror(v_305); else
    v_306 = car(v_305);
    v_305 = stack[-3];
    stack[-4] = v_306;
    stack[-3] = v_305;
    goto v_1;
v_272:
    v_305 = stack[-3];
    if (v_305 == nil) goto v_286;
    v_305 = basic_elt(env, 13); // prop!*
    v_306 = v_305;
    goto v_284;
v_286:
    v_305 = basic_elt(env, 14); // not_prop!*
    v_306 = v_305;
    goto v_284;
    v_306 = nil;
v_284:
    v_305 = stack[-4];
    v_305 = list2(v_306, v_305);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 19); // simp
    v_305 = (*qfn1(fn))(fn, v_305);
    }
    env = stack[-6];
    if (!car_legal(v_305)) v_305 = carerror(v_305); else
    v_305 = car(v_305);
    stack[0] = v_305;
    v_306 = stack[-4];
    v_305 = qvalue(basic_elt(env, 15)); // propvars!*
    v_305 = Lmember(nil, v_306, v_305);
    if (v_305 == nil) goto v_296;
    else goto v_297;
v_296:
    v_306 = stack[-4];
    v_305 = qvalue(basic_elt(env, 15)); // propvars!*
    v_305 = cons(v_306, v_305);
    env = stack[-6];
    setvalue(basic_elt(env, 15), v_305); // propvars!*
    goto v_295;
v_297:
v_295:
    v_305 = stack[0];
v_7:
    return onevalue(v_305);
}



// Code for !*di2q

static LispObject CC_Hdi2q(LispObject env,
                         LispObject v_3, LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_59, v_60, v_61;
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
    v_59 = v_4;
    v_60 = v_3;
// end of prologue
// Binding varlist!*
// FLUIDBIND: reloadenv=5 litvec-offset=1 saveloc=4
{   bind_fluid_stack bind_fluid_var(-5, 1, -4);
    setvalue(basic_elt(env, 1), v_59); // varlist!*
    v_59 = v_60;
    stack[-3] = v_59;
    v_59 = stack[-3];
    if (v_59 == nil) goto v_21;
    else goto v_22;
v_21:
    v_59 = nil;
    v_60 = v_59;
    goto v_16;
v_22:
    v_59 = stack[-3];
    if (!car_legal(v_59)) v_59 = carerror(v_59); else
    v_59 = car(v_59);
    v_60 = v_59;
    if (!car_legal(v_60)) v_61 = carerror(v_60); else
    v_61 = car(v_60);
    if (!car_legal(v_59)) v_60 = cdrerror(v_59); else
    v_60 = cdr(v_59);
    v_59 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_59 = list2star(v_61, v_60, v_59);
    env = stack[-5];
    v_59 = ncons(v_59);
    env = stack[-5];
    stack[-1] = v_59;
    stack[-2] = v_59;
v_17:
    v_59 = stack[-3];
    if (!car_legal(v_59)) v_59 = cdrerror(v_59); else
    v_59 = cdr(v_59);
    stack[-3] = v_59;
    v_59 = stack[-3];
    if (v_59 == nil) goto v_39;
    else goto v_40;
v_39:
    v_59 = stack[-2];
    v_60 = v_59;
    goto v_16;
v_40:
    stack[0] = stack[-1];
    v_59 = stack[-3];
    if (!car_legal(v_59)) v_59 = carerror(v_59); else
    v_59 = car(v_59);
    v_60 = v_59;
    if (!car_legal(v_60)) v_61 = carerror(v_60); else
    v_61 = car(v_60);
    if (!car_legal(v_59)) v_60 = cdrerror(v_59); else
    v_60 = cdr(v_59);
    v_59 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_59 = list2star(v_61, v_60, v_59);
    env = stack[-5];
    v_59 = ncons(v_59);
    env = stack[-5];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_59);
    v_59 = stack[-1];
    if (!car_legal(v_59)) v_59 = cdrerror(v_59); else
    v_59 = cdr(v_59);
    stack[-1] = v_59;
    goto v_17;
v_16:
    v_59 = qvalue(basic_elt(env, 1)); // varlist!*
    {   LispObject fn = basic_elt(env, 2); // !*di2q0
    v_59 = (*qfn2(fn))(fn, v_60, v_59);
    }
    ;}  // end of a binding scope
    return onevalue(v_59);
}



// Code for st_ad_numsorttree

static LispObject CC_st_ad_numsorttree(LispObject env,
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
    v_15 = v_2;
// end of prologue
    {   LispObject fn = basic_elt(env, 1); // st_ad_numsorttree1
    v_15 = (*qfn1(fn))(fn, v_15);
    }
    v_16 = v_15;
    if (!car_legal(v_16)) v_16 = carerror(v_16); else
    v_16 = car(v_16);
    if (!car_legal(v_15)) v_15 = cdrerror(v_15); else
    v_15 = cdr(v_15);
    if (!car_legal(v_15)) v_15 = carerror(v_15); else
    v_15 = car(v_15);
    return cons(v_16, v_15);
    return onevalue(v_15);
}



// Code for expand_rule

static LispObject CC_expand_rule(LispObject env,
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
    real_push(nil, nil, nil, nil, nil);
    real_push(nil, nil, nil, nil, nil);
    stack_popper stack_popper_var(11);
// copy arguments values to proper place
    v_124 = v_2;
// end of prologue
    v_123 = v_124;
    if (!car_legal(v_123)) stack[-9] = carerror(v_123); else
    stack[-9] = car(v_123);
    v_123 = v_124;
    if (!car_legal(v_123)) v_123 = cdrerror(v_123); else
    v_123 = cdr(v_123);
    stack[-8] = v_123;
    v_123 = stack[-8];
    if (v_123 == nil) goto v_17;
    else goto v_18;
v_17:
    v_123 = nil;
    goto v_11;
v_18:
    v_123 = stack[-8];
    if (!car_legal(v_123)) v_123 = carerror(v_123); else
    v_123 = car(v_123);
    stack[-4] = v_123;
    v_123 = stack[-4];
    if (!car_legal(v_123)) v_123 = carerror(v_123); else
    v_123 = car(v_123);
    stack[-3] = v_123;
    v_123 = stack[-3];
    if (v_123 == nil) goto v_36;
    else goto v_37;
v_36:
    v_123 = nil;
    v_124 = v_123;
    goto v_30;
v_37:
    v_123 = stack[-3];
    if (!car_legal(v_123)) v_123 = carerror(v_123); else
    v_123 = car(v_123);
    {   LispObject fn = basic_elt(env, 1); // expand_terminal
    v_123 = (*qfn1(fn))(fn, v_123);
    }
    env = stack[-10];
    v_123 = ncons(v_123);
    env = stack[-10];
    stack[-1] = v_123;
    stack[-2] = v_123;
v_31:
    v_123 = stack[-3];
    if (!car_legal(v_123)) v_123 = cdrerror(v_123); else
    v_123 = cdr(v_123);
    stack[-3] = v_123;
    v_123 = stack[-3];
    if (v_123 == nil) goto v_50;
    else goto v_51;
v_50:
    v_123 = stack[-2];
    v_124 = v_123;
    goto v_30;
v_51:
    stack[0] = stack[-1];
    v_123 = stack[-3];
    if (!car_legal(v_123)) v_123 = carerror(v_123); else
    v_123 = car(v_123);
    {   LispObject fn = basic_elt(env, 1); // expand_terminal
    v_123 = (*qfn1(fn))(fn, v_123);
    }
    env = stack[-10];
    v_123 = ncons(v_123);
    env = stack[-10];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_123);
    v_123 = stack[-1];
    if (!car_legal(v_123)) v_123 = cdrerror(v_123); else
    v_123 = cdr(v_123);
    stack[-1] = v_123;
    goto v_31;
v_30:
    v_123 = stack[-4];
    if (!car_legal(v_123)) v_123 = cdrerror(v_123); else
    v_123 = cdr(v_123);
    v_123 = cons(v_124, v_123);
    env = stack[-10];
    v_123 = ncons(v_123);
    env = stack[-10];
    stack[-6] = v_123;
    stack[-7] = v_123;
v_12:
    v_123 = stack[-8];
    if (!car_legal(v_123)) v_123 = cdrerror(v_123); else
    v_123 = cdr(v_123);
    stack[-8] = v_123;
    v_123 = stack[-8];
    if (v_123 == nil) goto v_70;
    else goto v_71;
v_70:
    v_123 = stack[-7];
    goto v_11;
v_71:
    stack[-5] = stack[-6];
    v_123 = stack[-8];
    if (!car_legal(v_123)) v_123 = carerror(v_123); else
    v_123 = car(v_123);
    stack[-4] = v_123;
    v_123 = stack[-4];
    if (!car_legal(v_123)) v_123 = carerror(v_123); else
    v_123 = car(v_123);
    stack[-3] = v_123;
    v_123 = stack[-3];
    if (v_123 == nil) goto v_90;
    else goto v_91;
v_90:
    v_123 = nil;
    v_124 = v_123;
    goto v_84;
v_91:
    v_123 = stack[-3];
    if (!car_legal(v_123)) v_123 = carerror(v_123); else
    v_123 = car(v_123);
    {   LispObject fn = basic_elt(env, 1); // expand_terminal
    v_123 = (*qfn1(fn))(fn, v_123);
    }
    env = stack[-10];
    v_123 = ncons(v_123);
    env = stack[-10];
    stack[-1] = v_123;
    stack[-2] = v_123;
v_85:
    v_123 = stack[-3];
    if (!car_legal(v_123)) v_123 = cdrerror(v_123); else
    v_123 = cdr(v_123);
    stack[-3] = v_123;
    v_123 = stack[-3];
    if (v_123 == nil) goto v_104;
    else goto v_105;
v_104:
    v_123 = stack[-2];
    v_124 = v_123;
    goto v_84;
v_105:
    stack[0] = stack[-1];
    v_123 = stack[-3];
    if (!car_legal(v_123)) v_123 = carerror(v_123); else
    v_123 = car(v_123);
    {   LispObject fn = basic_elt(env, 1); // expand_terminal
    v_123 = (*qfn1(fn))(fn, v_123);
    }
    env = stack[-10];
    v_123 = ncons(v_123);
    env = stack[-10];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_123);
    v_123 = stack[-1];
    if (!car_legal(v_123)) v_123 = cdrerror(v_123); else
    v_123 = cdr(v_123);
    stack[-1] = v_123;
    goto v_85;
v_84:
    v_123 = stack[-4];
    if (!car_legal(v_123)) v_123 = cdrerror(v_123); else
    v_123 = cdr(v_123);
    v_123 = cons(v_124, v_123);
    env = stack[-10];
    v_123 = ncons(v_123);
    env = stack[-10];
    if (!car_legal(stack[-5])) rplacd_fails(stack[-5]);
    setcdr(stack[-5], v_123);
    v_123 = stack[-6];
    if (!car_legal(v_123)) v_123 = cdrerror(v_123); else
    v_123 = cdr(v_123);
    stack[-6] = v_123;
    goto v_12;
v_11:
    {
        LispObject v_135 = stack[-9];
        return cons(v_135, v_123);
    }
}



// Code for cl_susiupdknowl1

static LispObject CC_cl_susiupdknowl1(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_28, v_29, v_30;
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
    v_30 = v_3;
    v_28 = v_2;
// end of prologue
    v_29 = v_28;
    v_28 = basic_elt(env, 1); // and
    if (v_29 == v_28) goto v_9;
    else goto v_10;
v_9:
    v_29 = v_30;
    v_28 = stack[0];
    v_30 = cons(v_29, v_28);
    env = stack[-2];
    v_29 = stack[-1];
    v_28 = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // cl_susiupdknowl2
        return (*qfn3(fn))(fn, v_30, v_29, v_28);
    }
v_10:
    v_28 = v_30;
    {   LispObject fn = basic_elt(env, 3); // rl_negateat
    v_29 = (*qfn1(fn))(fn, v_28);
    }
    env = stack[-2];
    v_28 = stack[0];
    v_30 = cons(v_29, v_28);
    env = stack[-2];
    v_29 = stack[-1];
    v_28 = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // cl_susiupdknowl2
        return (*qfn3(fn))(fn, v_30, v_29, v_28);
    }
    v_28 = nil;
    return onevalue(v_28);
}



// Code for ev_max!#

static LispObject CC_ev_maxC(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_15, v_16, v_17, v_18;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_16 = v_3;
    v_17 = v_2;
// end of prologue
    v_18 = v_17;
    v_15 = v_16;
    if ((static_cast<std::intptr_t>(v_18) > static_cast<std::intptr_t>(v_15))) goto v_7;
    else goto v_8;
v_7:
    v_15 = v_17;
    goto v_6;
v_8:
    v_15 = v_16;
    goto v_6;
    v_15 = nil;
v_6:
    return onevalue(v_15);
}



// Code for containerml

static LispObject CC_containerml(LispObject env,
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
    v_36 = stack[0];
    v_35 = basic_elt(env, 1); // integer_interval
    if (v_36 == v_35) goto v_9;
    else goto v_10;
v_9:
    v_35 = basic_elt(env, 2); // interval
    stack[0] = v_35;
    goto v_8;
v_10:
v_8:
    v_35 = basic_elt(env, 3); // "<"
    {   LispObject fn = basic_elt(env, 7); // printout
    v_35 = (*qfn1(fn))(fn, v_35);
    }
    env = stack[-2];
    v_35 = stack[0];
    v_35 = Lprinc(nil, v_35);
    env = stack[-2];
    v_35 = stack[-1];
    if (!car_legal(v_35)) v_36 = carerror(v_35); else
    v_36 = car(v_35);
    v_35 = basic_elt(env, 4); // ""
    {   LispObject fn = basic_elt(env, 8); // attributesml
    v_35 = (*qfn2(fn))(fn, v_36, v_35);
    }
    env = stack[-2];
    v_35 = lisp_true;
    {   LispObject fn = basic_elt(env, 9); // indent!*
    v_35 = (*qfn1(fn))(fn, v_35);
    }
    env = stack[-2];
    v_35 = stack[-1];
    if (!car_legal(v_35)) v_35 = cdrerror(v_35); else
    v_35 = cdr(v_35);
    {   LispObject fn = basic_elt(env, 10); // multi_elem
    v_35 = (*qfn1(fn))(fn, v_35);
    }
    env = stack[-2];
    v_35 = nil;
    {   LispObject fn = basic_elt(env, 9); // indent!*
    v_35 = (*qfn1(fn))(fn, v_35);
    }
    env = stack[-2];
    v_35 = basic_elt(env, 5); // "</"
    {   LispObject fn = basic_elt(env, 7); // printout
    v_35 = (*qfn1(fn))(fn, v_35);
    }
    env = stack[-2];
    v_35 = stack[0];
    v_35 = Lprinc(nil, v_35);
    env = stack[-2];
    v_35 = basic_elt(env, 6); // ">"
    v_35 = Lprinc(nil, v_35);
    v_35 = nil;
    return onevalue(v_35);
}



// Code for ps!:constmult!-erule

static LispObject CC_psTconstmultKerule(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_16 = v_3;
    v_17 = v_2;
// end of prologue
    v_15 = v_17;
    if (!car_legal(v_15)) v_15 = cdrerror(v_15); else
    v_15 = cdr(v_15);
    if (!car_legal(v_15)) stack[0] = carerror(v_15); else
    stack[0] = car(v_15);
    v_15 = v_17;
    if (!car_legal(v_15)) v_15 = cdrerror(v_15); else
    v_15 = cdr(v_15);
    if (!car_legal(v_15)) v_15 = cdrerror(v_15); else
    v_15 = cdr(v_15);
    if (!car_legal(v_15)) v_15 = carerror(v_15); else
    v_15 = car(v_15);
    {   LispObject fn = basic_elt(env, 1); // ps!:evaluate
    v_15 = (*qfn2(fn))(fn, v_15, v_16);
    }
    env = stack[-1];
    {
        LispObject v_19 = stack[0];
        LispObject fn = basic_elt(env, 2); // multsq
        return (*qfn2(fn))(fn, v_19, v_15);
    }
}



// Code for mkempspmat

static LispObject CC_mkempspmat(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_14 = v_2;
// end of prologue
    stack[-1] = basic_elt(env, 1); // sparsemat
    v_15 = Lmkvect(nil, v_14);
    v_14 = stack[0];
    {
        LispObject v_18 = stack[-1];
        return list3(v_18, v_15, v_14);
    }
    return onevalue(v_14);
}



// Code for insoccs

static LispObject CC_insoccs(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_64 = stack[-1];
    if (symbolp(v_64)) goto v_9;
    v_64 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // subscriptedvarp
    v_64 = (*qfn1(fn))(fn, v_64);
    }
    env = stack[-2];
    if (v_64 == nil) goto v_14;
    else goto v_9;
v_14:
    v_64 = stack[-1];
    v_64 = Lconsp(nil, v_64);
    env = stack[-2];
    if (v_64 == nil) goto v_17;
    v_64 = stack[-1];
    if (!car_legal(v_64)) v_64 = carerror(v_64); else
    v_64 = car(v_64);
    {   LispObject fn = basic_elt(env, 1); // subscriptedvarp
    v_64 = (*qfn1(fn))(fn, v_64);
    }
    env = stack[-2];
    if (v_64 == nil) goto v_17;
    goto v_9;
v_17:
    goto v_10;
v_9:
    v_65 = stack[0];
    v_64 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // insertocc
    v_64 = (*qfn2(fn))(fn, v_65, v_64);
    }
    env = stack[-2];
    stack[0] = v_64;
    goto v_8;
v_10:
v_8:
    v_64 = stack[-1];
    if (symbolp(v_64)) goto v_35;
    v_64 = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // constp
    v_64 = (*qfn1(fn))(fn, v_64);
    }
    env = stack[-2];
    v_64 = (v_64 == nil ? lisp_true : nil);
    goto v_33;
v_35:
    v_64 = nil;
    goto v_33;
    v_64 = nil;
v_33:
    if (v_64 == nil) goto v_31;
    v_64 = stack[-1];
    if (!car_legal(v_64)) v_64 = cdrerror(v_64); else
    v_64 = cdr(v_64);
    stack[-1] = v_64;
v_46:
    v_64 = stack[-1];
    if (v_64 == nil) goto v_51;
    else goto v_52;
v_51:
    goto v_45;
v_52:
    v_64 = stack[-1];
    if (!car_legal(v_64)) v_64 = carerror(v_64); else
    v_64 = car(v_64);
    v_65 = v_64;
    v_64 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // insoccs
    v_64 = (*qfn2(fn))(fn, v_65, v_64);
    }
    env = stack[-2];
    stack[0] = v_64;
    v_64 = stack[-1];
    if (!car_legal(v_64)) v_64 = cdrerror(v_64); else
    v_64 = cdr(v_64);
    stack[-1] = v_64;
    goto v_46;
v_45:
    goto v_29;
v_31:
v_29:
    v_64 = stack[0];
    return onevalue(v_64);
}



// Code for module

static LispObject CC_module(LispObject env,
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
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_12 = v_2;
// end of prologue
    v_13 = qvalue(basic_elt(env, 1)); // !*mode
    v_12 = qvalue(basic_elt(env, 2)); // mode!-list!*
    v_12 = cons(v_13, v_12);
    env = stack[0];
    setvalue(basic_elt(env, 2), v_12); // mode!-list!*
    v_12 = nil;
    v_12 = ncons(v_12);
    env = stack[0];
    setvalue(basic_elt(env, 3), v_12); // alglist!*
    v_12 = basic_elt(env, 4); // symbolic
    setvalue(basic_elt(env, 1), v_12); // !*mode
    v_12 = nil;
    return onevalue(v_12);
}



// Code for !*xadd

static LispObject CC_Hxadd(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_40, v_41, v_42, v_43;
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
    v_43 = v_3;
    stack[0] = v_2;
// end of prologue
    v_40 = v_43;
    v_42 = v_40;
v_11:
    v_40 = v_42;
    if (v_40 == nil) goto v_14;
    v_40 = stack[0];
    if (!car_legal(v_40)) v_41 = carerror(v_40); else
    v_41 = car(v_40);
    v_40 = v_42;
    if (!car_legal(v_40)) v_40 = carerror(v_40); else
    v_40 = car(v_40);
    if (!car_legal(v_40)) v_40 = carerror(v_40); else
    v_40 = car(v_40);
    if (equal(v_41, v_40)) goto v_14;
    goto v_15;
v_14:
    goto v_10;
v_15:
    v_40 = v_42;
    if (!car_legal(v_40)) v_40 = cdrerror(v_40); else
    v_40 = cdr(v_40);
    v_42 = v_40;
    goto v_11;
v_10:
    v_40 = v_42;
    if (v_40 == nil) goto v_30;
    v_40 = v_42;
    if (!car_legal(v_40)) v_40 = carerror(v_40); else
    v_40 = car(v_40);
    v_41 = v_43;
    v_40 = Ldelete(nil, v_40, v_41);
    v_43 = v_40;
    goto v_28;
v_30:
v_28:
    v_40 = stack[0];
    v_41 = v_43;
    return cons(v_40, v_41);
    return onevalue(v_40);
}



// Code for chkrn!*

static LispObject CC_chkrnH(LispObject env,
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
    v_14 = qvalue(basic_elt(env, 1)); // !*!*roundbf
    if (v_14 == nil) goto v_7;
    v_14 = v_15;
    goto v_5;
v_7:
    v_14 = v_15;
    {
        LispObject fn = basic_elt(env, 2); // bf2flck
        return (*qfn1(fn))(fn, v_14);
    }
    v_14 = nil;
v_5:
    return onevalue(v_14);
}



// Code for !*a2f

static LispObject CC_Ha2f(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // simp!*
    v_7 = (*qfn1(fn))(fn, v_7);
    }
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // !*q2f
        return (*qfn1(fn))(fn, v_7);
    }
}



// Code for lalr_extract_nonterminals

static LispObject CC_lalr_extract_nonterminals(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_91, v_92, v_93;
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
    v_93 = nil;
v_7:
    v_91 = stack[-1];
    if (v_91 == nil) goto v_10;
    else goto v_11;
v_10:
    v_91 = v_93;
    {
        LispObject fn = basic_elt(env, 7); // nreverse
        return (*qfn1(fn))(fn, v_91);
    }
v_11:
    v_91 = stack[-1];
    if (!consp(v_91)) goto v_15;
    else goto v_16;
v_15:
    stack[0] = v_93;
    v_93 = basic_elt(env, 1); // "Malformed production"
    v_92 = stack[-1];
    v_91 = basic_elt(env, 2); // "(RHS should be a list of tokens, not a non-nil atom)"
    v_91 = list3(v_93, v_92, v_91);
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 8); // rederr
    v_91 = (*qfn1(fn))(fn, v_91);
    }
    env = stack[-3];
    {
        LispObject v_97 = stack[0];
        LispObject fn = basic_elt(env, 7); // nreverse
        return (*qfn2(fn))(fn, v_97, v_91);
    }
v_16:
    v_91 = stack[-1];
    if (!car_legal(v_91)) v_91 = carerror(v_91); else
    v_91 = car(v_91);
    v_91 = Lstringp(nil, v_91);
    env = stack[-3];
    if (v_91 == nil) goto v_26;
    v_91 = stack[-1];
    if (!car_legal(v_91)) v_91 = cdrerror(v_91); else
    v_91 = cdr(v_91);
    stack[-1] = v_91;
    goto v_7;
v_26:
    v_91 = stack[-1];
    if (!car_legal(v_91)) v_91 = carerror(v_91); else
    v_91 = car(v_91);
    if (symbolp(v_91)) goto v_32;
    else goto v_33;
v_32:
    v_91 = stack[-1];
    if (!car_legal(v_91)) v_92 = carerror(v_91); else
    v_92 = car(v_91);
    v_91 = basic_elt(env, 3); // lex_fixed_code
    v_91 = get(v_92, v_91);
    env = stack[-3];
    if (v_91 == nil) goto v_39;
    v_91 = stack[-1];
    if (!car_legal(v_91)) v_91 = cdrerror(v_91); else
    v_91 = cdr(v_91);
    stack[-1] = v_91;
    goto v_7;
v_39:
    v_91 = stack[-1];
    if (!car_legal(v_91)) v_91 = carerror(v_91); else
    v_91 = car(v_91);
    v_92 = v_93;
    v_91 = cons(v_91, v_92);
    env = stack[-3];
    v_93 = v_91;
    v_91 = stack[-1];
    if (!car_legal(v_91)) v_91 = cdrerror(v_91); else
    v_91 = cdr(v_91);
    stack[-1] = v_91;
    goto v_7;
    goto v_9;
v_33:
    v_91 = stack[-1];
    if (!car_legal(v_91)) v_91 = carerror(v_91); else
    v_91 = car(v_91);
    if (!consp(v_91)) goto v_54;
    else goto v_55;
v_54:
    stack[0] = v_93;
    v_93 = basic_elt(env, 1); // "Malformed production"
    v_92 = stack[-1];
    v_91 = basic_elt(env, 4); // "(atomic item in token list should be symbol or string)"
    v_91 = list3(v_93, v_92, v_91);
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 8); // rederr
    v_91 = (*qfn1(fn))(fn, v_91);
    }
    env = stack[-3];
    {
        LispObject v_98 = stack[0];
        LispObject fn = basic_elt(env, 7); // nreverse
        return (*qfn2(fn))(fn, v_98, v_91);
    }
v_55:
    v_91 = stack[-1];
    if (!car_legal(v_91)) v_91 = carerror(v_91); else
    v_91 = car(v_91);
    if (!car_legal(v_91)) v_92 = carerror(v_91); else
    v_92 = car(v_91);
    v_91 = basic_elt(env, 5); // (opt seq star plus list listplus or)
    v_91 = Lmemq(nil, v_92, v_91);
    if (v_91 == nil) goto v_66;
    stack[-2] = v_93;
    v_91 = stack[-1];
    if (!car_legal(v_91)) v_91 = carerror(v_91); else
    v_91 = car(v_91);
    if (!car_legal(v_91)) v_91 = cdrerror(v_91); else
    v_91 = cdr(v_91);
    {   LispObject fn = basic_elt(env, 0); // lalr_extract_nonterminals
    stack[0] = (*qfn1(fn))(fn, v_91);
    }
    env = stack[-3];
    v_91 = stack[-1];
    if (!car_legal(v_91)) v_91 = cdrerror(v_91); else
    v_91 = cdr(v_91);
    {   LispObject fn = basic_elt(env, 0); // lalr_extract_nonterminals
    v_91 = (*qfn1(fn))(fn, v_91);
    }
    env = stack[-3];
    v_91 = Lappend_2(nil, stack[0], v_91);
    env = stack[-3];
    {
        LispObject v_99 = stack[-2];
        LispObject fn = basic_elt(env, 7); // nreverse
        return (*qfn2(fn))(fn, v_99, v_91);
    }
v_66:
    stack[0] = v_93;
    v_93 = basic_elt(env, 1); // "Malformed production"
    v_92 = stack[-1];
    v_91 = basic_elt(env, 6); // "(unrecognised item in rule)"
    v_91 = list3(v_93, v_92, v_91);
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 8); // rederr
    v_91 = (*qfn1(fn))(fn, v_91);
    }
    env = stack[-3];
    {
        LispObject v_100 = stack[0];
        LispObject fn = basic_elt(env, 7); // nreverse
        return (*qfn2(fn))(fn, v_100, v_91);
    }
v_9:
    v_91 = nil;
    return onevalue(v_91);
}



setup_type const u32_setup[] =
{
    {"talp_atnum",              G0W1,     CC_talp_atnum,G2W1, G3W1,     G4W1},
    {"minusml",                 G0W1,     CC_minusml,G2W1,    G3W1,     G4W1},
    {"exptplus",                G0W2,     G1W2,     CC_exptplus,G3W2,   G4W2},
    {"add_minus",               G0W1,     CC_add_minus,G2W1,  G3W1,     G4W1},
    {"dipnumcontent",           G0W2,     G1W2,     CC_dipnumcontent,G3W2,G4W2},
    {"sc_getrow",               G0W2,     G1W2,     CC_sc_getrow,G3W2,  G4W2},
    {"f2dip11",                 G0W1,     CC_f2dip11,G2W1,    G3W1,     G4W1},
    {"eqexpr",                  G0W1,     CC_eqexpr,G2W1,     G3W1,     G4W1},
    {"formatfort",              G0W1,     CC_formatfort,G2W1, G3W1,     G4W1},
    {"one-entryp",              G0W2,     G1W2,     CC_oneKentryp,G3W2, G4W2},
    {"subsq",                   G0W2,     G1W2,     CC_subsq, G3W2,     G4W2},
    {"groeb=rf1",               G0W2,     G1W2,     CC_groebMrf1,G3W2,  G4W2},
    {"length_multiindex",       G0W1,     CC_length_multiindex,G2W1,G3W1,G4W1},
    {"lex_basic_token",         CC_lex_basic_token,G1W0,G2W0, G3W0,     G4W0},
    {"in_list1a",               G0W3,     G1W3,     G2W3,     CC_in_list1a,G4W3},
    {"formboollis",             G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_formboollis},
    {"talp_specsubt",           G0W3,     G1W3,     G2W3,     CC_talp_specsubt,G4W3},
    {"multiminus",              G0W1,     CC_multiminus,G2W1, G3W1,     G4W1},
    {"dm-min",                  G0W2,     G1W2,     CC_dmKmin,G3W2,     G4W2},
    {"indxchk",                 G0W1,     CC_indxchk,G2W1,    G3W1,     G4W1},
    {"incident",                G0W3,     G1W3,     G2W3,     CC_incident,G4W3},
    {"simp-prop1",              G0W2,     G1W2,     CC_simpKprop1,G3W2, G4W2},
    {"*di2q",                   G0W2,     G1W2,     CC_Hdi2q, G3W2,     G4W2},
    {"st_ad_numsorttree",       G0W1,     CC_st_ad_numsorttree,G2W1,G3W1,G4W1},
    {"expand_rule",             G0W1,     CC_expand_rule,G2W1,G3W1,     G4W1},
    {"cl_susiupdknowl1",        G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_cl_susiupdknowl1},
    {"ev_max#",                 G0W2,     G1W2,     CC_ev_maxC,G3W2,    G4W2},
    {"containerml",             G0W2,     G1W2,     CC_containerml,G3W2,G4W2},
    {"ps:constmult-erule",      G0W2,     G1W2,     CC_psTconstmultKerule,G3W2,G4W2},
    {"mkempspmat",              G0W2,     G1W2,     CC_mkempspmat,G3W2, G4W2},
    {"insoccs",                 G0W2,     G1W2,     CC_insoccs,G3W2,    G4W2},
    {"module",                  G0W1,     CC_module,G2W1,     G3W1,     G4W1},
    {"*xadd",                   G0W2,     G1W2,     CC_Hxadd, G3W2,     G4W2},
    {"chkrn*",                  G0W1,     CC_chkrnH,G2W1,     G3W1,     G4W1},
    {"*a2f",                    G0W1,     CC_Ha2f,  G2W1,     G3W1,     G4W1},
    {"lalr_extract_nonterminals",G0W1,    CC_lalr_extract_nonterminals,G2W1,G3W1,G4W1},
    {nullptr, 
        reinterpret_cast<no_args *>(
            reinterpret_cast<uintptr_t>("u32")),
        reinterpret_cast<one_arg *>(
            reinterpret_cast<uintptr_t>("143801 5677735 4526528")),
        nullptr, nullptr, nullptr}
};

// end of generated code
