
// $destdir/u04.c        Machine generated C code

// $Id$

#include "config.h"
#include "headers.h"



// Code for lex

static LispObject CC_lex(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_85, v_86;
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
// Binding safe_atts
// FLUIDBIND: reloadenv=2 litvec-offset=1 saveloc=1
{   bind_fluid_stack bind_fluid_var(-2, 1, -1);
    setvalue(basic_elt(env, 1), nil); // safe_atts
    v_85 = nil;
    setvalue(basic_elt(env, 2), v_85); // char
    v_85 = qvalue(basic_elt(env, 3)); // atts
    if (v_85 == nil) goto v_13;
    v_85 = qvalue(basic_elt(env, 3)); // atts
    setvalue(basic_elt(env, 1), v_85); // safe_atts
    goto v_11;
v_13:
v_11:
    v_85 = nil;
    setvalue(basic_elt(env, 3), v_85); // atts
    stack[0] = qvalue(basic_elt(env, 4)); // ch
    v_85 = static_cast<LispObject>(160)+TAG_FIXNUM; // 10
    v_85 = ncons(v_85);
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 9); // list2string
    v_85 = (*qfn1(fn))(fn, v_85);
    }
    env = stack[-2];
    v_85 = Lintern(nil, v_85);
    env = stack[-2];
    if (stack[0] == v_85) goto v_19;
    else goto v_20;
v_19:
    v_85 = Lreadch(nil);
    env = stack[-2];
    setvalue(basic_elt(env, 4), v_85); // ch
    goto v_18;
v_20:
v_18:
    v_86 = qvalue(basic_elt(env, 4)); // ch
    v_85 = qvalue(basic_elt(env, 5)); // !$eof!$
    if (equal(v_86, v_85)) goto v_30;
    v_86 = qvalue(basic_elt(env, 4)); // ch
    v_85 = qvalue(basic_elt(env, 6)); // space
    if (equal(v_86, v_85)) goto v_35;
    else goto v_36;
v_35:
v_41:
    v_86 = Lreadch(nil);
    env = stack[-2];
    setvalue(basic_elt(env, 4), v_86); // ch
    v_85 = qvalue(basic_elt(env, 6)); // space
    if (equal(v_86, v_85)) goto v_46;
    goto v_40;
v_46:
    goto v_41;
v_40:
    goto v_34;
v_36:
    v_86 = qvalue(basic_elt(env, 4)); // ch
    v_85 = basic_elt(env, 7); // !<
    if (v_86 == v_85) goto v_50;
    else goto v_51;
v_50:
    {   LispObject fn = basic_elt(env, 10); // get_token
    v_85 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
    setvalue(basic_elt(env, 2), v_85); // char
    goto v_34;
v_51:
    {   LispObject fn = basic_elt(env, 11); // get_content
    v_85 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
    setvalue(basic_elt(env, 2), v_85); // char
    goto v_34;
v_34:
    v_85 = qvalue(basic_elt(env, 2)); // char
    if (v_85 == nil) goto v_61;
    v_85 = qvalue(basic_elt(env, 8)); // count
    v_85 = add1(v_85);
    env = stack[-2];
    setvalue(basic_elt(env, 8), v_85); // count
    v_85 = qvalue(basic_elt(env, 2)); // char
    v_85 = Lreverse(nil, v_85);
    env = stack[-2];
    stack[0] = v_85;
    v_85 = qvalue(basic_elt(env, 2)); // char
    {   LispObject fn = basic_elt(env, 12); // notstring
    v_85 = (*qfn1(fn))(fn, v_85);
    }
    env = stack[-2];
    if (v_85 == nil) goto v_70;
    v_85 = stack[0];
    {   LispObject fn = basic_elt(env, 13); // butes
    v_85 = (*qfn1(fn))(fn, v_85);
    }
    env = stack[-2];
    setvalue(basic_elt(env, 2), v_85); // char
    v_85 = qvalue(basic_elt(env, 2)); // char
    {   LispObject fn = basic_elt(env, 14); // isvalid
    v_85 = (*qfn1(fn))(fn, v_85);
    }
    env = stack[-2];
    v_86 = qvalue(basic_elt(env, 2)); // char
    v_85 = stack[0];
    {   LispObject fn = basic_elt(env, 15); // attributes
    v_85 = (*qfn2(fn))(fn, v_86, v_85);
    }
    goto v_68;
v_70:
v_68:
    goto v_59;
v_61:
    {   LispObject fn = basic_elt(env, 0); // lex
    v_85 = (*qfn0(fn))(fn);
    }
    goto v_59;
v_59:
    goto v_28;
v_30:
v_28:
    v_85 = nil;
    ;}  // end of a binding scope
    return onevalue(v_85);
}



// Code for ps!:get!-term

static LispObject CC_psTgetKterm(LispObject env,
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    stack[-1] = v_3;
    stack[-2] = v_2;
// end of prologue
    v_83 = stack[-2];
    {   LispObject fn = basic_elt(env, 2); // ps!:order
    stack[0] = (*qfn1(fn))(fn, v_83);
    }
    env = stack[-4];
    v_83 = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // ps!:last!-term
    v_83 = (*qfn1(fn))(fn, v_83);
    }
    env = stack[-4];
    stack[-3] = stack[0];
    stack[0] = v_83;
    v_84 = stack[-1];
    v_83 = stack[-3];
    v_83 = static_cast<LispObject>(lessp2(v_84, v_83));
    v_83 = v_83 ? lisp_true : nil;
    env = stack[-4];
    if (v_83 == nil) goto v_14;
    v_84 = nil;
    v_83 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_84, v_83);
v_14:
    v_84 = stack[-1];
    v_83 = stack[0];
    v_83 = static_cast<LispObject>(greaterp2(v_84, v_83));
    v_83 = v_83 ? lisp_true : nil;
    env = stack[-4];
    if (v_83 == nil) goto v_22;
    v_83 = nil;
    goto v_12;
v_22:
    v_84 = stack[-1];
    v_83 = stack[-3];
    stack[0] = difference2(v_84, v_83);
    env = stack[-4];
    v_83 = stack[-2];
    if (!consp(v_83)) goto v_41;
    else goto v_42;
v_41:
    v_83 = lisp_true;
    goto v_40;
v_42:
    v_83 = stack[-2];
    if (!car_legal(v_83)) v_84 = carerror(v_83); else
    v_84 = car(v_83);
    v_83 = basic_elt(env, 1); // !:ps!:
    if (v_84 == v_83) goto v_50;
    v_83 = stack[-2];
    if (!car_legal(v_83)) v_83 = carerror(v_83); else
    v_83 = car(v_83);
    if (!symbolp(v_83)) v_83 = nil;
    else { v_83 = qfastgets(v_83);
           if (v_83 != nil) { v_83 = elt(v_83, 8); // dname
#ifdef RECORD_GET
             if (v_83 != SPID_NOPROP)
                record_get(elt(fastget_names, 8), 1);
             else record_get(elt(fastget_names, 8), 0),
                v_83 = nil; }
           else record_get(elt(fastget_names, 8), 0); }
#else
             if (v_83 == SPID_NOPROP) v_83 = nil; }}
#endif
    goto v_48;
v_50:
    v_83 = nil;
    goto v_48;
    v_83 = nil;
v_48:
    goto v_40;
    v_83 = nil;
v_40:
    if (v_83 == nil) goto v_38;
    v_85 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_84 = stack[-2];
    v_83 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_83 = list2star(v_85, v_84, v_83);
    env = stack[-4];
    v_83 = ncons(v_83);
    goto v_36;
v_38:
    v_84 = stack[-2];
    v_83 = static_cast<LispObject>(80)+TAG_FIXNUM; // 5
    {   LispObject fn = basic_elt(env, 4); // ps!:getv
    v_83 = (*qfn2(fn))(fn, v_84, v_83);
    }
    goto v_36;
    v_83 = nil;
v_36:
    v_83 = Lassoc(nil, stack[0], v_83);
    v_84 = v_83;
    v_83 = v_84;
    if (v_83 == nil) goto v_74;
    v_83 = v_84;
    if (!car_legal(v_83)) v_83 = cdrerror(v_83); else
    v_83 = cdr(v_83);
    goto v_72;
v_74:
    v_84 = nil;
    v_83 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_84, v_83);
    v_83 = nil;
v_72:
    goto v_12;
    v_83 = nil;
v_12:
    return onevalue(v_83);
}



// Code for !*q2a1

static LispObject CC_Hq2a1(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_16, v_17;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_16 = v_3;
    v_17 = v_2;
// end of prologue
    if (v_16 == nil) goto v_7;
    else goto v_8;
v_7:
    v_16 = v_17;
    {
        LispObject fn = basic_elt(env, 1); // mk!*sq
        return (*qfn1(fn))(fn, v_16);
    }
v_8:
    v_16 = v_17;
    {
        LispObject fn = basic_elt(env, 2); // prepsqxx
        return (*qfn1(fn))(fn, v_16);
    }
    v_16 = nil;
    return onevalue(v_16);
}



// Code for replus1

static LispObject CC_replus1(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_44, v_45, v_46;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_46 = v_2;
// end of prologue
    v_44 = v_46;
    if (v_44 == nil) goto v_6;
    else goto v_7;
v_6:
    v_44 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_5;
v_7:
    v_44 = v_46;
    if (!consp(v_44)) goto v_14;
    else goto v_15;
v_14:
    v_44 = lisp_true;
    goto v_13;
v_15:
    v_45 = v_46;
    v_44 = basic_elt(env, 1); // plus
    if (!consp(v_45)) goto v_23;
    v_45 = car(v_45);
    if (v_45 == v_44) goto v_22;
    else goto v_23;
v_22:
    v_44 = v_46;
    if (!car_legal(v_44)) v_44 = cdrerror(v_44); else
    v_44 = cdr(v_44);
    goto v_21;
v_23:
    v_44 = nil;
    goto v_21;
    v_44 = nil;
v_21:
    goto v_13;
    v_44 = nil;
v_13:
    if (v_44 == nil) goto v_11;
    v_44 = v_46;
    goto v_5;
v_11:
    v_44 = v_46;
    if (!car_legal(v_44)) v_44 = cdrerror(v_44); else
    v_44 = cdr(v_44);
    if (v_44 == nil) goto v_33;
    else goto v_34;
v_33:
    v_44 = v_46;
    if (!car_legal(v_44)) v_44 = carerror(v_44); else
    v_44 = car(v_44);
    goto v_5;
v_34:
    v_44 = basic_elt(env, 1); // plus
    v_45 = v_46;
    return cons(v_44, v_45);
    v_44 = nil;
v_5:
    return onevalue(v_44);
}



// Code for peel

static LispObject CC_peel(LispObject env,
                         LispObject v_2)
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
    v_47 = stack[0];
    if (!car_legal(v_47)) v_48 = carerror(v_47); else
    v_48 = car(v_47);
    v_47 = basic_elt(env, 1); // (liedf innerprod)
    v_47 = Lmemq(nil, v_48, v_47);
    if (v_47 == nil) goto v_7;
    v_47 = stack[0];
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    if (!car_legal(v_47)) v_47 = carerror(v_47); else
    v_47 = car(v_47);
    goto v_5;
v_7:
    v_47 = stack[0];
    if (!car_legal(v_47)) v_48 = carerror(v_47); else
    v_48 = car(v_47);
    v_47 = basic_elt(env, 2); // quotient
    if (v_48 == v_47) goto v_16;
    else goto v_17;
v_16:
    v_47 = stack[0];
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    if (!car_legal(v_47)) v_48 = carerror(v_47); else
    v_48 = car(v_47);
    v_47 = stack[0];
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    if (!car_legal(v_47)) v_47 = carerror(v_47); else
    v_47 = car(v_47);
    {   LispObject fn = basic_elt(env, 3); // worderp
    v_47 = (*qfn2(fn))(fn, v_48, v_47);
    }
    if (v_47 == nil) goto v_24;
    v_47 = stack[0];
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    if (!car_legal(v_47)) v_47 = carerror(v_47); else
    v_47 = car(v_47);
    goto v_22;
v_24:
    v_47 = stack[0];
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    if (!car_legal(v_47)) v_47 = carerror(v_47); else
    v_47 = car(v_47);
    goto v_22;
    v_47 = nil;
v_22:
    goto v_5;
v_17:
    v_47 = stack[0];
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    if (!car_legal(v_47)) v_47 = carerror(v_47); else
    v_47 = car(v_47);
    goto v_5;
    v_47 = nil;
v_5:
    return onevalue(v_47);
}



// Code for quotfm

static LispObject CC_quotfm(LispObject env,
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
// Binding !*mcd
// FLUIDBIND: reloadenv=1 litvec-offset=1 saveloc=0
{   bind_fluid_stack bind_fluid_var(-1, 1, 0);
    setvalue(basic_elt(env, 1), nil); // !*mcd
    v_14 = lisp_true;
    setvalue(basic_elt(env, 1), v_14); // !*mcd
    v_14 = v_16;
    {   LispObject fn = basic_elt(env, 2); // quotf
    v_14 = (*qfn2(fn))(fn, v_14, v_15);
    }
    ;}  // end of a binding scope
    return onevalue(v_14);
}



// Code for idlistp

static LispObject CC_idlistp(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_32, v_33;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_32 = v_2;
// end of prologue
v_1:
    v_33 = v_32;
    if (v_33 == nil) goto v_6;
    else goto v_7;
v_6:
    v_32 = lisp_true;
    goto v_5;
v_7:
    v_33 = v_32;
    if (!consp(v_33)) goto v_15;
    v_33 = v_32;
    if (!car_legal(v_33)) v_33 = carerror(v_33); else
    v_33 = car(v_33);
    if (symbolp(v_33)) goto v_20;
    v_32 = nil;
    goto v_18;
v_20:
    if (!car_legal(v_32)) v_32 = cdrerror(v_32); else
    v_32 = cdr(v_32);
    goto v_1;
    v_32 = nil;
v_18:
    goto v_13;
v_15:
    v_32 = nil;
    goto v_13;
    v_32 = nil;
v_13:
    goto v_5;
    v_32 = nil;
v_5:
    return onevalue(v_32);
}



// Code for formlis

static LispObject CC_formlis(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
v_11:
    v_29 = stack[-2];
    if (v_29 == nil) goto v_14;
    else goto v_15;
v_14:
    goto v_10;
v_15:
    v_29 = stack[-2];
    if (!car_legal(v_29)) v_31 = carerror(v_29); else
    v_31 = car(v_29);
    v_30 = stack[-1];
    v_29 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // form1
    v_30 = (*qfn3(fn))(fn, v_31, v_30, v_29);
    }
    env = stack[-4];
    v_29 = stack[-3];
    v_29 = cons(v_30, v_29);
    env = stack[-4];
    stack[-3] = v_29;
    v_29 = stack[-2];
    if (!car_legal(v_29)) v_29 = cdrerror(v_29); else
    v_29 = cdr(v_29);
    stack[-2] = v_29;
    goto v_11;
v_10:
    v_29 = stack[-3];
    {
        LispObject fn = basic_elt(env, 2); // reversip!*
        return (*qfn1(fn))(fn, v_29);
    }
    return onevalue(v_29);
}



// Code for bas_rep

static LispObject CC_bas_rep(LispObject env,
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



// Code for pv_sort2

static LispObject CC_pv_sort2(LispObject env,
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
    stack[0] = v_3;
    v_9 = v_2;
// end of prologue
    v_10 = v_9;
    v_9 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // pv_sort2a
    v_9 = (*qfn2(fn))(fn, v_10, v_9);
    }
    v_9 = stack[0];
    return onevalue(v_9);
}



// Code for ofsf_posdefp

static LispObject CC_ofsf_posdefp(LispObject env,
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
    v_15 = qvalue(basic_elt(env, 1)); // !*rlpos
    if (v_15 == nil) goto v_7;
    v_15 = v_16;
    {
        LispObject fn = basic_elt(env, 2); // ofsf_posdefp!-pos
        return (*qfn1(fn))(fn, v_15);
    }
v_7:
    v_15 = v_16;
    {
        LispObject fn = basic_elt(env, 3); // sfto_tsqsumf
        return (*qfn1(fn))(fn, v_15);
    }
    v_15 = nil;
    return onevalue(v_15);
}



// Code for quotf!-fail

static LispObject CC_quotfKfail(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_62 = stack[-2];
    if (v_62 == nil) goto v_7;
    else goto v_8;
v_7:
    v_62 = nil;
    goto v_6;
v_8:
    v_63 = stack[-2];
    v_62 = stack[-1];
    {   LispObject fn = basic_elt(env, 5); // quotf
    v_62 = (*qfn2(fn))(fn, v_63, v_62);
    }
    env = stack[-4];
    v_63 = v_62;
    v_62 = v_63;
    if (v_62 == nil) goto v_25;
    else goto v_26;
v_25:
    v_62 = qvalue(basic_elt(env, 1)); // !*rounded
    if (v_62 == nil) goto v_30;
    else goto v_31;
v_30:
    v_62 = nil;
    goto v_29;
v_31:
    v_62 = qvalue(basic_elt(env, 2)); // !*roundall
    goto v_29;
    v_62 = nil;
v_29:
    goto v_24;
v_26:
    v_62 = nil;
    goto v_24;
    v_62 = nil;
v_24:
    if (v_62 == nil) goto v_22;
    v_62 = nil;
// Binding !*roundall
// FLUIDBIND: reloadenv=4 litvec-offset=2 saveloc=0
{   bind_fluid_stack bind_fluid_var(-4, 2, 0);
    setvalue(basic_elt(env, 2), v_62); // !*roundall
    v_63 = stack[-2];
    v_62 = stack[-1];
    {   LispObject fn = basic_elt(env, 5); // quotf
    v_62 = (*qfn2(fn))(fn, v_63, v_62);
    }
    env = stack[-4];
    v_63 = v_62;
    ;}  // end of a binding scope
    goto v_20;
v_22:
v_20:
    v_62 = v_63;
    if (v_62 == nil) goto v_49;
    else goto v_50;
v_49:
    stack[-3] = basic_elt(env, 3); // poly
    stack[0] = static_cast<LispObject>(1584)+TAG_FIXNUM; // 99
    v_64 = basic_elt(env, 4); // "UNEXPECTED DIVISION FAILURE"
    v_63 = stack[-2];
    v_62 = stack[-1];
    v_62 = list3(v_64, v_63, v_62);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 6); // rerror
    v_62 = (*qfn3(fn))(fn, stack[-3], stack[0], v_62);
    }
    goto v_48;
v_50:
    v_62 = v_63;
    goto v_15;
v_48:
    v_62 = nil;
v_15:
    goto v_6;
    v_62 = nil;
v_6:
    return onevalue(v_62);
}



// Code for free!-powerp

static LispObject CC_freeKpowerp(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_44;
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
    if (v_44 == nil) goto v_6;
    else goto v_7;
v_6:
    v_44 = stack[0];
    if (!car_legal(v_44)) v_44 = carerror(v_44); else
    v_44 = car(v_44);
    if (!car_legal(v_44)) v_44 = carerror(v_44); else
    v_44 = car(v_44);
    if (!car_legal(v_44)) v_44 = cdrerror(v_44); else
    v_44 = cdr(v_44);
    v_44 = integerp(v_44);
    if (v_44 == nil) goto v_21;
    else goto v_22;
v_21:
    v_44 = lisp_true;
    goto v_20;
v_22:
    v_44 = stack[0];
    if (!car_legal(v_44)) v_44 = carerror(v_44); else
    v_44 = car(v_44);
    if (!car_legal(v_44)) v_44 = cdrerror(v_44); else
    v_44 = cdr(v_44);
    {   LispObject fn = basic_elt(env, 0); // free!-powerp
    v_44 = (*qfn1(fn))(fn, v_44);
    }
    env = stack[-1];
    if (v_44 == nil) goto v_33;
    else goto v_32;
v_33:
    v_44 = stack[0];
    if (!car_legal(v_44)) v_44 = cdrerror(v_44); else
    v_44 = cdr(v_44);
    stack[0] = v_44;
    goto v_1;
v_32:
    goto v_20;
    v_44 = nil;
v_20:
    goto v_5;
v_7:
    v_44 = nil;
    goto v_5;
    v_44 = nil;
v_5:
    return onevalue(v_44);
}



// Code for invsq

static LispObject CC_invsq(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_27, v_28, v_29;
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
    v_27 = stack[0];
    if (!car_legal(v_27)) v_27 = carerror(v_27); else
    v_27 = car(v_27);
    if (v_27 == nil) goto v_8;
    else goto v_9;
v_8:
    v_29 = basic_elt(env, 1); // poly
    v_28 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_27 = basic_elt(env, 2); // "Zero divisor"
    {   LispObject fn = basic_elt(env, 4); // rerror
    v_27 = (*qfn3(fn))(fn, v_29, v_28, v_27);
    }
    env = stack[-1];
    goto v_7;
v_9:
v_7:
    v_27 = stack[0];
    {   LispObject fn = basic_elt(env, 5); // revpr
    v_27 = (*qfn1(fn))(fn, v_27);
    }
    env = stack[-1];
    stack[0] = v_27;
    v_27 = qvalue(basic_elt(env, 3)); // !*rationalize
    if (v_27 == nil) goto v_21;
    v_27 = stack[0];
    {   LispObject fn = basic_elt(env, 6); // gcdchk
    v_27 = (*qfn1(fn))(fn, v_27);
    }
    env = stack[-1];
    stack[0] = v_27;
    goto v_19;
v_21:
v_19:
    v_27 = stack[0];
    {
        LispObject fn = basic_elt(env, 7); // canonsq
        return (*qfn1(fn))(fn, v_27);
    }
    return onevalue(v_27);
}



// Code for kernord

static LispObject CC_kernord(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    v_15 = v_3;
    stack[0] = v_2;
// end of prologue
    v_16 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // kernord!-split
    v_15 = (*qfn2(fn))(fn, v_16, v_15);
    }
    env = stack[-2];
    stack[0] = v_15;
    v_15 = stack[0];
    if (!car_legal(v_15)) v_15 = carerror(v_15); else
    v_15 = car(v_15);
    {   LispObject fn = basic_elt(env, 2); // kernord!-sort
    stack[-1] = (*qfn1(fn))(fn, v_15);
    }
    env = stack[-2];
    v_15 = stack[0];
    if (!car_legal(v_15)) v_15 = cdrerror(v_15); else
    v_15 = cdr(v_15);
    {   LispObject fn = basic_elt(env, 2); // kernord!-sort
    v_15 = (*qfn1(fn))(fn, v_15);
    }
    {
        LispObject v_19 = stack[-1];
        return Lappend_2(nil, v_19, v_15);
    }
}



// Code for negf

static LispObject CC_negf(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_65, v_66;
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
    v_65 = stack[-1];
    if (v_65 == nil) goto v_10;
    else goto v_11;
v_10:
    v_65 = stack[-2];
    {
        LispObject fn = basic_elt(env, 2); // nreverse
        return (*qfn1(fn))(fn, v_65);
    }
v_11:
    v_65 = stack[-1];
    if (!consp(v_65)) goto v_19;
    else goto v_20;
v_19:
    v_65 = lisp_true;
    goto v_18;
v_20:
    v_65 = stack[-1];
    if (!car_legal(v_65)) v_65 = carerror(v_65); else
    v_65 = car(v_65);
    v_65 = (consp(v_65) ? nil : lisp_true);
    goto v_18;
    v_65 = nil;
v_18:
    if (v_65 == nil) goto v_16;
    stack[0] = stack[-2];
    v_65 = stack[-1];
    if (!consp(v_65)) goto v_37;
    else goto v_38;
v_37:
    v_65 = qvalue(basic_elt(env, 1)); // dmode!*
    if (!symbolp(v_65)) v_65 = nil;
    else { v_65 = qfastgets(v_65);
           if (v_65 != nil) { v_65 = elt(v_65, 5); // convert
#ifdef RECORD_GET
             if (v_65 == SPID_NOPROP)
                record_get(elt(fastget_names, 5), 0),
                v_65 = nil;
             else record_get(elt(fastget_names, 5), 1),
                v_65 = lisp_true; }
           else record_get(elt(fastget_names, 5), 0); }
#else
             if (v_65 == SPID_NOPROP) v_65 = nil; else v_65 = lisp_true; }}
#endif
    goto v_36;
v_38:
    v_65 = nil;
    goto v_36;
    v_65 = nil;
v_36:
    if (v_65 == nil) goto v_34;
    v_65 = qvalue(basic_elt(env, 1)); // dmode!*
    if (!symbolp(v_65)) v_66 = nil;
    else { v_66 = qfastgets(v_65);
           if (v_66 != nil) { v_66 = elt(v_66, 34); // i2d
#ifdef RECORD_GET
             if (v_66 != SPID_NOPROP)
                record_get(elt(fastget_names, 34), 1);
             else record_get(elt(fastget_names, 34), 0),
                v_66 = nil; }
           else record_get(elt(fastget_names, 34), 0); }
#else
             if (v_66 == SPID_NOPROP) v_66 = nil; }}
#endif
    v_65 = stack[-1];
    v_65 = Lapply1(nil, v_66, v_65);
    env = stack[-3];
    goto v_32;
v_34:
    v_65 = stack[-1];
    goto v_32;
    v_65 = nil;
v_32:
    {   LispObject fn = basic_elt(env, 3); // !:minus
    v_65 = (*qfn1(fn))(fn, v_65);
    }
    env = stack[-3];
    {
        LispObject v_70 = stack[0];
        LispObject fn = basic_elt(env, 2); // nreverse
        return (*qfn2(fn))(fn, v_70, v_65);
    }
v_16:
    v_65 = stack[-1];
    if (!car_legal(v_65)) v_65 = carerror(v_65); else
    v_65 = car(v_65);
    if (!car_legal(v_65)) stack[0] = carerror(v_65); else
    stack[0] = car(v_65);
    v_65 = stack[-1];
    if (!car_legal(v_65)) v_65 = carerror(v_65); else
    v_65 = car(v_65);
    if (!car_legal(v_65)) v_65 = cdrerror(v_65); else
    v_65 = cdr(v_65);
    {   LispObject fn = basic_elt(env, 0); // negf
    v_66 = (*qfn1(fn))(fn, v_65);
    }
    env = stack[-3];
    v_65 = stack[-2];
    v_65 = acons(stack[0], v_66, v_65);
    env = stack[-3];
    stack[-2] = v_65;
    v_65 = stack[-1];
    if (!car_legal(v_65)) v_65 = cdrerror(v_65); else
    v_65 = cdr(v_65);
    stack[-1] = v_65;
    goto v_7;
    v_65 = nil;
    return onevalue(v_65);
}



// Code for mkwedge

static LispObject CC_mkwedge(LispObject env,
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
    v_9 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_9 = list2star(v_11, v_10, v_9);
    return ncons(v_9);
}



// Code for scprint

static LispObject CC_scprint(LispObject env,
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    stack[-2] = v_3;
    v_63 = v_2;
// end of prologue
    v_62 = qvalue(basic_elt(env, 1)); // !*utf8
    if (v_62 == nil) goto v_11;
    v_62 = stack[-2];
    {
        LispObject fn = basic_elt(env, 3); // utf8_scprint
        return (*qfn2(fn))(fn, v_63, v_62);
    }
v_11:
    v_62 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    setvalue(basic_elt(env, 2), v_62); // posn!*
    v_62 = v_63;
    stack[-1] = v_62;
v_20:
    v_62 = stack[-1];
    if (v_62 == nil) goto v_24;
    else goto v_25;
v_24:
    goto v_19;
v_25:
    v_62 = stack[-1];
    if (!car_legal(v_62)) v_62 = carerror(v_62); else
    v_62 = car(v_62);
    stack[0] = v_62;
    v_62 = stack[0];
    if (!car_legal(v_62)) v_62 = carerror(v_62); else
    v_62 = car(v_62);
    if (!car_legal(v_62)) v_63 = cdrerror(v_62); else
    v_63 = cdr(v_62);
    v_62 = stack[-2];
    if (equal(v_63, v_62)) goto v_33;
    else goto v_34;
v_33:
    v_62 = stack[0];
    if (!car_legal(v_62)) v_62 = carerror(v_62); else
    v_62 = car(v_62);
    if (!car_legal(v_62)) v_62 = carerror(v_62); else
    v_62 = car(v_62);
    if (!car_legal(v_62)) v_63 = carerror(v_62); else
    v_63 = car(v_62);
    v_62 = qvalue(basic_elt(env, 2)); // posn!*
    v_63 = difference2(v_63, v_62);
    env = stack[-4];
    stack[-3] = v_63;
    v_62 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_62 = static_cast<LispObject>(lessp2(v_63, v_62));
    v_62 = v_62 ? lisp_true : nil;
    env = stack[-4];
    if (v_62 == nil) goto v_41;
    else goto v_42;
v_41:
    v_62 = stack[-3];
    v_62 = Lxtab(nil, v_62);
    env = stack[-4];
    goto v_40;
v_42:
v_40:
    v_62 = stack[0];
    if (!car_legal(v_62)) v_62 = cdrerror(v_62); else
    v_62 = cdr(v_62);
    v_62 = Lprinc(nil, v_62);
    env = stack[-4];
    v_62 = stack[0];
    if (!car_legal(v_62)) v_62 = carerror(v_62); else
    v_62 = car(v_62);
    if (!car_legal(v_62)) v_62 = carerror(v_62); else
    v_62 = car(v_62);
    if (!car_legal(v_62)) v_62 = cdrerror(v_62); else
    v_62 = cdr(v_62);
    setvalue(basic_elt(env, 2), v_62); // posn!*
    goto v_32;
v_34:
v_32:
    v_62 = stack[-1];
    if (!car_legal(v_62)) v_62 = cdrerror(v_62); else
    v_62 = cdr(v_62);
    stack[-1] = v_62;
    goto v_20;
v_19:
    v_62 = nil;
    return onevalue(v_62);
}



// Code for qassoc

static LispObject CC_qassoc(LispObject env,
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
    if (!car_legal(v_26)) v_26 = carerror(v_26); else
    v_26 = car(v_26);
    if (v_29 == v_26) goto v_14;
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



// Code for nonzero!-length

static LispObject CC_nonzeroKlength(LispObject env,
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
v_6:
    v_26 = v_27;
    if (v_26 == nil) goto v_9;
    else goto v_10;
v_9:
    v_26 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_5;
v_10:
    v_26 = v_27;
    if (!car_legal(v_26)) v_28 = carerror(v_26); else
    v_28 = car(v_26);
    v_26 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_28 == v_26) goto v_13;
    else goto v_14;
v_13:
    v_26 = v_27;
    if (!car_legal(v_26)) v_26 = cdrerror(v_26); else
    v_26 = cdr(v_26);
    v_27 = v_26;
    goto v_6;
v_14:
    v_26 = v_27;
    if (!car_legal(v_26)) v_26 = cdrerror(v_26); else
    v_26 = cdr(v_26);
    {   LispObject fn = basic_elt(env, 0); // nonzero!-length
    v_26 = (*qfn1(fn))(fn, v_26);
    }
    return add1(v_26);
    v_26 = nil;
v_5:
    return onevalue(v_26);
}



// Code for mo_ecart

static LispObject CC_mo_ecart(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_35 = stack[0];
    if (!car_legal(v_35)) v_35 = carerror(v_35); else
    v_35 = car(v_35);
    if (v_35 == nil) goto v_6;
    else goto v_7;
v_6:
    v_35 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_5;
v_7:
    v_35 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // mo_comp
    v_36 = (*qfn1(fn))(fn, v_35);
    }
    env = stack[-1];
    v_35 = qvalue(basic_elt(env, 1)); // cali!=degrees
    v_35 = Latsoc(nil, v_36, v_35);
    v_36 = v_35;
    v_35 = v_36;
    if (v_35 == nil) goto v_22;
    v_35 = v_36;
    if (!car_legal(v_35)) v_36 = cdrerror(v_35); else
    v_36 = cdr(v_35);
    v_35 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // mo_sum
    v_35 = (*qfn2(fn))(fn, v_36, v_35);
    }
    env = stack[-1];
    goto v_20;
v_22:
    v_35 = stack[0];
    goto v_20;
    v_35 = nil;
v_20:
    if (!car_legal(v_35)) v_35 = carerror(v_35); else
    v_35 = car(v_35);
    if (!car_legal(v_35)) stack[0] = cdrerror(v_35); else
    stack[0] = cdr(v_35);
    v_35 = qvalue(basic_elt(env, 2)); // cali!=basering
    {   LispObject fn = basic_elt(env, 5); // ring_ecart
    v_35 = (*qfn1(fn))(fn, v_35);
    }
    env = stack[-1];
    {
        LispObject v_38 = stack[0];
        LispObject fn = basic_elt(env, 6); // mo!=sprod
        return (*qfn2(fn))(fn, v_38, v_35);
    }
    v_35 = nil;
v_5:
    return onevalue(v_35);
}



// Code for add_prin_char

static LispObject CC_add_prin_char(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_56, v_57, v_58;
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
    v_56 = qvalue(basic_elt(env, 1)); // !*nat
    if (v_56 == nil) goto v_7;
    else goto v_8;
v_7:
    v_56 = stack[-1];
    v_56 = Lstringp(nil, v_56);
    env = stack[-2];
    if (v_56 == nil) goto v_14;
    else goto v_12;
v_14:
    v_56 = stack[-1];
    if (!symbolp(v_56)) v_56 = nil;
    else { v_56 = qfastgets(v_56);
           if (v_56 != nil) { v_56 = elt(v_56, 11); // switch!*
#ifdef RECORD_GET
             if (v_56 != SPID_NOPROP)
                record_get(elt(fastget_names, 11), 1);
             else record_get(elt(fastget_names, 11), 0),
                v_56 = nil; }
           else record_get(elt(fastget_names, 11), 0); }
#else
             if (v_56 == SPID_NOPROP) v_56 = nil; }}
#endif
    if (v_56 == nil) goto v_18;
    else goto v_12;
v_18:
    v_56 = stack[-1];
    v_56 = Ldigitp(nil, v_56);
    env = stack[-2];
    if (v_56 == nil) goto v_22;
    else goto v_12;
v_22:
    v_56 = stack[-1];
    v_56 = Lexplodec(nil, v_56);
    env = stack[-2];
    if (!car_legal(v_56)) v_56 = carerror(v_56); else
    v_56 = car(v_56);
    if (!symbolp(v_56)) v_56 = nil;
    else { v_56 = qfastgets(v_56);
           if (v_56 != nil) { v_56 = elt(v_56, 11); // switch!*
#ifdef RECORD_GET
             if (v_56 != SPID_NOPROP)
                record_get(elt(fastget_names, 11), 1);
             else record_get(elt(fastget_names, 11), 0),
                v_56 = nil; }
           else record_get(elt(fastget_names, 11), 0); }
#else
             if (v_56 == SPID_NOPROP) v_56 = nil; }}
#endif
    if (v_56 == nil) goto v_26;
    else goto v_12;
v_26:
    v_56 = qvalue(basic_elt(env, 2)); // !*unicode_in_off_nat
    if (v_56 == nil) goto v_31;
    v_56 = stack[-1];
    if (symbolp(v_56)) goto v_35;
    else goto v_31;
v_35:
    v_56 = stack[-1];
    v_56 = Lalpha_char_p(nil, v_56);
    if (v_56 == nil) goto v_37;
    else goto v_31;
v_37:
    goto v_12;
v_31:
    goto v_13;
v_12:
    v_56 = stack[-1];
        return Lprinc(nil, v_56);
v_13:
    v_56 = stack[-1];
        return Lprin(nil, v_56);
    v_56 = nil;
    goto v_6;
v_8:
    v_58 = qvalue(basic_elt(env, 3)); // posn!*
    v_57 = stack[0];
    v_56 = qvalue(basic_elt(env, 4)); // ycoord!*
    v_58 = acons(v_58, v_57, v_56);
    env = stack[-2];
    v_57 = stack[-1];
    v_56 = qvalue(basic_elt(env, 5)); // pline!*
    v_56 = acons(v_58, v_57, v_56);
    env = stack[-2];
    setvalue(basic_elt(env, 5), v_56); // pline!*
    v_56 = stack[0];
    setvalue(basic_elt(env, 3), v_56); // posn!*
    goto v_6;
    v_56 = nil;
v_6:
    return onevalue(v_56);
}



// Code for pv_sort

static LispObject CC_pv_sort(LispObject env,
                         LispObject v_2)
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
    v_19 = v_2;
// end of prologue
    v_18 = v_19;
    if (v_18 == nil) goto v_6;
    else goto v_7;
v_6:
    v_18 = nil;
    goto v_5;
v_7:
    v_18 = v_19;
    if (!car_legal(v_18)) stack[0] = cdrerror(v_18); else
    stack[0] = cdr(v_18);
    v_18 = v_19;
    if (!car_legal(v_18)) v_18 = carerror(v_18); else
    v_18 = car(v_18);
    v_18 = ncons(v_18);
    env = stack[-1];
    {
        LispObject v_21 = stack[0];
        LispObject fn = basic_elt(env, 1); // pv_sort1
        return (*qfn2(fn))(fn, v_21, v_18);
    }
    v_18 = nil;
v_5:
    return onevalue(v_18);
}



// Code for general!-modular!-number

static LispObject CC_generalKmodularKnumber(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_21 = stack[0];
    v_20 = qvalue(basic_elt(env, 1)); // current!-modulus
    v_20 = Cremainder(v_21, v_20);
    env = stack[-1];
    stack[0] = v_20;
    v_21 = stack[0];
    v_20 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_20 = static_cast<LispObject>(lessp2(v_21, v_20));
    v_20 = v_20 ? lisp_true : nil;
    env = stack[-1];
    if (v_20 == nil) goto v_12;
    v_21 = stack[0];
    v_20 = qvalue(basic_elt(env, 1)); // current!-modulus
    v_20 = plus2(v_21, v_20);
    stack[0] = v_20;
    goto v_10;
v_12:
v_10:
    v_20 = stack[0];
    return onevalue(v_20);
}



// Code for bfzerop!:

static LispObject CC_bfzeropT(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_9, v_10;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_9 = v_2;
// end of prologue
    if (!car_legal(v_9)) v_9 = cdrerror(v_9); else
    v_9 = cdr(v_9);
    if (!car_legal(v_9)) v_10 = carerror(v_9); else
    v_10 = car(v_9);
    v_9 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_9 = (v_10 == v_9 ? lisp_true : nil);
    return onevalue(v_9);
}



// Code for flatten!-sorted!-tree

static LispObject CC_flattenKsortedKtree(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    v_29 = v_3;
    v_30 = v_2;
// end of prologue
v_8:
    v_31 = v_30;
    if (v_31 == nil) goto v_11;
    else goto v_12;
v_11:
    goto v_7;
v_12:
    v_31 = v_30;
    if (!car_legal(v_31)) v_31 = carerror(v_31); else
    v_31 = car(v_31);
    stack[-1] = v_31;
    v_31 = v_30;
    if (!car_legal(v_31)) v_31 = cdrerror(v_31); else
    v_31 = cdr(v_31);
    if (!car_legal(v_31)) stack[0] = carerror(v_31); else
    stack[0] = car(v_31);
    if (!car_legal(v_30)) v_30 = cdrerror(v_30); else
    v_30 = cdr(v_30);
    if (!car_legal(v_30)) v_30 = cdrerror(v_30); else
    v_30 = cdr(v_30);
    {   LispObject fn = basic_elt(env, 0); // flatten!-sorted!-tree
    v_29 = (*qfn2(fn))(fn, v_30, v_29);
    }
    env = stack[-2];
    v_29 = cons(stack[0], v_29);
    env = stack[-2];
    v_30 = stack[-1];
    goto v_8;
    v_29 = nil;
v_7:
    return onevalue(v_29);
}



// Code for ordopcar

static LispObject CC_ordopcar(LispObject env,
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
    {
        LispObject fn = basic_elt(env, 1); // ordop
        return (*qfn2(fn))(fn, v_11, v_10);
    }
}



// Code for checkargcount

static LispObject CC_checkargcount(LispObject env,
                         LispObject v_3, LispObject v_4)
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
        push(v_3,v_4);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_4,v_3);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    v_48 = v_4;
    v_46 = v_3;
// end of prologue
// Binding name
// FLUIDBIND: reloadenv=4 litvec-offset=1 saveloc=3
{   bind_fluid_stack bind_fluid_var(-4, 1, -3);
    setvalue(basic_elt(env, 1), v_46); // name
    v_47 = qvalue(basic_elt(env, 1)); // name
    v_46 = basic_elt(env, 2); // naryargs
    v_46 = Lflagp(nil, v_47, v_46);
    env = stack[-4];
    if (v_46 == nil) goto v_17;
    v_46 = nil;
    goto v_13;
v_17:
    v_46 = qvalue(basic_elt(env, 1)); // name
    if (!symbolp(v_46)) v_46 = nil;
    else { v_46 = qfastgets(v_46);
           if (v_46 != nil) { v_46 = elt(v_46, 42); // number!-of!-args
#ifdef RECORD_GET
             if (v_46 != SPID_NOPROP)
                record_get(elt(fastget_names, 42), 1);
             else record_get(elt(fastget_names, 42), 0),
                v_46 = nil; }
           else record_get(elt(fastget_names, 42), 0); }
#else
             if (v_46 == SPID_NOPROP) v_46 = nil; }}
#endif
    v_49 = v_46;
    v_46 = v_49;
    if (v_46 == nil) goto v_26;
    else goto v_27;
v_26:
    v_46 = qvalue(basic_elt(env, 1)); // name
    v_47 = v_48;
    {   LispObject fn = basic_elt(env, 4); // hasarg
    v_46 = (*qfn2(fn))(fn, v_46, v_47);
    }
    goto v_13;
v_27:
    v_47 = v_49;
    v_46 = v_48;
    if (equal(v_47, v_46)) goto v_35;
    stack[-2] = qvalue(basic_elt(env, 1)); // name
    stack[-1] = v_49;
    stack[0] = v_48;
    v_46 = qvalue(basic_elt(env, 3)); // curfun!*
    v_46 = ncons(v_46);
    env = stack[-4];
    v_46 = ncons(v_46);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 5); // instdof
    v_46 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_46);
    }
    goto v_33;
v_35:
v_33:
    v_46 = nil;
v_13:
    ;}  // end of a binding scope
    return onevalue(v_46);
}



// Code for treesizep1

static LispObject CC_treesizep1(LispObject env,
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
    if (!consp(v_28)) goto v_10;
    else goto v_11;
v_10:
    v_28 = stack[0];
    return sub1(v_28);
v_11:
    v_28 = stack[-1];
    if (!car_legal(v_28)) v_29 = carerror(v_28); else
    v_29 = car(v_28);
    v_28 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // treesizep1
    v_29 = (*qfn2(fn))(fn, v_29, v_28);
    }
    env = stack[-2];
    stack[0] = v_29;
    v_28 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_28 = static_cast<LispObject>(greaterp2(v_29, v_28));
    v_28 = v_28 ? lisp_true : nil;
    env = stack[-2];
    if (v_28 == nil) goto v_16;
    v_28 = stack[-1];
    if (!car_legal(v_28)) v_28 = cdrerror(v_28); else
    v_28 = cdr(v_28);
    stack[-1] = v_28;
    goto v_7;
v_16:
    v_28 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_6;
    v_28 = nil;
v_6:
    return onevalue(v_28);
}



// Code for listeval

static LispObject CC_listeval(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_85, v_86;
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
    stack[-1] = v_3;
    stack[0] = v_2;
// end of prologue
    v_85 = qvalue(basic_elt(env, 1)); // simpcount!*
    v_86 = add1(v_85);
    env = stack[-5];
    setvalue(basic_elt(env, 1), v_86); // simpcount!*
    v_85 = qvalue(basic_elt(env, 2)); // simplimit!*
    v_85 = static_cast<LispObject>(greaterp2(v_86, v_85));
    v_85 = v_85 ? lisp_true : nil;
    env = stack[-5];
    if (v_85 == nil) goto v_8;
    v_85 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    setvalue(basic_elt(env, 1), v_85); // simpcount!*
    v_85 = basic_elt(env, 3); // "Simplification recursion too deep"
    {   LispObject fn = basic_elt(env, 4); // rederr
    v_85 = (*qfn1(fn))(fn, v_85);
    }
    env = stack[-5];
    goto v_6;
v_8:
v_6:
    v_85 = stack[0];
    if (!consp(v_85)) goto v_18;
    else goto v_19;
v_18:
    v_85 = stack[0];
    if (!symbolp(v_85)) v_85 = nil;
    else { v_85 = qfastgets(v_85);
           if (v_85 != nil) { v_85 = elt(v_85, 17); // share
#ifdef RECORD_GET
             if (v_85 == SPID_NOPROP)
                record_get(elt(fastget_names, 17), 0),
                v_85 = nil;
             else record_get(elt(fastget_names, 17), 1),
                v_85 = lisp_true; }
           else record_get(elt(fastget_names, 17), 0); }
#else
             if (v_85 == SPID_NOPROP) v_85 = nil; else v_85 = lisp_true; }}
#endif
    if (v_85 == nil) goto v_25;
    v_85 = stack[0];
    {   LispObject fn = basic_elt(env, 5); // eval
    v_85 = (*qfn1(fn))(fn, v_85);
    }
    env = stack[-5];
    v_86 = v_85;
    goto v_23;
v_25:
    v_85 = stack[0];
    if (!symbolp(v_85)) v_85 = nil;
    else { v_85 = qfastgets(v_85);
           if (v_85 != nil) { v_85 = elt(v_85, 4); // avalue
#ifdef RECORD_GET
             if (v_85 != SPID_NOPROP)
                record_get(elt(fastget_names, 4), 1);
             else record_get(elt(fastget_names, 4), 0),
                v_85 = nil; }
           else record_get(elt(fastget_names, 4), 0); }
#else
             if (v_85 == SPID_NOPROP) v_85 = nil; }}
#endif
    if (!car_legal(v_85)) v_85 = cdrerror(v_85); else
    v_85 = cdr(v_85);
    if (!car_legal(v_85)) v_85 = carerror(v_85); else
    v_85 = car(v_85);
    v_86 = v_85;
    goto v_23;
    v_86 = nil;
v_23:
    v_85 = stack[-1];
    {   LispObject fn = basic_elt(env, 0); // listeval
    v_85 = (*qfn2(fn))(fn, v_86, v_85);
    }
    env = stack[-5];
    goto v_17;
v_19:
    v_85 = stack[0];
    if (!car_legal(v_85)) stack[-4] = carerror(v_85); else
    stack[-4] = car(v_85);
    v_85 = stack[0];
    if (!car_legal(v_85)) v_85 = cdrerror(v_85); else
    v_85 = cdr(v_85);
    stack[-3] = v_85;
    v_85 = stack[-3];
    if (v_85 == nil) goto v_52;
    else goto v_53;
v_52:
    v_85 = nil;
    goto v_46;
v_53:
    v_85 = stack[-3];
    if (!car_legal(v_85)) v_85 = carerror(v_85); else
    v_85 = car(v_85);
    v_86 = v_85;
    v_85 = lisp_true;
    {   LispObject fn = basic_elt(env, 6); // reval1
    v_85 = (*qfn2(fn))(fn, v_86, v_85);
    }
    env = stack[-5];
    v_85 = ncons(v_85);
    env = stack[-5];
    stack[-1] = v_85;
    stack[-2] = v_85;
v_47:
    v_85 = stack[-3];
    if (!car_legal(v_85)) v_85 = cdrerror(v_85); else
    v_85 = cdr(v_85);
    stack[-3] = v_85;
    v_85 = stack[-3];
    if (v_85 == nil) goto v_67;
    else goto v_68;
v_67:
    v_85 = stack[-2];
    goto v_46;
v_68:
    stack[0] = stack[-1];
    v_85 = stack[-3];
    if (!car_legal(v_85)) v_85 = carerror(v_85); else
    v_85 = car(v_85);
    v_86 = v_85;
    v_85 = lisp_true;
    {   LispObject fn = basic_elt(env, 6); // reval1
    v_85 = (*qfn2(fn))(fn, v_86, v_85);
    }
    env = stack[-5];
    v_85 = ncons(v_85);
    env = stack[-5];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_85);
    v_85 = stack[-1];
    if (!car_legal(v_85)) v_85 = cdrerror(v_85); else
    v_85 = cdr(v_85);
    stack[-1] = v_85;
    goto v_47;
v_46:
    v_85 = cons(stack[-4], v_85);
    env = stack[-5];
    goto v_17;
    v_85 = nil;
v_17:
    stack[0] = v_85;
    v_85 = qvalue(basic_elt(env, 1)); // simpcount!*
    v_85 = sub1(v_85);
    env = stack[-5];
    setvalue(basic_elt(env, 1), v_85); // simpcount!*
    v_85 = stack[0];
    return onevalue(v_85);
}



// Code for get!+col!+nr

static LispObject CC_getLcolLnr(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_9;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_9 = v_2;
// end of prologue
    if (!car_legal(v_9)) v_9 = carerror(v_9); else
    v_9 = car(v_9);
        return Llength(nil, v_9);
    return onevalue(v_9);
}



// Code for cl_simplat

static LispObject CC_cl_simplat(LispObject env,
                         LispObject v_2, LispObject v_3)
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
        push(v_2,v_3);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_3,v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_21 = v_3;
    v_22 = v_2;
// end of prologue
    v_20 = qvalue(basic_elt(env, 1)); // !*rlidentify
    if (v_20 == nil) goto v_7;
    else goto v_8;
v_7:
    v_20 = v_22;
    {
        LispObject fn = basic_elt(env, 3); // rl_simplat1
        return (*qfn2(fn))(fn, v_20, v_21);
    }
v_8:
    v_20 = v_22;
    {   LispObject fn = basic_elt(env, 3); // rl_simplat1
    v_21 = (*qfn2(fn))(fn, v_20, v_21);
    }
    env = stack[0];
    v_20 = basic_elt(env, 2); // cl_identifyat
    {
        LispObject fn = basic_elt(env, 4); // cl_apply2ats
        return (*qfn2(fn))(fn, v_21, v_20);
    }
    v_20 = nil;
    return onevalue(v_20);
}



// Code for fac!-merge

static LispObject CC_facKmerge(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    v_16 = stack[-1];
    if (!car_legal(v_16)) v_17 = carerror(v_16); else
    v_17 = car(v_16);
    v_16 = stack[0];
    if (!car_legal(v_16)) v_16 = carerror(v_16); else
    v_16 = car(v_16);
    {   LispObject fn = basic_elt(env, 1); // multf
    stack[-2] = (*qfn2(fn))(fn, v_17, v_16);
    }
    env = stack[-3];
    v_16 = stack[-1];
    if (!car_legal(v_16)) v_17 = cdrerror(v_16); else
    v_17 = cdr(v_16);
    v_16 = stack[0];
    if (!car_legal(v_16)) v_16 = cdrerror(v_16); else
    v_16 = cdr(v_16);
    v_16 = Lappend_2(nil, v_17, v_16);
    {
        LispObject v_21 = stack[-2];
        return cons(v_21, v_16);
    }
}



// Code for retimes

static LispObject CC_retimes(LispObject env,
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
    v_39 = v_2;
// end of prologue
// Binding !*bool
// FLUIDBIND: reloadenv=1 litvec-offset=1 saveloc=0
{   bind_fluid_stack bind_fluid_var(-1, 1, 0);
    setvalue(basic_elt(env, 1), nil); // !*bool
    {   LispObject fn = basic_elt(env, 4); // retimes1
    v_39 = (*qfn1(fn))(fn, v_39);
    }
    env = stack[-1];
    v_40 = v_39;
    if (v_40 == nil) goto v_12;
    else goto v_13;
v_12:
    v_39 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_11;
v_13:
    v_40 = v_39;
    if (!car_legal(v_40)) v_40 = cdrerror(v_40); else
    v_40 = cdr(v_40);
    if (v_40 == nil) goto v_17;
    v_40 = basic_elt(env, 2); // times
    v_39 = cons(v_40, v_39);
    env = stack[-1];
    goto v_11;
v_17:
    if (!car_legal(v_39)) v_39 = carerror(v_39); else
    v_39 = car(v_39);
    goto v_11;
    v_39 = nil;
v_11:
    v_40 = qvalue(basic_elt(env, 1)); // !*bool
    if (v_40 == nil) goto v_30;
    v_40 = basic_elt(env, 3); // minus
    v_39 = list2(v_40, v_39);
    goto v_28;
v_30:
    goto v_28;
    v_39 = nil;
v_28:
    ;}  // end of a binding scope
    return onevalue(v_39);
}



// Code for vevcompless!?

static LispObject CC_vevcomplessW(LispObject env,
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
    v_11 = v_3;
    v_10 = v_2;
// end of prologue
    stack[0] = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 1); // evcomp
    v_10 = (*qfn2(fn))(fn, v_11, v_10);
    }
    v_10 = (stack[0] == v_10 ? lisp_true : nil);
    return onevalue(v_10);
}



// Code for ordad

static LispObject CC_ordad(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    stack[-2] = nil;
v_10:
    v_49 = stack[0];
    if (v_49 == nil) goto v_13;
    v_50 = stack[-1];
    v_49 = stack[0];
    if (!car_legal(v_49)) v_49 = carerror(v_49); else
    v_49 = car(v_49);
    {   LispObject fn = basic_elt(env, 1); // ordp
    v_49 = (*qfn2(fn))(fn, v_50, v_49);
    }
    env = stack[-3];
    if (v_49 == nil) goto v_17;
    else goto v_13;
v_17:
    goto v_14;
v_13:
    goto v_9;
v_14:
    v_49 = stack[0];
    if (!car_legal(v_49)) v_50 = carerror(v_49); else
    v_50 = car(v_49);
    v_49 = stack[-2];
    v_49 = cons(v_50, v_49);
    env = stack[-3];
    stack[-2] = v_49;
    v_49 = stack[0];
    if (!car_legal(v_49)) v_49 = cdrerror(v_49); else
    v_49 = cdr(v_49);
    stack[0] = v_49;
    goto v_10;
v_9:
    v_50 = stack[-1];
    v_49 = stack[0];
    v_49 = cons(v_50, v_49);
    stack[0] = v_49;
v_34:
    v_49 = stack[-2];
    if (v_49 == nil) goto v_37;
    else goto v_38;
v_37:
    goto v_33;
v_38:
    v_49 = stack[-2];
    if (!car_legal(v_49)) v_49 = cdrerror(v_49); else
    v_49 = cdr(v_49);
    stack[-1] = v_49;
    v_50 = stack[-2];
    v_49 = stack[0];
    if (!car_legal(v_50)) rplacd_fails(v_50);
    setcdr(v_50, v_49);
    v_49 = stack[-2];
    stack[0] = v_49;
    v_49 = stack[-1];
    stack[-2] = v_49;
    goto v_34;
v_33:
    v_49 = stack[0];
    return onevalue(v_49);
}



// Code for round!:last

static LispObject CC_roundTlast(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    v_52 = v_2;
// end of prologue
    v_51 = v_52;
    if (!car_legal(v_51)) v_51 = cdrerror(v_51); else
    v_51 = cdr(v_51);
    if (!car_legal(v_51)) stack[0] = carerror(v_51); else
    stack[0] = car(v_51);
    v_51 = v_52;
    if (!car_legal(v_51)) v_51 = cdrerror(v_51); else
    v_51 = cdr(v_51);
    if (!car_legal(v_51)) v_51 = cdrerror(v_51); else
    v_51 = cdr(v_51);
    v_52 = add1(v_51);
    env = stack[-3];
    v_51 = nil;
    stack[-2] = stack[0];
    stack[-1] = v_52;
    stack[0] = v_51;
    v_52 = stack[-2];
    v_51 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_51 = static_cast<LispObject>(lessp2(v_52, v_51));
    v_51 = v_51 ? lisp_true : nil;
    env = stack[-3];
    if (v_51 == nil) goto v_18;
    v_51 = stack[-2];
    v_51 = negate(v_51);
    env = stack[-3];
    stack[-2] = v_51;
    v_51 = lisp_true;
    stack[0] = v_51;
    goto v_16;
v_18:
v_16:
    v_51 = stack[-2];
    v_51 = Levenp(nil, v_51);
    env = stack[-3];
    if (v_51 == nil) goto v_27;
    else goto v_28;
v_27:
    v_52 = stack[-2];
    v_51 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    {   LispObject fn = basic_elt(env, 2); // lshift
    v_51 = (*qfn2(fn))(fn, v_52, v_51);
    }
    env = stack[-3];
    v_51 = add1(v_51);
    env = stack[-3];
    goto v_26;
v_28:
    v_52 = stack[-2];
    v_51 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    {   LispObject fn = basic_elt(env, 2); // lshift
    v_51 = (*qfn2(fn))(fn, v_52, v_51);
    }
    env = stack[-3];
    goto v_26;
    v_51 = nil;
v_26:
    stack[-2] = v_51;
    v_51 = stack[0];
    if (v_51 == nil) goto v_43;
    v_51 = stack[-2];
    v_51 = negate(v_51);
    env = stack[-3];
    stack[-2] = v_51;
    goto v_41;
v_43:
v_41:
    v_53 = basic_elt(env, 1); // !:rd!:
    v_52 = stack[-2];
    v_51 = stack[-1];
    return list2star(v_53, v_52, v_51);
}



// Code for update!-pline

static LispObject CC_updateKpline(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_100, v_101, v_102;
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
    v_102 = v_4;
    stack[-4] = v_3;
    stack[-5] = v_2;
// end of prologue
    v_101 = stack[-5];
    v_100 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_101 == v_100) goto v_12;
    else goto v_13;
v_12:
    v_101 = stack[-4];
    v_100 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_100 = (v_101 == v_100 ? lisp_true : nil);
    goto v_11;
v_13:
    v_100 = nil;
    goto v_11;
    v_100 = nil;
v_11:
    if (v_100 == nil) goto v_9;
    v_100 = v_102;
    goto v_7;
v_9:
    v_100 = v_102;
    stack[-6] = v_100;
    v_100 = stack[-6];
    if (v_100 == nil) goto v_34;
    else goto v_35;
v_34:
    v_100 = nil;
    goto v_29;
v_35:
    v_100 = stack[-6];
    if (!car_legal(v_100)) v_100 = carerror(v_100); else
    v_100 = car(v_100);
    stack[0] = v_100;
    v_100 = stack[0];
    if (!car_legal(v_100)) v_100 = carerror(v_100); else
    v_100 = car(v_100);
    if (!car_legal(v_100)) v_100 = carerror(v_100); else
    v_100 = car(v_100);
    if (!car_legal(v_100)) v_101 = carerror(v_100); else
    v_101 = car(v_100);
    v_100 = stack[-5];
    v_102 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_101) + static_cast<std::uintptr_t>(v_100) - TAG_FIXNUM);
    v_100 = stack[0];
    if (!car_legal(v_100)) v_100 = carerror(v_100); else
    v_100 = car(v_100);
    if (!car_legal(v_100)) v_100 = carerror(v_100); else
    v_100 = car(v_100);
    if (!car_legal(v_100)) v_101 = cdrerror(v_100); else
    v_101 = cdr(v_100);
    v_100 = stack[-5];
    v_100 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_101) + static_cast<std::uintptr_t>(v_100) - TAG_FIXNUM);
    v_102 = cons(v_102, v_100);
    env = stack[-7];
    v_100 = stack[0];
    if (!car_legal(v_100)) v_100 = carerror(v_100); else
    v_100 = car(v_100);
    if (!car_legal(v_100)) v_101 = cdrerror(v_100); else
    v_101 = cdr(v_100);
    v_100 = stack[-4];
    v_101 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_101) + static_cast<std::uintptr_t>(v_100) - TAG_FIXNUM);
    v_100 = stack[0];
    if (!car_legal(v_100)) v_100 = cdrerror(v_100); else
    v_100 = cdr(v_100);
    v_100 = acons(v_102, v_101, v_100);
    env = stack[-7];
    v_100 = ncons(v_100);
    env = stack[-7];
    stack[-2] = v_100;
    stack[-3] = v_100;
v_30:
    v_100 = stack[-6];
    if (!car_legal(v_100)) v_100 = cdrerror(v_100); else
    v_100 = cdr(v_100);
    stack[-6] = v_100;
    v_100 = stack[-6];
    if (v_100 == nil) goto v_67;
    else goto v_68;
v_67:
    v_100 = stack[-3];
    goto v_29;
v_68:
    stack[-1] = stack[-2];
    v_100 = stack[-6];
    if (!car_legal(v_100)) v_100 = carerror(v_100); else
    v_100 = car(v_100);
    stack[0] = v_100;
    v_100 = stack[0];
    if (!car_legal(v_100)) v_100 = carerror(v_100); else
    v_100 = car(v_100);
    if (!car_legal(v_100)) v_100 = carerror(v_100); else
    v_100 = car(v_100);
    if (!car_legal(v_100)) v_101 = carerror(v_100); else
    v_101 = car(v_100);
    v_100 = stack[-5];
    v_102 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_101) + static_cast<std::uintptr_t>(v_100) - TAG_FIXNUM);
    v_100 = stack[0];
    if (!car_legal(v_100)) v_100 = carerror(v_100); else
    v_100 = car(v_100);
    if (!car_legal(v_100)) v_100 = carerror(v_100); else
    v_100 = car(v_100);
    if (!car_legal(v_100)) v_101 = cdrerror(v_100); else
    v_101 = cdr(v_100);
    v_100 = stack[-5];
    v_100 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_101) + static_cast<std::uintptr_t>(v_100) - TAG_FIXNUM);
    v_102 = cons(v_102, v_100);
    env = stack[-7];
    v_100 = stack[0];
    if (!car_legal(v_100)) v_100 = carerror(v_100); else
    v_100 = car(v_100);
    if (!car_legal(v_100)) v_101 = cdrerror(v_100); else
    v_101 = cdr(v_100);
    v_100 = stack[-4];
    v_101 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_101) + static_cast<std::uintptr_t>(v_100) - TAG_FIXNUM);
    v_100 = stack[0];
    if (!car_legal(v_100)) v_100 = cdrerror(v_100); else
    v_100 = cdr(v_100);
    v_100 = acons(v_102, v_101, v_100);
    env = stack[-7];
    v_100 = ncons(v_100);
    env = stack[-7];
    if (!car_legal(stack[-1])) rplacd_fails(stack[-1]);
    setcdr(stack[-1], v_100);
    v_100 = stack[-2];
    if (!car_legal(v_100)) v_100 = cdrerror(v_100); else
    v_100 = cdr(v_100);
    stack[-2] = v_100;
    goto v_30;
v_29:
    goto v_7;
    v_100 = nil;
v_7:
    return onevalue(v_100);
}



// Code for fprin2

static LispObject CC_fprin2(LispObject env,
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
    v_20 = v_2;
// end of prologue
    v_19 = nil;
// Binding !*lower
// FLUIDBIND: reloadenv=1 litvec-offset=1 saveloc=0
{   bind_fluid_stack bind_fluid_var(-1, 1, 0);
    setvalue(basic_elt(env, 1), v_19); // !*lower
    v_19 = qvalue(basic_elt(env, 2)); // !*fortupper
    if (v_19 == nil) goto v_10;
    v_19 = v_20;
    {   LispObject fn = basic_elt(env, 3); // prin2!-upcase
    v_19 = (*qfn1(fn))(fn, v_19);
    }
    goto v_8;
v_10:
    v_19 = v_20;
    {   LispObject fn = basic_elt(env, 4); // prin2!-downcase
    v_19 = (*qfn1(fn))(fn, v_19);
    }
    goto v_8;
    v_19 = nil;
v_8:
    ;}  // end of a binding scope
    return onevalue(v_19);
}



// Code for tensopp

static LispObject CC_tensopp(LispObject env,
                         LispObject v_2)
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
        push(v_2);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_45 = v_2;
// end of prologue
    v_43 = v_45;
    if (symbolp(v_43)) goto v_10;
    v_43 = nil;
    goto v_8;
v_10:
    v_43 = v_45;
    if (!symbolp(v_43)) v_44 = nil;
    else { v_44 = qfastgets(v_43);
           if (v_44 != nil) { v_44 = elt(v_44, 18); // phystype
#ifdef RECORD_GET
             if (v_44 != SPID_NOPROP)
                record_get(elt(fastget_names, 18), 1);
             else record_get(elt(fastget_names, 18), 0),
                v_44 = nil; }
           else record_get(elt(fastget_names, 18), 0); }
#else
             if (v_44 == SPID_NOPROP) v_44 = nil; }}
#endif
    v_43 = basic_elt(env, 1); // tensor
    v_43 = (v_44 == v_43 ? lisp_true : nil);
    goto v_8;
    v_43 = nil;
v_8:
    if (v_43 == nil) goto v_6;
    else goto v_5;
v_6:
    v_43 = v_45;
    if (!consp(v_43)) goto v_22;
    v_43 = v_45;
    if (!car_legal(v_43)) v_43 = carerror(v_43); else
    v_43 = car(v_43);
    if (!symbolp(v_43)) v_44 = nil;
    else { v_44 = qfastgets(v_43);
           if (v_44 != nil) { v_44 = elt(v_44, 18); // phystype
#ifdef RECORD_GET
             if (v_44 != SPID_NOPROP)
                record_get(elt(fastget_names, 18), 1);
             else record_get(elt(fastget_names, 18), 0),
                v_44 = nil; }
           else record_get(elt(fastget_names, 18), 0); }
#else
             if (v_44 == SPID_NOPROP) v_44 = nil; }}
#endif
    v_43 = basic_elt(env, 1); // tensor
    if (v_44 == v_43) goto v_26;
    else goto v_27;
v_26:
    v_43 = v_45;
    if (!car_legal(v_43)) v_43 = cdrerror(v_43); else
    v_43 = cdr(v_43);
    if (!car_legal(v_43)) v_43 = carerror(v_43); else
    v_43 = car(v_43);
    {   LispObject fn = basic_elt(env, 2); // isanindex
    v_43 = (*qfn1(fn))(fn, v_43);
    }
    v_43 = (v_43 == nil ? lisp_true : nil);
    goto v_25;
v_27:
    v_43 = nil;
    goto v_25;
    v_43 = nil;
v_25:
    goto v_20;
v_22:
    v_43 = nil;
    goto v_20;
    v_43 = nil;
v_20:
v_5:
    return onevalue(v_43);
}



// Code for widestring2list

static LispObject CC_widestring2list(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_135, v_136;
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
    v_135 = v_2;
// end of prologue
    stack[-2] = nil;
    {   LispObject fn = basic_elt(env, 2); // string2list
    v_135 = (*qfn1(fn))(fn, v_135);
    }
    env = stack[-4];
    stack[-3] = v_135;
v_14:
    v_135 = stack[-3];
    if (v_135 == nil) goto v_17;
    else goto v_18;
v_17:
    goto v_13;
v_18:
    v_135 = stack[-3];
    if (!car_legal(v_135)) v_135 = carerror(v_135); else
    v_135 = car(v_135);
    stack[0] = v_135;
    v_135 = stack[-3];
    if (!car_legal(v_135)) v_135 = cdrerror(v_135); else
    v_135 = cdr(v_135);
    stack[-3] = v_135;
    v_136 = stack[0];
    v_135 = static_cast<LispObject>(2048)+TAG_FIXNUM; // 128
    {   LispObject fn = basic_elt(env, 3); // land
    v_136 = (*qfn2(fn))(fn, v_136, v_135);
    }
    env = stack[-4];
    v_135 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_136 == v_135) goto v_28;
    v_136 = stack[0];
    v_135 = static_cast<LispObject>(3584)+TAG_FIXNUM; // 224
    {   LispObject fn = basic_elt(env, 3); // land
    v_136 = (*qfn2(fn))(fn, v_136, v_135);
    }
    env = stack[-4];
    v_135 = static_cast<LispObject>(3072)+TAG_FIXNUM; // 192
    if (v_136 == v_135) goto v_35;
    else goto v_36;
v_35:
    v_135 = stack[-3];
    {   LispObject fn = basic_elt(env, 4); // moan!-if!-truncated
    v_135 = (*qfn1(fn))(fn, v_135);
    }
    env = stack[-4];
    stack[-1] = v_135;
    v_135 = stack[-3];
    if (!car_legal(v_135)) v_135 = cdrerror(v_135); else
    v_135 = cdr(v_135);
    stack[-3] = v_135;
    v_136 = stack[0];
    v_135 = static_cast<LispObject>(496)+TAG_FIXNUM; // 31
    {   LispObject fn = basic_elt(env, 3); // land
    v_136 = (*qfn2(fn))(fn, v_136, v_135);
    }
    env = stack[-4];
    v_135 = static_cast<LispObject>(96)+TAG_FIXNUM; // 6
    {   LispObject fn = basic_elt(env, 5); // lshift
    stack[0] = (*qfn2(fn))(fn, v_136, v_135);
    }
    env = stack[-4];
    v_136 = stack[-1];
    v_135 = static_cast<LispObject>(1008)+TAG_FIXNUM; // 63
    {   LispObject fn = basic_elt(env, 3); // land
    v_135 = (*qfn2(fn))(fn, v_136, v_135);
    }
    env = stack[-4];
    v_135 = plus2(stack[0], v_135);
    env = stack[-4];
    stack[0] = v_135;
    goto v_34;
v_36:
    v_136 = stack[0];
    v_135 = static_cast<LispObject>(3840)+TAG_FIXNUM; // 240
    {   LispObject fn = basic_elt(env, 3); // land
    v_136 = (*qfn2(fn))(fn, v_136, v_135);
    }
    env = stack[-4];
    v_135 = static_cast<LispObject>(3584)+TAG_FIXNUM; // 224
    if (v_136 == v_135) goto v_54;
    else goto v_55;
v_54:
    v_135 = stack[-3];
    {   LispObject fn = basic_elt(env, 4); // moan!-if!-truncated
    v_135 = (*qfn1(fn))(fn, v_135);
    }
    env = stack[-4];
    stack[-1] = v_135;
    v_135 = stack[-3];
    if (!car_legal(v_135)) v_135 = cdrerror(v_135); else
    v_135 = cdr(v_135);
    stack[-3] = v_135;
    v_136 = stack[0];
    v_135 = static_cast<LispObject>(240)+TAG_FIXNUM; // 15
    {   LispObject fn = basic_elt(env, 3); // land
    v_136 = (*qfn2(fn))(fn, v_136, v_135);
    }
    env = stack[-4];
    v_135 = static_cast<LispObject>(192)+TAG_FIXNUM; // 12
    {   LispObject fn = basic_elt(env, 5); // lshift
    stack[0] = (*qfn2(fn))(fn, v_136, v_135);
    }
    env = stack[-4];
    v_136 = stack[-1];
    v_135 = static_cast<LispObject>(1008)+TAG_FIXNUM; // 63
    {   LispObject fn = basic_elt(env, 3); // land
    v_136 = (*qfn2(fn))(fn, v_136, v_135);
    }
    env = stack[-4];
    v_135 = static_cast<LispObject>(96)+TAG_FIXNUM; // 6
    {   LispObject fn = basic_elt(env, 5); // lshift
    v_135 = (*qfn2(fn))(fn, v_136, v_135);
    }
    env = stack[-4];
    v_135 = plus2(stack[0], v_135);
    env = stack[-4];
    stack[0] = v_135;
    v_135 = stack[-3];
    {   LispObject fn = basic_elt(env, 4); // moan!-if!-truncated
    v_135 = (*qfn1(fn))(fn, v_135);
    }
    env = stack[-4];
    stack[-1] = v_135;
    v_135 = stack[-3];
    if (!car_legal(v_135)) v_135 = cdrerror(v_135); else
    v_135 = cdr(v_135);
    stack[-3] = v_135;
    v_136 = stack[-1];
    v_135 = static_cast<LispObject>(1008)+TAG_FIXNUM; // 63
    {   LispObject fn = basic_elt(env, 3); // land
    v_135 = (*qfn2(fn))(fn, v_136, v_135);
    }
    env = stack[-4];
    v_135 = plus2(stack[0], v_135);
    env = stack[-4];
    stack[0] = v_135;
    goto v_34;
v_55:
    v_136 = stack[0];
    v_135 = static_cast<LispObject>(3968)+TAG_FIXNUM; // 248
    {   LispObject fn = basic_elt(env, 3); // land
    v_136 = (*qfn2(fn))(fn, v_136, v_135);
    }
    env = stack[-4];
    v_135 = static_cast<LispObject>(3840)+TAG_FIXNUM; // 240
    if (v_136 == v_135) goto v_84;
    else goto v_85;
v_84:
    v_135 = stack[-3];
    {   LispObject fn = basic_elt(env, 4); // moan!-if!-truncated
    v_135 = (*qfn1(fn))(fn, v_135);
    }
    env = stack[-4];
    stack[-1] = v_135;
    v_135 = stack[-3];
    if (!car_legal(v_135)) v_135 = cdrerror(v_135); else
    v_135 = cdr(v_135);
    stack[-3] = v_135;
    v_136 = stack[0];
    v_135 = static_cast<LispObject>(112)+TAG_FIXNUM; // 7
    {   LispObject fn = basic_elt(env, 3); // land
    v_136 = (*qfn2(fn))(fn, v_136, v_135);
    }
    env = stack[-4];
    v_135 = static_cast<LispObject>(288)+TAG_FIXNUM; // 18
    {   LispObject fn = basic_elt(env, 5); // lshift
    stack[0] = (*qfn2(fn))(fn, v_136, v_135);
    }
    env = stack[-4];
    v_136 = stack[-1];
    v_135 = static_cast<LispObject>(1008)+TAG_FIXNUM; // 63
    {   LispObject fn = basic_elt(env, 3); // land
    v_136 = (*qfn2(fn))(fn, v_136, v_135);
    }
    env = stack[-4];
    v_135 = static_cast<LispObject>(192)+TAG_FIXNUM; // 12
    {   LispObject fn = basic_elt(env, 5); // lshift
    v_135 = (*qfn2(fn))(fn, v_136, v_135);
    }
    env = stack[-4];
    v_135 = plus2(stack[0], v_135);
    env = stack[-4];
    stack[0] = v_135;
    v_135 = stack[-3];
    {   LispObject fn = basic_elt(env, 4); // moan!-if!-truncated
    v_135 = (*qfn1(fn))(fn, v_135);
    }
    env = stack[-4];
    stack[-1] = v_135;
    v_135 = stack[-3];
    if (!car_legal(v_135)) v_135 = cdrerror(v_135); else
    v_135 = cdr(v_135);
    stack[-3] = v_135;
    v_136 = stack[-1];
    v_135 = static_cast<LispObject>(1008)+TAG_FIXNUM; // 63
    {   LispObject fn = basic_elt(env, 3); // land
    v_136 = (*qfn2(fn))(fn, v_136, v_135);
    }
    env = stack[-4];
    v_135 = static_cast<LispObject>(96)+TAG_FIXNUM; // 6
    {   LispObject fn = basic_elt(env, 5); // lshift
    v_135 = (*qfn2(fn))(fn, v_136, v_135);
    }
    env = stack[-4];
    v_135 = plus2(stack[0], v_135);
    env = stack[-4];
    stack[0] = v_135;
    v_135 = stack[-3];
    {   LispObject fn = basic_elt(env, 4); // moan!-if!-truncated
    v_135 = (*qfn1(fn))(fn, v_135);
    }
    env = stack[-4];
    stack[-1] = v_135;
    v_135 = stack[-3];
    if (!car_legal(v_135)) v_135 = cdrerror(v_135); else
    v_135 = cdr(v_135);
    stack[-3] = v_135;
    v_136 = stack[-1];
    v_135 = static_cast<LispObject>(1008)+TAG_FIXNUM; // 63
    {   LispObject fn = basic_elt(env, 3); // land
    v_135 = (*qfn2(fn))(fn, v_136, v_135);
    }
    env = stack[-4];
    v_135 = plus2(stack[0], v_135);
    env = stack[-4];
    stack[0] = v_135;
    goto v_34;
v_85:
    v_136 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_135 = basic_elt(env, 1); // "Improper byte in utf-8 string"
    {   LispObject fn = basic_elt(env, 6); // error
    v_135 = (*qfn2(fn))(fn, v_136, v_135);
    }
    env = stack[-4];
    goto v_34;
v_34:
    goto v_26;
v_28:
v_26:
    v_136 = stack[0];
    v_135 = stack[-2];
    v_135 = cons(v_136, v_135);
    env = stack[-4];
    stack[-2] = v_135;
    goto v_14;
v_13:
    v_135 = stack[-2];
        return Lnreverse(nil, v_135);
    return onevalue(v_135);
}



// Code for mo!=sum

static LispObject CC_moMsum(LispObject env,
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
    stack[-1] = v_2;
// end of prologue
    v_45 = nil;
v_10:
    v_43 = stack[-1];
    if (v_43 == nil) goto v_13;
    v_43 = stack[0];
    if (v_43 == nil) goto v_13;
    goto v_14;
v_13:
    goto v_9;
v_14:
    v_43 = stack[-1];
    if (!car_legal(v_43)) v_44 = carerror(v_43); else
    v_44 = car(v_43);
    v_43 = stack[0];
    if (!car_legal(v_43)) v_43 = carerror(v_43); else
    v_43 = car(v_43);
    v_43 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_44) + static_cast<std::uintptr_t>(v_43) - TAG_FIXNUM);
    v_44 = v_45;
    v_43 = cons(v_43, v_44);
    env = stack[-2];
    v_45 = v_43;
    v_43 = stack[-1];
    if (!car_legal(v_43)) v_43 = cdrerror(v_43); else
    v_43 = cdr(v_43);
    stack[-1] = v_43;
    v_43 = stack[0];
    if (!car_legal(v_43)) v_43 = cdrerror(v_43); else
    v_43 = cdr(v_43);
    stack[0] = v_43;
    goto v_10;
v_9:
    v_43 = v_45;
    v_44 = Lnreverse(nil, v_43);
    v_43 = stack[-1];
    if (v_43 == nil) goto v_37;
    v_43 = stack[-1];
    goto v_35;
v_37:
    v_43 = stack[0];
    goto v_35;
    v_43 = nil;
v_35:
        return Lappend_2(nil, v_44, v_43);
    return onevalue(v_43);
}



// Code for lcm

static LispObject CC_lcm(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_39, v_40, v_41, v_42;
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
    v_41 = v_3;
    v_42 = v_2;
// end of prologue
    v_39 = v_42;
    if (v_39 == nil) goto v_11;
    else goto v_12;
v_11:
    v_39 = lisp_true;
    goto v_10;
v_12:
    v_39 = v_41;
    v_39 = (v_39 == nil ? lisp_true : nil);
    goto v_10;
    v_39 = nil;
v_10:
    if (v_39 == nil) goto v_8;
    v_39 = nil;
    goto v_6;
v_8:
    v_40 = v_42;
    v_39 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_40 == v_39) goto v_20;
    else goto v_21;
v_20:
    v_39 = v_41;
    goto v_6;
v_21:
    v_40 = v_41;
    v_39 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_40 == v_39) goto v_25;
    else goto v_26;
v_25:
    v_39 = v_42;
    goto v_6;
v_26:
    stack[-1] = v_42;
    stack[0] = v_41;
    v_39 = v_42;
    v_40 = v_41;
    {   LispObject fn = basic_elt(env, 1); // gcdf
    v_39 = (*qfn2(fn))(fn, v_39, v_40);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 2); // quotf!-fail
    v_39 = (*qfn2(fn))(fn, stack[0], v_39);
    }
    env = stack[-2];
    {
        LispObject v_45 = stack[-1];
        LispObject fn = basic_elt(env, 3); // multf
        return (*qfn2(fn))(fn, v_45, v_39);
    }
    v_39 = nil;
v_6:
    return onevalue(v_39);
}



// Code for arzerop!:

static LispObject CC_arzeropT(LispObject env,
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
    v_7 = (v_7 == nil ? lisp_true : nil);
    return onevalue(v_7);
}



// Code for simpexpon

static LispObject CC_simpexpon(LispObject env,
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
    v_7 = basic_elt(env, 1); // simp!*
    {
        LispObject fn = basic_elt(env, 2); // simpexpon1
        return (*qfn2(fn))(fn, v_8, v_7);
    }
}



// Code for lalr_lr0_closure

static LispObject CC_lalr_lr0_closure(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_122, v_123, v_124;
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(9);
// copy arguments values to proper place
    stack[-6] = v_2;
// end of prologue
    stack[-7] = nil;
    stack[-5] = nil;
    stack[-2] = nil;
    v_122 = stack[-6];
    stack[0] = v_122;
v_16:
    v_122 = stack[0];
    if (v_122 == nil) goto v_20;
    else goto v_21;
v_20:
    goto v_15;
v_21:
    v_122 = stack[0];
    if (!car_legal(v_122)) v_122 = carerror(v_122); else
    v_122 = car(v_122);
    v_123 = basic_elt(env, 1); // !.
    v_122 = Lmember(nil, v_123, v_122);
    if (!car_legal(v_122)) v_122 = cdrerror(v_122); else
    v_122 = cdr(v_122);
    v_123 = v_122;
    v_122 = v_123;
    if (v_122 == nil) goto v_34;
    v_122 = v_123;
    if (!car_legal(v_122)) v_122 = carerror(v_122); else
    v_122 = car(v_122);
    stack[-4] = v_122;
    if (v_122 == nil) goto v_34;
    v_122 = stack[-4];
    if (symbolp(v_122)) goto v_42;
    else goto v_34;
v_42:
    v_123 = stack[-4];
    v_122 = stack[-5];
    v_122 = Lmember(nil, v_123, v_122);
    if (v_122 == nil) goto v_44;
    else goto v_34;
v_44:
    v_123 = stack[-4];
    v_122 = stack[-5];
    v_122 = cons(v_123, v_122);
    env = stack[-8];
    stack[-5] = v_122;
    goto v_32;
v_34:
v_32:
    v_122 = stack[0];
    if (!car_legal(v_122)) v_122 = cdrerror(v_122); else
    v_122 = cdr(v_122);
    stack[0] = v_122;
    goto v_16;
v_15:
v_55:
    v_122 = stack[-5];
    if (v_122 == nil) goto v_58;
    else goto v_59;
v_58:
    goto v_54;
v_59:
    v_122 = stack[-5];
    if (!car_legal(v_122)) v_122 = carerror(v_122); else
    v_122 = car(v_122);
    stack[-4] = v_122;
    v_122 = stack[-5];
    if (!car_legal(v_122)) v_122 = cdrerror(v_122); else
    v_122 = cdr(v_122);
    stack[-5] = v_122;
    v_123 = stack[-4];
    v_122 = stack[-7];
    v_122 = cons(v_123, v_122);
    env = stack[-8];
    stack[-7] = v_122;
    v_122 = stack[-4];
    {   LispObject fn = basic_elt(env, 2); // lalr_productions
    v_122 = (*qfn1(fn))(fn, v_122);
    }
    env = stack[-8];
    stack[-1] = v_122;
v_72:
    v_122 = stack[-1];
    if (v_122 == nil) goto v_77;
    else goto v_78;
v_77:
    goto v_71;
v_78:
    v_122 = stack[-1];
    if (!car_legal(v_122)) v_122 = carerror(v_122); else
    v_122 = car(v_122);
    if (!car_legal(v_122)) v_122 = carerror(v_122); else
    v_122 = car(v_122);
    stack[-3] = v_122;
    stack[0] = stack[-4];
    v_123 = basic_elt(env, 1); // !.
    v_122 = stack[-3];
    v_123 = cons(v_123, v_122);
    env = stack[-8];
    v_122 = stack[-2];
    v_122 = acons(stack[0], v_123, v_122);
    env = stack[-8];
    stack[-2] = v_122;
    v_122 = stack[-3];
    if (v_122 == nil) goto v_95;
    v_122 = stack[-3];
    if (!car_legal(v_122)) v_122 = carerror(v_122); else
    v_122 = car(v_122);
    v_124 = v_122;
    if (v_122 == nil) goto v_95;
    v_122 = v_124;
    if (symbolp(v_122)) goto v_103;
    else goto v_95;
v_103:
    v_123 = v_124;
    v_122 = stack[-7];
    v_122 = Lmember(nil, v_123, v_122);
    if (v_122 == nil) goto v_106;
    else goto v_95;
v_106:
    v_123 = v_124;
    v_122 = stack[-5];
    v_122 = Lmember(nil, v_123, v_122);
    if (v_122 == nil) goto v_110;
    else goto v_95;
v_110:
    v_123 = v_124;
    v_122 = stack[-5];
    v_122 = cons(v_123, v_122);
    env = stack[-8];
    stack[-5] = v_122;
    goto v_93;
v_95:
v_93:
    v_122 = stack[-1];
    if (!car_legal(v_122)) v_122 = cdrerror(v_122); else
    v_122 = cdr(v_122);
    stack[-1] = v_122;
    goto v_72;
v_71:
    goto v_55;
v_54:
    v_123 = stack[-6];
    v_122 = stack[-2];
    {
        LispObject fn = basic_elt(env, 3); // union
        return (*qfn2(fn))(fn, v_123, v_122);
    }
    return onevalue(v_122);
}



// Code for rat_sgn

static LispObject CC_rat_sgn(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // rat_numrn
    v_7 = (*qfn1(fn))(fn, v_7);
    }
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // sgn
        return (*qfn1(fn))(fn, v_7);
    }
}



// Code for anform

static LispObject CC_anform(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_58 = stack[0];
    if (!consp(v_58)) goto v_6;
    else goto v_7;
v_6:
    v_58 = qvalue(basic_elt(env, 1)); // !*globals
    if (v_58 == nil) goto v_12;
    v_58 = stack[0];
    if (v_58 == nil) goto v_12;
    v_59 = stack[0];
    v_58 = lisp_true;
    if (v_59 == v_58) goto v_22;
    v_58 = stack[0];
    if (symbolp(v_58)) goto v_28;
    v_58 = nil;
    goto v_26;
v_28:
    v_59 = stack[0];
    v_58 = qvalue(basic_elt(env, 2)); // locls!*
    v_58 = Lassoc(nil, v_59, v_58);
    v_58 = (v_58 == nil ? lisp_true : nil);
    goto v_26;
    v_58 = nil;
v_26:
    goto v_20;
v_22:
    v_58 = nil;
    goto v_20;
    v_58 = nil;
v_20:
    if (v_58 == nil) goto v_12;
    v_59 = stack[0];
    v_58 = basic_elt(env, 3); // glb2rf
    v_58 = Lflagp(nil, v_59, v_58);
    env = stack[-1];
    if (v_58 == nil) goto v_42;
    else goto v_43;
v_42:
    v_58 = stack[0];
    v_59 = ncons(v_58);
    env = stack[-1];
    v_58 = basic_elt(env, 3); // glb2rf
    v_58 = Lflag(nil, v_59, v_58);
    env = stack[-1];
    v_59 = stack[0];
    v_58 = qvalue(basic_elt(env, 4)); // globs!*
    v_58 = cons(v_59, v_58);
    env = stack[-1];
    setvalue(basic_elt(env, 4), v_58); // globs!*
    goto v_41;
v_43:
    v_58 = nil;
v_41:
    goto v_10;
v_12:
    v_58 = nil;
v_10:
    goto v_5;
v_7:
    v_58 = stack[0];
    {
        LispObject fn = basic_elt(env, 5); // anform1
        return (*qfn1(fn))(fn, v_58);
    }
    v_58 = nil;
v_5:
    return onevalue(v_58);
}



// Code for praddf

static LispObject CC_praddf(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    v_16 = stack[-1];
    if (!car_legal(v_16)) v_17 = carerror(v_16); else
    v_17 = car(v_16);
    v_16 = stack[0];
    if (!car_legal(v_16)) v_16 = carerror(v_16); else
    v_16 = car(v_16);
    {   LispObject fn = basic_elt(env, 1); // addf
    stack[-2] = (*qfn2(fn))(fn, v_17, v_16);
    }
    env = stack[-3];
    v_16 = stack[-1];
    if (!car_legal(v_16)) v_17 = cdrerror(v_16); else
    v_17 = cdr(v_16);
    v_16 = stack[0];
    if (!car_legal(v_16)) v_16 = cdrerror(v_16); else
    v_16 = cdr(v_16);
    {   LispObject fn = basic_elt(env, 1); // addf
    v_16 = (*qfn2(fn))(fn, v_17, v_16);
    }
    {
        LispObject v_21 = stack[-2];
        return cons(v_21, v_16);
    }
}



// Code for tayexp!-plus2

static LispObject CC_tayexpKplus2(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_3;
    v_61 = v_2;
// end of prologue
    v_60 = v_61;
    if (!consp(v_60)) goto v_11;
    else goto v_12;
v_11:
    v_60 = stack[0];
    v_60 = (consp(v_60) ? nil : lisp_true);
    goto v_10;
v_12:
    v_60 = nil;
    goto v_10;
    v_60 = nil;
v_10:
    if (v_60 == nil) goto v_8;
    v_60 = stack[0];
    return plus2(v_61, v_60);
v_8:
    v_60 = v_61;
    if (!consp(v_60)) goto v_26;
    else goto v_27;
v_26:
    v_60 = v_61;
    {   LispObject fn = basic_elt(env, 1); // !*i2rn
    v_61 = (*qfn1(fn))(fn, v_60);
    }
    env = stack[-2];
    v_60 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // rnplus!:
    v_60 = (*qfn2(fn))(fn, v_61, v_60);
    }
    goto v_25;
v_27:
    v_60 = stack[0];
    if (!consp(v_60)) goto v_33;
    else goto v_34;
v_33:
    stack[-1] = v_61;
    v_60 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // !*i2rn
    v_60 = (*qfn1(fn))(fn, v_60);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 2); // rnplus!:
    v_60 = (*qfn2(fn))(fn, stack[-1], v_60);
    }
    goto v_25;
v_34:
    v_60 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // rnplus!:
    v_60 = (*qfn2(fn))(fn, v_61, v_60);
    }
    goto v_25;
    v_60 = nil;
v_25:
    v_62 = v_60;
    v_60 = v_62;
    if (!car_legal(v_60)) v_60 = cdrerror(v_60); else
    v_60 = cdr(v_60);
    if (!car_legal(v_60)) v_61 = cdrerror(v_60); else
    v_61 = cdr(v_60);
    v_60 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_61 == v_60) goto v_48;
    else goto v_49;
v_48:
    v_60 = v_62;
    if (!car_legal(v_60)) v_60 = cdrerror(v_60); else
    v_60 = cdr(v_60);
    if (!car_legal(v_60)) v_60 = carerror(v_60); else
    v_60 = car(v_60);
    goto v_47;
v_49:
    v_60 = v_62;
    goto v_47;
    v_60 = nil;
v_47:
    goto v_6;
    v_60 = nil;
v_6:
    return onevalue(v_60);
}



// Code for tmsf!*

static LispObject CC_tmsfH(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_20 = stack[0];
    if (is_number(v_20)) goto v_8;
    else goto v_7;
v_8:
    v_20 = stack[0];
    v_20 = Ltruncate(nil, v_20);
    env = stack[-1];
    v_21 = Labsval(nil, v_20);
    env = stack[-1];
    v_20 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_21 == v_20) goto v_10;
    else goto v_7;
v_10:
    v_20 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_5;
v_7:
    v_20 = stack[0];
    {
        LispObject fn = basic_elt(env, 1); // tmsf
        return (*qfn1(fn))(fn, v_20);
    }
    v_20 = nil;
v_5:
    return onevalue(v_20);
}



// Code for cl_smrmknowl

static LispObject CC_cl_smrmknowl(LispObject env,
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
    v_6 = nil;
    return onevalue(v_6);
}



// Code for isvalid

static LispObject CC_isvalid(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_41 = stack[0];
    v_41 = Lcompress(nil, v_41);
    env = stack[-2];
    v_42 = Lsymbolp(nil, v_41);
    env = stack[-2];
    v_41 = lisp_true;
    if (equal(v_42, v_41)) goto v_9;
    v_41 = stack[0];
        return Lcompress(nil, v_41);
v_9:
    v_41 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // compress!*
    v_42 = (*qfn1(fn))(fn, v_41);
    }
    env = stack[-2];
    v_41 = qvalue(basic_elt(env, 1)); // functions!*
    v_41 = Lassoc(nil, v_42, v_41);
    if (v_41 == nil) goto v_19;
    v_41 = lisp_true;
    goto v_5;
v_19:
    stack[-1] = basic_elt(env, 2); // !/
    v_41 = stack[0];
    v_41 = Lreverse(nil, v_41);
    env = stack[-2];
    v_41 = cons(stack[-1], v_41);
    env = stack[-2];
    v_41 = Lreverse(nil, v_41);
    env = stack[-2];
    stack[0] = v_41;
    v_41 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // compress!*
    v_42 = (*qfn1(fn))(fn, v_41);
    }
    env = stack[-2];
    v_41 = qvalue(basic_elt(env, 1)); // functions!*
    v_41 = Lassoc(nil, v_42, v_41);
    if (v_41 == nil) goto v_33;
    v_41 = stack[0];
    setvalue(basic_elt(env, 3), v_41); // char
    v_41 = lisp_true;
    goto v_5;
v_33:
    v_41 = nil;
v_5:
    return onevalue(v_41);
}



// Code for revlis

static LispObject CC_revlis(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_41;
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
    v_41 = v_2;
// end of prologue
    stack[-3] = v_41;
    v_41 = stack[-3];
    if (v_41 == nil) goto v_13;
    else goto v_14;
v_13:
    v_41 = nil;
    goto v_8;
v_14:
    v_41 = stack[-3];
    if (!car_legal(v_41)) v_41 = carerror(v_41); else
    v_41 = car(v_41);
    {   LispObject fn = basic_elt(env, 1); // reval
    v_41 = (*qfn1(fn))(fn, v_41);
    }
    env = stack[-4];
    v_41 = ncons(v_41);
    env = stack[-4];
    stack[-1] = v_41;
    stack[-2] = v_41;
v_9:
    v_41 = stack[-3];
    if (!car_legal(v_41)) v_41 = cdrerror(v_41); else
    v_41 = cdr(v_41);
    stack[-3] = v_41;
    v_41 = stack[-3];
    if (v_41 == nil) goto v_27;
    else goto v_28;
v_27:
    v_41 = stack[-2];
    goto v_8;
v_28:
    stack[0] = stack[-1];
    v_41 = stack[-3];
    if (!car_legal(v_41)) v_41 = carerror(v_41); else
    v_41 = car(v_41);
    {   LispObject fn = basic_elt(env, 1); // reval
    v_41 = (*qfn1(fn))(fn, v_41);
    }
    env = stack[-4];
    v_41 = ncons(v_41);
    env = stack[-4];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_41);
    v_41 = stack[-1];
    if (!car_legal(v_41)) v_41 = cdrerror(v_41); else
    v_41 = cdr(v_41);
    stack[-1] = v_41;
    goto v_9;
v_8:
    return onevalue(v_41);
}



// Code for rmsubs

static LispObject CC_rmsubs(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
    stack_popper stack_popper_var(1);
// end of prologue
    v_13 = qvalue(basic_elt(env, 1)); // !*sqvar!*
    v_12 = nil;
    if (!car_legal(v_13)) rplaca_fails(v_13);
    setcar(v_13, v_12);
    v_12 = lisp_true;
    v_12 = ncons(v_12);
    env = stack[0];
    setvalue(basic_elt(env, 1), v_12); // !*sqvar!*
    v_12 = nil;
    v_12 = ncons(v_12);
    env = stack[0];
    setvalue(basic_elt(env, 2), v_12); // alglist!*
    v_12 = nil;
    return onevalue(v_12);
}



// Code for getroad

static LispObject CC_getroad(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_32, v_33, v_34, v_35;
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
v_7:
    v_32 = v_34;
    if (v_32 == nil) goto v_10;
    else goto v_11;
v_10:
    v_32 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_6;
v_11:
    v_32 = v_35;
    if (!car_legal(v_32)) v_33 = cdrerror(v_32); else
    v_33 = cdr(v_32);
    v_32 = v_34;
    if (!car_legal(v_32)) v_32 = carerror(v_32); else
    v_32 = car(v_32);
    if (!car_legal(v_32)) v_32 = cdrerror(v_32); else
    v_32 = cdr(v_32);
    if (equal(v_33, v_32)) goto v_14;
    else goto v_15;
v_14:
    v_32 = v_35;
    if (!car_legal(v_32)) v_32 = carerror(v_32); else
    v_32 = car(v_32);
    v_33 = v_34;
    if (!car_legal(v_33)) v_33 = carerror(v_33); else
    v_33 = car(v_33);
    if (!car_legal(v_33)) v_33 = carerror(v_33); else
    v_33 = car(v_33);
    {   LispObject fn = basic_elt(env, 1); // qassoc
    v_32 = (*qfn2(fn))(fn, v_32, v_33);
    }
    if (!car_legal(v_32)) v_32 = cdrerror(v_32); else
    v_32 = cdr(v_32);
    goto v_6;
v_15:
    v_32 = v_34;
    if (!car_legal(v_32)) v_32 = cdrerror(v_32); else
    v_32 = cdr(v_32);
    v_34 = v_32;
    goto v_7;
    v_32 = nil;
v_6:
    return onevalue(v_32);
}



// Code for expdrmacro

static LispObject CC_expdrmacro(LispObject env,
                         LispObject v_2)
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
    v_45 = stack[0];
    {   LispObject fn = basic_elt(env, 5); // getrmacro
    v_45 = (*qfn1(fn))(fn, v_45);
    }
    env = stack[-1];
    v_47 = v_45;
    if (v_45 == nil) goto v_13;
    else goto v_14;
v_13:
    v_45 = lisp_true;
    goto v_12;
v_14:
    v_46 = stack[0];
    v_45 = basic_elt(env, 1); // noexpand
    v_45 = Lflagp(nil, v_46, v_45);
    env = stack[-1];
    goto v_12;
    v_45 = nil;
v_12:
    if (v_45 == nil) goto v_10;
    v_45 = nil;
    goto v_6;
v_10:
    v_45 = qvalue(basic_elt(env, 2)); // !*cref
    if (v_45 == nil) goto v_25;
    v_46 = stack[0];
    v_45 = basic_elt(env, 3); // expand
    v_45 = Lflagp(nil, v_46, v_45);
    env = stack[-1];
    if (v_45 == nil) goto v_31;
    else goto v_32;
v_31:
    v_45 = qvalue(basic_elt(env, 4)); // !*force
    v_45 = (v_45 == nil ? lisp_true : nil);
    goto v_30;
v_32:
    v_45 = nil;
    goto v_30;
    v_45 = nil;
v_30:
    if (v_45 == nil) goto v_25;
    v_45 = nil;
    goto v_6;
v_25:
    v_45 = v_47;
    goto v_6;
    v_45 = nil;
v_6:
    return onevalue(v_45);
}



// Code for mo!=degcomp

static LispObject CC_moMdegcomp(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_34, v_35, v_36, v_37;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_35 = v_3;
    v_36 = v_2;
// end of prologue
v_7:
    v_34 = v_36;
    if (v_34 == nil) goto v_10;
    else goto v_11;
v_10:
    v_34 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_6;
v_11:
    v_34 = v_36;
    if (!car_legal(v_34)) v_37 = carerror(v_34); else
    v_37 = car(v_34);
    v_34 = v_35;
    if (!car_legal(v_34)) v_34 = carerror(v_34); else
    v_34 = car(v_34);
    if (equal(v_37, v_34)) goto v_14;
    else goto v_15;
v_14:
    v_34 = v_36;
    if (!car_legal(v_34)) v_34 = cdrerror(v_34); else
    v_34 = cdr(v_34);
    v_36 = v_34;
    v_34 = v_35;
    if (!car_legal(v_34)) v_34 = cdrerror(v_34); else
    v_34 = cdr(v_34);
    v_35 = v_34;
    goto v_7;
v_15:
    v_34 = v_36;
    if (!car_legal(v_34)) v_34 = carerror(v_34); else
    v_34 = car(v_34);
    if (!car_legal(v_35)) v_35 = carerror(v_35); else
    v_35 = car(v_35);
    if ((static_cast<std::intptr_t>(v_34) < static_cast<std::intptr_t>(v_35))) goto v_24;
    else goto v_25;
v_24:
    v_34 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    goto v_6;
v_25:
    v_34 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_6;
    v_34 = nil;
v_6:
    return onevalue(v_34);
}



// Code for dquot

static LispObject CC_dquot(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_37 = stack[-1];
    if (!car_legal(v_37)) v_38 = carerror(v_37); else
    v_38 = car(v_37);
    v_37 = stack[0];
    if (!car_legal(v_37)) v_37 = carerror(v_37); else
    v_37 = car(v_37);
    v_37 = difference2(v_38, v_37);
    env = stack[-3];
    v_39 = v_37;
    v_38 = v_39;
    v_37 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if ((static_cast<std::intptr_t>(v_38) < static_cast<std::intptr_t>(v_37))) goto v_18;
    else goto v_19;
v_18:
    v_37 = nil;
    goto v_8;
v_19:
    v_38 = v_39;
    v_37 = stack[-2];
    v_37 = cons(v_38, v_37);
    env = stack[-3];
    stack[-2] = v_37;
    v_37 = stack[0];
    if (!car_legal(v_37)) v_37 = cdrerror(v_37); else
    v_37 = cdr(v_37);
    stack[0] = v_37;
    v_37 = stack[-1];
    if (!car_legal(v_37)) v_37 = cdrerror(v_37); else
    v_37 = cdr(v_37);
    stack[-1] = v_37;
    v_37 = stack[0];
    if (v_37 == nil) goto v_33;
    goto v_9;
v_33:
    v_37 = stack[-2];
        return Lnreverse(nil, v_37);
v_8:
    return onevalue(v_37);
}



// Code for insert_pv

static LispObject CC_insert_pv(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    stack[0] = v_3;
    v_22 = v_2;
// end of prologue
    v_23 = v_22;
    v_22 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // sieve_pv
    v_22 = (*qfn2(fn))(fn, v_23, v_22);
    }
    env = stack[-1];
    v_23 = v_22;
    v_22 = v_23;
    if (v_22 == nil) goto v_11;
    else goto v_12;
v_11:
    v_22 = stack[0];
    goto v_10;
v_12:
    v_22 = v_23;
    {   LispObject fn = basic_elt(env, 2); // pv_renorm
    v_24 = (*qfn1(fn))(fn, v_22);
    }
    env = stack[-1];
    v_23 = stack[0];
    v_22 = nil;
    {
        LispObject fn = basic_elt(env, 3); // insert_pv1
        return (*qfn3(fn))(fn, v_24, v_23, v_22);
    }
    v_22 = nil;
v_10:
    return onevalue(v_22);
}



// Code for noncomp1

static LispObject CC_noncomp1(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_58, v_59, v_60;
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
    v_59 = v_2;
// end of prologue
    v_58 = v_59;
    v_58 = Lconsp(nil, v_58);
    env = stack[0];
    if (v_58 == nil) goto v_6;
    else goto v_7;
v_6:
    v_58 = nil;
    goto v_5;
v_7:
    v_58 = v_59;
    if (!car_legal(v_58)) v_58 = carerror(v_58); else
    v_58 = car(v_58);
    v_58 = Lconsp(nil, v_58);
    env = stack[0];
    if (v_58 == nil) goto v_12;
    v_58 = v_59;
    {
        LispObject fn = basic_elt(env, 4); // noncomfp
        return (*qfn1(fn))(fn, v_58);
    }
v_12:
    v_58 = v_59;
    if (!car_legal(v_58)) v_60 = carerror(v_58); else
    v_60 = car(v_58);
    v_58 = basic_elt(env, 1); // !*sq
    if (v_60 == v_58) goto v_18;
    else goto v_19;
v_18:
    v_58 = v_59;
    if (!car_legal(v_58)) v_58 = cdrerror(v_58); else
    v_58 = cdr(v_58);
    if (!car_legal(v_58)) v_58 = carerror(v_58); else
    v_58 = car(v_58);
    if (!car_legal(v_58)) v_58 = carerror(v_58); else
    v_58 = car(v_58);
    {
        LispObject fn = basic_elt(env, 4); // noncomfp
        return (*qfn1(fn))(fn, v_58);
    }
v_19:
    v_58 = v_59;
    if (!car_legal(v_58)) v_60 = carerror(v_58); else
    v_60 = car(v_58);
    v_58 = basic_elt(env, 2); // taylor!*
    if (v_60 == v_58) goto v_28;
    else goto v_29;
v_28:
    v_58 = nil;
    goto v_5;
v_29:
    v_58 = v_59;
    if (!car_legal(v_58)) v_60 = carerror(v_58); else
    v_60 = car(v_58);
    v_58 = basic_elt(env, 3); // mat
    if (v_60 == v_58) goto v_34;
    else goto v_35;
v_34:
    v_58 = v_59;
    if (!car_legal(v_58)) v_58 = cdrerror(v_58); else
    v_58 = cdr(v_58);
    if (!car_legal(v_58)) v_58 = carerror(v_58); else
    v_58 = car(v_58);
    {
        LispObject fn = basic_elt(env, 5); // noncomlistp
        return (*qfn1(fn))(fn, v_58);
    }
v_35:
    v_58 = v_59;
    if (!car_legal(v_58)) v_58 = carerror(v_58); else
    v_58 = car(v_58);
    if (!symbolp(v_58)) v_58 = nil;
    else { v_58 = qfastgets(v_58);
           if (v_58 != nil) { v_58 = elt(v_58, 0); // noncom
#ifdef RECORD_GET
             if (v_58 == SPID_NOPROP)
                record_get(elt(fastget_names, 0), 0),
                v_58 = nil;
             else record_get(elt(fastget_names, 0), 1),
                v_58 = lisp_true; }
           else record_get(elt(fastget_names, 0), 0); }
#else
             if (v_58 == SPID_NOPROP) v_58 = nil; else v_58 = lisp_true; }}
#endif
    if (v_58 == nil) goto v_48;
    v_58 = lisp_true;
    goto v_46;
v_48:
    v_58 = v_59;
    if (!car_legal(v_58)) v_58 = cdrerror(v_58); else
    v_58 = cdr(v_58);
    {
        LispObject fn = basic_elt(env, 5); // noncomlistp
        return (*qfn1(fn))(fn, v_58);
    }
    v_58 = nil;
v_46:
    goto v_5;
    v_58 = nil;
v_5:
    return onevalue(v_58);
}



// Code for rntimes!:

static LispObject CC_rntimesT(LispObject env,
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
    stack[-2] = times2(v_21, v_20);
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
    v_20 = times2(v_21, v_20);
    env = stack[-3];
    {
        LispObject v_25 = stack[-2];
        LispObject fn = basic_elt(env, 1); // mkrn
        return (*qfn2(fn))(fn, v_25, v_20);
    }
}



// Code for noncomdel

static LispObject CC_noncomdel(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_19 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // noncomp!*
    v_19 = (*qfn1(fn))(fn, v_19);
    }
    env = stack[-2];
    if (v_19 == nil) goto v_7;
    else goto v_8;
v_7:
    v_20 = stack[-1];
    v_19 = stack[0];
        return Ldelete(nil, v_20, v_19);
v_8:
    v_20 = stack[-1];
    v_19 = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // noncomdel1
        return (*qfn2(fn))(fn, v_20, v_19);
    }
    v_19 = nil;
    return onevalue(v_19);
}



// Code for frvarsof

static LispObject CC_frvarsof(LispObject env,
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
    v_44 = v_3;
    v_45 = v_2;
// end of prologue
v_8:
    v_46 = v_45;
    v_43 = qvalue(basic_elt(env, 1)); // frlis!*
    v_43 = Lmemq(nil, v_46, v_43);
    if (v_43 == nil) goto v_12;
    v_46 = v_45;
    v_43 = v_44;
    v_43 = Lmemq(nil, v_46, v_43);
    if (v_43 == nil) goto v_19;
    v_43 = v_44;
    goto v_7;
v_19:
    stack[0] = v_44;
    v_43 = v_45;
    v_43 = ncons(v_43);
    {
        LispObject v_48 = stack[0];
        return Lappend_2(nil, v_48, v_43);
    }
    goto v_10;
v_12:
    v_43 = v_45;
    if (!consp(v_43)) goto v_30;
    else goto v_31;
v_30:
    v_43 = v_44;
    goto v_7;
v_31:
    v_43 = v_45;
    if (!car_legal(v_43)) v_43 = cdrerror(v_43); else
    v_43 = cdr(v_43);
    stack[0] = v_43;
    v_43 = v_45;
    if (!car_legal(v_43)) v_43 = carerror(v_43); else
    v_43 = car(v_43);
    {   LispObject fn = basic_elt(env, 0); // frvarsof
    v_43 = (*qfn2(fn))(fn, v_43, v_44);
    }
    env = stack[-1];
    v_44 = v_43;
    v_43 = stack[0];
    v_45 = v_43;
    goto v_8;
v_10:
    v_43 = nil;
v_7:
    return onevalue(v_43);
}



// Code for orderactions

static LispObject CC_orderactions(LispObject env,
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
    v_49 = stack[0];
    if (!car_legal(v_49)) v_49 = carerror(v_49); else
    v_49 = car(v_49);
    v_49 = static_cast<LispObject>(lessp2(v_50, v_49));
    v_49 = v_49 ? lisp_true : nil;
    env = stack[-2];
    if (v_49 == nil) goto v_8;
    v_49 = lisp_true;
    goto v_6;
v_8:
    v_49 = stack[-1];
    if (!car_legal(v_49)) v_50 = carerror(v_49); else
    v_50 = car(v_49);
    v_49 = stack[0];
    if (!car_legal(v_49)) v_49 = carerror(v_49); else
    v_49 = car(v_49);
    v_49 = static_cast<LispObject>(greaterp2(v_50, v_49));
    v_49 = v_49 ? lisp_true : nil;
    env = stack[-2];
    if (v_49 == nil) goto v_16;
    v_49 = nil;
    goto v_6;
v_16:
    v_49 = stack[-1];
    if (!car_legal(v_49)) v_49 = cdrerror(v_49); else
    v_49 = cdr(v_49);
    if (!car_legal(v_49)) v_49 = carerror(v_49); else
    v_49 = car(v_49);
    if (!car_legal(v_49)) v_50 = carerror(v_49); else
    v_50 = car(v_49);
    v_49 = stack[0];
    if (!car_legal(v_49)) v_49 = cdrerror(v_49); else
    v_49 = cdr(v_49);
    if (!car_legal(v_49)) v_49 = carerror(v_49); else
    v_49 = car(v_49);
    if (!car_legal(v_49)) v_49 = carerror(v_49); else
    v_49 = car(v_49);
    if (equal(v_50, v_49)) goto v_23;
    else goto v_24;
v_23:
    v_49 = stack[-1];
    if (!car_legal(v_49)) v_50 = cdrerror(v_49); else
    v_50 = cdr(v_49);
    v_49 = stack[0];
    if (!car_legal(v_49)) v_49 = cdrerror(v_49); else
    v_49 = cdr(v_49);
    {
        LispObject fn = basic_elt(env, 2); // ordp
        return (*qfn2(fn))(fn, v_50, v_49);
    }
v_24:
    v_49 = stack[-1];
    if (!car_legal(v_49)) v_49 = cdrerror(v_49); else
    v_49 = cdr(v_49);
    if (!car_legal(v_49)) v_49 = carerror(v_49); else
    v_49 = car(v_49);
    if (!car_legal(v_49)) v_49 = carerror(v_49); else
    v_49 = car(v_49);
    v_50 = basic_elt(env, 1); // shift
    if (v_49 == v_50) goto v_38;
    else goto v_39;
v_38:
    v_49 = lisp_true;
    goto v_6;
v_39:
    v_49 = nil;
    goto v_6;
    v_49 = nil;
v_6:
    return onevalue(v_49);
}



// Code for ofsf_clnegrel

static LispObject CC_ofsf_clnegrel(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_15, v_16;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_15 = v_3;
    v_16 = v_2;
// end of prologue
    if (v_15 == nil) goto v_8;
    v_15 = v_16;
    goto v_6;
v_8:
    v_15 = v_16;
    {
        LispObject fn = basic_elt(env, 1); // ofsf_lnegrel
        return (*qfn1(fn))(fn, v_15);
    }
    v_15 = nil;
v_6:
    return onevalue(v_15);
}



// Code for quotf1

static LispObject CC_quotf1(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_239, v_240;
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
    v_239 = stack[-7];
    if (v_239 == nil) goto v_7;
    else goto v_8;
v_7:
    v_239 = nil;
    goto v_6;
v_8:
    v_240 = stack[-7];
    v_239 = stack[-6];
    if (equal(v_240, v_239)) goto v_11;
    else goto v_12;
v_11:
    v_239 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_6;
v_12:
    v_240 = stack[-6];
    v_239 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_240 == v_239) goto v_16;
    else goto v_17;
v_16:
    v_239 = stack[-7];
    goto v_6;
v_17:
    v_239 = stack[-6];
    if (!consp(v_239)) goto v_25;
    else goto v_26;
v_25:
    v_239 = lisp_true;
    goto v_24;
v_26:
    v_239 = stack[-6];
    if (!car_legal(v_239)) v_239 = carerror(v_239); else
    v_239 = car(v_239);
    v_239 = (consp(v_239) ? nil : lisp_true);
    goto v_24;
    v_239 = nil;
v_24:
    if (v_239 == nil) goto v_22;
    v_240 = stack[-7];
    v_239 = stack[-6];
    {
        LispObject fn = basic_elt(env, 2); // quotfd
        return (*qfn2(fn))(fn, v_240, v_239);
    }
v_22:
    v_239 = stack[-7];
    if (!consp(v_239)) goto v_41;
    else goto v_42;
v_41:
    v_239 = lisp_true;
    goto v_40;
v_42:
    v_239 = stack[-7];
    if (!car_legal(v_239)) v_239 = carerror(v_239); else
    v_239 = car(v_239);
    v_239 = (consp(v_239) ? nil : lisp_true);
    goto v_40;
    v_239 = nil;
v_40:
    if (v_239 == nil) goto v_38;
    v_239 = nil;
    goto v_6;
v_38:
    v_239 = stack[-7];
    if (!car_legal(v_239)) v_239 = carerror(v_239); else
    v_239 = car(v_239);
    if (!car_legal(v_239)) v_239 = carerror(v_239); else
    v_239 = car(v_239);
    if (!car_legal(v_239)) v_240 = carerror(v_239); else
    v_240 = car(v_239);
    v_239 = stack[-6];
    if (!car_legal(v_239)) v_239 = carerror(v_239); else
    v_239 = car(v_239);
    if (!car_legal(v_239)) v_239 = carerror(v_239); else
    v_239 = car(v_239);
    if (!car_legal(v_239)) v_239 = carerror(v_239); else
    v_239 = car(v_239);
    if (v_240 == v_239) goto v_51;
    else goto v_52;
v_51:
    stack[-3] = nil;
    stack[-2] = nil;
    stack[-1] = nil;
v_72:
    v_239 = stack[-7];
    {   LispObject fn = basic_elt(env, 3); // rank
    v_239 = (*qfn1(fn))(fn, v_239);
    }
    env = stack[-9];
    stack[-4] = v_239;
    if (symbolp(v_239)) goto v_77;
    v_239 = stack[-6];
    {   LispObject fn = basic_elt(env, 3); // rank
    v_239 = (*qfn1(fn))(fn, v_239);
    }
    env = stack[-9];
    stack[0] = v_239;
    if (symbolp(v_239)) goto v_77;
    v_240 = stack[-4];
    v_239 = stack[0];
    v_239 = static_cast<LispObject>(lessp2(v_240, v_239));
    v_239 = v_239 ? lisp_true : nil;
    env = stack[-9];
    if (v_239 == nil) goto v_86;
    else goto v_77;
v_86:
    goto v_78;
v_77:
    v_239 = nil;
    goto v_71;
v_78:
    v_239 = stack[-7];
    {   LispObject fn = basic_elt(env, 4); // lt!*
    v_239 = (*qfn1(fn))(fn, v_239);
    }
    env = stack[-9];
    stack[-4] = v_239;
    v_239 = stack[-6];
    {   LispObject fn = basic_elt(env, 4); // lt!*
    v_239 = (*qfn1(fn))(fn, v_239);
    }
    env = stack[-9];
    stack[0] = v_239;
    v_239 = stack[-6];
    if (!car_legal(v_239)) v_239 = carerror(v_239); else
    v_239 = car(v_239);
    if (!car_legal(v_239)) v_239 = carerror(v_239); else
    v_239 = car(v_239);
    if (!car_legal(v_239)) v_239 = carerror(v_239); else
    v_239 = car(v_239);
    stack[-8] = v_239;
    v_239 = stack[-4];
    if (!car_legal(v_239)) v_240 = cdrerror(v_239); else
    v_240 = cdr(v_239);
    v_239 = stack[0];
    if (!car_legal(v_239)) v_239 = cdrerror(v_239); else
    v_239 = cdr(v_239);
    {   LispObject fn = basic_elt(env, 0); // quotf1
    v_239 = (*qfn2(fn))(fn, v_240, v_239);
    }
    env = stack[-9];
    stack[-5] = v_239;
    v_239 = stack[-5];
    if (v_239 == nil) goto v_106;
    else goto v_107;
v_106:
    v_239 = nil;
    goto v_71;
v_107:
    v_239 = stack[-4];
    if (!car_legal(v_239)) v_239 = carerror(v_239); else
    v_239 = car(v_239);
    if (!car_legal(v_239)) v_240 = cdrerror(v_239); else
    v_240 = cdr(v_239);
    v_239 = stack[0];
    if (!car_legal(v_239)) v_239 = carerror(v_239); else
    v_239 = car(v_239);
    if (!car_legal(v_239)) v_239 = cdrerror(v_239); else
    v_239 = cdr(v_239);
    v_239 = difference2(v_240, v_239);
    env = stack[-9];
    stack[0] = v_239;
    v_240 = stack[0];
    v_239 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_240 == v_239) goto v_120;
    v_240 = stack[-8];
    v_239 = stack[0];
    {   LispObject fn = basic_elt(env, 5); // to
    v_239 = (*qfn2(fn))(fn, v_240, v_239);
    }
    env = stack[-9];
    stack[-3] = v_239;
    goto v_118;
v_120:
v_118:
    v_239 = stack[-5];
    {   LispObject fn = basic_elt(env, 6); // negf
    v_240 = (*qfn1(fn))(fn, v_239);
    }
    env = stack[-9];
    v_239 = stack[-6];
    if (!car_legal(v_239)) v_239 = cdrerror(v_239); else
    v_239 = cdr(v_239);
    {   LispObject fn = basic_elt(env, 7); // multf
    v_239 = (*qfn2(fn))(fn, v_240, v_239);
    }
    env = stack[-9];
    stack[-4] = v_239;
    v_239 = stack[-7];
    if (!car_legal(v_239)) stack[-7] = cdrerror(v_239); else
    stack[-7] = cdr(v_239);
    v_240 = stack[0];
    v_239 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_240 == v_239) goto v_136;
    else goto v_137;
v_136:
    v_239 = stack[-4];
    goto v_135;
v_137:
    v_240 = stack[-3];
    v_239 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_239 = cons(v_240, v_239);
    env = stack[-9];
    v_240 = ncons(v_239);
    env = stack[-9];
    v_239 = stack[-4];
    {   LispObject fn = basic_elt(env, 7); // multf
    v_239 = (*qfn2(fn))(fn, v_240, v_239);
    }
    env = stack[-9];
    goto v_135;
    v_239 = nil;
v_135:
    {   LispObject fn = basic_elt(env, 8); // addf
    v_239 = (*qfn2(fn))(fn, stack[-7], v_239);
    }
    env = stack[-9];
    stack[-7] = v_239;
    v_239 = stack[-7];
    if (v_239 == nil) goto v_152;
    v_239 = stack[-7];
    if (!consp(v_239)) goto v_162;
    else goto v_163;
v_162:
    v_239 = lisp_true;
    goto v_161;
v_163:
    v_239 = stack[-7];
    if (!car_legal(v_239)) v_239 = carerror(v_239); else
    v_239 = car(v_239);
    v_239 = (consp(v_239) ? nil : lisp_true);
    goto v_161;
    v_239 = nil;
v_161:
    if (v_239 == nil) goto v_159;
    v_239 = lisp_true;
    goto v_157;
v_159:
    v_239 = stack[-7];
    if (!car_legal(v_239)) v_239 = carerror(v_239); else
    v_239 = car(v_239);
    if (!car_legal(v_239)) v_239 = carerror(v_239); else
    v_239 = car(v_239);
    if (!car_legal(v_239)) v_240 = carerror(v_239); else
    v_240 = car(v_239);
    v_239 = stack[-8];
    v_239 = (v_240 == v_239 ? lisp_true : nil);
    v_239 = (v_239 == nil ? lisp_true : nil);
    goto v_157;
    v_239 = nil;
v_157:
    if (v_239 == nil) goto v_152;
    v_239 = nil;
    goto v_71;
v_152:
    v_240 = stack[0];
    v_239 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_240 == v_239) goto v_182;
    else goto v_183;
v_182:
    goto v_73;
v_183:
    stack[0] = stack[-2];
    v_240 = stack[-3];
    v_239 = stack[-5];
    v_239 = cons(v_240, v_239);
    env = stack[-9];
    {   LispObject fn = basic_elt(env, 9); // aconc!*
    v_239 = (*qfn2(fn))(fn, stack[0], v_239);
    }
    env = stack[-9];
    stack[-2] = v_239;
    v_239 = stack[-7];
    if (v_239 == nil) goto v_193;
    else goto v_194;
v_193:
    v_239 = stack[-1];
    if (v_239 == nil) goto v_199;
    v_240 = stack[-2];
    v_239 = stack[-1];
    {
        LispObject fn = basic_elt(env, 10); // rnconc
        return (*qfn2(fn))(fn, v_240, v_239);
    }
v_199:
    v_239 = stack[-2];
    goto v_197;
    v_239 = nil;
v_197:
    goto v_71;
v_194:
    goto v_72;
v_73:
    v_239 = stack[-7];
    if (v_239 == nil) goto v_209;
    else goto v_210;
v_209:
    v_240 = stack[-2];
    v_239 = stack[-5];
    {
        LispObject fn = basic_elt(env, 10); // rnconc
        return (*qfn2(fn))(fn, v_240, v_239);
    }
v_210:
    v_239 = qvalue(basic_elt(env, 1)); // !*mcd
    if (v_239 == nil) goto v_216;
    v_239 = nil;
    goto v_71;
v_216:
    v_239 = stack[-5];
    stack[-1] = v_239;
    goto v_208;
v_208:
    goto v_72;
v_71:
    goto v_6;
v_52:
    v_239 = stack[-7];
    if (!car_legal(v_239)) v_239 = carerror(v_239); else
    v_239 = car(v_239);
    if (!car_legal(v_239)) v_239 = carerror(v_239); else
    v_239 = car(v_239);
    if (!car_legal(v_239)) v_240 = carerror(v_239); else
    v_240 = car(v_239);
    v_239 = stack[-6];
    if (!car_legal(v_239)) v_239 = carerror(v_239); else
    v_239 = car(v_239);
    if (!car_legal(v_239)) v_239 = carerror(v_239); else
    v_239 = car(v_239);
    if (!car_legal(v_239)) v_239 = carerror(v_239); else
    v_239 = car(v_239);
    {   LispObject fn = basic_elt(env, 11); // ordop
    v_239 = (*qfn2(fn))(fn, v_240, v_239);
    }
    env = stack[-9];
    if (v_239 == nil) goto v_223;
    v_240 = stack[-7];
    v_239 = stack[-6];
    {
        LispObject fn = basic_elt(env, 12); // quotk
        return (*qfn2(fn))(fn, v_240, v_239);
    }
v_223:
    v_239 = nil;
    goto v_6;
    v_239 = nil;
v_6:
    return onevalue(v_239);
}



// Code for remove!-free!-vars

static LispObject CC_removeKfreeKvars(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_131, v_132, v_133;
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
    v_131 = stack[0];
    if (!consp(v_131)) goto v_10;
    else goto v_11;
v_10:
    v_131 = stack[0];
    goto v_9;
v_11:
    v_131 = stack[0];
    if (!car_legal(v_131)) v_132 = carerror(v_131); else
    v_132 = car(v_131);
    v_131 = basic_elt(env, 1); // !~
    if (v_132 == v_131) goto v_14;
    else goto v_15;
v_14:
    v_131 = qvalue(basic_elt(env, 2)); // !*!*noremove!*!*
    if (v_131 == nil) goto v_22;
    v_131 = stack[0];
    if (!car_legal(v_131)) v_131 = cdrerror(v_131); else
    v_131 = cdr(v_131);
    if (!car_legal(v_131)) v_132 = carerror(v_131); else
    v_132 = car(v_131);
    v_131 = qvalue(basic_elt(env, 3)); // frasc!*
    v_131 = Latsoc(nil, v_132, v_131);
    v_133 = v_131;
    if (v_131 == nil) goto v_28;
    else goto v_26;
v_28:
    v_131 = stack[0];
    if (!car_legal(v_131)) v_131 = cdrerror(v_131); else
    v_131 = cdr(v_131);
    if (!car_legal(v_131)) v_132 = carerror(v_131); else
    v_132 = car(v_131);
    v_131 = basic_elt(env, 1); // !~
    if (!consp(v_132)) goto v_38;
    v_132 = car(v_132);
    if (v_132 == v_131) goto v_37;
    else goto v_38;
v_37:
    v_131 = stack[0];
    if (!car_legal(v_131)) v_131 = cdrerror(v_131); else
    v_131 = cdr(v_131);
    if (!car_legal(v_131)) v_131 = carerror(v_131); else
    v_131 = car(v_131);
    if (!car_legal(v_131)) v_131 = cdrerror(v_131); else
    v_131 = cdr(v_131);
    if (!car_legal(v_131)) v_131 = carerror(v_131); else
    v_131 = car(v_131);
    v_132 = qvalue(basic_elt(env, 3)); // frasc!*
    v_131 = Latsoc(nil, v_131, v_132);
    v_133 = v_131;
    goto v_36;
v_38:
    v_131 = nil;
    goto v_36;
    v_131 = nil;
v_36:
    if (v_131 == nil) goto v_34;
    else goto v_26;
v_34:
    goto v_27;
v_26:
    v_131 = v_133;
    if (!car_legal(v_131)) v_131 = cdrerror(v_131); else
    v_131 = cdr(v_131);
    goto v_25;
v_27:
    v_131 = stack[0];
    goto v_25;
    v_131 = nil;
v_25:
    goto v_20;
v_22:
    v_131 = stack[0];
    if (!car_legal(v_131)) v_131 = cdrerror(v_131); else
    v_131 = cdr(v_131);
    if (!consp(v_131)) goto v_59;
    else goto v_60;
v_59:
    v_132 = stack[0];
    v_131 = basic_elt(env, 4); // "free variable"
    {
        LispObject fn = basic_elt(env, 6); // typerr
        return (*qfn2(fn))(fn, v_132, v_131);
    }
v_60:
    v_131 = stack[0];
    if (!car_legal(v_131)) v_131 = cdrerror(v_131); else
    v_131 = cdr(v_131);
    if (!car_legal(v_131)) v_131 = carerror(v_131); else
    v_131 = car(v_131);
    stack[-1] = v_131;
    if (is_number(v_131)) goto v_66;
    else goto v_67;
v_66:
    v_131 = stack[0];
    goto v_20;
v_67:
    v_131 = stack[-1];
    if (symbolp(v_131)) goto v_72;
    v_132 = stack[-1];
    v_131 = basic_elt(env, 1); // !~
    if (!consp(v_132)) goto v_80;
    v_132 = car(v_132);
    if (v_132 == v_131) goto v_79;
    else goto v_80;
v_79:
    v_131 = stack[-1];
    if (!car_legal(v_131)) v_131 = cdrerror(v_131); else
    v_131 = cdr(v_131);
    if (!car_legal(v_131)) v_131 = carerror(v_131); else
    v_131 = car(v_131);
    stack[-1] = v_131;
    goto v_78;
v_80:
    v_131 = nil;
    goto v_78;
    v_131 = nil;
v_78:
    if (v_131 == nil) goto v_76;
    else goto v_72;
v_76:
    goto v_73;
v_72:
    v_131 = stack[0];
    if (!car_legal(v_131)) v_131 = cdrerror(v_131); else
    v_131 = cdr(v_131);
    if (!car_legal(v_131)) v_131 = carerror(v_131); else
    v_131 = car(v_131);
    {   LispObject fn = basic_elt(env, 7); // get!-free!-form
    v_131 = (*qfn1(fn))(fn, v_131);
    }
    env = stack[-2];
    v_132 = ncons(v_131);
    env = stack[-2];
    v_131 = qvalue(basic_elt(env, 5)); // frlis!*
    {   LispObject fn = basic_elt(env, 8); // union
    v_131 = (*qfn2(fn))(fn, v_132, v_131);
    }
    env = stack[-2];
    setvalue(basic_elt(env, 5), v_131); // frlis!*
    v_131 = stack[-1];
    goto v_20;
v_73:
    v_131 = stack[0];
    if (!car_legal(v_131)) v_131 = cdrerror(v_131); else
    v_131 = cdr(v_131);
    if (!car_legal(v_131)) v_131 = carerror(v_131); else
    v_131 = car(v_131);
    if (!car_legal(v_131)) v_131 = carerror(v_131); else
    v_131 = car(v_131);
    if (symbolp(v_131)) goto v_98;
    else goto v_99;
v_98:
    v_131 = stack[0];
    if (!car_legal(v_131)) v_131 = cdrerror(v_131); else
    v_131 = cdr(v_131);
    if (!car_legal(v_131)) v_131 = carerror(v_131); else
    v_131 = car(v_131);
    if (!car_legal(v_131)) v_131 = carerror(v_131); else
    v_131 = car(v_131);
    {   LispObject fn = basic_elt(env, 7); // get!-free!-form
    v_131 = (*qfn1(fn))(fn, v_131);
    }
    env = stack[-2];
    v_132 = ncons(v_131);
    env = stack[-2];
    v_131 = qvalue(basic_elt(env, 5)); // frlis!*
    {   LispObject fn = basic_elt(env, 8); // union
    v_131 = (*qfn2(fn))(fn, v_132, v_131);
    }
    env = stack[-2];
    setvalue(basic_elt(env, 5), v_131); // frlis!*
    v_131 = stack[0];
    if (!car_legal(v_131)) v_131 = cdrerror(v_131); else
    v_131 = cdr(v_131);
    if (!car_legal(v_131)) v_131 = carerror(v_131); else
    v_131 = car(v_131);
    if (!car_legal(v_131)) stack[-1] = carerror(v_131); else
    stack[-1] = car(v_131);
    v_131 = stack[0];
    if (!car_legal(v_131)) v_131 = cdrerror(v_131); else
    v_131 = cdr(v_131);
    if (!car_legal(v_131)) v_131 = carerror(v_131); else
    v_131 = car(v_131);
    if (!car_legal(v_131)) v_131 = cdrerror(v_131); else
    v_131 = cdr(v_131);
    {   LispObject fn = basic_elt(env, 9); // remove!-free!-vars!-l
    v_131 = (*qfn1(fn))(fn, v_131);
    }
    {
        LispObject v_136 = stack[-1];
        return cons(v_136, v_131);
    }
v_99:
    v_132 = stack[0];
    v_131 = basic_elt(env, 4); // "free variable"
    {
        LispObject fn = basic_elt(env, 6); // typerr
        return (*qfn2(fn))(fn, v_132, v_131);
    }
    v_131 = nil;
v_20:
    goto v_9;
v_15:
    v_131 = stack[0];
    {
        LispObject fn = basic_elt(env, 9); // remove!-free!-vars!-l
        return (*qfn1(fn))(fn, v_131);
    }
    v_131 = nil;
v_9:
    return onevalue(v_131);
}



// Code for tayexp!-minusp

static LispObject CC_tayexpKminusp(LispObject env,
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
    v_15 = v_16;
    if (!consp(v_15)) goto v_6;
    else goto v_7;
v_6:
    v_15 = v_16;
        return Lminusp(nil, v_15);
v_7:
    v_15 = v_16;
    {
        LispObject fn = basic_elt(env, 1); // rnminusp!:
        return (*qfn1(fn))(fn, v_15);
    }
    v_15 = nil;
    return onevalue(v_15);
}



// Code for subs2

static LispObject CC_subs2(LispObject env,
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    v_79 = v_2;
// end of prologue
    stack[-3] = nil;
    stack[-2] = nil;
    stack[-1] = nil;
    v_78 = qvalue(basic_elt(env, 1)); // subfg!*
    if (v_78 == nil) goto v_12;
    else goto v_13;
v_12:
    v_78 = v_79;
    goto v_9;
v_13:
    v_78 = qvalue(basic_elt(env, 2)); // !*sub2
    if (v_78 == nil) goto v_18;
    else goto v_16;
v_18:
    v_78 = qvalue(basic_elt(env, 3)); // powlis1!*
    if (v_78 == nil) goto v_20;
    else goto v_16;
v_20:
    goto v_17;
v_16:
    v_78 = v_79;
    {   LispObject fn = basic_elt(env, 7); // subs2q
    v_78 = (*qfn1(fn))(fn, v_78);
    }
    env = stack[-4];
    v_79 = v_78;
    goto v_11;
v_17:
v_11:
    v_78 = v_79;
    {   LispObject fn = basic_elt(env, 8); // exptchksq
    v_78 = (*qfn1(fn))(fn, v_78);
    }
    env = stack[-4];
    v_79 = v_78;
    v_78 = basic_elt(env, 4); // slash
    if (!symbolp(v_78)) v_78 = nil;
    else { v_78 = qfastgets(v_78);
           if (v_78 != nil) { v_78 = elt(v_78, 9); // opmtch
#ifdef RECORD_GET
             if (v_78 != SPID_NOPROP)
                record_get(elt(fastget_names, 9), 1);
             else record_get(elt(fastget_names, 9), 0),
                v_78 = nil; }
           else record_get(elt(fastget_names, 9), 0); }
#else
             if (v_78 == SPID_NOPROP) v_78 = nil; }}
#endif
    stack[0] = v_78;
    v_78 = qvalue(basic_elt(env, 5)); // !*match
    if (v_78 == nil) goto v_36;
    else goto v_35;
v_36:
    v_78 = stack[0];
    if (v_78 == nil) goto v_38;
    else goto v_35;
v_38:
    v_78 = lisp_true;
    goto v_33;
v_35:
    v_78 = v_79;
    if (!car_legal(v_78)) v_78 = carerror(v_78); else
    v_78 = car(v_78);
    v_78 = (v_78 == nil ? lisp_true : nil);
    goto v_33;
    v_78 = nil;
v_33:
    if (v_78 == nil) goto v_31;
    v_78 = v_79;
    goto v_9;
v_31:
    v_78 = qvalue(basic_elt(env, 6)); // !*exp
    if (v_78 == nil) goto v_47;
    else goto v_48;
v_47:
    v_78 = lisp_true;
    stack[-3] = v_78;
    v_78 = lisp_true;
    setvalue(basic_elt(env, 6), v_78); // !*exp
    v_78 = v_79;
    stack[-2] = v_78;
    v_78 = v_79;
    {   LispObject fn = basic_elt(env, 9); // resimp
    v_78 = (*qfn1(fn))(fn, v_78);
    }
    env = stack[-4];
    v_79 = v_78;
    stack[-1] = v_78;
    goto v_29;
v_48:
v_29:
    v_78 = v_79;
    {   LispObject fn = basic_elt(env, 10); // subs3q
    v_78 = (*qfn1(fn))(fn, v_78);
    }
    env = stack[-4];
    v_79 = v_78;
    v_78 = stack[-3];
    if (v_78 == nil) goto v_60;
    v_78 = nil;
    setvalue(basic_elt(env, 6), v_78); // !*exp
    v_80 = v_79;
    v_78 = stack[-1];
    if (equal(v_80, v_78)) goto v_65;
    else goto v_66;
v_65:
    v_78 = stack[-2];
    v_79 = v_78;
    goto v_64;
v_66:
v_64:
    goto v_58;
v_60:
v_58:
    v_78 = stack[0];
    if (v_78 == nil) goto v_73;
    v_78 = v_79;
    {   LispObject fn = basic_elt(env, 11); // subs4q
    v_78 = (*qfn1(fn))(fn, v_78);
    }
    v_79 = v_78;
    goto v_71;
v_73:
v_71:
    v_78 = v_79;
v_9:
    return onevalue(v_78);
}



// Code for mri_floorp

static LispObject CC_mri_floorp(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_26, v_27, v_28;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_27 = v_2;
// end of prologue
v_1:
    v_26 = v_27;
    if (v_26 == nil) goto v_6;
    else goto v_7;
v_6:
    v_26 = nil;
    goto v_5;
v_7:
    v_26 = v_27;
    if (!car_legal(v_26)) v_28 = carerror(v_26); else
    v_28 = car(v_26);
    v_26 = basic_elt(env, 1); // floor
    if (!consp(v_28)) goto v_15;
    v_28 = car(v_28);
    if (v_28 == v_26) goto v_14;
    else goto v_15;
v_14:
    v_26 = lisp_true;
    goto v_13;
v_15:
    v_26 = v_27;
    if (!car_legal(v_26)) v_26 = cdrerror(v_26); else
    v_26 = cdr(v_26);
    v_27 = v_26;
    goto v_1;
    v_26 = nil;
v_13:
    goto v_5;
    v_26 = nil;
v_5:
    return onevalue(v_26);
}



// Code for xxsort

static LispObject CC_xxsort(LispObject env,
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
    v_7 = basic_elt(env, 1); // lambda_qrvi5bym67r22
    {
        LispObject fn = basic_elt(env, 2); // sort
        return (*qfn2(fn))(fn, v_8, v_7);
    }
}



// Code for lambda_qrvi5bym67r22

static LispObject CC_lambda_qrvi5bym67r22(LispObject env,
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
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_12 = v_3;
    v_13 = v_2;
// end of prologue
    if (!car_legal(v_13)) v_13 = carerror(v_13); else
    v_13 = car(v_13);
    if (!car_legal(v_12)) v_12 = carerror(v_12); else
    v_12 = car(v_12);
    {   LispObject fn = basic_elt(env, 1); // termorder
    v_13 = (*qfn2(fn))(fn, v_13, v_12);
    }
    v_12 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
        return Llessp_2(nil, v_13, v_12);
}



setup_type const u04_setup[] =
{
    {"lex",                     CC_lex,   G1W0,     G2W0,     G3W0,     G4W0},
    {"ps:get-term",             G0W2,     G1W2,     CC_psTgetKterm,G3W2,G4W2},
    {"*q2a1",                   G0W2,     G1W2,     CC_Hq2a1, G3W2,     G4W2},
    {"replus1",                 G0W1,     CC_replus1,G2W1,    G3W1,     G4W1},
    {"peel",                    G0W1,     CC_peel,  G2W1,     G3W1,     G4W1},
    {"quotfm",                  G0W2,     G1W2,     CC_quotfm,G3W2,     G4W2},
    {"idlistp",                 G0W1,     CC_idlistp,G2W1,    G3W1,     G4W1},
    {"formlis",                 G0W3,     G1W3,     G2W3,     CC_formlis,G4W3},
    {"bas_rep",                 G0W1,     CC_bas_rep,G2W1,    G3W1,     G4W1},
    {"pv_sort2",                G0W2,     G1W2,     CC_pv_sort2,G3W2,   G4W2},
    {"ofsf_posdefp",            G0W1,     CC_ofsf_posdefp,G2W1,G3W1,    G4W1},
    {"quotf-fail",              G0W2,     G1W2,     CC_quotfKfail,G3W2, G4W2},
    {"free-powerp",             G0W1,     CC_freeKpowerp,G2W1,G3W1,     G4W1},
    {"invsq",                   G0W1,     CC_invsq, G2W1,     G3W1,     G4W1},
    {"kernord",                 G0W2,     G1W2,     CC_kernord,G3W2,    G4W2},
    {"negf",                    G0W1,     CC_negf,  G2W1,     G3W1,     G4W1},
    {"mkwedge",                 G0W1,     CC_mkwedge,G2W1,    G3W1,     G4W1},
    {"scprint",                 G0W2,     G1W2,     CC_scprint,G3W2,    G4W2},
    {"qassoc",                  G0W2,     G1W2,     CC_qassoc,G3W2,     G4W2},
    {"nonzero-length",          G0W1,     CC_nonzeroKlength,G2W1,G3W1,  G4W1},
    {"mo_ecart",                G0W1,     CC_mo_ecart,G2W1,   G3W1,     G4W1},
    {"add_prin_char",           G0W2,     G1W2,     CC_add_prin_char,G3W2,G4W2},
    {"pv_sort",                 G0W1,     CC_pv_sort,G2W1,    G3W1,     G4W1},
    {"general-modular-number",  G0W1,     CC_generalKmodularKnumber,G2W1,G3W1,G4W1},
    {"bfzerop:",                G0W1,     CC_bfzeropT,G2W1,   G3W1,     G4W1},
    {"flatten-sorted-tree",     G0W2,     G1W2,     CC_flattenKsortedKtree,G3W2,G4W2},
    {"ordopcar",                G0W2,     G1W2,     CC_ordopcar,G3W2,   G4W2},
    {"checkargcount",           G0W2,     G1W2,     CC_checkargcount,G3W2,G4W2},
    {"treesizep1",              G0W2,     G1W2,     CC_treesizep1,G3W2, G4W2},
    {"listeval",                G0W2,     G1W2,     CC_listeval,G3W2,   G4W2},
    {"get+col+nr",              G0W1,     CC_getLcolLnr,G2W1, G3W1,     G4W1},
    {"cl_simplat",              G0W2,     G1W2,     CC_cl_simplat,G3W2, G4W2},
    {"fac-merge",               G0W2,     G1W2,     CC_facKmerge,G3W2,  G4W2},
    {"retimes",                 G0W1,     CC_retimes,G2W1,    G3W1,     G4W1},
    {"vevcompless?",            G0W2,     G1W2,     CC_vevcomplessW,G3W2,G4W2},
    {"ordad",                   G0W2,     G1W2,     CC_ordad, G3W2,     G4W2},
    {"round:last",              G0W1,     CC_roundTlast,G2W1, G3W1,     G4W1},
    {"update-pline",            G0W3,     G1W3,     G2W3,     CC_updateKpline,G4W3},
    {"fprin2",                  G0W1,     CC_fprin2,G2W1,     G3W1,     G4W1},
    {"tensopp",                 G0W1,     CC_tensopp,G2W1,    G3W1,     G4W1},
    {"widestring2list",         G0W1,     CC_widestring2list,G2W1,G3W1, G4W1},
    {"mo=sum",                  G0W2,     G1W2,     CC_moMsum,G3W2,     G4W2},
    {"lcm",                     G0W2,     G1W2,     CC_lcm,   G3W2,     G4W2},
    {"arzerop:",                G0W1,     CC_arzeropT,G2W1,   G3W1,     G4W1},
    {"simpexpon",               G0W1,     CC_simpexpon,G2W1,  G3W1,     G4W1},
    {"lalr_lr0_closure",        G0W1,     CC_lalr_lr0_closure,G2W1,G3W1,G4W1},
    {"rat_sgn",                 G0W1,     CC_rat_sgn,G2W1,    G3W1,     G4W1},
    {"anform",                  G0W1,     CC_anform,G2W1,     G3W1,     G4W1},
    {"praddf",                  G0W2,     G1W2,     CC_praddf,G3W2,     G4W2},
    {"tayexp-plus2",            G0W2,     G1W2,     CC_tayexpKplus2,G3W2,G4W2},
    {"tmsf*",                   G0W1,     CC_tmsfH, G2W1,     G3W1,     G4W1},
    {"cl_smrmknowl",            G0W2,     G1W2,     CC_cl_smrmknowl,G3W2,G4W2},
    {"isvalid",                 G0W1,     CC_isvalid,G2W1,    G3W1,     G4W1},
    {"revlis",                  G0W1,     CC_revlis,G2W1,     G3W1,     G4W1},
    {"rmsubs",                  CC_rmsubs,G1W0,     G2W0,     G3W0,     G4W0},
    {"getroad",                 G0W2,     G1W2,     CC_getroad,G3W2,    G4W2},
    {"expdrmacro",              G0W1,     CC_expdrmacro,G2W1, G3W1,     G4W1},
    {"mo=degcomp",              G0W2,     G1W2,     CC_moMdegcomp,G3W2, G4W2},
    {"dquot",                   G0W2,     G1W2,     CC_dquot, G3W2,     G4W2},
    {"insert_pv",               G0W2,     G1W2,     CC_insert_pv,G3W2,  G4W2},
    {"noncomp1",                G0W1,     CC_noncomp1,G2W1,   G3W1,     G4W1},
    {"rntimes:",                G0W2,     G1W2,     CC_rntimesT,G3W2,   G4W2},
    {"noncomdel",               G0W2,     G1W2,     CC_noncomdel,G3W2,  G4W2},
    {"frvarsof",                G0W2,     G1W2,     CC_frvarsof,G3W2,   G4W2},
    {"orderactions",            G0W2,     G1W2,     CC_orderactions,G3W2,G4W2},
    {"ofsf_clnegrel",           G0W2,     G1W2,     CC_ofsf_clnegrel,G3W2,G4W2},
    {"quotf1",                  G0W2,     G1W2,     CC_quotf1,G3W2,     G4W2},
    {"remove-free-vars",        G0W1,     CC_removeKfreeKvars,G2W1,G3W1,G4W1},
    {"tayexp-minusp",           G0W1,     CC_tayexpKminusp,G2W1,G3W1,   G4W1},
    {"subs2",                   G0W1,     CC_subs2, G2W1,     G3W1,     G4W1},
    {"mri_floorp",              G0W1,     CC_mri_floorp,G2W1, G3W1,     G4W1},
    {"xxsort",                  G0W1,     CC_xxsort,G2W1,     G3W1,     G4W1},
    {"lambda_qrvi5bym67r22",    G0W2,     G1W2,     CC_lambda_qrvi5bym67r22,G3W2,G4W2},
    {nullptr, 
        reinterpret_cast<no_args *>(
            reinterpret_cast<uintptr_t>("u04")),
        reinterpret_cast<one_arg *>(
            reinterpret_cast<uintptr_t>("127950 6638866 7359898")),
        nullptr, nullptr, nullptr}
};

// end of generated code
