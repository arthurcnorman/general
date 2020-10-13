
// $destdir/u40.c        Machine generated C code

// $Id$

#include "config.h"
#include "headers.h"



// Code for lengthreval

static LispObject CC_lengthreval(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_103, v_104, v_105;
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
    v_103 = stack[-1];
    v_104 = Llength(nil, v_103);
    env = stack[-3];
    v_103 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_104 == v_103) goto v_12;
    v_105 = basic_elt(env, 1); // alg
    v_104 = static_cast<LispObject>(176)+TAG_FIXNUM; // 11
    v_103 = basic_elt(env, 2); // "LENGTH called with wrong number of arguments"
    {   LispObject fn = basic_elt(env, 9); // rerror
    v_103 = (*qfn3(fn))(fn, v_105, v_104, v_103);
    }
    env = stack[-3];
    goto v_10;
v_12:
v_10:
    v_103 = stack[-1];
    if (!car_legal(v_103)) v_103 = carerror(v_103); else
    v_103 = car(v_103);
    stack[-1] = v_103;
    v_103 = stack[-1];
    if (symbolp(v_103)) goto v_26;
    else goto v_25;
v_26:
    v_103 = stack[-1];
    {   LispObject fn = basic_elt(env, 10); // arrayp
    v_103 = (*qfn1(fn))(fn, v_103);
    }
    env = stack[-3];
    if (v_103 == nil) goto v_25;
    v_105 = basic_elt(env, 3); // list
    v_104 = stack[-1];
    v_103 = basic_elt(env, 4); // dimension
    v_103 = get(v_104, v_103);
    return cons(v_105, v_103);
v_25:
    v_103 = stack[-1];
    {   LispObject fn = basic_elt(env, 11); // aeval
    v_103 = (*qfn1(fn))(fn, v_103);
    }
    env = stack[-3];
    stack[-2] = v_103;
    v_103 = stack[-2];
    {   LispObject fn = basic_elt(env, 12); // getrtype
    v_103 = (*qfn1(fn))(fn, v_103);
    }
    env = stack[-3];
    v_105 = v_103;
    if (v_103 == nil) goto v_41;
    v_104 = v_105;
    v_103 = basic_elt(env, 5); // lengthfn
    v_103 = get(v_104, v_103);
    env = stack[-3];
    stack[0] = v_103;
    if (v_103 == nil) goto v_41;
    v_103 = v_105;
    v_104 = basic_elt(env, 6); // sparse
    if (v_103 == v_104) goto v_51;
    else goto v_52;
v_51:
    v_104 = stack[0];
    v_103 = stack[-1];
        return Lapply1(nil, v_104, v_103);
v_52:
    v_104 = stack[0];
    v_103 = stack[-2];
        return Lapply1(nil, v_104, v_103);
    goto v_39;
v_41:
    v_103 = stack[-2];
    if (!consp(v_103)) goto v_63;
    else goto v_64;
v_63:
    v_103 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_8;
v_64:
    v_103 = stack[-2];
    if (!car_legal(v_103)) v_103 = carerror(v_103); else
    v_103 = car(v_103);
    if (symbolp(v_103)) goto v_72;
    v_103 = lisp_true;
    goto v_70;
v_72:
    v_103 = stack[-2];
    if (!car_legal(v_103)) v_104 = carerror(v_103); else
    v_104 = car(v_103);
    v_103 = basic_elt(env, 5); // lengthfn
    v_103 = get(v_104, v_103);
    env = stack[-3];
    stack[0] = v_103;
    v_103 = (v_103 == nil ? lisp_true : nil);
    goto v_70;
    v_103 = nil;
v_70:
    if (v_103 == nil) goto v_68;
    v_103 = v_105;
    if (v_103 == nil) goto v_86;
    v_103 = basic_elt(env, 7); // "LENGTH not defined for argument of type"
    v_104 = v_105;
    v_103 = list2(v_103, v_104);
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 13); // lprie
    v_103 = (*qfn1(fn))(fn, v_103);
    }
    goto v_84;
v_86:
    v_104 = stack[-1];
    v_103 = basic_elt(env, 8); // "LENGTH argument"
    {   LispObject fn = basic_elt(env, 14); // typerr
    v_103 = (*qfn2(fn))(fn, v_104, v_103);
    }
    goto v_84;
v_84:
    goto v_39;
v_68:
    v_104 = stack[0];
    v_103 = stack[-2];
    if (!car_legal(v_103)) v_103 = cdrerror(v_103); else
    v_103 = cdr(v_103);
        return Lapply1(nil, v_104, v_103);
v_39:
    v_103 = nil;
v_8:
    return onevalue(v_103);
}



// Code for ra_intequiv

static LispObject CC_ra_intequiv(LispObject env,
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
    stack[0] = basic_elt(env, 1); // ra_intequiv0
    v_8 = ncons(v_8);
    env = stack[-1];
    {
        LispObject v_10 = stack[0];
        LispObject fn = basic_elt(env, 2); // ra_wrapper
        return (*qfn2(fn))(fn, v_10, v_8);
    }
}



// Code for component_action

static LispObject CC_component_action(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    stack[-2] = v_4;
    stack[-3] = v_3;
    stack[0] = v_2;
// end of prologue
    v_52 = nil;
    v_51 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_51 = cons(v_52, v_51);
    env = stack[-5];
    stack[-4] = v_51;
    v_51 = stack[0];
    if (!car_legal(v_51)) v_51 = cdrerror(v_51); else
    v_51 = cdr(v_51);
    stack[-1] = v_51;
v_15:
    v_51 = stack[-1];
    if (v_51 == nil) goto v_20;
    else goto v_21;
v_20:
    goto v_14;
v_21:
    v_51 = stack[-1];
    if (!car_legal(v_51)) v_51 = carerror(v_51); else
    v_51 = car(v_51);
    stack[0] = v_51;
    v_51 = stack[0];
    if (!car_legal(v_51)) v_52 = carerror(v_51); else
    v_52 = car(v_51);
    v_51 = stack[-3];
    {   LispObject fn = basic_elt(env, 1); // ext_mult
    v_52 = (*qfn2(fn))(fn, v_52, v_51);
    }
    env = stack[-5];
    v_51 = stack[0];
    if (!car_legal(v_51)) v_51 = cdrerror(v_51); else
    v_51 = cdr(v_51);
    v_53 = v_52;
    v_52 = v_51;
    v_51 = v_53;
    if (!car_legal(v_51)) v_51 = carerror(v_51); else
    v_51 = car(v_51);
    if (v_51 == nil) goto v_38;
    stack[0] = stack[-4];
    v_51 = v_53;
    {   LispObject fn = basic_elt(env, 2); // multsq
    v_52 = (*qfn2(fn))(fn, v_51, v_52);
    }
    env = stack[-5];
    v_51 = stack[-2];
    {   LispObject fn = basic_elt(env, 2); // multsq
    v_51 = (*qfn2(fn))(fn, v_52, v_51);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 3); // addsq
    v_51 = (*qfn2(fn))(fn, stack[0], v_51);
    }
    env = stack[-5];
    stack[-4] = v_51;
    goto v_36;
v_38:
v_36:
    v_51 = stack[-1];
    if (!car_legal(v_51)) v_51 = cdrerror(v_51); else
    v_51 = cdr(v_51);
    stack[-1] = v_51;
    goto v_15;
v_14:
    v_51 = stack[-4];
    return onevalue(v_51);
}



// Code for fctargs

static LispObject CC_fctargs(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_13, v_14;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_13 = v_2;
// end of prologue
    v_14 = qvalue(basic_elt(env, 1)); // depl!*
    v_14 = Lassoc(nil, v_13, v_14);
    v_13 = v_14;
    if (v_14 == nil) goto v_7;
    if (!car_legal(v_13)) v_13 = cdrerror(v_13); else
    v_13 = cdr(v_13);
    goto v_5;
v_7:
    v_13 = nil;
v_5:
    return onevalue(v_13);
}



// Code for rl_mk!*fof

static LispObject CC_rl_mkHfof(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // rl_csimpl
    v_7 = (*qfn1(fn))(fn, v_7);
    }
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // rl_mk!*fof1
        return (*qfn1(fn))(fn, v_7);
    }
}



// Code for rl_bnfsimpl

static LispObject CC_rl_bnfsimpl(LispObject env,
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
    stack[0] = qvalue(basic_elt(env, 1)); // rl_bnfsimpl!*
    v_10 = list2(v_11, v_10);
    env = stack[-1];
    {
        LispObject v_13 = stack[0];
        LispObject fn = basic_elt(env, 2); // apply
        return (*qfn2(fn))(fn, v_13, v_10);
    }
}



// Code for repr_n

static LispObject CC_repr_n(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_33, v_34, v_35;
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
    v_34 = v_2;
// end of prologue
    v_33 = v_34;
    if (!car_legal(v_33)) v_33 = cdrerror(v_33); else
    v_33 = cdr(v_33);
    if (!car_legal(v_33)) v_33 = cdrerror(v_33); else
    v_33 = cdr(v_33);
    if (!car_legal(v_33)) v_33 = carerror(v_33); else
    v_33 = car(v_33);
    if (v_33 == nil) goto v_6;
    else goto v_7;
v_6:
    v_33 = basic_elt(env, 1); // "repr_n : invalid REPR structure"
    v_33 = ncons(v_33);
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // rederr
        return (*qfn1(fn))(fn, v_33);
    }
v_7:
    v_33 = v_34;
    if (!car_legal(v_33)) v_33 = cdrerror(v_33); else
    v_33 = cdr(v_33);
    if (!car_legal(v_33)) v_33 = cdrerror(v_33); else
    v_33 = cdr(v_33);
    if (!car_legal(v_33)) v_33 = cdrerror(v_33); else
    v_33 = cdr(v_33);
    if (!car_legal(v_33)) v_33 = cdrerror(v_33); else
    v_33 = cdr(v_33);
    if (!car_legal(v_33)) v_35 = carerror(v_33); else
    v_35 = car(v_33);
    v_33 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_35 == v_33) goto v_15;
    else goto v_16;
v_15:
    v_33 = nil;
    goto v_5;
v_16:
    v_33 = v_34;
    if (!car_legal(v_33)) v_33 = cdrerror(v_33); else
    v_33 = cdr(v_33);
    if (!car_legal(v_33)) v_33 = cdrerror(v_33); else
    v_33 = cdr(v_33);
    if (!car_legal(v_33)) v_33 = carerror(v_33); else
    v_33 = car(v_33);
    if (!car_legal(v_33)) v_33 = carerror(v_33); else
    v_33 = car(v_33);
    if (!car_legal(v_33)) v_33 = carerror(v_33); else
    v_33 = car(v_33);
    goto v_5;
    v_33 = nil;
v_5:
    return onevalue(v_33);
}



// Code for matrixrd

static LispObject CC_matrixrd(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// end of prologue
    v_66 = qvalue(basic_elt(env, 1)); // atts
    v_65 = basic_elt(env, 2); // (type)
    {   LispObject fn = basic_elt(env, 9); // retattributes
    v_65 = (*qfn2(fn))(fn, v_66, v_65);
    }
    env = stack[-3];
    stack[0] = v_65;
    v_65 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-1] = v_65;
    v_65 = nil;
    stack[-2] = v_65;
v_17:
    v_66 = stack[-1];
    v_65 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_66 == v_65) goto v_21;
    goto v_16;
v_21:
    {   LispObject fn = basic_elt(env, 10); // lex
    v_65 = (*qfn0(fn))(fn);
    }
    env = stack[-3];
    v_66 = qvalue(basic_elt(env, 3)); // char
    v_65 = basic_elt(env, 4); // (m a t r i x r o w)
    if (equal(v_66, v_65)) goto v_28;
    else goto v_29;
v_28:
    {   LispObject fn = basic_elt(env, 11); // matrixrowrd
    v_65 = (*qfn0(fn))(fn);
    }
    env = stack[-3];
    v_66 = v_65;
    v_65 = stack[-2];
    if (v_65 == nil) goto v_36;
    v_65 = v_66;
    v_65 = ncons(v_65);
    env = stack[-3];
    v_65 = Lappend_2(nil, stack[-2], v_65);
    env = stack[-3];
    stack[-2] = v_65;
    goto v_34;
v_36:
    v_65 = v_66;
    v_65 = ncons(v_65);
    env = stack[-3];
    stack[-2] = v_65;
    goto v_34;
v_34:
    v_66 = qvalue(basic_elt(env, 3)); // char
    v_65 = basic_elt(env, 5); // (!/ m a t r i x r o w)
    if (equal(v_66, v_65)) goto v_49;
    v_66 = basic_elt(env, 6); // "</matrixrow>"
    v_65 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    {   LispObject fn = basic_elt(env, 12); // errorml
    v_65 = (*qfn2(fn))(fn, v_66, v_65);
    }
    env = stack[-3];
    goto v_47;
v_49:
v_47:
    goto v_27;
v_29:
    v_65 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-1] = v_65;
    goto v_27;
v_27:
    goto v_17;
v_16:
    stack[-1] = basic_elt(env, 7); // matrix
    v_67 = basic_elt(env, 8); // matrixrow
    v_66 = stack[-2];
    v_65 = nil;
    v_65 = list2star(v_67, v_66, v_65);
    {
        LispObject v_71 = stack[-1];
        LispObject v_72 = stack[0];
        return list2star(v_71, v_72, v_65);
    }
    return onevalue(v_65);
}



// Code for fnreval

static LispObject CC_fnreval(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    stack[-4] = v_4;
    stack[-1] = v_3;
    stack[0] = v_2;
// end of prologue
    stack[-2] = nil;
v_9:
    v_90 = stack[0];
    if (v_90 == nil) goto v_12;
    else goto v_13;
v_12:
    v_90 = stack[-2];
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn1(fn))(fn, v_90);
    }
v_13:
    v_91 = stack[-1];
    v_90 = lisp_true;
    if (v_91 == v_90) goto v_17;
    else goto v_18;
v_17:
    v_91 = stack[-2];
    v_90 = stack[0];
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn2(fn))(fn, v_91, v_90);
    }
v_18:
    v_90 = stack[-1];
    if (v_90 == nil) goto v_24;
    else goto v_25;
v_24:
    stack[-5] = stack[-2];
    v_90 = stack[0];
    stack[-3] = v_90;
    v_90 = stack[-3];
    if (v_90 == nil) goto v_38;
    else goto v_39;
v_38:
    v_90 = nil;
    goto v_33;
v_39:
    v_90 = stack[-3];
    if (!car_legal(v_90)) v_90 = carerror(v_90); else
    v_90 = car(v_90);
    v_91 = v_90;
    v_90 = stack[-4];
    {   LispObject fn = basic_elt(env, 2); // reval1
    v_90 = (*qfn2(fn))(fn, v_91, v_90);
    }
    env = stack[-6];
    v_90 = ncons(v_90);
    env = stack[-6];
    stack[-1] = v_90;
    stack[-2] = v_90;
v_34:
    v_90 = stack[-3];
    if (!car_legal(v_90)) v_90 = cdrerror(v_90); else
    v_90 = cdr(v_90);
    stack[-3] = v_90;
    v_90 = stack[-3];
    if (v_90 == nil) goto v_53;
    else goto v_54;
v_53:
    v_90 = stack[-2];
    goto v_33;
v_54:
    stack[0] = stack[-1];
    v_90 = stack[-3];
    if (!car_legal(v_90)) v_90 = carerror(v_90); else
    v_90 = car(v_90);
    v_91 = v_90;
    v_90 = stack[-4];
    {   LispObject fn = basic_elt(env, 2); // reval1
    v_90 = (*qfn2(fn))(fn, v_91, v_90);
    }
    env = stack[-6];
    v_90 = ncons(v_90);
    env = stack[-6];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_90);
    v_90 = stack[-1];
    if (!car_legal(v_90)) v_90 = cdrerror(v_90); else
    v_90 = cdr(v_90);
    stack[-1] = v_90;
    goto v_34;
v_33:
    {
        LispObject v_98 = stack[-5];
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn2(fn))(fn, v_98, v_90);
    }
v_25:
    v_90 = stack[-1];
    if (!car_legal(v_90)) v_90 = carerror(v_90); else
    v_90 = car(v_90);
    if (v_90 == nil) goto v_74;
    v_90 = stack[0];
    if (!car_legal(v_90)) v_90 = carerror(v_90); else
    v_90 = car(v_90);
    v_91 = v_90;
    goto v_72;
v_74:
    v_90 = stack[0];
    if (!car_legal(v_90)) v_91 = carerror(v_90); else
    v_91 = car(v_90);
    v_90 = stack[-4];
    {   LispObject fn = basic_elt(env, 2); // reval1
    v_90 = (*qfn2(fn))(fn, v_91, v_90);
    }
    env = stack[-6];
    v_91 = v_90;
    goto v_72;
    v_91 = nil;
v_72:
    v_90 = stack[-2];
    v_90 = cons(v_91, v_90);
    env = stack[-6];
    stack[-2] = v_90;
    v_90 = stack[0];
    if (!car_legal(v_90)) v_90 = cdrerror(v_90); else
    v_90 = cdr(v_90);
    stack[0] = v_90;
    v_90 = stack[-1];
    if (!car_legal(v_90)) v_90 = cdrerror(v_90); else
    v_90 = cdr(v_90);
    stack[-1] = v_90;
    goto v_9;
    v_90 = nil;
    return onevalue(v_90);
}



// Code for evweightedcomp1

static LispObject CC_evweightedcomp1(LispObject env,
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
    v_11 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {
        LispObject fn = basic_elt(env, 1); // evweightedcomp2
        return (*qfn3(fn))(fn, v_11, v_10, v_9);
    }
}



// Code for pa_list2vect

static LispObject CC_pa_list2vect(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    stack[0] = v_2;
// end of prologue
    stack[-4] = nil;
    v_102 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-3] = v_102;
    v_102 = stack[-5];
    v_102 = sub1(v_102);
    env = stack[-7];
    v_102 = Lmkvect(nil, v_102);
    env = stack[-7];
    stack[-6] = v_102;
    v_102 = stack[0];
    stack[-2] = v_102;
v_17:
    v_102 = stack[-2];
    if (v_102 == nil) goto v_21;
    else goto v_22;
v_21:
    goto v_16;
v_22:
    v_102 = stack[-2];
    if (!car_legal(v_102)) v_102 = carerror(v_102); else
    v_102 = car(v_102);
    stack[0] = v_102;
    v_103 = basic_elt(env, 1); // min
    v_102 = stack[0];
    v_102 = cons(v_103, v_102);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 2); // eval
    v_103 = (*qfn1(fn))(fn, v_102);
    }
    env = stack[-7];
    v_102 = stack[-4];
    v_102 = cons(v_103, v_102);
    env = stack[-7];
    stack[-4] = v_102;
    v_102 = stack[0];
    stack[-1] = v_102;
v_37:
    v_102 = stack[-1];
    if (v_102 == nil) goto v_41;
    else goto v_42;
v_41:
    goto v_36;
v_42:
    v_102 = stack[-1];
    if (!car_legal(v_102)) v_102 = carerror(v_102); else
    v_102 = car(v_102);
    stack[0] = stack[-6];
    v_103 = sub1(v_102);
    env = stack[-7];
    v_102 = stack[-4];
    if (!car_legal(v_102)) v_102 = carerror(v_102); else
    v_102 = car(v_102);
    v_102 = Lputv(nil, stack[0], v_103, v_102);
    env = stack[-7];
    v_102 = stack[-1];
    if (!car_legal(v_102)) v_102 = cdrerror(v_102); else
    v_102 = cdr(v_102);
    stack[-1] = v_102;
    goto v_37;
v_36:
    v_102 = stack[-2];
    if (!car_legal(v_102)) v_102 = cdrerror(v_102); else
    v_102 = cdr(v_102);
    stack[-2] = v_102;
    goto v_17;
v_16:
    v_102 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-1] = v_102;
v_62:
    v_103 = stack[-5];
    v_102 = stack[-1];
    v_102 = difference2(v_103, v_102);
    env = stack[-7];
    v_102 = Lminusp(nil, v_102);
    env = stack[-7];
    if (v_102 == nil) goto v_67;
    goto v_61;
v_67:
    stack[0] = stack[-6];
    v_102 = stack[-1];
    v_102 = sub1(v_102);
    env = stack[-7];
    v_102 = Lgetv(nil, stack[0], v_102);
    env = stack[-7];
    if (v_102 == nil) goto v_75;
    else goto v_76;
v_75:
    v_103 = stack[-3];
    v_102 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_103 == v_102) goto v_83;
    else goto v_84;
v_83:
    v_102 = stack[-1];
    stack[-3] = v_102;
    v_103 = stack[-3];
    v_102 = stack[-4];
    v_102 = cons(v_103, v_102);
    env = stack[-7];
    stack[-4] = v_102;
    goto v_82;
v_84:
v_82:
    stack[0] = stack[-6];
    v_102 = stack[-1];
    v_103 = sub1(v_102);
    env = stack[-7];
    v_102 = stack[-3];
    v_102 = Lputv(nil, stack[0], v_103, v_102);
    env = stack[-7];
    goto v_74;
v_76:
v_74:
    v_102 = stack[-1];
    v_102 = add1(v_102);
    env = stack[-7];
    stack[-1] = v_102;
    goto v_62;
v_61:
    v_102 = stack[-4];
    v_103 = Lreverse(nil, v_102);
    v_102 = stack[-6];
    return cons(v_103, v_102);
    return onevalue(v_102);
}



// Code for fd2q

static LispObject CC_fd2q(LispObject env,
                         LispObject v_2)
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
v_6:
    v_48 = stack[0];
    if (!consp(v_48)) goto v_9;
    else goto v_10;
v_9:
    v_49 = stack[0];
    v_48 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_49, v_48);
v_10:
    v_48 = stack[0];
    if (!car_legal(v_48)) v_49 = carerror(v_48); else
    v_49 = car(v_48);
    v_48 = basic_elt(env, 1); // !:ar!:
    if (v_49 == v_48) goto v_15;
    else goto v_16;
v_15:
    v_48 = stack[0];
    if (!car_legal(v_48)) v_48 = cdrerror(v_48); else
    v_48 = cdr(v_48);
    stack[0] = v_48;
    goto v_6;
v_16:
    v_48 = stack[0];
    if (!car_legal(v_48)) v_49 = carerror(v_48); else
    v_49 = car(v_48);
    v_48 = basic_elt(env, 2); // !:rn!:
    if (v_49 == v_48) goto v_22;
    else goto v_23;
v_22:
    v_48 = stack[0];
    if (!car_legal(v_48)) v_48 = cdrerror(v_48); else
    v_48 = cdr(v_48);
    goto v_5;
v_23:
    v_48 = stack[0];
    if (!car_legal(v_48)) v_48 = carerror(v_48); else
    v_48 = car(v_48);
    if (!car_legal(v_48)) v_49 = carerror(v_48); else
    v_49 = car(v_48);
    v_48 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_48 = cons(v_49, v_48);
    env = stack[-2];
    v_49 = ncons(v_48);
    env = stack[-2];
    v_48 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-1] = cons(v_49, v_48);
    env = stack[-2];
    v_48 = stack[0];
    if (!car_legal(v_48)) v_48 = carerror(v_48); else
    v_48 = car(v_48);
    if (!car_legal(v_48)) v_48 = cdrerror(v_48); else
    v_48 = cdr(v_48);
    {   LispObject fn = basic_elt(env, 0); // fd2q
    v_48 = (*qfn1(fn))(fn, v_48);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // multsq
    stack[-1] = (*qfn2(fn))(fn, stack[-1], v_48);
    }
    env = stack[-2];
    v_48 = stack[0];
    if (!car_legal(v_48)) v_48 = cdrerror(v_48); else
    v_48 = cdr(v_48);
    {   LispObject fn = basic_elt(env, 0); // fd2q
    v_48 = (*qfn1(fn))(fn, v_48);
    }
    env = stack[-2];
    {
        LispObject v_52 = stack[-1];
        LispObject fn = basic_elt(env, 4); // addsq
        return (*qfn2(fn))(fn, v_52, v_48);
    }
    v_48 = nil;
v_5:
    return onevalue(v_48);
}



// Code for outer!-simpsqrt

static LispObject CC_outerKsimpsqrt(LispObject env,
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
    v_15 = qvalue(basic_elt(env, 1)); // !*inside!-int!*
    if (v_15 == nil) goto v_7;
    v_15 = v_16;
    {
        LispObject fn = basic_elt(env, 2); // proper!-simpsqrt
        return (*qfn1(fn))(fn, v_15);
    }
v_7:
    v_15 = v_16;
    {
        LispObject fn = basic_elt(env, 3); // simpsqrt
        return (*qfn1(fn))(fn, v_15);
    }
    v_15 = nil;
    return onevalue(v_15);
}



// Code for oddext

static LispObject CC_oddext(LispObject env,
                         LispObject v_3)
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
        push(v_3);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_3);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    v_39 = v_3;
// end of prologue
// Binding odd_var
// FLUIDBIND: reloadenv=3 litvec-offset=1 saveloc=2
{   bind_fluid_stack bind_fluid_var(-3, 1, -2);
    setvalue(basic_elt(env, 1), v_39); // odd_var
    v_40 = qvalue(basic_elt(env, 1)); // odd_var
    v_39 = qvalue(basic_elt(env, 2)); // all_parametric_odd!*
    v_39 = Lmember(nil, v_40, v_39);
    if (v_39 == nil) goto v_13;
    stack[0] = basic_elt(env, 3); // ext
    v_40 = qvalue(basic_elt(env, 1)); // odd_var
    v_39 = qvalue(basic_elt(env, 2)); // all_parametric_odd!*
    {   LispObject fn = basic_elt(env, 7); // cde_position
    v_39 = (*qfn2(fn))(fn, v_40, v_39);
    }
    env = stack[-3];
    v_39 = list2(stack[0], v_39);
    goto v_11;
v_13:
    v_40 = qvalue(basic_elt(env, 1)); // odd_var
    v_39 = qvalue(basic_elt(env, 4)); // all_principal_odd!*
    v_39 = Lmember(nil, v_40, v_39);
    if (v_39 == nil) goto v_23;
    stack[-1] = basic_elt(env, 3); // ext
    stack[0] = qvalue(basic_elt(env, 5)); // n_all_parametric_ext
    v_40 = qvalue(basic_elt(env, 1)); // odd_var
    v_39 = qvalue(basic_elt(env, 4)); // all_principal_odd!*
    {   LispObject fn = basic_elt(env, 7); // cde_position
    v_39 = (*qfn2(fn))(fn, v_40, v_39);
    }
    env = stack[-3];
    v_39 = plus2(stack[0], v_39);
    env = stack[-3];
    v_39 = list2(stack[-1], v_39);
    goto v_11;
v_23:
    v_39 = basic_elt(env, 6); // "the argument of oddext must be an odd variable"
    {   LispObject fn = basic_elt(env, 8); // rederr
    v_39 = (*qfn1(fn))(fn, v_39);
    }
    goto v_11;
    v_39 = nil;
v_11:
    ;}  // end of a binding scope
    return onevalue(v_39);
}



// Code for polynomread

static LispObject CC_polynomread(LispObject env,
                         LispObject v_2)
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
    v_78 = stack[0];
    if (v_78 == nil) goto v_6;
    else goto v_7;
v_6:
    v_78 = nil;
    return ncons(v_78);
v_7:
    v_78 = stack[0];
    if (!consp(v_78)) goto v_15;
    else goto v_16;
v_15:
    v_78 = lisp_true;
    goto v_14;
v_16:
    v_78 = stack[0];
    if (!car_legal(v_78)) v_78 = carerror(v_78); else
    v_78 = car(v_78);
    v_78 = (consp(v_78) ? nil : lisp_true);
    goto v_14;
    v_78 = nil;
v_14:
    if (v_78 == nil) goto v_12;
    v_79 = stack[0];
    v_78 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_79 = Cremainder(v_79, v_78);
    env = stack[-2];
    v_78 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_78 = Leqn_2(nil, v_79, v_78);
    env = stack[-2];
    if (v_78 == nil) goto v_27;
    {   LispObject fn = basic_elt(env, 3); // createmonomunit
    v_80 = (*qfn0(fn))(fn);
    }
    v_79 = nil;
    v_78 = nil;
    return list2star(v_80, v_79, v_78);
v_27:
    v_78 = nil;
    return ncons(v_78);
    v_78 = nil;
    goto v_5;
v_12:
    v_78 = stack[0];
    if (!car_legal(v_78)) v_78 = carerror(v_78); else
    v_78 = car(v_78);
    if (!car_legal(v_78)) v_78 = carerror(v_78); else
    v_78 = car(v_78);
    if (!car_legal(v_78)) v_79 = carerror(v_78); else
    v_79 = car(v_78);
    v_78 = qvalue(basic_elt(env, 1)); // fluidbibasisvariables
    v_78 = Lmember(nil, v_79, v_78);
    if (v_78 == nil) goto v_42;
    v_78 = stack[0];
    if (!car_legal(v_78)) v_78 = carerror(v_78); else
    v_78 = car(v_78);
    if (!car_legal(v_78)) v_78 = cdrerror(v_78); else
    v_78 = cdr(v_78);
    {   LispObject fn = basic_elt(env, 0); // polynomread
    v_80 = (*qfn1(fn))(fn, v_78);
    }
    env = stack[-2];
    v_78 = stack[0];
    if (!car_legal(v_78)) v_78 = carerror(v_78); else
    v_78 = car(v_78);
    if (!car_legal(v_78)) v_78 = carerror(v_78); else
    v_78 = car(v_78);
    if (!car_legal(v_78)) v_79 = carerror(v_78); else
    v_79 = car(v_78);
    v_78 = qvalue(basic_elt(env, 2)); // fluidbibasissinglevariablemonomialsa
    v_78 = Lassoc(nil, v_79, v_78);
    if (!car_legal(v_78)) v_78 = cdrerror(v_78); else
    v_78 = cdr(v_78);
    {   LispObject fn = basic_elt(env, 4); // polynommultiplybymonom
    stack[-1] = (*qfn2(fn))(fn, v_80, v_78);
    }
    env = stack[-2];
    v_78 = stack[0];
    if (!car_legal(v_78)) v_78 = cdrerror(v_78); else
    v_78 = cdr(v_78);
    {   LispObject fn = basic_elt(env, 0); // polynomread
    v_78 = (*qfn1(fn))(fn, v_78);
    }
    env = stack[-2];
    {
        LispObject v_83 = stack[-1];
        LispObject fn = basic_elt(env, 5); // polynomadd
        return (*qfn2(fn))(fn, v_83, v_78);
    }
v_42:
    v_78 = stack[0];
    if (!car_legal(v_78)) v_78 = carerror(v_78); else
    v_78 = car(v_78);
    if (!car_legal(v_78)) v_78 = cdrerror(v_78); else
    v_78 = cdr(v_78);
    {   LispObject fn = basic_elt(env, 0); // polynomread
    stack[-1] = (*qfn1(fn))(fn, v_78);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // createmonomunit
    v_78 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 4); // polynommultiplybymonom
    stack[-1] = (*qfn2(fn))(fn, stack[-1], v_78);
    }
    env = stack[-2];
    v_78 = stack[0];
    if (!car_legal(v_78)) v_78 = cdrerror(v_78); else
    v_78 = cdr(v_78);
    {   LispObject fn = basic_elt(env, 0); // polynomread
    v_78 = (*qfn1(fn))(fn, v_78);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 5); // polynomadd
    v_78 = (*qfn2(fn))(fn, stack[-1], v_78);
    }
    v_78 = nil;
    goto v_5;
    v_78 = nil;
v_5:
    return onevalue(v_78);
}



// Code for expf

static LispObject CC_expf(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_127 = stack[-1];
    if (v_127 == nil) goto v_7;
    else goto v_8;
v_7:
    v_127 = nil;
    goto v_6;
v_8:
    v_128 = stack[-1];
    v_127 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_128 == v_127) goto v_11;
    else goto v_12;
v_11:
    v_127 = stack[-1];
    goto v_6;
v_12:
    v_127 = stack[-1];
    if (!consp(v_127)) goto v_16;
    else goto v_17;
v_16:
    stack[-2] = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_127 = stack[0];
    v_127 = negate(v_127);
    env = stack[-3];
    v_127 = Lexpt(nil, stack[-1], v_127);
    env = stack[-3];
    {
        LispObject v_133 = stack[-2];
        LispObject fn = basic_elt(env, 3); // mkrn
        return (*qfn2(fn))(fn, v_133, v_127);
    }
v_17:
    v_127 = stack[-1];
    if (!consp(v_127)) goto v_29;
    else goto v_30;
v_29:
    v_127 = lisp_true;
    goto v_28;
v_30:
    v_127 = stack[-1];
    if (!car_legal(v_127)) v_127 = carerror(v_127); else
    v_127 = car(v_127);
    v_127 = (consp(v_127) ? nil : lisp_true);
    goto v_28;
    v_127 = nil;
v_28:
    if (v_127 == nil) goto v_26;
    v_128 = stack[-1];
    v_127 = stack[0];
    {
        LispObject fn = basic_elt(env, 4); // !:expt
        return (*qfn2(fn))(fn, v_128, v_127);
    }
v_26:
    v_127 = stack[-1];
    if (!car_legal(v_127)) v_127 = cdrerror(v_127); else
    v_127 = cdr(v_127);
    if (v_127 == nil) goto v_42;
    v_128 = stack[-1];
    v_127 = stack[0];
    {
        LispObject fn = basic_elt(env, 5); // mksp!*
        return (*qfn2(fn))(fn, v_128, v_127);
    }
v_42:
    v_127 = stack[-1];
    if (!car_legal(v_127)) v_127 = carerror(v_127); else
    v_127 = car(v_127);
    if (!car_legal(v_127)) v_127 = carerror(v_127); else
    v_127 = car(v_127);
    if (!car_legal(v_127)) v_128 = cdrerror(v_127); else
    v_128 = cdr(v_127);
    v_127 = qvalue(basic_elt(env, 1)); // frlis!*
    v_127 = Lmemq(nil, v_128, v_127);
    if (v_127 == nil) goto v_49;
    v_129 = basic_elt(env, 2); // expt
    v_127 = stack[-1];
    if (!car_legal(v_127)) v_127 = carerror(v_127); else
    v_127 = car(v_127);
    if (!car_legal(v_127)) v_127 = carerror(v_127); else
    v_127 = car(v_127);
    if (!car_legal(v_127)) v_128 = carerror(v_127); else
    v_128 = car(v_127);
    v_127 = stack[-1];
    if (!car_legal(v_127)) v_127 = carerror(v_127); else
    v_127 = car(v_127);
    if (!car_legal(v_127)) v_127 = carerror(v_127); else
    v_127 = car(v_127);
    if (!car_legal(v_127)) v_127 = cdrerror(v_127); else
    v_127 = cdr(v_127);
    v_127 = list3(v_129, v_128, v_127);
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 6); // fkern
    v_127 = (*qfn1(fn))(fn, v_127);
    }
    env = stack[-3];
    if (!car_legal(v_127)) v_128 = carerror(v_127); else
    v_128 = car(v_127);
    v_127 = stack[0];
    {   LispObject fn = basic_elt(env, 7); // to
    stack[-2] = (*qfn2(fn))(fn, v_128, v_127);
    }
    env = stack[-3];
    v_127 = stack[-1];
    if (!car_legal(v_127)) v_127 = carerror(v_127); else
    v_127 = car(v_127);
    if (!car_legal(v_127)) v_128 = cdrerror(v_127); else
    v_128 = cdr(v_127);
    v_127 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // expf
    v_127 = (*qfn2(fn))(fn, v_128, v_127);
    }
    env = stack[-3];
    v_127 = cons(stack[-2], v_127);
    return ncons(v_127);
v_49:
    v_127 = stack[-1];
    if (!car_legal(v_127)) v_127 = carerror(v_127); else
    v_127 = car(v_127);
    if (!car_legal(v_127)) v_127 = carerror(v_127); else
    v_127 = car(v_127);
    if (!car_legal(v_127)) v_128 = cdrerror(v_127); else
    v_128 = cdr(v_127);
    v_127 = stack[0];
    v_127 = times2(v_128, v_127);
    env = stack[-3];
    stack[-2] = v_127;
    v_128 = stack[-2];
    v_127 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_127 = static_cast<LispObject>(greaterp2(v_128, v_127));
    v_127 = v_127 ? lisp_true : nil;
    env = stack[-3];
    if (v_127 == nil) goto v_89;
    v_127 = stack[-1];
    if (!car_legal(v_127)) v_127 = carerror(v_127); else
    v_127 = car(v_127);
    if (!car_legal(v_127)) v_127 = carerror(v_127); else
    v_127 = car(v_127);
    if (!car_legal(v_127)) v_127 = carerror(v_127); else
    v_127 = car(v_127);
    {   LispObject fn = basic_elt(env, 8); // sfp
    v_127 = (*qfn1(fn))(fn, v_127);
    }
    env = stack[-3];
    if (v_127 == nil) goto v_89;
    v_127 = stack[-1];
    if (!car_legal(v_127)) v_127 = carerror(v_127); else
    v_127 = car(v_127);
    if (!car_legal(v_127)) v_127 = carerror(v_127); else
    v_127 = car(v_127);
    if (!car_legal(v_127)) v_128 = carerror(v_127); else
    v_128 = car(v_127);
    v_127 = stack[-2];
    {   LispObject fn = basic_elt(env, 9); // exptf
    stack[-2] = (*qfn2(fn))(fn, v_128, v_127);
    }
    env = stack[-3];
    v_127 = stack[-1];
    if (!car_legal(v_127)) v_127 = carerror(v_127); else
    v_127 = car(v_127);
    if (!car_legal(v_127)) v_128 = cdrerror(v_127); else
    v_128 = cdr(v_127);
    v_127 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // expf
    v_127 = (*qfn2(fn))(fn, v_128, v_127);
    }
    env = stack[-3];
    {
        LispObject v_134 = stack[-2];
        LispObject fn = basic_elt(env, 10); // multf
        return (*qfn2(fn))(fn, v_134, v_127);
    }
v_89:
    v_127 = stack[-1];
    if (!car_legal(v_127)) v_127 = carerror(v_127); else
    v_127 = car(v_127);
    if (!car_legal(v_127)) v_127 = carerror(v_127); else
    v_127 = car(v_127);
    if (!car_legal(v_127)) v_128 = carerror(v_127); else
    v_128 = car(v_127);
    v_127 = stack[-2];
    {   LispObject fn = basic_elt(env, 7); // to
    stack[-2] = (*qfn2(fn))(fn, v_128, v_127);
    }
    env = stack[-3];
    v_127 = stack[-1];
    if (!car_legal(v_127)) v_127 = carerror(v_127); else
    v_127 = car(v_127);
    if (!car_legal(v_127)) v_128 = cdrerror(v_127); else
    v_128 = cdr(v_127);
    v_127 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // expf
    v_127 = (*qfn2(fn))(fn, v_128, v_127);
    }
    env = stack[-3];
    v_127 = cons(stack[-2], v_127);
    return ncons(v_127);
    v_127 = nil;
    goto v_6;
    v_127 = nil;
v_6:
    return onevalue(v_127);
}



// Code for mri_2ofsfat

static LispObject CC_mri_2ofsfat(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_10 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // mri_op
    stack[-1] = (*qfn1(fn))(fn, v_10);
    }
    env = stack[-2];
    v_10 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // mri_arg2l
    v_11 = (*qfn1(fn))(fn, v_10);
    }
    v_10 = nil;
    {
        LispObject v_14 = stack[-1];
        return list3(v_14, v_11, v_10);
    }
}



// Code for quotfx1

static LispObject CC_quotfx1(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_233, v_234, v_235, v_236;
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
    v_233 = stack[-8];
    if (v_233 == nil) goto v_7;
    else goto v_8;
v_7:
    v_234 = stack[-8];
    v_233 = stack[-7];
    {
        LispObject fn = basic_elt(env, 1); // quotfxerr
        return (*qfn2(fn))(fn, v_234, v_233);
    }
v_8:
    v_234 = stack[-8];
    v_233 = stack[-7];
    if (equal(v_234, v_233)) goto v_13;
    else goto v_14;
v_13:
    v_233 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_6;
v_14:
    v_234 = stack[-7];
    v_233 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_234 == v_233) goto v_18;
    else goto v_19;
v_18:
    v_233 = stack[-8];
    goto v_6;
v_19:
    v_233 = stack[-7];
    if (!consp(v_233)) goto v_27;
    else goto v_28;
v_27:
    v_233 = lisp_true;
    goto v_26;
v_28:
    v_233 = stack[-7];
    if (!car_legal(v_233)) v_233 = carerror(v_233); else
    v_233 = car(v_233);
    v_233 = (consp(v_233) ? nil : lisp_true);
    goto v_26;
    v_233 = nil;
v_26:
    if (v_233 == nil) goto v_24;
    v_234 = stack[-8];
    v_233 = stack[-7];
    {
        LispObject fn = basic_elt(env, 2); // quotfdx
        return (*qfn2(fn))(fn, v_234, v_233);
    }
v_24:
    v_233 = stack[-8];
    if (!consp(v_233)) goto v_43;
    else goto v_44;
v_43:
    v_233 = lisp_true;
    goto v_42;
v_44:
    v_233 = stack[-8];
    if (!car_legal(v_233)) v_233 = carerror(v_233); else
    v_233 = car(v_233);
    v_233 = (consp(v_233) ? nil : lisp_true);
    goto v_42;
    v_233 = nil;
v_42:
    if (v_233 == nil) goto v_40;
    v_234 = stack[-8];
    v_233 = stack[-7];
    {
        LispObject fn = basic_elt(env, 1); // quotfxerr
        return (*qfn2(fn))(fn, v_234, v_233);
    }
v_40:
    v_233 = stack[-8];
    if (!car_legal(v_233)) v_233 = carerror(v_233); else
    v_233 = car(v_233);
    if (!car_legal(v_233)) v_233 = carerror(v_233); else
    v_233 = car(v_233);
    if (!car_legal(v_233)) v_234 = carerror(v_233); else
    v_234 = car(v_233);
    v_233 = stack[-7];
    if (!car_legal(v_233)) v_233 = carerror(v_233); else
    v_233 = car(v_233);
    if (!car_legal(v_233)) v_233 = carerror(v_233); else
    v_233 = car(v_233);
    if (!car_legal(v_233)) v_233 = carerror(v_233); else
    v_233 = car(v_233);
    if (v_234 == v_233) goto v_55;
    else goto v_56;
v_55:
    stack[-9] = nil;
    stack[-1] = nil;
    v_233 = stack[-7];
    if (!car_legal(v_233)) v_233 = carerror(v_233); else
    v_233 = car(v_233);
    if (!car_legal(v_233)) v_233 = carerror(v_233); else
    v_233 = car(v_233);
    if (!car_legal(v_233)) v_233 = cdrerror(v_233); else
    v_233 = cdr(v_233);
    stack[-5] = v_233;
v_77:
    v_233 = stack[-8];
    if (!car_legal(v_233)) v_233 = carerror(v_233); else
    v_233 = car(v_233);
    if (!car_legal(v_233)) v_233 = carerror(v_233); else
    v_233 = car(v_233);
    if (!car_legal(v_233)) v_234 = cdrerror(v_233); else
    v_234 = cdr(v_233);
    stack[-6] = v_234;
    v_233 = stack[-5];
    v_233 = static_cast<LispObject>(lessp2(v_234, v_233));
    v_233 = v_233 ? lisp_true : nil;
    env = stack[-10];
    if (v_233 == nil) goto v_90;
    v_234 = stack[-8];
    v_233 = stack[-7];
    {
        LispObject fn = basic_elt(env, 1); // quotfxerr
        return (*qfn2(fn))(fn, v_234, v_233);
    }
v_90:
    v_233 = stack[-8];
    {   LispObject fn = basic_elt(env, 3); // lt!*
    v_233 = (*qfn1(fn))(fn, v_233);
    }
    env = stack[-10];
    stack[0] = v_233;
    v_233 = stack[-7];
    {   LispObject fn = basic_elt(env, 3); // lt!*
    v_233 = (*qfn1(fn))(fn, v_233);
    }
    env = stack[-10];
    v_234 = stack[-7];
    if (!car_legal(v_234)) v_234 = carerror(v_234); else
    v_234 = car(v_234);
    if (!car_legal(v_234)) v_234 = carerror(v_234); else
    v_234 = car(v_234);
    if (!car_legal(v_234)) v_234 = carerror(v_234); else
    v_234 = car(v_234);
    stack[-4] = v_234;
    v_234 = stack[0];
    if (!car_legal(v_234)) v_234 = cdrerror(v_234); else
    v_234 = cdr(v_234);
    if (!car_legal(v_233)) v_233 = cdrerror(v_233); else
    v_233 = cdr(v_233);
    {   LispObject fn = basic_elt(env, 0); // quotfx1
    v_233 = (*qfn2(fn))(fn, v_234, v_233);
    }
    env = stack[-10];
    stack[-3] = v_233;
    v_234 = stack[-6];
    v_233 = stack[-5];
    v_233 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_234) - static_cast<std::uintptr_t>(v_233) + TAG_FIXNUM);
    stack[0] = v_233;
    v_234 = stack[0];
    v_233 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_234 == v_233) goto v_118;
    else goto v_119;
v_118:
    v_234 = stack[-1];
    v_233 = stack[-3];
    {
        LispObject fn = basic_elt(env, 4); // rnconc
        return (*qfn2(fn))(fn, v_234, v_233);
    }
v_119:
    v_234 = stack[-4];
    v_233 = stack[0];
    {   LispObject fn = basic_elt(env, 5); // to
    v_233 = (*qfn2(fn))(fn, v_234, v_233);
    }
    env = stack[-10];
    stack[-2] = v_233;
    v_233 = stack[-9];
    if (v_233 == nil) goto v_130;
    else goto v_131;
v_130:
    v_236 = stack[-8];
    v_235 = stack[-4];
    v_234 = stack[-6];
    v_233 = stack[0];
    v_233 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_234) - static_cast<std::uintptr_t>(v_233) + TAG_FIXNUM);
    v_233 = static_cast<LispObject>(static_cast<std::intptr_t>(v_233) - 0x10);
    {   LispObject fn = basic_elt(env, 6); // cutf
    v_233 = (*qfn3(fn))(fn, v_236, v_235, v_233);
    }
    env = stack[-10];
    stack[-8] = v_233;
    goto v_129;
v_131:
v_129:
    v_233 = lisp_true;
    stack[-9] = v_233;
    v_236 = stack[-7];
    v_235 = stack[-4];
    v_234 = stack[-5];
    v_233 = stack[0];
    v_233 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_234) - static_cast<std::uintptr_t>(v_233) + TAG_FIXNUM);
    v_233 = static_cast<LispObject>(static_cast<std::intptr_t>(v_233) - 0x10);
    {   LispObject fn = basic_elt(env, 6); // cutf
    v_233 = (*qfn3(fn))(fn, v_236, v_235, v_233);
    }
    env = stack[-10];
    stack[-7] = v_233;
    stack[-6] = stack[-8];
    v_234 = stack[0];
    v_233 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_234 == v_233) goto v_153;
    else goto v_154;
v_153:
    v_233 = stack[-7];
    stack[0] = v_233;
    goto v_152;
v_154:
    v_234 = stack[-2];
    v_233 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_233 = cons(v_234, v_233);
    env = stack[-10];
    v_234 = ncons(v_233);
    env = stack[-10];
    v_233 = stack[-7];
    {   LispObject fn = basic_elt(env, 7); // multf
    v_233 = (*qfn2(fn))(fn, v_234, v_233);
    }
    env = stack[-10];
    stack[0] = v_233;
    goto v_152;
    stack[0] = nil;
v_152:
    v_233 = stack[-3];
    {   LispObject fn = basic_elt(env, 8); // negf
    v_233 = (*qfn1(fn))(fn, v_233);
    }
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 7); // multf
    v_233 = (*qfn2(fn))(fn, stack[0], v_233);
    }
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 9); // addf
    v_233 = (*qfn2(fn))(fn, stack[-6], v_233);
    }
    env = stack[-10];
    stack[-8] = v_233;
    v_233 = stack[-8];
    if (v_233 == nil) goto v_171;
    v_233 = stack[-8];
    if (!consp(v_233)) goto v_181;
    else goto v_182;
v_181:
    v_233 = lisp_true;
    goto v_180;
v_182:
    v_233 = stack[-8];
    if (!car_legal(v_233)) v_233 = carerror(v_233); else
    v_233 = car(v_233);
    v_233 = (consp(v_233) ? nil : lisp_true);
    goto v_180;
    v_233 = nil;
v_180:
    if (v_233 == nil) goto v_178;
    v_233 = lisp_true;
    goto v_176;
v_178:
    v_233 = stack[-8];
    if (!car_legal(v_233)) v_233 = carerror(v_233); else
    v_233 = car(v_233);
    if (!car_legal(v_233)) v_233 = carerror(v_233); else
    v_233 = car(v_233);
    if (!car_legal(v_233)) v_234 = carerror(v_233); else
    v_234 = car(v_233);
    v_233 = stack[-4];
    v_233 = (v_234 == v_233 ? lisp_true : nil);
    v_233 = (v_233 == nil ? lisp_true : nil);
    goto v_176;
    v_233 = nil;
v_176:
    if (v_233 == nil) goto v_171;
    v_234 = stack[-8];
    v_233 = stack[-7];
    {
        LispObject fn = basic_elt(env, 1); // quotfxerr
        return (*qfn2(fn))(fn, v_234, v_233);
    }
v_171:
    stack[0] = stack[-1];
    v_234 = stack[-2];
    v_233 = stack[-3];
    v_233 = cons(v_234, v_233);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 10); // aconc!*
    v_233 = (*qfn2(fn))(fn, stack[0], v_233);
    }
    env = stack[-10];
    stack[-1] = v_233;
    v_233 = stack[-8];
    if (v_233 == nil) goto v_210;
    else goto v_211;
v_210:
    v_233 = stack[-1];
    goto v_76;
v_211:
    goto v_77;
v_76:
    goto v_6;
v_56:
    v_233 = stack[-8];
    if (!car_legal(v_233)) v_233 = carerror(v_233); else
    v_233 = car(v_233);
    if (!car_legal(v_233)) v_233 = carerror(v_233); else
    v_233 = car(v_233);
    if (!car_legal(v_233)) v_234 = carerror(v_233); else
    v_234 = car(v_233);
    v_233 = stack[-7];
    if (!car_legal(v_233)) v_233 = carerror(v_233); else
    v_233 = car(v_233);
    if (!car_legal(v_233)) v_233 = carerror(v_233); else
    v_233 = car(v_233);
    if (!car_legal(v_233)) v_233 = carerror(v_233); else
    v_233 = car(v_233);
    {   LispObject fn = basic_elt(env, 11); // ordop
    v_233 = (*qfn2(fn))(fn, v_234, v_233);
    }
    env = stack[-10];
    if (v_233 == nil) goto v_215;
    v_234 = stack[-8];
    v_233 = stack[-7];
    {
        LispObject fn = basic_elt(env, 12); // quotkx
        return (*qfn2(fn))(fn, v_234, v_233);
    }
v_215:
    v_234 = stack[-8];
    v_233 = stack[-7];
    {
        LispObject fn = basic_elt(env, 1); // quotfxerr
        return (*qfn2(fn))(fn, v_234, v_233);
    }
    v_233 = nil;
v_6:
    return onevalue(v_233);
}



// Code for rl_multsurep

static LispObject CC_rl_multsurep(LispObject env,
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
    stack[0] = qvalue(basic_elt(env, 1)); // rl_multsurep!*
    v_10 = list2(v_11, v_10);
    env = stack[-1];
    {
        LispObject v_13 = stack[0];
        LispObject fn = basic_elt(env, 2); // apply
        return (*qfn2(fn))(fn, v_13, v_10);
    }
}



// Code for upperlimitrd

static LispObject CC_upperlimitrd(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil);
    stack_popper stack_popper_var(2);
// end of prologue
    {   LispObject fn = basic_elt(env, 6); // lex
    v_30 = (*qfn0(fn))(fn);
    }
    env = stack[-1];
    v_31 = qvalue(basic_elt(env, 1)); // char
    v_30 = basic_elt(env, 2); // (u p l i m i t)
    if (equal(v_31, v_30)) goto v_10;
    v_31 = basic_elt(env, 3); // "<uplimit>"
    v_30 = static_cast<LispObject>(160)+TAG_FIXNUM; // 10
    {   LispObject fn = basic_elt(env, 7); // errorml
    v_30 = (*qfn2(fn))(fn, v_31, v_30);
    }
    env = stack[-1];
    goto v_8;
v_10:
v_8:
    {   LispObject fn = basic_elt(env, 8); // mathml
    v_30 = (*qfn0(fn))(fn);
    }
    env = stack[-1];
    stack[0] = v_30;
    {   LispObject fn = basic_elt(env, 6); // lex
    v_30 = (*qfn0(fn))(fn);
    }
    env = stack[-1];
    v_31 = qvalue(basic_elt(env, 1)); // char
    v_30 = basic_elt(env, 4); // (!/ u p l i m i t)
    if (equal(v_31, v_30)) goto v_20;
    else goto v_21;
v_20:
    v_30 = stack[0];
    goto v_5;
v_21:
    v_31 = basic_elt(env, 5); // "</uplimit>"
    v_30 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    {   LispObject fn = basic_elt(env, 7); // errorml
    v_30 = (*qfn2(fn))(fn, v_31, v_30);
    }
    goto v_19;
v_19:
    v_30 = nil;
v_5:
    return onevalue(v_30);
}



// Code for compl

static LispObject CC_compl(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_34 = nil;
v_8:
    v_32 = stack[-1];
    if (v_32 == nil) goto v_11;
    else goto v_12;
v_11:
    v_32 = v_34;
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn1(fn))(fn, v_32);
    }
v_12:
    v_32 = stack[-1];
    if (!car_legal(v_32)) v_33 = carerror(v_32); else
    v_33 = car(v_32);
    v_32 = stack[0];
    v_32 = Lmember(nil, v_33, v_32);
    if (v_32 == nil) goto v_17;
    v_32 = stack[-1];
    if (!car_legal(v_32)) v_32 = cdrerror(v_32); else
    v_32 = cdr(v_32);
    stack[-1] = v_32;
    goto v_8;
v_17:
    v_32 = stack[-1];
    if (!car_legal(v_32)) v_32 = carerror(v_32); else
    v_32 = car(v_32);
    v_33 = v_34;
    v_32 = cons(v_32, v_33);
    env = stack[-2];
    v_34 = v_32;
    v_32 = stack[-1];
    if (!car_legal(v_32)) v_32 = cdrerror(v_32); else
    v_32 = cdr(v_32);
    stack[-1] = v_32;
    goto v_8;
    v_32 = nil;
    return onevalue(v_32);
}



// Code for suspend

static LispObject CC_suspend(LispObject env,
                         LispObject v_5, LispObject v_6,
                         LispObject v_7, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_43, v_44, v_45, v_46;
    LispObject v_8, v_9;
    if (_a4up_ == nil)
        aerror1("not enough arguments provided", basic_elt(env, 0));
    v_8 = car(_a4up_); _a4up_ = cdr(_a4up_);
    if (_a4up_ == nil)
        aerror1("not enough arguments provided", basic_elt(env, 0));
    v_9 = car(_a4up_); _a4up_ = cdr(_a4up_);
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
        push(v_5,v_6,v_7,v_8,v_9);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_9,v_8,v_7,v_6,v_5);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil, nil, nil, nil, nil);
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(10);
// copy arguments values to proper place
    stack[-7] = v_9;
    v_44 = v_8;
    v_45 = v_7;
    v_46 = v_6;
    v_43 = v_5;
// end of prologue
// Binding op
// FLUIDBIND: reloadenv=9 litvec-offset=1 saveloc=8
{   bind_fluid_stack bind_fluid_var(-9, 1, -8);
// Binding r
// FLUIDBIND: reloadenv=9 litvec-offset=2 saveloc=6
{   bind_fluid_stack bind_fluid_var(-9, 2, -6);
// Binding p
// FLUIDBIND: reloadenv=9 litvec-offset=3 saveloc=5
{   bind_fluid_stack bind_fluid_var(-9, 3, -5);
    setvalue(basic_elt(env, 1), v_43); // op
    v_43 = v_46;
    setvalue(basic_elt(env, 2), v_43); // r
    v_43 = v_45;
    setvalue(basic_elt(env, 3), v_43); // p
    v_43 = qvalue(basic_elt(env, 2)); // r
    if (!car_legal(v_43)) stack[-4] = carerror(v_43); else
    stack[-4] = car(v_43);
    v_43 = qvalue(basic_elt(env, 3)); // p
    if (!car_legal(v_43)) stack[-3] = carerror(v_43); else
    stack[-3] = car(v_43);
    stack[-2] = v_44;
    stack[-1] = qvalue(basic_elt(env, 1)); // op
    v_43 = qvalue(basic_elt(env, 2)); // r
    if (!car_legal(v_43)) stack[0] = cdrerror(v_43); else
    stack[0] = cdr(v_43);
    v_44 = qvalue(basic_elt(env, 1)); // op
    v_43 = qvalue(basic_elt(env, 3)); // p
    if (!car_legal(v_43)) v_43 = cdrerror(v_43); else
    v_43 = cdr(v_43);
    v_43 = cons(v_44, v_43);
    env = stack[-9];
    v_43 = ncons(v_43);
    env = stack[-9];
    v_44 = acons(stack[-1], stack[0], v_43);
    env = stack[-9];
    v_43 = stack[-7];
    v_43 = cons(v_44, v_43);
    env = stack[-9];
    v_43 = ncons(v_43);
    env = stack[-9];
    {   LispObject fn = basic_elt(env, 4); // amatch
    v_43 = (*qfn4up(fn))(fn, stack[-4], stack[-3], stack[-2], v_43);
    }
    ;}  // end of a binding scope
    ;}  // end of a binding scope
    ;}  // end of a binding scope
    return onevalue(v_43);
}



// Code for vdpequal

static LispObject CC_vdpequal(LispObject env,
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
    v_48 = stack[-1];
    v_47 = stack[0];
    if (v_48 == v_47) goto v_7;
    else goto v_8;
v_7:
    v_47 = lisp_true;
    goto v_6;
v_8:
    v_48 = stack[-1];
    v_47 = basic_elt(env, 1); // number
    {   LispObject fn = basic_elt(env, 2); // vdpgetprop
    stack[-2] = (*qfn2(fn))(fn, v_48, v_47);
    }
    env = stack[-3];
    v_48 = stack[0];
    v_47 = basic_elt(env, 1); // number
    {   LispObject fn = basic_elt(env, 2); // vdpgetprop
    v_47 = (*qfn2(fn))(fn, v_48, v_47);
    }
    env = stack[-3];
    v_49 = stack[-2];
    v_48 = v_47;
    v_47 = v_49;
    if (v_47 == nil) goto v_27;
    else goto v_28;
v_27:
    v_47 = nil;
    goto v_26;
v_28:
    v_47 = v_49;
    v_47 = (equal(v_47, v_48) ? lisp_true : nil);
    goto v_26;
    v_47 = nil;
v_26:
    if (v_47 == nil) goto v_24;
    else goto v_23;
v_24:
    v_47 = stack[-1];
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    if (!car_legal(v_47)) v_48 = carerror(v_47); else
    v_48 = car(v_47);
    v_47 = stack[0];
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    if (!car_legal(v_47)) v_47 = carerror(v_47); else
    v_47 = car(v_47);
    {
        LispObject fn = basic_elt(env, 3); // dipequal
        return (*qfn2(fn))(fn, v_48, v_47);
    }
v_23:
    goto v_6;
    v_47 = nil;
v_6:
    return onevalue(v_47);
}



// Code for evinsert

static LispObject CC_evinsert(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_48, v_49, v_50;
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
    v_50 = nil;
v_10:
    v_48 = stack[-3];
    if (v_48 == nil) goto v_17;
    else goto v_18;
v_17:
    v_48 = lisp_true;
    goto v_16;
v_18:
    v_48 = stack[0];
    v_48 = (v_48 == nil ? lisp_true : nil);
    goto v_16;
    v_48 = nil;
v_16:
    if (v_48 == nil) goto v_14;
    v_48 = v_50;
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn1(fn))(fn, v_48);
    }
v_14:
    v_48 = stack[0];
    if (!car_legal(v_48)) v_49 = carerror(v_48); else
    v_49 = car(v_48);
    v_48 = stack[-2];
    if (equal(v_49, v_48)) goto v_27;
    else goto v_28;
v_27:
    stack[0] = v_50;
    v_49 = stack[-1];
    v_48 = stack[-3];
    if (!car_legal(v_48)) v_48 = cdrerror(v_48); else
    v_48 = cdr(v_48);
    v_48 = cons(v_49, v_48);
    env = stack[-4];
    {
        LispObject v_55 = stack[0];
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn2(fn))(fn, v_55, v_48);
    }
v_28:
    v_48 = stack[-3];
    if (!car_legal(v_48)) v_48 = carerror(v_48); else
    v_48 = car(v_48);
    v_49 = v_50;
    v_48 = cons(v_48, v_49);
    env = stack[-4];
    v_50 = v_48;
    v_48 = stack[-3];
    if (!car_legal(v_48)) v_48 = cdrerror(v_48); else
    v_48 = cdr(v_48);
    stack[-3] = v_48;
    v_48 = stack[0];
    if (!car_legal(v_48)) v_48 = cdrerror(v_48); else
    v_48 = cdr(v_48);
    stack[0] = v_48;
    goto v_10;
    v_48 = nil;
    return onevalue(v_48);
}



// Code for simpwedge

static LispObject CC_simpwedge(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // partitwedge
    v_7 = (*qfn1(fn))(fn, v_7);
    }
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // !*pf2sq
        return (*qfn1(fn))(fn, v_7);
    }
}



// Code for divide!-by!-power!-of!-ten

static LispObject CC_divideKbyKpowerKofKten(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    v_51 = stack[0];
    v_50 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_50 = static_cast<LispObject>(lessp2(v_51, v_50));
    v_50 = v_50 ? lisp_true : nil;
    env = stack[-3];
    if (v_50 == nil) goto v_8;
    v_50 = basic_elt(env, 0); // divide!-by!-power!-of!-ten
    {
        LispObject fn = basic_elt(env, 3); // bflerrmsg
        return (*qfn1(fn))(fn, v_50);
    }
v_8:
    v_50 = qvalue(basic_elt(env, 1)); // bften!*
    stack[-2] = v_50;
v_20:
    v_51 = stack[0];
    v_50 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_50 = static_cast<LispObject>(greaterp2(v_51, v_50));
    v_50 = v_50 ? lisp_true : nil;
    env = stack[-3];
    if (v_50 == nil) goto v_23;
    else goto v_24;
v_23:
    goto v_19;
v_24:
    v_50 = stack[0];
    v_50 = Levenp(nil, v_50);
    env = stack[-3];
    if (v_50 == nil) goto v_31;
    else goto v_32;
v_31:
    v_52 = stack[-1];
    v_51 = stack[-2];
    v_50 = qvalue(basic_elt(env, 2)); // !:bprec!:
    {   LispObject fn = basic_elt(env, 4); // divide!:
    v_50 = (*qfn3(fn))(fn, v_52, v_51, v_50);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 5); // normbf
    v_50 = (*qfn1(fn))(fn, v_50);
    }
    env = stack[-3];
    stack[-1] = v_50;
    goto v_30;
v_32:
v_30:
    v_51 = stack[0];
    v_50 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    {   LispObject fn = basic_elt(env, 6); // lshift
    v_50 = (*qfn2(fn))(fn, v_51, v_50);
    }
    env = stack[-3];
    stack[0] = v_50;
    v_51 = stack[-2];
    v_50 = stack[-2];
    {   LispObject fn = basic_elt(env, 7); // times!:
    v_51 = (*qfn2(fn))(fn, v_51, v_50);
    }
    env = stack[-3];
    v_50 = qvalue(basic_elt(env, 2)); // !:bprec!:
    {   LispObject fn = basic_elt(env, 8); // cut!:mt
    v_50 = (*qfn2(fn))(fn, v_51, v_50);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 5); // normbf
    v_50 = (*qfn1(fn))(fn, v_50);
    }
    env = stack[-3];
    stack[-2] = v_50;
    goto v_20;
v_19:
    v_50 = stack[-1];
    goto v_6;
    v_50 = nil;
v_6:
    return onevalue(v_50);
}



// Code for cvitimes2

static LispObject CC_cvitimes2(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_38, v_39, v_40, v_41;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_40 = v_3;
    v_41 = v_2;
// end of prologue
    v_39 = v_41;
    v_38 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_39 == v_38) goto v_11;
    else goto v_12;
v_11:
    v_38 = lisp_true;
    goto v_10;
v_12:
    v_39 = v_40;
    v_38 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_38 = (v_39 == v_38 ? lisp_true : nil);
    goto v_10;
    v_38 = nil;
v_10:
    if (v_38 == nil) goto v_8;
    v_38 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_6;
v_8:
    v_39 = v_41;
    v_38 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_39 == v_38) goto v_22;
    else goto v_23;
v_22:
    v_38 = v_40;
    goto v_6;
v_23:
    v_39 = v_40;
    v_38 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_39 == v_38) goto v_27;
    else goto v_28;
v_27:
    v_38 = v_41;
    goto v_6;
v_28:
    v_38 = basic_elt(env, 1); // times
    v_39 = v_41;
    return list3(v_38, v_39, v_40);
    v_38 = nil;
v_6:
    return onevalue(v_38);
}



// Code for ratnump

static LispObject CC_ratnump(LispObject env,
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
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_29 = v_2;
// end of prologue
    {   LispObject fn = basic_elt(env, 2); // simp!*
    v_30 = (*qfn1(fn))(fn, v_29);
    }
    env = stack[0];
    v_29 = v_30;
    if (!car_legal(v_30)) v_30 = carerror(v_30); else
    v_30 = car(v_30);
    if (!consp(v_30)) goto v_10;
    else goto v_11;
v_10:
    v_30 = lisp_true;
    goto v_9;
v_11:
    v_30 = v_29;
    if (!car_legal(v_30)) v_30 = carerror(v_30); else
    v_30 = car(v_30);
    if (!car_legal(v_30)) v_30 = carerror(v_30); else
    v_30 = car(v_30);
    v_31 = basic_elt(env, 1); // !:rn!:
    v_30 = (v_30 == v_31 ? lisp_true : nil);
    goto v_9;
    v_30 = nil;
v_9:
    if (v_30 == nil) goto v_7;
    if (!car_legal(v_29)) v_29 = cdrerror(v_29); else
    v_29 = cdr(v_29);
    v_29 = (consp(v_29) ? nil : lisp_true);
    goto v_5;
v_7:
    v_29 = nil;
    goto v_5;
    v_29 = nil;
v_5:
    return onevalue(v_29);
}



// Code for miller!-rabin

static LispObject CC_millerKrabin(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_104, v_105;
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
    stack[0] = v_2;
// end of prologue
    v_105 = stack[-2];
    v_104 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_105 == v_104) goto v_13;
    else goto v_14;
v_13:
    v_104 = nil;
    goto v_9;
v_14:
    v_105 = stack[-2];
    v_104 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_105 = Cremainder(v_105, v_104);
    env = stack[-4];
    v_104 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_105 == v_104) goto v_18;
    else goto v_19;
v_18:
    v_105 = stack[-2];
    v_104 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_104 = (v_105 == v_104 ? lisp_true : nil);
    goto v_9;
v_19:
    v_105 = stack[-2];
    v_104 = static_cast<LispObject>(112)+TAG_FIXNUM; // 7
    v_104 = static_cast<LispObject>(lesseq2(v_105, v_104));
    v_104 = v_104 ? lisp_true : nil;
    env = stack[-4];
    if (v_104 == nil) goto v_28;
    v_104 = lisp_true;
    goto v_9;
v_28:
    v_104 = stack[-2];
    v_104 = sub1(v_104);
    env = stack[-4];
    stack[-1] = v_104;
    v_104 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-3] = v_104;
v_38:
    v_105 = stack[-1];
    v_104 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_105 = Cremainder(v_105, v_104);
    env = stack[-4];
    v_104 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_105 == v_104) goto v_42;
    goto v_37;
v_42:
    v_105 = stack[-1];
    v_104 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_104 = quot2(v_105, v_104);
    env = stack[-4];
    stack[-1] = v_104;
    v_104 = stack[-3];
    v_104 = add1(v_104);
    env = stack[-4];
    stack[-3] = v_104;
    goto v_38;
v_37:
    v_104 = stack[-2];
    {   LispObject fn = basic_elt(env, 1); // set!-modulus
    v_104 = (*qfn1(fn))(fn, v_104);
    }
    env = stack[-4];
    v_105 = stack[0];
    v_104 = stack[-2];
    v_104 = Cremainder(v_105, v_104);
    env = stack[-4];
    stack[0] = v_104;
    v_105 = stack[0];
    v_104 = stack[-1];
    v_104 = Lmodular_expt(nil, v_105, v_104);
    env = stack[-4];
    stack[-1] = v_104;
    v_105 = stack[-1];
    v_104 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_105 == v_104) goto v_67;
    else goto v_68;
v_67:
    v_104 = lisp_true;
    goto v_66;
v_68:
    stack[0] = stack[-1];
    v_104 = stack[-2];
    v_104 = sub1(v_104);
    env = stack[-4];
    v_104 = (equal(stack[0], v_104) ? lisp_true : nil);
    goto v_66;
    v_104 = nil;
v_66:
    if (v_104 == nil) goto v_64;
    v_104 = lisp_true;
    goto v_9;
v_64:
v_10:
    v_105 = stack[-3];
    v_104 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_105 == v_104) goto v_81;
    else goto v_82;
v_81:
    v_104 = nil;
    goto v_9;
v_82:
    v_105 = stack[-1];
    v_104 = stack[-1];
    v_104 = Lmodular_times(nil, v_105, v_104);
    env = stack[-4];
    stack[-1] = v_104;
    v_105 = stack[-1];
    v_104 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_105 == v_104) goto v_91;
    else goto v_92;
v_91:
    v_104 = nil;
    goto v_9;
v_92:
    stack[0] = stack[-1];
    v_104 = stack[-2];
    v_104 = sub1(v_104);
    env = stack[-4];
    if (equal(stack[0], v_104)) goto v_96;
    else goto v_97;
v_96:
    v_104 = lisp_true;
    goto v_9;
v_97:
    v_104 = stack[-3];
    v_104 = sub1(v_104);
    env = stack[-4];
    stack[-3] = v_104;
    goto v_10;
v_9:
    return onevalue(v_104);
}



// Code for dfp!-sub

static LispObject CC_dfpKsub(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_114, v_115, v_116;
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
    v_114 = stack[-3];
    if (!car_legal(v_114)) v_114 = cdrerror(v_114); else
    v_114 = cdr(v_114);
    if (!car_legal(v_114)) v_114 = carerror(v_114); else
    v_114 = car(v_114);
    v_115 = v_114;
    v_114 = v_115;
    if (!car_legal(v_114)) v_114 = cdrerror(v_114); else
    v_114 = cdr(v_114);
    stack[-5] = v_114;
    v_114 = v_115;
    if (!car_legal(v_114)) v_115 = carerror(v_114); else
    v_115 = car(v_114);
    stack[-2] = v_115;
    v_114 = basic_elt(env, 1); // generic_function
    v_114 = get(v_115, v_114);
    env = stack[-6];
    stack[-1] = v_114;
    v_114 = stack[-5];
    if (v_114 == nil) goto v_24;
    else goto v_25;
v_24:
    v_114 = nil;
    v_115 = stack[-1];
    v_116 = v_115;
v_31:
    v_115 = v_116;
    if (v_115 == nil) goto v_35;
    else goto v_36;
v_35:
    goto v_30;
v_36:
    v_115 = v_116;
    if (!car_legal(v_115)) v_115 = carerror(v_115); else
    v_115 = car(v_115);
    if (v_114 == nil) goto v_44;
    else goto v_43;
v_44:
    v_114 = stack[-4];
    v_114 = Lassoc(nil, v_115, v_114);
v_43:
    v_115 = v_116;
    if (!car_legal(v_115)) v_115 = cdrerror(v_115); else
    v_115 = cdr(v_115);
    v_116 = v_115;
    goto v_31;
v_30:
    if (v_114 == nil) goto v_54;
    v_114 = stack[-1];
    stack[-5] = v_114;
    goto v_52;
v_54:
v_52:
    goto v_23;
v_25:
v_23:
    stack[0] = stack[-4];
    v_115 = basic_elt(env, 2); // list
    v_114 = stack[-5];
    v_114 = cons(v_115, v_114);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 4); // listsub
    v_114 = (*qfn2(fn))(fn, stack[0], v_114);
    }
    env = stack[-6];
    if (!car_legal(v_114)) v_114 = cdrerror(v_114); else
    v_114 = cdr(v_114);
    stack[-5] = v_114;
    v_115 = stack[-2];
    v_114 = stack[-4];
    v_115 = Lassoc(nil, v_115, v_114);
    v_114 = v_115;
    if (v_115 == nil) goto v_70;
    else goto v_71;
v_70:
    v_115 = stack[-2];
    v_114 = stack[-1];
    v_115 = cons(v_115, v_114);
    env = stack[-6];
    v_114 = stack[-4];
    v_115 = Lassoc(nil, v_115, v_114);
    v_114 = v_115;
    v_115 = (v_115 == nil ? lisp_true : nil);
    goto v_69;
v_71:
    v_115 = nil;
    goto v_69;
    v_115 = nil;
v_69:
    if (v_115 == nil) goto v_67;
    stack[0] = basic_elt(env, 3); // dfp
    v_115 = stack[-2];
    v_114 = stack[-5];
    v_115 = cons(v_115, v_114);
    v_114 = stack[-3];
    if (!car_legal(v_114)) v_114 = cdrerror(v_114); else
    v_114 = cdr(v_114);
    if (!car_legal(v_114)) v_114 = cdrerror(v_114); else
    v_114 = cdr(v_114);
    if (!car_legal(v_114)) v_114 = carerror(v_114); else
    v_114 = car(v_114);
    {
        LispObject v_123 = stack[0];
        return list3(v_123, v_115, v_114);
    }
v_67:
    if (!car_legal(v_114)) v_114 = cdrerror(v_114); else
    v_114 = cdr(v_114);
    {   LispObject fn = basic_elt(env, 5); // reval
    v_114 = (*qfn1(fn))(fn, v_114);
    }
    env = stack[-6];
    stack[0] = v_114;
    v_114 = stack[-5];
    if (v_114 == nil) goto v_101;
    v_115 = stack[-1];
    v_114 = stack[-5];
    {   LispObject fn = basic_elt(env, 6); // pair
    v_114 = (*qfn2(fn))(fn, v_115, v_114);
    }
    env = stack[-6];
    v_115 = v_114;
    goto v_99;
v_101:
    v_115 = nil;
v_99:
    v_114 = stack[-4];
    {   LispObject fn = basic_elt(env, 7); // dfp!-sub1
    v_114 = (*qfn3(fn))(fn, stack[0], v_115, v_114);
    }
    env = stack[-6];
    v_116 = basic_elt(env, 3); // dfp
    v_115 = v_114;
    v_114 = stack[-3];
    if (!car_legal(v_114)) v_114 = cdrerror(v_114); else
    v_114 = cdr(v_114);
    if (!car_legal(v_114)) v_114 = cdrerror(v_114); else
    v_114 = cdr(v_114);
    if (!car_legal(v_114)) v_114 = carerror(v_114); else
    v_114 = car(v_114);
    return list3(v_116, v_115, v_114);
    return onevalue(v_114);
}



// Code for redall

static LispObject CC_redall(LispObject env,
                         LispObject v_3, LispObject v_4,
                         LispObject v_5)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_184, v_185, v_186;
#ifdef CHECK_STACK
    if_check_stack;
#endif
#ifdef CONSERVATIVE
    poll();
#else // CONSERVATIVE
    if (++reclaim_trigger_count == reclaim_trigger_target ||
        stack >= stackLimit)
    {
        push(v_3,v_4,v_5);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_5,v_4,v_3);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil, nil, nil, nil, nil);
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(10);
// copy arguments values to proper place
    stack[-7] = v_5;
    v_185 = v_4;
    v_184 = v_3;
// end of prologue
// Binding gg!*
// FLUIDBIND: reloadenv=9 litvec-offset=1 saveloc=8
{   bind_fluid_stack bind_fluid_var(-9, 1, -8);
    setvalue(basic_elt(env, 1), v_184); // gg!*
    v_184 = v_185;
    stack[-6] = v_184;
    v_184 = nil;
    setvalue(basic_elt(env, 2), v_184); // shortway!*
    setvalue(basic_elt(env, 3), v_184); // thirdway!*
    v_184 = lisp_true;
    stack[-1] = v_184;
v_25:
    v_184 = stack[-6];
    if (v_184 == nil) goto v_28;
    else goto v_29;
v_28:
    goto v_24;
v_29:
    v_184 = stack[-6];
    v_184 = Lreverse(nil, v_184);
    env = stack[-9];
    if (!car_legal(v_184)) v_184 = carerror(v_184); else
    v_184 = car(v_184);
    stack[-5] = v_184;
    v_185 = stack[-5];
    v_184 = stack[-6];
    v_184 = Ldelete(nil, v_185, v_184);
    env = stack[-9];
    stack[-6] = v_184;
    v_184 = stack[-5];
    if (!car_legal(v_184)) v_184 = carerror(v_184); else
    v_184 = car(v_184);
    stack[-2] = v_184;
    v_185 = qvalue(basic_elt(env, 4)); // gv!*
    v_184 = stack[-2];
    v_184 = Lgetv(nil, v_185, v_184);
    env = stack[-9];
    stack[-4] = v_184;
    v_184 = qvalue(basic_elt(env, 5)); // path
    if (v_184 == nil) goto v_46;
    v_184 = stack[-1];
    if (v_184 == nil) goto v_51;
    v_184 = stack[-4];
    {   LispObject fn = basic_elt(env, 10); // ljet
    v_184 = (*qfn1(fn))(fn, v_184);
    }
    env = stack[-9];
    v_184 = Lprinc(nil, v_184);
    env = stack[-9];
    v_184 = basic_elt(env, 6); // " ==> "
    v_184 = Lprinc(nil, v_184);
    env = stack[-9];
    goto v_49;
v_51:
    v_184 = stack[-4];
    {   LispObject fn = basic_elt(env, 10); // ljet
    v_184 = (*qfn1(fn))(fn, v_184);
    }
    env = stack[-9];
    v_184 = Lprinc(nil, v_184);
    env = stack[-9];
    v_184 = basic_elt(env, 7); // " --> "
    v_184 = Lprinc(nil, v_184);
    env = stack[-9];
    goto v_49;
v_49:
    goto v_44;
v_46:
v_44:
    stack[-3] = qvalue(basic_elt(env, 4)); // gv!*
    stack[0] = stack[-2];
    v_186 = stack[-4];
    v_185 = qvalue(basic_elt(env, 1)); // gg!*
    v_184 = stack[-7];
    {   LispObject fn = basic_elt(env, 11); // nf
    v_184 = (*qfn3(fn))(fn, v_186, v_185, v_184);
    }
    env = stack[-9];
    v_184 = Lputv(nil, stack[-3], stack[0], v_184);
    env = stack[-9];
    stack[-5] = v_184;
    v_184 = stack[-5];
    if (v_184 == nil) goto v_78;
    v_184 = stack[-5];
    {   LispObject fn = basic_elt(env, 10); // ljet
    v_184 = (*qfn1(fn))(fn, v_184);
    }
    env = stack[-9];
    goto v_76;
v_78:
    v_184 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_76;
    v_184 = nil;
v_76:
    stack[-3] = v_184;
    v_184 = qvalue(basic_elt(env, 5)); // path
    if (v_184 == nil) goto v_88;
    v_184 = stack[-3];
    v_184 = Lprinc(nil, v_184);
    env = stack[-9];
    v_184 = Lterpri(nil);
    env = stack[-9];
    goto v_86;
v_88:
v_86:
    v_184 = stack[-5];
    if (v_184 == nil) goto v_96;
    else goto v_97;
v_96:
    goto v_95;
v_97:
    v_184 = stack[-3];
    {   LispObject fn = basic_elt(env, 12); // ord
    v_185 = (*qfn1(fn))(fn, v_184);
    }
    env = stack[-9];
    v_184 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_185 == v_184) goto v_100;
    else goto v_101;
v_100:
    v_185 = stack[-5];
    v_184 = qvalue(basic_elt(env, 8)); // conds!*
    v_184 = cons(v_185, v_184);
    env = stack[-9];
    setvalue(basic_elt(env, 8), v_184); // conds!*
    goto v_95;
v_101:
    v_184 = stack[-5];
    {   LispObject fn = basic_elt(env, 10); // ljet
    stack[0] = (*qfn1(fn))(fn, v_184);
    }
    env = stack[-9];
    v_184 = stack[-4];
    {   LispObject fn = basic_elt(env, 10); // ljet
    v_184 = (*qfn1(fn))(fn, v_184);
    }
    env = stack[-9];
    if (equal(stack[0], v_184)) goto v_113;
    v_184 = lisp_true;
    setvalue(basic_elt(env, 2), v_184); // shortway!*
    goto v_111;
v_113:
v_111:
    v_184 = stack[-1];
    if (v_184 == nil) goto v_125;
    else goto v_126;
v_125:
    v_185 = stack[-5];
    v_184 = stack[-4];
    v_184 = Lneq_2(nil, v_185, v_184);
    env = stack[-9];
    goto v_124;
v_126:
    v_184 = nil;
    goto v_124;
    v_184 = nil;
v_124:
    if (v_184 == nil) goto v_122;
    v_184 = lisp_true;
    setvalue(basic_elt(env, 3), v_184); // thirdway!*
    goto v_120;
v_122:
v_120:
    v_184 = qvalue(basic_elt(env, 1)); // gg!*
    stack[-4] = v_184;
v_138:
    v_184 = stack[-4];
    if (v_184 == nil) goto v_142;
    else goto v_143;
v_142:
    goto v_137;
v_143:
    v_184 = stack[-4];
    if (!car_legal(v_184)) v_184 = carerror(v_184); else
    v_184 = car(v_184);
    stack[-1] = v_184;
    v_185 = stack[-3];
    v_184 = stack[-1];
    if (!car_legal(v_184)) v_184 = cdrerror(v_184); else
    v_184 = cdr(v_184);
    {   LispObject fn = basic_elt(env, 13); // dd
    stack[0] = (*qfn2(fn))(fn, v_185, v_184);
    }
    env = stack[-9];
    v_185 = stack[-7];
    v_184 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_184 = plus2(v_185, v_184);
    env = stack[-9];
    v_184 = static_cast<LispObject>(geq2(stack[0], v_184));
    v_184 = v_184 ? lisp_true : nil;
    env = stack[-9];
    if (v_184 == nil) goto v_152;
    v_185 = stack[-1];
    v_184 = qvalue(basic_elt(env, 1)); // gg!*
    v_184 = Ldelete(nil, v_185, v_184);
    env = stack[-9];
    setvalue(basic_elt(env, 1), v_184); // gg!*
    v_185 = stack[-1];
    v_184 = stack[-6];
    {   LispObject fn = basic_elt(env, 14); // insert
    v_184 = (*qfn2(fn))(fn, v_185, v_184);
    }
    env = stack[-9];
    stack[-6] = v_184;
    v_186 = qvalue(basic_elt(env, 9)); // bv!*
    v_184 = stack[-1];
    if (!car_legal(v_184)) v_185 = carerror(v_184); else
    v_185 = car(v_184);
    v_184 = lisp_true;
    v_184 = Lputv(nil, v_186, v_185, v_184);
    env = stack[-9];
    goto v_150;
v_152:
v_150:
    v_184 = stack[-4];
    if (!car_legal(v_184)) v_184 = cdrerror(v_184); else
    v_184 = cdr(v_184);
    stack[-4] = v_184;
    goto v_138;
v_137:
    v_185 = stack[-2];
    v_184 = stack[-3];
    v_185 = cons(v_185, v_184);
    env = stack[-9];
    v_184 = qvalue(basic_elt(env, 1)); // gg!*
    {   LispObject fn = basic_elt(env, 14); // insert
    v_184 = (*qfn2(fn))(fn, v_185, v_184);
    }
    env = stack[-9];
    setvalue(basic_elt(env, 1), v_184); // gg!*
    v_184 = nil;
    stack[-1] = v_184;
    goto v_95;
v_95:
    goto v_25;
v_24:
    v_184 = qvalue(basic_elt(env, 1)); // gg!*
    ;}  // end of a binding scope
    return onevalue(v_184);
}



// Code for get!-current!-representation

static LispObject CC_getKcurrentKrepresentation(LispObject env,
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
    v_8 = basic_elt(env, 1); // currep
    return get(v_7, v_8);
}



// Code for prepsq!*0

static LispObject CC_prepsqH0(LispObject env,
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
    v_41 = stack[-2];
    if (!car_legal(v_41)) v_41 = carerror(v_41); else
    v_41 = car(v_41);
    if (v_41 == nil) goto v_10;
    else goto v_11;
v_10:
    v_41 = nil;
    goto v_9;
v_11:
    v_41 = stack[-2];
    if (!car_legal(v_41)) v_42 = carerror(v_41); else
    v_42 = car(v_41);
    v_41 = stack[-2];
    if (!car_legal(v_41)) v_41 = cdrerror(v_41); else
    v_41 = cdr(v_41);
    {   LispObject fn = basic_elt(env, 1); // gcdf
    v_42 = (*qfn2(fn))(fn, v_42, v_41);
    }
    env = stack[-4];
    stack[-3] = v_42;
    v_41 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_42 == v_41) goto v_16;
    v_41 = stack[-2];
    if (!car_legal(v_41)) v_42 = carerror(v_41); else
    v_42 = car(v_41);
    v_41 = stack[-3];
    {   LispObject fn = basic_elt(env, 2); // quotf!-fail
    stack[0] = (*qfn2(fn))(fn, v_42, v_41);
    }
    env = stack[-4];
    v_41 = stack[-2];
    if (!car_legal(v_41)) v_42 = cdrerror(v_41); else
    v_42 = cdr(v_41);
    v_41 = stack[-3];
    {   LispObject fn = basic_elt(env, 2); // quotf!-fail
    v_42 = (*qfn2(fn))(fn, v_42, v_41);
    }
    env = stack[-4];
    v_41 = stack[-1];
    {
        LispObject v_48 = stack[0];
        LispObject fn = basic_elt(env, 3); // prepsq!*1
        return (*qfn3(fn))(fn, v_48, v_42, v_41);
    }
v_16:
    v_41 = stack[-2];
    if (!car_legal(v_41)) v_43 = carerror(v_41); else
    v_43 = car(v_41);
    v_41 = stack[-2];
    if (!car_legal(v_41)) v_42 = cdrerror(v_41); else
    v_42 = cdr(v_41);
    v_41 = stack[-1];
    {
        LispObject fn = basic_elt(env, 3); // prepsq!*1
        return (*qfn3(fn))(fn, v_43, v_42, v_41);
    }
    v_41 = nil;
v_9:
    return onevalue(v_41);
}



// Code for isimp1

static LispObject CC_isimp1(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_102, v_103;
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(9);
// copy arguments values to proper place
    stack[-2] = v_6;
    stack[-3] = v_5;
    stack[-4] = v_4;
    stack[-5] = v_3;
    stack[-6] = v_2;
// end of prologue
    v_102 = stack[-6];
    if (v_102 == nil) goto v_10;
    else goto v_11;
v_10:
    v_102 = nil;
    goto v_9;
v_11:
    v_102 = stack[-6];
    if (!consp(v_102)) goto v_18;
    else goto v_19;
v_18:
    v_102 = lisp_true;
    goto v_17;
v_19:
    v_102 = stack[-6];
    if (!car_legal(v_102)) v_102 = carerror(v_102); else
    v_102 = car(v_102);
    v_102 = (consp(v_102) ? nil : lisp_true);
    goto v_17;
    v_102 = nil;
v_17:
    if (v_102 == nil) goto v_15;
    v_102 = stack[-2];
    if (v_102 == nil) goto v_30;
    stack[-1] = stack[-6];
    v_102 = qvalue(basic_elt(env, 1)); // !*cvit
    if (v_102 == nil) goto v_37;
    stack[0] = stack[-5];
    v_102 = stack[-2];
    v_102 = ncons(v_102);
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 2); // calc_spurx
    v_102 = (*qfn4up(fn))(fn, stack[0], stack[-4], stack[-3], v_102);
    }
    env = stack[-8];
    goto v_35;
v_37:
    v_102 = stack[-2];
    if (!car_legal(v_102)) stack[0] = carerror(v_102); else
    stack[0] = car(v_102);
    v_103 = stack[-3];
    v_102 = stack[-2];
    if (!car_legal(v_102)) v_102 = cdrerror(v_102); else
    v_102 = cdr(v_102);
    v_102 = list2(v_103, v_102);
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 3); // spur0
    v_102 = (*qfn4up(fn))(fn, stack[0], stack[-5], stack[-4], v_102);
    }
    env = stack[-8];
    goto v_35;
    v_102 = nil;
v_35:
    {
        LispObject v_112 = stack[-1];
        LispObject fn = basic_elt(env, 4); // multd
        return (*qfn2(fn))(fn, v_112, v_102);
    }
v_30:
    v_102 = stack[-4];
    if (v_102 == nil) goto v_57;
    stack[-1] = stack[-6];
    stack[0] = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-2] = stack[-5];
    v_102 = stack[-3];
    v_102 = ncons(v_102);
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 5); // index_simp
    v_102 = (*qfn4up(fn))(fn, stack[0], stack[-2], stack[-4], v_102);
    }
    env = stack[-8];
    {
        LispObject v_113 = stack[-1];
        LispObject fn = basic_elt(env, 4); // multd
        return (*qfn2(fn))(fn, v_113, v_102);
    }
v_57:
    v_102 = stack[-3];
    if (v_102 == nil) goto v_68;
    v_102 = stack[-3];
    {   LispObject fn = basic_elt(env, 6); // emult
    stack[0] = (*qfn1(fn))(fn, v_102);
    }
    env = stack[-8];
    stack[-1] = stack[-6];
    stack[-2] = stack[-5];
    stack[-3] = stack[-4];
    v_103 = nil;
    v_102 = nil;
    v_102 = list2(v_103, v_102);
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 0); // isimp1
    v_102 = (*qfn4up(fn))(fn, stack[-1], stack[-2], stack[-3], v_102);
    }
    env = stack[-8];
    {
        LispObject v_114 = stack[0];
        LispObject fn = basic_elt(env, 7); // multf
        return (*qfn2(fn))(fn, v_114, v_102);
    }
v_68:
    v_102 = stack[-6];
    goto v_28;
    v_102 = nil;
v_28:
    goto v_9;
v_15:
    v_102 = stack[-6];
    if (!car_legal(v_102)) stack[-7] = carerror(v_102); else
    stack[-7] = car(v_102);
    stack[-1] = stack[-5];
    stack[0] = stack[-4];
    v_103 = stack[-3];
    v_102 = stack[-2];
    v_102 = list2(v_103, v_102);
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 8); // isimp2
    stack[0] = (*qfn4up(fn))(fn, stack[-7], stack[-1], stack[0], v_102);
    }
    env = stack[-8];
    v_102 = stack[-6];
    if (!car_legal(v_102)) stack[-1] = cdrerror(v_102); else
    stack[-1] = cdr(v_102);
    v_103 = stack[-3];
    v_102 = stack[-2];
    v_102 = list2(v_103, v_102);
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 0); // isimp1
    v_102 = (*qfn4up(fn))(fn, stack[-1], stack[-5], stack[-4], v_102);
    }
    env = stack[-8];
    {
        LispObject v_115 = stack[0];
        LispObject fn = basic_elt(env, 9); // addf
        return (*qfn2(fn))(fn, v_115, v_102);
    }
    v_102 = nil;
v_9:
    return onevalue(v_102);
}



// Code for rl_qefsolset

static LispObject CC_rl_qefsolset(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_17, v_18, v_19, v_20, v_21;
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    v_17 = v_6;
    v_18 = v_5;
    v_19 = v_4;
    v_20 = v_3;
    v_21 = v_2;
// end of prologue
    stack[-3] = qvalue(basic_elt(env, 1)); // rl_qefsolset!*
    stack[-2] = v_21;
    stack[-1] = v_20;
    stack[0] = v_19;
    v_17 = list2(v_18, v_17);
    env = stack[-4];
    v_17 = list3star(stack[-2], stack[-1], stack[0], v_17);
    env = stack[-4];
    {
        LispObject v_26 = stack[-3];
        LispObject fn = basic_elt(env, 2); // apply
        return (*qfn2(fn))(fn, v_26, v_17);
    }
}



// Code for intervalrd

static LispObject CC_intervalrd(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// end of prologue
    v_32 = qvalue(basic_elt(env, 1)); // atts
    v_31 = basic_elt(env, 2); // (closure)
    {   LispObject fn = basic_elt(env, 7); // retattributes
    v_31 = (*qfn2(fn))(fn, v_32, v_31);
    }
    env = stack[-4];
    stack[0] = v_31;
    {   LispObject fn = basic_elt(env, 8); // mathml
    v_31 = (*qfn0(fn))(fn);
    }
    env = stack[-4];
    stack[-3] = v_31;
    {   LispObject fn = basic_elt(env, 8); // mathml
    v_31 = (*qfn0(fn))(fn);
    }
    env = stack[-4];
    stack[-2] = v_31;
    {   LispObject fn = basic_elt(env, 9); // lex
    v_31 = (*qfn0(fn))(fn);
    }
    env = stack[-4];
    v_32 = qvalue(basic_elt(env, 3)); // char
    v_31 = basic_elt(env, 4); // (!/ i n t e r v a l)
    if (equal(v_32, v_31)) goto v_16;
    else goto v_17;
v_16:
    stack[-1] = basic_elt(env, 5); // interval
    v_32 = stack[-3];
    v_31 = stack[-2];
    v_31 = list2(v_32, v_31);
    {
        LispObject v_37 = stack[-1];
        LispObject v_38 = stack[0];
        return list2star(v_37, v_38, v_31);
    }
v_17:
    v_32 = basic_elt(env, 6); // "</interval>"
    v_31 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    {   LispObject fn = basic_elt(env, 10); // errorml
    v_31 = (*qfn2(fn))(fn, v_32, v_31);
    }
    goto v_15;
v_15:
    v_31 = nil;
    return onevalue(v_31);
}



// Code for prlist

static LispObject CC_prlist(LispObject env,
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
    stack[0] = v_2;
// end of prologue
    v_31 = nil;
v_7:
    v_30 = stack[0];
    if (v_30 == nil) goto v_10;
    else goto v_11;
v_10:
    v_30 = v_31;
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn1(fn))(fn, v_30);
    }
v_11:
    v_30 = stack[0];
    if (!car_legal(v_30)) v_30 = carerror(v_30); else
    v_30 = car(v_30);
    v_30 = Lconsp(nil, v_30);
    env = stack[-1];
    if (v_30 == nil) goto v_16;
    v_30 = stack[0];
    if (!car_legal(v_30)) v_30 = carerror(v_30); else
    v_30 = car(v_30);
    v_30 = cons(v_30, v_31);
    env = stack[-1];
    v_31 = v_30;
    v_30 = stack[0];
    if (!car_legal(v_30)) v_30 = cdrerror(v_30); else
    v_30 = cdr(v_30);
    stack[0] = v_30;
    goto v_7;
v_16:
    v_30 = stack[0];
    if (!car_legal(v_30)) v_30 = cdrerror(v_30); else
    v_30 = cdr(v_30);
    stack[0] = v_30;
    goto v_7;
    v_30 = nil;
    return onevalue(v_30);
}



// Code for letmtr

static LispObject CC_letmtr(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(7);
// copy arguments values to proper place
    stack[-2] = v_4;
    stack[-3] = v_3;
    stack[-4] = v_2;
// end of prologue
    stack[-5] = nil;
    v_56 = stack[-2];
    v_55 = basic_elt(env, 1); // mat
    if (!consp(v_56)) goto v_11;
    v_56 = car(v_56);
    if (v_56 == v_55) goto v_12;
v_11:
    stack[-1] = basic_elt(env, 2); // matrix
    stack[0] = static_cast<LispObject>(160)+TAG_FIXNUM; // 10
    v_57 = basic_elt(env, 3); // "Matrix"
    v_55 = stack[-4];
    if (!car_legal(v_55)) v_56 = carerror(v_55); else
    v_56 = car(v_55);
    v_55 = basic_elt(env, 4); // "not set"
    v_55 = list3(v_57, v_56, v_55);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 6); // rerror
    v_55 = (*qfn3(fn))(fn, stack[-1], stack[0], v_55);
    }
    env = stack[-6];
    goto v_10;
v_12:
    v_55 = stack[-4];
    if (!car_legal(v_55)) v_55 = cdrerror(v_55); else
    v_55 = cdr(v_55);
    {   LispObject fn = basic_elt(env, 7); // revlis
    v_55 = (*qfn1(fn))(fn, v_55);
    }
    env = stack[-6];
    stack[-5] = v_55;
    {   LispObject fn = basic_elt(env, 8); // numlis
    v_55 = (*qfn1(fn))(fn, v_55);
    }
    env = stack[-6];
    if (v_55 == nil) goto v_28;
    else goto v_29;
v_28:
    v_55 = lisp_true;
    goto v_27;
v_29:
    v_55 = stack[-5];
    v_56 = Llength(nil, v_55);
    env = stack[-6];
    v_55 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_55 = Lneq_2(nil, v_56, v_55);
    env = stack[-6];
    goto v_27;
    v_55 = nil;
v_27:
    if (v_55 == nil) goto v_25;
    v_56 = stack[-4];
    v_55 = basic_elt(env, 5); // hold
    {
        LispObject fn = basic_elt(env, 9); // errpri2
        return (*qfn2(fn))(fn, v_56, v_55);
    }
v_25:
v_10:
    v_55 = stack[-2];
    if (!car_legal(v_55)) v_56 = cdrerror(v_55); else
    v_56 = cdr(v_55);
    v_55 = stack[-5];
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    {   LispObject fn = basic_elt(env, 10); // nth
    v_56 = (*qfn2(fn))(fn, v_56, v_55);
    }
    env = stack[-6];
    v_55 = stack[-5];
    if (!car_legal(v_55)) v_55 = cdrerror(v_55); else
    v_55 = cdr(v_55);
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    {   LispObject fn = basic_elt(env, 11); // pnth
    v_56 = (*qfn2(fn))(fn, v_56, v_55);
    }
    v_55 = stack[-3];
    if (!car_legal(v_56)) rplaca_fails(v_56);
    setcar(v_56, v_55);
    v_55 = nil;
    return onevalue(v_55);
}



// Code for a2bc

static LispObject CC_a2bc(LispObject env,
                         LispObject v_2)
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
        push(v_2);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_36 = v_2;
// end of prologue
    v_37 = qvalue(basic_elt(env, 1)); // !*grmod!*
    if (v_37 == nil) goto v_7;
    v_37 = v_36;
    if (!consp(v_37)) goto v_15;
    else goto v_16;
v_15:
    v_37 = lisp_true;
    goto v_14;
v_16:
    v_37 = v_36;
    if (!car_legal(v_37)) v_37 = carerror(v_37); else
    v_37 = car(v_37);
    v_37 = (consp(v_37) ? nil : lisp_true);
    goto v_14;
    v_37 = nil;
v_14:
    if (v_37 == nil) goto v_11;
    else goto v_12;
v_11:
    v_37 = basic_elt(env, 2); // " Invalid coefficient "
    v_36 = list2(v_37, v_36);
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 3); // rederr
        return (*qfn1(fn))(fn, v_36);
    }
v_12:
    {
        LispObject fn = basic_elt(env, 4); // bcfd
        return (*qfn1(fn))(fn, v_36);
    }
    v_36 = nil;
    goto v_5;
v_7:
    {
        LispObject fn = basic_elt(env, 5); // simp!*
        return (*qfn1(fn))(fn, v_36);
    }
    v_36 = nil;
v_5:
    return onevalue(v_36);
}



// Code for gfplus

static LispObject CC_gfplus(LispObject env,
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
        LispObject fn = basic_elt(env, 1); // gffplus
        return (*qfn2(fn))(fn, v_19, v_20);
    }
v_8:
    v_19 = v_21;
    {
        LispObject fn = basic_elt(env, 2); // gbfplus
        return (*qfn2(fn))(fn, v_19, v_20);
    }
    v_19 = nil;
    return onevalue(v_19);
}



// Code for numprintlen

static LispObject CC_numprintlen(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_128, v_129;
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
    stack[-1] = v_2;
// end of prologue
v_6:
    v_128 = stack[-1];
    if (!consp(v_128)) goto v_9;
    else goto v_10;
v_9:
    v_128 = stack[-1];
    v_128 = Lexplode(nil, v_128);
        return Llength(nil, v_128);
v_10:
    v_128 = stack[-1];
    v_128 = Llength(nil, v_128);
    env = stack[-6];
    v_128 = Lonep(nil, v_128);
    env = stack[-6];
    if (v_128 == nil) goto v_16;
    v_128 = stack[-1];
    if (!car_legal(v_128)) v_128 = carerror(v_128); else
    v_128 = car(v_128);
    stack[-1] = v_128;
    goto v_6;
v_16:
    v_128 = stack[-1];
    if (!car_legal(v_128)) v_129 = carerror(v_128); else
    v_129 = car(v_128);
    v_128 = basic_elt(env, 1); // !:rd!:
    if (v_129 == v_128) goto v_22;
    else goto v_23;
v_22:
    v_128 = stack[-1];
    {   LispObject fn = basic_elt(env, 4); // rd!:explode
    v_128 = (*qfn1(fn))(fn, v_128);
    }
    env = stack[-6];
    stack[-1] = v_128;
    stack[-2] = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_128 = stack[-1];
    if (!car_legal(v_128)) v_128 = carerror(v_128); else
    v_128 = car(v_128);
    stack[0] = Llength(nil, v_128);
    env = stack[-6];
    v_128 = stack[-1];
    if (!car_legal(v_128)) v_128 = cdrerror(v_128); else
    v_128 = cdr(v_128);
    if (!car_legal(v_128)) v_128 = carerror(v_128); else
    v_128 = car(v_128);
    v_128 = Lexplode(nil, v_128);
    env = stack[-6];
    v_128 = Llength(nil, v_128);
    env = stack[-6];
    v_128 = plus2(stack[0], v_128);
    {
        LispObject v_136 = stack[-2];
        return plus2(v_136, v_128);
    }
v_23:
    v_128 = stack[-1];
    if (!car_legal(v_128)) v_129 = carerror(v_128); else
    v_129 = car(v_128);
    v_128 = basic_elt(env, 2); // (!:cr!: !:crn!: !:gi!:)
    v_128 = Lmemq(nil, v_129, v_128);
    if (v_128 == nil) goto v_41;
    v_129 = basic_elt(env, 1); // !:rd!:
    v_128 = stack[-1];
    if (!car_legal(v_128)) v_128 = cdrerror(v_128); else
    v_128 = cdr(v_128);
    if (!car_legal(v_128)) v_128 = carerror(v_128); else
    v_128 = car(v_128);
    v_128 = cons(v_129, v_128);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 4); // rd!:explode
    stack[0] = (*qfn1(fn))(fn, v_128);
    }
    env = stack[-6];
    v_129 = basic_elt(env, 1); // !:rd!:
    v_128 = stack[-1];
    if (!car_legal(v_128)) v_128 = cdrerror(v_128); else
    v_128 = cdr(v_128);
    if (!car_legal(v_128)) v_128 = cdrerror(v_128); else
    v_128 = cdr(v_128);
    v_128 = cons(v_129, v_128);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 4); // rd!:explode
    v_128 = (*qfn1(fn))(fn, v_128);
    }
    env = stack[-6];
    v_128 = cons(stack[0], v_128);
    env = stack[-6];
    stack[-1] = v_128;
    stack[-4] = static_cast<LispObject>(192)+TAG_FIXNUM; // 12
    v_128 = stack[-1];
    if (!car_legal(v_128)) v_128 = carerror(v_128); else
    v_128 = car(v_128);
    if (!car_legal(v_128)) v_128 = carerror(v_128); else
    v_128 = car(v_128);
    stack[-3] = Llength(nil, v_128);
    env = stack[-6];
    v_128 = stack[-1];
    if (!car_legal(v_128)) v_128 = carerror(v_128); else
    v_128 = car(v_128);
    if (!car_legal(v_128)) v_128 = cdrerror(v_128); else
    v_128 = cdr(v_128);
    v_128 = Lexplode(nil, v_128);
    env = stack[-6];
    stack[-2] = Llength(nil, v_128);
    env = stack[-6];
    v_128 = stack[-1];
    if (!car_legal(v_128)) v_128 = cdrerror(v_128); else
    v_128 = cdr(v_128);
    if (!car_legal(v_128)) v_128 = carerror(v_128); else
    v_128 = car(v_128);
    stack[0] = Llength(nil, v_128);
    env = stack[-6];
    v_128 = stack[-1];
    if (!car_legal(v_128)) v_128 = cdrerror(v_128); else
    v_128 = cdr(v_128);
    if (!car_legal(v_128)) v_128 = cdrerror(v_128); else
    v_128 = cdr(v_128);
    v_128 = Lexplode(nil, v_128);
    env = stack[-6];
    v_128 = Llength(nil, v_128);
    env = stack[-6];
    v_128 = plus2(stack[0], v_128);
    env = stack[-6];
    v_128 = plus2(stack[-2], v_128);
    env = stack[-6];
    v_128 = plus2(stack[-3], v_128);
    {
        LispObject v_137 = stack[-4];
        return plus2(v_137, v_128);
    }
v_41:
    v_128 = stack[-1];
    stack[-5] = Llength(nil, v_128);
    env = stack[-6];
    stack[-4] = basic_elt(env, 3); // plus
    v_128 = stack[-1];
    if (!car_legal(v_128)) v_128 = cdrerror(v_128); else
    v_128 = cdr(v_128);
    stack[-3] = v_128;
    v_128 = stack[-3];
    if (v_128 == nil) goto v_100;
    else goto v_101;
v_100:
    v_128 = nil;
    goto v_94;
v_101:
    v_128 = stack[-3];
    if (!car_legal(v_128)) v_128 = carerror(v_128); else
    v_128 = car(v_128);
    {   LispObject fn = basic_elt(env, 0); // numprintlen
    v_128 = (*qfn1(fn))(fn, v_128);
    }
    env = stack[-6];
    v_128 = ncons(v_128);
    env = stack[-6];
    stack[-1] = v_128;
    stack[-2] = v_128;
v_95:
    v_128 = stack[-3];
    if (!car_legal(v_128)) v_128 = cdrerror(v_128); else
    v_128 = cdr(v_128);
    stack[-3] = v_128;
    v_128 = stack[-3];
    if (v_128 == nil) goto v_114;
    else goto v_115;
v_114:
    v_128 = stack[-2];
    goto v_94;
v_115:
    stack[0] = stack[-1];
    v_128 = stack[-3];
    if (!car_legal(v_128)) v_128 = carerror(v_128); else
    v_128 = car(v_128);
    {   LispObject fn = basic_elt(env, 0); // numprintlen
    v_128 = (*qfn1(fn))(fn, v_128);
    }
    env = stack[-6];
    v_128 = ncons(v_128);
    env = stack[-6];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_128);
    v_128 = stack[-1];
    if (!car_legal(v_128)) v_128 = cdrerror(v_128); else
    v_128 = cdr(v_128);
    stack[-1] = v_128;
    goto v_95;
v_94:
    v_128 = cons(stack[-4], v_128);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 5); // lispeval
    v_128 = (*qfn1(fn))(fn, v_128);
    }
    {
        LispObject v_138 = stack[-5];
        return plus2(v_138, v_128);
    }
    v_128 = nil;
    return onevalue(v_128);
}



// Code for mk_binding

static LispObject CC_mk_binding(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    v_20 = stack[-1];
    if (!car_legal(v_20)) v_21 = carerror(v_20); else
    v_21 = car(v_20);
    v_20 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // can_be_proved
    v_20 = (*qfn2(fn))(fn, v_21, v_20);
    }
    env = stack[-2];
    if (v_20 == nil) goto v_7;
    else goto v_8;
v_7:
    v_20 = nil;
    goto v_6;
v_8:
    v_20 = stack[-1];
    if (!car_legal(v_20)) v_21 = cdrerror(v_20); else
    v_21 = cdr(v_20);
    v_20 = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // edge_bind
        return (*qfn2(fn))(fn, v_21, v_20);
    }
    v_20 = nil;
v_6:
    return onevalue(v_20);
}



// Code for equiv!-coeffs

static LispObject CC_equivKcoeffs(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_59 = stack[-1];
    if (v_59 == nil) goto v_11;
    else goto v_12;
v_11:
    stack[-1] = stack[-2];
    v_59 = stack[0];
    v_59 = Llength(nil, v_59);
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 1); // nzeros
    v_59 = (*qfn1(fn))(fn, v_59);
    }
    env = stack[-3];
    {
        LispObject v_64 = stack[-1];
        LispObject fn = basic_elt(env, 2); // nreverse
        return (*qfn2(fn))(fn, v_64, v_59);
    }
v_12:
    v_59 = stack[0];
    if (v_59 == nil) goto v_19;
    else goto v_20;
v_19:
    v_59 = stack[-2];
    {
        LispObject fn = basic_elt(env, 2); // nreverse
        return (*qfn1(fn))(fn, v_59);
    }
v_20:
    v_59 = stack[-1];
    if (!car_legal(v_59)) v_59 = carerror(v_59); else
    v_59 = car(v_59);
    if (!car_legal(v_59)) v_60 = carerror(v_59); else
    v_60 = car(v_59);
    v_59 = stack[0];
    if (!car_legal(v_59)) v_59 = carerror(v_59); else
    v_59 = car(v_59);
    if (!car_legal(v_59)) v_59 = carerror(v_59); else
    v_59 = car(v_59);
    if (equal(v_60, v_59)) goto v_24;
    else goto v_25;
v_24:
    v_59 = stack[-1];
    if (!car_legal(v_59)) v_59 = carerror(v_59); else
    v_59 = car(v_59);
    if (!car_legal(v_59)) v_60 = cdrerror(v_59); else
    v_60 = cdr(v_59);
    v_59 = stack[-2];
    v_59 = cons(v_60, v_59);
    env = stack[-3];
    stack[-2] = v_59;
    v_59 = stack[-1];
    if (!car_legal(v_59)) v_59 = cdrerror(v_59); else
    v_59 = cdr(v_59);
    stack[-1] = v_59;
    v_59 = stack[0];
    if (!car_legal(v_59)) v_59 = cdrerror(v_59); else
    v_59 = cdr(v_59);
    stack[0] = v_59;
    goto v_8;
v_25:
    v_59 = stack[-1];
    if (!car_legal(v_59)) v_59 = carerror(v_59); else
    v_59 = car(v_59);
    if (!car_legal(v_59)) v_60 = carerror(v_59); else
    v_60 = car(v_59);
    v_59 = stack[0];
    if (!car_legal(v_59)) v_59 = carerror(v_59); else
    v_59 = car(v_59);
    if (!car_legal(v_59)) v_59 = carerror(v_59); else
    v_59 = car(v_59);
    {   LispObject fn = basic_elt(env, 3); // mv!-pow!-!>
    v_59 = (*qfn2(fn))(fn, v_60, v_59);
    }
    env = stack[-3];
    if (v_59 == nil) goto v_42;
    v_59 = stack[-1];
    if (!car_legal(v_59)) v_59 = cdrerror(v_59); else
    v_59 = cdr(v_59);
    stack[-1] = v_59;
    goto v_8;
v_42:
    v_60 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_59 = stack[-2];
    v_59 = cons(v_60, v_59);
    env = stack[-3];
    stack[-2] = v_59;
    v_59 = stack[0];
    if (!car_legal(v_59)) v_59 = cdrerror(v_59); else
    v_59 = cdr(v_59);
    stack[0] = v_59;
    goto v_8;
    v_59 = nil;
    return onevalue(v_59);
}



// Code for taylorp

static LispObject CC_taylorp(LispObject env,
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
    v_8 = basic_elt(env, 1); // taylor
        return Leqcar(nil, v_7, v_8);
}



// Code for lesspcar

static LispObject CC_lesspcar(LispObject env,
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
        return Llessp_2(nil, v_11, v_10);
}



// Code for rl_qe

static LispObject CC_rl_qe(LispObject env,
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
    stack[0] = qvalue(basic_elt(env, 1)); // rl_qe!*
    v_10 = list2(v_11, v_10);
    env = stack[-1];
    {
        LispObject v_13 = stack[0];
        LispObject fn = basic_elt(env, 2); // apply
        return (*qfn2(fn))(fn, v_13, v_10);
    }
}



// Code for cl_apply2ats1

static LispObject CC_cl_apply2ats1(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_203, v_204, v_205;
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
    stack[-5] = v_3;
    stack[-1] = v_2;
// end of prologue
    v_203 = stack[-1];
    if (!consp(v_203)) goto v_11;
    else goto v_12;
v_11:
    v_203 = stack[-1];
    goto v_10;
v_12:
    v_203 = stack[-1];
    if (!car_legal(v_203)) v_203 = carerror(v_203); else
    v_203 = car(v_203);
    goto v_10;
    v_203 = nil;
v_10:
    v_205 = v_203;
    v_204 = v_205;
    v_203 = basic_elt(env, 1); // true
    if (v_204 == v_203) goto v_25;
    else goto v_26;
v_25:
    v_203 = lisp_true;
    goto v_24;
v_26:
    v_204 = v_205;
    v_203 = basic_elt(env, 2); // false
    v_203 = (v_204 == v_203 ? lisp_true : nil);
    goto v_24;
    v_203 = nil;
v_24:
    if (v_203 == nil) goto v_22;
    v_203 = stack[-1];
    goto v_8;
v_22:
    v_204 = v_205;
    v_203 = basic_elt(env, 3); // ex
    if (v_204 == v_203) goto v_42;
    else goto v_43;
v_42:
    v_203 = lisp_true;
    goto v_41;
v_43:
    v_204 = v_205;
    v_203 = basic_elt(env, 4); // all
    v_203 = (v_204 == v_203 ? lisp_true : nil);
    goto v_41;
    v_203 = nil;
v_41:
    if (v_203 == nil) goto v_39;
    stack[-2] = v_205;
    v_203 = stack[-1];
    if (!car_legal(v_203)) v_203 = cdrerror(v_203); else
    v_203 = cdr(v_203);
    if (!car_legal(v_203)) stack[0] = carerror(v_203); else
    stack[0] = car(v_203);
    v_203 = stack[-1];
    if (!car_legal(v_203)) v_203 = cdrerror(v_203); else
    v_203 = cdr(v_203);
    if (!car_legal(v_203)) v_203 = cdrerror(v_203); else
    v_203 = cdr(v_203);
    if (!car_legal(v_203)) v_205 = carerror(v_203); else
    v_205 = car(v_203);
    v_204 = stack[-5];
    v_203 = stack[-4];
    {   LispObject fn = basic_elt(env, 0); // cl_apply2ats1
    v_203 = (*qfn3(fn))(fn, v_205, v_204, v_203);
    }
    {
        LispObject v_213 = stack[-2];
        LispObject v_214 = stack[0];
        return list3(v_213, v_214, v_203);
    }
v_39:
    v_204 = v_205;
    v_203 = basic_elt(env, 5); // bex
    if (v_204 == v_203) goto v_70;
    else goto v_71;
v_70:
    v_203 = lisp_true;
    goto v_69;
v_71:
    v_204 = v_205;
    v_203 = basic_elt(env, 6); // ball
    v_203 = (v_204 == v_203 ? lisp_true : nil);
    goto v_69;
    v_203 = nil;
v_69:
    if (v_203 == nil) goto v_67;
    stack[-3] = v_205;
    v_203 = stack[-1];
    if (!car_legal(v_203)) v_203 = cdrerror(v_203); else
    v_203 = cdr(v_203);
    if (!car_legal(v_203)) stack[-2] = carerror(v_203); else
    stack[-2] = car(v_203);
    v_203 = stack[-1];
    if (!car_legal(v_203)) v_203 = cdrerror(v_203); else
    v_203 = cdr(v_203);
    if (!car_legal(v_203)) v_203 = cdrerror(v_203); else
    v_203 = cdr(v_203);
    if (!car_legal(v_203)) v_205 = carerror(v_203); else
    v_205 = car(v_203);
    v_204 = stack[-5];
    v_203 = stack[-4];
    {   LispObject fn = basic_elt(env, 0); // cl_apply2ats1
    stack[0] = (*qfn3(fn))(fn, v_205, v_204, v_203);
    }
    env = stack[-7];
    v_203 = stack[-1];
    if (!car_legal(v_203)) v_203 = cdrerror(v_203); else
    v_203 = cdr(v_203);
    if (!car_legal(v_203)) v_203 = cdrerror(v_203); else
    v_203 = cdr(v_203);
    if (!car_legal(v_203)) v_203 = cdrerror(v_203); else
    v_203 = cdr(v_203);
    if (!car_legal(v_203)) v_205 = carerror(v_203); else
    v_205 = car(v_203);
    v_204 = stack[-5];
    v_203 = stack[-4];
    {   LispObject fn = basic_elt(env, 0); // cl_apply2ats1
    v_203 = (*qfn3(fn))(fn, v_205, v_204, v_203);
    }
    {
        LispObject v_215 = stack[-3];
        LispObject v_216 = stack[-2];
        LispObject v_217 = stack[0];
        return list4(v_215, v_216, v_217, v_203);
    }
v_67:
    v_204 = v_205;
    v_203 = basic_elt(env, 7); // or
    if (v_204 == v_203) goto v_114;
    else goto v_115;
v_114:
    v_203 = lisp_true;
    goto v_113;
v_115:
    v_204 = v_205;
    v_203 = basic_elt(env, 8); // and
    v_203 = (v_204 == v_203 ? lisp_true : nil);
    goto v_113;
    v_203 = nil;
v_113:
    if (v_203 == nil) goto v_111;
    v_203 = lisp_true;
    goto v_109;
v_111:
    v_204 = v_205;
    v_203 = basic_elt(env, 9); // not
    v_203 = (v_204 == v_203 ? lisp_true : nil);
    goto v_109;
    v_203 = nil;
v_109:
    if (v_203 == nil) goto v_107;
    v_203 = lisp_true;
    goto v_105;
v_107:
    v_204 = v_205;
    v_203 = basic_elt(env, 10); // impl
    if (v_204 == v_203) goto v_135;
    else goto v_136;
v_135:
    v_203 = lisp_true;
    goto v_134;
v_136:
    v_204 = v_205;
    v_203 = basic_elt(env, 11); // repl
    if (v_204 == v_203) goto v_144;
    else goto v_145;
v_144:
    v_203 = lisp_true;
    goto v_143;
v_145:
    v_204 = v_205;
    v_203 = basic_elt(env, 12); // equiv
    v_203 = (v_204 == v_203 ? lisp_true : nil);
    goto v_143;
    v_203 = nil;
v_143:
    goto v_134;
    v_203 = nil;
v_134:
    goto v_105;
    v_203 = nil;
v_105:
    if (v_203 == nil) goto v_103;
    stack[-6] = v_205;
    v_203 = stack[-1];
    if (!car_legal(v_203)) v_203 = cdrerror(v_203); else
    v_203 = cdr(v_203);
    stack[-3] = v_203;
    v_203 = stack[-3];
    if (v_203 == nil) goto v_166;
    else goto v_167;
v_166:
    v_203 = nil;
    goto v_160;
v_167:
    v_203 = stack[-3];
    if (!car_legal(v_203)) v_203 = carerror(v_203); else
    v_203 = car(v_203);
    v_205 = v_203;
    v_204 = stack[-5];
    v_203 = stack[-4];
    {   LispObject fn = basic_elt(env, 0); // cl_apply2ats1
    v_203 = (*qfn3(fn))(fn, v_205, v_204, v_203);
    }
    env = stack[-7];
    v_203 = ncons(v_203);
    env = stack[-7];
    stack[-1] = v_203;
    stack[-2] = v_203;
v_161:
    v_203 = stack[-3];
    if (!car_legal(v_203)) v_203 = cdrerror(v_203); else
    v_203 = cdr(v_203);
    stack[-3] = v_203;
    v_203 = stack[-3];
    if (v_203 == nil) goto v_182;
    else goto v_183;
v_182:
    v_203 = stack[-2];
    goto v_160;
v_183:
    stack[0] = stack[-1];
    v_203 = stack[-3];
    if (!car_legal(v_203)) v_203 = carerror(v_203); else
    v_203 = car(v_203);
    v_205 = v_203;
    v_204 = stack[-5];
    v_203 = stack[-4];
    {   LispObject fn = basic_elt(env, 0); // cl_apply2ats1
    v_203 = (*qfn3(fn))(fn, v_205, v_204, v_203);
    }
    env = stack[-7];
    v_203 = ncons(v_203);
    env = stack[-7];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_203);
    v_203 = stack[-1];
    if (!car_legal(v_203)) v_203 = cdrerror(v_203); else
    v_203 = cdr(v_203);
    stack[-1] = v_203;
    goto v_161;
v_160:
    {
        LispObject v_218 = stack[-6];
        return cons(v_218, v_203);
    }
v_103:
    stack[0] = stack[-5];
    v_204 = stack[-1];
    v_203 = stack[-4];
    v_203 = cons(v_204, v_203);
    env = stack[-7];
    {
        LispObject v_219 = stack[0];
        LispObject fn = basic_elt(env, 13); // apply
        return (*qfn2(fn))(fn, v_219, v_203);
    }
v_8:
    return onevalue(v_203);
}



// Code for maxfrom

static LispObject CC_maxfrom(LispObject env,
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
    v_11 = add1(v_10);
    env = stack[-1];
    v_10 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {
        LispObject v_13 = stack[0];
        LispObject fn = basic_elt(env, 1); // maxfrom1
        return (*qfn3(fn))(fn, v_13, v_11, v_10);
    }
}



// Code for mk!+mat!+plus!+mat

static LispObject CC_mkLmatLplusLmat(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_215, v_216, v_217;
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(14);
// copy arguments values to proper place
    stack[-10] = v_3;
    stack[-11] = v_2;
// end of prologue
    v_215 = stack[-11];
    {   LispObject fn = basic_elt(env, 4); // matrix!+p
    v_215 = (*qfn1(fn))(fn, v_215);
    }
    env = stack[-13];
    if (v_215 == nil) goto v_15;
    else goto v_16;
v_15:
    v_215 = basic_elt(env, 1); // "no matrix in add"
    {   LispObject fn = basic_elt(env, 5); // rederr
    v_215 = (*qfn1(fn))(fn, v_215);
    }
    env = stack[-13];
    goto v_14;
v_16:
v_14:
    v_215 = stack[-10];
    {   LispObject fn = basic_elt(env, 4); // matrix!+p
    v_215 = (*qfn1(fn))(fn, v_215);
    }
    env = stack[-13];
    if (v_215 == nil) goto v_23;
    else goto v_24;
v_23:
    v_215 = basic_elt(env, 1); // "no matrix in add"
    {   LispObject fn = basic_elt(env, 5); // rederr
    v_215 = (*qfn1(fn))(fn, v_215);
    }
    env = stack[-13];
    goto v_22;
v_24:
v_22:
    v_215 = stack[-11];
    {   LispObject fn = basic_elt(env, 6); // get!+col!+nr
    v_215 = (*qfn1(fn))(fn, v_215);
    }
    env = stack[-13];
    stack[-12] = v_215;
    v_215 = stack[-11];
    {   LispObject fn = basic_elt(env, 7); // get!+row!+nr
    v_215 = (*qfn1(fn))(fn, v_215);
    }
    env = stack[-13];
    stack[-9] = v_215;
    stack[0] = stack[-12];
    v_215 = stack[-10];
    {   LispObject fn = basic_elt(env, 6); // get!+col!+nr
    v_215 = (*qfn1(fn))(fn, v_215);
    }
    env = stack[-13];
    if (equal(stack[0], v_215)) goto v_36;
    v_215 = basic_elt(env, 2); // "wrong dimensions in add"
    {   LispObject fn = basic_elt(env, 5); // rederr
    v_215 = (*qfn1(fn))(fn, v_215);
    }
    env = stack[-13];
    goto v_34;
v_36:
v_34:
    stack[0] = stack[-9];
    v_215 = stack[-10];
    {   LispObject fn = basic_elt(env, 7); // get!+row!+nr
    v_215 = (*qfn1(fn))(fn, v_215);
    }
    env = stack[-13];
    if (equal(stack[0], v_215)) goto v_45;
    v_215 = basic_elt(env, 2); // "wrong dimensions in add"
    {   LispObject fn = basic_elt(env, 5); // rederr
    v_215 = (*qfn1(fn))(fn, v_215);
    }
    env = stack[-13];
    goto v_43;
v_45:
v_43:
    v_215 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-8] = v_215;
    v_216 = stack[-9];
    v_215 = stack[-8];
    v_215 = difference2(v_216, v_215);
    env = stack[-13];
    v_215 = Lminusp(nil, v_215);
    env = stack[-13];
    if (v_215 == nil) goto v_61;
    v_215 = nil;
    goto v_55;
v_61:
    v_215 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-4] = v_215;
    v_216 = stack[-12];
    v_215 = stack[-4];
    v_215 = difference2(v_216, v_215);
    env = stack[-13];
    v_215 = Lminusp(nil, v_215);
    env = stack[-13];
    if (v_215 == nil) goto v_78;
    v_215 = nil;
    goto v_72;
v_78:
    v_217 = stack[-11];
    v_216 = stack[-8];
    v_215 = stack[-4];
    {   LispObject fn = basic_elt(env, 8); // get!+mat!+entry
    stack[0] = (*qfn3(fn))(fn, v_217, v_216, v_215);
    }
    env = stack[-13];
    v_217 = stack[-10];
    v_216 = stack[-8];
    v_215 = stack[-4];
    {   LispObject fn = basic_elt(env, 8); // get!+mat!+entry
    v_215 = (*qfn3(fn))(fn, v_217, v_216, v_215);
    }
    env = stack[-13];
    {   LispObject fn = basic_elt(env, 9); // addsq
    v_215 = (*qfn2(fn))(fn, stack[0], v_215);
    }
    env = stack[-13];
    v_216 = v_215;
    v_215 = lisp_true;
// Binding !*sub2
// FLUIDBIND: reloadenv=13 litvec-offset=3 saveloc=0
{   bind_fluid_stack bind_fluid_var(-13, 3, 0);
    setvalue(basic_elt(env, 3), v_215); // !*sub2
    v_215 = v_216;
    {   LispObject fn = basic_elt(env, 10); // subs2
    v_215 = (*qfn1(fn))(fn, v_215);
    }
    env = stack[-13];
    v_216 = v_215;
    ;}  // end of a binding scope
    v_215 = v_216;
    v_215 = ncons(v_215);
    env = stack[-13];
    stack[-2] = v_215;
    stack[-3] = v_215;
v_73:
    v_215 = stack[-4];
    v_215 = add1(v_215);
    env = stack[-13];
    stack[-4] = v_215;
    v_216 = stack[-12];
    v_215 = stack[-4];
    v_215 = difference2(v_216, v_215);
    env = stack[-13];
    v_215 = Lminusp(nil, v_215);
    env = stack[-13];
    if (v_215 == nil) goto v_106;
    v_215 = stack[-3];
    goto v_72;
v_106:
    stack[-1] = stack[-2];
    v_217 = stack[-11];
    v_216 = stack[-8];
    v_215 = stack[-4];
    {   LispObject fn = basic_elt(env, 8); // get!+mat!+entry
    stack[0] = (*qfn3(fn))(fn, v_217, v_216, v_215);
    }
    env = stack[-13];
    v_217 = stack[-10];
    v_216 = stack[-8];
    v_215 = stack[-4];
    {   LispObject fn = basic_elt(env, 8); // get!+mat!+entry
    v_215 = (*qfn3(fn))(fn, v_217, v_216, v_215);
    }
    env = stack[-13];
    {   LispObject fn = basic_elt(env, 9); // addsq
    v_215 = (*qfn2(fn))(fn, stack[0], v_215);
    }
    env = stack[-13];
    v_216 = v_215;
    v_215 = lisp_true;
// Binding !*sub2
// FLUIDBIND: reloadenv=13 litvec-offset=3 saveloc=0
{   bind_fluid_stack bind_fluid_var(-13, 3, 0);
    setvalue(basic_elt(env, 3), v_215); // !*sub2
    v_215 = v_216;
    {   LispObject fn = basic_elt(env, 10); // subs2
    v_215 = (*qfn1(fn))(fn, v_215);
    }
    env = stack[-13];
    v_216 = v_215;
    ;}  // end of a binding scope
    v_215 = v_216;
    v_215 = ncons(v_215);
    env = stack[-13];
    if (!car_legal(stack[-1])) rplacd_fails(stack[-1]);
    setcdr(stack[-1], v_215);
    v_215 = stack[-2];
    if (!car_legal(v_215)) v_215 = cdrerror(v_215); else
    v_215 = cdr(v_215);
    stack[-2] = v_215;
    goto v_73;
v_72:
    v_215 = ncons(v_215);
    env = stack[-13];
    stack[-6] = v_215;
    stack[-7] = v_215;
v_56:
    v_215 = stack[-8];
    v_215 = add1(v_215);
    env = stack[-13];
    stack[-8] = v_215;
    v_216 = stack[-9];
    v_215 = stack[-8];
    v_215 = difference2(v_216, v_215);
    env = stack[-13];
    v_215 = Lminusp(nil, v_215);
    env = stack[-13];
    if (v_215 == nil) goto v_138;
    v_215 = stack[-7];
    goto v_55;
v_138:
    stack[-5] = stack[-6];
    v_215 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-4] = v_215;
    v_216 = stack[-12];
    v_215 = stack[-4];
    v_215 = difference2(v_216, v_215);
    env = stack[-13];
    v_215 = Lminusp(nil, v_215);
    env = stack[-13];
    if (v_215 == nil) goto v_156;
    v_215 = nil;
    goto v_150;
v_156:
    v_217 = stack[-11];
    v_216 = stack[-8];
    v_215 = stack[-4];
    {   LispObject fn = basic_elt(env, 8); // get!+mat!+entry
    stack[0] = (*qfn3(fn))(fn, v_217, v_216, v_215);
    }
    env = stack[-13];
    v_217 = stack[-10];
    v_216 = stack[-8];
    v_215 = stack[-4];
    {   LispObject fn = basic_elt(env, 8); // get!+mat!+entry
    v_215 = (*qfn3(fn))(fn, v_217, v_216, v_215);
    }
    env = stack[-13];
    {   LispObject fn = basic_elt(env, 9); // addsq
    v_215 = (*qfn2(fn))(fn, stack[0], v_215);
    }
    env = stack[-13];
    v_216 = v_215;
    v_215 = lisp_true;
// Binding !*sub2
// FLUIDBIND: reloadenv=13 litvec-offset=3 saveloc=0
{   bind_fluid_stack bind_fluid_var(-13, 3, 0);
    setvalue(basic_elt(env, 3), v_215); // !*sub2
    v_215 = v_216;
    {   LispObject fn = basic_elt(env, 10); // subs2
    v_215 = (*qfn1(fn))(fn, v_215);
    }
    env = stack[-13];
    v_216 = v_215;
    ;}  // end of a binding scope
    v_215 = v_216;
    v_215 = ncons(v_215);
    env = stack[-13];
    stack[-2] = v_215;
    stack[-3] = v_215;
v_151:
    v_215 = stack[-4];
    v_215 = add1(v_215);
    env = stack[-13];
    stack[-4] = v_215;
    v_216 = stack[-12];
    v_215 = stack[-4];
    v_215 = difference2(v_216, v_215);
    env = stack[-13];
    v_215 = Lminusp(nil, v_215);
    env = stack[-13];
    if (v_215 == nil) goto v_184;
    v_215 = stack[-3];
    goto v_150;
v_184:
    stack[-1] = stack[-2];
    v_217 = stack[-11];
    v_216 = stack[-8];
    v_215 = stack[-4];
    {   LispObject fn = basic_elt(env, 8); // get!+mat!+entry
    stack[0] = (*qfn3(fn))(fn, v_217, v_216, v_215);
    }
    env = stack[-13];
    v_217 = stack[-10];
    v_216 = stack[-8];
    v_215 = stack[-4];
    {   LispObject fn = basic_elt(env, 8); // get!+mat!+entry
    v_215 = (*qfn3(fn))(fn, v_217, v_216, v_215);
    }
    env = stack[-13];
    {   LispObject fn = basic_elt(env, 9); // addsq
    v_215 = (*qfn2(fn))(fn, stack[0], v_215);
    }
    env = stack[-13];
    v_216 = v_215;
    v_215 = lisp_true;
// Binding !*sub2
// FLUIDBIND: reloadenv=13 litvec-offset=3 saveloc=0
{   bind_fluid_stack bind_fluid_var(-13, 3, 0);
    setvalue(basic_elt(env, 3), v_215); // !*sub2
    v_215 = v_216;
    {   LispObject fn = basic_elt(env, 10); // subs2
    v_215 = (*qfn1(fn))(fn, v_215);
    }
    env = stack[-13];
    v_216 = v_215;
    ;}  // end of a binding scope
    v_215 = v_216;
    v_215 = ncons(v_215);
    env = stack[-13];
    if (!car_legal(stack[-1])) rplacd_fails(stack[-1]);
    setcdr(stack[-1], v_215);
    v_215 = stack[-2];
    if (!car_legal(v_215)) v_215 = cdrerror(v_215); else
    v_215 = cdr(v_215);
    stack[-2] = v_215;
    goto v_151;
v_150:
    v_215 = ncons(v_215);
    env = stack[-13];
    if (!car_legal(stack[-5])) rplacd_fails(stack[-5]);
    setcdr(stack[-5], v_215);
    v_215 = stack[-6];
    if (!car_legal(v_215)) v_215 = cdrerror(v_215); else
    v_215 = cdr(v_215);
    stack[-6] = v_215;
    goto v_56;
v_55:
    return onevalue(v_215);
}



// Code for ezgcd!-comfac

static LispObject CC_ezgcdKcomfac(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_125, v_126, v_127;
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
    v_125 = stack[-1];
    if (!consp(v_125)) goto v_10;
    else goto v_11;
v_10:
    v_125 = lisp_true;
    goto v_9;
v_11:
    v_125 = stack[-1];
    if (!car_legal(v_125)) v_125 = carerror(v_125); else
    v_125 = car(v_125);
    v_125 = (consp(v_125) ? nil : lisp_true);
    goto v_9;
    v_125 = nil;
v_9:
    if (v_125 == nil) goto v_7;
    stack[0] = nil;
    v_125 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // poly!-abs
    v_125 = (*qfn1(fn))(fn, v_125);
    }
    {
        LispObject v_131 = stack[0];
        return cons(v_131, v_125);
    }
v_7:
    v_125 = stack[-1];
    if (!car_legal(v_125)) v_125 = cdrerror(v_125); else
    v_125 = cdr(v_125);
    if (v_125 == nil) goto v_23;
    else goto v_24;
v_23:
    v_125 = stack[-1];
    if (!car_legal(v_125)) v_125 = carerror(v_125); else
    v_125 = car(v_125);
    if (!car_legal(v_125)) stack[0] = carerror(v_125); else
    stack[0] = car(v_125);
    v_125 = stack[-1];
    if (!car_legal(v_125)) v_125 = carerror(v_125); else
    v_125 = car(v_125);
    if (!car_legal(v_125)) v_125 = cdrerror(v_125); else
    v_125 = cdr(v_125);
    {   LispObject fn = basic_elt(env, 1); // poly!-abs
    v_125 = (*qfn1(fn))(fn, v_125);
    }
    {
        LispObject v_132 = stack[0];
        return cons(v_132, v_125);
    }
v_24:
    stack[-2] = nil;
    v_127 = nil;
    v_125 = stack[-1];
    if (!car_legal(v_125)) v_125 = carerror(v_125); else
    v_125 = car(v_125);
    if (!car_legal(v_125)) v_125 = carerror(v_125); else
    v_125 = car(v_125);
    if (!car_legal(v_125)) v_125 = carerror(v_125); else
    v_125 = car(v_125);
    stack[0] = v_125;
v_48:
    v_125 = stack[-1];
    if (!car_legal(v_125)) v_125 = carerror(v_125); else
    v_125 = car(v_125);
    if (!car_legal(v_125)) v_125 = carerror(v_125); else
    v_125 = car(v_125);
    if (!car_legal(v_125)) v_126 = carerror(v_125); else
    v_126 = car(v_125);
    v_125 = stack[0];
    if (equal(v_126, v_125)) goto v_55;
    else goto v_56;
v_55:
    v_125 = stack[-1];
    if (!car_legal(v_125)) v_125 = cdrerror(v_125); else
    v_125 = cdr(v_125);
    if (!consp(v_125)) goto v_64;
    else goto v_65;
v_64:
    v_125 = lisp_true;
    goto v_63;
v_65:
    v_125 = stack[-1];
    if (!car_legal(v_125)) v_125 = cdrerror(v_125); else
    v_125 = cdr(v_125);
    if (!car_legal(v_125)) v_125 = carerror(v_125); else
    v_125 = car(v_125);
    v_125 = (consp(v_125) ? nil : lisp_true);
    goto v_63;
    v_125 = nil;
v_63:
    v_125 = (v_125 == nil ? lisp_true : nil);
    goto v_54;
v_56:
    v_125 = nil;
    goto v_54;
    v_125 = nil;
v_54:
    if (v_125 == nil) goto v_51;
    else goto v_52;
v_51:
    goto v_47;
v_52:
    v_125 = stack[-1];
    if (!car_legal(v_125)) v_125 = carerror(v_125); else
    v_125 = car(v_125);
    if (!car_legal(v_125)) v_125 = cdrerror(v_125); else
    v_125 = cdr(v_125);
    v_126 = v_127;
    v_125 = cons(v_125, v_126);
    env = stack[-3];
    v_127 = v_125;
    v_125 = stack[-1];
    if (!car_legal(v_125)) v_125 = cdrerror(v_125); else
    v_125 = cdr(v_125);
    stack[-1] = v_125;
    goto v_48;
v_47:
    v_125 = stack[-1];
    if (!car_legal(v_125)) v_125 = carerror(v_125); else
    v_125 = car(v_125);
    if (!car_legal(v_125)) v_125 = carerror(v_125); else
    v_125 = car(v_125);
    if (!car_legal(v_125)) v_126 = carerror(v_125); else
    v_126 = car(v_125);
    v_125 = stack[0];
    if (equal(v_126, v_125)) goto v_89;
    else goto v_90;
v_89:
    v_125 = stack[-1];
    if (!car_legal(v_125)) v_125 = carerror(v_125); else
    v_125 = car(v_125);
    if (!car_legal(v_125)) v_125 = cdrerror(v_125); else
    v_125 = cdr(v_125);
    v_126 = v_127;
    v_125 = cons(v_125, v_126);
    env = stack[-3];
    v_127 = v_125;
    v_125 = stack[-1];
    if (!car_legal(v_125)) v_125 = cdrerror(v_125); else
    v_125 = cdr(v_125);
    if (v_125 == nil) goto v_103;
    else goto v_104;
v_103:
    v_125 = stack[-1];
    if (!car_legal(v_125)) v_125 = carerror(v_125); else
    v_125 = car(v_125);
    if (!car_legal(v_125)) v_125 = carerror(v_125); else
    v_125 = car(v_125);
    stack[-2] = v_125;
    goto v_102;
v_104:
    v_125 = stack[-1];
    if (!car_legal(v_125)) v_125 = cdrerror(v_125); else
    v_125 = cdr(v_125);
    v_126 = v_127;
    v_125 = cons(v_125, v_126);
    env = stack[-3];
    v_127 = v_125;
    goto v_102;
v_102:
    goto v_88;
v_90:
    v_125 = stack[-1];
    v_126 = v_127;
    v_125 = cons(v_125, v_126);
    env = stack[-3];
    v_127 = v_125;
    goto v_88;
v_88:
    stack[0] = stack[-2];
    v_125 = v_127;
    {   LispObject fn = basic_elt(env, 2); // gcdlist
    v_125 = (*qfn1(fn))(fn, v_125);
    }
    {
        LispObject v_133 = stack[0];
        return cons(v_133, v_125);
    }
    goto v_5;
    v_125 = nil;
v_5:
    return onevalue(v_125);
}



// Code for transposerd

static LispObject CC_transposerd(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil);
    stack_popper stack_popper_var(2);
// end of prologue
    {   LispObject fn = basic_elt(env, 1); // mathml
    v_10 = (*qfn0(fn))(fn);
    }
    env = stack[-1];
    stack[0] = v_10;
    {   LispObject fn = basic_elt(env, 2); // lex
    v_10 = (*qfn0(fn))(fn);
    }
    v_10 = stack[0];
    return ncons(v_10);
    return onevalue(v_10);
}



setup_type const u40_setup[] =
{
    {"lengthreval",             G0W1,     CC_lengthreval,G2W1,G3W1,     G4W1},
    {"ra_intequiv",             G0W1,     CC_ra_intequiv,G2W1,G3W1,     G4W1},
    {"component_action",        G0W3,     G1W3,     G2W3,     CC_component_action,G4W3},
    {"fctargs",                 G0W1,     CC_fctargs,G2W1,    G3W1,     G4W1},
    {"rl_mk*fof",               G0W1,     CC_rl_mkHfof,G2W1,  G3W1,     G4W1},
    {"rl_bnfsimpl",             G0W2,     G1W2,     CC_rl_bnfsimpl,G3W2,G4W2},
    {"repr_n",                  G0W1,     CC_repr_n,G2W1,     G3W1,     G4W1},
    {"matrixrd",                CC_matrixrd,G1W0,   G2W0,     G3W0,     G4W0},
    {"fnreval",                 G0W3,     G1W3,     G2W3,     CC_fnreval,G4W3},
    {"evweightedcomp1",         G0W2,     G1W2,     CC_evweightedcomp1,G3W2,G4W2},
    {"pa_list2vect",            G0W2,     G1W2,     CC_pa_list2vect,G3W2,G4W2},
    {"fd2q",                    G0W1,     CC_fd2q,  G2W1,     G3W1,     G4W1},
    {"outer-simpsqrt",          G0W1,     CC_outerKsimpsqrt,G2W1,G3W1,  G4W1},
    {"oddext",                  G0W1,     CC_oddext,G2W1,     G3W1,     G4W1},
    {"polynomread",             G0W1,     CC_polynomread,G2W1,G3W1,     G4W1},
    {"expf",                    G0W2,     G1W2,     CC_expf,  G3W2,     G4W2},
    {"mri_2ofsfat",             G0W1,     CC_mri_2ofsfat,G2W1,G3W1,     G4W1},
    {"quotfx1",                 G0W2,     G1W2,     CC_quotfx1,G3W2,    G4W2},
    {"rl_multsurep",            G0W2,     G1W2,     CC_rl_multsurep,G3W2,G4W2},
    {"upperlimitrd",            CC_upperlimitrd,G1W0,G2W0,    G3W0,     G4W0},
    {"compl",                   G0W2,     G1W2,     CC_compl, G3W2,     G4W2},
    {"suspend",                 G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_suspend},
    {"vdpequal",                G0W2,     G1W2,     CC_vdpequal,G3W2,   G4W2},
    {"evinsert",                G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_evinsert},
    {"simpwedge",               G0W1,     CC_simpwedge,G2W1,  G3W1,     G4W1},
    {"divide-by-power-of-ten",  G0W2,     G1W2,     CC_divideKbyKpowerKofKten,G3W2,G4W2},
    {"cvitimes2",               G0W2,     G1W2,     CC_cvitimes2,G3W2,  G4W2},
    {"ratnump",                 G0W1,     CC_ratnump,G2W1,    G3W1,     G4W1},
    {"miller-rabin",            G0W2,     G1W2,     CC_millerKrabin,G3W2,G4W2},
    {"dfp-sub",                 G0W2,     G1W2,     CC_dfpKsub,G3W2,    G4W2},
    {"redall",                  G0W3,     G1W3,     G2W3,     CC_redall,G4W3},
    {"get-current-representation",G0W1,   CC_getKcurrentKrepresentation,G2W1,G3W1,G4W1},
    {"prepsq*0",                G0W2,     G1W2,     CC_prepsqH0,G3W2,   G4W2},
    {"isimp1",                  G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_isimp1},
    {"rl_qefsolset",            G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_rl_qefsolset},
    {"intervalrd",              CC_intervalrd,G1W0, G2W0,     G3W0,     G4W0},
    {"prlist",                  G0W1,     CC_prlist,G2W1,     G3W1,     G4W1},
    {"letmtr",                  G0W3,     G1W3,     G2W3,     CC_letmtr,G4W3},
    {"a2bc",                    G0W1,     CC_a2bc,  G2W1,     G3W1,     G4W1},
    {"gfplus",                  G0W2,     G1W2,     CC_gfplus,G3W2,     G4W2},
    {"numprintlen",             G0W1,     CC_numprintlen,G2W1,G3W1,     G4W1},
    {"mk_binding",              G0W2,     G1W2,     CC_mk_binding,G3W2, G4W2},
    {"equiv-coeffs",            G0W2,     G1W2,     CC_equivKcoeffs,G3W2,G4W2},
    {"taylorp",                 G0W1,     CC_taylorp,G2W1,    G3W1,     G4W1},
    {"lesspcar",                G0W2,     G1W2,     CC_lesspcar,G3W2,   G4W2},
    {"rl_qe",                   G0W2,     G1W2,     CC_rl_qe, G3W2,     G4W2},
    {"cl_apply2ats1",           G0W3,     G1W3,     G2W3,     CC_cl_apply2ats1,G4W3},
    {"maxfrom",                 G0W2,     G1W2,     CC_maxfrom,G3W2,    G4W2},
    {"mk+mat+plus+mat",         G0W2,     G1W2,     CC_mkLmatLplusLmat,G3W2,G4W2},
    {"ezgcd-comfac",            G0W1,     CC_ezgcdKcomfac,G2W1,G3W1,    G4W1},
    {"transposerd",             CC_transposerd,G1W0,G2W0,     G3W0,     G4W0},
    {nullptr, 
        reinterpret_cast<no_args *>(
            reinterpret_cast<uintptr_t>("u40")),
        reinterpret_cast<one_arg *>(
            reinterpret_cast<uintptr_t>("135533 5952200 101974")),
        nullptr, nullptr, nullptr}
};

// end of generated code
