
// $destdir/u52.c        Machine generated C code

// $Id$

#include "config.h"
#include "headers.h"



// Code for mk_resimp_rep

static LispObject CC_mk_resimp_rep(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_61, v_62;
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
    stack[-5] = v_2;
// end of prologue
    v_61 = stack[-5];
    {   LispObject fn = basic_elt(env, 1); // get_group_in
    v_61 = (*qfn1(fn))(fn, v_61);
    }
    env = stack[-7];
    stack[-6] = v_61;
    v_61 = stack[-6];
    {   LispObject fn = basic_elt(env, 2); // get!*elements
    v_61 = (*qfn1(fn))(fn, v_61);
    }
    env = stack[-7];
    stack[-4] = v_61;
    v_61 = stack[-4];
    if (v_61 == nil) goto v_21;
    else goto v_22;
v_21:
    v_61 = nil;
    goto v_15;
v_22:
    v_61 = stack[-4];
    if (!car_legal(v_61)) v_61 = carerror(v_61); else
    v_61 = car(v_61);
    stack[0] = v_61;
    v_62 = v_61;
    v_61 = stack[-5];
    {   LispObject fn = basic_elt(env, 3); // get_rep_matrix_in
    v_61 = (*qfn2(fn))(fn, v_62, v_61);
    }
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 4); // mk!+resimp!+mat
    v_61 = (*qfn1(fn))(fn, v_61);
    }
    env = stack[-7];
    v_61 = list2(stack[0], v_61);
    env = stack[-7];
    v_61 = ncons(v_61);
    env = stack[-7];
    stack[-2] = v_61;
    stack[-3] = v_61;
v_16:
    v_61 = stack[-4];
    if (!car_legal(v_61)) v_61 = cdrerror(v_61); else
    v_61 = cdr(v_61);
    stack[-4] = v_61;
    v_61 = stack[-4];
    if (v_61 == nil) goto v_39;
    else goto v_40;
v_39:
    v_61 = stack[-3];
    goto v_15;
v_40:
    stack[-1] = stack[-2];
    v_61 = stack[-4];
    if (!car_legal(v_61)) v_61 = carerror(v_61); else
    v_61 = car(v_61);
    stack[0] = v_61;
    v_62 = v_61;
    v_61 = stack[-5];
    {   LispObject fn = basic_elt(env, 3); // get_rep_matrix_in
    v_61 = (*qfn2(fn))(fn, v_62, v_61);
    }
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 4); // mk!+resimp!+mat
    v_61 = (*qfn1(fn))(fn, v_61);
    }
    env = stack[-7];
    v_61 = list2(stack[0], v_61);
    env = stack[-7];
    v_61 = ncons(v_61);
    env = stack[-7];
    if (!car_legal(stack[-1])) rplacd_fails(stack[-1]);
    setcdr(stack[-1], v_61);
    v_61 = stack[-2];
    if (!car_legal(v_61)) v_61 = cdrerror(v_61); else
    v_61 = cdr(v_61);
    stack[-2] = v_61;
    goto v_16;
v_15:
    stack[0] = v_61;
    v_61 = stack[-6];
    v_62 = ncons(v_61);
    v_61 = stack[0];
        return Lappend_2(nil, v_62, v_61);
    return onevalue(v_61);
}



// Code for bc_minus!?

static LispObject CC_bc_minusW(LispObject env,
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
    v_21 = v_2;
// end of prologue
    v_20 = v_21;
    if (!car_legal(v_20)) v_20 = carerror(v_20); else
    v_20 = car(v_20);
    v_20 = integerp(v_20);
    if (v_20 == nil) goto v_7;
    v_20 = v_21;
    if (!car_legal(v_20)) v_21 = carerror(v_20); else
    v_21 = car(v_20);
    v_20 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
        return Llessp_2(nil, v_21, v_20);
v_7:
    v_20 = v_21;
    if (!car_legal(v_20)) v_20 = carerror(v_20); else
    v_20 = car(v_20);
    {
        LispObject fn = basic_elt(env, 1); // minusf
        return (*qfn1(fn))(fn, v_20);
    }
    v_20 = nil;
    return onevalue(v_20);
}



// Code for expttermp

static LispObject CC_expttermp(LispObject env,
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
    v_22 = basic_elt(env, 1); // expt
    if (!consp(v_23)) goto v_8;
    v_23 = car(v_23);
    if (v_23 == v_22) goto v_7;
    else goto v_8;
v_7:
    v_22 = v_25;
    if (!car_legal(v_22)) v_22 = cdrerror(v_22); else
    v_22 = cdr(v_22);
    if (!car_legal(v_22)) v_22 = carerror(v_22); else
    v_22 = car(v_22);
    v_23 = v_24;
    {
        LispObject fn = basic_elt(env, 2); // expttermp1
        return (*qfn2(fn))(fn, v_22, v_23);
    }
v_8:
    v_22 = v_25;
    v_23 = v_24;
    {
        LispObject fn = basic_elt(env, 2); // expttermp1
        return (*qfn2(fn))(fn, v_22, v_23);
    }
    v_22 = nil;
    return onevalue(v_22);
}



// Code for expvec2a1

static LispObject CC_expvec2a1(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_52, v_53, v_54;
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
    v_52 = stack[-1];
    if (v_52 == nil) goto v_11;
    else goto v_12;
v_11:
    v_52 = stack[-2];
    {
        LispObject fn = basic_elt(env, 2); // nreverse
        return (*qfn1(fn))(fn, v_52);
    }
v_12:
    v_52 = stack[-1];
    if (!car_legal(v_52)) v_53 = carerror(v_52); else
    v_53 = car(v_52);
    v_52 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_53 == v_52) goto v_16;
    else goto v_17;
v_16:
    v_52 = stack[-1];
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    stack[-1] = v_52;
    v_52 = stack[0];
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    stack[0] = v_52;
    goto v_8;
v_17:
    v_52 = stack[-1];
    if (!car_legal(v_52)) v_53 = carerror(v_52); else
    v_53 = car(v_52);
    v_52 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_53 == v_52) goto v_25;
    else goto v_26;
v_25:
    v_52 = stack[0];
    if (!car_legal(v_52)) v_53 = carerror(v_52); else
    v_53 = car(v_52);
    v_52 = stack[-2];
    v_52 = cons(v_53, v_52);
    env = stack[-3];
    stack[-2] = v_52;
    v_52 = stack[-1];
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    stack[-1] = v_52;
    v_52 = stack[0];
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    stack[0] = v_52;
    goto v_8;
v_26:
    v_54 = basic_elt(env, 1); // expt
    v_52 = stack[0];
    if (!car_legal(v_52)) v_53 = carerror(v_52); else
    v_53 = car(v_52);
    v_52 = stack[-1];
    if (!car_legal(v_52)) v_52 = carerror(v_52); else
    v_52 = car(v_52);
    v_53 = list3(v_54, v_53, v_52);
    env = stack[-3];
    v_52 = stack[-2];
    v_52 = cons(v_53, v_52);
    env = stack[-3];
    stack[-2] = v_52;
    v_52 = stack[-1];
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    stack[-1] = v_52;
    v_52 = stack[0];
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    stack[0] = v_52;
    goto v_8;
    v_52 = nil;
    return onevalue(v_52);
}



// Code for multsqpf

static LispObject CC_multsqpf(LispObject env,
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    stack[-1] = v_3;
    stack[-2] = v_2;
// end of prologue
    stack[-3] = nil;
v_8:
    v_40 = stack[-1];
    if (v_40 == nil) goto v_15;
    else goto v_16;
v_15:
    v_40 = lisp_true;
    goto v_14;
v_16:
    v_40 = stack[-2];
    if (!car_legal(v_40)) v_40 = carerror(v_40); else
    v_40 = car(v_40);
    v_40 = (v_40 == nil ? lisp_true : nil);
    goto v_14;
    v_40 = nil;
v_14:
    if (v_40 == nil) goto v_12;
    v_40 = stack[-3];
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn1(fn))(fn, v_40);
    }
v_12:
    v_40 = stack[-1];
    if (!car_legal(v_40)) v_40 = carerror(v_40); else
    v_40 = car(v_40);
    if (!car_legal(v_40)) stack[0] = carerror(v_40); else
    stack[0] = car(v_40);
    v_41 = stack[-2];
    v_40 = stack[-1];
    if (!car_legal(v_40)) v_40 = carerror(v_40); else
    v_40 = car(v_40);
    if (!car_legal(v_40)) v_40 = cdrerror(v_40); else
    v_40 = cdr(v_40);
    {   LispObject fn = basic_elt(env, 2); // multsq
    v_41 = (*qfn2(fn))(fn, v_41, v_40);
    }
    env = stack[-4];
    v_40 = stack[-3];
    v_40 = acons(stack[0], v_41, v_40);
    env = stack[-4];
    stack[-3] = v_40;
    v_40 = stack[-1];
    if (!car_legal(v_40)) v_40 = cdrerror(v_40); else
    v_40 = cdr(v_40);
    stack[-1] = v_40;
    goto v_8;
    v_40 = nil;
    return onevalue(v_40);
}



// Code for rand!-mons!-sparse

static LispObject CC_randKmonsKsparse(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_211, v_212;
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
    real_push(nil, nil, nil, nil, nil);
    stack_popper stack_popper_var(11);
// copy arguments values to proper place
    stack[0] = v_6;
    stack[-1] = v_5;
    stack[-2] = v_4;
    stack[-3] = v_3;
    stack[-8] = v_2;
// end of prologue
    stack[-9] = nil;
    stack[-7] = nil;
    v_211 = stack[0];
    if (v_211 == nil) goto v_18;
    v_212 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_211 = stack[-1];
    v_211 = difference2(v_212, v_211);
    env = stack[-10];
    v_211 = plus2(stack[-2], v_211);
    env = stack[-10];
    goto v_16;
v_18:
    v_211 = stack[-8];
    v_211 = Llength(nil, v_211);
    env = stack[-10];
    stack[-9] = v_211;
    v_211 = stack[-1];
    v_211 = static_cast<LispObject>(zerop(v_211));
    v_211 = v_211 ? lisp_true : nil;
    env = stack[-10];
    if (v_211 == nil) goto v_34;
    v_211 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_32;
v_34:
    stack[-4] = stack[-9];
    v_211 = stack[-1];
    v_211 = sub1(v_211);
    env = stack[-10];
    v_212 = plus2(stack[-4], v_211);
    env = stack[-10];
    v_211 = stack[-9];
    {   LispObject fn = basic_elt(env, 1); // binomial
    v_211 = (*qfn2(fn))(fn, v_212, v_211);
    }
    env = stack[-10];
    goto v_32;
    v_211 = nil;
v_32:
    stack[-7] = v_211;
    v_212 = stack[-9];
    v_211 = stack[-2];
    v_212 = plus2(v_212, v_211);
    env = stack[-10];
    v_211 = stack[-9];
    {   LispObject fn = basic_elt(env, 1); // binomial
    v_212 = (*qfn2(fn))(fn, v_212, v_211);
    }
    env = stack[-10];
    v_211 = stack[-7];
    v_211 = difference2(v_212, v_211);
    env = stack[-10];
    goto v_16;
v_16:
    stack[-2] = v_211;
    v_212 = v_211;
    v_211 = stack[-3];
    {   LispObject fn = basic_elt(env, 2); // min
    v_211 = (*qfn2(fn))(fn, v_212, v_211);
    }
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 3); // rand!-comb
    v_211 = (*qfn2(fn))(fn, stack[-2], v_211);
    }
    env = stack[-10];
    v_212 = v_211;
    v_211 = stack[0];
    if (v_211 == nil) goto v_61;
    v_211 = v_212;
    stack[-5] = v_211;
    v_211 = stack[-5];
    if (v_211 == nil) goto v_72;
    else goto v_73;
v_72:
    v_211 = nil;
    goto v_67;
v_73:
    v_211 = stack[-5];
    if (!car_legal(v_211)) v_211 = carerror(v_211); else
    v_211 = car(v_211);
    stack[0] = stack[-8];
    v_212 = v_211;
    v_211 = stack[-1];
    v_211 = plus2(v_212, v_211);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 4); // !*kp2f
    v_211 = (*qfn2(fn))(fn, stack[0], v_211);
    }
    env = stack[-10];
    v_211 = ncons(v_211);
    env = stack[-10];
    stack[-3] = v_211;
    stack[-4] = v_211;
v_68:
    v_211 = stack[-5];
    if (!car_legal(v_211)) v_211 = cdrerror(v_211); else
    v_211 = cdr(v_211);
    stack[-5] = v_211;
    v_211 = stack[-5];
    if (v_211 == nil) goto v_89;
    else goto v_90;
v_89:
    v_211 = stack[-4];
    goto v_67;
v_90:
    stack[-2] = stack[-3];
    v_211 = stack[-5];
    if (!car_legal(v_211)) v_211 = carerror(v_211); else
    v_211 = car(v_211);
    stack[0] = stack[-8];
    v_212 = v_211;
    v_211 = stack[-1];
    v_211 = plus2(v_212, v_211);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 4); // !*kp2f
    v_211 = (*qfn2(fn))(fn, stack[0], v_211);
    }
    env = stack[-10];
    v_211 = ncons(v_211);
    env = stack[-10];
    if (!car_legal(stack[-2])) rplacd_fails(stack[-2]);
    setcdr(stack[-2], v_211);
    v_211 = stack[-3];
    if (!car_legal(v_211)) v_211 = cdrerror(v_211); else
    v_211 = cdr(v_211);
    stack[-3] = v_211;
    goto v_68;
v_67:
    goto v_59;
v_61:
    v_211 = v_212;
    stack[-6] = v_211;
    v_211 = stack[-6];
    if (v_211 == nil) goto v_117;
    else goto v_118;
v_117:
    v_211 = nil;
    goto v_112;
v_118:
    v_211 = stack[-6];
    if (!car_legal(v_211)) v_211 = carerror(v_211); else
    v_211 = car(v_211);
    stack[-2] = v_211;
    v_211 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-1] = v_211;
    stack[0] = nil;
    v_212 = stack[-2];
    v_211 = stack[-7];
    v_212 = plus2(v_212, v_211);
    env = stack[-10];
    v_211 = stack[-9];
    {   LispObject fn = basic_elt(env, 5); // inttovec
    v_211 = (*qfn2(fn))(fn, v_212, v_211);
    }
    env = stack[-10];
    v_211 = cons(stack[0], v_211);
    env = stack[-10];
    stack[-2] = v_211;
    v_211 = stack[-8];
    stack[0] = v_211;
v_139:
    v_211 = stack[0];
    if (v_211 == nil) goto v_143;
    else goto v_144;
v_143:
    goto v_138;
v_144:
    v_211 = stack[0];
    if (!car_legal(v_211)) v_211 = carerror(v_211); else
    v_211 = car(v_211);
    v_212 = v_211;
    v_211 = stack[-2];
    if (!car_legal(v_211)) v_211 = cdrerror(v_211); else
    v_211 = cdr(v_211);
    stack[-2] = v_211;
    if (!car_legal(v_211)) v_211 = carerror(v_211); else
    v_211 = car(v_211);
    {   LispObject fn = basic_elt(env, 4); // !*kp2f
    v_212 = (*qfn2(fn))(fn, v_212, v_211);
    }
    env = stack[-10];
    v_211 = stack[-1];
    {   LispObject fn = basic_elt(env, 6); // multf
    v_211 = (*qfn2(fn))(fn, v_212, v_211);
    }
    env = stack[-10];
    stack[-1] = v_211;
    v_211 = stack[0];
    if (!car_legal(v_211)) v_211 = cdrerror(v_211); else
    v_211 = cdr(v_211);
    stack[0] = v_211;
    goto v_139;
v_138:
    v_211 = stack[-1];
    v_211 = ncons(v_211);
    env = stack[-10];
    stack[-4] = v_211;
    stack[-5] = v_211;
v_113:
    v_211 = stack[-6];
    if (!car_legal(v_211)) v_211 = cdrerror(v_211); else
    v_211 = cdr(v_211);
    stack[-6] = v_211;
    v_211 = stack[-6];
    if (v_211 == nil) goto v_164;
    else goto v_165;
v_164:
    v_211 = stack[-5];
    goto v_112;
v_165:
    stack[-3] = stack[-4];
    v_211 = stack[-6];
    if (!car_legal(v_211)) v_211 = carerror(v_211); else
    v_211 = car(v_211);
    stack[-2] = v_211;
    v_211 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-1] = v_211;
    stack[0] = nil;
    v_212 = stack[-2];
    v_211 = stack[-7];
    v_212 = plus2(v_212, v_211);
    env = stack[-10];
    v_211 = stack[-9];
    {   LispObject fn = basic_elt(env, 5); // inttovec
    v_211 = (*qfn2(fn))(fn, v_212, v_211);
    }
    env = stack[-10];
    v_211 = cons(stack[0], v_211);
    env = stack[-10];
    stack[-2] = v_211;
    v_211 = stack[-8];
    stack[0] = v_211;
v_187:
    v_211 = stack[0];
    if (v_211 == nil) goto v_191;
    else goto v_192;
v_191:
    goto v_186;
v_192:
    v_211 = stack[0];
    if (!car_legal(v_211)) v_211 = carerror(v_211); else
    v_211 = car(v_211);
    v_212 = v_211;
    v_211 = stack[-2];
    if (!car_legal(v_211)) v_211 = cdrerror(v_211); else
    v_211 = cdr(v_211);
    stack[-2] = v_211;
    if (!car_legal(v_211)) v_211 = carerror(v_211); else
    v_211 = car(v_211);
    {   LispObject fn = basic_elt(env, 4); // !*kp2f
    v_212 = (*qfn2(fn))(fn, v_212, v_211);
    }
    env = stack[-10];
    v_211 = stack[-1];
    {   LispObject fn = basic_elt(env, 6); // multf
    v_211 = (*qfn2(fn))(fn, v_212, v_211);
    }
    env = stack[-10];
    stack[-1] = v_211;
    v_211 = stack[0];
    if (!car_legal(v_211)) v_211 = cdrerror(v_211); else
    v_211 = cdr(v_211);
    stack[0] = v_211;
    goto v_187;
v_186:
    v_211 = stack[-1];
    v_211 = ncons(v_211);
    env = stack[-10];
    if (!car_legal(stack[-3])) rplacd_fails(stack[-3]);
    setcdr(stack[-3], v_211);
    v_211 = stack[-4];
    if (!car_legal(v_211)) v_211 = cdrerror(v_211); else
    v_211 = cdr(v_211);
    stack[-4] = v_211;
    goto v_113;
v_112:
    goto v_59;
    v_211 = nil;
v_59:
    return onevalue(v_211);
}



// Code for exp!*

static LispObject CC_expH(LispObject env,
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
    v_7 = qvalue(basic_elt(env, 1)); // !:bprec!:
    {
        LispObject fn = basic_elt(env, 2); // exp!:
        return (*qfn2(fn))(fn, v_8, v_7);
    }
}



// Code for atlas_edges

static LispObject CC_atlas_edges(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_18 = stack[0];
    if (!car_legal(v_18)) v_18 = carerror(v_18); else
    v_18 = car(v_18);
    {   LispObject fn = basic_elt(env, 1); // map__edges
    stack[-1] = (*qfn1(fn))(fn, v_18);
    }
    env = stack[-2];
    v_18 = stack[0];
    if (!car_legal(v_18)) v_18 = cdrerror(v_18); else
    v_18 = cdr(v_18);
    if (!car_legal(v_18)) v_18 = cdrerror(v_18); else
    v_18 = cdr(v_18);
    if (!car_legal(v_18)) v_18 = carerror(v_18); else
    v_18 = car(v_18);
    {   LispObject fn = basic_elt(env, 2); // den__edges
    v_18 = (*qfn1(fn))(fn, v_18);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // union_edges
    stack[-1] = (*qfn2(fn))(fn, stack[-1], v_18);
    }
    env = stack[-2];
    v_18 = stack[0];
    if (!car_legal(v_18)) v_18 = cdrerror(v_18); else
    v_18 = cdr(v_18);
    if (!car_legal(v_18)) v_18 = carerror(v_18); else
    v_18 = car(v_18);
    {   LispObject fn = basic_elt(env, 4); // coeff_edges
    v_18 = (*qfn1(fn))(fn, v_18);
    }
    env = stack[-2];
    {
        LispObject v_21 = stack[-1];
        LispObject fn = basic_elt(env, 3); // union_edges
        return (*qfn2(fn))(fn, v_21, v_18);
    }
}



// Code for actual_arguments

static LispObject CC_actual_arguments(LispObject env,
                         LispObject v_2)
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
        push(v_2);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_16 = v_2;
// end of prologue
    v_17 = basic_elt(env, 1); // list
    v_15 = v_16;
    if (!car_legal(v_15)) v_15 = cdrerror(v_15); else
    v_15 = cdr(v_15);
    if (v_15 == nil) goto v_8;
    else goto v_7;
v_8:
    v_15 = v_16;
    if (!car_legal(v_15)) v_16 = carerror(v_15); else
    v_16 = car(v_15);
    v_15 = basic_elt(env, 2); // generic_function
    v_15 = get(v_16, v_15);
v_7:
    return cons(v_17, v_15);
}



// Code for dp!=comp

static LispObject CC_dpMcomp(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_33 = stack[0];
    if (v_33 == nil) goto v_11;
    else goto v_12;
v_11:
    v_33 = stack[-2];
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn1(fn))(fn, v_33);
    }
v_12:
    v_33 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // dp_lmon
    v_33 = (*qfn1(fn))(fn, v_33);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 3); // mo_comp
    v_34 = (*qfn1(fn))(fn, v_33);
    }
    env = stack[-3];
    v_33 = stack[-1];
    v_33 = Leqn_2(nil, v_34, v_33);
    env = stack[-3];
    if (v_33 == nil) goto v_17;
    v_33 = stack[0];
    if (!car_legal(v_33)) v_34 = carerror(v_33); else
    v_34 = car(v_33);
    v_33 = stack[-2];
    v_33 = cons(v_34, v_33);
    env = stack[-3];
    stack[-2] = v_33;
    v_33 = stack[0];
    if (!car_legal(v_33)) v_33 = cdrerror(v_33); else
    v_33 = cdr(v_33);
    stack[0] = v_33;
    goto v_8;
v_17:
    v_33 = stack[0];
    if (!car_legal(v_33)) v_33 = cdrerror(v_33); else
    v_33 = cdr(v_33);
    stack[0] = v_33;
    goto v_8;
    v_33 = nil;
    return onevalue(v_33);
}



// Code for rl_identifyonoff

static LispObject CC_rl_identifyonoff(LispObject env,
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
    stack[0] = qvalue(basic_elt(env, 1)); // rl_identifyonoff!*
    v_8 = ncons(v_8);
    env = stack[-1];
    {
        LispObject v_10 = stack[0];
        LispObject fn = basic_elt(env, 2); // apply
        return (*qfn2(fn))(fn, v_10, v_8);
    }
}



// Code for addfactors

static LispObject CC_addfactors(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_37, v_38, v_39, v_40;
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
    v_39 = v_3;
    v_40 = v_2;
// end of prologue
    v_38 = v_40;
    v_37 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_38 == v_37) goto v_7;
    else goto v_8;
v_7:
    v_37 = v_39;
    {
        LispObject fn = basic_elt(env, 2); // prepf
        return (*qfn1(fn))(fn, v_37);
    }
v_8:
    v_38 = v_39;
    v_37 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_38 == v_37) goto v_13;
    else goto v_14;
v_13:
    v_37 = v_40;
    goto v_6;
v_14:
    v_38 = v_40;
    v_37 = basic_elt(env, 1); // times
    if (!consp(v_38)) goto v_19;
    v_38 = car(v_38);
    if (v_38 == v_37) goto v_18;
    else goto v_19;
v_18:
    stack[-1] = basic_elt(env, 1); // times
    v_37 = v_40;
    if (!car_legal(v_37)) stack[0] = cdrerror(v_37); else
    stack[0] = cdr(v_37);
    v_37 = v_39;
    {   LispObject fn = basic_elt(env, 2); // prepf
    v_37 = (*qfn1(fn))(fn, v_37);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // aconc!*
    v_37 = (*qfn2(fn))(fn, stack[0], v_37);
    }
    {
        LispObject v_43 = stack[-1];
        return cons(v_43, v_37);
    }
v_19:
    stack[0] = v_40;
    v_37 = v_39;
    {   LispObject fn = basic_elt(env, 2); // prepf
    v_37 = (*qfn1(fn))(fn, v_37);
    }
    env = stack[-2];
    v_37 = list2(stack[0], v_37);
    env = stack[-2];
    {
        LispObject fn = basic_elt(env, 4); // retimes
        return (*qfn1(fn))(fn, v_37);
    }
    v_37 = nil;
v_6:
    return onevalue(v_37);
}



// Code for rule!*

static LispObject CC_ruleH(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_137, v_138, v_139, v_140;
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
    stack[0] = v_6;
    stack[-1] = v_5;
    stack[-2] = v_4;
    stack[-3] = v_3;
    stack[-4] = v_2;
// end of prologue
    stack[-5] = nil;
    v_137 = stack[-2];
    setvalue(basic_elt(env, 1), v_137); // frasc!*
    v_138 = stack[-1];
    v_137 = lisp_true;
    if (v_138 == v_137) goto v_14;
    else goto v_15;
v_14:
    v_137 = lisp_true;
    goto v_13;
v_15:
    v_138 = stack[-2];
    v_137 = stack[-1];
    v_137 = Lsubla(nil, v_138, v_137);
    env = stack[-6];
    goto v_13;
    v_137 = nil;
v_13:
    setvalue(basic_elt(env, 2), v_137); // mcond!*
    v_137 = stack[0];
    if (v_137 == nil) goto v_27;
    v_138 = stack[0];
    v_137 = basic_elt(env, 3); // old
    if (v_138 == v_137) goto v_27;
    v_140 = stack[-4];
    v_139 = stack[-3];
    v_138 = stack[-2];
    v_137 = stack[-1];
    v_137 = list4(v_140, v_139, v_138, v_137);
    env = stack[-6];
    setvalue(basic_elt(env, 4), v_137); // newrule!*
    v_137 = stack[-4];
    if (symbolp(v_137)) goto v_40;
    else goto v_41;
v_40:
    v_137 = stack[-4];
    if (!symbolp(v_137)) v_137 = nil;
    else { v_137 = qfastgets(v_137);
           if (v_137 != nil) { v_137 = elt(v_137, 2); // rtype
#ifdef RECORD_GET
             if (v_137 != SPID_NOPROP)
                record_get(elt(fastget_names, 2), 1);
             else record_get(elt(fastget_names, 2), 0),
                v_137 = nil; }
           else record_get(elt(fastget_names, 2), 0); }
#else
             if (v_137 == SPID_NOPROP) v_137 = nil; }}
#endif
    stack[-5] = v_137;
    if (v_137 == nil) goto v_46;
    stack[-1] = stack[-4];
    v_138 = basic_elt(env, 5); // rtype
    v_137 = stack[-5];
    v_138 = cons(v_138, v_137);
    env = stack[-6];
    v_137 = qvalue(basic_elt(env, 6)); // props!*
    v_137 = acons(stack[-1], v_138, v_137);
    env = stack[-6];
    setvalue(basic_elt(env, 6), v_137); // props!*
    v_138 = stack[-4];
    v_137 = basic_elt(env, 5); // rtype
    v_137 = Lremprop(nil, v_138, v_137);
    env = stack[-6];
    goto v_44;
v_46:
v_44:
    v_137 = stack[-4];
    if (!symbolp(v_137)) v_137 = nil;
    else { v_137 = qfastgets(v_137);
           if (v_137 != nil) { v_137 = elt(v_137, 4); // avalue
#ifdef RECORD_GET
             if (v_137 != SPID_NOPROP)
                record_get(elt(fastget_names, 4), 1);
             else record_get(elt(fastget_names, 4), 0),
                v_137 = nil; }
           else record_get(elt(fastget_names, 4), 0); }
#else
             if (v_137 == SPID_NOPROP) v_137 = nil; }}
#endif
    stack[-5] = v_137;
    if (v_137 == nil) goto v_61;
    v_138 = stack[-5];
    v_137 = nil;
    {   LispObject fn = basic_elt(env, 10); // updoldrules
    v_137 = (*qfn2(fn))(fn, v_138, v_137);
    }
    env = stack[-6];
    v_138 = stack[-4];
    v_137 = basic_elt(env, 7); // avalue
    v_137 = Lremprop(nil, v_138, v_137);
    env = stack[-6];
    goto v_59;
v_61:
v_59:
    goto v_39;
v_41:
v_39:
    v_138 = stack[-3];
    v_137 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_138 == v_137) goto v_76;
    else goto v_77;
v_76:
    v_138 = stack[-4];
    v_137 = basic_elt(env, 8); // expt
    if (!consp(v_138)) goto v_83;
    v_138 = car(v_138);
    if (v_138 == v_137) goto v_82;
    else goto v_83;
v_82:
    v_137 = stack[-4];
    if (!car_legal(v_137)) v_137 = cdrerror(v_137); else
    v_137 = cdr(v_137);
    if (!car_legal(v_137)) v_137 = carerror(v_137); else
    v_137 = car(v_137);
    if (symbolp(v_137)) goto v_90;
    v_137 = nil;
    goto v_88;
v_90:
    v_137 = stack[-4];
    if (!car_legal(v_137)) v_137 = cdrerror(v_137); else
    v_137 = cdr(v_137);
    if (!car_legal(v_137)) v_137 = cdrerror(v_137); else
    v_137 = cdr(v_137);
    if (!car_legal(v_137)) v_137 = carerror(v_137); else
    v_137 = car(v_137);
    if (is_number(v_137)) goto v_100;
    v_137 = nil;
    goto v_98;
v_100:
    v_137 = stack[-4];
    if (!car_legal(v_137)) v_137 = cdrerror(v_137); else
    v_137 = cdr(v_137);
    if (!car_legal(v_137)) v_138 = carerror(v_137); else
    v_138 = car(v_137);
    v_137 = qvalue(basic_elt(env, 9)); // asymplis!*
    v_137 = Lassoc(nil, v_138, v_137);
    stack[-5] = v_137;
    goto v_98;
    v_137 = nil;
v_98:
    goto v_88;
    v_137 = nil;
v_88:
    goto v_81;
v_83:
    v_137 = nil;
    goto v_81;
    v_137 = nil;
v_81:
    goto v_75;
v_77:
    v_137 = nil;
    goto v_75;
    v_137 = nil;
v_75:
    if (v_137 == nil) goto v_73;
    v_138 = stack[-5];
    v_137 = nil;
    {   LispObject fn = basic_elt(env, 10); // updoldrules
    v_137 = (*qfn2(fn))(fn, v_138, v_137);
    }
    env = stack[-6];
    goto v_71;
v_73:
v_71:
    goto v_25;
v_27:
v_25:
    stack[-1] = stack[-4];
    v_138 = stack[0];
    v_137 = basic_elt(env, 3); // old
    if (v_138 == v_137) goto v_129;
    else goto v_130;
v_129:
    v_137 = lisp_true;
    goto v_128;
v_130:
    v_137 = stack[0];
    goto v_128;
    v_137 = nil;
v_128:
    v_137 = ncons(v_137);
    env = stack[-6];
    {
        LispObject v_147 = stack[-1];
        LispObject v_148 = stack[-3];
        LispObject v_149 = stack[-2];
        LispObject fn = basic_elt(env, 11); // rule
        return (*qfn4up(fn))(fn, v_147, v_148, v_149, v_137);
    }
    return onevalue(v_137);
}



// Code for constant_exprp

static LispObject CC_constant_exprp(LispObject env,
                         LispObject v_2)
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
        push(v_2);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_105 = v_2;
// end of prologue
    v_104 = v_105;
    if (!consp(v_104)) goto v_6;
    else goto v_7;
v_6:
    v_104 = v_105;
    v_104 = (is_number(v_104) ? lisp_true : nil);
    if (v_104 == nil) goto v_11;
    else goto v_10;
v_11:
    v_106 = v_105;
    v_104 = basic_elt(env, 1); // constant
    v_104 = Lflagp(nil, v_106, v_104);
    env = stack[0];
    if (v_104 == nil) goto v_17;
    v_104 = lisp_true;
    goto v_15;
v_17:
    v_104 = basic_elt(env, 2); // i
    if (v_105 == v_104) goto v_26;
    else goto v_27;
v_26:
    v_104 = basic_elt(env, 2); // i
    if (!symbolp(v_104)) v_104 = nil;
    else { v_104 = qfastgets(v_104);
           if (v_104 != nil) { v_104 = elt(v_104, 56); // idvalfn
#ifdef RECORD_GET
             if (v_104 != SPID_NOPROP)
                record_get(elt(fastget_names, 56), 1);
             else record_get(elt(fastget_names, 56), 0),
                v_104 = nil; }
           else record_get(elt(fastget_names, 56), 0); }
#else
             if (v_104 == SPID_NOPROP) v_104 = nil; }}
#endif
    goto v_25;
v_27:
    v_104 = nil;
    goto v_25;
    v_104 = nil;
v_25:
    goto v_15;
    v_104 = nil;
v_15:
v_10:
    goto v_5;
v_7:
    v_104 = v_105;
    if (!car_legal(v_104)) v_106 = carerror(v_104); else
    v_106 = car(v_104);
    v_104 = basic_elt(env, 3); // realvalued
    v_104 = Lflagp(nil, v_106, v_104);
    env = stack[0];
    if (v_104 == nil) goto v_44;
    v_104 = lisp_true;
    goto v_42;
v_44:
    v_104 = v_105;
    if (!car_legal(v_104)) v_106 = carerror(v_104); else
    v_106 = car(v_104);
    v_104 = basic_elt(env, 4); // alwaysrealvalued
    v_104 = Lflagp(nil, v_106, v_104);
    env = stack[0];
    if (v_104 == nil) goto v_55;
    v_104 = lisp_true;
    goto v_53;
v_55:
    v_104 = v_105;
    if (!car_legal(v_104)) v_106 = carerror(v_104); else
    v_106 = car(v_104);
    v_104 = basic_elt(env, 5); // (plus minus difference times quotient)
    v_104 = Lmemq(nil, v_106, v_104);
    if (v_104 == nil) goto v_65;
    else goto v_64;
v_65:
    v_104 = v_105;
    if (!car_legal(v_104)) v_106 = carerror(v_104); else
    v_106 = car(v_104);
    v_104 = basic_elt(env, 6); // !:rd!:
    v_104 = get(v_106, v_104);
    env = stack[0];
    if (v_104 == nil) goto v_72;
    else goto v_71;
v_72:
    v_104 = qvalue(basic_elt(env, 7)); // !*complex
    if (v_104 == nil) goto v_79;
    else goto v_80;
v_79:
    v_104 = nil;
    goto v_78;
v_80:
    v_104 = v_105;
    if (!car_legal(v_104)) v_106 = carerror(v_104); else
    v_106 = car(v_104);
    v_104 = basic_elt(env, 8); // !:cr!:
    v_104 = get(v_106, v_104);
    env = stack[0];
    goto v_78;
    v_104 = nil;
v_78:
v_71:
v_64:
    goto v_53;
    v_104 = nil;
v_53:
    goto v_42;
    v_104 = nil;
v_42:
    if (v_104 == nil) goto v_39;
    else goto v_40;
v_39:
    v_104 = nil;
    goto v_38;
v_40:
    v_104 = v_105;
    if (!car_legal(v_104)) v_104 = cdrerror(v_104); else
    v_104 = cdr(v_104);
    if (!consp(v_104)) goto v_95;
    v_104 = v_105;
    if (!car_legal(v_104)) v_104 = cdrerror(v_104); else
    v_104 = cdr(v_104);
    {
        LispObject fn = basic_elt(env, 9); // constant_expr_listp
        return (*qfn1(fn))(fn, v_104);
    }
v_95:
    v_104 = nil;
    goto v_93;
    v_104 = nil;
v_93:
    goto v_38;
    v_104 = nil;
v_38:
    goto v_5;
    v_104 = nil;
v_5:
    return onevalue(v_104);
}



// Code for pasf_smordtable1

static LispObject CC_pasf_smordtable1(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_15, v_16, v_17;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_15 = v_3;
    v_16 = v_2;
// end of prologue
    v_17 = basic_elt(env, 1); // ((lessp (lessp 1) (leq 1) (equal false) (neq 1) (geq false) (greaterp false) (cong nil) (ncong nil)) (leq (lessp 1) (leq 1)
// (equal false) (neq 1) (geq false) (greaterp false) (cong nil) (ncong nil)) (equal (lessp 1) (leq 1) (equal false) (neq 1)
// (geq false) (greaterp false) (cong nil) (ncong nil)) (neq (lessp nil) (leq nil) (equal 2) (neq nil) (geq 2) (greaterp 2)
// (cong nil) (ncong nil)) (geq (lessp nil) (leq nil) (equal 2) (neq nil) (geq 2) (greaterp 2) (cong nil) (ncong nil)) (greaterp
// (lessp nil) (leq nil) (equal 2) (neq nil) (geq 2) (greaterp 2) (cong nil) (ncong nil)))
    v_16 = Latsoc(nil, v_16, v_17);
    v_15 = Latsoc(nil, v_15, v_16);
    if (!car_legal(v_15)) v_15 = cdrerror(v_15); else
    v_15 = cdr(v_15);
    return onevalue(v_15);
}



// Code for ps!:difference!-erule

static LispObject CC_psTdifferenceKerule(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    v_18 = stack[-1];
    if (!car_legal(v_18)) v_18 = cdrerror(v_18); else
    v_18 = cdr(v_18);
    if (!car_legal(v_18)) v_19 = carerror(v_18); else
    v_19 = car(v_18);
    v_18 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // ps!:evaluate
    stack[-2] = (*qfn2(fn))(fn, v_19, v_18);
    }
    env = stack[-3];
    v_18 = stack[-1];
    if (!car_legal(v_18)) v_18 = cdrerror(v_18); else
    v_18 = cdr(v_18);
    if (!car_legal(v_18)) v_18 = cdrerror(v_18); else
    v_18 = cdr(v_18);
    if (!car_legal(v_18)) v_19 = carerror(v_18); else
    v_19 = car(v_18);
    v_18 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // ps!:evaluate
    v_18 = (*qfn2(fn))(fn, v_19, v_18);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 2); // negsq
    v_18 = (*qfn1(fn))(fn, v_18);
    }
    env = stack[-3];
    {
        LispObject v_23 = stack[-2];
        LispObject fn = basic_elt(env, 3); // addsq
        return (*qfn2(fn))(fn, v_23, v_18);
    }
}



// Code for getvariables

static LispObject CC_getvariables(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_11, v_12;
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
    v_12 = v_2;
// end of prologue
    v_11 = v_12;
    if (!car_legal(v_11)) stack[0] = carerror(v_11); else
    stack[0] = car(v_11);
    v_11 = v_12;
    if (!car_legal(v_11)) v_12 = cdrerror(v_11); else
    v_12 = cdr(v_11);
    v_11 = nil;
    {   LispObject fn = basic_elt(env, 1); // varsinsf
    v_11 = (*qfn2(fn))(fn, v_12, v_11);
    }
    env = stack[-1];
    {
        LispObject v_14 = stack[0];
        LispObject fn = basic_elt(env, 1); // varsinsf
        return (*qfn2(fn))(fn, v_14, v_11);
    }
}



// Code for gbftimes

static LispObject CC_gbftimes(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_34, v_35, v_36;
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
    v_35 = v_3;
    v_36 = v_2;
// end of prologue
    v_34 = v_36;
    if (!car_legal(v_34)) v_34 = carerror(v_34); else
    v_34 = car(v_34);
    stack[-4] = v_34;
    v_34 = v_36;
    if (!car_legal(v_34)) v_34 = cdrerror(v_34); else
    v_34 = cdr(v_34);
    stack[-3] = v_34;
    v_34 = v_35;
    if (!car_legal(v_34)) v_34 = carerror(v_34); else
    v_34 = car(v_34);
    stack[-2] = v_34;
    v_34 = v_35;
    if (!car_legal(v_34)) v_34 = cdrerror(v_34); else
    v_34 = cdr(v_34);
    stack[-1] = v_34;
    v_35 = stack[-4];
    v_34 = stack[-2];
    {   LispObject fn = basic_elt(env, 1); // csl_timbf
    stack[0] = (*qfn2(fn))(fn, v_35, v_34);
    }
    env = stack[-5];
    v_35 = stack[-3];
    v_34 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // csl_timbf
    v_34 = (*qfn2(fn))(fn, v_35, v_34);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 2); // difbf
    stack[0] = (*qfn2(fn))(fn, stack[0], v_34);
    }
    env = stack[-5];
    v_35 = stack[-4];
    v_34 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // csl_timbf
    stack[-1] = (*qfn2(fn))(fn, v_35, v_34);
    }
    env = stack[-5];
    v_35 = stack[-3];
    v_34 = stack[-2];
    {   LispObject fn = basic_elt(env, 1); // csl_timbf
    v_34 = (*qfn2(fn))(fn, v_35, v_34);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 3); // plubf
    v_34 = (*qfn2(fn))(fn, stack[-1], v_34);
    }
    {
        LispObject v_42 = stack[0];
        return cons(v_42, v_34);
    }
    return onevalue(v_34);
}



// Code for r2oreaction

static LispObject CC_r2oreaction(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_103, v_104, v_105;
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
    stack[-4] = v_5;
    v_103 = v_4;
    stack[-5] = v_3;
    stack[-1] = v_2;
// end of prologue
    stack[-6] = v_103;
    v_103 = stack[-1];
    stack[-2] = v_103;
v_15:
    v_103 = stack[-2];
    if (v_103 == nil) goto v_19;
    else goto v_20;
v_19:
    goto v_14;
v_20:
    v_103 = stack[-2];
    if (!car_legal(v_103)) v_103 = carerror(v_103); else
    v_103 = car(v_103);
    stack[0] = basic_elt(env, 1); // times
    stack[-3] = stack[-6];
    v_105 = basic_elt(env, 2); // expt
    v_104 = v_103;
    if (!car_legal(v_104)) v_104 = cdrerror(v_104); else
    v_104 = cdr(v_104);
    if (!car_legal(v_103)) v_103 = carerror(v_103); else
    v_103 = car(v_103);
    v_103 = list3(v_105, v_104, v_103);
    env = stack[-7];
    v_103 = list3(stack[0], stack[-3], v_103);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 5); // aeval
    v_103 = (*qfn1(fn))(fn, v_103);
    }
    env = stack[-7];
    stack[-6] = v_103;
    v_103 = stack[-2];
    if (!car_legal(v_103)) v_103 = cdrerror(v_103); else
    v_103 = cdr(v_103);
    stack[-2] = v_103;
    goto v_15;
v_14:
    v_103 = stack[-1];
    stack[-3] = v_103;
v_41:
    v_103 = stack[-3];
    if (v_103 == nil) goto v_45;
    else goto v_46;
v_45:
    goto v_40;
v_46:
    v_103 = stack[-3];
    if (!car_legal(v_103)) v_103 = carerror(v_103); else
    v_103 = car(v_103);
    v_104 = v_103;
    if (!car_legal(v_104)) v_105 = cdrerror(v_104); else
    v_105 = cdr(v_104);
    v_104 = stack[-4];
    v_104 = Lassoc(nil, v_105, v_104);
    stack[-2] = v_104;
    stack[-1] = basic_elt(env, 3); // difference
    if (!car_legal(v_104)) stack[0] = cdrerror(v_104); else
    stack[0] = cdr(v_104);
    v_105 = basic_elt(env, 1); // times
    v_104 = stack[-6];
    if (!car_legal(v_103)) v_103 = carerror(v_103); else
    v_103 = car(v_103);
    v_103 = list3(v_105, v_104, v_103);
    env = stack[-7];
    v_103 = list3(stack[-1], stack[0], v_103);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 6); // reval
    v_103 = (*qfn1(fn))(fn, v_103);
    }
    env = stack[-7];
    if (!car_legal(stack[-2])) rplacd_fails(stack[-2]);
    setcdr(stack[-2], v_103);
    v_103 = stack[-3];
    if (!car_legal(v_103)) v_103 = cdrerror(v_103); else
    v_103 = cdr(v_103);
    stack[-3] = v_103;
    goto v_41;
v_40:
    v_103 = stack[-5];
    stack[-3] = v_103;
v_73:
    v_103 = stack[-3];
    if (v_103 == nil) goto v_77;
    else goto v_78;
v_77:
    goto v_72;
v_78:
    v_103 = stack[-3];
    if (!car_legal(v_103)) v_103 = carerror(v_103); else
    v_103 = car(v_103);
    v_104 = v_103;
    if (!car_legal(v_104)) v_105 = cdrerror(v_104); else
    v_105 = cdr(v_104);
    v_104 = stack[-4];
    v_104 = Lassoc(nil, v_105, v_104);
    stack[-2] = v_104;
    stack[-1] = basic_elt(env, 4); // plus
    if (!car_legal(v_104)) stack[0] = cdrerror(v_104); else
    stack[0] = cdr(v_104);
    v_105 = basic_elt(env, 1); // times
    v_104 = stack[-6];
    if (!car_legal(v_103)) v_103 = carerror(v_103); else
    v_103 = car(v_103);
    v_103 = list3(v_105, v_104, v_103);
    env = stack[-7];
    v_103 = list3(stack[-1], stack[0], v_103);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 6); // reval
    v_103 = (*qfn1(fn))(fn, v_103);
    }
    env = stack[-7];
    if (!car_legal(stack[-2])) rplacd_fails(stack[-2]);
    setcdr(stack[-2], v_103);
    v_103 = stack[-3];
    if (!car_legal(v_103)) v_103 = cdrerror(v_103); else
    v_103 = cdr(v_103);
    stack[-3] = v_103;
    goto v_73;
v_72:
    v_103 = stack[-4];
    return onevalue(v_103);
}



// Code for binc

static LispObject CC_binc(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_22, v_23, v_24;
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
    v_24 = v_2;
// end of prologue
    v_23 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_22 = stack[0];
    if (v_23 == v_22) goto v_7;
    else goto v_8;
v_7:
    v_22 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_6;
v_8:
    v_23 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_22 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // mk!-numr
    v_22 = (*qfn3(fn))(fn, v_24, v_23, v_22);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 2); // constimes
    stack[-1] = (*qfn1(fn))(fn, v_22);
    }
    env = stack[-2];
    v_22 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // factorial
    v_22 = (*qfn1(fn))(fn, v_22);
    }
    env = stack[-2];
    {
        LispObject v_27 = stack[-1];
        LispObject fn = basic_elt(env, 4); // listquotient
        return (*qfn2(fn))(fn, v_27, v_22);
    }
    v_22 = nil;
v_6:
    return onevalue(v_22);
}



// Code for dp_2a

static LispObject CC_dp_2a(LispObject env,
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
    v_16 = v_2;
// end of prologue
    v_15 = v_16;
    if (v_15 == nil) goto v_6;
    else goto v_7;
v_6:
    v_15 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_5;
v_7:
    v_15 = v_16;
    {   LispObject fn = basic_elt(env, 1); // dp!=2a
    v_15 = (*qfn1(fn))(fn, v_15);
    }
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // dp!=replus
        return (*qfn1(fn))(fn, v_15);
    }
    v_15 = nil;
v_5:
    return onevalue(v_15);
}



// Code for cde_list2id

static LispObject CC_cde_list2id(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_60, v_61;
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
    v_61 = v_2;
// end of prologue
    v_60 = v_61;
    if (!consp(v_60)) goto v_6;
    else goto v_7;
v_6:
    v_60 = basic_elt(env, 1); // "argument for cde_list2id must be a list"
    {
        LispObject fn = basic_elt(env, 2); // rederr
        return (*qfn1(fn))(fn, v_60);
    }
v_7:
    v_60 = v_61;
    stack[-3] = v_60;
v_20:
    v_60 = stack[-3];
    if (v_60 == nil) goto v_25;
    else goto v_26;
v_25:
    v_60 = nil;
    goto v_19;
v_26:
    v_60 = stack[-3];
    if (!car_legal(v_60)) v_60 = carerror(v_60); else
    v_60 = car(v_60);
    v_60 = Lexplode(nil, v_60);
    env = stack[-4];
    stack[-2] = v_60;
    v_60 = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // lastpair
    v_60 = (*qfn1(fn))(fn, v_60);
    }
    env = stack[-4];
    stack[-1] = v_60;
    v_60 = stack[-3];
    if (!car_legal(v_60)) v_60 = cdrerror(v_60); else
    v_60 = cdr(v_60);
    stack[-3] = v_60;
    v_60 = stack[-1];
    if (!consp(v_60)) goto v_40;
    else goto v_41;
v_40:
    goto v_20;
v_41:
v_21:
    v_60 = stack[-3];
    if (v_60 == nil) goto v_45;
    else goto v_46;
v_45:
    v_60 = stack[-2];
    goto v_19;
v_46:
    stack[0] = stack[-1];
    v_60 = stack[-3];
    if (!car_legal(v_60)) v_60 = carerror(v_60); else
    v_60 = car(v_60);
    v_60 = Lexplode(nil, v_60);
    env = stack[-4];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_60);
    v_60 = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // lastpair
    v_60 = (*qfn1(fn))(fn, v_60);
    }
    env = stack[-4];
    stack[-1] = v_60;
    v_60 = stack[-3];
    if (!car_legal(v_60)) v_60 = cdrerror(v_60); else
    v_60 = cdr(v_60);
    stack[-3] = v_60;
    goto v_21;
v_19:
    v_60 = Lcompress(nil, v_60);
        return Lintern(nil, v_60);
    v_60 = nil;
    return onevalue(v_60);
}



// Code for subdf

static LispObject CC_subdf(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_62, v_63, v_64;
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
v_1:
    v_62 = stack[-4];
    if (v_62 == nil) goto v_8;
    else goto v_9;
v_8:
    v_62 = nil;
    goto v_7;
v_9:
    v_62 = stack[-4];
    if (!car_legal(v_62)) v_62 = carerror(v_62); else
    v_62 = car(v_62);
    if (!car_legal(v_62)) v_62 = cdrerror(v_62); else
    v_62 = cdr(v_62);
    if (!car_legal(v_62)) stack[0] = carerror(v_62); else
    stack[0] = car(v_62);
    v_63 = stack[-2];
    v_62 = stack[-3];
    v_62 = cons(v_63, v_62);
    env = stack[-6];
    v_62 = ncons(v_62);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 1); // subf
    v_62 = (*qfn2(fn))(fn, stack[0], v_62);
    }
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 2); // subs2q
    v_62 = (*qfn1(fn))(fn, v_62);
    }
    env = stack[-6];
    stack[-5] = v_62;
    stack[0] = stack[-5];
    v_63 = nil;
    v_62 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_62 = cons(v_63, v_62);
    env = stack[-6];
    if (equal(stack[0], v_62)) goto v_29;
    else goto v_30;
v_29:
    v_62 = stack[-4];
    if (!car_legal(v_62)) v_64 = cdrerror(v_62); else
    v_64 = cdr(v_62);
    v_63 = stack[-3];
    v_62 = stack[-2];
    stack[-4] = v_64;
    stack[-3] = v_63;
    stack[-2] = v_62;
    goto v_1;
v_30:
    v_62 = stack[-4];
    if (!car_legal(v_62)) v_62 = carerror(v_62); else
    v_62 = car(v_62);
    if (!car_legal(v_62)) stack[-1] = carerror(v_62); else
    stack[-1] = car(v_62);
    v_62 = stack[-5];
    if (!car_legal(v_62)) stack[0] = carerror(v_62); else
    stack[0] = car(v_62);
    v_62 = stack[-5];
    if (!car_legal(v_62)) v_63 = cdrerror(v_62); else
    v_63 = cdr(v_62);
    v_62 = stack[-4];
    if (!car_legal(v_62)) v_62 = carerror(v_62); else
    v_62 = car(v_62);
    if (!car_legal(v_62)) v_62 = cdrerror(v_62); else
    v_62 = cdr(v_62);
    if (!car_legal(v_62)) v_62 = cdrerror(v_62); else
    v_62 = cdr(v_62);
    {   LispObject fn = basic_elt(env, 3); // !*multf
    v_62 = (*qfn2(fn))(fn, v_63, v_62);
    }
    env = stack[-6];
    v_62 = list2star(stack[-1], stack[0], v_62);
    env = stack[-6];
    stack[0] = ncons(v_62);
    env = stack[-6];
    v_62 = stack[-4];
    if (!car_legal(v_62)) v_64 = cdrerror(v_62); else
    v_64 = cdr(v_62);
    v_63 = stack[-3];
    v_62 = stack[-2];
    {   LispObject fn = basic_elt(env, 0); // subdf
    v_62 = (*qfn3(fn))(fn, v_64, v_63, v_62);
    }
    env = stack[-6];
    {
        LispObject v_71 = stack[0];
        LispObject fn = basic_elt(env, 4); // plusdf
        return (*qfn2(fn))(fn, v_71, v_62);
    }
    v_62 = nil;
    goto v_7;
    v_62 = nil;
v_7:
    return onevalue(v_62);
}



// Code for talp_mk!-invs

static LispObject CC_talp_mkKinvs(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_63, v_64;
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
    v_63 = v_2;
// end of prologue
    if (v_63 == nil) goto v_8;
    stack[-5] = stack[-4];
    v_63 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-3] = v_63;
    v_63 = stack[-4];
    if (!car_legal(v_63)) v_64 = cdrerror(v_63); else
    v_64 = cdr(v_63);
    v_63 = stack[-3];
    v_63 = difference2(v_64, v_63);
    env = stack[-6];
    v_63 = Lminusp(nil, v_63);
    env = stack[-6];
    if (v_63 == nil) goto v_22;
    v_63 = nil;
    goto v_16;
v_22:
    v_63 = stack[-4];
    if (!car_legal(v_63)) v_64 = carerror(v_63); else
    v_64 = car(v_63);
    v_63 = stack[-3];
    {   LispObject fn = basic_elt(env, 1); // talp_mkinvop
    v_64 = (*qfn2(fn))(fn, v_64, v_63);
    }
    env = stack[-6];
    v_63 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_63 = cons(v_64, v_63);
    env = stack[-6];
    v_63 = ncons(v_63);
    env = stack[-6];
    stack[-1] = v_63;
    stack[-2] = v_63;
v_17:
    v_63 = stack[-3];
    v_63 = add1(v_63);
    env = stack[-6];
    stack[-3] = v_63;
    v_63 = stack[-4];
    if (!car_legal(v_63)) v_64 = cdrerror(v_63); else
    v_64 = cdr(v_63);
    v_63 = stack[-3];
    v_63 = difference2(v_64, v_63);
    env = stack[-6];
    v_63 = Lminusp(nil, v_63);
    env = stack[-6];
    if (v_63 == nil) goto v_41;
    v_63 = stack[-2];
    goto v_16;
v_41:
    stack[0] = stack[-1];
    v_63 = stack[-4];
    if (!car_legal(v_63)) v_64 = carerror(v_63); else
    v_64 = car(v_63);
    v_63 = stack[-3];
    {   LispObject fn = basic_elt(env, 1); // talp_mkinvop
    v_64 = (*qfn2(fn))(fn, v_64, v_63);
    }
    env = stack[-6];
    v_63 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_63 = cons(v_64, v_63);
    env = stack[-6];
    v_63 = ncons(v_63);
    env = stack[-6];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_63);
    v_63 = stack[-1];
    if (!car_legal(v_63)) v_63 = cdrerror(v_63); else
    v_63 = cdr(v_63);
    stack[-1] = v_63;
    goto v_17;
v_16:
    {
        LispObject v_71 = stack[-5];
        return cons(v_71, v_63);
    }
v_8:
    v_63 = stack[-4];
    return ncons(v_63);
    v_63 = nil;
    return onevalue(v_63);
}



// Code for qqe_dfs

static LispObject CC_qqe_dfs(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_69 = v_2;
// end of prologue
    v_68 = lisp_true;
    stack[0] = v_68;
    v_68 = v_69;
    if (!consp(v_68)) goto v_12;
    else goto v_13;
v_12:
    v_68 = stack[-1];
    if (v_69 == v_68) goto v_17;
    else goto v_18;
v_17:
    v_68 = lisp_true;
    goto v_8;
v_18:
    v_68 = nil;
    goto v_8;
    goto v_11;
v_13:
v_11:
    v_68 = v_69;
    stack[-2] = v_68;
v_29:
    v_68 = stack[-2];
    if (v_68 == nil) goto v_32;
    v_68 = stack[0];
    if (v_68 == nil) goto v_32;
    goto v_33;
v_32:
    goto v_28;
v_33:
    v_68 = stack[-2];
    if (!car_legal(v_68)) v_69 = carerror(v_68); else
    v_69 = car(v_68);
    v_68 = stack[-1];
    if (v_69 == v_68) goto v_41;
    else goto v_42;
v_41:
    v_68 = nil;
    stack[0] = v_68;
    goto v_40;
v_42:
v_40:
    v_68 = stack[-2];
    if (!car_legal(v_68)) v_69 = carerror(v_68); else
    v_69 = car(v_68);
    v_68 = stack[-1];
    {   LispObject fn = basic_elt(env, 0); // qqe_dfs
    v_68 = (*qfn2(fn))(fn, v_69, v_68);
    }
    env = stack[-3];
    if (v_68 == nil) goto v_50;
    v_68 = nil;
    stack[0] = v_68;
    goto v_48;
v_50:
v_48:
    v_68 = stack[-2];
    if (!car_legal(v_68)) v_68 = cdrerror(v_68); else
    v_68 = cdr(v_68);
    stack[-2] = v_68;
    goto v_29;
v_28:
    v_68 = stack[0];
    if (v_68 == nil) goto v_62;
    v_68 = nil;
    goto v_8;
v_62:
    v_68 = lisp_true;
    goto v_8;
    v_68 = nil;
v_8:
    return onevalue(v_68);
}



// Code for i2ps

static LispObject CC_i2ps(LispObject env,
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
    return onevalue(v_5);
}



// Code for ldf!-pow!-var

static LispObject CC_ldfKpowKvar(LispObject env,
                         LispObject v_2)
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
    v_69 = v_2;
// end of prologue
    v_70 = nil;
    stack[-2] = nil;
    stack[-1] = v_69;
v_11:
    v_69 = stack[-1];
    if (v_69 == nil) goto v_15;
    else goto v_16;
v_15:
    goto v_10;
v_16:
    v_69 = stack[-1];
    if (!car_legal(v_69)) v_69 = carerror(v_69); else
    v_69 = car(v_69);
    stack[0] = v_70;
    if (!car_legal(v_69)) v_69 = cdrerror(v_69); else
    v_69 = cdr(v_69);
    {   LispObject fn = basic_elt(env, 3); // kernels
    v_69 = (*qfn1(fn))(fn, v_69);
    }
    env = stack[-3];
    v_69 = Lappend_2(nil, stack[0], v_69);
    env = stack[-3];
    v_70 = v_69;
    v_69 = stack[-1];
    if (!car_legal(v_69)) v_69 = cdrerror(v_69); else
    v_69 = cdr(v_69);
    stack[-1] = v_69;
    goto v_11;
v_10:
    v_69 = v_70;
    {   LispObject fn = basic_elt(env, 4); // makeset
    v_69 = (*qfn1(fn))(fn, v_69);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 5); // prlist
    v_69 = (*qfn1(fn))(fn, v_69);
    }
    env = stack[-3];
    stack[0] = v_69;
v_32:
    v_69 = stack[0];
    if (v_69 == nil) goto v_38;
    else goto v_39;
v_38:
    goto v_31;
v_39:
    v_69 = stack[0];
    if (!car_legal(v_69)) v_69 = carerror(v_69); else
    v_69 = car(v_69);
    v_71 = v_69;
    v_70 = v_71;
    v_69 = basic_elt(env, 1); // x
    if (!consp(v_70)) goto v_52;
    v_70 = car(v_70);
    if (v_70 == v_69) goto v_51;
    else goto v_52;
v_51:
    v_69 = lisp_true;
    goto v_50;
v_52:
    v_70 = v_71;
    v_69 = basic_elt(env, 2); // u
    v_69 = Leqcar(nil, v_70, v_69);
    env = stack[-3];
    goto v_50;
    v_69 = nil;
v_50:
    if (v_69 == nil) goto v_48;
    v_70 = v_71;
    v_69 = stack[-2];
    v_69 = cons(v_70, v_69);
    env = stack[-3];
    stack[-2] = v_69;
    goto v_46;
v_48:
v_46:
    v_69 = stack[0];
    if (!car_legal(v_69)) v_69 = cdrerror(v_69); else
    v_69 = cdr(v_69);
    stack[0] = v_69;
    goto v_32;
v_31:
    v_69 = stack[-2];
    {
        LispObject fn = basic_elt(env, 4); // makeset
        return (*qfn1(fn))(fn, v_69);
    }
    return onevalue(v_69);
}



// Code for fast!-augment!-columns

static LispObject CC_fastKaugmentKcolumns(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_113, v_114, v_115;
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
    push(nil, nil);
    stack_popper stack_popper_var(13);
// copy arguments values to proper place
    stack[-9] = v_3;
    stack[-10] = v_2;
// end of prologue
    v_113 = stack[-10];
    {   LispObject fn = basic_elt(env, 1); // fast!-row!-dim
    v_113 = (*qfn1(fn))(fn, v_113);
    }
    env = stack[-12];
    stack[-8] = v_113;
    v_113 = stack[-9];
    v_113 = Llength(nil, v_113);
    env = stack[-12];
    stack[-6] = v_113;
    v_113 = stack[-8];
    v_113 = sub1(v_113);
    env = stack[-12];
    v_113 = Lmkvect(nil, v_113);
    env = stack[-12];
    stack[-11] = v_113;
    v_113 = stack[-9];
    if (!consp(v_113)) goto v_21;
    else goto v_22;
v_21:
    v_113 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-3] = v_113;
v_27:
    v_113 = stack[-8];
    v_114 = sub1(v_113);
    env = stack[-12];
    v_113 = stack[-3];
    v_113 = difference2(v_114, v_113);
    env = stack[-12];
    v_113 = Lminusp(nil, v_113);
    env = stack[-12];
    if (v_113 == nil) goto v_32;
    goto v_26;
v_32:
    v_113 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_113 = Lmkvect(nil, v_113);
    env = stack[-12];
    stack[-7] = v_113;
    stack[-2] = stack[-7];
    stack[-1] = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[0] = stack[-10];
    v_113 = stack[-3];
    v_114 = add1(v_113);
    env = stack[-12];
    v_113 = stack[-9];
    {   LispObject fn = basic_elt(env, 2); // sc_getmat
    v_113 = (*qfn3(fn))(fn, stack[0], v_114, v_113);
    }
    env = stack[-12];
    {   LispObject fn = basic_elt(env, 3); // sc_iputv
    v_113 = (*qfn3(fn))(fn, stack[-2], stack[-1], v_113);
    }
    env = stack[-12];
    v_115 = stack[-11];
    v_114 = stack[-3];
    v_113 = stack[-7];
    {   LispObject fn = basic_elt(env, 3); // sc_iputv
    v_113 = (*qfn3(fn))(fn, v_115, v_114, v_113);
    }
    env = stack[-12];
    v_113 = stack[-3];
    v_113 = add1(v_113);
    env = stack[-12];
    stack[-3] = v_113;
    goto v_27;
v_26:
    goto v_20;
v_22:
    v_113 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-5] = v_113;
v_60:
    v_113 = stack[-8];
    v_114 = sub1(v_113);
    env = stack[-12];
    v_113 = stack[-5];
    v_113 = difference2(v_114, v_113);
    env = stack[-12];
    v_113 = Lminusp(nil, v_113);
    env = stack[-12];
    if (v_113 == nil) goto v_65;
    goto v_59;
v_65:
    v_113 = stack[-6];
    v_113 = sub1(v_113);
    env = stack[-12];
    v_113 = Lmkvect(nil, v_113);
    env = stack[-12];
    stack[-7] = v_113;
    v_113 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-4] = v_113;
v_78:
    v_113 = stack[-6];
    v_114 = sub1(v_113);
    env = stack[-12];
    v_113 = stack[-4];
    v_113 = difference2(v_114, v_113);
    env = stack[-12];
    v_113 = Lminusp(nil, v_113);
    env = stack[-12];
    if (v_113 == nil) goto v_83;
    goto v_77;
v_83:
    stack[0] = stack[-10];
    v_113 = stack[-5];
    v_113 = add1(v_113);
    env = stack[-12];
    {   LispObject fn = basic_elt(env, 4); // sc_getrow
    v_113 = (*qfn2(fn))(fn, stack[0], v_113);
    }
    env = stack[-12];
    stack[-3] = stack[-7];
    stack[-2] = stack[-4];
    stack[-1] = v_113;
    stack[0] = stack[-9];
    v_113 = stack[-4];
    v_113 = add1(v_113);
    env = stack[-12];
    {   LispObject fn = basic_elt(env, 5); // nth
    v_113 = (*qfn2(fn))(fn, stack[0], v_113);
    }
    env = stack[-12];
    v_113 = sub1(v_113);
    env = stack[-12];
    {   LispObject fn = basic_elt(env, 6); // sc_igetv
    v_113 = (*qfn2(fn))(fn, stack[-1], v_113);
    }
    env = stack[-12];
    {   LispObject fn = basic_elt(env, 3); // sc_iputv
    v_113 = (*qfn3(fn))(fn, stack[-3], stack[-2], v_113);
    }
    env = stack[-12];
    v_113 = stack[-4];
    v_113 = add1(v_113);
    env = stack[-12];
    stack[-4] = v_113;
    goto v_78;
v_77:
    v_115 = stack[-11];
    v_114 = stack[-5];
    v_113 = stack[-7];
    {   LispObject fn = basic_elt(env, 3); // sc_iputv
    v_113 = (*qfn3(fn))(fn, v_115, v_114, v_113);
    }
    env = stack[-12];
    v_113 = stack[-5];
    v_113 = add1(v_113);
    env = stack[-12];
    stack[-5] = v_113;
    goto v_60;
v_59:
    goto v_20;
v_20:
    v_113 = stack[-11];
    return onevalue(v_113);
}



// Code for decimal2internal

static LispObject CC_decimal2internal(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    v_30 = stack[0];
    v_29 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_29 = static_cast<LispObject>(geq2(v_30, v_29));
    v_29 = v_29 ? lisp_true : nil;
    env = stack[-3];
    if (v_29 == nil) goto v_8;
    stack[-2] = basic_elt(env, 1); // !:rd!:
    v_30 = static_cast<LispObject>(160)+TAG_FIXNUM; // 10
    v_29 = stack[0];
    v_29 = Lexpt(nil, v_30, v_29);
    env = stack[-3];
    v_30 = times2(stack[-1], v_29);
    v_29 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {
        LispObject v_35 = stack[-2];
        return list2star(v_35, v_30, v_29);
    }
v_8:
    v_31 = basic_elt(env, 1); // !:rd!:
    v_30 = stack[-1];
    v_29 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-1] = list2star(v_31, v_30, v_29);
    env = stack[-3];
    v_29 = stack[0];
    v_29 = negate(v_29);
    env = stack[-3];
    {
        LispObject v_36 = stack[-1];
        LispObject fn = basic_elt(env, 2); // divide!-by!-power!-of!-ten
        return (*qfn2(fn))(fn, v_36, v_29);
    }
    v_29 = nil;
    return onevalue(v_29);
}



// Code for dvertex!-to!-projector

static LispObject CC_dvertexKtoKprojector(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_62, v_63, v_64;
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
    v_62 = stack[-2];
    if (!car_legal(v_62)) v_62 = cdrerror(v_62); else
    v_62 = cdr(v_62);
    if (!car_legal(v_62)) v_64 = carerror(v_62); else
    v_64 = car(v_62);
    v_63 = stack[-1];
    v_62 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // mktails
    v_62 = (*qfn3(fn))(fn, v_64, v_63, v_62);
    }
    env = stack[-4];
    stack[-3] = v_62;
    v_62 = stack[-3];
    if (!car_legal(v_62)) v_62 = carerror(v_62); else
    v_62 = car(v_62);
    {   LispObject fn = basic_elt(env, 2); // repeatsp
    v_62 = (*qfn1(fn))(fn, v_62);
    }
    env = stack[-4];
    if (v_62 == nil) goto v_21;
    v_62 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_11;
v_21:
    v_62 = stack[-2];
    if (!car_legal(v_62)) v_62 = cdrerror(v_62); else
    v_62 = cdr(v_62);
    if (!car_legal(v_62)) v_62 = cdrerror(v_62); else
    v_62 = cdr(v_62);
    if (!car_legal(v_62)) v_64 = carerror(v_62); else
    v_64 = car(v_62);
    v_63 = stack[-1];
    v_62 = stack[-3];
    if (!car_legal(v_62)) v_62 = cdrerror(v_62); else
    v_62 = cdr(v_62);
    {   LispObject fn = basic_elt(env, 1); // mktails
    v_62 = (*qfn3(fn))(fn, v_64, v_63, v_62);
    }
    env = stack[-4];
    stack[-1] = v_62;
    v_62 = stack[-1];
    if (!car_legal(v_62)) v_62 = carerror(v_62); else
    v_62 = car(v_62);
    {   LispObject fn = basic_elt(env, 2); // repeatsp
    v_62 = (*qfn1(fn))(fn, v_62);
    }
    env = stack[-4];
    if (v_62 == nil) goto v_37;
    v_62 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_11;
v_37:
    v_62 = stack[-1];
    if (!car_legal(v_62)) v_62 = cdrerror(v_62); else
    v_62 = cdr(v_62);
    stack[0] = v_62;
    v_62 = stack[-3];
    if (!car_legal(v_62)) stack[-2] = carerror(v_62); else
    stack[-2] = car(v_62);
    v_62 = stack[-1];
    if (!car_legal(v_62)) v_62 = carerror(v_62); else
    v_62 = car(v_62);
    v_62 = Lreverse(nil, v_62);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 3); // prop!-simp
    v_62 = (*qfn2(fn))(fn, stack[-2], v_62);
    }
    env = stack[-4];
    stack[-2] = v_62;
    v_62 = stack[-2];
    {   LispObject fn = basic_elt(env, 4); // mk!-contract!-coeff
    v_62 = (*qfn1(fn))(fn, v_62);
    }
    env = stack[-4];
    stack[-1] = v_62;
    v_62 = stack[-2];
    if (!car_legal(v_62)) v_62 = cdrerror(v_62); else
    v_62 = cdr(v_62);
    if (!car_legal(v_62)) v_64 = carerror(v_62); else
    v_64 = car(v_62);
    v_62 = stack[-2];
    if (!car_legal(v_62)) v_62 = cdrerror(v_62); else
    v_62 = cdr(v_62);
    if (!car_legal(v_62)) v_63 = cdrerror(v_62); else
    v_63 = cdr(v_62);
    v_62 = stack[0];
    {   LispObject fn = basic_elt(env, 5); // dpropagator
    v_62 = (*qfn3(fn))(fn, v_64, v_63, v_62);
    }
    {
        LispObject v_69 = stack[-1];
        return cons(v_69, v_62);
    }
v_11:
    return onevalue(v_62);
}



// Code for clogsq

static LispObject CC_clogsq(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_11 = stack[0];
    if (!car_legal(v_11)) v_11 = carerror(v_11); else
    v_11 = car(v_11);
    {   LispObject fn = basic_elt(env, 1); // clogf
    stack[-1] = (*qfn1(fn))(fn, v_11);
    }
    env = stack[-2];
    v_11 = stack[0];
    if (!car_legal(v_11)) v_11 = cdrerror(v_11); else
    v_11 = cdr(v_11);
    {   LispObject fn = basic_elt(env, 1); // clogf
    v_11 = (*qfn1(fn))(fn, v_11);
    }
    {
        LispObject v_14 = stack[-1];
        return cons(v_14, v_11);
    }
}



// Code for lf!=tovarlessp

static LispObject CC_lfMtovarlessp(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // mo_compare
    v_11 = (*qfn2(fn))(fn, v_11, v_10);
    }
    v_10 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_10 = (v_11 == v_10 ? lisp_true : nil);
    return onevalue(v_10);
}



// Code for dummy_nam

static LispObject CC_dummy_nam(LispObject env,
                         LispObject v_2)
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
    {   LispObject fn = basic_elt(env, 3); // ordn
    v_10 = (*qfn1(fn))(fn, v_9);
    }
    env = stack[0];
    v_9 = basic_elt(env, 1); // symbolic
    {   LispObject fn = basic_elt(env, 4); // list2vect!*
    v_9 = (*qfn2(fn))(fn, v_10, v_9);
    }
    env = stack[0];
    setvalue(basic_elt(env, 2), v_9); // g_dvnames
    v_9 = lisp_true;
    return onevalue(v_9);
}



// Code for st_extract_symcells1

static LispObject CC_st_extract_symcells1(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_118, v_119, v_120;
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
    stack[0] = v_2;
// end of prologue
    v_118 = stack[0];
    if (!car_legal(v_118)) v_118 = cdrerror(v_118); else
    v_118 = cdr(v_118);
    if (!car_legal(v_118)) v_118 = carerror(v_118); else
    v_118 = car(v_118);
    {   LispObject fn = basic_elt(env, 2); // listp
    v_118 = (*qfn1(fn))(fn, v_118);
    }
    env = stack[-7];
    if (v_118 == nil) goto v_12;
    else goto v_13;
v_12:
    stack[-1] = stack[-4];
    v_119 = stack[0];
    v_118 = stack[-5];
    stack[0] = cons(v_119, v_118);
    env = stack[-7];
    v_118 = stack[-4];
    v_118 = add1(v_118);
    {
        LispObject v_128 = stack[-1];
        LispObject v_129 = stack[0];
        return list3(v_128, v_129, v_118);
    }
v_13:
    v_118 = stack[0];
    if (!car_legal(v_118)) stack[-6] = carerror(v_118); else
    stack[-6] = car(v_118);
    v_118 = stack[0];
    if (!car_legal(v_118)) v_118 = cdrerror(v_118); else
    v_118 = cdr(v_118);
    stack[-3] = v_118;
    v_118 = stack[-3];
    if (v_118 == nil) goto v_40;
    else goto v_41;
v_40:
    v_118 = nil;
    goto v_34;
v_41:
    v_118 = stack[-3];
    if (!car_legal(v_118)) v_118 = carerror(v_118); else
    v_118 = car(v_118);
    v_120 = v_118;
    v_119 = stack[-5];
    v_118 = stack[-4];
    {   LispObject fn = basic_elt(env, 0); // st_extract_symcells1
    v_118 = (*qfn3(fn))(fn, v_120, v_119, v_118);
    }
    env = stack[-7];
    v_119 = v_118;
    if (!car_legal(v_119)) v_119 = cdrerror(v_119); else
    v_119 = cdr(v_119);
    if (!car_legal(v_119)) v_119 = carerror(v_119); else
    v_119 = car(v_119);
    stack[-5] = v_119;
    v_119 = v_118;
    if (!car_legal(v_119)) v_119 = cdrerror(v_119); else
    v_119 = cdr(v_119);
    if (!car_legal(v_119)) v_119 = cdrerror(v_119); else
    v_119 = cdr(v_119);
    if (!car_legal(v_119)) v_119 = carerror(v_119); else
    v_119 = car(v_119);
    stack[-4] = v_119;
    v_119 = v_118;
    if (!car_legal(v_119)) v_119 = carerror(v_119); else
    v_119 = car(v_119);
    if (is_number(v_119)) goto v_61;
    else goto v_62;
v_61:
    v_119 = basic_elt(env, 1); // !*
    if (!car_legal(v_118)) v_118 = carerror(v_118); else
    v_118 = car(v_118);
    v_118 = list2(v_119, v_118);
    env = stack[-7];
    goto v_60;
v_62:
    if (!car_legal(v_118)) v_118 = carerror(v_118); else
    v_118 = car(v_118);
    goto v_60;
    v_118 = nil;
v_60:
    v_118 = ncons(v_118);
    env = stack[-7];
    stack[-1] = v_118;
    stack[-2] = v_118;
v_35:
    v_118 = stack[-3];
    if (!car_legal(v_118)) v_118 = cdrerror(v_118); else
    v_118 = cdr(v_118);
    stack[-3] = v_118;
    v_118 = stack[-3];
    if (v_118 == nil) goto v_77;
    else goto v_78;
v_77:
    v_118 = stack[-2];
    goto v_34;
v_78:
    stack[0] = stack[-1];
    v_118 = stack[-3];
    if (!car_legal(v_118)) v_118 = carerror(v_118); else
    v_118 = car(v_118);
    v_120 = v_118;
    v_119 = stack[-5];
    v_118 = stack[-4];
    {   LispObject fn = basic_elt(env, 0); // st_extract_symcells1
    v_118 = (*qfn3(fn))(fn, v_120, v_119, v_118);
    }
    env = stack[-7];
    v_119 = v_118;
    if (!car_legal(v_119)) v_119 = cdrerror(v_119); else
    v_119 = cdr(v_119);
    if (!car_legal(v_119)) v_119 = carerror(v_119); else
    v_119 = car(v_119);
    stack[-5] = v_119;
    v_119 = v_118;
    if (!car_legal(v_119)) v_119 = cdrerror(v_119); else
    v_119 = cdr(v_119);
    if (!car_legal(v_119)) v_119 = cdrerror(v_119); else
    v_119 = cdr(v_119);
    if (!car_legal(v_119)) v_119 = carerror(v_119); else
    v_119 = car(v_119);
    stack[-4] = v_119;
    v_119 = v_118;
    if (!car_legal(v_119)) v_119 = carerror(v_119); else
    v_119 = car(v_119);
    if (is_number(v_119)) goto v_99;
    else goto v_100;
v_99:
    v_119 = basic_elt(env, 1); // !*
    if (!car_legal(v_118)) v_118 = carerror(v_118); else
    v_118 = car(v_118);
    v_118 = list2(v_119, v_118);
    env = stack[-7];
    goto v_98;
v_100:
    if (!car_legal(v_118)) v_118 = carerror(v_118); else
    v_118 = car(v_118);
    goto v_98;
    v_118 = nil;
v_98:
    v_118 = ncons(v_118);
    env = stack[-7];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_118);
    v_118 = stack[-1];
    if (!car_legal(v_118)) v_118 = cdrerror(v_118); else
    v_118 = cdr(v_118);
    stack[-1] = v_118;
    goto v_35;
v_34:
    v_118 = cons(stack[-6], v_118);
    v_120 = v_118;
    v_119 = stack[-5];
    v_118 = stack[-4];
    return list3(v_120, v_119, v_118);
    v_118 = nil;
    return onevalue(v_118);
}



// Code for mod!/

static LispObject CC_modV(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_15 = v_3;
    v_16 = v_2;
// end of prologue
    stack[-3] = v_16;
    stack[-2] = qvalue(basic_elt(env, 1)); // current!-modulus
    stack[-1] = v_15;
    stack[0] = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_15 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_15 = ncons(v_15);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 2); // general!-reciprocal!-by!-gcd
    v_15 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_15);
    }
    env = stack[-4];
    v_15 = times2(stack[-3], v_15);
    env = stack[-4];
    v_16 = qvalue(basic_elt(env, 1)); // current!-modulus
    return Cremainder(v_15, v_16);
}



// Code for cr2rderr

static LispObject CC_cr2rderr(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_6, v_7;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// end of prologue
    v_7 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_6 = basic_elt(env, 1); // "complex to real type conversion requires zero imaginary part"
    {
        LispObject fn = basic_elt(env, 2); // error
        return (*qfn2(fn))(fn, v_7, v_6);
    }
}



// Code for quotfexf!*1

static LispObject CC_quotfexfH1(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_57, v_58, v_59;
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
    v_57 = stack[-1];
    if (v_57 == nil) goto v_7;
    else goto v_8;
v_7:
    v_57 = nil;
    goto v_6;
v_8:
    v_58 = stack[-1];
    v_57 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // quotf
    v_57 = (*qfn2(fn))(fn, v_58, v_57);
    }
    env = stack[-2];
    v_58 = v_57;
    v_57 = v_58;
    if (v_57 == nil) goto v_20;
    v_57 = v_58;
    goto v_18;
v_20:
    v_58 = stack[-1];
    v_57 = stack[0];
    v_57 = cons(v_58, v_57);
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 5); // rationalizesq
    v_57 = (*qfn1(fn))(fn, v_57);
    }
    env = stack[-2];
    v_59 = v_57;
    v_57 = v_59;
    if (!car_legal(v_57)) v_58 = cdrerror(v_57); else
    v_58 = cdr(v_57);
    v_57 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_58 == v_57) goto v_32;
    else goto v_33;
v_32:
    v_57 = v_59;
    if (!car_legal(v_57)) v_57 = carerror(v_57); else
    v_57 = car(v_57);
    goto v_31;
v_33:
    v_57 = lisp_true;
// Binding !*rationalize
// FLUIDBIND: reloadenv=2 litvec-offset=1 saveloc=0
{   bind_fluid_stack bind_fluid_var(-2, 1, 0);
    setvalue(basic_elt(env, 1), v_57); // !*rationalize
    v_57 = v_59;
    {   LispObject fn = basic_elt(env, 5); // rationalizesq
    v_57 = (*qfn1(fn))(fn, v_57);
    }
    env = stack[-2];
    ;}  // end of a binding scope
    v_59 = v_57;
    if (!car_legal(v_57)) v_58 = cdrerror(v_57); else
    v_58 = cdr(v_57);
    v_57 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_58 == v_57) goto v_39;
    else goto v_40;
v_39:
    v_57 = v_59;
    if (!car_legal(v_57)) v_57 = carerror(v_57); else
    v_57 = car(v_57);
    goto v_31;
v_40:
    v_59 = basic_elt(env, 2); // matrix
    v_58 = static_cast<LispObject>(176)+TAG_FIXNUM; // 11
    v_57 = basic_elt(env, 3); // "Catastrophic division failure"
    {
        LispObject fn = basic_elt(env, 6); // rerror
        return (*qfn3(fn))(fn, v_59, v_58, v_57);
    }
    v_57 = nil;
v_31:
    goto v_18;
    v_57 = nil;
v_18:
    goto v_6;
    v_57 = nil;
v_6:
    return onevalue(v_57);
}



// Code for texexplode

static LispObject CC_texexplode(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_71, v_72, v_73;
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
    v_72 = v_2;
// end of prologue
    v_71 = v_72;
    if (v_71 == nil) goto v_10;
    v_71 = v_72;
    if (!consp(v_71)) goto v_13;
    else goto v_10;
v_13:
    v_73 = v_72;
    v_71 = basic_elt(env, 1); // texname
    v_71 = get(v_73, v_71);
    env = stack[0];
    if (v_71 == nil) goto v_20;
    else goto v_19;
v_20:
    v_71 = v_72;
    if (!symbolp(v_71)) v_71 = nil;
    else { v_71 = qfastgets(v_71);
           if (v_71 != nil) { v_71 = elt(v_71, 7); // class
#ifdef RECORD_GET
             if (v_71 != SPID_NOPROP)
                record_get(elt(fastget_names, 7), 1);
             else record_get(elt(fastget_names, 7), 0),
                v_71 = nil; }
           else record_get(elt(fastget_names, 7), 0); }
#else
             if (v_71 == SPID_NOPROP) v_71 = nil; }}
#endif
    if (v_71 == nil) goto v_26;
    else goto v_27;
v_26:
    v_71 = nil;
    goto v_25;
v_27:
    v_71 = v_72;
    goto v_25;
    v_71 = nil;
v_25:
v_19:
    if (v_71 == nil) goto v_17;
    else goto v_16;
v_17:
    v_71 = v_72;
    if (is_number(v_71)) goto v_36;
    else goto v_37;
v_36:
    v_71 = v_72;
    v_71 = Lexplode(nil, v_71);
    env = stack[0];
    {   LispObject fn = basic_elt(env, 3); // texcollect
    v_71 = (*qfn1(fn))(fn, v_71);
    }
    env = stack[0];
    goto v_35;
v_37:
    v_71 = v_72;
    v_71 = Lstringp(nil, v_71);
    env = stack[0];
    if (v_71 == nil) goto v_43;
    v_71 = v_72;
    v_71 = Lexplodec(nil, v_71);
    env = stack[0];
    {   LispObject fn = basic_elt(env, 4); // strcollect
    v_71 = (*qfn1(fn))(fn, v_71);
    }
    env = stack[0];
    goto v_35;
v_43:
    v_71 = v_72;
    v_71 = Lexplodec(nil, v_71);
    env = stack[0];
    {   LispObject fn = basic_elt(env, 3); // texcollect
    v_71 = (*qfn1(fn))(fn, v_71);
    }
    env = stack[0];
    {   LispObject fn = basic_elt(env, 5); // texexplist
    v_71 = (*qfn1(fn))(fn, v_71);
    }
    env = stack[0];
    goto v_35;
    v_71 = nil;
v_35:
v_16:
    goto v_8;
v_10:
    v_71 = nil;
v_8:
    v_72 = v_71;
    v_71 = v_72;
    if (v_71 == nil) goto v_57;
    else goto v_58;
v_57:
    v_71 = basic_elt(env, 2); // ! 
    return ncons(v_71);
v_58:
    v_71 = v_72;
    if (!consp(v_71)) goto v_63;
    v_71 = v_72;
    goto v_56;
v_63:
    v_71 = v_72;
    return ncons(v_71);
    v_71 = nil;
v_56:
    v_72 = v_71;
    v_71 = v_72;
    return onevalue(v_71);
}



// Code for dip_monp

static LispObject CC_dip_monp(LispObject env,
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
    v_16 = v_2;
// end of prologue
    v_17 = v_16;
    if (v_17 == nil) goto v_6;
    else goto v_7;
v_6:
    v_16 = nil;
    goto v_5;
v_7:
    if (!car_legal(v_16)) v_16 = cdrerror(v_16); else
    v_16 = cdr(v_16);
    if (!car_legal(v_16)) v_16 = cdrerror(v_16); else
    v_16 = cdr(v_16);
    v_16 = (v_16 == nil ? lisp_true : nil);
    goto v_5;
    v_16 = nil;
v_5:
    return onevalue(v_16);
}



// Code for parseml

static LispObject CC_parseml(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil);
    stack_popper stack_popper_var(2);
// end of prologue
    v_44 = nil;
    stack[0] = v_44;
    v_44 = static_cast<LispObject>(512)+TAG_FIXNUM; // 32
    v_44 = ncons(v_44);
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 10); // list2string
    v_44 = (*qfn1(fn))(fn, v_44);
    }
    env = stack[-1];
    v_44 = Lintern(nil, v_44);
    env = stack[-1];
    setvalue(basic_elt(env, 1), v_44); // space
    v_44 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    setvalue(basic_elt(env, 2), v_44); // count
    v_44 = Lreadch(nil);
    env = stack[-1];
    setvalue(basic_elt(env, 3), v_44); // ch
    v_44 = nil;
    setvalue(basic_elt(env, 4), v_44); // temp2
    {   LispObject fn = basic_elt(env, 11); // lex
    v_44 = (*qfn0(fn))(fn);
    }
    env = stack[-1];
    v_45 = qvalue(basic_elt(env, 5)); // char
    v_44 = basic_elt(env, 6); // (m a t h)
    if (equal(v_45, v_44)) goto v_19;
    else goto v_20;
v_19:
    {   LispObject fn = basic_elt(env, 12); // mathml
    v_44 = (*qfn0(fn))(fn);
    }
    env = stack[-1];
    stack[0] = v_44;
    goto v_18;
v_20:
    v_45 = basic_elt(env, 7); // "<math>"
    v_44 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    {   LispObject fn = basic_elt(env, 13); // errorml
    v_44 = (*qfn2(fn))(fn, v_45, v_44);
    }
    env = stack[-1];
    goto v_18;
v_18:
    {   LispObject fn = basic_elt(env, 11); // lex
    v_44 = (*qfn0(fn))(fn);
    }
    env = stack[-1];
    v_45 = qvalue(basic_elt(env, 5)); // char
    v_44 = basic_elt(env, 8); // (!/ m a t h)
    if (equal(v_45, v_44)) goto v_32;
    else goto v_33;
v_32:
    v_44 = Lterpri(nil);
    env = stack[-1];
    goto v_31;
v_33:
    v_45 = basic_elt(env, 9); // "</math>"
    v_44 = static_cast<LispObject>(304)+TAG_FIXNUM; // 19
    {   LispObject fn = basic_elt(env, 13); // errorml
    v_44 = (*qfn2(fn))(fn, v_45, v_44);
    }
    env = stack[-1];
    goto v_31;
v_31:
    v_44 = stack[0];
    {
        LispObject fn = basic_elt(env, 14); // aeval
        return (*qfn1(fn))(fn, v_44);
    }
    return onevalue(v_44);
}



// Code for mkratnum

static LispObject CC_mkratnum(LispObject env,
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
    v_31 = v_2;
// end of prologue
    v_29 = v_31;
    if (!consp(v_29)) goto v_6;
    else goto v_7;
v_6:
    v_29 = v_31;
    {
        LispObject fn = basic_elt(env, 4); // !*i2rn
        return (*qfn1(fn))(fn, v_29);
    }
v_7:
    v_29 = v_31;
    if (!car_legal(v_29)) v_30 = carerror(v_29); else
    v_30 = car(v_29);
    v_29 = basic_elt(env, 1); // !:gi!:
    if (v_30 == v_29) goto v_11;
    else goto v_12;
v_11:
    v_30 = basic_elt(env, 1); // !:gi!:
    v_29 = basic_elt(env, 2); // !:crn!:
    v_29 = get(v_30, v_29);
    v_30 = v_31;
        return Lapply1(nil, v_29, v_30);
v_12:
    v_29 = v_31;
    if (!car_legal(v_29)) v_30 = carerror(v_29); else
    v_30 = car(v_29);
    v_29 = basic_elt(env, 3); // !:rn!:
    v_29 = get(v_30, v_29);
    v_30 = v_31;
        return Lapply1(nil, v_29, v_30);
    v_29 = nil;
    return onevalue(v_29);
}



// Code for poly!-remainder

static LispObject CC_polyKremainder(LispObject env,
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
    v_10 = v_8;
    v_9 = basic_elt(env, 1); // remainder
    v_8 = nil;
    {
        LispObject fn = basic_elt(env, 2); // poly!-divide!*
        return (*qfn3(fn))(fn, v_10, v_9, v_8);
    }
}



// Code for xpartitsq

static LispObject CC_xpartitsq(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_113, v_114, v_115;
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
    v_115 = v_2;
// end of prologue
    v_113 = v_115;
    if (!car_legal(v_113)) v_114 = carerror(v_113); else
    v_114 = car(v_113);
    v_113 = v_115;
    if (!car_legal(v_113)) v_113 = cdrerror(v_113); else
    v_113 = cdr(v_113);
    stack[-2] = v_114;
    stack[-1] = v_113;
    v_113 = stack[-2];
    if (v_113 == nil) goto v_12;
    else goto v_13;
v_12:
    v_113 = nil;
    goto v_11;
v_13:
    v_113 = stack[-2];
    if (!consp(v_113)) goto v_20;
    else goto v_21;
v_20:
    v_113 = lisp_true;
    goto v_19;
v_21:
    v_113 = stack[-2];
    if (!car_legal(v_113)) v_113 = carerror(v_113); else
    v_113 = car(v_113);
    v_113 = (consp(v_113) ? nil : lisp_true);
    goto v_19;
    v_113 = nil;
v_19:
    if (v_113 == nil) goto v_17;
    v_113 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_114 = v_115;
    v_113 = cons(v_113, v_114);
    return ncons(v_113);
v_17:
    v_113 = stack[-2];
    if (!car_legal(v_113)) v_113 = carerror(v_113); else
    v_113 = car(v_113);
    if (!car_legal(v_113)) v_113 = carerror(v_113); else
    v_113 = car(v_113);
    if (!car_legal(v_113)) v_113 = carerror(v_113); else
    v_113 = car(v_113);
    {   LispObject fn = basic_elt(env, 1); // sfp
    v_113 = (*qfn1(fn))(fn, v_113);
    }
    env = stack[-3];
    if (v_113 == nil) goto v_39;
    v_113 = stack[-2];
    if (!car_legal(v_113)) v_113 = carerror(v_113); else
    v_113 = car(v_113);
    if (!car_legal(v_113)) v_113 = carerror(v_113); else
    v_113 = car(v_113);
    if (!car_legal(v_113)) v_114 = carerror(v_113); else
    v_114 = car(v_113);
    v_113 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_113 = cons(v_114, v_113);
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 0); // xpartitsq
    v_114 = (*qfn1(fn))(fn, v_113);
    }
    env = stack[-3];
    v_113 = stack[-2];
    if (!car_legal(v_113)) v_113 = carerror(v_113); else
    v_113 = car(v_113);
    if (!car_legal(v_113)) v_113 = carerror(v_113); else
    v_113 = car(v_113);
    if (!car_legal(v_113)) v_113 = cdrerror(v_113); else
    v_113 = cdr(v_113);
    {   LispObject fn = basic_elt(env, 2); // xexptpf
    stack[0] = (*qfn2(fn))(fn, v_114, v_113);
    }
    env = stack[-3];
    v_113 = stack[-2];
    if (!car_legal(v_113)) v_113 = carerror(v_113); else
    v_113 = car(v_113);
    if (!car_legal(v_113)) v_114 = cdrerror(v_113); else
    v_114 = cdr(v_113);
    v_113 = stack[-1];
    v_113 = cons(v_114, v_113);
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 3); // cancel
    v_113 = (*qfn1(fn))(fn, v_113);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 0); // xpartitsq
    v_113 = (*qfn1(fn))(fn, v_113);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 4); // wedgepf
    v_113 = (*qfn2(fn))(fn, stack[0], v_113);
    }
    env = stack[-3];
    stack[0] = v_113;
    goto v_37;
v_39:
    v_113 = stack[-2];
    if (!car_legal(v_113)) v_113 = carerror(v_113); else
    v_113 = car(v_113);
    if (!car_legal(v_113)) v_113 = carerror(v_113); else
    v_113 = car(v_113);
    if (!car_legal(v_113)) v_113 = carerror(v_113); else
    v_113 = car(v_113);
    {   LispObject fn = basic_elt(env, 5); // xvarp
    v_113 = (*qfn1(fn))(fn, v_113);
    }
    env = stack[-3];
    if (v_113 == nil) goto v_66;
    v_113 = stack[-2];
    if (!car_legal(v_113)) v_113 = carerror(v_113); else
    v_113 = car(v_113);
    if (!car_legal(v_113)) v_113 = carerror(v_113); else
    v_113 = car(v_113);
    if (!car_legal(v_113)) v_113 = carerror(v_113); else
    v_113 = car(v_113);
    {   LispObject fn = basic_elt(env, 6); // xpartitk
    v_114 = (*qfn1(fn))(fn, v_113);
    }
    env = stack[-3];
    v_113 = stack[-2];
    if (!car_legal(v_113)) v_113 = carerror(v_113); else
    v_113 = car(v_113);
    if (!car_legal(v_113)) v_113 = carerror(v_113); else
    v_113 = car(v_113);
    if (!car_legal(v_113)) v_113 = cdrerror(v_113); else
    v_113 = cdr(v_113);
    {   LispObject fn = basic_elt(env, 2); // xexptpf
    stack[0] = (*qfn2(fn))(fn, v_114, v_113);
    }
    env = stack[-3];
    v_113 = stack[-2];
    if (!car_legal(v_113)) v_113 = carerror(v_113); else
    v_113 = car(v_113);
    if (!car_legal(v_113)) v_114 = cdrerror(v_113); else
    v_114 = cdr(v_113);
    v_113 = stack[-1];
    v_113 = cons(v_114, v_113);
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 3); // cancel
    v_113 = (*qfn1(fn))(fn, v_113);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 0); // xpartitsq
    v_113 = (*qfn1(fn))(fn, v_113);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 4); // wedgepf
    v_113 = (*qfn2(fn))(fn, stack[0], v_113);
    }
    env = stack[-3];
    stack[0] = v_113;
    goto v_37;
v_66:
    v_113 = stack[-2];
    if (!car_legal(v_113)) v_113 = carerror(v_113); else
    v_113 = car(v_113);
    if (!car_legal(v_113)) v_114 = cdrerror(v_113); else
    v_114 = cdr(v_113);
    v_113 = stack[-1];
    v_113 = cons(v_114, v_113);
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 3); // cancel
    v_113 = (*qfn1(fn))(fn, v_113);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 0); // xpartitsq
    stack[0] = (*qfn1(fn))(fn, v_113);
    }
    env = stack[-3];
    v_113 = stack[-2];
    if (!car_legal(v_113)) v_113 = carerror(v_113); else
    v_113 = car(v_113);
    if (!car_legal(v_113)) v_114 = carerror(v_113); else
    v_114 = car(v_113);
    v_113 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_113 = cons(v_114, v_113);
    env = stack[-3];
    v_114 = ncons(v_113);
    env = stack[-3];
    v_113 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_113 = cons(v_114, v_113);
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 7); // multpfsq
    v_113 = (*qfn2(fn))(fn, stack[0], v_113);
    }
    env = stack[-3];
    stack[0] = v_113;
    goto v_37;
    stack[0] = nil;
v_37:
    v_113 = stack[-2];
    if (!car_legal(v_113)) v_114 = cdrerror(v_113); else
    v_114 = cdr(v_113);
    v_113 = stack[-1];
    v_113 = cons(v_114, v_113);
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 0); // xpartitsq
    v_113 = (*qfn1(fn))(fn, v_113);
    }
    env = stack[-3];
    {
        LispObject v_119 = stack[0];
        LispObject fn = basic_elt(env, 8); // addpf
        return (*qfn2(fn))(fn, v_119, v_113);
    }
    v_113 = nil;
v_11:
    return onevalue(v_113);
}



// Code for acmemb

static LispObject CC_acmemb(LispObject env,
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
    v_26 = stack[0];
    if (v_26 == nil) goto v_10;
    else goto v_11;
v_10:
    v_26 = nil;
    goto v_6;
v_11:
    v_27 = stack[-1];
    v_26 = stack[0];
    if (!car_legal(v_26)) v_26 = carerror(v_26); else
    v_26 = car(v_26);
    {   LispObject fn = basic_elt(env, 1); // aceq
    v_26 = (*qfn2(fn))(fn, v_27, v_26);
    }
    env = stack[-2];
    if (v_26 == nil) goto v_15;
    v_26 = stack[0];
    if (!car_legal(v_26)) v_26 = carerror(v_26); else
    v_26 = car(v_26);
    goto v_6;
v_15:
    v_26 = stack[0];
    if (!car_legal(v_26)) v_26 = cdrerror(v_26); else
    v_26 = cdr(v_26);
    stack[0] = v_26;
    goto v_7;
    v_26 = nil;
v_6:
    return onevalue(v_26);
}



// Code for redassignp

static LispObject CC_redassignp(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_19, v_20, v_21;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_21 = v_2;
// end of prologue
    v_20 = v_21;
    v_19 = basic_elt(env, 1); // setq
    if (!consp(v_20)) goto v_7;
    v_20 = car(v_20);
    if (v_20 == v_19) goto v_6;
    else goto v_7;
v_6:
    v_19 = v_21;
    if (!car_legal(v_19)) v_19 = cdrerror(v_19); else
    v_19 = cdr(v_19);
    if (!car_legal(v_19)) v_19 = cdrerror(v_19); else
    v_19 = cdr(v_19);
    if (!car_legal(v_19)) v_19 = carerror(v_19); else
    v_19 = car(v_19);
    {
        LispObject fn = basic_elt(env, 2); // redassign1p
        return (*qfn1(fn))(fn, v_19);
    }
v_7:
    v_19 = nil;
    goto v_5;
    v_19 = nil;
v_5:
    return onevalue(v_19);
}



// Code for adjp

static LispObject CC_adjp(LispObject env,
                         LispObject v_2)
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
    v_59 = stack[-1];
    v_58 = basic_elt(env, 1); // unit
    if (v_59 == v_58) goto v_6;
    else goto v_7;
v_6:
    v_58 = stack[-1];
    goto v_5;
v_7:
    v_58 = stack[-1];
    if (!consp(v_58)) goto v_11;
    else goto v_12;
v_11:
    v_58 = stack[-1];
    v_59 = basic_elt(env, 2); // adjoint
    return get(v_58, v_59);
v_12:
    v_58 = stack[-1];
    if (!car_legal(v_58)) v_59 = carerror(v_58); else
    v_59 = car(v_58);
    v_58 = basic_elt(env, 3); // comm
    if (v_59 == v_58) goto v_17;
    else goto v_18;
v_17:
    stack[-2] = basic_elt(env, 3); // comm
    v_58 = stack[-1];
    if (!car_legal(v_58)) v_58 = cdrerror(v_58); else
    v_58 = cdr(v_58);
    if (!car_legal(v_58)) v_58 = cdrerror(v_58); else
    v_58 = cdr(v_58);
    if (!car_legal(v_58)) v_58 = carerror(v_58); else
    v_58 = car(v_58);
    {   LispObject fn = basic_elt(env, 0); // adjp
    stack[0] = (*qfn1(fn))(fn, v_58);
    }
    env = stack[-3];
    v_58 = stack[-1];
    if (!car_legal(v_58)) v_58 = cdrerror(v_58); else
    v_58 = cdr(v_58);
    if (!car_legal(v_58)) v_58 = carerror(v_58); else
    v_58 = car(v_58);
    {   LispObject fn = basic_elt(env, 0); // adjp
    v_58 = (*qfn1(fn))(fn, v_58);
    }
    {
        LispObject v_63 = stack[-2];
        LispObject v_64 = stack[0];
        return list3(v_63, v_64, v_58);
    }
v_18:
    v_58 = stack[-1];
    if (!car_legal(v_58)) v_59 = carerror(v_58); else
    v_59 = car(v_58);
    v_58 = basic_elt(env, 4); // anticomm
    if (v_59 == v_58) goto v_33;
    else goto v_34;
v_33:
    stack[-2] = basic_elt(env, 4); // anticomm
    v_58 = stack[-1];
    if (!car_legal(v_58)) v_58 = cdrerror(v_58); else
    v_58 = cdr(v_58);
    if (!car_legal(v_58)) v_58 = carerror(v_58); else
    v_58 = car(v_58);
    {   LispObject fn = basic_elt(env, 0); // adjp
    stack[0] = (*qfn1(fn))(fn, v_58);
    }
    env = stack[-3];
    v_58 = stack[-1];
    if (!car_legal(v_58)) v_58 = cdrerror(v_58); else
    v_58 = cdr(v_58);
    if (!car_legal(v_58)) v_58 = cdrerror(v_58); else
    v_58 = cdr(v_58);
    if (!car_legal(v_58)) v_58 = carerror(v_58); else
    v_58 = car(v_58);
    {   LispObject fn = basic_elt(env, 0); // adjp
    v_58 = (*qfn1(fn))(fn, v_58);
    }
    {
        LispObject v_65 = stack[-2];
        LispObject v_66 = stack[0];
        return list3(v_65, v_66, v_58);
    }
v_34:
    v_58 = stack[-1];
    if (!car_legal(v_58)) v_59 = carerror(v_58); else
    v_59 = car(v_58);
    v_58 = basic_elt(env, 2); // adjoint
    v_59 = get(v_59, v_58);
    v_58 = stack[-1];
    if (!car_legal(v_58)) v_58 = cdrerror(v_58); else
    v_58 = cdr(v_58);
    return cons(v_59, v_58);
    v_58 = nil;
v_5:
    return onevalue(v_58);
}



// Code for calc_world

static LispObject CC_calc_world(LispObject env,
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
    stack[0] = stack[-1];
    v_41 = stack[-2];
    {   LispObject fn = basic_elt(env, 1); // s_world_names
    v_41 = (*qfn1(fn))(fn, v_41);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 2); // actual_alst
    v_41 = (*qfn2(fn))(fn, stack[0], v_41);
    }
    env = stack[-4];
    stack[-1] = v_41;
    v_41 = stack[-2];
    if (!car_legal(v_41)) v_41 = cdrerror(v_41); else
    v_41 = cdr(v_41);
    if (!car_legal(v_41)) v_41 = carerror(v_41); else
    v_41 = car(v_41);
    stack[0] = v_41;
    v_42 = stack[-1];
    v_41 = stack[0];
    if (!car_legal(v_41)) v_41 = cdrerror(v_41); else
    v_41 = cdr(v_41);
    v_41 = Lassoc(nil, v_42, v_41);
    stack[-3] = v_41;
    v_41 = stack[-3];
    if (v_41 == nil) goto v_23;
    v_41 = stack[-3];
    if (!car_legal(v_41)) v_41 = cdrerror(v_41); else
    v_41 = cdr(v_41);
    goto v_8;
v_23:
    v_41 = stack[-2];
    if (!car_legal(v_41)) v_41 = cdrerror(v_41); else
    v_41 = cdr(v_41);
    if (!car_legal(v_41)) v_41 = cdrerror(v_41); else
    v_41 = cdr(v_41);
    if (!car_legal(v_41)) v_42 = carerror(v_41); else
    v_42 = car(v_41);
    v_41 = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // calc_atlas
    v_41 = (*qfn2(fn))(fn, v_42, v_41);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 4); // reval
    v_41 = (*qfn1(fn))(fn, v_41);
    }
    env = stack[-4];
    stack[-3] = v_41;
    v_42 = stack[-1];
    v_41 = stack[-3];
    v_41 = cons(v_42, v_41);
    env = stack[-4];
    v_41 = ncons(v_41);
    env = stack[-4];
    v_41 = Lnconc(nil, stack[0], v_41);
    v_41 = stack[-3];
v_8:
    return onevalue(v_41);
}



// Code for !*sq2fourier

static LispObject CC_Hsq2fourier(LispObject env,
                         LispObject v_2)
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
    v_39 = stack[0];
    if (!car_legal(v_39)) v_39 = carerror(v_39); else
    v_39 = car(v_39);
    if (v_39 == nil) goto v_6;
    else goto v_7;
v_6:
    v_39 = nil;
    goto v_5;
v_7:
    v_39 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_39 = Lmkvect(nil, v_39);
    env = stack[-3];
    stack[-2] = v_39;
    v_41 = stack[-2];
    v_40 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_39 = stack[0];
    v_39 = Lputv(nil, v_41, v_40, v_39);
    env = stack[-3];
    v_41 = stack[-2];
    v_40 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_39 = basic_elt(env, 1); // cos
    v_39 = Lputv(nil, v_41, v_40, v_39);
    env = stack[-3];
    stack[-1] = stack[-2];
    stack[0] = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    {   LispObject fn = basic_elt(env, 4); // fs!:make!-nullangle
    v_39 = (*qfn0(fn))(fn);
    }
    env = stack[-3];
    v_39 = Lputv(nil, stack[-1], stack[0], v_39);
    env = stack[-3];
    v_41 = stack[-2];
    v_40 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_39 = nil;
    v_39 = Lputv(nil, v_41, v_40, v_39);
    env = stack[-3];
    v_40 = basic_elt(env, 2); // fourier
    v_39 = basic_elt(env, 3); // tag
    v_40 = get(v_40, v_39);
    v_39 = stack[-2];
    return cons(v_40, v_39);
    goto v_5;
    v_39 = nil;
v_5:
    return onevalue(v_39);
}



// Code for !*v2j

static LispObject CC_Hv2j(LispObject env,
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
    v_22 = v_2;
// end of prologue
    v_21 = qvalue(basic_elt(env, 1)); // ordering
    v_20 = basic_elt(env, 2); // lex
    if (v_21 == v_20) goto v_6;
    else goto v_7;
v_6:
    v_21 = v_22;
    v_20 = qvalue(basic_elt(env, 3)); // varlist!*
    {
        LispObject fn = basic_elt(env, 4); // sub01
        return (*qfn2(fn))(fn, v_21, v_20);
    }
v_7:
    stack[0] = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_21 = v_22;
    v_20 = qvalue(basic_elt(env, 3)); // varlist!*
    {   LispObject fn = basic_elt(env, 4); // sub01
    v_20 = (*qfn2(fn))(fn, v_21, v_20);
    }
    {
        LispObject v_24 = stack[0];
        return cons(v_24, v_20);
    }
    v_20 = nil;
    return onevalue(v_20);
}



// Code for ic_taglist

static LispObject CC_ic_taglist(LispObject env,
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
    v_7 = static_cast<LispObject>(176)+TAG_FIXNUM; // 11
        return Lgetv(nil, v_8, v_7);
}



// Code for initmonomials

static LispObject CC_initmonomials(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// end of prologue
    v_32 = qvalue(basic_elt(env, 1)); // fluidbibasisvariables
    v_32 = Llength(nil, v_32);
    env = stack[-3];
    setvalue(basic_elt(env, 2), v_32); // fluidbibasisnumberofvariables
    v_32 = qvalue(basic_elt(env, 2)); // fluidbibasisnumberofvariables
    v_32 = Lmkvect(nil, v_32);
    env = stack[-3];
    setvalue(basic_elt(env, 3), v_32); // fluidbibasissinglevariablemonomialss
    v_32 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-2] = v_32;
v_12:
    v_33 = qvalue(basic_elt(env, 2)); // fluidbibasisnumberofvariables
    v_32 = stack[-2];
    v_32 = difference2(v_33, v_32);
    env = stack[-3];
    v_32 = Lminusp(nil, v_32);
    env = stack[-3];
    if (v_32 == nil) goto v_17;
    goto v_11;
v_17:
    stack[-1] = qvalue(basic_elt(env, 3)); // fluidbibasissinglevariablemonomialss
    stack[0] = stack[-2];
    v_32 = stack[-2];
    {   LispObject fn = basic_elt(env, 5); // createsinglevariablemonom
    v_32 = (*qfn1(fn))(fn, v_32);
    }
    env = stack[-3];
    v_32 = Lputv(nil, stack[-1], stack[0], v_32);
    env = stack[-3];
    v_32 = stack[-2];
    v_32 = add1(v_32);
    env = stack[-3];
    stack[-2] = v_32;
    goto v_12;
v_11:
    v_32 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    setvalue(basic_elt(env, 4), v_32); // fluidbibasistripleid
    v_32 = nil;
    return onevalue(v_32);
}



// Code for depend!-p

static LispObject CC_dependKp(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_39, v_40, v_41, v_42;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_41 = v_3;
    v_42 = v_2;
// end of prologue
    v_40 = v_42;
    v_39 = v_41;
    if (v_40 == v_39) goto v_7;
    else goto v_8;
v_7:
    v_39 = lisp_true;
    goto v_6;
v_8:
    v_39 = v_42;
    if (!consp(v_39)) goto v_12;
    else goto v_13;
v_12:
    v_39 = nil;
    goto v_6;
v_13:
    v_39 = v_42;
    if (!car_legal(v_39)) v_39 = carerror(v_39); else
    v_39 = car(v_39);
    if (!consp(v_39)) goto v_17;
    v_39 = v_42;
    v_40 = v_41;
    {
        LispObject fn = basic_elt(env, 2); // depend!-f
        return (*qfn2(fn))(fn, v_39, v_40);
    }
v_17:
    v_39 = v_42;
    if (!car_legal(v_39)) v_40 = carerror(v_39); else
    v_40 = car(v_39);
    v_39 = basic_elt(env, 1); // !*sq
    if (v_40 == v_39) goto v_23;
    else goto v_24;
v_23:
    v_39 = v_42;
    if (!car_legal(v_39)) v_39 = cdrerror(v_39); else
    v_39 = cdr(v_39);
    if (!car_legal(v_39)) v_39 = carerror(v_39); else
    v_39 = car(v_39);
    v_40 = v_41;
    {
        LispObject fn = basic_elt(env, 3); // depend!-sq
        return (*qfn2(fn))(fn, v_39, v_40);
    }
v_24:
    v_39 = v_42;
    if (!car_legal(v_39)) v_39 = cdrerror(v_39); else
    v_39 = cdr(v_39);
    v_40 = v_41;
    {
        LispObject fn = basic_elt(env, 4); // depend!-l
        return (*qfn2(fn))(fn, v_39, v_40);
    }
    v_39 = nil;
v_6:
    return onevalue(v_39);
}



// Code for ofsf_simpat

static LispObject CC_ofsf_simpat(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_191, v_192, v_193;
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
    v_191 = stack[-2];
    if (!car_legal(v_191)) v_191 = carerror(v_191); else
    v_191 = car(v_191);
    stack[-3] = v_191;
    v_191 = stack[-2];
    if (!car_legal(v_191)) v_191 = cdrerror(v_191); else
    v_191 = cdr(v_191);
    if (!car_legal(v_191)) v_191 = carerror(v_191); else
    v_191 = car(v_191);
    {   LispObject fn = basic_elt(env, 9); // simp
    v_191 = (*qfn1(fn))(fn, v_191);
    }
    env = stack[-4];
    stack[-1] = v_191;
    v_191 = qvalue(basic_elt(env, 1)); // !*rlnzden
    if (v_191 == nil) goto v_21;
    else goto v_20;
v_21:
    v_191 = qvalue(basic_elt(env, 2)); // !*rlposden
    if (v_191 == nil) goto v_24;
    else goto v_20;
v_24:
    v_191 = stack[-1];
    if (!car_legal(v_191)) v_191 = cdrerror(v_191); else
    v_191 = cdr(v_191);
    if (!consp(v_191)) goto v_29;
    else goto v_30;
v_29:
    v_191 = lisp_true;
    goto v_28;
v_30:
    v_191 = stack[-1];
    if (!car_legal(v_191)) v_191 = cdrerror(v_191); else
    v_191 = cdr(v_191);
    if (!car_legal(v_191)) v_191 = carerror(v_191); else
    v_191 = car(v_191);
    v_191 = (consp(v_191) ? nil : lisp_true);
    goto v_28;
    v_191 = nil;
v_28:
    if (v_191 == nil) goto v_26;
    else goto v_20;
v_26:
    v_192 = stack[-2];
    v_191 = basic_elt(env, 3); // "atomic formula"
    {   LispObject fn = basic_elt(env, 10); // typerr
    v_191 = (*qfn2(fn))(fn, v_192, v_191);
    }
    env = stack[-4];
    goto v_18;
v_20:
v_18:
    v_191 = stack[-2];
    if (!car_legal(v_191)) v_191 = cdrerror(v_191); else
    v_191 = cdr(v_191);
    if (!car_legal(v_191)) v_191 = cdrerror(v_191); else
    v_191 = cdr(v_191);
    if (!car_legal(v_191)) v_191 = carerror(v_191); else
    v_191 = car(v_191);
    {   LispObject fn = basic_elt(env, 9); // simp
    v_191 = (*qfn1(fn))(fn, v_191);
    }
    env = stack[-4];
    stack[0] = v_191;
    v_191 = qvalue(basic_elt(env, 1)); // !*rlnzden
    if (v_191 == nil) goto v_52;
    else goto v_51;
v_52:
    v_191 = qvalue(basic_elt(env, 2)); // !*rlposden
    if (v_191 == nil) goto v_55;
    else goto v_51;
v_55:
    v_191 = stack[0];
    if (!car_legal(v_191)) v_191 = cdrerror(v_191); else
    v_191 = cdr(v_191);
    if (!consp(v_191)) goto v_60;
    else goto v_61;
v_60:
    v_191 = lisp_true;
    goto v_59;
v_61:
    v_191 = stack[0];
    if (!car_legal(v_191)) v_191 = cdrerror(v_191); else
    v_191 = cdr(v_191);
    if (!car_legal(v_191)) v_191 = carerror(v_191); else
    v_191 = car(v_191);
    v_191 = (consp(v_191) ? nil : lisp_true);
    goto v_59;
    v_191 = nil;
v_59:
    if (v_191 == nil) goto v_57;
    else goto v_51;
v_57:
    v_192 = stack[-2];
    v_191 = basic_elt(env, 3); // "atomic formula"
    {   LispObject fn = basic_elt(env, 10); // typerr
    v_191 = (*qfn2(fn))(fn, v_192, v_191);
    }
    env = stack[-4];
    goto v_49;
v_51:
v_49:
    v_191 = stack[0];
    {   LispObject fn = basic_elt(env, 11); // negsq
    v_191 = (*qfn1(fn))(fn, v_191);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 12); // addsq
    v_191 = (*qfn2(fn))(fn, stack[-1], v_191);
    }
    env = stack[-4];
    stack[-1] = v_191;
    v_191 = stack[-1];
    if (!car_legal(v_191)) v_191 = carerror(v_191); else
    v_191 = car(v_191);
    v_192 = v_191;
    v_191 = qvalue(basic_elt(env, 2)); // !*rlposden
    if (v_191 == nil) goto v_83;
    v_191 = stack[-1];
    if (!car_legal(v_191)) v_191 = cdrerror(v_191); else
    v_191 = cdr(v_191);
    if (!consp(v_191)) goto v_89;
    else goto v_90;
v_89:
    v_191 = lisp_true;
    goto v_88;
v_90:
    v_191 = stack[-1];
    if (!car_legal(v_191)) v_191 = cdrerror(v_191); else
    v_191 = cdr(v_191);
    if (!car_legal(v_191)) v_191 = carerror(v_191); else
    v_191 = car(v_191);
    v_191 = (consp(v_191) ? nil : lisp_true);
    goto v_88;
    v_191 = nil;
v_88:
    if (v_191 == nil) goto v_86;
    else goto v_83;
v_86:
    v_193 = stack[-3];
    v_191 = nil;
    v_191 = list3(v_193, v_192, v_191);
    env = stack[-4];
    stack[0] = v_191;
    v_191 = qvalue(basic_elt(env, 4)); // !*rladdcond
    if (v_191 == nil) goto v_107;
    v_192 = stack[-3];
    v_191 = basic_elt(env, 5); // (lessp leq greaterp geq)
    v_191 = Lmemq(nil, v_192, v_191);
    if (v_191 == nil) goto v_112;
    stack[-2] = basic_elt(env, 6); // and
    v_193 = basic_elt(env, 7); // greaterp
    v_191 = stack[-1];
    if (!car_legal(v_191)) v_192 = cdrerror(v_191); else
    v_192 = cdr(v_191);
    v_191 = nil;
    stack[-1] = list3(v_193, v_192, v_191);
    env = stack[-4];
    v_191 = stack[0];
    v_191 = ncons(v_191);
    env = stack[-4];
    v_191 = list2star(stack[-2], stack[-1], v_191);
    goto v_110;
v_112:
    stack[-2] = basic_elt(env, 6); // and
    v_193 = basic_elt(env, 8); // neq
    v_191 = stack[-1];
    if (!car_legal(v_191)) v_192 = cdrerror(v_191); else
    v_192 = cdr(v_191);
    v_191 = nil;
    stack[-1] = list3(v_193, v_192, v_191);
    env = stack[-4];
    v_191 = stack[0];
    v_191 = ncons(v_191);
    env = stack[-4];
    v_191 = list2star(stack[-2], stack[-1], v_191);
    goto v_110;
    v_191 = nil;
v_110:
    stack[0] = v_191;
    goto v_105;
v_107:
v_105:
    v_191 = stack[0];
    goto v_10;
v_83:
    v_191 = qvalue(basic_elt(env, 1)); // !*rlnzden
    if (v_191 == nil) goto v_140;
    v_191 = stack[-1];
    if (!car_legal(v_191)) v_191 = cdrerror(v_191); else
    v_191 = cdr(v_191);
    if (!consp(v_191)) goto v_146;
    else goto v_147;
v_146:
    v_191 = lisp_true;
    goto v_145;
v_147:
    v_191 = stack[-1];
    if (!car_legal(v_191)) v_191 = cdrerror(v_191); else
    v_191 = cdr(v_191);
    if (!car_legal(v_191)) v_191 = carerror(v_191); else
    v_191 = car(v_191);
    v_191 = (consp(v_191) ? nil : lisp_true);
    goto v_145;
    v_191 = nil;
v_145:
    if (v_191 == nil) goto v_143;
    else goto v_140;
v_143:
    v_193 = stack[-3];
    v_191 = basic_elt(env, 5); // (lessp leq greaterp geq)
    v_191 = Lmemq(nil, v_193, v_191);
    if (v_191 == nil) goto v_160;
    v_191 = stack[-1];
    if (!car_legal(v_191)) v_191 = cdrerror(v_191); else
    v_191 = cdr(v_191);
    {   LispObject fn = basic_elt(env, 13); // multf
    v_191 = (*qfn2(fn))(fn, v_192, v_191);
    }
    env = stack[-4];
    v_192 = v_191;
    goto v_158;
v_160:
v_158:
    v_193 = stack[-3];
    v_191 = nil;
    v_191 = list3(v_193, v_192, v_191);
    env = stack[-4];
    stack[0] = v_191;
    v_191 = qvalue(basic_elt(env, 4)); // !*rladdcond
    if (v_191 == nil) goto v_175;
    stack[-2] = basic_elt(env, 6); // and
    v_193 = basic_elt(env, 8); // neq
    v_191 = stack[-1];
    if (!car_legal(v_191)) v_192 = cdrerror(v_191); else
    v_192 = cdr(v_191);
    v_191 = nil;
    stack[-1] = list3(v_193, v_192, v_191);
    env = stack[-4];
    v_191 = stack[0];
    v_191 = ncons(v_191);
    env = stack[-4];
    v_191 = list2star(stack[-2], stack[-1], v_191);
    stack[0] = v_191;
    goto v_173;
v_175:
v_173:
    v_191 = stack[0];
    goto v_10;
v_140:
    v_193 = stack[-3];
    v_191 = nil;
    return list3(v_193, v_192, v_191);
v_10:
    return onevalue(v_191);
}



// Code for force!-lc

static LispObject CC_forceKlc(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_12, v_13, v_14;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_12 = v_3;
    v_13 = v_2;
// end of prologue
    v_14 = v_13;
    if (!car_legal(v_14)) v_14 = carerror(v_14); else
    v_14 = car(v_14);
    if (!car_legal(v_14)) v_14 = carerror(v_14); else
    v_14 = car(v_14);
    if (!car_legal(v_13)) v_13 = cdrerror(v_13); else
    v_13 = cdr(v_13);
    return acons(v_14, v_12, v_13);
}



// Code for simpsqrt2

static LispObject CC_simpsqrt2(LispObject env,
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
    v_40 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // minusf
    v_40 = (*qfn1(fn))(fn, v_40);
    }
    env = stack[-1];
    if (v_40 == nil) goto v_7;
    v_41 = stack[0];
    v_40 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    {   LispObject fn = basic_elt(env, 3); // iequal
    v_40 = (*qfn2(fn))(fn, v_41, v_40);
    }
    env = stack[-1];
    if (v_40 == nil) goto v_13;
    v_40 = qvalue(basic_elt(env, 1)); // gaussiani
    goto v_11;
v_13:
    v_40 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // negf
    v_40 = (*qfn1(fn))(fn, v_40);
    }
    env = stack[-1];
    v_41 = v_40;
    v_40 = v_41;
    if (is_number(v_40)) goto v_27;
    else goto v_28;
v_27:
    stack[0] = qvalue(basic_elt(env, 1)); // gaussiani
    v_40 = v_41;
    {   LispObject fn = basic_elt(env, 5); // simpsqrt3
    v_40 = (*qfn1(fn))(fn, v_40);
    }
    env = stack[-1];
    {
        LispObject v_43 = stack[0];
        LispObject fn = basic_elt(env, 6); // multf
        return (*qfn2(fn))(fn, v_43, v_40);
    }
v_28:
    v_40 = stack[0];
    {
        LispObject fn = basic_elt(env, 5); // simpsqrt3
        return (*qfn1(fn))(fn, v_40);
    }
    goto v_11;
    v_40 = nil;
v_11:
    goto v_5;
v_7:
    v_40 = stack[0];
    {
        LispObject fn = basic_elt(env, 5); // simpsqrt3
        return (*qfn1(fn))(fn, v_40);
    }
    v_40 = nil;
v_5:
    return onevalue(v_40);
}



// Code for cr!:zerop

static LispObject CC_crTzerop(LispObject env,
                         LispObject v_2)
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
    v_75 = stack[0];
    if (!car_legal(v_75)) v_75 = cdrerror(v_75); else
    v_75 = cdr(v_75);
    if (!car_legal(v_75)) v_75 = carerror(v_75); else
    v_75 = car(v_75);
    if (!consp(v_75)) goto v_10;
    else goto v_11;
v_10:
    v_75 = stack[0];
    if (!car_legal(v_75)) v_75 = cdrerror(v_75); else
    v_75 = cdr(v_75);
    if (!car_legal(v_75)) v_75 = carerror(v_75); else
    v_75 = car(v_75);
    goto v_9;
v_11:
    v_76 = basic_elt(env, 1); // !:rd!:
    v_75 = stack[0];
    if (!car_legal(v_75)) v_75 = cdrerror(v_75); else
    v_75 = cdr(v_75);
    if (!car_legal(v_75)) v_75 = carerror(v_75); else
    v_75 = car(v_75);
    v_75 = cons(v_76, v_75);
    env = stack[-1];
    goto v_9;
    v_75 = nil;
v_9:
    v_76 = v_75;
    v_75 = v_76;
    if (!consp(v_75)) goto v_28;
    else goto v_29;
v_28:
    v_75 = v_76;
    v_75 = static_cast<LispObject>(zerop(v_75));
    v_75 = v_75 ? lisp_true : nil;
    env = stack[-1];
    goto v_27;
v_29:
    v_75 = v_76;
    if (!car_legal(v_75)) v_75 = cdrerror(v_75); else
    v_75 = cdr(v_75);
    if (!car_legal(v_75)) v_76 = carerror(v_75); else
    v_76 = car(v_75);
    v_75 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_75 = (v_76 == v_75 ? lisp_true : nil);
    goto v_27;
    v_75 = nil;
v_27:
    if (v_75 == nil) goto v_6;
    else goto v_7;
v_6:
    v_75 = nil;
    goto v_5;
v_7:
    v_75 = stack[0];
    if (!car_legal(v_75)) v_75 = cdrerror(v_75); else
    v_75 = cdr(v_75);
    if (!car_legal(v_75)) v_75 = cdrerror(v_75); else
    v_75 = cdr(v_75);
    if (!consp(v_75)) goto v_45;
    else goto v_46;
v_45:
    v_75 = stack[0];
    if (!car_legal(v_75)) v_75 = cdrerror(v_75); else
    v_75 = cdr(v_75);
    if (!car_legal(v_75)) v_75 = cdrerror(v_75); else
    v_75 = cdr(v_75);
    goto v_44;
v_46:
    v_76 = basic_elt(env, 1); // !:rd!:
    v_75 = stack[0];
    if (!car_legal(v_75)) v_75 = cdrerror(v_75); else
    v_75 = cdr(v_75);
    if (!car_legal(v_75)) v_75 = cdrerror(v_75); else
    v_75 = cdr(v_75);
    v_75 = cons(v_76, v_75);
    goto v_44;
    v_75 = nil;
v_44:
    v_76 = v_75;
    v_75 = v_76;
    if (!consp(v_75)) goto v_63;
    else goto v_64;
v_63:
    v_75 = v_76;
        return Lzerop(nil, v_75);
v_64:
    v_75 = v_76;
    if (!car_legal(v_75)) v_75 = cdrerror(v_75); else
    v_75 = cdr(v_75);
    if (!car_legal(v_75)) v_76 = carerror(v_75); else
    v_76 = car(v_75);
    v_75 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_75 = (v_76 == v_75 ? lisp_true : nil);
    goto v_62;
    v_75 = nil;
v_62:
    goto v_5;
    v_75 = nil;
v_5:
    return onevalue(v_75);
}



// Code for varsinsf

static LispObject CC_varsinsf(LispObject env,
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
    v_58 = v_3;
    stack[-1] = v_2;
// end of prologue
    v_59 = stack[-1];
    if (!consp(v_59)) goto v_11;
    else goto v_12;
v_11:
    v_59 = lisp_true;
    goto v_10;
v_12:
    v_59 = stack[-1];
    if (!car_legal(v_59)) v_59 = carerror(v_59); else
    v_59 = car(v_59);
    v_59 = (consp(v_59) ? nil : lisp_true);
    goto v_10;
    v_59 = nil;
v_10:
    if (v_59 == nil) goto v_8;
    goto v_6;
v_8:
v_27:
    v_59 = stack[-1];
    if (!consp(v_59)) goto v_34;
    else goto v_35;
v_34:
    v_59 = lisp_true;
    goto v_33;
v_35:
    v_59 = stack[-1];
    if (!car_legal(v_59)) v_59 = carerror(v_59); else
    v_59 = car(v_59);
    v_59 = (consp(v_59) ? nil : lisp_true);
    goto v_33;
    v_59 = nil;
v_33:
    if (v_59 == nil) goto v_31;
    goto v_26;
v_31:
    v_59 = stack[-1];
    if (!car_legal(v_59)) v_59 = carerror(v_59); else
    v_59 = car(v_59);
    if (!car_legal(v_59)) stack[-2] = cdrerror(v_59); else
    stack[-2] = cdr(v_59);
    stack[0] = v_58;
    v_58 = stack[-1];
    if (!car_legal(v_58)) v_58 = carerror(v_58); else
    v_58 = car(v_58);
    if (!car_legal(v_58)) v_58 = carerror(v_58); else
    v_58 = car(v_58);
    if (!car_legal(v_58)) v_58 = carerror(v_58); else
    v_58 = car(v_58);
    v_58 = ncons(v_58);
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 1); // union
    v_58 = (*qfn2(fn))(fn, stack[0], v_58);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 0); // varsinsf
    v_58 = (*qfn2(fn))(fn, stack[-2], v_58);
    }
    env = stack[-3];
    v_59 = stack[-1];
    if (!car_legal(v_59)) v_59 = cdrerror(v_59); else
    v_59 = cdr(v_59);
    stack[-1] = v_59;
    goto v_27;
v_26:
    goto v_6;
    v_58 = nil;
v_6:
    return onevalue(v_58);
}



// Code for row_dim

static LispObject CC_row_dim(LispObject env,
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
    v_26 = qvalue(basic_elt(env, 1)); // !*fast_la
    if (v_26 == nil) goto v_12;
    else goto v_13;
v_12:
    v_26 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // matrixp
    v_26 = (*qfn1(fn))(fn, v_26);
    }
    env = stack[-1];
    v_26 = (v_26 == nil ? lisp_true : nil);
    goto v_11;
v_13:
    v_26 = nil;
    goto v_11;
    v_26 = nil;
v_11:
    if (v_26 == nil) goto v_9;
    v_26 = basic_elt(env, 2); // "Error in row_dim: input should be a matrix."
    {   LispObject fn = basic_elt(env, 4); // rederr
    v_26 = (*qfn1(fn))(fn, v_26);
    }
    env = stack[-1];
    goto v_7;
v_9:
v_7:
    v_26 = stack[0];
    {   LispObject fn = basic_elt(env, 5); // size_of_matrix
    v_26 = (*qfn1(fn))(fn, v_26);
    }
    if (!car_legal(v_26)) v_26 = carerror(v_26); else
    v_26 = car(v_26);
    return onevalue(v_26);
}



// Code for xpndwedge

static LispObject CC_xpndwedge(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    stack[-1] = nil;
v_8:
    v_40 = stack[0];
    if (!car_legal(v_40)) v_40 = cdrerror(v_40); else
    v_40 = cdr(v_40);
    if (v_40 == nil) goto v_13;
    else goto v_14;
v_13:
    goto v_9;
v_14:
    v_40 = stack[0];
    if (!car_legal(v_40)) v_40 = carerror(v_40); else
    v_40 = car(v_40);
    {   LispObject fn = basic_elt(env, 1); // partitop
    v_41 = (*qfn1(fn))(fn, v_40);
    }
    env = stack[-2];
    v_40 = stack[-1];
    v_40 = cons(v_41, v_40);
    env = stack[-2];
    stack[-1] = v_40;
    v_40 = stack[0];
    if (!car_legal(v_40)) v_40 = cdrerror(v_40); else
    v_40 = cdr(v_40);
    stack[0] = v_40;
    goto v_8;
v_9:
    v_40 = stack[0];
    if (!car_legal(v_40)) v_40 = carerror(v_40); else
    v_40 = car(v_40);
    {   LispObject fn = basic_elt(env, 1); // partitop
    v_40 = (*qfn1(fn))(fn, v_40);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 2); // mkunarywedge
    v_40 = (*qfn1(fn))(fn, v_40);
    }
    env = stack[-2];
    v_41 = v_40;
v_10:
    v_40 = stack[-1];
    if (v_40 == nil) goto v_30;
    else goto v_31;
v_30:
    v_40 = v_41;
    goto v_7;
v_31:
    v_40 = stack[-1];
    v_40 = car(v_40);
    {   LispObject fn = basic_elt(env, 3); // wedgepf2
    v_40 = (*qfn2(fn))(fn, v_40, v_41);
    }
    env = stack[-2];
    v_41 = v_40;
    v_40 = stack[-1];
    v_40 = cdr(v_40);
    stack[-1] = v_40;
    goto v_10;
v_7:
    return onevalue(v_40);
}



// Code for find_bubles_coeff

static LispObject CC_find_bubles_coeff(LispObject env,
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
    stack[-1] = nil;
    stack[0] = v_13;
    v_12 = ncons(v_12);
    env = stack[-3];
    {
        LispObject v_18 = stack[-2];
        LispObject v_19 = stack[-1];
        LispObject v_20 = stack[0];
        LispObject fn = basic_elt(env, 1); // find_bubles1_coeff
        return (*qfn4up(fn))(fn, v_18, v_19, v_20, v_12);
    }
}



// Code for lf!=less

static LispObject CC_lfMless(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_14 = v_2;
// end of prologue
    v_15 = basic_elt(env, 1); // cali
    v_13 = basic_elt(env, 2); // varlessp
    stack[-2] = get(v_15, v_13);
    env = stack[-3];
    v_13 = v_14;
    {   LispObject fn = basic_elt(env, 3); // lf!=lvar
    stack[0] = (*qfn1(fn))(fn, v_13);
    }
    env = stack[-3];
    v_13 = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // lf!=lvar
    v_13 = (*qfn1(fn))(fn, v_13);
    }
    {
        LispObject v_19 = stack[-2];
        LispObject v_20 = stack[0];
        return Lapply2(nil, v_19, v_20, v_13);
    }
}



// Code for general!-negate!-term

static LispObject CC_generalKnegateKterm(LispObject env,
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
    v_10 = v_11;
    if (!car_legal(v_10)) stack[0] = carerror(v_10); else
    stack[0] = car(v_10);
    v_10 = v_11;
    if (!car_legal(v_10)) v_10 = cdrerror(v_10); else
    v_10 = cdr(v_10);
    {   LispObject fn = basic_elt(env, 1); // general!-minus!-mod!-p
    v_10 = (*qfn1(fn))(fn, v_10);
    }
    {
        LispObject v_13 = stack[0];
        return cons(v_13, v_10);
    }
}



// Code for allbkern

static LispObject CC_allbkern(LispObject env,
                         LispObject v_2)
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
    v_38 = stack[0];
    if (v_38 == nil) goto v_13;
    else goto v_14;
v_13:
    goto v_9;
v_14:
    v_38 = stack[0];
    if (!car_legal(v_38)) v_38 = carerror(v_38); else
    v_38 = car(v_38);
    if (!car_legal(v_38)) v_38 = carerror(v_38); else
    v_38 = car(v_38);
    {   LispObject fn = basic_elt(env, 1); // kernels
    v_38 = (*qfn1(fn))(fn, v_38);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 2); // basic!-kern
    v_39 = (*qfn1(fn))(fn, v_38);
    }
    env = stack[-2];
    v_38 = stack[-1];
    v_38 = cons(v_39, v_38);
    env = stack[-2];
    stack[-1] = v_38;
    v_38 = stack[0];
    if (!car_legal(v_38)) v_38 = cdrerror(v_38); else
    v_38 = cdr(v_38);
    stack[0] = v_38;
    goto v_8;
v_9:
    v_38 = nil;
    v_39 = v_38;
v_10:
    v_38 = stack[-1];
    if (v_38 == nil) goto v_28;
    else goto v_29;
v_28:
    v_38 = v_39;
    goto v_7;
v_29:
    v_38 = stack[-1];
    v_38 = car(v_38);
    {   LispObject fn = basic_elt(env, 3); // union
    v_38 = (*qfn2(fn))(fn, v_38, v_39);
    }
    env = stack[-2];
    v_39 = v_38;
    v_38 = stack[-1];
    v_38 = cdr(v_38);
    stack[-1] = v_38;
    goto v_10;
v_7:
    return onevalue(v_38);
}



setup_type const u52_setup[] =
{
    {"mk_resimp_rep",           G0W1,     CC_mk_resimp_rep,G2W1,G3W1,   G4W1},
    {"bc_minus?",               G0W1,     CC_bc_minusW,G2W1,  G3W1,     G4W1},
    {"expttermp",               G0W2,     G1W2,     CC_expttermp,G3W2,  G4W2},
    {"expvec2a1",               G0W2,     G1W2,     CC_expvec2a1,G3W2,  G4W2},
    {"multsqpf",                G0W2,     G1W2,     CC_multsqpf,G3W2,   G4W2},
    {"rand-mons-sparse",        G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_randKmonsKsparse},
    {"exp*",                    G0W1,     CC_expH,  G2W1,     G3W1,     G4W1},
    {"atlas_edges",             G0W1,     CC_atlas_edges,G2W1,G3W1,     G4W1},
    {"actual_arguments",        G0W1,     CC_actual_arguments,G2W1,G3W1,G4W1},
    {"dp=comp",                 G0W2,     G1W2,     CC_dpMcomp,G3W2,    G4W2},
    {"rl_identifyonoff",        G0W1,     CC_rl_identifyonoff,G2W1,G3W1,G4W1},
    {"addfactors",              G0W2,     G1W2,     CC_addfactors,G3W2, G4W2},
    {"rule*",                   G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_ruleH},
    {"constant_exprp",          G0W1,     CC_constant_exprp,G2W1,G3W1,  G4W1},
    {"pasf_smordtable1",        G0W2,     G1W2,     CC_pasf_smordtable1,G3W2,G4W2},
    {"ps:difference-erule",     G0W2,     G1W2,     CC_psTdifferenceKerule,G3W2,G4W2},
    {"getvariables",            G0W1,     CC_getvariables,G2W1,G3W1,    G4W1},
    {"gbftimes",                G0W2,     G1W2,     CC_gbftimes,G3W2,   G4W2},
    {"r2oreaction",             G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_r2oreaction},
    {"binc",                    G0W2,     G1W2,     CC_binc,  G3W2,     G4W2},
    {"dp_2a",                   G0W1,     CC_dp_2a, G2W1,     G3W1,     G4W1},
    {"cde_list2id",             G0W1,     CC_cde_list2id,G2W1,G3W1,     G4W1},
    {"subdf",                   G0W3,     G1W3,     G2W3,     CC_subdf, G4W3},
    {"talp_mk-invs",            G0W2,     G1W2,     CC_talp_mkKinvs,G3W2,G4W2},
    {"qqe_dfs",                 G0W2,     G1W2,     CC_qqe_dfs,G3W2,    G4W2},
    {"i2ps",                    G0W1,     CC_i2ps,  G2W1,     G3W1,     G4W1},
    {"ldf-pow-var",             G0W1,     CC_ldfKpowKvar,G2W1,G3W1,     G4W1},
    {"fast-augment-columns",    G0W2,     G1W2,     CC_fastKaugmentKcolumns,G3W2,G4W2},
    {"decimal2internal",        G0W2,     G1W2,     CC_decimal2internal,G3W2,G4W2},
    {"dvertex-to-projector",    G0W3,     G1W3,     G2W3,     CC_dvertexKtoKprojector,G4W3},
    {"clogsq",                  G0W1,     CC_clogsq,G2W1,     G3W1,     G4W1},
    {"lf=tovarlessp",           G0W2,     G1W2,     CC_lfMtovarlessp,G3W2,G4W2},
    {"dummy_nam",               G0W1,     CC_dummy_nam,G2W1,  G3W1,     G4W1},
    {"st_extract_symcells1",    G0W3,     G1W3,     G2W3,     CC_st_extract_symcells1,G4W3},
    {"mod/",                    G0W2,     G1W2,     CC_modV,  G3W2,     G4W2},
    {"cr2rderr",                CC_cr2rderr,G1W0,   G2W0,     G3W0,     G4W0},
    {"quotfexf*1",              G0W2,     G1W2,     CC_quotfexfH1,G3W2, G4W2},
    {"texexplode",              G0W1,     CC_texexplode,G2W1, G3W1,     G4W1},
    {"dip_monp",                G0W1,     CC_dip_monp,G2W1,   G3W1,     G4W1},
    {"parseml",                 CC_parseml,G1W0,    G2W0,     G3W0,     G4W0},
    {"mkratnum",                G0W1,     CC_mkratnum,G2W1,   G3W1,     G4W1},
    {"poly-remainder",          G0W1,     CC_polyKremainder,G2W1,G3W1,  G4W1},
    {"xpartitsq",               G0W1,     CC_xpartitsq,G2W1,  G3W1,     G4W1},
    {"acmemb",                  G0W2,     G1W2,     CC_acmemb,G3W2,     G4W2},
    {"redassignp",              G0W1,     CC_redassignp,G2W1, G3W1,     G4W1},
    {"adjp",                    G0W1,     CC_adjp,  G2W1,     G3W1,     G4W1},
    {"calc_world",              G0W2,     G1W2,     CC_calc_world,G3W2, G4W2},
    {"*sq2fourier",             G0W1,     CC_Hsq2fourier,G2W1,G3W1,     G4W1},
    {"*v2j",                    G0W1,     CC_Hv2j,  G2W1,     G3W1,     G4W1},
    {"ic_taglist",              G0W1,     CC_ic_taglist,G2W1, G3W1,     G4W1},
    {"initmonomials",           CC_initmonomials,G1W0,G2W0,   G3W0,     G4W0},
    {"depend-p",                G0W2,     G1W2,     CC_dependKp,G3W2,   G4W2},
    {"ofsf_simpat",             G0W1,     CC_ofsf_simpat,G2W1,G3W1,     G4W1},
    {"force-lc",                G0W2,     G1W2,     CC_forceKlc,G3W2,   G4W2},
    {"simpsqrt2",               G0W1,     CC_simpsqrt2,G2W1,  G3W1,     G4W1},
    {"cr:zerop",                G0W1,     CC_crTzerop,G2W1,   G3W1,     G4W1},
    {"varsinsf",                G0W2,     G1W2,     CC_varsinsf,G3W2,   G4W2},
    {"row_dim",                 G0W1,     CC_row_dim,G2W1,    G3W1,     G4W1},
    {"xpndwedge",               G0W1,     CC_xpndwedge,G2W1,  G3W1,     G4W1},
    {"find_bubles_coeff",       G0W3,     G1W3,     G2W3,     CC_find_bubles_coeff,G4W3},
    {"lf=less",                 G0W2,     G1W2,     CC_lfMless,G3W2,    G4W2},
    {"general-negate-term",     G0W1,     CC_generalKnegateKterm,G2W1,G3W1,G4W1},
    {"allbkern",                G0W1,     CC_allbkern,G2W1,   G3W1,     G4W1},
    {nullptr, 
        reinterpret_cast<no_args *>(
            reinterpret_cast<uintptr_t>("u52")),
        reinterpret_cast<one_arg *>(
            reinterpret_cast<uintptr_t>("129220 4952234 7549015")),
        nullptr, nullptr, nullptr}
};

// end of generated code
