
// $destdir/u42.c        Machine generated C code

// $Id$

#include "config.h"
#include "headers.h"



// Code for findoptrow

static LispObject CC_findoptrow(LispObject env,
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(10);
// copy arguments values to proper place
    stack[-6] = v_4;
    stack[0] = v_3;
    stack[-7] = v_2;
// end of prologue
    stack[-8] = nil;
    stack[-2] = stack[0];
    stack[-1] = qvalue(basic_elt(env, 1)); // codmat
    v_101 = qvalue(basic_elt(env, 2)); // maxvar
    v_100 = stack[-7];
    v_100 = plus2(v_101, v_100);
    env = stack[-9];
    v_101 = Lgetv(nil, stack[-1], v_100);
    env = stack[-9];
    v_100 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_100 = Lgetv(nil, v_101, v_100);
    env = stack[-9];
    {   LispObject fn = basic_elt(env, 7); // pnthxzz
    v_100 = (*qfn2(fn))(fn, stack[-2], v_100);
    }
    env = stack[-9];
    if (!car_legal(v_100)) v_100 = carerror(v_100); else
    v_100 = car(v_100);
    if (!car_legal(v_100)) v_100 = cdrerror(v_100); else
    v_100 = cdr(v_100);
    if (!car_legal(v_100)) v_100 = carerror(v_100); else
    v_100 = car(v_100);
    stack[-4] = v_100;
    stack[-1] = qvalue(basic_elt(env, 1)); // codmat
    v_101 = qvalue(basic_elt(env, 2)); // maxvar
    v_100 = stack[0];
    v_100 = plus2(v_101, v_100);
    env = stack[-9];
    v_101 = Lgetv(nil, stack[-1], v_100);
    env = stack[-9];
    v_100 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_100 = Lgetv(nil, v_101, v_100);
    env = stack[-9];
    stack[-3] = v_100;
v_28:
    v_100 = stack[-3];
    if (v_100 == nil) goto v_38;
    else goto v_39;
v_38:
    goto v_27;
v_39:
    v_100 = stack[-3];
    if (!car_legal(v_100)) v_100 = carerror(v_100); else
    v_100 = car(v_100);
    stack[0] = v_100;
    stack[-1] = qvalue(basic_elt(env, 1)); // codmat
    v_101 = qvalue(basic_elt(env, 2)); // maxvar
    v_100 = stack[0];
    if (!car_legal(v_100)) v_100 = carerror(v_100); else
    v_100 = car(v_100);
    stack[-5] = v_100;
    v_100 = plus2(v_101, v_100);
    env = stack[-9];
    v_101 = Lgetv(nil, stack[-1], v_100);
    env = stack[-9];
    v_100 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_100 = Lgetv(nil, v_101, v_100);
    env = stack[-9];
    if (v_100 == nil) goto v_48;
    stack[-2] = stack[-5];
    stack[-1] = stack[-7];
    v_100 = stack[0];
    if (!car_legal(v_100)) v_100 = cdrerror(v_100); else
    v_100 = cdr(v_100);
    if (!car_legal(v_100)) stack[0] = carerror(v_100); else
    stack[0] = car(v_100);
    v_100 = stack[-4];
    v_100 = ncons(v_100);
    env = stack[-9];
    {   LispObject fn = basic_elt(env, 8); // testpr
    v_100 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_100);
    }
    env = stack[-9];
    stack[0] = v_100;
    if (!car_legal(v_100)) v_100 = cdrerror(v_100); else
    v_100 = cdr(v_100);
    if (v_100 == nil) goto v_59;
    else goto v_60;
v_59:
    v_101 = stack[-5];
    v_100 = qvalue(basic_elt(env, 3)); // roccup1
    v_100 = cons(v_101, v_100);
    env = stack[-9];
    setvalue(basic_elt(env, 3), v_100); // roccup1
    goto v_58;
v_60:
    v_100 = stack[0];
    v_101 = Llength(nil, v_100);
    env = stack[-9];
    stack[-1] = v_101;
    v_100 = stack[-6];
    v_100 = static_cast<LispObject>(greaterp2(v_101, v_100));
    v_100 = v_100 ? lisp_true : nil;
    env = stack[-9];
    if (v_100 == nil) goto v_78;
    v_100 = stack[-1];
    stack[-6] = v_100;
    setvalue(basic_elt(env, 4), v_100); // newnjsi
    v_100 = stack[-5];
    stack[-8] = v_100;
    v_100 = stack[0];
    setvalue(basic_elt(env, 5), v_100); // newjsi
    goto v_76;
v_78:
v_76:
    v_101 = stack[-5];
    v_100 = qvalue(basic_elt(env, 6)); // roccup2
    v_100 = cons(v_101, v_100);
    env = stack[-9];
    setvalue(basic_elt(env, 6), v_100); // roccup2
    goto v_58;
v_58:
    stack[0] = qvalue(basic_elt(env, 1)); // codmat
    v_101 = qvalue(basic_elt(env, 2)); // maxvar
    v_100 = stack[-5];
    v_100 = plus2(v_101, v_100);
    env = stack[-9];
    v_102 = Lgetv(nil, stack[0], v_100);
    env = stack[-9];
    v_101 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_100 = nil;
    v_100 = Lputv(nil, v_102, v_101, v_100);
    env = stack[-9];
    goto v_46;
v_48:
v_46:
    v_100 = stack[-3];
    if (!car_legal(v_100)) v_100 = cdrerror(v_100); else
    v_100 = cdr(v_100);
    stack[-3] = v_100;
    goto v_28;
v_27:
    v_100 = stack[-8];
    return onevalue(v_100);
}



// Code for diplmon2sq

static LispObject CC_diplmon2sq(LispObject env,
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
    v_12 = v_3;
    v_13 = v_2;
// end of prologue
    stack[0] = v_13;
    v_13 = v_12;
    v_12 = qvalue(basic_elt(env, 1)); // dipvars!*
    {   LispObject fn = basic_elt(env, 2); // dipev2f
    v_13 = (*qfn2(fn))(fn, v_13, v_12);
    }
    env = stack[-1];
    v_12 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_12 = cons(v_13, v_12);
    env = stack[-1];
    {
        LispObject v_15 = stack[0];
        LispObject fn = basic_elt(env, 3); // multsq
        return (*qfn2(fn))(fn, v_15, v_12);
    }
}



// Code for remove_least_item

static LispObject CC_remove_least_item(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_28, v_29;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_28 = v_2;
// end of prologue
v_6:
    v_29 = v_28;
    if (!car_legal(v_29)) v_29 = cdrerror(v_29); else
    v_29 = cdr(v_29);
    if (v_29 == nil) goto v_9;
    else goto v_10;
v_9:
    v_28 = basic_elt(env, 1); // "How did we get here?"
    {
        LispObject fn = basic_elt(env, 2); // rederr
        return (*qfn1(fn))(fn, v_28);
    }
v_10:
    v_29 = v_28;
    if (!car_legal(v_29)) v_29 = cdrerror(v_29); else
    v_29 = cdr(v_29);
    if (!car_legal(v_29)) v_29 = carerror(v_29); else
    v_29 = car(v_29);
    if (!car_legal(v_29)) v_29 = cdrerror(v_29); else
    v_29 = cdr(v_29);
    if (v_29 == nil) goto v_15;
    else goto v_16;
v_15:
    {
        LispObject fn = basic_elt(env, 3); // remove_root_item
        return (*qfn1(fn))(fn, v_28);
    }
v_16:
    if (!car_legal(v_28)) v_28 = cdrerror(v_28); else
    v_28 = cdr(v_28);
    if (!car_legal(v_28)) v_28 = carerror(v_28); else
    v_28 = car(v_28);
    goto v_6;
    v_28 = nil;
    return onevalue(v_28);
}



// Code for listpri

static LispObject CC_listpri(LispObject env,
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    stack[-2] = v_2;
// end of prologue
    v_65 = stack[-2];
    stack[0] = v_65;
    v_65 = stack[-2];
    if (!car_legal(v_65)) v_65 = cdrerror(v_65); else
    v_65 = cdr(v_65);
    stack[-2] = v_65;
    v_65 = basic_elt(env, 1); // !*lcbkt!*
    if (!symbolp(v_65)) v_65 = nil;
    else { v_65 = qfastgets(v_65);
           if (v_65 != nil) { v_65 = elt(v_65, 37); // prtch
#ifdef RECORD_GET
             if (v_65 != SPID_NOPROP)
                record_get(elt(fastget_names, 37), 1);
             else record_get(elt(fastget_names, 37), 0),
                v_65 = nil; }
           else record_get(elt(fastget_names, 37), 0); }
#else
             if (v_65 == SPID_NOPROP) v_65 = nil; }}
#endif
    {   LispObject fn = basic_elt(env, 7); // prin2!*
    v_65 = (*qfn1(fn))(fn, v_65);
    }
    env = stack[-4];
    v_65 = qvalue(basic_elt(env, 2)); // orig!*
    stack[-3] = v_65;
    v_66 = qvalue(basic_elt(env, 3)); // posn!*
    v_65 = static_cast<LispObject>(288)+TAG_FIXNUM; // 18
    v_65 = static_cast<LispObject>(lessp2(v_66, v_65));
    v_65 = v_65 ? lisp_true : nil;
    env = stack[-4];
    if (v_65 == nil) goto v_21;
    v_65 = qvalue(basic_elt(env, 3)); // posn!*
    goto v_19;
v_21:
    v_66 = qvalue(basic_elt(env, 2)); // orig!*
    v_65 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_65 = plus2(v_66, v_65);
    env = stack[-4];
    goto v_19;
    v_65 = nil;
v_19:
    setvalue(basic_elt(env, 2), v_65); // orig!*
    v_65 = stack[-2];
    if (v_65 == nil) goto v_33;
    else goto v_34;
v_33:
    goto v_10;
v_34:
    v_66 = stack[-2];
    v_65 = qvalue(basic_elt(env, 4)); // listpri_depth!*
    {   LispObject fn = basic_elt(env, 8); // treesizep
    v_65 = (*qfn2(fn))(fn, v_66, v_65);
    }
    env = stack[-4];
    stack[-1] = v_65;
v_9:
    v_65 = stack[-2];
    if (!car_legal(v_65)) v_65 = carerror(v_65); else
    v_65 = car(v_65);
    {   LispObject fn = basic_elt(env, 9); // negnumberchk
    v_66 = (*qfn1(fn))(fn, v_65);
    }
    env = stack[-4];
    v_65 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {   LispObject fn = basic_elt(env, 10); // maprint
    v_65 = (*qfn2(fn))(fn, v_66, v_65);
    }
    env = stack[-4];
    v_65 = stack[-2];
    if (!car_legal(v_65)) v_65 = cdrerror(v_65); else
    v_65 = cdr(v_65);
    stack[-2] = v_65;
    v_65 = stack[-2];
    if (v_65 == nil) goto v_48;
    else goto v_49;
v_48:
    goto v_10;
v_49:
    v_65 = basic_elt(env, 5); // !*comma!*
    {   LispObject fn = basic_elt(env, 11); // oprin
    v_65 = (*qfn1(fn))(fn, v_65);
    }
    env = stack[-4];
    v_65 = stack[-1];
    if (v_65 == nil) goto v_56;
    v_65 = lisp_true;
    {   LispObject fn = basic_elt(env, 12); // terpri!*
    v_65 = (*qfn1(fn))(fn, v_65);
    }
    env = stack[-4];
    goto v_54;
v_56:
v_54:
    goto v_9;
v_10:
    v_65 = basic_elt(env, 6); // !*rcbkt!*
    if (!symbolp(v_65)) v_65 = nil;
    else { v_65 = qfastgets(v_65);
           if (v_65 != nil) { v_65 = elt(v_65, 37); // prtch
#ifdef RECORD_GET
             if (v_65 != SPID_NOPROP)
                record_get(elt(fastget_names, 37), 1);
             else record_get(elt(fastget_names, 37), 0),
                v_65 = nil; }
           else record_get(elt(fastget_names, 37), 0); }
#else
             if (v_65 == SPID_NOPROP) v_65 = nil; }}
#endif
    {   LispObject fn = basic_elt(env, 7); // prin2!*
    v_65 = (*qfn1(fn))(fn, v_65);
    }
    env = stack[-4];
    v_65 = stack[-3];
    setvalue(basic_elt(env, 2), v_65); // orig!*
    v_65 = stack[0];
    return onevalue(v_65);
}



// Code for r2speclist1

static LispObject CC_r2speclist1(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_28, v_29, v_30;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_28 = v_2;
// end of prologue
    v_30 = v_28;
    v_29 = basic_elt(env, 1); // times
    if (!consp(v_30)) goto v_7;
    v_30 = car(v_30);
    if (v_30 == v_29) goto v_6;
    else goto v_7;
v_6:
    v_29 = v_28;
    if (!car_legal(v_29)) v_29 = cdrerror(v_29); else
    v_29 = cdr(v_29);
    if (!car_legal(v_29)) v_30 = carerror(v_29); else
    v_30 = car(v_29);
    v_29 = v_28;
    if (!car_legal(v_29)) v_29 = cdrerror(v_29); else
    v_29 = cdr(v_29);
    if (!car_legal(v_29)) v_29 = cdrerror(v_29); else
    v_29 = cdr(v_29);
    if (!car_legal(v_29)) v_29 = carerror(v_29); else
    v_29 = car(v_29);
    if (!car_legal(v_28)) v_28 = cdrerror(v_28); else
    v_28 = cdr(v_28);
    if (!car_legal(v_28)) v_28 = cdrerror(v_28); else
    v_28 = cdr(v_28);
    if (!car_legal(v_28)) v_28 = cdrerror(v_28); else
    v_28 = cdr(v_28);
    {
        LispObject fn = basic_elt(env, 2); // r2speclist2
        return (*qfn3(fn))(fn, v_30, v_29, v_28);
    }
v_7:
    v_29 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_29, v_28);
    v_28 = nil;
    return onevalue(v_28);
}



// Code for mkassign

static LispObject CC_mkassign(LispObject env,
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
    v_11 = basic_elt(env, 1); // setq
    return list3(v_11, v_10, v_9);
}



// Code for ev!-edgeloop

static LispObject CC_evKedgeloop(LispObject env,
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
    v_14 = qvalue(basic_elt(env, 1)); // ndim!*
    if (!car_legal(v_13)) v_13 = carerror(v_13); else
    v_13 = car(v_13);
    v_12 = Lassoc(nil, v_13, v_12);
    if (!car_legal(v_12)) v_12 = cdrerror(v_12); else
    v_12 = cdr(v_12);
    {
        LispObject fn = basic_elt(env, 2); // binc
        return (*qfn2(fn))(fn, v_14, v_12);
    }
}



// Code for primep27

static LispObject CC_primep27(LispObject env,
                         LispObject v_2)
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
    v_54 = stack[0];
    v_53 = static_cast<LispObject>(23888)+TAG_FIXNUM; // 1493
    if (v_54 == v_53) goto v_10;
    else goto v_11;
v_10:
    v_53 = lisp_true;
    goto v_7;
v_11:
    v_53 = nil;
    {   LispObject fn = basic_elt(env, 1); // set!-modulus
    v_53 = (*qfn1(fn))(fn, v_53);
    }
    env = stack[-2];
    stack[-1] = v_53;
    v_54 = static_cast<LispObject>(143328)+TAG_FIXNUM; // 8958
    v_53 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // miller!-rabin
    v_53 = (*qfn2(fn))(fn, v_54, v_53);
    }
    env = stack[-2];
    if (v_53 == nil) goto v_19;
    else goto v_20;
v_19:
    v_53 = nil;
    goto v_18;
v_20:
    v_54 = static_cast<LispObject>(75264)+TAG_FIXNUM; // 4704
    v_53 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // miller!-rabin
    v_53 = (*qfn2(fn))(fn, v_54, v_53);
    }
    env = stack[-2];
    if (v_53 == nil) goto v_29;
    else goto v_30;
v_29:
    v_53 = nil;
    goto v_28;
v_30:
    v_54 = stack[0];
    v_53 = static_cast<LispObject>(146102416)+TAG_FIXNUM; // 9131401
    if (v_54 == v_53) goto v_39;
    else goto v_40;
v_39:
    v_53 = lisp_true;
    goto v_38;
v_40:
    v_54 = stack[0];
    v_53 = static_cast<LispObject>(97425136)+TAG_FIXNUM; // 6089071
    v_53 = (v_54 == v_53 ? lisp_true : nil);
    goto v_38;
    v_53 = nil;
v_38:
    v_53 = (v_53 == nil ? lisp_true : nil);
    goto v_28;
    v_53 = nil;
v_28:
    goto v_18;
    v_53 = nil;
v_18:
    stack[0] = v_53;
    v_53 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // set!-modulus
    v_53 = (*qfn1(fn))(fn, v_53);
    }
    v_53 = stack[0];
v_7:
    return onevalue(v_53);
}



// Code for nonmult

static LispObject CC_nonmult(LispObject env,
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
// space for vars preserved across procedure calls
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_13 = qvalue(basic_elt(env, 1)); // vjets!*
    v_14 = Lreverse(nil, v_13);
    env = stack[-1];
    v_13 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // nth
    stack[0] = (*qfn2(fn))(fn, v_14, v_13);
    }
    env = stack[-1];
    v_13 = qvalue(basic_elt(env, 1)); // vjets!*
    v_13 = Lreverse(nil, v_13);
    v_13 = Lmember(nil, stack[0], v_13);
    if (!car_legal(v_13)) v_13 = cdrerror(v_13); else
    v_13 = cdr(v_13);
        return Lreverse(nil, v_13);
}



// Code for xquotient!-mod!-p

static LispObject CC_xquotientKmodKp(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    v_134 = stack[-2];
    if (v_134 == nil) goto v_8;
    else goto v_9;
v_8:
    v_134 = nil;
    goto v_7;
v_9:
    v_134 = stack[-2];
    if (!consp(v_134)) goto v_20;
    else goto v_21;
v_20:
    v_134 = lisp_true;
    goto v_19;
v_21:
    v_134 = stack[-2];
    if (!car_legal(v_134)) v_134 = carerror(v_134); else
    v_134 = car(v_134);
    v_134 = (consp(v_134) ? nil : lisp_true);
    goto v_19;
    v_134 = nil;
v_19:
    if (v_134 == nil) goto v_17;
    v_134 = lisp_true;
    goto v_15;
v_17:
    v_134 = stack[-2];
    if (!car_legal(v_134)) v_134 = carerror(v_134); else
    v_134 = car(v_134);
    if (!car_legal(v_134)) v_134 = carerror(v_134); else
    v_134 = car(v_134);
    if (!car_legal(v_134)) v_135 = carerror(v_134); else
    v_135 = car(v_134);
    v_134 = stack[0];
    if (equal(v_135, v_134)) goto v_35;
    v_134 = lisp_true;
    goto v_33;
v_35:
    v_134 = stack[-2];
    if (!car_legal(v_134)) v_134 = carerror(v_134); else
    v_134 = car(v_134);
    if (!car_legal(v_134)) v_134 = carerror(v_134); else
    v_134 = car(v_134);
    if (!car_legal(v_134)) v_135 = cdrerror(v_134); else
    v_135 = cdr(v_134);
    v_134 = stack[-1];
    if (!car_legal(v_134)) v_134 = carerror(v_134); else
    v_134 = car(v_134);
    if (!car_legal(v_134)) v_134 = carerror(v_134); else
    v_134 = car(v_134);
    if (!car_legal(v_134)) v_134 = cdrerror(v_134); else
    v_134 = cdr(v_134);
    v_134 = (static_cast<std::intptr_t>(v_135) < static_cast<std::intptr_t>(v_134)) ? lisp_true : nil;
    goto v_33;
    v_134 = nil;
v_33:
    goto v_15;
    v_134 = nil;
v_15:
    if (v_134 == nil) goto v_13;
    v_134 = nil;
    setvalue(basic_elt(env, 1), v_134); // exact!-quotient!-flag
    goto v_7;
v_13:
    v_134 = stack[-2];
    if (!car_legal(v_134)) v_134 = carerror(v_134); else
    v_134 = car(v_134);
    if (!car_legal(v_134)) v_134 = carerror(v_134); else
    v_134 = car(v_134);
    if (!car_legal(v_134)) v_135 = cdrerror(v_134); else
    v_135 = cdr(v_134);
    v_134 = stack[-1];
    if (!car_legal(v_134)) v_134 = carerror(v_134); else
    v_134 = car(v_134);
    if (!car_legal(v_134)) v_134 = carerror(v_134); else
    v_134 = car(v_134);
    if (!car_legal(v_134)) v_134 = cdrerror(v_134); else
    v_134 = cdr(v_134);
    if (equal(v_135, v_134)) goto v_54;
    else goto v_55;
v_54:
    v_134 = stack[-2];
    if (!car_legal(v_134)) v_134 = carerror(v_134); else
    v_134 = car(v_134);
    if (!car_legal(v_134)) v_135 = cdrerror(v_134); else
    v_135 = cdr(v_134);
    v_134 = stack[-1];
    if (!car_legal(v_134)) v_134 = carerror(v_134); else
    v_134 = car(v_134);
    if (!car_legal(v_134)) v_134 = cdrerror(v_134); else
    v_134 = cdr(v_134);
    {   LispObject fn = basic_elt(env, 2); // quotient!-mod!-p
    v_134 = (*qfn2(fn))(fn, v_135, v_134);
    }
    env = stack[-4];
    stack[0] = v_134;
    v_134 = stack[0];
    if (v_134 == nil) goto v_80;
    else goto v_81;
v_80:
    v_134 = lisp_true;
    goto v_79;
v_81:
    v_135 = stack[0];
    v_134 = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // times!-mod!-p
    v_134 = (*qfn2(fn))(fn, v_135, v_134);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 4); // difference!-mod!-p
    v_134 = (*qfn2(fn))(fn, stack[-2], v_134);
    }
    env = stack[-4];
    goto v_79;
    v_134 = nil;
v_79:
    if (v_134 == nil) goto v_77;
    v_134 = nil;
    setvalue(basic_elt(env, 1), v_134); // exact!-quotient!-flag
    goto v_75;
v_77:
v_75:
    v_134 = stack[0];
    goto v_7;
v_55:
    v_134 = stack[-2];
    if (!car_legal(v_134)) v_134 = carerror(v_134); else
    v_134 = car(v_134);
    if (!car_legal(v_134)) v_134 = carerror(v_134); else
    v_134 = car(v_134);
    if (!car_legal(v_134)) v_136 = carerror(v_134); else
    v_136 = car(v_134);
    v_134 = stack[-2];
    if (!car_legal(v_134)) v_134 = carerror(v_134); else
    v_134 = car(v_134);
    if (!car_legal(v_134)) v_134 = carerror(v_134); else
    v_134 = car(v_134);
    if (!car_legal(v_134)) v_135 = cdrerror(v_134); else
    v_135 = cdr(v_134);
    v_134 = stack[-1];
    if (!car_legal(v_134)) v_134 = carerror(v_134); else
    v_134 = car(v_134);
    if (!car_legal(v_134)) v_134 = carerror(v_134); else
    v_134 = car(v_134);
    if (!car_legal(v_134)) v_134 = cdrerror(v_134); else
    v_134 = cdr(v_134);
    v_134 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_135) - static_cast<std::uintptr_t>(v_134) + TAG_FIXNUM);
    {   LispObject fn = basic_elt(env, 5); // mksp
    stack[-3] = (*qfn2(fn))(fn, v_136, v_134);
    }
    env = stack[-4];
    v_134 = stack[-2];
    if (!car_legal(v_134)) v_134 = carerror(v_134); else
    v_134 = car(v_134);
    if (!car_legal(v_134)) v_135 = cdrerror(v_134); else
    v_135 = cdr(v_134);
    v_134 = stack[-1];
    if (!car_legal(v_134)) v_134 = carerror(v_134); else
    v_134 = car(v_134);
    if (!car_legal(v_134)) v_134 = cdrerror(v_134); else
    v_134 = cdr(v_134);
    {   LispObject fn = basic_elt(env, 2); // quotient!-mod!-p
    v_134 = (*qfn2(fn))(fn, v_135, v_134);
    }
    env = stack[-4];
    v_134 = cons(stack[-3], v_134);
    env = stack[-4];
    stack[-3] = v_134;
    v_134 = stack[-2];
    if (!car_legal(v_134)) stack[-2] = cdrerror(v_134); else
    stack[-2] = cdr(v_134);
    v_134 = stack[-3];
    {   LispObject fn = basic_elt(env, 6); // negate!-term
    v_135 = (*qfn1(fn))(fn, v_134);
    }
    env = stack[-4];
    v_134 = stack[-1];
    if (!car_legal(v_134)) v_134 = cdrerror(v_134); else
    v_134 = cdr(v_134);
    {   LispObject fn = basic_elt(env, 7); // times!-term!-mod!-p
    v_134 = (*qfn2(fn))(fn, v_135, v_134);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 8); // plus!-mod!-p
    v_134 = (*qfn2(fn))(fn, stack[-2], v_134);
    }
    env = stack[-4];
    stack[-2] = v_134;
    v_136 = stack[-2];
    v_135 = stack[-1];
    v_134 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // xquotient!-mod!-p
    v_134 = (*qfn3(fn))(fn, v_136, v_135, v_134);
    }
    {
        LispObject v_141 = stack[-3];
        return cons(v_141, v_134);
    }
    goto v_7;
    v_134 = nil;
v_7:
    return onevalue(v_134);
}



// Code for mkcrn

static LispObject CC_mkcrn(LispObject env,
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
    v_11 = basic_elt(env, 1); // !:crn!:
    return list2star(v_11, v_10, v_9);
}



// Code for extadd

static LispObject CC_extadd(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_113 = stack[-3];
    if (v_113 == nil) goto v_7;
    else goto v_8;
v_7:
    v_113 = stack[-2];
    goto v_6;
v_8:
    v_113 = stack[-2];
    if (v_113 == nil) goto v_11;
    else goto v_12;
v_11:
    v_113 = stack[-3];
    goto v_6;
v_12:
    v_113 = nil;
    v_113 = ncons(v_113);
    env = stack[-5];
    stack[-1] = v_113;
    stack[-4] = v_113;
v_26:
    v_113 = stack[-3];
    if (v_113 == nil) goto v_29;
    v_113 = stack[-2];
    if (v_113 == nil) goto v_29;
    goto v_30;
v_29:
    goto v_25;
v_30:
    v_113 = stack[-2];
    if (!car_legal(v_113)) v_113 = carerror(v_113); else
    v_113 = car(v_113);
    if (!car_legal(v_113)) v_114 = carerror(v_113); else
    v_114 = car(v_113);
    v_113 = stack[-3];
    if (!car_legal(v_113)) v_113 = carerror(v_113); else
    v_113 = car(v_113);
    if (!car_legal(v_113)) v_113 = carerror(v_113); else
    v_113 = car(v_113);
    if (equal(v_114, v_113)) goto v_38;
    else goto v_39;
v_38:
    v_113 = stack[-3];
    if (!car_legal(v_113)) v_113 = carerror(v_113); else
    v_113 = car(v_113);
    if (!car_legal(v_113)) v_114 = cdrerror(v_113); else
    v_114 = cdr(v_113);
    v_113 = stack[-2];
    if (!car_legal(v_113)) v_113 = carerror(v_113); else
    v_113 = car(v_113);
    if (!car_legal(v_113)) v_113 = cdrerror(v_113); else
    v_113 = cdr(v_113);
    {   LispObject fn = basic_elt(env, 1); // addf
    v_114 = (*qfn2(fn))(fn, v_114, v_113);
    }
    env = stack[-5];
    v_113 = v_114;
    if (v_114 == nil) goto v_49;
    stack[0] = stack[-1];
    v_114 = stack[-3];
    if (!car_legal(v_114)) v_114 = carerror(v_114); else
    v_114 = car(v_114);
    if (!car_legal(v_114)) v_114 = carerror(v_114); else
    v_114 = car(v_114);
    v_113 = cons(v_114, v_113);
    env = stack[-5];
    v_113 = ncons(v_113);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 2); // setcdr
    v_113 = (*qfn2(fn))(fn, stack[0], v_113);
    }
    env = stack[-5];
    v_113 = stack[-1];
    if (!car_legal(v_113)) v_113 = cdrerror(v_113); else
    v_113 = cdr(v_113);
    stack[-1] = v_113;
    goto v_47;
v_49:
v_47:
    v_113 = stack[-3];
    if (!car_legal(v_113)) v_113 = cdrerror(v_113); else
    v_113 = cdr(v_113);
    stack[-3] = v_113;
    v_113 = stack[-2];
    if (!car_legal(v_113)) v_113 = cdrerror(v_113); else
    v_113 = cdr(v_113);
    stack[-2] = v_113;
    goto v_37;
v_39:
    v_113 = stack[-2];
    if (!car_legal(v_113)) v_113 = carerror(v_113); else
    v_113 = car(v_113);
    if (!car_legal(v_113)) v_114 = carerror(v_113); else
    v_114 = car(v_113);
    v_113 = stack[-3];
    if (!car_legal(v_113)) v_113 = carerror(v_113); else
    v_113 = car(v_113);
    if (!car_legal(v_113)) v_113 = carerror(v_113); else
    v_113 = car(v_113);
    {   LispObject fn = basic_elt(env, 3); // ordexp
    v_113 = (*qfn2(fn))(fn, v_114, v_113);
    }
    env = stack[-5];
    if (v_113 == nil) goto v_72;
    stack[0] = stack[-1];
    v_113 = stack[-2];
    if (!car_legal(v_113)) v_113 = carerror(v_113); else
    v_113 = car(v_113);
    v_113 = ncons(v_113);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 2); // setcdr
    v_113 = (*qfn2(fn))(fn, stack[0], v_113);
    }
    env = stack[-5];
    v_113 = stack[-2];
    if (!car_legal(v_113)) v_113 = cdrerror(v_113); else
    v_113 = cdr(v_113);
    stack[-2] = v_113;
    v_113 = stack[-1];
    if (!car_legal(v_113)) v_113 = cdrerror(v_113); else
    v_113 = cdr(v_113);
    stack[-1] = v_113;
    goto v_37;
v_72:
    stack[0] = stack[-1];
    v_113 = stack[-3];
    if (!car_legal(v_113)) v_113 = carerror(v_113); else
    v_113 = car(v_113);
    v_113 = ncons(v_113);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 2); // setcdr
    v_113 = (*qfn2(fn))(fn, stack[0], v_113);
    }
    env = stack[-5];
    v_113 = stack[-3];
    if (!car_legal(v_113)) v_113 = cdrerror(v_113); else
    v_113 = cdr(v_113);
    stack[-3] = v_113;
    v_113 = stack[-1];
    if (!car_legal(v_113)) v_113 = cdrerror(v_113); else
    v_113 = cdr(v_113);
    stack[-1] = v_113;
    goto v_37;
v_37:
    goto v_26;
v_25:
    v_114 = stack[-1];
    v_113 = stack[-3];
    if (v_113 == nil) goto v_105;
    v_113 = stack[-3];
    goto v_103;
v_105:
    v_113 = stack[-2];
    goto v_103;
    v_113 = nil;
v_103:
    {   LispObject fn = basic_elt(env, 2); // setcdr
    v_113 = (*qfn2(fn))(fn, v_114, v_113);
    }
    v_113 = stack[-4];
    if (!car_legal(v_113)) v_113 = cdrerror(v_113); else
    v_113 = cdr(v_113);
    goto v_6;
    v_113 = nil;
v_6:
    return onevalue(v_113);
}



// Code for read!-comment1

static LispObject CC_readKcomment1(LispObject env,
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
    v_48 = v_2;
// end of prologue
// Binding !*lower
// FLUIDBIND: reloadenv=2 litvec-offset=1 saveloc=1
{   bind_fluid_stack bind_fluid_var(-2, 1, -1);
    setvalue(basic_elt(env, 1), nil); // !*lower
// Binding !*raise
// FLUIDBIND: reloadenv=2 litvec-offset=2 saveloc=0
{   bind_fluid_stack bind_fluid_var(-2, 2, 0);
    setvalue(basic_elt(env, 2), nil); // !*raise
    v_48 = nil;
    setvalue(basic_elt(env, 3), v_48); // named!-character!*
v_10:
    v_48 = qvalue(basic_elt(env, 3)); // named!-character!*
    if (v_48 == nil) goto v_16;
    else goto v_14;
v_16:
    v_48 = qvalue(basic_elt(env, 4)); // crchar!*
    {   LispObject fn = basic_elt(env, 7); // id2string
    v_48 = (*qfn1(fn))(fn, v_48);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 8); // string!-length
    v_49 = (*qfn1(fn))(fn, v_48);
    }
    env = stack[-2];
    v_48 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_49 == v_48) goto v_22;
    v_48 = lisp_true;
    goto v_20;
v_22:
    v_48 = qvalue(basic_elt(env, 4)); // crchar!*
    {   LispObject fn = basic_elt(env, 9); // delcp
    v_48 = (*qfn1(fn))(fn, v_48);
    }
    env = stack[-2];
    if (v_48 == nil) goto v_32;
    else goto v_33;
v_32:
    v_48 = lisp_true;
    goto v_31;
v_33:
    v_49 = qvalue(basic_elt(env, 4)); // crchar!*
    v_48 = qvalue(basic_elt(env, 5)); // !$eol!$
    v_48 = (v_49 == v_48 ? lisp_true : nil);
    goto v_31;
    v_48 = nil;
v_31:
    goto v_20;
    v_48 = nil;
v_20:
    if (v_48 == nil) goto v_18;
    else goto v_14;
v_18:
    goto v_15;
v_14:
    v_48 = nil;
    setvalue(basic_elt(env, 3), v_48); // named!-character!*
    {   LispObject fn = basic_elt(env, 10); // readch1
    v_48 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
    setvalue(basic_elt(env, 4), v_48); // crchar!*
    goto v_10;
v_15:
    v_48 = basic_elt(env, 6); // ! 
    setvalue(basic_elt(env, 4), v_48); // crchar!*
    {   LispObject fn = basic_elt(env, 11); // condterpri
    v_48 = (*qfn0(fn))(fn);
    }
    v_48 = nil;
    ;}  // end of a binding scope
    ;}  // end of a binding scope
    return onevalue(v_48);
}



// Code for sfto_yun!-updecf

static LispObject CC_sfto_yunKupdecf(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_94, v_95;
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
// Binding !*gcd
// FLUIDBIND: reloadenv=8 litvec-offset=1 saveloc=7
{   bind_fluid_stack bind_fluid_var(-8, 1, -7);
    setvalue(basic_elt(env, 1), nil); // !*gcd
    stack[-1] = nil;
    v_94 = lisp_true;
    setvalue(basic_elt(env, 1), v_94); // !*gcd
    v_95 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_94 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_94 = cons(v_95, v_94);
    env = stack[-8];
    stack[-2] = v_94;
    v_94 = stack[-6];
    if (!car_legal(v_94)) v_94 = carerror(v_94); else
    v_94 = car(v_94);
    if (!car_legal(v_94)) v_94 = carerror(v_94); else
    v_94 = car(v_94);
    if (!car_legal(v_94)) v_94 = carerror(v_94); else
    v_94 = car(v_94);
    stack[-5] = v_94;
    stack[-3] = stack[-6];
    v_95 = stack[-6];
    v_94 = stack[-5];
    {   LispObject fn = basic_elt(env, 2); // diff
    v_94 = (*qfn2(fn))(fn, v_95, v_94);
    }
    env = stack[-8];
    stack[0] = v_94;
    {   LispObject fn = basic_elt(env, 3); // sfto_gcdf
    v_94 = (*qfn2(fn))(fn, stack[-3], v_94);
    }
    env = stack[-8];
    stack[-3] = v_94;
    v_95 = stack[-6];
    v_94 = stack[-3];
    {   LispObject fn = basic_elt(env, 4); // quotf
    v_94 = (*qfn2(fn))(fn, v_95, v_94);
    }
    env = stack[-8];
    stack[-4] = v_94;
    v_95 = stack[0];
    v_94 = stack[-3];
    {   LispObject fn = basic_elt(env, 4); // quotf
    stack[0] = (*qfn2(fn))(fn, v_95, v_94);
    }
    env = stack[-8];
    v_95 = stack[-4];
    v_94 = stack[-5];
    {   LispObject fn = basic_elt(env, 2); // diff
    v_94 = (*qfn2(fn))(fn, v_95, v_94);
    }
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 5); // negf
    v_94 = (*qfn1(fn))(fn, v_94);
    }
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 6); // addf
    v_94 = (*qfn2(fn))(fn, stack[0], v_94);
    }
    env = stack[-8];
    stack[-3] = v_94;
v_41:
    v_94 = stack[-1];
    v_94 = (v_94 == nil ? lisp_true : nil);
    stack[-1] = v_94;
    v_95 = stack[-4];
    v_94 = stack[-3];
    {   LispObject fn = basic_elt(env, 3); // sfto_gcdf
    v_94 = (*qfn2(fn))(fn, v_95, v_94);
    }
    env = stack[-8];
    stack[-6] = v_94;
    v_94 = stack[-1];
    if (v_94 == nil) goto v_50;
    stack[0] = stack[-2];
    v_94 = stack[-2];
    if (!car_legal(v_94)) v_95 = carerror(v_94); else
    v_95 = car(v_94);
    v_94 = stack[-6];
    {   LispObject fn = basic_elt(env, 7); // multf
    v_94 = (*qfn2(fn))(fn, v_95, v_94);
    }
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 8); // setcar
    v_94 = (*qfn2(fn))(fn, stack[0], v_94);
    }
    env = stack[-8];
    goto v_48;
v_50:
    stack[0] = stack[-2];
    v_94 = stack[-2];
    if (!car_legal(v_94)) v_95 = cdrerror(v_94); else
    v_95 = cdr(v_94);
    v_94 = stack[-6];
    {   LispObject fn = basic_elt(env, 7); // multf
    v_94 = (*qfn2(fn))(fn, v_95, v_94);
    }
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 9); // setcdr
    v_94 = (*qfn2(fn))(fn, stack[0], v_94);
    }
    env = stack[-8];
    goto v_48;
v_48:
    v_95 = stack[-4];
    v_94 = stack[-6];
    {   LispObject fn = basic_elt(env, 4); // quotf
    v_94 = (*qfn2(fn))(fn, v_95, v_94);
    }
    env = stack[-8];
    stack[-4] = v_94;
    v_95 = stack[-3];
    v_94 = stack[-6];
    {   LispObject fn = basic_elt(env, 4); // quotf
    stack[0] = (*qfn2(fn))(fn, v_95, v_94);
    }
    env = stack[-8];
    v_95 = stack[-4];
    v_94 = stack[-5];
    {   LispObject fn = basic_elt(env, 2); // diff
    v_94 = (*qfn2(fn))(fn, v_95, v_94);
    }
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 5); // negf
    v_94 = (*qfn1(fn))(fn, v_94);
    }
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 6); // addf
    v_94 = (*qfn2(fn))(fn, stack[0], v_94);
    }
    env = stack[-8];
    stack[-3] = v_94;
    v_94 = stack[-4];
    if (!consp(v_94)) goto v_83;
    else goto v_84;
v_83:
    v_94 = lisp_true;
    goto v_82;
v_84:
    v_94 = stack[-4];
    if (!car_legal(v_94)) v_94 = carerror(v_94); else
    v_94 = car(v_94);
    v_94 = (consp(v_94) ? nil : lisp_true);
    goto v_82;
    v_94 = nil;
v_82:
    if (v_94 == nil) goto v_79;
    else goto v_80;
v_79:
    goto v_41;
v_80:
    v_94 = stack[-2];
    ;}  // end of a binding scope
    return onevalue(v_94);
}



// Code for rl_identity1

static LispObject CC_rl_identity1(LispObject env,
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



// Code for pasf_anegateat

static LispObject CC_pasf_anegateat(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_125, v_126;
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
    v_126 = stack[-1];
    v_125 = basic_elt(env, 1); // true
    if (v_126 == v_125) goto v_14;
    else goto v_15;
v_14:
    v_125 = lisp_true;
    goto v_13;
v_15:
    v_126 = stack[-1];
    v_125 = basic_elt(env, 2); // false
    v_125 = (v_126 == v_125 ? lisp_true : nil);
    goto v_13;
    v_125 = nil;
v_13:
    if (v_125 == nil) goto v_11;
    v_125 = stack[-1];
    v_126 = v_125;
    goto v_9;
v_11:
    v_125 = stack[-1];
    if (!car_legal(v_125)) v_125 = carerror(v_125); else
    v_125 = car(v_125);
    v_125 = Lconsp(nil, v_125);
    env = stack[-3];
    if (v_125 == nil) goto v_26;
    v_125 = stack[-1];
    if (!car_legal(v_125)) v_125 = carerror(v_125); else
    v_125 = car(v_125);
    if (!car_legal(v_125)) v_125 = carerror(v_125); else
    v_125 = car(v_125);
    v_126 = v_125;
    goto v_9;
v_26:
    v_125 = stack[-1];
    if (!car_legal(v_125)) v_125 = carerror(v_125); else
    v_125 = car(v_125);
    v_126 = v_125;
    goto v_9;
    v_126 = nil;
v_9:
    v_125 = basic_elt(env, 3); // (cong ncong)
    v_125 = Lmemq(nil, v_126, v_125);
    if (v_125 == nil) goto v_7;
    v_126 = stack[-1];
    v_125 = basic_elt(env, 1); // true
    if (v_126 == v_125) goto v_48;
    else goto v_49;
v_48:
    v_125 = lisp_true;
    goto v_47;
v_49:
    v_126 = stack[-1];
    v_125 = basic_elt(env, 2); // false
    v_125 = (v_126 == v_125 ? lisp_true : nil);
    goto v_47;
    v_125 = nil;
v_47:
    if (v_125 == nil) goto v_45;
    v_125 = stack[-1];
    goto v_43;
v_45:
    v_125 = stack[-1];
    if (!car_legal(v_125)) v_125 = carerror(v_125); else
    v_125 = car(v_125);
    v_125 = Lconsp(nil, v_125);
    env = stack[-3];
    if (v_125 == nil) goto v_60;
    v_125 = stack[-1];
    if (!car_legal(v_125)) v_125 = carerror(v_125); else
    v_125 = car(v_125);
    if (!car_legal(v_125)) v_125 = carerror(v_125); else
    v_125 = car(v_125);
    goto v_43;
v_60:
    v_125 = stack[-1];
    if (!car_legal(v_125)) v_125 = carerror(v_125); else
    v_125 = car(v_125);
    goto v_43;
    v_125 = nil;
v_43:
    {   LispObject fn = basic_elt(env, 4); // pasf_anegrel
    v_126 = (*qfn1(fn))(fn, v_125);
    }
    env = stack[-3];
    v_125 = stack[-1];
    if (!car_legal(v_125)) v_125 = carerror(v_125); else
    v_125 = car(v_125);
    if (!car_legal(v_125)) v_125 = cdrerror(v_125); else
    v_125 = cdr(v_125);
    {   LispObject fn = basic_elt(env, 5); // pasf_mkop
    stack[-2] = (*qfn2(fn))(fn, v_126, v_125);
    }
    env = stack[-3];
    v_125 = stack[-1];
    if (!car_legal(v_125)) v_125 = cdrerror(v_125); else
    v_125 = cdr(v_125);
    if (!car_legal(v_125)) v_125 = carerror(v_125); else
    v_125 = car(v_125);
    {   LispObject fn = basic_elt(env, 6); // negf
    stack[0] = (*qfn1(fn))(fn, v_125);
    }
    env = stack[-3];
    v_125 = stack[-1];
    if (!car_legal(v_125)) v_125 = cdrerror(v_125); else
    v_125 = cdr(v_125);
    if (!car_legal(v_125)) v_125 = cdrerror(v_125); else
    v_125 = cdr(v_125);
    if (!car_legal(v_125)) v_125 = carerror(v_125); else
    v_125 = car(v_125);
    {   LispObject fn = basic_elt(env, 6); // negf
    v_125 = (*qfn1(fn))(fn, v_125);
    }
    {
        LispObject v_130 = stack[-2];
        LispObject v_131 = stack[0];
        return list3(v_130, v_131, v_125);
    }
v_7:
    v_126 = stack[-1];
    v_125 = basic_elt(env, 1); // true
    if (v_126 == v_125) goto v_93;
    else goto v_94;
v_93:
    v_125 = lisp_true;
    goto v_92;
v_94:
    v_126 = stack[-1];
    v_125 = basic_elt(env, 2); // false
    v_125 = (v_126 == v_125 ? lisp_true : nil);
    goto v_92;
    v_125 = nil;
v_92:
    if (v_125 == nil) goto v_90;
    v_125 = stack[-1];
    goto v_88;
v_90:
    v_125 = stack[-1];
    if (!car_legal(v_125)) v_125 = carerror(v_125); else
    v_125 = car(v_125);
    v_125 = Lconsp(nil, v_125);
    env = stack[-3];
    if (v_125 == nil) goto v_105;
    v_125 = stack[-1];
    if (!car_legal(v_125)) v_125 = carerror(v_125); else
    v_125 = car(v_125);
    if (!car_legal(v_125)) v_125 = carerror(v_125); else
    v_125 = car(v_125);
    goto v_88;
v_105:
    v_125 = stack[-1];
    if (!car_legal(v_125)) v_125 = carerror(v_125); else
    v_125 = car(v_125);
    goto v_88;
    v_125 = nil;
v_88:
    {   LispObject fn = basic_elt(env, 4); // pasf_anegrel
    stack[-2] = (*qfn1(fn))(fn, v_125);
    }
    env = stack[-3];
    v_125 = stack[-1];
    if (!car_legal(v_125)) v_125 = cdrerror(v_125); else
    v_125 = cdr(v_125);
    if (!car_legal(v_125)) v_125 = carerror(v_125); else
    v_125 = car(v_125);
    {   LispObject fn = basic_elt(env, 6); // negf
    stack[0] = (*qfn1(fn))(fn, v_125);
    }
    env = stack[-3];
    v_125 = stack[-1];
    if (!car_legal(v_125)) v_125 = cdrerror(v_125); else
    v_125 = cdr(v_125);
    if (!car_legal(v_125)) v_125 = cdrerror(v_125); else
    v_125 = cdr(v_125);
    if (!car_legal(v_125)) v_125 = carerror(v_125); else
    v_125 = car(v_125);
    {   LispObject fn = basic_elt(env, 6); // negf
    v_125 = (*qfn1(fn))(fn, v_125);
    }
    {
        LispObject v_132 = stack[-2];
        LispObject v_133 = stack[0];
        return list3(v_132, v_133, v_125);
    }
    v_125 = nil;
    return onevalue(v_125);
}



// Code for bc_sum

static LispObject CC_bc_sum(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_64, v_65, v_66, v_67;
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
    v_66 = v_3;
    v_67 = v_2;
// end of prologue
    v_64 = v_67;
    if (!car_legal(v_64)) v_65 = cdrerror(v_64); else
    v_65 = cdr(v_64);
    v_64 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_65 == v_64) goto v_11;
    else goto v_12;
v_11:
    v_64 = v_67;
    if (!car_legal(v_64)) v_64 = carerror(v_64); else
    v_64 = car(v_64);
    if (is_number(v_64)) goto v_19;
    v_64 = nil;
    goto v_17;
v_19:
    v_64 = v_66;
    if (!car_legal(v_64)) v_65 = cdrerror(v_64); else
    v_65 = cdr(v_64);
    v_64 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_65 == v_64) goto v_27;
    else goto v_28;
v_27:
    v_64 = v_66;
    if (!car_legal(v_64)) v_64 = carerror(v_64); else
    v_64 = car(v_64);
    v_64 = (is_number(v_64) ? lisp_true : nil);
    goto v_26;
v_28:
    v_64 = nil;
    goto v_26;
    v_64 = nil;
v_26:
    goto v_17;
    v_64 = nil;
v_17:
    goto v_10;
v_12:
    v_64 = nil;
    goto v_10;
    v_64 = nil;
v_10:
    if (v_64 == nil) goto v_8;
    v_64 = v_67;
    if (!car_legal(v_64)) v_64 = carerror(v_64); else
    v_64 = car(v_64);
    v_65 = v_66;
    if (!car_legal(v_65)) v_65 = carerror(v_65); else
    v_65 = car(v_65);
    v_65 = plus2(v_64, v_65);
    v_67 = v_65;
    v_64 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_65 == v_64) goto v_43;
    else goto v_44;
v_43:
    v_65 = nil;
    v_64 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_65, v_64);
v_44:
    v_65 = v_67;
    v_64 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_65, v_64);
    v_64 = nil;
    goto v_6;
v_8:
    v_64 = v_67;
    v_65 = v_66;
    {
        LispObject fn = basic_elt(env, 1); // addsq
        return (*qfn2(fn))(fn, v_64, v_65);
    }
    v_64 = nil;
v_6:
    return onevalue(v_64);
}



// Code for ciom

static LispObject CC_ciom(LispObject env,
                         LispObject v_2)
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
    v_55 = basic_elt(env, 1); // "<OMATTR>"
    {   LispObject fn = basic_elt(env, 9); // printout
    v_55 = (*qfn1(fn))(fn, v_55);
    }
    env = stack[-1];
    v_55 = lisp_true;
    {   LispObject fn = basic_elt(env, 10); // indent!*
    v_55 = (*qfn1(fn))(fn, v_55);
    }
    env = stack[-1];
    v_55 = basic_elt(env, 2); // "<OMATP>"
    {   LispObject fn = basic_elt(env, 9); // printout
    v_55 = (*qfn1(fn))(fn, v_55);
    }
    env = stack[-1];
    v_55 = lisp_true;
    {   LispObject fn = basic_elt(env, 10); // indent!*
    v_55 = (*qfn1(fn))(fn, v_55);
    }
    env = stack[-1];
    v_55 = basic_elt(env, 3); // "<OMS cd=""typmml"" name=""type"">"
    {   LispObject fn = basic_elt(env, 9); // printout
    v_55 = (*qfn1(fn))(fn, v_55);
    }
    env = stack[-1];
    v_55 = basic_elt(env, 4); // "<OMS cd=""typmml"" name="""
    {   LispObject fn = basic_elt(env, 9); // printout
    v_55 = (*qfn1(fn))(fn, v_55);
    }
    env = stack[-1];
    v_55 = stack[0];
    if (!car_legal(v_55)) v_55 = cdrerror(v_55); else
    v_55 = cdr(v_55);
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    if (!car_legal(v_55)) v_55 = cdrerror(v_55); else
    v_55 = cdr(v_55);
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    v_56 = Lintern(nil, v_55);
    env = stack[-1];
    v_55 = qvalue(basic_elt(env, 5)); // mmltypes!*
    v_55 = Lassoc(nil, v_56, v_55);
    v_55 = Lprinc(nil, v_55);
    env = stack[-1];
    v_55 = stack[0];
    if (!car_legal(v_55)) v_55 = cdrerror(v_55); else
    v_55 = cdr(v_55);
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    if (!car_legal(v_55)) v_55 = cdrerror(v_55); else
    v_55 = cdr(v_55);
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    v_56 = Lintern(nil, v_55);
    env = stack[-1];
    v_55 = qvalue(basic_elt(env, 5)); // mmltypes!*
    v_55 = Lassoc(nil, v_56, v_55);
    if (!car_legal(v_55)) v_55 = cdrerror(v_55); else
    v_55 = cdr(v_55);
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    v_55 = Lprinc(nil, v_55);
    env = stack[-1];
    v_55 = basic_elt(env, 6); // """>"
    v_55 = Lprinc(nil, v_55);
    env = stack[-1];
    v_55 = nil;
    {   LispObject fn = basic_elt(env, 10); // indent!*
    v_55 = (*qfn1(fn))(fn, v_55);
    }
    env = stack[-1];
    v_55 = basic_elt(env, 7); // "</OMATP>"
    {   LispObject fn = basic_elt(env, 9); // printout
    v_55 = (*qfn1(fn))(fn, v_55);
    }
    env = stack[-1];
    v_55 = stack[0];
    if (!car_legal(v_55)) v_55 = cdrerror(v_55); else
    v_55 = cdr(v_55);
    if (!car_legal(v_55)) v_55 = cdrerror(v_55); else
    v_55 = cdr(v_55);
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    {   LispObject fn = basic_elt(env, 11); // objectom
    v_55 = (*qfn1(fn))(fn, v_55);
    }
    env = stack[-1];
    v_55 = nil;
    {   LispObject fn = basic_elt(env, 10); // indent!*
    v_55 = (*qfn1(fn))(fn, v_55);
    }
    env = stack[-1];
    v_55 = basic_elt(env, 8); // "</OMATTR>"
    {   LispObject fn = basic_elt(env, 9); // printout
    v_55 = (*qfn1(fn))(fn, v_55);
    }
    v_55 = nil;
    return onevalue(v_55);
}



// Code for f4

static LispObject CC_f4(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_200, v_201;
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
    v_201 = stack[0];
    v_200 = basic_elt(env, 1); // pi
    if (v_201 == v_200) goto v_8;
    else goto v_9;
v_8:
    v_200 = basic_elt(env, 2); // "<pi/>"
    v_200 = Lprinc(nil, v_200);
    goto v_7;
v_9:
    v_201 = stack[0];
    v_200 = basic_elt(env, 3); // euler_gamma
    if (v_201 == v_200) goto v_14;
    else goto v_15;
v_14:
    v_200 = basic_elt(env, 4); // "<eulergamma/>"
    v_200 = Lprinc(nil, v_200);
    goto v_7;
v_15:
    v_201 = stack[0];
    v_200 = basic_elt(env, 5); // true
    if (v_201 == v_200) goto v_20;
    else goto v_21;
v_20:
    v_200 = basic_elt(env, 6); // "<true/>"
    v_200 = Lprinc(nil, v_200);
    goto v_7;
v_21:
    v_201 = stack[0];
    v_200 = basic_elt(env, 7); // false
    if (v_201 == v_200) goto v_26;
    else goto v_27;
v_26:
    v_200 = basic_elt(env, 8); // "<false/>"
    v_200 = Lprinc(nil, v_200);
    goto v_7;
v_27:
    v_201 = stack[0];
    v_200 = basic_elt(env, 9); // !Na!N
    if (v_201 == v_200) goto v_32;
    else goto v_33;
v_32:
    v_200 = basic_elt(env, 10); // "<notanumber/>"
    v_200 = Lprinc(nil, v_200);
    goto v_7;
v_33:
    v_201 = stack[0];
    v_200 = basic_elt(env, 11); // infinity
    if (v_201 == v_200) goto v_38;
    else goto v_39;
v_38:
    v_200 = qvalue(basic_elt(env, 12)); // !*web
    if (v_200 == nil) goto v_44;
    else goto v_45;
v_44:
    v_200 = basic_elt(env, 13); // "<cn type=""constant"">"
    {   LispObject fn = basic_elt(env, 33); // printout
    v_200 = (*qfn1(fn))(fn, v_200);
    }
    env = stack[-1];
    goto v_43;
v_45:
    v_200 = basic_elt(env, 14); // "<cn type=&quot;constant&quot;>"
    {   LispObject fn = basic_elt(env, 33); // printout
    v_200 = (*qfn1(fn))(fn, v_200);
    }
    env = stack[-1];
    goto v_43;
v_43:
    v_200 = basic_elt(env, 15); // "&infin;"
    v_200 = Lprinc(nil, v_200);
    env = stack[-1];
    v_200 = basic_elt(env, 16); // "</cn>"
    v_200 = Lprinc(nil, v_200);
    goto v_7;
v_39:
    v_201 = stack[0];
    v_200 = basic_elt(env, 17); // e
    if (v_201 == v_200) goto v_61;
    else goto v_62;
v_61:
    v_200 = qvalue(basic_elt(env, 12)); // !*web
    if (v_200 == nil) goto v_67;
    else goto v_68;
v_67:
    v_200 = basic_elt(env, 13); // "<cn type=""constant"">"
    {   LispObject fn = basic_elt(env, 33); // printout
    v_200 = (*qfn1(fn))(fn, v_200);
    }
    env = stack[-1];
    goto v_66;
v_68:
    v_200 = basic_elt(env, 14); // "<cn type=&quot;constant&quot;>"
    {   LispObject fn = basic_elt(env, 33); // printout
    v_200 = (*qfn1(fn))(fn, v_200);
    }
    env = stack[-1];
    goto v_66;
v_66:
    v_200 = basic_elt(env, 18); // "&ExponentialE;"
    v_200 = Lprinc(nil, v_200);
    env = stack[-1];
    v_200 = basic_elt(env, 16); // "</cn>"
    v_200 = Lprinc(nil, v_200);
    goto v_60;
v_62:
    v_201 = stack[0];
    v_200 = basic_elt(env, 19); // i
    if (v_201 == v_200) goto v_84;
    else goto v_85;
v_84:
    v_200 = qvalue(basic_elt(env, 12)); // !*web
    if (v_200 == nil) goto v_90;
    else goto v_91;
v_90:
    v_200 = basic_elt(env, 13); // "<cn type=""constant"">"
    {   LispObject fn = basic_elt(env, 33); // printout
    v_200 = (*qfn1(fn))(fn, v_200);
    }
    env = stack[-1];
    goto v_89;
v_91:
    v_200 = basic_elt(env, 14); // "<cn type=&quot;constant&quot;>"
    {   LispObject fn = basic_elt(env, 33); // printout
    v_200 = (*qfn1(fn))(fn, v_200);
    }
    env = stack[-1];
    goto v_89;
v_89:
    v_200 = basic_elt(env, 20); // "&ImaginaryI;"
    v_200 = Lprinc(nil, v_200);
    env = stack[-1];
    v_200 = basic_elt(env, 16); // "</cn>"
    v_200 = Lprinc(nil, v_200);
    goto v_83;
v_85:
    v_200 = stack[0];
    if (is_number(v_200)) goto v_107;
    else goto v_108;
v_107:
    v_200 = basic_elt(env, 21); // "<cn"
    {   LispObject fn = basic_elt(env, 33); // printout
    v_200 = (*qfn1(fn))(fn, v_200);
    }
    env = stack[-1];
    v_200 = stack[0];
    v_200 = Lfloatp(nil, v_200);
    env = stack[-1];
    if (v_200 == nil) goto v_115;
    v_200 = qvalue(basic_elt(env, 12)); // !*web
    if (v_200 == nil) goto v_120;
    else goto v_121;
v_120:
    v_200 = basic_elt(env, 22); // " type=""real"">"
    v_200 = Lprinc(nil, v_200);
    env = stack[-1];
    goto v_119;
v_121:
    v_200 = basic_elt(env, 23); // " type=&quot;real&quot;>"
    v_200 = Lprinc(nil, v_200);
    env = stack[-1];
    goto v_119;
v_119:
    goto v_113;
v_115:
    v_200 = stack[0];
    v_200 = integerp(v_200);
    if (v_200 == nil) goto v_130;
    v_200 = qvalue(basic_elt(env, 12)); // !*web
    if (v_200 == nil) goto v_135;
    else goto v_136;
v_135:
    v_200 = basic_elt(env, 24); // " type=""integer"">"
    v_200 = Lprinc(nil, v_200);
    env = stack[-1];
    goto v_134;
v_136:
    v_200 = basic_elt(env, 25); // " type=&quot;integer&quot;>"
    v_200 = Lprinc(nil, v_200);
    env = stack[-1];
    goto v_134;
v_134:
    goto v_113;
v_130:
    v_200 = basic_elt(env, 26); // ">"
    v_200 = Lprinc(nil, v_200);
    env = stack[-1];
    goto v_113;
v_113:
    v_200 = stack[0];
    v_200 = Lprinc(nil, v_200);
    env = stack[-1];
    v_200 = basic_elt(env, 16); // "</cn>"
    v_200 = Lprinc(nil, v_200);
    env = stack[-1];
    goto v_106;
v_108:
v_106:
    v_200 = stack[0];
    if (symbolp(v_200)) goto v_154;
    else goto v_155;
v_154:
    v_200 = basic_elt(env, 27); // "<ci"
    {   LispObject fn = basic_elt(env, 33); // printout
    v_200 = (*qfn1(fn))(fn, v_200);
    }
    env = stack[-1];
    v_200 = stack[0];
    {   LispObject fn = basic_elt(env, 34); // listp
    v_200 = (*qfn1(fn))(fn, v_200);
    }
    env = stack[-1];
    if (v_200 == nil) goto v_162;
    v_200 = qvalue(basic_elt(env, 12)); // !*web
    if (v_200 == nil) goto v_167;
    else goto v_168;
v_167:
    v_200 = basic_elt(env, 28); // " type=""list"">"
    v_200 = Lprinc(nil, v_200);
    env = stack[-1];
    goto v_166;
v_168:
    v_200 = basic_elt(env, 29); // " type=&quot;list&quot;>"
    v_200 = Lprinc(nil, v_200);
    env = stack[-1];
    goto v_166;
v_166:
    goto v_160;
v_162:
    v_200 = stack[0];
    v_200 = Lsimple_vectorp(nil, v_200);
    env = stack[-1];
    if (v_200 == nil) goto v_177;
    v_200 = qvalue(basic_elt(env, 12)); // !*web
    if (v_200 == nil) goto v_182;
    else goto v_183;
v_182:
    v_200 = basic_elt(env, 30); // " type=""vector"">"
    v_200 = Lprinc(nil, v_200);
    env = stack[-1];
    goto v_181;
v_183:
    v_200 = basic_elt(env, 31); // " type=&quot;vector&quot;>"
    v_200 = Lprinc(nil, v_200);
    env = stack[-1];
    goto v_181;
v_181:
    goto v_160;
v_177:
    v_200 = basic_elt(env, 26); // ">"
    v_200 = Lprinc(nil, v_200);
    env = stack[-1];
    goto v_160;
v_160:
    v_200 = stack[0];
    v_200 = Lprinc(nil, v_200);
    env = stack[-1];
    v_200 = basic_elt(env, 32); // "</ci>"
    v_200 = Lprinc(nil, v_200);
    goto v_153;
v_155:
v_153:
    goto v_83;
v_83:
    goto v_60;
v_60:
    goto v_7;
v_7:
    v_200 = nil;
    return onevalue(v_200);
}



// Code for evzero

static LispObject CC_evzero(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    push(nil, nil);
    stack_popper stack_popper_var(3);
// end of prologue
    stack[-1] = nil;
    v_27 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[0] = v_27;
v_9:
    v_27 = qvalue(basic_elt(env, 1)); // dipvars!*
    v_28 = Llength(nil, v_27);
    env = stack[-2];
    v_27 = stack[0];
    v_27 = difference2(v_28, v_27);
    env = stack[-2];
    v_27 = Lminusp(nil, v_27);
    env = stack[-2];
    if (v_27 == nil) goto v_14;
    goto v_8;
v_14:
    v_28 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_27 = stack[-1];
    v_27 = cons(v_28, v_27);
    env = stack[-2];
    stack[-1] = v_27;
    v_27 = stack[0];
    v_27 = add1(v_27);
    env = stack[-2];
    stack[0] = v_27;
    goto v_9;
v_8:
    v_27 = stack[-1];
    return onevalue(v_27);
}



// Code for chksymmetries!&sub1

static LispObject CC_chksymmetriesGsub1(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_31, v_32, v_33;
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_5;
    v_31 = v_4;
    v_32 = v_3;
    v_33 = v_2;
// end of prologue
    v_31 = Lsubst(nil, v_33, v_32, v_31);
    env = stack[-2];
    stack[-1] = v_31;
    v_31 = stack[0];
    if (v_31 == nil) goto v_18;
    else goto v_19;
v_18:
    v_31 = lisp_true;
    goto v_17;
v_19:
    v_32 = stack[-1];
    v_31 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // indxsymp
    v_31 = (*qfn2(fn))(fn, v_32, v_31);
    }
    goto v_17;
    v_31 = nil;
v_17:
    if (v_31 == nil) goto v_15;
    v_31 = stack[-1];
    goto v_13;
v_15:
    v_31 = nil;
    goto v_13;
    v_31 = nil;
v_13:
    return onevalue(v_31);
}



// Code for strand!-alg!-top

static LispObject CC_strandKalgKtop(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_23, v_24, v_25;
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
    v_24 = stack[-2];
    v_23 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // deletez1
    v_23 = (*qfn2(fn))(fn, v_24, v_23);
    }
    env = stack[-3];
    stack[-2] = v_23;
    v_25 = stack[0];
    v_24 = stack[-1];
    v_23 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 2); // color!-strand
    v_23 = (*qfn3(fn))(fn, v_25, v_24, v_23);
    }
    env = stack[-3];
    stack[0] = v_23;
    v_24 = stack[-2];
    v_23 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // contract!-strand
    v_23 = (*qfn2(fn))(fn, v_24, v_23);
    }
    env = stack[-3];
    stack[-2] = v_23;
    v_25 = stack[-2];
    v_24 = stack[0];
    v_23 = nil;
    {
        LispObject fn = basic_elt(env, 4); // dstr!-to!-alg
        return (*qfn3(fn))(fn, v_25, v_24, v_23);
    }
    return onevalue(v_23);
}



// Code for cali!=min

static LispObject CC_caliMmin(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    v_40 = stack[-1];
    if (v_40 == nil) goto v_11;
    else goto v_12;
v_11:
    v_40 = stack[-2];
    goto v_7;
v_12:
    v_42 = stack[-2];
    v_40 = stack[-1];
    if (!car_legal(v_40)) v_41 = carerror(v_40); else
    v_41 = car(v_40);
    v_40 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // listtest
    v_40 = (*qfn3(fn))(fn, v_42, v_41, v_40);
    }
    env = stack[-3];
    if (v_40 == nil) goto v_17;
    else goto v_15;
v_17:
    v_40 = stack[-1];
    if (!car_legal(v_40)) v_42 = cdrerror(v_40); else
    v_42 = cdr(v_40);
    v_40 = stack[-1];
    if (!car_legal(v_40)) v_41 = carerror(v_40); else
    v_41 = car(v_40);
    v_40 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // listtest
    v_40 = (*qfn3(fn))(fn, v_42, v_41, v_40);
    }
    env = stack[-3];
    if (v_40 == nil) goto v_23;
    else goto v_15;
v_23:
    goto v_16;
v_15:
    v_40 = stack[-1];
    if (!car_legal(v_40)) v_40 = cdrerror(v_40); else
    v_40 = cdr(v_40);
    stack[-1] = v_40;
    goto v_8;
v_16:
    v_40 = stack[-1];
    if (!car_legal(v_40)) v_41 = carerror(v_40); else
    v_41 = car(v_40);
    v_40 = stack[-2];
    v_40 = cons(v_41, v_40);
    env = stack[-3];
    stack[-2] = v_40;
    v_40 = stack[-1];
    if (!car_legal(v_40)) v_40 = cdrerror(v_40); else
    v_40 = cdr(v_40);
    stack[-1] = v_40;
    goto v_8;
    v_40 = nil;
v_7:
    return onevalue(v_40);
}



// Code for appr

static LispObject CC_appr(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_24 = v_3;
    v_25 = v_2;
// end of prologue
v_8:
    v_26 = v_25;
    if (v_26 == nil) goto v_11;
    else goto v_12;
v_11:
    goto v_7;
v_12:
    v_26 = v_25;
    if (!car_legal(v_26)) v_26 = cdrerror(v_26); else
    v_26 = cdr(v_26);
    stack[0] = v_26;
    if (!car_legal(v_25)) v_25 = carerror(v_25); else
    v_25 = car(v_25);
    v_24 = cons(v_25, v_24);
    env = stack[-1];
    v_25 = stack[0];
    goto v_8;
    v_24 = nil;
v_7:
    return onevalue(v_24);
}



// Code for sfto_psrem

static LispObject CC_sfto_psrem(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_91, v_92;
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
    stack_popper stack_popper_var(11);
// copy arguments values to proper place
    stack[-6] = v_5;
    stack[-7] = v_4;
    v_92 = v_3;
    stack[-8] = v_2;
// end of prologue
    goto v_22;
    goto v_20;
v_22:
v_20:
    goto v_27;
    goto v_25;
v_27:
v_25:
    v_91 = v_92;
    if (!car_legal(v_91)) v_91 = carerror(v_91); else
    v_91 = car(v_91);
    if (!car_legal(v_91)) v_91 = cdrerror(v_91); else
    v_91 = cdr(v_91);
    stack[-9] = v_91;
    v_91 = v_92;
    if (!car_legal(v_91)) v_91 = cdrerror(v_91); else
    v_91 = cdr(v_91);
    stack[-5] = v_91;
    v_91 = stack[-8];
    if (!car_legal(v_91)) v_91 = carerror(v_91); else
    v_91 = car(v_91);
    if (!car_legal(v_91)) v_91 = carerror(v_91); else
    v_91 = car(v_91);
    if (!car_legal(v_91)) v_91 = cdrerror(v_91); else
    v_91 = cdr(v_91);
    stack[-4] = v_91;
    v_91 = v_92;
    if (!car_legal(v_91)) v_91 = carerror(v_91); else
    v_91 = car(v_91);
    if (!car_legal(v_91)) v_91 = carerror(v_91); else
    v_91 = car(v_91);
    if (!car_legal(v_91)) v_91 = cdrerror(v_91); else
    v_91 = cdr(v_91);
    stack[-3] = v_91;
v_44:
    v_92 = stack[-4];
    v_91 = stack[-3];
    v_91 = static_cast<LispObject>(geq2(v_92, v_91));
    v_91 = v_91 ? lisp_true : nil;
    env = stack[-10];
    if (v_91 == nil) goto v_47;
    else goto v_48;
v_47:
    goto v_43;
v_48:
    v_91 = stack[-8];
    {   LispObject fn = basic_elt(env, 1); // sfto_lcx
    v_91 = (*qfn1(fn))(fn, v_91);
    }
    env = stack[-10];
    stack[0] = v_91;
    v_92 = stack[0];
    v_91 = stack[-9];
    {   LispObject fn = basic_elt(env, 2); // sfto_dgcd
    v_91 = (*qfn2(fn))(fn, v_92, v_91);
    }
    env = stack[-10];
    stack[-2] = v_91;
    v_92 = stack[0];
    v_91 = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // quotfx
    stack[-1] = (*qfn2(fn))(fn, v_92, v_91);
    }
    env = stack[-10];
    stack[0] = stack[-7];
    v_92 = stack[-4];
    v_91 = stack[-3];
    v_91 = difference2(v_92, v_91);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 4); // sfto_kexp
    v_91 = (*qfn2(fn))(fn, stack[0], v_91);
    }
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 5); // multf
    v_91 = (*qfn2(fn))(fn, stack[-1], v_91);
    }
    env = stack[-10];
    stack[0] = v_91;
    v_92 = stack[-9];
    v_91 = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // quotfx
    v_92 = (*qfn2(fn))(fn, v_92, v_91);
    }
    env = stack[-10];
    v_91 = stack[-8];
    if (!car_legal(v_91)) v_91 = cdrerror(v_91); else
    v_91 = cdr(v_91);
    {   LispObject fn = basic_elt(env, 5); // multf
    stack[-1] = (*qfn2(fn))(fn, v_92, v_91);
    }
    env = stack[-10];
    v_92 = stack[0];
    v_91 = stack[-5];
    {   LispObject fn = basic_elt(env, 5); // multf
    v_91 = (*qfn2(fn))(fn, v_92, v_91);
    }
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 6); // negf
    v_91 = (*qfn1(fn))(fn, v_91);
    }
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 7); // addf
    v_91 = (*qfn2(fn))(fn, stack[-1], v_91);
    }
    env = stack[-10];
    stack[-8] = v_91;
    v_92 = stack[-6];
    v_91 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    v_91 = Leqn_2(nil, v_92, v_91);
    env = stack[-10];
    if (v_91 == nil) goto v_81;
    v_91 = stack[-8];
    {   LispObject fn = basic_elt(env, 6); // negf
    v_91 = (*qfn1(fn))(fn, v_91);
    }
    env = stack[-10];
    stack[-8] = v_91;
    goto v_79;
v_81:
v_79:
    v_92 = stack[-8];
    v_91 = stack[-7];
    {   LispObject fn = basic_elt(env, 8); // sfto_vardeg
    v_91 = (*qfn2(fn))(fn, v_92, v_91);
    }
    env = stack[-10];
    stack[-4] = v_91;
    goto v_44;
v_43:
    v_91 = stack[-8];
    return onevalue(v_91);
}



// Code for co_hfn

static LispObject CC_co_hfn(LispObject env,
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
    if (!car_legal(v_11)) v_11 = cdrerror(v_11); else
    v_11 = cdr(v_11);
    {   LispObject fn = basic_elt(env, 1); // cl_fvarl1
    stack[-1] = (*qfn1(fn))(fn, v_11);
    }
    env = stack[-2];
    v_11 = stack[0];
    if (!car_legal(v_11)) v_11 = cdrerror(v_11); else
    v_11 = cdr(v_11);
    {   LispObject fn = basic_elt(env, 2); // rl_atnum
    v_11 = (*qfn1(fn))(fn, v_11);
    }
    {
        LispObject v_14 = stack[-1];
        return list2(v_14, v_11);
    }
}



// Code for ofsf_updsigndom

static LispObject CC_ofsf_updsigndom(LispObject env,
                         LispObject v_2)
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
    v_28 = stack[0];
    if (v_28 == nil) goto v_6;
    else goto v_7;
v_6:
    v_28 = basic_elt(env, 1); // equal
    goto v_5;
v_7:
    v_29 = stack[0];
    v_28 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_28 = static_cast<LispObject>(greaterp2(v_29, v_28));
    v_28 = v_28 ? lisp_true : nil;
    env = stack[-1];
    if (v_28 == nil) goto v_11;
    v_28 = basic_elt(env, 2); // greaterp
    goto v_5;
v_11:
    v_29 = stack[0];
    v_28 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_28 = static_cast<LispObject>(lessp2(v_29, v_28));
    v_28 = v_28 ? lisp_true : nil;
    env = stack[-1];
    if (v_28 == nil) goto v_17;
    v_28 = basic_elt(env, 3); // lessp
    goto v_5;
v_17:
    v_29 = basic_elt(env, 4); // "something wrong in ofsf_updSignDom:"
    v_28 = stack[0];
    v_28 = list2(v_29, v_28);
    env = stack[-1];
    {
        LispObject fn = basic_elt(env, 5); // rederr
        return (*qfn1(fn))(fn, v_28);
    }
    v_28 = nil;
v_5:
    return onevalue(v_28);
}



// Code for change!+int!+to!+sq

static LispObject CC_changeLintLtoLsq(LispObject env,
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
    v_10 = v_9;
    v_9 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_10, v_9);
    return onevalue(v_9);
}



// Code for cl_subfof

static LispObject CC_cl_subfof(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_59, v_60, v_61;
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
    stack[-6] = nil;
    stack[-2] = nil;
    v_59 = stack[-5];
    {   LispObject fn = basic_elt(env, 1); // rl_subalchk
    v_59 = (*qfn1(fn))(fn, v_59);
    }
    env = stack[-7];
    v_59 = stack[-5];
    stack[-1] = v_59;
v_15:
    v_59 = stack[-1];
    if (v_59 == nil) goto v_19;
    else goto v_20;
v_19:
    goto v_14;
v_20:
    v_59 = stack[-1];
    if (!car_legal(v_59)) v_59 = carerror(v_59); else
    v_59 = car(v_59);
    stack[0] = v_59;
    v_59 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // rl_eqnrhskernels
    v_59 = (*qfn1(fn))(fn, v_59);
    }
    env = stack[-7];
    stack[-3] = v_59;
    v_59 = stack[0];
    if (!car_legal(v_59)) v_60 = carerror(v_59); else
    v_60 = car(v_59);
    v_59 = stack[-3];
    v_59 = cons(v_60, v_59);
    env = stack[-7];
    v_60 = ncons(v_59);
    env = stack[-7];
    v_59 = stack[-6];
    v_59 = list2(v_60, v_59);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 3); // lto_alunion
    v_59 = (*qfn1(fn))(fn, v_59);
    }
    env = stack[-7];
    stack[-6] = v_59;
    v_59 = stack[0];
    if (!car_legal(v_59)) stack[0] = carerror(v_59); else
    stack[0] = car(v_59);
    v_60 = stack[-3];
    v_59 = stack[-2];
    v_59 = Lappend_2(nil, v_60, v_59);
    env = stack[-7];
    v_59 = cons(stack[0], v_59);
    env = stack[-7];
    stack[-2] = v_59;
    v_59 = stack[-1];
    if (!car_legal(v_59)) v_59 = cdrerror(v_59); else
    v_59 = cdr(v_59);
    stack[-1] = v_59;
    goto v_15;
v_14:
    v_59 = stack[-4];
    {   LispObject fn = basic_elt(env, 4); // cl_varl1
    v_59 = (*qfn1(fn))(fn, v_59);
    }
    env = stack[-7];
    stack[-3] = v_59;
    v_61 = stack[-2];
    v_59 = stack[-3];
    if (!car_legal(v_59)) v_60 = carerror(v_59); else
    v_60 = car(v_59);
    v_59 = stack[-3];
    if (!car_legal(v_59)) v_59 = cdrerror(v_59); else
    v_59 = cdr(v_59);
    v_59 = list3(v_61, v_60, v_59);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 5); // lto_nconcn
    v_59 = (*qfn1(fn))(fn, v_59);
    }
    env = stack[-7];
    stack[-2] = v_59;
    stack[0] = stack[-5];
    stack[-1] = stack[-4];
    stack[-3] = stack[-6];
    v_59 = stack[-2];
    v_59 = ncons(v_59);
    env = stack[-7];
    {
        LispObject v_69 = stack[0];
        LispObject v_70 = stack[-1];
        LispObject v_71 = stack[-3];
        LispObject fn = basic_elt(env, 6); // cl_subfof1
        return (*qfn4up(fn))(fn, v_69, v_70, v_71, v_59);
    }
    return onevalue(v_59);
}



// Code for rl_sacatlp

static LispObject CC_rl_sacatlp(LispObject env,
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
    stack[0] = qvalue(basic_elt(env, 1)); // rl_sacatlp!*
    v_10 = list2(v_11, v_10);
    env = stack[-1];
    {
        LispObject v_13 = stack[0];
        LispObject fn = basic_elt(env, 2); // apply
        return (*qfn2(fn))(fn, v_13, v_10);
    }
}



// Code for conditionml

static LispObject CC_conditionml(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_17;
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
    v_17 = basic_elt(env, 1); // "<condition>"
    {   LispObject fn = basic_elt(env, 3); // printout
    v_17 = (*qfn1(fn))(fn, v_17);
    }
    env = stack[-1];
    v_17 = lisp_true;
    {   LispObject fn = basic_elt(env, 4); // indent!*
    v_17 = (*qfn1(fn))(fn, v_17);
    }
    env = stack[-1];
    v_17 = stack[0];
    if (!car_legal(v_17)) v_17 = carerror(v_17); else
    v_17 = car(v_17);
    {   LispObject fn = basic_elt(env, 5); // expression
    v_17 = (*qfn1(fn))(fn, v_17);
    }
    env = stack[-1];
    v_17 = nil;
    {   LispObject fn = basic_elt(env, 4); // indent!*
    v_17 = (*qfn1(fn))(fn, v_17);
    }
    env = stack[-1];
    v_17 = basic_elt(env, 2); // "</condition>"
    {   LispObject fn = basic_elt(env, 3); // printout
    v_17 = (*qfn1(fn))(fn, v_17);
    }
    v_17 = nil;
    return onevalue(v_17);
}



// Code for simpu

static LispObject CC_simpu(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    v_20 = v_2;
// end of prologue
    stack[-1] = basic_elt(env, 1); // u
    v_19 = v_20;
    if (!car_legal(v_19)) stack[0] = carerror(v_19); else
    stack[0] = car(v_19);
    v_19 = v_20;
    if (!car_legal(v_19)) v_19 = cdrerror(v_19); else
    v_19 = cdr(v_19);
    {   LispObject fn = basic_elt(env, 2); // ordn
    v_19 = (*qfn1(fn))(fn, v_19);
    }
    env = stack[-2];
    v_19 = Lreverse(nil, v_19);
    env = stack[-2];
    v_20 = list2star(stack[-1], stack[0], v_19);
    env = stack[-2];
    v_19 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 3); // mksp
    v_20 = (*qfn2(fn))(fn, v_20, v_19);
    }
    env = stack[-2];
    v_19 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_19 = cons(v_20, v_19);
    env = stack[-2];
    v_20 = ncons(v_19);
    v_19 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_20, v_19);
}



// Code for qsimpcomb_standard_integer_part_sf

static LispObject CC_qsimpcomb_standard_integer_part_sf(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_63, v_64, v_65;
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
    v_63 = nil;
    stack[-3] = v_63;
v_12:
    v_63 = stack[-2];
    v_63 = Lconsp(nil, v_63);
    env = stack[-4];
    if (v_63 == nil) goto v_15;
    else goto v_16;
v_15:
    goto v_11;
v_16:
    v_63 = stack[-2];
    if (!car_legal(v_63)) v_63 = carerror(v_63); else
    v_63 = car(v_63);
    if (!car_legal(v_63)) v_63 = cdrerror(v_63); else
    v_63 = cdr(v_63);
    {   LispObject fn = basic_elt(env, 0); // qsimpcomb_standard_integer_part_sf
    v_63 = (*qfn1(fn))(fn, v_63);
    }
    env = stack[-4];
    stack[-1] = v_63;
    v_63 = stack[-2];
    if (!car_legal(v_63)) v_63 = carerror(v_63); else
    v_63 = car(v_63);
    if (!car_legal(v_63)) v_63 = carerror(v_63); else
    v_63 = car(v_63);
    if (!car_legal(v_63)) v_64 = carerror(v_63); else
    v_64 = car(v_63);
    v_63 = stack[-2];
    if (!car_legal(v_63)) v_63 = carerror(v_63); else
    v_63 = car(v_63);
    if (!car_legal(v_63)) v_63 = carerror(v_63); else
    v_63 = car(v_63);
    if (!car_legal(v_63)) v_63 = cdrerror(v_63); else
    v_63 = cdr(v_63);
    v_63 = cons(v_64, v_63);
    env = stack[-4];
    stack[0] = v_63;
v_35:
    v_64 = stack[0];
    v_63 = stack[-1];
    if (!car_legal(v_63)) v_63 = carerror(v_63); else
    v_63 = car(v_63);
    v_65 = cons(v_64, v_63);
    env = stack[-4];
    v_64 = nil;
    v_63 = stack[-3];
    v_63 = acons(v_65, v_64, v_63);
    env = stack[-4];
    stack[-3] = v_63;
    v_63 = stack[-1];
    if (!car_legal(v_63)) v_63 = cdrerror(v_63); else
    v_63 = cdr(v_63);
    stack[-1] = v_63;
    v_63 = stack[-1];
    if (v_63 == nil) goto v_49;
    goto v_35;
v_49:
    v_63 = stack[-2];
    if (!car_legal(v_63)) v_63 = cdrerror(v_63); else
    v_63 = cdr(v_63);
    stack[-2] = v_63;
    goto v_12;
v_11:
    v_63 = stack[-2];
    if (v_63 == nil) goto v_57;
    v_64 = stack[-2];
    v_63 = stack[-3];
    v_63 = cons(v_64, v_63);
    stack[-3] = v_63;
    goto v_55;
v_57:
v_55:
    v_63 = stack[-3];
    return onevalue(v_63);
}



// Code for a2vdp

static LispObject CC_a2vdp(LispObject env,
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
// space for vars preserved across procedure calls
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    v_45 = v_2;
// end of prologue
    v_44 = v_45;
    v_43 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_44 == v_43) goto v_10;
    else goto v_11;
v_10:
    v_43 = lisp_true;
    goto v_9;
v_11:
    v_43 = v_45;
    v_43 = (v_43 == nil ? lisp_true : nil);
    goto v_9;
    v_43 = nil;
v_9:
    if (v_43 == nil) goto v_7;
    stack[-2] = basic_elt(env, 1); // vdp
    stack[-1] = nil;
    v_44 = nil;
    v_43 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[0] = cons(v_44, v_43);
    env = stack[-3];
    v_44 = nil;
    v_43 = nil;
    v_43 = list2(v_44, v_43);
    {
        LispObject v_49 = stack[-2];
        LispObject v_50 = stack[-1];
        LispObject v_51 = stack[0];
        return list3star(v_49, v_50, v_51, v_43);
    }
v_7:
    v_43 = v_45;
    {   LispObject fn = basic_elt(env, 2); // a2dip
    v_43 = (*qfn1(fn))(fn, v_43);
    }
    env = stack[-3];
    v_44 = v_43;
    stack[-2] = basic_elt(env, 1); // vdp
    v_43 = v_44;
    if (!car_legal(v_43)) stack[-1] = carerror(v_43); else
    stack[-1] = car(v_43);
    v_43 = v_44;
    if (!car_legal(v_43)) v_43 = cdrerror(v_43); else
    v_43 = cdr(v_43);
    if (!car_legal(v_43)) stack[0] = carerror(v_43); else
    stack[0] = car(v_43);
    v_43 = nil;
    v_43 = list2(v_44, v_43);
    {
        LispObject v_52 = stack[-2];
        LispObject v_53 = stack[-1];
        LispObject v_54 = stack[0];
        return list3star(v_52, v_53, v_54, v_43);
    }
    v_43 = nil;
    return onevalue(v_43);
}



// Code for markedvarp

static LispObject CC_markedvarp(LispObject env,
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
    v_8 = basic_elt(env, 1); // !*marked!*
        return Lflagp(nil, v_7, v_8);
}



// Code for evalwhereexp

static LispObject CC_evalwhereexp(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    v_20 = v_2;
// end of prologue
    v_19 = v_20;
    if (!car_legal(v_19)) v_19 = carerror(v_19); else
    v_19 = car(v_19);
    if (!car_legal(v_19)) stack[-2] = cdrerror(v_19); else
    stack[-2] = cdr(v_19);
    stack[-1] = basic_elt(env, 1); // aeval
    stack[0] = basic_elt(env, 1); // aeval
    v_19 = v_20;
    if (!car_legal(v_19)) v_20 = cdrerror(v_19); else
    v_20 = cdr(v_19);
    v_19 = basic_elt(env, 2); // where
    {   LispObject fn = basic_elt(env, 3); // carx
    v_19 = (*qfn2(fn))(fn, v_20, v_19);
    }
    env = stack[-3];
    v_19 = list2(stack[0], v_19);
    env = stack[-3];
    v_19 = Lmkquote(nil, v_19);
    env = stack[-3];
    v_19 = list2(stack[-1], v_19);
    env = stack[-3];
    v_20 = list2(stack[-2], v_19);
    env = stack[-3];
    v_19 = nil;
    {
        LispObject fn = basic_elt(env, 4); // evalletsub
        return (*qfn2(fn))(fn, v_20, v_19);
    }
}



// Code for mv!-compact2

static LispObject CC_mvKcompact2(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    v_35 = stack[-1];
    v_34 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // equiv!-coeffs
    v_34 = (*qfn2(fn))(fn, v_35, v_34);
    }
    env = stack[-3];
    stack[-2] = v_34;
    v_34 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // mv!-domainlist
    v_34 = (*qfn1(fn))(fn, v_34);
    }
    env = stack[-3];
    v_35 = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // reduce
    v_34 = (*qfn2(fn))(fn, v_35, v_34);
    }
    env = stack[-3];
    v_36 = v_34;
    v_35 = v_36;
    v_34 = stack[-2];
    if (equal(v_35, v_34)) goto v_20;
    else goto v_21;
v_20:
    v_34 = nil;
    goto v_19;
v_21:
    v_35 = v_36;
    v_34 = stack[-2];
    {   LispObject fn = basic_elt(env, 4); // mv!-domainlist!-!-
    v_34 = (*qfn2(fn))(fn, v_35, v_34);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 5); // mv!-coeff!-replace
    v_35 = (*qfn2(fn))(fn, stack[0], v_34);
    }
    env = stack[-3];
    v_34 = stack[-1];
    {
        LispObject fn = basic_elt(env, 6); // mv!-!+
        return (*qfn2(fn))(fn, v_35, v_34);
    }
    v_34 = nil;
v_19:
    return onevalue(v_34);
}



// Code for extract_vars

static LispObject CC_extract_vars(LispObject env,
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
    stack[-1] = nil;
v_7:
    v_32 = stack[0];
    if (v_32 == nil) goto v_10;
    else goto v_11;
v_10:
    v_32 = stack[-1];
    {
        LispObject fn = basic_elt(env, 2); // nreverse
        return (*qfn1(fn))(fn, v_32);
    }
v_11:
    v_32 = stack[0];
    if (!car_legal(v_32)) v_32 = carerror(v_32); else
    v_32 = car(v_32);
    {   LispObject fn = basic_elt(env, 3); // raiseind!:
    v_33 = (*qfn1(fn))(fn, v_32);
    }
    env = stack[-2];
    v_32 = basic_elt(env, 1); // variable
    v_32 = Lflagp(nil, v_33, v_32);
    env = stack[-2];
    if (v_32 == nil) goto v_16;
    v_32 = stack[0];
    if (!car_legal(v_32)) v_33 = carerror(v_32); else
    v_33 = car(v_32);
    v_32 = stack[-1];
    v_32 = cons(v_33, v_32);
    env = stack[-2];
    stack[-1] = v_32;
    v_32 = stack[0];
    if (!car_legal(v_32)) v_32 = cdrerror(v_32); else
    v_32 = cdr(v_32);
    stack[0] = v_32;
    goto v_7;
v_16:
    v_32 = stack[0];
    if (!car_legal(v_32)) v_32 = cdrerror(v_32); else
    v_32 = cdr(v_32);
    stack[0] = v_32;
    goto v_7;
    v_32 = nil;
    return onevalue(v_32);
}



// Code for expand_terminal

static LispObject CC_expand_terminal(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_364, v_365, v_366;
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
    stack[-2] = v_2;
// end of prologue
    v_364 = stack[-2];
    if (!consp(v_364)) goto v_11;
    else goto v_12;
v_11:
    v_364 = stack[-2];
    goto v_8;
v_12:
    v_365 = stack[-2];
    v_364 = basic_elt(env, 1); // opt
    if (!consp(v_365)) goto v_16;
    v_365 = car(v_365);
    if (v_365 == v_364) goto v_15;
    else goto v_16;
v_15:
    {   LispObject fn = basic_elt(env, 14); // expansion_name
    v_364 = (*qfn0(fn))(fn);
    }
    env = stack[-6];
    stack[-5] = v_364;
    stack[-1] = stack[-5];
    stack[0] = basic_elt(env, 2); // (nil)
    v_364 = stack[-2];
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    v_364 = ncons(v_364);
    env = stack[-6];
    v_365 = list3(stack[-1], stack[0], v_364);
    env = stack[-6];
    v_364 = qvalue(basic_elt(env, 3)); // pending_rules!*
    v_364 = cons(v_365, v_364);
    env = stack[-6];
    setvalue(basic_elt(env, 3), v_364); // pending_rules!*
    v_364 = stack[-5];
    goto v_8;
v_16:
    v_365 = stack[-2];
    v_364 = basic_elt(env, 4); // seq
    if (!consp(v_365)) goto v_31;
    v_365 = car(v_365);
    if (v_365 == v_364) goto v_30;
    else goto v_31;
v_30:
    {   LispObject fn = basic_elt(env, 14); // expansion_name
    v_364 = (*qfn0(fn))(fn);
    }
    env = stack[-6];
    stack[-5] = v_364;
    stack[0] = stack[-5];
    v_364 = stack[-2];
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    v_364 = ncons(v_364);
    env = stack[-6];
    v_365 = list2(stack[0], v_364);
    env = stack[-6];
    v_364 = qvalue(basic_elt(env, 3)); // pending_rules!*
    v_364 = cons(v_365, v_364);
    env = stack[-6];
    setvalue(basic_elt(env, 3), v_364); // pending_rules!*
    v_364 = stack[-5];
    goto v_8;
v_31:
    v_365 = stack[-2];
    v_364 = basic_elt(env, 5); // star
    if (!consp(v_365)) goto v_45;
    v_365 = car(v_365);
    if (v_365 == v_364) goto v_44;
    else goto v_45;
v_44:
    {   LispObject fn = basic_elt(env, 14); // expansion_name
    v_364 = (*qfn0(fn))(fn);
    }
    env = stack[-6];
    stack[-5] = v_364;
    {   LispObject fn = basic_elt(env, 14); // expansion_name
    v_364 = (*qfn0(fn))(fn);
    }
    env = stack[-6];
    stack[-4] = v_364;
    v_364 = stack[-2];
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    if (v_364 == nil) goto v_54;
    v_364 = stack[-2];
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    if (v_364 == nil) goto v_61;
    else goto v_62;
v_61:
    v_364 = stack[-2];
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    if (!car_legal(v_364)) v_364 = carerror(v_364); else
    v_364 = car(v_364);
    v_364 = (consp(v_364) ? nil : lisp_true);
    goto v_60;
v_62:
    v_364 = nil;
    goto v_60;
    v_364 = nil;
v_60:
    if (v_364 == nil) goto v_54;
    v_364 = stack[-2];
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    if (!car_legal(v_364)) v_364 = carerror(v_364); else
    v_364 = car(v_364);
    stack[-4] = v_364;
    goto v_52;
v_54:
    stack[0] = stack[-4];
    v_364 = stack[-2];
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    v_364 = ncons(v_364);
    env = stack[-6];
    v_365 = list2(stack[0], v_364);
    env = stack[-6];
    v_364 = qvalue(basic_elt(env, 3)); // pending_rules!*
    v_364 = cons(v_365, v_364);
    env = stack[-6];
    setvalue(basic_elt(env, 3), v_364); // pending_rules!*
    goto v_52;
v_52:
    stack[-1] = stack[-5];
    stack[0] = basic_elt(env, 2); // (nil)
    v_365 = stack[-4];
    v_364 = stack[-5];
    v_365 = list2(v_365, v_364);
    env = stack[-6];
    v_364 = basic_elt(env, 6); // (cons !$1 !$2)
    v_364 = list2(v_365, v_364);
    env = stack[-6];
    v_365 = list3(stack[-1], stack[0], v_364);
    env = stack[-6];
    v_364 = qvalue(basic_elt(env, 3)); // pending_rules!*
    v_364 = cons(v_365, v_364);
    env = stack[-6];
    setvalue(basic_elt(env, 3), v_364); // pending_rules!*
    v_364 = stack[-5];
    goto v_8;
v_45:
    v_365 = stack[-2];
    v_364 = basic_elt(env, 7); // plus
    if (!consp(v_365)) goto v_97;
    v_365 = car(v_365);
    if (v_365 == v_364) goto v_96;
    else goto v_97;
v_96:
    {   LispObject fn = basic_elt(env, 14); // expansion_name
    v_364 = (*qfn0(fn))(fn);
    }
    env = stack[-6];
    stack[-5] = v_364;
    {   LispObject fn = basic_elt(env, 14); // expansion_name
    v_364 = (*qfn0(fn))(fn);
    }
    env = stack[-6];
    stack[-4] = v_364;
    v_364 = stack[-2];
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    if (v_364 == nil) goto v_106;
    v_364 = stack[-2];
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    if (v_364 == nil) goto v_113;
    else goto v_114;
v_113:
    v_364 = stack[-2];
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    if (!car_legal(v_364)) v_364 = carerror(v_364); else
    v_364 = car(v_364);
    v_364 = (consp(v_364) ? nil : lisp_true);
    goto v_112;
v_114:
    v_364 = nil;
    goto v_112;
    v_364 = nil;
v_112:
    if (v_364 == nil) goto v_106;
    v_364 = stack[-2];
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    if (!car_legal(v_364)) v_364 = carerror(v_364); else
    v_364 = car(v_364);
    stack[-4] = v_364;
    goto v_104;
v_106:
    stack[0] = stack[-4];
    v_364 = stack[-2];
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    v_364 = ncons(v_364);
    env = stack[-6];
    v_365 = list2(stack[0], v_364);
    env = stack[-6];
    v_364 = qvalue(basic_elt(env, 3)); // pending_rules!*
    v_364 = cons(v_365, v_364);
    env = stack[-6];
    setvalue(basic_elt(env, 3), v_364); // pending_rules!*
    goto v_104;
v_104:
    stack[-1] = stack[-5];
    v_364 = stack[-4];
    v_365 = ncons(v_364);
    env = stack[-6];
    v_364 = basic_elt(env, 8); // (list !$1)
    stack[0] = list2(v_365, v_364);
    env = stack[-6];
    v_365 = stack[-4];
    v_364 = stack[-5];
    v_365 = list2(v_365, v_364);
    env = stack[-6];
    v_364 = basic_elt(env, 6); // (cons !$1 !$2)
    v_364 = list2(v_365, v_364);
    env = stack[-6];
    v_365 = list3(stack[-1], stack[0], v_364);
    env = stack[-6];
    v_364 = qvalue(basic_elt(env, 3)); // pending_rules!*
    v_364 = cons(v_365, v_364);
    env = stack[-6];
    setvalue(basic_elt(env, 3), v_364); // pending_rules!*
    v_364 = stack[-5];
    goto v_8;
v_97:
    v_365 = stack[-2];
    v_364 = basic_elt(env, 9); // list
    if (!consp(v_365)) goto v_156;
    v_365 = car(v_365);
    if (v_365 == v_364) goto v_155;
    else goto v_156;
v_155:
    v_364 = stack[-2];
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    goto v_154;
v_156:
    v_364 = nil;
    goto v_154;
    v_364 = nil;
v_154:
    if (v_364 == nil) goto v_152;
    {   LispObject fn = basic_elt(env, 14); // expansion_name
    v_364 = (*qfn0(fn))(fn);
    }
    env = stack[-6];
    stack[-5] = v_364;
    {   LispObject fn = basic_elt(env, 14); // expansion_name
    v_364 = (*qfn0(fn))(fn);
    }
    env = stack[-6];
    stack[-4] = v_364;
    {   LispObject fn = basic_elt(env, 14); // expansion_name
    v_364 = (*qfn0(fn))(fn);
    }
    env = stack[-6];
    stack[-3] = v_364;
    v_364 = stack[-2];
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    if (v_364 == nil) goto v_171;
    v_364 = stack[-2];
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    if (v_364 == nil) goto v_179;
    else goto v_180;
v_179:
    v_364 = stack[-2];
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    if (!car_legal(v_364)) v_364 = carerror(v_364); else
    v_364 = car(v_364);
    v_364 = (consp(v_364) ? nil : lisp_true);
    goto v_178;
v_180:
    v_364 = nil;
    goto v_178;
    v_364 = nil;
v_178:
    if (v_364 == nil) goto v_171;
    v_364 = stack[-2];
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    if (!car_legal(v_364)) v_364 = carerror(v_364); else
    v_364 = car(v_364);
    stack[-4] = v_364;
    goto v_169;
v_171:
    stack[0] = stack[-4];
    v_364 = stack[-2];
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    v_364 = ncons(v_364);
    env = stack[-6];
    v_365 = list2(stack[0], v_364);
    env = stack[-6];
    v_364 = qvalue(basic_elt(env, 3)); // pending_rules!*
    v_364 = cons(v_365, v_364);
    env = stack[-6];
    setvalue(basic_elt(env, 3), v_364); // pending_rules!*
    goto v_169;
v_169:
    stack[-1] = stack[-3];
    stack[0] = basic_elt(env, 2); // (nil)
    v_364 = stack[-2];
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    if (!car_legal(v_364)) v_366 = carerror(v_364); else
    v_366 = car(v_364);
    v_365 = stack[-4];
    v_364 = stack[-3];
    v_365 = list3(v_366, v_365, v_364);
    env = stack[-6];
    v_364 = basic_elt(env, 10); // (cons !$2 !$3)
    v_364 = list2(v_365, v_364);
    env = stack[-6];
    v_365 = list3(stack[-1], stack[0], v_364);
    env = stack[-6];
    v_364 = qvalue(basic_elt(env, 3)); // pending_rules!*
    v_364 = cons(v_365, v_364);
    env = stack[-6];
    setvalue(basic_elt(env, 3), v_364); // pending_rules!*
    stack[-1] = stack[-5];
    stack[0] = basic_elt(env, 2); // (nil)
    v_365 = stack[-4];
    v_364 = stack[-3];
    v_365 = list2(v_365, v_364);
    env = stack[-6];
    v_364 = basic_elt(env, 6); // (cons !$1 !$2)
    v_364 = list2(v_365, v_364);
    env = stack[-6];
    v_365 = list3(stack[-1], stack[0], v_364);
    env = stack[-6];
    v_364 = qvalue(basic_elt(env, 3)); // pending_rules!*
    v_364 = cons(v_365, v_364);
    env = stack[-6];
    setvalue(basic_elt(env, 3), v_364); // pending_rules!*
    v_364 = stack[-5];
    goto v_8;
v_152:
    v_365 = stack[-2];
    v_364 = basic_elt(env, 11); // listplus
    if (!consp(v_365)) goto v_236;
    v_365 = car(v_365);
    if (v_365 == v_364) goto v_235;
    else goto v_236;
v_235:
    v_364 = stack[-2];
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    goto v_234;
v_236:
    v_364 = nil;
    goto v_234;
    v_364 = nil;
v_234:
    if (v_364 == nil) goto v_232;
    {   LispObject fn = basic_elt(env, 14); // expansion_name
    v_364 = (*qfn0(fn))(fn);
    }
    env = stack[-6];
    stack[-5] = v_364;
    {   LispObject fn = basic_elt(env, 14); // expansion_name
    v_364 = (*qfn0(fn))(fn);
    }
    env = stack[-6];
    stack[-4] = v_364;
    {   LispObject fn = basic_elt(env, 14); // expansion_name
    v_364 = (*qfn0(fn))(fn);
    }
    env = stack[-6];
    stack[-3] = v_364;
    v_364 = stack[-2];
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    if (v_364 == nil) goto v_251;
    v_364 = stack[-2];
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    if (v_364 == nil) goto v_259;
    else goto v_260;
v_259:
    v_364 = stack[-2];
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    if (!car_legal(v_364)) v_364 = carerror(v_364); else
    v_364 = car(v_364);
    v_364 = (consp(v_364) ? nil : lisp_true);
    goto v_258;
v_260:
    v_364 = nil;
    goto v_258;
    v_364 = nil;
v_258:
    if (v_364 == nil) goto v_251;
    v_364 = stack[-2];
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    if (!car_legal(v_364)) v_364 = carerror(v_364); else
    v_364 = car(v_364);
    stack[-4] = v_364;
    goto v_249;
v_251:
    stack[0] = stack[-4];
    v_364 = stack[-2];
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    v_364 = ncons(v_364);
    env = stack[-6];
    v_365 = list2(stack[0], v_364);
    env = stack[-6];
    v_364 = qvalue(basic_elt(env, 3)); // pending_rules!*
    v_364 = cons(v_365, v_364);
    env = stack[-6];
    setvalue(basic_elt(env, 3), v_364); // pending_rules!*
    goto v_249;
v_249:
    stack[-1] = stack[-3];
    stack[0] = basic_elt(env, 2); // (nil)
    v_364 = stack[-2];
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    if (!car_legal(v_364)) v_366 = carerror(v_364); else
    v_366 = car(v_364);
    v_365 = stack[-4];
    v_364 = stack[-3];
    v_365 = list3(v_366, v_365, v_364);
    env = stack[-6];
    v_364 = basic_elt(env, 10); // (cons !$2 !$3)
    v_364 = list2(v_365, v_364);
    env = stack[-6];
    v_365 = list3(stack[-1], stack[0], v_364);
    env = stack[-6];
    v_364 = qvalue(basic_elt(env, 3)); // pending_rules!*
    v_364 = cons(v_365, v_364);
    env = stack[-6];
    setvalue(basic_elt(env, 3), v_364); // pending_rules!*
    stack[0] = stack[-5];
    v_365 = stack[-4];
    v_364 = stack[-3];
    v_365 = list2(v_365, v_364);
    env = stack[-6];
    v_364 = basic_elt(env, 6); // (cons !$1 !$2)
    v_364 = list2(v_365, v_364);
    env = stack[-6];
    v_365 = list2(stack[0], v_364);
    env = stack[-6];
    v_364 = qvalue(basic_elt(env, 3)); // pending_rules!*
    v_364 = cons(v_365, v_364);
    env = stack[-6];
    setvalue(basic_elt(env, 3), v_364); // pending_rules!*
    v_364 = stack[-5];
    goto v_8;
v_232:
    v_365 = stack[-2];
    v_364 = basic_elt(env, 12); // or
    if (!consp(v_365)) goto v_311;
    v_365 = car(v_365);
    if (v_365 == v_364) goto v_310;
    else goto v_311;
v_310:
    {   LispObject fn = basic_elt(env, 14); // expansion_name
    v_364 = (*qfn0(fn))(fn);
    }
    env = stack[-6];
    stack[-5] = v_364;
    stack[-4] = stack[-5];
    v_364 = stack[-2];
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    stack[-3] = v_364;
    v_364 = stack[-3];
    if (v_364 == nil) goto v_328;
    else goto v_329;
v_328:
    v_364 = nil;
    v_365 = v_364;
    goto v_322;
v_329:
    v_364 = stack[-3];
    if (!car_legal(v_364)) v_364 = carerror(v_364); else
    v_364 = car(v_364);
    v_364 = ncons(v_364);
    env = stack[-6];
    v_364 = ncons(v_364);
    env = stack[-6];
    v_364 = ncons(v_364);
    env = stack[-6];
    stack[-1] = v_364;
    stack[-2] = v_364;
v_323:
    v_364 = stack[-3];
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    stack[-3] = v_364;
    v_364 = stack[-3];
    if (v_364 == nil) goto v_343;
    else goto v_344;
v_343:
    v_364 = stack[-2];
    v_365 = v_364;
    goto v_322;
v_344:
    stack[0] = stack[-1];
    v_364 = stack[-3];
    if (!car_legal(v_364)) v_364 = carerror(v_364); else
    v_364 = car(v_364);
    v_364 = ncons(v_364);
    env = stack[-6];
    v_364 = ncons(v_364);
    env = stack[-6];
    v_364 = ncons(v_364);
    env = stack[-6];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_364);
    v_364 = stack[-1];
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    stack[-1] = v_364;
    goto v_323;
v_322:
    v_364 = qvalue(basic_elt(env, 3)); // pending_rules!*
    v_364 = acons(stack[-4], v_365, v_364);
    env = stack[-6];
    setvalue(basic_elt(env, 3), v_364); // pending_rules!*
    v_364 = stack[-5];
    goto v_8;
v_311:
    v_364 = basic_elt(env, 13); // "Invalid item in a rule"
    {   LispObject fn = basic_elt(env, 15); // rederr
    v_364 = (*qfn1(fn))(fn, v_364);
    }
    goto v_10;
v_10:
    v_364 = nil;
v_8:
    return onevalue(v_364);
}



// Code for not_included

static LispObject CC_not_included(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_51, v_52, v_53, v_54, v_55;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_53 = v_3;
    v_54 = v_2;
// end of prologue
    v_51 = lisp_true;
    v_55 = v_51;
v_11:
    v_51 = v_54;
    if (v_51 == nil) goto v_14;
    v_51 = v_55;
    if (v_51 == nil) goto v_14;
    goto v_15;
v_14:
    goto v_10;
v_15:
    v_51 = v_53;
    v_55 = v_51;
v_24:
    v_51 = v_55;
    if (v_51 == nil) goto v_27;
    v_51 = v_54;
    if (!car_legal(v_51)) v_52 = carerror(v_51); else
    v_52 = car(v_51);
    v_51 = v_55;
    if (!car_legal(v_51)) v_51 = carerror(v_51); else
    v_51 = car(v_51);
    if (equal(v_52, v_51)) goto v_27;
    goto v_28;
v_27:
    goto v_23;
v_28:
    v_51 = v_55;
    if (!car_legal(v_51)) v_51 = cdrerror(v_51); else
    v_51 = cdr(v_51);
    v_55 = v_51;
    goto v_24;
v_23:
    v_51 = v_54;
    if (!car_legal(v_51)) v_51 = cdrerror(v_51); else
    v_51 = cdr(v_51);
    v_54 = v_51;
    goto v_11;
v_10:
    v_51 = v_55;
    if (v_51 == nil) goto v_45;
    v_51 = nil;
    goto v_43;
v_45:
    v_51 = lisp_true;
    goto v_43;
    v_51 = nil;
v_43:
    return onevalue(v_51);
}



// Code for valuechk

static LispObject CC_valuechk(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_110, v_111, v_112;
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
    v_110 = stack[-2];
    if (!symbolp(v_110)) v_110 = nil;
    else { v_110 = qfastgets(v_110);
           if (v_110 != nil) { v_110 = elt(v_110, 42); // number!-of!-args
#ifdef RECORD_GET
             if (v_110 != SPID_NOPROP)
                record_get(elt(fastget_names, 42), 1);
             else record_get(elt(fastget_names, 42), 0),
                v_110 = nil; }
           else record_get(elt(fastget_names, 42), 0); }
#else
             if (v_110 == SPID_NOPROP) v_110 = nil; }}
#endif
    stack[0] = v_110;
    if (v_110 == nil) goto v_12;
    v_110 = stack[-1];
    v_111 = Llength(nil, v_110);
    env = stack[-4];
    v_110 = stack[0];
    if (equal(v_111, v_110)) goto v_20;
    v_111 = stack[-2];
    v_110 = basic_elt(env, 1); // variadic
    v_110 = Lflagp(nil, v_111, v_110);
    env = stack[-4];
    v_110 = (v_110 == nil ? lisp_true : nil);
    goto v_18;
v_20:
    v_110 = nil;
    goto v_18;
    v_110 = nil;
v_18:
    if (v_110 == nil) goto v_12;
    goto v_10;
v_12:
    v_110 = stack[0];
    if (v_110 == nil) goto v_34;
    else goto v_35;
v_34:
    v_110 = stack[-1];
    if (v_110 == nil) goto v_39;
    else goto v_40;
v_39:
    v_110 = nil;
    goto v_38;
v_40:
    v_110 = stack[-1];
    if (!car_legal(v_110)) v_110 = cdrerror(v_110); else
    v_110 = cdr(v_110);
    if (v_110 == nil) goto v_47;
    else goto v_48;
v_47:
    v_110 = nil;
    goto v_46;
v_48:
    v_111 = stack[-2];
    v_110 = basic_elt(env, 2); // !:rd!:
    v_110 = get(v_111, v_110);
    env = stack[-4];
    if (v_110 == nil) goto v_56;
    else goto v_55;
v_56:
    v_111 = stack[-2];
    v_110 = basic_elt(env, 3); // !:rn!:
    v_110 = get(v_111, v_110);
    env = stack[-4];
v_55:
    goto v_46;
    v_110 = nil;
v_46:
    goto v_38;
    v_110 = nil;
v_38:
    goto v_33;
v_35:
    v_110 = nil;
    goto v_33;
    v_110 = nil;
v_33:
    if (v_110 == nil) goto v_31;
    else goto v_10;
v_31:
    goto v_11;
v_10:
    v_110 = qvalue(basic_elt(env, 4)); // !*strict_argcount
    if (v_110 == nil) goto v_69;
    stack[-3] = basic_elt(env, 5); // alg
    stack[0] = static_cast<LispObject>(272)+TAG_FIXNUM; // 17
    v_111 = basic_elt(env, 6); // "Wrong number of arguments to"
    v_110 = stack[-2];
    v_110 = list2(v_111, v_110);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 8); // rerror
    v_110 = (*qfn3(fn))(fn, stack[-3], stack[0], v_110);
    }
    env = stack[-4];
    goto v_67;
v_69:
    v_111 = basic_elt(env, 6); // "Wrong number of arguments to"
    v_110 = stack[-2];
    v_110 = list2(v_111, v_110);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 9); // lprim
    v_110 = (*qfn1(fn))(fn, v_110);
    }
    env = stack[-4];
    goto v_67;
v_67:
    goto v_9;
v_11:
v_9:
    v_111 = stack[-2];
    v_110 = stack[-1];
    v_110 = cons(v_111, v_110);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 10); // opfchk!!
    v_110 = (*qfn1(fn))(fn, v_110);
    }
    env = stack[-4];
    stack[-1] = v_110;
    v_110 = stack[-1];
    if (v_110 == nil) goto v_90;
    v_111 = stack[-1];
    v_110 = basic_elt(env, 7); // list
    if (!consp(v_111)) goto v_97;
    v_111 = car(v_111);
    if (v_111 == v_110) goto v_96;
    else goto v_97;
v_96:
    v_112 = stack[-1];
    v_111 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_110 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_110 = acons(v_112, v_111, v_110);
    env = stack[-4];
    v_110 = ncons(v_110);
    env = stack[-4];
    v_111 = v_110;
    goto v_95;
v_97:
    v_110 = stack[-1];
    v_111 = v_110;
    goto v_95;
    v_111 = nil;
v_95:
    v_110 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_110 = cons(v_111, v_110);
    env = stack[-4];
    {
        LispObject fn = basic_elt(env, 11); // znumrnil
        return (*qfn1(fn))(fn, v_110);
    }
v_90:
    v_110 = nil;
    return onevalue(v_110);
}



// Code for cgp_greenp

static LispObject CC_cgp_greenp(LispObject env,
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
    v_7 = (v_7 == nil ? lisp_true : nil);
    return onevalue(v_7);
}



// Code for integralir

static LispObject CC_integralir(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// end of prologue
    v_54 = qvalue(basic_elt(env, 1)); // atts
    v_53 = basic_elt(env, 2); // name
    {   LispObject fn = basic_elt(env, 6); // find
    v_53 = (*qfn2(fn))(fn, v_54, v_53);
    }
    env = stack[-3];
    v_53 = Lintern(nil, v_53);
    env = stack[-3];
    stack[-1] = v_53;
    v_53 = basic_elt(env, 3); // (bvar x 1)
    v_53 = ncons(v_53);
    env = stack[-3];
    stack[0] = v_53;
    v_54 = stack[-1];
    v_53 = basic_elt(env, 4); // defint
    if (v_54 == v_53) goto v_18;
    else goto v_19;
v_18:
    {   LispObject fn = basic_elt(env, 7); // lex
    v_53 = (*qfn0(fn))(fn);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 8); // omobj
    v_53 = (*qfn0(fn))(fn);
    }
    env = stack[-3];
    goto v_17;
v_19:
v_17:
    {   LispObject fn = basic_elt(env, 7); // lex
    v_53 = (*qfn0(fn))(fn);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 8); // omobj
    v_53 = (*qfn0(fn))(fn);
    }
    env = stack[-3];
    stack[-2] = v_53;
    v_53 = stack[-2];
    v_53 = Lconsp(nil, v_53);
    env = stack[-3];
    if (v_53 == nil) goto v_30;
    v_53 = stack[-2];
    if (!car_legal(v_53)) v_54 = carerror(v_53); else
    v_54 = car(v_53);
    v_53 = basic_elt(env, 5); // lambda
    if (v_54 == v_53) goto v_35;
    else goto v_36;
v_35:
    v_53 = stack[-2];
    {   LispObject fn = basic_elt(env, 9); // lambdavar
    v_53 = (*qfn1(fn))(fn, v_53);
    }
    env = stack[-3];
    stack[0] = v_53;
    v_53 = stack[-2];
    {   LispObject fn = basic_elt(env, 10); // lambdafun
    v_53 = (*qfn1(fn))(fn, v_53);
    }
    env = stack[-3];
    stack[-2] = v_53;
    goto v_34;
v_36:
v_34:
    goto v_28;
v_30:
v_28:
    v_54 = stack[-1];
    v_53 = nil;
    stack[-1] = list2(v_54, v_53);
    env = stack[-3];
    v_53 = stack[-2];
    v_53 = ncons(v_53);
    env = stack[-3];
    v_53 = Lappend_2(nil, stack[0], v_53);
    {
        LispObject v_58 = stack[-1];
        return Lappend_2(nil, v_58, v_53);
    }
    return onevalue(v_53);
}



// Code for specrd!:times

static LispObject CC_specrdTtimes(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_66, v_67;
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
    v_66 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // add_minus
    v_66 = (*qfn1(fn))(fn, v_66);
    }
    env = stack[-3];
    stack[-1] = v_66;
    v_66 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // add_minus
    v_66 = (*qfn1(fn))(fn, v_66);
    }
    env = stack[-3];
    stack[0] = v_66;
    v_67 = stack[-1];
    v_66 = basic_elt(env, 1); // minus
    if (!consp(v_67)) goto v_15;
    v_67 = car(v_67);
    if (v_67 == v_66) goto v_14;
    else goto v_15;
v_14:
    v_66 = stack[-1];
    if (!car_legal(v_66)) v_66 = cdrerror(v_66); else
    v_66 = cdr(v_66);
    if (!car_legal(v_66)) v_66 = carerror(v_66); else
    v_66 = car(v_66);
    stack[-1] = v_66;
    v_66 = lisp_true;
    stack[-2] = v_66;
    goto v_13;
v_15:
v_13:
    v_67 = stack[0];
    v_66 = basic_elt(env, 1); // minus
    if (!consp(v_67)) goto v_26;
    v_67 = car(v_67);
    if (v_67 == v_66) goto v_25;
    else goto v_26;
v_25:
    v_66 = stack[0];
    if (!car_legal(v_66)) v_66 = cdrerror(v_66); else
    v_66 = cdr(v_66);
    if (!car_legal(v_66)) v_66 = carerror(v_66); else
    v_66 = car(v_66);
    stack[0] = v_66;
    v_66 = stack[-2];
    v_66 = (v_66 == nil ? lisp_true : nil);
    stack[-2] = v_66;
    goto v_24;
v_26:
v_24:
    v_66 = stack[-1];
    if (!consp(v_66)) goto v_37;
    else goto v_38;
v_37:
    v_66 = stack[-1];
    v_66 = Lfloat(nil, v_66);
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 3); // mkround
    v_66 = (*qfn1(fn))(fn, v_66);
    }
    env = stack[-3];
    stack[-1] = v_66;
    goto v_36;
v_38:
v_36:
    v_66 = stack[0];
    if (!consp(v_66)) goto v_45;
    else goto v_46;
v_45:
    v_66 = stack[0];
    v_66 = Lfloat(nil, v_66);
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 3); // mkround
    v_66 = (*qfn1(fn))(fn, v_66);
    }
    env = stack[-3];
    stack[0] = v_66;
    goto v_44;
v_46:
v_44:
    v_66 = stack[-2];
    if (v_66 == nil) goto v_54;
    stack[-2] = basic_elt(env, 1); // minus
    v_67 = stack[-1];
    v_66 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // rd!:times
    v_66 = (*qfn2(fn))(fn, v_67, v_66);
    }
    {
        LispObject v_71 = stack[-2];
        return list2(v_71, v_66);
    }
v_54:
    v_67 = stack[-1];
    v_66 = stack[0];
    {
        LispObject fn = basic_elt(env, 4); // rd!:times
        return (*qfn2(fn))(fn, v_67, v_66);
    }
    v_66 = nil;
    return onevalue(v_66);
}



// Code for dip2a

static LispObject CC_dip2a(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // dip2a1
    v_15 = (*qfn1(fn))(fn, v_15);
    }
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // dipreplus
        return (*qfn1(fn))(fn, v_15);
    }
    v_15 = nil;
v_5:
    return onevalue(v_15);
}



// Code for evalmember

static LispObject CC_evalmember(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // getrlist
    v_9 = (*qfn1(fn))(fn, v_9);
    }
    v_9 = Lmember(nil, stack[0], v_9);
    return onevalue(v_9);
}



// Code for gbfdiff

static LispObject CC_gbfdiff(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // difbf
    stack[-2] = (*qfn2(fn))(fn, v_17, v_16);
    }
    env = stack[-3];
    v_16 = stack[-1];
    if (!car_legal(v_16)) v_17 = cdrerror(v_16); else
    v_17 = cdr(v_16);
    v_16 = stack[0];
    if (!car_legal(v_16)) v_16 = cdrerror(v_16); else
    v_16 = cdr(v_16);
    {   LispObject fn = basic_elt(env, 1); // difbf
    v_16 = (*qfn2(fn))(fn, v_17, v_16);
    }
    {
        LispObject v_21 = stack[-2];
        return cons(v_21, v_16);
    }
}



// Code for gpargp

static LispObject CC_gpargp(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_16;
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
    v_16 = stack[0];
    v_16 = Lstringp(nil, v_16);
    env = stack[-1];
    if (v_16 == nil) goto v_6;
    else goto v_5;
v_6:
    v_16 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // gpexpp
    v_16 = (*qfn1(fn))(fn, v_16);
    }
    env = stack[-1];
    if (v_16 == nil) goto v_11;
    else goto v_10;
v_11:
    v_16 = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // gplogexpp
        return (*qfn1(fn))(fn, v_16);
    }
v_10:
v_5:
    return onevalue(v_16);
}



// Code for indexvp

static LispObject CC_indexvp(LispObject env,
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
    v_15 = v_2;
// end of prologue
    v_16 = v_15;
    if (!consp(v_16)) goto v_7;
    if (!car_legal(v_15)) v_15 = carerror(v_15); else
    v_15 = car(v_15);
    if (!symbolp(v_15)) v_15 = nil;
    else { v_15 = qfastgets(v_15);
           if (v_15 != nil) { v_15 = elt(v_15, 16); // indexvar
#ifdef RECORD_GET
             if (v_15 == SPID_NOPROP)
                record_get(elt(fastget_names, 16), 0),
                v_15 = nil;
             else record_get(elt(fastget_names, 16), 1),
                v_15 = lisp_true; }
           else record_get(elt(fastget_names, 16), 0); }
#else
             if (v_15 == SPID_NOPROP) v_15 = nil; else v_15 = lisp_true; }}
#endif
    goto v_5;
v_7:
    v_15 = nil;
    goto v_5;
    v_15 = nil;
v_5:
    return onevalue(v_15);
}



// Code for mk_simpl_map_

static LispObject CC_mk_simpl_map_(LispObject env,
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
        LispObject fn = basic_elt(env, 1); // mk_simpl_map_1
        return (*qfn2(fn))(fn, v_8, v_7);
    }
}



// Code for simpdfp

static LispObject CC_simpdfp(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_222, v_223, v_224, v_225, v_226;
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
    stack[0] = v_2;
// end of prologue
    v_222 = stack[0];
    v_223 = Llength(nil, v_222);
    env = stack[-6];
    v_222 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_222 = static_cast<LispObject>(lessp2(v_223, v_222));
    v_222 = v_222 ? lisp_true : nil;
    env = stack[-6];
    if (v_222 == nil) goto v_16;
    goto v_12;
v_16:
    v_222 = stack[0];
    if (!car_legal(v_222)) v_222 = carerror(v_222); else
    v_222 = car(v_222);
    {   LispObject fn = basic_elt(env, 10); // reval
    v_222 = (*qfn1(fn))(fn, v_222);
    }
    env = stack[-6];
    stack[-5] = v_222;
    v_222 = stack[-5];
    v_222 = Lconsp(nil, v_222);
    env = stack[-6];
    if (v_222 == nil) goto v_26;
    else goto v_27;
v_26:
    v_222 = stack[0];
    if (!car_legal(v_222)) v_222 = cdrerror(v_222); else
    v_222 = cdr(v_222);
    if (!car_legal(v_222)) v_223 = carerror(v_222); else
    v_223 = car(v_222);
    v_222 = qvalue(basic_elt(env, 1)); // frlis!*
    v_222 = Lmember(nil, v_223, v_222);
    if (v_222 == nil) goto v_33;
    v_223 = basic_elt(env, 2); // dfp
    v_222 = stack[0];
    v_223 = cons(v_223, v_222);
    env = stack[-6];
    v_222 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {
        LispObject fn = basic_elt(env, 11); // mksq
        return (*qfn2(fn))(fn, v_223, v_222);
    }
v_33:
    v_223 = stack[-5];
    v_222 = stack[0];
    if (!car_legal(v_222)) v_222 = cdrerror(v_222); else
    v_222 = cdr(v_222);
    if (!car_legal(v_222)) v_222 = carerror(v_222); else
    v_222 = car(v_222);
    if (!car_legal(v_222)) v_222 = cdrerror(v_222); else
    v_222 = cdr(v_222);
    v_222 = cons(v_223, v_222);
    env = stack[-6];
    {
        LispObject fn = basic_elt(env, 12); // simpdf
        return (*qfn1(fn))(fn, v_222);
    }
    v_222 = nil;
    goto v_11;
v_27:
    v_222 = stack[-5];
    if (!car_legal(v_222)) v_222 = carerror(v_222); else
    v_222 = car(v_222);
    stack[-1] = v_222;
    v_222 = stack[0];
    if (!car_legal(v_222)) v_222 = cdrerror(v_222); else
    v_222 = cdr(v_222);
    if (!car_legal(v_222)) v_222 = carerror(v_222); else
    v_222 = car(v_222);
    {   LispObject fn = basic_elt(env, 10); // reval
    v_222 = (*qfn1(fn))(fn, v_222);
    }
    env = stack[-6];
    v_226 = v_222;
    v_223 = v_226;
    v_222 = qvalue(basic_elt(env, 1)); // frlis!*
    v_222 = Lmember(nil, v_223, v_222);
    if (v_222 == nil) goto v_67;
    else goto v_68;
v_67:
    v_223 = v_226;
    v_222 = basic_elt(env, 3); // list
    v_222 = Leqcar(nil, v_223, v_222);
    env = stack[-6];
    v_222 = (v_222 == nil ? lisp_true : nil);
    goto v_66;
v_68:
    v_222 = nil;
    goto v_66;
    v_222 = nil;
v_66:
    if (v_222 == nil) goto v_64;
    stack[-4] = v_226;
    v_222 = stack[0];
    if (!car_legal(v_222)) v_222 = cdrerror(v_222); else
    v_222 = cdr(v_222);
    if (!car_legal(v_222)) v_222 = cdrerror(v_222); else
    v_222 = cdr(v_222);
    stack[-3] = v_222;
    v_222 = stack[-3];
    if (v_222 == nil) goto v_92;
    else goto v_93;
v_92:
    v_222 = nil;
    goto v_85;
v_93:
    v_222 = stack[-3];
    if (!car_legal(v_222)) v_222 = carerror(v_222); else
    v_222 = car(v_222);
    {   LispObject fn = basic_elt(env, 10); // reval
    v_222 = (*qfn1(fn))(fn, v_222);
    }
    env = stack[-6];
    v_222 = ncons(v_222);
    env = stack[-6];
    stack[-1] = v_222;
    stack[-2] = v_222;
v_86:
    v_222 = stack[-3];
    if (!car_legal(v_222)) v_222 = cdrerror(v_222); else
    v_222 = cdr(v_222);
    stack[-3] = v_222;
    v_222 = stack[-3];
    if (v_222 == nil) goto v_106;
    else goto v_107;
v_106:
    v_222 = stack[-2];
    goto v_85;
v_107:
    stack[0] = stack[-1];
    v_222 = stack[-3];
    if (!car_legal(v_222)) v_222 = carerror(v_222); else
    v_222 = car(v_222);
    {   LispObject fn = basic_elt(env, 10); // reval
    v_222 = (*qfn1(fn))(fn, v_222);
    }
    env = stack[-6];
    v_222 = ncons(v_222);
    env = stack[-6];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_222);
    v_222 = stack[-1];
    if (!car_legal(v_222)) v_222 = cdrerror(v_222); else
    v_222 = cdr(v_222);
    stack[-1] = v_222;
    goto v_86;
v_85:
    v_222 = cons(stack[-4], v_222);
    env = stack[-6];
    v_226 = v_222;
    stack[0] = basic_elt(env, 3); // list
    v_223 = v_226;
    v_222 = nil;
    {   LispObject fn = basic_elt(env, 13); // dfp!-normalize
    v_222 = (*qfn2(fn))(fn, v_223, v_222);
    }
    env = stack[-6];
    v_222 = cons(stack[0], v_222);
    env = stack[-6];
    v_226 = v_222;
    v_223 = basic_elt(env, 2); // dfp
    v_222 = stack[-5];
    v_224 = v_226;
    v_222 = list3(v_223, v_222, v_224);
    env = stack[-6];
    {
        LispObject fn = basic_elt(env, 14); // simp
        return (*qfn1(fn))(fn, v_222);
    }
v_64:
    v_223 = stack[-1];
    v_222 = basic_elt(env, 4); // generic_function
    v_222 = get(v_223, v_222);
    env = stack[-6];
    v_225 = v_222;
    v_222 = lisp_true;
    v_223 = v_225;
    if (v_223 == nil) goto v_138;
    v_224 = v_226;
    v_223 = basic_elt(env, 3); // list
    if (!consp(v_224)) goto v_138;
    v_224 = car(v_224);
    if (v_224 == v_223) goto v_141;
    else goto v_138;
v_141:
    v_223 = v_226;
    if (!car_legal(v_223)) v_223 = cdrerror(v_223); else
    v_223 = cdr(v_223);
    v_224 = v_223;
v_148:
    v_223 = v_224;
    if (v_223 == nil) goto v_153;
    else goto v_154;
v_153:
    goto v_147;
v_154:
    v_223 = v_224;
    if (!car_legal(v_223)) v_223 = carerror(v_223); else
    v_223 = car(v_223);
    if (v_222 == nil) goto v_162;
    else goto v_163;
v_162:
    v_222 = nil;
    goto v_161;
v_163:
    v_222 = v_225;
    v_222 = Lmember(nil, v_223, v_222);
    goto v_161;
    v_222 = nil;
v_161:
    v_223 = v_224;
    if (!car_legal(v_223)) v_223 = cdrerror(v_223); else
    v_223 = cdr(v_223);
    v_224 = v_223;
    goto v_148;
v_147:
    goto v_136;
v_138:
v_136:
    if (v_222 == nil) goto v_175;
    else goto v_176;
v_175:
    v_223 = nil;
    v_222 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_223, v_222);
v_176:
    v_223 = v_226;
    v_222 = basic_elt(env, 5); // (list)
    if (equal(v_223, v_222)) goto v_183;
    else goto v_184;
v_183:
    v_223 = stack[-5];
    v_222 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {
        LispObject fn = basic_elt(env, 11); // mksq
        return (*qfn2(fn))(fn, v_223, v_222);
    }
v_184:
    v_222 = v_225;
    if (v_222 == nil) goto v_193;
    v_223 = stack[-1];
    v_222 = basic_elt(env, 6); // dfp_commute
    v_222 = Lflagp(nil, v_223, v_222);
    env = stack[-6];
    if (v_222 == nil) goto v_193;
    v_222 = v_225;
// Binding kord!*
// FLUIDBIND: reloadenv=6 litvec-offset=7 saveloc=1
{   bind_fluid_stack bind_fluid_var(-6, 7, -1);
    setvalue(basic_elt(env, 7), v_222); // kord!*
    stack[0] = basic_elt(env, 3); // list
    v_222 = v_226;
    if (!car_legal(v_222)) v_223 = cdrerror(v_222); else
    v_223 = cdr(v_222);
    v_222 = basic_elt(env, 8); // ordp
    {   LispObject fn = basic_elt(env, 15); // sort
    v_222 = (*qfn2(fn))(fn, v_223, v_222);
    }
    env = stack[-6];
    v_222 = cons(stack[0], v_222);
    env = stack[-6];
    v_226 = v_222;
    ;}  // end of a binding scope
    goto v_191;
v_193:
v_191:
    v_223 = basic_elt(env, 2); // dfp
    v_222 = stack[-5];
    v_224 = v_226;
    v_222 = list3(v_223, v_222, v_224);
    env = stack[-6];
    stack[0] = v_222;
    v_223 = stack[0];
    v_222 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {
        LispObject fn = basic_elt(env, 11); // mksq
        return (*qfn2(fn))(fn, v_223, v_222);
    }
v_12:
    v_223 = basic_elt(env, 2); // dfp
    v_222 = stack[0];
    v_223 = cons(v_223, v_222);
    env = stack[-6];
    v_222 = basic_elt(env, 9); // "generic differential"
    {   LispObject fn = basic_elt(env, 16); // typerr
    v_222 = (*qfn2(fn))(fn, v_223, v_222);
    }
    v_222 = nil;
v_11:
    return onevalue(v_222);
}



// Code for balance_mod

static LispObject CC_balance_mod(LispObject env,
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
    v_21 = stack[-1];
    v_20 = stack[-1];
    v_21 = plus2(v_21, v_20);
    env = stack[-2];
    v_20 = stack[0];
    v_20 = static_cast<LispObject>(greaterp2(v_21, v_20));
    v_20 = v_20 ? lisp_true : nil;
    if (v_20 == nil) goto v_8;
    v_21 = stack[-1];
    v_20 = stack[0];
    return difference2(v_21, v_20);
v_8:
    v_20 = stack[-1];
    goto v_6;
    v_20 = nil;
v_6:
    return onevalue(v_20);
}



// Code for super_vectorfield

static LispObject CC_super_vectorfield(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_153, v_154, v_155;
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
    stack[-1] = v_4;
    stack[-4] = v_3;
    stack[-5] = v_2;
// end of prologue
    v_153 = stack[-5];
    if (symbolp(v_153)) goto v_12;
    stack[-3] = basic_elt(env, 1); // "SUPER_VECTORFIELD:"
    stack[-2] = stack[-5];
    stack[0] = basic_elt(env, 2); // "is not an identifier"
    v_154 = nil;
    v_153 = lisp_true;
    v_153 = list2(v_154, v_153);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 14); // msgpri
    v_153 = (*qfn4up(fn))(fn, stack[-3], stack[-2], stack[0], v_153);
    }
    env = stack[-7];
    goto v_10;
v_12:
v_10:
    v_155 = stack[-5];
    v_154 = basic_elt(env, 3); // simpfn
    v_153 = basic_elt(env, 4); // super_der_simp
    v_153 = Lputprop(nil, v_155, v_154, v_153);
    env = stack[-7];
    v_153 = stack[-5];
    v_154 = ncons(v_153);
    env = stack[-7];
    v_153 = basic_elt(env, 5); // full
    v_153 = Lflag(nil, v_154, v_153);
    env = stack[-7];
    v_153 = stack[-4];
    if (v_153 == nil) goto v_31;
    else goto v_32;
v_31:
    v_153 = stack[-4];
    goto v_30;
v_32:
    v_153 = stack[-4];
    if (!consp(v_153)) goto v_35;
    else goto v_36;
v_35:
    v_153 = stack[-4];
    v_153 = ncons(v_153);
    env = stack[-7];
    goto v_30;
v_36:
    v_153 = stack[-4];
    if (!car_legal(v_153)) v_154 = carerror(v_153); else
    v_154 = car(v_153);
    v_153 = basic_elt(env, 6); // list
    if (v_154 == v_153) goto v_40;
    else goto v_41;
v_40:
    v_153 = stack[-4];
    if (!car_legal(v_153)) v_153 = cdrerror(v_153); else
    v_153 = cdr(v_153);
    goto v_30;
v_41:
    v_153 = stack[-4];
    goto v_30;
    v_153 = nil;
v_30:
    stack[-4] = v_153;
    v_153 = stack[-1];
    if (v_153 == nil) goto v_52;
    else goto v_53;
v_52:
    v_153 = stack[-1];
    goto v_51;
v_53:
    v_153 = stack[-1];
    if (!consp(v_153)) goto v_56;
    else goto v_57;
v_56:
    v_153 = stack[-1];
    v_153 = ncons(v_153);
    env = stack[-7];
    goto v_51;
v_57:
    v_153 = stack[-1];
    if (!car_legal(v_153)) v_154 = carerror(v_153); else
    v_154 = car(v_153);
    v_153 = basic_elt(env, 6); // list
    if (v_154 == v_153) goto v_61;
    else goto v_62;
v_61:
    v_153 = stack[-1];
    if (!car_legal(v_153)) v_153 = cdrerror(v_153); else
    v_153 = cdr(v_153);
    goto v_51;
v_62:
    v_153 = stack[-1];
    goto v_51;
    v_153 = nil;
v_51:
    stack[-1] = v_153;
    v_153 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-6] = v_153;
    v_153 = stack[-1];
    stack[-3] = v_153;
v_75:
    v_153 = stack[-3];
    if (v_153 == nil) goto v_79;
    else goto v_80;
v_79:
    goto v_74;
v_80:
    v_153 = stack[-3];
    if (!car_legal(v_153)) v_153 = carerror(v_153); else
    v_153 = car(v_153);
    stack[0] = v_153;
    v_153 = stack[0];
    v_154 = Llength(nil, v_153);
    env = stack[-7];
    v_153 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    if (v_154 == v_153) goto v_93;
    v_153 = lisp_true;
    goto v_91;
v_93:
    v_153 = stack[0];
    if (!car_legal(v_153)) v_154 = carerror(v_153); else
    v_154 = car(v_153);
    v_153 = basic_elt(env, 7); // ext
    if (v_154 == v_153) goto v_103;
    v_153 = lisp_true;
    goto v_101;
v_103:
    v_153 = stack[0];
    if (!car_legal(v_153)) v_153 = cdrerror(v_153); else
    v_153 = cdr(v_153);
    if (!car_legal(v_153)) v_153 = carerror(v_153); else
    v_153 = car(v_153);
    v_153 = integerp(v_153);
    v_153 = (v_153 == nil ? lisp_true : nil);
    goto v_101;
    v_153 = nil;
v_101:
    goto v_91;
    v_153 = nil;
v_91:
    if (v_153 == nil) goto v_89;
    stack[-2] = basic_elt(env, 1); // "SUPER_VECTORFIELD:"
    stack[-1] = stack[0];
    stack[0] = basic_elt(env, 8); // "not a valid odd variable"
    v_154 = nil;
    v_153 = lisp_true;
    v_153 = list2(v_154, v_153);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 14); // msgpri
    v_153 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_153);
    }
    env = stack[-7];
    goto v_87;
v_89:
    v_154 = stack[-6];
    v_153 = stack[0];
    if (!car_legal(v_153)) v_153 = cdrerror(v_153); else
    v_153 = cdr(v_153);
    if (!car_legal(v_153)) v_153 = carerror(v_153); else
    v_153 = car(v_153);
    {   LispObject fn = basic_elt(env, 15); // max
    v_153 = (*qfn2(fn))(fn, v_154, v_153);
    }
    env = stack[-7];
    stack[-6] = v_153;
    goto v_87;
v_87:
    v_153 = stack[-3];
    if (!car_legal(v_153)) v_153 = cdrerror(v_153); else
    v_153 = cdr(v_153);
    stack[-3] = v_153;
    goto v_75;
v_74:
    v_155 = stack[-5];
    v_154 = basic_elt(env, 9); // variables
    v_153 = stack[-4];
    v_153 = Lputprop(nil, v_155, v_154, v_153);
    env = stack[-7];
    stack[-1] = stack[-5];
    stack[0] = basic_elt(env, 10); // even_dimension
    v_153 = stack[-4];
    v_153 = Llength(nil, v_153);
    env = stack[-7];
    v_153 = Lputprop(nil, stack[-1], stack[0], v_153);
    env = stack[-7];
    v_155 = stack[-5];
    v_154 = basic_elt(env, 11); // odd_dimension
    v_153 = stack[-6];
    v_153 = Lputprop(nil, v_155, v_154, v_153);
    env = stack[-7];
    v_155 = stack[-5];
    v_154 = basic_elt(env, 12); // setkfn
    v_153 = basic_elt(env, 13); // setk_super_vectorfield
    v_153 = Lputprop(nil, v_155, v_154, v_153);
    env = stack[-7];
    stack[0] = basic_elt(env, 6); // list
    v_153 = stack[-4];
    v_154 = Llength(nil, v_153);
    v_153 = stack[-6];
    {
        LispObject v_163 = stack[0];
        return list3(v_163, v_154, v_153);
    }
    return onevalue(v_153);
}



// Code for rtypepart

static LispObject CC_rtypepart(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_14;
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
    v_14 = v_2;
// end of prologue
    {   LispObject fn = basic_elt(env, 2); // getrtypecar
    v_14 = (*qfn1(fn))(fn, v_14);
    }
    env = stack[0];
    if (v_14 == nil) goto v_7;
    v_14 = basic_elt(env, 1); // yetunknowntype
    goto v_5;
v_7:
    v_14 = nil;
    goto v_5;
    v_14 = nil;
v_5:
    return onevalue(v_14);
}



// Code for fctlength

static LispObject CC_fctlength(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // fctargs
    v_7 = (*qfn1(fn))(fn, v_7);
    }
        return Llength(nil, v_7);
}



setup_type const u42_setup[] =
{
    {"findoptrow",              G0W3,     G1W3,     G2W3,     CC_findoptrow,G4W3},
    {"diplmon2sq",              G0W2,     G1W2,     CC_diplmon2sq,G3W2, G4W2},
    {"remove_least_item",       G0W1,     CC_remove_least_item,G2W1,G3W1,G4W1},
    {"listpri",                 G0W1,     CC_listpri,G2W1,    G3W1,     G4W1},
    {"r2speclist1",             G0W1,     CC_r2speclist1,G2W1,G3W1,     G4W1},
    {"mkassign",                G0W2,     G1W2,     CC_mkassign,G3W2,   G4W2},
    {"ev-edgeloop",             G0W2,     G1W2,     CC_evKedgeloop,G3W2,G4W2},
    {"primep27",                G0W1,     CC_primep27,G2W1,   G3W1,     G4W1},
    {"nonmult",                 G0W1,     CC_nonmult,G2W1,    G3W1,     G4W1},
    {"xquotient-mod-p",         G0W3,     G1W3,     G2W3,     CC_xquotientKmodKp,G4W3},
    {"mkcrn",                   G0W2,     G1W2,     CC_mkcrn, G3W2,     G4W2},
    {"extadd",                  G0W2,     G1W2,     CC_extadd,G3W2,     G4W2},
    {"read-comment1",           G0W1,     CC_readKcomment1,G2W1,G3W1,   G4W1},
    {"sfto_yun-updecf",         G0W1,     CC_sfto_yunKupdecf,G2W1,G3W1, G4W1},
    {"rl_identity1",            G0W1,     CC_rl_identity1,G2W1,G3W1,    G4W1},
    {"pasf_anegateat",          G0W1,     CC_pasf_anegateat,G2W1,G3W1,  G4W1},
    {"bc_sum",                  G0W2,     G1W2,     CC_bc_sum,G3W2,     G4W2},
    {"ciom",                    G0W1,     CC_ciom,  G2W1,     G3W1,     G4W1},
    {"f4",                      G0W1,     CC_f4,    G2W1,     G3W1,     G4W1},
    {"evzero",                  CC_evzero,G1W0,     G2W0,     G3W0,     G4W0},
    {"chksymmetries&sub1",      G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_chksymmetriesGsub1},
    {"strand-alg-top",          G0W3,     G1W3,     G2W3,     CC_strandKalgKtop,G4W3},
    {"cali=min",                G0W3,     G1W3,     G2W3,     CC_caliMmin,G4W3},
    {"appr",                    G0W2,     G1W2,     CC_appr,  G3W2,     G4W2},
    {"sfto_psrem",              G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_sfto_psrem},
    {"co_hfn",                  G0W1,     CC_co_hfn,G2W1,     G3W1,     G4W1},
    {"ofsf_updsigndom",         G0W1,     CC_ofsf_updsigndom,G2W1,G3W1, G4W1},
    {"change+int+to+sq",        G0W1,     CC_changeLintLtoLsq,G2W1,G3W1,G4W1},
    {"cl_subfof",               G0W2,     G1W2,     CC_cl_subfof,G3W2,  G4W2},
    {"rl_sacatlp",              G0W2,     G1W2,     CC_rl_sacatlp,G3W2, G4W2},
    {"conditionml",             G0W1,     CC_conditionml,G2W1,G3W1,     G4W1},
    {"simpu",                   G0W1,     CC_simpu, G2W1,     G3W1,     G4W1},
    {"qsimpcomb_standard_integer_part_sf",G0W1,CC_qsimpcomb_standard_integer_part_sf,G2W1,G3W1,G4W1},
    {"a2vdp",                   G0W1,     CC_a2vdp, G2W1,     G3W1,     G4W1},
    {"markedvarp",              G0W1,     CC_markedvarp,G2W1, G3W1,     G4W1},
    {"evalwhereexp",            G0W1,     CC_evalwhereexp,G2W1,G3W1,    G4W1},
    {"mv-compact2",             G0W2,     G1W2,     CC_mvKcompact2,G3W2,G4W2},
    {"extract_vars",            G0W1,     CC_extract_vars,G2W1,G3W1,    G4W1},
    {"expand_terminal",         G0W1,     CC_expand_terminal,G2W1,G3W1, G4W1},
    {"not_included",            G0W2,     G1W2,     CC_not_included,G3W2,G4W2},
    {"valuechk",                G0W2,     G1W2,     CC_valuechk,G3W2,   G4W2},
    {"cgp_greenp",              G0W1,     CC_cgp_greenp,G2W1, G3W1,     G4W1},
    {"integralir",              CC_integralir,G1W0, G2W0,     G3W0,     G4W0},
    {"specrd:times",            G0W2,     G1W2,     CC_specrdTtimes,G3W2,G4W2},
    {"dip2a",                   G0W1,     CC_dip2a, G2W1,     G3W1,     G4W1},
    {"evalmember",              G0W2,     G1W2,     CC_evalmember,G3W2, G4W2},
    {"gbfdiff",                 G0W2,     G1W2,     CC_gbfdiff,G3W2,    G4W2},
    {"gpargp",                  G0W1,     CC_gpargp,G2W1,     G3W1,     G4W1},
    {"indexvp",                 G0W1,     CC_indexvp,G2W1,    G3W1,     G4W1},
    {"mk_simpl_map_",           G0W1,     CC_mk_simpl_map_,G2W1,G3W1,   G4W1},
    {"simpdfp",                 G0W1,     CC_simpdfp,G2W1,    G3W1,     G4W1},
    {"balance_mod",             G0W2,     G1W2,     CC_balance_mod,G3W2,G4W2},
    {"super_vectorfield",       G0W3,     G1W3,     G2W3,     CC_super_vectorfield,G4W3},
    {"rtypepart",               G0W1,     CC_rtypepart,G2W1,  G3W1,     G4W1},
    {"fctlength",               G0W1,     CC_fctlength,G2W1,  G3W1,     G4W1},
    {nullptr, 
        reinterpret_cast<no_args *>(
            reinterpret_cast<uintptr_t>("u42")),
        reinterpret_cast<one_arg *>(
            reinterpret_cast<uintptr_t>("63265 8278215 5229974")),
        nullptr, nullptr, nullptr}
};

// end of generated code
