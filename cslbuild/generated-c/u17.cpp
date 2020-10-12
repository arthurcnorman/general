
// $destdir/u17.c        Machine generated C code

// $Id$

#include "config.h"
#include "headers.h"



// Code for simpatom

static LispObject CC_simpatom(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_186, v_187, v_188;
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
    v_186 = stack[-1];
    if (v_186 == nil) goto v_6;
    else goto v_7;
v_6:
    v_187 = nil;
    v_186 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_187, v_186);
v_7:
    v_186 = stack[-1];
    if (is_number(v_186)) goto v_12;
    else goto v_13;
v_12:
    v_187 = stack[-1];
    v_186 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_187 == v_186) goto v_17;
    else goto v_18;
v_17:
    v_187 = nil;
    v_186 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_187, v_186);
v_18:
    v_186 = stack[-1];
    v_186 = integerp(v_186);
    if (v_186 == nil) goto v_24;
    else goto v_25;
v_24:
    v_186 = stack[-1];
    {
        LispObject fn = basic_elt(env, 11); // rd!:simp
        return (*qfn1(fn))(fn, v_186);
    }
v_25:
    v_187 = qvalue(basic_elt(env, 1)); // dmode!*
    v_186 = basic_elt(env, 2); // !:mod!:
    if (v_187 == v_186) goto v_34;
    else goto v_35;
v_34:
    v_187 = qvalue(basic_elt(env, 3)); // current!-modulus
    v_186 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_186 = (v_187 == v_186 ? lisp_true : nil);
    goto v_33;
v_35:
    v_186 = nil;
    goto v_33;
    v_186 = nil;
v_33:
    if (v_186 == nil) goto v_31;
    v_187 = nil;
    v_186 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_187, v_186);
v_31:
    v_186 = qvalue(basic_elt(env, 1)); // dmode!*
    if (!symbolp(v_186)) v_186 = nil;
    else { v_186 = qfastgets(v_186);
           if (v_186 != nil) { v_186 = elt(v_186, 5); // convert
#ifdef RECORD_GET
             if (v_186 == SPID_NOPROP)
                record_get(elt(fastget_names, 5), 0),
                v_186 = nil;
             else record_get(elt(fastget_names, 5), 1),
                v_186 = lisp_true; }
           else record_get(elt(fastget_names, 5), 0); }
#else
             if (v_186 == SPID_NOPROP) v_186 = nil; else v_186 = lisp_true; }}
#endif
    if (v_186 == nil) goto v_52;
    v_187 = stack[-1];
    v_186 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_186 = Lneq_2(nil, v_187, v_186);
    env = stack[-3];
    goto v_50;
v_52:
    v_186 = nil;
    goto v_50;
    v_186 = nil;
v_50:
    if (v_186 == nil) goto v_48;
    v_186 = qvalue(basic_elt(env, 1)); // dmode!*
    if (!symbolp(v_186)) v_187 = nil;
    else { v_187 = qfastgets(v_186);
           if (v_187 != nil) { v_187 = elt(v_187, 34); // i2d
#ifdef RECORD_GET
             if (v_187 != SPID_NOPROP)
                record_get(elt(fastget_names, 34), 1);
             else record_get(elt(fastget_names, 34), 0),
                v_187 = nil; }
           else record_get(elt(fastget_names, 34), 0); }
#else
             if (v_187 == SPID_NOPROP) v_187 = nil; }}
#endif
    v_186 = stack[-1];
    v_186 = Lapply1(nil, v_187, v_186);
    env = stack[-3];
    {
        LispObject fn = basic_elt(env, 12); // !*d2q
        return (*qfn1(fn))(fn, v_186);
    }
v_48:
    v_187 = stack[-1];
    v_186 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_187, v_186);
    v_186 = nil;
    goto v_5;
v_13:
    v_186 = stack[-1];
    v_186 = Lstringp(nil, v_186);
    env = stack[-3];
    if (v_186 == nil) goto v_72;
    v_187 = basic_elt(env, 4); // "String"
    v_186 = stack[-1];
    v_187 = list2(v_187, v_186);
    env = stack[-3];
    v_186 = basic_elt(env, 5); // "identifier"
    {
        LispObject fn = basic_elt(env, 13); // typerr
        return (*qfn2(fn))(fn, v_187, v_186);
    }
v_72:
    v_186 = stack[-1];
    if (!symbolp(v_186)) v_186 = nil;
    else { v_186 = qfastgets(v_186);
           if (v_186 != nil) { v_186 = elt(v_186, 17); // share
#ifdef RECORD_GET
             if (v_186 == SPID_NOPROP)
                record_get(elt(fastget_names, 17), 0),
                v_186 = nil;
             else record_get(elt(fastget_names, 17), 1),
                v_186 = lisp_true; }
           else record_get(elt(fastget_names, 17), 0); }
#else
             if (v_186 == SPID_NOPROP) v_186 = nil; else v_186 = lisp_true; }}
#endif
    if (v_186 == nil) goto v_81;
    v_186 = stack[-1];
    {   LispObject fn = basic_elt(env, 14); // lispeval
    v_186 = (*qfn1(fn))(fn, v_186);
    }
    env = stack[-3];
    v_188 = v_186;
    v_187 = v_188;
    v_186 = stack[-1];
    if (v_187 == v_186) goto v_89;
    else goto v_90;
v_89:
    v_187 = stack[-1];
    v_186 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {
        LispObject fn = basic_elt(env, 15); // mksq
        return (*qfn2(fn))(fn, v_187, v_186);
    }
v_90:
    v_186 = v_188;
    {
        LispObject fn = basic_elt(env, 16); // simp
        return (*qfn1(fn))(fn, v_186);
    }
    v_186 = nil;
    goto v_5;
v_81:
    v_186 = stack[-1];
    if (!symbolp(v_186)) v_186 = nil;
    else { v_186 = qfastgets(v_186);
           if (v_186 != nil) { v_186 = elt(v_186, 56); // idvalfn
#ifdef RECORD_GET
             if (v_186 != SPID_NOPROP)
                record_get(elt(fastget_names, 56), 1);
             else record_get(elt(fastget_names, 56), 0),
                v_186 = nil; }
           else record_get(elt(fastget_names, 56), 0); }
#else
             if (v_186 == SPID_NOPROP) v_186 = nil; }}
#endif
    stack[-2] = v_186;
    if (v_186 == nil) goto v_108;
    v_187 = stack[-2];
    v_186 = stack[-1];
        return Lapply1(nil, v_187, v_186);
v_108:
    v_186 = qvalue(basic_elt(env, 6)); // !*numval
    if (v_186 == nil) goto v_115;
    v_186 = qvalue(basic_elt(env, 1)); // dmode!*
    if (v_186 == nil) goto v_115;
    v_187 = stack[-1];
    v_186 = basic_elt(env, 7); // constant
    v_186 = Lflagp(nil, v_187, v_186);
    env = stack[-3];
    if (v_186 == nil) goto v_125;
    v_187 = stack[-1];
    v_186 = qvalue(basic_elt(env, 1)); // dmode!*
    v_186 = get(v_187, v_186);
    env = stack[-3];
    stack[-2] = v_186;
    if (v_186 == nil) goto v_131;
    else goto v_132;
v_131:
    v_186 = nil;
    goto v_130;
v_132:
    stack[0] = basic_elt(env, 8); // lispapply
    v_186 = stack[-2];
    v_187 = Lmkquote(nil, v_186);
    env = stack[-3];
    v_186 = nil;
    v_187 = list3(stack[0], v_187, v_186);
    env = stack[-3];
    v_186 = nil;
    {   LispObject fn = basic_elt(env, 17); // errorset!*
    v_186 = (*qfn2(fn))(fn, v_187, v_186);
    }
    env = stack[-3];
    stack[-2] = v_186;
    {   LispObject fn = basic_elt(env, 18); // errorp
    v_186 = (*qfn1(fn))(fn, v_186);
    }
    env = stack[-3];
    if (v_186 == nil) goto v_141;
    else goto v_142;
v_141:
    v_186 = stack[-2];
    if (!car_legal(v_186)) v_187 = carerror(v_186); else
    v_187 = car(v_186);
    stack[-2] = v_187;
    v_186 = basic_elt(env, 9); // !:rd!:
    if (!consp(v_187)) goto v_153;
    v_187 = car(v_187);
    if (v_187 == v_186) goto v_154;
v_153:
    v_186 = lisp_true;
    goto v_152;
v_154:
    v_186 = stack[-2];
    if (!car_legal(v_186)) v_186 = cdrerror(v_186); else
    v_186 = cdr(v_186);
    {   LispObject fn = basic_elt(env, 19); // complexp
    v_186 = (*qfn1(fn))(fn, v_186);
    }
    env = stack[-3];
    v_186 = (v_186 == nil ? lisp_true : nil);
    goto v_152;
    v_186 = nil;
v_152:
    goto v_140;
v_142:
    v_186 = nil;
    goto v_140;
    v_186 = nil;
v_140:
    goto v_130;
    v_186 = nil;
v_130:
    goto v_123;
v_125:
    v_186 = nil;
    goto v_123;
    v_186 = nil;
v_123:
    if (v_186 == nil) goto v_115;
    v_186 = stack[-2];
    {
        LispObject fn = basic_elt(env, 12); // !*d2q
        return (*qfn1(fn))(fn, v_186);
    }
v_115:
    v_186 = stack[-1];
    {   LispObject fn = basic_elt(env, 20); // getrtype
    v_186 = (*qfn1(fn))(fn, v_186);
    }
    env = stack[-3];
    if (v_186 == nil) goto v_175;
    v_187 = stack[-1];
    v_186 = basic_elt(env, 10); // scalar
    {   LispObject fn = basic_elt(env, 13); // typerr
    v_186 = (*qfn2(fn))(fn, v_187, v_186);
    }
    goto v_106;
v_175:
    v_187 = stack[-1];
    v_186 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {
        LispObject fn = basic_elt(env, 15); // mksq
        return (*qfn2(fn))(fn, v_187, v_186);
    }
v_106:
    v_186 = nil;
    goto v_5;
    v_186 = nil;
v_5:
    return onevalue(v_186);
}



// Code for get_goto

static LispObject CC_get_goto(LispObject env,
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
    v_43 = v_3;
    stack[0] = v_2;
// end of prologue
    v_44 = qvalue(basic_elt(env, 1)); // parser_goto_table
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



// Code for aex_subrat1

static LispObject CC_aex_subrat1(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    v_25 = stack[-2];
    {   LispObject fn = basic_elt(env, 1); // aex_ex
    v_25 = (*qfn1(fn))(fn, v_25);
    }
    env = stack[-3];
    if (!car_legal(v_25)) v_27 = carerror(v_25); else
    v_27 = car(v_25);
    v_26 = stack[-1];
    v_25 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // sfto_qsubhor1
    v_25 = (*qfn3(fn))(fn, v_27, v_26, v_25);
    }
    env = stack[-3];
    stack[-1] = v_25;
    if (!car_legal(v_25)) v_25 = carerror(v_25); else
    v_25 = car(v_25);
    {   LispObject fn = basic_elt(env, 3); // kernels
    stack[0] = (*qfn1(fn))(fn, v_25);
    }
    env = stack[-3];
    v_25 = stack[-2];
    {   LispObject fn = basic_elt(env, 4); // aex_ctx
    v_25 = (*qfn1(fn))(fn, v_25);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 5); // ctx_filter
    v_25 = (*qfn2(fn))(fn, stack[0], v_25);
    }
    env = stack[-3];
    {
        LispObject v_31 = stack[-1];
        LispObject fn = basic_elt(env, 6); // aex_mk
        return (*qfn2(fn))(fn, v_31, v_25);
    }
    return onevalue(v_25);
}



// Code for collect_cars

static LispObject CC_collect_cars(LispObject env,
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
    v_25 = nil;
v_7:
    v_24 = stack[0];
    if (v_24 == nil) goto v_10;
    else goto v_11;
v_10:
    v_24 = v_25;
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn1(fn))(fn, v_24);
    }
v_11:
    v_24 = stack[0];
    if (!car_legal(v_24)) v_24 = carerror(v_24); else
    v_24 = car(v_24);
    if (!car_legal(v_24)) v_24 = carerror(v_24); else
    v_24 = car(v_24);
    v_24 = cons(v_24, v_25);
    env = stack[-1];
    v_25 = v_24;
    v_24 = stack[0];
    if (!car_legal(v_24)) v_24 = cdrerror(v_24); else
    v_24 = cdr(v_24);
    stack[0] = v_24;
    goto v_7;
    v_24 = nil;
    return onevalue(v_24);
}



// Code for qremf

static LispObject CC_qremf(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_214, v_215;
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
    stack[-5] = v_3;
    stack[-6] = v_2;
// end of prologue
// Binding !*exp
// FLUIDBIND: reloadenv=8 litvec-offset=1 saveloc=4
{   bind_fluid_stack bind_fluid_var(-8, 1, -4);
    setvalue(basic_elt(env, 1), nil); // !*exp
    v_214 = lisp_true;
    setvalue(basic_elt(env, 1), v_214); // !*exp
    v_214 = stack[-5];
    if (!consp(v_214)) goto v_22;
    else goto v_23;
v_22:
    v_214 = lisp_true;
    goto v_21;
v_23:
    v_214 = stack[-5];
    if (!car_legal(v_214)) v_214 = carerror(v_214); else
    v_214 = car(v_214);
    v_214 = (consp(v_214) ? nil : lisp_true);
    goto v_21;
    v_214 = nil;
v_21:
    if (v_214 == nil) goto v_19;
    v_215 = stack[-6];
    v_214 = stack[-5];
    {   LispObject fn = basic_elt(env, 2); // qremd
    v_214 = (*qfn2(fn))(fn, v_215, v_214);
    }
    goto v_12;
v_19:
    v_214 = nil;
    v_214 = ncons(v_214);
    env = stack[-8];
    stack[-1] = v_214;
v_13:
    v_214 = stack[-6];
    if (!consp(v_214)) goto v_42;
    else goto v_43;
v_42:
    v_214 = lisp_true;
    goto v_41;
v_43:
    v_214 = stack[-6];
    if (!car_legal(v_214)) v_214 = carerror(v_214); else
    v_214 = car(v_214);
    v_214 = (consp(v_214) ? nil : lisp_true);
    goto v_41;
    v_214 = nil;
v_41:
    if (v_214 == nil) goto v_39;
    stack[0] = stack[-1];
    v_215 = nil;
    v_214 = stack[-6];
    v_214 = cons(v_215, v_214);
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 3); // praddf
    v_214 = (*qfn2(fn))(fn, stack[0], v_214);
    }
    goto v_12;
v_39:
    v_214 = stack[-6];
    if (!car_legal(v_214)) v_214 = carerror(v_214); else
    v_214 = car(v_214);
    if (!car_legal(v_214)) v_214 = carerror(v_214); else
    v_214 = car(v_214);
    if (!car_legal(v_214)) v_215 = carerror(v_214); else
    v_215 = car(v_214);
    v_214 = stack[-5];
    if (!car_legal(v_214)) v_214 = carerror(v_214); else
    v_214 = car(v_214);
    if (!car_legal(v_214)) v_214 = carerror(v_214); else
    v_214 = car(v_214);
    if (!car_legal(v_214)) v_214 = carerror(v_214); else
    v_214 = car(v_214);
    if (v_215 == v_214) goto v_56;
    else goto v_57;
v_56:
    v_214 = stack[-6];
    if (!car_legal(v_214)) v_214 = carerror(v_214); else
    v_214 = car(v_214);
    if (!car_legal(v_214)) v_214 = carerror(v_214); else
    v_214 = car(v_214);
    if (!car_legal(v_214)) v_215 = cdrerror(v_214); else
    v_215 = cdr(v_214);
    v_214 = stack[-5];
    if (!car_legal(v_214)) v_214 = carerror(v_214); else
    v_214 = car(v_214);
    if (!car_legal(v_214)) v_214 = carerror(v_214); else
    v_214 = car(v_214);
    if (!car_legal(v_214)) v_214 = cdrerror(v_214); else
    v_214 = cdr(v_214);
    v_215 = difference2(v_215, v_214);
    env = stack[-8];
    stack[-7] = v_215;
    v_214 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_214 = static_cast<LispObject>(lessp2(v_215, v_214));
    v_214 = v_214 ? lisp_true : nil;
    env = stack[-8];
    if (v_214 == nil) goto v_69;
    stack[0] = stack[-1];
    v_215 = nil;
    v_214 = stack[-6];
    v_214 = cons(v_215, v_214);
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 3); // praddf
    v_214 = (*qfn2(fn))(fn, stack[0], v_214);
    }
    goto v_12;
v_69:
    v_214 = stack[-6];
    if (!car_legal(v_214)) v_214 = carerror(v_214); else
    v_214 = car(v_214);
    if (!car_legal(v_214)) v_215 = cdrerror(v_214); else
    v_215 = cdr(v_214);
    v_214 = stack[-5];
    if (!car_legal(v_214)) v_214 = carerror(v_214); else
    v_214 = car(v_214);
    if (!car_legal(v_214)) v_214 = cdrerror(v_214); else
    v_214 = cdr(v_214);
    {   LispObject fn = basic_elt(env, 0); // qremf
    v_214 = (*qfn2(fn))(fn, v_215, v_214);
    }
    env = stack[-8];
    stack[-3] = v_214;
    v_214 = stack[-6];
    if (!car_legal(v_214)) v_214 = carerror(v_214); else
    v_214 = car(v_214);
    if (!car_legal(v_214)) v_215 = carerror(v_214); else
    v_215 = car(v_214);
    v_214 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_214 = cons(v_215, v_214);
    env = stack[-8];
    v_215 = ncons(v_214);
    env = stack[-8];
    v_214 = stack[-3];
    if (!car_legal(v_214)) v_214 = cdrerror(v_214); else
    v_214 = cdr(v_214);
    {   LispObject fn = basic_elt(env, 4); // multf
    v_214 = (*qfn2(fn))(fn, v_215, v_214);
    }
    env = stack[-8];
    stack[-2] = v_214;
    stack[0] = stack[-1];
    v_215 = stack[-7];
    v_214 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_215 == v_214) goto v_109;
    else goto v_110;
v_109:
    v_214 = stack[-3];
    if (!car_legal(v_214)) v_214 = carerror(v_214); else
    v_214 = car(v_214);
    v_215 = v_214;
    goto v_108;
v_110:
    v_214 = stack[-6];
    if (!car_legal(v_214)) v_214 = carerror(v_214); else
    v_214 = car(v_214);
    if (!car_legal(v_214)) v_214 = carerror(v_214); else
    v_214 = car(v_214);
    if (!car_legal(v_214)) v_215 = carerror(v_214); else
    v_215 = car(v_214);
    v_214 = stack[-7];
    {   LispObject fn = basic_elt(env, 5); // to
    v_215 = (*qfn2(fn))(fn, v_215, v_214);
    }
    env = stack[-8];
    v_214 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_214 = cons(v_215, v_214);
    env = stack[-8];
    v_215 = ncons(v_214);
    env = stack[-8];
    v_214 = stack[-3];
    if (!car_legal(v_214)) v_214 = carerror(v_214); else
    v_214 = car(v_214);
    {   LispObject fn = basic_elt(env, 4); // multf
    v_214 = (*qfn2(fn))(fn, v_215, v_214);
    }
    env = stack[-8];
    v_215 = v_214;
    goto v_108;
    v_215 = nil;
v_108:
    v_214 = stack[-2];
    v_214 = cons(v_215, v_214);
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 3); // praddf
    v_214 = (*qfn2(fn))(fn, stack[0], v_214);
    }
    env = stack[-8];
    stack[-1] = v_214;
    v_214 = stack[-3];
    if (!car_legal(v_214)) v_214 = carerror(v_214); else
    v_214 = car(v_214);
    if (v_214 == nil) goto v_132;
    else goto v_133;
v_132:
    v_214 = stack[-6];
    if (!car_legal(v_214)) v_214 = cdrerror(v_214); else
    v_214 = cdr(v_214);
    goto v_131;
v_133:
    stack[0] = stack[-6];
    v_215 = stack[-7];
    v_214 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_215 == v_214) goto v_146;
    else goto v_147;
v_146:
    v_214 = stack[-5];
    stack[-6] = v_214;
    goto v_145;
v_147:
    v_214 = stack[-6];
    if (!car_legal(v_214)) v_214 = carerror(v_214); else
    v_214 = car(v_214);
    if (!car_legal(v_214)) v_214 = carerror(v_214); else
    v_214 = car(v_214);
    if (!car_legal(v_214)) v_215 = carerror(v_214); else
    v_215 = car(v_214);
    v_214 = stack[-7];
    {   LispObject fn = basic_elt(env, 5); // to
    v_215 = (*qfn2(fn))(fn, v_215, v_214);
    }
    env = stack[-8];
    v_214 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_214 = cons(v_215, v_214);
    env = stack[-8];
    v_215 = ncons(v_214);
    env = stack[-8];
    v_214 = stack[-5];
    {   LispObject fn = basic_elt(env, 4); // multf
    v_214 = (*qfn2(fn))(fn, v_215, v_214);
    }
    env = stack[-8];
    stack[-6] = v_214;
    goto v_145;
    stack[-6] = nil;
v_145:
    v_214 = stack[-3];
    if (!car_legal(v_214)) v_214 = carerror(v_214); else
    v_214 = car(v_214);
    {   LispObject fn = basic_elt(env, 6); // negf
    v_214 = (*qfn1(fn))(fn, v_214);
    }
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 4); // multf
    v_214 = (*qfn2(fn))(fn, stack[-6], v_214);
    }
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 7); // addf
    stack[0] = (*qfn2(fn))(fn, stack[0], v_214);
    }
    env = stack[-8];
    v_214 = stack[-2];
    {   LispObject fn = basic_elt(env, 6); // negf
    v_214 = (*qfn1(fn))(fn, v_214);
    }
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 7); // addf
    v_214 = (*qfn2(fn))(fn, stack[0], v_214);
    }
    env = stack[-8];
    goto v_131;
    v_214 = nil;
v_131:
    stack[-6] = v_214;
    goto v_13;
    goto v_37;
v_57:
    v_214 = stack[-6];
    if (!car_legal(v_214)) v_214 = carerror(v_214); else
    v_214 = car(v_214);
    if (!car_legal(v_214)) v_214 = carerror(v_214); else
    v_214 = car(v_214);
    if (!car_legal(v_214)) v_215 = carerror(v_214); else
    v_215 = car(v_214);
    v_214 = stack[-5];
    if (!car_legal(v_214)) v_214 = carerror(v_214); else
    v_214 = car(v_214);
    if (!car_legal(v_214)) v_214 = carerror(v_214); else
    v_214 = car(v_214);
    if (!car_legal(v_214)) v_214 = carerror(v_214); else
    v_214 = car(v_214);
    {   LispObject fn = basic_elt(env, 8); // ordop
    v_214 = (*qfn2(fn))(fn, v_215, v_214);
    }
    env = stack[-8];
    if (v_214 == nil) goto v_169;
    else goto v_170;
v_169:
    stack[0] = stack[-1];
    v_215 = nil;
    v_214 = stack[-6];
    v_214 = cons(v_215, v_214);
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 3); // praddf
    v_214 = (*qfn2(fn))(fn, stack[0], v_214);
    }
    goto v_12;
v_170:
v_37:
    v_214 = stack[-6];
    if (!car_legal(v_214)) v_214 = carerror(v_214); else
    v_214 = car(v_214);
    if (!car_legal(v_214)) v_215 = cdrerror(v_214); else
    v_215 = cdr(v_214);
    v_214 = stack[-5];
    {   LispObject fn = basic_elt(env, 0); // qremf
    v_214 = (*qfn2(fn))(fn, v_215, v_214);
    }
    env = stack[-8];
    stack[-3] = v_214;
    v_214 = stack[-6];
    if (!car_legal(v_214)) v_214 = carerror(v_214); else
    v_214 = car(v_214);
    if (!car_legal(v_214)) v_215 = carerror(v_214); else
    v_215 = car(v_214);
    v_214 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_214 = cons(v_215, v_214);
    env = stack[-8];
    v_215 = ncons(v_214);
    env = stack[-8];
    v_214 = stack[-3];
    if (!car_legal(v_214)) v_214 = carerror(v_214); else
    v_214 = car(v_214);
    {   LispObject fn = basic_elt(env, 4); // multf
    stack[0] = (*qfn2(fn))(fn, v_215, v_214);
    }
    env = stack[-8];
    v_214 = stack[-6];
    if (!car_legal(v_214)) v_214 = carerror(v_214); else
    v_214 = car(v_214);
    if (!car_legal(v_214)) v_215 = carerror(v_214); else
    v_215 = car(v_214);
    v_214 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_214 = cons(v_215, v_214);
    env = stack[-8];
    v_215 = ncons(v_214);
    env = stack[-8];
    v_214 = stack[-3];
    if (!car_legal(v_214)) v_214 = cdrerror(v_214); else
    v_214 = cdr(v_214);
    {   LispObject fn = basic_elt(env, 4); // multf
    v_214 = (*qfn2(fn))(fn, v_215, v_214);
    }
    env = stack[-8];
    v_214 = cons(stack[0], v_214);
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 3); // praddf
    v_214 = (*qfn2(fn))(fn, stack[-1], v_214);
    }
    env = stack[-8];
    stack[-1] = v_214;
    v_214 = stack[-6];
    if (!car_legal(v_214)) v_214 = cdrerror(v_214); else
    v_214 = cdr(v_214);
    stack[-6] = v_214;
    goto v_13;
v_12:
    ;}  // end of a binding scope
    return onevalue(v_214);
}



// Code for updtemplate

static LispObject CC_updtemplate(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
        push(v_2,v_3,v_4);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_4,v_3,v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil, nil, nil, nil, nil);
    push(nil, nil, nil);
    stack_popper stack_popper_var(9);
// copy arguments values to proper place
    stack[-5] = v_4;
    v_81 = v_3;
    stack[-6] = v_2;
// end of prologue
    stack[-4] = v_81;
    v_81 = stack[-4];
    if (v_81 == nil) goto v_19;
    else goto v_20;
v_19:
    v_81 = nil;
    goto v_14;
v_20:
    v_81 = stack[-4];
    if (!car_legal(v_81)) v_81 = carerror(v_81); else
    v_81 = car(v_81);
    stack[0] = v_81;
    v_82 = stack[-6];
    v_81 = stack[0];
    v_82 = Lsubla(nil, v_82, v_81);
    env = stack[-8];
    stack[-7] = v_82;
    v_81 = stack[0];
    if (equal(v_82, v_81)) goto v_29;
    else goto v_30;
v_29:
    v_81 = stack[0];
    goto v_28;
v_30:
    v_82 = stack[-7];
    v_81 = stack[-5];
    {   LispObject fn = basic_elt(env, 1); // reval!-without
    v_82 = (*qfn2(fn))(fn, v_82, v_81);
    }
    env = stack[-8];
    v_83 = v_82;
    v_81 = stack[-7];
    if (equal(v_82, v_81)) goto v_37;
    v_81 = v_83;
    goto v_28;
v_37:
    v_81 = stack[-7];
    goto v_28;
    v_81 = nil;
v_28:
    v_81 = ncons(v_81);
    env = stack[-8];
    stack[-2] = v_81;
    stack[-3] = v_81;
v_15:
    v_81 = stack[-4];
    if (!car_legal(v_81)) v_81 = cdrerror(v_81); else
    v_81 = cdr(v_81);
    stack[-4] = v_81;
    v_81 = stack[-4];
    if (v_81 == nil) goto v_50;
    else goto v_51;
v_50:
    v_81 = stack[-3];
    goto v_14;
v_51:
    stack[-1] = stack[-2];
    v_81 = stack[-4];
    if (!car_legal(v_81)) v_81 = carerror(v_81); else
    v_81 = car(v_81);
    stack[0] = v_81;
    v_82 = stack[-6];
    v_81 = stack[0];
    v_82 = Lsubla(nil, v_82, v_81);
    env = stack[-8];
    stack[-7] = v_82;
    v_81 = stack[0];
    if (equal(v_82, v_81)) goto v_61;
    else goto v_62;
v_61:
    v_81 = stack[0];
    goto v_60;
v_62:
    v_82 = stack[-7];
    v_81 = stack[-5];
    {   LispObject fn = basic_elt(env, 1); // reval!-without
    v_82 = (*qfn2(fn))(fn, v_82, v_81);
    }
    env = stack[-8];
    v_83 = v_82;
    v_81 = stack[-7];
    if (equal(v_82, v_81)) goto v_69;
    v_81 = v_83;
    goto v_60;
v_69:
    v_81 = stack[-7];
    goto v_60;
    v_81 = nil;
v_60:
    v_81 = ncons(v_81);
    env = stack[-8];
    if (!car_legal(stack[-1])) rplacd_fails(stack[-1]);
    setcdr(stack[-1], v_81);
    v_81 = stack[-2];
    if (!car_legal(v_81)) v_81 = cdrerror(v_81); else
    v_81 = cdr(v_81);
    stack[-2] = v_81;
    goto v_15;
v_14:
    return onevalue(v_81);
}



// Code for tmsf

static LispObject CC_tmsf(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_86, v_87, v_88;
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
    v_86 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_88 = v_86;
v_11:
    v_86 = stack[-1];
    if (!consp(v_86)) goto v_18;
    else goto v_19;
v_18:
    v_86 = lisp_true;
    goto v_17;
v_19:
    v_86 = stack[-1];
    if (!car_legal(v_86)) v_86 = carerror(v_86); else
    v_86 = car(v_86);
    v_86 = (consp(v_86) ? nil : lisp_true);
    goto v_17;
    v_86 = nil;
v_17:
    if (v_86 == nil) goto v_15;
    goto v_10;
v_15:
    stack[-2] = v_88;
    v_86 = stack[-1];
    if (!car_legal(v_86)) v_86 = carerror(v_86); else
    v_86 = car(v_86);
    if (!car_legal(v_86)) v_86 = carerror(v_86); else
    v_86 = car(v_86);
    if (!car_legal(v_86)) v_86 = carerror(v_86); else
    v_86 = car(v_86);
    stack[0] = v_86;
    {   LispObject fn = basic_elt(env, 1); // sfp
    v_86 = (*qfn1(fn))(fn, v_86);
    }
    env = stack[-3];
    if (v_86 == nil) goto v_34;
    v_86 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // tmsf
    v_86 = (*qfn1(fn))(fn, v_86);
    }
    env = stack[-3];
    stack[0] = v_86;
    goto v_32;
v_34:
    v_86 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[0] = v_86;
    goto v_32;
    stack[0] = nil;
v_32:
    v_86 = stack[-1];
    if (!car_legal(v_86)) v_86 = carerror(v_86); else
    v_86 = car(v_86);
    if (!car_legal(v_86)) v_86 = cdrerror(v_86); else
    v_86 = cdr(v_86);
    {   LispObject fn = basic_elt(env, 2); // tmsf!*
    v_86 = (*qfn1(fn))(fn, v_86);
    }
    env = stack[-3];
    v_86 = plus2(stack[0], v_86);
    env = stack[-3];
    v_86 = plus2(stack[-2], v_86);
    env = stack[-3];
    v_88 = v_86;
    v_86 = stack[-1];
    if (!car_legal(v_86)) v_86 = carerror(v_86); else
    v_86 = car(v_86);
    if (!car_legal(v_86)) v_86 = carerror(v_86); else
    v_86 = car(v_86);
    if (!car_legal(v_86)) v_87 = cdrerror(v_86); else
    v_87 = cdr(v_86);
    v_86 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_87 == v_86) goto v_52;
    v_86 = stack[-1];
    if (!car_legal(v_86)) v_86 = carerror(v_86); else
    v_86 = car(v_86);
    if (!car_legal(v_86)) v_86 = carerror(v_86); else
    v_86 = car(v_86);
    if (!car_legal(v_86)) v_87 = cdrerror(v_86); else
    v_87 = cdr(v_86);
    v_86 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    if (v_87 == v_86) goto v_60;
    else goto v_61;
v_60:
    v_86 = v_88;
    v_86 = add1(v_86);
    env = stack[-3];
    v_88 = v_86;
    goto v_59;
v_61:
    v_87 = v_88;
    v_86 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_86 = plus2(v_87, v_86);
    env = stack[-3];
    v_88 = v_86;
    goto v_59;
v_59:
    goto v_50;
v_52:
v_50:
    v_86 = stack[-1];
    if (!car_legal(v_86)) v_86 = cdrerror(v_86); else
    v_86 = cdr(v_86);
    stack[-1] = v_86;
    goto v_11;
v_10:
    v_86 = stack[-1];
    if (v_86 == nil) goto v_78;
    else goto v_79;
v_78:
    v_86 = v_88;
    goto v_77;
v_79:
    v_86 = v_88;
    return add1(v_86);
    v_86 = nil;
v_77:
    return onevalue(v_86);
}



// Code for talp_td

static LispObject CC_talp_td(LispObject env,
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    v_53 = v_2;
// end of prologue
    v_52 = v_53;
    if (!consp(v_52)) goto v_6;
    else goto v_7;
v_6:
    v_52 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_5;
v_7:
    v_52 = v_53;
    {   LispObject fn = basic_elt(env, 1); // talp_fargl
    v_52 = (*qfn1(fn))(fn, v_52);
    }
    env = stack[-4];
    stack[-3] = v_52;
    v_52 = stack[-3];
    if (v_52 == nil) goto v_24;
    else goto v_25;
v_24:
    v_52 = nil;
    goto v_18;
v_25:
    v_52 = stack[-3];
    if (!car_legal(v_52)) v_52 = carerror(v_52); else
    v_52 = car(v_52);
    {   LispObject fn = basic_elt(env, 0); // talp_td
    v_52 = (*qfn1(fn))(fn, v_52);
    }
    env = stack[-4];
    v_52 = ncons(v_52);
    env = stack[-4];
    stack[-1] = v_52;
    stack[-2] = v_52;
v_19:
    v_52 = stack[-3];
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    stack[-3] = v_52;
    v_52 = stack[-3];
    if (v_52 == nil) goto v_38;
    else goto v_39;
v_38:
    v_52 = stack[-2];
    goto v_18;
v_39:
    stack[0] = stack[-1];
    v_52 = stack[-3];
    if (!car_legal(v_52)) v_52 = carerror(v_52); else
    v_52 = car(v_52);
    {   LispObject fn = basic_elt(env, 0); // talp_td
    v_52 = (*qfn1(fn))(fn, v_52);
    }
    env = stack[-4];
    v_52 = ncons(v_52);
    env = stack[-4];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_52);
    v_52 = stack[-1];
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    stack[-1] = v_52;
    goto v_19;
v_18:
    {   LispObject fn = basic_elt(env, 2); // lto_max
    v_52 = (*qfn1(fn))(fn, v_52);
    }
    return add1(v_52);
    v_52 = nil;
v_5:
    return onevalue(v_52);
}



// Code for qqe_id!-nyt!-branchq

static LispObject CC_qqe_idKnytKbranchq(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_27;
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
    if (!consp(v_27)) goto v_6;
    else goto v_7;
v_6:
    v_27 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // qqe_qtidp
    v_27 = (*qfn1(fn))(fn, v_27);
    }
    env = stack[-1];
    if (v_27 == nil) goto v_11;
    else goto v_10;
v_11:
    v_27 = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // qqe_nytidp
        return (*qfn1(fn))(fn, v_27);
    }
v_10:
    goto v_5;
v_7:
    v_27 = stack[0];
    if (!car_legal(v_27)) v_27 = carerror(v_27); else
    v_27 = car(v_27);
    {   LispObject fn = basic_elt(env, 3); // qqe_qopaddp
    v_27 = (*qfn1(fn))(fn, v_27);
    }
    env = stack[-1];
    if (v_27 == nil) goto v_20;
    else goto v_19;
v_20:
    v_27 = stack[0];
    if (!car_legal(v_27)) v_27 = carerror(v_27); else
    v_27 = car(v_27);
    {
        LispObject fn = basic_elt(env, 4); // qqe_qoptailp
        return (*qfn1(fn))(fn, v_27);
    }
v_19:
    goto v_5;
    v_27 = nil;
v_5:
    return onevalue(v_27);
}



// Code for pasf_vf

static LispObject CC_pasf_vf(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_105, v_106, v_107;
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
    v_106 = v_2;
// end of prologue
    v_107 = v_106;
    v_105 = basic_elt(env, 1); // true
    if (v_107 == v_105) goto v_16;
    else goto v_17;
v_16:
    v_105 = lisp_true;
    goto v_15;
v_17:
    v_107 = v_106;
    v_105 = basic_elt(env, 2); // false
    v_105 = (v_107 == v_105 ? lisp_true : nil);
    goto v_15;
    v_105 = nil;
v_15:
    if (v_105 == nil) goto v_12;
    else goto v_13;
v_12:
    v_105 = v_106;
    if (!car_legal(v_105)) v_105 = cdrerror(v_105); else
    v_105 = cdr(v_105);
    if (!car_legal(v_105)) v_105 = carerror(v_105); else
    v_105 = car(v_105);
    if (!consp(v_105)) goto v_28;
    else goto v_29;
v_28:
    v_105 = lisp_true;
    goto v_27;
v_29:
    v_105 = v_106;
    if (!car_legal(v_105)) v_105 = cdrerror(v_105); else
    v_105 = cdr(v_105);
    if (!car_legal(v_105)) v_105 = carerror(v_105); else
    v_105 = car(v_105);
    if (!car_legal(v_105)) v_105 = carerror(v_105); else
    v_105 = car(v_105);
    v_105 = (consp(v_105) ? nil : lisp_true);
    goto v_27;
    v_105 = nil;
v_27:
    goto v_11;
v_13:
    v_105 = nil;
    goto v_11;
    v_105 = nil;
v_11:
    if (v_105 == nil) goto v_9;
    v_105 = v_106;
    v_105 = Lconsp(nil, v_105);
    env = stack[0];
    if (v_105 == nil) goto v_47;
    v_105 = v_106;
    if (!car_legal(v_105)) v_105 = carerror(v_105); else
    v_105 = car(v_105);
    v_105 = Lconsp(nil, v_105);
    env = stack[0];
    if (v_105 == nil) goto v_47;
    v_105 = v_106;
    if (!car_legal(v_105)) v_105 = carerror(v_105); else
    v_105 = car(v_105);
    if (!car_legal(v_105)) v_107 = carerror(v_105); else
    v_107 = car(v_105);
    v_105 = basic_elt(env, 3); // (cong ncong)
    v_105 = Lmemq(nil, v_107, v_105);
    if (v_105 == nil) goto v_47;
    v_105 = v_106;
    if (!car_legal(v_105)) v_105 = carerror(v_105); else
    v_105 = car(v_105);
    if (!car_legal(v_105)) v_105 = cdrerror(v_105); else
    v_105 = cdr(v_105);
    if (!consp(v_105)) goto v_66;
    else goto v_67;
v_66:
    v_105 = lisp_true;
    goto v_65;
v_67:
    v_105 = v_106;
    if (!car_legal(v_105)) v_105 = carerror(v_105); else
    v_105 = car(v_105);
    if (!car_legal(v_105)) v_105 = cdrerror(v_105); else
    v_105 = cdr(v_105);
    if (!car_legal(v_105)) v_105 = carerror(v_105); else
    v_105 = car(v_105);
    v_105 = (consp(v_105) ? nil : lisp_true);
    goto v_65;
    v_105 = nil;
v_65:
    if (v_105 == nil) goto v_63;
    else goto v_47;
v_63:
    v_105 = v_106;
    if (!car_legal(v_105)) v_105 = cdrerror(v_105); else
    v_105 = cdr(v_105);
    if (!car_legal(v_105)) v_105 = carerror(v_105); else
    v_105 = car(v_105);
    if (v_105 == nil) goto v_81;
    else goto v_82;
v_81:
    v_105 = basic_elt(env, 2); // false
    goto v_5;
v_82:
    v_105 = v_106;
    goto v_5;
    goto v_45;
v_47:
v_45:
    v_105 = v_106;
    if (!car_legal(v_105)) v_105 = carerror(v_105); else
    v_105 = car(v_105);
    if (!car_legal(v_106)) v_106 = cdrerror(v_106); else
    v_106 = cdr(v_106);
    if (!car_legal(v_106)) v_106 = carerror(v_106); else
    v_106 = car(v_106);
    {   LispObject fn = basic_elt(env, 4); // pasf_evalatp
    v_105 = (*qfn2(fn))(fn, v_105, v_106);
    }
    env = stack[0];
    if (v_105 == nil) goto v_93;
    v_105 = basic_elt(env, 1); // true
    goto v_91;
v_93:
    v_105 = basic_elt(env, 2); // false
    goto v_91;
    v_105 = nil;
v_91:
    goto v_5;
v_9:
    v_105 = v_106;
v_5:
    return onevalue(v_105);
}



// Code for ibalp_readclause

static LispObject CC_ibalp_readclause(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_161, v_162, v_163, v_164;
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
    stack[-7] = v_3;
    v_161 = v_2;
// end of prologue
    stack[-3] = nil;
    stack[-2] = nil;
    if (!car_legal(v_161)) v_161 = cdrerror(v_161); else
    v_161 = cdr(v_161);
    stack[-4] = v_161;
    stack[-5] = nil;
    stack[-1] = nil;
    stack[0] = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_164 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_163 = nil;
    v_162 = nil;
    v_161 = nil;
    v_161 = list4(v_164, v_163, v_162, v_161);
    env = stack[-9];
    v_161 = list3star(stack[-5], stack[-1], stack[0], v_161);
    env = stack[-9];
    stack[-5] = v_161;
    v_161 = lisp_true;
    stack[-1] = v_161;
v_29:
    v_161 = stack[-1];
    if (v_161 == nil) goto v_32;
    v_161 = stack[-4];
    if (v_161 == nil) goto v_32;
    goto v_33;
v_32:
    goto v_28;
v_33:
    v_161 = stack[-4];
    if (!car_legal(v_161)) v_161 = carerror(v_161); else
    v_161 = car(v_161);
    stack[-8] = v_161;
    v_162 = stack[-8];
    v_161 = basic_elt(env, 1); // true
    if (v_162 == v_161) goto v_43;
    else goto v_44;
v_43:
    v_161 = nil;
    stack[-1] = v_161;
    goto v_42;
v_44:
    v_161 = stack[-4];
    if (!car_legal(v_161)) v_161 = cdrerror(v_161); else
    v_161 = cdr(v_161);
    stack[-4] = v_161;
    v_162 = stack[-8];
    v_161 = basic_elt(env, 2); // false
    if (v_162 == v_161) goto v_55;
    v_161 = stack[-8];
    if (!consp(v_161)) goto v_64;
    else goto v_65;
v_64:
    v_161 = stack[-8];
    v_162 = v_161;
    goto v_63;
v_65:
    v_161 = stack[-8];
    if (!car_legal(v_161)) v_161 = carerror(v_161); else
    v_161 = car(v_161);
    v_162 = v_161;
    goto v_63;
    v_162 = nil;
v_63:
    v_161 = basic_elt(env, 3); // not
    if (v_162 == v_161) goto v_60;
    else goto v_61;
v_60:
    v_161 = stack[-8];
    if (!car_legal(v_161)) v_161 = cdrerror(v_161); else
    v_161 = cdr(v_161);
    if (!car_legal(v_161)) v_161 = carerror(v_161); else
    v_161 = car(v_161);
    {   LispObject fn = basic_elt(env, 4); // ibalp_arg2l
    v_161 = (*qfn1(fn))(fn, v_161);
    }
    env = stack[-9];
    stack[-6] = v_161;
    stack[0] = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_161 = stack[-8];
    if (!car_legal(v_161)) v_161 = cdrerror(v_161); else
    v_161 = cdr(v_161);
    if (!car_legal(v_161)) v_161 = carerror(v_161); else
    v_161 = car(v_161);
    {   LispObject fn = basic_elt(env, 5); // ibalp_arg2r
    v_161 = (*qfn1(fn))(fn, v_161);
    }
    env = stack[-9];
    v_161 = static_cast<LispObject>(static_cast<std::uintptr_t>(stack[0]) - static_cast<std::uintptr_t>(v_161) + TAG_FIXNUM);
    goto v_59;
v_61:
    v_161 = stack[-8];
    {   LispObject fn = basic_elt(env, 4); // ibalp_arg2l
    v_161 = (*qfn1(fn))(fn, v_161);
    }
    env = stack[-9];
    stack[-6] = v_161;
    v_161 = stack[-8];
    {   LispObject fn = basic_elt(env, 5); // ibalp_arg2r
    v_161 = (*qfn1(fn))(fn, v_161);
    }
    env = stack[-9];
    goto v_59;
v_59:
    v_162 = v_161;
    v_161 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 6); // iequal
    v_161 = (*qfn2(fn))(fn, v_162, v_161);
    }
    env = stack[-9];
    if (v_161 == nil) goto v_92;
    v_162 = stack[-6];
    v_161 = stack[-3];
    v_161 = Lmemq(nil, v_162, v_161);
    if (v_161 == nil) goto v_98;
    else goto v_99;
v_98:
    v_161 = stack[-5];
    if (!car_legal(v_161)) v_161 = cdrerror(v_161); else
    v_161 = cdr(v_161);
    if (!car_legal(v_161)) stack[0] = cdrerror(v_161); else
    stack[0] = cdr(v_161);
    v_161 = stack[-5];
    if (!car_legal(v_161)) v_161 = cdrerror(v_161); else
    v_161 = cdr(v_161);
    if (!car_legal(v_161)) v_161 = cdrerror(v_161); else
    v_161 = cdr(v_161);
    if (!car_legal(v_161)) v_161 = carerror(v_161); else
    v_161 = car(v_161);
    v_161 = add1(v_161);
    env = stack[-9];
    {   LispObject fn = basic_elt(env, 7); // setcar
    v_161 = (*qfn2(fn))(fn, stack[0], v_161);
    }
    env = stack[-9];
    v_162 = stack[-6];
    v_161 = stack[-3];
    v_161 = cons(v_162, v_161);
    env = stack[-9];
    stack[-3] = v_161;
    stack[0] = stack[-5];
    v_161 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_161 = ncons(v_161);
    env = stack[-9];
    {   LispObject fn = basic_elt(env, 8); // ibalp_process!-var
    v_161 = (*qfn4up(fn))(fn, stack[0], stack[-7], stack[-6], v_161);
    }
    env = stack[-9];
    stack[-7] = v_161;
    goto v_97;
v_99:
v_97:
    goto v_90;
v_92:
    v_162 = stack[-6];
    v_161 = stack[-2];
    v_161 = Lmemq(nil, v_162, v_161);
    if (v_161 == nil) goto v_125;
    else goto v_126;
v_125:
    v_161 = stack[-5];
    if (!car_legal(v_161)) v_161 = cdrerror(v_161); else
    v_161 = cdr(v_161);
    if (!car_legal(v_161)) v_161 = cdrerror(v_161); else
    v_161 = cdr(v_161);
    if (!car_legal(v_161)) stack[0] = cdrerror(v_161); else
    stack[0] = cdr(v_161);
    v_161 = stack[-5];
    if (!car_legal(v_161)) v_161 = cdrerror(v_161); else
    v_161 = cdr(v_161);
    if (!car_legal(v_161)) v_161 = cdrerror(v_161); else
    v_161 = cdr(v_161);
    if (!car_legal(v_161)) v_161 = cdrerror(v_161); else
    v_161 = cdr(v_161);
    if (!car_legal(v_161)) v_161 = carerror(v_161); else
    v_161 = car(v_161);
    v_161 = add1(v_161);
    env = stack[-9];
    {   LispObject fn = basic_elt(env, 7); // setcar
    v_161 = (*qfn2(fn))(fn, stack[0], v_161);
    }
    env = stack[-9];
    v_162 = stack[-6];
    v_161 = stack[-2];
    v_161 = cons(v_162, v_161);
    env = stack[-9];
    stack[-2] = v_161;
    stack[0] = stack[-5];
    v_161 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_161 = ncons(v_161);
    env = stack[-9];
    {   LispObject fn = basic_elt(env, 8); // ibalp_process!-var
    v_161 = (*qfn4up(fn))(fn, stack[0], stack[-7], stack[-6], v_161);
    }
    env = stack[-9];
    stack[-7] = v_161;
    goto v_124;
v_126:
v_124:
    goto v_90;
v_90:
    goto v_53;
v_55:
v_53:
    goto v_42;
v_42:
    goto v_29;
v_28:
    v_161 = stack[-1];
    if (v_161 == nil) goto v_152;
    else goto v_153;
v_152:
    v_162 = basic_elt(env, 1); // true
    v_161 = stack[-7];
    return cons(v_162, v_161);
v_153:
    v_162 = stack[-5];
    v_161 = stack[-7];
    return cons(v_162, v_161);
    return onevalue(v_161);
}



// Code for expt!-mod!-p

static LispObject CC_exptKmodKp(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_46 = v_3;
    stack[0] = v_2;
// end of prologue
    v_45 = v_46;
    v_44 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_45 == v_44) goto v_7;
    else goto v_8;
v_7:
    v_44 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_6;
v_8:
    v_45 = v_46;
    v_44 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_45 == v_44) goto v_12;
    else goto v_13;
v_12:
    v_44 = stack[0];
    goto v_6;
v_13:
    v_45 = v_46;
    v_44 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_44 = Ldivide_2(nil, v_45, v_44);
    env = stack[-2];
    stack[-1] = v_44;
    v_45 = stack[0];
    v_44 = stack[-1];
    if (!car_legal(v_44)) v_44 = carerror(v_44); else
    v_44 = car(v_44);
    {   LispObject fn = basic_elt(env, 0); // expt!-mod!-p
    v_44 = (*qfn2(fn))(fn, v_45, v_44);
    }
    env = stack[-2];
    v_46 = v_44;
    v_44 = v_46;
    v_45 = v_46;
    {   LispObject fn = basic_elt(env, 1); // times!-mod!-p
    v_44 = (*qfn2(fn))(fn, v_44, v_45);
    }
    env = stack[-2];
    v_46 = v_44;
    v_44 = stack[-1];
    if (!car_legal(v_44)) v_45 = cdrerror(v_44); else
    v_45 = cdr(v_44);
    v_44 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_45 == v_44) goto v_36;
    v_45 = v_46;
    v_44 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // times!-mod!-p
    v_44 = (*qfn2(fn))(fn, v_45, v_44);
    }
    v_46 = v_44;
    goto v_34;
v_36:
v_34:
    v_44 = v_46;
    goto v_6;
    v_44 = nil;
v_6:
    return onevalue(v_44);
}



// Code for omsir

static LispObject CC_omsir(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil, nil, nil, nil, nil);
    real_push(nil);
    stack_popper stack_popper_var(7);
// end of prologue
// Binding name
// FLUIDBIND: reloadenv=6 litvec-offset=1 saveloc=4
{   bind_fluid_stack bind_fluid_var(-6, 1, -4);
    setvalue(basic_elt(env, 1), nil); // name
    stack[-1] = nil;
    v_125 = nil;
    stack[-2] = v_125;
    v_126 = qvalue(basic_elt(env, 2)); // atts
    v_125 = basic_elt(env, 1); // name
    {   LispObject fn = basic_elt(env, 10); // find
    v_125 = (*qfn2(fn))(fn, v_126, v_125);
    }
    env = stack[-6];
    v_125 = Lintern(nil, v_125);
    env = stack[-6];
    setvalue(basic_elt(env, 1), v_125); // name
    v_126 = qvalue(basic_elt(env, 2)); // atts
    v_125 = basic_elt(env, 3); // cd
    {   LispObject fn = basic_elt(env, 10); // find
    v_125 = (*qfn2(fn))(fn, v_126, v_125);
    }
    env = stack[-6];
    v_125 = Lintern(nil, v_125);
    env = stack[-6];
    stack[-5] = v_125;
    v_125 = qvalue(basic_elt(env, 1)); // name
    v_126 = Lexplode(nil, v_125);
    env = stack[-6];
    v_125 = basic_elt(env, 4); // (v e c t o r)
    if (equal(v_126, v_125)) goto v_25;
    else goto v_26;
v_25:
    v_125 = basic_elt(env, 5); // (vectorml linalg1)
    stack[-3] = v_125;
    goto v_24;
v_26:
    v_125 = qvalue(basic_elt(env, 1)); // name
    v_126 = Lintern(nil, v_125);
    env = stack[-6];
    v_125 = qvalue(basic_elt(env, 6)); // mmleq!*
    v_125 = Lmember(nil, v_126, v_125);
    stack[-3] = v_125;
    goto v_24;
v_24:
    v_125 = stack[-3];
    if (v_125 == nil) goto v_39;
    else goto v_40;
v_39:
    v_126 = qvalue(basic_elt(env, 1)); // name
    v_125 = qvalue(basic_elt(env, 7)); // special_cases!*
    v_125 = Lassoc(nil, v_126, v_125);
    stack[-3] = v_125;
    if (v_125 == nil) goto v_45;
    v_125 = stack[-3];
    v_125 = Lreverse(nil, v_125);
    env = stack[-6];
    if (!car_legal(v_125)) v_125 = carerror(v_125); else
    v_125 = car(v_125);
    stack[-2] = v_125;
    v_125 = stack[-2];
    if (v_125 == nil) goto v_55;
    v_125 = stack[-2];
    v_125 = ncons(v_125);
    env = stack[-6];
    stack[-2] = v_125;
    goto v_53;
v_55:
v_53:
    v_125 = stack[-3];
    v_125 = Lreverse(nil, v_125);
    env = stack[-6];
    if (!car_legal(v_125)) v_125 = cdrerror(v_125); else
    v_125 = cdr(v_125);
    if (!car_legal(v_125)) stack[0] = carerror(v_125); else
    stack[0] = car(v_125);
    v_125 = stack[-3];
    if (!car_legal(v_125)) v_125 = cdrerror(v_125); else
    v_125 = cdr(v_125);
    v_125 = Lreverse(nil, v_125);
    env = stack[-6];
    if (!car_legal(v_125)) v_125 = cdrerror(v_125); else
    v_125 = cdr(v_125);
    if (!car_legal(v_125)) v_125 = cdrerror(v_125); else
    v_125 = cdr(v_125);
    v_125 = Lreverse(nil, v_125);
    env = stack[-6];
    v_125 = cons(stack[0], v_125);
    env = stack[-6];
    stack[-3] = v_125;
    goto v_43;
v_45:
    v_126 = qvalue(basic_elt(env, 1)); // name
    v_125 = qvalue(basic_elt(env, 8)); // special_cases2!*
    v_126 = Lassoc(nil, v_126, v_125);
    v_125 = v_126;
    if (v_126 == nil) goto v_71;
    v_126 = v_125;
    if (!car_legal(v_126)) v_126 = cdrerror(v_126); else
    v_126 = cdr(v_126);
    if (!car_legal(v_126)) v_126 = carerror(v_126); else
    v_126 = car(v_126);
    if (!car_legal(v_125)) v_125 = cdrerror(v_125); else
    v_125 = cdr(v_125);
    if (!car_legal(v_125)) v_125 = cdrerror(v_125); else
    v_125 = cdr(v_125);
    {   LispObject fn = basic_elt(env, 11); // apply
    v_125 = (*qfn2(fn))(fn, v_126, v_125);
    }
    goto v_13;
v_71:
v_43:
    goto v_38;
v_40:
v_38:
    v_125 = stack[-3];
    if (v_125 == nil) goto v_86;
    v_125 = stack[-3];
    if (!car_legal(v_125)) v_126 = carerror(v_125); else
    v_126 = car(v_125);
    v_125 = qvalue(basic_elt(env, 9)); // valid_om!*
    v_125 = Lassoc(nil, v_126, v_125);
    stack[-1] = v_125;
    goto v_84;
v_86:
v_84:
    v_125 = stack[-1];
    if (v_125 == nil) goto v_95;
    v_125 = stack[-1];
    if (!car_legal(v_125)) v_125 = cdrerror(v_125); else
    v_125 = cdr(v_125);
    if (!car_legal(v_125)) v_125 = carerror(v_125); else
    v_125 = car(v_125);
    stack[-1] = v_125;
    goto v_93;
v_95:
v_93:
    v_125 = stack[-3];
    if (v_125 == nil) goto v_106;
    else goto v_107;
v_106:
    v_125 = lisp_true;
    goto v_105;
v_107:
    v_126 = stack[-5];
    v_125 = stack[-1];
    v_125 = (v_125 == nil ? lisp_true : nil);
    v_125 = (equal(v_126, v_125) ? lisp_true : nil);
    goto v_105;
    v_125 = nil;
v_105:
    if (v_125 == nil) goto v_103;
    v_125 = qvalue(basic_elt(env, 1)); // name
    {   LispObject fn = basic_elt(env, 12); // encodeir
    v_125 = (*qfn1(fn))(fn, v_125);
    }
    goto v_13;
v_103:
    v_125 = stack[-3];
    if (!car_legal(v_125)) v_126 = carerror(v_125); else
    v_126 = car(v_125);
    v_125 = stack[-2];
    v_125 = list2(v_126, v_125);
v_13:
    ;}  // end of a binding scope
    return onevalue(v_125);
}



// Code for ps!:expression

static LispObject CC_psTexpression(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_35, v_36, v_37;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_37 = v_2;
// end of prologue
    v_35 = v_37;
    if (!consp(v_35)) goto v_10;
    else goto v_11;
v_10:
    v_35 = lisp_true;
    goto v_9;
v_11:
    v_35 = v_37;
    if (!car_legal(v_35)) v_36 = carerror(v_35); else
    v_36 = car(v_35);
    v_35 = basic_elt(env, 1); // !:ps!:
    if (v_36 == v_35) goto v_19;
    v_35 = v_37;
    if (!car_legal(v_35)) v_35 = carerror(v_35); else
    v_35 = car(v_35);
    if (!symbolp(v_35)) v_35 = nil;
    else { v_35 = qfastgets(v_35);
           if (v_35 != nil) { v_35 = elt(v_35, 8); // dname
#ifdef RECORD_GET
             if (v_35 != SPID_NOPROP)
                record_get(elt(fastget_names, 8), 1);
             else record_get(elt(fastget_names, 8), 0),
                v_35 = nil; }
           else record_get(elt(fastget_names, 8), 0); }
#else
             if (v_35 == SPID_NOPROP) v_35 = nil; }}
#endif
    goto v_17;
v_19:
    v_35 = nil;
    goto v_17;
    v_35 = nil;
v_17:
    goto v_9;
    v_35 = nil;
v_9:
    if (v_35 == nil) goto v_7;
    v_35 = v_37;
    goto v_5;
v_7:
    v_36 = v_37;
    v_35 = static_cast<LispObject>(96)+TAG_FIXNUM; // 6
    {
        LispObject fn = basic_elt(env, 2); // ps!:getv
        return (*qfn2(fn))(fn, v_36, v_35);
    }
    v_35 = nil;
v_5:
    return onevalue(v_35);
}



// Code for evallessp

static LispObject CC_evallessp(LispObject env,
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
        LispObject fn = basic_elt(env, 1); // evalgreaterp
        return (*qfn2(fn))(fn, v_9, v_8);
    }
}



// Code for dipilcomb1

static LispObject CC_dipilcomb1(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_273, v_274, v_275;
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
    real_push(nil, nil, nil, nil, nil);
    real_push(nil, nil, nil, nil, nil);
    push(nil, nil);
    stack_popper stack_popper_var(18);
// copy arguments values to proper place
    stack[-10] = v_7;
    stack[-11] = v_6;
    stack[-12] = v_5;
    stack[-13] = v_4;
    stack[-14] = v_3;
    stack[-15] = v_2;
// end of prologue
    v_273 = qvalue(basic_elt(env, 1)); // !*gcd
    stack[-1] = v_273;
    stack[-16] = nil;
    stack[-9] = nil;
// Binding !*gcd
// FLUIDBIND: reloadenv=17 litvec-offset=1 saveloc=0
{   bind_fluid_stack bind_fluid_var(-17, 1, 0);
    setvalue(basic_elt(env, 1), nil); // !*gcd
    v_274 = stack[-14];
    v_273 = static_cast<LispObject>(-1600)+TAG_FIXNUM; // -100
    {   LispObject fn = basic_elt(env, 2); // vbcsize
    v_273 = (*qfn2(fn))(fn, v_274, v_273);
    }
    env = stack[-17];
    if (v_273 == nil) goto v_33;
    v_274 = stack[-11];
    v_273 = static_cast<LispObject>(-1600)+TAG_FIXNUM; // -100
    {   LispObject fn = basic_elt(env, 2); // vbcsize
    v_273 = (*qfn2(fn))(fn, v_274, v_273);
    }
    env = stack[-17];
    if (v_273 == nil) goto v_33;
    v_273 = stack[-1];
    goto v_31;
v_33:
    v_273 = nil;
v_31:
    setvalue(basic_elt(env, 1), v_273); // !*gcd
    v_273 = stack[-13];
    {   LispObject fn = basic_elt(env, 3); // evzero!?
    v_273 = (*qfn1(fn))(fn, v_273);
    }
    env = stack[-17];
    v_273 = (v_273 == nil ? lisp_true : nil);
    stack[-7] = v_273;
    v_273 = stack[-10];
    {   LispObject fn = basic_elt(env, 3); // evzero!?
    v_273 = (*qfn1(fn))(fn, v_273);
    }
    env = stack[-17];
    v_273 = (v_273 == nil ? lisp_true : nil);
    stack[-6] = v_273;
    v_273 = lisp_true;
    stack[-4] = v_273;
    stack[-5] = v_273;
    v_273 = nil;
    stack[-8] = v_273;
    stack[-2] = v_273;
    stack[-3] = v_273;
v_29:
    v_273 = stack[-5];
    if (v_273 == nil) goto v_54;
    v_273 = stack[-15];
    if (v_273 == nil) goto v_58;
    else goto v_59;
v_58:
    v_273 = stack[-12];
    if (v_273 == nil) goto v_63;
    else goto v_64;
v_63:
    v_273 = stack[-8];
    goto v_62;
v_64:
    stack[-1] = stack[-8];
    stack[-2] = stack[-12];
    v_275 = stack[-10];
    v_274 = stack[-11];
    v_273 = nil;
    v_273 = list2star(v_275, v_274, v_273);
    env = stack[-17];
    {   LispObject fn = basic_elt(env, 4); // dipprod
    v_273 = (*qfn2(fn))(fn, stack[-2], v_273);
    }
    env = stack[-17];
    v_273 = Lnconc(nil, stack[-1], v_273);
    goto v_62;
    v_273 = nil;
v_62:
    goto v_28;
v_59:
    v_273 = stack[-15];
    if (!car_legal(v_273)) v_273 = carerror(v_273); else
    v_273 = car(v_273);
    stack[-16] = v_273;
    v_273 = stack[-7];
    if (v_273 == nil) goto v_82;
    v_274 = stack[-16];
    v_273 = stack[-13];
    {   LispObject fn = basic_elt(env, 5); // evsum
    v_273 = (*qfn2(fn))(fn, v_274, v_273);
    }
    env = stack[-17];
    stack[-16] = v_273;
    goto v_80;
v_82:
v_80:
    v_273 = nil;
    stack[-5] = v_273;
    goto v_52;
v_54:
v_52:
    v_273 = stack[-4];
    if (v_273 == nil) goto v_91;
    v_273 = stack[-12];
    if (v_273 == nil) goto v_95;
    else goto v_96;
v_95:
    stack[-1] = stack[-8];
    stack[-2] = stack[-15];
    v_275 = stack[-13];
    v_274 = stack[-14];
    v_273 = nil;
    v_273 = list2star(v_275, v_274, v_273);
    env = stack[-17];
    {   LispObject fn = basic_elt(env, 4); // dipprod
    v_273 = (*qfn2(fn))(fn, stack[-2], v_273);
    }
    env = stack[-17];
    v_273 = Lnconc(nil, stack[-1], v_273);
    goto v_28;
v_96:
    v_273 = stack[-12];
    if (!car_legal(v_273)) v_273 = carerror(v_273); else
    v_273 = car(v_273);
    stack[-9] = v_273;
    v_273 = stack[-6];
    if (v_273 == nil) goto v_111;
    v_274 = stack[-9];
    v_273 = stack[-10];
    {   LispObject fn = basic_elt(env, 5); // evsum
    v_273 = (*qfn2(fn))(fn, v_274, v_273);
    }
    env = stack[-17];
    stack[-9] = v_273;
    goto v_109;
v_111:
v_109:
    v_273 = nil;
    stack[-4] = v_273;
    goto v_89;
v_91:
v_89:
    v_274 = stack[-16];
    v_273 = stack[-9];
    {   LispObject fn = basic_elt(env, 6); // evcomp
    v_273 = (*qfn2(fn))(fn, v_274, v_273);
    }
    env = stack[-17];
    v_275 = v_273;
    v_274 = v_275;
    v_273 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_274 == v_273) goto v_122;
    else goto v_123;
v_122:
    v_273 = qvalue(basic_elt(env, 1)); // !*gcd
    if (v_273 == nil) goto v_129;
    v_273 = stack[-15];
    if (!car_legal(v_273)) v_273 = cdrerror(v_273); else
    v_273 = cdr(v_273);
    if (!car_legal(v_273)) v_274 = carerror(v_273); else
    v_274 = car(v_273);
    v_273 = static_cast<LispObject>(-1600)+TAG_FIXNUM; // -100
    {   LispObject fn = basic_elt(env, 2); // vbcsize
    v_273 = (*qfn2(fn))(fn, v_274, v_273);
    }
    env = stack[-17];
    if (v_273 == nil) goto v_132;
    else goto v_129;
v_132:
    v_273 = nil;
    setvalue(basic_elt(env, 1), v_273); // !*gcd
    goto v_127;
v_129:
v_127:
    v_273 = stack[-15];
    if (!car_legal(v_273)) v_273 = cdrerror(v_273); else
    v_273 = cdr(v_273);
    if (!car_legal(v_273)) v_274 = carerror(v_273); else
    v_274 = car(v_273);
    v_273 = stack[-14];
    {   LispObject fn = basic_elt(env, 7); // bcprod
    v_273 = (*qfn2(fn))(fn, v_274, v_273);
    }
    env = stack[-17];
    stack[-1] = v_273;
    v_273 = stack[-1];
    {   LispObject fn = basic_elt(env, 8); // bczero!?
    v_273 = (*qfn1(fn))(fn, v_273);
    }
    env = stack[-17];
    if (v_273 == nil) goto v_146;
    else goto v_147;
v_146:
    v_275 = stack[-16];
    v_274 = stack[-1];
    v_273 = nil;
    v_273 = list2star(v_275, v_274, v_273);
    env = stack[-17];
    v_273 = Lnconc(nil, stack[-2], v_273);
    env = stack[-17];
    stack[-3] = v_273;
    v_273 = stack[-3];
    if (!car_legal(v_273)) v_273 = cdrerror(v_273); else
    v_273 = cdr(v_273);
    if (!car_legal(v_273)) v_273 = cdrerror(v_273); else
    v_273 = cdr(v_273);
    stack[-2] = v_273;
    goto v_145;
v_147:
v_145:
    v_273 = stack[-15];
    if (!car_legal(v_273)) v_273 = cdrerror(v_273); else
    v_273 = cdr(v_273);
    if (!car_legal(v_273)) v_273 = cdrerror(v_273); else
    v_273 = cdr(v_273);
    stack[-15] = v_273;
    v_273 = lisp_true;
    stack[-5] = v_273;
    goto v_121;
v_123:
    v_274 = v_275;
    v_273 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    if (v_274 == v_273) goto v_164;
    else goto v_165;
v_164:
    v_273 = qvalue(basic_elt(env, 1)); // !*gcd
    if (v_273 == nil) goto v_171;
    v_273 = stack[-12];
    if (!car_legal(v_273)) v_273 = cdrerror(v_273); else
    v_273 = cdr(v_273);
    if (!car_legal(v_273)) v_274 = carerror(v_273); else
    v_274 = car(v_273);
    v_273 = static_cast<LispObject>(-1600)+TAG_FIXNUM; // -100
    {   LispObject fn = basic_elt(env, 2); // vbcsize
    v_273 = (*qfn2(fn))(fn, v_274, v_273);
    }
    env = stack[-17];
    if (v_273 == nil) goto v_174;
    else goto v_171;
v_174:
    v_273 = nil;
    setvalue(basic_elt(env, 1), v_273); // !*gcd
    goto v_169;
v_171:
v_169:
    v_273 = stack[-12];
    if (!car_legal(v_273)) v_273 = cdrerror(v_273); else
    v_273 = cdr(v_273);
    if (!car_legal(v_273)) v_274 = carerror(v_273); else
    v_274 = car(v_273);
    v_273 = stack[-11];
    {   LispObject fn = basic_elt(env, 7); // bcprod
    v_273 = (*qfn2(fn))(fn, v_274, v_273);
    }
    env = stack[-17];
    stack[-1] = v_273;
    v_273 = stack[-1];
    {   LispObject fn = basic_elt(env, 8); // bczero!?
    v_273 = (*qfn1(fn))(fn, v_273);
    }
    env = stack[-17];
    if (v_273 == nil) goto v_188;
    else goto v_189;
v_188:
    v_275 = stack[-9];
    v_274 = stack[-1];
    v_273 = nil;
    v_273 = list2star(v_275, v_274, v_273);
    env = stack[-17];
    v_273 = Lnconc(nil, stack[-2], v_273);
    env = stack[-17];
    stack[-3] = v_273;
    v_273 = stack[-3];
    if (!car_legal(v_273)) v_273 = cdrerror(v_273); else
    v_273 = cdr(v_273);
    if (!car_legal(v_273)) v_273 = cdrerror(v_273); else
    v_273 = cdr(v_273);
    stack[-2] = v_273;
    goto v_187;
v_189:
v_187:
    v_273 = stack[-12];
    if (!car_legal(v_273)) v_273 = cdrerror(v_273); else
    v_273 = cdr(v_273);
    if (!car_legal(v_273)) v_273 = cdrerror(v_273); else
    v_273 = cdr(v_273);
    stack[-12] = v_273;
    v_273 = lisp_true;
    stack[-4] = v_273;
    goto v_121;
v_165:
    v_273 = qvalue(basic_elt(env, 1)); // !*gcd
    if (v_273 == nil) goto v_210;
    v_273 = stack[-15];
    if (!car_legal(v_273)) v_273 = cdrerror(v_273); else
    v_273 = cdr(v_273);
    if (!car_legal(v_273)) v_274 = carerror(v_273); else
    v_274 = car(v_273);
    v_273 = static_cast<LispObject>(-1600)+TAG_FIXNUM; // -100
    {   LispObject fn = basic_elt(env, 2); // vbcsize
    v_273 = (*qfn2(fn))(fn, v_274, v_273);
    }
    env = stack[-17];
    if (v_273 == nil) goto v_216;
    else goto v_217;
v_216:
    v_273 = lisp_true;
    goto v_215;
v_217:
    v_273 = stack[-12];
    if (!car_legal(v_273)) v_273 = cdrerror(v_273); else
    v_273 = cdr(v_273);
    if (!car_legal(v_273)) v_274 = carerror(v_273); else
    v_274 = car(v_273);
    v_273 = static_cast<LispObject>(-1600)+TAG_FIXNUM; // -100
    {   LispObject fn = basic_elt(env, 2); // vbcsize
    v_273 = (*qfn2(fn))(fn, v_274, v_273);
    }
    env = stack[-17];
    v_273 = (v_273 == nil ? lisp_true : nil);
    goto v_215;
    v_273 = nil;
v_215:
    if (v_273 == nil) goto v_210;
    v_273 = nil;
    setvalue(basic_elt(env, 1), v_273); // !*gcd
    goto v_208;
v_210:
v_208:
    v_273 = stack[-15];
    if (!car_legal(v_273)) v_273 = cdrerror(v_273); else
    v_273 = cdr(v_273);
    if (!car_legal(v_273)) v_274 = carerror(v_273); else
    v_274 = car(v_273);
    v_273 = stack[-14];
    {   LispObject fn = basic_elt(env, 7); // bcprod
    stack[-1] = (*qfn2(fn))(fn, v_274, v_273);
    }
    env = stack[-17];
    v_273 = stack[-12];
    if (!car_legal(v_273)) v_273 = cdrerror(v_273); else
    v_273 = cdr(v_273);
    if (!car_legal(v_273)) v_274 = carerror(v_273); else
    v_274 = car(v_273);
    v_273 = stack[-11];
    {   LispObject fn = basic_elt(env, 7); // bcprod
    v_273 = (*qfn2(fn))(fn, v_274, v_273);
    }
    env = stack[-17];
    {   LispObject fn = basic_elt(env, 9); // bcsum
    v_273 = (*qfn2(fn))(fn, stack[-1], v_273);
    }
    env = stack[-17];
    stack[-1] = v_273;
    v_273 = stack[-1];
    {   LispObject fn = basic_elt(env, 8); // bczero!?
    v_273 = (*qfn1(fn))(fn, v_273);
    }
    env = stack[-17];
    if (v_273 == nil) goto v_246;
    else goto v_247;
v_246:
    v_275 = stack[-16];
    v_274 = stack[-1];
    v_273 = nil;
    v_273 = list2star(v_275, v_274, v_273);
    env = stack[-17];
    v_273 = Lnconc(nil, stack[-2], v_273);
    env = stack[-17];
    stack[-3] = v_273;
    v_273 = stack[-3];
    if (!car_legal(v_273)) v_273 = cdrerror(v_273); else
    v_273 = cdr(v_273);
    if (!car_legal(v_273)) v_273 = cdrerror(v_273); else
    v_273 = cdr(v_273);
    stack[-2] = v_273;
    goto v_245;
v_247:
v_245:
    v_273 = stack[-15];
    if (!car_legal(v_273)) v_273 = cdrerror(v_273); else
    v_273 = cdr(v_273);
    if (!car_legal(v_273)) v_273 = cdrerror(v_273); else
    v_273 = cdr(v_273);
    stack[-15] = v_273;
    v_273 = stack[-12];
    if (!car_legal(v_273)) v_273 = cdrerror(v_273); else
    v_273 = cdr(v_273);
    if (!car_legal(v_273)) v_273 = cdrerror(v_273); else
    v_273 = cdr(v_273);
    stack[-12] = v_273;
    v_273 = lisp_true;
    stack[-4] = v_273;
    stack[-5] = v_273;
    goto v_121;
v_121:
    v_273 = stack[-8];
    if (v_273 == nil) goto v_268;
    else goto v_269;
v_268:
    v_273 = stack[-3];
    stack[-2] = v_273;
    stack[-8] = v_273;
    goto v_267;
v_269:
v_267:
    goto v_29;
v_28:
    ;}  // end of a binding scope
    return onevalue(v_273);
}



// Code for mkprogn

static LispObject CC_mkprogn(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_23, v_24, v_25, v_26;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_25 = v_3;
    v_26 = v_2;
// end of prologue
    v_24 = v_25;
    v_23 = basic_elt(env, 1); // progn
    if (!consp(v_24)) goto v_8;
    v_24 = car(v_24);
    if (v_24 == v_23) goto v_7;
    else goto v_8;
v_7:
    v_23 = basic_elt(env, 1); // progn
    v_24 = v_26;
    if (!car_legal(v_25)) v_25 = cdrerror(v_25); else
    v_25 = cdr(v_25);
    return list2star(v_23, v_24, v_25);
v_8:
    v_23 = basic_elt(env, 1); // progn
    v_24 = v_26;
    return list3(v_23, v_24, v_25);
    v_23 = nil;
    return onevalue(v_23);
}



// Code for getmatelem

static LispObject CC_getmatelem(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_123, v_124, v_125;
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
v_1:
    v_123 = stack[-2];
    v_124 = Llength(nil, v_123);
    env = stack[-4];
    v_123 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    if (v_124 == v_123) goto v_11;
    v_124 = stack[-2];
    v_123 = basic_elt(env, 1); // "matrix element"
    {   LispObject fn = basic_elt(env, 8); // typerr
    v_123 = (*qfn2(fn))(fn, v_124, v_123);
    }
    env = stack[-4];
    goto v_9;
v_11:
v_9:
    v_123 = stack[-2];
    if (!car_legal(v_123)) v_123 = carerror(v_123); else
    v_123 = car(v_123);
    if (!symbolp(v_123)) v_123 = nil;
    else { v_123 = qfastgets(v_123);
           if (v_123 != nil) { v_123 = elt(v_123, 4); // avalue
#ifdef RECORD_GET
             if (v_123 != SPID_NOPROP)
                record_get(elt(fastget_names, 4), 1);
             else record_get(elt(fastget_names, 4), 0),
                v_123 = nil; }
           else record_get(elt(fastget_names, 4), 0); }
#else
             if (v_123 == SPID_NOPROP) v_123 = nil; }}
#endif
    stack[-3] = v_123;
    v_123 = stack[-3];
    if (v_123 == nil) goto v_27;
    else goto v_28;
v_27:
    v_123 = lisp_true;
    goto v_26;
v_28:
    v_123 = stack[-3];
    if (!car_legal(v_123)) v_124 = carerror(v_123); else
    v_124 = car(v_123);
    v_123 = basic_elt(env, 2); // matrix
    v_123 = (v_124 == v_123 ? lisp_true : nil);
    v_123 = (v_123 == nil ? lisp_true : nil);
    goto v_26;
    v_123 = nil;
v_26:
    if (v_123 == nil) goto v_24;
    v_123 = stack[-2];
    if (!car_legal(v_123)) v_124 = carerror(v_123); else
    v_124 = car(v_123);
    v_123 = basic_elt(env, 3); // "matrix"
    {   LispObject fn = basic_elt(env, 8); // typerr
    v_123 = (*qfn2(fn))(fn, v_124, v_123);
    }
    env = stack[-4];
    goto v_22;
v_24:
    v_123 = stack[-3];
    if (!car_legal(v_123)) v_123 = cdrerror(v_123); else
    v_123 = cdr(v_123);
    if (!car_legal(v_123)) v_124 = carerror(v_123); else
    v_124 = car(v_123);
    stack[-3] = v_124;
    v_123 = basic_elt(env, 4); // mat
    if (!consp(v_124)) goto v_42;
    v_124 = car(v_124);
    if (v_124 == v_123) goto v_43;
v_42:
    v_123 = stack[-3];
    if (symbolp(v_123)) goto v_51;
    else goto v_52;
v_51:
    v_124 = stack[-3];
    v_123 = stack[-2];
    if (!car_legal(v_123)) v_123 = cdrerror(v_123); else
    v_123 = cdr(v_123);
    v_123 = cons(v_124, v_123);
    env = stack[-4];
    stack[-2] = v_123;
    goto v_1;
v_52:
    stack[-1] = basic_elt(env, 2); // matrix
    stack[0] = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_125 = basic_elt(env, 5); // "Matrix"
    v_123 = stack[-2];
    if (!car_legal(v_123)) v_124 = carerror(v_123); else
    v_124 = car(v_123);
    v_123 = basic_elt(env, 6); // "not set"
    v_123 = list3(v_125, v_124, v_123);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 9); // rerror
    v_123 = (*qfn3(fn))(fn, stack[-1], stack[0], v_123);
    }
    env = stack[-4];
    goto v_50;
v_50:
    goto v_22;
v_43:
v_22:
    v_123 = stack[-2];
    if (!car_legal(v_123)) v_123 = cdrerror(v_123); else
    v_123 = cdr(v_123);
    if (!car_legal(v_123)) v_123 = carerror(v_123); else
    v_123 = car(v_123);
    {   LispObject fn = basic_elt(env, 10); // reval_without_mod
    v_123 = (*qfn1(fn))(fn, v_123);
    }
    env = stack[-4];
    stack[0] = v_123;
    v_123 = stack[0];
    v_123 = integerp(v_123);
    if (v_123 == nil) goto v_79;
    else goto v_80;
v_79:
    v_123 = lisp_true;
    goto v_78;
v_80:
    v_124 = stack[0];
    v_123 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_123 = static_cast<LispObject>(lesseq2(v_124, v_123));
    v_123 = v_123 ? lisp_true : nil;
    env = stack[-4];
    goto v_78;
    v_123 = nil;
v_78:
    if (v_123 == nil) goto v_76;
    v_124 = stack[0];
    v_123 = basic_elt(env, 7); // "positive integer"
    {   LispObject fn = basic_elt(env, 8); // typerr
    v_123 = (*qfn2(fn))(fn, v_124, v_123);
    }
    env = stack[-4];
    goto v_74;
v_76:
v_74:
    v_123 = stack[-3];
    if (!car_legal(v_123)) v_124 = cdrerror(v_123); else
    v_124 = cdr(v_123);
    v_123 = stack[0];
    {   LispObject fn = basic_elt(env, 11); // nth
    v_123 = (*qfn2(fn))(fn, v_124, v_123);
    }
    env = stack[-4];
    stack[-3] = v_123;
    v_123 = stack[-2];
    if (!car_legal(v_123)) v_123 = cdrerror(v_123); else
    v_123 = cdr(v_123);
    if (!car_legal(v_123)) v_123 = cdrerror(v_123); else
    v_123 = cdr(v_123);
    if (!car_legal(v_123)) v_123 = carerror(v_123); else
    v_123 = car(v_123);
    {   LispObject fn = basic_elt(env, 10); // reval_without_mod
    v_123 = (*qfn1(fn))(fn, v_123);
    }
    env = stack[-4];
    stack[0] = v_123;
    v_123 = stack[0];
    v_123 = integerp(v_123);
    if (v_123 == nil) goto v_107;
    else goto v_108;
v_107:
    v_123 = lisp_true;
    goto v_106;
v_108:
    v_124 = stack[0];
    v_123 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_123 = static_cast<LispObject>(lesseq2(v_124, v_123));
    v_123 = v_123 ? lisp_true : nil;
    env = stack[-4];
    goto v_106;
    v_123 = nil;
v_106:
    if (v_123 == nil) goto v_104;
    v_124 = stack[0];
    v_123 = basic_elt(env, 7); // "positive integer"
    {   LispObject fn = basic_elt(env, 8); // typerr
    v_123 = (*qfn2(fn))(fn, v_124, v_123);
    }
    env = stack[-4];
    goto v_102;
v_104:
v_102:
    v_124 = stack[-3];
    v_123 = stack[0];
    {
        LispObject fn = basic_elt(env, 11); // nth
        return (*qfn2(fn))(fn, v_124, v_123);
    }
    return onevalue(v_123);
}



// Code for di_restore

static LispObject CC_di_restore(LispObject env,
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
        LispObject fn = basic_elt(env, 1); // di_restore1
        return (*qfn2(fn))(fn, v_8, v_7);
    }
}



// Code for negate!-term

static LispObject CC_negateKterm(LispObject env,
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
    v_10 = v_11;
    if (!car_legal(v_10)) stack[0] = carerror(v_10); else
    stack[0] = car(v_10);
    v_10 = v_11;
    if (!car_legal(v_10)) v_10 = cdrerror(v_10); else
    v_10 = cdr(v_10);
    {   LispObject fn = basic_elt(env, 1); // minus!-mod!-p
    v_10 = (*qfn1(fn))(fn, v_10);
    }
    {
        LispObject v_13 = stack[0];
        return cons(v_13, v_10);
    }
}



// Code for lalr_associativity

static LispObject CC_lalr_associativity(LispObject env,
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
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_18 = v_2;
// end of prologue
    v_19 = qvalue(basic_elt(env, 1)); // precedence_table
    v_18 = Lgetv(nil, v_19, v_18);
    v_19 = v_18;
    v_18 = v_19;
    if (v_18 == nil) goto v_11;
    v_18 = v_19;
    if (!car_legal(v_18)) v_18 = cdrerror(v_18); else
    v_18 = cdr(v_18);
    goto v_9;
v_11:
    v_18 = nil;
    goto v_9;
    v_18 = nil;
v_9:
    return onevalue(v_18);
}



// Code for simplify!-filename

static LispObject CC_simplifyKfilename(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[-1] = v_2;
// end of prologue
    v_47 = stack[-1];
    v_47 = Lexplodec(nil, v_47);
    env = stack[-3];
    stack[-2] = v_47;
    v_47 = basic_elt(env, 1); // "/packages/"
    v_47 = Lexplodec(nil, v_47);
    env = stack[-3];
    stack[0] = v_47;
v_14:
    v_47 = stack[-2];
    if (v_47 == nil) goto v_17;
    v_48 = stack[-2];
    v_47 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // starts!-with
    v_47 = (*qfn2(fn))(fn, v_48, v_47);
    }
    env = stack[-3];
    if (v_47 == nil) goto v_21;
    else goto v_17;
v_21:
    goto v_18;
v_17:
    goto v_13;
v_18:
    v_47 = stack[-2];
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    stack[-2] = v_47;
    goto v_14;
v_13:
    v_47 = stack[-2];
    if (v_47 == nil) goto v_30;
    else goto v_31;
v_30:
    v_47 = stack[-1];
    goto v_7;
v_31:
    v_47 = stack[-2];
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    stack[-2] = v_47;
    v_47 = stack[-2];
    {
        LispObject fn = basic_elt(env, 3); // list2string
        return (*qfn1(fn))(fn, v_47);
    }
v_7:
    return onevalue(v_47);
}



// Code for wureducedpolysp

static LispObject CC_wureducedpolysp(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // wureducedp
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



// Code for talp_smwrmknowl

static LispObject CC_talp_smwrmknowl(LispObject env,
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
    v_18 = qvalue(basic_elt(env, 1)); // !*rlsusi
    if (v_18 == nil) goto v_8;
    v_18 = v_20;
    {
        LispObject fn = basic_elt(env, 2); // cl_susirmknowl
        return (*qfn2(fn))(fn, v_18, v_19);
    }
v_8:
    v_18 = v_20;
    {
        LispObject fn = basic_elt(env, 3); // cl_smrmknowl
        return (*qfn2(fn))(fn, v_18, v_19);
    }
    v_18 = nil;
    return onevalue(v_18);
}



// Code for setunion

static LispObject CC_setunion(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_3;
    v_32 = v_2;
// end of prologue
v_7:
    v_31 = stack[0];
    if (v_31 == nil) goto v_10;
    else goto v_11;
v_10:
    v_31 = v_32;
    goto v_6;
v_11:
    v_31 = stack[0];
    if (!car_legal(v_31)) v_33 = carerror(v_31); else
    v_33 = car(v_31);
    v_31 = v_32;
    v_31 = Lmember(nil, v_33, v_31);
    if (v_31 == nil) goto v_15;
    v_31 = stack[0];
    if (!car_legal(v_31)) v_31 = cdrerror(v_31); else
    v_31 = cdr(v_31);
    stack[0] = v_31;
    goto v_7;
v_15:
    stack[-1] = v_32;
    v_31 = stack[0];
    if (!car_legal(v_31)) v_31 = carerror(v_31); else
    v_31 = car(v_31);
    v_31 = ncons(v_31);
    env = stack[-2];
    v_31 = Lappend_2(nil, stack[-1], v_31);
    env = stack[-2];
    v_32 = v_31;
    v_31 = stack[0];
    if (!car_legal(v_31)) v_31 = cdrerror(v_31); else
    v_31 = cdr(v_31);
    stack[0] = v_31;
    goto v_7;
    v_31 = nil;
v_6:
    return onevalue(v_31);
}



// Code for cl_pnf2

static LispObject CC_cl_pnf2(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_210, v_211, v_212;
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
    v_210 = stack[0];
    if (!consp(v_210)) goto v_10;
    else goto v_11;
v_10:
    v_210 = stack[0];
    goto v_9;
v_11:
    v_210 = stack[0];
    if (!car_legal(v_210)) v_210 = carerror(v_210); else
    v_210 = car(v_210);
    goto v_9;
    v_210 = nil;
v_9:
    stack[-1] = v_210;
    v_211 = stack[-1];
    v_210 = basic_elt(env, 1); // ex
    if (v_211 == v_210) goto v_24;
    else goto v_25;
v_24:
    v_210 = lisp_true;
    goto v_23;
v_25:
    v_211 = stack[-1];
    v_210 = basic_elt(env, 2); // all
    v_210 = (v_211 == v_210 ? lisp_true : nil);
    goto v_23;
    v_210 = nil;
v_23:
    if (v_210 == nil) goto v_21;
    v_210 = stack[0];
    {
        LispObject fn = basic_elt(env, 15); // cl_pnf2!-quantifier
        return (*qfn1(fn))(fn, v_210);
    }
v_21:
    v_211 = stack[-1];
    v_210 = basic_elt(env, 3); // or
    if (v_211 == v_210) goto v_42;
    else goto v_43;
v_42:
    v_210 = lisp_true;
    goto v_41;
v_43:
    v_211 = stack[-1];
    v_210 = basic_elt(env, 4); // and
    v_210 = (v_211 == v_210 ? lisp_true : nil);
    goto v_41;
    v_210 = nil;
v_41:
    if (v_210 == nil) goto v_39;
    v_210 = stack[0];
    {
        LispObject fn = basic_elt(env, 16); // cl_pnf2!-junctor
        return (*qfn1(fn))(fn, v_210);
    }
v_39:
    v_211 = stack[-1];
    v_210 = basic_elt(env, 5); // true
    if (v_211 == v_210) goto v_60;
    else goto v_61;
v_60:
    v_210 = lisp_true;
    goto v_59;
v_61:
    v_211 = stack[-1];
    v_210 = basic_elt(env, 6); // false
    v_210 = (v_211 == v_210 ? lisp_true : nil);
    goto v_59;
    v_210 = nil;
v_59:
    if (v_210 == nil) goto v_57;
    v_210 = stack[0];
    return ncons(v_210);
v_57:
    v_211 = stack[-1];
    v_210 = basic_elt(env, 0); // cl_pnf2
    {   LispObject fn = basic_elt(env, 17); // rl_external
    v_210 = (*qfn2(fn))(fn, v_211, v_210);
    }
    env = stack[-2];
    v_211 = v_210;
    if (v_210 == nil) goto v_75;
    stack[-1] = v_211;
    v_210 = stack[0];
    v_210 = ncons(v_210);
    env = stack[-2];
    {
        LispObject v_215 = stack[-1];
        LispObject fn = basic_elt(env, 18); // apply
        return (*qfn2(fn))(fn, v_215, v_210);
    }
v_75:
    v_211 = stack[-1];
    v_210 = basic_elt(env, 5); // true
    if (v_211 == v_210) goto v_93;
    else goto v_94;
v_93:
    v_210 = lisp_true;
    goto v_92;
v_94:
    v_211 = stack[-1];
    v_210 = basic_elt(env, 6); // false
    v_210 = (v_211 == v_210 ? lisp_true : nil);
    goto v_92;
    v_210 = nil;
v_92:
    if (v_210 == nil) goto v_90;
    v_210 = lisp_true;
    goto v_88;
v_90:
    v_211 = stack[-1];
    v_210 = basic_elt(env, 3); // or
    if (v_211 == v_210) goto v_120;
    else goto v_121;
v_120:
    v_210 = lisp_true;
    goto v_119;
v_121:
    v_211 = stack[-1];
    v_210 = basic_elt(env, 4); // and
    v_210 = (v_211 == v_210 ? lisp_true : nil);
    goto v_119;
    v_210 = nil;
v_119:
    if (v_210 == nil) goto v_117;
    v_210 = lisp_true;
    goto v_115;
v_117:
    v_211 = stack[-1];
    v_210 = basic_elt(env, 7); // not
    v_210 = (v_211 == v_210 ? lisp_true : nil);
    goto v_115;
    v_210 = nil;
v_115:
    if (v_210 == nil) goto v_113;
    v_210 = lisp_true;
    goto v_111;
v_113:
    v_211 = stack[-1];
    v_210 = basic_elt(env, 8); // impl
    if (v_211 == v_210) goto v_141;
    else goto v_142;
v_141:
    v_210 = lisp_true;
    goto v_140;
v_142:
    v_211 = stack[-1];
    v_210 = basic_elt(env, 9); // repl
    if (v_211 == v_210) goto v_150;
    else goto v_151;
v_150:
    v_210 = lisp_true;
    goto v_149;
v_151:
    v_211 = stack[-1];
    v_210 = basic_elt(env, 10); // equiv
    v_210 = (v_211 == v_210 ? lisp_true : nil);
    goto v_149;
    v_210 = nil;
v_149:
    goto v_140;
    v_210 = nil;
v_140:
    goto v_111;
    v_210 = nil;
v_111:
    if (v_210 == nil) goto v_109;
    v_210 = lisp_true;
    goto v_107;
v_109:
    v_211 = stack[-1];
    v_210 = basic_elt(env, 1); // ex
    if (v_211 == v_210) goto v_169;
    else goto v_170;
v_169:
    v_210 = lisp_true;
    goto v_168;
v_170:
    v_211 = stack[-1];
    v_210 = basic_elt(env, 2); // all
    v_210 = (v_211 == v_210 ? lisp_true : nil);
    goto v_168;
    v_210 = nil;
v_168:
    if (v_210 == nil) goto v_166;
    v_210 = lisp_true;
    goto v_164;
v_166:
    v_211 = stack[-1];
    v_210 = basic_elt(env, 11); // bex
    if (v_211 == v_210) goto v_188;
    else goto v_189;
v_188:
    v_210 = lisp_true;
    goto v_187;
v_189:
    v_211 = stack[-1];
    v_210 = basic_elt(env, 12); // ball
    v_210 = (v_211 == v_210 ? lisp_true : nil);
    goto v_187;
    v_210 = nil;
v_187:
    if (v_210 == nil) goto v_185;
    v_210 = lisp_true;
    goto v_183;
v_185:
    v_210 = stack[-1];
    if (!symbolp(v_210)) v_210 = nil;
    else { v_210 = qfastgets(v_210);
           if (v_210 != nil) { v_210 = elt(v_210, 21); // rl_external
#ifdef RECORD_GET
             if (v_210 != SPID_NOPROP)
                record_get(elt(fastget_names, 21), 1);
             else record_get(elt(fastget_names, 21), 0),
                v_210 = nil; }
           else record_get(elt(fastget_names, 21), 0); }
#else
             if (v_210 == SPID_NOPROP) v_210 = nil; }}
#endif
    goto v_183;
    v_210 = nil;
v_183:
    goto v_164;
    v_210 = nil;
v_164:
    goto v_107;
    v_210 = nil;
v_107:
    goto v_88;
    v_210 = nil;
v_88:
    if (v_210 == nil) goto v_86;
    v_212 = basic_elt(env, 13); // "cl_pnf2():"
    v_211 = stack[-1];
    v_210 = basic_elt(env, 14); // "invalid as operator"
    v_210 = list3(v_212, v_211, v_210);
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 19); // rederr
    v_210 = (*qfn1(fn))(fn, v_210);
    }
    goto v_84;
v_86:
v_84:
    v_210 = stack[0];
    return ncons(v_210);
    return onevalue(v_210);
}



// Code for attributesml

static LispObject CC_attributesml(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_67, v_68;
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
    v_67 = stack[-1];
    if (v_67 == nil) goto v_9;
    else goto v_10;
v_9:
    v_67 = stack[0];
    v_67 = Lprinc(nil, v_67);
    env = stack[-2];
    v_67 = basic_elt(env, 1); // ">"
    v_67 = Lprinc(nil, v_67);
    goto v_8;
v_10:
    v_67 = basic_elt(env, 2); // " "
    v_67 = Lprinc(nil, v_67);
    env = stack[-2];
    v_67 = stack[-1];
    if (!car_legal(v_67)) v_67 = carerror(v_67); else
    v_67 = car(v_67);
    if (!car_legal(v_67)) v_67 = carerror(v_67); else
    v_67 = car(v_67);
    v_67 = Lprinc(nil, v_67);
    env = stack[-2];
    v_67 = basic_elt(env, 3); // "="""
    v_67 = Lprinc(nil, v_67);
    env = stack[-2];
    v_67 = stack[-1];
    if (!car_legal(v_67)) v_67 = carerror(v_67); else
    v_67 = car(v_67);
    if (!car_legal(v_67)) v_68 = carerror(v_67); else
    v_68 = car(v_67);
    v_67 = basic_elt(env, 4); // definitionurl
    if (v_68 == v_67) goto v_29;
    v_67 = stack[-1];
    if (!car_legal(v_67)) v_67 = carerror(v_67); else
    v_67 = car(v_67);
    if (!car_legal(v_67)) v_67 = cdrerror(v_67); else
    v_67 = cdr(v_67);
    if (!car_legal(v_67)) v_68 = carerror(v_67); else
    v_68 = car(v_67);
    v_67 = basic_elt(env, 5); // vectorml
    if (v_68 == v_67) goto v_36;
    else goto v_37;
v_36:
    v_67 = basic_elt(env, 6); // "vector"
    v_67 = Lprinc(nil, v_67);
    env = stack[-2];
    goto v_35;
v_37:
    v_67 = stack[-1];
    if (!car_legal(v_67)) v_67 = carerror(v_67); else
    v_67 = car(v_67);
    if (!car_legal(v_67)) v_67 = cdrerror(v_67); else
    v_67 = cdr(v_67);
    if (!car_legal(v_67)) v_67 = carerror(v_67); else
    v_67 = car(v_67);
    v_67 = Lprinc(nil, v_67);
    env = stack[-2];
    goto v_35;
v_35:
    goto v_27;
v_29:
    v_67 = stack[-1];
    if (!car_legal(v_67)) v_67 = carerror(v_67); else
    v_67 = car(v_67);
    if (!car_legal(v_67)) v_67 = cdrerror(v_67); else
    v_67 = cdr(v_67);
    if (!car_legal(v_67)) v_67 = carerror(v_67); else
    v_67 = car(v_67);
    {   LispObject fn = basic_elt(env, 8); // mathml_list2string
    v_67 = (*qfn1(fn))(fn, v_67);
    }
    env = stack[-2];
    goto v_27;
v_27:
    v_67 = basic_elt(env, 7); // """"
    v_67 = Lprinc(nil, v_67);
    env = stack[-2];
    v_67 = stack[-1];
    if (!car_legal(v_67)) v_68 = cdrerror(v_67); else
    v_68 = cdr(v_67);
    v_67 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // attributesml
    v_67 = (*qfn2(fn))(fn, v_68, v_67);
    }
    goto v_8;
v_8:
    v_67 = nil;
    return onevalue(v_67);
}



// Code for spband_matrix

static LispObject CC_spband_matrix(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_171, v_172, v_173;
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
    stack[0] = stack[-8];
    v_173 = basic_elt(env, 1); // spm
    v_172 = stack[-8];
    v_171 = stack[-8];
    v_171 = list3(v_173, v_172, v_171);
    env = stack[-11];
    {   LispObject fn = basic_elt(env, 8); // mkempspmat
    v_171 = (*qfn2(fn))(fn, stack[0], v_171);
    }
    env = stack[-11];
    stack[-10] = v_171;
    v_171 = stack[-8];
    v_171 = integerp(v_171);
    if (v_171 == nil) goto v_26;
    else goto v_27;
v_26:
    v_171 = basic_elt(env, 2); // "Error in spband_matrix(second argument): should be an integer."
    {   LispObject fn = basic_elt(env, 9); // rederr
    v_171 = (*qfn1(fn))(fn, v_171);
    }
    env = stack[-11];
    goto v_25;
v_27:
v_25:
    v_171 = stack[-9];
    if (!consp(v_171)) goto v_34;
    else goto v_35;
v_34:
    v_171 = stack[-9];
    v_171 = ncons(v_171);
    env = stack[-11];
    stack[-9] = v_171;
    goto v_33;
v_35:
    v_171 = stack[-9];
    if (!car_legal(v_171)) v_172 = carerror(v_171); else
    v_172 = car(v_171);
    v_171 = basic_elt(env, 3); // list
    if (v_172 == v_171) goto v_39;
    else goto v_40;
v_39:
    v_171 = stack[-9];
    if (!car_legal(v_171)) v_171 = cdrerror(v_171); else
    v_171 = cdr(v_171);
    stack[-9] = v_171;
    goto v_33;
v_40:
    v_171 = basic_elt(env, 4); // "Error in spband_matrix(first argument): should be single value or list."
    {   LispObject fn = basic_elt(env, 9); // rederr
    v_171 = (*qfn1(fn))(fn, v_171);
    }
    env = stack[-11];
    goto v_33;
v_33:
    v_171 = stack[-9];
    v_171 = Llength(nil, v_171);
    env = stack[-11];
    stack[-5] = v_171;
    v_171 = stack[-5];
    v_171 = Levenp(nil, v_171);
    env = stack[-11];
    if (v_171 == nil) goto v_55;
    v_171 = basic_elt(env, 5); // "Error in spband matrix(first argument): number of elements must be odd."
    {   LispObject fn = basic_elt(env, 9); // rederr
    v_171 = (*qfn1(fn))(fn, v_171);
    }
    env = stack[-11];
    goto v_53;
v_55:
v_53:
    stack[0] = basic_elt(env, 6); // quotient
    v_171 = stack[-5];
    v_172 = add1(v_171);
    env = stack[-11];
    v_171 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_171 = list3(stack[0], v_172, v_171);
    env = stack[-11];
    {   LispObject fn = basic_elt(env, 10); // reval
    v_171 = (*qfn1(fn))(fn, v_171);
    }
    env = stack[-11];
    stack[-4] = v_171;
    v_171 = stack[-4];
    v_171 = integerp(v_171);
    if (v_171 == nil) goto v_74;
    v_171 = stack[-4];
    v_172 = v_171;
    goto v_72;
v_74:
    v_171 = stack[-4];
    {   LispObject fn = basic_elt(env, 10); // reval
    v_171 = (*qfn1(fn))(fn, v_171);
    }
    env = stack[-11];
    v_172 = v_171;
    goto v_72;
    v_172 = nil;
v_72:
    v_171 = stack[-8];
    v_171 = static_cast<LispObject>(greaterp2(v_172, v_171));
    v_171 = v_171 ? lisp_true : nil;
    env = stack[-11];
    if (v_171 == nil) goto v_69;
    v_171 = basic_elt(env, 7); // "Error in spband_matrix: too many elements. Band matrix is overflowing."
    {   LispObject fn = basic_elt(env, 9); // rederr
    v_171 = (*qfn1(fn))(fn, v_171);
    }
    env = stack[-11];
    goto v_67;
v_69:
v_67:
    v_171 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    stack[-6] = v_171;
    v_171 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-3] = v_171;
v_89:
    v_172 = stack[-8];
    v_171 = stack[-3];
    v_171 = difference2(v_172, v_171);
    env = stack[-11];
    v_171 = Lminusp(nil, v_171);
    env = stack[-11];
    if (v_171 == nil) goto v_94;
    goto v_88;
v_94:
    v_172 = stack[-3];
    v_171 = stack[-4];
    v_171 = static_cast<LispObject>(lesseq2(v_172, v_171));
    v_171 = v_171 ? lisp_true : nil;
    env = stack[-11];
    if (v_171 == nil) goto v_103;
    v_171 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-7] = v_171;
    goto v_101;
v_103:
    v_171 = stack[-6];
    stack[-7] = v_171;
    goto v_101;
v_101:
v_113:
    v_172 = stack[-4];
    v_171 = stack[-3];
    v_172 = difference2(v_172, v_171);
    env = stack[-11];
    v_171 = stack[-7];
    v_172 = plus2(v_172, v_171);
    env = stack[-11];
    v_171 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_171 = static_cast<LispObject>(greaterp2(v_172, v_171));
    v_171 = v_171 ? lisp_true : nil;
    env = stack[-11];
    if (v_171 == nil) goto v_116;
    v_172 = stack[-7];
    v_171 = stack[-8];
    v_171 = static_cast<LispObject>(lesseq2(v_172, v_171));
    v_171 = v_171 ? lisp_true : nil;
    env = stack[-11];
    if (v_171 == nil) goto v_116;
    v_172 = stack[-4];
    v_171 = stack[-3];
    v_172 = difference2(v_172, v_171);
    env = stack[-11];
    v_171 = stack[-7];
    v_172 = plus2(v_172, v_171);
    env = stack[-11];
    v_171 = stack[-5];
    v_171 = static_cast<LispObject>(lesseq2(v_172, v_171));
    v_171 = v_171 ? lisp_true : nil;
    env = stack[-11];
    if (v_171 == nil) goto v_116;
    goto v_117;
v_116:
    goto v_112;
v_117:
    v_173 = stack[-10];
    v_172 = stack[-3];
    v_171 = stack[-7];
    stack[-2] = list3(v_173, v_172, v_171);
    env = stack[-11];
    stack[0] = stack[-9];
    v_172 = stack[-4];
    v_171 = stack[-3];
    v_172 = difference2(v_172, v_171);
    env = stack[-11];
    v_171 = stack[-7];
    v_171 = plus2(v_172, v_171);
    env = stack[-11];
    {   LispObject fn = basic_elt(env, 11); // nth
    stack[-1] = (*qfn2(fn))(fn, stack[0], v_171);
    }
    env = stack[-11];
    stack[0] = stack[-10];
    v_171 = nil;
    v_171 = ncons(v_171);
    env = stack[-11];
    {   LispObject fn = basic_elt(env, 12); // letmtr3
    v_171 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_171);
    }
    env = stack[-11];
    v_171 = stack[-7];
    v_171 = add1(v_171);
    env = stack[-11];
    stack[-7] = v_171;
    goto v_113;
v_112:
    v_172 = stack[-3];
    v_171 = stack[-4];
    v_171 = static_cast<LispObject>(greaterp2(v_172, v_171));
    v_171 = v_171 ? lisp_true : nil;
    env = stack[-11];
    if (v_171 == nil) goto v_161;
    v_171 = stack[-6];
    v_171 = add1(v_171);
    env = stack[-11];
    stack[-6] = v_171;
    goto v_159;
v_161:
v_159:
    v_171 = stack[-3];
    v_171 = add1(v_171);
    env = stack[-11];
    stack[-3] = v_171;
    goto v_89;
v_88:
    v_171 = stack[-10];
    return onevalue(v_171);
}



// Code for dm!-eq

static LispObject CC_dmKeq(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // dm!-difference
    v_9 = (*qfn2(fn))(fn, v_10, v_9);
    }
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // !:zerop
        return (*qfn1(fn))(fn, v_9);
    }
}



// Code for removeindices

static LispObject CC_removeindices(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_111, v_112;
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
    v_111 = basic_elt(env, 0); // removeindices
    if (!symbolp(v_111)) v_111 = nil;
    else { v_111 = qfastgets(v_111);
           if (v_111 != nil) { v_111 = elt(v_111, 53); // tracing
#ifdef RECORD_GET
             if (v_111 == SPID_NOPROP)
                record_get(elt(fastget_names, 53), 0),
                v_111 = nil;
             else record_get(elt(fastget_names, 53), 1),
                v_111 = lisp_true; }
           else record_get(elt(fastget_names, 53), 0); }
#else
             if (v_111 == SPID_NOPROP) v_111 = nil; else v_111 = lisp_true; }}
#endif
    if (v_111 == nil) goto v_11;
    stack[-4] = basic_elt(env, 0); // removeindices
    stack[-1] = basic_elt(env, 1); // "u= "
    stack[0] = stack[-3];
    v_112 = basic_elt(env, 2); // " x= "
    v_111 = stack[-2];
    v_111 = list2(v_112, v_111);
    env = stack[-5];
    v_111 = list3star(stack[-4], stack[-1], stack[0], v_111);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 4); // trwrite
    v_111 = (*qfn1(fn))(fn, v_111);
    }
    env = stack[-5];
    goto v_9;
v_11:
v_9:
    v_111 = stack[-2];
    if (v_111 == nil) goto v_28;
    else goto v_29;
v_28:
    v_111 = lisp_true;
    goto v_27;
v_29:
    v_111 = stack[-3];
    v_111 = Lsymbolp(nil, v_111);
    env = stack[-5];
    if (v_111 == nil) goto v_36;
    else goto v_35;
v_36:
    v_111 = stack[-3];
    {   LispObject fn = basic_elt(env, 5); // !*physopp
    v_111 = (*qfn1(fn))(fn, v_111);
    }
    env = stack[-5];
    v_111 = (v_111 == nil ? lisp_true : nil);
v_35:
    goto v_27;
    v_111 = nil;
v_27:
    if (v_111 == nil) goto v_25;
    v_111 = stack[-3];
    goto v_7;
v_25:
    v_111 = stack[-2];
    if (symbolp(v_111)) goto v_48;
    else goto v_47;
v_48:
    v_111 = stack[-2];
    {   LispObject fn = basic_elt(env, 6); // isanindex
    v_111 = (*qfn1(fn))(fn, v_111);
    }
    env = stack[-5];
    if (v_111 == nil) goto v_50;
    else goto v_47;
v_50:
    goto v_45;
v_47:
    v_111 = stack[-2];
    {   LispObject fn = basic_elt(env, 7); // idlistp
    v_111 = (*qfn1(fn))(fn, v_111);
    }
    env = stack[-5];
    if (v_111 == nil) goto v_53;
    v_111 = stack[-2];
    {   LispObject fn = basic_elt(env, 8); // areallindices
    v_111 = (*qfn1(fn))(fn, v_111);
    }
    env = stack[-5];
    if (v_111 == nil) goto v_57;
    else goto v_53;
v_57:
    goto v_45;
v_53:
    goto v_46;
v_45:
    v_112 = basic_elt(env, 0); // removeindices
    v_111 = basic_elt(env, 3); // "invalid arguments to removeindices"
    {   LispObject fn = basic_elt(env, 9); // rederr2
    v_111 = (*qfn2(fn))(fn, v_112, v_111);
    }
    env = stack[-5];
    goto v_44;
v_46:
v_44:
    v_111 = stack[-3];
    if (!car_legal(v_111)) v_111 = carerror(v_111); else
    v_111 = car(v_111);
    stack[0] = v_111;
    v_111 = stack[-3];
    if (!car_legal(v_111)) v_111 = cdrerror(v_111); else
    v_111 = cdr(v_111);
    stack[-3] = v_111;
    v_111 = stack[-3];
    if (v_111 == nil) goto v_69;
    else goto v_70;
v_69:
    v_111 = stack[0];
    goto v_7;
v_70:
    v_111 = stack[-2];
    if (symbolp(v_111)) goto v_73;
    else goto v_74;
v_73:
    v_112 = stack[-2];
    v_111 = stack[-3];
    v_111 = Ldelete(nil, v_112, v_111);
    stack[-3] = v_111;
    goto v_68;
v_74:
    v_111 = stack[-2];
    stack[-1] = v_111;
v_84:
    v_111 = stack[-1];
    if (v_111 == nil) goto v_88;
    else goto v_89;
v_88:
    goto v_83;
v_89:
    v_111 = stack[-1];
    if (!car_legal(v_111)) v_111 = carerror(v_111); else
    v_111 = car(v_111);
    v_112 = v_111;
    v_111 = stack[-3];
    v_111 = Ldelete(nil, v_112, v_111);
    env = stack[-5];
    stack[-3] = v_111;
    v_111 = stack[-1];
    if (!car_legal(v_111)) v_111 = cdrerror(v_111); else
    v_111 = cdr(v_111);
    stack[-1] = v_111;
    goto v_84;
v_83:
    goto v_68;
v_68:
    v_111 = stack[-3];
    if (v_111 == nil) goto v_102;
    else goto v_103;
v_102:
    v_111 = stack[0];
    goto v_101;
v_103:
    v_112 = stack[0];
    v_111 = stack[-3];
    return cons(v_112, v_111);
    v_111 = nil;
v_101:
v_7:
    return onevalue(v_111);
}



// Code for il_simp

static LispObject CC_il_simp(LispObject env,
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
        LispObject fn = basic_elt(env, 1); // il_simp1
        return (*qfn2(fn))(fn, v_8, v_7);
    }
}



// Code for b!:ordexp

static LispObject CC_bTordexp(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
v_1:
    v_37 = stack[-1];
    if (v_37 == nil) goto v_7;
    else goto v_8;
v_7:
    v_37 = lisp_true;
    goto v_6;
v_8:
    v_37 = stack[-1];
    if (!car_legal(v_37)) v_38 = carerror(v_37); else
    v_38 = car(v_37);
    v_37 = stack[0];
    if (!car_legal(v_37)) v_37 = carerror(v_37); else
    v_37 = car(v_37);
    v_37 = static_cast<LispObject>(greaterp2(v_38, v_37));
    v_37 = v_37 ? lisp_true : nil;
    env = stack[-2];
    if (v_37 == nil) goto v_15;
    else goto v_14;
v_15:
    v_37 = stack[-1];
    if (!car_legal(v_37)) v_38 = carerror(v_37); else
    v_38 = car(v_37);
    v_37 = stack[0];
    if (!car_legal(v_37)) v_37 = carerror(v_37); else
    v_37 = car(v_37);
    if (equal(v_38, v_37)) goto v_23;
    else goto v_24;
v_23:
    v_37 = stack[-1];
    if (!car_legal(v_37)) v_38 = cdrerror(v_37); else
    v_38 = cdr(v_37);
    v_37 = stack[0];
    if (!car_legal(v_37)) v_37 = cdrerror(v_37); else
    v_37 = cdr(v_37);
    stack[-1] = v_38;
    stack[0] = v_37;
    goto v_1;
v_24:
    v_37 = nil;
    goto v_22;
    v_37 = nil;
v_22:
v_14:
    goto v_6;
    v_37 = nil;
v_6:
    return onevalue(v_37);
}



// Code for invbf

static LispObject CC_invbf(LispObject env,
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
    v_11 = qvalue(basic_elt(env, 1)); // bfone!*
    v_10 = v_9;
    v_9 = qvalue(basic_elt(env, 2)); // !:bprec!:
    {   LispObject fn = basic_elt(env, 3); // divide!:
    v_9 = (*qfn3(fn))(fn, v_11, v_10, v_9);
    }
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 4); // normbf
        return (*qfn1(fn))(fn, v_9);
    }
}



// Code for xremainder!-mod!-p

static LispObject CC_xremainderKmodKp(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_106, v_107, v_108;
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
v_1:
    v_106 = stack[-2];
    if (!consp(v_106)) goto v_16;
    else goto v_17;
v_16:
    v_106 = lisp_true;
    goto v_15;
v_17:
    v_106 = stack[-2];
    if (!car_legal(v_106)) v_106 = carerror(v_106); else
    v_106 = car(v_106);
    v_106 = (consp(v_106) ? nil : lisp_true);
    goto v_15;
    v_106 = nil;
v_15:
    if (v_106 == nil) goto v_13;
    v_106 = lisp_true;
    goto v_11;
v_13:
    v_106 = stack[-2];
    if (!car_legal(v_106)) v_106 = carerror(v_106); else
    v_106 = car(v_106);
    if (!car_legal(v_106)) v_106 = carerror(v_106); else
    v_106 = car(v_106);
    if (!car_legal(v_106)) v_107 = carerror(v_106); else
    v_107 = car(v_106);
    v_106 = stack[0];
    if (equal(v_107, v_106)) goto v_31;
    v_106 = lisp_true;
    goto v_29;
v_31:
    v_106 = stack[-2];
    if (!car_legal(v_106)) v_106 = carerror(v_106); else
    v_106 = car(v_106);
    if (!car_legal(v_106)) v_106 = carerror(v_106); else
    v_106 = car(v_106);
    if (!car_legal(v_106)) v_107 = cdrerror(v_106); else
    v_107 = cdr(v_106);
    v_106 = stack[-1];
    if (!car_legal(v_106)) v_106 = carerror(v_106); else
    v_106 = car(v_106);
    if (!car_legal(v_106)) v_106 = carerror(v_106); else
    v_106 = car(v_106);
    if (!car_legal(v_106)) v_106 = cdrerror(v_106); else
    v_106 = cdr(v_106);
    v_106 = (static_cast<std::intptr_t>(v_107) < static_cast<std::intptr_t>(v_106)) ? lisp_true : nil;
    goto v_29;
    v_106 = nil;
v_29:
    goto v_11;
    v_106 = nil;
v_11:
    if (v_106 == nil) goto v_9;
    v_106 = stack[-2];
    goto v_7;
v_9:
    v_106 = stack[-2];
    if (!car_legal(v_106)) v_106 = carerror(v_106); else
    v_106 = car(v_106);
    if (!car_legal(v_106)) v_106 = cdrerror(v_106); else
    v_106 = cdr(v_106);
    {   LispObject fn = basic_elt(env, 1); // minus!-mod!-p
    v_107 = (*qfn1(fn))(fn, v_106);
    }
    env = stack[-4];
    v_106 = stack[-1];
    if (!car_legal(v_106)) v_106 = carerror(v_106); else
    v_106 = car(v_106);
    if (!car_legal(v_106)) v_106 = cdrerror(v_106); else
    v_106 = cdr(v_106);
    {   LispObject fn = basic_elt(env, 2); // quotient!-mod!-p
    v_106 = (*qfn2(fn))(fn, v_107, v_106);
    }
    env = stack[-4];
    stack[-3] = v_106;
    v_106 = stack[-2];
    if (!car_legal(v_106)) v_106 = carerror(v_106); else
    v_106 = car(v_106);
    if (!car_legal(v_106)) v_106 = carerror(v_106); else
    v_106 = car(v_106);
    if (!car_legal(v_106)) v_107 = cdrerror(v_106); else
    v_107 = cdr(v_106);
    v_106 = stack[-1];
    if (!car_legal(v_106)) v_106 = carerror(v_106); else
    v_106 = car(v_106);
    if (!car_legal(v_106)) v_106 = carerror(v_106); else
    v_106 = car(v_106);
    if (!car_legal(v_106)) v_106 = cdrerror(v_106); else
    v_106 = cdr(v_106);
    v_106 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_107) - static_cast<std::uintptr_t>(v_106) + TAG_FIXNUM);
    v_108 = v_106;
    v_107 = v_108;
    v_106 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_107 == v_106) goto v_75;
    else goto v_76;
v_75:
    v_106 = stack[-2];
    if (!car_legal(v_106)) stack[-2] = cdrerror(v_106); else
    stack[-2] = cdr(v_106);
    v_106 = stack[-1];
    if (!car_legal(v_106)) v_107 = cdrerror(v_106); else
    v_107 = cdr(v_106);
    v_106 = stack[-3];
    {   LispObject fn = basic_elt(env, 3); // multiply!-by!-constant!-mod!-p
    v_106 = (*qfn2(fn))(fn, v_107, v_106);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 4); // plus!-mod!-p
    v_106 = (*qfn2(fn))(fn, stack[-2], v_106);
    }
    env = stack[-4];
    stack[-2] = v_106;
    goto v_74;
v_76:
    v_106 = stack[-2];
    if (!car_legal(v_106)) stack[-2] = cdrerror(v_106); else
    stack[-2] = cdr(v_106);
    v_106 = stack[-1];
    if (!car_legal(v_106)) v_106 = carerror(v_106); else
    v_106 = car(v_106);
    if (!car_legal(v_106)) v_106 = carerror(v_106); else
    v_106 = car(v_106);
    if (!car_legal(v_106)) v_106 = carerror(v_106); else
    v_106 = car(v_106);
    v_107 = v_108;
    {   LispObject fn = basic_elt(env, 5); // mksp
    v_107 = (*qfn2(fn))(fn, v_106, v_107);
    }
    env = stack[-4];
    v_106 = stack[-3];
    v_107 = cons(v_107, v_106);
    env = stack[-4];
    v_106 = stack[-1];
    if (!car_legal(v_106)) v_106 = cdrerror(v_106); else
    v_106 = cdr(v_106);
    {   LispObject fn = basic_elt(env, 6); // times!-term!-mod!-p
    v_106 = (*qfn2(fn))(fn, v_107, v_106);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 4); // plus!-mod!-p
    v_106 = (*qfn2(fn))(fn, stack[-2], v_106);
    }
    env = stack[-4];
    stack[-2] = v_106;
    goto v_74;
v_74:
    v_108 = stack[-2];
    v_107 = stack[-1];
    v_106 = stack[0];
    stack[-2] = v_108;
    stack[-1] = v_107;
    stack[0] = v_106;
    goto v_1;
    goto v_7;
    v_106 = nil;
v_7:
    return onevalue(v_106);
}



// Code for simpiden

static LispObject CC_simpiden(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_360, v_361, v_362;
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
    stack[0] = v_2;
// end of prologue
    stack[-5] = nil;
    stack[-4] = nil;
    v_360 = stack[0];
    if (!car_legal(v_360)) v_360 = carerror(v_360); else
    v_360 = car(v_360);
    stack[-7] = v_360;
    v_360 = stack[0];
    if (!car_legal(v_360)) v_360 = cdrerror(v_360); else
    v_360 = cdr(v_360);
    stack[0] = v_360;
    v_361 = stack[-7];
    v_360 = stack[0];
    {   LispObject fn = basic_elt(env, 12); // valuechk
    v_360 = (*qfn2(fn))(fn, v_361, v_360);
    }
    env = stack[-8];
    stack[-6] = v_360;
    if (v_360 == nil) goto v_20;
    v_360 = stack[-6];
    goto v_11;
v_20:
    v_360 = stack[0];
    if (v_360 == nil) goto v_32;
    v_360 = stack[0];
    if (!car_legal(v_360)) v_361 = carerror(v_360); else
    v_361 = car(v_360);
    v_360 = basic_elt(env, 1); // list
    v_360 = Leqcar(nil, v_361, v_360);
    env = stack[-8];
    goto v_30;
v_32:
    v_360 = nil;
    goto v_30;
    v_360 = nil;
v_30:
    if (v_360 == nil) goto v_28;
    stack[-1] = stack[-7];
    v_360 = stack[0];
    if (!car_legal(v_360)) v_360 = carerror(v_360); else
    v_360 = car(v_360);
    {   LispObject fn = basic_elt(env, 13); // aeval
    v_360 = (*qfn1(fn))(fn, v_360);
    }
    env = stack[-8];
    v_361 = list2(stack[-1], v_360);
    env = stack[-8];
    v_360 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {
        LispObject fn = basic_elt(env, 14); // mksq
        return (*qfn2(fn))(fn, v_361, v_360);
    }
v_28:
    v_361 = stack[0];
    v_362 = stack[-7];
    v_360 = basic_elt(env, 2); // nosimp
    v_362 = get(v_362, v_360);
    env = stack[-8];
    v_360 = nil;
    {   LispObject fn = basic_elt(env, 15); // fnreval
    v_360 = (*qfn3(fn))(fn, v_361, v_362, v_360);
    }
    env = stack[-8];
    stack[-6] = v_360;
    v_360 = stack[-6];
    stack[-3] = v_360;
    v_360 = stack[-3];
    if (v_360 == nil) goto v_63;
    else goto v_64;
v_63:
    v_360 = nil;
    goto v_58;
v_64:
    v_360 = stack[-3];
    if (!car_legal(v_360)) v_360 = carerror(v_360); else
    v_360 = car(v_360);
    v_362 = v_360;
    v_361 = v_362;
    v_360 = basic_elt(env, 3); // !*sq
    if (!consp(v_361)) goto v_74;
    v_361 = car(v_361);
    if (v_361 == v_360) goto v_73;
    else goto v_74;
v_73:
    v_360 = v_362;
    if (!car_legal(v_360)) v_360 = cdrerror(v_360); else
    v_360 = cdr(v_360);
    if (!car_legal(v_360)) v_360 = carerror(v_360); else
    v_360 = car(v_360);
    {   LispObject fn = basic_elt(env, 16); // prepsqxx
    v_360 = (*qfn1(fn))(fn, v_360);
    }
    env = stack[-8];
    goto v_72;
v_74:
    v_360 = v_362;
    if (is_number(v_360)) goto v_82;
    else goto v_83;
v_82:
    v_360 = v_362;
    goto v_72;
v_83:
    v_360 = v_362;
    goto v_72;
    v_360 = nil;
v_72:
    v_360 = ncons(v_360);
    env = stack[-8];
    stack[-1] = v_360;
    stack[-2] = v_360;
v_59:
    v_360 = stack[-3];
    if (!car_legal(v_360)) v_360 = cdrerror(v_360); else
    v_360 = cdr(v_360);
    stack[-3] = v_360;
    v_360 = stack[-3];
    if (v_360 == nil) goto v_94;
    else goto v_95;
v_94:
    v_360 = stack[-2];
    goto v_58;
v_95:
    stack[0] = stack[-1];
    v_360 = stack[-3];
    if (!car_legal(v_360)) v_360 = carerror(v_360); else
    v_360 = car(v_360);
    v_362 = v_360;
    v_361 = v_362;
    v_360 = basic_elt(env, 3); // !*sq
    if (!consp(v_361)) goto v_106;
    v_361 = car(v_361);
    if (v_361 == v_360) goto v_105;
    else goto v_106;
v_105:
    v_360 = v_362;
    if (!car_legal(v_360)) v_360 = cdrerror(v_360); else
    v_360 = cdr(v_360);
    if (!car_legal(v_360)) v_360 = carerror(v_360); else
    v_360 = car(v_360);
    {   LispObject fn = basic_elt(env, 16); // prepsqxx
    v_360 = (*qfn1(fn))(fn, v_360);
    }
    env = stack[-8];
    goto v_104;
v_106:
    v_360 = v_362;
    if (is_number(v_360)) goto v_114;
    else goto v_115;
v_114:
    v_360 = v_362;
    goto v_104;
v_115:
    v_360 = v_362;
    goto v_104;
    v_360 = nil;
v_104:
    v_360 = ncons(v_360);
    env = stack[-8];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_360);
    v_360 = stack[-1];
    if (!car_legal(v_360)) v_360 = cdrerror(v_360); else
    v_360 = cdr(v_360);
    stack[-1] = v_360;
    goto v_59;
v_58:
    stack[0] = v_360;
    v_360 = stack[0];
    if (v_360 == nil) goto v_128;
    v_360 = stack[0];
    if (!car_legal(v_360)) v_361 = carerror(v_360); else
    v_361 = car(v_360);
    v_360 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_361 == v_360) goto v_134;
    else goto v_135;
v_134:
    v_361 = stack[-7];
    v_360 = basic_elt(env, 4); // odd
    v_360 = Lflagp(nil, v_361, v_360);
    env = stack[-8];
    if (v_360 == nil) goto v_142;
    v_361 = stack[-7];
    v_360 = basic_elt(env, 5); // nonzero
    v_360 = Lflagp(nil, v_361, v_360);
    env = stack[-8];
    v_360 = (v_360 == nil ? lisp_true : nil);
    goto v_140;
v_142:
    v_360 = nil;
    goto v_140;
    v_360 = nil;
v_140:
    goto v_133;
v_135:
    v_360 = nil;
    goto v_133;
    v_360 = nil;
v_133:
    if (v_360 == nil) goto v_128;
    v_361 = nil;
    v_360 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_361, v_360);
v_128:
    v_361 = stack[-7];
    v_360 = stack[0];
    v_360 = cons(v_361, v_360);
    env = stack[-8];
    stack[0] = v_360;
    v_360 = stack[-7];
    if (!symbolp(v_360)) v_360 = nil;
    else { v_360 = qfastgets(v_360);
           if (v_360 != nil) { v_360 = elt(v_360, 0); // noncom
#ifdef RECORD_GET
             if (v_360 == SPID_NOPROP)
                record_get(elt(fastget_names, 0), 0),
                v_360 = nil;
             else record_get(elt(fastget_names, 0), 1),
                v_360 = lisp_true; }
           else record_get(elt(fastget_names, 0), 0); }
#else
             if (v_360 == SPID_NOPROP) v_360 = nil; else v_360 = lisp_true; }}
#endif
    if (v_360 == nil) goto v_165;
    v_360 = lisp_true;
    setvalue(basic_elt(env, 6), v_360); // ncmp!*
    goto v_163;
v_165:
v_163:
    v_360 = qvalue(basic_elt(env, 7)); // subfg!*
    if (v_360 == nil) goto v_171;
    else goto v_172;
v_171:
    goto v_12;
v_172:
    v_361 = stack[-7];
    v_360 = basic_elt(env, 8); // linear
    v_360 = Lflagp(nil, v_361, v_360);
    env = stack[-8];
    if (v_360 == nil) goto v_179;
    v_360 = stack[0];
    {   LispObject fn = basic_elt(env, 17); // formlnr
    v_361 = (*qfn1(fn))(fn, v_360);
    }
    env = stack[-8];
    stack[-4] = v_361;
    v_360 = stack[0];
    v_360 = Lneq_2(nil, v_361, v_360);
    env = stack[-8];
    goto v_177;
v_179:
    v_360 = nil;
    goto v_177;
    v_360 = nil;
v_177:
    if (v_360 == nil) goto v_175;
    v_360 = stack[-4];
    {
        LispObject fn = basic_elt(env, 18); // simp
        return (*qfn1(fn))(fn, v_360);
    }
v_175:
    v_360 = stack[0];
    {   LispObject fn = basic_elt(env, 19); // opmtch
    v_360 = (*qfn1(fn))(fn, v_360);
    }
    env = stack[-8];
    stack[-4] = v_360;
    if (v_360 == nil) goto v_193;
    v_360 = stack[-4];
    {
        LispObject fn = basic_elt(env, 18); // simp
        return (*qfn1(fn))(fn, v_360);
    }
v_193:
    v_360 = stack[0];
    if (!car_legal(v_360)) v_361 = carerror(v_360); else
    v_361 = car(v_360);
    v_360 = basic_elt(env, 9); // opvalfn
    v_360 = get(v_361, v_360);
    env = stack[-8];
    stack[-4] = v_360;
    if (v_360 == nil) goto v_199;
    v_361 = stack[-4];
    v_360 = stack[0];
        return Lapply1(nil, v_361, v_360);
v_199:
v_12:
    v_360 = stack[-7];
    if (!symbolp(v_360)) v_360 = nil;
    else { v_360 = qfastgets(v_360);
           if (v_360 != nil) { v_360 = elt(v_360, 43); // symmetric
#ifdef RECORD_GET
             if (v_360 == SPID_NOPROP)
                record_get(elt(fastget_names, 43), 0),
                v_360 = nil;
             else record_get(elt(fastget_names, 43), 1),
                v_360 = lisp_true; }
           else record_get(elt(fastget_names, 43), 0); }
#else
             if (v_360 == SPID_NOPROP) v_360 = nil; else v_360 = lisp_true; }}
#endif
    if (v_360 == nil) goto v_210;
    stack[-1] = stack[-7];
    v_360 = stack[0];
    if (!car_legal(v_360)) v_360 = cdrerror(v_360); else
    v_360 = cdr(v_360);
    {   LispObject fn = basic_elt(env, 20); // ordn
    v_360 = (*qfn1(fn))(fn, v_360);
    }
    env = stack[-8];
    v_360 = cons(stack[-1], v_360);
    env = stack[-8];
    stack[0] = v_360;
    goto v_208;
v_210:
    v_361 = stack[-7];
    v_360 = basic_elt(env, 10); // antisymmetric
    v_360 = Lflagp(nil, v_361, v_360);
    env = stack[-8];
    if (v_360 == nil) goto v_219;
    v_360 = stack[0];
    if (!car_legal(v_360)) v_360 = cdrerror(v_360); else
    v_360 = cdr(v_360);
    {   LispObject fn = basic_elt(env, 21); // repeats
    v_360 = (*qfn1(fn))(fn, v_360);
    }
    env = stack[-8];
    if (v_360 == nil) goto v_226;
    v_361 = nil;
    v_360 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_361, v_360);
v_226:
    v_360 = stack[0];
    if (!car_legal(v_360)) v_360 = cdrerror(v_360); else
    v_360 = cdr(v_360);
    {   LispObject fn = basic_elt(env, 20); // ordn
    v_361 = (*qfn1(fn))(fn, v_360);
    }
    env = stack[-8];
    stack[-4] = v_361;
    v_360 = stack[0];
    if (!car_legal(v_360)) v_360 = cdrerror(v_360); else
    v_360 = cdr(v_360);
    {   LispObject fn = basic_elt(env, 22); // permp
    v_360 = (*qfn2(fn))(fn, v_361, v_360);
    }
    env = stack[-8];
    if (v_360 == nil) goto v_233;
    else goto v_234;
v_233:
    v_360 = lisp_true;
    stack[-5] = v_360;
    goto v_224;
v_234:
v_224:
    v_360 = stack[0];
    if (!car_legal(v_360)) v_361 = carerror(v_360); else
    v_361 = car(v_360);
    v_360 = stack[-4];
    v_360 = cons(v_361, v_360);
    env = stack[-8];
    stack[-7] = v_360;
    v_361 = stack[-4];
    v_360 = stack[0];
    if (!car_legal(v_360)) v_360 = cdrerror(v_360); else
    v_360 = cdr(v_360);
    if (equal(v_361, v_360)) goto v_253;
    v_360 = stack[-7];
    {   LispObject fn = basic_elt(env, 19); // opmtch
    v_360 = (*qfn1(fn))(fn, v_360);
    }
    env = stack[-8];
    stack[-4] = v_360;
    goto v_251;
v_253:
    v_360 = nil;
    goto v_251;
    v_360 = nil;
v_251:
    if (v_360 == nil) goto v_249;
    v_360 = stack[-5];
    if (v_360 == nil) goto v_265;
    v_360 = stack[-4];
    {   LispObject fn = basic_elt(env, 18); // simp
    v_360 = (*qfn1(fn))(fn, v_360);
    }
    env = stack[-8];
    {
        LispObject fn = basic_elt(env, 23); // negsq
        return (*qfn1(fn))(fn, v_360);
    }
v_265:
    v_360 = stack[-4];
    {
        LispObject fn = basic_elt(env, 18); // simp
        return (*qfn1(fn))(fn, v_360);
    }
    v_360 = nil;
    goto v_11;
v_249:
    v_360 = stack[-7];
    stack[0] = v_360;
    goto v_208;
v_219:
v_208:
    v_361 = stack[-7];
    v_360 = basic_elt(env, 11); // even
    v_360 = Lflagp(nil, v_361, v_360);
    env = stack[-8];
    if (v_360 == nil) goto v_286;
    v_360 = lisp_true;
    goto v_284;
v_286:
    v_361 = stack[-7];
    v_360 = basic_elt(env, 4); // odd
    v_360 = Lflagp(nil, v_361, v_360);
    env = stack[-8];
    goto v_284;
    v_360 = nil;
v_284:
    if (v_360 == nil) goto v_282;
    v_360 = stack[-6];
    if (v_360 == nil) goto v_298;
    else goto v_299;
v_298:
    v_360 = nil;
    goto v_297;
v_299:
    v_360 = stack[-6];
    if (!car_legal(v_360)) v_360 = carerror(v_360); else
    v_360 = car(v_360);
    {   LispObject fn = basic_elt(env, 18); // simp
    v_360 = (*qfn1(fn))(fn, v_360);
    }
    env = stack[-8];
    stack[-6] = v_360;
    if (!car_legal(v_360)) v_360 = carerror(v_360); else
    v_360 = car(v_360);
    {   LispObject fn = basic_elt(env, 24); // minusf
    v_360 = (*qfn1(fn))(fn, v_360);
    }
    env = stack[-8];
    goto v_297;
    v_360 = nil;
v_297:
    goto v_280;
v_282:
    v_360 = nil;
    goto v_280;
    v_360 = nil;
v_280:
    if (v_360 == nil) goto v_278;
    v_361 = stack[-7];
    v_360 = basic_elt(env, 4); // odd
    v_360 = Lflagp(nil, v_361, v_360);
    env = stack[-8];
    if (v_360 == nil) goto v_315;
    v_360 = stack[-5];
    v_360 = (v_360 == nil ? lisp_true : nil);
    stack[-5] = v_360;
    goto v_313;
v_315:
v_313:
    stack[-1] = stack[-7];
    v_360 = stack[-6];
    {   LispObject fn = basic_elt(env, 23); // negsq
    v_360 = (*qfn1(fn))(fn, v_360);
    }
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 16); // prepsqxx
    v_361 = (*qfn1(fn))(fn, v_360);
    }
    env = stack[-8];
    v_360 = stack[0];
    if (!car_legal(v_360)) v_360 = cdrerror(v_360); else
    v_360 = cdr(v_360);
    if (!car_legal(v_360)) v_360 = cdrerror(v_360); else
    v_360 = cdr(v_360);
    v_360 = list2star(stack[-1], v_361, v_360);
    env = stack[-8];
    stack[0] = v_360;
    v_360 = stack[0];
    {   LispObject fn = basic_elt(env, 19); // opmtch
    v_360 = (*qfn1(fn))(fn, v_360);
    }
    env = stack[-8];
    stack[-4] = v_360;
    if (v_360 == nil) goto v_332;
    v_360 = stack[-5];
    if (v_360 == nil) goto v_338;
    v_360 = stack[-4];
    {   LispObject fn = basic_elt(env, 18); // simp
    v_360 = (*qfn1(fn))(fn, v_360);
    }
    env = stack[-8];
    {
        LispObject fn = basic_elt(env, 23); // negsq
        return (*qfn1(fn))(fn, v_360);
    }
v_338:
    v_360 = stack[-4];
    {
        LispObject fn = basic_elt(env, 18); // simp
        return (*qfn1(fn))(fn, v_360);
    }
    v_360 = nil;
    goto v_11;
v_332:
    goto v_276;
v_278:
v_276:
    v_361 = stack[0];
    v_360 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 14); // mksq
    v_360 = (*qfn2(fn))(fn, v_361, v_360);
    }
    env = stack[-8];
    stack[0] = v_360;
    v_360 = stack[-5];
    if (v_360 == nil) goto v_353;
    v_360 = stack[0];
    {
        LispObject fn = basic_elt(env, 23); // negsq
        return (*qfn1(fn))(fn, v_360);
    }
v_353:
    v_360 = stack[0];
    goto v_351;
    v_360 = nil;
v_351:
v_11:
    return onevalue(v_360);
}



// Code for ra_refine1

static LispObject CC_ra_refine1(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_63, v_64, v_65;
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
    v_63 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-1] = v_63;
v_13:
    v_64 = stack[-2];
    v_63 = stack[-1];
    v_63 = difference2(v_64, v_63);
    env = stack[-7];
    v_63 = Lminusp(nil, v_63);
    env = stack[-7];
    if (v_63 == nil) goto v_18;
    goto v_12;
v_18:
    v_64 = stack[-4];
    v_63 = stack[-3];
    {   LispObject fn = basic_elt(env, 2); // sfto_avgq
    v_63 = (*qfn2(fn))(fn, v_64, v_63);
    }
    env = stack[-7];
    stack[-6] = v_63;
    stack[0] = stack[-5];
    v_64 = basic_elt(env, 1); // x
    v_63 = stack[-6];
    v_63 = cons(v_64, v_63);
    env = stack[-7];
    v_63 = ncons(v_63);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 3); // sfto_qsub1
    v_63 = (*qfn2(fn))(fn, stack[0], v_63);
    }
    env = stack[-7];
    if (!car_legal(v_63)) v_63 = carerror(v_63); else
    v_63 = car(v_63);
    if (v_63 == nil) goto v_29;
    else goto v_30;
v_29:
    v_64 = stack[-4];
    v_63 = stack[-6];
    {   LispObject fn = basic_elt(env, 2); // sfto_avgq
    v_63 = (*qfn2(fn))(fn, v_64, v_63);
    }
    env = stack[-7];
    stack[-4] = v_63;
    goto v_28;
v_30:
    v_65 = stack[-5];
    v_64 = stack[-4];
    v_63 = stack[-6];
    {   LispObject fn = basic_elt(env, 4); // ra_budancount
    v_64 = (*qfn3(fn))(fn, v_65, v_64, v_63);
    }
    env = stack[-7];
    v_63 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_63 = Leqn_2(nil, v_64, v_63);
    env = stack[-7];
    if (v_63 == nil) goto v_42;
    v_63 = stack[-6];
    stack[-3] = v_63;
    goto v_28;
v_42:
    goto v_55;
    goto v_53;
v_55:
v_53:
    v_63 = stack[-6];
    stack[-4] = v_63;
    goto v_28;
v_28:
    v_63 = stack[-1];
    v_63 = add1(v_63);
    env = stack[-7];
    stack[-1] = v_63;
    goto v_13;
v_12:
    v_64 = stack[-4];
    v_63 = stack[-3];
    return cons(v_64, v_63);
    return onevalue(v_63);
}



setup_type const u17_setup[] =
{
    {"simpatom",                G0W1,     CC_simpatom,G2W1,   G3W1,     G4W1},
    {"get_goto",                G0W2,     G1W2,     CC_get_goto,G3W2,   G4W2},
    {"aex_subrat1",             G0W3,     G1W3,     G2W3,     CC_aex_subrat1,G4W3},
    {"collect_cars",            G0W1,     CC_collect_cars,G2W1,G3W1,    G4W1},
    {"qremf",                   G0W2,     G1W2,     CC_qremf, G3W2,     G4W2},
    {"updtemplate",             G0W3,     G1W3,     G2W3,     CC_updtemplate,G4W3},
    {"tmsf",                    G0W1,     CC_tmsf,  G2W1,     G3W1,     G4W1},
    {"talp_td",                 G0W1,     CC_talp_td,G2W1,    G3W1,     G4W1},
    {"qqe_id-nyt-branchq",      G0W1,     CC_qqe_idKnytKbranchq,G2W1,G3W1,G4W1},
    {"pasf_vf",                 G0W1,     CC_pasf_vf,G2W1,    G3W1,     G4W1},
    {"ibalp_readclause",        G0W2,     G1W2,     CC_ibalp_readclause,G3W2,G4W2},
    {"expt-mod-p",              G0W2,     G1W2,     CC_exptKmodKp,G3W2, G4W2},
    {"omsir",                   CC_omsir, G1W0,     G2W0,     G3W0,     G4W0},
    {"ps:expression",           G0W1,     CC_psTexpression,G2W1,G3W1,   G4W1},
    {"evallessp",               G0W2,     G1W2,     CC_evallessp,G3W2,  G4W2},
    {"dipilcomb1",              G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_dipilcomb1},
    {"mkprogn",                 G0W2,     G1W2,     CC_mkprogn,G3W2,    G4W2},
    {"getmatelem",              G0W1,     CC_getmatelem,G2W1, G3W1,     G4W1},
    {"di_restore",              G0W1,     CC_di_restore,G2W1, G3W1,     G4W1},
    {"negate-term",             G0W1,     CC_negateKterm,G2W1,G3W1,     G4W1},
    {"lalr_associativity",      G0W1,     CC_lalr_associativity,G2W1,G3W1,G4W1},
    {"simplify-filename",       G0W1,     CC_simplifyKfilename,G2W1,G3W1,G4W1},
    {"wureducedpolysp",         G0W2,     G1W2,     CC_wureducedpolysp,G3W2,G4W2},
    {"talp_smwrmknowl",         G0W2,     G1W2,     CC_talp_smwrmknowl,G3W2,G4W2},
    {"setunion",                G0W2,     G1W2,     CC_setunion,G3W2,   G4W2},
    {"cl_pnf2",                 G0W1,     CC_cl_pnf2,G2W1,    G3W1,     G4W1},
    {"attributesml",            G0W2,     G1W2,     CC_attributesml,G3W2,G4W2},
    {"spband_matrix",           G0W2,     G1W2,     CC_spband_matrix,G3W2,G4W2},
    {"dm-eq",                   G0W2,     G1W2,     CC_dmKeq, G3W2,     G4W2},
    {"removeindices",           G0W2,     G1W2,     CC_removeindices,G3W2,G4W2},
    {"il_simp",                 G0W1,     CC_il_simp,G2W1,    G3W1,     G4W1},
    {"b:ordexp",                G0W2,     G1W2,     CC_bTordexp,G3W2,   G4W2},
    {"invbf",                   G0W1,     CC_invbf, G2W1,     G3W1,     G4W1},
    {"xremainder-mod-p",        G0W3,     G1W3,     G2W3,     CC_xremainderKmodKp,G4W3},
    {"simpiden",                G0W1,     CC_simpiden,G2W1,   G3W1,     G4W1},
    {"ra_refine1",              G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_ra_refine1},
    {nullptr, 
        reinterpret_cast<no_args *>(
            reinterpret_cast<uintptr_t>("u17")),
        reinterpret_cast<one_arg *>(
            reinterpret_cast<uintptr_t>("178071 4720664 5981409")),
        nullptr, nullptr, nullptr}
};

// end of generated code
