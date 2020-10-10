
// $destdir/u18.c        Machine generated C code

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


// Code for lex_restore_context

static LispObject CC_lex_restore_context(LispObject env,
                         LispObject v_2)
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
    {   LispObject fn = basic_elt(env, 7); // lex_cleanup
    v_65 = (*qfn0(fn))(fn);
    }
    env = stack[-4];
    v_65 = stack[0];
    stack[0] = v_65;
v_13:
    v_65 = stack[0];
    if (v_65 == nil) goto v_17;
    else goto v_18;
v_17:
    goto v_12;
v_18:
    v_65 = stack[0];
    if (!car_legal(v_65)) v_65 = carerror(v_65); else
    v_65 = car(v_65);
    v_66 = v_65;
    v_65 = v_66;
    if (!car_legal(v_65)) v_65 = carerror(v_65); else
    v_65 = car(v_65);
    stack[-2] = v_65;
    v_65 = v_66;
    if (!car_legal(v_65)) v_65 = cdrerror(v_65); else
    v_65 = cdr(v_65);
    if (!car_legal(v_65)) v_65 = carerror(v_65); else
    v_65 = car(v_65);
    stack[-1] = v_65;
    v_65 = v_66;
    if (!car_legal(v_65)) v_65 = cdrerror(v_65); else
    v_65 = cdr(v_65);
    if (!car_legal(v_65)) v_65 = cdrerror(v_65); else
    v_65 = cdr(v_65);
    v_65 = Lintern(nil, v_65);
    env = stack[-4];
    stack[-3] = v_65;
    v_66 = stack[-3];
    v_65 = basic_elt(env, 1); // lex_fixed_code
    v_65 = get(v_66, v_65);
    env = stack[-4];
    if (v_65 == nil) goto v_35;
    else goto v_36;
v_35:
    v_66 = stack[-1];
    v_65 = qvalue(basic_elt(env, 2)); // lex_next_code
    v_65 = static_cast<LispObject>(greaterp2(v_66, v_65));
    v_65 = v_65 ? lisp_true : nil;
    env = stack[-4];
    if (v_65 == nil) goto v_43;
    v_65 = stack[-1];
    setvalue(basic_elt(env, 2), v_65); // lex_next_code
    goto v_41;
v_43:
v_41:
    v_67 = stack[-3];
    v_66 = basic_elt(env, 3); // lex_dipthong
    v_65 = stack[-2];
    v_65 = Lputprop(nil, v_67, v_66, v_65);
    env = stack[-4];
    v_67 = stack[-3];
    v_66 = basic_elt(env, 4); // lex_code
    v_65 = stack[-1];
    v_65 = Lputprop(nil, v_67, v_66, v_65);
    env = stack[-4];
    v_67 = stack[-1];
    v_66 = stack[-3];
    v_65 = qvalue(basic_elt(env, 5)); // lex_codename
    v_65 = acons(v_67, v_66, v_65);
    env = stack[-4];
    setvalue(basic_elt(env, 5), v_65); // lex_codename
    v_66 = stack[-3];
    v_65 = qvalue(basic_elt(env, 6)); // lex_keyword_names
    v_65 = cons(v_66, v_65);
    env = stack[-4];
    setvalue(basic_elt(env, 6), v_65); // lex_keyword_names
    goto v_34;
v_36:
v_34:
    v_65 = stack[0];
    if (!car_legal(v_65)) v_65 = cdrerror(v_65); else
    v_65 = cdr(v_65);
    stack[0] = v_65;
    goto v_13;
v_12:
    v_65 = nil;
    return onevalue(v_65);
}



// Code for outdefr

static LispObject CC_outdefr(LispObject env,
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
    if (!car_legal(v_17)) stack[-1] = carerror(v_17); else
    stack[-1] = car(v_17);
    v_17 = v_19;
    if (!car_legal(v_17)) v_17 = cdrerror(v_17); else
    v_17 = cdr(v_17);
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
        LispObject fn = basic_elt(env, 1); // outref
        return (*qfn4up(fn))(fn, v_23, v_24, v_25, v_17);
    }
}



// Code for processpartitie1

static LispObject CC_processpartitie1(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_77, v_78, v_79, v_80;
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
    stack[-1] = v_6;
    stack[-2] = v_5;
    v_79 = v_4;
    v_80 = v_3;
    stack[-3] = v_2;
// end of prologue
v_10:
    v_77 = stack[-3];
    if (v_77 == nil) goto v_13;
    else goto v_14;
v_13:
    v_77 = stack[-2];
    if (!car_legal(v_77)) v_77 = carerror(v_77); else
    v_77 = car(v_77);
    if (v_77 == nil) goto v_18;
    else goto v_19;
v_18:
    v_79 = basic_elt(env, 1); // times
    v_77 = stack[-2];
    if (!car_legal(v_77)) v_78 = cdrerror(v_77); else
    v_78 = cdr(v_77);
    v_77 = stack[-1];
    return acons(v_79, v_78, v_77);
v_19:
    stack[-3] = basic_elt(env, 1); // times
    stack[0] = basic_elt(env, 2); // ext
    v_77 = stack[-2];
    if (!car_legal(v_77)) v_77 = carerror(v_77); else
    v_77 = car(v_77);
    {   LispObject fn = basic_elt(env, 4); // ordn
    v_77 = (*qfn1(fn))(fn, v_77);
    }
    env = stack[-5];
    v_78 = Lreverse(nil, v_77);
    env = stack[-5];
    v_77 = stack[-2];
    if (!car_legal(v_77)) v_77 = cdrerror(v_77); else
    v_77 = cdr(v_77);
    v_78 = acons(stack[0], v_78, v_77);
    v_77 = stack[-1];
    {
        LispObject v_86 = stack[-3];
        return acons(v_86, v_78, v_77);
    }
    goto v_12;
v_14:
    v_77 = stack[-3];
    if (!car_legal(v_77)) v_78 = carerror(v_77); else
    v_78 = car(v_77);
    v_77 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_78 == v_77) goto v_40;
    else goto v_41;
v_40:
    v_77 = stack[-3];
    if (!car_legal(v_77)) v_77 = cdrerror(v_77); else
    v_77 = cdr(v_77);
    stack[-3] = v_77;
    goto v_10;
v_41:
    v_77 = stack[-3];
    if (!car_legal(v_77)) v_78 = carerror(v_77); else
    v_78 = car(v_77);
    v_77 = v_80;
    if (equal(v_78, v_77)) goto v_47;
    else goto v_48;
v_47:
    stack[-4] = v_80;
    stack[0] = v_79;
    v_77 = stack[-3];
    if (!car_legal(v_77)) stack[-3] = cdrerror(v_77); else
    stack[-3] = cdr(v_77);
    v_78 = stack[-2];
    v_77 = stack[-1];
    v_77 = list2(v_78, v_77);
    env = stack[-5];
    {
        LispObject v_87 = stack[-4];
        LispObject v_88 = stack[0];
        LispObject v_89 = stack[-3];
        LispObject fn = basic_elt(env, 5); // processcarpartitie1
        return (*qfn4up(fn))(fn, v_87, v_88, v_89, v_77);
    }
v_48:
    v_77 = stack[-3];
    if (!car_legal(v_77)) stack[-4] = carerror(v_77); else
    stack[-4] = car(v_77);
    v_77 = qvalue(basic_elt(env, 3)); // all_graded_der
    {   LispObject fn = basic_elt(env, 6); // aeval
    v_77 = (*qfn1(fn))(fn, v_77);
    }
    env = stack[-5];
    if (!car_legal(v_77)) v_78 = cdrerror(v_77); else
    v_78 = cdr(v_77);
    v_77 = stack[-3];
    if (!car_legal(v_77)) v_77 = carerror(v_77); else
    v_77 = car(v_77);
    {   LispObject fn = basic_elt(env, 7); // nth
    v_77 = (*qfn2(fn))(fn, v_78, v_77);
    }
    env = stack[-5];
    if (!car_legal(v_77)) stack[0] = cdrerror(v_77); else
    stack[0] = cdr(v_77);
    v_77 = stack[-3];
    if (!car_legal(v_77)) stack[-3] = cdrerror(v_77); else
    stack[-3] = cdr(v_77);
    v_78 = stack[-2];
    v_77 = stack[-1];
    v_77 = list2(v_78, v_77);
    env = stack[-5];
    {
        LispObject v_90 = stack[-4];
        LispObject v_91 = stack[0];
        LispObject v_92 = stack[-3];
        LispObject fn = basic_elt(env, 5); // processcarpartitie1
        return (*qfn4up(fn))(fn, v_90, v_91, v_92, v_77);
    }
v_12:
    v_77 = nil;
    return onevalue(v_77);
}



// Code for remove!-free!-vars!*

static LispObject CC_removeKfreeKvarsH(LispObject env,
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
    v_10 = lisp_true;
// Binding !*!*noremove!*!*
// FLUIDBIND: reloadenv=1 litvec-offset=1 saveloc=0
{   bind_fluid_stack bind_fluid_var(-1, 1, 0);
    setvalue(basic_elt(env, 1), v_10); // !*!*noremove!*!*
    v_10 = v_11;
    {   LispObject fn = basic_elt(env, 2); // remove!-free!-vars
    v_10 = (*qfn1(fn))(fn, v_10);
    }
    ;}  // end of a binding scope
    return onevalue(v_10);
}



// Code for degree!-in!-variable

static LispObject CC_degreeKinKvariable(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_52 = stack[-1];
    if (!consp(v_52)) goto v_11;
    else goto v_12;
v_11:
    v_52 = lisp_true;
    goto v_10;
v_12:
    v_52 = stack[-1];
    if (!car_legal(v_52)) v_52 = carerror(v_52); else
    v_52 = car(v_52);
    v_52 = (consp(v_52) ? nil : lisp_true);
    goto v_10;
    v_52 = nil;
v_10:
    if (v_52 == nil) goto v_8;
    v_52 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_6;
v_8:
    v_52 = stack[-1];
    if (!car_legal(v_52)) v_52 = carerror(v_52); else
    v_52 = car(v_52);
    if (!car_legal(v_52)) v_53 = cdrerror(v_52); else
    v_53 = cdr(v_52);
    v_52 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_53 == v_52) goto v_21;
    else goto v_22;
v_21:
    v_52 = basic_elt(env, 1); // "Polynomial with a zero coefficient found"
    {
        LispObject fn = basic_elt(env, 2); // errorf
        return (*qfn1(fn))(fn, v_52);
    }
v_22:
    v_53 = stack[0];
    v_52 = stack[-1];
    if (!car_legal(v_52)) v_52 = carerror(v_52); else
    v_52 = car(v_52);
    if (!car_legal(v_52)) v_52 = carerror(v_52); else
    v_52 = car(v_52);
    if (!car_legal(v_52)) v_52 = carerror(v_52); else
    v_52 = car(v_52);
    if (equal(v_53, v_52)) goto v_29;
    else goto v_30;
v_29:
    v_52 = stack[-1];
    if (!car_legal(v_52)) v_52 = carerror(v_52); else
    v_52 = car(v_52);
    if (!car_legal(v_52)) v_52 = carerror(v_52); else
    v_52 = car(v_52);
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    goto v_6;
v_30:
    v_52 = stack[-1];
    if (!car_legal(v_52)) v_52 = carerror(v_52); else
    v_52 = car(v_52);
    if (!car_legal(v_52)) v_53 = cdrerror(v_52); else
    v_53 = cdr(v_52);
    v_52 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // degree!-in!-variable
    stack[-2] = (*qfn2(fn))(fn, v_53, v_52);
    }
    env = stack[-3];
    v_52 = stack[-1];
    if (!car_legal(v_52)) v_53 = cdrerror(v_52); else
    v_53 = cdr(v_52);
    v_52 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // degree!-in!-variable
    v_52 = (*qfn2(fn))(fn, v_53, v_52);
    }
    env = stack[-3];
    {
        LispObject v_57 = stack[-2];
        LispObject fn = basic_elt(env, 3); // max
        return (*qfn2(fn))(fn, v_57, v_52);
    }
    v_52 = nil;
v_6:
    return onevalue(v_52);
}



// Code for constsml

static LispObject CC_constsml(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_81 = stack[0];
    if (is_number(v_81)) goto v_8;
    else goto v_9;
v_8:
    v_81 = basic_elt(env, 1); // "<cn"
    {   LispObject fn = basic_elt(env, 12); // printout
    v_81 = (*qfn1(fn))(fn, v_81);
    }
    env = stack[-1];
    v_81 = stack[0];
    v_81 = Lfloatp(nil, v_81);
    env = stack[-1];
    if (v_81 == nil) goto v_16;
    v_81 = basic_elt(env, 2); // " type=""real""> "
    v_81 = Lprinc(nil, v_81);
    env = stack[-1];
    goto v_14;
v_16:
    v_81 = stack[0];
    v_81 = integerp(v_81);
    if (v_81 == nil) goto v_22;
    v_81 = basic_elt(env, 3); // " type=""integer""> "
    v_81 = Lprinc(nil, v_81);
    env = stack[-1];
    goto v_14;
v_22:
    v_81 = basic_elt(env, 4); // "> "
    v_81 = Lprinc(nil, v_81);
    env = stack[-1];
    goto v_14;
v_14:
    v_81 = stack[0];
    v_81 = Lprinc(nil, v_81);
    env = stack[-1];
    v_81 = basic_elt(env, 5); // " </cn>"
    v_81 = Lprinc(nil, v_81);
    env = stack[-1];
    goto v_7;
v_9:
v_7:
    v_81 = stack[0];
    if (symbolp(v_81)) goto v_37;
    else goto v_38;
v_37:
    v_81 = stack[0];
    v_82 = Lintern(nil, v_81);
    env = stack[-1];
    v_81 = qvalue(basic_elt(env, 6)); // constants!*
    v_81 = Lmember(nil, v_82, v_81);
    if (v_81 == nil) goto v_43;
    v_81 = basic_elt(env, 7); // "<cn type=""constant""> "
    {   LispObject fn = basic_elt(env, 12); // printout
    v_81 = (*qfn1(fn))(fn, v_81);
    }
    env = stack[-1];
    v_81 = stack[0];
    v_81 = Lprinc(nil, v_81);
    env = stack[-1];
    v_81 = basic_elt(env, 5); // " </cn>"
    v_81 = Lprinc(nil, v_81);
    goto v_41;
v_43:
    v_81 = basic_elt(env, 8); // "<ci"
    {   LispObject fn = basic_elt(env, 12); // printout
    v_81 = (*qfn1(fn))(fn, v_81);
    }
    env = stack[-1];
    v_81 = stack[0];
    {   LispObject fn = basic_elt(env, 13); // listp
    v_81 = (*qfn1(fn))(fn, v_81);
    }
    env = stack[-1];
    if (v_81 == nil) goto v_61;
    v_81 = basic_elt(env, 9); // " type=""list""> "
    v_81 = Lprinc(nil, v_81);
    env = stack[-1];
    goto v_59;
v_61:
    v_81 = stack[0];
    v_81 = Lsimple_vectorp(nil, v_81);
    env = stack[-1];
    if (v_81 == nil) goto v_67;
    v_81 = basic_elt(env, 10); // " type=""vector""> "
    v_81 = Lprinc(nil, v_81);
    env = stack[-1];
    goto v_59;
v_67:
    v_81 = basic_elt(env, 4); // "> "
    v_81 = Lprinc(nil, v_81);
    env = stack[-1];
    goto v_59;
v_59:
    v_81 = stack[0];
    v_81 = Lprinc(nil, v_81);
    env = stack[-1];
    v_81 = basic_elt(env, 11); // " </ci>"
    v_81 = Lprinc(nil, v_81);
    goto v_41;
v_41:
    goto v_36;
v_38:
v_36:
    v_81 = nil;
    return onevalue(v_81);
}



// Code for ldt!-tvar

static LispObject CC_ldtKtvar(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_21, v_22, v_23;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_21 = v_2;
// end of prologue
    if (!car_legal(v_21)) v_21 = carerror(v_21); else
    v_21 = car(v_21);
    if (!car_legal(v_21)) v_21 = carerror(v_21); else
    v_21 = car(v_21);
    v_22 = v_21;
    v_21 = v_22;
    v_23 = basic_elt(env, 1); // df
    if (!consp(v_21)) goto v_11;
    v_21 = car(v_21);
    if (v_21 == v_23) goto v_10;
    else goto v_11;
v_10:
    v_21 = v_22;
    if (!car_legal(v_21)) v_21 = cdrerror(v_21); else
    v_21 = cdr(v_21);
    if (!car_legal(v_21)) v_21 = carerror(v_21); else
    v_21 = car(v_21);
    goto v_9;
v_11:
    v_21 = v_22;
    goto v_9;
    v_21 = nil;
v_9:
    return onevalue(v_21);
}



// Code for maprin

static LispObject CC_maprin(LispObject env,
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
    v_20 = v_2;
// end of prologue
    v_19 = qvalue(basic_elt(env, 1)); // outputhandler!*
    if (v_19 == nil) goto v_7;
    v_19 = qvalue(basic_elt(env, 1)); // outputhandler!*
    v_21 = basic_elt(env, 0); // maprin
        return Lapply2(nil, v_19, v_21, v_20);
v_7:
    v_19 = qvalue(basic_elt(env, 2)); // overflowed!*
    if (v_19 == nil) goto v_13;
    else goto v_14;
v_13:
    v_19 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {
        LispObject fn = basic_elt(env, 3); // maprint
        return (*qfn2(fn))(fn, v_20, v_19);
    }
v_14:
    v_19 = nil;
    return onevalue(v_19);
}



// Code for findnewvars

static LispObject CC_findnewvars(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_67;
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
    v_67 = stack[0];
    if (!consp(v_67)) goto v_6;
    else goto v_7;
v_6:
    v_67 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // genp
    v_67 = (*qfn1(fn))(fn, v_67);
    }
    if (v_67 == nil) goto v_12;
    v_67 = stack[0];
    return ncons(v_67);
v_12:
    v_67 = nil;
    goto v_10;
    v_67 = nil;
v_10:
    goto v_5;
v_7:
    v_67 = stack[0];
    stack[-3] = v_67;
v_27:
    v_67 = stack[-3];
    if (v_67 == nil) goto v_32;
    else goto v_33;
v_32:
    v_67 = nil;
    goto v_26;
v_33:
    v_67 = stack[-3];
    if (!car_legal(v_67)) v_67 = carerror(v_67); else
    v_67 = car(v_67);
    {   LispObject fn = basic_elt(env, 0); // findnewvars
    v_67 = (*qfn1(fn))(fn, v_67);
    }
    env = stack[-4];
    stack[-2] = v_67;
    v_67 = stack[-2];
    {   LispObject fn = basic_elt(env, 2); // lastpair
    v_67 = (*qfn1(fn))(fn, v_67);
    }
    env = stack[-4];
    stack[-1] = v_67;
    v_67 = stack[-3];
    if (!car_legal(v_67)) v_67 = cdrerror(v_67); else
    v_67 = cdr(v_67);
    stack[-3] = v_67;
    v_67 = stack[-1];
    if (!consp(v_67)) goto v_47;
    else goto v_48;
v_47:
    goto v_27;
v_48:
v_28:
    v_67 = stack[-3];
    if (v_67 == nil) goto v_52;
    else goto v_53;
v_52:
    v_67 = stack[-2];
    goto v_26;
v_53:
    stack[0] = stack[-1];
    v_67 = stack[-3];
    if (!car_legal(v_67)) v_67 = carerror(v_67); else
    v_67 = car(v_67);
    {   LispObject fn = basic_elt(env, 0); // findnewvars
    v_67 = (*qfn1(fn))(fn, v_67);
    }
    env = stack[-4];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_67);
    v_67 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // lastpair
    v_67 = (*qfn1(fn))(fn, v_67);
    }
    env = stack[-4];
    stack[-1] = v_67;
    v_67 = stack[-3];
    if (!car_legal(v_67)) v_67 = cdrerror(v_67); else
    v_67 = cdr(v_67);
    stack[-3] = v_67;
    goto v_28;
v_26:
    goto v_5;
    v_67 = nil;
v_5:
    return onevalue(v_67);
}



// Code for xord_gradlex

static LispObject CC_xord_gradlex(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_35 = stack[-1];
    if (!car_legal(v_35)) v_36 = carerror(v_35); else
    v_36 = car(v_35);
    v_35 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_36 == v_35) goto v_7;
    else goto v_8;
v_7:
    v_35 = nil;
    goto v_6;
v_8:
    v_35 = stack[0];
    if (!car_legal(v_35)) v_36 = carerror(v_35); else
    v_36 = car(v_35);
    v_35 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_36 == v_35) goto v_13;
    else goto v_14;
v_13:
    v_35 = lisp_true;
    goto v_6;
v_14:
    v_35 = stack[-1];
    stack[-2] = Llength(nil, v_35);
    env = stack[-3];
    v_35 = stack[0];
    v_35 = Llength(nil, v_35);
    env = stack[-3];
    if (equal(stack[-2], v_35)) goto v_19;
    else goto v_20;
v_19:
    v_36 = stack[-1];
    v_35 = stack[0];
    {
        LispObject fn = basic_elt(env, 1); // xord_lex
        return (*qfn2(fn))(fn, v_36, v_35);
    }
v_20:
    v_35 = stack[-1];
    stack[-1] = Llength(nil, v_35);
    env = stack[-3];
    v_35 = stack[0];
    v_35 = Llength(nil, v_35);
    {
        LispObject v_40 = stack[-1];
        return Lgreaterp_2(nil, v_40, v_35);
    }
    v_35 = nil;
v_6:
    return onevalue(v_35);
}



// Code for physopaeval

static LispObject CC_physopaeval(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_80 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // physopp
    v_80 = (*qfn1(fn))(fn, v_80);
    }
    env = stack[-1];
    if (v_80 == nil) goto v_10;
    v_80 = stack[0];
    if (!symbolp(v_80)) v_80 = nil;
    else { v_80 = qfastgets(v_80);
           if (v_80 != nil) { v_80 = elt(v_80, 46); // rvalue
#ifdef RECORD_GET
             if (v_80 != SPID_NOPROP)
                record_get(elt(fastget_names, 46), 1);
             else record_get(elt(fastget_names, 46), 0),
                v_80 = nil; }
           else record_get(elt(fastget_names, 46), 0); }
#else
             if (v_80 == SPID_NOPROP) v_80 = nil; }}
#endif
    v_82 = v_80;
    if (v_80 == nil) goto v_16;
    v_80 = v_82;
    if (!car_legal(v_80)) v_81 = carerror(v_80); else
    v_81 = car(v_80);
    v_80 = basic_elt(env, 1); // !*sq
    if (v_81 == v_80) goto v_21;
    else goto v_22;
v_21:
    v_80 = v_82;
    if (!car_legal(v_80)) v_80 = cdrerror(v_80); else
    v_80 = cdr(v_80);
    if (!car_legal(v_80)) v_80 = carerror(v_80); else
    v_80 = car(v_80);
    {
        LispObject fn = basic_elt(env, 4); // !*q2a
        return (*qfn1(fn))(fn, v_80);
    }
v_22:
    v_80 = v_82;
    goto v_20;
    v_80 = nil;
v_20:
    goto v_14;
v_16:
    v_80 = stack[0];
    if (!consp(v_80)) goto v_33;
    else goto v_34;
v_33:
    v_80 = stack[0];
    goto v_14;
v_34:
    v_80 = stack[0];
    if (!car_legal(v_80)) v_81 = carerror(v_80); else
    v_81 = car(v_80);
    v_80 = basic_elt(env, 2); // psimpfn
    v_80 = get(v_81, v_80);
    env = stack[-1];
    v_82 = v_80;
    if (v_80 == nil) goto v_38;
    v_81 = v_82;
    v_80 = stack[0];
        return Lapply1(nil, v_81, v_80);
v_38:
    v_80 = stack[0];
    if (!car_legal(v_80)) v_80 = carerror(v_80); else
    v_80 = car(v_80);
    if (!symbolp(v_80)) v_80 = nil;
    else { v_80 = qfastgets(v_80);
           if (v_80 != nil) { v_80 = elt(v_80, 9); // opmtch
#ifdef RECORD_GET
             if (v_80 != SPID_NOPROP)
                record_get(elt(fastget_names, 9), 1);
             else record_get(elt(fastget_names, 9), 0),
                v_80 = nil; }
           else record_get(elt(fastget_names, 9), 0); }
#else
             if (v_80 == SPID_NOPROP) v_80 = nil; }}
#endif
    if (v_80 == nil) goto v_47;
    v_80 = stack[0];
    {   LispObject fn = basic_elt(env, 5); // opmtch!*
    v_80 = (*qfn1(fn))(fn, v_80);
    }
    v_82 = v_80;
    if (v_80 == nil) goto v_47;
    v_80 = v_82;
    goto v_14;
v_47:
    v_80 = stack[0];
    goto v_14;
    v_80 = nil;
v_14:
    goto v_8;
v_10:
    v_80 = stack[0];
    if (!consp(v_80)) goto v_64;
    v_80 = stack[0];
    if (!car_legal(v_80)) v_81 = carerror(v_80); else
    v_81 = car(v_80);
    v_80 = basic_elt(env, 1); // !*sq
    v_80 = (v_81 == v_80 ? lisp_true : nil);
    goto v_62;
v_64:
    v_80 = nil;
    goto v_62;
    v_80 = nil;
v_62:
    if (v_80 == nil) goto v_60;
    v_80 = stack[0];
    if (!car_legal(v_80)) v_80 = cdrerror(v_80); else
    v_80 = cdr(v_80);
    if (!car_legal(v_80)) v_80 = carerror(v_80); else
    v_80 = car(v_80);
    {
        LispObject fn = basic_elt(env, 4); // !*q2a
        return (*qfn1(fn))(fn, v_80);
    }
v_60:
    v_80 = stack[0];
    goto v_8;
    v_80 = nil;
v_8:
    return onevalue(v_80);
}



// Code for contr1!-strand

static LispObject CC_contr1Kstrand(LispObject env,
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
    v_11 = v_3;
    v_12 = v_2;
// end of prologue
    stack[-2] = v_12;
    stack[-1] = v_11;
    stack[0] = nil;
    v_11 = nil;
    v_11 = ncons(v_11);
    env = stack[-3];
    {
        LispObject v_16 = stack[-2];
        LispObject v_17 = stack[-1];
        LispObject v_18 = stack[0];
        LispObject fn = basic_elt(env, 1); // contr2!-strand
        return (*qfn4up(fn))(fn, v_16, v_17, v_18, v_11);
    }
}



// Code for simp!-sign

static LispObject CC_simpKsign(LispObject env,
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
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_8 = v_2;
// end of prologue
    if (!car_legal(v_8)) v_8 = carerror(v_8); else
    v_8 = car(v_8);
    {   LispObject fn = basic_elt(env, 1); // reval
    v_8 = (*qfn1(fn))(fn, v_8);
    }
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // simp!-sign1
        return (*qfn1(fn))(fn, v_8);
    }
}



// Code for sqp

static LispObject CC_sqp(LispObject env,
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
    v_26 = stack[0];
    v_26 = Lconsp(nil, v_26);
    env = stack[-1];
    if (v_26 == nil) goto v_6;
    else goto v_7;
v_6:
    v_26 = nil;
    goto v_5;
v_7:
    v_26 = stack[0];
    if (!car_legal(v_26)) v_26 = carerror(v_26); else
    v_26 = car(v_26);
    {   LispObject fn = basic_elt(env, 1); // sfpx
    v_26 = (*qfn1(fn))(fn, v_26);
    }
    env = stack[-1];
    if (v_26 == nil) goto v_15;
    else goto v_16;
v_15:
    v_26 = nil;
    goto v_14;
v_16:
    v_26 = stack[0];
    if (!car_legal(v_26)) v_26 = cdrerror(v_26); else
    v_26 = cdr(v_26);
    {
        LispObject fn = basic_elt(env, 1); // sfpx
        return (*qfn1(fn))(fn, v_26);
    }
    v_26 = nil;
v_14:
    goto v_5;
    v_26 = nil;
v_5:
    return onevalue(v_26);
}



// Code for mo_from_a

static LispObject CC_mo_from_a(LispObject env,
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
    stack_popper stack_popper_var(6);
// copy arguments values to proper place
    stack[-3] = v_2;
// end of prologue
    stack[0] = stack[-3];
    v_80 = qvalue(basic_elt(env, 1)); // cali!=basering
    {   LispObject fn = basic_elt(env, 3); // ring_all_names
    v_80 = (*qfn1(fn))(fn, v_80);
    }
    env = stack[-5];
    v_80 = Lmember(nil, stack[0], v_80);
    if (v_80 == nil) goto v_6;
    else goto v_7;
v_6:
    v_81 = stack[-3];
    v_80 = basic_elt(env, 2); // "dpoly variable"
    {
        LispObject fn = basic_elt(env, 4); // typerr
        return (*qfn2(fn))(fn, v_81, v_80);
    }
v_7:
    v_80 = qvalue(basic_elt(env, 1)); // cali!=basering
    {   LispObject fn = basic_elt(env, 3); // ring_all_names
    v_80 = (*qfn1(fn))(fn, v_80);
    }
    env = stack[-5];
    stack[-4] = v_80;
    v_80 = stack[-4];
    if (v_80 == nil) goto v_32;
    else goto v_33;
v_32:
    v_80 = nil;
    goto v_26;
v_33:
    v_80 = stack[-4];
    if (!car_legal(v_80)) v_80 = carerror(v_80); else
    v_80 = car(v_80);
    v_81 = v_80;
    v_80 = stack[-3];
    if (equal(v_81, v_80)) goto v_42;
    else goto v_43;
v_42:
    v_80 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_41;
v_43:
    v_80 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_41;
    v_80 = nil;
v_41:
    v_80 = ncons(v_80);
    env = stack[-5];
    stack[-1] = v_80;
    stack[-2] = v_80;
v_27:
    v_80 = stack[-4];
    if (!car_legal(v_80)) v_80 = cdrerror(v_80); else
    v_80 = cdr(v_80);
    stack[-4] = v_80;
    v_80 = stack[-4];
    if (v_80 == nil) goto v_54;
    else goto v_55;
v_54:
    v_80 = stack[-2];
    goto v_26;
v_55:
    stack[0] = stack[-1];
    v_80 = stack[-4];
    if (!car_legal(v_80)) v_80 = carerror(v_80); else
    v_80 = car(v_80);
    v_81 = v_80;
    v_80 = stack[-3];
    if (equal(v_81, v_80)) goto v_65;
    else goto v_66;
v_65:
    v_80 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_64;
v_66:
    v_80 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_64;
    v_80 = nil;
v_64:
    v_80 = ncons(v_80);
    env = stack[-5];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_80);
    v_80 = stack[-1];
    if (!car_legal(v_80)) v_80 = cdrerror(v_80); else
    v_80 = cdr(v_80);
    stack[-1] = v_80;
    goto v_27;
v_26:
    {   LispObject fn = basic_elt(env, 5); // mo!=shorten
    v_80 = (*qfn1(fn))(fn, v_80);
    }
    env = stack[-5];
    stack[0] = v_80;
    {   LispObject fn = basic_elt(env, 6); // mo!=deglist
    v_80 = (*qfn1(fn))(fn, v_80);
    }
    {
        LispObject v_87 = stack[0];
        return cons(v_87, v_80);
    }
    goto v_5;
    v_80 = nil;
v_5:
    return onevalue(v_80);
}



// Code for get_action

static LispObject CC_get_action(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_43, v_44, v_45, v_46;
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
    v_43 = v_2;
// end of prologue
    v_44 = qvalue(basic_elt(env, 1)); // parser_action_table
    v_43 = Lgetv(nil, v_44, v_43);
    v_44 = v_43;
    if (!car_legal(v_44)) v_44 = carerror(v_44); else
    v_44 = car(v_44);
    v_46 = v_44;
    if (!car_legal(v_43)) v_43 = cdrerror(v_43); else
    v_43 = cdr(v_43);
    v_45 = v_43;
v_19:
    v_43 = v_46;
    if (v_43 == nil) goto v_22;
    else goto v_23;
v_22:
    goto v_18;
v_23:
    v_43 = v_46;
    if (!car_legal(v_43)) v_43 = carerror(v_43); else
    v_43 = car(v_43);
    if (!car_legal(v_43)) v_44 = carerror(v_43); else
    v_44 = car(v_43);
    v_43 = stack[0];
    if (equal(v_44, v_43)) goto v_28;
    else goto v_29;
v_28:
    v_43 = v_46;
    if (!car_legal(v_43)) v_43 = carerror(v_43); else
    v_43 = car(v_43);
    if (!car_legal(v_43)) v_43 = cdrerror(v_43); else
    v_43 = cdr(v_43);
    v_45 = v_43;
    v_43 = nil;
    v_46 = v_43;
    goto v_27;
v_29:
    v_43 = v_46;
    if (!car_legal(v_43)) v_43 = cdrerror(v_43); else
    v_43 = cdr(v_43);
    v_46 = v_43;
    goto v_27;
v_27:
    goto v_19;
v_18:
    v_43 = v_45;
    return onevalue(v_43);
}



// Code for read_typed_name

static LispObject CC_read_typed_name(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil);
    stack_popper stack_popper_var(2);
// end of prologue
    v_21 = qvalue(basic_elt(env, 1)); // cursym!*
    stack[0] = v_21;
    {   LispObject fn = basic_elt(env, 4); // scan
    v_21 = (*qfn0(fn))(fn);
    }
    env = stack[-1];
    v_22 = qvalue(basic_elt(env, 1)); // cursym!*
    v_21 = basic_elt(env, 2); // !*colon!*
    if (v_22 == v_21) goto v_11;
    v_21 = stack[0];
    v_22 = basic_elt(env, 3); // general
    return cons(v_21, v_22);
v_11:
    {   LispObject fn = basic_elt(env, 4); // scan
    v_21 = (*qfn0(fn))(fn);
    }
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 5); // read_type
    v_21 = (*qfn0(fn))(fn);
    }
    {
        LispObject v_24 = stack[0];
        return cons(v_24, v_21);
    }
    return onevalue(v_21);
}



// Code for rl_bestgaussp

static LispObject CC_rl_bestgaussp(LispObject env,
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
    stack[0] = qvalue(basic_elt(env, 1)); // rl_bestgaussp!*
    v_8 = ncons(v_8);
    env = stack[-1];
    {
        LispObject v_10 = stack[0];
        LispObject fn = basic_elt(env, 2); // apply
        return (*qfn2(fn))(fn, v_10, v_8);
    }
}



// Code for mkkl

static LispObject CC_mkkl(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    v_25 = v_3;
    v_26 = v_2;
// end of prologue
v_8:
    v_27 = v_26;
    if (v_27 == nil) goto v_11;
    else goto v_12;
v_11:
    goto v_7;
v_12:
    v_27 = v_26;
    if (!car_legal(v_27)) v_27 = cdrerror(v_27); else
    v_27 = cdr(v_27);
    stack[0] = v_27;
    if (!car_legal(v_26)) v_26 = carerror(v_26); else
    v_26 = car(v_26);
    v_25 = cons(v_26, v_25);
    env = stack[-1];
    v_25 = ncons(v_25);
    env = stack[-1];
    v_26 = stack[0];
    goto v_8;
    v_25 = nil;
v_7:
    return onevalue(v_25);
}



// Code for findremainder

static LispObject CC_findremainder(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    v_30 = v_3;
    v_31 = v_2;
// end of prologue
    stack[0] = v_30;
v_8:
    v_30 = stack[0];
    if (v_30 == nil) goto v_12;
    else goto v_13;
v_12:
    goto v_7;
v_13:
    v_30 = stack[0];
    if (!car_legal(v_30)) v_30 = carerror(v_30); else
    v_30 = car(v_30);
    v_32 = v_31;
    v_31 = v_30;
    if (!car_legal(v_30)) v_30 = carerror(v_30); else
    v_30 = car(v_30);
    if (!car_legal(v_30)) v_30 = carerror(v_30); else
    v_30 = car(v_30);
    if (!car_legal(v_30)) v_30 = carerror(v_30); else
    v_30 = car(v_30);
    {   LispObject fn = basic_elt(env, 1); // wupseudodivide
    v_30 = (*qfn3(fn))(fn, v_32, v_31, v_30);
    }
    env = stack[-1];
    if (!car_legal(v_30)) v_30 = cdrerror(v_30); else
    v_30 = cdr(v_30);
    v_31 = v_30;
    v_30 = stack[0];
    if (!car_legal(v_30)) v_30 = cdrerror(v_30); else
    v_30 = cdr(v_30);
    stack[0] = v_30;
    goto v_8;
v_7:
    v_30 = v_31;
    return onevalue(v_30);
}



// Code for prepsq!*

static LispObject CC_prepsqH(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_230, v_231, v_232;
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
    stack[-9] = v_2;
// end of prologue
// Binding !*combinelogs
// FLUIDBIND: reloadenv=11 litvec-offset=1 saveloc=8
{   bind_fluid_stack bind_fluid_var(-11, 1, -8);
    setvalue(basic_elt(env, 1), nil); // !*combinelogs
    v_230 = stack[-9];
    if (!car_legal(v_230)) v_230 = carerror(v_230); else
    v_230 = car(v_230);
    if (v_230 == nil) goto v_12;
    else goto v_13;
v_12:
    v_230 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_9;
v_13:
    v_230 = qvalue(basic_elt(env, 2)); // ordl!*
    {   LispObject fn = basic_elt(env, 13); // setkorder
    v_230 = (*qfn1(fn))(fn, v_230);
    }
    env = stack[-11];
    stack[-10] = v_230;
    v_230 = qvalue(basic_elt(env, 3)); // factors!*
    stack[-7] = v_230;
v_27:
    v_230 = stack[-7];
    if (v_230 == nil) goto v_32;
    else goto v_33;
v_32:
    v_230 = nil;
    v_231 = v_230;
    goto v_26;
v_33:
    v_230 = stack[-7];
    if (!car_legal(v_230)) v_230 = carerror(v_230); else
    v_230 = car(v_230);
    v_231 = v_230;
    v_230 = v_231;
    if (symbolp(v_230)) goto v_42;
    v_230 = nil;
    goto v_40;
v_42:
    v_232 = v_231;
    v_230 = basic_elt(env, 4); // prepsq!*fn
    v_230 = get(v_232, v_230);
    env = stack[-11];
    v_232 = v_230;
    if (v_230 == nil) goto v_46;
    v_230 = stack[-9];
    v_230 = Lapply2(nil, v_232, v_230, v_231);
    env = stack[-11];
    goto v_40;
v_46:
    v_230 = v_231;
    if (!symbolp(v_230)) v_230 = nil;
    else { v_230 = qfastgets(v_230);
           if (v_230 != nil) { v_230 = elt(v_230, 24); // klist
#ifdef RECORD_GET
             if (v_230 != SPID_NOPROP)
                record_get(elt(fastget_names, 24), 1);
             else record_get(elt(fastget_names, 24), 0),
                v_230 = nil; }
           else record_get(elt(fastget_names, 24), 0); }
#else
             if (v_230 == SPID_NOPROP) v_230 = nil; }}
#endif
    stack[-3] = v_230;
    v_230 = stack[-3];
    if (v_230 == nil) goto v_66;
    else goto v_67;
v_66:
    v_230 = nil;
    goto v_60;
v_67:
    v_230 = stack[-3];
    if (!car_legal(v_230)) v_230 = carerror(v_230); else
    v_230 = car(v_230);
    if (!car_legal(v_230)) v_230 = carerror(v_230); else
    v_230 = car(v_230);
    v_230 = ncons(v_230);
    env = stack[-11];
    stack[-1] = v_230;
    stack[-2] = v_230;
v_61:
    v_230 = stack[-3];
    if (!car_legal(v_230)) v_230 = cdrerror(v_230); else
    v_230 = cdr(v_230);
    stack[-3] = v_230;
    v_230 = stack[-3];
    if (v_230 == nil) goto v_80;
    else goto v_81;
v_80:
    v_230 = stack[-2];
    goto v_60;
v_81:
    stack[0] = stack[-1];
    v_230 = stack[-3];
    if (!car_legal(v_230)) v_230 = carerror(v_230); else
    v_230 = car(v_230);
    if (!car_legal(v_230)) v_230 = carerror(v_230); else
    v_230 = car(v_230);
    v_230 = ncons(v_230);
    env = stack[-11];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_230);
    v_230 = stack[-1];
    if (!car_legal(v_230)) v_230 = cdrerror(v_230); else
    v_230 = cdr(v_230);
    stack[-1] = v_230;
    goto v_61;
v_60:
    goto v_40;
    v_230 = nil;
v_40:
    stack[-6] = v_230;
    v_230 = stack[-6];
    {   LispObject fn = basic_elt(env, 14); // lastpair
    v_230 = (*qfn1(fn))(fn, v_230);
    }
    env = stack[-11];
    stack[-5] = v_230;
    v_230 = stack[-7];
    if (!car_legal(v_230)) v_230 = cdrerror(v_230); else
    v_230 = cdr(v_230);
    stack[-7] = v_230;
    v_230 = stack[-5];
    if (!consp(v_230)) goto v_100;
    else goto v_101;
v_100:
    goto v_27;
v_101:
v_28:
    v_230 = stack[-7];
    if (v_230 == nil) goto v_105;
    else goto v_106;
v_105:
    v_230 = stack[-6];
    v_231 = v_230;
    goto v_26;
v_106:
    stack[-4] = stack[-5];
    v_230 = stack[-7];
    if (!car_legal(v_230)) v_230 = carerror(v_230); else
    v_230 = car(v_230);
    v_231 = v_230;
    if (symbolp(v_231)) goto v_116;
    v_230 = nil;
    goto v_114;
v_116:
    v_232 = v_230;
    v_231 = basic_elt(env, 4); // prepsq!*fn
    v_231 = get(v_232, v_231);
    env = stack[-11];
    v_232 = v_231;
    if (v_231 == nil) goto v_120;
    v_231 = stack[-9];
    v_230 = Lapply2(nil, v_232, v_231, v_230);
    env = stack[-11];
    goto v_114;
v_120:
    if (!symbolp(v_230)) v_230 = nil;
    else { v_230 = qfastgets(v_230);
           if (v_230 != nil) { v_230 = elt(v_230, 24); // klist
#ifdef RECORD_GET
             if (v_230 != SPID_NOPROP)
                record_get(elt(fastget_names, 24), 1);
             else record_get(elt(fastget_names, 24), 0),
                v_230 = nil; }
           else record_get(elt(fastget_names, 24), 0); }
#else
             if (v_230 == SPID_NOPROP) v_230 = nil; }}
#endif
    stack[-3] = v_230;
    v_230 = stack[-3];
    if (v_230 == nil) goto v_140;
    else goto v_141;
v_140:
    v_230 = nil;
    goto v_134;
v_141:
    v_230 = stack[-3];
    if (!car_legal(v_230)) v_230 = carerror(v_230); else
    v_230 = car(v_230);
    if (!car_legal(v_230)) v_230 = carerror(v_230); else
    v_230 = car(v_230);
    v_230 = ncons(v_230);
    env = stack[-11];
    stack[-1] = v_230;
    stack[-2] = v_230;
v_135:
    v_230 = stack[-3];
    if (!car_legal(v_230)) v_230 = cdrerror(v_230); else
    v_230 = cdr(v_230);
    stack[-3] = v_230;
    v_230 = stack[-3];
    if (v_230 == nil) goto v_154;
    else goto v_155;
v_154:
    v_230 = stack[-2];
    goto v_134;
v_155:
    stack[0] = stack[-1];
    v_230 = stack[-3];
    if (!car_legal(v_230)) v_230 = carerror(v_230); else
    v_230 = car(v_230);
    if (!car_legal(v_230)) v_230 = carerror(v_230); else
    v_230 = car(v_230);
    v_230 = ncons(v_230);
    env = stack[-11];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_230);
    v_230 = stack[-1];
    if (!car_legal(v_230)) v_230 = cdrerror(v_230); else
    v_230 = cdr(v_230);
    stack[-1] = v_230;
    goto v_135;
v_134:
    goto v_114;
    v_230 = nil;
v_114:
    if (!car_legal(stack[-4])) rplacd_fails(stack[-4]);
    setcdr(stack[-4], v_230);
    v_230 = stack[-5];
    {   LispObject fn = basic_elt(env, 14); // lastpair
    v_230 = (*qfn1(fn))(fn, v_230);
    }
    env = stack[-11];
    stack[-5] = v_230;
    v_230 = stack[-7];
    if (!car_legal(v_230)) v_230 = cdrerror(v_230); else
    v_230 = cdr(v_230);
    stack[-7] = v_230;
    goto v_28;
v_26:
    v_230 = basic_elt(env, 5); // ordop
    {   LispObject fn = basic_elt(env, 15); // sort
    stack[0] = (*qfn2(fn))(fn, v_231, v_230);
    }
    env = stack[-11];
    v_231 = qvalue(basic_elt(env, 3)); // factors!*
    v_230 = basic_elt(env, 5); // ordop
    {   LispObject fn = basic_elt(env, 15); // sort
    v_231 = (*qfn2(fn))(fn, v_231, v_230);
    }
    env = stack[-11];
    v_230 = qvalue(basic_elt(env, 2)); // ordl!*
    v_230 = Lappend_2(nil, v_231, v_230);
    env = stack[-11];
    v_230 = Lappend_2(nil, stack[0], v_230);
    env = stack[-11];
    {   LispObject fn = basic_elt(env, 13); // setkorder
    v_230 = (*qfn1(fn))(fn, v_230);
    }
    env = stack[-11];
    v_231 = qvalue(basic_elt(env, 6)); // kord!*
    v_230 = stack[-10];
    if (equal(v_231, v_230)) goto v_186;
    v_230 = lisp_true;
    goto v_184;
v_186:
    v_230 = qvalue(basic_elt(env, 7)); // wtl!*
    goto v_184;
    v_230 = nil;
v_184:
    if (v_230 == nil) goto v_182;
    v_230 = stack[-9];
    if (!car_legal(v_230)) v_230 = carerror(v_230); else
    v_230 = car(v_230);
    {   LispObject fn = basic_elt(env, 16); // formop
    stack[0] = (*qfn1(fn))(fn, v_230);
    }
    env = stack[-11];
    v_230 = stack[-9];
    if (!car_legal(v_230)) v_230 = cdrerror(v_230); else
    v_230 = cdr(v_230);
    {   LispObject fn = basic_elt(env, 16); // formop
    v_230 = (*qfn1(fn))(fn, v_230);
    }
    env = stack[-11];
    v_230 = cons(stack[0], v_230);
    env = stack[-11];
    stack[-9] = v_230;
    goto v_180;
v_182:
v_180:
    v_230 = qvalue(basic_elt(env, 8)); // !*rat
    if (v_230 == nil) goto v_204;
    else goto v_202;
v_204:
    v_230 = qvalue(basic_elt(env, 9)); // !*div
    if (v_230 == nil) goto v_207;
    else goto v_202;
v_207:
    v_230 = qvalue(basic_elt(env, 10)); // upl!*
    if (v_230 == nil) goto v_210;
    else goto v_202;
v_210:
    v_230 = qvalue(basic_elt(env, 11)); // dnl!*
    if (v_230 == nil) goto v_212;
    else goto v_202;
v_212:
    goto v_203;
v_202:
    v_230 = stack[-9];
    if (!car_legal(v_230)) v_232 = carerror(v_230); else
    v_232 = car(v_230);
    v_230 = stack[-9];
    if (!car_legal(v_230)) v_231 = cdrerror(v_230); else
    v_231 = cdr(v_230);
    v_230 = nil;
    {   LispObject fn = basic_elt(env, 17); // prepsq!*1
    v_230 = (*qfn3(fn))(fn, v_232, v_231, v_230);
    }
    env = stack[-11];
    {   LispObject fn = basic_elt(env, 18); // replus
    v_230 = (*qfn1(fn))(fn, v_230);
    }
    env = stack[-11];
    goto v_201;
v_203:
    v_231 = stack[-9];
    v_230 = basic_elt(env, 12); // prepsq!*2
    {   LispObject fn = basic_elt(env, 19); // sqform
    v_230 = (*qfn2(fn))(fn, v_231, v_230);
    }
    env = stack[-11];
    goto v_201;
    v_230 = nil;
v_201:
    stack[-9] = v_230;
    v_230 = stack[-10];
    {   LispObject fn = basic_elt(env, 13); // setkorder
    v_230 = (*qfn1(fn))(fn, v_230);
    }
    v_230 = stack[-9];
v_9:
    ;}  // end of a binding scope
    return onevalue(v_230);
}



// Code for talp_eqtp

static LispObject CC_talp_eqtp(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
v_7:
    v_79 = stack[-1];
    if (!consp(v_79)) goto v_14;
    else goto v_15;
v_14:
    v_79 = lisp_true;
    goto v_13;
v_15:
    v_79 = stack[0];
    v_79 = (consp(v_79) ? nil : lisp_true);
    goto v_13;
    v_79 = nil;
v_13:
    if (v_79 == nil) goto v_11;
    v_80 = stack[-1];
    v_79 = stack[0];
    if (v_80 == v_79) goto v_24;
    else goto v_25;
v_24:
    v_79 = lisp_true;
    goto v_6;
v_25:
    v_79 = nil;
    goto v_6;
    goto v_9;
v_11:
    v_79 = stack[-1];
    if (!car_legal(v_79)) v_79 = carerror(v_79); else
    v_79 = car(v_79);
    if (!consp(v_79)) goto v_36;
    else goto v_37;
v_36:
    v_79 = stack[0];
    if (!car_legal(v_79)) v_79 = carerror(v_79); else
    v_79 = car(v_79);
    v_79 = (consp(v_79) ? nil : lisp_true);
    goto v_35;
v_37:
    v_79 = nil;
    goto v_35;
    v_79 = nil;
v_35:
    if (v_79 == nil) goto v_33;
    v_79 = stack[-1];
    if (!car_legal(v_79)) v_80 = carerror(v_79); else
    v_80 = car(v_79);
    v_79 = stack[0];
    if (!car_legal(v_79)) v_79 = carerror(v_79); else
    v_79 = car(v_79);
    if (v_80 == v_79) goto v_48;
    else goto v_49;
v_48:
    v_79 = stack[-1];
    if (!car_legal(v_79)) v_79 = cdrerror(v_79); else
    v_79 = cdr(v_79);
    stack[-1] = v_79;
    v_79 = stack[0];
    if (!car_legal(v_79)) v_79 = cdrerror(v_79); else
    v_79 = cdr(v_79);
    stack[0] = v_79;
    goto v_7;
v_49:
    v_79 = nil;
    goto v_6;
    goto v_9;
v_33:
    v_79 = stack[-1];
    if (!car_legal(v_79)) v_80 = carerror(v_79); else
    v_80 = car(v_79);
    v_79 = stack[0];
    if (!car_legal(v_79)) v_79 = carerror(v_79); else
    v_79 = car(v_79);
    {   LispObject fn = basic_elt(env, 0); // talp_eqtp
    v_79 = (*qfn2(fn))(fn, v_80, v_79);
    }
    env = stack[-2];
    if (v_79 == nil) goto v_66;
    v_79 = stack[-1];
    if (!car_legal(v_79)) v_79 = cdrerror(v_79); else
    v_79 = cdr(v_79);
    stack[-1] = v_79;
    v_79 = stack[0];
    if (!car_legal(v_79)) v_79 = cdrerror(v_79); else
    v_79 = cdr(v_79);
    stack[0] = v_79;
    goto v_7;
v_66:
    v_79 = nil;
    goto v_6;
    goto v_9;
v_9:
    v_79 = nil;
v_6:
    return onevalue(v_79);
}



// Code for qqe_number!-of!-adds!-in!-qterm

static LispObject CC_qqe_numberKofKaddsKinKqterm(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
v_6:
    v_27 = stack[0];
    if (!consp(v_27)) goto v_9;
    else goto v_10;
v_9:
    v_27 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_5;
v_10:
    v_27 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // qqe_op
    v_28 = (*qfn1(fn))(fn, v_27);
    }
    env = stack[-1];
    v_27 = basic_elt(env, 1); // (ladd radd)
    v_27 = Lmemq(nil, v_28, v_27);
    if (v_27 == nil) goto v_14;
    v_27 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // qqe_arg2r
    v_27 = (*qfn1(fn))(fn, v_27);
    }
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 0); // qqe_number!-of!-adds!-in!-qterm
    v_27 = (*qfn1(fn))(fn, v_27);
    }
    return add1(v_27);
v_14:
    v_27 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // qqe_arg2l
    v_27 = (*qfn1(fn))(fn, v_27);
    }
    env = stack[-1];
    stack[0] = v_27;
    goto v_6;
    v_27 = nil;
v_5:
    return onevalue(v_27);
}



// Code for subf

static LispObject CC_subf(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_146, v_147;
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
// Binding alglist!*
// FLUIDBIND: reloadenv=9 litvec-offset=1 saveloc=8
{   bind_fluid_stack bind_fluid_var(-9, 1, -8);
    setvalue(basic_elt(env, 1), nil); // alglist!*
    stack[-5] = nil;
    stack[-4] = nil;
    v_146 = nil;
    v_146 = ncons(v_146);
    env = stack[-9];
    setvalue(basic_elt(env, 1), v_146); // alglist!*
    v_146 = stack[-7];
    if (!consp(v_146)) goto v_20;
    else goto v_21;
v_20:
    v_146 = lisp_true;
    goto v_19;
v_21:
    v_146 = stack[-7];
    if (!car_legal(v_146)) v_146 = carerror(v_146); else
    v_146 = car(v_146);
    v_146 = (consp(v_146) ? nil : lisp_true);
    goto v_19;
    v_146 = nil;
v_19:
    if (v_146 == nil) goto v_17;
    v_146 = stack[-7];
    {   LispObject fn = basic_elt(env, 5); // !*d2q
    v_146 = (*qfn1(fn))(fn, v_146);
    }
    goto v_11;
v_17:
    v_146 = qvalue(basic_elt(env, 2)); // ncmp!*
    if (v_146 == nil) goto v_32;
    v_146 = stack[-7];
    {   LispObject fn = basic_elt(env, 6); // noncomexpf
    v_146 = (*qfn1(fn))(fn, v_146);
    }
    env = stack[-9];
    if (v_146 == nil) goto v_32;
    v_147 = stack[-7];
    v_146 = stack[-6];
    {   LispObject fn = basic_elt(env, 7); // subf1
    v_146 = (*qfn2(fn))(fn, v_147, v_146);
    }
    goto v_11;
v_32:
    v_146 = stack[-6];
    stack[-3] = v_146;
    v_146 = stack[-3];
    if (v_146 == nil) goto v_52;
    else goto v_53;
v_52:
    v_146 = nil;
    stack[0] = v_146;
    goto v_47;
v_53:
    v_146 = stack[-3];
    if (!car_legal(v_146)) v_146 = carerror(v_146); else
    v_146 = car(v_146);
    if (!car_legal(v_146)) v_146 = carerror(v_146); else
    v_146 = car(v_146);
    v_146 = ncons(v_146);
    env = stack[-9];
    stack[-1] = v_146;
    stack[-2] = v_146;
v_48:
    v_146 = stack[-3];
    if (!car_legal(v_146)) v_146 = cdrerror(v_146); else
    v_146 = cdr(v_146);
    stack[-3] = v_146;
    v_146 = stack[-3];
    if (v_146 == nil) goto v_66;
    else goto v_67;
v_66:
    v_146 = stack[-2];
    stack[0] = v_146;
    goto v_47;
v_67:
    stack[0] = stack[-1];
    v_146 = stack[-3];
    if (!car_legal(v_146)) v_146 = carerror(v_146); else
    v_146 = car(v_146);
    if (!car_legal(v_146)) v_146 = carerror(v_146); else
    v_146 = car(v_146);
    v_146 = ncons(v_146);
    env = stack[-9];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_146);
    v_146 = stack[-1];
    if (!car_legal(v_146)) v_146 = cdrerror(v_146); else
    v_146 = cdr(v_146);
    stack[-1] = v_146;
    goto v_48;
v_47:
    v_147 = stack[-7];
    v_146 = nil;
    {   LispObject fn = basic_elt(env, 8); // kernord
    v_146 = (*qfn2(fn))(fn, v_147, v_146);
    }
    env = stack[-9];
    {   LispObject fn = basic_elt(env, 9); // intersection
    v_146 = (*qfn2(fn))(fn, stack[0], v_146);
    }
    env = stack[-9];
    v_146 = Lreverse(nil, v_146);
    env = stack[-9];
    stack[0] = v_146;
    v_146 = stack[0];
    {   LispObject fn = basic_elt(env, 10); // setkorder
    v_146 = (*qfn1(fn))(fn, v_146);
    }
    env = stack[-9];
    stack[0] = v_146;
    v_146 = stack[-7];
    {   LispObject fn = basic_elt(env, 11); // reorder
    v_147 = (*qfn1(fn))(fn, v_146);
    }
    env = stack[-9];
    v_146 = stack[-6];
    {   LispObject fn = basic_elt(env, 7); // subf1
    v_146 = (*qfn2(fn))(fn, v_147, v_146);
    }
    env = stack[-9];
    stack[-7] = v_146;
v_91:
    v_147 = stack[-7];
    v_146 = stack[-4];
    v_146 = Lmember(nil, v_147, v_146);
    if (v_146 == nil) goto v_98;
    else goto v_99;
v_98:
    stack[-1] = basic_elt(env, 3); // expt
    v_146 = stack[-7];
    if (!car_legal(v_146)) v_146 = carerror(v_146); else
    v_146 = car(v_146);
    {   LispObject fn = basic_elt(env, 12); // kernels
    v_146 = (*qfn1(fn))(fn, v_146);
    }
    env = stack[-9];
    v_146 = Latsoc(nil, stack[-1], v_146);
    if (v_146 == nil) goto v_107;
    else goto v_106;
v_107:
    stack[-1] = basic_elt(env, 3); // expt
    v_146 = stack[-7];
    if (!car_legal(v_146)) v_146 = cdrerror(v_146); else
    v_146 = cdr(v_146);
    {   LispObject fn = basic_elt(env, 12); // kernels
    v_146 = (*qfn1(fn))(fn, v_146);
    }
    env = stack[-9];
    v_146 = Latsoc(nil, stack[-1], v_146);
    if (v_146 == nil) goto v_113;
    else goto v_106;
v_113:
    v_146 = nil;
    goto v_104;
v_106:
    v_146 = stack[-7];
    {   LispObject fn = basic_elt(env, 13); // prepsq
    v_147 = (*qfn1(fn))(fn, v_146);
    }
    env = stack[-9];
    stack[-5] = v_147;
    v_146 = qvalue(basic_elt(env, 4)); // varstack!*
    v_146 = Lmember(nil, v_147, v_146);
    v_146 = (v_146 == nil ? lisp_true : nil);
    goto v_104;
    v_146 = nil;
v_104:
    goto v_97;
v_99:
    v_146 = nil;
    goto v_97;
    v_146 = nil;
v_97:
    if (v_146 == nil) goto v_94;
    else goto v_95;
v_94:
    goto v_90;
v_95:
    v_147 = stack[-7];
    v_146 = stack[-4];
    v_146 = cons(v_147, v_146);
    env = stack[-9];
    stack[-4] = v_146;
    v_146 = stack[-5];
    {   LispObject fn = basic_elt(env, 14); // simp
    v_146 = (*qfn1(fn))(fn, v_146);
    }
    env = stack[-9];
    stack[-7] = v_146;
    goto v_91;
v_90:
    v_146 = stack[0];
    {   LispObject fn = basic_elt(env, 10); // setkorder
    v_146 = (*qfn1(fn))(fn, v_146);
    }
    env = stack[-9];
    v_146 = stack[-7];
    if (!car_legal(v_146)) v_146 = carerror(v_146); else
    v_146 = car(v_146);
    {   LispObject fn = basic_elt(env, 11); // reorder
    stack[0] = (*qfn1(fn))(fn, v_146);
    }
    env = stack[-9];
    v_146 = stack[-7];
    if (!car_legal(v_146)) v_146 = cdrerror(v_146); else
    v_146 = cdr(v_146);
    {   LispObject fn = basic_elt(env, 11); // reorder
    v_146 = (*qfn1(fn))(fn, v_146);
    }
    env = stack[-9];
    v_146 = cons(stack[0], v_146);
v_11:
    ;}  // end of a binding scope
    return onevalue(v_146);
}



// Code for cl_nnf1

static LispObject CC_cl_nnf1(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_275, v_276, v_277;
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
    stack[-2] = v_2;
// end of prologue
v_1:
    v_275 = stack[-2];
    if (!consp(v_275)) goto v_10;
    else goto v_11;
v_10:
    v_275 = stack[-2];
    goto v_9;
v_11:
    v_275 = stack[-2];
    if (!car_legal(v_275)) v_275 = carerror(v_275); else
    v_275 = car(v_275);
    goto v_9;
    v_275 = nil;
v_9:
    v_277 = v_275;
    v_276 = v_277;
    v_275 = basic_elt(env, 1); // not
    if (v_276 == v_275) goto v_20;
    else goto v_21;
v_20:
    v_275 = stack[-2];
    if (!car_legal(v_275)) v_275 = cdrerror(v_275); else
    v_275 = cdr(v_275);
    if (!car_legal(v_275)) v_276 = carerror(v_275); else
    v_276 = car(v_275);
    v_275 = stack[-4];
    v_275 = (v_275 == nil ? lisp_true : nil);
    stack[-2] = v_276;
    stack[-4] = v_275;
    goto v_1;
v_21:
    v_276 = v_277;
    v_275 = basic_elt(env, 2); // impl
    if (v_276 == v_275) goto v_32;
    else goto v_33;
v_32:
    v_276 = basic_elt(env, 3); // or
    v_275 = stack[-4];
    {   LispObject fn = basic_elt(env, 13); // cl_cflip
    stack[-1] = (*qfn2(fn))(fn, v_276, v_275);
    }
    env = stack[-6];
    v_275 = stack[-2];
    if (!car_legal(v_275)) v_275 = cdrerror(v_275); else
    v_275 = cdr(v_275);
    if (!car_legal(v_275)) v_276 = carerror(v_275); else
    v_276 = car(v_275);
    v_275 = stack[-4];
    v_275 = (v_275 == nil ? lisp_true : nil);
    {   LispObject fn = basic_elt(env, 0); // cl_nnf1
    stack[0] = (*qfn2(fn))(fn, v_276, v_275);
    }
    env = stack[-6];
    v_275 = stack[-2];
    if (!car_legal(v_275)) v_275 = cdrerror(v_275); else
    v_275 = cdr(v_275);
    if (!car_legal(v_275)) v_275 = cdrerror(v_275); else
    v_275 = cdr(v_275);
    if (!car_legal(v_275)) v_276 = carerror(v_275); else
    v_276 = car(v_275);
    v_275 = stack[-4];
    {   LispObject fn = basic_elt(env, 0); // cl_nnf1
    v_275 = (*qfn2(fn))(fn, v_276, v_275);
    }
    env = stack[-6];
    v_275 = ncons(v_275);
    {
        LispObject v_284 = stack[-1];
        LispObject v_285 = stack[0];
        return list2star(v_284, v_285, v_275);
    }
v_33:
    v_276 = v_277;
    v_275 = basic_elt(env, 4); // repl
    if (v_276 == v_275) goto v_55;
    else goto v_56;
v_55:
    v_276 = basic_elt(env, 3); // or
    v_275 = stack[-4];
    {   LispObject fn = basic_elt(env, 13); // cl_cflip
    stack[-1] = (*qfn2(fn))(fn, v_276, v_275);
    }
    env = stack[-6];
    v_275 = stack[-2];
    if (!car_legal(v_275)) v_275 = cdrerror(v_275); else
    v_275 = cdr(v_275);
    if (!car_legal(v_275)) v_276 = carerror(v_275); else
    v_276 = car(v_275);
    v_275 = stack[-4];
    {   LispObject fn = basic_elt(env, 0); // cl_nnf1
    stack[0] = (*qfn2(fn))(fn, v_276, v_275);
    }
    env = stack[-6];
    v_275 = stack[-2];
    if (!car_legal(v_275)) v_275 = cdrerror(v_275); else
    v_275 = cdr(v_275);
    if (!car_legal(v_275)) v_275 = cdrerror(v_275); else
    v_275 = cdr(v_275);
    if (!car_legal(v_275)) v_276 = carerror(v_275); else
    v_276 = car(v_275);
    v_275 = stack[-4];
    v_275 = (v_275 == nil ? lisp_true : nil);
    {   LispObject fn = basic_elt(env, 0); // cl_nnf1
    v_275 = (*qfn2(fn))(fn, v_276, v_275);
    }
    env = stack[-6];
    v_275 = ncons(v_275);
    {
        LispObject v_286 = stack[-1];
        LispObject v_287 = stack[0];
        return list2star(v_286, v_287, v_275);
    }
v_56:
    v_276 = v_277;
    v_275 = basic_elt(env, 5); // equiv
    if (v_276 == v_275) goto v_78;
    else goto v_79;
v_78:
    v_276 = basic_elt(env, 3); // or
    v_275 = stack[-4];
    {   LispObject fn = basic_elt(env, 13); // cl_cflip
    stack[-5] = (*qfn2(fn))(fn, v_276, v_275);
    }
    env = stack[-6];
    v_276 = basic_elt(env, 6); // and
    v_275 = stack[-4];
    {   LispObject fn = basic_elt(env, 13); // cl_cflip
    stack[-1] = (*qfn2(fn))(fn, v_276, v_275);
    }
    env = stack[-6];
    v_275 = stack[-2];
    if (!car_legal(v_275)) v_275 = cdrerror(v_275); else
    v_275 = cdr(v_275);
    if (!car_legal(v_275)) v_276 = carerror(v_275); else
    v_276 = car(v_275);
    v_275 = stack[-4];
    {   LispObject fn = basic_elt(env, 0); // cl_nnf1
    stack[0] = (*qfn2(fn))(fn, v_276, v_275);
    }
    env = stack[-6];
    v_275 = stack[-2];
    if (!car_legal(v_275)) v_275 = cdrerror(v_275); else
    v_275 = cdr(v_275);
    if (!car_legal(v_275)) v_275 = cdrerror(v_275); else
    v_275 = cdr(v_275);
    if (!car_legal(v_275)) v_276 = carerror(v_275); else
    v_276 = car(v_275);
    v_275 = stack[-4];
    {   LispObject fn = basic_elt(env, 0); // cl_nnf1
    v_275 = (*qfn2(fn))(fn, v_276, v_275);
    }
    env = stack[-6];
    v_275 = ncons(v_275);
    env = stack[-6];
    stack[-3] = list2star(stack[-1], stack[0], v_275);
    env = stack[-6];
    v_276 = basic_elt(env, 6); // and
    v_275 = stack[-4];
    {   LispObject fn = basic_elt(env, 13); // cl_cflip
    stack[-1] = (*qfn2(fn))(fn, v_276, v_275);
    }
    env = stack[-6];
    v_275 = stack[-2];
    if (!car_legal(v_275)) v_275 = cdrerror(v_275); else
    v_275 = cdr(v_275);
    if (!car_legal(v_275)) v_276 = carerror(v_275); else
    v_276 = car(v_275);
    v_275 = stack[-4];
    v_275 = (v_275 == nil ? lisp_true : nil);
    {   LispObject fn = basic_elt(env, 0); // cl_nnf1
    stack[0] = (*qfn2(fn))(fn, v_276, v_275);
    }
    env = stack[-6];
    v_275 = stack[-2];
    if (!car_legal(v_275)) v_275 = cdrerror(v_275); else
    v_275 = cdr(v_275);
    if (!car_legal(v_275)) v_275 = cdrerror(v_275); else
    v_275 = cdr(v_275);
    if (!car_legal(v_275)) v_276 = carerror(v_275); else
    v_276 = car(v_275);
    v_275 = stack[-4];
    v_275 = (v_275 == nil ? lisp_true : nil);
    {   LispObject fn = basic_elt(env, 0); // cl_nnf1
    v_275 = (*qfn2(fn))(fn, v_276, v_275);
    }
    env = stack[-6];
    v_275 = ncons(v_275);
    env = stack[-6];
    v_275 = list2star(stack[-1], stack[0], v_275);
    env = stack[-6];
    v_275 = ncons(v_275);
    {
        LispObject v_288 = stack[-5];
        LispObject v_289 = stack[-3];
        return list2star(v_288, v_289, v_275);
    }
v_79:
    v_276 = v_277;
    v_275 = basic_elt(env, 7); // true
    if (v_276 == v_275) goto v_127;
    else goto v_128;
v_127:
    v_275 = lisp_true;
    goto v_126;
v_128:
    v_276 = v_277;
    v_275 = basic_elt(env, 8); // false
    v_275 = (v_276 == v_275 ? lisp_true : nil);
    goto v_126;
    v_275 = nil;
v_126:
    if (v_275 == nil) goto v_124;
    v_276 = stack[-2];
    v_275 = stack[-4];
    {
        LispObject fn = basic_elt(env, 13); // cl_cflip
        return (*qfn2(fn))(fn, v_276, v_275);
    }
v_124:
    v_276 = v_277;
    v_275 = basic_elt(env, 9); // ex
    if (v_276 == v_275) goto v_146;
    else goto v_147;
v_146:
    v_275 = lisp_true;
    goto v_145;
v_147:
    v_276 = v_277;
    v_275 = basic_elt(env, 10); // all
    v_275 = (v_276 == v_275 ? lisp_true : nil);
    goto v_145;
    v_275 = nil;
v_145:
    if (v_275 == nil) goto v_143;
    v_276 = v_277;
    v_275 = stack[-4];
    {   LispObject fn = basic_elt(env, 13); // cl_cflip
    stack[-1] = (*qfn2(fn))(fn, v_276, v_275);
    }
    env = stack[-6];
    v_275 = stack[-2];
    if (!car_legal(v_275)) v_275 = cdrerror(v_275); else
    v_275 = cdr(v_275);
    if (!car_legal(v_275)) stack[0] = carerror(v_275); else
    stack[0] = car(v_275);
    v_275 = stack[-2];
    if (!car_legal(v_275)) v_275 = cdrerror(v_275); else
    v_275 = cdr(v_275);
    if (!car_legal(v_275)) v_275 = cdrerror(v_275); else
    v_275 = cdr(v_275);
    if (!car_legal(v_275)) v_276 = carerror(v_275); else
    v_276 = car(v_275);
    v_275 = stack[-4];
    {   LispObject fn = basic_elt(env, 0); // cl_nnf1
    v_275 = (*qfn2(fn))(fn, v_276, v_275);
    }
    {
        LispObject v_290 = stack[-1];
        LispObject v_291 = stack[0];
        return list3(v_290, v_291, v_275);
    }
v_143:
    v_276 = v_277;
    v_275 = basic_elt(env, 11); // bex
    if (v_276 == v_275) goto v_175;
    else goto v_176;
v_175:
    v_275 = lisp_true;
    goto v_174;
v_176:
    v_276 = v_277;
    v_275 = basic_elt(env, 12); // ball
    v_275 = (v_276 == v_275 ? lisp_true : nil);
    goto v_174;
    v_275 = nil;
v_174:
    if (v_275 == nil) goto v_172;
    v_276 = v_277;
    v_275 = stack[-4];
    {   LispObject fn = basic_elt(env, 13); // cl_cflip
    stack[-1] = (*qfn2(fn))(fn, v_276, v_275);
    }
    env = stack[-6];
    v_275 = stack[-2];
    if (!car_legal(v_275)) v_275 = cdrerror(v_275); else
    v_275 = cdr(v_275);
    if (!car_legal(v_275)) stack[0] = carerror(v_275); else
    stack[0] = car(v_275);
    v_275 = stack[-2];
    if (!car_legal(v_275)) v_275 = cdrerror(v_275); else
    v_275 = cdr(v_275);
    if (!car_legal(v_275)) v_275 = cdrerror(v_275); else
    v_275 = cdr(v_275);
    if (!car_legal(v_275)) v_276 = carerror(v_275); else
    v_276 = car(v_275);
    v_275 = stack[-4];
    {   LispObject fn = basic_elt(env, 0); // cl_nnf1
    stack[-3] = (*qfn2(fn))(fn, v_276, v_275);
    }
    env = stack[-6];
    v_275 = stack[-2];
    if (!car_legal(v_275)) v_275 = cdrerror(v_275); else
    v_275 = cdr(v_275);
    if (!car_legal(v_275)) v_275 = cdrerror(v_275); else
    v_275 = cdr(v_275);
    if (!car_legal(v_275)) v_275 = cdrerror(v_275); else
    v_275 = cdr(v_275);
    if (!car_legal(v_275)) v_276 = carerror(v_275); else
    v_276 = car(v_275);
    v_275 = lisp_true;
    {   LispObject fn = basic_elt(env, 0); // cl_nnf1
    v_275 = (*qfn2(fn))(fn, v_276, v_275);
    }
    {
        LispObject v_292 = stack[-1];
        LispObject v_293 = stack[0];
        LispObject v_294 = stack[-3];
        return list4(v_292, v_293, v_294, v_275);
    }
v_172:
    v_276 = v_277;
    v_275 = basic_elt(env, 3); // or
    if (v_276 == v_275) goto v_211;
    else goto v_212;
v_211:
    v_275 = lisp_true;
    goto v_210;
v_212:
    v_276 = v_277;
    v_275 = basic_elt(env, 6); // and
    v_275 = (v_276 == v_275 ? lisp_true : nil);
    goto v_210;
    v_275 = nil;
v_210:
    if (v_275 == nil) goto v_208;
    v_276 = v_277;
    v_275 = stack[-4];
    {   LispObject fn = basic_elt(env, 13); // cl_cflip
    stack[-5] = (*qfn2(fn))(fn, v_276, v_275);
    }
    env = stack[-6];
    v_275 = stack[-2];
    if (!car_legal(v_275)) v_275 = cdrerror(v_275); else
    v_275 = cdr(v_275);
    stack[-3] = v_275;
    v_275 = stack[-3];
    if (v_275 == nil) goto v_235;
    else goto v_236;
v_235:
    v_275 = nil;
    goto v_229;
v_236:
    v_275 = stack[-3];
    if (!car_legal(v_275)) v_275 = carerror(v_275); else
    v_275 = car(v_275);
    v_276 = v_275;
    v_275 = stack[-4];
    {   LispObject fn = basic_elt(env, 0); // cl_nnf1
    v_275 = (*qfn2(fn))(fn, v_276, v_275);
    }
    env = stack[-6];
    v_275 = ncons(v_275);
    env = stack[-6];
    stack[-1] = v_275;
    stack[-2] = v_275;
v_230:
    v_275 = stack[-3];
    if (!car_legal(v_275)) v_275 = cdrerror(v_275); else
    v_275 = cdr(v_275);
    stack[-3] = v_275;
    v_275 = stack[-3];
    if (v_275 == nil) goto v_250;
    else goto v_251;
v_250:
    v_275 = stack[-2];
    goto v_229;
v_251:
    stack[0] = stack[-1];
    v_275 = stack[-3];
    if (!car_legal(v_275)) v_275 = carerror(v_275); else
    v_275 = car(v_275);
    v_276 = v_275;
    v_275 = stack[-4];
    {   LispObject fn = basic_elt(env, 0); // cl_nnf1
    v_275 = (*qfn2(fn))(fn, v_276, v_275);
    }
    env = stack[-6];
    v_275 = ncons(v_275);
    env = stack[-6];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_275);
    v_275 = stack[-1];
    if (!car_legal(v_275)) v_275 = cdrerror(v_275); else
    v_275 = cdr(v_275);
    stack[-1] = v_275;
    goto v_230;
v_229:
    {
        LispObject v_295 = stack[-5];
        return cons(v_295, v_275);
    }
v_208:
    v_275 = stack[-4];
    if (v_275 == nil) goto v_268;
    v_275 = stack[-2];
    goto v_266;
v_268:
    v_275 = stack[-2];
    {
        LispObject fn = basic_elt(env, 14); // rl_negateat
        return (*qfn1(fn))(fn, v_275);
    }
    v_275 = nil;
v_266:
    return onevalue(v_275);
}



// Code for cgp_number

static LispObject CC_cgp_number(LispObject env,
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
    v_7 = static_cast<LispObject>(80)+TAG_FIXNUM; // 5
    {
        LispObject fn = basic_elt(env, 1); // nth
        return (*qfn2(fn))(fn, v_8, v_7);
    }
}



// Code for nary

static LispObject CC_nary(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_49 = stack[-1];
    if (!car_legal(v_49)) v_50 = carerror(v_49); else
    v_50 = car(v_49);
    v_49 = basic_elt(env, 1); // e
    if (v_50 == v_49) goto v_13;
    else goto v_14;
v_13:
    v_50 = stack[0];
    v_49 = basic_elt(env, 2); // power
    v_49 = (v_50 == v_49 ? lisp_true : nil);
    goto v_12;
v_14:
    v_49 = nil;
    goto v_12;
    v_49 = nil;
v_12:
    if (v_49 == nil) goto v_10;
    v_49 = stack[-1];
    if (!car_legal(v_49)) v_50 = cdrerror(v_49); else
    v_50 = cdr(v_49);
    v_49 = basic_elt(env, 3); // exp
    {   LispObject fn = basic_elt(env, 8); // unary
    v_49 = (*qfn2(fn))(fn, v_50, v_49);
    }
    goto v_8;
v_10:
    v_49 = basic_elt(env, 4); // "<apply>"
    {   LispObject fn = basic_elt(env, 9); // printout
    v_49 = (*qfn1(fn))(fn, v_49);
    }
    env = stack[-2];
    v_49 = basic_elt(env, 5); // "<"
    v_49 = Lprinc(nil, v_49);
    env = stack[-2];
    v_49 = stack[0];
    v_49 = Lprinc(nil, v_49);
    env = stack[-2];
    v_49 = stack[-1];
    if (!car_legal(v_49)) v_50 = carerror(v_49); else
    v_50 = car(v_49);
    v_49 = basic_elt(env, 6); // "/"
    {   LispObject fn = basic_elt(env, 10); // attributesml
    v_49 = (*qfn2(fn))(fn, v_50, v_49);
    }
    env = stack[-2];
    v_49 = lisp_true;
    {   LispObject fn = basic_elt(env, 11); // indent!*
    v_49 = (*qfn1(fn))(fn, v_49);
    }
    env = stack[-2];
    v_49 = stack[-1];
    if (!car_legal(v_49)) v_49 = cdrerror(v_49); else
    v_49 = cdr(v_49);
    {   LispObject fn = basic_elt(env, 12); // multi_elem
    v_49 = (*qfn1(fn))(fn, v_49);
    }
    env = stack[-2];
    v_49 = nil;
    {   LispObject fn = basic_elt(env, 11); // indent!*
    v_49 = (*qfn1(fn))(fn, v_49);
    }
    env = stack[-2];
    v_49 = basic_elt(env, 7); // "</apply>"
    {   LispObject fn = basic_elt(env, 9); // printout
    v_49 = (*qfn1(fn))(fn, v_49);
    }
    goto v_8;
v_8:
    v_49 = nil;
    return onevalue(v_49);
}



// Code for sacar

static LispObject CC_sacar(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_38 = stack[0];
    if (!consp(v_38)) goto v_7;
    else goto v_8;
v_7:
    v_38 = nil;
    goto v_6;
v_8:
    v_39 = stack[-1];
    v_38 = stack[0];
    if (!car_legal(v_38)) v_38 = carerror(v_38); else
    v_38 = car(v_38);
    if (v_39 == v_38) goto v_15;
    else goto v_16;
v_15:
    v_38 = stack[0];
    if (!car_legal(v_38)) v_38 = cdrerror(v_38); else
    v_38 = cdr(v_38);
    goto v_14;
v_16:
    v_38 = nil;
    goto v_14;
    v_38 = nil;
v_14:
    if (v_38 == nil) goto v_12;
    v_38 = stack[0];
    return ncons(v_38);
v_12:
    v_39 = stack[-1];
    v_38 = stack[0];
    if (!car_legal(v_38)) v_38 = carerror(v_38); else
    v_38 = car(v_38);
    {   LispObject fn = basic_elt(env, 0); // sacar
    stack[-2] = (*qfn2(fn))(fn, v_39, v_38);
    }
    env = stack[-3];
    v_39 = stack[-1];
    v_38 = stack[0];
    if (!car_legal(v_38)) v_38 = cdrerror(v_38); else
    v_38 = cdr(v_38);
    {   LispObject fn = basic_elt(env, 0); // sacar
    v_38 = (*qfn2(fn))(fn, v_39, v_38);
    }
    {
        LispObject v_43 = stack[-2];
        return Lappend_2(nil, v_43, v_38);
    }
    v_38 = nil;
v_6:
    return onevalue(v_38);
}



// Code for inshisto

static LispObject CC_inshisto(LispObject env,
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
    real_push(nil, nil, nil, nil, nil);
    stack_popper stack_popper_var(6);
// copy arguments values to proper place
    stack[-3] = v_2;
// end of prologue
    stack[0] = qvalue(basic_elt(env, 1)); // codmat
    v_70 = qvalue(basic_elt(env, 2)); // maxvar
    v_69 = stack[-3];
    v_69 = plus2(v_70, v_69);
    env = stack[-5];
    v_70 = Lgetv(nil, stack[0], v_69);
    env = stack[-5];
    v_69 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_69 = Lgetv(nil, v_70, v_69);
    env = stack[-5];
    if (v_69 == nil) goto v_7;
    v_70 = stack[-3];
    v_69 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_69 = static_cast<LispObject>(geq2(v_70, v_69));
    v_69 = v_69 ? lisp_true : nil;
    env = stack[-5];
    if (v_69 == nil) goto v_7;
    stack[0] = qvalue(basic_elt(env, 3)); // codhisto
    stack[-1] = qvalue(basic_elt(env, 1)); // codmat
    v_70 = qvalue(basic_elt(env, 2)); // maxvar
    v_69 = stack[-3];
    v_69 = plus2(v_70, v_69);
    env = stack[-5];
    v_70 = Lgetv(nil, stack[-1], v_69);
    env = stack[-5];
    v_69 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_69 = Lgetv(nil, v_70, v_69);
    env = stack[-5];
    if (!car_legal(v_69)) v_70 = cdrerror(v_69); else
    v_70 = cdr(v_69);
    v_69 = static_cast<LispObject>(3200)+TAG_FIXNUM; // 200
    {   LispObject fn = basic_elt(env, 5); // min
    v_69 = (*qfn2(fn))(fn, v_70, v_69);
    }
    env = stack[-5];
    stack[-2] = v_69;
    v_69 = Lgetv(nil, stack[0], v_69);
    env = stack[-5];
    stack[-4] = v_69;
    if (v_69 == nil) goto v_27;
    stack[0] = qvalue(basic_elt(env, 1)); // codmat
    v_70 = qvalue(basic_elt(env, 2)); // maxvar
    v_69 = stack[-4];
    v_69 = plus2(v_70, v_69);
    env = stack[-5];
    v_70 = Lgetv(nil, stack[0], v_69);
    env = stack[-5];
    v_69 = static_cast<LispObject>(112)+TAG_FIXNUM; // 7
    v_70 = Lgetv(nil, v_70, v_69);
    env = stack[-5];
    v_69 = stack[-3];
    if (!car_legal(v_70)) rplaca_fails(v_70);
    setcar(v_70, v_69);
    goto v_25;
v_27:
    v_70 = stack[-2];
    v_69 = qvalue(basic_elt(env, 4)); // headhisto
    v_69 = static_cast<LispObject>(greaterp2(v_70, v_69));
    v_69 = v_69 ? lisp_true : nil;
    env = stack[-5];
    if (v_69 == nil) goto v_50;
    v_69 = stack[-2];
    setvalue(basic_elt(env, 4), v_69); // headhisto
    goto v_25;
v_50:
v_25:
    stack[0] = qvalue(basic_elt(env, 1)); // codmat
    v_70 = qvalue(basic_elt(env, 2)); // maxvar
    v_69 = stack[-3];
    v_69 = plus2(v_70, v_69);
    env = stack[-5];
    stack[-1] = Lgetv(nil, stack[0], v_69);
    env = stack[-5];
    stack[0] = static_cast<LispObject>(112)+TAG_FIXNUM; // 7
    v_70 = nil;
    v_69 = stack[-4];
    v_69 = cons(v_70, v_69);
    env = stack[-5];
    v_69 = Lputv(nil, stack[-1], stack[0], v_69);
    env = stack[-5];
    v_71 = qvalue(basic_elt(env, 3)); // codhisto
    v_70 = stack[-2];
    v_69 = stack[-3];
    v_69 = Lputv(nil, v_71, v_70, v_69);
    v_69 = nil;
    goto v_5;
v_7:
    v_69 = nil;
v_5:
    return onevalue(v_69);
}



// Code for bcplus!?

static LispObject CC_bcplusW(LispObject env,
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
    if (!car_legal(v_18)) v_18 = carerror(v_18); else
    v_18 = car(v_18);
    v_19 = v_18;
    v_18 = v_19;
    if (is_number(v_18)) goto v_10;
    v_18 = nil;
    goto v_8;
v_10:
    v_18 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
        return Lgreaterp_2(nil, v_19, v_18);
    v_18 = nil;
v_8:
    return onevalue(v_18);
}



// Code for groebbuchcrit4t

static LispObject CC_groebbuchcrit4t(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_46 = stack[-1];
    if (v_46 == nil) goto v_14;
    else goto v_15;
v_14:
    v_46 = lisp_true;
    goto v_13;
v_15:
    v_46 = stack[0];
    v_46 = (v_46 == nil ? lisp_true : nil);
    goto v_13;
    v_46 = nil;
v_13:
    if (v_46 == nil) goto v_11;
    v_46 = nil;
    goto v_6;
v_11:
    v_46 = stack[-1];
    if (!car_legal(v_46)) v_47 = carerror(v_46); else
    v_47 = car(v_46);
    v_46 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_47 == v_46) goto v_28;
    v_46 = stack[0];
    if (!car_legal(v_46)) v_47 = carerror(v_46); else
    v_47 = car(v_46);
    v_46 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_46 = Lneq_2(nil, v_47, v_46);
    env = stack[-2];
    goto v_26;
v_28:
    v_46 = nil;
    goto v_26;
    v_46 = nil;
v_26:
    if (v_46 == nil) goto v_24;
    v_46 = lisp_true;
    goto v_6;
v_24:
    v_46 = stack[-1];
    if (!car_legal(v_46)) v_46 = cdrerror(v_46); else
    v_46 = cdr(v_46);
    stack[-1] = v_46;
    v_46 = stack[0];
    if (!car_legal(v_46)) v_46 = cdrerror(v_46); else
    v_46 = cdr(v_46);
    stack[0] = v_46;
    goto v_7;
    v_46 = nil;
v_6:
    return onevalue(v_46);
}



// Code for !*pf2wedgepf

static LispObject CC_Hpf2wedgepf(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_28, v_29, v_30;
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
    v_28 = stack[0];
    if (v_28 == nil) goto v_10;
    else goto v_11;
v_10:
    v_28 = stack[-1];
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn1(fn))(fn, v_28);
    }
v_11:
    v_28 = stack[0];
    if (!car_legal(v_28)) v_28 = carerror(v_28); else
    v_28 = car(v_28);
    if (!car_legal(v_28)) v_28 = carerror(v_28); else
    v_28 = car(v_28);
    {   LispObject fn = basic_elt(env, 2); // wedgefax
    v_30 = (*qfn1(fn))(fn, v_28);
    }
    env = stack[-2];
    v_28 = stack[0];
    if (!car_legal(v_28)) v_28 = carerror(v_28); else
    v_28 = car(v_28);
    if (!car_legal(v_28)) v_29 = cdrerror(v_28); else
    v_29 = cdr(v_28);
    v_28 = stack[-1];
    v_28 = acons(v_30, v_29, v_28);
    env = stack[-2];
    stack[-1] = v_28;
    v_28 = stack[0];
    if (!car_legal(v_28)) v_28 = cdrerror(v_28); else
    v_28 = cdr(v_28);
    stack[0] = v_28;
    goto v_7;
    v_28 = nil;
    return onevalue(v_28);
}



// Code for pv_times1

static LispObject CC_pv_times1(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    v_27 = v_4;
    stack[0] = v_3;
    v_26 = v_2;
// end of prologue
v_9:
    v_28 = v_26;
    if (v_28 == nil) goto v_12;
    else goto v_13;
v_12:
    v_26 = v_27;
    goto v_8;
v_13:
    v_28 = v_26;
    if (!car_legal(v_28)) v_28 = cdrerror(v_28); else
    v_28 = cdr(v_28);
    stack[-1] = v_28;
    if (!car_legal(v_26)) v_28 = carerror(v_26); else
    v_28 = car(v_26);
    v_26 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // pv_times2
    v_26 = (*qfn3(fn))(fn, v_28, v_26, v_27);
    }
    env = stack[-2];
    v_27 = v_26;
    v_26 = stack[-1];
    goto v_9;
    v_26 = nil;
v_8:
    return onevalue(v_26);
}



// Code for general!-reduce!-degree!-mod!-p

static LispObject CC_generalKreduceKdegreeKmodKp(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_55 = stack[-1];
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    if (!car_legal(v_55)) v_55 = cdrerror(v_55); else
    v_55 = cdr(v_55);
    {   LispObject fn = basic_elt(env, 1); // general!-modular!-minus
    v_56 = (*qfn1(fn))(fn, v_55);
    }
    env = stack[-3];
    v_55 = stack[0];
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    if (!car_legal(v_55)) v_55 = cdrerror(v_55); else
    v_55 = cdr(v_55);
    {   LispObject fn = basic_elt(env, 2); // general!-modular!-quotient
    v_55 = (*qfn2(fn))(fn, v_56, v_55);
    }
    env = stack[-3];
    stack[-2] = v_55;
    v_55 = stack[-1];
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    if (!car_legal(v_55)) v_56 = cdrerror(v_55); else
    v_56 = cdr(v_55);
    v_55 = stack[0];
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    if (!car_legal(v_55)) v_55 = cdrerror(v_55); else
    v_55 = cdr(v_55);
    v_55 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_56) - static_cast<std::uintptr_t>(v_55) + TAG_FIXNUM);
    v_57 = v_55;
    v_56 = v_57;
    v_55 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_56 == v_55) goto v_28;
    else goto v_29;
v_28:
    v_55 = stack[-1];
    if (!car_legal(v_55)) stack[-1] = cdrerror(v_55); else
    stack[-1] = cdr(v_55);
    v_55 = stack[0];
    if (!car_legal(v_55)) v_56 = cdrerror(v_55); else
    v_56 = cdr(v_55);
    v_55 = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // general!-multiply!-by!-constant!-mod!-p
    v_55 = (*qfn2(fn))(fn, v_56, v_55);
    }
    env = stack[-3];
    {
        LispObject v_61 = stack[-1];
        LispObject fn = basic_elt(env, 4); // general!-plus!-mod!-p
        return (*qfn2(fn))(fn, v_61, v_55);
    }
v_29:
    v_55 = stack[-1];
    if (!car_legal(v_55)) stack[-1] = cdrerror(v_55); else
    stack[-1] = cdr(v_55);
    v_55 = stack[0];
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    v_56 = v_57;
    {   LispObject fn = basic_elt(env, 5); // mksp
    v_56 = (*qfn2(fn))(fn, v_55, v_56);
    }
    env = stack[-3];
    v_55 = stack[-2];
    v_56 = cons(v_56, v_55);
    env = stack[-3];
    v_55 = stack[0];
    if (!car_legal(v_55)) v_55 = cdrerror(v_55); else
    v_55 = cdr(v_55);
    {   LispObject fn = basic_elt(env, 6); // general!-times!-term!-mod!-p
    v_55 = (*qfn2(fn))(fn, v_56, v_55);
    }
    env = stack[-3];
    {
        LispObject v_62 = stack[-1];
        LispObject fn = basic_elt(env, 4); // general!-plus!-mod!-p
        return (*qfn2(fn))(fn, v_62, v_55);
    }
    v_55 = nil;
    return onevalue(v_55);
}



// Code for update_kc_list

static LispObject CC_update_kc_list(LispObject env,
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
    v_39 = stack[-1];
    v_38 = stack[-2];
    if (!car_legal(v_38)) v_38 = cdrerror(v_38); else
    v_38 = cdr(v_38);
    {   LispObject fn = basic_elt(env, 1); // list_assoc
    v_38 = (*qfn2(fn))(fn, v_39, v_38);
    }
    env = stack[-4];
    v_39 = v_38;
    v_38 = v_39;
    if (v_38 == nil) goto v_14;
    stack[-3] = v_39;
    v_38 = v_39;
    if (!car_legal(v_38)) v_38 = carerror(v_38); else
    v_38 = car(v_38);
    if (!car_legal(v_38)) stack[-1] = carerror(v_38); else
    stack[-1] = car(v_38);
    v_38 = v_39;
    if (!car_legal(v_38)) v_38 = carerror(v_38); else
    v_38 = car(v_38);
    if (!car_legal(v_38)) v_39 = cdrerror(v_38); else
    v_39 = cdr(v_38);
    v_38 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // addf
    v_38 = (*qfn2(fn))(fn, v_39, v_38);
    }
    env = stack[-4];
    v_38 = cons(stack[-1], v_38);
    if (!car_legal(stack[-3])) rplaca_fails(stack[-3]);
    setcar(stack[-3], v_38);
    v_38 = stack[-2];
    goto v_12;
v_14:
    v_38 = stack[-2];
    if (!car_legal(v_38)) stack[-3] = carerror(v_38); else
    stack[-3] = car(v_38);
    v_39 = stack[-1];
    v_38 = stack[0];
    v_39 = cons(v_39, v_38);
    v_38 = stack[-2];
    if (!car_legal(v_38)) v_38 = cdrerror(v_38); else
    v_38 = cdr(v_38);
    {
        LispObject v_44 = stack[-3];
        return list2star(v_44, v_39, v_38);
    }
    v_38 = nil;
v_12:
    return onevalue(v_38);
}



// Code for ofsf_pow2q

static LispObject CC_ofsf_pow2q(LispObject env,
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
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_13 = v_3;
    v_14 = v_2;
// end of prologue
    {   LispObject fn = basic_elt(env, 1); // to
    v_14 = (*qfn2(fn))(fn, v_14, v_13);
    }
    env = stack[0];
    v_13 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_15 = cons(v_14, v_13);
    v_14 = nil;
    v_13 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return acons(v_15, v_14, v_13);
}



// Code for prepreform

static LispObject CC_prepreform(LispObject env,
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
// space for vars preserved across procedure calls
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    v_9 = v_2;
// end of prologue
    stack[0] = v_9;
    v_10 = qvalue(basic_elt(env, 1)); // ordl!*
    v_9 = qvalue(basic_elt(env, 2)); // factors!*
    v_9 = Lappend_2(nil, v_10, v_9);
    env = stack[-1];
    {
        LispObject v_12 = stack[0];
        LispObject fn = basic_elt(env, 3); // prepreform1
        return (*qfn2(fn))(fn, v_12, v_9);
    }
}



// Code for exptcompare

static LispObject CC_exptcompare(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_32, v_33, v_34;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_32 = v_3;
    v_33 = v_2;
// end of prologue
    v_34 = v_33;
    if (!consp(v_34)) goto v_7;
    else goto v_8;
v_7:
    v_34 = v_32;
    if (!consp(v_34)) goto v_12;
    else goto v_13;
v_12:
        return Lgreaterp_2(nil, v_33, v_32);
v_13:
    v_32 = nil;
    goto v_11;
    v_32 = nil;
v_11:
    goto v_6;
v_8:
    v_34 = v_32;
    if (!consp(v_34)) goto v_21;
    else goto v_22;
v_21:
    v_32 = lisp_true;
    goto v_6;
v_22:
    if (!car_legal(v_33)) v_33 = carerror(v_33); else
    v_33 = car(v_33);
    if (!car_legal(v_32)) v_32 = carerror(v_32); else
    v_32 = car(v_32);
        return Lgreaterp_2(nil, v_33, v_32);
    v_32 = nil;
v_6:
    return onevalue(v_32);
}



// Code for cl_smsimpl!-junct2

static LispObject CC_cl_smsimplKjunct2(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_85, v_86, v_87, v_88;
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
    stack_popper stack_popper_var(6);
// copy arguments values to proper place
    stack[-2] = v_7;
    v_85 = v_6;
    v_86 = v_5;
    v_87 = v_4;
    stack[-3] = v_3;
    v_88 = v_2;
// end of prologue
    stack[-4] = v_88;
    stack[-1] = v_87;
    stack[0] = v_86;
    v_85 = ncons(v_85);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 6); // rl_smmkatl
    v_85 = (*qfn4up(fn))(fn, stack[-4], stack[-1], stack[0], v_85);
    }
    env = stack[-5];
    stack[-1] = v_85;
    v_86 = stack[-1];
    v_85 = stack[-2];
    if (v_86 == v_85) goto v_21;
    else goto v_22;
v_21:
    v_85 = stack[-2];
    return ncons(v_85);
v_22:
    v_85 = qvalue(basic_elt(env, 1)); // !*rlsichk
    if (v_85 == nil) goto v_30;
    v_85 = stack[-3];
    v_86 = v_85;
    v_85 = nil;
    stack[-3] = v_85;
    v_85 = v_86;
    stack[0] = v_85;
v_37:
    v_85 = stack[0];
    if (v_85 == nil) goto v_41;
    else goto v_42;
v_41:
    goto v_36;
v_42:
    v_85 = stack[0];
    if (!car_legal(v_85)) v_85 = carerror(v_85); else
    v_85 = car(v_85);
    v_86 = v_85;
    v_85 = stack[-3];
    {   LispObject fn = basic_elt(env, 7); // lto_insert
    v_85 = (*qfn2(fn))(fn, v_86, v_85);
    }
    env = stack[-5];
    stack[-3] = v_85;
    v_85 = stack[0];
    if (!car_legal(v_85)) v_85 = cdrerror(v_85); else
    v_85 = cdr(v_85);
    stack[0] = v_85;
    goto v_37;
v_36:
    goto v_28;
v_30:
    v_85 = stack[-3];
    v_85 = Lnreverse(nil, v_85);
    env = stack[-5];
    stack[-3] = v_85;
    goto v_28;
v_28:
    v_85 = qvalue(basic_elt(env, 2)); // !*rlsiso
    if (v_85 == nil) goto v_60;
    v_86 = stack[-1];
    v_85 = basic_elt(env, 3); // rl_ordatp
    {   LispObject fn = basic_elt(env, 8); // sort
    v_85 = (*qfn2(fn))(fn, v_86, v_85);
    }
    env = stack[-5];
    stack[-1] = v_85;
    v_85 = qvalue(basic_elt(env, 4)); // !*rlsisocx
    if (v_85 == nil) goto v_68;
    v_86 = stack[-3];
    v_85 = basic_elt(env, 5); // cl_sordp
    {   LispObject fn = basic_elt(env, 8); // sort
    v_85 = (*qfn2(fn))(fn, v_86, v_85);
    }
    env = stack[-5];
    stack[-3] = v_85;
    goto v_66;
v_68:
v_66:
    goto v_58;
v_60:
v_58:
    v_86 = stack[-1];
    v_85 = stack[-3];
    v_85 = Lnconc(nil, v_86, v_85);
    env = stack[-5];
    v_86 = v_85;
    v_85 = v_86;
    if (v_85 == nil) goto v_79;
    v_85 = v_86;
    goto v_12;
v_79:
    v_85 = stack[-2];
    {   LispObject fn = basic_elt(env, 9); // cl_flip
    v_85 = (*qfn1(fn))(fn, v_85);
    }
    return ncons(v_85);
v_12:
    return onevalue(v_85);
}



// Code for cl_pnf2!-junctor

static LispObject CC_cl_pnf2Kjunctor(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_227, v_228, v_229;
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
    stack[-7] = nil;
    stack[-6] = nil;
    v_227 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-3] = v_227;
    v_227 = stack[-8];
    if (!consp(v_227)) goto v_20;
    else goto v_21;
v_20:
    v_227 = stack[-8];
    goto v_19;
v_21:
    v_227 = stack[-8];
    if (!car_legal(v_227)) v_227 = carerror(v_227); else
    v_227 = car(v_227);
    goto v_19;
    v_227 = nil;
v_19:
    stack[-9] = v_227;
    v_227 = stack[-8];
    if (!car_legal(v_227)) v_227 = cdrerror(v_227); else
    v_227 = cdr(v_227);
    stack[-4] = v_227;
    v_227 = stack[-4];
    if (v_227 == nil) goto v_38;
    else goto v_39;
v_38:
    v_227 = nil;
    goto v_32;
v_39:
    v_227 = stack[-4];
    if (!car_legal(v_227)) v_227 = carerror(v_227); else
    v_227 = car(v_227);
    {   LispObject fn = basic_elt(env, 3); // cl_pnf2
    v_227 = (*qfn1(fn))(fn, v_227);
    }
    env = stack[-10];
    v_227 = ncons(v_227);
    env = stack[-10];
    stack[-1] = v_227;
    stack[-2] = v_227;
v_33:
    v_227 = stack[-4];
    if (!car_legal(v_227)) v_227 = cdrerror(v_227); else
    v_227 = cdr(v_227);
    stack[-4] = v_227;
    v_227 = stack[-4];
    if (v_227 == nil) goto v_52;
    else goto v_53;
v_52:
    v_227 = stack[-2];
    goto v_32;
v_53:
    stack[0] = stack[-1];
    v_227 = stack[-4];
    if (!car_legal(v_227)) v_227 = carerror(v_227); else
    v_227 = car(v_227);
    {   LispObject fn = basic_elt(env, 3); // cl_pnf2
    v_227 = (*qfn1(fn))(fn, v_227);
    }
    env = stack[-10];
    v_227 = ncons(v_227);
    env = stack[-10];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_227);
    v_227 = stack[-1];
    if (!car_legal(v_227)) v_227 = cdrerror(v_227); else
    v_227 = cdr(v_227);
    stack[-1] = v_227;
    goto v_33;
v_32:
    v_228 = v_227;
    v_227 = lisp_true;
    stack[-5] = v_227;
    v_227 = lisp_true;
    stack[-4] = v_227;
    v_227 = v_228;
    stack[-1] = v_227;
v_71:
    v_227 = stack[-1];
    if (v_227 == nil) goto v_75;
    else goto v_76;
v_75:
    goto v_70;
v_76:
    v_227 = stack[-1];
    if (!car_legal(v_227)) v_227 = carerror(v_227); else
    v_227 = car(v_227);
    stack[0] = v_227;
    v_227 = stack[0];
    if (!car_legal(v_227)) v_227 = carerror(v_227); else
    v_227 = car(v_227);
    {   LispObject fn = basic_elt(env, 4); // cl_qb
    v_227 = (*qfn1(fn))(fn, v_227);
    }
    env = stack[-10];
    stack[-2] = v_227;
    v_228 = stack[-2];
    v_227 = stack[-3];
    v_227 = static_cast<LispObject>(greaterp2(v_228, v_227));
    v_227 = v_227 ? lisp_true : nil;
    env = stack[-10];
    if (v_227 == nil) goto v_88;
    v_227 = stack[-2];
    stack[-3] = v_227;
    v_227 = lisp_true;
    stack[-5] = v_227;
    v_227 = lisp_true;
    stack[-4] = v_227;
    goto v_86;
v_88:
v_86:
    v_227 = stack[0];
    if (!car_legal(v_227)) v_227 = cdrerror(v_227); else
    v_227 = cdr(v_227);
    if (v_227 == nil) goto v_98;
    v_227 = stack[0];
    if (!car_legal(v_227)) v_228 = carerror(v_227); else
    v_228 = car(v_227);
    v_227 = stack[-7];
    v_227 = cons(v_228, v_227);
    env = stack[-10];
    stack[-7] = v_227;
    v_227 = stack[0];
    if (!car_legal(v_227)) v_227 = cdrerror(v_227); else
    v_227 = cdr(v_227);
    if (!car_legal(v_227)) v_228 = carerror(v_227); else
    v_228 = car(v_227);
    v_227 = stack[-6];
    v_227 = cons(v_228, v_227);
    env = stack[-10];
    stack[-6] = v_227;
    goto v_96;
v_98:
    v_227 = stack[0];
    if (!car_legal(v_227)) v_228 = carerror(v_227); else
    v_228 = car(v_227);
    v_227 = stack[-7];
    v_227 = cons(v_228, v_227);
    env = stack[-10];
    stack[-7] = v_227;
    v_227 = stack[0];
    if (!car_legal(v_227)) v_228 = carerror(v_227); else
    v_228 = car(v_227);
    v_227 = stack[-6];
    v_227 = cons(v_228, v_227);
    env = stack[-10];
    stack[-6] = v_227;
    goto v_96;
v_96:
    v_228 = stack[-3];
    v_227 = stack[-2];
    v_227 = Leqn_2(nil, v_228, v_227);
    env = stack[-10];
    if (v_227 == nil) goto v_123;
    v_227 = stack[-7];
    if (!car_legal(v_227)) v_227 = carerror(v_227); else
    v_227 = car(v_227);
    if (!consp(v_227)) goto v_133;
    else goto v_134;
v_133:
    v_227 = stack[-7];
    if (!car_legal(v_227)) v_227 = carerror(v_227); else
    v_227 = car(v_227);
    v_228 = v_227;
    goto v_132;
v_134:
    v_227 = stack[-7];
    if (!car_legal(v_227)) v_227 = carerror(v_227); else
    v_227 = car(v_227);
    if (!car_legal(v_227)) v_227 = carerror(v_227); else
    v_227 = car(v_227);
    v_228 = v_227;
    goto v_132;
    v_228 = nil;
v_132:
    v_227 = basic_elt(env, 1); // all
    if (v_228 == v_227) goto v_129;
    else goto v_130;
v_129:
    v_227 = nil;
    stack[-5] = v_227;
    goto v_128;
v_130:
v_128:
    v_227 = stack[-6];
    if (!car_legal(v_227)) v_227 = carerror(v_227); else
    v_227 = car(v_227);
    if (!consp(v_227)) goto v_152;
    else goto v_153;
v_152:
    v_227 = stack[-6];
    if (!car_legal(v_227)) v_227 = carerror(v_227); else
    v_227 = car(v_227);
    v_228 = v_227;
    goto v_151;
v_153:
    v_227 = stack[-6];
    if (!car_legal(v_227)) v_227 = carerror(v_227); else
    v_227 = car(v_227);
    if (!car_legal(v_227)) v_227 = carerror(v_227); else
    v_227 = car(v_227);
    v_228 = v_227;
    goto v_151;
    v_228 = nil;
v_151:
    v_227 = basic_elt(env, 2); // ex
    if (v_228 == v_227) goto v_148;
    else goto v_149;
v_148:
    v_227 = nil;
    stack[-4] = v_227;
    goto v_147;
v_149:
v_147:
    goto v_121;
v_123:
v_121:
    v_227 = stack[-1];
    if (!car_legal(v_227)) v_227 = cdrerror(v_227); else
    v_227 = cdr(v_227);
    stack[-1] = v_227;
    goto v_71;
v_70:
    v_227 = stack[-7];
    v_227 = Lnreverse(nil, v_227);
    env = stack[-10];
    stack[-7] = v_227;
    v_227 = stack[-6];
    v_227 = Lnreverse(nil, v_227);
    env = stack[-10];
    stack[-6] = v_227;
    v_228 = stack[-3];
    v_227 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_227 = Leqn_2(nil, v_228, v_227);
    env = stack[-10];
    if (v_227 == nil) goto v_175;
    v_227 = stack[-8];
    return ncons(v_227);
v_175:
    v_228 = stack[-5];
    v_227 = stack[-4];
    if (equal(v_228, v_227)) goto v_184;
    v_227 = stack[-5];
    if (v_227 == nil) goto v_190;
    v_229 = stack[-7];
    v_228 = stack[-9];
    v_227 = basic_elt(env, 2); // ex
    {   LispObject fn = basic_elt(env, 5); // cl_interchange
    v_227 = (*qfn3(fn))(fn, v_229, v_228, v_227);
    }
    return ncons(v_227);
v_190:
    v_229 = stack[-6];
    v_228 = stack[-9];
    v_227 = basic_elt(env, 1); // all
    {   LispObject fn = basic_elt(env, 5); // cl_interchange
    v_227 = (*qfn3(fn))(fn, v_229, v_228, v_227);
    }
    return ncons(v_227);
    goto v_182;
v_184:
v_182:
    v_229 = stack[-7];
    v_228 = stack[-9];
    v_227 = basic_elt(env, 2); // ex
    {   LispObject fn = basic_elt(env, 5); // cl_interchange
    v_227 = (*qfn3(fn))(fn, v_229, v_228, v_227);
    }
    env = stack[-10];
    stack[0] = v_227;
    v_229 = stack[-6];
    v_228 = stack[-9];
    v_227 = basic_elt(env, 1); // all
    {   LispObject fn = basic_elt(env, 5); // cl_interchange
    v_227 = (*qfn3(fn))(fn, v_229, v_228, v_227);
    }
    v_229 = v_227;
    v_227 = stack[0];
    if (!car_legal(v_227)) v_228 = carerror(v_227); else
    v_228 = car(v_227);
    v_227 = v_229;
    if (!car_legal(v_227)) v_227 = carerror(v_227); else
    v_227 = car(v_227);
    if (v_228 == v_227) goto v_214;
    else goto v_215;
v_214:
    v_227 = stack[0];
    return ncons(v_227);
v_215:
    v_227 = stack[0];
    v_228 = v_229;
    return list2(v_227, v_228);
    v_227 = nil;
    return onevalue(v_227);
}



// Code for aex_fvarl

static LispObject CC_aex_fvarl(LispObject env,
                         LispObject v_2)
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
    {   LispObject fn = basic_elt(env, 1); // aex_varl
    stack[-1] = (*qfn1(fn))(fn, v_10);
    }
    env = stack[-2];
    v_10 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // aex_ctx
    v_10 = (*qfn1(fn))(fn, v_10);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // ctx_idl
    v_10 = (*qfn1(fn))(fn, v_10);
    }
    env = stack[-2];
    {
        LispObject v_13 = stack[-1];
        LispObject fn = basic_elt(env, 4); // lto_setminus
        return (*qfn2(fn))(fn, v_13, v_10);
    }
}



// Code for variablesir

static LispObject CC_variablesir(LispObject env)
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
    v_31 = qvalue(basic_elt(env, 1)); // char
    v_30 = basic_elt(env, 2); // (!/ o m b v a r)
    if (equal(v_31, v_30)) goto v_10;
    {   LispObject fn = basic_elt(env, 3); // omvir
    v_30 = (*qfn0(fn))(fn);
    }
    env = stack[-1];
    stack[0] = v_30;
    {   LispObject fn = basic_elt(env, 4); // lex
    v_30 = (*qfn0(fn))(fn);
    }
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 0); // variablesir
    v_30 = (*qfn0(fn))(fn);
    }
    v_31 = stack[0];
    if (v_31 == nil) goto v_18;
    else goto v_19;
v_18:
    v_31 = stack[0];
        return Lappend_2(nil, v_31, v_30);
v_19:
    v_31 = stack[0];
    return cons(v_31, v_30);
    goto v_8;
v_10:
v_8:
    v_30 = nil;
    return onevalue(v_30);
}



// Code for freeoff

static LispObject CC_freeoff(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_87, v_88;
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
    v_87 = stack[-1];
    if (!consp(v_87)) goto v_14;
    else goto v_15;
v_14:
    v_87 = lisp_true;
    goto v_13;
v_15:
    v_87 = stack[-1];
    if (!car_legal(v_87)) v_87 = carerror(v_87); else
    v_87 = car(v_87);
    v_87 = (consp(v_87) ? nil : lisp_true);
    goto v_13;
    v_87 = nil;
v_13:
    if (v_87 == nil) goto v_11;
    v_87 = lisp_true;
    goto v_6;
v_11:
    v_87 = stack[-1];
    if (!car_legal(v_87)) v_87 = carerror(v_87); else
    v_87 = car(v_87);
    if (!car_legal(v_87)) v_87 = carerror(v_87); else
    v_87 = car(v_87);
    if (!car_legal(v_87)) v_87 = carerror(v_87); else
    v_87 = car(v_87);
    {   LispObject fn = basic_elt(env, 1); // sfp
    v_87 = (*qfn1(fn))(fn, v_87);
    }
    env = stack[-2];
    if (v_87 == nil) goto v_25;
    v_87 = stack[-1];
    if (!car_legal(v_87)) v_87 = carerror(v_87); else
    v_87 = car(v_87);
    if (!car_legal(v_87)) v_87 = carerror(v_87); else
    v_87 = car(v_87);
    if (!car_legal(v_87)) v_88 = carerror(v_87); else
    v_88 = car(v_87);
    v_87 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // freeoff
    v_87 = (*qfn2(fn))(fn, v_88, v_87);
    }
    env = stack[-2];
    if (v_87 == nil) goto v_34;
    v_87 = stack[-1];
    if (!car_legal(v_87)) v_87 = carerror(v_87); else
    v_87 = car(v_87);
    if (!car_legal(v_87)) v_88 = cdrerror(v_87); else
    v_88 = cdr(v_87);
    v_87 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // freeoff
    v_87 = (*qfn2(fn))(fn, v_88, v_87);
    }
    env = stack[-2];
    if (v_87 == nil) goto v_44;
    v_87 = stack[-1];
    if (!car_legal(v_87)) v_87 = cdrerror(v_87); else
    v_87 = cdr(v_87);
    stack[-1] = v_87;
    goto v_7;
v_44:
    v_87 = nil;
    goto v_6;
    goto v_32;
v_34:
    v_87 = nil;
    goto v_6;
v_32:
    goto v_9;
v_25:
    v_87 = stack[-1];
    if (!car_legal(v_87)) v_87 = carerror(v_87); else
    v_87 = car(v_87);
    if (!car_legal(v_87)) v_87 = carerror(v_87); else
    v_87 = car(v_87);
    if (!car_legal(v_87)) v_88 = carerror(v_87); else
    v_88 = car(v_87);
    v_87 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // ndepends
    v_87 = (*qfn2(fn))(fn, v_88, v_87);
    }
    env = stack[-2];
    if (v_87 == nil) goto v_62;
    else goto v_63;
v_62:
    v_87 = stack[-1];
    if (!car_legal(v_87)) v_87 = carerror(v_87); else
    v_87 = car(v_87);
    if (!car_legal(v_87)) v_88 = cdrerror(v_87); else
    v_88 = cdr(v_87);
    v_87 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // freeoff
    v_87 = (*qfn2(fn))(fn, v_88, v_87);
    }
    env = stack[-2];
    if (v_87 == nil) goto v_73;
    v_87 = stack[-1];
    if (!car_legal(v_87)) v_87 = cdrerror(v_87); else
    v_87 = cdr(v_87);
    stack[-1] = v_87;
    goto v_7;
v_73:
    v_87 = nil;
    goto v_6;
    goto v_61;
v_63:
    v_87 = nil;
    goto v_6;
v_61:
    goto v_9;
v_9:
    v_87 = nil;
v_6:
    return onevalue(v_87);
}



// Code for deleteall

static LispObject CC_deleteall(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_30, v_31, v_32, v_33;
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
    v_32 = nil;
v_9:
    v_30 = stack[0];
    if (v_30 == nil) goto v_12;
    else goto v_13;
v_12:
    v_30 = v_32;
    goto v_8;
v_13:
    v_30 = stack[0];
    if (!car_legal(v_30)) v_30 = carerror(v_30); else
    v_30 = car(v_30);
    v_33 = v_30;
    v_30 = stack[0];
    if (!car_legal(v_30)) v_30 = cdrerror(v_30); else
    v_30 = cdr(v_30);
    stack[0] = v_30;
    v_31 = v_33;
    v_30 = stack[-1];
    if (equal(v_31, v_30)) goto v_23;
    stack[-2] = v_32;
    v_30 = v_33;
    v_30 = ncons(v_30);
    env = stack[-3];
    v_30 = Lnconc(nil, stack[-2], v_30);
    env = stack[-3];
    v_32 = v_30;
    goto v_21;
v_23:
v_21:
    goto v_9;
v_8:
    return onevalue(v_30);
}



// Code for cstimes

static LispObject CC_cstimes(LispObject env,
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
// space for vars preserved across procedure calls
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    v_48 = v_3;
    v_49 = v_2;
// end of prologue
v_8:
    v_47 = v_49;
    if (v_47 == nil) goto v_11;
    else goto v_12;
v_11:
    v_47 = v_48;
    if (v_47 == nil) goto v_16;
    else goto v_17;
v_16:
    v_47 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_7;
v_17:
    v_47 = v_48;
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    if (v_47 == nil) goto v_20;
    else goto v_21;
v_20:
    v_47 = v_48;
    if (!car_legal(v_47)) v_47 = carerror(v_47); else
    v_47 = car(v_47);
    goto v_7;
v_21:
    v_47 = basic_elt(env, 1); // times
    return cons(v_47, v_48);
    goto v_10;
v_12:
    v_47 = v_49;
    if (!car_legal(v_47)) v_50 = carerror(v_47); else
    v_50 = car(v_47);
    v_47 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_50 == v_47) goto v_31;
    else goto v_32;
v_31:
    v_47 = v_49;
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    v_49 = v_47;
    goto v_8;
v_32:
    v_47 = v_49;
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    stack[0] = v_47;
    v_47 = v_49;
    if (!car_legal(v_47)) v_47 = carerror(v_47); else
    v_47 = car(v_47);
    v_47 = cons(v_47, v_48);
    env = stack[-1];
    v_48 = v_47;
    v_47 = stack[0];
    v_49 = v_47;
    goto v_8;
v_10:
    v_47 = nil;
v_7:
    return onevalue(v_47);
}



// Code for simprepart

static LispObject CC_simprepart(LispObject env,
                         LispObject v_2)
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
    v_13 = v_2;
// end of prologue
    v_12 = nil;
// Binding !*factor
// FLUIDBIND: reloadenv=1 litvec-offset=1 saveloc=0
{   bind_fluid_stack bind_fluid_var(-1, 1, 0);
    setvalue(basic_elt(env, 1), v_12); // !*factor
    v_12 = v_13;
    if (!car_legal(v_12)) v_12 = carerror(v_12); else
    v_12 = car(v_12);
    {   LispObject fn = basic_elt(env, 2); // simp!*
    v_12 = (*qfn1(fn))(fn, v_12);
    }
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // repartsq
    v_12 = (*qfn1(fn))(fn, v_12);
    }
    ;}  // end of a binding scope
    return onevalue(v_12);
}



// Code for command

static LispObject CC_command(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_249, v_250, v_251;
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
// Binding errmsg!*
// FLUIDBIND: reloadenv=6 litvec-offset=1 saveloc=5
{   bind_fluid_stack bind_fluid_var(-6, 1, -5);
    setvalue(basic_elt(env, 1), nil); // errmsg!*
// Binding loopdelimslist!*
// FLUIDBIND: reloadenv=6 litvec-offset=2 saveloc=4
{   bind_fluid_stack bind_fluid_var(-6, 2, -4);
    setvalue(basic_elt(env, 2), nil); // loopdelimslist!*
    v_249 = qvalue(basic_elt(env, 3)); // !*demo
    if (v_249 == nil) goto v_18;
    v_249 = qvalue(basic_elt(env, 4)); // ifl!*
    if (v_249 == nil) goto v_18;
    {   LispObject fn = basic_elt(env, 27); // commdemo
    v_249 = (*qfn0(fn))(fn);
    }
    goto v_11;
v_18:
    v_249 = qvalue(basic_elt(env, 5)); // !*slin
    if (v_249 == nil) goto v_28;
    else goto v_29;
v_28:
    v_249 = lisp_true;
    goto v_27;
v_29:
    v_249 = qvalue(basic_elt(env, 6)); // !*reduce4
    goto v_27;
    v_249 = nil;
v_27:
    if (v_249 == nil) goto v_25;
    goto v_12;
v_25:
    {   LispObject fn = basic_elt(env, 28); // setcloc!*
    v_249 = (*qfn0(fn))(fn);
    }
    env = stack[-6];
    v_249 = qvalue(basic_elt(env, 7)); // lreadfn!*
    if (v_249 == nil) goto v_39;
    v_250 = qvalue(basic_elt(env, 7)); // lreadfn!*
    v_249 = nil;
    {   LispObject fn = basic_elt(env, 29); // lispapply
    v_249 = (*qfn2(fn))(fn, v_250, v_249);
    }
    env = stack[-6];
    goto v_37;
v_39:
    v_249 = Lread(nil);
    env = stack[-6];
    goto v_37;
    v_249 = nil;
v_37:
    stack[0] = v_249;
    goto v_13;
v_12:
    {   LispObject fn = basic_elt(env, 30); // readch1
    v_249 = (*qfn0(fn))(fn);
    }
    env = stack[-6];
    setvalue(basic_elt(env, 8), v_249); // crchar!*
    v_250 = qvalue(basic_elt(env, 8)); // crchar!*
    v_249 = qvalue(basic_elt(env, 9)); // !$eol!$
    if (equal(v_250, v_249)) goto v_50;
    else goto v_51;
v_50:
    goto v_12;
v_51:
    {   LispObject fn = basic_elt(env, 31); // command1
    v_249 = (*qfn0(fn))(fn);
    }
    env = stack[-6];
    stack[0] = v_249;
v_13:
    v_249 = qvalue(basic_elt(env, 6)); // !*reduce4
    if (v_249 == nil) goto v_58;
    goto v_14;
v_58:
    v_249 = qvalue(basic_elt(env, 10)); // !*struct
    if (v_249 == nil) goto v_61;
    v_249 = stack[0];
    {   LispObject fn = basic_elt(env, 32); // structchk
    v_249 = (*qfn1(fn))(fn, v_249);
    }
    env = stack[-6];
    stack[0] = v_249;
    goto v_56;
v_61:
v_56:
    v_249 = qvalue(basic_elt(env, 11)); // !*pret
    if (v_249 == nil) goto v_68;
    v_249 = stack[0];
    if (!consp(v_249)) goto v_74;
    else goto v_75;
v_74:
    v_249 = lisp_true;
    goto v_73;
v_75:
    v_249 = stack[0];
    if (!car_legal(v_249)) v_250 = carerror(v_249); else
    v_250 = car(v_249);
    v_249 = basic_elt(env, 12); // (in out shut)
    v_249 = Lmemq(nil, v_250, v_249);
    v_249 = (v_249 == nil ? lisp_true : nil);
    goto v_73;
    v_249 = nil;
v_73:
    if (v_249 == nil) goto v_68;
    v_249 = stack[0];
    if (v_249 == nil) goto v_91;
    else goto v_92;
v_91:
    v_250 = qvalue(basic_elt(env, 13)); // cursym!*
    v_249 = basic_elt(env, 14); // end
    v_249 = (v_250 == v_249 ? lisp_true : nil);
    goto v_90;
v_92:
    v_249 = nil;
    goto v_90;
    v_249 = nil;
v_90:
    if (v_249 == nil) goto v_88;
    v_249 = basic_elt(env, 14); // end
    {   LispObject fn = basic_elt(env, 33); // rprint
    v_249 = (*qfn1(fn))(fn, v_249);
    }
    env = stack[-6];
    goto v_86;
v_88:
    v_249 = stack[0];
    {   LispObject fn = basic_elt(env, 33); // rprint
    v_249 = (*qfn1(fn))(fn, v_249);
    }
    env = stack[-6];
    v_249 = Lterpri(nil);
    env = stack[-6];
    goto v_86;
v_86:
    goto v_66;
v_68:
v_66:
    v_249 = qvalue(basic_elt(env, 5)); // !*slin
    if (v_249 == nil) goto v_110;
    v_250 = basic_elt(env, 15); // symbolic
    v_249 = stack[0];
    v_249 = list2(v_250, v_249);
    goto v_11;
v_110:
    v_249 = stack[0];
    {   LispObject fn = basic_elt(env, 34); // form
    v_249 = (*qfn1(fn))(fn, v_249);
    }
    env = stack[-6];
    v_251 = v_249;
    v_249 = qvalue(basic_elt(env, 16)); // key!*
    if (!symbolp(v_249)) v_249 = nil;
    else { v_249 = qfastgets(v_249);
           if (v_249 != nil) { v_249 = elt(v_249, 48); // modefn
#ifdef RECORD_GET
             if (v_249 == SPID_NOPROP)
                record_get(elt(fastget_names, 48), 0),
                v_249 = nil;
             else record_get(elt(fastget_names, 48), 1),
                v_249 = lisp_true; }
           else record_get(elt(fastget_names, 48), 0); }
#else
             if (v_249 == SPID_NOPROP) v_249 = nil; else v_249 = lisp_true; }}
#endif
    if (v_249 == nil) goto v_120;
    v_249 = qvalue(basic_elt(env, 16)); // key!*
    goto v_118;
v_120:
    v_249 = v_251;
    if (!consp(v_249)) goto v_129;
    v_249 = v_251;
    if (!car_legal(v_249)) v_250 = carerror(v_249); else
    v_250 = car(v_249);
    v_249 = basic_elt(env, 17); // quote
    if (v_250 == v_249) goto v_134;
    v_249 = v_251;
    if (!car_legal(v_249)) v_249 = carerror(v_249); else
    v_249 = car(v_249);
    if (symbolp(v_249)) goto v_142;
    else goto v_140;
v_142:
    v_249 = v_251;
    if (!car_legal(v_249)) v_250 = carerror(v_249); else
    v_250 = car(v_249);
    v_249 = basic_elt(env, 18); // nochange
    v_249 = Lflagp(nil, v_250, v_249);
    env = stack[-6];
    if (v_249 == nil) goto v_149;
    v_249 = lisp_true;
    goto v_147;
v_149:
    v_249 = v_251;
    if (!car_legal(v_249)) v_250 = carerror(v_249); else
    v_250 = car(v_249);
    v_249 = basic_elt(env, 19); // intfn
    v_249 = Lflagp(nil, v_250, v_249);
    env = stack[-6];
    if (v_249 == nil) goto v_160;
    v_249 = lisp_true;
    goto v_158;
v_160:
    v_249 = v_251;
    if (!car_legal(v_249)) v_250 = carerror(v_249); else
    v_250 = car(v_249);
    v_249 = basic_elt(env, 20); // list
    v_249 = (v_250 == v_249 ? lisp_true : nil);
    goto v_158;
    v_249 = nil;
v_158:
    goto v_147;
    v_249 = nil;
v_147:
    if (v_249 == nil) goto v_140;
    goto v_141;
v_140:
    v_249 = lisp_true;
    goto v_139;
v_141:
    v_249 = v_251;
    if (!car_legal(v_249)) v_250 = carerror(v_249); else
    v_250 = car(v_249);
    v_249 = basic_elt(env, 21); // (setq setel setf)
    v_249 = Lmemq(nil, v_250, v_249);
    if (v_249 == nil) goto v_177;
    else goto v_178;
v_177:
    v_249 = nil;
    goto v_176;
v_178:
    v_249 = v_251;
    if (!car_legal(v_249)) v_249 = cdrerror(v_249); else
    v_249 = cdr(v_249);
    if (!car_legal(v_249)) v_249 = cdrerror(v_249); else
    v_249 = cdr(v_249);
    if (!car_legal(v_249)) v_250 = carerror(v_249); else
    v_250 = car(v_249);
    v_249 = basic_elt(env, 17); // quote
    v_249 = Leqcar(nil, v_250, v_249);
    env = stack[-6];
    goto v_176;
    v_249 = nil;
v_176:
    goto v_139;
    v_249 = nil;
v_139:
    goto v_132;
v_134:
    v_249 = nil;
    goto v_132;
    v_249 = nil;
v_132:
    goto v_127;
v_129:
    v_249 = nil;
    goto v_127;
    v_249 = nil;
v_127:
    if (v_249 == nil) goto v_125;
    v_249 = basic_elt(env, 15); // symbolic
    goto v_118;
v_125:
    v_249 = qvalue(basic_elt(env, 22)); // !*mode
    goto v_118;
v_118:
    stack[-3] = v_249;
    stack[-2] = v_251;
    stack[-1] = nil;
    stack[0] = basic_elt(env, 15); // symbolic
    v_249 = ncons(v_249);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 35); // convertmode1
    v_249 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_249);
    }
    env = stack[-6];
    v_249 = list2(stack[-3], v_249);
    goto v_11;
v_14:
    v_249 = qvalue(basic_elt(env, 23)); // !*debug
    if (v_249 == nil) goto v_213;
    v_249 = basic_elt(env, 24); // "Parse: "
    v_249 = Lprinc(nil, v_249);
    env = stack[-6];
    v_249 = stack[0];
    {   LispObject fn = basic_elt(env, 36); // prettyprint
    v_249 = (*qfn1(fn))(fn, v_249);
    }
    env = stack[-6];
    goto v_211;
v_213:
v_211:
    v_250 = qvalue(basic_elt(env, 16)); // key!*
    v_249 = basic_elt(env, 25); // !*semicol!*
    if (v_250 == v_249) goto v_221;
    else goto v_222;
v_221:
    goto v_12;
v_222:
    v_249 = qvalue(basic_elt(env, 6)); // !*reduce4
    if (v_249 == nil) goto v_227;
    else goto v_228;
v_227:
    v_249 = stack[0];
    {   LispObject fn = basic_elt(env, 34); // form
    v_249 = (*qfn1(fn))(fn, v_249);
    }
    env = stack[-6];
    stack[0] = v_249;
    goto v_226;
v_228:
    v_249 = stack[0];
    {   LispObject fn = basic_elt(env, 37); // n_form
    v_249 = (*qfn1(fn))(fn, v_249);
    }
    env = stack[-6];
    stack[0] = v_249;
    goto v_226;
v_226:
    v_249 = qvalue(basic_elt(env, 23)); // !*debug
    if (v_249 == nil) goto v_239;
    v_249 = Lterpri(nil);
    env = stack[-6];
    v_249 = basic_elt(env, 26); // "Form: "
    v_249 = Lprinc(nil, v_249);
    env = stack[-6];
    v_249 = stack[0];
    {   LispObject fn = basic_elt(env, 36); // prettyprint
    v_249 = (*qfn1(fn))(fn, v_249);
    }
    goto v_237;
v_239:
v_237:
    v_249 = stack[0];
v_11:
    ;}  // end of a binding scope
    ;}  // end of a binding scope
    return onevalue(v_249);
}



// Code for sf_member

static LispObject CC_sf_member(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
v_1:
    v_44 = stack[0];
    if (!consp(v_44)) goto v_11;
    else goto v_12;
v_11:
    v_44 = lisp_true;
    goto v_10;
v_12:
    v_44 = stack[0];
    if (!car_legal(v_44)) v_44 = carerror(v_44); else
    v_44 = car(v_44);
    v_44 = (consp(v_44) ? nil : lisp_true);
    goto v_10;
    v_44 = nil;
v_10:
    if (v_44 == nil) goto v_7;
    else goto v_8;
v_7:
    v_45 = stack[-1];
    v_44 = stack[0];
    if (!car_legal(v_44)) v_44 = carerror(v_44); else
    v_44 = car(v_44);
    if (!car_legal(v_44)) v_44 = carerror(v_44); else
    v_44 = car(v_44);
    if (!car_legal(v_44)) v_44 = carerror(v_44); else
    v_44 = car(v_44);
    {   LispObject fn = basic_elt(env, 1); // mvar_member
    v_44 = (*qfn2(fn))(fn, v_45, v_44);
    }
    env = stack[-2];
    if (v_44 == nil) goto v_22;
    else goto v_21;
v_22:
    v_45 = stack[-1];
    v_44 = stack[0];
    if (!car_legal(v_44)) v_44 = carerror(v_44); else
    v_44 = car(v_44);
    if (!car_legal(v_44)) v_44 = cdrerror(v_44); else
    v_44 = cdr(v_44);
    {   LispObject fn = basic_elt(env, 0); // sf_member
    v_44 = (*qfn2(fn))(fn, v_45, v_44);
    }
    env = stack[-2];
    if (v_44 == nil) goto v_31;
    else goto v_30;
v_31:
    v_45 = stack[-1];
    v_44 = stack[0];
    if (!car_legal(v_44)) v_44 = cdrerror(v_44); else
    v_44 = cdr(v_44);
    stack[-1] = v_45;
    stack[0] = v_44;
    goto v_1;
v_30:
v_21:
    goto v_6;
v_8:
    v_44 = nil;
    goto v_6;
    v_44 = nil;
v_6:
    return onevalue(v_44);
}



// Code for !:divide

static LispObject CC_Tdivide(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_40, v_41, v_42;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_41 = v_3;
    v_42 = v_2;
// end of prologue
    v_40 = v_42;
    if (v_40 == nil) goto v_7;
    else goto v_8;
v_7:
    v_40 = nil;
    return ncons(v_40);
v_8:
    v_40 = v_41;
    if (v_40 == nil) goto v_12;
    else goto v_13;
v_12:
    v_42 = basic_elt(env, 1); // poly
    v_41 = static_cast<LispObject>(3232)+TAG_FIXNUM; // 202
    v_40 = basic_elt(env, 2); // "zero divisor"
    {
        LispObject fn = basic_elt(env, 4); // rerror
        return (*qfn3(fn))(fn, v_42, v_41, v_40);
    }
v_13:
    v_40 = v_42;
    if (!consp(v_40)) goto v_23;
    else goto v_24;
v_23:
    v_40 = v_41;
    v_40 = (consp(v_40) ? nil : lisp_true);
    goto v_22;
v_24:
    v_40 = nil;
    goto v_22;
    v_40 = nil;
v_22:
    if (v_40 == nil) goto v_20;
    v_40 = v_42;
    {
        LispObject fn = basic_elt(env, 5); // dividef
        return (*qfn2(fn))(fn, v_40, v_41);
    }
v_20:
    v_40 = basic_elt(env, 3); // divide
    {
        LispObject fn = basic_elt(env, 6); // dcombine
        return (*qfn3(fn))(fn, v_42, v_41, v_40);
    }
    v_40 = nil;
    return onevalue(v_40);
}



// Code for b!:extadd

static LispObject CC_bTextadd(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_92, v_93, v_94;
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
    v_92 = stack[-1];
    if (v_92 == nil) goto v_14;
    else goto v_15;
v_14:
    v_92 = stack[0];
    v_93 = v_92;
    goto v_11;
v_15:
    v_92 = stack[0];
    if (v_92 == nil) goto v_18;
    else goto v_19;
v_18:
    v_92 = stack[-1];
    v_93 = v_92;
    goto v_11;
v_19:
    v_92 = stack[-1];
    if (!car_legal(v_92)) v_92 = carerror(v_92); else
    v_92 = car(v_92);
    if (!car_legal(v_92)) v_93 = carerror(v_92); else
    v_93 = car(v_92);
    v_92 = stack[0];
    if (!car_legal(v_92)) v_92 = carerror(v_92); else
    v_92 = car(v_92);
    if (!car_legal(v_92)) v_92 = carerror(v_92); else
    v_92 = car(v_92);
    if (equal(v_93, v_92)) goto v_22;
    else goto v_23;
v_22:
    v_92 = stack[-1];
    if (!car_legal(v_92)) v_92 = carerror(v_92); else
    v_92 = car(v_92);
    if (!car_legal(v_92)) v_93 = cdrerror(v_92); else
    v_93 = cdr(v_92);
    v_92 = stack[0];
    if (!car_legal(v_92)) v_92 = carerror(v_92); else
    v_92 = car(v_92);
    if (!car_legal(v_92)) v_92 = cdrerror(v_92); else
    v_92 = cdr(v_92);
    {   LispObject fn = basic_elt(env, 1); // addf
    v_92 = (*qfn2(fn))(fn, v_93, v_92);
    }
    env = stack[-3];
    v_93 = v_92;
    if (v_93 == nil) goto v_40;
    v_93 = stack[-1];
    if (!car_legal(v_93)) v_93 = carerror(v_93); else
    v_93 = car(v_93);
    if (!car_legal(v_93)) v_94 = carerror(v_93); else
    v_94 = car(v_93);
    v_93 = v_92;
    v_92 = stack[-2];
    v_92 = acons(v_94, v_93, v_92);
    env = stack[-3];
    stack[-2] = v_92;
    goto v_38;
v_40:
v_38:
    v_92 = stack[-1];
    if (!car_legal(v_92)) v_92 = cdrerror(v_92); else
    v_92 = cdr(v_92);
    stack[-1] = v_92;
    v_92 = stack[0];
    if (!car_legal(v_92)) v_92 = cdrerror(v_92); else
    v_92 = cdr(v_92);
    stack[0] = v_92;
    goto v_10;
v_23:
    v_92 = stack[-1];
    if (!car_legal(v_92)) v_92 = carerror(v_92); else
    v_92 = car(v_92);
    if (!car_legal(v_92)) v_93 = carerror(v_92); else
    v_93 = car(v_92);
    v_92 = stack[0];
    if (!car_legal(v_92)) v_92 = carerror(v_92); else
    v_92 = car(v_92);
    if (!car_legal(v_92)) v_92 = carerror(v_92); else
    v_92 = car(v_92);
    {   LispObject fn = basic_elt(env, 2); // b!:ordexp
    v_92 = (*qfn2(fn))(fn, v_93, v_92);
    }
    env = stack[-3];
    if (v_92 == nil) goto v_53;
    v_92 = stack[-1];
    if (!car_legal(v_92)) v_93 = carerror(v_92); else
    v_93 = car(v_92);
    v_92 = stack[-2];
    v_92 = cons(v_93, v_92);
    env = stack[-3];
    stack[-2] = v_92;
    v_92 = stack[-1];
    if (!car_legal(v_92)) v_92 = cdrerror(v_92); else
    v_92 = cdr(v_92);
    stack[-1] = v_92;
    goto v_10;
v_53:
    v_92 = stack[0];
    if (!car_legal(v_92)) v_93 = carerror(v_92); else
    v_93 = car(v_92);
    v_92 = stack[-2];
    v_92 = cons(v_93, v_92);
    env = stack[-3];
    stack[-2] = v_92;
    v_92 = stack[0];
    if (!car_legal(v_92)) v_92 = cdrerror(v_92); else
    v_92 = cdr(v_92);
    stack[0] = v_92;
    goto v_10;
v_11:
v_77:
    v_92 = stack[-2];
    if (v_92 == nil) goto v_80;
    else goto v_81;
v_80:
    goto v_76;
v_81:
    v_92 = stack[-2];
    if (!car_legal(v_92)) v_92 = cdrerror(v_92); else
    v_92 = cdr(v_92);
    stack[-1] = v_92;
    v_92 = stack[-2];
    if (!car_legal(v_92)) rplacd_fails(v_92);
    setcdr(v_92, v_93);
    v_92 = stack[-2];
    v_93 = v_92;
    v_92 = stack[-1];
    stack[-2] = v_92;
    goto v_77;
v_76:
    v_92 = v_93;
    return onevalue(v_92);
}



// Code for in_list1

static LispObject CC_in_list1(LispObject env,
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
    v_10 = v_9;
    v_9 = nil;
    {
        LispObject fn = basic_elt(env, 1); // in_list1a
        return (*qfn3(fn))(fn, v_11, v_10, v_9);
    }
}



setup_type const u18_setup[] =
{
    {"lex_restore_context",     G0W1,     CC_lex_restore_context,G2W1,G3W1,G4W1},
    {"outdefr",                 G0W2,     G1W2,     CC_outdefr,G3W2,    G4W2},
    {"processpartitie1",        G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_processpartitie1},
    {"remove-free-vars*",       G0W1,     CC_removeKfreeKvarsH,G2W1,G3W1,G4W1},
    {"degree-in-variable",      G0W2,     G1W2,     CC_degreeKinKvariable,G3W2,G4W2},
    {"constsml",                G0W1,     CC_constsml,G2W1,   G3W1,     G4W1},
    {"ldt-tvar",                G0W1,     CC_ldtKtvar,G2W1,   G3W1,     G4W1},
    {"maprin",                  G0W1,     CC_maprin,G2W1,     G3W1,     G4W1},
    {"findnewvars",             G0W1,     CC_findnewvars,G2W1,G3W1,     G4W1},
    {"xord_gradlex",            G0W2,     G1W2,     CC_xord_gradlex,G3W2,G4W2},
    {"physopaeval",             G0W1,     CC_physopaeval,G2W1,G3W1,     G4W1},
    {"contr1-strand",           G0W2,     G1W2,     CC_contr1Kstrand,G3W2,G4W2},
    {"simp-sign",               G0W1,     CC_simpKsign,G2W1,  G3W1,     G4W1},
    {"sqp",                     G0W1,     CC_sqp,   G2W1,     G3W1,     G4W1},
    {"mo_from_a",               G0W1,     CC_mo_from_a,G2W1,  G3W1,     G4W1},
    {"get_action",              G0W2,     G1W2,     CC_get_action,G3W2, G4W2},
    {"read_typed_name",         CC_read_typed_name,G1W0,G2W0, G3W0,     G4W0},
    {"rl_bestgaussp",           G0W1,     CC_rl_bestgaussp,G2W1,G3W1,   G4W1},
    {"mkkl",                    G0W2,     G1W2,     CC_mkkl,  G3W2,     G4W2},
    {"findremainder",           G0W2,     G1W2,     CC_findremainder,G3W2,G4W2},
    {"prepsq*",                 G0W1,     CC_prepsqH,G2W1,    G3W1,     G4W1},
    {"talp_eqtp",               G0W2,     G1W2,     CC_talp_eqtp,G3W2,  G4W2},
    {"qqe_number-of-adds-in-qterm",G0W1,  CC_qqe_numberKofKaddsKinKqterm,G2W1,G3W1,G4W1},
    {"subf",                    G0W2,     G1W2,     CC_subf,  G3W2,     G4W2},
    {"cl_nnf1",                 G0W2,     G1W2,     CC_cl_nnf1,G3W2,    G4W2},
    {"cgp_number",              G0W1,     CC_cgp_number,G2W1, G3W1,     G4W1},
    {"nary",                    G0W2,     G1W2,     CC_nary,  G3W2,     G4W2},
    {"sacar",                   G0W2,     G1W2,     CC_sacar, G3W2,     G4W2},
    {"inshisto",                G0W1,     CC_inshisto,G2W1,   G3W1,     G4W1},
    {"bcplus?",                 G0W1,     CC_bcplusW,G2W1,    G3W1,     G4W1},
    {"groebbuchcrit4t",         G0W2,     G1W2,     CC_groebbuchcrit4t,G3W2,G4W2},
    {"*pf2wedgepf",             G0W1,     CC_Hpf2wedgepf,G2W1,G3W1,     G4W1},
    {"pv_times1",               G0W3,     G1W3,     G2W3,     CC_pv_times1,G4W3},
    {"general-reduce-degree-mod-p",G0W2,  G1W2,     CC_generalKreduceKdegreeKmodKp,G3W2,G4W2},
    {"update_kc_list",          G0W3,     G1W3,     G2W3,     CC_update_kc_list,G4W3},
    {"ofsf_pow2q",              G0W2,     G1W2,     CC_ofsf_pow2q,G3W2, G4W2},
    {"prepreform",              G0W1,     CC_prepreform,G2W1, G3W1,     G4W1},
    {"exptcompare",             G0W2,     G1W2,     CC_exptcompare,G3W2,G4W2},
    {"cl_smsimpl-junct2",       G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_cl_smsimplKjunct2},
    {"cl_pnf2-junctor",         G0W1,     CC_cl_pnf2Kjunctor,G2W1,G3W1, G4W1},
    {"aex_fvarl",               G0W1,     CC_aex_fvarl,G2W1,  G3W1,     G4W1},
    {"variablesir",             CC_variablesir,G1W0,G2W0,     G3W0,     G4W0},
    {"freeoff",                 G0W2,     G1W2,     CC_freeoff,G3W2,    G4W2},
    {"deleteall",               G0W2,     G1W2,     CC_deleteall,G3W2,  G4W2},
    {"cstimes",                 G0W2,     G1W2,     CC_cstimes,G3W2,    G4W2},
    {"simprepart",              G0W1,     CC_simprepart,G2W1, G3W1,     G4W1},
    {"command",                 CC_command,G1W0,    G2W0,     G3W0,     G4W0},
    {"sf_member",               G0W2,     G1W2,     CC_sf_member,G3W2,  G4W2},
    {":divide",                 G0W2,     G1W2,     CC_Tdivide,G3W2,    G4W2},
    {"b:extadd",                G0W2,     G1W2,     CC_bTextadd,G3W2,   G4W2},
    {"in_list1",                G0W2,     G1W2,     CC_in_list1,G3W2,   G4W2},
    {nullptr, 
        reinterpret_cast<no_args *>(
            reinterpret_cast<uintptr_t>("u18")),
        reinterpret_cast<one_arg *>(
            reinterpret_cast<uintptr_t>("65019 3311847 2073648")),
        nullptr, nullptr, nullptr}
};

// end of generated code
