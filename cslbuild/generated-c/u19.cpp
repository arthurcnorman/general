
// $destdir/u19.c        Machine generated C code

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


// Code for polynomheadreduceby

static LispObject CC_polynomheadreduceby(LispObject env,
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    stack[-1] = v_3;
    stack[-2] = v_2;
// end of prologue
    stack[-3] = nil;
v_11:
    v_49 = stack[-2];
    if (!car_legal(v_49)) v_49 = carerror(v_49); else
    v_49 = car(v_49);
    if (v_49 == nil) goto v_14;
    v_49 = stack[-3];
    if (v_49 == nil) goto v_19;
    else goto v_14;
v_19:
    goto v_15;
v_14:
    goto v_10;
v_15:
    v_49 = stack[-2];
    if (!car_legal(v_49)) v_50 = carerror(v_49); else
    v_50 = car(v_49);
    v_49 = stack[-1];
    if (!car_legal(v_49)) v_49 = carerror(v_49); else
    v_49 = car(v_49);
    {   LispObject fn = basic_elt(env, 2); // monomisdivisibleby
    v_49 = (*qfn2(fn))(fn, v_50, v_49);
    }
    env = stack[-4];
    if (v_49 == nil) goto v_25;
    v_49 = stack[-2];
    if (!car_legal(v_49)) v_50 = carerror(v_49); else
    v_50 = car(v_49);
    v_49 = stack[-1];
    if (!car_legal(v_49)) v_49 = carerror(v_49); else
    v_49 = car(v_49);
    {   LispObject fn = basic_elt(env, 3); // monomdivide
    v_49 = (*qfn2(fn))(fn, v_50, v_49);
    }
    env = stack[-4];
    stack[0] = stack[-2];
    v_50 = stack[-1];
    {   LispObject fn = basic_elt(env, 4); // polynommultiplybymonom
    v_49 = (*qfn2(fn))(fn, v_50, v_49);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 5); // polynomadd
    v_49 = (*qfn2(fn))(fn, stack[0], v_49);
    }
    env = stack[-4];
    goto v_23;
v_25:
    v_49 = lisp_true;
    stack[-3] = v_49;
    goto v_23;
v_23:
    goto v_11;
v_10:
    v_49 = qvalue(basic_elt(env, 1)); // fluidbibasisreductionsmade
    v_49 = static_cast<LispObject>(static_cast<std::intptr_t>(v_49) + 0x10);
    setvalue(basic_elt(env, 1), v_49); // fluidbibasisreductionsmade
    v_49 = nil;
    return onevalue(v_49);
}



// Code for wusort

static LispObject CC_wusort(LispObject env,
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
    v_7 = basic_elt(env, 1); // wulessp!*
    {
        LispObject fn = basic_elt(env, 2); // sort
        return (*qfn2(fn))(fn, v_8, v_7);
    }
}



// Code for talp_simplatat

static LispObject CC_talp_simplatat(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_68, v_69, v_70;
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
    v_69 = stack[-1];
    v_68 = stack[0];
    if (v_69 == v_68) goto v_8;
    else goto v_9;
v_8:
    v_68 = stack[-2];
    v_69 = basic_elt(env, 1); // equal
    v_68 = (v_68 == v_69 ? lisp_true : nil);
    goto v_7;
v_9:
    stack[-3] = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // talp_getl
    v_68 = (*qfn0(fn))(fn);
    }
    env = stack[-4];
    v_68 = Latsoc(nil, stack[-3], v_68);
    if (v_68 == nil) goto v_15;
    else goto v_16;
v_15:
    v_68 = stack[0];
    if (!consp(v_68)) goto v_22;
    else goto v_23;
v_22:
    v_70 = stack[-2];
    v_69 = stack[-1];
    v_68 = stack[0];
    {
        LispObject fn = basic_elt(env, 3); // talp_mk2
        return (*qfn3(fn))(fn, v_70, v_69, v_68);
    }
v_23:
    v_69 = stack[-1];
    v_68 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // talp_telp
    v_68 = (*qfn2(fn))(fn, v_69, v_68);
    }
    env = stack[-4];
    if (v_68 == nil) goto v_30;
    v_68 = stack[-2];
    v_69 = basic_elt(env, 1); // equal
        return Lneq_2(nil, v_68, v_69);
v_30:
    v_70 = stack[-2];
    v_69 = stack[-1];
    v_68 = stack[0];
    {
        LispObject fn = basic_elt(env, 3); // talp_mk2
        return (*qfn3(fn))(fn, v_70, v_69, v_68);
    }
    v_68 = nil;
    goto v_7;
v_16:
    v_68 = stack[0];
    if (!consp(v_68)) goto v_43;
    else goto v_44;
v_43:
    stack[-3] = stack[0];
    {   LispObject fn = basic_elt(env, 2); // talp_getl
    v_68 = (*qfn0(fn))(fn);
    }
    env = stack[-4];
    v_68 = Latsoc(nil, stack[-3], v_68);
    if (v_68 == nil) goto v_48;
    else goto v_49;
v_48:
    v_68 = stack[0];
    {   LispObject fn = basic_elt(env, 5); // talp_simplt
    v_68 = (*qfn1(fn))(fn, v_68);
    }
    env = stack[-4];
    {
        LispObject v_75 = stack[-2];
        LispObject v_76 = stack[-1];
        LispObject fn = basic_elt(env, 3); // talp_mk2
        return (*qfn3(fn))(fn, v_75, v_76, v_68);
    }
v_49:
    v_68 = stack[-2];
    v_69 = basic_elt(env, 1); // equal
        return Lneq_2(nil, v_68, v_69);
    v_68 = nil;
    goto v_7;
v_44:
    v_68 = stack[-2];
    v_69 = basic_elt(env, 1); // equal
        return Lneq_2(nil, v_68, v_69);
    v_68 = nil;
v_7:
    return onevalue(v_68);
}



// Code for qqe_simplat1

static LispObject CC_qqe_simplat1(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    v_30 = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // qqe_op
    v_30 = (*qfn1(fn))(fn, v_30);
    }
    env = stack[-2];
    v_32 = v_30;
    v_31 = v_32;
    v_30 = basic_elt(env, 1); // (qequal qneq)
    v_30 = Lmemq(nil, v_31, v_30);
    if (v_30 == nil) goto v_10;
    else goto v_11;
v_10:
    v_31 = stack[-1];
    v_30 = stack[0];
    {
        LispObject fn = basic_elt(env, 4); // qqe_simplbtat
        return (*qfn2(fn))(fn, v_31, v_30);
    }
v_11:
    v_31 = v_32;
    v_30 = basic_elt(env, 2); // qequal
    if (v_31 == v_30) goto v_18;
    else goto v_19;
v_18:
    v_31 = stack[-1];
    v_30 = stack[0];
    {
        LispObject fn = basic_elt(env, 5); // qqe_simplqequal
        return (*qfn2(fn))(fn, v_31, v_30);
    }
v_19:
    v_31 = stack[-1];
    v_30 = stack[0];
    {
        LispObject fn = basic_elt(env, 6); // qqe_simplqneq
        return (*qfn2(fn))(fn, v_31, v_30);
    }
    v_30 = nil;
    return onevalue(v_30);
}



// Code for cl_mkstrict

static LispObject CC_cl_mkstrict(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_266, v_267, v_268;
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
    stack[-1] = v_3;
    stack[0] = v_2;
// end of prologue
    v_266 = stack[-1];
    {   LispObject fn = basic_elt(env, 14); // cl_flip
    v_266 = (*qfn1(fn))(fn, v_266);
    }
    env = stack[-6];
    stack[-5] = v_266;
    v_266 = stack[0];
    if (!consp(v_266)) goto v_13;
    else goto v_14;
v_13:
    v_266 = stack[0];
    goto v_12;
v_14:
    v_266 = stack[0];
    if (!car_legal(v_266)) v_266 = carerror(v_266); else
    v_266 = car(v_266);
    goto v_12;
    v_266 = nil;
v_12:
    v_268 = v_266;
    v_267 = v_268;
    v_266 = basic_elt(env, 1); // true
    if (v_267 == v_266) goto v_35;
    else goto v_36;
v_35:
    v_266 = lisp_true;
    goto v_34;
v_36:
    v_267 = v_268;
    v_266 = basic_elt(env, 2); // false
    v_266 = (v_267 == v_266 ? lisp_true : nil);
    goto v_34;
    v_266 = nil;
v_34:
    if (v_266 == nil) goto v_32;
    v_266 = lisp_true;
    goto v_30;
v_32:
    v_267 = v_268;
    v_266 = basic_elt(env, 3); // or
    if (v_267 == v_266) goto v_62;
    else goto v_63;
v_62:
    v_266 = lisp_true;
    goto v_61;
v_63:
    v_267 = v_268;
    v_266 = basic_elt(env, 4); // and
    v_266 = (v_267 == v_266 ? lisp_true : nil);
    goto v_61;
    v_266 = nil;
v_61:
    if (v_266 == nil) goto v_59;
    v_266 = lisp_true;
    goto v_57;
v_59:
    v_267 = v_268;
    v_266 = basic_elt(env, 5); // not
    v_266 = (v_267 == v_266 ? lisp_true : nil);
    goto v_57;
    v_266 = nil;
v_57:
    if (v_266 == nil) goto v_55;
    v_266 = lisp_true;
    goto v_53;
v_55:
    v_267 = v_268;
    v_266 = basic_elt(env, 6); // impl
    if (v_267 == v_266) goto v_83;
    else goto v_84;
v_83:
    v_266 = lisp_true;
    goto v_82;
v_84:
    v_267 = v_268;
    v_266 = basic_elt(env, 7); // repl
    if (v_267 == v_266) goto v_92;
    else goto v_93;
v_92:
    v_266 = lisp_true;
    goto v_91;
v_93:
    v_267 = v_268;
    v_266 = basic_elt(env, 8); // equiv
    v_266 = (v_267 == v_266 ? lisp_true : nil);
    goto v_91;
    v_266 = nil;
v_91:
    goto v_82;
    v_266 = nil;
v_82:
    goto v_53;
    v_266 = nil;
v_53:
    if (v_266 == nil) goto v_51;
    v_266 = lisp_true;
    goto v_49;
v_51:
    v_267 = v_268;
    v_266 = basic_elt(env, 9); // ex
    if (v_267 == v_266) goto v_111;
    else goto v_112;
v_111:
    v_266 = lisp_true;
    goto v_110;
v_112:
    v_267 = v_268;
    v_266 = basic_elt(env, 10); // all
    v_266 = (v_267 == v_266 ? lisp_true : nil);
    goto v_110;
    v_266 = nil;
v_110:
    if (v_266 == nil) goto v_108;
    v_266 = lisp_true;
    goto v_106;
v_108:
    v_267 = v_268;
    v_266 = basic_elt(env, 11); // bex
    if (v_267 == v_266) goto v_130;
    else goto v_131;
v_130:
    v_266 = lisp_true;
    goto v_129;
v_131:
    v_267 = v_268;
    v_266 = basic_elt(env, 12); // ball
    v_266 = (v_267 == v_266 ? lisp_true : nil);
    goto v_129;
    v_266 = nil;
v_129:
    if (v_266 == nil) goto v_127;
    v_266 = lisp_true;
    goto v_125;
v_127:
    v_266 = v_268;
    if (!symbolp(v_266)) v_266 = nil;
    else { v_266 = qfastgets(v_266);
           if (v_266 != nil) { v_266 = elt(v_266, 21); // rl_external
#ifdef RECORD_GET
             if (v_266 != SPID_NOPROP)
                record_get(elt(fastget_names, 21), 1);
             else record_get(elt(fastget_names, 21), 0),
                v_266 = nil; }
           else record_get(elt(fastget_names, 21), 0); }
#else
             if (v_266 == SPID_NOPROP) v_266 = nil; }}
#endif
    goto v_125;
    v_266 = nil;
v_125:
    goto v_106;
    v_266 = nil;
v_106:
    goto v_49;
    v_266 = nil;
v_49:
    goto v_30;
    v_266 = nil;
v_30:
    if (v_266 == nil) goto v_27;
    else goto v_28;
v_27:
    v_266 = lisp_true;
    goto v_26;
v_28:
    v_267 = v_268;
    v_266 = basic_elt(env, 1); // true
    if (v_267 == v_266) goto v_150;
    else goto v_151;
v_150:
    v_266 = lisp_true;
    goto v_149;
v_151:
    v_267 = v_268;
    v_266 = basic_elt(env, 2); // false
    v_266 = (v_267 == v_266 ? lisp_true : nil);
    goto v_149;
    v_266 = nil;
v_149:
    goto v_26;
    v_266 = nil;
v_26:
    if (v_266 == nil) goto v_24;
    v_268 = stack[-5];
    v_267 = stack[0];
    v_266 = nil;
    v_267 = list2star(v_268, v_267, v_266);
    v_266 = nil;
    {
        LispObject v_275 = stack[-1];
        return list2star(v_275, v_267, v_266);
    }
v_24:
    v_267 = v_268;
    v_266 = stack[-5];
    if (v_267 == v_266) goto v_169;
    else goto v_170;
v_169:
    v_268 = stack[-1];
    v_267 = stack[0];
    v_266 = nil;
    return list2star(v_268, v_267, v_266);
v_170:
    v_267 = v_268;
    v_266 = stack[-1];
    if (equal(v_267, v_266)) goto v_180;
    v_266 = basic_elt(env, 13); // "BUG IN cl_mkstrict"
    v_266 = ncons(v_266);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 15); // rederr
    v_266 = (*qfn1(fn))(fn, v_266);
    }
    env = stack[-6];
    goto v_178;
v_180:
v_178:
    stack[-4] = stack[-1];
    v_266 = stack[0];
    if (!car_legal(v_266)) v_266 = cdrerror(v_266); else
    v_266 = cdr(v_266);
    stack[-3] = v_266;
    v_266 = stack[-3];
    if (v_266 == nil) goto v_198;
    else goto v_199;
v_198:
    v_266 = nil;
    goto v_192;
v_199:
    v_266 = stack[-3];
    if (!car_legal(v_266)) v_266 = carerror(v_266); else
    v_266 = car(v_266);
    v_267 = v_266;
    v_266 = v_267;
    if (!consp(v_266)) goto v_212;
    else goto v_213;
v_212:
    v_266 = v_267;
    v_268 = v_266;
    goto v_211;
v_213:
    v_266 = v_267;
    if (!car_legal(v_266)) v_266 = carerror(v_266); else
    v_266 = car(v_266);
    v_268 = v_266;
    goto v_211;
    v_268 = nil;
v_211:
    v_266 = stack[-5];
    if (v_268 == v_266) goto v_208;
    else goto v_209;
v_208:
    v_266 = v_267;
    goto v_207;
v_209:
    v_268 = stack[-5];
    v_266 = nil;
    v_266 = list2star(v_268, v_267, v_266);
    env = stack[-6];
    goto v_207;
    v_266 = nil;
v_207:
    v_266 = ncons(v_266);
    env = stack[-6];
    stack[-1] = v_266;
    stack[-2] = v_266;
v_193:
    v_266 = stack[-3];
    if (!car_legal(v_266)) v_266 = cdrerror(v_266); else
    v_266 = cdr(v_266);
    stack[-3] = v_266;
    v_266 = stack[-3];
    if (v_266 == nil) goto v_232;
    else goto v_233;
v_232:
    v_266 = stack[-2];
    goto v_192;
v_233:
    stack[0] = stack[-1];
    v_266 = stack[-3];
    if (!car_legal(v_266)) v_266 = carerror(v_266); else
    v_266 = car(v_266);
    v_267 = v_266;
    v_266 = v_267;
    if (!consp(v_266)) goto v_247;
    else goto v_248;
v_247:
    v_266 = v_267;
    v_268 = v_266;
    goto v_246;
v_248:
    v_266 = v_267;
    if (!car_legal(v_266)) v_266 = carerror(v_266); else
    v_266 = car(v_266);
    v_268 = v_266;
    goto v_246;
    v_268 = nil;
v_246:
    v_266 = stack[-5];
    if (v_268 == v_266) goto v_243;
    else goto v_244;
v_243:
    v_266 = v_267;
    goto v_242;
v_244:
    v_268 = stack[-5];
    v_266 = nil;
    v_266 = list2star(v_268, v_267, v_266);
    env = stack[-6];
    goto v_242;
    v_266 = nil;
v_242:
    v_266 = ncons(v_266);
    env = stack[-6];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_266);
    v_266 = stack[-1];
    if (!car_legal(v_266)) v_266 = cdrerror(v_266); else
    v_266 = cdr(v_266);
    stack[-1] = v_266;
    goto v_193;
v_192:
    {
        LispObject v_276 = stack[-4];
        return cons(v_276, v_266);
    }
    return onevalue(v_266);
}



// Code for variableom

static LispObject CC_variableom(LispObject env,
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
    v_52 = stack[0];
    v_53 = Lintern(nil, v_52);
    env = stack[-2];
    v_52 = qvalue(basic_elt(env, 1)); // constantsom!*
    v_52 = Lassoc(nil, v_53, v_52);
    stack[-1] = v_52;
    v_52 = stack[-1];
    if (v_52 == nil) goto v_14;
    v_52 = basic_elt(env, 2); // "<OMS "
    {   LispObject fn = basic_elt(env, 8); // printout
    v_52 = (*qfn1(fn))(fn, v_52);
    }
    env = stack[-2];
    v_52 = basic_elt(env, 3); // "cd="""
    v_52 = Lprinc(nil, v_52);
    env = stack[-2];
    v_52 = stack[-1];
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    if (!car_legal(v_52)) v_52 = carerror(v_52); else
    v_52 = car(v_52);
    v_52 = Lprinc(nil, v_52);
    env = stack[-2];
    v_52 = basic_elt(env, 4); // """ "
    v_52 = Lprinc(nil, v_52);
    env = stack[-2];
    v_52 = basic_elt(env, 5); // "name="""
    v_52 = Lprinc(nil, v_52);
    env = stack[-2];
    v_52 = stack[-1];
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    if (!car_legal(v_52)) v_52 = carerror(v_52); else
    v_52 = car(v_52);
    v_52 = Lprinc(nil, v_52);
    env = stack[-2];
    v_52 = basic_elt(env, 6); // """/>"
    v_52 = Lprinc(nil, v_52);
    goto v_12;
v_14:
    v_52 = stack[0];
    if (v_52 == nil) goto v_41;
    v_52 = basic_elt(env, 7); // "<OMV "
    {   LispObject fn = basic_elt(env, 8); // printout
    v_52 = (*qfn1(fn))(fn, v_52);
    }
    env = stack[-2];
    v_52 = basic_elt(env, 5); // "name="""
    v_52 = Lprinc(nil, v_52);
    env = stack[-2];
    v_52 = stack[0];
    v_52 = Lprinc(nil, v_52);
    env = stack[-2];
    v_52 = basic_elt(env, 6); // """/>"
    v_52 = Lprinc(nil, v_52);
    goto v_39;
v_41:
v_39:
    goto v_12;
v_12:
    v_52 = nil;
    return onevalue(v_52);
}



// Code for onoff

static LispObject CC_onoff(LispObject env,
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    stack[-2] = v_3;
    stack[0] = v_2;
// end of prologue
    v_80 = stack[0];
    if (symbolp(v_80)) goto v_12;
    v_81 = stack[0];
    v_80 = basic_elt(env, 1); // "switch"
    {   LispObject fn = basic_elt(env, 11); // typerr
    v_80 = (*qfn2(fn))(fn, v_81, v_80);
    }
    env = stack[-4];
    goto v_10;
v_12:
    v_80 = stack[0];
    if (!symbolp(v_80)) v_80 = nil;
    else { v_80 = qfastgets(v_80);
           if (v_80 != nil) { v_80 = elt(v_80, 51); // switch
#ifdef RECORD_GET
             if (v_80 == SPID_NOPROP)
                record_get(elt(fastget_names, 51), 0),
                v_80 = nil;
             else record_get(elt(fastget_names, 51), 1),
                v_80 = lisp_true; }
           else record_get(elt(fastget_names, 51), 0); }
#else
             if (v_80 == SPID_NOPROP) v_80 = nil; else v_80 = lisp_true; }}
#endif
    if (v_80 == nil) goto v_17;
    else goto v_18;
v_17:
    stack[-3] = basic_elt(env, 2); // rlisp
    stack[-1] = static_cast<LispObject>(400)+TAG_FIXNUM; // 25
    v_81 = stack[0];
    v_80 = basic_elt(env, 3); // "not defined as switch"
    v_80 = list2(v_81, v_80);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 12); // rerror
    v_80 = (*qfn3(fn))(fn, stack[-3], stack[-1], v_80);
    }
    env = stack[-4];
    goto v_10;
v_18:
v_10:
    stack[-1] = basic_elt(env, 4); // !*
    v_80 = stack[0];
    v_80 = Lexplodec(nil, v_80);
    env = stack[-4];
    v_80 = cons(stack[-1], v_80);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 13); // list2string
    v_80 = (*qfn1(fn))(fn, v_80);
    }
    env = stack[-4];
    v_80 = Lintern(nil, v_80);
    env = stack[-4];
    stack[-3] = v_80;
    v_80 = qvalue(basic_elt(env, 5)); // !*switchcheck
    if (v_80 == nil) goto v_36;
    v_80 = stack[-3];
    {   LispObject fn = basic_elt(env, 14); // lispeval
    v_81 = (*qfn1(fn))(fn, v_80);
    }
    env = stack[-4];
    v_80 = stack[-2];
    if (v_81 == v_80) goto v_39;
    else goto v_36;
v_39:
    v_80 = nil;
    goto v_8;
v_36:
    v_82 = stack[-2];
    v_81 = stack[0];
    v_80 = basic_elt(env, 6); // simpfg
    v_80 = get(v_81, v_80);
    env = stack[-4];
    v_80 = Latsoc(nil, v_82, v_80);
    v_81 = v_80;
    if (v_80 == nil) goto v_45;
    stack[-1] = basic_elt(env, 7); // progn
    v_80 = v_81;
    if (!car_legal(v_80)) stack[0] = cdrerror(v_80); else
    stack[0] = cdr(v_80);
    v_80 = nil;
    v_80 = ncons(v_80);
    env = stack[-4];
    v_80 = Lappend_2(nil, stack[0], v_80);
    env = stack[-4];
    v_80 = cons(stack[-1], v_80);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 14); // lispeval
    v_80 = (*qfn1(fn))(fn, v_80);
    }
    env = stack[-4];
    goto v_34;
v_45:
v_34:
    v_80 = stack[-2];
    if (v_80 == nil) goto v_62;
    v_81 = stack[-3];
    v_80 = basic_elt(env, 8); // !*raise
    if (v_81 == v_80) goto v_65;
    else goto v_62;
v_65:
    v_80 = basic_elt(env, 8); // !*raise
    stack[-3] = v_80;
    goto v_60;
v_62:
    v_80 = stack[-2];
    if (v_80 == nil) goto v_70;
    v_81 = stack[-3];
    v_80 = basic_elt(env, 9); // !*!L!O!W!E!R
    if (v_81 == v_80) goto v_73;
    else goto v_70;
v_73:
    v_80 = basic_elt(env, 10); // !*lower
    stack[-3] = v_80;
    goto v_60;
v_70:
v_60:
    v_81 = stack[-3];
    v_80 = stack[-2];
    v_80 = Lset(nil, v_81, v_80);
    v_80 = nil;
v_8:
    return onevalue(v_80);
}



// Code for guesspftype

static LispObject CC_guesspftype(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_36 = stack[0];
    if (!consp(v_36)) goto v_6;
    else goto v_7;
v_6:
    v_36 = stack[0];
    goto v_5;
v_7:
    v_36 = stack[0];
    if (!car_legal(v_36)) v_37 = carerror(v_36); else
    v_37 = car(v_36);
    v_36 = basic_elt(env, 1); // (wedge d partdf hodge innerprod liedf)
    v_36 = Lmemq(nil, v_37, v_36);
    if (v_36 == nil) goto v_11;
    v_36 = stack[0];
    goto v_5;
v_11:
    v_36 = stack[0];
    if (!car_legal(v_36)) v_36 = cdrerror(v_36); else
    v_36 = cdr(v_36);
    v_37 = Llength(nil, v_36);
    env = stack[-1];
    v_36 = stack[0];
    if (!car_legal(v_36)) v_36 = carerror(v_36); else
    v_36 = car(v_36);
    if (!symbolp(v_36)) v_36 = nil;
    else { v_36 = qfastgets(v_36);
           if (v_36 != nil) { v_36 = elt(v_36, 25); // ifdegree
#ifdef RECORD_GET
             if (v_36 != SPID_NOPROP)
                record_get(elt(fastget_names, 25), 1);
             else record_get(elt(fastget_names, 25), 0),
                v_36 = nil; }
           else record_get(elt(fastget_names, 25), 0); }
#else
             if (v_36 == SPID_NOPROP) v_36 = nil; }}
#endif
    v_36 = Lassoc(nil, v_37, v_36);
    if (v_36 == nil) goto v_18;
    v_36 = stack[0];
    if (!car_legal(v_36)) v_36 = cdrerror(v_36); else
    v_36 = cdr(v_36);
    {   LispObject fn = basic_elt(env, 2); // xvarlistp
    v_36 = (*qfn1(fn))(fn, v_36);
    }
    env = stack[-1];
    if (v_36 == nil) goto v_27;
    else goto v_18;
v_27:
    v_36 = stack[0];
    goto v_5;
v_18:
    v_36 = stack[0];
    {
        LispObject fn = basic_elt(env, 3); // mknwedge
        return (*qfn1(fn))(fn, v_36);
    }
    v_36 = nil;
v_5:
    return onevalue(v_36);
}



// Code for equalreplaceby

static LispObject CC_equalreplaceby(LispObject env,
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
    v_8 = basic_elt(env, 1); // replaceby
    return cons(v_8, v_7);
}



// Code for prinfit

static LispObject CC_prinfit(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    v_53 = qvalue(basic_elt(env, 1)); // !*nat
    if (v_53 == nil) goto v_15;
    else goto v_16;
v_15:
    v_53 = lisp_true;
    goto v_14;
v_16:
    v_53 = qvalue(basic_elt(env, 2)); // testing!-width!*
    goto v_14;
    v_53 = nil;
v_14:
    if (v_53 == nil) goto v_12;
    v_53 = stack[0];
    if (v_53 == nil) goto v_25;
    v_53 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // oprin
    v_53 = (*qfn1(fn))(fn, v_53);
    }
    env = stack[-3];
    goto v_23;
v_25:
v_23:
    v_54 = stack[-2];
    v_53 = stack[-1];
    {
        LispObject fn = basic_elt(env, 4); // maprint
        return (*qfn2(fn))(fn, v_54, v_53);
    }
v_12:
    v_55 = stack[-2];
    v_54 = stack[-1];
    v_53 = stack[0];
    {   LispObject fn = basic_elt(env, 5); // layout!-formula
    v_53 = (*qfn3(fn))(fn, v_55, v_54, v_53);
    }
    env = stack[-3];
    v_54 = v_53;
    v_53 = v_54;
    if (v_53 == nil) goto v_38;
    else goto v_39;
v_38:
    v_53 = stack[0];
    if (v_53 == nil) goto v_44;
    v_53 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // oprin
    v_53 = (*qfn1(fn))(fn, v_53);
    }
    env = stack[-3];
    goto v_42;
v_44:
v_42:
    v_54 = stack[-2];
    v_53 = stack[-1];
    {
        LispObject fn = basic_elt(env, 4); // maprint
        return (*qfn2(fn))(fn, v_54, v_53);
    }
v_39:
    v_53 = v_54;
    {   LispObject fn = basic_elt(env, 6); // putpline
    v_53 = (*qfn1(fn))(fn, v_53);
    }
    v_53 = nil;
    return onevalue(v_53);
}



// Code for gpexp1p

static LispObject CC_gpexp1p(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // gpexpp
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



// Code for copyd

static LispObject CC_copyd(LispObject env,
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
    stack[-1] = v_3;
    stack[-2] = v_2;
// end of prologue
    v_57 = stack[-1];
    {   LispObject fn = basic_elt(env, 5); // getd
    v_57 = (*qfn1(fn))(fn, v_57);
    }
    env = stack[-4];
    v_58 = v_57;
    if (v_58 == nil) goto v_12;
    else goto v_13;
v_12:
    v_58 = qvalue(basic_elt(env, 1)); // !*savedef
    v_57 = basic_elt(env, 1); // !*savedef
    if (v_58 == v_57) goto v_18;
    stack[-3] = basic_elt(env, 2); // rlisp
    stack[0] = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_58 = stack[-1];
    v_57 = basic_elt(env, 3); // "has no definition in copyd"
    v_57 = list2(v_58, v_57);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 6); // rerror
    v_57 = (*qfn3(fn))(fn, stack[-3], stack[0], v_57);
    }
    env = stack[-4];
    goto v_16;
v_18:
v_16:
    goto v_11;
v_13:
    v_59 = stack[-2];
    v_58 = v_57;
    if (!car_legal(v_58)) v_58 = carerror(v_58); else
    v_58 = car(v_58);
    if (!car_legal(v_57)) v_57 = cdrerror(v_57); else
    v_57 = cdr(v_57);
    {   LispObject fn = basic_elt(env, 7); // putd
    v_57 = (*qfn3(fn))(fn, v_59, v_58, v_57);
    }
    env = stack[-4];
    v_57 = stack[-1];
    if (!symbolp(v_57)) v_57 = nil;
    else { v_57 = qfastgets(v_57);
           if (v_57 != nil) { v_57 = elt(v_57, 1); // lose
#ifdef RECORD_GET
             if (v_57 == SPID_NOPROP)
                record_get(elt(fastget_names, 1), 0),
                v_57 = nil;
             else record_get(elt(fastget_names, 1), 1),
                v_57 = lisp_true; }
           else record_get(elt(fastget_names, 1), 0); }
#else
             if (v_57 == SPID_NOPROP) v_57 = nil; else v_57 = lisp_true; }}
#endif
    if (v_57 == nil) goto v_38;
    v_57 = stack[-2];
    v_58 = ncons(v_57);
    env = stack[-4];
    v_57 = basic_elt(env, 4); // lose
    v_57 = Lflag(nil, v_58, v_57);
    env = stack[-4];
    goto v_36;
v_38:
v_36:
    goto v_11;
v_11:
    v_58 = stack[-1];
    v_57 = basic_elt(env, 1); // !*savedef
    v_58 = get(v_58, v_57);
    env = stack[-4];
    v_57 = v_58;
    if (v_58 == nil) goto v_48;
    v_59 = stack[-2];
    v_58 = basic_elt(env, 1); // !*savedef
    v_57 = Lputprop(nil, v_59, v_58, v_57);
    goto v_46;
v_48:
v_46:
    v_57 = stack[-2];
    return onevalue(v_57);
}



// Code for class

static LispObject CC_class(LispObject env,
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
    {   LispObject fn = basic_elt(env, 3); // ord
    v_29 = (*qfn1(fn))(fn, v_28);
    }
    env = stack[-1];
    v_28 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_29 == v_28) goto v_6;
    else goto v_7;
v_6:
    v_28 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_5;
v_7:
    v_29 = qvalue(basic_elt(env, 1)); // ordering
    v_28 = basic_elt(env, 2); // lex
    if (v_29 == v_28) goto v_18;
    else goto v_19;
v_18:
    v_28 = stack[0];
    goto v_17;
v_19:
    v_28 = stack[0];
    if (!car_legal(v_28)) v_28 = cdrerror(v_28); else
    v_28 = cdr(v_28);
    goto v_17;
    v_28 = nil;
v_17:
    v_28 = Lreverse(nil, v_28);
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 4); // leftzeros
    v_28 = (*qfn1(fn))(fn, v_28);
    }
    v_28 = static_cast<LispObject>(static_cast<std::intptr_t>(v_28) + 0x10);
    goto v_5;
    v_28 = nil;
v_5:
    return onevalue(v_28);
}



// Code for lexer_word_starter

static LispObject CC_lexer_word_starter(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_65 = stack[0];
    v_65 = Lalpha_char_p(nil, v_65);
    env = stack[-1];
    if (v_65 == nil) goto v_6;
    else goto v_5;
v_6:
    v_66 = stack[0];
    v_65 = basic_elt(env, 1); // !_
    if (v_66 == v_65) goto v_15;
    else goto v_16;
v_15:
    v_66 = qvalue(basic_elt(env, 2)); // lexer_style!*
    v_65 = static_cast<LispObject>(32768)+TAG_FIXNUM; // 2048
    {   LispObject fn = basic_elt(env, 5); // land
    v_65 = (*qfn2(fn))(fn, v_66, v_65);
    }
    env = stack[-1];
    v_65 = static_cast<LispObject>(zerop(v_65));
    v_65 = v_65 ? lisp_true : nil;
    env = stack[-1];
    v_65 = (v_65 == nil ? lisp_true : nil);
    goto v_14;
v_16:
    v_65 = nil;
    goto v_14;
    v_65 = nil;
v_14:
    if (v_65 == nil) goto v_12;
    v_65 = lisp_true;
    goto v_10;
v_12:
    v_66 = stack[0];
    v_65 = basic_elt(env, 3); // !'
    if (v_66 == v_65) goto v_36;
    else goto v_37;
v_36:
    v_66 = qvalue(basic_elt(env, 2)); // lexer_style!*
    v_65 = static_cast<LispObject>(131072)+TAG_FIXNUM; // 8192
    {   LispObject fn = basic_elt(env, 5); // land
    v_65 = (*qfn2(fn))(fn, v_66, v_65);
    }
    env = stack[-1];
    v_65 = static_cast<LispObject>(zerop(v_65));
    v_65 = v_65 ? lisp_true : nil;
    env = stack[-1];
    v_65 = (v_65 == nil ? lisp_true : nil);
    goto v_35;
v_37:
    v_65 = nil;
    goto v_35;
    v_65 = nil;
v_35:
    if (v_65 == nil) goto v_33;
    v_65 = lisp_true;
    goto v_31;
v_33:
    v_66 = stack[0];
    v_65 = basic_elt(env, 4); // !\ (backslash)
    if (v_66 == v_65) goto v_53;
    else goto v_54;
v_53:
    v_66 = qvalue(basic_elt(env, 2)); // lexer_style!*
    v_65 = static_cast<LispObject>(65536)+TAG_FIXNUM; // 4096
    {   LispObject fn = basic_elt(env, 5); // land
    v_65 = (*qfn2(fn))(fn, v_66, v_65);
    }
    env = stack[-1];
    v_65 = static_cast<LispObject>(zerop(v_65));
    v_65 = v_65 ? lisp_true : nil;
    v_65 = (v_65 == nil ? lisp_true : nil);
    goto v_52;
v_54:
    v_65 = nil;
    goto v_52;
    v_65 = nil;
v_52:
    goto v_31;
    v_65 = nil;
v_31:
    goto v_10;
    v_65 = nil;
v_10:
v_5:
    return onevalue(v_65);
}



// Code for gcref_mkedges!-tgf

static LispObject CC_gcref_mkedgesKtgf(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_27 = v_3;
    stack[-1] = v_2;
// end of prologue
    stack[-2] = v_27;
v_8:
    v_27 = stack[-2];
    if (v_27 == nil) goto v_12;
    else goto v_13;
v_12:
    v_27 = nil;
    goto v_7;
v_13:
    v_27 = stack[-2];
    if (!car_legal(v_27)) v_27 = carerror(v_27); else
    v_27 = car(v_27);
    stack[0] = v_27;
    v_27 = stack[-1];
    v_27 = Lprinc(nil, v_27);
    env = stack[-3];
    v_27 = basic_elt(env, 1); // " "
    v_27 = Lprinc(nil, v_27);
    env = stack[-3];
    v_27 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // prin2t
    v_27 = (*qfn1(fn))(fn, v_27);
    }
    env = stack[-3];
    v_27 = stack[-2];
    if (!car_legal(v_27)) v_27 = cdrerror(v_27); else
    v_27 = cdr(v_27);
    stack[-2] = v_27;
    goto v_8;
v_7:
    return onevalue(v_27);
}



// Code for replus

static LispObject CC_replus(LispObject env,
                         LispObject v_2)
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
    v_26 = v_27;
    if (v_26 == nil) goto v_6;
    else goto v_7;
v_6:
    v_26 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_5;
v_7:
    v_26 = v_27;
    if (!consp(v_26)) goto v_10;
    else goto v_11;
v_10:
    v_26 = v_27;
    goto v_5;
v_11:
    v_26 = v_27;
    if (!car_legal(v_26)) v_26 = cdrerror(v_26); else
    v_26 = cdr(v_26);
    if (v_26 == nil) goto v_14;
    else goto v_15;
v_14:
    v_26 = v_27;
    if (!car_legal(v_26)) v_26 = carerror(v_26); else
    v_26 = car(v_26);
    goto v_5;
v_15:
    stack[0] = basic_elt(env, 1); // plus
    v_26 = v_27;
    {   LispObject fn = basic_elt(env, 2); // unplus
    v_26 = (*qfn1(fn))(fn, v_26);
    }
    {
        LispObject v_29 = stack[0];
        return cons(v_29, v_26);
    }
    v_26 = nil;
v_5:
    return onevalue(v_26);
}



// Code for rl_subat

static LispObject CC_rl_subat(LispObject env,
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
    stack[0] = qvalue(basic_elt(env, 1)); // rl_subat!*
    v_10 = list2(v_11, v_10);
    env = stack[-1];
    {
        LispObject v_13 = stack[0];
        LispObject fn = basic_elt(env, 2); // apply
        return (*qfn2(fn))(fn, v_13, v_10);
    }
}



// Code for subf1

static LispObject CC_subf1(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_502, v_503, v_504;
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(15);
// copy arguments values to proper place
    stack[-11] = v_3;
    stack[-12] = v_2;
// end of prologue
    v_502 = stack[-12];
    if (v_502 == nil) goto v_7;
    else goto v_8;
v_7:
    v_503 = nil;
    v_502 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_503, v_502);
v_8:
    v_502 = stack[-12];
    if (!consp(v_502)) goto v_17;
    else goto v_18;
v_17:
    v_502 = lisp_true;
    goto v_16;
v_18:
    v_502 = stack[-12];
    if (!car_legal(v_502)) v_502 = carerror(v_502); else
    v_502 = car(v_502);
    v_502 = (consp(v_502) ? nil : lisp_true);
    goto v_16;
    v_502 = nil;
v_16:
    if (v_502 == nil) goto v_14;
    v_502 = stack[-12];
    if (!consp(v_502)) goto v_28;
    else goto v_29;
v_28:
    v_502 = qvalue(basic_elt(env, 1)); // dmode!*
    if (v_502 == nil) goto v_33;
    else goto v_34;
v_33:
    v_503 = stack[-12];
    v_502 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_503, v_502);
v_34:
    v_502 = stack[-12];
    {
        LispObject fn = basic_elt(env, 11); // simpatom
        return (*qfn1(fn))(fn, v_502);
    }
    v_502 = nil;
    goto v_27;
v_29:
    v_503 = qvalue(basic_elt(env, 1)); // dmode!*
    v_502 = stack[-12];
    if (!car_legal(v_502)) v_502 = carerror(v_502); else
    v_502 = car(v_502);
    if (v_503 == v_502) goto v_47;
    else goto v_48;
v_47:
    v_503 = qvalue(basic_elt(env, 1)); // dmode!*
    v_502 = basic_elt(env, 2); // resimplify
    v_502 = Lflagp(nil, v_503, v_502);
    env = stack[-14];
    v_502 = (v_502 == nil ? lisp_true : nil);
    goto v_46;
v_48:
    v_502 = nil;
    goto v_46;
    v_502 = nil;
v_46:
    if (v_502 == nil) goto v_44;
    v_502 = stack[-12];
    {
        LispObject fn = basic_elt(env, 12); // !*d2q
        return (*qfn1(fn))(fn, v_502);
    }
v_44:
    v_502 = stack[-12];
    {   LispObject fn = basic_elt(env, 13); // prepf
    v_502 = (*qfn1(fn))(fn, v_502);
    }
    env = stack[-14];
    {
        LispObject fn = basic_elt(env, 14); // simp
        return (*qfn1(fn))(fn, v_502);
    }
    v_502 = nil;
v_27:
    goto v_6;
v_14:
// Binding varstack!*
// FLUIDBIND: reloadenv=14 litvec-offset=3 saveloc=9
{   bind_fluid_stack bind_fluid_var(-14, 3, -9);
    setvalue(basic_elt(env, 3), nil); // varstack!*
    stack[-5] = nil;
    stack[-4] = nil;
    v_502 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-13] = v_502;
    v_503 = nil;
    v_502 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_502 = cons(v_503, v_502);
    env = stack[-14];
    stack[-3] = v_502;
v_84:
    v_502 = stack[-12];
    if (!car_legal(v_502)) v_502 = carerror(v_502); else
    v_502 = car(v_502);
    if (!car_legal(v_502)) v_502 = carerror(v_502); else
    v_502 = car(v_502);
    if (!car_legal(v_502)) v_502 = carerror(v_502); else
    v_502 = car(v_502);
    stack[-2] = v_502;
    v_502 = nil;
    stack[0] = v_502;
    v_503 = stack[-2];
    v_502 = stack[-11];
    v_502 = Lassoc(nil, v_503, v_502);
    if (v_502 == nil) goto v_105;
    v_503 = stack[-2];
    v_502 = qvalue(basic_elt(env, 4)); // wtl!*
    v_502 = Lassoc(nil, v_503, v_502);
    stack[0] = v_502;
    if (v_502 == nil) goto v_105;
    v_502 = stack[0];
    if (!car_legal(v_502)) v_502 = cdrerror(v_502); else
    v_502 = cdr(v_502);
    stack[0] = v_502;
    goto v_103;
v_105:
v_103:
    v_503 = stack[-2];
    v_502 = qvalue(basic_elt(env, 5)); // asymplis!*
    v_502 = Lassoc(nil, v_503, v_502);
    stack[-10] = v_502;
    if (v_502 == nil) goto v_119;
    v_502 = stack[-10];
    if (!car_legal(v_502)) v_502 = cdrerror(v_502); else
    v_502 = cdr(v_502);
    stack[-10] = v_502;
    goto v_117;
v_119:
v_117:
v_85:
    v_502 = stack[-12];
    if (v_502 == nil) goto v_131;
    else goto v_132;
v_131:
    v_502 = lisp_true;
    goto v_130;
v_132:
    v_503 = stack[-12];
    v_502 = stack[-2];
    {   LispObject fn = basic_elt(env, 15); // degr
    v_503 = (*qfn2(fn))(fn, v_503, v_502);
    }
    env = stack[-14];
    stack[-13] = v_503;
    v_502 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_502 = (v_503 == v_502 ? lisp_true : nil);
    goto v_130;
    v_502 = nil;
v_130:
    if (v_502 == nil) goto v_128;
    goto v_86;
v_128:
    v_502 = stack[-10];
    if (v_502 == nil) goto v_146;
    else goto v_147;
v_146:
    v_502 = lisp_true;
    goto v_145;
v_147:
    v_503 = stack[-13];
    v_502 = stack[-10];
    v_502 = static_cast<LispObject>(lessp2(v_503, v_502));
    v_502 = v_502 ? lisp_true : nil;
    env = stack[-14];
    goto v_145;
    v_502 = nil;
v_145:
    if (v_502 == nil) goto v_143;
    v_502 = stack[-12];
    if (!car_legal(v_502)) v_503 = carerror(v_502); else
    v_503 = car(v_502);
    v_502 = stack[0];
    {   LispObject fn = basic_elt(env, 16); // wtchk
    v_503 = (*qfn2(fn))(fn, v_503, v_502);
    }
    env = stack[-14];
    v_502 = stack[-5];
    v_502 = cons(v_503, v_502);
    env = stack[-14];
    stack[-5] = v_502;
    goto v_126;
v_143:
v_126:
    v_502 = stack[-12];
    if (!car_legal(v_502)) v_502 = cdrerror(v_502); else
    v_502 = cdr(v_502);
    stack[-12] = v_502;
    goto v_85;
v_86:
    v_502 = nil;
    v_504 = v_502;
v_166:
    v_502 = stack[-11];
    if (v_502 == nil) goto v_169;
    else goto v_170;
v_169:
    goto v_165;
v_170:
    v_502 = stack[-11];
    if (!car_legal(v_502)) v_502 = carerror(v_502); else
    v_502 = car(v_502);
    if (!car_legal(v_502)) v_503 = carerror(v_502); else
    v_503 = car(v_502);
    v_502 = stack[-11];
    if (!car_legal(v_502)) v_502 = carerror(v_502); else
    v_502 = car(v_502);
    if (!car_legal(v_502)) v_502 = cdrerror(v_502); else
    v_502 = cdr(v_502);
    if (equal(v_503, v_502)) goto v_176;
    v_502 = stack[-11];
    if (!car_legal(v_502)) v_502 = carerror(v_502); else
    v_502 = car(v_502);
    v_503 = v_504;
    v_502 = cons(v_502, v_503);
    env = stack[-14];
    v_504 = v_502;
    goto v_174;
v_176:
v_174:
    v_502 = stack[-11];
    if (!car_legal(v_502)) v_502 = cdrerror(v_502); else
    v_502 = cdr(v_502);
    stack[-11] = v_502;
    goto v_166;
v_165:
    v_502 = v_504;
    v_502 = Lnreverse(nil, v_502);
    env = stack[-14];
    stack[-11] = v_502;
    v_502 = stack[-2];
    if (!consp(v_502)) goto v_198;
    v_502 = stack[-2];
    if (!car_legal(v_502)) v_502 = carerror(v_502); else
    v_502 = car(v_502);
    v_502 = (consp(v_502) ? nil : lisp_true);
    v_502 = (v_502 == nil ? lisp_true : nil);
    goto v_196;
v_198:
    v_502 = nil;
    goto v_196;
    v_502 = nil;
v_196:
    if (v_502 == nil) goto v_194;
    v_502 = stack[-2];
    {   LispObject fn = basic_elt(env, 13); // prepf
    v_502 = (*qfn1(fn))(fn, v_502);
    }
    env = stack[-14];
    stack[-2] = v_502;
    goto v_192;
v_194:
v_192:
    v_502 = stack[-11];
    if (v_502 == nil) goto v_211;
    else goto v_212;
v_211:
    v_503 = stack[-2];
    v_502 = basic_elt(env, 6); // k!*
    if (v_503 == v_502) goto v_216;
    else goto v_217;
v_216:
    v_502 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_215;
v_217:
    v_502 = stack[-2];
    goto v_215;
    v_502 = nil;
v_215:
    stack[-1] = v_502;
    goto v_210;
v_212:
    v_503 = stack[-11];
    v_502 = stack[-2];
    {   LispObject fn = basic_elt(env, 17); // subsublis
    v_503 = (*qfn2(fn))(fn, v_503, v_502);
    }
    env = stack[-14];
    stack[-1] = v_503;
    v_502 = stack[-2];
    if (equal(v_503, v_502)) goto v_228;
    else goto v_229;
v_228:
    v_503 = stack[-2];
    v_502 = qvalue(basic_elt(env, 5)); // asymplis!*
    v_502 = Lassoc(nil, v_503, v_502);
    v_502 = (v_502 == nil ? lisp_true : nil);
    goto v_227;
v_229:
    v_502 = nil;
    goto v_227;
    v_502 = nil;
v_227:
    if (v_502 == nil) goto v_225;
    goto v_89;
v_225:
v_210:
v_87:
    v_503 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_502 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_502 = cons(v_503, v_502);
    env = stack[-14];
    stack[-8] = v_502;
    v_502 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-13] = v_502;
    v_502 = stack[-5];
    if (v_502 == nil) goto v_248;
    v_502 = stack[-5];
    if (!car_legal(v_502)) v_502 = carerror(v_502); else
    v_502 = car(v_502);
    if (!car_legal(v_502)) v_502 = carerror(v_502); else
    v_502 = car(v_502);
    if (!car_legal(v_502)) v_502 = cdrerror(v_502); else
    v_502 = cdr(v_502);
    v_502 = Lminusp(nil, v_502);
    env = stack[-14];
    if (v_502 == nil) goto v_248;
    goto v_90;
v_248:
    v_502 = stack[-1];
    {   LispObject fn = basic_elt(env, 18); // getrtype
    v_503 = (*qfn1(fn))(fn, v_502);
    }
    env = stack[-14];
    stack[-7] = v_503;
    v_502 = basic_elt(env, 7); // yetunknowntype
    if (v_503 == v_502) goto v_259;
    else goto v_260;
v_259:
    v_503 = stack[-1];
    v_502 = nil;
    {   LispObject fn = basic_elt(env, 19); // eval!-yetunknowntypeexpr
    v_502 = (*qfn2(fn))(fn, v_503, v_502);
    }
    env = stack[-14];
    stack[-1] = v_502;
    {   LispObject fn = basic_elt(env, 18); // getrtype
    v_502 = (*qfn1(fn))(fn, v_502);
    }
    env = stack[-14];
    stack[-7] = v_502;
    goto v_258;
v_260:
v_258:
    v_502 = stack[-7];
    if (v_502 == nil) goto v_271;
    v_503 = stack[-7];
    v_502 = basic_elt(env, 8); // list
    if (v_503 == v_502) goto v_271;
    v_503 = stack[-7];
    v_502 = stack[-1];
    v_503 = list2(v_503, v_502);
    env = stack[-14];
    v_502 = basic_elt(env, 9); // "substituted expression"
    {   LispObject fn = basic_elt(env, 20); // typerr
    v_502 = (*qfn2(fn))(fn, v_503, v_502);
    }
    env = stack[-14];
    goto v_269;
v_271:
v_269:
    v_502 = nil;
    {   LispObject fn = basic_elt(env, 21); // setkorder
    v_502 = (*qfn1(fn))(fn, v_502);
    }
    env = stack[-14];
    stack[0] = v_502;
    v_502 = stack[-1];
    {   LispObject fn = basic_elt(env, 14); // simp
    v_502 = (*qfn1(fn))(fn, v_502);
    }
    env = stack[-14];
    stack[-7] = v_502;
    v_502 = stack[0];
    {   LispObject fn = basic_elt(env, 21); // setkorder
    v_502 = (*qfn1(fn))(fn, v_502);
    }
    env = stack[-14];
    v_502 = stack[-7];
    {   LispObject fn = basic_elt(env, 22); // reordsq
    v_502 = (*qfn1(fn))(fn, v_502);
    }
    env = stack[-14];
    stack[-7] = v_502;
    v_502 = stack[-11];
    if (v_502 == nil) goto v_296;
    else goto v_297;
v_296:
    v_502 = stack[-7];
    {   LispObject fn = basic_elt(env, 23); // kernp
    v_502 = (*qfn1(fn))(fn, v_502);
    }
    env = stack[-14];
    if (v_502 == nil) goto v_301;
    else goto v_302;
v_301:
    v_502 = nil;
    goto v_300;
v_302:
    v_502 = stack[-7];
    if (!car_legal(v_502)) v_502 = carerror(v_502); else
    v_502 = car(v_502);
    if (!car_legal(v_502)) v_502 = carerror(v_502); else
    v_502 = car(v_502);
    if (!car_legal(v_502)) v_502 = carerror(v_502); else
    v_502 = car(v_502);
    if (!car_legal(v_502)) v_503 = carerror(v_502); else
    v_503 = car(v_502);
    v_502 = stack[-2];
    v_502 = (v_503 == v_502 ? lisp_true : nil);
    goto v_300;
    v_502 = nil;
v_300:
    goto v_295;
v_297:
    v_502 = nil;
    goto v_295;
    v_502 = nil;
v_295:
    if (v_502 == nil) goto v_293;
    goto v_89;
v_293:
    v_502 = stack[-7];
    if (!car_legal(v_502)) v_502 = carerror(v_502); else
    v_502 = car(v_502);
    if (v_502 == nil) goto v_318;
    else goto v_319;
v_318:
    goto v_88;
v_319:
    v_502 = stack[-7];
    stack[-6] = v_502;
    v_502 = stack[-5];
    stack[-2] = v_502;
v_326:
    v_502 = stack[-2];
    if (v_502 == nil) goto v_330;
    else goto v_331;
v_330:
    goto v_325;
v_331:
    v_502 = stack[-2];
    if (!car_legal(v_502)) v_502 = carerror(v_502); else
    v_502 = car(v_502);
    stack[-1] = v_502;
    v_502 = stack[-1];
    if (!car_legal(v_502)) v_502 = carerror(v_502); else
    v_502 = car(v_502);
    if (!car_legal(v_502)) v_502 = cdrerror(v_502); else
    v_502 = cdr(v_502);
    stack[-10] = v_502;
    v_503 = stack[-10];
    v_502 = qvalue(basic_elt(env, 10)); // frlis!*
    v_502 = Lmemq(nil, v_503, v_502);
    if (v_502 == nil) goto v_343;
    v_502 = stack[-6];
    {   LispObject fn = basic_elt(env, 24); // prepsq
    v_503 = (*qfn1(fn))(fn, v_502);
    }
    env = stack[-14];
    v_502 = stack[-10];
    v_502 = list2(v_503, v_502);
    env = stack[-14];
    {   LispObject fn = basic_elt(env, 25); // simpexpt
    v_502 = (*qfn1(fn))(fn, v_502);
    }
    env = stack[-14];
    stack[-7] = v_502;
    v_502 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-10] = v_502;
    goto v_341;
v_343:
v_341:
    stack[0] = stack[-7];
    v_503 = stack[-10];
    v_502 = stack[-13];
    v_502 = difference2(v_503, v_502);
    env = stack[-14];
    {   LispObject fn = basic_elt(env, 26); // exptsq
    v_502 = (*qfn2(fn))(fn, stack[0], v_502);
    }
    env = stack[-14];
    {   LispObject fn = basic_elt(env, 27); // subs2
    v_503 = (*qfn1(fn))(fn, v_502);
    }
    env = stack[-14];
    v_502 = stack[-8];
    {   LispObject fn = basic_elt(env, 28); // multsq
    v_502 = (*qfn2(fn))(fn, v_503, v_502);
    }
    env = stack[-14];
    stack[-8] = v_502;
    v_502 = stack[-10];
    stack[-13] = v_502;
    stack[0] = stack[-8];
    v_502 = stack[-1];
    if (!car_legal(v_502)) v_503 = cdrerror(v_502); else
    v_503 = cdr(v_502);
    v_502 = stack[-11];
    {   LispObject fn = basic_elt(env, 0); // subf1
    v_502 = (*qfn2(fn))(fn, v_503, v_502);
    }
    env = stack[-14];
    {   LispObject fn = basic_elt(env, 28); // multsq
    v_503 = (*qfn2(fn))(fn, stack[0], v_502);
    }
    env = stack[-14];
    v_502 = stack[-3];
    {   LispObject fn = basic_elt(env, 29); // addsq
    v_502 = (*qfn2(fn))(fn, v_503, v_502);
    }
    env = stack[-14];
    stack[-3] = v_502;
    v_502 = stack[-2];
    if (!car_legal(v_502)) v_502 = cdrerror(v_502); else
    v_502 = cdr(v_502);
    stack[-2] = v_502;
    goto v_326;
v_325:
v_88:
v_374:
    v_502 = stack[-5];
    if (v_502 == nil) goto v_377;
    else goto v_378;
v_377:
    goto v_373;
v_378:
    v_502 = stack[-5];
    if (!car_legal(v_502)) v_502 = carerror(v_502); else
    v_502 = car(v_502);
    if (!car_legal(v_502)) v_503 = cdrerror(v_502); else
    v_503 = cdr(v_502);
    v_502 = stack[-11];
    {   LispObject fn = basic_elt(env, 0); // subf1
    v_502 = (*qfn2(fn))(fn, v_503, v_502);
    }
    env = stack[-14];
    v_502 = stack[-5];
    if (!car_legal(v_502)) v_502 = cdrerror(v_502); else
    v_502 = cdr(v_502);
    stack[-5] = v_502;
    goto v_374;
v_373:
    v_502 = stack[-12];
    if (v_502 == nil) goto v_390;
    else goto v_391;
v_390:
    v_502 = stack[-3];
    goto v_83;
v_391:
    v_502 = stack[-12];
    if (!consp(v_502)) goto v_398;
    else goto v_399;
v_398:
    v_502 = lisp_true;
    goto v_397;
v_399:
    v_502 = stack[-12];
    if (!car_legal(v_502)) v_502 = carerror(v_502); else
    v_502 = car(v_502);
    v_502 = (consp(v_502) ? nil : lisp_true);
    goto v_397;
    v_502 = nil;
v_397:
    if (v_502 == nil) goto v_395;
    v_503 = stack[-12];
    v_502 = stack[-11];
    {   LispObject fn = basic_elt(env, 0); // subf1
    v_503 = (*qfn2(fn))(fn, v_503, v_502);
    }
    env = stack[-14];
    v_502 = stack[-3];
    {   LispObject fn = basic_elt(env, 29); // addsq
    v_502 = (*qfn2(fn))(fn, v_503, v_502);
    }
    goto v_83;
v_395:
    goto v_84;
v_89:
    v_502 = stack[-2];
    {   LispObject fn = basic_elt(env, 30); // sub2chk
    v_502 = (*qfn1(fn))(fn, v_502);
    }
    env = stack[-14];
    v_502 = stack[-5];
    stack[-2] = v_502;
v_417:
    v_502 = stack[-2];
    if (v_502 == nil) goto v_421;
    else goto v_422;
v_421:
    goto v_416;
v_422:
    v_502 = stack[-2];
    if (!car_legal(v_502)) v_502 = carerror(v_502); else
    v_502 = car(v_502);
    stack[-1] = v_502;
    v_502 = stack[-1];
    if (!car_legal(v_502)) v_503 = carerror(v_502); else
    v_503 = car(v_502);
    v_502 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_502 = cons(v_503, v_502);
    env = stack[-14];
    v_503 = ncons(v_502);
    env = stack[-14];
    v_502 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[0] = cons(v_503, v_502);
    env = stack[-14];
    v_502 = stack[-1];
    if (!car_legal(v_502)) v_503 = cdrerror(v_502); else
    v_503 = cdr(v_502);
    v_502 = stack[-11];
    {   LispObject fn = basic_elt(env, 0); // subf1
    v_502 = (*qfn2(fn))(fn, v_503, v_502);
    }
    env = stack[-14];
    {   LispObject fn = basic_elt(env, 28); // multsq
    v_503 = (*qfn2(fn))(fn, stack[0], v_502);
    }
    env = stack[-14];
    v_502 = stack[-3];
    {   LispObject fn = basic_elt(env, 29); // addsq
    v_502 = (*qfn2(fn))(fn, v_503, v_502);
    }
    env = stack[-14];
    stack[-3] = v_502;
    v_502 = stack[-2];
    if (!car_legal(v_502)) v_502 = cdrerror(v_502); else
    v_502 = cdr(v_502);
    stack[-2] = v_502;
    goto v_417;
v_416:
    goto v_88;
v_90:
    v_502 = stack[-1];
    v_502 = ncons(v_502);
    env = stack[-14];
    {   LispObject fn = basic_elt(env, 31); // simprecip
    v_502 = (*qfn1(fn))(fn, v_502);
    }
    env = stack[-14];
    stack[-7] = v_502;
v_91:
    v_502 = stack[-5];
    if (!car_legal(v_502)) v_503 = carerror(v_502); else
    v_503 = car(v_502);
    v_502 = stack[-4];
    v_502 = cons(v_503, v_502);
    env = stack[-14];
    stack[-4] = v_502;
    v_502 = stack[-5];
    if (!car_legal(v_502)) v_502 = cdrerror(v_502); else
    v_502 = cdr(v_502);
    stack[-5] = v_502;
    v_502 = stack[-5];
    if (v_502 == nil) goto v_456;
    v_502 = stack[-5];
    if (!car_legal(v_502)) v_502 = carerror(v_502); else
    v_502 = car(v_502);
    if (!car_legal(v_502)) v_502 = carerror(v_502); else
    v_502 = car(v_502);
    if (!car_legal(v_502)) v_503 = cdrerror(v_502); else
    v_503 = cdr(v_502);
    v_502 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_502 = static_cast<LispObject>(lessp2(v_503, v_502));
    v_502 = v_502 ? lisp_true : nil;
    env = stack[-14];
    if (v_502 == nil) goto v_456;
    goto v_91;
v_456:
v_92:
    v_502 = stack[-4];
    if (!car_legal(v_502)) v_502 = carerror(v_502); else
    v_502 = car(v_502);
    if (!car_legal(v_502)) v_502 = carerror(v_502); else
    v_502 = car(v_502);
    if (!car_legal(v_502)) v_502 = cdrerror(v_502); else
    v_502 = cdr(v_502);
    v_502 = negate(v_502);
    env = stack[-14];
    stack[-10] = v_502;
    stack[0] = stack[-7];
    v_503 = stack[-10];
    v_502 = stack[-13];
    v_502 = difference2(v_503, v_502);
    env = stack[-14];
    {   LispObject fn = basic_elt(env, 26); // exptsq
    v_502 = (*qfn2(fn))(fn, stack[0], v_502);
    }
    env = stack[-14];
    {   LispObject fn = basic_elt(env, 27); // subs2
    v_503 = (*qfn1(fn))(fn, v_502);
    }
    env = stack[-14];
    v_502 = stack[-8];
    {   LispObject fn = basic_elt(env, 28); // multsq
    v_502 = (*qfn2(fn))(fn, v_503, v_502);
    }
    env = stack[-14];
    stack[-8] = v_502;
    v_502 = stack[-10];
    stack[-13] = v_502;
    stack[0] = stack[-8];
    v_502 = stack[-4];
    if (!car_legal(v_502)) v_502 = carerror(v_502); else
    v_502 = car(v_502);
    if (!car_legal(v_502)) v_503 = cdrerror(v_502); else
    v_503 = cdr(v_502);
    v_502 = stack[-11];
    {   LispObject fn = basic_elt(env, 0); // subf1
    v_502 = (*qfn2(fn))(fn, v_503, v_502);
    }
    env = stack[-14];
    {   LispObject fn = basic_elt(env, 28); // multsq
    v_503 = (*qfn2(fn))(fn, stack[0], v_502);
    }
    env = stack[-14];
    v_502 = stack[-3];
    {   LispObject fn = basic_elt(env, 29); // addsq
    v_502 = (*qfn2(fn))(fn, v_503, v_502);
    }
    env = stack[-14];
    stack[-3] = v_502;
    v_502 = stack[-4];
    if (!car_legal(v_502)) v_502 = cdrerror(v_502); else
    v_502 = cdr(v_502);
    stack[-4] = v_502;
    v_502 = stack[-4];
    if (v_502 == nil) goto v_494;
    goto v_92;
v_494:
    v_502 = stack[-5];
    if (v_502 == nil) goto v_497;
    goto v_87;
v_497:
    goto v_88;
    v_502 = nil;
v_83:
    ;}  // end of a binding scope
    goto v_6;
    v_502 = nil;
v_6:
    return onevalue(v_502);
}



// Code for cl_rename!-vars1

static LispObject CC_cl_renameKvars1(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_364, v_365, v_366, v_367;
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
    stack[0] = v_2;
// end of prologue
    stack[-3] = nil;
    v_364 = stack[0];
    if (!consp(v_364)) goto v_14;
    else goto v_15;
v_14:
    v_364 = stack[0];
    goto v_13;
v_15:
    v_364 = stack[0];
    if (!car_legal(v_364)) v_364 = carerror(v_364); else
    v_364 = car(v_364);
    goto v_13;
    v_364 = nil;
v_13:
    stack[-5] = v_364;
    v_365 = stack[-5];
    v_364 = basic_elt(env, 1); // or
    if (v_365 == v_364) goto v_36;
    else goto v_37;
v_36:
    v_364 = lisp_true;
    goto v_35;
v_37:
    v_365 = stack[-5];
    v_364 = basic_elt(env, 2); // and
    v_364 = (v_365 == v_364 ? lisp_true : nil);
    goto v_35;
    v_364 = nil;
v_35:
    if (v_364 == nil) goto v_33;
    v_364 = lisp_true;
    goto v_31;
v_33:
    v_365 = stack[-5];
    v_364 = basic_elt(env, 3); // not
    v_364 = (v_365 == v_364 ? lisp_true : nil);
    goto v_31;
    v_364 = nil;
v_31:
    if (v_364 == nil) goto v_29;
    v_364 = lisp_true;
    goto v_27;
v_29:
    v_365 = stack[-5];
    v_364 = basic_elt(env, 4); // impl
    if (v_365 == v_364) goto v_57;
    else goto v_58;
v_57:
    v_364 = lisp_true;
    goto v_56;
v_58:
    v_365 = stack[-5];
    v_364 = basic_elt(env, 5); // repl
    if (v_365 == v_364) goto v_66;
    else goto v_67;
v_66:
    v_364 = lisp_true;
    goto v_65;
v_67:
    v_365 = stack[-5];
    v_364 = basic_elt(env, 6); // equiv
    v_364 = (v_365 == v_364 ? lisp_true : nil);
    goto v_65;
    v_364 = nil;
v_65:
    goto v_56;
    v_364 = nil;
v_56:
    goto v_27;
    v_364 = nil;
v_27:
    if (v_364 == nil) goto v_25;
    v_364 = stack[0];
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    stack[0] = v_364;
v_79:
    v_364 = stack[0];
    if (v_364 == nil) goto v_84;
    else goto v_85;
v_84:
    goto v_78;
v_85:
    v_364 = stack[0];
    if (!car_legal(v_364)) v_364 = carerror(v_364); else
    v_364 = car(v_364);
    v_365 = v_364;
    v_364 = stack[-4];
    {   LispObject fn = basic_elt(env, 0); // cl_rename!-vars1
    v_364 = (*qfn2(fn))(fn, v_365, v_364);
    }
    env = stack[-7];
    v_365 = v_364;
    v_364 = v_365;
    if (!car_legal(v_364)) v_364 = carerror(v_364); else
    v_364 = car(v_364);
    stack[-1] = v_364;
    v_364 = v_365;
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    stack[-4] = v_364;
    v_365 = stack[-1];
    v_364 = stack[-3];
    v_364 = cons(v_365, v_364);
    env = stack[-7];
    stack[-3] = v_364;
    v_364 = stack[0];
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    stack[0] = v_364;
    goto v_79;
v_78:
    v_365 = stack[-5];
    v_364 = stack[-3];
    v_366 = Lnreverse(nil, v_364);
    v_364 = stack[-4];
    return acons(v_365, v_366, v_364);
v_25:
    v_365 = stack[-5];
    v_364 = basic_elt(env, 7); // ex
    if (v_365 == v_364) goto v_119;
    else goto v_120;
v_119:
    v_364 = lisp_true;
    goto v_118;
v_120:
    v_365 = stack[-5];
    v_364 = basic_elt(env, 8); // all
    v_364 = (v_365 == v_364 ? lisp_true : nil);
    goto v_118;
    v_364 = nil;
v_118:
    if (v_364 == nil) goto v_116;
    v_364 = stack[0];
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    if (!car_legal(v_364)) v_365 = carerror(v_364); else
    v_365 = car(v_364);
    v_364 = stack[-4];
    {   LispObject fn = basic_elt(env, 0); // cl_rename!-vars1
    v_364 = (*qfn2(fn))(fn, v_365, v_364);
    }
    env = stack[-7];
    v_365 = v_364;
    v_364 = v_365;
    if (!car_legal(v_364)) v_364 = carerror(v_364); else
    v_364 = car(v_364);
    stack[-1] = v_364;
    v_364 = v_365;
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    stack[-4] = v_364;
    v_364 = stack[0];
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    if (!car_legal(v_364)) v_365 = carerror(v_364); else
    v_365 = car(v_364);
    v_364 = stack[-4];
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    v_364 = Lassoc(nil, v_365, v_364);
    stack[-3] = v_364;
    v_364 = stack[-3];
    if (v_364 == nil) goto v_152;
    v_364 = stack[-3];
    if (!car_legal(v_364)) v_365 = cdrerror(v_364); else
    v_365 = cdr(v_364);
    v_364 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_364 = Leqn_2(nil, v_365, v_364);
    env = stack[-7];
    if (v_364 == nil) goto v_157;
    v_365 = stack[-3];
    v_364 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 12); // setcdr
    v_364 = (*qfn2(fn))(fn, v_365, v_364);
    }
    env = stack[-7];
    v_366 = stack[-5];
    v_364 = stack[0];
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    if (!car_legal(v_364)) v_365 = carerror(v_364); else
    v_365 = car(v_364);
    v_364 = stack[-1];
    v_365 = list3(v_366, v_365, v_364);
    v_364 = stack[-4];
    return cons(v_365, v_364);
v_157:
v_175:
    v_364 = stack[-3];
    if (!car_legal(v_364)) v_365 = carerror(v_364); else
    v_365 = car(v_364);
    v_364 = stack[-3];
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    {   LispObject fn = basic_elt(env, 13); // mkid
    v_364 = (*qfn2(fn))(fn, v_365, v_364);
    }
    env = stack[-7];
    stack[-2] = v_364;
    stack[0] = stack[-3];
    v_364 = stack[-3];
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    v_364 = add1(v_364);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 12); // setcdr
    v_364 = (*qfn2(fn))(fn, stack[0], v_364);
    }
    env = stack[-7];
    v_365 = stack[-2];
    v_364 = stack[-4];
    if (!car_legal(v_364)) v_364 = carerror(v_364); else
    v_364 = car(v_364);
    v_364 = Lmemq(nil, v_365, v_364);
    if (v_364 == nil) goto v_190;
    else goto v_188;
v_190:
    v_364 = stack[-2];
    if (!symbolp(v_364)) v_364 = nil;
    else { v_364 = qfastgets(v_364);
           if (v_364 != nil) { v_364 = elt(v_364, 4); // avalue
#ifdef RECORD_GET
             if (v_364 != SPID_NOPROP)
                record_get(elt(fastget_names, 4), 1);
             else record_get(elt(fastget_names, 4), 0),
                v_364 = nil; }
           else record_get(elt(fastget_names, 4), 0); }
#else
             if (v_364 == SPID_NOPROP) v_364 = nil; }}
#endif
    if (v_364 == nil) goto v_195;
    else goto v_188;
v_195:
    goto v_189;
v_188:
    goto v_175;
v_189:
    stack[0] = stack[-4];
    v_365 = stack[-2];
    v_364 = stack[-4];
    if (!car_legal(v_364)) v_364 = carerror(v_364); else
    v_364 = car(v_364);
    v_364 = cons(v_365, v_364);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 14); // setcar
    v_364 = (*qfn2(fn))(fn, stack[0], v_364);
    }
    env = stack[-7];
    stack[0] = basic_elt(env, 9); // rl_varsubstat
    v_365 = stack[-2];
    v_364 = stack[-3];
    if (!car_legal(v_364)) v_364 = carerror(v_364); else
    v_364 = car(v_364);
    v_364 = list2(v_365, v_364);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 15); // cl_apply2ats1
    v_364 = (*qfn3(fn))(fn, stack[-1], stack[0], v_364);
    }
    env = stack[-7];
    stack[-1] = v_364;
    v_366 = stack[-5];
    v_365 = stack[-2];
    v_364 = stack[-1];
    v_365 = list3(v_366, v_365, v_364);
    v_364 = stack[-4];
    return cons(v_365, v_364);
v_152:
    v_366 = stack[-5];
    v_364 = stack[0];
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    if (!car_legal(v_364)) v_365 = carerror(v_364); else
    v_365 = car(v_364);
    v_364 = stack[-1];
    v_365 = list3(v_366, v_365, v_364);
    v_364 = stack[-4];
    return cons(v_365, v_364);
v_116:
    v_365 = stack[-5];
    v_364 = basic_elt(env, 10); // bex
    if (v_365 == v_364) goto v_232;
    else goto v_233;
v_232:
    v_364 = lisp_true;
    goto v_231;
v_233:
    v_365 = stack[-5];
    v_364 = basic_elt(env, 11); // ball
    v_364 = (v_365 == v_364 ? lisp_true : nil);
    goto v_231;
    v_364 = nil;
v_231:
    if (v_364 == nil) goto v_229;
    v_364 = stack[0];
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    if (!car_legal(v_364)) v_365 = carerror(v_364); else
    v_365 = car(v_364);
    v_364 = stack[-4];
    {   LispObject fn = basic_elt(env, 0); // cl_rename!-vars1
    v_364 = (*qfn2(fn))(fn, v_365, v_364);
    }
    env = stack[-7];
    v_365 = v_364;
    v_364 = v_365;
    if (!car_legal(v_364)) v_364 = carerror(v_364); else
    v_364 = car(v_364);
    stack[-1] = v_364;
    v_364 = v_365;
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    stack[-4] = v_364;
    v_364 = stack[0];
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    if (!car_legal(v_364)) v_365 = carerror(v_364); else
    v_365 = car(v_364);
    v_364 = stack[-4];
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    v_364 = Lassoc(nil, v_365, v_364);
    stack[-3] = v_364;
    v_364 = stack[-3];
    if (v_364 == nil) goto v_265;
    v_364 = stack[-3];
    if (!car_legal(v_364)) v_365 = cdrerror(v_364); else
    v_365 = cdr(v_364);
    v_364 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_364 = Leqn_2(nil, v_365, v_364);
    env = stack[-7];
    if (v_364 == nil) goto v_270;
    v_365 = stack[-3];
    v_364 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 12); // setcdr
    v_364 = (*qfn2(fn))(fn, v_365, v_364);
    }
    env = stack[-7];
    v_367 = stack[-5];
    v_364 = stack[0];
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    if (!car_legal(v_364)) v_366 = carerror(v_364); else
    v_366 = car(v_364);
    v_365 = stack[-1];
    v_364 = stack[0];
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    if (!car_legal(v_364)) v_364 = carerror(v_364); else
    v_364 = car(v_364);
    v_365 = list4(v_367, v_366, v_365, v_364);
    v_364 = stack[-4];
    return cons(v_365, v_364);
v_270:
v_293:
    v_364 = stack[-3];
    if (!car_legal(v_364)) v_365 = carerror(v_364); else
    v_365 = car(v_364);
    v_364 = stack[-3];
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    {   LispObject fn = basic_elt(env, 13); // mkid
    v_364 = (*qfn2(fn))(fn, v_365, v_364);
    }
    env = stack[-7];
    stack[-2] = v_364;
    stack[-6] = stack[-3];
    v_364 = stack[-3];
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    v_364 = add1(v_364);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 12); // setcdr
    v_364 = (*qfn2(fn))(fn, stack[-6], v_364);
    }
    env = stack[-7];
    v_365 = stack[-2];
    v_364 = stack[-4];
    if (!car_legal(v_364)) v_364 = carerror(v_364); else
    v_364 = car(v_364);
    v_364 = Lmemq(nil, v_365, v_364);
    if (v_364 == nil) goto v_308;
    else goto v_306;
v_308:
    v_364 = stack[-2];
    if (!symbolp(v_364)) v_364 = nil;
    else { v_364 = qfastgets(v_364);
           if (v_364 != nil) { v_364 = elt(v_364, 4); // avalue
#ifdef RECORD_GET
             if (v_364 != SPID_NOPROP)
                record_get(elt(fastget_names, 4), 1);
             else record_get(elt(fastget_names, 4), 0),
                v_364 = nil; }
           else record_get(elt(fastget_names, 4), 0); }
#else
             if (v_364 == SPID_NOPROP) v_364 = nil; }}
#endif
    if (v_364 == nil) goto v_313;
    else goto v_306;
v_313:
    goto v_307;
v_306:
    goto v_293;
v_307:
    stack[-6] = stack[-4];
    v_365 = stack[-2];
    v_364 = stack[-4];
    if (!car_legal(v_364)) v_364 = carerror(v_364); else
    v_364 = car(v_364);
    v_364 = cons(v_365, v_364);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 14); // setcar
    v_364 = (*qfn2(fn))(fn, stack[-6], v_364);
    }
    env = stack[-7];
    v_364 = stack[0];
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    if (!car_legal(v_364)) stack[-6] = carerror(v_364); else
    stack[-6] = car(v_364);
    stack[0] = basic_elt(env, 9); // rl_varsubstat
    v_365 = stack[-2];
    v_364 = stack[-3];
    if (!car_legal(v_364)) v_364 = carerror(v_364); else
    v_364 = car(v_364);
    v_364 = list2(v_365, v_364);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 15); // cl_apply2ats1
    v_364 = (*qfn3(fn))(fn, stack[-6], stack[0], v_364);
    }
    env = stack[-7];
    stack[-6] = v_364;
    stack[0] = basic_elt(env, 9); // rl_varsubstat
    v_365 = stack[-2];
    v_364 = stack[-3];
    if (!car_legal(v_364)) v_364 = carerror(v_364); else
    v_364 = car(v_364);
    v_364 = list2(v_365, v_364);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 15); // cl_apply2ats1
    v_364 = (*qfn3(fn))(fn, stack[-1], stack[0], v_364);
    }
    env = stack[-7];
    stack[-1] = v_364;
    v_367 = stack[-5];
    v_366 = stack[-2];
    v_365 = stack[-1];
    v_364 = stack[-6];
    v_365 = list4(v_367, v_366, v_365, v_364);
    v_364 = stack[-4];
    return cons(v_365, v_364);
v_265:
    v_367 = stack[-5];
    v_364 = stack[0];
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    if (!car_legal(v_364)) v_366 = carerror(v_364); else
    v_366 = car(v_364);
    v_365 = stack[-1];
    v_364 = stack[0];
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    if (!car_legal(v_364)) v_364 = cdrerror(v_364); else
    v_364 = cdr(v_364);
    if (!car_legal(v_364)) v_364 = carerror(v_364); else
    v_364 = car(v_364);
    v_365 = list4(v_367, v_366, v_365, v_364);
    v_364 = stack[-4];
    return cons(v_365, v_364);
v_229:
    v_365 = stack[0];
    v_364 = stack[-4];
    return cons(v_365, v_364);
    return onevalue(v_364);
}



// Code for bc_2sq

static LispObject CC_bc_2sq(LispObject env,
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



// Code for termorder

static LispObject CC_termorder(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    v_56 = stack[-1];
    if (v_56 == nil) goto v_11;
    else goto v_12;
v_11:
    goto v_10;
v_12:
    v_56 = stack[-1];
    v_56 = static_cast<LispObject>(zerop(v_56));
    v_56 = v_56 ? lisp_true : nil;
    env = stack[-3];
    if (v_56 == nil) goto v_16;
    v_56 = stack[0];
    v_56 = static_cast<LispObject>(zerop(v_56));
    v_56 = v_56 ? lisp_true : nil;
    env = stack[-3];
    if (v_56 == nil) goto v_16;
    goto v_10;
v_16:
    v_56 = stack[-1];
    v_56 = static_cast<LispObject>(zerop(v_56));
    v_56 = v_56 ? lisp_true : nil;
    env = stack[-3];
    if (v_56 == nil) goto v_25;
    goto v_10;
v_25:
    v_56 = stack[0];
    v_56 = static_cast<LispObject>(zerop(v_56));
    v_56 = v_56 ? lisp_true : nil;
    env = stack[-3];
    if (v_56 == nil) goto v_30;
    goto v_10;
v_30:
v_10:
    v_56 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // listsum
    v_56 = (*qfn1(fn))(fn, v_56);
    }
    env = stack[-3];
    stack[-2] = v_56;
    v_56 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // listsum
    v_56 = (*qfn1(fn))(fn, v_56);
    }
    env = stack[-3];
    v_58 = v_56;
    v_57 = stack[-2];
    v_56 = v_58;
    if (equal(v_57, v_56)) goto v_40;
    else goto v_41;
v_40:
    v_57 = stack[-1];
    v_56 = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // termorder1
        return (*qfn2(fn))(fn, v_57, v_56);
    }
v_41:
    v_56 = stack[-2];
    v_57 = v_58;
    v_56 = static_cast<LispObject>(lessp2(v_56, v_57));
    v_56 = v_56 ? lisp_true : nil;
    if (v_56 == nil) goto v_48;
    v_56 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    goto v_39;
v_48:
    v_56 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_39;
    v_56 = nil;
v_39:
    return onevalue(v_56);
}



// Code for stats_getargs

static LispObject CC_stats_getargs(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil);
    stack_popper stack_popper_var(2);
// end of prologue
    {   LispObject fn = basic_elt(env, 1); // mathml
    v_16 = (*qfn0(fn))(fn);
    }
    env = stack[-1];
    v_17 = v_16;
    v_16 = v_17;
    if (v_16 == nil) goto v_11;
    stack[0] = v_17;
    {   LispObject fn = basic_elt(env, 0); // stats_getargs
    v_16 = (*qfn0(fn))(fn);
    }
    {
        LispObject v_19 = stack[0];
        return cons(v_19, v_16);
    }
v_11:
    v_16 = nil;
    return onevalue(v_16);
}



// Code for convchk

static LispObject CC_convchk(LispObject env,
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
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_54 = v_2;
// end of prologue
    v_55 = qvalue(basic_elt(env, 1)); // !*!*roundbf
    if (v_55 == nil) goto v_7;
    v_55 = v_54;
    if (!consp(v_55)) goto v_11;
    else goto v_12;
v_11:
    v_55 = v_54;
    v_55 = Lfloatp(nil, v_55);
    env = stack[0];
    if (v_55 == nil) goto v_17;
    {
        LispObject fn = basic_elt(env, 3); // fl2bf
        return (*qfn1(fn))(fn, v_54);
    }
v_17:
    v_55 = v_54;
    if (!consp(v_55)) goto v_28;
    goto v_26;
v_28:
    v_55 = v_54;
    v_55 = integerp(v_55);
    if (v_55 == nil) goto v_32;
    v_56 = basic_elt(env, 2); // !:rd!:
    v_55 = v_54;
    v_54 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_54 = list2star(v_56, v_55, v_54);
    env = stack[0];
    goto v_26;
v_32:
    {   LispObject fn = basic_elt(env, 4); // read!:num
    v_54 = (*qfn1(fn))(fn, v_54);
    }
    env = stack[0];
    goto v_26;
    v_54 = nil;
v_26:
    {
        LispObject fn = basic_elt(env, 5); // normbf
        return (*qfn1(fn))(fn, v_54);
    }
    v_54 = nil;
    goto v_10;
v_12:
    goto v_10;
    v_54 = nil;
v_10:
    goto v_5;
v_7:
    v_55 = v_54;
    if (!consp(v_55)) goto v_46;
    else goto v_47;
v_46:
    goto v_5;
v_47:
    {
        LispObject fn = basic_elt(env, 6); // bf2flck
        return (*qfn1(fn))(fn, v_54);
    }
    v_54 = nil;
v_5:
    return onevalue(v_54);
}



// Code for bcquot

static LispObject CC_bcquot(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    v_37 = qvalue(basic_elt(env, 1)); // !*grmod!*
    if (v_37 == nil) goto v_8;
    v_37 = stack[0];
    v_37 = Lmodular_reciprocal(nil, v_37);
    env = stack[-2];
    v_37 = times2(stack[-1], v_37);
    env = stack[-2];
    {
        LispObject fn = basic_elt(env, 4); // bcfi
        return (*qfn1(fn))(fn, v_37);
    }
v_8:
    v_37 = qvalue(basic_elt(env, 2)); // !*vdpinteger
    if (v_37 == nil) goto v_16;
    v_39 = stack[-1];
    v_38 = stack[0];
    v_37 = basic_elt(env, 3); // quotientx
    {   LispObject fn = basic_elt(env, 5); // bcint2op
    v_37 = (*qfn3(fn))(fn, v_39, v_38, v_37);
    }
    env = stack[-2];
    if (v_37 == nil) goto v_20;
    else goto v_19;
v_20:
    v_37 = stack[-1];
    if (!car_legal(v_37)) v_38 = carerror(v_37); else
    v_38 = car(v_37);
    v_37 = stack[0];
    if (!car_legal(v_37)) v_37 = carerror(v_37); else
    v_37 = car(v_37);
    {   LispObject fn = basic_elt(env, 6); // quotfx
    v_38 = (*qfn2(fn))(fn, v_38, v_37);
    }
    v_37 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_38, v_37);
v_19:
    goto v_6;
v_16:
    v_38 = stack[-1];
    v_37 = stack[0];
    {
        LispObject fn = basic_elt(env, 7); // quotsq
        return (*qfn2(fn))(fn, v_38, v_37);
    }
    v_37 = nil;
v_6:
    return onevalue(v_37);
}



// Code for vdpputprop

static LispObject CC_vdpputprop(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_87, v_88, v_89, v_90;
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
    stack[-5] = nil;
    v_87 = stack[-4];
    v_87 = Lconsp(nil, v_87);
    env = stack[-6];
    if (v_87 == nil) goto v_16;
    else goto v_17;
v_16:
    v_87 = lisp_true;
    goto v_15;
v_17:
    v_87 = stack[-4];
    if (!car_legal(v_87)) v_87 = cdrerror(v_87); else
    v_87 = cdr(v_87);
    stack[-5] = v_87;
    v_87 = Lconsp(nil, v_87);
    env = stack[-6];
    if (v_87 == nil) goto v_25;
    else goto v_26;
v_25:
    v_87 = lisp_true;
    goto v_24;
v_26:
    v_87 = stack[-5];
    if (!car_legal(v_87)) v_87 = cdrerror(v_87); else
    v_87 = cdr(v_87);
    stack[-5] = v_87;
    v_87 = Lconsp(nil, v_87);
    env = stack[-6];
    if (v_87 == nil) goto v_35;
    else goto v_36;
v_35:
    v_87 = lisp_true;
    goto v_34;
v_36:
    v_87 = stack[-5];
    if (!car_legal(v_87)) v_87 = cdrerror(v_87); else
    v_87 = cdr(v_87);
    stack[-5] = v_87;
    v_87 = Lconsp(nil, v_87);
    env = stack[-6];
    if (v_87 == nil) goto v_45;
    else goto v_46;
v_45:
    v_87 = lisp_true;
    goto v_44;
v_46:
    v_87 = stack[-5];
    if (!car_legal(v_87)) v_87 = cdrerror(v_87); else
    v_87 = cdr(v_87);
    stack[-5] = v_87;
    v_87 = Lconsp(nil, v_87);
    env = stack[-6];
    v_87 = (v_87 == nil ? lisp_true : nil);
    goto v_44;
    v_87 = nil;
v_44:
    goto v_34;
    v_87 = nil;
v_34:
    goto v_24;
    v_87 = nil;
v_24:
    goto v_15;
    v_87 = nil;
v_15:
    if (v_87 == nil) goto v_13;
    stack[-1] = basic_elt(env, 1); // dipoly
    stack[0] = static_cast<LispObject>(96)+TAG_FIXNUM; // 6
    v_90 = basic_elt(env, 2); // "vdpputprop given a non-vdp as 1st parameter"
    v_89 = stack[-4];
    v_88 = stack[-3];
    v_87 = stack[-2];
    v_87 = list4(v_90, v_89, v_88, v_87);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 3); // rerror
    v_87 = (*qfn3(fn))(fn, stack[-1], stack[0], v_87);
    }
    env = stack[-6];
    goto v_11;
v_13:
v_11:
    v_88 = stack[-3];
    v_87 = stack[-5];
    if (!car_legal(v_87)) v_87 = carerror(v_87); else
    v_87 = car(v_87);
    v_87 = Lassoc(nil, v_88, v_87);
    v_88 = v_87;
    v_87 = v_88;
    if (v_87 == nil) goto v_72;
    v_87 = stack[-2];
    if (!car_legal(v_88)) rplacd_fails(v_88);
    setcdr(v_88, v_87);
    goto v_70;
v_72:
    stack[0] = stack[-5];
    v_89 = stack[-3];
    v_88 = stack[-2];
    v_87 = stack[-5];
    if (!car_legal(v_87)) v_87 = carerror(v_87); else
    v_87 = car(v_87);
    v_87 = acons(v_89, v_88, v_87);
    if (!car_legal(stack[0])) rplaca_fails(stack[0]);
    setcar(stack[0], v_87);
    goto v_70;
v_70:
    v_87 = stack[-4];
    return onevalue(v_87);
}



// Code for add2resultbuf

static LispObject CC_add2resultbuf(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_104, v_105, v_106;
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
    v_104 = qvalue(basic_elt(env, 1)); // !*libreduce_active
    if (v_104 == nil) goto v_10;
    {   LispObject fn = basic_elt(env, 13); // lr_result
    v_104 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
    v_105 = qvalue(basic_elt(env, 2)); // semic!*
    v_104 = basic_elt(env, 3); // !$
    if (v_105 == v_104) goto v_16;
    v_105 = stack[-1];
    v_104 = stack[0];
    {   LispObject fn = basic_elt(env, 14); // lr_printer
    v_104 = (*qfn2(fn))(fn, v_105, v_104);
    }
    env = stack[-2];
    goto v_14;
v_16:
v_14:
    {   LispObject fn = basic_elt(env, 15); // lr_statcounter
    v_104 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
    v_104 = qvalue(basic_elt(env, 4)); // statcounter
    v_104 = Lprinc(nil, v_104);
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 16); // lr_mode
    v_104 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
    v_105 = qvalue(basic_elt(env, 5)); // !*mode
    v_104 = basic_elt(env, 6); // symbolic
    if (v_105 == v_104) goto v_29;
    else goto v_30;
v_29:
    v_104 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_28;
v_30:
    v_104 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_28;
    v_104 = nil;
v_28:
    v_104 = Lprinc(nil, v_104);
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 17); // lr_posttext
    v_104 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
    v_104 = Lterpri(nil);
    env = stack[-2];
    goto v_8;
v_10:
v_8:
    v_105 = stack[0];
    v_104 = basic_elt(env, 6); // symbolic
    if (v_105 == v_104) goto v_45;
    else goto v_46;
v_45:
    v_104 = lisp_true;
    goto v_44;
v_46:
    v_104 = stack[-1];
    if (v_104 == nil) goto v_58;
    else goto v_59;
v_58:
    v_104 = qvalue(basic_elt(env, 7)); // !*reduce4
    if (v_104 == nil) goto v_63;
    else goto v_64;
v_63:
    v_104 = lisp_true;
    goto v_62;
v_64:
    v_105 = stack[0];
    v_104 = basic_elt(env, 8); // empty_list
    v_104 = (v_105 == v_104 ? lisp_true : nil);
    v_104 = (v_104 == nil ? lisp_true : nil);
    goto v_62;
    v_104 = nil;
v_62:
    goto v_57;
v_59:
    v_104 = nil;
    goto v_57;
    v_104 = nil;
v_57:
    if (v_104 == nil) goto v_55;
    v_104 = lisp_true;
    goto v_53;
v_55:
    v_104 = qvalue(basic_elt(env, 9)); // !*nosave!*
    goto v_53;
    v_104 = nil;
v_53:
    goto v_44;
    v_104 = nil;
v_44:
    if (v_104 == nil) goto v_42;
    v_104 = nil;
    goto v_6;
v_42:
    v_104 = qvalue(basic_elt(env, 7)); // !*reduce4
    if (v_104 == nil) goto v_84;
    v_106 = basic_elt(env, 10); // ws
    v_105 = stack[-1];
    v_104 = stack[0];
    {   LispObject fn = basic_elt(env, 18); // putobject
    v_104 = (*qfn3(fn))(fn, v_106, v_105, v_104);
    }
    env = stack[-2];
    goto v_82;
v_84:
    v_104 = nil;
    v_104 = ncons(v_104);
    env = stack[-2];
    setvalue(basic_elt(env, 11), v_104); // alglist!*
    v_104 = stack[-1];
    setvalue(basic_elt(env, 10), v_104); // ws
    goto v_82;
v_82:
    {   LispObject fn = basic_elt(env, 19); // terminalp
    v_104 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
    if (v_104 == nil) goto v_98;
    v_106 = qvalue(basic_elt(env, 4)); // statcounter
    v_105 = stack[-1];
    v_104 = qvalue(basic_elt(env, 12)); // resultbuflis!*
    v_104 = acons(v_106, v_105, v_104);
    env = stack[-2];
    setvalue(basic_elt(env, 12), v_104); // resultbuflis!*
    goto v_96;
v_98:
v_96:
    v_104 = nil;
v_6:
    return onevalue(v_104);
}



// Code for groeb!=better

static LispObject CC_groebMbetter(LispObject env,
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
    v_37 = stack[-1];
    if (!car_legal(v_37)) v_37 = cdrerror(v_37); else
    v_37 = cdr(v_37);
    if (!car_legal(v_37)) v_38 = carerror(v_37); else
    v_38 = car(v_37);
    v_37 = stack[0];
    if (!car_legal(v_37)) v_37 = cdrerror(v_37); else
    v_37 = cdr(v_37);
    if (!car_legal(v_37)) v_37 = carerror(v_37); else
    v_37 = car(v_37);
    v_37 = static_cast<LispObject>(lessp2(v_38, v_37));
    v_37 = v_37 ? lisp_true : nil;
    env = stack[-2];
    if (v_37 == nil) goto v_8;
    v_37 = lisp_true;
    goto v_6;
v_8:
    v_37 = stack[-1];
    if (!car_legal(v_37)) v_37 = cdrerror(v_37); else
    v_37 = cdr(v_37);
    if (!car_legal(v_37)) v_38 = carerror(v_37); else
    v_38 = car(v_37);
    v_37 = stack[0];
    if (!car_legal(v_37)) v_37 = cdrerror(v_37); else
    v_37 = cdr(v_37);
    if (!car_legal(v_37)) v_37 = carerror(v_37); else
    v_37 = car(v_37);
    if (equal(v_38, v_37)) goto v_17;
    else goto v_18;
v_17:
    v_38 = stack[-1];
    v_37 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    {   LispObject fn = basic_elt(env, 1); // nth
    stack[-1] = (*qfn2(fn))(fn, v_38, v_37);
    }
    env = stack[-2];
    v_38 = stack[0];
    v_37 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    {   LispObject fn = basic_elt(env, 1); // nth
    v_37 = (*qfn2(fn))(fn, v_38, v_37);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 2); // mo_compare
    v_38 = (*qfn2(fn))(fn, stack[-1], v_37);
    }
    v_37 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
        return Lleq_2(nil, v_38, v_37);
v_18:
    v_37 = nil;
    goto v_6;
    v_37 = nil;
v_6:
    return onevalue(v_37);
}



// Code for ord2

static LispObject CC_ord2(LispObject env,
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
    v_20 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // ordp
    v_20 = (*qfn2(fn))(fn, v_21, v_20);
    }
    if (v_20 == nil) goto v_8;
    v_21 = stack[-1];
    v_20 = stack[0];
    return list2(v_21, v_20);
v_8:
    v_21 = stack[0];
    v_20 = stack[-1];
    return list2(v_21, v_20);
    v_20 = nil;
    return onevalue(v_20);
}



// Code for moduntag

static LispObject CC_moduntag(LispObject env,
                         LispObject v_2)
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
    v_35 = stack[0];
    v_34 = basic_elt(env, 1); // !:mod!:
    if (!consp(v_35)) goto v_11;
    v_35 = car(v_35);
    if (v_35 == v_34) goto v_10;
    else goto v_11;
v_10:
    v_35 = stack[-1];
    v_34 = stack[0];
    if (!car_legal(v_34)) v_34 = cdrerror(v_34); else
    v_34 = cdr(v_34);
    {
        LispObject fn = basic_elt(env, 2); // nreverse
        return (*qfn2(fn))(fn, v_35, v_34);
    }
v_11:
    v_34 = stack[0];
    if (!consp(v_34)) goto v_19;
    else goto v_20;
v_19:
    v_35 = stack[-1];
    v_34 = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // nreverse
        return (*qfn2(fn))(fn, v_35, v_34);
    }
v_20:
    v_34 = stack[0];
    if (!car_legal(v_34)) v_34 = carerror(v_34); else
    v_34 = car(v_34);
    {   LispObject fn = basic_elt(env, 0); // moduntag
    v_35 = (*qfn1(fn))(fn, v_34);
    }
    env = stack[-2];
    v_34 = stack[-1];
    v_34 = cons(v_35, v_34);
    env = stack[-2];
    stack[-1] = v_34;
    v_34 = stack[0];
    if (!car_legal(v_34)) v_34 = cdrerror(v_34); else
    v_34 = cdr(v_34);
    stack[0] = v_34;
    goto v_7;
    v_34 = nil;
    return onevalue(v_34);
}



// Code for mksq

static LispObject CC_mksq(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_216, v_217;
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
    stack[-2] = nil;
    stack[-1] = nil;
    v_216 = qvalue(basic_elt(env, 1)); // subfg!*
    if (v_216 == nil) goto v_16;
    else goto v_17;
v_16:
    goto v_11;
v_17:
    v_217 = stack[-4];
    v_216 = qvalue(basic_elt(env, 2)); // wtl!*
    v_216 = Lassoc(nil, v_217, v_216);
    stack[-2] = v_216;
    if (v_216 == nil) goto v_20;
    stack[0] = basic_elt(env, 3); // k!*
    v_217 = stack[-3];
    v_216 = stack[-2];
    if (!car_legal(v_216)) v_216 = cdrerror(v_216); else
    v_216 = cdr(v_216);
    v_216 = times2(v_217, v_216);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 0); // mksq
    v_216 = (*qfn2(fn))(fn, stack[0], v_216);
    }
    env = stack[-6];
    stack[-2] = v_216;
    if (!car_legal(v_216)) v_216 = carerror(v_216); else
    v_216 = car(v_216);
    if (v_216 == nil) goto v_25;
    else goto v_20;
v_25:
    v_216 = stack[-2];
    goto v_9;
v_20:
    v_216 = stack[-4];
    if (!consp(v_216)) goto v_35;
    goto v_12;
v_35:
    v_216 = qvalue(basic_elt(env, 4)); // !*nosubs
    if (v_216 == nil) goto v_41;
    else goto v_42;
v_41:
    v_216 = stack[-4];
    if (!symbolp(v_216)) v_216 = nil;
    else { v_216 = qfastgets(v_216);
           if (v_216 != nil) { v_216 = elt(v_216, 4); // avalue
#ifdef RECORD_GET
             if (v_216 != SPID_NOPROP)
                record_get(elt(fastget_names, 4), 1);
             else record_get(elt(fastget_names, 4), 0),
                v_216 = nil; }
           else record_get(elt(fastget_names, 4), 0); }
#else
             if (v_216 == SPID_NOPROP) v_216 = nil; }}
#endif
    stack[-1] = v_216;
    goto v_40;
v_42:
    v_216 = nil;
    goto v_40;
    v_216 = nil;
v_40:
    if (v_216 == nil) goto v_38;
    goto v_13;
v_38:
    v_216 = stack[-4];
    if (symbolp(v_216)) goto v_51;
    else goto v_52;
v_51:
    v_216 = stack[-4];
    v_217 = ncons(v_216);
    env = stack[-6];
    v_216 = basic_elt(env, 5); // used!*
    v_216 = Lflag(nil, v_217, v_216);
    env = stack[-6];
    goto v_50;
v_52:
v_50:
v_10:
    v_216 = qvalue(basic_elt(env, 4)); // !*nosubs
    if (v_216 == nil) goto v_62;
    else goto v_60;
v_62:
    v_217 = stack[-3];
    v_216 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_217 == v_216) goto v_60;
    goto v_61;
v_60:
    goto v_11;
v_61:
    v_217 = stack[-4];
    v_216 = qvalue(basic_elt(env, 6)); // asymplis!*
    v_216 = Lassoc(nil, v_217, v_216);
    stack[-1] = v_216;
    if (v_216 == nil) goto v_68;
    v_216 = stack[-1];
    if (!car_legal(v_216)) v_217 = cdrerror(v_216); else
    v_217 = cdr(v_216);
    v_216 = stack[-3];
    v_216 = static_cast<LispObject>(lesseq2(v_217, v_216));
    v_216 = v_216 ? lisp_true : nil;
    env = stack[-6];
    if (v_216 == nil) goto v_68;
    v_217 = nil;
    v_216 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_217, v_216);
v_68:
    v_217 = stack[-4];
    v_216 = qvalue(basic_elt(env, 7)); // powlis!*
    v_216 = Lassoc(nil, v_217, v_216);
    stack[-1] = v_216;
    if (v_216 == nil) goto v_84;
    else goto v_83;
v_84:
    v_216 = stack[-4];
    if (!consp(v_216)) goto v_92;
    v_216 = stack[-4];
    if (!car_legal(v_216)) v_217 = carerror(v_216); else
    v_217 = car(v_216);
    v_216 = basic_elt(env, 8); // (expt sqrt)
    v_216 = Lmemq(nil, v_217, v_216);
    if (v_216 == nil) goto v_96;
    else goto v_97;
v_96:
    v_216 = nil;
    goto v_95;
v_97:
    v_216 = stack[-4];
    if (!car_legal(v_216)) v_216 = cdrerror(v_216); else
    v_216 = cdr(v_216);
    if (!car_legal(v_216)) v_217 = carerror(v_216); else
    v_217 = car(v_216);
    v_216 = qvalue(basic_elt(env, 7)); // powlis!*
    v_216 = Lassoc(nil, v_217, v_216);
    stack[-1] = v_216;
    goto v_95;
    v_216 = nil;
v_95:
    goto v_90;
v_92:
    v_216 = nil;
    goto v_90;
    v_216 = nil;
v_90:
    if (v_216 == nil) goto v_88;
    else goto v_83;
v_88:
    goto v_82;
v_83:
    v_217 = stack[-3];
    v_216 = stack[-1];
    if (!car_legal(v_216)) v_216 = cdrerror(v_216); else
    v_216 = cdr(v_216);
    if (!car_legal(v_216)) v_216 = carerror(v_216); else
    v_216 = car(v_216);
    v_217 = times2(v_217, v_216);
    env = stack[-6];
    v_216 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_216 = static_cast<LispObject>(lessp2(v_217, v_216));
    v_216 = v_216 ? lisp_true : nil;
    env = stack[-6];
    if (v_216 == nil) goto v_113;
    else goto v_82;
v_113:
    v_216 = lisp_true;
    setvalue(basic_elt(env, 9), v_216); // !*sub2
    goto v_59;
v_82:
v_59:
v_11:
    v_216 = stack[-5];
    if (v_216 == nil) goto v_124;
    else goto v_125;
v_124:
    v_216 = stack[-4];
    {   LispObject fn = basic_elt(env, 12); // fkern
    v_216 = (*qfn1(fn))(fn, v_216);
    }
    env = stack[-6];
    stack[-5] = v_216;
    goto v_123;
v_125:
v_123:
    v_217 = stack[-5];
    v_216 = stack[-3];
    {   LispObject fn = basic_elt(env, 13); // getpower
    v_217 = (*qfn2(fn))(fn, v_217, v_216);
    }
    env = stack[-6];
    v_216 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_216 = cons(v_217, v_216);
    env = stack[-6];
    v_217 = ncons(v_216);
    env = stack[-6];
    v_216 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_216 = cons(v_217, v_216);
    env = stack[-6];
    stack[-5] = v_216;
    v_216 = stack[-2];
    if (v_216 == nil) goto v_140;
    v_217 = stack[-2];
    v_216 = stack[-5];
    {
        LispObject fn = basic_elt(env, 14); // multsq
        return (*qfn2(fn))(fn, v_217, v_216);
    }
v_140:
    v_216 = stack[-5];
    goto v_138;
    v_216 = nil;
v_138:
    goto v_9;
v_12:
    v_216 = qvalue(basic_elt(env, 4)); // !*nosubs
    if (v_216 == nil) goto v_154;
    else goto v_155;
v_154:
    v_216 = stack[-4];
    if (!car_legal(v_216)) v_216 = carerror(v_216); else
    v_216 = car(v_216);
    if (!consp(v_216)) goto v_159;
    else goto v_160;
v_159:
    v_216 = stack[-4];
    if (!car_legal(v_216)) v_217 = carerror(v_216); else
    v_217 = car(v_216);
    v_216 = basic_elt(env, 10); // mksqsubfn
    v_216 = get(v_217, v_216);
    env = stack[-6];
    stack[-1] = v_216;
    if (v_216 == nil) goto v_168;
    else goto v_169;
v_168:
    v_216 = nil;
    goto v_167;
v_169:
    v_217 = stack[-1];
    v_216 = stack[-4];
    v_216 = Lapply1(nil, v_217, v_216);
    env = stack[-6];
    stack[-1] = v_216;
    goto v_167;
    v_216 = nil;
v_167:
    if (v_216 == nil) goto v_165;
    else goto v_164;
v_165:
    v_217 = stack[-4];
    v_216 = stack[-4];
    if (!car_legal(v_216)) v_216 = carerror(v_216); else
    v_216 = car(v_216);
    if (!symbolp(v_216)) v_216 = nil;
    else { v_216 = qfastgets(v_216);
           if (v_216 != nil) { v_216 = elt(v_216, 50); // kvalue
#ifdef RECORD_GET
             if (v_216 != SPID_NOPROP)
                record_get(elt(fastget_names, 50), 1);
             else record_get(elt(fastget_names, 50), 0),
                v_216 = nil; }
           else record_get(elt(fastget_names, 50), 0); }
#else
             if (v_216 == SPID_NOPROP) v_216 = nil; }}
#endif
    v_216 = Lassoc(nil, v_217, v_216);
    stack[-1] = v_216;
v_164:
    goto v_158;
v_160:
    v_216 = nil;
    goto v_158;
    v_216 = nil;
v_158:
    goto v_153;
v_155:
    v_216 = nil;
    goto v_153;
    v_216 = nil;
v_153:
    if (v_216 == nil) goto v_151;
    goto v_13;
v_151:
    stack[0] = basic_elt(env, 5); // used!*
    v_216 = stack[-4];
    {   LispObject fn = basic_elt(env, 12); // fkern
    v_216 = (*qfn1(fn))(fn, v_216);
    }
    env = stack[-6];
    stack[-5] = v_216;
    if (!car_legal(v_216)) v_216 = cdrerror(v_216); else
    v_216 = cdr(v_216);
    if (!car_legal(v_216)) v_216 = cdrerror(v_216); else
    v_216 = cdr(v_216);
    v_216 = Lmemq(nil, stack[0], v_216);
    if (v_216 == nil) goto v_191;
    else goto v_192;
v_191:
    v_217 = stack[-5];
    v_216 = basic_elt(env, 5); // used!*
    {   LispObject fn = basic_elt(env, 15); // aconc
    v_216 = (*qfn2(fn))(fn, v_217, v_216);
    }
    env = stack[-6];
    goto v_149;
v_192:
v_149:
    goto v_10;
v_13:
    v_216 = stack[-1];
    if (!car_legal(v_216)) v_216 = cdrerror(v_216); else
    v_216 = cdr(v_216);
    stack[-1] = v_216;
    v_216 = qvalue(basic_elt(env, 11)); // !*resubs
    if (v_216 == nil) goto v_206;
    else goto v_207;
v_206:
    v_216 = lisp_true;
    setvalue(basic_elt(env, 4), v_216); // !*nosubs
    goto v_205;
v_207:
v_205:
    v_216 = stack[-1];
    {   LispObject fn = basic_elt(env, 16); // simpcar
    v_216 = (*qfn1(fn))(fn, v_216);
    }
    env = stack[-6];
    stack[-5] = v_216;
    v_216 = nil;
    setvalue(basic_elt(env, 4), v_216); // !*nosubs
    v_217 = stack[-5];
    v_216 = stack[-3];
    {
        LispObject fn = basic_elt(env, 17); // exptsq
        return (*qfn2(fn))(fn, v_217, v_216);
    }
v_9:
    return onevalue(v_216);
}



// Code for rrdls

static LispObject CC_rrdls(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    push(nil, nil);
    stack_popper stack_popper_var(3);
// end of prologue
    stack[0] = nil;
v_8:
    {   LispObject fn = basic_elt(env, 7); // rread1
    v_58 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
    stack[-1] = v_58;
    v_59 = qvalue(basic_elt(env, 1)); // ttype!*
    v_58 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    if (v_59 == v_58) goto v_14;
    goto v_9;
v_14:
    v_59 = stack[-1];
    v_58 = basic_elt(env, 2); // !)
    if (v_59 == v_58) goto v_17;
    else goto v_18;
v_17:
    v_58 = stack[0];
    goto v_7;
v_18:
    v_59 = stack[-1];
    v_58 = basic_elt(env, 3); // !.
    if (v_59 == v_58) goto v_23;
    goto v_9;
v_23:
    {   LispObject fn = basic_elt(env, 7); // rread1
    v_58 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
    stack[-1] = v_58;
    {   LispObject fn = basic_elt(env, 8); // ptoken
    v_58 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
    v_60 = v_58;
    v_59 = qvalue(basic_elt(env, 1)); // ttype!*
    v_58 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    if (v_59 == v_58) goto v_35;
    v_58 = lisp_true;
    goto v_33;
v_35:
    v_59 = v_60;
    v_58 = basic_elt(env, 2); // !)
    v_58 = (v_59 == v_58 ? lisp_true : nil);
    v_58 = (v_58 == nil ? lisp_true : nil);
    goto v_33;
    v_58 = nil;
v_33:
    if (v_58 == nil) goto v_31;
    v_58 = basic_elt(env, 4); // " "
    setvalue(basic_elt(env, 5), v_58); // nxtsym!*
    v_59 = basic_elt(env, 6); // "Invalid S-expression"
    v_58 = nil;
    {   LispObject fn = basic_elt(env, 9); // symerr
    v_58 = (*qfn2(fn))(fn, v_59, v_58);
    }
    env = stack[-2];
    goto v_29;
v_31:
    v_59 = stack[0];
    v_58 = stack[-1];
        return Lnconc(nil, v_59, v_58);
v_29:
v_9:
    v_58 = stack[-1];
    v_58 = ncons(v_58);
    env = stack[-2];
    v_58 = Lnconc(nil, stack[0], v_58);
    env = stack[-2];
    stack[0] = v_58;
    goto v_8;
v_7:
    return onevalue(v_58);
}



// Code for read_namelist

static LispObject CC_read_namelist(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil);
    stack_popper stack_popper_var(2);
// end of prologue
    v_26 = qvalue(basic_elt(env, 1)); // cursym!*
    {   LispObject fn = basic_elt(env, 3); // valid_as_variable
    v_26 = (*qfn1(fn))(fn, v_26);
    }
    env = stack[-1];
    if (v_26 == nil) goto v_8;
    else goto v_9;
v_8:
    v_26 = nil;
    goto v_5;
v_9:
    {   LispObject fn = basic_elt(env, 4); // read_typed_name
    v_26 = (*qfn0(fn))(fn);
    }
    env = stack[-1];
    stack[0] = v_26;
    v_27 = qvalue(basic_elt(env, 1)); // cursym!*
    v_26 = basic_elt(env, 2); // !*comma!*
    if (v_27 == v_26) goto v_17;
    v_26 = stack[0];
    return ncons(v_26);
v_17:
    {   LispObject fn = basic_elt(env, 5); // scan
    v_26 = (*qfn0(fn))(fn);
    }
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 0); // read_namelist
    v_26 = (*qfn0(fn))(fn);
    }
    {
        LispObject v_29 = stack[0];
        return cons(v_29, v_26);
    }
v_5:
    return onevalue(v_26);
}



// Code for sfto_ucontentf1

static LispObject CC_sfto_ucontentf1(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    stack[-2] = nil;
v_9:
    v_60 = stack[-1];
    if (!consp(v_60)) goto v_22;
    else goto v_23;
v_22:
    v_60 = lisp_true;
    goto v_21;
v_23:
    v_60 = stack[-1];
    if (!car_legal(v_60)) v_60 = carerror(v_60); else
    v_60 = car(v_60);
    v_60 = (consp(v_60) ? nil : lisp_true);
    goto v_21;
    v_60 = nil;
v_21:
    if (v_60 == nil) goto v_19;
    v_60 = lisp_true;
    goto v_17;
v_19:
    v_60 = stack[-1];
    if (!car_legal(v_60)) v_60 = carerror(v_60); else
    v_60 = car(v_60);
    if (!car_legal(v_60)) v_60 = carerror(v_60); else
    v_60 = car(v_60);
    if (!car_legal(v_60)) v_61 = carerror(v_60); else
    v_61 = car(v_60);
    v_60 = stack[0];
    v_60 = Lneq_2(nil, v_61, v_60);
    env = stack[-3];
    goto v_17;
    v_60 = nil;
v_17:
    if (v_60 == nil) goto v_15;
    goto v_10;
v_15:
    v_60 = stack[-1];
    if (!car_legal(v_60)) v_60 = carerror(v_60); else
    v_60 = car(v_60);
    if (!car_legal(v_60)) v_61 = cdrerror(v_60); else
    v_61 = cdr(v_60);
    v_60 = stack[-2];
    v_60 = cons(v_61, v_60);
    env = stack[-3];
    stack[-2] = v_60;
    v_60 = stack[-1];
    if (!car_legal(v_60)) v_60 = cdrerror(v_60); else
    v_60 = cdr(v_60);
    stack[-1] = v_60;
    goto v_9;
v_10:
    v_60 = stack[-1];
    v_61 = v_60;
v_11:
    v_60 = stack[-2];
    if (v_60 == nil) goto v_50;
    else goto v_51;
v_50:
    v_60 = v_61;
    goto v_8;
v_51:
    v_60 = stack[-2];
    v_60 = car(v_60);
    {   LispObject fn = basic_elt(env, 1); // sfto_gcdf!*
    v_60 = (*qfn2(fn))(fn, v_60, v_61);
    }
    env = stack[-3];
    v_61 = v_60;
    v_60 = stack[-2];
    v_60 = cdr(v_60);
    stack[-2] = v_60;
    goto v_11;
v_8:
    return onevalue(v_60);
}



// Code for expnd1

static LispObject CC_expnd1(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_93, v_94;
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
v_8:
    v_93 = stack[-1];
    if (!consp(v_93)) goto v_17;
    else goto v_18;
v_17:
    v_93 = lisp_true;
    goto v_16;
v_18:
    v_93 = stack[-1];
    if (!car_legal(v_93)) v_93 = carerror(v_93); else
    v_93 = car(v_93);
    v_93 = (consp(v_93) ? nil : lisp_true);
    goto v_16;
    v_93 = nil;
v_16:
    if (v_93 == nil) goto v_14;
    goto v_9;
v_14:
    v_93 = stack[-1];
    if (!car_legal(v_93)) v_93 = carerror(v_93); else
    v_93 = car(v_93);
    if (!car_legal(v_93)) v_93 = carerror(v_93); else
    v_93 = car(v_93);
    if (!car_legal(v_93)) v_93 = carerror(v_93); else
    v_93 = car(v_93);
    {   LispObject fn = basic_elt(env, 1); // sfp
    v_93 = (*qfn1(fn))(fn, v_93);
    }
    env = stack[-3];
    if (v_93 == nil) goto v_33;
    else goto v_34;
v_33:
    v_93 = lisp_true;
    goto v_32;
v_34:
    v_93 = stack[-1];
    if (!car_legal(v_93)) v_93 = carerror(v_93); else
    v_93 = car(v_93);
    if (!car_legal(v_93)) v_93 = carerror(v_93); else
    v_93 = car(v_93);
    if (!car_legal(v_93)) v_94 = cdrerror(v_93); else
    v_94 = cdr(v_93);
    v_93 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_93 = static_cast<LispObject>(lessp2(v_94, v_93));
    v_93 = v_93 ? lisp_true : nil;
    env = stack[-3];
    goto v_32;
    v_93 = nil;
v_32:
    if (v_93 == nil) goto v_30;
    v_93 = stack[-1];
    if (!car_legal(v_93)) v_93 = carerror(v_93); else
    v_93 = car(v_93);
    if (!car_legal(v_93)) v_94 = carerror(v_93); else
    v_94 = car(v_93);
    v_93 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_93 = cons(v_94, v_93);
    env = stack[-3];
    stack[0] = ncons(v_93);
    env = stack[-3];
    v_93 = stack[-1];
    if (!car_legal(v_93)) v_93 = carerror(v_93); else
    v_93 = car(v_93);
    if (!car_legal(v_93)) v_93 = cdrerror(v_93); else
    v_93 = cdr(v_93);
    {   LispObject fn = basic_elt(env, 0); // expnd1
    v_93 = (*qfn1(fn))(fn, v_93);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 2); // multf
    v_93 = (*qfn2(fn))(fn, stack[0], v_93);
    }
    env = stack[-3];
    v_94 = v_93;
    goto v_28;
v_30:
    v_93 = stack[-1];
    if (!car_legal(v_93)) v_93 = carerror(v_93); else
    v_93 = car(v_93);
    if (!car_legal(v_93)) v_93 = carerror(v_93); else
    v_93 = car(v_93);
    if (!car_legal(v_93)) v_93 = carerror(v_93); else
    v_93 = car(v_93);
    {   LispObject fn = basic_elt(env, 0); // expnd1
    v_94 = (*qfn1(fn))(fn, v_93);
    }
    env = stack[-3];
    v_93 = stack[-1];
    if (!car_legal(v_93)) v_93 = carerror(v_93); else
    v_93 = car(v_93);
    if (!car_legal(v_93)) v_93 = carerror(v_93); else
    v_93 = car(v_93);
    if (!car_legal(v_93)) v_93 = cdrerror(v_93); else
    v_93 = cdr(v_93);
    {   LispObject fn = basic_elt(env, 3); // exptf
    stack[0] = (*qfn2(fn))(fn, v_94, v_93);
    }
    env = stack[-3];
    v_93 = stack[-1];
    if (!car_legal(v_93)) v_93 = carerror(v_93); else
    v_93 = car(v_93);
    if (!car_legal(v_93)) v_93 = cdrerror(v_93); else
    v_93 = cdr(v_93);
    {   LispObject fn = basic_elt(env, 0); // expnd1
    v_93 = (*qfn1(fn))(fn, v_93);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 2); // multf
    v_93 = (*qfn2(fn))(fn, stack[0], v_93);
    }
    env = stack[-3];
    v_94 = v_93;
    goto v_28;
    v_94 = nil;
v_28:
    v_93 = stack[-2];
    v_93 = cons(v_94, v_93);
    env = stack[-3];
    stack[-2] = v_93;
    v_93 = stack[-1];
    if (!car_legal(v_93)) v_93 = cdrerror(v_93); else
    v_93 = cdr(v_93);
    stack[-1] = v_93;
    goto v_8;
v_9:
    v_93 = stack[-1];
    v_94 = v_93;
v_10:
    v_93 = stack[-2];
    if (v_93 == nil) goto v_83;
    else goto v_84;
v_83:
    v_93 = v_94;
    goto v_7;
v_84:
    v_93 = stack[-2];
    v_93 = car(v_93);
    {   LispObject fn = basic_elt(env, 4); // addf
    v_93 = (*qfn2(fn))(fn, v_93, v_94);
    }
    env = stack[-3];
    v_94 = v_93;
    v_93 = stack[-2];
    v_93 = cdr(v_93);
    stack[-2] = v_93;
    goto v_10;
v_7:
    return onevalue(v_93);
}



// Code for ev_sum

static LispObject CC_ev_sum(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    v_32 = nil;
v_10:
    v_30 = stack[-1];
    if (v_30 == nil) goto v_13;
    else goto v_14;
v_13:
    goto v_9;
v_14:
    v_30 = stack[-1];
    if (!car_legal(v_30)) v_31 = carerror(v_30); else
    v_31 = car(v_30);
    v_30 = stack[0];
    if (!car_legal(v_30)) v_30 = carerror(v_30); else
    v_30 = car(v_30);
    v_30 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_31) + static_cast<std::uintptr_t>(v_30) - TAG_FIXNUM);
    v_31 = v_32;
    v_30 = cons(v_30, v_31);
    env = stack[-2];
    v_32 = v_30;
    v_30 = stack[-1];
    if (!car_legal(v_30)) v_30 = cdrerror(v_30); else
    v_30 = cdr(v_30);
    stack[-1] = v_30;
    v_30 = stack[0];
    if (!car_legal(v_30)) v_30 = cdrerror(v_30); else
    v_30 = cdr(v_30);
    stack[0] = v_30;
    goto v_10;
v_9:
    v_30 = v_32;
        return Lnreverse(nil, v_30);
    return onevalue(v_30);
}



// Code for mml2om

static LispObject CC_mml2om(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil);
    stack_popper stack_popper_var(2);
// end of prologue
    {   LispObject fn = basic_elt(env, 2); // mml2ir
    v_17 = (*qfn0(fn))(fn);
    }
    env = stack[-1];
    stack[0] = v_17;
    v_17 = lisp_true;
    {   LispObject fn = basic_elt(env, 3); // terpri!*
    v_17 = (*qfn1(fn))(fn, v_17);
    }
    env = stack[-1];
    v_17 = basic_elt(env, 1); // "Intermediate representation: "
    v_17 = Lprinc(nil, v_17);
    env = stack[-1];
    v_17 = lisp_true;
    {   LispObject fn = basic_elt(env, 3); // terpri!*
    v_17 = (*qfn1(fn))(fn, v_17);
    }
    env = stack[-1];
    v_17 = stack[0];
    v_17 = Lprint(nil, v_17);
    env = stack[-1];
    v_17 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // ir2om
    v_17 = (*qfn1(fn))(fn, v_17);
    }
    v_17 = nil;
    return onevalue(v_17);
}



// Code for vbcgcd

static LispObject CC_vbcgcd(LispObject env,
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
    v_80 = stack[-1];
    v_79 = static_cast<LispObject>(-1600)+TAG_FIXNUM; // -100
    {   LispObject fn = basic_elt(env, 2); // vbcsize
    v_79 = (*qfn2(fn))(fn, v_80, v_79);
    }
    env = stack[-2];
    if (v_79 == nil) goto v_14;
    else goto v_15;
v_14:
    v_79 = lisp_true;
    goto v_13;
v_15:
    v_80 = stack[0];
    v_79 = static_cast<LispObject>(-1600)+TAG_FIXNUM; // -100
    {   LispObject fn = basic_elt(env, 2); // vbcsize
    v_79 = (*qfn2(fn))(fn, v_80, v_79);
    }
    env = stack[-2];
    v_79 = (v_79 == nil ? lisp_true : nil);
    goto v_13;
    v_79 = nil;
v_13:
    if (v_79 == nil) goto v_11;
    v_79 = basic_elt(env, 1); // (1 . 1)
    goto v_7;
v_11:
    v_79 = stack[-1];
    if (!car_legal(v_79)) v_80 = cdrerror(v_79); else
    v_80 = cdr(v_79);
    v_79 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_80 == v_79) goto v_33;
    else goto v_34;
v_33:
    v_79 = stack[0];
    if (!car_legal(v_79)) v_80 = cdrerror(v_79); else
    v_80 = cdr(v_79);
    v_79 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_79 = (v_80 == v_79 ? lisp_true : nil);
    goto v_32;
v_34:
    v_79 = nil;
    goto v_32;
    v_79 = nil;
v_32:
    if (v_79 == nil) goto v_30;
    v_79 = stack[-1];
    if (!car_legal(v_79)) v_79 = carerror(v_79); else
    v_79 = car(v_79);
    v_79 = integerp(v_79);
    if (v_79 == nil) goto v_48;
    v_79 = stack[0];
    if (!car_legal(v_79)) v_79 = carerror(v_79); else
    v_79 = car(v_79);
    v_79 = integerp(v_79);
    if (v_79 == nil) goto v_48;
    v_79 = stack[-1];
    if (!car_legal(v_79)) v_80 = carerror(v_79); else
    v_80 = car(v_79);
    v_79 = stack[0];
    if (!car_legal(v_79)) v_79 = carerror(v_79); else
    v_79 = car(v_79);
    v_80 = Lgcd_2(nil, v_80, v_79);
    v_79 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_80, v_79);
v_48:
    v_79 = stack[-1];
    if (!car_legal(v_79)) v_80 = carerror(v_79); else
    v_80 = car(v_79);
    v_79 = stack[0];
    if (!car_legal(v_79)) v_79 = carerror(v_79); else
    v_79 = car(v_79);
    {   LispObject fn = basic_elt(env, 3); // gcdf!*
    v_80 = (*qfn2(fn))(fn, v_80, v_79);
    }
    v_79 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_80, v_79);
    v_79 = nil;
    goto v_28;
v_30:
    v_80 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_79 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_80, v_79);
    v_79 = nil;
v_28:
v_7:
    return onevalue(v_79);
}



// Code for mkarray1

static LispObject CC_mkarray1(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_56 = stack[-5];
    if (v_56 == nil) goto v_7;
    else goto v_8;
v_7:
    v_56 = stack[-4];
    v_57 = basic_elt(env, 1); // symbolic
    if (v_56 == v_57) goto v_12;
    else goto v_13;
v_12:
    v_56 = nil;
    goto v_11;
v_13:
    v_56 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_11;
    v_56 = nil;
v_11:
    goto v_6;
v_8:
    v_56 = stack[-5];
    if (!car_legal(v_56)) v_56 = carerror(v_56); else
    v_56 = car(v_56);
    v_56 = sub1(v_56);
    env = stack[-7];
    stack[-6] = v_56;
    v_56 = stack[-6];
    v_56 = Lmkvect(nil, v_56);
    env = stack[-7];
    stack[-3] = v_56;
    v_56 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-2] = v_56;
v_35:
    v_57 = stack[-6];
    v_56 = stack[-2];
    v_56 = difference2(v_57, v_56);
    env = stack[-7];
    v_56 = Lminusp(nil, v_56);
    env = stack[-7];
    if (v_56 == nil) goto v_40;
    goto v_34;
v_40:
    stack[-1] = stack[-3];
    stack[0] = stack[-2];
    v_56 = stack[-5];
    if (!car_legal(v_56)) v_57 = cdrerror(v_56); else
    v_57 = cdr(v_56);
    v_56 = stack[-4];
    {   LispObject fn = basic_elt(env, 0); // mkarray1
    v_56 = (*qfn2(fn))(fn, v_57, v_56);
    }
    env = stack[-7];
    v_56 = Lputv(nil, stack[-1], stack[0], v_56);
    env = stack[-7];
    v_56 = stack[-2];
    v_56 = add1(v_56);
    env = stack[-7];
    stack[-2] = v_56;
    goto v_35;
v_34:
    v_56 = stack[-3];
    goto v_6;
    v_56 = nil;
v_6:
    return onevalue(v_56);
}



// Code for idcons_ordp

static LispObject CC_idcons_ordp(LispObject env,
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
    v_9 = basic_elt(env, 1); // atom_compare
    {
        LispObject fn = basic_elt(env, 2); // cons_ordp
        return (*qfn3(fn))(fn, v_11, v_10, v_9);
    }
}



// Code for general!-expt!-mod!-p

static LispObject CC_generalKexptKmodKp(LispObject env,
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
    {   LispObject fn = basic_elt(env, 0); // general!-expt!-mod!-p
    v_44 = (*qfn2(fn))(fn, v_45, v_44);
    }
    env = stack[-2];
    v_46 = v_44;
    v_44 = v_46;
    v_45 = v_46;
    {   LispObject fn = basic_elt(env, 1); // general!-times!-mod!-p
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
    {   LispObject fn = basic_elt(env, 1); // general!-times!-mod!-p
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



// Code for lex_start_line_comment

static LispObject CC_lex_start_line_comment(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_70 = stack[0];
    v_69 = basic_elt(env, 1); // !%
    if (v_70 == v_69) goto v_10;
    else goto v_11;
v_10:
    v_70 = qvalue(basic_elt(env, 2)); // lexer_style!*
    v_69 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 5); // land
    v_69 = (*qfn2(fn))(fn, v_70, v_69);
    }
    env = stack[-1];
    v_69 = static_cast<LispObject>(zerop(v_69));
    v_69 = v_69 ? lisp_true : nil;
    env = stack[-1];
    v_69 = (v_69 == nil ? lisp_true : nil);
    goto v_9;
v_11:
    v_69 = nil;
    goto v_9;
    v_69 = nil;
v_9:
    if (v_69 == nil) goto v_7;
    v_69 = lisp_true;
    goto v_5;
v_7:
    v_70 = stack[0];
    v_69 = basic_elt(env, 3); // !#
    if (v_70 == v_69) goto v_31;
    else goto v_32;
v_31:
    v_70 = qvalue(basic_elt(env, 2)); // lexer_style!*
    v_69 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    {   LispObject fn = basic_elt(env, 5); // land
    v_69 = (*qfn2(fn))(fn, v_70, v_69);
    }
    env = stack[-1];
    v_69 = static_cast<LispObject>(zerop(v_69));
    v_69 = v_69 ? lisp_true : nil;
    env = stack[-1];
    v_69 = (v_69 == nil ? lisp_true : nil);
    goto v_30;
v_32:
    v_69 = nil;
    goto v_30;
    v_69 = nil;
v_30:
    if (v_69 == nil) goto v_28;
    v_69 = lisp_true;
    goto v_26;
v_28:
    v_70 = stack[0];
    v_69 = basic_elt(env, 4); // !/
    if (v_70 == v_69) goto v_48;
    else goto v_49;
v_48:
    v_70 = qvalue(basic_elt(env, 2)); // lexer_style!*
    v_69 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    {   LispObject fn = basic_elt(env, 5); // land
    v_69 = (*qfn2(fn))(fn, v_70, v_69);
    }
    env = stack[-1];
    v_69 = static_cast<LispObject>(zerop(v_69));
    v_69 = v_69 ? lisp_true : nil;
    env = stack[-1];
    if (v_69 == nil) goto v_54;
    else goto v_55;
v_54:
    {   LispObject fn = basic_elt(env, 6); // yypeek
    v_69 = (*qfn0(fn))(fn);
    }
    env = stack[-1];
    v_70 = basic_elt(env, 4); // !/
    v_69 = (v_69 == v_70 ? lisp_true : nil);
    goto v_53;
v_55:
    v_69 = nil;
    goto v_53;
    v_69 = nil;
v_53:
    goto v_47;
v_49:
    v_69 = nil;
    goto v_47;
    v_69 = nil;
v_47:
    goto v_26;
    v_69 = nil;
v_26:
    goto v_5;
    v_69 = nil;
v_5:
    return onevalue(v_69);
}



// Code for rl_atl

static LispObject CC_rl_atl(LispObject env,
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
    stack[0] = qvalue(basic_elt(env, 1)); // rl_atl!*
    v_8 = ncons(v_8);
    env = stack[-1];
    {
        LispObject v_10 = stack[0];
        LispObject fn = basic_elt(env, 2); // apply
        return (*qfn2(fn))(fn, v_10, v_8);
    }
}



// Code for om2mml

static LispObject CC_om2mml(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_19;
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
    {   LispObject fn = basic_elt(env, 2); // om2ir
    v_19 = (*qfn0(fn))(fn);
    }
    env = stack[-1];
    stack[0] = v_19;
    v_19 = lisp_true;
    {   LispObject fn = basic_elt(env, 3); // terpri!*
    v_19 = (*qfn1(fn))(fn, v_19);
    }
    env = stack[-1];
    v_19 = basic_elt(env, 1); // "Intermediate representation:"
    v_19 = Lprinc(nil, v_19);
    env = stack[-1];
    v_19 = lisp_true;
    {   LispObject fn = basic_elt(env, 3); // terpri!*
    v_19 = (*qfn1(fn))(fn, v_19);
    }
    env = stack[-1];
    v_19 = stack[0];
    v_19 = Lprinc(nil, v_19);
    env = stack[-1];
    v_19 = lisp_true;
    {   LispObject fn = basic_elt(env, 3); // terpri!*
    v_19 = (*qfn1(fn))(fn, v_19);
    }
    env = stack[-1];
    v_19 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // ir2mml
    v_19 = (*qfn1(fn))(fn, v_19);
    }
    v_19 = nil;
    return onevalue(v_19);
}



// Code for floatprop

static LispObject CC_floatprop(LispObject env,
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
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_12 = v_2;
// end of prologue
    v_13 = v_12;
    v_13 = Lfloatp(nil, v_13);
    env = stack[0];
    if (v_13 == nil) goto v_6;
    else goto v_5;
v_6:
    v_13 = basic_elt(env, 1); // !:rd!:
        return Leqcar(nil, v_12, v_13);
v_5:
    return onevalue(v_13);
}



// Code for !*wedgepf2pf

static LispObject CC_Hwedgepf2pf(LispObject env,
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
    {   LispObject fn = basic_elt(env, 2); // mkuwedge
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



// Code for delete!-dups

static LispObject CC_deleteKdups(LispObject env,
                         LispObject v_2)
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
    v_38 = nil;
v_7:
    v_36 = stack[0];
    if (v_36 == nil) goto v_11;
    v_36 = stack[0];
    if (!car_legal(v_36)) v_37 = carerror(v_36); else
    v_37 = car(v_36);
    v_36 = stack[0];
    if (!car_legal(v_36)) v_36 = cdrerror(v_36); else
    v_36 = cdr(v_36);
    v_36 = Lmember(nil, v_37, v_36);
    if (v_36 == nil) goto v_16;
    v_36 = stack[0];
    if (!car_legal(v_36)) v_36 = cdrerror(v_36); else
    v_36 = cdr(v_36);
    stack[0] = v_36;
    goto v_7;
v_16:
    v_36 = stack[0];
    if (!car_legal(v_36)) v_36 = carerror(v_36); else
    v_36 = car(v_36);
    v_37 = v_38;
    v_36 = cons(v_36, v_37);
    env = stack[-1];
    v_38 = v_36;
    v_36 = stack[0];
    if (!car_legal(v_36)) v_36 = cdrerror(v_36); else
    v_36 = cdr(v_36);
    stack[0] = v_36;
    goto v_7;
    goto v_9;
v_11:
    v_36 = v_38;
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn1(fn))(fn, v_36);
    }
v_9:
    v_36 = nil;
    return onevalue(v_36);
}



// Code for inttovec

static LispObject CC_inttovec(LispObject env,
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
    stack[0] = v_11;
    {   LispObject fn = basic_elt(env, 1); // inttovec!-solve
    v_10 = (*qfn2(fn))(fn, v_11, v_10);
    }
    env = stack[-1];
    {
        LispObject v_13 = stack[0];
        LispObject fn = basic_elt(env, 2); // inttovec1
        return (*qfn2(fn))(fn, v_13, v_10);
    }
}



setup_type const u19_setup[] =
{
    {"polynomheadreduceby",     G0W2,     G1W2,     CC_polynomheadreduceby,G3W2,G4W2},
    {"wusort",                  G0W1,     CC_wusort,G2W1,     G3W1,     G4W1},
    {"talp_simplatat",          G0W3,     G1W3,     G2W3,     CC_talp_simplatat,G4W3},
    {"qqe_simplat1",            G0W2,     G1W2,     CC_qqe_simplat1,G3W2,G4W2},
    {"cl_mkstrict",             G0W2,     G1W2,     CC_cl_mkstrict,G3W2,G4W2},
    {"variableom",              G0W1,     CC_variableom,G2W1, G3W1,     G4W1},
    {"onoff",                   G0W2,     G1W2,     CC_onoff, G3W2,     G4W2},
    {"guesspftype",             G0W1,     CC_guesspftype,G2W1,G3W1,     G4W1},
    {"equalreplaceby",          G0W1,     CC_equalreplaceby,G2W1,G3W1,  G4W1},
    {"prinfit",                 G0W3,     G1W3,     G2W3,     CC_prinfit,G4W3},
    {"gpexp1p",                 G0W1,     CC_gpexp1p,G2W1,    G3W1,     G4W1},
    {"copyd",                   G0W2,     G1W2,     CC_copyd, G3W2,     G4W2},
    {"class",                   G0W1,     CC_class, G2W1,     G3W1,     G4W1},
    {"lexer_word_starter",      G0W1,     CC_lexer_word_starter,G2W1,G3W1,G4W1},
    {"gcref_mkedges-tgf",       G0W2,     G1W2,     CC_gcref_mkedgesKtgf,G3W2,G4W2},
    {"replus",                  G0W1,     CC_replus,G2W1,     G3W1,     G4W1},
    {"rl_subat",                G0W2,     G1W2,     CC_rl_subat,G3W2,   G4W2},
    {"subf1",                   G0W2,     G1W2,     CC_subf1, G3W2,     G4W2},
    {"cl_rename-vars1",         G0W2,     G1W2,     CC_cl_renameKvars1,G3W2,G4W2},
    {"bc_2sq",                  G0W1,     CC_bc_2sq,G2W1,     G3W1,     G4W1},
    {"termorder",               G0W2,     G1W2,     CC_termorder,G3W2,  G4W2},
    {"stats_getargs",           CC_stats_getargs,G1W0,G2W0,   G3W0,     G4W0},
    {"convchk",                 G0W1,     CC_convchk,G2W1,    G3W1,     G4W1},
    {"bcquot",                  G0W2,     G1W2,     CC_bcquot,G3W2,     G4W2},
    {"vdpputprop",              G0W3,     G1W3,     G2W3,     CC_vdpputprop,G4W3},
    {"add2resultbuf",           G0W2,     G1W2,     CC_add2resultbuf,G3W2,G4W2},
    {"groeb=better",            G0W2,     G1W2,     CC_groebMbetter,G3W2,G4W2},
    {"ord2",                    G0W2,     G1W2,     CC_ord2,  G3W2,     G4W2},
    {"moduntag",                G0W1,     CC_moduntag,G2W1,   G3W1,     G4W1},
    {"mksq",                    G0W2,     G1W2,     CC_mksq,  G3W2,     G4W2},
    {"rrdls",                   CC_rrdls, G1W0,     G2W0,     G3W0,     G4W0},
    {"read_namelist",           CC_read_namelist,G1W0,G2W0,   G3W0,     G4W0},
    {"sfto_ucontentf1",         G0W2,     G1W2,     CC_sfto_ucontentf1,G3W2,G4W2},
    {"expnd1",                  G0W1,     CC_expnd1,G2W1,     G3W1,     G4W1},
    {"ev_sum",                  G0W2,     G1W2,     CC_ev_sum,G3W2,     G4W2},
    {"mml2om",                  CC_mml2om,G1W0,     G2W0,     G3W0,     G4W0},
    {"vbcgcd",                  G0W2,     G1W2,     CC_vbcgcd,G3W2,     G4W2},
    {"mkarray1",                G0W2,     G1W2,     CC_mkarray1,G3W2,   G4W2},
    {"idcons_ordp",             G0W2,     G1W2,     CC_idcons_ordp,G3W2,G4W2},
    {"general-expt-mod-p",      G0W2,     G1W2,     CC_generalKexptKmodKp,G3W2,G4W2},
    {"lex_start_line_comment",  G0W1,     CC_lex_start_line_comment,G2W1,G3W1,G4W1},
    {"rl_atl",                  G0W1,     CC_rl_atl,G2W1,     G3W1,     G4W1},
    {"om2mml",                  CC_om2mml,G1W0,     G2W0,     G3W0,     G4W0},
    {"floatprop",               G0W1,     CC_floatprop,G2W1,  G3W1,     G4W1},
    {"*wedgepf2pf",             G0W1,     CC_Hwedgepf2pf,G2W1,G3W1,     G4W1},
    {"delete-dups",             G0W1,     CC_deleteKdups,G2W1,G3W1,     G4W1},
    {"inttovec",                G0W2,     G1W2,     CC_inttovec,G3W2,   G4W2},
    {nullptr, 
        reinterpret_cast<no_args *>(
            reinterpret_cast<uintptr_t>("u19")),
        reinterpret_cast<one_arg *>(
            reinterpret_cast<uintptr_t>("80086 4912990 3394247")),
        nullptr, nullptr, nullptr}
};

// end of generated code
