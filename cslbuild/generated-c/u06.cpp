
// $destdir/u06.c        Machine generated C code

// $Id$

#include "config.h"
#include "headers.h"



// Code for lalr_print_collection

static LispObject CC_lalr_print_collection(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_148, v_149;
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
    real_push(nil);
    stack_popper stack_popper_var(7);
// end of prologue
    v_148 = basic_elt(env, 1); // "=== LALR ITEMSET COLLECTION ==="
    v_148 = Lprinc(nil, v_148);
    env = stack[-6];
    v_148 = Lterpri(nil);
    env = stack[-6];
    v_148 = qvalue(basic_elt(env, 2)); // itemset_collection
    v_148 = Lreverse(nil, v_148);
    env = stack[-6];
    stack[-5] = v_148;
v_12:
    v_148 = stack[-5];
    if (v_148 == nil) goto v_17;
    else goto v_18;
v_17:
    goto v_11;
v_18:
    v_148 = stack[-5];
    if (!car_legal(v_148)) v_148 = carerror(v_148); else
    v_148 = car(v_148);
    stack[-4] = v_148;
    v_148 = basic_elt(env, 3); // "Itemset "
    v_148 = Lprinc(nil, v_148);
    env = stack[-6];
    v_148 = stack[-4];
    if (!car_legal(v_148)) v_148 = cdrerror(v_148); else
    v_148 = cdr(v_148);
    v_148 = Lprin(nil, v_148);
    env = stack[-6];
    v_148 = Lterpri(nil);
    env = stack[-6];
    v_148 = stack[-4];
    if (!car_legal(v_148)) v_149 = carerror(v_148); else
    v_149 = car(v_148);
    v_148 = basic_elt(env, 4); // ordp
    {   LispObject fn = basic_elt(env, 13); // sort
    v_148 = (*qfn2(fn))(fn, v_149, v_148);
    }
    env = stack[-6];
    stack[-3] = v_148;
v_33:
    v_148 = stack[-3];
    if (v_148 == nil) goto v_40;
    else goto v_41;
v_40:
    goto v_32;
v_41:
    v_148 = stack[-3];
    if (!car_legal(v_148)) v_148 = carerror(v_148); else
    v_148 = car(v_148);
    stack[-2] = v_148;
    v_148 = basic_elt(env, 5); // " "
    v_148 = Lprinc(nil, v_148);
    env = stack[-6];
    v_148 = stack[-2];
    if (!car_legal(v_148)) v_148 = carerror(v_148); else
    v_148 = car(v_148);
    if (!car_legal(v_148)) v_148 = carerror(v_148); else
    v_148 = car(v_148);
    {   LispObject fn = basic_elt(env, 14); // lalr_prin_symbol
    v_148 = (*qfn1(fn))(fn, v_148);
    }
    env = stack[-6];
    v_148 = basic_elt(env, 6); // " ->"
    v_148 = Lprinc(nil, v_148);
    env = stack[-6];
    v_148 = stack[-2];
    if (!car_legal(v_148)) v_148 = carerror(v_148); else
    v_148 = car(v_148);
    if (!car_legal(v_148)) v_148 = cdrerror(v_148); else
    v_148 = cdr(v_148);
    stack[-1] = v_148;
v_58:
    v_148 = stack[-1];
    if (v_148 == nil) goto v_64;
    else goto v_65;
v_64:
    goto v_57;
v_65:
    v_148 = stack[-1];
    if (!car_legal(v_148)) v_148 = carerror(v_148); else
    v_148 = car(v_148);
    stack[0] = v_148;
    v_148 = basic_elt(env, 5); // " "
    v_148 = Lprinc(nil, v_148);
    env = stack[-6];
    v_148 = stack[0];
    {   LispObject fn = basic_elt(env, 14); // lalr_prin_symbol
    v_148 = (*qfn1(fn))(fn, v_148);
    }
    env = stack[-6];
    v_148 = stack[-1];
    if (!car_legal(v_148)) v_148 = cdrerror(v_148); else
    v_148 = cdr(v_148);
    stack[-1] = v_148;
    goto v_58;
v_57:
    v_148 = basic_elt(env, 7); // " ["
    v_148 = Lprinc(nil, v_148);
    env = stack[-6];
    v_148 = stack[-2];
    if (!car_legal(v_148)) v_148 = cdrerror(v_148); else
    v_148 = cdr(v_148);
    stack[0] = v_148;
v_82:
    v_148 = stack[0];
    if (v_148 == nil) goto v_87;
    else goto v_88;
v_87:
    goto v_81;
v_88:
    v_148 = stack[0];
    if (!car_legal(v_148)) v_148 = carerror(v_148); else
    v_148 = car(v_148);
    {   LispObject fn = basic_elt(env, 14); // lalr_prin_symbol
    v_148 = (*qfn1(fn))(fn, v_148);
    }
    env = stack[-6];
    v_148 = stack[0];
    v_149 = Llength(nil, v_148);
    env = stack[-6];
    v_148 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_149 == v_148) goto v_96;
    else goto v_97;
v_96:
    v_148 = basic_elt(env, 8); // "]"
    v_148 = Lprinc(nil, v_148);
    env = stack[-6];
    goto v_95;
v_97:
    v_148 = basic_elt(env, 9); // "/"
    v_148 = Lprinc(nil, v_148);
    env = stack[-6];
    goto v_95;
v_95:
    v_148 = stack[0];
    if (!car_legal(v_148)) v_148 = cdrerror(v_148); else
    v_148 = cdr(v_148);
    stack[0] = v_148;
    goto v_82;
v_81:
    v_148 = Lterpri(nil);
    env = stack[-6];
    v_148 = stack[-3];
    if (!car_legal(v_148)) v_148 = cdrerror(v_148); else
    v_148 = cdr(v_148);
    stack[-3] = v_148;
    goto v_33;
v_32:
    v_148 = qvalue(basic_elt(env, 10)); // symbols
    stack[-1] = v_148;
v_115:
    v_148 = stack[-1];
    if (v_148 == nil) goto v_119;
    else goto v_120;
v_119:
    goto v_114;
v_120:
    v_148 = stack[-1];
    if (!car_legal(v_148)) v_148 = carerror(v_148); else
    v_148 = car(v_148);
    stack[0] = v_148;
    v_149 = stack[-4];
    v_148 = stack[0];
    {   LispObject fn = basic_elt(env, 15); // lalr_goto
    v_148 = (*qfn2(fn))(fn, v_149, v_148);
    }
    env = stack[-6];
    stack[-2] = v_148;
    if (v_148 == nil) goto v_129;
    v_148 = basic_elt(env, 11); // "GOTO("
    v_148 = Lprinc(nil, v_148);
    env = stack[-6];
    v_148 = stack[0];
    {   LispObject fn = basic_elt(env, 14); // lalr_prin_symbol
    v_148 = (*qfn1(fn))(fn, v_148);
    }
    env = stack[-6];
    v_148 = basic_elt(env, 12); // ") = "
    v_148 = Lprinc(nil, v_148);
    env = stack[-6];
    v_148 = stack[-2];
    if (!car_legal(v_148)) v_148 = cdrerror(v_148); else
    v_148 = cdr(v_148);
    v_148 = Lprin(nil, v_148);
    env = stack[-6];
    v_148 = Lterpri(nil);
    env = stack[-6];
    goto v_127;
v_129:
v_127:
    v_148 = stack[-1];
    if (!car_legal(v_148)) v_148 = cdrerror(v_148); else
    v_148 = cdr(v_148);
    stack[-1] = v_148;
    goto v_115;
v_114:
    v_148 = Lterpri(nil);
    env = stack[-6];
    v_148 = stack[-5];
    if (!car_legal(v_148)) v_148 = cdrerror(v_148); else
    v_148 = cdr(v_148);
    stack[-5] = v_148;
    goto v_12;
v_11:
    v_148 = nil;
    return onevalue(v_148);
}



// Code for convertmode

static LispObject CC_convertmode(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_16, v_17, v_18;
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
    v_16 = v_2;
// end of prologue
    v_18 = v_16;
    v_17 = stack[-2];
    v_16 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // form1
    stack[-3] = (*qfn3(fn))(fn, v_18, v_17, v_16);
    }
    env = stack[-4];
    v_16 = stack[0];
    v_16 = ncons(v_16);
    env = stack[-4];
    {
        LispObject v_23 = stack[-3];
        LispObject v_24 = stack[-2];
        LispObject v_25 = stack[-1];
        LispObject fn = basic_elt(env, 2); // convertmode1
        return (*qfn4up(fn))(fn, v_23, v_24, v_25, v_16);
    }
}



// Code for subs3q

static LispObject CC_subs3q(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[-1] = v_2;
// end of prologue
    v_18 = qvalue(basic_elt(env, 1)); // mchfg!*
    stack[-2] = v_18;
    v_18 = nil;
    setvalue(basic_elt(env, 1), v_18); // mchfg!*
    v_18 = stack[-1];
    if (!car_legal(v_18)) v_18 = carerror(v_18); else
    v_18 = car(v_18);
    {   LispObject fn = basic_elt(env, 2); // subs3f
    stack[0] = (*qfn1(fn))(fn, v_18);
    }
    env = stack[-3];
    v_18 = stack[-1];
    if (!car_legal(v_18)) v_18 = cdrerror(v_18); else
    v_18 = cdr(v_18);
    {   LispObject fn = basic_elt(env, 2); // subs3f
    v_18 = (*qfn1(fn))(fn, v_18);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 3); // quotsq
    v_18 = (*qfn2(fn))(fn, stack[0], v_18);
    }
    env = stack[-3];
    stack[-1] = v_18;
    v_18 = stack[-2];
    setvalue(basic_elt(env, 1), v_18); // mchfg!*
    v_18 = stack[-1];
    return onevalue(v_18);
}



// Code for talp_smwcpknowl

static LispObject CC_talp_smwcpknowl(LispObject env,
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
    v_15 = qvalue(basic_elt(env, 1)); // !*rlsusi
    if (v_15 == nil) goto v_7;
    v_15 = v_16;
    {
        LispObject fn = basic_elt(env, 2); // cl_susicpknowl
        return (*qfn1(fn))(fn, v_15);
    }
v_7:
    v_15 = v_16;
    {
        LispObject fn = basic_elt(env, 3); // cl_smcpknowl
        return (*qfn1(fn))(fn, v_15);
    }
    v_15 = nil;
    return onevalue(v_15);
}



// Code for qqe_qtidp

static LispObject CC_qqe_qtidp(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_8, v_9;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_8 = v_2;
// end of prologue
    if (!symbolp(v_8)) v_8 = nil;
    else { v_8 = qfastgets(v_8);
           if (v_8 != nil) { v_8 = elt(v_8, 10); // idtype
#ifdef RECORD_GET
             if (v_8 != SPID_NOPROP)
                record_get(elt(fastget_names, 10), 1);
             else record_get(elt(fastget_names, 10), 0),
                v_8 = nil; }
           else record_get(elt(fastget_names, 10), 0); }
#else
             if (v_8 == SPID_NOPROP) v_8 = nil; }}
#endif
    v_9 = basic_elt(env, 1); // qt
    v_8 = (v_8 == v_9 ? lisp_true : nil);
    return onevalue(v_8);
}



// Code for algid

static LispObject CC_algid(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_21, v_22, v_23;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_21 = v_3;
    v_22 = v_2;
// end of prologue
    v_23 = v_22;
    v_21 = Latsoc(nil, v_23, v_21);
    if (v_21 == nil) goto v_9;
    else goto v_7;
v_9:
    v_21 = v_22;
    if (!symbolp(v_21)) v_21 = nil;
    else { v_21 = qfastgets(v_21);
           if (v_21 != nil) { v_21 = elt(v_21, 17); // share
#ifdef RECORD_GET
             if (v_21 == SPID_NOPROP)
                record_get(elt(fastget_names, 17), 0),
                v_21 = nil;
             else record_get(elt(fastget_names, 17), 1),
                v_21 = lisp_true; }
           else record_get(elt(fastget_names, 17), 0); }
#else
             if (v_21 == SPID_NOPROP) v_21 = nil; else v_21 = lisp_true; }}
#endif
    if (v_21 == nil) goto v_13;
    else goto v_7;
v_13:
    goto v_8;
v_7:
    v_21 = v_22;
    goto v_6;
v_8:
    v_21 = v_22;
        return Lmkquote(nil, v_21);
    v_21 = nil;
v_6:
    return onevalue(v_21);
}



// Code for emtch

static LispObject CC_emtch(LispObject env,
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
    stack[0] = v_2;
// end of prologue
    v_24 = stack[0];
    if (!consp(v_24)) goto v_6;
    else goto v_7;
v_6:
    v_24 = stack[0];
    goto v_5;
v_7:
    v_24 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // opmtch
    v_24 = (*qfn1(fn))(fn, v_24);
    }
    v_25 = v_24;
    v_24 = v_25;
    if (v_24 == nil) goto v_18;
    v_24 = v_25;
    goto v_16;
v_18:
    v_24 = stack[0];
    goto v_16;
    v_24 = nil;
v_16:
    goto v_5;
    v_24 = nil;
v_5:
    return onevalue(v_24);
}



// Code for pnthxzz

static LispObject CC_pnthxzz(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_30, v_31, v_32, v_33;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_31 = v_3;
    v_32 = v_2;
// end of prologue
v_7:
    v_30 = v_31;
    if (v_30 == nil) goto v_14;
    else goto v_15;
v_14:
    v_30 = lisp_true;
    goto v_13;
v_15:
    v_30 = v_31;
    if (!car_legal(v_30)) v_30 = carerror(v_30); else
    v_30 = car(v_30);
    if (!car_legal(v_30)) v_33 = carerror(v_30); else
    v_33 = car(v_30);
    v_30 = v_32;
    v_30 = (equal(v_33, v_30) ? lisp_true : nil);
    goto v_13;
    v_30 = nil;
v_13:
    if (v_30 == nil) goto v_11;
    v_30 = v_31;
    goto v_6;
v_11:
    v_30 = v_31;
    if (!car_legal(v_30)) v_30 = cdrerror(v_30); else
    v_30 = cdr(v_30);
    v_31 = v_30;
    goto v_7;
    v_30 = nil;
v_6:
    return onevalue(v_30);
}



// Code for csl_timbf

static LispObject CC_csl_timbf(LispObject env,
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
    v_39 = stack[-3];
    if (!car_legal(v_39)) v_39 = cdrerror(v_39); else
    v_39 = cdr(v_39);
    if (!car_legal(v_39)) v_40 = carerror(v_39); else
    v_40 = car(v_39);
    v_39 = stack[-2];
    if (!car_legal(v_39)) v_39 = cdrerror(v_39); else
    v_39 = cdr(v_39);
    if (!car_legal(v_39)) v_39 = carerror(v_39); else
    v_39 = car(v_39);
    v_39 = times2(v_40, v_39);
    env = stack[-5];
    v_41 = v_39;
    v_40 = v_41;
    v_39 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_40 == v_39) goto v_17;
    else goto v_18;
v_17:
    v_39 = basic_elt(env, 1); // (!:rd!: 0 . 0)
    goto v_7;
v_18:
    v_40 = v_41;
    v_39 = qvalue(basic_elt(env, 2)); // !:bprec!:
    {   LispObject fn = basic_elt(env, 4); // inorm
    v_39 = (*qfn2(fn))(fn, v_40, v_39);
    }
    env = stack[-5];
    v_41 = v_39;
    stack[-4] = basic_elt(env, 3); // !:rd!:
    v_39 = v_41;
    if (!car_legal(v_39)) stack[-1] = carerror(v_39); else
    stack[-1] = car(v_39);
    v_39 = v_41;
    if (!car_legal(v_39)) stack[0] = cdrerror(v_39); else
    stack[0] = cdr(v_39);
    v_39 = stack[-3];
    if (!car_legal(v_39)) v_39 = cdrerror(v_39); else
    v_39 = cdr(v_39);
    if (!car_legal(v_39)) v_40 = cdrerror(v_39); else
    v_40 = cdr(v_39);
    v_39 = stack[-2];
    if (!car_legal(v_39)) v_39 = cdrerror(v_39); else
    v_39 = cdr(v_39);
    if (!car_legal(v_39)) v_39 = cdrerror(v_39); else
    v_39 = cdr(v_39);
    v_39 = plus2(v_40, v_39);
    env = stack[-5];
    v_39 = plus2(stack[0], v_39);
    {
        LispObject v_47 = stack[-4];
        LispObject v_48 = stack[-1];
        return list2star(v_47, v_48, v_39);
    }
v_7:
    return onevalue(v_39);
}



// Code for putpline

static LispObject CC_putpline(LispObject env,
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
    v_52 = qvalue(basic_elt(env, 1)); // posn!*
    v_51 = stack[0];
    if (!car_legal(v_51)) v_51 = carerror(v_51); else
    v_51 = car(v_51);
    if (!car_legal(v_51)) v_51 = cdrerror(v_51); else
    v_51 = cdr(v_51);
    stack[-1] = static_cast<LispObject>(static_cast<std::uintptr_t>(v_52) + static_cast<std::uintptr_t>(v_51) - TAG_FIXNUM);
    v_51 = nil;
    v_52 = Llinelength(nil, v_51);
    env = stack[-2];
    v_51 = qvalue(basic_elt(env, 2)); // spare!*
    v_51 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_52) - static_cast<std::uintptr_t>(v_51) + TAG_FIXNUM);
    v_51 = static_cast<LispObject>(greaterp2(stack[-1], v_51));
    v_51 = v_51 ? lisp_true : nil;
    env = stack[-2];
    if (v_51 == nil) goto v_9;
    v_51 = lisp_true;
    {   LispObject fn = basic_elt(env, 8); // terpri!*
    v_51 = (*qfn1(fn))(fn, v_51);
    }
    env = stack[-2];
    goto v_7;
v_9:
v_7:
    v_52 = qvalue(basic_elt(env, 1)); // posn!*
    v_51 = qvalue(basic_elt(env, 3)); // orig!*
    v_53 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_52) - static_cast<std::uintptr_t>(v_51) + TAG_FIXNUM);
    v_52 = qvalue(basic_elt(env, 4)); // ycoord!*
    v_51 = stack[0];
    if (!car_legal(v_51)) v_51 = carerror(v_51); else
    v_51 = car(v_51);
    if (!car_legal(v_51)) v_51 = carerror(v_51); else
    v_51 = car(v_51);
    {   LispObject fn = basic_elt(env, 9); // update!-pline
    v_52 = (*qfn3(fn))(fn, v_53, v_52, v_51);
    }
    env = stack[-2];
    v_51 = qvalue(basic_elt(env, 5)); // pline!*
    v_51 = Lappend_2(nil, v_52, v_51);
    env = stack[-2];
    setvalue(basic_elt(env, 5), v_51); // pline!*
    v_52 = qvalue(basic_elt(env, 1)); // posn!*
    v_51 = stack[0];
    if (!car_legal(v_51)) v_51 = carerror(v_51); else
    v_51 = car(v_51);
    if (!car_legal(v_51)) v_51 = cdrerror(v_51); else
    v_51 = cdr(v_51);
    v_51 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_52) + static_cast<std::uintptr_t>(v_51) - TAG_FIXNUM);
    setvalue(basic_elt(env, 1), v_51); // posn!*
    v_53 = qvalue(basic_elt(env, 6)); // ymin!*
    v_51 = stack[0];
    if (!car_legal(v_51)) v_51 = cdrerror(v_51); else
    v_51 = cdr(v_51);
    if (!car_legal(v_51)) v_52 = carerror(v_51); else
    v_52 = car(v_51);
    v_51 = qvalue(basic_elt(env, 4)); // ycoord!*
    v_51 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_52) + static_cast<std::uintptr_t>(v_51) - TAG_FIXNUM);
    {   LispObject fn = basic_elt(env, 10); // min
    v_51 = (*qfn2(fn))(fn, v_53, v_51);
    }
    env = stack[-2];
    setvalue(basic_elt(env, 6), v_51); // ymin!*
    v_53 = qvalue(basic_elt(env, 7)); // ymax!*
    v_51 = stack[0];
    if (!car_legal(v_51)) v_51 = cdrerror(v_51); else
    v_51 = cdr(v_51);
    if (!car_legal(v_51)) v_52 = cdrerror(v_51); else
    v_52 = cdr(v_51);
    v_51 = qvalue(basic_elt(env, 4)); // ycoord!*
    v_51 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_52) + static_cast<std::uintptr_t>(v_51) - TAG_FIXNUM);
    {   LispObject fn = basic_elt(env, 11); // max
    v_51 = (*qfn2(fn))(fn, v_53, v_51);
    }
    env = stack[-2];
    setvalue(basic_elt(env, 7), v_51); // ymax!*
    v_51 = nil;
    return onevalue(v_51);
}



// Code for !:times

static LispObject CC_Ttimes(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_41, v_42, v_43;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_42 = v_3;
    v_43 = v_2;
// end of prologue
    v_41 = v_43;
    if (v_41 == nil) goto v_11;
    else goto v_12;
v_11:
    v_41 = lisp_true;
    goto v_10;
v_12:
    v_41 = v_42;
    v_41 = (v_41 == nil ? lisp_true : nil);
    goto v_10;
    v_41 = nil;
v_10:
    if (v_41 == nil) goto v_8;
    v_41 = nil;
    goto v_6;
v_8:
    v_41 = v_43;
    if (!consp(v_41)) goto v_24;
    else goto v_25;
v_24:
    v_41 = v_42;
    v_41 = (consp(v_41) ? nil : lisp_true);
    goto v_23;
v_25:
    v_41 = nil;
    goto v_23;
    v_41 = nil;
v_23:
    if (v_41 == nil) goto v_21;
    v_41 = v_43;
    return times2(v_41, v_42);
v_21:
    v_41 = basic_elt(env, 1); // times
    {
        LispObject fn = basic_elt(env, 2); // dcombine
        return (*qfn3(fn))(fn, v_43, v_42, v_41);
    }
    v_41 = nil;
v_6:
    return onevalue(v_41);
}



// Code for mkrn

static LispObject CC_mkrn(LispObject env,
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    stack[-1] = v_3;
    stack[-2] = v_2;
// end of prologue
v_7:
    v_34 = stack[-1];
    v_33 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_33 = static_cast<LispObject>(lessp2(v_34, v_33));
    v_33 = v_33 ? lisp_true : nil;
    env = stack[-4];
    if (v_33 == nil) goto v_11;
    v_33 = stack[-2];
    v_33 = negate(v_33);
    env = stack[-4];
    stack[-2] = v_33;
    v_33 = stack[-1];
    v_33 = negate(v_33);
    env = stack[-4];
    stack[-1] = v_33;
    goto v_7;
v_11:
    v_34 = stack[-2];
    v_33 = stack[-1];
    v_33 = Lgcd_2(nil, v_34, v_33);
    env = stack[-4];
    stack[-3] = v_33;
    stack[0] = basic_elt(env, 1); // !:rn!:
    v_34 = stack[-2];
    v_33 = stack[-3];
    stack[-2] = quot2(v_34, v_33);
    env = stack[-4];
    v_34 = stack[-1];
    v_33 = stack[-3];
    v_33 = quot2(v_34, v_33);
    {
        LispObject v_39 = stack[0];
        LispObject v_40 = stack[-2];
        return list2star(v_39, v_40, v_33);
    }
    v_33 = nil;
    return onevalue(v_33);
}



// Code for gperm1

static LispObject CC_gperm1(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_38, v_39, v_40;
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
v_11:
    v_38 = stack[-4];
    if (v_38 == nil) goto v_14;
    else goto v_15;
v_14:
    v_40 = stack[-3];
    v_39 = stack[-2];
    v_38 = stack[-1];
    return acons(v_40, v_39, v_38);
v_15:
    v_38 = stack[-4];
    if (!car_legal(v_38)) v_38 = cdrerror(v_38); else
    v_38 = cdr(v_38);
    stack[-5] = v_38;
    v_38 = stack[-4];
    if (!car_legal(v_38)) v_39 = carerror(v_38); else
    v_39 = car(v_38);
    v_38 = stack[-2];
    v_38 = cons(v_39, v_38);
    env = stack[-6];
    stack[0] = v_38;
    v_39 = stack[-3];
    v_38 = stack[-2];
    v_38 = cons(v_39, v_38);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 1); // rev
    v_39 = (*qfn2(fn))(fn, stack[-4], v_38);
    }
    env = stack[-6];
    v_38 = stack[-1];
    v_38 = cons(v_39, v_38);
    env = stack[-6];
    stack[-1] = v_38;
    v_38 = stack[0];
    stack[-2] = v_38;
    v_38 = stack[-5];
    stack[-4] = v_38;
    goto v_11;
    v_38 = nil;
    return onevalue(v_38);
}



// Code for evaluate!-in!-order

static LispObject CC_evaluateKinKorder(LispObject env,
                         LispObject v_2, LispObject v_3)
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
v_7:
    v_53 = stack[-2];
    if (!consp(v_53)) goto v_14;
    else goto v_15;
v_14:
    v_53 = lisp_true;
    goto v_13;
v_15:
    v_53 = stack[-2];
    if (!car_legal(v_53)) v_53 = carerror(v_53); else
    v_53 = car(v_53);
    v_53 = (consp(v_53) ? nil : lisp_true);
    goto v_13;
    v_53 = nil;
v_13:
    if (v_53 == nil) goto v_11;
    v_53 = stack[-2];
    {
        LispObject fn = basic_elt(env, 1); // !*d2n
        return (*qfn1(fn))(fn, v_53);
    }
v_11:
    v_53 = stack[-2];
    if (!car_legal(v_53)) v_53 = carerror(v_53); else
    v_53 = car(v_53);
    if (!car_legal(v_53)) v_53 = carerror(v_53); else
    v_53 = car(v_53);
    if (!car_legal(v_53)) v_54 = carerror(v_53); else
    v_54 = car(v_53);
    v_53 = stack[-1];
    if (!car_legal(v_53)) v_53 = carerror(v_53); else
    v_53 = car(v_53);
    if (!car_legal(v_53)) v_53 = carerror(v_53); else
    v_53 = car(v_53);
    if (equal(v_54, v_53)) goto v_25;
    else goto v_26;
v_25:
    v_53 = stack[-2];
    if (!car_legal(v_53)) v_53 = carerror(v_53); else
    v_53 = car(v_53);
    if (!car_legal(v_53)) v_54 = cdrerror(v_53); else
    v_54 = cdr(v_53);
    v_53 = stack[-1];
    if (!car_legal(v_53)) v_53 = cdrerror(v_53); else
    v_53 = cdr(v_53);
    {   LispObject fn = basic_elt(env, 0); // evaluate!-in!-order
    stack[-3] = (*qfn2(fn))(fn, v_54, v_53);
    }
    env = stack[-4];
    v_53 = stack[-2];
    if (!car_legal(v_53)) v_53 = carerror(v_53); else
    v_53 = car(v_53);
    if (!car_legal(v_53)) v_53 = carerror(v_53); else
    v_53 = car(v_53);
    if (!car_legal(v_53)) stack[0] = cdrerror(v_53); else
    stack[0] = cdr(v_53);
    v_53 = stack[-2];
    if (!car_legal(v_53)) stack[-2] = cdrerror(v_53); else
    stack[-2] = cdr(v_53);
    v_53 = stack[-1];
    v_53 = ncons(v_53);
    env = stack[-4];
    {
        LispObject v_59 = stack[-3];
        LispObject v_60 = stack[0];
        LispObject v_61 = stack[-2];
        LispObject fn = basic_elt(env, 2); // horner!-rule
        return (*qfn4up(fn))(fn, v_59, v_60, v_61, v_53);
    }
v_26:
    v_53 = stack[-1];
    if (!car_legal(v_53)) v_53 = cdrerror(v_53); else
    v_53 = cdr(v_53);
    stack[-1] = v_53;
    goto v_7;
    v_53 = nil;
    return onevalue(v_53);
}



// Code for delete_from_alglist

static LispObject CC_delete_from_alglist(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_18 = v_2;
// end of prologue
    v_17 = stack[0];
    if (v_17 == nil) goto v_7;
    else goto v_8;
v_7:
    v_17 = nil;
    goto v_6;
v_8:
    v_17 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // remhash
    v_17 = (*qfn2(fn))(fn, v_18, v_17);
    }
    v_17 = stack[0];
    goto v_6;
    v_17 = nil;
v_6:
    return onevalue(v_17);
}



// Code for gcdf!*

static LispObject CC_gcdfH(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_14, v_15, v_16;
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
    v_15 = v_3;
    v_16 = v_2;
// end of prologue
// Binding !*gcd
// FLUIDBIND: reloadenv=1 litvec-offset=1 saveloc=0
{   bind_fluid_stack bind_fluid_var(-1, 1, 0);
    setvalue(basic_elt(env, 1), nil); // !*gcd
    v_14 = lisp_true;
    setvalue(basic_elt(env, 1), v_14); // !*gcd
    v_14 = v_16;
    {   LispObject fn = basic_elt(env, 2); // gcdf
    v_14 = (*qfn2(fn))(fn, v_14, v_15);
    }
    ;}  // end of a binding scope
    return onevalue(v_14);
}



// Code for prin2t

static LispObject CC_prin2t(LispObject env,
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
    stack[0] = v_2;
// end of prologue
    v_8 = stack[0];
    v_8 = Lprinc(nil, v_8);
    env = stack[-1];
    v_8 = Lterpri(nil);
    v_8 = stack[0];
    return onevalue(v_8);
}



// Code for reval1

static LispObject CC_reval1(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_339, v_340, v_341;
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
    v_339 = qvalue(basic_elt(env, 1)); // !*revalp
    if (v_339 == nil) goto v_7;
    else goto v_8;
v_7:
    v_339 = stack[-2];
    goto v_6;
v_8:
    v_339 = qvalue(basic_elt(env, 2)); // varstack!*
// Binding varstack!*
// FLUIDBIND: reloadenv=4 litvec-offset=2 saveloc=3
{   bind_fluid_stack bind_fluid_var(-4, 2, -3);
    setvalue(basic_elt(env, 2), v_339); // varstack!*
    v_339 = stack[-2];
    if (v_339 == nil) goto v_22;
    else goto v_23;
v_22:
    v_339 = nil;
    goto v_19;
v_23:
    v_339 = stack[-2];
    v_339 = Lstringp(nil, v_339);
    env = stack[-4];
    if (v_339 == nil) goto v_27;
    v_339 = stack[-2];
    goto v_19;
v_27:
    v_339 = stack[-2];
    v_339 = integerp(v_339);
    if (v_339 == nil) goto v_32;
    v_339 = qvalue(basic_elt(env, 3)); // dmode!*
    if (!symbolp(v_339)) v_339 = nil;
    else { v_339 = qfastgets(v_339);
           if (v_339 != nil) { v_339 = elt(v_339, 5); // convert
#ifdef RECORD_GET
             if (v_339 == SPID_NOPROP)
                record_get(elt(fastget_names, 5), 0),
                v_339 = nil;
             else record_get(elt(fastget_names, 5), 1),
                v_339 = lisp_true; }
           else record_get(elt(fastget_names, 5), 0); }
#else
             if (v_339 == SPID_NOPROP) v_339 = nil; else v_339 = lisp_true; }}
#endif
    if (v_339 == nil) goto v_38;
    v_340 = stack[-2];
    v_339 = stack[-1];
    {   LispObject fn = basic_elt(env, 19); // reval2
    v_339 = (*qfn2(fn))(fn, v_340, v_339);
    }
    goto v_36;
v_38:
    v_339 = stack[-2];
    goto v_36;
    v_339 = nil;
v_36:
    goto v_19;
v_32:
    v_339 = stack[-2];
    if (!consp(v_339)) goto v_47;
    else goto v_48;
v_47:
    v_339 = qvalue(basic_elt(env, 4)); // subfg!*
    if (v_339 == nil) goto v_52;
    else goto v_53;
v_52:
    v_339 = stack[-2];
    goto v_19;
v_53:
    v_339 = stack[-2];
    if (symbolp(v_339)) goto v_58;
    else goto v_57;
v_58:
    v_339 = stack[-2];
    if (!symbolp(v_339)) v_339 = nil;
    else { v_339 = qfastgets(v_339);
           if (v_339 != nil) { v_339 = elt(v_339, 4); // avalue
#ifdef RECORD_GET
             if (v_339 != SPID_NOPROP)
                record_get(elt(fastget_names, 4), 1);
             else record_get(elt(fastget_names, 4), 0),
                v_339 = nil; }
           else record_get(elt(fastget_names, 4), 0); }
#else
             if (v_339 == SPID_NOPROP) v_339 = nil; }}
#endif
    stack[0] = v_339;
    if (v_339 == nil) goto v_57;
    v_340 = stack[-2];
    v_339 = qvalue(basic_elt(env, 2)); // varstack!*
    v_339 = Lmemq(nil, v_340, v_339);
    if (v_339 == nil) goto v_66;
    v_339 = stack[-2];
    {   LispObject fn = basic_elt(env, 20); // recursiveerror
    v_339 = (*qfn1(fn))(fn, v_339);
    }
    env = stack[-4];
    goto v_64;
v_66:
    v_340 = stack[-2];
    v_339 = qvalue(basic_elt(env, 2)); // varstack!*
    v_339 = cons(v_340, v_339);
    env = stack[-4];
    setvalue(basic_elt(env, 2), v_339); // varstack!*
    v_339 = stack[0];
    if (!car_legal(v_339)) v_340 = carerror(v_339); else
    v_340 = car(v_339);
    v_339 = basic_elt(env, 5); // evfn
    v_339 = get(v_340, v_339);
    env = stack[-4];
    v_341 = v_339;
    if (v_339 == nil) goto v_80;
    v_340 = stack[-2];
    v_339 = stack[-1];
    v_339 = Lapply2(nil, v_341, v_340, v_339);
    goto v_78;
v_80:
    v_339 = stack[0];
    if (!car_legal(v_339)) v_339 = cdrerror(v_339); else
    v_339 = cdr(v_339);
    if (!car_legal(v_339)) v_340 = carerror(v_339); else
    v_340 = car(v_339);
    v_339 = stack[-1];
    {   LispObject fn = basic_elt(env, 0); // reval1
    v_339 = (*qfn2(fn))(fn, v_340, v_339);
    }
    goto v_78;
    v_339 = nil;
v_78:
    goto v_19;
v_64:
    goto v_51;
v_57:
    goto v_51;
v_51:
    goto v_21;
v_48:
    v_339 = stack[-2];
    if (!car_legal(v_339)) v_339 = carerror(v_339); else
    v_339 = car(v_339);
    if (symbolp(v_339)) goto v_100;
    v_339 = stack[-2];
    if (!car_legal(v_339)) v_339 = carerror(v_339); else
    v_339 = car(v_339);
    if (!car_legal(v_339)) v_340 = carerror(v_339); else
    v_340 = car(v_339);
    v_339 = basic_elt(env, 6); // structfn
    v_339 = get(v_340, v_339);
    env = stack[-4];
    stack[0] = v_339;
    if (v_339 == nil) goto v_106;
    v_339 = stack[-2];
    v_339 = ncons(v_339);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 21); // apply
    v_339 = (*qfn2(fn))(fn, stack[0], v_339);
    }
    goto v_19;
v_106:
    v_340 = stack[-2];
    v_339 = lisp_true;
    {   LispObject fn = basic_elt(env, 22); // errpri2
    v_339 = (*qfn2(fn))(fn, v_340, v_339);
    }
    env = stack[-4];
    goto v_104;
v_104:
    goto v_21;
v_100:
    v_339 = stack[-2];
    if (!car_legal(v_339)) v_340 = carerror(v_339); else
    v_340 = car(v_339);
    v_339 = basic_elt(env, 7); // !*sq
    if (v_340 == v_339) goto v_121;
    else goto v_122;
v_121:
    v_339 = stack[-2];
    if (!car_legal(v_339)) v_339 = cdrerror(v_339); else
    v_339 = cdr(v_339);
    if (!car_legal(v_339)) v_339 = cdrerror(v_339); else
    v_339 = cdr(v_339);
    if (!car_legal(v_339)) v_339 = carerror(v_339); else
    v_339 = car(v_339);
    if (v_339 == nil) goto v_129;
    v_339 = qvalue(basic_elt(env, 8)); // !*resimp
    if (v_339 == nil) goto v_135;
    else goto v_129;
v_135:
    v_339 = stack[-1];
    if (v_339 == nil) goto v_139;
    else goto v_140;
v_139:
    v_339 = stack[-2];
    goto v_138;
v_140:
    v_339 = stack[-2];
    if (!car_legal(v_339)) v_339 = cdrerror(v_339); else
    v_339 = cdr(v_339);
    if (!car_legal(v_339)) v_339 = carerror(v_339); else
    v_339 = car(v_339);
    {   LispObject fn = basic_elt(env, 23); // prepsqxx
    v_339 = (*qfn1(fn))(fn, v_339);
    }
    goto v_138;
    v_339 = nil;
v_138:
    goto v_127;
v_129:
    v_340 = stack[-2];
    v_339 = stack[-1];
    {   LispObject fn = basic_elt(env, 19); // reval2
    v_339 = (*qfn2(fn))(fn, v_340, v_339);
    }
    goto v_127;
    v_339 = nil;
v_127:
    goto v_19;
v_122:
    v_339 = stack[-2];
    if (!car_legal(v_339)) v_339 = carerror(v_339); else
    v_339 = car(v_339);
    if (!symbolp(v_339)) v_339 = nil;
    else { v_339 = qfastgets(v_339);
           if (v_339 != nil) { v_339 = elt(v_339, 39); // remember
#ifdef RECORD_GET
             if (v_339 == SPID_NOPROP)
                record_get(elt(fastget_names, 39), 0),
                v_339 = nil;
             else record_get(elt(fastget_names, 39), 1),
                v_339 = lisp_true; }
           else record_get(elt(fastget_names, 39), 0); }
#else
             if (v_339 == SPID_NOPROP) v_339 = nil; else v_339 = lisp_true; }}
#endif
    if (v_339 == nil) goto v_155;
    v_340 = stack[-2];
    v_339 = stack[-1];
    {   LispObject fn = basic_elt(env, 24); // rmmbreval
    v_339 = (*qfn2(fn))(fn, v_340, v_339);
    }
    goto v_19;
v_155:
    v_339 = stack[-2];
    if (!car_legal(v_339)) v_339 = carerror(v_339); else
    v_339 = car(v_339);
    if (!symbolp(v_339)) v_339 = nil;
    else { v_339 = qfastgets(v_339);
           if (v_339 != nil) { v_339 = elt(v_339, 59); // opfn
#ifdef RECORD_GET
             if (v_339 == SPID_NOPROP)
                record_get(elt(fastget_names, 59), 0),
                v_339 = nil;
             else record_get(elt(fastget_names, 59), 1),
                v_339 = lisp_true; }
           else record_get(elt(fastget_names, 59), 0); }
#else
             if (v_339 == SPID_NOPROP) v_339 = nil; else v_339 = lisp_true; }}
#endif
    if (v_339 == nil) goto v_163;
    v_339 = stack[-2];
    {   LispObject fn = basic_elt(env, 25); // opfneval
    v_340 = (*qfn1(fn))(fn, v_339);
    }
    env = stack[-4];
    v_339 = stack[-1];
    {   LispObject fn = basic_elt(env, 0); // reval1
    v_339 = (*qfn2(fn))(fn, v_340, v_339);
    }
    goto v_19;
v_163:
    v_339 = stack[-2];
    if (!car_legal(v_339)) v_339 = carerror(v_339); else
    v_339 = car(v_339);
    if (!symbolp(v_339)) v_339 = nil;
    else { v_339 = qfastgets(v_339);
           if (v_339 != nil) { v_339 = elt(v_339, 45); // psopfn
#ifdef RECORD_GET
             if (v_339 != SPID_NOPROP)
                record_get(elt(fastget_names, 45), 1);
             else record_get(elt(fastget_names, 45), 0),
                v_339 = nil; }
           else record_get(elt(fastget_names, 45), 0); }
#else
             if (v_339 == SPID_NOPROP) v_339 = nil; }}
#endif
    stack[0] = v_339;
    if (v_339 == nil) goto v_172;
    v_340 = stack[0];
    v_339 = stack[-2];
    if (!car_legal(v_339)) v_339 = cdrerror(v_339); else
    v_339 = cdr(v_339);
    v_339 = Lapply1(nil, v_340, v_339);
    env = stack[-4];
    stack[-2] = v_339;
    v_340 = stack[0];
    v_339 = basic_elt(env, 9); // cleanupfn
    v_339 = get(v_340, v_339);
    env = stack[-4];
    stack[0] = v_339;
    if (v_339 == nil) goto v_183;
    v_341 = stack[0];
    v_340 = stack[-2];
    v_339 = stack[-1];
    v_339 = Lapply2(nil, v_341, v_340, v_339);
    stack[-2] = v_339;
    goto v_181;
v_183:
v_181:
    v_339 = stack[-2];
    goto v_19;
v_172:
    v_339 = stack[-2];
    if (!car_legal(v_339)) v_339 = carerror(v_339); else
    v_339 = car(v_339);
    {   LispObject fn = basic_elt(env, 26); // arrayp
    v_339 = (*qfn1(fn))(fn, v_339);
    }
    env = stack[-4];
    if (v_339 == nil) goto v_193;
    v_339 = stack[-2];
    {   LispObject fn = basic_elt(env, 27); // getelv
    v_340 = (*qfn1(fn))(fn, v_339);
    }
    env = stack[-4];
    v_339 = stack[-1];
    {   LispObject fn = basic_elt(env, 0); // reval1
    v_339 = (*qfn2(fn))(fn, v_340, v_339);
    }
    goto v_19;
v_193:
v_21:
    v_339 = stack[-2];
    {   LispObject fn = basic_elt(env, 28); // getrtype
    v_339 = (*qfn1(fn))(fn, v_339);
    }
    env = stack[-4];
    stack[0] = v_339;
    if (v_339 == nil) goto v_204;
    v_340 = stack[0];
    v_339 = basic_elt(env, 5); // evfn
    v_339 = get(v_340, v_339);
    env = stack[-4];
    v_341 = v_339;
    if (v_339 == nil) goto v_210;
    v_340 = stack[-2];
    v_339 = stack[-1];
    v_339 = Lapply2(nil, v_341, v_340, v_339);
    goto v_208;
v_210:
    stack[-2] = basic_elt(env, 10); // alg
    stack[-1] = static_cast<LispObject>(1616)+TAG_FIXNUM; // 101
    v_340 = basic_elt(env, 11); // "Missing evaluation for type"
    v_339 = stack[0];
    v_339 = list2(v_340, v_339);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 29); // rerror
    v_339 = (*qfn3(fn))(fn, stack[-2], stack[-1], v_339);
    }
    goto v_208;
    v_339 = nil;
v_208:
    goto v_202;
v_204:
    v_339 = stack[-2];
    if (!consp(v_339)) goto v_231;
    v_339 = stack[-2];
    if (!car_legal(v_339)) v_339 = cdrerror(v_339); else
    v_339 = cdr(v_339);
    if (!consp(v_339)) goto v_236;
    v_339 = stack[-2];
    if (!car_legal(v_339)) v_339 = cdrerror(v_339); else
    v_339 = cdr(v_339);
    if (!car_legal(v_339)) v_339 = carerror(v_339); else
    v_339 = car(v_339);
    {   LispObject fn = basic_elt(env, 28); // getrtype
    v_339 = (*qfn1(fn))(fn, v_339);
    }
    env = stack[-4];
    v_341 = v_339;
    if (v_339 == nil) goto v_241;
    else goto v_242;
v_241:
    v_339 = nil;
    goto v_240;
v_242:
    v_340 = v_341;
    v_339 = basic_elt(env, 12); // list
    if (v_340 == v_339) goto v_256;
    else goto v_257;
v_256:
    v_339 = stack[-2];
    if (!car_legal(v_339)) v_339 = cdrerror(v_339); else
    v_339 = cdr(v_339);
    if (!car_legal(v_339)) v_339 = cdrerror(v_339); else
    v_339 = cdr(v_339);
    goto v_255;
v_257:
    v_339 = nil;
    goto v_255;
    v_339 = nil;
v_255:
    if (v_339 == nil) goto v_252;
    else goto v_253;
v_252:
    v_340 = v_341;
    v_339 = basic_elt(env, 13); // aggregatefn
    v_339 = get(v_340, v_339);
    env = stack[-4];
    stack[0] = v_339;
    if (v_339 == nil) goto v_268;
    else goto v_269;
v_268:
    v_339 = nil;
    goto v_267;
v_269:
    v_340 = stack[0];
    v_339 = basic_elt(env, 14); // matrixmap
    if (v_340 == v_339) goto v_283;
    v_339 = lisp_true;
    goto v_281;
v_283:
    v_339 = stack[-2];
    if (!car_legal(v_339)) v_340 = carerror(v_339); else
    v_340 = car(v_339);
    v_339 = basic_elt(env, 15); // matmapfn
    v_339 = Lflagp(nil, v_340, v_339);
    env = stack[-4];
    goto v_281;
    v_339 = nil;
v_281:
    if (v_339 == nil) goto v_279;
    v_339 = stack[-2];
    if (!car_legal(v_339)) v_340 = carerror(v_339); else
    v_340 = car(v_339);
    v_339 = basic_elt(env, 16); // boolean
    v_339 = Lflagp(nil, v_340, v_339);
    env = stack[-4];
    if (v_339 == nil) goto v_295;
    else goto v_296;
v_295:
    v_339 = qvalue(basic_elt(env, 17)); // !*listargs
    if (v_339 == nil) goto v_303;
    else goto v_304;
v_303:
    v_339 = stack[-2];
    if (!car_legal(v_339)) v_340 = carerror(v_339); else
    v_340 = car(v_339);
    v_339 = basic_elt(env, 18); // listargp
    v_339 = Lflagp(nil, v_340, v_339);
    env = stack[-4];
    v_339 = (v_339 == nil ? lisp_true : nil);
    goto v_302;
v_304:
    v_339 = nil;
    goto v_302;
    v_339 = nil;
v_302:
    goto v_294;
v_296:
    v_339 = nil;
    goto v_294;
    v_339 = nil;
v_294:
    goto v_277;
v_279:
    v_339 = nil;
    goto v_277;
    v_339 = nil;
v_277:
    goto v_267;
    v_339 = nil;
v_267:
    goto v_251;
v_253:
    v_339 = nil;
    goto v_251;
    v_339 = nil;
v_251:
    goto v_240;
    v_339 = nil;
v_240:
    goto v_234;
v_236:
    v_339 = nil;
    goto v_234;
    v_339 = nil;
v_234:
    goto v_229;
v_231:
    v_339 = nil;
    goto v_229;
    v_339 = nil;
v_229:
    if (v_339 == nil) goto v_227;
    v_341 = stack[0];
    v_340 = stack[-2];
    v_339 = stack[-1];
    v_339 = Lapply2(nil, v_341, v_340, v_339);
    goto v_202;
v_227:
    v_340 = stack[-2];
    v_339 = stack[-1];
    {   LispObject fn = basic_elt(env, 19); // reval2
    v_339 = (*qfn2(fn))(fn, v_340, v_339);
    }
    goto v_202;
    v_339 = nil;
v_202:
v_19:
    ;}  // end of a binding scope
    goto v_6;
    v_339 = nil;
v_6:
    return onevalue(v_339);
}



// Code for sfto_dcontentf1

static LispObject CC_sfto_dcontentf1(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_3;
    v_44 = v_2;
// end of prologue
v_8:
    v_45 = stack[0];
    v_43 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_45 == v_43) goto v_11;
    else goto v_12;
v_11:
    v_43 = stack[0];
    goto v_7;
v_12:
    v_43 = v_44;
    if (!consp(v_43)) goto v_20;
    else goto v_21;
v_20:
    v_43 = lisp_true;
    goto v_19;
v_21:
    v_43 = v_44;
    if (!car_legal(v_43)) v_43 = carerror(v_43); else
    v_43 = car(v_43);
    v_43 = (consp(v_43) ? nil : lisp_true);
    goto v_19;
    v_43 = nil;
v_19:
    if (v_43 == nil) goto v_17;
    v_43 = v_44;
    {   LispObject fn = basic_elt(env, 1); // absf
    v_44 = (*qfn1(fn))(fn, v_43);
    }
    env = stack[-2];
    v_43 = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // sfto_gcdf
        return (*qfn2(fn))(fn, v_44, v_43);
    }
v_17:
    v_43 = v_44;
    if (!car_legal(v_43)) v_43 = cdrerror(v_43); else
    v_43 = cdr(v_43);
    stack[-1] = v_43;
    v_43 = v_44;
    if (!car_legal(v_43)) v_43 = carerror(v_43); else
    v_43 = car(v_43);
    if (!car_legal(v_43)) v_44 = cdrerror(v_43); else
    v_44 = cdr(v_43);
    v_43 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // sfto_dcontentf1
    v_43 = (*qfn2(fn))(fn, v_44, v_43);
    }
    env = stack[-2];
    stack[0] = v_43;
    v_43 = stack[-1];
    v_44 = v_43;
    goto v_8;
    v_43 = nil;
v_7:
    return onevalue(v_43);
}



// Code for sqchk

static LispObject CC_sqchk(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_33, v_34, v_35;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_35 = v_2;
// end of prologue
    v_33 = v_35;
    if (!consp(v_33)) goto v_6;
    else goto v_7;
v_6:
    v_33 = v_35;
    goto v_5;
v_7:
    v_33 = v_35;
    if (!car_legal(v_33)) v_33 = carerror(v_33); else
    v_33 = car(v_33);
    if (!symbolp(v_33)) v_33 = nil;
    else { v_33 = qfastgets(v_33);
           if (v_33 != nil) { v_33 = elt(v_33, 44); // prepfn2
#ifdef RECORD_GET
             if (v_33 != SPID_NOPROP)
                record_get(elt(fastget_names, 44), 1);
             else record_get(elt(fastget_names, 44), 0),
                v_33 = nil; }
           else record_get(elt(fastget_names, 44), 0); }
#else
             if (v_33 == SPID_NOPROP) v_33 = nil; }}
#endif
    v_34 = v_33;
    v_33 = v_34;
    if (v_33 == nil) goto v_19;
    v_33 = v_34;
    v_34 = v_35;
        return Lapply1(nil, v_33, v_34);
v_19:
    v_33 = v_35;
    if (!car_legal(v_33)) v_33 = carerror(v_33); else
    v_33 = car(v_33);
    if (!consp(v_33)) goto v_24;
    else goto v_25;
v_24:
    v_33 = v_35;
    goto v_17;
v_25:
    v_33 = v_35;
    {
        LispObject fn = basic_elt(env, 1); // prepf
        return (*qfn1(fn))(fn, v_33);
    }
    v_33 = nil;
v_17:
    goto v_5;
    v_33 = nil;
v_5:
    return onevalue(v_33);
}



// Code for removev

static LispObject CC_removev(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_33, v_34, v_35, v_36;
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
    v_36 = v_3;
    v_35 = v_2;
// end of prologue
v_7:
    v_33 = v_35;
    if (v_33 == nil) goto v_10;
    else goto v_11;
v_10:
    v_34 = basic_elt(env, 1); // "Vertex"
    v_35 = v_36;
    v_33 = basic_elt(env, 2); // "is absent."
    v_33 = list3(v_34, v_35, v_33);
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 3); // cerror
        return (*qfn1(fn))(fn, v_33);
    }
v_11:
    v_33 = v_35;
    if (!car_legal(v_33)) v_33 = cdrerror(v_33); else
    v_33 = cdr(v_33);
    if (!car_legal(v_33)) v_34 = carerror(v_33); else
    v_34 = car(v_33);
    v_33 = v_36;
    if (v_34 == v_33) goto v_18;
    else goto v_19;
v_18:
    v_33 = v_35;
    v_34 = v_35;
    if (!car_legal(v_34)) v_34 = cdrerror(v_34); else
    v_34 = cdr(v_34);
    if (!car_legal(v_34)) v_34 = cdrerror(v_34); else
    v_34 = cdr(v_34);
    if (!car_legal(v_33)) rplacd_fails(v_33);
    setcdr(v_33, v_34);
    goto v_6;
v_19:
    v_33 = v_35;
    if (!car_legal(v_33)) v_33 = cdrerror(v_33); else
    v_33 = cdr(v_33);
    v_35 = v_33;
    goto v_7;
    v_33 = nil;
v_6:
    return onevalue(v_33);
}



// Code for talp_simplat1

static LispObject CC_talp_simplat1(LispObject env,
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
    v_35 = v_3;
    stack[-1] = v_2;
// end of prologue
    v_35 = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // talp_simpat
    v_35 = (*qfn1(fn))(fn, v_35);
    }
    env = stack[-3];
    stack[-1] = v_35;
    v_35 = stack[-1];
    {   LispObject fn = basic_elt(env, 4); // talp_op
    stack[-2] = (*qfn1(fn))(fn, v_35);
    }
    env = stack[-3];
    v_35 = stack[-1];
    {   LispObject fn = basic_elt(env, 5); // talp_arg2l
    stack[0] = (*qfn1(fn))(fn, v_35);
    }
    env = stack[-3];
    v_35 = stack[-1];
    {   LispObject fn = basic_elt(env, 6); // talp_arg2r
    v_35 = (*qfn1(fn))(fn, v_35);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 7); // talp_simplat2
    v_35 = (*qfn3(fn))(fn, stack[-2], stack[0], v_35);
    }
    env = stack[-3];
    v_37 = v_35;
    v_35 = v_37;
    if (v_35 == nil) goto v_20;
    v_36 = v_37;
    v_35 = lisp_true;
    if (v_36 == v_35) goto v_24;
    else goto v_25;
v_24:
    v_35 = basic_elt(env, 1); // true
    goto v_7;
v_25:
    v_35 = v_37;
    goto v_7;
    goto v_18;
v_20:
    v_35 = basic_elt(env, 2); // false
    goto v_7;
v_18:
    v_35 = nil;
v_7:
    return onevalue(v_35);
}



// Code for ibalp_varlat

static LispObject CC_ibalp_varlat(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // ibalp_arg2l
    v_11 = (*qfn1(fn))(fn, v_11);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 2); // ibalp_varlt
    stack[-1] = (*qfn1(fn))(fn, v_11);
    }
    env = stack[-2];
    v_11 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // ibalp_arg2r
    v_11 = (*qfn1(fn))(fn, v_11);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 2); // ibalp_varlt
    v_11 = (*qfn1(fn))(fn, v_11);
    }
    env = stack[-2];
    {
        LispObject v_14 = stack[-1];
        LispObject fn = basic_elt(env, 4); // union
        return (*qfn2(fn))(fn, v_14, v_11);
    }
}



// Code for quotfd

static LispObject CC_quotfd(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_40, v_41, v_42, v_43;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_42 = v_3;
    v_43 = v_2;
// end of prologue
    v_41 = v_43;
    v_40 = v_42;
    if (equal(v_41, v_40)) goto v_7;
    else goto v_8;
v_7:
    v_40 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_6;
v_8:
    v_40 = qvalue(basic_elt(env, 1)); // dmode!*
    if (!symbolp(v_40)) v_40 = nil;
    else { v_40 = qfastgets(v_40);
           if (v_40 != nil) { v_40 = elt(v_40, 3); // field
#ifdef RECORD_GET
             if (v_40 == SPID_NOPROP)
                record_get(elt(fastget_names, 3), 0),
                v_40 = nil;
             else record_get(elt(fastget_names, 3), 1),
                v_40 = lisp_true; }
           else record_get(elt(fastget_names, 3), 0); }
#else
             if (v_40 == SPID_NOPROP) v_40 = nil; else v_40 = lisp_true; }}
#endif
    if (v_40 == nil) goto v_13;
    v_40 = v_43;
    v_41 = v_42;
    {
        LispObject fn = basic_elt(env, 2); // divd
        return (*qfn2(fn))(fn, v_40, v_41);
    }
v_13:
    v_40 = v_43;
    if (!consp(v_40)) goto v_23;
    else goto v_24;
v_23:
    v_40 = lisp_true;
    goto v_22;
v_24:
    v_40 = v_43;
    if (!car_legal(v_40)) v_40 = carerror(v_40); else
    v_40 = car(v_40);
    v_40 = (consp(v_40) ? nil : lisp_true);
    goto v_22;
    v_40 = nil;
v_22:
    if (v_40 == nil) goto v_20;
    v_40 = v_43;
    v_41 = v_42;
    {
        LispObject fn = basic_elt(env, 3); // quotdd
        return (*qfn2(fn))(fn, v_40, v_41);
    }
v_20:
    v_40 = v_43;
    v_41 = v_42;
    {
        LispObject fn = basic_elt(env, 4); // quotk
        return (*qfn2(fn))(fn, v_40, v_41);
    }
    v_40 = nil;
v_6:
    return onevalue(v_40);
}



// Code for mathml

static LispObject CC_mathml(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
    stack_popper stack_popper_var(1);
// end of prologue
    {   LispObject fn = basic_elt(env, 1); // lex
    v_9 = (*qfn0(fn))(fn);
    }
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // sub_math
        return (*qfn0(fn))(fn);
    }
    return onevalue(v_9);
}



// Code for sortcolelem

static LispObject CC_sortcolelem(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    stack[0] = nil;
    v_62 = stack[-2];
    if (!car_legal(v_62)) v_62 = cdrerror(v_62); else
    v_62 = cdr(v_62);
    stack[-4] = v_62;
v_14:
    v_62 = stack[0];
    if (v_62 == nil) goto v_18;
    goto v_13;
v_18:
    v_62 = stack[-4];
    if (v_62 == nil) goto v_23;
    else goto v_24;
v_23:
    stack[0] = stack[-2];
    v_63 = stack[-3];
    v_62 = stack[-1];
    v_62 = cons(v_63, v_62);
    env = stack[-5];
    v_62 = ncons(v_62);
    env = stack[-5];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_62);
    v_62 = lisp_true;
    stack[0] = v_62;
    goto v_22;
v_24:
    v_63 = stack[-3];
    v_62 = stack[-4];
    if (!car_legal(v_62)) v_62 = carerror(v_62); else
    v_62 = car(v_62);
    if (!car_legal(v_62)) v_62 = carerror(v_62); else
    v_62 = car(v_62);
    v_62 = static_cast<LispObject>(lessp2(v_63, v_62));
    v_62 = v_62 ? lisp_true : nil;
    env = stack[-5];
    if (v_62 == nil) goto v_34;
    stack[0] = stack[-2];
    v_63 = stack[-3];
    v_62 = stack[-1];
    v_62 = cons(v_63, v_62);
    env = stack[-5];
    v_63 = ncons(v_62);
    env = stack[-5];
    v_62 = stack[-4];
    if (!car_legal(v_63)) rplacd_fails(v_63);
    setcdr(v_63, v_62);
    v_62 = v_63;
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_62);
    v_62 = lisp_true;
    stack[0] = v_62;
    goto v_22;
v_34:
    v_63 = stack[-3];
    v_62 = stack[-4];
    if (!car_legal(v_62)) v_62 = carerror(v_62); else
    v_62 = car(v_62);
    if (!car_legal(v_62)) v_62 = carerror(v_62); else
    v_62 = car(v_62);
    v_62 = static_cast<LispObject>(greaterp2(v_63, v_62));
    v_62 = v_62 ? lisp_true : nil;
    env = stack[-5];
    if (v_62 == nil) goto v_50;
    v_62 = nil;
    stack[0] = v_62;
    v_62 = stack[-2];
    if (!car_legal(v_62)) v_62 = cdrerror(v_62); else
    v_62 = cdr(v_62);
    stack[-2] = v_62;
    v_62 = stack[-2];
    if (!car_legal(v_62)) v_62 = cdrerror(v_62); else
    v_62 = cdr(v_62);
    stack[-4] = v_62;
    goto v_22;
v_50:
v_22:
    goto v_14;
v_13:
    v_62 = nil;
    return onevalue(v_62);
}



// Code for prepf1a_reversed

static LispObject CC_prepf1a_reversed(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_112, v_113;
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
    v_112 = stack[-2];
    if (v_112 == nil) goto v_11;
    else goto v_12;
v_11:
    v_112 = stack[0];
    goto v_7;
v_12:
    v_112 = stack[-2];
    if (!consp(v_112)) goto v_19;
    else goto v_20;
v_19:
    v_112 = lisp_true;
    goto v_18;
v_20:
    v_112 = stack[-2];
    if (!car_legal(v_112)) v_112 = carerror(v_112); else
    v_112 = car(v_112);
    v_112 = (consp(v_112) ? nil : lisp_true);
    goto v_18;
    v_112 = nil;
v_18:
    if (v_112 == nil) goto v_16;
    v_112 = stack[-2];
    {   LispObject fn = basic_elt(env, 5); // prepd
    stack[-2] = (*qfn1(fn))(fn, v_112);
    }
    env = stack[-4];
    v_112 = stack[-1];
    {   LispObject fn = basic_elt(env, 6); // exchk
    v_112 = (*qfn1(fn))(fn, v_112);
    }
    env = stack[-4];
    v_112 = cons(stack[-2], v_112);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 7); // retimes
    v_112 = (*qfn1(fn))(fn, v_112);
    }
    env = stack[-4];
    stack[-1] = v_112;
    v_113 = stack[-1];
    v_112 = basic_elt(env, 1); // plus
    if (!consp(v_113)) goto v_40;
    v_113 = car(v_113);
    if (v_113 == v_112) goto v_39;
    else goto v_40;
v_39:
    v_112 = stack[-1];
    if (!car_legal(v_112)) v_112 = cdrerror(v_112); else
    v_112 = cdr(v_112);
    stack[-1] = v_112;
v_47:
    v_112 = stack[-1];
    if (v_112 == nil) goto v_52;
    else goto v_53;
v_52:
    goto v_46;
v_53:
    v_112 = stack[-1];
    if (!car_legal(v_112)) v_112 = carerror(v_112); else
    v_112 = car(v_112);
    v_113 = v_112;
    v_112 = stack[0];
    v_112 = cons(v_113, v_112);
    env = stack[-4];
    stack[0] = v_112;
    v_112 = stack[-1];
    if (!car_legal(v_112)) v_112 = cdrerror(v_112); else
    v_112 = cdr(v_112);
    stack[-1] = v_112;
    goto v_47;
v_46:
    goto v_38;
v_40:
    v_113 = stack[-1];
    v_112 = basic_elt(env, 2); // difference
    if (!consp(v_113)) goto v_65;
    v_113 = car(v_113);
    if (v_113 == v_112) goto v_64;
    else goto v_65;
v_64:
    v_112 = stack[-1];
    if (!car_legal(v_112)) v_112 = cdrerror(v_112); else
    v_112 = cdr(v_112);
    if (!car_legal(v_112)) v_113 = carerror(v_112); else
    v_113 = car(v_112);
    v_112 = stack[0];
    v_112 = cons(v_113, v_112);
    env = stack[-4];
    stack[0] = v_112;
    v_113 = basic_elt(env, 3); // minus
    v_112 = stack[-1];
    if (!car_legal(v_112)) v_112 = cdrerror(v_112); else
    v_112 = cdr(v_112);
    if (!car_legal(v_112)) v_112 = cdrerror(v_112); else
    v_112 = cdr(v_112);
    if (!car_legal(v_112)) v_112 = carerror(v_112); else
    v_112 = car(v_112);
    v_113 = list2(v_113, v_112);
    env = stack[-4];
    v_112 = stack[0];
    v_112 = cons(v_113, v_112);
    stack[0] = v_112;
    goto v_38;
v_65:
    v_113 = stack[-1];
    v_112 = stack[0];
    v_112 = cons(v_113, v_112);
    stack[0] = v_112;
    goto v_38;
v_38:
    v_112 = stack[0];
    goto v_7;
v_16:
    v_112 = stack[-2];
    if (!car_legal(v_112)) v_112 = carerror(v_112); else
    v_112 = car(v_112);
    if (!car_legal(v_112)) stack[-3] = cdrerror(v_112); else
    stack[-3] = cdr(v_112);
    v_112 = stack[-2];
    if (!car_legal(v_112)) v_112 = carerror(v_112); else
    v_112 = car(v_112);
    if (!car_legal(v_112)) v_112 = carerror(v_112); else
    v_112 = car(v_112);
    if (!car_legal(v_112)) v_113 = carerror(v_112); else
    v_113 = car(v_112);
    v_112 = basic_elt(env, 4); // k!*
    if (v_113 == v_112) goto v_94;
    else goto v_95;
v_94:
    v_112 = stack[-1];
    v_113 = v_112;
    goto v_93;
v_95:
    v_112 = stack[-2];
    if (!car_legal(v_112)) v_112 = carerror(v_112); else
    v_112 = car(v_112);
    if (!car_legal(v_112)) v_113 = carerror(v_112); else
    v_113 = car(v_112);
    v_112 = stack[-1];
    v_112 = cons(v_113, v_112);
    env = stack[-4];
    v_113 = v_112;
    goto v_93;
    v_113 = nil;
v_93:
    v_112 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // prepf1a_reversed
    v_112 = (*qfn3(fn))(fn, stack[-3], v_113, v_112);
    }
    env = stack[-4];
    stack[0] = v_112;
    v_112 = stack[-2];
    if (!car_legal(v_112)) v_112 = cdrerror(v_112); else
    v_112 = cdr(v_112);
    stack[-2] = v_112;
    goto v_8;
v_7:
    return onevalue(v_112);
}



// Code for comm_kernels

static LispObject CC_comm_kernels(LispObject env,
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
    v_7 = nil;
    {
        LispObject fn = basic_elt(env, 1); // comm_kernels1
        return (*qfn2(fn))(fn, v_8, v_7);
    }
}



// Code for fast!-column!-dim

static LispObject CC_fastKcolumnKdim(LispObject env,
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
    v_10 = v_9;
    v_9 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_9 = Lgetv(nil, v_10, v_9);
    env = stack[0];
    v_9 = Lupbv(nil, v_9);
    return add1(v_9);
}



// Code for evtdeg

static LispObject CC_evtdeg(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_22, v_23, v_24;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_23 = v_2;
// end of prologue
    v_22 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
v_8:
    v_24 = v_23;
    if (v_24 == nil) goto v_11;
    else goto v_12;
v_11:
    goto v_7;
v_12:
    v_24 = v_23;
    if (!car_legal(v_24)) v_24 = carerror(v_24); else
    v_24 = car(v_24);
    v_22 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_24) + static_cast<std::uintptr_t>(v_22) - TAG_FIXNUM);
    if (!car_legal(v_23)) v_23 = cdrerror(v_23); else
    v_23 = cdr(v_23);
    goto v_8;
v_7:
    return onevalue(v_22);
}



// Code for mknwedge

static LispObject CC_mknwedge(LispObject env,
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
    v_18 = v_2;
// end of prologue
    v_17 = v_18;
    if (!car_legal(v_17)) v_17 = cdrerror(v_17); else
    v_17 = cdr(v_17);
    if (v_17 == nil) goto v_7;
    v_17 = basic_elt(env, 1); // wedge
    return cons(v_17, v_18);
v_7:
    v_17 = v_18;
    if (!car_legal(v_17)) v_17 = carerror(v_17); else
    v_17 = car(v_17);
    goto v_5;
    v_17 = nil;
v_5:
    return onevalue(v_17);
}



// Code for !:plus

static LispObject CC_Tplus(LispObject env,
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
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_48 = v_3;
    v_49 = v_2;
// end of prologue
    v_47 = v_49;
    if (v_47 == nil) goto v_7;
    else goto v_8;
v_7:
    v_47 = v_48;
    goto v_6;
v_8:
    v_47 = v_48;
    if (v_47 == nil) goto v_11;
    else goto v_12;
v_11:
    v_47 = v_49;
    goto v_6;
v_12:
    v_47 = v_49;
    if (!consp(v_47)) goto v_19;
    else goto v_20;
v_19:
    v_47 = v_48;
    v_47 = (consp(v_47) ? nil : lisp_true);
    goto v_18;
v_20:
    v_47 = nil;
    goto v_18;
    v_47 = nil;
v_18:
    if (v_47 == nil) goto v_16;
    v_47 = v_49;
    v_47 = plus2(v_47, v_48);
    v_49 = v_47;
    v_48 = v_49;
    v_47 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_48 == v_47) goto v_33;
    else goto v_34;
v_33:
    v_47 = nil;
    goto v_32;
v_34:
    v_47 = v_49;
    goto v_32;
    v_47 = nil;
v_32:
    goto v_6;
v_16:
    v_47 = basic_elt(env, 1); // plus
    {
        LispObject fn = basic_elt(env, 2); // dcombine
        return (*qfn3(fn))(fn, v_49, v_48, v_47);
    }
    v_47 = nil;
v_6:
    return onevalue(v_47);
}



// Code for getelv

static LispObject CC_getelv(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_46, v_47;
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
    v_47 = v_2;
// end of prologue
    v_46 = v_47;
    if (!car_legal(v_46)) stack[-4] = carerror(v_46); else
    stack[-4] = car(v_46);
    v_46 = v_47;
    if (!car_legal(v_46)) v_46 = cdrerror(v_46); else
    v_46 = cdr(v_46);
    stack[-3] = v_46;
    v_46 = stack[-3];
    if (v_46 == nil) goto v_18;
    else goto v_19;
v_18:
    v_46 = nil;
    goto v_12;
v_19:
    v_46 = stack[-3];
    if (!car_legal(v_46)) v_46 = carerror(v_46); else
    v_46 = car(v_46);
    {   LispObject fn = basic_elt(env, 1); // reval_without_mod
    v_46 = (*qfn1(fn))(fn, v_46);
    }
    env = stack[-5];
    v_46 = ncons(v_46);
    env = stack[-5];
    stack[-1] = v_46;
    stack[-2] = v_46;
v_13:
    v_46 = stack[-3];
    if (!car_legal(v_46)) v_46 = cdrerror(v_46); else
    v_46 = cdr(v_46);
    stack[-3] = v_46;
    v_46 = stack[-3];
    if (v_46 == nil) goto v_32;
    else goto v_33;
v_32:
    v_46 = stack[-2];
    goto v_12;
v_33:
    stack[0] = stack[-1];
    v_46 = stack[-3];
    if (!car_legal(v_46)) v_46 = carerror(v_46); else
    v_46 = car(v_46);
    {   LispObject fn = basic_elt(env, 1); // reval_without_mod
    v_46 = (*qfn1(fn))(fn, v_46);
    }
    env = stack[-5];
    v_46 = ncons(v_46);
    env = stack[-5];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_46);
    v_46 = stack[-1];
    if (!car_legal(v_46)) v_46 = cdrerror(v_46); else
    v_46 = cdr(v_46);
    stack[-1] = v_46;
    goto v_13;
v_12:
    v_46 = cons(stack[-4], v_46);
    env = stack[-5];
    {
        LispObject fn = basic_elt(env, 2); // getel
        return (*qfn1(fn))(fn, v_46);
    }
}



// Code for dp!=ecart

static LispObject CC_dpMecart(LispObject env,
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
// space for vars preserved across procedure calls
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    stack[-1] = nil;
v_8:
    v_36 = stack[0];
    if (v_36 == nil) goto v_13;
    else goto v_14;
v_13:
    goto v_9;
v_14:
    v_36 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // dp_lmon
    v_36 = (*qfn1(fn))(fn, v_36);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 2); // mo_ecart
    v_37 = (*qfn1(fn))(fn, v_36);
    }
    env = stack[-2];
    v_36 = stack[-1];
    v_36 = cons(v_37, v_36);
    env = stack[-2];
    stack[-1] = v_36;
    v_36 = stack[0];
    if (!car_legal(v_36)) v_36 = cdrerror(v_36); else
    v_36 = cdr(v_36);
    stack[0] = v_36;
    goto v_8;
v_9:
    v_36 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_37 = v_36;
v_10:
    v_36 = stack[-1];
    if (v_36 == nil) goto v_26;
    else goto v_27;
v_26:
    v_36 = v_37;
    goto v_7;
v_27:
    v_36 = stack[-1];
    v_36 = car(v_36);
    v_36 = Lmax_2(nil, v_36, v_37);
    env = stack[-2];
    v_37 = v_36;
    v_36 = stack[-1];
    v_36 = cdr(v_36);
    stack[-1] = v_36;
    goto v_10;
v_7:
    return onevalue(v_36);
}



// Code for tsym4

static LispObject CC_tsym4(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    stack[0] = v_4;
    stack[-1] = v_3;
    v_31 = v_2;
// end of prologue
v_9:
    v_32 = v_31;
    if (v_32 == nil) goto v_12;
    else goto v_13;
v_12:
    v_31 = stack[0];
    goto v_8;
v_13:
    v_32 = v_31;
    if (!car_legal(v_32)) v_32 = cdrerror(v_32); else
    v_32 = cdr(v_32);
    stack[-2] = v_32;
    v_32 = stack[-1];
    if (!car_legal(v_32)) v_32 = cdrerror(v_32); else
    v_32 = cdr(v_32);
    if (!car_legal(v_31)) v_31 = carerror(v_31); else
    v_31 = car(v_31);
    {   LispObject fn = basic_elt(env, 1); // pv_applp
    v_32 = (*qfn2(fn))(fn, v_32, v_31);
    }
    env = stack[-3];
    v_31 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // sieve_pv
    v_31 = (*qfn2(fn))(fn, v_32, v_31);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 3); // pv_renorm
    v_32 = (*qfn1(fn))(fn, v_31);
    }
    env = stack[-3];
    v_31 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // insert_pv
    v_31 = (*qfn2(fn))(fn, v_32, v_31);
    }
    env = stack[-3];
    stack[0] = v_31;
    v_31 = stack[-2];
    goto v_9;
    v_31 = nil;
v_8:
    return onevalue(v_31);
}



// Code for set_svf

static LispObject CC_set_svf(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_13, v_14, v_15;
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    stack[0] = v_5;
    v_13 = v_4;
    v_14 = v_3;
    v_15 = v_2;
// end of prologue
    v_14 = list3(v_15, v_14, v_13);
    env = stack[-1];
    v_13 = stack[0];
    {
        LispObject fn = basic_elt(env, 1); // setk
        return (*qfn2(fn))(fn, v_14, v_13);
    }
}



// Code for gcddd

static LispObject CC_gcddd(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_83, v_84, v_85;
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
    v_84 = stack[-1];
    v_83 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_84 == v_83) goto v_11;
    else goto v_12;
v_11:
    v_83 = lisp_true;
    goto v_10;
v_12:
    v_84 = stack[0];
    v_83 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_83 = (v_84 == v_83 ? lisp_true : nil);
    goto v_10;
    v_83 = nil;
v_10:
    if (v_83 == nil) goto v_8;
    v_83 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_6;
v_8:
    v_83 = stack[-1];
    if (!consp(v_83)) goto v_22;
    else goto v_23;
v_22:
    v_83 = stack[0];
    if (!consp(v_83)) goto v_27;
    else goto v_28;
v_27:
    v_84 = stack[-1];
    v_83 = stack[0];
        return Lgcd_2(nil, v_84, v_83);
v_28:
    v_83 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // fieldp
    v_83 = (*qfn1(fn))(fn, v_83);
    }
    env = stack[-2];
    if (v_83 == nil) goto v_34;
    v_83 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_26;
v_34:
    v_85 = stack[-1];
    v_84 = stack[0];
    v_83 = basic_elt(env, 1); // gcd
    {
        LispObject fn = basic_elt(env, 3); // dcombine
        return (*qfn3(fn))(fn, v_85, v_84, v_83);
    }
    v_83 = nil;
v_26:
    goto v_6;
v_23:
    v_83 = stack[0];
    if (!consp(v_83)) goto v_44;
    else goto v_45;
v_44:
    v_83 = stack[-1];
    if (!car_legal(v_83)) v_83 = carerror(v_83); else
    v_83 = car(v_83);
    if (!symbolp(v_83)) v_83 = nil;
    else { v_83 = qfastgets(v_83);
           if (v_83 != nil) { v_83 = elt(v_83, 3); // field
#ifdef RECORD_GET
             if (v_83 == SPID_NOPROP)
                record_get(elt(fastget_names, 3), 0),
                v_83 = nil;
             else record_get(elt(fastget_names, 3), 1),
                v_83 = lisp_true; }
           else record_get(elt(fastget_names, 3), 0); }
#else
             if (v_83 == SPID_NOPROP) v_83 = nil; else v_83 = lisp_true; }}
#endif
    if (v_83 == nil) goto v_50;
    v_83 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_48;
v_50:
    v_85 = stack[-1];
    v_84 = stack[0];
    v_83 = basic_elt(env, 1); // gcd
    {
        LispObject fn = basic_elt(env, 3); // dcombine
        return (*qfn3(fn))(fn, v_85, v_84, v_83);
    }
    v_83 = nil;
v_48:
    goto v_6;
v_45:
    v_83 = stack[-1];
    if (!car_legal(v_83)) v_83 = carerror(v_83); else
    v_83 = car(v_83);
    if (!symbolp(v_83)) v_83 = nil;
    else { v_83 = qfastgets(v_83);
           if (v_83 != nil) { v_83 = elt(v_83, 3); // field
#ifdef RECORD_GET
             if (v_83 == SPID_NOPROP)
                record_get(elt(fastget_names, 3), 0),
                v_83 = nil;
             else record_get(elt(fastget_names, 3), 1),
                v_83 = lisp_true; }
           else record_get(elt(fastget_names, 3), 0); }
#else
             if (v_83 == SPID_NOPROP) v_83 = nil; else v_83 = lisp_true; }}
#endif
    if (v_83 == nil) goto v_66;
    v_83 = lisp_true;
    goto v_64;
v_66:
    v_83 = stack[0];
    if (!car_legal(v_83)) v_83 = carerror(v_83); else
    v_83 = car(v_83);
    if (!symbolp(v_83)) v_83 = nil;
    else { v_83 = qfastgets(v_83);
           if (v_83 != nil) { v_83 = elt(v_83, 3); // field
#ifdef RECORD_GET
             if (v_83 == SPID_NOPROP)
                record_get(elt(fastget_names, 3), 0),
                v_83 = nil;
             else record_get(elt(fastget_names, 3), 1),
                v_83 = lisp_true; }
           else record_get(elt(fastget_names, 3), 0); }
#else
             if (v_83 == SPID_NOPROP) v_83 = nil; else v_83 = lisp_true; }}
#endif
    goto v_64;
    v_83 = nil;
v_64:
    if (v_83 == nil) goto v_62;
    v_83 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_6;
v_62:
    v_85 = stack[-1];
    v_84 = stack[0];
    v_83 = basic_elt(env, 1); // gcd
    {
        LispObject fn = basic_elt(env, 3); // dcombine
        return (*qfn3(fn))(fn, v_85, v_84, v_83);
    }
    v_83 = nil;
v_6:
    return onevalue(v_83);
}



// Code for anform1

static LispObject CC_anform1(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_81, v_82;
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
    v_81 = stack[-1];
    if (!car_legal(v_81)) v_81 = carerror(v_81); else
    v_81 = car(v_81);
    stack[-2] = v_81;
    v_81 = stack[-1];
    if (!car_legal(v_81)) v_81 = cdrerror(v_81); else
    v_81 = cdr(v_81);
    stack[-1] = v_81;
    v_81 = stack[-2];
    if (!consp(v_81)) goto v_15;
    v_81 = stack[-2];
    {   LispObject fn = basic_elt(env, 0); // anform1
    v_81 = (*qfn1(fn))(fn, v_81);
    }
    env = stack[-3];
    v_81 = stack[-1];
    {
        LispObject fn = basic_elt(env, 7); // anforml
        return (*qfn1(fn))(fn, v_81);
    }
v_15:
    v_81 = stack[-2];
    if (symbolp(v_81)) goto v_24;
    v_81 = nil;
    goto v_7;
v_24:
    v_82 = stack[-2];
    v_81 = basic_elt(env, 1); // dclglb
    v_81 = Lflagp(nil, v_82, v_81);
    env = stack[-3];
    if (v_81 == nil) goto v_28;
    v_82 = stack[-2];
    v_81 = basic_elt(env, 2); // glb2rf
    v_81 = Lflagp(nil, v_82, v_81);
    env = stack[-3];
    if (v_81 == nil) goto v_34;
    else goto v_35;
v_34:
    v_81 = stack[-2];
    v_82 = ncons(v_81);
    env = stack[-3];
    v_81 = basic_elt(env, 2); // glb2rf
    v_81 = Lflag(nil, v_82, v_81);
    env = stack[-3];
    v_82 = stack[-2];
    v_81 = qvalue(basic_elt(env, 3)); // globs!*
    v_81 = cons(v_82, v_81);
    env = stack[-3];
    setvalue(basic_elt(env, 3), v_81); // globs!*
    goto v_33;
v_35:
v_33:
    v_81 = stack[-1];
    {
        LispObject fn = basic_elt(env, 7); // anforml
        return (*qfn1(fn))(fn, v_81);
    }
v_28:
    v_82 = stack[-2];
    v_81 = qvalue(basic_elt(env, 4)); // locls!*
    v_81 = Lassoc(nil, v_82, v_81);
    if (v_81 == nil) goto v_49;
    v_81 = stack[-1];
    {
        LispObject fn = basic_elt(env, 7); // anforml
        return (*qfn1(fn))(fn, v_81);
    }
v_49:
    v_81 = stack[-2];
    {   LispObject fn = basic_elt(env, 8); // add2calls
    v_81 = (*qfn1(fn))(fn, v_81);
    }
    env = stack[-3];
    stack[0] = stack[-2];
    v_81 = stack[-1];
    v_81 = Llength(nil, v_81);
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 9); // checkargcount
    v_81 = (*qfn2(fn))(fn, stack[0], v_81);
    }
    env = stack[-3];
    v_82 = stack[-2];
    v_81 = basic_elt(env, 5); // noanl
    v_81 = Lflagp(nil, v_82, v_81);
    env = stack[-3];
    if (v_81 == nil) goto v_64;
    goto v_62;
v_64:
    v_82 = stack[-2];
    v_81 = basic_elt(env, 6); // anlfn
    v_81 = get(v_82, v_81);
    env = stack[-3];
    v_82 = v_81;
    if (v_81 == nil) goto v_70;
    v_81 = stack[-1];
    v_81 = Lapply1(nil, v_82, v_81);
    goto v_62;
v_70:
    v_81 = stack[-1];
    {   LispObject fn = basic_elt(env, 7); // anforml
    v_81 = (*qfn1(fn))(fn, v_81);
    }
    goto v_62;
v_62:
    v_81 = nil;
v_7:
    return onevalue(v_81);
}



// Code for freeofl

static LispObject CC_freeofl(LispObject env,
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
    v_28 = stack[0];
    if (v_28 == nil) goto v_7;
    else goto v_8;
v_7:
    v_28 = lisp_true;
    goto v_6;
v_8:
    v_29 = stack[-1];
    v_28 = stack[0];
    if (!car_legal(v_28)) v_28 = carerror(v_28); else
    v_28 = car(v_28);
    {   LispObject fn = basic_elt(env, 1); // freeof
    v_28 = (*qfn2(fn))(fn, v_29, v_28);
    }
    env = stack[-2];
    if (v_28 == nil) goto v_15;
    else goto v_16;
v_15:
    v_28 = nil;
    goto v_14;
v_16:
    v_29 = stack[-1];
    v_28 = stack[0];
    if (!car_legal(v_28)) v_28 = cdrerror(v_28); else
    v_28 = cdr(v_28);
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



// Code for mri_type

static LispObject CC_mri_type(LispObject env,
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
    v_20 = v_2;
// end of prologue
    v_21 = v_20;
    if (!car_legal(v_21)) v_21 = cdrerror(v_21); else
    v_21 = cdr(v_21);
    if (!car_legal(v_21)) v_21 = cdrerror(v_21); else
    v_21 = cdr(v_21);
    if (!car_legal(v_21)) v_21 = cdrerror(v_21); else
    v_21 = cdr(v_21);
    if (v_21 == nil) goto v_6;
    else goto v_7;
v_6:
    v_20 = nil;
    goto v_5;
v_7:
    if (!car_legal(v_20)) v_20 = cdrerror(v_20); else
    v_20 = cdr(v_20);
    if (!car_legal(v_20)) v_20 = cdrerror(v_20); else
    v_20 = cdr(v_20);
    if (!car_legal(v_20)) v_20 = cdrerror(v_20); else
    v_20 = cdr(v_20);
    if (!car_legal(v_20)) v_20 = carerror(v_20); else
    v_20 = car(v_20);
    goto v_5;
    v_20 = nil;
v_5:
    return onevalue(v_20);
}



// Code for pasf_dec

static LispObject CC_pasf_dec(LispObject env,
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
    v_36 = v_2;
// end of prologue
    v_35 = v_36;
    stack[-1] = v_35;
v_10:
    v_35 = stack[-1];
    if (!consp(v_35)) goto v_17;
    else goto v_18;
v_17:
    v_35 = lisp_true;
    goto v_16;
v_18:
    v_35 = stack[-1];
    if (!car_legal(v_35)) v_35 = carerror(v_35); else
    v_35 = car(v_35);
    v_35 = (consp(v_35) ? nil : lisp_true);
    goto v_16;
    v_35 = nil;
v_16:
    if (v_35 == nil) goto v_14;
    goto v_9;
v_14:
    v_35 = stack[-1];
    if (!car_legal(v_35)) v_35 = cdrerror(v_35); else
    v_35 = cdr(v_35);
    stack[-1] = v_35;
    goto v_10;
v_9:
    stack[0] = v_36;
    v_35 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // negf
    v_35 = (*qfn1(fn))(fn, v_35);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 2); // addf
    v_36 = (*qfn2(fn))(fn, stack[0], v_35);
    }
    v_35 = stack[-1];
    return cons(v_36, v_35);
    return onevalue(v_35);
}



// Code for cgp_evlmon

static LispObject CC_cgp_evlmon(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // cgp_rp
    v_7 = (*qfn1(fn))(fn, v_7);
    }
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // dip_evlmon
        return (*qfn1(fn))(fn, v_7);
    }
}



// Code for times!-mod!-p

static LispObject CC_timesKmodKp(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_141, v_142, v_143;
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
    v_141 = stack[-1];
    if (v_141 == nil) goto v_11;
    else goto v_12;
v_11:
    v_141 = lisp_true;
    goto v_10;
v_12:
    v_141 = stack[0];
    v_141 = (v_141 == nil ? lisp_true : nil);
    goto v_10;
    v_141 = nil;
v_10:
    if (v_141 == nil) goto v_8;
    v_141 = nil;
    goto v_6;
v_8:
    v_141 = stack[-1];
    if (!consp(v_141)) goto v_24;
    else goto v_25;
v_24:
    v_141 = lisp_true;
    goto v_23;
v_25:
    v_141 = stack[-1];
    if (!car_legal(v_141)) v_141 = carerror(v_141); else
    v_141 = car(v_141);
    v_141 = (consp(v_141) ? nil : lisp_true);
    goto v_23;
    v_141 = nil;
v_23:
    if (v_141 == nil) goto v_21;
    v_142 = stack[0];
    v_141 = stack[-1];
    {
        LispObject fn = basic_elt(env, 1); // multiply!-by!-constant!-mod!-p
        return (*qfn2(fn))(fn, v_142, v_141);
    }
v_21:
    v_141 = stack[0];
    if (!consp(v_141)) goto v_40;
    else goto v_41;
v_40:
    v_141 = lisp_true;
    goto v_39;
v_41:
    v_141 = stack[0];
    if (!car_legal(v_141)) v_141 = carerror(v_141); else
    v_141 = car(v_141);
    v_141 = (consp(v_141) ? nil : lisp_true);
    goto v_39;
    v_141 = nil;
v_39:
    if (v_141 == nil) goto v_37;
    v_142 = stack[-1];
    v_141 = stack[0];
    {
        LispObject fn = basic_elt(env, 1); // multiply!-by!-constant!-mod!-p
        return (*qfn2(fn))(fn, v_142, v_141);
    }
v_37:
    v_141 = stack[-1];
    if (!car_legal(v_141)) v_141 = carerror(v_141); else
    v_141 = car(v_141);
    if (!car_legal(v_141)) v_141 = carerror(v_141); else
    v_141 = car(v_141);
    if (!car_legal(v_141)) v_142 = carerror(v_141); else
    v_142 = car(v_141);
    v_141 = stack[0];
    if (!car_legal(v_141)) v_141 = carerror(v_141); else
    v_141 = car(v_141);
    if (!car_legal(v_141)) v_141 = carerror(v_141); else
    v_141 = car(v_141);
    if (!car_legal(v_141)) v_141 = carerror(v_141); else
    v_141 = car(v_141);
    if (equal(v_142, v_141)) goto v_52;
    else goto v_53;
v_52:
    v_141 = stack[-1];
    if (!car_legal(v_141)) v_142 = carerror(v_141); else
    v_142 = car(v_141);
    v_141 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // times!-term!-mod!-p
    stack[-2] = (*qfn2(fn))(fn, v_142, v_141);
    }
    env = stack[-3];
    v_141 = stack[0];
    if (!car_legal(v_141)) v_142 = carerror(v_141); else
    v_142 = car(v_141);
    v_141 = stack[-1];
    if (!car_legal(v_141)) v_141 = cdrerror(v_141); else
    v_141 = cdr(v_141);
    {   LispObject fn = basic_elt(env, 2); // times!-term!-mod!-p
    v_141 = (*qfn2(fn))(fn, v_142, v_141);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 3); // plus!-mod!-p
    stack[-2] = (*qfn2(fn))(fn, stack[-2], v_141);
    }
    env = stack[-3];
    v_141 = stack[-1];
    if (!car_legal(v_141)) v_142 = cdrerror(v_141); else
    v_142 = cdr(v_141);
    v_141 = stack[0];
    if (!car_legal(v_141)) v_141 = cdrerror(v_141); else
    v_141 = cdr(v_141);
    {   LispObject fn = basic_elt(env, 0); // times!-mod!-p
    v_141 = (*qfn2(fn))(fn, v_142, v_141);
    }
    env = stack[-3];
    {
        LispObject v_147 = stack[-2];
        LispObject fn = basic_elt(env, 3); // plus!-mod!-p
        return (*qfn2(fn))(fn, v_147, v_141);
    }
v_53:
    v_141 = stack[-1];
    if (!car_legal(v_141)) v_141 = carerror(v_141); else
    v_141 = car(v_141);
    if (!car_legal(v_141)) v_141 = carerror(v_141); else
    v_141 = car(v_141);
    if (!car_legal(v_141)) v_142 = carerror(v_141); else
    v_142 = car(v_141);
    v_141 = stack[0];
    if (!car_legal(v_141)) v_141 = carerror(v_141); else
    v_141 = car(v_141);
    if (!car_legal(v_141)) v_141 = carerror(v_141); else
    v_141 = car(v_141);
    if (!car_legal(v_141)) v_141 = carerror(v_141); else
    v_141 = car(v_141);
    {   LispObject fn = basic_elt(env, 4); // ordop
    v_141 = (*qfn2(fn))(fn, v_142, v_141);
    }
    env = stack[-3];
    if (v_141 == nil) goto v_79;
    v_141 = stack[-1];
    if (!car_legal(v_141)) v_141 = carerror(v_141); else
    v_141 = car(v_141);
    if (!car_legal(v_141)) v_142 = cdrerror(v_141); else
    v_142 = cdr(v_141);
    v_141 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // times!-mod!-p
    stack[-2] = (*qfn2(fn))(fn, v_142, v_141);
    }
    env = stack[-3];
    v_141 = stack[-1];
    if (!car_legal(v_141)) v_142 = cdrerror(v_141); else
    v_142 = cdr(v_141);
    v_141 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // times!-mod!-p
    v_141 = (*qfn2(fn))(fn, v_142, v_141);
    }
    v_142 = stack[-2];
    v_143 = v_142;
    if (v_143 == nil) goto v_102;
    else goto v_103;
v_102:
    goto v_101;
v_103:
    v_143 = stack[-1];
    if (!car_legal(v_143)) v_143 = carerror(v_143); else
    v_143 = car(v_143);
    if (!car_legal(v_143)) v_143 = carerror(v_143); else
    v_143 = car(v_143);
    return acons(v_143, v_142, v_141);
    v_141 = nil;
v_101:
    goto v_6;
v_79:
    v_142 = stack[-1];
    v_141 = stack[0];
    if (!car_legal(v_141)) v_141 = carerror(v_141); else
    v_141 = car(v_141);
    if (!car_legal(v_141)) v_141 = cdrerror(v_141); else
    v_141 = cdr(v_141);
    {   LispObject fn = basic_elt(env, 0); // times!-mod!-p
    stack[-2] = (*qfn2(fn))(fn, v_142, v_141);
    }
    env = stack[-3];
    v_142 = stack[-1];
    v_141 = stack[0];
    if (!car_legal(v_141)) v_141 = cdrerror(v_141); else
    v_141 = cdr(v_141);
    {   LispObject fn = basic_elt(env, 0); // times!-mod!-p
    v_141 = (*qfn2(fn))(fn, v_142, v_141);
    }
    v_142 = stack[-2];
    v_143 = v_142;
    if (v_143 == nil) goto v_129;
    else goto v_130;
v_129:
    goto v_128;
v_130:
    v_143 = stack[0];
    if (!car_legal(v_143)) v_143 = carerror(v_143); else
    v_143 = car(v_143);
    if (!car_legal(v_143)) v_143 = carerror(v_143); else
    v_143 = car(v_143);
    return acons(v_143, v_142, v_141);
    v_141 = nil;
v_128:
    goto v_6;
    v_141 = nil;
v_6:
    return onevalue(v_141);
}



// Code for omobj

static LispObject CC_omobj(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
    stack_popper stack_popper_var(1);
// end of prologue
    v_20 = qvalue(basic_elt(env, 1)); // char
    {   LispObject fn = basic_elt(env, 3); // compress!*
    v_21 = (*qfn1(fn))(fn, v_20);
    }
    env = stack[0];
    v_20 = qvalue(basic_elt(env, 2)); // omfuncs!*
    v_20 = Lassoc(nil, v_21, v_20);
    v_21 = v_20;
    if (v_20 == nil) goto v_10;
    v_20 = v_21;
    if (!car_legal(v_20)) v_20 = cdrerror(v_20); else
    v_20 = cdr(v_20);
    if (!car_legal(v_20)) v_21 = carerror(v_20); else
    v_21 = car(v_20);
    v_20 = nil;
    {
        LispObject fn = basic_elt(env, 4); // apply
        return (*qfn2(fn))(fn, v_21, v_20);
    }
v_10:
    v_20 = nil;
    return onevalue(v_20);
}



// Code for sqform

static LispObject CC_sqform(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_28, v_29, v_30, v_31;
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
    v_29 = stack[0];
    v_28 = stack[-1];
    if (!car_legal(v_28)) v_28 = carerror(v_28); else
    v_28 = car(v_28);
    stack[-2] = Lapply1(nil, v_29, v_28);
    env = stack[-3];
    v_29 = stack[0];
    v_28 = stack[-1];
    if (!car_legal(v_28)) v_28 = cdrerror(v_28); else
    v_28 = cdr(v_28);
    v_28 = Lapply1(nil, v_29, v_28);
    env = stack[-3];
    v_31 = stack[-2];
    v_30 = v_28;
    v_29 = v_30;
    v_28 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_29 == v_28) goto v_17;
    else goto v_18;
v_17:
    v_28 = v_31;
    goto v_16;
v_18:
    v_28 = basic_elt(env, 1); // quotient
    v_29 = v_31;
    return list3(v_28, v_29, v_30);
    v_28 = nil;
v_16:
    return onevalue(v_28);
}



// Code for mk!*sq

static LispObject CC_mkHsq(LispObject env,
                         LispObject v_2)
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
    v_64 = v_2;
// end of prologue
    {   LispObject fn = basic_elt(env, 5); // expchk
    v_64 = (*qfn1(fn))(fn, v_64);
    }
    env = stack[-2];
    stack[0] = v_64;
    v_64 = stack[0];
    if (!car_legal(v_64)) v_64 = carerror(v_64); else
    v_64 = car(v_64);
    if (v_64 == nil) goto v_9;
    else goto v_10;
v_9:
    v_64 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_8;
v_10:
    v_64 = stack[0];
    if (!car_legal(v_64)) v_64 = carerror(v_64); else
    v_64 = car(v_64);
    if (!consp(v_64)) goto v_18;
    else goto v_19;
v_18:
    v_64 = stack[0];
    if (!car_legal(v_64)) v_65 = cdrerror(v_64); else
    v_65 = cdr(v_64);
    v_64 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_64 = (v_65 == v_64 ? lisp_true : nil);
    goto v_17;
v_19:
    v_64 = nil;
    goto v_17;
    v_64 = nil;
v_17:
    if (v_64 == nil) goto v_15;
    v_64 = stack[0];
    if (!car_legal(v_64)) v_64 = carerror(v_64); else
    v_64 = car(v_64);
    goto v_8;
v_15:
    v_64 = stack[0];
    {   LispObject fn = basic_elt(env, 6); // kernp
    v_64 = (*qfn1(fn))(fn, v_64);
    }
    env = stack[-2];
    if (v_64 == nil) goto v_32;
    v_64 = stack[0];
    if (!car_legal(v_64)) v_64 = carerror(v_64); else
    v_64 = car(v_64);
    if (!car_legal(v_64)) v_64 = carerror(v_64); else
    v_64 = car(v_64);
    if (!car_legal(v_64)) v_64 = carerror(v_64); else
    v_64 = car(v_64);
    if (!car_legal(v_64)) v_65 = carerror(v_64); else
    v_65 = car(v_64);
    v_64 = basic_elt(env, 1); // list
    if (!consp(v_65)) goto v_32;
    v_65 = car(v_65);
    if (v_65 == v_64) goto v_36;
    else goto v_32;
v_36:
    v_64 = stack[0];
    if (!car_legal(v_64)) v_64 = carerror(v_64); else
    v_64 = car(v_64);
    if (!car_legal(v_64)) v_64 = carerror(v_64); else
    v_64 = car(v_64);
    if (!car_legal(v_64)) v_64 = carerror(v_64); else
    v_64 = car(v_64);
    if (!car_legal(v_64)) v_64 = carerror(v_64); else
    v_64 = car(v_64);
    goto v_8;
v_32:
    stack[-1] = basic_elt(env, 2); // !*sq
    v_64 = qvalue(basic_elt(env, 3)); // !*resubs
    if (v_64 == nil) goto v_57;
    v_64 = qvalue(basic_elt(env, 4)); // !*sqvar!*
    goto v_55;
v_57:
    v_64 = nil;
    v_64 = ncons(v_64);
    goto v_55;
    v_64 = nil;
v_55:
    {
        LispObject v_68 = stack[-1];
        LispObject v_69 = stack[0];
        return list2star(v_68, v_69, v_64);
    }
    v_64 = nil;
v_8:
    return onevalue(v_64);
}



// Code for subscriptedvarp

static LispObject CC_subscriptedvarp(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_17 = nil;
    v_16 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // symtabget
    v_16 = (*qfn2(fn))(fn, v_17, v_16);
    }
    env = stack[-1];
    v_17 = Llength(nil, v_16);
    env = stack[-1];
    v_16 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_16 = static_cast<LispObject>(greaterp2(v_17, v_16));
    v_16 = v_16 ? lisp_true : nil;
    env = stack[-1];
    if (v_16 == nil) goto v_6;
    else goto v_5;
v_6:
    v_16 = stack[0];
    v_17 = basic_elt(env, 1); // subscripted
        return Lflagp(nil, v_16, v_17);
v_5:
    return onevalue(v_16);
}



// Code for exptchk

static LispObject CC_exptchk(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_44 = stack[0];
    if (!consp(v_44)) goto v_10;
    else goto v_11;
v_10:
    v_44 = lisp_true;
    goto v_9;
v_11:
    v_44 = stack[0];
    if (!car_legal(v_44)) v_44 = carerror(v_44); else
    v_44 = car(v_44);
    v_44 = (consp(v_44) ? nil : lisp_true);
    goto v_9;
    v_44 = nil;
v_9:
    if (v_44 == nil) goto v_7;
    v_45 = stack[0];
    v_44 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_45, v_44);
v_7:
    v_44 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // comm_kernels
    v_44 = (*qfn1(fn))(fn, v_44);
    }
    env = stack[-2];
    stack[-1] = v_44;
    v_44 = stack[-1];
    v_45 = Llength(nil, v_44);
    env = stack[-2];
    v_44 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_44 = static_cast<LispObject>(lessp2(v_45, v_44));
    v_44 = v_44 ? lisp_true : nil;
    env = stack[-2];
    if (v_44 == nil) goto v_30;
    v_45 = stack[0];
    v_44 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_45, v_44);
v_30:
    v_46 = stack[0];
    v_45 = nil;
    v_44 = stack[-1];
    {
        LispObject fn = basic_elt(env, 2); // exptchk0
        return (*qfn3(fn))(fn, v_46, v_45, v_44);
    }
    v_44 = nil;
    goto v_5;
    v_44 = nil;
v_5:
    return onevalue(v_44);
}



// Code for order!:

static LispObject CC_orderT(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_25 = stack[0];
    if (!car_legal(v_25)) v_25 = cdrerror(v_25); else
    v_25 = cdr(v_25);
    if (!car_legal(v_25)) v_26 = carerror(v_25); else
    v_26 = car(v_25);
    v_25 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_26 == v_25) goto v_6;
    else goto v_7;
v_6:
    v_25 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_5;
v_7:
    v_25 = stack[0];
    if (!car_legal(v_25)) v_25 = cdrerror(v_25); else
    v_25 = cdr(v_25);
    if (!car_legal(v_25)) v_25 = carerror(v_25); else
    v_25 = car(v_25);
    v_25 = Labsval(nil, v_25);
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 1); // msd
    stack[-1] = (*qfn1(fn))(fn, v_25);
    }
    env = stack[-2];
    v_25 = stack[0];
    if (!car_legal(v_25)) v_25 = cdrerror(v_25); else
    v_25 = cdr(v_25);
    if (!car_legal(v_25)) v_25 = cdrerror(v_25); else
    v_25 = cdr(v_25);
    v_25 = sub1(v_25);
    {
        LispObject v_29 = stack[-1];
        return plus2(v_29, v_25);
    }
    v_25 = nil;
v_5:
    return onevalue(v_25);
}



// Code for areallindices

static LispObject CC_areallindices(LispObject env,
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
v_1:
    v_26 = stack[0];
    if (!car_legal(v_26)) v_26 = carerror(v_26); else
    v_26 = car(v_26);
    {   LispObject fn = basic_elt(env, 1); // isanindex
    v_26 = (*qfn1(fn))(fn, v_26);
    }
    env = stack[-1];
    if (v_26 == nil) goto v_6;
    else goto v_7;
v_6:
    v_26 = nil;
    goto v_5;
v_7:
    v_26 = stack[0];
    if (!car_legal(v_26)) v_26 = cdrerror(v_26); else
    v_26 = cdr(v_26);
    if (v_26 == nil) goto v_16;
    else goto v_17;
v_16:
    v_26 = lisp_true;
    goto v_15;
v_17:
    v_26 = stack[0];
    if (!car_legal(v_26)) v_26 = cdrerror(v_26); else
    v_26 = cdr(v_26);
    stack[0] = v_26;
    goto v_1;
    v_26 = nil;
v_15:
    goto v_5;
    v_26 = nil;
v_5:
    return onevalue(v_26);
}



// Code for !*ssave

static LispObject CC_Hssave(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_61, v_62, v_63;
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
    v_61 = qvalue(basic_elt(env, 1)); // !*uncached
    if (v_61 == nil) goto v_9;
    else goto v_10;
v_9:
    stack[-4] = qvalue(basic_elt(env, 2)); // alglist!*
    v_62 = qvalue(basic_elt(env, 3)); // !*sub2
    v_61 = stack[-3];
    v_62 = cons(v_62, v_61);
    env = stack[-5];
    v_61 = qvalue(basic_elt(env, 2)); // alglist!*
    if (!car_legal(v_61)) v_61 = carerror(v_61); else
    v_61 = car(v_61);
    stack[-1] = v_62;
    stack[0] = v_61;
    v_61 = stack[0];
    if (v_61 == nil) goto v_26;
    else goto v_27;
v_26:
    v_61 = lisp_true;
    goto v_25;
v_27:
    v_62 = qvalue(basic_elt(env, 4)); // alglist_count!*
    v_61 = qvalue(basic_elt(env, 5)); // alglist_limit!*
    v_61 = static_cast<LispObject>(greaterp2(v_62, v_61));
    v_61 = v_61 ? lisp_true : nil;
    env = stack[-5];
    goto v_25;
    v_61 = nil;
v_25:
    if (v_61 == nil) goto v_23;
    v_61 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    setvalue(basic_elt(env, 4), v_61); // alglist_count!*
    v_63 = static_cast<LispObject>(160)+TAG_FIXNUM; // 10
    v_62 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_61 = basic_elt(env, 6); // 2.0
    {   LispObject fn = basic_elt(env, 8); // mkhash
    v_61 = (*qfn3(fn))(fn, v_63, v_62, v_61);
    }
    env = stack[-5];
    stack[0] = v_61;
    v_63 = stack[-2];
    v_62 = stack[0];
    v_61 = stack[-1];
    {   LispObject fn = basic_elt(env, 9); // puthash
    v_61 = (*qfn3(fn))(fn, v_63, v_62, v_61);
    }
    env = stack[-5];
    v_61 = stack[0];
    goto v_21;
v_23:
    v_63 = stack[-2];
    v_62 = stack[0];
    v_61 = stack[-1];
    {   LispObject fn = basic_elt(env, 9); // puthash
    v_61 = (*qfn3(fn))(fn, v_63, v_62, v_61);
    }
    env = stack[-5];
    v_61 = qvalue(basic_elt(env, 4)); // alglist_count!*
    v_61 = add1(v_61);
    env = stack[-5];
    setvalue(basic_elt(env, 4), v_61); // alglist_count!*
    v_61 = stack[0];
    goto v_21;
    v_61 = nil;
v_21:
    if (!car_legal(stack[-4])) rplaca_fails(stack[-4]);
    setcar(stack[-4], v_61);
    goto v_8;
v_10:
v_8:
    v_61 = qvalue(basic_elt(env, 7)); // simpcount!*
    v_61 = sub1(v_61);
    env = stack[-5];
    setvalue(basic_elt(env, 7), v_61); // simpcount!*
    v_61 = stack[-3];
    return onevalue(v_61);
}



// Code for red!-weight

static LispObject CC_redKweight(LispObject env,
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
// space for vars preserved across procedure calls
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    v_11 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // nonzero!-length
    stack[-2] = (*qfn1(fn))(fn, v_11);
    }
    env = stack[-3];
    v_12 = stack[-1];
    v_11 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // red!-weight1
    v_11 = (*qfn2(fn))(fn, v_12, v_11);
    }
    {
        LispObject v_16 = stack[-2];
        return cons(v_16, v_11);
    }
}



// Code for dp_diff

static LispObject CC_dp_diff(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // dp_neg
    v_9 = (*qfn1(fn))(fn, v_9);
    }
    env = stack[-1];
    {
        LispObject v_12 = stack[0];
        LispObject fn = basic_elt(env, 2); // dp_sum
        return (*qfn2(fn))(fn, v_12, v_9);
    }
}



// Code for resimp1

static LispObject CC_resimp1(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_17 = stack[0];
    if (!car_legal(v_17)) v_18 = carerror(v_17); else
    v_18 = car(v_17);
    v_17 = nil;
    {   LispObject fn = basic_elt(env, 2); // subf1
    stack[-1] = (*qfn2(fn))(fn, v_18, v_17);
    }
    env = stack[-2];
    v_17 = stack[0];
    if (!car_legal(v_17)) v_18 = cdrerror(v_17); else
    v_18 = cdr(v_17);
    v_17 = nil;
    {   LispObject fn = basic_elt(env, 2); // subf1
    v_17 = (*qfn2(fn))(fn, v_18, v_17);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // quotsq
    v_17 = (*qfn2(fn))(fn, stack[-1], v_17);
    }
    env = stack[-2];
    stack[0] = v_17;
    v_17 = lisp_true;
    setvalue(basic_elt(env, 1), v_17); // !*sub2
    v_17 = stack[0];
    return onevalue(v_17);
}



// Code for pv_sort2a

static LispObject CC_pv_sort2a(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
v_7:
    v_64 = stack[0];
    if (!car_legal(v_64)) v_64 = cdrerror(v_64); else
    v_64 = cdr(v_64);
    if (v_64 == nil) goto v_10;
    else goto v_11;
v_10:
    v_64 = stack[-1];
    if (!car_legal(v_64)) v_65 = cdrerror(v_64); else
    v_65 = cdr(v_64);
    v_64 = stack[0];
    if (!car_legal(v_64)) v_64 = carerror(v_64); else
    v_64 = car(v_64);
    if (!car_legal(v_64)) v_64 = cdrerror(v_64); else
    v_64 = cdr(v_64);
    v_64 = static_cast<LispObject>(greaterp2(v_65, v_64));
    v_64 = v_64 ? lisp_true : nil;
    env = stack[-2];
    if (v_64 == nil) goto v_17;
    v_64 = stack[-1];
    v_64 = ncons(v_64);
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_64);
    v_64 = stack[0];
    goto v_6;
v_17:
    v_64 = stack[0];
    if (!car_legal(v_64)) v_65 = carerror(v_64); else
    v_65 = car(v_64);
    v_64 = stack[0];
    if (!car_legal(v_64)) v_64 = cdrerror(v_64); else
    v_64 = cdr(v_64);
    v_64 = cons(v_65, v_64);
    v_66 = v_64;
    v_65 = stack[0];
    v_64 = stack[-1];
    if (!car_legal(v_65)) rplaca_fails(v_65);
    setcar(v_65, v_64);
    v_64 = v_65;
    v_65 = v_66;
    if (!car_legal(v_64)) rplacd_fails(v_64);
    setcdr(v_64, v_65);
    goto v_6;
    goto v_9;
v_11:
    v_64 = stack[-1];
    if (!car_legal(v_64)) v_65 = cdrerror(v_64); else
    v_65 = cdr(v_64);
    v_64 = stack[0];
    if (!car_legal(v_64)) v_64 = carerror(v_64); else
    v_64 = car(v_64);
    if (!car_legal(v_64)) v_64 = cdrerror(v_64); else
    v_64 = cdr(v_64);
    v_64 = static_cast<LispObject>(greaterp2(v_65, v_64));
    v_64 = v_64 ? lisp_true : nil;
    env = stack[-2];
    if (v_64 == nil) goto v_42;
    v_64 = stack[0];
    if (!car_legal(v_64)) v_64 = cdrerror(v_64); else
    v_64 = cdr(v_64);
    stack[0] = v_64;
    goto v_7;
v_42:
    v_64 = stack[0];
    if (!car_legal(v_64)) v_65 = carerror(v_64); else
    v_65 = car(v_64);
    v_64 = stack[0];
    if (!car_legal(v_64)) v_64 = cdrerror(v_64); else
    v_64 = cdr(v_64);
    v_64 = cons(v_65, v_64);
    v_66 = v_64;
    v_65 = stack[0];
    v_64 = stack[-1];
    if (!car_legal(v_65)) rplaca_fails(v_65);
    setcar(v_65, v_64);
    v_64 = v_65;
    v_65 = v_66;
    if (!car_legal(v_64)) rplacd_fails(v_64);
    setcdr(v_64, v_65);
    goto v_6;
v_9:
    v_64 = nil;
v_6:
    return onevalue(v_64);
}



// Code for starts!-with

static LispObject CC_startsKwith(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_51, v_52, v_53, v_54;
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
    v_52 = v_3;
    v_53 = v_2;
// end of prologue
v_7:
    v_51 = v_52;
    if (v_51 == nil) goto v_10;
    else goto v_11;
v_10:
    v_51 = lisp_true;
    goto v_6;
v_11:
    v_51 = v_53;
    if (v_51 == nil) goto v_14;
    else goto v_15;
v_14:
    v_51 = nil;
    goto v_6;
v_15:
    v_54 = v_53;
    v_51 = v_52;
    if (!car_legal(v_51)) v_51 = carerror(v_51); else
    v_51 = car(v_51);
    if (!consp(v_54)) goto v_23;
    v_54 = car(v_54);
    if (v_54 == v_51) goto v_22;
    else goto v_23;
v_22:
    v_51 = lisp_true;
    goto v_21;
v_23:
    v_54 = v_53;
    v_51 = basic_elt(env, 1); // !\ (backslash)
    if (!consp(v_54)) goto v_34;
    v_54 = car(v_54);
    if (v_54 == v_51) goto v_33;
    else goto v_34;
v_33:
    v_54 = v_52;
    v_51 = basic_elt(env, 2); // !/
    v_51 = Leqcar(nil, v_54, v_51);
    env = stack[0];
    goto v_32;
v_34:
    v_51 = nil;
    goto v_32;
    v_51 = nil;
v_32:
    goto v_21;
    v_51 = nil;
v_21:
    if (v_51 == nil) goto v_19;
    v_51 = v_53;
    if (!car_legal(v_51)) v_51 = cdrerror(v_51); else
    v_51 = cdr(v_51);
    v_53 = v_51;
    v_51 = v_52;
    if (!car_legal(v_51)) v_51 = cdrerror(v_51); else
    v_51 = cdr(v_51);
    v_52 = v_51;
    goto v_7;
v_19:
    v_51 = nil;
    goto v_6;
    v_51 = nil;
v_6:
    return onevalue(v_51);
}



// Code for sfto_davp

static LispObject CC_sfto_davp(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_86, v_87;
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
    v_86 = stack[-1];
    if (!consp(v_86)) goto v_15;
    else goto v_16;
v_15:
    v_86 = lisp_true;
    goto v_14;
v_16:
    v_86 = stack[-1];
    if (!car_legal(v_86)) v_86 = carerror(v_86); else
    v_86 = car(v_86);
    v_86 = (consp(v_86) ? nil : lisp_true);
    goto v_14;
    v_86 = nil;
v_14:
    if (v_86 == nil) goto v_12;
    v_86 = lisp_true;
    goto v_7;
v_12:
    v_86 = stack[-1];
    if (!car_legal(v_86)) v_86 = carerror(v_86); else
    v_86 = car(v_86);
    if (!car_legal(v_86)) v_86 = carerror(v_86); else
    v_86 = car(v_86);
    if (!car_legal(v_86)) v_87 = cdrerror(v_86); else
    v_87 = cdr(v_86);
    v_86 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_86 = static_cast<LispObject>(greaterp2(v_87, v_86));
    v_86 = v_86 ? lisp_true : nil;
    env = stack[-2];
    if (v_86 == nil) goto v_26;
    v_86 = stack[0];
    if (v_86 == nil) goto v_36;
    v_86 = stack[-1];
    if (!car_legal(v_86)) v_86 = carerror(v_86); else
    v_86 = car(v_86);
    if (!car_legal(v_86)) v_86 = carerror(v_86); else
    v_86 = car(v_86);
    if (!car_legal(v_86)) v_87 = carerror(v_86); else
    v_87 = car(v_86);
    v_86 = stack[0];
    if (equal(v_87, v_86)) goto v_36;
    v_86 = nil;
    goto v_7;
v_36:
    v_86 = stack[-1];
    if (!car_legal(v_86)) v_86 = carerror(v_86); else
    v_86 = car(v_86);
    if (!car_legal(v_86)) v_87 = cdrerror(v_86); else
    v_87 = cdr(v_86);
    v_86 = stack[-1];
    if (!car_legal(v_86)) v_86 = carerror(v_86); else
    v_86 = car(v_86);
    if (!car_legal(v_86)) v_86 = carerror(v_86); else
    v_86 = car(v_86);
    if (!car_legal(v_86)) v_86 = carerror(v_86); else
    v_86 = car(v_86);
    {   LispObject fn = basic_elt(env, 0); // sfto_davp
    v_86 = (*qfn2(fn))(fn, v_87, v_86);
    }
    env = stack[-2];
    if (v_86 == nil) goto v_51;
    v_86 = stack[-1];
    if (!car_legal(v_86)) v_86 = cdrerror(v_86); else
    v_86 = cdr(v_86);
    v_87 = v_86;
    v_86 = stack[-1];
    if (!car_legal(v_86)) v_86 = carerror(v_86); else
    v_86 = car(v_86);
    if (!car_legal(v_86)) v_86 = carerror(v_86); else
    v_86 = car(v_86);
    if (!car_legal(v_86)) v_86 = carerror(v_86); else
    v_86 = car(v_86);
    stack[0] = v_86;
    v_86 = v_87;
    stack[-1] = v_86;
    goto v_8;
v_51:
    v_86 = nil;
    goto v_7;
    goto v_34;
v_34:
    goto v_10;
v_26:
    v_86 = stack[-1];
    if (!car_legal(v_86)) v_86 = carerror(v_86); else
    v_86 = car(v_86);
    if (!car_legal(v_86)) v_87 = cdrerror(v_86); else
    v_87 = cdr(v_86);
    v_86 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // sfto_davp
    v_86 = (*qfn2(fn))(fn, v_87, v_86);
    }
    env = stack[-2];
    if (v_86 == nil) goto v_75;
    v_86 = stack[-1];
    if (!car_legal(v_86)) v_86 = cdrerror(v_86); else
    v_86 = cdr(v_86);
    stack[-1] = v_86;
    goto v_8;
v_75:
    v_86 = nil;
    goto v_7;
    goto v_10;
v_10:
    v_86 = nil;
v_7:
    return onevalue(v_86);
}



// Code for talp_varlt1

static LispObject CC_talp_varlt1(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    v_48 = stack[-1];
    if (!consp(v_48)) goto v_9;
    else goto v_10;
v_9:
    stack[-2] = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // talp_getl
    v_48 = (*qfn0(fn))(fn);
    }
    env = stack[-3];
    v_48 = Latsoc(nil, stack[-2], v_48);
    if (v_48 == nil) goto v_14;
    else goto v_15;
v_14:
    v_49 = stack[-1];
    v_48 = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // lto_insert
        return (*qfn2(fn))(fn, v_49, v_48);
    }
v_15:
    v_48 = nil;
    goto v_6;
    goto v_8;
v_10:
v_8:
    v_48 = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // talp_argl
    v_48 = (*qfn1(fn))(fn, v_48);
    }
    env = stack[-3];
    stack[-1] = v_48;
v_28:
    v_48 = stack[-1];
    if (v_48 == nil) goto v_33;
    else goto v_34;
v_33:
    goto v_27;
v_34:
    v_48 = stack[-1];
    if (!car_legal(v_48)) v_48 = carerror(v_48); else
    v_48 = car(v_48);
    v_49 = v_48;
    v_48 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // talp_varlt1
    v_49 = (*qfn2(fn))(fn, v_49, v_48);
    }
    env = stack[-3];
    v_48 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // union
    v_48 = (*qfn2(fn))(fn, v_49, v_48);
    }
    env = stack[-3];
    stack[0] = v_48;
    v_48 = stack[-1];
    if (!car_legal(v_48)) v_48 = cdrerror(v_48); else
    v_48 = cdr(v_48);
    stack[-1] = v_48;
    goto v_28;
v_27:
    v_48 = stack[0];
v_6:
    return onevalue(v_48);
}



// Code for mri_simplfloor

static LispObject CC_mri_simplfloor(LispObject env,
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
// space for vars preserved across procedure calls
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_15 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // mri_floorkernelp
    v_15 = (*qfn1(fn))(fn, v_15);
    }
    env = stack[-1];
    if (v_15 == nil) goto v_6;
    else goto v_7;
v_6:
    v_15 = stack[0];
    goto v_5;
v_7:
    v_15 = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // mri_simplfloor1
        return (*qfn1(fn))(fn, v_15);
    }
    v_15 = nil;
v_5:
    return onevalue(v_15);
}



// Code for qqe_prepat

static LispObject CC_qqe_prepat(LispObject env,
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



// Code for eolcheck

static LispObject CC_eolcheck(LispObject env)
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
    stack_popper stack_popper_var(1);
// end of prologue
    v_31 = qvalue(basic_elt(env, 1)); // !*eoldelimp
    if (v_31 == nil) goto v_5;
    else goto v_6;
v_5:
    v_31 = nil;
    goto v_4;
v_6:
v_13:
    v_32 = qvalue(basic_elt(env, 2)); // nxtsym!*
    v_31 = qvalue(basic_elt(env, 3)); // !$eol!$
    if (v_32 == v_31) goto v_17;
    v_31 = nil;
    goto v_12;
v_17:
    v_32 = qvalue(basic_elt(env, 4)); // cursym!*
    v_31 = basic_elt(env, 5); // end
    if (v_32 == v_31) goto v_23;
    else goto v_24;
v_23:
    v_31 = basic_elt(env, 6); // !;
    goto v_22;
v_24:
    {   LispObject fn = basic_elt(env, 7); // token
    v_31 = (*qfn0(fn))(fn);
    }
    env = stack[0];
    goto v_22;
    v_31 = nil;
v_22:
    setvalue(basic_elt(env, 2), v_31); // nxtsym!*
    goto v_13;
v_12:
    goto v_4;
    v_31 = nil;
v_4:
    return onevalue(v_31);
}



// Code for mcharg1

static LispObject CC_mcharg1(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_109, v_110, v_111;
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
    v_109 = stack[-3];
    if (v_109 == nil) goto v_12;
    else goto v_13;
v_12:
    v_109 = stack[-2];
    v_109 = (v_109 == nil ? lisp_true : nil);
    goto v_11;
v_13:
    v_109 = nil;
    goto v_11;
    v_109 = nil;
v_11:
    if (v_109 == nil) goto v_9;
    v_109 = nil;
    return ncons(v_109);
v_9:
    v_109 = stack[-3];
    v_109 = Llength(nil, v_109);
    env = stack[-5];
    stack[-4] = v_109;
    v_109 = stack[-2];
    v_109 = Llength(nil, v_109);
    env = stack[-5];
    stack[0] = v_109;
    v_109 = stack[-1];
    if (!symbolp(v_109)) v_109 = nil;
    else { v_109 = qfastgets(v_109);
           if (v_109 != nil) { v_109 = elt(v_109, 35); // nary
#ifdef RECORD_GET
             if (v_109 == SPID_NOPROP)
                record_get(elt(fastget_names, 35), 0),
                v_109 = nil;
             else record_get(elt(fastget_names, 35), 1),
                v_109 = lisp_true; }
           else record_get(elt(fastget_names, 35), 0); }
#else
             if (v_109 == SPID_NOPROP) v_109 = nil; else v_109 = lisp_true; }}
#endif
    if (v_109 == nil) goto v_41;
    v_110 = stack[-4];
    v_109 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_109 = static_cast<LispObject>(greaterp2(v_110, v_109));
    v_109 = v_109 ? lisp_true : nil;
    env = stack[-5];
    goto v_39;
v_41:
    v_109 = nil;
    goto v_39;
    v_109 = nil;
v_39:
    if (v_109 == nil) goto v_37;
    v_110 = stack[-4];
    v_109 = qvalue(basic_elt(env, 1)); // matchlength!*
    v_109 = static_cast<LispObject>(lesseq2(v_110, v_109));
    v_109 = v_109 ? lisp_true : nil;
    env = stack[-5];
    if (v_109 == nil) goto v_53;
    v_109 = stack[-1];
    if (!symbolp(v_109)) v_109 = nil;
    else { v_109 = qfastgets(v_109);
           if (v_109 != nil) { v_109 = elt(v_109, 43); // symmetric
#ifdef RECORD_GET
             if (v_109 == SPID_NOPROP)
                record_get(elt(fastget_names, 43), 0),
                v_109 = nil;
             else record_get(elt(fastget_names, 43), 1),
                v_109 = lisp_true; }
           else record_get(elt(fastget_names, 43), 0); }
#else
             if (v_109 == SPID_NOPROP) v_109 = nil; else v_109 = lisp_true; }}
#endif
    if (v_109 == nil) goto v_53;
    v_111 = stack[-3];
    v_110 = stack[-2];
    v_109 = stack[-1];
    {
        LispObject fn = basic_elt(env, 2); // mchcomb
        return (*qfn3(fn))(fn, v_111, v_110, v_109);
    }
v_53:
    v_110 = stack[0];
    v_109 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    if (v_110 == v_109) goto v_65;
    else goto v_66;
v_65:
    v_110 = stack[-1];
    v_109 = stack[-3];
    {   LispObject fn = basic_elt(env, 3); // mkbin
    v_109 = (*qfn2(fn))(fn, v_110, v_109);
    }
    env = stack[-5];
    if (!car_legal(v_109)) v_109 = cdrerror(v_109); else
    v_109 = cdr(v_109);
    stack[-3] = v_109;
    v_109 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    stack[-4] = v_109;
    goto v_51;
v_66:
    v_109 = nil;
    goto v_27;
v_51:
    goto v_35;
v_37:
v_35:
    v_110 = stack[-4];
    v_109 = stack[0];
    if (equal(v_110, v_109)) goto v_80;
    v_109 = nil;
    goto v_78;
v_80:
    v_109 = stack[-1];
    if (!symbolp(v_109)) v_109 = nil;
    else { v_109 = qfastgets(v_109);
           if (v_109 != nil) { v_109 = elt(v_109, 43); // symmetric
#ifdef RECORD_GET
             if (v_109 == SPID_NOPROP)
                record_get(elt(fastget_names, 43), 0),
                v_109 = nil;
             else record_get(elt(fastget_names, 43), 1),
                v_109 = lisp_true; }
           else record_get(elt(fastget_names, 43), 0); }
#else
             if (v_109 == SPID_NOPROP) v_109 = nil; else v_109 = lisp_true; }}
#endif
    if (v_109 == nil) goto v_85;
    v_111 = stack[-3];
    v_110 = stack[-2];
    v_109 = stack[-1];
    {
        LispObject fn = basic_elt(env, 4); // mchsarg
        return (*qfn3(fn))(fn, v_111, v_110, v_109);
    }
v_85:
    v_109 = stack[-2];
    {   LispObject fn = basic_elt(env, 5); // mtp
    v_109 = (*qfn1(fn))(fn, v_109);
    }
    env = stack[-5];
    if (v_109 == nil) goto v_93;
    v_110 = stack[-2];
    v_109 = stack[-3];
    {   LispObject fn = basic_elt(env, 6); // pair
    v_109 = (*qfn2(fn))(fn, v_110, v_109);
    }
    return ncons(v_109);
v_93:
    v_109 = nil;
    stack[0] = ncons(v_109);
    env = stack[-5];
    v_109 = stack[-1];
    v_109 = ncons(v_109);
    env = stack[-5];
    {
        LispObject v_117 = stack[-3];
        LispObject v_118 = stack[-2];
        LispObject v_119 = stack[0];
        LispObject fn = basic_elt(env, 7); // mcharg2
        return (*qfn4up(fn))(fn, v_117, v_118, v_119, v_109);
    }
    v_109 = nil;
v_78:
v_27:
    goto v_7;
    v_109 = nil;
v_7:
    return onevalue(v_109);
}



// Code for boundindp

static LispObject CC_boundindp(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_29, v_30, v_31, v_32;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_30 = v_3;
    v_31 = v_2;
// end of prologue
v_7:
    v_29 = v_31;
    if (v_29 == nil) goto v_10;
    else goto v_11;
v_10:
    v_29 = lisp_true;
    goto v_6;
v_11:
    v_29 = v_31;
    if (!car_legal(v_29)) v_32 = carerror(v_29); else
    v_32 = car(v_29);
    v_29 = v_30;
    v_29 = Lmember(nil, v_32, v_29);
    if (v_29 == nil) goto v_19;
    v_29 = v_31;
    if (!car_legal(v_29)) v_29 = cdrerror(v_29); else
    v_29 = cdr(v_29);
    v_31 = v_29;
    goto v_7;
v_19:
    v_29 = nil;
    goto v_6;
    goto v_9;
v_9:
    v_29 = nil;
v_6:
    return onevalue(v_29);
}



// Code for chundexp

static LispObject CC_chundexp(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[-1] = v_2;
// end of prologue
    v_56 = stack[-1];
    v_56 = Lexplodec(nil, v_56);
    env = stack[-3];
    stack[-1] = v_56;
    v_56 = stack[-1];
    stack[-2] = v_56;
    v_57 = stack[-1];
    v_56 = basic_elt(env, 1); // !_
    if (!consp(v_57)) goto v_19;
    v_57 = car(v_57);
    if (v_57 == v_56) goto v_18;
    else goto v_19;
v_18:
    v_56 = stack[-1];
    if (!car_legal(v_56)) v_56 = cdrerror(v_56); else
    v_56 = cdr(v_56);
    goto v_17;
v_19:
    v_56 = nil;
    goto v_17;
    v_56 = nil;
v_17:
    if (v_56 == nil) goto v_15;
    v_57 = basic_elt(env, 2); // !\ (backslash)
    v_56 = stack[-1];
    v_56 = cons(v_57, v_56);
    env = stack[-3];
    stack[-1] = v_56;
    goto v_13;
v_15:
v_13:
v_7:
    v_56 = stack[-2];
    if (!car_legal(v_56)) v_56 = cdrerror(v_56); else
    v_56 = cdr(v_56);
    if (v_56 == nil) goto v_33;
    else goto v_34;
v_33:
    goto v_8;
v_34:
    v_56 = stack[-2];
    if (!car_legal(v_56)) v_56 = cdrerror(v_56); else
    v_56 = cdr(v_56);
    if (!car_legal(v_56)) v_57 = carerror(v_56); else
    v_57 = car(v_56);
    v_56 = basic_elt(env, 1); // !_
    if (v_57 == v_56) goto v_39;
    else goto v_40;
v_39:
    stack[0] = stack[-2];
    v_57 = basic_elt(env, 2); // !\ (backslash)
    v_56 = stack[-2];
    if (!car_legal(v_56)) v_56 = cdrerror(v_56); else
    v_56 = cdr(v_56);
    v_56 = cons(v_57, v_56);
    env = stack[-3];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_56);
    v_56 = stack[-2];
    if (!car_legal(v_56)) v_56 = cdrerror(v_56); else
    v_56 = cdr(v_56);
    stack[-2] = v_56;
    goto v_38;
v_40:
v_38:
    v_56 = stack[-2];
    if (!car_legal(v_56)) v_56 = cdrerror(v_56); else
    v_56 = cdr(v_56);
    stack[-2] = v_56;
    goto v_7;
v_8:
    v_56 = stack[-1];
    return onevalue(v_56);
}



// Code for red!-char!-downcase

static LispObject CC_redKcharKdowncase(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_18, v_19, v_20;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_19 = v_2;
// end of prologue
    v_18 = v_19;
    v_20 = qvalue(basic_elt(env, 1)); // charassoc!*
    v_18 = Latsoc(nil, v_18, v_20);
    v_20 = v_18;
    v_18 = v_20;
    if (v_18 == nil) goto v_11;
    v_18 = v_20;
    if (!car_legal(v_18)) v_18 = cdrerror(v_18); else
    v_18 = cdr(v_18);
    goto v_9;
v_11:
    v_18 = v_19;
    goto v_9;
    v_18 = nil;
v_9:
    return onevalue(v_18);
}



// Code for physopp!*

static LispObject CC_physoppH(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_59 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // physopp
    v_59 = (*qfn1(fn))(fn, v_59);
    }
    env = stack[-1];
    if (v_59 == nil) goto v_6;
    else goto v_5;
v_6:
    v_59 = stack[0];
    if (!consp(v_59)) goto v_12;
    v_59 = stack[0];
    if (!car_legal(v_59)) v_60 = carerror(v_59); else
    v_60 = car(v_59);
    v_59 = basic_elt(env, 1); // physopfn
    v_59 = Lflagp(nil, v_60, v_59);
    env = stack[-1];
    if (v_59 == nil) goto v_17;
    v_59 = lisp_true;
    goto v_15;
v_17:
    v_59 = stack[0];
    if (!car_legal(v_59)) v_60 = carerror(v_59); else
    v_60 = car(v_59);
    v_59 = basic_elt(env, 2); // physoparith
    v_59 = Lflagp(nil, v_60, v_59);
    env = stack[-1];
    if (v_59 == nil) goto v_31;
    v_59 = stack[0];
    if (!car_legal(v_59)) v_59 = cdrerror(v_59); else
    v_59 = cdr(v_59);
    {   LispObject fn = basic_elt(env, 5); // hasonephysop
    v_59 = (*qfn1(fn))(fn, v_59);
    }
    env = stack[-1];
    goto v_29;
v_31:
    v_59 = nil;
    goto v_29;
    v_59 = nil;
v_29:
    if (v_59 == nil) goto v_27;
    else goto v_26;
v_27:
    v_59 = stack[0];
    if (!car_legal(v_59)) v_60 = carerror(v_59); else
    v_60 = car(v_59);
    v_59 = basic_elt(env, 3); // physopmapping
    v_59 = Lflagp(nil, v_60, v_59);
    env = stack[-1];
    if (v_59 == nil) goto v_45;
    v_59 = stack[0];
    if (!car_legal(v_59)) v_59 = cdrerror(v_59); else
    v_59 = cdr(v_59);
    {
        LispObject fn = basic_elt(env, 5); // hasonephysop
        return (*qfn1(fn))(fn, v_59);
    }
v_45:
    v_59 = nil;
    goto v_43;
    v_59 = nil;
v_43:
v_26:
    goto v_15;
    v_59 = nil;
v_15:
    goto v_10;
v_12:
    v_59 = nil;
    goto v_10;
    v_59 = nil;
v_10:
v_5:
    return onevalue(v_59);
}



// Code for macrochk

static LispObject CC_macrochk(LispObject env,
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-2] = v_2;
// end of prologue
    v_57 = stack[-2];
    if (!consp(v_57)) goto v_10;
    else goto v_11;
v_10:
    v_57 = stack[-2];
    goto v_7;
v_11:
    v_57 = stack[-2];
    if (!car_legal(v_57)) v_57 = carerror(v_57); else
    v_57 = car(v_57);
    {   LispObject fn = basic_elt(env, 3); // expdrmacro
    v_57 = (*qfn1(fn))(fn, v_57);
    }
    env = stack[-4];
    v_59 = v_57;
    if (v_57 == nil) goto v_15;
    v_58 = stack[0];
    v_57 = basic_elt(env, 1); // symbolic
    if (v_58 == v_57) goto v_23;
    else goto v_24;
v_23:
    v_57 = lisp_true;
    goto v_22;
v_24:
    v_57 = stack[-2];
    if (!car_legal(v_57)) v_57 = carerror(v_57); else
    v_57 = car(v_57);
    if (symbolp(v_57)) goto v_33;
    v_57 = nil;
    goto v_31;
v_33:
    v_57 = stack[-2];
    if (!car_legal(v_57)) v_57 = carerror(v_57); else
    v_57 = car(v_57);
    if (!symbolp(v_57)) v_57 = nil;
    else { v_57 = qfastgets(v_57);
           if (v_57 != nil) { v_57 = elt(v_57, 59); // opfn
#ifdef RECORD_GET
             if (v_57 == SPID_NOPROP)
                record_get(elt(fastget_names, 59), 0),
                v_57 = nil;
             else record_get(elt(fastget_names, 59), 1),
                v_57 = lisp_true; }
           else record_get(elt(fastget_names, 59), 0); }
#else
             if (v_57 == SPID_NOPROP) v_57 = nil; else v_57 = lisp_true; }}
#endif
    goto v_31;
    v_57 = nil;
v_31:
    goto v_22;
    v_57 = nil;
v_22:
    if (v_57 == nil) goto v_15;
    v_57 = v_59;
    if (!car_legal(v_57)) v_58 = carerror(v_57); else
    v_58 = car(v_57);
    v_57 = basic_elt(env, 2); // macrofn
    stack[-3] = get(v_58, v_57);
    env = stack[-4];
    v_57 = v_59;
    if (!car_legal(v_57)) stack[-1] = cdrerror(v_57); else
    stack[-1] = cdr(v_57);
    v_57 = stack[-2];
    if (!car_legal(v_57)) stack[0] = cdrerror(v_57); else
    stack[0] = cdr(v_57);
    v_57 = stack[-2];
    if (!car_legal(v_57)) v_57 = carerror(v_57); else
    v_57 = car(v_57);
    v_57 = ncons(v_57);
    {
        LispObject v_64 = stack[-3];
        LispObject v_65 = stack[-1];
        LispObject v_66 = stack[0];
        return Lapply3(nil, v_64, v_65, v_66, v_57);
    }
v_15:
    v_57 = stack[-2];
    goto v_7;
    v_57 = nil;
v_7:
    return onevalue(v_57);
}



// Code for getel

static LispObject CC_getel(LispObject env,
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
// space for vars preserved across procedure calls
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[-1] = v_2;
// end of prologue
    v_33 = stack[-1];
    if (!car_legal(v_33)) v_34 = carerror(v_33); else
    v_34 = car(v_33);
    v_33 = basic_elt(env, 1); // dimension
    v_33 = get(v_34, v_33);
    env = stack[-3];
    stack[-2] = v_33;
    v_33 = stack[-2];
    stack[0] = Llength(nil, v_33);
    env = stack[-3];
    v_33 = stack[-1];
    if (!car_legal(v_33)) v_33 = cdrerror(v_33); else
    v_33 = cdr(v_33);
    v_33 = Llength(nil, v_33);
    env = stack[-3];
    if (equal(stack[0], v_33)) goto v_12;
    v_35 = basic_elt(env, 2); // rlisp
    v_34 = static_cast<LispObject>(336)+TAG_FIXNUM; // 21
    v_33 = basic_elt(env, 3); // "Incorrect array reference"
    {
        LispObject fn = basic_elt(env, 4); // rerror
        return (*qfn3(fn))(fn, v_35, v_34, v_33);
    }
v_12:
    v_33 = stack[-1];
    if (!car_legal(v_33)) v_33 = carerror(v_33); else
    v_33 = car(v_33);
    if (!symbolp(v_33)) v_33 = nil;
    else { v_33 = qfastgets(v_33);
           if (v_33 != nil) { v_33 = elt(v_33, 4); // avalue
#ifdef RECORD_GET
             if (v_33 != SPID_NOPROP)
                record_get(elt(fastget_names, 4), 1);
             else record_get(elt(fastget_names, 4), 0),
                v_33 = nil; }
           else record_get(elt(fastget_names, 4), 0); }
#else
             if (v_33 == SPID_NOPROP) v_33 = nil; }}
#endif
    if (!car_legal(v_33)) v_33 = cdrerror(v_33); else
    v_33 = cdr(v_33);
    if (!car_legal(v_33)) v_35 = carerror(v_33); else
    v_35 = car(v_33);
    v_33 = stack[-1];
    if (!car_legal(v_33)) v_34 = cdrerror(v_33); else
    v_34 = cdr(v_33);
    v_33 = stack[-2];
    {
        LispObject fn = basic_elt(env, 5); // getel1
        return (*qfn3(fn))(fn, v_35, v_34, v_33);
    }
    v_33 = nil;
    return onevalue(v_33);
}



// Code for mo!=lexcomp

static LispObject CC_moMlexcomp(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_46, v_47, v_48, v_49;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_47 = v_3;
    v_48 = v_2;
// end of prologue
v_7:
    v_46 = v_48;
    if (v_46 == nil) goto v_10;
    else goto v_11;
v_10:
    v_46 = v_47;
    if (v_46 == nil) goto v_15;
    else goto v_16;
v_15:
    v_46 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_6;
v_16:
    v_46 = basic_elt(env, 1); // (0)
    v_48 = v_46;
    goto v_7;
    goto v_9;
v_11:
    v_46 = v_47;
    if (v_46 == nil) goto v_22;
    else goto v_23;
v_22:
    v_46 = basic_elt(env, 1); // (0)
    v_47 = v_46;
    goto v_7;
v_23:
    v_46 = v_48;
    if (!car_legal(v_46)) v_49 = carerror(v_46); else
    v_49 = car(v_46);
    v_46 = v_47;
    if (!car_legal(v_46)) v_46 = carerror(v_46); else
    v_46 = car(v_46);
    if (equal(v_49, v_46)) goto v_26;
    else goto v_27;
v_26:
    v_46 = v_48;
    if (!car_legal(v_46)) v_46 = cdrerror(v_46); else
    v_46 = cdr(v_46);
    v_48 = v_46;
    v_46 = v_47;
    if (!car_legal(v_46)) v_46 = cdrerror(v_46); else
    v_46 = cdr(v_46);
    v_47 = v_46;
    goto v_7;
v_27:
    v_46 = v_48;
    if (!car_legal(v_46)) v_46 = carerror(v_46); else
    v_46 = car(v_46);
    if (!car_legal(v_47)) v_47 = carerror(v_47); else
    v_47 = car(v_47);
    if ((static_cast<std::intptr_t>(v_46) > static_cast<std::intptr_t>(v_47))) goto v_36;
    else goto v_37;
v_36:
    v_46 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_6;
v_37:
    v_46 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    goto v_6;
v_9:
    v_46 = nil;
v_6:
    return onevalue(v_46);
}



// Code for gperm

static LispObject CC_gperm(LispObject env,
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    stack[-1] = nil;
v_9:
    v_62 = stack[0];
    v_61 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_61 = static_cast<LispObject>(greaterp2(v_62, v_61));
    v_61 = v_61 ? lisp_true : nil;
    env = stack[-4];
    if (v_61 == nil) goto v_12;
    else goto v_13;
v_12:
    goto v_8;
v_13:
    v_62 = stack[0];
    v_61 = stack[-1];
    v_61 = cons(v_62, v_61);
    env = stack[-4];
    stack[-1] = v_61;
    v_61 = stack[0];
    v_61 = sub1(v_61);
    env = stack[-4];
    stack[0] = v_61;
    goto v_9;
v_8:
    v_61 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // gperm0
    v_61 = (*qfn1(fn))(fn, v_61);
    }
    env = stack[-4];
    stack[-3] = v_61;
    v_61 = stack[-3];
    if (v_61 == nil) goto v_33;
    else goto v_34;
v_33:
    v_61 = nil;
    goto v_27;
v_34:
    v_61 = stack[-3];
    if (!car_legal(v_61)) v_61 = carerror(v_61); else
    v_61 = car(v_61);
    {   LispObject fn = basic_elt(env, 2); // pkp
    v_61 = (*qfn1(fn))(fn, v_61);
    }
    env = stack[-4];
    v_61 = ncons(v_61);
    env = stack[-4];
    stack[-1] = v_61;
    stack[-2] = v_61;
v_28:
    v_61 = stack[-3];
    if (!car_legal(v_61)) v_61 = cdrerror(v_61); else
    v_61 = cdr(v_61);
    stack[-3] = v_61;
    v_61 = stack[-3];
    if (v_61 == nil) goto v_47;
    else goto v_48;
v_47:
    v_61 = stack[-2];
    goto v_27;
v_48:
    stack[0] = stack[-1];
    v_61 = stack[-3];
    if (!car_legal(v_61)) v_61 = carerror(v_61); else
    v_61 = car(v_61);
    {   LispObject fn = basic_elt(env, 2); // pkp
    v_61 = (*qfn1(fn))(fn, v_61);
    }
    env = stack[-4];
    v_61 = ncons(v_61);
    env = stack[-4];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_61);
    v_61 = stack[-1];
    if (!car_legal(v_61)) v_61 = cdrerror(v_61); else
    v_61 = cdr(v_61);
    stack[-1] = v_61;
    goto v_28;
v_27:
    return onevalue(v_61);
}



// Code for copy

static LispObject CC_copy(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    stack[-1] = nil;
v_7:
    v_25 = stack[0];
    if (!consp(v_25)) goto v_10;
    else goto v_11;
v_10:
    v_26 = stack[-1];
    v_25 = stack[0];
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn2(fn))(fn, v_26, v_25);
    }
v_11:
    v_25 = stack[0];
    if (!car_legal(v_25)) v_25 = carerror(v_25); else
    v_25 = car(v_25);
    {   LispObject fn = basic_elt(env, 0); // copy
    v_26 = (*qfn1(fn))(fn, v_25);
    }
    env = stack[-2];
    v_25 = stack[-1];
    v_25 = cons(v_26, v_25);
    env = stack[-2];
    stack[-1] = v_25;
    v_25 = stack[0];
    if (!car_legal(v_25)) v_25 = cdrerror(v_25); else
    v_25 = cdr(v_25);
    stack[0] = v_25;
    goto v_7;
    v_25 = nil;
    return onevalue(v_25);
}



// Code for !*modular2f

static LispObject CC_Hmodular2f(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
v_6:
    v_53 = stack[0];
    v_52 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_53 == v_52) goto v_9;
    else goto v_10;
v_9:
    v_52 = nil;
    goto v_5;
v_10:
    v_52 = qvalue(basic_elt(env, 1)); // !*balanced_mod
    if (v_52 == nil) goto v_15;
    v_53 = stack[0];
    v_52 = stack[0];
    v_53 = plus2(v_53, v_52);
    env = stack[-2];
    v_52 = qvalue(basic_elt(env, 2)); // current!-modulus
    v_52 = static_cast<LispObject>(greaterp2(v_53, v_52));
    v_52 = v_52 ? lisp_true : nil;
    env = stack[-2];
    if (v_52 == nil) goto v_20;
    stack[-1] = basic_elt(env, 3); // !:mod!:
    v_53 = stack[0];
    v_52 = qvalue(basic_elt(env, 2)); // current!-modulus
    v_52 = difference2(v_53, v_52);
    {
        LispObject v_56 = stack[-1];
        return cons(v_56, v_52);
    }
v_20:
    v_53 = stack[0];
    v_52 = stack[0];
    stack[-1] = plus2(v_53, v_52);
    env = stack[-2];
    v_52 = qvalue(basic_elt(env, 2)); // current!-modulus
    v_52 = negate(v_52);
    env = stack[-2];
    v_52 = static_cast<LispObject>(lesseq2(stack[-1], v_52));
    v_52 = v_52 ? lisp_true : nil;
    env = stack[-2];
    if (v_52 == nil) goto v_32;
    v_53 = stack[0];
    v_52 = qvalue(basic_elt(env, 2)); // current!-modulus
    v_52 = plus2(v_53, v_52);
    env = stack[-2];
    stack[0] = v_52;
    goto v_6;
v_32:
    v_53 = basic_elt(env, 3); // !:mod!:
    v_52 = stack[0];
    return cons(v_53, v_52);
    goto v_8;
v_15:
    v_53 = basic_elt(env, 3); // !:mod!:
    v_52 = stack[0];
    return cons(v_53, v_52);
v_8:
    v_52 = nil;
v_5:
    return onevalue(v_52);
}



// Code for general!-modular!-quotient

static LispObject CC_generalKmodularKquotient(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // general!-modular!-reciprocal
    v_9 = (*qfn1(fn))(fn, v_9);
    }
    env = stack[-1];
    {
        LispObject v_12 = stack[0];
        LispObject fn = basic_elt(env, 2); // general!-modular!-times
        return (*qfn2(fn))(fn, v_12, v_9);
    }
}



// Code for minus!-mod!-p

static LispObject CC_minusKmodKp(LispObject env,
                         LispObject v_2)
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
    v_45 = stack[-1];
    if (v_45 == nil) goto v_10;
    else goto v_11;
v_10:
    v_45 = stack[-2];
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn1(fn))(fn, v_45);
    }
v_11:
    v_45 = stack[-1];
    if (!consp(v_45)) goto v_19;
    else goto v_20;
v_19:
    v_45 = lisp_true;
    goto v_18;
v_20:
    v_45 = stack[-1];
    if (!car_legal(v_45)) v_45 = carerror(v_45); else
    v_45 = car(v_45);
    v_45 = (consp(v_45) ? nil : lisp_true);
    goto v_18;
    v_45 = nil;
v_18:
    if (v_45 == nil) goto v_16;
    v_46 = stack[-2];
    v_45 = stack[-1];
    {   std::intptr_t w = int_of_fixnum(v_45);
        if (w != 0) w = current_modulus - w;
        v_45 = fixnum_of_int(w);
    }
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn2(fn))(fn, v_46, v_45);
    }
v_16:
    v_45 = stack[-1];
    if (!car_legal(v_45)) v_45 = carerror(v_45); else
    v_45 = car(v_45);
    if (!car_legal(v_45)) stack[0] = carerror(v_45); else
    stack[0] = car(v_45);
    v_45 = stack[-1];
    if (!car_legal(v_45)) v_45 = carerror(v_45); else
    v_45 = car(v_45);
    if (!car_legal(v_45)) v_45 = cdrerror(v_45); else
    v_45 = cdr(v_45);
    {   LispObject fn = basic_elt(env, 0); // minus!-mod!-p
    v_46 = (*qfn1(fn))(fn, v_45);
    }
    env = stack[-3];
    v_45 = stack[-2];
    v_45 = acons(stack[0], v_46, v_45);
    env = stack[-3];
    stack[-2] = v_45;
    v_45 = stack[-1];
    if (!car_legal(v_45)) v_45 = cdrerror(v_45); else
    v_45 = cdr(v_45);
    stack[-1] = v_45;
    goto v_7;
    v_45 = nil;
    return onevalue(v_45);
}



setup_type const u06_setup[] =
{
    {"lalr_print_collection",   CC_lalr_print_collection,G1W0,G2W0,G3W0,G4W0},
    {"convertmode",             G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_convertmode},
    {"subs3q",                  G0W1,     CC_subs3q,G2W1,     G3W1,     G4W1},
    {"talp_smwcpknowl",         G0W1,     CC_talp_smwcpknowl,G2W1,G3W1, G4W1},
    {"qqe_qtidp",               G0W1,     CC_qqe_qtidp,G2W1,  G3W1,     G4W1},
    {"algid",                   G0W2,     G1W2,     CC_algid, G3W2,     G4W2},
    {"emtch",                   G0W1,     CC_emtch, G2W1,     G3W1,     G4W1},
    {"pnthxzz",                 G0W2,     G1W2,     CC_pnthxzz,G3W2,    G4W2},
    {"csl_timbf",               G0W2,     G1W2,     CC_csl_timbf,G3W2,  G4W2},
    {"putpline",                G0W1,     CC_putpline,G2W1,   G3W1,     G4W1},
    {":times",                  G0W2,     G1W2,     CC_Ttimes,G3W2,     G4W2},
    {"mkrn",                    G0W2,     G1W2,     CC_mkrn,  G3W2,     G4W2},
    {"gperm1",                  G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_gperm1},
    {"evaluate-in-order",       G0W2,     G1W2,     CC_evaluateKinKorder,G3W2,G4W2},
    {"delete_from_alglist",     G0W2,     G1W2,     CC_delete_from_alglist,G3W2,G4W2},
    {"gcdf*",                   G0W2,     G1W2,     CC_gcdfH, G3W2,     G4W2},
    {"prin2t",                  G0W1,     CC_prin2t,G2W1,     G3W1,     G4W1},
    {"reval1",                  G0W2,     G1W2,     CC_reval1,G3W2,     G4W2},
    {"sfto_dcontentf1",         G0W2,     G1W2,     CC_sfto_dcontentf1,G3W2,G4W2},
    {"sqchk",                   G0W1,     CC_sqchk, G2W1,     G3W1,     G4W1},
    {"removev",                 G0W2,     G1W2,     CC_removev,G3W2,    G4W2},
    {"talp_simplat1",           G0W2,     G1W2,     CC_talp_simplat1,G3W2,G4W2},
    {"ibalp_varlat",            G0W1,     CC_ibalp_varlat,G2W1,G3W1,    G4W1},
    {"quotfd",                  G0W2,     G1W2,     CC_quotfd,G3W2,     G4W2},
    {"mathml",                  CC_mathml,G1W0,     G2W0,     G3W0,     G4W0},
    {"sortcolelem",             G0W3,     G1W3,     G2W3,     CC_sortcolelem,G4W3},
    {"prepf1a_reversed",        G0W3,     G1W3,     G2W3,     CC_prepf1a_reversed,G4W3},
    {"comm_kernels",            G0W1,     CC_comm_kernels,G2W1,G3W1,    G4W1},
    {"fast-column-dim",         G0W1,     CC_fastKcolumnKdim,G2W1,G3W1, G4W1},
    {"evtdeg",                  G0W1,     CC_evtdeg,G2W1,     G3W1,     G4W1},
    {"mknwedge",                G0W1,     CC_mknwedge,G2W1,   G3W1,     G4W1},
    {":plus",                   G0W2,     G1W2,     CC_Tplus, G3W2,     G4W2},
    {"getelv",                  G0W1,     CC_getelv,G2W1,     G3W1,     G4W1},
    {"dp=ecart",                G0W1,     CC_dpMecart,G2W1,   G3W1,     G4W1},
    {"tsym4",                   G0W3,     G1W3,     G2W3,     CC_tsym4, G4W3},
    {"set_svf",                 G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_set_svf},
    {"gcddd",                   G0W2,     G1W2,     CC_gcddd, G3W2,     G4W2},
    {"anform1",                 G0W1,     CC_anform1,G2W1,    G3W1,     G4W1},
    {"freeofl",                 G0W2,     G1W2,     CC_freeofl,G3W2,    G4W2},
    {"mri_type",                G0W1,     CC_mri_type,G2W1,   G3W1,     G4W1},
    {"pasf_dec",                G0W1,     CC_pasf_dec,G2W1,   G3W1,     G4W1},
    {"cgp_evlmon",              G0W1,     CC_cgp_evlmon,G2W1, G3W1,     G4W1},
    {"times-mod-p",             G0W2,     G1W2,     CC_timesKmodKp,G3W2,G4W2},
    {"omobj",                   CC_omobj, G1W0,     G2W0,     G3W0,     G4W0},
    {"sqform",                  G0W2,     G1W2,     CC_sqform,G3W2,     G4W2},
    {"mk*sq",                   G0W1,     CC_mkHsq, G2W1,     G3W1,     G4W1},
    {"subscriptedvarp",         G0W1,     CC_subscriptedvarp,G2W1,G3W1, G4W1},
    {"exptchk",                 G0W1,     CC_exptchk,G2W1,    G3W1,     G4W1},
    {"order:",                  G0W1,     CC_orderT,G2W1,     G3W1,     G4W1},
    {"areallindices",           G0W1,     CC_areallindices,G2W1,G3W1,   G4W1},
    {"*ssave",                  G0W2,     G1W2,     CC_Hssave,G3W2,     G4W2},
    {"red-weight",              G0W2,     G1W2,     CC_redKweight,G3W2, G4W2},
    {"dp_diff",                 G0W2,     G1W2,     CC_dp_diff,G3W2,    G4W2},
    {"resimp1",                 G0W1,     CC_resimp1,G2W1,    G3W1,     G4W1},
    {"pv_sort2a",               G0W2,     G1W2,     CC_pv_sort2a,G3W2,  G4W2},
    {"starts-with",             G0W2,     G1W2,     CC_startsKwith,G3W2,G4W2},
    {"sfto_davp",               G0W2,     G1W2,     CC_sfto_davp,G3W2,  G4W2},
    {"talp_varlt1",             G0W2,     G1W2,     CC_talp_varlt1,G3W2,G4W2},
    {"mri_simplfloor",          G0W1,     CC_mri_simplfloor,G2W1,G3W1,  G4W1},
    {"qqe_prepat",              G0W1,     CC_qqe_prepat,G2W1, G3W1,     G4W1},
    {"eolcheck",                CC_eolcheck,G1W0,   G2W0,     G3W0,     G4W0},
    {"mcharg1",                 G0W3,     G1W3,     G2W3,     CC_mcharg1,G4W3},
    {"boundindp",               G0W2,     G1W2,     CC_boundindp,G3W2,  G4W2},
    {"chundexp",                G0W1,     CC_chundexp,G2W1,   G3W1,     G4W1},
    {"red-char-downcase",       G0W1,     CC_redKcharKdowncase,G2W1,G3W1,G4W1},
    {"physopp*",                G0W1,     CC_physoppH,G2W1,   G3W1,     G4W1},
    {"macrochk",                G0W2,     G1W2,     CC_macrochk,G3W2,   G4W2},
    {"getel",                   G0W1,     CC_getel, G2W1,     G3W1,     G4W1},
    {"mo=lexcomp",              G0W2,     G1W2,     CC_moMlexcomp,G3W2, G4W2},
    {"gperm",                   G0W1,     CC_gperm, G2W1,     G3W1,     G4W1},
    {"copy",                    G0W1,     CC_copy,  G2W1,     G3W1,     G4W1},
    {"*modular2f",              G0W1,     CC_Hmodular2f,G2W1, G3W1,     G4W1},
    {"general-modular-quotient",G0W2,     G1W2,     CC_generalKmodularKquotient,G3W2,G4W2},
    {"minus-mod-p",             G0W1,     CC_minusKmodKp,G2W1,G3W1,     G4W1},
    {nullptr, 
        reinterpret_cast<no_args *>(
            reinterpret_cast<uintptr_t>("u06")),
        reinterpret_cast<one_arg *>(
            reinterpret_cast<uintptr_t>("147316 9258670 4977558")),
        nullptr, nullptr, nullptr}
};

// end of generated code
