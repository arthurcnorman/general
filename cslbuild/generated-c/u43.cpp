
// $destdir/u43.c        Machine generated C code

// $Id$

#include "config.h"
#include "headers.h"



// Code for gigcdsq

static LispObject CC_gigcdsq(LispObject env,
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
    v_41 = stack[-1];
    if (v_41 == nil) goto v_8;
    v_42 = stack[0];
    v_41 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {   LispObject fn = basic_elt(env, 1); // giintgcd
    v_41 = (*qfn2(fn))(fn, v_42, v_41);
    }
    env = stack[-3];
    stack[-2] = v_41;
    v_42 = stack[-2];
    v_41 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_42 == v_41) goto v_21;
    v_42 = stack[-1];
    v_41 = stack[-2];
    {   LispObject fn = basic_elt(env, 1); // giintgcd
    v_42 = (*qfn2(fn))(fn, v_42, v_41);
    }
    env = stack[-3];
    stack[-2] = v_42;
    v_41 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_41 = Lneq_2(nil, v_42, v_41);
    env = stack[-3];
    goto v_19;
v_21:
    v_41 = nil;
    goto v_19;
    v_41 = nil;
v_19:
    if (v_41 == nil) goto v_17;
    v_42 = stack[-1];
    v_41 = stack[-2];
    {   LispObject fn = basic_elt(env, 2); // quotf
    v_41 = (*qfn2(fn))(fn, v_42, v_41);
    }
    env = stack[-3];
    stack[-1] = v_41;
    v_42 = stack[0];
    v_41 = stack[-2];
    {   LispObject fn = basic_elt(env, 2); // quotf
    v_41 = (*qfn2(fn))(fn, v_42, v_41);
    }
    stack[0] = v_41;
    goto v_15;
v_17:
v_15:
    goto v_6;
v_8:
v_6:
    v_42 = stack[-1];
    v_41 = stack[0];
    return cons(v_42, v_41);
}



// Code for subtractinds

static LispObject CC_subtractinds(LispObject env,
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
    stack_popper stack_popper_var(6);
// copy arguments values to proper place
    stack[-1] = v_4;
    stack[-2] = v_3;
    stack[-3] = v_2;
// end of prologue
v_10:
    v_45 = stack[-2];
    if (v_45 == nil) goto v_13;
    else goto v_14;
v_13:
    v_45 = stack[-1];
        return Lnreverse(nil, v_45);
v_14:
    v_45 = stack[-3];
    if (!car_legal(v_45)) v_46 = carerror(v_45); else
    v_46 = car(v_45);
    v_45 = stack[-2];
    if (!car_legal(v_45)) v_45 = carerror(v_45); else
    v_45 = car(v_45);
    if (!car_legal(v_45)) v_45 = carerror(v_45); else
    v_45 = car(v_45);
    v_46 = difference2(v_46, v_45);
    env = stack[-5];
    v_45 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_45 = static_cast<LispObject>(lessp2(v_46, v_45));
    v_45 = v_45 ? lisp_true : nil;
    env = stack[-5];
    if (v_45 == nil) goto v_19;
    v_45 = nil;
    goto v_9;
v_19:
    v_45 = stack[-3];
    if (!car_legal(v_45)) v_45 = cdrerror(v_45); else
    v_45 = cdr(v_45);
    stack[-4] = v_45;
    v_45 = stack[-2];
    if (!car_legal(v_45)) v_45 = cdrerror(v_45); else
    v_45 = cdr(v_45);
    stack[0] = v_45;
    v_45 = stack[-3];
    if (!car_legal(v_45)) v_46 = carerror(v_45); else
    v_46 = car(v_45);
    v_45 = stack[-2];
    if (!car_legal(v_45)) v_45 = carerror(v_45); else
    v_45 = car(v_45);
    if (!car_legal(v_45)) v_45 = carerror(v_45); else
    v_45 = car(v_45);
    v_46 = difference2(v_46, v_45);
    env = stack[-5];
    v_45 = stack[-1];
    v_45 = cons(v_46, v_45);
    env = stack[-5];
    stack[-1] = v_45;
    v_45 = stack[0];
    stack[-2] = v_45;
    v_45 = stack[-4];
    stack[-3] = v_45;
    goto v_10;
    v_45 = nil;
v_9:
    return onevalue(v_45);
}



// Code for mk!+resimp!+mat

static LispObject CC_mkLresimpLmat(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_117;
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(9);
// copy arguments values to proper place
    v_117 = v_2;
// end of prologue
    stack[-7] = v_117;
    v_117 = stack[-7];
    if (v_117 == nil) goto v_18;
    else goto v_19;
v_18:
    v_117 = nil;
    goto v_13;
v_19:
    v_117 = stack[-7];
    if (!car_legal(v_117)) v_117 = carerror(v_117); else
    v_117 = car(v_117);
    stack[-3] = v_117;
    v_117 = stack[-3];
    if (v_117 == nil) goto v_35;
    else goto v_36;
v_35:
    v_117 = nil;
    goto v_30;
v_36:
    v_117 = stack[-3];
    if (!car_legal(v_117)) v_117 = carerror(v_117); else
    v_117 = car(v_117);
    {   LispObject fn = basic_elt(env, 1); // resimp
    v_117 = (*qfn1(fn))(fn, v_117);
    }
    env = stack[-8];
    v_117 = ncons(v_117);
    env = stack[-8];
    stack[-1] = v_117;
    stack[-2] = v_117;
v_31:
    v_117 = stack[-3];
    if (!car_legal(v_117)) v_117 = cdrerror(v_117); else
    v_117 = cdr(v_117);
    stack[-3] = v_117;
    v_117 = stack[-3];
    if (v_117 == nil) goto v_49;
    else goto v_50;
v_49:
    v_117 = stack[-2];
    goto v_30;
v_50:
    stack[0] = stack[-1];
    v_117 = stack[-3];
    if (!car_legal(v_117)) v_117 = carerror(v_117); else
    v_117 = car(v_117);
    {   LispObject fn = basic_elt(env, 1); // resimp
    v_117 = (*qfn1(fn))(fn, v_117);
    }
    env = stack[-8];
    v_117 = ncons(v_117);
    env = stack[-8];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_117);
    v_117 = stack[-1];
    if (!car_legal(v_117)) v_117 = cdrerror(v_117); else
    v_117 = cdr(v_117);
    stack[-1] = v_117;
    goto v_31;
v_30:
    v_117 = ncons(v_117);
    env = stack[-8];
    stack[-5] = v_117;
    stack[-6] = v_117;
v_14:
    v_117 = stack[-7];
    if (!car_legal(v_117)) v_117 = cdrerror(v_117); else
    v_117 = cdr(v_117);
    stack[-7] = v_117;
    v_117 = stack[-7];
    if (v_117 == nil) goto v_67;
    else goto v_68;
v_67:
    v_117 = stack[-6];
    goto v_13;
v_68:
    stack[-4] = stack[-5];
    v_117 = stack[-7];
    if (!car_legal(v_117)) v_117 = carerror(v_117); else
    v_117 = car(v_117);
    stack[-3] = v_117;
    v_117 = stack[-3];
    if (v_117 == nil) goto v_85;
    else goto v_86;
v_85:
    v_117 = nil;
    goto v_80;
v_86:
    v_117 = stack[-3];
    if (!car_legal(v_117)) v_117 = carerror(v_117); else
    v_117 = car(v_117);
    {   LispObject fn = basic_elt(env, 1); // resimp
    v_117 = (*qfn1(fn))(fn, v_117);
    }
    env = stack[-8];
    v_117 = ncons(v_117);
    env = stack[-8];
    stack[-1] = v_117;
    stack[-2] = v_117;
v_81:
    v_117 = stack[-3];
    if (!car_legal(v_117)) v_117 = cdrerror(v_117); else
    v_117 = cdr(v_117);
    stack[-3] = v_117;
    v_117 = stack[-3];
    if (v_117 == nil) goto v_99;
    else goto v_100;
v_99:
    v_117 = stack[-2];
    goto v_80;
v_100:
    stack[0] = stack[-1];
    v_117 = stack[-3];
    if (!car_legal(v_117)) v_117 = carerror(v_117); else
    v_117 = car(v_117);
    {   LispObject fn = basic_elt(env, 1); // resimp
    v_117 = (*qfn1(fn))(fn, v_117);
    }
    env = stack[-8];
    v_117 = ncons(v_117);
    env = stack[-8];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_117);
    v_117 = stack[-1];
    if (!car_legal(v_117)) v_117 = cdrerror(v_117); else
    v_117 = cdr(v_117);
    stack[-1] = v_117;
    goto v_81;
v_80:
    v_117 = ncons(v_117);
    env = stack[-8];
    if (!car_legal(stack[-4])) rplacd_fails(stack[-4]);
    setcdr(stack[-4], v_117);
    v_117 = stack[-5];
    if (!car_legal(v_117)) v_117 = cdrerror(v_117); else
    v_117 = cdr(v_117);
    stack[-5] = v_117;
    goto v_14;
v_13:
    return onevalue(v_117);
}



// Code for freeof!-dfl

static LispObject CC_freeofKdfl(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
v_1:
    v_28 = stack[-1];
    if (!consp(v_28)) goto v_7;
    else goto v_8;
v_7:
    v_28 = lisp_true;
    goto v_6;
v_8:
    v_28 = stack[-1];
    if (!car_legal(v_28)) v_29 = carerror(v_28); else
    v_29 = car(v_28);
    v_28 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // freeof!-df
    v_28 = (*qfn2(fn))(fn, v_29, v_28);
    }
    env = stack[-2];
    if (v_28 == nil) goto v_15;
    else goto v_16;
v_15:
    v_28 = nil;
    goto v_14;
v_16:
    v_28 = stack[-1];
    if (!car_legal(v_28)) v_29 = cdrerror(v_28); else
    v_29 = cdr(v_28);
    v_28 = stack[0];
    stack[-1] = v_29;
    stack[0] = v_28;
    goto v_1;
    v_28 = nil;
v_14:
    goto v_6;
    v_28 = nil;
v_6:
    return onevalue(v_28);
}



// Code for pasf_coeflst

static LispObject CC_pasf_coeflst(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_66, v_67, v_68;
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
    stack[0] = nil;
    v_66 = stack[-1];
    v_66 = ncons(v_66);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 1); // setkorder
    v_66 = (*qfn1(fn))(fn, v_66);
    }
    env = stack[-4];
    stack[-3] = v_66;
    v_66 = stack[-2];
    {   LispObject fn = basic_elt(env, 2); // reorder
    v_66 = (*qfn1(fn))(fn, v_66);
    }
    env = stack[-4];
    stack[-2] = v_66;
v_17:
    v_66 = stack[-2];
    if (!consp(v_66)) goto v_28;
    else goto v_29;
v_28:
    v_66 = lisp_true;
    goto v_27;
v_29:
    v_66 = stack[-2];
    if (!car_legal(v_66)) v_66 = carerror(v_66); else
    v_66 = car(v_66);
    v_66 = (consp(v_66) ? nil : lisp_true);
    goto v_27;
    v_66 = nil;
v_27:
    if (v_66 == nil) goto v_24;
    else goto v_25;
v_24:
    v_66 = stack[-2];
    if (!car_legal(v_66)) v_66 = carerror(v_66); else
    v_66 = car(v_66);
    if (!car_legal(v_66)) v_66 = carerror(v_66); else
    v_66 = car(v_66);
    if (!car_legal(v_66)) v_67 = carerror(v_66); else
    v_67 = car(v_66);
    v_66 = stack[-1];
    v_66 = (v_67 == v_66 ? lisp_true : nil);
    goto v_23;
v_25:
    v_66 = nil;
    goto v_23;
    v_66 = nil;
v_23:
    if (v_66 == nil) goto v_20;
    else goto v_21;
v_20:
    goto v_16;
v_21:
    v_66 = stack[-2];
    if (!car_legal(v_66)) v_66 = carerror(v_66); else
    v_66 = car(v_66);
    if (!car_legal(v_66)) v_68 = cdrerror(v_66); else
    v_68 = cdr(v_66);
    v_66 = stack[-2];
    if (!car_legal(v_66)) v_66 = carerror(v_66); else
    v_66 = car(v_66);
    if (!car_legal(v_66)) v_66 = carerror(v_66); else
    v_66 = car(v_66);
    if (!car_legal(v_66)) v_67 = cdrerror(v_66); else
    v_67 = cdr(v_66);
    v_66 = stack[0];
    v_66 = acons(v_68, v_67, v_66);
    env = stack[-4];
    stack[0] = v_66;
    v_66 = stack[-2];
    if (!car_legal(v_66)) v_66 = cdrerror(v_66); else
    v_66 = cdr(v_66);
    stack[-2] = v_66;
    goto v_17;
v_16:
    v_66 = stack[-3];
    {   LispObject fn = basic_elt(env, 1); // setkorder
    v_66 = (*qfn1(fn))(fn, v_66);
    }
    env = stack[-4];
    v_66 = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // negf
    v_68 = (*qfn1(fn))(fn, v_66);
    }
    env = stack[-4];
    v_67 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_66 = stack[0];
    v_66 = acons(v_68, v_67, v_66);
        return Lnreverse(nil, v_66);
    return onevalue(v_66);
}



// Code for vdp_mred

static LispObject CC_vdp_mred(LispObject env,
                         LispObject v_2)
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
    v_27 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // vdp_poly
    v_27 = (*qfn1(fn))(fn, v_27);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 2); // dip_mred
    v_27 = (*qfn1(fn))(fn, v_27);
    }
    env = stack[-3];
    stack[-2] = v_27;
    v_27 = stack[-2];
    if (v_27 == nil) goto v_12;
    else goto v_13;
v_12:
    {
        LispObject fn = basic_elt(env, 3); // vdp_zero
        return (*qfn0(fn))(fn);
    }
v_13:
    v_27 = stack[-2];
    {   LispObject fn = basic_elt(env, 4); // dip_lbc
    stack[0] = (*qfn1(fn))(fn, v_27);
    }
    env = stack[-3];
    v_27 = stack[-2];
    {   LispObject fn = basic_elt(env, 5); // dip_evlmon
    v_28 = (*qfn1(fn))(fn, v_27);
    }
    env = stack[-3];
    v_27 = stack[-2];
    {   LispObject fn = basic_elt(env, 6); // vdp_make
    v_27 = (*qfn3(fn))(fn, stack[0], v_28, v_27);
    }
    env = stack[-3];
    stack[-2] = v_27;
    stack[0] = stack[-2];
    v_27 = stack[-1];
    {   LispObject fn = basic_elt(env, 7); // vdp_sugar
    v_27 = (*qfn1(fn))(fn, v_27);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 8); // vdp_setsugar
    v_27 = (*qfn2(fn))(fn, stack[0], v_27);
    }
    v_27 = stack[-2];
    return onevalue(v_27);
}



// Code for vsl_subatsq

static LispObject CC_vsl_subatsq(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_17, v_18, v_19, v_20;
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
    v_18 = v_4;
    v_19 = v_3;
    v_20 = v_2;
// end of prologue
    v_17 = v_20;
    if (!car_legal(v_17)) stack[0] = carerror(v_17); else
    stack[0] = car(v_17);
    v_17 = v_20;
    if (!car_legal(v_17)) v_17 = cdrerror(v_17); else
    v_17 = cdr(v_17);
    if (!car_legal(v_17)) v_17 = carerror(v_17); else
    v_17 = car(v_17);
    {   LispObject fn = basic_elt(env, 1); // ofsf_subf
    v_17 = (*qfn3(fn))(fn, v_17, v_19, v_18);
    }
    if (!car_legal(v_17)) v_18 = carerror(v_17); else
    v_18 = car(v_17);
    v_17 = nil;
    {
        LispObject v_22 = stack[0];
        return list3(v_22, v_18, v_17);
    }
}



// Code for numir

static LispObject CC_numir(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_104, v_105, v_106;
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
    push(nil, nil);
    stack_popper stack_popper_var(8);
// end of prologue
    v_105 = qvalue(basic_elt(env, 1)); // atts
    v_104 = basic_elt(env, 2); // name
    {   LispObject fn = basic_elt(env, 11); // find
    v_104 = (*qfn2(fn))(fn, v_105, v_104);
    }
    env = stack[-7];
    v_104 = Lintern(nil, v_104);
    env = stack[-7];
    stack[-1] = v_104;
    {   LispObject fn = basic_elt(env, 12); // lex
    v_104 = (*qfn0(fn))(fn);
    }
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 13); // omobj
    v_104 = (*qfn0(fn))(fn);
    }
    env = stack[-7];
    stack[0] = v_104;
    {   LispObject fn = basic_elt(env, 12); // lex
    v_104 = (*qfn0(fn))(fn);
    }
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 13); // omobj
    v_104 = (*qfn0(fn))(fn);
    }
    env = stack[-7];
    v_106 = stack[-1];
    v_105 = basic_elt(env, 3); // complex_cartesian
    if (v_106 == v_105) goto v_19;
    else goto v_20;
v_19:
    v_105 = stack[0];
    if (symbolp(v_105)) goto v_25;
    v_105 = v_104;
    if (symbolp(v_105)) goto v_25;
    goto v_26;
v_25:
    stack[-4] = basic_elt(env, 4); // plus
    stack[-3] = nil;
    stack[-2] = stack[0];
    stack[-1] = basic_elt(env, 5); // times
    stack[0] = nil;
    v_106 = v_104;
    v_105 = basic_elt(env, 6); // !&imaginaryi!;
    v_104 = nil;
    v_104 = list2star(v_106, v_105, v_104);
    env = stack[-7];
    v_105 = list2star(stack[-1], stack[0], v_104);
    env = stack[-7];
    v_104 = nil;
    v_104 = list2star(stack[-2], v_105, v_104);
    {
        LispObject v_114 = stack[-4];
        LispObject v_115 = stack[-3];
        return list2star(v_114, v_115, v_104);
    }
v_26:
    goto v_18;
v_20:
v_18:
    v_106 = stack[-1];
    v_105 = basic_elt(env, 7); // complex_polar
    if (v_106 == v_105) goto v_46;
    else goto v_47;
v_46:
    v_105 = stack[0];
    if (symbolp(v_105)) goto v_52;
    v_105 = v_104;
    if (symbolp(v_105)) goto v_52;
    goto v_53;
v_52:
    stack[-6] = basic_elt(env, 5); // times
    stack[-5] = nil;
    stack[-4] = stack[0];
    stack[-3] = basic_elt(env, 8); // exp
    stack[-2] = nil;
    stack[-1] = basic_elt(env, 5); // times
    stack[0] = nil;
    v_106 = v_104;
    v_105 = basic_elt(env, 6); // !&imaginaryi!;
    v_104 = nil;
    v_104 = list2star(v_106, v_105, v_104);
    env = stack[-7];
    v_104 = list2star(stack[-1], stack[0], v_104);
    env = stack[-7];
    v_104 = ncons(v_104);
    env = stack[-7];
    v_105 = list2star(stack[-3], stack[-2], v_104);
    env = stack[-7];
    v_104 = nil;
    v_104 = list2star(stack[-4], v_105, v_104);
    {
        LispObject v_116 = stack[-6];
        LispObject v_117 = stack[-5];
        return list2star(v_116, v_117, v_104);
    }
v_53:
    goto v_45;
v_47:
v_45:
    v_106 = stack[-1];
    v_105 = basic_elt(env, 9); // rational
    if (v_106 == v_105) goto v_77;
    else goto v_78;
v_77:
    v_105 = stack[0];
    if (symbolp(v_105)) goto v_83;
    v_105 = v_104;
    if (symbolp(v_105)) goto v_83;
    goto v_84;
v_83:
    stack[-2] = basic_elt(env, 10); // divide
    stack[-1] = nil;
    v_106 = stack[0];
    v_105 = v_104;
    v_104 = nil;
    v_104 = list2star(v_106, v_105, v_104);
    {
        LispObject v_118 = stack[-2];
        LispObject v_119 = stack[-1];
        return list2star(v_118, v_119, v_104);
    }
v_84:
    goto v_76;
v_78:
v_76:
    stack[-2] = stack[-1];
    stack[-1] = nil;
    v_106 = stack[0];
    v_105 = v_104;
    v_104 = nil;
    v_104 = list2star(v_106, v_105, v_104);
    {
        LispObject v_120 = stack[-2];
        LispObject v_121 = stack[-1];
        return list2star(v_120, v_121, v_104);
    }
    return onevalue(v_104);
}



// Code for diford

static LispObject CC_diford(LispObject env,
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
    if (!car_legal(v_8)) v_8 = cdrerror(v_8); else
    v_8 = cdr(v_8);
    if (!car_legal(v_8)) v_8 = cdrerror(v_8); else
    v_8 = cdr(v_8);
    {
        LispObject fn = basic_elt(env, 1); // lengthn
        return (*qfn1(fn))(fn, v_8);
    }
}



// Code for remdiff

static LispObject CC_remdiff(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_79, v_80;
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
    stack[-1] = v_2;
// end of prologue
    v_79 = stack[-1];
    if (symbolp(v_79)) goto v_6;
    v_79 = stack[-1];
    {   LispObject fn = basic_elt(env, 4); // constp
    v_79 = (*qfn1(fn))(fn, v_79);
    }
    env = stack[-5];
    if (v_79 == nil) goto v_10;
    else goto v_6;
v_10:
    goto v_7;
v_6:
    v_79 = stack[-1];
    goto v_5;
v_7:
    v_79 = stack[-1];
    if (!car_legal(v_79)) v_80 = carerror(v_79); else
    v_80 = car(v_79);
    v_79 = basic_elt(env, 1); // difference
    if (v_80 == v_79) goto v_18;
    else goto v_19;
v_18:
    stack[-3] = basic_elt(env, 2); // plus
    v_79 = stack[-1];
    if (!car_legal(v_79)) v_79 = cdrerror(v_79); else
    v_79 = cdr(v_79);
    if (!car_legal(v_79)) v_79 = carerror(v_79); else
    v_79 = car(v_79);
    {   LispObject fn = basic_elt(env, 0); // remdiff
    stack[-2] = (*qfn1(fn))(fn, v_79);
    }
    env = stack[-5];
    stack[0] = basic_elt(env, 3); // minus
    v_79 = stack[-1];
    if (!car_legal(v_79)) v_79 = cdrerror(v_79); else
    v_79 = cdr(v_79);
    if (!car_legal(v_79)) v_79 = cdrerror(v_79); else
    v_79 = cdr(v_79);
    if (!car_legal(v_79)) v_79 = carerror(v_79); else
    v_79 = car(v_79);
    {   LispObject fn = basic_elt(env, 0); // remdiff
    v_79 = (*qfn1(fn))(fn, v_79);
    }
    env = stack[-5];
    v_79 = list2(stack[0], v_79);
    env = stack[-5];
    v_79 = list3(stack[-3], stack[-2], v_79);
    goto v_17;
v_19:
    v_79 = stack[-1];
    if (!car_legal(v_79)) stack[-4] = carerror(v_79); else
    stack[-4] = car(v_79);
    v_79 = stack[-1];
    if (!car_legal(v_79)) v_79 = cdrerror(v_79); else
    v_79 = cdr(v_79);
    stack[-3] = v_79;
    v_79 = stack[-3];
    if (v_79 == nil) goto v_51;
    else goto v_52;
v_51:
    v_79 = nil;
    goto v_45;
v_52:
    v_79 = stack[-3];
    if (!car_legal(v_79)) v_79 = carerror(v_79); else
    v_79 = car(v_79);
    {   LispObject fn = basic_elt(env, 0); // remdiff
    v_79 = (*qfn1(fn))(fn, v_79);
    }
    env = stack[-5];
    v_79 = ncons(v_79);
    env = stack[-5];
    stack[-1] = v_79;
    stack[-2] = v_79;
v_46:
    v_79 = stack[-3];
    if (!car_legal(v_79)) v_79 = cdrerror(v_79); else
    v_79 = cdr(v_79);
    stack[-3] = v_79;
    v_79 = stack[-3];
    if (v_79 == nil) goto v_65;
    else goto v_66;
v_65:
    v_79 = stack[-2];
    goto v_45;
v_66:
    stack[0] = stack[-1];
    v_79 = stack[-3];
    if (!car_legal(v_79)) v_79 = carerror(v_79); else
    v_79 = car(v_79);
    {   LispObject fn = basic_elt(env, 0); // remdiff
    v_79 = (*qfn1(fn))(fn, v_79);
    }
    env = stack[-5];
    v_79 = ncons(v_79);
    env = stack[-5];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_79);
    v_79 = stack[-1];
    if (!car_legal(v_79)) v_79 = cdrerror(v_79); else
    v_79 = cdr(v_79);
    stack[-1] = v_79;
    goto v_46;
v_45:
    {
        LispObject v_86 = stack[-4];
        return cons(v_86, v_79);
    }
    v_79 = nil;
v_17:
    goto v_5;
    v_79 = nil;
v_5:
    return onevalue(v_79);
}



// Code for xpartitop

static LispObject CC_xpartitop(LispObject env,
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
        LispObject fn = basic_elt(env, 2); // xpartitsq
        return (*qfn1(fn))(fn, v_7);
    }
}



// Code for gfdiffer

static LispObject CC_gfdiffer(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_19, v_20, v_21;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_20 = v_3;
    v_21 = v_2;
// end of prologue
    v_19 = v_21;
    if (!car_legal(v_19)) v_19 = carerror(v_19); else
    v_19 = car(v_19);
    if (!consp(v_19)) goto v_7;
    else goto v_8;
v_7:
    v_19 = v_21;
    {
        LispObject fn = basic_elt(env, 1); // gffdiff
        return (*qfn2(fn))(fn, v_19, v_20);
    }
v_8:
    v_19 = v_21;
    {
        LispObject fn = basic_elt(env, 2); // gbfdiff
        return (*qfn2(fn))(fn, v_19, v_20);
    }
    v_19 = nil;
    return onevalue(v_19);
}



// Code for reduce!-columns

static LispObject CC_reduceKcolumns(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_85, v_86;
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
    v_85 = stack[-6];
    stack[-3] = v_85;
    v_85 = stack[-5];
    stack[-2] = v_85;
    stack[0] = stack[-6];
    v_86 = stack[-6];
    v_85 = stack[-4];
    {   LispObject fn = basic_elt(env, 1); // red!-weight
    v_85 = (*qfn2(fn))(fn, v_86, v_85);
    }
    env = stack[-8];
    v_85 = cons(stack[0], v_85);
    env = stack[-8];
    stack[-7] = v_85;
v_13:
    v_85 = stack[-3];
    if (v_85 == nil) goto v_23;
    else goto v_24;
v_23:
    v_85 = stack[-7];
    if (!car_legal(v_85)) v_85 = carerror(v_85); else
    v_85 = car(v_85);
    goto v_12;
v_24:
    v_85 = stack[-3];
    if (!car_legal(v_85)) v_86 = carerror(v_85); else
    v_86 = car(v_85);
    v_85 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_86 == v_85) goto v_32;
    else goto v_33;
v_32:
    v_85 = lisp_true;
    goto v_31;
v_33:
    v_85 = stack[-2];
    if (!car_legal(v_85)) v_86 = carerror(v_85); else
    v_86 = car(v_85);
    v_85 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_85 = (v_86 == v_85 ? lisp_true : nil);
    goto v_31;
    v_85 = nil;
v_31:
    if (v_85 == nil) goto v_29;
    goto v_22;
v_29:
    v_85 = stack[-3];
    if (!car_legal(v_85)) v_86 = carerror(v_85); else
    v_86 = car(v_85);
    v_85 = stack[-2];
    if (!car_legal(v_85)) v_85 = carerror(v_85); else
    v_85 = car(v_85);
    v_85 = Ldivide_2(nil, v_86, v_85);
    env = stack[-8];
    stack[-1] = v_85;
    if (!car_legal(v_85)) v_86 = cdrerror(v_85); else
    v_86 = cdr(v_85);
    v_85 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_86 == v_85) goto v_45;
    else goto v_46;
v_45:
    stack[0] = stack[-6];
    v_85 = stack[-1];
    if (!car_legal(v_85)) v_86 = carerror(v_85); else
    v_86 = car(v_85);
    v_85 = stack[-5];
    {   LispObject fn = basic_elt(env, 2); // mv!-domainlist!-!*
    v_85 = (*qfn2(fn))(fn, v_86, v_85);
    }
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 3); // mv!-domainlist!-!-
    v_85 = (*qfn2(fn))(fn, stack[0], v_85);
    }
    env = stack[-8];
    stack[-1] = v_85;
    v_86 = stack[-1];
    v_85 = stack[-4];
    {   LispObject fn = basic_elt(env, 1); // red!-weight
    v_85 = (*qfn2(fn))(fn, v_86, v_85);
    }
    env = stack[-8];
    stack[0] = v_85;
    v_86 = stack[0];
    v_85 = stack[-7];
    if (!car_legal(v_85)) v_85 = cdrerror(v_85); else
    v_85 = cdr(v_85);
    {   LispObject fn = basic_elt(env, 4); // red!-weight!-less!-p
    v_85 = (*qfn2(fn))(fn, v_86, v_85);
    }
    env = stack[-8];
    if (v_85 == nil) goto v_66;
    v_86 = stack[-1];
    v_85 = stack[0];
    v_86 = cons(v_86, v_85);
    env = stack[-8];
    v_85 = stack[-7];
    {   LispObject fn = basic_elt(env, 5); // more!-apartp
    v_85 = (*qfn2(fn))(fn, v_86, v_85);
    }
    env = stack[-8];
    if (v_85 == nil) goto v_72;
    else goto v_66;
v_72:
    v_86 = stack[-1];
    v_85 = stack[0];
    v_85 = cons(v_86, v_85);
    env = stack[-8];
    stack[-7] = v_85;
    goto v_64;
v_66:
v_64:
    goto v_22;
v_46:
v_22:
    v_85 = stack[-3];
    if (!car_legal(v_85)) v_85 = cdrerror(v_85); else
    v_85 = cdr(v_85);
    stack[-3] = v_85;
    v_85 = stack[-2];
    if (!car_legal(v_85)) v_85 = cdrerror(v_85); else
    v_85 = cdr(v_85);
    stack[-2] = v_85;
    goto v_13;
v_12:
    return onevalue(v_85);
}



// Code for groeb!=testc1

static LispObject CC_groebMtestc1(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_20 = stack[0];
    v_19 = static_cast<LispObject>(80)+TAG_FIXNUM; // 5
    {   LispObject fn = basic_elt(env, 1); // nth
    v_19 = (*qfn2(fn))(fn, v_20, v_19);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 2); // bas_dpoly
    v_19 = (*qfn1(fn))(fn, v_19);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // dp_lmon
    stack[-1] = (*qfn1(fn))(fn, v_19);
    }
    env = stack[-2];
    v_20 = stack[0];
    v_19 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    {   LispObject fn = basic_elt(env, 1); // nth
    v_19 = (*qfn2(fn))(fn, v_20, v_19);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 2); // bas_dpoly
    v_19 = (*qfn1(fn))(fn, v_19);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // dp_lmon
    v_19 = (*qfn1(fn))(fn, v_19);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 4); // mo_sum
    stack[-1] = (*qfn2(fn))(fn, stack[-1], v_19);
    }
    env = stack[-2];
    v_20 = stack[0];
    v_19 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    {   LispObject fn = basic_elt(env, 1); // nth
    v_19 = (*qfn2(fn))(fn, v_20, v_19);
    }
    env = stack[-2];
    {
        LispObject v_23 = stack[-1];
        LispObject fn = basic_elt(env, 5); // mo_equal!?
        return (*qfn2(fn))(fn, v_23, v_19);
    }
}



// Code for mk_dummy_ids

static LispObject CC_mk_dummy_ids(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_23, v_24;
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
    v_23 = v_2;
// end of prologue
    v_24 = v_23;
    if (!car_legal(v_24)) v_24 = carerror(v_24); else
    v_24 = car(v_24);
    if (!car_legal(v_23)) v_23 = cdrerror(v_23); else
    v_23 = cdr(v_23);
    if (!car_legal(v_23)) v_23 = carerror(v_23); else
    v_23 = car(v_23);
    {   LispObject fn = basic_elt(env, 4); // intersection
    v_23 = (*qfn2(fn))(fn, v_24, v_23);
    }
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 5); // clean_numid
    v_23 = (*qfn1(fn))(fn, v_23);
    }
    env = stack[-1];
    stack[0] = v_23;
    v_24 = stack[0];
    v_23 = basic_elt(env, 1); // dummy
    v_23 = Lflag(nil, v_24, v_23);
    env = stack[-1];
    v_24 = stack[0];
    v_23 = basic_elt(env, 2); // reserved
    v_23 = Lflag(nil, v_24, v_23);
    env = stack[-1];
    v_24 = stack[0];
    v_23 = qvalue(basic_elt(env, 3)); // dummy_id!*
    {   LispObject fn = basic_elt(env, 6); // union
    v_23 = (*qfn2(fn))(fn, v_24, v_23);
    }
    env = stack[-1];
    setvalue(basic_elt(env, 3), v_23); // dummy_id!*
    v_23 = nil;
    return onevalue(v_23);
}



// Code for aex_mult

static LispObject CC_aex_mult(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_29;
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
    {   LispObject fn = basic_elt(env, 1); // aex_simplenullp
    v_29 = (*qfn1(fn))(fn, v_29);
    }
    env = stack[-3];
    if (v_29 == nil) goto v_9;
    else goto v_7;
v_9:
    v_29 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // aex_simplenullp
    v_29 = (*qfn1(fn))(fn, v_29);
    }
    env = stack[-3];
    if (v_29 == nil) goto v_12;
    else goto v_7;
v_12:
    goto v_8;
v_7:
    {
        LispObject fn = basic_elt(env, 2); // aex_0
        return (*qfn0(fn))(fn);
    }
v_8:
    v_29 = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // aex_ex
    stack[-2] = (*qfn1(fn))(fn, v_29);
    }
    env = stack[-3];
    v_29 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // aex_ex
    v_29 = (*qfn1(fn))(fn, v_29);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 4); // multsq
    stack[-2] = (*qfn2(fn))(fn, stack[-2], v_29);
    }
    env = stack[-3];
    v_29 = stack[-1];
    {   LispObject fn = basic_elt(env, 5); // aex_ctx
    stack[-1] = (*qfn1(fn))(fn, v_29);
    }
    env = stack[-3];
    v_29 = stack[0];
    {   LispObject fn = basic_elt(env, 5); // aex_ctx
    v_29 = (*qfn1(fn))(fn, v_29);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 6); // ctx_union
    v_29 = (*qfn2(fn))(fn, stack[-1], v_29);
    }
    env = stack[-3];
    {
        LispObject v_33 = stack[-2];
        LispObject fn = basic_elt(env, 7); // aex_mk
        return (*qfn2(fn))(fn, v_33, v_29);
    }
    v_29 = nil;
    return onevalue(v_29);
}



// Code for createtriple

static LispObject CC_createtriple(LispObject env,
                         LispObject v_2)
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
    v_29 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_29 = Lmkvect(nil, v_29);
    env = stack[-3];
    stack[-2] = v_29;
    v_31 = stack[-2];
    v_30 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_29 = qvalue(basic_elt(env, 1)); // fluidbibasistripleid
    v_29 = Lputv(nil, v_31, v_30, v_29);
    env = stack[-3];
    v_31 = stack[-2];
    v_30 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_29 = stack[0];
    v_29 = Lputv(nil, v_31, v_30, v_29);
    env = stack[-3];
    v_31 = stack[-2];
    v_30 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_29 = qvalue(basic_elt(env, 1)); // fluidbibasistripleid
    v_29 = Lputv(nil, v_31, v_30, v_29);
    env = stack[-3];
    stack[-1] = stack[-2];
    stack[0] = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_29 = nil;
    v_29 = ncons(v_29);
    env = stack[-3];
    v_29 = Lputv(nil, stack[-1], stack[0], v_29);
    env = stack[-3];
    v_29 = qvalue(basic_elt(env, 1)); // fluidbibasistripleid
    v_29 = static_cast<LispObject>(static_cast<std::intptr_t>(v_29) + 0x10);
    setvalue(basic_elt(env, 1), v_29); // fluidbibasistripleid
    v_29 = stack[-2];
    return onevalue(v_29);
}



// Code for mksfpf

static LispObject CC_mksfpf(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_90, v_91;
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
    v_90 = v_2;
// end of prologue
    {   LispObject fn = basic_elt(env, 3); // mkprod
    v_90 = (*qfn1(fn))(fn, v_90);
    }
    env = stack[-2];
    stack[-1] = v_90;
    v_91 = stack[0];
    v_90 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_91 == v_90) goto v_10;
    else goto v_11;
v_10:
    v_90 = stack[-1];
    goto v_9;
v_11:
    v_90 = stack[-1];
    if (!consp(v_90)) goto v_19;
    else goto v_20;
v_19:
    v_90 = lisp_true;
    goto v_18;
v_20:
    v_90 = stack[-1];
    if (!car_legal(v_90)) v_90 = carerror(v_90); else
    v_90 = car(v_90);
    v_90 = (consp(v_90) ? nil : lisp_true);
    goto v_18;
    v_90 = nil;
v_18:
    if (v_90 == nil) goto v_16;
    v_91 = stack[-1];
    v_90 = stack[0];
    {
        LispObject fn = basic_elt(env, 4); // !:expt
        return (*qfn2(fn))(fn, v_91, v_90);
    }
v_16:
    v_91 = stack[0];
    v_90 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_90 = static_cast<LispObject>(geq2(v_91, v_90));
    v_90 = v_90 ? lisp_true : nil;
    env = stack[-2];
    if (v_90 == nil) goto v_32;
    v_90 = stack[-1];
    if (!car_legal(v_90)) v_90 = carerror(v_90); else
    v_90 = car(v_90);
    if (!car_legal(v_90)) v_90 = cdrerror(v_90); else
    v_90 = cdr(v_90);
    v_90 = Lonep(nil, v_90);
    env = stack[-2];
    if (v_90 == nil) goto v_32;
    v_90 = stack[-1];
    if (!car_legal(v_90)) v_90 = cdrerror(v_90); else
    v_90 = cdr(v_90);
    if (v_90 == nil) goto v_43;
    else goto v_32;
v_43:
    v_90 = stack[-1];
    if (!car_legal(v_90)) v_90 = carerror(v_90); else
    v_90 = car(v_90);
    if (!car_legal(v_90)) v_90 = carerror(v_90); else
    v_90 = car(v_90);
    if (!car_legal(v_90)) v_91 = cdrerror(v_90); else
    v_91 = cdr(v_90);
    v_90 = stack[0];
    v_91 = times2(v_91, v_90);
    env = stack[-2];
    v_90 = stack[-1];
    if (!car_legal(v_90)) v_90 = carerror(v_90); else
    v_90 = car(v_90);
    if (!car_legal(v_90)) v_90 = carerror(v_90); else
    v_90 = car(v_90);
    if (!car_legal(v_90)) v_90 = carerror(v_90); else
    v_90 = car(v_90);
    stack[-1] = v_91;
    stack[0] = v_90;
    v_91 = stack[0];
    v_90 = qvalue(basic_elt(env, 1)); // asymplis!*
    v_90 = Lassoc(nil, v_91, v_90);
    v_91 = v_90;
    v_90 = qvalue(basic_elt(env, 2)); // subfg!*
    if (v_90 == nil) goto v_65;
    v_90 = v_91;
    if (v_90 == nil) goto v_65;
    v_90 = v_91;
    if (!car_legal(v_90)) v_91 = cdrerror(v_90); else
    v_91 = cdr(v_90);
    v_90 = stack[-1];
    v_90 = static_cast<LispObject>(lesseq2(v_91, v_90));
    v_90 = v_90 ? lisp_true : nil;
    env = stack[-2];
    if (v_90 == nil) goto v_65;
    v_90 = nil;
    goto v_63;
v_65:
    v_91 = stack[0];
    v_90 = stack[-1];
    {   LispObject fn = basic_elt(env, 5); // mksp
    v_91 = (*qfn2(fn))(fn, v_91, v_90);
    }
    env = stack[-2];
    v_90 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_90 = cons(v_91, v_90);
    return ncons(v_90);
    v_90 = nil;
v_63:
    goto v_9;
v_32:
    v_91 = stack[-1];
    v_90 = stack[0];
    {
        LispObject fn = basic_elt(env, 6); // exptf2
        return (*qfn2(fn))(fn, v_91, v_90);
    }
    v_90 = nil;
v_9:
    return onevalue(v_90);
}



// Code for enter!-sorted

static LispObject CC_enterKsorted(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    stack[-2] = nil;
v_8:
    v_39 = stack[0];
    if (v_39 == nil) goto v_11;
    else goto v_12;
v_11:
    stack[0] = stack[-2];
    v_39 = stack[-1];
    v_39 = ncons(v_39);
    env = stack[-3];
    {
        LispObject v_44 = stack[0];
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn2(fn))(fn, v_44, v_39);
    }
v_12:
    v_39 = stack[-1];
    if (!car_legal(v_39)) v_40 = carerror(v_39); else
    v_40 = car(v_39);
    v_39 = stack[0];
    if (!car_legal(v_39)) v_39 = carerror(v_39); else
    v_39 = car(v_39);
    if (!car_legal(v_39)) v_39 = carerror(v_39); else
    v_39 = car(v_39);
    {   LispObject fn = basic_elt(env, 2); // taydegree!<
    v_39 = (*qfn2(fn))(fn, v_40, v_39);
    }
    env = stack[-3];
    if (v_39 == nil) goto v_19;
    v_40 = stack[-1];
    v_39 = stack[0];
    v_39 = cons(v_40, v_39);
    env = stack[-3];
    {
        LispObject v_45 = stack[-2];
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn2(fn))(fn, v_45, v_39);
    }
v_19:
    v_39 = stack[0];
    if (!car_legal(v_39)) v_40 = carerror(v_39); else
    v_40 = car(v_39);
    v_39 = stack[-2];
    v_39 = cons(v_40, v_39);
    env = stack[-3];
    stack[-2] = v_39;
    v_39 = stack[0];
    if (!car_legal(v_39)) v_39 = cdrerror(v_39); else
    v_39 = cdr(v_39);
    stack[0] = v_39;
    goto v_8;
    v_39 = nil;
    return onevalue(v_39);
}



// Code for pasf_premf

static LispObject CC_pasf_premf(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // remf
    v_11 = (*qfn2(fn))(fn, v_11, v_10);
    }
    env = stack[-1];
    v_10 = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // pasf_premf1
        return (*qfn2(fn))(fn, v_11, v_10);
    }
}



// Code for vsl_boundtype1

static LispObject CC_vsl_boundtype1(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_47, v_48, v_49, v_50;
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
    v_50 = v_3;
    v_49 = v_2;
// end of prologue
v_7:
    v_47 = v_49;
    if (!consp(v_47)) goto v_14;
    else goto v_15;
v_14:
    v_47 = lisp_true;
    goto v_13;
v_15:
    v_47 = v_49;
    if (!car_legal(v_47)) v_47 = carerror(v_47); else
    v_47 = car(v_47);
    v_47 = (consp(v_47) ? nil : lisp_true);
    goto v_13;
    v_47 = nil;
v_13:
    if (v_47 == nil) goto v_11;
    v_47 = nil;
    goto v_6;
v_11:
    v_47 = v_49;
    if (!car_legal(v_47)) v_47 = carerror(v_47); else
    v_47 = car(v_47);
    if (!car_legal(v_47)) v_47 = carerror(v_47); else
    v_47 = car(v_47);
    if (!car_legal(v_47)) v_48 = carerror(v_47); else
    v_48 = car(v_47);
    v_47 = v_50;
    if (v_48 == v_47) goto v_24;
    else goto v_25;
v_24:
    v_47 = v_49;
    if (!car_legal(v_47)) v_47 = carerror(v_47); else
    v_47 = car(v_47);
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    {   LispObject fn = basic_elt(env, 3); // minusf
    v_47 = (*qfn1(fn))(fn, v_47);
    }
    env = stack[0];
    if (v_47 == nil) goto v_34;
    v_47 = basic_elt(env, 1); // ub
    goto v_6;
v_34:
    v_47 = basic_elt(env, 2); // lb
    goto v_6;
    goto v_9;
v_25:
    v_47 = v_49;
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    v_49 = v_47;
    goto v_7;
v_9:
    v_47 = nil;
v_6:
    return onevalue(v_47);
}



// Code for cols2rows2

static LispObject CC_cols2rows2(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    v_22 = stack[0];
    v_21 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_22 == v_21) goto v_10;
    v_22 = stack[-1];
    v_21 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // ithlistelem
    stack[-2] = (*qfn2(fn))(fn, v_22, v_21);
    }
    env = stack[-3];
    v_21 = stack[0];
    v_21 = sub1(v_21);
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 0); // cols2rows2
    v_21 = (*qfn2(fn))(fn, stack[-1], v_21);
    }
    {
        LispObject v_26 = stack[-2];
        return cons(v_26, v_21);
    }
v_10:
    v_21 = nil;
    return onevalue(v_21);
}



// Code for reduceroots

static LispObject CC_reduceroots(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    v_35 = nil;
v_10:
    v_36 = stack[-1];
    if (v_36 == nil) goto v_13;
    else goto v_14;
v_13:
    goto v_9;
v_14:
    v_36 = stack[0];
    if (!car_legal(v_36)) v_37 = carerror(v_36); else
    v_37 = car(v_36);
    v_36 = basic_elt(env, 1); // sqrt
    if (!consp(v_37)) goto v_20;
    v_37 = car(v_37);
    if (v_37 == v_36) goto v_19;
    else goto v_20;
v_19:
    v_37 = stack[-1];
    v_36 = stack[0];
    if (!car_legal(v_36)) v_36 = carerror(v_36); else
    v_36 = car(v_36);
    {   LispObject fn = basic_elt(env, 2); // tryreduction
    v_35 = (*qfn3(fn))(fn, v_37, v_36, v_35);
    }
    env = stack[-2];
    goto v_18;
v_20:
v_18:
    v_36 = stack[-1];
    if (!car_legal(v_36)) v_36 = cdrerror(v_36); else
    v_36 = cdr(v_36);
    stack[-1] = v_36;
    v_36 = stack[0];
    if (!car_legal(v_36)) v_36 = cdrerror(v_36); else
    v_36 = cdr(v_36);
    stack[0] = v_36;
    goto v_10;
v_9:
    return onevalue(v_35);
}



// Code for ps!:set!-term

static LispObject CC_psTsetKterm(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_127, v_128, v_129;
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
    v_127 = stack[-4];
    {   LispObject fn = basic_elt(env, 5); // ps!:order
    v_127 = (*qfn1(fn))(fn, v_127);
    }
    env = stack[-6];
    stack[-5] = v_127;
    v_128 = stack[-3];
    v_127 = stack[-5];
    v_127 = static_cast<LispObject>(lessp2(v_128, v_127));
    v_127 = v_127 ? lisp_true : nil;
    env = stack[-6];
    if (v_127 == nil) goto v_15;
    stack[-1] = basic_elt(env, 1); // tps
    stack[0] = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_129 = stack[-3];
    v_128 = basic_elt(env, 2); // "less than the order of "
    v_127 = stack[-4];
    v_127 = list3(v_129, v_128, v_127);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 6); // rerror
    v_127 = (*qfn3(fn))(fn, stack[-1], stack[0], v_127);
    }
    env = stack[-6];
    goto v_13;
v_15:
    stack[0] = stack[-3];
    v_127 = stack[-4];
    {   LispObject fn = basic_elt(env, 7); // ps!:last!-term
    v_127 = (*qfn1(fn))(fn, v_127);
    }
    env = stack[-6];
    v_127 = static_cast<LispObject>(lesseq2(stack[0], v_127));
    v_127 = v_127 ? lisp_true : nil;
    env = stack[-6];
    if (v_127 == nil) goto v_27;
    stack[-1] = basic_elt(env, 1); // tps
    stack[0] = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_129 = stack[-3];
    v_128 = basic_elt(env, 3); // "less than power of last term of "
    v_127 = stack[-4];
    v_127 = list3(v_129, v_128, v_127);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 6); // rerror
    v_127 = (*qfn3(fn))(fn, stack[-1], stack[0], v_127);
    }
    env = stack[-6];
    goto v_13;
v_27:
v_13:
    v_127 = stack[-4];
    if (!consp(v_127)) goto v_45;
    else goto v_46;
v_45:
    v_127 = lisp_true;
    goto v_44;
v_46:
    v_127 = stack[-4];
    if (!car_legal(v_127)) v_128 = carerror(v_127); else
    v_128 = car(v_127);
    v_127 = basic_elt(env, 4); // !:ps!:
    if (v_128 == v_127) goto v_54;
    v_127 = stack[-4];
    if (!car_legal(v_127)) v_127 = carerror(v_127); else
    v_127 = car(v_127);
    if (!symbolp(v_127)) v_127 = nil;
    else { v_127 = qfastgets(v_127);
           if (v_127 != nil) { v_127 = elt(v_127, 8); // dname
#ifdef RECORD_GET
             if (v_127 != SPID_NOPROP)
                record_get(elt(fastget_names, 8), 1);
             else record_get(elt(fastget_names, 8), 0),
                v_127 = nil; }
           else record_get(elt(fastget_names, 8), 0); }
#else
             if (v_127 == SPID_NOPROP) v_127 = nil; }}
#endif
    goto v_52;
v_54:
    v_127 = nil;
    goto v_52;
    v_127 = nil;
v_52:
    goto v_44;
    v_127 = nil;
v_44:
    if (v_127 == nil) goto v_42;
    v_129 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_128 = stack[-4];
    v_127 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_127 = list2star(v_129, v_128, v_127);
    env = stack[-6];
    v_127 = ncons(v_127);
    env = stack[-6];
    goto v_40;
v_42:
    v_128 = stack[-4];
    v_127 = static_cast<LispObject>(80)+TAG_FIXNUM; // 5
    {   LispObject fn = basic_elt(env, 8); // ps!:getv
    v_127 = (*qfn2(fn))(fn, v_128, v_127);
    }
    env = stack[-6];
    goto v_40;
    v_127 = nil;
v_40:
    stack[0] = v_127;
    v_127 = stack[-2];
    if (!consp(v_127)) goto v_80;
    else goto v_81;
v_80:
    v_127 = lisp_true;
    goto v_79;
v_81:
    v_127 = stack[-2];
    if (!car_legal(v_127)) v_128 = carerror(v_127); else
    v_128 = car(v_127);
    v_127 = nil;
    v_127 = Lneq_2(nil, v_128, v_127);
    env = stack[-6];
    goto v_79;
    v_127 = nil;
v_79:
    if (v_127 == nil) goto v_77;
    v_127 = stack[0];
    if (v_127 == nil) goto v_93;
    v_128 = stack[-3];
    v_127 = stack[-5];
    v_128 = difference2(v_128, v_127);
    env = stack[-6];
    v_127 = stack[-2];
    v_127 = cons(v_128, v_127);
    env = stack[-6];
    v_127 = ncons(v_127);
    env = stack[-6];
    v_127 = Lnconc(nil, stack[0], v_127);
    env = stack[-6];
    goto v_91;
v_93:
    stack[-1] = stack[-4];
    stack[0] = static_cast<LispObject>(80)+TAG_FIXNUM; // 5
    v_128 = stack[-3];
    v_127 = stack[-5];
    v_128 = difference2(v_128, v_127);
    env = stack[-6];
    v_127 = stack[-2];
    v_127 = cons(v_128, v_127);
    env = stack[-6];
    v_127 = ncons(v_127);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 9); // ps!:putv
    v_127 = (*qfn3(fn))(fn, stack[-1], stack[0], v_127);
    }
    env = stack[-6];
    goto v_91;
v_91:
    goto v_75;
v_77:
    v_128 = stack[-3];
    v_127 = stack[-5];
    if (equal(v_128, v_127)) goto v_114;
    else goto v_115;
v_114:
    stack[-1] = stack[-4];
    stack[0] = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_127 = stack[-3];
    v_127 = add1(v_127);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 9); // ps!:putv
    v_127 = (*qfn3(fn))(fn, stack[-1], stack[0], v_127);
    }
    env = stack[-6];
    goto v_75;
v_115:
v_75:
    v_129 = stack[-4];
    v_128 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_127 = stack[-3];
    {   LispObject fn = basic_elt(env, 9); // ps!:putv
    v_127 = (*qfn3(fn))(fn, v_129, v_128, v_127);
    }
    v_127 = nil;
    return onevalue(v_127);
}



// Code for ldf!-dep!-var

static LispObject CC_ldfKdepKvar(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    v_40 = v_2;
// end of prologue
    stack[-2] = nil;
    stack[-1] = v_40;
v_10:
    v_40 = stack[-1];
    if (v_40 == nil) goto v_14;
    else goto v_15;
v_14:
    goto v_9;
v_15:
    v_40 = stack[-1];
    if (!car_legal(v_40)) v_40 = carerror(v_40); else
    v_40 = car(v_40);
    stack[0] = v_40;
    v_40 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // ldt!-tvar
    v_41 = (*qfn1(fn))(fn, v_40);
    }
    env = stack[-3];
    v_40 = qvalue(basic_elt(env, 1)); // depl!*
    v_40 = Lassoc(nil, v_41, v_40);
    if (v_40 == nil) goto v_24;
    v_40 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // ldt!-tvar
    v_41 = (*qfn1(fn))(fn, v_40);
    }
    env = stack[-3];
    v_40 = qvalue(basic_elt(env, 1)); // depl!*
    v_40 = Lassoc(nil, v_41, v_40);
    if (!car_legal(v_40)) v_41 = cdrerror(v_40); else
    v_41 = cdr(v_40);
    v_40 = stack[-2];
    v_40 = Lappend_2(nil, v_41, v_40);
    env = stack[-3];
    stack[-2] = v_40;
    goto v_22;
v_24:
v_22:
    v_40 = stack[-1];
    if (!car_legal(v_40)) v_40 = cdrerror(v_40); else
    v_40 = cdr(v_40);
    stack[-1] = v_40;
    goto v_10;
v_9:
    v_40 = stack[-2];
    {
        LispObject fn = basic_elt(env, 3); // makeset
        return (*qfn1(fn))(fn, v_40);
    }
    return onevalue(v_40);
}



// Code for o!-nextarg

static LispObject CC_oKnextarg(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_91, v_92;
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
    v_91 = qvalue(basic_elt(env, 1)); // !*udebug
    if (v_91 == nil) goto v_10;
    v_91 = nil;
    {   LispObject fn = basic_elt(env, 11); // uprint
    v_91 = (*qfn1(fn))(fn, v_91);
    }
    env = stack[-3];
    goto v_8;
v_10:
v_8:
    v_92 = qvalue(basic_elt(env, 2)); // i
    v_91 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_92 == v_91) goto v_20;
    else goto v_21;
v_20:
    v_92 = qvalue(basic_elt(env, 2)); // i
    v_91 = qvalue(basic_elt(env, 3)); // upb
    v_91 = static_cast<LispObject>(lesseq2(v_92, v_91));
    v_91 = v_91 ? lisp_true : nil;
    env = stack[-3];
    goto v_19;
v_21:
    v_91 = nil;
    goto v_19;
    v_91 = nil;
v_19:
    if (v_91 == nil) goto v_17;
    v_91 = stack[-1];
    goto v_15;
v_17:
    v_92 = qvalue(basic_elt(env, 2)); // i
    v_91 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_92 == v_91) goto v_35;
    else goto v_36;
v_35:
    v_92 = qvalue(basic_elt(env, 2)); // i
    v_91 = qvalue(basic_elt(env, 3)); // upb
    v_91 = static_cast<LispObject>(lesseq2(v_92, v_91));
    v_91 = v_91 ? lisp_true : nil;
    env = stack[-3];
    goto v_34;
v_36:
    v_91 = nil;
    goto v_34;
    v_91 = nil;
v_34:
    if (v_91 == nil) goto v_32;
    v_92 = basic_elt(env, 4); // (null!-fn)
    v_91 = stack[-1];
    v_91 = cons(v_92, v_91);
    env = stack[-3];
    goto v_15;
v_32:
    v_91 = qvalue(basic_elt(env, 5)); // acontract
    if (v_91 == nil) goto v_49;
    v_92 = qvalue(basic_elt(env, 2)); // i
    v_91 = qvalue(basic_elt(env, 3)); // upb
    v_91 = static_cast<LispObject>(lesseq2(v_92, v_91));
    v_91 = v_91 ? lisp_true : nil;
    env = stack[-3];
    if (v_91 == nil) goto v_49;
    stack[-2] = qvalue(basic_elt(env, 6)); // op
    v_92 = stack[-1];
    v_91 = qvalue(basic_elt(env, 2)); // i
    {   LispObject fn = basic_elt(env, 12); // first0
    stack[0] = (*qfn2(fn))(fn, v_92, v_91);
    }
    env = stack[-3];
    v_92 = stack[-1];
    v_91 = qvalue(basic_elt(env, 2)); // i
    {   LispObject fn = basic_elt(env, 13); // last0
    v_91 = (*qfn2(fn))(fn, v_92, v_91);
    }
    env = stack[-3];
    v_91 = acons(stack[-2], stack[0], v_91);
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 14); // mval
    v_91 = (*qfn1(fn))(fn, v_91);
    }
    env = stack[-3];
    goto v_15;
v_49:
    v_91 = qvalue(basic_elt(env, 7)); // mcontract
    if (v_91 == nil) goto v_66;
    v_92 = qvalue(basic_elt(env, 2)); // i
    v_91 = qvalue(basic_elt(env, 3)); // upb
    v_91 = static_cast<LispObject>(lesseq2(v_92, v_91));
    v_91 = v_91 ? lisp_true : nil;
    env = stack[-3];
    if (v_91 == nil) goto v_66;
    stack[-2] = basic_elt(env, 8); // null!-fn
    v_92 = stack[-1];
    v_91 = qvalue(basic_elt(env, 2)); // i
    {   LispObject fn = basic_elt(env, 12); // first0
    stack[0] = (*qfn2(fn))(fn, v_92, v_91);
    }
    env = stack[-3];
    v_92 = stack[-1];
    v_91 = qvalue(basic_elt(env, 2)); // i
    {   LispObject fn = basic_elt(env, 13); // last0
    v_91 = (*qfn2(fn))(fn, v_92, v_91);
    }
    env = stack[-3];
    v_91 = acons(stack[-2], stack[0], v_91);
    env = stack[-3];
    goto v_15;
v_66:
    v_91 = qvalue(basic_elt(env, 9)); // expand
    if (v_91 == nil) goto v_82;
    v_91 = nil;
    setvalue(basic_elt(env, 9), v_91); // expand
    v_92 = qvalue(basic_elt(env, 10)); // identity
    v_91 = stack[-1];
    v_91 = cons(v_92, v_91);
    env = stack[-3];
    goto v_15;
v_82:
    v_91 = nil;
v_15:
    stack[0] = v_91;
    v_91 = qvalue(basic_elt(env, 2)); // i
    v_91 = add1(v_91);
    env = stack[-3];
    setvalue(basic_elt(env, 2), v_91); // i
    v_91 = stack[0];
    return onevalue(v_91);
}



// Code for e!*

static LispObject CC_eH(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_5;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// end of prologue
    v_5 = qvalue(basic_elt(env, 1)); // !:bprec!:
    {
        LispObject fn = basic_elt(env, 2); // !:e
        return (*qfn1(fn))(fn, v_5);
    }
}



// Code for physoppri

static LispObject CC_physoppri(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_190, v_191, v_192, v_193;
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
    stack[-6] = nil;
    v_190 = stack[-8];
    if (symbolp(v_190)) goto v_13;
    else goto v_14;
v_13:
    v_190 = stack[-8];
    goto v_12;
v_14:
    v_190 = stack[-8];
    if (!car_legal(v_190)) v_190 = carerror(v_190); else
    v_190 = car(v_190);
    goto v_12;
    v_190 = nil;
v_12:
    stack[-9] = v_190;
    v_190 = stack[-8];
    if (symbolp(v_190)) goto v_23;
    else goto v_24;
v_23:
    v_190 = nil;
    goto v_22;
v_24:
    v_190 = stack[-8];
    if (!car_legal(v_190)) v_190 = cdrerror(v_190); else
    v_190 = cdr(v_190);
    goto v_22;
    v_190 = nil;
v_22:
    stack[-7] = v_190;
    stack[-5] = basic_elt(env, 0); // physoppri
    stack[-4] = basic_elt(env, 1); // "x= "
    stack[-3] = stack[-9];
    stack[-2] = basic_elt(env, 2); // " y= "
    stack[-1] = stack[-7];
    stack[0] = basic_elt(env, 3); // "nat= "
    v_192 = basic_elt(env, 4); // !*nat
    v_191 = basic_elt(env, 5); // " contract= "
    v_190 = basic_elt(env, 6); // !*contract
    v_190 = list3(v_192, v_191, v_190);
    env = stack[-10];
    v_190 = list3star(stack[-2], stack[-1], stack[0], v_190);
    env = stack[-10];
    v_190 = list3star(stack[-5], stack[-4], stack[-3], v_190);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 18); // trwrite
    v_190 = (*qfn1(fn))(fn, v_190);
    }
    env = stack[-10];
    v_190 = qvalue(basic_elt(env, 4)); // !*nat
    if (v_190 == nil) goto v_47;
    v_190 = qvalue(basic_elt(env, 6)); // !*contract
    if (v_190 == nil) goto v_50;
    else goto v_47;
v_50:
    goto v_10;
v_47:
    stack[0] = basic_elt(env, 7); // !"
    v_190 = stack[-9];
    v_190 = Lexplode(nil, v_190);
    env = stack[-10];
    stack[0] = cons(stack[0], v_190);
    env = stack[-10];
    v_190 = basic_elt(env, 7); // !"
    v_190 = ncons(v_190);
    env = stack[-10];
    v_190 = Lappend_2(nil, stack[0], v_190);
    env = stack[-10];
    v_190 = Lcompress(nil, v_190);
    env = stack[-10];
    stack[-9] = v_190;
    v_190 = stack[-9];
    {   LispObject fn = basic_elt(env, 19); // prin2!*
    v_190 = (*qfn1(fn))(fn, v_190);
    }
    env = stack[-10];
    v_190 = stack[-7];
    if (v_190 == nil) goto v_65;
    v_190 = basic_elt(env, 8); // "("
    {   LispObject fn = basic_elt(env, 19); // prin2!*
    v_190 = (*qfn1(fn))(fn, v_190);
    }
    env = stack[-10];
    v_190 = nil;
    setvalue(basic_elt(env, 9), v_190); // obrkp!*
    v_192 = basic_elt(env, 10); // !*comma!*
    v_191 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_190 = stack[-7];
    {   LispObject fn = basic_elt(env, 20); // inprint
    v_190 = (*qfn3(fn))(fn, v_192, v_191, v_190);
    }
    env = stack[-10];
    v_190 = lisp_true;
    setvalue(basic_elt(env, 9), v_190); // obrkp!*
    v_190 = basic_elt(env, 11); // ")"
    {   LispObject fn = basic_elt(env, 19); // prin2!*
    v_190 = (*qfn1(fn))(fn, v_190);
    }
    goto v_63;
v_65:
v_63:
    v_190 = stack[-8];
    goto v_9;
v_10:
    v_190 = stack[-9];
    v_190 = Lexplode(nil, v_190);
    env = stack[-10];
    v_190 = Lreverse(nil, v_190);
    env = stack[-10];
    stack[-9] = v_190;
    v_190 = stack[-9];
    v_191 = Llength(nil, v_190);
    env = stack[-10];
    v_190 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_190 = static_cast<LispObject>(greaterp2(v_191, v_190));
    v_190 = v_190 ? lisp_true : nil;
    env = stack[-10];
    if (v_190 == nil) goto v_84;
    v_190 = stack[-9];
    if (!car_legal(v_190)) v_190 = cdrerror(v_190); else
    v_190 = cdr(v_190);
    if (!car_legal(v_190)) v_191 = carerror(v_190); else
    v_191 = car(v_190);
    v_190 = basic_elt(env, 12); // !-
    if (v_191 == v_190) goto v_91;
    else goto v_92;
v_91:
    v_191 = basic_elt(env, 12); // !-
    v_190 = basic_elt(env, 13); // !1
    v_190 = list2(v_191, v_190);
    env = stack[-10];
    v_190 = Lcompress(nil, v_190);
    env = stack[-10];
    stack[-6] = v_190;
    v_191 = stack[-9];
    v_190 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    {   LispObject fn = basic_elt(env, 21); // pnth
    v_190 = (*qfn2(fn))(fn, v_191, v_190);
    }
    env = stack[-10];
    v_190 = Lreverse(nil, v_190);
    env = stack[-10];
    v_190 = Lcompress(nil, v_190);
    env = stack[-10];
    stack[-9] = v_190;
    goto v_90;
v_92:
    v_190 = stack[-9];
    if (!car_legal(v_190)) v_191 = carerror(v_190); else
    v_191 = car(v_190);
    v_190 = basic_elt(env, 14); // !+
    if (v_191 == v_190) goto v_107;
    else goto v_108;
v_107:
    v_190 = basic_elt(env, 14); // !+
    stack[-6] = v_190;
    v_191 = stack[-9];
    v_190 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    {   LispObject fn = basic_elt(env, 21); // pnth
    v_190 = (*qfn2(fn))(fn, v_191, v_190);
    }
    env = stack[-10];
    v_190 = Lreverse(nil, v_190);
    env = stack[-10];
    v_190 = Lcompress(nil, v_190);
    env = stack[-10];
    stack[-9] = v_190;
    goto v_90;
v_108:
    v_190 = stack[-9];
    v_190 = Lreverse(nil, v_190);
    env = stack[-10];
    v_190 = Lcompress(nil, v_190);
    env = stack[-10];
    stack[-9] = v_190;
    goto v_90;
v_90:
    goto v_82;
v_84:
    v_190 = stack[-9];
    v_190 = Lreverse(nil, v_190);
    env = stack[-10];
    v_190 = Lcompress(nil, v_190);
    env = stack[-10];
    stack[-9] = v_190;
    goto v_82;
v_82:
    stack[0] = basic_elt(env, 7); // !"
    v_190 = stack[-9];
    v_190 = Lexplode(nil, v_190);
    env = stack[-10];
    stack[0] = cons(stack[0], v_190);
    env = stack[-10];
    v_190 = basic_elt(env, 7); // !"
    v_190 = ncons(v_190);
    env = stack[-10];
    v_190 = Lappend_2(nil, stack[0], v_190);
    env = stack[-10];
    v_190 = Lcompress(nil, v_190);
    env = stack[-10];
    stack[-9] = v_190;
    v_190 = stack[-7];
    if (v_190 == nil) goto v_140;
    v_191 = stack[-9];
    v_190 = stack[-7];
    v_190 = cons(v_191, v_190);
    env = stack[-10];
    goto v_138;
v_140:
    v_190 = stack[-9];
    goto v_138;
    v_190 = nil;
v_138:
    stack[-3] = v_190;
    stack[-2] = basic_elt(env, 0); // physoppri
    stack[-1] = basic_elt(env, 1); // "x= "
    stack[0] = stack[-9];
    v_193 = basic_elt(env, 15); // " z= "
    v_192 = stack[-6];
    v_191 = basic_elt(env, 16); // " x1= "
    v_190 = stack[-3];
    v_190 = list4(v_193, v_192, v_191, v_190);
    env = stack[-10];
    v_190 = list3star(stack[-2], stack[-1], stack[0], v_190);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 18); // trwrite
    v_190 = (*qfn1(fn))(fn, v_190);
    }
    env = stack[-10];
    v_190 = stack[-6];
    if (v_190 == nil) goto v_161;
    v_192 = basic_elt(env, 17); // expt
    v_191 = stack[-3];
    v_190 = stack[-6];
    v_191 = list3(v_192, v_191, v_190);
    env = stack[-10];
    v_190 = basic_elt(env, 17); // expt
    if (!symbolp(v_190)) v_190 = nil;
    else { v_190 = qfastgets(v_190);
           if (v_190 != nil) { v_190 = elt(v_190, 23); // infix
#ifdef RECORD_GET
             if (v_190 != SPID_NOPROP)
                record_get(elt(fastget_names, 23), 1);
             else record_get(elt(fastget_names, 23), 0),
                v_190 = nil; }
           else record_get(elt(fastget_names, 23), 0); }
#else
             if (v_190 == SPID_NOPROP) v_190 = nil; }}
#endif
    {   LispObject fn = basic_elt(env, 22); // exptpri
    v_190 = (*qfn2(fn))(fn, v_191, v_190);
    }
    goto v_159;
v_161:
    v_190 = stack[-9];
    {   LispObject fn = basic_elt(env, 19); // prin2!*
    v_190 = (*qfn1(fn))(fn, v_190);
    }
    env = stack[-10];
    v_190 = stack[-7];
    if (v_190 == nil) goto v_177;
    v_190 = basic_elt(env, 8); // "("
    {   LispObject fn = basic_elt(env, 19); // prin2!*
    v_190 = (*qfn1(fn))(fn, v_190);
    }
    env = stack[-10];
    v_190 = nil;
    setvalue(basic_elt(env, 9), v_190); // obrkp!*
    v_192 = basic_elt(env, 10); // !*comma!*
    v_191 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_190 = stack[-7];
    {   LispObject fn = basic_elt(env, 20); // inprint
    v_190 = (*qfn3(fn))(fn, v_192, v_191, v_190);
    }
    env = stack[-10];
    v_190 = lisp_true;
    setvalue(basic_elt(env, 9), v_190); // obrkp!*
    v_190 = basic_elt(env, 11); // ")"
    {   LispObject fn = basic_elt(env, 19); // prin2!*
    v_190 = (*qfn1(fn))(fn, v_190);
    }
    goto v_175;
v_177:
v_175:
    goto v_159;
v_159:
    v_190 = stack[-8];
v_9:
    return onevalue(v_190);
}



// Code for ev!-poles

static LispObject CC_evKpoles(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_27, v_28, v_29, v_30;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_28 = v_3;
    v_29 = v_2;
// end of prologue
v_7:
    v_27 = v_29;
    if (v_27 == nil) goto v_10;
    else goto v_11;
v_10:
    v_27 = nil;
    goto v_6;
v_11:
    v_27 = v_29;
    if (!car_legal(v_27)) v_30 = carerror(v_27); else
    v_30 = car(v_27);
    v_27 = v_28;
    v_27 = Lassoc(nil, v_30, v_27);
    if (!car_legal(v_27)) v_30 = cdrerror(v_27); else
    v_30 = cdr(v_27);
    v_27 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_30 == v_27) goto v_14;
    else goto v_15;
v_14:
    v_27 = v_29;
    if (!car_legal(v_27)) v_27 = cdrerror(v_27); else
    v_27 = cdr(v_27);
    v_29 = v_27;
    goto v_7;
v_15:
    v_27 = v_29;
    goto v_6;
    v_27 = nil;
v_6:
    return onevalue(v_27);
}



// Code for quotofd

static LispObject CC_quotofd(LispObject env,
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    stack[-1] = v_3;
    stack[-2] = v_2;
// end of prologue
    stack[-3] = nil;
v_8:
    v_48 = stack[-2];
    if (v_48 == nil) goto v_11;
    else goto v_12;
v_11:
    v_48 = stack[-3];
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn1(fn))(fn, v_48);
    }
v_12:
    v_48 = stack[-2];
    if (!consp(v_48)) goto v_20;
    else goto v_21;
v_20:
    v_48 = lisp_true;
    goto v_19;
v_21:
    v_48 = stack[-2];
    if (!car_legal(v_48)) v_48 = carerror(v_48); else
    v_48 = car(v_48);
    v_48 = (consp(v_48) ? nil : lisp_true);
    goto v_19;
    v_48 = nil;
v_19:
    if (v_48 == nil) goto v_17;
    stack[0] = stack[-3];
    v_49 = stack[-2];
    v_48 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // quotodd
    v_48 = (*qfn2(fn))(fn, v_49, v_48);
    }
    env = stack[-4];
    {
        LispObject v_54 = stack[0];
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn2(fn))(fn, v_54, v_48);
    }
v_17:
    v_48 = stack[-2];
    if (!car_legal(v_48)) v_48 = carerror(v_48); else
    v_48 = car(v_48);
    if (!car_legal(v_48)) stack[0] = carerror(v_48); else
    stack[0] = car(v_48);
    v_48 = stack[-2];
    if (!car_legal(v_48)) v_48 = carerror(v_48); else
    v_48 = car(v_48);
    if (!car_legal(v_48)) v_49 = cdrerror(v_48); else
    v_49 = cdr(v_48);
    v_48 = stack[-1];
    {   LispObject fn = basic_elt(env, 0); // quotofd
    v_49 = (*qfn2(fn))(fn, v_49, v_48);
    }
    env = stack[-4];
    v_48 = stack[-3];
    v_48 = acons(stack[0], v_49, v_48);
    env = stack[-4];
    stack[-3] = v_48;
    v_48 = stack[-2];
    if (!car_legal(v_48)) v_48 = cdrerror(v_48); else
    v_48 = cdr(v_48);
    stack[-2] = v_48;
    goto v_8;
    v_48 = nil;
    return onevalue(v_48);
}



// Code for negex

static LispObject CC_negex(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[-1] = v_2;
// end of prologue
    stack[-2] = nil;
v_7:
    v_28 = stack[-1];
    if (v_28 == nil) goto v_10;
    else goto v_11;
v_10:
    v_28 = stack[-2];
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn1(fn))(fn, v_28);
    }
v_11:
    v_28 = stack[-1];
    if (!car_legal(v_28)) v_28 = carerror(v_28); else
    v_28 = car(v_28);
    if (!car_legal(v_28)) stack[0] = carerror(v_28); else
    stack[0] = car(v_28);
    v_28 = stack[-1];
    if (!car_legal(v_28)) v_28 = carerror(v_28); else
    v_28 = car(v_28);
    if (!car_legal(v_28)) v_28 = cdrerror(v_28); else
    v_28 = cdr(v_28);
    {   LispObject fn = basic_elt(env, 2); // negf
    v_29 = (*qfn1(fn))(fn, v_28);
    }
    env = stack[-3];
    v_28 = stack[-2];
    v_28 = acons(stack[0], v_29, v_28);
    env = stack[-3];
    stack[-2] = v_28;
    v_28 = stack[-1];
    if (!car_legal(v_28)) v_28 = cdrerror(v_28); else
    v_28 = cdr(v_28);
    stack[-1] = v_28;
    goto v_7;
    v_28 = nil;
    return onevalue(v_28);
}



// Code for revalpart

static LispObject CC_revalpart(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_288, v_289, v_290;
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
    stack[0] = v_2;
// end of prologue
    v_288 = stack[0];
    if (v_288 == nil) goto v_6;
    else goto v_7;
v_6:
    v_290 = basic_elt(env, 1); // alg
    v_289 = static_cast<LispObject>(3216)+TAG_FIXNUM; // 201
    v_288 = basic_elt(env, 2); // "part called without arguments"
    {
        LispObject fn = basic_elt(env, 10); // rerror
        return (*qfn3(fn))(fn, v_290, v_289, v_288);
    }
v_7:
// Binding !*intstr
// FLUIDBIND: reloadenv=11 litvec-offset=3 saveloc=10
{   bind_fluid_stack bind_fluid_var(-11, 3, -10);
    setvalue(basic_elt(env, 3), nil); // !*intstr
    stack[-9] = nil;
    v_288 = lisp_true;
    setvalue(basic_elt(env, 3), v_288); // !*intstr
    v_288 = stack[0];
    if (!car_legal(v_288)) v_288 = carerror(v_288); else
    v_288 = car(v_288);
    {   LispObject fn = basic_elt(env, 11); // getrtype
    v_289 = (*qfn1(fn))(fn, v_288);
    }
    env = stack[-11];
    stack[-6] = v_289;
    v_288 = basic_elt(env, 4); // list
    if (v_289 == v_288) goto v_26;
    else goto v_27;
v_26:
    v_288 = stack[0];
    if (!car_legal(v_288)) v_288 = carerror(v_288); else
    v_288 = car(v_288);
    if (!consp(v_288)) goto v_39;
    v_288 = stack[0];
    if (!car_legal(v_288)) v_288 = carerror(v_288); else
    v_288 = car(v_288);
    if (!car_legal(v_288)) v_289 = carerror(v_288); else
    v_289 = car(v_288);
    v_288 = basic_elt(env, 5); // listfn
    v_288 = get(v_289, v_288);
    env = stack[-11];
    goto v_37;
v_39:
    v_288 = nil;
    goto v_37;
    v_288 = nil;
v_37:
    if (v_288 == nil) goto v_35;
    v_288 = stack[0];
    if (!car_legal(v_288)) v_288 = carerror(v_288); else
    v_288 = car(v_288);
    {   LispObject fn = basic_elt(env, 12); // reval
    v_288 = (*qfn1(fn))(fn, v_288);
    }
    env = stack[-11];
    goto v_33;
v_35:
    v_288 = stack[0];
    if (!car_legal(v_288)) v_288 = carerror(v_288); else
    v_288 = car(v_288);
    {   LispObject fn = basic_elt(env, 13); // listeval0
    v_288 = (*qfn1(fn))(fn, v_288);
    }
    env = stack[-11];
    goto v_33;
    v_288 = nil;
v_33:
    goto v_25;
v_27:
    v_288 = stack[0];
    if (!car_legal(v_288)) v_288 = carerror(v_288); else
    v_288 = car(v_288);
    {   LispObject fn = basic_elt(env, 12); // reval
    v_288 = (*qfn1(fn))(fn, v_288);
    }
    env = stack[-11];
    goto v_25;
    v_288 = nil;
v_25:
    stack[-8] = v_288;
    v_288 = nil;
    setvalue(basic_elt(env, 3), v_288); // !*intstr
    v_288 = stack[0];
    if (!car_legal(v_288)) v_288 = cdrerror(v_288); else
    v_288 = cdr(v_288);
    stack[-7] = v_288;
v_68:
    v_288 = stack[-7];
    if (v_288 == nil) goto v_71;
    else goto v_72;
v_71:
    goto v_67;
v_72:
    stack[-5] = nil;
    stack[-4] = nil;
    v_289 = stack[-8];
    v_288 = basic_elt(env, 6); // !*hold
    v_288 = Leqcar(nil, v_289, v_288);
    env = stack[-11];
    stack[-3] = v_288;
    v_288 = stack[-8];
    if (!consp(v_288)) goto v_85;
    else goto v_86;
v_85:
    v_289 = stack[-8];
    v_288 = stack[-7];
    if (!car_legal(v_288)) v_288 = carerror(v_288); else
    v_288 = car(v_288);
    {   LispObject fn = basic_elt(env, 14); // parterr2
    v_288 = (*qfn2(fn))(fn, v_289, v_288);
    }
    env = stack[-11];
    v_288 = lisp_true;
    stack[-9] = v_288;
    goto v_84;
v_86:
    v_288 = stack[-7];
    if (!car_legal(v_288)) v_288 = carerror(v_288); else
    v_288 = car(v_288);
    {   LispObject fn = basic_elt(env, 12); // reval
    v_288 = (*qfn1(fn))(fn, v_288);
    }
    env = stack[-11];
    stack[-5] = v_288;
    if (is_number(v_288)) goto v_94;
    stack[-2] = basic_elt(env, 7); // "Invalid argument"
    v_288 = stack[-7];
    if (!car_legal(v_288)) stack[-1] = carerror(v_288); else
    stack[-1] = car(v_288);
    stack[0] = basic_elt(env, 8); // "to part"
    v_289 = nil;
    v_288 = lisp_true;
    v_288 = list2(v_289, v_288);
    env = stack[-11];
    {   LispObject fn = basic_elt(env, 15); // msgpri
    v_288 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_288);
    }
    env = stack[-11];
    goto v_84;
v_94:
    v_288 = stack[-8];
    if (!car_legal(v_288)) v_289 = carerror(v_288); else
    v_289 = car(v_288);
    v_288 = basic_elt(env, 9); // partop
    v_288 = get(v_289, v_288);
    env = stack[-11];
    stack[-4] = v_288;
    if (v_288 == nil) goto v_107;
    v_290 = stack[-4];
    v_289 = stack[-8];
    v_288 = stack[-5];
    v_288 = Lapply2(nil, v_290, v_289, v_288);
    env = stack[-11];
    stack[-8] = v_288;
    v_288 = stack[-7];
    if (!car_legal(v_288)) v_288 = cdrerror(v_288); else
    v_288 = cdr(v_288);
    stack[-7] = v_288;
    goto v_79;
v_107:
    v_289 = stack[-5];
    v_288 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_289 == v_288) goto v_118;
    else goto v_119;
v_118:
    v_288 = stack[-8];
    if (!car_legal(v_288)) v_288 = carerror(v_288); else
    v_288 = car(v_288);
    stack[0] = v_288;
    v_288 = stack[0];
    {   LispObject fn = basic_elt(env, 11); // getrtype
    v_289 = (*qfn1(fn))(fn, v_288);
    }
    env = stack[-11];
    v_288 = basic_elt(env, 4); // list
    if (v_289 == v_288) goto v_131;
    else goto v_132;
v_131:
    v_288 = basic_elt(env, 4); // list
    stack[-6] = v_288;
    goto v_130;
v_132:
    v_288 = nil;
    goto v_130;
    v_288 = nil;
v_130:
    if (v_288 == nil) goto v_128;
    v_288 = stack[0];
    {   LispObject fn = basic_elt(env, 13); // listeval0
    v_288 = (*qfn1(fn))(fn, v_288);
    }
    env = stack[-11];
    goto v_126;
v_128:
    v_289 = stack[-6];
    v_288 = basic_elt(env, 4); // list
    if (v_289 == v_288) goto v_142;
    else goto v_143;
v_142:
    v_288 = lisp_true;
    setvalue(basic_elt(env, 3), v_288); // !*intstr
    v_288 = stack[0];
    {   LispObject fn = basic_elt(env, 12); // reval
    v_288 = (*qfn1(fn))(fn, v_288);
    }
    env = stack[-11];
    stack[0] = v_288;
    v_288 = nil;
    stack[-6] = v_288;
    setvalue(basic_elt(env, 3), v_288); // !*intstr
    v_288 = stack[0];
    goto v_126;
v_143:
    v_288 = stack[0];
    goto v_126;
    v_288 = nil;
v_126:
    stack[-8] = v_288;
    v_288 = nil;
    stack[-7] = v_288;
    goto v_79;
v_119:
    v_289 = stack[-5];
    v_288 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_288 = static_cast<LispObject>(lessp2(v_289, v_288));
    v_288 = v_288 ? lisp_true : nil;
    env = stack[-11];
    if (v_288 == nil) goto v_156;
    v_288 = stack[-5];
    v_288 = negate(v_288);
    env = stack[-11];
    stack[-5] = v_288;
    v_288 = stack[-8];
    if (!car_legal(v_288)) v_288 = cdrerror(v_288); else
    v_288 = cdr(v_288);
    v_288 = Lreverse(nil, v_288);
    env = stack[-11];
    stack[-4] = v_288;
    goto v_84;
v_156:
    v_288 = stack[-8];
    if (!car_legal(v_288)) v_288 = cdrerror(v_288); else
    v_288 = cdr(v_288);
    stack[-4] = v_288;
    goto v_84;
v_84:
    v_288 = stack[-3];
    if (v_288 == nil) goto v_172;
    v_288 = stack[-4];
    if (!car_legal(v_288)) v_288 = carerror(v_288); else
    v_288 = car(v_288);
    stack[-4] = v_288;
    v_288 = stack[-4];
    if (!consp(v_288)) goto v_178;
    else goto v_179;
v_178:
    v_289 = stack[-8];
    v_288 = stack[-7];
    if (!car_legal(v_288)) v_288 = carerror(v_288); else
    v_288 = car(v_288);
    {   LispObject fn = basic_elt(env, 14); // parterr2
    v_288 = (*qfn2(fn))(fn, v_289, v_288);
    }
    env = stack[-11];
    v_288 = lisp_true;
    stack[-9] = v_288;
    goto v_177;
v_179:
    v_288 = stack[-4];
    if (!car_legal(v_288)) v_288 = cdrerror(v_288); else
    v_288 = cdr(v_288);
    stack[-4] = v_288;
    goto v_177;
v_177:
    goto v_170;
v_172:
v_170:
    v_288 = stack[-9];
    if (v_288 == nil) goto v_193;
    goto v_191;
v_193:
    v_288 = stack[-4];
    v_289 = Llength(nil, v_288);
    env = stack[-11];
    v_288 = stack[-5];
    v_288 = static_cast<LispObject>(lessp2(v_289, v_288));
    v_288 = v_288 ? lisp_true : nil;
    env = stack[-11];
    if (v_288 == nil) goto v_197;
    v_289 = stack[-8];
    v_288 = stack[-7];
    if (!car_legal(v_288)) v_288 = carerror(v_288); else
    v_288 = car(v_288);
    {   LispObject fn = basic_elt(env, 14); // parterr2
    v_288 = (*qfn2(fn))(fn, v_289, v_288);
    }
    env = stack[-11];
    v_288 = lisp_true;
    stack[-9] = v_288;
    goto v_191;
v_197:
    v_288 = stack[-3];
    if (v_288 == nil) goto v_208;
    v_289 = stack[-4];
    v_288 = stack[-5];
    {   LispObject fn = basic_elt(env, 16); // nth
    v_288 = (*qfn2(fn))(fn, v_289, v_288);
    }
    env = stack[-11];
    stack[-8] = v_288;
    v_288 = stack[-8];
    if (!consp(v_288)) goto v_220;
    v_289 = stack[-8];
    v_288 = basic_elt(env, 6); // !*hold
    v_288 = Leqcar(nil, v_289, v_288);
    env = stack[-11];
    v_288 = (v_288 == nil ? lisp_true : nil);
    goto v_218;
v_220:
    v_288 = nil;
    goto v_218;
    v_288 = nil;
v_218:
    if (v_288 == nil) goto v_216;
    v_289 = basic_elt(env, 6); // !*hold
    v_288 = stack[-8];
    v_288 = list2(v_289, v_288);
    env = stack[-11];
    stack[-8] = v_288;
    goto v_214;
v_216:
v_214:
    goto v_191;
v_208:
    v_289 = stack[-4];
    v_288 = stack[-5];
    {   LispObject fn = basic_elt(env, 16); // nth
    v_288 = (*qfn2(fn))(fn, v_289, v_288);
    }
    env = stack[-11];
    stack[0] = v_288;
    v_288 = stack[0];
    {   LispObject fn = basic_elt(env, 11); // getrtype
    v_289 = (*qfn1(fn))(fn, v_288);
    }
    env = stack[-11];
    v_288 = basic_elt(env, 4); // list
    if (v_289 == v_288) goto v_244;
    else goto v_245;
v_244:
    v_288 = basic_elt(env, 4); // list
    stack[-6] = v_288;
    goto v_243;
v_245:
    v_288 = nil;
    goto v_243;
    v_288 = nil;
v_243:
    if (v_288 == nil) goto v_241;
    v_288 = stack[0];
    {   LispObject fn = basic_elt(env, 13); // listeval0
    v_288 = (*qfn1(fn))(fn, v_288);
    }
    env = stack[-11];
    goto v_239;
v_241:
    v_289 = stack[-6];
    v_288 = basic_elt(env, 4); // list
    if (v_289 == v_288) goto v_255;
    else goto v_256;
v_255:
    v_288 = lisp_true;
    setvalue(basic_elt(env, 3), v_288); // !*intstr
    v_288 = stack[0];
    {   LispObject fn = basic_elt(env, 12); // reval
    v_288 = (*qfn1(fn))(fn, v_288);
    }
    env = stack[-11];
    stack[0] = v_288;
    v_288 = nil;
    stack[-6] = v_288;
    setvalue(basic_elt(env, 3), v_288); // !*intstr
    v_288 = stack[0];
    goto v_239;
v_256:
    v_288 = stack[0];
    goto v_239;
    v_288 = nil;
v_239:
    stack[-8] = v_288;
    goto v_191;
v_191:
    v_288 = stack[-9];
    if (v_288 == nil) goto v_270;
    v_288 = nil;
    goto v_268;
v_270:
    v_288 = stack[-7];
    if (!car_legal(v_288)) v_288 = cdrerror(v_288); else
    v_288 = cdr(v_288);
    goto v_268;
    v_288 = nil;
v_268:
    stack[-7] = v_288;
v_79:
    goto v_68;
v_67:
    v_288 = stack[-9];
    if (v_288 == nil) goto v_280;
    v_288 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_278;
v_280:
    v_288 = stack[-8];
    {   LispObject fn = basic_elt(env, 12); // reval
    v_288 = (*qfn1(fn))(fn, v_288);
    }
    goto v_278;
    v_288 = nil;
v_278:
    ;}  // end of a binding scope
    goto v_5;
    v_288 = nil;
v_5:
    return onevalue(v_288);
}



// Code for prepcadr

static LispObject CC_prepcadr(LispObject env,
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
    if (!car_legal(v_8)) v_8 = cdrerror(v_8); else
    v_8 = cdr(v_8);
    if (!car_legal(v_8)) v_8 = carerror(v_8); else
    v_8 = car(v_8);
    {
        LispObject fn = basic_elt(env, 1); // prepsq
        return (*qfn1(fn))(fn, v_8);
    }
}



// Code for ra_wrapper

static LispObject CC_ra_wrapper(LispObject env,
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    stack[-2] = v_3;
    v_43 = v_2;
// end of prologue
    v_42 = qvalue(basic_elt(env, 1)); // dmode!*
    if (!symbolp(v_42)) v_42 = nil;
    else { v_42 = qfastgets(v_42);
           if (v_42 != nil) { v_42 = elt(v_42, 8); // dname
#ifdef RECORD_GET
             if (v_42 != SPID_NOPROP)
                record_get(elt(fastget_names, 8), 1);
             else record_get(elt(fastget_names, 8), 0),
                v_42 = nil; }
           else record_get(elt(fastget_names, 8), 0); }
#else
             if (v_42 == SPID_NOPROP) v_42 = nil; }}
#endif
    stack[-3] = v_42;
    stack[-1] = basic_elt(env, 2); // ra_wrapper1
    v_42 = v_43;
    stack[0] = Lmkquote(nil, v_42);
    env = stack[-4];
    v_42 = stack[-2];
    stack[-2] = Lmkquote(nil, v_42);
    env = stack[-4];
    v_42 = stack[-3];
    v_42 = Lmkquote(nil, v_42);
    env = stack[-4];
    v_44 = list4(stack[-1], stack[0], stack[-2], v_42);
    env = stack[-4];
    v_43 = lisp_true;
    v_42 = qvalue(basic_elt(env, 3)); // !*backtrace
    {   LispObject fn = basic_elt(env, 5); // errorset
    v_42 = (*qfn3(fn))(fn, v_44, v_43, v_42);
    }
    env = stack[-4];
    stack[0] = v_42;
    v_42 = stack[0];
    {   LispObject fn = basic_elt(env, 6); // errorp
    v_42 = (*qfn1(fn))(fn, v_42);
    }
    env = stack[-4];
    if (v_42 == nil) goto v_25;
    v_43 = basic_elt(env, 4); // "caught error - restoring domain mode"
    v_42 = stack[-3];
    v_42 = list2(v_43, v_42);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 7); // lprim
    v_42 = (*qfn1(fn))(fn, v_42);
    }
    env = stack[-4];
    v_42 = stack[-3];
    if (v_42 == nil) goto v_35;
    v_42 = stack[-3];
    {   LispObject fn = basic_elt(env, 8); // on1
    v_42 = (*qfn1(fn))(fn, v_42);
    }
    env = stack[-4];
    goto v_33;
v_35:
v_33:
    Lerror_0(nil);
    goto v_23;
v_25:
v_23:
    v_42 = stack[0];
    if (!car_legal(v_42)) v_42 = carerror(v_42); else
    v_42 = car(v_42);
    return onevalue(v_42);
}



// Code for qqe_simplbtat

static LispObject CC_qqe_simplbtat(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_79, v_80;
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
    v_79 = v_3;
    stack[-2] = v_2;
// end of prologue
    v_79 = stack[-2];
    {   LispObject fn = basic_elt(env, 5); // rl_prepat
    v_79 = (*qfn1(fn))(fn, v_79);
    }
    env = stack[-4];
    stack[-3] = v_79;
    v_79 = stack[-2];
    {   LispObject fn = basic_elt(env, 6); // qqe_op
    v_79 = (*qfn1(fn))(fn, v_79);
    }
    env = stack[-4];
    stack[0] = v_79;
    v_79 = stack[-3];
    {   LispObject fn = basic_elt(env, 7); // qqe_arg2l
    v_79 = (*qfn1(fn))(fn, v_79);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 8); // qqe_eta!-in!-term
    v_79 = (*qfn1(fn))(fn, v_79);
    }
    env = stack[-4];
    stack[-1] = v_79;
    v_79 = stack[-3];
    {   LispObject fn = basic_elt(env, 9); // qqe_arg2r
    v_79 = (*qfn1(fn))(fn, v_79);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 8); // qqe_eta!-in!-term
    v_79 = (*qfn1(fn))(fn, v_79);
    }
    env = stack[-4];
    v_80 = v_79;
    v_79 = stack[-1];
    if (v_79 == nil) goto v_24;
    v_79 = v_80;
    if (v_79 == nil) goto v_27;
    else goto v_24;
v_27:
    v_80 = stack[0];
    v_79 = basic_elt(env, 1); // neq
    if (v_80 == v_79) goto v_32;
    v_79 = basic_elt(env, 2); // false
    goto v_10;
v_32:
    v_79 = basic_elt(env, 3); // true
    goto v_10;
    goto v_22;
v_24:
    v_79 = v_80;
    if (v_79 == nil) goto v_41;
    v_79 = stack[-1];
    if (v_79 == nil) goto v_44;
    else goto v_41;
v_44:
    v_80 = stack[0];
    v_79 = basic_elt(env, 1); // neq
    if (v_80 == v_79) goto v_49;
    v_79 = basic_elt(env, 2); // false
    goto v_10;
v_49:
    v_79 = basic_elt(env, 3); // true
    goto v_10;
    goto v_22;
v_41:
    v_79 = stack[-1];
    if (v_79 == nil) goto v_58;
    v_79 = v_80;
    if (v_79 == nil) goto v_58;
    v_79 = stack[-2];
    {   LispObject fn = basic_elt(env, 6); // qqe_op
    v_80 = (*qfn1(fn))(fn, v_79);
    }
    env = stack[-4];
    v_79 = basic_elt(env, 4); // equal
    if (v_80 == v_79) goto v_65;
    else goto v_66;
v_65:
    v_79 = basic_elt(env, 3); // true
    goto v_10;
v_66:
    v_79 = basic_elt(env, 2); // false
    goto v_10;
    goto v_22;
v_58:
    v_79 = stack[-3];
    {
        LispObject fn = basic_elt(env, 10); // rl_simpat
        return (*qfn1(fn))(fn, v_79);
    }
v_22:
    v_79 = nil;
v_10:
    return onevalue(v_79);
}



// Code for pasf_ordatp

static LispObject CC_pasf_ordatp(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_83, v_84, v_85, v_86, v_87, v_88;
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
    v_86 = v_3;
    v_87 = v_2;
// end of prologue
    v_83 = v_87;
    if (!car_legal(v_83)) v_83 = cdrerror(v_83); else
    v_83 = cdr(v_83);
    if (!car_legal(v_83)) v_83 = carerror(v_83); else
    v_83 = car(v_83);
    v_88 = v_83;
    v_83 = v_86;
    if (!car_legal(v_83)) v_83 = cdrerror(v_83); else
    v_83 = cdr(v_83);
    if (!car_legal(v_83)) v_83 = carerror(v_83); else
    v_83 = car(v_83);
    v_85 = v_83;
    v_84 = v_88;
    v_83 = v_85;
    if (equal(v_84, v_83)) goto v_18;
    v_83 = v_88;
    v_84 = v_85;
    {
        LispObject fn = basic_elt(env, 3); // ordp
        return (*qfn2(fn))(fn, v_83, v_84);
    }
v_18:
    v_84 = v_87;
    v_83 = basic_elt(env, 1); // true
    if (v_84 == v_83) goto v_31;
    else goto v_32;
v_31:
    v_83 = lisp_true;
    goto v_30;
v_32:
    v_84 = v_87;
    v_83 = basic_elt(env, 2); // false
    v_83 = (v_84 == v_83 ? lisp_true : nil);
    goto v_30;
    v_83 = nil;
v_30:
    if (v_83 == nil) goto v_28;
    v_83 = v_87;
    v_85 = v_83;
    goto v_26;
v_28:
    v_83 = v_87;
    if (!car_legal(v_83)) v_83 = carerror(v_83); else
    v_83 = car(v_83);
    v_83 = Lconsp(nil, v_83);
    env = stack[0];
    if (v_83 == nil) goto v_43;
    v_83 = v_87;
    if (!car_legal(v_83)) v_83 = carerror(v_83); else
    v_83 = car(v_83);
    if (!car_legal(v_83)) v_83 = carerror(v_83); else
    v_83 = car(v_83);
    v_85 = v_83;
    goto v_26;
v_43:
    v_83 = v_87;
    if (!car_legal(v_83)) v_83 = carerror(v_83); else
    v_83 = car(v_83);
    v_85 = v_83;
    goto v_26;
    v_85 = nil;
v_26:
    v_84 = v_86;
    v_83 = basic_elt(env, 1); // true
    if (v_84 == v_83) goto v_60;
    else goto v_61;
v_60:
    v_83 = lisp_true;
    goto v_59;
v_61:
    v_84 = v_86;
    v_83 = basic_elt(env, 2); // false
    v_83 = (v_84 == v_83 ? lisp_true : nil);
    goto v_59;
    v_83 = nil;
v_59:
    if (v_83 == nil) goto v_57;
    v_83 = v_86;
    goto v_55;
v_57:
    v_83 = v_86;
    if (!car_legal(v_83)) v_83 = carerror(v_83); else
    v_83 = car(v_83);
    v_83 = Lconsp(nil, v_83);
    env = stack[0];
    if (v_83 == nil) goto v_72;
    v_83 = v_86;
    if (!car_legal(v_83)) v_83 = carerror(v_83); else
    v_83 = car(v_83);
    if (!car_legal(v_83)) v_83 = carerror(v_83); else
    v_83 = car(v_83);
    goto v_55;
v_72:
    v_83 = v_86;
    if (!car_legal(v_83)) v_83 = carerror(v_83); else
    v_83 = car(v_83);
    goto v_55;
    v_83 = nil;
v_55:
    {
        LispObject fn = basic_elt(env, 4); // pasf_ordrelp
        return (*qfn2(fn))(fn, v_85, v_83);
    }
    return onevalue(v_83);
}



// Code for conditionrd

static LispObject CC_conditionrd(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_21, v_22, v_23;
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
    {   LispObject fn = basic_elt(env, 5); // mathml
    v_21 = (*qfn0(fn))(fn);
    }
    env = stack[-1];
    stack[0] = v_21;
    {   LispObject fn = basic_elt(env, 6); // lex
    v_21 = (*qfn0(fn))(fn);
    }
    env = stack[-1];
    v_22 = qvalue(basic_elt(env, 1)); // char
    v_21 = basic_elt(env, 2); // (!/ c o n d i t i o n)
    if (equal(v_22, v_21)) goto v_11;
    v_22 = basic_elt(env, 3); // "</condition>"
    v_21 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    {   LispObject fn = basic_elt(env, 7); // errorml
    v_21 = (*qfn2(fn))(fn, v_22, v_21);
    }
    env = stack[-1];
    goto v_9;
v_11:
v_9:
    v_23 = basic_elt(env, 4); // condition
    v_22 = stack[0];
    v_21 = nil;
    return list2star(v_23, v_22, v_21);
    return onevalue(v_21);
}



setup_type const u43_setup[] =
{
    {"gigcdsq",                 G0W2,     G1W2,     CC_gigcdsq,G3W2,    G4W2},
    {"subtractinds",            G0W3,     G1W3,     G2W3,     CC_subtractinds,G4W3},
    {"mk+resimp+mat",           G0W1,     CC_mkLresimpLmat,G2W1,G3W1,   G4W1},
    {"freeof-dfl",              G0W2,     G1W2,     CC_freeofKdfl,G3W2, G4W2},
    {"pasf_coeflst",            G0W2,     G1W2,     CC_pasf_coeflst,G3W2,G4W2},
    {"vdp_mred",                G0W1,     CC_vdp_mred,G2W1,   G3W1,     G4W1},
    {"vsl_subatsq",             G0W3,     G1W3,     G2W3,     CC_vsl_subatsq,G4W3},
    {"numir",                   CC_numir, G1W0,     G2W0,     G3W0,     G4W0},
    {"diford",                  G0W1,     CC_diford,G2W1,     G3W1,     G4W1},
    {"remdiff",                 G0W1,     CC_remdiff,G2W1,    G3W1,     G4W1},
    {"xpartitop",               G0W1,     CC_xpartitop,G2W1,  G3W1,     G4W1},
    {"gfdiffer",                G0W2,     G1W2,     CC_gfdiffer,G3W2,   G4W2},
    {"reduce-columns",          G0W3,     G1W3,     G2W3,     CC_reduceKcolumns,G4W3},
    {"groeb=testc1",            G0W1,     CC_groebMtestc1,G2W1,G3W1,    G4W1},
    {"mk_dummy_ids",            G0W1,     CC_mk_dummy_ids,G2W1,G3W1,    G4W1},
    {"aex_mult",                G0W2,     G1W2,     CC_aex_mult,G3W2,   G4W2},
    {"createtriple",            G0W1,     CC_createtriple,G2W1,G3W1,    G4W1},
    {"mksfpf",                  G0W2,     G1W2,     CC_mksfpf,G3W2,     G4W2},
    {"enter-sorted",            G0W2,     G1W2,     CC_enterKsorted,G3W2,G4W2},
    {"pasf_premf",              G0W2,     G1W2,     CC_pasf_premf,G3W2, G4W2},
    {"vsl_boundtype1",          G0W2,     G1W2,     CC_vsl_boundtype1,G3W2,G4W2},
    {"cols2rows2",              G0W2,     G1W2,     CC_cols2rows2,G3W2, G4W2},
    {"reduceroots",             G0W2,     G1W2,     CC_reduceroots,G3W2,G4W2},
    {"ps:set-term",             G0W3,     G1W3,     G2W3,     CC_psTsetKterm,G4W3},
    {"ldf-dep-var",             G0W1,     CC_ldfKdepKvar,G2W1,G3W1,     G4W1},
    {"o-nextarg",               G0W1,     CC_oKnextarg,G2W1,  G3W1,     G4W1},
    {"e*",                      CC_eH,    G1W0,     G2W0,     G3W0,     G4W0},
    {"physoppri",               G0W1,     CC_physoppri,G2W1,  G3W1,     G4W1},
    {"ev-poles",                G0W2,     G1W2,     CC_evKpoles,G3W2,   G4W2},
    {"quotofd",                 G0W2,     G1W2,     CC_quotofd,G3W2,    G4W2},
    {"negex",                   G0W1,     CC_negex, G2W1,     G3W1,     G4W1},
    {"revalpart",               G0W1,     CC_revalpart,G2W1,  G3W1,     G4W1},
    {"prepcadr",                G0W1,     CC_prepcadr,G2W1,   G3W1,     G4W1},
    {"ra_wrapper",              G0W2,     G1W2,     CC_ra_wrapper,G3W2, G4W2},
    {"qqe_simplbtat",           G0W2,     G1W2,     CC_qqe_simplbtat,G3W2,G4W2},
    {"pasf_ordatp",             G0W2,     G1W2,     CC_pasf_ordatp,G3W2,G4W2},
    {"conditionrd",             CC_conditionrd,G1W0,G2W0,     G3W0,     G4W0},
    {nullptr, 
        reinterpret_cast<no_args *>(
            reinterpret_cast<uintptr_t>("u43")),
        reinterpret_cast<one_arg *>(
            reinterpret_cast<uintptr_t>("27781 1588339 5383411")),
        nullptr, nullptr, nullptr}
};

// end of generated code
