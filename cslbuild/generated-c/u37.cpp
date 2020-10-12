
// $destdir/u37.c        Machine generated C code

// $Id$

#include "config.h"
#include "headers.h"



// Code for lessppair

static LispObject CC_lessppair(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_25, v_26, v_27, v_28;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_26 = v_3;
    v_27 = v_2;
// end of prologue
    v_25 = v_27;
    if (!car_legal(v_25)) v_28 = carerror(v_25); else
    v_28 = car(v_25);
    v_25 = v_26;
    if (!car_legal(v_25)) v_25 = carerror(v_25); else
    v_25 = car(v_25);
    if (equal(v_28, v_25)) goto v_7;
    else goto v_8;
v_7:
    v_25 = v_27;
    if (!car_legal(v_25)) v_25 = cdrerror(v_25); else
    v_25 = cdr(v_25);
    if (!car_legal(v_26)) v_26 = cdrerror(v_26); else
    v_26 = cdr(v_26);
        return Llessp_2(nil, v_25, v_26);
v_8:
    v_25 = v_27;
    if (!car_legal(v_25)) v_25 = carerror(v_25); else
    v_25 = car(v_25);
    if (!car_legal(v_26)) v_26 = carerror(v_26); else
    v_26 = car(v_26);
        return Llessp_2(nil, v_25, v_26);
    v_25 = nil;
    return onevalue(v_25);
}



// Code for lalr_print_first_information

static LispObject CC_lalr_print_first_information(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    push(nil, nil);
    stack_popper stack_popper_var(3);
// end of prologue
    v_52 = basic_elt(env, 1); // "=== FIRST sets for each nonterminal ==="
    v_52 = Lprinc(nil, v_52);
    env = stack[-2];
    v_52 = Lterpri(nil);
    env = stack[-2];
    v_52 = qvalue(basic_elt(env, 2)); // nonterminals
    stack[-1] = v_52;
v_9:
    v_52 = stack[-1];
    if (v_52 == nil) goto v_13;
    else goto v_14;
v_13:
    goto v_8;
v_14:
    v_52 = stack[-1];
    if (!car_legal(v_52)) v_52 = carerror(v_52); else
    v_52 = car(v_52);
    stack[0] = v_52;
    v_52 = stack[0];
    {   LispObject fn = basic_elt(env, 6); // lalr_prin_symbol
    v_52 = (*qfn1(fn))(fn, v_52);
    }
    env = stack[-2];
    v_52 = basic_elt(env, 3); // ":"
    v_52 = Lprinc(nil, v_52);
    env = stack[-2];
    v_52 = static_cast<LispObject>(320)+TAG_FIXNUM; // 20
    v_52 = Lttab(nil, v_52);
    env = stack[-2];
    v_53 = stack[0];
    v_52 = basic_elt(env, 4); // lalr_first
    v_52 = get(v_53, v_52);
    env = stack[-2];
    stack[0] = v_52;
v_29:
    v_52 = stack[0];
    if (v_52 == nil) goto v_35;
    else goto v_36;
v_35:
    goto v_28;
v_36:
    v_52 = stack[0];
    if (!car_legal(v_52)) v_52 = carerror(v_52); else
    v_52 = car(v_52);
    {   LispObject fn = basic_elt(env, 6); // lalr_prin_symbol
    v_52 = (*qfn1(fn))(fn, v_52);
    }
    env = stack[-2];
    v_52 = basic_elt(env, 5); // " "
    v_52 = Lprinc(nil, v_52);
    env = stack[-2];
    v_52 = stack[0];
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    stack[0] = v_52;
    goto v_29;
v_28:
    v_52 = Lterpri(nil);
    env = stack[-2];
    v_52 = stack[-1];
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    stack[-1] = v_52;
    goto v_9;
v_8:
        return Lterpri(nil);
}



// Code for smt_prin2x

static LispObject CC_smt_prin2x(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_7, v_8;
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
    v_8 = v_7;
    v_7 = qvalue(basic_elt(env, 1)); // outl!*
    v_7 = cons(v_8, v_7);
    env = stack[0];
    setvalue(basic_elt(env, 1), v_7); // outl!*
    return onevalue(v_7);
}



// Code for ofsf_simplequal

static LispObject CC_ofsf_simplequal(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_64, v_65, v_66;
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
    v_64 = stack[-2];
    {   LispObject fn = basic_elt(env, 8); // ofsf_posdefp
    v_64 = (*qfn1(fn))(fn, v_64);
    }
    env = stack[-4];
    stack[-3] = v_64;
    v_65 = stack[-3];
    v_64 = basic_elt(env, 1); // stsq
    if (v_65 == v_64) goto v_14;
    else goto v_15;
v_14:
    v_64 = basic_elt(env, 2); // false
    goto v_9;
v_15:
    v_64 = stack[-2];
    {   LispObject fn = basic_elt(env, 9); // sfto_sqfpartf
    v_64 = (*qfn1(fn))(fn, v_64);
    }
    env = stack[-4];
    stack[0] = v_64;
    v_64 = stack[0];
    {   LispObject fn = basic_elt(env, 8); // ofsf_posdefp
    v_64 = (*qfn1(fn))(fn, v_64);
    }
    env = stack[-4];
    v_66 = v_64;
    v_65 = v_66;
    v_64 = basic_elt(env, 1); // stsq
    if (v_65 == v_64) goto v_25;
    else goto v_26;
v_25:
    v_64 = basic_elt(env, 2); // false
    goto v_9;
v_26:
    v_64 = qvalue(basic_elt(env, 3)); // !*rlsitsqspl
    if (v_64 == nil) goto v_33;
    v_64 = qvalue(basic_elt(env, 4)); // !*rlsiexpla
    if (v_64 == nil) goto v_37;
    else goto v_36;
v_37:
    v_64 = qvalue(basic_elt(env, 5)); // !*rlsiexpl
    if (v_64 == nil) goto v_39;
    v_65 = stack[-1];
    v_64 = basic_elt(env, 6); // and
    if (v_65 == v_64) goto v_42;
    else goto v_39;
v_42:
    goto v_36;
v_39:
    goto v_33;
v_36:
    v_65 = v_66;
    v_64 = basic_elt(env, 7); // tsq
    if (v_65 == v_64) goto v_47;
    else goto v_48;
v_47:
    v_64 = stack[0];
    {
        LispObject fn = basic_elt(env, 10); // ofsf_tsqsplequal
        return (*qfn1(fn))(fn, v_64);
    }
v_48:
    v_65 = stack[-3];
    v_64 = basic_elt(env, 7); // tsq
    if (v_65 == v_64) goto v_55;
    else goto v_56;
v_55:
    v_64 = stack[-2];
    {
        LispObject fn = basic_elt(env, 10); // ofsf_tsqsplequal
        return (*qfn1(fn))(fn, v_64);
    }
v_56:
    goto v_31;
v_33:
v_31:
    v_65 = stack[0];
    v_64 = stack[-1];
    {
        LispObject fn = basic_elt(env, 11); // ofsf_facequal!*
        return (*qfn2(fn))(fn, v_65, v_64);
    }
v_9:
    return onevalue(v_64);
}



// Code for pasf_exprng!-gand

static LispObject CC_pasf_exprngKgand(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_86, v_87, v_88;
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
    real_push(nil);
    stack_popper stack_popper_var(7);
// copy arguments values to proper place
    stack[-1] = v_5;
    stack[-2] = v_4;
    stack[-3] = v_3;
    stack[-4] = v_2;
// end of prologue
    stack[0] = nil;
    v_86 = lisp_true;
    stack[-5] = v_86;
v_16:
    v_86 = stack[-5];
    if (v_86 == nil) goto v_19;
    v_86 = stack[-3];
    if (v_86 == nil) goto v_19;
    goto v_20;
v_19:
    goto v_15;
v_20:
    v_86 = stack[-3];
    if (!car_legal(v_86)) v_86 = carerror(v_86); else
    v_86 = car(v_86);
    v_87 = v_86;
    v_86 = stack[-3];
    if (!car_legal(v_86)) v_86 = cdrerror(v_86); else
    v_86 = cdr(v_86);
    stack[-3] = v_86;
    v_86 = v_87;
    {   LispObject fn = basic_elt(env, 4); // pasf_exprng
    v_86 = (*qfn1(fn))(fn, v_86);
    }
    env = stack[-6];
    v_88 = v_86;
    v_87 = v_88;
    v_86 = stack[-1];
    if (v_87 == v_86) goto v_39;
    else goto v_40;
v_39:
    v_86 = nil;
    stack[-5] = v_86;
    goto v_38;
v_40:
    v_87 = v_88;
    v_86 = stack[-2];
    if (equal(v_87, v_86)) goto v_45;
    v_87 = v_88;
    v_86 = stack[0];
    v_86 = cons(v_87, v_86);
    env = stack[-6];
    stack[0] = v_86;
    goto v_38;
v_45:
v_38:
    goto v_16;
v_15:
    v_86 = stack[-5];
    if (v_86 == nil) goto v_53;
    else goto v_54;
v_53:
    v_86 = stack[-1];
    goto v_12;
v_54:
    v_86 = stack[0];
    if (v_86 == nil) goto v_60;
    v_86 = stack[0];
    if (!car_legal(v_86)) v_86 = cdrerror(v_86); else
    v_86 = cdr(v_86);
    if (v_86 == nil) goto v_60;
    v_87 = stack[-4];
    v_86 = stack[0];
    return cons(v_87, v_86);
v_60:
    v_86 = stack[0];
    if (v_86 == nil) goto v_69;
    else goto v_70;
v_69:
    v_87 = stack[-4];
    v_86 = basic_elt(env, 1); // and
    if (v_87 == v_86) goto v_74;
    else goto v_75;
v_74:
    v_86 = basic_elt(env, 2); // true
    goto v_73;
v_75:
    v_86 = basic_elt(env, 3); // false
    goto v_73;
    v_86 = nil;
v_73:
    goto v_58;
v_70:
    v_86 = stack[0];
    if (!car_legal(v_86)) v_86 = carerror(v_86); else
    v_86 = car(v_86);
    goto v_58;
    v_86 = nil;
v_58:
v_12:
    return onevalue(v_86);
}



// Code for bvarom

static LispObject CC_bvarom(LispObject env,
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
    stack[0] = v_2;
// end of prologue
    v_29 = stack[0];
    if (!car_legal(v_29)) v_29 = carerror(v_29); else
    v_29 = car(v_29);
    v_29 = Lconsp(nil, v_29);
    env = stack[-1];
    if (v_29 == nil) goto v_9;
    v_29 = stack[0];
    if (!car_legal(v_29)) v_29 = carerror(v_29); else
    v_29 = car(v_29);
    if (!car_legal(v_29)) v_30 = carerror(v_29); else
    v_30 = car(v_29);
    v_29 = basic_elt(env, 1); // bvar
    if (v_30 == v_29) goto v_15;
    else goto v_16;
v_15:
    v_29 = stack[0];
    if (!car_legal(v_29)) v_29 = carerror(v_29); else
    v_29 = car(v_29);
    if (!car_legal(v_29)) v_29 = cdrerror(v_29); else
    v_29 = cdr(v_29);
    if (!car_legal(v_29)) v_29 = carerror(v_29); else
    v_29 = car(v_29);
    {   LispObject fn = basic_elt(env, 2); // objectom
    v_29 = (*qfn1(fn))(fn, v_29);
    }
    env = stack[-1];
    v_29 = stack[0];
    if (!car_legal(v_29)) v_29 = cdrerror(v_29); else
    v_29 = cdr(v_29);
    {   LispObject fn = basic_elt(env, 0); // bvarom
    v_29 = (*qfn1(fn))(fn, v_29);
    }
    goto v_14;
v_16:
v_14:
    goto v_7;
v_9:
v_7:
    v_29 = nil;
    return onevalue(v_29);
}



// Code for s!-nextarg

static LispObject CC_sKnextarg(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_134, v_135, v_136;
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
    v_134 = qvalue(basic_elt(env, 1)); // !*udebug
    if (v_134 == nil) goto v_11;
    v_134 = nil;
    {   LispObject fn = basic_elt(env, 12); // uprint
    v_134 = (*qfn1(fn))(fn, v_134);
    }
    env = stack[-2];
    goto v_9;
v_11:
v_9:
    v_134 = qvalue(basic_elt(env, 2)); // comb
    if (v_134 == nil) goto v_17;
    else goto v_18;
v_17:
    v_134 = qvalue(basic_elt(env, 3)); // i
    v_134 = add1(v_134);
    env = stack[-2];
    setvalue(basic_elt(env, 3), v_134); // i
    v_134 = stack[0];
    {   LispObject fn = basic_elt(env, 13); // initcomb
    v_134 = (*qfn1(fn))(fn, v_134);
    }
    env = stack[-2];
    setvalue(basic_elt(env, 2), v_134); // comb
    goto v_16;
v_18:
v_16:
    v_135 = stack[0];
    v_134 = qvalue(basic_elt(env, 2)); // comb
    {   LispObject fn = basic_elt(env, 14); // getcomb
    v_134 = (*qfn2(fn))(fn, v_135, v_134);
    }
    env = stack[-2];
    stack[-1] = v_134;
    if (v_134 == nil) goto v_27;
    v_135 = qvalue(basic_elt(env, 3)); // i
    v_134 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_135 == v_134) goto v_37;
    else goto v_38;
v_37:
    v_135 = qvalue(basic_elt(env, 3)); // i
    v_134 = qvalue(basic_elt(env, 4)); // upb
    v_134 = static_cast<LispObject>(lesseq2(v_135, v_134));
    v_134 = v_134 ? lisp_true : nil;
    env = stack[-2];
    goto v_36;
v_38:
    v_134 = nil;
    goto v_36;
    v_134 = nil;
v_36:
    if (v_134 == nil) goto v_34;
    v_134 = stack[-1];
    if (!car_legal(v_134)) v_134 = carerror(v_134); else
    v_134 = car(v_134);
    if (!car_legal(v_134)) v_135 = carerror(v_134); else
    v_135 = car(v_134);
    v_134 = stack[-1];
    if (!car_legal(v_134)) v_134 = cdrerror(v_134); else
    v_134 = cdr(v_134);
    return cons(v_135, v_134);
v_34:
    v_135 = qvalue(basic_elt(env, 3)); // i
    v_134 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_135 == v_134) goto v_57;
    else goto v_58;
v_57:
    v_135 = qvalue(basic_elt(env, 3)); // i
    v_134 = qvalue(basic_elt(env, 4)); // upb
    v_134 = static_cast<LispObject>(lesseq2(v_135, v_134));
    v_134 = v_134 ? lisp_true : nil;
    env = stack[-2];
    goto v_56;
v_58:
    v_134 = nil;
    goto v_56;
    v_134 = nil;
v_56:
    if (v_134 == nil) goto v_54;
    v_135 = basic_elt(env, 5); // (null!-fn)
    v_134 = stack[0];
    return cons(v_135, v_134);
v_54:
    v_134 = qvalue(basic_elt(env, 6)); // acontract
    if (v_134 == nil) goto v_71;
    v_135 = qvalue(basic_elt(env, 3)); // i
    v_134 = qvalue(basic_elt(env, 4)); // upb
    v_134 = static_cast<LispObject>(lesseq2(v_135, v_134));
    v_134 = v_134 ? lisp_true : nil;
    env = stack[-2];
    if (v_134 == nil) goto v_71;
    v_136 = qvalue(basic_elt(env, 7)); // op
    v_134 = stack[-1];
    if (!car_legal(v_134)) v_135 = carerror(v_134); else
    v_135 = car(v_134);
    v_134 = stack[-1];
    if (!car_legal(v_134)) v_134 = cdrerror(v_134); else
    v_134 = cdr(v_134);
    v_134 = acons(v_136, v_135, v_134);
    env = stack[-2];
    {
        LispObject fn = basic_elt(env, 15); // mval
        return (*qfn1(fn))(fn, v_134);
    }
v_71:
    v_134 = qvalue(basic_elt(env, 8)); // mcontract
    if (v_134 == nil) goto v_86;
    v_135 = qvalue(basic_elt(env, 3)); // i
    v_134 = qvalue(basic_elt(env, 4)); // upb
    v_134 = static_cast<LispObject>(lesseq2(v_135, v_134));
    v_134 = v_134 ? lisp_true : nil;
    env = stack[-2];
    if (v_134 == nil) goto v_86;
    v_136 = basic_elt(env, 9); // null!-fn
    v_134 = stack[-1];
    if (!car_legal(v_134)) v_135 = carerror(v_134); else
    v_135 = car(v_134);
    v_134 = stack[-1];
    if (!car_legal(v_134)) v_134 = cdrerror(v_134); else
    v_134 = cdr(v_134);
    return acons(v_136, v_135, v_134);
v_86:
    v_134 = qvalue(basic_elt(env, 10)); // expand
    if (v_134 == nil) goto v_100;
    v_134 = nil;
    setvalue(basic_elt(env, 10), v_134); // expand
    v_135 = qvalue(basic_elt(env, 11)); // identity
    v_134 = stack[0];
    return cons(v_135, v_134);
v_100:
    v_134 = nil;
    goto v_32;
    v_134 = nil;
v_32:
    goto v_25;
v_27:
    v_135 = qvalue(basic_elt(env, 3)); // i
    v_134 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_135 == v_134) goto v_113;
    else goto v_114;
v_113:
    v_135 = qvalue(basic_elt(env, 3)); // i
    v_134 = qvalue(basic_elt(env, 4)); // upb
    v_134 = static_cast<LispObject>(lesseq2(v_135, v_134));
    v_134 = v_134 ? lisp_true : nil;
    env = stack[-2];
    goto v_112;
v_114:
    v_134 = nil;
    goto v_112;
    v_134 = nil;
v_112:
    if (v_134 == nil) goto v_110;
    v_135 = basic_elt(env, 5); // (null!-fn)
    v_134 = stack[0];
    return cons(v_135, v_134);
v_110:
    v_134 = qvalue(basic_elt(env, 10)); // expand
    if (v_134 == nil) goto v_127;
    v_134 = nil;
    setvalue(basic_elt(env, 10), v_134); // expand
    v_135 = qvalue(basic_elt(env, 11)); // identity
    v_134 = stack[0];
    return cons(v_135, v_134);
v_127:
    v_134 = nil;
v_25:
    return onevalue(v_134);
}



// Code for wedgef

static LispObject CC_wedgef(LispObject env,
                         LispObject v_2)
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
    v_150 = stack[-1];
    {   LispObject fn = basic_elt(env, 6); // dim!<deg
    v_150 = (*qfn1(fn))(fn, v_150);
    }
    env = stack[-3];
    if (v_150 == nil) goto v_7;
    v_150 = nil;
    goto v_5;
v_7:
    v_150 = stack[-1];
    if (!car_legal(v_150)) v_151 = carerror(v_150); else
    v_151 = car(v_150);
    v_150 = basic_elt(env, 1); // hodge
    if (!consp(v_151)) goto v_12;
    v_151 = car(v_151);
    if (v_151 == v_150) goto v_11;
    else goto v_12;
v_11:
    v_150 = stack[-1];
    if (!car_legal(v_150)) v_150 = carerror(v_150); else
    v_150 = car(v_150);
    if (!car_legal(v_150)) v_150 = cdrerror(v_150); else
    v_150 = cdr(v_150);
    if (!car_legal(v_150)) v_150 = carerror(v_150); else
    v_150 = car(v_150);
    {   LispObject fn = basic_elt(env, 7); // deg!*form
    v_150 = (*qfn1(fn))(fn, v_150);
    }
    env = stack[-3];
    stack[-2] = v_150;
    stack[0] = stack[-2];
    v_150 = stack[-1];
    if (!car_legal(v_150)) v_150 = cdrerror(v_150); else
    v_150 = cdr(v_150);
    {   LispObject fn = basic_elt(env, 8); // deg!*farg
    v_150 = (*qfn1(fn))(fn, v_150);
    }
    env = stack[-3];
    if (equal(stack[0], v_150)) goto v_25;
    else goto v_26;
v_25:
    v_150 = stack[-1];
    if (!car_legal(v_150)) v_150 = carerror(v_150); else
    v_150 = car(v_150);
    if (!car_legal(v_150)) v_150 = cdrerror(v_150); else
    v_150 = cdr(v_150);
    if (!car_legal(v_150)) v_152 = carerror(v_150); else
    v_152 = car(v_150);
    v_151 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_150 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_150 = list2star(v_152, v_151, v_150);
    env = stack[-3];
    stack[0] = ncons(v_150);
    env = stack[-3];
    v_150 = stack[-1];
    if (!car_legal(v_150)) v_150 = cdrerror(v_150); else
    v_150 = cdr(v_150);
    if (!car_legal(v_150)) v_150 = cdrerror(v_150); else
    v_150 = cdr(v_150);
    if (v_150 == nil) goto v_46;
    v_150 = stack[-1];
    if (!car_legal(v_150)) v_150 = cdrerror(v_150); else
    v_150 = cdr(v_150);
    {   LispObject fn = basic_elt(env, 9); // mkuniquewedge1
    v_150 = (*qfn1(fn))(fn, v_150);
    }
    env = stack[-3];
    goto v_44;
v_46:
    v_150 = stack[-1];
    if (!car_legal(v_150)) v_150 = cdrerror(v_150); else
    v_150 = cdr(v_150);
    if (!car_legal(v_150)) v_152 = carerror(v_150); else
    v_152 = car(v_150);
    v_151 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_150 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_150 = list2star(v_152, v_151, v_150);
    env = stack[-3];
    v_150 = ncons(v_150);
    env = stack[-3];
    goto v_44;
    v_150 = nil;
v_44:
    {   LispObject fn = basic_elt(env, 10); // hodgepf
    v_150 = (*qfn1(fn))(fn, v_150);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 11); // mkunarywedge
    v_150 = (*qfn1(fn))(fn, v_150);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 12); // wedgepf2
    stack[-1] = (*qfn2(fn))(fn, stack[0], v_150);
    }
    env = stack[-3];
    stack[0] = stack[-2];
    v_150 = qvalue(basic_elt(env, 2)); // dimex!*
    {   LispObject fn = basic_elt(env, 13); // negf
    v_150 = (*qfn1(fn))(fn, v_150);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 14); // addf
    v_150 = (*qfn2(fn))(fn, stack[-2], v_150);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 15); // multf
    v_150 = (*qfn2(fn))(fn, stack[0], v_150);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 16); // mksgnsq
    v_150 = (*qfn1(fn))(fn, v_150);
    }
    env = stack[-3];
    {
        LispObject v_156 = stack[-1];
        LispObject fn = basic_elt(env, 17); // multpfsq
        return (*qfn2(fn))(fn, v_156, v_150);
    }
v_26:
    v_150 = stack[-1];
    {
        LispObject fn = basic_elt(env, 18); // mkwedge
        return (*qfn1(fn))(fn, v_150);
    }
    v_150 = nil;
    goto v_5;
v_12:
    v_150 = stack[-1];
    if (!car_legal(v_150)) v_151 = carerror(v_150); else
    v_151 = car(v_150);
    v_150 = basic_elt(env, 3); // d
    if (!consp(v_151)) goto v_78;
    v_151 = car(v_151);
    if (v_151 == v_150) goto v_77;
    else goto v_78;
v_77:
    v_151 = basic_elt(env, 3); // d
    v_150 = basic_elt(env, 4); // noxpnd
    v_150 = Lflagp(nil, v_151, v_150);
    env = stack[-3];
    if (v_150 == nil) goto v_86;
    v_150 = lisp_true;
    goto v_84;
v_86:
    v_151 = qvalue(basic_elt(env, 5)); // lftshft!*
    v_150 = stack[-1];
    if (!car_legal(v_150)) v_150 = carerror(v_150); else
    v_150 = car(v_150);
    if (!car_legal(v_150)) v_150 = cdrerror(v_150); else
    v_150 = cdr(v_150);
    if (!car_legal(v_150)) v_150 = carerror(v_150); else
    v_150 = car(v_150);
    {   LispObject fn = basic_elt(env, 19); // smemqlp
    v_150 = (*qfn2(fn))(fn, v_151, v_150);
    }
    env = stack[-3];
    goto v_84;
    v_150 = nil;
v_84:
    goto v_76;
v_78:
    v_150 = nil;
    goto v_76;
    v_150 = nil;
v_76:
    if (v_150 == nil) goto v_74;
    v_150 = stack[-1];
    if (!car_legal(v_150)) v_150 = carerror(v_150); else
    v_150 = car(v_150);
    if (!car_legal(v_150)) v_150 = cdrerror(v_150); else
    v_150 = cdr(v_150);
    if (!car_legal(v_150)) v_151 = carerror(v_150); else
    v_151 = car(v_150);
    v_150 = stack[-1];
    if (!car_legal(v_150)) v_150 = cdrerror(v_150); else
    v_150 = cdr(v_150);
    v_150 = cons(v_151, v_150);
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 20); // dwedge
    v_150 = (*qfn1(fn))(fn, v_150);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 11); // mkunarywedge
    stack[-2] = (*qfn1(fn))(fn, v_150);
    }
    env = stack[-3];
    v_150 = stack[-1];
    if (!car_legal(v_150)) v_150 = carerror(v_150); else
    v_150 = car(v_150);
    if (!car_legal(v_150)) v_150 = cdrerror(v_150); else
    v_150 = cdr(v_150);
    if (!car_legal(v_150)) v_152 = carerror(v_150); else
    v_152 = car(v_150);
    v_151 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_150 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_150 = list2star(v_152, v_151, v_150);
    env = stack[-3];
    stack[0] = ncons(v_150);
    env = stack[-3];
    v_150 = stack[-1];
    if (!car_legal(v_150)) v_150 = cdrerror(v_150); else
    v_150 = cdr(v_150);
    if (!car_legal(v_150)) v_150 = cdrerror(v_150); else
    v_150 = cdr(v_150);
    if (v_150 == nil) goto v_126;
    v_150 = stack[-1];
    if (!car_legal(v_150)) v_150 = cdrerror(v_150); else
    v_150 = cdr(v_150);
    {   LispObject fn = basic_elt(env, 20); // dwedge
    v_150 = (*qfn1(fn))(fn, v_150);
    }
    env = stack[-3];
    goto v_124;
v_126:
    v_150 = stack[-1];
    if (!car_legal(v_150)) v_150 = cdrerror(v_150); else
    v_150 = cdr(v_150);
    if (!car_legal(v_150)) v_150 = carerror(v_150); else
    v_150 = car(v_150);
    {   LispObject fn = basic_elt(env, 21); // exdfk
    v_150 = (*qfn1(fn))(fn, v_150);
    }
    env = stack[-3];
    goto v_124;
    v_150 = nil;
v_124:
    {   LispObject fn = basic_elt(env, 11); // mkunarywedge
    v_150 = (*qfn1(fn))(fn, v_150);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 12); // wedgepf2
    stack[0] = (*qfn2(fn))(fn, stack[0], v_150);
    }
    env = stack[-3];
    v_150 = stack[-1];
    if (!car_legal(v_150)) v_150 = carerror(v_150); else
    v_150 = car(v_150);
    if (!car_legal(v_150)) v_150 = cdrerror(v_150); else
    v_150 = cdr(v_150);
    if (!car_legal(v_150)) v_150 = carerror(v_150); else
    v_150 = car(v_150);
    {   LispObject fn = basic_elt(env, 7); // deg!*form
    v_150 = (*qfn1(fn))(fn, v_150);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 16); // mksgnsq
    v_150 = (*qfn1(fn))(fn, v_150);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 22); // negsq
    v_150 = (*qfn1(fn))(fn, v_150);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 17); // multpfsq
    v_150 = (*qfn2(fn))(fn, stack[0], v_150);
    }
    env = stack[-3];
    {
        LispObject v_157 = stack[-2];
        LispObject fn = basic_elt(env, 23); // addpf
        return (*qfn2(fn))(fn, v_157, v_150);
    }
v_74:
    v_150 = stack[-1];
    {
        LispObject fn = basic_elt(env, 18); // mkwedge
        return (*qfn1(fn))(fn, v_150);
    }
    v_150 = nil;
v_5:
    return onevalue(v_150);
}



// Code for apply_e

static LispObject CC_apply_e(LispObject env,
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
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_17 = v_2;
// end of prologue
    v_18 = v_17;
    v_17 = nil;
    {   LispObject fn = basic_elt(env, 2); // apply
    v_18 = (*qfn2(fn))(fn, v_18, v_17);
    }
    env = stack[0];
    v_17 = v_18;
    v_18 = integerp(v_18);
    if (v_18 == nil) goto v_7;
    goto v_5;
v_7:
    v_17 = basic_elt(env, 1); // "randpoly expons function must return an integer"
    {
        LispObject fn = basic_elt(env, 3); // rederr
        return (*qfn1(fn))(fn, v_17);
    }
    v_17 = nil;
v_5:
    return onevalue(v_17);
}



// Code for diff_vertex

static LispObject CC_diff_vertex(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_42 = nil;
v_8:
    v_40 = stack[-1];
    if (v_40 == nil) goto v_11;
    else goto v_12;
v_11:
    v_40 = v_42;
    {
        LispObject fn = basic_elt(env, 2); // nreverse
        return (*qfn1(fn))(fn, v_40);
    }
v_12:
    v_40 = stack[-1];
    if (!car_legal(v_40)) v_40 = carerror(v_40); else
    v_40 = car(v_40);
    if (!car_legal(v_40)) v_41 = carerror(v_40); else
    v_41 = car(v_40);
    v_40 = stack[0];
    v_40 = Lassoc(nil, v_41, v_40);
    if (v_40 == nil) goto v_17;
    v_40 = stack[-1];
    if (!car_legal(v_40)) v_40 = carerror(v_40); else
    v_40 = car(v_40);
    if (!car_legal(v_40)) v_41 = carerror(v_40); else
    v_41 = car(v_40);
    v_40 = qvalue(basic_elt(env, 1)); // !_0edge
    if (!car_legal(v_40)) v_40 = carerror(v_40); else
    v_40 = car(v_40);
    if (v_41 == v_40) goto v_17;
    v_40 = stack[-1];
    if (!car_legal(v_40)) v_40 = cdrerror(v_40); else
    v_40 = cdr(v_40);
    stack[-1] = v_40;
    goto v_8;
v_17:
    v_40 = stack[-1];
    if (!car_legal(v_40)) v_40 = carerror(v_40); else
    v_40 = car(v_40);
    v_41 = v_42;
    v_40 = cons(v_40, v_41);
    env = stack[-2];
    v_42 = v_40;
    v_40 = stack[-1];
    if (!car_legal(v_40)) v_40 = cdrerror(v_40); else
    v_40 = cdr(v_40);
    stack[-1] = v_40;
    goto v_8;
    v_40 = nil;
    return onevalue(v_40);
}



// Code for assert_kernelp

static LispObject CC_assert_kernelp(LispObject env,
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
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_43 = v_2;
// end of prologue
    v_44 = v_43;
    if (symbolp(v_44)) goto v_9;
    else goto v_10;
v_9:
    v_43 = lisp_true;
    goto v_6;
v_10:
    v_44 = v_43;
    v_44 = Lconsp(nil, v_44);
    env = stack[0];
    if (v_44 == nil) goto v_15;
    else goto v_16;
v_15:
    v_43 = nil;
    goto v_6;
v_16:
    v_44 = v_43;
    if (!car_legal(v_44)) v_44 = carerror(v_44); else
    v_44 = car(v_44);
    if (!symbolp(v_44)) v_44 = nil;
    else { v_44 = qfastgets(v_44);
           if (v_44 != nil) { v_44 = elt(v_44, 38); // fkernfn
#ifdef RECORD_GET
             if (v_44 != SPID_NOPROP)
                record_get(elt(fastget_names, 38), 1);
             else record_get(elt(fastget_names, 38), 0),
                v_44 = nil; }
           else record_get(elt(fastget_names, 38), 0); }
#else
             if (v_44 == SPID_NOPROP) v_44 = nil; }}
#endif
    if (v_44 == nil) goto v_23;
    v_43 = lisp_true;
    goto v_6;
v_23:
    v_44 = v_43;
    if (!car_legal(v_44)) v_44 = carerror(v_44); else
    v_44 = car(v_44);
    if (!consp(v_44)) goto v_30;
    else goto v_31;
v_30:
    v_44 = v_43;
    if (!car_legal(v_44)) v_44 = carerror(v_44); else
    v_44 = car(v_44);
    if (!symbolp(v_44)) v_44 = nil;
    else { v_44 = qfastgets(v_44);
           if (v_44 != nil) { v_44 = elt(v_44, 24); // klist
#ifdef RECORD_GET
             if (v_44 != SPID_NOPROP)
                record_get(elt(fastget_names, 24), 1);
             else record_get(elt(fastget_names, 24), 0),
                v_44 = nil; }
           else record_get(elt(fastget_names, 24), 0); }
#else
             if (v_44 == SPID_NOPROP) v_44 = nil; }}
#endif
    goto v_29;
v_31:
    v_44 = qvalue(basic_elt(env, 1)); // exlist!*
    goto v_29;
    v_44 = nil;
v_29:
    v_43 = Latsoc(nil, v_43, v_44);
v_6:
    return onevalue(v_43);
}



// Code for evalgreaterp

static LispObject CC_evalgreaterp(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    v_68 = v_3;
    v_67 = v_2;
// end of prologue
    v_69 = basic_elt(env, 1); // difference
    v_67 = list3(v_69, v_68, v_67);
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // simp!*
    v_67 = (*qfn1(fn))(fn, v_67);
    }
    env = stack[-1];
    stack[0] = v_67;
    v_67 = stack[0];
    if (!car_legal(v_67)) v_67 = cdrerror(v_67); else
    v_67 = cdr(v_67);
    if (!consp(v_67)) goto v_18;
    v_67 = lisp_true;
    goto v_16;
v_18:
    v_67 = stack[0];
    if (!car_legal(v_67)) v_67 = carerror(v_67); else
    v_67 = car(v_67);
    if (!consp(v_67)) goto v_26;
    else goto v_27;
v_26:
    v_67 = lisp_true;
    goto v_25;
v_27:
    v_67 = stack[0];
    if (!car_legal(v_67)) v_67 = carerror(v_67); else
    v_67 = car(v_67);
    if (!car_legal(v_67)) v_67 = carerror(v_67); else
    v_67 = car(v_67);
    v_67 = (consp(v_67) ? nil : lisp_true);
    goto v_25;
    v_67 = nil;
v_25:
    v_67 = (v_67 == nil ? lisp_true : nil);
    goto v_16;
    v_67 = nil;
v_16:
    if (v_67 == nil) goto v_14;
    v_67 = stack[0];
    if (!car_legal(v_67)) v_67 = carerror(v_67); else
    v_67 = car(v_67);
    {   LispObject fn = basic_elt(env, 4); // minusf
    v_67 = (*qfn1(fn))(fn, v_67);
    }
    env = stack[-1];
    if (v_67 == nil) goto v_43;
    v_67 = stack[0];
    {   LispObject fn = basic_elt(env, 5); // negsq
    v_67 = (*qfn1(fn))(fn, v_67);
    }
    env = stack[-1];
    goto v_41;
v_43:
    v_67 = stack[0];
    goto v_41;
    v_67 = nil;
v_41:
    {   LispObject fn = basic_elt(env, 6); // mk!*sq
    v_68 = (*qfn1(fn))(fn, v_67);
    }
    env = stack[-1];
    v_67 = basic_elt(env, 2); // "number"
    {
        LispObject fn = basic_elt(env, 7); // typerr
        return (*qfn2(fn))(fn, v_68, v_67);
    }
v_14:
    v_67 = stack[0];
    if (!car_legal(v_67)) v_67 = carerror(v_67); else
    v_67 = car(v_67);
    if (v_67 == nil) goto v_57;
    else goto v_58;
v_57:
    v_67 = nil;
    goto v_56;
v_58:
    v_67 = stack[0];
    if (!car_legal(v_67)) v_67 = carerror(v_67); else
    v_67 = car(v_67);
    {
        LispObject fn = basic_elt(env, 8); // !:minusp
        return (*qfn1(fn))(fn, v_67);
    }
    v_67 = nil;
v_56:
    goto v_12;
    v_67 = nil;
v_12:
    return onevalue(v_67);
}



// Code for solvealgdepends

static LispObject CC_solvealgdepends(LispObject env,
                         LispObject v_2, LispObject v_3)
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
v_8:
    v_62 = stack[-1];
    v_61 = stack[0];
    if (equal(v_62, v_61)) goto v_11;
    else goto v_12;
v_11:
    v_61 = lisp_true;
    goto v_7;
v_12:
    v_61 = stack[-1];
    if (!consp(v_61)) goto v_16;
    else goto v_17;
v_16:
    v_61 = nil;
    goto v_7;
v_17:
    v_62 = stack[-1];
    v_61 = basic_elt(env, 1); // root_of
    if (!consp(v_62)) goto v_21;
    v_62 = car(v_62);
    if (v_62 == v_61) goto v_20;
    else goto v_21;
v_20:
    v_62 = stack[0];
    v_61 = stack[-1];
    if (!car_legal(v_61)) v_61 = cdrerror(v_61); else
    v_61 = cdr(v_61);
    if (!car_legal(v_61)) v_61 = cdrerror(v_61); else
    v_61 = cdr(v_61);
    if (!car_legal(v_61)) v_61 = carerror(v_61); else
    v_61 = car(v_61);
    if (equal(v_62, v_61)) goto v_27;
    else goto v_28;
v_27:
    v_61 = nil;
    goto v_7;
v_28:
    v_61 = stack[-1];
    if (!car_legal(v_61)) v_61 = cdrerror(v_61); else
    v_61 = cdr(v_61);
    if (!car_legal(v_61)) v_61 = carerror(v_61); else
    v_61 = car(v_61);
    stack[-1] = v_61;
    goto v_8;
    goto v_10;
v_21:
    v_61 = stack[-1];
    if (!car_legal(v_61)) v_62 = carerror(v_61); else
    v_62 = car(v_61);
    v_61 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // solvealgdepends
    v_61 = (*qfn2(fn))(fn, v_62, v_61);
    }
    env = stack[-2];
    v_62 = v_61;
    if (v_61 == nil) goto v_45;
    v_61 = v_62;
    goto v_7;
v_45:
    v_61 = stack[-1];
    if (!car_legal(v_61)) v_62 = cdrerror(v_61); else
    v_62 = cdr(v_61);
    v_61 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // solvealgdepends
    v_61 = (*qfn2(fn))(fn, v_62, v_61);
    }
    v_62 = v_61;
    if (v_61 == nil) goto v_52;
    v_61 = v_62;
    goto v_7;
v_52:
    v_61 = nil;
    goto v_7;
    goto v_10;
v_10:
    v_61 = nil;
v_7:
    return onevalue(v_61);
}



// Code for make!-image

static LispObject CC_makeKimage(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_60, v_61, v_62;
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
    v_60 = stack[-1];
    if (!consp(v_60)) goto v_11;
    else goto v_12;
v_11:
    v_60 = lisp_true;
    goto v_10;
v_12:
    v_60 = stack[-1];
    if (!car_legal(v_60)) v_60 = carerror(v_60); else
    v_60 = car(v_60);
    v_60 = (consp(v_60) ? nil : lisp_true);
    goto v_10;
    v_60 = nil;
v_10:
    if (v_60 == nil) goto v_8;
    v_60 = stack[-1];
    goto v_6;
v_8:
    v_60 = stack[-1];
    if (!car_legal(v_60)) v_60 = carerror(v_60); else
    v_60 = car(v_60);
    if (!car_legal(v_60)) v_60 = carerror(v_60); else
    v_60 = car(v_60);
    if (!car_legal(v_60)) v_61 = carerror(v_60); else
    v_61 = car(v_60);
    v_60 = qvalue(basic_elt(env, 1)); // m!-image!-variable
    if (equal(v_61, v_60)) goto v_21;
    else goto v_22;
v_21:
    v_60 = stack[-1];
    if (!car_legal(v_60)) v_60 = carerror(v_60); else
    v_60 = car(v_60);
    if (!car_legal(v_60)) v_61 = cdrerror(v_60); else
    v_61 = cdr(v_60);
    v_60 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // evaluate!-in!-order
    v_60 = (*qfn2(fn))(fn, v_61, v_60);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 3); // !*n2f
    stack[-2] = (*qfn1(fn))(fn, v_60);
    }
    env = stack[-3];
    v_60 = stack[-1];
    if (!car_legal(v_60)) v_61 = cdrerror(v_60); else
    v_61 = cdr(v_60);
    v_60 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // make!-image
    v_60 = (*qfn2(fn))(fn, v_61, v_60);
    }
    v_61 = stack[-2];
    v_62 = v_61;
    if (v_62 == nil) goto v_42;
    else goto v_43;
v_42:
    goto v_41;
v_43:
    v_62 = stack[-1];
    if (!car_legal(v_62)) v_62 = carerror(v_62); else
    v_62 = car(v_62);
    if (!car_legal(v_62)) v_62 = carerror(v_62); else
    v_62 = car(v_62);
    return acons(v_62, v_61, v_60);
    v_60 = nil;
v_41:
    goto v_6;
v_22:
    v_61 = stack[-1];
    v_60 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // evaluate!-in!-order
    v_60 = (*qfn2(fn))(fn, v_61, v_60);
    }
    env = stack[-3];
    {
        LispObject fn = basic_elt(env, 3); // !*n2f
        return (*qfn1(fn))(fn, v_60);
    }
    v_60 = nil;
v_6:
    return onevalue(v_60);
}



// Code for giplus!:

static LispObject CC_giplusT(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    v_20 = stack[-1];
    if (!car_legal(v_20)) v_20 = cdrerror(v_20); else
    v_20 = cdr(v_20);
    if (!car_legal(v_20)) v_21 = carerror(v_20); else
    v_21 = car(v_20);
    v_20 = stack[0];
    if (!car_legal(v_20)) v_20 = cdrerror(v_20); else
    v_20 = cdr(v_20);
    if (!car_legal(v_20)) v_20 = carerror(v_20); else
    v_20 = car(v_20);
    stack[-2] = plus2(v_21, v_20);
    env = stack[-3];
    v_20 = stack[-1];
    if (!car_legal(v_20)) v_20 = cdrerror(v_20); else
    v_20 = cdr(v_20);
    if (!car_legal(v_20)) v_21 = cdrerror(v_20); else
    v_21 = cdr(v_20);
    v_20 = stack[0];
    if (!car_legal(v_20)) v_20 = cdrerror(v_20); else
    v_20 = cdr(v_20);
    if (!car_legal(v_20)) v_20 = cdrerror(v_20); else
    v_20 = cdr(v_20);
    v_20 = plus2(v_21, v_20);
    env = stack[-3];
    {
        LispObject v_25 = stack[-2];
        LispObject fn = basic_elt(env, 1); // mkgi
        return (*qfn2(fn))(fn, v_25, v_20);
    }
}



// Code for ext_mult

static LispObject CC_ext_mult(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    v_41 = v_3;
    v_42 = v_2;
// end of prologue
    if (!car_legal(v_42)) v_42 = cdrerror(v_42); else
    v_42 = cdr(v_42);
    if (!car_legal(v_41)) v_41 = cdrerror(v_41); else
    v_41 = cdr(v_41);
    {   LispObject fn = basic_elt(env, 2); // merge_lists
    v_41 = (*qfn2(fn))(fn, v_42, v_41);
    }
    env = stack[-1];
    stack[0] = v_41;
    v_41 = stack[0];
    if (v_41 == nil) goto v_13;
    else goto v_14;
v_13:
    v_42 = nil;
    v_41 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_42, v_41);
v_14:
    v_41 = stack[0];
    if (!car_legal(v_41)) v_41 = cdrerror(v_41); else
    v_41 = cdr(v_41);
    if (v_41 == nil) goto v_19;
    else goto v_20;
v_19:
    v_42 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_41 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_42, v_41);
v_20:
    v_42 = basic_elt(env, 1); // ext
    v_41 = stack[0];
    if (!car_legal(v_41)) v_41 = cdrerror(v_41); else
    v_41 = cdr(v_41);
    v_41 = cons(v_42, v_41);
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // !*a2k
    v_42 = (*qfn1(fn))(fn, v_41);
    }
    env = stack[-1];
    v_41 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 4); // to
    v_42 = (*qfn2(fn))(fn, v_42, v_41);
    }
    env = stack[-1];
    v_41 = stack[0];
    if (!car_legal(v_41)) v_41 = carerror(v_41); else
    v_41 = car(v_41);
    v_43 = cons(v_42, v_41);
    v_42 = nil;
    v_41 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return acons(v_43, v_42, v_41);
    v_41 = nil;
    return onevalue(v_41);
}



// Code for gcd!-with!-number

static LispObject CC_gcdKwithKnumber(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_70, v_71, v_72;
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
    v_71 = v_2;
// end of prologue
v_7:
    v_72 = v_71;
    v_70 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_72 == v_70) goto v_14;
    else goto v_15;
v_14:
    v_70 = lisp_true;
    goto v_13;
v_15:
    v_70 = v_71;
    if (!consp(v_70)) goto v_24;
    v_70 = lisp_true;
    goto v_22;
v_24:
    v_70 = qvalue(basic_elt(env, 1)); // dmode!*
    if (!symbolp(v_70)) v_70 = nil;
    else { v_70 = qfastgets(v_70);
           if (v_70 != nil) { v_70 = elt(v_70, 3); // field
#ifdef RECORD_GET
             if (v_70 == SPID_NOPROP)
                record_get(elt(fastget_names, 3), 0),
                v_70 = nil;
             else record_get(elt(fastget_names, 3), 1),
                v_70 = lisp_true; }
           else record_get(elt(fastget_names, 3), 0); }
#else
             if (v_70 == SPID_NOPROP) v_70 = nil; else v_70 = lisp_true; }}
#endif
    goto v_22;
    v_70 = nil;
v_22:
    goto v_13;
    v_70 = nil;
v_13:
    if (v_70 == nil) goto v_11;
    v_70 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_6;
v_11:
    v_70 = stack[0];
    if (!consp(v_70)) goto v_36;
    else goto v_37;
v_36:
    v_70 = lisp_true;
    goto v_35;
v_37:
    v_70 = stack[0];
    if (!car_legal(v_70)) v_70 = carerror(v_70); else
    v_70 = car(v_70);
    v_70 = (consp(v_70) ? nil : lisp_true);
    goto v_35;
    v_70 = nil;
v_35:
    if (v_70 == nil) goto v_33;
    v_70 = stack[0];
    if (v_70 == nil) goto v_47;
    else goto v_48;
v_47:
    v_70 = v_71;
        return Labsval(nil, v_70);
v_48:
    v_70 = stack[0];
    if (!consp(v_70)) goto v_53;
    v_70 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_6;
v_53:
    v_70 = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // gcddd
        return (*qfn2(fn))(fn, v_71, v_70);
    }
    goto v_9;
v_33:
    v_70 = stack[0];
    if (!car_legal(v_70)) v_70 = carerror(v_70); else
    v_70 = car(v_70);
    if (!car_legal(v_70)) v_70 = cdrerror(v_70); else
    v_70 = cdr(v_70);
    {   LispObject fn = basic_elt(env, 0); // gcd!-with!-number
    v_70 = (*qfn2(fn))(fn, v_71, v_70);
    }
    env = stack[-1];
    v_71 = v_70;
    v_70 = stack[0];
    if (!car_legal(v_70)) v_70 = cdrerror(v_70); else
    v_70 = cdr(v_70);
    stack[0] = v_70;
    goto v_7;
v_9:
    v_70 = nil;
v_6:
    return onevalue(v_70);
}



// Code for aex_sgn

static LispObject CC_aex_sgn(LispObject env,
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
    goto v_15;
    goto v_13;
v_15:
v_13:
    v_113 = stack[0];
    {   LispObject fn = basic_elt(env, 5); // aex_simpleratp
    v_113 = (*qfn1(fn))(fn, v_113);
    }
    env = stack[-5];
    if (v_113 == nil) goto v_20;
    v_113 = stack[0];
    {   LispObject fn = basic_elt(env, 6); // aex_ex
    v_113 = (*qfn1(fn))(fn, v_113);
    }
    env = stack[-5];
    {
        LispObject fn = basic_elt(env, 7); // rat_sgn
        return (*qfn1(fn))(fn, v_113);
    }
v_20:
    v_113 = qvalue(basic_elt(env, 1)); // !*rlanuexsgnopt
    if (v_113 == nil) goto v_29;
    v_113 = stack[0];
    {   LispObject fn = basic_elt(env, 8); // aex_containment
    v_113 = (*qfn1(fn))(fn, v_113);
    }
    env = stack[-5];
    stack[-2] = v_113;
    {   LispObject fn = basic_elt(env, 9); // rat_0
    stack[-1] = (*qfn0(fn))(fn);
    }
    env = stack[-5];
    v_113 = stack[-2];
    {   LispObject fn = basic_elt(env, 10); // iv_lb
    v_113 = (*qfn1(fn))(fn, v_113);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 11); // rat_less
    v_113 = (*qfn2(fn))(fn, stack[-1], v_113);
    }
    env = stack[-5];
    if (v_113 == nil) goto v_36;
    v_113 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_11;
v_36:
    v_113 = stack[-2];
    {   LispObject fn = basic_elt(env, 12); // iv_rb
    stack[-1] = (*qfn1(fn))(fn, v_113);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 9); // rat_0
    v_113 = (*qfn0(fn))(fn);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 11); // rat_less
    v_113 = (*qfn2(fn))(fn, stack[-1], v_113);
    }
    env = stack[-5];
    if (v_113 == nil) goto v_45;
    v_113 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    goto v_11;
v_45:
    goto v_27;
v_29:
v_27:
    v_113 = stack[0];
    {   LispObject fn = basic_elt(env, 13); // aex_mvar
    v_113 = (*qfn1(fn))(fn, v_113);
    }
    env = stack[-5];
    stack[-4] = v_113;
    v_113 = stack[0];
    {   LispObject fn = basic_elt(env, 14); // aex_ctx
    v_114 = (*qfn1(fn))(fn, v_113);
    }
    env = stack[-5];
    v_113 = stack[-4];
    {   LispObject fn = basic_elt(env, 15); // ctx_get
    v_113 = (*qfn2(fn))(fn, v_114, v_113);
    }
    env = stack[-5];
    stack[-3] = v_113;
    v_114 = stack[0];
    v_113 = stack[-4];
    {   LispObject fn = basic_elt(env, 16); // aex_unbind
    v_113 = (*qfn2(fn))(fn, v_114, v_113);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 17); // aex_reduce
    v_113 = (*qfn1(fn))(fn, v_113);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 18); // aex_mklcnt
    v_113 = (*qfn1(fn))(fn, v_113);
    }
    env = stack[-5];
    stack[-1] = v_113;
    v_113 = stack[-1];
    {   LispObject fn = basic_elt(env, 5); // aex_simpleratp
    v_113 = (*qfn1(fn))(fn, v_113);
    }
    env = stack[-5];
    if (v_113 == nil) goto v_65;
    v_113 = stack[-1];
    {   LispObject fn = basic_elt(env, 6); // aex_ex
    v_113 = (*qfn1(fn))(fn, v_113);
    }
    env = stack[-5];
    {
        LispObject fn = basic_elt(env, 7); // rat_sgn
        return (*qfn1(fn))(fn, v_113);
    }
v_65:
    v_113 = qvalue(basic_elt(env, 2)); // !*rlverbose
    if (v_113 == nil) goto v_74;
    v_113 = qvalue(basic_elt(env, 3)); // !*rlanuexverbose
    if (v_113 == nil) goto v_74;
    v_114 = stack[-1];
    v_113 = stack[-4];
    {   LispObject fn = basic_elt(env, 19); // aex_deg
    v_114 = (*qfn2(fn))(fn, v_114, v_113);
    }
    env = stack[-5];
    v_113 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_113 = static_cast<LispObject>(lesseq2(v_114, v_113));
    v_113 = v_113 ? lisp_true : nil;
    env = stack[-5];
    if (v_113 == nil) goto v_82;
    v_113 = basic_elt(env, 4); // "[aex_sgn:num!]"
    v_113 = Lprinc(nil, v_113);
    env = stack[-5];
    goto v_80;
v_82:
v_80:
    goto v_72;
v_74:
v_72:
    v_113 = stack[-3];
    {   LispObject fn = basic_elt(env, 20); // anu_dp
    v_113 = (*qfn1(fn))(fn, v_113);
    }
    env = stack[-5];
    stack[0] = v_113;
    v_114 = v_113;
    v_113 = stack[-4];
    {   LispObject fn = basic_elt(env, 21); // aex_diff
    v_114 = (*qfn2(fn))(fn, v_114, v_113);
    }
    env = stack[-5];
    v_113 = stack[-1];
    {   LispObject fn = basic_elt(env, 22); // aex_mult
    v_114 = (*qfn2(fn))(fn, v_114, v_113);
    }
    env = stack[-5];
    v_113 = stack[-4];
    {   LispObject fn = basic_elt(env, 23); // aex_sturmchain
    v_113 = (*qfn3(fn))(fn, stack[0], v_114, v_113);
    }
    env = stack[-5];
    stack[-2] = v_113;
    stack[-1] = stack[-2];
    stack[0] = stack[-4];
    v_113 = stack[-3];
    {   LispObject fn = basic_elt(env, 24); // anu_iv
    v_113 = (*qfn1(fn))(fn, v_113);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 10); // iv_lb
    v_113 = (*qfn1(fn))(fn, v_113);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 25); // aex_stchsgnch1
    stack[0] = (*qfn3(fn))(fn, stack[-1], stack[0], v_113);
    }
    env = stack[-5];
    stack[-1] = stack[-2];
    stack[-2] = stack[-4];
    v_113 = stack[-3];
    {   LispObject fn = basic_elt(env, 24); // anu_iv
    v_113 = (*qfn1(fn))(fn, v_113);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 12); // iv_rb
    v_113 = (*qfn1(fn))(fn, v_113);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 25); // aex_stchsgnch1
    v_113 = (*qfn3(fn))(fn, stack[-1], stack[-2], v_113);
    }
    {
        LispObject v_120 = stack[0];
        return difference2(v_120, v_113);
    }
v_11:
    return onevalue(v_113);
}



// Code for containerom

static LispObject CC_containerom(LispObject env,
                         LispObject v_2)
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
// Binding name
// FLUIDBIND: reloadenv=4 litvec-offset=1 saveloc=0
{   bind_fluid_stack bind_fluid_var(-4, 1, 0);
    setvalue(basic_elt(env, 1), nil); // name
    v_97 = stack[-2];
    if (!car_legal(v_97)) v_97 = cdrerror(v_97); else
    v_97 = cdr(v_97);
    if (!car_legal(v_97)) v_97 = carerror(v_97); else
    v_97 = car(v_97);
    stack[-1] = v_97;
    v_97 = stack[-2];
    if (!car_legal(v_97)) v_97 = carerror(v_97); else
    v_97 = car(v_97);
    setvalue(basic_elt(env, 1), v_97); // name
    v_97 = basic_elt(env, 2); // "<OMA>"
    {   LispObject fn = basic_elt(env, 14); // printout
    v_97 = (*qfn1(fn))(fn, v_97);
    }
    env = stack[-4];
    v_97 = lisp_true;
    {   LispObject fn = basic_elt(env, 15); // indent!*
    v_97 = (*qfn1(fn))(fn, v_97);
    }
    env = stack[-4];
    v_98 = qvalue(basic_elt(env, 1)); // name
    v_97 = basic_elt(env, 3); // vectorml
    if (v_98 == v_97) goto v_21;
    else goto v_22;
v_21:
    v_97 = basic_elt(env, 4); // vector
    setvalue(basic_elt(env, 1), v_97); // name
    goto v_20;
v_22:
v_20:
    v_98 = qvalue(basic_elt(env, 1)); // name
    v_97 = qvalue(basic_elt(env, 5)); // valid_om!*
    v_97 = Lassoc(nil, v_98, v_97);
    if (!car_legal(v_97)) v_97 = cdrerror(v_97); else
    v_97 = cdr(v_97);
    if (!car_legal(v_97)) v_97 = carerror(v_97); else
    v_97 = car(v_97);
    stack[-3] = v_97;
    v_97 = stack[-2];
    if (!car_legal(v_97)) v_98 = carerror(v_97); else
    v_98 = car(v_97);
    v_97 = basic_elt(env, 6); // set
    if (v_98 == v_97) goto v_37;
    else goto v_38;
v_37:
    v_97 = stack[-1];
    v_97 = Lconsp(nil, v_97);
    env = stack[-4];
    goto v_36;
v_38:
    v_97 = nil;
    goto v_36;
    v_97 = nil;
v_36:
    if (v_97 == nil) goto v_34;
    v_97 = stack[-1];
    if (!car_legal(v_97)) v_97 = carerror(v_97); else
    v_97 = car(v_97);
    if (!car_legal(v_97)) v_97 = cdrerror(v_97); else
    v_97 = cdr(v_97);
    if (!car_legal(v_97)) v_97 = carerror(v_97); else
    v_97 = car(v_97);
    v_98 = Lintern(nil, v_97);
    env = stack[-4];
    v_97 = basic_elt(env, 7); // multiset
    if (v_98 == v_97) goto v_49;
    else goto v_50;
v_49:
    v_97 = basic_elt(env, 8); // multiset1
    stack[-3] = v_97;
    goto v_48;
v_50:
v_48:
    goto v_32;
v_34:
v_32:
    v_97 = stack[-2];
    if (!car_legal(v_97)) v_98 = carerror(v_97); else
    v_98 = car(v_97);
    v_97 = basic_elt(env, 3); // vectorml
    if (v_98 == v_97) goto v_61;
    else goto v_62;
v_61:
    v_97 = basic_elt(env, 9); // "vector"
    setvalue(basic_elt(env, 1), v_97); // name
    goto v_60;
v_62:
v_60:
    v_97 = stack[-2];
    if (!car_legal(v_97)) v_98 = carerror(v_97); else
    v_98 = car(v_97);
    v_97 = basic_elt(env, 3); // vectorml
    if (v_98 == v_97) goto v_69;
    else goto v_70;
v_69:
    v_98 = basic_elt(env, 4); // vector
    v_97 = stack[-2];
    if (!car_legal(v_97)) v_97 = cdrerror(v_97); else
    v_97 = cdr(v_97);
    v_97 = cons(v_98, v_97);
    env = stack[-4];
    stack[-2] = v_97;
    goto v_68;
v_70:
v_68:
    v_97 = basic_elt(env, 10); // "<OMS cd="""
    {   LispObject fn = basic_elt(env, 14); // printout
    v_97 = (*qfn1(fn))(fn, v_97);
    }
    env = stack[-4];
    v_97 = stack[-3];
    v_97 = Lprinc(nil, v_97);
    env = stack[-4];
    v_97 = basic_elt(env, 11); // """ name="""
    v_97 = Lprinc(nil, v_97);
    env = stack[-4];
    v_97 = qvalue(basic_elt(env, 1)); // name
    v_97 = Lprinc(nil, v_97);
    env = stack[-4];
    v_97 = basic_elt(env, 12); // """/>"
    v_97 = Lprinc(nil, v_97);
    env = stack[-4];
    v_97 = stack[-2];
    if (!car_legal(v_97)) v_97 = cdrerror(v_97); else
    v_97 = cdr(v_97);
    if (!car_legal(v_97)) v_97 = cdrerror(v_97); else
    v_97 = cdr(v_97);
    {   LispObject fn = basic_elt(env, 16); // multiom
    v_97 = (*qfn1(fn))(fn, v_97);
    }
    env = stack[-4];
    v_97 = nil;
    {   LispObject fn = basic_elt(env, 15); // indent!*
    v_97 = (*qfn1(fn))(fn, v_97);
    }
    env = stack[-4];
    v_97 = basic_elt(env, 13); // "</OMA>"
    {   LispObject fn = basic_elt(env, 14); // printout
    v_97 = (*qfn1(fn))(fn, v_97);
    }
    v_97 = nil;
    ;}  // end of a binding scope
    return onevalue(v_97);
}



// Code for mkexdf

static LispObject CC_mkexdf(LispObject env,
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
    v_22 = v_2;
// end of prologue
    v_23 = basic_elt(env, 1); // d
    v_22 = list2(v_23, v_22);
    env = stack[-1];
    stack[0] = v_22;
    {   LispObject fn = basic_elt(env, 2); // opmtch
    v_22 = (*qfn1(fn))(fn, v_22);
    }
    env = stack[-1];
    v_23 = v_22;
    if (v_22 == nil) goto v_11;
    v_22 = v_23;
    {
        LispObject fn = basic_elt(env, 3); // partitop
        return (*qfn1(fn))(fn, v_22);
    }
v_11:
    v_22 = stack[0];
    {
        LispObject fn = basic_elt(env, 4); // mkupf
        return (*qfn1(fn))(fn, v_22);
    }
    v_22 = nil;
    return onevalue(v_22);
}



// Code for z!-roads

static LispObject CC_zKroads(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_59, v_60, v_61;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_60 = v_2;
// end of prologue
    v_61 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_59 = v_60;
    if (!car_legal(v_59)) v_59 = carerror(v_59); else
    v_59 = car(v_59);
    if (!car_legal(v_59)) v_59 = carerror(v_59); else
    v_59 = car(v_59);
    if (!car_legal(v_59)) v_59 = cdrerror(v_59); else
    v_59 = cdr(v_59);
    if (v_61 == v_59) goto v_6;
    else goto v_7;
v_6:
    v_59 = v_60;
    if (!car_legal(v_59)) v_59 = carerror(v_59); else
    v_59 = car(v_59);
    if (!car_legal(v_59)) v_59 = carerror(v_59); else
    v_59 = car(v_59);
    goto v_5;
v_7:
    v_61 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_59 = v_60;
    if (!car_legal(v_59)) v_59 = carerror(v_59); else
    v_59 = car(v_59);
    if (!car_legal(v_59)) v_59 = cdrerror(v_59); else
    v_59 = cdr(v_59);
    if (!car_legal(v_59)) v_59 = carerror(v_59); else
    v_59 = car(v_59);
    if (!car_legal(v_59)) v_59 = cdrerror(v_59); else
    v_59 = cdr(v_59);
    if (v_61 == v_59) goto v_16;
    else goto v_17;
v_16:
    v_59 = v_60;
    if (!car_legal(v_59)) v_59 = carerror(v_59); else
    v_59 = car(v_59);
    if (!car_legal(v_59)) v_59 = cdrerror(v_59); else
    v_59 = cdr(v_59);
    if (!car_legal(v_59)) v_59 = carerror(v_59); else
    v_59 = car(v_59);
    goto v_5;
v_17:
    v_61 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_59 = v_60;
    if (!car_legal(v_59)) v_59 = carerror(v_59); else
    v_59 = car(v_59);
    if (!car_legal(v_59)) v_59 = cdrerror(v_59); else
    v_59 = cdr(v_59);
    if (!car_legal(v_59)) v_59 = cdrerror(v_59); else
    v_59 = cdr(v_59);
    if (!car_legal(v_59)) v_59 = carerror(v_59); else
    v_59 = car(v_59);
    if (!car_legal(v_59)) v_59 = cdrerror(v_59); else
    v_59 = cdr(v_59);
    if (v_61 == v_59) goto v_28;
    else goto v_29;
v_28:
    v_59 = v_60;
    if (!car_legal(v_59)) v_59 = carerror(v_59); else
    v_59 = car(v_59);
    if (!car_legal(v_59)) v_59 = cdrerror(v_59); else
    v_59 = cdr(v_59);
    if (!car_legal(v_59)) v_59 = cdrerror(v_59); else
    v_59 = cdr(v_59);
    if (!car_legal(v_59)) v_59 = carerror(v_59); else
    v_59 = car(v_59);
    goto v_5;
v_29:
    v_59 = nil;
    goto v_5;
    v_59 = nil;
v_5:
    v_61 = v_59;
    v_59 = v_61;
    if (v_59 == nil) goto v_48;
    else goto v_49;
v_48:
    v_59 = nil;
    goto v_47;
v_49:
    v_59 = v_61;
    if (!car_legal(v_59)) v_59 = carerror(v_59); else
    v_59 = car(v_59);
    if (!car_legal(v_60)) v_60 = cdrerror(v_60); else
    v_60 = cdr(v_60);
    return cons(v_59, v_60);
    v_59 = nil;
v_47:
    return onevalue(v_59);
}



// Code for msolve!-psys1

static LispObject CC_msolveKpsys1(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_101, v_102;
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
    v_101 = nil;
    v_101 = ncons(v_101);
    env = stack[-7];
    v_102 = v_101;
    v_101 = stack[0];
    stack[-4] = v_101;
v_16:
    v_101 = stack[-4];
    if (v_101 == nil) goto v_20;
    else goto v_21;
v_20:
    goto v_15;
v_21:
    v_101 = stack[-4];
    if (!car_legal(v_101)) v_101 = carerror(v_101); else
    v_101 = car(v_101);
    stack[-3] = v_101;
    v_101 = nil;
    stack[-6] = v_101;
    v_101 = v_102;
    stack[-2] = v_101;
v_31:
    v_101 = stack[-2];
    if (v_101 == nil) goto v_35;
    else goto v_36;
v_35:
    goto v_30;
v_36:
    v_101 = stack[-2];
    if (!car_legal(v_101)) v_101 = carerror(v_101); else
    v_101 = car(v_101);
    stack[-1] = v_101;
    v_102 = stack[-3];
    v_101 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // subf
    v_101 = (*qfn2(fn))(fn, v_102, v_101);
    }
    env = stack[-7];
    if (!car_legal(v_101)) v_101 = carerror(v_101); else
    v_101 = car(v_101);
    {   LispObject fn = basic_elt(env, 2); // moduntag
    v_101 = (*qfn1(fn))(fn, v_101);
    }
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 3); // general!-reduce!-mod!-p
    v_101 = (*qfn1(fn))(fn, v_101);
    }
    env = stack[-7];
    v_102 = v_101;
    v_101 = v_102;
    if (v_101 == nil) goto v_50;
    else goto v_51;
v_50:
    v_102 = stack[-1];
    v_101 = stack[-6];
    v_101 = cons(v_102, v_101);
    env = stack[-7];
    stack[-6] = v_101;
    goto v_49;
v_51:
    v_101 = v_102;
    if (!consp(v_101)) goto v_60;
    else goto v_61;
v_60:
    v_101 = lisp_true;
    goto v_59;
v_61:
    v_101 = v_102;
    if (!car_legal(v_101)) v_101 = carerror(v_101); else
    v_101 = car(v_101);
    v_101 = (consp(v_101) ? nil : lisp_true);
    goto v_59;
    v_101 = nil;
v_59:
    if (v_101 == nil) goto v_57;
    goto v_49;
v_57:
    v_101 = stack[-5];
    {   LispObject fn = basic_elt(env, 4); // msolve!-poly
    v_101 = (*qfn2(fn))(fn, v_102, v_101);
    }
    env = stack[-7];
    stack[0] = v_101;
v_75:
    v_101 = stack[0];
    if (v_101 == nil) goto v_81;
    else goto v_82;
v_81:
    goto v_74;
v_82:
    v_101 = stack[0];
    if (!car_legal(v_101)) v_101 = carerror(v_101); else
    v_101 = car(v_101);
    v_102 = stack[-1];
    v_102 = Lappend_2(nil, v_102, v_101);
    env = stack[-7];
    v_101 = stack[-6];
    v_101 = cons(v_102, v_101);
    env = stack[-7];
    stack[-6] = v_101;
    v_101 = stack[0];
    if (!car_legal(v_101)) v_101 = cdrerror(v_101); else
    v_101 = cdr(v_101);
    stack[0] = v_101;
    goto v_75;
v_74:
    goto v_49;
v_49:
    v_101 = stack[-2];
    if (!car_legal(v_101)) v_101 = cdrerror(v_101); else
    v_101 = cdr(v_101);
    stack[-2] = v_101;
    goto v_31;
v_30:
    v_101 = stack[-6];
    v_102 = v_101;
    v_101 = stack[-4];
    if (!car_legal(v_101)) v_101 = cdrerror(v_101); else
    v_101 = cdr(v_101);
    stack[-4] = v_101;
    goto v_16;
v_15:
    v_101 = v_102;
    return onevalue(v_101);
}



// Code for ratlessp

static LispObject CC_ratlessp(LispObject env,
                         LispObject v_2, LispObject v_3)
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
        push(v_2,v_3);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_3,v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_11 = v_3;
    v_12 = v_2;
// end of prologue
    {   LispObject fn = basic_elt(env, 1); // ratdif
    v_11 = (*qfn2(fn))(fn, v_12, v_11);
    }
    if (!car_legal(v_11)) v_12 = carerror(v_11); else
    v_12 = car(v_11);
    v_11 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
        return Llessp_2(nil, v_12, v_11);
}



// Code for lastcar

static LispObject CC_lastcar(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_23, v_24;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_23 = v_2;
// end of prologue
v_6:
    v_24 = v_23;
    if (v_24 == nil) goto v_9;
    else goto v_10;
v_9:
    v_23 = nil;
    goto v_5;
v_10:
    v_24 = v_23;
    if (!car_legal(v_24)) v_24 = cdrerror(v_24); else
    v_24 = cdr(v_24);
    if (v_24 == nil) goto v_13;
    else goto v_14;
v_13:
    if (!car_legal(v_23)) v_23 = carerror(v_23); else
    v_23 = car(v_23);
    goto v_5;
v_14:
    if (!car_legal(v_23)) v_23 = cdrerror(v_23); else
    v_23 = cdr(v_23);
    goto v_6;
    v_23 = nil;
v_5:
    return onevalue(v_23);
}



// Code for aex_divposcnt

static LispObject CC_aex_divposcnt(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_55, v_56;
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
    v_55 = v_3;
    stack[-2] = v_2;
// end of prologue
    v_55 = stack[-2];
    {   LispObject fn = basic_elt(env, 1); // aex_ex
    v_55 = (*qfn1(fn))(fn, v_55);
    }
    env = stack[-4];
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    stack[0] = v_55;
    v_55 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // sfto_ucontentf
    v_55 = (*qfn1(fn))(fn, v_55);
    }
    env = stack[-4];
    stack[-1] = v_55;
    v_56 = stack[0];
    v_55 = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // quotfx
    v_55 = (*qfn2(fn))(fn, v_56, v_55);
    }
    env = stack[-4];
    stack[0] = v_55;
    v_56 = stack[-1];
    v_55 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-3] = cons(v_56, v_55);
    env = stack[-4];
    v_55 = stack[-1];
    {   LispObject fn = basic_elt(env, 4); // kernels
    stack[-1] = (*qfn1(fn))(fn, v_55);
    }
    env = stack[-4];
    v_55 = stack[-2];
    {   LispObject fn = basic_elt(env, 5); // aex_ctx
    v_55 = (*qfn1(fn))(fn, v_55);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 6); // ctx_filter
    v_55 = (*qfn2(fn))(fn, stack[-1], v_55);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 7); // aex_mk
    v_55 = (*qfn2(fn))(fn, stack[-3], v_55);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 8); // aex_sgn
    v_55 = (*qfn1(fn))(fn, v_55);
    }
    env = stack[-4];
    stack[-3] = v_55;
    goto v_34;
    goto v_32;
v_34:
v_32:
    v_56 = stack[0];
    v_55 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-1] = cons(v_56, v_55);
    env = stack[-4];
    v_55 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // kernels
    stack[0] = (*qfn1(fn))(fn, v_55);
    }
    env = stack[-4];
    v_55 = stack[-2];
    {   LispObject fn = basic_elt(env, 5); // aex_ctx
    v_55 = (*qfn1(fn))(fn, v_55);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 6); // ctx_filter
    v_55 = (*qfn2(fn))(fn, stack[0], v_55);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 7); // aex_mk
    v_55 = (*qfn2(fn))(fn, stack[-1], v_55);
    }
    env = stack[-4];
    stack[0] = v_55;
    v_56 = stack[-3];
    v_55 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_55 = Leqn_2(nil, v_56, v_55);
    env = stack[-4];
    if (v_55 == nil) goto v_48;
    v_55 = stack[0];
    goto v_11;
v_48:
    v_55 = stack[0];
    {
        LispObject fn = basic_elt(env, 9); // aex_neg
        return (*qfn1(fn))(fn, v_55);
    }
v_11:
    return onevalue(v_55);
}



// Code for settcollectnonmultiprolongations

static LispObject CC_settcollectnonmultiprolongations(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_80, v_81;
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
    v_80 = qvalue(basic_elt(env, 1)); // fluidbibasissett
    if (!car_legal(v_80)) v_80 = carerror(v_80); else
    v_80 = car(v_80);
    if (v_80 == nil) goto v_7;
    v_80 = qvalue(basic_elt(env, 1)); // fluidbibasissett
    if (!car_legal(v_80)) v_80 = carerror(v_80); else
    v_80 = car(v_80);
    stack[-5] = v_80;
    v_81 = stack[-5];
    v_80 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_80 = Lgetv(nil, v_81, v_80);
    env = stack[-6];
    if (!car_legal(v_80)) v_80 = carerror(v_80); else
    v_80 = car(v_80);
    {   LispObject fn = basic_elt(env, 3); // monomgetfirstmultivar
    v_80 = (*qfn1(fn))(fn, v_80);
    }
    env = stack[-6];
    v_80 = static_cast<LispObject>(static_cast<std::intptr_t>(v_80) - 0x10);
    stack[-2] = v_80;
    v_80 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-1] = v_80;
v_28:
    v_81 = stack[-2];
    v_80 = stack[-1];
    v_80 = difference2(v_81, v_80);
    env = stack[-6];
    v_80 = Lminusp(nil, v_80);
    env = stack[-6];
    if (v_80 == nil) goto v_33;
    goto v_27;
v_33:
    v_81 = stack[-5];
    v_80 = stack[-1];
    {   LispObject fn = basic_elt(env, 4); // tripleisprolongedby
    v_80 = (*qfn2(fn))(fn, v_81, v_80);
    }
    env = stack[-6];
    if (v_80 == nil) goto v_41;
    else goto v_42;
v_41:
    v_81 = stack[-5];
    v_80 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[0] = Lgetv(nil, v_81, v_80);
    env = stack[-6];
    v_81 = qvalue(basic_elt(env, 2)); // fluidbibasissinglevariablemonomialss
    v_80 = stack[-1];
    v_80 = Lgetv(nil, v_81, v_80);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 5); // polynommultiplybymonom
    v_80 = (*qfn2(fn))(fn, stack[0], v_80);
    }
    env = stack[-6];
    stack[0] = v_80;
    v_81 = stack[-5];
    v_80 = stack[-1];
    {   LispObject fn = basic_elt(env, 6); // triplesetprolongedby
    v_80 = (*qfn2(fn))(fn, v_81, v_80);
    }
    env = stack[-6];
    v_80 = stack[0];
    if (!car_legal(v_80)) v_80 = carerror(v_80); else
    v_80 = car(v_80);
    if (v_80 == nil) goto v_59;
    v_81 = stack[-5];
    v_80 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_80 = Lgetv(nil, v_81, v_80);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 7); // createtriplewithancestor
    v_80 = (*qfn2(fn))(fn, stack[0], v_80);
    }
    env = stack[-6];
    stack[-3] = v_80;
    stack[0] = stack[-3];
    v_81 = stack[-5];
    v_80 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_80 = Lgetv(nil, v_81, v_80);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 8); // triplesetprolongset
    v_80 = (*qfn2(fn))(fn, stack[0], v_80);
    }
    env = stack[-6];
    v_81 = stack[-4];
    v_80 = stack[-3];
    {   LispObject fn = basic_elt(env, 9); // sortedtriplelistinsert
    v_80 = (*qfn2(fn))(fn, v_81, v_80);
    }
    env = stack[-6];
    goto v_57;
v_59:
v_57:
    goto v_40;
v_42:
v_40:
    v_80 = stack[-1];
    v_80 = add1(v_80);
    env = stack[-6];
    stack[-1] = v_80;
    goto v_28;
v_27:
    v_80 = nil;
    goto v_5;
v_7:
    v_80 = nil;
v_5:
    return onevalue(v_80);
}



// Code for processpartitie1list1

static LispObject CC_processpartitie1list1(LispObject env,
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
    real_push(nil, nil, nil, nil, nil);
    real_push(nil);
    stack_popper stack_popper_var(7);
// copy arguments values to proper place
    v_30 = v_3;
    v_31 = v_2;
// end of prologue
v_8:
    v_32 = v_31;
    if (v_32 == nil) goto v_11;
    else goto v_12;
v_11:
    goto v_7;
v_12:
    v_32 = v_31;
    if (!car_legal(v_32)) v_32 = cdrerror(v_32); else
    v_32 = cdr(v_32);
    stack[-5] = v_32;
    if (!car_legal(v_31)) stack[-4] = carerror(v_31); else
    stack[-4] = car(v_31);
    stack[-3] = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-2] = nil;
    stack[-1] = nil;
    stack[0] = nil;
    v_30 = ncons(v_30);
    env = stack[-6];
    v_30 = acons(stack[-1], stack[0], v_30);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 1); // processpartitie1
    v_30 = (*qfn4up(fn))(fn, stack[-4], stack[-3], stack[-2], v_30);
    }
    env = stack[-6];
    v_31 = stack[-5];
    goto v_8;
    v_30 = nil;
v_7:
    return onevalue(v_30);
}



// Code for mk!+outer!+list

static LispObject CC_mkLouterLlist(LispObject env,
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
    v_10 = basic_elt(env, 1); // list
    v_11 = ncons(v_10);
    v_10 = stack[0];
        return Lappend_2(nil, v_11, v_10);
    return onevalue(v_10);
}



// Code for repr_ldeg

static LispObject CC_repr_ldeg(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_10;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_10 = v_2;
// end of prologue
    if (!car_legal(v_10)) v_10 = cdrerror(v_10); else
    v_10 = cdr(v_10);
    if (!car_legal(v_10)) v_10 = cdrerror(v_10); else
    v_10 = cdr(v_10);
    if (!car_legal(v_10)) v_10 = cdrerror(v_10); else
    v_10 = cdr(v_10);
    if (!car_legal(v_10)) v_10 = cdrerror(v_10); else
    v_10 = cdr(v_10);
    if (!car_legal(v_10)) v_10 = carerror(v_10); else
    v_10 = car(v_10);
    return onevalue(v_10);
}



// Code for dip_f2dip2

static LispObject CC_dip_f2dip2(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_34, v_35, v_36, v_37, v_38, v_39;
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
    stack_popper stack_popper_var(6);
// copy arguments values to proper place
    stack[-3] = v_6;
    v_36 = v_5;
    v_37 = v_4;
    v_38 = v_3;
    v_39 = v_2;
// end of prologue
    v_35 = v_39;
    v_34 = qvalue(basic_elt(env, 1)); // dip_vars!*
    v_34 = Lmemq(nil, v_35, v_34);
    if (v_34 == nil) goto v_11;
    stack[-4] = v_37;
    stack[-2] = v_36;
    stack[-1] = v_39;
    stack[0] = v_38;
    v_34 = qvalue(basic_elt(env, 1)); // dip_vars!*
    v_34 = ncons(v_34);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 2); // ev_insert
    v_35 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_34);
    }
    env = stack[-5];
    v_34 = stack[-3];
    {
        LispObject v_45 = stack[-4];
        LispObject fn = basic_elt(env, 3); // dip_f2dip1
        return (*qfn3(fn))(fn, v_45, v_35, v_34);
    }
v_11:
    stack[-1] = v_37;
    stack[0] = v_36;
    stack[-2] = stack[-3];
    v_34 = v_39;
    v_35 = v_38;
    {   LispObject fn = basic_elt(env, 4); // bc_pmon
    v_34 = (*qfn2(fn))(fn, v_34, v_35);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 5); // bc_prod
    v_34 = (*qfn2(fn))(fn, stack[-2], v_34);
    }
    env = stack[-5];
    {
        LispObject v_46 = stack[-1];
        LispObject v_47 = stack[0];
        LispObject fn = basic_elt(env, 3); // dip_f2dip1
        return (*qfn3(fn))(fn, v_46, v_47, v_34);
    }
    v_34 = nil;
    return onevalue(v_34);
}



// Code for setfuncsnaryrd

static LispObject CC_setfuncsnaryrd(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil);
    stack_popper stack_popper_var(2);
// end of prologue
    {   LispObject fn = basic_elt(env, 3); // mathml
    v_45 = (*qfn0(fn))(fn);
    }
    env = stack[-1];
    stack[0] = v_45;
    v_45 = stack[0];
    v_45 = Lconsp(nil, v_45);
    env = stack[-1];
    if (v_45 == nil) goto v_10;
    v_45 = stack[0];
    if (!car_legal(v_45)) v_45 = cdrerror(v_45); else
    v_45 = cdr(v_45);
    if (!car_legal(v_45)) v_45 = carerror(v_45); else
    v_45 = car(v_45);
    if (v_45 == nil) goto v_16;
    v_45 = stack[0];
    if (!car_legal(v_45)) v_45 = cdrerror(v_45); else
    v_45 = cdr(v_45);
    if (!car_legal(v_45)) v_45 = carerror(v_45); else
    v_45 = car(v_45);
    if (!car_legal(v_45)) v_45 = carerror(v_45); else
    v_45 = car(v_45);
    if (!car_legal(v_45)) v_45 = cdrerror(v_45); else
    v_45 = cdr(v_45);
    if (!car_legal(v_45)) v_45 = carerror(v_45); else
    v_45 = car(v_45);
    v_46 = Lintern(nil, v_45);
    env = stack[-1];
    v_45 = basic_elt(env, 1); // multiset
    if (v_46 == v_45) goto v_22;
    else goto v_23;
v_22:
    v_45 = basic_elt(env, 1); // multiset
    setvalue(basic_elt(env, 2), v_45); // mmlatts
    goto v_21;
v_23:
v_21:
    goto v_14;
v_16:
v_14:
    goto v_8;
v_10:
v_8:
    v_45 = stack[0];
    if (v_45 == nil) goto v_36;
    else goto v_37;
v_36:
    v_45 = nil;
    goto v_35;
v_37:
    {   LispObject fn = basic_elt(env, 0); // setfuncsnaryrd
    v_45 = (*qfn0(fn))(fn);
    }
    {
        LispObject v_48 = stack[0];
        return cons(v_48, v_45);
    }
    v_45 = nil;
v_35:
    return onevalue(v_45);
}



// Code for sqprint

static LispObject CC_sqprint(LispObject env,
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
// Binding !*prin!#
// FLUIDBIND: reloadenv=3 litvec-offset=1 saveloc=0
{   bind_fluid_stack bind_fluid_var(-3, 1, 0);
    setvalue(basic_elt(env, 1), nil); // !*prin!#
    v_115 = lisp_true;
    setvalue(basic_elt(env, 1), v_115); // !*prin!#
    v_115 = qvalue(basic_elt(env, 2)); // orig!*
    stack[-2] = v_115;
    v_115 = qvalue(basic_elt(env, 3)); // !*nat
    if (v_115 == nil) goto v_15;
    v_116 = qvalue(basic_elt(env, 4)); // posn!*
    v_115 = static_cast<LispObject>(320)+TAG_FIXNUM; // 20
    v_115 = static_cast<LispObject>(lessp2(v_116, v_115));
    v_115 = v_115 ? lisp_true : nil;
    env = stack[-3];
    if (v_115 == nil) goto v_15;
    v_115 = qvalue(basic_elt(env, 4)); // posn!*
    setvalue(basic_elt(env, 2), v_115); // orig!*
    goto v_13;
v_15:
v_13:
    v_115 = qvalue(basic_elt(env, 5)); // !*pri
    if (v_115 == nil) goto v_27;
    else goto v_25;
v_27:
    v_115 = qvalue(basic_elt(env, 6)); // wtl!*
    if (v_115 == nil) goto v_29;
    else goto v_25;
v_29:
    goto v_26;
v_25:
    v_115 = stack[-1];
    {   LispObject fn = basic_elt(env, 8); // sqhorner!*
    v_115 = (*qfn1(fn))(fn, v_115);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 9); // prepsq!*
    v_115 = (*qfn1(fn))(fn, v_115);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 10); // prepreform
    v_115 = (*qfn1(fn))(fn, v_115);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 11); // maprin
    v_115 = (*qfn1(fn))(fn, v_115);
    }
    env = stack[-3];
    goto v_24;
v_26:
    v_115 = stack[-1];
    if (!car_legal(v_115)) v_116 = cdrerror(v_115); else
    v_116 = cdr(v_115);
    v_115 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_116 == v_115) goto v_37;
    v_115 = stack[-1];
    if (!car_legal(v_115)) v_115 = carerror(v_115); else
    v_115 = car(v_115);
    if (!consp(v_115)) goto v_47;
    else goto v_48;
v_47:
    v_115 = lisp_true;
    goto v_46;
v_48:
    v_115 = stack[-1];
    if (!car_legal(v_115)) v_115 = carerror(v_115); else
    v_115 = car(v_115);
    if (!car_legal(v_115)) v_115 = carerror(v_115); else
    v_115 = car(v_115);
    v_115 = (consp(v_115) ? nil : lisp_true);
    goto v_46;
    v_115 = nil;
v_46:
    if (v_115 == nil) goto v_43;
    else goto v_44;
v_43:
    v_115 = stack[-1];
    if (!car_legal(v_115)) v_115 = carerror(v_115); else
    v_115 = car(v_115);
    if (!car_legal(v_115)) v_115 = cdrerror(v_115); else
    v_115 = cdr(v_115);
    goto v_42;
v_44:
    v_115 = nil;
    goto v_42;
    v_115 = nil;
v_42:
    v_116 = stack[-1];
    if (!car_legal(v_116)) v_117 = carerror(v_116); else
    v_117 = car(v_116);
    v_116 = v_115;
    v_115 = nil;
    {   LispObject fn = basic_elt(env, 12); // xprinf
    v_115 = (*qfn3(fn))(fn, v_117, v_116, v_115);
    }
    env = stack[-3];
    v_115 = basic_elt(env, 7); // " / "
    {   LispObject fn = basic_elt(env, 13); // prin2!*
    v_115 = (*qfn1(fn))(fn, v_115);
    }
    env = stack[-3];
    v_115 = stack[-1];
    if (!car_legal(v_115)) v_115 = cdrerror(v_115); else
    v_115 = cdr(v_115);
    if (!consp(v_115)) goto v_77;
    else goto v_78;
v_77:
    v_115 = lisp_true;
    goto v_76;
v_78:
    v_115 = stack[-1];
    if (!car_legal(v_115)) v_115 = cdrerror(v_115); else
    v_115 = cdr(v_115);
    if (!car_legal(v_115)) v_115 = carerror(v_115); else
    v_115 = car(v_115);
    v_115 = (consp(v_115) ? nil : lisp_true);
    goto v_76;
    v_115 = nil;
v_76:
    if (v_115 == nil) goto v_73;
    else goto v_74;
v_73:
    v_115 = stack[-1];
    if (!car_legal(v_115)) v_115 = cdrerror(v_115); else
    v_115 = cdr(v_115);
    if (!car_legal(v_115)) v_115 = cdrerror(v_115); else
    v_115 = cdr(v_115);
    if (v_115 == nil) goto v_90;
    else goto v_89;
v_90:
    v_115 = stack[-1];
    if (!car_legal(v_115)) v_115 = cdrerror(v_115); else
    v_115 = cdr(v_115);
    if (!car_legal(v_115)) v_115 = carerror(v_115); else
    v_115 = car(v_115);
    if (!car_legal(v_115)) v_116 = cdrerror(v_115); else
    v_116 = cdr(v_115);
    v_115 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_115 = Lneq_2(nil, v_116, v_115);
    env = stack[-3];
v_89:
    goto v_72;
v_74:
    v_115 = nil;
    goto v_72;
    v_115 = nil;
v_72:
    v_116 = stack[-1];
    if (!car_legal(v_116)) v_117 = cdrerror(v_116); else
    v_117 = cdr(v_116);
    v_116 = v_115;
    v_115 = nil;
    {   LispObject fn = basic_elt(env, 12); // xprinf
    v_115 = (*qfn3(fn))(fn, v_117, v_116, v_115);
    }
    env = stack[-3];
    goto v_24;
v_37:
    v_115 = stack[-1];
    if (!car_legal(v_115)) v_115 = carerror(v_115); else
    v_115 = car(v_115);
    {   LispObject fn = basic_elt(env, 14); // xprinf2
    v_115 = (*qfn1(fn))(fn, v_115);
    }
    env = stack[-3];
    goto v_24;
v_24:
    v_115 = stack[-2];
    setvalue(basic_elt(env, 2), v_115); // orig!*
    ;}  // end of a binding scope
    return onevalue(v_115);
}



// Code for red_tailreddriver

static LispObject CC_red_tailreddriver(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_53;
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
    v_53 = stack[-2];
    {   LispObject fn = basic_elt(env, 1); // bas_dpoly
    v_53 = (*qfn1(fn))(fn, v_53);
    }
    env = stack[-5];
    if (v_53 == nil) goto v_12;
    else goto v_13;
v_12:
    v_53 = lisp_true;
    goto v_11;
v_13:
    v_53 = stack[-2];
    {   LispObject fn = basic_elt(env, 1); // bas_dpoly
    v_53 = (*qfn1(fn))(fn, v_53);
    }
    env = stack[-5];
    if (!car_legal(v_53)) v_53 = cdrerror(v_53); else
    v_53 = cdr(v_53);
    if (v_53 == nil) goto v_21;
    else goto v_22;
v_21:
    v_53 = lisp_true;
    goto v_20;
v_22:
    v_53 = stack[-3];
    v_53 = (v_53 == nil ? lisp_true : nil);
    goto v_20;
    v_53 = nil;
v_20:
    goto v_11;
    v_53 = nil;
v_11:
    if (v_53 == nil) goto v_9;
    v_53 = stack[-2];
    goto v_7;
v_9:
v_38:
    v_53 = stack[-2];
    {   LispObject fn = basic_elt(env, 1); // bas_dpoly
    v_53 = (*qfn1(fn))(fn, v_53);
    }
    env = stack[-5];
    if (v_53 == nil) goto v_41;
    else goto v_42;
v_41:
    goto v_37;
v_42:
    stack[-4] = stack[-1];
    stack[0] = stack[-3];
    v_53 = stack[-2];
    {   LispObject fn = basic_elt(env, 2); // red!=hidelt
    v_53 = (*qfn1(fn))(fn, v_53);
    }
    env = stack[-5];
    v_53 = Lapply2(nil, stack[-4], stack[0], v_53);
    env = stack[-5];
    stack[-2] = v_53;
    goto v_38;
v_37:
    v_53 = stack[-2];
    {
        LispObject fn = basic_elt(env, 3); // red!=recover
        return (*qfn1(fn))(fn, v_53);
    }
    goto v_7;
    v_53 = nil;
v_7:
    return onevalue(v_53);
}



// Code for getavalue

static LispObject CC_getavalue(LispObject env,
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
    v_18 = v_2;
// end of prologue
    if (!symbolp(v_18)) v_18 = nil;
    else { v_18 = qfastgets(v_18);
           if (v_18 != nil) { v_18 = elt(v_18, 4); // avalue
#ifdef RECORD_GET
             if (v_18 != SPID_NOPROP)
                record_get(elt(fastget_names, 4), 1);
             else record_get(elt(fastget_names, 4), 0),
                v_18 = nil; }
           else record_get(elt(fastget_names, 4), 0); }
#else
             if (v_18 == SPID_NOPROP) v_18 = nil; }}
#endif
    v_19 = v_18;
    v_18 = v_19;
    if (v_18 == nil) goto v_10;
    v_18 = v_19;
    if (!car_legal(v_18)) v_18 = cdrerror(v_18); else
    v_18 = cdr(v_18);
    if (!car_legal(v_18)) v_18 = carerror(v_18); else
    v_18 = car(v_18);
    goto v_8;
v_10:
    v_18 = nil;
    goto v_8;
    v_18 = nil;
v_8:
    return onevalue(v_18);
}



// Code for reduce!-eival!-powers

static LispObject CC_reduceKeivalKpowers(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_46, v_47, v_48, v_49;
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
    v_48 = v_3;
    v_49 = v_2;
// end of prologue
    v_46 = v_48;
    if (!consp(v_46)) goto v_15;
    else goto v_16;
v_15:
    v_46 = lisp_true;
    goto v_14;
v_16:
    v_46 = v_48;
    if (!car_legal(v_46)) v_46 = carerror(v_46); else
    v_46 = car(v_46);
    v_46 = (consp(v_46) ? nil : lisp_true);
    goto v_14;
    v_46 = nil;
v_14:
    if (v_46 == nil) goto v_12;
    v_46 = lisp_true;
    goto v_10;
v_12:
    v_46 = v_48;
    if (!car_legal(v_46)) v_46 = carerror(v_46); else
    v_46 = car(v_46);
    if (!car_legal(v_46)) v_46 = carerror(v_46); else
    v_46 = car(v_46);
    if (!car_legal(v_46)) v_47 = carerror(v_46); else
    v_47 = car(v_46);
    v_46 = v_49;
    if (!car_legal(v_46)) v_46 = carerror(v_46); else
    v_46 = car(v_46);
    if (!car_legal(v_46)) v_46 = carerror(v_46); else
    v_46 = car(v_46);
    v_46 = (v_47 == v_46 ? lisp_true : nil);
    v_46 = (v_46 == nil ? lisp_true : nil);
    goto v_10;
    v_46 = nil;
v_10:
    if (v_46 == nil) goto v_8;
    v_47 = v_48;
    v_46 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_47, v_46);
v_8:
    stack[0] = v_49;
    v_47 = v_48;
    v_46 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_46 = cons(v_47, v_46);
    env = stack[-1];
    {
        LispObject v_51 = stack[0];
        LispObject fn = basic_elt(env, 1); // reduce!-eival!-powers1
        return (*qfn2(fn))(fn, v_51, v_46);
    }
    v_46 = nil;
    return onevalue(v_46);
}



// Code for find!-null!-space

static LispObject CC_findKnullKspace(LispObject env,
                         LispObject v_2, LispObject v_3)
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
// Binding null!-space!-basis
// FLUIDBIND: reloadenv=7 litvec-offset=1 saveloc=6
{   bind_fluid_stack bind_fluid_var(-7, 1, -6);
    setvalue(basic_elt(env, 1), nil); // null!-space!-basis
    v_36 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-3] = v_36;
v_12:
    v_37 = stack[-4];
    v_36 = stack[-3];
    v_36 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_37) - static_cast<std::uintptr_t>(v_36) + TAG_FIXNUM);
    v_36 = (static_cast<std::intptr_t>(v_36) < 0 ? lisp_true : nil);
    if (v_36 == nil) goto v_17;
    goto v_11;
v_17:
    stack[-2] = stack[-3];
    stack[-1] = qvalue(basic_elt(env, 1)); // null!-space!-basis
    stack[0] = stack[-5];
    v_36 = stack[-4];
    v_36 = ncons(v_36);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 2); // clear!-column
    v_36 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_36);
    }
    env = stack[-7];
    setvalue(basic_elt(env, 1), v_36); // null!-space!-basis
    v_36 = stack[-3];
    v_36 = static_cast<LispObject>(static_cast<std::intptr_t>(v_36) + 0x10);
    stack[-3] = v_36;
    goto v_12;
v_11:
    v_38 = qvalue(basic_elt(env, 1)); // null!-space!-basis
    v_37 = stack[-5];
    v_36 = stack[-4];
    {   LispObject fn = basic_elt(env, 3); // tidy!-up!-null!-vectors
    v_36 = (*qfn3(fn))(fn, v_38, v_37, v_36);
    }
    ;}  // end of a binding scope
    return onevalue(v_36);
}



// Code for set_parser

static LispObject CC_set_parser(LispObject env,
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
    if (!car_legal(v_34)) v_34 = carerror(v_34); else
    v_34 = car(v_34);
    {   LispObject fn = basic_elt(env, 8); // lex_restore_context
    v_34 = (*qfn1(fn))(fn, v_34);
    }
    env = stack[-1];
    v_34 = stack[0];
    if (!car_legal(v_34)) v_34 = cdrerror(v_34); else
    v_34 = cdr(v_34);
    stack[0] = v_34;
    if (!car_legal(v_34)) v_34 = carerror(v_34); else
    v_34 = car(v_34);
    setvalue(basic_elt(env, 1), v_34); // parser_action_table
    v_34 = stack[0];
    if (!car_legal(v_34)) v_34 = cdrerror(v_34); else
    v_34 = cdr(v_34);
    stack[0] = v_34;
    if (!car_legal(v_34)) v_34 = carerror(v_34); else
    v_34 = car(v_34);
    v_35 = v_34;
    v_34 = v_35;
    if (!car_legal(v_34)) v_34 = carerror(v_34); else
    v_34 = car(v_34);
    setvalue(basic_elt(env, 2), v_34); // reduction_fn
    v_34 = v_35;
    if (!car_legal(v_34)) v_34 = cdrerror(v_34); else
    v_34 = cdr(v_34);
    v_35 = v_34;
    if (!car_legal(v_34)) v_34 = carerror(v_34); else
    v_34 = car(v_34);
    setvalue(basic_elt(env, 3), v_34); // reduction_rhs_n
    v_34 = v_35;
    if (!car_legal(v_34)) v_34 = cdrerror(v_34); else
    v_34 = cdr(v_34);
    if (!car_legal(v_34)) v_34 = carerror(v_34); else
    v_34 = car(v_34);
    setvalue(basic_elt(env, 4), v_34); // reduction_lhs
    v_34 = stack[0];
    if (!car_legal(v_34)) v_34 = cdrerror(v_34); else
    v_34 = cdr(v_34);
    stack[0] = v_34;
    if (!car_legal(v_34)) v_34 = carerror(v_34); else
    v_34 = car(v_34);
    setvalue(basic_elt(env, 5), v_34); // parser_goto_table
    v_34 = stack[0];
    if (!car_legal(v_34)) v_34 = cdrerror(v_34); else
    v_34 = cdr(v_34);
    stack[0] = v_34;
    if (!car_legal(v_34)) v_34 = carerror(v_34); else
    v_34 = car(v_34);
    setvalue(basic_elt(env, 6), v_34); // nonterminal_codes
    v_34 = stack[0];
    if (!car_legal(v_34)) v_34 = cdrerror(v_34); else
    v_34 = cdr(v_34);
    if (!car_legal(v_34)) v_34 = carerror(v_34); else
    v_34 = car(v_34);
    setvalue(basic_elt(env, 7), v_34); // terminal_codes
    v_34 = nil;
    return onevalue(v_34);
}



// Code for sq_member

static LispObject CC_sq_member(LispObject env,
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
    if (!car_legal(v_16)) v_16 = carerror(v_16); else
    v_16 = car(v_16);
    {   LispObject fn = basic_elt(env, 1); // sf_member
    v_16 = (*qfn2(fn))(fn, v_17, v_16);
    }
    env = stack[-2];
    if (v_16 == nil) goto v_7;
    else goto v_6;
v_7:
    v_17 = stack[-1];
    v_16 = stack[0];
    if (!car_legal(v_16)) v_16 = cdrerror(v_16); else
    v_16 = cdr(v_16);
    {
        LispObject fn = basic_elt(env, 1); // sf_member
        return (*qfn2(fn))(fn, v_17, v_16);
    }
v_6:
    return onevalue(v_16);
}



// Code for orddf

static LispObject CC_orddf(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
v_7:
    v_51 = stack[-1];
    if (v_51 == nil) goto v_10;
    else goto v_11;
v_10:
    v_51 = stack[0];
    if (v_51 == nil) goto v_15;
    else goto v_16;
v_15:
    v_51 = basic_elt(env, 1); // "Orddf = case"
    {
        LispObject fn = basic_elt(env, 4); // interr
        return (*qfn1(fn))(fn, v_51);
    }
v_16:
    v_51 = basic_elt(env, 2); // "Orddf v longer than u"
    {
        LispObject fn = basic_elt(env, 4); // interr
        return (*qfn1(fn))(fn, v_51);
    }
    goto v_9;
v_11:
    v_51 = stack[0];
    if (v_51 == nil) goto v_24;
    else goto v_25;
v_24:
    v_51 = basic_elt(env, 3); // "Orddf u longer than v"
    {
        LispObject fn = basic_elt(env, 4); // interr
        return (*qfn1(fn))(fn, v_51);
    }
v_25:
    v_51 = stack[-1];
    if (!car_legal(v_51)) v_52 = carerror(v_51); else
    v_52 = car(v_51);
    v_51 = stack[0];
    if (!car_legal(v_51)) v_51 = carerror(v_51); else
    v_51 = car(v_51);
    {   LispObject fn = basic_elt(env, 5); // exptcompare
    v_51 = (*qfn2(fn))(fn, v_52, v_51);
    }
    env = stack[-2];
    if (v_51 == nil) goto v_30;
    v_51 = lisp_true;
    goto v_6;
v_30:
    v_51 = stack[0];
    if (!car_legal(v_51)) v_52 = carerror(v_51); else
    v_52 = car(v_51);
    v_51 = stack[-1];
    if (!car_legal(v_51)) v_51 = carerror(v_51); else
    v_51 = car(v_51);
    {   LispObject fn = basic_elt(env, 5); // exptcompare
    v_51 = (*qfn2(fn))(fn, v_52, v_51);
    }
    env = stack[-2];
    if (v_51 == nil) goto v_38;
    v_51 = nil;
    goto v_6;
v_38:
    v_51 = stack[-1];
    if (!car_legal(v_51)) v_51 = cdrerror(v_51); else
    v_51 = cdr(v_51);
    stack[-1] = v_51;
    v_51 = stack[0];
    if (!car_legal(v_51)) v_51 = cdrerror(v_51); else
    v_51 = cdr(v_51);
    stack[0] = v_51;
    goto v_7;
v_9:
    v_51 = nil;
v_6:
    return onevalue(v_51);
}



// Code for cl_susiupdknowl

static LispObject CC_cl_susiupdknowl(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_47, v_48, v_49;
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
    v_48 = v_4;
    stack[-4] = v_3;
    stack[-5] = v_2;
// end of prologue
    stack[-6] = nil;
v_12:
    v_47 = stack[-4];
    if (v_47 == nil) goto v_15;
    else goto v_16;
v_15:
    goto v_11;
v_16:
    v_47 = stack[-4];
    if (!car_legal(v_47)) v_47 = carerror(v_47); else
    v_47 = car(v_47);
    stack[-6] = v_47;
    v_47 = stack[-4];
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    stack[-4] = v_47;
    stack[-2] = stack[-5];
    stack[-1] = stack[-6];
    stack[0] = v_48;
    v_47 = stack[-3];
    v_47 = ncons(v_47);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 3); // cl_susiupdknowl1
    v_47 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_47);
    }
    env = stack[-7];
    v_48 = v_47;
    v_49 = v_48;
    v_47 = basic_elt(env, 1); // false
    if (v_49 == v_47) goto v_31;
    else goto v_32;
v_31:
    v_47 = nil;
    stack[-4] = v_47;
    v_47 = basic_elt(env, 2); // break
    stack[-6] = v_47;
    goto v_30;
v_32:
v_30:
    goto v_12;
v_11:
    v_49 = stack[-6];
    v_47 = basic_elt(env, 2); // break
    if (v_49 == v_47) goto v_39;
    else goto v_40;
v_39:
    v_47 = basic_elt(env, 1); // false
    goto v_9;
v_40:
    v_47 = v_48;
    goto v_9;
    v_47 = nil;
v_9:
    return onevalue(v_47);
}



// Code for gftimes

static LispObject CC_gftimes(LispObject env,
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
        LispObject fn = basic_elt(env, 1); // gfftimes
        return (*qfn2(fn))(fn, v_19, v_20);
    }
v_8:
    v_19 = v_21;
    {
        LispObject fn = basic_elt(env, 2); // gbftimes
        return (*qfn2(fn))(fn, v_19, v_20);
    }
    v_19 = nil;
    return onevalue(v_19);
}



// Code for calc_den_tar

static LispObject CC_calc_den_tar(LispObject env,
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
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_25 = v_3;
    v_26 = v_2;
// end of prologue
    {   LispObject fn = basic_elt(env, 1); // denlist
    v_25 = (*qfn2(fn))(fn, v_26, v_25);
    }
    env = stack[0];
    v_26 = v_25;
    v_25 = v_26;
    if (v_25 == nil) goto v_11;
    else goto v_12;
v_11:
    v_25 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_10;
v_12:
    v_25 = v_26;
    if (!car_legal(v_25)) v_25 = cdrerror(v_25); else
    v_25 = cdr(v_25);
    if (v_25 == nil) goto v_15;
    else goto v_16;
v_15:
    v_25 = v_26;
    if (!car_legal(v_25)) v_25 = carerror(v_25); else
    v_25 = car(v_25);
    goto v_10;
v_16:
    v_25 = v_26;
    {
        LispObject fn = basic_elt(env, 2); // constimes
        return (*qfn1(fn))(fn, v_25);
    }
    v_25 = nil;
v_10:
    return onevalue(v_25);
}



// Code for no!-side!-effectp

static LispObject CC_noKsideKeffectp(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_48 = stack[0];
    if (!consp(v_48)) goto v_6;
    else goto v_7;
v_6:
    v_48 = stack[0];
    v_48 = (is_number(v_48) ? lisp_true : nil);
    if (v_48 == nil) goto v_11;
    else goto v_10;
v_11:
    v_48 = stack[0];
    if (symbolp(v_48)) goto v_17;
    v_48 = nil;
    goto v_15;
v_17:
    v_48 = stack[0];
    v_48 = Lsymbol_specialp(nil, v_48);
    env = stack[-1];
    if (v_48 == nil) goto v_24;
    else goto v_23;
v_24:
    v_48 = stack[0];
    v_48 = Lsymbol_globalp(nil, v_48);
v_23:
    v_48 = (v_48 == nil ? lisp_true : nil);
    goto v_15;
    v_48 = nil;
v_15:
v_10:
    goto v_5;
v_7:
    v_48 = stack[0];
    if (!car_legal(v_48)) v_49 = carerror(v_48); else
    v_49 = car(v_48);
    v_48 = basic_elt(env, 1); // quote
    if (v_49 == v_48) goto v_30;
    else goto v_31;
v_30:
    v_48 = lisp_true;
    goto v_5;
v_31:
    v_48 = stack[0];
    if (!car_legal(v_48)) v_49 = carerror(v_48); else
    v_49 = car(v_48);
    v_48 = basic_elt(env, 2); // nosideeffects
    v_48 = Lflagp(nil, v_49, v_48);
    env = stack[-1];
    if (v_48 == nil) goto v_37;
    v_48 = stack[0];
    if (!car_legal(v_48)) v_48 = cdrerror(v_48); else
    v_48 = cdr(v_48);
    {
        LispObject fn = basic_elt(env, 3); // no!-side!-effect!-listp
        return (*qfn1(fn))(fn, v_48);
    }
v_37:
    v_48 = nil;
    goto v_5;
    v_48 = nil;
v_5:
    return onevalue(v_48);
}



// Code for atom_compare

static LispObject CC_atom_compare(LispObject env,
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
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_33 = v_3;
    v_34 = v_2;
// end of prologue
    v_32 = v_34;
    if (is_number(v_32)) goto v_7;
    else goto v_8;
v_7:
    v_32 = v_33;
    if (is_number(v_32)) goto v_13;
    v_32 = nil;
    goto v_11;
v_13:
    v_32 = v_34;
    v_32 = static_cast<LispObject>(lessp2(v_32, v_33));
    v_32 = v_32 ? lisp_true : nil;
    v_32 = (v_32 == nil ? lisp_true : nil);
    goto v_11;
    v_32 = nil;
v_11:
    goto v_6;
v_8:
    v_32 = v_33;
    if (symbolp(v_32)) goto v_22;
    else goto v_23;
v_22:
    v_32 = v_34;
        return Lorderp(nil, v_32, v_33);
v_23:
    v_32 = v_33;
    v_32 = (is_number(v_32) ? lisp_true : nil);
    goto v_6;
    v_32 = nil;
v_6:
    return onevalue(v_32);
}



// Code for lalr_expand_grammar

static LispObject CC_lalr_expand_grammar(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    v_34 = v_2;
// end of prologue
// Binding pending_rules!*
// FLUIDBIND: reloadenv=2 litvec-offset=1 saveloc=1
{   bind_fluid_stack bind_fluid_var(-2, 1, -1);
    setvalue(basic_elt(env, 1), nil); // pending_rules!*
    {   LispObject fn = basic_elt(env, 2); // lalr_check_grammar
    v_34 = (*qfn1(fn))(fn, v_34);
    }
    env = stack[-2];
    setvalue(basic_elt(env, 1), v_34); // pending_rules!*
    v_34 = nil;
    stack[0] = v_34;
v_16:
    v_34 = qvalue(basic_elt(env, 1)); // pending_rules!*
    if (v_34 == nil) goto v_19;
    else goto v_20;
v_19:
    goto v_15;
v_20:
    v_34 = qvalue(basic_elt(env, 1)); // pending_rules!*
    if (!car_legal(v_34)) v_34 = carerror(v_34); else
    v_34 = car(v_34);
    v_35 = v_34;
    v_34 = qvalue(basic_elt(env, 1)); // pending_rules!*
    if (!car_legal(v_34)) v_34 = cdrerror(v_34); else
    v_34 = cdr(v_34);
    setvalue(basic_elt(env, 1), v_34); // pending_rules!*
    v_34 = v_35;
    {   LispObject fn = basic_elt(env, 3); // expand_rule
    v_35 = (*qfn1(fn))(fn, v_34);
    }
    env = stack[-2];
    v_34 = stack[0];
    v_34 = cons(v_35, v_34);
    env = stack[-2];
    stack[0] = v_34;
    goto v_16;
v_15:
    v_34 = stack[0];
    v_34 = Lreverse(nil, v_34);
    ;}  // end of a binding scope
    return onevalue(v_34);
}



// Code for aex_stchsgnch1

static LispObject CC_aex_stchsgnch1(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    v_50 = v_2;
// end of prologue
    stack[-5] = v_50;
    v_50 = stack[-5];
    if (v_50 == nil) goto v_16;
    else goto v_17;
v_16:
    v_50 = nil;
    goto v_11;
v_17:
    v_50 = stack[-5];
    if (!car_legal(v_50)) v_50 = carerror(v_50); else
    v_50 = car(v_50);
    v_52 = v_50;
    v_51 = stack[-4];
    v_50 = stack[-3];
    {   LispObject fn = basic_elt(env, 1); // aex_subrat1
    v_50 = (*qfn3(fn))(fn, v_52, v_51, v_50);
    }
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 2); // aex_sgn
    v_50 = (*qfn1(fn))(fn, v_50);
    }
    env = stack[-6];
    v_50 = ncons(v_50);
    env = stack[-6];
    stack[-1] = v_50;
    stack[-2] = v_50;
v_12:
    v_50 = stack[-5];
    if (!car_legal(v_50)) v_50 = cdrerror(v_50); else
    v_50 = cdr(v_50);
    stack[-5] = v_50;
    v_50 = stack[-5];
    if (v_50 == nil) goto v_33;
    else goto v_34;
v_33:
    v_50 = stack[-2];
    goto v_11;
v_34:
    stack[0] = stack[-1];
    v_50 = stack[-5];
    if (!car_legal(v_50)) v_50 = carerror(v_50); else
    v_50 = car(v_50);
    v_52 = v_50;
    v_51 = stack[-4];
    v_50 = stack[-3];
    {   LispObject fn = basic_elt(env, 1); // aex_subrat1
    v_50 = (*qfn3(fn))(fn, v_52, v_51, v_50);
    }
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 2); // aex_sgn
    v_50 = (*qfn1(fn))(fn, v_50);
    }
    env = stack[-6];
    v_50 = ncons(v_50);
    env = stack[-6];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_50);
    v_50 = stack[-1];
    if (!car_legal(v_50)) v_50 = cdrerror(v_50); else
    v_50 = cdr(v_50);
    stack[-1] = v_50;
    goto v_12;
v_11:
    {
        LispObject fn = basic_elt(env, 3); // lto_sgnchg
        return (*qfn1(fn))(fn, v_50);
    }
}



// Code for janettreenodebuild

static LispObject CC_janettreenodebuild(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
        push(v_2,v_3,v_4);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_4,v_3,v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil, nil, nil, nil, nil);
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(10);
// copy arguments values to proper place
    stack[-5] = v_4;
    stack[-6] = v_3;
    stack[-7] = v_2;
// end of prologue
    v_62 = stack[-5];
    v_61 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_61 = Lgetv(nil, v_62, v_61);
    env = stack[-9];
    if (!car_legal(v_61)) v_61 = carerror(v_61); else
    v_61 = car(v_61);
    stack[-3] = v_61;
    v_62 = stack[-3];
    v_61 = stack[-6];
    {   LispObject fn = basic_elt(env, 1); // monomgetvariabledegree
    stack[-1] = (*qfn2(fn))(fn, v_62, v_61);
    }
    env = stack[-9];
    stack[0] = nil;
    v_61 = nil;
    v_61 = ncons(v_61);
    env = stack[-9];
    v_61 = acons(stack[-1], stack[0], v_61);
    env = stack[-9];
    stack[-8] = v_61;
    v_61 = stack[-8];
    stack[-4] = v_61;
v_25:
    stack[0] = stack[-7];
    v_62 = stack[-3];
    v_61 = stack[-6];
    {   LispObject fn = basic_elt(env, 1); // monomgetvariabledegree
    v_61 = (*qfn2(fn))(fn, v_62, v_61);
    }
    env = stack[-9];
    if ((static_cast<std::intptr_t>(stack[0]) > static_cast<std::intptr_t>(v_61))) goto v_29;
    goto v_24;
v_29:
    stack[0] = stack[-7];
    v_62 = stack[-3];
    v_61 = stack[-6];
    {   LispObject fn = basic_elt(env, 1); // monomgetvariabledegree
    v_61 = (*qfn2(fn))(fn, v_62, v_61);
    }
    env = stack[-9];
    v_61 = static_cast<LispObject>(static_cast<std::uintptr_t>(stack[0]) - static_cast<std::uintptr_t>(v_61) + TAG_FIXNUM);
    stack[-7] = v_61;
    v_61 = stack[-6];
    v_61 = static_cast<LispObject>(static_cast<std::intptr_t>(v_61) + 0x10);
    stack[-6] = v_61;
    v_61 = stack[-4];
    if (!car_legal(v_61)) stack[-2] = cdrerror(v_61); else
    stack[-2] = cdr(v_61);
    v_62 = stack[-3];
    v_61 = stack[-6];
    {   LispObject fn = basic_elt(env, 1); // monomgetvariabledegree
    stack[-1] = (*qfn2(fn))(fn, v_62, v_61);
    }
    env = stack[-9];
    stack[0] = nil;
    v_61 = nil;
    v_61 = ncons(v_61);
    env = stack[-9];
    v_61 = acons(stack[-1], stack[0], v_61);
    env = stack[-9];
    {   LispObject fn = basic_elt(env, 2); // setcdr
    v_61 = (*qfn2(fn))(fn, stack[-2], v_61);
    }
    env = stack[-9];
    v_61 = stack[-4];
    if (!car_legal(v_61)) v_61 = cdrerror(v_61); else
    v_61 = cdr(v_61);
    if (!car_legal(v_61)) v_61 = cdrerror(v_61); else
    v_61 = cdr(v_61);
    stack[-4] = v_61;
    goto v_25;
v_24:
    v_61 = stack[-4];
    if (!car_legal(v_61)) v_62 = carerror(v_61); else
    v_62 = car(v_61);
    v_61 = stack[-5];
    {   LispObject fn = basic_elt(env, 2); // setcdr
    v_61 = (*qfn2(fn))(fn, v_62, v_61);
    }
    v_61 = stack[-8];
    return onevalue(v_61);
}



// Code for even_action_term

static LispObject CC_even_action_term(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_33, v_34;
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
    stack[-2] = v_5;
    stack[-3] = v_4;
    stack[-4] = v_3;
    stack[-5] = v_2;
// end of prologue
    stack[-6] = stack[-5];
    v_33 = stack[-4];
    if (!car_legal(v_33)) stack[-1] = carerror(v_33); else
    stack[-1] = car(v_33);
    stack[0] = stack[-3];
    v_34 = stack[-2];
    v_33 = stack[-4];
    if (!car_legal(v_33)) v_33 = cdrerror(v_33); else
    v_33 = cdr(v_33);
    {   LispObject fn = basic_elt(env, 1); // multf
    v_34 = (*qfn2(fn))(fn, v_34, v_33);
    }
    env = stack[-7];
    v_33 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_33 = cons(v_34, v_33);
    env = stack[-7];
    v_33 = ncons(v_33);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 2); // even_action_pow
    stack[-1] = (*qfn4up(fn))(fn, stack[-6], stack[-1], stack[0], v_33);
    }
    env = stack[-7];
    v_33 = stack[-4];
    if (!car_legal(v_33)) stack[0] = cdrerror(v_33); else
    stack[0] = cdr(v_33);
    v_33 = stack[-4];
    if (!car_legal(v_33)) v_34 = carerror(v_33); else
    v_34 = car(v_33);
    v_33 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_33 = cons(v_34, v_33);
    env = stack[-7];
    v_33 = ncons(v_33);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 1); // multf
    v_33 = (*qfn2(fn))(fn, stack[-2], v_33);
    }
    env = stack[-7];
    v_33 = ncons(v_33);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 3); // even_action_sf
    v_33 = (*qfn4up(fn))(fn, stack[-5], stack[0], stack[-3], v_33);
    }
    env = stack[-7];
    {
        LispObject v_42 = stack[-1];
        LispObject fn = basic_elt(env, 4); // addsq
        return (*qfn2(fn))(fn, v_42, v_33);
    }
}



// Code for testord

static LispObject CC_testord(LispObject env,
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
v_7:
    v_28 = stack[-1];
    if (v_28 == nil) goto v_10;
    else goto v_11;
v_10:
    v_28 = lisp_true;
    goto v_6;
v_11:
    v_28 = stack[-1];
    if (!car_legal(v_28)) v_29 = carerror(v_28); else
    v_29 = car(v_28);
    v_28 = stack[0];
    if (!car_legal(v_28)) v_28 = carerror(v_28); else
    v_28 = car(v_28);
    v_28 = static_cast<LispObject>(lesseq2(v_29, v_28));
    v_28 = v_28 ? lisp_true : nil;
    env = stack[-2];
    if (v_28 == nil) goto v_15;
    v_28 = stack[-1];
    if (!car_legal(v_28)) v_28 = cdrerror(v_28); else
    v_28 = cdr(v_28);
    stack[-1] = v_28;
    v_28 = stack[0];
    if (!car_legal(v_28)) v_28 = cdrerror(v_28); else
    v_28 = cdr(v_28);
    stack[0] = v_28;
    goto v_7;
v_15:
    v_28 = nil;
    goto v_6;
    v_28 = nil;
v_6:
    return onevalue(v_28);
}



// Code for my!+nullsq!+p

static LispObject CC_myLnullsqLp(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_13;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_13 = v_2;
// end of prologue
    if (!car_legal(v_13)) v_13 = carerror(v_13); else
    v_13 = car(v_13);
    if (v_13 == nil) goto v_8;
    else goto v_9;
v_8:
    v_13 = lisp_true;
    goto v_5;
v_9:
    v_13 = nil;
v_5:
    return onevalue(v_13);
}



// Code for pasf_varlat

static LispObject CC_pasf_varlat(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_88, v_89;
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
    stack[0] = v_2;
// end of prologue
    v_88 = stack[0];
    if (!car_legal(v_88)) v_88 = cdrerror(v_88); else
    v_88 = cdr(v_88);
    if (!car_legal(v_88)) v_88 = carerror(v_88); else
    v_88 = car(v_88);
    {   LispObject fn = basic_elt(env, 3); // kernels
    stack[-1] = (*qfn1(fn))(fn, v_88);
    }
    env = stack[-4];
    v_88 = stack[0];
    v_88 = Lconsp(nil, v_88);
    env = stack[-4];
    if (v_88 == nil) goto v_15;
    v_88 = stack[0];
    if (!car_legal(v_88)) v_88 = carerror(v_88); else
    v_88 = car(v_88);
    v_88 = Lconsp(nil, v_88);
    env = stack[-4];
    if (v_88 == nil) goto v_15;
    v_88 = stack[0];
    if (!car_legal(v_88)) v_88 = carerror(v_88); else
    v_88 = car(v_88);
    if (!car_legal(v_88)) v_89 = carerror(v_88); else
    v_89 = car(v_88);
    v_88 = basic_elt(env, 1); // (cong ncong)
    v_88 = Lmemq(nil, v_89, v_88);
    if (v_88 == nil) goto v_15;
    v_88 = stack[0];
    if (!car_legal(v_88)) v_88 = carerror(v_88); else
    v_88 = car(v_88);
    if (!car_legal(v_88)) v_88 = cdrerror(v_88); else
    v_88 = cdr(v_88);
    {   LispObject fn = basic_elt(env, 3); // kernels
    v_88 = (*qfn1(fn))(fn, v_88);
    }
    env = stack[-4];
    goto v_13;
v_15:
    v_88 = nil;
    goto v_13;
    v_88 = nil;
v_13:
    v_88 = Lappend_2(nil, stack[-1], v_88);
    env = stack[-4];
    v_89 = v_88;
    v_88 = qvalue(basic_elt(env, 2)); // !*rlbrkcxk
    if (v_88 == nil) goto v_40;
    v_88 = v_89;
    stack[-3] = v_88;
v_47:
    v_88 = stack[-3];
    if (v_88 == nil) goto v_52;
    else goto v_53;
v_52:
    v_88 = nil;
    goto v_46;
v_53:
    v_88 = stack[-3];
    if (!car_legal(v_88)) v_88 = carerror(v_88); else
    v_88 = car(v_88);
    {   LispObject fn = basic_elt(env, 4); // lto_lpvarl
    v_88 = (*qfn1(fn))(fn, v_88);
    }
    env = stack[-4];
    stack[-2] = v_88;
    v_88 = stack[-2];
    {   LispObject fn = basic_elt(env, 5); // lastpair
    v_88 = (*qfn1(fn))(fn, v_88);
    }
    env = stack[-4];
    stack[-1] = v_88;
    v_88 = stack[-3];
    if (!car_legal(v_88)) v_88 = cdrerror(v_88); else
    v_88 = cdr(v_88);
    stack[-3] = v_88;
    v_88 = stack[-1];
    if (!consp(v_88)) goto v_67;
    else goto v_68;
v_67:
    goto v_47;
v_68:
v_48:
    v_88 = stack[-3];
    if (v_88 == nil) goto v_72;
    else goto v_73;
v_72:
    v_88 = stack[-2];
    goto v_46;
v_73:
    stack[0] = stack[-1];
    v_88 = stack[-3];
    if (!car_legal(v_88)) v_88 = carerror(v_88); else
    v_88 = car(v_88);
    {   LispObject fn = basic_elt(env, 4); // lto_lpvarl
    v_88 = (*qfn1(fn))(fn, v_88);
    }
    env = stack[-4];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_88);
    v_88 = stack[-1];
    {   LispObject fn = basic_elt(env, 5); // lastpair
    v_88 = (*qfn1(fn))(fn, v_88);
    }
    env = stack[-4];
    stack[-1] = v_88;
    v_88 = stack[-3];
    if (!car_legal(v_88)) v_88 = cdrerror(v_88); else
    v_88 = cdr(v_88);
    stack[-3] = v_88;
    goto v_48;
v_46:
    v_89 = v_88;
    goto v_38;
v_40:
v_38:
    v_88 = v_89;
    return onevalue(v_88);
}



// Code for rl_surep

static LispObject CC_rl_surep(LispObject env,
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
    stack[0] = qvalue(basic_elt(env, 1)); // rl_surep!*
    v_10 = list2(v_11, v_10);
    env = stack[-1];
    {
        LispObject v_13 = stack[0];
        LispObject fn = basic_elt(env, 2); // apply
        return (*qfn2(fn))(fn, v_13, v_10);
    }
}



// Code for minusrd

static LispObject CC_minusrd(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil);
    stack_popper stack_popper_var(2);
// end of prologue
    {   LispObject fn = basic_elt(env, 1); // mathml
    v_24 = (*qfn0(fn))(fn);
    }
    env = stack[-1];
    stack[0] = v_24;
    {   LispObject fn = basic_elt(env, 1); // mathml
    v_24 = (*qfn0(fn))(fn);
    }
    env = stack[-1];
    v_25 = v_24;
    if (v_25 == nil) goto v_11;
    else goto v_12;
v_11:
    v_24 = stack[0];
    v_24 = ncons(v_24);
    stack[0] = v_24;
    goto v_10;
v_12:
    v_26 = stack[0];
    v_25 = v_24;
    v_24 = nil;
    v_24 = list2star(v_26, v_25, v_24);
    env = stack[-1];
    stack[0] = v_24;
    {   LispObject fn = basic_elt(env, 2); // lex
    v_24 = (*qfn0(fn))(fn);
    }
    goto v_10;
v_10:
    v_24 = stack[0];
    return onevalue(v_24);
}



// Code for assoc2

static LispObject CC_assoc2(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_26, v_27, v_28, v_29;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_27 = v_3;
    v_28 = v_2;
// end of prologue
v_7:
    v_26 = v_27;
    if (v_26 == nil) goto v_10;
    else goto v_11;
v_10:
    v_26 = nil;
    goto v_6;
v_11:
    v_29 = v_28;
    v_26 = v_27;
    if (!car_legal(v_26)) v_26 = carerror(v_26); else
    v_26 = car(v_26);
    if (!car_legal(v_26)) v_26 = cdrerror(v_26); else
    v_26 = cdr(v_26);
    if (equal(v_29, v_26)) goto v_14;
    else goto v_15;
v_14:
    v_26 = v_27;
    if (!car_legal(v_26)) v_26 = carerror(v_26); else
    v_26 = car(v_26);
    goto v_6;
v_15:
    v_26 = v_27;
    if (!car_legal(v_26)) v_26 = cdrerror(v_26); else
    v_26 = cdr(v_26);
    v_27 = v_26;
    goto v_7;
    v_26 = nil;
v_6:
    return onevalue(v_26);
}



// Code for rewrite

static LispObject CC_rewrite(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_190, v_191, v_192;
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(15);
// copy arguments values to proper place
    stack[-9] = v_5;
    stack[-10] = v_4;
    stack[-11] = v_3;
    stack[-12] = v_2;
// end of prologue
    v_190 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-13] = v_190;
    v_190 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-2] = v_190;
    v_190 = stack[-12];
    if (!car_legal(v_190)) v_190 = cdrerror(v_190); else
    v_190 = cdr(v_190);
    if (!car_legal(v_190)) v_190 = cdrerror(v_190); else
    v_190 = cdr(v_190);
    if (!car_legal(v_190)) v_190 = carerror(v_190); else
    v_190 = car(v_190);
    v_191 = v_190;
    if (!car_legal(v_191)) v_191 = cdrerror(v_191); else
    v_191 = cdr(v_191);
    if (!car_legal(v_191)) v_191 = carerror(v_191); else
    v_191 = car(v_191);
    if (!car_legal(v_190)) v_190 = cdrerror(v_190); else
    v_190 = cdr(v_190);
    if (!car_legal(v_190)) v_190 = cdrerror(v_190); else
    v_190 = cdr(v_190);
    if (!car_legal(v_190)) v_190 = carerror(v_190); else
    v_190 = car(v_190);
    if (equal(v_191, v_190)) goto v_30;
    else goto v_31;
v_30:
    v_190 = stack[-11];
    v_190 = add1(v_190);
    env = stack[-14];
    stack[-1] = v_190;
    goto v_29;
v_31:
    v_190 = stack[-11];
    stack[-1] = v_190;
    goto v_29;
v_29:
    v_190 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[0] = v_190;
v_47:
    v_191 = stack[-1];
    v_190 = stack[0];
    v_190 = difference2(v_191, v_190);
    env = stack[-14];
    v_190 = Lminusp(nil, v_190);
    env = stack[-14];
    if (v_190 == nil) goto v_52;
    goto v_46;
v_52:
    v_191 = stack[-12];
    v_190 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // findrow
    v_190 = (*qfn2(fn))(fn, v_191, v_190);
    }
    env = stack[-14];
    v_191 = v_190;
    v_190 = v_191;
    if (v_190 == nil) goto v_64;
    v_190 = v_191;
    if (!car_legal(v_190)) v_190 = cdrerror(v_190); else
    v_190 = cdr(v_190);
    stack[-7] = v_190;
    v_190 = stack[0];
    stack[-3] = v_190;
    v_191 = stack[-13];
    v_190 = stack[-10];
    if (equal(v_191, v_190)) goto v_71;
    else goto v_72;
v_71:
    v_190 = stack[-13];
    v_190 = add1(v_190);
    env = stack[-14];
    stack[-13] = v_190;
    goto v_70;
v_72:
v_70:
    v_191 = stack[-3];
    v_190 = stack[-13];
    if (equal(v_191, v_190)) goto v_79;
    else goto v_80;
v_79:
    v_190 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-4] = v_190;
    v_190 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-8] = v_190;
    v_190 = nil;
    stack[-5] = v_190;
v_88:
    v_190 = stack[-7];
    if (v_190 == nil) goto v_91;
    stack[-3] = stack[-4];
    v_190 = stack[-11];
    v_190 = add1(v_190);
    env = stack[-14];
    if (equal(stack[-3], v_190)) goto v_91;
    goto v_92;
v_91:
    goto v_87;
v_92:
    v_190 = stack[-7];
    if (!car_legal(v_190)) v_190 = carerror(v_190); else
    v_190 = car(v_190);
    v_191 = v_190;
    v_190 = v_191;
    if (!car_legal(v_190)) v_190 = carerror(v_190); else
    v_190 = car(v_190);
    stack[-6] = v_190;
    v_190 = v_191;
    if (!car_legal(v_190)) v_190 = cdrerror(v_190); else
    v_190 = cdr(v_190);
    stack[-3] = v_190;
    v_191 = stack[-4];
    v_190 = stack[-9];
    if (equal(v_191, v_190)) goto v_108;
    else goto v_109;
v_108:
    v_190 = stack[-8];
    v_190 = add1(v_190);
    env = stack[-14];
    stack[-8] = v_190;
    goto v_107;
v_109:
v_107:
    v_191 = stack[-6];
    v_190 = stack[-8];
    if (equal(v_191, v_190)) goto v_116;
    else goto v_117;
v_116:
    v_192 = stack[-4];
    v_191 = stack[-3];
    v_190 = stack[-5];
    v_190 = acons(v_192, v_191, v_190);
    env = stack[-14];
    stack[-5] = v_190;
    v_190 = stack[-4];
    v_190 = add1(v_190);
    env = stack[-14];
    stack[-4] = v_190;
    v_190 = stack[-7];
    if (!car_legal(v_190)) v_190 = cdrerror(v_190); else
    v_190 = cdr(v_190);
    stack[-7] = v_190;
    v_190 = stack[-8];
    v_190 = add1(v_190);
    env = stack[-14];
    stack[-8] = v_190;
    goto v_115;
v_117:
    v_190 = stack[-8];
    v_190 = add1(v_190);
    env = stack[-14];
    stack[-8] = v_190;
    v_190 = stack[-4];
    v_190 = add1(v_190);
    env = stack[-14];
    stack[-4] = v_190;
    goto v_115;
v_115:
    goto v_88;
v_87:
    v_191 = stack[-12];
    v_190 = stack[-2];
    stack[-4] = list2(v_191, v_190);
    env = stack[-14];
    v_190 = nil;
    stack[-3] = ncons(v_190);
    env = stack[-14];
    v_190 = stack[-5];
    v_190 = Lreverse(nil, v_190);
    env = stack[-14];
    stack[-5] = cons(stack[-3], v_190);
    env = stack[-14];
    stack[-3] = stack[-12];
    v_190 = nil;
    v_190 = ncons(v_190);
    env = stack[-14];
    {   LispObject fn = basic_elt(env, 2); // letmtr3
    v_190 = (*qfn4up(fn))(fn, stack[-4], stack[-5], stack[-3], v_190);
    }
    env = stack[-14];
    v_190 = stack[-2];
    v_190 = add1(v_190);
    env = stack[-14];
    stack[-2] = v_190;
    v_190 = stack[-13];
    v_190 = add1(v_190);
    env = stack[-14];
    stack[-13] = v_190;
    goto v_78;
v_80:
    v_190 = stack[-13];
    v_190 = add1(v_190);
    env = stack[-14];
    stack[-13] = v_190;
    v_190 = stack[-2];
    v_190 = add1(v_190);
    env = stack[-14];
    stack[-2] = v_190;
    goto v_78;
v_78:
    goto v_62;
v_64:
    v_190 = stack[-13];
    v_190 = add1(v_190);
    env = stack[-14];
    stack[-13] = v_190;
    goto v_62;
v_62:
    v_190 = stack[0];
    v_190 = add1(v_190);
    env = stack[-14];
    stack[0] = v_190;
    goto v_47;
v_46:
    v_190 = stack[-11];
    v_191 = add1(v_190);
    env = stack[-14];
    v_190 = stack[-12];
    if (!car_legal(v_190)) v_190 = cdrerror(v_190); else
    v_190 = cdr(v_190);
    if (!car_legal(v_190)) v_190 = cdrerror(v_190); else
    v_190 = cdr(v_190);
    if (!car_legal(v_190)) v_190 = carerror(v_190); else
    v_190 = car(v_190);
    if (!car_legal(v_190)) v_190 = cdrerror(v_190); else
    v_190 = cdr(v_190);
    if (!car_legal(v_190)) v_190 = carerror(v_190); else
    v_190 = car(v_190);
    if (equal(v_191, v_190)) goto v_170;
    else goto v_171;
v_170:
    stack[0] = stack[-12];
    v_190 = stack[-11];
    v_190 = add1(v_190);
    env = stack[-14];
    stack[-2] = list2(stack[0], v_190);
    env = stack[-14];
    stack[-1] = nil;
    stack[0] = stack[-12];
    v_190 = nil;
    v_190 = ncons(v_190);
    env = stack[-14];
    {   LispObject fn = basic_elt(env, 2); // letmtr3
    v_190 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_190);
    }
    goto v_169;
v_171:
v_169:
    v_190 = stack[-12];
    return onevalue(v_190);
}



// Code for ndepends

static LispObject CC_ndepends(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_142, v_143, v_144;
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
    v_142 = stack[-1];
    if (v_142 == nil) goto v_11;
    else goto v_12;
v_11:
    v_142 = lisp_true;
    goto v_10;
v_12:
    v_142 = stack[-1];
    v_142 = (is_number(v_142) ? lisp_true : nil);
    if (v_142 == nil) goto v_19;
    else goto v_18;
v_19:
    v_142 = stack[0];
    v_142 = (is_number(v_142) ? lisp_true : nil);
v_18:
    goto v_10;
    v_142 = nil;
v_10:
    if (v_142 == nil) goto v_8;
    v_142 = nil;
    goto v_6;
v_8:
    v_143 = stack[-1];
    v_142 = stack[0];
    if (equal(v_143, v_142)) goto v_25;
    else goto v_26;
v_25:
    v_142 = stack[-1];
    goto v_6;
v_26:
    v_142 = stack[-1];
    if (!consp(v_142)) goto v_34;
    else goto v_35;
v_34:
    v_143 = stack[-1];
    v_142 = qvalue(basic_elt(env, 1)); // frlis!*
    v_142 = Lmemq(nil, v_143, v_142);
    goto v_33;
v_35:
    v_142 = nil;
    goto v_33;
    v_142 = nil;
v_33:
    if (v_142 == nil) goto v_31;
    v_142 = lisp_true;
    goto v_6;
v_31:
    v_143 = stack[-1];
    v_142 = qvalue(basic_elt(env, 2)); // depl!*
    v_142 = Lassoc(nil, v_143, v_142);
    v_143 = v_142;
    v_142 = v_143;
    if (v_142 == nil) goto v_52;
    else goto v_53;
v_52:
    v_142 = nil;
    goto v_51;
v_53:
    v_142 = v_143;
    if (!car_legal(v_142)) v_143 = cdrerror(v_142); else
    v_143 = cdr(v_142);
    v_142 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // lndepends
    v_142 = (*qfn2(fn))(fn, v_143, v_142);
    }
    env = stack[-2];
    goto v_51;
    v_142 = nil;
v_51:
    if (v_142 == nil) goto v_45;
    v_142 = lisp_true;
    goto v_6;
v_45:
    v_142 = stack[-1];
    if (!consp(v_142)) goto v_68;
    v_142 = stack[-1];
    if (!car_legal(v_142)) v_142 = carerror(v_142); else
    v_142 = car(v_142);
    if (symbolp(v_142)) goto v_73;
    v_142 = nil;
    goto v_71;
v_73:
    v_142 = stack[-1];
    if (!car_legal(v_142)) v_142 = carerror(v_142); else
    v_142 = car(v_142);
    if (!symbolp(v_142)) v_142 = nil;
    else { v_142 = qfastgets(v_142);
           if (v_142 != nil) { v_142 = elt(v_142, 8); // dname
#ifdef RECORD_GET
             if (v_142 != SPID_NOPROP)
                record_get(elt(fastget_names, 8), 1);
             else record_get(elt(fastget_names, 8), 0),
                v_142 = nil; }
           else record_get(elt(fastget_names, 8), 0); }
#else
             if (v_142 == SPID_NOPROP) v_142 = nil; }}
#endif
    goto v_71;
    v_142 = nil;
v_71:
    goto v_66;
v_68:
    v_142 = nil;
    goto v_66;
    v_142 = nil;
v_66:
    if (v_142 == nil) goto v_64;
    v_142 = stack[-1];
    if (!car_legal(v_142)) v_143 = carerror(v_142); else
    v_143 = car(v_142);
    v_142 = basic_elt(env, 3); // domain!-depends!-fn
    v_142 = get(v_143, v_142);
    v_143 = v_142;
    v_142 = v_143;
    if (v_142 == nil) goto v_93;
    v_144 = v_143;
    v_143 = stack[-1];
    v_142 = stack[0];
        return Lapply2(nil, v_144, v_143, v_142);
v_93:
    v_142 = nil;
    goto v_91;
    v_142 = nil;
v_91:
    goto v_6;
v_64:
    v_142 = stack[-1];
    {   LispObject fn = basic_elt(env, 5); // atomf
    v_142 = (*qfn1(fn))(fn, v_142);
    }
    env = stack[-2];
    if (v_142 == nil) goto v_106;
    else goto v_107;
v_106:
    v_142 = stack[-1];
    if (!car_legal(v_142)) v_143 = cdrerror(v_142); else
    v_143 = cdr(v_142);
    v_142 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // lndepends
    v_142 = (*qfn2(fn))(fn, v_143, v_142);
    }
    env = stack[-2];
    if (v_142 == nil) goto v_112;
    else goto v_111;
v_112:
    v_142 = stack[-1];
    if (!car_legal(v_142)) v_143 = carerror(v_142); else
    v_143 = car(v_142);
    v_142 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // ndepends
    v_142 = (*qfn2(fn))(fn, v_143, v_142);
    }
    env = stack[-2];
v_111:
    goto v_105;
v_107:
    v_142 = nil;
    goto v_105;
    v_142 = nil;
v_105:
    if (v_142 == nil) goto v_103;
    v_142 = lisp_true;
    goto v_6;
v_103:
    v_142 = stack[0];
    {   LispObject fn = basic_elt(env, 5); // atomf
    v_142 = (*qfn1(fn))(fn, v_142);
    }
    if (v_142 == nil) goto v_127;
    else goto v_125;
v_127:
    v_142 = stack[0];
    if (!car_legal(v_142)) v_142 = carerror(v_142); else
    v_142 = car(v_142);
    if (symbolp(v_142)) goto v_131;
    else goto v_130;
v_131:
    v_142 = stack[0];
    if (!car_legal(v_142)) v_142 = carerror(v_142); else
    v_142 = car(v_142);
    if (!symbolp(v_142)) v_142 = nil;
    else { v_142 = qfastgets(v_142);
           if (v_142 != nil) { v_142 = elt(v_142, 8); // dname
#ifdef RECORD_GET
             if (v_142 != SPID_NOPROP)
                record_get(elt(fastget_names, 8), 1);
             else record_get(elt(fastget_names, 8), 0),
                v_142 = nil; }
           else record_get(elt(fastget_names, 8), 0); }
#else
             if (v_142 == SPID_NOPROP) v_142 = nil; }}
#endif
    if (v_142 == nil) goto v_130;
    goto v_125;
v_130:
    goto v_126;
v_125:
    v_142 = nil;
    goto v_6;
v_126:
    v_142 = nil;
    goto v_6;
    v_142 = nil;
v_6:
    return onevalue(v_142);
}



setup_type const u37_setup[] =
{
    {"lessppair",               G0W2,     G1W2,     CC_lessppair,G3W2,  G4W2},
    {"lalr_print_first_information",CC_lalr_print_first_information,G1W0,G2W0,G3W0,G4W0},
    {"smt_prin2x",              G0W1,     CC_smt_prin2x,G2W1, G3W1,     G4W1},
    {"ofsf_simplequal",         G0W2,     G1W2,     CC_ofsf_simplequal,G3W2,G4W2},
    {"pasf_exprng-gand",        G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_pasf_exprngKgand},
    {"bvarom",                  G0W1,     CC_bvarom,G2W1,     G3W1,     G4W1},
    {"s-nextarg",               G0W1,     CC_sKnextarg,G2W1,  G3W1,     G4W1},
    {"wedgef",                  G0W1,     CC_wedgef,G2W1,     G3W1,     G4W1},
    {"apply_e",                 G0W1,     CC_apply_e,G2W1,    G3W1,     G4W1},
    {"diff_vertex",             G0W2,     G1W2,     CC_diff_vertex,G3W2,G4W2},
    {"assert_kernelp",          G0W1,     CC_assert_kernelp,G2W1,G3W1,  G4W1},
    {"evalgreaterp",            G0W2,     G1W2,     CC_evalgreaterp,G3W2,G4W2},
    {"solvealgdepends",         G0W2,     G1W2,     CC_solvealgdepends,G3W2,G4W2},
    {"make-image",              G0W2,     G1W2,     CC_makeKimage,G3W2, G4W2},
    {"giplus:",                 G0W2,     G1W2,     CC_giplusT,G3W2,    G4W2},
    {"ext_mult",                G0W2,     G1W2,     CC_ext_mult,G3W2,   G4W2},
    {"gcd-with-number",         G0W2,     G1W2,     CC_gcdKwithKnumber,G3W2,G4W2},
    {"aex_sgn",                 G0W1,     CC_aex_sgn,G2W1,    G3W1,     G4W1},
    {"containerom",             G0W1,     CC_containerom,G2W1,G3W1,     G4W1},
    {"mkexdf",                  G0W1,     CC_mkexdf,G2W1,     G3W1,     G4W1},
    {"z-roads",                 G0W1,     CC_zKroads,G2W1,    G3W1,     G4W1},
    {"msolve-psys1",            G0W2,     G1W2,     CC_msolveKpsys1,G3W2,G4W2},
    {"ratlessp",                G0W2,     G1W2,     CC_ratlessp,G3W2,   G4W2},
    {"lastcar",                 G0W1,     CC_lastcar,G2W1,    G3W1,     G4W1},
    {"aex_divposcnt",           G0W2,     G1W2,     CC_aex_divposcnt,G3W2,G4W2},
    {"settcollectnonmultiprolongations",G0W1,CC_settcollectnonmultiprolongations,G2W1,G3W1,G4W1},
    {"processpartitie1list1",   G0W2,     G1W2,     CC_processpartitie1list1,G3W2,G4W2},
    {"mk+outer+list",           G0W1,     CC_mkLouterLlist,G2W1,G3W1,   G4W1},
    {"repr_ldeg",               G0W1,     CC_repr_ldeg,G2W1,  G3W1,     G4W1},
    {"dip_f2dip2",              G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_dip_f2dip2},
    {"setfuncsnaryrd",          CC_setfuncsnaryrd,G1W0,G2W0,  G3W0,     G4W0},
    {"sqprint",                 G0W1,     CC_sqprint,G2W1,    G3W1,     G4W1},
    {"red_tailreddriver",       G0W3,     G1W3,     G2W3,     CC_red_tailreddriver,G4W3},
    {"getavalue",               G0W1,     CC_getavalue,G2W1,  G3W1,     G4W1},
    {"reduce-eival-powers",     G0W2,     G1W2,     CC_reduceKeivalKpowers,G3W2,G4W2},
    {"find-null-space",         G0W2,     G1W2,     CC_findKnullKspace,G3W2,G4W2},
    {"set_parser",              G0W1,     CC_set_parser,G2W1, G3W1,     G4W1},
    {"sq_member",               G0W2,     G1W2,     CC_sq_member,G3W2,  G4W2},
    {"orddf",                   G0W2,     G1W2,     CC_orddf, G3W2,     G4W2},
    {"cl_susiupdknowl",         G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_cl_susiupdknowl},
    {"gftimes",                 G0W2,     G1W2,     CC_gftimes,G3W2,    G4W2},
    {"calc_den_tar",            G0W2,     G1W2,     CC_calc_den_tar,G3W2,G4W2},
    {"no-side-effectp",         G0W1,     CC_noKsideKeffectp,G2W1,G3W1, G4W1},
    {"atom_compare",            G0W2,     G1W2,     CC_atom_compare,G3W2,G4W2},
    {"lalr_expand_grammar",     G0W1,     CC_lalr_expand_grammar,G2W1,G3W1,G4W1},
    {"aex_stchsgnch1",          G0W3,     G1W3,     G2W3,     CC_aex_stchsgnch1,G4W3},
    {"janettreenodebuild",      G0W3,     G1W3,     G2W3,     CC_janettreenodebuild,G4W3},
    {"even_action_term",        G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_even_action_term},
    {"testord",                 G0W2,     G1W2,     CC_testord,G3W2,    G4W2},
    {"my+nullsq+p",             G0W1,     CC_myLnullsqLp,G2W1,G3W1,     G4W1},
    {"pasf_varlat",             G0W1,     CC_pasf_varlat,G2W1,G3W1,     G4W1},
    {"rl_surep",                G0W2,     G1W2,     CC_rl_surep,G3W2,   G4W2},
    {"minusrd",                 CC_minusrd,G1W0,    G2W0,     G3W0,     G4W0},
    {"assoc2",                  G0W2,     G1W2,     CC_assoc2,G3W2,     G4W2},
    {"rewrite",                 G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_rewrite},
    {"ndepends",                G0W2,     G1W2,     CC_ndepends,G3W2,   G4W2},
    {nullptr, 
        reinterpret_cast<no_args *>(
            reinterpret_cast<uintptr_t>("u37")),
        reinterpret_cast<one_arg *>(
            reinterpret_cast<uintptr_t>("151279 6388377 1372549")),
        nullptr, nullptr, nullptr}
};

// end of generated code
