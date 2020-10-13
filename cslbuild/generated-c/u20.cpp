
// $destdir/u20.c        Machine generated C code

// $Id$

#include "config.h"
#include "headers.h"



// Code for physop!-ordop

static LispObject CC_physopKordop(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    stack[-1] = v_2;
// end of prologue
v_1:
    v_130 = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // !*physopp
    v_130 = (*qfn1(fn))(fn, v_130);
    }
    env = stack[-4];
    if (v_130 == nil) goto v_14;
    v_130 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // !*physopp
    v_130 = (*qfn1(fn))(fn, v_130);
    }
    env = stack[-4];
    if (v_130 == nil) goto v_14;
    goto v_15;
v_14:
    v_130 = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // !*physopp
    v_130 = (*qfn1(fn))(fn, v_130);
    }
    env = stack[-4];
    if (v_130 == nil) goto v_25;
    v_130 = nil;
    goto v_23;
v_25:
    v_130 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // !*physopp
    v_130 = (*qfn1(fn))(fn, v_130);
    }
    env = stack[-4];
    if (v_130 == nil) goto v_30;
    v_130 = lisp_true;
    goto v_23;
v_30:
    v_131 = stack[-1];
    v_130 = stack[0];
    {
        LispObject fn = basic_elt(env, 4); // ordop2
        return (*qfn2(fn))(fn, v_131, v_130);
    }
    v_130 = nil;
v_23:
    goto v_11;
v_15:
    v_130 = stack[-1];
    if (symbolp(v_130)) goto v_41;
    else goto v_42;
v_41:
    v_131 = stack[-1];
    v_130 = basic_elt(env, 1); // physopname
    v_130 = get(v_131, v_130);
    env = stack[-4];
    stack[-3] = v_130;
    goto v_40;
v_42:
    v_130 = stack[-1];
    if (!car_legal(v_130)) v_131 = carerror(v_130); else
    v_131 = car(v_130);
    v_130 = basic_elt(env, 1); // physopname
    v_130 = get(v_131, v_130);
    env = stack[-4];
    stack[-3] = v_130;
    v_131 = stack[-3];
    v_130 = stack[-1];
    if (!car_legal(v_130)) v_130 = cdrerror(v_130); else
    v_130 = cdr(v_130);
    v_130 = cons(v_131, v_130);
    env = stack[-4];
    stack[-3] = v_130;
    v_130 = stack[-1];
    if (!car_legal(v_130)) v_130 = carerror(v_130); else
    v_130 = car(v_130);
    stack[-1] = v_130;
    goto v_40;
v_40:
    v_131 = stack[-1];
    v_130 = qvalue(basic_elt(env, 2)); // specoplist!*
    v_130 = Lmember(nil, v_131, v_130);
    if (v_130 == nil) goto v_63;
    v_130 = lisp_true;
    goto v_11;
v_63:
    v_130 = stack[0];
    if (symbolp(v_130)) goto v_70;
    else goto v_71;
v_70:
    v_131 = stack[0];
    v_130 = basic_elt(env, 1); // physopname
    v_130 = get(v_131, v_130);
    env = stack[-4];
    stack[-2] = v_130;
    goto v_69;
v_71:
    v_130 = stack[0];
    if (!car_legal(v_130)) v_131 = carerror(v_130); else
    v_131 = car(v_130);
    v_130 = basic_elt(env, 1); // physopname
    v_130 = get(v_131, v_130);
    env = stack[-4];
    stack[-2] = v_130;
    v_131 = stack[-2];
    v_130 = stack[0];
    if (!car_legal(v_130)) v_130 = cdrerror(v_130); else
    v_130 = cdr(v_130);
    v_130 = cons(v_131, v_130);
    env = stack[-4];
    stack[-2] = v_130;
    v_130 = stack[0];
    if (!car_legal(v_130)) v_130 = carerror(v_130); else
    v_130 = car(v_130);
    stack[0] = v_130;
    goto v_69;
v_69:
    v_131 = stack[0];
    v_130 = qvalue(basic_elt(env, 2)); // specoplist!*
    v_130 = Lmember(nil, v_131, v_130);
    if (v_130 == nil) goto v_92;
    v_130 = lisp_true;
    goto v_11;
v_92:
    v_130 = stack[-3];
    {   LispObject fn = basic_elt(env, 5); // opnum!*
    v_130 = (*qfn1(fn))(fn, v_130);
    }
    env = stack[-4];
    stack[-1] = v_130;
    v_130 = stack[-2];
    {   LispObject fn = basic_elt(env, 5); // opnum!*
    v_130 = (*qfn1(fn))(fn, v_130);
    }
    env = stack[-4];
    stack[0] = v_130;
    v_131 = stack[-1];
    v_130 = stack[0];
    v_130 = static_cast<LispObject>(lessp2(v_131, v_130));
    v_130 = v_130 ? lisp_true : nil;
    env = stack[-4];
    if (v_130 == nil) goto v_104;
    v_130 = lisp_true;
    goto v_102;
v_104:
    v_131 = stack[-1];
    v_130 = stack[0];
    v_130 = static_cast<LispObject>(greaterp2(v_131, v_130));
    v_130 = v_130 ? lisp_true : nil;
    env = stack[-4];
    if (v_130 == nil) goto v_110;
    v_130 = nil;
    goto v_102;
v_110:
    v_130 = stack[-3];
    if (symbolp(v_130)) goto v_115;
    else goto v_116;
v_115:
    v_130 = lisp_true;
    goto v_102;
v_116:
    v_130 = stack[-2];
    if (symbolp(v_130)) goto v_119;
    else goto v_120;
v_119:
    v_130 = nil;
    goto v_102;
v_120:
    v_130 = stack[-3];
    if (!car_legal(v_130)) v_131 = cdrerror(v_130); else
    v_131 = cdr(v_130);
    v_130 = stack[-2];
    if (!car_legal(v_130)) v_130 = cdrerror(v_130); else
    v_130 = cdr(v_130);
    stack[-1] = v_131;
    stack[0] = v_130;
    goto v_1;
    v_130 = nil;
v_102:
v_11:
    return onevalue(v_130);
}



// Code for zero!-roads

static LispObject CC_zeroKroads(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
v_1:
    v_31 = stack[0];
    if (v_31 == nil) goto v_6;
    else goto v_7;
v_6:
    v_31 = nil;
    goto v_5;
v_7:
    v_31 = stack[0];
    if (!car_legal(v_31)) v_31 = carerror(v_31); else
    v_31 = car(v_31);
    {   LispObject fn = basic_elt(env, 1); // z!-roads
    v_31 = (*qfn1(fn))(fn, v_31);
    }
    env = stack[-2];
    v_32 = v_31;
    v_31 = v_32;
    if (v_31 == nil) goto v_19;
    stack[-1] = v_32;
    v_31 = stack[0];
    if (!car_legal(v_31)) v_31 = cdrerror(v_31); else
    v_31 = cdr(v_31);
    {   LispObject fn = basic_elt(env, 0); // zero!-roads
    v_31 = (*qfn1(fn))(fn, v_31);
    }
    {
        LispObject v_35 = stack[-1];
        return cons(v_35, v_31);
    }
v_19:
    v_31 = stack[0];
    if (!car_legal(v_31)) v_31 = cdrerror(v_31); else
    v_31 = cdr(v_31);
    stack[0] = v_31;
    goto v_1;
    v_31 = nil;
    goto v_5;
    v_31 = nil;
v_5:
    return onevalue(v_31);
}



// Code for addgt

static LispObject CC_addgt(LispObject env,
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
    stack[0] = v_2;
// end of prologue
    v_20 = qvalue(basic_elt(env, 1)); // ordering
    v_19 = basic_elt(env, 2); // lex
    if (v_20 == v_19) goto v_6;
    else goto v_7;
v_6:
    v_19 = stack[0];
    goto v_5;
v_7:
    v_20 = basic_elt(env, 3); // plus
    v_19 = stack[0];
    v_19 = cons(v_20, v_19);
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 4); // eval
    v_20 = (*qfn1(fn))(fn, v_19);
    }
    v_19 = stack[0];
    return cons(v_20, v_19);
    v_19 = nil;
v_5:
    return onevalue(v_19);
}



// Code for lex_save_context

static LispObject CC_lex_save_context(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil, nil, nil, nil, nil);
    stack_popper stack_popper_var(6);
// end of prologue
    v_50 = qvalue(basic_elt(env, 1)); // lex_codename
    stack[-4] = v_50;
    v_50 = stack[-4];
    if (v_50 == nil) goto v_12;
    else goto v_13;
v_12:
    v_50 = nil;
    goto v_7;
v_13:
    v_50 = stack[-4];
    if (!car_legal(v_50)) v_50 = carerror(v_50); else
    v_50 = car(v_50);
    stack[0] = v_50;
    v_50 = stack[0];
    if (!car_legal(v_50)) v_50 = cdrerror(v_50); else
    v_50 = cdr(v_50);
    v_51 = Lintern(nil, v_50);
    env = stack[-5];
    v_50 = basic_elt(env, 2); // lex_dipthong
    v_51 = get(v_51, v_50);
    env = stack[-5];
    v_50 = stack[0];
    v_50 = cons(v_51, v_50);
    env = stack[-5];
    v_50 = ncons(v_50);
    env = stack[-5];
    stack[-2] = v_50;
    stack[-3] = v_50;
v_8:
    v_50 = stack[-4];
    if (!car_legal(v_50)) v_50 = cdrerror(v_50); else
    v_50 = cdr(v_50);
    stack[-4] = v_50;
    v_50 = stack[-4];
    if (v_50 == nil) goto v_31;
    else goto v_32;
v_31:
    v_50 = stack[-3];
    goto v_7;
v_32:
    stack[-1] = stack[-2];
    v_50 = stack[-4];
    if (!car_legal(v_50)) v_50 = carerror(v_50); else
    v_50 = car(v_50);
    stack[0] = v_50;
    v_50 = stack[0];
    if (!car_legal(v_50)) v_50 = cdrerror(v_50); else
    v_50 = cdr(v_50);
    v_51 = Lintern(nil, v_50);
    env = stack[-5];
    v_50 = basic_elt(env, 2); // lex_dipthong
    v_51 = get(v_51, v_50);
    env = stack[-5];
    v_50 = stack[0];
    v_50 = cons(v_51, v_50);
    env = stack[-5];
    v_50 = ncons(v_50);
    env = stack[-5];
    if (!car_legal(stack[-1])) rplacd_fails(stack[-1]);
    setcdr(stack[-1], v_50);
    v_50 = stack[-2];
    if (!car_legal(v_50)) v_50 = cdrerror(v_50); else
    v_50 = cdr(v_50);
    stack[-2] = v_50;
    goto v_8;
v_7:
    return onevalue(v_50);
}



// Code for ctx_filter

static LispObject CC_ctx_filter(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_69, v_70, v_71;
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
    v_69 = v_3;
    stack[-4] = v_2;
// end of prologue
    stack[-5] = basic_elt(env, 1); // ctx
    {   LispObject fn = basic_elt(env, 2); // ctx_ial
    v_69 = (*qfn1(fn))(fn, v_69);
    }
    env = stack[-6];
    stack[-3] = v_69;
v_12:
    v_69 = stack[-3];
    if (v_69 == nil) goto v_18;
    else goto v_19;
v_18:
    v_69 = nil;
    goto v_11;
v_19:
    v_69 = stack[-3];
    if (!car_legal(v_69)) v_69 = carerror(v_69); else
    v_69 = car(v_69);
    v_71 = v_69;
    v_69 = v_71;
    if (!car_legal(v_69)) v_70 = carerror(v_69); else
    v_70 = car(v_69);
    v_69 = stack[-4];
    v_69 = Lmemq(nil, v_70, v_69);
    if (v_69 == nil) goto v_28;
    v_69 = v_71;
    v_69 = ncons(v_69);
    env = stack[-6];
    goto v_26;
v_28:
    v_69 = nil;
v_26:
    stack[-2] = v_69;
    v_69 = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // lastpair
    v_69 = (*qfn1(fn))(fn, v_69);
    }
    env = stack[-6];
    stack[-1] = v_69;
    v_69 = stack[-3];
    if (!car_legal(v_69)) v_69 = cdrerror(v_69); else
    v_69 = cdr(v_69);
    stack[-3] = v_69;
    v_69 = stack[-1];
    if (!consp(v_69)) goto v_41;
    else goto v_42;
v_41:
    goto v_12;
v_42:
v_13:
    v_69 = stack[-3];
    if (v_69 == nil) goto v_46;
    else goto v_47;
v_46:
    v_69 = stack[-2];
    goto v_11;
v_47:
    stack[0] = stack[-1];
    v_69 = stack[-3];
    if (!car_legal(v_69)) v_69 = carerror(v_69); else
    v_69 = car(v_69);
    v_71 = v_69;
    v_69 = v_71;
    if (!car_legal(v_69)) v_70 = carerror(v_69); else
    v_70 = car(v_69);
    v_69 = stack[-4];
    v_69 = Lmemq(nil, v_70, v_69);
    if (v_69 == nil) goto v_57;
    v_69 = v_71;
    v_69 = ncons(v_69);
    env = stack[-6];
    goto v_55;
v_57:
    v_69 = nil;
v_55:
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_69);
    v_69 = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // lastpair
    v_69 = (*qfn1(fn))(fn, v_69);
    }
    env = stack[-6];
    stack[-1] = v_69;
    v_69 = stack[-3];
    if (!car_legal(v_69)) v_69 = cdrerror(v_69); else
    v_69 = cdr(v_69);
    stack[-3] = v_69;
    goto v_13;
v_11:
    {
        LispObject v_78 = stack[-5];
        return list2(v_78, v_69);
    }
}



// Code for ofsf_entry2at

static LispObject CC_ofsf_entry2at(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_22, v_23, v_24, v_25;
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
    v_23 = v_4;
    v_24 = v_3;
    v_25 = v_2;
// end of prologue
    v_22 = qvalue(basic_elt(env, 1)); // !*rlidentify
    if (v_22 == nil) goto v_9;
    v_22 = v_25;
    {   LispObject fn = basic_elt(env, 2); // ofsf_entry2at1
    v_22 = (*qfn3(fn))(fn, v_22, v_24, v_23);
    }
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 3); // cl_identifyat
        return (*qfn1(fn))(fn, v_22);
    }
v_9:
    v_22 = v_25;
    {
        LispObject fn = basic_elt(env, 2); // ofsf_entry2at1
        return (*qfn3(fn))(fn, v_22, v_24, v_23);
    }
    v_22 = nil;
    return onevalue(v_22);
}



// Code for monomdivide

static LispObject CC_monomdivide(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    stack[-3] = nil;
    v_71 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_71 = Lmkvect(nil, v_71);
    env = stack[-7];
    stack[-6] = v_71;
    stack[-2] = stack[-6];
    stack[-1] = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_72 = stack[-5];
    v_71 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[0] = Lgetv(nil, v_72, v_71);
    env = stack[-7];
    v_72 = stack[-4];
    v_71 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_71 = Lgetv(nil, v_72, v_71);
    env = stack[-7];
    v_71 = difference2(stack[0], v_71);
    env = stack[-7];
    v_71 = Lputv(nil, stack[-2], stack[-1], v_71);
    env = stack[-7];
    v_72 = stack[-5];
    v_71 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_71 = Lgetv(nil, v_72, v_71);
    env = stack[-7];
    stack[0] = v_71;
    v_72 = stack[-4];
    v_71 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_71 = Lgetv(nil, v_72, v_71);
    env = stack[-7];
    stack[-1] = v_71;
v_31:
    v_71 = stack[0];
    if (!car_legal(v_71)) v_71 = carerror(v_71); else
    v_71 = car(v_71);
    if (v_71 == nil) goto v_34;
    else goto v_35;
v_34:
    goto v_30;
v_35:
    v_71 = stack[0];
    if (!car_legal(v_71)) v_72 = carerror(v_71); else
    v_72 = car(v_71);
    v_71 = stack[-1];
    if (!car_legal(v_71)) v_71 = carerror(v_71); else
    v_71 = car(v_71);
    if (equal(v_72, v_71)) goto v_41;
    else goto v_42;
v_41:
    v_71 = stack[0];
    if (!car_legal(v_71)) v_71 = cdrerror(v_71); else
    v_71 = cdr(v_71);
    stack[0] = v_71;
    v_71 = stack[-1];
    if (!car_legal(v_71)) v_71 = cdrerror(v_71); else
    v_71 = cdr(v_71);
    stack[-1] = v_71;
    goto v_40;
v_42:
    v_71 = stack[0];
    if (!car_legal(v_71)) v_72 = carerror(v_71); else
    v_72 = car(v_71);
    v_71 = stack[-3];
    v_71 = cons(v_72, v_71);
    env = stack[-7];
    stack[-3] = v_71;
    v_71 = stack[0];
    if (!car_legal(v_71)) v_71 = cdrerror(v_71); else
    v_71 = cdr(v_71);
    stack[0] = v_71;
    goto v_40;
v_40:
    goto v_31;
v_30:
    v_72 = nil;
    v_71 = stack[-3];
    v_71 = cons(v_72, v_71);
    env = stack[-7];
    stack[-3] = v_71;
    stack[-1] = stack[-6];
    stack[0] = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_71 = stack[-3];
    v_71 = Lreverse(nil, v_71);
    env = stack[-7];
    v_71 = Lputv(nil, stack[-1], stack[0], v_71);
    v_71 = stack[-6];
    return onevalue(v_71);
}



// Code for rl_nnf

static LispObject CC_rl_nnf(LispObject env,
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
    stack[0] = qvalue(basic_elt(env, 1)); // rl_nnf!*
    v_8 = ncons(v_8);
    env = stack[-1];
    {
        LispObject v_10 = stack[0];
        LispObject fn = basic_elt(env, 2); // apply
        return (*qfn2(fn))(fn, v_10, v_8);
    }
}



// Code for innprodkp

static LispObject CC_innprodkp(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_37, v_38, v_39;
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[0] = v_5;
    stack[-1] = v_4;
    stack[-2] = v_3;
    v_38 = v_2;
// end of prologue
v_9:
    v_37 = stack[-1];
    if (v_37 == nil) goto v_12;
    else goto v_13;
v_12:
    v_37 = nil;
    goto v_8;
v_13:
    v_39 = stack[-2];
    v_37 = stack[-1];
    if (!car_legal(v_37)) v_37 = carerror(v_37); else
    v_37 = car(v_37);
    if (equal(v_39, v_37)) goto v_16;
    else goto v_17;
v_16:
    v_37 = stack[-1];
    if (!car_legal(v_37)) v_37 = cdrerror(v_37); else
    v_37 = cdr(v_37);
    {   LispObject fn = basic_elt(env, 1); // reversip2
    v_37 = (*qfn2(fn))(fn, v_38, v_37);
    }
    {
        LispObject v_43 = stack[0];
        return cons(v_43, v_37);
    }
v_17:
    v_37 = stack[-1];
    if (!car_legal(v_37)) v_37 = carerror(v_37); else
    v_37 = car(v_37);
    v_37 = cons(v_37, v_38);
    env = stack[-3];
    v_38 = v_37;
    v_37 = stack[-1];
    if (!car_legal(v_37)) v_37 = cdrerror(v_37); else
    v_37 = cdr(v_37);
    stack[-1] = v_37;
    v_37 = stack[0];
    v_37 = (v_37 == nil ? lisp_true : nil);
    stack[0] = v_37;
    goto v_9;
    v_37 = nil;
v_8:
    return onevalue(v_37);
}



// Code for talp_rnf1

static LispObject CC_talp_rnf1(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_98, v_99, v_100;
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
    v_99 = v_2;
// end of prologue
    v_98 = v_99;
    if (!consp(v_98)) goto v_9;
    else goto v_10;
v_9:
    v_98 = v_99;
    goto v_6;
v_10:
    v_100 = v_99;
    v_99 = nil;
    v_98 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    {   LispObject fn = basic_elt(env, 3); // cl_simpl
    v_98 = (*qfn3(fn))(fn, v_100, v_99, v_98);
    }
    env = stack[-5];
    stack[0] = v_98;
    v_99 = stack[0];
    v_98 = basic_elt(env, 1); // true
    if (v_99 == v_98) goto v_23;
    else goto v_24;
v_23:
    v_98 = lisp_true;
    goto v_22;
v_24:
    v_99 = stack[0];
    v_98 = basic_elt(env, 2); // false
    v_98 = (v_99 == v_98 ? lisp_true : nil);
    goto v_22;
    v_98 = nil;
v_22:
    if (v_98 == nil) goto v_20;
    v_98 = stack[0];
    goto v_6;
v_20:
    v_98 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // talp_atfp
    v_98 = (*qfn1(fn))(fn, v_98);
    }
    env = stack[-5];
    if (v_98 == nil) goto v_37;
    v_98 = stack[0];
    {   LispObject fn = basic_elt(env, 5); // talp_acfrp
    v_98 = (*qfn1(fn))(fn, v_98);
    }
    env = stack[-5];
    if (v_98 == nil) goto v_43;
    v_98 = stack[0];
    {   LispObject fn = basic_elt(env, 6); // talp_raf
    v_100 = (*qfn1(fn))(fn, v_98);
    }
    env = stack[-5];
    v_99 = nil;
    v_98 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    {
        LispObject fn = basic_elt(env, 3); // cl_simpl
        return (*qfn3(fn))(fn, v_100, v_99, v_98);
    }
v_43:
    v_98 = stack[0];
    goto v_41;
    v_98 = nil;
v_41:
    goto v_6;
v_37:
    v_98 = stack[0];
    {   LispObject fn = basic_elt(env, 7); // talp_op
    stack[-4] = (*qfn1(fn))(fn, v_98);
    }
    env = stack[-5];
    v_98 = stack[0];
    {   LispObject fn = basic_elt(env, 8); // talp_argl
    v_98 = (*qfn1(fn))(fn, v_98);
    }
    env = stack[-5];
    stack[-3] = v_98;
    v_98 = stack[-3];
    if (v_98 == nil) goto v_68;
    else goto v_69;
v_68:
    v_98 = nil;
    goto v_62;
v_69:
    v_98 = stack[-3];
    if (!car_legal(v_98)) v_98 = carerror(v_98); else
    v_98 = car(v_98);
    {   LispObject fn = basic_elt(env, 0); // talp_rnf1
    v_98 = (*qfn1(fn))(fn, v_98);
    }
    env = stack[-5];
    v_98 = ncons(v_98);
    env = stack[-5];
    stack[-1] = v_98;
    stack[-2] = v_98;
v_63:
    v_98 = stack[-3];
    if (!car_legal(v_98)) v_98 = cdrerror(v_98); else
    v_98 = cdr(v_98);
    stack[-3] = v_98;
    v_98 = stack[-3];
    if (v_98 == nil) goto v_82;
    else goto v_83;
v_82:
    v_98 = stack[-2];
    goto v_62;
v_83:
    stack[0] = stack[-1];
    v_98 = stack[-3];
    if (!car_legal(v_98)) v_98 = carerror(v_98); else
    v_98 = car(v_98);
    {   LispObject fn = basic_elt(env, 0); // talp_rnf1
    v_98 = (*qfn1(fn))(fn, v_98);
    }
    env = stack[-5];
    v_98 = ncons(v_98);
    env = stack[-5];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_98);
    v_98 = stack[-1];
    if (!car_legal(v_98)) v_98 = cdrerror(v_98); else
    v_98 = cdr(v_98);
    stack[-1] = v_98;
    goto v_63;
v_62:
    v_100 = cons(stack[-4], v_98);
    env = stack[-5];
    v_99 = nil;
    v_98 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    {
        LispObject fn = basic_elt(env, 3); // cl_simpl
        return (*qfn3(fn))(fn, v_100, v_99, v_98);
    }
v_6:
    return onevalue(v_98);
}



// Code for distribute!.multiplicity

static LispObject CC_distributeQmultiplicity(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_44, v_45;
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
    v_44 = v_2;
// end of prologue
    stack[-4] = v_44;
    v_44 = stack[-4];
    if (v_44 == nil) goto v_14;
    else goto v_15;
v_14:
    v_44 = nil;
    goto v_9;
v_15:
    v_44 = stack[-4];
    if (!car_legal(v_44)) v_44 = carerror(v_44); else
    v_44 = car(v_44);
    v_45 = v_44;
    v_44 = stack[-3];
    v_44 = cons(v_45, v_44);
    env = stack[-5];
    v_44 = ncons(v_44);
    env = stack[-5];
    stack[-1] = v_44;
    stack[-2] = v_44;
v_10:
    v_44 = stack[-4];
    if (!car_legal(v_44)) v_44 = cdrerror(v_44); else
    v_44 = cdr(v_44);
    stack[-4] = v_44;
    v_44 = stack[-4];
    if (v_44 == nil) goto v_29;
    else goto v_30;
v_29:
    v_44 = stack[-2];
    goto v_9;
v_30:
    stack[0] = stack[-1];
    v_44 = stack[-4];
    if (!car_legal(v_44)) v_44 = carerror(v_44); else
    v_44 = car(v_44);
    v_45 = v_44;
    v_44 = stack[-3];
    v_44 = cons(v_45, v_44);
    env = stack[-5];
    v_44 = ncons(v_44);
    env = stack[-5];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_44);
    v_44 = stack[-1];
    if (!car_legal(v_44)) v_44 = cdrerror(v_44); else
    v_44 = cdr(v_44);
    stack[-1] = v_44;
    goto v_10;
v_9:
    return onevalue(v_44);
}



// Code for ibalp_readform

static LispObject CC_ibalp_readform(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(8);
// copy arguments values to proper place
    v_123 = v_2;
// end of prologue
    stack[-5] = nil;
    stack[-4] = nil;
    stack[-3] = nil;
    v_124 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[0] = v_124;
    v_124 = v_123;
    v_123 = basic_elt(env, 1); // and
    {   LispObject fn = basic_elt(env, 7); // cl_mkstrict
    v_123 = (*qfn2(fn))(fn, v_124, v_123);
    }
    env = stack[-7];
    if (!car_legal(v_123)) v_123 = cdrerror(v_123); else
    v_123 = cdr(v_123);
    stack[-2] = v_123;
    v_123 = lisp_true;
    stack[-1] = v_123;
v_23:
    v_123 = stack[-1];
    if (v_123 == nil) goto v_26;
    v_123 = stack[-2];
    if (v_123 == nil) goto v_26;
    goto v_27;
v_26:
    goto v_22;
v_27:
    v_123 = stack[-2];
    if (!car_legal(v_123)) v_123 = carerror(v_123); else
    v_123 = car(v_123);
    v_124 = v_123;
    v_123 = stack[-2];
    if (!car_legal(v_123)) v_123 = cdrerror(v_123); else
    v_123 = cdr(v_123);
    stack[-2] = v_123;
    v_123 = stack[-4];
    {   LispObject fn = basic_elt(env, 8); // ibalp_readclause
    v_123 = (*qfn2(fn))(fn, v_124, v_123);
    }
    env = stack[-7];
    stack[-6] = v_123;
    v_123 = stack[-6];
    if (!car_legal(v_123)) v_123 = carerror(v_123); else
    v_123 = car(v_123);
    stack[-3] = v_123;
    v_123 = stack[-6];
    if (!car_legal(v_123)) v_123 = cdrerror(v_123); else
    v_123 = cdr(v_123);
    stack[-4] = v_123;
    v_124 = stack[-3];
    v_123 = basic_elt(env, 2); // true
    if (v_124 == v_123) goto v_47;
    v_123 = stack[-3];
    {   LispObject fn = basic_elt(env, 9); // ibalp_emptyclausep
    v_123 = (*qfn1(fn))(fn, v_123);
    }
    env = stack[-7];
    if (v_123 == nil) goto v_53;
    v_123 = nil;
    stack[-1] = v_123;
    goto v_51;
v_53:
    v_124 = stack[-3];
    v_123 = stack[-5];
    {   LispObject fn = basic_elt(env, 10); // ibalp_clmember
    v_123 = (*qfn2(fn))(fn, v_124, v_123);
    }
    env = stack[-7];
    if (v_123 == nil) goto v_63;
    else goto v_61;
v_63:
    v_123 = stack[-3];
    {   LispObject fn = basic_elt(env, 11); // ibalp_redclause
    v_123 = (*qfn1(fn))(fn, v_123);
    }
    env = stack[-7];
    if (v_123 == nil) goto v_67;
    else goto v_61;
v_67:
    goto v_62;
v_61:
    v_123 = stack[-3];
    {   LispObject fn = basic_elt(env, 12); // ibalp_undoclause
    v_123 = (*qfn1(fn))(fn, v_123);
    }
    env = stack[-7];
    v_123 = stack[0];
    v_123 = add1(v_123);
    env = stack[-7];
    stack[0] = v_123;
    goto v_60;
v_62:
    v_123 = stack[-6];
    if (!car_legal(v_123)) v_124 = carerror(v_123); else
    v_124 = car(v_123);
    v_123 = stack[-5];
    v_123 = cons(v_124, v_123);
    env = stack[-7];
    stack[-5] = v_123;
    goto v_60;
v_60:
    goto v_51;
v_51:
    goto v_45;
v_47:
v_45:
    goto v_23;
v_22:
    v_123 = stack[-1];
    if (v_123 == nil) goto v_82;
    else goto v_83;
v_82:
    v_123 = qvalue(basic_elt(env, 3)); // !*rlverbose
    if (v_123 == nil) goto v_88;
    v_123 = basic_elt(env, 4); // "Detected empty clause"
    v_123 = ncons(v_123);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 13); // ioto_tprin2t
    v_123 = (*qfn1(fn))(fn, v_123);
    }
    env = stack[-7];
    goto v_86;
v_88:
v_86:
    v_123 = stack[-3];
    v_123 = ncons(v_123);
    return ncons(v_123);
v_83:
    v_123 = stack[-5];
    if (v_123 == nil) goto v_98;
    else goto v_99;
v_98:
    v_123 = qvalue(basic_elt(env, 3)); // !*rlverbose
    if (v_123 == nil) goto v_104;
    v_123 = basic_elt(env, 5); // "Tautology detected"
    v_123 = ncons(v_123);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 13); // ioto_tprin2t
    v_123 = (*qfn1(fn))(fn, v_123);
    }
    goto v_102;
v_104:
v_102:
    v_123 = nil;
    return ncons(v_123);
v_99:
    v_123 = qvalue(basic_elt(env, 3)); // !*rlverbose
    if (v_123 == nil) goto v_114;
    v_124 = basic_elt(env, 6); // "Deleted redundant clauses: "
    v_123 = stack[0];
    v_123 = list2(v_124, v_123);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 13); // ioto_tprin2t
    v_123 = (*qfn1(fn))(fn, v_123);
    }
    goto v_112;
v_114:
v_112:
    v_124 = stack[-5];
    v_123 = stack[-4];
    return cons(v_124, v_123);
    return onevalue(v_123);
}



// Code for ir2om

static LispObject CC_ir2om(LispObject env,
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
    v_18 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    setvalue(basic_elt(env, 1), v_18); // ind
    v_18 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    setvalue(basic_elt(env, 2), v_18); // indent
    v_18 = basic_elt(env, 3); // "<OMOBJ>"
    {   LispObject fn = basic_elt(env, 5); // printout
    v_18 = (*qfn1(fn))(fn, v_18);
    }
    env = stack[-1];
    v_18 = lisp_true;
    {   LispObject fn = basic_elt(env, 6); // indent!*
    v_18 = (*qfn1(fn))(fn, v_18);
    }
    env = stack[-1];
    v_18 = stack[0];
    {   LispObject fn = basic_elt(env, 7); // objectom
    v_18 = (*qfn1(fn))(fn, v_18);
    }
    env = stack[-1];
    v_18 = nil;
    {   LispObject fn = basic_elt(env, 6); // indent!*
    v_18 = (*qfn1(fn))(fn, v_18);
    }
    env = stack[-1];
    v_18 = basic_elt(env, 4); // "</OMOBJ>"
    {   LispObject fn = basic_elt(env, 5); // printout
    v_18 = (*qfn1(fn))(fn, v_18);
    }
    v_18 = nil;
    return onevalue(v_18);
}



// Code for xord_deglex

static LispObject CC_xord_deglex(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_41, v_42, v_43, v_44;
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
    if (!car_legal(v_41)) v_42 = carerror(v_41); else
    v_42 = car(v_41);
    v_41 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_42 == v_41) goto v_7;
    else goto v_8;
v_7:
    v_41 = nil;
    goto v_6;
v_8:
    v_41 = stack[0];
    if (!car_legal(v_41)) v_42 = carerror(v_41); else
    v_42 = car(v_41);
    v_41 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_42 == v_41) goto v_13;
    else goto v_14;
v_13:
    v_41 = lisp_true;
    goto v_6;
v_14:
    v_41 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // xdegreemon
    stack[-2] = (*qfn1(fn))(fn, v_41);
    }
    env = stack[-3];
    v_41 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // xdegreemon
    v_41 = (*qfn1(fn))(fn, v_41);
    }
    env = stack[-3];
    v_44 = stack[-2];
    v_43 = v_41;
    v_42 = v_44;
    v_41 = v_43;
    if (equal(v_42, v_41)) goto v_29;
    else goto v_30;
v_29:
    v_42 = stack[-1];
    v_41 = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // xord_lex
        return (*qfn2(fn))(fn, v_42, v_41);
    }
v_30:
    v_41 = v_44;
    v_42 = v_43;
        return Lgreaterp_2(nil, v_41, v_42);
    v_41 = nil;
    goto v_6;
    v_41 = nil;
v_6:
    return onevalue(v_41);
}



// Code for contr

static LispObject CC_contr(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    stack[-2] = nil;
v_8:
    v_26 = stack[0];
    if (v_26 == nil) goto v_11;
    else goto v_12;
v_11:
    v_26 = stack[-2];
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn1(fn))(fn, v_26);
    }
v_12:
    v_27 = stack[-1];
    v_26 = stack[0];
    if (!car_legal(v_26)) v_26 = carerror(v_26); else
    v_26 = car(v_26);
    {   LispObject fn = basic_elt(env, 2); // split!-road
    v_27 = (*qfn2(fn))(fn, v_27, v_26);
    }
    env = stack[-3];
    v_26 = stack[-2];
    v_26 = cons(v_27, v_26);
    env = stack[-3];
    stack[-2] = v_26;
    v_26 = stack[0];
    if (!car_legal(v_26)) v_26 = cdrerror(v_26); else
    v_26 = cdr(v_26);
    stack[0] = v_26;
    goto v_8;
    v_26 = nil;
    return onevalue(v_26);
}



// Code for repasc

static LispObject CC_repasc(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    v_47 = nil;
v_9:
    v_45 = stack[0];
    if (v_45 == nil) goto v_12;
    else goto v_13;
v_12:
    stack[-3] = v_47;
    stack[-1] = basic_elt(env, 1); // alg
    stack[0] = static_cast<LispObject>(112)+TAG_FIXNUM; // 7
    v_47 = basic_elt(env, 2); // "key"
    v_46 = stack[-2];
    v_45 = basic_elt(env, 3); // "not found"
    v_45 = list3(v_47, v_46, v_45);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 4); // rerror
    v_45 = (*qfn3(fn))(fn, stack[-1], stack[0], v_45);
    }
    env = stack[-4];
    {
        LispObject v_52 = stack[-3];
        LispObject fn = basic_elt(env, 5); // nreverse
        return (*qfn2(fn))(fn, v_52, v_45);
    }
v_13:
    v_46 = stack[-2];
    v_45 = stack[0];
    if (!car_legal(v_45)) v_45 = carerror(v_45); else
    v_45 = car(v_45);
    if (!car_legal(v_45)) v_45 = carerror(v_45); else
    v_45 = car(v_45);
    if (equal(v_46, v_45)) goto v_24;
    else goto v_25;
v_24:
    stack[-3] = v_47;
    v_47 = stack[-2];
    v_46 = stack[-1];
    v_45 = stack[0];
    if (!car_legal(v_45)) v_45 = cdrerror(v_45); else
    v_45 = cdr(v_45);
    v_45 = acons(v_47, v_46, v_45);
    env = stack[-4];
    {
        LispObject v_53 = stack[-3];
        LispObject fn = basic_elt(env, 5); // nreverse
        return (*qfn2(fn))(fn, v_53, v_45);
    }
v_25:
    v_45 = stack[0];
    if (!car_legal(v_45)) v_45 = carerror(v_45); else
    v_45 = car(v_45);
    v_46 = v_47;
    v_45 = cons(v_45, v_46);
    env = stack[-4];
    v_47 = v_45;
    v_45 = stack[0];
    if (!car_legal(v_45)) v_45 = cdrerror(v_45); else
    v_45 = cdr(v_45);
    stack[0] = v_45;
    goto v_9;
    v_45 = nil;
    return onevalue(v_45);
}



// Code for general!-reduce!-mod!-p

static LispObject CC_generalKreduceKmodKp(LispObject env,
                         LispObject v_2)
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
    v_51 = stack[0];
    if (v_51 == nil) goto v_6;
    else goto v_7;
v_6:
    v_51 = nil;
    goto v_5;
v_7:
    v_51 = stack[0];
    if (!consp(v_51)) goto v_14;
    else goto v_15;
v_14:
    v_51 = lisp_true;
    goto v_13;
v_15:
    v_51 = stack[0];
    if (!car_legal(v_51)) v_51 = carerror(v_51); else
    v_51 = car(v_51);
    v_51 = (consp(v_51) ? nil : lisp_true);
    goto v_13;
    v_51 = nil;
v_13:
    if (v_51 == nil) goto v_11;
    v_51 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // general!-modular!-number
    v_51 = (*qfn1(fn))(fn, v_51);
    }
    env = stack[-2];
    {
        LispObject fn = basic_elt(env, 2); // !*n2f
        return (*qfn1(fn))(fn, v_51);
    }
v_11:
    v_51 = stack[0];
    if (!car_legal(v_51)) v_51 = carerror(v_51); else
    v_51 = car(v_51);
    if (!car_legal(v_51)) v_51 = cdrerror(v_51); else
    v_51 = cdr(v_51);
    {   LispObject fn = basic_elt(env, 0); // general!-reduce!-mod!-p
    stack[-1] = (*qfn1(fn))(fn, v_51);
    }
    env = stack[-2];
    v_51 = stack[0];
    if (!car_legal(v_51)) v_51 = cdrerror(v_51); else
    v_51 = cdr(v_51);
    {   LispObject fn = basic_elt(env, 0); // general!-reduce!-mod!-p
    v_51 = (*qfn1(fn))(fn, v_51);
    }
    v_52 = stack[-1];
    v_53 = v_52;
    if (v_53 == nil) goto v_39;
    else goto v_40;
v_39:
    goto v_38;
v_40:
    v_53 = stack[0];
    if (!car_legal(v_53)) v_53 = carerror(v_53); else
    v_53 = car(v_53);
    if (!car_legal(v_53)) v_53 = carerror(v_53); else
    v_53 = car(v_53);
    return acons(v_53, v_52, v_51);
    v_51 = nil;
v_38:
    goto v_5;
    v_51 = nil;
v_5:
    return onevalue(v_51);
}



// Code for ordexn

static LispObject CC_ordexn(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_54, v_55;
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
    stack[-3] = nil;
v_9:
    v_54 = stack[-1];
    if (v_54 == nil) goto v_12;
    else goto v_13;
v_12:
    v_55 = stack[-2];
    v_54 = stack[-3];
    v_54 = cons(v_55, v_54);
    env = stack[-4];
    v_54 = Lreverse(nil, v_54);
    {
        LispObject v_60 = stack[0];
        return cons(v_60, v_54);
    }
v_13:
    v_55 = stack[-2];
    v_54 = stack[-1];
    if (!car_legal(v_54)) v_54 = carerror(v_54); else
    v_54 = car(v_54);
    if (v_55 == v_54) goto v_21;
    else goto v_22;
v_21:
    v_54 = nil;
    goto v_8;
v_22:
    v_54 = stack[-2];
    if (v_54 == nil) goto v_28;
    v_55 = stack[-2];
    v_54 = stack[-1];
    if (!car_legal(v_54)) v_54 = carerror(v_54); else
    v_54 = car(v_54);
    {   LispObject fn = basic_elt(env, 1); // ordop
    v_54 = (*qfn2(fn))(fn, v_55, v_54);
    }
    env = stack[-4];
    if (v_54 == nil) goto v_28;
    v_55 = stack[-2];
    v_54 = stack[-3];
    v_54 = cons(v_55, v_54);
    env = stack[-4];
    v_55 = Lreverse(nil, v_54);
    env = stack[-4];
    v_54 = stack[-1];
    v_54 = Lappend_2(nil, v_55, v_54);
    {
        LispObject v_61 = stack[0];
        return cons(v_61, v_54);
    }
v_28:
    v_54 = stack[-1];
    if (!car_legal(v_54)) v_55 = carerror(v_54); else
    v_55 = car(v_54);
    v_54 = stack[-3];
    v_54 = cons(v_55, v_54);
    env = stack[-4];
    stack[-3] = v_54;
    v_54 = stack[-1];
    if (!car_legal(v_54)) v_54 = cdrerror(v_54); else
    v_54 = cdr(v_54);
    stack[-1] = v_54;
    v_54 = stack[0];
    v_54 = (v_54 == nil ? lisp_true : nil);
    stack[0] = v_54;
    goto v_11;
v_11:
    goto v_9;
v_8:
    return onevalue(v_54);
}



// Code for ofsf_smmkatl1

static LispObject CC_ofsf_smmkatl1(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_23, v_24, v_25, v_26, v_27;
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
    v_25 = v_5;
    v_26 = v_4;
    v_27 = v_3;
    v_23 = v_2;
// end of prologue
    v_24 = v_23;
    v_23 = basic_elt(env, 1); // and
    if (v_24 == v_23) goto v_9;
    else goto v_10;
v_9:
    v_23 = v_27;
    v_24 = v_26;
    {
        LispObject fn = basic_elt(env, 2); // ofsf_smmkatl!-and
        return (*qfn3(fn))(fn, v_23, v_24, v_25);
    }
v_10:
    v_23 = v_27;
    v_24 = v_26;
    {
        LispObject fn = basic_elt(env, 3); // ofsf_smmkatl!-or
        return (*qfn3(fn))(fn, v_23, v_24, v_25);
    }
    v_23 = nil;
    return onevalue(v_23);
}



// Code for ibalp_calcmom

static LispObject CC_ibalp_calcmom(LispObject env,
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
    v_35 = stack[0];
    if (!car_legal(v_35)) v_35 = cdrerror(v_35); else
    v_35 = cdr(v_35);
    if (!car_legal(v_35)) v_35 = cdrerror(v_35); else
    v_35 = cdr(v_35);
    if (!car_legal(v_35)) v_35 = cdrerror(v_35); else
    v_35 = cdr(v_35);
    if (!car_legal(v_35)) v_35 = cdrerror(v_35); else
    v_35 = cdr(v_35);
    if (!car_legal(v_35)) v_36 = carerror(v_35); else
    v_36 = car(v_35);
    v_35 = stack[0];
    if (!car_legal(v_35)) v_35 = cdrerror(v_35); else
    v_35 = cdr(v_35);
    if (!car_legal(v_35)) v_35 = cdrerror(v_35); else
    v_35 = cdr(v_35);
    if (!car_legal(v_35)) v_35 = cdrerror(v_35); else
    v_35 = cdr(v_35);
    if (!car_legal(v_35)) v_35 = cdrerror(v_35); else
    v_35 = cdr(v_35);
    if (!car_legal(v_35)) v_35 = cdrerror(v_35); else
    v_35 = cdr(v_35);
    if (!car_legal(v_35)) v_35 = carerror(v_35); else
    v_35 = car(v_35);
    v_36 = plus2(v_36, v_35);
    env = stack[-2];
    v_35 = static_cast<LispObject>(512)+TAG_FIXNUM; // 32
    stack[-1] = times2(v_36, v_35);
    env = stack[-2];
    v_35 = stack[0];
    if (!car_legal(v_35)) v_35 = cdrerror(v_35); else
    v_35 = cdr(v_35);
    if (!car_legal(v_35)) v_35 = cdrerror(v_35); else
    v_35 = cdr(v_35);
    if (!car_legal(v_35)) v_35 = cdrerror(v_35); else
    v_35 = cdr(v_35);
    if (!car_legal(v_35)) v_35 = cdrerror(v_35); else
    v_35 = cdr(v_35);
    if (!car_legal(v_35)) v_36 = carerror(v_35); else
    v_36 = car(v_35);
    v_35 = stack[0];
    if (!car_legal(v_35)) v_35 = cdrerror(v_35); else
    v_35 = cdr(v_35);
    if (!car_legal(v_35)) v_35 = cdrerror(v_35); else
    v_35 = cdr(v_35);
    if (!car_legal(v_35)) v_35 = cdrerror(v_35); else
    v_35 = cdr(v_35);
    if (!car_legal(v_35)) v_35 = cdrerror(v_35); else
    v_35 = cdr(v_35);
    if (!car_legal(v_35)) v_35 = cdrerror(v_35); else
    v_35 = cdr(v_35);
    if (!car_legal(v_35)) v_35 = carerror(v_35); else
    v_35 = car(v_35);
    v_35 = times2(v_36, v_35);
    {
        LispObject v_39 = stack[-1];
        return plus2(v_39, v_35);
    }
}



// Code for groebcplistsortin

static LispObject CC_groebcplistsortin(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    stack[0] = v_3;
    v_19 = v_2;
// end of prologue
    v_18 = stack[0];
    if (v_18 == nil) goto v_7;
    else goto v_8;
v_7:
    v_18 = v_19;
    return ncons(v_18);
v_8:
    v_18 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // groebcplistsortin1
    v_18 = (*qfn2(fn))(fn, v_19, v_18);
    }
    v_18 = stack[0];
    goto v_6;
    v_18 = nil;
v_6:
    return onevalue(v_18);
}



// Code for invp

static LispObject CC_invp(LispObject env,
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
    v_38 = v_2;
// end of prologue
    v_37 = v_38;
    v_36 = basic_elt(env, 1); // unit
    if (v_37 == v_36) goto v_6;
    else goto v_7;
v_6:
    v_36 = v_38;
    goto v_5;
v_7:
    v_36 = v_38;
    if (!consp(v_36)) goto v_11;
    else goto v_12;
v_11:
    v_36 = v_38;
    v_37 = basic_elt(env, 2); // inverse
    return get(v_36, v_37);
v_12:
    v_36 = v_38;
    if (!car_legal(v_36)) v_37 = carerror(v_36); else
    v_37 = car(v_36);
    v_36 = basic_elt(env, 3); // (comm anticomm)
    v_36 = Lmember(nil, v_37, v_36);
    if (v_36 == nil) goto v_18;
    v_37 = basic_elt(env, 4); // quotient
    v_36 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return list3(v_37, v_36, v_38);
v_18:
    v_36 = v_38;
    if (!car_legal(v_36)) v_37 = carerror(v_36); else
    v_37 = car(v_36);
    v_36 = basic_elt(env, 2); // inverse
    v_36 = get(v_37, v_36);
    v_37 = v_38;
    if (!car_legal(v_37)) v_37 = cdrerror(v_37); else
    v_37 = cdr(v_37);
    return cons(v_36, v_37);
    v_36 = nil;
v_5:
    return onevalue(v_36);
}



// Code for th_match

static LispObject CC_th_match(LispObject env,
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
    v_27 = stack[-1];
    v_26 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // th_match0
    v_26 = (*qfn2(fn))(fn, v_27, v_26);
    }
    env = stack[-2];
    if (v_26 == nil) goto v_7;
    else goto v_8;
v_7:
    v_26 = nil;
    goto v_6;
v_8:
    v_26 = stack[-1];
    if (!car_legal(v_26)) v_26 = cdrerror(v_26); else
    v_26 = cdr(v_26);
    if (!car_legal(v_26)) v_26 = carerror(v_26); else
    v_26 = car(v_26);
    {   LispObject fn = basic_elt(env, 2); // dl_get
    v_26 = (*qfn1(fn))(fn, v_26);
    }
    env = stack[-2];
    stack[-1] = Llength(nil, v_26);
    env = stack[-2];
    v_26 = stack[0];
    if (!car_legal(v_26)) v_26 = cdrerror(v_26); else
    v_26 = cdr(v_26);
    if (!car_legal(v_26)) v_26 = carerror(v_26); else
    v_26 = car(v_26);
    {   LispObject fn = basic_elt(env, 2); // dl_get
    v_26 = (*qfn1(fn))(fn, v_26);
    }
    env = stack[-2];
    v_26 = Llength(nil, v_26);
    v_26 = (equal(stack[-1], v_26) ? lisp_true : nil);
    goto v_6;
    v_26 = nil;
v_6:
    return onevalue(v_26);
}



// Code for !:expt

static LispObject CC_Texpt(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(7);
// copy arguments values to proper place
    stack[-3] = v_3;
    stack[-4] = v_2;
// end of prologue
    v_120 = stack[-4];
    if (v_120 == nil) goto v_7;
    else goto v_8;
v_7:
    v_121 = stack[-3];
    v_120 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_121 == v_120) goto v_12;
    else goto v_13;
v_12:
    v_122 = basic_elt(env, 1); // poly
    v_121 = static_cast<LispObject>(176)+TAG_FIXNUM; // 11
    v_120 = basic_elt(env, 2); // "0/0 formed"
    {
        LispObject fn = basic_elt(env, 4); // rerror
        return (*qfn3(fn))(fn, v_122, v_121, v_120);
    }
v_13:
    v_120 = nil;
    goto v_11;
    v_120 = nil;
v_11:
    goto v_6;
v_8:
    v_121 = stack[-3];
    v_120 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_121 == v_120) goto v_23;
    else goto v_24;
v_23:
    v_120 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_6;
v_24:
    v_121 = stack[-3];
    v_120 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_121 == v_120) goto v_28;
    else goto v_29;
v_28:
    v_120 = stack[-4];
    goto v_6;
v_29:
    v_121 = stack[-4];
    v_120 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_121 == v_120) goto v_33;
    else goto v_34;
v_33:
    v_120 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_6;
v_34:
    v_121 = stack[-3];
    v_120 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_120 = static_cast<LispObject>(lessp2(v_121, v_120));
    v_120 = v_120 ? lisp_true : nil;
    env = stack[-6];
    if (v_120 == nil) goto v_39;
    v_120 = stack[-4];
    {   LispObject fn = basic_elt(env, 5); // fieldp
    v_120 = (*qfn1(fn))(fn, v_120);
    }
    env = stack[-6];
    if (v_120 == nil) goto v_47;
    else goto v_48;
v_47:
    v_120 = stack[-4];
    {   LispObject fn = basic_elt(env, 6); // mkratnum
    v_120 = (*qfn1(fn))(fn, v_120);
    }
    env = stack[-6];
    stack[0] = v_120;
    goto v_46;
v_48:
    v_120 = stack[-4];
    stack[0] = v_120;
    goto v_46;
    stack[0] = nil;
v_46:
    v_120 = stack[-3];
    v_120 = negate(v_120);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 0); // !:expt
    v_120 = (*qfn2(fn))(fn, stack[0], v_120);
    }
    env = stack[-6];
    {
        LispObject fn = basic_elt(env, 7); // !:recip
        return (*qfn1(fn))(fn, v_120);
    }
v_39:
    v_120 = stack[-4];
    if (!consp(v_120)) goto v_58;
    else goto v_59;
v_58:
    v_121 = stack[-4];
    v_120 = stack[-3];
        return Lexpt(nil, v_121, v_120);
v_59:
    v_120 = stack[-4];
    if (!car_legal(v_120)) v_121 = carerror(v_120); else
    v_121 = car(v_120);
    v_120 = basic_elt(env, 3); // expt
    v_120 = get(v_121, v_120);
    env = stack[-6];
    stack[-2] = v_120;
    if (v_120 == nil) goto v_75;
    v_122 = stack[-2];
    v_121 = stack[-4];
    v_120 = stack[-3];
        return Lapply2(nil, v_122, v_121, v_120);
v_75:
    v_120 = stack[-4];
    if (!car_legal(v_120)) v_120 = carerror(v_120); else
    v_120 = car(v_120);
    if (!symbolp(v_120)) v_121 = nil;
    else { v_121 = qfastgets(v_120);
           if (v_121 != nil) { v_121 = elt(v_121, 34); // i2d
#ifdef RECORD_GET
             if (v_121 != SPID_NOPROP)
                record_get(elt(fastget_names, 34), 1);
             else record_get(elt(fastget_names, 34), 0),
                v_121 = nil; }
           else record_get(elt(fastget_names, 34), 0); }
#else
             if (v_121 == SPID_NOPROP) v_121 = nil; }}
#endif
    v_120 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_120 = Lapply1(nil, v_121, v_120);
    env = stack[-6];
    stack[-5] = v_120;
    v_120 = stack[-4];
    if (!car_legal(v_120)) v_120 = carerror(v_120); else
    v_120 = car(v_120);
    if (!symbolp(v_120)) v_120 = nil;
    else { v_120 = qfastgets(v_120);
           if (v_120 != nil) { v_120 = elt(v_120, 54); // times
#ifdef RECORD_GET
             if (v_120 != SPID_NOPROP)
                record_get(elt(fastget_names, 54), 1);
             else record_get(elt(fastget_names, 54), 0),
                v_120 = nil; }
           else record_get(elt(fastget_names, 54), 0); }
#else
             if (v_120 == SPID_NOPROP) v_120 = nil; }}
#endif
    stack[-2] = v_120;
v_71:
    v_120 = stack[-3];
    stack[-1] = v_120;
    stack[0] = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_121 = stack[-3];
    v_120 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_120 = quot2(v_121, v_120);
    env = stack[-6];
    stack[-3] = v_120;
    v_120 = times2(stack[0], v_120);
    env = stack[-6];
    v_121 = difference2(stack[-1], v_120);
    env = stack[-6];
    v_120 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_121 == v_120) goto v_96;
    v_122 = stack[-2];
    v_121 = stack[-4];
    v_120 = stack[-5];
    v_120 = Lapply2(nil, v_122, v_121, v_120);
    env = stack[-6];
    stack[-5] = v_120;
    goto v_94;
v_96:
v_94:
    v_121 = stack[-3];
    v_120 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_121 == v_120) goto v_111;
    else goto v_112;
v_111:
    v_120 = stack[-5];
    goto v_70;
v_112:
    v_122 = stack[-2];
    v_121 = stack[-4];
    v_120 = stack[-4];
    v_120 = Lapply2(nil, v_122, v_121, v_120);
    env = stack[-6];
    stack[-4] = v_120;
    goto v_71;
v_70:
    goto v_6;
    v_120 = nil;
v_6:
    return onevalue(v_120);
}



// Code for print_with_margin_sub

static LispObject CC_print_with_margin_sub(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_256, v_257;
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(9);
// copy arguments values to proper place
    stack[-3] = v_5;
    stack[-4] = v_4;
    stack[-5] = v_3;
    stack[-6] = v_2;
// end of prologue
    v_257 = stack[-4];
    v_256 = static_cast<LispObject>(160)+TAG_FIXNUM; // 10
    v_256 = static_cast<LispObject>(lessp2(v_257, v_256));
    v_256 = v_256 ? lisp_true : nil;
    env = stack[-8];
    if (v_256 == nil) goto v_14;
    v_256 = static_cast<LispObject>(160)+TAG_FIXNUM; // 10
    stack[-4] = v_256;
    goto v_12;
v_14:
v_12:
    stack[0] = stack[-5];
    v_257 = stack[-4];
    v_256 = static_cast<LispObject>(160)+TAG_FIXNUM; // 10
    v_256 = difference2(v_257, v_256);
    env = stack[-8];
    v_256 = static_cast<LispObject>(greaterp2(stack[0], v_256));
    v_256 = v_256 ? lisp_true : nil;
    env = stack[-8];
    if (v_256 == nil) goto v_22;
    v_257 = stack[-4];
    v_256 = static_cast<LispObject>(160)+TAG_FIXNUM; // 10
    v_256 = difference2(v_257, v_256);
    env = stack[-8];
    stack[-5] = v_256;
    goto v_20;
v_22:
v_20:
    v_256 = stack[-6];
    stack[-7] = v_256;
    v_256 = stack[-7];
    if (!consp(v_256)) goto v_35;
    v_257 = Lposn(nil);
    env = stack[-8];
    v_256 = stack[-4];
    v_256 = static_cast<LispObject>(geq2(v_257, v_256));
    v_256 = v_256 ? lisp_true : nil;
    env = stack[-8];
    if (v_256 == nil) goto v_40;
    v_256 = Lterpri(nil);
    env = stack[-8];
    v_256 = stack[-5];
    v_256 = Lttab(nil, v_256);
    env = stack[-8];
    goto v_38;
v_40:
v_38:
    v_256 = basic_elt(env, 1); // "("
    v_256 = Lprinc(nil, v_256);
    env = stack[-8];
    v_256 = stack[-7];
    if (!car_legal(v_256)) stack[-2] = carerror(v_256); else
    stack[-2] = car(v_256);
    stack[-1] = stack[-5];
    stack[0] = stack[-4];
    v_256 = stack[-3];
    v_256 = ncons(v_256);
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 0); // print_with_margin_sub
    v_256 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_256);
    }
    env = stack[-8];
v_58:
    v_256 = stack[-7];
    if (!car_legal(v_256)) v_256 = cdrerror(v_256); else
    v_256 = cdr(v_256);
    stack[-7] = v_256;
    if (!consp(v_256)) goto v_61;
    else goto v_62;
v_61:
    goto v_57;
v_62:
    v_257 = Lposn(nil);
    env = stack[-8];
    v_256 = stack[-4];
    v_256 = static_cast<LispObject>(geq2(v_257, v_256));
    v_256 = v_256 ? lisp_true : nil;
    env = stack[-8];
    if (v_256 == nil) goto v_69;
    v_256 = Lterpri(nil);
    env = stack[-8];
    v_256 = stack[-5];
    v_256 = Lttab(nil, v_256);
    env = stack[-8];
    goto v_67;
v_69:
    v_256 = basic_elt(env, 2); // " "
    v_256 = Lprinc(nil, v_256);
    env = stack[-8];
    goto v_67;
v_67:
    v_256 = stack[-7];
    if (!car_legal(v_256)) stack[-2] = carerror(v_256); else
    stack[-2] = car(v_256);
    stack[-1] = stack[-5];
    stack[0] = stack[-4];
    v_256 = stack[-3];
    v_256 = ncons(v_256);
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 0); // print_with_margin_sub
    v_256 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_256);
    }
    env = stack[-8];
    goto v_58;
v_57:
    v_256 = stack[-7];
    if (v_256 == nil) goto v_90;
    stack[0] = Lposn(nil);
    env = stack[-8];
    v_256 = stack[-4];
    v_256 = sub1(v_256);
    env = stack[-8];
    v_256 = static_cast<LispObject>(geq2(stack[0], v_256));
    v_256 = v_256 ? lisp_true : nil;
    env = stack[-8];
    if (v_256 == nil) goto v_95;
    v_256 = Lterpri(nil);
    env = stack[-8];
    v_256 = stack[-5];
    v_256 = Lttab(nil, v_256);
    env = stack[-8];
    v_256 = basic_elt(env, 3); // ". "
    v_256 = Lprinc(nil, v_256);
    env = stack[-8];
    goto v_93;
v_95:
    v_256 = basic_elt(env, 4); // " ."
    v_256 = Lprinc(nil, v_256);
    env = stack[-8];
    goto v_93;
v_93:
    stack[-2] = stack[-7];
    stack[-1] = stack[-5];
    stack[0] = stack[-4];
    v_256 = stack[-3];
    v_256 = ncons(v_256);
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 0); // print_with_margin_sub
    v_256 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_256);
    }
    env = stack[-8];
    goto v_88;
v_90:
v_88:
    v_257 = Lposn(nil);
    env = stack[-8];
    v_256 = stack[-4];
    v_256 = static_cast<LispObject>(geq2(v_257, v_256));
    v_256 = v_256 ? lisp_true : nil;
    env = stack[-8];
    if (v_256 == nil) goto v_118;
    v_256 = Lterpri(nil);
    env = stack[-8];
    v_256 = stack[-5];
    v_256 = Lttab(nil, v_256);
    env = stack[-8];
    goto v_116;
v_118:
v_116:
    v_256 = basic_elt(env, 5); // ")"
    v_256 = Lprinc(nil, v_256);
    v_256 = stack[-6];
    goto v_9;
v_35:
    stack[0] = stack[-3];
    v_256 = stack[-6];
    v_256 = ncons(v_256);
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 7); // apply
    v_256 = (*qfn2(fn))(fn, stack[0], v_256);
    }
    env = stack[-8];
    stack[-7] = v_256;
v_10:
    stack[0] = Lposn(nil);
    env = stack[-8];
    v_256 = stack[-7];
    v_256 = Llength(nil, v_256);
    env = stack[-8];
    v_257 = plus2(stack[0], v_256);
    env = stack[-8];
    v_256 = stack[-4];
    v_256 = static_cast<LispObject>(lessp2(v_257, v_256));
    v_256 = v_256 ? lisp_true : nil;
    env = stack[-8];
    if (v_256 == nil) goto v_135;
    v_256 = stack[-7];
    stack[0] = v_256;
v_145:
    v_256 = stack[0];
    if (v_256 == nil) goto v_149;
    else goto v_150;
v_149:
    goto v_144;
v_150:
    v_256 = stack[0];
    if (!car_legal(v_256)) v_256 = carerror(v_256); else
    v_256 = car(v_256);
    v_256 = Lprinc(nil, v_256);
    env = stack[-8];
    v_256 = stack[0];
    if (!car_legal(v_256)) v_256 = cdrerror(v_256); else
    v_256 = cdr(v_256);
    stack[0] = v_256;
    goto v_145;
v_144:
    v_256 = stack[-6];
    goto v_9;
v_135:
    v_256 = stack[-7];
    stack[0] = Llength(nil, v_256);
    env = stack[-8];
    v_257 = stack[-4];
    v_256 = stack[-5];
    v_256 = difference2(v_257, v_256);
    env = stack[-8];
    v_256 = static_cast<LispObject>(lesseq2(stack[0], v_256));
    v_256 = v_256 ? lisp_true : nil;
    env = stack[-8];
    if (v_256 == nil) goto v_162;
    v_256 = Lterpri(nil);
    env = stack[-8];
    v_256 = stack[-5];
    v_256 = Lttab(nil, v_256);
    env = stack[-8];
    v_256 = stack[-7];
    stack[0] = v_256;
v_175:
    v_256 = stack[0];
    if (v_256 == nil) goto v_179;
    else goto v_180;
v_179:
    goto v_174;
v_180:
    v_256 = stack[0];
    if (!car_legal(v_256)) v_256 = carerror(v_256); else
    v_256 = car(v_256);
    v_256 = Lprinc(nil, v_256);
    env = stack[-8];
    v_256 = stack[0];
    if (!car_legal(v_256)) v_256 = cdrerror(v_256); else
    v_256 = cdr(v_256);
    stack[0] = v_256;
    goto v_175;
v_174:
    v_256 = stack[-6];
    goto v_9;
v_162:
    v_256 = stack[-7];
    v_257 = Llength(nil, v_256);
    env = stack[-8];
    v_256 = stack[-4];
    v_256 = static_cast<LispObject>(lessp2(v_257, v_256));
    v_256 = v_256 ? lisp_true : nil;
    env = stack[-8];
    if (v_256 == nil) goto v_192;
    v_256 = Lterpri(nil);
    env = stack[-8];
    stack[0] = stack[-4];
    v_256 = stack[-7];
    v_256 = Llength(nil, v_256);
    env = stack[-8];
    v_256 = difference2(stack[0], v_256);
    env = stack[-8];
    v_256 = Lttab(nil, v_256);
    env = stack[-8];
    v_256 = stack[-7];
    stack[0] = v_256;
v_206:
    v_256 = stack[0];
    if (v_256 == nil) goto v_210;
    else goto v_211;
v_210:
    goto v_205;
v_211:
    v_256 = stack[0];
    if (!car_legal(v_256)) v_256 = carerror(v_256); else
    v_256 = car(v_256);
    v_256 = Lprinc(nil, v_256);
    env = stack[-8];
    v_256 = stack[0];
    if (!car_legal(v_256)) v_256 = cdrerror(v_256); else
    v_256 = cdr(v_256);
    stack[0] = v_256;
    goto v_206;
v_205:
    v_256 = stack[-6];
    goto v_9;
v_192:
    stack[0] = Lposn(nil);
    env = stack[-8];
    v_257 = stack[-4];
    v_256 = static_cast<LispObject>(80)+TAG_FIXNUM; // 5
    v_256 = difference2(v_257, v_256);
    env = stack[-8];
    v_256 = static_cast<LispObject>(geq2(stack[0], v_256));
    v_256 = v_256 ? lisp_true : nil;
    env = stack[-8];
    if (v_256 == nil) goto v_227;
    v_256 = Lterpri(nil);
    env = stack[-8];
    v_256 = stack[-5];
    v_256 = Lttab(nil, v_256);
    env = stack[-8];
    goto v_225;
v_227:
v_225:
v_238:
    stack[0] = Lposn(nil);
    env = stack[-8];
    v_256 = stack[-4];
    v_256 = sub1(v_256);
    env = stack[-8];
    v_256 = static_cast<LispObject>(lessp2(stack[0], v_256));
    v_256 = v_256 ? lisp_true : nil;
    env = stack[-8];
    if (v_256 == nil) goto v_241;
    else goto v_242;
v_241:
    goto v_237;
v_242:
    v_256 = stack[-7];
    if (!car_legal(v_256)) v_256 = carerror(v_256); else
    v_256 = car(v_256);
    v_256 = Lprinc(nil, v_256);
    env = stack[-8];
    v_256 = stack[-7];
    if (!car_legal(v_256)) v_256 = cdrerror(v_256); else
    v_256 = cdr(v_256);
    stack[-7] = v_256;
    goto v_238;
v_237:
    v_256 = basic_elt(env, 6); // "\"
    v_256 = Lprinc(nil, v_256);
    env = stack[-8];
    v_256 = Lterpri(nil);
    env = stack[-8];
    goto v_10;
    v_256 = nil;
v_9:
    return onevalue(v_256);
}



// Code for simp!*sq

static LispObject CC_simpHsq(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_21, v_22;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_22 = v_2;
// end of prologue
    v_21 = v_22;
    if (!car_legal(v_21)) v_21 = cdrerror(v_21); else
    v_21 = cdr(v_21);
    if (!car_legal(v_21)) v_21 = carerror(v_21); else
    v_21 = car(v_21);
    if (v_21 == nil) goto v_7;
    v_21 = qvalue(basic_elt(env, 1)); // !*resimp
    if (v_21 == nil) goto v_12;
    else goto v_7;
v_12:
    v_21 = v_22;
    if (!car_legal(v_21)) v_21 = carerror(v_21); else
    v_21 = car(v_21);
    goto v_5;
v_7:
    v_21 = v_22;
    if (!car_legal(v_21)) v_21 = carerror(v_21); else
    v_21 = car(v_21);
    {
        LispObject fn = basic_elt(env, 2); // resimp1
        return (*qfn1(fn))(fn, v_21);
    }
    v_21 = nil;
v_5:
    return onevalue(v_21);
}



// Code for talp_invn

static LispObject CC_talp_invn(LispObject env,
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
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_15 = v_2;
// end of prologue
    {   LispObject fn = basic_elt(env, 1); // talp_op
    v_15 = (*qfn1(fn))(fn, v_15);
    }
    env = stack[0];
    v_15 = Lexplodec(nil, v_15);
    env = stack[0];
    if (!car_legal(v_15)) v_15 = cdrerror(v_15); else
    v_15 = cdr(v_15);
    if (!car_legal(v_15)) v_15 = cdrerror(v_15); else
    v_15 = cdr(v_15);
    if (!car_legal(v_15)) v_15 = cdrerror(v_15); else
    v_15 = cdr(v_15);
    if (!car_legal(v_15)) v_15 = cdrerror(v_15); else
    v_15 = cdr(v_15);
    if (!car_legal(v_15)) v_15 = cdrerror(v_15); else
    v_15 = cdr(v_15);
    if (!car_legal(v_15)) v_15 = carerror(v_15); else
    v_15 = car(v_15);
    v_15 = ncons(v_15);
        return Lcompress(nil, v_15);
}



// Code for cl_susiminlevel

static LispObject CC_cl_susiminlevel(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_22, v_23, v_24, v_25;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_24 = v_3;
    v_25 = v_2;
// end of prologue
    v_23 = v_25;
    v_22 = basic_elt(env, 1); // ignore
    if (v_23 == v_22) goto v_7;
    else goto v_8;
v_7:
    v_22 = v_24;
    goto v_6;
v_8:
    v_23 = v_24;
    v_22 = basic_elt(env, 1); // ignore
    if (v_23 == v_22) goto v_12;
    else goto v_13;
v_12:
    v_22 = v_25;
    goto v_6;
v_13:
    v_22 = v_25;
    v_23 = v_24;
    {
        LispObject fn = basic_elt(env, 2); // min
        return (*qfn2(fn))(fn, v_22, v_23);
    }
    v_22 = nil;
v_6:
    return onevalue(v_22);
}



// Code for tobvarir

static LispObject CC_tobvarir(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[-1] = v_2;
// end of prologue
    v_20 = stack[-1];
    if (v_20 == nil) goto v_9;
    stack[-2] = basic_elt(env, 1); // bvar
    v_20 = stack[-1];
    if (!car_legal(v_20)) v_21 = carerror(v_20); else
    v_21 = car(v_20);
    v_20 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[0] = list2(v_21, v_20);
    env = stack[-3];
    v_20 = stack[-1];
    if (!car_legal(v_20)) v_20 = cdrerror(v_20); else
    v_20 = cdr(v_20);
    {   LispObject fn = basic_elt(env, 0); // tobvarir
    v_20 = (*qfn1(fn))(fn, v_20);
    }
    {
        LispObject v_25 = stack[-2];
        LispObject v_26 = stack[0];
        return acons(v_25, v_26, v_20);
    }
v_9:
    v_20 = nil;
    return onevalue(v_20);
}



// Code for formcond

static LispObject CC_formcond(LispObject env,
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
    stack[0] = basic_elt(env, 1); // cond
    if (!car_legal(v_15)) v_15 = cdrerror(v_15); else
    v_15 = cdr(v_15);
    {   LispObject fn = basic_elt(env, 2); // formcond1
    v_13 = (*qfn3(fn))(fn, v_15, v_14, v_13);
    }
    {
        LispObject v_17 = stack[0];
        return cons(v_17, v_13);
    }
}



// Code for evalequal

static LispObject CC_evalequal(LispObject env,
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    stack[-1] = v_3;
    stack[-2] = v_2;
// end of prologue
    v_39 = stack[-2];
    {   LispObject fn = basic_elt(env, 2); // getrtype
    stack[0] = (*qfn1(fn))(fn, v_39);
    }
    env = stack[-4];
    stack[-3] = stack[0];
    v_39 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // getrtype
    v_39 = (*qfn1(fn))(fn, v_39);
    }
    env = stack[-4];
    if (equal(stack[0], v_39)) goto v_11;
    v_39 = nil;
    goto v_9;
v_11:
    v_39 = stack[-3];
    if (v_39 == nil) goto v_17;
    else goto v_18;
v_17:
    v_41 = basic_elt(env, 1); // difference
    v_40 = stack[-2];
    v_39 = stack[-1];
    v_39 = list3(v_41, v_40, v_39);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 3); // reval
    v_39 = (*qfn1(fn))(fn, v_39);
    }
    stack[-3] = v_39;
    if (is_number(v_39)) goto v_23;
    v_39 = nil;
    goto v_21;
v_23:
    v_39 = stack[-3];
        return Lzerop(nil, v_39);
    v_39 = nil;
v_21:
    goto v_9;
v_18:
    v_40 = stack[-2];
    v_39 = stack[-1];
    v_39 = (equal(v_40, v_39) ? lisp_true : nil);
    goto v_9;
    v_39 = nil;
v_9:
    return onevalue(v_39);
}



// Code for mv2sf1

static LispObject CC_mv2sf1(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
v_8:
    v_39 = stack[-2];
    if (v_39 == nil) goto v_11;
    else goto v_12;
v_11:
    v_39 = stack[-1];
    goto v_7;
v_12:
    v_39 = stack[-2];
    if (!car_legal(v_39)) v_40 = carerror(v_39); else
    v_40 = car(v_39);
    v_39 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_40 == v_39) goto v_15;
    else goto v_16;
v_15:
    v_39 = stack[-2];
    if (!car_legal(v_39)) v_39 = cdrerror(v_39); else
    v_39 = cdr(v_39);
    stack[-2] = v_39;
    v_39 = stack[0];
    if (!car_legal(v_39)) v_39 = cdrerror(v_39); else
    v_39 = cdr(v_39);
    stack[0] = v_39;
    goto v_8;
v_16:
    v_39 = stack[0];
    if (!car_legal(v_39)) v_40 = carerror(v_39); else
    v_40 = car(v_39);
    v_39 = stack[-2];
    if (!car_legal(v_39)) v_39 = carerror(v_39); else
    v_39 = car(v_39);
    {   LispObject fn = basic_elt(env, 1); // to
    stack[-3] = (*qfn2(fn))(fn, v_40, v_39);
    }
    env = stack[-4];
    v_39 = stack[-2];
    if (!car_legal(v_39)) v_41 = cdrerror(v_39); else
    v_41 = cdr(v_39);
    v_40 = stack[-1];
    v_39 = stack[0];
    if (!car_legal(v_39)) v_39 = cdrerror(v_39); else
    v_39 = cdr(v_39);
    {   LispObject fn = basic_elt(env, 0); // mv2sf1
    v_39 = (*qfn3(fn))(fn, v_41, v_40, v_39);
    }
    env = stack[-4];
    v_39 = cons(stack[-3], v_39);
    return ncons(v_39);
    v_39 = nil;
v_7:
    return onevalue(v_39);
}



// Code for di_insert

static LispObject CC_di_insert(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    v_55 = stack[-2];
    if (v_55 == nil) goto v_13;
    else goto v_14;
v_13:
    v_55 = stack[-3];
    if (v_55 == nil) goto v_19;
    v_57 = stack[-3];
    v_56 = nil;
    v_55 = stack[-1];
    return acons(v_57, v_56, v_55);
v_19:
    v_55 = stack[-1];
    goto v_9;
    goto v_12;
v_14:
    v_56 = stack[-3];
    v_55 = stack[-2];
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    {   LispObject fn = basic_elt(env, 1); // eqdummy
    v_55 = (*qfn2(fn))(fn, v_56, v_55);
    }
    env = stack[-5];
    if (v_55 == nil) goto v_29;
    v_55 = nil;
    stack[-4] = v_55;
    v_55 = stack[-2];
    if (!car_legal(v_55)) v_55 = cdrerror(v_55); else
    v_55 = cdr(v_55);
    stack[0] = v_55;
    v_55 = stack[-2];
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    if (!car_legal(v_55)) v_57 = carerror(v_55); else
    v_57 = car(v_55);
    v_56 = stack[-3];
    v_55 = stack[-1];
    v_55 = acons(v_57, v_56, v_55);
    env = stack[-5];
    stack[-1] = v_55;
    v_55 = stack[0];
    stack[-2] = v_55;
    v_55 = stack[-4];
    stack[-3] = v_55;
    goto v_10;
v_29:
    v_55 = stack[-2];
    if (!car_legal(v_55)) v_55 = cdrerror(v_55); else
    v_55 = cdr(v_55);
    stack[-4] = v_55;
    v_55 = stack[-2];
    if (!car_legal(v_55)) v_56 = carerror(v_55); else
    v_56 = car(v_55);
    v_55 = stack[-1];
    v_55 = cons(v_56, v_55);
    env = stack[-5];
    stack[-1] = v_55;
    v_55 = stack[-4];
    stack[-2] = v_55;
    goto v_10;
v_12:
    v_55 = nil;
v_9:
    return onevalue(v_55);
}



// Code for decprec2internal

static LispObject CC_decprec2internal(LispObject env,
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
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_10 = v_2;
// end of prologue
    v_11 = v_10;
    v_10 = qvalue(basic_elt(env, 1)); // !!log2of10
    v_10 = times2(v_11, v_10);
    env = stack[0];
    {   LispObject fn = basic_elt(env, 2); // ceiling
    v_11 = (*qfn1(fn))(fn, v_10);
    }
    v_10 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    return plus2(v_11, v_10);
}



// Code for carrassoc

static LispObject CC_carrassoc(LispObject env,
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
    v_29 = stack[-1];
    v_28 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // rassoc
    v_28 = (*qfn2(fn))(fn, v_29, v_28);
    }
    env = stack[-2];
    v_29 = v_28;
    if (!consp(v_28)) goto v_11;
    v_28 = v_29;
    if (!car_legal(v_28)) v_28 = carerror(v_28); else
    v_28 = car(v_28);
    goto v_7;
v_11:
    v_28 = Lterpri(nil);
    env = stack[-2];
    v_28 = basic_elt(env, 1); // "RASSOC trouble: "
    v_28 = Lprinc(nil, v_28);
    env = stack[-2];
    v_28 = stack[-1];
    v_28 = Lprin(nil, v_28);
    env = stack[-2];
    v_28 = basic_elt(env, 2); // " "
    v_28 = Lprinc(nil, v_28);
    env = stack[-2];
    v_28 = stack[0];
    v_28 = Lprint(nil, v_28);
    env = stack[-2];
    v_28 = basic_elt(env, 3); // "rassoc trouble"
    {   LispObject fn = basic_elt(env, 5); // rederr
    v_28 = (*qfn1(fn))(fn, v_28);
    }
    v_28 = nil;
v_7:
    return onevalue(v_28);
}



// Code for make_tuple_type

static LispObject CC_make_tuple_type(LispObject env,
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
    v_24 = v_2;
// end of prologue
    v_23 = v_24;
    if (v_23 == nil) goto v_6;
    else goto v_7;
v_6:
    v_23 = basic_elt(env, 1); // unit
    goto v_5;
v_7:
    v_23 = v_24;
    if (!car_legal(v_23)) v_23 = cdrerror(v_23); else
    v_23 = cdr(v_23);
    if (v_23 == nil) goto v_10;
    else goto v_11;
v_10:
    v_23 = v_24;
    if (!car_legal(v_23)) v_23 = carerror(v_23); else
    v_23 = car(v_23);
    if (!car_legal(v_23)) v_23 = cdrerror(v_23); else
    v_23 = cdr(v_23);
    goto v_5;
v_11:
    stack[0] = basic_elt(env, 2); // times
    v_23 = v_24;
    {   LispObject fn = basic_elt(env, 3); // collect_cdrs
    v_23 = (*qfn1(fn))(fn, v_23);
    }
    {
        LispObject v_26 = stack[0];
        return cons(v_26, v_23);
    }
    v_23 = nil;
v_5:
    return onevalue(v_23);
}



// Code for triplesetprolongset

static LispObject CC_triplesetprolongset(LispObject env,
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
    v_30 = nil;
v_10:
    v_29 = stack[0];
    if (v_29 == nil) goto v_13;
    else goto v_14;
v_13:
    goto v_9;
v_14:
    v_29 = stack[0];
    if (!car_legal(v_29)) v_29 = carerror(v_29); else
    v_29 = car(v_29);
    v_29 = cons(v_29, v_30);
    env = stack[-2];
    v_30 = v_29;
    v_29 = stack[0];
    if (!car_legal(v_29)) v_29 = cdrerror(v_29); else
    v_29 = cdr(v_29);
    stack[0] = v_29;
    goto v_10;
v_9:
    stack[0] = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_29 = v_30;
    v_29 = Lreverse(nil, v_29);
    env = stack[-2];
    v_29 = Lputv(nil, stack[-1], stack[0], v_29);
    v_29 = nil;
    return onevalue(v_29);
}



// Code for findnthroot

static LispObject CC_findnthroot(LispObject env,
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
    v_5 = nil;
    return onevalue(v_5);
}



// Code for basic!-simpexpt

static LispObject CC_basicKsimpexpt(LispObject env,
                         LispObject v_2)
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
    v_24 = nil;
// Binding kord!*
// FLUIDBIND: reloadenv=2 litvec-offset=1 saveloc=1
{   bind_fluid_stack bind_fluid_var(-2, 1, -1);
    setvalue(basic_elt(env, 1), v_24); // kord!*
    v_24 = stack[0];
    if (!car_legal(v_24)) v_25 = cdrerror(v_24); else
    v_25 = cdr(v_24);
    v_24 = basic_elt(env, 2); // expt
    {   LispObject fn = basic_elt(env, 4); // carx
    v_24 = (*qfn2(fn))(fn, v_25, v_24);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 5); // simpexpon
    v_24 = (*qfn1(fn))(fn, v_24);
    }
    env = stack[-2];
    ;}  // end of a binding scope
    v_25 = v_24;
    v_24 = basic_elt(env, 3); // resimp
    {   LispObject fn = basic_elt(env, 6); // simpexpon1
    v_24 = (*qfn2(fn))(fn, v_25, v_24);
    }
    env = stack[-2];
    v_25 = stack[0];
    if (!car_legal(v_25)) v_26 = carerror(v_25); else
    v_26 = car(v_25);
    v_25 = v_24;
    v_24 = nil;
    {
        LispObject fn = basic_elt(env, 7); // simpexpt1
        return (*qfn3(fn))(fn, v_26, v_25, v_24);
    }
    return onevalue(v_24);
}



// Code for applyrd

static LispObject CC_applyrd(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil);
    stack_popper stack_popper_var(2);
// end of prologue
    {   LispObject fn = basic_elt(env, 6); // lex
    v_39 = (*qfn0(fn))(fn);
    }
    env = stack[-1];
    v_40 = qvalue(basic_elt(env, 1)); // atts
    v_39 = basic_elt(env, 2); // (type definitionurl encoding)
    {   LispObject fn = basic_elt(env, 7); // retattributes
    v_39 = (*qfn2(fn))(fn, v_40, v_39);
    }
    env = stack[-1];
    setvalue(basic_elt(env, 3), v_39); // mmlatts
    v_39 = qvalue(basic_elt(env, 4)); // char
    {   LispObject fn = basic_elt(env, 8); // compress!*
    v_40 = (*qfn1(fn))(fn, v_39);
    }
    env = stack[-1];
    v_39 = qvalue(basic_elt(env, 5)); // functions!*
    v_39 = Lassoc(nil, v_40, v_39);
    stack[0] = v_39;
    if (v_39 == nil) goto v_14;
    v_39 = stack[0];
    if (!car_legal(v_39)) v_39 = cdrerror(v_39); else
    v_39 = cdr(v_39);
    if (!car_legal(v_39)) v_40 = carerror(v_39); else
    v_40 = car(v_39);
    v_39 = nil;
    {   LispObject fn = basic_elt(env, 9); // apply
    v_39 = (*qfn2(fn))(fn, v_40, v_39);
    }
    env = stack[-1];
    v_40 = v_39;
    v_39 = qvalue(basic_elt(env, 3)); // mmlatts
    v_39 = cons(v_39, v_40);
    env = stack[-1];
    v_40 = v_39;
    v_39 = nil;
    setvalue(basic_elt(env, 3), v_39); // mmlatts
    v_39 = stack[0];
    if (!car_legal(v_39)) v_39 = cdrerror(v_39); else
    v_39 = cdr(v_39);
    if (!car_legal(v_39)) v_39 = cdrerror(v_39); else
    v_39 = cdr(v_39);
    if (!car_legal(v_39)) v_39 = carerror(v_39); else
    v_39 = car(v_39);
    return cons(v_39, v_40);
v_14:
    v_39 = qvalue(basic_elt(env, 4)); // char
    v_40 = Lcompress(nil, v_39);
    env = stack[-1];
    v_39 = static_cast<LispObject>(272)+TAG_FIXNUM; // 17
    {   LispObject fn = basic_elt(env, 10); // errorml
    v_39 = (*qfn2(fn))(fn, v_40, v_39);
    }
    v_39 = nil;
    return onevalue(v_39);
}



// Code for merge!-ind!-vars

static LispObject CC_mergeKindKvars(LispObject env,
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
    v_41 = qvalue(basic_elt(env, 1)); // !*nocommutedf
    if (v_41 == nil) goto v_9;
    else goto v_7;
v_9:
    v_41 = qvalue(basic_elt(env, 2)); // !*commutedf
    if (v_41 == nil) goto v_14;
    else goto v_15;
v_14:
    v_41 = stack[-1];
    if (!car_legal(v_41)) v_41 = cdrerror(v_41); else
    v_41 = cdr(v_41);
    if (!car_legal(v_41)) stack[-2] = carerror(v_41); else
    stack[-2] = car(v_41);
    v_42 = stack[0];
    v_41 = stack[-1];
    if (!car_legal(v_41)) v_41 = cdrerror(v_41); else
    v_41 = cdr(v_41);
    if (!car_legal(v_41)) v_41 = cdrerror(v_41); else
    v_41 = cdr(v_41);
    v_41 = cons(v_42, v_41);
    env = stack[-3];
    v_41 = Lmemq(nil, stack[-2], v_41);
    goto v_13;
v_15:
    v_41 = nil;
    goto v_13;
    v_41 = nil;
v_13:
    if (v_41 == nil) goto v_11;
    else goto v_7;
v_11:
    goto v_8;
v_7:
    v_42 = stack[0];
    v_41 = stack[-1];
    if (!car_legal(v_41)) v_41 = cdrerror(v_41); else
    v_41 = cdr(v_41);
    if (!car_legal(v_41)) v_41 = cdrerror(v_41); else
    v_41 = cdr(v_41);
    {
        LispObject fn = basic_elt(env, 3); // derad!*
        return (*qfn2(fn))(fn, v_42, v_41);
    }
v_8:
    v_42 = stack[0];
    v_41 = stack[-1];
    if (!car_legal(v_41)) v_41 = cdrerror(v_41); else
    v_41 = cdr(v_41);
    if (!car_legal(v_41)) v_41 = cdrerror(v_41); else
    v_41 = cdr(v_41);
    {
        LispObject fn = basic_elt(env, 4); // derad
        return (*qfn2(fn))(fn, v_42, v_41);
    }
    v_41 = nil;
    return onevalue(v_41);
}



// Code for vdpred

static LispObject CC_vdpred(LispObject env,
                         LispObject v_2)
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
    v_52 = stack[-3];
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    if (!car_legal(v_52)) v_52 = carerror(v_52); else
    v_52 = car(v_52);
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    stack[-4] = v_52;
    v_52 = stack[-4];
    if (v_52 == nil) goto v_17;
    else goto v_18;
v_17:
    stack[-2] = basic_elt(env, 1); // vdp
    stack[-1] = nil;
    v_52 = nil;
    stack[0] = ncons(v_52);
    env = stack[-5];
    v_53 = nil;
    v_52 = nil;
    v_52 = list2(v_53, v_52);
    {
        LispObject v_59 = stack[-2];
        LispObject v_60 = stack[-1];
        LispObject v_61 = stack[0];
        return list3star(v_59, v_60, v_61, v_52);
    }
v_18:
    stack[-2] = basic_elt(env, 1); // vdp
    v_52 = stack[-4];
    if (!car_legal(v_52)) stack[-1] = carerror(v_52); else
    stack[-1] = car(v_52);
    v_52 = stack[-4];
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    if (!car_legal(v_52)) stack[0] = carerror(v_52); else
    stack[0] = car(v_52);
    v_53 = stack[-4];
    v_52 = nil;
    v_52 = list2(v_53, v_52);
    env = stack[-5];
    v_52 = list3star(stack[-2], stack[-1], stack[0], v_52);
    env = stack[-5];
    stack[-4] = v_52;
    v_52 = qvalue(basic_elt(env, 2)); // !*gsugar
    if (v_52 == nil) goto v_41;
    v_53 = stack[-3];
    v_52 = basic_elt(env, 3); // sugar
    {   LispObject fn = basic_elt(env, 4); // vdpgetprop
    v_53 = (*qfn2(fn))(fn, v_53, v_52);
    }
    env = stack[-5];
    v_52 = v_53;
    if (v_53 == nil) goto v_41;
    v_53 = stack[-4];
    {   LispObject fn = basic_elt(env, 5); // gsetsugar
    v_52 = (*qfn2(fn))(fn, v_53, v_52);
    }
    goto v_39;
v_41:
v_39:
    v_52 = stack[-4];
    return onevalue(v_52);
}



// Code for indexvarordp

static LispObject CC_indexvarordp(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_75, v_76;
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
    v_75 = stack[-1];
    if (!car_legal(v_75)) v_76 = carerror(v_75); else
    v_76 = car(v_75);
    v_75 = stack[0];
    if (!car_legal(v_75)) v_75 = carerror(v_75); else
    v_75 = car(v_75);
    if (v_76 == v_75) goto v_12;
    v_75 = lisp_true;
    goto v_10;
v_12:
    v_76 = stack[-1];
    v_75 = qvalue(basic_elt(env, 1)); // kord!*
    v_75 = Lmemq(nil, v_76, v_75);
    if (v_75 == nil) goto v_22;
    else goto v_21;
v_22:
    v_76 = stack[0];
    v_75 = qvalue(basic_elt(env, 1)); // kord!*
    v_75 = Lmemq(nil, v_76, v_75);
v_21:
    goto v_10;
    v_75 = nil;
v_10:
    if (v_75 == nil) goto v_8;
    v_76 = stack[-1];
    v_75 = stack[0];
    {
        LispObject fn = basic_elt(env, 3); // ordop
        return (*qfn2(fn))(fn, v_76, v_75);
    }
v_8:
    v_75 = stack[-1];
    if (!car_legal(v_75)) v_75 = cdrerror(v_75); else
    v_75 = cdr(v_75);
    {   LispObject fn = basic_elt(env, 4); // flatindxl
    stack[-2] = (*qfn1(fn))(fn, v_75);
    }
    env = stack[-3];
    v_75 = stack[0];
    if (!car_legal(v_75)) v_75 = cdrerror(v_75); else
    v_75 = cdr(v_75);
    {   LispObject fn = basic_elt(env, 4); // flatindxl
    v_76 = (*qfn1(fn))(fn, v_75);
    }
    env = stack[-3];
    v_75 = stack[-2];
    stack[-2] = v_76;
    v_76 = v_75;
    v_75 = qvalue(basic_elt(env, 2)); // indxl!*
    {   LispObject fn = basic_elt(env, 5); // boundindp
    v_75 = (*qfn2(fn))(fn, v_76, v_75);
    }
    env = stack[-3];
    if (v_75 == nil) goto v_45;
    v_76 = stack[-2];
    v_75 = qvalue(basic_elt(env, 2)); // indxl!*
    {   LispObject fn = basic_elt(env, 5); // boundindp
    v_75 = (*qfn2(fn))(fn, v_76, v_75);
    }
    env = stack[-3];
    if (v_75 == nil) goto v_52;
    v_75 = stack[-1];
    if (!car_legal(v_75)) v_76 = cdrerror(v_75); else
    v_76 = cdr(v_75);
    v_75 = stack[0];
    if (!car_legal(v_75)) v_75 = cdrerror(v_75); else
    v_75 = cdr(v_75);
    {
        LispObject fn = basic_elt(env, 6); // indordlp
        return (*qfn2(fn))(fn, v_76, v_75);
    }
v_52:
    v_75 = lisp_true;
    goto v_50;
    v_75 = nil;
v_50:
    goto v_43;
v_45:
    v_76 = stack[-2];
    v_75 = qvalue(basic_elt(env, 2)); // indxl!*
    {   LispObject fn = basic_elt(env, 5); // boundindp
    v_75 = (*qfn2(fn))(fn, v_76, v_75);
    }
    env = stack[-3];
    if (v_75 == nil) goto v_65;
    v_75 = nil;
    goto v_43;
v_65:
    v_76 = stack[-1];
    v_75 = stack[0];
    {
        LispObject fn = basic_elt(env, 3); // ordop
        return (*qfn2(fn))(fn, v_76, v_75);
    }
    v_75 = nil;
v_43:
    goto v_6;
    v_75 = nil;
v_6:
    return onevalue(v_75);
}



// Code for cut!:mt

static LispObject CC_cutTmt(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_75, v_76;
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
    v_76 = stack[-2];
    v_75 = basic_elt(env, 1); // !:rd!:
    if (!consp(v_76)) goto v_16;
    v_76 = car(v_76);
    if (v_76 == v_75) goto v_15;
    else goto v_16;
v_15:
    v_75 = stack[-2];
    if (!car_legal(v_75)) v_75 = cdrerror(v_75); else
    v_75 = cdr(v_75);
    v_75 = (consp(v_75) ? nil : lisp_true);
    v_75 = (v_75 == nil ? lisp_true : nil);
    goto v_14;
v_16:
    v_75 = nil;
    goto v_14;
    v_75 = nil;
v_14:
    if (v_75 == nil) goto v_12;
    v_75 = stack[-1];
    v_75 = integerp(v_75);
    if (v_75 == nil) goto v_29;
    else goto v_30;
v_29:
    v_75 = nil;
    goto v_28;
v_30:
    v_76 = stack[-1];
    v_75 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_75 = static_cast<LispObject>(greaterp2(v_76, v_75));
    v_75 = v_75 ? lisp_true : nil;
    env = stack[-4];
    goto v_28;
    v_75 = nil;
v_28:
    goto v_10;
v_12:
    v_75 = nil;
    goto v_10;
    v_75 = nil;
v_10:
    if (v_75 == nil) goto v_8;
    v_75 = stack[-2];
    if (!car_legal(v_75)) v_75 = cdrerror(v_75); else
    v_75 = cdr(v_75);
    if (!car_legal(v_75)) v_75 = carerror(v_75); else
    v_75 = car(v_75);
    v_75 = Labsval(nil, v_75);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 2); // msd
    v_76 = (*qfn1(fn))(fn, v_75);
    }
    env = stack[-4];
    v_75 = stack[-1];
    v_76 = difference2(v_76, v_75);
    env = stack[-4];
    stack[-1] = v_76;
    v_75 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_75 = static_cast<LispObject>(lesseq2(v_76, v_75));
    v_75 = v_75 ? lisp_true : nil;
    env = stack[-4];
    if (v_75 == nil) goto v_45;
    v_75 = stack[-2];
    goto v_43;
v_45:
    stack[-3] = basic_elt(env, 1); // !:rd!:
    v_75 = stack[-2];
    if (!car_legal(v_75)) v_75 = cdrerror(v_75); else
    v_75 = cdr(v_75);
    if (!car_legal(v_75)) stack[0] = carerror(v_75); else
    stack[0] = car(v_75);
    v_75 = stack[-1];
    v_75 = negate(v_75);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 3); // ashift
    stack[0] = (*qfn2(fn))(fn, stack[0], v_75);
    }
    env = stack[-4];
    v_75 = stack[-2];
    if (!car_legal(v_75)) v_75 = cdrerror(v_75); else
    v_75 = cdr(v_75);
    if (!car_legal(v_75)) v_76 = cdrerror(v_75); else
    v_76 = cdr(v_75);
    v_75 = stack[-1];
    v_75 = plus2(v_76, v_75);
    {
        LispObject v_81 = stack[-3];
        LispObject v_82 = stack[0];
        return list2star(v_81, v_82, v_75);
    }
    v_75 = nil;
v_43:
    goto v_6;
v_8:
    v_75 = basic_elt(env, 0); // cut!:mt
    {
        LispObject fn = basic_elt(env, 4); // bflerrmsg
        return (*qfn1(fn))(fn, v_75);
    }
    v_75 = nil;
v_6:
    return onevalue(v_75);
}



// Code for lispassignp

static LispObject CC_lispassignp(LispObject env,
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
    v_8 = basic_elt(env, 1); // setq
        return Leqcar(nil, v_7, v_8);
}



// Code for begin1a

static LispObject CC_begin1a(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_290, v_291, v_292;
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
    v_290 = Ltime(nil);
    env = stack[-2];
    setvalue(basic_elt(env, 1), v_290); // otime!*
    v_290 = basic_elt(env, 2); // gctime
    {   LispObject fn = basic_elt(env, 53); // getd
    v_290 = (*qfn1(fn))(fn, v_290);
    }
    env = stack[-2];
    if (v_290 == nil) goto v_19;
    v_290 = Lgctime(nil);
    env = stack[-2];
    setvalue(basic_elt(env, 3), v_290); // ogctime!*
    goto v_17;
v_19:
    v_290 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    setvalue(basic_elt(env, 3), v_290); // ogctime!*
    goto v_17;
v_17:
    v_290 = qvalue(basic_elt(env, 1)); // otime!*
    setvalue(basic_elt(env, 4), v_290); // otime3!*
    setvalue(basic_elt(env, 5), v_290); // otime2!*
    setvalue(basic_elt(env, 6), v_290); // otime1!*
    v_290 = qvalue(basic_elt(env, 3)); // ogctime!*
    setvalue(basic_elt(env, 7), v_290); // ogctime3!*
    setvalue(basic_elt(env, 8), v_290); // ogctime2!*
    setvalue(basic_elt(env, 9), v_290); // ogctime1!*
    v_290 = stack[0];
    setvalue(basic_elt(env, 10), v_290); // peekchar!*
    v_290 = basic_elt(env, 11); // !*semicol!*
    setvalue(basic_elt(env, 12), v_290); // cursym!*
    v_290 = nil;
    setvalue(basic_elt(env, 13), v_290); // curescaped!*
v_9:
    {   LispObject fn = basic_elt(env, 54); // terminalp
    v_290 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
    if (v_290 == nil) goto v_34;
    v_290 = qvalue(basic_elt(env, 14)); // !*nosave!*
    if (v_290 == nil) goto v_40;
    else goto v_38;
v_40:
    v_291 = qvalue(basic_elt(env, 15)); // statcounter
    v_290 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_291 == v_290) goto v_38;
    goto v_39;
v_38:
    goto v_37;
v_39:
    {   LispObject fn = basic_elt(env, 55); // add2buflis
    v_290 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
    goto v_37;
v_37:
    {   LispObject fn = basic_elt(env, 56); // update_prompt
    v_290 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
    goto v_32;
v_34:
v_32:
    v_290 = nil;
    setvalue(basic_elt(env, 14), v_290); // !*nosave!*
    v_290 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    setvalue(basic_elt(env, 16), v_290); // !*strind
    v_290 = nil;
    stack[-1] = v_290;
    v_290 = qvalue(basic_elt(env, 17)); // !*time
    if (v_290 == nil) goto v_56;
    v_290 = basic_elt(env, 18); // (showtime nil)
    {   LispObject fn = basic_elt(env, 57); // lispeval
    v_290 = (*qfn1(fn))(fn, v_290);
    }
    env = stack[-2];
    goto v_54;
v_56:
v_54:
    v_290 = qvalue(basic_elt(env, 19)); // !*output
    if (v_290 == nil) goto v_63;
    v_290 = qvalue(basic_elt(env, 20)); // ofl!*
    if (v_290 == nil) goto v_69;
    else goto v_70;
v_69:
    {   LispObject fn = basic_elt(env, 54); // terminalp
    v_290 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
    if (v_290 == nil) goto v_74;
    else goto v_75;
v_74:
    v_290 = nil;
    goto v_73;
v_75:
    v_290 = qvalue(basic_elt(env, 21)); // !*defn
    if (v_290 == nil) goto v_82;
    else goto v_83;
v_82:
    v_290 = qvalue(basic_elt(env, 22)); // !*lessspace
    v_290 = (v_290 == nil ? lisp_true : nil);
    goto v_81;
v_83:
    v_290 = nil;
    goto v_81;
    v_290 = nil;
v_81:
    goto v_73;
    v_290 = nil;
v_73:
    goto v_68;
v_70:
    v_290 = nil;
    goto v_68;
    v_290 = nil;
v_68:
    if (v_290 == nil) goto v_63;
    v_290 = Lterpri(nil);
    env = stack[-2];
    goto v_61;
v_63:
v_61:
    v_290 = qvalue(basic_elt(env, 23)); // tslin!*
    if (v_290 == nil) goto v_97;
    v_290 = qvalue(basic_elt(env, 23)); // tslin!*
    if (!car_legal(v_290)) v_290 = carerror(v_290); else
    v_290 = car(v_290);
    setvalue(basic_elt(env, 24), v_290); // !*slin
    v_290 = qvalue(basic_elt(env, 23)); // tslin!*
    if (!car_legal(v_290)) v_290 = cdrerror(v_290); else
    v_290 = cdr(v_290);
    setvalue(basic_elt(env, 25), v_290); // lreadfn!*
    v_290 = nil;
    setvalue(basic_elt(env, 23), v_290); // tslin!*
    goto v_95;
v_97:
v_95:
    v_290 = qvalue(basic_elt(env, 26)); // initl!*
    stack[0] = v_290;
v_10:
    v_290 = stack[0];
    if (v_290 == nil) goto v_108;
    v_290 = stack[0];
    if (!car_legal(v_290)) v_290 = carerror(v_290); else
    v_290 = car(v_290);
    {   LispObject fn = basic_elt(env, 58); // sinitl
    v_290 = (*qfn1(fn))(fn, v_290);
    }
    env = stack[-2];
    v_290 = stack[0];
    if (!car_legal(v_290)) v_290 = cdrerror(v_290); else
    v_290 = cdr(v_290);
    stack[0] = v_290;
    goto v_10;
v_108:
    v_291 = qvalue(basic_elt(env, 27)); // forkeywords!*
    v_290 = basic_elt(env, 28); // delim
    v_290 = Lremflag(nil, v_291, v_290);
    env = stack[-2];
    v_291 = qvalue(basic_elt(env, 29)); // repeatkeywords!*
    v_290 = basic_elt(env, 28); // delim
    v_290 = Lremflag(nil, v_291, v_290);
    env = stack[-2];
    v_291 = qvalue(basic_elt(env, 30)); // whilekeywords!*
    v_290 = basic_elt(env, 28); // delim
    v_290 = Lremflag(nil, v_291, v_290);
    env = stack[-2];
    v_290 = qvalue(basic_elt(env, 31)); // !*int
    if (v_290 == nil) goto v_127;
    v_290 = nil;
    setvalue(basic_elt(env, 32), v_290); // erfg!*
    goto v_125;
v_127:
v_125:
    v_291 = qvalue(basic_elt(env, 12)); // cursym!*
    v_290 = basic_elt(env, 33); // end
    if (v_291 == v_290) goto v_132;
    else goto v_133;
v_132:
    v_290 = basic_elt(env, 33); // end
    {   LispObject fn = basic_elt(env, 59); // comm1
    v_290 = (*qfn1(fn))(fn, v_290);
    }
    v_290 = nil;
    goto v_8;
v_133:
    {   LispObject fn = basic_elt(env, 54); // terminalp
    v_290 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
    if (v_290 == nil) goto v_140;
    v_291 = qvalue(basic_elt(env, 34)); // key!*
    v_290 = basic_elt(env, 35); // ed
    if (v_291 == v_290) goto v_140;
    v_290 = qvalue(basic_elt(env, 36)); // promptexp!*
    {   LispObject fn = basic_elt(env, 60); // printprompt
    v_290 = (*qfn1(fn))(fn, v_290);
    }
    env = stack[-2];
    goto v_131;
v_140:
v_131:
    v_291 = basic_elt(env, 37); // (command)
    v_290 = lisp_true;
    {   LispObject fn = basic_elt(env, 61); // errorset!*
    v_290 = (*qfn2(fn))(fn, v_291, v_290);
    }
    env = stack[-2];
    stack[0] = v_290;
    {   LispObject fn = basic_elt(env, 62); // condterpri
    v_290 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
    v_290 = stack[0];
    {   LispObject fn = basic_elt(env, 63); // errorp
    v_290 = (*qfn1(fn))(fn, v_290);
    }
    env = stack[-2];
    if (v_290 == nil) goto v_155;
    goto v_12;
v_155:
    v_290 = stack[0];
    if (!car_legal(v_290)) v_290 = carerror(v_290); else
    v_290 = car(v_290);
    stack[0] = v_290;
    v_290 = stack[0];
    if (!car_legal(v_290)) v_291 = carerror(v_290); else
    v_291 = car(v_290);
    v_290 = basic_elt(env, 38); // symbolic
    if (v_291 == v_290) goto v_166;
    else goto v_167;
v_166:
    v_290 = stack[0];
    if (!car_legal(v_290)) v_290 = cdrerror(v_290); else
    v_290 = cdr(v_290);
    if (!car_legal(v_290)) v_291 = carerror(v_290); else
    v_291 = car(v_290);
    v_290 = basic_elt(env, 39); // xmodule
    v_290 = Leqcar(nil, v_291, v_290);
    env = stack[-2];
    goto v_165;
v_167:
    v_290 = nil;
    goto v_165;
    v_290 = nil;
v_165:
    if (v_290 == nil) goto v_163;
    v_290 = stack[0];
    if (!car_legal(v_290)) v_290 = cdrerror(v_290); else
    v_290 = cdr(v_290);
    if (!car_legal(v_290)) v_290 = carerror(v_290); else
    v_290 = car(v_290);
    {   LispObject fn = basic_elt(env, 64); // eval
    v_290 = (*qfn1(fn))(fn, v_290);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 65); // xmodloop
    v_290 = (*qfn1(fn))(fn, v_290);
    }
    env = stack[-2];
    v_292 = v_290;
    goto v_161;
v_163:
    v_290 = stack[0];
    {   LispObject fn = basic_elt(env, 66); // begin11
    v_290 = (*qfn1(fn))(fn, v_290);
    }
    env = stack[-2];
    v_292 = v_290;
    goto v_161;
v_161:
    v_290 = v_292;
    if (v_290 == nil) goto v_190;
    else goto v_191;
v_190:
    goto v_9;
v_191:
    v_291 = v_292;
    v_290 = basic_elt(env, 33); // end
    if (v_291 == v_290) goto v_193;
    else goto v_194;
v_193:
    v_290 = nil;
    goto v_8;
v_194:
    v_291 = v_292;
    v_290 = basic_elt(env, 40); // err2
    if (v_291 == v_290) goto v_198;
    else goto v_199;
v_198:
    goto v_13;
v_199:
    v_291 = v_292;
    v_290 = basic_elt(env, 41); // err3
    if (v_291 == v_290) goto v_202;
    else goto v_203;
v_202:
    goto v_14;
v_203:
v_11:
    v_290 = qvalue(basic_elt(env, 42)); // crbuf1!*
    if (v_290 == nil) goto v_209;
    v_290 = basic_elt(env, 43); // "Closing object improperly removed. Redo edit."
    {   LispObject fn = basic_elt(env, 67); // lprim
    v_290 = (*qfn1(fn))(fn, v_290);
    }
    env = stack[-2];
    v_290 = nil;
    setvalue(basic_elt(env, 42), v_290); // crbuf1!*
    v_290 = nil;
    goto v_8;
v_209:
    v_291 = qvalue(basic_elt(env, 44)); // eof!*
    v_290 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_290 = static_cast<LispObject>(greaterp2(v_291, v_290));
    v_290 = v_290 ? lisp_true : nil;
    env = stack[-2];
    if (v_290 == nil) goto v_216;
    v_290 = basic_elt(env, 45); // "End-of-file read"
    {   LispObject fn = basic_elt(env, 67); // lprim
    v_290 = (*qfn1(fn))(fn, v_290);
    }
    env = stack[-2];
    v_290 = basic_elt(env, 46); // (bye)
    {
        LispObject fn = basic_elt(env, 57); // lispeval
        return (*qfn1(fn))(fn, v_290);
    }
v_216:
    {   LispObject fn = basic_elt(env, 54); // terminalp
    v_290 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
    if (v_290 == nil) goto v_225;
    v_290 = nil;
    setvalue(basic_elt(env, 47), v_290); // crbuf!*
    v_290 = lisp_true;
    setvalue(basic_elt(env, 14), v_290); // !*nosave!*
    goto v_9;
v_225:
    v_290 = nil;
    goto v_8;
v_12:
    {   LispObject fn = basic_elt(env, 68); // eofcheck
    v_290 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
    if (v_290 == nil) goto v_236;
    else goto v_234;
v_236:
    v_291 = qvalue(basic_elt(env, 44)); // eof!*
    v_290 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_290 = static_cast<LispObject>(greaterp2(v_291, v_290));
    v_290 = v_290 ? lisp_true : nil;
    env = stack[-2];
    if (v_290 == nil) goto v_238;
    else goto v_234;
v_238:
    goto v_235;
v_234:
    goto v_11;
v_235:
    v_291 = stack[0];
    v_290 = basic_elt(env, 48); // "BEGIN invalid"
    if (equal(v_291, v_290)) goto v_242;
    else goto v_243;
v_242:
    goto v_9;
v_243:
    v_290 = lisp_true;
    stack[-1] = v_290;
v_13:
    {   LispObject fn = basic_elt(env, 69); // resetparser
    v_290 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
v_14:
    v_290 = lisp_true;
    setvalue(basic_elt(env, 32), v_290); // erfg!*
    v_290 = qvalue(basic_elt(env, 31)); // !*int
    if (v_290 == nil) goto v_255;
    else goto v_256;
v_255:
    v_290 = qvalue(basic_elt(env, 49)); // !*errcont
    v_290 = (v_290 == nil ? lisp_true : nil);
    goto v_254;
v_256:
    v_290 = nil;
    goto v_254;
    v_290 = nil;
v_254:
    if (v_290 == nil) goto v_252;
    v_290 = lisp_true;
    setvalue(basic_elt(env, 21), v_290); // !*defn
    v_290 = lisp_true;
    setvalue(basic_elt(env, 50), v_290); // !*echo
    v_290 = qvalue(basic_elt(env, 51)); // cmsg!*
    if (v_290 == nil) goto v_267;
    else goto v_268;
v_267:
    v_290 = basic_elt(env, 52); // "Continuing with parsing only ..."
    {   LispObject fn = basic_elt(env, 70); // lprie
    v_290 = (*qfn1(fn))(fn, v_290);
    }
    env = stack[-2];
    goto v_266;
v_268:
v_266:
    v_290 = lisp_true;
    setvalue(basic_elt(env, 51), v_290); // cmsg!*
    goto v_250;
v_252:
    v_290 = qvalue(basic_elt(env, 49)); // !*errcont
    if (v_290 == nil) goto v_273;
    else goto v_274;
v_273:
    v_290 = stack[-1];
    {   LispObject fn = basic_elt(env, 71); // pause1
    v_290 = (*qfn1(fn))(fn, v_290);
    }
    env = stack[-2];
    v_292 = v_290;
    v_290 = v_292;
    if (v_290 == nil) goto v_281;
    v_290 = v_292;
    {   LispObject fn = basic_elt(env, 57); // lispeval
    v_290 = (*qfn1(fn))(fn, v_290);
    }
    v_290 = (v_290 == nil ? lisp_true : nil);
    goto v_8;
v_281:
    v_290 = nil;
    setvalue(basic_elt(env, 32), v_290); // erfg!*
    goto v_250;
v_274:
    v_290 = nil;
    setvalue(basic_elt(env, 32), v_290); // erfg!*
    goto v_250;
v_250:
    goto v_9;
v_8:
    return onevalue(v_290);
}



// Code for bas_newnumber

static LispObject CC_bas_newnumber(LispObject env,
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
    if (!car_legal(v_9)) v_9 = cdrerror(v_9); else
    v_9 = cdr(v_9);
    return cons(v_10, v_9);
}



// Code for traput

static LispObject CC_traput(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_39, v_40, v_41, v_42, v_43;
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
    v_40 = v_4;
    v_41 = v_3;
    v_42 = v_2;
// end of prologue
    v_43 = v_42;
    v_39 = v_41;
    v_39 = get(v_43, v_39);
    env = stack[-2];
    v_43 = v_39;
    if (v_39 == nil) goto v_12;
    v_39 = qvalue(basic_elt(env, 1)); // toplv!*
    if (v_39 == nil) goto v_20;
    else goto v_19;
v_20:
    v_41 = v_40;
    v_39 = v_43;
    v_39 = Lmemq(nil, v_41, v_39);
    if (v_39 == nil) goto v_22;
    else goto v_19;
v_22:
    stack[0] = v_43;
    v_39 = v_40;
    v_40 = v_43;
    if (!car_legal(v_40)) v_40 = cdrerror(v_40); else
    v_40 = cdr(v_40);
    v_39 = cons(v_39, v_40);
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_39);
    goto v_17;
v_19:
v_17:
    goto v_10;
v_12:
    stack[-1] = v_42;
    stack[0] = v_41;
    v_39 = v_40;
    v_39 = ncons(v_39);
    env = stack[-2];
    v_39 = Lputprop(nil, stack[-1], stack[0], v_39);
    goto v_10;
v_10:
    v_39 = nil;
    return onevalue(v_39);
}



// Code for ofsf_varlat

static LispObject CC_ofsf_varlat(LispObject env,
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    v_62 = v_2;
// end of prologue
    if (!car_legal(v_62)) v_62 = cdrerror(v_62); else
    v_62 = cdr(v_62);
    if (!car_legal(v_62)) v_62 = carerror(v_62); else
    v_62 = car(v_62);
    {   LispObject fn = basic_elt(env, 2); // kernels
    v_62 = (*qfn1(fn))(fn, v_62);
    }
    env = stack[-4];
    v_63 = v_62;
    v_62 = qvalue(basic_elt(env, 1)); // !*rlbrkcxk
    if (v_62 == nil) goto v_14;
    v_62 = v_63;
    stack[-3] = v_62;
v_21:
    v_62 = stack[-3];
    if (v_62 == nil) goto v_26;
    else goto v_27;
v_26:
    v_62 = nil;
    goto v_20;
v_27:
    v_62 = stack[-3];
    if (!car_legal(v_62)) v_62 = carerror(v_62); else
    v_62 = car(v_62);
    {   LispObject fn = basic_elt(env, 3); // lto_lpvarl
    v_62 = (*qfn1(fn))(fn, v_62);
    }
    env = stack[-4];
    stack[-2] = v_62;
    v_62 = stack[-2];
    {   LispObject fn = basic_elt(env, 4); // lastpair
    v_62 = (*qfn1(fn))(fn, v_62);
    }
    env = stack[-4];
    stack[-1] = v_62;
    v_62 = stack[-3];
    if (!car_legal(v_62)) v_62 = cdrerror(v_62); else
    v_62 = cdr(v_62);
    stack[-3] = v_62;
    v_62 = stack[-1];
    if (!consp(v_62)) goto v_41;
    else goto v_42;
v_41:
    goto v_21;
v_42:
v_22:
    v_62 = stack[-3];
    if (v_62 == nil) goto v_46;
    else goto v_47;
v_46:
    v_62 = stack[-2];
    goto v_20;
v_47:
    stack[0] = stack[-1];
    v_62 = stack[-3];
    if (!car_legal(v_62)) v_62 = carerror(v_62); else
    v_62 = car(v_62);
    {   LispObject fn = basic_elt(env, 3); // lto_lpvarl
    v_62 = (*qfn1(fn))(fn, v_62);
    }
    env = stack[-4];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_62);
    v_62 = stack[-1];
    {   LispObject fn = basic_elt(env, 4); // lastpair
    v_62 = (*qfn1(fn))(fn, v_62);
    }
    env = stack[-4];
    stack[-1] = v_62;
    v_62 = stack[-3];
    if (!car_legal(v_62)) v_62 = cdrerror(v_62); else
    v_62 = cdr(v_62);
    stack[-3] = v_62;
    goto v_22;
v_20:
    v_63 = v_62;
    goto v_12;
v_14:
v_12:
    v_62 = v_63;
    return onevalue(v_62);
}



// Code for rl_csimpl

static LispObject CC_rl_csimpl(LispObject env,
                         LispObject v_2)
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
    v_20 = qvalue(basic_elt(env, 1)); // !*rlsimpl
    if (v_20 == nil) goto v_7;
    v_20 = basic_elt(env, 2); // rl_simpl
    {   LispObject fn = basic_elt(env, 3); // getd
    v_20 = (*qfn1(fn))(fn, v_20);
    }
    env = stack[-1];
    if (v_20 == nil) goto v_7;
    v_22 = stack[0];
    v_21 = nil;
    v_20 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    {
        LispObject fn = basic_elt(env, 2); // rl_simpl
        return (*qfn3(fn))(fn, v_22, v_21, v_20);
    }
v_7:
    v_20 = stack[0];
    goto v_5;
    v_20 = nil;
v_5:
    return onevalue(v_20);
}



// Code for mkprod

static LispObject CC_mkprod(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_198, v_199;
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
// Binding !*exp
// FLUIDBIND: reloadenv=6 litvec-offset=1 saveloc=2
{   bind_fluid_stack bind_fluid_var(-6, 1, -2);
    setvalue(basic_elt(env, 1), nil); // !*exp
// Binding !*sub2
// FLUIDBIND: reloadenv=6 litvec-offset=2 saveloc=1
{   bind_fluid_stack bind_fluid_var(-6, 2, -1);
    setvalue(basic_elt(env, 2), nil); // !*sub2
    v_198 = stack[-4];
    if (v_198 == nil) goto v_20;
    else goto v_21;
v_20:
    v_198 = lisp_true;
    goto v_19;
v_21:
    v_198 = stack[-4];
    {   LispObject fn = basic_elt(env, 8); // kernlp
    v_198 = (*qfn1(fn))(fn, v_198);
    }
    env = stack[-6];
    goto v_19;
    v_198 = nil;
v_19:
    if (v_198 == nil) goto v_17;
    v_198 = stack[-4];
    goto v_13;
v_17:
    v_198 = lisp_true;
    setvalue(basic_elt(env, 2), v_198); // !*sub2
    v_199 = stack[-4];
    v_198 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_198 = cons(v_199, v_198);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 9); // subs2
    v_198 = (*qfn1(fn))(fn, v_198);
    }
    env = stack[-6];
    stack[0] = v_198;
    v_198 = stack[0];
    if (!car_legal(v_198)) v_199 = cdrerror(v_198); else
    v_199 = cdr(v_198);
    v_198 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_199 == v_198) goto v_37;
    v_198 = stack[-4];
    goto v_13;
v_37:
    v_198 = stack[0];
    if (!car_legal(v_198)) v_199 = carerror(v_198); else
    v_199 = car(v_198);
    v_198 = stack[-4];
    if (equal(v_199, v_198)) goto v_43;
    v_198 = stack[0];
    if (!car_legal(v_198)) v_198 = carerror(v_198); else
    v_198 = car(v_198);
    stack[-4] = v_198;
    v_198 = stack[-4];
    if (v_198 == nil) goto v_55;
    else goto v_56;
v_55:
    v_198 = lisp_true;
    goto v_54;
v_56:
    v_198 = stack[-4];
    {   LispObject fn = basic_elt(env, 8); // kernlp
    v_198 = (*qfn1(fn))(fn, v_198);
    }
    env = stack[-6];
    goto v_54;
    v_198 = nil;
v_54:
    if (v_198 == nil) goto v_52;
    v_198 = stack[-4];
    goto v_13;
v_52:
    goto v_35;
v_43:
v_35:
    v_198 = lisp_true;
    setvalue(basic_elt(env, 1), v_198); // !*exp
    v_198 = stack[-4];
    {   LispObject fn = basic_elt(env, 10); // ckrn
    v_198 = (*qfn1(fn))(fn, v_198);
    }
    env = stack[-6];
    stack[-5] = v_198;
    v_199 = stack[-4];
    v_198 = stack[-5];
    {   LispObject fn = basic_elt(env, 11); // quotf
    v_198 = (*qfn2(fn))(fn, v_199, v_198);
    }
    env = stack[-6];
    stack[-4] = v_198;
    v_198 = stack[-4];
    {   LispObject fn = basic_elt(env, 12); // expnd
    v_198 = (*qfn1(fn))(fn, v_198);
    }
    env = stack[-6];
    stack[0] = v_198;
    v_198 = stack[0];
    if (v_198 == nil) goto v_78;
    else goto v_79;
v_78:
    v_198 = lisp_true;
    goto v_77;
v_79:
    v_198 = stack[0];
    {   LispObject fn = basic_elt(env, 8); // kernlp
    v_198 = (*qfn1(fn))(fn, v_198);
    }
    env = stack[-6];
    goto v_77;
    v_198 = nil;
v_77:
    if (v_198 == nil) goto v_75;
    v_199 = stack[-5];
    v_198 = stack[0];
    {   LispObject fn = basic_elt(env, 13); // multf
    v_198 = (*qfn2(fn))(fn, v_199, v_198);
    }
    goto v_13;
v_75:
    v_198 = qvalue(basic_elt(env, 3)); // !*mcd
    if (v_198 == nil) goto v_92;
    v_198 = qvalue(basic_elt(env, 4)); // !*sqfree
    if (v_198 == nil) goto v_96;
    else goto v_95;
v_96:
    v_198 = qvalue(basic_elt(env, 5)); // !*factor
    if (v_198 == nil) goto v_99;
    else goto v_95;
v_99:
    v_198 = qvalue(basic_elt(env, 6)); // !*gcd
    if (v_198 == nil) goto v_101;
    else goto v_95;
v_101:
    goto v_92;
v_95:
    v_198 = stack[0];
    {   LispObject fn = basic_elt(env, 14); // fctrf
    v_198 = (*qfn1(fn))(fn, v_198);
    }
    env = stack[-6];
    stack[-3] = v_198;
    goto v_90;
v_92:
    v_198 = stack[0];
    {   LispObject fn = basic_elt(env, 10); // ckrn
    v_198 = (*qfn1(fn))(fn, v_198);
    }
    env = stack[-6];
    stack[-3] = v_198;
    v_199 = stack[0];
    v_198 = stack[-3];
    {   LispObject fn = basic_elt(env, 11); // quotf
    v_198 = (*qfn2(fn))(fn, v_199, v_198);
    }
    env = stack[-6];
    stack[0] = v_198;
    v_199 = stack[0];
    v_198 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_198 = cons(v_199, v_198);
    env = stack[-6];
    v_198 = list2(stack[-3], v_198);
    env = stack[-6];
    stack[-3] = v_198;
    goto v_90;
v_90:
    v_198 = stack[-3];
    if (!car_legal(v_198)) v_198 = cdrerror(v_198); else
    v_198 = cdr(v_198);
    if (!car_legal(v_198)) v_198 = carerror(v_198); else
    v_198 = car(v_198);
    if (!car_legal(v_198)) v_199 = cdrerror(v_198); else
    v_199 = cdr(v_198);
    v_198 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_198 = static_cast<LispObject>(greaterp2(v_199, v_198));
    v_198 = v_198 ? lisp_true : nil;
    env = stack[-6];
    if (v_198 == nil) goto v_121;
    else goto v_119;
v_121:
    v_198 = stack[-3];
    if (!car_legal(v_198)) v_198 = cdrerror(v_198); else
    v_198 = cdr(v_198);
    if (!car_legal(v_198)) v_198 = cdrerror(v_198); else
    v_198 = cdr(v_198);
    if (v_198 == nil) goto v_128;
    else goto v_119;
v_128:
    goto v_120;
v_119:
    v_198 = stack[-3];
    if (!car_legal(v_198)) v_198 = carerror(v_198); else
    v_198 = car(v_198);
    stack[0] = v_198;
    v_198 = stack[-3];
    if (!car_legal(v_198)) v_198 = cdrerror(v_198); else
    v_198 = cdr(v_198);
    stack[-3] = v_198;
v_137:
    v_198 = stack[-3];
    if (v_198 == nil) goto v_142;
    else goto v_143;
v_142:
    goto v_136;
v_143:
    v_198 = stack[-3];
    if (!car_legal(v_198)) v_198 = carerror(v_198); else
    v_198 = car(v_198);
    v_199 = v_198;
    if (!car_legal(v_199)) v_199 = carerror(v_199); else
    v_199 = car(v_199);
    if (!car_legal(v_198)) v_198 = cdrerror(v_198); else
    v_198 = cdr(v_198);
    {   LispObject fn = basic_elt(env, 15); // mksp!*
    v_199 = (*qfn2(fn))(fn, v_199, v_198);
    }
    env = stack[-6];
    v_198 = stack[0];
    {   LispObject fn = basic_elt(env, 13); // multf
    v_198 = (*qfn2(fn))(fn, v_199, v_198);
    }
    env = stack[-6];
    stack[0] = v_198;
    v_198 = stack[-3];
    if (!car_legal(v_198)) v_198 = cdrerror(v_198); else
    v_198 = cdr(v_198);
    stack[-3] = v_198;
    goto v_137;
v_136:
    goto v_118;
v_120:
    v_198 = qvalue(basic_elt(env, 7)); // !*group
    if (v_198 == nil) goto v_162;
    else goto v_163;
v_162:
    v_198 = stack[-4];
    {   LispObject fn = basic_elt(env, 16); // tmsf
    stack[0] = (*qfn1(fn))(fn, v_198);
    }
    env = stack[-6];
    v_198 = stack[-3];
    if (!car_legal(v_198)) v_198 = cdrerror(v_198); else
    v_198 = cdr(v_198);
    if (!car_legal(v_198)) v_198 = carerror(v_198); else
    v_198 = car(v_198);
    if (!car_legal(v_198)) v_198 = carerror(v_198); else
    v_198 = car(v_198);
    {   LispObject fn = basic_elt(env, 16); // tmsf
    v_198 = (*qfn1(fn))(fn, v_198);
    }
    env = stack[-6];
    v_198 = static_cast<LispObject>(greaterp2(stack[0], v_198));
    v_198 = v_198 ? lisp_true : nil;
    env = stack[-6];
    goto v_161;
v_163:
    v_198 = nil;
    goto v_161;
    v_198 = nil;
v_161:
    if (v_198 == nil) goto v_159;
    v_198 = stack[-3];
    if (!car_legal(v_198)) v_198 = cdrerror(v_198); else
    v_198 = cdr(v_198);
    if (!car_legal(v_198)) v_198 = carerror(v_198); else
    v_198 = car(v_198);
    if (!car_legal(v_198)) v_199 = carerror(v_198); else
    v_199 = car(v_198);
    v_198 = stack[-3];
    if (!car_legal(v_198)) v_198 = cdrerror(v_198); else
    v_198 = cdr(v_198);
    if (!car_legal(v_198)) v_198 = carerror(v_198); else
    v_198 = car(v_198);
    if (!car_legal(v_198)) v_198 = cdrerror(v_198); else
    v_198 = cdr(v_198);
    {   LispObject fn = basic_elt(env, 15); // mksp!*
    v_199 = (*qfn2(fn))(fn, v_199, v_198);
    }
    env = stack[-6];
    v_198 = stack[-3];
    if (!car_legal(v_198)) v_198 = carerror(v_198); else
    v_198 = car(v_198);
    {   LispObject fn = basic_elt(env, 13); // multf
    v_198 = (*qfn2(fn))(fn, v_199, v_198);
    }
    env = stack[-6];
    stack[0] = v_198;
    goto v_118;
v_159:
    v_199 = stack[-4];
    v_198 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 15); // mksp!*
    v_198 = (*qfn2(fn))(fn, v_199, v_198);
    }
    env = stack[-6];
    stack[0] = v_198;
    goto v_118;
v_118:
    v_199 = stack[-5];
    v_198 = stack[0];
    {   LispObject fn = basic_elt(env, 13); // multf
    v_198 = (*qfn2(fn))(fn, v_199, v_198);
    }
v_13:
    ;}  // end of a binding scope
    ;}  // end of a binding scope
    return onevalue(v_198);
}



// Code for lto_max1

static LispObject CC_lto_max1(LispObject env,
                         LispObject v_2)
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
    v_37 = stack[0];
    if (!car_legal(v_37)) v_37 = cdrerror(v_37); else
    v_37 = cdr(v_37);
    if (v_37 == nil) goto v_13;
    else goto v_14;
v_13:
    goto v_9;
v_14:
    v_37 = stack[0];
    if (!car_legal(v_37)) v_38 = carerror(v_37); else
    v_38 = car(v_37);
    v_37 = stack[-1];
    v_37 = cons(v_38, v_37);
    env = stack[-2];
    stack[-1] = v_37;
    v_37 = stack[0];
    if (!car_legal(v_37)) v_37 = cdrerror(v_37); else
    v_37 = cdr(v_37);
    stack[0] = v_37;
    goto v_8;
v_9:
    v_37 = stack[0];
    if (!car_legal(v_37)) v_37 = carerror(v_37); else
    v_37 = car(v_37);
    v_38 = v_37;
v_10:
    v_37 = stack[-1];
    if (v_37 == nil) goto v_27;
    else goto v_28;
v_27:
    v_37 = v_38;
    goto v_7;
v_28:
    v_37 = stack[-1];
    v_37 = car(v_37);
    {   LispObject fn = basic_elt(env, 1); // max
    v_37 = (*qfn2(fn))(fn, v_37, v_38);
    }
    env = stack[-2];
    v_38 = v_37;
    v_37 = stack[-1];
    v_37 = cdr(v_37);
    stack[-1] = v_37;
    goto v_10;
v_7:
    return onevalue(v_37);
}



// Code for bc_fd

static LispObject CC_bc_fd(LispObject env,
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
    v_7 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_8, v_7);
}



// Code for ir2mml

static LispObject CC_ir2mml(LispObject env,
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
    v_20 = basic_elt(env, 1); // (indent)
    {   LispObject fn = basic_elt(env, 6); // fluid
    v_20 = (*qfn1(fn))(fn, v_20);
    }
    env = stack[-1];
    v_20 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    setvalue(basic_elt(env, 2), v_20); // ind
    v_20 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    setvalue(basic_elt(env, 3), v_20); // indent
    v_20 = basic_elt(env, 4); // "<math>"
    {   LispObject fn = basic_elt(env, 7); // printout
    v_20 = (*qfn1(fn))(fn, v_20);
    }
    env = stack[-1];
    v_20 = lisp_true;
    {   LispObject fn = basic_elt(env, 8); // indent!*
    v_20 = (*qfn1(fn))(fn, v_20);
    }
    env = stack[-1];
    v_20 = stack[0];
    {   LispObject fn = basic_elt(env, 9); // expression
    v_20 = (*qfn1(fn))(fn, v_20);
    }
    env = stack[-1];
    v_20 = nil;
    {   LispObject fn = basic_elt(env, 8); // indent!*
    v_20 = (*qfn1(fn))(fn, v_20);
    }
    env = stack[-1];
    v_20 = basic_elt(env, 5); // "</math>"
    {   LispObject fn = basic_elt(env, 7); // printout
    v_20 = (*qfn1(fn))(fn, v_20);
    }
    v_20 = nil;
    return onevalue(v_20);
}



// Code for testredzz

static LispObject CC_testredzz(LispObject env,
                         LispObject v_2)
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
    v_29 = v_2;
// end of prologue
    stack[0] = qvalue(basic_elt(env, 1)); // codmat
    v_30 = qvalue(basic_elt(env, 2)); // maxvar
    v_29 = plus2(v_30, v_29);
    env = stack[-1];
    v_30 = Lgetv(nil, stack[0], v_29);
    env = stack[-1];
    v_29 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_29 = Lgetv(nil, v_30, v_29);
    env = stack[-1];
    stack[0] = v_29;
v_7:
    v_29 = stack[0];
    if (v_29 == nil) goto v_17;
    else goto v_18;
v_17:
    v_29 = nil;
    goto v_6;
v_18:
    v_29 = stack[0];
    if (!car_legal(v_29)) v_29 = carerror(v_29); else
    v_29 = car(v_29);
    if (!car_legal(v_29)) v_29 = carerror(v_29); else
    v_29 = car(v_29);
    {   LispObject fn = basic_elt(env, 3); // testredh
    v_29 = (*qfn1(fn))(fn, v_29);
    }
    env = stack[-1];
    v_29 = stack[0];
    if (!car_legal(v_29)) v_29 = cdrerror(v_29); else
    v_29 = cdr(v_29);
    stack[0] = v_29;
    goto v_7;
v_6:
    return onevalue(v_29);
}



// Code for list!-mgen

static LispObject CC_listKmgen(LispObject env,
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
    v_44 = v_2;
// end of prologue
// Binding i
// FLUIDBIND: reloadenv=2 litvec-offset=1 saveloc=1
{   bind_fluid_stack bind_fluid_var(-2, 1, -1);
    setvalue(basic_elt(env, 1), nil); // i
    v_43 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    setvalue(basic_elt(env, 1), v_43); // i
    v_43 = v_44;
    stack[0] = v_43;
v_12:
    v_43 = stack[0];
    if (v_43 == nil) goto v_16;
    else goto v_17;
v_16:
    goto v_11;
v_17:
    v_43 = stack[0];
    if (!car_legal(v_43)) v_43 = carerror(v_43); else
    v_43 = car(v_43);
    v_44 = v_43;
    v_43 = v_44;
    if (!consp(v_43)) goto v_29;
    else goto v_30;
v_29:
    v_43 = v_44;
    {   LispObject fn = basic_elt(env, 2); // mgenp
    v_43 = (*qfn1(fn))(fn, v_43);
    }
    env = stack[-2];
    goto v_28;
v_30:
    v_43 = nil;
    goto v_28;
    v_43 = nil;
v_28:
    if (v_43 == nil) goto v_26;
    v_43 = qvalue(basic_elt(env, 1)); // i
    v_43 = add1(v_43);
    env = stack[-2];
    setvalue(basic_elt(env, 1), v_43); // i
    goto v_24;
v_26:
v_24:
    v_43 = stack[0];
    if (!car_legal(v_43)) v_43 = cdrerror(v_43); else
    v_43 = cdr(v_43);
    stack[0] = v_43;
    goto v_12;
v_11:
    v_43 = qvalue(basic_elt(env, 1)); // i
    ;}  // end of a binding scope
    return onevalue(v_43);
}



// Code for expand!-imrepart

static LispObject CC_expandKimrepart(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_54, v_55;
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
    v_54 = stack[-1];
    if (!consp(v_54)) goto v_17;
    else goto v_18;
v_17:
    v_54 = lisp_true;
    goto v_16;
v_18:
    v_54 = stack[-1];
    if (!car_legal(v_54)) v_54 = carerror(v_54); else
    v_54 = car(v_54);
    v_54 = (consp(v_54) ? nil : lisp_true);
    goto v_16;
    v_54 = nil;
v_16:
    if (v_54 == nil) goto v_14;
    goto v_9;
v_14:
    v_54 = stack[-1];
    if (!car_legal(v_54)) v_54 = carerror(v_54); else
    v_54 = car(v_54);
    if (!car_legal(v_54)) v_54 = carerror(v_54); else
    v_54 = car(v_54);
    {   LispObject fn = basic_elt(env, 1); // expand!-imrepartpow
    stack[0] = (*qfn1(fn))(fn, v_54);
    }
    env = stack[-3];
    v_54 = stack[-1];
    if (!car_legal(v_54)) v_54 = carerror(v_54); else
    v_54 = car(v_54);
    if (!car_legal(v_54)) v_54 = cdrerror(v_54); else
    v_54 = cdr(v_54);
    {   LispObject fn = basic_elt(env, 0); // expand!-imrepart
    v_54 = (*qfn1(fn))(fn, v_54);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 2); // multsq
    v_55 = (*qfn2(fn))(fn, stack[0], v_54);
    }
    env = stack[-3];
    v_54 = stack[-2];
    v_54 = cons(v_55, v_54);
    env = stack[-3];
    stack[-2] = v_54;
    v_54 = stack[-1];
    if (!car_legal(v_54)) v_54 = cdrerror(v_54); else
    v_54 = cdr(v_54);
    stack[-1] = v_54;
    goto v_8;
v_9:
    v_55 = stack[-1];
    v_54 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_54 = cons(v_55, v_54);
    env = stack[-3];
    v_55 = v_54;
v_10:
    v_54 = stack[-2];
    if (v_54 == nil) goto v_44;
    else goto v_45;
v_44:
    v_54 = v_55;
    goto v_7;
v_45:
    v_54 = stack[-2];
    v_54 = car(v_54);
    {   LispObject fn = basic_elt(env, 3); // addsq
    v_54 = (*qfn2(fn))(fn, v_54, v_55);
    }
    env = stack[-3];
    v_55 = v_54;
    v_54 = stack[-2];
    v_54 = cdr(v_54);
    stack[-2] = v_54;
    goto v_10;
v_7:
    return onevalue(v_54);
}



setup_type const u20_setup[] =
{
    {"physop-ordop",            G0W2,     G1W2,     CC_physopKordop,G3W2,G4W2},
    {"zero-roads",              G0W1,     CC_zeroKroads,G2W1, G3W1,     G4W1},
    {"addgt",                   G0W1,     CC_addgt, G2W1,     G3W1,     G4W1},
    {"lex_save_context",        CC_lex_save_context,G1W0,G2W0,G3W0,     G4W0},
    {"ctx_filter",              G0W2,     G1W2,     CC_ctx_filter,G3W2, G4W2},
    {"ofsf_entry2at",           G0W3,     G1W3,     G2W3,     CC_ofsf_entry2at,G4W3},
    {"monomdivide",             G0W2,     G1W2,     CC_monomdivide,G3W2,G4W2},
    {"rl_nnf",                  G0W1,     CC_rl_nnf,G2W1,     G3W1,     G4W1},
    {"innprodkp",               G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_innprodkp},
    {"talp_rnf1",               G0W1,     CC_talp_rnf1,G2W1,  G3W1,     G4W1},
    {"distribute.multiplicity", G0W2,     G1W2,     CC_distributeQmultiplicity,G3W2,G4W2},
    {"ibalp_readform",          G0W1,     CC_ibalp_readform,G2W1,G3W1,  G4W1},
    {"ir2om",                   G0W1,     CC_ir2om, G2W1,     G3W1,     G4W1},
    {"xord_deglex",             G0W2,     G1W2,     CC_xord_deglex,G3W2,G4W2},
    {"contr",                   G0W2,     G1W2,     CC_contr, G3W2,     G4W2},
    {"repasc",                  G0W3,     G1W3,     G2W3,     CC_repasc,G4W3},
    {"general-reduce-mod-p",    G0W1,     CC_generalKreduceKmodKp,G2W1,G3W1,G4W1},
    {"ordexn",                  G0W2,     G1W2,     CC_ordexn,G3W2,     G4W2},
    {"ofsf_smmkatl1",           G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_ofsf_smmkatl1},
    {"ibalp_calcmom",           G0W1,     CC_ibalp_calcmom,G2W1,G3W1,   G4W1},
    {"groebcplistsortin",       G0W2,     G1W2,     CC_groebcplistsortin,G3W2,G4W2},
    {"invp",                    G0W1,     CC_invp,  G2W1,     G3W1,     G4W1},
    {"th_match",                G0W2,     G1W2,     CC_th_match,G3W2,   G4W2},
    {":expt",                   G0W2,     G1W2,     CC_Texpt, G3W2,     G4W2},
    {"print_with_margin_sub",   G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_print_with_margin_sub},
    {"simp*sq",                 G0W1,     CC_simpHsq,G2W1,    G3W1,     G4W1},
    {"talp_invn",               G0W1,     CC_talp_invn,G2W1,  G3W1,     G4W1},
    {"cl_susiminlevel",         G0W2,     G1W2,     CC_cl_susiminlevel,G3W2,G4W2},
    {"tobvarir",                G0W1,     CC_tobvarir,G2W1,   G3W1,     G4W1},
    {"formcond",                G0W3,     G1W3,     G2W3,     CC_formcond,G4W3},
    {"evalequal",               G0W2,     G1W2,     CC_evalequal,G3W2,  G4W2},
    {"mv2sf1",                  G0W3,     G1W3,     G2W3,     CC_mv2sf1,G4W3},
    {"di_insert",               G0W3,     G1W3,     G2W3,     CC_di_insert,G4W3},
    {"decprec2internal",        G0W1,     CC_decprec2internal,G2W1,G3W1,G4W1},
    {"carrassoc",               G0W2,     G1W2,     CC_carrassoc,G3W2,  G4W2},
    {"make_tuple_type",         G0W1,     CC_make_tuple_type,G2W1,G3W1, G4W1},
    {"triplesetprolongset",     G0W2,     G1W2,     CC_triplesetprolongset,G3W2,G4W2},
    {"findnthroot",             G0W1,     CC_findnthroot,G2W1,G3W1,     G4W1},
    {"basic-simpexpt",          G0W1,     CC_basicKsimpexpt,G2W1,G3W1,  G4W1},
    {"applyrd",                 CC_applyrd,G1W0,    G2W0,     G3W0,     G4W0},
    {"merge-ind-vars",          G0W2,     G1W2,     CC_mergeKindKvars,G3W2,G4W2},
    {"vdpred",                  G0W1,     CC_vdpred,G2W1,     G3W1,     G4W1},
    {"indexvarordp",            G0W2,     G1W2,     CC_indexvarordp,G3W2,G4W2},
    {"cut:mt",                  G0W2,     G1W2,     CC_cutTmt,G3W2,     G4W2},
    {"lispassignp",             G0W1,     CC_lispassignp,G2W1,G3W1,     G4W1},
    {"begin1a",                 G0W1,     CC_begin1a,G2W1,    G3W1,     G4W1},
    {"bas_newnumber",           G0W2,     G1W2,     CC_bas_newnumber,G3W2,G4W2},
    {"traput",                  G0W3,     G1W3,     G2W3,     CC_traput,G4W3},
    {"ofsf_varlat",             G0W1,     CC_ofsf_varlat,G2W1,G3W1,     G4W1},
    {"rl_csimpl",               G0W1,     CC_rl_csimpl,G2W1,  G3W1,     G4W1},
    {"mkprod",                  G0W1,     CC_mkprod,G2W1,     G3W1,     G4W1},
    {"lto_max1",                G0W1,     CC_lto_max1,G2W1,   G3W1,     G4W1},
    {"bc_fd",                   G0W1,     CC_bc_fd, G2W1,     G3W1,     G4W1},
    {"ir2mml",                  G0W1,     CC_ir2mml,G2W1,     G3W1,     G4W1},
    {"testredzz",               G0W1,     CC_testredzz,G2W1,  G3W1,     G4W1},
    {"list-mgen",               G0W1,     CC_listKmgen,G2W1,  G3W1,     G4W1},
    {"expand-imrepart",         G0W1,     CC_expandKimrepart,G2W1,G3W1, G4W1},
    {nullptr, 
        reinterpret_cast<no_args *>(
            reinterpret_cast<uintptr_t>("u20")),
        reinterpret_cast<one_arg *>(
            reinterpret_cast<uintptr_t>("81147 5184750 9366662")),
        nullptr, nullptr, nullptr}
};

// end of generated code
