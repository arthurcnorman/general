
// $destdir/u33.c        Machine generated C code

// $Id$

#include "config.h"
#include "headers.h"



// Code for triplesetprolongedby

static LispObject CC_triplesetprolongedby(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[-1] = v_3;
    v_51 = v_2;
// end of prologue
    v_52 = v_51;
    v_51 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_51 = Lgetv(nil, v_52, v_51);
    env = stack[-3];
    stack[-2] = v_51;
v_13:
    v_51 = stack[-2];
    if (!car_legal(v_51)) v_51 = carerror(v_51); else
    v_51 = car(v_51);
    if (v_51 == nil) goto v_16;
    v_51 = stack[-2];
    if (!car_legal(v_51)) v_52 = carerror(v_51); else
    v_52 = car(v_51);
    v_51 = stack[-1];
    v_51 = static_cast<LispObject>(greaterp2(v_52, v_51));
    v_51 = v_51 ? lisp_true : nil;
    env = stack[-3];
    if (v_51 == nil) goto v_16;
    goto v_17;
v_16:
    goto v_12;
v_17:
    v_51 = stack[-2];
    if (!car_legal(v_51)) v_51 = cdrerror(v_51); else
    v_51 = cdr(v_51);
    stack[-2] = v_51;
    goto v_13;
v_12:
    v_51 = stack[-2];
    if (!car_legal(v_51)) v_51 = carerror(v_51); else
    v_51 = car(v_51);
    if (v_51 == nil) goto v_32;
    v_51 = stack[-2];
    if (!car_legal(v_51)) v_52 = carerror(v_51); else
    v_52 = car(v_51);
    v_51 = stack[-1];
    if (equal(v_52, v_51)) goto v_37;
    else goto v_32;
v_37:
    goto v_33;
v_32:
    stack[0] = stack[-2];
    v_51 = stack[-2];
    if (!car_legal(v_51)) v_52 = carerror(v_51); else
    v_52 = car(v_51);
    v_51 = stack[-2];
    if (!car_legal(v_51)) v_51 = cdrerror(v_51); else
    v_51 = cdr(v_51);
    v_51 = cons(v_52, v_51);
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_51);
    v_52 = stack[0];
    v_51 = stack[-1];
    if (!car_legal(v_52)) rplaca_fails(v_52);
    setcar(v_52, v_51);
    goto v_31;
v_33:
v_31:
    v_51 = nil;
    return onevalue(v_51);
}



// Code for !*tayexp2q

static LispObject CC_Htayexp2q(LispObject env,
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
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_26 = v_2;
// end of prologue
    v_25 = v_26;
    if (!consp(v_25)) goto v_6;
    else goto v_7;
v_6:
    v_25 = v_26;
    v_25 = static_cast<LispObject>(zerop(v_25));
    v_25 = v_25 ? lisp_true : nil;
    if (v_25 == nil) goto v_13;
    v_25 = nil;
    v_26 = v_25;
    goto v_11;
v_13:
    v_25 = v_26;
    v_26 = v_25;
    goto v_11;
    v_26 = nil;
v_11:
    v_25 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_26, v_25);
v_7:
    v_25 = v_26;
    if (!car_legal(v_25)) v_25 = cdrerror(v_25); else
    v_25 = cdr(v_25);
    goto v_5;
    v_25 = nil;
v_5:
    return onevalue(v_25);
}



// Code for vdelete

static LispObject CC_vdelete(LispObject env,
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
    v_37 = nil;
v_8:
    v_35 = stack[0];
    if (v_35 == nil) goto v_11;
    else goto v_12;
v_11:
    v_35 = v_37;
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn1(fn))(fn, v_35);
    }
v_12:
    v_35 = stack[-1];
    if (!car_legal(v_35)) v_36 = carerror(v_35); else
    v_36 = car(v_35);
    v_35 = stack[0];
    if (!car_legal(v_35)) v_35 = carerror(v_35); else
    v_35 = car(v_35);
    if (!car_legal(v_35)) v_35 = carerror(v_35); else
    v_35 = car(v_35);
    if (equal(v_36, v_35)) goto v_16;
    else goto v_17;
v_16:
    v_36 = v_37;
    v_35 = stack[0];
    if (!car_legal(v_35)) v_35 = cdrerror(v_35); else
    v_35 = cdr(v_35);
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn2(fn))(fn, v_36, v_35);
    }
v_17:
    v_35 = stack[0];
    if (!car_legal(v_35)) v_35 = carerror(v_35); else
    v_35 = car(v_35);
    v_36 = v_37;
    v_35 = cons(v_35, v_36);
    env = stack[-2];
    v_37 = v_35;
    v_35 = stack[0];
    if (!car_legal(v_35)) v_35 = cdrerror(v_35); else
    v_35 = cdr(v_35);
    stack[0] = v_35;
    goto v_8;
    v_35 = nil;
    return onevalue(v_35);
}



// Code for omatpir

static LispObject CC_omatpir(LispObject env)
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// end of prologue
    {   LispObject fn = basic_elt(env, 2); // lex
    v_21 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // omsir
    v_21 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
    if (!car_legal(v_21)) v_21 = carerror(v_21); else
    v_21 = car(v_21);
    stack[-1] = v_21;
    {   LispObject fn = basic_elt(env, 2); // lex
    v_21 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 4); // omobj
    v_21 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
    if (!car_legal(v_21)) v_21 = carerror(v_21); else
    v_21 = car(v_21);
    stack[0] = v_21;
    {   LispObject fn = basic_elt(env, 2); // lex
    v_21 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
    v_21 = basic_elt(env, 1); // (!/ o m a t p)
    {   LispObject fn = basic_elt(env, 5); // checktag
    v_21 = (*qfn1(fn))(fn, v_21);
    }
    env = stack[-2];
    v_23 = stack[-1];
    v_22 = stack[0];
    v_21 = nil;
    v_21 = list2star(v_23, v_22, v_21);
    return ncons(v_21);
    return onevalue(v_21);
}



// Code for suchp

static LispObject CC_suchp(LispObject env,
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
    if (!consp(v_16)) goto v_7;
    v_16 = v_17;
    if (!car_legal(v_16)) v_16 = carerror(v_16); else
    v_16 = car(v_16);
    v_17 = basic_elt(env, 1); // such!-that
    v_16 = (v_16 == v_17 ? lisp_true : nil);
    goto v_5;
v_7:
    v_16 = nil;
    goto v_5;
    v_16 = nil;
v_5:
    return onevalue(v_16);
}



// Code for !*pf2sq

static LispObject CC_Hpf2sq(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_59, v_60;
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
    v_60 = nil;
    v_59 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_59 = cons(v_60, v_59);
    env = stack[-2];
    stack[-1] = v_59;
    v_59 = stack[0];
    if (v_59 == nil) goto v_12;
    else goto v_13;
v_12:
    v_59 = stack[-1];
    goto v_6;
v_13:
    v_59 = stack[0];
    stack[0] = v_59;
v_19:
    v_59 = stack[0];
    if (v_59 == nil) goto v_23;
    else goto v_24;
v_23:
    goto v_18;
v_24:
    v_59 = stack[0];
    if (!car_legal(v_59)) v_59 = carerror(v_59); else
    v_59 = car(v_59);
    if (!car_legal(v_59)) v_60 = carerror(v_59); else
    v_60 = car(v_59);
    v_59 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_60 == v_59) goto v_31;
    else goto v_32;
v_31:
    v_60 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_59 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_59 = cons(v_60, v_59);
    env = stack[-2];
    v_60 = v_59;
    goto v_30;
v_32:
    v_59 = stack[0];
    if (!car_legal(v_59)) v_59 = carerror(v_59); else
    v_59 = car(v_59);
    if (!car_legal(v_59)) v_60 = carerror(v_59); else
    v_60 = car(v_59);
    v_59 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 1); // to
    v_60 = (*qfn2(fn))(fn, v_60, v_59);
    }
    env = stack[-2];
    v_59 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_59 = cons(v_60, v_59);
    env = stack[-2];
    v_60 = ncons(v_59);
    env = stack[-2];
    v_59 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_59 = cons(v_60, v_59);
    env = stack[-2];
    v_60 = v_59;
    goto v_30;
    v_60 = nil;
v_30:
    v_59 = stack[0];
    if (!car_legal(v_59)) v_59 = carerror(v_59); else
    v_59 = car(v_59);
    if (!car_legal(v_59)) v_59 = cdrerror(v_59); else
    v_59 = cdr(v_59);
    {   LispObject fn = basic_elt(env, 2); // multsq
    v_60 = (*qfn2(fn))(fn, v_60, v_59);
    }
    env = stack[-2];
    v_59 = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // addsq
    v_59 = (*qfn2(fn))(fn, v_60, v_59);
    }
    env = stack[-2];
    stack[-1] = v_59;
    v_59 = stack[0];
    if (!car_legal(v_59)) v_59 = cdrerror(v_59); else
    v_59 = cdr(v_59);
    stack[0] = v_59;
    goto v_19;
v_18:
    v_59 = stack[-1];
v_6:
    return onevalue(v_59);
}



// Code for s_actual_world1

static LispObject CC_s_actual_world1(LispObject env,
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
    if (!car_legal(v_8)) v_8 = carerror(v_8); else
    v_8 = car(v_8);
    return onevalue(v_8);
}



// Code for subs2chk

static LispObject CC_subs2chk(LispObject env,
                         LispObject v_2)
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
    v_21 = qvalue(basic_elt(env, 1)); // subfg!*
    if (v_21 == nil) goto v_10;
    v_21 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // subs2f
    v_21 = (*qfn1(fn))(fn, v_21);
    }
    v_23 = v_21;
    if (!car_legal(v_21)) v_22 = cdrerror(v_21); else
    v_22 = cdr(v_21);
    v_21 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_22 == v_21) goto v_13;
    else goto v_10;
v_13:
    v_21 = v_23;
    if (!car_legal(v_21)) v_21 = carerror(v_21); else
    v_21 = car(v_21);
    stack[0] = v_21;
    goto v_8;
v_10:
v_8:
    v_21 = stack[0];
    return onevalue(v_21);
}



// Code for simp!-prop!-condense

static LispObject CC_simpKpropKcondense(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_56, v_57;
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
    stack[-2] = nil;
    v_57 = stack[-3];
    v_56 = basic_elt(env, 1); // lambda_rfde09ec49c92
    {   LispObject fn = basic_elt(env, 2); // sort
    v_56 = (*qfn2(fn))(fn, v_57, v_56);
    }
    env = stack[-5];
    stack[-3] = v_56;
v_13:
    v_56 = stack[-3];
    if (v_56 == nil) goto v_16;
    else goto v_17;
v_16:
    goto v_12;
v_17:
    v_56 = stack[-3];
    if (!car_legal(v_56)) v_56 = carerror(v_56); else
    v_56 = car(v_56);
    stack[-4] = v_56;
    v_56 = stack[-3];
    if (!car_legal(v_56)) v_56 = cdrerror(v_56); else
    v_56 = cdr(v_56);
    stack[-3] = v_56;
    v_57 = stack[-4];
    v_56 = stack[-2];
    v_56 = cons(v_57, v_56);
    env = stack[-5];
    stack[-2] = v_56;
    v_56 = stack[-3];
    stack[-1] = v_56;
v_30:
    v_56 = stack[-1];
    if (v_56 == nil) goto v_34;
    else goto v_35;
v_34:
    goto v_29;
v_35:
    v_56 = stack[-1];
    if (!car_legal(v_56)) v_56 = carerror(v_56); else
    v_56 = car(v_56);
    stack[0] = v_56;
    v_57 = stack[-4];
    v_56 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // subsetp
    v_56 = (*qfn2(fn))(fn, v_57, v_56);
    }
    env = stack[-5];
    if (v_56 == nil) goto v_44;
    v_57 = stack[0];
    v_56 = stack[-3];
    v_56 = Ldelete(nil, v_57, v_56);
    env = stack[-5];
    stack[-3] = v_56;
    goto v_42;
v_44:
v_42:
    v_56 = stack[-1];
    if (!car_legal(v_56)) v_56 = cdrerror(v_56); else
    v_56 = cdr(v_56);
    stack[-1] = v_56;
    goto v_30;
v_29:
    goto v_13;
v_12:
    v_56 = stack[-2];
    {
        LispObject fn = basic_elt(env, 4); // ordn
        return (*qfn1(fn))(fn, v_56);
    }
    return onevalue(v_56);
}



// Code for lambda_rfde09ec49c92

static LispObject CC_lambda_rfde09ec49c92(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_10 = v_2;
// end of prologue
    stack[-1] = Llength(nil, v_10);
    env = stack[-2];
    v_10 = stack[0];
    v_10 = Llength(nil, v_10);
    {
        LispObject v_13 = stack[-1];
        return Llessp_2(nil, v_13, v_10);
    }
}



// Code for skp_ordp

static LispObject CC_skp_ordp(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_11, v_12, v_13;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_11 = v_3;
    v_12 = v_2;
// end of prologue
    if (!car_legal(v_12)) v_13 = carerror(v_12); else
    v_13 = car(v_12);
    if (!car_legal(v_11)) v_12 = carerror(v_11); else
    v_12 = car(v_11);
    v_11 = basic_elt(env, 1); // atom_compare
    {
        LispObject fn = basic_elt(env, 2); // cons_ordp
        return (*qfn3(fn))(fn, v_13, v_12, v_11);
    }
}



// Code for gitimes!:

static LispObject CC_gitimesT(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_36, v_37, v_38, v_39;
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
    v_36 = v_3;
    v_37 = v_2;
// end of prologue
    v_38 = v_37;
    if (!car_legal(v_38)) v_38 = cdrerror(v_38); else
    v_38 = cdr(v_38);
    if (!car_legal(v_38)) v_39 = carerror(v_38); else
    v_39 = car(v_38);
    if (!car_legal(v_37)) v_37 = cdrerror(v_37); else
    v_37 = cdr(v_37);
    if (!car_legal(v_37)) v_38 = cdrerror(v_37); else
    v_38 = cdr(v_37);
    v_37 = v_36;
    if (!car_legal(v_37)) v_37 = cdrerror(v_37); else
    v_37 = cdr(v_37);
    if (!car_legal(v_37)) v_37 = carerror(v_37); else
    v_37 = car(v_37);
    if (!car_legal(v_36)) v_36 = cdrerror(v_36); else
    v_36 = cdr(v_36);
    if (!car_legal(v_36)) v_36 = cdrerror(v_36); else
    v_36 = cdr(v_36);
    stack[-4] = v_39;
    stack[-3] = v_38;
    stack[-2] = v_37;
    stack[-1] = v_36;
    v_37 = stack[-4];
    v_36 = stack[-2];
    stack[0] = times2(v_37, v_36);
    env = stack[-5];
    v_37 = stack[-3];
    v_36 = stack[-1];
    v_36 = times2(v_37, v_36);
    env = stack[-5];
    stack[0] = difference2(stack[0], v_36);
    env = stack[-5];
    v_37 = stack[-4];
    v_36 = stack[-1];
    stack[-1] = times2(v_37, v_36);
    env = stack[-5];
    v_37 = stack[-2];
    v_36 = stack[-3];
    v_36 = times2(v_37, v_36);
    env = stack[-5];
    v_36 = plus2(stack[-1], v_36);
    env = stack[-5];
    {
        LispObject v_45 = stack[0];
        LispObject fn = basic_elt(env, 1); // mkgi
        return (*qfn2(fn))(fn, v_45, v_36);
    }
}



// Code for ofsf_ir2atl

static LispObject CC_ofsf_ir2atl(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_79, v_80, v_81;
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
    stack[-4] = v_4;
    stack[0] = v_3;
    stack[-5] = v_2;
// end of prologue
    v_79 = stack[0];
    if (!car_legal(v_79)) v_80 = carerror(v_79); else
    v_80 = car(v_79);
    v_79 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_79 = cons(v_80, v_79);
    env = stack[-7];
    stack[-6] = v_79;
    v_79 = stack[0];
    if (!car_legal(v_79)) v_79 = cdrerror(v_79); else
    v_79 = cdr(v_79);
    stack[-3] = v_79;
v_16:
    v_79 = stack[-3];
    if (v_79 == nil) goto v_22;
    else goto v_23;
v_22:
    v_79 = nil;
    goto v_15;
v_23:
    v_79 = stack[-3];
    if (!car_legal(v_79)) v_79 = carerror(v_79); else
    v_79 = car(v_79);
    v_80 = v_79;
    v_79 = v_80;
    if (!car_legal(v_79)) v_81 = carerror(v_79); else
    v_81 = car(v_79);
    v_79 = stack[-4];
    if (equal(v_81, v_79)) goto v_31;
    else goto v_32;
v_31:
    v_81 = stack[-5];
    v_79 = v_80;
    if (!car_legal(v_79)) v_80 = cdrerror(v_79); else
    v_80 = cdr(v_79);
    v_79 = stack[-6];
    {   LispObject fn = basic_elt(env, 1); // ofsf_entry2at
    v_79 = (*qfn3(fn))(fn, v_81, v_80, v_79);
    }
    env = stack[-7];
    v_79 = ncons(v_79);
    env = stack[-7];
    goto v_30;
v_32:
    v_79 = nil;
v_30:
    stack[-2] = v_79;
    v_79 = stack[-2];
    {   LispObject fn = basic_elt(env, 2); // lastpair
    v_79 = (*qfn1(fn))(fn, v_79);
    }
    env = stack[-7];
    stack[-1] = v_79;
    v_79 = stack[-3];
    if (!car_legal(v_79)) v_79 = cdrerror(v_79); else
    v_79 = cdr(v_79);
    stack[-3] = v_79;
    v_79 = stack[-1];
    if (!consp(v_79)) goto v_48;
    else goto v_49;
v_48:
    goto v_16;
v_49:
v_17:
    v_79 = stack[-3];
    if (v_79 == nil) goto v_53;
    else goto v_54;
v_53:
    v_79 = stack[-2];
    goto v_15;
v_54:
    stack[0] = stack[-1];
    v_79 = stack[-3];
    if (!car_legal(v_79)) v_79 = carerror(v_79); else
    v_79 = car(v_79);
    v_80 = v_79;
    v_79 = v_80;
    if (!car_legal(v_79)) v_81 = carerror(v_79); else
    v_81 = car(v_79);
    v_79 = stack[-4];
    if (equal(v_81, v_79)) goto v_63;
    else goto v_64;
v_63:
    v_81 = stack[-5];
    v_79 = v_80;
    if (!car_legal(v_79)) v_80 = cdrerror(v_79); else
    v_80 = cdr(v_79);
    v_79 = stack[-6];
    {   LispObject fn = basic_elt(env, 1); // ofsf_entry2at
    v_79 = (*qfn3(fn))(fn, v_81, v_80, v_79);
    }
    env = stack[-7];
    v_79 = ncons(v_79);
    env = stack[-7];
    goto v_62;
v_64:
    v_79 = nil;
v_62:
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_79);
    v_79 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // lastpair
    v_79 = (*qfn1(fn))(fn, v_79);
    }
    env = stack[-7];
    stack[-1] = v_79;
    v_79 = stack[-3];
    if (!car_legal(v_79)) v_79 = cdrerror(v_79); else
    v_79 = cdr(v_79);
    stack[-3] = v_79;
    goto v_17;
v_15:
    return onevalue(v_79);
}



// Code for repr_a

static LispObject CC_repr_a(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_17, v_18;
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
    if (!car_legal(v_17)) v_17 = cdrerror(v_17); else
    v_17 = cdr(v_17);
    if (!car_legal(v_17)) v_17 = cdrerror(v_17); else
    v_17 = cdr(v_17);
    if (!car_legal(v_17)) v_17 = carerror(v_17); else
    v_17 = car(v_17);
    v_17 = Lreverse(nil, v_17);
    env = stack[-1];
    if (!car_legal(v_17)) v_17 = carerror(v_17); else
    v_17 = car(v_17);
    if (!car_legal(v_17)) v_18 = carerror(v_17); else
    v_18 = car(v_17);
    v_17 = stack[0];
    if (!car_legal(v_17)) v_17 = cdrerror(v_17); else
    v_17 = cdr(v_17);
    if (!car_legal(v_17)) v_17 = cdrerror(v_17); else
    v_17 = cdr(v_17);
    if (!car_legal(v_17)) v_17 = cdrerror(v_17); else
    v_17 = cdr(v_17);
    if (!car_legal(v_17)) v_17 = carerror(v_17); else
    v_17 = car(v_17);
    {
        LispObject fn = basic_elt(env, 1); // addf
        return (*qfn2(fn))(fn, v_18, v_17);
    }
}



// Code for dip_ilcomb2r

static LispObject CC_dip_ilcomb2r(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_149, v_150, v_151;
    LispObject v_5, v_6, v_7, v_8;
    if (_a4up_ == nil)
        aerror1("not enough arguments provided", basic_elt(env, 0));
    v_5 = car(_a4up_); _a4up_ = cdr(_a4up_);
    if (_a4up_ == nil)
        aerror1("not enough arguments provided", basic_elt(env, 0));
    v_6 = car(_a4up_); _a4up_ = cdr(_a4up_);
    if (_a4up_ == nil)
        aerror1("not enough arguments provided", basic_elt(env, 0));
    v_7 = car(_a4up_); _a4up_ = cdr(_a4up_);
    if (_a4up_ == nil)
        aerror1("not enough arguments provided", basic_elt(env, 0));
    v_8 = car(_a4up_); _a4up_ = cdr(_a4up_);
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
        push(v_2,v_3,v_4,v_5,v_6,v_7);
        push(v_8);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_8,v_7,v_6,v_5,v_4,v_3);
        pop(v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil, nil, nil, nil, nil);
    push(nil, nil, nil);
    stack_popper stack_popper_var(9);
// copy arguments values to proper place
    stack[0] = v_8;
    stack[-1] = v_7;
    stack[-2] = v_6;
    stack[-3] = v_5;
    stack[-4] = v_4;
    stack[-5] = v_3;
    stack[-6] = v_2;
// end of prologue
    stack[-7] = nil;
v_16:
    v_149 = stack[-1];
    if (v_149 == nil) goto v_19;
    v_150 = stack[-4];
    v_149 = stack[-2];
    {   LispObject fn = basic_elt(env, 1); // ev_comp
    v_150 = (*qfn2(fn))(fn, v_150, v_149);
    }
    env = stack[-8];
    stack[-7] = v_150;
    v_149 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    {   LispObject fn = basic_elt(env, 2); // iequal
    v_149 = (*qfn2(fn))(fn, v_150, v_149);
    }
    env = stack[-8];
    if (v_149 == nil) goto v_19;
    goto v_20;
v_19:
    goto v_15;
v_20:
    v_151 = stack[-3];
    v_150 = stack[-2];
    v_149 = stack[-6];
    v_149 = list2star(v_151, v_150, v_149);
    env = stack[-8];
    stack[-6] = v_149;
    v_149 = stack[-1];
    if (!car_legal(v_149)) v_149 = carerror(v_149); else
    v_149 = car(v_149);
    stack[-2] = v_149;
    v_149 = stack[-1];
    if (!car_legal(v_149)) v_149 = cdrerror(v_149); else
    v_149 = cdr(v_149);
    stack[-1] = v_149;
    v_149 = stack[-1];
    if (!car_legal(v_149)) v_150 = carerror(v_149); else
    v_150 = car(v_149);
    v_149 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // bc_prod
    v_149 = (*qfn2(fn))(fn, v_150, v_149);
    }
    env = stack[-8];
    stack[-3] = v_149;
    v_149 = stack[-1];
    if (!car_legal(v_149)) v_149 = cdrerror(v_149); else
    v_149 = cdr(v_149);
    stack[-1] = v_149;
    goto v_16;
v_15:
    v_149 = stack[-1];
    if (v_149 == nil) goto v_47;
    v_150 = stack[-7];
    v_149 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 2); // iequal
    v_149 = (*qfn2(fn))(fn, v_150, v_149);
    }
    env = stack[-8];
    if (v_149 == nil) goto v_52;
    v_151 = stack[-5];
    v_150 = stack[-4];
    v_149 = stack[-6];
    v_149 = list2star(v_151, v_150, v_149);
    env = stack[-8];
    v_149 = list2star(stack[-3], stack[-2], v_149);
    env = stack[-8];
    stack[-6] = v_149;
    goto v_50;
v_52:
    v_150 = stack[-5];
    v_149 = stack[-3];
    {   LispObject fn = basic_elt(env, 4); // bc_sum
    v_149 = (*qfn2(fn))(fn, v_150, v_149);
    }
    env = stack[-8];
    stack[-2] = v_149;
    v_149 = stack[-2];
    {   LispObject fn = basic_elt(env, 5); // bc_zero!?
    v_149 = (*qfn1(fn))(fn, v_149);
    }
    env = stack[-8];
    if (v_149 == nil) goto v_70;
    else goto v_71;
v_70:
    v_151 = stack[-2];
    v_150 = stack[-4];
    v_149 = stack[-6];
    v_149 = list2star(v_151, v_150, v_149);
    env = stack[-8];
    stack[-6] = v_149;
    goto v_69;
v_71:
v_69:
    goto v_50;
v_50:
v_80:
    v_149 = stack[-1];
    if (v_149 == nil) goto v_83;
    else goto v_84;
v_83:
    goto v_79;
v_84:
    v_149 = stack[-1];
    if (!car_legal(v_149)) v_150 = carerror(v_149); else
    v_150 = car(v_149);
    v_149 = stack[-6];
    v_149 = cons(v_150, v_149);
    env = stack[-8];
    stack[-6] = v_149;
    v_149 = stack[-1];
    if (!car_legal(v_149)) v_149 = cdrerror(v_149); else
    v_149 = cdr(v_149);
    stack[-1] = v_149;
    v_149 = stack[-1];
    if (!car_legal(v_149)) v_150 = carerror(v_149); else
    v_150 = car(v_149);
    v_149 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // bc_prod
    v_150 = (*qfn2(fn))(fn, v_150, v_149);
    }
    env = stack[-8];
    v_149 = stack[-6];
    v_149 = cons(v_150, v_149);
    env = stack[-8];
    stack[-6] = v_149;
    v_149 = stack[-1];
    if (!car_legal(v_149)) v_149 = cdrerror(v_149); else
    v_149 = cdr(v_149);
    stack[-1] = v_149;
    goto v_80;
v_79:
    v_149 = stack[-6];
        return Lnreverse(nil, v_149);
v_47:
    v_150 = stack[-4];
    v_149 = stack[-2];
    {   LispObject fn = basic_elt(env, 1); // ev_comp
    v_149 = (*qfn2(fn))(fn, v_150, v_149);
    }
    env = stack[-8];
    stack[-7] = v_149;
    v_150 = stack[-7];
    v_149 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    {   LispObject fn = basic_elt(env, 2); // iequal
    v_149 = (*qfn2(fn))(fn, v_150, v_149);
    }
    env = stack[-8];
    if (v_149 == nil) goto v_109;
    stack[0] = stack[-5];
    stack[-1] = stack[-4];
    v_151 = stack[-3];
    v_150 = stack[-2];
    v_149 = stack[-6];
    v_149 = list2star(v_151, v_150, v_149);
    env = stack[-8];
    v_149 = list2star(stack[0], stack[-1], v_149);
    stack[-6] = v_149;
    goto v_107;
v_109:
    v_150 = stack[-7];
    v_149 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 2); // iequal
    v_149 = (*qfn2(fn))(fn, v_150, v_149);
    }
    env = stack[-8];
    if (v_149 == nil) goto v_121;
    stack[0] = stack[-3];
    stack[-1] = stack[-2];
    v_151 = stack[-5];
    v_150 = stack[-4];
    v_149 = stack[-6];
    v_149 = list2star(v_151, v_150, v_149);
    env = stack[-8];
    v_149 = list2star(stack[0], stack[-1], v_149);
    stack[-6] = v_149;
    goto v_107;
v_121:
    v_150 = stack[-5];
    v_149 = stack[-3];
    {   LispObject fn = basic_elt(env, 4); // bc_sum
    v_149 = (*qfn2(fn))(fn, v_150, v_149);
    }
    env = stack[-8];
    stack[-2] = v_149;
    v_149 = stack[-2];
    {   LispObject fn = basic_elt(env, 5); // bc_zero!?
    v_149 = (*qfn1(fn))(fn, v_149);
    }
    env = stack[-8];
    if (v_149 == nil) goto v_139;
    else goto v_140;
v_139:
    v_151 = stack[-2];
    v_150 = stack[-4];
    v_149 = stack[-6];
    v_149 = list2star(v_151, v_150, v_149);
    stack[-6] = v_149;
    goto v_138;
v_140:
v_138:
    goto v_107;
v_107:
    v_149 = stack[-6];
        return Lnreverse(nil, v_149);
    return onevalue(v_149);
}



// Code for ev_2a

static LispObject CC_ev_2a(LispObject env,
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
    v_7 = qvalue(basic_elt(env, 1)); // dip_vars!*
    {
        LispObject fn = basic_elt(env, 2); // ev_2a1
        return (*qfn2(fn))(fn, v_8, v_7);
    }
}



// Code for bvarrd

static LispObject CC_bvarrd(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_56, v_57;
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
    {   LispObject fn = basic_elt(env, 9); // lex
    v_56 = (*qfn0(fn))(fn);
    }
    env = stack[-3];
    v_57 = qvalue(basic_elt(env, 1)); // char
    v_56 = basic_elt(env, 2); // (d e g r e e)
    if (equal(v_57, v_56)) goto v_10;
    else goto v_11;
v_10:
    v_57 = basic_elt(env, 3); // "<bvar>"
    v_56 = static_cast<LispObject>(240)+TAG_FIXNUM; // 15
    {   LispObject fn = basic_elt(env, 10); // errorml
    v_56 = (*qfn2(fn))(fn, v_57, v_56);
    }
    env = stack[-3];
    goto v_9;
v_11:
v_9:
    {   LispObject fn = basic_elt(env, 11); // mathml2
    v_56 = (*qfn0(fn))(fn);
    }
    env = stack[-3];
    stack[0] = v_56;
    {   LispObject fn = basic_elt(env, 9); // lex
    v_56 = (*qfn0(fn))(fn);
    }
    env = stack[-3];
    v_57 = qvalue(basic_elt(env, 1)); // char
    v_56 = basic_elt(env, 2); // (d e g r e e)
    if (equal(v_57, v_56)) goto v_21;
    else goto v_22;
v_21:
    {   LispObject fn = basic_elt(env, 12); // mathml
    v_56 = (*qfn0(fn))(fn);
    }
    env = stack[-3];
    stack[-2] = v_56;
    {   LispObject fn = basic_elt(env, 9); // lex
    v_56 = (*qfn0(fn))(fn);
    }
    env = stack[-3];
    v_57 = qvalue(basic_elt(env, 1)); // char
    v_56 = basic_elt(env, 4); // (!/ d e g r e e)
    if (equal(v_57, v_56)) goto v_30;
    v_57 = basic_elt(env, 5); // "</degree>"
    v_56 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    {   LispObject fn = basic_elt(env, 13); // error
    v_56 = (*qfn2(fn))(fn, v_57, v_56);
    }
    env = stack[-3];
    goto v_28;
v_30:
v_28:
    {   LispObject fn = basic_elt(env, 9); // lex
    v_56 = (*qfn0(fn))(fn);
    }
    env = stack[-3];
    goto v_20;
v_22:
    v_56 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-2] = v_56;
    goto v_20;
v_20:
    v_57 = qvalue(basic_elt(env, 1)); // char
    v_56 = basic_elt(env, 6); // (!/ b v a r)
    if (equal(v_57, v_56)) goto v_42;
    else goto v_43;
v_42:
    stack[-1] = basic_elt(env, 7); // bvar
    v_56 = stack[-2];
    v_56 = ncons(v_56);
    {
        LispObject v_61 = stack[-1];
        LispObject v_62 = stack[0];
        return list2star(v_61, v_62, v_56);
    }
v_43:
    v_57 = basic_elt(env, 8); // "</bvar>"
    v_56 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    {   LispObject fn = basic_elt(env, 10); // errorml
    v_56 = (*qfn2(fn))(fn, v_57, v_56);
    }
    goto v_41;
v_41:
    v_56 = nil;
    return onevalue(v_56);
}



// Code for !:dmtimeslst

static LispObject CC_Tdmtimeslst(LispObject env,
                         LispObject v_2)
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
    v_24 = v_25;
    if (v_24 == nil) goto v_6;
    else goto v_7;
v_6:
    v_24 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_5;
v_7:
    v_24 = v_25;
    if (!car_legal(v_24)) v_24 = cdrerror(v_24); else
    v_24 = cdr(v_24);
    if (v_24 == nil) goto v_10;
    else goto v_11;
v_10:
    v_24 = v_25;
    if (!car_legal(v_24)) v_24 = carerror(v_24); else
    v_24 = car(v_24);
    goto v_5;
v_11:
    v_24 = v_25;
    if (!car_legal(v_24)) stack[0] = carerror(v_24); else
    stack[0] = car(v_24);
    v_24 = v_25;
    if (!car_legal(v_24)) v_24 = cdrerror(v_24); else
    v_24 = cdr(v_24);
    {   LispObject fn = basic_elt(env, 0); // !:dmtimeslst
    v_24 = (*qfn1(fn))(fn, v_24);
    }
    env = stack[-1];
    {
        LispObject v_27 = stack[0];
        LispObject fn = basic_elt(env, 1); // !:times
        return (*qfn2(fn))(fn, v_27, v_24);
    }
    v_24 = nil;
v_5:
    return onevalue(v_24);
}



// Code for prop!-simp

static LispObject CC_propKsimp(LispObject env,
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
    stack[0] = nil;
    v_13 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_12 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_12 = list2(v_13, v_12);
    env = stack[-3];
    {
        LispObject v_17 = stack[-2];
        LispObject v_18 = stack[-1];
        LispObject v_19 = stack[0];
        LispObject fn = basic_elt(env, 1); // prop!-simp1
        return (*qfn4up(fn))(fn, v_17, v_18, v_19, v_12);
    }
}



// Code for red_topred

static LispObject CC_red_topred(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_62 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // bas_dpoly
    v_62 = (*qfn1(fn))(fn, v_62);
    }
    env = stack[-3];
    if (v_62 == nil) goto v_11;
    else goto v_12;
v_11:
    v_62 = lisp_true;
    goto v_10;
v_12:
    v_62 = stack[-1];
    v_62 = (v_62 == nil ? lisp_true : nil);
    goto v_10;
    v_62 = nil;
v_10:
    if (v_62 == nil) goto v_8;
    v_62 = stack[0];
    goto v_6;
v_8:
    v_63 = stack[-1];
    v_62 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // red_topredbe
    v_62 = (*qfn2(fn))(fn, v_63, v_62);
    }
    env = stack[-3];
    stack[0] = v_62;
v_32:
    v_62 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // bas_dpoly
    v_62 = (*qfn1(fn))(fn, v_62);
    }
    env = stack[-3];
    v_63 = v_62;
    if (v_62 == nil) goto v_35;
    stack[-2] = stack[-1];
    v_62 = v_63;
    {   LispObject fn = basic_elt(env, 4); // dp_lmon
    v_62 = (*qfn1(fn))(fn, v_62);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 5); // red_divtest
    v_62 = (*qfn2(fn))(fn, stack[-2], v_62);
    }
    env = stack[-3];
    stack[-2] = v_62;
    if (v_62 == nil) goto v_35;
    goto v_36;
v_35:
    goto v_31;
v_36:
    v_63 = stack[0];
    v_62 = stack[-2];
    {   LispObject fn = basic_elt(env, 6); // red_subst
    v_62 = (*qfn2(fn))(fn, v_63, v_62);
    }
    env = stack[-3];
    stack[-2] = v_62;
    v_62 = qvalue(basic_elt(env, 1)); // !*noetherian
    if (v_62 == nil) goto v_51;
    else goto v_52;
v_51:
    v_63 = stack[-1];
    v_62 = stack[0];
    {   LispObject fn = basic_elt(env, 7); // red_update
    v_62 = (*qfn2(fn))(fn, v_63, v_62);
    }
    env = stack[-3];
    stack[-1] = v_62;
    goto v_50;
v_52:
v_50:
    v_63 = stack[-1];
    v_62 = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // red_topredbe
    v_62 = (*qfn2(fn))(fn, v_63, v_62);
    }
    env = stack[-3];
    stack[0] = v_62;
    goto v_32;
v_31:
    v_62 = stack[0];
    goto v_6;
    v_62 = nil;
v_6:
    return onevalue(v_62);
}



// Code for list_is_all_free

static LispObject CC_list_is_all_free(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_23;
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
    v_23 = stack[0];
    if (v_23 == nil) goto v_9;
    else goto v_10;
v_9:
    v_23 = lisp_true;
    goto v_5;
v_10:
    v_23 = stack[0];
    if (!car_legal(v_23)) v_23 = carerror(v_23); else
    v_23 = car(v_23);
    {   LispObject fn = basic_elt(env, 1); // nodum_varp
    v_23 = (*qfn1(fn))(fn, v_23);
    }
    env = stack[-1];
    if (v_23 == nil) goto v_14;
    v_23 = stack[0];
    if (!car_legal(v_23)) v_23 = cdrerror(v_23); else
    v_23 = cdr(v_23);
    stack[0] = v_23;
    goto v_6;
v_14:
    v_23 = nil;
    goto v_5;
    v_23 = nil;
v_5:
    return onevalue(v_23);
}



// Code for general!-horner!-rule!-mod!-p

static LispObject CC_generalKhornerKruleKmodKp(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_108, v_109, v_110, v_111;
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
    real_push(nil);
    stack_popper stack_popper_var(7);
// copy arguments values to proper place
    stack[-2] = v_6;
    stack[-3] = v_5;
    stack[-4] = v_4;
    v_109 = v_3;
    v_110 = v_2;
// end of prologue
    v_108 = stack[-4];
    if (!consp(v_108)) goto v_18;
    else goto v_19;
v_18:
    v_108 = lisp_true;
    goto v_17;
v_19:
    v_108 = stack[-4];
    if (!car_legal(v_108)) v_108 = carerror(v_108); else
    v_108 = car(v_108);
    v_108 = (consp(v_108) ? nil : lisp_true);
    goto v_17;
    v_108 = nil;
v_17:
    if (v_108 == nil) goto v_15;
    v_108 = lisp_true;
    goto v_13;
v_15:
    v_108 = stack[-4];
    if (!car_legal(v_108)) v_108 = carerror(v_108); else
    v_108 = car(v_108);
    if (!car_legal(v_108)) v_108 = carerror(v_108); else
    v_108 = car(v_108);
    if (!car_legal(v_108)) v_111 = carerror(v_108); else
    v_111 = car(v_108);
    v_108 = stack[-2];
    v_108 = (equal(v_111, v_108) ? lisp_true : nil);
    v_108 = (v_108 == nil ? lisp_true : nil);
    goto v_13;
    v_108 = nil;
v_13:
    if (v_108 == nil) goto v_11;
    v_108 = stack[-3];
    if (v_108 == nil) goto v_43;
    else goto v_44;
v_43:
    v_108 = lisp_true;
    goto v_42;
v_44:
    v_108 = stack[-3];
    v_108 = static_cast<LispObject>(zerop(v_108));
    v_108 = v_108 ? lisp_true : nil;
    env = stack[-6];
    goto v_42;
    v_108 = nil;
v_42:
    if (v_108 == nil) goto v_40;
    v_108 = stack[-4];
    goto v_38;
v_40:
    stack[0] = v_110;
    v_108 = stack[-3];
    {   LispObject fn = basic_elt(env, 1); // general!-expt!-mod!-p
    v_108 = (*qfn2(fn))(fn, v_108, v_109);
    }
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 2); // general!-times!-mod!-p
    v_108 = (*qfn2(fn))(fn, stack[0], v_108);
    }
    env = stack[-6];
    v_110 = v_108;
    v_108 = stack[-4];
    v_109 = v_110;
    {
        LispObject fn = basic_elt(env, 3); // general!-plus!-mod!-p
        return (*qfn2(fn))(fn, v_108, v_109);
    }
    v_108 = nil;
v_38:
    goto v_9;
v_11:
    v_108 = stack[-4];
    if (!car_legal(v_108)) v_108 = carerror(v_108); else
    v_108 = car(v_108);
    if (!car_legal(v_108)) v_108 = carerror(v_108); else
    v_108 = car(v_108);
    if (!car_legal(v_108)) v_108 = cdrerror(v_108); else
    v_108 = cdr(v_108);
    stack[-5] = v_108;
    v_108 = stack[-3];
    if (v_108 == nil) goto v_78;
    else goto v_79;
v_78:
    v_108 = lisp_true;
    goto v_77;
v_79:
    v_108 = stack[-3];
    v_108 = static_cast<LispObject>(zerop(v_108));
    v_108 = v_108 ? lisp_true : nil;
    env = stack[-6];
    goto v_77;
    v_108 = nil;
v_77:
    if (v_108 == nil) goto v_75;
    v_108 = stack[-4];
    if (!car_legal(v_108)) v_108 = carerror(v_108); else
    v_108 = car(v_108);
    if (!car_legal(v_108)) v_108 = cdrerror(v_108); else
    v_108 = cdr(v_108);
    stack[0] = v_108;
    goto v_73;
v_75:
    v_108 = stack[-4];
    if (!car_legal(v_108)) v_108 = carerror(v_108); else
    v_108 = car(v_108);
    if (!car_legal(v_108)) stack[-1] = cdrerror(v_108); else
    stack[-1] = cdr(v_108);
    stack[0] = v_110;
    v_110 = stack[-3];
    v_108 = stack[-5];
    v_108 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_109) - static_cast<std::uintptr_t>(v_108) + TAG_FIXNUM);
    {   LispObject fn = basic_elt(env, 1); // general!-expt!-mod!-p
    v_108 = (*qfn2(fn))(fn, v_110, v_108);
    }
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 2); // general!-times!-mod!-p
    v_108 = (*qfn2(fn))(fn, stack[0], v_108);
    }
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 3); // general!-plus!-mod!-p
    v_108 = (*qfn2(fn))(fn, stack[-1], v_108);
    }
    env = stack[-6];
    stack[0] = v_108;
    goto v_73;
    stack[0] = nil;
v_73:
    stack[-1] = stack[-5];
    v_108 = stack[-4];
    if (!car_legal(v_108)) stack[-4] = cdrerror(v_108); else
    stack[-4] = cdr(v_108);
    v_109 = stack[-3];
    v_108 = stack[-2];
    v_108 = list2(v_109, v_108);
    env = stack[-6];
    {
        LispObject v_118 = stack[0];
        LispObject v_119 = stack[-1];
        LispObject v_120 = stack[-4];
        LispObject fn = basic_elt(env, 0); // general!-horner!-rule!-mod!-p
        return (*qfn4up(fn))(fn, v_118, v_119, v_120, v_108);
    }
    goto v_9;
    v_108 = nil;
v_9:
    return onevalue(v_108);
}



// Code for !*a2k

static LispObject CC_Ha2k(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_32 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // simp!*
    v_32 = (*qfn1(fn))(fn, v_32);
    }
    env = stack[-2];
    stack[-1] = v_32;
    {   LispObject fn = basic_elt(env, 3); // kernp
    v_32 = (*qfn1(fn))(fn, v_32);
    }
    env = stack[-2];
    if (v_32 == nil) goto v_10;
    v_32 = stack[-1];
    if (!car_legal(v_32)) v_32 = carerror(v_32); else
    v_32 = car(v_32);
    if (!car_legal(v_32)) v_32 = carerror(v_32); else
    v_32 = car(v_32);
    if (!car_legal(v_32)) v_32 = carerror(v_32); else
    v_32 = car(v_32);
    if (!car_legal(v_32)) v_32 = carerror(v_32); else
    v_32 = car(v_32);
    goto v_6;
v_10:
    v_32 = stack[0];
    if (v_32 == nil) goto v_24;
    else goto v_25;
v_24:
    v_32 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_33 = v_32;
    goto v_23;
v_25:
    v_32 = stack[0];
    v_33 = v_32;
    goto v_23;
    v_33 = nil;
v_23:
    v_32 = basic_elt(env, 1); // kernel
    {   LispObject fn = basic_elt(env, 4); // typerr
    v_32 = (*qfn2(fn))(fn, v_33, v_32);
    }
    goto v_8;
v_8:
    v_32 = nil;
v_6:
    return onevalue(v_32);
}



// Code for formbool

static LispObject CC_formbool(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_146, v_147, v_148;
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
    v_147 = stack[-2];
    v_146 = basic_elt(env, 1); // symbolic
    if (v_147 == v_146) goto v_8;
    else goto v_9;
v_8:
    v_148 = stack[-4];
    v_147 = stack[-3];
    v_146 = stack[-2];
    {
        LispObject fn = basic_elt(env, 9); // formc
        return (*qfn3(fn))(fn, v_148, v_147, v_146);
    }
v_9:
    v_146 = stack[-4];
    if (!consp(v_146)) goto v_16;
    else goto v_17;
v_16:
    v_147 = stack[-4];
    v_146 = lisp_true;
    if (v_147 == v_146) goto v_21;
    else goto v_22;
v_21:
    v_146 = stack[-4];
    goto v_20;
v_22:
    v_146 = stack[-4];
    if (symbolp(v_146)) goto v_31;
    v_146 = lisp_true;
    goto v_29;
v_31:
    v_147 = stack[-4];
    v_146 = stack[-3];
    v_146 = Latsoc(nil, v_147, v_146);
    goto v_29;
    v_146 = nil;
v_29:
    if (v_146 == nil) goto v_27;
    v_147 = basic_elt(env, 2); // boolvalue!*
    v_146 = stack[-4];
    return list2(v_147, v_146);
v_27:
    stack[0] = basic_elt(env, 2); // boolvalue!*
    v_148 = stack[-4];
    v_147 = stack[-3];
    v_146 = stack[-2];
    {   LispObject fn = basic_elt(env, 10); // formc!*
    v_146 = (*qfn3(fn))(fn, v_148, v_147, v_146);
    }
    {
        LispObject v_155 = stack[0];
        return list2(v_155, v_146);
    }
    v_146 = nil;
v_20:
    goto v_7;
v_17:
    v_146 = stack[-4];
    if (!car_legal(v_146)) v_147 = cdrerror(v_146); else
    v_147 = cdr(v_146);
    v_146 = stack[-3];
    {   LispObject fn = basic_elt(env, 11); // intexprlisp
    v_146 = (*qfn2(fn))(fn, v_147, v_146);
    }
    env = stack[-6];
    if (v_146 == nil) goto v_51;
    v_146 = stack[-4];
    if (!car_legal(v_146)) v_147 = carerror(v_146); else
    v_147 = car(v_146);
    v_146 = basic_elt(env, 3); // boolfn
    v_146 = get(v_147, v_146);
    env = stack[-6];
    if (v_146 == nil) goto v_51;
    v_146 = stack[-4];
    goto v_7;
v_51:
    v_146 = stack[-4];
    if (!car_legal(v_146)) v_146 = carerror(v_146); else
    v_146 = car(v_146);
    if (symbolp(v_146)) goto v_65;
    else goto v_64;
v_65:
    v_146 = stack[-4];
    if (!car_legal(v_146)) v_147 = carerror(v_146); else
    v_147 = car(v_146);
    v_146 = basic_elt(env, 3); // boolfn
    v_146 = get(v_147, v_146);
    env = stack[-6];
    if (v_146 == nil) goto v_64;
    v_146 = stack[-4];
    if (!car_legal(v_146)) v_147 = carerror(v_146); else
    v_147 = car(v_146);
    v_146 = basic_elt(env, 3); // boolfn
    stack[0] = get(v_147, v_146);
    env = stack[-6];
    v_146 = stack[-4];
    if (!car_legal(v_146)) v_148 = cdrerror(v_146); else
    v_148 = cdr(v_146);
    v_147 = stack[-3];
    v_146 = stack[-2];
    {   LispObject fn = basic_elt(env, 12); // formclis
    v_146 = (*qfn3(fn))(fn, v_148, v_147, v_146);
    }
    {
        LispObject v_156 = stack[0];
        return cons(v_156, v_146);
    }
v_64:
    v_146 = stack[-4];
    if (!car_legal(v_146)) v_146 = carerror(v_146); else
    v_146 = car(v_146);
    if (symbolp(v_146)) goto v_85;
    else goto v_84;
v_85:
    v_146 = stack[-4];
    if (!car_legal(v_146)) v_147 = carerror(v_146); else
    v_147 = car(v_146);
    v_146 = basic_elt(env, 4); // boolean
    v_146 = Lflagp(nil, v_147, v_146);
    env = stack[-6];
    if (v_146 == nil) goto v_84;
    v_146 = stack[-4];
    if (!car_legal(v_146)) stack[-1] = carerror(v_146); else
    stack[-1] = car(v_146);
    v_146 = stack[-4];
    if (!car_legal(v_146)) stack[0] = cdrerror(v_146); else
    stack[0] = cdr(v_146);
    v_146 = stack[-4];
    if (!car_legal(v_146)) v_147 = carerror(v_146); else
    v_147 = car(v_146);
    v_146 = basic_elt(env, 5); // boolargs
    v_146 = Lflagp(nil, v_147, v_146);
    env = stack[-6];
    v_146 = ncons(v_146);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 13); // formboollis
    v_146 = (*qfn4up(fn))(fn, stack[0], stack[-3], stack[-2], v_146);
    }
    {
        LispObject v_157 = stack[-1];
        return cons(v_157, v_146);
    }
v_84:
    v_146 = stack[-4];
    if (!car_legal(v_146)) v_147 = carerror(v_146); else
    v_147 = car(v_146);
    v_146 = basic_elt(env, 2); // boolvalue!*
    if (v_147 == v_146) goto v_106;
    else goto v_107;
v_106:
    v_146 = basic_elt(env, 6); // "Too many formbools"
    {
        LispObject fn = basic_elt(env, 14); // rederr
        return (*qfn1(fn))(fn, v_146);
    }
v_107:
    v_146 = stack[-4];
    if (!car_legal(v_146)) v_147 = carerror(v_146); else
    v_147 = car(v_146);
    v_146 = basic_elt(env, 7); // where
    if (v_147 == v_146) goto v_113;
    else goto v_114;
v_113:
    stack[-5] = basic_elt(env, 2); // boolvalue!*
    stack[-1] = basic_elt(env, 7); // where
    stack[0] = basic_elt(env, 8); // bool!-eval
    v_146 = stack[-4];
    if (!car_legal(v_146)) v_146 = cdrerror(v_146); else
    v_146 = cdr(v_146);
    if (!car_legal(v_146)) v_148 = carerror(v_146); else
    v_148 = car(v_146);
    v_147 = stack[-3];
    v_146 = stack[-2];
    {   LispObject fn = basic_elt(env, 0); // formbool
    v_146 = (*qfn3(fn))(fn, v_148, v_147, v_146);
    }
    env = stack[-6];
    v_146 = list2(stack[0], v_146);
    env = stack[-6];
    v_147 = Lmkquote(nil, v_146);
    env = stack[-6];
    v_146 = stack[-4];
    if (!car_legal(v_146)) v_146 = cdrerror(v_146); else
    v_146 = cdr(v_146);
    if (!car_legal(v_146)) v_146 = cdrerror(v_146); else
    v_146 = cdr(v_146);
    if (!car_legal(v_146)) v_146 = carerror(v_146); else
    v_146 = car(v_146);
    v_148 = list3(stack[-1], v_147, v_146);
    env = stack[-6];
    v_147 = stack[-3];
    v_146 = stack[-2];
    {   LispObject fn = basic_elt(env, 10); // formc!*
    v_146 = (*qfn3(fn))(fn, v_148, v_147, v_146);
    }
    {
        LispObject v_158 = stack[-5];
        return list2(v_158, v_146);
    }
v_114:
    stack[0] = basic_elt(env, 2); // boolvalue!*
    v_148 = stack[-4];
    v_147 = stack[-3];
    v_146 = stack[-2];
    {   LispObject fn = basic_elt(env, 10); // formc!*
    v_146 = (*qfn3(fn))(fn, v_148, v_147, v_146);
    }
    {
        LispObject v_159 = stack[0];
        return list2(v_159, v_146);
    }
    v_146 = nil;
v_7:
    return onevalue(v_146);
}



// Code for talp_sumd

static LispObject CC_talp_sumd(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    v_42 = v_2;
// end of prologue
    v_41 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[0] = v_41;
    v_41 = v_42;
    if (!consp(v_41)) goto v_11;
    else goto v_12;
v_11:
    v_41 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_7;
v_12:
    v_41 = v_42;
    {   LispObject fn = basic_elt(env, 1); // rl_atl
    v_41 = (*qfn1(fn))(fn, v_41);
    }
    env = stack[-3];
    stack[-2] = v_41;
v_19:
    v_41 = stack[-2];
    if (v_41 == nil) goto v_22;
    else goto v_23;
v_22:
    goto v_18;
v_23:
    stack[-1] = stack[0];
    v_41 = stack[-2];
    if (!car_legal(v_41)) v_41 = carerror(v_41); else
    v_41 = car(v_41);
    {   LispObject fn = basic_elt(env, 2); // talp_arg2l
    v_41 = (*qfn1(fn))(fn, v_41);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 3); // talp_td
    stack[0] = (*qfn1(fn))(fn, v_41);
    }
    env = stack[-3];
    v_41 = stack[-2];
    if (!car_legal(v_41)) v_41 = carerror(v_41); else
    v_41 = car(v_41);
    {   LispObject fn = basic_elt(env, 4); // talp_arg2r
    v_41 = (*qfn1(fn))(fn, v_41);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 3); // talp_td
    v_41 = (*qfn1(fn))(fn, v_41);
    }
    env = stack[-3];
    v_41 = plus2(stack[0], v_41);
    env = stack[-3];
    v_41 = plus2(stack[-1], v_41);
    env = stack[-3];
    stack[0] = v_41;
    v_41 = stack[-2];
    if (!car_legal(v_41)) v_41 = cdrerror(v_41); else
    v_41 = cdr(v_41);
    stack[-2] = v_41;
    goto v_19;
v_18:
    v_41 = stack[0];
v_7:
    return onevalue(v_41);
}



// Code for sets

static LispObject CC_sets(LispObject env,
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
    {   LispObject fn = basic_elt(env, 5); // printout
    v_26 = (*qfn1(fn))(fn, v_26);
    }
    env = stack[-2];
    v_26 = basic_elt(env, 2); // "<"
    v_26 = Lprinc(nil, v_26);
    env = stack[-2];
    v_26 = stack[0];
    v_26 = Lprinc(nil, v_26);
    env = stack[-2];
    v_26 = stack[-1];
    if (!car_legal(v_26)) v_27 = carerror(v_26); else
    v_27 = car(v_26);
    v_26 = basic_elt(env, 3); // "/"
    {   LispObject fn = basic_elt(env, 6); // attributesml
    v_26 = (*qfn2(fn))(fn, v_27, v_26);
    }
    env = stack[-2];
    v_26 = lisp_true;
    {   LispObject fn = basic_elt(env, 7); // indent!*
    v_26 = (*qfn1(fn))(fn, v_26);
    }
    env = stack[-2];
    v_26 = stack[-1];
    if (!car_legal(v_26)) v_26 = cdrerror(v_26); else
    v_26 = cdr(v_26);
    {   LispObject fn = basic_elt(env, 8); // multi_elem
    v_26 = (*qfn1(fn))(fn, v_26);
    }
    env = stack[-2];
    v_26 = nil;
    {   LispObject fn = basic_elt(env, 7); // indent!*
    v_26 = (*qfn1(fn))(fn, v_26);
    }
    env = stack[-2];
    v_26 = basic_elt(env, 4); // "</apply>"
    {   LispObject fn = basic_elt(env, 5); // printout
    v_26 = (*qfn1(fn))(fn, v_26);
    }
    v_26 = nil;
    return onevalue(v_26);
}



// Code for alg_plus

static LispObject CC_alg_plus(LispObject env,
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
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_12 = v_3;
    v_13 = v_2;
// end of prologue
    v_14 = basic_elt(env, 1); // plus
    v_12 = list3(v_14, v_13, v_12);
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // aeval
        return (*qfn1(fn))(fn, v_12);
    }
    return onevalue(v_12);
}



// Code for matrixp

static LispObject CC_matrixp(LispObject env,
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
    v_36 = Lconsp(nil, v_36);
    env = stack[0];
    if (v_36 == nil) goto v_8;
    else goto v_9;
v_8:
    v_36 = v_37;
    {   LispObject fn = basic_elt(env, 3); // reval
    v_36 = (*qfn1(fn))(fn, v_36);
    }
    env = stack[0];
    v_37 = v_36;
    goto v_7;
v_9:
v_7:
    v_38 = v_37;
    v_36 = basic_elt(env, 1); // mat
    if (!consp(v_38)) goto v_20;
    v_38 = car(v_38);
    if (v_38 == v_36) goto v_21;
v_20:
    v_36 = basic_elt(env, 2); // sparsemat
    v_36 = Leqcar(nil, v_37, v_36);
    v_36 = (v_36 == nil ? lisp_true : nil);
    goto v_19;
v_21:
    v_36 = nil;
    goto v_19;
    v_36 = nil;
v_19:
    if (v_36 == nil) goto v_17;
    v_36 = nil;
    goto v_5;
v_17:
    v_36 = lisp_true;
    goto v_5;
    v_36 = nil;
v_5:
    return onevalue(v_36);
}



// Code for amatch

static LispObject CC_amatch(LispObject env,
                         LispObject v_4, LispObject v_5,
                         LispObject v_6, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_92, v_93, v_94;
    LispObject v_7;
    if (_a4up_ == nil)
        aerror1("not enough arguments provided", basic_elt(env, 0));
    v_7 = car(_a4up_); _a4up_ = cdr(_a4up_);
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
        push(v_4,v_5,v_6,v_7);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_7,v_6,v_5,v_4);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil, nil, nil, nil, nil);
    push(nil, nil);
    stack_popper stack_popper_var(8);
// copy arguments values to proper place
    stack[-4] = v_7;
    stack[-5] = v_6;
    v_93 = v_5;
    v_92 = v_4;
// end of prologue
// Binding r
// FLUIDBIND: reloadenv=7 litvec-offset=1 saveloc=6
{   bind_fluid_stack bind_fluid_var(-7, 1, -6);
// Binding p
// FLUIDBIND: reloadenv=7 litvec-offset=2 saveloc=3
{   bind_fluid_stack bind_fluid_var(-7, 2, -3);
    setvalue(basic_elt(env, 1), v_92); // r
    v_92 = v_93;
    setvalue(basic_elt(env, 2), v_92); // p
v_20:
    v_92 = qvalue(basic_elt(env, 1)); // r
    if (!consp(v_92)) goto v_23;
    else goto v_24;
v_23:
    stack[-2] = nil;
    v_92 = qvalue(basic_elt(env, 1)); // r
    v_92 = ncons(v_92);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 5); // mval
    stack[-1] = (*qfn1(fn))(fn, v_92);
    }
    env = stack[-7];
    v_92 = qvalue(basic_elt(env, 2)); // p
    stack[0] = ncons(v_92);
    env = stack[-7];
    v_93 = stack[-5];
    v_92 = stack[-4];
    v_92 = list2(v_93, v_92);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 6); // unify
    v_92 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_92);
    }
    goto v_19;
v_24:
    v_92 = qvalue(basic_elt(env, 2)); // p
    if (!consp(v_92)) goto v_40;
    else goto v_41;
v_40:
    v_92 = lisp_true;
    goto v_39;
v_41:
    v_92 = qvalue(basic_elt(env, 1)); // r
    if (!car_legal(v_92)) v_93 = carerror(v_92); else
    v_93 = car(v_92);
    v_92 = qvalue(basic_elt(env, 2)); // p
    if (!car_legal(v_92)) v_92 = carerror(v_92); else
    v_92 = car(v_92);
    v_92 = Lneq_2(nil, v_93, v_92);
    env = stack[-7];
    goto v_39;
    v_92 = nil;
v_39:
    if (v_92 == nil) goto v_36;
    else goto v_37;
v_36:
    v_92 = qvalue(basic_elt(env, 1)); // r
    if (!car_legal(v_92)) stack[-2] = carerror(v_92); else
    stack[-2] = car(v_92);
    v_92 = qvalue(basic_elt(env, 1)); // r
    if (!car_legal(v_92)) v_92 = cdrerror(v_92); else
    v_92 = cdr(v_92);
    {   LispObject fn = basic_elt(env, 5); // mval
    stack[-1] = (*qfn1(fn))(fn, v_92);
    }
    env = stack[-7];
    v_92 = qvalue(basic_elt(env, 2)); // p
    if (!car_legal(v_92)) stack[0] = cdrerror(v_92); else
    stack[0] = cdr(v_92);
    v_93 = stack[-5];
    v_92 = stack[-4];
    v_92 = list2(v_93, v_92);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 6); // unify
    v_92 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_92);
    }
    goto v_19;
v_37:
    v_92 = qvalue(basic_elt(env, 1)); // r
    {   LispObject fn = basic_elt(env, 7); // suchp
    v_92 = (*qfn1(fn))(fn, v_92);
    }
    env = stack[-7];
    if (v_92 == nil) goto v_63;
    v_92 = qvalue(basic_elt(env, 1)); // r
    if (!car_legal(v_92)) v_92 = cdrerror(v_92); else
    v_92 = cdr(v_92);
    if (!car_legal(v_92)) v_92 = carerror(v_92); else
    v_92 = car(v_92);
    stack[0] = v_92;
    v_92 = qvalue(basic_elt(env, 1)); // r
    if (!car_legal(v_92)) v_92 = cdrerror(v_92); else
    v_92 = cdr(v_92);
    if (!car_legal(v_92)) v_92 = cdrerror(v_92); else
    v_92 = cdr(v_92);
    if (!car_legal(v_92)) v_93 = carerror(v_92); else
    v_93 = car(v_92);
    v_92 = stack[-5];
    v_92 = cons(v_93, v_92);
    env = stack[-7];
    stack[-5] = v_92;
    v_92 = stack[0];
    setvalue(basic_elt(env, 1), v_92); // r
    goto v_20;
v_63:
    v_92 = qvalue(basic_elt(env, 3)); // !*semantic
    if (v_92 == nil) goto v_77;
    v_94 = basic_elt(env, 4); // equal
    v_93 = qvalue(basic_elt(env, 1)); // r
    v_92 = qvalue(basic_elt(env, 2)); // p
    v_93 = list3(v_94, v_93, v_92);
    env = stack[-7];
    v_92 = stack[-5];
    v_93 = cons(v_93, v_92);
    env = stack[-7];
    v_92 = stack[-4];
    {   LispObject fn = basic_elt(env, 8); // resume
    v_92 = (*qfn2(fn))(fn, v_93, v_92);
    }
    goto v_19;
v_77:
    v_92 = nil;
    goto v_19;
    v_92 = nil;
v_19:
    ;}  // end of a binding scope
    ;}  // end of a binding scope
    return onevalue(v_92);
}



// Code for groebnormalform

static LispObject CC_groebnormalform(LispObject env,
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
    stack[-1] = v_13;
    stack[0] = v_12;
    v_12 = nil;
    v_12 = ncons(v_12);
    env = stack[-3];
    {
        LispObject v_18 = stack[-2];
        LispObject v_19 = stack[-1];
        LispObject v_20 = stack[0];
        LispObject fn = basic_elt(env, 1); // groebnormalform0
        return (*qfn4up(fn))(fn, v_18, v_19, v_20, v_12);
    }
}



// Code for evload

static LispObject CC_evload(LispObject env,
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
v_8:
    v_20 = stack[0];
    if (v_20 == nil) goto v_11;
    else goto v_12;
v_11:
    goto v_7;
v_12:
    v_20 = stack[0];
    if (!car_legal(v_20)) v_20 = carerror(v_20); else
    v_20 = car(v_20);
    v_20 = Lload_module(nil, v_20);
    env = stack[-1];
    v_20 = stack[0];
    if (!car_legal(v_20)) v_20 = cdrerror(v_20); else
    v_20 = cdr(v_20);
    stack[0] = v_20;
    goto v_8;
v_7:
    v_20 = nil;
    return onevalue(v_20);
}



// Code for toolongexpp

static LispObject CC_toolongexpp(LispObject env,
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
    {   LispObject fn = basic_elt(env, 2); // numprintlen
    v_8 = (*qfn1(fn))(fn, v_8);
    }
    env = stack[0];
    v_9 = qvalue(basic_elt(env, 1)); // maxexpprintlen!*
        return Lgreaterp_2(nil, v_8, v_9);
}



// Code for find_buble

static LispObject CC_find_buble(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // is_buble
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



// Code for log_assignment

static LispObject CC_log_assignment(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_84, v_85, v_86;
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
    v_85 = v_2;
// end of prologue
v_7:
    v_84 = stack[0];
    if (!consp(v_84)) goto v_14;
    else goto v_15;
v_14:
    v_84 = lisp_true;
    goto v_13;
v_15:
    v_86 = stack[0];
    v_84 = basic_elt(env, 1); // quote
    if (!consp(v_86)) goto v_23;
    v_86 = car(v_86);
    if (v_86 == v_84) goto v_22;
    else goto v_23;
v_22:
    v_84 = lisp_true;
    goto v_21;
v_23:
    v_86 = stack[0];
    v_84 = basic_elt(env, 2); // function
    v_84 = Leqcar(nil, v_86, v_84);
    env = stack[-1];
    goto v_21;
    v_84 = nil;
v_21:
    goto v_13;
    v_84 = nil;
v_13:
    if (v_84 == nil) goto v_11;
    v_84 = nil;
    goto v_6;
v_11:
    v_86 = stack[0];
    v_84 = basic_elt(env, 3); // setq
    if (!consp(v_86)) goto v_35;
    v_86 = car(v_86);
    if (v_86 == v_84) goto v_34;
    else goto v_35;
v_34:
    v_84 = stack[0];
    if (!car_legal(v_84)) v_84 = cdrerror(v_84); else
    v_84 = cdr(v_84);
    if (!car_legal(v_84)) v_86 = carerror(v_84); else
    v_86 = car(v_84);
    v_84 = v_85;
    v_84 = Lmember(nil, v_86, v_84);
    if (v_84 == nil) goto v_42;
    v_84 = Lposn(nil);
    env = stack[-1];
    v_84 = static_cast<LispObject>(zerop(v_84));
    v_84 = v_84 ? lisp_true : nil;
    env = stack[-1];
    if (v_84 == nil) goto v_50;
    else goto v_51;
v_50:
    v_84 = Lterpri(nil);
    env = stack[-1];
    goto v_49;
v_51:
v_49:
    v_84 = basic_elt(env, 4); // "+++ Assignment to parameter of inline: "
    v_84 = Lprinc(nil, v_84);
    env = stack[-1];
    v_84 = stack[0];
    v_84 = Lprint(nil, v_84);
    env = stack[-1];
    v_84 = basic_elt(env, 5); // "+++ Macro was: "
    v_84 = Lprinc(nil, v_84);
    env = stack[-1];
    v_84 = qvalue(basic_elt(env, 6)); // inlineinfo
    v_84 = Lprint(nil, v_84);
    v_84 = lisp_true;
    goto v_6;
v_42:
    v_84 = stack[0];
    if (!car_legal(v_84)) v_84 = cdrerror(v_84); else
    v_84 = cdr(v_84);
    if (!car_legal(v_84)) v_84 = cdrerror(v_84); else
    v_84 = cdr(v_84);
    if (!car_legal(v_84)) v_84 = carerror(v_84); else
    v_84 = car(v_84);
    stack[0] = v_84;
    goto v_7;
    goto v_9;
v_35:
    v_86 = stack[0];
    v_84 = basic_elt(env, 7); // cond
    if (!consp(v_86)) goto v_71;
    v_86 = car(v_86);
    if (v_86 == v_84) goto v_70;
    else goto v_71;
v_70:
    v_84 = stack[0];
    if (!car_legal(v_84)) v_84 = cdrerror(v_84); else
    v_84 = cdr(v_84);
    {
        LispObject fn = basic_elt(env, 8); // log_assignment_list_list
        return (*qfn2(fn))(fn, v_85, v_84);
    }
v_71:
    v_84 = stack[0];
    {
        LispObject fn = basic_elt(env, 9); // log_assignment_list
        return (*qfn2(fn))(fn, v_85, v_84);
    }
v_9:
    v_84 = nil;
v_6:
    return onevalue(v_84);
}



// Code for arglength

static LispObject CC_arglength(LispObject env,
                         LispObject v_2)
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
    v_31 = v_2;
// end of prologue
// Binding !*intstr
// FLUIDBIND: reloadenv=1 litvec-offset=1 saveloc=0
{   bind_fluid_stack bind_fluid_var(-1, 1, 0);
    setvalue(basic_elt(env, 1), nil); // !*intstr
    v_30 = v_31;
    if (v_30 == nil) goto v_11;
    else goto v_12;
v_11:
    v_30 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_8;
v_12:
    v_30 = lisp_true;
    setvalue(basic_elt(env, 1), v_30); // !*intstr
    v_30 = v_31;
    {   LispObject fn = basic_elt(env, 2); // reval
    v_30 = (*qfn1(fn))(fn, v_30);
    }
    env = stack[-1];
    v_31 = v_30;
    v_30 = v_31;
    if (!consp(v_30)) goto v_20;
    else goto v_21;
v_20:
    v_30 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    goto v_19;
v_21:
    v_30 = v_31;
    if (!car_legal(v_30)) v_30 = cdrerror(v_30); else
    v_30 = cdr(v_30);
    v_30 = Llength(nil, v_30);
    goto v_19;
    v_30 = nil;
v_19:
v_8:
    ;}  // end of a binding scope
    return onevalue(v_30);
}



// Code for fs!:onep!:

static LispObject CC_fsTonepT(LispObject env,
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
    if (!car_legal(v_7)) v_7 = cdrerror(v_7); else
    v_7 = cdr(v_7);
    {
        LispObject fn = basic_elt(env, 1); // fs!:onep
        return (*qfn1(fn))(fn, v_7);
    }
}



// Code for red!=hide

static LispObject CC_redMhide(LispObject env,
                         LispObject v_2)
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
    v_53 = v_2;
// end of prologue
    stack[-5] = v_53;
    v_53 = stack[-5];
    if (v_53 == nil) goto v_13;
    else goto v_14;
v_13:
    v_53 = nil;
    goto v_8;
v_14:
    v_53 = stack[-5];
    if (!car_legal(v_53)) v_53 = carerror(v_53); else
    v_53 = car(v_53);
    stack[-1] = v_53;
    stack[0] = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    v_53 = stack[-1];
    if (!car_legal(v_53)) v_53 = carerror(v_53); else
    v_53 = car(v_53);
    {   LispObject fn = basic_elt(env, 1); // mo_neg
    v_53 = (*qfn1(fn))(fn, v_53);
    }
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 2); // mo_times_ei
    v_54 = (*qfn2(fn))(fn, stack[0], v_53);
    }
    env = stack[-6];
    v_53 = stack[-1];
    if (!car_legal(v_53)) v_53 = cdrerror(v_53); else
    v_53 = cdr(v_53);
    v_53 = cons(v_54, v_53);
    env = stack[-6];
    v_53 = ncons(v_53);
    env = stack[-6];
    stack[-3] = v_53;
    stack[-4] = v_53;
v_9:
    v_53 = stack[-5];
    if (!car_legal(v_53)) v_53 = cdrerror(v_53); else
    v_53 = cdr(v_53);
    stack[-5] = v_53;
    v_53 = stack[-5];
    if (v_53 == nil) goto v_33;
    else goto v_34;
v_33:
    v_53 = stack[-4];
    goto v_8;
v_34:
    stack[-2] = stack[-3];
    v_53 = stack[-5];
    if (!car_legal(v_53)) v_53 = carerror(v_53); else
    v_53 = car(v_53);
    stack[-1] = v_53;
    stack[0] = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    v_53 = stack[-1];
    if (!car_legal(v_53)) v_53 = carerror(v_53); else
    v_53 = car(v_53);
    {   LispObject fn = basic_elt(env, 1); // mo_neg
    v_53 = (*qfn1(fn))(fn, v_53);
    }
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 2); // mo_times_ei
    v_54 = (*qfn2(fn))(fn, stack[0], v_53);
    }
    env = stack[-6];
    v_53 = stack[-1];
    if (!car_legal(v_53)) v_53 = cdrerror(v_53); else
    v_53 = cdr(v_53);
    v_53 = cons(v_54, v_53);
    env = stack[-6];
    v_53 = ncons(v_53);
    env = stack[-6];
    if (!car_legal(stack[-2])) rplacd_fails(stack[-2]);
    setcdr(stack[-2], v_53);
    v_53 = stack[-3];
    if (!car_legal(v_53)) v_53 = cdrerror(v_53); else
    v_53 = cdr(v_53);
    stack[-3] = v_53;
    goto v_9;
v_8:
    return onevalue(v_53);
}



// Code for dummyp

static LispObject CC_dummyp(LispObject env,
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
    real_push(nil, nil, nil, nil, nil);
    stack_popper stack_popper_var(6);
// copy arguments values to proper place
    stack[-3] = v_2;
// end of prologue
    v_91 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-2] = v_91;
    v_91 = stack[-3];
    {   LispObject fn = basic_elt(env, 4); // listp
    v_91 = (*qfn1(fn))(fn, v_91);
    }
    env = stack[-5];
    if (v_91 == nil) goto v_14;
    v_92 = stack[-3];
    v_91 = basic_elt(env, 1); // minus
    if (!consp(v_92)) goto v_20;
    v_92 = car(v_92);
    if (v_92 == v_91) goto v_19;
    else goto v_20;
v_19:
    v_91 = stack[-3];
    if (!car_legal(v_91)) v_91 = cdrerror(v_91); else
    v_91 = cdr(v_91);
    if (!car_legal(v_91)) v_91 = carerror(v_91); else
    v_91 = car(v_91);
    stack[-3] = v_91;
    goto v_18;
v_20:
    v_91 = nil;
    goto v_8;
v_18:
    goto v_12;
v_14:
v_12:
    v_91 = stack[-3];
    if (is_number(v_91)) goto v_32;
    v_91 = stack[-3];
    {   LispObject fn = basic_elt(env, 5); // !*id2num
    v_91 = (*qfn1(fn))(fn, v_91);
    }
    env = stack[-5];
    if (v_91 == nil) goto v_36;
    else goto v_32;
v_36:
    goto v_33;
v_32:
    v_91 = nil;
    goto v_8;
v_33:
    v_91 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-4] = v_91;
v_43:
    stack[0] = stack[-4];
    v_91 = qvalue(basic_elt(env, 2)); // g_dvnames
    {   LispObject fn = basic_elt(env, 6); // upbve
    v_91 = (*qfn1(fn))(fn, v_91);
    }
    env = stack[-5];
    v_91 = static_cast<LispObject>(lesseq2(stack[0], v_91));
    v_91 = v_91 ? lisp_true : nil;
    env = stack[-5];
    if (v_91 == nil) goto v_46;
    else goto v_47;
v_46:
    goto v_42;
v_47:
    stack[-1] = stack[-3];
    stack[0] = qvalue(basic_elt(env, 2)); // g_dvnames
    v_91 = stack[-4];
    v_91 = sub1(v_91);
    env = stack[-5];
    v_91 = Lgetv(nil, stack[0], v_91);
    env = stack[-5];
    if (equal(stack[-1], v_91)) goto v_55;
    else goto v_56;
v_55:
    v_91 = stack[-4];
    stack[-2] = v_91;
    v_91 = qvalue(basic_elt(env, 2)); // g_dvnames
    {   LispObject fn = basic_elt(env, 6); // upbve
    v_91 = (*qfn1(fn))(fn, v_91);
    }
    env = stack[-5];
    v_91 = add1(v_91);
    env = stack[-5];
    stack[-4] = v_91;
    goto v_54;
v_56:
    v_91 = stack[-4];
    v_91 = add1(v_91);
    env = stack[-5];
    stack[-4] = v_91;
    goto v_54;
v_54:
    goto v_43;
v_42:
    v_92 = stack[-2];
    v_91 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_92 == v_91) goto v_73;
    else goto v_74;
v_73:
    v_91 = stack[-3];
    {   LispObject fn = basic_elt(env, 7); // ad_splitname
    v_91 = (*qfn1(fn))(fn, v_91);
    }
    env = stack[-5];
    v_92 = v_91;
    v_91 = v_92;
    if (!car_legal(v_91)) v_91 = carerror(v_91); else
    v_91 = car(v_91);
    v_93 = qvalue(basic_elt(env, 3)); // g_dvbase
    if (v_91 == v_93) goto v_81;
    else goto v_82;
v_81:
    v_91 = v_92;
    if (!car_legal(v_91)) v_91 = cdrerror(v_91); else
    v_91 = cdr(v_91);
    goto v_8;
v_82:
    goto v_72;
v_74:
    v_91 = stack[-2];
    goto v_8;
v_72:
    v_91 = nil;
v_8:
    return onevalue(v_91);
}



// Code for ratdif

static LispObject CC_ratdif(LispObject env,
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
    stack[0] = v_11;
    {   LispObject fn = basic_elt(env, 1); // ratminus
    v_11 = (*qfn1(fn))(fn, v_10);
    }
    env = stack[-1];
    v_10 = nil;
    {
        LispObject v_13 = stack[0];
        LispObject fn = basic_elt(env, 2); // ratplusm
        return (*qfn3(fn))(fn, v_13, v_11, v_10);
    }
}



// Code for letexprn

static LispObject CC_letexprn(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_343, v_344, v_345;
    LispObject v_5, v_6, v_7;
    if (_a4up_ == nil)
        aerror1("not enough arguments provided", basic_elt(env, 0));
    v_5 = car(_a4up_); _a4up_ = cdr(_a4up_);
    if (_a4up_ == nil)
        aerror1("not enough arguments provided", basic_elt(env, 0));
    v_6 = car(_a4up_); _a4up_ = cdr(_a4up_);
    if (_a4up_ == nil)
        aerror1("not enough arguments provided", basic_elt(env, 0));
    v_7 = car(_a4up_); _a4up_ = cdr(_a4up_);
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
        push(v_2,v_3,v_4,v_5,v_6,v_7);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_7,v_6,v_5,v_4,v_3,v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil, nil, nil, nil, nil);
    push(nil, nil, nil);
    stack_popper stack_popper_var(9);
// copy arguments values to proper place
    stack[-1] = v_7;
    stack[-2] = v_6;
    stack[-3] = v_5;
    stack[-4] = v_4;
    stack[-5] = v_3;
    stack[-6] = v_2;
// end of prologue
    v_343 = stack[-3];
    if (!car_legal(v_343)) v_344 = cdrerror(v_343); else
    v_344 = cdr(v_343);
    v_343 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_344 == v_343) goto v_16;
    v_343 = stack[-3];
    if (!car_legal(v_343)) v_343 = carerror(v_343); else
    v_343 = car(v_343);
    {   LispObject fn = basic_elt(env, 14); // let!-prepf
    stack[-1] = (*qfn1(fn))(fn, v_343);
    }
    env = stack[-8];
    stack[0] = basic_elt(env, 1); // times
    v_343 = stack[-3];
    if (!car_legal(v_343)) v_343 = cdrerror(v_343); else
    v_343 = cdr(v_343);
    {   LispObject fn = basic_elt(env, 14); // let!-prepf
    v_344 = (*qfn1(fn))(fn, v_343);
    }
    env = stack[-8];
    v_343 = stack[-5];
    stack[0] = list3(stack[0], v_344, v_343);
    env = stack[-8];
    stack[-3] = stack[-4];
    v_343 = stack[-2];
    v_343 = ncons(v_343);
    env = stack[-8];
    {
        LispObject v_354 = stack[-1];
        LispObject v_355 = stack[0];
        LispObject v_356 = stack[-3];
        LispObject fn = basic_elt(env, 15); // let2
        return (*qfn4up(fn))(fn, v_354, v_355, v_356, v_343);
    }
v_16:
    v_343 = stack[-3];
    if (!car_legal(v_343)) v_343 = carerror(v_343); else
    v_343 = car(v_343);
    stack[-3] = v_343;
    if (!car_legal(v_343)) v_343 = cdrerror(v_343); else
    v_343 = cdr(v_343);
    if (v_343 == nil) goto v_34;
    v_343 = stack[-3];
    if (!car_legal(v_343)) v_343 = carerror(v_343); else
    v_343 = car(v_343);
    v_343 = ncons(v_343);
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 14); // let!-prepf
    stack[-1] = (*qfn1(fn))(fn, v_343);
    }
    env = stack[-8];
    stack[0] = basic_elt(env, 2); // difference
    v_343 = stack[-3];
    if (!car_legal(v_343)) v_343 = cdrerror(v_343); else
    v_343 = cdr(v_343);
    {   LispObject fn = basic_elt(env, 14); // let!-prepf
    v_343 = (*qfn1(fn))(fn, v_343);
    }
    env = stack[-8];
    stack[0] = list3(stack[0], stack[-5], v_343);
    env = stack[-8];
    stack[-3] = stack[-4];
    v_343 = stack[-2];
    v_343 = ncons(v_343);
    env = stack[-8];
    {
        LispObject v_357 = stack[-1];
        LispObject v_358 = stack[0];
        LispObject v_359 = stack[-3];
        LispObject fn = basic_elt(env, 15); // let2
        return (*qfn4up(fn))(fn, v_357, v_358, v_359, v_343);
    }
v_34:
    v_343 = stack[-3];
    {   LispObject fn = basic_elt(env, 16); // kernlp
    v_343 = (*qfn1(fn))(fn, v_343);
    }
    env = stack[-8];
    stack[0] = v_343;
    if (v_343 == nil) goto v_52;
    else goto v_53;
v_52:
    v_343 = stack[-3];
    {   LispObject fn = basic_elt(env, 17); // term!-split
    v_343 = (*qfn1(fn))(fn, v_343);
    }
    env = stack[-8];
    stack[0] = v_343;
    v_343 = stack[0];
    if (!car_legal(v_343)) v_343 = carerror(v_343); else
    v_343 = car(v_343);
    {   LispObject fn = basic_elt(env, 14); // let!-prepf
    stack[-3] = (*qfn1(fn))(fn, v_343);
    }
    env = stack[-8];
    stack[-1] = basic_elt(env, 2); // difference
    v_343 = stack[0];
    if (!car_legal(v_343)) v_343 = cdrerror(v_343); else
    v_343 = cdr(v_343);
    {   LispObject fn = basic_elt(env, 14); // let!-prepf
    v_343 = (*qfn1(fn))(fn, v_343);
    }
    env = stack[-8];
    stack[0] = list3(stack[-1], stack[-5], v_343);
    env = stack[-8];
    stack[-1] = stack[-4];
    v_343 = stack[-2];
    v_343 = ncons(v_343);
    env = stack[-8];
    {
        LispObject v_360 = stack[-3];
        LispObject v_361 = stack[0];
        LispObject v_362 = stack[-1];
        LispObject fn = basic_elt(env, 15); // let2
        return (*qfn4up(fn))(fn, v_360, v_361, v_362, v_343);
    }
v_53:
    v_344 = stack[0];
    v_343 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_344 == v_343) goto v_72;
    v_344 = stack[-3];
    v_343 = stack[0];
    {   LispObject fn = basic_elt(env, 18); // quotf!*
    v_343 = (*qfn2(fn))(fn, v_344, v_343);
    }
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 14); // let!-prepf
    stack[-3] = (*qfn1(fn))(fn, v_343);
    }
    env = stack[-8];
    stack[-1] = basic_elt(env, 3); // quotient
    v_343 = stack[0];
    {   LispObject fn = basic_elt(env, 14); // let!-prepf
    v_343 = (*qfn1(fn))(fn, v_343);
    }
    env = stack[-8];
    stack[0] = list3(stack[-1], stack[-5], v_343);
    env = stack[-8];
    stack[-1] = stack[-4];
    v_343 = stack[-2];
    v_343 = ncons(v_343);
    env = stack[-8];
    {
        LispObject v_363 = stack[-3];
        LispObject v_364 = stack[0];
        LispObject v_365 = stack[-1];
        LispObject fn = basic_elt(env, 15); // let2
        return (*qfn4up(fn))(fn, v_363, v_364, v_365, v_343);
    }
v_72:
    v_343 = stack[-3];
    {   LispObject fn = basic_elt(env, 19); // klistt
    v_343 = (*qfn1(fn))(fn, v_343);
    }
    env = stack[-8];
    stack[-3] = v_343;
    stack[-7] = stack[-4];
    v_343 = qvalue(basic_elt(env, 4)); // mcond!*
    if (v_343 == nil) goto v_95;
    v_343 = qvalue(basic_elt(env, 4)); // mcond!*
    stack[0] = v_343;
    goto v_93;
v_95:
    v_343 = lisp_true;
    stack[0] = v_343;
    goto v_93;
    stack[0] = nil;
v_93:
    v_344 = stack[-5];
    v_343 = nil;
    v_343 = list2(v_344, v_343);
    env = stack[-8];
    v_343 = acons(stack[-7], stack[0], v_343);
    env = stack[-8];
    stack[0] = v_343;
    v_343 = stack[-3];
    if (!car_legal(v_343)) v_343 = cdrerror(v_343); else
    v_343 = cdr(v_343);
    if (v_343 == nil) goto v_107;
    {   LispObject fn = basic_elt(env, 20); // rmsubs
    v_343 = (*qfn0(fn))(fn);
    }
    env = stack[-8];
    v_344 = stack[-3];
    v_343 = stack[0];
    v_345 = cons(v_344, v_343);
    env = stack[-8];
    v_344 = qvalue(basic_elt(env, 5)); // !*match
    v_343 = stack[-2];
    {   LispObject fn = basic_elt(env, 21); // xadd!*
    v_343 = (*qfn3(fn))(fn, v_345, v_344, v_343);
    }
    env = stack[-8];
    setvalue(basic_elt(env, 5), v_343); // !*match
    goto v_12;
v_107:
    v_343 = stack[-4];
    if (v_343 == nil) goto v_121;
    else goto v_122;
v_121:
    v_343 = stack[-3];
    if (!car_legal(v_343)) v_343 = carerror(v_343); else
    v_343 = car(v_343);
    if (!car_legal(v_343)) v_344 = cdrerror(v_343); else
    v_344 = cdr(v_343);
    v_343 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_343 = (v_344 == v_343 ? lisp_true : nil);
    goto v_120;
v_122:
    v_343 = nil;
    goto v_120;
    v_343 = nil;
v_120:
    if (v_343 == nil) goto v_118;
    v_343 = stack[-3];
    if (!car_legal(v_343)) v_343 = carerror(v_343); else
    v_343 = car(v_343);
    if (!car_legal(v_343)) v_343 = carerror(v_343); else
    v_343 = car(v_343);
    stack[-3] = v_343;
    v_343 = stack[-1];
    if (v_343 == nil) goto v_141;
    else goto v_142;
v_141:
    v_343 = qvalue(basic_elt(env, 4)); // mcond!*
    if (v_343 == nil) goto v_146;
    else goto v_147;
v_146:
    v_343 = lisp_true;
    goto v_145;
v_147:
    v_344 = qvalue(basic_elt(env, 4)); // mcond!*
    v_343 = lisp_true;
    if (v_344 == v_343) goto v_154;
    else goto v_155;
v_154:
    v_343 = lisp_true;
    goto v_153;
v_155:
    v_344 = stack[-3];
    v_343 = qvalue(basic_elt(env, 4)); // mcond!*
    {   LispObject fn = basic_elt(env, 22); // smember
    v_343 = (*qfn2(fn))(fn, v_344, v_343);
    }
    env = stack[-8];
    v_343 = (v_343 == nil ? lisp_true : nil);
    goto v_153;
    v_343 = nil;
v_153:
    goto v_145;
    v_343 = nil;
v_145:
    goto v_140;
v_142:
    v_343 = nil;
    goto v_140;
    v_343 = nil;
v_140:
    if (v_343 == nil) goto v_138;
    v_343 = stack[-3];
    if (!consp(v_343)) goto v_170;
    else goto v_171;
v_170:
    v_344 = stack[-3];
    v_343 = basic_elt(env, 6); // used!*
    v_343 = Lflagp(nil, v_344, v_343);
    env = stack[-8];
    if (v_343 == nil) goto v_176;
    {   LispObject fn = basic_elt(env, 20); // rmsubs
    v_343 = (*qfn0(fn))(fn);
    }
    env = stack[-8];
    goto v_174;
v_176:
    goto v_174;
v_174:
    goto v_169;
v_171:
    stack[0] = basic_elt(env, 6); // used!*
    v_343 = stack[-3];
    {   LispObject fn = basic_elt(env, 23); // fkern
    v_343 = (*qfn1(fn))(fn, v_343);
    }
    env = stack[-8];
    if (!car_legal(v_343)) v_343 = cdrerror(v_343); else
    v_343 = cdr(v_343);
    if (!car_legal(v_343)) v_343 = cdrerror(v_343); else
    v_343 = cdr(v_343);
    v_343 = Lmemq(nil, stack[0], v_343);
    if (v_343 == nil) goto v_186;
    else goto v_184;
v_186:
    v_343 = stack[-3];
    if (!car_legal(v_343)) v_344 = carerror(v_343); else
    v_344 = car(v_343);
    v_343 = basic_elt(env, 7); // df
    if (v_344 == v_343) goto v_184;
    goto v_185;
v_184:
    {   LispObject fn = basic_elt(env, 20); // rmsubs
    v_343 = (*qfn0(fn))(fn);
    }
    env = stack[-8];
    goto v_169;
v_185:
v_169:
    v_345 = stack[-3];
    v_344 = stack[-5];
    v_343 = stack[-2];
    {   LispObject fn = basic_elt(env, 24); // setk1
    v_343 = (*qfn3(fn))(fn, v_345, v_344, v_343);
    }
    goto v_136;
v_138:
    v_343 = stack[-3];
    if (!consp(v_343)) goto v_202;
    else goto v_203;
v_202:
    v_343 = stack[-6];
    {
        LispObject fn = basic_elt(env, 25); // errpri1
        return (*qfn1(fn))(fn, v_343);
    }
v_203:
    {   LispObject fn = basic_elt(env, 20); // rmsubs
    v_343 = (*qfn0(fn))(fn);
    }
    env = stack[-8];
    v_343 = stack[-3];
    if (!car_legal(v_343)) stack[-4] = carerror(v_343); else
    stack[-4] = car(v_343);
    stack[-1] = basic_elt(env, 8); // opmtch
    v_343 = stack[-3];
    if (!car_legal(v_343)) v_344 = cdrerror(v_343); else
    v_344 = cdr(v_343);
    v_343 = stack[0];
    v_345 = cons(v_344, v_343);
    env = stack[-8];
    v_343 = stack[-3];
    if (!car_legal(v_343)) v_343 = carerror(v_343); else
    v_343 = car(v_343);
    if (!symbolp(v_343)) v_344 = nil;
    else { v_344 = qfastgets(v_343);
           if (v_344 != nil) { v_344 = elt(v_344, 9); // opmtch
#ifdef RECORD_GET
             if (v_344 != SPID_NOPROP)
                record_get(elt(fastget_names, 9), 1);
             else record_get(elt(fastget_names, 9), 0),
                v_344 = nil; }
           else record_get(elt(fastget_names, 9), 0); }
#else
             if (v_344 == SPID_NOPROP) v_344 = nil; }}
#endif
    v_343 = stack[-2];
    {   LispObject fn = basic_elt(env, 21); // xadd!*
    v_343 = (*qfn3(fn))(fn, v_345, v_344, v_343);
    }
    env = stack[-8];
    v_343 = Lputprop(nil, stack[-4], stack[-1], v_343);
    goto v_136;
v_136:
    goto v_105;
v_118:
    {   LispObject fn = basic_elt(env, 20); // rmsubs
    v_343 = (*qfn0(fn))(fn);
    }
    env = stack[-8];
    v_344 = stack[-5];
    v_343 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_344 == v_343) goto v_232;
    else goto v_233;
v_232:
    v_343 = stack[-4];
    if (v_343 == nil) goto v_238;
    else goto v_239;
v_238:
    v_343 = stack[-1];
    v_343 = (v_343 == nil ? lisp_true : nil);
    goto v_237;
v_239:
    v_343 = nil;
    goto v_237;
    v_343 = nil;
v_237:
    goto v_231;
v_233:
    v_343 = nil;
    goto v_231;
    v_343 = nil;
v_231:
    if (v_343 == nil) goto v_229;
    v_343 = stack[-3];
    if (!car_legal(v_343)) v_345 = carerror(v_343); else
    v_345 = car(v_343);
    v_344 = qvalue(basic_elt(env, 9)); // asymplis!*
    v_343 = stack[-2];
    {   LispObject fn = basic_elt(env, 26); // xadd
    v_343 = (*qfn3(fn))(fn, v_345, v_344, v_343);
    }
    env = stack[-8];
    setvalue(basic_elt(env, 9), v_343); // asymplis!*
    v_343 = stack[-3];
    if (!car_legal(v_343)) v_343 = carerror(v_343); else
    v_343 = car(v_343);
    if (!car_legal(v_343)) v_345 = carerror(v_343); else
    v_345 = car(v_343);
    v_343 = stack[-3];
    if (!car_legal(v_343)) v_343 = carerror(v_343); else
    v_343 = car(v_343);
    if (!car_legal(v_343)) v_344 = cdrerror(v_343); else
    v_344 = cdr(v_343);
    v_343 = stack[0];
    v_345 = list2star(v_345, v_344, v_343);
    env = stack[-8];
    v_344 = qvalue(basic_elt(env, 10)); // powlis!*
    v_343 = basic_elt(env, 11); // replace
    {   LispObject fn = basic_elt(env, 26); // xadd
    v_343 = (*qfn3(fn))(fn, v_345, v_344, v_343);
    }
    env = stack[-8];
    setvalue(basic_elt(env, 10), v_343); // powlis!*
    goto v_227;
v_229:
    v_343 = stack[-4];
    if (v_343 == nil) goto v_267;
    else goto v_265;
v_267:
    v_343 = stack[0];
    if (!car_legal(v_343)) v_343 = carerror(v_343); else
    v_343 = car(v_343);
    if (!car_legal(v_343)) v_344 = cdrerror(v_343); else
    v_344 = cdr(v_343);
    v_343 = lisp_true;
    if (v_344 == v_343) goto v_273;
    v_343 = lisp_true;
    goto v_271;
v_273:
    v_343 = qvalue(basic_elt(env, 12)); // frasc!*
    goto v_271;
    v_343 = nil;
v_271:
    if (v_343 == nil) goto v_269;
    else goto v_265;
v_269:
    goto v_266;
v_265:
    v_343 = stack[-3];
    if (!car_legal(v_343)) v_344 = carerror(v_343); else
    v_344 = car(v_343);
    v_343 = stack[0];
    v_345 = cons(v_344, v_343);
    env = stack[-8];
    v_344 = qvalue(basic_elt(env, 13)); // powlis1!*
    v_343 = stack[-2];
    {   LispObject fn = basic_elt(env, 26); // xadd
    v_343 = (*qfn3(fn))(fn, v_345, v_344, v_343);
    }
    env = stack[-8];
    setvalue(basic_elt(env, 13), v_343); // powlis1!*
    goto v_227;
v_266:
    v_343 = stack[-2];
    if (v_343 == nil) goto v_293;
    else goto v_294;
v_293:
    v_343 = stack[-3];
    if (!car_legal(v_343)) v_343 = carerror(v_343); else
    v_343 = car(v_343);
    if (!car_legal(v_343)) v_344 = carerror(v_343); else
    v_344 = car(v_343);
    v_343 = qvalue(basic_elt(env, 9)); // asymplis!*
    v_343 = Lassoc(nil, v_344, v_343);
    v_344 = v_343;
    if (v_343 == nil) goto v_298;
    else goto v_299;
v_298:
    v_343 = nil;
    goto v_297;
v_299:
    v_343 = stack[-3];
    if (!car_legal(v_343)) v_343 = carerror(v_343); else
    v_343 = car(v_343);
    v_343 = (equal(v_344, v_343) ? lisp_true : nil);
    goto v_297;
    v_343 = nil;
v_297:
    goto v_292;
v_294:
    v_343 = nil;
    goto v_292;
    v_343 = nil;
v_292:
    if (v_343 == nil) goto v_290;
    v_343 = stack[-3];
    if (!car_legal(v_343)) v_343 = carerror(v_343); else
    v_343 = car(v_343);
    if (!car_legal(v_343)) v_344 = carerror(v_343); else
    v_344 = car(v_343);
    v_343 = qvalue(basic_elt(env, 9)); // asymplis!*
    {   LispObject fn = basic_elt(env, 27); // delasc
    v_343 = (*qfn2(fn))(fn, v_344, v_343);
    }
    env = stack[-8];
    setvalue(basic_elt(env, 9), v_343); // asymplis!*
    goto v_227;
v_290:
    v_343 = stack[-3];
    if (!car_legal(v_343)) v_343 = carerror(v_343); else
    v_343 = car(v_343);
    if (!car_legal(v_343)) v_345 = carerror(v_343); else
    v_345 = car(v_343);
    v_343 = stack[-3];
    if (!car_legal(v_343)) v_343 = carerror(v_343); else
    v_343 = car(v_343);
    if (!car_legal(v_343)) v_344 = cdrerror(v_343); else
    v_344 = cdr(v_343);
    v_343 = stack[0];
    v_345 = list2star(v_345, v_344, v_343);
    env = stack[-8];
    v_344 = qvalue(basic_elt(env, 10)); // powlis!*
    v_343 = stack[-2];
    {   LispObject fn = basic_elt(env, 26); // xadd
    v_343 = (*qfn3(fn))(fn, v_345, v_344, v_343);
    }
    env = stack[-8];
    setvalue(basic_elt(env, 10), v_343); // powlis!*
    v_343 = stack[-2];
    if (v_343 == nil) goto v_336;
    v_343 = stack[-3];
    if (!car_legal(v_343)) v_343 = carerror(v_343); else
    v_343 = car(v_343);
    if (!car_legal(v_343)) v_344 = carerror(v_343); else
    v_344 = car(v_343);
    v_343 = qvalue(basic_elt(env, 9)); // asymplis!*
    {   LispObject fn = basic_elt(env, 27); // delasc
    v_343 = (*qfn2(fn))(fn, v_344, v_343);
    }
    env = stack[-8];
    setvalue(basic_elt(env, 9), v_343); // asymplis!*
    goto v_334;
v_336:
v_334:
    goto v_227;
v_227:
    goto v_105;
v_105:
    v_343 = nil;
v_12:
    return onevalue(v_343);
}



// Code for poly!-to!-vector

static LispObject CC_polyKtoKvector(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[-1] = v_2;
// end of prologue
v_6:
    v_40 = stack[-1];
    if (!consp(v_40)) goto v_13;
    else goto v_14;
v_13:
    v_40 = lisp_true;
    goto v_12;
v_14:
    v_40 = stack[-1];
    if (!car_legal(v_40)) v_40 = carerror(v_40); else
    v_40 = car(v_40);
    v_40 = (consp(v_40) ? nil : lisp_true);
    goto v_12;
    v_40 = nil;
v_12:
    if (v_40 == nil) goto v_10;
    stack[-2] = qvalue(basic_elt(env, 1)); // poly!-vector
    stack[0] = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_40 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // !*d2n
    v_40 = (*qfn1(fn))(fn, v_40);
    }
    {
        LispObject v_46 = stack[-2];
        LispObject v_47 = stack[0];
        return Lputv(nil, v_46, v_47, v_40);
    }
v_10:
    v_42 = qvalue(basic_elt(env, 1)); // poly!-vector
    v_40 = stack[-1];
    if (!car_legal(v_40)) v_40 = carerror(v_40); else
    v_40 = car(v_40);
    if (!car_legal(v_40)) v_40 = carerror(v_40); else
    v_40 = car(v_40);
    if (!car_legal(v_40)) v_41 = cdrerror(v_40); else
    v_41 = cdr(v_40);
    v_40 = stack[-1];
    if (!car_legal(v_40)) v_40 = carerror(v_40); else
    v_40 = car(v_40);
    if (!car_legal(v_40)) v_40 = cdrerror(v_40); else
    v_40 = cdr(v_40);
    v_40 = Lputv(nil, v_42, v_41, v_40);
    env = stack[-3];
    v_40 = stack[-1];
    if (!car_legal(v_40)) v_40 = cdrerror(v_40); else
    v_40 = cdr(v_40);
    stack[-1] = v_40;
    goto v_6;
    v_40 = nil;
    return onevalue(v_40);
}



// Code for lex_process_directive

static LispObject CC_lex_process_directive(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil);
    stack_popper stack_popper_var(2);
// end of prologue
    v_79 = qvalue(basic_elt(env, 1)); // yylval
    v_78 = basic_elt(env, 2); // !#endif
    if (v_79 == v_78) goto v_8;
    else goto v_9;
v_8:
    v_78 = qvalue(basic_elt(env, 3)); // if_depth
    v_78 = static_cast<LispObject>(zerop(v_78));
    v_78 = v_78 ? lisp_true : nil;
    env = stack[-1];
    if (v_78 == nil) goto v_15;
    v_78 = basic_elt(env, 4); // "+++ #endif not follopwing #if"
    v_78 = Lprintc(nil, v_78);
    env = stack[-1];
    goto v_13;
v_15:
v_13:
    v_78 = qvalue(basic_elt(env, 3)); // if_depth
    v_78 = sub1(v_78);
    env = stack[-1];
    setvalue(basic_elt(env, 3), v_78); // if_depth
    v_78 = lisp_true;
    goto v_5;
v_9:
    v_79 = qvalue(basic_elt(env, 1)); // yylval
    v_78 = qvalue(basic_elt(env, 5)); // !$eof!$
    if (equal(v_79, v_78)) goto v_23;
    else goto v_24;
v_23:
    v_78 = qvalue(basic_elt(env, 3)); // if_depth
    v_78 = static_cast<LispObject>(zerop(v_78));
    v_78 = v_78 ? lisp_true : nil;
    env = stack[-1];
    if (v_78 == nil) goto v_29;
    else goto v_30;
v_29:
    v_78 = basic_elt(env, 6); // "+++ #endif missing at end of file"
    v_78 = Lprintc(nil, v_78);
    goto v_28;
v_30:
v_28:
    v_78 = lisp_true;
    goto v_5;
v_24:
    v_79 = qvalue(basic_elt(env, 1)); // yylval
    v_78 = basic_elt(env, 7); // !#if
    if (v_79 == v_78) goto v_36;
    else goto v_37;
v_36:
    v_78 = qvalue(basic_elt(env, 3)); // if_depth
    v_78 = add1(v_78);
    env = stack[-1];
    setvalue(basic_elt(env, 3), v_78); // if_depth
    {   LispObject fn = basic_elt(env, 10); // read_s_expression
    v_78 = (*qfn0(fn))(fn);
    }
    env = stack[-1];
    v_80 = qvalue(basic_elt(env, 1)); // yylval
    v_79 = nil;
    v_78 = nil;
    {   LispObject fn = basic_elt(env, 11); // errorset
    v_78 = (*qfn3(fn))(fn, v_80, v_79, v_78);
    }
    env = stack[-1];
    stack[0] = v_78;
    v_78 = stack[0];
    {   LispObject fn = basic_elt(env, 12); // errorp
    v_78 = (*qfn1(fn))(fn, v_78);
    }
    env = stack[-1];
    if (v_78 == nil) goto v_51;
    else goto v_49;
v_51:
    v_78 = stack[0];
    if (!car_legal(v_78)) v_78 = carerror(v_78); else
    v_78 = car(v_78);
    if (v_78 == nil) goto v_49;
    goto v_50;
v_49:
    v_78 = lisp_true;
    {
        LispObject fn = basic_elt(env, 13); // lex_skip_to_else_or_endif
        return (*qfn1(fn))(fn, v_78);
    }
v_50:
    v_78 = lisp_true;
    goto v_5;
    goto v_7;
v_37:
    v_79 = qvalue(basic_elt(env, 1)); // yylval
    v_78 = basic_elt(env, 8); // !#else
    if (v_79 == v_78) goto v_62;
    else goto v_63;
v_62:
    v_78 = nil;
    {
        LispObject fn = basic_elt(env, 13); // lex_skip_to_else_or_endif
        return (*qfn1(fn))(fn, v_78);
    }
v_63:
    v_79 = qvalue(basic_elt(env, 1)); // yylval
    v_78 = basic_elt(env, 9); // !#elif
    if (v_79 == v_78) goto v_68;
    else goto v_69;
v_68:
    {   LispObject fn = basic_elt(env, 10); // read_s_expression
    v_78 = (*qfn0(fn))(fn);
    }
    env = stack[-1];
    v_78 = nil;
    {
        LispObject fn = basic_elt(env, 13); // lex_skip_to_else_or_endif
        return (*qfn1(fn))(fn, v_78);
    }
v_69:
    v_78 = nil;
    goto v_5;
v_7:
    v_78 = nil;
v_5:
    return onevalue(v_78);
}



// Code for arg1of2

static LispObject CC_arg1of2(LispObject env,
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



// Code for profile_a_package

static LispObject CC_profile_a_package(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_513, v_514, v_515;
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(10);
// copy arguments values to proper place
    stack[-6] = v_2;
// end of prologue
// Binding !*errcont
// FLUIDBIND: reloadenv=9 litvec-offset=1 saveloc=2
{   bind_fluid_stack bind_fluid_var(-9, 1, -2);
    setvalue(basic_elt(env, 1), nil); // !*errcont
    v_513 = basic_elt(env, 2); // cpulimit
    v_513 = Lboundp(nil, v_513);
    env = stack[-9];
    if (v_513 == nil) goto v_21;
    else goto v_22;
v_21:
    v_513 = lisp_true;
    goto v_20;
v_22:
    v_513 = qvalue(basic_elt(env, 2)); // cpulimit
    v_513 = Lexplodec(nil, v_513);
    env = stack[-9];
    v_513 = Lcompress(nil, v_513);
    env = stack[-9];
    setvalue(basic_elt(env, 2), v_513); // cpulimit
    v_513 = integerp(v_513);
    if (v_513 == nil) goto v_30;
    else goto v_31;
v_30:
    v_513 = lisp_true;
    goto v_29;
v_31:
    v_514 = qvalue(basic_elt(env, 2)); // cpulimit
    v_513 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_513 = static_cast<LispObject>(lessp2(v_514, v_513));
    v_513 = v_513 ? lisp_true : nil;
    env = stack[-9];
    goto v_29;
    v_513 = nil;
v_29:
    goto v_20;
    v_513 = nil;
v_20:
    if (v_513 == nil) goto v_18;
    v_514 = basic_elt(env, 3); // jlisp
    v_513 = qvalue(basic_elt(env, 4)); // lispsystem!*
    v_513 = Lmemq(nil, v_514, v_513);
    if (v_513 == nil) goto v_45;
    v_513 = static_cast<LispObject>(80000)+TAG_FIXNUM; // 5000
    goto v_43;
v_45:
    v_513 = static_cast<LispObject>(2880)+TAG_FIXNUM; // 180
    goto v_43;
    v_513 = nil;
v_43:
    setvalue(basic_elt(env, 2), v_513); // cpulimit
    goto v_16;
v_18:
v_16:
    v_513 = basic_elt(env, 5); // conslimit
    v_513 = Lboundp(nil, v_513);
    env = stack[-9];
    if (v_513 == nil) goto v_59;
    else goto v_60;
v_59:
    v_513 = lisp_true;
    goto v_58;
v_60:
    v_513 = qvalue(basic_elt(env, 5)); // conslimit
    v_513 = Lexplodec(nil, v_513);
    env = stack[-9];
    v_513 = Lcompress(nil, v_513);
    env = stack[-9];
    setvalue(basic_elt(env, 5), v_513); // conslimit
    v_513 = integerp(v_513);
    if (v_513 == nil) goto v_68;
    else goto v_69;
v_68:
    v_513 = lisp_true;
    goto v_67;
v_69:
    v_514 = qvalue(basic_elt(env, 5)); // conslimit
    v_513 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_513 = static_cast<LispObject>(lessp2(v_514, v_513));
    v_513 = v_513 ? lisp_true : nil;
    env = stack[-9];
    goto v_67;
    v_513 = nil;
v_67:
    goto v_58;
    v_513 = nil;
v_58:
    if (v_513 == nil) goto v_56;
    v_513 = static_cast<LispObject>(32000)+TAG_FIXNUM; // 2000
    setvalue(basic_elt(env, 5), v_513); // conslimit
    goto v_54;
v_56:
v_54:
    v_513 = basic_elt(env, 6); // "PROFILING: "
    v_513 = Lprinc(nil, v_513);
    env = stack[-9];
    v_513 = stack[-6];
    if (!car_legal(v_513)) v_513 = carerror(v_513); else
    v_513 = car(v_513);
    v_513 = Lprint(nil, v_513);
    env = stack[-9];
    v_513 = nil;
    setvalue(basic_elt(env, 7), v_513); // !*backtrace
    v_513 = lisp_true;
    setvalue(basic_elt(env, 1), v_513); // !*errcont
    v_513 = nil;
    setvalue(basic_elt(env, 8), v_513); // !*int
    v_513 = stack[-6];
    if (!car_legal(v_513)) v_513 = carerror(v_513); else
    v_513 = car(v_513);
    stack[-8] = v_513;
    v_513 = nil;
    v_513 = Lverbos(nil, v_513);
    env = stack[-9];
    {   LispObject fn = basic_elt(env, 53); // get_configuration_data
    v_513 = (*qfn0(fn))(fn);
    }
    env = stack[-9];
    v_514 = stack[-8];
    v_513 = qvalue(basic_elt(env, 9)); // reduce_regression_tests
    v_513 = Lmemq(nil, v_514, v_513);
    if (v_513 == nil) goto v_96;
    else goto v_97;
v_96:
    v_513 = stack[-8];
    {   LispObject fn = basic_elt(env, 54); // load!-package
    v_513 = (*qfn1(fn))(fn, v_513);
    }
    env = stack[-9];
    v_514 = stack[-8];
    v_513 = basic_elt(env, 10); // folder
    v_513 = get(v_514, v_513);
    env = stack[-9];
    if (v_513 == nil) goto v_106;
    v_514 = stack[-8];
    v_513 = basic_elt(env, 10); // folder
    v_513 = get(v_514, v_513);
    env = stack[-9];
    stack[-8] = v_513;
    goto v_104;
v_106:
v_104:
    v_514 = basic_elt(env, 11); // "$reduce/packages/"
    v_513 = stack[-8];
    {   LispObject fn = basic_elt(env, 55); // concat
    v_513 = (*qfn2(fn))(fn, v_514, v_513);
    }
    env = stack[-9];
    setvalue(basic_elt(env, 12), v_513); // testdirectory
    stack[-1] = basic_elt(env, 11); // "$reduce/packages/"
    stack[-3] = stack[-8];
    stack[0] = basic_elt(env, 13); // "/"
    v_513 = stack[-6];
    if (!car_legal(v_513)) v_514 = carerror(v_513); else
    v_514 = car(v_513);
    v_513 = basic_elt(env, 14); // ".tst"
    {   LispObject fn = basic_elt(env, 55); // concat
    v_513 = (*qfn2(fn))(fn, v_514, v_513);
    }
    env = stack[-9];
    {   LispObject fn = basic_elt(env, 55); // concat
    v_513 = (*qfn2(fn))(fn, stack[0], v_513);
    }
    env = stack[-9];
    {   LispObject fn = basic_elt(env, 55); // concat
    v_513 = (*qfn2(fn))(fn, stack[-3], v_513);
    }
    env = stack[-9];
    {   LispObject fn = basic_elt(env, 55); // concat
    v_513 = (*qfn2(fn))(fn, stack[-1], v_513);
    }
    env = stack[-9];
    stack[-8] = v_513;
    v_513 = static_cast<LispObject>(1280)+TAG_FIXNUM; // 80
    v_513 = Llinelength(nil, v_513);
    env = stack[-9];
    stack[-7] = v_513;
    v_513 = nil;
    v_513 = ncons(v_513);
    env = stack[-9];
    setvalue(basic_elt(env, 15), v_513); // alglist!*
    v_513 = basic_elt(env, 16); // algebraic
    setvalue(basic_elt(env, 17), v_513); // !*mode
    v_513 = basic_elt(env, 18); // "[Profile] "
    stack[0] = Lexplodec(nil, v_513);
    env = stack[-9];
    v_513 = stack[-6];
    if (!car_legal(v_513)) v_513 = carerror(v_513); else
    v_513 = car(v_513);
    v_513 = Lexplodec(nil, v_513);
    env = stack[-9];
    v_513 = Lappend_2(nil, stack[0], v_513);
    env = stack[-9];
    {   LispObject fn = basic_elt(env, 56); // list!-to!-string
    v_513 = (*qfn1(fn))(fn, v_513);
    }
    env = stack[-9];
    {   LispObject fn = basic_elt(env, 57); // window!-heading
    v_513 = (*qfn1(fn))(fn, v_513);
    }
    env = stack[-9];
    v_513 = basic_elt(env, 19); // quit
    {   LispObject fn = basic_elt(env, 58); // getd
    v_513 = (*qfn1(fn))(fn, v_513);
    }
    env = stack[-9];
    stack[-3] = v_513;
    v_513 = basic_elt(env, 19); // quit
    v_513 = Lremd(nil, v_513);
    env = stack[-9];
    v_515 = basic_elt(env, 19); // quit
    v_514 = basic_elt(env, 20); // expr
    v_513 = basic_elt(env, 21); // posn
    {   LispObject fn = basic_elt(env, 59); // putd
    v_513 = (*qfn3(fn))(fn, v_515, v_514, v_513);
    }
    env = stack[-9];
    v_513 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_513 = Lmapstore(nil, v_513);
    env = stack[-9];
    v_513 = lisp_true;
    setvalue(basic_elt(env, 1), v_513); // !*errcont
    v_513 = nil;
    v_513 = Lwrs(nil, v_513);
    env = stack[-9];
    stack[-5] = v_513;
    v_513 = nil;
    v_513 = Lrds(nil, v_513);
    env = stack[-9];
    stack[-4] = v_513;
    v_513 = stack[-5];
    v_513 = Lwrs(nil, v_513);
    env = stack[-9];
    v_513 = stack[-4];
    v_513 = Lrds(nil, v_513);
    env = stack[-9];
    stack[-1] = basic_elt(env, 22); // errorset
    stack[0] = basic_elt(env, 23); // in_list1
    v_513 = stack[-8];
    v_514 = Lmkquote(nil, v_513);
    env = stack[-9];
    v_513 = lisp_true;
    v_513 = list3(stack[0], v_514, v_513);
    env = stack[-9];
    v_515 = Lmkquote(nil, v_513);
    env = stack[-9];
    v_514 = nil;
    v_513 = nil;
    stack[-8] = list4(stack[-1], v_515, v_514, v_513);
    env = stack[-9];
    stack[-1] = qvalue(basic_elt(env, 2)); // cpulimit
    stack[0] = qvalue(basic_elt(env, 5)); // conslimit
    v_514 = static_cast<LispObject>(160000)+TAG_FIXNUM; // 10000
    v_513 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    v_513 = list2(v_514, v_513);
    env = stack[-9];
    {   LispObject fn = basic_elt(env, 60); // resource!-limit
    v_513 = (*qfn4up(fn))(fn, stack[-8], stack[-1], stack[0], v_513);
    }
    env = stack[-9];
    stack[0] = v_513;
    v_513 = stack[-5];
    v_513 = Lwrs(nil, v_513);
    env = stack[-9];
    v_513 = stack[-4];
    v_513 = Lrds(nil, v_513);
    env = stack[-9];
    v_513 = nil;
    setvalue(basic_elt(env, 24), v_513); // erfg!*
    v_513 = Lterpri(nil);
    env = stack[-9];
    v_515 = basic_elt(env, 19); // quit
    v_513 = stack[-3];
    if (!car_legal(v_513)) v_514 = carerror(v_513); else
    v_514 = car(v_513);
    v_513 = stack[-3];
    if (!car_legal(v_513)) v_513 = cdrerror(v_513); else
    v_513 = cdr(v_513);
    {   LispObject fn = basic_elt(env, 59); // putd
    v_513 = (*qfn3(fn))(fn, v_515, v_514, v_513);
    }
    env = stack[-9];
    v_513 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_514 = Lmapstore(nil, v_513);
    env = stack[-9];
    v_513 = basic_elt(env, 25); // profile_compare_fn
    {   LispObject fn = basic_elt(env, 61); // sort
    v_513 = (*qfn2(fn))(fn, v_514, v_513);
    }
    env = stack[-9];
    stack[-5] = v_513;
    v_514 = basic_elt(env, 26); // "buildlogs/flaguse.log"
    v_513 = basic_elt(env, 27); // append
    {   LispObject fn = basic_elt(env, 62); // open
    v_513 = (*qfn2(fn))(fn, v_514, v_513);
    }
    env = stack[-9];
    v_513 = Lwrs(nil, v_513);
    env = stack[-9];
    stack[-1] = v_513;
    v_513 = lisp_true;
    {   LispObject fn = basic_elt(env, 63); // bytecounts
    v_513 = (*qfn1(fn))(fn, v_513);
    }
    env = stack[-9];
    v_513 = stack[-1];
    v_513 = Lwrs(nil, v_513);
    env = stack[-9];
    v_513 = Lclose(nil, v_513);
    env = stack[-9];
    {   LispObject fn = basic_elt(env, 64); // load!-source
    v_513 = (*qfn0(fn))(fn);
    }
    env = stack[-9];
    v_513 = nil;
    stack[-4] = v_513;
v_206:
    v_513 = stack[-5];
    if (v_513 == nil) goto v_209;
    else goto v_210;
v_209:
    goto v_205;
v_210:
    v_513 = stack[-5];
    if (!car_legal(v_513)) v_513 = carerror(v_513); else
    v_513 = car(v_513);
    if (!car_legal(v_513)) v_514 = carerror(v_513); else
    v_514 = car(v_513);
    v_513 = basic_elt(env, 28); // !*savedef
    v_513 = get(v_514, v_513);
    env = stack[-9];
    v_515 = v_513;
    v_514 = v_515;
    v_513 = basic_elt(env, 29); // lambda
    if (!consp(v_514)) goto v_221;
    v_514 = car(v_514);
    if (v_514 == v_513) goto v_220;
    else goto v_221;
v_220:
    v_513 = stack[-5];
    if (!car_legal(v_513)) v_513 = carerror(v_513); else
    v_513 = car(v_513);
    if (!car_legal(v_513)) stack[-1] = carerror(v_513); else
    stack[-1] = car(v_513);
    v_513 = stack[-5];
    if (!car_legal(v_513)) v_513 = carerror(v_513); else
    v_513 = car(v_513);
    if (!car_legal(v_513)) v_513 = carerror(v_513); else
    v_513 = car(v_513);
    v_514 = v_515;
    if (!car_legal(v_514)) v_514 = cdrerror(v_514); else
    v_514 = cdr(v_514);
    v_513 = cons(v_513, v_514);
    env = stack[-9];
    {   LispObject fn = basic_elt(env, 65); // md60
    v_515 = (*qfn1(fn))(fn, v_513);
    }
    env = stack[-9];
    v_513 = stack[-5];
    if (!car_legal(v_513)) v_513 = carerror(v_513); else
    v_513 = car(v_513);
    if (!car_legal(v_513)) v_513 = cdrerror(v_513); else
    v_513 = cdr(v_513);
    if (!car_legal(v_513)) v_514 = carerror(v_513); else
    v_514 = car(v_513);
    v_513 = stack[-5];
    if (!car_legal(v_513)) v_513 = carerror(v_513); else
    v_513 = car(v_513);
    if (!car_legal(v_513)) v_513 = cdrerror(v_513); else
    v_513 = cdr(v_513);
    if (!car_legal(v_513)) v_513 = cdrerror(v_513); else
    v_513 = cdr(v_513);
    if (!car_legal(v_513)) v_513 = carerror(v_513); else
    v_513 = car(v_513);
    v_514 = list2star(v_515, v_514, v_513);
    env = stack[-9];
    v_513 = stack[-4];
    v_513 = acons(stack[-1], v_514, v_513);
    env = stack[-9];
    stack[-4] = v_513;
    goto v_219;
v_221:
v_219:
    v_513 = stack[-5];
    if (!car_legal(v_513)) v_513 = cdrerror(v_513); else
    v_513 = cdr(v_513);
    stack[-5] = v_513;
    goto v_206;
v_205:
    v_513 = stack[-4];
    stack[-5] = v_513;
    v_513 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-1] = v_513;
v_253:
    v_514 = static_cast<LispObject>(5584)+TAG_FIXNUM; // 349
    v_513 = stack[-1];
    v_513 = difference2(v_514, v_513);
    env = stack[-9];
    v_513 = Lminusp(nil, v_513);
    env = stack[-9];
    if (v_513 == nil) goto v_258;
    goto v_252;
v_258:
    v_513 = stack[-4];
    if (v_513 == nil) goto v_267;
    v_513 = stack[-4];
    if (!car_legal(v_513)) v_513 = cdrerror(v_513); else
    v_513 = cdr(v_513);
    stack[-4] = v_513;
    goto v_265;
v_267:
v_265:
    v_513 = stack[-1];
    v_513 = add1(v_513);
    env = stack[-9];
    stack[-1] = v_513;
    goto v_253;
v_252:
    v_513 = stack[-4];
    if (v_513 == nil) goto v_276;
    v_514 = stack[-4];
    v_513 = nil;
    if (!car_legal(v_514)) rplacd_fails(v_514);
    setcdr(v_514, v_513);
    goto v_274;
v_276:
v_274:
    v_514 = basic_elt(env, 30); // "profile.dat"
    v_513 = basic_elt(env, 27); // append
    {   LispObject fn = basic_elt(env, 62); // open
    v_513 = (*qfn2(fn))(fn, v_514, v_513);
    }
    env = stack[-9];
    stack[-4] = v_513;
    v_513 = stack[-4];
    v_513 = Lwrs(nil, v_513);
    env = stack[-9];
    stack[-4] = v_513;
    v_513 = static_cast<LispObject>(1280)+TAG_FIXNUM; // 80
    v_513 = Llinelength(nil, v_513);
    env = stack[-9];
    v_513 = stack[0];
    if (!consp(v_513)) goto v_290;
    else goto v_291;
v_290:
    v_513 = basic_elt(env, 31); // "% +++++ Error: Resource limit exceeded"
    v_513 = Lprintc(nil, v_513);
    env = stack[-9];
    goto v_289;
v_291:
v_289:
    v_513 = basic_elt(env, 32); // "% @@@@@ Resources used: "
    v_513 = Lprinc(nil, v_513);
    env = stack[-9];
    v_513 = qvalue(basic_elt(env, 33)); // !*resources!*
    v_513 = Lprint(nil, v_513);
    env = stack[-9];
    v_513 = basic_elt(env, 34); // "("
    v_513 = Lprinc(nil, v_513);
    env = stack[-9];
    v_513 = stack[-6];
    if (!car_legal(v_513)) v_513 = carerror(v_513); else
    v_513 = car(v_513);
    v_513 = Lprin(nil, v_513);
    env = stack[-9];
    v_513 = Lterpri(nil);
    env = stack[-9];
    v_513 = stack[-5];
    stack[-1] = v_513;
v_308:
    v_513 = stack[-1];
    if (v_513 == nil) goto v_312;
    else goto v_313;
v_312:
    goto v_307;
v_313:
    v_513 = stack[-1];
    if (!car_legal(v_513)) v_513 = carerror(v_513); else
    v_513 = car(v_513);
    stack[0] = v_513;
    v_513 = basic_elt(env, 35); // "  ("
    v_513 = Lprinc(nil, v_513);
    env = stack[-9];
    v_513 = stack[0];
    if (!car_legal(v_513)) v_513 = carerror(v_513); else
    v_513 = car(v_513);
    v_513 = Lprin(nil, v_513);
    env = stack[-9];
    v_513 = basic_elt(env, 36); // " "
    v_513 = Lprinc(nil, v_513);
    env = stack[-9];
    v_514 = Lposn(nil);
    env = stack[-9];
    v_513 = static_cast<LispObject>(480)+TAG_FIXNUM; // 30
    v_513 = static_cast<LispObject>(greaterp2(v_514, v_513));
    v_513 = v_513 ? lisp_true : nil;
    env = stack[-9];
    if (v_513 == nil) goto v_329;
    v_513 = Lterpri(nil);
    env = stack[-9];
    v_513 = static_cast<LispObject>(480)+TAG_FIXNUM; // 30
    v_513 = Lttab(nil, v_513);
    env = stack[-9];
    goto v_327;
v_329:
v_327:
    v_513 = stack[0];
    if (!car_legal(v_513)) v_513 = cdrerror(v_513); else
    v_513 = cdr(v_513);
    if (!car_legal(v_513)) v_513 = carerror(v_513); else
    v_513 = car(v_513);
    v_513 = Lprin(nil, v_513);
    env = stack[-9];
    v_513 = basic_elt(env, 36); // " "
    v_513 = Lprinc(nil, v_513);
    env = stack[-9];
    v_513 = stack[0];
    if (!car_legal(v_513)) v_513 = cdrerror(v_513); else
    v_513 = cdr(v_513);
    if (!car_legal(v_513)) v_513 = cdrerror(v_513); else
    v_513 = cdr(v_513);
    if (!car_legal(v_513)) v_513 = carerror(v_513); else
    v_513 = car(v_513);
    v_513 = Lprin(nil, v_513);
    env = stack[-9];
    v_513 = basic_elt(env, 36); // " "
    v_513 = Lprinc(nil, v_513);
    env = stack[-9];
    v_513 = stack[0];
    if (!car_legal(v_513)) v_513 = cdrerror(v_513); else
    v_513 = cdr(v_513);
    if (!car_legal(v_513)) v_513 = cdrerror(v_513); else
    v_513 = cdr(v_513);
    if (!car_legal(v_513)) v_513 = cdrerror(v_513); else
    v_513 = cdr(v_513);
    v_513 = Lprinc(nil, v_513);
    env = stack[-9];
    v_513 = basic_elt(env, 37); // ")"
    v_513 = Lprintc(nil, v_513);
    env = stack[-9];
    v_513 = stack[-1];
    if (!car_legal(v_513)) v_513 = cdrerror(v_513); else
    v_513 = cdr(v_513);
    stack[-1] = v_513;
    goto v_308;
v_307:
    v_513 = basic_elt(env, 38); // "  )"
    v_513 = Lprintc(nil, v_513);
    env = stack[-9];
    v_513 = Lterpri(nil);
    env = stack[-9];
    v_513 = stack[-4];
    v_513 = Lwrs(nil, v_513);
    env = stack[-9];
    v_513 = Lclose(nil, v_513);
    env = stack[-9];
    v_513 = stack[-7];
    v_513 = Llinelength(nil, v_513);
    env = stack[-9];
    goto v_95;
v_97:
v_95:
    v_513 = stack[-6];
    if (!car_legal(v_513)) v_513 = cdrerror(v_513); else
    v_513 = cdr(v_513);
    stack[-6] = v_513;
    v_513 = stack[-6];
    if (v_513 == nil) goto v_370;
    else goto v_371;
v_370:
    v_514 = basic_elt(env, 26); // "buildlogs/flaguse.log"
    v_513 = basic_elt(env, 39); // input
    {   LispObject fn = basic_elt(env, 62); // open
    v_513 = (*qfn2(fn))(fn, v_514, v_513);
    }
    env = stack[-9];
    stack[-4] = v_513;
    v_513 = stack[-4];
    v_513 = Lrds(nil, v_513);
    env = stack[-9];
    stack[-4] = v_513;
    v_513 = nil;
    stack[-5] = v_513;
v_381:
    v_514 = Lread(nil);
    env = stack[-9];
    v_515 = v_514;
    v_513 = qvalue(basic_elt(env, 40)); // !$eof!$
    if (equal(v_514, v_513)) goto v_384;
    else goto v_385;
v_384:
    goto v_380;
v_385:
    v_514 = v_515;
    v_513 = basic_elt(env, 41); // orderp
    {   LispObject fn = basic_elt(env, 61); // sort
    v_514 = (*qfn2(fn))(fn, v_514, v_513);
    }
    env = stack[-9];
    v_513 = stack[-5];
    v_513 = cons(v_514, v_513);
    env = stack[-9];
    stack[-5] = v_513;
    goto v_381;
v_380:
    v_513 = stack[-4];
    v_513 = Lrds(nil, v_513);
    env = stack[-9];
    v_513 = Lclose(nil, v_513);
    env = stack[-9];
    v_513 = basic_elt(env, 42); // ((symbol!-make!-fastget (quote lose) 1) (symbol!-make!-fastget (quote noncom) 0))
    stack[0] = v_513;
    v_514 = basic_elt(env, 43); // (lose noncom)
    v_513 = basic_elt(env, 44); // processed
    v_513 = Lflag(nil, v_514, v_513);
    env = stack[-9];
    v_513 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    stack[-7] = v_513;
v_404:
    v_513 = stack[-5];
    if (v_513 == nil) goto v_407;
    else goto v_408;
v_407:
    goto v_403;
v_408:
    v_513 = nil;
    stack[-4] = v_513;
    v_513 = stack[-5];
    stack[-5] = v_513;
v_415:
    v_513 = stack[-5];
    if (v_513 == nil) goto v_419;
    else goto v_420;
v_419:
    goto v_414;
v_420:
    v_513 = stack[-5];
    if (!car_legal(v_513)) v_513 = carerror(v_513); else
    v_513 = car(v_513);
    stack[-3] = v_513;
    v_513 = stack[-3];
    if (v_513 == nil) goto v_429;
    v_513 = stack[-3];
    if (!car_legal(v_513)) v_513 = carerror(v_513); else
    v_513 = car(v_513);
    if (!car_legal(v_513)) v_513 = cdrerror(v_513); else
    v_513 = cdr(v_513);
    if (!car_legal(v_513)) v_514 = carerror(v_513); else
    v_514 = car(v_513);
    v_513 = basic_elt(env, 44); // processed
    v_513 = Lflagp(nil, v_514, v_513);
    env = stack[-9];
    if (v_513 == nil) goto v_435;
    else goto v_436;
v_435:
    v_514 = stack[-7];
    v_513 = static_cast<LispObject>(1008)+TAG_FIXNUM; // 63
    v_513 = static_cast<LispObject>(lessp2(v_514, v_513));
    v_513 = v_513 ? lisp_true : nil;
    env = stack[-9];
    goto v_434;
v_436:
    v_513 = nil;
    goto v_434;
    v_513 = nil;
v_434:
    if (v_513 == nil) goto v_429;
    stack[-1] = basic_elt(env, 45); // symbol!-make!-fastget
    v_513 = stack[-3];
    if (!car_legal(v_513)) v_513 = carerror(v_513); else
    v_513 = car(v_513);
    if (!car_legal(v_513)) v_513 = cdrerror(v_513); else
    v_513 = cdr(v_513);
    if (!car_legal(v_513)) v_513 = carerror(v_513); else
    v_513 = car(v_513);
    v_514 = Lmkquote(nil, v_513);
    env = stack[-9];
    v_513 = stack[-7];
    v_514 = list3(stack[-1], v_514, v_513);
    env = stack[-9];
    v_513 = stack[0];
    v_513 = cons(v_514, v_513);
    env = stack[-9];
    stack[0] = v_513;
    v_513 = stack[-3];
    if (!car_legal(v_513)) v_513 = carerror(v_513); else
    v_513 = car(v_513);
    if (!car_legal(v_513)) v_513 = cdrerror(v_513); else
    v_513 = cdr(v_513);
    if (!car_legal(v_513)) v_513 = carerror(v_513); else
    v_513 = car(v_513);
    v_514 = ncons(v_513);
    env = stack[-9];
    v_513 = basic_elt(env, 44); // processed
    v_513 = Lflag(nil, v_514, v_513);
    env = stack[-9];
    v_513 = stack[-7];
    v_513 = add1(v_513);
    env = stack[-9];
    stack[-7] = v_513;
    goto v_427;
v_429:
v_427:
    v_513 = stack[-3];
    if (!car_legal(v_513)) v_513 = cdrerror(v_513); else
    v_513 = cdr(v_513);
    if (v_513 == nil) goto v_471;
    v_513 = stack[-3];
    if (!car_legal(v_513)) v_514 = cdrerror(v_513); else
    v_514 = cdr(v_513);
    v_513 = stack[-4];
    v_513 = cons(v_514, v_513);
    env = stack[-9];
    stack[-4] = v_513;
    goto v_469;
v_471:
v_469:
    v_513 = stack[-5];
    if (!car_legal(v_513)) v_513 = cdrerror(v_513); else
    v_513 = cdr(v_513);
    stack[-5] = v_513;
    goto v_415;
v_414:
    v_513 = stack[-4];
    v_513 = Lreverse(nil, v_513);
    env = stack[-9];
    stack[-5] = v_513;
    goto v_404;
v_403:
    v_514 = basic_elt(env, 46); // "buildlogs/fastgets.lsp"
    v_513 = basic_elt(env, 47); // output
    {   LispObject fn = basic_elt(env, 62); // open
    v_513 = (*qfn2(fn))(fn, v_514, v_513);
    }
    env = stack[-9];
    stack[-5] = v_513;
    v_513 = stack[-5];
    v_513 = Lwrs(nil, v_513);
    env = stack[-9];
    stack[-5] = v_513;
    v_513 = basic_elt(env, 48); // "% fastgets.lsp generated by profiling"
    v_513 = Lprintc(nil, v_513);
    env = stack[-9];
    v_513 = Lterpri(nil);
    env = stack[-9];
    stack[-1] = basic_elt(env, 49); // progn
    v_513 = stack[0];
    v_513 = Lreverse(nil, v_513);
    env = stack[-9];
    v_513 = cons(stack[-1], v_513);
    env = stack[-9];
    {   LispObject fn = basic_elt(env, 66); // prettyprint
    v_513 = (*qfn1(fn))(fn, v_513);
    }
    env = stack[-9];
    v_513 = Lterpri(nil);
    env = stack[-9];
    v_513 = basic_elt(env, 50); // "% end of fastgets.lsp"
    v_513 = Lprintc(nil, v_513);
    env = stack[-9];
    v_513 = stack[-5];
    v_513 = Lwrs(nil, v_513);
    env = stack[-9];
    v_513 = Lclose(nil, v_513);
    env = stack[-9];
    v_513 = basic_elt(env, 51); // "Profiling complete"
    v_513 = Lprintc(nil, v_513);
    env = stack[-9];
    v_513 = basic_elt(env, 51); // "Profiling complete"
    {   LispObject fn = basic_elt(env, 57); // window!-heading
    v_513 = (*qfn1(fn))(fn, v_513);
    }
    env = stack[-9];
    v_513 = lisp_true;
    {   LispObject fn = basic_elt(env, 67); // restart!-csl
    v_513 = (*qfn1(fn))(fn, v_513);
    }
    goto v_369;
v_371:
    v_514 = basic_elt(env, 52); // (remake profile_a_package)
    v_513 = stack[-6];
    {   LispObject fn = basic_elt(env, 67); // restart!-csl
    v_513 = (*qfn2(fn))(fn, v_514, v_513);
    }
    goto v_369;
v_369:
    v_513 = nil;
    ;}  // end of a binding scope
    return onevalue(v_513);
}



// Code for vp2

static LispObject CC_vp2(LispObject env,
                         LispObject v_2)
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
    v_23 = nil;
v_7:
    v_22 = stack[0];
    if (v_22 == nil) goto v_10;
    else goto v_11;
v_10:
    v_22 = v_23;
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn1(fn))(fn, v_22);
    }
v_11:
    v_22 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_22 = cons(v_22, v_23);
    env = stack[-1];
    v_23 = v_22;
    v_22 = stack[0];
    if (!car_legal(v_22)) v_22 = cdrerror(v_22); else
    v_22 = cdr(v_22);
    stack[0] = v_22;
    goto v_7;
    v_22 = nil;
    return onevalue(v_22);
}



// Code for pasf_exprng

static LispObject CC_pasf_exprng(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_218, v_219, v_220;
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
    v_220 = v_2;
// end of prologue
// Binding !*rlsism
// FLUIDBIND: reloadenv=6 litvec-offset=1 saveloc=4
{   bind_fluid_stack bind_fluid_var(-6, 1, -4);
    setvalue(basic_elt(env, 1), nil); // !*rlsism
    v_218 = v_220;
    if (!consp(v_218)) goto v_12;
    else goto v_13;
v_12:
    v_218 = v_220;
    goto v_11;
v_13:
    v_218 = v_220;
    if (!car_legal(v_218)) v_218 = carerror(v_218); else
    v_218 = car(v_218);
    goto v_11;
    v_218 = nil;
v_11:
    stack[-5] = v_218;
    v_219 = stack[-5];
    v_218 = basic_elt(env, 2); // and
    if (v_219 == v_218) goto v_22;
    else goto v_23;
v_22:
    stack[-2] = basic_elt(env, 2); // and
    v_218 = v_220;
    if (!car_legal(v_218)) stack[-1] = cdrerror(v_218); else
    stack[-1] = cdr(v_218);
    stack[0] = basic_elt(env, 3); // true
    v_218 = basic_elt(env, 4); // false
    v_218 = ncons(v_218);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 12); // pasf_exprng!-gand
    v_218 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_218);
    }
    goto v_9;
v_23:
    v_219 = stack[-5];
    v_218 = basic_elt(env, 5); // or
    if (v_219 == v_218) goto v_35;
    else goto v_36;
v_35:
    stack[-2] = basic_elt(env, 5); // or
    v_218 = v_220;
    if (!car_legal(v_218)) stack[-1] = cdrerror(v_218); else
    stack[-1] = cdr(v_218);
    stack[0] = basic_elt(env, 4); // false
    v_218 = basic_elt(env, 3); // true
    v_218 = ncons(v_218);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 12); // pasf_exprng!-gand
    v_218 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_218);
    }
    goto v_9;
v_36:
    v_219 = stack[-5];
    v_218 = basic_elt(env, 6); // ball
    if (v_219 == v_218) goto v_48;
    else goto v_49;
v_48:
    v_218 = v_220;
    if (!car_legal(v_218)) v_218 = cdrerror(v_218); else
    v_218 = cdr(v_218);
    if (!car_legal(v_218)) stack[-2] = carerror(v_218); else
    stack[-2] = car(v_218);
    v_218 = v_220;
    if (!car_legal(v_218)) v_218 = cdrerror(v_218); else
    v_218 = cdr(v_218);
    if (!car_legal(v_218)) v_218 = cdrerror(v_218); else
    v_218 = cdr(v_218);
    if (!car_legal(v_218)) v_218 = cdrerror(v_218); else
    v_218 = cdr(v_218);
    if (!car_legal(v_218)) stack[-1] = carerror(v_218); else
    stack[-1] = car(v_218);
    v_218 = v_220;
    if (!car_legal(v_218)) v_218 = cdrerror(v_218); else
    v_218 = cdr(v_218);
    if (!car_legal(v_218)) v_218 = cdrerror(v_218); else
    v_218 = cdr(v_218);
    if (!car_legal(v_218)) stack[0] = carerror(v_218); else
    stack[0] = car(v_218);
    v_220 = basic_elt(env, 2); // and
    v_219 = basic_elt(env, 3); // true
    v_218 = basic_elt(env, 4); // false
    v_218 = list3(v_220, v_219, v_218);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 13); // pasf_exprng!-gball
    v_218 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_218);
    }
    goto v_9;
v_49:
    v_219 = stack[-5];
    v_218 = basic_elt(env, 7); // bex
    if (v_219 == v_218) goto v_71;
    else goto v_72;
v_71:
    v_218 = v_220;
    if (!car_legal(v_218)) v_218 = cdrerror(v_218); else
    v_218 = cdr(v_218);
    if (!car_legal(v_218)) stack[-2] = carerror(v_218); else
    stack[-2] = car(v_218);
    v_218 = v_220;
    if (!car_legal(v_218)) v_218 = cdrerror(v_218); else
    v_218 = cdr(v_218);
    if (!car_legal(v_218)) v_218 = cdrerror(v_218); else
    v_218 = cdr(v_218);
    if (!car_legal(v_218)) v_218 = cdrerror(v_218); else
    v_218 = cdr(v_218);
    if (!car_legal(v_218)) stack[-1] = carerror(v_218); else
    stack[-1] = car(v_218);
    v_218 = v_220;
    if (!car_legal(v_218)) v_218 = cdrerror(v_218); else
    v_218 = cdr(v_218);
    if (!car_legal(v_218)) v_218 = cdrerror(v_218); else
    v_218 = cdr(v_218);
    if (!car_legal(v_218)) stack[0] = carerror(v_218); else
    stack[0] = car(v_218);
    v_220 = basic_elt(env, 5); // or
    v_219 = basic_elt(env, 4); // false
    v_218 = basic_elt(env, 3); // true
    v_218 = list3(v_220, v_219, v_218);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 13); // pasf_exprng!-gball
    v_218 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_218);
    }
    goto v_9;
v_72:
    v_219 = stack[-5];
    v_218 = basic_elt(env, 5); // or
    if (v_219 == v_218) goto v_106;
    else goto v_107;
v_106:
    v_218 = lisp_true;
    goto v_105;
v_107:
    v_219 = stack[-5];
    v_218 = basic_elt(env, 2); // and
    v_218 = (v_219 == v_218 ? lisp_true : nil);
    goto v_105;
    v_218 = nil;
v_105:
    if (v_218 == nil) goto v_103;
    v_218 = lisp_true;
    goto v_101;
v_103:
    v_219 = stack[-5];
    v_218 = basic_elt(env, 8); // not
    v_218 = (v_219 == v_218 ? lisp_true : nil);
    goto v_101;
    v_218 = nil;
v_101:
    if (v_218 == nil) goto v_99;
    v_218 = lisp_true;
    goto v_97;
v_99:
    v_219 = stack[-5];
    v_218 = basic_elt(env, 9); // impl
    if (v_219 == v_218) goto v_127;
    else goto v_128;
v_127:
    v_218 = lisp_true;
    goto v_126;
v_128:
    v_219 = stack[-5];
    v_218 = basic_elt(env, 10); // repl
    if (v_219 == v_218) goto v_136;
    else goto v_137;
v_136:
    v_218 = lisp_true;
    goto v_135;
v_137:
    v_219 = stack[-5];
    v_218 = basic_elt(env, 11); // equiv
    v_218 = (v_219 == v_218 ? lisp_true : nil);
    goto v_135;
    v_218 = nil;
v_135:
    goto v_126;
    v_218 = nil;
v_126:
    goto v_97;
    v_218 = nil;
v_97:
    if (v_218 == nil) goto v_95;
    v_218 = v_220;
    if (!car_legal(v_218)) v_218 = cdrerror(v_218); else
    v_218 = cdr(v_218);
    stack[-3] = v_218;
    v_218 = stack[-3];
    if (v_218 == nil) goto v_156;
    else goto v_157;
v_156:
    v_218 = nil;
    goto v_150;
v_157:
    v_218 = stack[-3];
    if (!car_legal(v_218)) v_218 = carerror(v_218); else
    v_218 = car(v_218);
    {   LispObject fn = basic_elt(env, 0); // pasf_exprng
    v_218 = (*qfn1(fn))(fn, v_218);
    }
    env = stack[-6];
    v_218 = ncons(v_218);
    env = stack[-6];
    stack[-1] = v_218;
    stack[-2] = v_218;
v_151:
    v_218 = stack[-3];
    if (!car_legal(v_218)) v_218 = cdrerror(v_218); else
    v_218 = cdr(v_218);
    stack[-3] = v_218;
    v_218 = stack[-3];
    if (v_218 == nil) goto v_170;
    else goto v_171;
v_170:
    v_218 = stack[-2];
    goto v_150;
v_171:
    stack[0] = stack[-1];
    v_218 = stack[-3];
    if (!car_legal(v_218)) v_218 = carerror(v_218); else
    v_218 = car(v_218);
    {   LispObject fn = basic_elt(env, 0); // pasf_exprng
    v_218 = (*qfn1(fn))(fn, v_218);
    }
    env = stack[-6];
    v_218 = ncons(v_218);
    env = stack[-6];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_218);
    v_218 = stack[-1];
    if (!car_legal(v_218)) v_218 = cdrerror(v_218); else
    v_218 = cdr(v_218);
    stack[-1] = v_218;
    goto v_151;
v_150:
    v_219 = v_218;
    v_218 = v_219;
    if (v_218 == nil) goto v_188;
    v_218 = v_219;
    if (!car_legal(v_218)) v_218 = cdrerror(v_218); else
    v_218 = cdr(v_218);
    if (v_218 == nil) goto v_188;
    v_218 = stack[-5];
    v_218 = cons(v_218, v_219);
    env = stack[-6];
    v_220 = v_218;
    goto v_186;
v_188:
    v_218 = v_219;
    if (v_218 == nil) goto v_197;
    else goto v_198;
v_197:
    v_219 = stack[-5];
    v_218 = basic_elt(env, 2); // and
    if (v_219 == v_218) goto v_202;
    else goto v_203;
v_202:
    v_218 = basic_elt(env, 3); // true
    goto v_201;
v_203:
    v_218 = basic_elt(env, 4); // false
    goto v_201;
    v_218 = nil;
v_201:
    v_220 = v_218;
    goto v_186;
v_198:
    v_218 = v_219;
    if (!car_legal(v_218)) v_218 = carerror(v_218); else
    v_218 = car(v_218);
    v_220 = v_218;
    goto v_186;
    v_220 = nil;
v_186:
    v_219 = nil;
    v_218 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    {   LispObject fn = basic_elt(env, 14); // cl_simpl
    v_218 = (*qfn3(fn))(fn, v_220, v_219, v_218);
    }
    goto v_9;
v_95:
    v_218 = v_220;
v_9:
    ;}  // end of a binding scope
    return onevalue(v_218);
}



setup_type const u33_setup[] =
{
    {"triplesetprolongedby",    G0W2,     G1W2,     CC_triplesetprolongedby,G3W2,G4W2},
    {"*tayexp2q",               G0W1,     CC_Htayexp2q,G2W1,  G3W1,     G4W1},
    {"vdelete",                 G0W2,     G1W2,     CC_vdelete,G3W2,    G4W2},
    {"omatpir",                 CC_omatpir,G1W0,    G2W0,     G3W0,     G4W0},
    {"suchp",                   G0W1,     CC_suchp, G2W1,     G3W1,     G4W1},
    {"*pf2sq",                  G0W1,     CC_Hpf2sq,G2W1,     G3W1,     G4W1},
    {"s_actual_world1",         G0W1,     CC_s_actual_world1,G2W1,G3W1, G4W1},
    {"subs2chk",                G0W1,     CC_subs2chk,G2W1,   G3W1,     G4W1},
    {"simp-prop-condense",      G0W1,     CC_simpKpropKcondense,G2W1,G3W1,G4W1},
    {"lambda_rfde09ec49c92",    G0W2,     G1W2,     CC_lambda_rfde09ec49c92,G3W2,G4W2},
    {"skp_ordp",                G0W2,     G1W2,     CC_skp_ordp,G3W2,   G4W2},
    {"gitimes:",                G0W2,     G1W2,     CC_gitimesT,G3W2,   G4W2},
    {"ofsf_ir2atl",             G0W3,     G1W3,     G2W3,     CC_ofsf_ir2atl,G4W3},
    {"repr_a",                  G0W1,     CC_repr_a,G2W1,     G3W1,     G4W1},
    {"dip_ilcomb2r",            G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_dip_ilcomb2r},
    {"ev_2a",                   G0W1,     CC_ev_2a, G2W1,     G3W1,     G4W1},
    {"bvarrd",                  CC_bvarrd,G1W0,     G2W0,     G3W0,     G4W0},
    {":dmtimeslst",             G0W1,     CC_Tdmtimeslst,G2W1,G3W1,     G4W1},
    {"prop-simp",               G0W2,     G1W2,     CC_propKsimp,G3W2,  G4W2},
    {"red_topred",              G0W2,     G1W2,     CC_red_topred,G3W2, G4W2},
    {"list_is_all_free",        G0W1,     CC_list_is_all_free,G2W1,G3W1,G4W1},
    {"general-horner-rule-mod-p",G0W4up,  G1W4up,   G2W4up,   G3W4up,   CC_generalKhornerKruleKmodKp},
    {"*a2k",                    G0W1,     CC_Ha2k,  G2W1,     G3W1,     G4W1},
    {"formbool",                G0W3,     G1W3,     G2W3,     CC_formbool,G4W3},
    {"talp_sumd",               G0W1,     CC_talp_sumd,G2W1,  G3W1,     G4W1},
    {"sets",                    G0W2,     G1W2,     CC_sets,  G3W2,     G4W2},
    {"alg_plus",                G0W2,     G1W2,     CC_alg_plus,G3W2,   G4W2},
    {"matrixp",                 G0W1,     CC_matrixp,G2W1,    G3W1,     G4W1},
    {"amatch",                  G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_amatch},
    {"groebnormalform",         G0W3,     G1W3,     G2W3,     CC_groebnormalform,G4W3},
    {"evload",                  G0W1,     CC_evload,G2W1,     G3W1,     G4W1},
    {"toolongexpp",             G0W1,     CC_toolongexpp,G2W1,G3W1,     G4W1},
    {"find_buble",              G0W2,     G1W2,     CC_find_buble,G3W2, G4W2},
    {"log_assignment",          G0W2,     G1W2,     CC_log_assignment,G3W2,G4W2},
    {"arglength",               G0W1,     CC_arglength,G2W1,  G3W1,     G4W1},
    {"fs:onep:",                G0W1,     CC_fsTonepT,G2W1,   G3W1,     G4W1},
    {"red=hide",                G0W1,     CC_redMhide,G2W1,   G3W1,     G4W1},
    {"dummyp",                  G0W1,     CC_dummyp,G2W1,     G3W1,     G4W1},
    {"ratdif",                  G0W2,     G1W2,     CC_ratdif,G3W2,     G4W2},
    {"letexprn",                G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_letexprn},
    {"poly-to-vector",          G0W1,     CC_polyKtoKvector,G2W1,G3W1,  G4W1},
    {"lex_process_directive",   CC_lex_process_directive,G1W0,G2W0,G3W0,G4W0},
    {"arg1of2",                 G0W2,     G1W2,     CC_arg1of2,G3W2,    G4W2},
    {"profile_a_package",       G0W1,     CC_profile_a_package,G2W1,G3W1,G4W1},
    {"vp2",                     G0W1,     CC_vp2,   G2W1,     G3W1,     G4W1},
    {"pasf_exprng",             G0W1,     CC_pasf_exprng,G2W1,G3W1,     G4W1},
    {nullptr, 
        reinterpret_cast<no_args *>(
            reinterpret_cast<uintptr_t>("u33")),
        reinterpret_cast<one_arg *>(
            reinterpret_cast<uintptr_t>("103635 4357356 7513239")),
        nullptr, nullptr, nullptr}
};

// end of generated code
