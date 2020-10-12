
// $destdir/u57.c        Machine generated C code

// $Id$

#include "config.h"
#include "headers.h"



// Code for gcdlist1

static LispObject CC_gcdlist1(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_213, v_214, v_215;
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
    stack[0] = v_2;
// end of prologue
// Binding reduction!-count
// FLUIDBIND: reloadenv=7 litvec-offset=1 saveloc=6
{   bind_fluid_stack bind_fluid_var(-7, 1, -6);
    setvalue(basic_elt(env, 1), nil); // reduction!-count
    v_213 = stack[0];
    if (!car_legal(v_213)) v_213 = carerror(v_213); else
    v_213 = car(v_213);
    if (!car_legal(v_213)) v_213 = cdrerror(v_213); else
    v_213 = cdr(v_213);
    stack[-4] = v_213;
    stack[-2] = v_213;
    v_213 = stack[0];
    if (!car_legal(v_213)) v_213 = cdrerror(v_213); else
    v_213 = cdr(v_213);
    stack[-3] = v_213;
v_19:
    v_213 = stack[-3];
    if (v_213 == nil) goto v_24;
    else goto v_25;
v_24:
    goto v_18;
v_25:
    v_213 = stack[-3];
    if (!car_legal(v_213)) v_213 = carerror(v_213); else
    v_213 = car(v_213);
    stack[-1] = v_213;
    v_214 = stack[-2];
    v_213 = stack[-1];
    if (!car_legal(v_213)) v_213 = cdrerror(v_213); else
    v_213 = cdr(v_213);
    {   LispObject fn = basic_elt(env, 3); // vunion
    v_213 = (*qfn2(fn))(fn, v_214, v_213);
    }
    env = stack[-7];
    stack[-2] = v_213;
    v_214 = stack[-4];
    v_213 = stack[-1];
    if (!car_legal(v_213)) v_213 = cdrerror(v_213); else
    v_213 = cdr(v_213);
    {   LispObject fn = basic_elt(env, 4); // vintersection
    v_213 = (*qfn2(fn))(fn, v_214, v_213);
    }
    env = stack[-7];
    stack[-4] = v_213;
    v_213 = stack[-3];
    if (!car_legal(v_213)) v_213 = cdrerror(v_213); else
    v_213 = cdr(v_213);
    stack[-3] = v_213;
    goto v_19;
v_18:
    v_213 = stack[-4];
    if (v_213 == nil) goto v_43;
    else goto v_44;
v_43:
    v_213 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_12;
v_44:
    v_213 = stack[-4];
    stack[-1] = v_213;
v_50:
    v_213 = stack[-1];
    if (v_213 == nil) goto v_54;
    else goto v_55;
v_54:
    goto v_49;
v_55:
    v_213 = stack[-1];
    if (!car_legal(v_213)) v_213 = carerror(v_213); else
    v_213 = car(v_213);
    v_214 = v_213;
    v_213 = stack[-2];
    {   LispObject fn = basic_elt(env, 5); // vdelete
    v_213 = (*qfn2(fn))(fn, v_214, v_213);
    }
    env = stack[-7];
    stack[-2] = v_213;
    v_213 = stack[-1];
    if (!car_legal(v_213)) v_213 = cdrerror(v_213); else
    v_213 = cdr(v_213);
    stack[-1] = v_213;
    goto v_50;
v_49:
    v_214 = stack[-4];
    v_213 = basic_elt(env, 2); // lesspcdr
    {   LispObject fn = basic_elt(env, 6); // sort
    v_213 = (*qfn2(fn))(fn, v_214, v_213);
    }
    env = stack[-7];
    stack[-4] = v_213;
    v_213 = stack[-4];
    if (!car_legal(v_213)) v_213 = carerror(v_213); else
    v_213 = car(v_213);
    if (!car_legal(v_213)) v_214 = cdrerror(v_213); else
    v_214 = cdr(v_213);
    v_213 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_214 == v_213) goto v_71;
    else goto v_72;
v_71:
    v_214 = stack[-4];
    v_213 = stack[-2];
    v_213 = Lappend_2(nil, v_214, v_213);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 7); // mapcarcar
    v_213 = (*qfn1(fn))(fn, v_213);
    }
    env = stack[-7];
    stack[-5] = v_213;
    v_213 = stack[-5];
    {   LispObject fn = basic_elt(env, 8); // setkorder
    v_213 = (*qfn1(fn))(fn, v_213);
    }
    env = stack[-7];
    stack[-4] = v_213;
    v_213 = stack[0];
    stack[-3] = v_213;
    v_213 = stack[-3];
    if (v_213 == nil) goto v_93;
    else goto v_94;
v_93:
    v_213 = nil;
    v_215 = v_213;
    goto v_88;
v_94:
    v_213 = stack[-3];
    if (!car_legal(v_213)) v_213 = carerror(v_213); else
    v_213 = car(v_213);
    if (!car_legal(v_213)) v_213 = carerror(v_213); else
    v_213 = car(v_213);
    {   LispObject fn = basic_elt(env, 9); // reorder
    v_213 = (*qfn1(fn))(fn, v_213);
    }
    env = stack[-7];
    v_213 = ncons(v_213);
    env = stack[-7];
    stack[-1] = v_213;
    stack[-2] = v_213;
v_89:
    v_213 = stack[-3];
    if (!car_legal(v_213)) v_213 = cdrerror(v_213); else
    v_213 = cdr(v_213);
    stack[-3] = v_213;
    v_213 = stack[-3];
    if (v_213 == nil) goto v_108;
    else goto v_109;
v_108:
    v_213 = stack[-2];
    v_215 = v_213;
    goto v_88;
v_109:
    stack[0] = stack[-1];
    v_213 = stack[-3];
    if (!car_legal(v_213)) v_213 = carerror(v_213); else
    v_213 = car(v_213);
    if (!car_legal(v_213)) v_213 = carerror(v_213); else
    v_213 = car(v_213);
    {   LispObject fn = basic_elt(env, 9); // reorder
    v_213 = (*qfn1(fn))(fn, v_213);
    }
    env = stack[-7];
    v_213 = ncons(v_213);
    env = stack[-7];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_213);
    v_213 = stack[-1];
    if (!car_legal(v_213)) v_213 = cdrerror(v_213); else
    v_213 = cdr(v_213);
    stack[-1] = v_213;
    goto v_89;
v_88:
    v_214 = nil;
    v_213 = stack[-5];
    {   LispObject fn = basic_elt(env, 10); // gcdlist3
    v_213 = (*qfn3(fn))(fn, v_215, v_214, v_213);
    }
    env = stack[-7];
    stack[0] = v_213;
    v_213 = stack[-4];
    {   LispObject fn = basic_elt(env, 8); // setkorder
    v_213 = (*qfn1(fn))(fn, v_213);
    }
    env = stack[-7];
    v_213 = stack[0];
    {   LispObject fn = basic_elt(env, 9); // reorder
    v_213 = (*qfn1(fn))(fn, v_213);
    }
    goto v_12;
v_72:
    v_213 = stack[-2];
    if (v_213 == nil) goto v_129;
    else goto v_130;
v_129:
    v_214 = stack[0];
    v_213 = stack[-4];
    {   LispObject fn = basic_elt(env, 11); // gcdlist2
    v_213 = (*qfn2(fn))(fn, v_214, v_213);
    }
    goto v_12;
v_130:
    v_214 = stack[-2];
    v_213 = stack[-4];
    v_213 = Lappend_2(nil, v_214, v_213);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 7); // mapcarcar
    v_213 = (*qfn1(fn))(fn, v_213);
    }
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 8); // setkorder
    v_213 = (*qfn1(fn))(fn, v_213);
    }
    env = stack[-7];
    stack[-5] = v_213;
    v_213 = nil;
    stack[-4] = v_213;
    v_213 = stack[0];
    stack[-1] = v_213;
v_144:
    v_213 = stack[-1];
    if (v_213 == nil) goto v_148;
    else goto v_149;
v_148:
    goto v_143;
v_149:
    v_213 = stack[-1];
    if (!car_legal(v_213)) v_213 = carerror(v_213); else
    v_213 = car(v_213);
    if (!car_legal(v_213)) v_213 = carerror(v_213); else
    v_213 = car(v_213);
    {   LispObject fn = basic_elt(env, 9); // reorder
    stack[0] = (*qfn1(fn))(fn, v_213);
    }
    env = stack[-7];
    v_213 = stack[-2];
    {   LispObject fn = basic_elt(env, 7); // mapcarcar
    v_214 = (*qfn1(fn))(fn, v_213);
    }
    env = stack[-7];
    v_213 = stack[-4];
    {   LispObject fn = basic_elt(env, 12); // split!-wrt!-variables
    v_213 = (*qfn3(fn))(fn, stack[0], v_214, v_213);
    }
    env = stack[-7];
    stack[-4] = v_213;
    v_213 = stack[-1];
    if (!car_legal(v_213)) v_213 = cdrerror(v_213); else
    v_213 = cdr(v_213);
    stack[-1] = v_213;
    goto v_144;
v_143:
    v_213 = stack[-5];
    {   LispObject fn = basic_elt(env, 8); // setkorder
    v_213 = (*qfn1(fn))(fn, v_213);
    }
    env = stack[-7];
    v_213 = stack[-4];
    stack[-5] = v_213;
    v_213 = stack[-5];
    if (v_213 == nil) goto v_176;
    else goto v_177;
v_176:
    v_213 = nil;
    goto v_171;
v_177:
    v_213 = stack[-5];
    if (!car_legal(v_213)) v_213 = carerror(v_213); else
    v_213 = car(v_213);
    stack[-1] = v_213;
    v_213 = stack[-1];
    {   LispObject fn = basic_elt(env, 9); // reorder
    stack[0] = (*qfn1(fn))(fn, v_213);
    }
    env = stack[-7];
    v_214 = stack[-1];
    v_213 = nil;
    {   LispObject fn = basic_elt(env, 13); // total!-degree!-in!-powers
    v_213 = (*qfn2(fn))(fn, v_214, v_213);
    }
    env = stack[-7];
    v_213 = cons(stack[0], v_213);
    env = stack[-7];
    v_213 = ncons(v_213);
    env = stack[-7];
    stack[-3] = v_213;
    stack[-4] = v_213;
v_172:
    v_213 = stack[-5];
    if (!car_legal(v_213)) v_213 = cdrerror(v_213); else
    v_213 = cdr(v_213);
    stack[-5] = v_213;
    v_213 = stack[-5];
    if (v_213 == nil) goto v_194;
    else goto v_195;
v_194:
    v_213 = stack[-4];
    goto v_171;
v_195:
    stack[-2] = stack[-3];
    v_213 = stack[-5];
    if (!car_legal(v_213)) v_213 = carerror(v_213); else
    v_213 = car(v_213);
    stack[-1] = v_213;
    v_213 = stack[-1];
    {   LispObject fn = basic_elt(env, 9); // reorder
    stack[0] = (*qfn1(fn))(fn, v_213);
    }
    env = stack[-7];
    v_214 = stack[-1];
    v_213 = nil;
    {   LispObject fn = basic_elt(env, 13); // total!-degree!-in!-powers
    v_213 = (*qfn2(fn))(fn, v_214, v_213);
    }
    env = stack[-7];
    v_213 = cons(stack[0], v_213);
    env = stack[-7];
    v_213 = ncons(v_213);
    env = stack[-7];
    if (!car_legal(stack[-2])) rplacd_fails(stack[-2]);
    setcdr(stack[-2], v_213);
    v_213 = stack[-3];
    if (!car_legal(v_213)) v_213 = cdrerror(v_213); else
    v_213 = cdr(v_213);
    stack[-3] = v_213;
    goto v_172;
v_171:
    {   LispObject fn = basic_elt(env, 0); // gcdlist1
    v_213 = (*qfn1(fn))(fn, v_213);
    }
v_12:
    ;}  // end of a binding scope
    return onevalue(v_213);
}



// Code for preptaylor!*!*

static LispObject CC_preptaylorHH(LispObject env,
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
    v_14 = qvalue(basic_elt(env, 1)); // convert!-taylor!*
    if (v_14 == nil) goto v_6;
    else goto v_7;
v_6:
    v_14 = v_15;
    goto v_5;
v_7:
    v_14 = v_15;
    {
        LispObject fn = basic_elt(env, 2); // preptaylor!*
        return (*qfn1(fn))(fn, v_14);
    }
    v_14 = nil;
v_5:
    return onevalue(v_14);
}



// Code for ev_2f

static LispObject CC_ev_2f(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_40 = stack[-1];
    if (v_40 == nil) goto v_10;
    else goto v_11;
v_10:
    v_40 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_6;
v_11:
    v_40 = stack[-1];
    if (!car_legal(v_40)) v_41 = carerror(v_40); else
    v_41 = car(v_40);
    v_40 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {   LispObject fn = basic_elt(env, 1); // iequal
    v_40 = (*qfn2(fn))(fn, v_41, v_40);
    }
    env = stack[-3];
    if (v_40 == nil) goto v_15;
    v_40 = stack[-1];
    if (!car_legal(v_40)) v_40 = cdrerror(v_40); else
    v_40 = cdr(v_40);
    stack[-1] = v_40;
    v_40 = stack[0];
    if (!car_legal(v_40)) v_40 = cdrerror(v_40); else
    v_40 = cdr(v_40);
    stack[0] = v_40;
    goto v_7;
v_15:
    v_40 = stack[0];
    if (!car_legal(v_40)) v_41 = carerror(v_40); else
    v_41 = car(v_40);
    v_40 = stack[-1];
    if (!car_legal(v_40)) v_40 = carerror(v_40); else
    v_40 = car(v_40);
    {   LispObject fn = basic_elt(env, 2); // to
    v_41 = (*qfn2(fn))(fn, v_41, v_40);
    }
    env = stack[-3];
    v_40 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_40 = cons(v_41, v_40);
    env = stack[-3];
    stack[-2] = ncons(v_40);
    env = stack[-3];
    v_40 = stack[-1];
    if (!car_legal(v_40)) v_41 = cdrerror(v_40); else
    v_41 = cdr(v_40);
    v_40 = stack[0];
    if (!car_legal(v_40)) v_40 = cdrerror(v_40); else
    v_40 = cdr(v_40);
    {   LispObject fn = basic_elt(env, 0); // ev_2f
    v_40 = (*qfn2(fn))(fn, v_41, v_40);
    }
    env = stack[-3];
    {
        LispObject v_45 = stack[-2];
        LispObject fn = basic_elt(env, 3); // multf
        return (*qfn2(fn))(fn, v_45, v_40);
    }
    v_40 = nil;
v_6:
    return onevalue(v_40);
}



// Code for redpar

static LispObject CC_redpar(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    stack[-2] = nil;
v_10:
    v_41 = stack[0];
    if (v_41 == nil) goto v_13;
    else goto v_14;
v_13:
    goto v_9;
v_14:
    v_41 = stack[0];
    if (!car_legal(v_41)) v_42 = carerror(v_41); else
    v_42 = car(v_41);
    v_41 = stack[-1];
    v_41 = Lmember(nil, v_42, v_41);
    if (v_41 == nil) goto v_20;
    v_41 = stack[0];
    if (!car_legal(v_41)) v_42 = carerror(v_41); else
    v_42 = car(v_41);
    v_41 = stack[-1];
    v_41 = Ldelete(nil, v_42, v_41);
    env = stack[-3];
    stack[-1] = v_41;
    goto v_18;
v_20:
    v_41 = stack[0];
    if (!car_legal(v_41)) v_42 = carerror(v_41); else
    v_42 = car(v_41);
    v_41 = stack[-2];
    v_41 = cons(v_42, v_41);
    env = stack[-3];
    stack[-2] = v_41;
    goto v_18;
v_18:
    v_41 = stack[0];
    if (!car_legal(v_41)) v_41 = cdrerror(v_41); else
    v_41 = cdr(v_41);
    stack[0] = v_41;
    goto v_10;
v_9:
    stack[0] = stack[-1];
    v_41 = stack[-2];
    v_41 = Lreverse(nil, v_41);
    {
        LispObject v_46 = stack[0];
        return list2(v_46, v_41);
    }
    return onevalue(v_41);
}



// Code for cr!:minusp

static LispObject CC_crTminusp(LispObject env,
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
    v_46 = v_45;
    if (!car_legal(v_46)) v_46 = cdrerror(v_46); else
    v_46 = cdr(v_46);
    if (!car_legal(v_46)) v_46 = carerror(v_46); else
    v_46 = car(v_46);
    if (!car_legal(v_45)) v_45 = cdrerror(v_45); else
    v_45 = cdr(v_45);
    if (!car_legal(v_45)) v_45 = cdrerror(v_45); else
    v_45 = cdr(v_45);
    v_47 = v_46;
    v_46 = v_45;
    v_45 = v_47;
    if (!consp(v_45)) goto v_14;
    else goto v_15;
v_14:
    v_45 = v_46;
    v_45 = static_cast<LispObject>(zerop(v_45));
    v_45 = v_45 ? lisp_true : nil;
    if (v_45 == nil) goto v_19;
    else goto v_20;
v_19:
    v_45 = nil;
    goto v_18;
v_20:
    v_46 = v_47;
    v_45 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
        return Llessp_2(nil, v_46, v_45);
    v_45 = nil;
v_18:
    goto v_13;
v_15:
    v_45 = v_46;
    if (!car_legal(v_45)) v_45 = carerror(v_45); else
    v_45 = car(v_45);
    v_45 = static_cast<LispObject>(zerop(v_45));
    v_45 = v_45 ? lisp_true : nil;
    if (v_45 == nil) goto v_33;
    else goto v_34;
v_33:
    v_45 = nil;
    goto v_32;
v_34:
    v_45 = v_47;
    if (!car_legal(v_45)) v_46 = carerror(v_45); else
    v_46 = car(v_45);
    v_45 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
        return Llessp_2(nil, v_46, v_45);
    v_45 = nil;
v_32:
    goto v_13;
    v_45 = nil;
v_13:
    return onevalue(v_45);
}



// Code for vdpenumerate

static LispObject CC_vdpenumerate(LispObject env,
                         LispObject v_2)
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
    v_40 = stack[0];
    if (v_40 == nil) goto v_10;
    else goto v_11;
v_10:
    v_40 = lisp_true;
    goto v_9;
v_11:
    v_40 = stack[0];
    if (!car_legal(v_40)) v_40 = cdrerror(v_40); else
    v_40 = cdr(v_40);
    if (!car_legal(v_40)) v_40 = cdrerror(v_40); else
    v_40 = cdr(v_40);
    if (!car_legal(v_40)) v_40 = cdrerror(v_40); else
    v_40 = cdr(v_40);
    if (!car_legal(v_40)) v_40 = carerror(v_40); else
    v_40 = car(v_40);
    v_40 = (v_40 == nil ? lisp_true : nil);
    goto v_9;
    v_40 = nil;
v_9:
    if (v_40 == nil) goto v_7;
    v_40 = stack[0];
    goto v_5;
v_7:
    v_40 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // vdpsave
    v_40 = (*qfn1(fn))(fn, v_40);
    }
    env = stack[-1];
    stack[0] = v_40;
    v_41 = stack[0];
    v_40 = basic_elt(env, 1); // number
    {   LispObject fn = basic_elt(env, 4); // vdpgetprop
    v_40 = (*qfn2(fn))(fn, v_41, v_40);
    }
    env = stack[-1];
    if (v_40 == nil) goto v_29;
    else goto v_30;
v_29:
    v_42 = stack[0];
    v_41 = basic_elt(env, 1); // number
    v_40 = qvalue(basic_elt(env, 2)); // pcount!*
    v_40 = static_cast<LispObject>(static_cast<std::intptr_t>(v_40) + 0x10);
    setvalue(basic_elt(env, 2), v_40); // pcount!*
    {   LispObject fn = basic_elt(env, 5); // vdpputprop
    v_40 = (*qfn3(fn))(fn, v_42, v_41, v_40);
    }
    stack[0] = v_40;
    goto v_28;
v_30:
v_28:
    v_40 = stack[0];
    goto v_5;
    v_40 = nil;
v_5:
    return onevalue(v_40);
}



// Code for listofvarnames

static LispObject CC_listofvarnames(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_113, v_114;
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
    v_113 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // listp
    v_113 = (*qfn1(fn))(fn, v_113);
    }
    env = stack[-5];
    if (v_113 == nil) goto v_6;
    else goto v_7;
v_6:
    v_113 = basic_elt(env, 1); // "invalid argument to listofvarnames"
    {
        LispObject fn = basic_elt(env, 4); // rederr
        return (*qfn1(fn))(fn, v_113);
    }
v_7:
    v_113 = stack[0];
    stack[-4] = v_113;
    v_113 = stack[-4];
    if (v_113 == nil) goto v_23;
    else goto v_24;
v_23:
    v_113 = nil;
    goto v_18;
v_24:
    v_113 = stack[-4];
    if (!car_legal(v_113)) v_113 = carerror(v_113); else
    v_113 = car(v_113);
    stack[0] = v_113;
    v_113 = stack[0];
    {   LispObject fn = basic_elt(env, 5); // domain!*p
    v_113 = (*qfn1(fn))(fn, v_113);
    }
    env = stack[-5];
    if (v_113 == nil) goto v_34;
    v_114 = nil;
    v_113 = basic_elt(env, 2); // free
    v_113 = cons(v_114, v_113);
    env = stack[-5];
    goto v_32;
v_34:
    v_113 = stack[0];
    if (!consp(v_113)) goto v_40;
    else goto v_41;
v_40:
    v_114 = nil;
    v_113 = basic_elt(env, 2); // free
    v_113 = cons(v_114, v_113);
    env = stack[-5];
    goto v_32;
v_41:
    v_113 = stack[0];
    if (!car_legal(v_113)) v_113 = carerror(v_113); else
    v_113 = car(v_113);
    if (symbolp(v_113)) goto v_46;
    else goto v_47;
v_46:
    v_113 = stack[0];
    if (!car_legal(v_113)) v_114 = carerror(v_113); else
    v_114 = car(v_113);
    v_113 = basic_elt(env, 2); // free
    v_113 = cons(v_114, v_113);
    env = stack[-5];
    goto v_32;
v_47:
    v_113 = stack[0];
    if (!car_legal(v_113)) v_113 = carerror(v_113); else
    v_113 = car(v_113);
    if (!car_legal(v_113)) v_113 = carerror(v_113); else
    v_113 = car(v_113);
    if (symbolp(v_113)) goto v_54;
    else goto v_55;
v_54:
    v_113 = stack[0];
    if (!car_legal(v_113)) v_113 = carerror(v_113); else
    v_113 = car(v_113);
    if (!car_legal(v_113)) v_114 = carerror(v_113); else
    v_114 = car(v_113);
    v_113 = basic_elt(env, 2); // free
    v_113 = cons(v_114, v_113);
    env = stack[-5];
    goto v_32;
v_55:
    v_113 = nil;
v_32:
    v_113 = ncons(v_113);
    env = stack[-5];
    stack[-2] = v_113;
    stack[-3] = v_113;
v_19:
    v_113 = stack[-4];
    if (!car_legal(v_113)) v_113 = cdrerror(v_113); else
    v_113 = cdr(v_113);
    stack[-4] = v_113;
    v_113 = stack[-4];
    if (v_113 == nil) goto v_68;
    else goto v_69;
v_68:
    v_113 = stack[-3];
    goto v_18;
v_69:
    stack[-1] = stack[-2];
    v_113 = stack[-4];
    if (!car_legal(v_113)) v_113 = carerror(v_113); else
    v_113 = car(v_113);
    stack[0] = v_113;
    v_113 = stack[0];
    {   LispObject fn = basic_elt(env, 5); // domain!*p
    v_113 = (*qfn1(fn))(fn, v_113);
    }
    env = stack[-5];
    if (v_113 == nil) goto v_80;
    v_114 = nil;
    v_113 = basic_elt(env, 2); // free
    v_113 = cons(v_114, v_113);
    env = stack[-5];
    goto v_78;
v_80:
    v_113 = stack[0];
    if (!consp(v_113)) goto v_86;
    else goto v_87;
v_86:
    v_114 = nil;
    v_113 = basic_elt(env, 2); // free
    v_113 = cons(v_114, v_113);
    env = stack[-5];
    goto v_78;
v_87:
    v_113 = stack[0];
    if (!car_legal(v_113)) v_113 = carerror(v_113); else
    v_113 = car(v_113);
    if (symbolp(v_113)) goto v_92;
    else goto v_93;
v_92:
    v_113 = stack[0];
    if (!car_legal(v_113)) v_114 = carerror(v_113); else
    v_114 = car(v_113);
    v_113 = basic_elt(env, 2); // free
    v_113 = cons(v_114, v_113);
    env = stack[-5];
    goto v_78;
v_93:
    v_113 = stack[0];
    if (!car_legal(v_113)) v_113 = carerror(v_113); else
    v_113 = car(v_113);
    if (!car_legal(v_113)) v_113 = carerror(v_113); else
    v_113 = car(v_113);
    if (symbolp(v_113)) goto v_100;
    else goto v_101;
v_100:
    v_113 = stack[0];
    if (!car_legal(v_113)) v_113 = carerror(v_113); else
    v_113 = car(v_113);
    if (!car_legal(v_113)) v_114 = carerror(v_113); else
    v_114 = car(v_113);
    v_113 = basic_elt(env, 2); // free
    v_113 = cons(v_114, v_113);
    env = stack[-5];
    goto v_78;
v_101:
    v_113 = nil;
v_78:
    v_113 = ncons(v_113);
    env = stack[-5];
    if (!car_legal(stack[-1])) rplacd_fails(stack[-1]);
    setcdr(stack[-1], v_113);
    v_113 = stack[-2];
    if (!car_legal(v_113)) v_113 = cdrerror(v_113); else
    v_113 = cdr(v_113);
    stack[-2] = v_113;
    goto v_19;
v_18:
    goto v_5;
    v_113 = nil;
v_5:
    return onevalue(v_113);
}



// Code for p_eq_vertex

static LispObject CC_p_eq_vertex(LispObject env,
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
    v_34 = v_35;
    v_34 = (v_34 == nil ? lisp_true : nil);
    goto v_6;
v_11:
    v_34 = v_35;
    if (v_34 == nil) goto v_15;
    else goto v_16;
v_15:
    v_34 = nil;
    goto v_6;
v_16:
    v_34 = v_36;
    if (!car_legal(v_34)) v_34 = carerror(v_34); else
    v_34 = car(v_34);
    if (!car_legal(v_34)) v_37 = carerror(v_34); else
    v_37 = car(v_34);
    v_34 = v_35;
    if (!car_legal(v_34)) v_34 = carerror(v_34); else
    v_34 = car(v_34);
    if (!car_legal(v_34)) v_34 = carerror(v_34); else
    v_34 = car(v_34);
    if (v_37 == v_34) goto v_19;
    else goto v_20;
v_19:
    v_34 = v_36;
    if (!car_legal(v_34)) v_34 = cdrerror(v_34); else
    v_34 = cdr(v_34);
    v_36 = v_34;
    v_34 = v_35;
    if (!car_legal(v_34)) v_34 = cdrerror(v_34); else
    v_34 = cdr(v_34);
    v_35 = v_34;
    goto v_7;
v_20:
    v_34 = nil;
    goto v_6;
    v_34 = nil;
v_6:
    return onevalue(v_34);
}



// Code for intargfn

static LispObject CC_intargfn(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
        push(v_2,v_3,v_4);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_4,v_3,v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil, nil, nil, nil, nil);
    push(nil, nil, nil);
    stack_popper stack_popper_var(9);
// copy arguments values to proper place
    stack[-4] = v_4;
    stack[-5] = v_3;
    stack[-6] = v_2;
// end of prologue
    stack[-7] = nil;
    v_41 = stack[-6];
    if (!car_legal(v_41)) v_41 = cdrerror(v_41); else
    v_41 = cdr(v_41);
    stack[-3] = v_41;
v_14:
    v_41 = stack[-3];
    if (v_41 == nil) goto v_17;
    else goto v_18;
v_17:
    goto v_13;
v_18:
    v_41 = stack[-3];
    if (!car_legal(v_41)) stack[-2] = carerror(v_41); else
    stack[-2] = car(v_41);
    stack[-1] = stack[-5];
    stack[0] = basic_elt(env, 1); // integer
    v_41 = stack[-4];
    v_41 = ncons(v_41);
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 4); // convertmode
    v_42 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_41);
    }
    env = stack[-8];
    v_41 = stack[-7];
    v_41 = cons(v_42, v_41);
    env = stack[-8];
    stack[-7] = v_41;
    v_41 = stack[-3];
    if (!car_legal(v_41)) v_41 = cdrerror(v_41); else
    v_41 = cdr(v_41);
    stack[-3] = v_41;
    goto v_14;
v_13:
    stack[0] = basic_elt(env, 2); // list
    v_41 = stack[-6];
    if (!car_legal(v_41)) v_43 = carerror(v_41); else
    v_43 = car(v_41);
    v_42 = stack[-5];
    v_41 = basic_elt(env, 3); // algebraic
    {   LispObject fn = basic_elt(env, 5); // form1
    stack[-1] = (*qfn3(fn))(fn, v_43, v_42, v_41);
    }
    env = stack[-8];
    v_41 = stack[-7];
    {   LispObject fn = basic_elt(env, 6); // reversip!*
    v_41 = (*qfn1(fn))(fn, v_41);
    }
    {
        LispObject v_52 = stack[0];
        LispObject v_53 = stack[-1];
        return list2star(v_52, v_53, v_41);
    }
    return onevalue(v_41);
}



// Code for fillin

static LispObject CC_fillin(LispObject env,
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
    v_17 = v_2;
// end of prologue
    v_18 = v_17;
    if (v_18 == nil) goto v_6;
    else goto v_7;
v_6:
    v_17 = nil;
    goto v_5;
v_7:
    v_18 = v_17;
    if (!car_legal(v_17)) v_17 = carerror(v_17); else
    v_17 = car(v_17);
    if (!car_legal(v_17)) v_17 = carerror(v_17); else
    v_17 = car(v_17);
    {
        LispObject fn = basic_elt(env, 1); // fillin1
        return (*qfn2(fn))(fn, v_18, v_17);
    }
    v_17 = nil;
v_5:
    return onevalue(v_17);
}



// Code for compactf1

static LispObject CC_compactf1(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_26, v_27;
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
    stack[0] = v_5;
    stack[-1] = v_4;
    stack[-2] = v_3;
    stack[-3] = v_2;
// end of prologue
    v_27 = stack[-1];
    v_26 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // intersection
    v_26 = (*qfn2(fn))(fn, v_27, v_26);
    }
    env = stack[-4];
    v_27 = v_26;
    if (v_27 == nil) goto v_15;
    else goto v_16;
v_15:
    v_26 = stack[-3];
    goto v_9;
v_16:
    v_27 = stack[0];
    v_26 = list2(v_27, v_26);
    env = stack[-4];
    {
        LispObject v_32 = stack[-3];
        LispObject v_33 = stack[-2];
        LispObject v_34 = stack[-1];
        LispObject fn = basic_elt(env, 2); // compactf11
        return (*qfn4up(fn))(fn, v_32, v_33, v_34, v_26);
    }
v_9:
    return onevalue(v_26);
}



// Code for tensor_has_dummy_idx

static LispObject CC_tensor_has_dummy_idx(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_25 = stack[-1];
    if (v_25 == nil) goto v_10;
    else goto v_11;
v_10:
    v_25 = nil;
    goto v_6;
v_11:
    v_25 = stack[-1];
    if (!car_legal(v_25)) v_26 = carerror(v_25); else
    v_26 = car(v_25);
    v_25 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // smember
    v_25 = (*qfn2(fn))(fn, v_26, v_25);
    }
    env = stack[-2];
    if (v_25 == nil) goto v_15;
    v_25 = lisp_true;
    goto v_6;
v_15:
    v_25 = stack[-1];
    if (!car_legal(v_25)) v_25 = cdrerror(v_25); else
    v_25 = cdr(v_25);
    stack[-1] = v_25;
    goto v_7;
    v_25 = nil;
v_6:
    return onevalue(v_25);
}



// Code for cdr_signsort

static LispObject CC_cdr_signsort(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_141, v_142;
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
    v_141 = v_2;
// end of prologue
    {   LispObject fn = basic_elt(env, 1); // copy
    v_141 = (*qfn1(fn))(fn, v_141);
    }
    env = stack[-7];
    stack[-6] = v_141;
    v_141 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-1] = v_141;
    v_141 = nil;
    stack[-4] = v_141;
v_19:
    v_141 = stack[-6];
    if (v_141 == nil) goto v_22;
    else goto v_23;
v_22:
    goto v_18;
v_23:
    v_141 = stack[-4];
    if (v_141 == nil) goto v_28;
    else goto v_29;
v_28:
    v_141 = stack[-6];
    if (!car_legal(v_141)) v_142 = carerror(v_141); else
    v_142 = car(v_141);
    v_141 = stack[-4];
    v_141 = cons(v_142, v_141);
    env = stack[-7];
    stack[-4] = v_141;
    v_141 = stack[-6];
    if (!car_legal(v_141)) v_141 = cdrerror(v_141); else
    v_141 = cdr(v_141);
    stack[-6] = v_141;
    goto v_27;
v_29:
    v_141 = stack[-6];
    if (!car_legal(v_141)) v_141 = carerror(v_141); else
    v_141 = car(v_141);
    if (!car_legal(v_141)) v_142 = cdrerror(v_141); else
    v_142 = cdr(v_141);
    v_141 = stack[-4];
    if (!car_legal(v_141)) v_141 = carerror(v_141); else
    v_141 = car(v_141);
    if (!car_legal(v_141)) v_141 = cdrerror(v_141); else
    v_141 = cdr(v_141);
    if (equal(v_142, v_141)) goto v_38;
    else goto v_39;
v_38:
    v_141 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-1] = v_141;
    v_141 = nil;
    stack[-6] = v_141;
    stack[-4] = v_141;
    goto v_27;
v_39:
    stack[0] = stack[-5];
    v_141 = stack[-4];
    if (!car_legal(v_141)) v_141 = carerror(v_141); else
    v_141 = car(v_141);
    if (!car_legal(v_141)) v_142 = cdrerror(v_141); else
    v_142 = cdr(v_141);
    v_141 = stack[-6];
    if (!car_legal(v_141)) v_141 = carerror(v_141); else
    v_141 = car(v_141);
    if (!car_legal(v_141)) v_141 = cdrerror(v_141); else
    v_141 = cdr(v_141);
    v_141 = list2(v_142, v_141);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 2); // apply
    v_141 = (*qfn2(fn))(fn, stack[0], v_141);
    }
    env = stack[-7];
    if (v_141 == nil) goto v_50;
    v_141 = stack[-6];
    if (!car_legal(v_141)) v_142 = carerror(v_141); else
    v_142 = car(v_141);
    v_141 = stack[-4];
    v_141 = cons(v_142, v_141);
    env = stack[-7];
    stack[-4] = v_141;
    v_141 = stack[-6];
    if (!car_legal(v_141)) v_141 = cdrerror(v_141); else
    v_141 = cdr(v_141);
    stack[-6] = v_141;
    goto v_27;
v_50:
    v_141 = stack[-1];
    v_141 = negate(v_141);
    env = stack[-7];
    stack[-1] = v_141;
    v_141 = stack[-4];
    stack[-3] = v_141;
    v_141 = lisp_true;
    stack[-2] = v_141;
v_75:
    v_141 = stack[-2];
    if (v_141 == nil) goto v_78;
    else goto v_79;
v_78:
    goto v_74;
v_79:
    v_141 = stack[-3];
    if (!car_legal(v_141)) v_141 = cdrerror(v_141); else
    v_141 = cdr(v_141);
    if (v_141 == nil) goto v_84;
    else goto v_85;
v_84:
    v_141 = nil;
    stack[-2] = v_141;
    goto v_83;
v_85:
    v_141 = stack[-3];
    if (!car_legal(v_141)) v_141 = cdrerror(v_141); else
    v_141 = cdr(v_141);
    if (!car_legal(v_141)) v_141 = carerror(v_141); else
    v_141 = car(v_141);
    if (!car_legal(v_141)) v_142 = cdrerror(v_141); else
    v_142 = cdr(v_141);
    v_141 = stack[-6];
    if (!car_legal(v_141)) v_141 = carerror(v_141); else
    v_141 = car(v_141);
    if (!car_legal(v_141)) v_141 = cdrerror(v_141); else
    v_141 = cdr(v_141);
    if (equal(v_142, v_141)) goto v_89;
    else goto v_90;
v_89:
    v_141 = nil;
    stack[-2] = v_141;
    v_141 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-1] = v_141;
    v_141 = nil;
    stack[-6] = v_141;
    stack[-4] = v_141;
    goto v_83;
v_90:
    stack[0] = stack[-5];
    v_141 = stack[-3];
    if (!car_legal(v_141)) v_141 = cdrerror(v_141); else
    v_141 = cdr(v_141);
    if (!car_legal(v_141)) v_141 = carerror(v_141); else
    v_141 = car(v_141);
    if (!car_legal(v_141)) v_142 = cdrerror(v_141); else
    v_142 = cdr(v_141);
    v_141 = stack[-6];
    if (!car_legal(v_141)) v_141 = carerror(v_141); else
    v_141 = car(v_141);
    if (!car_legal(v_141)) v_141 = cdrerror(v_141); else
    v_141 = cdr(v_141);
    v_141 = list2(v_142, v_141);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 2); // apply
    v_141 = (*qfn2(fn))(fn, stack[0], v_141);
    }
    env = stack[-7];
    if (v_141 == nil) goto v_102;
    else goto v_103;
v_102:
    v_141 = stack[-3];
    if (!car_legal(v_141)) v_141 = cdrerror(v_141); else
    v_141 = cdr(v_141);
    stack[-3] = v_141;
    v_141 = stack[-1];
    v_141 = negate(v_141);
    env = stack[-7];
    stack[-1] = v_141;
    goto v_83;
v_103:
    v_141 = nil;
    stack[-2] = v_141;
    goto v_83;
v_83:
    goto v_75;
v_74:
    v_141 = stack[-6];
    if (v_141 == nil) goto v_125;
    stack[0] = stack[-3];
    v_141 = stack[-6];
    if (!car_legal(v_141)) v_142 = carerror(v_141); else
    v_142 = car(v_141);
    v_141 = stack[-3];
    if (!car_legal(v_141)) v_141 = cdrerror(v_141); else
    v_141 = cdr(v_141);
    v_141 = cons(v_142, v_141);
    env = stack[-7];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_141);
    v_141 = stack[-6];
    if (!car_legal(v_141)) v_141 = cdrerror(v_141); else
    v_141 = cdr(v_141);
    stack[-6] = v_141;
    goto v_123;
v_125:
v_123:
    goto v_27;
v_27:
    goto v_19;
v_18:
    stack[0] = stack[-1];
    v_141 = stack[-4];
    v_141 = Lreverse(nil, v_141);
    {
        LispObject v_150 = stack[0];
        return cons(v_150, v_141);
    }
    return onevalue(v_141);
}



// Code for x!*!*p!-w

static LispObject CC_xHHpKw(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    v_14 = v_3;
    v_15 = v_2;
// end of prologue
    {   LispObject fn = basic_elt(env, 1); // to
    v_15 = (*qfn2(fn))(fn, v_15, v_14);
    }
    env = stack[-1];
    v_14 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_14 = cons(v_15, v_14);
    env = stack[-1];
    v_15 = ncons(v_14);
    env = stack[-1];
    v_14 = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // general!-difference!-mod!-p
        return (*qfn2(fn))(fn, v_15, v_14);
    }
}



// Code for uniquifyf

static LispObject CC_uniquifyf(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_48 = stack[0];
    if (!consp(v_48)) goto v_12;
    else goto v_13;
v_12:
    v_48 = lisp_true;
    goto v_11;
v_13:
    v_48 = stack[0];
    if (!car_legal(v_48)) v_48 = carerror(v_48); else
    v_48 = car(v_48);
    v_48 = (consp(v_48) ? nil : lisp_true);
    goto v_11;
    v_48 = nil;
v_11:
    if (v_48 == nil) goto v_9;
    v_48 = nil;
    goto v_5;
v_9:
    v_48 = stack[0];
    if (!car_legal(v_48)) v_48 = carerror(v_48); else
    v_48 = car(v_48);
    if (!car_legal(v_48)) v_48 = carerror(v_48); else
    v_48 = car(v_48);
    if (!car_legal(v_48)) v_48 = carerror(v_48); else
    v_48 = car(v_48);
    if (!consp(v_48)) goto v_22;
    else goto v_23;
v_22:
    goto v_7;
v_23:
    v_48 = stack[0];
    if (!car_legal(v_48)) v_48 = carerror(v_48); else
    v_48 = car(v_48);
    if (!car_legal(v_48)) stack[-1] = carerror(v_48); else
    stack[-1] = car(v_48);
    v_48 = stack[0];
    if (!car_legal(v_48)) v_48 = carerror(v_48); else
    v_48 = car(v_48);
    if (!car_legal(v_48)) v_48 = carerror(v_48); else
    v_48 = car(v_48);
    if (!car_legal(v_48)) v_48 = carerror(v_48); else
    v_48 = car(v_48);
    {   LispObject fn = basic_elt(env, 1); // uniquifyk
    v_48 = (*qfn1(fn))(fn, v_48);
    }
    env = stack[-2];
    if (!car_legal(stack[-1])) rplaca_fails(stack[-1]);
    setcar(stack[-1], v_48);
    goto v_7;
v_7:
    v_48 = stack[0];
    if (!car_legal(v_48)) v_48 = carerror(v_48); else
    v_48 = car(v_48);
    if (!car_legal(v_48)) v_48 = cdrerror(v_48); else
    v_48 = cdr(v_48);
    {   LispObject fn = basic_elt(env, 0); // uniquifyf
    v_48 = (*qfn1(fn))(fn, v_48);
    }
    env = stack[-2];
    v_48 = stack[0];
    if (!car_legal(v_48)) v_48 = cdrerror(v_48); else
    v_48 = cdr(v_48);
    {   LispObject fn = basic_elt(env, 0); // uniquifyf
    v_48 = (*qfn1(fn))(fn, v_48);
    }
    v_48 = stack[0];
v_5:
    return onevalue(v_48);
}



// Code for add!-to!-sorted!-tree

static LispObject CC_addKtoKsortedKtree(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_59 = stack[0];
    if (v_59 == nil) goto v_11;
    else goto v_12;
v_11:
    stack[0] = stack[-2];
    v_61 = nil;
    v_60 = stack[-1];
    v_59 = nil;
    v_59 = list2star(v_61, v_60, v_59);
    env = stack[-3];
    {
        LispObject v_65 = stack[0];
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn2(fn))(fn, v_65, v_59);
    }
v_12:
    v_60 = stack[-1];
    v_59 = stack[0];
    if (!car_legal(v_59)) v_59 = cdrerror(v_59); else
    v_59 = cdr(v_59);
    if (!car_legal(v_59)) v_59 = carerror(v_59); else
    v_59 = car(v_59);
    if (equal(v_60, v_59)) goto v_20;
    else goto v_21;
v_20:
    v_60 = stack[-2];
    v_59 = stack[0];
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn2(fn))(fn, v_60, v_59);
    }
v_21:
    v_60 = stack[-1];
    v_59 = stack[0];
    if (!car_legal(v_59)) v_59 = cdrerror(v_59); else
    v_59 = cdr(v_59);
    if (!car_legal(v_59)) v_59 = carerror(v_59); else
    v_59 = car(v_59);
    v_59 = Lorderp(nil, v_60, v_59);
    env = stack[-3];
    if (v_59 == nil) goto v_30;
    v_60 = stack[-1];
    v_59 = stack[0];
    if (!car_legal(v_59)) v_59 = carerror(v_59); else
    v_59 = car(v_59);
    {   LispObject fn = basic_elt(env, 0); // add!-to!-sorted!-tree
    v_60 = (*qfn2(fn))(fn, v_60, v_59);
    }
    env = stack[-3];
    v_59 = stack[0];
    if (!car_legal(v_59)) v_59 = cdrerror(v_59); else
    v_59 = cdr(v_59);
    v_59 = cons(v_60, v_59);
    env = stack[-3];
    {
        LispObject v_66 = stack[-2];
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn2(fn))(fn, v_66, v_59);
    }
v_30:
    v_59 = stack[0];
    if (!car_legal(v_59)) v_60 = carerror(v_59); else
    v_60 = car(v_59);
    v_59 = stack[-2];
    v_59 = cons(v_60, v_59);
    env = stack[-3];
    stack[-2] = v_59;
    v_59 = stack[0];
    if (!car_legal(v_59)) v_59 = cdrerror(v_59); else
    v_59 = cdr(v_59);
    if (!car_legal(v_59)) v_60 = carerror(v_59); else
    v_60 = car(v_59);
    v_59 = stack[-2];
    v_59 = cons(v_60, v_59);
    env = stack[-3];
    stack[-2] = v_59;
    v_59 = stack[0];
    if (!car_legal(v_59)) v_59 = cdrerror(v_59); else
    v_59 = cdr(v_59);
    if (!car_legal(v_59)) v_59 = cdrerror(v_59); else
    v_59 = cdr(v_59);
    stack[0] = v_59;
    goto v_8;
    v_59 = nil;
    return onevalue(v_59);
}



// Code for getsetvarlis

static LispObject CC_getsetvarlis(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_73, v_74;
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
    v_73 = stack[0];
    if (v_73 == nil) goto v_10;
    else goto v_11;
v_10:
    v_73 = stack[-1];
    {
        LispObject fn = basic_elt(env, 4); // nreverse
        return (*qfn1(fn))(fn, v_73);
    }
v_11:
    v_73 = stack[0];
    if (!consp(v_73)) goto v_15;
    else goto v_16;
v_15:
    v_74 = basic_elt(env, 1); // "getsetvarlis"
    v_73 = stack[0];
    v_73 = list2(v_74, v_73);
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 5); // errach
    v_73 = (*qfn1(fn))(fn, v_73);
    }
    env = stack[-2];
    {
        LispObject v_77 = stack[-1];
        LispObject fn = basic_elt(env, 4); // nreverse
        return (*qfn2(fn))(fn, v_77, v_73);
    }
v_16:
    v_73 = stack[0];
    if (!car_legal(v_73)) v_73 = carerror(v_73); else
    v_73 = car(v_73);
    if (!consp(v_73)) goto v_24;
    else goto v_25;
v_24:
    v_73 = stack[0];
    if (!car_legal(v_73)) v_74 = carerror(v_73); else
    v_74 = car(v_73);
    v_73 = stack[-1];
    v_73 = cons(v_74, v_73);
    env = stack[-2];
    stack[-1] = v_73;
    v_73 = stack[0];
    if (!car_legal(v_73)) v_73 = cdrerror(v_73); else
    v_73 = cdr(v_73);
    stack[0] = v_73;
    goto v_7;
v_25:
    v_73 = stack[0];
    if (!car_legal(v_73)) v_73 = carerror(v_73); else
    v_73 = car(v_73);
    if (!car_legal(v_73)) v_74 = carerror(v_73); else
    v_74 = car(v_73);
    v_73 = basic_elt(env, 2); // (setel setk)
    v_73 = Lmemq(nil, v_74, v_73);
    if (v_73 == nil) goto v_35;
    v_73 = stack[0];
    if (!car_legal(v_73)) v_73 = carerror(v_73); else
    v_73 = car(v_73);
    if (!car_legal(v_73)) v_73 = cdrerror(v_73); else
    v_73 = cdr(v_73);
    if (!car_legal(v_73)) v_73 = carerror(v_73); else
    v_73 = car(v_73);
    {   LispObject fn = basic_elt(env, 0); // getsetvarlis
    v_74 = (*qfn1(fn))(fn, v_73);
    }
    env = stack[-2];
    v_73 = stack[-1];
    v_73 = cons(v_74, v_73);
    env = stack[-2];
    stack[-1] = v_73;
    v_73 = stack[0];
    if (!car_legal(v_73)) v_73 = cdrerror(v_73); else
    v_73 = cdr(v_73);
    stack[0] = v_73;
    goto v_7;
v_35:
    v_73 = stack[0];
    if (!car_legal(v_73)) v_73 = carerror(v_73); else
    v_73 = car(v_73);
    if (!car_legal(v_73)) v_74 = carerror(v_73); else
    v_74 = car(v_73);
    v_73 = basic_elt(env, 3); // setq
    if (v_74 == v_73) goto v_50;
    else goto v_51;
v_50:
    v_73 = stack[0];
    if (!car_legal(v_73)) v_73 = carerror(v_73); else
    v_73 = car(v_73);
    if (!car_legal(v_73)) v_73 = cdrerror(v_73); else
    v_73 = cdr(v_73);
    if (!car_legal(v_73)) v_73 = carerror(v_73); else
    v_73 = car(v_73);
    v_74 = Lmkquote(nil, v_73);
    env = stack[-2];
    v_73 = stack[-1];
    v_73 = cons(v_74, v_73);
    env = stack[-2];
    stack[-1] = v_73;
    v_73 = stack[0];
    if (!car_legal(v_73)) v_73 = cdrerror(v_73); else
    v_73 = cdr(v_73);
    stack[0] = v_73;
    goto v_7;
v_51:
    v_73 = stack[0];
    if (!car_legal(v_73)) v_74 = carerror(v_73); else
    v_74 = car(v_73);
    v_73 = stack[-1];
    v_73 = cons(v_74, v_73);
    env = stack[-2];
    stack[-1] = v_73;
    v_73 = stack[0];
    if (!car_legal(v_73)) v_73 = cdrerror(v_73); else
    v_73 = cdr(v_73);
    stack[0] = v_73;
    goto v_7;
    v_73 = nil;
    return onevalue(v_73);
}



// Code for gd_applyscheme

static LispObject CC_gd_applyscheme(LispObject env,
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
    real_push(nil, nil, nil, nil, nil);
    stack_popper stack_popper_var(6);
// copy arguments values to proper place
    stack[-2] = v_3;
    stack[-3] = v_2;
// end of prologue
    stack[-4] = nil;
    v_42 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-1] = v_42;
    v_42 = stack[-2];
    stack[0] = v_42;
v_13:
    v_42 = stack[0];
    if (v_42 == nil) goto v_17;
    else goto v_18;
v_17:
    goto v_12;
v_18:
    v_42 = stack[-1];
    v_42 = add1(v_42);
    env = stack[-5];
    stack[-1] = v_42;
    v_43 = basic_elt(env, 1); // a
    v_42 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // mkid
    v_44 = (*qfn2(fn))(fn, v_43, v_42);
    }
    env = stack[-5];
    v_42 = stack[-2];
    if (!car_legal(v_42)) v_43 = carerror(v_42); else
    v_43 = car(v_42);
    v_42 = stack[-4];
    v_42 = acons(v_44, v_43, v_42);
    env = stack[-5];
    stack[-4] = v_42;
    v_42 = stack[-2];
    if (!car_legal(v_42)) v_42 = cdrerror(v_42); else
    v_42 = cdr(v_42);
    stack[-2] = v_42;
    v_42 = stack[0];
    if (!car_legal(v_42)) v_42 = cdrerror(v_42); else
    v_42 = cdr(v_42);
    stack[0] = v_42;
    goto v_13;
v_12:
    stack[0] = stack[-4];
    v_43 = stack[-3];
    v_42 = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // gd_getscheme
    v_42 = (*qfn2(fn))(fn, v_43, v_42);
    }
    {
        LispObject v_50 = stack[0];
        return Lsublis(nil, v_50, v_42);
    }
    return onevalue(v_42);
}



// Code for absodeg

static LispObject CC_absodeg(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_71, v_72;
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
    v_71 = v_2;
// end of prologue
    v_72 = v_71;
    v_72 = Lconsp(nil, v_72);
    env = stack[-5];
    if (v_72 == nil) goto v_6;
    else goto v_7;
v_6:
    v_71 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_5;
v_7:
    stack[-4] = basic_elt(env, 1); // plus
    stack[-3] = v_71;
    v_71 = stack[-3];
    if (v_71 == nil) goto v_25;
    else goto v_26;
v_25:
    v_71 = nil;
    goto v_20;
v_26:
    v_71 = stack[-3];
    if (!car_legal(v_71)) v_71 = carerror(v_71); else
    v_71 = car(v_71);
    v_72 = v_71;
    v_71 = v_72;
    v_71 = integerp(v_71);
    if (v_71 == nil) goto v_36;
    v_71 = v_72;
    v_71 = sub1(v_71);
    env = stack[-5];
    goto v_34;
v_36:
    v_71 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_34;
    v_71 = nil;
v_34:
    v_71 = ncons(v_71);
    env = stack[-5];
    stack[-1] = v_71;
    stack[-2] = v_71;
v_21:
    v_71 = stack[-3];
    if (!car_legal(v_71)) v_71 = cdrerror(v_71); else
    v_71 = cdr(v_71);
    stack[-3] = v_71;
    v_71 = stack[-3];
    if (v_71 == nil) goto v_48;
    else goto v_49;
v_48:
    v_71 = stack[-2];
    goto v_20;
v_49:
    stack[0] = stack[-1];
    v_71 = stack[-3];
    if (!car_legal(v_71)) v_71 = carerror(v_71); else
    v_71 = car(v_71);
    v_72 = v_71;
    v_71 = v_72;
    v_71 = integerp(v_71);
    if (v_71 == nil) goto v_60;
    v_71 = v_72;
    v_71 = sub1(v_71);
    env = stack[-5];
    goto v_58;
v_60:
    v_71 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_58;
    v_71 = nil;
v_58:
    v_71 = ncons(v_71);
    env = stack[-5];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_71);
    v_71 = stack[-1];
    if (!car_legal(v_71)) v_71 = cdrerror(v_71); else
    v_71 = cdr(v_71);
    stack[-1] = v_71;
    goto v_21;
v_20:
    v_71 = cons(stack[-4], v_71);
    env = stack[-5];
    {
        LispObject fn = basic_elt(env, 2); // eval
        return (*qfn1(fn))(fn, v_71);
    }
    v_71 = nil;
v_5:
    return onevalue(v_71);
}



// Code for depend!-l

static LispObject CC_dependKl(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
v_7:
    v_26 = stack[-1];
    if (v_26 == nil) goto v_10;
    else goto v_11;
v_10:
    v_26 = nil;
    goto v_6;
v_11:
    v_26 = stack[-1];
    if (!car_legal(v_26)) v_26 = carerror(v_26); else
    v_26 = car(v_26);
    {   LispObject fn = basic_elt(env, 1); // simp
    v_27 = (*qfn1(fn))(fn, v_26);
    }
    env = stack[-2];
    v_26 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // depend!-sq
    v_26 = (*qfn2(fn))(fn, v_27, v_26);
    }
    env = stack[-2];
    if (v_26 == nil) goto v_15;
    v_26 = lisp_true;
    goto v_6;
v_15:
    v_26 = stack[-1];
    if (!car_legal(v_26)) v_26 = cdrerror(v_26); else
    v_26 = cdr(v_26);
    stack[-1] = v_26;
    goto v_7;
    v_26 = nil;
v_6:
    return onevalue(v_26);
}



// Code for rl_print!*fof

static LispObject CC_rl_printHfof(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // reval
    v_7 = (*qfn1(fn))(fn, v_7);
    }
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // maprin
        return (*qfn1(fn))(fn, v_7);
    }
}



// Code for cl_susimkatl

static LispObject CC_cl_susimkatl(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_196, v_197, v_198;
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
    v_196 = v_4;
    stack[-4] = v_3;
    stack[-5] = v_2;
// end of prologue
    stack[-6] = v_196;
v_15:
    v_196 = stack[-6];
    if (v_196 == nil) goto v_20;
    else goto v_21;
v_20:
    v_196 = nil;
    goto v_14;
v_21:
    v_196 = stack[-6];
    if (!car_legal(v_196)) v_196 = carerror(v_196); else
    v_196 = car(v_196);
    v_198 = v_196;
    v_196 = v_198;
    if (!car_legal(v_196)) v_197 = cdrerror(v_196); else
    v_197 = cdr(v_196);
    v_196 = stack[-3];
    if (equal(v_197, v_196)) goto v_29;
    else goto v_30;
v_29:
    v_196 = v_198;
    if (!car_legal(v_196)) v_196 = carerror(v_196); else
    v_196 = car(v_196);
    v_196 = ncons(v_196);
    env = stack[-7];
    goto v_28;
v_30:
    v_196 = nil;
v_28:
    stack[-2] = v_196;
    v_196 = stack[-2];
    {   LispObject fn = basic_elt(env, 6); // lastpair
    v_196 = (*qfn1(fn))(fn, v_196);
    }
    env = stack[-7];
    stack[-1] = v_196;
    v_196 = stack[-6];
    if (!car_legal(v_196)) v_196 = cdrerror(v_196); else
    v_196 = cdr(v_196);
    stack[-6] = v_196;
    v_196 = stack[-1];
    if (!consp(v_196)) goto v_43;
    else goto v_44;
v_43:
    goto v_15;
v_44:
v_16:
    v_196 = stack[-6];
    if (v_196 == nil) goto v_48;
    else goto v_49;
v_48:
    v_196 = stack[-2];
    goto v_14;
v_49:
    stack[0] = stack[-1];
    v_196 = stack[-6];
    if (!car_legal(v_196)) v_196 = carerror(v_196); else
    v_196 = car(v_196);
    v_198 = v_196;
    v_196 = v_198;
    if (!car_legal(v_196)) v_197 = cdrerror(v_196); else
    v_197 = cdr(v_196);
    v_196 = stack[-3];
    if (equal(v_197, v_196)) goto v_58;
    else goto v_59;
v_58:
    v_196 = v_198;
    if (!car_legal(v_196)) v_196 = carerror(v_196); else
    v_196 = car(v_196);
    v_196 = ncons(v_196);
    env = stack[-7];
    goto v_57;
v_59:
    v_196 = nil;
v_57:
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_196);
    v_196 = stack[-1];
    {   LispObject fn = basic_elt(env, 6); // lastpair
    v_196 = (*qfn1(fn))(fn, v_196);
    }
    env = stack[-7];
    stack[-1] = v_196;
    v_196 = stack[-6];
    if (!car_legal(v_196)) v_196 = cdrerror(v_196); else
    v_196 = cdr(v_196);
    stack[-6] = v_196;
    goto v_16;
v_14:
    v_198 = v_196;
    v_196 = v_198;
    if (v_196 == nil) goto v_73;
    else goto v_74;
v_73:
    v_196 = nil;
    goto v_9;
v_74:
    v_197 = v_198;
    v_196 = stack[-4];
    {   LispObject fn = basic_elt(env, 7); // rl_susipost
    v_196 = (*qfn2(fn))(fn, v_197, v_196);
    }
    env = stack[-7];
    v_198 = v_196;
    v_197 = v_198;
    v_196 = basic_elt(env, 1); // true
    if (v_197 == v_196) goto v_86;
    else goto v_87;
v_86:
    v_196 = lisp_true;
    goto v_85;
v_87:
    v_197 = v_198;
    v_196 = basic_elt(env, 2); // false
    v_196 = (v_197 == v_196 ? lisp_true : nil);
    goto v_85;
    v_196 = nil;
v_85:
    if (v_196 == nil) goto v_83;
    v_197 = stack[-5];
    v_196 = basic_elt(env, 3); // and
    v_196 = (v_197 == v_196 ? lisp_true : nil);
    {   LispObject fn = basic_elt(env, 8); // cl_cflip
    v_196 = (*qfn2(fn))(fn, v_198, v_196);
    }
    return ncons(v_196);
v_83:
    v_197 = v_198;
    v_196 = basic_elt(env, 4); // inctheo
    if (v_197 == v_196) goto v_104;
    else goto v_105;
v_104:
    v_198 = basic_elt(env, 2); // false
    v_197 = stack[-5];
    v_196 = basic_elt(env, 3); // and
    v_196 = (v_197 == v_196 ? lisp_true : nil);
    {
        LispObject fn = basic_elt(env, 8); // cl_cflip
        return (*qfn2(fn))(fn, v_198, v_196);
    }
v_105:
    v_197 = stack[-5];
    v_196 = basic_elt(env, 5); // or
    if (v_197 == v_196) goto v_115;
    else goto v_116;
v_115:
    v_196 = v_198;
    stack[-3] = v_196;
    v_196 = stack[-3];
    if (v_196 == nil) goto v_128;
    else goto v_129;
v_128:
    v_196 = nil;
    goto v_123;
v_129:
    v_196 = stack[-3];
    if (!car_legal(v_196)) v_196 = carerror(v_196); else
    v_196 = car(v_196);
    {   LispObject fn = basic_elt(env, 9); // rl_negateat
    v_196 = (*qfn1(fn))(fn, v_196);
    }
    env = stack[-7];
    v_196 = ncons(v_196);
    env = stack[-7];
    stack[-1] = v_196;
    stack[-2] = v_196;
v_124:
    v_196 = stack[-3];
    if (!car_legal(v_196)) v_196 = cdrerror(v_196); else
    v_196 = cdr(v_196);
    stack[-3] = v_196;
    v_196 = stack[-3];
    if (v_196 == nil) goto v_142;
    else goto v_143;
v_142:
    v_196 = stack[-2];
    goto v_123;
v_143:
    stack[0] = stack[-1];
    v_196 = stack[-3];
    if (!car_legal(v_196)) v_196 = carerror(v_196); else
    v_196 = car(v_196);
    {   LispObject fn = basic_elt(env, 9); // rl_negateat
    v_196 = (*qfn1(fn))(fn, v_196);
    }
    env = stack[-7];
    v_196 = ncons(v_196);
    env = stack[-7];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_196);
    v_196 = stack[-1];
    if (!car_legal(v_196)) v_196 = cdrerror(v_196); else
    v_196 = cdr(v_196);
    stack[-1] = v_196;
    goto v_124;
v_123:
    v_198 = v_196;
    goto v_114;
v_116:
v_114:
    v_196 = v_198;
    stack[-3] = v_196;
    v_196 = stack[-3];
    if (v_196 == nil) goto v_165;
    else goto v_166;
v_165:
    v_196 = nil;
    goto v_160;
v_166:
    v_196 = stack[-3];
    if (!car_legal(v_196)) v_196 = carerror(v_196); else
    v_196 = car(v_196);
    v_197 = v_196;
    v_196 = stack[-4];
    {   LispObject fn = basic_elt(env, 10); // rl_susitf
    v_196 = (*qfn2(fn))(fn, v_197, v_196);
    }
    env = stack[-7];
    v_196 = ncons(v_196);
    env = stack[-7];
    stack[-1] = v_196;
    stack[-2] = v_196;
v_161:
    v_196 = stack[-3];
    if (!car_legal(v_196)) v_196 = cdrerror(v_196); else
    v_196 = cdr(v_196);
    stack[-3] = v_196;
    v_196 = stack[-3];
    if (v_196 == nil) goto v_180;
    else goto v_181;
v_180:
    v_196 = stack[-2];
    goto v_160;
v_181:
    stack[0] = stack[-1];
    v_196 = stack[-3];
    if (!car_legal(v_196)) v_196 = carerror(v_196); else
    v_196 = car(v_196);
    v_197 = v_196;
    v_196 = stack[-4];
    {   LispObject fn = basic_elt(env, 10); // rl_susitf
    v_196 = (*qfn2(fn))(fn, v_197, v_196);
    }
    env = stack[-7];
    v_196 = ncons(v_196);
    env = stack[-7];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_196);
    v_196 = stack[-1];
    if (!car_legal(v_196)) v_196 = cdrerror(v_196); else
    v_196 = cdr(v_196);
    stack[-1] = v_196;
    goto v_161;
v_160:
    v_198 = v_196;
    v_196 = v_198;
v_9:
    return onevalue(v_196);
}



// Code for ev_compless!?

static LispObject CC_ev_complessW(LispObject env,
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
    v_11 = v_3;
    v_10 = v_2;
// end of prologue
    {   LispObject fn = basic_elt(env, 1); // ev_comp
    v_11 = (*qfn2(fn))(fn, v_11, v_10);
    }
    env = stack[0];
    v_10 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {
        LispObject fn = basic_elt(env, 2); // iequal
        return (*qfn2(fn))(fn, v_11, v_10);
    }
}



// Code for appends

static LispObject CC_appends(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    v_11 = v_4;
    v_12 = v_3;
    v_13 = v_2;
// end of prologue
    stack[0] = v_13;
    v_11 = Lappend_2(nil, v_12, v_11);
    {
        LispObject v_15 = stack[0];
        return Lappend_2(nil, v_15, v_11);
    }
}



// Code for groebsaveltermbc

static LispObject CC_groebsaveltermbc(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_55, v_56, v_57;
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
    v_55 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // vbc2a
    v_55 = (*qfn1(fn))(fn, v_55);
    }
    env = stack[-2];
    stack[0] = v_55;
    v_55 = stack[0];
    if (is_number(v_55)) goto v_13;
    v_55 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // constant_exprp
    v_55 = (*qfn1(fn))(fn, v_55);
    }
    env = stack[-2];
    v_55 = (v_55 == nil ? lisp_true : nil);
    goto v_11;
v_13:
    v_55 = nil;
    goto v_11;
    v_55 = nil;
v_11:
    if (v_55 == nil) goto v_9;
    v_55 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // simp
    v_55 = (*qfn1(fn))(fn, v_55);
    }
    env = stack[-2];
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    {   LispObject fn = basic_elt(env, 5); // fctrf
    v_55 = (*qfn1(fn))(fn, v_55);
    }
    env = stack[-2];
    if (!car_legal(v_55)) v_55 = cdrerror(v_55); else
    v_55 = cdr(v_55);
    stack[-1] = v_55;
v_24:
    v_55 = stack[-1];
    if (v_55 == nil) goto v_32;
    else goto v_33;
v_32:
    v_55 = nil;
    goto v_23;
v_33:
    v_55 = stack[-1];
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    v_57 = v_55;
    v_55 = v_57;
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    {   LispObject fn = basic_elt(env, 6); // prepf
    v_55 = (*qfn1(fn))(fn, v_55);
    }
    env = stack[-2];
    v_57 = v_55;
    v_56 = v_57;
    v_55 = qvalue(basic_elt(env, 1)); // glterms
    v_55 = Lmember(nil, v_56, v_55);
    if (v_55 == nil) goto v_44;
    else goto v_45;
v_44:
    stack[0] = qvalue(basic_elt(env, 1)); // glterms
    v_55 = v_57;
    v_55 = ncons(v_55);
    env = stack[-2];
    v_55 = Lnconc(nil, stack[0], v_55);
    env = stack[-2];
    goto v_43;
v_45:
v_43:
    v_55 = stack[-1];
    if (!car_legal(v_55)) v_55 = cdrerror(v_55); else
    v_55 = cdr(v_55);
    stack[-1] = v_55;
    goto v_24;
v_23:
    goto v_7;
v_9:
    v_55 = nil;
v_7:
    return onevalue(v_55);
}



// Code for simpintersection

static LispObject CC_simpintersection(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    v_46 = v_2;
// end of prologue
    v_47 = basic_elt(env, 1); // intersection
    {   LispObject fn = basic_elt(env, 3); // applysetop
    v_46 = (*qfn2(fn))(fn, v_47, v_46);
    }
    env = stack[-1];
    v_48 = v_46;
    v_46 = v_48;
    if (!car_legal(v_46)) v_47 = carerror(v_46); else
    v_47 = car(v_46);
    v_46 = basic_elt(env, 1); // intersection
    if (v_47 == v_46) goto v_14;
    else goto v_15;
v_14:
    v_47 = qvalue(basic_elt(env, 2)); // empty_set
    v_46 = v_48;
    if (!car_legal(v_46)) v_46 = cdrerror(v_46); else
    v_46 = cdr(v_46);
    v_48 = v_46;
    v_46 = Lmember(nil, v_47, v_46);
    if (v_46 == nil) goto v_22;
    v_46 = qvalue(basic_elt(env, 2)); // empty_set
    goto v_20;
v_22:
    v_46 = v_48;
    if (!car_legal(v_46)) v_46 = cdrerror(v_46); else
    v_46 = cdr(v_46);
    if (v_46 == nil) goto v_29;
    stack[0] = basic_elt(env, 1); // intersection
    v_46 = v_48;
    {   LispObject fn = basic_elt(env, 4); // ordn
    v_46 = (*qfn1(fn))(fn, v_46);
    }
    env = stack[-1];
    v_46 = cons(stack[0], v_46);
    env = stack[-1];
    goto v_20;
v_29:
    v_46 = v_48;
    if (!car_legal(v_46)) v_46 = carerror(v_46); else
    v_46 = car(v_46);
    goto v_20;
    v_46 = nil;
v_20:
    v_47 = v_46;
    goto v_13;
v_15:
    v_46 = v_48;
    v_47 = v_46;
    goto v_13;
    v_47 = nil;
v_13:
    v_46 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 5); // mksp
    v_47 = (*qfn2(fn))(fn, v_47, v_46);
    }
    env = stack[-1];
    v_46 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_46 = cons(v_47, v_46);
    env = stack[-1];
    v_47 = ncons(v_46);
    v_46 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_47, v_46);
}



// Code for rand!-mons!-dense

static LispObject CC_randKmonsKdense(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_229, v_230, v_231;
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
    real_push(nil, nil, nil, nil, nil);
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(15);
// copy arguments values to proper place
    stack[-10] = v_4;
    stack[-11] = v_3;
    stack[-12] = v_2;
// end of prologue
    v_229 = stack[-12];
    if (!car_legal(v_229)) v_229 = carerror(v_229); else
    v_229 = car(v_229);
    stack[-13] = v_229;
    v_229 = stack[-12];
    if (!car_legal(v_229)) v_229 = cdrerror(v_229); else
    v_229 = cdr(v_229);
    stack[-12] = v_229;
    v_229 = stack[-12];
    if (v_229 == nil) goto v_15;
    else goto v_16;
v_15:
    v_230 = stack[-10];
    v_229 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_229 = static_cast<LispObject>(greaterp2(v_230, v_229));
    v_229 = v_229 ? lisp_true : nil;
    env = stack[-14];
    if (v_229 == nil) goto v_22;
    v_230 = stack[-13];
    v_229 = stack[-10];
    {   LispObject fn = basic_elt(env, 1); // mksq
    v_229 = (*qfn2(fn))(fn, v_230, v_229);
    }
    env = stack[-14];
    if (!car_legal(v_229)) v_229 = carerror(v_229); else
    v_229 = car(v_229);
    stack[-3] = v_229;
    goto v_20;
v_22:
    v_229 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-3] = v_229;
    goto v_20;
    stack[-3] = nil;
v_20:
    v_229 = stack[-10];
    v_229 = add1(v_229);
    env = stack[-14];
    stack[-4] = v_229;
    v_230 = stack[-11];
    v_229 = stack[-4];
    v_229 = difference2(v_230, v_229);
    env = stack[-14];
    v_229 = Lminusp(nil, v_229);
    env = stack[-14];
    if (v_229 == nil) goto v_44;
    v_229 = nil;
    goto v_37;
v_44:
    v_230 = stack[-13];
    v_229 = stack[-4];
    {   LispObject fn = basic_elt(env, 1); // mksq
    v_229 = (*qfn2(fn))(fn, v_230, v_229);
    }
    env = stack[-14];
    if (!car_legal(v_229)) v_229 = carerror(v_229); else
    v_229 = car(v_229);
    v_229 = ncons(v_229);
    env = stack[-14];
    stack[-1] = v_229;
    stack[-2] = v_229;
v_38:
    v_229 = stack[-4];
    v_229 = add1(v_229);
    env = stack[-14];
    stack[-4] = v_229;
    v_230 = stack[-11];
    v_229 = stack[-4];
    v_229 = difference2(v_230, v_229);
    env = stack[-14];
    v_229 = Lminusp(nil, v_229);
    env = stack[-14];
    if (v_229 == nil) goto v_60;
    v_229 = stack[-2];
    goto v_37;
v_60:
    stack[0] = stack[-1];
    v_230 = stack[-13];
    v_229 = stack[-4];
    {   LispObject fn = basic_elt(env, 1); // mksq
    v_229 = (*qfn2(fn))(fn, v_230, v_229);
    }
    env = stack[-14];
    if (!car_legal(v_229)) v_229 = carerror(v_229); else
    v_229 = car(v_229);
    v_229 = ncons(v_229);
    env = stack[-14];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_229);
    v_229 = stack[-1];
    if (!car_legal(v_229)) v_229 = cdrerror(v_229); else
    v_229 = cdr(v_229);
    stack[-1] = v_229;
    goto v_38;
v_37:
    {
        LispObject v_246 = stack[-3];
        return cons(v_246, v_229);
    }
v_16:
    v_231 = stack[-12];
    v_230 = stack[-11];
    v_229 = stack[-10];
    {   LispObject fn = basic_elt(env, 0); // rand!-mons!-dense
    stack[-9] = (*qfn3(fn))(fn, v_231, v_230, v_229);
    }
    env = stack[-14];
    v_229 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-8] = v_229;
v_87:
    v_230 = stack[-11];
    v_229 = stack[-8];
    v_229 = difference2(v_230, v_229);
    env = stack[-14];
    v_229 = Lminusp(nil, v_229);
    env = stack[-14];
    if (v_229 == nil) goto v_93;
    v_229 = nil;
    goto v_86;
v_93:
    v_230 = stack[-13];
    v_229 = stack[-8];
    {   LispObject fn = basic_elt(env, 1); // mksq
    v_229 = (*qfn2(fn))(fn, v_230, v_229);
    }
    env = stack[-14];
    if (!car_legal(v_229)) v_229 = carerror(v_229); else
    v_229 = car(v_229);
    stack[-4] = v_229;
    stack[-2] = stack[-12];
    v_230 = stack[-11];
    v_229 = stack[-8];
    stack[-1] = difference2(v_230, v_229);
    env = stack[-14];
    stack[0] = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_230 = stack[-10];
    v_229 = stack[-8];
    v_229 = difference2(v_230, v_229);
    env = stack[-14];
    {   LispObject fn = basic_elt(env, 2); // max
    v_229 = (*qfn2(fn))(fn, stack[0], v_229);
    }
    env = stack[-14];
    {   LispObject fn = basic_elt(env, 0); // rand!-mons!-dense
    v_229 = (*qfn3(fn))(fn, stack[-2], stack[-1], v_229);
    }
    env = stack[-14];
    stack[-3] = v_229;
    v_229 = stack[-3];
    if (v_229 == nil) goto v_122;
    else goto v_123;
v_122:
    v_229 = nil;
    goto v_108;
v_123:
    v_229 = stack[-3];
    if (!car_legal(v_229)) v_229 = carerror(v_229); else
    v_229 = car(v_229);
    v_230 = stack[-4];
    {   LispObject fn = basic_elt(env, 3); // multf
    v_229 = (*qfn2(fn))(fn, v_230, v_229);
    }
    env = stack[-14];
    v_229 = ncons(v_229);
    env = stack[-14];
    stack[-1] = v_229;
    stack[-2] = v_229;
v_109:
    v_229 = stack[-3];
    if (!car_legal(v_229)) v_229 = cdrerror(v_229); else
    v_229 = cdr(v_229);
    stack[-3] = v_229;
    v_229 = stack[-3];
    if (v_229 == nil) goto v_137;
    else goto v_138;
v_137:
    v_229 = stack[-2];
    goto v_108;
v_138:
    stack[0] = stack[-1];
    v_229 = stack[-3];
    if (!car_legal(v_229)) v_229 = carerror(v_229); else
    v_229 = car(v_229);
    v_230 = stack[-4];
    {   LispObject fn = basic_elt(env, 3); // multf
    v_229 = (*qfn2(fn))(fn, v_230, v_229);
    }
    env = stack[-14];
    v_229 = ncons(v_229);
    env = stack[-14];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_229);
    v_229 = stack[-1];
    if (!car_legal(v_229)) v_229 = cdrerror(v_229); else
    v_229 = cdr(v_229);
    stack[-1] = v_229;
    goto v_109;
v_108:
    stack[-7] = v_229;
    v_229 = stack[-7];
    {   LispObject fn = basic_elt(env, 4); // lastpair
    v_229 = (*qfn1(fn))(fn, v_229);
    }
    env = stack[-14];
    stack[-6] = v_229;
    v_229 = stack[-8];
    v_229 = add1(v_229);
    env = stack[-14];
    stack[-8] = v_229;
    v_229 = stack[-6];
    if (!consp(v_229)) goto v_158;
    else goto v_159;
v_158:
    goto v_87;
v_159:
v_88:
    v_230 = stack[-11];
    v_229 = stack[-8];
    v_229 = difference2(v_230, v_229);
    env = stack[-14];
    v_229 = Lminusp(nil, v_229);
    env = stack[-14];
    if (v_229 == nil) goto v_164;
    v_229 = stack[-7];
    goto v_86;
v_164:
    stack[-5] = stack[-6];
    v_230 = stack[-13];
    v_229 = stack[-8];
    {   LispObject fn = basic_elt(env, 1); // mksq
    v_229 = (*qfn2(fn))(fn, v_230, v_229);
    }
    env = stack[-14];
    if (!car_legal(v_229)) v_229 = carerror(v_229); else
    v_229 = car(v_229);
    stack[-4] = v_229;
    stack[-2] = stack[-12];
    v_230 = stack[-11];
    v_229 = stack[-8];
    stack[-1] = difference2(v_230, v_229);
    env = stack[-14];
    stack[0] = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_230 = stack[-10];
    v_229 = stack[-8];
    v_229 = difference2(v_230, v_229);
    env = stack[-14];
    {   LispObject fn = basic_elt(env, 2); // max
    v_229 = (*qfn2(fn))(fn, stack[0], v_229);
    }
    env = stack[-14];
    {   LispObject fn = basic_elt(env, 0); // rand!-mons!-dense
    v_229 = (*qfn3(fn))(fn, stack[-2], stack[-1], v_229);
    }
    env = stack[-14];
    stack[-3] = v_229;
    v_229 = stack[-3];
    if (v_229 == nil) goto v_194;
    else goto v_195;
v_194:
    v_229 = nil;
    goto v_180;
v_195:
    v_229 = stack[-3];
    if (!car_legal(v_229)) v_229 = carerror(v_229); else
    v_229 = car(v_229);
    v_230 = stack[-4];
    {   LispObject fn = basic_elt(env, 3); // multf
    v_229 = (*qfn2(fn))(fn, v_230, v_229);
    }
    env = stack[-14];
    v_229 = ncons(v_229);
    env = stack[-14];
    stack[-1] = v_229;
    stack[-2] = v_229;
v_181:
    v_229 = stack[-3];
    if (!car_legal(v_229)) v_229 = cdrerror(v_229); else
    v_229 = cdr(v_229);
    stack[-3] = v_229;
    v_229 = stack[-3];
    if (v_229 == nil) goto v_209;
    else goto v_210;
v_209:
    v_229 = stack[-2];
    goto v_180;
v_210:
    stack[0] = stack[-1];
    v_229 = stack[-3];
    if (!car_legal(v_229)) v_229 = carerror(v_229); else
    v_229 = car(v_229);
    v_230 = stack[-4];
    {   LispObject fn = basic_elt(env, 3); // multf
    v_229 = (*qfn2(fn))(fn, v_230, v_229);
    }
    env = stack[-14];
    v_229 = ncons(v_229);
    env = stack[-14];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_229);
    v_229 = stack[-1];
    if (!car_legal(v_229)) v_229 = cdrerror(v_229); else
    v_229 = cdr(v_229);
    stack[-1] = v_229;
    goto v_181;
v_180:
    if (!car_legal(stack[-5])) rplacd_fails(stack[-5]);
    setcdr(stack[-5], v_229);
    v_229 = stack[-6];
    {   LispObject fn = basic_elt(env, 4); // lastpair
    v_229 = (*qfn1(fn))(fn, v_229);
    }
    env = stack[-14];
    stack[-6] = v_229;
    v_229 = stack[-8];
    v_229 = add1(v_229);
    env = stack[-14];
    stack[-8] = v_229;
    goto v_88;
v_86:
    {
        LispObject v_247 = stack[-9];
        return Lappend_2(nil, v_247, v_229);
    }
    v_229 = nil;
    return onevalue(v_229);
}



// Code for lispcondp

static LispObject CC_lispcondp(LispObject env,
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
    v_8 = basic_elt(env, 1); // cond
        return Leqcar(nil, v_7, v_8);
}



// Code for actual_world

static LispObject CC_actual_world(LispObject env,
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
    v_12 = v_14;
    if (!car_legal(v_12)) stack[0] = carerror(v_12); else
    stack[0] = car(v_12);
    v_12 = v_13;
    v_13 = v_14;
    if (!car_legal(v_13)) v_13 = cdrerror(v_13); else
    v_13 = cdr(v_13);
    {   LispObject fn = basic_elt(env, 1); // exclude_edges
    v_12 = (*qfn2(fn))(fn, v_12, v_13);
    }
    env = stack[-1];
    {
        LispObject v_16 = stack[0];
        LispObject fn = basic_elt(env, 2); // union_edges
        return (*qfn2(fn))(fn, v_16, v_12);
    }
}



// Code for groeb!=testb

static LispObject CC_groebMtestb(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_58, v_59;
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
    v_58 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // mo_comp
    v_59 = (*qfn1(fn))(fn, v_58);
    }
    env = stack[-3];
    v_58 = stack[0];
    if (!car_legal(v_58)) v_58 = carerror(v_58); else
    v_58 = car(v_58);
    if (equal(v_59, v_58)) goto v_7;
    else goto v_8;
v_7:
    stack[-2] = stack[-1];
    v_59 = stack[0];
    v_58 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    {   LispObject fn = basic_elt(env, 2); // nth
    v_58 = (*qfn2(fn))(fn, v_59, v_58);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 3); // mo_divides!?
    v_58 = (*qfn2(fn))(fn, stack[-2], v_58);
    }
    env = stack[-3];
    if (v_58 == nil) goto v_15;
    else goto v_16;
v_15:
    v_58 = nil;
    goto v_14;
v_16:
    v_59 = stack[0];
    v_58 = static_cast<LispObject>(80)+TAG_FIXNUM; // 5
    {   LispObject fn = basic_elt(env, 2); // nth
    v_58 = (*qfn2(fn))(fn, v_59, v_58);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 4); // bas_dpoly
    v_58 = (*qfn1(fn))(fn, v_58);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 5); // dp_lmon
    v_59 = (*qfn1(fn))(fn, v_58);
    }
    env = stack[-3];
    v_58 = stack[-1];
    {   LispObject fn = basic_elt(env, 6); // mo_lcm
    stack[-2] = (*qfn2(fn))(fn, v_59, v_58);
    }
    env = stack[-3];
    v_59 = stack[0];
    v_58 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    {   LispObject fn = basic_elt(env, 2); // nth
    v_58 = (*qfn2(fn))(fn, v_59, v_58);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 7); // mo_equal!?
    v_58 = (*qfn2(fn))(fn, stack[-2], v_58);
    }
    env = stack[-3];
    if (v_58 == nil) goto v_27;
    else goto v_28;
v_27:
    v_59 = stack[0];
    v_58 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    {   LispObject fn = basic_elt(env, 2); // nth
    v_58 = (*qfn2(fn))(fn, v_59, v_58);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 4); // bas_dpoly
    v_58 = (*qfn1(fn))(fn, v_58);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 5); // dp_lmon
    v_59 = (*qfn1(fn))(fn, v_58);
    }
    env = stack[-3];
    v_58 = stack[-1];
    {   LispObject fn = basic_elt(env, 6); // mo_lcm
    stack[-1] = (*qfn2(fn))(fn, v_59, v_58);
    }
    env = stack[-3];
    v_59 = stack[0];
    v_58 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    {   LispObject fn = basic_elt(env, 2); // nth
    v_58 = (*qfn2(fn))(fn, v_59, v_58);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 7); // mo_equal!?
    v_58 = (*qfn2(fn))(fn, stack[-1], v_58);
    }
    v_58 = (v_58 == nil ? lisp_true : nil);
    goto v_26;
v_28:
    v_58 = nil;
    goto v_26;
    v_58 = nil;
v_26:
    goto v_14;
    v_58 = nil;
v_14:
    goto v_6;
v_8:
    v_58 = nil;
    goto v_6;
    v_58 = nil;
v_6:
    return onevalue(v_58);
}



// Code for nrootnn

static LispObject CC_nrootnn(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_183, v_184;
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
    stack[-6] = v_3;
    stack[-7] = v_2;
// end of prologue
    stack[-5] = nil;
    v_183 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[0] = v_183;
    v_183 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-2] = v_183;
    v_184 = stack[-7];
    v_183 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_183 = static_cast<LispObject>(lessp2(v_184, v_183));
    v_183 = v_183 ? lisp_true : nil;
    env = stack[-9];
    if (v_183 == nil) goto v_26;
    v_183 = stack[-7];
    v_183 = negate(v_183);
    env = stack[-9];
    stack[-7] = v_183;
    v_183 = stack[-6];
    v_183 = Levenp(nil, v_183);
    env = stack[-9];
    if (v_183 == nil) goto v_35;
    v_183 = lisp_true;
    stack[-5] = v_183;
    goto v_33;
v_35:
    v_183 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    stack[0] = v_183;
    goto v_33;
v_33:
    goto v_24;
v_26:
v_24:
    v_183 = qvalue(basic_elt(env, 1)); // !*primelist!*
    stack[-8] = v_183;
v_15:
    v_183 = stack[-8];
    if (!car_legal(v_183)) v_183 = carerror(v_183); else
    v_183 = car(v_183);
    stack[-1] = v_183;
    v_183 = stack[-8];
    if (!car_legal(v_183)) v_183 = cdrerror(v_183); else
    v_183 = cdr(v_183);
    stack[-8] = v_183;
    v_183 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-3] = v_183;
v_50:
    v_184 = stack[-7];
    v_183 = stack[-1];
    v_183 = Ldivide_2(nil, v_184, v_183);
    env = stack[-9];
    stack[-4] = v_183;
    if (!car_legal(v_183)) v_184 = cdrerror(v_183); else
    v_184 = cdr(v_183);
    v_183 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_184 == v_183) goto v_54;
    goto v_49;
v_54:
    v_183 = stack[-4];
    if (!car_legal(v_183)) v_183 = carerror(v_183); else
    v_183 = car(v_183);
    stack[-7] = v_183;
    v_183 = stack[-3];
    v_183 = static_cast<LispObject>(static_cast<std::intptr_t>(v_183) + 0x10);
    stack[-3] = v_183;
    goto v_50;
v_49:
    v_184 = stack[-3];
    v_183 = stack[-6];
    if ((static_cast<std::intptr_t>(v_184) < static_cast<std::intptr_t>(v_183))) goto v_68;
    v_184 = stack[-3];
    v_183 = stack[-6];
    v_183 = Ldivide_2(nil, v_184, v_183);
    env = stack[-9];
    stack[-3] = v_183;
    v_184 = stack[-1];
    v_183 = stack[-3];
    if (!car_legal(v_183)) v_183 = carerror(v_183); else
    v_183 = car(v_183);
    v_183 = Lexpt(nil, v_184, v_183);
    env = stack[-9];
    v_183 = times2(stack[0], v_183);
    env = stack[-9];
    stack[0] = v_183;
    v_183 = stack[-3];
    if (!car_legal(v_183)) v_183 = cdrerror(v_183); else
    v_183 = cdr(v_183);
    stack[-3] = v_183;
    goto v_66;
v_68:
v_66:
v_84:
    v_184 = stack[-3];
    v_183 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if ((static_cast<std::intptr_t>(v_184) > static_cast<std::intptr_t>(v_183))) goto v_88;
    goto v_83;
v_88:
    v_184 = stack[-2];
    v_183 = stack[-1];
    v_183 = times2(v_184, v_183);
    env = stack[-9];
    stack[-2] = v_183;
    v_183 = stack[-3];
    v_183 = static_cast<LispObject>(static_cast<std::intptr_t>(v_183) - 0x10);
    stack[-3] = v_183;
    goto v_84;
v_83:
    v_183 = stack[-4];
    if (!car_legal(v_183)) v_184 = carerror(v_183); else
    v_184 = car(v_183);
    v_183 = stack[-1];
    v_183 = static_cast<LispObject>(lessp2(v_184, v_183));
    v_183 = v_183 ? lisp_true : nil;
    env = stack[-9];
    if (v_183 == nil) goto v_100;
    v_184 = stack[-7];
    v_183 = stack[-2];
    v_183 = times2(v_184, v_183);
    env = stack[-9];
    stack[-2] = v_183;
    goto v_16;
v_100:
    v_183 = stack[-8];
    if (v_183 == nil) goto v_111;
    goto v_15;
v_111:
    v_184 = static_cast<LispObject>(160)+TAG_FIXNUM; // 10
    v_183 = static_cast<LispObject>(320)+TAG_FIXNUM; // 20
    v_184 = Lexpt(nil, v_184, v_183);
    env = stack[-9];
    v_183 = stack[-7];
    v_183 = static_cast<LispObject>(greaterp2(v_184, v_183));
    v_183 = v_183 ? lisp_true : nil;
    env = stack[-9];
    if (v_183 == nil) goto v_116;
    v_184 = stack[-7];
    v_183 = nil;
    {   LispObject fn = basic_elt(env, 2); // mcfactor!*
    v_183 = (*qfn2(fn))(fn, v_184, v_183);
    }
    env = stack[-9];
    stack[-3] = v_183;
    v_183 = stack[-3];
    stack[-4] = v_183;
v_128:
    v_183 = stack[-4];
    if (v_183 == nil) goto v_132;
    else goto v_133;
v_132:
    goto v_127;
v_133:
    v_183 = stack[-4];
    if (!car_legal(v_183)) v_183 = carerror(v_183); else
    v_183 = car(v_183);
    stack[-1] = v_183;
    v_183 = stack[-1];
    if (!car_legal(v_183)) v_184 = cdrerror(v_183); else
    v_184 = cdr(v_183);
    v_183 = stack[-6];
    v_183 = Ldivide_2(nil, v_184, v_183);
    env = stack[-9];
    stack[-3] = v_183;
    v_183 = stack[-1];
    if (!car_legal(v_183)) v_184 = carerror(v_183); else
    v_184 = car(v_183);
    v_183 = stack[-3];
    if (!car_legal(v_183)) v_183 = carerror(v_183); else
    v_183 = car(v_183);
    v_184 = Lexpt(nil, v_184, v_183);
    env = stack[-9];
    v_183 = stack[0];
    v_183 = times2(v_184, v_183);
    env = stack[-9];
    stack[0] = v_183;
    v_183 = stack[-1];
    if (!car_legal(v_183)) v_184 = carerror(v_183); else
    v_184 = car(v_183);
    v_183 = stack[-3];
    if (!car_legal(v_183)) v_183 = cdrerror(v_183); else
    v_183 = cdr(v_183);
    v_184 = Lexpt(nil, v_184, v_183);
    env = stack[-9];
    v_183 = stack[-2];
    v_183 = times2(v_184, v_183);
    env = stack[-9];
    stack[-2] = v_183;
    v_183 = stack[-4];
    if (!car_legal(v_183)) v_183 = cdrerror(v_183); else
    v_183 = cdr(v_183);
    stack[-4] = v_183;
    goto v_128;
v_127:
    goto v_114;
v_116:
    v_184 = stack[-7];
    v_183 = stack[-6];
    {   LispObject fn = basic_elt(env, 3); // iroot
    v_183 = (*qfn2(fn))(fn, v_184, v_183);
    }
    env = stack[-9];
    stack[-3] = v_183;
    if (v_183 == nil) goto v_161;
    v_184 = stack[0];
    v_183 = stack[-3];
    v_183 = times2(v_184, v_183);
    env = stack[-9];
    stack[0] = v_183;
    goto v_114;
v_161:
    v_184 = stack[-7];
    v_183 = stack[-2];
    v_183 = times2(v_184, v_183);
    env = stack[-9];
    stack[-2] = v_183;
    goto v_114;
v_114:
v_16:
    v_183 = stack[-5];
    if (v_183 == nil) goto v_176;
    v_183 = stack[-2];
    v_183 = negate(v_183);
    stack[-2] = v_183;
    goto v_174;
v_176:
v_174:
    v_184 = stack[0];
    v_183 = stack[-2];
    return cons(v_184, v_183);
    return onevalue(v_183);
}



// Code for ofsf_qesubq

static LispObject CC_ofsf_qesubq(LispObject env,
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
    stack[-1] = v_14;
    stack[0] = basic_elt(env, 1); // ofsf_qesubqat
    v_12 = list2(v_13, v_12);
    env = stack[-2];
    {
        LispObject v_17 = stack[-1];
        LispObject v_18 = stack[0];
        LispObject fn = basic_elt(env, 2); // cl_apply2ats1
        return (*qfn3(fn))(fn, v_17, v_18, v_12);
    }
}



// Code for makecoeffpairs1

static LispObject CC_makecoeffpairs1(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_191, v_192;
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
    real_push(nil, nil, nil, nil, nil);
    stack_popper stack_popper_var(16);
// copy arguments values to proper place
    stack[-10] = v_5;
    stack[-11] = v_4;
    stack[-12] = v_3;
    stack[-13] = v_2;
// end of prologue
    v_191 = stack[-12];
    if (v_191 == nil) goto v_9;
    else goto v_10;
v_9:
    v_191 = basic_elt(env, 1); // ((nil))
    goto v_8;
v_10:
    v_191 = stack[-13];
    if (!car_legal(v_191)) stack[-2] = cdrerror(v_191); else
    stack[-2] = cdr(v_191);
    v_191 = stack[-12];
    if (!car_legal(v_191)) stack[-1] = cdrerror(v_191); else
    stack[-1] = cdr(v_191);
    v_191 = stack[-11];
    if (!car_legal(v_191)) stack[0] = cdrerror(v_191); else
    stack[0] = cdr(v_191);
    v_191 = stack[-10];
    if (!car_legal(v_191)) v_191 = cdrerror(v_191); else
    v_191 = cdr(v_191);
    v_191 = ncons(v_191);
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 0); // makecoeffpairs1
    v_191 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_191);
    }
    env = stack[-15];
    stack[-14] = v_191;
v_20:
    v_191 = stack[-14];
    if (v_191 == nil) goto v_34;
    else goto v_35;
v_34:
    v_191 = nil;
    goto v_19;
v_35:
    v_191 = stack[-14];
    if (!car_legal(v_191)) v_191 = carerror(v_191); else
    v_191 = car(v_191);
    stack[-6] = v_191;
    v_191 = stack[-13];
    if (!car_legal(v_191)) stack[-2] = carerror(v_191); else
    stack[-2] = car(v_191);
    v_191 = stack[-12];
    if (!car_legal(v_191)) stack[-1] = carerror(v_191); else
    stack[-1] = car(v_191);
    v_191 = stack[-11];
    if (!car_legal(v_191)) stack[0] = carerror(v_191); else
    stack[0] = car(v_191);
    v_191 = stack[-10];
    if (!car_legal(v_191)) v_191 = carerror(v_191); else
    v_191 = car(v_191);
    {   LispObject fn = basic_elt(env, 2); // tayexp!-minus
    v_191 = (*qfn1(fn))(fn, v_191);
    }
    env = stack[-15];
    v_191 = ncons(v_191);
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 3); // makecoeffpairshom
    v_191 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_191);
    }
    env = stack[-15];
    stack[-5] = v_191;
    v_191 = stack[-5];
    if (v_191 == nil) goto v_60;
    else goto v_61;
v_60:
    v_191 = nil;
    goto v_45;
v_61:
    v_191 = stack[-5];
    if (!car_legal(v_191)) v_191 = carerror(v_191); else
    v_191 = car(v_191);
    v_192 = v_191;
    v_191 = v_192;
    if (!car_legal(v_191)) stack[-1] = carerror(v_191); else
    stack[-1] = car(v_191);
    v_191 = stack[-6];
    if (!car_legal(v_191)) stack[0] = carerror(v_191); else
    stack[0] = car(v_191);
    v_191 = v_192;
    if (!car_legal(v_191)) v_192 = cdrerror(v_191); else
    v_192 = cdr(v_191);
    v_191 = stack[-6];
    if (!car_legal(v_191)) v_191 = cdrerror(v_191); else
    v_191 = cdr(v_191);
    v_191 = cons(v_192, v_191);
    env = stack[-15];
    v_191 = acons(stack[-1], stack[0], v_191);
    env = stack[-15];
    v_191 = ncons(v_191);
    env = stack[-15];
    stack[-3] = v_191;
    stack[-4] = v_191;
v_46:
    v_191 = stack[-5];
    if (!car_legal(v_191)) v_191 = cdrerror(v_191); else
    v_191 = cdr(v_191);
    stack[-5] = v_191;
    v_191 = stack[-5];
    if (v_191 == nil) goto v_82;
    else goto v_83;
v_82:
    v_191 = stack[-4];
    goto v_45;
v_83:
    stack[-2] = stack[-3];
    v_191 = stack[-5];
    if (!car_legal(v_191)) v_191 = carerror(v_191); else
    v_191 = car(v_191);
    v_192 = v_191;
    v_191 = v_192;
    if (!car_legal(v_191)) stack[-1] = carerror(v_191); else
    stack[-1] = car(v_191);
    v_191 = stack[-6];
    if (!car_legal(v_191)) stack[0] = carerror(v_191); else
    stack[0] = car(v_191);
    v_191 = v_192;
    if (!car_legal(v_191)) v_192 = cdrerror(v_191); else
    v_192 = cdr(v_191);
    v_191 = stack[-6];
    if (!car_legal(v_191)) v_191 = cdrerror(v_191); else
    v_191 = cdr(v_191);
    v_191 = cons(v_192, v_191);
    env = stack[-15];
    v_191 = acons(stack[-1], stack[0], v_191);
    env = stack[-15];
    v_191 = ncons(v_191);
    env = stack[-15];
    if (!car_legal(stack[-2])) rplacd_fails(stack[-2]);
    setcdr(stack[-2], v_191);
    v_191 = stack[-3];
    if (!car_legal(v_191)) v_191 = cdrerror(v_191); else
    v_191 = cdr(v_191);
    stack[-3] = v_191;
    goto v_46;
v_45:
    stack[-9] = v_191;
    v_191 = stack[-9];
    {   LispObject fn = basic_elt(env, 4); // lastpair
    v_191 = (*qfn1(fn))(fn, v_191);
    }
    env = stack[-15];
    stack[-8] = v_191;
    v_191 = stack[-14];
    if (!car_legal(v_191)) v_191 = cdrerror(v_191); else
    v_191 = cdr(v_191);
    stack[-14] = v_191;
    v_191 = stack[-8];
    if (!consp(v_191)) goto v_110;
    else goto v_111;
v_110:
    goto v_20;
v_111:
v_21:
    v_191 = stack[-14];
    if (v_191 == nil) goto v_115;
    else goto v_116;
v_115:
    v_191 = stack[-9];
    goto v_19;
v_116:
    stack[-7] = stack[-8];
    v_191 = stack[-14];
    if (!car_legal(v_191)) v_191 = carerror(v_191); else
    v_191 = car(v_191);
    stack[-6] = v_191;
    v_191 = stack[-13];
    if (!car_legal(v_191)) stack[-2] = carerror(v_191); else
    stack[-2] = car(v_191);
    v_191 = stack[-12];
    if (!car_legal(v_191)) stack[-1] = carerror(v_191); else
    stack[-1] = car(v_191);
    v_191 = stack[-11];
    if (!car_legal(v_191)) stack[0] = carerror(v_191); else
    stack[0] = car(v_191);
    v_191 = stack[-10];
    if (!car_legal(v_191)) v_191 = carerror(v_191); else
    v_191 = car(v_191);
    {   LispObject fn = basic_elt(env, 2); // tayexp!-minus
    v_191 = (*qfn1(fn))(fn, v_191);
    }
    env = stack[-15];
    v_191 = ncons(v_191);
    env = stack[-15];
    {   LispObject fn = basic_elt(env, 3); // makecoeffpairshom
    v_191 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_191);
    }
    env = stack[-15];
    stack[-5] = v_191;
    v_191 = stack[-5];
    if (v_191 == nil) goto v_142;
    else goto v_143;
v_142:
    v_191 = nil;
    goto v_127;
v_143:
    v_191 = stack[-5];
    if (!car_legal(v_191)) v_191 = carerror(v_191); else
    v_191 = car(v_191);
    v_192 = v_191;
    v_191 = v_192;
    if (!car_legal(v_191)) stack[-1] = carerror(v_191); else
    stack[-1] = car(v_191);
    v_191 = stack[-6];
    if (!car_legal(v_191)) stack[0] = carerror(v_191); else
    stack[0] = car(v_191);
    v_191 = v_192;
    if (!car_legal(v_191)) v_192 = cdrerror(v_191); else
    v_192 = cdr(v_191);
    v_191 = stack[-6];
    if (!car_legal(v_191)) v_191 = cdrerror(v_191); else
    v_191 = cdr(v_191);
    v_191 = cons(v_192, v_191);
    env = stack[-15];
    v_191 = acons(stack[-1], stack[0], v_191);
    env = stack[-15];
    v_191 = ncons(v_191);
    env = stack[-15];
    stack[-3] = v_191;
    stack[-4] = v_191;
v_128:
    v_191 = stack[-5];
    if (!car_legal(v_191)) v_191 = cdrerror(v_191); else
    v_191 = cdr(v_191);
    stack[-5] = v_191;
    v_191 = stack[-5];
    if (v_191 == nil) goto v_164;
    else goto v_165;
v_164:
    v_191 = stack[-4];
    goto v_127;
v_165:
    stack[-2] = stack[-3];
    v_191 = stack[-5];
    if (!car_legal(v_191)) v_191 = carerror(v_191); else
    v_191 = car(v_191);
    v_192 = v_191;
    v_191 = v_192;
    if (!car_legal(v_191)) stack[-1] = carerror(v_191); else
    stack[-1] = car(v_191);
    v_191 = stack[-6];
    if (!car_legal(v_191)) stack[0] = carerror(v_191); else
    stack[0] = car(v_191);
    v_191 = v_192;
    if (!car_legal(v_191)) v_192 = cdrerror(v_191); else
    v_192 = cdr(v_191);
    v_191 = stack[-6];
    if (!car_legal(v_191)) v_191 = cdrerror(v_191); else
    v_191 = cdr(v_191);
    v_191 = cons(v_192, v_191);
    env = stack[-15];
    v_191 = acons(stack[-1], stack[0], v_191);
    env = stack[-15];
    v_191 = ncons(v_191);
    env = stack[-15];
    if (!car_legal(stack[-2])) rplacd_fails(stack[-2]);
    setcdr(stack[-2], v_191);
    v_191 = stack[-3];
    if (!car_legal(v_191)) v_191 = cdrerror(v_191); else
    v_191 = cdr(v_191);
    stack[-3] = v_191;
    goto v_128;
v_127:
    if (!car_legal(stack[-7])) rplacd_fails(stack[-7]);
    setcdr(stack[-7], v_191);
    v_191 = stack[-8];
    {   LispObject fn = basic_elt(env, 4); // lastpair
    v_191 = (*qfn1(fn))(fn, v_191);
    }
    env = stack[-15];
    stack[-8] = v_191;
    v_191 = stack[-14];
    if (!car_legal(v_191)) v_191 = cdrerror(v_191); else
    v_191 = cdr(v_191);
    stack[-14] = v_191;
    goto v_21;
v_19:
    goto v_8;
    v_191 = nil;
v_8:
    return onevalue(v_191);
}



// Code for ev_lcm

static LispObject CC_ev_lcm(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_41 = nil;
v_10:
    v_39 = stack[-1];
    if (v_39 == nil) goto v_13;
    else goto v_14;
v_13:
    goto v_9;
v_14:
    v_39 = stack[-1];
    if (!car_legal(v_39)) v_40 = carerror(v_39); else
    v_40 = car(v_39);
    v_39 = stack[0];
    if (!car_legal(v_39)) v_39 = carerror(v_39); else
    v_39 = car(v_39);
    if ((static_cast<std::intptr_t>(v_40) > static_cast<std::intptr_t>(v_39))) goto v_20;
    else goto v_21;
v_20:
    v_39 = stack[-1];
    if (!car_legal(v_39)) v_39 = carerror(v_39); else
    v_39 = car(v_39);
    goto v_19;
v_21:
    v_39 = stack[0];
    if (!car_legal(v_39)) v_39 = carerror(v_39); else
    v_39 = car(v_39);
    goto v_19;
    v_39 = nil;
v_19:
    v_40 = v_41;
    v_39 = cons(v_39, v_40);
    env = stack[-2];
    v_41 = v_39;
    v_39 = stack[-1];
    if (!car_legal(v_39)) v_39 = cdrerror(v_39); else
    v_39 = cdr(v_39);
    stack[-1] = v_39;
    v_39 = stack[0];
    if (!car_legal(v_39)) v_39 = cdrerror(v_39); else
    v_39 = cdr(v_39);
    stack[0] = v_39;
    goto v_10;
v_9:
    v_39 = v_41;
        return Lnreverse(nil, v_39);
    return onevalue(v_39);
}



// Code for cd_ordatp

static LispObject CC_cd_ordatp(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_50, v_51, v_52, v_53;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_52 = v_3;
    v_53 = v_2;
// end of prologue
    v_50 = v_53;
    if (!car_legal(v_50)) v_51 = carerror(v_50); else
    v_51 = car(v_50);
    v_50 = basic_elt(env, 1); // neq
    if (v_51 == v_50) goto v_11;
    else goto v_12;
v_11:
    v_50 = v_52;
    if (!car_legal(v_50)) v_51 = carerror(v_50); else
    v_51 = car(v_50);
    v_50 = basic_elt(env, 2); // equal
    v_50 = (v_51 == v_50 ? lisp_true : nil);
    goto v_10;
v_12:
    v_50 = nil;
    goto v_10;
    v_50 = nil;
v_10:
    if (v_50 == nil) goto v_8;
    v_50 = lisp_true;
    goto v_6;
v_8:
    v_50 = v_53;
    if (!car_legal(v_50)) v_51 = carerror(v_50); else
    v_51 = car(v_50);
    v_50 = basic_elt(env, 2); // equal
    if (v_51 == v_50) goto v_28;
    else goto v_29;
v_28:
    v_50 = v_52;
    if (!car_legal(v_50)) v_51 = carerror(v_50); else
    v_51 = car(v_50);
    v_50 = basic_elt(env, 1); // neq
    v_50 = (v_51 == v_50 ? lisp_true : nil);
    goto v_27;
v_29:
    v_50 = nil;
    goto v_27;
    v_50 = nil;
v_27:
    if (v_50 == nil) goto v_25;
    v_50 = nil;
    goto v_6;
v_25:
    v_50 = v_53;
    if (!car_legal(v_50)) v_50 = cdrerror(v_50); else
    v_50 = cdr(v_50);
    if (!car_legal(v_50)) v_50 = carerror(v_50); else
    v_50 = car(v_50);
    v_51 = v_52;
    if (!car_legal(v_51)) v_51 = cdrerror(v_51); else
    v_51 = cdr(v_51);
    if (!car_legal(v_51)) v_51 = carerror(v_51); else
    v_51 = car(v_51);
    {
        LispObject fn = basic_elt(env, 3); // ordp
        return (*qfn2(fn))(fn, v_50, v_51);
    }
    v_50 = nil;
v_6:
    return onevalue(v_50);
}



// Code for unary

static LispObject CC_unary(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    v_26 = basic_elt(env, 1); // "<apply>"
    {   LispObject fn = basic_elt(env, 6); // printout
    v_26 = (*qfn1(fn))(fn, v_26);
    }
    env = stack[-2];
    v_26 = basic_elt(env, 2); // "<"
    v_26 = Lprinc(nil, v_26);
    env = stack[-2];
    v_26 = stack[0];
    v_26 = Lprinc(nil, v_26);
    env = stack[-2];
    v_26 = basic_elt(env, 3); // "/>"
    v_26 = Lprinc(nil, v_26);
    env = stack[-2];
    v_27 = qvalue(basic_elt(env, 4)); // indent
    v_26 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_26 = plus2(v_27, v_26);
    env = stack[-2];
    setvalue(basic_elt(env, 4), v_26); // indent
    v_26 = stack[-1];
    if (!car_legal(v_26)) v_26 = carerror(v_26); else
    v_26 = car(v_26);
    {   LispObject fn = basic_elt(env, 7); // expression
    v_26 = (*qfn1(fn))(fn, v_26);
    }
    env = stack[-2];
    v_27 = qvalue(basic_elt(env, 4)); // indent
    v_26 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_26 = difference2(v_27, v_26);
    env = stack[-2];
    setvalue(basic_elt(env, 4), v_26); // indent
    v_26 = basic_elt(env, 5); // "</apply>"
    {   LispObject fn = basic_elt(env, 6); // printout
    v_26 = (*qfn1(fn))(fn, v_26);
    }
    v_26 = nil;
    return onevalue(v_26);
}



// Code for tidysqrtf

static LispObject CC_tidysqrtf(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_115, v_116, v_117;
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
    v_115 = stack[-1];
    if (!consp(v_115)) goto v_10;
    else goto v_11;
v_10:
    v_115 = lisp_true;
    goto v_9;
v_11:
    v_115 = stack[-1];
    if (!car_legal(v_115)) v_115 = carerror(v_115); else
    v_115 = car(v_115);
    v_115 = (consp(v_115) ? nil : lisp_true);
    goto v_9;
    v_115 = nil;
v_9:
    if (v_115 == nil) goto v_7;
    v_116 = stack[-1];
    v_115 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_116, v_115);
v_7:
    v_115 = stack[-1];
    if (!car_legal(v_115)) v_115 = carerror(v_115); else
    v_115 = car(v_115);
    if (!car_legal(v_115)) v_115 = carerror(v_115); else
    v_115 = car(v_115);
    stack[-2] = v_115;
    v_115 = stack[-2];
    if (!car_legal(v_115)) v_116 = carerror(v_115); else
    v_116 = car(v_115);
    v_115 = basic_elt(env, 1); // i
    if (v_116 == v_115) goto v_33;
    else goto v_34;
v_33:
    v_116 = basic_elt(env, 2); // (sqrt -1)
    v_115 = stack[-2];
    if (!car_legal(v_115)) v_115 = cdrerror(v_115); else
    v_115 = cdr(v_115);
    {   LispObject fn = basic_elt(env, 4); // mksp
    v_115 = (*qfn2(fn))(fn, v_116, v_115);
    }
    env = stack[-3];
    stack[-2] = v_115;
    goto v_32;
v_34:
v_32:
    v_115 = stack[-2];
    if (!car_legal(v_115)) v_116 = carerror(v_115); else
    v_116 = car(v_115);
    v_115 = basic_elt(env, 3); // sqrt
    if (!consp(v_116)) goto v_49;
    v_116 = car(v_116);
    if (v_116 == v_115) goto v_48;
    else goto v_49;
v_48:
    v_115 = stack[-2];
    if (!car_legal(v_115)) v_115 = cdrerror(v_115); else
    v_115 = cdr(v_115);
    v_115 = Lonep(nil, v_115);
    env = stack[-3];
    v_115 = (v_115 == nil ? lisp_true : nil);
    goto v_47;
v_49:
    v_115 = nil;
    goto v_47;
    v_115 = nil;
v_47:
    if (v_115 == nil) goto v_45;
    v_115 = stack[-2];
    if (!car_legal(v_115)) v_116 = cdrerror(v_115); else
    v_116 = cdr(v_115);
    v_115 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_115 = Ldivide_2(nil, v_116, v_115);
    env = stack[-3];
    stack[0] = v_115;
    v_115 = stack[-2];
    if (!car_legal(v_115)) v_115 = carerror(v_115); else
    v_115 = car(v_115);
    if (!car_legal(v_115)) v_115 = cdrerror(v_115); else
    v_115 = cdr(v_115);
    if (!car_legal(v_115)) v_115 = carerror(v_115); else
    v_115 = car(v_115);
    {   LispObject fn = basic_elt(env, 5); // simp
    v_116 = (*qfn1(fn))(fn, v_115);
    }
    env = stack[-3];
    v_115 = stack[0];
    if (!car_legal(v_115)) v_115 = carerror(v_115); else
    v_115 = car(v_115);
    {   LispObject fn = basic_elt(env, 6); // exptsq
    v_115 = (*qfn2(fn))(fn, v_116, v_115);
    }
    env = stack[-3];
    v_117 = v_115;
    v_115 = stack[0];
    if (!car_legal(v_115)) v_116 = cdrerror(v_115); else
    v_116 = cdr(v_115);
    v_115 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_116 == v_115) goto v_79;
    stack[0] = v_117;
    v_115 = stack[-2];
    if (!car_legal(v_115)) v_116 = carerror(v_115); else
    v_116 = car(v_115);
    v_115 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 4); // mksp
    v_116 = (*qfn2(fn))(fn, v_116, v_115);
    }
    env = stack[-3];
    v_115 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_117 = cons(v_116, v_115);
    env = stack[-3];
    v_116 = nil;
    v_115 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_115 = acons(v_117, v_116, v_115);
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 7); // multsq
    v_115 = (*qfn2(fn))(fn, stack[0], v_115);
    }
    env = stack[-3];
    v_117 = v_115;
    goto v_77;
v_79:
v_77:
    v_115 = v_117;
    {   LispObject fn = basic_elt(env, 8); // tidysqrt
    v_115 = (*qfn1(fn))(fn, v_115);
    }
    env = stack[-3];
    v_117 = v_115;
    goto v_43;
v_45:
    v_116 = stack[-2];
    v_115 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_117 = cons(v_116, v_115);
    env = stack[-3];
    v_116 = nil;
    v_115 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_115 = acons(v_117, v_116, v_115);
    env = stack[-3];
    v_117 = v_115;
    goto v_43;
v_43:
    stack[0] = v_117;
    v_115 = stack[-1];
    if (!car_legal(v_115)) v_115 = carerror(v_115); else
    v_115 = car(v_115);
    if (!car_legal(v_115)) v_115 = cdrerror(v_115); else
    v_115 = cdr(v_115);
    {   LispObject fn = basic_elt(env, 0); // tidysqrtf
    v_115 = (*qfn1(fn))(fn, v_115);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 7); // multsq
    v_115 = (*qfn2(fn))(fn, stack[0], v_115);
    }
    env = stack[-3];
    stack[-2] = v_115;
    stack[0] = stack[-2];
    v_115 = stack[-1];
    if (!car_legal(v_115)) v_115 = cdrerror(v_115); else
    v_115 = cdr(v_115);
    {   LispObject fn = basic_elt(env, 0); // tidysqrtf
    v_115 = (*qfn1(fn))(fn, v_115);
    }
    env = stack[-3];
    {
        LispObject v_121 = stack[0];
        LispObject fn = basic_elt(env, 9); // addsq
        return (*qfn2(fn))(fn, v_121, v_115);
    }
    goto v_5;
    v_115 = nil;
v_5:
    return onevalue(v_115);
}



// Code for dm!-quotient

static LispObject CC_dmKquotient(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_3;
    v_27 = v_2;
// end of prologue
    v_26 = nil;
    setvalue(basic_elt(env, 1), v_26); // !*noequiv
    v_26 = v_27;
    {   LispObject fn = basic_elt(env, 2); // dm!-mkfloat
    stack[-1] = (*qfn1(fn))(fn, v_26);
    }
    env = stack[-2];
    v_26 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // dm!-mkfloat
    v_26 = (*qfn1(fn))(fn, v_26);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // !:quotient
    v_26 = (*qfn2(fn))(fn, stack[-1], v_26);
    }
    v_27 = v_26;
    v_26 = v_27;
    if (v_26 == nil) goto v_18;
    else goto v_19;
v_18:
    v_26 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_17;
v_19:
    v_26 = v_27;
    goto v_17;
    v_26 = nil;
v_17:
    return onevalue(v_26);
}



// Code for rm_neg_pow

static LispObject CC_rm_neg_pow(LispObject env,
                         LispObject v_2)
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
    v_72 = stack[-1];
    if (!consp(v_72)) goto v_10;
    else goto v_11;
v_10:
    v_72 = lisp_true;
    goto v_9;
v_11:
    v_72 = stack[-1];
    if (!car_legal(v_72)) v_72 = carerror(v_72); else
    v_72 = car(v_72);
    v_72 = (consp(v_72) ? nil : lisp_true);
    goto v_9;
    v_72 = nil;
v_9:
    if (v_72 == nil) goto v_7;
    v_73 = stack[-1];
    v_72 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_73, v_72);
v_7:
    v_72 = stack[-1];
    if (!car_legal(v_72)) v_72 = carerror(v_72); else
    v_72 = car(v_72);
    if (!car_legal(v_72)) v_72 = carerror(v_72); else
    v_72 = car(v_72);
    if (!car_legal(v_72)) v_72 = cdrerror(v_72); else
    v_72 = cdr(v_72);
    v_72 = Lminusp(nil, v_72);
    env = stack[-3];
    if (v_72 == nil) goto v_23;
    stack[-2] = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_72 = stack[-1];
    if (!car_legal(v_72)) v_72 = carerror(v_72); else
    v_72 = car(v_72);
    if (!car_legal(v_72)) v_72 = carerror(v_72); else
    v_72 = car(v_72);
    if (!car_legal(v_72)) stack[0] = carerror(v_72); else
    stack[0] = car(v_72);
    v_72 = stack[-1];
    if (!car_legal(v_72)) v_72 = carerror(v_72); else
    v_72 = car(v_72);
    if (!car_legal(v_72)) v_72 = carerror(v_72); else
    v_72 = car(v_72);
    if (!car_legal(v_72)) v_72 = cdrerror(v_72); else
    v_72 = cdr(v_72);
    v_72 = negate(v_72);
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 1); // to
    v_73 = (*qfn2(fn))(fn, stack[0], v_72);
    }
    env = stack[-3];
    v_72 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_73 = cons(v_73, v_72);
    env = stack[-3];
    v_72 = nil;
    stack[0] = list2star(stack[-2], v_73, v_72);
    env = stack[-3];
    v_72 = stack[-1];
    if (!car_legal(v_72)) v_72 = carerror(v_72); else
    v_72 = car(v_72);
    if (!car_legal(v_72)) v_72 = cdrerror(v_72); else
    v_72 = cdr(v_72);
    {   LispObject fn = basic_elt(env, 0); // rm_neg_pow
    v_72 = (*qfn1(fn))(fn, v_72);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 2); // multsq
    stack[0] = (*qfn2(fn))(fn, stack[0], v_72);
    }
    env = stack[-3];
    v_72 = stack[-1];
    if (!car_legal(v_72)) v_72 = cdrerror(v_72); else
    v_72 = cdr(v_72);
    {   LispObject fn = basic_elt(env, 0); // rm_neg_pow
    v_72 = (*qfn1(fn))(fn, v_72);
    }
    env = stack[-3];
    {
        LispObject v_77 = stack[0];
        LispObject fn = basic_elt(env, 3); // addsq
        return (*qfn2(fn))(fn, v_77, v_72);
    }
v_23:
    v_72 = stack[-1];
    if (!car_legal(v_72)) v_72 = carerror(v_72); else
    v_72 = car(v_72);
    if (!car_legal(v_72)) v_73 = carerror(v_72); else
    v_73 = car(v_72);
    v_72 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_72 = cons(v_73, v_72);
    env = stack[-3];
    v_73 = ncons(v_72);
    env = stack[-3];
    v_72 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[0] = cons(v_73, v_72);
    env = stack[-3];
    v_72 = stack[-1];
    if (!car_legal(v_72)) v_72 = carerror(v_72); else
    v_72 = car(v_72);
    if (!car_legal(v_72)) v_72 = cdrerror(v_72); else
    v_72 = cdr(v_72);
    {   LispObject fn = basic_elt(env, 0); // rm_neg_pow
    v_72 = (*qfn1(fn))(fn, v_72);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 2); // multsq
    stack[0] = (*qfn2(fn))(fn, stack[0], v_72);
    }
    env = stack[-3];
    v_72 = stack[-1];
    if (!car_legal(v_72)) v_72 = cdrerror(v_72); else
    v_72 = cdr(v_72);
    {   LispObject fn = basic_elt(env, 0); // rm_neg_pow
    v_72 = (*qfn1(fn))(fn, v_72);
    }
    env = stack[-3];
    {
        LispObject v_78 = stack[0];
        LispObject fn = basic_elt(env, 3); // addsq
        return (*qfn2(fn))(fn, v_78, v_72);
    }
    v_72 = nil;
    return onevalue(v_72);
}



// Code for mkuniquewedge1

static LispObject CC_mkuniquewedge1(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_35 = stack[0];
    if (!car_legal(v_35)) v_35 = cdrerror(v_35); else
    v_35 = cdr(v_35);
    if (v_35 == nil) goto v_6;
    else goto v_7;
v_6:
    v_35 = stack[0];
    if (!car_legal(v_35)) v_35 = carerror(v_35); else
    v_35 = car(v_35);
    {
        LispObject fn = basic_elt(env, 3); // mkupf
        return (*qfn1(fn))(fn, v_35);
    }
v_7:
    v_35 = qvalue(basic_elt(env, 1)); // wedgemtch!*
    if (v_35 == nil) goto v_21;
    v_35 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // wedgemtch
    v_35 = (*qfn1(fn))(fn, v_35);
    }
    env = stack[-1];
    v_36 = v_35;
    if (v_35 == nil) goto v_21;
    v_35 = v_36;
    {
        LispObject fn = basic_elt(env, 5); // partitop
        return (*qfn1(fn))(fn, v_35);
    }
v_21:
    v_36 = basic_elt(env, 2); // wedge
    v_35 = stack[0];
    v_35 = cons(v_36, v_35);
    env = stack[-1];
    {
        LispObject fn = basic_elt(env, 3); // mkupf
        return (*qfn1(fn))(fn, v_35);
    }
    v_35 = nil;
    goto v_5;
    v_35 = nil;
v_5:
    return onevalue(v_35);
}



// Code for !:dmexpt

static LispObject CC_Tdmexpt(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    {   LispObject fn = basic_elt(env, 2); // !:dm2fix
    v_36 = (*qfn1(fn))(fn, v_36);
    }
    env = stack[-2];
    v_37 = v_36;
    v_37 = integerp(v_37);
    if (v_37 == nil) goto v_11;
    v_37 = stack[-1];
    {
        LispObject fn = basic_elt(env, 3); // !:expt
        return (*qfn2(fn))(fn, v_37, v_36);
    }
v_11:
    v_36 = stack[-1];
    {   LispObject fn = basic_elt(env, 4); // force!-to!-dm
    v_36 = (*qfn1(fn))(fn, v_36);
    }
    env = stack[-2];
    stack[-1] = v_36;
    v_36 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // force!-to!-dm
    v_36 = (*qfn1(fn))(fn, v_36);
    }
    env = stack[-2];
    stack[0] = v_36;
    v_36 = qvalue(basic_elt(env, 1)); // !*complex
    if (v_36 == nil) goto v_26;
    v_37 = stack[-1];
    v_36 = stack[0];
    {
        LispObject fn = basic_elt(env, 5); // crexpt!*
        return (*qfn2(fn))(fn, v_37, v_36);
    }
v_26:
    v_37 = stack[-1];
    v_36 = stack[0];
    {
        LispObject fn = basic_elt(env, 6); // rdexpt!*
        return (*qfn2(fn))(fn, v_37, v_36);
    }
    v_36 = nil;
    goto v_9;
    v_36 = nil;
v_9:
    return onevalue(v_36);
}



// Code for rep_parents

static LispObject CC_rep_parents(LispObject env,
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
    if (!car_legal(v_11)) rplacd_fails(v_11);
    setcdr(v_11, v_9);
    v_9 = v_10;
    return onevalue(v_9);
}



// Code for dp_prod

static LispObject CC_dp_prod(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    v_22 = stack[-1];
    stack[-2] = Llength(nil, v_22);
    env = stack[-3];
    v_22 = stack[0];
    v_22 = Llength(nil, v_22);
    env = stack[-3];
    v_22 = static_cast<LispObject>(lesseq2(stack[-2], v_22));
    v_22 = v_22 ? lisp_true : nil;
    env = stack[-3];
    if (v_22 == nil) goto v_8;
    v_23 = stack[-1];
    v_22 = stack[0];
    {
        LispObject fn = basic_elt(env, 1); // dp!=prod
        return (*qfn2(fn))(fn, v_23, v_22);
    }
v_8:
    v_23 = stack[0];
    v_22 = stack[-1];
    {
        LispObject fn = basic_elt(env, 1); // dp!=prod
        return (*qfn2(fn))(fn, v_23, v_22);
    }
    v_22 = nil;
    return onevalue(v_22);
}



setup_type const u57_setup[] =
{
    {"gcdlist1",                G0W1,     CC_gcdlist1,G2W1,   G3W1,     G4W1},
    {"preptaylor**",            G0W1,     CC_preptaylorHH,G2W1,G3W1,    G4W1},
    {"ev_2f",                   G0W2,     G1W2,     CC_ev_2f, G3W2,     G4W2},
    {"redpar",                  G0W2,     G1W2,     CC_redpar,G3W2,     G4W2},
    {"cr:minusp",               G0W1,     CC_crTminusp,G2W1,  G3W1,     G4W1},
    {"vdpenumerate",            G0W1,     CC_vdpenumerate,G2W1,G3W1,    G4W1},
    {"listofvarnames",          G0W1,     CC_listofvarnames,G2W1,G3W1,  G4W1},
    {"p_eq_vertex",             G0W2,     G1W2,     CC_p_eq_vertex,G3W2,G4W2},
    {"intargfn",                G0W3,     G1W3,     G2W3,     CC_intargfn,G4W3},
    {"fillin",                  G0W1,     CC_fillin,G2W1,     G3W1,     G4W1},
    {"compactf1",               G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_compactf1},
    {"tensor_has_dummy_idx",    G0W2,     G1W2,     CC_tensor_has_dummy_idx,G3W2,G4W2},
    {"cdr_signsort",            G0W2,     G1W2,     CC_cdr_signsort,G3W2,G4W2},
    {"x**p-w",                  G0W3,     G1W3,     G2W3,     CC_xHHpKw,G4W3},
    {"uniquifyf",               G0W1,     CC_uniquifyf,G2W1,  G3W1,     G4W1},
    {"add-to-sorted-tree",      G0W2,     G1W2,     CC_addKtoKsortedKtree,G3W2,G4W2},
    {"getsetvarlis",            G0W1,     CC_getsetvarlis,G2W1,G3W1,    G4W1},
    {"gd_applyscheme",          G0W2,     G1W2,     CC_gd_applyscheme,G3W2,G4W2},
    {"absodeg",                 G0W1,     CC_absodeg,G2W1,    G3W1,     G4W1},
    {"depend-l",                G0W2,     G1W2,     CC_dependKl,G3W2,   G4W2},
    {"rl_print*fof",            G0W1,     CC_rl_printHfof,G2W1,G3W1,    G4W1},
    {"cl_susimkatl",            G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_cl_susimkatl},
    {"ev_compless?",            G0W2,     G1W2,     CC_ev_complessW,G3W2,G4W2},
    {"appends",                 G0W3,     G1W3,     G2W3,     CC_appends,G4W3},
    {"groebsaveltermbc",        G0W1,     CC_groebsaveltermbc,G2W1,G3W1,G4W1},
    {"simpintersection",        G0W1,     CC_simpintersection,G2W1,G3W1,G4W1},
    {"rand-mons-dense",         G0W3,     G1W3,     G2W3,     CC_randKmonsKdense,G4W3},
    {"lispcondp",               G0W1,     CC_lispcondp,G2W1,  G3W1,     G4W1},
    {"actual_world",            G0W2,     G1W2,     CC_actual_world,G3W2,G4W2},
    {"groeb=testb",             G0W2,     G1W2,     CC_groebMtestb,G3W2,G4W2},
    {"nrootnn",                 G0W2,     G1W2,     CC_nrootnn,G3W2,    G4W2},
    {"ofsf_qesubq",             G0W3,     G1W3,     G2W3,     CC_ofsf_qesubq,G4W3},
    {"makecoeffpairs1",         G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_makecoeffpairs1},
    {"ev_lcm",                  G0W2,     G1W2,     CC_ev_lcm,G3W2,     G4W2},
    {"cd_ordatp",               G0W2,     G1W2,     CC_cd_ordatp,G3W2,  G4W2},
    {"unary",                   G0W2,     G1W2,     CC_unary, G3W2,     G4W2},
    {"tidysqrtf",               G0W1,     CC_tidysqrtf,G2W1,  G3W1,     G4W1},
    {"dm-quotient",             G0W2,     G1W2,     CC_dmKquotient,G3W2,G4W2},
    {"rm_neg_pow",              G0W1,     CC_rm_neg_pow,G2W1, G3W1,     G4W1},
    {"mkuniquewedge1",          G0W1,     CC_mkuniquewedge1,G2W1,G3W1,  G4W1},
    {":dmexpt",                 G0W2,     G1W2,     CC_Tdmexpt,G3W2,    G4W2},
    {"rep_parents",             G0W2,     G1W2,     CC_rep_parents,G3W2,G4W2},
    {"dp_prod",                 G0W2,     G1W2,     CC_dp_prod,G3W2,    G4W2},
    {nullptr, 
        reinterpret_cast<no_args *>(
            reinterpret_cast<uintptr_t>("u57")),
        reinterpret_cast<one_arg *>(
            reinterpret_cast<uintptr_t>("37636 8344457 1915989")),
        nullptr, nullptr, nullptr}
};

// end of generated code
