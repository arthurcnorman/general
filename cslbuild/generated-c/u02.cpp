
// $destdir/u02.c        Machine generated C code

// $Id$

#include "config.h"
#include "headers.h"



// Code for mchk

static LispObject CC_mchk(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_201, v_202, v_203;
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
v_7:
    v_202 = stack[-4];
    v_201 = stack[-3];
    if (equal(v_202, v_201)) goto v_10;
    else goto v_11;
v_10:
    v_201 = nil;
    return ncons(v_201);
v_11:
    v_202 = stack[-4];
    v_201 = basic_elt(env, 1); // !*sq
    if (!consp(v_202)) goto v_17;
    v_202 = car(v_202);
    if (v_202 == v_201) goto v_16;
    else goto v_17;
v_16:
    v_201 = stack[-4];
    if (!car_legal(v_201)) v_201 = cdrerror(v_201); else
    v_201 = cdr(v_201);
    if (!car_legal(v_201)) v_201 = carerror(v_201); else
    v_201 = car(v_201);
    {   LispObject fn = basic_elt(env, 6); // prepsqxx
    v_201 = (*qfn1(fn))(fn, v_201);
    }
    env = stack[-6];
    stack[-4] = v_201;
    goto v_7;
v_17:
    v_202 = stack[-3];
    v_201 = basic_elt(env, 1); // !*sq
    if (!consp(v_202)) goto v_26;
    v_202 = car(v_202);
    if (v_202 == v_201) goto v_25;
    else goto v_26;
v_25:
    v_201 = stack[-3];
    if (!car_legal(v_201)) v_201 = cdrerror(v_201); else
    v_201 = cdr(v_201);
    if (!car_legal(v_201)) v_201 = carerror(v_201); else
    v_201 = car(v_201);
    {   LispObject fn = basic_elt(env, 6); // prepsqxx
    v_201 = (*qfn1(fn))(fn, v_201);
    }
    env = stack[-6];
    stack[-3] = v_201;
    goto v_7;
v_26:
    v_201 = stack[-3];
    if (!consp(v_201)) goto v_34;
    else goto v_35;
v_34:
    v_202 = stack[-3];
    v_201 = qvalue(basic_elt(env, 2)); // frlis!*
    v_201 = Lmemq(nil, v_202, v_201);
    if (v_201 == nil) goto v_40;
    v_202 = stack[-3];
    v_201 = stack[-4];
    v_201 = cons(v_202, v_201);
    env = stack[-6];
    v_201 = ncons(v_201);
    return ncons(v_201);
v_40:
    v_201 = nil;
    goto v_6;
    goto v_9;
v_35:
    v_201 = stack[-4];
    if (!consp(v_201)) goto v_52;
    else goto v_53;
v_52:
    v_201 = stack[-4];
    if (is_number(v_201)) goto v_59;
    else goto v_58;
v_59:
    v_202 = stack[-4];
    v_201 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_201 = static_cast<LispObject>(lessp2(v_202, v_201));
    v_201 = v_201 ? lisp_true : nil;
    env = stack[-6];
    if (v_201 == nil) goto v_58;
    v_202 = stack[-3];
    v_201 = basic_elt(env, 3); // minus
    if (!consp(v_202)) goto v_58;
    v_202 = car(v_202);
    if (v_202 == v_201) goto v_66;
    else goto v_58;
v_66:
    stack[0] = basic_elt(env, 3); // minus
    v_201 = stack[-4];
    v_201 = negate(v_201);
    env = stack[-6];
    v_201 = list2(stack[0], v_201);
    env = stack[-6];
    stack[-4] = v_201;
    goto v_7;
v_58:
    v_202 = stack[-4];
    v_201 = stack[-3];
    {
        LispObject fn = basic_elt(env, 7); // mchkopt
        return (*qfn2(fn))(fn, v_202, v_201);
    }
    goto v_9;
v_53:
    v_201 = stack[-3];
    if (!car_legal(v_201)) v_202 = carerror(v_201); else
    v_202 = car(v_201);
    v_201 = basic_elt(env, 4); // difference
    if (v_202 == v_201) goto v_79;
    else goto v_80;
v_79:
    stack[-1] = basic_elt(env, 5); // plus
    v_201 = stack[-3];
    if (!car_legal(v_201)) v_201 = cdrerror(v_201); else
    v_201 = cdr(v_201);
    if (!car_legal(v_201)) stack[0] = carerror(v_201); else
    stack[0] = car(v_201);
    v_202 = basic_elt(env, 3); // minus
    v_201 = stack[-3];
    if (!car_legal(v_201)) v_201 = cdrerror(v_201); else
    v_201 = cdr(v_201);
    if (!car_legal(v_201)) v_201 = cdrerror(v_201); else
    v_201 = cdr(v_201);
    if (!car_legal(v_201)) v_201 = carerror(v_201); else
    v_201 = car(v_201);
    v_201 = list2(v_202, v_201);
    env = stack[-6];
    v_201 = list3(stack[-1], stack[0], v_201);
    env = stack[-6];
    stack[-3] = v_201;
    goto v_7;
v_80:
    v_201 = stack[-4];
    if (!car_legal(v_201)) v_201 = carerror(v_201); else
    v_201 = car(v_201);
    if (!symbolp(v_201)) v_201 = nil;
    else { v_201 = qfastgets(v_201);
           if (v_201 != nil) { v_201 = elt(v_201, 8); // dname
#ifdef RECORD_GET
             if (v_201 != SPID_NOPROP)
                record_get(elt(fastget_names, 8), 1);
             else record_get(elt(fastget_names, 8), 0),
                v_201 = nil; }
           else record_get(elt(fastget_names, 8), 0); }
#else
             if (v_201 == SPID_NOPROP) v_201 = nil; }}
#endif
    if (v_201 == nil) goto v_97;
    else goto v_95;
v_97:
    v_201 = stack[-3];
    if (!car_legal(v_201)) v_201 = carerror(v_201); else
    v_201 = car(v_201);
    if (!symbolp(v_201)) v_201 = nil;
    else { v_201 = qfastgets(v_201);
           if (v_201 != nil) { v_201 = elt(v_201, 8); // dname
#ifdef RECORD_GET
             if (v_201 != SPID_NOPROP)
                record_get(elt(fastget_names, 8), 1);
             else record_get(elt(fastget_names, 8), 0),
                v_201 = nil; }
           else record_get(elt(fastget_names, 8), 0); }
#else
             if (v_201 == SPID_NOPROP) v_201 = nil; }}
#endif
    if (v_201 == nil) goto v_101;
    else goto v_95;
v_101:
    goto v_96;
v_95:
    v_201 = nil;
    goto v_6;
v_96:
    v_201 = stack[-4];
    if (!car_legal(v_201)) v_202 = carerror(v_201); else
    v_202 = car(v_201);
    v_201 = stack[-3];
    if (!car_legal(v_201)) v_201 = carerror(v_201); else
    v_201 = car(v_201);
    if (v_202 == v_201) goto v_106;
    else goto v_107;
v_106:
    v_201 = stack[-4];
    if (!car_legal(v_201)) v_203 = cdrerror(v_201); else
    v_203 = cdr(v_201);
    v_201 = stack[-3];
    if (!car_legal(v_201)) v_202 = cdrerror(v_201); else
    v_202 = cdr(v_201);
    v_201 = stack[-4];
    if (!car_legal(v_201)) v_201 = carerror(v_201); else
    v_201 = car(v_201);
    {
        LispObject fn = basic_elt(env, 8); // mcharg
        return (*qfn3(fn))(fn, v_203, v_202, v_201);
    }
v_107:
    v_201 = stack[-3];
    if (!car_legal(v_201)) v_202 = carerror(v_201); else
    v_202 = car(v_201);
    v_201 = qvalue(basic_elt(env, 2)); // frlis!*
    v_201 = Lmemq(nil, v_202, v_201);
    if (v_201 == nil) goto v_120;
    v_201 = stack[-4];
    if (!car_legal(v_201)) v_203 = carerror(v_201); else
    v_203 = car(v_201);
    v_201 = stack[-3];
    if (!car_legal(v_201)) v_202 = carerror(v_201); else
    v_202 = car(v_201);
    v_201 = stack[-4];
    if (!car_legal(v_201)) v_201 = cdrerror(v_201); else
    v_201 = cdr(v_201);
    stack[0] = Lsubst(nil, v_203, v_202, v_201);
    env = stack[-6];
    v_201 = stack[-4];
    if (!car_legal(v_201)) v_203 = carerror(v_201); else
    v_203 = car(v_201);
    v_201 = stack[-3];
    if (!car_legal(v_201)) v_202 = carerror(v_201); else
    v_202 = car(v_201);
    v_201 = stack[-3];
    if (!car_legal(v_201)) v_201 = cdrerror(v_201); else
    v_201 = cdr(v_201);
    v_202 = Lsubst(nil, v_203, v_202, v_201);
    env = stack[-6];
    v_201 = stack[-4];
    if (!car_legal(v_201)) v_201 = carerror(v_201); else
    v_201 = car(v_201);
    {   LispObject fn = basic_elt(env, 8); // mcharg
    v_201 = (*qfn3(fn))(fn, stack[0], v_202, v_201);
    }
    env = stack[-6];
    stack[-5] = v_201;
    v_201 = stack[-5];
    if (v_201 == nil) goto v_150;
    else goto v_151;
v_150:
    v_201 = nil;
    goto v_129;
v_151:
    v_201 = stack[-5];
    if (!car_legal(v_201)) v_201 = carerror(v_201); else
    v_201 = car(v_201);
    v_202 = stack[-3];
    if (!car_legal(v_202)) v_203 = carerror(v_202); else
    v_203 = car(v_202);
    v_202 = stack[-4];
    if (!car_legal(v_202)) v_202 = carerror(v_202); else
    v_202 = car(v_202);
    v_201 = acons(v_203, v_202, v_201);
    env = stack[-6];
    v_201 = ncons(v_201);
    env = stack[-6];
    stack[-1] = v_201;
    stack[-2] = v_201;
v_130:
    v_201 = stack[-5];
    if (!car_legal(v_201)) v_201 = cdrerror(v_201); else
    v_201 = cdr(v_201);
    stack[-5] = v_201;
    v_201 = stack[-5];
    if (v_201 == nil) goto v_168;
    else goto v_169;
v_168:
    v_201 = stack[-2];
    goto v_129;
v_169:
    stack[0] = stack[-1];
    v_201 = stack[-5];
    if (!car_legal(v_201)) v_201 = carerror(v_201); else
    v_201 = car(v_201);
    v_202 = stack[-3];
    if (!car_legal(v_202)) v_203 = carerror(v_202); else
    v_203 = car(v_202);
    v_202 = stack[-4];
    if (!car_legal(v_202)) v_202 = carerror(v_202); else
    v_202 = car(v_202);
    v_201 = acons(v_203, v_202, v_201);
    env = stack[-6];
    v_201 = ncons(v_201);
    env = stack[-6];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_201);
    v_201 = stack[-1];
    if (!car_legal(v_201)) v_201 = cdrerror(v_201); else
    v_201 = cdr(v_201);
    stack[-1] = v_201;
    goto v_130;
v_129:
    goto v_6;
v_120:
    v_201 = stack[-4];
    if (!car_legal(v_201)) v_202 = carerror(v_201); else
    v_202 = car(v_201);
    v_201 = basic_elt(env, 3); // minus
    if (v_202 == v_201) goto v_186;
    else goto v_187;
v_186:
    v_201 = stack[-4];
    if (!car_legal(v_201)) v_201 = cdrerror(v_201); else
    v_201 = cdr(v_201);
    if (!car_legal(v_201)) v_202 = carerror(v_201); else
    v_202 = car(v_201);
    v_201 = stack[-3];
    {
        LispObject fn = basic_elt(env, 9); // mchkminus
        return (*qfn2(fn))(fn, v_202, v_201);
    }
v_187:
    v_202 = stack[-4];
    v_201 = stack[-3];
    {
        LispObject fn = basic_elt(env, 7); // mchkopt
        return (*qfn2(fn))(fn, v_202, v_201);
    }
v_9:
    v_201 = nil;
v_6:
    return onevalue(v_201);
}



// Code for quotsq

static LispObject CC_quotsq(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // invsq
    v_9 = (*qfn1(fn))(fn, v_9);
    }
    env = stack[-1];
    {
        LispObject v_12 = stack[0];
        LispObject fn = basic_elt(env, 2); // multsq
        return (*qfn2(fn))(fn, v_12, v_9);
    }
}



// Code for tayexp!-greaterp

static LispObject CC_tayexpKgreaterp(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_8, v_9;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_9 = v_3;
    v_8 = v_2;
// end of prologue
    {
        LispObject fn = basic_elt(env, 1); // tayexp!-lessp
        return (*qfn2(fn))(fn, v_9, v_8);
    }
}



// Code for !*d2q

static LispObject CC_Hd2q(LispObject env,
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
    if (is_number(v_35)) goto v_6;
    else goto v_7;
v_6:
    v_35 = stack[0];
    v_35 = static_cast<LispObject>(zerop(v_35));
    v_35 = v_35 ? lisp_true : nil;
    if (v_35 == nil) goto v_12;
    v_36 = nil;
    v_35 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_36, v_35);
v_12:
    v_36 = stack[0];
    v_35 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_36, v_35);
    v_35 = nil;
    goto v_5;
v_7:
    v_35 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // !:zerop
    v_35 = (*qfn1(fn))(fn, v_35);
    }
    if (v_35 == nil) goto v_24;
    v_36 = nil;
    v_35 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_36, v_35);
v_24:
    v_36 = stack[0];
    v_35 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_36, v_35);
    v_35 = nil;
v_5:
    return onevalue(v_35);
}



// Code for talp_simplt

static LispObject CC_talp_simplt(LispObject env,
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
        LispObject fn = basic_elt(env, 1); // talp_simplt1
        return (*qfn2(fn))(fn, v_8, v_7);
    }
}



// Code for qqe_qoptailp

static LispObject CC_qqe_qoptailp(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_12, v_13;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_12 = v_2;
// end of prologue
    v_13 = basic_elt(env, 1); // (rtail ltail)
    v_12 = Lmemq(nil, v_12, v_13);
    if (v_12 == nil) goto v_7;
    v_12 = lisp_true;
    goto v_5;
v_7:
    v_12 = nil;
v_5:
    return onevalue(v_12);
}



// Code for multdm

static LispObject CC_multdm(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_51 = v_53;
    if (!consp(v_51)) goto v_11;
    else goto v_12;
v_11:
    v_51 = v_52;
    v_51 = (consp(v_51) ? nil : lisp_true);
    goto v_10;
v_12:
    v_51 = nil;
    goto v_10;
    v_51 = nil;
v_10:
    if (v_51 == nil) goto v_8;
    v_51 = v_53;
    v_51 = times2(v_51, v_52);
    env = stack[0];
    v_52 = v_51;
    v_51 = qvalue(basic_elt(env, 1)); // dmode!*
    if (v_51 == nil) goto v_29;
    else goto v_30;
v_29:
    v_51 = lisp_true;
    goto v_28;
v_30:
    v_51 = qvalue(basic_elt(env, 1)); // dmode!*
    if (!symbolp(v_51)) v_51 = nil;
    else { v_51 = qfastgets(v_51);
           if (v_51 != nil) { v_51 = elt(v_51, 5); // convert
#ifdef RECORD_GET
             if (v_51 == SPID_NOPROP)
                record_get(elt(fastget_names, 5), 0),
                v_51 = nil;
             else record_get(elt(fastget_names, 5), 1),
                v_51 = lisp_true; }
           else record_get(elt(fastget_names, 5), 0); }
#else
             if (v_51 == SPID_NOPROP) v_51 = nil; else v_51 = lisp_true; }}
#endif
    v_51 = (v_51 == nil ? lisp_true : nil);
    goto v_28;
    v_51 = nil;
v_28:
    if (v_51 == nil) goto v_26;
    v_51 = v_52;
    goto v_24;
v_26:
    v_51 = qvalue(basic_elt(env, 1)); // dmode!*
    if (!symbolp(v_51)) v_51 = nil;
    else { v_51 = qfastgets(v_51);
           if (v_51 != nil) { v_51 = elt(v_51, 34); // i2d
#ifdef RECORD_GET
             if (v_51 != SPID_NOPROP)
                record_get(elt(fastget_names, 34), 1);
             else record_get(elt(fastget_names, 34), 0),
                v_51 = nil; }
           else record_get(elt(fastget_names, 34), 0); }
#else
             if (v_51 == SPID_NOPROP) v_51 = nil; }}
#endif
        return Lapply1(nil, v_51, v_52);
    v_51 = nil;
v_24:
    goto v_6;
v_8:
    v_51 = basic_elt(env, 2); // times
    {
        LispObject fn = basic_elt(env, 3); // dcombine
        return (*qfn3(fn))(fn, v_53, v_52, v_51);
    }
    v_51 = nil;
v_6:
    return onevalue(v_51);
}



// Code for !*q2a

static LispObject CC_Hq2a(LispObject env,
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
    v_7 = qvalue(basic_elt(env, 1)); // !*nosq
    {
        LispObject fn = basic_elt(env, 2); // !*q2a1
        return (*qfn2(fn))(fn, v_8, v_7);
    }
}



// Code for !:onep

static LispObject CC_Tonep(LispObject env,
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
    v_19 = v_18;
    if (!consp(v_19)) goto v_6;
    else goto v_7;
v_6:
        return Lonep(nil, v_18);
v_7:
    v_19 = v_18;
    if (!car_legal(v_19)) v_19 = carerror(v_19); else
    v_19 = car(v_19);
    if (!symbolp(v_19)) v_19 = nil;
    else { v_19 = qfastgets(v_19);
           if (v_19 != nil) { v_19 = elt(v_19, 26); // onep
#ifdef RECORD_GET
             if (v_19 != SPID_NOPROP)
                record_get(elt(fastget_names, 26), 1);
             else record_get(elt(fastget_names, 26), 0),
                v_19 = nil; }
           else record_get(elt(fastget_names, 26), 0); }
#else
             if (v_19 == SPID_NOPROP) v_19 = nil; }}
#endif
        return Lapply1(nil, v_19, v_18);
    v_18 = nil;
    return onevalue(v_18);
}



// Code for buchvevdivides!?

static LispObject CC_buchvevdividesW(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_28 = stack[0];
    v_27 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // vevmtest!?
    v_27 = (*qfn2(fn))(fn, v_28, v_27);
    }
    env = stack[-2];
    if (v_27 == nil) goto v_7;
    else goto v_8;
v_7:
    v_27 = nil;
    goto v_6;
v_8:
    v_27 = qvalue(basic_elt(env, 1)); // gmodule!*
    if (v_27 == nil) goto v_17;
    else goto v_18;
v_17:
    v_27 = lisp_true;
    goto v_16;
v_18:
    v_29 = stack[-1];
    v_28 = stack[0];
    v_27 = qvalue(basic_elt(env, 1)); // gmodule!*
    {
        LispObject fn = basic_elt(env, 3); // gevcompatible1
        return (*qfn3(fn))(fn, v_29, v_28, v_27);
    }
    v_27 = nil;
v_16:
    goto v_6;
    v_27 = nil;
v_6:
    return onevalue(v_27);
}



// Code for vevmtest!?

static LispObject CC_vevmtestW(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_63, v_64, v_65, v_66;
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
    v_64 = v_3;
    v_65 = v_2;
// end of prologue
v_7:
    v_63 = v_64;
    if (v_63 == nil) goto v_10;
    else goto v_11;
v_10:
    v_63 = lisp_true;
    goto v_6;
v_11:
    v_63 = v_65;
    if (v_63 == nil) goto v_14;
    else goto v_15;
v_14:
    v_63 = v_64;
    if (v_63 == nil) goto v_23;
    else goto v_24;
v_23:
    v_63 = lisp_true;
    goto v_22;
v_24:
    v_63 = v_64;
    if (!car_legal(v_63)) v_65 = carerror(v_63); else
    v_65 = car(v_63);
    v_63 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_65 == v_63) goto v_31;
    else goto v_32;
v_31:
    v_63 = v_64;
    if (!car_legal(v_63)) v_63 = cdrerror(v_63); else
    v_63 = cdr(v_63);
    {   LispObject fn = basic_elt(env, 1); // vevzero!?1
    v_63 = (*qfn1(fn))(fn, v_63);
    }
    goto v_30;
v_32:
    v_63 = nil;
    goto v_30;
    v_63 = nil;
v_30:
    goto v_22;
    v_63 = nil;
v_22:
    if (v_63 == nil) goto v_20;
    v_63 = lisp_true;
    goto v_6;
v_20:
    v_63 = nil;
    goto v_6;
    goto v_9;
v_15:
    v_63 = v_65;
    if (!car_legal(v_63)) v_66 = carerror(v_63); else
    v_66 = car(v_63);
    v_63 = v_64;
    if (!car_legal(v_63)) v_63 = carerror(v_63); else
    v_63 = car(v_63);
    if ((static_cast<std::intptr_t>(v_66) < static_cast<std::intptr_t>(v_63))) goto v_51;
    v_63 = v_65;
    if (!car_legal(v_63)) v_63 = cdrerror(v_63); else
    v_63 = cdr(v_63);
    v_65 = v_63;
    v_63 = v_64;
    if (!car_legal(v_63)) v_63 = cdrerror(v_63); else
    v_63 = cdr(v_63);
    v_64 = v_63;
    goto v_7;
v_51:
    v_63 = nil;
    goto v_6;
    goto v_9;
v_9:
    v_63 = nil;
v_6:
    return onevalue(v_63);
}



// Code for sublistp

static LispObject CC_sublistp(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_31, v_32, v_33, v_34;
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
v_1:
    v_31 = v_33;
    if (v_31 == nil) goto v_7;
    else goto v_8;
v_7:
    v_31 = lisp_true;
    goto v_6;
v_8:
    v_31 = v_33;
    if (!car_legal(v_31)) v_34 = carerror(v_31); else
    v_34 = car(v_31);
    v_31 = v_32;
    v_31 = Lmember(nil, v_34, v_31);
    if (v_31 == nil) goto v_15;
    else goto v_16;
v_15:
    v_31 = nil;
    goto v_14;
v_16:
    v_31 = v_33;
    if (!car_legal(v_31)) stack[0] = cdrerror(v_31); else
    stack[0] = cdr(v_31);
    v_31 = v_33;
    if (!car_legal(v_31)) v_31 = carerror(v_31); else
    v_31 = car(v_31);
    v_31 = Ldelete(nil, v_31, v_32);
    env = stack[-1];
    v_33 = stack[0];
    v_32 = v_31;
    goto v_1;
    v_31 = nil;
v_14:
    goto v_6;
    v_31 = nil;
v_6:
    return onevalue(v_31);
}



// Code for csl_normbf

static LispObject CC_csl_normbf(LispObject env,
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    stack[-2] = v_2;
// end of prologue
    stack[-3] = nil;
    v_52 = stack[-2];
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    if (!car_legal(v_52)) v_53 = carerror(v_52); else
    v_53 = car(v_52);
    stack[0] = v_53;
    v_52 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_53 == v_52) goto v_12;
    else goto v_13;
v_12:
    v_52 = basic_elt(env, 1); // (!:rd!: 0 . 0)
    goto v_8;
v_13:
    v_53 = stack[0];
    v_52 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_52 = static_cast<LispObject>(lessp2(v_53, v_52));
    v_52 = v_52 ? lisp_true : nil;
    env = stack[-4];
    if (v_52 == nil) goto v_22;
    v_52 = stack[0];
    v_52 = negate(v_52);
    env = stack[-4];
    stack[0] = v_52;
    v_52 = lisp_true;
    stack[-3] = v_52;
    goto v_20;
v_22:
v_20:
    v_52 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // lsd
    v_52 = (*qfn1(fn))(fn, v_52);
    }
    env = stack[-4];
    v_52 = sub1(v_52);
    env = stack[-4];
    stack[-1] = v_52;
    v_52 = stack[-1];
    v_52 = negate(v_52);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 4); // lshift
    v_52 = (*qfn2(fn))(fn, stack[0], v_52);
    }
    env = stack[-4];
    stack[0] = v_52;
    v_52 = stack[-3];
    if (v_52 == nil) goto v_39;
    v_52 = stack[0];
    v_52 = negate(v_52);
    env = stack[-4];
    stack[0] = v_52;
    goto v_37;
v_39:
v_37:
    v_53 = stack[-1];
    v_52 = stack[-2];
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    v_52 = plus2(v_53, v_52);
    env = stack[-4];
    stack[-1] = v_52;
    v_54 = basic_elt(env, 2); // !:rd!:
    v_53 = stack[0];
    v_52 = stack[-1];
    return list2star(v_54, v_53, v_52);
v_8:
    return onevalue(v_52);
}



// Code for round!*

static LispObject CC_roundH(LispObject env,
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
    if (!car_legal(v_16)) v_16 = cdrerror(v_16); else
    v_16 = cdr(v_16);
    if (!consp(v_16)) goto v_6;
    else goto v_7;
v_6:
    if (!car_legal(v_15)) v_15 = cdrerror(v_15); else
    v_15 = cdr(v_15);
    goto v_5;
v_7:
    goto v_5;
    v_15 = nil;
v_5:
    return onevalue(v_15);
}



// Code for collectindices_reversed

static LispObject CC_collectindices_reversed(LispObject env,
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
    stack[-1] = v_2;
// end of prologue
    v_40 = stack[-1];
    if (!consp(v_40)) goto v_9;
    else goto v_10;
v_9:
    v_40 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // isanindex
    v_40 = (*qfn1(fn))(fn, v_40);
    }
    if (v_40 == nil) goto v_15;
    v_41 = stack[-1];
    v_40 = stack[0];
    return cons(v_41, v_40);
v_15:
    v_40 = stack[0];
    goto v_6;
    goto v_8;
v_10:
v_8:
v_26:
    v_40 = stack[-1];
    if (v_40 == nil) goto v_29;
    else goto v_30;
v_29:
    goto v_25;
v_30:
    v_40 = stack[-1];
    if (!car_legal(v_40)) v_41 = carerror(v_40); else
    v_41 = car(v_40);
    v_40 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // collectindices_reversed
    v_40 = (*qfn2(fn))(fn, v_41, v_40);
    }
    env = stack[-2];
    stack[0] = v_40;
    v_40 = stack[-1];
    if (!car_legal(v_40)) v_40 = cdrerror(v_40); else
    v_40 = cdr(v_40);
    stack[-1] = v_40;
    goto v_26;
v_25:
    v_40 = stack[0];
v_6:
    return onevalue(v_40);
}



// Code for reval_without_mod

static LispObject CC_reval_without_mod(LispObject env,
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
    v_21 = qvalue(basic_elt(env, 1)); // dmode!*
    v_20 = basic_elt(env, 2); // !:mod!:
    if (v_21 == v_20) goto v_6;
    else goto v_7;
v_6:
    v_20 = nil;
// Binding dmode!*
// FLUIDBIND: reloadenv=1 litvec-offset=1 saveloc=0
{   bind_fluid_stack bind_fluid_var(-1, 1, 0);
    setvalue(basic_elt(env, 1), v_20); // dmode!*
    v_20 = v_22;
    {   LispObject fn = basic_elt(env, 3); // reval
    v_20 = (*qfn1(fn))(fn, v_20);
    }
    ;}  // end of a binding scope
    goto v_5;
v_7:
    v_20 = v_22;
    {
        LispObject fn = basic_elt(env, 3); // reval
        return (*qfn1(fn))(fn, v_20);
    }
    v_20 = nil;
v_5:
    return onevalue(v_20);
}



// Code for mo!=sprod

static LispObject CC_moMsprod(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_52 = nil;
v_9:
    v_50 = stack[-1];
    if (v_50 == nil) goto v_18;
    else goto v_19;
v_18:
    v_50 = lisp_true;
    goto v_17;
v_19:
    v_50 = stack[0];
    v_50 = (v_50 == nil ? lisp_true : nil);
    goto v_17;
    v_50 = nil;
v_17:
    if (v_50 == nil) goto v_15;
    goto v_10;
v_15:
    v_50 = stack[-1];
    if (!car_legal(v_50)) v_51 = carerror(v_50); else
    v_51 = car(v_50);
    v_50 = stack[0];
    if (!car_legal(v_50)) v_50 = carerror(v_50); else
    v_50 = car(v_50);
    v_50 = fixnum_of_int(static_cast<std::intptr_t>(int_of_fixnum(v_51) * int_of_fixnum(v_50)));
    v_51 = v_52;
    v_50 = cons(v_50, v_51);
    env = stack[-2];
    v_52 = v_50;
    v_50 = stack[-1];
    if (!car_legal(v_50)) v_50 = cdrerror(v_50); else
    v_50 = cdr(v_50);
    stack[-1] = v_50;
    v_50 = stack[0];
    if (!car_legal(v_50)) v_50 = cdrerror(v_50); else
    v_50 = cdr(v_50);
    stack[0] = v_50;
    goto v_9;
v_10:
    v_50 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
v_11:
    v_51 = v_52;
    if (v_51 == nil) goto v_40;
    else goto v_41;
v_40:
    goto v_8;
v_41:
    v_51 = v_52;
    v_51 = car(v_51);
    v_50 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_51) + static_cast<std::uintptr_t>(v_50) - TAG_FIXNUM);
    v_51 = v_52;
    v_51 = cdr(v_51);
    v_52 = v_51;
    goto v_11;
v_8:
    return onevalue(v_50);
}



// Code for pappl

static LispObject CC_pappl(LispObject env,
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
    real_push(nil, nil, nil, nil, nil);
    stack_popper stack_popper_var(6);
// copy arguments values to proper place
    stack[-2] = v_3;
    stack[-3] = v_2;
// end of prologue
    stack[-4] = nil;
    v_52 = stack[-3];
    {   LispObject fn = basic_elt(env, 1); // unpkp
    v_52 = (*qfn1(fn))(fn, v_52);
    }
    env = stack[-5];
    stack[-3] = v_52;
v_15:
    v_52 = stack[-3];
    if (v_52 == nil) goto v_18;
    else goto v_19;
v_18:
    goto v_14;
v_19:
    v_52 = stack[-2];
    stack[-1] = v_52;
    v_52 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[0] = v_52;
v_26:
    v_52 = stack[-3];
    if (!car_legal(v_52)) v_52 = carerror(v_52); else
    v_52 = car(v_52);
    v_53 = sub1(v_52);
    env = stack[-5];
    v_52 = stack[0];
    v_52 = difference2(v_53, v_52);
    env = stack[-5];
    v_52 = Lminusp(nil, v_52);
    env = stack[-5];
    if (v_52 == nil) goto v_31;
    goto v_25;
v_31:
    v_52 = stack[-1];
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    stack[-1] = v_52;
    v_52 = stack[0];
    v_52 = add1(v_52);
    env = stack[-5];
    stack[0] = v_52;
    goto v_26;
v_25:
    v_52 = stack[-1];
    if (!car_legal(v_52)) v_53 = carerror(v_52); else
    v_53 = car(v_52);
    v_52 = stack[-4];
    v_52 = cons(v_53, v_52);
    env = stack[-5];
    stack[-4] = v_52;
    v_52 = stack[-3];
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    stack[-3] = v_52;
    goto v_15;
v_14:
    v_52 = stack[-4];
        return Lnreverse(nil, v_52);
    return onevalue(v_52);
}



// Code for !*i2mod

static LispObject CC_Hi2mod(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // general!-modular!-number
    v_7 = (*qfn1(fn))(fn, v_7);
    }
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // !*modular2f
        return (*qfn1(fn))(fn, v_7);
    }
}



// Code for general!-modular!-plus

static LispObject CC_generalKmodularKplus(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_22 = v_3;
    v_23 = v_2;
// end of prologue
    v_22 = plus2(v_23, v_22);
    env = stack[-1];
    stack[0] = v_22;
    v_23 = stack[0];
    v_22 = qvalue(basic_elt(env, 1)); // current!-modulus
    v_22 = static_cast<LispObject>(geq2(v_23, v_22));
    v_22 = v_22 ? lisp_true : nil;
    env = stack[-1];
    if (v_22 == nil) goto v_14;
    v_23 = stack[0];
    v_22 = qvalue(basic_elt(env, 1)); // current!-modulus
    v_22 = difference2(v_23, v_22);
    stack[0] = v_22;
    goto v_12;
v_14:
v_12:
    v_22 = stack[0];
    return onevalue(v_22);
}



// Code for !*d2n

static LispObject CC_Hd2n(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_13, v_14;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_13 = v_2;
// end of prologue
    v_14 = v_13;
    if (v_14 == nil) goto v_6;
    else goto v_7;
v_6:
    v_13 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_5;
v_7:
    goto v_5;
    v_13 = nil;
v_5:
    return onevalue(v_13);
}



// Code for delcp

static LispObject CC_delcp(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_6;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_6 = v_2;
// end of prologue
    if (!symbolp(v_6)) v_6 = nil;
    else { v_6 = qfastgets(v_6);
           if (v_6 != nil) { v_6 = elt(v_6, 40); // delchar
#ifdef RECORD_GET
             if (v_6 == SPID_NOPROP)
                record_get(elt(fastget_names, 40), 0),
                v_6 = nil;
             else record_get(elt(fastget_names, 40), 1),
                v_6 = lisp_true; }
           else record_get(elt(fastget_names, 40), 0); }
#else
             if (v_6 == SPID_NOPROP) v_6 = nil; else v_6 = lisp_true; }}
#endif
    return onevalue(v_6);
}



// Code for getpower

static LispObject CC_getpower(LispObject env,
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
    v_28 = stack[-1];
    if (!car_legal(v_28)) v_29 = carerror(v_28); else
    v_29 = car(v_28);
    v_28 = basic_elt(env, 1); // expt
    if (!consp(v_29)) goto v_12;
    v_29 = car(v_29);
    if (v_29 == v_28) goto v_11;
    else goto v_12;
v_11:
    v_29 = stack[0];
    v_28 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_28 = static_cast<LispObject>(greaterp2(v_29, v_28));
    v_28 = v_28 ? lisp_true : nil;
    env = stack[-2];
    goto v_10;
v_12:
    v_28 = nil;
    goto v_10;
    v_28 = nil;
v_10:
    if (v_28 == nil) goto v_8;
    v_28 = lisp_true;
    setvalue(basic_elt(env, 2), v_28); // !*sub2
    goto v_6;
v_8:
v_6:
    v_28 = stack[-1];
    if (!car_legal(v_28)) v_29 = carerror(v_28); else
    v_29 = car(v_28);
    v_28 = stack[0];
    return cons(v_29, v_28);
}



// Code for sort

static LispObject CC_sort(LispObject env,
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
    stack[0] = v_3;
    v_10 = v_2;
// end of prologue
    v_11 = v_10;
    v_10 = nil;
    v_11 = Lappend_2(nil, v_11, v_10);
    env = stack[-1];
    v_10 = stack[0];
    {
        LispObject fn = basic_elt(env, 1); // stable!-sortip
        return (*qfn2(fn))(fn, v_11, v_10);
    }
}



// Code for finde

static LispObject CC_finde(LispObject env,
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
    v_26 = v_28;
    if (v_26 == nil) goto v_10;
    else goto v_11;
v_10:
    v_26 = nil;
    goto v_6;
v_11:
    v_29 = v_27;
    v_26 = v_28;
    if (!car_legal(v_26)) v_26 = carerror(v_26); else
    v_26 = car(v_26);
    if (!car_legal(v_26)) v_26 = cdrerror(v_26); else
    v_26 = cdr(v_26);
    v_26 = Lmemq(nil, v_29, v_26);
    if (v_26 == nil) goto v_15;
    v_26 = v_28;
    goto v_6;
v_15:
    v_26 = v_28;
    if (!car_legal(v_26)) v_26 = cdrerror(v_26); else
    v_26 = cdr(v_26);
    v_28 = v_26;
    goto v_7;
    v_26 = nil;
v_6:
    return onevalue(v_26);
}



// Code for sfp

static LispObject CC_sfp(LispObject env,
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
    if (!consp(v_17)) goto v_7;
    if (!car_legal(v_16)) v_16 = carerror(v_16); else
    v_16 = car(v_16);
    v_16 = (consp(v_16) ? nil : lisp_true);
    v_16 = (v_16 == nil ? lisp_true : nil);
    goto v_5;
v_7:
    v_16 = nil;
    goto v_5;
    v_16 = nil;
v_5:
    return onevalue(v_16);
}



// Code for tayexp!-lessp

static LispObject CC_tayexpKlessp(LispObject env,
                         LispObject v_2, LispObject v_3)
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
        push(v_2,v_3);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_3,v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_29 = v_3;
    v_30 = v_2;
// end of prologue
    v_28 = v_30;
    if (!consp(v_28)) goto v_11;
    else goto v_12;
v_11:
    v_28 = v_29;
    v_28 = (consp(v_28) ? nil : lisp_true);
    goto v_10;
v_12:
    v_28 = nil;
    goto v_10;
    v_28 = nil;
v_10:
    if (v_28 == nil) goto v_8;
    v_28 = v_30;
        return Llessp_2(nil, v_28, v_29);
v_8:
    v_28 = v_30;
    {   LispObject fn = basic_elt(env, 1); // tayexp!-difference
    v_28 = (*qfn2(fn))(fn, v_28, v_29);
    }
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // !:minusp
        return (*qfn1(fn))(fn, v_28);
    }
    v_28 = nil;
    return onevalue(v_28);
}



// Code for get!+vec!+entry

static LispObject CC_getLvecLentry(LispObject env,
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
    {
        LispObject fn = basic_elt(env, 1); // nth
        return (*qfn2(fn))(fn, v_11, v_10);
    }
    return onevalue(v_10);
}



// Code for rl_simplat1

static LispObject CC_rl_simplat1(LispObject env,
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
    stack[0] = qvalue(basic_elt(env, 1)); // rl_simplat1!*
    v_10 = list2(v_11, v_10);
    env = stack[-1];
    {
        LispObject v_13 = stack[0];
        LispObject fn = basic_elt(env, 2); // apply
        return (*qfn2(fn))(fn, v_13, v_10);
    }
}



// Code for mri_floorkernelp

static LispObject CC_mri_floorkernelp(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // kernels
    v_7 = (*qfn1(fn))(fn, v_7);
    }
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // mri_floorp
        return (*qfn1(fn))(fn, v_7);
    }
}



// Code for get_token

static LispObject CC_get_token(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_23, v_24;
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
    v_23 = nil;
    stack[0] = v_23;
v_9:
    v_24 = Lreadch(nil);
    env = stack[-1];
    setvalue(basic_elt(env, 1), v_24); // ch
    v_23 = basic_elt(env, 2); // !>
    if (v_24 == v_23) goto v_12;
    else goto v_13;
v_12:
    goto v_8;
v_13:
    v_24 = qvalue(basic_elt(env, 1)); // ch
    v_23 = stack[0];
    v_23 = cons(v_24, v_23);
    env = stack[-1];
    stack[0] = v_23;
    goto v_9;
v_8:
    v_24 = basic_elt(env, 3); // !$
    v_23 = stack[0];
    return cons(v_24, v_23);
    return onevalue(v_23);
}



// Code for xsimp

static LispObject CC_xsimp(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // simp!*
    v_7 = (*qfn1(fn))(fn, v_7);
    }
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // expchk
        return (*qfn1(fn))(fn, v_7);
    }
}



// Code for prepsqxx

static LispObject CC_prepsqxx(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // prepsqx
    v_7 = (*qfn1(fn))(fn, v_7);
    }
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // negnumberchk
        return (*qfn1(fn))(fn, v_7);
    }
}



// Code for aeval!*

static LispObject CC_aevalH(LispObject env,
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
    stack[0] = v_2;
// end of prologue
    v_11 = nil;
    v_11 = ncons(v_11);
    env = stack[-1];
    setvalue(basic_elt(env, 1), v_11); // alglist!*
    v_12 = stack[0];
    v_11 = nil;
    {
        LispObject fn = basic_elt(env, 2); // reval1
        return (*qfn2(fn))(fn, v_12, v_11);
    }
    return onevalue(v_11);
}



// Code for adddm

static LispObject CC_adddm(LispObject env,
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
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_54 = v_3;
    v_55 = v_2;
// end of prologue
    v_53 = v_55;
    if (!consp(v_53)) goto v_11;
    else goto v_12;
v_11:
    v_53 = v_54;
    v_53 = (consp(v_53) ? nil : lisp_true);
    goto v_10;
v_12:
    v_53 = nil;
    goto v_10;
    v_53 = nil;
v_10:
    if (v_53 == nil) goto v_8;
    v_53 = v_55;
    v_53 = plus2(v_53, v_54);
    env = stack[0];
    v_54 = qvalue(basic_elt(env, 1)); // dmode!*
    if (v_54 == nil) goto v_29;
    else goto v_30;
v_29:
    v_54 = lisp_true;
    goto v_28;
v_30:
    v_54 = qvalue(basic_elt(env, 1)); // dmode!*
    if (!symbolp(v_54)) v_54 = nil;
    else { v_54 = qfastgets(v_54);
           if (v_54 != nil) { v_54 = elt(v_54, 5); // convert
#ifdef RECORD_GET
             if (v_54 == SPID_NOPROP)
                record_get(elt(fastget_names, 5), 0),
                v_54 = nil;
             else record_get(elt(fastget_names, 5), 1),
                v_54 = lisp_true; }
           else record_get(elt(fastget_names, 5), 0); }
#else
             if (v_54 == SPID_NOPROP) v_54 = nil; else v_54 = lisp_true; }}
#endif
    v_54 = (v_54 == nil ? lisp_true : nil);
    goto v_28;
    v_54 = nil;
v_28:
    if (v_54 == nil) goto v_26;
    {
        LispObject fn = basic_elt(env, 3); // !*n2f
        return (*qfn1(fn))(fn, v_53);
    }
v_26:
    v_54 = qvalue(basic_elt(env, 1)); // dmode!*
    if (!symbolp(v_54)) v_54 = nil;
    else { v_54 = qfastgets(v_54);
           if (v_54 != nil) { v_54 = elt(v_54, 34); // i2d
#ifdef RECORD_GET
             if (v_54 != SPID_NOPROP)
                record_get(elt(fastget_names, 34), 1);
             else record_get(elt(fastget_names, 34), 0),
                v_54 = nil; }
           else record_get(elt(fastget_names, 34), 0); }
#else
             if (v_54 == SPID_NOPROP) v_54 = nil; }}
#endif
    v_53 = Lapply1(nil, v_54, v_53);
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 4); // int!-equiv!-chk
        return (*qfn1(fn))(fn, v_53);
    }
    v_53 = nil;
    goto v_6;
v_8:
    v_53 = basic_elt(env, 2); // plus
    {
        LispObject fn = basic_elt(env, 5); // dcombine
        return (*qfn3(fn))(fn, v_55, v_54, v_53);
    }
    v_53 = nil;
v_6:
    return onevalue(v_53);
}



// Code for cali_bc_prod

static LispObject CC_cali_bc_prod(LispObject env,
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
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_9 = v_3;
    v_10 = v_2;
// end of prologue
    {   LispObject fn = basic_elt(env, 1); // multf
    v_9 = (*qfn2(fn))(fn, v_10, v_9);
    }
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // bc!=simp
        return (*qfn1(fn))(fn, v_9);
    }
}



// Code for sieve_pv

static LispObject CC_sieve_pv(LispObject env,
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
    v_9 = lisp_true;
    {
        LispObject fn = basic_elt(env, 1); // sieve_pv0
        return (*qfn3(fn))(fn, v_11, v_10, v_9);
    }
}



// Code for lalr_closure

static LispObject CC_lalr_closure(LispObject env,
                         LispObject v_2)
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
    v_137 = stack[-9];
    stack[-10] = v_137;
v_16:
    v_137 = stack[-10];
    if (v_137 == nil) goto v_19;
    else goto v_20;
v_19:
    goto v_15;
v_20:
    v_137 = stack[-10];
    if (!car_legal(v_137)) v_137 = carerror(v_137); else
    v_137 = car(v_137);
    stack[-8] = v_137;
    v_137 = stack[-10];
    if (!car_legal(v_137)) v_137 = cdrerror(v_137); else
    v_137 = cdr(v_137);
    stack[-10] = v_137;
    v_137 = stack[-8];
    if (!car_legal(v_137)) v_137 = cdrerror(v_137); else
    v_137 = cdr(v_137);
    stack[-2] = v_137;
v_30:
    v_137 = stack[-2];
    if (v_137 == nil) goto v_35;
    else goto v_36;
v_35:
    goto v_29;
v_36:
    v_137 = stack[-2];
    if (!car_legal(v_137)) v_137 = carerror(v_137); else
    v_137 = car(v_137);
    stack[-1] = v_137;
    v_138 = basic_elt(env, 1); // !.
    v_137 = stack[-8];
    if (!car_legal(v_137)) v_137 = carerror(v_137); else
    v_137 = car(v_137);
    v_137 = Lmember(nil, v_138, v_137);
    if (!car_legal(v_137)) v_137 = cdrerror(v_137); else
    v_137 = cdr(v_137);
    stack[-7] = v_137;
    v_137 = stack[-7];
    if (v_137 == nil) goto v_50;
    v_137 = stack[-7];
    if (!car_legal(v_137)) v_137 = carerror(v_137); else
    v_137 = car(v_137);
    stack[-6] = v_137;
    if (v_137 == nil) goto v_50;
    v_137 = stack[-6];
    if (symbolp(v_137)) goto v_57;
    else goto v_50;
v_57:
    v_137 = stack[-6];
    {   LispObject fn = basic_elt(env, 2); // lalr_productions
    v_137 = (*qfn1(fn))(fn, v_137);
    }
    env = stack[-11];
    stack[0] = v_137;
v_62:
    v_137 = stack[0];
    if (v_137 == nil) goto v_67;
    else goto v_68;
v_67:
    goto v_61;
v_68:
    v_137 = stack[0];
    if (!car_legal(v_137)) v_137 = carerror(v_137); else
    v_137 = car(v_137);
    stack[-3] = v_137;
    v_137 = stack[-7];
    if (!car_legal(v_137)) stack[-4] = cdrerror(v_137); else
    stack[-4] = cdr(v_137);
    v_137 = stack[-1];
    v_137 = ncons(v_137);
    env = stack[-11];
    v_137 = Lappend_2(nil, stack[-4], v_137);
    env = stack[-11];
    {   LispObject fn = basic_elt(env, 3); // lalr_first
    v_137 = (*qfn1(fn))(fn, v_137);
    }
    env = stack[-11];
    stack[-5] = v_137;
    v_139 = stack[-6];
    v_138 = basic_elt(env, 1); // !.
    v_137 = stack[-3];
    if (!car_legal(v_137)) v_137 = carerror(v_137); else
    v_137 = car(v_137);
    v_137 = list2star(v_139, v_138, v_137);
    env = stack[-11];
    stack[-4] = v_137;
    v_138 = stack[-4];
    v_137 = stack[-9];
    {   LispObject fn = basic_elt(env, 4); // lalr_item_with_rule
    v_137 = (*qfn2(fn))(fn, v_138, v_137);
    }
    env = stack[-11];
    stack[-3] = v_137;
    v_137 = stack[-3];
    if (v_137 == nil) goto v_91;
    v_138 = stack[-5];
    v_137 = stack[-3];
    if (!car_legal(v_137)) v_137 = cdrerror(v_137); else
    v_137 = cdr(v_137);
    {   LispObject fn = basic_elt(env, 5); // setdiff
    v_137 = (*qfn2(fn))(fn, v_138, v_137);
    }
    env = stack[-11];
    stack[-5] = v_137;
    goto v_89;
v_91:
    v_137 = stack[-4];
    v_137 = ncons(v_137);
    env = stack[-11];
    stack[-3] = v_137;
    v_138 = stack[-3];
    v_137 = stack[-9];
    v_137 = cons(v_138, v_137);
    env = stack[-11];
    stack[-9] = v_137;
    goto v_89;
v_89:
    v_137 = stack[-5];
    if (v_137 == nil) goto v_107;
    v_139 = stack[-4];
    v_138 = stack[-5];
    v_137 = stack[-10];
    v_137 = acons(v_139, v_138, v_137);
    env = stack[-11];
    stack[-10] = v_137;
    v_137 = stack[-5];
    stack[-4] = v_137;
v_116:
    v_137 = stack[-4];
    if (v_137 == nil) goto v_120;
    else goto v_121;
v_120:
    goto v_115;
v_121:
    v_137 = stack[-4];
    if (!car_legal(v_137)) v_137 = carerror(v_137); else
    v_137 = car(v_137);
    v_138 = stack[-3];
    {   LispObject fn = basic_elt(env, 6); // lalr_add_lookahead
    v_137 = (*qfn2(fn))(fn, v_138, v_137);
    }
    env = stack[-11];
    v_137 = stack[-4];
    if (!car_legal(v_137)) v_137 = cdrerror(v_137); else
    v_137 = cdr(v_137);
    stack[-4] = v_137;
    goto v_116;
v_115:
    goto v_105;
v_107:
v_105:
    v_137 = stack[0];
    if (!car_legal(v_137)) v_137 = cdrerror(v_137); else
    v_137 = cdr(v_137);
    stack[0] = v_137;
    goto v_62;
v_61:
    goto v_48;
v_50:
v_48:
    v_137 = stack[-2];
    if (!car_legal(v_137)) v_137 = cdrerror(v_137); else
    v_137 = cdr(v_137);
    stack[-2] = v_137;
    goto v_30;
v_29:
    goto v_16;
v_15:
    v_137 = stack[-9];
    return onevalue(v_137);
}



// Code for list2wideid

static LispObject CC_list2wideid(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // list2widestring
    v_7 = (*qfn1(fn))(fn, v_7);
    }
        return Lintern(nil, v_7);
}



// Code for rl_varlat

static LispObject CC_rl_varlat(LispObject env,
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
    stack[0] = qvalue(basic_elt(env, 1)); // rl_varlat!*
    v_8 = ncons(v_8);
    env = stack[-1];
    {
        LispObject v_10 = stack[0];
        LispObject fn = basic_elt(env, 2); // apply
        return (*qfn2(fn))(fn, v_10, v_8);
    }
}



// Code for monomclone

static LispObject CC_monomclone(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_50, v_51;
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
    v_50 = stack[-3];
    if (v_50 == nil) goto v_6;
    else goto v_7;
v_6:
    v_50 = nil;
    goto v_5;
v_7:
    stack[-2] = nil;
    v_50 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_50 = Lmkvect(nil, v_50);
    env = stack[-5];
    stack[-4] = v_50;
    stack[-1] = stack[-4];
    stack[0] = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_51 = stack[-3];
    v_50 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_50 = Lgetv(nil, v_51, v_50);
    env = stack[-5];
    v_50 = Lputv(nil, stack[-1], stack[0], v_50);
    env = stack[-5];
    v_51 = stack[-3];
    v_50 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_50 = Lgetv(nil, v_51, v_50);
    env = stack[-5];
    stack[0] = v_50;
v_30:
    v_50 = stack[0];
    if (v_50 == nil) goto v_33;
    else goto v_34;
v_33:
    goto v_29;
v_34:
    v_50 = stack[0];
    if (!car_legal(v_50)) v_51 = carerror(v_50); else
    v_51 = car(v_50);
    v_50 = stack[-2];
    v_50 = cons(v_51, v_50);
    env = stack[-5];
    stack[-2] = v_50;
    v_50 = stack[0];
    if (!car_legal(v_50)) v_50 = cdrerror(v_50); else
    v_50 = cdr(v_50);
    stack[0] = v_50;
    goto v_30;
v_29:
    stack[-1] = stack[-4];
    stack[0] = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_50 = stack[-2];
    v_50 = Lreverse(nil, v_50);
    env = stack[-5];
    v_50 = Lputv(nil, stack[-1], stack[0], v_50);
    v_50 = stack[-4];
    goto v_5;
    v_50 = nil;
v_5:
    return onevalue(v_50);
}



// Code for comfac!-to!-poly

static LispObject CC_comfacKtoKpoly(LispObject env,
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
    if (!car_legal(v_17)) v_17 = carerror(v_17); else
    v_17 = car(v_17);
    if (v_17 == nil) goto v_6;
    else goto v_7;
v_6:
    if (!car_legal(v_16)) v_16 = cdrerror(v_16); else
    v_16 = cdr(v_16);
    goto v_5;
v_7:
    return ncons(v_16);
    v_16 = nil;
v_5:
    return onevalue(v_16);
}



// Code for mtchk

static LispObject CC_mtchk(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_151, v_152;
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
    stack[-4] = nil;
    stack[-3] = nil;
    v_151 = stack[-9];
    if (!car_legal(v_151)) v_151 = carerror(v_151); else
    v_151 = car(v_151);
    {   LispObject fn = basic_elt(env, 1); // noncomp
    v_151 = (*qfn1(fn))(fn, v_151);
    }
    env = stack[-11];
    stack[-10] = v_151;
v_14:
    v_151 = stack[-8];
    if (v_151 == nil) goto v_25;
    else goto v_26;
v_25:
    v_151 = stack[-4];
    goto v_13;
v_26:
    v_151 = stack[-8];
    if (!car_legal(v_151)) v_151 = carerror(v_151); else
    v_151 = car(v_151);
    stack[-7] = v_151;
    v_151 = stack[-7];
    if (!car_legal(v_151)) v_151 = carerror(v_151); else
    v_151 = car(v_151);
    stack[-6] = v_151;
v_15:
    v_151 = stack[-6];
    if (v_151 == nil) goto v_35;
    else goto v_36;
v_35:
    goto v_18;
v_36:
    stack[-2] = stack[-9];
    v_151 = stack[-6];
    if (!car_legal(v_151)) stack[-1] = carerror(v_151); else
    stack[-1] = car(v_151);
    v_151 = stack[-7];
    if (!car_legal(v_151)) v_151 = cdrerror(v_151); else
    v_151 = cdr(v_151);
    if (!car_legal(v_151)) v_151 = carerror(v_151); else
    v_151 = car(v_151);
    if (!car_legal(v_151)) stack[0] = carerror(v_151); else
    stack[0] = car(v_151);
    v_151 = stack[-7];
    if (!car_legal(v_151)) v_151 = cdrerror(v_151); else
    v_151 = cdr(v_151);
    if (!car_legal(v_151)) v_151 = carerror(v_151); else
    v_151 = car(v_151);
    if (!car_legal(v_151)) v_151 = cdrerror(v_151); else
    v_151 = cdr(v_151);
    v_151 = ncons(v_151);
    env = stack[-11];
    {   LispObject fn = basic_elt(env, 2); // mtchp1
    v_151 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_151);
    }
    env = stack[-11];
    stack[-5] = v_151;
v_16:
    v_151 = stack[-5];
    if (v_151 == nil) goto v_53;
    else goto v_54;
v_53:
    goto v_17;
v_54:
    v_151 = stack[-5];
    if (!car_legal(v_151)) stack[0] = carerror(v_151); else
    stack[0] = car(v_151);
    v_151 = stack[-6];
    if (!car_legal(v_151)) v_152 = carerror(v_151); else
    v_152 = car(v_151);
    v_151 = stack[-7];
    if (!car_legal(v_151)) v_151 = carerror(v_151); else
    v_151 = car(v_151);
    v_151 = Ldelete(nil, v_152, v_151);
    env = stack[-11];
    stack[-2] = Lsubla(nil, stack[0], v_151);
    env = stack[-11];
    v_151 = stack[-5];
    if (!car_legal(v_151)) v_152 = carerror(v_151); else
    v_152 = car(v_151);
    v_151 = stack[-7];
    if (!car_legal(v_151)) v_151 = cdrerror(v_151); else
    v_151 = cdr(v_151);
    if (!car_legal(v_151)) v_151 = carerror(v_151); else
    v_151 = car(v_151);
    stack[-1] = Lsubla(nil, v_152, v_151);
    env = stack[-11];
    v_151 = stack[-5];
    if (!car_legal(v_151)) v_152 = carerror(v_151); else
    v_152 = car(v_151);
    v_151 = stack[-7];
    if (!car_legal(v_151)) v_151 = cdrerror(v_151); else
    v_151 = cdr(v_151);
    if (!car_legal(v_151)) v_151 = cdrerror(v_151); else
    v_151 = cdr(v_151);
    if (!car_legal(v_151)) v_151 = carerror(v_151); else
    v_151 = car(v_151);
    stack[0] = Lsubla(nil, v_152, v_151);
    env = stack[-11];
    v_151 = stack[-5];
    if (!car_legal(v_151)) v_152 = carerror(v_151); else
    v_152 = car(v_151);
    v_151 = stack[-6];
    if (!car_legal(v_151)) v_151 = carerror(v_151); else
    v_151 = car(v_151);
    v_152 = Lsubla(nil, v_152, v_151);
    env = stack[-11];
    v_151 = stack[-7];
    if (!car_legal(v_151)) v_151 = cdrerror(v_151); else
    v_151 = cdr(v_151);
    if (!car_legal(v_151)) v_151 = cdrerror(v_151); else
    v_151 = cdr(v_151);
    if (!car_legal(v_151)) v_151 = cdrerror(v_151); else
    v_151 = cdr(v_151);
    if (!car_legal(v_151)) v_151 = carerror(v_151); else
    v_151 = car(v_151);
    v_151 = cons(v_152, v_151);
    env = stack[-11];
    v_151 = list2(stack[0], v_151);
    env = stack[-11];
    v_151 = list2star(stack[-2], stack[-1], v_151);
    env = stack[-11];
    stack[0] = v_151;
    if (!car_legal(v_151)) v_151 = carerror(v_151); else
    v_151 = car(v_151);
    if (v_151 == nil) goto v_57;
    v_152 = stack[0];
    v_151 = stack[-4];
    v_151 = cons(v_152, v_151);
    env = stack[-11];
    stack[-4] = v_151;
    v_151 = stack[-3];
    if (v_151 == nil) goto v_98;
    else goto v_99;
v_98:
    v_151 = stack[-4];
    stack[-3] = v_151;
    goto v_97;
v_99:
v_97:
    goto v_52;
v_57:
    v_151 = stack[-5];
    if (!car_legal(v_151)) v_152 = carerror(v_151); else
    v_152 = car(v_151);
    v_151 = stack[-7];
    if (!car_legal(v_151)) v_151 = cdrerror(v_151); else
    v_151 = cdr(v_151);
    if (!car_legal(v_151)) v_151 = carerror(v_151); else
    v_151 = car(v_151);
    if (!car_legal(v_151)) v_151 = cdrerror(v_151); else
    v_151 = cdr(v_151);
    v_151 = Lsubla(nil, v_152, v_151);
    env = stack[-11];
    {   LispObject fn = basic_elt(env, 3); // lispeval
    v_151 = (*qfn1(fn))(fn, v_151);
    }
    env = stack[-11];
    if (v_151 == nil) goto v_103;
    v_151 = stack[0];
    return ncons(v_151);
v_103:
v_52:
    v_151 = stack[-5];
    if (!car_legal(v_151)) v_151 = cdrerror(v_151); else
    v_151 = cdr(v_151);
    stack[-5] = v_151;
    goto v_16;
v_17:
    v_151 = stack[-10];
    if (v_151 == nil) goto v_118;
    else goto v_119;
v_118:
    v_151 = stack[-6];
    if (!car_legal(v_151)) v_151 = cdrerror(v_151); else
    v_151 = cdr(v_151);
    stack[-6] = v_151;
    goto v_15;
v_119:
    v_151 = stack[-7];
    if (!car_legal(v_151)) v_151 = cdrerror(v_151); else
    v_151 = cdr(v_151);
    if (!car_legal(v_151)) v_151 = cdrerror(v_151); else
    v_151 = cdr(v_151);
    if (!car_legal(v_151)) v_151 = cdrerror(v_151); else
    v_151 = cdr(v_151);
    if (!car_legal(v_151)) v_151 = carerror(v_151); else
    v_151 = car(v_151);
    if (v_151 == nil) goto v_124;
    v_151 = stack[-6];
    {   LispObject fn = basic_elt(env, 4); // nocp
    v_151 = (*qfn1(fn))(fn, v_151);
    }
    env = stack[-11];
    if (v_151 == nil) goto v_124;
    goto v_19;
v_124:
v_18:
    v_151 = stack[-4];
    if (v_151 == nil) goto v_136;
    else goto v_137;
v_136:
    v_151 = stack[-7];
    v_151 = ncons(v_151);
    env = stack[-11];
    stack[-3] = v_151;
    stack[-4] = v_151;
    goto v_135;
v_137:
    stack[0] = stack[-3];
    v_151 = stack[-7];
    v_151 = ncons(v_151);
    env = stack[-11];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_151);
    v_151 = stack[-3];
    if (!car_legal(v_151)) v_151 = cdrerror(v_151); else
    v_151 = cdr(v_151);
    stack[-3] = v_151;
    goto v_135;
v_135:
v_19:
    v_151 = stack[-8];
    if (!car_legal(v_151)) v_151 = cdrerror(v_151); else
    v_151 = cdr(v_151);
    stack[-8] = v_151;
    goto v_14;
v_13:
    return onevalue(v_151);
}



// Code for exptchksq

static LispObject CC_exptchksq(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_20;
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
    v_20 = qvalue(basic_elt(env, 1)); // !*combineexpt
    if (v_20 == nil) goto v_6;
    else goto v_7;
v_6:
    v_20 = stack[0];
    goto v_5;
v_7:
    v_20 = stack[0];
    if (!car_legal(v_20)) v_20 = carerror(v_20); else
    v_20 = car(v_20);
    {   LispObject fn = basic_elt(env, 2); // exptchk
    stack[-1] = (*qfn1(fn))(fn, v_20);
    }
    env = stack[-2];
    v_20 = stack[0];
    if (!car_legal(v_20)) v_20 = cdrerror(v_20); else
    v_20 = cdr(v_20);
    {   LispObject fn = basic_elt(env, 2); // exptchk
    v_20 = (*qfn1(fn))(fn, v_20);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // invsq
    v_20 = (*qfn1(fn))(fn, v_20);
    }
    env = stack[-2];
    {
        LispObject v_23 = stack[-1];
        LispObject fn = basic_elt(env, 4); // multsq
        return (*qfn2(fn))(fn, v_23, v_20);
    }
    v_20 = nil;
v_5:
    return onevalue(v_20);
}



// Code for talp_varlt

static LispObject CC_talp_varlt(LispObject env,
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
        LispObject fn = basic_elt(env, 1); // talp_varlt1
        return (*qfn2(fn))(fn, v_8, v_7);
    }
}



// Code for lprim

static LispObject CC_lprim(LispObject env,
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
    v_16 = qvalue(basic_elt(env, 1)); // !*msg
    if (v_16 == nil) goto v_6;
    else goto v_7;
v_6:
    v_15 = nil;
    goto v_5;
v_7:
    v_16 = basic_elt(env, 2); // "***"
    {
        LispObject fn = basic_elt(env, 3); // lpriw
        return (*qfn2(fn))(fn, v_16, v_15);
    }
    v_15 = nil;
v_5:
    return onevalue(v_15);
}



// Code for notstring

static LispObject CC_notstring(LispObject env,
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
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_33 = v_2;
// end of prologue
    v_34 = basic_elt(env, 1); // ! 
    {   LispObject fn = basic_elt(env, 3); // delall
    v_33 = (*qfn2(fn))(fn, v_34, v_33);
    }
    env = stack[0];
    v_35 = v_33;
    v_33 = v_35;
    if (!car_legal(v_33)) v_34 = carerror(v_33); else
    v_34 = car(v_33);
    v_33 = basic_elt(env, 2); // !"
    if (v_34 == v_33) goto v_17;
    v_33 = v_35;
    v_33 = Lreverse(nil, v_33);
    env = stack[0];
    if (!car_legal(v_33)) v_34 = carerror(v_33); else
    v_34 = car(v_33);
    v_33 = basic_elt(env, 2); // !"
    v_33 = Lneq_2(nil, v_34, v_33);
    goto v_15;
v_17:
    v_33 = nil;
    goto v_15;
    v_33 = nil;
v_15:
    if (v_33 == nil) goto v_13;
    v_33 = lisp_true;
    goto v_6;
v_13:
    v_33 = nil;
    goto v_6;
    v_33 = nil;
v_6:
    return onevalue(v_33);
}



// Code for c!:ordexn

static LispObject CC_cTordexn(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    stack[0] = nil;
    stack[-3] = nil;
v_9:
    v_70 = stack[-1];
    if (v_70 == nil) goto v_12;
    else goto v_13;
v_12:
    v_71 = stack[-2];
    v_70 = stack[-3];
    v_70 = cons(v_71, v_70);
    env = stack[-4];
    v_70 = Lreverse(nil, v_70);
    {
        LispObject v_76 = stack[0];
        return cons(v_76, v_70);
    }
v_13:
    v_71 = stack[-2];
    v_70 = stack[-1];
    if (!car_legal(v_70)) v_70 = carerror(v_70); else
    v_70 = car(v_70);
    if (equal(v_71, v_70)) goto v_25;
    else goto v_26;
v_25:
    v_70 = lisp_true;
    goto v_24;
v_26:
    v_70 = stack[-2];
    v_70 = Lconsp(nil, v_70);
    env = stack[-4];
    if (v_70 == nil) goto v_35;
    else goto v_36;
v_35:
    v_70 = nil;
    goto v_34;
v_36:
    v_70 = stack[-1];
    if (!car_legal(v_70)) v_70 = carerror(v_70); else
    v_70 = car(v_70);
    v_70 = Lconsp(nil, v_70);
    env = stack[-4];
    goto v_34;
    v_70 = nil;
v_34:
    goto v_24;
    v_70 = nil;
v_24:
    if (v_70 == nil) goto v_22;
    v_70 = nil;
    goto v_8;
v_22:
    v_71 = stack[-2];
    v_70 = stack[-1];
    if (!car_legal(v_70)) v_70 = carerror(v_70); else
    v_70 = car(v_70);
    {   LispObject fn = basic_elt(env, 1); // c!:ordxp
    v_70 = (*qfn2(fn))(fn, v_71, v_70);
    }
    env = stack[-4];
    if (v_70 == nil) goto v_47;
    v_71 = stack[-2];
    v_70 = stack[-3];
    v_70 = cons(v_71, v_70);
    env = stack[-4];
    v_71 = Lreverse(nil, v_70);
    env = stack[-4];
    v_70 = stack[-1];
    v_70 = Lappend_2(nil, v_71, v_70);
    {
        LispObject v_77 = stack[0];
        return cons(v_77, v_70);
    }
v_47:
    v_70 = stack[-1];
    if (!car_legal(v_70)) v_71 = carerror(v_70); else
    v_71 = car(v_70);
    v_70 = stack[-3];
    v_70 = cons(v_71, v_70);
    env = stack[-4];
    stack[-3] = v_70;
    v_70 = stack[-1];
    if (!car_legal(v_70)) v_70 = cdrerror(v_70); else
    v_70 = cdr(v_70);
    stack[-1] = v_70;
    v_70 = stack[0];
    v_70 = (v_70 == nil ? lisp_true : nil);
    stack[0] = v_70;
    goto v_11;
v_11:
    goto v_9;
v_8:
    return onevalue(v_70);
}



// Code for constp

static LispObject CC_constp(LispObject env,
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
    v_22 = v_2;
// end of prologue
    v_23 = v_22;
    v_23 = (is_number(v_23) ? lisp_true : nil);
    if (v_23 == nil) goto v_6;
    else goto v_5;
v_6:
    v_23 = v_22;
    v_23 = Lconsp(nil, v_23);
    env = stack[0];
    if (v_23 == nil) goto v_11;
    else goto v_12;
v_11:
    v_22 = nil;
    goto v_10;
v_12:
    if (!car_legal(v_22)) v_22 = carerror(v_22); else
    v_22 = car(v_22);
    v_23 = qvalue(basic_elt(env, 1)); // domainlist!*
    v_22 = Lmemq(nil, v_22, v_23);
    goto v_10;
    v_22 = nil;
v_10:
    v_23 = v_22;
v_5:
    return onevalue(v_23);
}



// Code for bczero!?

static LispObject CC_bczeroW(LispObject env,
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
    v_17 = v_2;
// end of prologue
    v_18 = qvalue(basic_elt(env, 1)); // !*grmod!*
    if (v_18 == nil) goto v_7;
    v_18 = v_17;
    v_17 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
        return Leqn_2(nil, v_18, v_17);
v_7:
    if (!car_legal(v_17)) v_17 = carerror(v_17); else
    v_17 = car(v_17);
    v_17 = (v_17 == nil ? lisp_true : nil);
    goto v_5;
    v_17 = nil;
v_5:
    return onevalue(v_17);
}



// Code for multpfsq

static LispObject CC_multpfsq(LispObject env,
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
    v_40 = stack[-2];
    if (v_40 == nil) goto v_15;
    else goto v_16;
v_15:
    v_40 = lisp_true;
    goto v_14;
v_16:
    v_40 = stack[-1];
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
    v_40 = stack[-2];
    if (!car_legal(v_40)) v_40 = carerror(v_40); else
    v_40 = car(v_40);
    if (!car_legal(v_40)) stack[0] = carerror(v_40); else
    stack[0] = car(v_40);
    v_40 = stack[-2];
    if (!car_legal(v_40)) v_40 = carerror(v_40); else
    v_40 = car(v_40);
    if (!car_legal(v_40)) v_41 = cdrerror(v_40); else
    v_41 = cdr(v_40);
    v_40 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // multsq
    v_41 = (*qfn2(fn))(fn, v_41, v_40);
    }
    env = stack[-4];
    v_40 = stack[-3];
    v_40 = acons(stack[0], v_41, v_40);
    env = stack[-4];
    stack[-3] = v_40;
    v_40 = stack[-2];
    if (!car_legal(v_40)) v_40 = cdrerror(v_40); else
    v_40 = cdr(v_40);
    stack[-2] = v_40;
    goto v_8;
    v_40 = nil;
    return onevalue(v_40);
}



// Code for negnumberchk

static LispObject CC_negnumberchk(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_29, v_30, v_31;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_30 = v_2;
// end of prologue
    v_29 = v_30;
    v_31 = basic_elt(env, 1); // minus
    if (!consp(v_29)) goto v_11;
    v_29 = car(v_29);
    if (v_29 == v_31) goto v_10;
    else goto v_11;
v_10:
    v_29 = v_30;
    if (!car_legal(v_29)) v_29 = cdrerror(v_29); else
    v_29 = cdr(v_29);
    if (!car_legal(v_29)) v_29 = carerror(v_29); else
    v_29 = car(v_29);
    v_29 = (is_number(v_29) ? lisp_true : nil);
    goto v_9;
v_11:
    v_29 = nil;
    goto v_9;
    v_29 = nil;
v_9:
    if (v_29 == nil) goto v_7;
    v_29 = v_30;
    if (!car_legal(v_29)) v_29 = cdrerror(v_29); else
    v_29 = cdr(v_29);
    if (!car_legal(v_29)) v_29 = carerror(v_29); else
    v_29 = car(v_29);
    return negate(v_29);
v_7:
    v_29 = v_30;
    goto v_5;
    v_29 = nil;
v_5:
    return onevalue(v_29);
}



// Code for opmtch!*

static LispObject CC_opmtchH(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    v_15 = v_2;
// end of prologue
    v_14 = qvalue(basic_elt(env, 1)); // subfg!*
    stack[0] = v_14;
    v_14 = lisp_true;
    setvalue(basic_elt(env, 1), v_14); // subfg!*
    v_14 = v_15;
    {   LispObject fn = basic_elt(env, 2); // opmtch
    v_14 = (*qfn1(fn))(fn, v_14);
    }
    env = stack[-1];
    v_15 = v_14;
    v_14 = stack[0];
    setvalue(basic_elt(env, 1), v_14); // subfg!*
    v_14 = v_15;
    return onevalue(v_14);
}



// Code for sinitl

static LispObject CC_sinitl(LispObject env,
                         LispObject v_2)
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
    if (!symbolp(v_9)) v_9 = nil;
    else { v_9 = qfastgets(v_9);
           if (v_9 != nil) { v_9 = elt(v_9, 47); // initl
#ifdef RECORD_GET
             if (v_9 != SPID_NOPROP)
                record_get(elt(fastget_names, 47), 1);
             else record_get(elt(fastget_names, 47), 0),
                v_9 = nil; }
           else record_get(elt(fastget_names, 47), 0); }
#else
             if (v_9 == SPID_NOPROP) v_9 = nil; }}
#endif
    {   LispObject fn = basic_elt(env, 1); // eval
    v_9 = (*qfn1(fn))(fn, v_9);
    }
    {
        LispObject v_11 = stack[0];
        return Lset(nil, v_11, v_9);
    }
}



// Code for smemqlp

static LispObject CC_smemqlp(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
v_1:
    v_45 = stack[0];
    if (v_45 == nil) goto v_11;
    else goto v_12;
v_11:
    v_45 = lisp_true;
    goto v_10;
v_12:
    v_45 = stack[0];
    v_45 = (is_number(v_45) ? lisp_true : nil);
    goto v_10;
    v_45 = nil;
v_10:
    if (v_45 == nil) goto v_8;
    v_45 = nil;
    goto v_6;
v_8:
    v_45 = stack[0];
    if (!consp(v_45)) goto v_20;
    else goto v_21;
v_20:
    v_46 = stack[0];
    v_45 = stack[-1];
    v_45 = Lmemq(nil, v_46, v_45);
    goto v_6;
v_21:
    v_45 = stack[0];
    if (!car_legal(v_45)) v_46 = carerror(v_45); else
    v_46 = car(v_45);
    v_45 = basic_elt(env, 1); // quote
    if (v_46 == v_45) goto v_26;
    else goto v_27;
v_26:
    v_45 = nil;
    goto v_6;
v_27:
    v_46 = stack[-1];
    v_45 = stack[0];
    if (!car_legal(v_45)) v_45 = carerror(v_45); else
    v_45 = car(v_45);
    {   LispObject fn = basic_elt(env, 0); // smemqlp
    v_45 = (*qfn2(fn))(fn, v_46, v_45);
    }
    env = stack[-2];
    if (v_45 == nil) goto v_36;
    else goto v_35;
v_36:
    v_46 = stack[-1];
    v_45 = stack[0];
    if (!car_legal(v_45)) v_45 = cdrerror(v_45); else
    v_45 = cdr(v_45);
    stack[-1] = v_46;
    stack[0] = v_45;
    goto v_1;
v_35:
    goto v_6;
    v_45 = nil;
v_6:
    return onevalue(v_45);
}



// Code for angles!-equal

static LispObject CC_anglesKequal(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_31 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-3] = v_31;
v_8:
    v_32 = stack[-2];
    v_31 = stack[-3];
    stack[0] = Lgetv(nil, v_32, v_31);
    env = stack[-4];
    v_32 = stack[-1];
    v_31 = stack[-3];
    v_31 = Lgetv(nil, v_32, v_31);
    env = stack[-4];
    if (equal(stack[0], v_31)) goto v_13;
    v_31 = nil;
    goto v_7;
v_13:
    v_31 = stack[-3];
    v_31 = add1(v_31);
    env = stack[-4];
    stack[-3] = v_31;
    v_32 = stack[-3];
    v_31 = static_cast<LispObject>(128)+TAG_FIXNUM; // 8
    v_31 = static_cast<LispObject>(lessp2(v_32, v_31));
    v_31 = v_31 ? lisp_true : nil;
    env = stack[-4];
    if (v_31 == nil) goto v_26;
    goto v_8;
v_26:
    v_31 = lisp_true;
v_7:
    return onevalue(v_31);
}



// Code for pappl0

static LispObject CC_pappl0(LispObject env,
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
    stack[0] = v_11;
    {   LispObject fn = basic_elt(env, 1); // unpkp
    v_10 = (*qfn1(fn))(fn, v_10);
    }
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // pappl
    v_10 = (*qfn2(fn))(fn, stack[0], v_10);
    }
    env = stack[-1];
    {
        LispObject fn = basic_elt(env, 3); // pkp
        return (*qfn1(fn))(fn, v_10);
    }
}



// Code for rnonep!:

static LispObject CC_rnonepT(LispObject env,
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
    v_20 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_20 = (v_21 == v_20 ? lisp_true : nil);
    goto v_5;
v_7:
    v_20 = nil;
    goto v_5;
    v_20 = nil;
v_5:
    return onevalue(v_20);
}



// Code for multiply!-by!-constant!-mod!-p

static LispObject CC_multiplyKbyKconstantKmodKp(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    stack[-2] = nil;
    v_83 = stack[-1];
    if (v_83 == nil) goto v_11;
    else goto v_12;
v_11:
    v_83 = nil;
    goto v_8;
v_12:
    v_84 = stack[0];
    v_83 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_84 == v_83) goto v_15;
    else goto v_16;
v_15:
    v_83 = stack[-1];
    goto v_8;
v_16:
v_22:
    v_83 = stack[-1];
    if (!consp(v_83)) goto v_29;
    else goto v_30;
v_29:
    v_83 = lisp_true;
    goto v_28;
v_30:
    v_83 = stack[-1];
    if (!car_legal(v_83)) v_83 = carerror(v_83); else
    v_83 = car(v_83);
    v_83 = (consp(v_83) ? nil : lisp_true);
    goto v_28;
    v_83 = nil;
v_28:
    if (v_83 == nil) goto v_26;
    goto v_21;
v_26:
    v_83 = stack[-1];
    if (!car_legal(v_83)) v_83 = carerror(v_83); else
    v_83 = car(v_83);
    if (!car_legal(v_83)) v_84 = cdrerror(v_83); else
    v_84 = cdr(v_83);
    v_83 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // multiply!-by!-constant!-mod!-p
    v_83 = (*qfn2(fn))(fn, v_84, v_83);
    }
    env = stack[-3];
    v_84 = v_83;
    if (v_84 == nil) goto v_47;
    v_84 = stack[-1];
    if (!car_legal(v_84)) v_84 = carerror(v_84); else
    v_84 = car(v_84);
    if (!car_legal(v_84)) v_85 = carerror(v_84); else
    v_85 = car(v_84);
    v_84 = v_83;
    v_83 = stack[-2];
    v_83 = acons(v_85, v_84, v_83);
    env = stack[-3];
    stack[-2] = v_83;
    goto v_45;
v_47:
v_45:
    v_83 = stack[-1];
    if (!car_legal(v_83)) v_83 = cdrerror(v_83); else
    v_83 = cdr(v_83);
    stack[-1] = v_83;
    goto v_22;
v_21:
    v_83 = stack[-1];
    if (v_83 == nil) goto v_60;
    v_84 = stack[-1];
    v_83 = stack[0];
    v_83 = Lmodular_times(nil, v_84, v_83);
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 1); // !*n2f
    v_83 = (*qfn1(fn))(fn, v_83);
    }
    stack[-1] = v_83;
    goto v_58;
v_60:
v_58:
v_68:
    v_83 = stack[-2];
    if (v_83 == nil) goto v_71;
    else goto v_72;
v_71:
    goto v_67;
v_72:
    v_83 = stack[-2];
    if (!car_legal(v_83)) v_83 = cdrerror(v_83); else
    v_83 = cdr(v_83);
    v_85 = stack[-2];
    v_84 = stack[-1];
    if (!car_legal(v_85)) rplacd_fails(v_85);
    setcdr(v_85, v_84);
    v_84 = stack[-2];
    stack[-1] = v_84;
    stack[-2] = v_83;
    goto v_68;
v_67:
    v_83 = stack[-1];
v_8:
    return onevalue(v_83);
}



// Code for lalr_prin_symbol

static LispObject CC_lalr_prin_symbol(LispObject env,
                         LispObject v_2)
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
    v_59 = v_2;
// end of prologue
    v_58 = v_59;
    v_57 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_58 == v_57) goto v_6;
    else goto v_7;
v_6:
    v_57 = basic_elt(env, 1); // "$"
        return Lprinc(nil, v_57);
v_7:
    v_57 = v_59;
    if (is_number(v_57)) goto v_12;
    else goto v_13;
v_12:
    v_58 = v_59;
    v_57 = qvalue(basic_elt(env, 2)); // terminal_codes
    {   LispObject fn = basic_elt(env, 3); // cdrassoc
    v_57 = (*qfn2(fn))(fn, v_58, v_57);
    }
    env = stack[-1];
    v_57 = Lexplodec(nil, v_57);
    env = stack[-1];
    stack[0] = v_57;
v_18:
    v_57 = stack[0];
    if (v_57 == nil) goto v_25;
    else goto v_26;
v_25:
    v_57 = nil;
    goto v_17;
v_26:
    v_57 = stack[0];
    if (!car_legal(v_57)) v_57 = carerror(v_57); else
    v_57 = car(v_57);
    v_57 = Lprinc(nil, v_57);
    env = stack[-1];
    v_57 = stack[0];
    if (!car_legal(v_57)) v_57 = cdrerror(v_57); else
    v_57 = cdr(v_57);
    stack[0] = v_57;
    goto v_18;
v_17:
    goto v_5;
v_13:
    v_57 = v_59;
    {   LispObject fn = basic_elt(env, 4); // explode2uc
    v_57 = (*qfn1(fn))(fn, v_57);
    }
    env = stack[-1];
    stack[0] = v_57;
v_41:
    v_57 = stack[0];
    if (v_57 == nil) goto v_46;
    else goto v_47;
v_46:
    v_57 = nil;
    goto v_40;
v_47:
    v_57 = stack[0];
    if (!car_legal(v_57)) v_57 = carerror(v_57); else
    v_57 = car(v_57);
    v_57 = Lprinc(nil, v_57);
    env = stack[-1];
    v_57 = stack[0];
    if (!car_legal(v_57)) v_57 = cdrerror(v_57); else
    v_57 = cdr(v_57);
    stack[0] = v_57;
    goto v_41;
v_40:
    goto v_5;
    v_57 = nil;
v_5:
    return onevalue(v_57);
}



// Code for aex_mk

static LispObject CC_aex_mk(LispObject env,
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
    v_11 = basic_elt(env, 1); // aex
    return list3(v_11, v_10, v_9);
}



// Code for monomisdivisibleby

static LispObject CC_monomisdivisibleby(LispObject env,
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
    v_61 = v_2;
// end of prologue
    v_62 = v_61;
    v_61 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_61 = Lgetv(nil, v_62, v_61);
    env = stack[-2];
    stack[-1] = v_61;
    v_62 = stack[0];
    v_61 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_61 = Lgetv(nil, v_62, v_61);
    env = stack[-2];
    stack[0] = v_61;
v_17:
    v_61 = stack[-1];
    if (!car_legal(v_61)) v_61 = carerror(v_61); else
    v_61 = car(v_61);
    if (v_61 == nil) goto v_20;
    v_61 = stack[0];
    if (!car_legal(v_61)) v_61 = carerror(v_61); else
    v_61 = car(v_61);
    if (v_61 == nil) goto v_20;
    goto v_21;
v_20:
    goto v_16;
v_21:
    v_61 = stack[-1];
    if (!car_legal(v_61)) v_62 = carerror(v_61); else
    v_62 = car(v_61);
    v_61 = stack[0];
    if (!car_legal(v_61)) v_61 = carerror(v_61); else
    v_61 = car(v_61);
    if (equal(v_62, v_61)) goto v_31;
    else goto v_32;
v_31:
    v_61 = stack[-1];
    if (!car_legal(v_61)) v_61 = cdrerror(v_61); else
    v_61 = cdr(v_61);
    stack[-1] = v_61;
    v_61 = stack[0];
    if (!car_legal(v_61)) v_61 = cdrerror(v_61); else
    v_61 = cdr(v_61);
    stack[0] = v_61;
    goto v_30;
v_32:
    v_61 = stack[-1];
    if (!car_legal(v_61)) v_62 = carerror(v_61); else
    v_62 = car(v_61);
    v_61 = stack[0];
    if (!car_legal(v_61)) v_61 = carerror(v_61); else
    v_61 = car(v_61);
    v_61 = static_cast<LispObject>(greaterp2(v_62, v_61));
    v_61 = v_61 ? lisp_true : nil;
    env = stack[-2];
    if (v_61 == nil) goto v_43;
    v_61 = stack[-1];
    if (!car_legal(v_61)) v_61 = cdrerror(v_61); else
    v_61 = cdr(v_61);
    stack[-1] = v_61;
    goto v_30;
v_43:
    v_61 = nil;
    v_61 = ncons(v_61);
    env = stack[-2];
    stack[-1] = v_61;
    goto v_30;
v_30:
    goto v_17;
v_16:
    v_61 = stack[0];
    if (!car_legal(v_61)) v_61 = carerror(v_61); else
    v_61 = car(v_61);
    v_61 = (v_61 == nil ? lisp_true : nil);
    return onevalue(v_61);
}



// Code for setcdr

static LispObject CC_setcdr(LispObject env,
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
    v_11 = v_9;
    v_9 = v_10;
    if (!car_legal(v_11)) rplacd_fails(v_11);
    setcdr(v_11, v_9);
    v_9 = v_10;
    return onevalue(v_9);
}



// Code for powers0

static LispObject CC_powers0(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_85 = stack[-1];
    if (v_85 == nil) goto v_11;
    else goto v_12;
v_11:
    v_85 = lisp_true;
    goto v_10;
v_12:
    v_85 = stack[-1];
    if (!consp(v_85)) goto v_19;
    else goto v_20;
v_19:
    v_85 = lisp_true;
    goto v_18;
v_20:
    v_85 = stack[-1];
    if (!car_legal(v_85)) v_85 = carerror(v_85); else
    v_85 = car(v_85);
    v_85 = (consp(v_85) ? nil : lisp_true);
    goto v_18;
    v_85 = nil;
v_18:
    goto v_10;
    v_85 = nil;
v_10:
    if (v_85 == nil) goto v_8;
    v_85 = stack[0];
    goto v_6;
v_8:
    v_85 = stack[-1];
    if (!car_legal(v_85)) v_85 = carerror(v_85); else
    v_85 = car(v_85);
    if (!car_legal(v_85)) v_85 = carerror(v_85); else
    v_85 = car(v_85);
    if (!car_legal(v_85)) v_86 = carerror(v_85); else
    v_86 = car(v_85);
    v_85 = stack[0];
    v_86 = Latsoc(nil, v_86, v_85);
    v_85 = v_86;
    if (v_86 == nil) goto v_37;
    v_86 = stack[-1];
    if (!car_legal(v_86)) v_86 = carerror(v_86); else
    v_86 = car(v_86);
    if (!car_legal(v_86)) v_86 = carerror(v_86); else
    v_86 = car(v_86);
    if (!car_legal(v_86)) v_86 = cdrerror(v_86); else
    v_86 = cdr(v_86);
    if (!car_legal(v_85)) v_85 = cdrerror(v_85); else
    v_85 = cdr(v_85);
    v_85 = static_cast<LispObject>(greaterp2(v_86, v_85));
    v_85 = v_85 ? lisp_true : nil;
    env = stack[-3];
    if (v_85 == nil) goto v_47;
    v_85 = stack[-1];
    if (!car_legal(v_85)) v_85 = carerror(v_85); else
    v_85 = car(v_85);
    if (!car_legal(v_85)) v_85 = carerror(v_85); else
    v_85 = car(v_85);
    if (!car_legal(v_85)) v_87 = carerror(v_85); else
    v_87 = car(v_85);
    v_85 = stack[-1];
    if (!car_legal(v_85)) v_85 = carerror(v_85); else
    v_85 = car(v_85);
    if (!car_legal(v_85)) v_85 = carerror(v_85); else
    v_85 = car(v_85);
    if (!car_legal(v_85)) v_86 = cdrerror(v_85); else
    v_86 = cdr(v_85);
    v_85 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // repasc
    v_85 = (*qfn3(fn))(fn, v_87, v_86, v_85);
    }
    env = stack[-3];
    stack[0] = v_85;
    goto v_45;
v_47:
v_45:
    goto v_35;
v_37:
    v_85 = stack[-1];
    if (!car_legal(v_85)) v_85 = carerror(v_85); else
    v_85 = car(v_85);
    if (!car_legal(v_85)) v_85 = carerror(v_85); else
    v_85 = car(v_85);
    if (!car_legal(v_85)) v_87 = carerror(v_85); else
    v_87 = car(v_85);
    v_85 = stack[-1];
    if (!car_legal(v_85)) v_85 = carerror(v_85); else
    v_85 = car(v_85);
    if (!car_legal(v_85)) v_85 = carerror(v_85); else
    v_85 = car(v_85);
    if (!car_legal(v_85)) v_86 = cdrerror(v_85); else
    v_86 = cdr(v_85);
    v_85 = stack[0];
    v_85 = acons(v_87, v_86, v_85);
    env = stack[-3];
    stack[0] = v_85;
    goto v_35;
v_35:
    v_85 = stack[-1];
    if (!car_legal(v_85)) stack[-2] = cdrerror(v_85); else
    stack[-2] = cdr(v_85);
    v_85 = stack[-1];
    if (!car_legal(v_85)) v_85 = carerror(v_85); else
    v_85 = car(v_85);
    if (!car_legal(v_85)) v_86 = cdrerror(v_85); else
    v_86 = cdr(v_85);
    v_85 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // powers0
    v_85 = (*qfn2(fn))(fn, v_86, v_85);
    }
    env = stack[-3];
    stack[-1] = stack[-2];
    stack[0] = v_85;
    goto v_1;
    goto v_6;
    v_85 = nil;
v_6:
    return onevalue(v_85);
}



// Code for remove!-free!-vars!-l

static LispObject CC_removeKfreeKvarsKl(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_78, v_79;
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
    stack[-1] = nil;
    stack[0] = nil;
v_9:
    v_78 = stack[-2];
    if (!consp(v_78)) goto v_12;
    else goto v_13;
v_12:
v_17:
    v_78 = stack[-3];
    if (v_78 == nil) goto v_20;
    else goto v_21;
v_20:
    goto v_16;
v_21:
    v_78 = stack[0];
    if (v_78 == nil) goto v_26;
    else goto v_27;
v_26:
    v_78 = stack[-1];
    if (!car_legal(v_78)) v_78 = carerror(v_78); else
    v_78 = car(v_78);
    if (!car_legal(v_78)) v_79 = carerror(v_78); else
    v_79 = car(v_78);
    v_78 = stack[-3];
    if (!car_legal(v_78)) v_78 = carerror(v_78); else
    v_78 = car(v_78);
    if (equal(v_79, v_78)) goto v_31;
    else goto v_32;
v_31:
    v_78 = stack[-1];
    if (!car_legal(v_78)) v_78 = carerror(v_78); else
    v_78 = car(v_78);
    stack[-2] = v_78;
    goto v_30;
v_32:
    v_78 = stack[-3];
    if (!car_legal(v_78)) v_79 = carerror(v_78); else
    v_79 = car(v_78);
    v_78 = stack[-2];
    v_78 = cons(v_79, v_78);
    env = stack[-4];
    stack[-2] = v_78;
    v_78 = lisp_true;
    stack[0] = v_78;
    goto v_30;
v_30:
    goto v_25;
v_27:
    v_78 = stack[-3];
    if (!car_legal(v_78)) v_79 = carerror(v_78); else
    v_79 = car(v_78);
    v_78 = stack[-2];
    v_78 = cons(v_79, v_78);
    env = stack[-4];
    stack[-2] = v_78;
    goto v_25;
v_25:
    v_78 = stack[-1];
    if (!car_legal(v_78)) v_78 = cdrerror(v_78); else
    v_78 = cdr(v_78);
    stack[-1] = v_78;
    v_78 = stack[-3];
    if (!car_legal(v_78)) v_78 = cdrerror(v_78); else
    v_78 = cdr(v_78);
    stack[-3] = v_78;
    goto v_17;
v_16:
    v_78 = stack[-2];
    goto v_8;
v_13:
    v_78 = stack[-2];
    if (!car_legal(v_78)) v_79 = carerror(v_78); else
    v_79 = car(v_78);
    v_78 = basic_elt(env, 1); // !*sq
    if (v_79 == v_78) goto v_58;
    else goto v_59;
v_58:
    v_78 = stack[-2];
    if (!car_legal(v_78)) v_78 = cdrerror(v_78); else
    v_78 = cdr(v_78);
    if (!car_legal(v_78)) v_78 = carerror(v_78); else
    v_78 = car(v_78);
    {   LispObject fn = basic_elt(env, 2); // prepsq!*
    v_78 = (*qfn1(fn))(fn, v_78);
    }
    env = stack[-4];
    stack[-2] = v_78;
    v_78 = lisp_true;
    stack[0] = v_78;
    goto v_9;
v_59:
    v_79 = stack[-2];
    v_78 = stack[-1];
    v_78 = cons(v_79, v_78);
    env = stack[-4];
    stack[-1] = v_78;
    v_78 = stack[-2];
    if (!car_legal(v_78)) v_78 = carerror(v_78); else
    v_78 = car(v_78);
    {   LispObject fn = basic_elt(env, 3); // remove!-free!-vars
    v_79 = (*qfn1(fn))(fn, v_78);
    }
    env = stack[-4];
    v_78 = stack[-3];
    v_78 = cons(v_79, v_78);
    env = stack[-4];
    stack[-3] = v_78;
    v_78 = stack[-2];
    if (!car_legal(v_78)) v_78 = cdrerror(v_78); else
    v_78 = cdr(v_78);
    stack[-2] = v_78;
    goto v_9;
v_8:
    return onevalue(v_78);
}



// Code for get!+vec!+dim

static LispObject CC_getLvecLdim(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_8;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_8 = v_2;
// end of prologue
        return Llength(nil, v_8);
    return onevalue(v_8);
}



// Code for rl_ordatp

static LispObject CC_rl_ordatp(LispObject env,
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
    stack[0] = qvalue(basic_elt(env, 1)); // rl_ordatp!*
    v_10 = list2(v_11, v_10);
    env = stack[-1];
    {
        LispObject v_13 = stack[0];
        LispObject fn = basic_elt(env, 2); // apply
        return (*qfn2(fn))(fn, v_13, v_10);
    }
}



// Code for qqe_qopaddp

static LispObject CC_qqe_qopaddp(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_12, v_13;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_12 = v_2;
// end of prologue
    v_13 = basic_elt(env, 1); // (ladd radd)
    v_12 = Lmemq(nil, v_12, v_13);
    if (v_12 == nil) goto v_7;
    v_12 = lisp_true;
    goto v_5;
v_7:
    v_12 = nil;
v_5:
    return onevalue(v_12);
}



// Code for attributes

static LispObject CC_attributes(LispObject env,
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
    stack[-1] = v_3;
    v_48 = v_2;
// end of prologue
    v_48 = Llength(nil, v_48);
    env = stack[-3];
    stack[-2] = v_48;
    v_48 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[0] = v_48;
v_13:
    v_49 = stack[-2];
    v_48 = stack[0];
    v_48 = difference2(v_49, v_48);
    env = stack[-3];
    v_48 = Lminusp(nil, v_48);
    env = stack[-3];
    if (v_48 == nil) goto v_18;
    goto v_12;
v_18:
    v_48 = stack[-1];
    if (!car_legal(v_48)) v_48 = cdrerror(v_48); else
    v_48 = cdr(v_48);
    stack[-1] = v_48;
    v_48 = stack[0];
    v_48 = add1(v_48);
    env = stack[-3];
    stack[0] = v_48;
    goto v_13;
v_12:
v_30:
    v_48 = stack[-1];
    if (!car_legal(v_48)) v_49 = carerror(v_48); else
    v_49 = car(v_48);
    v_48 = basic_elt(env, 1); // ! 
    if (v_49 == v_48) goto v_34;
    goto v_29;
v_34:
    v_48 = stack[-1];
    if (!car_legal(v_48)) v_48 = cdrerror(v_48); else
    v_48 = cdr(v_48);
    stack[-1] = v_48;
    goto v_30;
v_29:
    v_49 = stack[-1];
    v_48 = basic_elt(env, 2); // (!$)
    if (equal(v_49, v_48)) goto v_44;
    v_48 = stack[-1];
    setvalue(basic_elt(env, 3), v_48); // atts
    goto v_42;
v_44:
v_42:
    v_48 = nil;
    return onevalue(v_48);
}



// Code for fast!-row!-dim

static LispObject CC_fastKrowKdim(LispObject env,
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
    v_7 = Lupbv(nil, v_7);
    return add1(v_7);
}



// Code for evmatrixcomp1

static LispObject CC_evmatrixcomp1(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_46, v_47, v_48;
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
    v_46 = stack[-1];
    if (v_46 == nil) goto v_8;
    else goto v_9;
v_8:
    v_46 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_7;
v_9:
    v_48 = stack[-3];
    v_46 = stack[-1];
    if (!car_legal(v_46)) v_47 = carerror(v_46); else
    v_47 = car(v_46);
    v_46 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {   LispObject fn = basic_elt(env, 1); // evmatrixcomp2
    stack[0] = (*qfn3(fn))(fn, v_48, v_47, v_46);
    }
    env = stack[-5];
    v_48 = stack[-2];
    v_46 = stack[-1];
    if (!car_legal(v_46)) v_47 = carerror(v_46); else
    v_47 = car(v_46);
    v_46 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {   LispObject fn = basic_elt(env, 1); // evmatrixcomp2
    v_46 = (*qfn3(fn))(fn, v_48, v_47, v_46);
    }
    env = stack[-5];
    stack[-4] = stack[0];
    stack[0] = v_46;
    v_47 = stack[-4];
    v_46 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // iequal
    v_46 = (*qfn2(fn))(fn, v_47, v_46);
    }
    env = stack[-5];
    if (v_46 == nil) goto v_29;
    v_48 = stack[-3];
    v_47 = stack[-2];
    v_46 = stack[-1];
    if (!car_legal(v_46)) v_46 = cdrerror(v_46); else
    v_46 = cdr(v_46);
    stack[-3] = v_48;
    stack[-2] = v_47;
    stack[-1] = v_46;
    goto v_1;
v_29:
    v_47 = stack[-4];
    v_46 = stack[0];
    if ((static_cast<std::intptr_t>(v_47) > static_cast<std::intptr_t>(v_46))) goto v_38;
    else goto v_39;
v_38:
    v_46 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_27;
v_39:
    v_46 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    goto v_27;
    v_46 = nil;
v_27:
    goto v_7;
    v_46 = nil;
v_7:
    return onevalue(v_46);
}



// Code for i2rd!*

static LispObject CC_i2rdH(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // chkint!*
    v_7 = (*qfn1(fn))(fn, v_7);
    }
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // mkround
        return (*qfn1(fn))(fn, v_7);
    }
}



// Code for getphystype!*sq

static LispObject CC_getphystypeHsq(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_8;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_8 = v_2;
// end of prologue
    if (!car_legal(v_8)) v_8 = carerror(v_8); else
    v_8 = car(v_8);
    if (!car_legal(v_8)) v_8 = carerror(v_8); else
    v_8 = car(v_8);
    {
        LispObject fn = basic_elt(env, 1); // getphystypesf
        return (*qfn1(fn))(fn, v_8);
    }
}



// Code for union_edges

static LispObject CC_union_edges(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // union_edge
    v_24 = (*qfn2(fn))(fn, v_25, v_24);
    }
    env = stack[-1];
    v_25 = stack[0];
    goto v_8;
    v_24 = nil;
v_7:
    return onevalue(v_24);
}



// Code for mo!=modiv1

static LispObject CC_moMmodiv1(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_36 = stack[-1];
    if (v_36 == nil) goto v_10;
    else goto v_11;
v_10:
    v_36 = lisp_true;
    goto v_6;
v_11:
    v_36 = stack[0];
    if (v_36 == nil) goto v_14;
    else goto v_15;
v_14:
    v_36 = nil;
    goto v_6;
v_15:
    v_36 = stack[-1];
    if (!car_legal(v_36)) v_37 = carerror(v_36); else
    v_37 = car(v_36);
    v_36 = stack[0];
    if (!car_legal(v_36)) v_36 = carerror(v_36); else
    v_36 = car(v_36);
    v_36 = static_cast<LispObject>(lesseq2(v_37, v_36));
    v_36 = v_36 ? lisp_true : nil;
    env = stack[-2];
    if (v_36 == nil) goto v_23;
    v_36 = stack[-1];
    if (!car_legal(v_36)) v_36 = cdrerror(v_36); else
    v_36 = cdr(v_36);
    stack[-1] = v_36;
    v_36 = stack[0];
    if (!car_legal(v_36)) v_36 = cdrerror(v_36); else
    v_36 = cdr(v_36);
    stack[0] = v_36;
    goto v_7;
v_23:
    v_36 = nil;
    goto v_6;
    goto v_9;
v_9:
    v_36 = nil;
v_6:
    return onevalue(v_36);
}



// Code for unpkp

static LispObject CC_unpkp(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_81, v_82, v_83;
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
    v_81 = stack[-1];
    if (!consp(v_81)) goto v_12;
    v_81 = stack[-1];
    goto v_8;
v_12:
    v_81 = stack[-1];
    v_81 = Lexplode(nil, v_81);
    env = stack[-3];
    stack[-1] = v_81;
    v_81 = stack[-1];
    v_82 = Llength(nil, v_81);
    env = stack[-3];
    v_81 = static_cast<LispObject>(160)+TAG_FIXNUM; // 10
    v_81 = static_cast<LispObject>(geq2(v_82, v_81));
    v_81 = v_81 ? lisp_true : nil;
    env = stack[-3];
    stack[0] = v_81;
    v_81 = stack[0];
    if (v_81 == nil) goto v_24;
    v_81 = stack[-1];
    v_81 = Llength(nil, v_81);
    env = stack[-3];
    v_81 = Levenp(nil, v_81);
    env = stack[-3];
    if (v_81 == nil) goto v_27;
    else goto v_24;
v_27:
    v_82 = basic_elt(env, 1); // !0
    v_81 = stack[-1];
    v_81 = cons(v_82, v_81);
    env = stack[-3];
    stack[-1] = v_81;
    goto v_22;
v_24:
v_22:
v_36:
    v_81 = stack[-1];
    if (v_81 == nil) goto v_39;
    else goto v_40;
v_39:
    goto v_35;
v_40:
    v_81 = stack[0];
    if (v_81 == nil) goto v_46;
    v_81 = stack[-1];
    if (!car_legal(v_81)) v_82 = carerror(v_81); else
    v_82 = car(v_81);
    v_81 = qvalue(basic_elt(env, 2)); // diglist!*
    v_81 = Lassoc(nil, v_82, v_81);
    if (!car_legal(v_81)) v_81 = cdrerror(v_81); else
    v_81 = cdr(v_81);
    v_82 = v_81;
    v_81 = stack[-1];
    if (!car_legal(v_81)) v_81 = cdrerror(v_81); else
    v_81 = cdr(v_81);
    stack[-1] = v_81;
    v_81 = static_cast<LispObject>(160)+TAG_FIXNUM; // 10
    v_83 = times2(v_82, v_81);
    env = stack[-3];
    v_81 = stack[-1];
    if (!car_legal(v_81)) v_82 = carerror(v_81); else
    v_82 = car(v_81);
    v_81 = qvalue(basic_elt(env, 2)); // diglist!*
    v_81 = Lassoc(nil, v_82, v_81);
    if (!car_legal(v_81)) v_81 = cdrerror(v_81); else
    v_81 = cdr(v_81);
    v_82 = plus2(v_83, v_81);
    env = stack[-3];
    v_81 = stack[-2];
    v_81 = cons(v_82, v_81);
    env = stack[-3];
    stack[-2] = v_81;
    goto v_44;
v_46:
    v_81 = stack[-1];
    if (!car_legal(v_81)) v_82 = carerror(v_81); else
    v_82 = car(v_81);
    v_81 = qvalue(basic_elt(env, 2)); // diglist!*
    v_81 = Lassoc(nil, v_82, v_81);
    if (!car_legal(v_81)) v_82 = cdrerror(v_81); else
    v_82 = cdr(v_81);
    v_81 = stack[-2];
    v_81 = cons(v_82, v_81);
    env = stack[-3];
    stack[-2] = v_81;
    goto v_44;
v_44:
    v_81 = stack[-1];
    if (!car_legal(v_81)) v_81 = cdrerror(v_81); else
    v_81 = cdr(v_81);
    stack[-1] = v_81;
    goto v_36;
v_35:
    v_81 = stack[-2];
        return Lnreverse(nil, v_81);
v_8:
    return onevalue(v_81);
}



// Code for modtimes!:

static LispObject CC_modtimesT(LispObject env,
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
    if (!car_legal(v_12)) v_12 = cdrerror(v_12); else
    v_12 = cdr(v_12);
    if (!car_legal(v_11)) v_11 = cdrerror(v_11); else
    v_11 = cdr(v_11);
    {   LispObject fn = basic_elt(env, 1); // general!-modular!-times
    v_11 = (*qfn2(fn))(fn, v_12, v_11);
    }
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // !*modular2f
        return (*qfn1(fn))(fn, v_11);
    }
}



// Code for times!-in!-vector

static LispObject CC_timesKinKvector(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_98, v_99, v_100;
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(14);
// copy arguments values to proper place
    stack[-7] = v_6;
    stack[-8] = v_5;
    stack[-9] = v_4;
    stack[-10] = v_3;
    stack[-11] = v_2;
// end of prologue
    v_99 = stack[-10];
    v_98 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if ((static_cast<std::intptr_t>(v_99) < static_cast<std::intptr_t>(v_98))) goto v_15;
    v_99 = stack[-8];
    v_98 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if ((static_cast<std::intptr_t>(v_99) < static_cast<std::intptr_t>(v_98))) goto v_15;
    goto v_16;
v_15:
    v_98 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    goto v_12;
v_16:
    v_99 = stack[-10];
    v_98 = stack[-8];
    v_98 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_99) + static_cast<std::uintptr_t>(v_98) - TAG_FIXNUM);
    stack[-12] = v_98;
    v_98 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[0] = v_98;
v_30:
    v_99 = stack[-12];
    v_98 = stack[0];
    v_98 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_99) - static_cast<std::uintptr_t>(v_98) + TAG_FIXNUM);
    v_98 = (static_cast<std::intptr_t>(v_98) < 0 ? lisp_true : nil);
    if (v_98 == nil) goto v_35;
    goto v_29;
v_35:
    v_100 = stack[-7];
    v_99 = stack[0];
    v_98 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_98 = Lputv(nil, v_100, v_99, v_98);
    env = stack[-13];
    v_98 = stack[0];
    v_98 = static_cast<LispObject>(static_cast<std::intptr_t>(v_98) + 0x10);
    stack[0] = v_98;
    goto v_30;
v_29:
    v_98 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-5] = v_98;
v_50:
    v_99 = stack[-10];
    v_98 = stack[-5];
    v_98 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_99) - static_cast<std::uintptr_t>(v_98) + TAG_FIXNUM);
    v_98 = (static_cast<std::intptr_t>(v_98) < 0 ? lisp_true : nil);
    if (v_98 == nil) goto v_55;
    goto v_49;
v_55:
    v_99 = stack[-11];
    v_98 = stack[-5];
    v_98 = Lgetv(nil, v_99, v_98);
    env = stack[-13];
    stack[-6] = v_98;
    v_98 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-4] = v_98;
v_67:
    v_99 = stack[-8];
    v_98 = stack[-4];
    v_98 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_99) - static_cast<std::uintptr_t>(v_98) + TAG_FIXNUM);
    v_98 = (static_cast<std::intptr_t>(v_98) < 0 ? lisp_true : nil);
    if (v_98 == nil) goto v_72;
    goto v_66;
v_72:
    v_99 = stack[-5];
    v_98 = stack[-4];
    v_98 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_99) + static_cast<std::uintptr_t>(v_98) - TAG_FIXNUM);
    stack[-3] = stack[-7];
    stack[-2] = v_98;
    v_99 = stack[-7];
    stack[-1] = Lgetv(nil, v_99, v_98);
    env = stack[-13];
    stack[0] = stack[-6];
    v_99 = stack[-9];
    v_98 = stack[-4];
    v_98 = Lgetv(nil, v_99, v_98);
    env = stack[-13];
    v_98 = Lmodular_times(nil, stack[0], v_98);
    env = stack[-13];
    {   std::intptr_t w = int_of_fixnum(stack[-1]) + int_of_fixnum(v_98);
        if (w >= current_modulus) w -= current_modulus;
        v_98 = fixnum_of_int(w);
    }
    v_98 = Lputv(nil, stack[-3], stack[-2], v_98);
    env = stack[-13];
    v_98 = stack[-4];
    v_98 = static_cast<LispObject>(static_cast<std::intptr_t>(v_98) + 0x10);
    stack[-4] = v_98;
    goto v_67;
v_66:
    v_98 = stack[-5];
    v_98 = static_cast<LispObject>(static_cast<std::intptr_t>(v_98) + 0x10);
    stack[-5] = v_98;
    goto v_50;
v_49:
    v_98 = stack[-12];
v_12:
    return onevalue(v_98);
}



// Code for gcdfd

static LispObject CC_gcdfd(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_17, v_18, v_19;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_18 = v_3;
    v_19 = v_2;
// end of prologue
    v_17 = qvalue(basic_elt(env, 1)); // dmode!*
    if (!symbolp(v_17)) v_17 = nil;
    else { v_17 = qfastgets(v_17);
           if (v_17 != nil) { v_17 = elt(v_17, 3); // field
#ifdef RECORD_GET
             if (v_17 == SPID_NOPROP)
                record_get(elt(fastget_names, 3), 0),
                v_17 = nil;
             else record_get(elt(fastget_names, 3), 1),
                v_17 = lisp_true; }
           else record_get(elt(fastget_names, 3), 0); }
#else
             if (v_17 == SPID_NOPROP) v_17 = nil; else v_17 = lisp_true; }}
#endif
    if (v_17 == nil) goto v_8;
    v_17 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_6;
v_8:
    v_17 = v_19;
    {
        LispObject fn = basic_elt(env, 2); // gcdfd1
        return (*qfn2(fn))(fn, v_17, v_18);
    }
    v_17 = nil;
v_6:
    return onevalue(v_17);
}



// Code for cdrassoc

static LispObject CC_cdrassoc(LispObject env,
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
    v_29 = stack[-1];
    v_28 = stack[0];
    v_28 = Lassoc(nil, v_29, v_28);
    v_29 = v_28;
    if (!consp(v_28)) goto v_11;
    v_28 = v_29;
    if (!car_legal(v_28)) v_28 = cdrerror(v_28); else
    v_28 = cdr(v_28);
    goto v_7;
v_11:
    v_28 = Lterpri(nil);
    env = stack[-2];
    v_28 = basic_elt(env, 1); // "ASSOC trouble: "
    v_28 = Lprinc(nil, v_28);
    env = stack[-2];
    v_28 = stack[-1];
    v_28 = Lprin(nil, v_28);
    env = stack[-2];
    v_28 = basic_elt(env, 2); // " "
    v_28 = Lprinc(nil, v_28);
    env = stack[-2];
    v_28 = stack[0];
    v_28 = Lprint(nil, v_28);
    env = stack[-2];
    v_28 = basic_elt(env, 3); // "assoc trouble"
    {   LispObject fn = basic_elt(env, 4); // rederr
    v_28 = (*qfn1(fn))(fn, v_28);
    }
    v_28 = nil;
v_7:
    return onevalue(v_28);
}



// Code for cl_atmlc

static LispObject CC_cl_atmlc(LispObject env,
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
    v_9 = v_8;
    v_8 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_8 = cons(v_9, v_8);
    return ncons(v_8);
}



// Code for delallasc

static LispObject CC_delallasc(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    v_34 = nil;
v_8:
    v_32 = stack[0];
    if (v_32 == nil) goto v_11;
    else goto v_12;
v_11:
    v_32 = v_34;
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn1(fn))(fn, v_32);
    }
v_12:
    v_33 = stack[-1];
    v_32 = stack[0];
    if (!car_legal(v_32)) v_32 = carerror(v_32); else
    v_32 = car(v_32);
    if (!car_legal(v_32)) v_32 = carerror(v_32); else
    v_32 = car(v_32);
    if (v_33 == v_32) goto v_16;
    else goto v_17;
v_16:
    v_32 = stack[0];
    if (!car_legal(v_32)) v_32 = cdrerror(v_32); else
    v_32 = cdr(v_32);
    stack[0] = v_32;
    goto v_8;
v_17:
    v_32 = stack[0];
    if (!car_legal(v_32)) v_32 = carerror(v_32); else
    v_32 = car(v_32);
    v_33 = v_34;
    v_32 = cons(v_32, v_33);
    env = stack[-2];
    v_34 = v_32;
    v_32 = stack[0];
    if (!car_legal(v_32)) v_32 = cdrerror(v_32); else
    v_32 = cdr(v_32);
    stack[0] = v_32;
    goto v_8;
    v_32 = nil;
    return onevalue(v_32);
}



// Code for rank

static LispObject CC_rank(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_78, v_79;
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
    v_78 = qvalue(basic_elt(env, 1)); // !*mcd
    if (v_78 == nil) goto v_7;
    v_78 = stack[-2];
    if (!car_legal(v_78)) v_78 = carerror(v_78); else
    v_78 = car(v_78);
    if (!car_legal(v_78)) v_78 = carerror(v_78); else
    v_78 = car(v_78);
    if (!car_legal(v_78)) v_78 = cdrerror(v_78); else
    v_78 = cdr(v_78);
    goto v_5;
v_7:
    v_78 = stack[-2];
    if (!car_legal(v_78)) v_78 = carerror(v_78); else
    v_78 = car(v_78);
    if (!car_legal(v_78)) v_78 = carerror(v_78); else
    v_78 = car(v_78);
    if (!car_legal(v_78)) v_78 = cdrerror(v_78); else
    v_78 = cdr(v_78);
    stack[-1] = v_78;
    v_78 = stack[-2];
    if (!car_legal(v_78)) v_78 = carerror(v_78); else
    v_78 = car(v_78);
    if (!car_legal(v_78)) v_78 = carerror(v_78); else
    v_78 = car(v_78);
    if (!car_legal(v_78)) v_78 = carerror(v_78); else
    v_78 = car(v_78);
    stack[0] = v_78;
v_20:
    v_78 = stack[-2];
    if (!car_legal(v_78)) v_78 = carerror(v_78); else
    v_78 = car(v_78);
    if (!car_legal(v_78)) v_78 = carerror(v_78); else
    v_78 = car(v_78);
    if (!car_legal(v_78)) v_78 = cdrerror(v_78); else
    v_78 = cdr(v_78);
    stack[-3] = v_78;
    v_78 = stack[-2];
    if (!car_legal(v_78)) v_78 = cdrerror(v_78); else
    v_78 = cdr(v_78);
    if (v_78 == nil) goto v_37;
    else goto v_38;
v_37:
    v_79 = stack[-1];
    v_78 = stack[-3];
    return difference2(v_79, v_78);
v_38:
    v_78 = stack[-2];
    if (!car_legal(v_78)) v_78 = cdrerror(v_78); else
    v_78 = cdr(v_78);
    stack[-2] = v_78;
    v_79 = stack[-2];
    v_78 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // degr
    v_79 = (*qfn2(fn))(fn, v_79, v_78);
    }
    env = stack[-4];
    v_78 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_79 == v_78) goto v_48;
    else goto v_49;
v_48:
    v_79 = stack[-3];
    v_78 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_78 = static_cast<LispObject>(lessp2(v_79, v_78));
    v_78 = v_78 ? lisp_true : nil;
    env = stack[-4];
    if (v_78 == nil) goto v_57;
    v_79 = stack[-1];
    v_78 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_78 = static_cast<LispObject>(lessp2(v_79, v_78));
    v_78 = v_78 ? lisp_true : nil;
    if (v_78 == nil) goto v_64;
    v_78 = stack[-3];
    return negate(v_78);
v_64:
    v_79 = stack[-1];
    v_78 = stack[-3];
    return difference2(v_79, v_78);
    v_78 = nil;
    goto v_55;
v_57:
    v_78 = stack[-1];
    goto v_55;
    v_78 = nil;
v_55:
    goto v_19;
v_49:
    goto v_20;
v_19:
    goto v_5;
    v_78 = nil;
v_5:
    return onevalue(v_78);
}



// Code for sizchk

static LispObject CC_sizchk(LispObject env,
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
    stack[-2] = nil;
v_8:
    v_34 = stack[-1];
    if (v_34 == nil) goto v_11;
    else goto v_12;
v_11:
    v_34 = stack[-2];
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn1(fn))(fn, v_34);
    }
v_12:
    v_34 = stack[-1];
    if (!car_legal(v_34)) v_34 = carerror(v_34); else
    v_34 = car(v_34);
    if (!car_legal(v_34)) v_34 = carerror(v_34); else
    v_34 = car(v_34);
    v_35 = Llength(nil, v_34);
    env = stack[-3];
    v_34 = stack[0];
    v_34 = static_cast<LispObject>(greaterp2(v_35, v_34));
    v_34 = v_34 ? lisp_true : nil;
    env = stack[-3];
    if (v_34 == nil) goto v_17;
    v_34 = stack[-1];
    if (!car_legal(v_34)) v_34 = cdrerror(v_34); else
    v_34 = cdr(v_34);
    stack[-1] = v_34;
    goto v_8;
v_17:
    v_34 = stack[-1];
    if (!car_legal(v_34)) v_35 = carerror(v_34); else
    v_35 = car(v_34);
    v_34 = stack[-2];
    v_34 = cons(v_35, v_34);
    env = stack[-3];
    stack[-2] = v_34;
    v_34 = stack[-1];
    if (!car_legal(v_34)) v_34 = cdrerror(v_34); else
    v_34 = cdr(v_34);
    stack[-1] = v_34;
    goto v_8;
    v_34 = nil;
    return onevalue(v_34);
}



// Code for rl_smcpknowl

static LispObject CC_rl_smcpknowl(LispObject env,
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
    stack[0] = qvalue(basic_elt(env, 1)); // rl_smcpknowl!*
    v_8 = ncons(v_8);
    env = stack[-1];
    {
        LispObject v_10 = stack[0];
        LispObject fn = basic_elt(env, 2); // apply
        return (*qfn2(fn))(fn, v_10, v_8);
    }
}



// Code for qqe_qopheadp

static LispObject CC_qqe_qopheadp(LispObject env,
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
    v_8 = basic_elt(env, 1); // (lhead rhead)
    v_7 = Lmemq(nil, v_7, v_8);
    return onevalue(v_7);
}



// Code for lto_hashequalq

static LispObject CC_lto_hashequalq(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_60 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-1] = v_60;
    v_60 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[0] = v_60;
v_15:
    v_60 = stack[-3];
    if (v_60 == nil) goto v_18;
    v_60 = stack[-2];
    if (v_60 == nil) goto v_18;
    goto v_19;
v_18:
    goto v_14;
v_19:
    v_60 = stack[-3];
    if (!car_legal(v_60)) v_60 = carerror(v_60); else
    v_60 = car(v_60);
    v_61 = v_60;
    v_60 = stack[-2];
    if (!car_legal(v_60)) v_60 = carerror(v_60); else
    v_60 = car(v_60);
    stack[-4] = v_60;
    v_60 = stack[-3];
    if (!car_legal(v_60)) v_60 = cdrerror(v_60); else
    v_60 = cdr(v_60);
    stack[-3] = v_60;
    v_60 = stack[-2];
    if (!car_legal(v_60)) v_60 = cdrerror(v_60); else
    v_60 = cdr(v_60);
    stack[-2] = v_60;
    v_60 = v_61;
    {   LispObject fn = basic_elt(env, 1); // lto_hashid
    v_60 = (*qfn1(fn))(fn, v_60);
    }
    env = stack[-5];
    v_60 = static_cast<LispObject>(static_cast<std::uintptr_t>(stack[-1]) + static_cast<std::uintptr_t>(v_60) - TAG_FIXNUM);
    stack[-1] = v_60;
    v_60 = stack[-4];
    {   LispObject fn = basic_elt(env, 1); // lto_hashid
    v_60 = (*qfn1(fn))(fn, v_60);
    }
    env = stack[-5];
    v_60 = static_cast<LispObject>(static_cast<std::uintptr_t>(stack[0]) + static_cast<std::uintptr_t>(v_60) - TAG_FIXNUM);
    stack[0] = v_60;
    goto v_15;
v_14:
    v_60 = stack[-3];
    if (v_60 == nil) goto v_43;
    else goto v_44;
v_43:
    v_60 = stack[-2];
    if (v_60 == nil) goto v_48;
    else goto v_49;
v_48:
    v_61 = stack[-1];
    v_60 = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // iequal
        return (*qfn2(fn))(fn, v_61, v_60);
    }
v_49:
    v_60 = nil;
    goto v_47;
    v_60 = nil;
v_47:
    goto v_42;
v_44:
    v_60 = nil;
    goto v_42;
    v_60 = nil;
v_42:
    return onevalue(v_60);
}



// Code for get_content

static LispObject CC_get_content(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_84, v_85;
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
    v_84 = nil;
    stack[-1] = v_84;
v_10:
    v_85 = Lreadch(nil);
    env = stack[-2];
    setvalue(basic_elt(env, 1), v_85); // ch
    v_84 = basic_elt(env, 2); // !<
    if (v_85 == v_84) goto v_18;
    v_85 = qvalue(basic_elt(env, 1)); // ch
    v_84 = qvalue(basic_elt(env, 3)); // !$eof!$
    v_84 = Lneq_2(nil, v_85, v_84);
    env = stack[-2];
    goto v_16;
v_18:
    v_84 = nil;
    goto v_16;
    v_84 = nil;
v_16:
    if (v_84 == nil) goto v_13;
    else goto v_14;
v_13:
    goto v_9;
v_14:
    stack[0] = qvalue(basic_elt(env, 1)); // ch
    v_84 = static_cast<LispObject>(160)+TAG_FIXNUM; // 10
    v_84 = ncons(v_84);
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 7); // list2string
    v_84 = (*qfn1(fn))(fn, v_84);
    }
    env = stack[-2];
    v_84 = Lintern(nil, v_84);
    env = stack[-2];
    if (equal(stack[0], v_84)) goto v_31;
    v_85 = qvalue(basic_elt(env, 1)); // ch
    v_84 = stack[-1];
    v_84 = cons(v_85, v_84);
    env = stack[-2];
    stack[-1] = v_84;
    goto v_29;
v_31:
v_29:
    goto v_10;
v_9:
    v_85 = basic_elt(env, 4); // ! 
    v_84 = stack[-1];
    {   LispObject fn = basic_elt(env, 8); // delall
    v_84 = (*qfn2(fn))(fn, v_85, v_84);
    }
    env = stack[-2];
    stack[0] = v_84;
    v_84 = stack[0];
    if (v_84 == nil) goto v_45;
    else goto v_46;
v_45:
    v_84 = nil;
    stack[-1] = v_84;
    goto v_44;
v_46:
    v_84 = stack[0];
    if (!car_legal(v_84)) v_85 = carerror(v_84); else
    v_85 = car(v_84);
    v_84 = basic_elt(env, 5); // !"
    if (v_85 == v_84) goto v_58;
    v_84 = stack[0];
    v_84 = Lreverse(nil, v_84);
    env = stack[-2];
    if (!car_legal(v_84)) v_85 = carerror(v_84); else
    v_85 = car(v_84);
    v_84 = basic_elt(env, 5); // !"
    v_84 = Lneq_2(nil, v_85, v_84);
    env = stack[-2];
    goto v_56;
v_58:
    v_84 = nil;
    goto v_56;
    v_84 = nil;
v_56:
    if (v_84 == nil) goto v_54;
    v_84 = stack[0];
    stack[-1] = v_84;
    goto v_52;
v_54:
    v_84 = stack[-1];
        return Lreverse(nil, v_84);
v_52:
    goto v_44;
v_44:
    v_84 = stack[-1];
    if (v_84 == nil) goto v_78;
    v_85 = basic_elt(env, 6); // !$
    v_84 = stack[-1];
    v_84 = cons(v_85, v_84);
    stack[-1] = v_84;
    goto v_76;
v_78:
v_76:
    v_84 = stack[-1];
    return onevalue(v_84);
}



// Code for ps!:evaluate

static LispObject CC_psTevaluate(LispObject env,
                         LispObject v_3, LispObject v_4)
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
    stack[-2] = v_4;
    v_46 = v_3;
// end of prologue
// Binding ps
// FLUIDBIND: reloadenv=4 litvec-offset=1 saveloc=3
{   bind_fluid_stack bind_fluid_var(-4, 1, -3);
    setvalue(basic_elt(env, 1), v_46); // ps
    v_47 = qvalue(basic_elt(env, 1)); // ps
    v_46 = stack[-2];
    {   LispObject fn = basic_elt(env, 2); // ps!:get!-term
    v_46 = (*qfn2(fn))(fn, v_47, v_46);
    }
    env = stack[-4];
    stack[-1] = v_46;
    v_46 = stack[-1];
    if (v_46 == nil) goto v_20;
    v_46 = stack[-1];
    goto v_13;
v_20:
    v_46 = qvalue(basic_elt(env, 1)); // ps
    {   LispObject fn = basic_elt(env, 3); // ps!:last!-term
    v_46 = (*qfn1(fn))(fn, v_46);
    }
    env = stack[-4];
    v_46 = add1(v_46);
    env = stack[-4];
    stack[0] = v_46;
v_26:
    v_47 = stack[-2];
    v_46 = stack[0];
    v_46 = difference2(v_47, v_46);
    env = stack[-4];
    v_46 = Lminusp(nil, v_46);
    env = stack[-4];
    if (v_46 == nil) goto v_33;
    goto v_25;
v_33:
    v_47 = qvalue(basic_elt(env, 1)); // ps
    v_46 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // ps!:evaluate!-next
    v_46 = (*qfn2(fn))(fn, v_47, v_46);
    }
    env = stack[-4];
    stack[-1] = v_46;
    v_46 = stack[0];
    v_46 = add1(v_46);
    env = stack[-4];
    stack[0] = v_46;
    goto v_26;
v_25:
    v_46 = stack[-1];
v_13:
    ;}  // end of a binding scope
    return onevalue(v_46);
}



// Code for !:zerop

static LispObject CC_Tzerop(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_31, v_32, v_33;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_32 = v_2;
// end of prologue
    v_31 = v_32;
    if (v_31 == nil) goto v_10;
    else goto v_11;
v_10:
    v_31 = lisp_true;
    goto v_9;
v_11:
    v_33 = v_32;
    v_31 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_31 = (v_33 == v_31 ? lisp_true : nil);
    goto v_9;
    v_31 = nil;
v_9:
    if (v_31 == nil) goto v_7;
    v_31 = lisp_true;
    goto v_5;
v_7:
    v_31 = v_32;
    if (!consp(v_31)) goto v_20;
    else goto v_21;
v_20:
    v_31 = nil;
    goto v_5;
v_21:
    v_31 = v_32;
    if (!car_legal(v_31)) v_31 = carerror(v_31); else
    v_31 = car(v_31);
    if (!symbolp(v_31)) v_31 = nil;
    else { v_31 = qfastgets(v_31);
           if (v_31 != nil) { v_31 = elt(v_31, 15); // zerop
#ifdef RECORD_GET
             if (v_31 != SPID_NOPROP)
                record_get(elt(fastget_names, 15), 1);
             else record_get(elt(fastget_names, 15), 0),
                v_31 = nil; }
           else record_get(elt(fastget_names, 15), 0); }
#else
             if (v_31 == SPID_NOPROP) v_31 = nil; }}
#endif
        return Lapply1(nil, v_31, v_32);
    v_31 = nil;
v_5:
    return onevalue(v_31);
}



// Code for initcomb

static LispObject CC_initcomb(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_6;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_6 = v_2;
// end of prologue
    return ncons(v_6);
}



// Code for bcprod

static LispObject CC_bcprod(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_27 = qvalue(basic_elt(env, 1)); // !*grmod!*
    if (v_27 == nil) goto v_8;
    v_28 = stack[-1];
    v_27 = stack[0];
    v_27 = times2(v_28, v_27);
    env = stack[-2];
    {
        LispObject fn = basic_elt(env, 3); // bcfi
        return (*qfn1(fn))(fn, v_27);
    }
v_8:
    v_29 = stack[-1];
    v_28 = stack[0];
    v_27 = basic_elt(env, 2); // times
    {   LispObject fn = basic_elt(env, 4); // bcint2op
    v_27 = (*qfn3(fn))(fn, v_29, v_28, v_27);
    }
    env = stack[-2];
    if (v_27 == nil) goto v_18;
    else goto v_17;
v_18:
    v_28 = stack[-1];
    v_27 = stack[0];
    {   LispObject fn = basic_elt(env, 5); // multsq
    v_27 = (*qfn2(fn))(fn, v_28, v_27);
    }
    env = stack[-2];
    {
        LispObject fn = basic_elt(env, 6); // bccheckz
        return (*qfn1(fn))(fn, v_27);
    }
v_17:
    goto v_6;
    v_27 = nil;
v_6:
    return onevalue(v_27);
}



setup_type const u02_setup[] =
{
    {"mchk",                    G0W2,     G1W2,     CC_mchk,  G3W2,     G4W2},
    {"quotsq",                  G0W2,     G1W2,     CC_quotsq,G3W2,     G4W2},
    {"tayexp-greaterp",         G0W2,     G1W2,     CC_tayexpKgreaterp,G3W2,G4W2},
    {"*d2q",                    G0W1,     CC_Hd2q,  G2W1,     G3W1,     G4W1},
    {"talp_simplt",             G0W1,     CC_talp_simplt,G2W1,G3W1,     G4W1},
    {"qqe_qoptailp",            G0W1,     CC_qqe_qoptailp,G2W1,G3W1,    G4W1},
    {"multdm",                  G0W2,     G1W2,     CC_multdm,G3W2,     G4W2},
    {"*q2a",                    G0W1,     CC_Hq2a,  G2W1,     G3W1,     G4W1},
    {":onep",                   G0W1,     CC_Tonep, G2W1,     G3W1,     G4W1},
    {"buchvevdivides?",         G0W2,     G1W2,     CC_buchvevdividesW,G3W2,G4W2},
    {"vevmtest?",               G0W2,     G1W2,     CC_vevmtestW,G3W2,  G4W2},
    {"sublistp",                G0W2,     G1W2,     CC_sublistp,G3W2,   G4W2},
    {"csl_normbf",              G0W1,     CC_csl_normbf,G2W1, G3W1,     G4W1},
    {"round*",                  G0W1,     CC_roundH,G2W1,     G3W1,     G4W1},
    {"collectindices_reversed", G0W2,     G1W2,     CC_collectindices_reversed,G3W2,G4W2},
    {"reval_without_mod",       G0W1,     CC_reval_without_mod,G2W1,G3W1,G4W1},
    {"mo=sprod",                G0W2,     G1W2,     CC_moMsprod,G3W2,   G4W2},
    {"pappl",                   G0W2,     G1W2,     CC_pappl, G3W2,     G4W2},
    {"*i2mod",                  G0W1,     CC_Hi2mod,G2W1,     G3W1,     G4W1},
    {"general-modular-plus",    G0W2,     G1W2,     CC_generalKmodularKplus,G3W2,G4W2},
    {"*d2n",                    G0W1,     CC_Hd2n,  G2W1,     G3W1,     G4W1},
    {"delcp",                   G0W1,     CC_delcp, G2W1,     G3W1,     G4W1},
    {"getpower",                G0W2,     G1W2,     CC_getpower,G3W2,   G4W2},
    {"sort",                    G0W2,     G1W2,     CC_sort,  G3W2,     G4W2},
    {"finde",                   G0W2,     G1W2,     CC_finde, G3W2,     G4W2},
    {"sfp",                     G0W1,     CC_sfp,   G2W1,     G3W1,     G4W1},
    {"tayexp-lessp",            G0W2,     G1W2,     CC_tayexpKlessp,G3W2,G4W2},
    {"get+vec+entry",           G0W2,     G1W2,     CC_getLvecLentry,G3W2,G4W2},
    {"rl_simplat1",             G0W2,     G1W2,     CC_rl_simplat1,G3W2,G4W2},
    {"mri_floorkernelp",        G0W1,     CC_mri_floorkernelp,G2W1,G3W1,G4W1},
    {"get_token",               CC_get_token,G1W0,  G2W0,     G3W0,     G4W0},
    {"xsimp",                   G0W1,     CC_xsimp, G2W1,     G3W1,     G4W1},
    {"prepsqxx",                G0W1,     CC_prepsqxx,G2W1,   G3W1,     G4W1},
    {"aeval*",                  G0W1,     CC_aevalH,G2W1,     G3W1,     G4W1},
    {"adddm",                   G0W2,     G1W2,     CC_adddm, G3W2,     G4W2},
    {"cali_bc_prod",            G0W2,     G1W2,     CC_cali_bc_prod,G3W2,G4W2},
    {"sieve_pv",                G0W2,     G1W2,     CC_sieve_pv,G3W2,   G4W2},
    {"lalr_closure",            G0W1,     CC_lalr_closure,G2W1,G3W1,    G4W1},
    {"list2wideid",             G0W1,     CC_list2wideid,G2W1,G3W1,     G4W1},
    {"rl_varlat",               G0W1,     CC_rl_varlat,G2W1,  G3W1,     G4W1},
    {"monomclone",              G0W1,     CC_monomclone,G2W1, G3W1,     G4W1},
    {"comfac-to-poly",          G0W1,     CC_comfacKtoKpoly,G2W1,G3W1,  G4W1},
    {"mtchk",                   G0W2,     G1W2,     CC_mtchk, G3W2,     G4W2},
    {"exptchksq",               G0W1,     CC_exptchksq,G2W1,  G3W1,     G4W1},
    {"talp_varlt",              G0W1,     CC_talp_varlt,G2W1, G3W1,     G4W1},
    {"lprim",                   G0W1,     CC_lprim, G2W1,     G3W1,     G4W1},
    {"notstring",               G0W1,     CC_notstring,G2W1,  G3W1,     G4W1},
    {"c:ordexn",                G0W2,     G1W2,     CC_cTordexn,G3W2,   G4W2},
    {"constp",                  G0W1,     CC_constp,G2W1,     G3W1,     G4W1},
    {"bczero?",                 G0W1,     CC_bczeroW,G2W1,    G3W1,     G4W1},
    {"multpfsq",                G0W2,     G1W2,     CC_multpfsq,G3W2,   G4W2},
    {"negnumberchk",            G0W1,     CC_negnumberchk,G2W1,G3W1,    G4W1},
    {"opmtch*",                 G0W1,     CC_opmtchH,G2W1,    G3W1,     G4W1},
    {"sinitl",                  G0W1,     CC_sinitl,G2W1,     G3W1,     G4W1},
    {"smemqlp",                 G0W2,     G1W2,     CC_smemqlp,G3W2,    G4W2},
    {"angles-equal",            G0W2,     G1W2,     CC_anglesKequal,G3W2,G4W2},
    {"pappl0",                  G0W2,     G1W2,     CC_pappl0,G3W2,     G4W2},
    {"rnonep:",                 G0W1,     CC_rnonepT,G2W1,    G3W1,     G4W1},
    {"multiply-by-constant-mod-p",G0W2,   G1W2,     CC_multiplyKbyKconstantKmodKp,G3W2,G4W2},
    {"lalr_prin_symbol",        G0W1,     CC_lalr_prin_symbol,G2W1,G3W1,G4W1},
    {"aex_mk",                  G0W2,     G1W2,     CC_aex_mk,G3W2,     G4W2},
    {"monomisdivisibleby",      G0W2,     G1W2,     CC_monomisdivisibleby,G3W2,G4W2},
    {"setcdr",                  G0W2,     G1W2,     CC_setcdr,G3W2,     G4W2},
    {"powers0",                 G0W2,     G1W2,     CC_powers0,G3W2,    G4W2},
    {"remove-free-vars-l",      G0W1,     CC_removeKfreeKvarsKl,G2W1,G3W1,G4W1},
    {"get+vec+dim",             G0W1,     CC_getLvecLdim,G2W1,G3W1,     G4W1},
    {"rl_ordatp",               G0W2,     G1W2,     CC_rl_ordatp,G3W2,  G4W2},
    {"qqe_qopaddp",             G0W1,     CC_qqe_qopaddp,G2W1,G3W1,     G4W1},
    {"attributes",              G0W2,     G1W2,     CC_attributes,G3W2, G4W2},
    {"fast-row-dim",            G0W1,     CC_fastKrowKdim,G2W1,G3W1,    G4W1},
    {"evmatrixcomp1",           G0W3,     G1W3,     G2W3,     CC_evmatrixcomp1,G4W3},
    {"i2rd*",                   G0W1,     CC_i2rdH, G2W1,     G3W1,     G4W1},
    {"getphystype*sq",          G0W1,     CC_getphystypeHsq,G2W1,G3W1,  G4W1},
    {"union_edges",             G0W2,     G1W2,     CC_union_edges,G3W2,G4W2},
    {"mo=modiv1",               G0W2,     G1W2,     CC_moMmodiv1,G3W2,  G4W2},
    {"unpkp",                   G0W1,     CC_unpkp, G2W1,     G3W1,     G4W1},
    {"modtimes:",               G0W2,     G1W2,     CC_modtimesT,G3W2,  G4W2},
    {"times-in-vector",         G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_timesKinKvector},
    {"gcdfd",                   G0W2,     G1W2,     CC_gcdfd, G3W2,     G4W2},
    {"cdrassoc",                G0W2,     G1W2,     CC_cdrassoc,G3W2,   G4W2},
    {"cl_atmlc",                G0W1,     CC_cl_atmlc,G2W1,   G3W1,     G4W1},
    {"delallasc",               G0W2,     G1W2,     CC_delallasc,G3W2,  G4W2},
    {"rank",                    G0W1,     CC_rank,  G2W1,     G3W1,     G4W1},
    {"sizchk",                  G0W2,     G1W2,     CC_sizchk,G3W2,     G4W2},
    {"rl_smcpknowl",            G0W1,     CC_rl_smcpknowl,G2W1,G3W1,    G4W1},
    {"qqe_qopheadp",            G0W1,     CC_qqe_qopheadp,G2W1,G3W1,    G4W1},
    {"lto_hashequalq",          G0W2,     G1W2,     CC_lto_hashequalq,G3W2,G4W2},
    {"get_content",             CC_get_content,G1W0,G2W0,     G3W0,     G4W0},
    {"ps:evaluate",             G0W2,     G1W2,     CC_psTevaluate,G3W2,G4W2},
    {":zerop",                  G0W1,     CC_Tzerop,G2W1,     G3W1,     G4W1},
    {"initcomb",                G0W1,     CC_initcomb,G2W1,   G3W1,     G4W1},
    {"bcprod",                  G0W2,     G1W2,     CC_bcprod,G3W2,     G4W2},
    {nullptr, 
        reinterpret_cast<no_args *>(
            reinterpret_cast<uintptr_t>("u02")),
        reinterpret_cast<one_arg *>(
            reinterpret_cast<uintptr_t>("169761 5971315 9509929")),
        nullptr, nullptr, nullptr}
};

// end of generated code
