
// $destdir/u15.c        Machine generated C code

// $Id$

#include "config.h"
#include "headers.h"



// Code for diff!-over!-k!-mod!-p

static LispObject CC_diffKoverKkKmodKp(LispObject env,
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
    v_112 = stack[-2];
    if (!consp(v_112)) goto v_12;
    else goto v_13;
v_12:
    v_112 = lisp_true;
    goto v_11;
v_13:
    v_112 = stack[-2];
    if (!car_legal(v_112)) v_112 = carerror(v_112); else
    v_112 = car(v_112);
    v_112 = (consp(v_112) ? nil : lisp_true);
    goto v_11;
    v_112 = nil;
v_11:
    if (v_112 == nil) goto v_9;
    v_112 = nil;
    goto v_7;
v_9:
    v_112 = stack[-2];
    if (!car_legal(v_112)) v_112 = carerror(v_112); else
    v_112 = car(v_112);
    if (!car_legal(v_112)) v_112 = carerror(v_112); else
    v_112 = car(v_112);
    if (!car_legal(v_112)) v_113 = carerror(v_112); else
    v_113 = car(v_112);
    v_112 = stack[0];
    if (equal(v_113, v_112)) goto v_22;
    else goto v_23;
v_22:
    v_112 = stack[-2];
    if (!car_legal(v_112)) v_112 = carerror(v_112); else
    v_112 = car(v_112);
    if (!car_legal(v_112)) v_112 = carerror(v_112); else
    v_112 = car(v_112);
    if (!car_legal(v_112)) v_113 = cdrerror(v_112); else
    v_113 = cdr(v_112);
    v_112 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_113 == v_112) goto v_31;
    else goto v_32;
v_31:
    v_112 = stack[-2];
    if (!car_legal(v_112)) v_112 = carerror(v_112); else
    v_112 = car(v_112);
    if (!car_legal(v_112)) stack[0] = cdrerror(v_112); else
    stack[0] = cdr(v_112);
    v_112 = stack[-1];
    v_112 = Lmodular_number(nil, v_112);
    env = stack[-4];
    {
        LispObject v_119 = stack[0];
        LispObject fn = basic_elt(env, 1); // quotfail!-mod!-p
        return (*qfn2(fn))(fn, v_119, v_112);
    }
v_32:
    v_112 = stack[-2];
    if (!car_legal(v_112)) v_112 = carerror(v_112); else
    v_112 = car(v_112);
    if (!car_legal(v_112)) v_112 = carerror(v_112); else
    v_112 = car(v_112);
    if (!car_legal(v_112)) v_112 = cdrerror(v_112); else
    v_112 = cdr(v_112);
    v_113 = Lmodular_number(nil, v_112);
    env = stack[-4];
    v_112 = stack[-2];
    if (!car_legal(v_112)) v_112 = carerror(v_112); else
    v_112 = car(v_112);
    if (!car_legal(v_112)) v_112 = cdrerror(v_112); else
    v_112 = cdr(v_112);
    {   LispObject fn = basic_elt(env, 2); // times!-mod!-p
    stack[-3] = (*qfn2(fn))(fn, v_113, v_112);
    }
    env = stack[-4];
    v_112 = stack[-1];
    v_112 = Lmodular_number(nil, v_112);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 1); // quotfail!-mod!-p
    stack[-3] = (*qfn2(fn))(fn, stack[-3], v_112);
    }
    env = stack[-4];
    v_112 = stack[-2];
    if (!car_legal(v_112)) v_114 = cdrerror(v_112); else
    v_114 = cdr(v_112);
    v_113 = stack[-1];
    v_112 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // diff!-over!-k!-mod!-p
    v_112 = (*qfn3(fn))(fn, v_114, v_113, v_112);
    }
    env = stack[-4];
    stack[-1] = v_112;
    v_112 = stack[-3];
    if (v_112 == nil) goto v_67;
    else goto v_68;
v_67:
    v_112 = stack[-1];
    goto v_66;
v_68:
    v_113 = stack[0];
    v_112 = stack[-2];
    if (!car_legal(v_112)) v_112 = carerror(v_112); else
    v_112 = car(v_112);
    if (!car_legal(v_112)) v_112 = carerror(v_112); else
    v_112 = car(v_112);
    if (!car_legal(v_112)) v_112 = cdrerror(v_112); else
    v_112 = cdr(v_112);
    v_112 = static_cast<LispObject>(static_cast<std::intptr_t>(v_112) - 0x10);
    {   LispObject fn = basic_elt(env, 3); // mksp
    v_114 = (*qfn2(fn))(fn, v_113, v_112);
    }
    v_113 = stack[-3];
    v_112 = stack[-1];
    return acons(v_114, v_113, v_112);
    v_112 = nil;
v_66:
    goto v_30;
    v_112 = nil;
v_30:
    goto v_7;
v_23:
    v_112 = stack[-2];
    if (!car_legal(v_112)) v_112 = carerror(v_112); else
    v_112 = car(v_112);
    if (!car_legal(v_112)) v_114 = cdrerror(v_112); else
    v_114 = cdr(v_112);
    v_113 = stack[-1];
    v_112 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // diff!-over!-k!-mod!-p
    stack[-3] = (*qfn3(fn))(fn, v_114, v_113, v_112);
    }
    env = stack[-4];
    v_112 = stack[-2];
    if (!car_legal(v_112)) v_114 = cdrerror(v_112); else
    v_114 = cdr(v_112);
    v_113 = stack[-1];
    v_112 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // diff!-over!-k!-mod!-p
    v_112 = (*qfn3(fn))(fn, v_114, v_113, v_112);
    }
    v_113 = stack[-3];
    v_114 = v_113;
    if (v_114 == nil) goto v_100;
    else goto v_101;
v_100:
    goto v_99;
v_101:
    v_114 = stack[-2];
    if (!car_legal(v_114)) v_114 = carerror(v_114); else
    v_114 = car(v_114);
    if (!car_legal(v_114)) v_114 = carerror(v_114); else
    v_114 = car(v_114);
    return acons(v_114, v_113, v_112);
    v_112 = nil;
v_99:
    goto v_7;
    v_112 = nil;
v_7:
    return onevalue(v_112);
}



// Code for c!:subs2multf

static LispObject CC_cTsubs2multf(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_32 = v_3;
    v_33 = v_2;
// end of prologue
    v_31 = qvalue(basic_elt(env, 1)); // !*sub2
// Binding !*sub2
// FLUIDBIND: reloadenv=1 litvec-offset=1 saveloc=0
{   bind_fluid_stack bind_fluid_var(-1, 1, 0);
    setvalue(basic_elt(env, 1), v_31); // !*sub2
    v_31 = v_33;
    {   LispObject fn = basic_elt(env, 4); // multf
    v_32 = (*qfn2(fn))(fn, v_31, v_32);
    }
    env = stack[-1];
    v_31 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_31 = cons(v_32, v_31);
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 5); // subs2
    v_31 = (*qfn1(fn))(fn, v_31);
    }
    env = stack[-1];
    v_33 = v_31;
    v_31 = v_33;
    if (!car_legal(v_31)) v_32 = cdrerror(v_31); else
    v_32 = cdr(v_31);
    v_31 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_32 == v_31) goto v_18;
    v_33 = basic_elt(env, 2); // matrix
    v_32 = static_cast<LispObject>(224)+TAG_FIXNUM; // 14
    v_31 = basic_elt(env, 3); // "Sub error in glnrsolve"
    {   LispObject fn = basic_elt(env, 6); // rerror
    v_31 = (*qfn3(fn))(fn, v_33, v_32, v_31);
    }
    goto v_16;
v_18:
    v_31 = v_33;
    if (!car_legal(v_31)) v_31 = carerror(v_31); else
    v_31 = car(v_31);
    goto v_16;
    v_31 = nil;
v_16:
    ;}  // end of a binding scope
    return onevalue(v_31);
}



// Code for testredh

static LispObject CC_testredh(LispObject env,
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
    stack[-1] = qvalue(basic_elt(env, 1)); // codmat
    v_33 = qvalue(basic_elt(env, 2)); // maxvar
    v_32 = stack[0];
    v_32 = plus2(v_33, v_32);
    env = stack[-2];
    v_33 = Lgetv(nil, stack[-1], v_32);
    env = stack[-2];
    v_32 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_32 = Lgetv(nil, v_33, v_32);
    env = stack[-2];
    if (v_32 == nil) goto v_7;
    stack[-1] = qvalue(basic_elt(env, 1)); // codmat
    v_33 = qvalue(basic_elt(env, 2)); // maxvar
    v_32 = stack[0];
    v_32 = plus2(v_33, v_32);
    env = stack[-2];
    v_33 = Lgetv(nil, stack[-1], v_32);
    env = stack[-2];
    v_32 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_32 = Lgetv(nil, v_33, v_32);
    env = stack[-2];
    if (!car_legal(v_32)) v_32 = carerror(v_32); else
    v_32 = car(v_32);
    if (!car_legal(v_32)) v_33 = carerror(v_32); else
    v_33 = car(v_32);
    v_32 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_32 = static_cast<LispObject>(lessp2(v_33, v_32));
    v_32 = v_32 ? lisp_true : nil;
    env = stack[-2];
    if (v_32 == nil) goto v_7;
    v_32 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // rowdel
    v_32 = (*qfn1(fn))(fn, v_32);
    }
    env = stack[-2];
    v_32 = stack[0];
    {
        LispObject fn = basic_elt(env, 4); // testredzz
        return (*qfn1(fn))(fn, v_32);
    }
v_7:
    v_32 = nil;
    return onevalue(v_32);
}



// Code for getcomb

static LispObject CC_getcomb(LispObject env,
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
    v_28 = v_3;
    stack[0] = v_2;
// end of prologue
    v_29 = v_28;
    v_28 = qvalue(basic_elt(env, 1)); // i
    {   LispObject fn = basic_elt(env, 3); // nextcomb
    v_28 = (*qfn2(fn))(fn, v_29, v_28);
    }
    env = stack[-2];
    setvalue(basic_elt(env, 2), v_28); // comb
    v_28 = qvalue(basic_elt(env, 2)); // comb
    if (!car_legal(v_28)) v_28 = carerror(v_28); else
    v_28 = car(v_28);
    v_29 = qvalue(basic_elt(env, 2)); // comb
    if (!car_legal(v_29)) v_29 = cdrerror(v_29); else
    v_29 = cdr(v_29);
    setvalue(basic_elt(env, 2), v_29); // comb
    v_29 = v_28;
    if (v_29 == nil) goto v_18;
    stack[-1] = v_28;
    v_29 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // setdiff
    v_28 = (*qfn2(fn))(fn, v_29, v_28);
    }
    {
        LispObject v_32 = stack[-1];
        return cons(v_32, v_28);
    }
v_18:
    v_28 = nil;
    goto v_16;
    v_28 = nil;
v_16:
    return onevalue(v_28);
}



// Code for bc2a

static LispObject CC_bc2a(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_14, v_15;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_15 = v_2;
// end of prologue
    v_14 = qvalue(basic_elt(env, 1)); // !*grmod!*
    if (v_14 == nil) goto v_7;
    v_14 = v_15;
    goto v_5;
v_7:
    v_14 = v_15;
    {
        LispObject fn = basic_elt(env, 2); // prepsq
        return (*qfn1(fn))(fn, v_14);
    }
    v_14 = nil;
v_5:
    return onevalue(v_14);
}



// Code for lid

static LispObject CC_lid(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_14, v_15;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_14 = v_2;
// end of prologue
    v_15 = v_14;
    if (!consp(v_15)) goto v_6;
    else goto v_7;
v_6:
    goto v_5;
v_7:
    if (!car_legal(v_14)) v_14 = carerror(v_14); else
    v_14 = car(v_14);
    goto v_5;
    v_14 = nil;
v_5:
    return onevalue(v_14);
}



// Code for list!+list

static LispObject CC_listLlist(LispObject env,
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
    {   LispObject fn = basic_elt(env, 2); // !:plus
    v_30 = (*qfn2(fn))(fn, v_30, v_29);
    }
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



// Code for physop!-multf

static LispObject CC_physopKmultf(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_260, v_261, v_262;
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
v_9:
    v_260 = stack[-2];
    if (v_260 == nil) goto v_16;
    else goto v_17;
v_16:
    v_260 = lisp_true;
    goto v_15;
v_17:
    v_260 = stack[-1];
    v_260 = (v_260 == nil ? lisp_true : nil);
    goto v_15;
    v_260 = nil;
v_15:
    if (v_260 == nil) goto v_13;
    v_260 = nil;
    goto v_8;
v_13:
    v_261 = stack[-2];
    v_260 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_261 == v_260) goto v_25;
    else goto v_26;
v_25:
    v_260 = stack[-1];
    goto v_8;
v_26:
    v_261 = stack[-1];
    v_260 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_261 == v_260) goto v_30;
    else goto v_31;
v_30:
    v_260 = stack[-2];
    goto v_8;
v_31:
    v_260 = stack[-2];
    if (!consp(v_260)) goto v_39;
    else goto v_40;
v_39:
    v_260 = lisp_true;
    goto v_38;
v_40:
    v_260 = stack[-2];
    if (!car_legal(v_260)) v_260 = carerror(v_260); else
    v_260 = car(v_260);
    v_260 = (consp(v_260) ? nil : lisp_true);
    goto v_38;
    v_260 = nil;
v_38:
    if (v_260 == nil) goto v_36;
    v_261 = stack[-2];
    v_260 = stack[-1];
    {
        LispObject fn = basic_elt(env, 8); // multd
        return (*qfn2(fn))(fn, v_261, v_260);
    }
v_36:
    v_260 = stack[-1];
    if (!consp(v_260)) goto v_55;
    else goto v_56;
v_55:
    v_260 = lisp_true;
    goto v_54;
v_56:
    v_260 = stack[-1];
    if (!car_legal(v_260)) v_260 = carerror(v_260); else
    v_260 = car(v_260);
    v_260 = (consp(v_260) ? nil : lisp_true);
    goto v_54;
    v_260 = nil;
v_54:
    if (v_260 == nil) goto v_52;
    v_261 = stack[-1];
    v_260 = stack[-2];
    {
        LispObject fn = basic_elt(env, 8); // multd
        return (*qfn2(fn))(fn, v_261, v_260);
    }
v_52:
    v_260 = qvalue(basic_elt(env, 1)); // !*exp
    if (v_260 == nil) goto v_69;
    else goto v_68;
v_69:
    v_260 = qvalue(basic_elt(env, 2)); // ncmp!*
    if (v_260 == nil) goto v_72;
    else goto v_68;
v_72:
    v_260 = qvalue(basic_elt(env, 3)); // wtl!*
    if (v_260 == nil) goto v_75;
    else goto v_68;
v_75:
    v_260 = stack[-3];
    if (v_260 == nil) goto v_77;
    else goto v_68;
v_77:
    v_260 = stack[-2];
    {   LispObject fn = basic_elt(env, 9); // mkprod
    v_260 = (*qfn1(fn))(fn, v_260);
    }
    env = stack[-4];
    stack[-2] = v_260;
    v_260 = stack[-1];
    {   LispObject fn = basic_elt(env, 9); // mkprod
    v_260 = (*qfn1(fn))(fn, v_260);
    }
    env = stack[-4];
    stack[-1] = v_260;
    v_260 = lisp_true;
    stack[-3] = v_260;
    goto v_9;
v_68:
    v_260 = stack[-2];
    if (!car_legal(v_260)) v_260 = carerror(v_260); else
    v_260 = car(v_260);
    if (!car_legal(v_260)) v_260 = carerror(v_260); else
    v_260 = car(v_260);
    if (!car_legal(v_260)) v_260 = carerror(v_260); else
    v_260 = car(v_260);
    stack[-3] = v_260;
    v_260 = stack[-1];
    if (!car_legal(v_260)) v_260 = carerror(v_260); else
    v_260 = car(v_260);
    if (!car_legal(v_260)) v_260 = carerror(v_260); else
    v_260 = car(v_260);
    if (!car_legal(v_260)) v_260 = carerror(v_260); else
    v_260 = car(v_260);
    stack[0] = v_260;
    v_260 = stack[-1];
    {   LispObject fn = basic_elt(env, 10); // noncomp2f
    v_260 = (*qfn1(fn))(fn, v_260);
    }
    env = stack[-4];
    if (v_260 == nil) goto v_95;
    v_260 = stack[-3];
    if (!consp(v_260)) goto v_103;
    else goto v_104;
v_103:
    v_260 = stack[-3];
    if (!symbolp(v_260)) v_260 = nil;
    else { v_260 = qfastgets(v_260);
           if (v_260 != nil) { v_260 = elt(v_260, 0); // noncom
#ifdef RECORD_GET
             if (v_260 == SPID_NOPROP)
                record_get(elt(fastget_names, 0), 0),
                v_260 = nil;
             else record_get(elt(fastget_names, 0), 1),
                v_260 = lisp_true; }
           else record_get(elt(fastget_names, 0), 0); }
#else
             if (v_260 == SPID_NOPROP) v_260 = nil; else v_260 = lisp_true; }}
#endif
    goto v_102;
v_104:
    v_260 = stack[-3];
    if (!car_legal(v_260)) v_260 = carerror(v_260); else
    v_260 = car(v_260);
    if (!symbolp(v_260)) v_260 = nil;
    else { v_260 = qfastgets(v_260);
           if (v_260 != nil) { v_260 = elt(v_260, 0); // noncom
#ifdef RECORD_GET
             if (v_260 == SPID_NOPROP)
                record_get(elt(fastget_names, 0), 0),
                v_260 = nil;
             else record_get(elt(fastget_names, 0), 1),
                v_260 = lisp_true; }
           else record_get(elt(fastget_names, 0), 0); }
#else
             if (v_260 == SPID_NOPROP) v_260 = nil; else v_260 = lisp_true; }}
#endif
    goto v_102;
    v_260 = nil;
v_102:
    if (v_260 == nil) goto v_100;
    else goto v_99;
v_100:
    v_260 = qvalue(basic_elt(env, 4)); // !*!*processed
    if (v_260 == nil) goto v_99;
    goto v_95;
v_99:
    v_261 = stack[-2];
    v_260 = stack[-1];
    {
        LispObject fn = basic_elt(env, 11); // physop!-multfnc
        return (*qfn2(fn))(fn, v_261, v_260);
    }
v_95:
    v_261 = stack[-3];
    v_260 = stack[0];
    {   LispObject fn = basic_elt(env, 12); // physop!-ordop
    v_260 = (*qfn2(fn))(fn, v_261, v_260);
    }
    env = stack[-4];
    if (v_260 == nil) goto v_119;
    v_261 = stack[-3];
    v_260 = stack[0];
    if (equal(v_261, v_260)) goto v_119;
    v_260 = stack[-2];
    if (!car_legal(v_260)) v_260 = carerror(v_260); else
    v_260 = car(v_260);
    if (!car_legal(v_260)) v_261 = cdrerror(v_260); else
    v_261 = cdr(v_260);
    v_260 = stack[-1];
    {   LispObject fn = basic_elt(env, 0); // physop!-multf
    v_260 = (*qfn2(fn))(fn, v_261, v_260);
    }
    env = stack[-4];
    stack[-3] = v_260;
    v_260 = stack[-2];
    if (!car_legal(v_260)) v_261 = cdrerror(v_260); else
    v_261 = cdr(v_260);
    v_260 = stack[-1];
    {   LispObject fn = basic_elt(env, 0); // physop!-multf
    v_260 = (*qfn2(fn))(fn, v_261, v_260);
    }
    stack[0] = v_260;
    v_260 = stack[-3];
    if (v_260 == nil) goto v_138;
    else goto v_139;
v_138:
    v_260 = stack[0];
    goto v_137;
v_139:
    v_260 = stack[-2];
    if (!car_legal(v_260)) v_260 = carerror(v_260); else
    v_260 = car(v_260);
    if (!car_legal(v_260)) v_262 = carerror(v_260); else
    v_262 = car(v_260);
    v_261 = stack[-3];
    v_260 = stack[0];
    return acons(v_262, v_261, v_260);
    v_260 = nil;
v_137:
    goto v_8;
v_119:
    v_261 = stack[-3];
    v_260 = stack[0];
    if (equal(v_261, v_260)) goto v_154;
    else goto v_155;
v_154:
    v_260 = stack[-3];
    {   LispObject fn = basic_elt(env, 13); // physopp
    v_260 = (*qfn1(fn))(fn, v_260);
    }
    env = stack[-4];
    if (v_260 == nil) goto v_160;
    else goto v_161;
v_160:
    v_260 = lisp_true;
    goto v_159;
v_161:
    v_260 = qvalue(basic_elt(env, 5)); // !*contract2
    goto v_159;
    v_260 = nil;
v_159:
    goto v_153;
v_155:
    v_260 = nil;
    goto v_153;
    v_260 = nil;
v_153:
    if (v_260 == nil) goto v_151;
    stack[0] = stack[-3];
    v_260 = stack[-2];
    if (!car_legal(v_260)) v_260 = carerror(v_260); else
    v_260 = car(v_260);
    if (!car_legal(v_260)) v_260 = carerror(v_260); else
    v_260 = car(v_260);
    if (!car_legal(v_260)) v_261 = cdrerror(v_260); else
    v_261 = cdr(v_260);
    v_260 = stack[-1];
    if (!car_legal(v_260)) v_260 = carerror(v_260); else
    v_260 = car(v_260);
    if (!car_legal(v_260)) v_260 = carerror(v_260); else
    v_260 = car(v_260);
    if (!car_legal(v_260)) v_260 = cdrerror(v_260); else
    v_260 = cdr(v_260);
    v_260 = plus2(v_261, v_260);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 14); // mkspm
    v_260 = (*qfn2(fn))(fn, stack[0], v_260);
    }
    env = stack[-4];
    stack[-3] = v_260;
    v_260 = stack[-2];
    if (!car_legal(v_260)) v_261 = cdrerror(v_260); else
    v_261 = cdr(v_260);
    v_260 = stack[-1];
    {   LispObject fn = basic_elt(env, 0); // physop!-multf
    stack[0] = (*qfn2(fn))(fn, v_261, v_260);
    }
    env = stack[-4];
    v_260 = stack[-2];
    if (!car_legal(v_260)) v_260 = carerror(v_260); else
    v_260 = car(v_260);
    v_261 = ncons(v_260);
    env = stack[-4];
    v_260 = stack[-1];
    if (!car_legal(v_260)) v_260 = cdrerror(v_260); else
    v_260 = cdr(v_260);
    {   LispObject fn = basic_elt(env, 0); // physop!-multf
    v_260 = (*qfn2(fn))(fn, v_261, v_260);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 15); // addf
    v_260 = (*qfn2(fn))(fn, stack[0], v_260);
    }
    env = stack[-4];
    stack[0] = v_260;
    v_260 = stack[-3];
    if (v_260 == nil) goto v_199;
    else goto v_200;
v_199:
    v_260 = lisp_true;
    goto v_198;
v_200:
    v_260 = stack[-2];
    if (!car_legal(v_260)) v_260 = carerror(v_260); else
    v_260 = car(v_260);
    if (!car_legal(v_260)) v_261 = cdrerror(v_260); else
    v_261 = cdr(v_260);
    v_260 = stack[-1];
    if (!car_legal(v_260)) v_260 = carerror(v_260); else
    v_260 = car(v_260);
    if (!car_legal(v_260)) v_260 = cdrerror(v_260); else
    v_260 = cdr(v_260);
    {   LispObject fn = basic_elt(env, 0); // physop!-multf
    v_260 = (*qfn2(fn))(fn, v_261, v_260);
    }
    env = stack[-4];
    stack[-2] = v_260;
    v_260 = (v_260 == nil ? lisp_true : nil);
    goto v_198;
    v_260 = nil;
v_198:
    if (v_260 == nil) goto v_196;
    v_260 = lisp_true;
    setvalue(basic_elt(env, 6), v_260); // !*asymp!*
    v_260 = stack[0];
    goto v_194;
v_196:
    v_261 = stack[-3];
    v_260 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_261 == v_260) goto v_215;
    else goto v_216;
v_215:
    v_261 = stack[-2];
    v_260 = stack[0];
    {
        LispObject fn = basic_elt(env, 15); // addf
        return (*qfn2(fn))(fn, v_261, v_260);
    }
v_216:
    v_260 = qvalue(basic_elt(env, 7)); // !*mcd
    if (v_260 == nil) goto v_222;
    else goto v_223;
v_222:
    v_261 = stack[-3];
    v_260 = stack[-2];
    v_260 = cons(v_261, v_260);
    env = stack[-4];
    v_261 = ncons(v_260);
    env = stack[-4];
    v_260 = stack[0];
    {
        LispObject fn = basic_elt(env, 15); // addf
        return (*qfn2(fn))(fn, v_261, v_260);
    }
v_223:
    v_262 = stack[-3];
    v_261 = stack[-2];
    v_260 = stack[0];
    return acons(v_262, v_261, v_260);
    v_260 = nil;
v_194:
    goto v_8;
v_151:
    v_261 = stack[-2];
    v_260 = stack[-1];
    if (!car_legal(v_260)) v_260 = carerror(v_260); else
    v_260 = car(v_260);
    if (!car_legal(v_260)) v_260 = cdrerror(v_260); else
    v_260 = cdr(v_260);
    {   LispObject fn = basic_elt(env, 0); // physop!-multf
    v_260 = (*qfn2(fn))(fn, v_261, v_260);
    }
    env = stack[-4];
    stack[-3] = v_260;
    v_261 = stack[-2];
    v_260 = stack[-1];
    if (!car_legal(v_260)) v_260 = cdrerror(v_260); else
    v_260 = cdr(v_260);
    {   LispObject fn = basic_elt(env, 0); // physop!-multf
    v_260 = (*qfn2(fn))(fn, v_261, v_260);
    }
    stack[0] = v_260;
    v_260 = stack[-3];
    if (v_260 == nil) goto v_248;
    else goto v_249;
v_248:
    v_260 = stack[0];
    goto v_247;
v_249:
    v_260 = stack[-1];
    if (!car_legal(v_260)) v_260 = carerror(v_260); else
    v_260 = car(v_260);
    if (!car_legal(v_260)) v_262 = carerror(v_260); else
    v_262 = car(v_260);
    v_261 = stack[-3];
    v_260 = stack[0];
    return acons(v_262, v_261, v_260);
    v_260 = nil;
v_247:
v_8:
    return onevalue(v_260);
}



// Code for form

static LispObject CC_form(LispObject env,
                         LispObject v_2)
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
        push(v_2);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_85 = v_2;
// end of prologue
    v_84 = v_85;
    if (!consp(v_84)) goto v_11;
    v_84 = v_85;
    if (!car_legal(v_84)) v_86 = carerror(v_84); else
    v_86 = car(v_84);
    v_84 = basic_elt(env, 1); // always_nform
    v_84 = Lflagp(nil, v_86, v_84);
    env = stack[0];
    goto v_9;
v_11:
    v_84 = nil;
    goto v_9;
    v_84 = nil;
v_9:
    if (v_84 == nil) goto v_7;
    v_84 = v_85;
    {
        LispObject fn = basic_elt(env, 9); // n_form
        return (*qfn1(fn))(fn, v_84);
    }
v_7:
    v_84 = qvalue(basic_elt(env, 2)); // !*rlisp88
    if (v_84 == nil) goto v_22;
    else goto v_23;
v_22:
    v_86 = v_85;
    v_85 = qvalue(basic_elt(env, 3)); // !*vars!*
    v_84 = qvalue(basic_elt(env, 4)); // !*mode
    {
        LispObject fn = basic_elt(env, 10); // form1
        return (*qfn3(fn))(fn, v_86, v_85, v_84);
    }
v_23:
    v_86 = qvalue(basic_elt(env, 4)); // !*mode
    v_84 = basic_elt(env, 5); // symbolic
    if (v_86 == v_84) goto v_34;
    v_84 = lisp_true;
    goto v_32;
v_34:
    v_84 = v_85;
    if (!symbolp(v_84)) v_84 = nil;
    else { v_84 = qfastgets(v_84);
           if (v_84 != nil) { v_84 = elt(v_84, 48); // modefn
#ifdef RECORD_GET
             if (v_84 == SPID_NOPROP)
                record_get(elt(fastget_names, 48), 0),
                v_84 = nil;
             else record_get(elt(fastget_names, 48), 1),
                v_84 = lisp_true; }
           else record_get(elt(fastget_names, 48), 0); }
#else
             if (v_84 == SPID_NOPROP) v_84 = nil; else v_84 = lisp_true; }}
#endif
    if (v_84 == nil) goto v_47;
    v_86 = v_85;
    v_84 = basic_elt(env, 5); // symbolic
    v_84 = (v_86 == v_84 ? lisp_true : nil);
    v_84 = (v_84 == nil ? lisp_true : nil);
    goto v_45;
v_47:
    v_84 = nil;
    goto v_45;
    v_84 = nil;
v_45:
    if (v_84 == nil) goto v_43;
    v_84 = lisp_true;
    goto v_41;
v_43:
    v_86 = v_85;
    v_84 = basic_elt(env, 6); // modefn
    v_84 = Lflagpcar(nil, v_86, v_84);
    env = stack[0];
    if (v_84 == nil) goto v_62;
    else goto v_63;
v_62:
    v_84 = nil;
    goto v_61;
v_63:
    v_84 = v_85;
    if (!car_legal(v_84)) v_86 = carerror(v_84); else
    v_86 = car(v_84);
    v_84 = basic_elt(env, 5); // symbolic
    v_84 = (v_86 == v_84 ? lisp_true : nil);
    v_84 = (v_84 == nil ? lisp_true : nil);
    goto v_61;
    v_84 = nil;
v_61:
    goto v_41;
    v_84 = nil;
v_41:
    goto v_32;
    v_84 = nil;
v_32:
    if (v_84 == nil) goto v_30;
    v_85 = basic_elt(env, 7); // "algebraic expression"
    v_84 = basic_elt(env, 8); // "Rlisp88 form"
    {
        LispObject fn = basic_elt(env, 11); // typerr
        return (*qfn2(fn))(fn, v_85, v_84);
    }
v_30:
    v_86 = v_85;
    v_85 = qvalue(basic_elt(env, 3)); // !*vars!*
    v_84 = qvalue(basic_elt(env, 4)); // !*mode
    {
        LispObject fn = basic_elt(env, 10); // form1
        return (*qfn3(fn))(fn, v_86, v_85, v_84);
    }
    v_84 = nil;
    return onevalue(v_84);
}



// Code for lengthcdr

static LispObject CC_lengthcdr(LispObject env,
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
        return Llength(nil, v_7);
}



// Code for mo_neworder

static LispObject CC_mo_neworder(LispObject env,
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
// space for vars preserved across procedure calls
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    v_12 = v_2;
// end of prologue
    if (!car_legal(v_12)) v_12 = carerror(v_12); else
    v_12 = car(v_12);
    {   LispObject fn = basic_elt(env, 1); // mo!=shorten
    v_12 = (*qfn1(fn))(fn, v_12);
    }
    env = stack[-1];
    stack[0] = v_12;
    {   LispObject fn = basic_elt(env, 2); // mo!=deglist
    v_12 = (*qfn1(fn))(fn, v_12);
    }
    {
        LispObject v_14 = stack[0];
        return cons(v_14, v_12);
    }
}



// Code for dl_get2

static LispObject CC_dl_get2(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    v_32 = v_3;
    v_33 = v_2;
// end of prologue
v_8:
    v_34 = v_33;
    if (v_34 == nil) goto v_11;
    else goto v_12;
v_11:
    goto v_7;
v_12:
    v_34 = v_33;
    if (!car_legal(v_34)) v_34 = carerror(v_34); else
    v_34 = car(v_34);
    if (!symbolp(v_34)) v_34 = nil;
    else { v_34 = qfastgets(v_34);
           if (v_34 != nil) { v_34 = elt(v_34, 32); // dummy
#ifdef RECORD_GET
             if (v_34 != SPID_NOPROP)
                record_get(elt(fastget_names, 32), 1);
             else record_get(elt(fastget_names, 32), 0),
                v_34 = nil; }
           else record_get(elt(fastget_names, 32), 0); }
#else
             if (v_34 == SPID_NOPROP) v_34 = nil; }}
#endif
    if (v_34 == nil) goto v_16;
    v_34 = v_33;
    if (!car_legal(v_34)) v_34 = cdrerror(v_34); else
    v_34 = cdr(v_34);
    stack[0] = v_34;
    if (!car_legal(v_33)) v_34 = carerror(v_33); else
    v_34 = car(v_33);
    v_33 = v_32;
    v_32 = nil;
    {   LispObject fn = basic_elt(env, 1); // di_insert
    v_32 = (*qfn3(fn))(fn, v_34, v_33, v_32);
    }
    env = stack[-1];
    v_33 = stack[0];
    goto v_8;
v_16:
    if (!car_legal(v_33)) v_33 = cdrerror(v_33); else
    v_33 = cdr(v_33);
    goto v_8;
    v_32 = nil;
v_7:
    return onevalue(v_32);
}



// Code for general!-times!-mod!-p

static LispObject CC_generalKtimesKmodKp(LispObject env,
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
        LispObject fn = basic_elt(env, 1); // gen!-mult!-by!-const!-mod!-p
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
        LispObject fn = basic_elt(env, 1); // gen!-mult!-by!-const!-mod!-p
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
    {   LispObject fn = basic_elt(env, 2); // general!-times!-term!-mod!-p
    stack[-2] = (*qfn2(fn))(fn, v_142, v_141);
    }
    env = stack[-3];
    v_141 = stack[0];
    if (!car_legal(v_141)) v_142 = carerror(v_141); else
    v_142 = car(v_141);
    v_141 = stack[-1];
    if (!car_legal(v_141)) v_141 = cdrerror(v_141); else
    v_141 = cdr(v_141);
    {   LispObject fn = basic_elt(env, 2); // general!-times!-term!-mod!-p
    v_141 = (*qfn2(fn))(fn, v_142, v_141);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 3); // general!-plus!-mod!-p
    stack[-2] = (*qfn2(fn))(fn, stack[-2], v_141);
    }
    env = stack[-3];
    v_141 = stack[-1];
    if (!car_legal(v_141)) v_142 = cdrerror(v_141); else
    v_142 = cdr(v_141);
    v_141 = stack[0];
    if (!car_legal(v_141)) v_141 = cdrerror(v_141); else
    v_141 = cdr(v_141);
    {   LispObject fn = basic_elt(env, 0); // general!-times!-mod!-p
    v_141 = (*qfn2(fn))(fn, v_142, v_141);
    }
    env = stack[-3];
    {
        LispObject v_147 = stack[-2];
        LispObject fn = basic_elt(env, 3); // general!-plus!-mod!-p
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
    {   LispObject fn = basic_elt(env, 0); // general!-times!-mod!-p
    stack[-2] = (*qfn2(fn))(fn, v_142, v_141);
    }
    env = stack[-3];
    v_141 = stack[-1];
    if (!car_legal(v_141)) v_142 = cdrerror(v_141); else
    v_142 = cdr(v_141);
    v_141 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // general!-times!-mod!-p
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
    {   LispObject fn = basic_elt(env, 0); // general!-times!-mod!-p
    stack[-2] = (*qfn2(fn))(fn, v_142, v_141);
    }
    env = stack[-3];
    v_142 = stack[-1];
    v_141 = stack[0];
    if (!car_legal(v_141)) v_141 = cdrerror(v_141); else
    v_141 = cdr(v_141);
    {   LispObject fn = basic_elt(env, 0); // general!-times!-mod!-p
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



// Code for efface1

static LispObject CC_efface1(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_26, v_27, v_28, v_29;
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
    v_28 = v_3;
    v_29 = v_2;
// end of prologue
    v_26 = v_28;
    if (v_26 == nil) goto v_7;
    else goto v_8;
v_7:
    v_26 = nil;
    goto v_6;
v_8:
    v_27 = v_29;
    v_26 = v_28;
    if (!car_legal(v_26)) v_26 = carerror(v_26); else
    v_26 = car(v_26);
    if (v_27 == v_26) goto v_11;
    else goto v_12;
v_11:
    v_26 = v_28;
    if (!car_legal(v_26)) v_26 = cdrerror(v_26); else
    v_26 = cdr(v_26);
    goto v_6;
v_12:
    stack[0] = v_28;
    v_26 = v_29;
    v_27 = v_28;
    if (!car_legal(v_27)) v_27 = cdrerror(v_27); else
    v_27 = cdr(v_27);
    {   LispObject fn = basic_elt(env, 0); // efface1
    v_26 = (*qfn2(fn))(fn, v_26, v_27);
    }
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_26);
    v_26 = stack[0];
    goto v_6;
    v_26 = nil;
v_6:
    return onevalue(v_26);
}



// Code for rsubla

static LispObject CC_rsubla(LispObject env,
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
    v_49 = stack[-1];
    if (v_49 == nil) goto v_14;
    else goto v_15;
v_14:
    v_49 = lisp_true;
    goto v_13;
v_15:
    v_49 = stack[0];
    v_49 = (v_49 == nil ? lisp_true : nil);
    goto v_13;
    v_49 = nil;
v_13:
    if (v_49 == nil) goto v_11;
    v_49 = stack[0];
    goto v_7;
v_11:
    v_49 = stack[0];
    if (!consp(v_49)) goto v_23;
    else goto v_24;
v_23:
    v_50 = stack[0];
    v_49 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // rassoc
    v_49 = (*qfn2(fn))(fn, v_50, v_49);
    }
    v_50 = v_49;
    if (v_49 == nil) goto v_29;
    v_49 = v_50;
    if (!car_legal(v_49)) v_49 = carerror(v_49); else
    v_49 = car(v_49);
    goto v_27;
v_29:
    v_49 = stack[0];
    goto v_27;
    v_49 = nil;
v_27:
    goto v_7;
v_24:
    v_50 = stack[-1];
    v_49 = stack[0];
    if (!car_legal(v_49)) v_49 = carerror(v_49); else
    v_49 = car(v_49);
    {   LispObject fn = basic_elt(env, 0); // rsubla
    stack[-2] = (*qfn2(fn))(fn, v_50, v_49);
    }
    env = stack[-3];
    v_50 = stack[-1];
    v_49 = stack[0];
    if (!car_legal(v_49)) v_49 = cdrerror(v_49); else
    v_49 = cdr(v_49);
    {   LispObject fn = basic_elt(env, 0); // rsubla
    v_49 = (*qfn2(fn))(fn, v_50, v_49);
    }
    {
        LispObject v_54 = stack[-2];
        return cons(v_54, v_49);
    }
    v_49 = nil;
v_7:
    return onevalue(v_49);
}



// Code for cl_smsimpl!-junct

static LispObject CC_cl_smsimplKjunct(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_98, v_99, v_100, v_101;
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(10);
// copy arguments values to proper place
    stack[-5] = v_5;
    stack[-6] = v_4;
    stack[-1] = v_3;
    stack[-7] = v_2;
// end of prologue
    stack[-4] = nil;
    stack[-3] = nil;
    v_98 = qvalue(basic_elt(env, 1)); // !*rlsism
    if (v_98 == nil) goto v_16;
    else goto v_17;
v_16:
    stack[0] = stack[-1];
    stack[-1] = stack[-5];
    stack[-2] = stack[-7];
    v_98 = nil;
    v_98 = ncons(v_98);
    env = stack[-9];
    {
        LispObject v_111 = stack[0];
        LispObject v_112 = stack[-1];
        LispObject v_113 = stack[-2];
        LispObject fn = basic_elt(env, 4); // cl_gand!-col
        return (*qfn4up(fn))(fn, v_111, v_112, v_113, v_98);
    }
v_17:
    v_98 = stack[-6];
    {   LispObject fn = basic_elt(env, 5); // rl_smcpknowl
    v_98 = (*qfn1(fn))(fn, v_98);
    }
    env = stack[-9];
    stack[0] = v_98;
    v_100 = basic_elt(env, 2); // false
    v_99 = stack[-7];
    v_98 = basic_elt(env, 3); // and
    v_98 = (v_99 == v_98 ? lisp_true : nil);
    {   LispObject fn = basic_elt(env, 6); // cl_cflip
    v_98 = (*qfn2(fn))(fn, v_100, v_98);
    }
    env = stack[-9];
    stack[-8] = v_98;
    v_98 = stack[-1];
    stack[-2] = v_98;
v_35:
    v_98 = stack[-2];
    if (v_98 == nil) goto v_39;
    else goto v_40;
v_39:
    goto v_34;
v_40:
    v_98 = stack[-2];
    if (!car_legal(v_98)) v_98 = carerror(v_98); else
    v_98 = car(v_98);
    stack[-1] = v_98;
    v_98 = stack[-1];
    {   LispObject fn = basic_elt(env, 7); // cl_atfp
    v_98 = (*qfn1(fn))(fn, v_98);
    }
    env = stack[-9];
    if (v_98 == nil) goto v_49;
    v_99 = stack[-1];
    v_98 = stack[-7];
    {   LispObject fn = basic_elt(env, 8); // cl_simplat
    v_98 = (*qfn2(fn))(fn, v_99, v_98);
    }
    env = stack[-9];
    goto v_47;
v_49:
    v_98 = stack[-1];
    goto v_47;
    v_98 = nil;
v_47:
    stack[-1] = v_98;
    v_98 = stack[-1];
    {   LispObject fn = basic_elt(env, 7); // cl_atfp
    v_98 = (*qfn1(fn))(fn, v_98);
    }
    env = stack[-9];
    if (v_98 == nil) goto v_61;
    v_99 = stack[-1];
    v_98 = stack[-4];
    v_98 = cons(v_99, v_98);
    env = stack[-9];
    stack[-4] = v_98;
    goto v_59;
v_61:
    v_99 = stack[-1];
    v_98 = stack[-3];
    v_98 = cons(v_99, v_98);
    env = stack[-9];
    stack[-3] = v_98;
    goto v_59;
v_59:
    v_98 = stack[-2];
    if (!car_legal(v_98)) v_98 = cdrerror(v_98); else
    v_98 = cdr(v_98);
    stack[-2] = v_98;
    goto v_35;
v_34:
    stack[-2] = stack[-7];
    stack[-1] = stack[-4];
    v_98 = stack[-5];
    v_98 = ncons(v_98);
    env = stack[-9];
    {   LispObject fn = basic_elt(env, 9); // rl_smupdknowl
    v_98 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_98);
    }
    env = stack[-9];
    stack[0] = v_98;
    v_99 = stack[0];
    v_98 = basic_elt(env, 2); // false
    if (v_99 == v_98) goto v_82;
    else goto v_83;
v_82:
    v_98 = stack[-8];
    return ncons(v_98);
v_83:
    stack[-1] = stack[-7];
    stack[-2] = stack[-4];
    v_98 = stack[-3];
    stack[-3] = Lnreverse(nil, v_98);
    env = stack[-9];
    v_101 = stack[-6];
    v_100 = stack[0];
    v_99 = stack[-5];
    v_98 = stack[-8];
    v_98 = list4(v_101, v_100, v_99, v_98);
    env = stack[-9];
    {
        LispObject v_114 = stack[-1];
        LispObject v_115 = stack[-2];
        LispObject v_116 = stack[-3];
        LispObject fn = basic_elt(env, 10); // cl_smsimpl!-junct1
        return (*qfn4up(fn))(fn, v_114, v_115, v_116, v_98);
    }
    return onevalue(v_98);
}



// Code for sq2sspl

static LispObject CC_sq2sspl(LispObject env,
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
    stack[-2] = nil;
v_9:
    v_48 = stack[-1];
    if (!consp(v_48)) goto v_18;
    else goto v_19;
v_18:
    v_48 = lisp_true;
    goto v_17;
v_19:
    v_48 = stack[-1];
    if (!car_legal(v_48)) v_48 = carerror(v_48); else
    v_48 = car(v_48);
    v_48 = (consp(v_48) ? nil : lisp_true);
    goto v_17;
    v_48 = nil;
v_17:
    if (v_48 == nil) goto v_15;
    goto v_10;
v_15:
    v_48 = stack[-1];
    if (!car_legal(v_48)) v_49 = carerror(v_48); else
    v_49 = car(v_48);
    v_48 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // sq2sstm
    v_49 = (*qfn2(fn))(fn, v_49, v_48);
    }
    env = stack[-3];
    v_48 = stack[-2];
    v_48 = cons(v_49, v_48);
    env = stack[-3];
    stack[-2] = v_48;
    v_48 = stack[-1];
    if (!car_legal(v_48)) v_48 = cdrerror(v_48); else
    v_48 = cdr(v_48);
    stack[-1] = v_48;
    goto v_9;
v_10:
    v_48 = stack[-1];
    v_49 = v_48;
v_11:
    v_48 = stack[-2];
    if (v_48 == nil) goto v_38;
    else goto v_39;
v_38:
    v_48 = v_49;
    goto v_8;
v_39:
    v_48 = stack[-2];
    v_48 = car(v_48);
    v_48 = Lappend_2(nil, v_48, v_49);
    env = stack[-3];
    v_49 = v_48;
    v_48 = stack[-2];
    v_48 = cdr(v_48);
    stack[-2] = v_48;
    goto v_11;
v_8:
    return onevalue(v_48);
}



// Code for sq2sscfpl

static LispObject CC_sq2sscfpl(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_42 = stack[-1];
    if (v_42 == nil) goto v_7;
    else goto v_8;
v_7:
    v_42 = nil;
    goto v_6;
v_8:
    v_42 = stack[-1];
    if (!consp(v_42)) goto v_15;
    else goto v_16;
v_15:
    v_42 = lisp_true;
    goto v_14;
v_16:
    v_42 = stack[-1];
    if (!car_legal(v_42)) v_42 = carerror(v_42); else
    v_42 = car(v_42);
    v_42 = (consp(v_42) ? nil : lisp_true);
    goto v_14;
    v_42 = nil;
v_14:
    if (v_42 == nil) goto v_12;
    v_42 = stack[0];
    if (!car_legal(v_42)) v_42 = cdrerror(v_42); else
    v_42 = cdr(v_42);
    v_42 = add1(v_42);
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 1); // mkzl
    v_43 = (*qfn1(fn))(fn, v_42);
    }
    env = stack[-3];
    v_42 = stack[-1];
    v_42 = cons(v_43, v_42);
    return ncons(v_42);
v_12:
    v_42 = stack[-1];
    if (!car_legal(v_42)) v_43 = carerror(v_42); else
    v_43 = car(v_42);
    v_42 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // sq2sstm
    stack[-2] = (*qfn2(fn))(fn, v_43, v_42);
    }
    env = stack[-3];
    v_42 = stack[-1];
    if (!car_legal(v_42)) v_43 = cdrerror(v_42); else
    v_43 = cdr(v_42);
    v_42 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // sq2sscfpl
    v_42 = (*qfn2(fn))(fn, v_43, v_42);
    }
    {
        LispObject v_47 = stack[-2];
        return Lappend_2(nil, v_47, v_42);
    }
    v_42 = nil;
v_6:
    return onevalue(v_42);
}



// Code for horner!-rule!-mod!-p

static LispObject CC_hornerKruleKmodKp(LispObject env, LispObject v_2,
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
    {   LispObject fn = basic_elt(env, 1); // expt!-mod!-p
    v_108 = (*qfn2(fn))(fn, v_108, v_109);
    }
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 2); // times!-mod!-p
    v_108 = (*qfn2(fn))(fn, stack[0], v_108);
    }
    env = stack[-6];
    v_110 = v_108;
    v_108 = stack[-4];
    v_109 = v_110;
    {
        LispObject fn = basic_elt(env, 3); // plus!-mod!-p
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
    {   LispObject fn = basic_elt(env, 1); // expt!-mod!-p
    v_108 = (*qfn2(fn))(fn, v_110, v_108);
    }
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 2); // times!-mod!-p
    v_108 = (*qfn2(fn))(fn, stack[0], v_108);
    }
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 3); // plus!-mod!-p
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
        LispObject fn = basic_elt(env, 0); // horner!-rule!-mod!-p
        return (*qfn4up(fn))(fn, v_118, v_119, v_120, v_108);
    }
    goto v_9;
    v_108 = nil;
v_9:
    return onevalue(v_108);
}



// Code for downwght1

static LispObject CC_downwght1(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_88 = v_3;
    stack[-4] = v_2;
// end of prologue
    {   LispObject fn = basic_elt(env, 3); // dm!-abs
    v_88 = (*qfn1(fn))(fn, v_88);
    }
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 4); // !:onep
    v_88 = (*qfn1(fn))(fn, v_88);
    }
    env = stack[-6];
    if (v_88 == nil) goto v_7;
    else goto v_8;
v_7:
    stack[0] = qvalue(basic_elt(env, 1)); // codmat
    v_89 = qvalue(basic_elt(env, 2)); // maxvar
    v_88 = stack[-4];
    v_88 = plus2(v_89, v_88);
    env = stack[-6];
    stack[-5] = Lgetv(nil, stack[0], v_88);
    env = stack[-6];
    stack[-3] = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[0] = qvalue(basic_elt(env, 1)); // codmat
    v_89 = qvalue(basic_elt(env, 2)); // maxvar
    v_88 = stack[-4];
    v_88 = plus2(v_89, v_88);
    env = stack[-6];
    v_89 = Lgetv(nil, stack[0], v_88);
    env = stack[-6];
    v_88 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_88 = Lgetv(nil, v_89, v_88);
    env = stack[-6];
    if (!car_legal(v_88)) v_88 = carerror(v_88); else
    v_88 = car(v_88);
    if (!car_legal(v_88)) v_88 = carerror(v_88); else
    v_88 = car(v_88);
    stack[-2] = sub1(v_88);
    env = stack[-6];
    stack[0] = qvalue(basic_elt(env, 1)); // codmat
    v_89 = qvalue(basic_elt(env, 2)); // maxvar
    v_88 = stack[-4];
    v_88 = plus2(v_89, v_88);
    env = stack[-6];
    v_89 = Lgetv(nil, stack[0], v_88);
    env = stack[-6];
    v_88 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_88 = Lgetv(nil, v_89, v_88);
    env = stack[-6];
    if (!car_legal(v_88)) v_88 = carerror(v_88); else
    v_88 = car(v_88);
    if (!car_legal(v_88)) v_88 = cdrerror(v_88); else
    v_88 = cdr(v_88);
    stack[-1] = sub1(v_88);
    env = stack[-6];
    stack[0] = qvalue(basic_elt(env, 1)); // codmat
    v_89 = qvalue(basic_elt(env, 2)); // maxvar
    v_88 = stack[-4];
    v_88 = plus2(v_89, v_88);
    env = stack[-6];
    v_89 = Lgetv(nil, stack[0], v_88);
    env = stack[-6];
    v_88 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_88 = Lgetv(nil, v_89, v_88);
    env = stack[-6];
    if (!car_legal(v_88)) v_89 = cdrerror(v_88); else
    v_89 = cdr(v_88);
    v_88 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_88 = difference2(v_89, v_88);
    env = stack[-6];
    v_88 = acons(stack[-2], stack[-1], v_88);
    {
        LispObject v_96 = stack[-5];
        LispObject v_97 = stack[-3];
        return Lputv(nil, v_96, v_97, v_88);
    }
v_8:
    stack[0] = qvalue(basic_elt(env, 1)); // codmat
    v_89 = qvalue(basic_elt(env, 2)); // maxvar
    v_88 = stack[-4];
    v_88 = plus2(v_89, v_88);
    env = stack[-6];
    stack[-5] = Lgetv(nil, stack[0], v_88);
    env = stack[-6];
    stack[-3] = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[0] = qvalue(basic_elt(env, 1)); // codmat
    v_89 = qvalue(basic_elt(env, 2)); // maxvar
    v_88 = stack[-4];
    v_88 = plus2(v_89, v_88);
    env = stack[-6];
    v_89 = Lgetv(nil, stack[0], v_88);
    env = stack[-6];
    v_88 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_88 = Lgetv(nil, v_89, v_88);
    env = stack[-6];
    if (!car_legal(v_88)) v_88 = carerror(v_88); else
    v_88 = car(v_88);
    if (!car_legal(v_88)) v_88 = carerror(v_88); else
    v_88 = car(v_88);
    stack[-2] = sub1(v_88);
    env = stack[-6];
    stack[0] = qvalue(basic_elt(env, 1)); // codmat
    v_89 = qvalue(basic_elt(env, 2)); // maxvar
    v_88 = stack[-4];
    v_88 = plus2(v_89, v_88);
    env = stack[-6];
    v_89 = Lgetv(nil, stack[0], v_88);
    env = stack[-6];
    v_88 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_88 = Lgetv(nil, v_89, v_88);
    env = stack[-6];
    if (!car_legal(v_88)) v_88 = carerror(v_88); else
    v_88 = car(v_88);
    if (!car_legal(v_88)) stack[-1] = cdrerror(v_88); else
    stack[-1] = cdr(v_88);
    stack[0] = qvalue(basic_elt(env, 1)); // codmat
    v_89 = qvalue(basic_elt(env, 2)); // maxvar
    v_88 = stack[-4];
    v_88 = plus2(v_89, v_88);
    env = stack[-6];
    v_89 = Lgetv(nil, stack[0], v_88);
    env = stack[-6];
    v_88 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_88 = Lgetv(nil, v_89, v_88);
    env = stack[-6];
    if (!car_legal(v_88)) v_88 = cdrerror(v_88); else
    v_88 = cdr(v_88);
    v_88 = sub1(v_88);
    env = stack[-6];
    v_88 = acons(stack[-2], stack[-1], v_88);
    {
        LispObject v_98 = stack[-5];
        LispObject v_99 = stack[-3];
        return Lputv(nil, v_98, v_99, v_88);
    }
    v_88 = nil;
    return onevalue(v_88);
}



// Code for newenv

static LispObject CC_newenv(LispObject env,
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
    v_7 = basic_elt(env, 1); // unbound
    {
        LispObject fn = basic_elt(env, 2); // bind
        return (*qfn2(fn))(fn, v_8, v_7);
    }
}



// Code for arg2of2

static LispObject CC_arg2of2(LispObject env,
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
    return onevalue(v_6);
}



// Code for evenfree

static LispObject CC_evenfree(LispObject env,
                         LispObject v_2)
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
    v_31 = stack[0];
    if (v_31 == nil) goto v_6;
    else goto v_7;
v_6:
    v_31 = nil;
    goto v_5;
v_7:
    v_31 = stack[0];
    if (is_number(v_31)) goto v_10;
    else goto v_11;
v_10:
    v_32 = stack[0];
    v_31 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    {   LispObject fn = basic_elt(env, 1); // qremd
    v_31 = (*qfn2(fn))(fn, v_32, v_31);
    }
    env = stack[-2];
    if (!car_legal(v_31)) v_31 = cdrerror(v_31); else
    v_31 = cdr(v_31);
    {
        LispObject fn = basic_elt(env, 2); // absf
        return (*qfn1(fn))(fn, v_31);
    }
v_11:
    v_31 = stack[0];
    if (!car_legal(v_31)) v_31 = carerror(v_31); else
    v_31 = car(v_31);
    v_32 = ncons(v_31);
    env = stack[-2];
    v_31 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    {   LispObject fn = basic_elt(env, 1); // qremd
    v_31 = (*qfn2(fn))(fn, v_32, v_31);
    }
    env = stack[-2];
    if (!car_legal(v_31)) v_31 = cdrerror(v_31); else
    v_31 = cdr(v_31);
    {   LispObject fn = basic_elt(env, 2); // absf
    stack[-1] = (*qfn1(fn))(fn, v_31);
    }
    env = stack[-2];
    v_31 = stack[0];
    if (!car_legal(v_31)) v_31 = cdrerror(v_31); else
    v_31 = cdr(v_31);
    {   LispObject fn = basic_elt(env, 0); // evenfree
    v_31 = (*qfn1(fn))(fn, v_31);
    }
    env = stack[-2];
    {
        LispObject v_35 = stack[-1];
        LispObject fn = basic_elt(env, 3); // addf
        return (*qfn2(fn))(fn, v_35, v_31);
    }
    v_31 = nil;
v_5:
    return onevalue(v_31);
}



// Code for fortranprecedence

static LispObject CC_fortranprecedence(LispObject env,
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
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_11 = v_2;
// end of prologue
    v_12 = v_11;
    v_11 = basic_elt(env, 1); // !*fortranprecedence!*
    v_11 = get(v_12, v_11);
    if (v_11 == nil) goto v_6;
    else goto v_5;
v_6:
    v_11 = static_cast<LispObject>(144)+TAG_FIXNUM; // 9
v_5:
    return onevalue(v_11);
}



// Code for assert_typesyntaxp

static LispObject CC_assert_typesyntaxp(LispObject env,
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
    v_15 = qvalue(basic_elt(env, 1)); // !*assert
    if (v_15 == nil) goto v_7;
    v_15 = v_16;
    {
        LispObject fn = basic_elt(env, 2); // assert_dyntypep
        return (*qfn1(fn))(fn, v_15);
    }
v_7:
    v_15 = v_16;
        return Lsymbolp(nil, v_15);
    v_15 = nil;
    return onevalue(v_15);
}



// Code for mo!=revlexcomp

static LispObject CC_moMrevlexcomp(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_29;
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
    v_29 = stack[-1];
    stack[-2] = Llength(nil, v_29);
    env = stack[-3];
    v_29 = stack[0];
    v_29 = Llength(nil, v_29);
    env = stack[-3];
    if ((static_cast<std::intptr_t>(stack[-2]) > static_cast<std::intptr_t>(v_29))) goto v_7;
    else goto v_8;
v_7:
    v_29 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    goto v_6;
v_8:
    v_29 = stack[0];
    stack[-2] = Llength(nil, v_29);
    env = stack[-3];
    v_29 = stack[-1];
    v_29 = Llength(nil, v_29);
    env = stack[-3];
    if ((static_cast<std::intptr_t>(stack[-2]) > static_cast<std::intptr_t>(v_29))) goto v_14;
    else goto v_15;
v_14:
    v_29 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_6;
v_15:
    v_29 = stack[-1];
    stack[-1] = Lreverse(nil, v_29);
    env = stack[-3];
    v_29 = stack[0];
    v_29 = Lreverse(nil, v_29);
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 1); // mo!=degcomp
    v_29 = (*qfn2(fn))(fn, stack[-1], v_29);
    }
    return negate(v_29);
    v_29 = nil;
v_6:
    return onevalue(v_29);
}



// Code for artimes!:

static LispObject CC_artimesT(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    v_23 = v_3;
    v_24 = v_2;
// end of prologue
// Binding dmode!*
// FLUIDBIND: reloadenv=3 litvec-offset=1 saveloc=2
{   bind_fluid_stack bind_fluid_var(-3, 1, -2);
    setvalue(basic_elt(env, 1), nil); // dmode!*
// Binding !*exp
// FLUIDBIND: reloadenv=3 litvec-offset=2 saveloc=1
{   bind_fluid_stack bind_fluid_var(-3, 2, -1);
    setvalue(basic_elt(env, 2), nil); // !*exp
    v_22 = lisp_true;
    setvalue(basic_elt(env, 2), v_22); // !*exp
    stack[0] = basic_elt(env, 3); // !:ar!:
    v_22 = v_24;
    if (!car_legal(v_22)) v_22 = cdrerror(v_22); else
    v_22 = cdr(v_22);
    if (!car_legal(v_23)) v_23 = cdrerror(v_23); else
    v_23 = cdr(v_23);
    {   LispObject fn = basic_elt(env, 4); // multf
    v_22 = (*qfn2(fn))(fn, v_22, v_23);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 5); // reducepowers
    v_22 = (*qfn1(fn))(fn, v_22);
    }
    env = stack[-3];
    v_22 = cons(stack[0], v_22);
    ;}  // end of a binding scope
    ;}  // end of a binding scope
    return onevalue(v_22);
}



// Code for lexer_word_continues

static LispObject CC_lexer_word_continues(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_70, v_71;
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
    v_70 = stack[0];
    v_70 = Lalpha_char_p(nil, v_70);
    env = stack[-1];
    if (v_70 == nil) goto v_6;
    else goto v_5;
v_6:
    v_70 = stack[0];
    v_70 = Ldigitp(nil, v_70);
    env = stack[-1];
    if (v_70 == nil) goto v_11;
    else goto v_10;
v_11:
    v_71 = stack[0];
    v_70 = basic_elt(env, 1); // !_
    if (v_71 == v_70) goto v_20;
    else goto v_21;
v_20:
    v_71 = qvalue(basic_elt(env, 2)); // lexer_style!*
    v_70 = static_cast<LispObject>(262144)+TAG_FIXNUM; // 16384
    {   LispObject fn = basic_elt(env, 5); // land
    v_70 = (*qfn2(fn))(fn, v_71, v_70);
    }
    env = stack[-1];
    v_70 = static_cast<LispObject>(zerop(v_70));
    v_70 = v_70 ? lisp_true : nil;
    env = stack[-1];
    v_70 = (v_70 == nil ? lisp_true : nil);
    goto v_19;
v_21:
    v_70 = nil;
    goto v_19;
    v_70 = nil;
v_19:
    if (v_70 == nil) goto v_17;
    v_70 = lisp_true;
    goto v_15;
v_17:
    v_71 = stack[0];
    v_70 = basic_elt(env, 3); // !.
    if (v_71 == v_70) goto v_41;
    else goto v_42;
v_41:
    v_71 = qvalue(basic_elt(env, 2)); // lexer_style!*
    v_70 = static_cast<LispObject>(8388608)+TAG_FIXNUM; // 524288
    {   LispObject fn = basic_elt(env, 5); // land
    v_70 = (*qfn2(fn))(fn, v_71, v_70);
    }
    env = stack[-1];
    v_70 = static_cast<LispObject>(zerop(v_70));
    v_70 = v_70 ? lisp_true : nil;
    env = stack[-1];
    v_70 = (v_70 == nil ? lisp_true : nil);
    goto v_40;
v_42:
    v_70 = nil;
    goto v_40;
    v_70 = nil;
v_40:
    if (v_70 == nil) goto v_38;
    v_70 = lisp_true;
    goto v_36;
v_38:
    v_71 = stack[0];
    v_70 = basic_elt(env, 4); // !'
    if (v_71 == v_70) goto v_58;
    else goto v_59;
v_58:
    v_71 = qvalue(basic_elt(env, 2)); // lexer_style!*
    v_70 = static_cast<LispObject>(1048576)+TAG_FIXNUM; // 65536
    {   LispObject fn = basic_elt(env, 5); // land
    v_70 = (*qfn2(fn))(fn, v_71, v_70);
    }
    env = stack[-1];
    v_70 = static_cast<LispObject>(zerop(v_70));
    v_70 = v_70 ? lisp_true : nil;
    v_70 = (v_70 == nil ? lisp_true : nil);
    goto v_57;
v_59:
    v_70 = nil;
    goto v_57;
    v_70 = nil;
v_57:
    goto v_36;
    v_70 = nil;
v_36:
    goto v_15;
    v_70 = nil;
v_15:
v_10:
v_5:
    return onevalue(v_70);
}



// Code for quotfdx

static LispObject CC_quotfdx(LispObject env,
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
        LispObject fn = basic_elt(env, 4); // quotkx
        return (*qfn2(fn))(fn, v_40, v_41);
    }
    v_40 = nil;
v_6:
    return onevalue(v_40);
}



// Code for simpexpt

static LispObject CC_simpexpt(LispObject env,
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
    v_15 = qvalue(basic_elt(env, 1)); // !*qsum!-simpexpt
    if (v_15 == nil) goto v_7;
    v_15 = v_16;
    {
        LispObject fn = basic_elt(env, 2); // qsum!-simpexpt
        return (*qfn1(fn))(fn, v_15);
    }
v_7:
    v_15 = v_16;
    {
        LispObject fn = basic_elt(env, 3); // basic!-simpexpt
        return (*qfn1(fn))(fn, v_15);
    }
    v_15 = nil;
    return onevalue(v_15);
}



// Code for lx2xx

static LispObject CC_lx2xx(LispObject env,
                         LispObject v_2)
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
    v_62 = stack[-2];
    if (!consp(v_62)) goto v_18;
    else goto v_19;
v_18:
    v_62 = lisp_true;
    goto v_17;
v_19:
    v_62 = stack[-2];
    if (!car_legal(v_62)) v_62 = carerror(v_62); else
    v_62 = car(v_62);
    v_62 = (consp(v_62) ? nil : lisp_true);
    goto v_17;
    v_62 = nil;
v_17:
    if (v_62 == nil) goto v_15;
    v_62 = lisp_true;
    goto v_13;
v_15:
    v_62 = stack[-2];
    if (!car_legal(v_62)) v_62 = carerror(v_62); else
    v_62 = car(v_62);
    if (!consp(v_62)) goto v_32;
    else goto v_33;
v_32:
    v_62 = lisp_true;
    goto v_31;
v_33:
    v_62 = stack[-2];
    if (!car_legal(v_62)) v_62 = carerror(v_62); else
    v_62 = car(v_62);
    if (!car_legal(v_62)) v_62 = carerror(v_62); else
    v_62 = car(v_62);
    v_62 = (consp(v_62) ? nil : lisp_true);
    goto v_31;
    v_62 = nil;
v_31:
    goto v_13;
    v_62 = nil;
v_13:
    if (v_62 == nil) goto v_11;
    v_62 = stack[-2];
    goto v_7;
v_11:
    v_62 = stack[-2];
    if (!car_legal(v_62)) v_62 = cdrerror(v_62); else
    v_62 = cdr(v_62);
    if (!car_legal(v_62)) v_62 = carerror(v_62); else
    v_62 = car(v_62);
    stack[-3] = v_62;
    v_62 = stack[-3];
    {   LispObject fn = basic_elt(env, 1); // lastnondomain
    v_62 = (*qfn1(fn))(fn, v_62);
    }
    env = stack[-4];
    if (!car_legal(v_62)) v_62 = cdrerror(v_62); else
    v_62 = cdr(v_62);
    stack[-1] = v_62;
    v_62 = stack[-2];
    if (!car_legal(v_62)) stack[0] = carerror(v_62); else
    stack[0] = car(v_62);
    v_63 = stack[-1];
    v_62 = stack[-3];
    {   LispObject fn = basic_elt(env, 2); // delet
    v_62 = (*qfn2(fn))(fn, v_63, v_62);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 3); // xxsort
    v_63 = (*qfn1(fn))(fn, v_62);
    }
    env = stack[-4];
    v_62 = stack[-1];
    v_63 = Lappend_2(nil, v_63, v_62);
    v_62 = stack[-2];
    if (!car_legal(v_62)) v_62 = cdrerror(v_62); else
    v_62 = cdr(v_62);
    if (!car_legal(v_62)) v_62 = cdrerror(v_62); else
    v_62 = cdr(v_62);
    {
        LispObject v_68 = stack[0];
        return list2star(v_68, v_63, v_62);
    }
v_7:
    return onevalue(v_62);
}



// Code for ibalp_negateat

static LispObject CC_ibalp_negateat(LispObject env,
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
// space for vars preserved across procedure calls
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[-1] = v_2;
// end of prologue
    v_12 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // ibalp_op
    stack[-2] = (*qfn1(fn))(fn, v_12);
    }
    env = stack[-3];
    v_12 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // ibalp_arg2l
    stack[0] = (*qfn1(fn))(fn, v_12);
    }
    env = stack[-3];
    v_12 = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // ibalp_arg2r
    v_12 = (*qfn1(fn))(fn, v_12);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 4); // ibalp_negatet
    v_12 = (*qfn1(fn))(fn, v_12);
    }
    env = stack[-3];
    {
        LispObject v_16 = stack[-2];
        LispObject v_17 = stack[0];
        LispObject fn = basic_elt(env, 5); // ibalp_mk2
        return (*qfn3(fn))(fn, v_16, v_17, v_12);
    }
}



// Code for dip_fmon

static LispObject CC_dip_fmon(LispObject env,
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
    v_10 = v_3;
    v_9 = v_2;
// end of prologue
    v_11 = v_10;
    v_10 = v_9;
    v_9 = nil;
    return list2star(v_11, v_10, v_9);
}



// Code for maxtype

static LispObject CC_maxtype(LispObject env,
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
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_23 = v_2;
// end of prologue
    v_22 = v_23;
    if (!consp(v_22)) goto v_6;
    else goto v_7;
v_6:
    v_22 = v_23;
    goto v_5;
v_7:
    v_22 = v_23;
    if (!car_legal(v_22)) v_22 = cdrerror(v_22); else
    v_22 = cdr(v_22);
    v_22 = Lconsp(nil, v_22);
    if (v_22 == nil) goto v_11;
    v_22 = v_23;
    if (!car_legal(v_22)) v_22 = cdrerror(v_22); else
    v_22 = cdr(v_22);
    if (!car_legal(v_22)) v_22 = carerror(v_22); else
    v_22 = car(v_22);
    goto v_5;
v_11:
    v_22 = v_23;
    if (!car_legal(v_22)) v_22 = carerror(v_22); else
    v_22 = car(v_22);
    goto v_5;
    v_22 = nil;
v_5:
    return onevalue(v_22);
}



// Code for bind

static LispObject CC_bind(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    v_13 = v_3;
    v_12 = v_2;
// end of prologue
    stack[-1] = v_12;
    stack[0] = basic_elt(env, 1); // binding
    if (!symbolp(v_12)) v_12 = nil;
    else { v_12 = qfastgets(v_12);
           if (v_12 != nil) { v_12 = elt(v_12, 13); // binding
#ifdef RECORD_GET
             if (v_12 != SPID_NOPROP)
                record_get(elt(fastget_names, 13), 1);
             else record_get(elt(fastget_names, 13), 0),
                v_12 = nil; }
           else record_get(elt(fastget_names, 13), 0); }
#else
             if (v_12 == SPID_NOPROP) v_12 = nil; }}
#endif
    v_12 = cons(v_13, v_12);
    {
        LispObject v_16 = stack[-1];
        LispObject v_17 = stack[0];
        return Lputprop(nil, v_16, v_17, v_12);
    }
}



// Code for freeoffl

static LispObject CC_freeoffl(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // freeoff
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



// Code for triviallcm

static LispObject CC_triviallcm(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
        push(v_2,v_3,v_4);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_4,v_3,v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    stack[0] = v_4;
    v_12 = v_3;
    v_11 = v_2;
// end of prologue
    {   LispObject fn = basic_elt(env, 1); // xdiv
    v_12 = (*qfn2(fn))(fn, v_12, v_11);
    }
    v_11 = stack[0];
    v_11 = (equal(v_12, v_11) ? lisp_true : nil);
    return onevalue(v_11);
}



// Code for aminusp!:1

static LispObject CC_aminuspT1(LispObject env,
                         LispObject v_2)
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
    v_87 = stack[-3];
    {   LispObject fn = basic_elt(env, 4); // aeval!*
    v_87 = (*qfn1(fn))(fn, v_87);
    }
    env = stack[-5];
    stack[-3] = v_87;
    v_87 = stack[-3];
    stack[-4] = v_87;
    v_87 = stack[-4];
    v_87 = integerp(v_87);
    if (v_87 == nil) goto v_13;
    v_87 = stack[-4];
        return Lminusp(nil, v_87);
v_13:
    v_88 = stack[-4];
    v_87 = basic_elt(env, 1); // !*sq
    if (!consp(v_88)) goto v_18;
    v_88 = car(v_88);
    if (v_88 == v_87) goto v_19;
v_18:
    stack[-2] = nil;
    v_87 = stack[-3];
    {   LispObject fn = basic_elt(env, 5); // reval
    stack[-1] = (*qfn1(fn))(fn, v_87);
    }
    env = stack[-5];
    stack[0] = basic_elt(env, 2); // "invalid in FOR statement"
    v_88 = nil;
    v_87 = lisp_true;
    v_87 = list2(v_88, v_87);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 6); // msgpri
    v_87 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_87);
    }
    env = stack[-5];
    goto v_11;
v_19:
v_11:
    v_87 = stack[-4];
    if (!car_legal(v_87)) v_87 = cdrerror(v_87); else
    v_87 = cdr(v_87);
    if (!car_legal(v_87)) v_87 = carerror(v_87); else
    v_87 = car(v_87);
    stack[-4] = v_87;
    v_87 = stack[-4];
    if (!car_legal(v_87)) v_87 = carerror(v_87); else
    v_87 = car(v_87);
    v_87 = integerp(v_87);
    if (v_87 == nil) goto v_37;
    v_87 = stack[-4];
    if (!car_legal(v_87)) v_87 = cdrerror(v_87); else
    v_87 = cdr(v_87);
    v_87 = integerp(v_87);
    if (v_87 == nil) goto v_37;
    v_87 = stack[-4];
    if (!car_legal(v_87)) v_87 = carerror(v_87); else
    v_87 = car(v_87);
        return Lminusp(nil, v_87);
v_37:
    v_87 = stack[-4];
    if (!car_legal(v_87)) v_88 = cdrerror(v_87); else
    v_88 = cdr(v_87);
    v_87 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_88 == v_87) goto v_54;
    v_87 = lisp_true;
    goto v_52;
v_54:
    v_87 = stack[-4];
    if (!car_legal(v_87)) v_87 = carerror(v_87); else
    v_87 = car(v_87);
    stack[-4] = v_87;
    if (!consp(v_87)) goto v_63;
    else goto v_64;
v_63:
    v_87 = lisp_true;
    goto v_62;
v_64:
    v_87 = stack[-4];
    if (!car_legal(v_87)) v_87 = carerror(v_87); else
    v_87 = car(v_87);
    v_87 = (consp(v_87) ? nil : lisp_true);
    goto v_62;
    v_87 = nil;
v_62:
    v_87 = (v_87 == nil ? lisp_true : nil);
    goto v_52;
    v_87 = nil;
v_52:
    if (v_87 == nil) goto v_50;
    stack[-1] = nil;
    v_87 = stack[-3];
    {   LispObject fn = basic_elt(env, 5); // reval
    stack[-2] = (*qfn1(fn))(fn, v_87);
    }
    env = stack[-5];
    stack[0] = basic_elt(env, 2); // "invalid in FOR statement"
    v_88 = nil;
    v_87 = lisp_true;
    v_87 = list2(v_88, v_87);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 6); // msgpri
    v_87 = (*qfn4up(fn))(fn, stack[-1], stack[-2], stack[0], v_87);
    }
    goto v_35;
v_50:
    v_88 = basic_elt(env, 3); // !:minusp
    v_87 = stack[-4];
        return Lapply1(nil, v_88, v_87);
v_35:
    v_87 = nil;
    return onevalue(v_87);
}



// Code for dcombine

static LispObject CC_dcombine(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_285, v_286, v_287;
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
    stack[-3] = v_4;
    stack[-4] = v_3;
    stack[-5] = v_2;
// end of prologue
    v_285 = stack[-5];
    if (!consp(v_285)) goto v_8;
    else goto v_9;
v_8:
    v_285 = stack[-4];
    if (!car_legal(v_285)) v_286 = carerror(v_285); else
    v_286 = car(v_285);
    v_285 = stack[-3];
    stack[0] = get(v_286, v_285);
    env = stack[-7];
    v_285 = stack[-4];
    if (!car_legal(v_285)) v_285 = carerror(v_285); else
    v_285 = car(v_285);
    if (!symbolp(v_285)) v_286 = nil;
    else { v_286 = qfastgets(v_285);
           if (v_286 != nil) { v_286 = elt(v_286, 34); // i2d
#ifdef RECORD_GET
             if (v_286 != SPID_NOPROP)
                record_get(elt(fastget_names, 34), 1);
             else record_get(elt(fastget_names, 34), 0),
                v_286 = nil; }
           else record_get(elt(fastget_names, 34), 0); }
#else
             if (v_286 == SPID_NOPROP) v_286 = nil; }}
#endif
    v_285 = stack[-5];
    v_286 = Lapply1(nil, v_286, v_285);
    env = stack[-7];
    v_285 = stack[-4];
    v_285 = Lapply2(nil, stack[0], v_286, v_285);
    env = stack[-7];
    goto v_7;
v_9:
    v_285 = stack[-4];
    if (!consp(v_285)) goto v_22;
    else goto v_23;
v_22:
    v_285 = stack[-5];
    if (!car_legal(v_285)) v_286 = carerror(v_285); else
    v_286 = car(v_285);
    v_285 = stack[-3];
    stack[-1] = get(v_286, v_285);
    env = stack[-7];
    stack[0] = stack[-5];
    v_285 = stack[-5];
    if (!car_legal(v_285)) v_285 = carerror(v_285); else
    v_285 = car(v_285);
    if (!symbolp(v_285)) v_286 = nil;
    else { v_286 = qfastgets(v_285);
           if (v_286 != nil) { v_286 = elt(v_286, 34); // i2d
#ifdef RECORD_GET
             if (v_286 != SPID_NOPROP)
                record_get(elt(fastget_names, 34), 1);
             else record_get(elt(fastget_names, 34), 0),
                v_286 = nil; }
           else record_get(elt(fastget_names, 34), 0); }
#else
             if (v_286 == SPID_NOPROP) v_286 = nil; }}
#endif
    v_285 = stack[-4];
    v_285 = Lapply1(nil, v_286, v_285);
    env = stack[-7];
    v_285 = Lapply2(nil, stack[-1], stack[0], v_285);
    env = stack[-7];
    goto v_7;
v_23:
    v_285 = stack[-5];
    if (!car_legal(v_285)) v_286 = carerror(v_285); else
    v_286 = car(v_285);
    v_285 = stack[-4];
    if (!car_legal(v_285)) v_285 = carerror(v_285); else
    v_285 = car(v_285);
    if (v_286 == v_285) goto v_36;
    else goto v_37;
v_36:
    v_285 = stack[-5];
    if (!car_legal(v_285)) v_286 = carerror(v_285); else
    v_286 = car(v_285);
    v_285 = stack[-3];
    v_287 = get(v_286, v_285);
    env = stack[-7];
    v_286 = stack[-5];
    v_285 = stack[-4];
    v_285 = Lapply2(nil, v_287, v_286, v_285);
    env = stack[-7];
    goto v_7;
v_37:
    v_285 = stack[-5];
    if (!car_legal(v_285)) v_286 = carerror(v_285); else
    v_286 = car(v_285);
    v_285 = stack[-4];
    if (!car_legal(v_285)) v_285 = carerror(v_285); else
    v_285 = car(v_285);
    stack[-6] = v_286;
    stack[-2] = v_285;
    v_286 = stack[-6];
    v_285 = stack[-2];
    v_287 = get(v_286, v_285);
    env = stack[-7];
    v_286 = basic_elt(env, 1); // (!:crn!: !:gi!:)
    v_285 = basic_elt(env, 2); // (!:rd!: !:cr!:)
    stack[-1] = v_287;
    stack[0] = v_286;
    v_287 = v_285;
    v_285 = stack[-1];
    if (v_285 == nil) goto v_72;
    v_285 = stack[-1];
    if (!consp(v_285)) goto v_76;
    else goto v_72;
v_76:
    goto v_73;
v_72:
    v_285 = lisp_true;
    goto v_71;
v_73:
    v_286 = stack[-6];
    v_285 = basic_elt(env, 3); // cmpxfn
    v_285 = get(v_286, v_285);
    env = stack[-7];
    if (v_285 == nil) goto v_85;
    v_286 = stack[-2];
    v_285 = basic_elt(env, 3); // cmpxfn
    v_285 = get(v_286, v_285);
    env = stack[-7];
    if (v_285 == nil) goto v_90;
    else goto v_85;
v_90:
    goto v_84;
v_85:
    v_286 = stack[-6];
    v_285 = v_287;
    v_285 = Lmemq(nil, v_286, v_285);
    if (v_285 == nil) goto v_94;
    v_285 = stack[-2];
    v_286 = v_287;
    v_285 = Lmemq(nil, v_285, v_286);
    if (v_285 == nil) goto v_99;
    else goto v_94;
v_99:
    goto v_84;
v_94:
    v_285 = nil;
    goto v_82;
v_84:
    v_286 = stack[-2];
    v_285 = basic_elt(env, 4); // !:ps!:
    v_285 = Lneq_2(nil, v_286, v_285);
    env = stack[-7];
    goto v_82;
    v_285 = nil;
v_82:
    goto v_71;
    v_285 = nil;
v_71:
    if (v_285 == nil) goto v_68;
    v_286 = stack[-2];
    v_285 = basic_elt(env, 5); // noconvert
    v_285 = Lflagp(nil, v_286, v_285);
    env = stack[-7];
    if (v_285 == nil) goto v_109;
    else goto v_68;
v_109:
    v_286 = stack[-6];
    v_285 = stack[0];
    v_285 = Lmemq(nil, v_286, v_285);
    if (v_285 == nil) goto v_117;
    v_286 = stack[-2];
    v_285 = basic_elt(env, 6); // !:rd!:
    if (v_286 == v_285) goto v_122;
    else goto v_117;
v_122:
    goto v_115;
v_117:
    v_286 = stack[-6];
    v_285 = basic_elt(env, 6); // !:rd!:
    if (v_286 == v_285) goto v_128;
    else goto v_129;
v_128:
    v_286 = stack[-2];
    v_285 = stack[0];
    v_285 = Lmemq(nil, v_286, v_285);
    goto v_127;
v_129:
    v_285 = nil;
    goto v_127;
    v_285 = nil;
v_127:
    if (v_285 == nil) goto v_125;
    else goto v_115;
v_125:
    goto v_116;
v_115:
    v_286 = stack[-6];
    v_285 = basic_elt(env, 7); // !:cr!:
    v_286 = get(v_286, v_285);
    env = stack[-7];
    v_285 = stack[-5];
    v_285 = Lapply1(nil, v_286, v_285);
    env = stack[-7];
    stack[-5] = v_285;
    v_285 = basic_elt(env, 7); // !:cr!:
    stack[-6] = v_285;
    goto v_114;
v_116:
    v_286 = stack[-6];
    v_285 = basic_elt(env, 8); // !:rn!:
    if (v_286 == v_285) goto v_152;
    else goto v_153;
v_152:
    v_286 = stack[-2];
    v_285 = basic_elt(env, 9); // !:gi!:
    v_285 = (v_286 == v_285 ? lisp_true : nil);
    goto v_151;
v_153:
    v_285 = nil;
    goto v_151;
    v_285 = nil;
v_151:
    if (v_285 == nil) goto v_149;
    v_285 = lisp_true;
    goto v_147;
v_149:
    v_286 = stack[-6];
    v_285 = basic_elt(env, 9); // !:gi!:
    if (v_286 == v_285) goto v_167;
    else goto v_168;
v_167:
    v_286 = stack[-2];
    v_285 = basic_elt(env, 8); // !:rn!:
    v_285 = (v_286 == v_285 ? lisp_true : nil);
    goto v_166;
v_168:
    v_285 = nil;
    goto v_166;
    v_285 = nil;
v_166:
    goto v_147;
    v_285 = nil;
v_147:
    if (v_285 == nil) goto v_145;
    v_286 = stack[-6];
    v_285 = basic_elt(env, 10); // !:crn!:
    v_286 = get(v_286, v_285);
    env = stack[-7];
    v_285 = stack[-5];
    v_285 = Lapply1(nil, v_286, v_285);
    env = stack[-7];
    stack[-5] = v_285;
    v_285 = basic_elt(env, 10); // !:crn!:
    stack[-6] = v_285;
    goto v_114;
v_145:
v_114:
    v_286 = stack[-2];
    v_285 = stack[-6];
    v_286 = get(v_286, v_285);
    env = stack[-7];
    v_285 = stack[-4];
    v_285 = Lapply1(nil, v_286, v_285);
    env = stack[-7];
    stack[-4] = v_285;
    v_286 = stack[-6];
    v_285 = stack[-3];
    v_285 = get(v_286, v_285);
    env = stack[-7];
    stack[-1] = v_285;
    goto v_66;
v_68:
    v_286 = stack[-1];
    v_285 = stack[-5];
    v_285 = Lapply1(nil, v_286, v_285);
    env = stack[-7];
    stack[-5] = v_285;
    v_286 = stack[-2];
    v_285 = stack[-3];
    v_285 = get(v_286, v_285);
    env = stack[-7];
    stack[-1] = v_285;
    goto v_66;
v_66:
    v_287 = stack[-1];
    v_286 = stack[-5];
    v_285 = stack[-4];
    v_285 = Lapply2(nil, v_287, v_286, v_285);
    env = stack[-7];
    goto v_7;
    v_285 = nil;
v_7:
    stack[-5] = v_285;
    v_285 = qvalue(basic_elt(env, 11)); // !*rounded
    if (v_285 == nil) goto v_206;
    v_285 = qvalue(basic_elt(env, 12)); // !*roundall
    if (v_285 == nil) goto v_206;
    v_285 = stack[-5];
    if (!consp(v_285)) goto v_206;
    v_285 = stack[-5];
    if (!car_legal(v_285)) v_286 = carerror(v_285); else
    v_286 = car(v_285);
    stack[-4] = v_286;
    v_285 = basic_elt(env, 8); // !:rn!:
    if (v_286 == v_285) goto v_221;
    else goto v_222;
v_221:
    v_285 = stack[-5];
    if (!car_legal(v_285)) v_285 = cdrerror(v_285); else
    v_285 = cdr(v_285);
    if (!car_legal(v_285)) v_286 = cdrerror(v_285); else
    v_286 = cdr(v_285);
    v_285 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_285 = Lneq_2(nil, v_286, v_285);
    env = stack[-7];
    goto v_220;
v_222:
    v_285 = nil;
    goto v_220;
    v_285 = nil;
v_220:
    if (v_285 == nil) goto v_218;
    v_285 = stack[-5];
    {   LispObject fn = basic_elt(env, 14); // !*rn2rd
    v_285 = (*qfn1(fn))(fn, v_285);
    }
    env = stack[-7];
    goto v_216;
v_218:
    v_286 = stack[-4];
    v_285 = basic_elt(env, 10); // !:crn!:
    if (v_286 == v_285) goto v_240;
    else goto v_241;
v_240:
    v_285 = stack[-5];
    if (!car_legal(v_285)) v_285 = cdrerror(v_285); else
    v_285 = cdr(v_285);
    if (!car_legal(v_285)) v_285 = carerror(v_285); else
    v_285 = car(v_285);
    if (!car_legal(v_285)) v_286 = cdrerror(v_285); else
    v_286 = cdr(v_285);
    v_285 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_286 == v_285) goto v_247;
    v_285 = lisp_true;
    goto v_245;
v_247:
    v_285 = stack[-5];
    if (!car_legal(v_285)) v_285 = cdrerror(v_285); else
    v_285 = cdr(v_285);
    if (!car_legal(v_285)) v_285 = cdrerror(v_285); else
    v_285 = cdr(v_285);
    if (!car_legal(v_285)) v_286 = cdrerror(v_285); else
    v_286 = cdr(v_285);
    v_285 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_285 = Lneq_2(nil, v_286, v_285);
    env = stack[-7];
    goto v_245;
    v_285 = nil;
v_245:
    goto v_239;
v_241:
    v_285 = nil;
    goto v_239;
    v_285 = nil;
v_239:
    if (v_285 == nil) goto v_237;
    v_285 = stack[-5];
    {   LispObject fn = basic_elt(env, 15); // !*crn2cr
    v_285 = (*qfn1(fn))(fn, v_285);
    }
    env = stack[-7];
    goto v_216;
v_237:
    v_285 = stack[-5];
    goto v_216;
    v_285 = nil;
v_216:
    {
        LispObject fn = basic_elt(env, 16); // int!-equiv!-chk
        return (*qfn1(fn))(fn, v_285);
    }
v_206:
    v_286 = stack[-3];
    v_285 = basic_elt(env, 13); // divide
    if (v_286 == v_285) goto v_270;
    else goto v_271;
v_270:
    v_285 = stack[-5];
    if (!car_legal(v_285)) v_285 = carerror(v_285); else
    v_285 = car(v_285);
    {   LispObject fn = basic_elt(env, 16); // int!-equiv!-chk
    stack[0] = (*qfn1(fn))(fn, v_285);
    }
    env = stack[-7];
    v_285 = stack[-5];
    if (!car_legal(v_285)) v_285 = cdrerror(v_285); else
    v_285 = cdr(v_285);
    {   LispObject fn = basic_elt(env, 16); // int!-equiv!-chk
    v_285 = (*qfn1(fn))(fn, v_285);
    }
    {
        LispObject v_295 = stack[0];
        return cons(v_295, v_285);
    }
v_271:
    v_285 = stack[-5];
    {
        LispObject fn = basic_elt(env, 16); // int!-equiv!-chk
        return (*qfn1(fn))(fn, v_285);
    }
    v_285 = nil;
    return onevalue(v_285);
}



// Code for setk

static LispObject CC_setk(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_53, v_54, v_55;
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
    v_54 = v_2;
// end of prologue
    v_53 = v_54;
    if (!consp(v_53)) goto v_8;
    v_53 = v_54;
    if (!car_legal(v_53)) v_55 = carerror(v_53); else
    v_55 = car(v_53);
    v_53 = basic_elt(env, 1); // evalargfn
    v_53 = get(v_55, v_53);
    env = stack[-2];
    v_55 = v_53;
    v_53 = v_55;
    if (v_53 == nil) goto v_18;
    v_53 = v_54;
    if (!car_legal(v_53)) stack[-1] = carerror(v_53); else
    stack[-1] = car(v_53);
    v_53 = v_55;
    if (!car_legal(v_54)) v_54 = cdrerror(v_54); else
    v_54 = cdr(v_54);
    v_53 = Lapply1(nil, v_53, v_54);
    env = stack[-2];
    v_54 = cons(stack[-1], v_53);
    env = stack[-2];
    v_53 = stack[0];
    {
        LispObject fn = basic_elt(env, 3); // setk0
        return (*qfn2(fn))(fn, v_54, v_53);
    }
v_18:
    v_53 = v_54;
    if (!car_legal(v_53)) v_53 = carerror(v_53); else
    v_53 = car(v_53);
    if (!symbolp(v_53)) v_55 = nil;
    else { v_55 = qfastgets(v_53);
           if (v_55 != nil) { v_55 = elt(v_55, 2); // rtype
#ifdef RECORD_GET
             if (v_55 != SPID_NOPROP)
                record_get(elt(fastget_names, 2), 1);
             else record_get(elt(fastget_names, 2), 0),
                v_55 = nil; }
           else record_get(elt(fastget_names, 2), 0); }
#else
             if (v_55 == SPID_NOPROP) v_55 = nil; }}
#endif
    v_53 = basic_elt(env, 2); // matrix
    if (v_55 == v_53) goto v_29;
    else goto v_30;
v_29:
    v_53 = stack[0];
    {
        LispObject fn = basic_elt(env, 3); // setk0
        return (*qfn2(fn))(fn, v_54, v_53);
    }
v_30:
    v_53 = v_54;
    if (!car_legal(v_53)) stack[-1] = carerror(v_53); else
    stack[-1] = car(v_53);
    v_53 = v_54;
    if (!car_legal(v_53)) v_53 = cdrerror(v_53); else
    v_53 = cdr(v_53);
    {   LispObject fn = basic_elt(env, 4); // revlis
    v_53 = (*qfn1(fn))(fn, v_53);
    }
    env = stack[-2];
    v_54 = cons(stack[-1], v_53);
    env = stack[-2];
    v_53 = stack[0];
    {
        LispObject fn = basic_elt(env, 3); // setk0
        return (*qfn2(fn))(fn, v_54, v_53);
    }
    v_53 = nil;
    goto v_6;
v_8:
    v_53 = stack[0];
    {
        LispObject fn = basic_elt(env, 3); // setk0
        return (*qfn2(fn))(fn, v_54, v_53);
    }
    v_53 = nil;
v_6:
    return onevalue(v_53);
}



// Code for lalr_resolve_conflicts

static LispObject CC_lalr_resolve_conflicts(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_222, v_223, v_224;
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
    stack[-9] = nil;
    stack[-2] = nil;
    v_223 = stack[-8];
    v_222 = basic_elt(env, 1); // orderactions
    {   LispObject fn = basic_elt(env, 5); // sort
    v_222 = (*qfn2(fn))(fn, v_223, v_222);
    }
    env = stack[-10];
    stack[-8] = v_222;
v_22:
    v_222 = stack[-8];
    if (v_222 == nil) goto v_25;
    else goto v_26;
v_25:
    goto v_21;
v_26:
    v_222 = stack[-8];
    if (!car_legal(v_222)) v_222 = carerror(v_222); else
    v_222 = car(v_222);
    v_222 = ncons(v_222);
    env = stack[-10];
    v_224 = v_222;
    v_222 = stack[-8];
    if (!car_legal(v_222)) v_222 = cdrerror(v_222); else
    v_222 = cdr(v_222);
    stack[-8] = v_222;
v_36:
    v_222 = stack[-8];
    if (v_222 == nil) goto v_39;
    v_222 = stack[-8];
    if (!car_legal(v_222)) v_222 = carerror(v_222); else
    v_222 = car(v_222);
    if (!car_legal(v_222)) v_223 = carerror(v_222); else
    v_223 = car(v_222);
    v_222 = v_224;
    if (!car_legal(v_222)) v_222 = carerror(v_222); else
    v_222 = car(v_222);
    if (!car_legal(v_222)) v_222 = carerror(v_222); else
    v_222 = car(v_222);
    if (equal(v_223, v_222)) goto v_43;
    else goto v_39;
v_43:
    goto v_40;
v_39:
    goto v_35;
v_40:
    v_222 = stack[-8];
    if (!car_legal(v_222)) v_222 = carerror(v_222); else
    v_222 = car(v_222);
    v_223 = v_224;
    v_222 = cons(v_222, v_223);
    env = stack[-10];
    v_224 = v_222;
    v_222 = stack[-8];
    if (!car_legal(v_222)) v_222 = cdrerror(v_222); else
    v_222 = cdr(v_222);
    stack[-8] = v_222;
    goto v_36;
v_35:
    v_222 = nil;
    stack[-4] = v_222;
    stack[-5] = v_222;
    stack[-6] = v_222;
    v_222 = v_224;
    if (!car_legal(v_222)) v_222 = cdrerror(v_222); else
    v_222 = cdr(v_222);
    if (v_222 == nil) goto v_60;
    else goto v_61;
v_60:
    v_222 = v_224;
    if (!car_legal(v_222)) v_222 = carerror(v_222); else
    v_222 = car(v_222);
    stack[-4] = v_222;
    goto v_59;
v_61:
    v_222 = v_224;
    stack[0] = v_222;
v_71:
    v_222 = stack[0];
    if (v_222 == nil) goto v_75;
    else goto v_76;
v_75:
    goto v_70;
v_76:
    v_222 = stack[0];
    if (!car_legal(v_222)) v_222 = carerror(v_222); else
    v_222 = car(v_222);
    v_223 = v_222;
    v_222 = v_223;
    if (!car_legal(v_222)) v_222 = cdrerror(v_222); else
    v_222 = cdr(v_222);
    if (!car_legal(v_222)) v_222 = carerror(v_222); else
    v_222 = car(v_222);
    if (!car_legal(v_222)) v_224 = carerror(v_222); else
    v_224 = car(v_222);
    v_222 = basic_elt(env, 2); // shift
    if (v_224 == v_222) goto v_84;
    else goto v_85;
v_84:
    v_222 = v_223;
    stack[-6] = v_222;
    goto v_83;
v_85:
    v_222 = stack[-5];
    if (v_222 == nil) goto v_92;
    else goto v_93;
v_92:
    v_222 = v_223;
    stack[-5] = v_222;
    goto v_83;
v_93:
    v_224 = stack[-5];
    v_222 = stack[-7];
    {   LispObject fn = basic_elt(env, 6); // lalr_warn_reduce_reduce_conflict
    v_222 = (*qfn3(fn))(fn, v_224, v_223, v_222);
    }
    env = stack[-10];
    goto v_83;
v_83:
    v_222 = stack[-6];
    if (v_222 == nil) goto v_105;
    v_222 = stack[-5];
    if (v_222 == nil) goto v_105;
    v_222 = stack[-6];
    if (!car_legal(v_222)) v_222 = carerror(v_222); else
    v_222 = car(v_222);
    stack[-3] = v_222;
    v_222 = stack[-5];
    if (!car_legal(v_222)) v_222 = cdrerror(v_222); else
    v_222 = cdr(v_222);
    if (!car_legal(v_222)) v_222 = carerror(v_222); else
    v_222 = car(v_222);
    if (!car_legal(v_222)) v_222 = cdrerror(v_222); else
    v_222 = cdr(v_222);
    if (!car_legal(v_222)) v_222 = carerror(v_222); else
    v_222 = car(v_222);
    v_224 = v_222;
v_115:
    v_222 = v_224;
    if (v_222 == nil) goto v_123;
    else goto v_124;
v_123:
    goto v_114;
v_124:
    v_222 = v_224;
    if (!car_legal(v_222)) v_222 = carerror(v_222); else
    v_222 = car(v_222);
    v_223 = v_222;
    v_222 = v_223;
    if (is_number(v_222)) goto v_132;
    else goto v_133;
v_132:
    v_222 = v_223;
    stack[-2] = v_222;
    goto v_131;
v_133:
v_131:
    v_222 = v_224;
    if (!car_legal(v_222)) v_222 = cdrerror(v_222); else
    v_222 = cdr(v_222);
    v_224 = v_222;
    goto v_115;
v_114:
    v_222 = stack[-3];
    if (v_222 == nil) goto v_141;
    v_222 = stack[-2];
    if (v_222 == nil) goto v_141;
    v_222 = stack[-3];
    {   LispObject fn = basic_elt(env, 7); // lalr_precedence
    v_222 = (*qfn1(fn))(fn, v_222);
    }
    env = stack[-10];
    stack[-1] = v_222;
    v_222 = stack[-2];
    {   LispObject fn = basic_elt(env, 7); // lalr_precedence
    v_222 = (*qfn1(fn))(fn, v_222);
    }
    env = stack[-10];
    v_224 = v_222;
    v_222 = stack[-1];
    if (v_222 == nil) goto v_153;
    v_222 = v_224;
    if (v_222 == nil) goto v_153;
    v_223 = stack[-1];
    v_222 = v_224;
    if (equal(v_223, v_222)) goto v_160;
    else goto v_161;
v_160:
    v_222 = stack[-3];
    {   LispObject fn = basic_elt(env, 8); // lalr_associativity
    v_222 = (*qfn1(fn))(fn, v_222);
    }
    env = stack[-10];
    v_224 = v_222;
    v_223 = v_224;
    v_222 = basic_elt(env, 3); // !:left
    if (v_223 == v_222) goto v_168;
    else goto v_169;
v_168:
    v_222 = nil;
    stack[-6] = v_222;
    goto v_167;
v_169:
    v_223 = v_224;
    v_222 = basic_elt(env, 4); // !:right
    if (v_223 == v_222) goto v_173;
    else goto v_174;
v_173:
    v_222 = nil;
    stack[-5] = v_222;
    goto v_167;
v_174:
    v_222 = nil;
    stack[-5] = v_222;
    stack[-6] = v_222;
    goto v_167;
v_167:
    goto v_159;
v_161:
    v_222 = stack[-1];
    v_223 = v_224;
    v_222 = static_cast<LispObject>(lessp2(v_222, v_223));
    v_222 = v_222 ? lisp_true : nil;
    env = stack[-10];
    if (v_222 == nil) goto v_182;
    v_222 = nil;
    stack[-5] = v_222;
    goto v_159;
v_182:
    v_222 = nil;
    stack[-6] = v_222;
    goto v_159;
v_159:
    goto v_151;
v_153:
v_151:
    goto v_139;
v_141:
v_139:
    goto v_103;
v_105:
v_103:
    v_222 = stack[0];
    if (!car_legal(v_222)) v_222 = cdrerror(v_222); else
    v_222 = cdr(v_222);
    stack[0] = v_222;
    goto v_71;
v_70:
    goto v_59;
v_59:
    v_222 = stack[-6];
    if (v_222 == nil) goto v_195;
    v_222 = stack[-5];
    if (v_222 == nil) goto v_195;
    v_224 = stack[-6];
    v_223 = stack[-5];
    v_222 = stack[-7];
    {   LispObject fn = basic_elt(env, 9); // lalr_warn_shift_reduce_conflict
    v_222 = (*qfn3(fn))(fn, v_224, v_223, v_222);
    }
    env = stack[-10];
    goto v_193;
v_195:
v_193:
    v_222 = stack[-4];
    if (v_222 == nil) goto v_206;
    else goto v_205;
v_206:
    v_222 = stack[-6];
    if (v_222 == nil) goto v_210;
    else goto v_209;
v_210:
    v_222 = stack[-5];
v_209:
v_205:
    stack[-4] = v_222;
    v_222 = stack[-4];
    if (v_222 == nil) goto v_216;
    v_223 = stack[-4];
    v_222 = stack[-9];
    v_222 = cons(v_223, v_222);
    env = stack[-10];
    stack[-9] = v_222;
    goto v_214;
v_216:
v_214:
    goto v_22;
v_21:
    v_222 = stack[-9];
    return onevalue(v_222);
}



// Code for cl_atml1

static LispObject CC_cl_atml1(LispObject env,
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
    v_7 = basic_elt(env, 1); // cl_atmlc
    {
        LispObject fn = basic_elt(env, 2); // cl_f2ml
        return (*qfn2(fn))(fn, v_8, v_7);
    }
}



// Code for mri_realvarp

static LispObject CC_mri_realvarp(LispObject env,
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
    v_18 = v_2;
// end of prologue
    v_17 = v_18;
    if (symbolp(v_17)) goto v_7;
    v_17 = nil;
    goto v_5;
v_7:
    v_17 = basic_elt(env, 1); // mri_type
    v_17 = get(v_18, v_17);
    env = stack[0];
    v_18 = basic_elt(env, 2); // real
    v_17 = (v_17 == v_18 ? lisp_true : nil);
    goto v_5;
    v_17 = nil;
v_5:
    return onevalue(v_17);
}



// Code for cl_qb

static LispObject CC_cl_qb(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_55, v_56, v_57, v_58, v_59;
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
    v_59 = nil;
    v_55 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_58 = v_55;
v_12:
    v_55 = stack[0];
    if (!consp(v_55)) goto v_19;
    else goto v_20;
v_19:
    v_55 = stack[0];
    goto v_18;
v_20:
    v_55 = stack[0];
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    goto v_18;
    v_55 = nil;
v_18:
    stack[-1] = v_55;
    v_57 = v_55;
    v_56 = v_57;
    v_55 = basic_elt(env, 1); // ex
    if (v_56 == v_55) goto v_30;
    else goto v_31;
v_30:
    v_55 = lisp_true;
    goto v_29;
v_31:
    v_56 = v_57;
    v_55 = basic_elt(env, 2); // all
    v_55 = (v_56 == v_55 ? lisp_true : nil);
    goto v_29;
    v_55 = nil;
v_29:
    if (v_55 == nil) goto v_15;
    else goto v_16;
v_15:
    goto v_11;
v_16:
    v_56 = stack[-1];
    v_55 = v_59;
    if (equal(v_56, v_55)) goto v_44;
    v_55 = v_58;
    v_55 = add1(v_55);
    env = stack[-2];
    v_58 = v_55;
    v_55 = stack[-1];
    v_59 = v_55;
    goto v_42;
v_44:
v_42:
    v_55 = stack[0];
    if (!car_legal(v_55)) v_55 = cdrerror(v_55); else
    v_55 = cdr(v_55);
    if (!car_legal(v_55)) v_55 = cdrerror(v_55); else
    v_55 = cdr(v_55);
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    stack[0] = v_55;
    goto v_12;
v_11:
    v_55 = v_58;
    return onevalue(v_55);
}



// Code for quotient!-mod!-p

static LispObject CC_quotientKmodKp(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_115 = stack[0];
    if (v_115 == nil) goto v_7;
    else goto v_8;
v_7:
    v_115 = basic_elt(env, 1); // "b=0 in quotient-mod-p"
    {
        LispObject fn = basic_elt(env, 3); // errorf
        return (*qfn1(fn))(fn, v_115);
    }
v_8:
    v_115 = stack[0];
    if (!consp(v_115)) goto v_16;
    else goto v_17;
v_16:
    v_115 = lisp_true;
    goto v_15;
v_17:
    v_115 = stack[0];
    if (!car_legal(v_115)) v_115 = carerror(v_115); else
    v_115 = car(v_115);
    v_115 = (consp(v_115) ? nil : lisp_true);
    goto v_15;
    v_115 = nil;
v_15:
    if (v_115 == nil) goto v_13;
    v_115 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // safe!-modular!-reciprocal
    v_115 = (*qfn1(fn))(fn, v_115);
    }
    env = stack[-3];
    v_116 = v_115;
    if (v_116 == nil) goto v_32;
    else goto v_33;
v_32:
    v_115 = nil;
    setvalue(basic_elt(env, 2), v_115); // exact!-quotient!-flag
    goto v_27;
v_33:
    v_116 = stack[-1];
    {
        LispObject fn = basic_elt(env, 5); // multiply!-by!-constant!-mod!-p
        return (*qfn2(fn))(fn, v_116, v_115);
    }
    v_115 = nil;
v_27:
    goto v_6;
v_13:
    v_115 = stack[-1];
    if (v_115 == nil) goto v_41;
    else goto v_42;
v_41:
    v_115 = nil;
    goto v_6;
v_42:
    v_115 = stack[-1];
    if (!consp(v_115)) goto v_49;
    else goto v_50;
v_49:
    v_115 = lisp_true;
    goto v_48;
v_50:
    v_115 = stack[-1];
    if (!car_legal(v_115)) v_115 = carerror(v_115); else
    v_115 = car(v_115);
    v_115 = (consp(v_115) ? nil : lisp_true);
    goto v_48;
    v_115 = nil;
v_48:
    if (v_115 == nil) goto v_46;
    v_115 = nil;
    setvalue(basic_elt(env, 2), v_115); // exact!-quotient!-flag
    goto v_6;
v_46:
    v_115 = stack[-1];
    if (!car_legal(v_115)) v_115 = carerror(v_115); else
    v_115 = car(v_115);
    if (!car_legal(v_115)) v_115 = carerror(v_115); else
    v_115 = car(v_115);
    if (!car_legal(v_115)) v_116 = carerror(v_115); else
    v_116 = car(v_115);
    v_115 = stack[0];
    if (!car_legal(v_115)) v_115 = carerror(v_115); else
    v_115 = car(v_115);
    if (!car_legal(v_115)) v_115 = carerror(v_115); else
    v_115 = car(v_115);
    if (!car_legal(v_115)) v_115 = carerror(v_115); else
    v_115 = car(v_115);
    if (equal(v_116, v_115)) goto v_59;
    else goto v_60;
v_59:
    v_117 = stack[-1];
    v_116 = stack[0];
    v_115 = stack[0];
    if (!car_legal(v_115)) v_115 = carerror(v_115); else
    v_115 = car(v_115);
    if (!car_legal(v_115)) v_115 = carerror(v_115); else
    v_115 = car(v_115);
    if (!car_legal(v_115)) v_115 = carerror(v_115); else
    v_115 = car(v_115);
    {
        LispObject fn = basic_elt(env, 6); // xquotient!-mod!-p
        return (*qfn3(fn))(fn, v_117, v_116, v_115);
    }
v_60:
    v_115 = stack[-1];
    if (!car_legal(v_115)) v_115 = carerror(v_115); else
    v_115 = car(v_115);
    if (!car_legal(v_115)) v_115 = carerror(v_115); else
    v_115 = car(v_115);
    if (!car_legal(v_115)) v_116 = carerror(v_115); else
    v_116 = car(v_115);
    v_115 = stack[0];
    if (!car_legal(v_115)) v_115 = carerror(v_115); else
    v_115 = car(v_115);
    if (!car_legal(v_115)) v_115 = carerror(v_115); else
    v_115 = car(v_115);
    if (!car_legal(v_115)) v_115 = carerror(v_115); else
    v_115 = car(v_115);
    {   LispObject fn = basic_elt(env, 7); // ordop
    v_115 = (*qfn2(fn))(fn, v_116, v_115);
    }
    env = stack[-3];
    if (v_115 == nil) goto v_77;
    v_115 = stack[-1];
    if (!car_legal(v_115)) v_115 = carerror(v_115); else
    v_115 = car(v_115);
    if (!car_legal(v_115)) v_116 = cdrerror(v_115); else
    v_116 = cdr(v_115);
    v_115 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // quotient!-mod!-p
    stack[-2] = (*qfn2(fn))(fn, v_116, v_115);
    }
    env = stack[-3];
    v_115 = stack[-1];
    if (!car_legal(v_115)) v_116 = cdrerror(v_115); else
    v_116 = cdr(v_115);
    v_115 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // quotient!-mod!-p
    v_115 = (*qfn2(fn))(fn, v_116, v_115);
    }
    v_116 = stack[-2];
    v_117 = v_116;
    if (v_117 == nil) goto v_100;
    else goto v_101;
v_100:
    goto v_99;
v_101:
    v_117 = stack[-1];
    if (!car_legal(v_117)) v_117 = carerror(v_117); else
    v_117 = car(v_117);
    if (!car_legal(v_117)) v_117 = carerror(v_117); else
    v_117 = car(v_117);
    return acons(v_117, v_116, v_115);
    v_115 = nil;
v_99:
    goto v_6;
v_77:
    v_115 = nil;
    setvalue(basic_elt(env, 2), v_115); // exact!-quotient!-flag
    goto v_6;
    v_115 = nil;
v_6:
    return onevalue(v_115);
}



// Code for matsm!*1

static LispObject CC_matsmH1(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_121, v_122;
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
    v_121 = v_2;
// end of prologue
    stack[-8] = basic_elt(env, 1); // mat
    stack[-7] = v_121;
    v_121 = stack[-7];
    if (v_121 == nil) goto v_17;
    else goto v_18;
v_17:
    v_121 = nil;
    goto v_12;
v_18:
    v_121 = stack[-7];
    if (!car_legal(v_121)) v_121 = carerror(v_121); else
    v_121 = car(v_121);
    stack[-3] = v_121;
    v_121 = stack[-3];
    if (v_121 == nil) goto v_34;
    else goto v_35;
v_34:
    v_121 = nil;
    goto v_29;
v_35:
    v_121 = stack[-3];
    if (!car_legal(v_121)) v_121 = carerror(v_121); else
    v_121 = car(v_121);
    {   LispObject fn = basic_elt(env, 3); // subs2!*
    v_121 = (*qfn1(fn))(fn, v_121);
    }
    env = stack[-9];
    {   LispObject fn = basic_elt(env, 4); // !*q2a
    v_121 = (*qfn1(fn))(fn, v_121);
    }
    env = stack[-9];
    v_121 = ncons(v_121);
    env = stack[-9];
    stack[-1] = v_121;
    stack[-2] = v_121;
v_30:
    v_121 = stack[-3];
    if (!car_legal(v_121)) v_121 = cdrerror(v_121); else
    v_121 = cdr(v_121);
    stack[-3] = v_121;
    v_121 = stack[-3];
    if (v_121 == nil) goto v_49;
    else goto v_50;
v_49:
    v_121 = stack[-2];
    goto v_29;
v_50:
    stack[0] = stack[-1];
    v_121 = stack[-3];
    if (!car_legal(v_121)) v_121 = carerror(v_121); else
    v_121 = car(v_121);
    {   LispObject fn = basic_elt(env, 3); // subs2!*
    v_121 = (*qfn1(fn))(fn, v_121);
    }
    env = stack[-9];
    {   LispObject fn = basic_elt(env, 4); // !*q2a
    v_121 = (*qfn1(fn))(fn, v_121);
    }
    env = stack[-9];
    v_121 = ncons(v_121);
    env = stack[-9];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_121);
    v_121 = stack[-1];
    if (!car_legal(v_121)) v_121 = cdrerror(v_121); else
    v_121 = cdr(v_121);
    stack[-1] = v_121;
    goto v_30;
v_29:
    v_121 = ncons(v_121);
    env = stack[-9];
    stack[-5] = v_121;
    stack[-6] = v_121;
v_13:
    v_121 = stack[-7];
    if (!car_legal(v_121)) v_121 = cdrerror(v_121); else
    v_121 = cdr(v_121);
    stack[-7] = v_121;
    v_121 = stack[-7];
    if (v_121 == nil) goto v_68;
    else goto v_69;
v_68:
    v_121 = stack[-6];
    goto v_12;
v_69:
    stack[-4] = stack[-5];
    v_121 = stack[-7];
    if (!car_legal(v_121)) v_121 = carerror(v_121); else
    v_121 = car(v_121);
    stack[-3] = v_121;
    v_121 = stack[-3];
    if (v_121 == nil) goto v_86;
    else goto v_87;
v_86:
    v_121 = nil;
    goto v_81;
v_87:
    v_121 = stack[-3];
    if (!car_legal(v_121)) v_121 = carerror(v_121); else
    v_121 = car(v_121);
    {   LispObject fn = basic_elt(env, 3); // subs2!*
    v_121 = (*qfn1(fn))(fn, v_121);
    }
    env = stack[-9];
    {   LispObject fn = basic_elt(env, 4); // !*q2a
    v_121 = (*qfn1(fn))(fn, v_121);
    }
    env = stack[-9];
    v_121 = ncons(v_121);
    env = stack[-9];
    stack[-1] = v_121;
    stack[-2] = v_121;
v_82:
    v_121 = stack[-3];
    if (!car_legal(v_121)) v_121 = cdrerror(v_121); else
    v_121 = cdr(v_121);
    stack[-3] = v_121;
    v_121 = stack[-3];
    if (v_121 == nil) goto v_101;
    else goto v_102;
v_101:
    v_121 = stack[-2];
    goto v_81;
v_102:
    stack[0] = stack[-1];
    v_121 = stack[-3];
    if (!car_legal(v_121)) v_121 = carerror(v_121); else
    v_121 = car(v_121);
    {   LispObject fn = basic_elt(env, 3); // subs2!*
    v_121 = (*qfn1(fn))(fn, v_121);
    }
    env = stack[-9];
    {   LispObject fn = basic_elt(env, 4); // !*q2a
    v_121 = (*qfn1(fn))(fn, v_121);
    }
    env = stack[-9];
    v_121 = ncons(v_121);
    env = stack[-9];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_121);
    v_121 = stack[-1];
    if (!car_legal(v_121)) v_121 = cdrerror(v_121); else
    v_121 = cdr(v_121);
    stack[-1] = v_121;
    goto v_82;
v_81:
    v_121 = ncons(v_121);
    env = stack[-9];
    if (!car_legal(stack[-4])) rplacd_fails(stack[-4]);
    setcdr(stack[-4], v_121);
    v_121 = stack[-5];
    if (!car_legal(v_121)) v_121 = cdrerror(v_121); else
    v_121 = cdr(v_121);
    stack[-5] = v_121;
    goto v_13;
v_12:
    v_121 = cons(stack[-8], v_121);
    env = stack[-9];
    v_122 = nil;
    setvalue(basic_elt(env, 2), v_122); // !*sub2
    return onevalue(v_121);
}



// Code for dipprodin1

static LispObject CC_dipprodin1(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    v_36 = stack[0];
    if (v_36 == nil) goto v_12;
    else goto v_13;
v_12:
    v_37 = stack[-3];
    v_36 = qvalue(basic_elt(env, 1)); // dipzero
    {
        LispObject fn = basic_elt(env, 2); // nreverse
        return (*qfn2(fn))(fn, v_37, v_36);
    }
v_13:
    v_37 = stack[-1];
    v_36 = stack[0];
    if (!car_legal(v_36)) v_36 = carerror(v_36); else
    v_36 = car(v_36);
    {   LispObject fn = basic_elt(env, 3); // evsum
    v_37 = (*qfn2(fn))(fn, v_37, v_36);
    }
    env = stack[-4];
    v_36 = stack[-3];
    v_36 = cons(v_37, v_36);
    env = stack[-4];
    stack[-3] = v_36;
    v_37 = stack[-2];
    v_36 = stack[0];
    if (!car_legal(v_36)) v_36 = cdrerror(v_36); else
    v_36 = cdr(v_36);
    if (!car_legal(v_36)) v_36 = carerror(v_36); else
    v_36 = car(v_36);
    {   LispObject fn = basic_elt(env, 4); // bcprod
    v_37 = (*qfn2(fn))(fn, v_37, v_36);
    }
    env = stack[-4];
    v_36 = stack[-3];
    v_36 = cons(v_37, v_36);
    env = stack[-4];
    stack[-3] = v_36;
    v_36 = stack[0];
    if (!car_legal(v_36)) v_36 = cdrerror(v_36); else
    v_36 = cdr(v_36);
    if (!car_legal(v_36)) v_36 = cdrerror(v_36); else
    v_36 = cdr(v_36);
    stack[0] = v_36;
    goto v_9;
    v_36 = nil;
    return onevalue(v_36);
}



// Code for gsugar

static LispObject CC_gsugar(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_49 = qvalue(basic_elt(env, 1)); // !*gsugar
    if (v_49 == nil) goto v_7;
    v_49 = stack[0];
    if (v_49 == nil) goto v_15;
    else goto v_16;
v_15:
    v_49 = lisp_true;
    goto v_14;
v_16:
    v_49 = stack[0];
    if (!car_legal(v_49)) v_49 = cdrerror(v_49); else
    v_49 = cdr(v_49);
    if (!car_legal(v_49)) v_49 = cdrerror(v_49); else
    v_49 = cdr(v_49);
    if (!car_legal(v_49)) v_49 = cdrerror(v_49); else
    v_49 = cdr(v_49);
    if (!car_legal(v_49)) v_49 = carerror(v_49); else
    v_49 = car(v_49);
    v_49 = (v_49 == nil ? lisp_true : nil);
    goto v_14;
    v_49 = nil;
v_14:
    if (v_49 == nil) goto v_12;
    v_49 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_10;
v_12:
    v_50 = stack[0];
    v_49 = basic_elt(env, 2); // sugar
    {   LispObject fn = basic_elt(env, 4); // vdpgetprop
    v_49 = (*qfn2(fn))(fn, v_50, v_49);
    }
    env = stack[-2];
    goto v_10;
    v_49 = nil;
v_10:
    stack[-1] = v_49;
    v_49 = stack[-1];
    if (v_49 == nil) goto v_36;
    else goto v_35;
v_36:
    v_50 = basic_elt(env, 3); // "*** missing sugar"
    v_49 = stack[0];
    v_49 = list2(v_50, v_49);
    env = stack[-2];
    v_49 = Lprint(nil, v_49);
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 5); // backtrace
    v_49 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
    v_49 = stack[0];
    {   LispObject fn = basic_elt(env, 6); // vdptdeg
    v_49 = (*qfn1(fn))(fn, v_49);
    }
    env = stack[-2];
    stack[-1] = v_49;
    v_50 = stack[0];
    v_49 = stack[-1];
    {   LispObject fn = basic_elt(env, 7); // gsetsugar
    v_49 = (*qfn2(fn))(fn, v_50, v_49);
    }
    v_49 = stack[-1];
v_35:
    goto v_5;
v_7:
    v_49 = nil;
v_5:
    return onevalue(v_49);
}



// Code for noncommuting

static LispObject CC_noncommuting(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_69, v_70, v_71, v_72;
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
    v_70 = v_3;
    v_71 = v_2;
// end of prologue
    v_72 = nil;
    v_69 = v_71;
    if (!consp(v_69)) goto v_11;
    else goto v_12;
v_11:
    v_69 = v_71;
    goto v_10;
v_12:
    v_69 = v_71;
    if (!car_legal(v_69)) v_69 = carerror(v_69); else
    v_69 = car(v_69);
    goto v_10;
    v_69 = nil;
v_10:
    v_71 = v_69;
    v_69 = v_70;
    if (!consp(v_69)) goto v_21;
    else goto v_22;
v_21:
    v_69 = v_70;
    goto v_20;
v_22:
    v_69 = v_70;
    if (!car_legal(v_69)) v_69 = carerror(v_69); else
    v_69 = car(v_69);
    goto v_20;
    v_69 = nil;
v_20:
    v_70 = v_69;
    v_69 = v_71;
    if (!consp(v_69)) goto v_36;
    else goto v_37;
v_36:
    v_69 = v_71;
    if (!symbolp(v_69)) v_69 = nil;
    else { v_69 = qfastgets(v_69);
           if (v_69 != nil) { v_69 = elt(v_69, 0); // noncom
#ifdef RECORD_GET
             if (v_69 == SPID_NOPROP)
                record_get(elt(fastget_names, 0), 0),
                v_69 = nil;
             else record_get(elt(fastget_names, 0), 1),
                v_69 = lisp_true; }
           else record_get(elt(fastget_names, 0), 0); }
#else
             if (v_69 == SPID_NOPROP) v_69 = nil; else v_69 = lisp_true; }}
#endif
    goto v_35;
v_37:
    v_69 = v_71;
    if (!car_legal(v_69)) v_69 = carerror(v_69); else
    v_69 = car(v_69);
    if (!symbolp(v_69)) v_69 = nil;
    else { v_69 = qfastgets(v_69);
           if (v_69 != nil) { v_69 = elt(v_69, 0); // noncom
#ifdef RECORD_GET
             if (v_69 == SPID_NOPROP)
                record_get(elt(fastget_names, 0), 0),
                v_69 = nil;
             else record_get(elt(fastget_names, 0), 1),
                v_69 = lisp_true; }
           else record_get(elt(fastget_names, 0), 0); }
#else
             if (v_69 == SPID_NOPROP) v_69 = nil; else v_69 = lisp_true; }}
#endif
    goto v_35;
    v_69 = nil;
v_35:
    if (v_69 == nil) goto v_31;
    v_69 = v_70;
    if (!consp(v_69)) goto v_49;
    else goto v_50;
v_49:
    v_69 = v_70;
    if (!symbolp(v_69)) v_69 = nil;
    else { v_69 = qfastgets(v_69);
           if (v_69 != nil) { v_69 = elt(v_69, 0); // noncom
#ifdef RECORD_GET
             if (v_69 == SPID_NOPROP)
                record_get(elt(fastget_names, 0), 0),
                v_69 = nil;
             else record_get(elt(fastget_names, 0), 1),
                v_69 = lisp_true; }
           else record_get(elt(fastget_names, 0), 0); }
#else
             if (v_69 == SPID_NOPROP) v_69 = nil; else v_69 = lisp_true; }}
#endif
    goto v_48;
v_50:
    v_69 = v_70;
    if (!car_legal(v_69)) v_69 = carerror(v_69); else
    v_69 = car(v_69);
    if (!symbolp(v_69)) v_69 = nil;
    else { v_69 = qfastgets(v_69);
           if (v_69 != nil) { v_69 = elt(v_69, 0); // noncom
#ifdef RECORD_GET
             if (v_69 == SPID_NOPROP)
                record_get(elt(fastget_names, 0), 0),
                v_69 = nil;
             else record_get(elt(fastget_names, 0), 1),
                v_69 = lisp_true; }
           else record_get(elt(fastget_names, 0), 0); }
#else
             if (v_69 == SPID_NOPROP) v_69 = nil; else v_69 = lisp_true; }}
#endif
    goto v_48;
    v_69 = nil;
v_48:
    if (v_69 == nil) goto v_31;
    goto v_32;
v_31:
    goto v_30;
v_32:
    v_69 = basic_elt(env, 1); // noncommutes
    v_69 = get(v_71, v_69);
    v_69 = Lmember(nil, v_70, v_69);
    v_72 = v_69;
    goto v_30;
v_30:
    v_69 = v_72;
    return onevalue(v_69);
}



// Code for remcomma

static LispObject CC_remcomma(LispObject env,
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
    v_19 = basic_elt(env, 1); // !*comma!*
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



// Code for mv!-domainlist!-!*

static LispObject CC_mvKdomainlistKH(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    stack[-2] = nil;
v_8:
    v_26 = stack[0];
    if (v_26 == nil) goto v_11;
    else goto v_12;
v_11:
    v_26 = stack[-2];
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn1(fn))(fn, v_26);
    }
v_12:
    v_27 = stack[-1];
    v_26 = stack[0];
    if (!car_legal(v_26)) v_26 = carerror(v_26); else
    v_26 = car(v_26);
    v_27 = times2(v_27, v_26);
    env = stack[-3];
    v_26 = stack[-2];
    v_26 = cons(v_27, v_26);
    env = stack[-3];
    stack[-2] = v_26;
    v_26 = stack[0];
    if (!car_legal(v_26)) v_26 = cdrerror(v_26); else
    v_26 = cdr(v_26);
    stack[0] = v_26;
    goto v_8;
    v_26 = nil;
    return onevalue(v_26);
}



// Code for modquotient!:

static LispObject CC_modquotientT(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    v_13 = v_3;
    v_12 = v_2;
// end of prologue
    if (!car_legal(v_12)) stack[0] = cdrerror(v_12); else
    stack[0] = cdr(v_12);
    v_12 = v_13;
    if (!car_legal(v_12)) v_12 = cdrerror(v_12); else
    v_12 = cdr(v_12);
    {   LispObject fn = basic_elt(env, 1); // general!-modular!-reciprocal
    v_12 = (*qfn1(fn))(fn, v_12);
    }
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // general!-modular!-times
    v_12 = (*qfn2(fn))(fn, stack[0], v_12);
    }
    env = stack[-1];
    {
        LispObject fn = basic_elt(env, 3); // !*modular2f
        return (*qfn1(fn))(fn, v_12);
    }
}



// Code for conv!:mt

static LispObject CC_convTmt(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_98, v_99;
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
    v_99 = stack[-2];
    v_98 = basic_elt(env, 1); // !:rd!:
    if (!consp(v_99)) goto v_16;
    v_99 = car(v_99);
    if (v_99 == v_98) goto v_15;
    else goto v_16;
v_15:
    v_98 = stack[-2];
    if (!car_legal(v_98)) v_98 = cdrerror(v_98); else
    v_98 = cdr(v_98);
    v_98 = (consp(v_98) ? nil : lisp_true);
    v_98 = (v_98 == nil ? lisp_true : nil);
    goto v_14;
v_16:
    v_98 = nil;
    goto v_14;
    v_98 = nil;
v_14:
    if (v_98 == nil) goto v_12;
    v_98 = stack[0];
    v_98 = integerp(v_98);
    if (v_98 == nil) goto v_29;
    else goto v_30;
v_29:
    v_98 = nil;
    goto v_28;
v_30:
    v_99 = stack[0];
    v_98 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_98 = static_cast<LispObject>(greaterp2(v_99, v_98));
    v_98 = v_98 ? lisp_true : nil;
    env = stack[-4];
    goto v_28;
    v_98 = nil;
v_28:
    goto v_10;
v_12:
    v_98 = nil;
    goto v_10;
    v_98 = nil;
v_10:
    if (v_98 == nil) goto v_8;
    v_98 = stack[-2];
    if (!car_legal(v_98)) v_98 = cdrerror(v_98); else
    v_98 = cdr(v_98);
    if (!car_legal(v_98)) v_98 = carerror(v_98); else
    v_98 = car(v_98);
    v_98 = Labsval(nil, v_98);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 2); // msd
    v_99 = (*qfn1(fn))(fn, v_98);
    }
    env = stack[-4];
    v_98 = stack[0];
    v_99 = difference2(v_99, v_98);
    env = stack[-4];
    stack[0] = v_99;
    v_98 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_99 == v_98) goto v_44;
    else goto v_45;
v_44:
    v_98 = stack[-2];
    goto v_43;
v_45:
    v_99 = stack[0];
    v_98 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_98 = static_cast<LispObject>(lessp2(v_99, v_98));
    v_98 = v_98 ? lisp_true : nil;
    env = stack[-4];
    if (v_98 == nil) goto v_56;
    v_98 = stack[0];
    v_98 = negate(v_98);
    env = stack[-4];
    stack[-3] = v_98;
    stack[-1] = basic_elt(env, 1); // !:rd!:
    v_98 = stack[-2];
    if (!car_legal(v_98)) v_98 = cdrerror(v_98); else
    v_98 = cdr(v_98);
    if (!car_legal(v_98)) v_99 = carerror(v_98); else
    v_99 = car(v_98);
    v_98 = stack[-3];
    {   LispObject fn = basic_elt(env, 3); // ashift
    stack[0] = (*qfn2(fn))(fn, v_99, v_98);
    }
    env = stack[-4];
    v_98 = stack[-2];
    if (!car_legal(v_98)) v_98 = cdrerror(v_98); else
    v_98 = cdr(v_98);
    if (!car_legal(v_98)) v_99 = cdrerror(v_98); else
    v_99 = cdr(v_98);
    v_98 = stack[-3];
    v_98 = difference2(v_99, v_98);
    {
        LispObject v_104 = stack[-1];
        LispObject v_105 = stack[0];
        return list2star(v_104, v_105, v_98);
    }
v_56:
    v_98 = stack[0];
    v_98 = sub1(v_98);
    env = stack[-4];
    stack[-3] = v_98;
    stack[-1] = basic_elt(env, 1); // !:rd!:
    v_98 = stack[-2];
    if (!car_legal(v_98)) v_98 = cdrerror(v_98); else
    v_98 = cdr(v_98);
    if (!car_legal(v_98)) stack[0] = carerror(v_98); else
    stack[0] = car(v_98);
    v_98 = stack[-3];
    v_98 = negate(v_98);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 3); // ashift
    stack[0] = (*qfn2(fn))(fn, stack[0], v_98);
    }
    env = stack[-4];
    v_98 = stack[-2];
    if (!car_legal(v_98)) v_98 = cdrerror(v_98); else
    v_98 = cdr(v_98);
    if (!car_legal(v_98)) v_99 = cdrerror(v_98); else
    v_99 = cdr(v_98);
    v_98 = stack[-3];
    v_98 = plus2(v_99, v_98);
    env = stack[-4];
    v_98 = list2star(stack[-1], stack[0], v_98);
    env = stack[-4];
    {
        LispObject fn = basic_elt(env, 4); // round!:last
        return (*qfn1(fn))(fn, v_98);
    }
    v_98 = nil;
v_43:
    goto v_6;
v_8:
    v_98 = basic_elt(env, 0); // conv!:mt
    {
        LispObject fn = basic_elt(env, 5); // bflerrmsg
        return (*qfn1(fn))(fn, v_98);
    }
    v_98 = nil;
v_6:
    return onevalue(v_98);
}



// Code for multd!*

static LispObject CC_multdH(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    v_30 = stack[0];
    v_29 = basic_elt(env, 1); // kernel
    {   LispObject fn = basic_elt(env, 2); // xtype
    v_29 = (*qfn2(fn))(fn, v_30, v_29);
    }
    env = stack[-2];
    if (v_29 == nil) goto v_8;
    v_29 = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // value
    stack[-1] = (*qfn1(fn))(fn, v_29);
    }
    env = stack[-2];
    v_29 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // value
    v_30 = (*qfn1(fn))(fn, v_29);
    }
    env = stack[-2];
    v_29 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 4); // to
    v_30 = (*qfn2(fn))(fn, v_30, v_29);
    }
    env = stack[-2];
    v_29 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_29 = cons(v_30, v_29);
    env = stack[-2];
    v_29 = ncons(v_29);
    env = stack[-2];
    {
        LispObject v_33 = stack[-1];
        LispObject fn = basic_elt(env, 5); // multd
        return (*qfn2(fn))(fn, v_33, v_29);
    }
v_8:
    v_29 = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // value
    stack[-1] = (*qfn1(fn))(fn, v_29);
    }
    env = stack[-2];
    v_29 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // value
    v_29 = (*qfn1(fn))(fn, v_29);
    }
    env = stack[-2];
    {
        LispObject v_34 = stack[-1];
        LispObject fn = basic_elt(env, 5); // multd
        return (*qfn2(fn))(fn, v_34, v_29);
    }
    v_29 = nil;
    return onevalue(v_29);
}



setup_type const u15_setup[] =
{
    {"diff-over-k-mod-p",       G0W3,     G1W3,     G2W3,     CC_diffKoverKkKmodKp,G4W3},
    {"c:subs2multf",            G0W2,     G1W2,     CC_cTsubs2multf,G3W2,G4W2},
    {"testredh",                G0W1,     CC_testredh,G2W1,   G3W1,     G4W1},
    {"getcomb",                 G0W2,     G1W2,     CC_getcomb,G3W2,    G4W2},
    {"bc2a",                    G0W1,     CC_bc2a,  G2W1,     G3W1,     G4W1},
    {"lid",                     G0W1,     CC_lid,   G2W1,     G3W1,     G4W1},
    {"list+list",               G0W2,     G1W2,     CC_listLlist,G3W2,  G4W2},
    {"physop-multf",            G0W2,     G1W2,     CC_physopKmultf,G3W2,G4W2},
    {"form",                    G0W1,     CC_form,  G2W1,     G3W1,     G4W1},
    {"lengthcdr",               G0W1,     CC_lengthcdr,G2W1,  G3W1,     G4W1},
    {"mo_neworder",             G0W1,     CC_mo_neworder,G2W1,G3W1,     G4W1},
    {"dl_get2",                 G0W2,     G1W2,     CC_dl_get2,G3W2,    G4W2},
    {"general-times-mod-p",     G0W2,     G1W2,     CC_generalKtimesKmodKp,G3W2,G4W2},
    {"efface1",                 G0W2,     G1W2,     CC_efface1,G3W2,    G4W2},
    {"rsubla",                  G0W2,     G1W2,     CC_rsubla,G3W2,     G4W2},
    {"cl_smsimpl-junct",        G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_cl_smsimplKjunct},
    {"sq2sspl",                 G0W2,     G1W2,     CC_sq2sspl,G3W2,    G4W2},
    {"sq2sscfpl",               G0W2,     G1W2,     CC_sq2sscfpl,G3W2,  G4W2},
    {"horner-rule-mod-p",       G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_hornerKruleKmodKp},
    {"downwght1",               G0W2,     G1W2,     CC_downwght1,G3W2,  G4W2},
    {"newenv",                  G0W1,     CC_newenv,G2W1,     G3W1,     G4W1},
    {"arg2of2",                 G0W2,     G1W2,     CC_arg2of2,G3W2,    G4W2},
    {"evenfree",                G0W1,     CC_evenfree,G2W1,   G3W1,     G4W1},
    {"fortranprecedence",       G0W1,     CC_fortranprecedence,G2W1,G3W1,G4W1},
    {"assert_typesyntaxp",      G0W1,     CC_assert_typesyntaxp,G2W1,G3W1,G4W1},
    {"mo=revlexcomp",           G0W2,     G1W2,     CC_moMrevlexcomp,G3W2,G4W2},
    {"artimes:",                G0W2,     G1W2,     CC_artimesT,G3W2,   G4W2},
    {"lexer_word_continues",    G0W1,     CC_lexer_word_continues,G2W1,G3W1,G4W1},
    {"quotfdx",                 G0W2,     G1W2,     CC_quotfdx,G3W2,    G4W2},
    {"simpexpt",                G0W1,     CC_simpexpt,G2W1,   G3W1,     G4W1},
    {"lx2xx",                   G0W1,     CC_lx2xx, G2W1,     G3W1,     G4W1},
    {"ibalp_negateat",          G0W1,     CC_ibalp_negateat,G2W1,G3W1,  G4W1},
    {"dip_fmon",                G0W2,     G1W2,     CC_dip_fmon,G3W2,   G4W2},
    {"maxtype",                 G0W1,     CC_maxtype,G2W1,    G3W1,     G4W1},
    {"bind",                    G0W2,     G1W2,     CC_bind,  G3W2,     G4W2},
    {"freeoffl",                G0W2,     G1W2,     CC_freeoffl,G3W2,   G4W2},
    {"triviallcm",              G0W3,     G1W3,     G2W3,     CC_triviallcm,G4W3},
    {"aminusp:1",               G0W1,     CC_aminuspT1,G2W1,  G3W1,     G4W1},
    {"dcombine",                G0W3,     G1W3,     G2W3,     CC_dcombine,G4W3},
    {"setk",                    G0W2,     G1W2,     CC_setk,  G3W2,     G4W2},
    {"lalr_resolve_conflicts",  G0W2,     G1W2,     CC_lalr_resolve_conflicts,G3W2,G4W2},
    {"cl_atml1",                G0W1,     CC_cl_atml1,G2W1,   G3W1,     G4W1},
    {"mri_realvarp",            G0W1,     CC_mri_realvarp,G2W1,G3W1,    G4W1},
    {"cl_qb",                   G0W1,     CC_cl_qb, G2W1,     G3W1,     G4W1},
    {"quotient-mod-p",          G0W2,     G1W2,     CC_quotientKmodKp,G3W2,G4W2},
    {"matsm*1",                 G0W1,     CC_matsmH1,G2W1,    G3W1,     G4W1},
    {"dipprodin1",              G0W3,     G1W3,     G2W3,     CC_dipprodin1,G4W3},
    {"gsugar",                  G0W1,     CC_gsugar,G2W1,     G3W1,     G4W1},
    {"noncommuting",            G0W2,     G1W2,     CC_noncommuting,G3W2,G4W2},
    {"remcomma",                G0W1,     CC_remcomma,G2W1,   G3W1,     G4W1},
    {"mv-domainlist-*",         G0W2,     G1W2,     CC_mvKdomainlistKH,G3W2,G4W2},
    {"modquotient:",            G0W2,     G1W2,     CC_modquotientT,G3W2,G4W2},
    {"conv:mt",                 G0W2,     G1W2,     CC_convTmt,G3W2,    G4W2},
    {"multd*",                  G0W2,     G1W2,     CC_multdH,G3W2,     G4W2},
    {nullptr, 
        reinterpret_cast<no_args *>(
            reinterpret_cast<uintptr_t>("u15")),
        reinterpret_cast<one_arg *>(
            reinterpret_cast<uintptr_t>("143239 1709677 6224182")),
        nullptr, nullptr, nullptr}
};

// end of generated code
