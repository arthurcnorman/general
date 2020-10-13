
// $destdir/u46.c        Machine generated C code

// $Id$

#include "config.h"
#include "headers.h"



// Code for pasf_smwmkatl

static LispObject CC_pasf_smwmkatl(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_26, v_27, v_28, v_29, v_30;
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
    v_27 = v_5;
    v_28 = v_4;
    v_29 = v_3;
    v_30 = v_2;
// end of prologue
    v_26 = qvalue(basic_elt(env, 1)); // !*rlsusi
    if (v_26 == nil) goto v_10;
    stack[-2] = v_30;
    stack[-1] = v_29;
    stack[0] = v_28;
    v_26 = v_27;
    v_26 = ncons(v_26);
    env = stack[-3];
    {
        LispObject v_34 = stack[-2];
        LispObject v_35 = stack[-1];
        LispObject v_36 = stack[0];
        LispObject fn = basic_elt(env, 2); // cl_susimkatl
        return (*qfn4up(fn))(fn, v_34, v_35, v_36, v_26);
    }
v_10:
    stack[-2] = v_30;
    stack[-1] = v_29;
    stack[0] = v_28;
    v_26 = v_27;
    v_26 = ncons(v_26);
    env = stack[-3];
    {
        LispObject v_37 = stack[-2];
        LispObject v_38 = stack[-1];
        LispObject v_39 = stack[0];
        LispObject fn = basic_elt(env, 3); // cl_smmkatl
        return (*qfn4up(fn))(fn, v_37, v_38, v_39, v_26);
    }
    v_26 = nil;
    return onevalue(v_26);
}



// Code for gb_searchinlist

static LispObject CC_gb_searchinlist(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_27 = stack[0];
    if (v_27 == nil) goto v_10;
    else goto v_11;
v_10:
    v_27 = nil;
    goto v_6;
v_11:
    v_27 = stack[0];
    if (!car_legal(v_27)) v_27 = carerror(v_27); else
    v_27 = car(v_27);
    {   LispObject fn = basic_elt(env, 1); // vdp_evlmon
    v_28 = (*qfn1(fn))(fn, v_27);
    }
    env = stack[-2];
    v_27 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // gb_buch!-ev_divides!?
    v_27 = (*qfn2(fn))(fn, v_28, v_27);
    }
    env = stack[-2];
    if (v_27 == nil) goto v_15;
    v_27 = stack[0];
    if (!car_legal(v_27)) v_27 = carerror(v_27); else
    v_27 = car(v_27);
    goto v_6;
v_15:
    v_27 = stack[0];
    if (!car_legal(v_27)) v_27 = cdrerror(v_27); else
    v_27 = cdr(v_27);
    stack[0] = v_27;
    goto v_7;
    v_27 = nil;
v_6:
    return onevalue(v_27);
}



// Code for d2int

static LispObject CC_d2int(LispObject env,
                         LispObject v_2)
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
    v_67 = v_2;
// end of prologue
    v_66 = v_67;
    if (!car_legal(v_66)) v_68 = cdrerror(v_66); else
    v_68 = cdr(v_66);
    v_66 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_68 == v_66) goto v_7;
    v_66 = nil;
    goto v_5;
v_7:
    v_66 = v_67;
    if (!car_legal(v_66)) v_66 = carerror(v_66); else
    v_66 = car(v_66);
    v_67 = v_66;
    if (is_number(v_66)) goto v_12;
    else goto v_13;
v_12:
    v_66 = v_67;
    goto v_5;
v_13:
    v_66 = v_67;
    if (!consp(v_66)) goto v_25;
    else goto v_26;
v_25:
    v_66 = lisp_true;
    goto v_24;
v_26:
    v_66 = v_67;
    if (!car_legal(v_66)) v_66 = carerror(v_66); else
    v_66 = car(v_66);
    v_66 = (consp(v_66) ? nil : lisp_true);
    goto v_24;
    v_66 = nil;
v_24:
    if (v_66 == nil) goto v_21;
    else goto v_22;
v_21:
    v_66 = lisp_true;
    goto v_20;
v_22:
    v_66 = v_67;
    if (!car_legal(v_66)) v_68 = carerror(v_66); else
    v_68 = car(v_66);
    v_66 = basic_elt(env, 1); // !:rd!:
    v_66 = (v_68 == v_66 ? lisp_true : nil);
    v_66 = (v_66 == nil ? lisp_true : nil);
    goto v_20;
    v_66 = nil;
v_20:
    if (v_66 == nil) goto v_18;
    v_66 = nil;
    goto v_5;
v_18:
    v_66 = v_67;
    if (!car_legal(v_66)) v_66 = cdrerror(v_66); else
    v_66 = cdr(v_66);
    stack[-1] = v_66;
    v_66 = stack[-1];
    v_66 = Ltruncate(nil, v_66);
    env = stack[-2];
    stack[0] = v_66;
    v_66 = stack[0];
    v_67 = Lfloat(nil, v_66);
    env = stack[-2];
    v_66 = stack[-1];
    v_66 = difference2(v_67, v_66);
    env = stack[-2];
    v_67 = Labsval(nil, v_66);
    env = stack[-2];
    v_66 = qvalue(basic_elt(env, 2)); // !!fleps1
    v_66 = static_cast<LispObject>(lessp2(v_67, v_66));
    v_66 = v_66 ? lisp_true : nil;
    if (v_66 == nil) goto v_54;
    v_66 = stack[0];
    goto v_52;
v_54:
    v_66 = nil;
    goto v_52;
    v_66 = nil;
v_52:
    goto v_5;
    v_66 = nil;
v_5:
    return onevalue(v_66);
}



// Code for tchscheme2

static LispObject CC_tchscheme2(LispObject env)
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
// space for vars preserved across procedure calls
    real_push(nil);
    stack_popper stack_popper_var(2);
// end of prologue
    v_25 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[0] = v_25;
v_8:
    v_26 = qvalue(basic_elt(env, 1)); // rowmax
    v_25 = stack[0];
    v_25 = difference2(v_26, v_25);
    env = stack[-1];
    v_25 = Lminusp(nil, v_25);
    env = stack[-1];
    if (v_25 == nil) goto v_13;
    goto v_7;
v_13:
    v_25 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // removechild
    v_25 = (*qfn1(fn))(fn, v_25);
    }
    env = stack[-1];
    v_25 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // to!*scheme
    v_25 = (*qfn1(fn))(fn, v_25);
    }
    env = stack[-1];
    v_25 = stack[0];
    v_25 = add1(v_25);
    env = stack[-1];
    stack[0] = v_25;
    goto v_8;
v_7:
    v_25 = nil;
    return onevalue(v_25);
}



// Code for sroot1

static LispObject CC_sroot1(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_158, v_159;
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
    stack[0] = v_3;
    stack[-4] = v_2;
// end of prologue
// Binding freevars
// FLUIDBIND: reloadenv=6 litvec-offset=1 saveloc=5
{   bind_fluid_stack bind_fluid_var(-6, 1, -5);
    setvalue(basic_elt(env, 1), nil); // freevars
// Binding substitution
// FLUIDBIND: reloadenv=6 litvec-offset=2 saveloc=3
{   bind_fluid_stack bind_fluid_var(-6, 2, -3);
    setvalue(basic_elt(env, 2), nil); // substitution
    v_159 = qvalue(basic_elt(env, 3)); // rpt
    v_158 = basic_elt(env, 4); // inf
    if (v_159 == v_158) goto v_20;
    v_159 = qvalue(basic_elt(env, 3)); // rpt
    v_158 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_158 = static_cast<LispObject>(lesseq2(v_159, v_158));
    v_158 = v_158 ? lisp_true : nil;
    env = stack[-6];
    goto v_18;
v_20:
    v_158 = nil;
    goto v_18;
    v_158 = nil;
v_18:
    if (v_158 == nil) goto v_16;
    else goto v_14;
v_16:
    v_158 = stack[-4];
    if (!consp(v_158)) goto v_32;
    else goto v_33;
v_32:
    v_158 = lisp_true;
    goto v_31;
v_33:
    v_158 = stack[-4];
    if (!car_legal(v_158)) v_159 = carerror(v_158); else
    v_159 = car(v_158);
    v_158 = stack[0];
    if (!car_legal(v_158)) v_158 = cdrerror(v_158); else
    v_158 = cdr(v_158);
    if (!car_legal(v_158)) v_158 = carerror(v_158); else
    v_158 = car(v_158);
    if (!car_legal(v_158)) v_158 = carerror(v_158); else
    v_158 = car(v_158);
    v_158 = Lneq_2(nil, v_159, v_158);
    env = stack[-6];
    goto v_31;
    v_158 = nil;
v_31:
    if (v_158 == nil) goto v_29;
    else goto v_14;
v_29:
    goto v_15;
v_14:
    v_158 = stack[-4];
    goto v_11;
v_15:
    v_158 = stack[0];
    if (!car_legal(v_158)) v_158 = cdrerror(v_158); else
    v_158 = cdr(v_158);
    if (!car_legal(v_158)) v_158 = carerror(v_158); else
    v_158 = car(v_158);
    {   LispObject fn = basic_elt(env, 10); // findnewvars
    v_159 = (*qfn1(fn))(fn, v_158);
    }
    env = stack[-6];
    v_158 = nil;
    {   LispObject fn = basic_elt(env, 11); // union
    v_158 = (*qfn2(fn))(fn, v_159, v_158);
    }
    env = stack[-6];
    setvalue(basic_elt(env, 1), v_158); // freevars
    v_158 = stack[0];
    if (!car_legal(v_158)) v_158 = cdrerror(v_158); else
    v_158 = cdr(v_158);
    if (!car_legal(v_158)) v_158 = cdrerror(v_158); else
    v_158 = cdr(v_158);
    if (!car_legal(v_158)) v_158 = carerror(v_158); else
    v_158 = car(v_158);
    setvalue(basic_elt(env, 2), v_158); // substitution
    v_158 = qvalue(basic_elt(env, 1)); // freevars
    stack[-1] = v_158;
v_59:
    v_158 = stack[-1];
    if (v_158 == nil) goto v_63;
    else goto v_64;
v_63:
    goto v_58;
v_64:
    v_158 = stack[-1];
    if (!car_legal(v_158)) v_158 = carerror(v_158); else
    v_158 = car(v_158);
    {   LispObject fn = basic_elt(env, 12); // newenv
    v_158 = (*qfn1(fn))(fn, v_158);
    }
    env = stack[-6];
    v_158 = stack[-1];
    if (!car_legal(v_158)) v_158 = cdrerror(v_158); else
    v_158 = cdr(v_158);
    stack[-1] = v_158;
    goto v_59;
v_58:
    v_158 = qvalue(basic_elt(env, 5)); // !*trpm
    if (v_158 == nil) goto v_77;
    v_158 = basic_elt(env, 6); // "Trying rule  "
    v_158 = Lprinc(nil, v_158);
    env = stack[-6];
    v_158 = stack[0];
    {   LispObject fn = basic_elt(env, 13); // rprint
    v_158 = (*qfn1(fn))(fn, v_158);
    }
    env = stack[-6];
    v_158 = basic_elt(env, 7); // "against      "
    v_158 = Lprinc(nil, v_158);
    env = stack[-6];
    v_158 = stack[-4];
    {   LispObject fn = basic_elt(env, 13); // rprint
    v_158 = (*qfn1(fn))(fn, v_158);
    }
    env = stack[-6];
    goto v_75;
v_77:
v_75:
    v_158 = stack[0];
    if (!car_legal(v_158)) v_158 = cdrerror(v_158); else
    v_158 = cdr(v_158);
    if (!car_legal(v_158)) stack[-2] = carerror(v_158); else
    stack[-2] = car(v_158);
    stack[-1] = stack[-4];
    stack[0] = lisp_true;
    v_158 = nil;
    v_158 = ncons(v_158);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 14); // amatch
    v_158 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_158);
    }
    env = stack[-6];
    stack[-1] = v_158;
    v_158 = qvalue(basic_elt(env, 5)); // !*trpm
    if (v_158 == nil) goto v_100;
    v_158 = stack[-1];
    if (v_158 == nil) goto v_105;
    v_158 = basic_elt(env, 8); // "producing    "
    v_158 = Lprinc(nil, v_158);
    env = stack[-6];
    v_158 = stack[-1];
    {   LispObject fn = basic_elt(env, 15); // embed!-null!-fn
    v_158 = (*qfn1(fn))(fn, v_158);
    }
    env = stack[-6];
    stack[-1] = v_158;
    {   LispObject fn = basic_elt(env, 13); // rprint
    v_158 = (*qfn1(fn))(fn, v_158);
    }
    env = stack[-6];
    goto v_103;
v_105:
    v_158 = basic_elt(env, 9); // "failed"
    v_158 = Lprinc(nil, v_158);
    env = stack[-6];
    v_158 = Lterpri(nil);
    env = stack[-6];
    goto v_103;
v_103:
    v_158 = Lterpri(nil);
    env = stack[-6];
    goto v_98;
v_100:
v_98:
    v_158 = qvalue(basic_elt(env, 1)); // freevars
    stack[0] = v_158;
v_123:
    v_158 = stack[0];
    if (v_158 == nil) goto v_127;
    else goto v_128;
v_127:
    goto v_122;
v_128:
    v_158 = stack[0];
    if (!car_legal(v_158)) v_158 = carerror(v_158); else
    v_158 = car(v_158);
    {   LispObject fn = basic_elt(env, 16); // restorenv
    v_158 = (*qfn1(fn))(fn, v_158);
    }
    env = stack[-6];
    v_158 = stack[0];
    if (!car_legal(v_158)) v_158 = cdrerror(v_158); else
    v_158 = cdr(v_158);
    stack[0] = v_158;
    goto v_123;
v_122:
    v_158 = stack[-1];
    if (v_158 == nil) goto v_141;
    v_159 = qvalue(basic_elt(env, 3)); // rpt
    v_158 = basic_elt(env, 4); // inf
    if (v_159 == v_158) goto v_146;
    v_158 = qvalue(basic_elt(env, 3)); // rpt
    v_158 = sub1(v_158);
    env = stack[-6];
    setvalue(basic_elt(env, 3), v_158); // rpt
    goto v_144;
v_146:
v_144:
    v_158 = stack[-1];
    {   LispObject fn = basic_elt(env, 15); // embed!-null!-fn
    v_158 = (*qfn1(fn))(fn, v_158);
    }
    goto v_139;
v_141:
    v_158 = stack[-4];
    goto v_139;
    v_158 = nil;
v_139:
v_11:
    ;}  // end of a binding scope
    ;}  // end of a binding scope
    return onevalue(v_158);
}



// Code for xregister_spoly_pair

static LispObject CC_xregister_spoly_pair(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_4;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// end of prologue
    v_4 = nil;
    return onevalue(v_4);
}



// Code for evaluate2

static LispObject CC_evaluate2(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_140, v_141, v_142;
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
    v_141 = v_3;
    stack[-4] = v_2;
// end of prologue
    v_142 = stack[-4];
    v_140 = basic_elt(env, 1); // !:dn!:
    if (v_142 == v_140) goto v_8;
    else goto v_9;
v_8:
    v_140 = v_141;
    {   LispObject fn = basic_elt(env, 5); // dn!:simp
    v_140 = (*qfn1(fn))(fn, v_140);
    }
    if (!car_legal(v_140)) v_140 = carerror(v_140); else
    v_140 = car(v_140);
    goto v_7;
v_9:
    v_140 = v_141;
    stack[-5] = v_140;
    v_140 = stack[-5];
    if (v_140 == nil) goto v_28;
    else goto v_29;
v_28:
    v_140 = nil;
    goto v_23;
v_29:
    v_140 = stack[-5];
    if (!car_legal(v_140)) v_140 = carerror(v_140); else
    v_140 = car(v_140);
    v_141 = v_140;
    v_140 = stack[-3];
    {   LispObject fn = basic_elt(env, 6); // evaluate1
    v_140 = (*qfn2(fn))(fn, v_141, v_140);
    }
    env = stack[-6];
    v_140 = ncons(v_140);
    env = stack[-6];
    stack[-1] = v_140;
    stack[-2] = v_140;
v_24:
    v_140 = stack[-5];
    if (!car_legal(v_140)) v_140 = cdrerror(v_140); else
    v_140 = cdr(v_140);
    stack[-5] = v_140;
    v_140 = stack[-5];
    if (v_140 == nil) goto v_43;
    else goto v_44;
v_43:
    v_140 = stack[-2];
    goto v_23;
v_44:
    stack[0] = stack[-1];
    v_140 = stack[-5];
    if (!car_legal(v_140)) v_140 = carerror(v_140); else
    v_140 = car(v_140);
    v_141 = v_140;
    v_140 = stack[-3];
    {   LispObject fn = basic_elt(env, 6); // evaluate1
    v_140 = (*qfn2(fn))(fn, v_141, v_140);
    }
    env = stack[-6];
    v_140 = ncons(v_140);
    env = stack[-6];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_140);
    v_140 = stack[-1];
    if (!car_legal(v_140)) v_140 = cdrerror(v_140); else
    v_140 = cdr(v_140);
    stack[-1] = v_140;
    goto v_24;
v_23:
    v_141 = v_140;
    v_142 = stack[-4];
    v_140 = basic_elt(env, 2); // plus
    if (v_142 == v_140) goto v_60;
    else goto v_61;
v_60:
    v_140 = v_141;
    {
        LispObject fn = basic_elt(env, 7); // !:dmpluslst
        return (*qfn1(fn))(fn, v_140);
    }
v_61:
    v_142 = stack[-4];
    v_140 = basic_elt(env, 3); // times
    if (v_142 == v_140) goto v_66;
    else goto v_67;
v_66:
    v_140 = v_141;
    {
        LispObject fn = basic_elt(env, 8); // !:dmtimeslst
        return (*qfn1(fn))(fn, v_140);
    }
v_67:
    v_142 = stack[-4];
    v_140 = qvalue(basic_elt(env, 4)); // dmarith!*
    v_140 = Lassoc(nil, v_142, v_140);
    v_142 = v_140;
    if (v_140 == nil) goto v_73;
    v_140 = v_142;
    if (!car_legal(v_140)) v_140 = cdrerror(v_140); else
    v_140 = cdr(v_140);
    {
        LispObject fn = basic_elt(env, 9); // apply
        return (*qfn2(fn))(fn, v_140, v_141);
    }
v_73:
    v_140 = v_141;
    if (!car_legal(v_140)) v_140 = carerror(v_140); else
    v_140 = car(v_140);
    v_140 = Lconsp(nil, v_140);
    env = stack[-6];
    if (v_140 == nil) goto v_82;
    v_142 = stack[-4];
    v_140 = v_141;
    if (!car_legal(v_140)) v_140 = carerror(v_140); else
    v_140 = car(v_140);
    if (!car_legal(v_140)) v_140 = carerror(v_140); else
    v_140 = car(v_140);
    v_140 = get(v_142, v_140);
    env = stack[-6];
    v_142 = v_140;
    if (v_140 == nil) goto v_82;
    v_140 = v_142;
    {
        LispObject fn = basic_elt(env, 9); // apply
        return (*qfn2(fn))(fn, v_140, v_141);
    }
v_82:
    v_140 = v_141;
    stack[-3] = v_140;
    v_140 = stack[-3];
    if (v_140 == nil) goto v_111;
    else goto v_112;
v_111:
    v_140 = nil;
    goto v_106;
v_112:
    v_140 = stack[-3];
    if (!car_legal(v_140)) v_140 = carerror(v_140); else
    v_140 = car(v_140);
    {   LispObject fn = basic_elt(env, 10); // prepf
    v_140 = (*qfn1(fn))(fn, v_140);
    }
    env = stack[-6];
    v_140 = ncons(v_140);
    env = stack[-6];
    stack[-1] = v_140;
    stack[-2] = v_140;
v_107:
    v_140 = stack[-3];
    if (!car_legal(v_140)) v_140 = cdrerror(v_140); else
    v_140 = cdr(v_140);
    stack[-3] = v_140;
    v_140 = stack[-3];
    if (v_140 == nil) goto v_125;
    else goto v_126;
v_125:
    v_140 = stack[-2];
    goto v_106;
v_126:
    stack[0] = stack[-1];
    v_140 = stack[-3];
    if (!car_legal(v_140)) v_140 = carerror(v_140); else
    v_140 = car(v_140);
    {   LispObject fn = basic_elt(env, 10); // prepf
    v_140 = (*qfn1(fn))(fn, v_140);
    }
    env = stack[-6];
    v_140 = ncons(v_140);
    env = stack[-6];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_140);
    v_140 = stack[-1];
    if (!car_legal(v_140)) v_140 = cdrerror(v_140); else
    v_140 = cdr(v_140);
    stack[-1] = v_140;
    goto v_107;
v_106:
    v_140 = cons(stack[-4], v_140);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 11); // simp
    v_140 = (*qfn1(fn))(fn, v_140);
    }
    env = stack[-6];
    if (!car_legal(v_140)) v_140 = carerror(v_140); else
    v_140 = car(v_140);
    {
        LispObject fn = basic_elt(env, 12); // force!-to!-dm
        return (*qfn1(fn))(fn, v_140);
    }
    v_140 = nil;
    goto v_7;
    v_140 = nil;
v_7:
    return onevalue(v_140);
}



// Code for mv!-compact

static LispObject CC_mvKcompact(LispObject env,
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
    stack_popper stack_popper_var(6);
// copy arguments values to proper place
    stack[-1] = v_4;
    stack[-2] = v_3;
    stack[-3] = v_2;
// end of prologue
v_1:
    v_79 = stack[-3];
    if (v_79 == nil) goto v_12;
    else goto v_13;
v_12:
    v_79 = stack[-1];
    {
        LispObject fn = basic_elt(env, 1); // mv!-reverse
        return (*qfn1(fn))(fn, v_79);
    }
v_13:
    v_80 = stack[-3];
    v_79 = stack[-2];
    {   LispObject fn = basic_elt(env, 2); // mv!-pow!-chk
    v_79 = (*qfn2(fn))(fn, v_80, v_79);
    }
    env = stack[-5];
    stack[-4] = v_79;
    if (v_79 == nil) goto v_20;
    stack[0] = stack[-3];
    v_80 = stack[-4];
    v_79 = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // mv!-pow!-mv!-!+
    v_79 = (*qfn2(fn))(fn, v_80, v_79);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 4); // mv!-compact2
    v_79 = (*qfn2(fn))(fn, stack[0], v_79);
    }
    env = stack[-5];
    stack[0] = v_79;
    if (v_79 == nil) goto v_20;
    v_81 = stack[0];
    v_80 = stack[-2];
    v_79 = stack[-1];
    stack[-3] = v_81;
    stack[-2] = v_80;
    stack[-1] = v_79;
    goto v_1;
v_20:
    v_80 = stack[-3];
    v_79 = stack[-2];
    if (!car_legal(v_79)) v_79 = cdrerror(v_79); else
    v_79 = cdr(v_79);
    {   LispObject fn = basic_elt(env, 2); // mv!-pow!-chk
    v_79 = (*qfn2(fn))(fn, v_80, v_79);
    }
    env = stack[-5];
    stack[-4] = v_79;
    if (v_79 == nil) goto v_36;
    v_80 = stack[-4];
    v_79 = stack[-2];
    if (!car_legal(v_79)) v_79 = carerror(v_79); else
    v_79 = car(v_79);
    if (!car_legal(v_79)) v_79 = carerror(v_79); else
    v_79 = car(v_79);
    {   LispObject fn = basic_elt(env, 5); // mv!-pow!-!+
    v_80 = (*qfn2(fn))(fn, v_80, v_79);
    }
    env = stack[-5];
    stack[0] = v_80;
    v_79 = stack[-1];
    {   LispObject fn = basic_elt(env, 6); // mv!-pow!-assoc
    v_79 = (*qfn2(fn))(fn, v_80, v_79);
    }
    env = stack[-5];
    if (v_79 == nil) goto v_45;
    else goto v_46;
v_45:
    v_81 = stack[0];
    v_80 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_79 = stack[-3];
    stack[0] = acons(v_81, v_80, v_79);
    env = stack[-5];
    v_80 = stack[-4];
    v_79 = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // mv!-pow!-mv!-!+
    v_79 = (*qfn2(fn))(fn, v_80, v_79);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 4); // mv!-compact2
    v_79 = (*qfn2(fn))(fn, stack[0], v_79);
    }
    env = stack[-5];
    stack[0] = v_79;
    goto v_44;
v_46:
    v_79 = nil;
    goto v_44;
    v_79 = nil;
v_44:
    if (v_79 == nil) goto v_36;
    v_81 = stack[0];
    v_80 = stack[-2];
    v_79 = stack[-1];
    stack[-3] = v_81;
    stack[-2] = v_80;
    stack[-1] = v_79;
    goto v_1;
v_36:
    v_79 = stack[-3];
    if (!car_legal(v_79)) stack[0] = cdrerror(v_79); else
    stack[0] = cdr(v_79);
    v_79 = stack[-3];
    if (!car_legal(v_79)) v_80 = carerror(v_79); else
    v_80 = car(v_79);
    v_79 = stack[-1];
    v_79 = cons(v_80, v_79);
    env = stack[-5];
    stack[-3] = stack[0];
    stack[-1] = v_79;
    goto v_1;
    v_79 = nil;
    return onevalue(v_79);
}



// Code for simp!-prop

static LispObject CC_simpKprop(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_148, v_149, v_150;
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
    stack[-2] = v_2;
// end of prologue
// Binding propvars!*
// FLUIDBIND: reloadenv=7 litvec-offset=1 saveloc=6
{   bind_fluid_stack bind_fluid_var(-7, 1, -6);
    setvalue(basic_elt(env, 1), nil); // propvars!*
    v_148 = stack[-2];
    if (!car_legal(v_148)) v_148 = cdrerror(v_148); else
    v_148 = cdr(v_148);
    stack[-4] = v_148;
    v_148 = stack[-4];
    if (v_148 == nil) goto v_20;
    else goto v_21;
v_20:
    v_148 = nil;
    goto v_14;
v_21:
    v_148 = stack[-4];
    if (!car_legal(v_148)) v_148 = carerror(v_148); else
    v_148 = car(v_148);
    {   LispObject fn = basic_elt(env, 12); // reval
    v_148 = (*qfn1(fn))(fn, v_148);
    }
    env = stack[-7];
    v_148 = ncons(v_148);
    env = stack[-7];
    stack[-1] = v_148;
    stack[-3] = v_148;
v_15:
    v_148 = stack[-4];
    if (!car_legal(v_148)) v_148 = cdrerror(v_148); else
    v_148 = cdr(v_148);
    stack[-4] = v_148;
    v_148 = stack[-4];
    if (v_148 == nil) goto v_34;
    else goto v_35;
v_34:
    v_148 = stack[-3];
    goto v_14;
v_35:
    stack[0] = stack[-1];
    v_148 = stack[-4];
    if (!car_legal(v_148)) v_148 = carerror(v_148); else
    v_148 = car(v_148);
    {   LispObject fn = basic_elt(env, 12); // reval
    v_148 = (*qfn1(fn))(fn, v_148);
    }
    env = stack[-7];
    v_148 = ncons(v_148);
    env = stack[-7];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_148);
    v_148 = stack[-1];
    if (!car_legal(v_148)) v_148 = cdrerror(v_148); else
    v_148 = cdr(v_148);
    stack[-1] = v_148;
    goto v_15;
v_14:
    stack[-5] = v_148;
    v_149 = basic_elt(env, 2); // and
    v_148 = stack[-5];
    v_148 = Lmember(nil, v_149, v_148);
    if (v_148 == nil) goto v_51;
    v_148 = basic_elt(env, 3); // or
    setvalue(basic_elt(env, 4), v_148); // !'and
    v_148 = basic_elt(env, 2); // and
    setvalue(basic_elt(env, 5), v_148); // !'or
    v_148 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    setvalue(basic_elt(env, 6), v_148); // !'true
    v_148 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    setvalue(basic_elt(env, 7), v_148); // !'false
    goto v_49;
v_51:
    v_148 = basic_elt(env, 2); // and
    setvalue(basic_elt(env, 4), v_148); // !'and
    v_148 = basic_elt(env, 3); // or
    setvalue(basic_elt(env, 5), v_148); // !'or
    v_148 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    setvalue(basic_elt(env, 6), v_148); // !'true
    v_148 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    setvalue(basic_elt(env, 7), v_148); // !'false
    goto v_49;
v_49:
    v_148 = stack[-2];
    if (!car_legal(v_148)) v_149 = carerror(v_148); else
    v_149 = car(v_148);
    v_148 = lisp_true;
    {   LispObject fn = basic_elt(env, 13); // simp!-prop1
    v_148 = (*qfn2(fn))(fn, v_149, v_148);
    }
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 14); // prepf
    v_148 = (*qfn1(fn))(fn, v_148);
    }
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 12); // reval
    v_148 = (*qfn1(fn))(fn, v_148);
    }
    env = stack[-7];
    v_150 = v_148;
    v_149 = v_150;
    v_148 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_149 == v_148) goto v_75;
    else goto v_76;
v_75:
    v_148 = qvalue(basic_elt(env, 7)); // !'false
    {   LispObject fn = basic_elt(env, 15); // simp
    v_148 = (*qfn1(fn))(fn, v_148);
    }
    goto v_9;
v_76:
    v_148 = qvalue(basic_elt(env, 1)); // propvars!*
    stack[-4] = v_148;
v_84:
    v_148 = stack[-4];
    if (v_148 == nil) goto v_88;
    else goto v_89;
v_88:
    goto v_83;
v_89:
    v_148 = stack[-4];
    if (!car_legal(v_148)) v_148 = carerror(v_148); else
    v_148 = car(v_148);
    stack[-3] = basic_elt(env, 8); // times
    stack[-2] = v_150;
    stack[-1] = qvalue(basic_elt(env, 5)); // !'or
    stack[0] = v_148;
    v_149 = basic_elt(env, 9); // not
    v_148 = list2(v_149, v_148);
    env = stack[-7];
    v_149 = list3(stack[-1], stack[0], v_148);
    env = stack[-7];
    v_148 = lisp_true;
    {   LispObject fn = basic_elt(env, 13); // simp!-prop1
    v_148 = (*qfn2(fn))(fn, v_149, v_148);
    }
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 14); // prepf
    v_148 = (*qfn1(fn))(fn, v_148);
    }
    env = stack[-7];
    v_148 = list3(stack[-3], stack[-2], v_148);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 12); // reval
    v_148 = (*qfn1(fn))(fn, v_148);
    }
    env = stack[-7];
    v_150 = v_148;
    v_148 = stack[-4];
    if (!car_legal(v_148)) v_148 = cdrerror(v_148); else
    v_148 = cdr(v_148);
    stack[-4] = v_148;
    goto v_84;
v_83:
    v_148 = v_150;
    {   LispObject fn = basic_elt(env, 16); // simp!-prop!-dist
    v_148 = (*qfn1(fn))(fn, v_148);
    }
    env = stack[-7];
    v_150 = v_148;
    v_149 = basic_elt(env, 10); // full
    v_148 = stack[-5];
    v_148 = Lmember(nil, v_149, v_148);
    if (v_148 == nil) goto v_114;
    else goto v_115;
v_114:
    v_148 = v_150;
    {   LispObject fn = basic_elt(env, 17); // simp!-prop2
    v_148 = (*qfn1(fn))(fn, v_148);
    }
    env = stack[-7];
    v_150 = v_148;
    goto v_113;
v_115:
v_113:
    v_148 = v_150;
    {   LispObject fn = basic_elt(env, 18); // simp!-prop!-form
    v_148 = (*qfn1(fn))(fn, v_148);
    }
    env = stack[-7];
    v_150 = v_148;
    v_148 = v_150;
    if (is_number(v_148)) goto v_125;
    else goto v_126;
v_125:
    v_149 = v_150;
    v_148 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_148 = cons(v_149, v_148);
    goto v_9;
v_126:
    v_148 = v_150;
    if (!consp(v_148)) goto v_134;
    v_148 = basic_elt(env, 11); // boolean
    v_149 = v_150;
    v_148 = list2(v_148, v_149);
    env = stack[-7];
    v_150 = v_148;
    goto v_132;
v_134:
v_132:
    v_149 = v_150;
    v_148 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 19); // to
    v_149 = (*qfn2(fn))(fn, v_149, v_148);
    }
    env = stack[-7];
    v_148 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_150 = cons(v_149, v_148);
    env = stack[-7];
    v_149 = nil;
    v_148 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_148 = acons(v_150, v_149, v_148);
v_9:
    ;}  // end of a binding scope
    return onevalue(v_148);
}



// Code for try!-all!-constants

static LispObject CC_tryKallKconstants(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    v_58 = v_2;
// end of prologue
    v_57 = nil;
    stack[-1] = v_57;
    v_57 = v_58;
    stack[-4] = v_57;
    v_57 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[0] = v_57;
v_12:
    v_59 = stack[-3];
    v_58 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_57 = stack[0];
    v_57 = Lputv(nil, v_59, v_58, v_57);
    env = stack[-5];
    v_59 = stack[-4];
    v_58 = stack[-3];
    v_57 = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // split!-further
    v_57 = (*qfn3(fn))(fn, v_59, v_58, v_57);
    }
    env = stack[-5];
    v_58 = v_57;
    v_57 = v_58;
    if (!car_legal(v_57)) v_57 = cdrerror(v_57); else
    v_57 = cdr(v_57);
    stack[-4] = v_57;
    v_57 = v_58;
    if (!car_legal(v_57)) v_57 = carerror(v_57); else
    v_57 = car(v_57);
    v_58 = v_57;
    v_57 = stack[-1];
    v_57 = Lnconc(nil, v_58, v_57);
    env = stack[-5];
    stack[-1] = v_57;
    v_57 = stack[-4];
    if (v_57 == nil) goto v_33;
    else goto v_34;
v_33:
    v_57 = stack[-1];
    goto v_11;
v_34:
    v_58 = qvalue(basic_elt(env, 1)); // number!-needed
    v_57 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_58 == v_57) goto v_39;
    else goto v_40;
v_39:
    v_58 = stack[-4];
    v_57 = stack[-1];
        return Lnconc(nil, v_58, v_57);
v_40:
    v_57 = stack[0];
    v_57 = static_cast<LispObject>(static_cast<std::intptr_t>(v_57) + 0x10);
    stack[0] = v_57;
    v_58 = stack[0];
    v_57 = qvalue(basic_elt(env, 2)); // current!-modulus
    if ((static_cast<std::intptr_t>(v_58) < static_cast<std::intptr_t>(v_57))) goto v_50;
    else goto v_51;
v_50:
    goto v_12;
v_51:
    v_58 = stack[-4];
    v_57 = stack[-1];
        return Lnconc(nil, v_58, v_57);
v_11:
    return onevalue(v_57);
}



// Code for polynomlistautoreduce

static LispObject CC_polynomlistautoreduce(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_139, v_140, v_141;
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
    v_139 = nil;
    v_139 = ncons(v_139);
    env = stack[-6];
    stack[-5] = v_139;
v_15:
    v_139 = stack[-4];
    if (!car_legal(v_139)) v_139 = carerror(v_139); else
    v_139 = car(v_139);
    if (v_139 == nil) goto v_18;
    else goto v_19;
v_18:
    goto v_14;
v_19:
    v_141 = stack[-5];
    v_139 = stack[-4];
    if (!car_legal(v_139)) v_140 = carerror(v_139); else
    v_140 = car(v_139);
    v_139 = stack[-3];
    {   LispObject fn = basic_elt(env, 1); // polynomlistreduce
    v_139 = (*qfn3(fn))(fn, v_141, v_140, v_139);
    }
    env = stack[-6];
    stack[-2] = v_139;
    v_140 = stack[-4];
    v_139 = stack[-4];
    if (!car_legal(v_139)) v_139 = cdrerror(v_139); else
    v_139 = cdr(v_139);
    if (!car_legal(v_139)) v_139 = carerror(v_139); else
    v_139 = car(v_139);
    if (!car_legal(v_140)) rplaca_fails(v_140);
    setcar(v_140, v_139);
    v_139 = stack[-4];
    if (!car_legal(v_139)) v_139 = cdrerror(v_139); else
    v_139 = cdr(v_139);
    if (!car_legal(v_139)) v_139 = cdrerror(v_139); else
    v_139 = cdr(v_139);
    if (!car_legal(v_140)) rplacd_fails(v_140);
    setcdr(v_140, v_139);
    v_139 = stack[-2];
    if (!car_legal(v_139)) v_139 = carerror(v_139); else
    v_139 = car(v_139);
    if (v_139 == nil) goto v_40;
    v_139 = stack[-2];
    if (!car_legal(v_139)) v_139 = carerror(v_139); else
    v_139 = car(v_139);
    stack[-1] = v_139;
    v_139 = stack[-5];
    stack[0] = v_139;
v_48:
    v_139 = stack[0];
    if (!car_legal(v_139)) v_139 = carerror(v_139); else
    v_139 = car(v_139);
    if (v_139 == nil) goto v_51;
    else goto v_52;
v_51:
    goto v_47;
v_52:
    v_139 = stack[0];
    if (!car_legal(v_139)) v_139 = carerror(v_139); else
    v_139 = car(v_139);
    if (!car_legal(v_139)) v_140 = carerror(v_139); else
    v_140 = car(v_139);
    v_139 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // monomisdivisibleby
    v_139 = (*qfn2(fn))(fn, v_140, v_139);
    }
    env = stack[-6];
    if (v_139 == nil) goto v_59;
    v_140 = stack[-4];
    v_139 = stack[0];
    if (!car_legal(v_139)) v_139 = carerror(v_139); else
    v_139 = car(v_139);
    {   LispObject fn = basic_elt(env, 3); // pushback
    v_139 = (*qfn2(fn))(fn, v_140, v_139);
    }
    env = stack[-6];
    v_140 = stack[0];
    v_139 = stack[0];
    if (!car_legal(v_139)) v_139 = cdrerror(v_139); else
    v_139 = cdr(v_139);
    if (!car_legal(v_139)) v_139 = carerror(v_139); else
    v_139 = car(v_139);
    if (!car_legal(v_140)) rplaca_fails(v_140);
    setcar(v_140, v_139);
    v_139 = stack[0];
    if (!car_legal(v_139)) v_139 = cdrerror(v_139); else
    v_139 = cdr(v_139);
    if (!car_legal(v_139)) v_139 = cdrerror(v_139); else
    v_139 = cdr(v_139);
    if (!car_legal(v_140)) rplacd_fails(v_140);
    setcdr(v_140, v_139);
    goto v_57;
v_59:
    v_139 = stack[0];
    if (!car_legal(v_139)) v_139 = cdrerror(v_139); else
    v_139 = cdr(v_139);
    stack[0] = v_139;
    goto v_57;
v_57:
    goto v_48;
v_47:
    v_140 = stack[-5];
    v_139 = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // pushback
    v_139 = (*qfn2(fn))(fn, v_140, v_139);
    }
    env = stack[-6];
    goto v_38;
v_40:
v_38:
    goto v_15;
v_14:
    v_139 = stack[-5];
    stack[0] = v_139;
v_93:
    v_139 = stack[0];
    if (!car_legal(v_139)) v_139 = carerror(v_139); else
    v_139 = car(v_139);
    if (v_139 == nil) goto v_96;
    else goto v_97;
v_96:
    goto v_92;
v_97:
    v_139 = stack[0];
    if (!car_legal(v_139)) v_139 = carerror(v_139); else
    v_139 = car(v_139);
    stack[-2] = v_139;
    v_140 = stack[0];
    v_139 = stack[0];
    if (!car_legal(v_139)) v_139 = cdrerror(v_139); else
    v_139 = cdr(v_139);
    if (!car_legal(v_139)) v_139 = carerror(v_139); else
    v_139 = car(v_139);
    if (!car_legal(v_140)) rplaca_fails(v_140);
    setcar(v_140, v_139);
    v_139 = stack[0];
    if (!car_legal(v_139)) v_139 = cdrerror(v_139); else
    v_139 = cdr(v_139);
    if (!car_legal(v_139)) v_139 = cdrerror(v_139); else
    v_139 = cdr(v_139);
    if (!car_legal(v_140)) rplacd_fails(v_140);
    setcdr(v_140, v_139);
    v_141 = stack[-5];
    v_140 = stack[-2];
    v_139 = stack[-3];
    {   LispObject fn = basic_elt(env, 1); // polynomlistreduce
    v_139 = (*qfn3(fn))(fn, v_141, v_140, v_139);
    }
    env = stack[-6];
    stack[-2] = v_139;
    v_139 = stack[-2];
    if (v_139 == nil) goto v_119;
    v_139 = stack[-2];
    if (!car_legal(v_139)) v_139 = carerror(v_139); else
    v_139 = car(v_139);
    if (v_139 == nil) goto v_119;
    stack[-1] = stack[0];
    v_139 = stack[0];
    if (!car_legal(v_139)) v_140 = carerror(v_139); else
    v_140 = car(v_139);
    v_139 = stack[0];
    if (!car_legal(v_139)) v_139 = cdrerror(v_139); else
    v_139 = cdr(v_139);
    v_139 = cons(v_140, v_139);
    env = stack[-6];
    if (!car_legal(stack[-1])) rplacd_fails(stack[-1]);
    setcdr(stack[-1], v_139);
    v_140 = stack[-1];
    v_139 = stack[-2];
    if (!car_legal(v_140)) rplaca_fails(v_140);
    setcar(v_140, v_139);
    v_139 = stack[0];
    if (!car_legal(v_139)) v_139 = cdrerror(v_139); else
    v_139 = cdr(v_139);
    stack[0] = v_139;
    goto v_117;
v_119:
v_117:
    goto v_93;
v_92:
    v_139 = stack[-5];
    return onevalue(v_139);
}



// Code for ofsf_qesubqat

static LispObject CC_ofsf_qesubqat(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_112, v_113, v_114;
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
    stack[-3] = stack[-1];
    v_112 = stack[-2];
    {   LispObject fn = basic_elt(env, 6); // ofsf_varlat
    v_112 = (*qfn1(fn))(fn, v_112);
    }
    env = stack[-4];
    v_112 = Lmemq(nil, stack[-3], v_112);
    if (v_112 == nil) goto v_13;
    else goto v_14;
v_13:
    v_112 = stack[-2];
    goto v_10;
v_14:
    v_112 = qvalue(basic_elt(env, 1)); // !*rlqesubf
    if (v_112 == nil) goto v_23;
    v_112 = stack[-2];
    if (!car_legal(v_112)) v_112 = cdrerror(v_112); else
    v_112 = cdr(v_112);
    if (!car_legal(v_112)) stack[-3] = carerror(v_112); else
    stack[-3] = car(v_112);
    v_112 = stack[0];
    {   LispObject fn = basic_elt(env, 7); // prepsq
    v_112 = (*qfn1(fn))(fn, v_112);
    }
    env = stack[-4];
    v_112 = cons(stack[-1], v_112);
    env = stack[-4];
    v_112 = ncons(v_112);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 8); // subf
    v_112 = (*qfn2(fn))(fn, stack[-3], v_112);
    }
    env = stack[-4];
    goto v_21;
v_23:
    v_112 = stack[-2];
    if (!car_legal(v_112)) v_112 = cdrerror(v_112); else
    v_112 = cdr(v_112);
    if (!car_legal(v_112)) v_114 = carerror(v_112); else
    v_114 = car(v_112);
    v_113 = stack[-1];
    v_112 = stack[0];
    {   LispObject fn = basic_elt(env, 9); // ofsf_subf
    v_112 = (*qfn3(fn))(fn, v_114, v_113, v_112);
    }
    env = stack[-4];
    goto v_21;
    v_112 = nil;
v_21:
    stack[-1] = v_112;
    v_112 = stack[-2];
    if (!car_legal(v_112)) v_112 = carerror(v_112); else
    v_112 = car(v_112);
    stack[0] = v_112;
    v_112 = qvalue(basic_elt(env, 2)); // !*rlqelocal
    if (v_112 == nil) goto v_47;
    v_113 = stack[0];
    v_112 = stack[-1];
    {
        LispObject fn = basic_elt(env, 10); // ofsf_qesubqat!-local
        return (*qfn2(fn))(fn, v_113, v_112);
    }
v_47:
    v_113 = stack[0];
    v_112 = basic_elt(env, 3); // equal
    if (v_113 == v_112) goto v_58;
    else goto v_59;
v_58:
    v_112 = lisp_true;
    goto v_57;
v_59:
    v_113 = stack[0];
    v_112 = basic_elt(env, 4); // neq
    if (v_113 == v_112) goto v_67;
    else goto v_68;
v_67:
    v_112 = lisp_true;
    goto v_66;
v_68:
    v_114 = basic_elt(env, 5); // geq
    v_112 = stack[-1];
    if (!car_legal(v_112)) v_113 = cdrerror(v_112); else
    v_113 = cdr(v_112);
    v_112 = nil;
    v_113 = list3(v_114, v_113, v_112);
    env = stack[-4];
    v_112 = nil;
    {   LispObject fn = basic_elt(env, 11); // ofsf_surep
    v_112 = (*qfn2(fn))(fn, v_113, v_112);
    }
    env = stack[-4];
    goto v_66;
    v_112 = nil;
v_66:
    goto v_57;
    v_112 = nil;
v_57:
    if (v_112 == nil) goto v_55;
    v_114 = stack[0];
    v_112 = stack[-1];
    if (!car_legal(v_112)) v_113 = carerror(v_112); else
    v_113 = car(v_112);
    v_112 = nil;
    return list3(v_114, v_113, v_112);
v_55:
    v_112 = stack[-1];
    if (!car_legal(v_112)) v_112 = cdrerror(v_112); else
    v_112 = cdr(v_112);
    {   LispObject fn = basic_elt(env, 12); // sfto_pdecf
    v_112 = (*qfn1(fn))(fn, v_112);
    }
    env = stack[-4];
    if (!car_legal(v_112)) v_112 = carerror(v_112); else
    v_112 = car(v_112);
    stack[-2] = v_112;
    v_114 = basic_elt(env, 5); // geq
    v_113 = stack[-2];
    v_112 = nil;
    v_113 = list3(v_114, v_113, v_112);
    env = stack[-4];
    v_112 = nil;
    {   LispObject fn = basic_elt(env, 11); // ofsf_surep
    v_112 = (*qfn2(fn))(fn, v_113, v_112);
    }
    env = stack[-4];
    if (v_112 == nil) goto v_93;
    v_114 = stack[0];
    v_112 = stack[-1];
    if (!car_legal(v_112)) v_113 = carerror(v_112); else
    v_113 = car(v_112);
    v_112 = nil;
    return list3(v_114, v_113, v_112);
v_93:
    v_112 = stack[-1];
    if (!car_legal(v_112)) v_113 = carerror(v_112); else
    v_113 = car(v_112);
    v_112 = stack[-2];
    {   LispObject fn = basic_elt(env, 13); // multf
    v_113 = (*qfn2(fn))(fn, v_113, v_112);
    }
    v_112 = nil;
    {
        LispObject v_119 = stack[0];
        return list3(v_119, v_113, v_112);
    }
v_10:
    return onevalue(v_112);
}



// Code for tayexp!-max2

static LispObject CC_tayexpKmax2(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // tayexp!-lessp
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



// Code for cl_replace!-varl

static LispObject CC_cl_replaceKvarl(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_74, v_75, v_76;
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
    v_74 = v_2;
// end of prologue
    stack[0] = nil;
    {   LispObject fn = basic_elt(env, 1); // cl_varl1
    v_74 = (*qfn1(fn))(fn, v_74);
    }
    env = stack[-4];
    v_75 = v_74;
    v_74 = v_75;
    if (!car_legal(v_74)) v_74 = carerror(v_74); else
    v_74 = car(v_74);
    stack[-3] = v_74;
    v_74 = v_75;
    if (!car_legal(v_74)) v_74 = cdrerror(v_74); else
    v_74 = cdr(v_74);
    stack[-2] = v_74;
    v_75 = stack[-3];
    v_74 = stack[-2];
    v_74 = Lappend_2(nil, v_75, v_74);
    env = stack[-4];
    stack[-1] = v_74;
v_26:
    v_74 = stack[-2];
    if (v_74 == nil) goto v_29;
    else goto v_30;
v_29:
    goto v_25;
v_30:
    v_74 = stack[-2];
    if (!car_legal(v_74)) v_74 = carerror(v_74); else
    v_74 = car(v_74);
    v_75 = v_74;
    v_74 = stack[-2];
    if (!car_legal(v_74)) v_74 = cdrerror(v_74); else
    v_74 = cdr(v_74);
    stack[-2] = v_74;
    v_74 = v_75;
    v_76 = v_74;
    v_75 = v_76;
    v_74 = stack[-3];
    v_74 = Lmemq(nil, v_75, v_74);
    if (v_74 == nil) goto v_45;
    v_75 = v_76;
    v_74 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_74 = cons(v_75, v_74);
    env = stack[-4];
    v_75 = v_74;
    v_74 = stack[0];
    v_74 = cons(v_75, v_74);
    env = stack[-4];
    stack[0] = v_74;
    goto v_43;
v_45:
    v_75 = v_76;
    v_74 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_74 = cons(v_75, v_74);
    env = stack[-4];
    v_75 = v_74;
    v_74 = stack[0];
    v_74 = cons(v_75, v_74);
    env = stack[-4];
    stack[0] = v_74;
    goto v_43;
v_43:
    goto v_26;
v_25:
    v_75 = stack[-1];
    v_74 = stack[0];
    return cons(v_75, v_74);
    return onevalue(v_74);
}



// Code for qqe_simplqneq

static LispObject CC_qqe_simplqneq(LispObject env,
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
    v_48 = v_3;
    v_47 = v_2;
// end of prologue
    v_48 = v_47;
    if (!car_legal(v_48)) v_48 = cdrerror(v_48); else
    v_48 = cdr(v_48);
    if (!car_legal(v_48)) v_48 = carerror(v_48); else
    v_48 = car(v_48);
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    if (!car_legal(v_47)) v_47 = carerror(v_47); else
    v_47 = car(v_47);
    v_49 = basic_elt(env, 1); // qequal
    {   LispObject fn = basic_elt(env, 5); // qqe_mk2
    v_48 = (*qfn3(fn))(fn, v_49, v_48, v_47);
    }
    env = stack[-3];
    v_47 = nil;
    {   LispObject fn = basic_elt(env, 6); // qqe_simplqequal
    v_47 = (*qfn2(fn))(fn, v_48, v_47);
    }
    env = stack[-3];
    stack[-2] = v_47;
    v_48 = stack[-2];
    v_47 = basic_elt(env, 2); // true
    if (v_48 == v_47) goto v_28;
    else goto v_29;
v_28:
    v_47 = basic_elt(env, 3); // false
    goto v_27;
v_29:
    v_48 = stack[-2];
    v_47 = basic_elt(env, 3); // false
    if (v_48 == v_47) goto v_33;
    else goto v_34;
v_33:
    v_47 = basic_elt(env, 2); // true
    goto v_27;
v_34:
    stack[-1] = basic_elt(env, 4); // qneq
    v_47 = stack[-2];
    {   LispObject fn = basic_elt(env, 7); // qqe_arg2l
    stack[0] = (*qfn1(fn))(fn, v_47);
    }
    env = stack[-3];
    v_47 = stack[-2];
    {   LispObject fn = basic_elt(env, 8); // qqe_arg2r
    v_47 = (*qfn1(fn))(fn, v_47);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 5); // qqe_mk2
    v_47 = (*qfn3(fn))(fn, stack[-1], stack[0], v_47);
    }
    goto v_27;
v_27:
    return onevalue(v_47);
}



// Code for pdiffvars

static LispObject CC_pdiffvars(LispObject env,
                         LispObject v_3, LispObject v_4)
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
        push(v_3,v_4);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_4,v_3);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[-1] = v_4;
    v_28 = v_3;
// end of prologue
// Binding ind
// FLUIDBIND: reloadenv=3 litvec-offset=1 saveloc=2
{   bind_fluid_stack bind_fluid_var(-3, 1, -2);
    setvalue(basic_elt(env, 1), v_28); // ind
    v_28 = qvalue(basic_elt(env, 1)); // ind
    if (v_28 == nil) goto v_16;
    v_29 = stack[-1];
    v_28 = qvalue(basic_elt(env, 1)); // ind
    if (!car_legal(v_28)) v_28 = carerror(v_28); else
    v_28 = car(v_28);
    {   LispObject fn = basic_elt(env, 2); // nth
    stack[0] = (*qfn2(fn))(fn, v_29, v_28);
    }
    env = stack[-3];
    v_28 = qvalue(basic_elt(env, 1)); // ind
    if (!car_legal(v_28)) v_29 = cdrerror(v_28); else
    v_29 = cdr(v_28);
    v_28 = stack[-1];
    {   LispObject fn = basic_elt(env, 0); // pdiffvars
    v_28 = (*qfn2(fn))(fn, v_29, v_28);
    }
    env = stack[-3];
    v_28 = cons(stack[0], v_28);
    goto v_14;
v_16:
    v_28 = nil;
v_14:
    ;}  // end of a binding scope
    return onevalue(v_28);
}



// Code for rnfix!*

static LispObject CC_rnfixH(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_11, v_12;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_11 = v_2;
// end of prologue
    v_12 = v_11;
    if (!car_legal(v_12)) v_12 = cdrerror(v_12); else
    v_12 = cdr(v_12);
    if (!car_legal(v_12)) v_12 = carerror(v_12); else
    v_12 = car(v_12);
    if (!car_legal(v_11)) v_11 = cdrerror(v_11); else
    v_11 = cdr(v_11);
    if (!car_legal(v_11)) v_11 = cdrerror(v_11); else
    v_11 = cdr(v_11);
    return quot2(v_12, v_11);
}



// Code for newsym1

static LispObject CC_newsym1(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil);
    stack_popper stack_popper_var(2);
// end of prologue
    v_14 = qvalue(basic_elt(env, 1)); // cindex!*
    v_14 = Lexplode(nil, v_14);
    env = stack[-1];
    stack[0] = v_14;
    v_14 = qvalue(basic_elt(env, 1)); // cindex!*
    v_14 = add1(v_14);
    env = stack[-1];
    setvalue(basic_elt(env, 1), v_14); // cindex!*
    v_15 = qvalue(basic_elt(env, 2)); // cname!*
    v_14 = stack[0];
    v_14 = Lappend_2(nil, v_15, v_14);
        return Lcompress(nil, v_14);
    return onevalue(v_14);
}



// Code for nestzerop!:

static LispObject CC_nestzeropT(LispObject env,
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
    v_21 = v_2;
// end of prologue
    v_20 = v_21;
    v_20 = integerp(v_20);
    if (v_20 == nil) goto v_7;
    v_20 = v_21;
    {   LispObject fn = basic_elt(env, 1); // simp
    v_20 = (*qfn1(fn))(fn, v_20);
    }
    goto v_5;
v_7:
    v_20 = v_21;
    if (!car_legal(v_20)) v_20 = cdrerror(v_20); else
    v_20 = cdr(v_20);
    if (!car_legal(v_20)) v_20 = cdrerror(v_20); else
    v_20 = cdr(v_20);
    if (!car_legal(v_20)) v_20 = cdrerror(v_20); else
    v_20 = cdr(v_20);
    goto v_5;
    v_20 = nil;
v_5:
    if (!car_legal(v_20)) v_20 = carerror(v_20); else
    v_20 = car(v_20);
    v_20 = (v_20 == nil ? lisp_true : nil);
    return onevalue(v_20);
}



// Code for dipdivmon

static LispObject CC_dipdivmon(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    v_35 = stack[-2];
    if (v_35 == nil) goto v_12;
    else goto v_13;
v_12:
    v_35 = stack[-3];
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn1(fn))(fn, v_35);
    }
v_13:
    v_35 = stack[-2];
    if (!car_legal(v_35)) v_36 = carerror(v_35); else
    v_36 = car(v_35);
    v_35 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // evdif
    v_36 = (*qfn2(fn))(fn, v_36, v_35);
    }
    env = stack[-4];
    v_35 = stack[-3];
    v_35 = cons(v_36, v_35);
    env = stack[-4];
    stack[-3] = v_35;
    v_35 = stack[-2];
    if (!car_legal(v_35)) v_35 = cdrerror(v_35); else
    v_35 = cdr(v_35);
    if (!car_legal(v_35)) v_36 = carerror(v_35); else
    v_36 = car(v_35);
    v_35 = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // bcquot
    v_36 = (*qfn2(fn))(fn, v_36, v_35);
    }
    env = stack[-4];
    v_35 = stack[-3];
    v_35 = cons(v_36, v_35);
    env = stack[-4];
    stack[-3] = v_35;
    v_35 = stack[-2];
    if (!car_legal(v_35)) v_35 = cdrerror(v_35); else
    v_35 = cdr(v_35);
    if (!car_legal(v_35)) v_35 = cdrerror(v_35); else
    v_35 = cdr(v_35);
    stack[-2] = v_35;
    goto v_9;
    v_35 = nil;
    return onevalue(v_35);
}



// Code for sc_scalarproduct

static LispObject CC_sc_scalarproduct(LispObject env,
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
    real_push(nil, nil, nil, nil, nil);
    stack_popper stack_popper_var(6);
// copy arguments values to proper place
    stack[-2] = v_3;
    stack[-3] = v_2;
// end of prologue
    v_39 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {   LispObject fn = basic_elt(env, 1); // sc_simp
    v_39 = (*qfn1(fn))(fn, v_39);
    }
    env = stack[-5];
    stack[0] = v_39;
    v_39 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-4] = v_39;
v_13:
    v_39 = stack[-2];
    {   LispObject fn = basic_elt(env, 2); // fast!-row!-dim
    v_40 = (*qfn1(fn))(fn, v_39);
    }
    env = stack[-5];
    v_39 = stack[-4];
    v_39 = difference2(v_40, v_39);
    env = stack[-5];
    v_39 = Lminusp(nil, v_39);
    env = stack[-5];
    if (v_39 == nil) goto v_18;
    goto v_12;
v_18:
    stack[-1] = stack[0];
    v_41 = stack[-3];
    v_40 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_39 = stack[-4];
    {   LispObject fn = basic_elt(env, 3); // sc_getmat
    stack[0] = (*qfn3(fn))(fn, v_41, v_40, v_39);
    }
    env = stack[-5];
    v_41 = stack[-2];
    v_40 = stack[-4];
    v_39 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 3); // sc_getmat
    v_39 = (*qfn3(fn))(fn, v_41, v_40, v_39);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 4); // sc_multsq
    v_39 = (*qfn2(fn))(fn, stack[0], v_39);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 5); // sc_addsq
    v_39 = (*qfn2(fn))(fn, stack[-1], v_39);
    }
    env = stack[-5];
    stack[0] = v_39;
    v_39 = stack[-4];
    v_39 = add1(v_39);
    env = stack[-5];
    stack[-4] = v_39;
    goto v_13;
v_12:
    v_39 = stack[0];
    return onevalue(v_39);
}



// Code for delete_edge

static LispObject CC_delete_edge(LispObject env,
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
    if (v_36 == v_35) goto v_16;
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



// Code for mkimpart

static LispObject CC_mkimpart(LispObject env,
                         LispObject v_2)
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
    v_39 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // sfp
    v_39 = (*qfn1(fn))(fn, v_39);
    }
    env = stack[-1];
    if (v_39 == nil) goto v_7;
    v_39 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // realvaluedp!-sf
    v_39 = (*qfn1(fn))(fn, v_39);
    }
    env = stack[-1];
    if (v_39 == nil) goto v_13;
    v_40 = nil;
    v_39 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_40, v_39);
v_13:
    v_40 = stack[0];
    v_39 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_39 = cons(v_40, v_39);
    env = stack[-1];
    {
        LispObject fn = basic_elt(env, 4); // impartsq
        return (*qfn1(fn))(fn, v_39);
    }
    v_39 = nil;
    goto v_5;
v_7:
    v_39 = stack[0];
    {   LispObject fn = basic_elt(env, 5); // realvaluedp
    v_39 = (*qfn1(fn))(fn, v_39);
    }
    env = stack[-1];
    if (v_39 == nil) goto v_26;
    v_40 = nil;
    v_39 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_40, v_39);
v_26:
    v_40 = basic_elt(env, 1); // impart
    v_39 = stack[0];
    v_40 = list2(v_40, v_39);
    env = stack[-1];
    v_39 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {
        LispObject fn = basic_elt(env, 6); // mksq
        return (*qfn2(fn))(fn, v_40, v_39);
    }
    v_39 = nil;
v_5:
    return onevalue(v_39);
}



// Code for mv2sf

static LispObject CC_mv2sf(LispObject env,
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
    stack[-2] = nil;
v_9:
    v_42 = stack[-1];
    if (v_42 == nil) goto v_14;
    else goto v_15;
v_14:
    goto v_10;
v_15:
    v_42 = stack[-1];
    if (!car_legal(v_42)) v_42 = carerror(v_42); else
    v_42 = car(v_42);
    if (!car_legal(v_42)) v_44 = carerror(v_42); else
    v_44 = car(v_42);
    v_42 = stack[-1];
    if (!car_legal(v_42)) v_42 = carerror(v_42); else
    v_42 = car(v_42);
    if (!car_legal(v_42)) v_43 = cdrerror(v_42); else
    v_43 = cdr(v_42);
    v_42 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // mv2sf1
    v_43 = (*qfn3(fn))(fn, v_44, v_43, v_42);
    }
    env = stack[-3];
    v_42 = stack[-2];
    v_42 = cons(v_43, v_42);
    env = stack[-3];
    stack[-2] = v_42;
    v_42 = stack[-1];
    if (!car_legal(v_42)) v_42 = cdrerror(v_42); else
    v_42 = cdr(v_42);
    stack[-1] = v_42;
    goto v_9;
v_10:
    v_42 = nil;
    v_43 = v_42;
v_11:
    v_42 = stack[-2];
    if (v_42 == nil) goto v_32;
    else goto v_33;
v_32:
    v_42 = v_43;
    goto v_8;
v_33:
    v_42 = stack[-2];
    v_42 = car(v_42);
    {   LispObject fn = basic_elt(env, 2); // addf
    v_42 = (*qfn2(fn))(fn, v_42, v_43);
    }
    env = stack[-3];
    v_43 = v_42;
    v_42 = stack[-2];
    v_42 = cdr(v_42);
    stack[-2] = v_42;
    goto v_11;
v_8:
    return onevalue(v_42);
}



// Code for nodum_varp

static LispObject CC_nodum_varp(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_42 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // listp
    v_42 = (*qfn1(fn))(fn, v_42);
    }
    env = stack[-1];
    if (v_42 == nil) goto v_7;
    v_42 = lisp_true;
    goto v_5;
v_7:
    v_42 = stack[0];
    if (!symbolp(v_42)) v_42 = nil;
    else { v_42 = qfastgets(v_42);
           if (v_42 != nil) { v_42 = elt(v_42, 32); // dummy
#ifdef RECORD_GET
             if (v_42 == SPID_NOPROP)
                record_get(elt(fastget_names, 32), 0),
                v_42 = nil;
             else record_get(elt(fastget_names, 32), 1),
                v_42 = lisp_true; }
           else record_get(elt(fastget_names, 32), 0); }
#else
             if (v_42 == SPID_NOPROP) v_42 = nil; else v_42 = lisp_true; }}
#endif
    if (v_42 == nil) goto v_16;
    v_42 = lisp_true;
    goto v_14;
v_16:
    v_42 = stack[0];
    {   LispObject fn = basic_elt(env, 5); // ad_splitname
    v_42 = (*qfn1(fn))(fn, v_42);
    }
    env = stack[-1];
    if (!car_legal(v_42)) v_43 = carerror(v_42); else
    v_43 = car(v_42);
    v_42 = qvalue(basic_elt(env, 1)); // g_dvbase
    if (equal(v_43, v_42)) goto v_24;
    else goto v_25;
v_24:
    v_42 = lisp_true;
    goto v_23;
v_25:
    v_43 = basic_elt(env, 2); // !~dv
    v_42 = basic_elt(env, 3); // !~dva
    v_42 = list2(v_43, v_42);
    v_42 = Lmember(nil, stack[0], v_42);
    goto v_23;
    v_42 = nil;
v_23:
    goto v_14;
    v_42 = nil;
v_14:
    if (v_42 == nil) goto v_12;
    v_42 = nil;
    goto v_5;
v_12:
    v_42 = lisp_true;
    goto v_5;
    v_42 = nil;
v_5:
    return onevalue(v_42);
}



// Code for mkrootsq

static LispObject CC_mkrootsq(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    v_151 = stack[-1];
    v_150 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_151 == v_150) goto v_7;
    else goto v_8;
v_7:
    v_150 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {
        LispObject fn = basic_elt(env, 8); // !*d2q
        return (*qfn1(fn))(fn, v_150);
    }
v_8:
    v_151 = stack[0];
    v_150 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    if (v_151 == v_150) goto v_17;
    else goto v_18;
v_17:
    v_151 = stack[-1];
    v_150 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    if (v_151 == v_150) goto v_23;
    else goto v_24;
v_23:
    v_150 = lisp_true;
    goto v_22;
v_24:
    v_151 = stack[-1];
    v_150 = basic_elt(env, 1); // (minus 1)
    v_150 = (equal(v_151, v_150) ? lisp_true : nil);
    goto v_22;
    v_150 = nil;
v_22:
    goto v_16;
v_18:
    v_150 = nil;
    goto v_16;
    v_150 = nil;
v_16:
    if (v_150 == nil) goto v_14;
    v_150 = basic_elt(env, 2); // i
    {
        LispObject fn = basic_elt(env, 9); // simp
        return (*qfn1(fn))(fn, v_150);
    }
v_14:
    v_151 = stack[-1];
    v_150 = basic_elt(env, 3); // expt
    if (!consp(v_151)) goto v_43;
    v_151 = car(v_151);
    if (v_151 == v_150) goto v_42;
    else goto v_43;
v_42:
    v_150 = stack[-1];
    if (!car_legal(v_150)) v_150 = cdrerror(v_150); else
    v_150 = cdr(v_150);
    if (!car_legal(v_150)) v_150 = cdrerror(v_150); else
    v_150 = cdr(v_150);
    if (!car_legal(v_150)) v_150 = carerror(v_150); else
    v_150 = car(v_150);
    v_150 = integerp(v_150);
    if (v_150 == nil) goto v_49;
    else goto v_50;
v_49:
    v_150 = nil;
    goto v_48;
v_50:
    v_150 = qvalue(basic_elt(env, 4)); // !*precise_complex
    v_150 = (v_150 == nil ? lisp_true : nil);
    goto v_48;
    v_150 = nil;
v_48:
    goto v_41;
v_43:
    v_150 = nil;
    goto v_41;
    v_150 = nil;
v_41:
    if (v_150 == nil) goto v_39;
    v_150 = stack[-1];
    if (!car_legal(v_150)) v_150 = cdrerror(v_150); else
    v_150 = cdr(v_150);
    if (!car_legal(v_150)) v_151 = carerror(v_150); else
    v_151 = car(v_150);
    v_150 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // mkrootsq
    v_151 = (*qfn2(fn))(fn, v_151, v_150);
    }
    env = stack[-3];
    v_150 = stack[-1];
    if (!car_legal(v_150)) v_150 = cdrerror(v_150); else
    v_150 = cdr(v_150);
    if (!car_legal(v_150)) v_150 = cdrerror(v_150); else
    v_150 = cdr(v_150);
    if (!car_legal(v_150)) v_150 = carerror(v_150); else
    v_150 = car(v_150);
    {
        LispObject fn = basic_elt(env, 10); // exptsq
        return (*qfn2(fn))(fn, v_151, v_150);
    }
v_39:
    stack[-2] = nil;
    v_150 = stack[-1];
    v_150 = integerp(v_150);
    if (v_150 == nil) goto v_83;
    v_150 = stack[-1];
    v_150 = Lminusp(nil, v_150);
    env = stack[-3];
    if (v_150 == nil) goto v_90;
    else goto v_91;
v_90:
    stack[-2] = stack[-1];
    v_151 = stack[-1];
    v_150 = qvalue(basic_elt(env, 5)); // factorbound!*
    v_150 = static_cast<LispObject>(lessp2(v_151, v_150));
    v_150 = v_150 ? lisp_true : nil;
    env = stack[-3];
    if (v_150 == nil) goto v_103;
    else goto v_102;
v_103:
    v_150 = qvalue(basic_elt(env, 6)); // !*ifactor
v_102:
    {   LispObject fn = basic_elt(env, 11); // zfactor1
    v_150 = (*qfn2(fn))(fn, stack[-2], v_150);
    }
    env = stack[-3];
    stack[-2] = v_150;
    v_151 = Llength(nil, v_150);
    env = stack[-3];
    v_150 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_150 = static_cast<LispObject>(greaterp2(v_151, v_150));
    v_150 = v_150 ? lisp_true : nil;
    env = stack[-3];
    if (v_150 == nil) goto v_96;
    else goto v_95;
v_96:
    v_150 = stack[-2];
    if (!car_legal(v_150)) v_150 = carerror(v_150); else
    v_150 = car(v_150);
    if (!car_legal(v_150)) v_151 = cdrerror(v_150); else
    v_151 = cdr(v_150);
    v_150 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_150 = static_cast<LispObject>(greaterp2(v_151, v_150));
    v_150 = v_150 ? lisp_true : nil;
    env = stack[-3];
v_95:
    goto v_89;
v_91:
    v_150 = nil;
    goto v_89;
    v_150 = nil;
v_89:
    if (v_150 == nil) goto v_83;
    v_151 = stack[-2];
    v_150 = stack[0];
    {
        LispObject fn = basic_elt(env, 12); // mkrootsql
        return (*qfn2(fn))(fn, v_151, v_150);
    }
v_83:
    v_151 = stack[0];
    v_150 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    if (v_151 == v_150) goto v_122;
    else goto v_123;
v_122:
    v_150 = stack[-1];
    {   LispObject fn = basic_elt(env, 13); // mksqrt
    v_150 = (*qfn1(fn))(fn, v_150);
    }
    env = stack[-3];
    goto v_121;
v_123:
    stack[-2] = basic_elt(env, 3); // expt
    v_152 = basic_elt(env, 7); // quotient
    v_151 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_150 = stack[0];
    v_150 = list3(v_152, v_151, v_150);
    env = stack[-3];
    v_150 = list3(stack[-2], stack[-1], v_150);
    env = stack[-3];
    goto v_121;
    v_150 = nil;
v_121:
    stack[-2] = v_150;
    v_150 = stack[-2];
    {   LispObject fn = basic_elt(env, 14); // opmtch
    v_150 = (*qfn1(fn))(fn, v_150);
    }
    env = stack[-3];
    v_151 = v_150;
    if (v_150 == nil) goto v_140;
    v_150 = v_151;
    {
        LispObject fn = basic_elt(env, 9); // simp
        return (*qfn1(fn))(fn, v_150);
    }
v_140:
    v_151 = stack[-2];
    v_150 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {
        LispObject fn = basic_elt(env, 15); // mksq
        return (*qfn2(fn))(fn, v_151, v_150);
    }
    v_150 = nil;
    goto v_6;
    v_150 = nil;
v_6:
    return onevalue(v_150);
}



// Code for ofsf_facequal

static LispObject CC_ofsf_facequal(LispObject env,
                         LispObject v_2)
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
    v_79 = v_2;
// end of prologue
    {   LispObject fn = basic_elt(env, 6); // sfto_fctrf
    v_79 = (*qfn1(fn))(fn, v_79);
    }
    env = stack[-4];
    if (!car_legal(v_79)) v_79 = cdrerror(v_79); else
    v_79 = cdr(v_79);
    stack[-3] = v_79;
    v_79 = stack[-3];
    if (v_79 == nil) goto v_15;
    else goto v_16;
v_15:
    v_79 = nil;
    goto v_8;
v_16:
    v_79 = stack[-3];
    if (!car_legal(v_79)) v_79 = carerror(v_79); else
    v_79 = car(v_79);
    v_81 = basic_elt(env, 1); // equal
    if (!car_legal(v_79)) v_80 = carerror(v_79); else
    v_80 = car(v_79);
    v_79 = nil;
    v_79 = list3(v_81, v_80, v_79);
    env = stack[-4];
    v_79 = ncons(v_79);
    env = stack[-4];
    stack[-1] = v_79;
    stack[-2] = v_79;
v_9:
    v_79 = stack[-3];
    if (!car_legal(v_79)) v_79 = cdrerror(v_79); else
    v_79 = cdr(v_79);
    stack[-3] = v_79;
    v_79 = stack[-3];
    if (v_79 == nil) goto v_32;
    else goto v_33;
v_32:
    v_79 = stack[-2];
    goto v_8;
v_33:
    stack[0] = stack[-1];
    v_79 = stack[-3];
    if (!car_legal(v_79)) v_79 = carerror(v_79); else
    v_79 = car(v_79);
    v_81 = basic_elt(env, 1); // equal
    if (!car_legal(v_79)) v_80 = carerror(v_79); else
    v_80 = car(v_79);
    v_79 = nil;
    v_79 = list3(v_81, v_80, v_79);
    env = stack[-4];
    v_79 = ncons(v_79);
    env = stack[-4];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_79);
    v_79 = stack[-1];
    if (!car_legal(v_79)) v_79 = cdrerror(v_79); else
    v_79 = cdr(v_79);
    stack[-1] = v_79;
    goto v_9;
v_8:
    v_80 = v_79;
    v_79 = v_80;
    if (v_79 == nil) goto v_53;
    v_79 = v_80;
    if (!car_legal(v_79)) v_79 = cdrerror(v_79); else
    v_79 = cdr(v_79);
    if (v_79 == nil) goto v_53;
    v_79 = basic_elt(env, 2); // or
    return cons(v_79, v_80);
v_53:
    v_79 = v_80;
    if (v_79 == nil) goto v_62;
    else goto v_63;
v_62:
    v_80 = basic_elt(env, 2); // or
    v_79 = basic_elt(env, 3); // and
    if (v_80 == v_79) goto v_67;
    else goto v_68;
v_67:
    v_79 = basic_elt(env, 4); // true
    goto v_66;
v_68:
    v_79 = basic_elt(env, 5); // false
    goto v_66;
    v_79 = nil;
v_66:
    goto v_51;
v_63:
    v_79 = v_80;
    if (!car_legal(v_79)) v_79 = carerror(v_79); else
    v_79 = car(v_79);
    goto v_51;
    v_79 = nil;
v_51:
    return onevalue(v_79);
}



// Code for polynomreduceby

static LispObject CC_polynomreduceby(LispObject env,
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    stack[-1] = v_3;
    stack[-2] = v_2;
// end of prologue
    stack[-3] = nil;
v_12:
    v_64 = stack[-3];
    if (v_64 == nil) goto v_16;
    goto v_11;
v_16:
    v_64 = stack[-2];
    stack[0] = v_64;
v_22:
    v_64 = stack[0];
    if (!car_legal(v_64)) v_64 = carerror(v_64); else
    v_64 = car(v_64);
    if (v_64 == nil) goto v_25;
    v_64 = stack[0];
    if (!car_legal(v_64)) v_65 = carerror(v_64); else
    v_65 = car(v_64);
    v_64 = stack[-1];
    if (!car_legal(v_64)) v_64 = carerror(v_64); else
    v_64 = car(v_64);
    {   LispObject fn = basic_elt(env, 2); // monomisdivisibleby
    v_64 = (*qfn2(fn))(fn, v_65, v_64);
    }
    env = stack[-4];
    if (v_64 == nil) goto v_30;
    else goto v_25;
v_30:
    goto v_26;
v_25:
    goto v_21;
v_26:
    v_64 = stack[0];
    if (!car_legal(v_64)) v_64 = cdrerror(v_64); else
    v_64 = cdr(v_64);
    stack[0] = v_64;
    goto v_22;
v_21:
    v_64 = stack[0];
    if (!car_legal(v_64)) v_64 = carerror(v_64); else
    v_64 = car(v_64);
    if (v_64 == nil) goto v_42;
    else goto v_43;
v_42:
    v_64 = lisp_true;
    stack[-3] = v_64;
    goto v_41;
v_43:
    v_64 = stack[0];
    if (!car_legal(v_64)) v_65 = carerror(v_64); else
    v_65 = car(v_64);
    v_64 = stack[-1];
    if (!car_legal(v_64)) v_64 = carerror(v_64); else
    v_64 = car(v_64);
    {   LispObject fn = basic_elt(env, 3); // monomdivide
    v_64 = (*qfn2(fn))(fn, v_65, v_64);
    }
    env = stack[-4];
    stack[0] = stack[-2];
    v_65 = stack[-1];
    {   LispObject fn = basic_elt(env, 4); // polynommultiplybymonom
    v_64 = (*qfn2(fn))(fn, v_65, v_64);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 5); // polynomadd
    v_64 = (*qfn2(fn))(fn, stack[0], v_64);
    }
    env = stack[-4];
    goto v_41;
v_41:
    goto v_12;
v_11:
    v_64 = qvalue(basic_elt(env, 1)); // fluidbibasisreductionsmade
    v_64 = static_cast<LispObject>(static_cast<std::intptr_t>(v_64) + 0x10);
    setvalue(basic_elt(env, 1), v_64); // fluidbibasisreductionsmade
    v_64 = nil;
    return onevalue(v_64);
}



// Code for cl_sacat

static LispObject CC_cl_sacat(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_16, v_17, v_18;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_16 = v_4;
    v_17 = v_3;
    v_18 = v_2;
// end of prologue
    v_16 = v_18;
    if (equal(v_16, v_17)) goto v_8;
    else goto v_9;
v_8:
    v_16 = basic_elt(env, 1); // keep
    goto v_7;
v_9:
    v_16 = nil;
    goto v_7;
    v_16 = nil;
v_7:
    return onevalue(v_16);
}



// Code for aex_simplenumberp

static LispObject CC_aex_simplenumberp(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // aex_fvarl
    v_7 = (*qfn1(fn))(fn, v_7);
    }
    v_7 = (v_7 == nil ? lisp_true : nil);
    return onevalue(v_7);
}



// Code for operator_fn

static LispObject CC_operator_fn(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_32;
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
    v_32 = basic_elt(env, 1); // "<apply>"
    {   LispObject fn = basic_elt(env, 7); // printout
    v_32 = (*qfn1(fn))(fn, v_32);
    }
    env = stack[-1];
    v_32 = lisp_true;
    {   LispObject fn = basic_elt(env, 8); // indent!*
    v_32 = (*qfn1(fn))(fn, v_32);
    }
    env = stack[-1];
    v_32 = basic_elt(env, 2); // "<csymbol>"
    {   LispObject fn = basic_elt(env, 7); // printout
    v_32 = (*qfn1(fn))(fn, v_32);
    }
    env = stack[-1];
    v_32 = lisp_true;
    {   LispObject fn = basic_elt(env, 8); // indent!*
    v_32 = (*qfn1(fn))(fn, v_32);
    }
    env = stack[-1];
    v_32 = basic_elt(env, 3); // "<ci>"
    {   LispObject fn = basic_elt(env, 7); // printout
    v_32 = (*qfn1(fn))(fn, v_32);
    }
    env = stack[-1];
    v_32 = stack[0];
    if (!car_legal(v_32)) v_32 = carerror(v_32); else
    v_32 = car(v_32);
    v_32 = Lprinc(nil, v_32);
    env = stack[-1];
    v_32 = basic_elt(env, 4); // "</ci>"
    v_32 = Lprinc(nil, v_32);
    env = stack[-1];
    v_32 = nil;
    {   LispObject fn = basic_elt(env, 8); // indent!*
    v_32 = (*qfn1(fn))(fn, v_32);
    }
    env = stack[-1];
    v_32 = basic_elt(env, 5); // "</csymbol>"
    {   LispObject fn = basic_elt(env, 7); // printout
    v_32 = (*qfn1(fn))(fn, v_32);
    }
    env = stack[-1];
    v_32 = stack[0];
    if (!car_legal(v_32)) v_32 = cdrerror(v_32); else
    v_32 = cdr(v_32);
    {   LispObject fn = basic_elt(env, 9); // multi_args
    v_32 = (*qfn1(fn))(fn, v_32);
    }
    env = stack[-1];
    v_32 = nil;
    {   LispObject fn = basic_elt(env, 8); // indent!*
    v_32 = (*qfn1(fn))(fn, v_32);
    }
    env = stack[-1];
    v_32 = basic_elt(env, 6); // "</apply>"
    {   LispObject fn = basic_elt(env, 7); // printout
    v_32 = (*qfn1(fn))(fn, v_32);
    }
    v_32 = nil;
    return onevalue(v_32);
}



// Code for qsum!-simpexpt

static LispObject CC_qsumKsimpexpt(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_71;
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
    v_71 = qvalue(basic_elt(env, 1)); // inside!-qsum!-simpexpt!*
    if (v_71 == nil) goto v_7;
    v_71 = stack[-4];
    {
        LispObject fn = basic_elt(env, 7); // qsum!-simpexpt1
        return (*qfn1(fn))(fn, v_71);
    }
v_7:
    v_71 = qvalue(basic_elt(env, 2)); // !*exp
    if (v_71 == nil) goto v_15;
    else goto v_16;
v_15:
    v_71 = lisp_true;
    goto v_14;
v_16:
    v_71 = qvalue(basic_elt(env, 3)); // !*factor
    if (v_71 == nil) goto v_23;
    else goto v_22;
v_23:
    v_71 = qvalue(basic_elt(env, 4)); // !*mcd
    v_71 = (v_71 == nil ? lisp_true : nil);
v_22:
    goto v_14;
    v_71 = nil;
v_14:
    if (v_71 == nil) goto v_12;
// Binding !*precise
// FLUIDBIND: reloadenv=6 litvec-offset=5 saveloc=5
{   bind_fluid_stack bind_fluid_var(-6, 5, -5);
    setvalue(basic_elt(env, 5), nil); // !*precise
// Binding !*factor
// FLUIDBIND: reloadenv=6 litvec-offset=3 saveloc=3
{   bind_fluid_stack bind_fluid_var(-6, 3, -3);
    setvalue(basic_elt(env, 3), nil); // !*factor
// Binding !*exp
// FLUIDBIND: reloadenv=6 litvec-offset=2 saveloc=2
{   bind_fluid_stack bind_fluid_var(-6, 2, -2);
    setvalue(basic_elt(env, 2), nil); // !*exp
// Binding !*mcd
// FLUIDBIND: reloadenv=6 litvec-offset=4 saveloc=1
{   bind_fluid_stack bind_fluid_var(-6, 4, -1);
    setvalue(basic_elt(env, 4), nil); // !*mcd
// Binding !*allfac
// FLUIDBIND: reloadenv=6 litvec-offset=6 saveloc=0
{   bind_fluid_stack bind_fluid_var(-6, 6, 0);
    setvalue(basic_elt(env, 6), nil); // !*allfac
    v_71 = lisp_true;
    setvalue(basic_elt(env, 2), v_71); // !*exp
    v_71 = lisp_true;
    setvalue(basic_elt(env, 4), v_71); // !*mcd
    {   LispObject fn = basic_elt(env, 8); // rmsubs
    v_71 = (*qfn0(fn))(fn);
    }
    env = stack[-6];
    v_71 = stack[-4];
    {   LispObject fn = basic_elt(env, 7); // qsum!-simpexpt1
    v_71 = (*qfn1(fn))(fn, v_71);
    }
    env = stack[-6];
    ;}  // end of a binding scope
    ;}  // end of a binding scope
    ;}  // end of a binding scope
    ;}  // end of a binding scope
    ;}  // end of a binding scope
    stack[0] = v_71;
    {   LispObject fn = basic_elt(env, 8); // rmsubs
    v_71 = (*qfn0(fn))(fn);
    }
    v_71 = stack[0];
    goto v_5;
v_12:
// Binding !*precise
// FLUIDBIND: reloadenv=6 litvec-offset=5 saveloc=1
{   bind_fluid_stack bind_fluid_var(-6, 5, -1);
    setvalue(basic_elt(env, 5), nil); // !*precise
// Binding !*allfac
// FLUIDBIND: reloadenv=6 litvec-offset=6 saveloc=0
{   bind_fluid_stack bind_fluid_var(-6, 6, 0);
    setvalue(basic_elt(env, 6), nil); // !*allfac
    v_71 = stack[-4];
    {   LispObject fn = basic_elt(env, 7); // qsum!-simpexpt1
    v_71 = (*qfn1(fn))(fn, v_71);
    }
    ;}  // end of a binding scope
    ;}  // end of a binding scope
    goto v_5;
    v_71 = nil;
v_5:
    return onevalue(v_71);
}



// Code for calc_atlas

static LispObject CC_calc_atlas(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_18 = v_3;
    v_19 = v_2;
// end of prologue
    v_17 = v_19;
    if (!car_legal(v_17)) stack[-2] = carerror(v_17); else
    stack[-2] = car(v_17);
    v_17 = v_19;
    if (!car_legal(v_17)) v_17 = cdrerror(v_17); else
    v_17 = cdr(v_17);
    if (!car_legal(v_17)) v_17 = cdrerror(v_17); else
    v_17 = cdr(v_17);
    if (!car_legal(v_17)) stack[-1] = carerror(v_17); else
    stack[-1] = car(v_17);
    v_17 = v_19;
    if (!car_legal(v_17)) v_17 = cdrerror(v_17); else
    v_17 = cdr(v_17);
    if (!car_legal(v_17)) stack[0] = carerror(v_17); else
    stack[0] = car(v_17);
    v_17 = v_18;
    v_17 = ncons(v_17);
    env = stack[-3];
    {
        LispObject v_23 = stack[-2];
        LispObject v_24 = stack[-1];
        LispObject v_25 = stack[0];
        LispObject fn = basic_elt(env, 1); // calc_map_2d
        return (*qfn4up(fn))(fn, v_23, v_24, v_25, v_17);
    }
}



// Code for rfirst

static LispObject CC_rfirst(LispObject env,
                         LispObject v_2)
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
    v_50 = stack[0];
    if (!car_legal(v_50)) v_50 = carerror(v_50); else
    v_50 = car(v_50);
    {   LispObject fn = basic_elt(env, 3); // reval
    v_50 = (*qfn1(fn))(fn, v_50);
    }
    env = stack[-1];
    stack[0] = v_50;
    {   LispObject fn = basic_elt(env, 4); // bagp
    v_50 = (*qfn1(fn))(fn, v_50);
    }
    env = stack[-1];
    if (v_50 == nil) goto v_7;
    v_50 = stack[0];
    if (!car_legal(v_50)) v_50 = cdrerror(v_50); else
    v_50 = cdr(v_50);
    if (v_50 == nil) goto v_14;
    else goto v_15;
v_14:
    v_50 = stack[0];
    if (!car_legal(v_50)) v_50 = carerror(v_50); else
    v_50 = car(v_50);
    return ncons(v_50);
v_15:
    v_50 = stack[0];
    if (!car_legal(v_50)) v_52 = carerror(v_50); else
    v_52 = car(v_50);
    v_50 = stack[0];
    if (!car_legal(v_50)) v_50 = cdrerror(v_50); else
    v_50 = cdr(v_50);
    if (!car_legal(v_50)) v_51 = carerror(v_50); else
    v_51 = car(v_50);
    v_50 = nil;
    return list2star(v_52, v_51, v_50);
    v_50 = nil;
    goto v_5;
v_7:
    v_50 = stack[0];
    if (!car_legal(v_50)) v_51 = carerror(v_50); else
    v_51 = car(v_50);
    v_50 = basic_elt(env, 1); // list
    if (v_51 == v_50) goto v_31;
    v_51 = stack[0];
    v_50 = basic_elt(env, 2); // "list or bag"
    {
        LispObject fn = basic_elt(env, 5); // typerr
        return (*qfn2(fn))(fn, v_51, v_50);
    }
v_31:
    v_50 = stack[0];
    if (!car_legal(v_50)) v_50 = cdrerror(v_50); else
    v_50 = cdr(v_50);
    if (v_50 == nil) goto v_38;
    else goto v_39;
v_38:
    v_51 = stack[0];
    v_50 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {
        LispObject fn = basic_elt(env, 6); // parterr
        return (*qfn2(fn))(fn, v_51, v_50);
    }
v_39:
    v_50 = stack[0];
    if (!car_legal(v_50)) v_50 = cdrerror(v_50); else
    v_50 = cdr(v_50);
    if (!car_legal(v_50)) v_50 = carerror(v_50); else
    v_50 = car(v_50);
    goto v_5;
    v_50 = nil;
v_5:
    return onevalue(v_50);
}



// Code for reduce!-ratios

static LispObject CC_reduceKratios(LispObject env,
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
v_1:
    v_41 = stack[-2];
    v_40 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // red!-ratios1
    v_40 = (*qfn2(fn))(fn, v_41, v_40);
    }
    env = stack[-4];
    stack[-3] = v_40;
    if (v_40 == nil) goto v_10;
    else goto v_11;
v_10:
    v_40 = stack[-2];
    goto v_7;
v_11:
    v_40 = stack[-3];
    if (!car_legal(v_40)) v_41 = carerror(v_40); else
    v_41 = car(v_40);
    v_40 = stack[-2];
    {   LispObject fn = basic_elt(env, 2); // mv!-domainlist!-!*
    stack[0] = (*qfn2(fn))(fn, v_41, v_40);
    }
    env = stack[-4];
    v_40 = stack[-3];
    if (!car_legal(v_40)) v_41 = cdrerror(v_40); else
    v_41 = cdr(v_40);
    v_40 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // mv!-domainlist!-!*
    v_40 = (*qfn2(fn))(fn, v_41, v_40);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 3); // mv!-domainlist!-!-
    v_40 = (*qfn2(fn))(fn, stack[0], v_40);
    }
    env = stack[-4];
    stack[-3] = v_40;
    v_40 = stack[-2];
    {   LispObject fn = basic_elt(env, 4); // reddom_zeros
    stack[0] = (*qfn1(fn))(fn, v_40);
    }
    env = stack[-4];
    v_40 = stack[-3];
    {   LispObject fn = basic_elt(env, 4); // reddom_zeros
    v_40 = (*qfn1(fn))(fn, v_40);
    }
    env = stack[-4];
    v_40 = static_cast<LispObject>(geq2(stack[0], v_40));
    v_40 = v_40 ? lisp_true : nil;
    env = stack[-4];
    if (v_40 == nil) goto v_28;
    v_40 = stack[-2];
    goto v_26;
v_28:
    v_41 = stack[-3];
    v_40 = stack[-1];
    stack[-2] = v_41;
    stack[-1] = v_40;
    goto v_1;
    v_40 = nil;
v_26:
v_7:
    return onevalue(v_40);
}



// Code for check_letop

static LispObject CC_check_letop(LispObject env,
                         LispObject v_2)
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
    v_14 = v_13;
    v_13 = basic_elt(env, 1); // letop
    {   LispObject fn = basic_elt(env, 3); // freeof
    v_13 = (*qfn2(fn))(fn, v_14, v_13);
    }
    env = stack[0];
    if (v_13 == nil) goto v_6;
    else goto v_7;
v_6:
    v_13 = basic_elt(env, 2); // "Presence of letop, jetspace too small!"
    {
        LispObject fn = basic_elt(env, 4); // rederr
        return (*qfn1(fn))(fn, v_13);
    }
v_7:
    v_13 = nil;
    return onevalue(v_13);
}



// Code for cl_identifyonoff

static LispObject CC_cl_identifyonoff(LispObject env,
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
    setvalue(basic_elt(env, 1), v_5); // cl_identify!-atl!*
    return onevalue(v_5);
}



// Code for mri_simplat1

static LispObject CC_mri_simplat1(LispObject env,
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    stack[-1] = v_3;
    stack[-2] = v_2;
// end of prologue
    v_59 = qvalue(basic_elt(env, 1)); // !*rlsimplfloor
    if (v_59 == nil) goto v_12;
    v_59 = stack[-2];
    {   LispObject fn = basic_elt(env, 4); // mri_op
    stack[-3] = (*qfn1(fn))(fn, v_59);
    }
    env = stack[-4];
    v_59 = stack[-2];
    {   LispObject fn = basic_elt(env, 5); // mri_arg2l
    v_59 = (*qfn1(fn))(fn, v_59);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 6); // mri_simplfloor
    stack[0] = (*qfn1(fn))(fn, v_59);
    }
    env = stack[-4];
    v_59 = stack[-2];
    {   LispObject fn = basic_elt(env, 7); // mri_type
    v_59 = (*qfn1(fn))(fn, v_59);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 8); // mri_0mk2
    v_59 = (*qfn3(fn))(fn, stack[-3], stack[0], v_59);
    }
    env = stack[-4];
    stack[-2] = v_59;
    goto v_10;
v_12:
v_10:
    v_59 = stack[-2];
    {   LispObject fn = basic_elt(env, 7); // mri_type
    v_59 = (*qfn1(fn))(fn, v_59);
    }
    env = stack[-4];
    if (v_59 == nil) goto v_24;
    else goto v_23;
v_24:
    v_59 = stack[-2];
    {   LispObject fn = basic_elt(env, 9); // mri_dettype
    v_59 = (*qfn1(fn))(fn, v_59);
    }
    env = stack[-4];
v_23:
    stack[0] = v_59;
    v_60 = stack[0];
    v_59 = basic_elt(env, 2); // int
    if (v_60 == v_59) goto v_31;
    else goto v_32;
v_31:
    v_59 = stack[-2];
    {   LispObject fn = basic_elt(env, 10); // mri_2pasfat
    v_60 = (*qfn1(fn))(fn, v_59);
    }
    env = stack[-4];
    v_59 = stack[-1];
    {   LispObject fn = basic_elt(env, 11); // pasf_simplat1
    v_60 = (*qfn2(fn))(fn, v_60, v_59);
    }
    env = stack[-4];
    v_59 = basic_elt(env, 2); // int
    {
        LispObject fn = basic_elt(env, 12); // mri_pasf2mri
        return (*qfn2(fn))(fn, v_60, v_59);
    }
v_32:
    v_59 = stack[-2];
    {   LispObject fn = basic_elt(env, 13); // mri_congp
    v_59 = (*qfn1(fn))(fn, v_59);
    }
    env = stack[-4];
    if (v_59 == nil) goto v_43;
    else goto v_44;
v_43:
    v_59 = stack[-2];
    {   LispObject fn = basic_elt(env, 14); // mri_2ofsfat
    v_60 = (*qfn1(fn))(fn, v_59);
    }
    env = stack[-4];
    v_59 = stack[-1];
    {   LispObject fn = basic_elt(env, 15); // ofsf_simplat1
    v_60 = (*qfn2(fn))(fn, v_60, v_59);
    }
    env = stack[-4];
    v_59 = basic_elt(env, 3); // real
    {
        LispObject fn = basic_elt(env, 16); // mri_ofsf2mri
        return (*qfn2(fn))(fn, v_60, v_59);
    }
v_44:
    v_59 = stack[-2];
    {   LispObject fn = basic_elt(env, 4); // mri_op
    stack[-1] = (*qfn1(fn))(fn, v_59);
    }
    env = stack[-4];
    v_59 = stack[-2];
    {   LispObject fn = basic_elt(env, 5); // mri_arg2l
    v_60 = (*qfn1(fn))(fn, v_59);
    }
    env = stack[-4];
    v_59 = stack[0];
    {
        LispObject v_65 = stack[-1];
        LispObject fn = basic_elt(env, 8); // mri_0mk2
        return (*qfn3(fn))(fn, v_65, v_60, v_59);
    }
    return onevalue(v_59);
}



// Code for limitom

static LispObject CC_limitom(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_80, v_81, v_82;
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
    v_81 = v_2;
// end of prologue
    v_80 = v_81;
    if (!car_legal(v_80)) v_80 = cdrerror(v_80); else
    v_80 = cdr(v_80);
    if (!car_legal(v_80)) v_80 = cdrerror(v_80); else
    v_80 = cdr(v_80);
    if (!car_legal(v_80)) v_80 = carerror(v_80); else
    v_80 = car(v_80);
    stack[-2] = v_80;
    v_80 = v_81;
    if (!car_legal(v_80)) v_80 = cdrerror(v_80); else
    v_80 = cdr(v_80);
    if (!car_legal(v_80)) v_80 = cdrerror(v_80); else
    v_80 = cdr(v_80);
    if (!car_legal(v_80)) v_80 = cdrerror(v_80); else
    v_80 = cdr(v_80);
    if (!car_legal(v_80)) v_80 = carerror(v_80); else
    v_80 = car(v_80);
    stack[0] = v_80;
    v_80 = v_81;
    v_80 = Lreverse(nil, v_80);
    env = stack[-4];
    if (!car_legal(v_80)) v_80 = carerror(v_80); else
    v_80 = car(v_80);
    stack[-3] = v_80;
    v_80 = basic_elt(env, 1); // "<OMA>"
    {   LispObject fn = basic_elt(env, 10); // printout
    v_80 = (*qfn1(fn))(fn, v_80);
    }
    env = stack[-4];
    v_80 = lisp_true;
    {   LispObject fn = basic_elt(env, 11); // indent!*
    v_80 = (*qfn1(fn))(fn, v_80);
    }
    env = stack[-4];
    v_80 = basic_elt(env, 2); // "<OMS cd=""limit1"" name=""limit""/>"
    {   LispObject fn = basic_elt(env, 10); // printout
    v_80 = (*qfn1(fn))(fn, v_80);
    }
    env = stack[-4];
    v_80 = stack[0];
    if (!car_legal(v_80)) v_81 = carerror(v_80); else
    v_81 = car(v_80);
    v_80 = basic_elt(env, 3); // lowlimit
    if (v_81 == v_80) goto v_30;
    else goto v_31;
v_30:
    v_80 = stack[0];
    if (!car_legal(v_80)) v_80 = cdrerror(v_80); else
    v_80 = cdr(v_80);
    if (!car_legal(v_80)) v_80 = carerror(v_80); else
    v_80 = car(v_80);
    {   LispObject fn = basic_elt(env, 12); // objectom
    v_80 = (*qfn1(fn))(fn, v_80);
    }
    env = stack[-4];
    v_80 = basic_elt(env, 4); // "<OMS cd=""limit1"" name=""null""/>"
    {   LispObject fn = basic_elt(env, 10); // printout
    v_80 = (*qfn1(fn))(fn, v_80);
    }
    env = stack[-4];
    goto v_29;
v_31:
v_29:
    v_80 = stack[0];
    if (!car_legal(v_80)) v_81 = carerror(v_80); else
    v_81 = car(v_80);
    v_80 = basic_elt(env, 5); // condition
    if (v_81 == v_80) goto v_43;
    else goto v_44;
v_43:
    v_80 = stack[0];
    if (!car_legal(v_80)) v_80 = cdrerror(v_80); else
    v_80 = cdr(v_80);
    if (!car_legal(v_80)) v_80 = carerror(v_80); else
    v_80 = car(v_80);
    v_80 = Lreverse(nil, v_80);
    env = stack[-4];
    if (!car_legal(v_80)) v_80 = carerror(v_80); else
    v_80 = car(v_80);
    {   LispObject fn = basic_elt(env, 12); // objectom
    v_80 = (*qfn1(fn))(fn, v_80);
    }
    env = stack[-4];
    v_80 = stack[0];
    if (!car_legal(v_80)) v_80 = cdrerror(v_80); else
    v_80 = cdr(v_80);
    if (!car_legal(v_80)) v_80 = carerror(v_80); else
    v_80 = car(v_80);
    if (!car_legal(v_80)) v_80 = cdrerror(v_80); else
    v_80 = cdr(v_80);
    if (!car_legal(v_80)) v_80 = carerror(v_80); else
    v_80 = car(v_80);
    if (!car_legal(v_80)) v_80 = carerror(v_80); else
    v_80 = car(v_80);
    if (!car_legal(v_80)) v_80 = cdrerror(v_80); else
    v_80 = cdr(v_80);
    if (!car_legal(v_80)) v_80 = carerror(v_80); else
    v_80 = car(v_80);
    stack[0] = v_80;
    v_80 = basic_elt(env, 6); // "<OMS cd=""limit1"" name="""
    {   LispObject fn = basic_elt(env, 10); // printout
    v_80 = (*qfn1(fn))(fn, v_80);
    }
    env = stack[-4];
    v_80 = stack[0];
    v_80 = Lprinc(nil, v_80);
    env = stack[-4];
    v_80 = basic_elt(env, 7); // """/>"
    v_80 = Lprinc(nil, v_80);
    env = stack[-4];
    goto v_42;
v_44:
v_42:
    stack[-1] = basic_elt(env, 8); // limit
    stack[0] = nil;
    v_82 = stack[-2];
    v_81 = stack[-3];
    v_80 = nil;
    v_80 = list2star(v_82, v_81, v_80);
    env = stack[-4];
    v_80 = list2star(stack[-1], stack[0], v_80);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 13); // lambdaom
    v_80 = (*qfn1(fn))(fn, v_80);
    }
    env = stack[-4];
    v_80 = nil;
    {   LispObject fn = basic_elt(env, 11); // indent!*
    v_80 = (*qfn1(fn))(fn, v_80);
    }
    env = stack[-4];
    v_80 = basic_elt(env, 9); // "</OMA>"
    {   LispObject fn = basic_elt(env, 10); // printout
    v_80 = (*qfn1(fn))(fn, v_80);
    }
    v_80 = nil;
    return onevalue(v_80);
}



// Code for solvealgtrig01

static LispObject CC_solvealgtrig01(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_47, v_48;
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
    v_47 = stack[-1];
    if (!consp(v_47)) goto v_11;
    else goto v_12;
v_11:
    v_47 = stack[0];
    goto v_7;
v_12:
    v_47 = stack[-1];
    if (!car_legal(v_47)) v_48 = carerror(v_47); else
    v_48 = car(v_47);
    v_47 = basic_elt(env, 1); // (sin cos tan cot sinh cosh tanh coth)
    v_47 = Lmemq(nil, v_48, v_47);
    if (v_47 == nil) goto v_16;
    v_47 = stack[-1];
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    if (!car_legal(v_47)) v_47 = carerror(v_47); else
    v_47 = car(v_47);
    {   LispObject fn = basic_elt(env, 2); // constant_exprp
    v_47 = (*qfn1(fn))(fn, v_47);
    }
    env = stack[-3];
    if (v_47 == nil) goto v_24;
    v_47 = stack[0];
    goto v_7;
v_24:
    v_47 = stack[-1];
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    if (!car_legal(v_47)) v_47 = carerror(v_47); else
    v_47 = car(v_47);
    v_48 = ncons(v_47);
    env = stack[-3];
    v_47 = stack[0];
    {
        LispObject fn = basic_elt(env, 3); // union
        return (*qfn2(fn))(fn, v_48, v_47);
    }
    goto v_10;
v_16:
    v_47 = stack[-1];
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    stack[-2] = v_47;
    v_47 = stack[-1];
    if (!car_legal(v_47)) v_48 = carerror(v_47); else
    v_48 = car(v_47);
    v_47 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // solvealgtrig01
    v_47 = (*qfn2(fn))(fn, v_48, v_47);
    }
    env = stack[-3];
    stack[0] = v_47;
    v_47 = stack[-2];
    stack[-1] = v_47;
    goto v_8;
v_10:
    v_47 = nil;
v_7:
    return onevalue(v_47);
}



// Code for gfftimes

static LispObject CC_gfftimes(LispObject env,
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
    stack[0] = times2(v_35, v_34);
    env = stack[-5];
    v_35 = stack[-3];
    v_34 = stack[-1];
    v_34 = times2(v_35, v_34);
    env = stack[-5];
    stack[0] = difference2(stack[0], v_34);
    env = stack[-5];
    v_35 = stack[-4];
    v_34 = stack[-1];
    stack[-1] = times2(v_35, v_34);
    env = stack[-5];
    v_35 = stack[-3];
    v_34 = stack[-2];
    v_34 = times2(v_35, v_34);
    env = stack[-5];
    v_34 = plus2(stack[-1], v_34);
    {
        LispObject v_42 = stack[0];
        return cons(v_42, v_34);
    }
    return onevalue(v_34);
}



// Code for asymmetrize!-inds

static LispObject CC_asymmetrizeKinds(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_264, v_265;
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
    real_push(nil);
    stack_popper stack_popper_var(12);
// copy arguments values to proper place
    stack[-8] = v_3;
    stack[-9] = v_2;
// end of prologue
    v_264 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-10] = v_264;
    v_264 = stack[-9];
    stack[-7] = v_264;
    v_264 = stack[-7];
    if (v_264 == nil) goto v_23;
    else goto v_24;
v_23:
    v_264 = nil;
    goto v_18;
v_24:
    v_264 = stack[-7];
    if (!car_legal(v_264)) v_264 = carerror(v_264); else
    v_264 = car(v_264);
    v_265 = v_264;
    if (!consp(v_265)) goto v_33;
    else goto v_34;
v_33:
    v_265 = stack[-8];
    {   LispObject fn = basic_elt(env, 1); // nth
    v_264 = (*qfn2(fn))(fn, v_265, v_264);
    }
    env = stack[-11];
    goto v_32;
v_34:
    stack[-3] = v_264;
    v_264 = stack[-3];
    if (v_264 == nil) goto v_50;
    else goto v_51;
v_50:
    v_264 = nil;
    goto v_45;
v_51:
    v_264 = stack[-3];
    if (!car_legal(v_264)) v_264 = carerror(v_264); else
    v_264 = car(v_264);
    v_265 = stack[-8];
    {   LispObject fn = basic_elt(env, 1); // nth
    v_264 = (*qfn2(fn))(fn, v_265, v_264);
    }
    env = stack[-11];
    v_264 = ncons(v_264);
    env = stack[-11];
    stack[-1] = v_264;
    stack[-2] = v_264;
v_46:
    v_264 = stack[-3];
    if (!car_legal(v_264)) v_264 = cdrerror(v_264); else
    v_264 = cdr(v_264);
    stack[-3] = v_264;
    v_264 = stack[-3];
    if (v_264 == nil) goto v_65;
    else goto v_66;
v_65:
    v_264 = stack[-2];
    goto v_45;
v_66:
    stack[0] = stack[-1];
    v_264 = stack[-3];
    if (!car_legal(v_264)) v_264 = carerror(v_264); else
    v_264 = car(v_264);
    v_265 = stack[-8];
    {   LispObject fn = basic_elt(env, 1); // nth
    v_264 = (*qfn2(fn))(fn, v_265, v_264);
    }
    env = stack[-11];
    v_264 = ncons(v_264);
    env = stack[-11];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_264);
    v_264 = stack[-1];
    if (!car_legal(v_264)) v_264 = cdrerror(v_264); else
    v_264 = cdr(v_264);
    stack[-1] = v_264;
    goto v_46;
v_45:
    goto v_32;
    v_264 = nil;
v_32:
    v_264 = ncons(v_264);
    env = stack[-11];
    stack[-5] = v_264;
    stack[-6] = v_264;
v_19:
    v_264 = stack[-7];
    if (!car_legal(v_264)) v_264 = cdrerror(v_264); else
    v_264 = cdr(v_264);
    stack[-7] = v_264;
    v_264 = stack[-7];
    if (v_264 == nil) goto v_84;
    else goto v_85;
v_84:
    v_264 = stack[-6];
    goto v_18;
v_85:
    stack[-4] = stack[-5];
    v_264 = stack[-7];
    if (!car_legal(v_264)) v_264 = carerror(v_264); else
    v_264 = car(v_264);
    v_265 = v_264;
    if (!consp(v_265)) goto v_95;
    else goto v_96;
v_95:
    v_265 = stack[-8];
    {   LispObject fn = basic_elt(env, 1); // nth
    v_264 = (*qfn2(fn))(fn, v_265, v_264);
    }
    env = stack[-11];
    goto v_94;
v_96:
    stack[-3] = v_264;
    v_264 = stack[-3];
    if (v_264 == nil) goto v_112;
    else goto v_113;
v_112:
    v_264 = nil;
    goto v_107;
v_113:
    v_264 = stack[-3];
    if (!car_legal(v_264)) v_264 = carerror(v_264); else
    v_264 = car(v_264);
    v_265 = stack[-8];
    {   LispObject fn = basic_elt(env, 1); // nth
    v_264 = (*qfn2(fn))(fn, v_265, v_264);
    }
    env = stack[-11];
    v_264 = ncons(v_264);
    env = stack[-11];
    stack[-1] = v_264;
    stack[-2] = v_264;
v_108:
    v_264 = stack[-3];
    if (!car_legal(v_264)) v_264 = cdrerror(v_264); else
    v_264 = cdr(v_264);
    stack[-3] = v_264;
    v_264 = stack[-3];
    if (v_264 == nil) goto v_127;
    else goto v_128;
v_127:
    v_264 = stack[-2];
    goto v_107;
v_128:
    stack[0] = stack[-1];
    v_264 = stack[-3];
    if (!car_legal(v_264)) v_264 = carerror(v_264); else
    v_264 = car(v_264);
    v_265 = stack[-8];
    {   LispObject fn = basic_elt(env, 1); // nth
    v_264 = (*qfn2(fn))(fn, v_265, v_264);
    }
    env = stack[-11];
    v_264 = ncons(v_264);
    env = stack[-11];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_264);
    v_264 = stack[-1];
    if (!car_legal(v_264)) v_264 = cdrerror(v_264); else
    v_264 = cdr(v_264);
    stack[-1] = v_264;
    goto v_108;
v_107:
    goto v_94;
    v_264 = nil;
v_94:
    v_264 = ncons(v_264);
    env = stack[-11];
    if (!car_legal(stack[-4])) rplacd_fails(stack[-4]);
    setcdr(stack[-4], v_264);
    v_264 = stack[-5];
    if (!car_legal(v_264)) v_264 = cdrerror(v_264); else
    v_264 = cdr(v_264);
    stack[-5] = v_264;
    goto v_19;
v_18:
    stack[0] = v_264;
    v_264 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // repeats
    v_264 = (*qfn1(fn))(fn, v_264);
    }
    env = stack[-11];
    if (v_264 == nil) goto v_148;
    v_264 = nil;
    goto v_11;
v_148:
    v_264 = stack[0];
    if (!car_legal(v_264)) v_264 = carerror(v_264); else
    v_264 = car(v_264);
    if (!consp(v_264)) goto v_159;
    else goto v_160;
v_159:
    v_264 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // indordn
    v_264 = (*qfn1(fn))(fn, v_264);
    }
    env = stack[-11];
    v_265 = v_264;
    goto v_158;
v_160:
    v_264 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // indordln
    v_264 = (*qfn1(fn))(fn, v_264);
    }
    env = stack[-11];
    v_265 = v_264;
    goto v_158;
    v_265 = nil;
v_158:
    stack[-5] = v_265;
    v_264 = stack[0];
    {   LispObject fn = basic_elt(env, 5); // permp
    v_264 = (*qfn2(fn))(fn, v_265, v_264);
    }
    env = stack[-11];
    if (v_264 == nil) goto v_155;
    v_264 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_153;
v_155:
    v_264 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    goto v_153;
    v_264 = nil;
v_153:
    stack[0] = v_264;
    v_264 = stack[-9];
    if (!car_legal(v_264)) v_264 = carerror(v_264); else
    v_264 = car(v_264);
    if (!consp(v_264)) goto v_177;
    v_264 = stack[-9];
    {   LispObject fn = basic_elt(env, 6); // flatindl
    v_264 = (*qfn1(fn))(fn, v_264);
    }
    env = stack[-11];
    stack[-9] = v_264;
    v_264 = stack[-5];
    {   LispObject fn = basic_elt(env, 6); // flatindl
    v_264 = (*qfn1(fn))(fn, v_264);
    }
    env = stack[-11];
    stack[-5] = v_264;
    goto v_175;
v_177:
v_175:
    v_265 = stack[-9];
    v_264 = stack[-5];
    {   LispObject fn = basic_elt(env, 7); // pair
    v_264 = (*qfn2(fn))(fn, v_265, v_264);
    }
    env = stack[-11];
    stack[-5] = v_264;
    stack[-6] = stack[0];
    v_264 = stack[-8];
    stack[-7] = v_264;
    v_264 = stack[-7];
    if (v_264 == nil) goto v_198;
    else goto v_199;
v_198:
    v_264 = nil;
    goto v_193;
v_199:
    v_264 = stack[-7];
    if (!car_legal(v_264)) v_264 = carerror(v_264); else
    v_264 = car(v_264);
    stack[-1] = v_264;
    v_264 = stack[-5];
    if (v_264 == nil) goto v_209;
    v_264 = stack[-5];
    if (!car_legal(v_264)) v_264 = carerror(v_264); else
    v_264 = car(v_264);
    if (!car_legal(v_264)) stack[0] = carerror(v_264); else
    stack[0] = car(v_264);
    v_264 = stack[-10];
    v_264 = add1(v_264);
    env = stack[-11];
    stack[-10] = v_264;
    if (equal(stack[0], v_264)) goto v_212;
    else goto v_209;
v_212:
    v_264 = stack[-5];
    if (!car_legal(v_264)) v_264 = carerror(v_264); else
    v_264 = car(v_264);
    if (!car_legal(v_264)) v_264 = cdrerror(v_264); else
    v_264 = cdr(v_264);
    v_265 = v_264;
    v_264 = stack[-5];
    if (!car_legal(v_264)) v_264 = cdrerror(v_264); else
    v_264 = cdr(v_264);
    stack[-5] = v_264;
    v_264 = v_265;
    goto v_207;
v_209:
    v_264 = stack[-1];
    goto v_207;
    v_264 = nil;
v_207:
    v_264 = ncons(v_264);
    env = stack[-11];
    stack[-3] = v_264;
    stack[-4] = v_264;
v_194:
    v_264 = stack[-7];
    if (!car_legal(v_264)) v_264 = cdrerror(v_264); else
    v_264 = cdr(v_264);
    stack[-7] = v_264;
    v_264 = stack[-7];
    if (v_264 == nil) goto v_231;
    else goto v_232;
v_231:
    v_264 = stack[-4];
    goto v_193;
v_232:
    stack[-2] = stack[-3];
    v_264 = stack[-7];
    if (!car_legal(v_264)) v_264 = carerror(v_264); else
    v_264 = car(v_264);
    stack[-1] = v_264;
    v_264 = stack[-5];
    if (v_264 == nil) goto v_243;
    v_264 = stack[-5];
    if (!car_legal(v_264)) v_264 = carerror(v_264); else
    v_264 = car(v_264);
    if (!car_legal(v_264)) stack[0] = carerror(v_264); else
    stack[0] = car(v_264);
    v_264 = stack[-10];
    v_264 = add1(v_264);
    env = stack[-11];
    stack[-10] = v_264;
    if (equal(stack[0], v_264)) goto v_246;
    else goto v_243;
v_246:
    v_264 = stack[-5];
    if (!car_legal(v_264)) v_264 = carerror(v_264); else
    v_264 = car(v_264);
    if (!car_legal(v_264)) v_264 = cdrerror(v_264); else
    v_264 = cdr(v_264);
    v_265 = v_264;
    v_264 = stack[-5];
    if (!car_legal(v_264)) v_264 = cdrerror(v_264); else
    v_264 = cdr(v_264);
    stack[-5] = v_264;
    v_264 = v_265;
    goto v_241;
v_243:
    v_264 = stack[-1];
    goto v_241;
    v_264 = nil;
v_241:
    v_264 = ncons(v_264);
    env = stack[-11];
    if (!car_legal(stack[-2])) rplacd_fails(stack[-2]);
    setcdr(stack[-2], v_264);
    v_264 = stack[-3];
    if (!car_legal(v_264)) v_264 = cdrerror(v_264); else
    v_264 = cdr(v_264);
    stack[-3] = v_264;
    goto v_194;
v_193:
    {
        LispObject v_277 = stack[-6];
        return cons(v_277, v_264);
    }
v_11:
    return onevalue(v_264);
}



// Code for ctx_union

static LispObject CC_ctx_union(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_108, v_109;
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
    v_108 = v_2;
// end of prologue
    {   LispObject fn = basic_elt(env, 4); // ctx_ial
    v_108 = (*qfn1(fn))(fn, v_108);
    }
    env = stack[-5];
    stack[-4] = v_108;
    v_108 = stack[-4];
    if (v_108 == nil) goto v_20;
    else goto v_21;
v_20:
    v_108 = nil;
    goto v_14;
v_21:
    v_108 = stack[-4];
    if (!car_legal(v_108)) v_108 = carerror(v_108); else
    v_108 = car(v_108);
    v_109 = v_108;
    if (!car_legal(v_109)) v_109 = carerror(v_109); else
    v_109 = car(v_109);
    if (!car_legal(v_108)) v_108 = cdrerror(v_108); else
    v_108 = cdr(v_108);
    v_108 = cons(v_109, v_108);
    env = stack[-5];
    v_108 = ncons(v_108);
    env = stack[-5];
    stack[-1] = v_108;
    stack[-3] = v_108;
v_15:
    v_108 = stack[-4];
    if (!car_legal(v_108)) v_108 = cdrerror(v_108); else
    v_108 = cdr(v_108);
    stack[-4] = v_108;
    v_108 = stack[-4];
    if (v_108 == nil) goto v_37;
    else goto v_38;
v_37:
    v_108 = stack[-3];
    goto v_14;
v_38:
    stack[0] = stack[-1];
    v_108 = stack[-4];
    if (!car_legal(v_108)) v_108 = carerror(v_108); else
    v_108 = car(v_108);
    v_109 = v_108;
    if (!car_legal(v_109)) v_109 = carerror(v_109); else
    v_109 = car(v_109);
    if (!car_legal(v_108)) v_108 = cdrerror(v_108); else
    v_108 = cdr(v_108);
    v_108 = cons(v_109, v_108);
    env = stack[-5];
    v_108 = ncons(v_108);
    env = stack[-5];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_108);
    v_108 = stack[-1];
    if (!car_legal(v_108)) v_108 = cdrerror(v_108); else
    v_108 = cdr(v_108);
    stack[-1] = v_108;
    goto v_15;
v_14:
    stack[-4] = v_108;
    v_108 = stack[-2];
    {   LispObject fn = basic_elt(env, 4); // ctx_ial
    v_108 = (*qfn1(fn))(fn, v_108);
    }
    env = stack[-5];
    stack[-3] = v_108;
    v_108 = stack[-3];
    if (v_108 == nil) goto v_64;
    else goto v_65;
v_64:
    v_108 = nil;
    goto v_58;
v_65:
    v_108 = stack[-3];
    if (!car_legal(v_108)) v_108 = carerror(v_108); else
    v_108 = car(v_108);
    v_109 = v_108;
    if (!car_legal(v_109)) v_109 = carerror(v_109); else
    v_109 = car(v_109);
    if (!car_legal(v_108)) v_108 = cdrerror(v_108); else
    v_108 = cdr(v_108);
    v_108 = cons(v_109, v_108);
    env = stack[-5];
    v_108 = ncons(v_108);
    env = stack[-5];
    stack[-1] = v_108;
    stack[-2] = v_108;
v_59:
    v_108 = stack[-3];
    if (!car_legal(v_108)) v_108 = cdrerror(v_108); else
    v_108 = cdr(v_108);
    stack[-3] = v_108;
    v_108 = stack[-3];
    if (v_108 == nil) goto v_81;
    else goto v_82;
v_81:
    v_108 = stack[-2];
    goto v_58;
v_82:
    stack[0] = stack[-1];
    v_108 = stack[-3];
    if (!car_legal(v_108)) v_108 = carerror(v_108); else
    v_108 = car(v_108);
    v_109 = v_108;
    if (!car_legal(v_109)) v_109 = carerror(v_109); else
    v_109 = car(v_109);
    if (!car_legal(v_108)) v_108 = cdrerror(v_108); else
    v_108 = cdr(v_108);
    v_108 = cons(v_109, v_108);
    env = stack[-5];
    v_108 = ncons(v_108);
    env = stack[-5];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_108);
    v_108 = stack[-1];
    if (!car_legal(v_108)) v_108 = cdrerror(v_108); else
    v_108 = cdr(v_108);
    stack[-1] = v_108;
    goto v_59;
v_58:
    v_109 = stack[-4];
    v_109 = list2(v_109, v_108);
    env = stack[-5];
    v_108 = basic_elt(env, 1); // arg1of2
    {   LispObject fn = basic_elt(env, 5); // lto_almerge
    v_108 = (*qfn2(fn))(fn, v_109, v_108);
    }
    env = stack[-5];
    stack[0] = basic_elt(env, 2); // ctx
    v_109 = v_108;
    v_108 = basic_elt(env, 3); // ordopcar
    {   LispObject fn = basic_elt(env, 6); // sort
    v_108 = (*qfn2(fn))(fn, v_109, v_108);
    }
    {
        LispObject v_115 = stack[0];
        return list2(v_115, v_108);
    }
    return onevalue(v_108);
}



// Code for monomcomparelex

static LispObject CC_monomcomparelex(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[-1] = v_3;
    v_104 = v_2;
// end of prologue
    stack[0] = nil;
    v_105 = v_104;
    v_104 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_104 = Lgetv(nil, v_105, v_104);
    env = stack[-3];
    v_104 = cons(stack[0], v_104);
    env = stack[-3];
    v_104 = Lreverse(nil, v_104);
    env = stack[-3];
    if (!car_legal(v_104)) v_104 = cdrerror(v_104); else
    v_104 = cdr(v_104);
    stack[-2] = v_104;
    stack[0] = nil;
    v_105 = stack[-1];
    v_104 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_104 = Lgetv(nil, v_105, v_104);
    env = stack[-3];
    v_104 = cons(stack[0], v_104);
    env = stack[-3];
    v_104 = Lreverse(nil, v_104);
    env = stack[-3];
    if (!car_legal(v_104)) v_104 = cdrerror(v_104); else
    v_104 = cdr(v_104);
    stack[-1] = v_104;
    v_104 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[0] = v_104;
v_28:
    v_104 = stack[-2];
    if (!car_legal(v_104)) v_104 = carerror(v_104); else
    v_104 = car(v_104);
    if (v_104 == nil) goto v_31;
    v_104 = stack[-1];
    if (!car_legal(v_104)) v_104 = carerror(v_104); else
    v_104 = car(v_104);
    if (v_104 == nil) goto v_31;
    goto v_32;
v_31:
    goto v_27;
v_32:
    v_104 = stack[-2];
    if (!car_legal(v_104)) v_105 = carerror(v_104); else
    v_105 = car(v_104);
    v_104 = stack[-1];
    if (!car_legal(v_104)) v_104 = carerror(v_104); else
    v_104 = car(v_104);
    v_104 = static_cast<LispObject>(lessp2(v_105, v_104));
    v_104 = v_104 ? lisp_true : nil;
    env = stack[-3];
    if (v_104 == nil) goto v_43;
    v_104 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[0] = v_104;
    v_104 = nil;
    v_104 = ncons(v_104);
    env = stack[-3];
    stack[-2] = v_104;
    goto v_41;
v_43:
    v_104 = stack[-2];
    if (!car_legal(v_104)) v_105 = carerror(v_104); else
    v_105 = car(v_104);
    v_104 = stack[-1];
    if (!car_legal(v_104)) v_104 = carerror(v_104); else
    v_104 = car(v_104);
    v_104 = static_cast<LispObject>(greaterp2(v_105, v_104));
    v_104 = v_104 ? lisp_true : nil;
    env = stack[-3];
    if (v_104 == nil) goto v_54;
    v_104 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    stack[0] = v_104;
    v_104 = nil;
    v_104 = ncons(v_104);
    env = stack[-3];
    stack[-2] = v_104;
    goto v_41;
v_54:
    v_104 = stack[-2];
    if (!car_legal(v_104)) v_104 = cdrerror(v_104); else
    v_104 = cdr(v_104);
    stack[-2] = v_104;
    v_104 = stack[-1];
    if (!car_legal(v_104)) v_104 = cdrerror(v_104); else
    v_104 = cdr(v_104);
    stack[-1] = v_104;
    goto v_41;
v_41:
    goto v_28;
v_27:
    v_105 = stack[0];
    v_104 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_105 == v_104) goto v_77;
    else goto v_78;
v_77:
    v_104 = stack[-2];
    if (!car_legal(v_104)) v_104 = carerror(v_104); else
    v_104 = car(v_104);
    goto v_76;
v_78:
    v_104 = nil;
    goto v_76;
    v_104 = nil;
v_76:
    if (v_104 == nil) goto v_74;
    v_104 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[0] = v_104;
    goto v_72;
v_74:
    v_105 = stack[0];
    v_104 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_105 == v_104) goto v_92;
    else goto v_93;
v_92:
    v_104 = stack[-1];
    if (!car_legal(v_104)) v_104 = carerror(v_104); else
    v_104 = car(v_104);
    goto v_91;
v_93:
    v_104 = nil;
    goto v_91;
    v_104 = nil;
v_91:
    if (v_104 == nil) goto v_89;
    v_104 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    stack[0] = v_104;
    goto v_72;
v_89:
v_72:
    v_104 = stack[0];
    return onevalue(v_104);
}



setup_type const u46_setup[] =
{
    {"pasf_smwmkatl",           G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_pasf_smwmkatl},
    {"gb_searchinlist",         G0W2,     G1W2,     CC_gb_searchinlist,G3W2,G4W2},
    {"d2int",                   G0W1,     CC_d2int, G2W1,     G3W1,     G4W1},
    {"tchscheme2",              CC_tchscheme2,G1W0, G2W0,     G3W0,     G4W0},
    {"sroot1",                  G0W2,     G1W2,     CC_sroot1,G3W2,     G4W2},
    {"xregister_spoly_pair",    CC_xregister_spoly_pair,G1W0,G2W0,G3W0, G4W0},
    {"evaluate2",               G0W3,     G1W3,     G2W3,     CC_evaluate2,G4W3},
    {"mv-compact",              G0W3,     G1W3,     G2W3,     CC_mvKcompact,G4W3},
    {"simp-prop",               G0W1,     CC_simpKprop,G2W1,  G3W1,     G4W1},
    {"try-all-constants",       G0W3,     G1W3,     G2W3,     CC_tryKallKconstants,G4W3},
    {"polynomlistautoreduce",   G0W2,     G1W2,     CC_polynomlistautoreduce,G3W2,G4W2},
    {"ofsf_qesubqat",           G0W3,     G1W3,     G2W3,     CC_ofsf_qesubqat,G4W3},
    {"tayexp-max2",             G0W2,     G1W2,     CC_tayexpKmax2,G3W2,G4W2},
    {"cl_replace-varl",         G0W1,     CC_cl_replaceKvarl,G2W1,G3W1, G4W1},
    {"qqe_simplqneq",           G0W2,     G1W2,     CC_qqe_simplqneq,G3W2,G4W2},
    {"pdiffvars",               G0W2,     G1W2,     CC_pdiffvars,G3W2,  G4W2},
    {"rnfix*",                  G0W1,     CC_rnfixH,G2W1,     G3W1,     G4W1},
    {"newsym1",                 CC_newsym1,G1W0,    G2W0,     G3W0,     G4W0},
    {"nestzerop:",              G0W1,     CC_nestzeropT,G2W1, G3W1,     G4W1},
    {"dipdivmon",               G0W3,     G1W3,     G2W3,     CC_dipdivmon,G4W3},
    {"sc_scalarproduct",        G0W2,     G1W2,     CC_sc_scalarproduct,G3W2,G4W2},
    {"delete_edge",             G0W2,     G1W2,     CC_delete_edge,G3W2,G4W2},
    {"mkimpart",                G0W1,     CC_mkimpart,G2W1,   G3W1,     G4W1},
    {"mv2sf",                   G0W2,     G1W2,     CC_mv2sf, G3W2,     G4W2},
    {"nodum_varp",              G0W1,     CC_nodum_varp,G2W1, G3W1,     G4W1},
    {"mkrootsq",                G0W2,     G1W2,     CC_mkrootsq,G3W2,   G4W2},
    {"ofsf_facequal",           G0W1,     CC_ofsf_facequal,G2W1,G3W1,   G4W1},
    {"polynomreduceby",         G0W2,     G1W2,     CC_polynomreduceby,G3W2,G4W2},
    {"cl_sacat",                G0W3,     G1W3,     G2W3,     CC_cl_sacat,G4W3},
    {"aex_simplenumberp",       G0W1,     CC_aex_simplenumberp,G2W1,G3W1,G4W1},
    {"operator_fn",             G0W1,     CC_operator_fn,G2W1,G3W1,     G4W1},
    {"qsum-simpexpt",           G0W1,     CC_qsumKsimpexpt,G2W1,G3W1,   G4W1},
    {"calc_atlas",              G0W2,     G1W2,     CC_calc_atlas,G3W2, G4W2},
    {"rfirst",                  G0W1,     CC_rfirst,G2W1,     G3W1,     G4W1},
    {"reduce-ratios",           G0W2,     G1W2,     CC_reduceKratios,G3W2,G4W2},
    {"check_letop",             G0W1,     CC_check_letop,G2W1,G3W1,     G4W1},
    {"cl_identifyonoff",        G0W1,     CC_cl_identifyonoff,G2W1,G3W1,G4W1},
    {"mri_simplat1",            G0W2,     G1W2,     CC_mri_simplat1,G3W2,G4W2},
    {"limitom",                 G0W1,     CC_limitom,G2W1,    G3W1,     G4W1},
    {"solvealgtrig01",          G0W2,     G1W2,     CC_solvealgtrig01,G3W2,G4W2},
    {"gfftimes",                G0W2,     G1W2,     CC_gfftimes,G3W2,   G4W2},
    {"asymmetrize-inds",        G0W2,     G1W2,     CC_asymmetrizeKinds,G3W2,G4W2},
    {"ctx_union",               G0W2,     G1W2,     CC_ctx_union,G3W2,  G4W2},
    {"monomcomparelex",         G0W2,     G1W2,     CC_monomcomparelex,G3W2,G4W2},
    {nullptr, 
        reinterpret_cast<no_args *>(
            reinterpret_cast<uintptr_t>("u46")),
        reinterpret_cast<one_arg *>(
            reinterpret_cast<uintptr_t>("154649 3418922 6913421")),
        nullptr, nullptr, nullptr}
};

// end of generated code
