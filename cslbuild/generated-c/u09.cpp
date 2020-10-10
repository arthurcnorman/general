
// $destdir/u09.c        Machine generated C code

// $Id$

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cstdarg>
#include <ctime>
#include <csetjmp>
#include <exception>
#include "config.h"

#include "headers.h"


// Code for quotdd

static LispObject CC_quotdd(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    v_61 = stack[-1];
    if (!consp(v_61)) goto v_10;
    else goto v_11;
v_10:
    v_61 = stack[0];
    if (!consp(v_61)) goto v_15;
    else goto v_16;
v_15:
    v_62 = stack[-1];
    v_61 = stack[0];
    v_61 = Ldivide_2(nil, v_62, v_61);
    v_62 = v_61;
    v_61 = v_62;
    if (!car_legal(v_61)) v_63 = cdrerror(v_61); else
    v_63 = cdr(v_61);
    v_61 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_63 == v_61) goto v_23;
    else goto v_24;
v_23:
    v_61 = v_62;
    if (!car_legal(v_61)) v_61 = carerror(v_61); else
    v_61 = car(v_61);
    goto v_22;
v_24:
    v_61 = nil;
    goto v_22;
    v_61 = nil;
v_22:
    goto v_7;
v_16:
    v_61 = stack[0];
    if (!car_legal(v_61)) v_61 = carerror(v_61); else
    v_61 = car(v_61);
    if (!symbolp(v_61)) v_61 = nil;
    else { v_61 = qfastgets(v_61);
           if (v_61 != nil) { v_61 = elt(v_61, 34); // i2d
#ifdef RECORD_GET
             if (v_61 != SPID_NOPROP)
                record_get(elt(fastget_names, 34), 1);
             else record_get(elt(fastget_names, 34), 0),
                v_61 = nil; }
           else record_get(elt(fastget_names, 34), 0); }
#else
             if (v_61 == SPID_NOPROP) v_61 = nil; }}
#endif
    v_62 = v_61;
    if (v_61 == nil) goto v_34;
    v_61 = stack[-1];
    v_61 = Lapply1(nil, v_62, v_61);
    env = stack[-2];
    stack[-1] = v_61;
    goto v_14;
v_34:
    v_61 = stack[0];
    if (!consp(v_61)) goto v_45;
    else goto v_46;
v_45:
    v_61 = stack[-1];
    if (!car_legal(v_61)) v_61 = carerror(v_61); else
    v_61 = car(v_61);
    if (!symbolp(v_61)) v_61 = nil;
    else { v_61 = qfastgets(v_61);
           if (v_61 != nil) { v_61 = elt(v_61, 34); // i2d
#ifdef RECORD_GET
             if (v_61 != SPID_NOPROP)
                record_get(elt(fastget_names, 34), 1);
             else record_get(elt(fastget_names, 34), 0),
                v_61 = nil; }
           else record_get(elt(fastget_names, 34), 0); }
#else
             if (v_61 == SPID_NOPROP) v_61 = nil; }}
#endif
    v_62 = v_61;
    goto v_44;
v_46:
    v_61 = nil;
    goto v_44;
    v_61 = nil;
v_44:
    if (v_61 == nil) goto v_42;
    v_61 = stack[0];
    v_61 = Lapply1(nil, v_62, v_61);
    env = stack[-2];
    stack[0] = v_61;
    goto v_14;
v_42:
v_14:
    goto v_9;
v_11:
v_9:
    v_63 = stack[-1];
    v_62 = stack[0];
    v_61 = basic_elt(env, 1); // quotient
    {
        LispObject fn = basic_elt(env, 2); // dcombine
        return (*qfn3(fn))(fn, v_63, v_62, v_61);
    }
v_7:
    return onevalue(v_61);
}



// Code for xread

static LispObject CC_xread(LispObject env,
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
v_8:
    {   LispObject fn = basic_elt(env, 4); // scan
    v_29 = (*qfn0(fn))(fn);
    }
    env = stack[-1];
    v_29 = qvalue(basic_elt(env, 1)); // !*eoldelimp
    if (v_29 == nil) goto v_17;
    else goto v_18;
v_17:
    v_29 = nil;
    goto v_16;
v_18:
    v_30 = qvalue(basic_elt(env, 2)); // cursym!*
    v_29 = basic_elt(env, 3); // !*semicol!*
    v_29 = (v_30 == v_29 ? lisp_true : nil);
    goto v_16;
    v_29 = nil;
v_16:
    if (v_29 == nil) goto v_12;
    else goto v_13;
v_12:
    goto v_7;
v_13:
    goto v_8;
v_7:
    v_29 = stack[0];
    {
        LispObject fn = basic_elt(env, 5); // xread1
        return (*qfn1(fn))(fn, v_29);
    }
    return onevalue(v_29);
}



// Code for prepsq!*2

static LispObject CC_prepsqH2(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_9, v_10, v_11;
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
    v_11 = v_9;
    v_10 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_9 = nil;
    {   LispObject fn = basic_elt(env, 1); // prepsq!*1
    v_9 = (*qfn3(fn))(fn, v_11, v_10, v_9);
    }
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // replus
        return (*qfn1(fn))(fn, v_9);
    }
}



// Code for talp_invf

static LispObject CC_talp_invf(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_12;
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
    v_12 = v_2;
// end of prologue
    {   LispObject fn = basic_elt(env, 1); // talp_op
    v_12 = (*qfn1(fn))(fn, v_12);
    }
    env = stack[0];
    v_12 = Lexplodec(nil, v_12);
    if (!car_legal(v_12)) v_12 = cdrerror(v_12); else
    v_12 = cdr(v_12);
    if (!car_legal(v_12)) v_12 = cdrerror(v_12); else
    v_12 = cdr(v_12);
    if (!car_legal(v_12)) v_12 = cdrerror(v_12); else
    v_12 = cdr(v_12);
    if (!car_legal(v_12)) v_12 = cdrerror(v_12); else
    v_12 = cdr(v_12);
    if (!car_legal(v_12)) v_12 = carerror(v_12); else
    v_12 = car(v_12);
    return onevalue(v_12);
}



// Code for bc_prod

static LispObject CC_bc_prod(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_76, v_77, v_78, v_79;
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
    v_78 = v_3;
    v_79 = v_2;
// end of prologue
    v_76 = v_79;
    if (!car_legal(v_76)) v_77 = cdrerror(v_76); else
    v_77 = cdr(v_76);
    v_76 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_77 == v_76) goto v_11;
    else goto v_12;
v_11:
    v_76 = v_79;
    if (!car_legal(v_76)) v_76 = carerror(v_76); else
    v_76 = car(v_76);
    if (is_number(v_76)) goto v_19;
    v_76 = nil;
    goto v_17;
v_19:
    v_76 = v_78;
    if (!car_legal(v_76)) v_77 = cdrerror(v_76); else
    v_77 = cdr(v_76);
    v_76 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_77 == v_76) goto v_27;
    else goto v_28;
v_27:
    v_76 = v_78;
    if (!car_legal(v_76)) v_76 = carerror(v_76); else
    v_76 = car(v_76);
    v_76 = (is_number(v_76) ? lisp_true : nil);
    goto v_26;
v_28:
    v_76 = nil;
    goto v_26;
    v_76 = nil;
v_26:
    goto v_17;
    v_76 = nil;
v_17:
    goto v_10;
v_12:
    v_76 = nil;
    goto v_10;
    v_76 = nil;
v_10:
    if (v_76 == nil) goto v_8;
    v_76 = v_79;
    if (!car_legal(v_76)) v_77 = carerror(v_76); else
    v_77 = car(v_76);
    v_76 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_77 == v_76) goto v_43;
    else goto v_44;
v_43:
    v_76 = v_78;
    goto v_42;
v_44:
    v_76 = v_78;
    if (!car_legal(v_76)) v_77 = carerror(v_76); else
    v_77 = car(v_76);
    v_76 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_77 == v_76) goto v_49;
    else goto v_50;
v_49:
    v_76 = v_79;
    goto v_42;
v_50:
    v_76 = v_79;
    if (!car_legal(v_76)) v_76 = carerror(v_76); else
    v_76 = car(v_76);
    v_77 = v_78;
    if (!car_legal(v_77)) v_77 = carerror(v_77); else
    v_77 = car(v_77);
    v_77 = times2(v_76, v_77);
    v_79 = v_77;
    v_76 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_77 == v_76) goto v_55;
    else goto v_56;
v_55:
    v_77 = nil;
    v_76 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_77, v_76);
v_56:
    v_77 = v_79;
    v_76 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_77, v_76);
    v_76 = nil;
v_42:
    goto v_6;
v_8:
    v_76 = v_79;
    v_77 = v_78;
    {
        LispObject fn = basic_elt(env, 1); // multsq
        return (*qfn2(fn))(fn, v_76, v_77);
    }
    v_76 = nil;
v_6:
    return onevalue(v_76);
}



// Code for redmsg

static LispObject CC_redmsg(LispObject env,
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
    v_52 = qvalue(basic_elt(env, 1)); // !*wsm
    if (v_52 == nil) goto v_11;
    else goto v_12;
v_11:
    v_52 = qvalue(basic_elt(env, 2)); // !*msg
    if (v_52 == nil) goto v_16;
    else goto v_17;
v_16:
    v_52 = nil;
    goto v_15;
v_17:
    v_53 = stack[0];
    v_52 = basic_elt(env, 3); // ("operator" "predicate")
    v_52 = Lmember(nil, v_53, v_52);
    goto v_15;
    v_52 = nil;
v_15:
    goto v_10;
v_12:
    v_52 = nil;
    goto v_10;
    v_52 = nil;
v_10:
    if (v_52 == nil) goto v_8;
    {   LispObject fn = basic_elt(env, 7); // terminalp
    v_52 = (*qfn0(fn))(fn);
    }
    env = stack[-3];
    if (v_52 == nil) goto v_31;
    stack[-2] = basic_elt(env, 4); // "Declare"
    v_52 = stack[-1];
    {   LispObject fn = basic_elt(env, 8); // get!-print!-name
    v_54 = (*qfn1(fn))(fn, v_52);
    }
    env = stack[-3];
    v_53 = stack[0];
    v_52 = basic_elt(env, 5); // "?"
    v_52 = list4(stack[-2], v_54, v_53, v_52);
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 9); // yesp
    v_52 = (*qfn1(fn))(fn, v_52);
    }
    if (v_52 == nil) goto v_35;
    else goto v_34;
v_35:
        Lerror_0(nil);
v_34:
    goto v_29;
v_31:
    v_52 = stack[-1];
    {   LispObject fn = basic_elt(env, 8); // get!-print!-name
    v_54 = (*qfn1(fn))(fn, v_52);
    }
    env = stack[-3];
    v_53 = basic_elt(env, 6); // "declared"
    v_52 = stack[0];
    v_52 = list3(v_54, v_53, v_52);
    env = stack[-3];
    {
        LispObject fn = basic_elt(env, 10); // lprim
        return (*qfn1(fn))(fn, v_52);
    }
    v_52 = nil;
v_29:
    goto v_6;
v_8:
    v_52 = nil;
v_6:
    return onevalue(v_52);
}



// Code for multiom

static LispObject CC_multiom(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_25 = stack[0];
    v_26 = Llength(nil, v_25);
    env = stack[-1];
    v_25 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_26 == v_25) goto v_8;
    else goto v_9;
v_8:
    v_25 = stack[0];
    if (!car_legal(v_25)) v_25 = carerror(v_25); else
    v_25 = car(v_25);
    {   LispObject fn = basic_elt(env, 1); // objectom
    v_25 = (*qfn1(fn))(fn, v_25);
    }
    goto v_7;
v_9:
    v_25 = stack[0];
    if (!car_legal(v_25)) v_25 = carerror(v_25); else
    v_25 = car(v_25);
    {   LispObject fn = basic_elt(env, 1); // objectom
    v_25 = (*qfn1(fn))(fn, v_25);
    }
    env = stack[-1];
    v_25 = stack[0];
    if (!car_legal(v_25)) v_25 = cdrerror(v_25); else
    v_25 = cdr(v_25);
    {   LispObject fn = basic_elt(env, 0); // multiom
    v_25 = (*qfn1(fn))(fn, v_25);
    }
    goto v_7;
v_7:
    v_25 = nil;
    return onevalue(v_25);
}



// Code for isarb_compl

static LispObject CC_isarb_compl(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_26, v_27, v_28;
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
    v_27 = v_2;
// end of prologue
    v_26 = v_27;
    v_26 = Lconsp(nil, v_26);
    env = stack[0];
    if (v_26 == nil) goto v_9;
    v_26 = v_27;
    if (!car_legal(v_26)) v_28 = carerror(v_26); else
    v_28 = car(v_26);
    v_26 = basic_elt(env, 1); // arbcomplex
    if (v_28 == v_26) goto v_14;
    else goto v_15;
v_14:
    v_26 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    setvalue(basic_elt(env, 2), v_26); // found_compl
    goto v_13;
v_15:
    v_26 = v_27;
    if (!car_legal(v_26)) v_26 = cdrerror(v_26); else
    v_26 = cdr(v_26);
    {   LispObject fn = basic_elt(env, 3); // multi_isarb_compl
    v_26 = (*qfn1(fn))(fn, v_26);
    }
    goto v_13;
v_13:
    goto v_7;
v_9:
v_7:
    v_26 = nil;
    return onevalue(v_26);
}



// Code for rdprep1

static LispObject CC_rdprep1(LispObject env,
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
    if (!car_legal(v_16)) v_16 = cdrerror(v_16); else
    v_16 = cdr(v_16);
    if (!consp(v_16)) goto v_6;
    else goto v_7;
v_6:
    v_16 = v_17;
    goto v_5;
v_7:
    v_16 = qvalue(basic_elt(env, 1)); // !:bprec!:
    {
        LispObject fn = basic_elt(env, 2); // round!:mt
        return (*qfn2(fn))(fn, v_17, v_16);
    }
    v_16 = nil;
v_5:
    return onevalue(v_16);
}



// Code for variables

static LispObject CC_variables(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_117, v_118;
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
    v_117 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-4] = v_117;
    v_117 = stack[-5];
    if (v_117 == nil) goto v_19;
    else goto v_20;
v_19:
    v_117 = nil;
    goto v_11;
v_20:
    v_117 = qvalue(basic_elt(env, 1)); // dipvars!*
    v_117 = Llength(nil, v_117);
    env = stack[-7];
    stack[-6] = v_117;
    v_117 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-3] = v_117;
    v_118 = stack[-6];
    v_117 = stack[-3];
    v_117 = difference2(v_118, v_117);
    env = stack[-7];
    v_117 = Lminusp(nil, v_117);
    env = stack[-7];
    if (v_117 == nil) goto v_35;
    v_117 = nil;
    goto v_29;
v_35:
    v_117 = nil;
    v_117 = ncons(v_117);
    env = stack[-7];
    stack[-1] = v_117;
    stack[-2] = v_117;
v_30:
    v_117 = stack[-3];
    v_117 = add1(v_117);
    env = stack[-7];
    stack[-3] = v_117;
    v_118 = stack[-6];
    v_117 = stack[-3];
    v_117 = difference2(v_118, v_117);
    env = stack[-7];
    v_117 = Lminusp(nil, v_117);
    env = stack[-7];
    if (v_117 == nil) goto v_48;
    v_117 = stack[-2];
    goto v_29;
v_48:
    stack[0] = stack[-1];
    v_117 = nil;
    v_117 = ncons(v_117);
    env = stack[-7];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_117);
    v_117 = stack[-1];
    if (!car_legal(v_117)) v_117 = cdrerror(v_117); else
    v_117 = cdr(v_117);
    stack[-1] = v_117;
    goto v_30;
v_29:
    stack[0] = v_117;
v_12:
    v_117 = stack[-5];
    if (!car_legal(v_117)) v_117 = carerror(v_117); else
    v_117 = car(v_117);
    if (!car_legal(v_117)) v_117 = cdrerror(v_117); else
    v_117 = cdr(v_117);
    if (!car_legal(v_117)) v_117 = cdrerror(v_117); else
    v_117 = cdr(v_117);
    if (!car_legal(v_117)) v_117 = cdrerror(v_117); else
    v_117 = cdr(v_117);
    if (!car_legal(v_117)) v_117 = carerror(v_117); else
    v_117 = car(v_117);
    stack[-2] = v_117;
v_13:
    v_117 = stack[-2];
    if (!car_legal(v_117)) v_117 = carerror(v_117); else
    v_117 = car(v_117);
    stack[-3] = v_117;
    v_117 = stack[0];
    stack[-1] = v_117;
v_14:
    v_117 = stack[-3];
    if (!car_legal(v_117)) v_118 = carerror(v_117); else
    v_118 = car(v_117);
    v_117 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if ((static_cast<std::intptr_t>(v_118) > static_cast<std::intptr_t>(v_117))) goto v_73;
    else goto v_72;
v_73:
    v_117 = stack[-1];
    if (!car_legal(v_117)) v_117 = carerror(v_117); else
    v_117 = car(v_117);
    if (v_117 == nil) goto v_77;
    else goto v_72;
v_77:
    v_118 = stack[-1];
    v_117 = lisp_true;
    {   LispObject fn = basic_elt(env, 2); // setcar
    v_117 = (*qfn2(fn))(fn, v_118, v_117);
    }
    env = stack[-7];
    v_117 = stack[-4];
    v_117 = static_cast<LispObject>(static_cast<std::intptr_t>(v_117) + 0x10);
    stack[-4] = v_117;
    goto v_70;
v_72:
v_70:
    v_118 = stack[-4];
    v_117 = stack[-6];
    if (v_118 == v_117) goto v_87;
    else goto v_88;
v_87:
    v_117 = stack[0];
    goto v_11;
v_88:
    v_117 = stack[-3];
    if (!car_legal(v_117)) v_117 = cdrerror(v_117); else
    v_117 = cdr(v_117);
    stack[-3] = v_117;
    v_117 = stack[-3];
    if (v_117 == nil) goto v_97;
    v_117 = stack[-1];
    if (!car_legal(v_117)) v_117 = cdrerror(v_117); else
    v_117 = cdr(v_117);
    stack[-1] = v_117;
    goto v_14;
v_97:
    v_117 = stack[-2];
    if (!car_legal(v_117)) v_117 = cdrerror(v_117); else
    v_117 = cdr(v_117);
    if (!car_legal(v_117)) v_117 = cdrerror(v_117); else
    v_117 = cdr(v_117);
    stack[-2] = v_117;
    v_117 = stack[-2];
    if (v_117 == nil) goto v_107;
    goto v_13;
v_107:
    v_117 = stack[-5];
    if (!car_legal(v_117)) v_117 = cdrerror(v_117); else
    v_117 = cdr(v_117);
    stack[-5] = v_117;
    v_117 = stack[-5];
    if (v_117 == nil) goto v_114;
    goto v_12;
v_114:
    v_117 = stack[0];
v_11:
    return onevalue(v_117);
}



// Code for layout!-formula

static LispObject CC_layoutKformula(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_77, v_78;
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
    stack_popper stack_popper_var(11);
// copy arguments values to proper place
    stack[-6] = v_4;
    stack[-7] = v_3;
    stack[-8] = v_2;
// end of prologue
// Binding ycoord!*
// FLUIDBIND: reloadenv=10 litvec-offset=1 saveloc=9
{   bind_fluid_stack bind_fluid_var(-10, 1, -9);
    setvalue(basic_elt(env, 1), nil); // ycoord!*
// Binding ymin!*
// FLUIDBIND: reloadenv=10 litvec-offset=2 saveloc=5
{   bind_fluid_stack bind_fluid_var(-10, 2, -5);
    setvalue(basic_elt(env, 2), nil); // ymin!*
// Binding ymax!*
// FLUIDBIND: reloadenv=10 litvec-offset=3 saveloc=4
{   bind_fluid_stack bind_fluid_var(-10, 3, -4);
    setvalue(basic_elt(env, 3), nil); // ymax!*
// Binding posn!*
// FLUIDBIND: reloadenv=10 litvec-offset=4 saveloc=3
{   bind_fluid_stack bind_fluid_var(-10, 4, -3);
    setvalue(basic_elt(env, 4), nil); // posn!*
// Binding pline!*
// FLUIDBIND: reloadenv=10 litvec-offset=5 saveloc=2
{   bind_fluid_stack bind_fluid_var(-10, 5, -2);
    setvalue(basic_elt(env, 5), nil); // pline!*
// Binding testing!-width!*
// FLUIDBIND: reloadenv=10 litvec-offset=6 saveloc=1
{   bind_fluid_stack bind_fluid_var(-10, 6, -1);
    setvalue(basic_elt(env, 6), nil); // testing!-width!*
// Binding overflowed!*
// FLUIDBIND: reloadenv=10 litvec-offset=7 saveloc=0
{   bind_fluid_stack bind_fluid_var(-10, 7, 0);
    setvalue(basic_elt(env, 7), nil); // overflowed!*
    v_77 = nil;
    setvalue(basic_elt(env, 7), v_77); // overflowed!*
    setvalue(basic_elt(env, 5), v_77); // pline!*
    v_77 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    setvalue(basic_elt(env, 3), v_77); // ymax!*
    setvalue(basic_elt(env, 2), v_77); // ymin!*
    setvalue(basic_elt(env, 1), v_77); // ycoord!*
    v_77 = qvalue(basic_elt(env, 8)); // orig!*
    setvalue(basic_elt(env, 4), v_77); // posn!*
    v_77 = lisp_true;
    setvalue(basic_elt(env, 6), v_77); // testing!-width!*
    v_77 = stack[-6];
    if (v_77 == nil) goto v_29;
    v_78 = stack[-6];
    v_77 = basic_elt(env, 9); // inbrackets
    if (v_78 == v_77) goto v_33;
    else goto v_34;
v_33:
    v_77 = basic_elt(env, 10); // "("
    {   LispObject fn = basic_elt(env, 12); // prin2!*
    v_77 = (*qfn1(fn))(fn, v_77);
    }
    env = stack[-10];
    goto v_32;
v_34:
    v_77 = stack[-6];
    {   LispObject fn = basic_elt(env, 13); // oprin
    v_77 = (*qfn1(fn))(fn, v_77);
    }
    env = stack[-10];
    goto v_32;
v_32:
    goto v_27;
v_29:
v_27:
    v_78 = stack[-8];
    v_77 = stack[-7];
    {   LispObject fn = basic_elt(env, 14); // maprint
    v_77 = (*qfn2(fn))(fn, v_78, v_77);
    }
    env = stack[-10];
    v_78 = stack[-6];
    v_77 = basic_elt(env, 9); // inbrackets
    if (v_78 == v_77) goto v_48;
    else goto v_49;
v_48:
    v_77 = basic_elt(env, 11); // ")"
    {   LispObject fn = basic_elt(env, 12); // prin2!*
    v_77 = (*qfn1(fn))(fn, v_77);
    }
    env = stack[-10];
    goto v_47;
v_49:
v_47:
    v_77 = qvalue(basic_elt(env, 7)); // overflowed!*
    if (v_77 == nil) goto v_57;
    v_77 = nil;
    goto v_21;
v_57:
    stack[-7] = qvalue(basic_elt(env, 5)); // pline!*
    v_78 = qvalue(basic_elt(env, 4)); // posn!*
    v_77 = qvalue(basic_elt(env, 8)); // orig!*
    stack[-6] = difference2(v_78, v_77);
    env = stack[-10];
    v_78 = qvalue(basic_elt(env, 2)); // ymin!*
    v_77 = qvalue(basic_elt(env, 3)); // ymax!*
    v_77 = cons(v_78, v_77);
    env = stack[-10];
    v_77 = acons(stack[-7], stack[-6], v_77);
    goto v_21;
    v_77 = nil;
v_21:
    ;}  // end of a binding scope
    ;}  // end of a binding scope
    ;}  // end of a binding scope
    ;}  // end of a binding scope
    ;}  // end of a binding scope
    ;}  // end of a binding scope
    ;}  // end of a binding scope
    return onevalue(v_77);
}



// Code for noncomp2f

static LispObject CC_noncomp2f(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
v_7:
    v_52 = stack[0];
    if (!consp(v_52)) goto v_14;
    else goto v_15;
v_14:
    v_52 = lisp_true;
    goto v_13;
v_15:
    v_52 = stack[0];
    if (!car_legal(v_52)) v_52 = carerror(v_52); else
    v_52 = car(v_52);
    v_52 = (consp(v_52) ? nil : lisp_true);
    goto v_13;
    v_52 = nil;
v_13:
    if (v_52 == nil) goto v_11;
    v_52 = nil;
    goto v_6;
v_11:
    v_52 = stack[0];
    if (!car_legal(v_52)) v_52 = carerror(v_52); else
    v_52 = car(v_52);
    if (!car_legal(v_52)) v_52 = carerror(v_52); else
    v_52 = car(v_52);
    if (!car_legal(v_52)) v_52 = carerror(v_52); else
    v_52 = car(v_52);
    v_53 = v_52;
    if (!consp(v_52)) goto v_24;
    else goto v_25;
v_24:
    v_52 = v_53;
    if (!symbolp(v_52)) v_52 = nil;
    else { v_52 = qfastgets(v_52);
           if (v_52 != nil) { v_52 = elt(v_52, 0); // noncom
#ifdef RECORD_GET
             if (v_52 == SPID_NOPROP)
                record_get(elt(fastget_names, 0), 0),
                v_52 = nil;
             else record_get(elt(fastget_names, 0), 1),
                v_52 = lisp_true; }
           else record_get(elt(fastget_names, 0), 0); }
#else
             if (v_52 == SPID_NOPROP) v_52 = nil; else v_52 = lisp_true; }}
#endif
    if (v_52 == nil) goto v_33;
    v_52 = lisp_true;
    goto v_6;
v_33:
    goto v_9;
v_25:
    v_52 = v_53;
    if (!car_legal(v_52)) v_52 = carerror(v_52); else
    v_52 = car(v_52);
    if (!symbolp(v_52)) v_52 = nil;
    else { v_52 = qfastgets(v_52);
           if (v_52 != nil) { v_52 = elt(v_52, 0); // noncom
#ifdef RECORD_GET
             if (v_52 == SPID_NOPROP)
                record_get(elt(fastget_names, 0), 0),
                v_52 = nil;
             else record_get(elt(fastget_names, 0), 1),
                v_52 = lisp_true; }
           else record_get(elt(fastget_names, 0), 0); }
#else
             if (v_52 == SPID_NOPROP) v_52 = nil; else v_52 = lisp_true; }}
#endif
    if (v_52 == nil) goto v_38;
    v_52 = lisp_true;
    goto v_6;
v_38:
    v_52 = stack[0];
    if (!car_legal(v_52)) v_52 = carerror(v_52); else
    v_52 = car(v_52);
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    {   LispObject fn = basic_elt(env, 0); // noncomp2f
    v_52 = (*qfn1(fn))(fn, v_52);
    }
    env = stack[-1];
    if (v_52 == nil) goto v_44;
    v_52 = lisp_true;
    goto v_6;
v_44:
v_9:
    v_52 = stack[0];
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    stack[0] = v_52;
    goto v_7;
v_6:
    return onevalue(v_52);
}



// Code for contrsp2

static LispObject CC_contrsp2(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    stack[-3] = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_38 = stack[-2];
    v_38 = Llength(nil, v_38);
    if (stack[-3] == v_38) goto v_8;
    else goto v_9;
v_8:
    v_39 = stack[0];
    v_38 = stack[-2];
    if (!car_legal(v_38)) v_38 = carerror(v_38); else
    v_38 = car(v_38);
    if (equal(v_39, v_38)) goto v_15;
    else goto v_16;
v_15:
    v_38 = stack[-2];
    if (!car_legal(v_38)) v_38 = cdrerror(v_38); else
    v_38 = cdr(v_38);
    if (!car_legal(v_38)) v_39 = carerror(v_38); else
    v_39 = car(v_38);
    v_38 = stack[-1];
    return cons(v_39, v_38);
v_16:
    v_39 = stack[0];
    v_38 = stack[-2];
    if (!car_legal(v_38)) v_38 = cdrerror(v_38); else
    v_38 = cdr(v_38);
    if (!car_legal(v_38)) v_38 = carerror(v_38); else
    v_38 = car(v_38);
    if (equal(v_39, v_38)) goto v_25;
    else goto v_26;
v_25:
    v_38 = stack[-2];
    if (!car_legal(v_38)) v_39 = carerror(v_38); else
    v_39 = car(v_38);
    v_38 = stack[-1];
    return cons(v_39, v_38);
v_26:
    v_38 = nil;
    goto v_14;
    v_38 = nil;
v_14:
    goto v_7;
v_9:
    v_38 = nil;
v_7:
    return onevalue(v_38);
}



// Code for token1

static LispObject CC_token1(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_660, v_661;
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
    stack[-2] = nil;
    v_660 = qvalue(basic_elt(env, 1)); // crchar!*
    stack[-3] = v_660;
v_8:
    v_661 = stack[-3];
    v_660 = qvalue(basic_elt(env, 2)); // !$eof!$
    if (v_661 == v_660) goto v_39;
    else goto v_40;
v_39:
    v_660 = lisp_true;
    goto v_38;
v_40:
    v_660 = stack[-3];
    {   LispObject fn = basic_elt(env, 35); // id2string
    v_660 = (*qfn1(fn))(fn, v_660);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 36); // string!-length
    v_661 = (*qfn1(fn))(fn, v_660);
    }
    env = stack[-4];
    v_660 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_660 = (v_661 == v_660 ? lisp_true : nil);
    v_660 = (v_660 == nil ? lisp_true : nil);
    goto v_38;
    v_660 = nil;
v_38:
    if (v_660 == nil) goto v_36;
    goto v_9;
v_36:
    v_660 = stack[-3];
    v_660 = Lwhitespace_char_p(nil, v_660);
    env = stack[-4];
    if (v_660 == nil) goto v_55;
    v_661 = stack[-3];
    v_660 = qvalue(basic_elt(env, 3)); // !$eol!$
    if (v_661 == v_660) goto v_62;
    else goto v_63;
v_62:
    v_660 = qvalue(basic_elt(env, 4)); // !*eoldelimp
    goto v_61;
v_63:
    v_660 = nil;
    goto v_61;
    v_660 = nil;
v_61:
    if (v_660 == nil) goto v_59;
    else goto v_55;
v_59:
    {   LispObject fn = basic_elt(env, 37); // readch1
    v_660 = (*qfn0(fn))(fn);
    }
    env = stack[-4];
    stack[-3] = v_660;
    goto v_8;
v_55:
    v_660 = stack[-3];
    v_660 = Ldigitp(nil, v_660);
    env = stack[-4];
    if (v_660 == nil) goto v_72;
    v_660 = stack[-3];
    {
        LispObject fn = basic_elt(env, 38); // token!-number
        return (*qfn1(fn))(fn, v_660);
    }
v_72:
    v_660 = stack[-3];
    v_660 = Lalpha_char_p(nil, v_660);
    env = stack[-4];
    if (v_660 == nil) goto v_78;
    goto v_11;
v_78:
    v_661 = stack[-3];
    v_660 = basic_elt(env, 5); // tokprop
    v_660 = get(v_661, v_660);
    env = stack[-4];
    stack[-2] = v_660;
    if (v_660 == nil) goto v_82;
    v_661 = stack[-2];
    v_660 = nil;
    {
        LispObject fn = basic_elt(env, 39); // lispapply
        return (*qfn2(fn))(fn, v_661, v_660);
    }
v_82:
    v_661 = stack[-3];
    v_660 = basic_elt(env, 6); // !%
    if (v_661 == v_660) goto v_93;
    else goto v_94;
v_93:
    v_660 = qvalue(basic_elt(env, 7)); // !*savecomments!*
    v_660 = (v_660 == nil ? lisp_true : nil);
    goto v_92;
v_94:
    v_660 = nil;
    goto v_92;
    v_660 = nil;
v_92:
    if (v_660 == nil) goto v_90;
    goto v_31;
v_90:
    v_661 = stack[-3];
    v_660 = basic_elt(env, 8); // !!
    if (v_661 == v_660) goto v_106;
    else goto v_107;
v_106:
    v_660 = qvalue(basic_elt(env, 9)); // !*micro!-version
    if (v_660 == nil) goto v_112;
    else goto v_113;
v_112:
    v_660 = nil;
    goto v_111;
v_113:
    v_660 = qvalue(basic_elt(env, 10)); // !*defn
    v_660 = (v_660 == nil ? lisp_true : nil);
    goto v_111;
    v_660 = nil;
v_111:
    v_660 = (v_660 == nil ? lisp_true : nil);
    goto v_105;
v_107:
    v_660 = nil;
    goto v_105;
    v_660 = nil;
v_105:
    if (v_660 == nil) goto v_103;
    goto v_10;
v_103:
    v_661 = stack[-3];
    v_660 = basic_elt(env, 11); // !"
    if (v_661 == v_660) goto v_124;
    else goto v_125;
v_124:
    goto v_30;
v_125:
    v_661 = stack[-3];
    v_660 = basic_elt(env, 12); // !\ (backslash)
    if (v_661 == v_660) goto v_128;
    else goto v_129;
v_128:
    goto v_17;
v_129:
v_9:
    v_660 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    setvalue(basic_elt(env, 13), v_660); // ttype!*
    v_661 = stack[-3];
    v_660 = qvalue(basic_elt(env, 2)); // !$eof!$
    if (v_661 == v_660) goto v_135;
    else goto v_136;
v_135:
    v_660 = basic_elt(env, 14); // ! 
    setvalue(basic_elt(env, 1), v_660); // crchar!*
    {   LispObject fn = basic_elt(env, 40); // filenderr
    v_660 = (*qfn0(fn))(fn);
    }
    env = stack[-4];
    goto v_134;
v_136:
v_134:
    v_660 = stack[-3];
    setvalue(basic_elt(env, 15), v_660); // nxtsym!*
    v_661 = stack[-3];
    v_660 = qvalue(basic_elt(env, 2)); // !$eof!$
    if (v_661 == v_660) goto v_151;
    v_660 = stack[-3];
    {   LispObject fn = basic_elt(env, 35); // id2string
    v_660 = (*qfn1(fn))(fn, v_660);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 36); // string!-length
    v_661 = (*qfn1(fn))(fn, v_660);
    }
    env = stack[-4];
    v_660 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_661 == v_660) goto v_160;
    else goto v_161;
v_160:
    v_660 = stack[-3];
    {   LispObject fn = basic_elt(env, 41); // delcp
    v_660 = (*qfn1(fn))(fn, v_660);
    }
    env = stack[-4];
    goto v_159;
v_161:
    v_660 = nil;
    goto v_159;
    v_660 = nil;
v_159:
    if (v_660 == nil) goto v_157;
    v_660 = basic_elt(env, 14); // ! 
    setvalue(basic_elt(env, 1), v_660); // crchar!*
    goto v_155;
v_157:
    {   LispObject fn = basic_elt(env, 37); // readch1
    v_660 = (*qfn0(fn))(fn);
    }
    env = stack[-4];
    setvalue(basic_elt(env, 1), v_660); // crchar!*
    goto v_155;
v_155:
    goto v_149;
v_151:
v_149:
    v_661 = stack[-3];
    v_660 = basic_elt(env, 16); // !-
    if (v_661 == v_660) goto v_181;
    else goto v_182;
v_181:
    v_661 = qvalue(basic_elt(env, 1)); // crchar!*
    v_660 = qvalue(basic_elt(env, 2)); // !$eof!$
    if (v_661 == v_660) goto v_188;
    v_660 = qvalue(basic_elt(env, 1)); // crchar!*
    {   LispObject fn = basic_elt(env, 35); // id2string
    v_660 = (*qfn1(fn))(fn, v_660);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 36); // string!-length
    v_661 = (*qfn1(fn))(fn, v_660);
    }
    env = stack[-4];
    v_660 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_661 == v_660) goto v_193;
    else goto v_194;
v_193:
    v_660 = qvalue(basic_elt(env, 1)); // crchar!*
    v_660 = Ldigitp(nil, v_660);
    env = stack[-4];
    if (v_660 == nil) goto v_201;
    else goto v_202;
v_201:
    v_660 = nil;
    goto v_200;
v_202:
    v_660 = qvalue(basic_elt(env, 17)); // !*minusliter
    goto v_200;
    v_660 = nil;
v_200:
    goto v_192;
v_194:
    v_660 = nil;
    goto v_192;
    v_660 = nil;
v_192:
    goto v_186;
v_188:
    v_660 = nil;
    goto v_186;
    v_660 = nil;
v_186:
    goto v_180;
v_182:
    v_660 = nil;
    goto v_180;
    v_660 = nil;
v_180:
    if (v_660 == nil) goto v_177;
    else goto v_178;
v_177:
    goto v_16;
v_178:
    v_660 = qvalue(basic_elt(env, 1)); // crchar!*
    {   LispObject fn = basic_elt(env, 38); // token!-number
    v_660 = (*qfn1(fn))(fn, v_660);
    }
    env = stack[-4];
    stack[-3] = v_660;
    v_660 = stack[-3];
    if (is_number(v_660)) goto v_222;
    else goto v_223;
v_222:
    v_661 = basic_elt(env, 18); // minus
    v_660 = stack[-3];
        return Lapply1(nil, v_661, v_660);
v_223:
    v_660 = stack[-3];
    if (!car_legal(v_660)) stack[0] = cdrerror(v_660); else
    stack[0] = cdr(v_660);
    v_661 = basic_elt(env, 18); // minus
    v_660 = stack[-3];
    if (!car_legal(v_660)) v_660 = cdrerror(v_660); else
    v_660 = cdr(v_660);
    if (!car_legal(v_660)) v_660 = carerror(v_660); else
    v_660 = car(v_660);
    v_660 = Lapply1(nil, v_661, v_660);
    if (!car_legal(stack[0])) rplaca_fails(stack[0]);
    setcar(stack[0], v_660);
    v_660 = stack[-3];
    goto v_7;
v_10:
// Binding !*raise
// FLUIDBIND: reloadenv=4 litvec-offset=19 saveloc=1
{   bind_fluid_stack bind_fluid_var(-4, 19, -1);
    setvalue(basic_elt(env, 19), nil); // !*raise
// Binding !*lower
// FLUIDBIND: reloadenv=4 litvec-offset=20 saveloc=0
{   bind_fluid_stack bind_fluid_var(-4, 20, 0);
    setvalue(basic_elt(env, 20), nil); // !*lower
    v_660 = lisp_true;
    setvalue(basic_elt(env, 21), v_660); // escaped!*
    {   LispObject fn = basic_elt(env, 37); // readch1
    v_660 = (*qfn0(fn))(fn);
    }
    env = stack[-4];
    stack[-3] = v_660;
    v_660 = stack[-3];
    v_660 = Lalpha_char_p(nil, v_660);
    env = stack[-4];
    if (v_660 == nil) goto v_248;
    v_660 = lisp_true;
    setvalue(basic_elt(env, 21), v_660); // escaped!*
    goto v_246;
v_248:
v_246:
    ;}  // end of a binding scope
    ;}  // end of a binding scope
v_11:
    v_660 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    setvalue(basic_elt(env, 13), v_660); // ttype!*
v_12:
    v_660 = stack[-3];
    {   LispObject fn = basic_elt(env, 42); // wideid2list
    v_660 = (*qfn1(fn))(fn, v_660);
    }
    env = stack[-4];
    stack[-3] = v_660;
v_13:
    v_660 = stack[-3];
    if (v_660 == nil) goto v_259;
    else goto v_260;
v_259:
    goto v_14;
v_260:
    v_660 = stack[-3];
    if (!car_legal(v_660)) v_661 = carerror(v_660); else
    v_661 = car(v_660);
    v_660 = stack[-2];
    v_660 = cons(v_661, v_660);
    env = stack[-4];
    stack[-2] = v_660;
    v_660 = stack[-3];
    if (!car_legal(v_660)) v_660 = cdrerror(v_660); else
    v_660 = cdr(v_660);
    stack[-3] = v_660;
    goto v_13;
v_14:
    {   LispObject fn = basic_elt(env, 37); // readch1
    v_660 = (*qfn0(fn))(fn);
    }
    env = stack[-4];
    stack[-3] = v_660;
    v_661 = stack[-3];
    v_660 = qvalue(basic_elt(env, 2)); // !$eof!$
    if (v_661 == v_660) goto v_275;
    else goto v_276;
v_275:
    v_660 = lisp_true;
    goto v_274;
v_276:
    v_660 = qvalue(basic_elt(env, 1)); // crchar!*
    {   LispObject fn = basic_elt(env, 35); // id2string
    v_660 = (*qfn1(fn))(fn, v_660);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 36); // string!-length
    v_661 = (*qfn1(fn))(fn, v_660);
    }
    env = stack[-4];
    v_660 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_660 = (v_661 == v_660 ? lisp_true : nil);
    v_660 = (v_660 == nil ? lisp_true : nil);
    goto v_274;
    v_660 = nil;
v_274:
    if (v_660 == nil) goto v_272;
    goto v_15;
v_272:
    v_660 = stack[-3];
    v_660 = Ldigitp(nil, v_660);
    env = stack[-4];
    if (v_660 == nil) goto v_290;
    else goto v_288;
v_290:
    v_660 = stack[-3];
    v_660 = Lalpha_char_p(nil, v_660);
    env = stack[-4];
    if (v_660 == nil) goto v_293;
    else goto v_288;
v_293:
    goto v_289;
v_288:
    goto v_12;
v_289:
    v_661 = stack[-3];
    v_660 = basic_elt(env, 8); // !!
    if (v_661 == v_660) goto v_296;
    else goto v_297;
v_296:
    goto v_10;
v_297:
    v_661 = stack[-3];
    v_660 = basic_elt(env, 16); // !-
    if (v_661 == v_660) goto v_304;
    else goto v_305;
v_304:
    v_660 = qvalue(basic_elt(env, 17)); // !*minusliter
    goto v_303;
v_305:
    v_660 = nil;
    goto v_303;
    v_660 = nil;
v_303:
    if (v_660 == nil) goto v_301;
    goto v_12;
v_301:
    v_661 = stack[-3];
    v_660 = basic_elt(env, 22); // !_
    if (v_661 == v_660) goto v_312;
    else goto v_313;
v_312:
    goto v_12;
v_313:
    v_661 = stack[-3];
    v_660 = basic_elt(env, 23); // !:
    if (v_661 == v_660) goto v_316;
    else goto v_317;
v_316:
    goto v_22;
v_317:
v_15:
    v_660 = stack[-2];
    {   LispObject fn = basic_elt(env, 43); // reversip!*
    v_660 = (*qfn1(fn))(fn, v_660);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 44); // list2wideid
    v_660 = (*qfn1(fn))(fn, v_660);
    }
    env = stack[-4];
    stack[-2] = v_660;
    v_661 = stack[-2];
    v_660 = qvalue(basic_elt(env, 24)); // !*line!-marker
    if (equal(v_661, v_660)) goto v_325;
    else goto v_326;
v_325:
    v_660 = qvalue(basic_elt(env, 25)); // curline!*
    setvalue(basic_elt(env, 15), v_660); // nxtsym!*
    goto v_324;
v_326:
    v_661 = stack[-2];
    v_660 = qvalue(basic_elt(env, 26)); // !*file!-marker
    if (equal(v_661, v_660)) goto v_330;
    else goto v_331;
v_330:
    v_660 = qvalue(basic_elt(env, 27)); // ifl!*
    if (v_660 == nil) goto v_336;
    else goto v_337;
v_336:
    v_660 = basic_elt(env, 28); // "Terminal"
    goto v_335;
v_337:
    v_660 = qvalue(basic_elt(env, 27)); // ifl!*
    if (!car_legal(v_660)) v_660 = carerror(v_660); else
    v_660 = car(v_660);
    goto v_335;
    v_660 = nil;
v_335:
    setvalue(basic_elt(env, 15), v_660); // nxtsym!*
    goto v_324;
v_331:
    v_660 = stack[-2];
    setvalue(basic_elt(env, 15), v_660); // nxtsym!*
    goto v_324;
v_324:
    v_660 = stack[-3];
    setvalue(basic_elt(env, 1), v_660); // crchar!*
v_16:
    v_660 = qvalue(basic_elt(env, 15)); // nxtsym!*
    goto v_7;
v_17:
    v_660 = basic_elt(env, 29); // (!\ e n d !{ r e d u c e !})
    stack[-2] = v_660;
    v_660 = nil;
    stack[0] = v_660;
v_18:
    v_661 = stack[-3];
    v_660 = stack[0];
    v_660 = cons(v_661, v_660);
    env = stack[-4];
    stack[0] = v_660;
    {   LispObject fn = basic_elt(env, 37); // readch1
    v_660 = (*qfn0(fn))(fn);
    }
    env = stack[-4];
    stack[-3] = v_660;
    v_660 = stack[-2];
    if (!car_legal(v_660)) v_660 = cdrerror(v_660); else
    v_660 = cdr(v_660);
    stack[-2] = v_660;
    v_660 = stack[-2];
    if (v_660 == nil) goto v_359;
    else goto v_360;
v_359:
    goto v_19;
v_360:
    v_661 = stack[-3];
    v_660 = stack[-2];
    if (!car_legal(v_660)) v_660 = carerror(v_660); else
    v_660 = car(v_660);
    if (v_661 == v_660) goto v_362;
    else goto v_363;
v_362:
    goto v_18;
v_363:
    v_661 = stack[-3];
    v_660 = stack[0];
    v_660 = cons(v_661, v_660);
    env = stack[-4];
    v_660 = Lreverse(nil, v_660);
    env = stack[-4];
    if (!car_legal(v_660)) v_660 = cdrerror(v_660); else
    v_660 = cdr(v_660);
    setvalue(basic_elt(env, 30), v_660); // peekchar!*
    v_660 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    setvalue(basic_elt(env, 13), v_660); // ttype!*
    {   LispObject fn = basic_elt(env, 37); // readch1
    v_660 = (*qfn0(fn))(fn);
    }
    env = stack[-4];
    setvalue(basic_elt(env, 1), v_660); // crchar!*
    v_660 = basic_elt(env, 12); // !\ (backslash)
    setvalue(basic_elt(env, 15), v_660); // nxtsym!*
    v_660 = qvalue(basic_elt(env, 15)); // nxtsym!*
    goto v_7;
v_19:
    v_660 = basic_elt(env, 31); // (!\ b e g i n !{ r e d u c e !})
    stack[-2] = v_660;
    v_660 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    setvalue(basic_elt(env, 13), v_660); // ttype!*
v_20:
    v_661 = stack[-3];
    v_660 = basic_elt(env, 6); // !%
    if (v_661 == v_660) goto v_380;
    else goto v_381;
v_380:
    goto v_21;
v_381:
    v_661 = stack[-3];
    v_660 = qvalue(basic_elt(env, 2)); // !$eof!$
    if (v_661 == v_660) goto v_384;
    else goto v_385;
v_384:
    v_660 = basic_elt(env, 14); // ! 
    setvalue(basic_elt(env, 1), v_660); // crchar!*
    {   LispObject fn = basic_elt(env, 40); // filenderr
    v_660 = (*qfn0(fn))(fn);
    }
    env = stack[-4];
    v_660 = stack[-3];
    setvalue(basic_elt(env, 15), v_660); // nxtsym!*
    v_660 = stack[-3];
    goto v_7;
v_385:
    v_660 = stack[-2];
    if (v_660 == nil) goto v_394;
    else goto v_395;
v_394:
    goto v_8;
v_395:
    v_660 = stack[-3];
    stack[0] = v_660;
    {   LispObject fn = basic_elt(env, 37); // readch1
    v_660 = (*qfn0(fn))(fn);
    }
    env = stack[-4];
    stack[-3] = v_660;
    v_661 = stack[0];
    v_660 = stack[-2];
    if (!car_legal(v_660)) v_660 = carerror(v_660); else
    v_660 = car(v_660);
    if (v_661 == v_660) goto v_402;
    goto v_19;
v_402:
    v_660 = stack[-2];
    if (!car_legal(v_660)) v_660 = cdrerror(v_660); else
    v_660 = cdr(v_660);
    stack[-2] = v_660;
    goto v_20;
v_21:
    {   LispObject fn = basic_elt(env, 37); // readch1
    v_660 = (*qfn0(fn))(fn);
    }
    env = stack[-4];
    stack[-3] = v_660;
    v_661 = stack[-3];
    v_660 = qvalue(basic_elt(env, 2)); // !$eof!$
    if (v_661 == v_660) goto v_411;
    else goto v_412;
v_411:
    goto v_20;
v_412:
    v_661 = stack[-3];
    v_660 = qvalue(basic_elt(env, 3)); // !$eol!$
    if (v_661 == v_660) goto v_415;
    else goto v_416;
v_415:
    goto v_19;
v_416:
    goto v_21;
v_22:
    {   LispObject fn = basic_elt(env, 37); // readch1
    v_660 = (*qfn0(fn))(fn);
    }
    env = stack[-4];
    stack[-3] = v_660;
    v_661 = stack[-3];
    v_660 = basic_elt(env, 23); // !:
    if (v_661 == v_660) goto v_424;
    else goto v_425;
v_424:
    goto v_23;
v_425:
    v_660 = stack[-3];
    v_660 = ncons(v_660);
    env = stack[-4];
    setvalue(basic_elt(env, 30), v_660); // peekchar!*
    v_660 = basic_elt(env, 23); // !:
    stack[-3] = v_660;
    goto v_15;
v_23:
    {   LispObject fn = basic_elt(env, 37); // readch1
    v_660 = (*qfn0(fn))(fn);
    }
    env = stack[-4];
    stack[-3] = v_660;
    v_661 = stack[-3];
    v_660 = qvalue(basic_elt(env, 2)); // !$eof!$
    if (v_661 == v_660) goto v_439;
    v_660 = qvalue(basic_elt(env, 1)); // crchar!*
    {   LispObject fn = basic_elt(env, 35); // id2string
    v_660 = (*qfn1(fn))(fn, v_660);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 36); // string!-length
    v_661 = (*qfn1(fn))(fn, v_660);
    }
    env = stack[-4];
    v_660 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_661 == v_660) goto v_444;
    else goto v_445;
v_444:
    v_660 = stack[-3];
    v_660 = Lalpha_char_p(nil, v_660);
    env = stack[-4];
    goto v_443;
v_445:
    v_660 = nil;
    goto v_443;
    v_660 = nil;
v_443:
    goto v_437;
v_439:
    v_660 = nil;
    goto v_437;
    v_660 = nil;
v_437:
    if (v_660 == nil) goto v_435;
    goto v_24;
v_435:
    v_661 = basic_elt(env, 23); // !:
    v_660 = stack[-3];
    v_660 = list2(v_661, v_660);
    env = stack[-4];
    setvalue(basic_elt(env, 30), v_660); // peekchar!*
    v_660 = basic_elt(env, 23); // !:
    stack[-3] = v_660;
    goto v_15;
v_24:
    v_660 = stack[-2];
    v_660 = Lreverse(nil, v_660);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 44); // list2wideid
    v_660 = (*qfn1(fn))(fn, v_660);
    }
    env = stack[-4];
    v_660 = basic_elt(env, 23); // !:
    {   LispObject fn = basic_elt(env, 45); // string2list
    v_660 = (*qfn1(fn))(fn, v_660);
    }
    env = stack[-4];
    if (!car_legal(v_660)) stack[0] = carerror(v_660); else
    stack[0] = car(v_660);
    v_660 = basic_elt(env, 23); // !:
    {   LispObject fn = basic_elt(env, 45); // string2list
    v_660 = (*qfn1(fn))(fn, v_660);
    }
    env = stack[-4];
    if (!car_legal(v_660)) v_661 = carerror(v_660); else
    v_661 = car(v_660);
    v_660 = stack[-2];
    v_660 = list2star(stack[0], v_661, v_660);
    env = stack[-4];
    stack[-2] = v_660;
v_25:
    v_660 = stack[-3];
    {   LispObject fn = basic_elt(env, 42); // wideid2list
    v_660 = (*qfn1(fn))(fn, v_660);
    }
    env = stack[-4];
    stack[-3] = v_660;
v_26:
    v_660 = stack[-3];
    if (v_660 == nil) goto v_477;
    else goto v_478;
v_477:
    goto v_27;
v_478:
    v_660 = stack[-3];
    if (!car_legal(v_660)) v_661 = carerror(v_660); else
    v_661 = car(v_660);
    v_660 = stack[-2];
    v_660 = cons(v_661, v_660);
    env = stack[-4];
    stack[-2] = v_660;
    v_660 = stack[-3];
    if (!car_legal(v_660)) v_660 = cdrerror(v_660); else
    v_660 = cdr(v_660);
    stack[-3] = v_660;
    goto v_26;
v_27:
    {   LispObject fn = basic_elt(env, 37); // readch1
    v_660 = (*qfn0(fn))(fn);
    }
    env = stack[-4];
    stack[-3] = v_660;
    v_661 = stack[-3];
    v_660 = qvalue(basic_elt(env, 2)); // !$eof!$
    if (v_661 == v_660) goto v_493;
    else goto v_494;
v_493:
    v_660 = lisp_true;
    goto v_492;
v_494:
    v_660 = qvalue(basic_elt(env, 1)); // crchar!*
    {   LispObject fn = basic_elt(env, 35); // id2string
    v_660 = (*qfn1(fn))(fn, v_660);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 36); // string!-length
    v_661 = (*qfn1(fn))(fn, v_660);
    }
    env = stack[-4];
    v_660 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_660 = (v_661 == v_660 ? lisp_true : nil);
    v_660 = (v_660 == nil ? lisp_true : nil);
    goto v_492;
    v_660 = nil;
v_492:
    if (v_660 == nil) goto v_490;
    goto v_28;
v_490:
    v_660 = stack[-3];
    v_660 = Ldigitp(nil, v_660);
    env = stack[-4];
    if (v_660 == nil) goto v_508;
    else goto v_506;
v_508:
    v_660 = stack[-3];
    v_660 = Lalpha_char_p(nil, v_660);
    env = stack[-4];
    if (v_660 == nil) goto v_511;
    else goto v_506;
v_511:
    goto v_507;
v_506:
    goto v_25;
v_507:
    v_661 = stack[-3];
    v_660 = basic_elt(env, 8); // !!
    if (v_661 == v_660) goto v_514;
    else goto v_515;
v_514:
    goto v_29;
v_515:
    v_661 = stack[-3];
    v_660 = basic_elt(env, 16); // !-
    if (v_661 == v_660) goto v_522;
    else goto v_523;
v_522:
    v_660 = qvalue(basic_elt(env, 17)); // !*minusliter
    goto v_521;
v_523:
    v_660 = nil;
    goto v_521;
    v_660 = nil;
v_521:
    if (v_660 == nil) goto v_519;
    goto v_25;
v_519:
    v_661 = stack[-3];
    v_660 = basic_elt(env, 22); // !_
    if (v_661 == v_660) goto v_530;
    else goto v_531;
v_530:
    goto v_25;
v_531:
v_28:
    v_660 = stack[-2];
    {   LispObject fn = basic_elt(env, 43); // reversip!*
    v_660 = (*qfn1(fn))(fn, v_660);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 44); // list2wideid
    v_660 = (*qfn1(fn))(fn, v_660);
    }
    env = stack[-4];
    stack[-2] = v_660;
    v_661 = basic_elt(env, 32); // "Name with double colon in detected:"
    v_660 = stack[-2];
    v_660 = list2(v_661, v_660);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 46); // lprim
    v_660 = (*qfn1(fn))(fn, v_660);
    }
    env = stack[-4];
    v_660 = stack[-2];
    setvalue(basic_elt(env, 15), v_660); // nxtsym!*
    v_660 = stack[-3];
    setvalue(basic_elt(env, 1), v_660); // crchar!*
    v_660 = qvalue(basic_elt(env, 15)); // nxtsym!*
    goto v_7;
v_29:
// Binding !*raise
// FLUIDBIND: reloadenv=4 litvec-offset=19 saveloc=1
{   bind_fluid_stack bind_fluid_var(-4, 19, -1);
    setvalue(basic_elt(env, 19), nil); // !*raise
// Binding !*lower
// FLUIDBIND: reloadenv=4 litvec-offset=20 saveloc=0
{   bind_fluid_stack bind_fluid_var(-4, 20, 0);
    setvalue(basic_elt(env, 20), nil); // !*lower
    v_660 = lisp_true;
    setvalue(basic_elt(env, 21), v_660); // escaped!*
    {   LispObject fn = basic_elt(env, 37); // readch1
    v_660 = (*qfn0(fn))(fn);
    }
    env = stack[-4];
    stack[-3] = v_660;
    ;}  // end of a binding scope
    ;}  // end of a binding scope
    goto v_25;
v_30:
// Binding !*raise
// FLUIDBIND: reloadenv=4 litvec-offset=19 saveloc=1
{   bind_fluid_stack bind_fluid_var(-4, 19, -1);
    setvalue(basic_elt(env, 19), nil); // !*raise
// Binding !*lower
// FLUIDBIND: reloadenv=4 litvec-offset=20 saveloc=0
{   bind_fluid_stack bind_fluid_var(-4, 20, 0);
    setvalue(basic_elt(env, 20), nil); // !*lower
v_560:
    v_660 = stack[-3];
    {   LispObject fn = basic_elt(env, 42); // wideid2list
    v_660 = (*qfn1(fn))(fn, v_660);
    }
    env = stack[-4];
    stack[-3] = v_660;
v_561:
    v_660 = stack[-3];
    if (v_660 == nil) goto v_567;
    else goto v_568;
v_567:
    goto v_562;
v_568:
    v_660 = stack[-3];
    if (!car_legal(v_660)) v_661 = carerror(v_660); else
    v_661 = car(v_660);
    v_660 = stack[-2];
    v_660 = cons(v_661, v_660);
    env = stack[-4];
    stack[-2] = v_660;
    v_660 = stack[-3];
    if (!car_legal(v_660)) v_660 = cdrerror(v_660); else
    v_660 = cdr(v_660);
    stack[-3] = v_660;
    goto v_561;
v_562:
    v_660 = nil;
    setvalue(basic_elt(env, 33), v_660); // named!-character!*
    {   LispObject fn = basic_elt(env, 37); // readch1
    v_661 = (*qfn0(fn))(fn);
    }
    env = stack[-4];
    stack[-3] = v_661;
    v_660 = qvalue(basic_elt(env, 2)); // !$eof!$
    if (v_661 == v_660) goto v_579;
    else goto v_580;
v_579:
    v_660 = basic_elt(env, 14); // ! 
    setvalue(basic_elt(env, 1), v_660); // crchar!*
    v_661 = basic_elt(env, 34); // "***** End-of-file in string"
    v_660 = nil;
    {   LispObject fn = basic_elt(env, 47); // lpriw
    v_660 = (*qfn2(fn))(fn, v_661, v_660);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 40); // filenderr
    v_660 = (*qfn0(fn))(fn);
    }
    env = stack[-4];
    goto v_578;
v_580:
    v_661 = stack[-3];
    v_660 = basic_elt(env, 11); // !"
    if (v_661 == v_660) goto v_593;
    v_660 = lisp_true;
    goto v_591;
v_593:
    v_660 = qvalue(basic_elt(env, 33)); // named!-character!*
    goto v_591;
    v_660 = nil;
v_591:
    if (v_660 == nil) goto v_589;
    goto v_560;
v_589:
v_578:
    v_660 = nil;
    setvalue(basic_elt(env, 33), v_660); // named!-character!*
    {   LispObject fn = basic_elt(env, 37); // readch1
    v_660 = (*qfn0(fn))(fn);
    }
    env = stack[-4];
    stack[-3] = v_660;
    v_661 = stack[-3];
    v_660 = basic_elt(env, 11); // !"
    if (v_661 == v_660) goto v_608;
    else goto v_609;
v_608:
    v_660 = qvalue(basic_elt(env, 33)); // named!-character!*
    v_660 = (v_660 == nil ? lisp_true : nil);
    goto v_607;
v_609:
    v_660 = nil;
    goto v_607;
    v_660 = nil;
v_607:
    if (v_660 == nil) goto v_605;
    goto v_560;
v_605:
    v_660 = stack[-2];
    {   LispObject fn = basic_elt(env, 43); // reversip!*
    v_660 = (*qfn1(fn))(fn, v_660);
    }
    env = stack[-4];
    if (!car_legal(v_660)) v_660 = cdrerror(v_660); else
    v_660 = cdr(v_660);
    {   LispObject fn = basic_elt(env, 48); // list2widestring
    v_660 = (*qfn1(fn))(fn, v_660);
    }
    env = stack[-4];
    setvalue(basic_elt(env, 15), v_660); // nxtsym!*
    ;}  // end of a binding scope
    ;}  // end of a binding scope
    v_660 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    setvalue(basic_elt(env, 13), v_660); // ttype!*
    v_660 = stack[-3];
    setvalue(basic_elt(env, 1), v_660); // crchar!*
    goto v_16;
v_31:
// Binding !*raise
// FLUIDBIND: reloadenv=4 litvec-offset=19 saveloc=1
{   bind_fluid_stack bind_fluid_var(-4, 19, -1);
    setvalue(basic_elt(env, 19), nil); // !*raise
// Binding !*lower
// FLUIDBIND: reloadenv=4 litvec-offset=20 saveloc=0
{   bind_fluid_stack bind_fluid_var(-4, 20, 0);
    setvalue(basic_elt(env, 20), nil); // !*lower
v_631:
    v_660 = nil;
    setvalue(basic_elt(env, 33), v_660); // named!-character!*
    {   LispObject fn = basic_elt(env, 37); // readch1
    v_661 = (*qfn0(fn))(fn);
    }
    env = stack[-4];
    stack[-3] = v_661;
    v_660 = qvalue(basic_elt(env, 3)); // !$eol!$
    if (v_661 == v_660) goto v_643;
    else goto v_644;
v_643:
    v_660 = lisp_true;
    goto v_642;
v_644:
    v_661 = stack[-3];
    v_660 = qvalue(basic_elt(env, 2)); // !$eof!$
    v_660 = (v_661 == v_660 ? lisp_true : nil);
    goto v_642;
    v_660 = nil;
v_642:
    if (v_660 == nil) goto v_639;
    else goto v_640;
v_639:
    v_660 = lisp_true;
    goto v_638;
v_640:
    v_660 = qvalue(basic_elt(env, 33)); // named!-character!*
    goto v_638;
    v_660 = nil;
v_638:
    if (v_660 == nil) goto v_636;
    goto v_631;
v_636:
    ;}  // end of a binding scope
    ;}  // end of a binding scope
    {   LispObject fn = basic_elt(env, 37); // readch1
    v_660 = (*qfn0(fn))(fn);
    }
    env = stack[-4];
    stack[-3] = v_660;
    goto v_8;
v_7:
    return onevalue(v_660);
}



// Code for ckpreci!#

static LispObject CC_ckpreciC(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_49, v_50, v_51;
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
    v_49 = stack[0];
    if (!car_legal(v_49)) v_49 = carerror(v_49); else
    v_49 = car(v_49);
    {   LispObject fn = basic_elt(env, 2); // timesip
    stack[-1] = (*qfn1(fn))(fn, v_49);
    }
    env = stack[-2];
    v_49 = stack[0];
    if (!car_legal(v_49)) v_49 = cdrerror(v_49); else
    v_49 = cdr(v_49);
    if (!car_legal(v_49)) v_49 = carerror(v_49); else
    v_49 = car(v_49);
    {   LispObject fn = basic_elt(env, 2); // timesip
    v_49 = (*qfn1(fn))(fn, v_49);
    }
    env = stack[-2];
    v_51 = stack[-1];
    v_50 = v_49;
    v_49 = qvalue(basic_elt(env, 1)); // !*complex
    if (v_49 == nil) goto v_15;
    else goto v_16;
v_15:
    v_49 = nil;
    goto v_14;
v_16:
    v_49 = v_51;
    if (v_49 == nil) goto v_24;
    v_49 = v_50;
    if (v_49 == nil) goto v_27;
    else goto v_24;
v_27:
    v_49 = stack[0];
    if (!car_legal(v_49)) v_49 = carerror(v_49); else
    v_49 = car(v_49);
    if (!car_legal(v_49)) v_50 = cdrerror(v_49); else
    v_50 = cdr(v_49);
    v_49 = stack[0];
    if (!car_legal(v_49)) v_49 = cdrerror(v_49); else
    v_49 = cdr(v_49);
    if (!car_legal(v_49)) v_49 = carerror(v_49); else
    v_49 = car(v_49);
    {
        LispObject fn = basic_elt(env, 3); // ckprec2!#
        return (*qfn2(fn))(fn, v_50, v_49);
    }
v_24:
    v_49 = v_50;
    if (v_49 == nil) goto v_37;
    v_49 = v_51;
    if (v_49 == nil) goto v_40;
    else goto v_37;
v_40:
    v_49 = stack[0];
    if (!car_legal(v_49)) v_49 = cdrerror(v_49); else
    v_49 = cdr(v_49);
    if (!car_legal(v_49)) v_49 = carerror(v_49); else
    v_49 = car(v_49);
    if (!car_legal(v_49)) v_50 = cdrerror(v_49); else
    v_50 = cdr(v_49);
    v_49 = stack[0];
    if (!car_legal(v_49)) v_49 = carerror(v_49); else
    v_49 = car(v_49);
    {
        LispObject fn = basic_elt(env, 3); // ckprec2!#
        return (*qfn2(fn))(fn, v_50, v_49);
    }
v_37:
    v_49 = nil;
    goto v_14;
    v_49 = nil;
v_14:
    return onevalue(v_49);
}



// Code for mo_diff

static LispObject CC_mo_diff(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // mo_neg
    v_9 = (*qfn1(fn))(fn, v_9);
    }
    env = stack[-1];
    {
        LispObject v_12 = stack[0];
        LispObject fn = basic_elt(env, 2); // mo_sum
        return (*qfn2(fn))(fn, v_12, v_9);
    }
}



// Code for pneg

static LispObject CC_pneg(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_49, v_50;
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
    v_49 = v_2;
// end of prologue
    stack[-4] = v_49;
    v_49 = stack[-4];
    if (v_49 == nil) goto v_13;
    else goto v_14;
v_13:
    v_49 = nil;
    goto v_8;
v_14:
    v_49 = stack[-4];
    if (!car_legal(v_49)) v_49 = carerror(v_49); else
    v_49 = car(v_49);
    v_50 = v_49;
    v_49 = v_50;
    if (!car_legal(v_49)) stack[0] = carerror(v_49); else
    stack[0] = car(v_49);
    v_49 = v_50;
    if (!car_legal(v_49)) v_49 = cdrerror(v_49); else
    v_49 = cdr(v_49);
    {   LispObject fn = basic_elt(env, 1); // cneg
    v_49 = (*qfn1(fn))(fn, v_49);
    }
    env = stack[-5];
    v_49 = cons(stack[0], v_49);
    env = stack[-5];
    v_49 = ncons(v_49);
    env = stack[-5];
    stack[-2] = v_49;
    stack[-3] = v_49;
v_9:
    v_49 = stack[-4];
    if (!car_legal(v_49)) v_49 = cdrerror(v_49); else
    v_49 = cdr(v_49);
    stack[-4] = v_49;
    v_49 = stack[-4];
    if (v_49 == nil) goto v_31;
    else goto v_32;
v_31:
    v_49 = stack[-3];
    goto v_8;
v_32:
    stack[-1] = stack[-2];
    v_49 = stack[-4];
    if (!car_legal(v_49)) v_49 = carerror(v_49); else
    v_49 = car(v_49);
    v_50 = v_49;
    v_49 = v_50;
    if (!car_legal(v_49)) stack[0] = carerror(v_49); else
    stack[0] = car(v_49);
    v_49 = v_50;
    if (!car_legal(v_49)) v_49 = cdrerror(v_49); else
    v_49 = cdr(v_49);
    {   LispObject fn = basic_elt(env, 1); // cneg
    v_49 = (*qfn1(fn))(fn, v_49);
    }
    env = stack[-5];
    v_49 = cons(stack[0], v_49);
    env = stack[-5];
    v_49 = ncons(v_49);
    env = stack[-5];
    if (!car_legal(stack[-1])) rplacd_fails(stack[-1]);
    setcdr(stack[-1], v_49);
    v_49 = stack[-2];
    if (!car_legal(v_49)) v_49 = cdrerror(v_49); else
    v_49 = cdr(v_49);
    stack[-2] = v_49;
    goto v_9;
v_8:
    return onevalue(v_49);
}



// Code for th_match0

static LispObject CC_th_match0(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_25, v_26, v_27;
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
    v_25 = v_27;
    if (!car_legal(v_25)) v_26 = carerror(v_25); else
    v_26 = car(v_25);
    v_25 = stack[0];
    if (!car_legal(v_25)) v_25 = carerror(v_25); else
    v_25 = car(v_25);
    if (equal(v_26, v_25)) goto v_7;
    else goto v_8;
v_7:
    v_25 = v_27;
    if (!car_legal(v_25)) v_25 = cdrerror(v_25); else
    v_25 = cdr(v_25);
    if (!car_legal(v_25)) v_25 = carerror(v_25); else
    v_25 = car(v_25);
    stack[-1] = Llength(nil, v_25);
    env = stack[-2];
    v_25 = stack[0];
    if (!car_legal(v_25)) v_25 = cdrerror(v_25); else
    v_25 = cdr(v_25);
    if (!car_legal(v_25)) v_25 = carerror(v_25); else
    v_25 = car(v_25);
    v_25 = Llength(nil, v_25);
    v_25 = (equal(stack[-1], v_25) ? lisp_true : nil);
    goto v_6;
v_8:
    v_25 = nil;
    goto v_6;
    v_25 = nil;
v_6:
    return onevalue(v_25);
}



// Code for general!-times!-term!-mod!-p

static LispObject CC_generalKtimesKtermKmodKp(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_145, v_146, v_147;
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
    v_145 = stack[-1];
    if (v_145 == nil) goto v_7;
    else goto v_8;
v_7:
    v_145 = nil;
    goto v_6;
v_8:
    v_145 = stack[-1];
    if (!consp(v_145)) goto v_15;
    else goto v_16;
v_15:
    v_145 = lisp_true;
    goto v_14;
v_16:
    v_145 = stack[-1];
    if (!car_legal(v_145)) v_145 = carerror(v_145); else
    v_145 = car(v_145);
    v_145 = (consp(v_145) ? nil : lisp_true);
    goto v_14;
    v_145 = nil;
v_14:
    if (v_145 == nil) goto v_12;
    v_145 = stack[-2];
    if (!car_legal(v_145)) v_146 = cdrerror(v_145); else
    v_146 = cdr(v_145);
    v_145 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // gen!-mult!-by!-const!-mod!-p
    v_146 = (*qfn2(fn))(fn, v_146, v_145);
    }
    v_145 = nil;
    v_147 = v_146;
    if (v_147 == nil) goto v_33;
    else goto v_34;
v_33:
    goto v_32;
v_34:
    v_147 = stack[-2];
    if (!car_legal(v_147)) v_147 = carerror(v_147); else
    v_147 = car(v_147);
    return acons(v_147, v_146, v_145);
    v_145 = nil;
v_32:
    goto v_6;
v_12:
    v_145 = stack[-2];
    if (!car_legal(v_145)) v_145 = carerror(v_145); else
    v_145 = car(v_145);
    if (!car_legal(v_145)) v_146 = carerror(v_145); else
    v_146 = car(v_145);
    v_145 = stack[-1];
    if (!car_legal(v_145)) v_145 = carerror(v_145); else
    v_145 = car(v_145);
    if (!car_legal(v_145)) v_145 = carerror(v_145); else
    v_145 = car(v_145);
    if (!car_legal(v_145)) v_145 = carerror(v_145); else
    v_145 = car(v_145);
    if (equal(v_146, v_145)) goto v_44;
    else goto v_45;
v_44:
    v_145 = stack[-2];
    if (!car_legal(v_145)) v_146 = cdrerror(v_145); else
    v_146 = cdr(v_145);
    v_145 = stack[-1];
    if (!car_legal(v_145)) v_145 = carerror(v_145); else
    v_145 = car(v_145);
    if (!car_legal(v_145)) v_145 = cdrerror(v_145); else
    v_145 = cdr(v_145);
    {   LispObject fn = basic_elt(env, 2); // general!-times!-mod!-p
    stack[0] = (*qfn2(fn))(fn, v_146, v_145);
    }
    env = stack[-4];
    v_146 = stack[-2];
    v_145 = stack[-1];
    if (!car_legal(v_145)) v_145 = cdrerror(v_145); else
    v_145 = cdr(v_145);
    {   LispObject fn = basic_elt(env, 0); // general!-times!-term!-mod!-p
    v_145 = (*qfn2(fn))(fn, v_146, v_145);
    }
    env = stack[-4];
    stack[-3] = stack[0];
    stack[0] = v_145;
    v_145 = stack[-3];
    if (v_145 == nil) goto v_67;
    else goto v_68;
v_67:
    v_145 = stack[0];
    goto v_66;
v_68:
    v_145 = stack[-2];
    if (!car_legal(v_145)) v_145 = carerror(v_145); else
    v_145 = car(v_145);
    if (!car_legal(v_145)) v_147 = carerror(v_145); else
    v_147 = car(v_145);
    v_145 = stack[-2];
    if (!car_legal(v_145)) v_145 = carerror(v_145); else
    v_145 = car(v_145);
    if (!car_legal(v_145)) v_146 = cdrerror(v_145); else
    v_146 = cdr(v_145);
    v_145 = stack[-1];
    if (!car_legal(v_145)) v_145 = carerror(v_145); else
    v_145 = car(v_145);
    if (!car_legal(v_145)) v_145 = carerror(v_145); else
    v_145 = car(v_145);
    if (!car_legal(v_145)) v_145 = cdrerror(v_145); else
    v_145 = cdr(v_145);
    v_145 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_146) + static_cast<std::uintptr_t>(v_145) - TAG_FIXNUM);
    {   LispObject fn = basic_elt(env, 3); // mksp
    v_147 = (*qfn2(fn))(fn, v_147, v_145);
    }
    v_146 = stack[-3];
    v_145 = stack[0];
    return acons(v_147, v_146, v_145);
    v_145 = nil;
v_66:
    goto v_6;
v_45:
    v_145 = stack[-2];
    if (!car_legal(v_145)) v_145 = carerror(v_145); else
    v_145 = car(v_145);
    if (!car_legal(v_145)) v_146 = carerror(v_145); else
    v_146 = car(v_145);
    v_145 = stack[-1];
    if (!car_legal(v_145)) v_145 = carerror(v_145); else
    v_145 = car(v_145);
    if (!car_legal(v_145)) v_145 = carerror(v_145); else
    v_145 = car(v_145);
    if (!car_legal(v_145)) v_145 = carerror(v_145); else
    v_145 = car(v_145);
    {   LispObject fn = basic_elt(env, 4); // ordop
    v_145 = (*qfn2(fn))(fn, v_146, v_145);
    }
    env = stack[-4];
    if (v_145 == nil) goto v_89;
    v_145 = stack[-2];
    if (!car_legal(v_145)) v_146 = cdrerror(v_145); else
    v_146 = cdr(v_145);
    v_145 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // general!-times!-mod!-p
    v_146 = (*qfn2(fn))(fn, v_146, v_145);
    }
    v_145 = nil;
    v_147 = v_146;
    if (v_147 == nil) goto v_107;
    else goto v_108;
v_107:
    goto v_106;
v_108:
    v_147 = stack[-2];
    if (!car_legal(v_147)) v_147 = carerror(v_147); else
    v_147 = car(v_147);
    return acons(v_147, v_146, v_145);
    v_145 = nil;
v_106:
    goto v_6;
v_89:
    v_146 = stack[-2];
    v_145 = stack[-1];
    if (!car_legal(v_145)) v_145 = carerror(v_145); else
    v_145 = car(v_145);
    if (!car_legal(v_145)) v_145 = cdrerror(v_145); else
    v_145 = cdr(v_145);
    {   LispObject fn = basic_elt(env, 0); // general!-times!-term!-mod!-p
    stack[0] = (*qfn2(fn))(fn, v_146, v_145);
    }
    env = stack[-4];
    v_146 = stack[-2];
    v_145 = stack[-1];
    if (!car_legal(v_145)) v_145 = cdrerror(v_145); else
    v_145 = cdr(v_145);
    {   LispObject fn = basic_elt(env, 0); // general!-times!-term!-mod!-p
    v_145 = (*qfn2(fn))(fn, v_146, v_145);
    }
    v_146 = stack[0];
    v_147 = v_146;
    if (v_147 == nil) goto v_133;
    else goto v_134;
v_133:
    goto v_132;
v_134:
    v_147 = stack[-1];
    if (!car_legal(v_147)) v_147 = carerror(v_147); else
    v_147 = car(v_147);
    if (!car_legal(v_147)) v_147 = carerror(v_147); else
    v_147 = car(v_147);
    return acons(v_147, v_146, v_145);
    v_145 = nil;
v_132:
    goto v_6;
    v_145 = nil;
v_6:
    return onevalue(v_145);
}



// Code for abs!:

static LispObject CC_absT(LispObject env,
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
    v_25 = static_cast<LispObject>(greaterp2(v_26, v_25));
    v_25 = v_25 ? lisp_true : nil;
    env = stack[-2];
    if (v_25 == nil) goto v_7;
    v_25 = stack[0];
    goto v_5;
v_7:
    stack[-1] = basic_elt(env, 1); // !:rd!:
    v_25 = stack[0];
    if (!car_legal(v_25)) v_25 = cdrerror(v_25); else
    v_25 = cdr(v_25);
    if (!car_legal(v_25)) v_25 = carerror(v_25); else
    v_25 = car(v_25);
    v_26 = negate(v_25);
    v_25 = stack[0];
    if (!car_legal(v_25)) v_25 = cdrerror(v_25); else
    v_25 = cdr(v_25);
    if (!car_legal(v_25)) v_25 = cdrerror(v_25); else
    v_25 = cdr(v_25);
    {
        LispObject v_29 = stack[-1];
        return list2star(v_29, v_26, v_25);
    }
    v_25 = nil;
v_5:
    return onevalue(v_25);
}



// Code for gionep!:

static LispObject CC_gionepT(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_20, v_21, v_22;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_21 = v_2;
// end of prologue
    v_20 = v_21;
    if (!car_legal(v_20)) v_20 = cdrerror(v_20); else
    v_20 = cdr(v_20);
    if (!car_legal(v_20)) v_22 = carerror(v_20); else
    v_22 = car(v_20);
    v_20 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_22 == v_20) goto v_6;
    else goto v_7;
v_6:
    v_20 = v_21;
    if (!car_legal(v_20)) v_20 = cdrerror(v_20); else
    v_20 = cdr(v_20);
    if (!car_legal(v_20)) v_21 = cdrerror(v_20); else
    v_21 = cdr(v_20);
    v_20 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_20 = (v_21 == v_20 ? lisp_true : nil);
    goto v_5;
v_7:
    v_20 = nil;
    goto v_5;
    v_20 = nil;
v_5:
    return onevalue(v_20);
}



// Code for cde_position2

static LispObject CC_cde_position2(LispObject env,
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
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    stack[-2] = nil;
v_9:
    v_38 = stack[-1];
    v_37 = stack[0];
    if (!car_legal(v_37)) v_37 = carerror(v_37); else
    v_37 = car(v_37);
    if (equal(v_38, v_37)) goto v_14;
    else goto v_15;
v_14:
    goto v_10;
v_15:
    v_38 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_37 = stack[-2];
    v_37 = cons(v_38, v_37);
    env = stack[-3];
    stack[-2] = v_37;
    v_37 = stack[0];
    if (!car_legal(v_37)) v_37 = cdrerror(v_37); else
    v_37 = cdr(v_37);
    stack[0] = v_37;
    goto v_9;
v_10:
    v_37 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_38 = v_37;
v_11:
    v_37 = stack[-2];
    if (v_37 == nil) goto v_27;
    else goto v_28;
v_27:
    v_37 = v_38;
    goto v_8;
v_28:
    v_37 = stack[-2];
    v_37 = car(v_37);
    v_37 = plus2(v_37, v_38);
    env = stack[-3];
    v_38 = v_37;
    v_37 = stack[-2];
    v_37 = cdr(v_37);
    stack[-2] = v_37;
    goto v_11;
v_8:
    return onevalue(v_37);
}



// Code for valid_as_variable

static LispObject CC_valid_as_variable(LispObject env,
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
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_17 = v_2;
// end of prologue
    v_16 = v_17;
    if (symbolp(v_16)) goto v_7;
    v_16 = nil;
    goto v_5;
v_7:
    v_16 = basic_elt(env, 1); // invalid_as_variable
    v_16 = Lflagp(nil, v_17, v_16);
    v_16 = (v_16 == nil ? lisp_true : nil);
    goto v_5;
    v_16 = nil;
v_5:
    return onevalue(v_16);
}



// Code for talp_simplat2

static LispObject CC_talp_simplat2(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_37, v_38, v_39;
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
    stack[-2] = v_2;
// end of prologue
    v_37 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // talp_invp
    v_37 = (*qfn1(fn))(fn, v_37);
    }
    env = stack[-3];
    if (v_37 == nil) goto v_9;
    v_39 = stack[-2];
    v_38 = stack[-1];
    v_37 = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // talp_simplatrinv
        return (*qfn3(fn))(fn, v_39, v_38, v_37);
    }
v_9:
    v_37 = stack[-1];
    if (!consp(v_37)) goto v_16;
    else goto v_17;
v_16:
    v_39 = stack[-2];
    v_38 = stack[-1];
    v_37 = stack[0];
    {
        LispObject fn = basic_elt(env, 3); // talp_simplatat
        return (*qfn3(fn))(fn, v_39, v_38, v_37);
    }
v_17:
    v_37 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // talp_invp
    v_37 = (*qfn1(fn))(fn, v_37);
    }
    env = stack[-3];
    if (v_37 == nil) goto v_24;
    v_39 = stack[-2];
    v_38 = stack[-1];
    v_37 = stack[0];
    {
        LispObject fn = basic_elt(env, 4); // talp_simplatlinv
        return (*qfn3(fn))(fn, v_39, v_38, v_37);
    }
v_24:
    v_39 = stack[-2];
    v_38 = stack[-1];
    v_37 = stack[0];
    {
        LispObject fn = basic_elt(env, 5); // talp_simplatfn
        return (*qfn3(fn))(fn, v_39, v_38, v_37);
    }
    v_37 = nil;
    return onevalue(v_37);
}



// Code for cl_varl2

static LispObject CC_cl_varl2(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_243, v_244, v_245;
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
    stack[-2] = v_5;
    stack[-3] = v_4;
    stack[0] = v_3;
    stack[-4] = v_2;
// end of prologue
    v_243 = stack[-4];
    if (!consp(v_243)) goto v_12;
    else goto v_13;
v_12:
    v_243 = stack[-4];
    goto v_11;
v_13:
    v_243 = stack[-4];
    if (!car_legal(v_243)) v_243 = carerror(v_243); else
    v_243 = car(v_243);
    goto v_11;
    v_243 = nil;
v_11:
    v_245 = v_243;
    v_244 = v_245;
    v_243 = basic_elt(env, 1); // true
    if (v_244 == v_243) goto v_26;
    else goto v_27;
v_26:
    v_243 = lisp_true;
    goto v_25;
v_27:
    v_244 = v_245;
    v_243 = basic_elt(env, 2); // false
    v_243 = (v_244 == v_243 ? lisp_true : nil);
    goto v_25;
    v_243 = nil;
v_25:
    if (v_243 == nil) goto v_23;
    v_244 = stack[0];
    v_243 = stack[-2];
    return cons(v_244, v_243);
v_23:
    v_244 = v_245;
    v_243 = basic_elt(env, 3); // or
    if (v_244 == v_243) goto v_53;
    else goto v_54;
v_53:
    v_243 = lisp_true;
    goto v_52;
v_54:
    v_244 = v_245;
    v_243 = basic_elt(env, 4); // and
    v_243 = (v_244 == v_243 ? lisp_true : nil);
    goto v_52;
    v_243 = nil;
v_52:
    if (v_243 == nil) goto v_50;
    v_243 = lisp_true;
    goto v_48;
v_50:
    v_244 = v_245;
    v_243 = basic_elt(env, 5); // not
    v_243 = (v_244 == v_243 ? lisp_true : nil);
    goto v_48;
    v_243 = nil;
v_48:
    if (v_243 == nil) goto v_46;
    v_243 = lisp_true;
    goto v_44;
v_46:
    v_244 = v_245;
    v_243 = basic_elt(env, 6); // impl
    if (v_244 == v_243) goto v_74;
    else goto v_75;
v_74:
    v_243 = lisp_true;
    goto v_73;
v_75:
    v_244 = v_245;
    v_243 = basic_elt(env, 7); // repl
    if (v_244 == v_243) goto v_83;
    else goto v_84;
v_83:
    v_243 = lisp_true;
    goto v_82;
v_84:
    v_244 = v_245;
    v_243 = basic_elt(env, 8); // equiv
    v_243 = (v_244 == v_243 ? lisp_true : nil);
    goto v_82;
    v_243 = nil;
v_82:
    goto v_73;
    v_243 = nil;
v_73:
    goto v_44;
    v_243 = nil;
v_44:
    if (v_243 == nil) goto v_42;
    v_243 = stack[-4];
    if (!car_legal(v_243)) v_243 = cdrerror(v_243); else
    v_243 = cdr(v_243);
    stack[-4] = v_243;
v_96:
    v_243 = stack[-4];
    if (v_243 == nil) goto v_101;
    else goto v_102;
v_101:
    goto v_95;
v_102:
    v_243 = stack[-4];
    if (!car_legal(v_243)) v_243 = carerror(v_243); else
    v_243 = car(v_243);
    stack[-1] = v_243;
    stack[-5] = stack[0];
    stack[0] = stack[-3];
    v_243 = stack[-2];
    v_243 = ncons(v_243);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 0); // cl_varl2
    v_243 = (*qfn4up(fn))(fn, stack[-1], stack[-5], stack[0], v_243);
    }
    env = stack[-6];
    v_244 = v_243;
    v_243 = v_244;
    if (!car_legal(v_243)) v_243 = carerror(v_243); else
    v_243 = car(v_243);
    stack[0] = v_243;
    v_243 = v_244;
    if (!car_legal(v_243)) v_243 = cdrerror(v_243); else
    v_243 = cdr(v_243);
    stack[-2] = v_243;
    v_243 = stack[-4];
    if (!car_legal(v_243)) v_243 = cdrerror(v_243); else
    v_243 = cdr(v_243);
    stack[-4] = v_243;
    goto v_96;
v_95:
    v_244 = stack[0];
    v_243 = stack[-2];
    return cons(v_244, v_243);
v_42:
    v_244 = v_245;
    v_243 = basic_elt(env, 9); // ex
    if (v_244 == v_243) goto v_133;
    else goto v_134;
v_133:
    v_243 = lisp_true;
    goto v_132;
v_134:
    v_244 = v_245;
    v_243 = basic_elt(env, 10); // all
    v_243 = (v_244 == v_243 ? lisp_true : nil);
    goto v_132;
    v_243 = nil;
v_132:
    if (v_243 == nil) goto v_130;
    v_243 = stack[-4];
    if (!car_legal(v_243)) v_243 = cdrerror(v_243); else
    v_243 = cdr(v_243);
    if (!car_legal(v_243)) v_243 = cdrerror(v_243); else
    v_243 = cdr(v_243);
    if (!car_legal(v_243)) stack[-1] = carerror(v_243); else
    stack[-1] = car(v_243);
    v_243 = stack[-4];
    if (!car_legal(v_243)) v_243 = cdrerror(v_243); else
    v_243 = cdr(v_243);
    if (!car_legal(v_243)) v_244 = carerror(v_243); else
    v_244 = car(v_243);
    v_243 = stack[-3];
    {   LispObject fn = basic_elt(env, 13); // lto_insertq
    stack[-3] = (*qfn2(fn))(fn, v_244, v_243);
    }
    env = stack[-6];
    v_243 = stack[-2];
    v_243 = ncons(v_243);
    env = stack[-6];
    {
        LispObject v_252 = stack[-1];
        LispObject v_253 = stack[0];
        LispObject v_254 = stack[-3];
        LispObject fn = basic_elt(env, 0); // cl_varl2
        return (*qfn4up(fn))(fn, v_252, v_253, v_254, v_243);
    }
v_130:
    v_244 = v_245;
    v_243 = basic_elt(env, 11); // bex
    if (v_244 == v_243) goto v_162;
    else goto v_163;
v_162:
    v_243 = lisp_true;
    goto v_161;
v_163:
    v_244 = v_245;
    v_243 = basic_elt(env, 12); // ball
    v_243 = (v_244 == v_243 ? lisp_true : nil);
    goto v_161;
    v_243 = nil;
v_161:
    if (v_243 == nil) goto v_159;
    v_243 = stack[-4];
    if (!car_legal(v_243)) v_243 = cdrerror(v_243); else
    v_243 = cdr(v_243);
    if (!car_legal(v_243)) v_244 = carerror(v_243); else
    v_244 = car(v_243);
    v_243 = stack[-3];
    {   LispObject fn = basic_elt(env, 13); // lto_insertq
    v_243 = (*qfn2(fn))(fn, v_244, v_243);
    }
    env = stack[-6];
    stack[-3] = v_243;
    v_243 = stack[-4];
    if (!car_legal(v_243)) v_243 = cdrerror(v_243); else
    v_243 = cdr(v_243);
    if (!car_legal(v_243)) v_243 = cdrerror(v_243); else
    v_243 = cdr(v_243);
    if (!car_legal(v_243)) v_243 = cdrerror(v_243); else
    v_243 = cdr(v_243);
    if (!car_legal(v_243)) stack[-5] = carerror(v_243); else
    stack[-5] = car(v_243);
    stack[-1] = stack[0];
    stack[0] = stack[-3];
    v_243 = stack[-2];
    v_243 = ncons(v_243);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 0); // cl_varl2
    v_243 = (*qfn4up(fn))(fn, stack[-5], stack[-1], stack[0], v_243);
    }
    env = stack[-6];
    v_244 = v_243;
    v_243 = v_244;
    if (!car_legal(v_243)) v_243 = carerror(v_243); else
    v_243 = car(v_243);
    stack[0] = v_243;
    v_243 = v_244;
    if (!car_legal(v_243)) v_243 = cdrerror(v_243); else
    v_243 = cdr(v_243);
    stack[-2] = v_243;
    v_243 = stack[-4];
    if (!car_legal(v_243)) v_243 = cdrerror(v_243); else
    v_243 = cdr(v_243);
    if (!car_legal(v_243)) v_243 = cdrerror(v_243); else
    v_243 = cdr(v_243);
    if (!car_legal(v_243)) stack[-1] = carerror(v_243); else
    stack[-1] = car(v_243);
    v_243 = stack[-4];
    if (!car_legal(v_243)) v_243 = cdrerror(v_243); else
    v_243 = cdr(v_243);
    if (!car_legal(v_243)) v_244 = carerror(v_243); else
    v_244 = car(v_243);
    v_243 = stack[-3];
    {   LispObject fn = basic_elt(env, 13); // lto_insertq
    stack[-3] = (*qfn2(fn))(fn, v_244, v_243);
    }
    env = stack[-6];
    v_243 = stack[-2];
    v_243 = ncons(v_243);
    env = stack[-6];
    {
        LispObject v_255 = stack[-1];
        LispObject v_256 = stack[0];
        LispObject v_257 = stack[-3];
        LispObject fn = basic_elt(env, 0); // cl_varl2
        return (*qfn4up(fn))(fn, v_255, v_256, v_257, v_243);
    }
v_159:
    v_243 = stack[-4];
    {   LispObject fn = basic_elt(env, 14); // rl_varlat
    v_243 = (*qfn1(fn))(fn, v_243);
    }
    env = stack[-6];
    stack[-1] = v_243;
v_211:
    v_243 = stack[-1];
    if (v_243 == nil) goto v_216;
    else goto v_217;
v_216:
    goto v_210;
v_217:
    v_243 = stack[-1];
    if (!car_legal(v_243)) v_243 = carerror(v_243); else
    v_243 = car(v_243);
    v_245 = v_243;
    v_244 = v_245;
    v_243 = stack[-3];
    v_243 = Lmemq(nil, v_244, v_243);
    if (v_243 == nil) goto v_226;
    v_244 = v_245;
    v_243 = stack[-2];
    {   LispObject fn = basic_elt(env, 13); // lto_insertq
    v_243 = (*qfn2(fn))(fn, v_244, v_243);
    }
    env = stack[-6];
    stack[-2] = v_243;
    goto v_224;
v_226:
    v_244 = v_245;
    v_243 = stack[0];
    {   LispObject fn = basic_elt(env, 13); // lto_insertq
    v_243 = (*qfn2(fn))(fn, v_244, v_243);
    }
    env = stack[-6];
    stack[0] = v_243;
    goto v_224;
v_224:
    v_243 = stack[-1];
    if (!car_legal(v_243)) v_243 = cdrerror(v_243); else
    v_243 = cdr(v_243);
    stack[-1] = v_243;
    goto v_211;
v_210:
    v_244 = stack[0];
    v_243 = stack[-2];
    return cons(v_244, v_243);
    return onevalue(v_243);
}



// Code for ev_revgradlexcomp

static LispObject CC_ev_revgradlexcomp(LispObject env,
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
v_1:
    v_51 = stack[-2];
    if (v_51 == nil) goto v_11;
    else goto v_12;
v_11:
    v_51 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_8;
v_12:
    v_51 = stack[-2];
    if (!car_legal(v_51)) v_52 = carerror(v_51); else
    v_52 = car(v_51);
    v_51 = stack[-1];
    if (!car_legal(v_51)) v_51 = carerror(v_51); else
    v_51 = car(v_51);
    {   LispObject fn = basic_elt(env, 1); // iequal
    v_51 = (*qfn2(fn))(fn, v_52, v_51);
    }
    env = stack[-4];
    if (v_51 == nil) goto v_18;
    v_51 = stack[-2];
    if (!car_legal(v_51)) v_52 = cdrerror(v_51); else
    v_52 = cdr(v_51);
    v_51 = stack[-1];
    if (!car_legal(v_51)) v_51 = cdrerror(v_51); else
    v_51 = cdr(v_51);
    stack[-2] = v_52;
    stack[-1] = v_51;
    goto v_1;
v_18:
    v_51 = stack[-2];
    {   LispObject fn = basic_elt(env, 2); // ev_tdeg
    v_51 = (*qfn1(fn))(fn, v_51);
    }
    env = stack[-4];
    stack[-3] = v_51;
    v_51 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // ev_tdeg
    v_51 = (*qfn1(fn))(fn, v_51);
    }
    env = stack[-4];
    stack[0] = v_51;
    v_52 = stack[-3];
    v_51 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // iequal
    v_51 = (*qfn2(fn))(fn, v_52, v_51);
    }
    env = stack[-4];
    if (v_51 == nil) goto v_36;
    v_52 = stack[-2];
    v_51 = stack[-1];
    {
        LispObject fn = basic_elt(env, 3); // ev_invlexcomp
        return (*qfn2(fn))(fn, v_52, v_51);
    }
v_36:
    v_52 = stack[-3];
    v_51 = stack[0];
    if ((static_cast<std::intptr_t>(v_52) > static_cast<std::intptr_t>(v_51))) goto v_45;
    else goto v_46;
v_45:
    v_51 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_8;
v_46:
    v_51 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
v_8:
    return onevalue(v_51);
}



// Code for equal!:

static LispObject CC_equalT(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_45 = stack[-1];
    if (!car_legal(v_45)) v_45 = cdrerror(v_45); else
    v_45 = cdr(v_45);
    if (!car_legal(v_45)) v_45 = carerror(v_45); else
    v_45 = car(v_45);
    v_45 = static_cast<LispObject>(zerop(v_45));
    v_45 = v_45 ? lisp_true : nil;
    env = stack[-3];
    if (v_45 == nil) goto v_10;
    else goto v_11;
v_10:
    v_45 = nil;
    goto v_9;
v_11:
    v_45 = stack[0];
    if (!car_legal(v_45)) v_45 = cdrerror(v_45); else
    v_45 = cdr(v_45);
    if (!car_legal(v_45)) v_45 = carerror(v_45); else
    v_45 = car(v_45);
    v_45 = static_cast<LispObject>(zerop(v_45));
    v_45 = v_45 ? lisp_true : nil;
    env = stack[-3];
    goto v_9;
    v_45 = nil;
v_9:
    if (v_45 == nil) goto v_7;
    else goto v_6;
v_7:
    v_45 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // normbf
    v_45 = (*qfn1(fn))(fn, v_45);
    }
    env = stack[-3];
    stack[-1] = v_45;
    if (!car_legal(v_45)) v_45 = cdrerror(v_45); else
    v_45 = cdr(v_45);
    if (!car_legal(v_45)) stack[-2] = cdrerror(v_45); else
    stack[-2] = cdr(v_45);
    v_45 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // normbf
    v_45 = (*qfn1(fn))(fn, v_45);
    }
    stack[0] = v_45;
    if (!car_legal(v_45)) v_45 = cdrerror(v_45); else
    v_45 = cdr(v_45);
    if (!car_legal(v_45)) v_45 = cdrerror(v_45); else
    v_45 = cdr(v_45);
    if (equal(stack[-2], v_45)) goto v_25;
    else goto v_26;
v_25:
    v_45 = stack[-1];
    if (!car_legal(v_45)) v_45 = cdrerror(v_45); else
    v_45 = cdr(v_45);
    if (!car_legal(v_45)) v_46 = carerror(v_45); else
    v_46 = car(v_45);
    v_45 = stack[0];
    if (!car_legal(v_45)) v_45 = cdrerror(v_45); else
    v_45 = cdr(v_45);
    if (!car_legal(v_45)) v_45 = carerror(v_45); else
    v_45 = car(v_45);
    v_45 = (equal(v_46, v_45) ? lisp_true : nil);
    goto v_24;
v_26:
    v_45 = nil;
    goto v_24;
    v_45 = nil;
v_24:
v_6:
    return onevalue(v_45);
}



// Code for difff

static LispObject CC_difff(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_166, v_167, v_168;
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
    v_166 = stack[-2];
    if (!consp(v_166)) goto v_7;
    else goto v_8;
v_7:
    v_167 = nil;
    v_166 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_167, v_166);
v_8:
    v_166 = stack[-2];
    if (!car_legal(v_166)) v_166 = carerror(v_166); else
    v_166 = car(v_166);
    if (!consp(v_166)) goto v_13;
    else goto v_14;
v_13:
    v_166 = stack[-2];
    if (!car_legal(v_166)) v_167 = carerror(v_166); else
    v_167 = car(v_166);
    v_166 = basic_elt(env, 1); // domain!-diff!-fn
    v_166 = get(v_167, v_166);
    v_167 = v_166;
    v_166 = v_167;
    if (v_166 == nil) goto v_25;
    v_168 = v_167;
    v_167 = stack[-2];
    v_166 = stack[-1];
        return Lapply2(nil, v_168, v_167, v_166);
v_25:
    v_167 = nil;
    v_166 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_167, v_166);
    v_166 = nil;
    goto v_6;
v_14:
    v_166 = stack[-2];
    if (!car_legal(v_166)) v_166 = carerror(v_166); else
    v_166 = car(v_166);
    if (!car_legal(v_166)) v_167 = carerror(v_166); else
    v_167 = car(v_166);
    v_166 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_166 = cons(v_167, v_166);
    env = stack[-4];
    v_167 = ncons(v_166);
    env = stack[-4];
    v_166 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[0] = cons(v_167, v_166);
    env = stack[-4];
    v_166 = stack[-2];
    if (!car_legal(v_166)) v_166 = carerror(v_166); else
    v_166 = car(v_166);
    if (!car_legal(v_166)) v_166 = carerror(v_166); else
    v_166 = car(v_166);
    if (!car_legal(v_166)) v_166 = carerror(v_166); else
    v_166 = car(v_166);
    {   LispObject fn = basic_elt(env, 5); // fermionicp
    v_166 = (*qfn1(fn))(fn, v_166);
    }
    env = stack[-4];
    if (v_166 == nil) goto v_53;
    v_167 = stack[-1];
    v_166 = basic_elt(env, 2); // s
    if (v_167 == v_166) goto v_64;
    else goto v_65;
v_64:
    v_166 = qvalue(basic_elt(env, 3)); // s_changes_parity
    goto v_63;
v_65:
    v_166 = nil;
    goto v_63;
    v_166 = nil;
v_63:
    if (v_166 == nil) goto v_61;
    else goto v_60;
v_61:
    v_167 = stack[-1];
    v_166 = lisp_true;
    if (v_167 == v_166) goto v_76;
    else goto v_77;
v_76:
    v_166 = qvalue(basic_elt(env, 4)); // t_changes_parity
    goto v_75;
v_77:
    v_166 = nil;
    goto v_75;
    v_166 = nil;
v_75:
    if (v_166 == nil) goto v_73;
    else goto v_60;
v_73:
    v_166 = stack[-1];
    {   LispObject fn = basic_elt(env, 5); // fermionicp
    v_166 = (*qfn1(fn))(fn, v_166);
    }
    env = stack[-4];
    if (v_166 == nil) goto v_84;
    else goto v_60;
v_84:
    goto v_53;
v_60:
    v_166 = stack[-2];
    if (!car_legal(v_166)) v_166 = carerror(v_166); else
    v_166 = car(v_166);
    if (!car_legal(v_166)) v_166 = cdrerror(v_166); else
    v_166 = cdr(v_166);
    {   LispObject fn = basic_elt(env, 6); // negf
    v_166 = (*qfn1(fn))(fn, v_166);
    }
    env = stack[-4];
    v_167 = v_166;
    goto v_51;
v_53:
    v_166 = stack[-2];
    if (!car_legal(v_166)) v_166 = carerror(v_166); else
    v_166 = car(v_166);
    if (!car_legal(v_166)) v_166 = cdrerror(v_166); else
    v_166 = cdr(v_166);
    v_167 = v_166;
    goto v_51;
    v_167 = nil;
v_51:
    v_166 = stack[-1];
    {   LispObject fn = basic_elt(env, 0); // difff
    v_166 = (*qfn2(fn))(fn, v_167, v_166);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 7); // multsq
    stack[-3] = (*qfn2(fn))(fn, stack[0], v_166);
    }
    env = stack[-4];
    v_166 = stack[-2];
    if (!car_legal(v_166)) v_166 = carerror(v_166); else
    v_166 = car(v_166);
    if (!car_legal(v_166)) v_166 = carerror(v_166); else
    v_166 = car(v_166);
    if (!car_legal(v_166)) v_167 = cdrerror(v_166); else
    v_167 = cdr(v_166);
    v_166 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_167 == v_166) goto v_104;
    else goto v_105;
v_104:
    v_167 = stack[-1];
    v_166 = basic_elt(env, 2); // s
    if (v_167 == v_166) goto v_116;
    else goto v_117;
v_116:
    v_166 = qvalue(basic_elt(env, 3)); // s_changes_parity
    goto v_115;
v_117:
    v_166 = nil;
    goto v_115;
    v_166 = nil;
v_115:
    if (v_166 == nil) goto v_113;
    else goto v_112;
v_113:
    v_167 = stack[-1];
    v_166 = lisp_true;
    if (v_167 == v_166) goto v_129;
    else goto v_130;
v_129:
    v_166 = qvalue(basic_elt(env, 4)); // t_changes_parity
    goto v_128;
v_130:
    v_166 = nil;
    goto v_128;
    v_166 = nil;
v_128:
    if (v_166 == nil) goto v_126;
    else goto v_125;
v_126:
    v_166 = stack[-2];
    if (!car_legal(v_166)) v_166 = carerror(v_166); else
    v_166 = car(v_166);
    if (!car_legal(v_166)) v_166 = carerror(v_166); else
    v_166 = car(v_166);
    if (!car_legal(v_166)) v_166 = carerror(v_166); else
    v_166 = car(v_166);
    {   LispObject fn = basic_elt(env, 5); // fermionicp
    v_166 = (*qfn1(fn))(fn, v_166);
    }
    env = stack[-4];
v_125:
v_112:
    goto v_103;
v_105:
    v_166 = nil;
    goto v_103;
    v_166 = nil;
v_103:
    if (v_166 == nil) goto v_101;
    v_166 = stack[-2];
    if (!car_legal(v_166)) v_166 = carerror(v_166); else
    v_166 = car(v_166);
    if (!car_legal(v_166)) v_167 = carerror(v_166); else
    v_167 = car(v_166);
    v_166 = stack[-1];
    {   LispObject fn = basic_elt(env, 8); // diffdp
    v_166 = (*qfn2(fn))(fn, v_167, v_166);
    }
    env = stack[-4];
    stack[0] = v_166;
    goto v_99;
v_101:
    v_166 = stack[-2];
    if (!car_legal(v_166)) v_166 = carerror(v_166); else
    v_166 = car(v_166);
    if (!car_legal(v_166)) v_167 = carerror(v_166); else
    v_167 = car(v_166);
    v_166 = stack[-1];
    {   LispObject fn = basic_elt(env, 9); // diffp
    v_166 = (*qfn2(fn))(fn, v_167, v_166);
    }
    env = stack[-4];
    stack[0] = v_166;
    goto v_99;
    stack[0] = nil;
v_99:
    v_166 = stack[-2];
    if (!car_legal(v_166)) v_166 = carerror(v_166); else
    v_166 = car(v_166);
    if (!car_legal(v_166)) v_167 = cdrerror(v_166); else
    v_167 = cdr(v_166);
    v_166 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_166 = cons(v_167, v_166);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 7); // multsq
    v_166 = (*qfn2(fn))(fn, stack[0], v_166);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 10); // addsq
    stack[0] = (*qfn2(fn))(fn, stack[-3], v_166);
    }
    env = stack[-4];
    v_166 = stack[-2];
    if (!car_legal(v_166)) v_167 = cdrerror(v_166); else
    v_167 = cdr(v_166);
    v_166 = stack[-1];
    {   LispObject fn = basic_elt(env, 0); // difff
    v_166 = (*qfn2(fn))(fn, v_167, v_166);
    }
    env = stack[-4];
    {
        LispObject v_173 = stack[0];
        LispObject fn = basic_elt(env, 10); // addsq
        return (*qfn2(fn))(fn, v_173, v_166);
    }
    v_166 = nil;
v_6:
    return onevalue(v_166);
}



// Code for symtabget

static LispObject CC_symtabget(LispObject env,
                         LispObject v_3, LispObject v_4)
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
        push(v_3,v_4);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_4,v_3);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    v_45 = v_4;
    v_43 = v_3;
// end of prologue
// Binding name
// FLUIDBIND: reloadenv=1 litvec-offset=1 saveloc=0
{   bind_fluid_stack bind_fluid_var(-1, 1, 0);
    setvalue(basic_elt(env, 1), v_43); // name
    v_43 = v_45;
    if (v_43 == nil) goto v_14;
    v_43 = qvalue(basic_elt(env, 1)); // name
    if (v_43 == nil) goto v_18;
    else goto v_17;
v_18:
    v_43 = qvalue(basic_elt(env, 2)); // !*symboltable!*
    if (!car_legal(v_43)) v_43 = carerror(v_43); else
    v_43 = car(v_43);
v_17:
    setvalue(basic_elt(env, 1), v_43); // name
    goto v_12;
v_14:
v_12:
    v_43 = qvalue(basic_elt(env, 1)); // name
    if (v_43 == nil) goto v_24;
    else goto v_25;
v_24:
    v_43 = qvalue(basic_elt(env, 2)); // !*symboltable!*
    goto v_23;
v_25:
    v_44 = v_45;
    v_43 = basic_elt(env, 3); // (!*type!* !*params!* !*decs!*)
    v_43 = Lmemq(nil, v_44, v_43);
    if (v_43 == nil) goto v_29;
    v_43 = qvalue(basic_elt(env, 1)); // name
    v_44 = v_45;
    v_43 = get(v_43, v_44);
    goto v_23;
v_29:
    v_43 = v_45;
    v_44 = qvalue(basic_elt(env, 1)); // name
    if (!symbolp(v_44)) v_44 = nil;
    else { v_44 = qfastgets(v_44);
           if (v_44 != nil) { v_44 = elt(v_44, 58); // !*decs!*
#ifdef RECORD_GET
             if (v_44 != SPID_NOPROP)
                record_get(elt(fastget_names, 58), 1);
             else record_get(elt(fastget_names, 58), 0),
                v_44 = nil; }
           else record_get(elt(fastget_names, 58), 0); }
#else
             if (v_44 == SPID_NOPROP) v_44 = nil; }}
#endif
    v_43 = Lassoc(nil, v_43, v_44);
    goto v_23;
    v_43 = nil;
v_23:
    ;}  // end of a binding scope
    return onevalue(v_43);
}



// Code for getphystype

static LispObject CC_getphystype(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_82, v_83;
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
    v_82 = stack[0];
    {   LispObject fn = basic_elt(env, 7); // physopp
    v_82 = (*qfn1(fn))(fn, v_82);
    }
    env = stack[-2];
    if (v_82 == nil) goto v_10;
    v_82 = stack[0];
    {   LispObject fn = basic_elt(env, 8); // scalopp
    v_82 = (*qfn1(fn))(fn, v_82);
    }
    env = stack[-2];
    if (v_82 == nil) goto v_16;
    v_82 = basic_elt(env, 1); // scalar
    goto v_14;
v_16:
    v_82 = stack[0];
    {   LispObject fn = basic_elt(env, 9); // vecopp
    v_82 = (*qfn1(fn))(fn, v_82);
    }
    env = stack[-2];
    if (v_82 == nil) goto v_21;
    v_82 = basic_elt(env, 2); // vector
    goto v_14;
v_21:
    v_82 = stack[0];
    {   LispObject fn = basic_elt(env, 10); // tensopp
    v_82 = (*qfn1(fn))(fn, v_82);
    }
    env = stack[-2];
    if (v_82 == nil) goto v_26;
    v_82 = basic_elt(env, 3); // tensor
    goto v_14;
v_26:
    v_82 = stack[0];
    {   LispObject fn = basic_elt(env, 11); // po!:statep
    v_82 = (*qfn1(fn))(fn, v_82);
    }
    env = stack[-2];
    if (v_82 == nil) goto v_31;
    v_82 = basic_elt(env, 4); // state
    goto v_14;
v_31:
    v_82 = nil;
    goto v_14;
    v_82 = nil;
v_14:
    goto v_8;
v_10:
    v_82 = stack[0];
    if (!consp(v_82)) goto v_38;
    else goto v_39;
v_38:
    v_82 = nil;
    goto v_8;
v_39:
    v_82 = stack[0];
    if (!car_legal(v_82)) v_82 = carerror(v_82); else
    v_82 = car(v_82);
    if (!symbolp(v_82)) v_83 = nil;
    else { v_83 = qfastgets(v_82);
           if (v_83 != nil) { v_83 = elt(v_83, 18); // phystype
#ifdef RECORD_GET
             if (v_83 != SPID_NOPROP)
                record_get(elt(fastget_names, 18), 1);
             else record_get(elt(fastget_names, 18), 0),
                v_83 = nil; }
           else record_get(elt(fastget_names, 18), 0); }
#else
             if (v_83 == SPID_NOPROP) v_83 = nil; }}
#endif
    v_82 = v_83;
    if (v_83 == nil) goto v_43;
    goto v_8;
v_43:
    v_82 = stack[0];
    if (!car_legal(v_82)) v_83 = carerror(v_82); else
    v_83 = car(v_82);
    v_82 = basic_elt(env, 5); // phystypefn
    v_83 = get(v_83, v_82);
    env = stack[-2];
    v_82 = v_83;
    if (v_83 == nil) goto v_49;
    v_83 = v_82;
    v_82 = stack[0];
    if (!car_legal(v_82)) v_82 = cdrerror(v_82); else
    v_82 = cdr(v_82);
        return Lapply1(nil, v_83, v_82);
v_49:
    v_82 = stack[0];
    {   LispObject fn = basic_elt(env, 12); // collectphystype
    v_83 = (*qfn1(fn))(fn, v_82);
    }
    env = stack[-2];
    v_82 = v_83;
    if (v_83 == nil) goto v_58;
    else goto v_59;
v_58:
    v_82 = nil;
    goto v_8;
v_59:
    v_83 = v_82;
    if (!car_legal(v_83)) v_83 = cdrerror(v_83); else
    v_83 = cdr(v_83);
    if (v_83 == nil) goto v_63;
    else goto v_64;
v_63:
    if (!car_legal(v_82)) v_82 = carerror(v_82); else
    v_82 = car(v_82);
    goto v_8;
v_64:
    v_83 = basic_elt(env, 4); // state
    v_82 = Lmember(nil, v_83, v_82);
    if (v_82 == nil) goto v_70;
    v_82 = basic_elt(env, 4); // state
    goto v_8;
v_70:
    stack[-1] = basic_elt(env, 0); // getphystype
    v_83 = basic_elt(env, 6); // "PHYSOP type conflict in"
    v_82 = stack[0];
    v_82 = list2(v_83, v_82);
    env = stack[-2];
    {
        LispObject v_86 = stack[-1];
        LispObject fn = basic_elt(env, 13); // rederr2
        return (*qfn2(fn))(fn, v_86, v_82);
    }
    v_82 = nil;
v_8:
    return onevalue(v_82);
}



// Code for lispapply

static LispObject CC_lispapply(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_22 = v_3;
    v_23 = v_2;
// end of prologue
    v_21 = v_23;
    if (!consp(v_21)) goto v_8;
    stack[-1] = basic_elt(env, 1); // rlisp
    stack[0] = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_21 = basic_elt(env, 2); // "Apply called with non-id arg"
    v_22 = v_23;
    v_21 = list2(v_21, v_22);
    env = stack[-2];
    {
        LispObject v_26 = stack[-1];
        LispObject v_27 = stack[0];
        LispObject fn = basic_elt(env, 3); // rerror
        return (*qfn3(fn))(fn, v_26, v_27, v_21);
    }
v_8:
    v_21 = v_23;
    {
        LispObject fn = basic_elt(env, 4); // apply
        return (*qfn2(fn))(fn, v_21, v_22);
    }
    v_21 = nil;
    return onevalue(v_21);
}



// Code for mv!-pow!-!+

static LispObject CC_mvKpowKL(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    stack[-2] = nil;
v_8:
    v_29 = stack[-1];
    if (v_29 == nil) goto v_11;
    else goto v_12;
v_11:
    v_29 = stack[-2];
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn1(fn))(fn, v_29);
    }
v_12:
    v_29 = stack[-1];
    if (!car_legal(v_29)) v_30 = carerror(v_29); else
    v_30 = car(v_29);
    v_29 = stack[0];
    if (!car_legal(v_29)) v_29 = carerror(v_29); else
    v_29 = car(v_29);
    v_30 = plus2(v_30, v_29);
    env = stack[-3];
    v_29 = stack[-2];
    v_29 = cons(v_30, v_29);
    env = stack[-3];
    stack[-2] = v_29;
    v_29 = stack[-1];
    if (!car_legal(v_29)) v_29 = cdrerror(v_29); else
    v_29 = cdr(v_29);
    stack[-1] = v_29;
    v_29 = stack[0];
    if (!car_legal(v_29)) v_29 = cdrerror(v_29); else
    v_29 = cdr(v_29);
    stack[0] = v_29;
    goto v_8;
    v_29 = nil;
    return onevalue(v_29);
}



// Code for kernp

static LispObject CC_kernp(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_61, v_62, v_63;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_62 = v_2;
// end of prologue
    v_61 = v_62;
    if (!car_legal(v_61)) v_63 = cdrerror(v_61); else
    v_63 = cdr(v_61);
    v_61 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_63 == v_61) goto v_6;
    else goto v_7;
v_6:
    v_61 = v_62;
    if (!car_legal(v_61)) v_61 = carerror(v_61); else
    v_61 = car(v_61);
    v_62 = v_61;
    v_63 = v_61;
    v_61 = v_63;
    if (!consp(v_61)) goto v_20;
    else goto v_21;
v_20:
    v_61 = lisp_true;
    goto v_19;
v_21:
    v_61 = v_63;
    if (!car_legal(v_61)) v_61 = carerror(v_61); else
    v_61 = car(v_61);
    v_61 = (consp(v_61) ? nil : lisp_true);
    goto v_19;
    v_61 = nil;
v_19:
    if (v_61 == nil) goto v_13;
    else goto v_14;
v_13:
    v_61 = v_62;
    if (!car_legal(v_61)) v_61 = cdrerror(v_61); else
    v_61 = cdr(v_61);
    if (v_61 == nil) goto v_31;
    else goto v_32;
v_31:
    v_61 = v_62;
    if (!car_legal(v_61)) v_61 = carerror(v_61); else
    v_61 = car(v_61);
    if (!car_legal(v_61)) v_63 = cdrerror(v_61); else
    v_63 = cdr(v_61);
    v_61 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_63 == v_61) goto v_37;
    else goto v_38;
v_37:
    v_61 = v_62;
    if (!car_legal(v_61)) v_61 = carerror(v_61); else
    v_61 = car(v_61);
    if (!car_legal(v_61)) v_61 = carerror(v_61); else
    v_61 = car(v_61);
    if (!car_legal(v_61)) v_62 = cdrerror(v_61); else
    v_62 = cdr(v_61);
    v_61 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_61 = (v_62 == v_61 ? lisp_true : nil);
    goto v_36;
v_38:
    v_61 = nil;
    goto v_36;
    v_61 = nil;
v_36:
    goto v_30;
v_32:
    v_61 = nil;
    goto v_30;
    v_61 = nil;
v_30:
    goto v_12;
v_14:
    v_61 = nil;
    goto v_12;
    v_61 = nil;
v_12:
    goto v_5;
v_7:
    v_61 = nil;
    goto v_5;
    v_61 = nil;
v_5:
    return onevalue(v_61);
}



// Code for conv!:bf2i

static LispObject CC_convTbf2i(LispObject env,
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
    {
        LispObject fn = basic_elt(env, 1); // ashift
        return (*qfn2(fn))(fn, v_12, v_11);
    }
}



// Code for qcputx

static LispObject CC_qcputx(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_31, v_32, v_33;
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
    v_32 = v_2;
// end of prologue
    v_33 = v_32;
    v_31 = basic_elt(env, 1); // quote
    if (!consp(v_33)) goto v_7;
    v_33 = car(v_33);
    if (v_33 == v_31) goto v_6;
    else goto v_7;
v_6:
    v_31 = v_32;
    if (!car_legal(v_31)) v_31 = cdrerror(v_31); else
    v_31 = cdr(v_31);
    if (!car_legal(v_31)) v_33 = carerror(v_31); else
    v_33 = car(v_31);
    v_31 = basic_elt(env, 2); // cref
    v_31 = Lflagp(nil, v_33, v_31);
    env = stack[0];
    if (v_31 == nil) goto v_14;
    v_31 = lisp_true;
    goto v_12;
v_14:
    v_31 = v_32;
    if (!car_legal(v_31)) v_31 = cdrerror(v_31); else
    v_31 = cdr(v_31);
    if (!car_legal(v_31)) v_31 = carerror(v_31); else
    v_31 = car(v_31);
    v_32 = basic_elt(env, 3); // compile
        return Lflagp(nil, v_31, v_32);
    v_31 = nil;
v_12:
    goto v_5;
v_7:
    v_31 = nil;
    goto v_5;
    v_31 = nil;
v_5:
    return onevalue(v_31);
}



// Code for rmplus

static LispObject CC_rmplus(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_17, v_18, v_19;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_18 = v_2;
// end of prologue
    v_17 = v_18;
    v_19 = basic_elt(env, 1); // plus
    if (!consp(v_17)) goto v_7;
    v_17 = car(v_17);
    if (v_17 == v_19) goto v_6;
    else goto v_7;
v_6:
    v_17 = v_18;
    if (!car_legal(v_17)) v_17 = cdrerror(v_17); else
    v_17 = cdr(v_17);
    goto v_5;
v_7:
    v_17 = v_18;
    return ncons(v_17);
    v_17 = nil;
v_5:
    return onevalue(v_17);
}



// Code for comfac

static LispObject CC_comfac(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_120, v_121;
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
    stack[-3] = nil;
    v_120 = qvalue(basic_elt(env, 1)); // dmode!*
    if (!symbolp(v_120)) v_120 = nil;
    else { v_120 = qfastgets(v_120);
           if (v_120 != nil) { v_120 = elt(v_120, 3); // field
#ifdef RECORD_GET
             if (v_120 == SPID_NOPROP)
                record_get(elt(fastget_names, 3), 0),
                v_120 = nil;
             else record_get(elt(fastget_names, 3), 1),
                v_120 = lisp_true; }
           else record_get(elt(fastget_names, 3), 0); }
#else
             if (v_120 == SPID_NOPROP) v_120 = nil; else v_120 = lisp_true; }}
#endif
    if (v_120 == nil) goto v_16;
    v_120 = stack[-2];
    {   LispObject fn = basic_elt(env, 2); // lnc
    v_121 = (*qfn1(fn))(fn, v_120);
    }
    env = stack[-4];
    stack[-3] = v_121;
    v_120 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_120 = Lneq_2(nil, v_121, v_120);
    env = stack[-4];
    goto v_14;
v_16:
    v_120 = nil;
    goto v_14;
    v_120 = nil;
v_14:
    if (v_120 == nil) goto v_12;
    v_120 = stack[-3];
    {   LispObject fn = basic_elt(env, 3); // !:recip
    v_121 = (*qfn1(fn))(fn, v_120);
    }
    env = stack[-4];
    v_120 = stack[-2];
    {   LispObject fn = basic_elt(env, 4); // multd
    v_120 = (*qfn2(fn))(fn, v_121, v_120);
    }
    env = stack[-4];
    stack[-2] = v_120;
    goto v_10;
v_12:
v_10:
    v_120 = stack[-2];
    if (!car_legal(v_120)) v_120 = cdrerror(v_120); else
    v_120 = cdr(v_120);
    if (v_120 == nil) goto v_32;
    else goto v_33;
v_32:
    v_120 = stack[-2];
    if (!car_legal(v_120)) v_120 = carerror(v_120); else
    v_120 = car(v_120);
    goto v_7;
v_33:
    v_120 = stack[-2];
    if (!car_legal(v_120)) v_120 = carerror(v_120); else
    v_120 = car(v_120);
    if (!car_legal(v_120)) v_120 = cdrerror(v_120); else
    v_120 = cdr(v_120);
    stack[-3] = v_120;
    v_120 = stack[-2];
    if (!car_legal(v_120)) v_120 = carerror(v_120); else
    v_120 = car(v_120);
    if (!car_legal(v_120)) v_120 = carerror(v_120); else
    v_120 = car(v_120);
    if (!car_legal(v_120)) v_120 = carerror(v_120); else
    v_120 = car(v_120);
    stack[-1] = v_120;
v_8:
    v_120 = stack[-2];
    if (!car_legal(v_120)) v_120 = cdrerror(v_120); else
    v_120 = cdr(v_120);
    stack[-2] = v_120;
    v_121 = stack[-2];
    v_120 = stack[-1];
    {   LispObject fn = basic_elt(env, 5); // degr
    v_121 = (*qfn2(fn))(fn, v_121, v_120);
    }
    env = stack[-4];
    v_120 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_121 == v_120) goto v_49;
    else goto v_50;
v_49:
    stack[0] = nil;
    v_120 = stack[-2];
    if (!consp(v_120)) goto v_67;
    else goto v_68;
v_67:
    v_120 = lisp_true;
    goto v_66;
v_68:
    v_120 = stack[-2];
    if (!car_legal(v_120)) v_120 = carerror(v_120); else
    v_120 = car(v_120);
    v_120 = (consp(v_120) ? nil : lisp_true);
    goto v_66;
    v_120 = nil;
v_66:
    if (v_120 == nil) goto v_64;
    v_120 = lisp_true;
    goto v_62;
v_64:
    v_120 = stack[-1];
    {   LispObject fn = basic_elt(env, 6); // noncomp
    v_120 = (*qfn1(fn))(fn, v_120);
    }
    env = stack[-4];
    if (v_120 == nil) goto v_81;
    else goto v_82;
v_81:
    v_120 = nil;
    goto v_80;
v_82:
    v_120 = stack[-2];
    if (!car_legal(v_120)) v_120 = carerror(v_120); else
    v_120 = car(v_120);
    if (!car_legal(v_120)) v_120 = carerror(v_120); else
    v_120 = car(v_120);
    if (!car_legal(v_120)) v_120 = carerror(v_120); else
    v_120 = car(v_120);
    {   LispObject fn = basic_elt(env, 6); // noncomp
    v_120 = (*qfn1(fn))(fn, v_120);
    }
    env = stack[-4];
    goto v_80;
    v_120 = nil;
v_80:
    v_120 = (v_120 == nil ? lisp_true : nil);
    goto v_62;
    v_120 = nil;
v_62:
    if (v_120 == nil) goto v_60;
    v_121 = stack[-3];
    v_120 = stack[-2];
    {   LispObject fn = basic_elt(env, 7); // gcdf
    v_120 = (*qfn2(fn))(fn, v_121, v_120);
    }
    goto v_58;
v_60:
    v_120 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_58;
    v_120 = nil;
v_58:
    {
        LispObject v_126 = stack[0];
        return cons(v_126, v_120);
    }
v_50:
    v_120 = stack[-2];
    if (!car_legal(v_120)) v_120 = cdrerror(v_120); else
    v_120 = cdr(v_120);
    if (v_120 == nil) goto v_100;
    else goto v_101;
v_100:
    v_120 = stack[-2];
    if (!car_legal(v_120)) v_120 = carerror(v_120); else
    v_120 = car(v_120);
    if (!car_legal(v_120)) stack[0] = carerror(v_120); else
    stack[0] = car(v_120);
    v_121 = stack[-3];
    v_120 = stack[-2];
    if (!car_legal(v_120)) v_120 = carerror(v_120); else
    v_120 = car(v_120);
    if (!car_legal(v_120)) v_120 = cdrerror(v_120); else
    v_120 = cdr(v_120);
    {   LispObject fn = basic_elt(env, 7); // gcdf
    v_120 = (*qfn2(fn))(fn, v_121, v_120);
    }
    {
        LispObject v_127 = stack[0];
        return cons(v_127, v_120);
    }
v_101:
    v_120 = stack[-2];
    if (!car_legal(v_120)) v_120 = carerror(v_120); else
    v_120 = car(v_120);
    if (!car_legal(v_120)) v_121 = cdrerror(v_120); else
    v_121 = cdr(v_120);
    v_120 = stack[-3];
    {   LispObject fn = basic_elt(env, 7); // gcdf
    v_120 = (*qfn2(fn))(fn, v_121, v_120);
    }
    env = stack[-4];
    stack[-3] = v_120;
    goto v_48;
v_48:
    goto v_8;
v_7:
    return onevalue(v_120);
}



// Code for talp_ordatp

static LispObject CC_talp_ordatp(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    v_44 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // talp_simpat
    v_44 = (*qfn1(fn))(fn, v_44);
    }
    env = stack[-3];
    stack[-1] = v_44;
    v_44 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // talp_simpat
    v_44 = (*qfn1(fn))(fn, v_44);
    }
    env = stack[-3];
    stack[0] = v_44;
    v_44 = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // talp_arg2l
    v_44 = (*qfn1(fn))(fn, v_44);
    }
    env = stack[-3];
    stack[-2] = v_44;
    v_44 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // talp_arg2l
    v_44 = (*qfn1(fn))(fn, v_44);
    }
    env = stack[-3];
    v_45 = stack[-2];
    if (equal(v_45, v_44)) goto v_20;
    v_44 = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // talp_arg2l
    stack[-1] = (*qfn1(fn))(fn, v_44);
    }
    env = stack[-3];
    v_44 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // talp_arg2l
    v_44 = (*qfn1(fn))(fn, v_44);
    }
    env = stack[-3];
    {
        LispObject v_49 = stack[-1];
        LispObject fn = basic_elt(env, 4); // talp_tordp
        return (*qfn2(fn))(fn, v_49, v_44);
    }
v_20:
    v_44 = stack[-1];
    {   LispObject fn = basic_elt(env, 5); // talp_arg2r
    v_44 = (*qfn1(fn))(fn, v_44);
    }
    env = stack[-3];
    stack[-2] = v_44;
    v_44 = stack[0];
    {   LispObject fn = basic_elt(env, 5); // talp_arg2r
    v_44 = (*qfn1(fn))(fn, v_44);
    }
    env = stack[-3];
    v_45 = stack[-2];
    if (equal(v_45, v_44)) goto v_35;
    v_44 = stack[-1];
    {   LispObject fn = basic_elt(env, 5); // talp_arg2r
    stack[-1] = (*qfn1(fn))(fn, v_44);
    }
    env = stack[-3];
    v_44 = stack[0];
    {   LispObject fn = basic_elt(env, 5); // talp_arg2r
    v_44 = (*qfn1(fn))(fn, v_44);
    }
    env = stack[-3];
    {
        LispObject v_50 = stack[-1];
        LispObject fn = basic_elt(env, 4); // talp_tordp
        return (*qfn2(fn))(fn, v_50, v_44);
    }
v_35:
    v_44 = basic_elt(env, 1); // true
    return onevalue(v_44);
}



// Code for searchpl

static LispObject CC_searchpl(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    stack[-1] = nil;
v_8:
    v_46 = stack[0];
    if (!consp(v_46)) goto v_17;
    else goto v_18;
v_17:
    v_46 = lisp_true;
    goto v_16;
v_18:
    v_46 = stack[0];
    if (!car_legal(v_46)) v_46 = carerror(v_46); else
    v_46 = car(v_46);
    v_46 = (consp(v_46) ? nil : lisp_true);
    goto v_16;
    v_46 = nil;
v_16:
    if (v_46 == nil) goto v_14;
    goto v_9;
v_14:
    v_46 = stack[0];
    if (!car_legal(v_46)) v_46 = carerror(v_46); else
    v_46 = car(v_46);
    {   LispObject fn = basic_elt(env, 1); // searchtm
    v_47 = (*qfn1(fn))(fn, v_46);
    }
    env = stack[-2];
    v_46 = stack[-1];
    v_46 = cons(v_47, v_46);
    env = stack[-2];
    stack[-1] = v_46;
    v_46 = stack[0];
    if (!car_legal(v_46)) v_46 = cdrerror(v_46); else
    v_46 = cdr(v_46);
    stack[0] = v_46;
    goto v_8;
v_9:
    v_46 = nil;
    v_47 = v_46;
v_10:
    v_46 = stack[-1];
    if (v_46 == nil) goto v_36;
    else goto v_37;
v_36:
    v_46 = v_47;
    goto v_7;
v_37:
    v_46 = stack[-1];
    v_46 = car(v_46);
    {   LispObject fn = basic_elt(env, 2); // setunion
    v_46 = (*qfn2(fn))(fn, v_46, v_47);
    }
    env = stack[-2];
    v_47 = v_46;
    v_46 = stack[-1];
    v_46 = cdr(v_46);
    stack[-1] = v_46;
    goto v_10;
v_7:
    return onevalue(v_46);
}



// Code for intexprnp

static LispObject CC_intexprnp(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_59, v_60, v_61, v_62;
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
    v_60 = v_3;
    v_61 = v_2;
// end of prologue
    v_59 = qvalue(basic_elt(env, 1)); // !*revalp
    if (v_59 == nil) goto v_7;
    else goto v_8;
v_7:
    v_59 = nil;
    goto v_6;
v_8:
    v_59 = v_61;
    if (!consp(v_59)) goto v_11;
    else goto v_12;
v_11:
    v_59 = v_61;
    if (is_number(v_59)) goto v_16;
    else goto v_17;
v_16:
    v_59 = v_61;
    v_59 = integerp(v_59);
    goto v_15;
v_17:
    v_59 = v_61;
    v_59 = Latsoc(nil, v_59, v_60);
    v_61 = v_59;
    if (v_59 == nil) goto v_22;
    v_59 = v_61;
    if (!car_legal(v_59)) v_59 = cdrerror(v_59); else
    v_59 = cdr(v_59);
    v_60 = basic_elt(env, 2); // integer
    v_59 = (v_59 == v_60 ? lisp_true : nil);
    goto v_15;
v_22:
    v_59 = nil;
    goto v_15;
    v_59 = nil;
v_15:
    goto v_6;
v_12:
    v_59 = v_61;
    if (!car_legal(v_59)) v_59 = carerror(v_59); else
    v_59 = car(v_59);
    if (symbolp(v_59)) goto v_38;
    v_59 = nil;
    goto v_36;
v_38:
    v_59 = v_61;
    if (!car_legal(v_59)) v_62 = carerror(v_59); else
    v_62 = car(v_59);
    v_59 = basic_elt(env, 3); // intfn
    v_59 = Lflagp(nil, v_62, v_59);
    env = stack[0];
    if (v_59 == nil) goto v_47;
    v_59 = v_61;
    if (!car_legal(v_59)) v_59 = cdrerror(v_59); else
    v_59 = cdr(v_59);
    {
        LispObject fn = basic_elt(env, 4); // intexprlisp
        return (*qfn2(fn))(fn, v_59, v_60);
    }
v_47:
    v_59 = nil;
    goto v_45;
    v_59 = nil;
v_45:
    goto v_36;
    v_59 = nil;
v_36:
    goto v_6;
    v_59 = nil;
v_6:
    return onevalue(v_59);
}



// Code for lpriw

static LispObject CC_lpriw(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    v_62 = v_3;
    stack[0] = v_2;
// end of prologue
    v_61 = v_62;
    if (v_61 == nil) goto v_12;
    v_61 = v_62;
    if (!consp(v_61)) goto v_15;
    else goto v_12;
v_15:
    v_61 = v_62;
    v_61 = ncons(v_61);
    env = stack[-1];
    goto v_10;
v_12:
    v_61 = v_62;
    goto v_10;
    v_61 = nil;
v_10:
    v_61 = cons(stack[0], v_61);
    env = stack[-1];
    stack[0] = v_61;
    v_61 = qvalue(basic_elt(env, 1)); // ofl!*
    if (v_61 == nil) goto v_24;
    else goto v_25;
v_24:
    v_61 = Lterpri(nil);
    env = stack[-1];
    v_61 = stack[0];
    {   LispObject fn = basic_elt(env, 5); // lpri
    v_61 = (*qfn1(fn))(fn, v_61);
    }
    env = stack[-1];
    v_61 = Lterpri(nil);
    goto v_23;
v_25:
    v_61 = qvalue(basic_elt(env, 2)); // !*fort
    if (v_61 == nil) goto v_37;
    else goto v_36;
v_37:
    v_61 = qvalue(basic_elt(env, 3)); // !*nat
    if (v_61 == nil) goto v_42;
    else goto v_43;
v_42:
    v_61 = lisp_true;
    goto v_41;
v_43:
    v_61 = qvalue(basic_elt(env, 4)); // !*defn
    goto v_41;
    v_61 = nil;
v_41:
    if (v_61 == nil) goto v_39;
    else goto v_36;
v_39:
    v_61 = Lterpri(nil);
    env = stack[-1];
    v_61 = stack[0];
    {   LispObject fn = basic_elt(env, 5); // lpri
    v_61 = (*qfn1(fn))(fn, v_61);
    }
    env = stack[-1];
    v_61 = Lterpri(nil);
    env = stack[-1];
    goto v_34;
v_36:
v_34:
    v_61 = nil;
    v_61 = Lwrs(nil, v_61);
    env = stack[-1];
    v_61 = stack[0];
    {   LispObject fn = basic_elt(env, 5); // lpri
    v_61 = (*qfn1(fn))(fn, v_61);
    }
    env = stack[-1];
    v_61 = Lterpri(nil);
    env = stack[-1];
    v_61 = qvalue(basic_elt(env, 1)); // ofl!*
    if (!car_legal(v_61)) v_61 = cdrerror(v_61); else
    v_61 = cdr(v_61);
    v_61 = Lwrs(nil, v_61);
    goto v_23;
v_23:
    v_61 = nil;
    return onevalue(v_61);
}



// Code for testred

static LispObject CC_testred(LispObject env,
                         LispObject v_2)
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
    stack[-1] = qvalue(basic_elt(env, 1)); // codmat
    v_68 = qvalue(basic_elt(env, 2)); // maxvar
    v_67 = stack[0];
    v_67 = plus2(v_68, v_67);
    env = stack[-2];
    v_68 = Lgetv(nil, stack[-1], v_67);
    env = stack[-2];
    v_67 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_67 = Lgetv(nil, v_68, v_67);
    env = stack[-2];
    if (v_67 == nil) goto v_7;
    stack[-1] = qvalue(basic_elt(env, 1)); // codmat
    v_68 = qvalue(basic_elt(env, 2)); // maxvar
    v_67 = stack[0];
    v_67 = plus2(v_68, v_67);
    env = stack[-2];
    v_68 = Lgetv(nil, stack[-1], v_67);
    env = stack[-2];
    v_67 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_67 = Lgetv(nil, v_68, v_67);
    env = stack[-2];
    if (!car_legal(v_67)) v_67 = carerror(v_67); else
    v_67 = car(v_67);
    if (!car_legal(v_67)) v_68 = carerror(v_67); else
    v_68 = car(v_67);
    v_67 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_67 = static_cast<LispObject>(lessp2(v_68, v_67));
    v_67 = v_67 ? lisp_true : nil;
    env = stack[-2];
    if (v_67 == nil) goto v_7;
    stack[-1] = qvalue(basic_elt(env, 1)); // codmat
    v_68 = qvalue(basic_elt(env, 2)); // maxvar
    v_67 = stack[0];
    v_67 = plus2(v_68, v_67);
    env = stack[-2];
    v_69 = Lgetv(nil, stack[-1], v_67);
    env = stack[-2];
    v_68 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_67 = nil;
    v_67 = Lputv(nil, v_69, v_68, v_67);
    env = stack[-2];
    stack[-1] = qvalue(basic_elt(env, 1)); // codmat
    v_68 = qvalue(basic_elt(env, 2)); // maxvar
    v_67 = stack[0];
    v_67 = plus2(v_68, v_67);
    env = stack[-2];
    v_68 = Lgetv(nil, stack[-1], v_67);
    env = stack[-2];
    v_67 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_67 = Lgetv(nil, v_68, v_67);
    env = stack[-2];
    stack[-1] = v_67;
v_39:
    v_67 = stack[-1];
    if (v_67 == nil) goto v_49;
    else goto v_50;
v_49:
    v_67 = nil;
    goto v_38;
v_50:
    v_67 = stack[-1];
    if (!car_legal(v_67)) v_67 = carerror(v_67); else
    v_67 = car(v_67);
    stack[0] = v_67;
    v_67 = stack[0];
    if (!car_legal(v_67)) v_68 = carerror(v_67); else
    v_68 = car(v_67);
    v_67 = stack[0];
    if (!car_legal(v_67)) v_67 = cdrerror(v_67); else
    v_67 = cdr(v_67);
    if (!car_legal(v_67)) v_67 = carerror(v_67); else
    v_67 = car(v_67);
    {   LispObject fn = basic_elt(env, 3); // downwght1
    v_67 = (*qfn2(fn))(fn, v_68, v_67);
    }
    env = stack[-2];
    v_67 = stack[0];
    if (!car_legal(v_67)) v_67 = carerror(v_67); else
    v_67 = car(v_67);
    {   LispObject fn = basic_elt(env, 0); // testred
    v_67 = (*qfn1(fn))(fn, v_67);
    }
    env = stack[-2];
    v_67 = stack[-1];
    if (!car_legal(v_67)) v_67 = cdrerror(v_67); else
    v_67 = cdr(v_67);
    stack[-1] = v_67;
    goto v_39;
v_38:
    goto v_5;
v_7:
    v_67 = nil;
v_5:
    return onevalue(v_67);
}



// Code for off_mod_reval

static LispObject CC_off_mod_reval(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_25;
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
    v_25 = qvalue(basic_elt(env, 1)); // !*modular
    if (v_25 == nil) goto v_9;
    v_25 = basic_elt(env, 2); // modular
    v_25 = ncons(v_25);
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // off
    v_25 = (*qfn1(fn))(fn, v_25);
    }
    env = stack[-1];
    v_25 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // reval
    v_25 = (*qfn1(fn))(fn, v_25);
    }
    env = stack[-1];
    stack[0] = v_25;
    v_25 = basic_elt(env, 2); // modular
    v_25 = ncons(v_25);
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 5); // on
    v_25 = (*qfn1(fn))(fn, v_25);
    }
    goto v_7;
v_9:
    v_25 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // reval
    v_25 = (*qfn1(fn))(fn, v_25);
    }
    stack[0] = v_25;
    goto v_7;
v_7:
    v_25 = stack[0];
    return onevalue(v_25);
}



// Code for simpindexvar

static LispObject CC_simpindexvar(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // partitindexvar
    v_7 = (*qfn1(fn))(fn, v_7);
    }
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // !*pf2sq
        return (*qfn1(fn))(fn, v_7);
    }
}



// Code for dim!<deg

static LispObject CC_dimRdeg(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    v_25 = v_2;
// end of prologue
    stack[0] = qvalue(basic_elt(env, 1)); // dimex!*
    {   LispObject fn = basic_elt(env, 2); // deg!*farg
    v_25 = (*qfn1(fn))(fn, v_25);
    }
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // negf
    v_25 = (*qfn1(fn))(fn, v_25);
    }
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 4); // addf
    v_25 = (*qfn2(fn))(fn, stack[0], v_25);
    }
    env = stack[-1];
    v_26 = v_25;
    v_25 = v_26;
    if (is_number(v_25)) goto v_16;
    else goto v_15;
v_16:
    v_25 = v_26;
    v_25 = Lminusp(nil, v_25);
    if (v_25 == nil) goto v_15;
    v_25 = lisp_true;
    goto v_13;
v_15:
    v_25 = nil;
    goto v_13;
    v_25 = nil;
v_13:
    return onevalue(v_25);
}



// Code for opnum!*

static LispObject CC_opnumH(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_49, v_50, v_51;
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
    v_49 = v_2;
// end of prologue
    stack[-1] = nil;
    v_50 = v_49;
    if (symbolp(v_50)) goto v_12;
    stack[0] = v_49;
    {   LispObject fn = basic_elt(env, 2); // collectindices
    v_49 = (*qfn1(fn))(fn, v_49);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // removeindices
    v_49 = (*qfn2(fn))(fn, stack[0], v_49);
    }
    env = stack[-2];
    goto v_10;
v_12:
v_10:
    v_50 = v_49;
    if (symbolp(v_50)) goto v_20;
    else goto v_21;
v_20:
    v_50 = v_49;
    goto v_19;
v_21:
    v_50 = v_49;
    if (!car_legal(v_50)) v_50 = carerror(v_50); else
    v_50 = car(v_50);
    if (!car_legal(v_49)) v_49 = cdrerror(v_49); else
    v_49 = cdr(v_49);
    stack[-1] = v_49;
    goto v_19;
v_19:
    v_49 = basic_elt(env, 1); // opnum
    v_49 = get(v_50, v_49);
    v_51 = v_49;
    v_50 = stack[-1];
    v_49 = v_51;
    v_50 = Lassoc(nil, v_50, v_49);
    v_49 = v_50;
    if (v_50 == nil) goto v_37;
    if (!car_legal(v_49)) v_49 = cdrerror(v_49); else
    v_49 = cdr(v_49);
    goto v_8;
v_37:
    v_49 = nil;
    v_50 = v_51;
    v_49 = Lassoc(nil, v_49, v_50);
    if (!car_legal(v_49)) v_49 = cdrerror(v_49); else
    v_49 = cdr(v_49);
    goto v_8;
    v_49 = nil;
v_8:
    return onevalue(v_49);
}



// Code for mapcons

static LispObject CC_mapcons(LispObject env,
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
    v_45 = stack[-3];
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
    v_45 = stack[-3];
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



// Code for !*i2gi

static LispObject CC_Hi2gi(LispObject env,
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
    v_10 = basic_elt(env, 1); // !:gi!:
    v_9 = v_8;
    v_8 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    return list2star(v_10, v_9, v_8);
}



setup_type const u09_setup[] =
{
    {"quotdd",                  G0W2,     G1W2,     CC_quotdd,G3W2,     G4W2},
    {"xread",                   G0W1,     CC_xread, G2W1,     G3W1,     G4W1},
    {"prepsq*2",                G0W1,     CC_prepsqH2,G2W1,   G3W1,     G4W1},
    {"talp_invf",               G0W1,     CC_talp_invf,G2W1,  G3W1,     G4W1},
    {"bc_prod",                 G0W2,     G1W2,     CC_bc_prod,G3W2,    G4W2},
    {"redmsg",                  G0W2,     G1W2,     CC_redmsg,G3W2,     G4W2},
    {"multiom",                 G0W1,     CC_multiom,G2W1,    G3W1,     G4W1},
    {"isarb_compl",             G0W1,     CC_isarb_compl,G2W1,G3W1,     G4W1},
    {"rdprep1",                 G0W1,     CC_rdprep1,G2W1,    G3W1,     G4W1},
    {"variables",               G0W1,     CC_variables,G2W1,  G3W1,     G4W1},
    {"layout-formula",          G0W3,     G1W3,     G2W3,     CC_layoutKformula,G4W3},
    {"noncomp2f",               G0W1,     CC_noncomp2f,G2W1,  G3W1,     G4W1},
    {"contrsp2",                G0W3,     G1W3,     G2W3,     CC_contrsp2,G4W3},
    {"token1",                  CC_token1,G1W0,     G2W0,     G3W0,     G4W0},
    {"ckpreci#",                G0W1,     CC_ckpreciC,G2W1,   G3W1,     G4W1},
    {"mo_diff",                 G0W2,     G1W2,     CC_mo_diff,G3W2,    G4W2},
    {"pneg",                    G0W1,     CC_pneg,  G2W1,     G3W1,     G4W1},
    {"th_match0",               G0W2,     G1W2,     CC_th_match0,G3W2,  G4W2},
    {"general-times-term-mod-p",G0W2,     G1W2,     CC_generalKtimesKtermKmodKp,G3W2,G4W2},
    {"abs:",                    G0W1,     CC_absT,  G2W1,     G3W1,     G4W1},
    {"gionep:",                 G0W1,     CC_gionepT,G2W1,    G3W1,     G4W1},
    {"cde_position2",           G0W2,     G1W2,     CC_cde_position2,G3W2,G4W2},
    {"valid_as_variable",       G0W1,     CC_valid_as_variable,G2W1,G3W1,G4W1},
    {"talp_simplat2",           G0W3,     G1W3,     G2W3,     CC_talp_simplat2,G4W3},
    {"cl_varl2",                G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_cl_varl2},
    {"ev_revgradlexcomp",       G0W2,     G1W2,     CC_ev_revgradlexcomp,G3W2,G4W2},
    {"equal:",                  G0W2,     G1W2,     CC_equalT,G3W2,     G4W2},
    {"difff",                   G0W2,     G1W2,     CC_difff, G3W2,     G4W2},
    {"symtabget",               G0W2,     G1W2,     CC_symtabget,G3W2,  G4W2},
    {"getphystype",             G0W1,     CC_getphystype,G2W1,G3W1,     G4W1},
    {"lispapply",               G0W2,     G1W2,     CC_lispapply,G3W2,  G4W2},
    {"mv-pow-+",                G0W2,     G1W2,     CC_mvKpowKL,G3W2,   G4W2},
    {"kernp",                   G0W1,     CC_kernp, G2W1,     G3W1,     G4W1},
    {"conv:bf2i",               G0W1,     CC_convTbf2i,G2W1,  G3W1,     G4W1},
    {"qcputx",                  G0W1,     CC_qcputx,G2W1,     G3W1,     G4W1},
    {"rmplus",                  G0W1,     CC_rmplus,G2W1,     G3W1,     G4W1},
    {"comfac",                  G0W1,     CC_comfac,G2W1,     G3W1,     G4W1},
    {"talp_ordatp",             G0W2,     G1W2,     CC_talp_ordatp,G3W2,G4W2},
    {"searchpl",                G0W1,     CC_searchpl,G2W1,   G3W1,     G4W1},
    {"intexprnp",               G0W2,     G1W2,     CC_intexprnp,G3W2,  G4W2},
    {"lpriw",                   G0W2,     G1W2,     CC_lpriw, G3W2,     G4W2},
    {"testred",                 G0W1,     CC_testred,G2W1,    G3W1,     G4W1},
    {"off_mod_reval",           G0W1,     CC_off_mod_reval,G2W1,G3W1,   G4W1},
    {"simpindexvar",            G0W1,     CC_simpindexvar,G2W1,G3W1,    G4W1},
    {"dim<deg",                 G0W1,     CC_dimRdeg,G2W1,    G3W1,     G4W1},
    {"opnum*",                  G0W1,     CC_opnumH,G2W1,     G3W1,     G4W1},
    {"mapcons",                 G0W2,     G1W2,     CC_mapcons,G3W2,    G4W2},
    {"*i2gi",                   G0W1,     CC_Hi2gi, G2W1,     G3W1,     G4W1},
    {nullptr, 
        reinterpret_cast<no_args *>(
            reinterpret_cast<uintptr_t>("u09")),
        reinterpret_cast<one_arg *>(
            reinterpret_cast<uintptr_t>("17393 87383 7123850")),
        nullptr, nullptr, nullptr}
};

// end of generated code
