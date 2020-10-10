
// $destdir/u53.c        Machine generated C code

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


// Code for ofsf_sminsert

static LispObject CC_ofsf_sminsert(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_157, v_158;
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
    stack[-7] = nil;
v_13:
    v_157 = stack[-5];
    if (!car_legal(v_157)) v_157 = carerror(v_157); else
    v_157 = car(v_157);
    if (!car_legal(v_157)) v_157 = cdrerror(v_157); else
    v_157 = cdr(v_157);
    if (!car_legal(v_157)) stack[-2] = carerror(v_157); else
    stack[-2] = car(v_157);
    v_157 = stack[-5];
    if (!car_legal(v_157)) v_157 = carerror(v_157); else
    v_157 = car(v_157);
    if (!car_legal(v_157)) v_157 = cdrerror(v_157); else
    v_157 = cdr(v_157);
    if (!car_legal(v_157)) stack[-1] = cdrerror(v_157); else
    stack[-1] = cdr(v_157);
    v_157 = stack[-6];
    if (!car_legal(v_157)) v_157 = cdrerror(v_157); else
    v_157 = cdr(v_157);
    if (!car_legal(v_157)) stack[0] = carerror(v_157); else
    stack[0] = car(v_157);
    v_157 = stack[-6];
    if (!car_legal(v_157)) v_157 = cdrerror(v_157); else
    v_157 = cdr(v_157);
    if (!car_legal(v_157)) v_158 = cdrerror(v_157); else
    v_158 = cdr(v_157);
    v_157 = stack[-6];
    if (!car_legal(v_157)) v_157 = carerror(v_157); else
    v_157 = car(v_157);
    v_157 = list2(v_158, v_157);
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 3); // ofsf_sminsert1
    v_157 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_157);
    }
    env = stack[-8];
    stack[0] = v_157;
    v_157 = stack[0];
    if (v_157 == nil) goto v_35;
    v_157 = stack[0];
    if (symbolp(v_157)) goto v_35;
    v_157 = stack[-5];
    if (!car_legal(v_157)) v_157 = cdrerror(v_157); else
    v_157 = cdr(v_157);
    stack[-5] = v_157;
    v_157 = stack[0];
    stack[-6] = v_157;
    goto v_33;
v_35:
v_33:
    v_157 = stack[0];
    if (v_157 == nil) goto v_49;
    else goto v_50;
v_49:
    v_157 = lisp_true;
    goto v_48;
v_50:
    v_157 = stack[0];
    v_157 = Lsymbolp(nil, v_157);
    env = stack[-8];
    if (v_157 == nil) goto v_57;
    else goto v_56;
v_57:
    v_157 = stack[-5];
    v_157 = (v_157 == nil ? lisp_true : nil);
v_56:
    goto v_48;
    v_157 = nil;
v_48:
    if (v_157 == nil) goto v_45;
    else goto v_46;
v_45:
    goto v_13;
v_46:
    v_158 = stack[0];
    v_157 = basic_elt(env, 1); // false
    if (v_158 == v_157) goto v_64;
    else goto v_65;
v_64:
    v_157 = basic_elt(env, 1); // false
    goto v_10;
v_65:
    v_158 = stack[0];
    v_157 = basic_elt(env, 2); // true
    if (v_158 == v_157) goto v_71;
    else goto v_72;
v_71:
    v_157 = stack[-5];
    goto v_10;
v_72:
    v_157 = stack[-5];
    if (v_157 == nil) goto v_78;
    else goto v_79;
v_78:
    v_157 = stack[-6];
    return ncons(v_157);
v_79:
    v_157 = stack[-5];
    stack[-3] = v_157;
    v_157 = stack[-5];
    if (!car_legal(v_157)) v_157 = cdrerror(v_157); else
    v_157 = cdr(v_157);
    stack[-4] = v_157;
v_88:
    v_157 = stack[-4];
    if (v_157 == nil) goto v_91;
    else goto v_92;
v_91:
    goto v_87;
v_92:
    v_157 = stack[-4];
    if (!car_legal(v_157)) v_157 = carerror(v_157); else
    v_157 = car(v_157);
    stack[-7] = v_157;
    v_157 = stack[-4];
    if (!car_legal(v_157)) v_157 = cdrerror(v_157); else
    v_157 = cdr(v_157);
    stack[-4] = v_157;
    v_157 = stack[-7];
    if (!car_legal(v_157)) v_157 = cdrerror(v_157); else
    v_157 = cdr(v_157);
    if (!car_legal(v_157)) stack[-2] = carerror(v_157); else
    stack[-2] = car(v_157);
    v_157 = stack[-7];
    if (!car_legal(v_157)) v_157 = cdrerror(v_157); else
    v_157 = cdr(v_157);
    if (!car_legal(v_157)) stack[-1] = cdrerror(v_157); else
    stack[-1] = cdr(v_157);
    v_157 = stack[-6];
    if (!car_legal(v_157)) v_157 = cdrerror(v_157); else
    v_157 = cdr(v_157);
    if (!car_legal(v_157)) stack[0] = carerror(v_157); else
    stack[0] = car(v_157);
    v_157 = stack[-6];
    if (!car_legal(v_157)) v_157 = cdrerror(v_157); else
    v_157 = cdr(v_157);
    if (!car_legal(v_157)) v_158 = cdrerror(v_157); else
    v_158 = cdr(v_157);
    v_157 = stack[-6];
    if (!car_legal(v_157)) v_157 = carerror(v_157); else
    v_157 = car(v_157);
    v_157 = list2(v_158, v_157);
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 3); // ofsf_sminsert1
    v_157 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_157);
    }
    env = stack[-8];
    stack[0] = v_157;
    v_158 = stack[0];
    v_157 = basic_elt(env, 2); // true
    if (v_158 == v_157) goto v_117;
    else goto v_118;
v_117:
    v_157 = nil;
    stack[-4] = v_157;
    v_157 = basic_elt(env, 2); // true
    stack[-7] = v_157;
    goto v_116;
v_118:
    v_158 = stack[0];
    v_157 = basic_elt(env, 1); // false
    if (v_158 == v_157) goto v_123;
    else goto v_124;
v_123:
    v_157 = nil;
    stack[-4] = v_157;
    v_157 = basic_elt(env, 1); // false
    stack[-7] = v_157;
    goto v_116;
v_124:
    v_157 = stack[0];
    if (v_157 == nil) goto v_130;
    v_158 = stack[-3];
    v_157 = stack[-4];
    {   LispObject fn = basic_elt(env, 4); // setcdr
    v_157 = (*qfn2(fn))(fn, v_158, v_157);
    }
    env = stack[-8];
    v_157 = stack[0];
    stack[-6] = v_157;
    goto v_116;
v_130:
    v_157 = stack[-3];
    if (!car_legal(v_157)) v_157 = cdrerror(v_157); else
    v_157 = cdr(v_157);
    stack[-3] = v_157;
    goto v_116;
v_116:
    goto v_88;
v_87:
    v_158 = stack[-7];
    v_157 = basic_elt(env, 1); // false
    if (v_158 == v_157) goto v_142;
    else goto v_143;
v_142:
    v_157 = basic_elt(env, 1); // false
    goto v_10;
v_143:
    v_157 = stack[-7];
    v_158 = basic_elt(env, 2); // true
    if (v_157 == v_158) goto v_149;
    else goto v_150;
v_149:
    v_157 = stack[-5];
    goto v_10;
v_150:
    v_158 = stack[-6];
    v_157 = stack[-5];
    return cons(v_158, v_157);
v_10:
    return onevalue(v_157);
}



// Code for addinds

static LispObject CC_addinds(LispObject env,
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
v_8:
    v_48 = stack[-1];
    if (v_48 == nil) goto v_11;
    else goto v_12;
v_11:
    v_48 = stack[0];
    if (v_48 == nil) goto v_16;
    else goto v_17;
v_16:
    v_48 = stack[-2];
    {
        LispObject fn = basic_elt(env, 3); // nreverse
        return (*qfn1(fn))(fn, v_48);
    }
v_17:
    stack[0] = stack[-2];
    v_48 = basic_elt(env, 1); // "Powrhs too long"
    {   LispObject fn = basic_elt(env, 4); // interr
    v_48 = (*qfn1(fn))(fn, v_48);
    }
    env = stack[-3];
    {
        LispObject v_53 = stack[0];
        LispObject fn = basic_elt(env, 3); // nreverse
        return (*qfn2(fn))(fn, v_53, v_48);
    }
    goto v_10;
v_12:
    v_48 = stack[0];
    if (v_48 == nil) goto v_27;
    else goto v_28;
v_27:
    stack[0] = stack[-2];
    v_48 = basic_elt(env, 2); // "Powu too long"
    {   LispObject fn = basic_elt(env, 4); // interr
    v_48 = (*qfn1(fn))(fn, v_48);
    }
    env = stack[-3];
    {
        LispObject v_54 = stack[0];
        LispObject fn = basic_elt(env, 3); // nreverse
        return (*qfn2(fn))(fn, v_54, v_48);
    }
v_28:
    v_48 = stack[-1];
    if (!car_legal(v_48)) v_49 = carerror(v_48); else
    v_49 = car(v_48);
    v_48 = stack[0];
    if (!car_legal(v_48)) v_48 = carerror(v_48); else
    v_48 = car(v_48);
    if (!car_legal(v_48)) v_48 = carerror(v_48); else
    v_48 = car(v_48);
    v_49 = plus2(v_49, v_48);
    env = stack[-3];
    v_48 = stack[-2];
    v_48 = cons(v_49, v_48);
    env = stack[-3];
    stack[-2] = v_48;
    v_48 = stack[-1];
    if (!car_legal(v_48)) v_48 = cdrerror(v_48); else
    v_48 = cdr(v_48);
    stack[-1] = v_48;
    v_48 = stack[0];
    if (!car_legal(v_48)) v_48 = cdrerror(v_48); else
    v_48 = cdr(v_48);
    stack[0] = v_48;
    goto v_8;
v_10:
    v_48 = nil;
    return onevalue(v_48);
}



// Code for multtaylorsq

static LispObject CC_multtaylorsq(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(9);
// copy arguments values to proper place
    stack[-5] = v_3;
    stack[-6] = v_2;
// end of prologue
    v_111 = stack[-6];
    if (v_111 == nil) goto v_11;
    else goto v_12;
v_11:
    v_111 = lisp_true;
    goto v_10;
v_12:
    v_111 = stack[-5];
    if (!car_legal(v_111)) v_111 = carerror(v_111); else
    v_111 = car(v_111);
    v_111 = (v_111 == nil ? lisp_true : nil);
    goto v_10;
    v_111 = nil;
v_10:
    if (v_111 == nil) goto v_8;
    v_111 = nil;
    goto v_6;
v_8:
    stack[-7] = basic_elt(env, 1); // taylor!*
    v_111 = stack[-6];
    if (!car_legal(v_111)) v_111 = cdrerror(v_111); else
    v_111 = cdr(v_111);
    if (!car_legal(v_111)) v_111 = carerror(v_111); else
    v_111 = car(v_111);
    stack[-4] = v_111;
    v_111 = stack[-4];
    if (v_111 == nil) goto v_36;
    else goto v_37;
v_36:
    v_111 = nil;
    stack[-1] = v_111;
    goto v_29;
v_37:
    v_111 = stack[-4];
    if (!car_legal(v_111)) v_111 = carerror(v_111); else
    v_111 = car(v_111);
    v_112 = v_111;
    v_111 = v_112;
    if (!car_legal(v_111)) stack[0] = carerror(v_111); else
    stack[0] = car(v_111);
    v_111 = v_112;
    if (!car_legal(v_111)) v_112 = cdrerror(v_111); else
    v_112 = cdr(v_111);
    v_111 = stack[-5];
    {   LispObject fn = basic_elt(env, 3); // multsq
    v_111 = (*qfn2(fn))(fn, v_112, v_111);
    }
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 4); // subs2!*
    v_111 = (*qfn1(fn))(fn, v_111);
    }
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 5); // resimp
    v_111 = (*qfn1(fn))(fn, v_111);
    }
    env = stack[-8];
    v_111 = cons(stack[0], v_111);
    env = stack[-8];
    v_111 = ncons(v_111);
    env = stack[-8];
    stack[-2] = v_111;
    stack[-3] = v_111;
v_30:
    v_111 = stack[-4];
    if (!car_legal(v_111)) v_111 = cdrerror(v_111); else
    v_111 = cdr(v_111);
    stack[-4] = v_111;
    v_111 = stack[-4];
    if (v_111 == nil) goto v_57;
    else goto v_58;
v_57:
    v_111 = stack[-3];
    stack[-1] = v_111;
    goto v_29;
v_58:
    stack[-1] = stack[-2];
    v_111 = stack[-4];
    if (!car_legal(v_111)) v_111 = carerror(v_111); else
    v_111 = car(v_111);
    v_112 = v_111;
    v_111 = v_112;
    if (!car_legal(v_111)) stack[0] = carerror(v_111); else
    stack[0] = car(v_111);
    v_111 = v_112;
    if (!car_legal(v_111)) v_112 = cdrerror(v_111); else
    v_112 = cdr(v_111);
    v_111 = stack[-5];
    {   LispObject fn = basic_elt(env, 3); // multsq
    v_111 = (*qfn2(fn))(fn, v_112, v_111);
    }
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 4); // subs2!*
    v_111 = (*qfn1(fn))(fn, v_111);
    }
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 5); // resimp
    v_111 = (*qfn1(fn))(fn, v_111);
    }
    env = stack[-8];
    v_111 = cons(stack[0], v_111);
    env = stack[-8];
    v_111 = ncons(v_111);
    env = stack[-8];
    if (!car_legal(stack[-1])) rplacd_fails(stack[-1]);
    setcdr(stack[-1], v_111);
    v_111 = stack[-2];
    if (!car_legal(v_111)) v_111 = cdrerror(v_111); else
    v_111 = cdr(v_111);
    stack[-2] = v_111;
    goto v_30;
v_29:
    v_111 = stack[-6];
    if (!car_legal(v_111)) v_111 = cdrerror(v_111); else
    v_111 = cdr(v_111);
    if (!car_legal(v_111)) v_111 = cdrerror(v_111); else
    v_111 = cdr(v_111);
    if (!car_legal(v_111)) stack[0] = carerror(v_111); else
    stack[0] = car(v_111);
    v_111 = qvalue(basic_elt(env, 2)); // !*taylorkeeporiginal
    if (v_111 == nil) goto v_86;
    v_111 = stack[-6];
    if (!car_legal(v_111)) v_111 = cdrerror(v_111); else
    v_111 = cdr(v_111);
    if (!car_legal(v_111)) v_111 = cdrerror(v_111); else
    v_111 = cdr(v_111);
    if (!car_legal(v_111)) v_111 = cdrerror(v_111); else
    v_111 = cdr(v_111);
    if (!car_legal(v_111)) v_111 = carerror(v_111); else
    v_111 = car(v_111);
    if (v_111 == nil) goto v_86;
    v_112 = stack[-5];
    v_111 = stack[-6];
    if (!car_legal(v_111)) v_111 = cdrerror(v_111); else
    v_111 = cdr(v_111);
    if (!car_legal(v_111)) v_111 = cdrerror(v_111); else
    v_111 = cdr(v_111);
    if (!car_legal(v_111)) v_111 = cdrerror(v_111); else
    v_111 = cdr(v_111);
    if (!car_legal(v_111)) v_111 = carerror(v_111); else
    v_111 = car(v_111);
    {   LispObject fn = basic_elt(env, 3); // multsq
    v_111 = (*qfn2(fn))(fn, v_112, v_111);
    }
    env = stack[-8];
    v_112 = v_111;
    goto v_84;
v_86:
    v_111 = nil;
    v_112 = v_111;
    goto v_84;
    v_112 = nil;
v_84:
    v_111 = stack[-6];
    if (!car_legal(v_111)) v_111 = cdrerror(v_111); else
    v_111 = cdr(v_111);
    if (!car_legal(v_111)) v_111 = cdrerror(v_111); else
    v_111 = cdr(v_111);
    if (!car_legal(v_111)) v_111 = cdrerror(v_111); else
    v_111 = cdr(v_111);
    if (!car_legal(v_111)) v_111 = cdrerror(v_111); else
    v_111 = cdr(v_111);
    if (!car_legal(v_111)) v_111 = carerror(v_111); else
    v_111 = car(v_111);
    v_111 = list2(v_112, v_111);
    {
        LispObject v_121 = stack[-7];
        LispObject v_122 = stack[-1];
        LispObject v_123 = stack[0];
        return list3star(v_121, v_122, v_123, v_111);
    }
    v_111 = nil;
v_6:
    return onevalue(v_111);
}



// Code for talp_nextt

static LispObject CC_talp_nextt(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_198, v_199, v_200;
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
    stack[-9] = nil;
    {   LispObject fn = basic_elt(env, 1); // talp_getl
    v_198 = (*qfn0(fn))(fn);
    }
    env = stack[-10];
    stack[-3] = v_198;
v_19:
    v_198 = stack[-3];
    if (v_198 == nil) goto v_24;
    else goto v_25;
v_24:
    v_198 = nil;
    goto v_18;
v_25:
    v_198 = stack[-3];
    if (!car_legal(v_198)) v_198 = carerror(v_198); else
    v_198 = car(v_198);
    v_200 = v_198;
    v_198 = v_200;
    if (!car_legal(v_198)) v_199 = cdrerror(v_198); else
    v_199 = cdr(v_198);
    v_198 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_199 == v_198) goto v_33;
    else goto v_34;
v_33:
    v_198 = v_200;
    if (!car_legal(v_198)) v_199 = carerror(v_198); else
    v_199 = car(v_198);
    v_198 = stack[-9];
    v_198 = cons(v_199, v_198);
    env = stack[-10];
    stack[-9] = v_198;
    v_198 = nil;
    goto v_32;
v_34:
    v_198 = stack[-6];
    v_199 = v_200;
    {   LispObject fn = basic_elt(env, 2); // talp_mk!-invs
    v_198 = (*qfn2(fn))(fn, v_198, v_199);
    }
    env = stack[-10];
    goto v_32;
    v_198 = nil;
v_32:
    stack[-2] = v_198;
    v_198 = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // lastpair
    v_198 = (*qfn1(fn))(fn, v_198);
    }
    env = stack[-10];
    stack[-1] = v_198;
    v_198 = stack[-3];
    if (!car_legal(v_198)) v_198 = cdrerror(v_198); else
    v_198 = cdr(v_198);
    stack[-3] = v_198;
    v_198 = stack[-1];
    if (!consp(v_198)) goto v_54;
    else goto v_55;
v_54:
    goto v_19;
v_55:
v_20:
    v_198 = stack[-3];
    if (v_198 == nil) goto v_59;
    else goto v_60;
v_59:
    v_198 = stack[-2];
    goto v_18;
v_60:
    stack[0] = stack[-1];
    v_198 = stack[-3];
    if (!car_legal(v_198)) v_198 = carerror(v_198); else
    v_198 = car(v_198);
    v_200 = v_198;
    v_198 = v_200;
    if (!car_legal(v_198)) v_199 = cdrerror(v_198); else
    v_199 = cdr(v_198);
    v_198 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_199 == v_198) goto v_69;
    else goto v_70;
v_69:
    v_198 = v_200;
    if (!car_legal(v_198)) v_199 = carerror(v_198); else
    v_199 = car(v_198);
    v_198 = stack[-9];
    v_198 = cons(v_199, v_198);
    env = stack[-10];
    stack[-9] = v_198;
    v_198 = nil;
    goto v_68;
v_70:
    v_198 = stack[-6];
    v_199 = v_200;
    {   LispObject fn = basic_elt(env, 2); // talp_mk!-invs
    v_198 = (*qfn2(fn))(fn, v_198, v_199);
    }
    env = stack[-10];
    goto v_68;
    v_198 = nil;
v_68:
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_198);
    v_198 = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // lastpair
    v_198 = (*qfn1(fn))(fn, v_198);
    }
    env = stack[-10];
    stack[-1] = v_198;
    v_198 = stack[-3];
    if (!car_legal(v_198)) v_198 = cdrerror(v_198); else
    v_198 = cdr(v_198);
    stack[-3] = v_198;
    goto v_20;
v_18:
    {   LispObject fn = basic_elt(env, 4); // talp_list2vec
    v_198 = (*qfn1(fn))(fn, v_198);
    }
    env = stack[-10];
    stack[-5] = v_198;
    v_198 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-4] = v_198;
v_95:
    v_198 = stack[-5];
    v_199 = Lupbv(nil, v_198);
    env = stack[-10];
    v_198 = stack[-4];
    v_198 = difference2(v_199, v_198);
    env = stack[-10];
    v_198 = Lminusp(nil, v_198);
    env = stack[-10];
    if (v_198 == nil) goto v_101;
    v_198 = nil;
    goto v_94;
v_101:
    v_199 = stack[-5];
    v_198 = stack[-4];
    v_198 = Lgetv(nil, v_199, v_198);
    env = stack[-10];
    stack[0] = v_198;
    v_198 = stack[0];
    {   LispObject fn = basic_elt(env, 5); // talp_invp
    v_198 = (*qfn1(fn))(fn, v_198);
    }
    env = stack[-10];
    if (v_198 == nil) goto v_115;
    v_198 = stack[0];
    v_198 = ncons(v_198);
    env = stack[-10];
    goto v_113;
v_115:
    v_198 = nil;
v_113:
    stack[-3] = v_198;
    v_198 = stack[-3];
    {   LispObject fn = basic_elt(env, 3); // lastpair
    v_198 = (*qfn1(fn))(fn, v_198);
    }
    env = stack[-10];
    stack[-2] = v_198;
    v_198 = stack[-4];
    v_198 = add1(v_198);
    env = stack[-10];
    stack[-4] = v_198;
    v_198 = stack[-2];
    if (!consp(v_198)) goto v_126;
    else goto v_127;
v_126:
    goto v_95;
v_127:
v_96:
    v_198 = stack[-5];
    v_199 = Lupbv(nil, v_198);
    env = stack[-10];
    v_198 = stack[-4];
    v_198 = difference2(v_199, v_198);
    env = stack[-10];
    v_198 = Lminusp(nil, v_198);
    env = stack[-10];
    if (v_198 == nil) goto v_132;
    v_198 = stack[-3];
    goto v_94;
v_132:
    stack[-1] = stack[-2];
    v_199 = stack[-5];
    v_198 = stack[-4];
    v_198 = Lgetv(nil, v_199, v_198);
    env = stack[-10];
    stack[0] = v_198;
    v_198 = stack[0];
    {   LispObject fn = basic_elt(env, 5); // talp_invp
    v_198 = (*qfn1(fn))(fn, v_198);
    }
    env = stack[-10];
    if (v_198 == nil) goto v_147;
    v_198 = stack[0];
    v_198 = ncons(v_198);
    env = stack[-10];
    goto v_145;
v_147:
    v_198 = nil;
v_145:
    if (!car_legal(stack[-1])) rplacd_fails(stack[-1]);
    setcdr(stack[-1], v_198);
    v_198 = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // lastpair
    v_198 = (*qfn1(fn))(fn, v_198);
    }
    env = stack[-10];
    stack[-2] = v_198;
    v_198 = stack[-4];
    v_198 = add1(v_198);
    env = stack[-10];
    stack[-4] = v_198;
    goto v_96;
v_94:
    {   LispObject fn = basic_elt(env, 4); // talp_list2vec
    v_198 = (*qfn1(fn))(fn, v_198);
    }
    env = stack[-10];
    stack[-1] = v_198;
    v_198 = stack[-9];
    v_199 = Lnreverse(nil, v_198);
    env = stack[-10];
    v_198 = stack[-6];
    v_198 = Lnconc(nil, v_199, v_198);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 4); // talp_list2vec
    v_198 = (*qfn1(fn))(fn, v_198);
    }
    env = stack[-10];
    stack[0] = v_198;
    v_198 = stack[-6];
    {   LispObject fn = basic_elt(env, 4); // talp_list2vec
    v_198 = (*qfn1(fn))(fn, v_198);
    }
    env = stack[-10];
    v_199 = v_198;
    v_198 = stack[-8];
    if (v_198 == nil) goto v_167;
    stack[-3] = stack[-8];
    stack[-2] = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-4] = stack[-7];
    stack[-6] = stack[0];
    stack[0] = v_199;
    v_199 = stack[-1];
    v_198 = nil;
    v_198 = list2(v_199, v_198);
    env = stack[-10];
    v_198 = list3star(stack[-6], stack[0], stack[-5], v_198);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 6); // talp_nextt1
    v_198 = (*qfn4up(fn))(fn, stack[-3], stack[-2], stack[-4], v_198);
    }
    v_199 = v_198;
    v_198 = v_199;
    if (!car_legal(v_198)) v_198 = carerror(v_198); else
    v_198 = car(v_198);
    if (v_198 == nil) goto v_184;
    v_198 = v_199;
    if (!car_legal(v_198)) v_198 = cdrerror(v_198); else
    v_198 = cdr(v_198);
    goto v_182;
v_184:
    v_198 = nil;
v_182:
    goto v_165;
v_167:
    v_198 = stack[0];
    v_199 = Lupbv(nil, v_198);
    env = stack[-10];
    v_198 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    v_198 = static_cast<LispObject>(greaterp2(v_199, v_198));
    v_198 = v_198 ? lisp_true : nil;
    if (v_198 == nil) goto v_190;
    v_199 = stack[0];
    v_198 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
        return Lgetv(nil, v_199, v_198);
v_190:
    v_198 = nil;
v_165:
    return onevalue(v_198);
}



// Code for qqe_length!-graph!-bterm

static LispObject CC_qqe_lengthKgraphKbterm(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    v_56 = stack[-1];
    if (v_56 == nil) goto v_13;
    else goto v_14;
v_13:
    v_56 = lisp_true;
    goto v_12;
v_14:
    v_56 = stack[-1];
    v_56 = (consp(v_56) ? nil : lisp_true);
    goto v_12;
    v_56 = nil;
v_12:
    if (v_56 == nil) goto v_10;
    v_56 = stack[0];
    goto v_6;
v_10:
    v_56 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // qqe_op
    v_57 = (*qfn1(fn))(fn, v_56);
    }
    env = stack[-2];
    v_56 = basic_elt(env, 1); // (lhead rhead)
    v_56 = Lmemq(nil, v_57, v_56);
    if (v_56 == nil) goto v_25;
    v_57 = stack[-1];
    v_56 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // qqe_length!-graph!-bterm!-update!-headmin
    v_56 = (*qfn2(fn))(fn, v_57, v_56);
    }
    stack[0] = v_56;
    goto v_23;
v_25:
    v_56 = stack[-1];
    if (!car_legal(v_56)) v_56 = cdrerror(v_56); else
    v_56 = cdr(v_56);
    stack[-1] = v_56;
v_38:
    v_56 = stack[-1];
    if (v_56 == nil) goto v_43;
    else goto v_44;
v_43:
    goto v_37;
v_44:
    v_56 = stack[-1];
    if (!car_legal(v_56)) v_56 = carerror(v_56); else
    v_56 = car(v_56);
    v_57 = v_56;
    v_56 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // qqe_length!-graph!-bterm
    v_56 = (*qfn2(fn))(fn, v_57, v_56);
    }
    env = stack[-2];
    stack[0] = v_56;
    v_56 = stack[-1];
    if (!car_legal(v_56)) v_56 = cdrerror(v_56); else
    v_56 = cdr(v_56);
    stack[-1] = v_56;
    goto v_38;
v_37:
    goto v_23;
v_23:
    v_56 = stack[0];
v_6:
    return onevalue(v_56);
}



// Code for !*kp2q

static LispObject CC_Hkp2q(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    v_36 = stack[0];
    v_35 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_35 = static_cast<LispObject>(greaterp2(v_36, v_35));
    v_35 = v_35 ? lisp_true : nil;
    env = stack[-2];
    if (v_35 == nil) goto v_8;
    v_36 = stack[-1];
    v_35 = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // mksq
        return (*qfn2(fn))(fn, v_36, v_35);
    }
v_8:
    v_35 = stack[0];
    v_35 = static_cast<LispObject>(zerop(v_35));
    v_35 = v_35 ? lisp_true : nil;
    env = stack[-2];
    if (v_35 == nil) goto v_16;
    v_36 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_35 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_36, v_35);
v_16:
    v_35 = stack[0];
    v_35 = negate(v_35);
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 2); // mksq
    v_35 = (*qfn2(fn))(fn, stack[-1], v_35);
    }
    env = stack[-2];
    stack[-1] = v_35;
    if (!car_legal(v_35)) v_35 = carerror(v_35); else
    v_35 = car(v_35);
    if (v_35 == nil) goto v_22;
    else goto v_23;
v_22:
    v_35 = basic_elt(env, 1); // "Zero divisor"
    {
        LispObject fn = basic_elt(env, 3); // rederr
        return (*qfn1(fn))(fn, v_35);
    }
v_23:
    v_35 = stack[-1];
    {
        LispObject fn = basic_elt(env, 4); // revpr
        return (*qfn1(fn))(fn, v_35);
    }
    v_35 = nil;
    return onevalue(v_35);
}



// Code for physopplus

static LispObject CC_physopplus(LispObject env,
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_58 = stack[0];
    if (!car_legal(v_58)) v_58 = carerror(v_58); else
    v_58 = car(v_58);
    {   LispObject fn = basic_elt(env, 2); // physopsim!*
    v_58 = (*qfn1(fn))(fn, v_58);
    }
    env = stack[-4];
    stack[-3] = v_58;
    v_58 = stack[0];
    if (!car_legal(v_58)) v_58 = cdrerror(v_58); else
    v_58 = cdr(v_58);
    stack[0] = v_58;
v_16:
    v_58 = stack[0];
    if (v_58 == nil) goto v_21;
    else goto v_22;
v_21:
    goto v_15;
v_22:
    v_58 = stack[0];
    if (!car_legal(v_58)) v_58 = carerror(v_58); else
    v_58 = car(v_58);
    {   LispObject fn = basic_elt(env, 2); // physopsim!*
    v_58 = (*qfn1(fn))(fn, v_58);
    }
    env = stack[-4];
    stack[-2] = v_58;
    v_58 = stack[-3];
    {   LispObject fn = basic_elt(env, 3); // getphystype
    v_58 = (*qfn1(fn))(fn, v_58);
    }
    env = stack[-4];
    stack[-1] = v_58;
    v_58 = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // getphystype
    v_58 = (*qfn1(fn))(fn, v_58);
    }
    env = stack[-4];
    v_59 = v_58;
    if (v_59 == nil) goto v_37;
    v_59 = stack[-1];
    if (v_59 == nil) goto v_37;
    v_59 = stack[-1];
    if (v_59 == v_58) goto v_37;
    v_59 = basic_elt(env, 0); // physopplus
    v_58 = basic_elt(env, 1); // "type mismatch in plus "
    {   LispObject fn = basic_elt(env, 4); // rederr2
    v_58 = (*qfn2(fn))(fn, v_59, v_58);
    }
    env = stack[-4];
    goto v_35;
v_37:
v_35:
    v_58 = stack[-3];
    {   LispObject fn = basic_elt(env, 5); // physop2sq
    stack[-1] = (*qfn1(fn))(fn, v_58);
    }
    env = stack[-4];
    v_58 = stack[-2];
    {   LispObject fn = basic_elt(env, 5); // physop2sq
    v_58 = (*qfn1(fn))(fn, v_58);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 6); // addsq
    v_58 = (*qfn2(fn))(fn, stack[-1], v_58);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 7); // mk!*sq
    v_58 = (*qfn1(fn))(fn, v_58);
    }
    env = stack[-4];
    stack[-3] = v_58;
    v_58 = stack[0];
    if (!car_legal(v_58)) v_58 = cdrerror(v_58); else
    v_58 = cdr(v_58);
    stack[0] = v_58;
    goto v_16;
v_15:
    v_58 = stack[-3];
    return onevalue(v_58);
}



// Code for mk!-strand!-vertex

static LispObject CC_mkKstrandKvertex(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_41, v_42, v_43;
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
    v_41 = v_3;
    stack[-2] = v_2;
// end of prologue
    v_43 = stack[-2];
    v_42 = v_41;
    v_41 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 1); // incident
    v_41 = (*qfn3(fn))(fn, v_43, v_42, v_41);
    }
    env = stack[-4];
    v_42 = v_41;
    v_41 = v_42;
    if (!car_legal(v_41)) v_41 = carerror(v_41); else
    v_41 = car(v_41);
    stack[-3] = v_41;
    stack[-1] = stack[-2];
    v_41 = v_42;
    if (!car_legal(v_41)) stack[0] = cdrerror(v_41); else
    stack[0] = cdr(v_41);
    v_41 = stack[-3];
    if (!car_legal(v_41)) v_41 = carerror(v_41); else
    v_41 = car(v_41);
    if (!car_legal(v_41)) v_41 = cdrerror(v_41); else
    v_41 = cdr(v_41);
    v_41 = add1(v_41);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 1); // incident
    v_41 = (*qfn3(fn))(fn, stack[-1], stack[0], v_41);
    }
    env = stack[-4];
    v_42 = v_41;
    v_41 = v_42;
    if (v_41 == nil) goto v_26;
    else goto v_27;
v_26:
    v_42 = stack[-2];
    v_41 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_41 = cons(v_42, v_41);
    env = stack[-4];
    v_41 = ncons(v_41);
    env = stack[-4];
    goto v_25;
v_27:
    v_41 = v_42;
    if (!car_legal(v_41)) v_41 = carerror(v_41); else
    v_41 = car(v_41);
    goto v_25;
    v_41 = nil;
v_25:
    v_43 = stack[-2];
    v_42 = stack[-3];
    {
        LispObject fn = basic_elt(env, 2); // mk!-strand!-vertex2
        return (*qfn3(fn))(fn, v_43, v_42, v_41);
    }
    return onevalue(v_41);
}



// Code for lchk

static LispObject CC_lchk(LispObject env,
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
    if (v_60 == nil) goto v_14;
    else goto v_15;
v_14:
    v_60 = lisp_true;
    goto v_13;
v_15:
    v_60 = stack[0];
    if (!car_legal(v_60)) v_60 = carerror(v_60); else
    v_60 = car(v_60);
    v_60 = (consp(v_60) ? nil : lisp_true);
    goto v_13;
    v_60 = nil;
v_13:
    if (v_60 == nil) goto v_11;
    v_60 = nil;
    goto v_6;
v_11:
    v_60 = stack[0];
    if (!car_legal(v_60)) v_60 = carerror(v_60); else
    v_60 = car(v_60);
    v_60 = Llength(nil, v_60);
    env = stack[-2];
    stack[-1] = v_60;
v_29:
    v_60 = stack[0];
    if (!car_legal(v_60)) v_60 = cdrerror(v_60); else
    v_60 = cdr(v_60);
    stack[0] = v_60;
    v_60 = stack[0];
    if (v_60 == nil) goto v_38;
    else goto v_39;
v_38:
    v_60 = lisp_true;
    goto v_37;
v_39:
    v_60 = stack[0];
    if (!car_legal(v_60)) v_60 = carerror(v_60); else
    v_60 = car(v_60);
    if (!consp(v_60)) goto v_46;
    else goto v_47;
v_46:
    v_60 = lisp_true;
    goto v_45;
v_47:
    v_60 = stack[0];
    if (!car_legal(v_60)) v_60 = carerror(v_60); else
    v_60 = car(v_60);
    v_61 = Llength(nil, v_60);
    env = stack[-2];
    v_60 = stack[-1];
    v_60 = Lneq_2(nil, v_61, v_60);
    env = stack[-2];
    goto v_45;
    v_60 = nil;
v_45:
    goto v_37;
    v_60 = nil;
v_37:
    if (v_60 == nil) goto v_34;
    else goto v_35;
v_34:
    goto v_29;
v_35:
    v_60 = stack[0];
    v_60 = (v_60 == nil ? lisp_true : nil);
v_6:
    return onevalue(v_60);
}



// Code for rationalizef

static LispObject CC_rationalizef(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_142, v_143;
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
    v_142 = stack[-2];
    {   LispObject fn = basic_elt(env, 8); // kernels
    v_142 = (*qfn1(fn))(fn, v_142);
    }
    env = stack[-4];
    stack[0] = v_142;
    stack[-3] = v_142;
v_9:
    v_142 = stack[-3];
    if (v_142 == nil) goto v_14;
    else goto v_15;
v_14:
    v_142 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_8;
v_15:
    v_142 = stack[-3];
    if (!car_legal(v_142)) v_142 = carerror(v_142); else
    v_142 = car(v_142);
    stack[-1] = v_142;
    v_143 = stack[-1];
    v_142 = basic_elt(env, 1); // expt
    if (!consp(v_143)) goto v_27;
    v_143 = car(v_143);
    if (v_143 == v_142) goto v_26;
    else goto v_27;
v_26:
    v_142 = stack[-1];
    if (!car_legal(v_142)) v_142 = cdrerror(v_142); else
    v_142 = cdr(v_142);
    if (!car_legal(v_142)) v_142 = cdrerror(v_142); else
    v_142 = cdr(v_142);
    if (!car_legal(v_142)) v_143 = carerror(v_142); else
    v_143 = car(v_142);
    v_142 = basic_elt(env, 2); // quotient
    if (!consp(v_143)) goto v_34;
    v_143 = car(v_143);
    if (v_143 == v_142) goto v_33;
    else goto v_34;
v_33:
    v_143 = stack[0];
    v_142 = stack[-1];
    if (!car_legal(v_142)) v_142 = cdrerror(v_142); else
    v_142 = cdr(v_142);
    {   LispObject fn = basic_elt(env, 9); // lowertowerp
    v_142 = (*qfn2(fn))(fn, v_143, v_142);
    }
    env = stack[-4];
    goto v_32;
v_34:
    v_142 = nil;
    goto v_32;
    v_142 = nil;
v_32:
    goto v_25;
v_27:
    v_142 = nil;
    goto v_25;
    v_142 = nil;
v_25:
    if (v_142 == nil) goto v_23;
    goto v_21;
v_23:
    v_143 = stack[-1];
    v_142 = basic_elt(env, 3); // i
    if (v_143 == v_142) goto v_56;
    else goto v_57;
v_56:
    v_142 = lisp_true;
    goto v_55;
v_57:
    v_143 = stack[-1];
    v_142 = basic_elt(env, 1); // expt
    if (!consp(v_143)) goto v_70;
    v_143 = car(v_143);
    if (v_143 == v_142) goto v_69;
    else goto v_70;
v_69:
    v_142 = stack[-1];
    if (!car_legal(v_142)) v_142 = cdrerror(v_142); else
    v_142 = cdr(v_142);
    if (!car_legal(v_142)) v_142 = cdrerror(v_142); else
    v_142 = cdr(v_142);
    if (!car_legal(v_142)) v_143 = carerror(v_142); else
    v_143 = car(v_142);
    v_142 = basic_elt(env, 4); // (quotient 1 2)
    v_142 = (equal(v_143, v_142) ? lisp_true : nil);
    goto v_68;
v_70:
    v_142 = nil;
    goto v_68;
    v_142 = nil;
v_68:
    if (v_142 == nil) goto v_66;
    v_142 = lisp_true;
    goto v_64;
v_66:
    v_143 = stack[-1];
    v_142 = basic_elt(env, 5); // sqrt
    v_142 = Leqcar(nil, v_143, v_142);
    env = stack[-4];
    goto v_64;
    v_142 = nil;
v_64:
    goto v_55;
    v_142 = nil;
v_55:
    if (v_142 == nil) goto v_53;
    v_143 = stack[-2];
    v_142 = stack[-1];
    {   LispObject fn = basic_elt(env, 10); // mkmain
    v_143 = (*qfn2(fn))(fn, v_143, v_142);
    }
    env = stack[-4];
    v_142 = stack[-1];
    {
        LispObject fn = basic_elt(env, 11); // conjquadratic
        return (*qfn2(fn))(fn, v_143, v_142);
    }
v_53:
    v_143 = stack[-1];
    v_142 = basic_elt(env, 1); // expt
    if (!consp(v_143)) goto v_99;
    v_143 = car(v_143);
    if (v_143 == v_142) goto v_98;
    else goto v_99;
v_98:
    v_142 = stack[-1];
    if (!car_legal(v_142)) v_142 = cdrerror(v_142); else
    v_142 = cdr(v_142);
    if (!car_legal(v_142)) v_142 = cdrerror(v_142); else
    v_142 = cdr(v_142);
    if (!car_legal(v_142)) v_143 = carerror(v_142); else
    v_143 = car(v_142);
    v_142 = basic_elt(env, 6); // (quotient 1 3)
    v_142 = (equal(v_143, v_142) ? lisp_true : nil);
    goto v_97;
v_99:
    v_142 = nil;
    goto v_97;
    v_142 = nil;
v_97:
    if (v_142 == nil) goto v_95;
    v_143 = stack[-2];
    v_142 = stack[-1];
    {   LispObject fn = basic_elt(env, 10); // mkmain
    v_143 = (*qfn2(fn))(fn, v_143, v_142);
    }
    env = stack[-4];
    v_142 = stack[-1];
    {
        LispObject fn = basic_elt(env, 12); // conjcubic
        return (*qfn2(fn))(fn, v_143, v_142);
    }
v_95:
    v_143 = stack[-1];
    v_142 = basic_elt(env, 1); // expt
    if (!consp(v_143)) goto v_122;
    v_143 = car(v_143);
    if (v_143 == v_142) goto v_121;
    else goto v_122;
v_121:
    v_142 = stack[-1];
    if (!car_legal(v_142)) v_142 = cdrerror(v_142); else
    v_142 = cdr(v_142);
    if (!car_legal(v_142)) v_142 = cdrerror(v_142); else
    v_142 = cdr(v_142);
    if (!car_legal(v_142)) v_143 = carerror(v_142); else
    v_143 = car(v_142);
    v_142 = basic_elt(env, 7); // (quotient 1 4)
    v_142 = (equal(v_143, v_142) ? lisp_true : nil);
    goto v_120;
v_122:
    v_142 = nil;
    goto v_120;
    v_142 = nil;
v_120:
    if (v_142 == nil) goto v_118;
    v_143 = stack[-2];
    v_142 = stack[-1];
    {   LispObject fn = basic_elt(env, 10); // mkmain
    v_143 = (*qfn2(fn))(fn, v_143, v_142);
    }
    env = stack[-4];
    v_142 = stack[-1];
    {
        LispObject fn = basic_elt(env, 13); // conjquartic
        return (*qfn2(fn))(fn, v_143, v_142);
    }
v_118:
v_21:
    v_142 = stack[-3];
    if (!car_legal(v_142)) v_142 = cdrerror(v_142); else
    v_142 = cdr(v_142);
    stack[-3] = v_142;
    goto v_9;
v_8:
    return onevalue(v_142);
}



// Code for all_index_lst

static LispObject CC_all_index_lst(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[-1] = v_2;
// end of prologue
    stack[-2] = nil;
v_8:
    v_55 = stack[-1];
    if (v_55 == nil) goto v_13;
    else goto v_14;
v_13:
    goto v_9;
v_14:
    v_55 = stack[-1];
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    if (!car_legal(v_55)) v_55 = cdrerror(v_55); else
    v_55 = cdr(v_55);
    stack[0] = v_55;
    v_55 = stack[0];
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    {   LispObject fn = basic_elt(env, 2); // listp
    v_55 = (*qfn1(fn))(fn, v_55);
    }
    env = stack[-3];
    if (v_55 == nil) goto v_24;
    v_55 = stack[0];
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    if (!car_legal(v_55)) v_56 = carerror(v_55); else
    v_56 = car(v_55);
    v_55 = basic_elt(env, 1); // list
    if (v_56 == v_55) goto v_29;
    else goto v_24;
v_29:
    v_55 = stack[0];
    if (!car_legal(v_55)) v_55 = cdrerror(v_55); else
    v_55 = cdr(v_55);
    v_56 = v_55;
    goto v_22;
v_24:
    v_55 = stack[0];
    v_56 = v_55;
    goto v_22;
    v_56 = nil;
v_22:
    v_55 = stack[-2];
    v_55 = cons(v_56, v_55);
    env = stack[-3];
    stack[-2] = v_55;
    v_55 = stack[-1];
    if (!car_legal(v_55)) v_55 = cdrerror(v_55); else
    v_55 = cdr(v_55);
    stack[-1] = v_55;
    goto v_8;
v_9:
    v_55 = nil;
    v_56 = v_55;
v_10:
    v_55 = stack[-2];
    if (v_55 == nil) goto v_45;
    else goto v_46;
v_45:
    v_55 = v_56;
    goto v_7;
v_46:
    v_55 = stack[-2];
    v_55 = car(v_55);
    v_55 = Lappend_2(nil, v_55, v_56);
    env = stack[-3];
    v_56 = v_55;
    v_55 = stack[-2];
    v_55 = cdr(v_55);
    stack[-2] = v_55;
    goto v_10;
v_7:
    return onevalue(v_55);
}



// Code for bfprin0x

static LispObject CC_bfprin0x(LispObject env,
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
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_27 = v_3;
    v_26 = v_2;
// end of prologue
    {   LispObject fn = basic_elt(env, 1); // bfexplode0x
    v_26 = (*qfn2(fn))(fn, v_26, v_27);
    }
    env = stack[0];
    v_27 = v_26;
    if (!car_legal(v_27)) v_27 = cdrerror(v_27); else
    v_27 = cdr(v_27);
    if (!car_legal(v_27)) v_27 = carerror(v_27); else
    v_27 = car(v_27);
    v_28 = v_26;
    if (!car_legal(v_28)) v_28 = cdrerror(v_28); else
    v_28 = cdr(v_28);
    if (!car_legal(v_28)) v_28 = cdrerror(v_28); else
    v_28 = cdr(v_28);
    if (!car_legal(v_28)) v_28 = carerror(v_28); else
    v_28 = car(v_28);
    if (!car_legal(v_26)) v_26 = carerror(v_26); else
    v_26 = car(v_26);
    {
        LispObject fn = basic_elt(env, 2); // bfprin!:lst
        return (*qfn3(fn))(fn, v_26, v_27, v_28);
    }
    return onevalue(v_26);
}



// Code for addcoeffs

static LispObject CC_addcoeffs(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_80, v_81;
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
    stack[0] = v_5;
    stack[-2] = v_4;
    stack[-3] = v_3;
    stack[-4] = v_2;
// end of prologue
    v_81 = nil;
    v_80 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_80 = cons(v_81, v_80);
    env = stack[-6];
    stack[-1] = v_80;
    v_80 = stack[-4];
    {   LispObject fn = basic_elt(env, 1); // smallest!-increment
    stack[-5] = (*qfn1(fn))(fn, v_80);
    }
    env = stack[-6];
    v_80 = stack[-3];
    {   LispObject fn = basic_elt(env, 1); // smallest!-increment
    v_80 = (*qfn1(fn))(fn, v_80);
    }
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 2); // common!-increment
    v_80 = (*qfn2(fn))(fn, stack[-5], v_80);
    }
    env = stack[-6];
    v_81 = v_80;
    stack[-5] = stack[-2];
    stack[-2] = stack[0];
    v_80 = stack[-3];
    if (!car_legal(v_80)) v_80 = carerror(v_80); else
    v_80 = car(v_80);
    if (!car_legal(v_80)) stack[0] = carerror(v_80); else
    stack[0] = car(v_80);
    v_80 = v_81;
    v_80 = ncons(v_80);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 3); // makecoeffpairs
    v_80 = (*qfn4up(fn))(fn, stack[-5], stack[-2], stack[0], v_80);
    }
    env = stack[-6];
    stack[-5] = v_80;
v_22:
    v_80 = stack[-5];
    if (v_80 == nil) goto v_33;
    else goto v_34;
v_33:
    goto v_21;
v_34:
    v_80 = stack[-5];
    if (!car_legal(v_80)) v_80 = carerror(v_80); else
    v_80 = car(v_80);
    stack[-2] = v_80;
    v_80 = stack[-2];
    if (!car_legal(v_80)) v_81 = carerror(v_80); else
    v_81 = car(v_80);
    v_80 = stack[-4];
    v_80 = Lassoc(nil, v_81, v_80);
    v_81 = v_80;
    v_80 = v_81;
    if (v_80 == nil) goto v_50;
    else goto v_51;
v_50:
    v_81 = nil;
    v_80 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_80 = cons(v_81, v_80);
    env = stack[-6];
    stack[0] = v_80;
    goto v_49;
v_51:
    v_80 = v_81;
    if (!car_legal(v_80)) v_80 = cdrerror(v_80); else
    v_80 = cdr(v_80);
    stack[0] = v_80;
    goto v_49;
    stack[0] = nil;
v_49:
    v_80 = stack[-2];
    if (!car_legal(v_80)) v_81 = cdrerror(v_80); else
    v_81 = cdr(v_80);
    v_80 = stack[-3];
    v_80 = Lassoc(nil, v_81, v_80);
    v_81 = v_80;
    v_80 = v_81;
    if (v_80 == nil) goto v_67;
    else goto v_68;
v_67:
    v_81 = nil;
    v_80 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_80 = cons(v_81, v_80);
    env = stack[-6];
    goto v_66;
v_68:
    v_80 = v_81;
    if (!car_legal(v_80)) v_80 = cdrerror(v_80); else
    v_80 = cdr(v_80);
    goto v_66;
    v_80 = nil;
v_66:
    {   LispObject fn = basic_elt(env, 4); // multsq
    v_80 = (*qfn2(fn))(fn, stack[0], v_80);
    }
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 5); // addsq
    v_80 = (*qfn2(fn))(fn, stack[-1], v_80);
    }
    env = stack[-6];
    stack[-1] = v_80;
    v_80 = stack[-5];
    if (!car_legal(v_80)) v_80 = cdrerror(v_80); else
    v_80 = cdr(v_80);
    stack[-5] = v_80;
    goto v_22;
v_21:
    v_80 = stack[-1];
    return onevalue(v_80);
}



// Code for mrv_constantp

static LispObject CC_mrv_constantp(LispObject env,
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
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_32 = v_3;
    v_33 = v_2;
// end of prologue
    v_31 = v_33;
    v_31 = (is_number(v_31) ? lisp_true : nil);
    if (v_31 == nil) goto v_7;
    else goto v_6;
v_7:
    v_31 = v_33;
    if (!consp(v_31)) goto v_16;
    else goto v_17;
v_16:
    v_34 = v_33;
    v_31 = basic_elt(env, 1); // constant
    v_31 = Lflagp(nil, v_34, v_31);
    env = stack[0];
    goto v_15;
v_17:
    v_31 = nil;
    goto v_15;
    v_31 = nil;
v_15:
    if (v_31 == nil) goto v_13;
    v_31 = lisp_true;
    goto v_11;
v_13:
    v_31 = v_33;
    {
        LispObject fn = basic_elt(env, 2); // freeof
        return (*qfn2(fn))(fn, v_31, v_32);
    }
    v_31 = nil;
v_11:
v_6:
    return onevalue(v_31);
}



// Code for equal!+matrices!+p

static LispObject CC_equalLmatricesLp(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_99, v_100, v_101;
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
    stack[-1] = v_2;
// end of prologue
    v_100 = stack[-1];
    v_99 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // same!+dim!+squared!+p
    v_99 = (*qfn2(fn))(fn, v_100, v_99);
    }
    env = stack[-4];
    if (v_99 == nil) goto v_18;
    v_100 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    v_99 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_100 = cons(v_100, v_99);
    env = stack[-4];
    v_99 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // mk!+scal!+mult!+mat
    v_99 = (*qfn2(fn))(fn, v_100, v_99);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 4); // mk!+mat!+plus!+mat
    v_99 = (*qfn2(fn))(fn, stack[-1], v_99);
    }
    env = stack[-4];
    stack[0] = v_99;
    v_100 = nil;
    v_99 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_99 = cons(v_100, v_99);
    env = stack[-4];
    v_101 = v_99;
    v_99 = stack[0];
    stack[-3] = v_99;
v_35:
    v_99 = stack[-3];
    if (v_99 == nil) goto v_39;
    else goto v_40;
v_39:
    goto v_34;
v_40:
    v_99 = stack[-3];
    if (!car_legal(v_99)) v_99 = carerror(v_99); else
    v_99 = car(v_99);
    stack[-2] = v_99;
v_49:
    v_99 = stack[-2];
    if (v_99 == nil) goto v_53;
    else goto v_54;
v_53:
    goto v_48;
v_54:
    v_99 = stack[-2];
    if (!car_legal(v_99)) v_99 = carerror(v_99); else
    v_99 = car(v_99);
    v_100 = v_99;
    v_99 = qvalue(basic_elt(env, 1)); // !*complex
    if (v_99 == nil) goto v_63;
    stack[-1] = v_101;
    stack[0] = v_100;
    v_99 = v_100;
    {   LispObject fn = basic_elt(env, 5); // mk!+conjugate!+sq
    v_99 = (*qfn1(fn))(fn, v_99);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 6); // multsq
    v_99 = (*qfn2(fn))(fn, stack[0], v_99);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 7); // addsq
    v_99 = (*qfn2(fn))(fn, stack[-1], v_99);
    }
    env = stack[-4];
    v_101 = v_99;
    goto v_61;
v_63:
    stack[0] = v_101;
    v_99 = v_100;
    {   LispObject fn = basic_elt(env, 6); // multsq
    v_99 = (*qfn2(fn))(fn, v_99, v_100);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 7); // addsq
    v_99 = (*qfn2(fn))(fn, stack[0], v_99);
    }
    env = stack[-4];
    v_101 = v_99;
    goto v_61;
v_61:
    v_99 = stack[-2];
    if (!car_legal(v_99)) v_99 = cdrerror(v_99); else
    v_99 = cdr(v_99);
    stack[-2] = v_99;
    goto v_49;
v_48:
    v_99 = stack[-3];
    if (!car_legal(v_99)) v_99 = cdrerror(v_99); else
    v_99 = cdr(v_99);
    stack[-3] = v_99;
    goto v_35;
v_34:
    v_99 = v_101;
    {   LispObject fn = basic_elt(env, 8); // change!+sq!+to!+algnull
    v_99 = (*qfn1(fn))(fn, v_99);
    }
    v_100 = v_99;
    v_99 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_100 == v_99) goto v_86;
    else goto v_87;
v_86:
    v_99 = lisp_true;
    goto v_85;
v_87:
    v_99 = nil;
    goto v_85;
v_85:
    goto v_16;
v_18:
    v_99 = nil;
    goto v_16;
v_16:
    return onevalue(v_99);
}



// Code for bc_pmon

static LispObject CC_bc_pmon(LispObject env,
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



// Code for vevzero!?1

static LispObject CC_vevzeroW1(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_46, v_47, v_48;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_47 = v_2;
// end of prologue
v_1:
    v_46 = v_47;
    if (v_46 == nil) goto v_6;
    else goto v_7;
v_6:
    v_46 = lisp_true;
    goto v_5;
v_7:
    v_46 = v_47;
    if (!car_legal(v_46)) v_48 = carerror(v_46); else
    v_48 = car(v_46);
    v_46 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_48 == v_46) goto v_14;
    else goto v_15;
v_14:
    v_46 = v_47;
    if (!car_legal(v_46)) v_46 = cdrerror(v_46); else
    v_46 = cdr(v_46);
    if (v_46 == nil) goto v_21;
    else goto v_22;
v_21:
    v_46 = lisp_true;
    goto v_20;
v_22:
    v_46 = v_47;
    if (!car_legal(v_46)) v_46 = cdrerror(v_46); else
    v_46 = cdr(v_46);
    if (!car_legal(v_46)) v_48 = carerror(v_46); else
    v_48 = car(v_46);
    v_46 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_48 == v_46) goto v_30;
    else goto v_31;
v_30:
    v_46 = v_47;
    if (!car_legal(v_46)) v_46 = cdrerror(v_46); else
    v_46 = cdr(v_46);
    if (!car_legal(v_46)) v_46 = cdrerror(v_46); else
    v_46 = cdr(v_46);
    v_47 = v_46;
    goto v_1;
v_31:
    v_46 = nil;
    goto v_29;
    v_46 = nil;
v_29:
    goto v_20;
    v_46 = nil;
v_20:
    goto v_13;
v_15:
    v_46 = nil;
    goto v_13;
    v_46 = nil;
v_13:
    goto v_5;
    v_46 = nil;
v_5:
    return onevalue(v_46);
}



// Code for remove_critical_pairs

static LispObject CC_remove_critical_pairs(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_14 = v_2;
// end of prologue
    v_15 = v_14;
    if (v_15 == nil) goto v_8;
    v_15 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // remove_items
    v_14 = (*qfn2(fn))(fn, v_15, v_14);
    }
    goto v_6;
v_8:
v_6:
    v_14 = stack[0];
    return onevalue(v_14);
}



// Code for noncom1

static LispObject CC_noncom1(LispObject env,
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
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_10 = v_2;
// end of prologue
    v_9 = lisp_true;
    setvalue(basic_elt(env, 1), v_9); // !*ncmp
    v_9 = v_10;
    v_9 = ncons(v_9);
    env = stack[0];
    v_10 = basic_elt(env, 2); // noncom
        return Lflag(nil, v_9, v_10);
}



// Code for bassoc

static LispObject CC_bassoc(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
v_7:
    v_26 = stack[0];
    if (v_26 == nil) goto v_10;
    else goto v_11;
v_10:
    v_26 = nil;
    goto v_6;
v_11:
    v_27 = stack[-1];
    v_26 = stack[0];
    if (!car_legal(v_26)) v_26 = carerror(v_26); else
    v_26 = car(v_26);
    if (!car_legal(v_26)) v_26 = carerror(v_26); else
    v_26 = car(v_26);
    {   LispObject fn = basic_elt(env, 1); // th_match
    v_26 = (*qfn2(fn))(fn, v_27, v_26);
    }
    env = stack[-2];
    if (v_26 == nil) goto v_15;
    v_26 = stack[0];
    goto v_6;
v_15:
    v_26 = stack[0];
    if (!car_legal(v_26)) v_26 = cdrerror(v_26); else
    v_26 = cdr(v_26);
    stack[0] = v_26;
    goto v_7;
    v_26 = nil;
v_6:
    return onevalue(v_26);
}



// Code for gak

static LispObject CC_gak(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_71, v_72, v_73, v_74, v_75;
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
    v_72 = v_4;
    v_73 = v_3;
    v_74 = v_2;
// end of prologue
v_1:
    v_71 = v_74;
    if (!consp(v_71)) goto v_12;
    else goto v_13;
v_12:
    v_71 = lisp_true;
    goto v_11;
v_13:
    v_71 = v_74;
    if (!car_legal(v_71)) v_71 = carerror(v_71); else
    v_71 = car(v_71);
    v_71 = (consp(v_71) ? nil : lisp_true);
    goto v_11;
    v_71 = nil;
v_11:
    if (v_71 == nil) goto v_9;
    v_71 = v_72;
    goto v_7;
v_9:
    v_71 = v_74;
    if (!car_legal(v_71)) v_71 = carerror(v_71); else
    v_71 = car(v_71);
    if (!car_legal(v_71)) v_71 = carerror(v_71); else
    v_71 = car(v_71);
    if (!car_legal(v_71)) v_71 = carerror(v_71); else
    v_71 = car(v_71);
    v_75 = v_71;
    v_71 = v_74;
    if (!car_legal(v_71)) stack[-3] = cdrerror(v_71); else
    stack[-3] = cdr(v_71);
    stack[-2] = v_73;
    v_71 = v_74;
    if (!car_legal(v_71)) v_71 = carerror(v_71); else
    v_71 = car(v_71);
    if (!car_legal(v_71)) stack[-1] = cdrerror(v_71); else
    stack[-1] = cdr(v_71);
    stack[0] = v_73;
    v_71 = v_75;
    if (!consp(v_71)) goto v_45;
    v_71 = v_75;
    if (!car_legal(v_71)) v_71 = carerror(v_71); else
    v_71 = car(v_71);
    v_71 = Lmember(nil, v_71, v_73);
    if (v_71 == nil) goto v_49;
    else goto v_50;
v_49:
    v_71 = nil;
    goto v_48;
v_50:
    v_73 = v_75;
    v_71 = v_72;
    v_71 = Lmember(nil, v_73, v_71);
    v_71 = (v_71 == nil ? lisp_true : nil);
    goto v_48;
    v_71 = nil;
v_48:
    goto v_43;
v_45:
    v_71 = nil;
    goto v_43;
    v_71 = nil;
v_43:
    if (v_71 == nil) goto v_41;
    v_71 = v_72;
    v_72 = v_75;
    {   LispObject fn = basic_elt(env, 1); // aconc
    v_71 = (*qfn2(fn))(fn, v_71, v_72);
    }
    env = stack[-4];
    goto v_39;
v_41:
    v_71 = v_72;
    goto v_39;
    v_71 = nil;
v_39:
    {   LispObject fn = basic_elt(env, 0); // gak
    v_71 = (*qfn3(fn))(fn, stack[-1], stack[0], v_71);
    }
    env = stack[-4];
    v_74 = stack[-3];
    v_73 = stack[-2];
    v_72 = v_71;
    goto v_1;
    v_71 = nil;
v_7:
    return onevalue(v_71);
}



// Code for square!-free!-mod!-p

static LispObject CC_squareKfreeKmodKp(LispObject env,
                         LispObject v_2)
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
    if (!consp(v_38)) goto v_10;
    else goto v_11;
v_10:
    v_38 = lisp_true;
    goto v_9;
v_11:
    v_38 = v_39;
    if (!car_legal(v_38)) v_38 = carerror(v_38); else
    v_38 = car(v_38);
    v_38 = (consp(v_38) ? nil : lisp_true);
    goto v_9;
    v_38 = nil;
v_9:
    if (v_38 == nil) goto v_7;
    v_38 = lisp_true;
    goto v_5;
v_7:
    stack[0] = v_39;
    v_38 = v_39;
    {   LispObject fn = basic_elt(env, 1); // derivative!-mod!-p
    v_38 = (*qfn1(fn))(fn, v_38);
    }
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // gcd!-mod!-p
    v_38 = (*qfn2(fn))(fn, stack[0], v_38);
    }
    v_39 = v_38;
    v_38 = v_39;
    if (!consp(v_38)) goto v_29;
    else goto v_30;
v_29:
    v_38 = lisp_true;
    goto v_28;
v_30:
    v_38 = v_39;
    if (!car_legal(v_38)) v_38 = carerror(v_38); else
    v_38 = car(v_38);
    v_38 = (consp(v_38) ? nil : lisp_true);
    goto v_28;
    v_38 = nil;
v_28:
    goto v_5;
    v_38 = nil;
v_5:
    return onevalue(v_38);
}



// Code for sfto_b!:cquot

static LispObject CC_sfto_bTcquot(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_30 = stack[-2];
    if (v_30 == nil) goto v_11;
    else goto v_12;
v_11:
    v_30 = stack[-3];
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn1(fn))(fn, v_30);
    }
v_12:
    v_30 = stack[-2];
    if (!car_legal(v_30)) v_30 = carerror(v_30); else
    v_30 = car(v_30);
    if (!car_legal(v_30)) stack[0] = carerror(v_30); else
    stack[0] = car(v_30);
    v_30 = stack[-2];
    if (!car_legal(v_30)) v_30 = carerror(v_30); else
    v_30 = car(v_30);
    if (!car_legal(v_30)) v_31 = cdrerror(v_30); else
    v_31 = cdr(v_30);
    v_30 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // quotf1
    v_31 = (*qfn2(fn))(fn, v_31, v_30);
    }
    env = stack[-4];
    v_30 = stack[-3];
    v_30 = acons(stack[0], v_31, v_30);
    env = stack[-4];
    stack[-3] = v_30;
    v_30 = stack[-2];
    if (!car_legal(v_30)) v_30 = cdrerror(v_30); else
    v_30 = cdr(v_30);
    stack[-2] = v_30;
    goto v_8;
    v_30 = nil;
    return onevalue(v_30);
}



// Code for operator

static LispObject CC_operator(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // mkop
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



// Code for tidysqrt

static LispObject CC_tidysqrt(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_26 = stack[0];
    if (!car_legal(v_26)) v_26 = carerror(v_26); else
    v_26 = car(v_26);
    {   LispObject fn = basic_elt(env, 1); // tidysqrtf
    v_26 = (*qfn1(fn))(fn, v_26);
    }
    env = stack[-2];
    stack[-1] = v_26;
    v_26 = stack[-1];
    if (v_26 == nil) goto v_13;
    else goto v_14;
v_13:
    v_27 = nil;
    v_26 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_27, v_26);
v_14:
    v_26 = stack[0];
    if (!car_legal(v_26)) v_26 = cdrerror(v_26); else
    v_26 = cdr(v_26);
    {   LispObject fn = basic_elt(env, 1); // tidysqrtf
    v_26 = (*qfn1(fn))(fn, v_26);
    }
    env = stack[-2];
    stack[0] = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // invsq
    v_26 = (*qfn1(fn))(fn, v_26);
    }
    env = stack[-2];
    {
        LispObject v_30 = stack[0];
        LispObject fn = basic_elt(env, 3); // multsq
        return (*qfn2(fn))(fn, v_30, v_26);
    }
    return onevalue(v_26);
}



// Code for subscriptedvarp2

static LispObject CC_subscriptedvarp2(LispObject env,
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
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_10 = v_2;
// end of prologue
    v_11 = nil;
    {   LispObject fn = basic_elt(env, 1); // symtabget
    v_10 = (*qfn2(fn))(fn, v_11, v_10);
    }
    env = stack[0];
    v_11 = Llength(nil, v_10);
    v_10 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
        return Lgreaterp_2(nil, v_11, v_10);
}



// Code for expttermp1

static LispObject CC_expttermp1(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_51, v_52, v_53, v_54;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_52 = v_3;
    v_53 = v_2;
// end of prologue
v_1:
    v_51 = v_52;
    if (v_51 == nil) goto v_7;
    else goto v_8;
v_7:
    v_51 = nil;
    goto v_6;
v_8:
    v_54 = v_53;
    v_51 = v_52;
    if (!car_legal(v_51)) v_51 = carerror(v_51); else
    v_51 = car(v_51);
    if (equal(v_54, v_51)) goto v_15;
    else goto v_16;
v_15:
    v_51 = lisp_true;
    goto v_14;
v_16:
    v_51 = v_52;
    if (!car_legal(v_51)) v_54 = carerror(v_51); else
    v_54 = car(v_51);
    v_51 = basic_elt(env, 1); // expt
    if (!consp(v_54)) goto v_30;
    v_54 = car(v_54);
    if (v_54 == v_51) goto v_29;
    else goto v_30;
v_29:
    v_54 = v_53;
    v_51 = v_52;
    if (!car_legal(v_51)) v_51 = carerror(v_51); else
    v_51 = car(v_51);
    if (!car_legal(v_51)) v_51 = cdrerror(v_51); else
    v_51 = cdr(v_51);
    if (!car_legal(v_51)) v_51 = carerror(v_51); else
    v_51 = car(v_51);
    v_51 = (equal(v_54, v_51) ? lisp_true : nil);
    goto v_28;
v_30:
    v_51 = nil;
    goto v_28;
    v_51 = nil;
v_28:
    if (v_51 == nil) goto v_26;
    v_51 = lisp_true;
    goto v_24;
v_26:
    v_51 = v_52;
    if (!car_legal(v_51)) v_51 = cdrerror(v_51); else
    v_51 = cdr(v_51);
    v_52 = v_51;
    goto v_1;
    v_51 = nil;
v_24:
    goto v_14;
    v_51 = nil;
v_14:
    goto v_6;
    v_51 = nil;
v_6:
    return onevalue(v_51);
}



// Code for dipcontenti1

static LispObject CC_dipcontenti1(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    v_53 = v_2;
// end of prologue
v_1:
    v_52 = stack[0];
    if (v_52 == nil) goto v_8;
    else goto v_9;
v_8:
    v_52 = stack[-1];
    return cons(v_53, v_52);
v_9:
    v_52 = stack[0];
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    if (!car_legal(v_52)) v_52 = carerror(v_52); else
    v_52 = car(v_52);
    {   LispObject fn = basic_elt(env, 1); // vbcgcd
    v_52 = (*qfn2(fn))(fn, v_53, v_52);
    }
    env = stack[-3];
    stack[-2] = v_52;
    v_52 = stack[-1];
    if (v_52 == nil) goto v_27;
    v_52 = stack[0];
    if (!car_legal(v_52)) v_53 = carerror(v_52); else
    v_53 = car(v_52);
    v_52 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // dipcontevmin
    v_52 = (*qfn2(fn))(fn, v_53, v_52);
    }
    env = stack[-3];
    stack[-1] = v_52;
    goto v_25;
v_27:
v_25:
    v_52 = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // bcone!?
    v_52 = (*qfn1(fn))(fn, v_52);
    }
    env = stack[-3];
    if (v_52 == nil) goto v_36;
    v_52 = stack[-1];
    if (v_52 == nil) goto v_40;
    else goto v_36;
v_40:
    v_52 = stack[-2];
    return ncons(v_52);
v_36:
    v_53 = stack[-2];
    v_54 = stack[-1];
    v_52 = stack[0];
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    stack[-1] = v_54;
    stack[0] = v_52;
    goto v_1;
    v_52 = nil;
    goto v_7;
    v_52 = nil;
v_7:
    return onevalue(v_52);
}



// Code for evalsubset

static LispObject CC_evalsubset(LispObject env,
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
    v_20 = v_3;
    v_21 = v_2;
// end of prologue
    v_22 = basic_elt(env, 1); // subset
    {   LispObject fn = basic_elt(env, 2); // evalsetbool
    v_20 = (*qfn3(fn))(fn, v_22, v_21, v_20);
    }
    env = stack[0];
    v_21 = v_20;
    v_20 = v_21;
    if (!consp(v_20)) goto v_12;
    else goto v_13;
v_12:
    v_20 = v_21;
    goto v_11;
v_13:
    v_20 = v_21;
    {
        LispObject fn = basic_elt(env, 3); // evalsymsubset
        return (*qfn1(fn))(fn, v_20);
    }
    v_20 = nil;
v_11:
    return onevalue(v_20);
}



// Code for all_defined

static LispObject CC_all_defined(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_3;
    v_11 = v_2;
// end of prologue
    stack[-1] = v_11;
    {   LispObject fn = basic_elt(env, 1); // map__edges
    v_12 = (*qfn1(fn))(fn, v_11);
    }
    env = stack[-2];
    v_11 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // defined_append
    v_11 = (*qfn2(fn))(fn, v_12, v_11);
    }
    env = stack[-2];
    {
        LispObject v_15 = stack[-1];
        LispObject fn = basic_elt(env, 3); // all_defined_map_
        return (*qfn2(fn))(fn, v_15, v_11);
    }
}



// Code for pa_vect2list

static LispObject CC_pa_vect2list(LispObject env,
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
    v_94 = stack[-6];
    if (!car_legal(v_94)) v_94 = cdrerror(v_94); else
    v_94 = cdr(v_94);
    {   LispObject fn = basic_elt(env, 1); // upbve
    v_94 = (*qfn1(fn))(fn, v_94);
    }
    env = stack[-8];
    v_94 = sub1(v_94);
    env = stack[-8];
    v_94 = Lmkvect(nil, v_94);
    env = stack[-8];
    stack[-7] = v_94;
    v_94 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-4] = v_94;
v_19:
    v_94 = stack[-6];
    if (!car_legal(v_94)) v_94 = cdrerror(v_94); else
    v_94 = cdr(v_94);
    {   LispObject fn = basic_elt(env, 1); // upbve
    v_95 = (*qfn1(fn))(fn, v_94);
    }
    env = stack[-8];
    v_94 = stack[-4];
    v_94 = difference2(v_95, v_94);
    env = stack[-8];
    v_94 = Lminusp(nil, v_94);
    env = stack[-8];
    if (v_94 == nil) goto v_24;
    goto v_18;
v_24:
    v_94 = stack[-6];
    if (!car_legal(v_94)) stack[0] = cdrerror(v_94); else
    stack[0] = cdr(v_94);
    v_94 = stack[-4];
    v_94 = sub1(v_94);
    env = stack[-8];
    v_94 = Lgetv(nil, stack[0], v_94);
    env = stack[-8];
    stack[-5] = v_94;
    stack[-3] = stack[-7];
    v_94 = stack[-5];
    stack[-2] = sub1(v_94);
    env = stack[-8];
    stack[-1] = stack[-4];
    stack[0] = stack[-7];
    v_94 = stack[-5];
    v_94 = sub1(v_94);
    env = stack[-8];
    v_94 = Lgetv(nil, stack[0], v_94);
    env = stack[-8];
    v_94 = cons(stack[-1], v_94);
    env = stack[-8];
    v_94 = Lputv(nil, stack[-3], stack[-2], v_94);
    env = stack[-8];
    v_94 = stack[-4];
    v_94 = add1(v_94);
    env = stack[-8];
    stack[-4] = v_94;
    goto v_19;
v_18:
    v_94 = stack[-6];
    if (!car_legal(v_94)) v_94 = carerror(v_94); else
    v_94 = car(v_94);
    stack[-4] = v_94;
    v_94 = stack[-4];
    if (v_94 == nil) goto v_60;
    else goto v_61;
v_60:
    v_94 = nil;
    goto v_54;
v_61:
    v_94 = stack[-4];
    if (!car_legal(v_94)) v_94 = carerror(v_94); else
    v_94 = car(v_94);
    stack[0] = stack[-7];
    v_94 = sub1(v_94);
    env = stack[-8];
    v_94 = Lgetv(nil, stack[0], v_94);
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 2); // ordn
    v_94 = (*qfn1(fn))(fn, v_94);
    }
    env = stack[-8];
    v_94 = ncons(v_94);
    env = stack[-8];
    stack[-2] = v_94;
    stack[-3] = v_94;
v_55:
    v_94 = stack[-4];
    if (!car_legal(v_94)) v_94 = cdrerror(v_94); else
    v_94 = cdr(v_94);
    stack[-4] = v_94;
    v_94 = stack[-4];
    if (v_94 == nil) goto v_77;
    else goto v_78;
v_77:
    v_94 = stack[-3];
    goto v_54;
v_78:
    stack[-1] = stack[-2];
    v_94 = stack[-4];
    if (!car_legal(v_94)) v_94 = carerror(v_94); else
    v_94 = car(v_94);
    stack[0] = stack[-7];
    v_94 = sub1(v_94);
    env = stack[-8];
    v_94 = Lgetv(nil, stack[0], v_94);
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 2); // ordn
    v_94 = (*qfn1(fn))(fn, v_94);
    }
    env = stack[-8];
    v_94 = ncons(v_94);
    env = stack[-8];
    if (!car_legal(stack[-1])) rplacd_fails(stack[-1]);
    setcdr(stack[-1], v_94);
    v_94 = stack[-2];
    if (!car_legal(v_94)) v_94 = cdrerror(v_94); else
    v_94 = cdr(v_94);
    stack[-2] = v_94;
    goto v_55;
v_54:
    return onevalue(v_94);
}



// Code for lowestdeg

static LispObject CC_lowestdeg(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_82 = v_2;
// end of prologue
    {   LispObject fn = basic_elt(env, 3); // simp!*
    v_82 = (*qfn1(fn))(fn, v_82);
    }
    env = stack[-4];
    stack[-1] = v_82;
    v_82 = stack[-1];
    if (!consp(v_82)) goto v_19;
    else goto v_20;
v_19:
    v_82 = lisp_true;
    goto v_18;
v_20:
    v_82 = stack[-1];
    if (!car_legal(v_82)) v_82 = carerror(v_82); else
    v_82 = car(v_82);
    v_82 = (consp(v_82) ? nil : lisp_true);
    goto v_18;
    v_82 = nil;
v_18:
    if (v_82 == nil) goto v_16;
    v_82 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_10;
v_16:
    v_82 = stack[-1];
    {   LispObject fn = basic_elt(env, 4); // !*q2f
    v_82 = (*qfn1(fn))(fn, v_82);
    }
    env = stack[-4];
    stack[-1] = v_82;
    v_82 = stack[-1];
    {   LispObject fn = basic_elt(env, 5); // erase_pol_cst
    v_82 = (*qfn1(fn))(fn, v_82);
    }
    env = stack[-4];
    stack[0] = v_82;
    v_83 = stack[0];
    v_82 = stack[-1];
    if (equal(v_83, v_82)) goto v_36;
    v_82 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_10;
v_36:
    v_82 = stack[-2];
    {   LispObject fn = basic_elt(env, 6); // !*a2k
    v_82 = (*qfn1(fn))(fn, v_82);
    }
    env = stack[-4];
    stack[0] = v_82;
    v_82 = stack[-2];
    v_82 = ncons(v_82);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 7); // setkorder
    v_82 = (*qfn1(fn))(fn, v_82);
    }
    env = stack[-4];
    stack[-3] = v_82;
    v_82 = stack[-1];
    {   LispObject fn = basic_elt(env, 8); // reorder
    v_82 = (*qfn1(fn))(fn, v_82);
    }
    env = stack[-4];
    stack[-2] = v_82;
    v_82 = stack[-3];
    {   LispObject fn = basic_elt(env, 7); // setkorder
    v_82 = (*qfn1(fn))(fn, v_82);
    }
    env = stack[-4];
    v_82 = stack[-2];
    v_82 = Lreverse(nil, v_82);
    env = stack[-4];
    stack[-2] = v_82;
    v_82 = stack[-2];
    if (!car_legal(v_82)) v_82 = carerror(v_82); else
    v_82 = car(v_82);
    if (!car_legal(v_82)) v_82 = carerror(v_82); else
    v_82 = car(v_82);
    if (!car_legal(v_82)) v_82 = carerror(v_82); else
    v_82 = car(v_82);
    stack[-1] = v_82;
    v_82 = stack[-1];
    if (!consp(v_82)) goto v_58;
    v_82 = stack[-1];
    if (!car_legal(v_82)) v_83 = carerror(v_82); else
    v_83 = car(v_82);
    v_82 = basic_elt(env, 1); // expt
    if (v_83 == v_82) goto v_62;
    else goto v_63;
v_62:
    v_82 = basic_elt(env, 2); // "exponents must be integers"
    {   LispObject fn = basic_elt(env, 9); // rederr
    v_82 = (*qfn1(fn))(fn, v_82);
    }
    goto v_61;
v_63:
v_61:
    goto v_56;
v_58:
v_56:
    v_83 = stack[-1];
    v_82 = stack[0];
    if (equal(v_83, v_82)) goto v_72;
    v_82 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_10;
v_72:
    v_82 = stack[-2];
    if (!car_legal(v_82)) v_82 = carerror(v_82); else
    v_82 = car(v_82);
    if (!car_legal(v_82)) v_82 = carerror(v_82); else
    v_82 = car(v_82);
    if (!car_legal(v_82)) v_82 = cdrerror(v_82); else
    v_82 = cdr(v_82);
    goto v_10;
    v_82 = nil;
v_10:
    return onevalue(v_82);
}



// Code for rl_ex

static LispObject CC_rl_ex(LispObject env,
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
    stack[0] = qvalue(basic_elt(env, 1)); // rl_ex!*
    v_10 = list2(v_11, v_10);
    env = stack[-1];
    {
        LispObject v_13 = stack[0];
        LispObject fn = basic_elt(env, 2); // apply
        return (*qfn2(fn))(fn, v_13, v_10);
    }
}



// Code for ofsf_exploitknowl

static LispObject CC_ofsf_exploitknowl(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_214, v_215, v_216, v_217;
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
    push(nil, nil);
    stack_popper stack_popper_var(13);
// copy arguments values to proper place
    v_214 = v_2;
// end of prologue
    stack[-11] = nil;
    stack[-10] = nil;
    stack[-9] = nil;
    stack[-8] = nil;
    stack[-7] = nil;
    stack[-6] = nil;
    stack[-5] = nil;
    stack[-1] = v_214;
v_21:
    v_214 = stack[-1];
    if (v_214 == nil) goto v_25;
    else goto v_26;
v_25:
    goto v_20;
v_26:
    v_214 = stack[-1];
    if (!car_legal(v_214)) v_214 = carerror(v_214); else
    v_214 = car(v_214);
    stack[0] = v_214;
    v_214 = stack[0];
    if (!car_legal(v_214)) v_214 = carerror(v_214); else
    v_214 = car(v_214);
    {   LispObject fn = basic_elt(env, 8); // sfto_varp
    v_214 = (*qfn1(fn))(fn, v_214);
    }
    env = stack[-12];
    stack[-4] = v_214;
    if (v_214 == nil) goto v_35;
    v_214 = stack[0];
    if (!car_legal(v_214)) v_214 = cdrerror(v_214); else
    v_214 = cdr(v_214);
    stack[0] = v_214;
v_42:
    v_214 = stack[0];
    if (v_214 == nil) goto v_47;
    else goto v_48;
v_47:
    goto v_41;
v_48:
    v_214 = stack[0];
    if (!car_legal(v_214)) v_214 = carerror(v_214); else
    v_214 = car(v_214);
    if (!car_legal(v_214)) v_214 = cdrerror(v_214); else
    v_214 = cdr(v_214);
    v_215 = v_214;
    v_214 = v_215;
    if (!car_legal(v_214)) v_214 = carerror(v_214); else
    v_214 = car(v_214);
    stack[-3] = v_214;
    v_214 = v_215;
    if (!car_legal(v_214)) v_214 = cdrerror(v_214); else
    v_214 = cdr(v_214);
    v_215 = v_214;
    v_214 = v_215;
    {   LispObject fn = basic_elt(env, 9); // negsq
    v_214 = (*qfn1(fn))(fn, v_214);
    }
    env = stack[-12];
    v_215 = v_214;
    v_214 = v_215;
    if (!car_legal(v_214)) v_214 = carerror(v_214); else
    v_214 = car(v_214);
    if (v_214 == nil) goto v_68;
    else goto v_67;
v_68:
    v_214 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
v_67:
    stack[-2] = v_214;
    v_216 = stack[-3];
    v_214 = basic_elt(env, 1); // equal
    if (v_216 == v_214) goto v_74;
    else goto v_75;
v_74:
    v_214 = qvalue(basic_elt(env, 2)); // !*rlsippsubst
    if (v_214 == nil) goto v_81;
    v_216 = stack[-4];
    v_214 = stack[-11];
    v_214 = acons(v_216, v_215, v_214);
    env = stack[-12];
    stack[-11] = v_214;
    goto v_79;
v_81:
    v_215 = stack[-2];
    v_214 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_214 = static_cast<LispObject>(greaterp2(v_215, v_214));
    v_214 = v_214 ? lisp_true : nil;
    env = stack[-12];
    if (v_214 == nil) goto v_92;
    v_215 = stack[-4];
    v_214 = stack[-9];
    {   LispObject fn = basic_elt(env, 10); // lto_insertq
    v_214 = (*qfn2(fn))(fn, v_215, v_214);
    }
    env = stack[-12];
    stack[-9] = v_214;
    goto v_90;
v_92:
    v_215 = stack[-2];
    v_214 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_214 = static_cast<LispObject>(lessp2(v_215, v_214));
    v_214 = v_214 ? lisp_true : nil;
    env = stack[-12];
    if (v_214 == nil) goto v_100;
    v_215 = stack[-4];
    v_214 = stack[-8];
    {   LispObject fn = basic_elt(env, 10); // lto_insertq
    v_214 = (*qfn2(fn))(fn, v_215, v_214);
    }
    env = stack[-12];
    stack[-8] = v_214;
    goto v_90;
v_100:
    v_215 = stack[-2];
    v_214 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_214 = Leqn_2(nil, v_215, v_214);
    env = stack[-12];
    if (v_214 == nil) goto v_108;
    v_215 = stack[-4];
    v_214 = stack[-10];
    {   LispObject fn = basic_elt(env, 10); // lto_insertq
    v_214 = (*qfn2(fn))(fn, v_215, v_214);
    }
    env = stack[-12];
    stack[-10] = v_214;
    goto v_90;
v_108:
v_90:
    goto v_79;
v_79:
    goto v_73;
v_75:
    v_215 = stack[-3];
    v_214 = basic_elt(env, 3); // greaterp
    if (v_215 == v_214) goto v_115;
    else goto v_116;
v_115:
    v_215 = stack[-2];
    v_214 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_214 = static_cast<LispObject>(geq2(v_215, v_214));
    v_214 = v_214 ? lisp_true : nil;
    env = stack[-12];
    if (v_214 == nil) goto v_122;
    v_215 = stack[-4];
    v_214 = stack[-9];
    {   LispObject fn = basic_elt(env, 10); // lto_insertq
    v_214 = (*qfn2(fn))(fn, v_215, v_214);
    }
    env = stack[-12];
    stack[-9] = v_214;
    goto v_120;
v_122:
v_120:
    goto v_73;
v_116:
    v_215 = stack[-3];
    v_214 = basic_elt(env, 4); // geq
    if (v_215 == v_214) goto v_129;
    else goto v_130;
v_129:
    v_215 = stack[-2];
    v_214 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_214 = static_cast<LispObject>(greaterp2(v_215, v_214));
    v_214 = v_214 ? lisp_true : nil;
    env = stack[-12];
    if (v_214 == nil) goto v_136;
    v_215 = stack[-4];
    v_214 = stack[-9];
    {   LispObject fn = basic_elt(env, 10); // lto_insertq
    v_214 = (*qfn2(fn))(fn, v_215, v_214);
    }
    env = stack[-12];
    stack[-9] = v_214;
    goto v_134;
v_136:
    v_215 = stack[-2];
    v_214 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_214 = Leqn_2(nil, v_215, v_214);
    env = stack[-12];
    if (v_214 == nil) goto v_144;
    v_215 = stack[-4];
    v_214 = stack[-7];
    {   LispObject fn = basic_elt(env, 10); // lto_insertq
    v_214 = (*qfn2(fn))(fn, v_215, v_214);
    }
    env = stack[-12];
    stack[-7] = v_214;
    goto v_134;
v_144:
v_134:
    goto v_73;
v_130:
    v_215 = stack[-3];
    v_214 = basic_elt(env, 5); // lessp
    if (v_215 == v_214) goto v_151;
    else goto v_152;
v_151:
    v_215 = stack[-2];
    v_214 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_214 = static_cast<LispObject>(lesseq2(v_215, v_214));
    v_214 = v_214 ? lisp_true : nil;
    env = stack[-12];
    if (v_214 == nil) goto v_158;
    v_215 = stack[-4];
    v_214 = stack[-8];
    {   LispObject fn = basic_elt(env, 10); // lto_insertq
    v_214 = (*qfn2(fn))(fn, v_215, v_214);
    }
    env = stack[-12];
    stack[-8] = v_214;
    goto v_156;
v_158:
v_156:
    goto v_73;
v_152:
    v_215 = stack[-3];
    v_214 = basic_elt(env, 6); // leq
    if (v_215 == v_214) goto v_165;
    else goto v_166;
v_165:
    v_215 = stack[-2];
    v_214 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_214 = static_cast<LispObject>(lessp2(v_215, v_214));
    v_214 = v_214 ? lisp_true : nil;
    env = stack[-12];
    if (v_214 == nil) goto v_172;
    v_215 = stack[-4];
    v_214 = stack[-8];
    {   LispObject fn = basic_elt(env, 10); // lto_insertq
    v_214 = (*qfn2(fn))(fn, v_215, v_214);
    }
    env = stack[-12];
    stack[-8] = v_214;
    goto v_170;
v_172:
    v_215 = stack[-2];
    v_214 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_214 = Leqn_2(nil, v_215, v_214);
    env = stack[-12];
    if (v_214 == nil) goto v_180;
    v_215 = stack[-4];
    v_214 = stack[-6];
    {   LispObject fn = basic_elt(env, 10); // lto_insertq
    v_214 = (*qfn2(fn))(fn, v_215, v_214);
    }
    env = stack[-12];
    stack[-6] = v_214;
    goto v_170;
v_180:
v_170:
    goto v_73;
v_166:
    v_215 = stack[-3];
    v_214 = basic_elt(env, 7); // neq
    if (v_215 == v_214) goto v_187;
    else goto v_188;
v_187:
    v_215 = stack[-2];
    v_214 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_214 = Leqn_2(nil, v_215, v_214);
    env = stack[-12];
    if (v_214 == nil) goto v_194;
    v_215 = stack[-4];
    v_214 = stack[-5];
    {   LispObject fn = basic_elt(env, 10); // lto_insertq
    v_214 = (*qfn2(fn))(fn, v_215, v_214);
    }
    env = stack[-12];
    stack[-5] = v_214;
    goto v_192;
v_194:
v_192:
    goto v_73;
v_188:
v_73:
    v_214 = stack[0];
    if (!car_legal(v_214)) v_214 = cdrerror(v_214); else
    v_214 = cdr(v_214);
    stack[0] = v_214;
    goto v_42;
v_41:
    goto v_33;
v_35:
v_33:
    v_214 = stack[-1];
    if (!car_legal(v_214)) v_214 = cdrerror(v_214); else
    v_214 = cdr(v_214);
    stack[-1] = v_214;
    goto v_21;
v_20:
    stack[0] = stack[-11];
    stack[-1] = stack[-10];
    stack[-2] = stack[-9];
    v_217 = stack[-8];
    v_216 = stack[-7];
    v_215 = stack[-6];
    v_214 = stack[-5];
    v_214 = list4(v_217, v_216, v_215, v_214);
    {
        LispObject v_230 = stack[0];
        LispObject v_231 = stack[-1];
        LispObject v_232 = stack[-2];
        return list3star(v_230, v_231, v_232, v_214);
    }
    return onevalue(v_214);
}



// Code for get!*nr!*real!*irred!*reps

static LispObject CC_getHnrHrealHirredHreps(LispObject env,
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
    v_10 = basic_elt(env, 1); // realrepnumber
    return get(v_9, v_10);
    return onevalue(v_9);
}



// Code for constant_expr_listp

static LispObject CC_constant_expr_listp(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
v_7:
    v_62 = stack[0];
    if (!consp(v_62)) goto v_10;
    else goto v_11;
v_10:
    v_62 = stack[0];
    v_62 = (v_62 == nil ? lisp_true : nil);
    v_63 = v_62;
    if (v_62 == nil) goto v_16;
    v_62 = v_63;
    goto v_6;
v_16:
    v_62 = stack[0];
    v_62 = (is_number(v_62) ? lisp_true : nil);
    v_63 = v_62;
    if (v_62 == nil) goto v_21;
    v_62 = v_63;
    goto v_6;
v_21:
    v_63 = stack[0];
    v_62 = basic_elt(env, 1); // constant
    v_62 = Lflagp(nil, v_63, v_62);
    env = stack[-1];
    v_63 = v_62;
    if (v_62 == nil) goto v_26;
    v_62 = v_63;
    goto v_6;
v_26:
    v_63 = stack[0];
    v_62 = basic_elt(env, 2); // i
    if (v_63 == v_62) goto v_35;
    else goto v_36;
v_35:
    v_62 = basic_elt(env, 2); // i
    if (!symbolp(v_62)) v_62 = nil;
    else { v_62 = qfastgets(v_62);
           if (v_62 != nil) { v_62 = elt(v_62, 56); // idvalfn
#ifdef RECORD_GET
             if (v_62 != SPID_NOPROP)
                record_get(elt(fastget_names, 56), 1);
             else record_get(elt(fastget_names, 56), 0),
                v_62 = nil; }
           else record_get(elt(fastget_names, 56), 0); }
#else
             if (v_62 == SPID_NOPROP) v_62 = nil; }}
#endif
    goto v_34;
v_36:
    v_62 = nil;
    goto v_34;
    v_62 = nil;
v_34:
    v_63 = v_62;
    if (v_62 == nil) goto v_32;
    v_62 = v_63;
    goto v_6;
v_32:
    v_62 = nil;
    goto v_6;
    goto v_9;
v_11:
    v_62 = stack[0];
    if (!car_legal(v_62)) v_62 = carerror(v_62); else
    v_62 = car(v_62);
    {   LispObject fn = basic_elt(env, 3); // constant_exprp
    v_62 = (*qfn1(fn))(fn, v_62);
    }
    env = stack[-1];
    if (v_62 == nil) goto v_53;
    v_62 = stack[0];
    if (!car_legal(v_62)) v_62 = cdrerror(v_62); else
    v_62 = cdr(v_62);
    stack[0] = v_62;
    goto v_7;
v_53:
    v_62 = nil;
    goto v_6;
    goto v_9;
v_9:
    v_62 = nil;
v_6:
    return onevalue(v_62);
}



// Code for qqe_simpat

static LispObject CC_qqe_simpat(LispObject env,
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



// Code for ieval

static LispObject CC_ieval(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // reval
    v_7 = (*qfn1(fn))(fn, v_7);
    }
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // !*s2i
        return (*qfn1(fn))(fn, v_7);
    }
}



// Code for column_dim

static LispObject CC_column_dim(LispObject env,
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
    v_27 = qvalue(basic_elt(env, 1)); // !*fast_la
    if (v_27 == nil) goto v_12;
    else goto v_13;
v_12:
    v_27 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // matrixp
    v_27 = (*qfn1(fn))(fn, v_27);
    }
    env = stack[-1];
    v_27 = (v_27 == nil ? lisp_true : nil);
    goto v_11;
v_13:
    v_27 = nil;
    goto v_11;
    v_27 = nil;
v_11:
    if (v_27 == nil) goto v_9;
    v_27 = basic_elt(env, 2); // "Error in column_dim: input should be a matrix."
    {   LispObject fn = basic_elt(env, 4); // rederr
    v_27 = (*qfn1(fn))(fn, v_27);
    }
    env = stack[-1];
    goto v_7;
v_9:
v_7:
    v_27 = stack[0];
    {   LispObject fn = basic_elt(env, 5); // size_of_matrix
    v_27 = (*qfn1(fn))(fn, v_27);
    }
    if (!car_legal(v_27)) v_27 = cdrerror(v_27); else
    v_27 = cdr(v_27);
    if (!car_legal(v_27)) v_27 = carerror(v_27); else
    v_27 = car(v_27);
    return onevalue(v_27);
}



// Code for vdpappendmon

static LispObject CC_vdpappendmon(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    v_55 = stack[-4];
    if (v_55 == nil) goto v_12;
    else goto v_13;
v_12:
    v_55 = lisp_true;
    goto v_11;
v_13:
    v_55 = stack[-4];
    if (!car_legal(v_55)) v_55 = cdrerror(v_55); else
    v_55 = cdr(v_55);
    if (!car_legal(v_55)) v_55 = cdrerror(v_55); else
    v_55 = cdr(v_55);
    if (!car_legal(v_55)) v_55 = cdrerror(v_55); else
    v_55 = cdr(v_55);
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    v_55 = (v_55 == nil ? lisp_true : nil);
    goto v_11;
    v_55 = nil;
v_11:
    if (v_55 == nil) goto v_9;
    v_56 = stack[-3];
    v_55 = stack[-2];
    {
        LispObject fn = basic_elt(env, 2); // vdpfmon
        return (*qfn2(fn))(fn, v_56, v_55);
    }
v_9:
    v_55 = stack[-3];
    {   LispObject fn = basic_elt(env, 3); // vbczero!?
    v_55 = (*qfn1(fn))(fn, v_55);
    }
    env = stack[-6];
    if (v_55 == nil) goto v_28;
    v_55 = stack[-4];
    goto v_7;
v_28:
    stack[-5] = basic_elt(env, 1); // vdp
    v_55 = stack[-4];
    if (!car_legal(v_55)) v_55 = cdrerror(v_55); else
    v_55 = cdr(v_55);
    if (!car_legal(v_55)) stack[-1] = carerror(v_55); else
    stack[-1] = car(v_55);
    v_55 = stack[-4];
    if (!car_legal(v_55)) v_55 = cdrerror(v_55); else
    v_55 = cdr(v_55);
    if (!car_legal(v_55)) v_55 = cdrerror(v_55); else
    v_55 = cdr(v_55);
    if (!car_legal(v_55)) stack[0] = carerror(v_55); else
    stack[0] = car(v_55);
    v_55 = stack[-4];
    if (!car_legal(v_55)) v_55 = cdrerror(v_55); else
    v_55 = cdr(v_55);
    if (!car_legal(v_55)) v_55 = cdrerror(v_55); else
    v_55 = cdr(v_55);
    if (!car_legal(v_55)) v_55 = cdrerror(v_55); else
    v_55 = cdr(v_55);
    if (!car_legal(v_55)) stack[-4] = carerror(v_55); else
    stack[-4] = car(v_55);
    v_57 = stack[-2];
    v_56 = stack[-3];
    v_55 = nil;
    v_55 = list2star(v_57, v_56, v_55);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 4); // dipsum
    v_56 = (*qfn2(fn))(fn, stack[-4], v_55);
    }
    env = stack[-6];
    v_55 = nil;
    v_55 = list2(v_56, v_55);
    {
        LispObject v_64 = stack[-5];
        LispObject v_65 = stack[-1];
        LispObject v_66 = stack[0];
        return list3star(v_64, v_65, v_66, v_55);
    }
    v_55 = nil;
v_7:
    return onevalue(v_55);
}



// Code for xriterion_2

static LispObject CC_xriterion_2(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_97, v_98, v_99;
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
    v_97 = stack[-1];
    if (v_97 == nil) goto v_8;
    else goto v_9;
v_8:
    v_97 = nil;
    goto v_7;
v_9:
    v_97 = stack[-2];
    if (!car_legal(v_97)) v_97 = cdrerror(v_97); else
    v_97 = cdr(v_97);
    if (!car_legal(v_97)) v_98 = carerror(v_97); else
    v_98 = car(v_97);
    v_97 = basic_elt(env, 1); // wedge_pair
    if (v_98 == v_97) goto v_13;
    v_97 = nil;
    goto v_7;
v_13:
    v_97 = stack[-1];
    if (!car_legal(v_97)) v_97 = carerror(v_97); else
    v_97 = car(v_97);
    stack[-3] = v_97;
    v_99 = stack[-3];
    v_98 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_97 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_97 = list2star(v_99, v_98, v_97);
    env = stack[-4];
    v_98 = ncons(v_97);
    env = stack[-4];
    v_97 = stack[-2];
    if (!car_legal(v_97)) v_97 = cdrerror(v_97); else
    v_97 = cdr(v_97);
    if (!car_legal(v_97)) v_97 = cdrerror(v_97); else
    v_97 = cdr(v_97);
    if (!car_legal(v_97)) v_97 = carerror(v_97); else
    v_97 = car(v_97);
    if (equal(v_98, v_97)) goto v_30;
    v_98 = stack[-3];
    v_97 = stack[-3];
    v_98 = list2(v_98, v_97);
    env = stack[-4];
    v_97 = stack[-2];
    if (!car_legal(v_97)) v_97 = carerror(v_97); else
    v_97 = car(v_97);
    {   LispObject fn = basic_elt(env, 5); // xdiv
    v_97 = (*qfn2(fn))(fn, v_98, v_97);
    }
    env = stack[-4];
    if (v_97 == nil) goto v_42;
    else goto v_43;
v_42:
    v_97 = nil;
    goto v_41;
v_43:
    v_98 = stack[-3];
    v_97 = stack[-2];
    if (!car_legal(v_97)) v_97 = cdrerror(v_97); else
    v_97 = cdr(v_97);
    if (!car_legal(v_97)) v_97 = cdrerror(v_97); else
    v_97 = cdr(v_97);
    if (!car_legal(v_97)) v_97 = cdrerror(v_97); else
    v_97 = cdr(v_97);
    if (!car_legal(v_97)) v_97 = carerror(v_97); else
    v_97 = car(v_97);
    {   LispObject fn = basic_elt(env, 6); // make_wedge_pair
    v_97 = (*qfn2(fn))(fn, v_98, v_97);
    }
    env = stack[-4];
    v_98 = v_97;
    v_97 = v_98;
    if (v_97 == nil) goto v_67;
    else goto v_68;
v_67:
    v_97 = lisp_true;
    goto v_66;
v_68:
    v_97 = stack[0];
    {   LispObject fn = basic_elt(env, 7); // find_item
    v_97 = (*qfn2(fn))(fn, v_98, v_97);
    }
    env = stack[-4];
    v_97 = (v_97 == nil ? lisp_true : nil);
    goto v_66;
    v_97 = nil;
v_66:
    if (v_97 == nil) goto v_55;
    else goto v_56;
v_55:
    v_97 = nil;
    goto v_54;
v_56:
    v_97 = qvalue(basic_elt(env, 2)); // !*trxideal
    if (v_97 == nil) goto v_83;
    v_98 = basic_elt(env, 3); // "criterion 2 hit"
    v_97 = basic_elt(env, 4); // last
    {   LispObject fn = basic_elt(env, 8); // writepri
    v_97 = (*qfn2(fn))(fn, v_98, v_97);
    }
    env = stack[-4];
    goto v_81;
v_83:
v_81:
    v_97 = lisp_true;
    goto v_54;
    v_97 = nil;
v_54:
    goto v_41;
    v_97 = nil;
v_41:
    goto v_28;
v_30:
    v_97 = nil;
    goto v_28;
    v_97 = nil;
v_28:
    if (v_97 == nil) goto v_26;
    else goto v_25;
v_26:
    v_99 = stack[-2];
    v_97 = stack[-1];
    if (!car_legal(v_97)) v_98 = cdrerror(v_97); else
    v_98 = cdr(v_97);
    v_97 = stack[0];
    stack[-2] = v_99;
    stack[-1] = v_98;
    stack[0] = v_97;
    goto v_1;
v_25:
    goto v_7;
    v_97 = nil;
v_7:
    return onevalue(v_97);
}



// Code for gffdot

static LispObject CC_gffdot(LispObject env,
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
    stack[-2] = times2(v_17, v_16);
    env = stack[-3];
    v_16 = stack[-1];
    if (!car_legal(v_16)) v_17 = cdrerror(v_16); else
    v_17 = cdr(v_16);
    v_16 = stack[0];
    if (!car_legal(v_16)) v_16 = cdrerror(v_16); else
    v_16 = cdr(v_16);
    v_16 = times2(v_17, v_16);
    {
        LispObject v_21 = stack[-2];
        return plus2(v_21, v_16);
    }
}



// Code for r2speclist

static LispObject CC_r2speclist(LispObject env,
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    v_55 = v_2;
// end of prologue
    v_56 = v_55;
    v_54 = basic_elt(env, 1); // plus
    if (!consp(v_56)) goto v_7;
    v_56 = car(v_56);
    if (v_56 == v_54) goto v_6;
    else goto v_7;
v_6:
    v_54 = v_55;
    if (!car_legal(v_54)) v_54 = cdrerror(v_54); else
    v_54 = cdr(v_54);
    goto v_5;
v_7:
    v_54 = v_55;
    v_54 = ncons(v_54);
    env = stack[-4];
    goto v_5;
    v_54 = nil;
v_5:
    v_55 = v_54;
    v_54 = v_55;
    stack[-3] = v_54;
    v_54 = stack[-3];
    if (v_54 == nil) goto v_26;
    else goto v_27;
v_26:
    v_54 = nil;
    goto v_21;
v_27:
    v_54 = stack[-3];
    if (!car_legal(v_54)) v_54 = carerror(v_54); else
    v_54 = car(v_54);
    {   LispObject fn = basic_elt(env, 2); // r2speclist1
    v_54 = (*qfn1(fn))(fn, v_54);
    }
    env = stack[-4];
    v_54 = ncons(v_54);
    env = stack[-4];
    stack[-1] = v_54;
    stack[-2] = v_54;
v_22:
    v_54 = stack[-3];
    if (!car_legal(v_54)) v_54 = cdrerror(v_54); else
    v_54 = cdr(v_54);
    stack[-3] = v_54;
    v_54 = stack[-3];
    if (v_54 == nil) goto v_40;
    else goto v_41;
v_40:
    v_54 = stack[-2];
    goto v_21;
v_41:
    stack[0] = stack[-1];
    v_54 = stack[-3];
    if (!car_legal(v_54)) v_54 = carerror(v_54); else
    v_54 = car(v_54);
    {   LispObject fn = basic_elt(env, 2); // r2speclist1
    v_54 = (*qfn1(fn))(fn, v_54);
    }
    env = stack[-4];
    v_54 = ncons(v_54);
    env = stack[-4];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_54);
    v_54 = stack[-1];
    if (!car_legal(v_54)) v_54 = cdrerror(v_54); else
    v_54 = cdr(v_54);
    stack[-1] = v_54;
    goto v_22;
v_21:
    return onevalue(v_54);
}



// Code for new_provev

static LispObject CC_new_provev(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_33, v_34, v_35, v_36;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_34 = v_3;
    v_35 = v_2;
// end of prologue
    v_36 = v_35;
    v_33 = v_34;
    v_33 = Lmember(nil, v_36, v_33);
    if (v_33 == nil) goto v_7;
    else goto v_8;
v_7:
    v_33 = nil;
    goto v_6;
v_8:
    v_33 = v_35;
    if (!car_legal(v_33)) v_33 = cdrerror(v_33); else
    v_33 = cdr(v_33);
    if (!car_legal(v_33)) v_33 = carerror(v_33); else
    v_33 = car(v_33);
    if (!car_legal(v_33)) v_36 = carerror(v_33); else
    v_36 = car(v_33);
    v_33 = v_34;
    v_33 = Lassoc(nil, v_36, v_33);
    if (v_33 == nil) goto v_14;
    v_33 = v_35;
    if (!car_legal(v_33)) v_33 = cdrerror(v_33); else
    v_33 = cdr(v_33);
    if (!car_legal(v_33)) v_33 = carerror(v_33); else
    v_33 = car(v_33);
    if (!car_legal(v_33)) v_35 = cdrerror(v_33); else
    v_35 = cdr(v_33);
    v_33 = v_34;
    v_33 = Lassoc(nil, v_35, v_33);
    if (v_33 == nil) goto v_14;
    v_33 = nil;
    goto v_6;
v_14:
    v_33 = v_34;
    goto v_6;
    v_33 = nil;
v_6:
    return onevalue(v_33);
}



// Code for dpmat_gbtag

static LispObject CC_dpmat_gbtag(LispObject env,
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
    v_7 = static_cast<LispObject>(96)+TAG_FIXNUM; // 6
    {
        LispObject fn = basic_elt(env, 1); // nth
        return (*qfn2(fn))(fn, v_8, v_7);
    }
}



// Code for general!-minus!-mod!-p

static LispObject CC_generalKminusKmodKp(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[-1] = v_2;
// end of prologue
    stack[-2] = nil;
v_7:
    v_45 = stack[-1];
    if (v_45 == nil) goto v_10;
    else goto v_11;
v_10:
    v_45 = stack[-2];
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn1(fn))(fn, v_45);
    }
v_11:
    v_45 = stack[-1];
    if (!consp(v_45)) goto v_19;
    else goto v_20;
v_19:
    v_45 = lisp_true;
    goto v_18;
v_20:
    v_45 = stack[-1];
    if (!car_legal(v_45)) v_45 = carerror(v_45); else
    v_45 = car(v_45);
    v_45 = (consp(v_45) ? nil : lisp_true);
    goto v_18;
    v_45 = nil;
v_18:
    if (v_45 == nil) goto v_16;
    stack[0] = stack[-2];
    v_45 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // general!-modular!-minus
    v_45 = (*qfn1(fn))(fn, v_45);
    }
    env = stack[-3];
    {
        LispObject v_50 = stack[0];
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn2(fn))(fn, v_50, v_45);
    }
v_16:
    v_45 = stack[-1];
    if (!car_legal(v_45)) v_45 = carerror(v_45); else
    v_45 = car(v_45);
    if (!car_legal(v_45)) stack[0] = carerror(v_45); else
    stack[0] = car(v_45);
    v_45 = stack[-1];
    if (!car_legal(v_45)) v_45 = carerror(v_45); else
    v_45 = car(v_45);
    if (!car_legal(v_45)) v_45 = cdrerror(v_45); else
    v_45 = cdr(v_45);
    {   LispObject fn = basic_elt(env, 0); // general!-minus!-mod!-p
    v_46 = (*qfn1(fn))(fn, v_45);
    }
    env = stack[-3];
    v_45 = stack[-2];
    v_45 = acons(stack[0], v_46, v_45);
    env = stack[-3];
    stack[-2] = v_45;
    v_45 = stack[-1];
    if (!car_legal(v_45)) v_45 = cdrerror(v_45); else
    v_45 = cdr(v_45);
    stack[-1] = v_45;
    goto v_7;
    v_45 = nil;
    return onevalue(v_45);
}



// Code for simprd

static LispObject CC_simprd(LispObject env,
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
    if (!consp(v_18)) goto v_6;
    else goto v_7;
v_6:
    v_18 = nil;
    goto v_5;
v_7:
    v_18 = basic_elt(env, 1); // !:rd!:
// Binding dmode!*
// FLUIDBIND: reloadenv=1 litvec-offset=2 saveloc=0
{   bind_fluid_stack bind_fluid_var(-1, 2, 0);
    setvalue(basic_elt(env, 2), v_18); // dmode!*
    v_18 = v_19;
    {   LispObject fn = basic_elt(env, 3); // simplist
    v_18 = (*qfn1(fn))(fn, v_18);
    }
    ;}  // end of a binding scope
    goto v_5;
    v_18 = nil;
v_5:
    return onevalue(v_18);
}



// Code for cde_alglistp

static LispObject CC_cde_alglistp(LispObject env,
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
// space for vars preserved across procedure calls
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_17 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // listp
    v_17 = (*qfn1(fn))(fn, v_17);
    }
    env = stack[-1];
    if (v_17 == nil) goto v_6;
    else goto v_7;
v_6:
    v_17 = nil;
    goto v_5;
v_7:
    v_17 = stack[0];
    if (!car_legal(v_17)) v_17 = carerror(v_17); else
    v_17 = car(v_17);
    v_18 = basic_elt(env, 1); // list
    v_17 = (v_17 == v_18 ? lisp_true : nil);
    goto v_5;
    v_17 = nil;
v_5:
    return onevalue(v_17);
}



// Code for find_active_components

static LispObject CC_find_active_components(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    v_52 = stack[-2];
    v_51 = stack[-2];
    v_50 = qvalue(basic_elt(env, 1)); // depl!*
    v_50 = Lassoc(nil, v_51, v_50);
    v_51 = v_50;
    v_50 = v_51;
    if (v_50 == nil) goto v_18;
    v_50 = v_51;
    if (!car_legal(v_50)) v_50 = cdrerror(v_50); else
    v_50 = cdr(v_50);
    goto v_16;
v_18:
    v_50 = nil;
v_16:
    v_52 = cons(v_52, v_50);
    env = stack[-3];
    v_51 = stack[-1];
    v_50 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // update_components
    v_50 = (*qfn3(fn))(fn, v_52, v_51, v_50);
    }
    env = stack[-3];
    stack[0] = v_50;
    v_50 = stack[-2];
    if (!consp(v_50)) goto v_27;
    v_50 = stack[-2];
    stack[-2] = v_50;
v_32:
    v_50 = stack[-2];
    if (v_50 == nil) goto v_36;
    else goto v_37;
v_36:
    goto v_31;
v_37:
    v_50 = stack[-2];
    if (!car_legal(v_50)) v_50 = carerror(v_50); else
    v_50 = car(v_50);
    v_52 = v_50;
    v_51 = stack[-1];
    v_50 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // find_active_components
    v_50 = (*qfn3(fn))(fn, v_52, v_51, v_50);
    }
    env = stack[-3];
    stack[0] = v_50;
    v_50 = stack[-2];
    if (!car_legal(v_50)) v_50 = cdrerror(v_50); else
    v_50 = cdr(v_50);
    stack[-2] = v_50;
    goto v_32;
v_31:
    goto v_25;
v_27:
v_25:
    v_50 = stack[0];
    return onevalue(v_50);
}



// Code for !*invsq

static LispObject CC_Hinvsq(LispObject env,
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
    v_16 = qvalue(basic_elt(env, 1)); // sqrtflag
    if (v_16 == nil) goto v_7;
    v_16 = v_17;
    {   LispObject fn = basic_elt(env, 2); // invsq
    v_16 = (*qfn1(fn))(fn, v_16);
    }
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 3); // sqrt2top
        return (*qfn1(fn))(fn, v_16);
    }
v_7:
    v_16 = v_17;
    {
        LispObject fn = basic_elt(env, 2); // invsq
        return (*qfn1(fn))(fn, v_16);
    }
    v_16 = nil;
    return onevalue(v_16);
}



// Code for null!+vec!+p

static LispObject CC_nullLvecLp(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // mk!+squared!+norm
    v_14 = (*qfn1(fn))(fn, v_14);
    }
    env = stack[0];
    {   LispObject fn = basic_elt(env, 2); // my!+nullsq!+p
    v_14 = (*qfn1(fn))(fn, v_14);
    }
    if (v_14 == nil) goto v_9;
    v_14 = lisp_true;
    goto v_5;
v_9:
    v_14 = nil;
v_5:
    return onevalue(v_14);
}



// Code for cl_strict!-gdnf

static LispObject CC_cl_strictKgdnf(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_19 = v_2;
// end of prologue
    v_20 = v_19;
    v_19 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // cl_strict!-gdnf1
    v_21 = (*qfn2(fn))(fn, v_20, v_19);
    }
    env = stack[-1];
    v_20 = nil;
    v_19 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    {   LispObject fn = basic_elt(env, 2); // rl_simpl
    v_20 = (*qfn3(fn))(fn, v_21, v_20, v_19);
    }
    env = stack[-1];
    v_19 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // cl_mkstrict
    v_19 = (*qfn2(fn))(fn, v_20, v_19);
    }
    env = stack[-1];
    v_20 = v_19;
    v_19 = stack[0];
    {
        LispObject fn = basic_elt(env, 4); // rl_bnfsimpl
        return (*qfn2(fn))(fn, v_20, v_19);
    }
    return onevalue(v_19);
}



// Code for bc_abs

static LispObject CC_bc_abs(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // absf
    v_11 = (*qfn1(fn))(fn, v_10);
    }
    v_10 = stack[0];
    if (!car_legal(v_10)) v_10 = cdrerror(v_10); else
    v_10 = cdr(v_10);
    return cons(v_11, v_10);
}



// Code for dip_comp1

static LispObject CC_dip_comp1(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_10 = v_2;
// end of prologue
    {   LispObject fn = basic_elt(env, 1); // dip_evlmon
    stack[-1] = (*qfn1(fn))(fn, v_10);
    }
    env = stack[-2];
    v_10 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // dip_evlmon
    v_10 = (*qfn1(fn))(fn, v_10);
    }
    env = stack[-2];
    {
        LispObject v_13 = stack[-1];
        LispObject fn = basic_elt(env, 2); // ev_comp
        return (*qfn2(fn))(fn, v_13, v_10);
    }
}



// Code for subsubf

static LispObject CC_subsubf(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_161, v_162;
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
    stack[-4] = nil;
    v_161 = stack[-5];
    if (!car_legal(v_161)) v_161 = cdrerror(v_161); else
    v_161 = cdr(v_161);
    if (!car_legal(v_161)) v_161 = cdrerror(v_161); else
    v_161 = cdr(v_161);
    stack[0] = v_161;
v_12:
    v_161 = stack[0];
    if (v_161 == nil) goto v_18;
    else goto v_19;
v_18:
    goto v_11;
v_19:
    v_161 = stack[0];
    if (!car_legal(v_161)) v_161 = carerror(v_161); else
    v_161 = car(v_161);
    v_162 = v_161;
    v_161 = stack[-6];
    v_161 = Lassoc(nil, v_162, v_161);
    stack[-1] = v_161;
    if (v_161 == nil) goto v_28;
    v_162 = stack[-1];
    v_161 = stack[-4];
    v_161 = cons(v_162, v_161);
    env = stack[-8];
    stack[-4] = v_161;
    v_162 = stack[-1];
    v_161 = stack[-6];
    v_161 = Ldelete(nil, v_162, v_161);
    env = stack[-8];
    stack[-6] = v_161;
    goto v_26;
v_28:
v_26:
    v_161 = stack[0];
    if (!car_legal(v_161)) v_161 = cdrerror(v_161); else
    v_161 = cdr(v_161);
    stack[0] = v_161;
    goto v_12;
v_11:
    v_162 = stack[-6];
    v_161 = stack[-5];
    if (!car_legal(v_161)) v_161 = carerror(v_161); else
    v_161 = car(v_161);
    stack[-3] = Lsublis(nil, v_162, v_161);
    env = stack[-8];
    v_161 = stack[-5];
    if (!car_legal(v_161)) v_161 = cdrerror(v_161); else
    v_161 = cdr(v_161);
    stack[-5] = v_161;
    v_161 = stack[-5];
    if (v_161 == nil) goto v_55;
    else goto v_56;
v_55:
    v_161 = nil;
    goto v_49;
v_56:
    v_161 = stack[-5];
    if (!car_legal(v_161)) v_161 = carerror(v_161); else
    v_161 = car(v_161);
    v_162 = stack[-6];
    {   LispObject fn = basic_elt(env, 3); // subsublis
    v_161 = (*qfn2(fn))(fn, v_162, v_161);
    }
    env = stack[-8];
    v_161 = ncons(v_161);
    env = stack[-8];
    stack[-1] = v_161;
    stack[-2] = v_161;
v_50:
    v_161 = stack[-5];
    if (!car_legal(v_161)) v_161 = cdrerror(v_161); else
    v_161 = cdr(v_161);
    stack[-5] = v_161;
    v_161 = stack[-5];
    if (v_161 == nil) goto v_70;
    else goto v_71;
v_70:
    v_161 = stack[-2];
    goto v_49;
v_71:
    stack[0] = stack[-1];
    v_161 = stack[-5];
    if (!car_legal(v_161)) v_161 = carerror(v_161); else
    v_161 = car(v_161);
    v_162 = stack[-6];
    {   LispObject fn = basic_elt(env, 3); // subsublis
    v_161 = (*qfn2(fn))(fn, v_162, v_161);
    }
    env = stack[-8];
    v_161 = ncons(v_161);
    env = stack[-8];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_161);
    v_161 = stack[-1];
    if (!car_legal(v_161)) v_161 = cdrerror(v_161); else
    v_161 = cdr(v_161);
    stack[-1] = v_161;
    goto v_50;
v_49:
    v_161 = cons(stack[-3], v_161);
    env = stack[-8];
    stack[-5] = v_161;
    v_161 = stack[-4];
    if (v_161 == nil) goto v_87;
    else goto v_88;
v_87:
    v_161 = stack[-5];
    goto v_8;
v_88:
    v_161 = stack[-4];
    {   LispObject fn = basic_elt(env, 4); // reversip!*
    v_161 = (*qfn1(fn))(fn, v_161);
    }
    env = stack[-8];
    stack[-7] = v_161;
    v_161 = stack[-7];
    if (v_161 == nil) goto v_102;
    else goto v_103;
v_102:
    v_161 = nil;
    v_162 = v_161;
    goto v_96;
v_103:
    v_161 = stack[-7];
    if (!car_legal(v_161)) v_161 = carerror(v_161); else
    v_161 = car(v_161);
    v_162 = v_161;
    stack[-1] = basic_elt(env, 1); // equal
    v_161 = v_162;
    if (!car_legal(v_161)) stack[0] = carerror(v_161); else
    stack[0] = car(v_161);
    v_161 = v_162;
    if (!car_legal(v_161)) v_161 = cdrerror(v_161); else
    v_161 = cdr(v_161);
    {   LispObject fn = basic_elt(env, 5); // aeval
    v_161 = (*qfn1(fn))(fn, v_161);
    }
    env = stack[-8];
    v_161 = list3(stack[-1], stack[0], v_161);
    env = stack[-8];
    v_161 = ncons(v_161);
    env = stack[-8];
    stack[-3] = v_161;
    stack[-4] = v_161;
v_97:
    v_161 = stack[-7];
    if (!car_legal(v_161)) v_161 = cdrerror(v_161); else
    v_161 = cdr(v_161);
    stack[-7] = v_161;
    v_161 = stack[-7];
    if (v_161 == nil) goto v_121;
    else goto v_122;
v_121:
    v_161 = stack[-4];
    v_162 = v_161;
    goto v_96;
v_122:
    stack[-2] = stack[-3];
    v_161 = stack[-7];
    if (!car_legal(v_161)) v_161 = carerror(v_161); else
    v_161 = car(v_161);
    v_162 = v_161;
    stack[-1] = basic_elt(env, 1); // equal
    v_161 = v_162;
    if (!car_legal(v_161)) stack[0] = carerror(v_161); else
    stack[0] = car(v_161);
    v_161 = v_162;
    if (!car_legal(v_161)) v_161 = cdrerror(v_161); else
    v_161 = cdr(v_161);
    {   LispObject fn = basic_elt(env, 5); // aeval
    v_161 = (*qfn1(fn))(fn, v_161);
    }
    env = stack[-8];
    v_161 = list3(stack[-1], stack[0], v_161);
    env = stack[-8];
    v_161 = ncons(v_161);
    env = stack[-8];
    if (!car_legal(stack[-2])) rplacd_fails(stack[-2]);
    setcdr(stack[-2], v_161);
    v_161 = stack[-3];
    if (!car_legal(v_161)) v_161 = cdrerror(v_161); else
    v_161 = cdr(v_161);
    stack[-3] = v_161;
    goto v_97;
v_96:
    v_161 = stack[-5];
    {   LispObject fn = basic_elt(env, 6); // aconc!*
    v_161 = (*qfn2(fn))(fn, v_162, v_161);
    }
    env = stack[-8];
    stack[-5] = v_161;
    v_161 = stack[-6];
    if (v_161 == nil) goto v_144;
    v_161 = stack[-5];
    {
        LispObject fn = basic_elt(env, 7); // subeval
        return (*qfn1(fn))(fn, v_161);
    }
v_144:
    v_162 = basic_elt(env, 2); // sub
    v_161 = stack[-5];
    v_162 = cons(v_162, v_161);
    env = stack[-8];
    v_161 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 8); // mksp
    v_162 = (*qfn2(fn))(fn, v_162, v_161);
    }
    env = stack[-8];
    v_161 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_161 = cons(v_162, v_161);
    env = stack[-8];
    v_162 = ncons(v_161);
    env = stack[-8];
    v_161 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_161 = cons(v_162, v_161);
    env = stack[-8];
    {
        LispObject fn = basic_elt(env, 9); // mk!*sq
        return (*qfn1(fn))(fn, v_161);
    }
    v_161 = nil;
v_8:
    return onevalue(v_161);
}



// Code for deflate1

static LispObject CC_deflate1(LispObject env,
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
    real_push(nil, nil, nil, nil, nil);
    real_push(nil);
    stack_popper stack_popper_var(7);
// copy arguments values to proper place
    stack[-4] = v_3;
    v_62 = v_2;
// end of prologue
    stack[-5] = nil;
    {   LispObject fn = basic_elt(env, 1); // ncoeffs
    v_63 = (*qfn1(fn))(fn, v_62);
    }
    env = stack[-6];
    v_62 = v_63;
    if (!car_legal(v_63)) v_63 = carerror(v_63); else
    v_63 = car(v_63);
    stack[-3] = v_63;
    if (!car_legal(v_62)) v_62 = cdrerror(v_62); else
    v_62 = cdr(v_62);
    v_63 = v_62;
    if (!car_legal(v_63)) v_63 = carerror(v_63); else
    v_63 = car(v_63);
    stack[-2] = v_63;
    if (!car_legal(v_62)) v_62 = cdrerror(v_62); else
    v_62 = cdr(v_62);
    stack[-1] = v_62;
v_20:
    v_62 = stack[-1];
    if (v_62 == nil) goto v_25;
    else goto v_26;
v_25:
    goto v_19;
v_26:
    v_62 = stack[-1];
    if (!car_legal(v_62)) v_62 = carerror(v_62); else
    v_62 = car(v_62);
    stack[0] = v_62;
    v_62 = stack[-3];
    v_62 = sub1(v_62);
    env = stack[-6];
    stack[-3] = v_62;
    v_62 = stack[-2];
    if (!car_legal(v_62)) v_62 = cdrerror(v_62); else
    v_62 = cdr(v_62);
    if (!car_legal(v_62)) v_63 = carerror(v_62); else
    v_63 = car(v_62);
    v_62 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_63 == v_62) goto v_37;
    v_64 = stack[-3];
    v_63 = stack[-2];
    v_62 = stack[-5];
    v_62 = acons(v_64, v_63, v_62);
    env = stack[-6];
    stack[-5] = v_62;
    goto v_35;
v_37:
v_35:
    v_63 = stack[-4];
    v_62 = stack[-2];
    {   LispObject fn = basic_elt(env, 2); // times!:
    v_62 = (*qfn2(fn))(fn, v_63, v_62);
    }
    env = stack[-6];
    stack[-2] = v_62;
    v_62 = stack[0];
    if (v_62 == nil) goto v_52;
    v_63 = stack[0];
    v_62 = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // plus!:
    v_62 = (*qfn2(fn))(fn, v_63, v_62);
    }
    env = stack[-6];
    stack[-2] = v_62;
    goto v_50;
v_52:
v_50:
    v_62 = stack[-1];
    if (!car_legal(v_62)) v_62 = cdrerror(v_62); else
    v_62 = cdr(v_62);
    stack[-1] = v_62;
    goto v_20;
v_19:
    v_63 = stack[-2];
    v_62 = stack[-5];
    return cons(v_63, v_62);
    return onevalue(v_62);
}



// Code for ev!-tades

static LispObject CC_evKtades(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    stack[-2] = nil;
v_8:
    v_31 = stack[-1];
    if (v_31 == nil) goto v_11;
    else goto v_12;
v_11:
    stack[0] = stack[-2];
    v_31 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_31 = ncons(v_31);
    env = stack[-3];
    {
        LispObject v_37 = stack[0];
        LispObject fn = basic_elt(env, 2); // nreverse
        return (*qfn2(fn))(fn, v_37, v_31);
    }
v_12:
    v_33 = qvalue(basic_elt(env, 1)); // ndim!*
    v_31 = stack[-1];
    if (!car_legal(v_31)) v_32 = carerror(v_31); else
    v_32 = car(v_31);
    v_31 = stack[0];
    v_31 = Lassoc(nil, v_32, v_31);
    if (!car_legal(v_31)) v_31 = cdrerror(v_31); else
    v_31 = cdr(v_31);
    {   LispObject fn = basic_elt(env, 3); // binc
    v_32 = (*qfn2(fn))(fn, v_33, v_31);
    }
    env = stack[-3];
    v_31 = stack[-2];
    v_31 = cons(v_32, v_31);
    env = stack[-3];
    stack[-2] = v_31;
    v_31 = stack[-1];
    if (!car_legal(v_31)) v_31 = cdrerror(v_31); else
    v_31 = cdr(v_31);
    stack[-1] = v_31;
    goto v_8;
    v_31 = nil;
    return onevalue(v_31);
}



// Code for restore_props

static LispObject CC_restore_props(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    push(nil, nil);
    stack_popper stack_popper_var(3);
// end of prologue
    v_43 = qvalue(basic_elt(env, 1)); // props!*
    stack[-1] = v_43;
v_6:
    v_43 = stack[-1];
    if (v_43 == nil) goto v_10;
    else goto v_11;
v_10:
    v_43 = nil;
    goto v_5;
v_11:
    v_43 = stack[-1];
    if (!car_legal(v_43)) v_43 = carerror(v_43); else
    v_43 = car(v_43);
    stack[0] = v_43;
    v_43 = stack[0];
    if (!car_legal(v_43)) v_43 = cdrerror(v_43); else
    v_43 = cdr(v_43);
    v_43 = Lconsp(nil, v_43);
    env = stack[-2];
    if (v_43 == nil) goto v_20;
    v_43 = stack[0];
    if (!car_legal(v_43)) v_45 = carerror(v_43); else
    v_45 = car(v_43);
    v_43 = stack[0];
    if (!car_legal(v_43)) v_43 = cdrerror(v_43); else
    v_43 = cdr(v_43);
    if (!car_legal(v_43)) v_44 = carerror(v_43); else
    v_44 = car(v_43);
    v_43 = stack[0];
    if (!car_legal(v_43)) v_43 = cdrerror(v_43); else
    v_43 = cdr(v_43);
    if (!car_legal(v_43)) v_43 = cdrerror(v_43); else
    v_43 = cdr(v_43);
    v_43 = Lputprop(nil, v_45, v_44, v_43);
    env = stack[-2];
    goto v_18;
v_20:
    v_43 = stack[0];
    if (!car_legal(v_43)) v_43 = carerror(v_43); else
    v_43 = car(v_43);
    v_44 = ncons(v_43);
    env = stack[-2];
    v_43 = stack[0];
    if (!car_legal(v_43)) v_43 = cdrerror(v_43); else
    v_43 = cdr(v_43);
    v_43 = Lflag(nil, v_44, v_43);
    env = stack[-2];
    goto v_18;
v_18:
    v_43 = stack[-1];
    if (!car_legal(v_43)) v_43 = cdrerror(v_43); else
    v_43 = cdr(v_43);
    stack[-1] = v_43;
    goto v_6;
v_5:
    return onevalue(v_43);
}



// Code for sc_create

static LispObject CC_sc_create(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[-1] = v_2;
// end of prologue
    stack[-2] = nil;
    v_34 = stack[-1];
    stack[0] = v_34;
v_12:
    v_34 = stack[0];
    v_34 = sub1(v_34);
    env = stack[-3];
    v_34 = Lminusp(nil, v_34);
    env = stack[-3];
    if (v_34 == nil) goto v_17;
    goto v_11;
v_17:
    v_35 = stack[0];
    v_34 = stack[-2];
    v_34 = cons(v_35, v_34);
    env = stack[-3];
    stack[-2] = v_34;
    v_34 = stack[0];
    v_34 = sub1(v_34);
    env = stack[-3];
    stack[0] = v_34;
    goto v_12;
v_11:
    v_35 = stack[-2];
    v_34 = basic_elt(env, 1); // symbolic
    {   LispObject fn = basic_elt(env, 2); // list2vect!*
    stack[0] = (*qfn2(fn))(fn, v_35, v_34);
    }
    env = stack[-3];
    v_34 = stack[-1];
    v_34 = sub1(v_34);
    env = stack[-3];
    v_34 = Lmkvect(nil, v_34);
    {
        LispObject v_39 = stack[0];
        return cons(v_39, v_34);
    }
    return onevalue(v_34);
}



setup_type const u53_setup[] =
{
    {"ofsf_sminsert",           G0W2,     G1W2,     CC_ofsf_sminsert,G3W2,G4W2},
    {"addinds",                 G0W2,     G1W2,     CC_addinds,G3W2,    G4W2},
    {"multtaylorsq",            G0W2,     G1W2,     CC_multtaylorsq,G3W2,G4W2},
    {"talp_nextt",              G0W3,     G1W3,     G2W3,     CC_talp_nextt,G4W3},
    {"qqe_length-graph-bterm",  G0W2,     G1W2,     CC_qqe_lengthKgraphKbterm,G3W2,G4W2},
    {"*kp2q",                   G0W2,     G1W2,     CC_Hkp2q, G3W2,     G4W2},
    {"physopplus",              G0W1,     CC_physopplus,G2W1, G3W1,     G4W1},
    {"mk-strand-vertex",        G0W2,     G1W2,     CC_mkKstrandKvertex,G3W2,G4W2},
    {"lchk",                    G0W1,     CC_lchk,  G2W1,     G3W1,     G4W1},
    {"rationalizef",            G0W1,     CC_rationalizef,G2W1,G3W1,    G4W1},
    {"all_index_lst",           G0W1,     CC_all_index_lst,G2W1,G3W1,   G4W1},
    {"bfprin0x",                G0W2,     G1W2,     CC_bfprin0x,G3W2,   G4W2},
    {"addcoeffs",               G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_addcoeffs},
    {"mrv_constantp",           G0W2,     G1W2,     CC_mrv_constantp,G3W2,G4W2},
    {"equal+matrices+p",        G0W2,     G1W2,     CC_equalLmatricesLp,G3W2,G4W2},
    {"bc_pmon",                 G0W2,     G1W2,     CC_bc_pmon,G3W2,    G4W2},
    {"vevzero?1",               G0W1,     CC_vevzeroW1,G2W1,  G3W1,     G4W1},
    {"remove_critical_pairs",   G0W2,     G1W2,     CC_remove_critical_pairs,G3W2,G4W2},
    {"noncom1",                 G0W1,     CC_noncom1,G2W1,    G3W1,     G4W1},
    {"bassoc",                  G0W2,     G1W2,     CC_bassoc,G3W2,     G4W2},
    {"gak",                     G0W3,     G1W3,     G2W3,     CC_gak,   G4W3},
    {"square-free-mod-p",       G0W1,     CC_squareKfreeKmodKp,G2W1,G3W1,G4W1},
    {"sfto_b:cquot",            G0W2,     G1W2,     CC_sfto_bTcquot,G3W2,G4W2},
    {"operator",                G0W1,     CC_operator,G2W1,   G3W1,     G4W1},
    {"tidysqrt",                G0W1,     CC_tidysqrt,G2W1,   G3W1,     G4W1},
    {"subscriptedvarp2",        G0W1,     CC_subscriptedvarp2,G2W1,G3W1,G4W1},
    {"expttermp1",              G0W2,     G1W2,     CC_expttermp1,G3W2, G4W2},
    {"dipcontenti1",            G0W3,     G1W3,     G2W3,     CC_dipcontenti1,G4W3},
    {"evalsubset",              G0W2,     G1W2,     CC_evalsubset,G3W2, G4W2},
    {"all_defined",             G0W2,     G1W2,     CC_all_defined,G3W2,G4W2},
    {"pa_vect2list",            G0W1,     CC_pa_vect2list,G2W1,G3W1,    G4W1},
    {"lowestdeg",               G0W2,     G1W2,     CC_lowestdeg,G3W2,  G4W2},
    {"rl_ex",                   G0W2,     G1W2,     CC_rl_ex, G3W2,     G4W2},
    {"ofsf_exploitknowl",       G0W1,     CC_ofsf_exploitknowl,G2W1,G3W1,G4W1},
    {"get*nr*real*irred*reps",  G0W1,     CC_getHnrHrealHirredHreps,G2W1,G3W1,G4W1},
    {"constant_expr_listp",     G0W1,     CC_constant_expr_listp,G2W1,G3W1,G4W1},
    {"qqe_simpat",              G0W1,     CC_qqe_simpat,G2W1, G3W1,     G4W1},
    {"ieval",                   G0W1,     CC_ieval, G2W1,     G3W1,     G4W1},
    {"column_dim",              G0W1,     CC_column_dim,G2W1, G3W1,     G4W1},
    {"vdpappendmon",            G0W3,     G1W3,     G2W3,     CC_vdpappendmon,G4W3},
    {"xriterion_2",             G0W3,     G1W3,     G2W3,     CC_xriterion_2,G4W3},
    {"gffdot",                  G0W2,     G1W2,     CC_gffdot,G3W2,     G4W2},
    {"r2speclist",              G0W1,     CC_r2speclist,G2W1, G3W1,     G4W1},
    {"new_provev",              G0W2,     G1W2,     CC_new_provev,G3W2, G4W2},
    {"dpmat_gbtag",             G0W1,     CC_dpmat_gbtag,G2W1,G3W1,     G4W1},
    {"general-minus-mod-p",     G0W1,     CC_generalKminusKmodKp,G2W1,G3W1,G4W1},
    {"simprd",                  G0W1,     CC_simprd,G2W1,     G3W1,     G4W1},
    {"cde_alglistp",            G0W1,     CC_cde_alglistp,G2W1,G3W1,    G4W1},
    {"find_active_components",  G0W3,     G1W3,     G2W3,     CC_find_active_components,G4W3},
    {"*invsq",                  G0W1,     CC_Hinvsq,G2W1,     G3W1,     G4W1},
    {"null+vec+p",              G0W1,     CC_nullLvecLp,G2W1, G3W1,     G4W1},
    {"cl_strict-gdnf",          G0W2,     G1W2,     CC_cl_strictKgdnf,G3W2,G4W2},
    {"bc_abs",                  G0W1,     CC_bc_abs,G2W1,     G3W1,     G4W1},
    {"dip_comp1",               G0W2,     G1W2,     CC_dip_comp1,G3W2,  G4W2},
    {"subsubf",                 G0W2,     G1W2,     CC_subsubf,G3W2,    G4W2},
    {"deflate1",                G0W2,     G1W2,     CC_deflate1,G3W2,   G4W2},
    {"ev-tades",                G0W2,     G1W2,     CC_evKtades,G3W2,   G4W2},
    {"restore_props",           CC_restore_props,G1W0,G2W0,   G3W0,     G4W0},
    {"sc_create",               G0W1,     CC_sc_create,G2W1,  G3W1,     G4W1},
    {nullptr, 
        reinterpret_cast<no_args *>(
            reinterpret_cast<uintptr_t>("u53")),
        reinterpret_cast<one_arg *>(
            reinterpret_cast<uintptr_t>("92302 6804259 9274664")),
        nullptr, nullptr, nullptr}
};

// end of generated code
