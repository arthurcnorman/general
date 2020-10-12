
// $destdir/u29.c        Machine generated C code

// $Id$

#include "config.h"
#include "headers.h"



// Code for mkfil!*

static LispObject CC_mkfilH(LispObject env,
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
    v_40 = nil;
    v_39 = stack[0];
    v_39 = Lstringp(nil, v_39);
    env = stack[-1];
    if (v_39 == nil) goto v_10;
    v_39 = stack[0];
    goto v_8;
v_10:
    v_39 = stack[0];
    if (symbolp(v_39)) goto v_15;
    v_40 = stack[0];
    v_39 = basic_elt(env, 1); // "file name"
    {
        LispObject fn = basic_elt(env, 2); // typerr
        return (*qfn2(fn))(fn, v_40, v_39);
    }
v_15:
    v_39 = stack[0];
    if (!symbolp(v_39)) v_39 = nil;
    else { v_39 = qfastgets(v_39);
           if (v_39 != nil) { v_39 = elt(v_39, 17); // share
#ifdef RECORD_GET
             if (v_39 == SPID_NOPROP)
                record_get(elt(fastget_names, 17), 0),
                v_39 = nil;
             else record_get(elt(fastget_names, 17), 1),
                v_39 = lisp_true; }
           else record_get(elt(fastget_names, 17), 0); }
#else
             if (v_39 == SPID_NOPROP) v_39 = nil; else v_39 = lisp_true; }}
#endif
    if (v_39 == nil) goto v_25;
    v_39 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // eval
    v_39 = (*qfn1(fn))(fn, v_39);
    }
    env = stack[-1];
    v_40 = v_39;
    v_39 = Lstringp(nil, v_39);
    env = stack[-1];
    goto v_23;
v_25:
    v_39 = nil;
    goto v_23;
    v_39 = nil;
v_23:
    if (v_39 == nil) goto v_21;
    v_39 = v_40;
    goto v_8;
v_21:
    v_39 = stack[0];
    {
        LispObject fn = basic_elt(env, 4); // string!-downcase
        return (*qfn1(fn))(fn, v_39);
    }
    v_39 = nil;
v_8:
    return onevalue(v_39);
}



// Code for sortedtriplelistinsert

static LispObject CC_sortedtriplelistinsert(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    v_47 = stack[0];
    v_46 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_46 = Lgetv(nil, v_47, v_46);
    env = stack[-3];
    if (!car_legal(v_46)) v_46 = carerror(v_46); else
    v_46 = car(v_46);
    stack[-2] = v_46;
    v_46 = stack[-1];
    stack[-1] = v_46;
v_16:
    v_46 = stack[-1];
    if (!car_legal(v_46)) v_46 = carerror(v_46); else
    v_46 = car(v_46);
    if (v_46 == nil) goto v_19;
    v_46 = stack[-1];
    if (!car_legal(v_46)) v_47 = carerror(v_46); else
    v_47 = car(v_46);
    v_46 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_46 = Lgetv(nil, v_47, v_46);
    env = stack[-3];
    if (!car_legal(v_46)) v_47 = carerror(v_46); else
    v_47 = car(v_46);
    v_46 = stack[-2];
    {   LispObject fn = basic_elt(env, 1); // monomcompare
    v_47 = (*qfn2(fn))(fn, v_47, v_46);
    }
    env = stack[-3];
    v_46 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_47 == v_46) goto v_19;
    goto v_20;
v_19:
    goto v_15;
v_20:
    v_46 = stack[-1];
    if (!car_legal(v_46)) v_46 = cdrerror(v_46); else
    v_46 = cdr(v_46);
    stack[-1] = v_46;
    goto v_16;
v_15:
    stack[-2] = stack[-1];
    v_46 = stack[-1];
    if (!car_legal(v_46)) v_47 = carerror(v_46); else
    v_47 = car(v_46);
    v_46 = stack[-1];
    if (!car_legal(v_46)) v_46 = cdrerror(v_46); else
    v_46 = cdr(v_46);
    v_46 = cons(v_47, v_46);
    if (!car_legal(stack[-2])) rplacd_fails(stack[-2]);
    setcdr(stack[-2], v_46);
    v_47 = stack[-2];
    v_46 = stack[0];
    if (!car_legal(v_47)) rplaca_fails(v_47);
    setcar(v_47, v_46);
    v_46 = nil;
    return onevalue(v_46);
}



// Code for cquotegex

static LispObject CC_cquotegex(LispObject env,
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
    v_10 = qvalue(basic_elt(env, 1)); // !*guardian
    if (v_10 == nil) goto v_7;
    v_10 = basic_elt(env, 2); // gex
    goto v_5;
v_7:
    v_10 = nil;
v_5:
    return onevalue(v_10);
}



// Code for ofsf_facequal!*

static LispObject CC_ofsf_facequalH(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_28, v_29, v_30;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_29 = v_3;
    v_30 = v_2;
// end of prologue
    v_28 = qvalue(basic_elt(env, 1)); // !*rlsifac
    if (v_28 == nil) goto v_8;
    v_28 = qvalue(basic_elt(env, 2)); // !*rlsiexpla
    if (v_28 == nil) goto v_12;
    else goto v_11;
v_12:
    v_28 = qvalue(basic_elt(env, 3)); // !*rlsiexpl
    if (v_28 == nil) goto v_14;
    v_28 = basic_elt(env, 4); // or
    if (v_29 == v_28) goto v_17;
    else goto v_14;
v_17:
    goto v_11;
v_14:
    goto v_8;
v_11:
    v_28 = v_30;
    {
        LispObject fn = basic_elt(env, 6); // ofsf_facequal
        return (*qfn1(fn))(fn, v_28);
    }
v_8:
    v_29 = basic_elt(env, 5); // equal
    v_28 = nil;
    return list3(v_29, v_30, v_28);
    v_28 = nil;
    return onevalue(v_28);
}



// Code for talp_copy

static LispObject CC_talp_copy(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_69, v_70;
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
    v_70 = v_2;
// end of prologue
    v_69 = v_70;
    if (!consp(v_69)) goto v_9;
    else goto v_10;
v_9:
    v_69 = v_70;
    goto v_8;
v_10:
    v_69 = v_70;
    stack[-3] = v_69;
    v_69 = stack[-3];
    if (v_69 == nil) goto v_24;
    else goto v_25;
v_24:
    v_69 = nil;
    goto v_19;
v_25:
    v_69 = stack[-3];
    if (!car_legal(v_69)) v_69 = carerror(v_69); else
    v_69 = car(v_69);
    v_70 = v_69;
    v_69 = v_70;
    if (!consp(v_69)) goto v_34;
    else goto v_35;
v_34:
    v_69 = v_70;
    goto v_33;
v_35:
    v_69 = v_70;
    {   LispObject fn = basic_elt(env, 0); // talp_copy
    v_69 = (*qfn1(fn))(fn, v_69);
    }
    env = stack[-4];
    goto v_33;
    v_69 = nil;
v_33:
    v_69 = ncons(v_69);
    env = stack[-4];
    stack[-1] = v_69;
    stack[-2] = v_69;
v_20:
    v_69 = stack[-3];
    if (!car_legal(v_69)) v_69 = cdrerror(v_69); else
    v_69 = cdr(v_69);
    stack[-3] = v_69;
    v_69 = stack[-3];
    if (v_69 == nil) goto v_46;
    else goto v_47;
v_46:
    v_69 = stack[-2];
    goto v_19;
v_47:
    stack[0] = stack[-1];
    v_69 = stack[-3];
    if (!car_legal(v_69)) v_69 = carerror(v_69); else
    v_69 = car(v_69);
    v_70 = v_69;
    v_69 = v_70;
    if (!consp(v_69)) goto v_57;
    else goto v_58;
v_57:
    v_69 = v_70;
    goto v_56;
v_58:
    v_69 = v_70;
    {   LispObject fn = basic_elt(env, 0); // talp_copy
    v_69 = (*qfn1(fn))(fn, v_69);
    }
    env = stack[-4];
    goto v_56;
    v_69 = nil;
v_56:
    v_69 = ncons(v_69);
    env = stack[-4];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_69);
    v_69 = stack[-1];
    if (!car_legal(v_69)) v_69 = cdrerror(v_69); else
    v_69 = cdr(v_69);
    stack[-1] = v_69;
    goto v_20;
v_19:
    goto v_8;
v_8:
    return onevalue(v_69);
}



// Code for factor!-prim!-f

static LispObject CC_factorKprimKf(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_127, v_128, v_129;
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
    v_127 = qvalue(basic_elt(env, 1)); // ncmp!*
    if (v_127 == nil) goto v_13;
    stack[0] = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_128 = stack[-2];
    v_127 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_127 = cons(v_128, v_127);
    {
        LispObject v_134 = stack[0];
        return list2(v_134, v_127);
    }
v_13:
    v_127 = qvalue(basic_elt(env, 2)); // dmode!*
    if (v_127 == nil) goto v_23;
    v_128 = qvalue(basic_elt(env, 2)); // dmode!*
    v_127 = basic_elt(env, 3); // sqfrfactorfn
    v_127 = get(v_128, v_127);
    env = stack[-4];
    stack[-1] = v_127;
    if (v_127 == nil) goto v_23;
    v_127 = qvalue(basic_elt(env, 4)); // !*factor
    if (v_127 == nil) goto v_33;
    v_128 = stack[-1];
    v_127 = stack[-2];
    v_127 = Lapply1(nil, v_128, v_127);
    env = stack[-4];
    stack[0] = v_127;
    goto v_31;
v_33:
    stack[0] = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_128 = stack[-2];
    v_127 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_127 = cons(v_128, v_127);
    env = stack[-4];
    v_127 = list2(stack[0], v_127);
    env = stack[-4];
    stack[0] = v_127;
    goto v_31;
v_31:
    goto v_21;
v_23:
    v_127 = qvalue(basic_elt(env, 2)); // dmode!*
    if (!symbolp(v_127)) v_127 = nil;
    else { v_127 = qfastgets(v_127);
           if (v_127 != nil) { v_127 = elt(v_127, 3); // field
#ifdef RECORD_GET
             if (v_127 == SPID_NOPROP)
                record_get(elt(fastget_names, 3), 0),
                v_127 = nil;
             else record_get(elt(fastget_names, 3), 1),
                v_127 = lisp_true; }
           else record_get(elt(fastget_names, 3), 0); }
#else
             if (v_127 == SPID_NOPROP) v_127 = nil; else v_127 = lisp_true; }}
#endif
    if (v_127 == nil) goto v_50;
    v_127 = stack[-2];
    {   LispObject fn = basic_elt(env, 6); // lnc
    v_128 = (*qfn1(fn))(fn, v_127);
    }
    env = stack[-4];
    stack[-3] = v_128;
    v_127 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_127 = Lneq_2(nil, v_128, v_127);
    env = stack[-4];
    goto v_48;
v_50:
    v_127 = nil;
    goto v_48;
    v_127 = nil;
v_48:
    if (v_127 == nil) goto v_46;
    stack[0] = stack[-3];
    v_127 = stack[-3];
    {   LispObject fn = basic_elt(env, 7); // !:recip
    v_128 = (*qfn1(fn))(fn, v_127);
    }
    env = stack[-4];
    v_127 = stack[-2];
    {   LispObject fn = basic_elt(env, 8); // multd
    v_127 = (*qfn2(fn))(fn, v_128, v_127);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 9); // sqfrf
    v_127 = (*qfn1(fn))(fn, v_127);
    }
    env = stack[-4];
    v_127 = cons(stack[0], v_127);
    env = stack[-4];
    stack[0] = v_127;
    goto v_21;
v_46:
    v_127 = qvalue(basic_elt(env, 2)); // dmode!*
    if (!symbolp(v_127)) v_127 = nil;
    else { v_127 = qfastgets(v_127);
           if (v_127 != nil) { v_127 = elt(v_127, 27); // units
#ifdef RECORD_GET
             if (v_127 != SPID_NOPROP)
                record_get(elt(fastget_names, 27), 1);
             else record_get(elt(fastget_names, 27), 0),
                v_127 = nil; }
           else record_get(elt(fastget_names, 27), 0); }
#else
             if (v_127 == SPID_NOPROP) v_127 = nil; }}
#endif
    stack[-3] = v_127;
    if (v_127 == nil) goto v_68;
    v_127 = stack[-2];
    {   LispObject fn = basic_elt(env, 6); // lnc
    v_128 = (*qfn1(fn))(fn, v_127);
    }
    env = stack[-4];
    v_129 = v_128;
    v_127 = stack[-3];
    v_127 = Lassoc(nil, v_128, v_127);
    stack[-3] = v_127;
    if (v_127 == nil) goto v_68;
    stack[0] = v_129;
    v_127 = stack[-3];
    if (!car_legal(v_127)) v_128 = cdrerror(v_127); else
    v_128 = cdr(v_127);
    v_127 = stack[-2];
    {   LispObject fn = basic_elt(env, 8); // multd
    v_127 = (*qfn2(fn))(fn, v_128, v_127);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 9); // sqfrf
    v_127 = (*qfn1(fn))(fn, v_127);
    }
    env = stack[-4];
    v_127 = cons(stack[0], v_127);
    env = stack[-4];
    stack[0] = v_127;
    goto v_21;
v_68:
    stack[0] = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_127 = stack[-2];
    {   LispObject fn = basic_elt(env, 9); // sqfrf
    v_127 = (*qfn1(fn))(fn, v_127);
    }
    env = stack[-4];
    v_127 = cons(stack[0], v_127);
    env = stack[-4];
    stack[0] = v_127;
    goto v_21;
v_21:
    v_127 = stack[-1];
    if (v_127 == nil) goto v_93;
    v_129 = stack[-1];
    v_128 = qvalue(basic_elt(env, 2)); // dmode!*
    v_127 = basic_elt(env, 5); // factorfn
    v_127 = get(v_128, v_127);
    env = stack[-4];
    if (v_129 == v_127) goto v_96;
    else goto v_93;
v_96:
    v_127 = stack[0];
    goto v_9;
v_93:
    v_127 = stack[0];
    if (!car_legal(v_127)) v_127 = carerror(v_127); else
    v_127 = car(v_127);
    v_127 = ncons(v_127);
    env = stack[-4];
    stack[-3] = v_127;
    v_127 = stack[0];
    if (!car_legal(v_127)) v_127 = cdrerror(v_127); else
    v_127 = cdr(v_127);
    stack[0] = v_127;
v_108:
    v_127 = stack[0];
    if (v_127 == nil) goto v_113;
    else goto v_114;
v_113:
    goto v_107;
v_114:
    v_127 = stack[0];
    if (!car_legal(v_127)) v_127 = carerror(v_127); else
    v_127 = car(v_127);
    {   LispObject fn = basic_elt(env, 10); // factor!-prim!-sqfree!-f
    v_128 = (*qfn1(fn))(fn, v_127);
    }
    env = stack[-4];
    v_127 = stack[-3];
    {   LispObject fn = basic_elt(env, 11); // fac!-merge
    v_127 = (*qfn2(fn))(fn, v_128, v_127);
    }
    env = stack[-4];
    stack[-3] = v_127;
    v_127 = stack[0];
    if (!car_legal(v_127)) v_127 = cdrerror(v_127); else
    v_127 = cdr(v_127);
    stack[0] = v_127;
    goto v_108;
v_107:
    v_127 = stack[-3];
v_9:
    return onevalue(v_127);
}



// Code for evrevgradlexcomp

static LispObject CC_evrevgradlexcomp(LispObject env,
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
    stack[-1] = v_3;
    stack[-2] = v_2;
// end of prologue
v_7:
    v_55 = stack[-2];
    if (v_55 == nil) goto v_10;
    else goto v_11;
v_10:
    v_55 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_6;
v_11:
    v_55 = stack[-1];
    if (v_55 == nil) goto v_14;
    else goto v_15;
v_14:
    v_55 = basic_elt(env, 1); // (0)
    stack[-1] = v_55;
    goto v_7;
v_15:
    v_55 = stack[-2];
    if (!car_legal(v_55)) v_56 = carerror(v_55); else
    v_56 = car(v_55);
    v_55 = stack[-1];
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    {   LispObject fn = basic_elt(env, 2); // iequal
    v_55 = (*qfn2(fn))(fn, v_56, v_55);
    }
    env = stack[-4];
    if (v_55 == nil) goto v_19;
    v_55 = stack[-2];
    if (!car_legal(v_55)) v_55 = cdrerror(v_55); else
    v_55 = cdr(v_55);
    stack[-2] = v_55;
    v_55 = stack[-1];
    if (!car_legal(v_55)) v_55 = cdrerror(v_55); else
    v_55 = cdr(v_55);
    stack[-1] = v_55;
    goto v_7;
v_19:
    v_55 = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // evtdeg
    stack[0] = (*qfn1(fn))(fn, v_55);
    }
    env = stack[-4];
    v_55 = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // evtdeg
    v_55 = (*qfn1(fn))(fn, v_55);
    }
    env = stack[-4];
    stack[-3] = stack[0];
    stack[0] = v_55;
    v_56 = stack[-3];
    v_55 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // iequal
    v_55 = (*qfn2(fn))(fn, v_56, v_55);
    }
    env = stack[-4];
    if (v_55 == nil) goto v_40;
    v_56 = stack[-2];
    v_55 = stack[-1];
    {
        LispObject fn = basic_elt(env, 4); // evinvlexcomp
        return (*qfn2(fn))(fn, v_56, v_55);
    }
v_40:
    v_56 = stack[-3];
    v_55 = stack[0];
    if ((static_cast<std::intptr_t>(v_56) > static_cast<std::intptr_t>(v_55))) goto v_47;
    else goto v_48;
v_47:
    v_55 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_38;
v_48:
    v_55 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    goto v_38;
    v_55 = nil;
v_38:
    goto v_6;
    v_55 = nil;
v_6:
    return onevalue(v_55);
}



// Code for critical_element

static LispObject CC_critical_element(LispObject env,
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
    if (!car_legal(v_10)) v_10 = cdrerror(v_10); else
    v_10 = cdr(v_10);
    if (!car_legal(v_10)) v_10 = carerror(v_10); else
    v_10 = car(v_10);
        return Lapply1(nil, v_10, v_9);
}



// Code for bfplusn

static LispObject CC_bfplusn(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_18, v_19, v_20;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_19 = v_3;
    v_20 = v_2;
// end of prologue
    v_18 = v_20;
    if (!consp(v_18)) goto v_7;
    else goto v_8;
v_7:
    v_18 = v_20;
    return plus2(v_18, v_19);
v_8:
    v_18 = v_20;
    {
        LispObject fn = basic_elt(env, 1); // plus!:
        return (*qfn2(fn))(fn, v_18, v_19);
    }
    v_18 = nil;
    return onevalue(v_18);
}



// Code for st_consolidate

static LispObject CC_st_consolidate(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_133, v_134;
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
    stack[-1] = nil;
    v_133 = stack[-3];
    if (v_133 == nil) goto v_11;
    else goto v_12;
v_11:
    v_133 = nil;
    goto v_8;
v_12:
    v_133 = stack[-3];
    if (!car_legal(v_133)) v_133 = cdrerror(v_133); else
    v_133 = cdr(v_133);
    if (!car_legal(v_133)) v_133 = carerror(v_133); else
    v_133 = car(v_133);
    if (is_number(v_133)) goto v_17;
    else goto v_18;
v_17:
    v_133 = stack[-3];
    goto v_8;
v_18:
    v_133 = lisp_true;
    stack[-2] = v_133;
    v_133 = stack[-3];
    if (!car_legal(v_133)) v_133 = cdrerror(v_133); else
    v_133 = cdr(v_133);
    v_133 = Lreverse(nil, v_133);
    env = stack[-5];
    stack[0] = v_133;
v_27:
    v_133 = stack[0];
    if (v_133 == nil) goto v_33;
    else goto v_34;
v_33:
    goto v_26;
v_34:
    v_133 = stack[0];
    if (!car_legal(v_133)) v_133 = carerror(v_133); else
    v_133 = car(v_133);
    {   LispObject fn = basic_elt(env, 0); // st_consolidate
    v_133 = (*qfn1(fn))(fn, v_133);
    }
    env = stack[-5];
    v_134 = v_133;
    if (v_134 == nil) goto v_45;
    v_134 = v_133;
    if (!car_legal(v_134)) v_134 = cdrerror(v_134); else
    v_134 = cdr(v_134);
    if (!car_legal(v_134)) v_134 = cdrerror(v_134); else
    v_134 = cdr(v_134);
    if (v_134 == nil) goto v_50;
    v_134 = nil;
    stack[-2] = v_134;
    goto v_48;
v_50:
    v_134 = basic_elt(env, 1); // !*
    if (!car_legal(v_133)) v_133 = cdrerror(v_133); else
    v_133 = cdr(v_133);
    if (!car_legal(v_133)) v_133 = carerror(v_133); else
    v_133 = car(v_133);
    v_133 = list2(v_134, v_133);
    env = stack[-5];
    goto v_48;
v_48:
    v_134 = v_133;
    v_133 = stack[-1];
    v_133 = cons(v_134, v_133);
    env = stack[-5];
    stack[-1] = v_133;
    goto v_43;
v_45:
v_43:
    v_133 = stack[0];
    if (!car_legal(v_133)) v_133 = cdrerror(v_133); else
    v_133 = cdr(v_133);
    stack[0] = v_133;
    goto v_27;
v_26:
    v_133 = stack[-1];
    if (v_133 == nil) goto v_72;
    v_133 = stack[-1];
    if (!car_legal(v_133)) v_133 = cdrerror(v_133); else
    v_133 = cdr(v_133);
    if (v_133 == nil) goto v_76;
    else goto v_77;
v_76:
    v_133 = stack[-1];
    if (!car_legal(v_133)) v_133 = carerror(v_133); else
    v_133 = car(v_133);
    goto v_8;
v_77:
    v_133 = stack[-2];
    if (v_133 == nil) goto v_85;
    v_133 = stack[-1];
    stack[-4] = v_133;
    v_133 = stack[-4];
    if (v_133 == nil) goto v_96;
    else goto v_97;
v_96:
    v_133 = nil;
    goto v_91;
v_97:
    v_133 = stack[-4];
    if (!car_legal(v_133)) v_133 = carerror(v_133); else
    v_133 = car(v_133);
    if (!car_legal(v_133)) v_133 = cdrerror(v_133); else
    v_133 = cdr(v_133);
    if (!car_legal(v_133)) v_133 = carerror(v_133); else
    v_133 = car(v_133);
    v_133 = ncons(v_133);
    env = stack[-5];
    stack[-1] = v_133;
    stack[-2] = v_133;
v_92:
    v_133 = stack[-4];
    if (!car_legal(v_133)) v_133 = cdrerror(v_133); else
    v_133 = cdr(v_133);
    stack[-4] = v_133;
    v_133 = stack[-4];
    if (v_133 == nil) goto v_111;
    else goto v_112;
v_111:
    v_133 = stack[-2];
    goto v_91;
v_112:
    stack[0] = stack[-1];
    v_133 = stack[-4];
    if (!car_legal(v_133)) v_133 = carerror(v_133); else
    v_133 = car(v_133);
    if (!car_legal(v_133)) v_133 = cdrerror(v_133); else
    v_133 = cdr(v_133);
    if (!car_legal(v_133)) v_133 = carerror(v_133); else
    v_133 = car(v_133);
    v_133 = ncons(v_133);
    env = stack[-5];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_133);
    v_133 = stack[-1];
    if (!car_legal(v_133)) v_133 = cdrerror(v_133); else
    v_133 = cdr(v_133);
    stack[-1] = v_133;
    goto v_92;
v_91:
    stack[-1] = v_133;
    goto v_83;
v_85:
v_83:
    v_133 = stack[-3];
    if (!car_legal(v_133)) v_134 = carerror(v_133); else
    v_134 = car(v_133);
    v_133 = stack[-1];
    return cons(v_134, v_133);
v_72:
    v_133 = nil;
    goto v_8;
    v_133 = nil;
v_8:
    return onevalue(v_133);
}



// Code for ratminus

static LispObject CC_ratminus(LispObject env,
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
    v_10 = stack[0];
    if (!car_legal(v_10)) v_10 = carerror(v_10); else
    v_10 = car(v_10);
    v_11 = negate(v_10);
    v_10 = stack[0];
    if (!car_legal(v_10)) v_10 = cdrerror(v_10); else
    v_10 = cdr(v_10);
    return cons(v_11, v_10);
}



// Code for cde_odd_derivatives

static LispObject CC_cde_odd_derivatives(LispObject env,
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
    real_push(nil, nil, nil, nil, nil);
    push(nil, nil, nil);
    stack_popper stack_popper_var(9);
// copy arguments values to proper place
    stack[-6] = v_2;
// end of prologue
    v_68 = qvalue(basic_elt(env, 1)); // n_all_parametric_ext
    v_67 = qvalue(basic_elt(env, 2)); // n_all_principal_ext
    v_67 = plus2(v_68, v_67);
    env = stack[-8];
    stack[-5] = v_67;
    v_67 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-4] = v_67;
v_15:
    v_68 = stack[-5];
    v_67 = stack[-4];
    v_67 = difference2(v_68, v_67);
    env = stack[-8];
    v_67 = Lminusp(nil, v_67);
    env = stack[-8];
    if (v_67 == nil) goto v_20;
    v_67 = nil;
    goto v_14;
v_20:
    v_68 = basic_elt(env, 3); // svf_ext
    v_67 = stack[-4];
    {   LispObject fn = basic_elt(env, 4); // mkid
    v_67 = (*qfn2(fn))(fn, v_68, v_67);
    }
    env = stack[-8];
    stack[-7] = v_67;
    v_69 = stack[-7];
    v_68 = nil;
    v_67 = stack[-6];
    {   LispObject fn = basic_elt(env, 5); // super_vectorfield
    v_67 = (*qfn3(fn))(fn, v_69, v_68, v_67);
    }
    env = stack[-8];
    v_67 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-3] = v_67;
v_36:
    v_68 = stack[-5];
    v_67 = stack[-3];
    v_67 = difference2(v_68, v_67);
    env = stack[-8];
    v_67 = Lminusp(nil, v_67);
    env = stack[-8];
    if (v_67 == nil) goto v_41;
    goto v_35;
v_41:
    stack[-2] = stack[-7];
    stack[-1] = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[0] = stack[-3];
    v_68 = stack[-4];
    v_67 = stack[-3];
    v_67 = Leqn_2(nil, v_68, v_67);
    env = stack[-8];
    if (v_67 == nil) goto v_55;
    v_67 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_53;
v_55:
    v_67 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_53;
    v_67 = nil;
v_53:
    v_67 = ncons(v_67);
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 6); // set_svf
    v_67 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_67);
    }
    env = stack[-8];
    v_67 = stack[-3];
    v_67 = add1(v_67);
    env = stack[-8];
    stack[-3] = v_67;
    goto v_36;
v_35:
    v_67 = stack[-4];
    v_67 = add1(v_67);
    env = stack[-8];
    stack[-4] = v_67;
    goto v_15;
v_14:
    return onevalue(v_67);
}



// Code for hasarg

static LispObject CC_hasarg(LispObject env,
                         LispObject v_3, LispObject v_4)
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
        push(v_3,v_4);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_4,v_3);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_4;
    v_46 = v_3;
// end of prologue
// Binding name
// FLUIDBIND: reloadenv=2 litvec-offset=1 saveloc=1
{   bind_fluid_stack bind_fluid_var(-2, 1, -1);
    setvalue(basic_elt(env, 1), v_46); // name
    v_47 = qvalue(basic_elt(env, 1)); // name
    v_46 = qvalue(basic_elt(env, 2)); // haveargs!*
    v_46 = cons(v_47, v_46);
    env = stack[-2];
    setvalue(basic_elt(env, 2), v_46); // haveargs!*
    v_47 = stack[0];
    v_46 = qvalue(basic_elt(env, 3)); // maxarg!*
    v_46 = static_cast<LispObject>(greaterp2(v_47, v_46));
    v_46 = v_46 ? lisp_true : nil;
    env = stack[-2];
    if (v_46 == nil) goto v_17;
    v_46 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {   LispObject fn = basic_elt(env, 9); // qerline
    v_46 = (*qfn1(fn))(fn, v_46);
    }
    env = stack[-2];
    v_46 = basic_elt(env, 4); // "**** "
    v_46 = Lprinc(nil, v_46);
    env = stack[-2];
    v_46 = qvalue(basic_elt(env, 1)); // name
    v_46 = Lprin(nil, v_46);
    env = stack[-2];
    v_46 = basic_elt(env, 5); // " has "
    v_46 = Lprinc(nil, v_46);
    env = stack[-2];
    v_46 = stack[0];
    v_46 = Lprinc(nil, v_46);
    env = stack[-2];
    v_46 = basic_elt(env, 6); // " arguments"
    v_46 = Lprinc(nil, v_46);
    env = stack[-2];
    v_46 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {   LispObject fn = basic_elt(env, 10); // newline
    v_46 = (*qfn1(fn))(fn, v_46);
    }
    env = stack[-2];
    goto v_15;
v_17:
v_15:
    v_47 = qvalue(basic_elt(env, 1)); // name
    v_46 = basic_elt(env, 7); // bldmsg
    if (v_47 == v_46) goto v_38;
    v_48 = qvalue(basic_elt(env, 1)); // name
    v_47 = basic_elt(env, 8); // number!-of!-args
    v_46 = stack[0];
    v_46 = Lputprop(nil, v_48, v_47, v_46);
    goto v_36;
v_38:
    v_46 = nil;
v_36:
    ;}  // end of a binding scope
    return onevalue(v_46);
}



// Code for ofsf_posvarp

static LispObject CC_ofsf_posvarp(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_183, v_184, v_185, v_186;
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
    v_185 = nil;
    v_183 = stack[-1];
    if (!consp(v_183)) goto v_13;
    else goto v_14;
v_13:
    v_183 = stack[-1];
    goto v_12;
v_14:
    v_183 = stack[-1];
    if (!car_legal(v_183)) v_183 = carerror(v_183); else
    v_183 = car(v_183);
    goto v_12;
    v_183 = nil;
v_12:
    v_184 = v_183;
    v_183 = basic_elt(env, 1); // and
    if (v_184 == v_183) goto v_23;
    else goto v_24;
v_23:
    v_183 = stack[-1];
    if (!car_legal(v_183)) v_183 = cdrerror(v_183); else
    v_183 = cdr(v_183);
    stack[-2] = v_183;
v_31:
    v_183 = v_185;
    if (v_183 == nil) goto v_38;
    else goto v_39;
v_38:
    v_183 = stack[-2];
    goto v_37;
v_39:
    v_183 = nil;
    goto v_37;
    v_183 = nil;
v_37:
    if (v_183 == nil) goto v_34;
    else goto v_35;
v_34:
    goto v_30;
v_35:
    v_183 = stack[-2];
    if (!car_legal(v_183)) v_183 = carerror(v_183); else
    v_183 = car(v_183);
    v_184 = v_183;
    v_183 = stack[-2];
    if (!car_legal(v_183)) v_183 = cdrerror(v_183); else
    v_183 = cdr(v_183);
    stack[-2] = v_183;
    v_183 = v_184;
    v_186 = v_183;
    v_184 = stack[-1];
    v_183 = basic_elt(env, 2); // true
    if (v_184 == v_183) goto v_65;
    else goto v_66;
v_65:
    v_183 = lisp_true;
    goto v_64;
v_66:
    v_184 = stack[-1];
    v_183 = basic_elt(env, 3); // false
    v_183 = (v_184 == v_183 ? lisp_true : nil);
    goto v_64;
    v_183 = nil;
v_64:
    if (v_183 == nil) goto v_62;
    v_183 = lisp_true;
    goto v_60;
v_62:
    v_184 = stack[-1];
    v_183 = basic_elt(env, 4); // or
    if (v_184 == v_183) goto v_92;
    else goto v_93;
v_92:
    v_183 = lisp_true;
    goto v_91;
v_93:
    v_184 = stack[-1];
    v_183 = basic_elt(env, 1); // and
    v_183 = (v_184 == v_183 ? lisp_true : nil);
    goto v_91;
    v_183 = nil;
v_91:
    if (v_183 == nil) goto v_89;
    v_183 = lisp_true;
    goto v_87;
v_89:
    v_184 = stack[-1];
    v_183 = basic_elt(env, 5); // not
    v_183 = (v_184 == v_183 ? lisp_true : nil);
    goto v_87;
    v_183 = nil;
v_87:
    if (v_183 == nil) goto v_85;
    v_183 = lisp_true;
    goto v_83;
v_85:
    v_184 = stack[-1];
    v_183 = basic_elt(env, 6); // impl
    if (v_184 == v_183) goto v_113;
    else goto v_114;
v_113:
    v_183 = lisp_true;
    goto v_112;
v_114:
    v_184 = stack[-1];
    v_183 = basic_elt(env, 7); // repl
    if (v_184 == v_183) goto v_122;
    else goto v_123;
v_122:
    v_183 = lisp_true;
    goto v_121;
v_123:
    v_184 = stack[-1];
    v_183 = basic_elt(env, 8); // equiv
    v_183 = (v_184 == v_183 ? lisp_true : nil);
    goto v_121;
    v_183 = nil;
v_121:
    goto v_112;
    v_183 = nil;
v_112:
    goto v_83;
    v_183 = nil;
v_83:
    if (v_183 == nil) goto v_81;
    v_183 = lisp_true;
    goto v_79;
v_81:
    v_184 = stack[-1];
    v_183 = basic_elt(env, 9); // ex
    if (v_184 == v_183) goto v_141;
    else goto v_142;
v_141:
    v_183 = lisp_true;
    goto v_140;
v_142:
    v_184 = stack[-1];
    v_183 = basic_elt(env, 10); // all
    v_183 = (v_184 == v_183 ? lisp_true : nil);
    goto v_140;
    v_183 = nil;
v_140:
    if (v_183 == nil) goto v_138;
    v_183 = lisp_true;
    goto v_136;
v_138:
    v_184 = stack[-1];
    v_183 = basic_elt(env, 11); // bex
    if (v_184 == v_183) goto v_160;
    else goto v_161;
v_160:
    v_183 = lisp_true;
    goto v_159;
v_161:
    v_184 = stack[-1];
    v_183 = basic_elt(env, 12); // ball
    v_183 = (v_184 == v_183 ? lisp_true : nil);
    goto v_159;
    v_183 = nil;
v_159:
    if (v_183 == nil) goto v_157;
    v_183 = lisp_true;
    goto v_155;
v_157:
    v_183 = stack[-1];
    if (!symbolp(v_183)) v_183 = nil;
    else { v_183 = qfastgets(v_183);
           if (v_183 != nil) { v_183 = elt(v_183, 21); // rl_external
#ifdef RECORD_GET
             if (v_183 != SPID_NOPROP)
                record_get(elt(fastget_names, 21), 1);
             else record_get(elt(fastget_names, 21), 0),
                v_183 = nil; }
           else record_get(elt(fastget_names, 21), 0); }
#else
             if (v_183 == SPID_NOPROP) v_183 = nil; }}
#endif
    goto v_155;
    v_183 = nil;
v_155:
    goto v_136;
    v_183 = nil;
v_136:
    goto v_79;
    v_183 = nil;
v_79:
    goto v_60;
    v_183 = nil;
v_60:
    if (v_183 == nil) goto v_57;
    else goto v_58;
v_57:
    v_184 = v_186;
    v_183 = stack[0];
    {   LispObject fn = basic_elt(env, 13); // ofsf_posvarpat
    v_183 = (*qfn2(fn))(fn, v_184, v_183);
    }
    env = stack[-3];
    v_185 = v_183;
    goto v_56;
v_58:
v_56:
    goto v_31;
v_30:
    v_183 = v_185;
    goto v_10;
v_24:
    v_184 = stack[-1];
    v_183 = stack[0];
    {
        LispObject fn = basic_elt(env, 13); // ofsf_posvarpat
        return (*qfn2(fn))(fn, v_184, v_183);
    }
v_10:
    return onevalue(v_183);
}



// Code for rndifference!:

static LispObject CC_rndifferenceT(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    v_28 = stack[-1];
    if (!car_legal(v_28)) v_28 = cdrerror(v_28); else
    v_28 = cdr(v_28);
    if (!car_legal(v_28)) v_29 = carerror(v_28); else
    v_29 = car(v_28);
    v_28 = stack[0];
    if (!car_legal(v_28)) v_28 = cdrerror(v_28); else
    v_28 = cdr(v_28);
    if (!car_legal(v_28)) v_28 = cdrerror(v_28); else
    v_28 = cdr(v_28);
    stack[-2] = times2(v_29, v_28);
    env = stack[-3];
    v_28 = stack[-1];
    if (!car_legal(v_28)) v_28 = cdrerror(v_28); else
    v_28 = cdr(v_28);
    if (!car_legal(v_28)) v_29 = cdrerror(v_28); else
    v_29 = cdr(v_28);
    v_28 = stack[0];
    if (!car_legal(v_28)) v_28 = cdrerror(v_28); else
    v_28 = cdr(v_28);
    if (!car_legal(v_28)) v_28 = carerror(v_28); else
    v_28 = car(v_28);
    v_28 = times2(v_29, v_28);
    env = stack[-3];
    stack[-2] = difference2(stack[-2], v_28);
    env = stack[-3];
    v_28 = stack[-1];
    if (!car_legal(v_28)) v_28 = cdrerror(v_28); else
    v_28 = cdr(v_28);
    if (!car_legal(v_28)) v_29 = cdrerror(v_28); else
    v_29 = cdr(v_28);
    v_28 = stack[0];
    if (!car_legal(v_28)) v_28 = cdrerror(v_28); else
    v_28 = cdr(v_28);
    if (!car_legal(v_28)) v_28 = cdrerror(v_28); else
    v_28 = cdr(v_28);
    v_28 = times2(v_29, v_28);
    env = stack[-3];
    {
        LispObject v_33 = stack[-2];
        LispObject fn = basic_elt(env, 1); // mkrn
        return (*qfn2(fn))(fn, v_33, v_28);
    }
}



// Code for mk!+trace

static LispObject CC_mkLtrace(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[-1] = v_2;
// end of prologue
    v_49 = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // squared!+matrix!+p
    v_49 = (*qfn1(fn))(fn, v_49);
    }
    env = stack[-3];
    if (v_49 == nil) goto v_10;
    else goto v_11;
v_10:
    v_49 = basic_elt(env, 1); // "no square matrix in add"
    {   LispObject fn = basic_elt(env, 4); // rederr
    v_49 = (*qfn1(fn))(fn, v_49);
    }
    env = stack[-3];
    goto v_9;
v_11:
v_9:
    v_50 = nil;
    v_49 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_49 = cons(v_50, v_49);
    env = stack[-3];
    stack[0] = v_49;
    v_49 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-2] = v_49;
v_22:
    v_49 = stack[-1];
    {   LispObject fn = basic_elt(env, 5); // get!+row!+nr
    v_50 = (*qfn1(fn))(fn, v_49);
    }
    env = stack[-3];
    v_49 = stack[-2];
    v_49 = difference2(v_50, v_49);
    env = stack[-3];
    v_49 = Lminusp(nil, v_49);
    env = stack[-3];
    if (v_49 == nil) goto v_27;
    goto v_21;
v_27:
    v_51 = stack[-1];
    v_50 = stack[-2];
    v_49 = stack[-2];
    {   LispObject fn = basic_elt(env, 6); // get!+mat!+entry
    v_49 = (*qfn3(fn))(fn, v_51, v_50, v_49);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 7); // addsq
    v_49 = (*qfn2(fn))(fn, stack[0], v_49);
    }
    env = stack[-3];
    stack[0] = v_49;
    v_49 = stack[-2];
    v_49 = add1(v_49);
    env = stack[-3];
    stack[-2] = v_49;
    goto v_22;
v_21:
    v_49 = lisp_true;
// Binding !*sub2
// FLUIDBIND: reloadenv=3 litvec-offset=2 saveloc=1
{   bind_fluid_stack bind_fluid_var(-3, 2, -1);
    setvalue(basic_elt(env, 2), v_49); // !*sub2
    v_49 = stack[0];
    {   LispObject fn = basic_elt(env, 8); // subs2
    v_49 = (*qfn1(fn))(fn, v_49);
    }
    stack[0] = v_49;
    ;}  // end of a binding scope
    v_49 = stack[0];
    return onevalue(v_49);
}



// Code for talp_specsubat

static LispObject CC_talp_specsubat(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    stack[-2] = v_4;
    stack[-3] = v_3;
    stack[-4] = v_2;
// end of prologue
    v_20 = stack[-2];
    {   LispObject fn = basic_elt(env, 1); // talp_op
    stack[-5] = (*qfn1(fn))(fn, v_20);
    }
    env = stack[-6];
    stack[-1] = stack[-4];
    stack[0] = stack[-3];
    v_20 = stack[-2];
    {   LispObject fn = basic_elt(env, 2); // talp_arg2l
    v_20 = (*qfn1(fn))(fn, v_20);
    }
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 3); // talp_specsubt
    stack[0] = (*qfn3(fn))(fn, stack[-1], stack[0], v_20);
    }
    env = stack[-6];
    stack[-1] = stack[-4];
    v_20 = stack[-2];
    {   LispObject fn = basic_elt(env, 4); // talp_arg2r
    v_20 = (*qfn1(fn))(fn, v_20);
    }
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 3); // talp_specsubt
    v_20 = (*qfn3(fn))(fn, stack[-1], stack[-3], v_20);
    }
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 5); // talp_mk2
    v_20 = (*qfn3(fn))(fn, stack[-5], stack[0], v_20);
    }
    env = stack[-6];
    {
        LispObject fn = basic_elt(env, 6); // talp_simpat
        return (*qfn1(fn))(fn, v_20);
    }
}



// Code for vdp_sugar

static LispObject CC_vdp_sugar(LispObject env,
                         LispObject v_2)
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
    v_23 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // vdp_zero!?
    v_23 = (*qfn1(fn))(fn, v_23);
    }
    env = stack[-1];
    if (v_23 == nil) goto v_8;
    else goto v_6;
v_8:
    v_23 = qvalue(basic_elt(env, 1)); // !*cgbsugar
    if (v_23 == nil) goto v_6;
    goto v_7;
v_6:
    v_23 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_5;
v_7:
    v_24 = stack[0];
    v_23 = basic_elt(env, 2); // sugar
    {   LispObject fn = basic_elt(env, 4); // vdp_getprop
    v_23 = (*qfn2(fn))(fn, v_24, v_23);
    }
    if (v_23 == nil) goto v_18;
    else goto v_17;
v_18:
    v_23 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
v_17:
    goto v_5;
    v_23 = nil;
v_5:
    return onevalue(v_23);
}



// Code for unresidp

static LispObject CC_unresidp(LispObject env,
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
    v_9 = qvalue(basic_elt(env, 1)); // !*reservedops!*
    v_8 = Lmemq(nil, v_8, v_9);
    v_8 = (v_8 == nil ? lisp_true : nil);
    return onevalue(v_8);
}



// Code for physop!-multfnc

static LispObject CC_physopKmultfnc(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_243, v_244, v_245;
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
    v_243 = stack[-2];
    if (!car_legal(v_243)) v_243 = carerror(v_243); else
    v_243 = car(v_243);
    if (!car_legal(v_243)) stack[0] = cdrerror(v_243); else
    stack[0] = cdr(v_243);
    v_243 = stack[-1];
    if (!car_legal(v_243)) v_243 = carerror(v_243); else
    v_243 = car(v_243);
    v_243 = ncons(v_243);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 3); // physop!-multf
    v_243 = (*qfn2(fn))(fn, stack[0], v_243);
    }
    env = stack[-4];
    stack[-3] = v_243;
    v_243 = stack[-3];
    if (v_243 == nil) goto v_18;
    else goto v_19;
v_18:
    goto v_17;
v_19:
    v_243 = stack[-3];
    if (!consp(v_243)) goto v_30;
    else goto v_31;
v_30:
    v_243 = lisp_true;
    goto v_29;
v_31:
    v_243 = stack[-3];
    if (!car_legal(v_243)) v_243 = carerror(v_243); else
    v_243 = car(v_243);
    v_243 = (consp(v_243) ? nil : lisp_true);
    goto v_29;
    v_243 = nil;
v_29:
    if (v_243 == nil) goto v_26;
    else goto v_27;
v_26:
    v_243 = stack[-3];
    if (!car_legal(v_243)) v_243 = carerror(v_243); else
    v_243 = car(v_243);
    if (!car_legal(v_243)) v_243 = carerror(v_243); else
    v_243 = car(v_243);
    if (!car_legal(v_243)) v_244 = carerror(v_243); else
    v_244 = car(v_243);
    v_243 = stack[-2];
    if (!car_legal(v_243)) v_243 = carerror(v_243); else
    v_243 = car(v_243);
    if (!car_legal(v_243)) v_243 = carerror(v_243); else
    v_243 = car(v_243);
    if (!car_legal(v_243)) v_243 = carerror(v_243); else
    v_243 = car(v_243);
    if (v_244 == v_243) goto v_41;
    else goto v_42;
v_41:
    v_243 = stack[-3];
    if (!car_legal(v_243)) v_243 = carerror(v_243); else
    v_243 = car(v_243);
    if (!car_legal(v_243)) v_243 = carerror(v_243); else
    v_243 = car(v_243);
    if (!car_legal(v_243)) v_243 = carerror(v_243); else
    v_243 = car(v_243);
    {   LispObject fn = basic_elt(env, 4); // physopp
    v_243 = (*qfn1(fn))(fn, v_243);
    }
    env = stack[-4];
    if (v_243 == nil) goto v_53;
    else goto v_54;
v_53:
    v_243 = lisp_true;
    goto v_52;
v_54:
    v_243 = qvalue(basic_elt(env, 1)); // !*contract2
    goto v_52;
    v_243 = nil;
v_52:
    goto v_40;
v_42:
    v_243 = nil;
    goto v_40;
    v_243 = nil;
v_40:
    goto v_25;
v_27:
    v_243 = nil;
    goto v_25;
    v_243 = nil;
v_25:
    if (v_243 == nil) goto v_23;
    v_243 = stack[-2];
    if (!car_legal(v_243)) v_243 = carerror(v_243); else
    v_243 = car(v_243);
    if (!car_legal(v_243)) v_243 = carerror(v_243); else
    v_243 = car(v_243);
    if (!car_legal(v_243)) stack[0] = carerror(v_243); else
    stack[0] = car(v_243);
    v_243 = stack[-2];
    if (!car_legal(v_243)) v_243 = carerror(v_243); else
    v_243 = car(v_243);
    if (!car_legal(v_243)) v_243 = carerror(v_243); else
    v_243 = car(v_243);
    if (!car_legal(v_243)) v_244 = cdrerror(v_243); else
    v_244 = cdr(v_243);
    v_243 = stack[-3];
    if (!car_legal(v_243)) v_243 = carerror(v_243); else
    v_243 = car(v_243);
    if (!car_legal(v_243)) v_243 = carerror(v_243); else
    v_243 = car(v_243);
    if (!car_legal(v_243)) v_243 = cdrerror(v_243); else
    v_243 = cdr(v_243);
    v_243 = plus2(v_244, v_243);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 5); // mkspm
    v_243 = (*qfn2(fn))(fn, stack[0], v_243);
    }
    env = stack[-4];
    v_245 = v_243;
    if (v_243 == nil) goto v_73;
    else goto v_74;
v_73:
    v_243 = nil;
    stack[0] = v_243;
    goto v_72;
v_74:
    v_244 = v_245;
    v_243 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_244 == v_243) goto v_90;
    else goto v_91;
v_90:
    v_243 = stack[-3];
    if (!car_legal(v_243)) v_243 = carerror(v_243); else
    v_243 = car(v_243);
    if (!car_legal(v_243)) v_243 = cdrerror(v_243); else
    v_243 = cdr(v_243);
    stack[0] = v_243;
    goto v_72;
v_91:
    v_244 = v_245;
    v_243 = stack[-3];
    if (!car_legal(v_243)) v_243 = carerror(v_243); else
    v_243 = car(v_243);
    if (!car_legal(v_243)) v_243 = cdrerror(v_243); else
    v_243 = cdr(v_243);
    v_243 = cons(v_244, v_243);
    env = stack[-4];
    v_243 = ncons(v_243);
    env = stack[-4];
    stack[0] = v_243;
    goto v_72;
    stack[0] = nil;
v_72:
    v_243 = stack[-2];
    if (!car_legal(v_243)) v_243 = carerror(v_243); else
    v_243 = car(v_243);
    if (!car_legal(v_243)) v_244 = carerror(v_243); else
    v_244 = car(v_243);
    v_243 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_243 = cons(v_244, v_243);
    env = stack[-4];
    v_244 = ncons(v_243);
    env = stack[-4];
    v_243 = stack[-3];
    if (!car_legal(v_243)) v_243 = cdrerror(v_243); else
    v_243 = cdr(v_243);
    {   LispObject fn = basic_elt(env, 3); // physop!-multf
    v_243 = (*qfn2(fn))(fn, v_244, v_243);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 6); // addf
    v_243 = (*qfn2(fn))(fn, stack[0], v_243);
    }
    env = stack[-4];
    stack[-3] = v_243;
    goto v_17;
v_23:
    v_243 = stack[-2];
    if (!car_legal(v_243)) v_243 = carerror(v_243); else
    v_243 = car(v_243);
    if (!car_legal(v_243)) v_243 = carerror(v_243); else
    v_243 = car(v_243);
    if (!car_legal(v_243)) v_243 = carerror(v_243); else
    v_243 = car(v_243);
    if (!consp(v_243)) goto v_118;
    else goto v_119;
v_118:
    v_243 = stack[-2];
    if (!car_legal(v_243)) v_243 = carerror(v_243); else
    v_243 = car(v_243);
    if (!car_legal(v_243)) v_243 = carerror(v_243); else
    v_243 = car(v_243);
    if (!car_legal(v_243)) v_243 = carerror(v_243); else
    v_243 = car(v_243);
    if (!symbolp(v_243)) v_243 = nil;
    else { v_243 = qfastgets(v_243);
           if (v_243 != nil) { v_243 = elt(v_243, 0); // noncom
#ifdef RECORD_GET
             if (v_243 == SPID_NOPROP)
                record_get(elt(fastget_names, 0), 0),
                v_243 = nil;
             else record_get(elt(fastget_names, 0), 1),
                v_243 = lisp_true; }
           else record_get(elt(fastget_names, 0), 0); }
#else
             if (v_243 == SPID_NOPROP) v_243 = nil; else v_243 = lisp_true; }}
#endif
    goto v_117;
v_119:
    v_243 = stack[-2];
    if (!car_legal(v_243)) v_243 = carerror(v_243); else
    v_243 = car(v_243);
    if (!car_legal(v_243)) v_243 = carerror(v_243); else
    v_243 = car(v_243);
    if (!car_legal(v_243)) v_243 = carerror(v_243); else
    v_243 = car(v_243);
    if (!car_legal(v_243)) v_243 = carerror(v_243); else
    v_243 = car(v_243);
    if (!symbolp(v_243)) v_243 = nil;
    else { v_243 = qfastgets(v_243);
           if (v_243 != nil) { v_243 = elt(v_243, 0); // noncom
#ifdef RECORD_GET
             if (v_243 == SPID_NOPROP)
                record_get(elt(fastget_names, 0), 0),
                v_243 = nil;
             else record_get(elt(fastget_names, 0), 1),
                v_243 = lisp_true; }
           else record_get(elt(fastget_names, 0), 0); }
#else
             if (v_243 == SPID_NOPROP) v_243 = nil; else v_243 = lisp_true; }}
#endif
    goto v_117;
    v_243 = nil;
v_117:
    if (v_243 == nil) goto v_115;
    v_243 = stack[-2];
    if (!car_legal(v_243)) v_243 = carerror(v_243); else
    v_243 = car(v_243);
    if (!car_legal(v_243)) v_243 = carerror(v_243); else
    v_243 = car(v_243);
    if (!car_legal(v_243)) v_244 = carerror(v_243); else
    v_244 = car(v_243);
    v_243 = stack[-3];
    if (!car_legal(v_243)) v_243 = carerror(v_243); else
    v_243 = car(v_243);
    if (!car_legal(v_243)) v_243 = carerror(v_243); else
    v_243 = car(v_243);
    if (!car_legal(v_243)) v_243 = carerror(v_243); else
    v_243 = car(v_243);
    {   LispObject fn = basic_elt(env, 7); // noncommuting
    v_243 = (*qfn2(fn))(fn, v_244, v_243);
    }
    env = stack[-4];
    if (v_243 == nil) goto v_143;
    else goto v_144;
v_143:
    v_243 = stack[-2];
    if (!car_legal(v_243)) v_243 = carerror(v_243); else
    v_243 = car(v_243);
    if (!car_legal(v_243)) v_243 = carerror(v_243); else
    v_243 = car(v_243);
    if (!car_legal(v_243)) v_244 = carerror(v_243); else
    v_244 = car(v_243);
    v_243 = stack[-3];
    if (!car_legal(v_243)) v_243 = carerror(v_243); else
    v_243 = car(v_243);
    if (!car_legal(v_243)) v_243 = carerror(v_243); else
    v_243 = car(v_243);
    if (!car_legal(v_243)) v_243 = carerror(v_243); else
    v_243 = car(v_243);
    {   LispObject fn = basic_elt(env, 8); // physop!-ordop
    v_243 = (*qfn2(fn))(fn, v_244, v_243);
    }
    env = stack[-4];
    v_243 = (v_243 == nil ? lisp_true : nil);
    goto v_142;
v_144:
    v_243 = nil;
    goto v_142;
    v_243 = nil;
v_142:
    if (v_243 == nil) goto v_140;
    v_243 = stack[-2];
    if (!car_legal(v_243)) v_243 = carerror(v_243); else
    v_243 = car(v_243);
    if (!car_legal(v_243)) v_244 = carerror(v_243); else
    v_244 = car(v_243);
    v_243 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_243 = cons(v_244, v_243);
    env = stack[-4];
    v_244 = ncons(v_243);
    env = stack[-4];
    v_243 = stack[-3];
    if (!car_legal(v_243)) v_243 = carerror(v_243); else
    v_243 = car(v_243);
    if (!car_legal(v_243)) v_243 = cdrerror(v_243); else
    v_243 = cdr(v_243);
    {   LispObject fn = basic_elt(env, 3); // physop!-multf
    v_243 = (*qfn2(fn))(fn, v_244, v_243);
    }
    env = stack[-4];
    v_245 = v_243;
    if (v_243 == nil) goto v_169;
    else goto v_170;
v_169:
    v_243 = stack[-2];
    if (!car_legal(v_243)) v_243 = carerror(v_243); else
    v_243 = car(v_243);
    if (!car_legal(v_243)) v_244 = carerror(v_243); else
    v_244 = car(v_243);
    v_243 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_243 = cons(v_244, v_243);
    env = stack[-4];
    v_244 = ncons(v_243);
    env = stack[-4];
    v_243 = stack[-3];
    if (!car_legal(v_243)) v_243 = cdrerror(v_243); else
    v_243 = cdr(v_243);
    {   LispObject fn = basic_elt(env, 3); // physop!-multf
    v_243 = (*qfn2(fn))(fn, v_244, v_243);
    }
    env = stack[-4];
    stack[-3] = v_243;
    goto v_168;
v_170:
    v_243 = stack[-3];
    if (!car_legal(v_243)) v_243 = carerror(v_243); else
    v_243 = car(v_243);
    if (!car_legal(v_243)) v_243 = carerror(v_243); else
    v_243 = car(v_243);
    v_244 = v_245;
    v_243 = cons(v_243, v_244);
    env = stack[-4];
    stack[0] = ncons(v_243);
    env = stack[-4];
    v_243 = stack[-2];
    if (!car_legal(v_243)) v_243 = carerror(v_243); else
    v_243 = car(v_243);
    if (!car_legal(v_243)) v_244 = carerror(v_243); else
    v_244 = car(v_243);
    v_243 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_243 = cons(v_244, v_243);
    env = stack[-4];
    v_244 = ncons(v_243);
    env = stack[-4];
    v_243 = stack[-3];
    if (!car_legal(v_243)) v_243 = cdrerror(v_243); else
    v_243 = cdr(v_243);
    {   LispObject fn = basic_elt(env, 3); // physop!-multf
    v_243 = (*qfn2(fn))(fn, v_244, v_243);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 6); // addf
    v_243 = (*qfn2(fn))(fn, stack[0], v_243);
    }
    env = stack[-4];
    stack[-3] = v_243;
    goto v_168;
v_168:
    goto v_138;
v_140:
    v_243 = stack[-2];
    if (!car_legal(v_243)) v_243 = carerror(v_243); else
    v_243 = car(v_243);
    if (!car_legal(v_243)) v_244 = carerror(v_243); else
    v_244 = car(v_243);
    v_243 = stack[-3];
    v_243 = cons(v_244, v_243);
    env = stack[-4];
    v_243 = ncons(v_243);
    env = stack[-4];
    stack[-3] = v_243;
    goto v_138;
v_138:
    goto v_17;
v_115:
    v_243 = lisp_true;
// Binding !*!*processed
// FLUIDBIND: reloadenv=4 litvec-offset=2 saveloc=0
{   bind_fluid_stack bind_fluid_var(-4, 2, 0);
    setvalue(basic_elt(env, 2), v_243); // !*!*processed
    v_243 = stack[-2];
    if (!car_legal(v_243)) v_243 = carerror(v_243); else
    v_243 = car(v_243);
    if (!car_legal(v_243)) v_244 = carerror(v_243); else
    v_244 = car(v_243);
    v_243 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_243 = cons(v_244, v_243);
    env = stack[-4];
    v_244 = ncons(v_243);
    env = stack[-4];
    v_243 = stack[-3];
    {   LispObject fn = basic_elt(env, 3); // physop!-multf
    v_243 = (*qfn2(fn))(fn, v_244, v_243);
    }
    env = stack[-4];
    stack[-3] = v_243;
    ;}  // end of a binding scope
    goto v_17;
v_17:
    v_243 = stack[-2];
    if (!car_legal(v_243)) v_244 = cdrerror(v_243); else
    v_244 = cdr(v_243);
    v_243 = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // physop!-multf
    stack[0] = (*qfn2(fn))(fn, v_244, v_243);
    }
    env = stack[-4];
    v_243 = stack[-2];
    if (!car_legal(v_243)) v_243 = carerror(v_243); else
    v_243 = car(v_243);
    v_244 = ncons(v_243);
    env = stack[-4];
    v_243 = stack[-1];
    if (!car_legal(v_243)) v_243 = cdrerror(v_243); else
    v_243 = cdr(v_243);
    {   LispObject fn = basic_elt(env, 3); // physop!-multf
    v_243 = (*qfn2(fn))(fn, v_244, v_243);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 6); // addf
    v_243 = (*qfn2(fn))(fn, stack[0], v_243);
    }
    env = stack[-4];
    {
        LispObject v_250 = stack[-3];
        LispObject fn = basic_elt(env, 6); // addf
        return (*qfn2(fn))(fn, v_250, v_243);
    }
    return onevalue(v_243);
}



// Code for edge_new_parents

static LispObject CC_edge_new_parents(LispObject env,
                         LispObject v_2)
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
    v_25 = v_27;
    if (!car_legal(v_25)) v_26 = carerror(v_25); else
    v_26 = car(v_25);
    v_25 = qvalue(basic_elt(env, 1)); // old_edge_list
    v_25 = Lassoc(nil, v_26, v_25);
    if (v_25 == nil) goto v_7;
    v_25 = nil;
    goto v_5;
v_7:
    v_25 = v_27;
    if (!car_legal(v_25)) v_25 = cdrerror(v_25); else
    v_25 = cdr(v_25);
    if (!car_legal(v_25)) v_25 = carerror(v_25); else
    v_25 = car(v_25);
    v_26 = v_25;
    if (!car_legal(v_26)) v_26 = carerror(v_26); else
    v_26 = car(v_26);
    if (!car_legal(v_25)) v_25 = cdrerror(v_25); else
    v_25 = cdr(v_25);
    v_25 = list2(v_26, v_25);
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // edge_new_parent
        return (*qfn1(fn))(fn, v_25);
    }
    v_25 = nil;
v_5:
    return onevalue(v_25);
}



// Code for groeb!=newpair

static LispObject CC_groebMnewpair(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    stack[-1] = v_2;
// end of prologue
    v_24 = stack[-3];
    {   LispObject fn = basic_elt(env, 1); // bas_dpoly
    v_24 = (*qfn1(fn))(fn, v_24);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 2); // dp_lmon
    stack[0] = (*qfn1(fn))(fn, v_24);
    }
    env = stack[-5];
    v_24 = stack[-2];
    {   LispObject fn = basic_elt(env, 1); // bas_dpoly
    v_24 = (*qfn1(fn))(fn, v_24);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 2); // dp_lmon
    v_24 = (*qfn1(fn))(fn, v_24);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 3); // mo_lcm
    v_24 = (*qfn2(fn))(fn, stack[0], v_24);
    }
    env = stack[-5];
    stack[0] = v_24;
    stack[-4] = stack[-1];
    v_26 = stack[0];
    v_25 = stack[-3];
    v_24 = stack[-2];
    {   LispObject fn = basic_elt(env, 4); // groeb!=weight
    stack[-1] = (*qfn3(fn))(fn, v_26, v_25, v_24);
    }
    env = stack[-5];
    v_25 = stack[-3];
    v_24 = stack[-2];
    v_24 = list2(v_25, v_24);
    {
        LispObject v_32 = stack[-4];
        LispObject v_33 = stack[-1];
        LispObject v_34 = stack[0];
        return list3star(v_32, v_33, v_34, v_24);
    }
}



// Code for quotof

static LispObject CC_quotof(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_170, v_171, v_172;
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
    v_170 = stack[-3];
    if (v_170 == nil) goto v_7;
    else goto v_8;
v_7:
    v_170 = nil;
    goto v_6;
v_8:
    v_171 = stack[-3];
    v_170 = stack[-2];
    if (equal(v_171, v_170)) goto v_11;
    else goto v_12;
v_11:
    v_170 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_6;
v_12:
    v_171 = stack[-2];
    v_170 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_171 == v_170) goto v_16;
    else goto v_17;
v_16:
    v_170 = stack[-3];
    goto v_6;
v_17:
    v_170 = stack[-2];
    if (!consp(v_170)) goto v_25;
    else goto v_26;
v_25:
    v_170 = lisp_true;
    goto v_24;
v_26:
    v_170 = stack[-2];
    if (!car_legal(v_170)) v_170 = carerror(v_170); else
    v_170 = car(v_170);
    v_170 = (consp(v_170) ? nil : lisp_true);
    goto v_24;
    v_170 = nil;
v_24:
    if (v_170 == nil) goto v_22;
    v_171 = stack[-3];
    v_170 = stack[-2];
    {
        LispObject fn = basic_elt(env, 3); // quotofd
        return (*qfn2(fn))(fn, v_171, v_170);
    }
v_22:
    v_170 = stack[-3];
    if (!consp(v_170)) goto v_41;
    else goto v_42;
v_41:
    v_170 = lisp_true;
    goto v_40;
v_42:
    v_170 = stack[-3];
    if (!car_legal(v_170)) v_170 = carerror(v_170); else
    v_170 = car(v_170);
    v_170 = (consp(v_170) ? nil : lisp_true);
    goto v_40;
    v_170 = nil;
v_40:
    if (v_170 == nil) goto v_38;
    v_170 = stack[-2];
    if (!car_legal(v_170)) v_170 = carerror(v_170); else
    v_170 = car(v_170);
    if (!car_legal(v_170)) v_170 = carerror(v_170); else
    v_170 = car(v_170);
    if (!car_legal(v_170)) v_170 = cdrerror(v_170); else
    v_170 = cdr(v_170);
    v_171 = stack[-2];
    if (!car_legal(v_171)) v_171 = carerror(v_171); else
    v_171 = car(v_171);
    if (!car_legal(v_171)) v_171 = carerror(v_171); else
    v_171 = car(v_171);
    if (!car_legal(v_171)) stack[0] = carerror(v_171); else
    stack[0] = car(v_171);
    v_171 = v_170;
    if (is_number(v_171)) goto v_64;
    else goto v_65;
v_64:
    v_170 = negate(v_170);
    env = stack[-5];
    goto v_63;
v_65:
    v_171 = basic_elt(env, 1); // minus
    v_170 = list2(v_171, v_170);
    env = stack[-5];
    goto v_63;
    v_170 = nil;
v_63:
    {   LispObject fn = basic_elt(env, 4); // mksp
    stack[0] = (*qfn2(fn))(fn, stack[0], v_170);
    }
    env = stack[-5];
    stack[-1] = stack[-3];
    v_171 = stack[-2];
    v_170 = basic_elt(env, 2); // lcx
    {   LispObject fn = basic_elt(env, 5); // carx
    v_170 = (*qfn2(fn))(fn, v_171, v_170);
    }
    env = stack[-5];
    if (!car_legal(v_170)) v_170 = cdrerror(v_170); else
    v_170 = cdr(v_170);
    {   LispObject fn = basic_elt(env, 0); // quotof
    v_170 = (*qfn2(fn))(fn, stack[-1], v_170);
    }
    env = stack[-5];
    v_170 = cons(stack[0], v_170);
    return ncons(v_170);
v_38:
    v_170 = stack[-3];
    if (!car_legal(v_170)) v_170 = carerror(v_170); else
    v_170 = car(v_170);
    if (!car_legal(v_170)) v_171 = carerror(v_170); else
    v_171 = car(v_170);
    v_170 = stack[-2];
    if (!car_legal(v_170)) v_170 = carerror(v_170); else
    v_170 = car(v_170);
    if (!car_legal(v_170)) v_170 = carerror(v_170); else
    v_170 = car(v_170);
    stack[0] = v_171;
    stack[-4] = v_170;
    v_170 = stack[0];
    if (!car_legal(v_170)) v_171 = carerror(v_170); else
    v_171 = car(v_170);
    v_170 = stack[-4];
    if (!car_legal(v_170)) v_170 = carerror(v_170); else
    v_170 = car(v_170);
    if (v_171 == v_170) goto v_92;
    else goto v_93;
v_92:
    v_170 = stack[0];
    if (!car_legal(v_170)) v_171 = cdrerror(v_170); else
    v_171 = cdr(v_170);
    v_170 = stack[-4];
    if (!car_legal(v_170)) v_170 = cdrerror(v_170); else
    v_170 = cdr(v_170);
    stack[-1] = difference2(v_171, v_170);
    env = stack[-5];
    v_170 = stack[-3];
    if (!car_legal(v_170)) v_170 = carerror(v_170); else
    v_170 = car(v_170);
    if (!car_legal(v_170)) stack[0] = cdrerror(v_170); else
    stack[0] = cdr(v_170);
    v_171 = stack[-2];
    v_170 = basic_elt(env, 2); // lcx
    {   LispObject fn = basic_elt(env, 5); // carx
    v_170 = (*qfn2(fn))(fn, v_171, v_170);
    }
    env = stack[-5];
    if (!car_legal(v_170)) v_170 = cdrerror(v_170); else
    v_170 = cdr(v_170);
    {   LispObject fn = basic_elt(env, 0); // quotof
    stack[0] = (*qfn2(fn))(fn, stack[0], v_170);
    }
    env = stack[-5];
    v_170 = stack[-3];
    if (!car_legal(v_170)) v_171 = cdrerror(v_170); else
    v_171 = cdr(v_170);
    v_170 = stack[-2];
    {   LispObject fn = basic_elt(env, 0); // quotof
    v_170 = (*qfn2(fn))(fn, v_171, v_170);
    }
    env = stack[-5];
    v_172 = stack[-1];
    stack[-1] = stack[0];
    stack[0] = v_170;
    v_171 = v_172;
    v_170 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_171 == v_170) goto v_120;
    else goto v_121;
v_120:
    v_171 = stack[-1];
    v_170 = stack[0];
    {
        LispObject fn = basic_elt(env, 6); // raddf
        return (*qfn2(fn))(fn, v_171, v_170);
    }
v_121:
    v_170 = stack[-4];
    if (!car_legal(v_170)) v_170 = carerror(v_170); else
    v_170 = car(v_170);
    v_171 = v_172;
    {   LispObject fn = basic_elt(env, 7); // to
    v_172 = (*qfn2(fn))(fn, v_170, v_171);
    }
    v_171 = stack[-1];
    v_170 = stack[0];
    return acons(v_172, v_171, v_170);
    v_170 = nil;
    goto v_91;
v_93:
    v_170 = stack[0];
    if (!car_legal(v_170)) v_171 = carerror(v_170); else
    v_171 = car(v_170);
    v_170 = stack[-4];
    if (!car_legal(v_170)) v_170 = carerror(v_170); else
    v_170 = car(v_170);
    {   LispObject fn = basic_elt(env, 8); // ordop
    v_170 = (*qfn2(fn))(fn, v_171, v_170);
    }
    env = stack[-5];
    if (v_170 == nil) goto v_137;
    stack[-1] = stack[0];
    v_170 = stack[-3];
    if (!car_legal(v_170)) v_170 = carerror(v_170); else
    v_170 = car(v_170);
    if (!car_legal(v_170)) v_171 = cdrerror(v_170); else
    v_171 = cdr(v_170);
    v_170 = stack[-2];
    {   LispObject fn = basic_elt(env, 0); // quotof
    stack[0] = (*qfn2(fn))(fn, v_171, v_170);
    }
    env = stack[-5];
    v_170 = stack[-3];
    if (!car_legal(v_170)) v_171 = cdrerror(v_170); else
    v_171 = cdr(v_170);
    v_170 = stack[-2];
    {   LispObject fn = basic_elt(env, 0); // quotof
    v_170 = (*qfn2(fn))(fn, v_171, v_170);
    }
    {
        LispObject v_178 = stack[-1];
        LispObject v_179 = stack[0];
        return acons(v_178, v_179, v_170);
    }
v_137:
    v_170 = stack[-4];
    if (!car_legal(v_170)) stack[0] = carerror(v_170); else
    stack[0] = car(v_170);
    v_170 = stack[-4];
    if (!car_legal(v_170)) v_170 = cdrerror(v_170); else
    v_170 = cdr(v_170);
    v_170 = negate(v_170);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 4); // mksp
    stack[0] = (*qfn2(fn))(fn, stack[0], v_170);
    }
    env = stack[-5];
    stack[-1] = stack[-3];
    v_171 = stack[-2];
    v_170 = basic_elt(env, 2); // lcx
    {   LispObject fn = basic_elt(env, 5); // carx
    v_170 = (*qfn2(fn))(fn, v_171, v_170);
    }
    env = stack[-5];
    if (!car_legal(v_170)) v_170 = cdrerror(v_170); else
    v_170 = cdr(v_170);
    {   LispObject fn = basic_elt(env, 0); // quotof
    v_170 = (*qfn2(fn))(fn, stack[-1], v_170);
    }
    env = stack[-5];
    v_170 = cons(stack[0], v_170);
    return ncons(v_170);
    v_170 = nil;
v_91:
    goto v_6;
    v_170 = nil;
v_6:
    return onevalue(v_170);
}



// Code for ra_wrapper1

static LispObject CC_ra_wrapper1(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    v_27 = stack[0];
    if (v_27 == nil) goto v_12;
    v_27 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // off1
    v_27 = (*qfn1(fn))(fn, v_27);
    }
    env = stack[-3];
    goto v_10;
v_12:
v_10:
    v_28 = stack[-2];
    v_27 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // apply
    v_27 = (*qfn2(fn))(fn, v_28, v_27);
    }
    env = stack[-3];
    stack[-1] = v_27;
    v_27 = stack[0];
    if (v_27 == nil) goto v_22;
    v_27 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // on1
    v_27 = (*qfn1(fn))(fn, v_27);
    }
    goto v_20;
v_22:
v_20:
    v_27 = stack[-1];
    return onevalue(v_27);
}



// Code for negind

static LispObject CC_negind(LispObject env,
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
v_1:
    v_29 = stack[-1];
    if (v_29 == nil) goto v_7;
    else goto v_8;
v_7:
    v_29 = nil;
    goto v_6;
v_8:
    v_29 = stack[-1];
    if (!car_legal(v_29)) v_30 = carerror(v_29); else
    v_30 = car(v_29);
    v_29 = stack[0];
    if (!car_legal(v_29)) v_29 = carerror(v_29); else
    v_29 = car(v_29);
    if (!car_legal(v_29)) v_29 = carerror(v_29); else
    v_29 = car(v_29);
    v_30 = plus2(v_30, v_29);
    env = stack[-2];
    v_29 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_29 = static_cast<LispObject>(lessp2(v_30, v_29));
    v_29 = v_29 ? lisp_true : nil;
    env = stack[-2];
    if (v_29 == nil) goto v_15;
    else goto v_14;
v_15:
    v_29 = stack[-1];
    if (!car_legal(v_29)) v_30 = cdrerror(v_29); else
    v_30 = cdr(v_29);
    v_29 = stack[0];
    if (!car_legal(v_29)) v_29 = cdrerror(v_29); else
    v_29 = cdr(v_29);
    stack[-1] = v_30;
    stack[0] = v_29;
    goto v_1;
v_14:
    goto v_6;
    v_29 = nil;
v_6:
    return onevalue(v_29);
}



// Code for tayexp!-minus

static LispObject CC_tayexpKminus(LispObject env,
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
    return negate(v_15);
v_7:
    v_15 = v_16;
    {
        LispObject fn = basic_elt(env, 1); // rnminus!:
        return (*qfn1(fn))(fn, v_15);
    }
    v_15 = nil;
    return onevalue(v_15);
}



// Code for cl_rename!-vars

static LispObject CC_cl_renameKvars(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // cl_replace!-varl
    v_9 = (*qfn1(fn))(fn, v_9);
    }
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // cl_rename!-vars1
    v_9 = (*qfn2(fn))(fn, stack[0], v_9);
    }
    if (!car_legal(v_9)) v_9 = carerror(v_9); else
    v_9 = car(v_9);
    return onevalue(v_9);
}



// Code for rl_susipost

static LispObject CC_rl_susipost(LispObject env,
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
    stack[0] = qvalue(basic_elt(env, 1)); // rl_susipost!*
    v_10 = list2(v_11, v_10);
    env = stack[-1];
    {
        LispObject v_13 = stack[0];
        LispObject fn = basic_elt(env, 2); // apply
        return (*qfn2(fn))(fn, v_13, v_10);
    }
}



// Code for dip_f2dip1

static LispObject CC_dip_f2dip1(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_54, v_55, v_56;
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
    stack[-2] = v_4;
    stack[-3] = v_3;
    stack[-4] = v_2;
// end of prologue
    v_54 = stack[-4];
    if (v_54 == nil) goto v_8;
    else goto v_9;
v_8:
    v_54 = nil;
    goto v_7;
v_9:
    v_54 = stack[-4];
    if (!consp(v_54)) goto v_16;
    else goto v_17;
v_16:
    v_54 = lisp_true;
    goto v_15;
v_17:
    v_54 = stack[-4];
    if (!car_legal(v_54)) v_54 = carerror(v_54); else
    v_54 = car(v_54);
    v_54 = (consp(v_54) ? nil : lisp_true);
    goto v_15;
    v_54 = nil;
v_15:
    if (v_54 == nil) goto v_13;
    stack[0] = stack[-2];
    v_54 = stack[-4];
    {   LispObject fn = basic_elt(env, 1); // bc_fd
    v_54 = (*qfn1(fn))(fn, v_54);
    }
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 2); // bc_prod
    v_55 = (*qfn2(fn))(fn, stack[0], v_54);
    }
    env = stack[-6];
    v_54 = stack[-3];
    {
        LispObject fn = basic_elt(env, 3); // dip_fmon
        return (*qfn2(fn))(fn, v_55, v_54);
    }
v_13:
    v_54 = stack[-4];
    if (!car_legal(v_54)) v_54 = carerror(v_54); else
    v_54 = car(v_54);
    if (!car_legal(v_54)) v_54 = carerror(v_54); else
    v_54 = car(v_54);
    if (!car_legal(v_54)) stack[-5] = carerror(v_54); else
    stack[-5] = car(v_54);
    v_54 = stack[-4];
    if (!car_legal(v_54)) v_54 = carerror(v_54); else
    v_54 = car(v_54);
    if (!car_legal(v_54)) v_54 = carerror(v_54); else
    v_54 = car(v_54);
    if (!car_legal(v_54)) stack[-1] = cdrerror(v_54); else
    stack[-1] = cdr(v_54);
    v_54 = stack[-4];
    if (!car_legal(v_54)) v_54 = carerror(v_54); else
    v_54 = car(v_54);
    if (!car_legal(v_54)) stack[0] = cdrerror(v_54); else
    stack[0] = cdr(v_54);
    v_55 = stack[-3];
    v_54 = stack[-2];
    v_54 = list2(v_55, v_54);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 4); // dip_f2dip2
    stack[0] = (*qfn4up(fn))(fn, stack[-5], stack[-1], stack[0], v_54);
    }
    env = stack[-6];
    v_54 = stack[-4];
    if (!car_legal(v_54)) v_56 = cdrerror(v_54); else
    v_56 = cdr(v_54);
    v_55 = stack[-3];
    v_54 = stack[-2];
    {   LispObject fn = basic_elt(env, 0); // dip_f2dip1
    v_54 = (*qfn3(fn))(fn, v_56, v_55, v_54);
    }
    env = stack[-6];
    {
        LispObject v_63 = stack[0];
        LispObject fn = basic_elt(env, 5); // dip_sum
        return (*qfn2(fn))(fn, v_63, v_54);
    }
    v_54 = nil;
v_7:
    return onevalue(v_54);
}



// Code for omfir

static LispObject CC_omfir(LispObject env)
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
// space for vars preserved across procedure calls
    real_push(nil);
    stack_popper stack_popper_var(2);
// end of prologue
    v_21 = qvalue(basic_elt(env, 1)); // atts
    v_20 = basic_elt(env, 2); // dec
    {   LispObject fn = basic_elt(env, 5); // find
    v_20 = (*qfn2(fn))(fn, v_21, v_20);
    }
    env = stack[-1];
    stack[0] = v_20;
    v_21 = qvalue(basic_elt(env, 1)); // atts
    v_20 = basic_elt(env, 3); // name
    {   LispObject fn = basic_elt(env, 5); // find
    v_20 = (*qfn2(fn))(fn, v_21, v_20);
    }
    env = stack[-1];
    if (v_20 == nil) goto v_12;
    v_21 = basic_elt(env, 4); // "wrong att"
    v_20 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    {   LispObject fn = basic_elt(env, 6); // errorml
    v_20 = (*qfn2(fn))(fn, v_21, v_20);
    }
    goto v_10;
v_12:
v_10:
    v_20 = stack[0];
    return onevalue(v_20);
}



// Code for getphystypetimes

static LispObject CC_getphystypetimes(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    stack[-1] = nil;
    v_29 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // collectphystype
    v_29 = (*qfn1(fn))(fn, v_29);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // deleteall
    v_29 = (*qfn2(fn))(fn, stack[-1], v_29);
    }
    env = stack[-2];
    v_30 = v_29;
    if (v_29 == nil) goto v_9;
    else goto v_10;
v_9:
    v_29 = nil;
    goto v_6;
v_10:
    v_29 = v_30;
    if (!car_legal(v_29)) v_29 = cdrerror(v_29); else
    v_29 = cdr(v_29);
    if (v_29 == nil) goto v_16;
    else goto v_17;
v_16:
    v_29 = v_30;
    if (!car_legal(v_29)) v_29 = carerror(v_29); else
    v_29 = car(v_29);
    goto v_6;
v_17:
    stack[-1] = basic_elt(env, 0); // getphystypetimes
    v_30 = basic_elt(env, 1); // "PHYSOP type mismatch in"
    v_29 = stack[0];
    v_29 = list2(v_30, v_29);
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 4); // rederr2
    v_29 = (*qfn2(fn))(fn, stack[-1], v_29);
    }
    goto v_8;
v_8:
    v_29 = nil;
v_6:
    return onevalue(v_29);
}



// Code for prop!-simp2

static LispObject CC_propKsimp2(LispObject env,
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
    real_push(nil, nil, nil, nil, nil);
    stack_popper stack_popper_var(6);
// copy arguments values to proper place
    stack[-2] = v_3;
    stack[-3] = v_2;
// end of prologue
    v_37 = stack[-2];
    if (!consp(v_37)) goto v_14;
    else goto v_15;
v_14:
    v_37 = nil;
    goto v_13;
v_15:
    v_38 = stack[-2];
    v_37 = stack[-3];
    v_37 = Lmember(nil, v_38, v_37);
    goto v_13;
    v_37 = nil;
v_13:
    stack[-4] = v_37;
    if (v_37 == nil) goto v_11;
    stack[-1] = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    v_37 = stack[-3];
    stack[0] = Llength(nil, v_37);
    env = stack[-5];
    v_37 = stack[-4];
    v_37 = Llength(nil, v_37);
    env = stack[-5];
    v_37 = difference2(stack[0], v_37);
    env = stack[-5];
    stack[0] = Lexpt(nil, stack[-1], v_37);
    env = stack[-5];
    v_38 = stack[-2];
    v_37 = stack[-3];
    v_37 = Ldelete(nil, v_38, v_37);
    {
        LispObject v_44 = stack[0];
        return cons(v_44, v_37);
    }
v_11:
    v_37 = nil;
    goto v_7;
    v_37 = nil;
v_7:
    return onevalue(v_37);
}



// Code for quotpri

static LispObject CC_quotpri(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_54, v_55, v_56;
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
    v_55 = v_2;
// end of prologue
    stack[0] = nil;
    v_54 = qvalue(basic_elt(env, 1)); // !*ratpri
    if (v_54 == nil) goto v_13;
    else goto v_14;
v_13:
    v_54 = lisp_true;
    goto v_12;
v_14:
    v_54 = qvalue(basic_elt(env, 2)); // !*nat
    if (v_54 == nil) goto v_21;
    else goto v_22;
v_21:
    v_54 = lisp_true;
    goto v_20;
v_22:
    v_54 = qvalue(basic_elt(env, 3)); // !*fort
    if (v_54 == nil) goto v_29;
    else goto v_28;
v_29:
    v_54 = qvalue(basic_elt(env, 4)); // !*list
    if (v_54 == nil) goto v_33;
    else goto v_32;
v_33:
    v_54 = qvalue(basic_elt(env, 5)); // !*mcd
    v_54 = (v_54 == nil ? lisp_true : nil);
v_32:
v_28:
    goto v_20;
    v_54 = nil;
v_20:
    goto v_12;
    v_54 = nil;
v_12:
    if (v_54 == nil) goto v_10;
    v_54 = basic_elt(env, 6); // failed
    goto v_6;
v_10:
    v_56 = qvalue(basic_elt(env, 7)); // dmode!*
    v_54 = basic_elt(env, 8); // ratmode
    v_54 = Lflagp(nil, v_56, v_54);
    env = stack[-1];
    if (v_54 == nil) goto v_39;
    v_54 = qvalue(basic_elt(env, 7)); // dmode!*
    stack[0] = v_54;
    v_54 = nil;
    setvalue(basic_elt(env, 7), v_54); // dmode!*
    goto v_8;
v_39:
v_8:
    v_54 = v_55;
    {   LispObject fn = basic_elt(env, 9); // ratfunpri1
    v_54 = (*qfn1(fn))(fn, v_54);
    }
    env = stack[-1];
    v_55 = v_54;
    v_54 = stack[0];
    if (v_54 == nil) goto v_50;
    v_54 = stack[0];
    setvalue(basic_elt(env, 7), v_54); // dmode!*
    goto v_48;
v_50:
v_48:
    v_54 = v_55;
v_6:
    return onevalue(v_54);
}



// Code for red_tailred

static LispObject CC_red_tailred(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_20, v_21, v_22;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_20 = v_3;
    v_22 = v_2;
// end of prologue
    v_21 = qvalue(basic_elt(env, 1)); // !*noetherian
    if (v_21 == nil) goto v_8;
    v_21 = v_20;
    v_20 = basic_elt(env, 2); // red_topred
    {
        LispObject fn = basic_elt(env, 4); // red_tailreddriver
        return (*qfn3(fn))(fn, v_22, v_21, v_20);
    }
v_8:
    v_21 = v_20;
    v_20 = basic_elt(env, 3); // red_topredbe
    {
        LispObject fn = basic_elt(env, 4); // red_tailreddriver
        return (*qfn3(fn))(fn, v_22, v_21, v_20);
    }
    v_20 = nil;
    return onevalue(v_20);
}



// Code for no_dum_varp

static LispObject CC_no_dum_varp(LispObject env,
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
    if (!car_legal(v_28)) v_28 = cdrerror(v_28); else
    v_28 = cdr(v_28);
    if (v_28 == nil) goto v_10;
    else goto v_11;
v_10:
    v_28 = lisp_true;
    goto v_9;
v_11:
    v_28 = stack[0];
    if (!car_legal(v_28)) v_29 = cdrerror(v_28); else
    v_29 = cdr(v_28);
    v_28 = basic_elt(env, 1); // list
    {   LispObject fn = basic_elt(env, 2); // splitlist!:
    v_29 = (*qfn2(fn))(fn, v_29, v_28);
    }
    v_28 = stack[0];
    if (!car_legal(v_28)) v_28 = cdrerror(v_28); else
    v_28 = cdr(v_28);
    v_28 = (equal(v_29, v_28) ? lisp_true : nil);
    goto v_9;
    v_28 = nil;
v_9:
    if (v_28 == nil) goto v_7;
    v_28 = lisp_true;
    goto v_5;
v_7:
    v_28 = nil;
    goto v_5;
    v_28 = nil;
v_5:
    return onevalue(v_28);
}



// Code for arminusp!:

static LispObject CC_arminuspT(LispObject env,
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
    {
        LispObject fn = basic_elt(env, 1); // minusf
        return (*qfn1(fn))(fn, v_7);
    }
}



// Code for idtomind

static LispObject CC_idtomind(LispObject env,
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
    v_23 = v_3;
    v_21 = v_2;
// end of prologue
    v_22 = v_21;
    v_21 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_22 == v_21) goto v_7;
    else goto v_8;
v_7:
    v_21 = v_23;
    v_22 = qvalue(basic_elt(env, 1)); // i2m_jetspace!*
    v_21 = Lassoc(nil, v_21, v_22);
    if (!car_legal(v_21)) v_21 = cdrerror(v_21); else
    v_21 = cdr(v_21);
    goto v_6;
v_8:
    v_21 = v_23;
    v_22 = qvalue(basic_elt(env, 2)); // i2m_jetspace_odd!*
    v_21 = Lassoc(nil, v_21, v_22);
    if (!car_legal(v_21)) v_21 = cdrerror(v_21); else
    v_21 = cdr(v_21);
    goto v_6;
    v_21 = nil;
v_6:
    return onevalue(v_21);
}



// Code for expansion_name

static LispObject CC_expansion_name(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil);
    stack_popper stack_popper_var(2);
// end of prologue
    v_10 = basic_elt(env, 1); // lalr_internal_
    stack[0] = Lexplode(nil, v_10);
    env = stack[-1];
    v_10 = qvalue(basic_elt(env, 2)); // expansion_count
    v_10 = add1(v_10);
    env = stack[-1];
    setvalue(basic_elt(env, 2), v_10); // expansion_count
    v_10 = Lexplode(nil, v_10);
    env = stack[-1];
    v_10 = Lappend_2(nil, stack[0], v_10);
        return Lcompress(nil, v_10);
}



// Code for quotkx

static LispObject CC_quotkx(LispObject env,
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
    v_52 = stack[-1];
    if (!car_legal(v_52)) v_52 = carerror(v_52); else
    v_52 = car(v_52);
    if (!car_legal(v_52)) v_53 = cdrerror(v_52); else
    v_53 = cdr(v_52);
    v_52 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // quotfx1
    v_52 = (*qfn2(fn))(fn, v_53, v_52);
    }
    env = stack[-3];
    stack[-2] = v_52;
    v_52 = stack[-2];
    if (v_52 == nil) goto v_14;
    v_52 = stack[-1];
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    if (v_52 == nil) goto v_18;
    else goto v_19;
v_18:
    v_52 = stack[-1];
    if (!car_legal(v_52)) v_52 = carerror(v_52); else
    v_52 = car(v_52);
    if (!car_legal(v_52)) v_53 = carerror(v_52); else
    v_53 = car(v_52);
    v_52 = stack[-2];
    v_52 = cons(v_53, v_52);
    return ncons(v_52);
v_19:
    v_52 = stack[-1];
    if (!car_legal(v_52)) v_53 = cdrerror(v_52); else
    v_53 = cdr(v_52);
    v_52 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // quotfx1
    v_52 = (*qfn2(fn))(fn, v_53, v_52);
    }
    v_53 = v_52;
    if (v_53 == nil) goto v_38;
    v_53 = stack[-1];
    if (!car_legal(v_53)) v_53 = carerror(v_53); else
    v_53 = car(v_53);
    if (!car_legal(v_53)) v_54 = carerror(v_53); else
    v_54 = car(v_53);
    v_53 = stack[-2];
    return acons(v_54, v_53, v_52);
v_38:
    v_52 = nil;
    goto v_36;
    v_52 = nil;
v_36:
    goto v_17;
    v_52 = nil;
v_17:
    goto v_12;
v_14:
    v_52 = nil;
    goto v_12;
    v_52 = nil;
v_12:
    return onevalue(v_52);
}



// Code for ifstat

static LispObject CC_ifstat(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    push(nil, nil);
    stack_popper stack_popper_var(3);
// end of prologue
    stack[-1] = nil;
v_7:
    v_47 = lisp_true;
    {   LispObject fn = basic_elt(env, 6); // xread
    v_47 = (*qfn1(fn))(fn, v_47);
    }
    env = stack[-2];
    stack[0] = v_47;
    v_48 = qvalue(basic_elt(env, 1)); // cursym!*
    v_47 = basic_elt(env, 2); // then
    if (v_48 == v_47) goto v_13;
    v_48 = basic_elt(env, 3); // if
    v_47 = lisp_true;
    {   LispObject fn = basic_elt(env, 7); // symerr
    v_47 = (*qfn2(fn))(fn, v_48, v_47);
    }
    env = stack[-2];
    goto v_11;
v_13:
v_11:
    v_47 = lisp_true;
    {   LispObject fn = basic_elt(env, 6); // xread
    v_47 = (*qfn1(fn))(fn, v_47);
    }
    env = stack[-2];
    v_47 = list2(stack[0], v_47);
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 8); // aconc!*
    v_47 = (*qfn2(fn))(fn, stack[-1], v_47);
    }
    env = stack[-2];
    stack[-1] = v_47;
    v_48 = qvalue(basic_elt(env, 1)); // cursym!*
    v_47 = basic_elt(env, 4); // else
    if (v_48 == v_47) goto v_28;
    goto v_26;
v_28:
    {   LispObject fn = basic_elt(env, 9); // scan
    v_48 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
    v_47 = basic_elt(env, 3); // if
    if (v_48 == v_47) goto v_32;
    else goto v_33;
v_32:
    goto v_7;
v_33:
    stack[0] = lisp_true;
    v_47 = lisp_true;
    {   LispObject fn = basic_elt(env, 10); // xread1
    v_47 = (*qfn1(fn))(fn, v_47);
    }
    env = stack[-2];
    v_47 = list2(stack[0], v_47);
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 8); // aconc!*
    v_47 = (*qfn2(fn))(fn, stack[-1], v_47);
    }
    env = stack[-2];
    stack[-1] = v_47;
    goto v_26;
v_26:
    v_48 = basic_elt(env, 5); // cond
    v_47 = stack[-1];
    return cons(v_48, v_47);
    return onevalue(v_47);
}



// Code for add!-degrees

static LispObject CC_addKdegrees(LispObject env,
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
    real_push(nil, nil, nil, nil, nil);
    real_push(nil);
    stack_popper stack_popper_var(7);
// copy arguments values to proper place
    stack[-3] = v_3;
    stack[-4] = v_2;
// end of prologue
    stack[-5] = nil;
v_13:
    v_55 = stack[-4];
    if (v_55 == nil) goto v_16;
    else goto v_17;
v_16:
    goto v_12;
v_17:
    v_55 = stack[-4];
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    stack[-2] = v_55;
    v_55 = stack[-3];
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    stack[-1] = v_55;
    v_55 = nil;
    stack[0] = v_55;
v_27:
    v_55 = stack[-2];
    if (v_55 == nil) goto v_30;
    else goto v_31;
v_30:
    goto v_26;
v_31:
    v_55 = stack[-2];
    if (!car_legal(v_55)) v_56 = carerror(v_55); else
    v_56 = car(v_55);
    v_55 = stack[-1];
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    {   LispObject fn = basic_elt(env, 1); // tayexp!-plus2
    v_56 = (*qfn2(fn))(fn, v_56, v_55);
    }
    env = stack[-6];
    v_55 = stack[0];
    v_55 = cons(v_56, v_55);
    env = stack[-6];
    stack[0] = v_55;
    v_55 = stack[-2];
    if (!car_legal(v_55)) v_55 = cdrerror(v_55); else
    v_55 = cdr(v_55);
    stack[-2] = v_55;
    v_55 = stack[-1];
    if (!car_legal(v_55)) v_55 = cdrerror(v_55); else
    v_55 = cdr(v_55);
    stack[-1] = v_55;
    goto v_27;
v_26:
    v_55 = stack[0];
    v_56 = Lnreverse(nil, v_55);
    env = stack[-6];
    v_55 = stack[-5];
    v_55 = cons(v_56, v_55);
    env = stack[-6];
    stack[-5] = v_55;
    v_55 = stack[-4];
    if (!car_legal(v_55)) v_55 = cdrerror(v_55); else
    v_55 = cdr(v_55);
    stack[-4] = v_55;
    v_55 = stack[-3];
    if (!car_legal(v_55)) v_55 = cdrerror(v_55); else
    v_55 = cdr(v_55);
    stack[-3] = v_55;
    goto v_13;
v_12:
    v_55 = stack[-5];
        return Lnreverse(nil, v_55);
    return onevalue(v_55);
}



// Code for cl_sordpl

static LispObject CC_cl_sordpl(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_35, v_36, v_37, v_38;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_36 = v_3;
    v_37 = v_2;
// end of prologue
v_7:
    v_35 = v_36;
    if (v_35 == nil) goto v_10;
    else goto v_11;
v_10:
    v_35 = nil;
    goto v_6;
v_11:
    v_35 = v_37;
    if (v_35 == nil) goto v_14;
    else goto v_15;
v_14:
    v_35 = lisp_true;
    goto v_6;
v_15:
    v_35 = v_37;
    if (!car_legal(v_35)) v_38 = carerror(v_35); else
    v_38 = car(v_35);
    v_35 = v_36;
    if (!car_legal(v_35)) v_35 = carerror(v_35); else
    v_35 = car(v_35);
    if (equal(v_38, v_35)) goto v_19;
    v_35 = v_37;
    if (!car_legal(v_35)) v_35 = carerror(v_35); else
    v_35 = car(v_35);
    if (!car_legal(v_36)) v_36 = carerror(v_36); else
    v_36 = car(v_36);
    {
        LispObject fn = basic_elt(env, 1); // cl_sordp
        return (*qfn2(fn))(fn, v_35, v_36);
    }
v_19:
    v_35 = v_37;
    if (!car_legal(v_35)) v_35 = cdrerror(v_35); else
    v_35 = cdr(v_35);
    v_37 = v_35;
    v_35 = v_36;
    if (!car_legal(v_35)) v_35 = cdrerror(v_35); else
    v_35 = cdr(v_35);
    v_36 = v_35;
    goto v_7;
    v_35 = nil;
v_6:
    return onevalue(v_35);
}



// Code for pasf_or

static LispObject CC_pasf_or(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_290, v_291;
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
    v_291 = stack[0];
    v_290 = basic_elt(env, 1); // true
    if (v_291 == v_290) goto v_17;
    else goto v_18;
v_17:
    v_290 = lisp_true;
    goto v_16;
v_18:
    v_291 = stack[0];
    v_290 = basic_elt(env, 2); // false
    v_290 = (v_291 == v_290 ? lisp_true : nil);
    goto v_16;
    v_290 = nil;
v_16:
    if (v_290 == nil) goto v_14;
    v_290 = lisp_true;
    goto v_12;
v_14:
    v_291 = stack[0];
    v_290 = basic_elt(env, 1); // true
    if (v_291 == v_290) goto v_36;
    else goto v_37;
v_36:
    v_290 = lisp_true;
    goto v_35;
v_37:
    v_291 = stack[0];
    v_290 = basic_elt(env, 2); // false
    v_290 = (v_291 == v_290 ? lisp_true : nil);
    goto v_35;
    v_290 = nil;
v_35:
    if (v_290 == nil) goto v_33;
    v_290 = stack[0];
    v_291 = v_290;
    goto v_31;
v_33:
    v_290 = stack[0];
    if (!car_legal(v_290)) v_290 = carerror(v_290); else
    v_290 = car(v_290);
    v_290 = Lconsp(nil, v_290);
    env = stack[-2];
    if (v_290 == nil) goto v_48;
    v_290 = stack[0];
    if (!car_legal(v_290)) v_290 = carerror(v_290); else
    v_290 = car(v_290);
    if (!car_legal(v_290)) v_290 = carerror(v_290); else
    v_290 = car(v_290);
    v_291 = v_290;
    goto v_31;
v_48:
    v_290 = stack[0];
    if (!car_legal(v_290)) v_290 = carerror(v_290); else
    v_290 = car(v_290);
    v_291 = v_290;
    goto v_31;
    v_291 = nil;
v_31:
    v_290 = basic_elt(env, 3); // (lessp greaterp leq geq)
    v_290 = Lmemq(nil, v_291, v_290);
    v_290 = (v_290 == nil ? lisp_true : nil);
    goto v_12;
    v_290 = nil;
v_12:
    if (v_290 == nil) goto v_10;
    v_290 = stack[0];
    goto v_6;
v_10:
    v_290 = stack[0];
    if (!car_legal(v_290)) v_290 = cdrerror(v_290); else
    v_290 = cdr(v_290);
    if (!car_legal(v_290)) v_290 = carerror(v_290); else
    v_290 = car(v_290);
    {   LispObject fn = basic_elt(env, 8); // pasf_deci
    v_290 = (*qfn1(fn))(fn, v_290);
    }
    env = stack[-2];
    stack[-1] = v_290;
    v_291 = stack[0];
    v_290 = basic_elt(env, 1); // true
    if (v_291 == v_290) goto v_81;
    else goto v_82;
v_81:
    v_290 = lisp_true;
    goto v_80;
v_82:
    v_291 = stack[0];
    v_290 = basic_elt(env, 2); // false
    v_290 = (v_291 == v_290 ? lisp_true : nil);
    goto v_80;
    v_290 = nil;
v_80:
    if (v_290 == nil) goto v_78;
    v_290 = stack[0];
    v_291 = v_290;
    goto v_76;
v_78:
    v_290 = stack[0];
    if (!car_legal(v_290)) v_290 = carerror(v_290); else
    v_290 = car(v_290);
    v_290 = Lconsp(nil, v_290);
    env = stack[-2];
    if (v_290 == nil) goto v_93;
    v_290 = stack[0];
    if (!car_legal(v_290)) v_290 = carerror(v_290); else
    v_290 = car(v_290);
    if (!car_legal(v_290)) v_290 = carerror(v_290); else
    v_290 = car(v_290);
    v_291 = v_290;
    goto v_76;
v_93:
    v_290 = stack[0];
    if (!car_legal(v_290)) v_290 = carerror(v_290); else
    v_290 = car(v_290);
    v_291 = v_290;
    goto v_76;
    v_291 = nil;
v_76:
    v_290 = basic_elt(env, 4); // lessp
    if (v_291 == v_290) goto v_73;
    else goto v_74;
v_73:
    v_290 = stack[-1];
    if (!car_legal(v_290)) v_291 = cdrerror(v_290); else
    v_291 = cdr(v_290);
    v_290 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_290 = static_cast<LispObject>(lessp2(v_291, v_290));
    v_290 = v_290 ? lisp_true : nil;
    env = stack[-2];
    goto v_72;
v_74:
    v_290 = nil;
    goto v_72;
    v_290 = nil;
v_72:
    if (v_290 == nil) goto v_70;
    stack[-1] = basic_elt(env, 5); // leq
    v_290 = stack[0];
    if (!car_legal(v_290)) v_290 = cdrerror(v_290); else
    v_290 = cdr(v_290);
    if (!car_legal(v_290)) stack[0] = carerror(v_290); else
    stack[0] = car(v_290);
    v_290 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 9); // simp
    v_290 = (*qfn1(fn))(fn, v_290);
    }
    env = stack[-2];
    if (!car_legal(v_290)) v_290 = carerror(v_290); else
    v_290 = car(v_290);
    {   LispObject fn = basic_elt(env, 10); // addf
    v_291 = (*qfn2(fn))(fn, stack[0], v_290);
    }
    v_290 = nil;
    {
        LispObject v_294 = stack[-1];
        return list3(v_294, v_291, v_290);
    }
v_70:
    v_291 = stack[0];
    v_290 = basic_elt(env, 1); // true
    if (v_291 == v_290) goto v_136;
    else goto v_137;
v_136:
    v_290 = lisp_true;
    goto v_135;
v_137:
    v_291 = stack[0];
    v_290 = basic_elt(env, 2); // false
    v_290 = (v_291 == v_290 ? lisp_true : nil);
    goto v_135;
    v_290 = nil;
v_135:
    if (v_290 == nil) goto v_133;
    v_290 = stack[0];
    v_291 = v_290;
    goto v_131;
v_133:
    v_290 = stack[0];
    if (!car_legal(v_290)) v_290 = carerror(v_290); else
    v_290 = car(v_290);
    v_290 = Lconsp(nil, v_290);
    env = stack[-2];
    if (v_290 == nil) goto v_148;
    v_290 = stack[0];
    if (!car_legal(v_290)) v_290 = carerror(v_290); else
    v_290 = car(v_290);
    if (!car_legal(v_290)) v_290 = carerror(v_290); else
    v_290 = car(v_290);
    v_291 = v_290;
    goto v_131;
v_148:
    v_290 = stack[0];
    if (!car_legal(v_290)) v_290 = carerror(v_290); else
    v_290 = car(v_290);
    v_291 = v_290;
    goto v_131;
    v_291 = nil;
v_131:
    v_290 = basic_elt(env, 5); // leq
    if (v_291 == v_290) goto v_128;
    else goto v_129;
v_128:
    v_290 = stack[-1];
    if (!car_legal(v_290)) v_291 = cdrerror(v_290); else
    v_291 = cdr(v_290);
    v_290 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_290 = static_cast<LispObject>(greaterp2(v_291, v_290));
    v_290 = v_290 ? lisp_true : nil;
    env = stack[-2];
    goto v_127;
v_129:
    v_290 = nil;
    goto v_127;
    v_290 = nil;
v_127:
    if (v_290 == nil) goto v_125;
    stack[-1] = basic_elt(env, 4); // lessp
    v_290 = stack[0];
    if (!car_legal(v_290)) v_290 = cdrerror(v_290); else
    v_290 = cdr(v_290);
    if (!car_legal(v_290)) stack[0] = carerror(v_290); else
    stack[0] = car(v_290);
    v_290 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 9); // simp
    v_290 = (*qfn1(fn))(fn, v_290);
    }
    env = stack[-2];
    if (!car_legal(v_290)) v_290 = carerror(v_290); else
    v_290 = car(v_290);
    {   LispObject fn = basic_elt(env, 11); // negf
    v_290 = (*qfn1(fn))(fn, v_290);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 10); // addf
    v_291 = (*qfn2(fn))(fn, stack[0], v_290);
    }
    v_290 = nil;
    {
        LispObject v_295 = stack[-1];
        return list3(v_295, v_291, v_290);
    }
v_125:
    v_291 = stack[0];
    v_290 = basic_elt(env, 1); // true
    if (v_291 == v_290) goto v_192;
    else goto v_193;
v_192:
    v_290 = lisp_true;
    goto v_191;
v_193:
    v_291 = stack[0];
    v_290 = basic_elt(env, 2); // false
    v_290 = (v_291 == v_290 ? lisp_true : nil);
    goto v_191;
    v_290 = nil;
v_191:
    if (v_290 == nil) goto v_189;
    v_290 = stack[0];
    v_291 = v_290;
    goto v_187;
v_189:
    v_290 = stack[0];
    if (!car_legal(v_290)) v_290 = carerror(v_290); else
    v_290 = car(v_290);
    v_290 = Lconsp(nil, v_290);
    env = stack[-2];
    if (v_290 == nil) goto v_204;
    v_290 = stack[0];
    if (!car_legal(v_290)) v_290 = carerror(v_290); else
    v_290 = car(v_290);
    if (!car_legal(v_290)) v_290 = carerror(v_290); else
    v_290 = car(v_290);
    v_291 = v_290;
    goto v_187;
v_204:
    v_290 = stack[0];
    if (!car_legal(v_290)) v_290 = carerror(v_290); else
    v_290 = car(v_290);
    v_291 = v_290;
    goto v_187;
    v_291 = nil;
v_187:
    v_290 = basic_elt(env, 6); // greaterp
    if (v_291 == v_290) goto v_184;
    else goto v_185;
v_184:
    v_290 = stack[-1];
    if (!car_legal(v_290)) v_291 = cdrerror(v_290); else
    v_291 = cdr(v_290);
    v_290 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_290 = static_cast<LispObject>(greaterp2(v_291, v_290));
    v_290 = v_290 ? lisp_true : nil;
    env = stack[-2];
    goto v_183;
v_185:
    v_290 = nil;
    goto v_183;
    v_290 = nil;
v_183:
    if (v_290 == nil) goto v_181;
    stack[-1] = basic_elt(env, 7); // geq
    v_290 = stack[0];
    if (!car_legal(v_290)) v_290 = cdrerror(v_290); else
    v_290 = cdr(v_290);
    if (!car_legal(v_290)) stack[0] = carerror(v_290); else
    stack[0] = car(v_290);
    v_290 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 9); // simp
    v_290 = (*qfn1(fn))(fn, v_290);
    }
    env = stack[-2];
    if (!car_legal(v_290)) v_290 = carerror(v_290); else
    v_290 = car(v_290);
    {   LispObject fn = basic_elt(env, 11); // negf
    v_290 = (*qfn1(fn))(fn, v_290);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 10); // addf
    v_291 = (*qfn2(fn))(fn, stack[0], v_290);
    }
    v_290 = nil;
    {
        LispObject v_296 = stack[-1];
        return list3(v_296, v_291, v_290);
    }
v_181:
    v_291 = stack[0];
    v_290 = basic_elt(env, 1); // true
    if (v_291 == v_290) goto v_248;
    else goto v_249;
v_248:
    v_290 = lisp_true;
    goto v_247;
v_249:
    v_291 = stack[0];
    v_290 = basic_elt(env, 2); // false
    v_290 = (v_291 == v_290 ? lisp_true : nil);
    goto v_247;
    v_290 = nil;
v_247:
    if (v_290 == nil) goto v_245;
    v_290 = stack[0];
    v_291 = v_290;
    goto v_243;
v_245:
    v_290 = stack[0];
    if (!car_legal(v_290)) v_290 = carerror(v_290); else
    v_290 = car(v_290);
    v_290 = Lconsp(nil, v_290);
    env = stack[-2];
    if (v_290 == nil) goto v_260;
    v_290 = stack[0];
    if (!car_legal(v_290)) v_290 = carerror(v_290); else
    v_290 = car(v_290);
    if (!car_legal(v_290)) v_290 = carerror(v_290); else
    v_290 = car(v_290);
    v_291 = v_290;
    goto v_243;
v_260:
    v_290 = stack[0];
    if (!car_legal(v_290)) v_290 = carerror(v_290); else
    v_290 = car(v_290);
    v_291 = v_290;
    goto v_243;
    v_291 = nil;
v_243:
    v_290 = basic_elt(env, 7); // geq
    if (v_291 == v_290) goto v_240;
    else goto v_241;
v_240:
    v_290 = stack[-1];
    if (!car_legal(v_290)) v_291 = cdrerror(v_290); else
    v_291 = cdr(v_290);
    v_290 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_290 = static_cast<LispObject>(lessp2(v_291, v_290));
    v_290 = v_290 ? lisp_true : nil;
    env = stack[-2];
    goto v_239;
v_241:
    v_290 = nil;
    goto v_239;
    v_290 = nil;
v_239:
    if (v_290 == nil) goto v_237;
    stack[-1] = basic_elt(env, 6); // greaterp
    v_290 = stack[0];
    if (!car_legal(v_290)) v_290 = cdrerror(v_290); else
    v_290 = cdr(v_290);
    if (!car_legal(v_290)) stack[0] = carerror(v_290); else
    stack[0] = car(v_290);
    v_290 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 9); // simp
    v_290 = (*qfn1(fn))(fn, v_290);
    }
    env = stack[-2];
    if (!car_legal(v_290)) v_290 = carerror(v_290); else
    v_290 = car(v_290);
    {   LispObject fn = basic_elt(env, 10); // addf
    v_291 = (*qfn2(fn))(fn, stack[0], v_290);
    }
    v_290 = nil;
    {
        LispObject v_297 = stack[-1];
        return list3(v_297, v_291, v_290);
    }
v_237:
    v_290 = stack[0];
v_6:
    return onevalue(v_290);
}



// Code for sfto_subfwd

static LispObject CC_sfto_subfwd(LispObject env,
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    stack[-1] = v_3;
    stack[-2] = v_2;
// end of prologue
    v_66 = stack[-2];
    if (!consp(v_66)) goto v_16;
    else goto v_17;
v_16:
    v_66 = lisp_true;
    goto v_15;
v_17:
    v_66 = stack[-2];
    if (!car_legal(v_66)) v_66 = carerror(v_66); else
    v_66 = car(v_66);
    v_66 = (consp(v_66) ? nil : lisp_true);
    goto v_15;
    v_66 = nil;
v_15:
    if (v_66 == nil) goto v_13;
    v_66 = stack[-2];
    goto v_8;
v_13:
    v_66 = stack[-2];
    if (!car_legal(v_66)) v_66 = carerror(v_66); else
    v_66 = car(v_66);
    if (!car_legal(v_66)) v_66 = carerror(v_66); else
    v_66 = car(v_66);
    if (!car_legal(v_66)) v_67 = carerror(v_66); else
    v_67 = car(v_66);
    v_66 = stack[-1];
    v_66 = Latsoc(nil, v_67, v_66);
    v_67 = v_66;
    if (v_67 == nil) goto v_35;
    v_67 = stack[-2];
    if (!car_legal(v_67)) v_67 = carerror(v_67); else
    v_67 = car(v_67);
    if (!car_legal(v_67)) v_67 = carerror(v_67); else
    v_67 = car(v_67);
    if (!car_legal(v_67)) v_67 = cdrerror(v_67); else
    v_67 = cdr(v_67);
    if (!car_legal(v_66)) v_66 = cdrerror(v_66); else
    v_66 = cdr(v_66);
    v_66 = quot2(v_67, v_66);
    env = stack[-4];
    goto v_33;
v_35:
    v_66 = stack[-2];
    if (!car_legal(v_66)) v_66 = carerror(v_66); else
    v_66 = car(v_66);
    if (!car_legal(v_66)) v_66 = carerror(v_66); else
    v_66 = car(v_66);
    if (!car_legal(v_66)) v_66 = cdrerror(v_66); else
    v_66 = cdr(v_66);
    goto v_33;
    v_66 = nil;
v_33:
    v_67 = stack[-2];
    if (!car_legal(v_67)) v_67 = carerror(v_67); else
    v_67 = car(v_67);
    if (!car_legal(v_67)) v_67 = carerror(v_67); else
    v_67 = car(v_67);
    if (!car_legal(v_67)) v_67 = carerror(v_67); else
    v_67 = car(v_67);
    {   LispObject fn = basic_elt(env, 1); // to
    stack[-3] = (*qfn2(fn))(fn, v_67, v_66);
    }
    env = stack[-4];
    v_66 = stack[-2];
    if (!car_legal(v_66)) v_66 = carerror(v_66); else
    v_66 = car(v_66);
    if (!car_legal(v_66)) v_67 = cdrerror(v_66); else
    v_67 = cdr(v_66);
    v_66 = stack[-1];
    {   LispObject fn = basic_elt(env, 0); // sfto_subfwd
    stack[0] = (*qfn2(fn))(fn, v_67, v_66);
    }
    env = stack[-4];
    v_66 = stack[-2];
    if (!car_legal(v_66)) v_67 = cdrerror(v_66); else
    v_67 = cdr(v_66);
    v_66 = stack[-1];
    {   LispObject fn = basic_elt(env, 0); // sfto_subfwd
    v_66 = (*qfn2(fn))(fn, v_67, v_66);
    }
    {
        LispObject v_72 = stack[-3];
        LispObject v_73 = stack[0];
        return acons(v_72, v_73, v_66);
    }
v_8:
    return onevalue(v_66);
}



// Code for opfneval

static LispObject CC_opfneval(LispObject env,
                         LispObject v_2)
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
    v_64 = v_2;
// end of prologue
    v_65 = v_64;
    if (!car_legal(v_65)) stack[-4] = carerror(v_65); else
    stack[-4] = car(v_65);
    v_65 = v_64;
    if (!car_legal(v_65)) v_66 = carerror(v_65); else
    v_66 = car(v_65);
    v_65 = basic_elt(env, 1); // noval
    v_65 = Lflagp(nil, v_66, v_65);
    env = stack[-5];
    if (v_65 == nil) goto v_17;
    if (!car_legal(v_64)) v_64 = cdrerror(v_64); else
    v_64 = cdr(v_64);
    goto v_15;
v_17:
    v_65 = v_64;
    if (!car_legal(v_65)) v_65 = cdrerror(v_65); else
    v_65 = cdr(v_65);
    if (!car_legal(v_64)) v_66 = carerror(v_64); else
    v_66 = car(v_64);
    v_64 = basic_elt(env, 2); // nosimp
    v_66 = get(v_66, v_64);
    env = stack[-5];
    v_64 = lisp_true;
    {   LispObject fn = basic_elt(env, 3); // fnreval
    v_64 = (*qfn3(fn))(fn, v_65, v_66, v_64);
    }
    env = stack[-5];
    goto v_15;
    v_64 = nil;
v_15:
    stack[-3] = v_64;
    v_64 = stack[-3];
    if (v_64 == nil) goto v_36;
    else goto v_37;
v_36:
    v_64 = nil;
    goto v_12;
v_37:
    v_64 = stack[-3];
    if (!car_legal(v_64)) v_64 = carerror(v_64); else
    v_64 = car(v_64);
    v_64 = Lmkquote(nil, v_64);
    env = stack[-5];
    v_64 = ncons(v_64);
    env = stack[-5];
    stack[-1] = v_64;
    stack[-2] = v_64;
v_13:
    v_64 = stack[-3];
    if (!car_legal(v_64)) v_64 = cdrerror(v_64); else
    v_64 = cdr(v_64);
    stack[-3] = v_64;
    v_64 = stack[-3];
    if (v_64 == nil) goto v_50;
    else goto v_51;
v_50:
    v_64 = stack[-2];
    goto v_12;
v_51:
    stack[0] = stack[-1];
    v_64 = stack[-3];
    if (!car_legal(v_64)) v_64 = carerror(v_64); else
    v_64 = car(v_64);
    v_64 = Lmkquote(nil, v_64);
    env = stack[-5];
    v_64 = ncons(v_64);
    env = stack[-5];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_64);
    v_64 = stack[-1];
    if (!car_legal(v_64)) v_64 = cdrerror(v_64); else
    v_64 = cdr(v_64);
    stack[-1] = v_64;
    goto v_13;
v_12:
    v_64 = cons(stack[-4], v_64);
    env = stack[-5];
    {
        LispObject fn = basic_elt(env, 4); // lispeval
        return (*qfn1(fn))(fn, v_64);
    }
}



// Code for initarg

static LispObject CC_initarg(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_178, v_179;
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
    v_178 = qvalue(basic_elt(env, 1)); // op
    if (!symbolp(v_178)) v_178 = nil;
    else { v_178 = qfastgets(v_178);
           if (v_178 != nil) { v_178 = elt(v_178, 43); // symmetric
#ifdef RECORD_GET
             if (v_178 == SPID_NOPROP)
                record_get(elt(fastget_names, 43), 0),
                v_178 = nil;
             else record_get(elt(fastget_names, 43), 1),
                v_178 = lisp_true; }
           else record_get(elt(fastget_names, 43), 0); }
#else
             if (v_178 == SPID_NOPROP) v_178 = nil; else v_178 = lisp_true; }}
#endif
    setvalue(basic_elt(env, 2), v_178); // symm
    v_178 = qvalue(basic_elt(env, 3)); // p
    stack[0] = Llength(nil, v_178);
    env = stack[-6];
    v_178 = qvalue(basic_elt(env, 4)); // r
    v_178 = Llength(nil, v_178);
    env = stack[-6];
    v_178 = difference2(stack[0], v_178);
    env = stack[-6];
    v_178 = add1(v_178);
    env = stack[-6];
    stack[-1] = v_178;
    v_178 = qvalue(basic_elt(env, 1)); // op
    {   LispObject fn = basic_elt(env, 14); // ident
    v_178 = (*qfn1(fn))(fn, v_178);
    }
    env = stack[-6];
    setvalue(basic_elt(env, 5), v_178); // identity
    v_178 = qvalue(basic_elt(env, 4)); // r
    if (!car_legal(v_178)) v_178 = carerror(v_178); else
    v_178 = car(v_178);
    {   LispObject fn = basic_elt(env, 15); // mgenp
    v_178 = (*qfn1(fn))(fn, v_178);
    }
    env = stack[-6];
    stack[-3] = v_178;
    v_178 = qvalue(basic_elt(env, 4)); // r
    if (!car_legal(v_178)) v_178 = cdrerror(v_178); else
    v_178 = cdr(v_178);
    {   LispObject fn = basic_elt(env, 16); // list!-mgen
    v_178 = (*qfn1(fn))(fn, v_178);
    }
    env = stack[-6];
    stack[0] = v_178;
    v_179 = qvalue(basic_elt(env, 1)); // op
    v_178 = basic_elt(env, 6); // assoc
    v_178 = Lflagp(nil, v_179, v_178);
    env = stack[-6];
    if (v_178 == nil) goto v_33;
    v_178 = qvalue(basic_elt(env, 2)); // symm
    if (v_178 == nil) goto v_39;
    else goto v_40;
v_39:
    v_178 = nil;
    goto v_38;
v_40:
    v_179 = stack[0];
    v_178 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_178 = static_cast<LispObject>(greaterp2(v_179, v_178));
    v_178 = v_178 ? lisp_true : nil;
    env = stack[-6];
    if (v_178 == nil) goto v_47;
    else goto v_48;
v_47:
    v_178 = nil;
    goto v_46;
v_48:
    v_178 = qvalue(basic_elt(env, 7)); // !*sym!-assoc
    v_178 = (v_178 == nil ? lisp_true : nil);
    goto v_46;
    v_178 = nil;
v_46:
    goto v_38;
    v_178 = nil;
v_38:
    v_178 = (v_178 == nil ? lisp_true : nil);
    goto v_31;
v_33:
    v_178 = nil;
    goto v_31;
    v_178 = nil;
v_31:
    stack[-5] = v_178;
    v_178 = qvalue(basic_elt(env, 4)); // r
    v_179 = Llength(nil, v_178);
    env = stack[-6];
    v_178 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_178 = static_cast<LispObject>(greaterp2(v_179, v_178));
    v_178 = v_178 ? lisp_true : nil;
    env = stack[-6];
    if (v_178 == nil) goto v_63;
    else goto v_64;
v_63:
    v_178 = nil;
    goto v_62;
v_64:
    v_178 = stack[-5];
    if (v_178 == nil) goto v_74;
    else goto v_73;
v_74:
    v_178 = stack[0];
v_73:
    goto v_62;
    v_178 = nil;
v_62:
    stack[-2] = v_178;
    v_179 = stack[-1];
    v_178 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_178 = static_cast<LispObject>(greaterp2(v_179, v_178));
    v_178 = v_178 ? lisp_true : nil;
    env = stack[-6];
    if (v_178 == nil) goto v_79;
    else goto v_78;
v_79:
    v_178 = qvalue(basic_elt(env, 5)); // identity
    if (v_178 == nil) goto v_85;
    else goto v_86;
v_85:
    v_178 = nil;
    goto v_84;
v_86:
    v_178 = qvalue(basic_elt(env, 3)); // p
    v_179 = Llength(nil, v_178);
    env = stack[-6];
    v_178 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_178 = static_cast<LispObject>(greaterp2(v_179, v_178));
    v_178 = v_178 ? lisp_true : nil;
    env = stack[-6];
    goto v_84;
    v_178 = nil;
v_84:
v_78:
    v_179 = v_178;
    v_178 = stack[-3];
    if (v_178 == nil) goto v_97;
    else goto v_98;
v_97:
    v_178 = nil;
    goto v_96;
v_98:
    v_178 = v_179;
    goto v_96;
    v_178 = nil;
v_96:
    setvalue(basic_elt(env, 8), v_178); // mcontract
    v_178 = stack[-5];
    if (v_178 == nil) goto v_106;
    else goto v_107;
v_106:
    v_178 = nil;
    goto v_105;
v_107:
    v_178 = v_179;
    if (v_178 == nil) goto v_114;
    else goto v_115;
v_114:
    v_178 = nil;
    goto v_113;
v_115:
    v_178 = stack[-3];
    v_178 = (v_178 == nil ? lisp_true : nil);
    goto v_113;
    v_178 = nil;
v_113:
    goto v_105;
    v_178 = nil;
v_105:
    setvalue(basic_elt(env, 9), v_178); // acontract
    v_178 = qvalue(basic_elt(env, 5)); // identity
    if (v_178 == nil) goto v_124;
    else goto v_125;
v_124:
    v_178 = nil;
    goto v_123;
v_125:
    v_179 = stack[-1];
    v_178 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_178 = static_cast<LispObject>(lessp2(v_179, v_178));
    v_178 = v_178 ? lisp_true : nil;
    env = stack[-6];
    if (v_178 == nil) goto v_132;
    else goto v_131;
v_132:
    v_178 = stack[-2];
v_131:
    goto v_123;
    v_178 = nil;
v_123:
    setvalue(basic_elt(env, 10), v_178); // expand
    v_178 = stack[-2];
    if (v_178 == nil) goto v_141;
    else goto v_139;
v_141:
    v_179 = stack[-1];
    v_178 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_178 = static_cast<LispObject>(lessp2(v_179, v_178));
    v_178 = v_178 ? lisp_true : nil;
    env = stack[-6];
    if (v_178 == nil) goto v_143;
    else goto v_139;
v_143:
    goto v_140;
v_139:
    v_178 = stack[-3];
    if (v_178 == nil) goto v_150;
    v_178 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_148;
v_150:
    v_178 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_148;
    v_178 = nil;
v_148:
    goto v_138;
v_140:
    v_178 = stack[-1];
    goto v_138;
    v_178 = nil;
v_138:
    setvalue(basic_elt(env, 11), v_178); // i
    v_178 = qvalue(basic_elt(env, 5)); // identity
    if (v_178 == nil) goto v_162;
    v_178 = qvalue(basic_elt(env, 3)); // p
    v_178 = Llength(nil, v_178);
    env = stack[-6];
    goto v_160;
v_162:
    v_179 = stack[-1];
    v_178 = stack[0];
    v_178 = plus2(v_179, v_178);
    env = stack[-6];
    goto v_160;
    v_178 = nil;
v_160:
    setvalue(basic_elt(env, 12), v_178); // upb
    v_178 = qvalue(basic_elt(env, 2)); // symm
    if (v_178 == nil) goto v_174;
    v_178 = stack[-4];
    {   LispObject fn = basic_elt(env, 17); // initcomb
    v_178 = (*qfn1(fn))(fn, v_178);
    }
    env = stack[-6];
    setvalue(basic_elt(env, 13), v_178); // comb
    goto v_172;
v_174:
v_172:
    v_178 = nil;
    return onevalue(v_178);
}



// Code for sc_geq

static LispObject CC_sc_geq(LispObject env,
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
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_10 = v_3;
    v_11 = v_2;
// end of prologue
    {   LispObject fn = basic_elt(env, 1); // sc_subtrsq
    v_10 = (*qfn2(fn))(fn, v_11, v_10);
    }
    env = stack[0];
    {   LispObject fn = basic_elt(env, 2); // sc_minussq
    v_10 = (*qfn1(fn))(fn, v_10);
    }
    v_10 = (v_10 == nil ? lisp_true : nil);
    return onevalue(v_10);
}



// Code for boolvalue!*

static LispObject CC_boolvalueH(LispObject env,
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
    if (v_17 == nil) goto v_6;
    else goto v_7;
v_6:
    v_16 = nil;
    goto v_5;
v_7:
    v_17 = v_16;
    v_16 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_16 = (v_17 == v_16 ? lisp_true : nil);
    v_16 = (v_16 == nil ? lisp_true : nil);
    goto v_5;
    v_16 = nil;
v_5:
    return onevalue(v_16);
}



// Code for no!-side!-effect!-listp

static LispObject CC_noKsideKeffectKlistp(LispObject env,
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
v_1:
    v_25 = stack[0];
    if (v_25 == nil) goto v_6;
    else goto v_7;
v_6:
    v_25 = lisp_true;
    goto v_5;
v_7:
    v_25 = stack[0];
    if (!car_legal(v_25)) v_25 = carerror(v_25); else
    v_25 = car(v_25);
    {   LispObject fn = basic_elt(env, 1); // no!-side!-effectp
    v_25 = (*qfn1(fn))(fn, v_25);
    }
    env = stack[-1];
    if (v_25 == nil) goto v_14;
    else goto v_15;
v_14:
    v_25 = nil;
    goto v_13;
v_15:
    v_25 = stack[0];
    if (!car_legal(v_25)) v_25 = cdrerror(v_25); else
    v_25 = cdr(v_25);
    stack[0] = v_25;
    goto v_1;
    v_25 = nil;
v_13:
    goto v_5;
    v_25 = nil;
v_5:
    return onevalue(v_25);
}



// Code for lalr_cleanup

static LispObject CC_lalr_cleanup(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    push(nil, nil);
    stack_popper stack_popper_var(3);
// end of prologue
    v_36 = qvalue(basic_elt(env, 1)); // symbols
    stack[-1] = v_36;
v_6:
    v_36 = stack[-1];
    if (v_36 == nil) goto v_10;
    else goto v_11;
v_10:
    v_36 = nil;
    goto v_5;
v_11:
    v_36 = stack[-1];
    if (!car_legal(v_36)) v_36 = carerror(v_36); else
    v_36 = car(v_36);
    stack[0] = v_36;
    v_36 = stack[0];
    if (symbolp(v_36)) goto v_19;
    else goto v_20;
v_19:
    v_38 = stack[0];
    v_37 = basic_elt(env, 2); // lalr_produces
    v_36 = nil;
    v_36 = Lputprop(nil, v_38, v_37, v_36);
    env = stack[-2];
    v_38 = stack[0];
    v_37 = basic_elt(env, 3); // lalr_first
    v_36 = nil;
    v_36 = Lputprop(nil, v_38, v_37, v_36);
    env = stack[-2];
    v_38 = stack[0];
    v_37 = basic_elt(env, 4); // lalr_nonterminal_code
    v_36 = nil;
    v_36 = Lputprop(nil, v_38, v_37, v_36);
    env = stack[-2];
    goto v_18;
v_20:
v_18:
    v_36 = stack[-1];
    if (!car_legal(v_36)) v_36 = cdrerror(v_36); else
    v_36 = cdr(v_36);
    stack[-1] = v_36;
    goto v_6;
v_5:
    return onevalue(v_36);
}



// Code for open

static LispObject CC_open(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_37, v_38, v_39, v_40;
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
    v_39 = v_3;
    v_40 = v_2;
// end of prologue
    v_38 = v_39;
    v_37 = basic_elt(env, 1); // input
    if (v_38 == v_37) goto v_7;
    else goto v_8;
v_7:
    v_38 = v_40;
    v_37 = static_cast<LispObject>(1040)+TAG_FIXNUM; // 65
    {
        LispObject fn = basic_elt(env, 5); // internal!-open
        return (*qfn2(fn))(fn, v_38, v_37);
    }
v_8:
    v_38 = v_39;
    v_37 = basic_elt(env, 2); // output
    if (v_38 == v_37) goto v_14;
    else goto v_15;
v_14:
    stack[0] = v_40;
    v_38 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_37 = static_cast<LispObject>(832)+TAG_FIXNUM; // 52
    v_37 = plus2(v_38, v_37);
    env = stack[-1];
    {
        LispObject v_42 = stack[0];
        LispObject fn = basic_elt(env, 5); // internal!-open
        return (*qfn2(fn))(fn, v_42, v_37);
    }
v_15:
    v_38 = v_39;
    v_37 = basic_elt(env, 3); // append
    if (v_38 == v_37) goto v_23;
    else goto v_24;
v_23:
    stack[0] = v_40;
    v_38 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_37 = static_cast<LispObject>(640)+TAG_FIXNUM; // 40
    v_37 = plus2(v_38, v_37);
    env = stack[-1];
    {
        LispObject v_43 = stack[0];
        LispObject fn = basic_elt(env, 5); // internal!-open
        return (*qfn2(fn))(fn, v_43, v_37);
    }
v_24:
    v_37 = basic_elt(env, 4); // "bad direction ~A in open"
    v_38 = v_39;
    {
        LispObject fn = basic_elt(env, 6); // error
        return (*qfn2(fn))(fn, v_37, v_38);
    }
    v_37 = nil;
    return onevalue(v_37);
}



// Code for pushback

static LispObject CC_pushback(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_3;
    v_31 = v_2;
// end of prologue
v_11:
    v_32 = v_31;
    if (!car_legal(v_32)) v_32 = carerror(v_32); else
    v_32 = car(v_32);
    if (v_32 == nil) goto v_14;
    else goto v_15;
v_14:
    goto v_10;
v_15:
    if (!car_legal(v_31)) v_31 = cdrerror(v_31); else
    v_31 = cdr(v_31);
    goto v_11;
v_10:
    stack[-1] = v_31;
    v_32 = v_31;
    if (!car_legal(v_32)) v_32 = carerror(v_32); else
    v_32 = car(v_32);
    if (!car_legal(v_31)) v_31 = cdrerror(v_31); else
    v_31 = cdr(v_31);
    v_31 = cons(v_32, v_31);
    if (!car_legal(stack[-1])) rplacd_fails(stack[-1]);
    setcdr(stack[-1], v_31);
    v_32 = stack[-1];
    v_31 = stack[0];
    if (!car_legal(v_32)) rplaca_fails(v_32);
    setcar(v_32, v_31);
    v_31 = nil;
    return onevalue(v_31);
}



// Code for talp_getinvfsym

static LispObject CC_talp_getinvfsym(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // talp_getextl
    v_44 = (*qfn0(fn))(fn);
    }
    env = stack[-3];
    stack[-2] = v_44;
v_11:
    v_44 = stack[-2];
    if (!car_legal(v_44)) v_44 = carerror(v_44); else
    v_44 = car(v_44);
    if (!car_legal(v_44)) v_45 = carerror(v_44); else
    v_45 = car(v_44);
    v_44 = stack[-1];
    if (equal(v_45, v_44)) goto v_14;
    else goto v_15;
v_14:
    goto v_10;
v_15:
    v_44 = stack[-2];
    if (!car_legal(v_44)) v_44 = cdrerror(v_44); else
    v_44 = cdr(v_44);
    stack[-2] = v_44;
    goto v_11;
v_10:
    v_44 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-1] = v_44;
v_26:
    v_45 = stack[0];
    v_44 = stack[-1];
    v_44 = difference2(v_45, v_44);
    env = stack[-3];
    v_44 = Lminusp(nil, v_44);
    env = stack[-3];
    if (v_44 == nil) goto v_31;
    goto v_25;
v_31:
    v_44 = stack[-2];
    if (!car_legal(v_44)) v_44 = cdrerror(v_44); else
    v_44 = cdr(v_44);
    stack[-2] = v_44;
    v_44 = stack[-1];
    v_44 = add1(v_44);
    env = stack[-3];
    stack[-1] = v_44;
    goto v_26;
v_25:
    v_44 = stack[-2];
    if (!car_legal(v_44)) v_44 = carerror(v_44); else
    v_44 = car(v_44);
    if (!car_legal(v_44)) v_44 = carerror(v_44); else
    v_44 = car(v_44);
    return onevalue(v_44);
}



// Code for qqe_eta!-in!-term1

static LispObject CC_qqe_etaKinKterm1(LispObject env,
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
    if (!car_legal(v_25)) v_25 = carerror(v_25); else
    v_25 = car(v_25);
    {   LispObject fn = basic_elt(env, 2); // qqe_simplterm
    v_25 = (*qfn1(fn))(fn, v_25);
    }
    env = stack[-2];
    stack[-1] = v_25;
    v_25 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // qqe_op
    v_26 = (*qfn1(fn))(fn, v_25);
    }
    env = stack[-2];
    v_25 = stack[-1];
    v_25 = cons(v_26, v_25);
    env = stack[-2];
    v_25 = stack[-1];
    v_26 = basic_elt(env, 1); // qepsilon
    if (v_25 == v_26) goto v_17;
    else goto v_18;
v_17:
    v_25 = lisp_true;
    goto v_6;
v_18:
    v_25 = nil;
    goto v_6;
    v_25 = nil;
v_6:
    return onevalue(v_25);
}



// Code for pasf_fact

static LispObject CC_pasf_fact(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_126, v_127, v_128;
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
    stack[-1] = v_2;
// end of prologue
    v_127 = stack[-1];
    v_126 = basic_elt(env, 1); // true
    if (v_127 == v_126) goto v_15;
    else goto v_16;
v_15:
    v_126 = lisp_true;
    goto v_14;
v_16:
    v_127 = stack[-1];
    v_126 = basic_elt(env, 2); // false
    v_126 = (v_127 == v_126 ? lisp_true : nil);
    goto v_14;
    v_126 = nil;
v_14:
    if (v_126 == nil) goto v_12;
    v_126 = stack[-1];
    goto v_8;
v_12:
    v_126 = stack[-1];
    if (!car_legal(v_126)) v_126 = carerror(v_126); else
    v_126 = car(v_126);
    stack[-5] = v_126;
    v_126 = stack[-1];
    if (!car_legal(v_126)) v_126 = cdrerror(v_126); else
    v_126 = cdr(v_126);
    if (!car_legal(v_126)) v_126 = carerror(v_126); else
    v_126 = car(v_126);
    {   LispObject fn = basic_elt(env, 8); // fctrf
    v_126 = (*qfn1(fn))(fn, v_126);
    }
    env = stack[-6];
    stack[0] = v_126;
    v_126 = stack[0];
    v_127 = Llength(nil, v_126);
    env = stack[-6];
    v_126 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_126 = static_cast<LispObject>(lessp2(v_127, v_126));
    v_126 = v_126 ? lisp_true : nil;
    env = stack[-6];
    if (v_126 == nil) goto v_35;
    v_126 = stack[-1];
    goto v_8;
v_35:
    v_127 = stack[-5];
    v_126 = basic_elt(env, 3); // (equal neq)
    v_126 = Lmemq(nil, v_127, v_126);
    if (v_126 == nil) goto v_44;
    v_127 = stack[-5];
    v_126 = basic_elt(env, 4); // equal
    if (v_127 == v_126) goto v_51;
    else goto v_52;
v_51:
    v_126 = basic_elt(env, 5); // or
    stack[-4] = v_126;
    goto v_50;
v_52:
    v_126 = basic_elt(env, 6); // and
    stack[-4] = v_126;
    goto v_50;
    stack[-4] = nil;
v_50:
    v_126 = stack[0];
    if (!car_legal(v_126)) v_126 = cdrerror(v_126); else
    v_126 = cdr(v_126);
    stack[-3] = v_126;
    v_126 = stack[-3];
    if (v_126 == nil) goto v_69;
    else goto v_70;
v_69:
    v_126 = nil;
    goto v_63;
v_70:
    v_126 = stack[-3];
    if (!car_legal(v_126)) v_126 = carerror(v_126); else
    v_126 = car(v_126);
    v_128 = stack[-5];
    if (!car_legal(v_126)) v_127 = carerror(v_126); else
    v_127 = car(v_126);
    v_126 = nil;
    v_126 = list3(v_128, v_127, v_126);
    env = stack[-6];
    v_126 = ncons(v_126);
    env = stack[-6];
    stack[-1] = v_126;
    stack[-2] = v_126;
v_64:
    v_126 = stack[-3];
    if (!car_legal(v_126)) v_126 = cdrerror(v_126); else
    v_126 = cdr(v_126);
    stack[-3] = v_126;
    v_126 = stack[-3];
    if (v_126 == nil) goto v_86;
    else goto v_87;
v_86:
    v_126 = stack[-2];
    goto v_63;
v_87:
    stack[0] = stack[-1];
    v_126 = stack[-3];
    if (!car_legal(v_126)) v_126 = carerror(v_126); else
    v_126 = car(v_126);
    v_128 = stack[-5];
    if (!car_legal(v_126)) v_127 = carerror(v_126); else
    v_127 = car(v_126);
    v_126 = nil;
    v_126 = list3(v_128, v_127, v_126);
    env = stack[-6];
    v_126 = ncons(v_126);
    env = stack[-6];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_126);
    v_126 = stack[-1];
    if (!car_legal(v_126)) v_126 = cdrerror(v_126); else
    v_126 = cdr(v_126);
    stack[-1] = v_126;
    goto v_64;
v_63:
    {
        LispObject v_135 = stack[-4];
        return cons(v_135, v_126);
    }
v_44:
    v_127 = stack[-5];
    v_126 = basic_elt(env, 7); // (leq lessp geq greaterp)
    v_126 = Lmemq(nil, v_127, v_126);
    if (v_126 == nil) goto v_106;
    v_126 = stack[0];
    if (!car_legal(v_126)) stack[-1] = cdrerror(v_126); else
    stack[-1] = cdr(v_126);
    v_126 = stack[0];
    if (!car_legal(v_126)) v_126 = carerror(v_126); else
    v_126 = car(v_126);
    {   LispObject fn = basic_elt(env, 9); // minusf
    v_126 = (*qfn1(fn))(fn, v_126);
    }
    env = stack[-6];
    if (v_126 == nil) goto v_116;
    v_126 = stack[-5];
    {   LispObject fn = basic_elt(env, 10); // pasf_anegrel
    v_126 = (*qfn1(fn))(fn, v_126);
    }
    env = stack[-6];
    goto v_114;
v_116:
    v_126 = stack[-5];
    goto v_114;
    v_126 = nil;
v_114:
    {
        LispObject v_136 = stack[-1];
        LispObject fn = basic_elt(env, 11); // pasf_fact1
        return (*qfn2(fn))(fn, v_136, v_126);
    }
v_106:
    v_126 = stack[-1];
v_8:
    return onevalue(v_126);
}



// Code for acfsf_0mk2

static LispObject CC_acfsf_0mk2(LispObject env,
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
    return list3(v_11, v_10, v_9);
}



// Code for degree!-order

static LispObject CC_degreeKorder(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_46, v_47, v_48;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_46 = v_3;
    v_47 = v_2;
// end of prologue
    v_48 = v_47;
    if (!consp(v_48)) goto v_11;
    else goto v_12;
v_11:
    v_48 = lisp_true;
    goto v_10;
v_12:
    v_48 = v_47;
    if (!car_legal(v_48)) v_48 = carerror(v_48); else
    v_48 = car(v_48);
    v_48 = (consp(v_48) ? nil : lisp_true);
    goto v_10;
    v_48 = nil;
v_10:
    if (v_48 == nil) goto v_8;
    v_46 = lisp_true;
    goto v_6;
v_8:
    v_48 = v_46;
    if (!consp(v_48)) goto v_25;
    else goto v_26;
v_25:
    v_48 = lisp_true;
    goto v_24;
v_26:
    v_48 = v_46;
    if (!car_legal(v_48)) v_48 = carerror(v_48); else
    v_48 = car(v_48);
    v_48 = (consp(v_48) ? nil : lisp_true);
    goto v_24;
    v_48 = nil;
v_24:
    if (v_48 == nil) goto v_22;
    v_46 = nil;
    goto v_6;
v_22:
    if (!car_legal(v_47)) v_47 = carerror(v_47); else
    v_47 = car(v_47);
    if (!car_legal(v_47)) v_47 = carerror(v_47); else
    v_47 = car(v_47);
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    if (!car_legal(v_46)) v_46 = carerror(v_46); else
    v_46 = car(v_46);
    if (!car_legal(v_46)) v_46 = carerror(v_46); else
    v_46 = car(v_46);
    if (!car_legal(v_46)) v_46 = cdrerror(v_46); else
    v_46 = cdr(v_46);
        return Llessp_2(nil, v_47, v_46);
    v_46 = nil;
v_6:
    return onevalue(v_46);
}



// Code for lambdaom

static LispObject CC_lambdaom(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    v_40 = v_2;
// end of prologue
    v_39 = v_40;
    if (!car_legal(v_39)) v_39 = cdrerror(v_39); else
    v_39 = cdr(v_39);
    if (!car_legal(v_39)) v_39 = cdrerror(v_39); else
    v_39 = cdr(v_39);
    if (!car_legal(v_39)) v_39 = carerror(v_39); else
    v_39 = car(v_39);
    if (!car_legal(v_39)) v_39 = cdrerror(v_39); else
    v_39 = cdr(v_39);
    if (!car_legal(v_39)) v_39 = carerror(v_39); else
    v_39 = car(v_39);
    stack[-1] = v_39;
    v_39 = v_40;
    v_39 = Lreverse(nil, v_39);
    env = stack[-2];
    if (!car_legal(v_39)) v_39 = carerror(v_39); else
    v_39 = car(v_39);
    stack[0] = v_39;
    v_39 = basic_elt(env, 1); // "<OMBIND>"
    {   LispObject fn = basic_elt(env, 6); // printout
    v_39 = (*qfn1(fn))(fn, v_39);
    }
    env = stack[-2];
    v_39 = lisp_true;
    {   LispObject fn = basic_elt(env, 7); // indent!*
    v_39 = (*qfn1(fn))(fn, v_39);
    }
    env = stack[-2];
    v_39 = basic_elt(env, 2); // "<OMS cd=""fns1"" name=""lambda""/>"
    {   LispObject fn = basic_elt(env, 6); // printout
    v_39 = (*qfn1(fn))(fn, v_39);
    }
    env = stack[-2];
    v_39 = basic_elt(env, 3); // "<OMBVAR>"
    {   LispObject fn = basic_elt(env, 6); // printout
    v_39 = (*qfn1(fn))(fn, v_39);
    }
    env = stack[-2];
    v_39 = lisp_true;
    {   LispObject fn = basic_elt(env, 7); // indent!*
    v_39 = (*qfn1(fn))(fn, v_39);
    }
    env = stack[-2];
    v_39 = stack[-1];
    {   LispObject fn = basic_elt(env, 8); // objectom
    v_39 = (*qfn1(fn))(fn, v_39);
    }
    env = stack[-2];
    v_39 = nil;
    {   LispObject fn = basic_elt(env, 7); // indent!*
    v_39 = (*qfn1(fn))(fn, v_39);
    }
    env = stack[-2];
    v_39 = basic_elt(env, 4); // "</OMBVAR>"
    {   LispObject fn = basic_elt(env, 6); // printout
    v_39 = (*qfn1(fn))(fn, v_39);
    }
    env = stack[-2];
    v_39 = stack[0];
    {   LispObject fn = basic_elt(env, 8); // objectom
    v_39 = (*qfn1(fn))(fn, v_39);
    }
    env = stack[-2];
    v_39 = nil;
    {   LispObject fn = basic_elt(env, 7); // indent!*
    v_39 = (*qfn1(fn))(fn, v_39);
    }
    env = stack[-2];
    v_39 = basic_elt(env, 5); // "</OMBIND>"
    {   LispObject fn = basic_elt(env, 6); // printout
    v_39 = (*qfn1(fn))(fn, v_39);
    }
    v_39 = nil;
    return onevalue(v_39);
}



// Code for inprinla

static LispObject CC_inprinla(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    v_60 = stack[-2];
    if (!symbolp(v_60)) v_60 = nil;
    else { v_60 = qfastgets(v_60);
           if (v_60 != nil) { v_60 = elt(v_60, 49); // alt
#ifdef RECORD_GET
             if (v_60 != SPID_NOPROP)
                record_get(elt(fastget_names, 49), 1);
             else record_get(elt(fastget_names, 49), 0),
                v_60 = nil; }
           else record_get(elt(fastget_names, 49), 0); }
#else
             if (v_60 == SPID_NOPROP) v_60 = nil; }}
#endif
    if (v_60 == nil) goto v_13;
    goto v_9;
v_13:
    v_60 = stack[0];
    if (!car_legal(v_60)) v_61 = carerror(v_60); else
    v_61 = car(v_60);
    v_60 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // maprintla
    v_60 = (*qfn2(fn))(fn, v_61, v_60);
    }
    env = stack[-4];
v_8:
    v_60 = stack[0];
    if (!car_legal(v_60)) v_60 = cdrerror(v_60); else
    v_60 = cdr(v_60);
    stack[0] = v_60;
v_9:
    v_60 = stack[0];
    if (v_60 == nil) goto v_24;
    else goto v_25;
v_24:
    v_60 = nil;
    goto v_7;
v_25:
    v_60 = stack[0];
    if (!car_legal(v_60)) v_60 = carerror(v_60); else
    v_60 = car(v_60);
    if (!consp(v_60)) goto v_32;
    else goto v_33;
v_32:
    v_60 = lisp_true;
    goto v_31;
v_33:
    stack[-3] = stack[-2];
    v_60 = stack[0];
    if (!car_legal(v_60)) v_60 = carerror(v_60); else
    v_60 = car(v_60);
    if (!car_legal(v_60)) v_61 = carerror(v_60); else
    v_61 = car(v_60);
    v_60 = basic_elt(env, 1); // alt
    v_60 = Lget(nil, v_61, v_60);
    env = stack[-4];
    v_60 = (stack[-3] == v_60 ? lisp_true : nil);
    v_60 = (v_60 == nil ? lisp_true : nil);
    goto v_31;
    v_60 = nil;
v_31:
    if (v_60 == nil) goto v_29;
    v_60 = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // oprinla
    v_60 = (*qfn1(fn))(fn, v_60);
    }
    env = stack[-4];
    v_60 = stack[0];
    if (!car_legal(v_60)) v_60 = carerror(v_60); else
    v_60 = car(v_60);
    {   LispObject fn = basic_elt(env, 4); // negnumberchk
    v_61 = (*qfn1(fn))(fn, v_60);
    }
    env = stack[-4];
    v_60 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // maprintla
    v_60 = (*qfn2(fn))(fn, v_61, v_60);
    }
    env = stack[-4];
    goto v_23;
v_29:
    v_60 = stack[0];
    if (!car_legal(v_60)) v_61 = carerror(v_60); else
    v_61 = car(v_60);
    v_60 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // maprintla
    v_60 = (*qfn2(fn))(fn, v_61, v_60);
    }
    env = stack[-4];
    goto v_23;
v_23:
    goto v_8;
v_7:
    return onevalue(v_60);
}



setup_type const u29_setup[] =
{
    {"mkfil*",                  G0W1,     CC_mkfilH,G2W1,     G3W1,     G4W1},
    {"sortedtriplelistinsert",  G0W2,     G1W2,     CC_sortedtriplelistinsert,G3W2,G4W2},
    {"cquotegex",               G0W1,     CC_cquotegex,G2W1,  G3W1,     G4W1},
    {"ofsf_facequal*",          G0W2,     G1W2,     CC_ofsf_facequalH,G3W2,G4W2},
    {"talp_copy",               G0W1,     CC_talp_copy,G2W1,  G3W1,     G4W1},
    {"factor-prim-f",           G0W1,     CC_factorKprimKf,G2W1,G3W1,   G4W1},
    {"evrevgradlexcomp",        G0W2,     G1W2,     CC_evrevgradlexcomp,G3W2,G4W2},
    {"critical_element",        G0W1,     CC_critical_element,G2W1,G3W1,G4W1},
    {"bfplusn",                 G0W2,     G1W2,     CC_bfplusn,G3W2,    G4W2},
    {"st_consolidate",          G0W1,     CC_st_consolidate,G2W1,G3W1,  G4W1},
    {"ratminus",                G0W1,     CC_ratminus,G2W1,   G3W1,     G4W1},
    {"cde_odd_derivatives",     G0W1,     CC_cde_odd_derivatives,G2W1,G3W1,G4W1},
    {"hasarg",                  G0W2,     G1W2,     CC_hasarg,G3W2,     G4W2},
    {"ofsf_posvarp",            G0W2,     G1W2,     CC_ofsf_posvarp,G3W2,G4W2},
    {"rndifference:",           G0W2,     G1W2,     CC_rndifferenceT,G3W2,G4W2},
    {"mk+trace",                G0W1,     CC_mkLtrace,G2W1,   G3W1,     G4W1},
    {"talp_specsubat",          G0W3,     G1W3,     G2W3,     CC_talp_specsubat,G4W3},
    {"vdp_sugar",               G0W1,     CC_vdp_sugar,G2W1,  G3W1,     G4W1},
    {"unresidp",                G0W1,     CC_unresidp,G2W1,   G3W1,     G4W1},
    {"physop-multfnc",          G0W2,     G1W2,     CC_physopKmultfnc,G3W2,G4W2},
    {"edge_new_parents",        G0W1,     CC_edge_new_parents,G2W1,G3W1,G4W1},
    {"groeb=newpair",           G0W3,     G1W3,     G2W3,     CC_groebMnewpair,G4W3},
    {"quotof",                  G0W2,     G1W2,     CC_quotof,G3W2,     G4W2},
    {"ra_wrapper1",             G0W3,     G1W3,     G2W3,     CC_ra_wrapper1,G4W3},
    {"negind",                  G0W2,     G1W2,     CC_negind,G3W2,     G4W2},
    {"tayexp-minus",            G0W1,     CC_tayexpKminus,G2W1,G3W1,    G4W1},
    {"cl_rename-vars",          G0W1,     CC_cl_renameKvars,G2W1,G3W1,  G4W1},
    {"rl_susipost",             G0W2,     G1W2,     CC_rl_susipost,G3W2,G4W2},
    {"dip_f2dip1",              G0W3,     G1W3,     G2W3,     CC_dip_f2dip1,G4W3},
    {"omfir",                   CC_omfir, G1W0,     G2W0,     G3W0,     G4W0},
    {"getphystypetimes",        G0W1,     CC_getphystypetimes,G2W1,G3W1,G4W1},
    {"prop-simp2",              G0W2,     G1W2,     CC_propKsimp2,G3W2, G4W2},
    {"quotpri",                 G0W1,     CC_quotpri,G2W1,    G3W1,     G4W1},
    {"red_tailred",             G0W2,     G1W2,     CC_red_tailred,G3W2,G4W2},
    {"no_dum_varp",             G0W1,     CC_no_dum_varp,G2W1,G3W1,     G4W1},
    {"arminusp:",               G0W1,     CC_arminuspT,G2W1,  G3W1,     G4W1},
    {"idtomind",                G0W2,     G1W2,     CC_idtomind,G3W2,   G4W2},
    {"expansion_name",          CC_expansion_name,G1W0,G2W0,  G3W0,     G4W0},
    {"quotkx",                  G0W2,     G1W2,     CC_quotkx,G3W2,     G4W2},
    {"ifstat",                  CC_ifstat,G1W0,     G2W0,     G3W0,     G4W0},
    {"add-degrees",             G0W2,     G1W2,     CC_addKdegrees,G3W2,G4W2},
    {"cl_sordpl",               G0W2,     G1W2,     CC_cl_sordpl,G3W2,  G4W2},
    {"pasf_or",                 G0W1,     CC_pasf_or,G2W1,    G3W1,     G4W1},
    {"sfto_subfwd",             G0W2,     G1W2,     CC_sfto_subfwd,G3W2,G4W2},
    {"opfneval",                G0W1,     CC_opfneval,G2W1,   G3W1,     G4W1},
    {"initarg",                 G0W1,     CC_initarg,G2W1,    G3W1,     G4W1},
    {"sc_geq",                  G0W2,     G1W2,     CC_sc_geq,G3W2,     G4W2},
    {"boolvalue*",              G0W1,     CC_boolvalueH,G2W1, G3W1,     G4W1},
    {"no-side-effect-listp",    G0W1,     CC_noKsideKeffectKlistp,G2W1,G3W1,G4W1},
    {"lalr_cleanup",            CC_lalr_cleanup,G1W0,G2W0,    G3W0,     G4W0},
    {"open",                    G0W2,     G1W2,     CC_open,  G3W2,     G4W2},
    {"pushback",                G0W2,     G1W2,     CC_pushback,G3W2,   G4W2},
    {"talp_getinvfsym",         G0W2,     G1W2,     CC_talp_getinvfsym,G3W2,G4W2},
    {"qqe_eta-in-term1",        G0W1,     CC_qqe_etaKinKterm1,G2W1,G3W1,G4W1},
    {"pasf_fact",               G0W1,     CC_pasf_fact,G2W1,  G3W1,     G4W1},
    {"acfsf_0mk2",              G0W2,     G1W2,     CC_acfsf_0mk2,G3W2, G4W2},
    {"degree-order",            G0W2,     G1W2,     CC_degreeKorder,G3W2,G4W2},
    {"lambdaom",                G0W1,     CC_lambdaom,G2W1,   G3W1,     G4W1},
    {"inprinla",                G0W3,     G1W3,     G2W3,     CC_inprinla,G4W3},
    {nullptr, 
        reinterpret_cast<no_args *>(
            reinterpret_cast<uintptr_t>("u29")),
        reinterpret_cast<one_arg *>(
            reinterpret_cast<uintptr_t>("8587 9814989 8628605")),
        nullptr, nullptr, nullptr}
};

// end of generated code
