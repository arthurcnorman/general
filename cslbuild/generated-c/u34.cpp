
// $destdir/u34.c        Machine generated C code

// $Id$

#include "config.h"
#include "headers.h"



// Code for mapcarcar

static LispObject CC_mapcarcar(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_41;
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
    v_41 = v_2;
// end of prologue
    stack[-3] = v_41;
    v_41 = stack[-3];
    if (v_41 == nil) goto v_13;
    else goto v_14;
v_13:
    v_41 = nil;
    goto v_8;
v_14:
    v_41 = stack[-3];
    if (!car_legal(v_41)) v_41 = carerror(v_41); else
    v_41 = car(v_41);
    if (!car_legal(v_41)) v_41 = carerror(v_41); else
    v_41 = car(v_41);
    v_41 = ncons(v_41);
    env = stack[-4];
    stack[-1] = v_41;
    stack[-2] = v_41;
v_9:
    v_41 = stack[-3];
    if (!car_legal(v_41)) v_41 = cdrerror(v_41); else
    v_41 = cdr(v_41);
    stack[-3] = v_41;
    v_41 = stack[-3];
    if (v_41 == nil) goto v_27;
    else goto v_28;
v_27:
    v_41 = stack[-2];
    goto v_8;
v_28:
    stack[0] = stack[-1];
    v_41 = stack[-3];
    if (!car_legal(v_41)) v_41 = carerror(v_41); else
    v_41 = car(v_41);
    if (!car_legal(v_41)) v_41 = carerror(v_41); else
    v_41 = car(v_41);
    v_41 = ncons(v_41);
    env = stack[-4];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_41);
    v_41 = stack[-1];
    if (!car_legal(v_41)) v_41 = cdrerror(v_41); else
    v_41 = cdr(v_41);
    stack[-1] = v_41;
    goto v_9;
v_8:
    return onevalue(v_41);
}



// Code for matrixom

static LispObject CC_matrixom(LispObject env,
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
    v_22 = basic_elt(env, 1); // "<OMA>"
    {   LispObject fn = basic_elt(env, 4); // printout
    v_22 = (*qfn1(fn))(fn, v_22);
    }
    env = stack[-1];
    v_22 = lisp_true;
    {   LispObject fn = basic_elt(env, 5); // indent!*
    v_22 = (*qfn1(fn))(fn, v_22);
    }
    env = stack[-1];
    v_22 = basic_elt(env, 2); // "<OMS cd=""linalg1"" name=""matrix""/>"
    {   LispObject fn = basic_elt(env, 4); // printout
    v_22 = (*qfn1(fn))(fn, v_22);
    }
    env = stack[-1];
    v_22 = stack[0];
    if (!car_legal(v_22)) v_22 = cdrerror(v_22); else
    v_22 = cdr(v_22);
    if (!car_legal(v_22)) v_22 = cdrerror(v_22); else
    v_22 = cdr(v_22);
    if (!car_legal(v_22)) v_22 = cdrerror(v_22); else
    v_22 = cdr(v_22);
    if (!car_legal(v_22)) v_22 = carerror(v_22); else
    v_22 = car(v_22);
    {   LispObject fn = basic_elt(env, 6); // matrixrowom
    v_22 = (*qfn1(fn))(fn, v_22);
    }
    env = stack[-1];
    v_22 = nil;
    {   LispObject fn = basic_elt(env, 5); // indent!*
    v_22 = (*qfn1(fn))(fn, v_22);
    }
    env = stack[-1];
    v_22 = basic_elt(env, 3); // "</OMA>"
    {   LispObject fn = basic_elt(env, 4); // printout
    v_22 = (*qfn1(fn))(fn, v_22);
    }
    v_22 = nil;
    return onevalue(v_22);
}



// Code for close_forall

static LispObject CC_close_forall(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
    stack_popper stack_popper_var(1);
// end of prologue
    v_14 = qvalue(basic_elt(env, 1)); // flagg
    v_13 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_14 == v_13) goto v_7;
    else goto v_8;
v_7:
    v_13 = basic_elt(env, 2); // "</apply>"
    {   LispObject fn = basic_elt(env, 3); // printout
    v_13 = (*qfn1(fn))(fn, v_13);
    }
    goto v_6;
v_8:
v_6:
    v_13 = nil;
    return onevalue(v_13);
}



// Code for lispreadp

static LispObject CC_lispreadp(LispObject env,
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
    v_8 = basic_elt(env, 1); // read
        return Leqcar(nil, v_7, v_8);
}



// Code for reval3

static LispObject CC_reval3(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // simp
    v_9 = (*qfn1(fn))(fn, v_9);
    }
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // mk!*sq
        return (*qfn1(fn))(fn, v_9);
    }
}



// Code for color!-roads

static LispObject CC_colorKroads(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_67, v_68, v_69;
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
    v_69 = v_2;
// end of prologue
    v_67 = stack[-4];
    if (!car_legal(v_67)) v_67 = carerror(v_67); else
    v_67 = car(v_67);
    if (!car_legal(v_67)) v_68 = carerror(v_67); else
    v_68 = car(v_67);
    v_67 = v_69;
    v_67 = Lassoc(nil, v_68, v_67);
    if (!car_legal(v_67)) v_67 = cdrerror(v_67); else
    v_67 = cdr(v_67);
    stack[-1] = v_67;
    v_67 = stack[-4];
    if (!car_legal(v_67)) v_67 = cdrerror(v_67); else
    v_67 = cdr(v_67);
    if (!car_legal(v_67)) v_67 = carerror(v_67); else
    v_67 = car(v_67);
    if (!car_legal(v_67)) v_68 = carerror(v_67); else
    v_68 = car(v_67);
    v_67 = v_69;
    v_67 = Lassoc(nil, v_68, v_67);
    if (!car_legal(v_67)) v_67 = cdrerror(v_67); else
    v_67 = cdr(v_67);
    stack[0] = v_67;
    v_67 = stack[-4];
    if (!car_legal(v_67)) v_67 = cdrerror(v_67); else
    v_67 = cdr(v_67);
    if (!car_legal(v_67)) v_67 = cdrerror(v_67); else
    v_67 = cdr(v_67);
    if (!car_legal(v_67)) v_67 = carerror(v_67); else
    v_67 = car(v_67);
    if (!car_legal(v_67)) v_67 = carerror(v_67); else
    v_67 = car(v_67);
    v_68 = v_69;
    v_67 = Lassoc(nil, v_67, v_68);
    if (!car_legal(v_67)) v_67 = cdrerror(v_67); else
    v_67 = cdr(v_67);
    stack[-5] = v_67;
    stack[-2] = stack[-1];
    v_68 = stack[0];
    v_67 = stack[-5];
    v_67 = plus2(v_68, v_67);
    env = stack[-6];
    v_68 = plus2(stack[-2], v_67);
    env = stack[-6];
    v_67 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_67 = quot2(v_68, v_67);
    env = stack[-6];
    stack[-2] = v_67;
    v_68 = stack[-2];
    v_67 = stack[-1];
    v_67 = difference2(v_68, v_67);
    env = stack[-6];
    stack[-1] = v_67;
    v_68 = stack[-2];
    v_67 = stack[0];
    v_67 = difference2(v_68, v_67);
    env = stack[-6];
    stack[0] = v_67;
    v_68 = stack[-2];
    v_67 = stack[-5];
    v_67 = difference2(v_68, v_67);
    env = stack[-6];
    stack[-5] = v_67;
    v_67 = stack[-4];
    if (!car_legal(v_67)) v_67 = carerror(v_67); else
    v_67 = car(v_67);
    if (!car_legal(v_67)) stack[-3] = carerror(v_67); else
    stack[-3] = car(v_67);
    stack[-2] = stack[-1];
    v_67 = stack[-4];
    if (!car_legal(v_67)) v_67 = cdrerror(v_67); else
    v_67 = cdr(v_67);
    if (!car_legal(v_67)) v_67 = carerror(v_67); else
    v_67 = car(v_67);
    if (!car_legal(v_67)) stack[-1] = carerror(v_67); else
    stack[-1] = car(v_67);
    v_67 = stack[-4];
    if (!car_legal(v_67)) v_67 = cdrerror(v_67); else
    v_67 = cdr(v_67);
    if (!car_legal(v_67)) v_67 = cdrerror(v_67); else
    v_67 = cdr(v_67);
    if (!car_legal(v_67)) v_67 = carerror(v_67); else
    v_67 = car(v_67);
    if (!car_legal(v_67)) v_68 = carerror(v_67); else
    v_68 = car(v_67);
    v_67 = stack[-5];
    v_67 = cons(v_68, v_67);
    env = stack[-6];
    v_67 = ncons(v_67);
    env = stack[-6];
    v_67 = acons(stack[-1], stack[0], v_67);
    {
        LispObject v_76 = stack[-3];
        LispObject v_77 = stack[-2];
        return acons(v_76, v_77, v_67);
    }
    return onevalue(v_67);
}



// Code for remchkf

static LispObject CC_remchkf(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    v_49 = stack[-2];
    v_48 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // remchkf1
    v_48 = (*qfn2(fn))(fn, v_49, v_48);
    }
    env = stack[-4];
    stack[-3] = v_48;
    v_48 = stack[-3];
    if (!consp(v_48)) goto v_20;
    else goto v_21;
v_20:
    v_48 = lisp_true;
    goto v_19;
v_21:
    v_48 = stack[-3];
    if (!car_legal(v_48)) v_48 = carerror(v_48); else
    v_48 = car(v_48);
    v_48 = (consp(v_48) ? nil : lisp_true);
    goto v_19;
    v_48 = nil;
v_19:
    if (v_48 == nil) goto v_17;
    v_48 = lisp_true;
    goto v_15;
v_17:
    v_48 = stack[-2];
    {   LispObject fn = basic_elt(env, 2); // kernels
    v_49 = (*qfn1(fn))(fn, v_48);
    }
    env = stack[-4];
    v_48 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // intersection
    v_48 = (*qfn2(fn))(fn, v_49, v_48);
    }
    env = stack[-4];
    v_48 = (v_48 == nil ? lisp_true : nil);
    goto v_15;
    v_48 = nil;
v_15:
    if (v_48 == nil) goto v_13;
    v_48 = stack[-3];
    goto v_11;
v_13:
    v_48 = stack[-3];
    if (!car_legal(v_48)) stack[-2] = carerror(v_48); else
    stack[-2] = car(v_48);
    v_48 = stack[-3];
    if (!car_legal(v_48)) v_50 = cdrerror(v_48); else
    v_50 = cdr(v_48);
    v_49 = stack[-1];
    v_48 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // remchkf
    v_48 = (*qfn3(fn))(fn, v_50, v_49, v_48);
    }
    {
        LispObject v_55 = stack[-2];
        return cons(v_55, v_48);
    }
    v_48 = nil;
v_11:
    return onevalue(v_48);
}



// Code for split_cov_cont_ids

static LispObject CC_split_cov_cont_ids(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_44, v_45, v_46;
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
    v_44 = stack[-1];
    if (v_44 == nil) goto v_13;
    else goto v_14;
v_13:
    goto v_9;
v_14:
    v_44 = stack[-1];
    if (!car_legal(v_44)) v_44 = carerror(v_44); else
    v_44 = car(v_44);
    v_46 = v_44;
    v_45 = v_46;
    v_44 = basic_elt(env, 1); // minus
    if (!consp(v_45)) goto v_23;
    v_45 = car(v_45);
    if (v_45 == v_44) goto v_22;
    else goto v_23;
v_22:
    v_44 = v_46;
    if (!car_legal(v_44)) v_44 = cdrerror(v_44); else
    v_44 = cdr(v_44);
    if (!car_legal(v_44)) v_45 = carerror(v_44); else
    v_45 = car(v_44);
    v_44 = stack[-2];
    v_44 = cons(v_45, v_44);
    env = stack[-3];
    stack[-2] = v_44;
    goto v_21;
v_23:
    v_45 = v_46;
    v_44 = stack[0];
    v_44 = cons(v_45, v_44);
    env = stack[-3];
    stack[0] = v_44;
    goto v_21;
v_21:
    v_44 = stack[-1];
    if (!car_legal(v_44)) v_44 = cdrerror(v_44); else
    v_44 = cdr(v_44);
    stack[-1] = v_44;
    goto v_10;
v_9:
    v_44 = stack[-2];
    v_45 = Lnreverse(nil, v_44);
    env = stack[-3];
    v_44 = stack[0];
    v_44 = Lnreverse(nil, v_44);
    return list2(v_45, v_44);
    return onevalue(v_44);
}



// Code for proper!-simpsqrt

static LispObject CC_properKsimpsqrt(LispObject env,
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
    v_8 = basic_elt(env, 0); // proper!-simpsqrt
    {   LispObject fn = basic_elt(env, 1); // carx
    v_8 = (*qfn2(fn))(fn, v_9, v_8);
    }
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // simpsqrti
        return (*qfn1(fn))(fn, v_8);
    }
}



// Code for make!-x!-to!-p

static LispObject CC_makeKxKtoKp(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_124, v_125, v_126;
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
    stack[-1] = v_2;
// end of prologue
    v_125 = stack[-1];
    v_124 = qvalue(basic_elt(env, 1)); // dpoly
    if ((static_cast<std::intptr_t>(v_125) < static_cast<std::intptr_t>(v_124))) goto v_12;
    else goto v_13;
v_12:
    v_124 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[0] = v_124;
v_19:
    v_124 = stack[-1];
    v_125 = static_cast<LispObject>(static_cast<std::intptr_t>(v_124) - 0x10);
    v_124 = stack[0];
    v_124 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_125) - static_cast<std::uintptr_t>(v_124) + TAG_FIXNUM);
    v_124 = (static_cast<std::intptr_t>(v_124) < 0 ? lisp_true : nil);
    if (v_124 == nil) goto v_24;
    goto v_18;
v_24:
    v_126 = stack[-3];
    v_125 = stack[0];
    v_124 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_124 = Lputv(nil, v_126, v_125, v_124);
    env = stack[-6];
    v_124 = stack[0];
    v_124 = static_cast<LispObject>(static_cast<std::intptr_t>(v_124) + 0x10);
    stack[0] = v_124;
    goto v_19;
v_18:
    v_126 = stack[-3];
    v_125 = stack[-1];
    v_124 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_124 = Lputv(nil, v_126, v_125, v_124);
    v_124 = stack[-1];
    goto v_9;
v_13:
    v_125 = stack[-1];
    v_124 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_126 = quot2(v_125, v_124);
    env = stack[-6];
    v_125 = stack[-4];
    v_124 = stack[-3];
    {   LispObject fn = basic_elt(env, 0); // make!-x!-to!-p
    v_124 = (*qfn3(fn))(fn, v_126, v_125, v_124);
    }
    env = stack[-6];
    stack[-5] = stack[-3];
    stack[-2] = v_124;
    stack[0] = stack[-3];
    v_125 = v_124;
    v_124 = stack[-4];
    v_124 = list2(v_125, v_124);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 3); // times!-in!-vector
    v_124 = (*qfn4up(fn))(fn, stack[-5], stack[-2], stack[0], v_124);
    }
    env = stack[-6];
    stack[-5] = v_124;
    stack[-2] = stack[-4];
    stack[0] = qvalue(basic_elt(env, 2)); // poly!-vector
    v_124 = qvalue(basic_elt(env, 1)); // dpoly
    v_124 = ncons(v_124);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 4); // remainder!-in!-vector
    v_124 = (*qfn4up(fn))(fn, stack[-2], stack[-5], stack[0], v_124);
    }
    env = stack[-6];
    stack[-5] = v_124;
    v_125 = stack[-1];
    v_124 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_125 = Liremainder_2(nil, v_125, v_124);
    env = stack[-6];
    v_124 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_125 == v_124) goto v_64;
    v_124 = stack[-5];
    stack[-2] = v_124;
v_72:
    v_124 = stack[-2];
    v_124 = (static_cast<std::intptr_t>(v_124) < 0 ? lisp_true : nil);
    if (v_124 == nil) goto v_77;
    goto v_71;
v_77:
    stack[-1] = stack[-4];
    v_124 = stack[-2];
    stack[0] = static_cast<LispObject>(static_cast<std::intptr_t>(v_124) + 0x10);
    v_125 = stack[-4];
    v_124 = stack[-2];
    v_124 = Lgetv(nil, v_125, v_124);
    env = stack[-6];
    v_124 = Lputv(nil, stack[-1], stack[0], v_124);
    env = stack[-6];
    v_124 = stack[-2];
    v_124 = static_cast<LispObject>(static_cast<std::intptr_t>(v_124) - 0x10);
    stack[-2] = v_124;
    goto v_72;
v_71:
    v_126 = stack[-4];
    v_125 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_124 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_124 = Lputv(nil, v_126, v_125, v_124);
    env = stack[-6];
    stack[-1] = stack[-4];
    v_124 = stack[-5];
    stack[-2] = static_cast<LispObject>(static_cast<std::intptr_t>(v_124) + 0x10);
    stack[0] = qvalue(basic_elt(env, 2)); // poly!-vector
    v_124 = qvalue(basic_elt(env, 1)); // dpoly
    v_124 = ncons(v_124);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 4); // remainder!-in!-vector
    v_124 = (*qfn4up(fn))(fn, stack[-1], stack[-2], stack[0], v_124);
    }
    env = stack[-6];
    stack[-5] = v_124;
    goto v_62;
v_64:
v_62:
    v_124 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-2] = v_124;
v_104:
    v_125 = stack[-5];
    v_124 = stack[-2];
    v_124 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_125) - static_cast<std::uintptr_t>(v_124) + TAG_FIXNUM);
    v_124 = (static_cast<std::intptr_t>(v_124) < 0 ? lisp_true : nil);
    if (v_124 == nil) goto v_109;
    goto v_103;
v_109:
    stack[-1] = stack[-3];
    stack[0] = stack[-2];
    v_125 = stack[-4];
    v_124 = stack[-2];
    v_124 = Lgetv(nil, v_125, v_124);
    env = stack[-6];
    v_124 = Lputv(nil, stack[-1], stack[0], v_124);
    env = stack[-6];
    v_124 = stack[-2];
    v_124 = static_cast<LispObject>(static_cast<std::intptr_t>(v_124) + 0x10);
    stack[-2] = v_124;
    goto v_104;
v_103:
    v_124 = stack[-5];
v_9:
    return onevalue(v_124);
}



// Code for lex_skip_line_comment

static LispObject CC_lex_skip_line_comment(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
    stack_popper stack_popper_var(1);
// end of prologue
v_5:
    v_26 = qvalue(basic_elt(env, 1)); // lex_char
    v_25 = qvalue(basic_elt(env, 2)); // !$eol!$
    if (equal(v_26, v_25)) goto v_12;
    else goto v_13;
v_12:
    v_25 = lisp_true;
    goto v_11;
v_13:
    v_26 = qvalue(basic_elt(env, 1)); // lex_char
    v_25 = qvalue(basic_elt(env, 3)); // !$eof!$
    v_25 = (equal(v_26, v_25) ? lisp_true : nil);
    goto v_11;
    v_25 = nil;
v_11:
    if (v_25 == nil) goto v_9;
    goto v_4;
v_9:
    {   LispObject fn = basic_elt(env, 4); // yyreadch
    v_25 = (*qfn0(fn))(fn);
    }
    env = stack[0];
    goto v_5;
v_4:
    v_25 = lisp_true;
    return onevalue(v_25);
}



// Code for sortedpolynomlistinsert

static LispObject CC_sortedpolynomlistinsert(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[-1] = v_3;
    v_38 = v_2;
// end of prologue
    stack[-2] = v_38;
v_11:
    v_38 = stack[-2];
    if (!car_legal(v_38)) v_38 = carerror(v_38); else
    v_38 = car(v_38);
    if (v_38 == nil) goto v_14;
    v_38 = stack[-2];
    if (!car_legal(v_38)) v_39 = carerror(v_38); else
    v_39 = car(v_38);
    v_38 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // polynomcompare
    v_39 = (*qfn2(fn))(fn, v_39, v_38);
    }
    env = stack[-3];
    v_38 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    if (v_39 == v_38) goto v_14;
    goto v_15;
v_14:
    goto v_10;
v_15:
    v_38 = stack[-2];
    if (!car_legal(v_38)) v_38 = cdrerror(v_38); else
    v_38 = cdr(v_38);
    stack[-2] = v_38;
    goto v_11;
v_10:
    stack[0] = stack[-2];
    v_38 = stack[-2];
    if (!car_legal(v_38)) v_39 = carerror(v_38); else
    v_39 = car(v_38);
    v_38 = stack[-2];
    if (!car_legal(v_38)) v_38 = cdrerror(v_38); else
    v_38 = cdr(v_38);
    v_38 = cons(v_39, v_38);
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_38);
    v_39 = stack[0];
    v_38 = stack[-1];
    if (!car_legal(v_39)) rplaca_fails(v_39);
    setcar(v_39, v_38);
    v_38 = nil;
    return onevalue(v_38);
}



// Code for multdfconst

static LispObject CC_multdfconst(LispObject env,
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    stack[-1] = v_3;
    stack[-2] = v_2;
// end of prologue
    stack[-3] = nil;
v_8:
    v_41 = stack[-1];
    if (v_41 == nil) goto v_15;
    else goto v_16;
v_15:
    v_41 = lisp_true;
    goto v_14;
v_16:
    v_41 = stack[-2];
    if (!car_legal(v_41)) v_41 = carerror(v_41); else
    v_41 = car(v_41);
    v_41 = (v_41 == nil ? lisp_true : nil);
    goto v_14;
    v_41 = nil;
v_14:
    if (v_41 == nil) goto v_12;
    v_41 = stack[-3];
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn1(fn))(fn, v_41);
    }
v_12:
    v_41 = stack[-1];
    if (!car_legal(v_41)) v_41 = carerror(v_41); else
    v_41 = car(v_41);
    if (!car_legal(v_41)) stack[0] = carerror(v_41); else
    stack[0] = car(v_41);
    v_42 = stack[-2];
    v_41 = stack[-1];
    if (!car_legal(v_41)) v_41 = carerror(v_41); else
    v_41 = car(v_41);
    if (!car_legal(v_41)) v_41 = cdrerror(v_41); else
    v_41 = cdr(v_41);
    {   LispObject fn = basic_elt(env, 2); // multsq
    v_41 = (*qfn2(fn))(fn, v_42, v_41);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 3); // subs2q
    v_42 = (*qfn1(fn))(fn, v_41);
    }
    env = stack[-4];
    v_41 = stack[-3];
    v_41 = acons(stack[0], v_42, v_41);
    env = stack[-4];
    stack[-3] = v_41;
    v_41 = stack[-1];
    if (!car_legal(v_41)) v_41 = cdrerror(v_41); else
    v_41 = cdr(v_41);
    stack[-1] = v_41;
    goto v_8;
    v_41 = nil;
    return onevalue(v_41);
}



// Code for mri_congp

static LispObject CC_mri_congp(LispObject env,
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
    {   LispObject fn = basic_elt(env, 2); // mri_opn
    v_8 = (*qfn1(fn))(fn, v_8);
    }
    env = stack[0];
    v_9 = basic_elt(env, 1); // (cong ncong)
    v_8 = Lmemq(nil, v_8, v_9);
    return onevalue(v_8);
}



// Code for rat_abs

static LispObject CC_rat_abs(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // absf
    v_11 = (*qfn1(fn))(fn, v_10);
    }
    v_10 = stack[0];
    if (!car_legal(v_10)) v_10 = cdrerror(v_10); else
    v_10 = cdr(v_10);
    return cons(v_11, v_10);
}



// Code for applyfnrd

static LispObject CC_applyfnrd(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil);
    stack_popper stack_popper_var(2);
// end of prologue
    {   LispObject fn = basic_elt(env, 1); // fnrd
    v_17 = (*qfn0(fn))(fn);
    }
    env = stack[-1];
    stack[0] = v_17;
    {   LispObject fn = basic_elt(env, 2); // stats_getargs
    v_17 = (*qfn0(fn))(fn);
    }
    v_19 = stack[0];
    v_18 = nil;
    return list2star(v_19, v_18, v_17);
    return onevalue(v_17);
}



// Code for ps!:times!-erule

static LispObject CC_psTtimesKerule(LispObject env,
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
    real_push(nil, nil, nil, nil, nil);
    real_push(nil, nil, nil, nil, nil);
    stack_popper stack_popper_var(11);
// copy arguments values to proper place
    stack[-8] = v_3;
    v_75 = v_2;
// end of prologue
    v_74 = v_75;
    if (!car_legal(v_74)) v_74 = cdrerror(v_74); else
    v_74 = cdr(v_74);
    if (!car_legal(v_74)) v_74 = carerror(v_74); else
    v_74 = car(v_74);
    stack[-9] = v_74;
    v_74 = v_75;
    if (!car_legal(v_74)) v_74 = cdrerror(v_74); else
    v_74 = cdr(v_74);
    if (!car_legal(v_74)) v_74 = cdrerror(v_74); else
    v_74 = cdr(v_74);
    if (!car_legal(v_74)) v_74 = carerror(v_74); else
    v_74 = car(v_74);
    stack[-7] = v_74;
    v_75 = nil;
    v_74 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_74 = cons(v_75, v_74);
    env = stack[-10];
    stack[0] = v_74;
    v_74 = stack[-9];
    {   LispObject fn = basic_elt(env, 2); // ps!:order
    v_74 = (*qfn1(fn))(fn, v_74);
    }
    env = stack[-10];
    stack[-6] = v_74;
    v_74 = qvalue(basic_elt(env, 1)); // ps
    {   LispObject fn = basic_elt(env, 2); // ps!:order
    v_74 = (*qfn1(fn))(fn, v_74);
    }
    env = stack[-10];
    stack[-5] = v_74;
    v_74 = stack[-7];
    {   LispObject fn = basic_elt(env, 2); // ps!:order
    v_74 = (*qfn1(fn))(fn, v_74);
    }
    env = stack[-10];
    stack[-4] = v_74;
    v_74 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-3] = v_74;
v_32:
    v_75 = stack[-8];
    v_74 = stack[-5];
    v_75 = difference2(v_75, v_74);
    env = stack[-10];
    v_74 = stack[-3];
    v_74 = difference2(v_75, v_74);
    env = stack[-10];
    v_74 = Lminusp(nil, v_74);
    env = stack[-10];
    if (v_74 == nil) goto v_37;
    goto v_31;
v_37:
    v_75 = stack[-8];
    v_74 = stack[-6];
    v_75 = difference2(v_75, v_74);
    env = stack[-10];
    v_74 = stack[-3];
    v_75 = difference2(v_75, v_74);
    env = stack[-10];
    v_74 = stack[-4];
    v_74 = static_cast<LispObject>(geq2(v_75, v_74));
    v_74 = v_74 ? lisp_true : nil;
    env = stack[-10];
    if (v_74 == nil) goto v_48;
    stack[-2] = stack[0];
    stack[0] = stack[-9];
    v_75 = stack[-3];
    v_74 = stack[-6];
    v_74 = plus2(v_75, v_74);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 3); // ps!:evaluate
    stack[-1] = (*qfn2(fn))(fn, stack[0], v_74);
    }
    env = stack[-10];
    stack[0] = stack[-7];
    v_75 = stack[-8];
    v_74 = stack[-6];
    v_75 = difference2(v_75, v_74);
    env = stack[-10];
    v_74 = stack[-3];
    v_74 = difference2(v_75, v_74);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 3); // ps!:evaluate
    v_74 = (*qfn2(fn))(fn, stack[0], v_74);
    }
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 4); // multsq
    v_74 = (*qfn2(fn))(fn, stack[-1], v_74);
    }
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 5); // addsq
    v_74 = (*qfn2(fn))(fn, stack[-2], v_74);
    }
    env = stack[-10];
    stack[0] = v_74;
    goto v_46;
v_48:
v_46:
    v_74 = stack[-3];
    v_74 = add1(v_74);
    env = stack[-10];
    stack[-3] = v_74;
    goto v_32;
v_31:
    v_74 = stack[0];
    return onevalue(v_74);
}



// Code for matsm1

static LispObject CC_matsm1(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_608, v_609, v_610;
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
    stack[-9] = nil;
v_11:
    v_608 = stack[-8];
    if (v_608 == nil) goto v_22;
    else goto v_23;
v_22:
    v_608 = stack[-9];
    goto v_10;
v_23:
    v_608 = stack[-8];
    if (!car_legal(v_608)) v_609 = carerror(v_608); else
    v_609 = car(v_608);
    v_608 = basic_elt(env, 1); // !*div
    if (!consp(v_609)) goto v_27;
    v_609 = car(v_609);
    if (v_609 == v_608) goto v_26;
    else goto v_27;
v_26:
    v_608 = stack[-8];
    v_609 = Llength(nil, v_608);
    env = stack[-10];
    v_608 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_609 == v_608) goto v_34;
    else goto v_35;
v_34:
    goto v_15;
v_35:
    v_608 = stack[-8];
    v_609 = Llength(nil, v_608);
    env = stack[-10];
    v_608 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    if (v_609 == v_608) goto v_43;
    else goto v_44;
v_43:
    v_608 = stack[-8];
    if (!car_legal(v_608)) v_608 = cdrerror(v_608); else
    v_608 = cdr(v_608);
    if (!car_legal(v_608)) v_608 = carerror(v_608); else
    v_608 = car(v_608);
    if (!car_legal(v_608)) v_609 = carerror(v_608); else
    v_609 = car(v_608);
    v_608 = basic_elt(env, 2); // sparsemat
    v_608 = (v_609 == v_608 ? lisp_true : nil);
    goto v_42;
v_44:
    v_608 = nil;
    goto v_42;
    v_608 = nil;
v_42:
    if (v_608 == nil) goto v_40;
    v_608 = stack[-8];
    if (!car_legal(v_608)) v_608 = cdrerror(v_608); else
    v_608 = cdr(v_608);
    stack[-9] = v_608;
    goto v_15;
v_40:
    goto v_15;
    goto v_21;
v_27:
    v_608 = stack[-8];
    if (!car_legal(v_608)) v_608 = carerror(v_608); else
    v_608 = car(v_608);
    if (!consp(v_608)) goto v_62;
    else goto v_63;
v_62:
    goto v_18;
v_63:
    v_608 = stack[-8];
    if (!car_legal(v_608)) v_608 = carerror(v_608); else
    v_608 = car(v_608);
    if (!car_legal(v_608)) v_609 = carerror(v_608); else
    v_609 = car(v_608);
    v_608 = basic_elt(env, 3); // mat
    if (v_609 == v_608) goto v_66;
    else goto v_67;
v_66:
    goto v_14;
v_67:
    v_608 = stack[-8];
    if (!car_legal(v_608)) v_608 = carerror(v_608); else
    v_608 = car(v_608);
    if (!car_legal(v_608)) v_609 = carerror(v_608); else
    v_609 = car(v_608);
    v_608 = basic_elt(env, 2); // sparsemat
    if (v_609 == v_608) goto v_76;
    else goto v_77;
v_76:
    v_608 = stack[-8];
    v_609 = Llength(nil, v_608);
    env = stack[-10];
    v_608 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_608 = (v_609 == v_608 ? lisp_true : nil);
    goto v_75;
v_77:
    v_608 = nil;
    goto v_75;
    v_608 = nil;
v_75:
    if (v_608 == nil) goto v_73;
    v_608 = stack[-8];
    stack[-9] = v_608;
    goto v_13;
v_73:
    v_608 = stack[-8];
    if (!car_legal(v_608)) v_608 = carerror(v_608); else
    v_608 = car(v_608);
    if (!car_legal(v_608)) v_609 = carerror(v_608); else
    v_609 = car(v_608);
    v_608 = basic_elt(env, 2); // sparsemat
    if (v_609 == v_608) goto v_94;
    else goto v_95;
v_94:
    v_608 = stack[-8];
    v_609 = Llength(nil, v_608);
    env = stack[-10];
    v_608 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_608 = (v_609 == v_608 ? lisp_true : nil);
    goto v_93;
v_95:
    v_608 = nil;
    goto v_93;
    v_608 = nil;
v_93:
    if (v_608 == nil) goto v_91;
    v_608 = stack[-8];
    v_608 = Lreverse(nil, v_608);
    env = stack[-10];
    if (!car_legal(v_608)) v_609 = carerror(v_608); else
    v_609 = car(v_608);
    v_608 = basic_elt(env, 1); // !*div
    if (!consp(v_609)) goto v_110;
    v_609 = car(v_609);
    if (v_609 == v_608) goto v_109;
    else goto v_110;
v_109:
    v_608 = stack[-8];
    v_608 = Lreverse(nil, v_608);
    env = stack[-10];
    stack[-8] = v_608;
    v_608 = stack[-8];
    if (!car_legal(v_608)) v_608 = cdrerror(v_608); else
    v_608 = cdr(v_608);
    stack[-9] = v_608;
    goto v_15;
v_110:
    v_608 = stack[-8];
    if (!car_legal(v_608)) v_609 = carerror(v_608); else
    v_609 = car(v_608);
    v_608 = stack[-8];
    if (!car_legal(v_608)) v_608 = cdrerror(v_608); else
    v_608 = cdr(v_608);
    {   LispObject fn = basic_elt(env, 15); // spmultm
    v_608 = (*qfn2(fn))(fn, v_609, v_608);
    }
    env = stack[-10];
    stack[-9] = v_608;
    v_608 = stack[-8];
    if (!car_legal(v_608)) v_608 = cdrerror(v_608); else
    v_608 = cdr(v_608);
    stack[-8] = v_608;
    goto v_13;
    goto v_21;
v_91:
    v_608 = stack[-8];
    if (!car_legal(v_608)) v_608 = carerror(v_608); else
    v_608 = car(v_608);
    if (!car_legal(v_608)) v_609 = carerror(v_608); else
    v_609 = car(v_608);
    v_608 = basic_elt(env, 2); // sparsemat
    if (v_609 == v_608) goto v_130;
    else goto v_131;
v_130:
    v_608 = stack[-8];
    if (!car_legal(v_608)) v_609 = carerror(v_608); else
    v_609 = car(v_608);
    v_608 = stack[-8];
    if (!car_legal(v_608)) v_608 = cdrerror(v_608); else
    v_608 = cdr(v_608);
    {   LispObject fn = basic_elt(env, 15); // spmultm
    v_608 = (*qfn2(fn))(fn, v_609, v_608);
    }
    env = stack[-10];
    stack[-9] = v_608;
    v_608 = nil;
    v_608 = ncons(v_608);
    env = stack[-10];
    stack[-8] = v_608;
    goto v_13;
v_131:
    v_608 = stack[-8];
    if (!car_legal(v_608)) v_608 = carerror(v_608); else
    v_608 = car(v_608);
    if (!car_legal(v_608)) v_609 = carerror(v_608); else
    v_609 = car(v_608);
    v_608 = stack[-8];
    if (!car_legal(v_608)) v_608 = carerror(v_608); else
    v_608 = car(v_608);
    if (!car_legal(v_608)) v_608 = cdrerror(v_608); else
    v_608 = cdr(v_608);
    {   LispObject fn = basic_elt(env, 16); // lispapply
    v_608 = (*qfn2(fn))(fn, v_609, v_608);
    }
    env = stack[-10];
    stack[0] = v_608;
    goto v_21;
v_21:
v_12:
    v_608 = stack[-9];
    if (v_608 == nil) goto v_154;
    else goto v_155;
v_154:
    v_608 = stack[0];
    goto v_153;
v_155:
    v_608 = stack[-9];
    if (!car_legal(v_608)) v_608 = cdrerror(v_608); else
    v_608 = cdr(v_608);
    if (v_608 == nil) goto v_162;
    else goto v_163;
v_162:
    v_608 = stack[-9];
    if (!car_legal(v_608)) v_608 = carerror(v_608); else
    v_608 = car(v_608);
    if (!car_legal(v_608)) v_608 = cdrerror(v_608); else
    v_608 = cdr(v_608);
    v_608 = (v_608 == nil ? lisp_true : nil);
    goto v_161;
v_163:
    v_608 = nil;
    goto v_161;
    v_608 = nil;
v_161:
    if (v_608 == nil) goto v_159;
    v_608 = stack[-9];
    if (!car_legal(v_608)) v_608 = carerror(v_608); else
    v_608 = car(v_608);
    if (!car_legal(v_608)) v_609 = carerror(v_608); else
    v_609 = car(v_608);
    v_608 = stack[0];
    {   LispObject fn = basic_elt(env, 17); // multsm
    v_608 = (*qfn2(fn))(fn, v_609, v_608);
    }
    env = stack[-10];
    goto v_153;
v_159:
    v_609 = stack[0];
    v_608 = stack[-9];
    {   LispObject fn = basic_elt(env, 18); // multm
    v_608 = (*qfn2(fn))(fn, v_609, v_608);
    }
    env = stack[-10];
    goto v_153;
    v_608 = nil;
v_153:
    stack[-9] = v_608;
v_13:
    v_608 = stack[-8];
    if (!car_legal(v_608)) v_608 = cdrerror(v_608); else
    v_608 = cdr(v_608);
    stack[-8] = v_608;
    goto v_11;
v_14:
    v_608 = stack[-8];
    if (!car_legal(v_608)) v_608 = carerror(v_608); else
    v_608 = car(v_608);
    if (!car_legal(v_608)) v_608 = cdrerror(v_608); else
    v_608 = cdr(v_608);
    {   LispObject fn = basic_elt(env, 19); // lchk
    v_608 = (*qfn1(fn))(fn, v_608);
    }
    env = stack[-10];
    if (v_608 == nil) goto v_187;
    else goto v_188;
v_187:
    v_610 = basic_elt(env, 4); // matrix
    v_609 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_608 = basic_elt(env, 5); // "Matrix mismatch"
    {   LispObject fn = basic_elt(env, 20); // rerror
    v_608 = (*qfn3(fn))(fn, v_610, v_609, v_608);
    }
    env = stack[-10];
    goto v_186;
v_188:
v_186:
    v_608 = stack[-8];
    if (!car_legal(v_608)) v_608 = carerror(v_608); else
    v_608 = car(v_608);
    if (!car_legal(v_608)) v_608 = cdrerror(v_608); else
    v_608 = cdr(v_608);
    stack[-7] = v_608;
    v_608 = stack[-7];
    if (v_608 == nil) goto v_208;
    else goto v_209;
v_208:
    v_608 = nil;
    goto v_201;
v_209:
    v_608 = stack[-7];
    if (!car_legal(v_608)) v_608 = carerror(v_608); else
    v_608 = car(v_608);
    stack[-3] = v_608;
    v_608 = stack[-3];
    if (v_608 == nil) goto v_225;
    else goto v_226;
v_225:
    v_608 = nil;
    goto v_220;
v_226:
    v_608 = stack[-3];
    if (!car_legal(v_608)) v_608 = carerror(v_608); else
    v_608 = car(v_608);
    {   LispObject fn = basic_elt(env, 21); // xsimp
    v_608 = (*qfn1(fn))(fn, v_608);
    }
    env = stack[-10];
    v_608 = ncons(v_608);
    env = stack[-10];
    stack[-1] = v_608;
    stack[-2] = v_608;
v_221:
    v_608 = stack[-3];
    if (!car_legal(v_608)) v_608 = cdrerror(v_608); else
    v_608 = cdr(v_608);
    stack[-3] = v_608;
    v_608 = stack[-3];
    if (v_608 == nil) goto v_239;
    else goto v_240;
v_239:
    v_608 = stack[-2];
    goto v_220;
v_240:
    stack[0] = stack[-1];
    v_608 = stack[-3];
    if (!car_legal(v_608)) v_608 = carerror(v_608); else
    v_608 = car(v_608);
    {   LispObject fn = basic_elt(env, 21); // xsimp
    v_608 = (*qfn1(fn))(fn, v_608);
    }
    env = stack[-10];
    v_608 = ncons(v_608);
    env = stack[-10];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_608);
    v_608 = stack[-1];
    if (!car_legal(v_608)) v_608 = cdrerror(v_608); else
    v_608 = cdr(v_608);
    stack[-1] = v_608;
    goto v_221;
v_220:
    v_608 = ncons(v_608);
    env = stack[-10];
    stack[-5] = v_608;
    stack[-6] = v_608;
v_202:
    v_608 = stack[-7];
    if (!car_legal(v_608)) v_608 = cdrerror(v_608); else
    v_608 = cdr(v_608);
    stack[-7] = v_608;
    v_608 = stack[-7];
    if (v_608 == nil) goto v_257;
    else goto v_258;
v_257:
    v_608 = stack[-6];
    goto v_201;
v_258:
    stack[-4] = stack[-5];
    v_608 = stack[-7];
    if (!car_legal(v_608)) v_608 = carerror(v_608); else
    v_608 = car(v_608);
    stack[-3] = v_608;
    v_608 = stack[-3];
    if (v_608 == nil) goto v_275;
    else goto v_276;
v_275:
    v_608 = nil;
    goto v_270;
v_276:
    v_608 = stack[-3];
    if (!car_legal(v_608)) v_608 = carerror(v_608); else
    v_608 = car(v_608);
    {   LispObject fn = basic_elt(env, 21); // xsimp
    v_608 = (*qfn1(fn))(fn, v_608);
    }
    env = stack[-10];
    v_608 = ncons(v_608);
    env = stack[-10];
    stack[-1] = v_608;
    stack[-2] = v_608;
v_271:
    v_608 = stack[-3];
    if (!car_legal(v_608)) v_608 = cdrerror(v_608); else
    v_608 = cdr(v_608);
    stack[-3] = v_608;
    v_608 = stack[-3];
    if (v_608 == nil) goto v_289;
    else goto v_290;
v_289:
    v_608 = stack[-2];
    goto v_270;
v_290:
    stack[0] = stack[-1];
    v_608 = stack[-3];
    if (!car_legal(v_608)) v_608 = carerror(v_608); else
    v_608 = car(v_608);
    {   LispObject fn = basic_elt(env, 21); // xsimp
    v_608 = (*qfn1(fn))(fn, v_608);
    }
    env = stack[-10];
    v_608 = ncons(v_608);
    env = stack[-10];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_608);
    v_608 = stack[-1];
    if (!car_legal(v_608)) v_608 = cdrerror(v_608); else
    v_608 = cdr(v_608);
    stack[-1] = v_608;
    goto v_271;
v_270:
    v_608 = ncons(v_608);
    env = stack[-10];
    if (!car_legal(stack[-4])) rplacd_fails(stack[-4]);
    setcdr(stack[-4], v_608);
    v_608 = stack[-5];
    if (!car_legal(v_608)) v_608 = cdrerror(v_608); else
    v_608 = cdr(v_608);
    stack[-5] = v_608;
    goto v_202;
v_201:
    stack[0] = v_608;
    goto v_12;
v_15:
    v_608 = stack[-8];
    if (!car_legal(v_608)) v_608 = carerror(v_608); else
    v_608 = car(v_608);
    if (!car_legal(v_608)) v_608 = cdrerror(v_608); else
    v_608 = cdr(v_608);
    if (!car_legal(v_608)) v_608 = carerror(v_608); else
    v_608 = car(v_608);
    {   LispObject fn = basic_elt(env, 22); // checksp
    v_609 = (*qfn1(fn))(fn, v_608);
    }
    env = stack[-10];
    v_608 = basic_elt(env, 6); // sparse
    if (v_609 == v_608) goto v_308;
    else goto v_309;
v_308:
    v_608 = stack[-8];
    if (!car_legal(v_608)) v_608 = carerror(v_608); else
    v_608 = car(v_608);
    if (!car_legal(v_608)) v_608 = cdrerror(v_608); else
    v_608 = cdr(v_608);
    if (!car_legal(v_608)) v_608 = carerror(v_608); else
    v_608 = car(v_608);
    {   LispObject fn = basic_elt(env, 23); // spmatsm
    v_608 = (*qfn1(fn))(fn, v_608);
    }
    env = stack[-10];
    stack[-2] = v_608;
    v_608 = stack[-2];
    v_608 = Lreverse(nil, v_608);
    env = stack[-10];
    if (!car_legal(v_608)) v_608 = carerror(v_608); else
    v_608 = car(v_608);
    if (!car_legal(v_608)) v_608 = cdrerror(v_608); else
    v_608 = cdr(v_608);
    v_609 = v_608;
    if (!car_legal(v_609)) v_609 = carerror(v_609); else
    v_609 = car(v_609);
    if (!car_legal(v_608)) v_608 = cdrerror(v_608); else
    v_608 = cdr(v_608);
    if (!car_legal(v_608)) v_608 = carerror(v_608); else
    v_608 = car(v_608);
    if (equal(v_609, v_608)) goto v_328;
    v_610 = basic_elt(env, 4); // matrix
    v_609 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_608 = basic_elt(env, 7); // "Non square matrix"
    {   LispObject fn = basic_elt(env, 20); // rerror
    v_608 = (*qfn3(fn))(fn, v_610, v_609, v_608);
    }
    env = stack[-10];
    goto v_326;
v_328:
v_326:
    goto v_307;
v_309:
    v_608 = stack[-8];
    if (!car_legal(v_608)) v_608 = carerror(v_608); else
    v_608 = car(v_608);
    if (!car_legal(v_608)) v_608 = cdrerror(v_608); else
    v_608 = cdr(v_608);
    if (!car_legal(v_608)) v_608 = carerror(v_608); else
    v_608 = car(v_608);
    {   LispObject fn = basic_elt(env, 24); // matsm
    v_608 = (*qfn1(fn))(fn, v_608);
    }
    env = stack[-10];
    stack[-2] = v_608;
    v_608 = stack[-2];
    if (!car_legal(v_608)) v_608 = carerror(v_608); else
    v_608 = car(v_608);
    stack[0] = Llength(nil, v_608);
    env = stack[-10];
    stack[-1] = stack[0];
    v_608 = stack[-2];
    v_608 = Llength(nil, v_608);
    env = stack[-10];
    if (equal(stack[0], v_608)) goto v_348;
    v_610 = basic_elt(env, 4); // matrix
    v_609 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_608 = basic_elt(env, 7); // "Non square matrix"
    {   LispObject fn = basic_elt(env, 20); // rerror
    v_608 = (*qfn3(fn))(fn, v_610, v_609, v_608);
    }
    env = stack[-10];
    goto v_346;
v_348:
    v_608 = stack[-9];
    if (v_608 == nil) goto v_359;
    stack[0] = stack[-1];
    v_608 = stack[-9];
    v_608 = Llength(nil, v_608);
    env = stack[-10];
    if (equal(stack[0], v_608)) goto v_359;
    v_610 = basic_elt(env, 4); // matrix
    v_609 = static_cast<LispObject>(80)+TAG_FIXNUM; // 5
    v_608 = basic_elt(env, 5); // "Matrix mismatch"
    {   LispObject fn = basic_elt(env, 20); // rerror
    v_608 = (*qfn3(fn))(fn, v_610, v_609, v_608);
    }
    env = stack[-10];
    goto v_346;
v_359:
    v_608 = stack[-8];
    if (!car_legal(v_608)) v_608 = carerror(v_608); else
    v_608 = car(v_608);
    if (!car_legal(v_608)) v_608 = cdrerror(v_608); else
    v_608 = cdr(v_608);
    if (!car_legal(v_608)) v_608 = cdrerror(v_608); else
    v_608 = cdr(v_608);
    if (v_608 == nil) goto v_371;
    goto v_17;
v_371:
    v_608 = stack[-2];
    if (!car_legal(v_608)) v_608 = cdrerror(v_608); else
    v_608 = cdr(v_608);
    if (v_608 == nil) goto v_380;
    else goto v_381;
v_380:
    v_608 = stack[-2];
    if (!car_legal(v_608)) v_608 = carerror(v_608); else
    v_608 = car(v_608);
    if (!car_legal(v_608)) v_608 = cdrerror(v_608); else
    v_608 = cdr(v_608);
    v_608 = (v_608 == nil ? lisp_true : nil);
    goto v_379;
v_381:
    v_608 = nil;
    goto v_379;
    v_608 = nil;
v_379:
    if (v_608 == nil) goto v_377;
    goto v_16;
v_377:
v_346:
    goto v_307;
v_307:
    v_608 = qvalue(basic_elt(env, 8)); // subfg!*
    stack[0] = v_608;
    v_608 = nil;
    setvalue(basic_elt(env, 8), v_608); // subfg!*
    v_608 = stack[-9];
    if (v_608 == nil) goto v_395;
    else goto v_396;
v_395:
    v_609 = basic_elt(env, 3); // mat
    v_608 = basic_elt(env, 9); // inversefn
    v_609 = get(v_609, v_608);
    env = stack[-10];
    v_608 = stack[-2];
    v_608 = Lapply1(nil, v_609, v_608);
    env = stack[-10];
    stack[-9] = v_608;
    goto v_394;
v_396:
    v_608 = stack[-9];
    if (!car_legal(v_608)) v_608 = carerror(v_608); else
    v_608 = car(v_608);
    if (!car_legal(v_608)) v_609 = carerror(v_608); else
    v_609 = car(v_608);
    v_608 = basic_elt(env, 2); // sparsemat
    if (v_609 == v_608) goto v_403;
    else goto v_404;
v_403:
    v_609 = basic_elt(env, 3); // mat
    v_608 = basic_elt(env, 9); // inversefn
    v_609 = get(v_609, v_608);
    env = stack[-10];
    v_608 = stack[-2];
    v_608 = Lapply1(nil, v_609, v_608);
    env = stack[-10];
    if (!car_legal(v_608)) v_609 = carerror(v_608); else
    v_609 = car(v_608);
    v_608 = stack[-9];
    {   LispObject fn = basic_elt(env, 15); // spmultm
    v_608 = (*qfn2(fn))(fn, v_609, v_608);
    }
    env = stack[-10];
    v_608 = ncons(v_608);
    env = stack[-10];
    stack[-9] = v_608;
    v_608 = stack[-8];
    if (!car_legal(v_608)) v_608 = cdrerror(v_608); else
    v_608 = cdr(v_608);
    stack[-8] = v_608;
    goto v_394;
v_404:
    v_609 = basic_elt(env, 3); // mat
    v_608 = basic_elt(env, 10); // lnrsolvefn
    v_608 = get(v_609, v_608);
    env = stack[-10];
    stack[0] = v_608;
    if (v_608 == nil) goto v_421;
    else goto v_422;
v_421:
    v_609 = basic_elt(env, 3); // mat
    v_608 = basic_elt(env, 9); // inversefn
    v_609 = get(v_609, v_608);
    env = stack[-10];
    v_608 = stack[-2];
    v_609 = Lapply1(nil, v_609, v_608);
    env = stack[-10];
    v_608 = stack[-9];
    {   LispObject fn = basic_elt(env, 18); // multm
    v_608 = (*qfn2(fn))(fn, v_609, v_608);
    }
    env = stack[-10];
    stack[-9] = v_608;
    goto v_394;
v_422:
    v_609 = basic_elt(env, 3); // mat
    v_608 = basic_elt(env, 10); // lnrsolvefn
    v_610 = get(v_609, v_608);
    env = stack[-10];
    v_609 = stack[-2];
    v_608 = stack[-9];
    v_608 = Lapply2(nil, v_610, v_609, v_608);
    env = stack[-10];
    stack[-9] = v_608;
    goto v_394;
v_394:
    v_608 = stack[0];
    setvalue(basic_elt(env, 8), v_608); // subfg!*
    v_608 = stack[-9];
    if (!car_legal(v_608)) v_608 = carerror(v_608); else
    v_608 = car(v_608);
    if (!car_legal(v_608)) v_609 = carerror(v_608); else
    v_609 = car(v_608);
    v_608 = basic_elt(env, 2); // sparsemat
    if (v_609 == v_608) goto v_444;
    else goto v_445;
v_444:
    v_608 = stack[-9];
    stack[-9] = v_608;
    goto v_443;
v_445:
    v_608 = stack[-9];
    stack[-7] = v_608;
    v_608 = stack[-7];
    if (v_608 == nil) goto v_462;
    else goto v_463;
v_462:
    v_608 = nil;
    goto v_457;
v_463:
    v_608 = stack[-7];
    if (!car_legal(v_608)) v_608 = carerror(v_608); else
    v_608 = car(v_608);
    stack[-3] = v_608;
    v_608 = stack[-3];
    if (v_608 == nil) goto v_479;
    else goto v_480;
v_479:
    v_608 = nil;
    goto v_474;
v_480:
    v_608 = stack[-3];
    if (!car_legal(v_608)) v_608 = carerror(v_608); else
    v_608 = car(v_608);
    v_609 = v_608;
    v_608 = lisp_true;
    setvalue(basic_elt(env, 11), v_608); // !*sub2
    v_608 = v_609;
    {   LispObject fn = basic_elt(env, 25); // subs2
    v_608 = (*qfn1(fn))(fn, v_608);
    }
    env = stack[-10];
    v_608 = ncons(v_608);
    env = stack[-10];
    stack[-1] = v_608;
    stack[-2] = v_608;
v_475:
    v_608 = stack[-3];
    if (!car_legal(v_608)) v_608 = cdrerror(v_608); else
    v_608 = cdr(v_608);
    stack[-3] = v_608;
    v_608 = stack[-3];
    if (v_608 == nil) goto v_494;
    else goto v_495;
v_494:
    v_608 = stack[-2];
    goto v_474;
v_495:
    stack[0] = stack[-1];
    v_608 = stack[-3];
    if (!car_legal(v_608)) v_608 = carerror(v_608); else
    v_608 = car(v_608);
    v_609 = v_608;
    v_608 = lisp_true;
    setvalue(basic_elt(env, 11), v_608); // !*sub2
    v_608 = v_609;
    {   LispObject fn = basic_elt(env, 25); // subs2
    v_608 = (*qfn1(fn))(fn, v_608);
    }
    env = stack[-10];
    v_608 = ncons(v_608);
    env = stack[-10];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_608);
    v_608 = stack[-1];
    if (!car_legal(v_608)) v_608 = cdrerror(v_608); else
    v_608 = cdr(v_608);
    stack[-1] = v_608;
    goto v_475;
v_474:
    v_608 = ncons(v_608);
    env = stack[-10];
    stack[-5] = v_608;
    stack[-6] = v_608;
v_458:
    v_608 = stack[-7];
    if (!car_legal(v_608)) v_608 = cdrerror(v_608); else
    v_608 = cdr(v_608);
    stack[-7] = v_608;
    v_608 = stack[-7];
    if (v_608 == nil) goto v_513;
    else goto v_514;
v_513:
    v_608 = stack[-6];
    goto v_457;
v_514:
    stack[-4] = stack[-5];
    v_608 = stack[-7];
    if (!car_legal(v_608)) v_608 = carerror(v_608); else
    v_608 = car(v_608);
    stack[-3] = v_608;
    v_608 = stack[-3];
    if (v_608 == nil) goto v_531;
    else goto v_532;
v_531:
    v_608 = nil;
    goto v_526;
v_532:
    v_608 = stack[-3];
    if (!car_legal(v_608)) v_608 = carerror(v_608); else
    v_608 = car(v_608);
    v_609 = v_608;
    v_608 = lisp_true;
    setvalue(basic_elt(env, 11), v_608); // !*sub2
    v_608 = v_609;
    {   LispObject fn = basic_elt(env, 25); // subs2
    v_608 = (*qfn1(fn))(fn, v_608);
    }
    env = stack[-10];
    v_608 = ncons(v_608);
    env = stack[-10];
    stack[-1] = v_608;
    stack[-2] = v_608;
v_527:
    v_608 = stack[-3];
    if (!car_legal(v_608)) v_608 = cdrerror(v_608); else
    v_608 = cdr(v_608);
    stack[-3] = v_608;
    v_608 = stack[-3];
    if (v_608 == nil) goto v_546;
    else goto v_547;
v_546:
    v_608 = stack[-2];
    goto v_526;
v_547:
    stack[0] = stack[-1];
    v_608 = stack[-3];
    if (!car_legal(v_608)) v_608 = carerror(v_608); else
    v_608 = car(v_608);
    v_609 = v_608;
    v_608 = lisp_true;
    setvalue(basic_elt(env, 11), v_608); // !*sub2
    v_608 = v_609;
    {   LispObject fn = basic_elt(env, 25); // subs2
    v_608 = (*qfn1(fn))(fn, v_608);
    }
    env = stack[-10];
    v_608 = ncons(v_608);
    env = stack[-10];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_608);
    v_608 = stack[-1];
    if (!car_legal(v_608)) v_608 = cdrerror(v_608); else
    v_608 = cdr(v_608);
    stack[-1] = v_608;
    goto v_527;
v_526:
    v_608 = ncons(v_608);
    env = stack[-10];
    if (!car_legal(stack[-4])) rplacd_fails(stack[-4]);
    setcdr(stack[-4], v_608);
    v_608 = stack[-5];
    if (!car_legal(v_608)) v_608 = cdrerror(v_608); else
    v_608 = cdr(v_608);
    stack[-5] = v_608;
    goto v_458;
v_457:
    stack[-9] = v_608;
    goto v_443;
v_443:
    goto v_13;
v_16:
    v_608 = stack[-2];
    if (!car_legal(v_608)) v_608 = carerror(v_608); else
    v_608 = car(v_608);
    if (!car_legal(v_608)) v_608 = carerror(v_608); else
    v_608 = car(v_608);
    if (!car_legal(v_608)) v_608 = carerror(v_608); else
    v_608 = car(v_608);
    if (v_608 == nil) goto v_566;
    else goto v_567;
v_566:
    v_610 = basic_elt(env, 4); // matrix
    v_609 = static_cast<LispObject>(96)+TAG_FIXNUM; // 6
    v_608 = basic_elt(env, 12); // "Zero divisor"
    {   LispObject fn = basic_elt(env, 20); // rerror
    v_608 = (*qfn3(fn))(fn, v_610, v_609, v_608);
    }
    env = stack[-10];
    goto v_565;
v_567:
v_565:
    v_608 = stack[-2];
    if (!car_legal(v_608)) v_608 = carerror(v_608); else
    v_608 = car(v_608);
    if (!car_legal(v_608)) v_608 = carerror(v_608); else
    v_608 = car(v_608);
    {   LispObject fn = basic_elt(env, 26); // revpr
    v_608 = (*qfn1(fn))(fn, v_608);
    }
    env = stack[-10];
    stack[-2] = v_608;
    v_608 = stack[-9];
    if (v_608 == nil) goto v_582;
    else goto v_583;
v_582:
    v_608 = stack[-2];
    v_608 = ncons(v_608);
    env = stack[-10];
    v_608 = ncons(v_608);
    env = stack[-10];
    goto v_581;
v_583:
    v_609 = stack[-2];
    v_608 = stack[-9];
    {   LispObject fn = basic_elt(env, 17); // multsm
    v_608 = (*qfn2(fn))(fn, v_609, v_608);
    }
    env = stack[-10];
    goto v_581;
    v_608 = nil;
v_581:
    stack[-9] = v_608;
    goto v_13;
v_17:
    v_608 = stack[-9];
    if (v_608 == nil) goto v_595;
    else goto v_596;
v_595:
    v_608 = stack[-1];
    {   LispObject fn = basic_elt(env, 27); // generateident
    v_608 = (*qfn1(fn))(fn, v_608);
    }
    env = stack[-10];
    stack[-9] = v_608;
    goto v_594;
v_596:
v_594:
    goto v_13;
v_18:
    stack[-1] = basic_elt(env, 4); // matrix
    stack[0] = static_cast<LispObject>(112)+TAG_FIXNUM; // 7
    v_610 = basic_elt(env, 13); // "Matrix"
    v_608 = stack[-8];
    if (!car_legal(v_608)) v_609 = carerror(v_608); else
    v_609 = car(v_608);
    v_608 = basic_elt(env, 14); // "not set"
    v_608 = list3(v_610, v_609, v_608);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 20); // rerror
    v_608 = (*qfn3(fn))(fn, stack[-1], stack[0], v_608);
    }
    v_608 = nil;
v_10:
    return onevalue(v_608);
}



// Code for recaliasbacksubst

static LispObject CC_recaliasbacksubst(LispObject env,
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
    real_push(nil, nil, nil, nil, nil);
    stack_popper stack_popper_var(6);
// copy arguments values to proper place
    stack[-3] = v_3;
    stack[0] = v_2;
// end of prologue
    v_74 = stack[0];
    if (!consp(v_74)) goto v_11;
    else goto v_12;
v_11:
    v_74 = lisp_true;
    goto v_10;
v_12:
    v_74 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // constp
    v_74 = (*qfn1(fn))(fn, v_74);
    }
    env = stack[-5];
    goto v_10;
    v_74 = nil;
v_10:
    if (v_74 == nil) goto v_8;
    v_75 = stack[0];
    v_74 = stack[-3];
    v_74 = Lassoc(nil, v_75, v_74);
    if (v_74 == nil) goto v_22;
    v_75 = stack[0];
    v_74 = stack[-3];
    v_74 = Lassoc(nil, v_75, v_74);
    if (!car_legal(v_74)) v_74 = cdrerror(v_74); else
    v_74 = cdr(v_74);
    goto v_20;
v_22:
    v_74 = stack[0];
    goto v_20;
    v_74 = nil;
v_20:
    goto v_6;
v_8:
    v_74 = stack[0];
    stack[-4] = v_74;
    v_74 = stack[-4];
    if (v_74 == nil) goto v_44;
    else goto v_45;
v_44:
    v_74 = nil;
    goto v_39;
v_45:
    v_74 = stack[-4];
    if (!car_legal(v_74)) v_74 = carerror(v_74); else
    v_74 = car(v_74);
    v_75 = v_74;
    v_74 = stack[-3];
    {   LispObject fn = basic_elt(env, 0); // recaliasbacksubst
    v_74 = (*qfn2(fn))(fn, v_75, v_74);
    }
    env = stack[-5];
    v_74 = ncons(v_74);
    env = stack[-5];
    stack[-1] = v_74;
    stack[-2] = v_74;
v_40:
    v_74 = stack[-4];
    if (!car_legal(v_74)) v_74 = cdrerror(v_74); else
    v_74 = cdr(v_74);
    stack[-4] = v_74;
    v_74 = stack[-4];
    if (v_74 == nil) goto v_59;
    else goto v_60;
v_59:
    v_74 = stack[-2];
    goto v_39;
v_60:
    stack[0] = stack[-1];
    v_74 = stack[-4];
    if (!car_legal(v_74)) v_74 = carerror(v_74); else
    v_74 = car(v_74);
    v_75 = v_74;
    v_74 = stack[-3];
    {   LispObject fn = basic_elt(env, 0); // recaliasbacksubst
    v_74 = (*qfn2(fn))(fn, v_75, v_74);
    }
    env = stack[-5];
    v_74 = ncons(v_74);
    env = stack[-5];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_74);
    v_74 = stack[-1];
    if (!car_legal(v_74)) v_74 = cdrerror(v_74); else
    v_74 = cdr(v_74);
    stack[-1] = v_74;
    goto v_40;
v_39:
    goto v_6;
    v_74 = nil;
v_6:
    return onevalue(v_74);
}



// Code for dipprodin

static LispObject CC_dipprodin(LispObject env,
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
    stack[-2] = nil;
v_9:
    v_51 = stack[-1];
    if (v_51 == nil) goto v_18;
    else goto v_19;
v_18:
    v_51 = lisp_true;
    goto v_17;
v_19:
    v_51 = stack[0];
    v_51 = (v_51 == nil ? lisp_true : nil);
    goto v_17;
    v_51 = nil;
v_17:
    if (v_51 == nil) goto v_15;
    goto v_10;
v_15:
    v_51 = stack[-1];
    if (!car_legal(v_51)) v_51 = cdrerror(v_51); else
    v_51 = cdr(v_51);
    if (!car_legal(v_51)) v_53 = carerror(v_51); else
    v_53 = car(v_51);
    v_51 = stack[-1];
    if (!car_legal(v_51)) v_52 = carerror(v_51); else
    v_52 = car(v_51);
    v_51 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // dipprodin1
    v_52 = (*qfn3(fn))(fn, v_53, v_52, v_51);
    }
    env = stack[-3];
    v_51 = stack[-2];
    v_51 = cons(v_52, v_51);
    env = stack[-3];
    stack[-2] = v_51;
    v_51 = stack[-1];
    if (!car_legal(v_51)) v_51 = cdrerror(v_51); else
    v_51 = cdr(v_51);
    if (!car_legal(v_51)) v_51 = cdrerror(v_51); else
    v_51 = cdr(v_51);
    stack[-1] = v_51;
    goto v_9;
v_10:
    v_51 = qvalue(basic_elt(env, 1)); // dipzero
    v_52 = v_51;
v_11:
    v_51 = stack[-2];
    if (v_51 == nil) goto v_41;
    else goto v_42;
v_41:
    v_51 = v_52;
    goto v_8;
v_42:
    v_51 = stack[-2];
    v_51 = car(v_51);
    {   LispObject fn = basic_elt(env, 3); // dipsum
    v_51 = (*qfn2(fn))(fn, v_51, v_52);
    }
    env = stack[-3];
    v_52 = v_51;
    v_51 = stack[-2];
    v_51 = cdr(v_51);
    stack[-2] = v_51;
    goto v_11;
v_8:
    return onevalue(v_51);
}



// Code for difference!:

static LispObject CC_differenceT(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_69, v_70, v_71, v_72;
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
    v_71 = v_3;
    v_72 = v_2;
// end of prologue
    v_69 = v_72;
    if (!car_legal(v_69)) v_69 = cdrerror(v_69); else
    v_69 = cdr(v_69);
    if (!car_legal(v_69)) v_70 = carerror(v_69); else
    v_70 = car(v_69);
    stack[-1] = v_70;
    v_69 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_70 == v_69) goto v_14;
    else goto v_15;
v_14:
    v_69 = v_71;
    {
        LispObject fn = basic_elt(env, 2); // minus!:
        return (*qfn1(fn))(fn, v_69);
    }
v_15:
    v_69 = v_71;
    if (!car_legal(v_69)) v_69 = cdrerror(v_69); else
    v_69 = cdr(v_69);
    if (!car_legal(v_69)) v_70 = carerror(v_69); else
    v_70 = car(v_69);
    stack[0] = v_70;
    v_69 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_70 == v_69) goto v_22;
    else goto v_23;
v_22:
    v_69 = v_72;
    goto v_13;
v_23:
    v_69 = v_72;
    if (!car_legal(v_69)) v_69 = cdrerror(v_69); else
    v_69 = cdr(v_69);
    if (!car_legal(v_69)) v_69 = cdrerror(v_69); else
    v_69 = cdr(v_69);
    stack[-4] = v_69;
    v_70 = v_71;
    if (!car_legal(v_70)) v_70 = cdrerror(v_70); else
    v_70 = cdr(v_70);
    if (!car_legal(v_70)) v_70 = cdrerror(v_70); else
    v_70 = cdr(v_70);
    stack[-2] = v_70;
    v_70 = difference2(v_69, v_70);
    env = stack[-5];
    stack[-3] = v_70;
    v_69 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_70 == v_69) goto v_29;
    else goto v_30;
v_29:
    stack[-2] = basic_elt(env, 1); // !:rd!:
    v_70 = stack[-1];
    v_69 = stack[0];
    v_70 = difference2(v_70, v_69);
    v_69 = stack[-4];
    {
        LispObject v_78 = stack[-2];
        return list2star(v_78, v_70, v_69);
    }
v_30:
    v_70 = stack[-3];
    v_69 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_69 = static_cast<LispObject>(greaterp2(v_70, v_69));
    v_69 = v_69 ? lisp_true : nil;
    env = stack[-5];
    if (v_69 == nil) goto v_46;
    stack[-4] = basic_elt(env, 1); // !:rd!:
    v_70 = stack[-1];
    v_69 = stack[-3];
    {   LispObject fn = basic_elt(env, 3); // ashift
    v_70 = (*qfn2(fn))(fn, v_70, v_69);
    }
    env = stack[-5];
    v_69 = stack[0];
    v_70 = difference2(v_70, v_69);
    v_69 = stack[-2];
    {
        LispObject v_79 = stack[-4];
        return list2star(v_79, v_70, v_69);
    }
v_46:
    stack[-2] = basic_elt(env, 1); // !:rd!:
    v_69 = stack[-3];
    v_69 = negate(v_69);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 3); // ashift
    v_69 = (*qfn2(fn))(fn, stack[0], v_69);
    }
    env = stack[-5];
    v_70 = difference2(stack[-1], v_69);
    v_69 = stack[-4];
    {
        LispObject v_80 = stack[-2];
        return list2star(v_80, v_70, v_69);
    }
    v_69 = nil;
v_13:
    return onevalue(v_69);
}



// Code for evaluate!-horner

static LispObject CC_evaluateKhorner(LispObject env,
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
    v_33 = stack[-1];
    v_32 = qvalue(basic_elt(env, 1)); // horner!-cache!*
    v_32 = Lassoc(nil, v_33, v_32);
    stack[-2] = v_32;
    v_32 = stack[-2];
    if (v_32 == nil) goto v_11;
    v_32 = stack[-2];
    if (!car_legal(v_32)) v_32 = cdrerror(v_32); else
    v_32 = cdr(v_32);
    goto v_9;
v_11:
    v_32 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // simp!*
    v_32 = (*qfn1(fn))(fn, v_32);
    }
    env = stack[-3];
    stack[-2] = v_32;
    v_32 = stack[-2];
    if (!car_legal(v_32)) v_32 = carerror(v_32); else
    v_32 = car(v_32);
    {   LispObject fn = basic_elt(env, 3); // hornerf
    stack[0] = (*qfn1(fn))(fn, v_32);
    }
    env = stack[-3];
    v_32 = stack[-2];
    if (!car_legal(v_32)) v_32 = cdrerror(v_32); else
    v_32 = cdr(v_32);
    {   LispObject fn = basic_elt(env, 3); // hornerf
    v_32 = (*qfn1(fn))(fn, v_32);
    }
    env = stack[-3];
    v_32 = cons(stack[0], v_32);
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 4); // prepsq
    v_32 = (*qfn1(fn))(fn, v_32);
    }
    env = stack[-3];
    stack[-2] = v_32;
    v_34 = stack[-1];
    v_33 = stack[-2];
    v_32 = qvalue(basic_elt(env, 1)); // horner!-cache!*
    v_32 = acons(v_34, v_33, v_32);
    env = stack[-3];
    setvalue(basic_elt(env, 1), v_32); // horner!-cache!*
    v_32 = stack[-2];
    goto v_9;
    v_32 = nil;
v_9:
    return onevalue(v_32);
}



// Code for indexsymmetrize

static LispObject CC_indexsymmetrize(LispObject env,
                         LispObject v_2)
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
    v_48 = stack[-2];
    if (!car_legal(v_48)) v_49 = carerror(v_48); else
    v_49 = car(v_48);
    v_48 = basic_elt(env, 1); // indxsymmetrize
    v_48 = get(v_49, v_48);
    env = stack[-4];
    stack[-3] = v_48;
    v_48 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[0] = v_48;
    v_49 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_48 = stack[-2];
    if (!car_legal(v_48)) v_48 = cdrerror(v_48); else
    v_48 = cdr(v_48);
    v_48 = cons(v_49, v_48);
    env = stack[-4];
    stack[-1] = v_48;
v_9:
    v_48 = stack[-3];
    if (v_48 == nil) goto v_22;
    else goto v_23;
v_22:
    v_50 = stack[0];
    v_48 = stack[-2];
    if (!car_legal(v_48)) v_49 = carerror(v_48); else
    v_49 = car(v_48);
    v_48 = stack[-1];
    if (!car_legal(v_48)) v_48 = cdrerror(v_48); else
    v_48 = cdr(v_48);
    return list2star(v_50, v_49, v_48);
v_23:
    v_48 = stack[-3];
    if (!car_legal(v_48)) v_49 = carerror(v_48); else
    v_49 = car(v_48);
    v_48 = stack[-1];
    if (!car_legal(v_48)) v_48 = cdrerror(v_48); else
    v_48 = cdr(v_48);
    v_48 = Lapply1(nil, v_49, v_48);
    env = stack[-4];
    stack[-1] = v_48;
    v_48 = stack[-1];
    if (v_48 == nil) goto v_38;
    else goto v_39;
v_38:
    v_48 = nil;
    goto v_8;
v_39:
    v_48 = stack[-1];
    if (!car_legal(v_48)) v_49 = carerror(v_48); else
    v_49 = car(v_48);
    v_48 = stack[0];
    v_48 = times2(v_49, v_48);
    env = stack[-4];
    stack[0] = v_48;
    v_48 = stack[-3];
    if (!car_legal(v_48)) v_48 = cdrerror(v_48); else
    v_48 = cdr(v_48);
    stack[-3] = v_48;
    goto v_9;
v_8:
    return onevalue(v_48);
}



// Code for po!:statep

static LispObject CC_poTstatep(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_41, v_42, v_43;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_43 = v_2;
// end of prologue
    v_41 = v_43;
    if (symbolp(v_41)) goto v_10;
    v_41 = nil;
    goto v_8;
v_10:
    v_41 = v_43;
    if (!symbolp(v_41)) v_42 = nil;
    else { v_42 = qfastgets(v_41);
           if (v_42 != nil) { v_42 = elt(v_42, 18); // phystype
#ifdef RECORD_GET
             if (v_42 != SPID_NOPROP)
                record_get(elt(fastget_names, 18), 1);
             else record_get(elt(fastget_names, 18), 0),
                v_42 = nil; }
           else record_get(elt(fastget_names, 18), 0); }
#else
             if (v_42 == SPID_NOPROP) v_42 = nil; }}
#endif
    v_41 = basic_elt(env, 1); // state
    v_41 = (v_42 == v_41 ? lisp_true : nil);
    goto v_8;
    v_41 = nil;
v_8:
    if (v_41 == nil) goto v_6;
    else goto v_5;
v_6:
    v_41 = v_43;
    if (!consp(v_41)) goto v_22;
    v_41 = v_43;
    if (!car_legal(v_41)) v_41 = carerror(v_41); else
    v_41 = car(v_41);
    if (symbolp(v_41)) goto v_27;
    v_41 = nil;
    goto v_25;
v_27:
    v_41 = v_43;
    if (!car_legal(v_41)) v_41 = carerror(v_41); else
    v_41 = car(v_41);
    if (!symbolp(v_41)) v_41 = nil;
    else { v_41 = qfastgets(v_41);
           if (v_41 != nil) { v_41 = elt(v_41, 18); // phystype
#ifdef RECORD_GET
             if (v_41 != SPID_NOPROP)
                record_get(elt(fastget_names, 18), 1);
             else record_get(elt(fastget_names, 18), 0),
                v_41 = nil; }
           else record_get(elt(fastget_names, 18), 0); }
#else
             if (v_41 == SPID_NOPROP) v_41 = nil; }}
#endif
    v_42 = basic_elt(env, 1); // state
    v_41 = (v_41 == v_42 ? lisp_true : nil);
    goto v_25;
    v_41 = nil;
v_25:
    goto v_20;
v_22:
    v_41 = nil;
    goto v_20;
    v_41 = nil;
v_20:
v_5:
    return onevalue(v_41);
}



// Code for color!-strand

static LispObject CC_colorKstrand(LispObject env,
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    stack[0] = v_4;
    stack[-1] = v_3;
    stack[-2] = v_2;
// end of prologue
    stack[-3] = nil;
v_9:
    v_30 = stack[-1];
    if (v_30 == nil) goto v_12;
    else goto v_13;
v_12:
    v_30 = stack[-3];
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn1(fn))(fn, v_30);
    }
v_13:
    v_31 = stack[-2];
    v_30 = stack[-1];
    if (!car_legal(v_30)) v_30 = carerror(v_30); else
    v_30 = car(v_30);
    {   LispObject fn = basic_elt(env, 2); // color!-roads
    v_32 = (*qfn2(fn))(fn, v_31, v_30);
    }
    env = stack[-4];
    v_31 = stack[0];
    v_30 = stack[-3];
    v_30 = acons(v_32, v_31, v_30);
    env = stack[-4];
    stack[-3] = v_30;
    v_30 = stack[-1];
    if (!car_legal(v_30)) v_30 = cdrerror(v_30); else
    v_30 = cdr(v_30);
    stack[-1] = v_30;
    v_30 = stack[0];
    v_30 = add1(v_30);
    env = stack[-4];
    stack[0] = v_30;
    goto v_9;
    v_30 = nil;
    return onevalue(v_30);
}



// Code for greaterpcdr

static LispObject CC_greaterpcdr(LispObject env,
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
        return Lgreaterp_2(nil, v_11, v_10);
}



// Code for clogsq!*

static LispObject CC_clogsqH(LispObject env,
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    v_28 = v_2;
// end of prologue
// Binding !*div
// FLUIDBIND: reloadenv=4 litvec-offset=1 saveloc=3
{   bind_fluid_stack bind_fluid_var(-4, 1, -3);
    setvalue(basic_elt(env, 1), nil); // !*div
// Binding !*combinelogs
// FLUIDBIND: reloadenv=4 litvec-offset=2 saveloc=2
{   bind_fluid_stack bind_fluid_var(-4, 2, -2);
    setvalue(basic_elt(env, 2), nil); // !*combinelogs
// Binding !*expandlogs
// FLUIDBIND: reloadenv=4 litvec-offset=3 saveloc=1
{   bind_fluid_stack bind_fluid_var(-4, 3, -1);
    setvalue(basic_elt(env, 3), nil); // !*expandlogs
    v_29 = lisp_true;
    setvalue(basic_elt(env, 3), v_29); // !*expandlogs
    setvalue(basic_elt(env, 1), v_29); // !*div
    v_29 = lisp_true;
// Binding !*uncached
// FLUIDBIND: reloadenv=4 litvec-offset=4 saveloc=0
{   bind_fluid_stack bind_fluid_var(-4, 4, 0);
    setvalue(basic_elt(env, 4), v_29); // !*uncached
    {   LispObject fn = basic_elt(env, 5); // prepsq
    v_28 = (*qfn1(fn))(fn, v_28);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 6); // simp
    v_28 = (*qfn1(fn))(fn, v_28);
    }
    env = stack[-4];
    ;}  // end of a binding scope
    v_29 = nil;
    setvalue(basic_elt(env, 3), v_29); // !*expandlogs
    {   LispObject fn = basic_elt(env, 7); // prepsq!*
    v_28 = (*qfn1(fn))(fn, v_28);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 8); // comblog
    v_28 = (*qfn1(fn))(fn, v_28);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 9); // simp!*
    v_28 = (*qfn1(fn))(fn, v_28);
    }
    ;}  // end of a binding scope
    ;}  // end of a binding scope
    ;}  // end of a binding scope
    return onevalue(v_28);
}



// Code for fs!:prin

static LispObject CC_fsTprin(LispObject env,
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
    v_34 = stack[0];
    if (v_34 == nil) goto v_6;
    else goto v_7;
v_6:
    v_34 = basic_elt(env, 1); // " 0 "
    {
        LispObject fn = basic_elt(env, 3); // prin2!*
        return (*qfn1(fn))(fn, v_34);
    }
v_7:
v_15:
    v_34 = stack[0];
    if (v_34 == nil) goto v_18;
    else goto v_19;
v_18:
    v_34 = nil;
    goto v_14;
v_19:
    v_34 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // fs!:prin1
    v_34 = (*qfn1(fn))(fn, v_34);
    }
    env = stack[-1];
    v_35 = stack[0];
    v_34 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_34 = Lgetv(nil, v_35, v_34);
    env = stack[-1];
    stack[0] = v_34;
    v_34 = stack[0];
    if (v_34 == nil) goto v_30;
    v_34 = basic_elt(env, 2); // " + "
    {   LispObject fn = basic_elt(env, 3); // prin2!*
    v_34 = (*qfn1(fn))(fn, v_34);
    }
    env = stack[-1];
    goto v_28;
v_30:
v_28:
    goto v_15;
v_14:
    goto v_5;
    v_34 = nil;
v_5:
    return onevalue(v_34);
}



// Code for dfprintfn

static LispObject CC_dfprintfn(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_45, v_46, v_47;
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
    v_46 = qvalue(basic_elt(env, 1)); // !*nat
    if (v_46 == nil) goto v_10;
    else goto v_11;
v_10:
    v_46 = lisp_true;
    goto v_9;
v_11:
    v_46 = qvalue(basic_elt(env, 2)); // !*fort
    if (v_46 == nil) goto v_18;
    else goto v_17;
v_18:
    v_46 = qvalue(basic_elt(env, 3)); // !*dfprint
    v_46 = (v_46 == nil ? lisp_true : nil);
v_17:
    goto v_9;
    v_46 = nil;
v_9:
    if (v_46 == nil) goto v_7;
    v_45 = basic_elt(env, 4); // failed
    goto v_5;
v_7:
    v_46 = basic_elt(env, 5); // !!df!!
    if (!car_legal(v_45)) v_45 = cdrerror(v_45); else
    v_45 = cdr(v_45);
    v_47 = cons(v_46, v_45);
    env = stack[0];
    v_46 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_45 = nil;
    {   LispObject fn = basic_elt(env, 6); // layout!-formula
    v_45 = (*qfn3(fn))(fn, v_47, v_46, v_45);
    }
    env = stack[0];
    v_46 = v_45;
    v_45 = v_46;
    if (v_45 == nil) goto v_37;
    else goto v_38;
v_37:
    v_45 = basic_elt(env, 4); // failed
    goto v_27;
v_38:
    v_45 = v_46;
    {   LispObject fn = basic_elt(env, 7); // putpline
    v_45 = (*qfn1(fn))(fn, v_45);
    }
    goto v_36;
v_36:
    v_45 = nil;
v_27:
    goto v_5;
    v_45 = nil;
v_5:
    return onevalue(v_45);
}



// Code for msolve!-poly1

static LispObject CC_msolveKpoly1(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_208, v_209, v_210;
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
    v_208 = stack[-5];
    if (!consp(v_208)) goto v_17;
    else goto v_18;
v_17:
    v_208 = lisp_true;
    goto v_16;
v_18:
    v_208 = stack[-5];
    if (!car_legal(v_208)) v_208 = carerror(v_208); else
    v_208 = car(v_208);
    v_208 = (consp(v_208) ? nil : lisp_true);
    goto v_16;
    v_208 = nil;
v_16:
    if (v_208 == nil) goto v_14;
    goto v_12;
v_14:
    v_208 = stack[-5];
    if (!car_legal(v_208)) v_208 = carerror(v_208); else
    v_208 = car(v_208);
    if (!car_legal(v_208)) v_208 = carerror(v_208); else
    v_208 = car(v_208);
    if (!car_legal(v_208)) v_209 = cdrerror(v_208); else
    v_209 = cdr(v_208);
    v_208 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_209 == v_208) goto v_27;
    else goto v_28;
v_27:
    v_208 = stack[-5];
    if (!car_legal(v_208)) v_208 = carerror(v_208); else
    v_208 = car(v_208);
    if (!car_legal(v_208)) v_208 = cdrerror(v_208); else
    v_208 = cdr(v_208);
    {   LispObject fn = basic_elt(env, 4); // safe!-modrecip
    v_208 = (*qfn1(fn))(fn, v_208);
    }
    env = stack[-7];
    stack[0] = v_208;
    v_208 = nil;
    setvalue(basic_elt(env, 1), v_208); // erfg!*
    v_208 = stack[0];
    if (v_208 == nil) goto v_41;
    else goto v_42;
v_41:
    goto v_9;
v_42:
    v_208 = stack[-5];
    if (!car_legal(v_208)) v_208 = cdrerror(v_208); else
    v_208 = cdr(v_208);
    {   LispObject fn = basic_elt(env, 5); // negf
    v_208 = (*qfn1(fn))(fn, v_208);
    }
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 6); // multf
    v_208 = (*qfn2(fn))(fn, stack[0], v_208);
    }
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 7); // moduntag
    v_208 = (*qfn1(fn))(fn, v_208);
    }
    env = stack[-7];
    stack[0] = v_208;
    v_208 = stack[0];
    if (v_208 == nil) goto v_53;
    v_209 = stack[0];
    v_208 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_208 = static_cast<LispObject>(lessp2(v_209, v_208));
    v_208 = v_208 ? lisp_true : nil;
    env = stack[-7];
    if (v_208 == nil) goto v_57;
    else goto v_56;
v_57:
    v_209 = stack[0];
    v_208 = qvalue(basic_elt(env, 2)); // current!-modulus
    v_208 = static_cast<LispObject>(greaterp2(v_209, v_208));
    v_208 = v_208 ? lisp_true : nil;
    env = stack[-7];
    if (v_208 == nil) goto v_61;
    else goto v_56;
v_61:
    goto v_53;
v_56:
    v_208 = stack[0];
    {   LispObject fn = basic_elt(env, 8); // general!-modular!-number
    v_208 = (*qfn1(fn))(fn, v_208);
    }
    env = stack[-7];
    stack[0] = v_208;
    goto v_51;
v_53:
v_51:
    v_208 = stack[0];
    v_208 = ncons(v_208);
    env = stack[-7];
    stack[0] = v_208;
    goto v_10;
v_28:
v_12:
v_9:
    v_210 = stack[-5];
    v_209 = stack[-4];
    v_208 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {   LispObject fn = basic_elt(env, 9); // lowestdeg
    v_208 = (*qfn3(fn))(fn, v_210, v_209, v_208);
    }
    env = stack[-7];
    stack[-6] = v_208;
    v_209 = stack[-6];
    v_208 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_208 = static_cast<LispObject>(greaterp2(v_209, v_208));
    v_208 = v_208 ? lisp_true : nil;
    env = stack[-7];
    if (v_208 == nil) goto v_76;
    stack[0] = stack[-5];
    v_210 = basic_elt(env, 3); // expt
    v_209 = stack[-4];
    v_208 = stack[-6];
    v_208 = list3(v_210, v_209, v_208);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 10); // simp
    v_208 = (*qfn1(fn))(fn, v_208);
    }
    env = stack[-7];
    if (!car_legal(v_208)) v_208 = carerror(v_208); else
    v_208 = car(v_208);
    {   LispObject fn = basic_elt(env, 11); // quotf
    v_208 = (*qfn2(fn))(fn, stack[0], v_208);
    }
    env = stack[-7];
    stack[-5] = v_208;
    goto v_74;
v_76:
v_74:
    v_208 = stack[-5];
    {   LispObject fn = basic_elt(env, 7); // moduntag
    v_208 = (*qfn1(fn))(fn, v_208);
    }
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 12); // general!-reduce!-mod!-p
    v_208 = (*qfn1(fn))(fn, v_208);
    }
    env = stack[-7];
    stack[-5] = v_208;
    v_208 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-3] = v_208;
v_96:
    v_208 = qvalue(basic_elt(env, 2)); // current!-modulus
    v_209 = sub1(v_208);
    env = stack[-7];
    v_208 = stack[-3];
    v_208 = difference2(v_209, v_208);
    env = stack[-7];
    v_208 = Lminusp(nil, v_208);
    env = stack[-7];
    if (v_208 == nil) goto v_102;
    v_208 = nil;
    goto v_95;
v_102:
    v_210 = stack[-5];
    v_209 = stack[-4];
    v_208 = stack[-3];
    {   LispObject fn = basic_elt(env, 13); // general!-evaluate!-mod!-p
    v_208 = (*qfn3(fn))(fn, v_210, v_209, v_208);
    }
    env = stack[-7];
    if (v_208 == nil) goto v_111;
    else goto v_112;
v_111:
    v_208 = stack[-3];
    v_208 = ncons(v_208);
    env = stack[-7];
    goto v_110;
v_112:
    v_208 = nil;
v_110:
    stack[-2] = v_208;
    v_208 = stack[-2];
    {   LispObject fn = basic_elt(env, 14); // lastpair
    v_208 = (*qfn1(fn))(fn, v_208);
    }
    env = stack[-7];
    stack[-1] = v_208;
    v_208 = stack[-3];
    v_208 = add1(v_208);
    env = stack[-7];
    stack[-3] = v_208;
    v_208 = stack[-1];
    if (!consp(v_208)) goto v_125;
    else goto v_126;
v_125:
    goto v_96;
v_126:
v_97:
    v_208 = qvalue(basic_elt(env, 2)); // current!-modulus
    v_209 = sub1(v_208);
    env = stack[-7];
    v_208 = stack[-3];
    v_208 = difference2(v_209, v_208);
    env = stack[-7];
    v_208 = Lminusp(nil, v_208);
    env = stack[-7];
    if (v_208 == nil) goto v_131;
    v_208 = stack[-2];
    goto v_95;
v_131:
    stack[0] = stack[-1];
    v_210 = stack[-5];
    v_209 = stack[-4];
    v_208 = stack[-3];
    {   LispObject fn = basic_elt(env, 13); // general!-evaluate!-mod!-p
    v_208 = (*qfn3(fn))(fn, v_210, v_209, v_208);
    }
    env = stack[-7];
    if (v_208 == nil) goto v_141;
    else goto v_142;
v_141:
    v_208 = stack[-3];
    v_208 = ncons(v_208);
    env = stack[-7];
    goto v_140;
v_142:
    v_208 = nil;
v_140:
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_208);
    v_208 = stack[-1];
    {   LispObject fn = basic_elt(env, 14); // lastpair
    v_208 = (*qfn1(fn))(fn, v_208);
    }
    env = stack[-7];
    stack[-1] = v_208;
    v_208 = stack[-3];
    v_208 = add1(v_208);
    env = stack[-7];
    stack[-3] = v_208;
    goto v_97;
v_95:
    stack[0] = v_208;
    v_209 = stack[-6];
    v_208 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_208 = static_cast<LispObject>(greaterp2(v_209, v_208));
    v_208 = v_208 ? lisp_true : nil;
    env = stack[-7];
    if (v_208 == nil) goto v_157;
    v_208 = nil;
    v_208 = ncons(v_208);
    env = stack[-7];
    v_208 = Lappend_2(nil, stack[0], v_208);
    env = stack[-7];
    stack[0] = v_208;
    goto v_155;
v_157:
v_155:
v_10:
    v_208 = stack[0];
    stack[-5] = v_208;
    v_208 = stack[-5];
    if (v_208 == nil) goto v_174;
    else goto v_175;
v_174:
    v_208 = nil;
    goto v_169;
v_175:
    v_208 = stack[-5];
    if (!car_legal(v_208)) v_208 = carerror(v_208); else
    v_208 = car(v_208);
    stack[0] = stack[-4];
    {   LispObject fn = basic_elt(env, 15); // prepf
    v_208 = (*qfn1(fn))(fn, v_208);
    }
    env = stack[-7];
    v_208 = cons(stack[0], v_208);
    env = stack[-7];
    v_208 = ncons(v_208);
    env = stack[-7];
    v_208 = ncons(v_208);
    env = stack[-7];
    stack[-2] = v_208;
    stack[-3] = v_208;
v_170:
    v_208 = stack[-5];
    if (!car_legal(v_208)) v_208 = cdrerror(v_208); else
    v_208 = cdr(v_208);
    stack[-5] = v_208;
    v_208 = stack[-5];
    if (v_208 == nil) goto v_191;
    else goto v_192;
v_191:
    v_208 = stack[-3];
    goto v_169;
v_192:
    stack[-1] = stack[-2];
    v_208 = stack[-5];
    if (!car_legal(v_208)) v_208 = carerror(v_208); else
    v_208 = car(v_208);
    stack[0] = stack[-4];
    {   LispObject fn = basic_elt(env, 15); // prepf
    v_208 = (*qfn1(fn))(fn, v_208);
    }
    env = stack[-7];
    v_208 = cons(stack[0], v_208);
    env = stack[-7];
    v_208 = ncons(v_208);
    env = stack[-7];
    v_208 = ncons(v_208);
    env = stack[-7];
    if (!car_legal(stack[-1])) rplacd_fails(stack[-1]);
    setcdr(stack[-1], v_208);
    v_208 = stack[-2];
    if (!car_legal(v_208)) v_208 = cdrerror(v_208); else
    v_208 = cdr(v_208);
    stack[-2] = v_208;
    goto v_170;
v_169:
    return onevalue(v_208);
}



// Code for cde_replace_nth

static LispObject CC_cde_replace_nth(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    stack[-3] = nil;
v_9:
    v_41 = stack[-2];
    if (v_41 == nil) goto v_13;
    v_42 = stack[-1];
    v_41 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_42 == v_41) goto v_17;
    else goto v_18;
v_17:
    stack[-1] = stack[-3];
    v_42 = stack[0];
    v_41 = stack[-2];
    if (!car_legal(v_41)) v_41 = cdrerror(v_41); else
    v_41 = cdr(v_41);
    v_41 = cons(v_42, v_41);
    env = stack[-4];
    {
        LispObject v_47 = stack[-1];
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn2(fn))(fn, v_47, v_41);
    }
v_18:
    v_41 = stack[-2];
    if (!car_legal(v_41)) v_42 = carerror(v_41); else
    v_42 = car(v_41);
    v_41 = stack[-3];
    v_41 = cons(v_42, v_41);
    env = stack[-4];
    stack[-3] = v_41;
    v_41 = stack[-2];
    if (!car_legal(v_41)) v_41 = cdrerror(v_41); else
    v_41 = cdr(v_41);
    stack[-2] = v_41;
    v_41 = stack[-1];
    v_41 = sub1(v_41);
    env = stack[-4];
    stack[-1] = v_41;
    goto v_9;
    goto v_11;
v_13:
    v_41 = stack[-3];
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn1(fn))(fn, v_41);
    }
v_11:
    v_41 = nil;
    return onevalue(v_41);
}



// Code for ra_qmk

static LispObject CC_ra_qmk(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    v_12 = v_4;
    v_13 = v_3;
    v_14 = v_2;
// end of prologue
    stack[-1] = basic_elt(env, 1); // !:ra!:
    stack[0] = v_14;
    {   LispObject fn = basic_elt(env, 2); // riv_mk
    v_12 = (*qfn2(fn))(fn, v_13, v_12);
    }
    {
        LispObject v_17 = stack[-1];
        LispObject v_18 = stack[0];
        return list3(v_17, v_18, v_12);
    }
}



// Code for aex_lc

static LispObject CC_aex_lc(LispObject env,
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
    v_37 = v_3;
    stack[-1] = v_2;
// end of prologue
    v_38 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // aex_mvartest
    v_37 = (*qfn2(fn))(fn, v_38, v_37);
    }
    env = stack[-3];
    if (v_37 == nil) goto v_12;
    v_37 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // aex_ex
    v_37 = (*qfn1(fn))(fn, v_37);
    }
    env = stack[-3];
    stack[-2] = v_37;
    v_37 = stack[-2];
    if (!car_legal(v_37)) v_37 = carerror(v_37); else
    v_37 = car(v_37);
    {   LispObject fn = basic_elt(env, 3); // sfto_lcx
    v_38 = (*qfn1(fn))(fn, v_37);
    }
    env = stack[-3];
    v_37 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[0] = cons(v_38, v_37);
    env = stack[-3];
    v_37 = stack[-2];
    if (!car_legal(v_37)) v_38 = cdrerror(v_37); else
    v_38 = cdr(v_37);
    v_37 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_37 = cons(v_38, v_37);
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 4); // quotsq
    v_37 = (*qfn2(fn))(fn, stack[0], v_37);
    }
    env = stack[-3];
    stack[-2] = v_37;
    if (!car_legal(v_37)) v_37 = carerror(v_37); else
    v_37 = car(v_37);
    {   LispObject fn = basic_elt(env, 5); // kernels
    stack[0] = (*qfn1(fn))(fn, v_37);
    }
    env = stack[-3];
    v_37 = stack[-1];
    {   LispObject fn = basic_elt(env, 6); // aex_ctx
    v_37 = (*qfn1(fn))(fn, v_37);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 7); // ctx_filter
    v_37 = (*qfn2(fn))(fn, stack[0], v_37);
    }
    env = stack[-3];
    {
        LispObject v_42 = stack[-2];
        LispObject fn = basic_elt(env, 8); // aex_mk
        return (*qfn2(fn))(fn, v_42, v_37);
    }
v_12:
    v_37 = stack[-1];
    return onevalue(v_37);
}



// Code for polynomwrite

static LispObject CC_polynomwrite(LispObject env,
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
v_7:
    v_35 = stack[0];
    if (!car_legal(v_35)) v_35 = carerror(v_35); else
    v_35 = car(v_35);
    if (v_35 == nil) goto v_10;
    else goto v_11;
v_10:
    v_35 = stack[-1];
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn1(fn))(fn, v_35);
    }
v_11:
    v_35 = stack[0];
    if (!car_legal(v_35)) v_36 = carerror(v_35); else
    v_36 = car(v_35);
    v_35 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_36 = Lgetv(nil, v_36, v_35);
    env = stack[-2];
    v_35 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_36 == v_35) goto v_16;
    else goto v_17;
v_16:
    v_36 = stack[-1];
    v_35 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn2(fn))(fn, v_36, v_35);
    }
v_17:
    v_35 = stack[0];
    if (!car_legal(v_35)) v_35 = carerror(v_35); else
    v_35 = car(v_35);
    {   LispObject fn = basic_elt(env, 2); // monomwrite
    v_36 = (*qfn1(fn))(fn, v_35);
    }
    env = stack[-2];
    v_35 = stack[-1];
    v_35 = cons(v_36, v_35);
    env = stack[-2];
    stack[-1] = v_35;
    v_35 = stack[0];
    if (!car_legal(v_35)) v_35 = cdrerror(v_35); else
    v_35 = cdr(v_35);
    stack[0] = v_35;
    goto v_7;
    v_35 = nil;
    return onevalue(v_35);
}



// Code for taydegree!<

static LispObject CC_taydegreeR(LispObject env,
                         LispObject v_2, LispObject v_3)
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
v_9:
    v_51 = stack[-2];
    if (!car_legal(v_51)) v_51 = carerror(v_51); else
    v_51 = car(v_51);
    stack[-3] = v_51;
    v_51 = stack[-1];
    if (!car_legal(v_51)) v_51 = carerror(v_51); else
    v_51 = car(v_51);
    stack[0] = v_51;
v_10:
    v_51 = stack[-3];
    if (!car_legal(v_51)) v_52 = carerror(v_51); else
    v_52 = car(v_51);
    v_51 = stack[0];
    if (!car_legal(v_51)) v_51 = carerror(v_51); else
    v_51 = car(v_51);
    {   LispObject fn = basic_elt(env, 1); // tayexp!-greaterp
    v_51 = (*qfn2(fn))(fn, v_52, v_51);
    }
    env = stack[-4];
    if (v_51 == nil) goto v_18;
    v_51 = nil;
    goto v_8;
v_18:
    v_51 = stack[-3];
    if (!car_legal(v_51)) v_52 = carerror(v_51); else
    v_52 = car(v_51);
    v_51 = stack[0];
    if (!car_legal(v_51)) v_51 = carerror(v_51); else
    v_51 = car(v_51);
    {   LispObject fn = basic_elt(env, 2); // tayexp!-lessp
    v_51 = (*qfn2(fn))(fn, v_52, v_51);
    }
    env = stack[-4];
    if (v_51 == nil) goto v_26;
    v_51 = lisp_true;
    goto v_8;
v_26:
    v_51 = stack[-3];
    if (!car_legal(v_51)) v_51 = cdrerror(v_51); else
    v_51 = cdr(v_51);
    stack[-3] = v_51;
    v_51 = stack[0];
    if (!car_legal(v_51)) v_51 = cdrerror(v_51); else
    v_51 = cdr(v_51);
    stack[0] = v_51;
    v_51 = stack[-3];
    if (v_51 == nil) goto v_40;
    goto v_10;
v_40:
    v_51 = stack[-2];
    if (!car_legal(v_51)) v_51 = cdrerror(v_51); else
    v_51 = cdr(v_51);
    stack[-2] = v_51;
    v_51 = stack[-1];
    if (!car_legal(v_51)) v_51 = cdrerror(v_51); else
    v_51 = cdr(v_51);
    stack[-1] = v_51;
    v_51 = stack[-2];
    if (v_51 == nil) goto v_49;
    goto v_9;
v_49:
    v_51 = nil;
v_8:
    return onevalue(v_51);
}



// Code for gen!+can!+bas

static LispObject CC_genLcanLbas(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_157, v_158;
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
    v_158 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_157 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_157 = cons(v_158, v_157);
    env = stack[-11];
    stack[-10] = v_157;
    v_158 = nil;
    v_157 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_157 = cons(v_158, v_157);
    env = stack[-11];
    stack[-8] = v_157;
    v_157 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-7] = v_157;
    v_158 = stack[-9];
    v_157 = stack[-7];
    v_157 = difference2(v_158, v_157);
    env = stack[-11];
    v_157 = Lminusp(nil, v_157);
    env = stack[-11];
    if (v_157 == nil) goto v_27;
    v_157 = nil;
    goto v_21;
v_27:
    v_157 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-3] = v_157;
    v_158 = stack[-9];
    v_157 = stack[-3];
    v_157 = difference2(v_158, v_157);
    env = stack[-11];
    v_157 = Lminusp(nil, v_157);
    env = stack[-11];
    if (v_157 == nil) goto v_44;
    v_157 = nil;
    goto v_38;
v_44:
    v_158 = stack[-7];
    v_157 = stack[-3];
    if (equal(v_158, v_157)) goto v_53;
    else goto v_54;
v_53:
    v_157 = stack[-10];
    goto v_52;
v_54:
    v_157 = stack[-8];
    goto v_52;
    v_157 = nil;
v_52:
    v_157 = ncons(v_157);
    env = stack[-11];
    stack[-1] = v_157;
    stack[-2] = v_157;
v_39:
    v_157 = stack[-3];
    v_157 = add1(v_157);
    env = stack[-11];
    stack[-3] = v_157;
    v_158 = stack[-9];
    v_157 = stack[-3];
    v_157 = difference2(v_158, v_157);
    env = stack[-11];
    v_157 = Lminusp(nil, v_157);
    env = stack[-11];
    if (v_157 == nil) goto v_66;
    v_157 = stack[-2];
    goto v_38;
v_66:
    stack[0] = stack[-1];
    v_158 = stack[-7];
    v_157 = stack[-3];
    if (equal(v_158, v_157)) goto v_76;
    else goto v_77;
v_76:
    v_157 = stack[-10];
    goto v_75;
v_77:
    v_157 = stack[-8];
    goto v_75;
    v_157 = nil;
v_75:
    v_157 = ncons(v_157);
    env = stack[-11];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_157);
    v_157 = stack[-1];
    if (!car_legal(v_157)) v_157 = cdrerror(v_157); else
    v_157 = cdr(v_157);
    stack[-1] = v_157;
    goto v_39;
v_38:
    v_157 = ncons(v_157);
    env = stack[-11];
    stack[-5] = v_157;
    stack[-6] = v_157;
v_22:
    v_157 = stack[-7];
    v_157 = add1(v_157);
    env = stack[-11];
    stack[-7] = v_157;
    v_158 = stack[-9];
    v_157 = stack[-7];
    v_157 = difference2(v_158, v_157);
    env = stack[-11];
    v_157 = Lminusp(nil, v_157);
    env = stack[-11];
    if (v_157 == nil) goto v_92;
    v_157 = stack[-6];
    goto v_21;
v_92:
    stack[-4] = stack[-5];
    v_157 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-3] = v_157;
    v_158 = stack[-9];
    v_157 = stack[-3];
    v_157 = difference2(v_158, v_157);
    env = stack[-11];
    v_157 = Lminusp(nil, v_157);
    env = stack[-11];
    if (v_157 == nil) goto v_110;
    v_157 = nil;
    goto v_104;
v_110:
    v_158 = stack[-7];
    v_157 = stack[-3];
    if (equal(v_158, v_157)) goto v_119;
    else goto v_120;
v_119:
    v_157 = stack[-10];
    goto v_118;
v_120:
    v_157 = stack[-8];
    goto v_118;
    v_157 = nil;
v_118:
    v_157 = ncons(v_157);
    env = stack[-11];
    stack[-1] = v_157;
    stack[-2] = v_157;
v_105:
    v_157 = stack[-3];
    v_157 = add1(v_157);
    env = stack[-11];
    stack[-3] = v_157;
    v_158 = stack[-9];
    v_157 = stack[-3];
    v_157 = difference2(v_158, v_157);
    env = stack[-11];
    v_157 = Lminusp(nil, v_157);
    env = stack[-11];
    if (v_157 == nil) goto v_132;
    v_157 = stack[-2];
    goto v_104;
v_132:
    stack[0] = stack[-1];
    v_158 = stack[-7];
    v_157 = stack[-3];
    if (equal(v_158, v_157)) goto v_142;
    else goto v_143;
v_142:
    v_157 = stack[-10];
    goto v_141;
v_143:
    v_157 = stack[-8];
    goto v_141;
    v_157 = nil;
v_141:
    v_157 = ncons(v_157);
    env = stack[-11];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_157);
    v_157 = stack[-1];
    if (!car_legal(v_157)) v_157 = cdrerror(v_157); else
    v_157 = cdr(v_157);
    stack[-1] = v_157;
    goto v_105;
v_104:
    v_157 = ncons(v_157);
    env = stack[-11];
    if (!car_legal(stack[-4])) rplacd_fails(stack[-4]);
    setcdr(stack[-4], v_157);
    v_157 = stack[-5];
    if (!car_legal(v_157)) v_157 = cdrerror(v_157); else
    v_157 = cdr(v_157);
    stack[-5] = v_157;
    goto v_22;
v_21:
    return onevalue(v_157);
}



// Code for cl_bvarl1

static LispObject CC_cl_bvarl1(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // cl_varl1
    v_7 = (*qfn1(fn))(fn, v_7);
    }
    if (!car_legal(v_7)) v_7 = cdrerror(v_7); else
    v_7 = cdr(v_7);
    return onevalue(v_7);
}



// Code for qqe_ofsf_varlat

static LispObject CC_qqe_ofsf_varlat(LispObject env,
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
// space for vars preserved across procedure calls
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    v_16 = v_2;
// end of prologue
    {   LispObject fn = basic_elt(env, 1); // qqe_ofsf_prepat
    v_16 = (*qfn1(fn))(fn, v_16);
    }
    env = stack[-2];
    stack[-1] = v_16;
    v_16 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // qqe_arg2l
    v_17 = (*qfn1(fn))(fn, v_16);
    }
    env = stack[-2];
    v_16 = nil;
    {   LispObject fn = basic_elt(env, 3); // qqe_ofsf_varlterm
    stack[0] = (*qfn2(fn))(fn, v_17, v_16);
    }
    env = stack[-2];
    v_16 = stack[-1];
    {   LispObject fn = basic_elt(env, 4); // qqe_arg2r
    v_17 = (*qfn1(fn))(fn, v_16);
    }
    env = stack[-2];
    v_16 = nil;
    {   LispObject fn = basic_elt(env, 3); // qqe_ofsf_varlterm
    v_16 = (*qfn2(fn))(fn, v_17, v_16);
    }
    env = stack[-2];
    {
        LispObject v_20 = stack[0];
        LispObject fn = basic_elt(env, 5); // union
        return (*qfn2(fn))(fn, v_20, v_16);
    }
}



// Code for cl_susiinter

static LispObject CC_cl_susiinter(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_71, v_72, v_73, v_74;
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
    v_71 = v_2;
// end of prologue
    stack[-5] = nil;
    stack[-2] = nil;
    stack[-1] = nil;
    stack[0] = v_71;
v_14:
    v_71 = stack[0];
    if (v_71 == nil) goto v_18;
    else goto v_19;
v_18:
    goto v_13;
v_19:
    v_71 = stack[0];
    if (!car_legal(v_71)) v_71 = carerror(v_71); else
    v_71 = car(v_71);
    v_73 = v_71;
    v_71 = v_73;
    if (!car_legal(v_71)) v_72 = carerror(v_71); else
    v_72 = car(v_71);
    v_71 = basic_elt(env, 1); // delete
    if (v_72 == v_71) goto v_31;
    else goto v_32;
v_31:
    v_71 = lisp_true;
    goto v_30;
v_32:
    v_71 = v_73;
    if (!car_legal(v_71)) v_72 = carerror(v_71); else
    v_72 = car(v_71);
    v_71 = basic_elt(env, 2); // ignore
    v_71 = (v_72 == v_71 ? lisp_true : nil);
    goto v_30;
    v_71 = nil;
v_30:
    if (v_71 == nil) goto v_28;
    v_71 = v_73;
    if (!car_legal(v_71)) v_71 = cdrerror(v_71); else
    v_71 = cdr(v_71);
    if (v_71 == nil) goto v_46;
    v_71 = lisp_true;
    stack[-1] = v_71;
    goto v_44;
v_46:
    v_72 = stack[-3];
    v_71 = stack[-4];
    {   LispObject fn = basic_elt(env, 4); // lto_delqip
    v_71 = (*qfn2(fn))(fn, v_72, v_71);
    }
    env = stack[-6];
    stack[-4] = v_71;
    goto v_44;
v_44:
    goto v_26;
v_28:
    v_71 = v_73;
    if (!car_legal(v_71)) v_72 = carerror(v_71); else
    v_72 = car(v_71);
    v_71 = basic_elt(env, 3); // add
    if (v_72 == v_71) goto v_55;
    else goto v_56;
v_55:
    v_71 = v_73;
    if (!car_legal(v_71)) v_72 = cdrerror(v_71); else
    v_72 = cdr(v_71);
    v_71 = stack[-5];
    v_71 = cons(v_72, v_71);
    env = stack[-6];
    stack[-5] = v_71;
    goto v_26;
v_56:
v_26:
    v_71 = stack[0];
    if (!car_legal(v_71)) v_71 = cdrerror(v_71); else
    v_71 = cdr(v_71);
    stack[0] = v_71;
    goto v_14;
v_13:
    v_74 = stack[-4];
    v_73 = stack[-5];
    v_72 = stack[-2];
    v_71 = stack[-1];
    return list4(v_74, v_73, v_72, v_71);
    return onevalue(v_71);
}



// Code for ev_dif

static LispObject CC_ev_dif(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_32 = nil;
v_10:
    v_30 = stack[-1];
    if (v_30 == nil) goto v_13;
    else goto v_14;
v_13:
    goto v_9;
v_14:
    v_30 = stack[-1];
    if (!car_legal(v_30)) v_31 = carerror(v_30); else
    v_31 = car(v_30);
    v_30 = stack[0];
    if (!car_legal(v_30)) v_30 = carerror(v_30); else
    v_30 = car(v_30);
    v_30 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_31) - static_cast<std::uintptr_t>(v_30) + TAG_FIXNUM);
    v_31 = v_32;
    v_30 = cons(v_30, v_31);
    env = stack[-2];
    v_32 = v_30;
    v_30 = stack[-1];
    if (!car_legal(v_30)) v_30 = cdrerror(v_30); else
    v_30 = cdr(v_30);
    stack[-1] = v_30;
    v_30 = stack[0];
    if (!car_legal(v_30)) v_30 = cdrerror(v_30); else
    v_30 = cdr(v_30);
    stack[0] = v_30;
    goto v_10;
v_9:
    v_30 = v_32;
        return Lnreverse(nil, v_30);
    return onevalue(v_30);
}



// Code for bc_mkat

static LispObject CC_bc_mkat(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_10, v_11, v_12;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_10 = v_3;
    v_11 = v_2;
// end of prologue
    v_12 = v_11;
    if (!car_legal(v_10)) v_11 = carerror(v_10); else
    v_11 = car(v_10);
    v_10 = nil;
    return list3(v_12, v_11, v_10);
}



// Code for vectorml

static LispObject CC_vectorml(LispObject env,
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
    v_21 = basic_elt(env, 1); // "<vector"
    {   LispObject fn = basic_elt(env, 4); // printout
    v_21 = (*qfn1(fn))(fn, v_21);
    }
    env = stack[-1];
    v_21 = stack[0];
    if (!car_legal(v_21)) v_22 = carerror(v_21); else
    v_22 = car(v_21);
    v_21 = basic_elt(env, 2); // ""
    {   LispObject fn = basic_elt(env, 5); // attributesml
    v_21 = (*qfn2(fn))(fn, v_22, v_21);
    }
    env = stack[-1];
    v_21 = lisp_true;
    {   LispObject fn = basic_elt(env, 6); // indent!*
    v_21 = (*qfn1(fn))(fn, v_21);
    }
    env = stack[-1];
    v_21 = stack[0];
    if (!car_legal(v_21)) v_21 = cdrerror(v_21); else
    v_21 = cdr(v_21);
    {   LispObject fn = basic_elt(env, 7); // multi_elem
    v_21 = (*qfn1(fn))(fn, v_21);
    }
    env = stack[-1];
    v_21 = nil;
    {   LispObject fn = basic_elt(env, 6); // indent!*
    v_21 = (*qfn1(fn))(fn, v_21);
    }
    env = stack[-1];
    v_21 = basic_elt(env, 3); // "</vector>"
    {   LispObject fn = basic_elt(env, 4); // printout
    v_21 = (*qfn1(fn))(fn, v_21);
    }
    v_21 = nil;
    return onevalue(v_21);
}



// Code for delyzz

static LispObject CC_delyzz(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_29, v_30, v_31;
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
    v_31 = nil;
v_8:
    v_30 = stack[-1];
    v_29 = stack[0];
    if (!car_legal(v_29)) v_29 = carerror(v_29); else
    v_29 = car(v_29);
    if (!car_legal(v_29)) v_29 = carerror(v_29); else
    v_29 = car(v_29);
    if (equal(v_30, v_29)) goto v_11;
    else goto v_12;
v_11:
    v_30 = v_31;
    v_29 = stack[0];
    if (!car_legal(v_29)) v_29 = cdrerror(v_29); else
    v_29 = cdr(v_29);
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn2(fn))(fn, v_30, v_29);
    }
v_12:
    v_29 = stack[0];
    if (!car_legal(v_29)) v_29 = carerror(v_29); else
    v_29 = car(v_29);
    v_30 = v_31;
    v_29 = cons(v_29, v_30);
    env = stack[-2];
    v_31 = v_29;
    v_29 = stack[0];
    if (!car_legal(v_29)) v_29 = cdrerror(v_29); else
    v_29 = cdr(v_29);
    stack[0] = v_29;
    goto v_8;
    v_29 = nil;
    return onevalue(v_29);
}



// Code for make!-unique!-freevars

static LispObject CC_makeKuniqueKfreevars(LispObject env,
                         LispObject v_2)
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
    v_83 = v_2;
// end of prologue
    v_82 = v_83;
    if (!consp(v_82)) goto v_6;
    else goto v_7;
v_6:
    v_84 = v_83;
    v_82 = basic_elt(env, 1); // gen
    v_82 = get(v_84, v_82);
    env = stack[-4];
    if (v_82 == nil) goto v_12;
    v_84 = v_83;
    v_82 = qvalue(basic_elt(env, 2)); // freevarlist!*
    v_82 = Latsoc(nil, v_84, v_82);
    stack[0] = v_82;
    v_82 = stack[0];
    if (v_82 == nil) goto v_24;
    else goto v_25;
v_24:
    stack[0] = v_83;
    {   LispObject fn = basic_elt(env, 3); // pm!:gensym
    v_82 = (*qfn0(fn))(fn);
    }
    env = stack[-4];
    v_82 = cons(stack[0], v_82);
    env = stack[-4];
    stack[0] = v_82;
    v_82 = stack[0];
    if (!car_legal(v_82)) v_84 = cdrerror(v_82); else
    v_84 = cdr(v_82);
    v_83 = basic_elt(env, 1); // gen
    v_82 = lisp_true;
    v_82 = Lputprop(nil, v_84, v_83, v_82);
    env = stack[-4];
    v_83 = stack[0];
    v_82 = qvalue(basic_elt(env, 2)); // freevarlist!*
    v_82 = cons(v_83, v_82);
    env = stack[-4];
    setvalue(basic_elt(env, 2), v_82); // freevarlist!*
    goto v_23;
v_25:
v_23:
    v_82 = stack[0];
    if (!car_legal(v_82)) v_82 = cdrerror(v_82); else
    v_82 = cdr(v_82);
    goto v_10;
v_12:
    v_82 = v_83;
    goto v_10;
    v_82 = nil;
v_10:
    goto v_5;
v_7:
    v_82 = v_83;
    stack[-3] = v_82;
    v_82 = stack[-3];
    if (v_82 == nil) goto v_54;
    else goto v_55;
v_54:
    v_82 = nil;
    goto v_49;
v_55:
    v_82 = stack[-3];
    if (!car_legal(v_82)) v_82 = carerror(v_82); else
    v_82 = car(v_82);
    {   LispObject fn = basic_elt(env, 0); // make!-unique!-freevars
    v_82 = (*qfn1(fn))(fn, v_82);
    }
    env = stack[-4];
    v_82 = ncons(v_82);
    env = stack[-4];
    stack[-1] = v_82;
    stack[-2] = v_82;
v_50:
    v_82 = stack[-3];
    if (!car_legal(v_82)) v_82 = cdrerror(v_82); else
    v_82 = cdr(v_82);
    stack[-3] = v_82;
    v_82 = stack[-3];
    if (v_82 == nil) goto v_68;
    else goto v_69;
v_68:
    v_82 = stack[-2];
    goto v_49;
v_69:
    stack[0] = stack[-1];
    v_82 = stack[-3];
    if (!car_legal(v_82)) v_82 = carerror(v_82); else
    v_82 = car(v_82);
    {   LispObject fn = basic_elt(env, 0); // make!-unique!-freevars
    v_82 = (*qfn1(fn))(fn, v_82);
    }
    env = stack[-4];
    v_82 = ncons(v_82);
    env = stack[-4];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_82);
    v_82 = stack[-1];
    if (!car_legal(v_82)) v_82 = cdrerror(v_82); else
    v_82 = cdr(v_82);
    stack[-1] = v_82;
    goto v_50;
v_49:
    goto v_5;
    v_82 = nil;
v_5:
    return onevalue(v_82);
}



// Code for fieldp

static LispObject CC_fieldp(LispObject env,
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
    if (!consp(v_16)) goto v_7;
    if (!car_legal(v_15)) v_15 = carerror(v_15); else
    v_15 = car(v_15);
    if (!symbolp(v_15)) v_15 = nil;
    else { v_15 = qfastgets(v_15);
           if (v_15 != nil) { v_15 = elt(v_15, 3); // field
#ifdef RECORD_GET
             if (v_15 == SPID_NOPROP)
                record_get(elt(fastget_names, 3), 0),
                v_15 = nil;
             else record_get(elt(fastget_names, 3), 1),
                v_15 = lisp_true; }
           else record_get(elt(fastget_names, 3), 0); }
#else
             if (v_15 == SPID_NOPROP) v_15 = nil; else v_15 = lisp_true; }}
#endif
    goto v_5;
v_7:
    v_15 = nil;
    goto v_5;
    v_15 = nil;
v_5:
    return onevalue(v_15);
}



// Code for dipsimpcont

static LispObject CC_dipsimpcont(LispObject env,
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
    v_19 = v_2;
// end of prologue
    v_18 = qvalue(basic_elt(env, 1)); // !*vdpinteger
    if (v_18 == nil) goto v_8;
    else goto v_6;
v_8:
    v_18 = qvalue(basic_elt(env, 2)); // !*groebdivide
    if (v_18 == nil) goto v_6;
    goto v_7;
v_6:
    v_18 = v_19;
    {
        LispObject fn = basic_elt(env, 3); // dipsimpconti
        return (*qfn1(fn))(fn, v_18);
    }
v_7:
    v_18 = v_19;
    {
        LispObject fn = basic_elt(env, 4); // dipsimpcontr
        return (*qfn1(fn))(fn, v_18);
    }
    v_18 = nil;
    return onevalue(v_18);
}



// Code for greaterp!:

static LispObject CC_greaterpT(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_120, v_121, v_122;
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
    v_122 = v_2;
// end of prologue
    v_120 = v_122;
    if (!car_legal(v_120)) v_120 = cdrerror(v_120); else
    v_120 = cdr(v_120);
    if (!car_legal(v_120)) v_121 = carerror(v_120); else
    v_121 = car(v_120);
    v_120 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_121 == v_120) goto v_7;
    else goto v_8;
v_7:
    v_120 = stack[0];
    if (!car_legal(v_120)) v_120 = cdrerror(v_120); else
    v_120 = cdr(v_120);
    if (!car_legal(v_120)) v_121 = carerror(v_120); else
    v_121 = car(v_120);
    v_120 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
        return Llessp_2(nil, v_121, v_120);
v_8:
    v_120 = stack[0];
    if (!car_legal(v_120)) v_120 = cdrerror(v_120); else
    v_120 = cdr(v_120);
    if (!car_legal(v_120)) v_121 = carerror(v_120); else
    v_121 = car(v_120);
    v_120 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_121 == v_120) goto v_18;
    else goto v_19;
v_18:
    v_120 = v_122;
    if (!car_legal(v_120)) v_120 = cdrerror(v_120); else
    v_120 = cdr(v_120);
    if (!car_legal(v_120)) v_121 = carerror(v_120); else
    v_121 = car(v_120);
    v_120 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
        return Lgreaterp_2(nil, v_121, v_120);
v_19:
    v_120 = v_122;
    if (!car_legal(v_120)) v_120 = cdrerror(v_120); else
    v_120 = cdr(v_120);
    if (!car_legal(v_120)) v_121 = cdrerror(v_120); else
    v_121 = cdr(v_120);
    v_120 = stack[0];
    if (!car_legal(v_120)) v_120 = cdrerror(v_120); else
    v_120 = cdr(v_120);
    if (!car_legal(v_120)) v_120 = cdrerror(v_120); else
    v_120 = cdr(v_120);
    if (equal(v_121, v_120)) goto v_29;
    else goto v_30;
v_29:
    v_120 = v_122;
    if (!car_legal(v_120)) v_120 = cdrerror(v_120); else
    v_120 = cdr(v_120);
    if (!car_legal(v_120)) v_121 = carerror(v_120); else
    v_121 = car(v_120);
    v_120 = stack[0];
    if (!car_legal(v_120)) v_120 = cdrerror(v_120); else
    v_120 = cdr(v_120);
    if (!car_legal(v_120)) v_120 = carerror(v_120); else
    v_120 = car(v_120);
        return Lgreaterp_2(nil, v_121, v_120);
v_30:
    v_120 = v_122;
    {   LispObject fn = basic_elt(env, 2); // normbf
    stack[-1] = (*qfn1(fn))(fn, v_120);
    }
    env = stack[-5];
    v_120 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // normbf
    v_120 = (*qfn1(fn))(fn, v_120);
    }
    env = stack[-5];
    stack[0] = v_120;
    v_120 = stack[-1];
    if (!car_legal(v_120)) v_120 = cdrerror(v_120); else
    v_120 = cdr(v_120);
    if (!car_legal(v_120)) v_121 = cdrerror(v_120); else
    v_121 = cdr(v_120);
    v_120 = stack[0];
    if (!car_legal(v_120)) v_120 = cdrerror(v_120); else
    v_120 = cdr(v_120);
    if (!car_legal(v_120)) v_120 = cdrerror(v_120); else
    v_120 = cdr(v_120);
    v_122 = difference2(v_121, v_120);
    env = stack[-5];
    v_120 = stack[-1];
    if (!car_legal(v_120)) v_120 = cdrerror(v_120); else
    v_120 = cdr(v_120);
    if (!car_legal(v_120)) v_121 = carerror(v_120); else
    v_121 = car(v_120);
    v_120 = stack[0];
    if (!car_legal(v_120)) v_120 = cdrerror(v_120); else
    v_120 = cdr(v_120);
    if (!car_legal(v_120)) v_120 = carerror(v_120); else
    v_120 = car(v_120);
    stack[-4] = v_122;
    stack[-3] = v_121;
    stack[-2] = v_120;
    v_121 = stack[-4];
    v_120 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_121 == v_120) goto v_70;
    else goto v_71;
v_70:
    v_121 = stack[-3];
    v_120 = stack[-2];
        return Lgreaterp_2(nil, v_121, v_120);
v_71:
    v_121 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_120 = qvalue(basic_elt(env, 1)); // !:bprec!:
    v_120 = times2(v_121, v_120);
    env = stack[-5];
    stack[-1] = v_120;
    v_121 = stack[-4];
    v_120 = stack[-1];
    v_120 = static_cast<LispObject>(greaterp2(v_121, v_120));
    v_120 = v_120 ? lisp_true : nil;
    env = stack[-5];
    if (v_120 == nil) goto v_86;
    v_121 = stack[-3];
    v_120 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
        return Lgreaterp_2(nil, v_121, v_120);
v_86:
    stack[0] = stack[-4];
    v_120 = stack[-1];
    v_120 = negate(v_120);
    env = stack[-5];
    v_120 = static_cast<LispObject>(lessp2(stack[0], v_120));
    v_120 = v_120 ? lisp_true : nil;
    env = stack[-5];
    if (v_120 == nil) goto v_94;
    v_121 = stack[-2];
    v_120 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
        return Llessp_2(nil, v_121, v_120);
v_94:
    v_121 = stack[-4];
    v_120 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_120 = static_cast<LispObject>(greaterp2(v_121, v_120));
    v_120 = v_120 ? lisp_true : nil;
    env = stack[-5];
    if (v_120 == nil) goto v_103;
    v_121 = stack[-3];
    v_120 = stack[-4];
    {   LispObject fn = basic_elt(env, 3); // ashift
    v_121 = (*qfn2(fn))(fn, v_121, v_120);
    }
    v_120 = stack[-2];
        return Lgreaterp_2(nil, v_121, v_120);
v_103:
    stack[0] = stack[-3];
    stack[-1] = stack[-2];
    v_120 = stack[-4];
    v_120 = negate(v_120);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 3); // ashift
    v_120 = (*qfn2(fn))(fn, stack[-1], v_120);
    }
    {
        LispObject v_128 = stack[0];
        return Lgreaterp_2(nil, v_128, v_120);
    }
    v_120 = nil;
    goto v_69;
    v_120 = nil;
v_69:
    goto v_6;
    v_120 = nil;
v_6:
    return onevalue(v_120);
}



// Code for calc_coeff

static LispObject CC_calc_coeff(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    v_35 = stack[-1];
    if (v_35 == nil) goto v_7;
    else goto v_8;
v_7:
    v_35 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return ncons(v_35);
v_8:
    v_35 = stack[-1];
    if (!car_legal(v_35)) v_36 = carerror(v_35); else
    v_36 = car(v_35);
    v_35 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // calc_world
    v_35 = (*qfn2(fn))(fn, v_36, v_35);
    }
    env = stack[-3];
    v_37 = v_35;
    v_36 = v_37;
    v_35 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_36 == v_35) goto v_21;
    else goto v_22;
v_21:
    v_35 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    return ncons(v_35);
v_22:
    stack[-2] = v_37;
    v_35 = stack[-1];
    if (!car_legal(v_35)) v_36 = cdrerror(v_35); else
    v_36 = cdr(v_35);
    v_35 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // calc_coeff
    v_35 = (*qfn2(fn))(fn, v_36, v_35);
    }
    {
        LispObject v_41 = stack[-2];
        return cons(v_41, v_35);
    }
    v_35 = nil;
    goto v_6;
    v_35 = nil;
v_6:
    return onevalue(v_35);
}



setup_type const u34_setup[] =
{
    {"mapcarcar",               G0W1,     CC_mapcarcar,G2W1,  G3W1,     G4W1},
    {"matrixom",                G0W1,     CC_matrixom,G2W1,   G3W1,     G4W1},
    {"close_forall",            CC_close_forall,G1W0,G2W0,    G3W0,     G4W0},
    {"lispreadp",               G0W1,     CC_lispreadp,G2W1,  G3W1,     G4W1},
    {"reval3",                  G0W1,     CC_reval3,G2W1,     G3W1,     G4W1},
    {"color-roads",             G0W2,     G1W2,     CC_colorKroads,G3W2,G4W2},
    {"remchkf",                 G0W3,     G1W3,     G2W3,     CC_remchkf,G4W3},
    {"split_cov_cont_ids",      G0W1,     CC_split_cov_cont_ids,G2W1,G3W1,G4W1},
    {"proper-simpsqrt",         G0W1,     CC_properKsimpsqrt,G2W1,G3W1, G4W1},
    {"make-x-to-p",             G0W3,     G1W3,     G2W3,     CC_makeKxKtoKp,G4W3},
    {"lex_skip_line_comment",   CC_lex_skip_line_comment,G1W0,G2W0,G3W0,G4W0},
    {"sortedpolynomlistinsert", G0W2,     G1W2,     CC_sortedpolynomlistinsert,G3W2,G4W2},
    {"multdfconst",             G0W2,     G1W2,     CC_multdfconst,G3W2,G4W2},
    {"mri_congp",               G0W1,     CC_mri_congp,G2W1,  G3W1,     G4W1},
    {"rat_abs",                 G0W1,     CC_rat_abs,G2W1,    G3W1,     G4W1},
    {"applyfnrd",               CC_applyfnrd,G1W0,  G2W0,     G3W0,     G4W0},
    {"ps:times-erule",          G0W2,     G1W2,     CC_psTtimesKerule,G3W2,G4W2},
    {"matsm1",                  G0W1,     CC_matsm1,G2W1,     G3W1,     G4W1},
    {"recaliasbacksubst",       G0W2,     G1W2,     CC_recaliasbacksubst,G3W2,G4W2},
    {"dipprodin",               G0W2,     G1W2,     CC_dipprodin,G3W2,  G4W2},
    {"difference:",             G0W2,     G1W2,     CC_differenceT,G3W2,G4W2},
    {"evaluate-horner",         G0W1,     CC_evaluateKhorner,G2W1,G3W1, G4W1},
    {"indexsymmetrize",         G0W1,     CC_indexsymmetrize,G2W1,G3W1, G4W1},
    {"po:statep",               G0W1,     CC_poTstatep,G2W1,  G3W1,     G4W1},
    {"color-strand",            G0W3,     G1W3,     G2W3,     CC_colorKstrand,G4W3},
    {"greaterpcdr",             G0W2,     G1W2,     CC_greaterpcdr,G3W2,G4W2},
    {"clogsq*",                 G0W1,     CC_clogsqH,G2W1,    G3W1,     G4W1},
    {"fs:prin",                 G0W1,     CC_fsTprin,G2W1,    G3W1,     G4W1},
    {"dfprintfn",               G0W1,     CC_dfprintfn,G2W1,  G3W1,     G4W1},
    {"msolve-poly1",            G0W2,     G1W2,     CC_msolveKpoly1,G3W2,G4W2},
    {"cde_replace_nth",         G0W3,     G1W3,     G2W3,     CC_cde_replace_nth,G4W3},
    {"ra_qmk",                  G0W3,     G1W3,     G2W3,     CC_ra_qmk,G4W3},
    {"aex_lc",                  G0W2,     G1W2,     CC_aex_lc,G3W2,     G4W2},
    {"polynomwrite",            G0W1,     CC_polynomwrite,G2W1,G3W1,    G4W1},
    {"taydegree<",              G0W2,     G1W2,     CC_taydegreeR,G3W2, G4W2},
    {"gen+can+bas",             G0W1,     CC_genLcanLbas,G2W1,G3W1,     G4W1},
    {"cl_bvarl1",               G0W1,     CC_cl_bvarl1,G2W1,  G3W1,     G4W1},
    {"qqe_ofsf_varlat",         G0W1,     CC_qqe_ofsf_varlat,G2W1,G3W1, G4W1},
    {"cl_susiinter",            G0W3,     G1W3,     G2W3,     CC_cl_susiinter,G4W3},
    {"ev_dif",                  G0W2,     G1W2,     CC_ev_dif,G3W2,     G4W2},
    {"bc_mkat",                 G0W2,     G1W2,     CC_bc_mkat,G3W2,    G4W2},
    {"vectorml",                G0W1,     CC_vectorml,G2W1,   G3W1,     G4W1},
    {"delyzz",                  G0W2,     G1W2,     CC_delyzz,G3W2,     G4W2},
    {"make-unique-freevars",    G0W1,     CC_makeKuniqueKfreevars,G2W1,G3W1,G4W1},
    {"fieldp",                  G0W1,     CC_fieldp,G2W1,     G3W1,     G4W1},
    {"dipsimpcont",             G0W1,     CC_dipsimpcont,G2W1,G3W1,     G4W1},
    {"greaterp:",               G0W2,     G1W2,     CC_greaterpT,G3W2,  G4W2},
    {"calc_coeff",              G0W2,     G1W2,     CC_calc_coeff,G3W2, G4W2},
    {nullptr, 
        reinterpret_cast<no_args *>(
            reinterpret_cast<uintptr_t>("u34")),
        reinterpret_cast<one_arg *>(
            reinterpret_cast<uintptr_t>("171997 7140639 1743420")),
        nullptr, nullptr, nullptr}
};

// end of generated code
