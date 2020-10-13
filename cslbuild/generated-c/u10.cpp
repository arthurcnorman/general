
// $destdir/u10.c        Machine generated C code

// $Id$

#include "config.h"
#include "headers.h"



// Code for ptoken

static LispObject CC_ptoken(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil);
    stack_popper stack_popper_var(2);
// end of prologue
    {   LispObject fn = basic_elt(env, 5); // token
    v_46 = (*qfn0(fn))(fn);
    }
    env = stack[-1];
    stack[0] = v_46;
    v_47 = stack[0];
    v_46 = basic_elt(env, 1); // !)
    if (v_47 == v_46) goto v_13;
    else goto v_14;
v_13:
    v_47 = qvalue(basic_elt(env, 2)); // outl!*
    v_46 = basic_elt(env, 3); // ! 
    v_46 = Leqcar(nil, v_47, v_46);
    env = stack[-1];
    goto v_12;
v_14:
    v_46 = nil;
    goto v_12;
    v_46 = nil;
v_12:
    if (v_46 == nil) goto v_10;
    v_46 = qvalue(basic_elt(env, 2)); // outl!*
    if (!car_legal(v_46)) v_46 = cdrerror(v_46); else
    v_46 = cdr(v_46);
    setvalue(basic_elt(env, 2), v_46); // outl!*
    goto v_8;
v_10:
v_8:
    v_46 = stack[0];
    {   LispObject fn = basic_elt(env, 6); // prin2x
    v_46 = (*qfn1(fn))(fn, v_46);
    }
    env = stack[-1];
    v_47 = stack[0];
    v_46 = basic_elt(env, 4); // !(
    if (v_47 == v_46) goto v_33;
    else goto v_34;
v_33:
    v_46 = lisp_true;
    goto v_32;
v_34:
    v_47 = stack[0];
    v_46 = basic_elt(env, 1); // !)
    v_46 = (v_47 == v_46 ? lisp_true : nil);
    goto v_32;
    v_46 = nil;
v_32:
    if (v_46 == nil) goto v_29;
    else goto v_30;
v_29:
    v_46 = basic_elt(env, 3); // ! 
    {   LispObject fn = basic_elt(env, 6); // prin2x
    v_46 = (*qfn1(fn))(fn, v_46);
    }
    goto v_28;
v_30:
v_28:
    v_46 = stack[0];
    return onevalue(v_46);
}



// Code for formc

static LispObject CC_formc(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    stack[-2] = v_4;
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    v_47 = qvalue(basic_elt(env, 1)); // !*rlisp88
    if (v_47 == nil) goto v_9;
    v_48 = stack[-1];
    v_47 = basic_elt(env, 2); // modefn
    v_47 = Lflagpcar(nil, v_48, v_47);
    env = stack[-4];
    if (v_47 == nil) goto v_9;
    v_47 = stack[-1];
    if (!car_legal(v_47)) v_48 = carerror(v_47); else
    v_48 = car(v_47);
    v_47 = basic_elt(env, 3); // symbolic
    if (v_48 == v_47) goto v_9;
    v_48 = basic_elt(env, 4); // "algebraic expression"
    v_47 = basic_elt(env, 5); // "Rlisp88 form"
    {
        LispObject fn = basic_elt(env, 7); // typerr
        return (*qfn2(fn))(fn, v_48, v_47);
    }
v_9:
    v_48 = stack[-2];
    v_47 = basic_elt(env, 6); // algebraic
    if (v_48 == v_47) goto v_28;
    else goto v_29;
v_28:
    v_48 = stack[-1];
    v_47 = stack[0];
    {   LispObject fn = basic_elt(env, 8); // intexprnp
    v_47 = (*qfn2(fn))(fn, v_48, v_47);
    }
    env = stack[-4];
    goto v_27;
v_29:
    v_47 = nil;
    goto v_27;
    v_47 = nil;
v_27:
    if (v_47 == nil) goto v_25;
    v_47 = stack[-1];
    goto v_7;
v_25:
    stack[-3] = stack[-1];
    stack[-1] = stack[0];
    stack[0] = basic_elt(env, 3); // symbolic
    v_47 = stack[-2];
    v_47 = ncons(v_47);
    env = stack[-4];
    {
        LispObject v_53 = stack[-3];
        LispObject v_54 = stack[-1];
        LispObject v_55 = stack[0];
        LispObject fn = basic_elt(env, 9); // convertmode
        return (*qfn4up(fn))(fn, v_53, v_54, v_55, v_47);
    }
    v_47 = nil;
v_7:
    return onevalue(v_47);
}



// Code for wuorderp

static LispObject CC_wuorderp(LispObject env,
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
    v_87 = v_3;
    v_88 = v_2;
// end of prologue
    v_85 = nil;
    v_84 = v_88;
    v_83 = v_87;
    if (v_84 == v_83) goto v_11;
    else goto v_12;
v_11:
    v_83 = nil;
    goto v_8;
v_12:
    v_83 = qvalue(basic_elt(env, 1)); // wukord!*
    v_86 = v_83;
v_19:
    v_83 = v_86;
    if (v_83 == nil) goto v_22;
    v_83 = v_85;
    if (v_83 == nil) goto v_26;
    else goto v_22;
v_26:
    goto v_23;
v_22:
    goto v_18;
v_23:
    v_84 = v_88;
    v_83 = v_86;
    if (!car_legal(v_83)) v_83 = carerror(v_83); else
    v_83 = car(v_83);
    if (v_84 == v_83) goto v_31;
    else goto v_32;
v_31:
    v_84 = v_87;
    v_83 = v_86;
    if (!car_legal(v_83)) v_83 = cdrerror(v_83); else
    v_83 = cdr(v_83);
    v_83 = Lmemq(nil, v_84, v_83);
    if (v_83 == nil) goto v_39;
    v_83 = basic_elt(env, 2); // yes
    goto v_37;
v_39:
    v_83 = basic_elt(env, 3); // no
    goto v_37;
    v_83 = nil;
v_37:
    v_85 = v_83;
    goto v_30;
v_32:
    v_84 = v_87;
    v_83 = v_86;
    if (!car_legal(v_83)) v_83 = carerror(v_83); else
    v_83 = car(v_83);
    if (v_84 == v_83) goto v_48;
    else goto v_49;
v_48:
    v_84 = v_88;
    v_83 = v_86;
    if (!car_legal(v_83)) v_83 = cdrerror(v_83); else
    v_83 = cdr(v_83);
    v_83 = Lmemq(nil, v_84, v_83);
    if (v_83 == nil) goto v_56;
    v_83 = basic_elt(env, 3); // no
    goto v_54;
v_56:
    v_83 = basic_elt(env, 2); // yes
    goto v_54;
    v_83 = nil;
v_54:
    v_85 = v_83;
    goto v_30;
v_49:
    v_83 = v_86;
    if (!car_legal(v_83)) v_83 = cdrerror(v_83); else
    v_83 = cdr(v_83);
    v_86 = v_83;
    goto v_30;
v_30:
    goto v_19;
v_18:
    v_83 = v_85;
    if (v_83 == nil) goto v_72;
    v_83 = v_85;
    v_84 = basic_elt(env, 2); // yes
    v_83 = (v_83 == v_84 ? lisp_true : nil);
    goto v_70;
v_72:
    v_83 = v_88;
    v_84 = v_87;
    v_83 = Lorderp(nil, v_83, v_84);
    v_83 = (v_83 == nil ? lisp_true : nil);
    goto v_70;
    v_83 = nil;
v_70:
v_8:
    return onevalue(v_83);
}



// Code for freevarinexptchk

static LispObject CC_freevarinexptchk(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_43;
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
    v_43 = stack[0];
    if (!consp(v_43)) goto v_10;
    else goto v_11;
v_10:
    v_43 = lisp_true;
    goto v_9;
v_11:
    v_43 = stack[0];
    if (!car_legal(v_43)) v_43 = carerror(v_43); else
    v_43 = car(v_43);
    v_43 = (consp(v_43) ? nil : lisp_true);
    goto v_9;
    v_43 = nil;
v_9:
    if (v_43 == nil) goto v_6;
    else goto v_7;
v_6:
    v_43 = stack[0];
    if (!car_legal(v_43)) v_43 = carerror(v_43); else
    v_43 = car(v_43);
    if (!car_legal(v_43)) v_43 = carerror(v_43); else
    v_43 = car(v_43);
    if (!car_legal(v_43)) v_43 = cdrerror(v_43); else
    v_43 = cdr(v_43);
    if (is_number(v_43)) goto v_22;
    v_43 = lisp_true;
    goto v_20;
v_22:
    v_43 = stack[0];
    if (!car_legal(v_43)) v_43 = carerror(v_43); else
    v_43 = car(v_43);
    if (!car_legal(v_43)) v_43 = cdrerror(v_43); else
    v_43 = cdr(v_43);
    {   LispObject fn = basic_elt(env, 0); // freevarinexptchk
    v_43 = (*qfn1(fn))(fn, v_43);
    }
    env = stack[-1];
    if (v_43 == nil) goto v_32;
    else goto v_31;
v_32:
    v_43 = stack[0];
    if (!car_legal(v_43)) v_43 = cdrerror(v_43); else
    v_43 = cdr(v_43);
    stack[0] = v_43;
    goto v_1;
v_31:
    goto v_20;
    v_43 = nil;
v_20:
    goto v_5;
v_7:
    v_43 = nil;
    goto v_5;
    v_43 = nil;
v_5:
    return onevalue(v_43);
}



// Code for talp_smwmkatl

static LispObject CC_talp_smwmkatl(LispObject env, LispObject v_2,
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



// Code for chknewnam

static LispObject CC_chknewnam(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_32, v_33, v_34, v_35;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_34 = v_2;
// end of prologue
v_1:
    v_32 = v_34;
    if (!symbolp(v_32)) v_32 = nil;
    else { v_32 = qfastgets(v_32);
           if (v_32 != nil) { v_32 = elt(v_32, 28); // newnam
#ifdef RECORD_GET
             if (v_32 != SPID_NOPROP)
                record_get(elt(fastget_names, 28), 1);
             else record_get(elt(fastget_names, 28), 0),
                v_32 = nil; }
           else record_get(elt(fastget_names, 28), 0); }
#else
             if (v_32 == SPID_NOPROP) v_32 = nil; }}
#endif
    v_35 = v_32;
    if (v_32 == nil) goto v_13;
    else goto v_14;
v_13:
    v_32 = lisp_true;
    goto v_12;
v_14:
    v_33 = v_35;
    v_32 = v_34;
    v_32 = (v_33 == v_32 ? lisp_true : nil);
    goto v_12;
    v_32 = nil;
v_12:
    if (v_32 == nil) goto v_10;
    v_32 = v_34;
    goto v_8;
v_10:
    v_32 = v_35;
    if (symbolp(v_32)) goto v_24;
    else goto v_25;
v_24:
    v_32 = v_35;
    v_34 = v_32;
    goto v_1;
v_25:
    v_32 = v_35;
    goto v_8;
    v_32 = nil;
v_8:
    return onevalue(v_32);
}



// Code for smtp

static LispObject CC_smtp(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_137, v_138, v_139;
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
    stack[-8] = v_3;
    stack[0] = v_2;
// end of prologue
    v_137 = stack[0];
    if (!consp(v_137)) goto v_18;
    else goto v_19;
v_18:
    v_137 = stack[0];
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
    if (!car_legal(v_137)) v_137 = cdrerror(v_137); else
    v_137 = cdr(v_137);
    if (!car_legal(v_137)) v_137 = carerror(v_137); else
    v_137 = car(v_137);
    stack[-9] = v_137;
    v_137 = stack[-9];
    if (!car_legal(v_137)) v_137 = cdrerror(v_137); else
    v_137 = cdr(v_137);
    if (!car_legal(v_137)) v_137 = cdrerror(v_137); else
    v_137 = cdr(v_137);
    if (!car_legal(v_137)) v_137 = carerror(v_137); else
    v_137 = car(v_137);
    v_138 = v_137;
    goto v_17;
v_19:
    v_138 = stack[0];
    v_137 = basic_elt(env, 1); // sparsemat
    if (!consp(v_138)) goto v_30;
    v_138 = car(v_138);
    if (v_138 == v_137) goto v_29;
    else goto v_30;
v_29:
    v_137 = stack[0];
    stack[-9] = v_137;
    v_137 = stack[-9];
    if (!car_legal(v_137)) v_137 = cdrerror(v_137); else
    v_137 = cdr(v_137);
    if (!car_legal(v_137)) v_137 = cdrerror(v_137); else
    v_137 = cdr(v_137);
    if (!car_legal(v_137)) v_137 = carerror(v_137); else
    v_137 = car(v_137);
    v_138 = v_137;
    goto v_17;
v_30:
    v_137 = stack[0];
    if (!car_legal(v_137)) v_137 = cdrerror(v_137); else
    v_137 = cdr(v_137);
    if (!car_legal(v_137)) v_138 = carerror(v_137); else
    v_138 = car(v_137);
    v_137 = stack[-8];
    {   LispObject fn = basic_elt(env, 0); // smtp
    v_137 = (*qfn2(fn))(fn, v_138, v_137);
    }
    env = stack[-10];
    stack[-9] = v_137;
    v_137 = stack[-9];
    if (!car_legal(v_137)) v_137 = cdrerror(v_137); else
    v_137 = cdr(v_137);
    if (!car_legal(v_137)) v_137 = cdrerror(v_137); else
    v_137 = cdr(v_137);
    if (!car_legal(v_137)) v_137 = carerror(v_137); else
    v_137 = car(v_137);
    v_138 = v_137;
    goto v_17;
v_17:
    v_137 = v_138;
    if (!car_legal(v_137)) v_137 = cdrerror(v_137); else
    v_137 = cdr(v_137);
    if (!car_legal(v_137)) v_137 = carerror(v_137); else
    v_137 = car(v_137);
    stack[-6] = v_137;
    v_137 = v_138;
    if (!car_legal(v_137)) v_137 = cdrerror(v_137); else
    v_137 = cdr(v_137);
    if (!car_legal(v_137)) v_137 = cdrerror(v_137); else
    v_137 = cdr(v_137);
    if (!car_legal(v_137)) v_137 = carerror(v_137); else
    v_137 = car(v_137);
    stack[-1] = v_137;
    v_139 = basic_elt(env, 2); // spm
    v_138 = v_137;
    v_137 = stack[-6];
    v_137 = list3(v_139, v_138, v_137);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 6); // mkempspmat
    v_137 = (*qfn2(fn))(fn, stack[-1], v_137);
    }
    env = stack[-10];
    stack[-7] = v_137;
    v_138 = stack[-9];
    v_137 = basic_elt(env, 1); // sparsemat
    if (!consp(v_138)) goto v_65;
    v_138 = car(v_138);
    if (v_138 == v_137) goto v_66;
v_65:
    stack[-2] = basic_elt(env, 3); // matrix
    stack[-1] = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_139 = basic_elt(env, 4); // "Matrix"
    v_138 = stack[0];
    v_137 = basic_elt(env, 5); // "not set"
    v_137 = list3(v_139, v_138, v_137);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 7); // rerror
    v_137 = (*qfn3(fn))(fn, stack[-2], stack[-1], v_137);
    }
    goto v_64;
v_66:
    v_137 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-4] = v_137;
v_82:
    v_138 = stack[-6];
    v_137 = stack[-4];
    v_137 = difference2(v_138, v_137);
    env = stack[-10];
    v_137 = Lminusp(nil, v_137);
    env = stack[-10];
    if (v_137 == nil) goto v_87;
    goto v_81;
v_87:
    v_138 = stack[-9];
    v_137 = stack[-4];
    {   LispObject fn = basic_elt(env, 8); // findrow
    v_137 = (*qfn2(fn))(fn, v_138, v_137);
    }
    env = stack[-10];
    v_138 = v_137;
    v_137 = v_138;
    if (v_137 == nil) goto v_99;
    v_137 = stack[-4];
    stack[-5] = v_137;
    v_137 = v_138;
    if (!car_legal(v_137)) v_137 = cdrerror(v_137); else
    v_137 = cdr(v_137);
    stack[-3] = v_137;
v_105:
    v_137 = stack[-3];
    if (v_137 == nil) goto v_110;
    else goto v_111;
v_110:
    goto v_104;
v_111:
    v_137 = stack[-3];
    if (!car_legal(v_137)) v_137 = carerror(v_137); else
    v_137 = car(v_137);
    v_138 = v_137;
    v_137 = v_138;
    if (!car_legal(v_137)) v_137 = carerror(v_137); else
    v_137 = car(v_137);
    if (!car_legal(v_138)) v_138 = cdrerror(v_138); else
    v_138 = cdr(v_138);
    stack[0] = v_138;
    v_139 = stack[-7];
    v_138 = v_137;
    v_137 = stack[-5];
    stack[-2] = list3(v_139, v_138, v_137);
    env = stack[-10];
    stack[-1] = stack[0];
    stack[0] = stack[-7];
    v_137 = stack[-8];
    v_137 = ncons(v_137);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 9); // letmtr3
    v_137 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_137);
    }
    env = stack[-10];
    v_137 = stack[-3];
    if (!car_legal(v_137)) v_137 = cdrerror(v_137); else
    v_137 = cdr(v_137);
    stack[-3] = v_137;
    goto v_105;
v_104:
    goto v_97;
v_99:
v_97:
    v_137 = stack[-4];
    v_137 = add1(v_137);
    env = stack[-10];
    stack[-4] = v_137;
    goto v_82;
v_81:
    goto v_64;
v_64:
    v_137 = stack[-7];
    return onevalue(v_137);
}



// Code for take!-realpart

static LispObject CC_takeKrealpart(LispObject env,
                         LispObject v_2)
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
    v_14 = stack[0];
    if (!car_legal(v_14)) v_14 = carerror(v_14); else
    v_14 = car(v_14);
    {   LispObject fn = basic_elt(env, 1); // repartf
    v_15 = (*qfn1(fn))(fn, v_14);
    }
    env = stack[-2];
    v_14 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-1] = cons(v_15, v_14);
    env = stack[-2];
    v_15 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_14 = stack[0];
    if (!car_legal(v_14)) v_14 = cdrerror(v_14); else
    v_14 = cdr(v_14);
    v_14 = cons(v_15, v_14);
    env = stack[-2];
    {
        LispObject v_18 = stack[-1];
        LispObject fn = basic_elt(env, 2); // multsq
        return (*qfn2(fn))(fn, v_18, v_14);
    }
}



// Code for assert_analyze

static LispObject CC_assert_analyze(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_204, v_205;
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
    v_204 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[0] = v_204;
    v_204 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-4] = v_204;
    v_204 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-2] = v_204;
    v_205 = qvalue(basic_elt(env, 1)); // assertstatistics!*
    v_204 = basic_elt(env, 2); // lambda_46uwl1lq71ua2
    {   LispObject fn = basic_elt(env, 7); // sort
    v_204 = (*qfn2(fn))(fn, v_205, v_204);
    }
    env = stack[-5];
    setvalue(basic_elt(env, 1), v_204); // assertstatistics!*
    v_204 = qvalue(basic_elt(env, 1)); // assertstatistics!*
    stack[-3] = v_204;
v_19:
    v_204 = stack[-3];
    if (v_204 == nil) goto v_23;
    else goto v_24;
v_23:
    goto v_18;
v_24:
    v_204 = stack[-3];
    if (!car_legal(v_204)) v_204 = carerror(v_204); else
    v_204 = car(v_204);
    stack[-1] = v_204;
    v_205 = stack[0];
    v_204 = stack[-1];
    if (!car_legal(v_204)) v_204 = cdrerror(v_204); else
    v_204 = cdr(v_204);
    if (!car_legal(v_204)) v_204 = carerror(v_204); else
    v_204 = car(v_204);
    v_204 = plus2(v_205, v_204);
    env = stack[-5];
    stack[0] = v_204;
    v_205 = stack[-4];
    v_204 = stack[-1];
    if (!car_legal(v_204)) v_204 = cdrerror(v_204); else
    v_204 = cdr(v_204);
    if (!car_legal(v_204)) v_204 = cdrerror(v_204); else
    v_204 = cdr(v_204);
    if (!car_legal(v_204)) v_204 = carerror(v_204); else
    v_204 = car(v_204);
    v_204 = plus2(v_205, v_204);
    env = stack[-5];
    stack[-4] = v_204;
    v_205 = stack[-2];
    v_204 = stack[-1];
    if (!car_legal(v_204)) v_204 = cdrerror(v_204); else
    v_204 = cdr(v_204);
    if (!car_legal(v_204)) v_204 = cdrerror(v_204); else
    v_204 = cdr(v_204);
    if (!car_legal(v_204)) v_204 = cdrerror(v_204); else
    v_204 = cdr(v_204);
    if (!car_legal(v_204)) v_204 = carerror(v_204); else
    v_204 = car(v_204);
    v_204 = plus2(v_205, v_204);
    env = stack[-5];
    stack[-2] = v_204;
    v_204 = stack[-3];
    if (!car_legal(v_204)) v_204 = cdrerror(v_204); else
    v_204 = cdr(v_204);
    stack[-3] = v_204;
    goto v_19;
v_18:
    v_204 = basic_elt(env, 3); // (function !#calls !#bad! calls !#assertion! violations)
    stack[-3] = v_204;
    stack[-1] = basic_elt(env, 4); // sum
    v_205 = stack[-4];
    v_204 = stack[-2];
    v_204 = list2(v_205, v_204);
    env = stack[-5];
    v_204 = list2star(stack[-1], stack[0], v_204);
    env = stack[-5];
    stack[-4] = nil;
    stack[-2] = nil;
    stack[-1] = nil;
    stack[0] = v_204;
    v_205 = nil;
    v_204 = qvalue(basic_elt(env, 1)); // assertstatistics!*
    v_204 = cons(v_205, v_204);
    env = stack[-5];
    v_204 = list2star(stack[-1], stack[0], v_204);
    env = stack[-5];
    v_204 = Lnreverse(nil, v_204);
    env = stack[-5];
    v_204 = cons(stack[-2], v_204);
    env = stack[-5];
    v_204 = list2star(stack[-4], stack[-3], v_204);
    env = stack[-5];
    setvalue(basic_elt(env, 1), v_204); // assertstatistics!*
    v_204 = qvalue(basic_elt(env, 1)); // assertstatistics!*
    stack[-2] = v_204;
v_72:
    v_204 = stack[-2];
    if (v_204 == nil) goto v_76;
    else goto v_77;
v_76:
    goto v_71;
v_77:
    v_204 = stack[-2];
    if (!car_legal(v_204)) v_204 = carerror(v_204); else
    v_204 = car(v_204);
    stack[-1] = v_204;
    v_204 = stack[-1];
    if (v_204 == nil) goto v_86;
    v_204 = stack[-1];
    if (!car_legal(v_204)) v_204 = carerror(v_204); else
    v_204 = car(v_204);
    v_204 = Lprinc(nil, v_204);
    env = stack[-5];
    v_204 = stack[-1];
    if (!car_legal(v_204)) v_204 = carerror(v_204); else
    v_204 = car(v_204);
    v_204 = Lexplodec(nil, v_204);
    env = stack[-5];
    stack[0] = Llength(nil, v_204);
    env = stack[-5];
    v_204 = stack[-1];
    if (!car_legal(v_204)) v_204 = cdrerror(v_204); else
    v_204 = cdr(v_204);
    if (!car_legal(v_204)) v_204 = carerror(v_204); else
    v_204 = car(v_204);
    v_204 = Lexplodec(nil, v_204);
    env = stack[-5];
    v_204 = Llength(nil, v_204);
    env = stack[-5];
    v_204 = plus2(stack[0], v_204);
    env = stack[-5];
    stack[0] = v_204;
v_94:
    v_205 = static_cast<LispObject>(368)+TAG_FIXNUM; // 23
    v_204 = stack[0];
    v_204 = difference2(v_205, v_204);
    env = stack[-5];
    v_204 = Lminusp(nil, v_204);
    env = stack[-5];
    if (v_204 == nil) goto v_108;
    goto v_93;
v_108:
    v_204 = basic_elt(env, 5); // " "
    v_204 = Lprinc(nil, v_204);
    env = stack[-5];
    v_204 = stack[0];
    v_204 = add1(v_204);
    env = stack[-5];
    stack[0] = v_204;
    goto v_94;
v_93:
    v_204 = stack[-1];
    if (!car_legal(v_204)) v_204 = cdrerror(v_204); else
    v_204 = cdr(v_204);
    if (!car_legal(v_204)) v_204 = carerror(v_204); else
    v_204 = car(v_204);
    v_204 = Lprinc(nil, v_204);
    env = stack[-5];
    v_204 = stack[-1];
    if (!car_legal(v_204)) v_204 = cdrerror(v_204); else
    v_204 = cdr(v_204);
    if (!car_legal(v_204)) v_204 = cdrerror(v_204); else
    v_204 = cdr(v_204);
    if (!car_legal(v_204)) v_204 = carerror(v_204); else
    v_204 = car(v_204);
    v_204 = Lexplodec(nil, v_204);
    env = stack[-5];
    v_204 = Llength(nil, v_204);
    env = stack[-5];
    stack[0] = v_204;
v_125:
    v_205 = static_cast<LispObject>(368)+TAG_FIXNUM; // 23
    v_204 = stack[0];
    v_204 = difference2(v_205, v_204);
    env = stack[-5];
    v_204 = Lminusp(nil, v_204);
    env = stack[-5];
    if (v_204 == nil) goto v_135;
    goto v_124;
v_135:
    v_204 = basic_elt(env, 5); // " "
    v_204 = Lprinc(nil, v_204);
    env = stack[-5];
    v_204 = stack[0];
    v_204 = add1(v_204);
    env = stack[-5];
    stack[0] = v_204;
    goto v_125;
v_124:
    v_204 = stack[-1];
    if (!car_legal(v_204)) v_204 = cdrerror(v_204); else
    v_204 = cdr(v_204);
    if (!car_legal(v_204)) v_204 = cdrerror(v_204); else
    v_204 = cdr(v_204);
    if (!car_legal(v_204)) v_204 = carerror(v_204); else
    v_204 = car(v_204);
    v_204 = Lprinc(nil, v_204);
    env = stack[-5];
    v_204 = stack[-1];
    if (!car_legal(v_204)) v_204 = cdrerror(v_204); else
    v_204 = cdr(v_204);
    if (!car_legal(v_204)) v_204 = cdrerror(v_204); else
    v_204 = cdr(v_204);
    if (!car_legal(v_204)) v_204 = cdrerror(v_204); else
    v_204 = cdr(v_204);
    if (!car_legal(v_204)) v_204 = carerror(v_204); else
    v_204 = car(v_204);
    v_204 = Lexplodec(nil, v_204);
    env = stack[-5];
    v_204 = Llength(nil, v_204);
    env = stack[-5];
    stack[0] = v_204;
v_153:
    v_205 = static_cast<LispObject>(368)+TAG_FIXNUM; // 23
    v_204 = stack[0];
    v_204 = difference2(v_205, v_204);
    env = stack[-5];
    v_204 = Lminusp(nil, v_204);
    env = stack[-5];
    if (v_204 == nil) goto v_164;
    goto v_152;
v_164:
    v_204 = basic_elt(env, 5); // " "
    v_204 = Lprinc(nil, v_204);
    env = stack[-5];
    v_204 = stack[0];
    v_204 = add1(v_204);
    env = stack[-5];
    stack[0] = v_204;
    goto v_153;
v_152:
    v_204 = stack[-1];
    if (!car_legal(v_204)) v_204 = cdrerror(v_204); else
    v_204 = cdr(v_204);
    if (!car_legal(v_204)) v_204 = cdrerror(v_204); else
    v_204 = cdr(v_204);
    if (!car_legal(v_204)) v_204 = cdrerror(v_204); else
    v_204 = cdr(v_204);
    if (!car_legal(v_204)) v_204 = carerror(v_204); else
    v_204 = car(v_204);
    {   LispObject fn = basic_elt(env, 8); // prin2t
    v_204 = (*qfn1(fn))(fn, v_204);
    }
    env = stack[-5];
    goto v_84;
v_86:
    v_204 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[0] = v_204;
v_185:
    v_205 = static_cast<LispObject>(1152)+TAG_FIXNUM; // 72
    v_204 = stack[0];
    v_204 = difference2(v_205, v_204);
    env = stack[-5];
    v_204 = Lminusp(nil, v_204);
    env = stack[-5];
    if (v_204 == nil) goto v_190;
    goto v_184;
v_190:
    v_204 = basic_elt(env, 6); // "-"
    v_204 = Lprinc(nil, v_204);
    env = stack[-5];
    v_204 = stack[0];
    v_204 = add1(v_204);
    env = stack[-5];
    stack[0] = v_204;
    goto v_185;
v_184:
    v_204 = Lterpri(nil);
    env = stack[-5];
    goto v_84;
v_84:
    v_204 = stack[-2];
    if (!car_legal(v_204)) v_204 = cdrerror(v_204); else
    v_204 = cdr(v_204);
    stack[-2] = v_204;
    goto v_72;
v_71:
    v_204 = nil;
    setvalue(basic_elt(env, 1), v_204); // assertstatistics!*
    v_204 = nil;
    return onevalue(v_204);
}



// Code for lambda_46uwl1lq71ua2

static LispObject CC_lambda_46uwl1lq71ua2(LispObject env,
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
    v_11 = v_3;
    v_10 = v_2;
// end of prologue
    if (!car_legal(v_11)) v_11 = carerror(v_11); else
    v_11 = car(v_11);
    if (!car_legal(v_10)) v_10 = carerror(v_10); else
    v_10 = car(v_10);
    {
        LispObject fn = basic_elt(env, 1); // ordp
        return (*qfn2(fn))(fn, v_11, v_10);
    }
}



// Code for dp_sum

static LispObject CC_dp_sum(LispObject env,
                         LispObject v_2, LispObject v_3)
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
v_1:
    v_80 = stack[-1];
    if (v_80 == nil) goto v_7;
    else goto v_8;
v_7:
    v_80 = stack[0];
    goto v_6;
v_8:
    v_80 = stack[0];
    if (v_80 == nil) goto v_11;
    else goto v_12;
v_11:
    v_80 = stack[-1];
    goto v_6;
v_12:
    v_80 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // dp_lmon
    stack[-2] = (*qfn1(fn))(fn, v_80);
    }
    env = stack[-3];
    v_80 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // dp_lmon
    v_80 = (*qfn1(fn))(fn, v_80);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 2); // mo_compare
    v_80 = (*qfn2(fn))(fn, stack[-2], v_80);
    }
    env = stack[-3];
    v_82 = v_80;
    v_81 = v_82;
    v_80 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_81 == v_80) goto v_28;
    else goto v_29;
v_28:
    v_80 = stack[-1];
    if (!car_legal(v_80)) stack[-2] = carerror(v_80); else
    stack[-2] = car(v_80);
    v_80 = stack[-1];
    if (!car_legal(v_80)) v_81 = cdrerror(v_80); else
    v_81 = cdr(v_80);
    v_80 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // dp_sum
    v_80 = (*qfn2(fn))(fn, v_81, v_80);
    }
    {
        LispObject v_86 = stack[-2];
        return cons(v_86, v_80);
    }
v_29:
    v_81 = v_82;
    v_80 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    if (v_81 == v_80) goto v_41;
    else goto v_42;
v_41:
    v_80 = stack[0];
    if (!car_legal(v_80)) stack[-2] = carerror(v_80); else
    stack[-2] = car(v_80);
    v_81 = stack[-1];
    v_80 = stack[0];
    if (!car_legal(v_80)) v_80 = cdrerror(v_80); else
    v_80 = cdr(v_80);
    {   LispObject fn = basic_elt(env, 0); // dp_sum
    v_80 = (*qfn2(fn))(fn, v_81, v_80);
    }
    {
        LispObject v_87 = stack[-2];
        return cons(v_87, v_80);
    }
v_42:
    v_80 = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // dp_lc
    stack[-2] = (*qfn1(fn))(fn, v_80);
    }
    env = stack[-3];
    v_80 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // dp_lc
    v_80 = (*qfn1(fn))(fn, v_80);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 4); // cali_bc_sum
    v_80 = (*qfn2(fn))(fn, stack[-2], v_80);
    }
    env = stack[-3];
    stack[-2] = v_80;
    v_80 = stack[-2];
    {   LispObject fn = basic_elt(env, 5); // cali_bc_zero!?
    v_80 = (*qfn1(fn))(fn, v_80);
    }
    env = stack[-3];
    if (v_80 == nil) goto v_60;
    v_80 = stack[-1];
    if (!car_legal(v_80)) v_81 = cdrerror(v_80); else
    v_81 = cdr(v_80);
    v_80 = stack[0];
    if (!car_legal(v_80)) v_80 = cdrerror(v_80); else
    v_80 = cdr(v_80);
    stack[-1] = v_81;
    stack[0] = v_80;
    goto v_1;
v_60:
    v_80 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // dp_lmon
    v_80 = (*qfn1(fn))(fn, v_80);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 6); // dp_term
    stack[-2] = (*qfn2(fn))(fn, stack[-2], v_80);
    }
    env = stack[-3];
    v_80 = stack[-1];
    if (!car_legal(v_80)) v_81 = cdrerror(v_80); else
    v_81 = cdr(v_80);
    v_80 = stack[0];
    if (!car_legal(v_80)) v_80 = cdrerror(v_80); else
    v_80 = cdr(v_80);
    {   LispObject fn = basic_elt(env, 0); // dp_sum
    v_80 = (*qfn2(fn))(fn, v_81, v_80);
    }
    {
        LispObject v_88 = stack[-2];
        return cons(v_88, v_80);
    }
    v_80 = nil;
    goto v_6;
    v_80 = nil;
v_6:
    return onevalue(v_80);
}



// Code for !*q2f

static LispObject CC_Hq2f(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_19, v_20, v_21;
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
    v_19 = v_21;
    if (!car_legal(v_19)) v_20 = cdrerror(v_19); else
    v_20 = cdr(v_19);
    v_19 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_20 == v_19) goto v_6;
    else goto v_7;
v_6:
    v_19 = v_21;
    if (!car_legal(v_19)) v_19 = carerror(v_19); else
    v_19 = car(v_19);
    goto v_5;
v_7:
    v_19 = v_21;
    {   LispObject fn = basic_elt(env, 2); // prepsq
    v_20 = (*qfn1(fn))(fn, v_19);
    }
    env = stack[0];
    v_19 = basic_elt(env, 1); // polynomial
    {
        LispObject fn = basic_elt(env, 3); // typerr
        return (*qfn2(fn))(fn, v_20, v_19);
    }
    v_19 = nil;
v_5:
    return onevalue(v_19);
}



// Code for exptf1

static LispObject CC_exptf1(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_35 = stack[0];
    v_34 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_35 == v_34) goto v_7;
    else goto v_8;
v_7:
    v_34 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_6;
v_8:
    v_34 = stack[-1];
    stack[-2] = v_34;
v_20:
    v_34 = stack[0];
    v_35 = sub1(v_34);
    env = stack[-3];
    stack[0] = v_35;
    v_34 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_34 = static_cast<LispObject>(greaterp2(v_35, v_34));
    v_34 = v_34 ? lisp_true : nil;
    env = stack[-3];
    if (v_34 == nil) goto v_23;
    else goto v_24;
v_23:
    goto v_19;
v_24:
    v_35 = stack[-1];
    v_34 = stack[-2];
    {   LispObject fn = basic_elt(env, 1); // multf
    v_34 = (*qfn2(fn))(fn, v_35, v_34);
    }
    env = stack[-3];
    stack[-2] = v_34;
    goto v_20;
v_19:
    v_34 = stack[-2];
    goto v_6;
    v_34 = nil;
v_6:
    return onevalue(v_34);
}



// Code for portable_print

static LispObject CC_portable_print(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // portable_prin
    v_8 = (*qfn1(fn))(fn, v_8);
    }
    env = stack[-1];
    v_8 = Lterpri(nil);
    v_8 = stack[0];
    return onevalue(v_8);
}



// Code for polynommultiplybymonom

static LispObject CC_polynommultiplybymonom(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_3;
    v_41 = v_2;
// end of prologue
    v_40 = v_41;
    if (v_40 == nil) goto v_7;
    else goto v_8;
v_7:
    v_40 = nil;
    goto v_6;
v_8:
    v_40 = v_41;
    {   LispObject fn = basic_elt(env, 1); // polynomclone
    v_40 = (*qfn1(fn))(fn, v_40);
    }
    env = stack[-2];
    stack[-1] = v_40;
    v_41 = stack[0];
    v_40 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_40 = Lgetv(nil, v_41, v_40);
    env = stack[-2];
    stack[0] = v_40;
v_24:
    v_40 = stack[0];
    if (!car_legal(v_40)) v_40 = carerror(v_40); else
    v_40 = car(v_40);
    if (v_40 == nil) goto v_27;
    else goto v_28;
v_27:
    goto v_23;
v_28:
    v_41 = stack[-1];
    v_40 = stack[0];
    if (!car_legal(v_40)) v_40 = carerror(v_40); else
    v_40 = car(v_40);
    {   LispObject fn = basic_elt(env, 2); // polynommultiplybyvariable
    v_40 = (*qfn2(fn))(fn, v_41, v_40);
    }
    env = stack[-2];
    v_40 = stack[0];
    if (!car_legal(v_40)) v_40 = cdrerror(v_40); else
    v_40 = cdr(v_40);
    stack[0] = v_40;
    goto v_24;
v_23:
    v_40 = stack[-1];
    goto v_6;
    v_40 = nil;
v_6:
    return onevalue(v_40);
}



// Code for wulessp!*

static LispObject CC_wulesspH(LispObject env,
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
    v_25 = stack[-1];
    v_24 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // wulessp
    v_24 = (*qfn2(fn))(fn, v_25, v_24);
    }
    env = stack[-2];
    if (v_24 == nil) goto v_8;
    v_24 = lisp_true;
    goto v_6;
v_8:
    v_25 = stack[0];
    v_24 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // wulessp
    v_24 = (*qfn2(fn))(fn, v_25, v_24);
    }
    env = stack[-2];
    if (v_24 == nil) goto v_14;
    v_24 = nil;
    goto v_6;
v_14:
    v_25 = stack[-1];
    v_24 = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // totallessp
        return (*qfn2(fn))(fn, v_25, v_24);
    }
    v_24 = nil;
v_6:
    return onevalue(v_24);
}



// Code for matrix!+p

static LispObject CC_matrixLp(LispObject env,
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_48 = stack[0];
    v_49 = Llength(nil, v_48);
    env = stack[-4];
    v_48 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_48 = static_cast<LispObject>(lessp2(v_49, v_48));
    v_48 = v_48 ? lisp_true : nil;
    env = stack[-4];
    if (v_48 == nil) goto v_12;
    v_48 = nil;
    goto v_8;
v_12:
    v_48 = stack[0];
    if (!car_legal(v_48)) v_48 = carerror(v_48); else
    v_48 = car(v_48);
    v_48 = Llength(nil, v_48);
    env = stack[-4];
    stack[-3] = v_48;
    v_48 = lisp_true;
    stack[-2] = v_48;
    v_48 = stack[0];
    if (!car_legal(v_48)) v_48 = cdrerror(v_48); else
    v_48 = cdr(v_48);
    stack[-1] = v_48;
v_25:
    v_48 = stack[-1];
    if (v_48 == nil) goto v_30;
    else goto v_31;
v_30:
    goto v_24;
v_31:
    v_48 = stack[-1];
    if (!car_legal(v_48)) v_48 = carerror(v_48); else
    v_48 = car(v_48);
    stack[0] = stack[-3];
    v_48 = Llength(nil, v_48);
    env = stack[-4];
    if (equal(stack[0], v_48)) goto v_40;
    v_48 = nil;
    stack[-2] = v_48;
    goto v_38;
v_40:
v_38:
    v_48 = stack[-1];
    if (!car_legal(v_48)) v_48 = cdrerror(v_48); else
    v_48 = cdr(v_48);
    stack[-1] = v_48;
    goto v_25;
v_24:
    v_48 = stack[-2];
v_8:
    return onevalue(v_48);
}



// Code for cl_fvarl1

static LispObject CC_cl_fvarl1(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // cl_varl1
    v_7 = (*qfn1(fn))(fn, v_7);
    }
    if (!car_legal(v_7)) v_7 = carerror(v_7); else
    v_7 = car(v_7);
    return onevalue(v_7);
}



// Code for lastnondomain

static LispObject CC_lastnondomain(LispObject env,
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
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_46 = v_2;
// end of prologue
v_6:
    v_47 = v_46;
    if (!consp(v_47)) goto v_13;
    else goto v_14;
v_13:
    v_47 = lisp_true;
    goto v_12;
v_14:
    v_47 = v_46;
    if (!car_legal(v_47)) v_47 = carerror(v_47); else
    v_47 = car(v_47);
    v_47 = (consp(v_47) ? nil : lisp_true);
    goto v_12;
    v_47 = nil;
v_12:
    if (v_47 == nil) goto v_10;
    v_47 = basic_elt(env, 1); // "non-domain"
    v_46 = list2(v_47, v_46);
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // errach
        return (*qfn1(fn))(fn, v_46);
    }
v_10:
    v_47 = v_46;
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    if (!consp(v_47)) goto v_30;
    else goto v_31;
v_30:
    v_47 = lisp_true;
    goto v_29;
v_31:
    v_47 = v_46;
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    if (!car_legal(v_47)) v_47 = carerror(v_47); else
    v_47 = car(v_47);
    v_47 = (consp(v_47) ? nil : lisp_true);
    goto v_29;
    v_47 = nil;
v_29:
    if (v_47 == nil) goto v_27;
    goto v_5;
v_27:
    if (!car_legal(v_46)) v_46 = cdrerror(v_46); else
    v_46 = cdr(v_46);
    goto v_6;
    v_46 = nil;
v_5:
    return onevalue(v_46);
}



// Code for numeric!-content

static LispObject CC_numericKcontent(LispObject env,
                         LispObject v_2)
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
    v_52 = stack[0];
    if (!consp(v_52)) goto v_13;
    else goto v_14;
v_13:
    v_52 = lisp_true;
    goto v_12;
v_14:
    v_52 = stack[0];
    if (!car_legal(v_52)) v_52 = carerror(v_52); else
    v_52 = car(v_52);
    v_52 = (consp(v_52) ? nil : lisp_true);
    goto v_12;
    v_52 = nil;
v_12:
    if (v_52 == nil) goto v_10;
    v_52 = stack[0];
    {
        LispObject fn = basic_elt(env, 1); // absf
        return (*qfn1(fn))(fn, v_52);
    }
v_10:
    v_52 = stack[0];
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    if (v_52 == nil) goto v_24;
    else goto v_25;
v_24:
    v_52 = stack[0];
    if (!car_legal(v_52)) v_52 = carerror(v_52); else
    v_52 = car(v_52);
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    stack[0] = v_52;
    goto v_6;
v_25:
    v_52 = stack[0];
    if (!car_legal(v_52)) v_52 = carerror(v_52); else
    v_52 = car(v_52);
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    {   LispObject fn = basic_elt(env, 0); // numeric!-content
    v_52 = (*qfn1(fn))(fn, v_52);
    }
    env = stack[-2];
    v_54 = v_52;
    v_53 = v_54;
    v_52 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_53 == v_52) goto v_43;
    stack[-1] = v_54;
    v_52 = stack[0];
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    {   LispObject fn = basic_elt(env, 0); // numeric!-content
    v_52 = (*qfn1(fn))(fn, v_52);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 2); // gcddd
    v_52 = (*qfn2(fn))(fn, stack[-1], v_52);
    }
    v_54 = v_52;
    goto v_41;
v_43:
v_41:
    v_52 = v_54;
    goto v_5;
    v_52 = nil;
v_5:
    return onevalue(v_52);
}



// Code for objectom

static LispObject CC_objectom(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_38, v_39, v_40;
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
    v_39 = v_2;
// end of prologue
    v_38 = v_39;
    v_38 = Lconsp(nil, v_38);
    env = stack[-1];
    if (v_38 == nil) goto v_10;
    v_38 = v_39;
    if (!car_legal(v_38)) v_40 = carerror(v_38); else
    v_40 = car(v_38);
    v_38 = qvalue(basic_elt(env, 1)); // ir2mml!*
    v_38 = Lassoc(nil, v_40, v_38);
    v_40 = v_38;
    if (v_38 == nil) goto v_16;
    v_38 = v_40;
    if (!car_legal(v_38)) v_38 = cdrerror(v_38); else
    v_38 = cdr(v_38);
    if (!car_legal(v_38)) v_38 = cdrerror(v_38); else
    v_38 = cdr(v_38);
    if (!car_legal(v_38)) v_38 = cdrerror(v_38); else
    v_38 = cdr(v_38);
    if (!car_legal(v_38)) stack[0] = carerror(v_38); else
    stack[0] = car(v_38);
    v_38 = v_39;
    v_38 = ncons(v_38);
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // apply
    v_38 = (*qfn2(fn))(fn, stack[0], v_38);
    }
    goto v_14;
v_16:
    v_38 = v_39;
    {   LispObject fn = basic_elt(env, 3); // fnom
    v_38 = (*qfn1(fn))(fn, v_38);
    }
    goto v_14;
v_14:
    goto v_8;
v_10:
    v_38 = v_39;
    {   LispObject fn = basic_elt(env, 4); // basicom
    v_38 = (*qfn1(fn))(fn, v_38);
    }
    goto v_8;
v_8:
    v_38 = nil;
    return onevalue(v_38);
}



// Code for initbrsea

static LispObject CC_initbrsea(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_85, v_86, v_87;
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
    v_85 = static_cast<LispObject>(3200)+TAG_FIXNUM; // 200
    stack[-2] = v_85;
    v_85 = qvalue(basic_elt(env, 1)); // rowmin
    stack[-1] = v_85;
v_10:
    v_86 = qvalue(basic_elt(env, 2)); // rowmax
    v_85 = stack[-1];
    v_85 = difference2(v_86, v_85);
    env = stack[-3];
    v_85 = Lminusp(nil, v_85);
    env = stack[-3];
    if (v_85 == nil) goto v_15;
    goto v_9;
v_15:
    stack[0] = qvalue(basic_elt(env, 3)); // codmat
    v_86 = qvalue(basic_elt(env, 4)); // maxvar
    v_85 = stack[-1];
    v_85 = plus2(v_86, v_85);
    env = stack[-3];
    v_86 = Lgetv(nil, stack[0], v_85);
    env = stack[-3];
    v_85 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_85 = Lgetv(nil, v_86, v_85);
    env = stack[-3];
    if (v_85 == nil) goto v_24;
    v_85 = stack[-1];
    {   LispObject fn = basic_elt(env, 7); // initwght
    v_85 = (*qfn1(fn))(fn, v_85);
    }
    env = stack[-3];
    goto v_22;
v_24:
v_22:
    v_85 = stack[-1];
    v_85 = add1(v_85);
    env = stack[-3];
    stack[-1] = v_85;
    goto v_10;
v_9:
    {   LispObject fn = basic_elt(env, 8); // redcodmat
    v_85 = (*qfn0(fn))(fn);
    }
    env = stack[-3];
    v_85 = qvalue(basic_elt(env, 5)); // codhisto
    if (v_85 == nil) goto v_40;
    v_85 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[0] = v_85;
v_45:
    v_86 = static_cast<LispObject>(3200)+TAG_FIXNUM; // 200
    v_85 = stack[0];
    v_85 = difference2(v_86, v_85);
    env = stack[-3];
    v_85 = Lminusp(nil, v_85);
    env = stack[-3];
    if (v_85 == nil) goto v_50;
    goto v_44;
v_50:
    v_87 = qvalue(basic_elt(env, 5)); // codhisto
    v_86 = stack[0];
    v_85 = nil;
    v_85 = Lputv(nil, v_87, v_86, v_85);
    env = stack[-3];
    v_85 = stack[0];
    v_85 = add1(v_85);
    env = stack[-3];
    stack[0] = v_85;
    goto v_45;
v_44:
    goto v_38;
v_40:
    v_85 = stack[-2];
    v_85 = Lmkvect(nil, v_85);
    env = stack[-3];
    setvalue(basic_elt(env, 5), v_85); // codhisto
    goto v_38;
v_38:
    v_85 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    setvalue(basic_elt(env, 6), v_85); // headhisto
    v_85 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[0] = v_85;
v_70:
    v_86 = qvalue(basic_elt(env, 2)); // rowmax
    v_85 = stack[0];
    v_85 = difference2(v_86, v_85);
    env = stack[-3];
    v_85 = Lminusp(nil, v_85);
    env = stack[-3];
    if (v_85 == nil) goto v_75;
    goto v_69;
v_75:
    v_85 = stack[0];
    {   LispObject fn = basic_elt(env, 9); // inshisto
    v_85 = (*qfn1(fn))(fn, v_85);
    }
    env = stack[-3];
    v_85 = stack[0];
    v_85 = add1(v_85);
    env = stack[-3];
    stack[0] = v_85;
    goto v_70;
v_69:
    v_85 = nil;
    return onevalue(v_85);
}



// Code for !:difference

static LispObject CC_Tdifference(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_42, v_43, v_44, v_45;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_44 = v_3;
    v_45 = v_2;
// end of prologue
    v_42 = v_45;
    if (v_42 == nil) goto v_7;
    else goto v_8;
v_7:
    v_42 = v_44;
    {
        LispObject fn = basic_elt(env, 2); // !:minus
        return (*qfn1(fn))(fn, v_42);
    }
v_8:
    v_42 = v_44;
    if (v_42 == nil) goto v_12;
    else goto v_13;
v_12:
    v_42 = v_45;
    goto v_6;
v_13:
    v_43 = v_45;
    v_42 = v_44;
    if (equal(v_43, v_42)) goto v_16;
    else goto v_17;
v_16:
    v_42 = nil;
    goto v_6;
v_17:
    v_42 = v_45;
    if (!consp(v_42)) goto v_25;
    else goto v_26;
v_25:
    v_42 = v_44;
    v_42 = (consp(v_42) ? nil : lisp_true);
    goto v_24;
v_26:
    v_42 = nil;
    goto v_24;
    v_42 = nil;
v_24:
    if (v_42 == nil) goto v_22;
    v_42 = v_45;
    v_43 = v_44;
    return difference2(v_42, v_43);
v_22:
    v_43 = v_45;
    v_42 = basic_elt(env, 1); // difference
    {
        LispObject fn = basic_elt(env, 3); // dcombine
        return (*qfn3(fn))(fn, v_43, v_44, v_42);
    }
    v_42 = nil;
v_6:
    return onevalue(v_42);
}



// Code for statep!*

static LispObject CC_statepH(LispObject env,
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
    {   LispObject fn = basic_elt(env, 2); // getphystype
    v_8 = (*qfn1(fn))(fn, v_8);
    }
    env = stack[0];
    v_9 = basic_elt(env, 1); // state
    v_8 = (v_8 == v_9 ? lisp_true : nil);
    return onevalue(v_8);
}



// Code for take!-impart

static LispObject CC_takeKimpart(LispObject env,
                         LispObject v_2)
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
    v_14 = stack[0];
    if (!car_legal(v_14)) v_14 = carerror(v_14); else
    v_14 = car(v_14);
    {   LispObject fn = basic_elt(env, 1); // impartf
    v_15 = (*qfn1(fn))(fn, v_14);
    }
    env = stack[-2];
    v_14 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-1] = cons(v_15, v_14);
    env = stack[-2];
    v_15 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_14 = stack[0];
    if (!car_legal(v_14)) v_14 = cdrerror(v_14); else
    v_14 = cdr(v_14);
    v_14 = cons(v_15, v_14);
    env = stack[-2];
    {
        LispObject v_18 = stack[-1];
        LispObject fn = basic_elt(env, 2); // multsq
        return (*qfn2(fn))(fn, v_18, v_14);
    }
}



// Code for errorset2

static LispObject CC_errorset2(LispObject env,
                         LispObject v_2)
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
    v_15 = v_2;
// end of prologue
// Binding !*protfg
// FLUIDBIND: reloadenv=1 litvec-offset=1 saveloc=0
{   bind_fluid_stack bind_fluid_var(-1, 1, 0);
    setvalue(basic_elt(env, 1), nil); // !*protfg
    v_14 = lisp_true;
    setvalue(basic_elt(env, 1), v_14); // !*protfg
    v_16 = v_15;
    v_15 = nil;
    v_14 = nil;
    {   LispObject fn = basic_elt(env, 2); // errorset
    v_14 = (*qfn3(fn))(fn, v_16, v_15, v_14);
    }
    ;}  // end of a binding scope
    return onevalue(v_14);
}



// Code for maprint

static LispObject CC_maprint(LispObject env,
                         LispObject v_3, LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_193, v_194, v_195;
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
    real_push(nil, nil, nil, nil, nil);
    stack_popper stack_popper_var(6);
// copy arguments values to proper place
    v_193 = v_4;
    stack[-3] = v_3;
// end of prologue
// Binding p!*!*
// FLUIDBIND: reloadenv=5 litvec-offset=1 saveloc=4
{   bind_fluid_stack bind_fluid_var(-5, 1, -4);
    setvalue(basic_elt(env, 1), v_193); // p!*!*
    stack[0] = nil;
    v_193 = qvalue(basic_elt(env, 1)); // p!*!*
    stack[-2] = v_193;
    v_193 = stack[-3];
    if (v_193 == nil) goto v_19;
    else goto v_20;
v_19:
    v_193 = nil;
    goto v_15;
v_20:
    v_193 = stack[-3];
    {   LispObject fn = basic_elt(env, 11); // physopp
    v_193 = (*qfn1(fn))(fn, v_193);
    }
    env = stack[-5];
    if (v_193 == nil) goto v_24;
    v_194 = basic_elt(env, 2); // physoppri
    v_193 = stack[-3];
    v_193 = Lapply1(nil, v_194, v_193);
    goto v_15;
v_24:
    v_193 = stack[-3];
    if (!consp(v_193)) goto v_30;
    else goto v_31;
v_30:
    v_193 = stack[-3];
    v_193 = Lsimple_vectorp(nil, v_193);
    env = stack[-5];
    if (v_193 == nil) goto v_36;
    v_194 = stack[-3];
    v_193 = qvalue(basic_elt(env, 1)); // p!*!*
    {   LispObject fn = basic_elt(env, 12); // vec!-maprin
    v_193 = (*qfn2(fn))(fn, v_194, v_193);
    }
    goto v_34;
v_36:
    v_193 = stack[-3];
    if (is_number(v_193)) goto v_47;
    v_193 = lisp_true;
    goto v_45;
v_47:
    v_194 = stack[-3];
    v_193 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_193 = static_cast<LispObject>(lessp2(v_194, v_193));
    v_193 = v_193 ? lisp_true : nil;
    env = stack[-5];
    if (v_193 == nil) goto v_54;
    else goto v_55;
v_54:
    v_193 = lisp_true;
    goto v_53;
v_55:
    v_194 = stack[-2];
    v_193 = basic_elt(env, 3); // minus
    if (!symbolp(v_193)) v_193 = nil;
    else { v_193 = qfastgets(v_193);
           if (v_193 != nil) { v_193 = elt(v_193, 23); // infix
#ifdef RECORD_GET
             if (v_193 != SPID_NOPROP)
                record_get(elt(fastget_names, 23), 1);
             else record_get(elt(fastget_names, 23), 0),
                v_193 = nil; }
           else record_get(elt(fastget_names, 23), 0); }
#else
             if (v_193 == SPID_NOPROP) v_193 = nil; }}
#endif
    v_193 = static_cast<LispObject>(lesseq2(v_194, v_193));
    v_193 = v_193 ? lisp_true : nil;
    env = stack[-5];
    goto v_53;
    v_193 = nil;
v_53:
    goto v_45;
    v_193 = nil;
v_45:
    if (v_193 == nil) goto v_43;
    v_193 = stack[-3];
    {   LispObject fn = basic_elt(env, 13); // prin2!*
    v_193 = (*qfn1(fn))(fn, v_193);
    }
    goto v_34;
v_43:
    v_193 = basic_elt(env, 4); // "("
    {   LispObject fn = basic_elt(env, 13); // prin2!*
    v_193 = (*qfn1(fn))(fn, v_193);
    }
    env = stack[-5];
    v_193 = stack[-3];
    {   LispObject fn = basic_elt(env, 13); // prin2!*
    v_193 = (*qfn1(fn))(fn, v_193);
    }
    env = stack[-5];
    v_193 = basic_elt(env, 5); // ")"
    {   LispObject fn = basic_elt(env, 13); // prin2!*
    v_193 = (*qfn1(fn))(fn, v_193);
    }
    goto v_34;
v_34:
    v_193 = stack[-3];
    goto v_15;
v_31:
    v_193 = stack[-3];
    if (!car_legal(v_193)) v_193 = carerror(v_193); else
    v_193 = car(v_193);
    if (!consp(v_193)) goto v_78;
    v_193 = stack[-3];
    if (!car_legal(v_193)) v_194 = carerror(v_193); else
    v_194 = car(v_193);
    v_193 = stack[-2];
    {   LispObject fn = basic_elt(env, 0); // maprint
    v_193 = (*qfn2(fn))(fn, v_194, v_193);
    }
    env = stack[-5];
    goto v_18;
v_78:
    v_193 = stack[-3];
    if (!car_legal(v_193)) v_193 = carerror(v_193); else
    v_193 = car(v_193);
    if (!symbolp(v_193)) v_193 = nil;
    else { v_193 = qfastgets(v_193);
           if (v_193 != nil) { v_193 = elt(v_193, 60); // pprifn
#ifdef RECORD_GET
             if (v_193 != SPID_NOPROP)
                record_get(elt(fastget_names, 60), 1);
             else record_get(elt(fastget_names, 60), 0),
                v_193 = nil; }
           else record_get(elt(fastget_names, 60), 0); }
#else
             if (v_193 == SPID_NOPROP) v_193 = nil; }}
#endif
    stack[-1] = v_193;
    if (v_193 == nil) goto v_87;
    v_195 = stack[-1];
    v_194 = stack[-3];
    v_193 = stack[-2];
    v_194 = Lapply2(nil, v_195, v_194, v_193);
    env = stack[-5];
    v_193 = basic_elt(env, 6); // failed
    if (v_194 == v_193) goto v_87;
    goto v_85;
v_87:
    v_193 = stack[-3];
    if (!car_legal(v_193)) v_193 = carerror(v_193); else
    v_193 = car(v_193);
    if (!symbolp(v_193)) v_193 = nil;
    else { v_193 = qfastgets(v_193);
           if (v_193 != nil) { v_193 = elt(v_193, 57); // prifn
#ifdef RECORD_GET
             if (v_193 != SPID_NOPROP)
                record_get(elt(fastget_names, 57), 1);
             else record_get(elt(fastget_names, 57), 0),
                v_193 = nil; }
           else record_get(elt(fastget_names, 57), 0); }
#else
             if (v_193 == SPID_NOPROP) v_193 = nil; }}
#endif
    stack[-1] = v_193;
    if (v_193 == nil) goto v_98;
    v_194 = stack[-1];
    v_193 = stack[-3];
    v_194 = Lapply1(nil, v_194, v_193);
    env = stack[-5];
    v_193 = basic_elt(env, 6); // failed
    if (v_194 == v_193) goto v_98;
    goto v_85;
v_98:
    goto v_86;
v_85:
    v_193 = stack[-3];
    goto v_15;
v_86:
    v_193 = stack[-3];
    if (!car_legal(v_193)) v_193 = carerror(v_193); else
    v_193 = car(v_193);
    if (!symbolp(v_193)) v_193 = nil;
    else { v_193 = qfastgets(v_193);
           if (v_193 != nil) { v_193 = elt(v_193, 23); // infix
#ifdef RECORD_GET
             if (v_193 != SPID_NOPROP)
                record_get(elt(fastget_names, 23), 1);
             else record_get(elt(fastget_names, 23), 0),
                v_193 = nil; }
           else record_get(elt(fastget_names, 23), 0); }
#else
             if (v_193 == SPID_NOPROP) v_193 = nil; }}
#endif
    stack[-1] = v_193;
    if (v_193 == nil) goto v_110;
    v_194 = stack[-1];
    v_193 = stack[-2];
    v_193 = static_cast<LispObject>(greaterp2(v_194, v_193));
    v_193 = v_193 ? lisp_true : nil;
    env = stack[-5];
    v_193 = (v_193 == nil ? lisp_true : nil);
    stack[-2] = v_193;
    v_193 = stack[-2];
    if (v_193 == nil) goto v_121;
    v_193 = qvalue(basic_elt(env, 7)); // orig!*
    stack[0] = v_193;
    v_193 = basic_elt(env, 4); // "("
    {   LispObject fn = basic_elt(env, 13); // prin2!*
    v_193 = (*qfn1(fn))(fn, v_193);
    }
    env = stack[-5];
    v_194 = qvalue(basic_elt(env, 8)); // posn!*
    v_193 = static_cast<LispObject>(288)+TAG_FIXNUM; // 18
    v_193 = static_cast<LispObject>(lessp2(v_194, v_193));
    v_193 = v_193 ? lisp_true : nil;
    env = stack[-5];
    if (v_193 == nil) goto v_129;
    v_193 = qvalue(basic_elt(env, 8)); // posn!*
    goto v_127;
v_129:
    v_194 = qvalue(basic_elt(env, 7)); // orig!*
    v_193 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_193 = plus2(v_194, v_193);
    env = stack[-5];
    goto v_127;
    v_193 = nil;
v_127:
    setvalue(basic_elt(env, 7), v_193); // orig!*
    goto v_119;
v_121:
v_119:
    v_193 = stack[-3];
    if (!car_legal(v_193)) v_195 = carerror(v_193); else
    v_195 = car(v_193);
    v_194 = stack[-1];
    v_193 = stack[-3];
    if (!car_legal(v_193)) v_193 = cdrerror(v_193); else
    v_193 = cdr(v_193);
    {   LispObject fn = basic_elt(env, 14); // inprint
    v_193 = (*qfn3(fn))(fn, v_195, v_194, v_193);
    }
    env = stack[-5];
    v_193 = stack[-2];
    if (v_193 == nil) goto v_148;
    v_193 = basic_elt(env, 5); // ")"
    {   LispObject fn = basic_elt(env, 13); // prin2!*
    v_193 = (*qfn1(fn))(fn, v_193);
    }
    env = stack[-5];
    v_193 = stack[0];
    setvalue(basic_elt(env, 7), v_193); // orig!*
    goto v_146;
v_148:
v_146:
    v_193 = stack[-3];
    goto v_15;
v_110:
    v_193 = stack[-3];
    if (!car_legal(v_193)) v_193 = carerror(v_193); else
    v_193 = car(v_193);
    {   LispObject fn = basic_elt(env, 13); // prin2!*
    v_193 = (*qfn1(fn))(fn, v_193);
    }
    env = stack[-5];
    goto v_18;
v_18:
    v_193 = basic_elt(env, 4); // "("
    {   LispObject fn = basic_elt(env, 13); // prin2!*
    v_193 = (*qfn1(fn))(fn, v_193);
    }
    env = stack[-5];
    v_193 = nil;
    setvalue(basic_elt(env, 9), v_193); // obrkp!*
    v_193 = qvalue(basic_elt(env, 7)); // orig!*
    stack[0] = v_193;
    v_194 = qvalue(basic_elt(env, 8)); // posn!*
    v_193 = static_cast<LispObject>(288)+TAG_FIXNUM; // 18
    v_193 = static_cast<LispObject>(lessp2(v_194, v_193));
    v_193 = v_193 ? lisp_true : nil;
    env = stack[-5];
    if (v_193 == nil) goto v_166;
    v_193 = qvalue(basic_elt(env, 8)); // posn!*
    goto v_164;
v_166:
    v_194 = qvalue(basic_elt(env, 7)); // orig!*
    v_193 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_193 = plus2(v_194, v_193);
    env = stack[-5];
    goto v_164;
    v_193 = nil;
v_164:
    setvalue(basic_elt(env, 7), v_193); // orig!*
    v_193 = stack[-3];
    if (!car_legal(v_193)) v_193 = cdrerror(v_193); else
    v_193 = cdr(v_193);
    if (v_193 == nil) goto v_179;
    v_195 = basic_elt(env, 10); // !*comma!*
    v_194 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_193 = stack[-3];
    if (!car_legal(v_193)) v_193 = cdrerror(v_193); else
    v_193 = cdr(v_193);
    {   LispObject fn = basic_elt(env, 14); // inprint
    v_193 = (*qfn3(fn))(fn, v_195, v_194, v_193);
    }
    env = stack[-5];
    goto v_177;
v_179:
v_177:
    v_193 = lisp_true;
    setvalue(basic_elt(env, 9), v_193); // obrkp!*
    v_193 = stack[0];
    setvalue(basic_elt(env, 7), v_193); // orig!*
    v_193 = basic_elt(env, 5); // ")"
    {   LispObject fn = basic_elt(env, 13); // prin2!*
    v_193 = (*qfn1(fn))(fn, v_193);
    }
    v_193 = stack[-3];
v_15:
    ;}  // end of a binding scope
    return onevalue(v_193);
}



// Code for dl_get

static LispObject CC_dl_get(LispObject env,
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
        LispObject fn = basic_elt(env, 1); // dl_get2
        return (*qfn2(fn))(fn, v_8, v_7);
    }
}



// Code for lalr_list_of_actions

static LispObject CC_lalr_list_of_actions(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_124, v_125, v_126;
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
    stack[-6] = nil;
    v_124 = stack[-5];
    if (!car_legal(v_124)) v_124 = carerror(v_124); else
    v_124 = car(v_124);
    stack[-2] = v_124;
v_16:
    v_124 = stack[-2];
    if (v_124 == nil) goto v_21;
    else goto v_22;
v_21:
    goto v_15;
v_22:
    v_124 = stack[-2];
    if (!car_legal(v_124)) v_124 = carerror(v_124); else
    v_124 = car(v_124);
    stack[0] = v_124;
    v_124 = stack[0];
    if (!car_legal(v_124)) v_124 = carerror(v_124); else
    v_124 = car(v_124);
    if (!car_legal(v_124)) v_124 = carerror(v_124); else
    v_124 = car(v_124);
    stack[-3] = v_124;
    v_125 = basic_elt(env, 1); // !.
    v_124 = stack[0];
    if (!car_legal(v_124)) v_124 = carerror(v_124); else
    v_124 = car(v_124);
    v_124 = Lmember(nil, v_125, v_124);
    if (!car_legal(v_124)) v_124 = cdrerror(v_124); else
    v_124 = cdr(v_124);
    stack[-1] = v_124;
    v_124 = stack[-1];
    if (v_124 == nil) goto v_39;
    v_124 = stack[-1];
    if (!car_legal(v_124)) v_124 = carerror(v_124); else
    v_124 = car(v_124);
    if (is_number(v_124)) goto v_42;
    else goto v_39;
v_42:
    v_124 = stack[-1];
    if (!car_legal(v_124)) v_124 = carerror(v_124); else
    v_124 = car(v_124);
    stack[0] = v_124;
    v_125 = stack[-5];
    v_124 = stack[0];
    {   LispObject fn = basic_elt(env, 6); // lalr_goto
    v_124 = (*qfn2(fn))(fn, v_125, v_124);
    }
    env = stack[-7];
    if (!car_legal(v_124)) v_124 = cdrerror(v_124); else
    v_124 = cdr(v_124);
    v_125 = basic_elt(env, 2); // shift
    v_124 = list2(v_125, v_124);
    env = stack[-7];
    v_125 = list2(stack[0], v_124);
    env = stack[-7];
    v_124 = stack[-6];
    v_124 = cons(v_125, v_124);
    env = stack[-7];
    stack[-6] = v_124;
    goto v_37;
v_39:
    v_124 = stack[-1];
    if (v_124 == nil) goto v_62;
    else goto v_63;
v_62:
    v_125 = stack[-3];
    v_124 = basic_elt(env, 3); // !S!'
    v_124 = Lneq_2(nil, v_125, v_124);
    env = stack[-7];
    goto v_61;
v_63:
    v_124 = nil;
    goto v_61;
    v_124 = nil;
v_61:
    if (v_124 == nil) goto v_59;
    v_125 = basic_elt(env, 1); // !.
    v_124 = stack[0];
    if (!car_legal(v_124)) v_124 = carerror(v_124); else
    v_124 = car(v_124);
    v_124 = Ldeleq(nil, v_125, v_124);
    env = stack[-7];
    stack[-4] = v_124;
    v_124 = stack[-4];
    {   LispObject fn = basic_elt(env, 7); // lalr_reduction_index
    v_124 = (*qfn1(fn))(fn, v_124);
    }
    env = stack[-7];
    stack[-3] = v_124;
    v_124 = stack[0];
    if (!car_legal(v_124)) v_124 = cdrerror(v_124); else
    v_124 = cdr(v_124);
    stack[-1] = v_124;
v_80:
    v_124 = stack[-1];
    if (v_124 == nil) goto v_85;
    else goto v_86;
v_85:
    goto v_79;
v_86:
    v_124 = stack[-1];
    if (!car_legal(v_124)) v_124 = carerror(v_124); else
    v_124 = car(v_124);
    stack[0] = v_124;
    v_126 = basic_elt(env, 4); // reduce
    v_125 = stack[-4];
    v_124 = stack[-3];
    v_124 = list3(v_126, v_125, v_124);
    env = stack[-7];
    v_125 = list2(stack[0], v_124);
    env = stack[-7];
    v_124 = stack[-6];
    v_124 = cons(v_125, v_124);
    env = stack[-7];
    stack[-6] = v_124;
    v_124 = stack[-1];
    if (!car_legal(v_124)) v_124 = cdrerror(v_124); else
    v_124 = cdr(v_124);
    stack[-1] = v_124;
    goto v_80;
v_79:
    goto v_37;
v_59:
    v_124 = stack[-1];
    if (v_124 == nil) goto v_106;
    else goto v_107;
v_106:
    v_125 = stack[-3];
    v_124 = basic_elt(env, 3); // !S!'
    v_124 = (v_125 == v_124 ? lisp_true : nil);
    goto v_105;
v_107:
    v_124 = nil;
    goto v_105;
    v_124 = nil;
v_105:
    if (v_124 == nil) goto v_103;
    v_125 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_124 = basic_elt(env, 5); // (accept)
    v_125 = list2(v_125, v_124);
    env = stack[-7];
    v_124 = stack[-6];
    v_124 = cons(v_125, v_124);
    env = stack[-7];
    stack[-6] = v_124;
    goto v_37;
v_103:
v_37:
    v_124 = stack[-2];
    if (!car_legal(v_124)) v_124 = cdrerror(v_124); else
    v_124 = cdr(v_124);
    stack[-2] = v_124;
    goto v_16;
v_15:
    v_124 = stack[-6];
    {
        LispObject fn = basic_elt(env, 8); // lalr_remove_duplicates
        return (*qfn1(fn))(fn, v_124);
    }
    return onevalue(v_124);
}



// Code for aex_simpleratp

static LispObject CC_aex_simpleratp(LispObject env,
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
    v_27 = v_2;
// end of prologue
    {   LispObject fn = basic_elt(env, 1); // aex_ex
    v_27 = (*qfn1(fn))(fn, v_27);
    }
    env = stack[-1];
    stack[0] = v_27;
    v_27 = stack[0];
    if (!car_legal(v_27)) v_27 = carerror(v_27); else
    v_27 = car(v_27);
    if (is_number(v_27)) goto v_13;
    v_27 = nil;
    goto v_11;
v_13:
    v_27 = stack[0];
    if (!car_legal(v_27)) v_28 = carerror(v_27); else
    v_28 = car(v_27);
    v_27 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_27 = Leqn_2(nil, v_28, v_27);
    v_27 = (v_27 == nil ? lisp_true : nil);
    goto v_11;
    v_27 = nil;
v_11:
    if (v_27 == nil) goto v_9;
    else goto v_8;
v_9:
    v_27 = stack[0];
    if (!car_legal(v_27)) v_27 = carerror(v_27); else
    v_27 = car(v_27);
    v_27 = (v_27 == nil ? lisp_true : nil);
v_8:
    return onevalue(v_27);
}



// Code for polynomlistfinddivisor

static LispObject CC_polynomlistfinddivisor(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    stack[-2] = v_4;
    v_84 = v_3;
    v_85 = v_2;
// end of prologue
    v_83 = v_84;
    if (!car_legal(v_83)) v_83 = carerror(v_83); else
    v_83 = car(v_83);
    if (v_83 == nil) goto v_12;
    else goto v_13;
v_12:
    v_83 = lisp_true;
    goto v_11;
v_13:
    v_83 = v_85;
    if (!car_legal(v_83)) v_83 = carerror(v_83); else
    v_83 = car(v_83);
    v_83 = (v_83 == nil ? lisp_true : nil);
    goto v_11;
    v_83 = nil;
v_11:
    if (v_83 == nil) goto v_9;
    v_83 = nil;
    goto v_7;
v_9:
    stack[0] = nil;
    v_83 = v_84;
    if (!car_legal(v_83)) v_83 = carerror(v_83); else
    v_83 = car(v_83);
    stack[-3] = v_83;
    v_83 = v_85;
    stack[-1] = v_83;
v_35:
    v_83 = stack[-1];
    if (!car_legal(v_83)) v_83 = carerror(v_83); else
    v_83 = car(v_83);
    if (v_83 == nil) goto v_38;
    v_83 = stack[0];
    if (v_83 == nil) goto v_43;
    else goto v_38;
v_43:
    goto v_39;
v_38:
    goto v_34;
v_39:
    v_83 = stack[-2];
    if (v_83 == nil) goto v_50;
    v_84 = stack[-3];
    v_83 = stack[-1];
    if (!car_legal(v_83)) v_83 = carerror(v_83); else
    v_83 = car(v_83);
    if (!car_legal(v_83)) v_83 = carerror(v_83); else
    v_83 = car(v_83);
    {   LispObject fn = basic_elt(env, 1); // monomisdivisibleby
    v_83 = (*qfn2(fn))(fn, v_84, v_83);
    }
    env = stack[-4];
    if (v_83 == nil) goto v_50;
    goto v_48;
v_50:
    v_83 = stack[-2];
    if (v_83 == nil) goto v_62;
    else goto v_63;
v_62:
    v_84 = stack[-3];
    v_83 = stack[-1];
    if (!car_legal(v_83)) v_83 = carerror(v_83); else
    v_83 = car(v_83);
    if (!car_legal(v_83)) v_83 = carerror(v_83); else
    v_83 = car(v_83);
    {   LispObject fn = basic_elt(env, 2); // monomispommaretdivisibleby
    v_83 = (*qfn2(fn))(fn, v_84, v_83);
    }
    env = stack[-4];
    goto v_61;
v_63:
    v_83 = nil;
    goto v_61;
    v_83 = nil;
v_61:
    if (v_83 == nil) goto v_59;
    else goto v_48;
v_59:
    goto v_49;
v_48:
    v_83 = lisp_true;
    stack[0] = v_83;
    goto v_47;
v_49:
    v_83 = stack[-1];
    if (!car_legal(v_83)) v_83 = cdrerror(v_83); else
    v_83 = cdr(v_83);
    stack[-1] = v_83;
    goto v_47;
v_47:
    goto v_35;
v_34:
    v_83 = stack[-1];
    if (!car_legal(v_83)) v_83 = carerror(v_83); else
    v_83 = car(v_83);
    goto v_7;
    v_83 = nil;
v_7:
    return onevalue(v_83);
}



// Code for diffp1

static LispObject CC_diffp1(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_33 = v_3;
    v_35 = v_2;
// end of prologue
    v_34 = v_35;
    if (!car_legal(v_34)) v_34 = carerror(v_34); else
    v_34 = car(v_34);
    if (v_34 == v_33) goto v_8;
    v_33 = nil;
    goto v_6;
v_8:
    v_33 = v_35;
    if (!car_legal(v_33)) v_34 = cdrerror(v_33); else
    v_34 = cdr(v_33);
    v_33 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_34 == v_33) goto v_13;
    else goto v_14;
v_13:
    v_33 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_6;
v_14:
    v_33 = v_35;
    if (!car_legal(v_33)) stack[-1] = cdrerror(v_33); else
    stack[-1] = cdr(v_33);
    v_33 = v_35;
    if (!car_legal(v_33)) stack[0] = carerror(v_33); else
    stack[0] = car(v_33);
    v_33 = v_35;
    if (!car_legal(v_33)) v_33 = cdrerror(v_33); else
    v_33 = cdr(v_33);
    v_33 = sub1(v_33);
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 1); // to
    v_34 = (*qfn2(fn))(fn, stack[0], v_33);
    }
    env = stack[-2];
    v_33 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_33 = cons(v_34, v_33);
    env = stack[-2];
    v_33 = ncons(v_33);
    env = stack[-2];
    {
        LispObject v_38 = stack[-1];
        LispObject fn = basic_elt(env, 2); // multd
        return (*qfn2(fn))(fn, v_38, v_33);
    }
    v_33 = nil;
v_6:
    return onevalue(v_33);
}



// Code for removeg

static LispObject CC_removeg(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_122, v_123, v_124, v_125;
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
    v_122 = stack[-1];
    if (!car_legal(v_122)) v_123 = cdrerror(v_122); else
    v_123 = cdr(v_122);
    v_122 = stack[0];
    if (!car_legal(v_122)) v_122 = cdrerror(v_122); else
    v_122 = cdr(v_122);
    if (!car_legal(v_122)) v_122 = cdrerror(v_122); else
    v_122 = cdr(v_122);
    if (!car_legal(v_122)) v_122 = cdrerror(v_122); else
    v_122 = cdr(v_122);
    if (!car_legal(v_122)) v_122 = carerror(v_122); else
    v_122 = car(v_122);
    {   LispObject fn = basic_elt(env, 6); // finde
    v_122 = (*qfn2(fn))(fn, v_123, v_122);
    }
    env = stack[-3];
    stack[-2] = v_122;
    v_122 = stack[-2];
    if (!car_legal(v_122)) v_123 = carerror(v_122); else
    v_123 = car(v_122);
    v_122 = stack[0];
    if (v_123 == v_122) goto v_18;
    else goto v_19;
v_18:
    v_122 = stack[-2];
    if (!car_legal(v_122)) v_123 = cdrerror(v_122); else
    v_123 = cdr(v_122);
    v_122 = stack[0];
    if (!car_legal(v_122)) v_122 = cdrerror(v_122); else
    v_122 = cdr(v_122);
    if (!car_legal(v_122)) v_122 = cdrerror(v_122); else
    v_122 = cdr(v_122);
    if (!car_legal(v_122)) v_122 = cdrerror(v_122); else
    v_122 = cdr(v_122);
    if (!car_legal(v_122)) v_122 = carerror(v_122); else
    v_122 = car(v_122);
    {   LispObject fn = basic_elt(env, 6); // finde
    v_122 = (*qfn2(fn))(fn, v_123, v_122);
    }
    env = stack[-3];
    stack[-2] = v_122;
    goto v_17;
v_19:
v_17:
    v_122 = stack[-2];
    if (v_122 == nil) goto v_33;
    else goto v_34;
v_33:
    v_125 = basic_elt(env, 1); // "Free edge"
    v_122 = stack[0];
    if (!car_legal(v_122)) v_122 = cdrerror(v_122); else
    v_122 = cdr(v_122);
    if (!car_legal(v_122)) v_122 = cdrerror(v_122); else
    v_122 = cdr(v_122);
    if (!car_legal(v_122)) v_122 = cdrerror(v_122); else
    v_122 = cdr(v_122);
    if (!car_legal(v_122)) v_124 = carerror(v_122); else
    v_124 = car(v_122);
    v_123 = basic_elt(env, 2); // "in vertex"
    v_122 = stack[0];
    v_122 = list4(v_125, v_124, v_123, v_122);
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 7); // cerror
    v_122 = (*qfn1(fn))(fn, v_122);
    }
    env = stack[-3];
    goto v_32;
v_34:
v_32:
    v_122 = stack[-2];
    if (!car_legal(v_122)) v_122 = carerror(v_122); else
    v_122 = car(v_122);
    stack[-2] = v_122;
    v_122 = stack[-2];
    if (!car_legal(v_122)) v_122 = cdrerror(v_122); else
    v_122 = cdr(v_122);
    if (!car_legal(v_122)) v_123 = carerror(v_122); else
    v_123 = car(v_122);
    v_122 = stack[-2];
    if (!car_legal(v_122)) v_122 = cdrerror(v_122); else
    v_122 = cdr(v_122);
    if (!car_legal(v_122)) v_122 = cdrerror(v_122); else
    v_122 = cdr(v_122);
    if (!car_legal(v_122)) v_122 = carerror(v_122); else
    v_122 = car(v_122);
    if (v_123 == v_122) goto v_54;
    else goto v_55;
v_54:
    v_122 = lisp_true;
    goto v_53;
v_55:
    v_122 = stack[-2];
    if (!car_legal(v_122)) v_122 = cdrerror(v_122); else
    v_122 = cdr(v_122);
    if (!car_legal(v_122)) v_123 = carerror(v_122); else
    v_123 = car(v_122);
    v_122 = stack[-2];
    if (!car_legal(v_122)) v_122 = cdrerror(v_122); else
    v_122 = cdr(v_122);
    if (!car_legal(v_122)) v_122 = cdrerror(v_122); else
    v_122 = cdr(v_122);
    if (!car_legal(v_122)) v_122 = cdrerror(v_122); else
    v_122 = cdr(v_122);
    if (!car_legal(v_122)) v_122 = carerror(v_122); else
    v_122 = car(v_122);
    if (v_123 == v_122) goto v_68;
    else goto v_69;
v_68:
    v_122 = lisp_true;
    goto v_67;
v_69:
    v_122 = stack[-2];
    if (!car_legal(v_122)) v_122 = cdrerror(v_122); else
    v_122 = cdr(v_122);
    if (!car_legal(v_122)) v_122 = cdrerror(v_122); else
    v_122 = cdr(v_122);
    if (!car_legal(v_122)) v_123 = carerror(v_122); else
    v_123 = car(v_122);
    v_122 = stack[-2];
    if (!car_legal(v_122)) v_122 = cdrerror(v_122); else
    v_122 = cdr(v_122);
    if (!car_legal(v_122)) v_122 = cdrerror(v_122); else
    v_122 = cdr(v_122);
    if (!car_legal(v_122)) v_122 = cdrerror(v_122); else
    v_122 = cdr(v_122);
    if (!car_legal(v_122)) v_122 = carerror(v_122); else
    v_122 = car(v_122);
    v_122 = (v_123 == v_122 ? lisp_true : nil);
    goto v_67;
    v_122 = nil;
v_67:
    goto v_53;
    v_122 = nil;
v_53:
    if (v_122 == nil) goto v_51;
    v_123 = nil;
    v_122 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_122 = cons(v_123, v_122);
    env = stack[-3];
    v_122 = ncons(v_122);
    return ncons(v_122);
v_51:
    v_122 = stack[-2];
    if (!car_legal(v_122)) v_123 = carerror(v_122); else
    v_123 = car(v_122);
    v_122 = basic_elt(env, 3); // qg
    if (v_123 == v_122) goto v_98;
    else goto v_99;
v_98:
    v_124 = stack[-1];
    v_123 = stack[0];
    v_122 = stack[-2];
    {
        LispObject fn = basic_elt(env, 8); // removeg1
        return (*qfn3(fn))(fn, v_124, v_123, v_122);
    }
v_99:
    v_122 = stack[-2];
    if (!car_legal(v_122)) v_123 = carerror(v_122); else
    v_123 = car(v_122);
    v_122 = basic_elt(env, 4); // g3
    if (v_123 == v_122) goto v_107;
    else goto v_108;
v_107:
    v_124 = stack[-1];
    v_123 = stack[0];
    v_122 = stack[-2];
    {
        LispObject fn = basic_elt(env, 9); // removeg2
        return (*qfn3(fn))(fn, v_124, v_123, v_122);
    }
v_108:
    v_123 = basic_elt(env, 5); // "Invalid type of vertex"
    v_122 = stack[0];
    v_122 = list2(v_123, v_122);
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 7); // cerror
    v_122 = (*qfn1(fn))(fn, v_122);
    }
    goto v_97;
v_97:
    v_122 = nil;
    return onevalue(v_122);
}



// Code for poly!-abs

static LispObject CC_polyKabs(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // poly!-minusp
    v_15 = (*qfn1(fn))(fn, v_15);
    }
    env = stack[-1];
    if (v_15 == nil) goto v_7;
    v_15 = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // negf
        return (*qfn1(fn))(fn, v_15);
    }
v_7:
    v_15 = stack[0];
    goto v_5;
    v_15 = nil;
v_5:
    return onevalue(v_15);
}



// Code for freeofdepl

static LispObject CC_freeofdepl(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
v_8:
    v_34 = stack[-2];
    if (v_34 == nil) goto v_11;
    else goto v_12;
v_11:
    v_34 = lisp_true;
    goto v_7;
v_12:
    v_35 = stack[0];
    v_34 = stack[-2];
    if (!car_legal(v_34)) v_34 = carerror(v_34); else
    v_34 = car(v_34);
    if (!car_legal(v_34)) v_34 = cdrerror(v_34); else
    v_34 = cdr(v_34);
    {   LispObject fn = basic_elt(env, 1); // smember
    v_34 = (*qfn2(fn))(fn, v_35, v_34);
    }
    env = stack[-3];
    if (v_34 == nil) goto v_16;
    v_34 = stack[-2];
    if (!car_legal(v_34)) v_34 = carerror(v_34); else
    v_34 = car(v_34);
    if (!car_legal(v_34)) v_35 = carerror(v_34); else
    v_35 = car(v_34);
    v_34 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // smember
    v_34 = (*qfn2(fn))(fn, v_35, v_34);
    }
    env = stack[-3];
    if (v_34 == nil) goto v_16;
    v_34 = nil;
    goto v_7;
v_16:
    v_34 = stack[-2];
    if (!car_legal(v_34)) v_34 = cdrerror(v_34); else
    v_34 = cdr(v_34);
    stack[-2] = v_34;
    goto v_8;
    v_34 = nil;
v_7:
    return onevalue(v_34);
}



// Code for talp_acfrp

static LispObject CC_talp_acfrp(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_13;
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
    v_13 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // talp_arg2l
    v_13 = (*qfn1(fn))(fn, v_13);
    }
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // talp_tcfrp
    v_13 = (*qfn1(fn))(fn, v_13);
    }
    env = stack[-1];
    if (v_13 == nil) goto v_6;
    else goto v_5;
v_6:
    v_13 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // talp_arg2r
    v_13 = (*qfn1(fn))(fn, v_13);
    }
    env = stack[-1];
    {
        LispObject fn = basic_elt(env, 2); // talp_tcfrp
        return (*qfn1(fn))(fn, v_13);
    }
v_5:
    return onevalue(v_13);
}



// Code for searchtm

static LispObject CC_searchtm(LispObject env,
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
    v_30 = v_2;
// end of prologue
    v_29 = v_30;
    if (!consp(v_29)) goto v_10;
    else goto v_11;
v_10:
    v_29 = lisp_true;
    goto v_9;
v_11:
    v_29 = v_30;
    if (!car_legal(v_29)) v_29 = carerror(v_29); else
    v_29 = car(v_29);
    v_29 = (consp(v_29) ? nil : lisp_true);
    goto v_9;
    v_29 = nil;
v_9:
    if (v_29 == nil) goto v_7;
    v_29 = nil;
    goto v_5;
v_7:
    v_29 = v_30;
    if (!car_legal(v_29)) v_29 = carerror(v_29); else
    v_29 = car(v_29);
    if (!car_legal(v_29)) stack[0] = carerror(v_29); else
    stack[0] = car(v_29);
    v_29 = v_30;
    if (!car_legal(v_29)) v_29 = cdrerror(v_29); else
    v_29 = cdr(v_29);
    {   LispObject fn = basic_elt(env, 1); // searchpl
    v_29 = (*qfn1(fn))(fn, v_29);
    }
    {
        LispObject v_32 = stack[0];
        return cons(v_32, v_29);
    }
    v_29 = nil;
v_5:
    return onevalue(v_29);
}



// Code for rl_simpbop

static LispObject CC_rl_simpbop(LispObject env,
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
    real_push(nil, nil, nil, nil, nil);
    stack_popper stack_popper_var(6);
// copy arguments values to proper place
    v_46 = v_2;
// end of prologue
    v_45 = v_46;
    if (!car_legal(v_45)) stack[-4] = carerror(v_45); else
    stack[-4] = car(v_45);
    v_45 = v_46;
    if (!car_legal(v_45)) v_45 = cdrerror(v_45); else
    v_45 = cdr(v_45);
    stack[-3] = v_45;
    v_45 = stack[-3];
    if (v_45 == nil) goto v_17;
    else goto v_18;
v_17:
    v_45 = nil;
    goto v_11;
v_18:
    v_45 = stack[-3];
    if (!car_legal(v_45)) v_45 = carerror(v_45); else
    v_45 = car(v_45);
    {   LispObject fn = basic_elt(env, 1); // rl_simp1
    v_45 = (*qfn1(fn))(fn, v_45);
    }
    env = stack[-5];
    v_45 = ncons(v_45);
    env = stack[-5];
    stack[-1] = v_45;
    stack[-2] = v_45;
v_12:
    v_45 = stack[-3];
    if (!car_legal(v_45)) v_45 = cdrerror(v_45); else
    v_45 = cdr(v_45);
    stack[-3] = v_45;
    v_45 = stack[-3];
    if (v_45 == nil) goto v_31;
    else goto v_32;
v_31:
    v_45 = stack[-2];
    goto v_11;
v_32:
    stack[0] = stack[-1];
    v_45 = stack[-3];
    if (!car_legal(v_45)) v_45 = carerror(v_45); else
    v_45 = car(v_45);
    {   LispObject fn = basic_elt(env, 1); // rl_simp1
    v_45 = (*qfn1(fn))(fn, v_45);
    }
    env = stack[-5];
    v_45 = ncons(v_45);
    env = stack[-5];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_45);
    v_45 = stack[-1];
    if (!car_legal(v_45)) v_45 = cdrerror(v_45); else
    v_45 = cdr(v_45);
    stack[-1] = v_45;
    goto v_12;
v_11:
    {
        LispObject v_52 = stack[-4];
        return cons(v_52, v_45);
    }
}



// Code for vdp_zero!?

static LispObject CC_vdp_zeroW(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // vdp_poly
    v_7 = (*qfn1(fn))(fn, v_7);
    }
    v_7 = (v_7 == nil ? lisp_true : nil);
    return onevalue(v_7);
}



// Code for spmultm2

static LispObject CC_spmultm2(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
        push(v_2,v_3,v_4);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_4,v_3,v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil, nil, nil, nil, nil);
    real_push(nil, nil, nil, nil, nil);
    push(nil, nil, nil);
    stack_popper stack_popper_var(14);
// copy arguments values to proper place
    v_191 = v_4;
    stack[-10] = v_3;
    stack[-11] = v_2;
// end of prologue
    v_192 = v_191;
    if (!car_legal(v_192)) v_192 = cdrerror(v_192); else
    v_192 = cdr(v_192);
    if (!car_legal(v_192)) v_192 = carerror(v_192); else
    v_192 = car(v_192);
    {   LispObject fn = basic_elt(env, 1); // mkempspmat
    v_191 = (*qfn2(fn))(fn, v_192, v_191);
    }
    env = stack[-13];
    stack[-12] = v_191;
    v_191 = stack[-11];
    if (!car_legal(v_191)) v_191 = cdrerror(v_191); else
    v_191 = cdr(v_191);
    if (!car_legal(v_191)) v_192 = carerror(v_191); else
    v_192 = car(v_191);
    v_191 = stack[-11];
    if (!car_legal(v_191)) v_191 = cdrerror(v_191); else
    v_191 = cdr(v_191);
    if (!car_legal(v_191)) v_191 = cdrerror(v_191); else
    v_191 = cdr(v_191);
    if (!car_legal(v_191)) v_191 = carerror(v_191); else
    v_191 = car(v_191);
    if (!car_legal(v_191)) v_191 = cdrerror(v_191); else
    v_191 = cdr(v_191);
    if (!car_legal(v_191)) v_191 = carerror(v_191); else
    v_191 = car(v_191);
    {   LispObject fn = basic_elt(env, 2); // empty
    v_191 = (*qfn2(fn))(fn, v_192, v_191);
    }
    env = stack[-13];
    if (v_191 == nil) goto v_29;
    else goto v_30;
v_29:
    v_191 = lisp_true;
    goto v_28;
v_30:
    v_191 = stack[-10];
    if (!car_legal(v_191)) v_191 = cdrerror(v_191); else
    v_191 = cdr(v_191);
    if (!car_legal(v_191)) v_192 = carerror(v_191); else
    v_192 = car(v_191);
    v_191 = stack[-10];
    if (!car_legal(v_191)) v_191 = cdrerror(v_191); else
    v_191 = cdr(v_191);
    if (!car_legal(v_191)) v_191 = cdrerror(v_191); else
    v_191 = cdr(v_191);
    if (!car_legal(v_191)) v_191 = carerror(v_191); else
    v_191 = car(v_191);
    if (!car_legal(v_191)) v_191 = cdrerror(v_191); else
    v_191 = cdr(v_191);
    if (!car_legal(v_191)) v_191 = carerror(v_191); else
    v_191 = car(v_191);
    {   LispObject fn = basic_elt(env, 2); // empty
    v_191 = (*qfn2(fn))(fn, v_192, v_191);
    }
    env = stack[-13];
    v_191 = (v_191 == nil ? lisp_true : nil);
    goto v_28;
    v_191 = nil;
v_28:
    if (v_191 == nil) goto v_26;
    v_191 = stack[-12];
    goto v_17;
v_26:
    v_191 = stack[-11];
    if (!car_legal(v_191)) v_191 = cdrerror(v_191); else
    v_191 = cdr(v_191);
    if (!car_legal(v_191)) v_191 = carerror(v_191); else
    v_191 = car(v_191);
    stack[-9] = v_191;
    v_191 = stack[-10];
    if (!car_legal(v_191)) v_191 = cdrerror(v_191); else
    v_191 = cdr(v_191);
    if (!car_legal(v_191)) v_191 = carerror(v_191); else
    v_191 = car(v_191);
    stack[-8] = v_191;
    v_191 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-3] = v_191;
v_67:
    v_191 = stack[-11];
    if (!car_legal(v_191)) v_191 = cdrerror(v_191); else
    v_191 = cdr(v_191);
    if (!car_legal(v_191)) v_191 = cdrerror(v_191); else
    v_191 = cdr(v_191);
    if (!car_legal(v_191)) v_191 = carerror(v_191); else
    v_191 = car(v_191);
    if (!car_legal(v_191)) v_191 = cdrerror(v_191); else
    v_191 = cdr(v_191);
    if (!car_legal(v_191)) v_192 = carerror(v_191); else
    v_192 = car(v_191);
    v_191 = stack[-3];
    v_191 = difference2(v_192, v_191);
    env = stack[-13];
    v_191 = Lminusp(nil, v_191);
    env = stack[-13];
    if (v_191 == nil) goto v_72;
    goto v_66;
v_72:
    v_192 = stack[-9];
    v_191 = stack[-3];
    {   LispObject fn = basic_elt(env, 3); // findrow
    v_191 = (*qfn2(fn))(fn, v_192, v_191);
    }
    env = stack[-13];
    stack[-7] = v_191;
    v_191 = stack[-7];
    if (v_191 == nil) goto v_89;
    v_191 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-2] = v_191;
v_94:
    v_191 = stack[-10];
    if (!car_legal(v_191)) v_191 = cdrerror(v_191); else
    v_191 = cdr(v_191);
    if (!car_legal(v_191)) v_191 = cdrerror(v_191); else
    v_191 = cdr(v_191);
    if (!car_legal(v_191)) v_191 = carerror(v_191); else
    v_191 = car(v_191);
    if (!car_legal(v_191)) v_191 = cdrerror(v_191); else
    v_191 = cdr(v_191);
    if (!car_legal(v_191)) v_192 = carerror(v_191); else
    v_192 = car(v_191);
    v_191 = stack[-2];
    v_191 = difference2(v_192, v_191);
    env = stack[-13];
    v_191 = Lminusp(nil, v_191);
    env = stack[-13];
    if (v_191 == nil) goto v_99;
    goto v_93;
v_99:
    v_192 = stack[-8];
    v_191 = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // findrow
    v_191 = (*qfn2(fn))(fn, v_192, v_191);
    }
    env = stack[-13];
    stack[-6] = v_191;
    v_191 = stack[-6];
    if (v_191 == nil) goto v_116;
    v_191 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {   LispObject fn = basic_elt(env, 4); // simp
    v_191 = (*qfn1(fn))(fn, v_191);
    }
    env = stack[-13];
    stack[-4] = v_191;
    v_191 = stack[-7];
    if (!car_legal(v_191)) v_191 = cdrerror(v_191); else
    v_191 = cdr(v_191);
    stack[-1] = v_191;
v_123:
    v_191 = stack[-1];
    if (v_191 == nil) goto v_128;
    else goto v_129;
v_128:
    goto v_122;
v_129:
    v_191 = stack[-1];
    if (!car_legal(v_191)) v_191 = carerror(v_191); else
    v_191 = car(v_191);
    v_192 = v_191;
    v_191 = v_192;
    if (!car_legal(v_191)) v_191 = carerror(v_191); else
    v_191 = car(v_191);
    if (!car_legal(v_192)) v_192 = cdrerror(v_192); else
    v_192 = cdr(v_192);
    v_193 = v_192;
    v_192 = v_191;
    v_191 = stack[-6];
    v_191 = Latsoc(nil, v_192, v_191);
    stack[-5] = v_191;
    v_191 = stack[-5];
    if (v_191 == nil) goto v_145;
    v_191 = stack[-5];
    if (!car_legal(v_191)) v_191 = cdrerror(v_191); else
    v_191 = cdr(v_191);
    stack[-5] = v_191;
    v_191 = v_193;
    {   LispObject fn = basic_elt(env, 4); // simp
    stack[0] = (*qfn1(fn))(fn, v_191);
    }
    env = stack[-13];
    v_191 = stack[-5];
    {   LispObject fn = basic_elt(env, 4); // simp
    v_191 = (*qfn1(fn))(fn, v_191);
    }
    env = stack[-13];
    {   LispObject fn = basic_elt(env, 5); // multsq
    v_191 = (*qfn2(fn))(fn, stack[0], v_191);
    }
    env = stack[-13];
    stack[0] = v_191;
    v_192 = stack[-4];
    v_191 = stack[0];
    {   LispObject fn = basic_elt(env, 6); // addsq
    v_191 = (*qfn2(fn))(fn, v_192, v_191);
    }
    env = stack[-13];
    stack[-4] = v_191;
    goto v_143;
v_145:
    v_191 = stack[-4];
    stack[-4] = v_191;
    goto v_143;
v_143:
    v_191 = stack[-1];
    if (!car_legal(v_191)) v_191 = cdrerror(v_191); else
    v_191 = cdr(v_191);
    stack[-1] = v_191;
    goto v_123;
v_122:
    v_191 = stack[-4];
    {   LispObject fn = basic_elt(env, 7); // mk!*sq
    v_191 = (*qfn1(fn))(fn, v_191);
    }
    env = stack[-13];
    stack[0] = v_191;
    v_192 = stack[0];
    v_191 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_192 == v_191) goto v_169;
    v_193 = stack[-12];
    v_192 = stack[-3];
    v_191 = stack[-2];
    stack[-1] = list3(v_193, v_192, v_191);
    env = stack[-13];
    stack[-4] = stack[0];
    stack[0] = stack[-12];
    v_191 = nil;
    v_191 = ncons(v_191);
    env = stack[-13];
    {   LispObject fn = basic_elt(env, 8); // letmtr3
    v_191 = (*qfn4up(fn))(fn, stack[-1], stack[-4], stack[0], v_191);
    }
    env = stack[-13];
    goto v_167;
v_169:
v_167:
    goto v_114;
v_116:
v_114:
    v_191 = stack[-2];
    v_191 = add1(v_191);
    env = stack[-13];
    stack[-2] = v_191;
    goto v_94;
v_93:
    goto v_87;
v_89:
v_87:
    v_191 = stack[-3];
    v_191 = add1(v_191);
    env = stack[-13];
    stack[-3] = v_191;
    goto v_67;
v_66:
    v_191 = stack[-12];
    goto v_17;
    v_191 = nil;
v_17:
    return onevalue(v_191);
}



// Code for on

static LispObject CC_on(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_22;
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
    stack[0] = v_22;
v_7:
    v_22 = stack[0];
    if (v_22 == nil) goto v_11;
    else goto v_12;
v_11:
    v_22 = nil;
    goto v_6;
v_12:
    v_22 = stack[0];
    if (!car_legal(v_22)) v_22 = carerror(v_22); else
    v_22 = car(v_22);
    {   LispObject fn = basic_elt(env, 1); // on1
    v_22 = (*qfn1(fn))(fn, v_22);
    }
    env = stack[-1];
    v_22 = stack[0];
    if (!car_legal(v_22)) v_22 = cdrerror(v_22); else
    v_22 = cdr(v_22);
    stack[0] = v_22;
    goto v_7;
v_6:
    return onevalue(v_22);
}



// Code for covposp

static LispObject CC_covposp(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_24, v_25;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_24 = v_2;
// end of prologue
v_1:
    v_25 = v_24;
    if (v_25 == nil) goto v_6;
    else goto v_7;
v_6:
    v_24 = lisp_true;
    goto v_5;
v_7:
    v_25 = v_24;
    if (!car_legal(v_25)) v_25 = carerror(v_25); else
    v_25 = car(v_25);
    if (!consp(v_25)) goto v_15;
    if (!car_legal(v_24)) v_24 = cdrerror(v_24); else
    v_24 = cdr(v_24);
    goto v_1;
v_15:
    v_24 = nil;
    goto v_13;
    v_24 = nil;
v_13:
    goto v_5;
    v_24 = nil;
v_5:
    return onevalue(v_24);
}



// Code for contrsp

static LispObject CC_contrsp(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_26 = stack[-1];
    if (!car_legal(v_26)) v_26 = cdrerror(v_26); else
    v_26 = cdr(v_26);
    if (!car_legal(v_26)) v_28 = carerror(v_26); else
    v_28 = car(v_26);
    v_26 = stack[-1];
    if (!car_legal(v_26)) v_26 = cdrerror(v_26); else
    v_26 = cdr(v_26);
    if (!car_legal(v_26)) v_26 = cdrerror(v_26); else
    v_26 = cdr(v_26);
    if (!car_legal(v_26)) v_27 = carerror(v_26); else
    v_27 = car(v_26);
    v_26 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // contrsp2
    v_26 = (*qfn3(fn))(fn, v_28, v_27, v_26);
    }
    env = stack[-2];
    if (v_26 == nil) goto v_7;
    else goto v_6;
v_7:
    v_26 = stack[-1];
    if (!car_legal(v_26)) v_26 = cdrerror(v_26); else
    v_26 = cdr(v_26);
    if (!car_legal(v_26)) v_26 = cdrerror(v_26); else
    v_26 = cdr(v_26);
    if (!car_legal(v_26)) v_28 = carerror(v_26); else
    v_28 = car(v_26);
    v_26 = stack[-1];
    if (!car_legal(v_26)) v_26 = cdrerror(v_26); else
    v_26 = cdr(v_26);
    if (!car_legal(v_26)) v_27 = carerror(v_26); else
    v_27 = car(v_26);
    v_26 = stack[0];
    {
        LispObject fn = basic_elt(env, 1); // contrsp2
        return (*qfn3(fn))(fn, v_28, v_27, v_26);
    }
v_6:
    return onevalue(v_26);
}



// Code for cali_bc_fi

static LispObject CC_cali_bc_fi(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_14, v_15, v_16;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_15 = v_2;
// end of prologue
    v_16 = v_15;
    v_14 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_16 == v_14) goto v_6;
    else goto v_7;
v_6:
    v_14 = nil;
    goto v_5;
v_7:
    v_14 = v_15;
    goto v_5;
    v_14 = nil;
v_5:
    return onevalue(v_14);
}



// Code for oprin

static LispObject CC_oprin(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_60 = stack[0];
    if (!symbolp(v_60)) v_60 = nil;
    else { v_60 = qfastgets(v_60);
           if (v_60 != nil) { v_60 = elt(v_60, 37); // prtch
#ifdef RECORD_GET
             if (v_60 != SPID_NOPROP)
                record_get(elt(fastget_names, 37), 1);
             else record_get(elt(fastget_names, 37), 0),
                v_60 = nil; }
           else record_get(elt(fastget_names, 37), 0); }
#else
             if (v_60 == SPID_NOPROP) v_60 = nil; }}
#endif
    stack[-1] = v_60;
    v_60 = stack[-1];
    if (v_60 == nil) goto v_9;
    else goto v_10;
v_9:
    v_60 = basic_elt(env, 1); // " "
    {   LispObject fn = basic_elt(env, 8); // prin2!*
    v_60 = (*qfn1(fn))(fn, v_60);
    }
    env = stack[-2];
    v_60 = stack[0];
    {   LispObject fn = basic_elt(env, 8); // prin2!*
    v_60 = (*qfn1(fn))(fn, v_60);
    }
    env = stack[-2];
    v_60 = basic_elt(env, 1); // " "
    {
        LispObject fn = basic_elt(env, 8); // prin2!*
        return (*qfn1(fn))(fn, v_60);
    }
v_10:
    v_60 = qvalue(basic_elt(env, 2)); // !*fort
    if (v_60 == nil) goto v_19;
    v_60 = stack[-1];
    {
        LispObject fn = basic_elt(env, 8); // prin2!*
        return (*qfn1(fn))(fn, v_60);
    }
v_19:
    v_60 = qvalue(basic_elt(env, 3)); // !*list
    if (v_60 == nil) goto v_24;
    v_60 = qvalue(basic_elt(env, 4)); // obrkp!*
    if (v_60 == nil) goto v_24;
    v_61 = stack[0];
    v_60 = basic_elt(env, 5); // (plus minus)
    v_60 = Lmemq(nil, v_61, v_60);
    if (v_60 == nil) goto v_24;
    v_60 = qvalue(basic_elt(env, 6)); // testing!-width!*
    if (v_60 == nil) goto v_37;
    v_60 = lisp_true;
    setvalue(basic_elt(env, 7), v_60); // overflowed!*
    goto v_35;
v_37:
    v_60 = lisp_true;
    {   LispObject fn = basic_elt(env, 9); // terpri!*
    v_60 = (*qfn1(fn))(fn, v_60);
    }
    env = stack[-2];
    v_60 = stack[-1];
    {
        LispObject fn = basic_elt(env, 8); // prin2!*
        return (*qfn1(fn))(fn, v_60);
    }
    v_60 = nil;
v_35:
    goto v_8;
v_24:
    v_60 = stack[0];
    if (!symbolp(v_60)) v_60 = nil;
    else { v_60 = qfastgets(v_60);
           if (v_60 != nil) { v_60 = elt(v_60, 61); // spaced
#ifdef RECORD_GET
             if (v_60 == SPID_NOPROP)
                record_get(elt(fastget_names, 61), 0),
                v_60 = nil;
             else record_get(elt(fastget_names, 61), 1),
                v_60 = lisp_true; }
           else record_get(elt(fastget_names, 61), 0); }
#else
             if (v_60 == SPID_NOPROP) v_60 = nil; else v_60 = lisp_true; }}
#endif
    if (v_60 == nil) goto v_47;
    v_60 = basic_elt(env, 1); // " "
    {   LispObject fn = basic_elt(env, 8); // prin2!*
    v_60 = (*qfn1(fn))(fn, v_60);
    }
    env = stack[-2];
    v_60 = stack[-1];
    {   LispObject fn = basic_elt(env, 8); // prin2!*
    v_60 = (*qfn1(fn))(fn, v_60);
    }
    env = stack[-2];
    v_60 = basic_elt(env, 1); // " "
    {
        LispObject fn = basic_elt(env, 8); // prin2!*
        return (*qfn1(fn))(fn, v_60);
    }
v_47:
    v_60 = stack[-1];
    {
        LispObject fn = basic_elt(env, 8); // prin2!*
        return (*qfn1(fn))(fn, v_60);
    }
    v_60 = nil;
v_8:
    return onevalue(v_60);
}



// Code for split_ext

static LispObject CC_split_ext(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_73, v_74, v_75;
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(9);
// copy arguments values to proper place
    v_74 = v_3;
    v_75 = v_2;
// end of prologue
    v_73 = v_75;
    if (!car_legal(v_73)) v_73 = cdrerror(v_73); else
    v_73 = cdr(v_73);
    stack[-7] = v_73;
    v_73 = v_75;
    if (!car_legal(v_73)) v_73 = carerror(v_73); else
    v_73 = car(v_73);
    {   LispObject fn = basic_elt(env, 2); // split_form
    v_73 = (*qfn2(fn))(fn, v_73, v_74);
    }
    env = stack[-8];
    stack[0] = v_73;
    v_73 = basic_elt(env, 1); // ext
    stack[-6] = ncons(v_73);
    env = stack[-8];
    v_73 = stack[0];
    if (!car_legal(v_73)) v_74 = carerror(v_73); else
    v_74 = car(v_73);
    v_73 = stack[-7];
    v_73 = cons(v_74, v_73);
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 3); // cancel
    stack[-5] = (*qfn1(fn))(fn, v_73);
    }
    env = stack[-8];
    v_73 = stack[0];
    if (!car_legal(v_73)) v_73 = cdrerror(v_73); else
    v_73 = cdr(v_73);
    stack[-4] = v_73;
    v_73 = stack[-4];
    if (v_73 == nil) goto v_33;
    else goto v_34;
v_33:
    v_73 = nil;
    goto v_27;
v_34:
    v_73 = stack[-4];
    if (!car_legal(v_73)) v_73 = carerror(v_73); else
    v_73 = car(v_73);
    v_74 = v_73;
    v_73 = v_74;
    if (!car_legal(v_73)) stack[0] = carerror(v_73); else
    stack[0] = car(v_73);
    v_73 = v_74;
    if (!car_legal(v_73)) v_74 = cdrerror(v_73); else
    v_74 = cdr(v_73);
    v_73 = stack[-7];
    v_73 = cons(v_74, v_73);
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 3); // cancel
    v_73 = (*qfn1(fn))(fn, v_73);
    }
    env = stack[-8];
    v_73 = cons(stack[0], v_73);
    env = stack[-8];
    v_73 = ncons(v_73);
    env = stack[-8];
    stack[-2] = v_73;
    stack[-3] = v_73;
v_28:
    v_73 = stack[-4];
    if (!car_legal(v_73)) v_73 = cdrerror(v_73); else
    v_73 = cdr(v_73);
    stack[-4] = v_73;
    v_73 = stack[-4];
    if (v_73 == nil) goto v_53;
    else goto v_54;
v_53:
    v_73 = stack[-3];
    goto v_27;
v_54:
    stack[-1] = stack[-2];
    v_73 = stack[-4];
    if (!car_legal(v_73)) v_73 = carerror(v_73); else
    v_73 = car(v_73);
    v_74 = v_73;
    v_73 = v_74;
    if (!car_legal(v_73)) stack[0] = carerror(v_73); else
    stack[0] = car(v_73);
    v_73 = v_74;
    if (!car_legal(v_73)) v_74 = cdrerror(v_73); else
    v_74 = cdr(v_73);
    v_73 = stack[-7];
    v_73 = cons(v_74, v_73);
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 3); // cancel
    v_73 = (*qfn1(fn))(fn, v_73);
    }
    env = stack[-8];
    v_73 = cons(stack[0], v_73);
    env = stack[-8];
    v_73 = ncons(v_73);
    env = stack[-8];
    if (!car_legal(stack[-1])) rplacd_fails(stack[-1]);
    setcdr(stack[-1], v_73);
    v_73 = stack[-2];
    if (!car_legal(v_73)) v_73 = cdrerror(v_73); else
    v_73 = cdr(v_73);
    stack[-2] = v_73;
    goto v_28;
v_27:
    {
        LispObject v_84 = stack[-6];
        LispObject v_85 = stack[-5];
        return acons(v_84, v_85, v_73);
    }
    return onevalue(v_73);
}



// Code for aex_simplenullp

static LispObject CC_aex_simplenullp(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // aex_ex
    v_8 = (*qfn1(fn))(fn, v_8);
    }
    if (!car_legal(v_8)) v_8 = carerror(v_8); else
    v_8 = car(v_8);
    v_8 = (v_8 == nil ? lisp_true : nil);
    return onevalue(v_8);
}



// Code for ofsf_ordatp

static LispObject CC_ofsf_ordatp(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_30, v_31, v_32, v_33, v_34, v_35;
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
    v_34 = v_3;
    v_35 = v_2;
// end of prologue
    v_30 = v_35;
    if (!car_legal(v_30)) v_30 = cdrerror(v_30); else
    v_30 = cdr(v_30);
    if (!car_legal(v_30)) v_30 = carerror(v_30); else
    v_30 = car(v_30);
    v_33 = v_30;
    v_30 = v_34;
    if (!car_legal(v_30)) v_30 = cdrerror(v_30); else
    v_30 = cdr(v_30);
    if (!car_legal(v_30)) v_30 = carerror(v_30); else
    v_30 = car(v_30);
    v_32 = v_30;
    v_31 = v_33;
    v_30 = v_32;
    if (equal(v_31, v_30)) goto v_18;
    v_30 = v_33;
    v_31 = v_32;
    {   LispObject fn = basic_elt(env, 1); // ordp
    v_30 = (*qfn2(fn))(fn, v_30, v_31);
    }
    v_30 = (v_30 == nil ? lisp_true : nil);
    goto v_8;
v_18:
    v_30 = v_35;
    if (!car_legal(v_30)) v_30 = carerror(v_30); else
    v_30 = car(v_30);
    v_31 = v_34;
    if (!car_legal(v_31)) v_31 = carerror(v_31); else
    v_31 = car(v_31);
    {
        LispObject fn = basic_elt(env, 2); // ofsf_ordrelp
        return (*qfn2(fn))(fn, v_30, v_31);
    }
v_8:
    return onevalue(v_30);
}



// Code for janettreefind

static LispObject CC_janettreefind(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_96, v_97;
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
    v_96 = qvalue(basic_elt(env, 1)); // fluidbibasisjanettreerootnode
    if (v_96 == nil) goto v_6;
    else goto v_7;
v_6:
    v_96 = nil;
    goto v_5;
v_7:
    stack[-5] = nil;
    v_96 = qvalue(basic_elt(env, 1)); // fluidbibasisjanettreerootnode
    stack[-3] = v_96;
    v_97 = stack[-4];
    v_96 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_96 = Lgetv(nil, v_97, v_96);
    env = stack[-6];
    stack[-2] = v_96;
    v_96 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-1] = v_96;
v_27:
    v_97 = stack[-2];
    v_96 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if ((static_cast<std::intptr_t>(v_97) > static_cast<std::intptr_t>(v_96))) goto v_31;
    goto v_26;
v_31:
v_37:
    v_96 = stack[-3];
    if (!car_legal(v_96)) v_96 = carerror(v_96); else
    v_96 = car(v_96);
    if (!car_legal(v_96)) stack[0] = carerror(v_96); else
    stack[0] = car(v_96);
    v_97 = stack[-4];
    v_96 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // monomgetvariabledegree
    v_96 = (*qfn2(fn))(fn, v_97, v_96);
    }
    env = stack[-6];
    v_96 = static_cast<LispObject>(lessp2(stack[0], v_96));
    v_96 = v_96 ? lisp_true : nil;
    env = stack[-6];
    if (v_96 == nil) goto v_40;
    v_96 = stack[-3];
    if (!car_legal(v_96)) v_96 = cdrerror(v_96); else
    v_96 = cdr(v_96);
    if (!car_legal(v_96)) v_96 = carerror(v_96); else
    v_96 = car(v_96);
    if (v_96 == nil) goto v_40;
    goto v_41;
v_40:
    goto v_36;
v_41:
    v_96 = stack[-3];
    if (!car_legal(v_96)) v_96 = cdrerror(v_96); else
    v_96 = cdr(v_96);
    if (!car_legal(v_96)) v_96 = carerror(v_96); else
    v_96 = car(v_96);
    stack[-3] = v_96;
    goto v_37;
v_36:
    v_96 = stack[-3];
    if (!car_legal(v_96)) v_96 = carerror(v_96); else
    v_96 = car(v_96);
    if (!car_legal(v_96)) stack[0] = carerror(v_96); else
    stack[0] = car(v_96);
    v_97 = stack[-4];
    v_96 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // monomgetvariabledegree
    v_96 = (*qfn2(fn))(fn, v_97, v_96);
    }
    env = stack[-6];
    if (equal(stack[0], v_96)) goto v_62;
    v_96 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-2] = v_96;
    goto v_60;
v_62:
    v_96 = stack[-3];
    if (!car_legal(v_96)) v_96 = cdrerror(v_96); else
    v_96 = cdr(v_96);
    if (!car_legal(v_96)) v_96 = cdrerror(v_96); else
    v_96 = cdr(v_96);
    if (v_96 == nil) goto v_72;
    stack[0] = stack[-2];
    v_97 = stack[-4];
    v_96 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // monomgetvariabledegree
    v_96 = (*qfn2(fn))(fn, v_97, v_96);
    }
    env = stack[-6];
    v_96 = static_cast<LispObject>(static_cast<std::uintptr_t>(stack[0]) - static_cast<std::uintptr_t>(v_96) + TAG_FIXNUM);
    stack[-2] = v_96;
    v_96 = stack[-1];
    v_96 = static_cast<LispObject>(static_cast<std::intptr_t>(v_96) + 0x10);
    stack[-1] = v_96;
    v_96 = stack[-3];
    if (!car_legal(v_96)) v_96 = cdrerror(v_96); else
    v_96 = cdr(v_96);
    if (!car_legal(v_96)) v_96 = cdrerror(v_96); else
    v_96 = cdr(v_96);
    stack[-3] = v_96;
    goto v_60;
v_72:
    v_96 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-2] = v_96;
    v_96 = stack[-3];
    if (!car_legal(v_96)) v_96 = carerror(v_96); else
    v_96 = car(v_96);
    if (!car_legal(v_96)) v_96 = cdrerror(v_96); else
    v_96 = cdr(v_96);
    stack[-5] = v_96;
    goto v_60;
v_60:
    goto v_27;
v_26:
    v_96 = stack[-5];
    goto v_5;
    v_96 = nil;
v_5:
    return onevalue(v_96);
}



// Code for talp_simplt1

static LispObject CC_talp_simplt1(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_153, v_154;
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
    stack[0] = v_2;
// end of prologue
v_1:
    v_153 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // talp_invp
    v_153 = (*qfn1(fn))(fn, v_153);
    }
    env = stack[-6];
    if (v_153 == nil) goto v_11;
    v_153 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // talp_invarg
    v_153 = (*qfn1(fn))(fn, v_153);
    }
    env = stack[-6];
    stack[-2] = v_153;
    v_153 = stack[-2];
    if (!consp(v_153)) goto v_22;
    else goto v_23;
v_22:
    stack[-1] = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // talp_getl
    v_153 = (*qfn0(fn))(fn);
    }
    env = stack[-6];
    v_153 = Latsoc(nil, stack[-1], v_153);
    v_153 = (v_153 == nil ? lisp_true : nil);
    goto v_21;
v_23:
    v_153 = nil;
    goto v_21;
    v_153 = nil;
v_21:
    if (v_153 == nil) goto v_19;
    v_153 = stack[-4];
    if (v_153 == nil) goto v_35;
v_39:
    v_153 = stack[-4];
    if (v_153 == nil) goto v_42;
    else goto v_43;
v_42:
    goto v_38;
v_43:
    v_153 = stack[-4];
    {   LispObject fn = basic_elt(env, 4); // stack_top
    v_154 = (*qfn1(fn))(fn, v_153);
    }
    env = stack[-6];
    v_153 = stack[0];
    {   LispObject fn = basic_elt(env, 5); // talp_mkinv
    v_153 = (*qfn2(fn))(fn, v_154, v_153);
    }
    env = stack[-6];
    stack[0] = v_153;
    v_153 = stack[-4];
    {   LispObject fn = basic_elt(env, 6); // stack_pop
    v_153 = (*qfn1(fn))(fn, v_153);
    }
    env = stack[-6];
    stack[-4] = v_153;
    goto v_39;
v_38:
    goto v_33;
v_35:
v_33:
    v_153 = stack[0];
    goto v_7;
v_19:
    v_153 = stack[-2];
    {   LispObject fn = basic_elt(env, 1); // talp_invp
    v_153 = (*qfn1(fn))(fn, v_153);
    }
    env = stack[-6];
    if (v_153 == nil) goto v_54;
    stack[-1] = stack[-2];
    v_153 = stack[0];
    {   LispObject fn = basic_elt(env, 7); // talp_op
    v_154 = (*qfn1(fn))(fn, v_153);
    }
    env = stack[-6];
    v_153 = stack[-4];
    {   LispObject fn = basic_elt(env, 8); // stack_push
    v_153 = (*qfn2(fn))(fn, v_154, v_153);
    }
    env = stack[-6];
    stack[0] = stack[-1];
    stack[-4] = v_153;
    goto v_1;
v_54:
    stack[-1] = stack[-2];
    v_153 = stack[0];
    {   LispObject fn = basic_elt(env, 9); // talp_invf
    v_153 = (*qfn1(fn))(fn, v_153);
    }
    env = stack[-6];
    if (!consp(stack[-1])) goto v_64;
    stack[-1] = car(stack[-1]);
    if (stack[-1] == v_153) goto v_63;
    else goto v_64;
v_63:
    v_153 = stack[-2];
    {   LispObject fn = basic_elt(env, 10); // talp_fargl
    stack[-1] = (*qfn1(fn))(fn, v_153);
    }
    env = stack[-6];
    v_153 = stack[0];
    {   LispObject fn = basic_elt(env, 11); // talp_invn
    v_153 = (*qfn1(fn))(fn, v_153);
    }
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 12); // nth
    v_154 = (*qfn2(fn))(fn, stack[-1], v_153);
    }
    env = stack[-6];
    v_153 = stack[-4];
    stack[0] = v_154;
    stack[-4] = v_153;
    goto v_1;
v_64:
    v_154 = stack[-2];
    v_153 = stack[-4];
    stack[0] = v_154;
    stack[-4] = v_153;
    goto v_1;
    goto v_9;
v_11:
    v_153 = stack[0];
    v_153 = Lconsp(nil, v_153);
    env = stack[-6];
    if (v_153 == nil) goto v_86;
    v_153 = stack[0];
    {   LispObject fn = basic_elt(env, 13); // talp_fop
    stack[-5] = (*qfn1(fn))(fn, v_153);
    }
    env = stack[-6];
    v_153 = stack[0];
    {   LispObject fn = basic_elt(env, 10); // talp_fargl
    v_153 = (*qfn1(fn))(fn, v_153);
    }
    env = stack[-6];
    stack[-3] = v_153;
    v_153 = stack[-3];
    if (v_153 == nil) goto v_102;
    else goto v_103;
v_102:
    v_153 = nil;
    goto v_96;
v_103:
    v_153 = stack[-3];
    if (!car_legal(v_153)) v_153 = carerror(v_153); else
    v_153 = car(v_153);
    v_154 = v_153;
    v_153 = nil;
    {   LispObject fn = basic_elt(env, 0); // talp_simplt1
    v_153 = (*qfn2(fn))(fn, v_154, v_153);
    }
    env = stack[-6];
    v_153 = ncons(v_153);
    env = stack[-6];
    stack[-1] = v_153;
    stack[-2] = v_153;
v_97:
    v_153 = stack[-3];
    if (!car_legal(v_153)) v_153 = cdrerror(v_153); else
    v_153 = cdr(v_153);
    stack[-3] = v_153;
    v_153 = stack[-3];
    if (v_153 == nil) goto v_117;
    else goto v_118;
v_117:
    v_153 = stack[-2];
    goto v_96;
v_118:
    stack[0] = stack[-1];
    v_153 = stack[-3];
    if (!car_legal(v_153)) v_153 = carerror(v_153); else
    v_153 = car(v_153);
    v_154 = v_153;
    v_153 = nil;
    {   LispObject fn = basic_elt(env, 0); // talp_simplt1
    v_153 = (*qfn2(fn))(fn, v_154, v_153);
    }
    env = stack[-6];
    v_153 = ncons(v_153);
    env = stack[-6];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_153);
    v_153 = stack[-1];
    if (!car_legal(v_153)) v_153 = cdrerror(v_153); else
    v_153 = cdr(v_153);
    stack[-1] = v_153;
    goto v_97;
v_96:
    v_153 = cons(stack[-5], v_153);
    env = stack[-6];
    stack[0] = v_153;
    goto v_84;
v_86:
v_84:
    v_153 = stack[-4];
    if (v_153 == nil) goto v_135;
    v_153 = stack[-4];
    {   LispObject fn = basic_elt(env, 4); // stack_top
    v_154 = (*qfn1(fn))(fn, v_153);
    }
    env = stack[-6];
    v_153 = stack[0];
    {   LispObject fn = basic_elt(env, 5); // talp_mkinv
    stack[0] = (*qfn2(fn))(fn, v_154, v_153);
    }
    env = stack[-6];
    v_153 = stack[-4];
    {   LispObject fn = basic_elt(env, 6); // stack_pop
    v_153 = (*qfn1(fn))(fn, v_153);
    }
    env = stack[-6];
    stack[-4] = v_153;
    goto v_1;
v_135:
    v_153 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // talp_invp
    v_153 = (*qfn1(fn))(fn, v_153);
    }
    if (v_153 == nil) goto v_145;
    v_153 = stack[0];
    if (!car_legal(v_153)) v_153 = carerror(v_153); else
    v_153 = car(v_153);
    goto v_7;
v_145:
    v_153 = stack[0];
    goto v_7;
    goto v_9;
v_9:
    v_153 = nil;
v_7:
    return onevalue(v_153);
}



// Code for mri_2pasfat

static LispObject CC_mri_2pasfat(LispObject env,
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



// Code for qqe_number!-of!-tails!-in!-qterm

static LispObject CC_qqe_numberKofKtailsKinKqterm(LispObject env,
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
    stack[0] = v_27;
    goto v_6;
v_14:
    v_27 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // qqe_arg2l
    v_27 = (*qfn1(fn))(fn, v_27);
    }
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 0); // qqe_number!-of!-tails!-in!-qterm
    v_27 = (*qfn1(fn))(fn, v_27);
    }
    return add1(v_27);
    v_27 = nil;
v_5:
    return onevalue(v_27);
}



// Code for ibalp_simpatom

static LispObject CC_ibalp_simpatom(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_72, v_73;
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
    v_73 = stack[0];
    v_72 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_73 == v_72) goto v_13;
    else goto v_14;
v_13:
    v_72 = lisp_true;
    goto v_12;
v_14:
    v_73 = stack[0];
    v_72 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_72 = (v_73 == v_72 ? lisp_true : nil);
    goto v_12;
    v_72 = nil;
v_12:
    if (v_72 == nil) goto v_10;
    v_72 = stack[0];
    goto v_6;
v_10:
    v_72 = stack[0];
    if (symbolp(v_72)) goto v_26;
    else goto v_27;
v_26:
    v_72 = stack[0];
    {   LispObject fn = basic_elt(env, 6); // rl_gettype
    v_72 = (*qfn1(fn))(fn, v_72);
    }
    env = stack[-1];
    if (v_72 == nil) goto v_32;
    v_72 = stack[0];
    {   LispObject fn = basic_elt(env, 7); // reval
    v_72 = (*qfn1(fn))(fn, v_72);
    }
    env = stack[-1];
    {
        LispObject fn = basic_elt(env, 8); // ibalp_simpterm
        return (*qfn1(fn))(fn, v_72);
    }
v_32:
    v_72 = stack[0];
    v_73 = ncons(v_72);
    env = stack[-1];
    v_72 = basic_elt(env, 1); // used!*
    v_72 = Lflag(nil, v_73, v_72);
    v_72 = stack[0];
    goto v_6;
v_27:
    v_72 = stack[0];
    if (v_72 == nil) goto v_45;
    else goto v_46;
v_45:
    v_73 = basic_elt(env, 2); // "nil"
    v_72 = basic_elt(env, 3); // "Boolean term"
    {   LispObject fn = basic_elt(env, 9); // typerr
    v_72 = (*qfn2(fn))(fn, v_73, v_72);
    }
    env = stack[-1];
    goto v_44;
v_46:
v_44:
    v_72 = stack[0];
    if (is_number(v_72)) goto v_53;
    else goto v_54;
v_53:
    v_73 = basic_elt(env, 4); // "number"
    v_72 = stack[0];
    v_73 = list2(v_73, v_72);
    env = stack[-1];
    v_72 = basic_elt(env, 3); // "Boolean term"
    {   LispObject fn = basic_elt(env, 9); // typerr
    v_72 = (*qfn2(fn))(fn, v_73, v_72);
    }
    env = stack[-1];
    goto v_52;
v_54:
v_52:
    v_72 = stack[0];
    v_72 = Lstringp(nil, v_72);
    env = stack[-1];
    if (v_72 == nil) goto v_64;
    v_73 = basic_elt(env, 5); // "string"
    v_72 = stack[0];
    v_73 = list2(v_73, v_72);
    env = stack[-1];
    v_72 = basic_elt(env, 3); // "Boolean term"
    {   LispObject fn = basic_elt(env, 9); // typerr
    v_72 = (*qfn2(fn))(fn, v_73, v_72);
    }
    goto v_62;
v_64:
v_62:
    v_72 = nil;
v_6:
    return onevalue(v_72);
}



// Code for dip_moncomp

static LispObject CC_dip_moncomp(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_10, v_11, v_12;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_10 = v_4;
    v_11 = v_3;
    v_12 = v_2;
// end of prologue
    return list2star(v_11, v_12, v_10);
}



// Code for omair

static LispObject CC_omair(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    push(nil, nil);
    stack_popper stack_popper_var(3);
// end of prologue
    stack[0] = nil;
    {   LispObject fn = basic_elt(env, 3); // lex
    v_24 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 4); // omobj
    v_24 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
    stack[-1] = v_24;
    v_24 = stack[-1];
    if (!car_legal(v_24)) v_25 = carerror(v_24); else
    v_25 = car(v_24);
    v_24 = basic_elt(env, 1); // matrix
    if (v_25 == v_24) goto v_12;
    {   LispObject fn = basic_elt(env, 3); // lex
    v_24 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 5); // omobjs
    v_24 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
    stack[0] = v_24;
    v_24 = basic_elt(env, 2); // (!/ o m a)
    {   LispObject fn = basic_elt(env, 6); // checktag
    v_24 = (*qfn1(fn))(fn, v_24);
    }
    goto v_10;
v_12:
v_10:
    v_25 = stack[-1];
    v_24 = stack[0];
        return Lappend_2(nil, v_25, v_24);
    return onevalue(v_24);
}



// Code for off

static LispObject CC_off(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_22;
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
    stack[0] = v_22;
v_7:
    v_22 = stack[0];
    if (v_22 == nil) goto v_11;
    else goto v_12;
v_11:
    v_22 = nil;
    goto v_6;
v_12:
    v_22 = stack[0];
    if (!car_legal(v_22)) v_22 = carerror(v_22); else
    v_22 = car(v_22);
    {   LispObject fn = basic_elt(env, 1); // off1
    v_22 = (*qfn1(fn))(fn, v_22);
    }
    env = stack[-1];
    v_22 = stack[0];
    if (!car_legal(v_22)) v_22 = cdrerror(v_22); else
    v_22 = cdr(v_22);
    stack[0] = v_22;
    goto v_7;
v_6:
    return onevalue(v_22);
}



// Code for xord_lex

static LispObject CC_xord_lex(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_57, v_58, v_59, v_60;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_58 = v_3;
    v_59 = v_2;
// end of prologue
v_7:
    v_57 = v_59;
    if (v_57 == nil) goto v_14;
    else goto v_15;
v_14:
    v_57 = lisp_true;
    goto v_13;
v_15:
    v_57 = v_59;
    if (!car_legal(v_57)) v_60 = carerror(v_57); else
    v_60 = car(v_57);
    v_57 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_57 = (v_60 == v_57 ? lisp_true : nil);
    goto v_13;
    v_57 = nil;
v_13:
    if (v_57 == nil) goto v_11;
    v_57 = nil;
    goto v_6;
v_11:
    v_57 = v_58;
    if (v_57 == nil) goto v_29;
    else goto v_30;
v_29:
    v_57 = lisp_true;
    goto v_28;
v_30:
    v_57 = v_58;
    if (!car_legal(v_57)) v_60 = carerror(v_57); else
    v_60 = car(v_57);
    v_57 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_57 = (v_60 == v_57 ? lisp_true : nil);
    goto v_28;
    v_57 = nil;
v_28:
    if (v_57 == nil) goto v_26;
    v_57 = lisp_true;
    goto v_6;
v_26:
    v_57 = v_59;
    if (!car_legal(v_57)) v_60 = carerror(v_57); else
    v_60 = car(v_57);
    v_57 = v_58;
    if (!car_legal(v_57)) v_57 = carerror(v_57); else
    v_57 = car(v_57);
    if (v_60 == v_57) goto v_40;
    else goto v_41;
v_40:
    v_57 = v_59;
    if (!car_legal(v_57)) v_57 = cdrerror(v_57); else
    v_57 = cdr(v_57);
    v_59 = v_57;
    v_57 = v_58;
    if (!car_legal(v_57)) v_57 = cdrerror(v_57); else
    v_57 = cdr(v_57);
    v_58 = v_57;
    goto v_7;
v_41:
    v_57 = v_59;
    if (!car_legal(v_57)) v_57 = carerror(v_57); else
    v_57 = car(v_57);
    if (!car_legal(v_58)) v_58 = carerror(v_58); else
    v_58 = car(v_58);
    {
        LispObject fn = basic_elt(env, 1); // factorordp
        return (*qfn2(fn))(fn, v_57, v_58);
    }
    v_57 = nil;
v_6:
    return onevalue(v_57);
}



// Code for has_parents

static LispObject CC_has_parents(LispObject env,
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
    v_22 = v_2;
// end of prologue
    if (!car_legal(v_22)) v_22 = cdrerror(v_22); else
    v_22 = cdr(v_22);
    if (!car_legal(v_22)) v_22 = carerror(v_22); else
    v_22 = car(v_22);
    v_24 = v_22;
    v_22 = v_24;
    if (!car_legal(v_22)) v_23 = carerror(v_22); else
    v_23 = car(v_22);
    v_22 = basic_elt(env, 1); // !?
    if (v_23 == v_22) goto v_11;
    v_22 = v_24;
    if (!car_legal(v_22)) v_22 = cdrerror(v_22); else
    v_22 = cdr(v_22);
    v_23 = basic_elt(env, 1); // !?
        return Lneq_2(nil, v_22, v_23);
v_11:
    v_22 = nil;
    goto v_9;
    v_22 = nil;
v_9:
    return onevalue(v_22);
}



setup_type const u10_setup[] =
{
    {"ptoken",                  CC_ptoken,G1W0,     G2W0,     G3W0,     G4W0},
    {"formc",                   G0W3,     G1W3,     G2W3,     CC_formc, G4W3},
    {"wuorderp",                G0W2,     G1W2,     CC_wuorderp,G3W2,   G4W2},
    {"freevarinexptchk",        G0W1,     CC_freevarinexptchk,G2W1,G3W1,G4W1},
    {"talp_smwmkatl",           G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_talp_smwmkatl},
    {"chknewnam",               G0W1,     CC_chknewnam,G2W1,  G3W1,     G4W1},
    {"smtp",                    G0W2,     G1W2,     CC_smtp,  G3W2,     G4W2},
    {"take-realpart",           G0W1,     CC_takeKrealpart,G2W1,G3W1,   G4W1},
    {"assert_analyze",          CC_assert_analyze,G1W0,G2W0,  G3W0,     G4W0},
    {"lambda_46uwl1lq71ua2",    G0W2,     G1W2,     CC_lambda_46uwl1lq71ua2,G3W2,G4W2},
    {"dp_sum",                  G0W2,     G1W2,     CC_dp_sum,G3W2,     G4W2},
    {"*q2f",                    G0W1,     CC_Hq2f,  G2W1,     G3W1,     G4W1},
    {"exptf1",                  G0W2,     G1W2,     CC_exptf1,G3W2,     G4W2},
    {"portable_print",          G0W1,     CC_portable_print,G2W1,G3W1,  G4W1},
    {"polynommultiplybymonom",  G0W2,     G1W2,     CC_polynommultiplybymonom,G3W2,G4W2},
    {"wulessp*",                G0W2,     G1W2,     CC_wulesspH,G3W2,   G4W2},
    {"matrix+p",                G0W1,     CC_matrixLp,G2W1,   G3W1,     G4W1},
    {"cl_fvarl1",               G0W1,     CC_cl_fvarl1,G2W1,  G3W1,     G4W1},
    {"lastnondomain",           G0W1,     CC_lastnondomain,G2W1,G3W1,   G4W1},
    {"numeric-content",         G0W1,     CC_numericKcontent,G2W1,G3W1, G4W1},
    {"objectom",                G0W1,     CC_objectom,G2W1,   G3W1,     G4W1},
    {"initbrsea",               CC_initbrsea,G1W0,  G2W0,     G3W0,     G4W0},
    {":difference",             G0W2,     G1W2,     CC_Tdifference,G3W2,G4W2},
    {"statep*",                 G0W1,     CC_statepH,G2W1,    G3W1,     G4W1},
    {"take-impart",             G0W1,     CC_takeKimpart,G2W1,G3W1,     G4W1},
    {"errorset2",               G0W1,     CC_errorset2,G2W1,  G3W1,     G4W1},
    {"maprint",                 G0W2,     G1W2,     CC_maprint,G3W2,    G4W2},
    {"dl_get",                  G0W1,     CC_dl_get,G2W1,     G3W1,     G4W1},
    {"lalr_list_of_actions",    G0W1,     CC_lalr_list_of_actions,G2W1,G3W1,G4W1},
    {"aex_simpleratp",          G0W1,     CC_aex_simpleratp,G2W1,G3W1,  G4W1},
    {"polynomlistfinddivisor",  G0W3,     G1W3,     G2W3,     CC_polynomlistfinddivisor,G4W3},
    {"diffp1",                  G0W2,     G1W2,     CC_diffp1,G3W2,     G4W2},
    {"removeg",                 G0W2,     G1W2,     CC_removeg,G3W2,    G4W2},
    {"poly-abs",                G0W1,     CC_polyKabs,G2W1,   G3W1,     G4W1},
    {"freeofdepl",              G0W3,     G1W3,     G2W3,     CC_freeofdepl,G4W3},
    {"talp_acfrp",              G0W1,     CC_talp_acfrp,G2W1, G3W1,     G4W1},
    {"searchtm",                G0W1,     CC_searchtm,G2W1,   G3W1,     G4W1},
    {"rl_simpbop",              G0W1,     CC_rl_simpbop,G2W1, G3W1,     G4W1},
    {"vdp_zero?",               G0W1,     CC_vdp_zeroW,G2W1,  G3W1,     G4W1},
    {"spmultm2",                G0W3,     G1W3,     G2W3,     CC_spmultm2,G4W3},
    {"on",                      G0W1,     CC_on,    G2W1,     G3W1,     G4W1},
    {"covposp",                 G0W1,     CC_covposp,G2W1,    G3W1,     G4W1},
    {"contrsp",                 G0W2,     G1W2,     CC_contrsp,G3W2,    G4W2},
    {"cali_bc_fi",              G0W1,     CC_cali_bc_fi,G2W1, G3W1,     G4W1},
    {"oprin",                   G0W1,     CC_oprin, G2W1,     G3W1,     G4W1},
    {"split_ext",               G0W2,     G1W2,     CC_split_ext,G3W2,  G4W2},
    {"aex_simplenullp",         G0W1,     CC_aex_simplenullp,G2W1,G3W1, G4W1},
    {"ofsf_ordatp",             G0W2,     G1W2,     CC_ofsf_ordatp,G3W2,G4W2},
    {"janettreefind",           G0W1,     CC_janettreefind,G2W1,G3W1,   G4W1},
    {"talp_simplt1",            G0W2,     G1W2,     CC_talp_simplt1,G3W2,G4W2},
    {"mri_2pasfat",             G0W1,     CC_mri_2pasfat,G2W1,G3W1,     G4W1},
    {"qqe_number-of-tails-in-qterm",G0W1, CC_qqe_numberKofKtailsKinKqterm,G2W1,G3W1,G4W1},
    {"ibalp_simpatom",          G0W1,     CC_ibalp_simpatom,G2W1,G3W1,  G4W1},
    {"dip_moncomp",             G0W3,     G1W3,     G2W3,     CC_dip_moncomp,G4W3},
    {"omair",                   CC_omair, G1W0,     G2W0,     G3W0,     G4W0},
    {"off",                     G0W1,     CC_off,   G2W1,     G3W1,     G4W1},
    {"xord_lex",                G0W2,     G1W2,     CC_xord_lex,G3W2,   G4W2},
    {"has_parents",             G0W1,     CC_has_parents,G2W1,G3W1,     G4W1},
    {nullptr, 
        reinterpret_cast<no_args *>(
            reinterpret_cast<uintptr_t>("u10")),
        reinterpret_cast<one_arg *>(
            reinterpret_cast<uintptr_t>("87015 5957201 2180113")),
        nullptr, nullptr, nullptr}
};

// end of generated code
