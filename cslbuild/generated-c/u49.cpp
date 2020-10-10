
// $destdir/u49.c        Machine generated C code

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


// Code for mk_world1

static LispObject CC_mk_world1(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_11, v_12, v_13;
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
    stack[0] = v_4;
    stack[-1] = v_3;
    v_11 = v_2;
// end of prologue
    {   LispObject fn = basic_elt(env, 1); // map_2_from_map_1
    v_13 = (*qfn1(fn))(fn, v_11);
    }
    v_12 = stack[-1];
    v_11 = stack[0];
    return list3(v_13, v_12, v_11);
}



// Code for fs!:zerop!:

static LispObject CC_fsTzeropT(LispObject env,
                         LispObject v_2)
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
    v_56 = stack[0];
    if (v_56 == nil) goto v_6;
    else goto v_7;
v_6:
    v_56 = lisp_true;
    goto v_5;
v_7:
    v_56 = stack[0];
    if (is_number(v_56)) goto v_19;
    v_56 = stack[0];
    if (!car_legal(v_56)) v_56 = cdrerror(v_56); else
    v_56 = cdr(v_56);
    v_56 = (v_56 == nil ? lisp_true : nil);
    goto v_17;
v_19:
    v_56 = nil;
    goto v_17;
    v_56 = nil;
v_17:
    if (v_56 == nil) goto v_15;
    v_56 = lisp_true;
    goto v_13;
v_15:
    v_56 = stack[0];
    if (!car_legal(v_56)) v_57 = cdrerror(v_56); else
    v_57 = cdr(v_56);
    v_56 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_56 = Lgetv(nil, v_57, v_56);
    env = stack[-1];
    if (v_56 == nil) goto v_32;
    else goto v_33;
v_32:
    v_56 = stack[0];
    if (!car_legal(v_56)) v_57 = cdrerror(v_56); else
    v_57 = cdr(v_56);
    v_56 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_56 = Lgetv(nil, v_57, v_56);
    v_57 = v_56;
    v_56 = v_57;
    if (is_number(v_56)) goto v_46;
    v_56 = nil;
    goto v_44;
v_46:
    v_56 = v_57;
        return Lzerop(nil, v_56);
    v_56 = nil;
v_44:
    goto v_31;
v_33:
    v_56 = nil;
    goto v_31;
    v_56 = nil;
v_31:
    goto v_13;
    v_56 = nil;
v_13:
    goto v_5;
    v_56 = nil;
v_5:
    return onevalue(v_56);
}



// Code for dp!=retimes

static LispObject CC_dpMretimes(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_36, v_37, v_38;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_37 = v_2;
// end of prologue
v_6:
    v_36 = v_37;
    if (!car_legal(v_36)) v_38 = carerror(v_36); else
    v_38 = car(v_36);
    v_36 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_38 == v_36) goto v_9;
    else goto v_10;
v_9:
    v_36 = v_37;
    if (!car_legal(v_36)) v_36 = cdrerror(v_36); else
    v_36 = cdr(v_36);
    if (v_36 == nil) goto v_17;
    v_36 = v_37;
    if (!car_legal(v_36)) v_36 = cdrerror(v_36); else
    v_36 = cdr(v_36);
    v_37 = v_36;
    goto v_6;
v_17:
    v_36 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_5;
    goto v_8;
v_10:
    v_36 = v_37;
    if (!car_legal(v_36)) v_36 = cdrerror(v_36); else
    v_36 = cdr(v_36);
    if (v_36 == nil) goto v_25;
    else goto v_26;
v_25:
    v_36 = v_37;
    if (!car_legal(v_36)) v_36 = carerror(v_36); else
    v_36 = car(v_36);
    goto v_5;
v_26:
    v_36 = basic_elt(env, 1); // times
    return cons(v_36, v_37);
v_8:
    v_36 = nil;
v_5:
    return onevalue(v_36);
}



// Code for st_sorttree1

static LispObject CC_st_sorttree1(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_314, v_315, v_316;
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
    push(nil, nil);
    stack_popper stack_popper_var(13);
// copy arguments values to proper place
    stack[-8] = v_4;
    stack[-9] = v_3;
    stack[-10] = v_2;
// end of prologue
    stack[-11] = nil;
    stack[-7] = nil;
    stack[-1] = nil;
    v_314 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-6] = v_314;
    v_314 = stack[-10];
    if (!car_legal(v_314)) v_314 = cdrerror(v_314); else
    v_314 = cdr(v_314);
    if (!car_legal(v_314)) v_314 = carerror(v_314); else
    v_314 = car(v_314);
    if (is_number(v_314)) goto v_16;
    else goto v_17;
v_16:
    v_314 = stack[-10];
    if (!car_legal(v_314)) v_315 = carerror(v_314); else
    v_315 = car(v_314);
    v_314 = basic_elt(env, 1); // !*
    if (v_315 == v_314) goto v_23;
    else goto v_24;
v_23:
    v_314 = stack[-10];
    if (!car_legal(v_314)) v_314 = cdrerror(v_314); else
    v_314 = cdr(v_314);
    stack[-4] = v_314;
    v_314 = stack[-4];
    if (v_314 == nil) goto v_38;
    else goto v_39;
v_38:
    v_314 = nil;
    goto v_32;
v_39:
    v_314 = stack[-4];
    if (!car_legal(v_314)) v_314 = carerror(v_314); else
    v_314 = car(v_314);
    stack[0] = stack[-9];
    v_314 = sub1(v_314);
    env = stack[-12];
    v_314 = Lgetv(nil, stack[0], v_314);
    env = stack[-12];
    v_314 = ncons(v_314);
    env = stack[-12];
    stack[-2] = v_314;
    stack[-3] = v_314;
v_33:
    v_314 = stack[-4];
    if (!car_legal(v_314)) v_314 = cdrerror(v_314); else
    v_314 = cdr(v_314);
    stack[-4] = v_314;
    v_314 = stack[-4];
    if (v_314 == nil) goto v_54;
    else goto v_55;
v_54:
    v_314 = stack[-3];
    goto v_32;
v_55:
    stack[-1] = stack[-2];
    v_314 = stack[-4];
    if (!car_legal(v_314)) v_314 = carerror(v_314); else
    v_314 = car(v_314);
    stack[0] = stack[-9];
    v_314 = sub1(v_314);
    env = stack[-12];
    v_314 = Lgetv(nil, stack[0], v_314);
    env = stack[-12];
    v_314 = ncons(v_314);
    env = stack[-12];
    if (!car_legal(stack[-1])) rplacd_fails(stack[-1]);
    setcdr(stack[-1], v_314);
    v_314 = stack[-2];
    if (!car_legal(v_314)) v_314 = cdrerror(v_314); else
    v_314 = cdr(v_314);
    stack[-2] = v_314;
    goto v_33;
v_32:
    stack[-11] = v_314;
    v_316 = stack[-11];
    v_315 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_314 = stack[-10];
    return list2star(v_316, v_315, v_314);
v_24:
    v_314 = stack[-10];
    if (!car_legal(v_314)) v_314 = cdrerror(v_314); else
    v_314 = cdr(v_314);
    stack[-5] = v_314;
    v_314 = stack[-5];
    if (v_314 == nil) goto v_84;
    else goto v_85;
v_84:
    v_314 = nil;
    goto v_78;
v_85:
    v_314 = stack[-5];
    if (!car_legal(v_314)) v_314 = carerror(v_314); else
    v_314 = car(v_314);
    stack[-1] = v_314;
    stack[0] = stack[-9];
    v_314 = sub1(v_314);
    env = stack[-12];
    v_314 = Lgetv(nil, stack[0], v_314);
    env = stack[-12];
    v_314 = cons(stack[-1], v_314);
    env = stack[-12];
    v_314 = ncons(v_314);
    env = stack[-12];
    stack[-3] = v_314;
    stack[-4] = v_314;
v_79:
    v_314 = stack[-5];
    if (!car_legal(v_314)) v_314 = cdrerror(v_314); else
    v_314 = cdr(v_314);
    stack[-5] = v_314;
    v_314 = stack[-5];
    if (v_314 == nil) goto v_102;
    else goto v_103;
v_102:
    v_314 = stack[-4];
    goto v_78;
v_103:
    stack[-2] = stack[-3];
    v_314 = stack[-5];
    if (!car_legal(v_314)) v_314 = carerror(v_314); else
    v_314 = car(v_314);
    stack[-1] = v_314;
    stack[0] = stack[-9];
    v_314 = sub1(v_314);
    env = stack[-12];
    v_314 = Lgetv(nil, stack[0], v_314);
    env = stack[-12];
    v_314 = cons(stack[-1], v_314);
    env = stack[-12];
    v_314 = ncons(v_314);
    env = stack[-12];
    if (!car_legal(stack[-2])) rplacd_fails(stack[-2]);
    setcdr(stack[-2], v_314);
    v_314 = stack[-3];
    if (!car_legal(v_314)) v_314 = cdrerror(v_314); else
    v_314 = cdr(v_314);
    stack[-3] = v_314;
    goto v_79;
v_78:
    stack[-1] = v_314;
    goto v_15;
v_17:
    v_314 = stack[-10];
    if (!car_legal(v_314)) v_315 = carerror(v_314); else
    v_315 = car(v_314);
    v_314 = basic_elt(env, 1); // !*
    if (v_315 == v_314) goto v_125;
    else goto v_126;
v_125:
    v_314 = stack[-10];
    if (!car_legal(v_314)) v_314 = cdrerror(v_314); else
    v_314 = cdr(v_314);
    stack[0] = v_314;
v_133:
    v_314 = stack[0];
    if (v_314 == nil) goto v_138;
    else goto v_139;
v_138:
    goto v_132;
v_139:
    v_314 = stack[0];
    if (!car_legal(v_314)) v_314 = carerror(v_314); else
    v_314 = car(v_314);
    v_316 = v_314;
    v_315 = stack[-6];
    v_314 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_315 == v_314) goto v_148;
    v_315 = stack[-9];
    v_314 = stack[-8];
    {   LispObject fn = basic_elt(env, 0); // st_sorttree1
    v_314 = (*qfn3(fn))(fn, v_316, v_315, v_314);
    }
    env = stack[-12];
    stack[-2] = v_314;
    v_315 = stack[-6];
    v_314 = stack[-2];
    if (!car_legal(v_314)) v_314 = cdrerror(v_314); else
    v_314 = cdr(v_314);
    if (!car_legal(v_314)) v_314 = carerror(v_314); else
    v_314 = car(v_314);
    v_314 = times2(v_315, v_314);
    env = stack[-12];
    stack[-6] = v_314;
    v_314 = stack[-2];
    if (!car_legal(v_314)) v_315 = carerror(v_314); else
    v_315 = car(v_314);
    v_314 = stack[-11];
    v_314 = cons(v_315, v_314);
    env = stack[-12];
    stack[-11] = v_314;
    v_314 = stack[-2];
    if (!car_legal(v_314)) v_314 = cdrerror(v_314); else
    v_314 = cdr(v_314);
    if (!car_legal(v_314)) v_315 = cdrerror(v_314); else
    v_315 = cdr(v_314);
    v_314 = stack[-7];
    v_314 = cons(v_315, v_314);
    env = stack[-12];
    stack[-7] = v_314;
    goto v_146;
v_148:
v_146:
    v_314 = stack[0];
    if (!car_legal(v_314)) v_314 = cdrerror(v_314); else
    v_314 = cdr(v_314);
    stack[0] = v_314;
    goto v_133;
v_132:
    v_315 = stack[-6];
    v_314 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_315 == v_314) goto v_174;
    else goto v_175;
v_174:
    v_316 = nil;
    v_315 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_314 = nil;
    return list2star(v_316, v_315, v_314);
v_175:
    v_314 = stack[-7];
    v_314 = Lreverse(nil, v_314);
    env = stack[-12];
    stack[-7] = v_314;
    v_314 = stack[-11];
    v_314 = Lreverse(nil, v_314);
    env = stack[-12];
    stack[-11] = v_314;
    stack[0] = stack[-11];
    stack[-1] = stack[-6];
    v_315 = basic_elt(env, 1); // !*
    v_314 = stack[-7];
    v_314 = cons(v_315, v_314);
    {
        LispObject v_329 = stack[0];
        LispObject v_330 = stack[-1];
        return list2star(v_329, v_330, v_314);
    }
    goto v_124;
v_126:
v_124:
    v_314 = stack[-10];
    if (!car_legal(v_314)) v_314 = cdrerror(v_314); else
    v_314 = cdr(v_314);
    stack[0] = v_314;
v_198:
    v_314 = stack[0];
    if (v_314 == nil) goto v_203;
    else goto v_204;
v_203:
    goto v_197;
v_204:
    v_314 = stack[0];
    if (!car_legal(v_314)) v_314 = carerror(v_314); else
    v_314 = car(v_314);
    v_316 = v_314;
    v_315 = stack[-6];
    v_314 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_315 == v_314) goto v_213;
    v_315 = stack[-9];
    v_314 = stack[-8];
    {   LispObject fn = basic_elt(env, 0); // st_sorttree1
    v_314 = (*qfn3(fn))(fn, v_316, v_315, v_314);
    }
    env = stack[-12];
    stack[-2] = v_314;
    v_315 = stack[-6];
    v_314 = stack[-2];
    if (!car_legal(v_314)) v_314 = cdrerror(v_314); else
    v_314 = cdr(v_314);
    if (!car_legal(v_314)) v_314 = carerror(v_314); else
    v_314 = car(v_314);
    v_314 = times2(v_315, v_314);
    env = stack[-12];
    stack[-6] = v_314;
    v_314 = stack[-2];
    if (!car_legal(v_314)) v_314 = cdrerror(v_314); else
    v_314 = cdr(v_314);
    if (!car_legal(v_314)) v_316 = cdrerror(v_314); else
    v_316 = cdr(v_314);
    v_314 = stack[-2];
    if (!car_legal(v_314)) v_315 = carerror(v_314); else
    v_315 = car(v_314);
    v_314 = stack[-1];
    v_314 = acons(v_316, v_315, v_314);
    env = stack[-12];
    stack[-1] = v_314;
    goto v_211;
v_213:
v_211:
    v_314 = stack[0];
    if (!car_legal(v_314)) v_314 = cdrerror(v_314); else
    v_314 = cdr(v_314);
    stack[0] = v_314;
    goto v_198;
v_197:
    goto v_15;
v_15:
    v_315 = stack[-6];
    v_314 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_315 == v_314) goto v_238;
    else goto v_239;
v_238:
    v_316 = nil;
    v_315 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_314 = nil;
    return list2star(v_316, v_315, v_314);
v_239:
    v_314 = stack[-10];
    if (!car_legal(v_314)) v_315 = carerror(v_314); else
    v_315 = car(v_314);
    v_314 = basic_elt(env, 2); // !+
    if (v_315 == v_314) goto v_248;
    else goto v_249;
v_248:
    v_315 = stack[-1];
    v_314 = stack[-8];
    {   LispObject fn = basic_elt(env, 3); // cdr_sort
    v_314 = (*qfn2(fn))(fn, v_315, v_314);
    }
    env = stack[-12];
    stack[-1] = v_314;
    goto v_247;
v_249:
    v_315 = stack[-1];
    v_314 = stack[-8];
    {   LispObject fn = basic_elt(env, 4); // cdr_signsort
    v_314 = (*qfn2(fn))(fn, v_315, v_314);
    }
    env = stack[-12];
    stack[-1] = v_314;
    v_314 = stack[-1];
    if (!car_legal(v_314)) v_315 = carerror(v_314); else
    v_315 = car(v_314);
    v_314 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_315 == v_314) goto v_263;
    else goto v_264;
v_263:
    v_316 = nil;
    v_315 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_314 = nil;
    return list2star(v_316, v_315, v_314);
v_264:
    v_315 = stack[-6];
    v_314 = stack[-1];
    if (!car_legal(v_314)) v_314 = carerror(v_314); else
    v_314 = car(v_314);
    v_314 = times2(v_315, v_314);
    env = stack[-12];
    stack[-6] = v_314;
    goto v_262;
v_262:
    v_314 = stack[-1];
    if (!car_legal(v_314)) v_314 = cdrerror(v_314); else
    v_314 = cdr(v_314);
    stack[-1] = v_314;
    goto v_247;
v_247:
v_283:
    v_314 = stack[-1];
    if (v_314 == nil) goto v_286;
    else goto v_287;
v_286:
    goto v_282;
v_287:
    v_314 = stack[-1];
    if (!car_legal(v_314)) v_314 = carerror(v_314); else
    v_314 = car(v_314);
    if (!car_legal(v_314)) v_315 = carerror(v_314); else
    v_315 = car(v_314);
    v_314 = stack[-7];
    v_314 = cons(v_315, v_314);
    env = stack[-12];
    stack[-7] = v_314;
    v_314 = stack[-1];
    if (!car_legal(v_314)) v_314 = carerror(v_314); else
    v_314 = car(v_314);
    if (!car_legal(v_314)) v_315 = cdrerror(v_314); else
    v_315 = cdr(v_314);
    v_314 = stack[-11];
    v_314 = cons(v_315, v_314);
    env = stack[-12];
    stack[-11] = v_314;
    v_314 = stack[-1];
    if (!car_legal(v_314)) v_314 = cdrerror(v_314); else
    v_314 = cdr(v_314);
    stack[-1] = v_314;
    goto v_283;
v_282:
    v_314 = stack[-10];
    if (!car_legal(v_314)) stack[0] = carerror(v_314); else
    stack[0] = car(v_314);
    v_314 = stack[-7];
    v_314 = Lreverse(nil, v_314);
    env = stack[-12];
    v_314 = cons(stack[0], v_314);
    env = stack[-12];
    stack[-7] = v_314;
    v_314 = stack[-11];
    v_314 = Lreverse(nil, v_314);
    stack[-11] = v_314;
    v_316 = stack[-11];
    v_315 = stack[-6];
    v_314 = stack[-7];
    return list2star(v_316, v_315, v_314);
    return onevalue(v_314);
}



// Code for even_action

static LispObject CC_even_action(LispObject env,
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
    real_push(nil, nil, nil, nil, nil);
    real_push(nil);
    stack_popper stack_popper_var(7);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-4] = v_2;
// end of prologue
    v_39 = nil;
    v_38 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_38 = cons(v_39, v_38);
    env = stack[-6];
    v_39 = v_38;
    v_38 = stack[0];
    stack[-5] = v_38;
v_14:
    v_38 = stack[-5];
    if (v_38 == nil) goto v_18;
    else goto v_19;
v_18:
    goto v_13;
v_19:
    v_38 = stack[-5];
    if (!car_legal(v_38)) v_38 = carerror(v_38); else
    v_38 = car(v_38);
    stack[-3] = v_39;
    stack[-2] = stack[-4];
    v_39 = v_38;
    if (!car_legal(v_39)) stack[-1] = cdrerror(v_39); else
    stack[-1] = cdr(v_39);
    if (!car_legal(v_38)) stack[0] = carerror(v_38); else
    stack[0] = car(v_38);
    v_38 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_38 = ncons(v_38);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 1); // even_action_sf
    v_38 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_38);
    }
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 2); // addsq
    v_38 = (*qfn2(fn))(fn, stack[-3], v_38);
    }
    env = stack[-6];
    v_39 = v_38;
    v_38 = stack[-5];
    if (!car_legal(v_38)) v_38 = cdrerror(v_38); else
    v_38 = cdr(v_38);
    stack[-5] = v_38;
    goto v_14;
v_13:
    v_38 = v_39;
    return onevalue(v_38);
}



// Code for dvfsf_0mk2

static LispObject CC_dvfsf_0mk2(LispObject env,
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



// Code for nextu

static LispObject CC_nextu(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    v_56 = v_3;
    stack[0] = v_2;
// end of prologue
    v_55 = stack[0];
    if (v_55 == nil) goto v_7;
    else goto v_8;
v_7:
    v_55 = nil;
    goto v_6;
v_8:
    v_57 = v_56;
    v_55 = stack[0];
    if (!car_legal(v_55)) v_56 = carerror(v_55); else
    v_56 = car(v_55);
    v_55 = nil;
    {   LispObject fn = basic_elt(env, 1); // subtractinds
    v_55 = (*qfn3(fn))(fn, v_57, v_56, v_55);
    }
    env = stack[-2];
    stack[-1] = v_55;
    v_55 = stack[-1];
    if (v_55 == nil) goto v_24;
    else goto v_25;
v_24:
    v_55 = nil;
    goto v_16;
v_25:
    v_55 = stack[0];
    if (!car_legal(v_55)) v_55 = cdrerror(v_55); else
    v_55 = cdr(v_55);
    if (!car_legal(v_55)) v_56 = carerror(v_55); else
    v_56 = car(v_55);
    v_55 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // evaluatecoeffts
    v_55 = (*qfn2(fn))(fn, v_56, v_55);
    }
    v_56 = v_55;
    v_55 = v_56;
    if (v_55 == nil) goto v_39;
    else goto v_40;
v_39:
    v_55 = lisp_true;
    goto v_38;
v_40:
    v_57 = v_56;
    v_55 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_55 = (v_57 == v_55 ? lisp_true : nil);
    goto v_38;
    v_55 = nil;
v_38:
    if (v_55 == nil) goto v_36;
    v_55 = nil;
    goto v_16;
v_36:
    v_57 = stack[-1];
    v_55 = stack[0];
    if (!car_legal(v_55)) v_55 = cdrerror(v_55); else
    v_55 = cdr(v_55);
    if (!car_legal(v_55)) v_55 = cdrerror(v_55); else
    v_55 = cdr(v_55);
    return list2star(v_57, v_56, v_55);
v_16:
    goto v_6;
    v_55 = nil;
v_6:
    return onevalue(v_55);
}



// Code for xadd!*

static LispObject CC_xaddH(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_165, v_166, v_167;
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
    stack[-9] = v_4;
    stack[-10] = v_3;
    stack[-11] = v_2;
// end of prologue
    v_165 = stack[-10];
    stack[-12] = v_165;
v_13:
    v_165 = stack[-12];
    if (v_165 == nil) goto v_16;
    v_165 = stack[-11];
    if (!car_legal(v_165)) v_166 = carerror(v_165); else
    v_166 = car(v_165);
    v_165 = stack[-12];
    if (!car_legal(v_165)) v_165 = carerror(v_165); else
    v_165 = car(v_165);
    if (!car_legal(v_165)) v_165 = carerror(v_165); else
    v_165 = car(v_165);
    if (equal(v_166, v_165)) goto v_23;
    else goto v_24;
v_23:
    v_165 = stack[-11];
    if (!car_legal(v_165)) v_165 = cdrerror(v_165); else
    v_165 = cdr(v_165);
    if (!car_legal(v_165)) v_166 = carerror(v_165); else
    v_166 = car(v_165);
    v_165 = stack[-12];
    if (!car_legal(v_165)) v_165 = carerror(v_165); else
    v_165 = car(v_165);
    if (!car_legal(v_165)) v_165 = cdrerror(v_165); else
    v_165 = cdr(v_165);
    if (!car_legal(v_165)) v_165 = carerror(v_165); else
    v_165 = car(v_165);
    v_165 = (equal(v_166, v_165) ? lisp_true : nil);
    goto v_22;
v_24:
    v_165 = nil;
    goto v_22;
    v_165 = nil;
v_22:
    if (v_165 == nil) goto v_20;
    else goto v_16;
v_20:
    goto v_17;
v_16:
    goto v_12;
v_17:
    v_165 = stack[-12];
    if (!car_legal(v_165)) v_165 = cdrerror(v_165); else
    v_165 = cdr(v_165);
    stack[-12] = v_165;
    goto v_13;
v_12:
    v_165 = stack[-12];
    if (v_165 == nil) goto v_47;
    v_165 = stack[-12];
    if (!car_legal(v_165)) v_166 = carerror(v_165); else
    v_166 = car(v_165);
    v_165 = stack[-10];
    v_165 = Ldelete(nil, v_166, v_165);
    env = stack[-13];
    stack[-10] = v_165;
    v_165 = stack[-12];
    if (!car_legal(v_165)) v_165 = carerror(v_165); else
    v_165 = car(v_165);
    stack[-12] = v_165;
    v_165 = stack[-9];
    if (v_165 == nil) goto v_58;
    v_165 = qvalue(basic_elt(env, 1)); // newrule!*
    if (v_165 == nil) goto v_58;
    v_165 = stack[-12];
    if (!car_legal(v_165)) v_166 = carerror(v_165); else
    v_166 = car(v_165);
    v_165 = qvalue(basic_elt(env, 1)); // newrule!*
    if (!car_legal(v_165)) v_165 = carerror(v_165); else
    v_165 = car(v_165);
    stack[0] = v_165;
    if (equal(v_166, v_165)) goto v_70;
    v_165 = stack[-12];
    if (!car_legal(v_165)) v_165 = carerror(v_165); else
    v_165 = car(v_165);
    {   LispObject fn = basic_elt(env, 6); // powlisp
    v_165 = (*qfn1(fn))(fn, v_165);
    }
    env = stack[-13];
    goto v_68;
v_70:
    v_165 = nil;
    goto v_68;
    v_165 = nil;
v_68:
    if (v_165 == nil) goto v_66;
    stack[-8] = basic_elt(env, 2); // plus
    stack[-7] = stack[0];
    stack[-6] = basic_elt(env, 3); // difference
    v_165 = stack[-12];
    if (!car_legal(v_165)) v_165 = cdrerror(v_165); else
    v_165 = cdr(v_165);
    if (!car_legal(v_165)) v_165 = cdrerror(v_165); else
    v_165 = cdr(v_165);
    if (!car_legal(v_165)) stack[-5] = carerror(v_165); else
    stack[-5] = car(v_165);
    stack[-4] = basic_elt(env, 4); // times
    v_165 = stack[-12];
    if (!car_legal(v_165)) v_165 = carerror(v_165); else
    v_165 = car(v_165);
    stack[-3] = v_165;
    v_165 = stack[-3];
    if (v_165 == nil) goto v_105;
    else goto v_106;
v_105:
    v_165 = nil;
    goto v_99;
v_106:
    v_165 = stack[-3];
    if (!car_legal(v_165)) v_165 = carerror(v_165); else
    v_165 = car(v_165);
    v_167 = basic_elt(env, 5); // expt
    v_166 = v_165;
    if (!car_legal(v_166)) v_166 = carerror(v_166); else
    v_166 = car(v_166);
    if (!car_legal(v_165)) v_165 = cdrerror(v_165); else
    v_165 = cdr(v_165);
    v_165 = list3(v_167, v_166, v_165);
    env = stack[-13];
    v_165 = ncons(v_165);
    env = stack[-13];
    stack[-1] = v_165;
    stack[-2] = v_165;
v_100:
    v_165 = stack[-3];
    if (!car_legal(v_165)) v_165 = cdrerror(v_165); else
    v_165 = cdr(v_165);
    stack[-3] = v_165;
    v_165 = stack[-3];
    if (v_165 == nil) goto v_123;
    else goto v_124;
v_123:
    v_165 = stack[-2];
    goto v_99;
v_124:
    stack[0] = stack[-1];
    v_165 = stack[-3];
    if (!car_legal(v_165)) v_165 = carerror(v_165); else
    v_165 = car(v_165);
    v_167 = basic_elt(env, 5); // expt
    v_166 = v_165;
    if (!car_legal(v_166)) v_166 = carerror(v_166); else
    v_166 = car(v_166);
    if (!car_legal(v_165)) v_165 = cdrerror(v_165); else
    v_165 = cdr(v_165);
    v_165 = list3(v_167, v_166, v_165);
    env = stack[-13];
    v_165 = ncons(v_165);
    env = stack[-13];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_165);
    v_165 = stack[-1];
    if (!car_legal(v_165)) v_165 = cdrerror(v_165); else
    v_165 = cdr(v_165);
    stack[-1] = v_165;
    goto v_100;
v_99:
    v_165 = cons(stack[-4], v_165);
    env = stack[-13];
    v_165 = list3(stack[-6], stack[-5], v_165);
    env = stack[-13];
    v_165 = list3(stack[-8], stack[-7], v_165);
    env = stack[-13];
    {   LispObject fn = basic_elt(env, 7); // simp
    v_165 = (*qfn1(fn))(fn, v_165);
    }
    env = stack[-13];
    {   LispObject fn = basic_elt(env, 8); // prepsq
    v_166 = (*qfn1(fn))(fn, v_165);
    }
    env = stack[-13];
    v_165 = stack[-12];
    if (!car_legal(v_165)) v_165 = cdrerror(v_165); else
    v_165 = cdr(v_165);
    if (!car_legal(v_165)) v_165 = carerror(v_165); else
    v_165 = car(v_165);
    if (!car_legal(v_165)) v_165 = cdrerror(v_165); else
    v_165 = cdr(v_165);
    {   LispObject fn = basic_elt(env, 9); // updoldrules
    v_165 = (*qfn2(fn))(fn, v_166, v_165);
    }
    env = stack[-13];
    goto v_64;
v_66:
    v_165 = stack[-12];
    if (!car_legal(v_165)) v_165 = cdrerror(v_165); else
    v_165 = cdr(v_165);
    if (!car_legal(v_165)) v_165 = cdrerror(v_165); else
    v_165 = cdr(v_165);
    if (!car_legal(v_165)) v_166 = carerror(v_165); else
    v_166 = car(v_165);
    v_165 = stack[-12];
    if (!car_legal(v_165)) v_165 = cdrerror(v_165); else
    v_165 = cdr(v_165);
    if (!car_legal(v_165)) v_165 = carerror(v_165); else
    v_165 = car(v_165);
    if (!car_legal(v_165)) v_165 = cdrerror(v_165); else
    v_165 = cdr(v_165);
    {   LispObject fn = basic_elt(env, 9); // updoldrules
    v_165 = (*qfn2(fn))(fn, v_166, v_165);
    }
    env = stack[-13];
    goto v_64;
v_64:
    goto v_56;
v_58:
v_56:
    goto v_45;
v_47:
v_45:
    v_165 = stack[-9];
    if (v_165 == nil) goto v_159;
    v_166 = stack[-11];
    v_165 = stack[-10];
    v_165 = cons(v_166, v_165);
    stack[-10] = v_165;
    goto v_157;
v_159:
v_157:
    v_165 = stack[-10];
    return onevalue(v_165);
}



// Code for pasf_smordtable2

static LispObject CC_pasf_smordtable2(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_15, v_16, v_17;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_15 = v_3;
    v_16 = v_2;
// end of prologue
    v_17 = basic_elt(env, 1); // ((lessp (lessp 2) (leq 2) (equal 2) (neq nil) (geq nil) (greaterp nil) (cong nil) (ncong nil)) (leq (lessp 2) (leq 2) (equal
// 2) (neq nil) (geq nil) (greaterp nil) (cong nil) (ncong nil)) (equal (lessp false) (leq false) (equal false) (neq 1) (geq
// 1) (greaterp 1) (cong nil) (ncong nil)) (neq (lessp 2) (leq 2) (equal 2) (neq nil) (geq nil) (greaterp nil) (cong nil) (ncong
// nil)) (geq (lessp false) (leq false) (equal false) (neq 1) (geq 1) (greaterp 1) (cong nil) (ncong nil)) (greaterp (lessp
// false) (leq false) (equal false) (neq 1) (geq 1) (greaterp 1) (cong nil) (ncong nil)))
    v_16 = Latsoc(nil, v_16, v_17);
    v_15 = Latsoc(nil, v_15, v_16);
    if (!car_legal(v_15)) v_15 = cdrerror(v_15); else
    v_15 = cdr(v_15);
    return onevalue(v_15);
}



// Code for rat_leq

static LispObject CC_rat_leq(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // negsq
    v_12 = (*qfn1(fn))(fn, v_12);
    }
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // addsq
    v_12 = (*qfn2(fn))(fn, stack[0], v_12);
    }
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // rat_sgn
    v_13 = (*qfn1(fn))(fn, v_12);
    }
    v_12 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
        return Llessp_2(nil, v_13, v_12);
}



// Code for prload

static LispObject CC_prload(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_4;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// end of prologue
    v_4 = nil;
    return onevalue(v_4);
}



// Code for dipcontenti

static LispObject CC_dipcontenti(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_52, v_53, v_54, v_55;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_55 = v_2;
// end of prologue
    v_52 = v_55;
    if (v_52 == nil) goto v_6;
    else goto v_7;
v_6:
    v_52 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_5;
v_7:
    v_52 = v_55;
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    v_54 = v_52;
    v_52 = v_54;
    if (v_52 == nil) goto v_18;
    else goto v_19;
v_18:
    v_52 = v_55;
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    if (!car_legal(v_52)) v_52 = carerror(v_52); else
    v_52 = car(v_52);
    v_53 = qvalue(basic_elt(env, 1)); // !*groebrm
    if (v_53 == nil) goto v_28;
    v_53 = v_55;
    if (!car_legal(v_53)) v_53 = carerror(v_53); else
    v_53 = car(v_53);
    goto v_26;
v_28:
    v_53 = nil;
    goto v_26;
    v_53 = nil;
v_26:
    return cons(v_52, v_53);
v_19:
    v_52 = v_55;
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    if (!car_legal(v_52)) v_53 = carerror(v_52); else
    v_53 = car(v_52);
    v_52 = qvalue(basic_elt(env, 1)); // !*groebrm
    if (v_52 == nil) goto v_44;
    v_52 = v_55;
    if (!car_legal(v_52)) v_52 = carerror(v_52); else
    v_52 = car(v_52);
    goto v_42;
v_44:
    v_52 = nil;
    goto v_42;
    v_52 = nil;
v_42:
    {
        LispObject fn = basic_elt(env, 2); // dipcontenti1
        return (*qfn3(fn))(fn, v_53, v_52, v_54);
    }
    v_52 = nil;
    goto v_5;
    v_52 = nil;
v_5:
    return onevalue(v_52);
}



// Code for !:log10

static LispObject CC_Tlog10(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_25 = basic_elt(env, 0); // !:log10
    v_24 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // get!:const
    v_24 = (*qfn2(fn))(fn, v_25, v_24);
    }
    env = stack[-2];
    stack[-1] = v_24;
    v_25 = stack[-1];
    v_24 = basic_elt(env, 1); // not_found
    if (v_25 == v_24) goto v_13;
    v_24 = stack[-1];
    goto v_6;
v_13:
    v_25 = qvalue(basic_elt(env, 2)); // bften!*
    v_24 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // log!:
    v_24 = (*qfn2(fn))(fn, v_25, v_24);
    }
    env = stack[-2];
    stack[-1] = v_24;
    v_25 = basic_elt(env, 0); // !:log10
    v_24 = stack[-1];
    {   LispObject fn = basic_elt(env, 5); // save!:const
    v_24 = (*qfn2(fn))(fn, v_25, v_24);
    }
    v_24 = stack[-1];
v_6:
    return onevalue(v_24);
}



// Code for monic

static LispObject CC_monic(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_21, v_22, v_23;
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
    v_21 = v_3;
    stack[0] = v_2;
// end of prologue
    v_23 = basic_elt(env, 1); // lcof
    v_22 = stack[0];
    v_21 = list3(v_23, v_22, v_21);
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // aeval
    v_21 = (*qfn1(fn))(fn, v_21);
    }
    env = stack[-1];
    v_23 = basic_elt(env, 2); // quotient
    v_22 = stack[0];
    v_21 = list3(v_23, v_22, v_21);
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // aeval
    v_21 = (*qfn1(fn))(fn, v_21);
    }
    env = stack[-1];
    stack[0] = v_21;
    v_21 = stack[0];
    {
        LispObject fn = basic_elt(env, 3); // aeval
        return (*qfn1(fn))(fn, v_21);
    }
    return onevalue(v_21);
}



// Code for pa_part2list

static LispObject CC_pa_part2list(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_100;
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
    v_100 = stack[-6];
    if (!car_legal(v_100)) v_100 = cdrerror(v_100); else
    v_100 = cdr(v_100);
    {   LispObject fn = basic_elt(env, 1); // upbve
    v_100 = (*qfn1(fn))(fn, v_100);
    }
    env = stack[-8];
    stack[0] = v_100;
    v_100 = stack[0];
    v_100 = sub1(v_100);
    env = stack[-8];
    v_100 = Lmkvect(nil, v_100);
    env = stack[-8];
    stack[-7] = v_100;
    v_100 = stack[0];
    stack[-4] = v_100;
v_20:
    v_100 = stack[-4];
    v_100 = sub1(v_100);
    env = stack[-8];
    v_100 = Lminusp(nil, v_100);
    env = stack[-8];
    if (v_100 == nil) goto v_25;
    goto v_19;
v_25:
    v_100 = stack[-6];
    if (!car_legal(v_100)) stack[0] = cdrerror(v_100); else
    stack[0] = cdr(v_100);
    v_100 = stack[-4];
    v_100 = sub1(v_100);
    env = stack[-8];
    v_100 = Lgetv(nil, stack[0], v_100);
    env = stack[-8];
    stack[-5] = v_100;
    stack[-3] = stack[-7];
    v_100 = stack[-5];
    stack[-2] = sub1(v_100);
    env = stack[-8];
    stack[-1] = stack[-4];
    stack[0] = stack[-7];
    v_100 = stack[-5];
    v_100 = sub1(v_100);
    env = stack[-8];
    v_100 = Lgetv(nil, stack[0], v_100);
    env = stack[-8];
    v_100 = cons(stack[-1], v_100);
    env = stack[-8];
    v_100 = Lputv(nil, stack[-3], stack[-2], v_100);
    env = stack[-8];
    v_100 = stack[-4];
    v_100 = sub1(v_100);
    env = stack[-8];
    stack[-4] = v_100;
    goto v_20;
v_19:
    v_100 = stack[-6];
    if (!car_legal(v_100)) v_100 = carerror(v_100); else
    v_100 = car(v_100);
    stack[-4] = v_100;
v_53:
    v_100 = stack[-4];
    if (v_100 == nil) goto v_59;
    else goto v_60;
v_59:
    v_100 = nil;
    goto v_52;
v_60:
    v_100 = stack[-4];
    if (!car_legal(v_100)) v_100 = carerror(v_100); else
    v_100 = car(v_100);
    stack[0] = stack[-7];
    v_100 = sub1(v_100);
    env = stack[-8];
    v_100 = Lgetv(nil, stack[0], v_100);
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 2); // copy
    v_100 = (*qfn1(fn))(fn, v_100);
    }
    env = stack[-8];
    stack[-3] = v_100;
    v_100 = stack[-3];
    {   LispObject fn = basic_elt(env, 3); // lastpair
    v_100 = (*qfn1(fn))(fn, v_100);
    }
    env = stack[-8];
    stack[-2] = v_100;
    v_100 = stack[-4];
    if (!car_legal(v_100)) v_100 = cdrerror(v_100); else
    v_100 = cdr(v_100);
    stack[-4] = v_100;
    v_100 = stack[-2];
    if (!consp(v_100)) goto v_77;
    else goto v_78;
v_77:
    goto v_53;
v_78:
v_54:
    v_100 = stack[-4];
    if (v_100 == nil) goto v_82;
    else goto v_83;
v_82:
    v_100 = stack[-3];
    goto v_52;
v_83:
    stack[-1] = stack[-2];
    v_100 = stack[-4];
    if (!car_legal(v_100)) v_100 = carerror(v_100); else
    v_100 = car(v_100);
    stack[0] = stack[-7];
    v_100 = sub1(v_100);
    env = stack[-8];
    v_100 = Lgetv(nil, stack[0], v_100);
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 2); // copy
    v_100 = (*qfn1(fn))(fn, v_100);
    }
    env = stack[-8];
    if (!car_legal(stack[-1])) rplacd_fails(stack[-1]);
    setcdr(stack[-1], v_100);
    v_100 = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // lastpair
    v_100 = (*qfn1(fn))(fn, v_100);
    }
    env = stack[-8];
    stack[-2] = v_100;
    v_100 = stack[-4];
    if (!car_legal(v_100)) v_100 = cdrerror(v_100); else
    v_100 = cdr(v_100);
    stack[-4] = v_100;
    goto v_54;
v_52:
    return onevalue(v_100);
}



// Code for baglistp

static LispObject CC_baglistp(LispObject env,
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
    v_28 = v_2;
// end of prologue
    v_26 = v_28;
    if (!consp(v_26)) goto v_7;
    v_26 = v_28;
    if (!car_legal(v_26)) v_27 = carerror(v_26); else
    v_27 = car(v_26);
    v_26 = basic_elt(env, 1); // list
    if (v_27 == v_26) goto v_11;
    else goto v_12;
v_11:
    v_26 = lisp_true;
    goto v_10;
v_12:
    v_26 = v_28;
    if (!car_legal(v_26)) v_26 = carerror(v_26); else
    v_26 = car(v_26);
    v_27 = basic_elt(env, 2); // bag
        return Lflagp(nil, v_26, v_27);
    v_26 = nil;
v_10:
    goto v_5;
v_7:
    v_26 = nil;
    goto v_5;
    v_26 = nil;
v_5:
    return onevalue(v_26);
}



// Code for random!-small!-prime

static LispObject CC_randomKsmallKprime(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil);
    stack_popper stack_popper_var(2);
// end of prologue
v_8:
    {   LispObject fn = basic_elt(env, 1); // small!-random!-number
    v_25 = (*qfn0(fn))(fn);
    }
    env = stack[-1];
    stack[0] = v_25;
    v_25 = stack[0];
    v_25 = Levenp(nil, v_25);
    env = stack[-1];
    if (v_25 == nil) goto v_13;
    v_25 = stack[0];
    v_25 = static_cast<LispObject>(static_cast<std::intptr_t>(v_25) + 0x10);
    stack[0] = v_25;
    goto v_11;
v_13:
v_11:
    v_25 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // primep
    v_25 = (*qfn1(fn))(fn, v_25);
    }
    env = stack[-1];
    if (v_25 == nil) goto v_20;
    else goto v_21;
v_20:
    goto v_8;
v_21:
    v_25 = stack[0];
    return onevalue(v_25);
}



// Code for acell_getsp

static LispObject CC_acell_getsp(LispObject env,
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
    v_7 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    {
        LispObject fn = basic_elt(env, 1); // nth
        return (*qfn2(fn))(fn, v_8, v_7);
    }
}



// Code for ofsf_smmkatl!-and

static LispObject CC_ofsf_smmkatlKand(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    stack[-3] = v_4;
    v_105 = v_3;
    stack[-4] = v_2;
// end of prologue
    v_106 = qvalue(basic_elt(env, 1)); // !*rlsipw
    if (v_106 == nil) goto v_15;
    else goto v_16;
v_15:
    v_106 = qvalue(basic_elt(env, 2)); // !*rlsipo
    goto v_14;
v_16:
    v_106 = nil;
    goto v_14;
    v_106 = nil;
v_14:
    if (v_106 == nil) goto v_12;
    v_107 = basic_elt(env, 3); // and
    v_106 = v_105;
    v_105 = stack[-3];
    {
        LispObject fn = basic_elt(env, 4); // ofsf_irl2atl
        return (*qfn3(fn))(fn, v_107, v_106, v_105);
    }
v_12:
    stack[-5] = v_105;
v_31:
    v_105 = stack[-5];
    if (v_105 == nil) goto v_36;
    else goto v_37;
v_36:
    v_105 = nil;
    goto v_30;
v_37:
    v_105 = stack[-5];
    if (!car_legal(v_105)) v_105 = carerror(v_105); else
    v_105 = car(v_105);
    v_106 = v_105;
    if (!car_legal(v_106)) v_107 = carerror(v_106); else
    v_107 = car(v_106);
    v_106 = stack[-4];
    v_106 = Latsoc(nil, v_107, v_106);
    v_107 = v_106;
    v_106 = v_107;
    if (v_106 == nil) goto v_49;
    else goto v_50;
v_49:
    v_106 = basic_elt(env, 3); // and
    v_107 = v_105;
    v_105 = stack[-3];
    {   LispObject fn = basic_elt(env, 5); // ofsf_ir2atl
    v_105 = (*qfn3(fn))(fn, v_106, v_107, v_105);
    }
    env = stack[-6];
    goto v_48;
v_50:
    v_106 = v_105;
    v_105 = stack[-3];
    {   LispObject fn = basic_elt(env, 6); // ofsf_smmkatl!-and1
    v_105 = (*qfn3(fn))(fn, v_107, v_106, v_105);
    }
    env = stack[-6];
    goto v_48;
    v_105 = nil;
v_48:
    stack[-2] = v_105;
    v_105 = stack[-2];
    {   LispObject fn = basic_elt(env, 7); // lastpair
    v_105 = (*qfn1(fn))(fn, v_105);
    }
    env = stack[-6];
    stack[-1] = v_105;
    v_105 = stack[-5];
    if (!car_legal(v_105)) v_105 = cdrerror(v_105); else
    v_105 = cdr(v_105);
    stack[-5] = v_105;
    v_105 = stack[-1];
    if (!consp(v_105)) goto v_68;
    else goto v_69;
v_68:
    goto v_31;
v_69:
v_32:
    v_105 = stack[-5];
    if (v_105 == nil) goto v_73;
    else goto v_74;
v_73:
    v_105 = stack[-2];
    goto v_30;
v_74:
    stack[0] = stack[-1];
    v_105 = stack[-5];
    if (!car_legal(v_105)) v_105 = carerror(v_105); else
    v_105 = car(v_105);
    v_106 = v_105;
    if (!car_legal(v_106)) v_107 = carerror(v_106); else
    v_107 = car(v_106);
    v_106 = stack[-4];
    v_106 = Latsoc(nil, v_107, v_106);
    v_107 = v_106;
    v_106 = v_107;
    if (v_106 == nil) goto v_87;
    else goto v_88;
v_87:
    v_107 = basic_elt(env, 3); // and
    v_106 = v_105;
    v_105 = stack[-3];
    {   LispObject fn = basic_elt(env, 5); // ofsf_ir2atl
    v_105 = (*qfn3(fn))(fn, v_107, v_106, v_105);
    }
    env = stack[-6];
    goto v_86;
v_88:
    v_106 = v_105;
    v_105 = stack[-3];
    {   LispObject fn = basic_elt(env, 6); // ofsf_smmkatl!-and1
    v_105 = (*qfn3(fn))(fn, v_107, v_106, v_105);
    }
    env = stack[-6];
    goto v_86;
    v_105 = nil;
v_86:
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_105);
    v_105 = stack[-1];
    {   LispObject fn = basic_elt(env, 7); // lastpair
    v_105 = (*qfn1(fn))(fn, v_105);
    }
    env = stack[-6];
    stack[-1] = v_105;
    v_105 = stack[-5];
    if (!car_legal(v_105)) v_105 = cdrerror(v_105); else
    v_105 = cdr(v_105);
    stack[-5] = v_105;
    goto v_32;
v_30:
    return onevalue(v_105);
}



// Code for impartsq

static LispObject CC_impartsq(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_41, v_42, v_43, v_44;
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
    v_41 = stack[0];
    if (!car_legal(v_41)) v_41 = carerror(v_41); else
    v_41 = car(v_41);
    {   LispObject fn = basic_elt(env, 1); // splitcomplex
    stack[-1] = (*qfn1(fn))(fn, v_41);
    }
    env = stack[-4];
    v_41 = stack[0];
    if (!car_legal(v_41)) v_41 = cdrerror(v_41); else
    v_41 = cdr(v_41);
    {   LispObject fn = basic_elt(env, 1); // splitcomplex
    v_41 = (*qfn1(fn))(fn, v_41);
    }
    env = stack[-4];
    v_42 = stack[-1];
    v_43 = v_42;
    if (!car_legal(v_43)) v_44 = carerror(v_43); else
    v_44 = car(v_43);
    if (!car_legal(v_42)) v_43 = cdrerror(v_42); else
    v_43 = cdr(v_42);
    v_42 = v_41;
    if (!car_legal(v_42)) v_42 = carerror(v_42); else
    v_42 = car(v_42);
    if (!car_legal(v_41)) v_41 = cdrerror(v_41); else
    v_41 = cdr(v_41);
    stack[-3] = v_44;
    stack[-2] = v_42;
    stack[-1] = v_41;
    v_42 = v_43;
    v_41 = stack[-2];
    {   LispObject fn = basic_elt(env, 2); // multsq
    stack[0] = (*qfn2(fn))(fn, v_42, v_41);
    }
    env = stack[-4];
    v_42 = stack[-3];
    v_41 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // multsq
    v_41 = (*qfn2(fn))(fn, v_42, v_41);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 3); // negsq
    v_41 = (*qfn1(fn))(fn, v_41);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 4); // addsq
    stack[0] = (*qfn2(fn))(fn, stack[0], v_41);
    }
    env = stack[-4];
    v_42 = stack[-2];
    v_41 = stack[-2];
    {   LispObject fn = basic_elt(env, 2); // multsq
    stack[-2] = (*qfn2(fn))(fn, v_42, v_41);
    }
    env = stack[-4];
    v_42 = stack[-1];
    v_41 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // multsq
    v_41 = (*qfn2(fn))(fn, v_42, v_41);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 4); // addsq
    v_41 = (*qfn2(fn))(fn, stack[-2], v_41);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 5); // invsq
    v_41 = (*qfn1(fn))(fn, v_41);
    }
    env = stack[-4];
    {
        LispObject v_49 = stack[0];
        LispObject fn = basic_elt(env, 2); // multsq
        return (*qfn2(fn))(fn, v_49, v_41);
    }
}



// Code for qqe_length!-graph!-neighbor!-edge

static LispObject CC_qqe_lengthKgraphKneighborKedge(LispObject env,
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
    if (!car_legal(v_8)) v_8 = cdrerror(v_8); else
    v_8 = cdr(v_8);
    if (!car_legal(v_8)) v_8 = cdrerror(v_8); else
    v_8 = cdr(v_8);
    if (!car_legal(v_8)) v_8 = carerror(v_8); else
    v_8 = car(v_8);
    return onevalue(v_8);
}



// Code for ev_divides!?

static LispObject CC_ev_dividesW(LispObject env,
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
        LispObject fn = basic_elt(env, 1); // ev_mtest!?
        return (*qfn2(fn))(fn, v_9, v_8);
    }
}



// Code for addexptsdf

static LispObject CC_addexptsdf(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_47 = stack[-1];
    if (v_47 == nil) goto v_11;
    else goto v_12;
v_11:
    v_47 = stack[0];
    if (v_47 == nil) goto v_16;
    else goto v_17;
v_16:
    v_47 = stack[-2];
    {
        LispObject fn = basic_elt(env, 3); // nreverse
        return (*qfn1(fn))(fn, v_47);
    }
v_17:
    stack[0] = stack[-2];
    v_47 = basic_elt(env, 1); // "X too long"
    {   LispObject fn = basic_elt(env, 4); // interr
    v_47 = (*qfn1(fn))(fn, v_47);
    }
    env = stack[-3];
    {
        LispObject v_52 = stack[0];
        LispObject fn = basic_elt(env, 3); // nreverse
        return (*qfn2(fn))(fn, v_52, v_47);
    }
    goto v_10;
v_12:
    v_47 = stack[0];
    if (v_47 == nil) goto v_27;
    else goto v_28;
v_27:
    stack[0] = stack[-2];
    v_47 = basic_elt(env, 2); // "Y too long"
    {   LispObject fn = basic_elt(env, 4); // interr
    v_47 = (*qfn1(fn))(fn, v_47);
    }
    env = stack[-3];
    {
        LispObject v_53 = stack[0];
        LispObject fn = basic_elt(env, 3); // nreverse
        return (*qfn2(fn))(fn, v_53, v_47);
    }
v_28:
    v_47 = stack[-1];
    if (!car_legal(v_47)) v_48 = carerror(v_47); else
    v_48 = car(v_47);
    v_47 = stack[0];
    if (!car_legal(v_47)) v_47 = carerror(v_47); else
    v_47 = car(v_47);
    {   LispObject fn = basic_elt(env, 5); // exptplus
    v_48 = (*qfn2(fn))(fn, v_48, v_47);
    }
    env = stack[-3];
    v_47 = stack[-2];
    v_47 = cons(v_48, v_47);
    env = stack[-3];
    stack[-2] = v_47;
    v_47 = stack[-1];
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    stack[-1] = v_47;
    v_47 = stack[0];
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    stack[0] = v_47;
    goto v_8;
v_10:
    v_47 = nil;
    return onevalue(v_47);
}



// Code for mkunarywedge

static LispObject CC_mkunarywedge(LispObject env,
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
    v_30 = ncons(v_28);
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



// Code for newvar

static LispObject CC_newvar(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_20 = stack[0];
    if (symbolp(v_20)) goto v_7;
    v_21 = stack[0];
    v_20 = basic_elt(env, 1); // "free variable"
    {
        LispObject fn = basic_elt(env, 3); // typerr
        return (*qfn2(fn))(fn, v_21, v_20);
    }
v_7:
    v_20 = basic_elt(env, 2); // !=
    {   LispObject fn = basic_elt(env, 4); // id2bytelist
    stack[-1] = (*qfn1(fn))(fn, v_20);
    }
    env = stack[-2];
    v_20 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // id2bytelist
    v_20 = (*qfn1(fn))(fn, v_20);
    }
    env = stack[-2];
    v_20 = Lappend_2(nil, stack[-1], v_20);
    env = stack[-2];
    {
        LispObject fn = basic_elt(env, 5); // bytelist2id
        return (*qfn1(fn))(fn, v_20);
    }
    v_20 = nil;
    return onevalue(v_20);
}



// Code for endofstmtp

static LispObject CC_endofstmtp(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_11, v_12;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// end of prologue
    v_11 = qvalue(basic_elt(env, 1)); // cursym!*
    v_12 = basic_elt(env, 2); // (!*semicol!* !*rsqbkt!* end)
    v_11 = Lmember(nil, v_11, v_12);
    if (v_11 == nil) goto v_6;
    v_11 = lisp_true;
    goto v_4;
v_6:
    v_11 = nil;
v_4:
    return onevalue(v_11);
}



// Code for get!-all!-kernels

static LispObject CC_getKallKkernels(LispObject env,
                         LispObject v_2)
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
v_8:
    v_44 = stack[-2];
    if (!consp(v_44)) goto v_13;
    else goto v_14;
v_13:
    goto v_9;
v_14:
    v_44 = stack[-2];
    if (!car_legal(v_44)) v_44 = carerror(v_44); else
    v_44 = car(v_44);
    {   LispObject fn = basic_elt(env, 1); // simp
    v_44 = (*qfn1(fn))(fn, v_44);
    }
    env = stack[-4];
    stack[-1] = v_44;
    v_44 = stack[-1];
    if (!car_legal(v_44)) v_44 = carerror(v_44); else
    v_44 = car(v_44);
    {   LispObject fn = basic_elt(env, 2); // kernels
    stack[0] = (*qfn1(fn))(fn, v_44);
    }
    env = stack[-4];
    v_44 = stack[-1];
    if (!car_legal(v_44)) v_44 = cdrerror(v_44); else
    v_44 = cdr(v_44);
    {   LispObject fn = basic_elt(env, 2); // kernels
    v_44 = (*qfn1(fn))(fn, v_44);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 3); // union
    v_45 = (*qfn2(fn))(fn, stack[0], v_44);
    }
    env = stack[-4];
    v_44 = stack[-3];
    v_44 = cons(v_45, v_44);
    env = stack[-4];
    stack[-3] = v_44;
    v_44 = stack[-2];
    if (!car_legal(v_44)) v_44 = cdrerror(v_44); else
    v_44 = cdr(v_44);
    stack[-2] = v_44;
    goto v_8;
v_9:
    v_44 = nil;
    v_45 = v_44;
v_10:
    v_44 = stack[-3];
    if (v_44 == nil) goto v_34;
    else goto v_35;
v_34:
    v_44 = v_45;
    goto v_7;
v_35:
    v_44 = stack[-3];
    v_44 = car(v_44);
    {   LispObject fn = basic_elt(env, 3); // union
    v_44 = (*qfn2(fn))(fn, v_44, v_45);
    }
    env = stack[-4];
    v_45 = v_44;
    v_44 = stack[-3];
    v_44 = cdr(v_44);
    stack[-3] = v_44;
    goto v_10;
v_7:
    return onevalue(v_44);
}



// Code for evaluate!-in!-vector

static LispObject CC_evaluateKinKvector(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    stack[0] = v_3;
    stack[-3] = v_2;
// end of prologue
    v_36 = stack[-3];
    v_35 = stack[0];
    v_35 = Lgetv(nil, v_36, v_35);
    env = stack[-5];
    stack[-4] = v_35;
    v_35 = stack[0];
    v_35 = static_cast<LispObject>(static_cast<std::intptr_t>(v_35) - 0x10);
    stack[-1] = v_35;
v_15:
    v_35 = stack[-1];
    v_35 = (static_cast<std::intptr_t>(v_35) < 0 ? lisp_true : nil);
    if (v_35 == nil) goto v_21;
    goto v_14;
v_21:
    v_36 = stack[-3];
    v_35 = stack[-1];
    stack[0] = Lgetv(nil, v_36, v_35);
    env = stack[-5];
    v_36 = stack[-4];
    v_35 = stack[-2];
    v_35 = Lmodular_times(nil, v_36, v_35);
    env = stack[-5];
    {   std::intptr_t w = int_of_fixnum(stack[0]) + int_of_fixnum(v_35);
        if (w >= current_modulus) w -= current_modulus;
        v_35 = fixnum_of_int(w);
    }
    stack[-4] = v_35;
    v_35 = stack[-1];
    v_35 = static_cast<LispObject>(static_cast<std::intptr_t>(v_35) - 0x10);
    stack[-1] = v_35;
    goto v_15;
v_14:
    v_35 = stack[-4];
    return onevalue(v_35);
}



// Code for atree_rootcell

static LispObject CC_atree_rootcell(LispObject env,
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
    v_7 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    {
        LispObject fn = basic_elt(env, 1); // nth
        return (*qfn2(fn))(fn, v_8, v_7);
    }
}



// Code for ofsf_anegrel

static LispObject CC_ofsf_anegrel(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_15, v_16, v_17;
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
    v_16 = v_17;
    v_15 = basic_elt(env, 1); // ((equal . equal) (neq . neq) (leq . geq) (geq . leq) (lessp . greaterp) (greaterp . lessp))
    v_15 = Latsoc(nil, v_16, v_15);
    if (!car_legal(v_15)) v_15 = cdrerror(v_15); else
    v_15 = cdr(v_15);
    if (v_15 == nil) goto v_6;
    else goto v_5;
v_6:
    v_15 = basic_elt(env, 2); // "ofsf_anegrel: unknown operator "
    v_16 = v_17;
    v_15 = list2(v_15, v_16);
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 3); // rederr
        return (*qfn1(fn))(fn, v_15);
    }
v_5:
    return onevalue(v_15);
}



// Code for mktag

static LispObject CC_mktag(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    stack[-1] = v_4;
    stack[-2] = v_3;
    v_58 = v_2;
// end of prologue
    v_59 = v_58;
    if (v_59 == nil) goto v_8;
    else goto v_9;
v_8:
    v_58 = nil;
    goto v_7;
v_9:
    v_59 = v_58;
    if (!consp(v_59)) goto v_12;
    else goto v_13;
v_12:
    {
        LispObject fn = basic_elt(env, 4); // texexplode
        return (*qfn1(fn))(fn, v_58);
    }
v_13:
    v_59 = v_58;
    if (!car_legal(v_59)) v_60 = carerror(v_59); else
    v_60 = car(v_59);
    v_59 = basic_elt(env, 1); // texprec
    v_59 = get(v_60, v_59);
    env = stack[-4];
    if (v_59 == nil) goto v_25;
    else goto v_24;
v_25:
    v_59 = static_cast<LispObject>(15984)+TAG_FIXNUM; // 999
v_24:
    stack[-3] = v_59;
    v_59 = v_58;
    if (!car_legal(v_59)) v_60 = carerror(v_59); else
    v_60 = car(v_59);
    if (!car_legal(v_58)) v_59 = cdrerror(v_58); else
    v_59 = cdr(v_58);
    v_58 = stack[-3];
    {   LispObject fn = basic_elt(env, 5); // makefunc
    v_58 = (*qfn3(fn))(fn, v_60, v_59, v_58);
    }
    env = stack[-4];
    stack[0] = v_58;
    v_58 = stack[-1];
    if (v_58 == nil) goto v_41;
    v_59 = stack[-2];
    v_58 = stack[-3];
    if (equal(v_59, v_58)) goto v_44;
    else goto v_41;
v_44:
    goto v_39;
v_41:
    v_59 = stack[-3];
    v_58 = stack[-2];
    v_58 = static_cast<LispObject>(lessp2(v_59, v_58));
    v_58 = v_58 ? lisp_true : nil;
    env = stack[-4];
    if (v_58 == nil) goto v_47;
    else goto v_39;
v_47:
    goto v_40;
v_39:
    v_59 = basic_elt(env, 2); // !\!(
    v_58 = stack[0];
    stack[0] = cons(v_59, v_58);
    env = stack[-4];
    v_58 = basic_elt(env, 3); // !\!)
    v_58 = ncons(v_58);
    env = stack[-4];
    v_58 = Lnconc(nil, stack[0], v_58);
    stack[0] = v_58;
    goto v_38;
v_40:
v_38:
    v_58 = stack[0];
    goto v_7;
    v_58 = nil;
v_7:
    return onevalue(v_58);
}



// Code for makecoeffpairs

static LispObject CC_makecoeffpairs(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_15, v_16, v_17, v_18;
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
    v_15 = v_5;
    v_16 = v_4;
    v_17 = v_3;
    v_18 = v_2;
// end of prologue
    stack[-2] = v_18;
    stack[-1] = v_17;
    stack[0] = v_16;
    v_15 = ncons(v_15);
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 1); // makecoeffpairs1
    v_15 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_15);
    }
    if (!car_legal(v_15)) v_15 = cdrerror(v_15); else
    v_15 = cdr(v_15);
        return Lnreverse(nil, v_15);
}



// Code for pasf_leqp

static LispObject CC_pasf_leqp(LispObject env,
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
    v_63 = v_65;
    if (v_63 == nil) goto v_9;
    else goto v_10;
v_9:
    v_63 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_65 = v_63;
    goto v_8;
v_10:
v_8:
    v_63 = v_64;
    if (v_63 == nil) goto v_15;
    else goto v_16;
v_15:
    v_63 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_64 = v_63;
    goto v_14;
v_16:
v_14:
    v_66 = v_65;
    v_63 = basic_elt(env, 1); // minf
    if (v_66 == v_63) goto v_25;
    else goto v_26;
v_25:
    v_63 = lisp_true;
    goto v_24;
v_26:
    v_66 = v_64;
    v_63 = basic_elt(env, 2); // pinf
    if (v_66 == v_63) goto v_34;
    else goto v_35;
v_34:
    v_63 = lisp_true;
    goto v_33;
v_35:
    v_66 = v_65;
    v_63 = basic_elt(env, 2); // pinf
    if (v_66 == v_63) goto v_44;
    v_66 = v_64;
    v_63 = basic_elt(env, 1); // minf
    if (v_66 == v_63) goto v_50;
    v_63 = v_65;
    v_63 = static_cast<LispObject>(lesseq2(v_63, v_64));
    v_63 = v_63 ? lisp_true : nil;
    goto v_48;
v_50:
    v_63 = nil;
    goto v_48;
    v_63 = nil;
v_48:
    goto v_42;
v_44:
    v_63 = nil;
    goto v_42;
    v_63 = nil;
v_42:
    goto v_33;
    v_63 = nil;
v_33:
    goto v_24;
    v_63 = nil;
v_24:
    if (v_63 == nil) goto v_22;
    v_63 = lisp_true;
    goto v_20;
v_22:
    v_63 = nil;
v_20:
    return onevalue(v_63);
}



// Code for ldf!-deg

static LispObject CC_ldfKdeg(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    stack[-3] = v_3;
    v_47 = v_2;
// end of prologue
    stack[-4] = v_47;
    v_47 = stack[-4];
    if (v_47 == nil) goto v_15;
    else goto v_16;
v_15:
    v_47 = nil;
    goto v_10;
v_16:
    v_47 = stack[-4];
    if (!car_legal(v_47)) v_47 = carerror(v_47); else
    v_47 = car(v_47);
    if (!car_legal(v_47)) v_48 = cdrerror(v_47); else
    v_48 = cdr(v_47);
    v_47 = stack[-3];
    {   LispObject fn = basic_elt(env, 1); // degreef
    v_47 = (*qfn2(fn))(fn, v_48, v_47);
    }
    env = stack[-5];
    v_47 = ncons(v_47);
    env = stack[-5];
    stack[-1] = v_47;
    stack[-2] = v_47;
v_11:
    v_47 = stack[-4];
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    stack[-4] = v_47;
    v_47 = stack[-4];
    if (v_47 == nil) goto v_31;
    else goto v_32;
v_31:
    v_47 = stack[-2];
    goto v_10;
v_32:
    stack[0] = stack[-1];
    v_47 = stack[-4];
    if (!car_legal(v_47)) v_47 = carerror(v_47); else
    v_47 = car(v_47);
    if (!car_legal(v_47)) v_48 = cdrerror(v_47); else
    v_48 = cdr(v_47);
    v_47 = stack[-3];
    {   LispObject fn = basic_elt(env, 1); // degreef
    v_47 = (*qfn2(fn))(fn, v_48, v_47);
    }
    env = stack[-5];
    v_47 = ncons(v_47);
    env = stack[-5];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_47);
    v_47 = stack[-1];
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    stack[-1] = v_47;
    goto v_11;
v_10:
    {
        LispObject fn = basic_elt(env, 2); // maxl
        return (*qfn1(fn))(fn, v_47);
    }
}



// Code for !*ff2a

static LispObject CC_Hff2a(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_21 = cons(v_22, v_21);
    env = stack[0];
    {   LispObject fn = basic_elt(env, 2); // cancel
    v_21 = (*qfn1(fn))(fn, v_21);
    }
    env = stack[0];
    v_22 = v_21;
    v_21 = qvalue(basic_elt(env, 1)); // wtl!*
    if (v_21 == nil) goto v_13;
    v_21 = v_22;
    {
        LispObject fn = basic_elt(env, 3); // prepsq
        return (*qfn1(fn))(fn, v_21);
    }
v_13:
    v_21 = v_22;
    {
        LispObject fn = basic_elt(env, 4); // mk!*sq
        return (*qfn1(fn))(fn, v_21);
    }
    v_21 = nil;
    return onevalue(v_21);
}



// Code for groebcplistsort

static LispObject CC_groebcplistsort(LispObject env,
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
    v_26 = v_2;
// end of prologue
    v_27 = nil;
    stack[0] = v_26;
v_9:
    v_26 = stack[0];
    if (v_26 == nil) goto v_13;
    else goto v_14;
v_13:
    goto v_8;
v_14:
    v_26 = stack[0];
    if (!car_legal(v_26)) v_26 = carerror(v_26); else
    v_26 = car(v_26);
    {   LispObject fn = basic_elt(env, 1); // groebcplistsortin
    v_26 = (*qfn2(fn))(fn, v_26, v_27);
    }
    env = stack[-1];
    v_27 = v_26;
    v_26 = stack[0];
    if (!car_legal(v_26)) v_26 = cdrerror(v_26); else
    v_26 = cdr(v_26);
    stack[0] = v_26;
    goto v_9;
v_8:
    v_26 = v_27;
    return onevalue(v_26);
}



// Code for groebreduceonestepint

static LispObject CC_groebreduceonestepint(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_119, v_120;
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
    stack_popper stack_popper_var(11);
// copy arguments values to proper place
    stack[-6] = v_6;
    stack[-1] = v_5;
    stack[0] = v_4;
    stack[-7] = v_3;
    stack[-8] = v_2;
// end of prologue
    v_119 = stack[-6];
    {   LispObject fn = basic_elt(env, 6); // vdpred
    v_119 = (*qfn1(fn))(fn, v_119);
    }
    env = stack[-10];
    stack[-3] = v_119;
    v_120 = v_119;
    v_119 = v_120;
    if (v_119 == nil) goto v_25;
    else goto v_26;
v_25:
    v_119 = lisp_true;
    goto v_24;
v_26:
    v_119 = v_120;
    if (!car_legal(v_119)) v_119 = cdrerror(v_119); else
    v_119 = cdr(v_119);
    if (!car_legal(v_119)) v_119 = cdrerror(v_119); else
    v_119 = cdr(v_119);
    if (!car_legal(v_119)) v_119 = cdrerror(v_119); else
    v_119 = cdr(v_119);
    if (!car_legal(v_119)) v_119 = carerror(v_119); else
    v_119 = car(v_119);
    v_119 = (v_119 == nil ? lisp_true : nil);
    goto v_24;
    v_119 = nil;
v_24:
    if (v_119 == nil) goto v_19;
    v_119 = stack[-8];
    {   LispObject fn = basic_elt(env, 6); // vdpred
    v_119 = (*qfn1(fn))(fn, v_119);
    }
    env = stack[-10];
    stack[-8] = v_119;
    v_119 = stack[-7];
    setvalue(basic_elt(env, 1), v_119); // secondvalue!*
    v_119 = stack[-8];
    goto v_15;
v_19:
    v_120 = stack[-1];
    v_119 = stack[-6];
    if (!car_legal(v_119)) v_119 = cdrerror(v_119); else
    v_119 = cdr(v_119);
    if (!car_legal(v_119)) v_119 = carerror(v_119); else
    v_119 = car(v_119);
    {   LispObject fn = basic_elt(env, 7); // vevdif
    v_119 = (*qfn2(fn))(fn, v_120, v_119);
    }
    env = stack[-10];
    stack[-9] = v_119;
    v_119 = stack[-6];
    if (!car_legal(v_119)) v_119 = cdrerror(v_119); else
    v_119 = cdr(v_119);
    if (!car_legal(v_119)) v_119 = cdrerror(v_119); else
    v_119 = cdr(v_119);
    if (!car_legal(v_119)) v_119 = carerror(v_119); else
    v_119 = car(v_119);
    stack[-2] = v_119;
    v_119 = qvalue(basic_elt(env, 2)); // !*groebdivide
    if (v_119 == nil) goto v_52;
    else goto v_53;
v_52:
    v_119 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 8); // vbcfi
    v_119 = (*qfn1(fn))(fn, v_119);
    }
    env = stack[-10];
    goto v_51;
v_53:
    v_120 = stack[0];
    v_119 = stack[-2];
    {   LispObject fn = basic_elt(env, 9); // vbcgcd
    v_119 = (*qfn2(fn))(fn, v_120, v_119);
    }
    env = stack[-10];
    goto v_51;
    v_119 = nil;
v_51:
    stack[-1] = v_119;
    v_120 = stack[-2];
    v_119 = stack[-1];
    {   LispObject fn = basic_elt(env, 10); // vbcquot
    v_119 = (*qfn2(fn))(fn, v_120, v_119);
    }
    env = stack[-10];
    stack[-5] = v_119;
    v_120 = stack[0];
    v_119 = stack[-1];
    {   LispObject fn = basic_elt(env, 10); // vbcquot
    v_119 = (*qfn2(fn))(fn, v_120, v_119);
    }
    env = stack[-10];
    stack[-4] = v_119;
    v_119 = stack[-7];
    if (v_119 == nil) goto v_71;
    v_119 = stack[-7];
    if (v_119 == nil) goto v_77;
    else goto v_78;
v_77:
    v_119 = lisp_true;
    goto v_76;
v_78:
    v_119 = stack[-7];
    if (!car_legal(v_119)) v_119 = cdrerror(v_119); else
    v_119 = cdr(v_119);
    if (!car_legal(v_119)) v_119 = cdrerror(v_119); else
    v_119 = cdr(v_119);
    if (!car_legal(v_119)) v_119 = cdrerror(v_119); else
    v_119 = cdr(v_119);
    if (!car_legal(v_119)) v_119 = carerror(v_119); else
    v_119 = car(v_119);
    v_119 = (v_119 == nil ? lisp_true : nil);
    goto v_76;
    v_119 = nil;
v_76:
    if (v_119 == nil) goto v_74;
    else goto v_71;
v_74:
    v_120 = stack[-7];
    v_119 = stack[-5];
    {   LispObject fn = basic_elt(env, 11); // vdpvbcprod
    v_119 = (*qfn2(fn))(fn, v_120, v_119);
    }
    env = stack[-10];
    stack[-7] = v_119;
    goto v_69;
v_71:
v_69:
    v_119 = qvalue(basic_elt(env, 3)); // !*groebprot
    if (v_119 == nil) goto v_95;
    stack[-2] = stack[-5];
    v_119 = stack[-4];
    {   LispObject fn = basic_elt(env, 12); // vbcneg
    stack[-1] = (*qfn1(fn))(fn, v_119);
    }
    env = stack[-10];
    stack[0] = stack[-9];
    v_119 = stack[-6];
    v_119 = ncons(v_119);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 13); // groebreductionprotocol
    v_119 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_119);
    }
    env = stack[-10];
    goto v_93;
v_95:
v_93:
    v_119 = stack[-8];
    {   LispObject fn = basic_elt(env, 6); // vdpred
    stack[-2] = (*qfn1(fn))(fn, v_119);
    }
    env = stack[-10];
    stack[-1] = stack[-5];
    v_120 = qvalue(basic_elt(env, 4)); // vdpvars!*
    v_119 = nil;
    {   LispObject fn = basic_elt(env, 14); // vevmaptozero1
    stack[0] = (*qfn2(fn))(fn, v_120, v_119);
    }
    env = stack[-10];
    v_119 = stack[-4];
    {   LispObject fn = basic_elt(env, 12); // vbcneg
    v_120 = (*qfn1(fn))(fn, v_119);
    }
    env = stack[-10];
    v_119 = stack[-9];
    v_119 = list3(stack[-3], v_120, v_119);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 15); // vdpilcomb1
    v_119 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_119);
    }
    env = stack[-10];
    stack[-8] = v_119;
    v_119 = stack[-7];
    setvalue(basic_elt(env, 1), v_119); // secondvalue!*
    v_119 = stack[-5];
    setvalue(basic_elt(env, 5), v_119); // thirdvalue!*
    v_119 = stack[-8];
v_15:
    return onevalue(v_119);
}



// Code for mk!-contract!-coeff

static LispObject CC_mkKcontractKcoeff(LispObject env,
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_41 = stack[0];
    if (!car_legal(v_41)) v_41 = carerror(v_41); else
    v_41 = car(v_41);
    if (!car_legal(v_41)) v_42 = carerror(v_41); else
    v_42 = car(v_41);
    v_41 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_42 == v_41) goto v_6;
    else goto v_7;
v_6:
    v_41 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_5;
v_7:
    v_41 = stack[0];
    if (!car_legal(v_41)) v_41 = carerror(v_41); else
    v_41 = car(v_41);
    if (!car_legal(v_41)) v_41 = carerror(v_41); else
    v_41 = car(v_41);
    stack[-3] = v_41;
    v_41 = stack[0];
    if (!car_legal(v_41)) v_41 = cdrerror(v_41); else
    v_41 = cdr(v_41);
    if (!car_legal(v_41)) v_41 = carerror(v_41); else
    v_41 = car(v_41);
    v_41 = Llength(nil, v_41);
    env = stack[-4];
    v_42 = v_41;
    v_41 = stack[0];
    if (!car_legal(v_41)) v_41 = carerror(v_41); else
    v_41 = car(v_41);
    if (!car_legal(v_41)) v_41 = cdrerror(v_41); else
    v_41 = cdr(v_41);
    if (!car_legal(v_41)) stack[-2] = carerror(v_41); else
    stack[-2] = car(v_41);
    stack[-1] = qvalue(basic_elt(env, 1)); // ndim!*
    stack[0] = v_42;
    v_41 = stack[-3];
    v_41 = plus2(v_42, v_41);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 2); // mk!-numr
    v_41 = (*qfn3(fn))(fn, stack[-1], stack[0], v_41);
    }
    env = stack[-4];
    v_41 = cons(stack[-2], v_41);
    env = stack[-4];
    {
        LispObject fn = basic_elt(env, 3); // constimes
        return (*qfn1(fn))(fn, v_41);
    }
    goto v_5;
    v_41 = nil;
v_5:
    return onevalue(v_41);
}



// Code for isimp2

static LispObject CC_isimp2(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_99, v_100, v_101;
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
    stack[0] = v_6;
    stack[-1] = v_5;
    stack[-2] = v_4;
    stack[-3] = v_3;
    stack[-4] = v_2;
// end of prologue
    v_99 = stack[-4];
    if (!car_legal(v_99)) v_99 = carerror(v_99); else
    v_99 = car(v_99);
    if (!car_legal(v_99)) v_99 = carerror(v_99); else
    v_99 = car(v_99);
    stack[-5] = v_99;
    if (!consp(v_99)) goto v_15;
    else goto v_16;
v_15:
    goto v_11;
v_16:
    v_99 = stack[-5];
    if (!car_legal(v_99)) v_100 = carerror(v_99); else
    v_100 = car(v_99);
    v_99 = basic_elt(env, 1); // cons
    if (v_100 == v_99) goto v_24;
    else goto v_25;
v_24:
    v_99 = stack[-5];
    if (!car_legal(v_99)) v_100 = cdrerror(v_99); else
    v_100 = cdr(v_99);
    v_99 = stack[-3];
    {   LispObject fn = basic_elt(env, 4); // xnp
    v_99 = (*qfn2(fn))(fn, v_100, v_99);
    }
    env = stack[-6];
    goto v_23;
v_25:
    v_99 = nil;
    goto v_23;
    v_99 = nil;
v_23:
    if (v_99 == nil) goto v_21;
    v_100 = stack[-1];
    v_99 = stack[0];
    v_99 = list2(v_100, v_99);
    env = stack[-6];
    {
        LispObject v_108 = stack[-4];
        LispObject v_109 = stack[-3];
        LispObject v_110 = stack[-2];
        LispObject fn = basic_elt(env, 5); // dotsum
        return (*qfn4up(fn))(fn, v_108, v_109, v_110, v_99);
    }
v_21:
    v_99 = stack[-5];
    if (!car_legal(v_99)) v_100 = carerror(v_99); else
    v_100 = car(v_99);
    v_99 = basic_elt(env, 2); // g
    if (v_100 == v_99) goto v_43;
    else goto v_44;
v_43:
    goto v_12;
v_44:
    v_99 = stack[-5];
    if (!car_legal(v_99)) v_100 = carerror(v_99); else
    v_100 = car(v_99);
    v_99 = basic_elt(env, 3); // eps
    if (v_100 == v_99) goto v_48;
    else goto v_49;
v_48:
    v_100 = stack[-1];
    v_99 = stack[0];
    v_99 = list2(v_100, v_99);
    env = stack[-6];
    {
        LispObject v_111 = stack[-4];
        LispObject v_112 = stack[-3];
        LispObject v_113 = stack[-2];
        LispObject fn = basic_elt(env, 6); // esum
        return (*qfn4up(fn))(fn, v_111, v_112, v_113, v_99);
    }
v_49:
v_11:
    v_99 = stack[-4];
    if (!car_legal(v_99)) v_100 = carerror(v_99); else
    v_100 = car(v_99);
    v_99 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_99 = cons(v_100, v_99);
    env = stack[-6];
    stack[-5] = ncons(v_99);
    env = stack[-6];
    v_99 = stack[-4];
    if (!car_legal(v_99)) stack[-4] = cdrerror(v_99); else
    stack[-4] = cdr(v_99);
    v_100 = stack[-1];
    v_99 = stack[0];
    v_99 = list2(v_100, v_99);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 7); // isimp1
    v_99 = (*qfn4up(fn))(fn, stack[-4], stack[-3], stack[-2], v_99);
    }
    env = stack[-6];
    {
        LispObject v_114 = stack[-5];
        LispObject fn = basic_elt(env, 8); // multf
        return (*qfn2(fn))(fn, v_114, v_99);
    }
v_12:
    v_99 = stack[-5];
    if (!car_legal(v_99)) v_99 = cdrerror(v_99); else
    v_99 = cdr(v_99);
    if (!car_legal(v_99)) v_100 = cdrerror(v_99); else
    v_100 = cdr(v_99);
    v_99 = stack[-4];
    if (!car_legal(v_99)) v_99 = carerror(v_99); else
    v_99 = car(v_99);
    if (!car_legal(v_99)) v_99 = cdrerror(v_99); else
    v_99 = cdr(v_99);
    {   LispObject fn = basic_elt(env, 9); // appn
    v_101 = (*qfn2(fn))(fn, v_100, v_99);
    }
    env = stack[-6];
    v_100 = stack[0];
    v_99 = stack[-5];
    if (!car_legal(v_99)) v_99 = cdrerror(v_99); else
    v_99 = cdr(v_99);
    if (!car_legal(v_99)) v_99 = carerror(v_99); else
    v_99 = car(v_99);
    {   LispObject fn = basic_elt(env, 10); // gadd
    v_99 = (*qfn3(fn))(fn, v_101, v_100, v_99);
    }
    env = stack[-6];
    stack[-5] = v_99;
    v_99 = stack[-5];
    if (!car_legal(v_99)) v_99 = carerror(v_99); else
    v_99 = car(v_99);
    {   LispObject fn = basic_elt(env, 11); // nb
    v_100 = (*qfn1(fn))(fn, v_99);
    }
    env = stack[-6];
    v_99 = stack[-4];
    if (!car_legal(v_99)) v_99 = cdrerror(v_99); else
    v_99 = cdr(v_99);
    {   LispObject fn = basic_elt(env, 12); // multd!*
    stack[0] = (*qfn2(fn))(fn, v_100, v_99);
    }
    env = stack[-6];
    v_100 = stack[-1];
    v_99 = stack[-5];
    if (!car_legal(v_99)) v_99 = cdrerror(v_99); else
    v_99 = cdr(v_99);
    v_99 = list2(v_100, v_99);
    env = stack[-6];
    {
        LispObject v_115 = stack[0];
        LispObject v_116 = stack[-3];
        LispObject v_117 = stack[-2];
        LispObject fn = basic_elt(env, 7); // isimp1
        return (*qfn4up(fn))(fn, v_115, v_116, v_117, v_99);
    }
    return onevalue(v_99);
}



// Code for derivative!-mod!-p

static LispObject CC_derivativeKmodKp(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_38, v_39, v_40;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_40 = v_2;
// end of prologue
    v_38 = v_40;
    if (!consp(v_38)) goto v_10;
    else goto v_11;
v_10:
    v_38 = lisp_true;
    goto v_9;
v_11:
    v_38 = v_40;
    if (!car_legal(v_38)) v_38 = carerror(v_38); else
    v_38 = car(v_38);
    v_38 = (consp(v_38) ? nil : lisp_true);
    goto v_9;
    v_38 = nil;
v_9:
    if (v_38 == nil) goto v_7;
    v_38 = nil;
    goto v_5;
v_7:
    v_38 = v_40;
    if (!car_legal(v_38)) v_38 = carerror(v_38); else
    v_38 = car(v_38);
    if (!car_legal(v_38)) v_38 = carerror(v_38); else
    v_38 = car(v_38);
    if (!car_legal(v_38)) v_39 = cdrerror(v_38); else
    v_39 = cdr(v_38);
    v_38 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_39 == v_38) goto v_20;
    else goto v_21;
v_20:
    v_38 = v_40;
    if (!car_legal(v_38)) v_38 = carerror(v_38); else
    v_38 = car(v_38);
    if (!car_legal(v_38)) v_38 = cdrerror(v_38); else
    v_38 = cdr(v_38);
    goto v_5;
v_21:
    v_38 = v_40;
    v_39 = v_40;
    if (!car_legal(v_39)) v_39 = carerror(v_39); else
    v_39 = car(v_39);
    if (!car_legal(v_39)) v_39 = carerror(v_39); else
    v_39 = car(v_39);
    if (!car_legal(v_39)) v_39 = carerror(v_39); else
    v_39 = car(v_39);
    {
        LispObject fn = basic_elt(env, 1); // derivative!-mod!-p!-1
        return (*qfn2(fn))(fn, v_38, v_39);
    }
    v_38 = nil;
v_5:
    return onevalue(v_38);
}



// Code for ofsf_bestgaussp

static LispObject CC_ofsf_bestgaussp(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_67, v_68, v_69;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_69 = v_2;
// end of prologue
    v_67 = v_69;
    if (!car_legal(v_67)) v_68 = carerror(v_67); else
    v_68 = car(v_67);
    v_67 = basic_elt(env, 1); // failed
    if (v_68 == v_67) goto v_7;
    v_67 = v_69;
    if (!car_legal(v_67)) v_68 = carerror(v_67); else
    v_68 = car(v_67);
    v_67 = basic_elt(env, 2); // gignore
    if (v_68 == v_67) goto v_14;
    v_67 = v_69;
    if (!car_legal(v_67)) v_67 = carerror(v_67); else
    v_67 = car(v_67);
    if (!car_legal(v_67)) v_67 = cdrerror(v_67); else
    v_67 = cdr(v_67);
    if (!car_legal(v_67)) v_68 = carerror(v_67); else
    v_68 = car(v_67);
    v_67 = basic_elt(env, 3); // lin
    if (v_68 == v_67) goto v_20;
    else goto v_21;
v_20:
    v_67 = v_69;
    if (!car_legal(v_67)) v_67 = carerror(v_67); else
    v_67 = car(v_67);
    if (!car_legal(v_67)) v_67 = cdrerror(v_67); else
    v_67 = cdr(v_67);
    if (!car_legal(v_67)) v_67 = cdrerror(v_67); else
    v_67 = cdr(v_67);
    if (!car_legal(v_67)) v_67 = carerror(v_67); else
    v_67 = car(v_67);
    v_68 = basic_elt(env, 4); // con
    if (v_67 == v_68) goto v_29;
    else goto v_30;
v_29:
    v_67 = v_69;
    if (!car_legal(v_67)) v_67 = cdrerror(v_67); else
    v_67 = cdr(v_67);
    if (!car_legal(v_67)) v_67 = carerror(v_67); else
    v_67 = car(v_67);
    if (!car_legal(v_67)) v_67 = cdrerror(v_67); else
    v_67 = cdr(v_67);
    if (v_67 == nil) goto v_39;
    else goto v_40;
v_39:
    v_67 = v_69;
    if (!car_legal(v_67)) v_67 = cdrerror(v_67); else
    v_67 = cdr(v_67);
    if (!car_legal(v_67)) v_67 = carerror(v_67); else
    v_67 = car(v_67);
    if (!car_legal(v_67)) v_67 = carerror(v_67); else
    v_67 = car(v_67);
    if (!car_legal(v_67)) v_67 = cdrerror(v_67); else
    v_67 = cdr(v_67);
    if (!car_legal(v_67)) v_67 = cdrerror(v_67); else
    v_67 = cdr(v_67);
    v_67 = (v_67 == nil ? lisp_true : nil);
    goto v_38;
v_40:
    v_67 = nil;
    goto v_38;
    v_67 = nil;
v_38:
    goto v_28;
v_30:
    v_67 = nil;
    goto v_28;
    v_67 = nil;
v_28:
    goto v_19;
v_21:
    v_67 = nil;
    goto v_19;
    v_67 = nil;
v_19:
    goto v_12;
v_14:
    v_67 = nil;
    goto v_12;
    v_67 = nil;
v_12:
    goto v_5;
v_7:
    v_67 = nil;
    goto v_5;
    v_67 = nil;
v_5:
    return onevalue(v_67);
}



// Code for taymindegreel

static LispObject CC_taymindegreel(LispObject env,
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
v_8:
    v_49 = stack[-2];
    if (v_49 == nil) goto v_11;
    else goto v_12;
v_11:
    v_49 = stack[-3];
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn1(fn))(fn, v_49);
    }
v_12:
    v_49 = stack[-2];
    if (!car_legal(v_49)) v_49 = carerror(v_49); else
    v_49 = car(v_49);
    stack[0] = v_49;
    v_49 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_50 = v_49;
v_24:
    v_49 = stack[0];
    if (v_49 == nil) goto v_30;
    else goto v_31;
v_30:
    v_49 = v_50;
    v_50 = v_49;
    goto v_23;
v_31:
    v_49 = stack[0];
    if (!car_legal(v_49)) v_49 = carerror(v_49); else
    v_49 = car(v_49);
    {   LispObject fn = basic_elt(env, 2); // tayexp!-plus2
    v_49 = (*qfn2(fn))(fn, v_49, v_50);
    }
    env = stack[-4];
    v_50 = v_49;
    v_49 = stack[0];
    if (!car_legal(v_49)) v_49 = cdrerror(v_49); else
    v_49 = cdr(v_49);
    stack[0] = v_49;
    goto v_24;
v_23:
    v_49 = stack[-1];
    if (!car_legal(v_49)) v_49 = carerror(v_49); else
    v_49 = car(v_49);
    {   LispObject fn = basic_elt(env, 3); // tayexp!-min2
    v_50 = (*qfn2(fn))(fn, v_50, v_49);
    }
    env = stack[-4];
    v_49 = stack[-3];
    v_49 = cons(v_50, v_49);
    env = stack[-4];
    stack[-3] = v_49;
    v_49 = stack[-2];
    if (!car_legal(v_49)) v_49 = cdrerror(v_49); else
    v_49 = cdr(v_49);
    stack[-2] = v_49;
    v_49 = stack[-1];
    if (!car_legal(v_49)) v_49 = cdrerror(v_49); else
    v_49 = cdr(v_49);
    stack[-1] = v_49;
    goto v_8;
    v_49 = nil;
    return onevalue(v_49);
}



// Code for vdp_fdip

static LispObject CC_vdp_fdip(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_18 = stack[0];
    if (v_18 == nil) goto v_6;
    else goto v_7;
v_6:
    {
        LispObject fn = basic_elt(env, 1); // vdp_zero
        return (*qfn0(fn))(fn);
    }
v_7:
    v_18 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // dip_lbc
    stack[-1] = (*qfn1(fn))(fn, v_18);
    }
    env = stack[-2];
    v_18 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // dip_evlmon
    v_19 = (*qfn1(fn))(fn, v_18);
    }
    env = stack[-2];
    v_18 = stack[0];
    {
        LispObject v_22 = stack[-1];
        LispObject fn = basic_elt(env, 4); // vdp_make
        return (*qfn3(fn))(fn, v_22, v_19, v_18);
    }
    v_18 = nil;
    return onevalue(v_18);
}



// Code for ldf!-sep!-var

static LispObject CC_ldfKsepKvar(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_12 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // ldf!-pow!-var
    stack[-1] = (*qfn1(fn))(fn, v_12);
    }
    env = stack[-2];
    v_12 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // ldf!-dep!-var
    v_12 = (*qfn1(fn))(fn, v_12);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // compl
    stack[-1] = (*qfn2(fn))(fn, stack[-1], v_12);
    }
    env = stack[-2];
    v_12 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // ldf!-spf!-var
    v_12 = (*qfn1(fn))(fn, v_12);
    }
    env = stack[-2];
    {
        LispObject v_15 = stack[-1];
        LispObject fn = basic_elt(env, 3); // compl
        return (*qfn2(fn))(fn, v_15, v_12);
    }
}



// Code for sprow_dim

static LispObject CC_sprow_dim(LispObject env,
                         LispObject v_2)
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
    v_29 = qvalue(basic_elt(env, 1)); // !*fast_la
    if (v_29 == nil) goto v_13;
    else goto v_14;
v_13:
    v_29 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // matrixp
    v_29 = (*qfn1(fn))(fn, v_29);
    }
    env = stack[-1];
    v_29 = (v_29 == nil ? lisp_true : nil);
    goto v_12;
v_14:
    v_29 = nil;
    goto v_12;
    v_29 = nil;
v_12:
    if (v_29 == nil) goto v_10;
    v_29 = basic_elt(env, 2); // "Error in sprow_dim: input should be a matrix."
    {   LispObject fn = basic_elt(env, 4); // rederr
    v_29 = (*qfn1(fn))(fn, v_29);
    }
    env = stack[-1];
    goto v_8;
v_10:
v_8:
    v_29 = stack[0];
    {   LispObject fn = basic_elt(env, 5); // spmatlength
    v_29 = (*qfn1(fn))(fn, v_29);
    }
    if (!car_legal(v_29)) v_29 = cdrerror(v_29); else
    v_29 = cdr(v_29);
    if (!car_legal(v_29)) v_29 = carerror(v_29); else
    v_29 = car(v_29);
    return onevalue(v_29);
}



// Code for dm!-lt

static LispObject CC_dmKlt(LispObject env,
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
        LispObject fn = basic_elt(env, 2); // !:minusp
        return (*qfn1(fn))(fn, v_9);
    }
}



// Code for vdpsimpcont

static LispObject CC_vdpsimpcont(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[-1] = v_2;
// end of prologue
    v_54 = stack[-1];
    if (!car_legal(v_54)) v_54 = cdrerror(v_54); else
    v_54 = cdr(v_54);
    if (!car_legal(v_54)) v_54 = cdrerror(v_54); else
    v_54 = cdr(v_54);
    if (!car_legal(v_54)) v_54 = cdrerror(v_54); else
    v_54 = cdr(v_54);
    if (!car_legal(v_54)) v_54 = carerror(v_54); else
    v_54 = car(v_54);
    stack[0] = v_54;
    v_54 = stack[0];
    if (v_54 == nil) goto v_15;
    else goto v_16;
v_15:
    v_54 = stack[-1];
    goto v_7;
v_16:
    v_54 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // dipsimpcont
    v_54 = (*qfn1(fn))(fn, v_54);
    }
    env = stack[-3];
    stack[-2] = v_54;
    v_54 = stack[-2];
    if (!car_legal(v_54)) v_54 = cdrerror(v_54); else
    v_54 = cdr(v_54);
    {   LispObject fn = basic_elt(env, 3); // dip2vdp
    v_54 = (*qfn1(fn))(fn, v_54);
    }
    env = stack[-3];
    stack[-1] = v_54;
    v_54 = stack[-2];
    if (!car_legal(v_54)) v_54 = carerror(v_54); else
    v_54 = car(v_54);
    stack[-2] = v_54;
    v_54 = stack[-2];
    {   LispObject fn = basic_elt(env, 4); // evzero!?
    v_54 = (*qfn1(fn))(fn, v_54);
    }
    env = stack[-3];
    if (v_54 == nil) goto v_32;
    else goto v_33;
v_32:
    v_54 = stack[0];
    if (!car_legal(v_54)) v_54 = cdrerror(v_54); else
    v_54 = cdr(v_54);
    if (!car_legal(v_54)) v_54 = cdrerror(v_54); else
    v_54 = cdr(v_54);
    if (v_54 == nil) goto v_38;
    else goto v_37;
v_38:
    v_54 = stack[-2];
    {   LispObject fn = basic_elt(env, 5); // evtdeg
    v_55 = (*qfn1(fn))(fn, v_54);
    }
    env = stack[-3];
    v_54 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_54 = static_cast<LispObject>(greaterp2(v_55, v_54));
    v_54 = v_54 ? lisp_true : nil;
    env = stack[-3];
v_37:
    goto v_31;
v_33:
    v_54 = nil;
    goto v_31;
    v_54 = nil;
v_31:
    if (v_54 == nil) goto v_29;
    v_56 = stack[-1];
    v_55 = basic_elt(env, 1); // monfac
    v_54 = stack[-2];
    {   LispObject fn = basic_elt(env, 6); // vdpputprop
    v_54 = (*qfn3(fn))(fn, v_56, v_55, v_54);
    }
    goto v_27;
v_29:
v_27:
    v_54 = stack[-1];
v_7:
    return onevalue(v_54);
}



// Code for force!-to!-dm

static LispObject CC_forceKtoKdm(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_79, v_80, v_81;
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
    v_80 = v_2;
// end of prologue
v_6:
    v_79 = v_80;
    if (!consp(v_79)) goto v_13;
    else goto v_14;
v_13:
    v_79 = lisp_true;
    goto v_12;
v_14:
    v_79 = v_80;
    if (!car_legal(v_79)) v_79 = carerror(v_79); else
    v_79 = car(v_79);
    v_79 = (consp(v_79) ? nil : lisp_true);
    goto v_12;
    v_79 = nil;
v_12:
    if (v_79 == nil) goto v_9;
    else goto v_10;
v_9:
    v_79 = v_80;
    {   LispObject fn = basic_elt(env, 4); // prepf
    v_80 = (*qfn1(fn))(fn, v_79);
    }
    env = stack[-1];
    v_79 = basic_elt(env, 1); // "number"
    {
        LispObject fn = basic_elt(env, 5); // typerr
        return (*qfn2(fn))(fn, v_80, v_79);
    }
v_10:
    v_79 = v_80;
    if (v_79 == nil) goto v_26;
    else goto v_27;
v_26:
    v_79 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_80 = v_79;
    goto v_6;
v_27:
    v_79 = v_80;
    if (is_number(v_79)) goto v_30;
    else goto v_31;
v_30:
    v_79 = qvalue(basic_elt(env, 2)); // dmode!*
    if (!symbolp(v_79)) stack[0] = nil;
    else { stack[0] = qfastgets(v_79);
           if (stack[0] != nil) { stack[0] = elt(stack[0], 34); // i2d
#ifdef RECORD_GET
             if (stack[0] != SPID_NOPROP)
                record_get(elt(fastget_names, 34), 1);
             else record_get(elt(fastget_names, 34), 0),
                stack[0] = nil; }
           else record_get(elt(fastget_names, 34), 0); }
#else
             if (stack[0] == SPID_NOPROP) stack[0] = nil; }}
#endif
    v_79 = v_80;
    v_79 = ncons(v_79);
    env = stack[-1];
    {
        LispObject v_83 = stack[0];
        LispObject fn = basic_elt(env, 6); // apply
        return (*qfn2(fn))(fn, v_83, v_79);
    }
v_31:
    v_79 = v_80;
    v_79 = Lconsp(nil, v_79);
    env = stack[-1];
    if (v_79 == nil) goto v_39;
    v_79 = v_80;
    if (!car_legal(v_79)) v_81 = carerror(v_79); else
    v_81 = car(v_79);
    v_79 = qvalue(basic_elt(env, 2)); // dmode!*
    if (equal(v_81, v_79)) goto v_43;
    else goto v_39;
v_43:
    v_79 = v_80;
    goto v_5;
v_39:
    v_79 = v_80;
    v_79 = Lconsp(nil, v_79);
    env = stack[-1];
    if (v_79 == nil) goto v_52;
    else goto v_53;
v_52:
    v_79 = nil;
    goto v_51;
v_53:
    v_79 = v_80;
    if (!car_legal(v_79)) v_81 = carerror(v_79); else
    v_81 = car(v_79);
    v_79 = qvalue(basic_elt(env, 2)); // dmode!*
    v_79 = get(v_81, v_79);
    env = stack[-1];
    goto v_51;
    v_79 = nil;
v_51:
    v_81 = v_79;
    v_79 = v_81;
    if (v_79 == nil) goto v_67;
    stack[0] = v_81;
    v_79 = v_80;
    v_79 = ncons(v_79);
    env = stack[-1];
    {
        LispObject v_84 = stack[0];
        LispObject fn = basic_elt(env, 6); // apply
        return (*qfn2(fn))(fn, v_84, v_79);
    }
v_67:
    v_79 = basic_elt(env, 3); // "conversion error with "
    v_79 = list2(v_79, v_80);
    env = stack[-1];
    {
        LispObject fn = basic_elt(env, 7); // rederr
        return (*qfn1(fn))(fn, v_79);
    }
    v_79 = nil;
    goto v_5;
    v_79 = nil;
v_5:
    return onevalue(v_79);
}



// Code for is_buble

static LispObject CC_is_buble(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_27 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // diff_vertex
    v_27 = (*qfn2(fn))(fn, v_28, v_27);
    }
    env = stack[-3];
    v_27 = Llength(nil, v_27);
    env = stack[-3];
    stack[-2] = v_27;
    v_28 = stack[-2];
    v_27 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_27 = static_cast<LispObject>(geq2(v_28, v_27));
    v_27 = v_27 ? lisp_true : nil;
    env = stack[-3];
    if (v_27 == nil) goto v_13;
    v_27 = nil;
    goto v_11;
v_13:
    v_28 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_27 = stack[-2];
    stack[-2] = times2(v_28, v_27);
    env = stack[-3];
    v_27 = stack[0];
    v_27 = ncons(v_27);
    {
        LispObject v_32 = stack[-2];
        LispObject v_33 = stack[-1];
        return list2star(v_32, v_33, v_27);
    }
    v_27 = nil;
v_11:
    return onevalue(v_27);
}



// Code for positive!-powp

static LispObject CC_positiveKpowp(LispObject env,
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
    v_19 = v_2;
// end of prologue
    v_18 = v_19;
    if (!car_legal(v_18)) v_18 = carerror(v_18); else
    v_18 = car(v_18);
    if (!consp(v_18)) goto v_7;
    v_18 = v_19;
    if (!car_legal(v_18)) v_18 = carerror(v_18); else
    v_18 = car(v_18);
    if (!car_legal(v_18)) v_18 = carerror(v_18); else
    v_18 = car(v_18);
    v_19 = basic_elt(env, 1); // (abs norm)
    v_18 = Lmemq(nil, v_18, v_19);
    goto v_5;
v_7:
    v_18 = nil;
    goto v_5;
    v_18 = nil;
v_5:
    return onevalue(v_18);
}



// Code for reddom_zeros

static LispObject CC_reddom_zeros(LispObject env,
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
    {   LispObject fn = basic_elt(env, 0); // reddom_zeros
    v_26 = (*qfn1(fn))(fn, v_26);
    }
    return add1(v_26);
v_14:
    v_26 = v_27;
    if (!car_legal(v_26)) v_26 = cdrerror(v_26); else
    v_26 = cdr(v_26);
    v_27 = v_26;
    goto v_6;
    v_26 = nil;
v_5:
    return onevalue(v_26);
}



// Code for red_prepare

static LispObject CC_red_prepare(LispObject env,
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
// space for vars preserved across procedure calls
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[-1] = v_2;
// end of prologue
    v_14 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // bas_nr
    stack[-2] = (*qfn1(fn))(fn, v_14);
    }
    env = stack[-3];
    v_14 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // bas_dpoly
    stack[0] = (*qfn1(fn))(fn, v_14);
    }
    env = stack[-3];
    v_14 = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // bas_rep
    stack[-1] = (*qfn1(fn))(fn, v_14);
    }
    env = stack[-3];
    v_14 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {   LispObject fn = basic_elt(env, 4); // dp_from_ei
    v_14 = (*qfn1(fn))(fn, v_14);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 5); // dp_sum
    v_14 = (*qfn2(fn))(fn, stack[-1], v_14);
    }
    env = stack[-3];
    {
        LispObject v_18 = stack[-2];
        LispObject v_19 = stack[0];
        LispObject fn = basic_elt(env, 6); // bas_make1
        return (*qfn3(fn))(fn, v_18, v_19, v_14);
    }
}



// Code for general!-difference!-mod!-p

static LispObject CC_generalKdifferenceKmodKp(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // general!-minus!-mod!-p
    v_9 = (*qfn1(fn))(fn, v_9);
    }
    env = stack[-1];
    {
        LispObject v_12 = stack[0];
        LispObject fn = basic_elt(env, 2); // general!-plus!-mod!-p
        return (*qfn2(fn))(fn, v_12, v_9);
    }
}



// Code for remainder!-mod!-p

static LispObject CC_remainderKmodKp(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_49, v_50, v_51;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_49 = v_3;
    v_51 = v_2;
// end of prologue
    v_50 = v_49;
    if (v_50 == nil) goto v_7;
    else goto v_8;
v_7:
    v_49 = basic_elt(env, 1); // "b=0 in remainder-mod-p"
    {
        LispObject fn = basic_elt(env, 2); // errorf
        return (*qfn1(fn))(fn, v_49);
    }
v_8:
    v_50 = v_49;
    if (!consp(v_50)) goto v_16;
    else goto v_17;
v_16:
    v_50 = lisp_true;
    goto v_15;
v_17:
    v_50 = v_49;
    if (!car_legal(v_50)) v_50 = carerror(v_50); else
    v_50 = car(v_50);
    v_50 = (consp(v_50) ? nil : lisp_true);
    goto v_15;
    v_50 = nil;
v_15:
    if (v_50 == nil) goto v_13;
    v_49 = nil;
    goto v_6;
v_13:
    v_50 = v_51;
    if (!consp(v_50)) goto v_30;
    else goto v_31;
v_30:
    v_50 = lisp_true;
    goto v_29;
v_31:
    v_50 = v_51;
    if (!car_legal(v_50)) v_50 = carerror(v_50); else
    v_50 = car(v_50);
    v_50 = (consp(v_50) ? nil : lisp_true);
    goto v_29;
    v_50 = nil;
v_29:
    if (v_50 == nil) goto v_27;
    v_49 = v_51;
    goto v_6;
v_27:
    v_50 = v_49;
    if (!car_legal(v_49)) v_49 = carerror(v_49); else
    v_49 = car(v_49);
    if (!car_legal(v_49)) v_49 = carerror(v_49); else
    v_49 = car(v_49);
    if (!car_legal(v_49)) v_49 = carerror(v_49); else
    v_49 = car(v_49);
    {
        LispObject fn = basic_elt(env, 3); // xremainder!-mod!-p
        return (*qfn3(fn))(fn, v_51, v_50, v_49);
    }
    v_49 = nil;
v_6:
    return onevalue(v_49);
}



// Code for ofsf_sippatl

static LispObject CC_ofsf_sippatl(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
        push(v_2,v_3,v_4);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_4,v_3,v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil, nil, nil, nil, nil);
    real_push(nil, nil, nil, nil, nil);
    real_push(nil, nil, nil, nil, nil);
    real_push(nil);
    stack_popper stack_popper_var(17);
// copy arguments values to proper place
    stack[0] = v_4;
    stack[-13] = v_3;
    stack[-14] = v_2;
// end of prologue
    stack[-3] = nil;
    v_163 = basic_elt(env, 1); // true
    v_162 = stack[-14];
    v_161 = basic_elt(env, 2); // and
    v_161 = (v_162 == v_161 ? lisp_true : nil);
    {   LispObject fn = basic_elt(env, 8); // cl_cflip
    v_161 = (*qfn2(fn))(fn, v_163, v_161);
    }
    env = stack[-16];
    stack[-15] = v_161;
    v_163 = basic_elt(env, 3); // false
    v_162 = stack[-14];
    v_161 = basic_elt(env, 2); // and
    v_161 = (v_162 == v_161 ? lisp_true : nil);
    {   LispObject fn = basic_elt(env, 8); // cl_cflip
    v_161 = (*qfn2(fn))(fn, v_163, v_161);
    }
    env = stack[-16];
    stack[-12] = v_161;
    v_163 = basic_elt(env, 4); // equal
    v_162 = stack[-14];
    v_161 = basic_elt(env, 2); // and
    v_161 = (v_162 == v_161 ? lisp_true : nil);
    {   LispObject fn = basic_elt(env, 9); // ofsf_clnegrel
    v_161 = (*qfn2(fn))(fn, v_163, v_161);
    }
    env = stack[-16];
    stack[-11] = v_161;
    v_161 = stack[0];
    {   LispObject fn = basic_elt(env, 10); // ofsf_exploitknowl
    v_161 = (*qfn1(fn))(fn, v_161);
    }
    env = stack[-16];
    v_162 = v_161;
    v_161 = v_162;
    if (!car_legal(v_161)) v_161 = carerror(v_161); else
    v_161 = car(v_161);
    stack[-10] = v_161;
    v_161 = v_162;
    if (!car_legal(v_161)) v_161 = cdrerror(v_161); else
    v_161 = cdr(v_161);
    v_162 = v_161;
    v_161 = v_162;
    if (!car_legal(v_161)) v_161 = carerror(v_161); else
    v_161 = car(v_161);
    stack[-9] = v_161;
    v_161 = v_162;
    if (!car_legal(v_161)) v_161 = cdrerror(v_161); else
    v_161 = cdr(v_161);
    v_162 = v_161;
    v_161 = v_162;
    if (!car_legal(v_161)) v_161 = carerror(v_161); else
    v_161 = car(v_161);
    stack[-8] = v_161;
    v_161 = v_162;
    if (!car_legal(v_161)) v_161 = cdrerror(v_161); else
    v_161 = cdr(v_161);
    v_162 = v_161;
    v_161 = v_162;
    if (!car_legal(v_161)) v_161 = carerror(v_161); else
    v_161 = car(v_161);
    stack[-7] = v_161;
    v_161 = v_162;
    if (!car_legal(v_161)) v_161 = cdrerror(v_161); else
    v_161 = cdr(v_161);
    v_162 = v_161;
    v_161 = v_162;
    if (!car_legal(v_161)) v_161 = carerror(v_161); else
    v_161 = car(v_161);
    stack[-6] = v_161;
    v_161 = v_162;
    if (!car_legal(v_161)) v_161 = cdrerror(v_161); else
    v_161 = cdr(v_161);
    v_162 = v_161;
    v_161 = v_162;
    if (!car_legal(v_161)) v_161 = carerror(v_161); else
    v_161 = car(v_161);
    stack[-5] = v_161;
    v_161 = v_162;
    if (!car_legal(v_161)) v_161 = cdrerror(v_161); else
    v_161 = cdr(v_161);
    v_162 = v_161;
    v_161 = v_162;
    if (!car_legal(v_161)) v_161 = carerror(v_161); else
    v_161 = car(v_161);
    stack[-4] = v_161;
v_73:
    v_161 = stack[-13];
    if (v_161 == nil) goto v_76;
    else goto v_77;
v_76:
    goto v_72;
v_77:
    v_161 = stack[-13];
    if (!car_legal(v_161)) v_161 = carerror(v_161); else
    v_161 = car(v_161);
    v_162 = v_161;
    v_161 = stack[-13];
    if (!car_legal(v_161)) v_161 = cdrerror(v_161); else
    v_161 = cdr(v_161);
    stack[-13] = v_161;
    v_161 = v_162;
    stack[-1] = v_161;
    v_161 = qvalue(basic_elt(env, 5)); // !*rlsippsubst
    if (v_161 == nil) goto v_92;
    v_162 = stack[-11];
    v_161 = stack[-1];
    {   LispObject fn = basic_elt(env, 11); // ofsf_vareqnp
    v_161 = (*qfn2(fn))(fn, v_162, v_161);
    }
    env = stack[-16];
    if (v_161 == nil) goto v_95;
    else goto v_92;
v_95:
    v_162 = stack[-1];
    v_161 = stack[-10];
    {   LispObject fn = basic_elt(env, 12); // ofsf_sippsubst
    v_161 = (*qfn2(fn))(fn, v_162, v_161);
    }
    env = stack[-16];
    stack[-1] = v_161;
    v_161 = nil;
// Binding !*rlsiatadv
// FLUIDBIND: reloadenv=16 litvec-offset=6 saveloc=0
{   bind_fluid_stack bind_fluid_var(-16, 6, 0);
    setvalue(basic_elt(env, 6), v_161); // !*rlsiatadv
    v_162 = stack[-1];
    v_161 = stack[-14];
    {   LispObject fn = basic_elt(env, 13); // ofsf_simplat1
    v_161 = (*qfn2(fn))(fn, v_162, v_161);
    }
    env = stack[-16];
    stack[-1] = v_161;
    ;}  // end of a binding scope
    goto v_90;
v_92:
v_90:
    v_162 = stack[-1];
    v_161 = basic_elt(env, 1); // true
    if (v_162 == v_161) goto v_115;
    else goto v_116;
v_115:
    v_161 = lisp_true;
    goto v_114;
v_116:
    v_162 = stack[-1];
    v_161 = basic_elt(env, 3); // false
    v_161 = (v_162 == v_161 ? lisp_true : nil);
    goto v_114;
    v_161 = nil;
v_114:
    if (v_161 == nil) goto v_111;
    else goto v_112;
v_111:
    v_161 = qvalue(basic_elt(env, 7)); // !*rlsippsignchk
    if (v_161 == nil) goto v_128;
    v_161 = stack[-1];
    if (!car_legal(v_161)) v_161 = cdrerror(v_161); else
    v_161 = cdr(v_161);
    if (!car_legal(v_161)) v_161 = carerror(v_161); else
    v_161 = car(v_161);
    {   LispObject fn = basic_elt(env, 14); // sfto_varisnump
    v_161 = (*qfn1(fn))(fn, v_161);
    }
    env = stack[-16];
    if (v_161 == nil) goto v_131;
    else goto v_128;
v_131:
    stack[-2] = stack[-1];
    stack[-1] = stack[-9];
    stack[0] = stack[-8];
    v_164 = stack[-7];
    v_163 = stack[-6];
    v_162 = stack[-5];
    v_161 = stack[-4];
    v_161 = list4(v_164, v_163, v_162, v_161);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 15); // ofsf_sippsignchk
    v_161 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_161);
    }
    env = stack[-16];
    stack[-1] = v_161;
    goto v_126;
v_128:
v_126:
    goto v_110;
v_112:
v_110:
    v_162 = stack[-1];
    v_161 = stack[-12];
    if (v_162 == v_161) goto v_147;
    else goto v_148;
v_147:
    v_161 = stack[-12];
    stack[-3] = v_161;
    v_161 = nil;
    stack[-13] = v_161;
    goto v_146;
v_148:
    v_162 = stack[-1];
    v_161 = stack[-15];
    if (equal(v_162, v_161)) goto v_154;
    v_162 = stack[-1];
    v_161 = stack[-3];
    {   LispObject fn = basic_elt(env, 16); // lto_insert
    v_161 = (*qfn2(fn))(fn, v_162, v_161);
    }
    env = stack[-16];
    stack[-3] = v_161;
    goto v_146;
v_154:
v_146:
    goto v_73;
v_72:
    v_161 = stack[-3];
    return onevalue(v_161);
}



// Code for constructinvolutivebasis

static LispObject CC_constructinvolutivebasis(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_189, v_190;
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
    stack[-5] = v_3;
    stack[0] = v_2;
// end of prologue
    v_190 = stack[0];
    v_189 = lisp_true;
    {   LispObject fn = basic_elt(env, 4); // polynomlistautoreduce
    v_189 = (*qfn2(fn))(fn, v_190, v_189);
    }
    env = stack[-7];
    stack[0] = v_189;
v_18:
    v_189 = stack[0];
    if (!car_legal(v_189)) v_189 = carerror(v_189); else
    v_189 = car(v_189);
    if (v_189 == nil) goto v_21;
    else goto v_22;
v_21:
    goto v_17;
v_22:
    stack[-1] = qvalue(basic_elt(env, 1)); // fluidbibasissetq
    v_189 = stack[0];
    if (!car_legal(v_189)) v_189 = carerror(v_189); else
    v_189 = car(v_189);
    {   LispObject fn = basic_elt(env, 5); // createtriple
    v_189 = (*qfn1(fn))(fn, v_189);
    }
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 6); // sortedtriplelistinsert
    v_189 = (*qfn2(fn))(fn, stack[-1], v_189);
    }
    env = stack[-7];
    v_189 = stack[0];
    if (!car_legal(v_189)) v_189 = cdrerror(v_189); else
    v_189 = cdr(v_189);
    stack[0] = v_189;
    goto v_18;
v_17:
v_36:
    v_189 = qvalue(basic_elt(env, 1)); // fluidbibasissetq
    if (!car_legal(v_189)) v_189 = carerror(v_189); else
    v_189 = car(v_189);
    if (v_189 == nil) goto v_39;
    else goto v_40;
v_39:
    goto v_35;
v_40:
    {   LispObject fn = basic_elt(env, 7); // setqget
    v_189 = (*qfn0(fn))(fn);
    }
    env = stack[-7];
    stack[-6] = v_189;
    v_190 = stack[-6];
    v_189 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_189 = Lgetv(nil, v_190, v_189);
    env = stack[-7];
    if (!car_legal(v_189)) v_189 = carerror(v_189); else
    v_189 = car(v_189);
    stack[-4] = v_189;
    v_190 = stack[-6];
    v_189 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_189 = Lgetv(nil, v_190, v_189);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 8); // normalform
    v_189 = (*qfn1(fn))(fn, v_189);
    }
    env = stack[-7];
    stack[-3] = v_189;
    v_189 = stack[-3];
    if (!car_legal(v_189)) v_189 = carerror(v_189); else
    v_189 = car(v_189);
    stack[-2] = v_189;
    v_189 = stack[-2];
    if (v_189 == nil) goto v_58;
    v_189 = qvalue(basic_elt(env, 2)); // fluidbibasisnonzeronormalforms
    v_189 = static_cast<LispObject>(static_cast<std::intptr_t>(v_189) + 0x10);
    setvalue(basic_elt(env, 2), v_189); // fluidbibasisnonzeronormalforms
    v_189 = nil;
    v_189 = ncons(v_189);
    env = stack[-7];
    stack[0] = v_189;
    v_189 = qvalue(basic_elt(env, 3)); // fluidbibasissett
    stack[-1] = v_189;
v_67:
    v_189 = stack[-1];
    if (!car_legal(v_189)) v_189 = carerror(v_189); else
    v_189 = car(v_189);
    if (v_189 == nil) goto v_70;
    else goto v_71;
v_70:
    goto v_66;
v_71:
    v_189 = stack[-1];
    if (!car_legal(v_189)) v_190 = carerror(v_189); else
    v_190 = car(v_189);
    v_189 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_189 = Lgetv(nil, v_190, v_189);
    env = stack[-7];
    if (!car_legal(v_189)) v_190 = carerror(v_189); else
    v_190 = car(v_189);
    v_189 = stack[-2];
    {   LispObject fn = basic_elt(env, 9); // monomisdivisibleby
    v_189 = (*qfn2(fn))(fn, v_190, v_189);
    }
    env = stack[-7];
    if (v_189 == nil) goto v_78;
    v_189 = stack[-1];
    if (!car_legal(v_189)) v_190 = carerror(v_189); else
    v_190 = car(v_189);
    v_189 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_189 = Lgetv(nil, v_190, v_189);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 10); // setqdeletedescendants
    v_189 = (*qfn1(fn))(fn, v_189);
    }
    env = stack[-7];
    v_190 = stack[0];
    v_189 = stack[-1];
    if (!car_legal(v_189)) v_189 = carerror(v_189); else
    v_189 = car(v_189);
    {   LispObject fn = basic_elt(env, 6); // sortedtriplelistinsert
    v_189 = (*qfn2(fn))(fn, v_190, v_189);
    }
    env = stack[-7];
    v_189 = stack[-1];
    if (!car_legal(v_189)) v_190 = carerror(v_189); else
    v_190 = car(v_189);
    v_189 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_189 = Lgetv(nil, v_190, v_189);
    env = stack[-7];
    if (!car_legal(v_189)) v_189 = carerror(v_189); else
    v_189 = car(v_189);
    {   LispObject fn = basic_elt(env, 11); // janettreedelete
    v_189 = (*qfn1(fn))(fn, v_189);
    }
    env = stack[-7];
    v_190 = stack[-1];
    v_189 = stack[-1];
    if (!car_legal(v_189)) v_189 = cdrerror(v_189); else
    v_189 = cdr(v_189);
    if (!car_legal(v_189)) v_189 = carerror(v_189); else
    v_189 = car(v_189);
    if (!car_legal(v_190)) rplaca_fails(v_190);
    setcar(v_190, v_189);
    v_189 = stack[-1];
    if (!car_legal(v_189)) v_189 = cdrerror(v_189); else
    v_189 = cdr(v_189);
    if (!car_legal(v_189)) v_189 = cdrerror(v_189); else
    v_189 = cdr(v_189);
    if (!car_legal(v_190)) rplacd_fails(v_190);
    setcdr(v_190, v_189);
    goto v_76;
v_78:
    v_189 = stack[-1];
    if (!car_legal(v_189)) v_189 = cdrerror(v_189); else
    v_189 = cdr(v_189);
    stack[-1] = v_189;
    goto v_76;
v_76:
    goto v_67;
v_66:
    v_190 = stack[-4];
    v_189 = stack[-2];
    if (v_190 == v_189) goto v_119;
    else goto v_120;
v_119:
    stack[-1] = stack[-3];
    v_190 = stack[-6];
    v_189 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_189 = Lgetv(nil, v_190, v_189);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 12); // createtriplewithancestor
    v_189 = (*qfn2(fn))(fn, stack[-1], v_189);
    }
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 13); // settinsert
    v_189 = (*qfn1(fn))(fn, v_189);
    }
    env = stack[-7];
    v_189 = qvalue(basic_elt(env, 3)); // fluidbibasissett
    if (!car_legal(v_189)) stack[-1] = carerror(v_189); else
    stack[-1] = car(v_189);
    v_190 = stack[-6];
    v_189 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_189 = Lgetv(nil, v_190, v_189);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 14); // triplesetprolongset
    v_189 = (*qfn2(fn))(fn, stack[-1], v_189);
    }
    env = stack[-7];
    goto v_118;
v_120:
    v_189 = stack[-3];
    {   LispObject fn = basic_elt(env, 5); // createtriple
    v_189 = (*qfn1(fn))(fn, v_189);
    }
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 13); // settinsert
    v_189 = (*qfn1(fn))(fn, v_189);
    }
    env = stack[-7];
    goto v_118;
v_118:
    v_189 = stack[0];
    {   LispObject fn = basic_elt(env, 15); // settcollectnonmultiprolongations
    v_189 = (*qfn1(fn))(fn, v_189);
    }
    env = stack[-7];
    v_190 = stack[-2];
    v_189 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_190 = Lgetv(nil, v_190, v_189);
    env = stack[-7];
    v_189 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_189 = Leqn_2(nil, v_190, v_189);
    env = stack[-7];
    if (v_189 == nil) goto v_147;
    v_189 = nil;
    v_189 = ncons(v_189);
    env = stack[-7];
    setvalue(basic_elt(env, 1), v_189); // fluidbibasissetq
    goto v_145;
v_147:
    v_189 = stack[0];
    {   LispObject fn = basic_elt(env, 16); // setqinsertlist
    v_189 = (*qfn1(fn))(fn, v_189);
    }
    env = stack[-7];
    goto v_145;
v_145:
    goto v_56;
v_58:
v_56:
    goto v_36;
v_35:
    v_189 = nil;
    v_189 = ncons(v_189);
    env = stack[-7];
    stack[0] = v_189;
    v_189 = qvalue(basic_elt(env, 3)); // fluidbibasissett
    stack[-1] = v_189;
v_168:
    v_189 = stack[-1];
    if (!car_legal(v_189)) v_189 = carerror(v_189); else
    v_189 = car(v_189);
    if (v_189 == nil) goto v_171;
    else goto v_172;
v_171:
    goto v_167;
v_172:
    stack[-2] = stack[0];
    v_189 = stack[-1];
    if (!car_legal(v_189)) v_190 = carerror(v_189); else
    v_190 = car(v_189);
    v_189 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_189 = Lgetv(nil, v_190, v_189);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 17); // sortedpolynomlistinsert
    v_189 = (*qfn2(fn))(fn, stack[-2], v_189);
    }
    env = stack[-7];
    v_189 = stack[-1];
    if (!car_legal(v_189)) v_189 = cdrerror(v_189); else
    v_189 = cdr(v_189);
    stack[-1] = v_189;
    goto v_168;
v_167:
    v_190 = stack[0];
    v_189 = stack[-5];
    {
        LispObject fn = basic_elt(env, 4); // polynomlistautoreduce
        return (*qfn2(fn))(fn, v_190, v_189);
    }
    return onevalue(v_189);
}



setup_type const u49_setup[] =
{
    {"mk_world1",               G0W3,     G1W3,     G2W3,     CC_mk_world1,G4W3},
    {"fs:zerop:",               G0W1,     CC_fsTzeropT,G2W1,  G3W1,     G4W1},
    {"dp=retimes",              G0W1,     CC_dpMretimes,G2W1, G3W1,     G4W1},
    {"st_sorttree1",            G0W3,     G1W3,     G2W3,     CC_st_sorttree1,G4W3},
    {"even_action",             G0W2,     G1W2,     CC_even_action,G3W2,G4W2},
    {"dvfsf_0mk2",              G0W2,     G1W2,     CC_dvfsf_0mk2,G3W2, G4W2},
    {"nextu",                   G0W2,     G1W2,     CC_nextu, G3W2,     G4W2},
    {"xadd*",                   G0W3,     G1W3,     G2W3,     CC_xaddH, G4W3},
    {"pasf_smordtable2",        G0W2,     G1W2,     CC_pasf_smordtable2,G3W2,G4W2},
    {"rat_leq",                 G0W2,     G1W2,     CC_rat_leq,G3W2,    G4W2},
    {"prload",                  CC_prload,G1W0,     G2W0,     G3W0,     G4W0},
    {"dipcontenti",             G0W1,     CC_dipcontenti,G2W1,G3W1,     G4W1},
    {":log10",                  G0W1,     CC_Tlog10,G2W1,     G3W1,     G4W1},
    {"monic",                   G0W2,     G1W2,     CC_monic, G3W2,     G4W2},
    {"pa_part2list",            G0W1,     CC_pa_part2list,G2W1,G3W1,    G4W1},
    {"baglistp",                G0W1,     CC_baglistp,G2W1,   G3W1,     G4W1},
    {"random-small-prime",      CC_randomKsmallKprime,G1W0,G2W0,G3W0,   G4W0},
    {"acell_getsp",             G0W1,     CC_acell_getsp,G2W1,G3W1,     G4W1},
    {"ofsf_smmkatl-and",        G0W3,     G1W3,     G2W3,     CC_ofsf_smmkatlKand,G4W3},
    {"impartsq",                G0W1,     CC_impartsq,G2W1,   G3W1,     G4W1},
    {"qqe_length-graph-neighbor-edge",G0W1,CC_qqe_lengthKgraphKneighborKedge,G2W1,G3W1,G4W1},
    {"ev_divides?",             G0W2,     G1W2,     CC_ev_dividesW,G3W2,G4W2},
    {"addexptsdf",              G0W2,     G1W2,     CC_addexptsdf,G3W2, G4W2},
    {"mkunarywedge",            G0W1,     CC_mkunarywedge,G2W1,G3W1,    G4W1},
    {"newvar",                  G0W1,     CC_newvar,G2W1,     G3W1,     G4W1},
    {"endofstmtp",              CC_endofstmtp,G1W0, G2W0,     G3W0,     G4W0},
    {"get-all-kernels",         G0W1,     CC_getKallKkernels,G2W1,G3W1, G4W1},
    {"evaluate-in-vector",      G0W3,     G1W3,     G2W3,     CC_evaluateKinKvector,G4W3},
    {"atree_rootcell",          G0W1,     CC_atree_rootcell,G2W1,G3W1,  G4W1},
    {"ofsf_anegrel",            G0W1,     CC_ofsf_anegrel,G2W1,G3W1,    G4W1},
    {"mktag",                   G0W3,     G1W3,     G2W3,     CC_mktag, G4W3},
    {"makecoeffpairs",          G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_makecoeffpairs},
    {"pasf_leqp",               G0W2,     G1W2,     CC_pasf_leqp,G3W2,  G4W2},
    {"ldf-deg",                 G0W2,     G1W2,     CC_ldfKdeg,G3W2,    G4W2},
    {"*ff2a",                   G0W2,     G1W2,     CC_Hff2a, G3W2,     G4W2},
    {"groebcplistsort",         G0W1,     CC_groebcplistsort,G2W1,G3W1, G4W1},
    {"groebreduceonestepint",   G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_groebreduceonestepint},
    {"mk-contract-coeff",       G0W1,     CC_mkKcontractKcoeff,G2W1,G3W1,G4W1},
    {"isimp2",                  G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_isimp2},
    {"derivative-mod-p",        G0W1,     CC_derivativeKmodKp,G2W1,G3W1,G4W1},
    {"ofsf_bestgaussp",         G0W1,     CC_ofsf_bestgaussp,G2W1,G3W1, G4W1},
    {"taymindegreel",           G0W2,     G1W2,     CC_taymindegreel,G3W2,G4W2},
    {"vdp_fdip",                G0W1,     CC_vdp_fdip,G2W1,   G3W1,     G4W1},
    {"ldf-sep-var",             G0W1,     CC_ldfKsepKvar,G2W1,G3W1,     G4W1},
    {"sprow_dim",               G0W1,     CC_sprow_dim,G2W1,  G3W1,     G4W1},
    {"dm-lt",                   G0W2,     G1W2,     CC_dmKlt, G3W2,     G4W2},
    {"vdpsimpcont",             G0W1,     CC_vdpsimpcont,G2W1,G3W1,     G4W1},
    {"force-to-dm",             G0W1,     CC_forceKtoKdm,G2W1,G3W1,     G4W1},
    {"is_buble",                G0W2,     G1W2,     CC_is_buble,G3W2,   G4W2},
    {"positive-powp",           G0W1,     CC_positiveKpowp,G2W1,G3W1,   G4W1},
    {"reddom_zeros",            G0W1,     CC_reddom_zeros,G2W1,G3W1,    G4W1},
    {"red_prepare",             G0W1,     CC_red_prepare,G2W1,G3W1,     G4W1},
    {"general-difference-mod-p",G0W2,     G1W2,     CC_generalKdifferenceKmodKp,G3W2,G4W2},
    {"remainder-mod-p",         G0W2,     G1W2,     CC_remainderKmodKp,G3W2,G4W2},
    {"ofsf_sippatl",            G0W3,     G1W3,     G2W3,     CC_ofsf_sippatl,G4W3},
    {"constructinvolutivebasis",G0W2,     G1W2,     CC_constructinvolutivebasis,G3W2,G4W2},
    {nullptr, 
        reinterpret_cast<no_args *>(
            reinterpret_cast<uintptr_t>("u49")),
        reinterpret_cast<one_arg *>(
            reinterpret_cast<uintptr_t>("74332 6242435 4565881")),
        nullptr, nullptr, nullptr}
};

// end of generated code
