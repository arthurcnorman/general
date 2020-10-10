
// $destdir/u56.c        Machine generated C code

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


// Code for search_att

static LispObject CC_search_att(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_155, v_156;
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
    v_155 = nil;
    stack[0] = v_155;
    v_155 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-3] = v_155;
    v_156 = stack[-2];
    v_155 = stack[-1];
    {   LispObject fn = basic_elt(env, 6); // find2
    v_155 = (*qfn2(fn))(fn, v_156, v_155);
    }
    env = stack[-4];
    stack[-2] = v_155;
    v_156 = stack[-2];
    v_155 = basic_elt(env, 1); // (stop)
    if (equal(v_156, v_155)) goto v_19;
v_24:
    v_155 = stack[-2];
    if (!car_legal(v_155)) v_156 = carerror(v_155); else
    v_156 = car(v_155);
    v_155 = basic_elt(env, 2); // ! 
    if (v_156 == v_155) goto v_28;
    goto v_23;
v_28:
    v_155 = stack[-2];
    if (!car_legal(v_155)) v_155 = cdrerror(v_155); else
    v_155 = cdr(v_155);
    stack[-2] = v_155;
    goto v_24;
v_23:
    v_155 = stack[-2];
    if (!car_legal(v_155)) v_156 = carerror(v_155); else
    v_156 = car(v_155);
    v_155 = basic_elt(env, 3); // !=
    if (v_156 == v_155) goto v_37;
    else goto v_38;
v_37:
    v_155 = stack[-2];
    if (!car_legal(v_155)) v_155 = cdrerror(v_155); else
    v_155 = cdr(v_155);
    stack[-2] = v_155;
v_46:
    v_155 = stack[-2];
    if (!car_legal(v_155)) v_156 = carerror(v_155); else
    v_156 = car(v_155);
    v_155 = basic_elt(env, 2); // ! 
    if (v_156 == v_155) goto v_50;
    goto v_45;
v_50:
    v_155 = stack[-2];
    if (!car_legal(v_155)) v_155 = cdrerror(v_155); else
    v_155 = cdr(v_155);
    stack[-2] = v_155;
    goto v_46;
v_45:
    v_155 = stack[-2];
    if (!car_legal(v_155)) v_156 = carerror(v_155); else
    v_156 = car(v_155);
    v_155 = basic_elt(env, 4); // !"
    if (v_156 == v_155) goto v_59;
    else goto v_60;
v_59:
    v_155 = stack[-2];
    if (!car_legal(v_155)) v_155 = cdrerror(v_155); else
    v_155 = cdr(v_155);
    stack[-2] = v_155;
v_68:
    v_156 = stack[-3];
    v_155 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_156 == v_155) goto v_72;
    goto v_67;
v_72:
    v_155 = stack[-2];
    if (!car_legal(v_155)) v_156 = carerror(v_155); else
    v_156 = car(v_155);
    v_155 = stack[0];
    v_155 = cons(v_156, v_155);
    env = stack[-4];
    stack[0] = v_155;
    v_155 = stack[-2];
    if (!car_legal(v_155)) v_155 = cdrerror(v_155); else
    v_155 = cdr(v_155);
    stack[-2] = v_155;
    v_155 = stack[-2];
    if (!car_legal(v_155)) v_156 = carerror(v_155); else
    v_156 = car(v_155);
    v_155 = basic_elt(env, 2); // ! 
    if (v_156 == v_155) goto v_88;
    else goto v_89;
v_88:
    v_155 = lisp_true;
    goto v_87;
v_89:
    v_155 = stack[-2];
    if (!car_legal(v_155)) v_156 = carerror(v_155); else
    v_156 = car(v_155);
    v_155 = basic_elt(env, 5); // !$
    v_155 = (v_156 == v_155 ? lisp_true : nil);
    goto v_87;
    v_155 = nil;
v_87:
    if (v_155 == nil) goto v_85;
    v_155 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-3] = v_155;
    goto v_83;
v_85:
v_83:
    goto v_68;
v_67:
    goto v_58;
v_60:
v_105:
    v_156 = stack[-3];
    v_155 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_156 == v_155) goto v_109;
    goto v_104;
v_109:
    v_155 = stack[-2];
    if (!car_legal(v_155)) v_156 = carerror(v_155); else
    v_156 = car(v_155);
    v_155 = stack[0];
    v_155 = cons(v_156, v_155);
    env = stack[-4];
    stack[0] = v_155;
    v_155 = stack[-2];
    if (!car_legal(v_155)) v_155 = cdrerror(v_155); else
    v_155 = cdr(v_155);
    stack[-2] = v_155;
    v_155 = stack[-2];
    if (!car_legal(v_155)) v_156 = carerror(v_155); else
    v_156 = car(v_155);
    v_155 = basic_elt(env, 2); // ! 
    if (v_156 == v_155) goto v_125;
    else goto v_126;
v_125:
    v_155 = lisp_true;
    goto v_124;
v_126:
    v_155 = stack[-2];
    if (!car_legal(v_155)) v_156 = carerror(v_155); else
    v_156 = car(v_155);
    v_155 = basic_elt(env, 5); // !$
    v_155 = (v_156 == v_155 ? lisp_true : nil);
    goto v_124;
    v_155 = nil;
v_124:
    if (v_155 == nil) goto v_122;
    v_155 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-3] = v_155;
    goto v_120;
v_122:
v_120:
    goto v_105;
v_104:
    goto v_58;
v_58:
    goto v_36;
v_38:
    v_155 = stack[-1];
    v_156 = Lcompress(nil, v_155);
    env = stack[-4];
    v_155 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 7); // errorml
    v_155 = (*qfn2(fn))(fn, v_156, v_155);
    }
    env = stack[-4];
    goto v_36;
v_36:
    v_155 = stack[0];
    if (!car_legal(v_155)) v_155 = carerror(v_155); else
    v_155 = car(v_155);
    v_156 = basic_elt(env, 4); // !"
    if (v_155 == v_156) goto v_146;
    else goto v_147;
v_146:
    v_155 = stack[0];
    if (!car_legal(v_155)) v_155 = cdrerror(v_155); else
    v_155 = cdr(v_155);
    stack[0] = v_155;
    goto v_145;
v_147:
v_145:
    v_155 = stack[0];
        return Lreverse(nil, v_155);
v_19:
    v_155 = nil;
    return onevalue(v_155);
}



// Code for mo_from_ei

static LispObject CC_mo_from_ei(LispObject env,
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
    v_21 = v_22;
    v_20 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_21 == v_20) goto v_6;
    else goto v_7;
v_6:
    {
        LispObject fn = basic_elt(env, 1); // mo_zero
        return (*qfn0(fn))(fn);
    }
v_7:
    v_20 = v_22;
    v_20 = ncons(v_20);
    env = stack[-1];
    stack[0] = v_20;
    {   LispObject fn = basic_elt(env, 2); // mo!=deglist
    v_20 = (*qfn1(fn))(fn, v_20);
    }
    {
        LispObject v_24 = stack[0];
        return cons(v_24, v_20);
    }
    v_20 = nil;
    return onevalue(v_20);
}



// Code for boolean!-eval2

static LispObject CC_booleanKeval2(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_111, v_112, v_113;
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
    stack[0] = v_2;
// end of prologue
v_6:
    v_112 = stack[0];
    v_111 = basic_elt(env, 1); // boolean
    if (!consp(v_112)) goto v_10;
    v_112 = car(v_112);
    if (v_112 == v_111) goto v_9;
    else goto v_10;
v_9:
    v_111 = stack[0];
    if (!car_legal(v_111)) v_111 = cdrerror(v_111); else
    v_111 = cdr(v_111);
    if (!car_legal(v_111)) v_111 = carerror(v_111); else
    v_111 = car(v_111);
    stack[0] = v_111;
    goto v_6;
v_10:
    v_112 = stack[0];
    v_111 = basic_elt(env, 2); // and
    if (!consp(v_112)) goto v_22;
    v_112 = car(v_112);
    if (v_112 == v_111) goto v_21;
    else goto v_22;
v_21:
    v_111 = lisp_true;
    goto v_20;
v_22:
    v_112 = stack[0];
    v_111 = basic_elt(env, 3); // or
    if (!consp(v_112)) goto v_32;
    v_112 = car(v_112);
    if (v_112 == v_111) goto v_31;
    else goto v_32;
v_31:
    v_111 = lisp_true;
    goto v_30;
v_32:
    v_112 = stack[0];
    v_111 = basic_elt(env, 4); // not
    v_111 = Leqcar(nil, v_112, v_111);
    env = stack[-5];
    goto v_30;
    v_111 = nil;
v_30:
    goto v_20;
    v_111 = nil;
v_20:
    if (v_111 == nil) goto v_18;
    v_111 = stack[0];
    if (!car_legal(v_111)) stack[-4] = carerror(v_111); else
    stack[-4] = car(v_111);
    v_111 = stack[0];
    if (!car_legal(v_111)) v_111 = cdrerror(v_111); else
    v_111 = cdr(v_111);
    stack[-3] = v_111;
    v_111 = stack[-3];
    if (v_111 == nil) goto v_55;
    else goto v_56;
v_55:
    v_111 = nil;
    goto v_49;
v_56:
    v_111 = stack[-3];
    if (!car_legal(v_111)) v_111 = carerror(v_111); else
    v_111 = car(v_111);
    {   LispObject fn = basic_elt(env, 0); // boolean!-eval2
    v_111 = (*qfn1(fn))(fn, v_111);
    }
    env = stack[-5];
    v_111 = ncons(v_111);
    env = stack[-5];
    stack[-1] = v_111;
    stack[-2] = v_111;
v_50:
    v_111 = stack[-3];
    if (!car_legal(v_111)) v_111 = cdrerror(v_111); else
    v_111 = cdr(v_111);
    stack[-3] = v_111;
    v_111 = stack[-3];
    if (v_111 == nil) goto v_69;
    else goto v_70;
v_69:
    v_111 = stack[-2];
    goto v_49;
v_70:
    stack[0] = stack[-1];
    v_111 = stack[-3];
    if (!car_legal(v_111)) v_111 = carerror(v_111); else
    v_111 = car(v_111);
    {   LispObject fn = basic_elt(env, 0); // boolean!-eval2
    v_111 = (*qfn1(fn))(fn, v_111);
    }
    env = stack[-5];
    v_111 = ncons(v_111);
    env = stack[-5];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_111);
    v_111 = stack[-1];
    if (!car_legal(v_111)) v_111 = cdrerror(v_111); else
    v_111 = cdr(v_111);
    stack[-1] = v_111;
    goto v_50;
v_49:
    {
        LispObject v_119 = stack[-4];
        return cons(v_119, v_111);
    }
v_18:
    v_111 = lisp_true;
// Binding !*protfg
// FLUIDBIND: reloadenv=5 litvec-offset=5 saveloc=1
{   bind_fluid_stack bind_fluid_var(-5, 5, -1);
    setvalue(basic_elt(env, 5), v_111); // !*protfg
    v_113 = stack[0];
    v_112 = nil;
    v_111 = basic_elt(env, 6); // algebraic
    {   LispObject fn = basic_elt(env, 9); // formbool
    v_113 = (*qfn3(fn))(fn, v_113, v_112, v_111);
    }
    env = stack[-5];
    v_112 = nil;
    v_111 = nil;
    {   LispObject fn = basic_elt(env, 10); // errorset
    v_111 = (*qfn3(fn))(fn, v_113, v_112, v_111);
    }
    env = stack[-5];
    stack[-2] = v_111;
    ;}  // end of a binding scope
    v_111 = stack[-2];
    {   LispObject fn = basic_elt(env, 11); // errorp
    v_111 = (*qfn1(fn))(fn, v_111);
    }
    env = stack[-5];
    if (v_111 == nil) goto v_101;
    v_111 = lisp_true;
    setvalue(basic_elt(env, 7), v_111); // bool!-break!*
    v_111 = nil;
    setvalue(basic_elt(env, 8), v_111); // erfg!*
    v_111 = stack[0];
    goto v_99;
v_101:
    v_111 = stack[-2];
    if (!car_legal(v_111)) v_111 = carerror(v_111); else
    v_111 = car(v_111);
    goto v_99;
    v_111 = nil;
v_99:
    goto v_5;
    v_111 = nil;
v_5:
    return onevalue(v_111);
}



// Code for distri_pol

static LispObject CC_distri_pol(LispObject env,
                         LispObject v_2)
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
    v_88 = stack[-1];
    if (v_88 == nil) goto v_6;
    else goto v_7;
v_6:
    v_88 = nil;
    goto v_5;
v_7:
    v_88 = stack[-1];
    if (!consp(v_88)) goto v_10;
    else goto v_11;
v_10:
    v_88 = stack[-1];
    goto v_5;
v_11:
    v_88 = stack[-1];
    if (!car_legal(v_88)) v_88 = cdrerror(v_88); else
    v_88 = cdr(v_88);
    if (v_88 == nil) goto v_15;
    v_88 = stack[-1];
    if (!car_legal(v_88)) v_88 = carerror(v_88); else
    v_88 = car(v_88);
    v_88 = ncons(v_88);
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 0); // distri_pol
    stack[0] = (*qfn1(fn))(fn, v_88);
    }
    env = stack[-3];
    v_88 = stack[-1];
    if (!car_legal(v_88)) v_88 = cdrerror(v_88); else
    v_88 = cdr(v_88);
    {   LispObject fn = basic_elt(env, 0); // distri_pol
    v_88 = (*qfn1(fn))(fn, v_88);
    }
    env = stack[-3];
    {
        LispObject v_93 = stack[0];
        LispObject fn = basic_elt(env, 1); // addfd
        return (*qfn2(fn))(fn, v_93, v_88);
    }
v_15:
    v_88 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[0] = v_88;
    v_88 = stack[-1];
    stack[-2] = v_88;
v_36:
    v_88 = stack[-2];
    if (!consp(v_88)) goto v_44;
    v_88 = stack[-2];
    if (!car_legal(v_88)) v_88 = cdrerror(v_88); else
    v_88 = cdr(v_88);
    v_88 = (v_88 == nil ? lisp_true : nil);
    goto v_42;
v_44:
    v_88 = nil;
    goto v_42;
    v_88 = nil;
v_42:
    if (v_88 == nil) goto v_39;
    else goto v_40;
v_39:
    goto v_35;
v_40:
    v_88 = stack[-2];
    if (!car_legal(v_88)) v_88 = carerror(v_88); else
    v_88 = car(v_88);
    if (!car_legal(v_88)) v_89 = carerror(v_88); else
    v_89 = car(v_88);
    v_88 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_88 = cons(v_89, v_88);
    env = stack[-3];
    v_88 = ncons(v_88);
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 2); // multf
    v_88 = (*qfn2(fn))(fn, stack[0], v_88);
    }
    env = stack[-3];
    stack[0] = v_88;
    v_88 = stack[-2];
    if (!car_legal(v_88)) v_88 = carerror(v_88); else
    v_88 = car(v_88);
    if (!car_legal(v_88)) v_88 = cdrerror(v_88); else
    v_88 = cdr(v_88);
    stack[-2] = v_88;
    goto v_36;
v_35:
    v_88 = stack[-2];
    if (!consp(v_88)) goto v_66;
    else goto v_67;
v_66:
    v_89 = stack[0];
    v_88 = stack[-2];
    {
        LispObject fn = basic_elt(env, 2); // multf
        return (*qfn2(fn))(fn, v_89, v_88);
    }
v_67:
    stack[-1] = stack[0];
    v_88 = stack[-2];
    if (!car_legal(v_88)) v_88 = carerror(v_88); else
    v_88 = car(v_88);
    v_88 = ncons(v_88);
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 0); // distri_pol
    v_88 = (*qfn1(fn))(fn, v_88);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 2); // multf
    v_88 = (*qfn2(fn))(fn, stack[-1], v_88);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 0); // distri_pol
    stack[-1] = (*qfn1(fn))(fn, v_88);
    }
    env = stack[-3];
    v_88 = stack[-2];
    if (!car_legal(v_88)) v_88 = cdrerror(v_88); else
    v_88 = cdr(v_88);
    {   LispObject fn = basic_elt(env, 0); // distri_pol
    v_88 = (*qfn1(fn))(fn, v_88);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 2); // multf
    v_88 = (*qfn2(fn))(fn, stack[0], v_88);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 0); // distri_pol
    v_88 = (*qfn1(fn))(fn, v_88);
    }
    env = stack[-3];
    {
        LispObject v_94 = stack[-1];
        LispObject fn = basic_elt(env, 1); // addfd
        return (*qfn2(fn))(fn, v_94, v_88);
    }
    v_88 = nil;
    goto v_5;
    v_88 = nil;
v_5:
    return onevalue(v_88);
}



// Code for aex_xtothen

static LispObject CC_aex_xtothen(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // sfto_kexp
    v_13 = (*qfn2(fn))(fn, v_13, v_12);
    }
    env = stack[-1];
    v_12 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[0] = cons(v_13, v_12);
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // ctx_new
    v_12 = (*qfn0(fn))(fn);
    }
    env = stack[-1];
    {
        LispObject v_15 = stack[0];
        LispObject fn = basic_elt(env, 3); // aex_mk
        return (*qfn2(fn))(fn, v_15, v_12);
    }
}



// Code for get!-min!-degreelist

static LispObject CC_getKminKdegreelist(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_101, v_102;
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
    v_102 = v_2;
// end of prologue
    v_101 = v_102;
    if (v_101 == nil) goto v_6;
    else goto v_7;
v_6:
    v_101 = basic_elt(env, 0); // get!-min!-degreelist
    {
        LispObject fn = basic_elt(env, 1); // confusion
        return (*qfn1(fn))(fn, v_101);
    }
v_7:
    v_101 = v_102;
    if (!car_legal(v_101)) v_101 = cdrerror(v_101); else
    v_101 = cdr(v_101);
    if (v_101 == nil) goto v_11;
    else goto v_12;
v_11:
    v_101 = v_102;
    if (!car_legal(v_101)) v_101 = carerror(v_101); else
    v_101 = car(v_101);
    if (!car_legal(v_101)) v_101 = carerror(v_101); else
    v_101 = car(v_101);
    stack[-4] = v_101;
    v_101 = stack[-4];
    if (v_101 == nil) goto v_26;
    else goto v_27;
v_26:
    v_101 = nil;
    goto v_19;
v_27:
    v_101 = stack[-4];
    if (!car_legal(v_101)) v_101 = carerror(v_101); else
    v_101 = car(v_101);
    stack[0] = v_101;
    v_101 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_102 = v_101;
v_38:
    v_101 = stack[0];
    if (v_101 == nil) goto v_43;
    else goto v_44;
v_43:
    v_101 = v_102;
    goto v_37;
v_44:
    v_101 = stack[0];
    if (!car_legal(v_101)) v_101 = carerror(v_101); else
    v_101 = car(v_101);
    {   LispObject fn = basic_elt(env, 2); // tayexp!-plus2
    v_101 = (*qfn2(fn))(fn, v_101, v_102);
    }
    env = stack[-5];
    v_102 = v_101;
    v_101 = stack[0];
    if (!car_legal(v_101)) v_101 = cdrerror(v_101); else
    v_101 = cdr(v_101);
    stack[0] = v_101;
    goto v_38;
v_37:
    v_101 = ncons(v_101);
    env = stack[-5];
    stack[-2] = v_101;
    stack[-3] = v_101;
v_20:
    v_101 = stack[-4];
    if (!car_legal(v_101)) v_101 = cdrerror(v_101); else
    v_101 = cdr(v_101);
    stack[-4] = v_101;
    v_101 = stack[-4];
    if (v_101 == nil) goto v_59;
    else goto v_60;
v_59:
    v_101 = stack[-3];
    goto v_19;
v_60:
    stack[-1] = stack[-2];
    v_101 = stack[-4];
    if (!car_legal(v_101)) v_101 = carerror(v_101); else
    v_101 = car(v_101);
    stack[0] = v_101;
    v_101 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_102 = v_101;
v_72:
    v_101 = stack[0];
    if (v_101 == nil) goto v_77;
    else goto v_78;
v_77:
    v_101 = v_102;
    goto v_71;
v_78:
    v_101 = stack[0];
    if (!car_legal(v_101)) v_101 = carerror(v_101); else
    v_101 = car(v_101);
    {   LispObject fn = basic_elt(env, 2); // tayexp!-plus2
    v_101 = (*qfn2(fn))(fn, v_101, v_102);
    }
    env = stack[-5];
    v_102 = v_101;
    v_101 = stack[0];
    if (!car_legal(v_101)) v_101 = cdrerror(v_101); else
    v_101 = cdr(v_101);
    stack[0] = v_101;
    goto v_72;
v_71:
    v_101 = ncons(v_101);
    env = stack[-5];
    if (!car_legal(stack[-1])) rplacd_fails(stack[-1]);
    setcdr(stack[-1], v_101);
    v_101 = stack[-2];
    if (!car_legal(v_101)) v_101 = cdrerror(v_101); else
    v_101 = cdr(v_101);
    stack[-2] = v_101;
    goto v_20;
v_19:
    goto v_5;
v_12:
    v_101 = v_102;
    if (!car_legal(v_101)) v_101 = carerror(v_101); else
    v_101 = car(v_101);
    if (!car_legal(v_101)) stack[0] = carerror(v_101); else
    stack[0] = car(v_101);
    v_101 = v_102;
    if (!car_legal(v_101)) v_101 = cdrerror(v_101); else
    v_101 = cdr(v_101);
    {   LispObject fn = basic_elt(env, 0); // get!-min!-degreelist
    v_101 = (*qfn1(fn))(fn, v_101);
    }
    env = stack[-5];
    {
        LispObject v_108 = stack[0];
        LispObject fn = basic_elt(env, 3); // taymindegreel
        return (*qfn2(fn))(fn, v_108, v_101);
    }
    v_101 = nil;
v_5:
    return onevalue(v_101);
}



// Code for available!*p

static LispObject CC_availableHp(LispObject env,
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
// space for vars preserved across procedure calls
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_16 = stack[0];
    if (symbolp(v_16)) goto v_9;
    v_16 = basic_elt(env, 1); // "this is no group identifier"
    {   LispObject fn = basic_elt(env, 3); // rederr
    v_16 = (*qfn1(fn))(fn, v_16);
    }
    env = stack[-1];
    goto v_7;
v_9:
v_7:
    v_16 = stack[0];
    v_17 = basic_elt(env, 2); // available
        return Lflagp(nil, v_16, v_17);
    return onevalue(v_16);
}



// Code for talp_get!-minfct

static LispObject CC_talp_getKminfct(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_70, v_71;
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
    stack[-5] = v_5;
    stack[0] = v_4;
    v_71 = v_3;
    v_70 = v_2;
// end of prologue
    v_70 = Lgetv(nil, v_71, v_70);
    env = stack[-7];
    stack[-6] = v_70;
    v_70 = stack[-6];
    {   LispObject fn = basic_elt(env, 1); // talp_invp
    v_70 = (*qfn1(fn))(fn, v_70);
    }
    env = stack[-7];
    if (v_70 == nil) goto v_14;
    v_70 = stack[-6];
    {   LispObject fn = basic_elt(env, 2); // talp_fop
    stack[-1] = (*qfn1(fn))(fn, v_70);
    }
    env = stack[-7];
    v_71 = stack[0];
    v_70 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_71 = Lgetv(nil, v_71, v_70);
    v_70 = nil;
    {
        LispObject v_79 = stack[-1];
        return list2star(v_79, v_71, v_70);
    }
v_14:
    v_70 = stack[-6];
    {   LispObject fn = basic_elt(env, 2); // talp_fop
    stack[-4] = (*qfn1(fn))(fn, v_70);
    }
    env = stack[-7];
    v_70 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-3] = v_70;
    v_70 = stack[-6];
    if (!car_legal(v_70)) v_71 = cdrerror(v_70); else
    v_71 = cdr(v_70);
    v_70 = stack[-3];
    v_70 = difference2(v_71, v_70);
    env = stack[-7];
    v_70 = Lminusp(nil, v_70);
    env = stack[-7];
    if (v_70 == nil) goto v_39;
    v_70 = nil;
    goto v_33;
v_39:
    v_71 = stack[-5];
    v_70 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_70 = Lgetv(nil, v_71, v_70);
    env = stack[-7];
    v_70 = ncons(v_70);
    env = stack[-7];
    stack[-1] = v_70;
    stack[-2] = v_70;
v_34:
    v_70 = stack[-3];
    v_70 = add1(v_70);
    env = stack[-7];
    stack[-3] = v_70;
    v_70 = stack[-6];
    if (!car_legal(v_70)) v_71 = cdrerror(v_70); else
    v_71 = cdr(v_70);
    v_70 = stack[-3];
    v_70 = difference2(v_71, v_70);
    env = stack[-7];
    v_70 = Lminusp(nil, v_70);
    env = stack[-7];
    if (v_70 == nil) goto v_55;
    v_70 = stack[-2];
    goto v_33;
v_55:
    stack[0] = stack[-1];
    v_71 = stack[-5];
    v_70 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_70 = Lgetv(nil, v_71, v_70);
    env = stack[-7];
    v_70 = ncons(v_70);
    env = stack[-7];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_70);
    v_70 = stack[-1];
    if (!car_legal(v_70)) v_70 = cdrerror(v_70); else
    v_70 = cdr(v_70);
    stack[-1] = v_70;
    goto v_34;
v_33:
    {
        LispObject v_80 = stack[-4];
        LispObject fn = basic_elt(env, 3); // talp_mktn
        return (*qfn2(fn))(fn, v_80, v_70);
    }
    v_70 = nil;
    return onevalue(v_70);
}



// Code for mri_irsplit

static LispObject CC_mri_irsplit(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_48, v_49, v_50;
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
    v_50 = v_2;
// end of prologue
    v_49 = v_50;
    v_48 = basic_elt(env, 1); // floor
    if (!consp(v_49)) goto v_9;
    v_49 = car(v_49);
    if (v_49 == v_48) goto v_10;
v_9:
    v_49 = v_50;
    v_48 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 2); // to
    v_49 = (*qfn2(fn))(fn, v_49, v_48);
    }
    env = stack[-2];
    v_48 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_48 = cons(v_49, v_48);
    env = stack[-2];
    v_48 = ncons(v_48);
    return ncons(v_48);
v_10:
    v_48 = v_50;
    if (!car_legal(v_48)) v_48 = cdrerror(v_48); else
    v_48 = cdr(v_48);
    if (!car_legal(v_48)) v_48 = carerror(v_48); else
    v_48 = car(v_48);
    {   LispObject fn = basic_elt(env, 3); // simp
    v_48 = (*qfn1(fn))(fn, v_48);
    }
    env = stack[-2];
    if (!car_legal(v_48)) v_48 = carerror(v_48); else
    v_48 = car(v_48);
    {   LispObject fn = basic_elt(env, 4); // mri_simplfloor
    v_48 = (*qfn1(fn))(fn, v_48);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 5); // mri_irsplit1
    v_48 = (*qfn1(fn))(fn, v_48);
    }
    env = stack[-2];
    v_49 = v_48;
    v_48 = v_49;
    if (!car_legal(v_48)) stack[-1] = carerror(v_48); else
    stack[-1] = car(v_48);
    v_48 = v_49;
    if (!car_legal(v_48)) v_48 = cdrerror(v_48); else
    v_48 = cdr(v_48);
    if (v_48 == nil) goto v_34;
    stack[0] = basic_elt(env, 1); // floor
    v_48 = v_49;
    if (!car_legal(v_48)) v_48 = cdrerror(v_48); else
    v_48 = cdr(v_48);
    {   LispObject fn = basic_elt(env, 6); // prepf
    v_48 = (*qfn1(fn))(fn, v_48);
    }
    env = stack[-2];
    v_48 = list2(stack[0], v_48);
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 7); // !*a2k
    v_49 = (*qfn1(fn))(fn, v_48);
    }
    env = stack[-2];
    v_48 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 2); // to
    v_49 = (*qfn2(fn))(fn, v_49, v_48);
    }
    env = stack[-2];
    v_48 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_48 = cons(v_49, v_48);
    env = stack[-2];
    v_48 = ncons(v_48);
    goto v_32;
v_34:
    v_48 = nil;
v_32:
    {
        LispObject v_53 = stack[-1];
        return cons(v_53, v_48);
    }
    return onevalue(v_48);
}



// Code for subsqnew

static LispObject CC_subsqnew(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    v_28 = v_3;
    stack[-1] = v_2;
// end of prologue
    {   LispObject fn = basic_elt(env, 1); // prepsq
    v_28 = (*qfn1(fn))(fn, v_28);
    }
    env = stack[-3];
    v_29 = stack[0];
    v_28 = cons(v_29, v_28);
    env = stack[-3];
    stack[-2] = v_28;
    v_28 = stack[-1];
    if (!car_legal(v_28)) stack[0] = carerror(v_28); else
    stack[0] = car(v_28);
    v_28 = stack[-2];
    v_28 = ncons(v_28);
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 2); // subf
    stack[0] = (*qfn2(fn))(fn, stack[0], v_28);
    }
    env = stack[-3];
    v_28 = stack[-1];
    if (!car_legal(v_28)) stack[-1] = cdrerror(v_28); else
    stack[-1] = cdr(v_28);
    v_28 = stack[-2];
    v_28 = ncons(v_28);
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 2); // subf
    v_28 = (*qfn2(fn))(fn, stack[-1], v_28);
    }
    env = stack[-3];
    {
        LispObject v_33 = stack[0];
        LispObject fn = basic_elt(env, 3); // quotsq
        return (*qfn2(fn))(fn, v_33, v_28);
    }
    return onevalue(v_28);
}



// Code for implicitdec

static LispObject CC_implicitdec(LispObject env,
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
    v_55 = nil;
    stack[0] = v_55;
    v_56 = nil;
    v_55 = basic_elt(env, 1); // !*decs!*
    {   LispObject fn = basic_elt(env, 2); // symtabget
    v_55 = (*qfn2(fn))(fn, v_56, v_55);
    }
    env = stack[-3];
    stack[-2] = v_55;
v_14:
    v_55 = stack[0];
    if (v_55 == nil) goto v_21;
    else goto v_22;
v_21:
    v_55 = stack[-2];
    goto v_20;
v_22:
    v_55 = nil;
    goto v_20;
    v_55 = nil;
v_20:
    if (v_55 == nil) goto v_17;
    else goto v_18;
v_17:
    goto v_13;
v_18:
    v_55 = stack[-2];
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    if (!car_legal(v_55)) v_55 = cdrerror(v_55); else
    v_55 = cdr(v_55);
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    {   LispObject fn = basic_elt(env, 3); // isimplicit
    v_55 = (*qfn1(fn))(fn, v_55);
    }
    env = stack[-3];
    if (v_55 == nil) goto v_32;
    v_56 = stack[-1];
    v_55 = stack[-2];
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    {   LispObject fn = basic_elt(env, 4); // firstmatch
    v_55 = (*qfn2(fn))(fn, v_56, v_55);
    }
    env = stack[-3];
    if (v_55 == nil) goto v_32;
    stack[0] = stack[-1];
    v_55 = stack[-2];
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    if (!car_legal(v_55)) v_55 = cdrerror(v_55); else
    v_55 = cdr(v_55);
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    {   LispObject fn = basic_elt(env, 5); // implicittype
    v_55 = (*qfn1(fn))(fn, v_55);
    }
    env = stack[-3];
    v_55 = list2(stack[0], v_55);
    env = stack[-3];
    stack[0] = v_55;
    goto v_30;
v_32:
v_30:
    v_55 = stack[-2];
    if (!car_legal(v_55)) v_55 = cdrerror(v_55); else
    v_55 = cdr(v_55);
    stack[-2] = v_55;
    goto v_14;
v_13:
    v_55 = stack[0];
    return onevalue(v_55);
}



// Code for bccheckz

static LispObject CC_bccheckz(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_48, v_49, v_50;
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
    v_49 = v_48;
    if (!car_legal(v_49)) v_49 = carerror(v_49); else
    v_49 = car(v_49);
    if (v_49 == nil) goto v_6;
    else goto v_7;
v_6:
    goto v_5;
v_7:
    v_49 = qvalue(basic_elt(env, 1)); // !*bcsubs2
    if (v_49 == nil) goto v_12;
    {
        LispObject fn = basic_elt(env, 3); // subs2
        return (*qfn1(fn))(fn, v_48);
    }
v_12:
    v_50 = qvalue(basic_elt(env, 2)); // bczerodivl!*
    v_49 = v_48;
    if (!car_legal(v_49)) v_49 = carerror(v_49); else
    v_49 = car(v_49);
    if (!car_legal(v_48)) v_48 = cdrerror(v_48); else
    v_48 = cdr(v_48);
    stack[-1] = v_50;
    stack[0] = v_48;
v_28:
    v_48 = stack[-1];
    if (v_48 == nil) goto v_31;
    v_48 = v_49;
    if (v_48 == nil) goto v_31;
    goto v_32;
v_31:
    goto v_27;
v_32:
    v_48 = stack[-1];
    if (!car_legal(v_48)) v_48 = carerror(v_48); else
    v_48 = car(v_48);
    {   LispObject fn = basic_elt(env, 4); // qremf
    v_48 = (*qfn2(fn))(fn, v_49, v_48);
    }
    env = stack[-2];
    if (!car_legal(v_48)) v_48 = cdrerror(v_48); else
    v_48 = cdr(v_48);
    v_49 = v_48;
    v_48 = stack[-1];
    if (!car_legal(v_48)) v_48 = cdrerror(v_48); else
    v_48 = cdr(v_48);
    stack[-1] = v_48;
    goto v_28;
v_27:
    v_48 = stack[0];
    return cons(v_49, v_48);
    v_48 = nil;
v_5:
    return onevalue(v_48);
}



// Code for xnormalise

static LispObject CC_xnormalise(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_27 = stack[0];
    if (v_27 == nil) goto v_6;
    else goto v_7;
v_6:
    v_27 = nil;
    goto v_5;
v_7:
    v_27 = stack[0];
    if (!car_legal(v_27)) v_27 = carerror(v_27); else
    v_27 = car(v_27);
    if (!car_legal(v_27)) stack[-1] = cdrerror(v_27); else
    stack[-1] = cdr(v_27);
    v_28 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_27 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_27 = cons(v_28, v_27);
    env = stack[-2];
    if (equal(stack[-1], v_27)) goto v_10;
    else goto v_11;
v_10:
    v_27 = stack[0];
    goto v_5;
v_11:
    stack[-1] = stack[0];
    v_27 = stack[0];
    if (!car_legal(v_27)) v_27 = carerror(v_27); else
    v_27 = car(v_27);
    if (!car_legal(v_27)) v_27 = cdrerror(v_27); else
    v_27 = cdr(v_27);
    {   LispObject fn = basic_elt(env, 1); // invsq
    v_27 = (*qfn1(fn))(fn, v_27);
    }
    env = stack[-2];
    {
        LispObject v_31 = stack[-1];
        LispObject fn = basic_elt(env, 2); // multpfsq
        return (*qfn2(fn))(fn, v_31, v_27);
    }
    v_27 = nil;
v_5:
    return onevalue(v_27);
}



// Code for unshift

static LispObject CC_unshift(LispObject env,
                         LispObject v_2)
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
        push(v_2);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_49 = v_2;
// end of prologue
    v_46 = qvalue(basic_elt(env, 1)); // !*xo
    v_48 = v_46;
    v_46 = v_48;
    if (!car_legal(v_46)) v_46 = carerror(v_46); else
    v_46 = car(v_46);
    if (!consp(v_46)) goto v_13;
    v_46 = v_48;
    if (!car_legal(v_46)) v_46 = carerror(v_46); else
    v_46 = car(v_46);
    if (!car_legal(v_46)) v_46 = cdrerror(v_46); else
    v_46 = cdr(v_46);
    if (!car_legal(v_46)) v_47 = carerror(v_46); else
    v_47 = car(v_46);
    v_46 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_47 == v_46) goto v_18;
    else goto v_19;
v_18:
    v_46 = v_48;
    if (!car_legal(v_46)) v_46 = cdrerror(v_46); else
    v_46 = cdr(v_46);
    if (!car_legal(v_46)) v_46 = cdrerror(v_46); else
    v_46 = cdr(v_46);
    if (!car_legal(v_46)) v_47 = carerror(v_46); else
    v_47 = car(v_46);
    v_46 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_46 = (v_47 == v_46 ? lisp_true : nil);
    goto v_17;
v_19:
    v_46 = nil;
    goto v_17;
    v_46 = nil;
v_17:
    goto v_11;
v_13:
    v_47 = v_48;
    v_46 = basic_elt(env, 2); // (0.0 . 0.0)
    v_46 = (equal(v_47, v_46) ? lisp_true : nil);
    goto v_11;
    v_46 = nil;
v_11:
    if (v_46 == nil) goto v_7;
    v_46 = v_49;
    goto v_5;
v_7:
    v_47 = v_49;
    v_46 = qvalue(basic_elt(env, 1)); // !*xo
    {   LispObject fn = basic_elt(env, 3); // gfplus
    v_46 = (*qfn2(fn))(fn, v_47, v_46);
    }
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 4); // gfadjust
        return (*qfn1(fn))(fn, v_46);
    }
    v_46 = nil;
v_5:
    return onevalue(v_46);
}



// Code for simpabs

static LispObject CC_simpabs(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_65 = stack[0];
    if (v_65 == nil) goto v_10;
    else goto v_11;
v_10:
    v_65 = lisp_true;
    goto v_9;
v_11:
    v_65 = stack[0];
    if (!car_legal(v_65)) v_65 = cdrerror(v_65); else
    v_65 = cdr(v_65);
    goto v_9;
    v_65 = nil;
v_9:
    if (v_65 == nil) goto v_7;
    stack[-1] = basic_elt(env, 1); // abs
    v_65 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // revlis
    v_65 = (*qfn1(fn))(fn, v_65);
    }
    env = stack[-2];
    v_66 = cons(stack[-1], v_65);
    env = stack[-2];
    v_65 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {
        LispObject fn = basic_elt(env, 3); // mksq
        return (*qfn2(fn))(fn, v_66, v_65);
    }
v_7:
    v_65 = stack[0];
    if (!car_legal(v_65)) v_65 = carerror(v_65); else
    v_65 = car(v_65);
    stack[0] = v_65;
    v_65 = stack[0];
    if (is_number(v_65)) goto v_33;
    else goto v_34;
v_33:
    v_65 = stack[0];
    v_66 = Labsval(nil, v_65);
    v_65 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_66, v_65);
v_34:
    v_65 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // sign!-abs
    v_65 = (*qfn1(fn))(fn, v_65);
    }
    env = stack[-2];
    v_66 = v_65;
    if (v_65 == nil) goto v_41;
    v_65 = v_66;
    goto v_28;
v_41:
    v_65 = stack[0];
    {   LispObject fn = basic_elt(env, 5); // simp!*
    v_65 = (*qfn1(fn))(fn, v_65);
    }
    env = stack[-2];
    stack[0] = v_65;
    v_65 = stack[0];
    if (!car_legal(v_65)) v_65 = carerror(v_65); else
    v_65 = car(v_65);
    if (v_65 == nil) goto v_49;
    else goto v_50;
v_49:
    v_66 = nil;
    v_65 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_66, v_65);
v_50:
    v_65 = stack[0];
    if (!car_legal(v_65)) v_65 = carerror(v_65); else
    v_65 = car(v_65);
    {   LispObject fn = basic_elt(env, 6); // simpabs1
    stack[-1] = (*qfn1(fn))(fn, v_65);
    }
    env = stack[-2];
    v_65 = stack[0];
    if (!car_legal(v_65)) v_65 = cdrerror(v_65); else
    v_65 = cdr(v_65);
    {   LispObject fn = basic_elt(env, 6); // simpabs1
    v_65 = (*qfn1(fn))(fn, v_65);
    }
    env = stack[-2];
    {
        LispObject v_69 = stack[-1];
        LispObject fn = basic_elt(env, 7); // quotsq
        return (*qfn2(fn))(fn, v_69, v_65);
    }
    v_65 = nil;
v_28:
    goto v_5;
    v_65 = nil;
v_5:
    return onevalue(v_65);
}



// Code for !*sf2ex

static LispObject CC_Hsf2ex(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_64 = stack[-1];
    if (v_64 == nil) goto v_11;
    else goto v_12;
v_11:
    v_64 = stack[-2];
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn1(fn))(fn, v_64);
    }
v_12:
    v_64 = stack[-1];
    if (!consp(v_64)) goto v_24;
    else goto v_25;
v_24:
    v_64 = lisp_true;
    goto v_23;
v_25:
    v_64 = stack[-1];
    if (!car_legal(v_64)) v_64 = carerror(v_64); else
    v_64 = car(v_64);
    v_64 = (consp(v_64) ? nil : lisp_true);
    goto v_23;
    v_64 = nil;
v_23:
    if (v_64 == nil) goto v_21;
    v_64 = lisp_true;
    goto v_19;
v_21:
    v_64 = stack[-1];
    if (!car_legal(v_64)) v_64 = carerror(v_64); else
    v_64 = car(v_64);
    if (!car_legal(v_64)) v_64 = carerror(v_64); else
    v_64 = car(v_64);
    if (!car_legal(v_64)) v_65 = carerror(v_64); else
    v_65 = car(v_64);
    v_64 = stack[0];
    v_64 = Lmemq(nil, v_65, v_64);
    v_64 = (v_64 == nil ? lisp_true : nil);
    goto v_19;
    v_64 = nil;
v_19:
    if (v_64 == nil) goto v_17;
    stack[0] = stack[-2];
    v_64 = nil;
    v_65 = ncons(v_64);
    env = stack[-3];
    v_64 = stack[-1];
    v_64 = cons(v_65, v_64);
    env = stack[-3];
    v_64 = ncons(v_64);
    env = stack[-3];
    {
        LispObject v_70 = stack[0];
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn2(fn))(fn, v_70, v_64);
    }
v_17:
    v_64 = stack[-1];
    if (!car_legal(v_64)) v_64 = carerror(v_64); else
    v_64 = car(v_64);
    if (!car_legal(v_64)) v_64 = carerror(v_64); else
    v_64 = car(v_64);
    if (!car_legal(v_64)) v_64 = carerror(v_64); else
    v_64 = car(v_64);
    v_66 = ncons(v_64);
    env = stack[-3];
    v_64 = stack[-1];
    if (!car_legal(v_64)) v_64 = carerror(v_64); else
    v_64 = car(v_64);
    if (!car_legal(v_64)) v_65 = cdrerror(v_64); else
    v_65 = cdr(v_64);
    v_64 = stack[-2];
    v_64 = acons(v_66, v_65, v_64);
    env = stack[-3];
    stack[-2] = v_64;
    v_64 = stack[-1];
    if (!car_legal(v_64)) v_64 = cdrerror(v_64); else
    v_64 = cdr(v_64);
    stack[-1] = v_64;
    goto v_8;
    v_64 = nil;
    return onevalue(v_64);
}



// Code for compactf3

static LispObject CC_compactf3(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    v_21 = v_2;
// end of prologue
// Binding mv!-vars!*
// FLUIDBIND: reloadenv=3 litvec-offset=1 saveloc=2
{   bind_fluid_stack bind_fluid_var(-3, 1, -2);
    setvalue(basic_elt(env, 1), nil); // mv!-vars!*
    v_20 = stack[0];
    setvalue(basic_elt(env, 1), v_20); // mv!-vars!*
    v_20 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // sf2mv
    v_22 = (*qfn2(fn))(fn, v_21, v_20);
    }
    env = stack[-3];
    v_21 = stack[-1];
    v_20 = nil;
    {   LispObject fn = basic_elt(env, 3); // mv!-compact
    v_21 = (*qfn3(fn))(fn, v_22, v_21, v_20);
    }
    env = stack[-3];
    v_20 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // mv2sf
    v_20 = (*qfn2(fn))(fn, v_21, v_20);
    }
    ;}  // end of a binding scope
    return onevalue(v_20);
}



// Code for extodd

static LispObject CC_extodd(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_59, v_60;
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
    v_59 = stack[0];
    if (!car_legal(v_59)) v_60 = carerror(v_59); else
    v_60 = car(v_59);
    v_59 = basic_elt(env, 1); // ext
    if (v_60 == v_59) goto v_11;
    v_59 = basic_elt(env, 2); // "the argument of extodd must be an ext variable"
    {   LispObject fn = basic_elt(env, 6); // rederr
    v_59 = (*qfn1(fn))(fn, v_59);
    }
    env = stack[-2];
    goto v_9;
v_11:
v_9:
    v_59 = stack[0];
    if (!car_legal(v_59)) v_59 = cdrerror(v_59); else
    v_59 = cdr(v_59);
    if (!car_legal(v_59)) v_59 = carerror(v_59); else
    v_59 = car(v_59);
    stack[-1] = v_59;
    v_59 = stack[-1];
    if (is_number(v_59)) goto v_22;
    else goto v_23;
v_22:
    v_60 = stack[-1];
    v_59 = qvalue(basic_elt(env, 3)); // n_all_parametric_ext
    v_59 = static_cast<LispObject>(greaterp2(v_60, v_59));
    v_59 = v_59 ? lisp_true : nil;
    env = stack[-2];
    if (v_59 == nil) goto v_28;
    stack[0] = qvalue(basic_elt(env, 4)); // all_principal_odd!*
    v_60 = stack[-1];
    v_59 = qvalue(basic_elt(env, 3)); // n_all_parametric_ext
    v_59 = difference2(v_60, v_59);
    env = stack[-2];
    {
        LispObject v_63 = stack[0];
        LispObject fn = basic_elt(env, 7); // nth
        return (*qfn2(fn))(fn, v_63, v_59);
    }
v_28:
    v_60 = qvalue(basic_elt(env, 5)); // all_parametric_odd!*
    v_59 = stack[-1];
    {
        LispObject fn = basic_elt(env, 7); // nth
        return (*qfn2(fn))(fn, v_60, v_59);
    }
    v_59 = nil;
    goto v_6;
v_23:
    v_60 = stack[-1];
    v_59 = qvalue(basic_elt(env, 5)); // all_parametric_odd!*
    v_59 = Lmember(nil, v_60, v_59);
    if (v_59 == nil) goto v_46;
    else goto v_44;
v_46:
    v_60 = stack[-1];
    v_59 = qvalue(basic_elt(env, 4)); // all_principal_odd!*
    v_59 = Lmember(nil, v_60, v_59);
    if (v_59 == nil) goto v_50;
    else goto v_44;
v_50:
    goto v_45;
v_44:
    v_59 = stack[-1];
    goto v_6;
v_45:
    v_59 = basic_elt(env, 2); // "the argument of extodd must be an ext variable"
    {   LispObject fn = basic_elt(env, 6); // rederr
    v_59 = (*qfn1(fn))(fn, v_59);
    }
    goto v_43;
v_43:
    v_59 = nil;
v_6:
    return onevalue(v_59);
}



// Code for ofsf_facneq!*

static LispObject CC_ofsf_facneqH(LispObject env,
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
    v_28 = basic_elt(env, 4); // and
    if (v_29 == v_28) goto v_17;
    else goto v_14;
v_17:
    goto v_11;
v_14:
    goto v_8;
v_11:
    v_28 = v_30;
    {
        LispObject fn = basic_elt(env, 6); // ofsf_facneq
        return (*qfn1(fn))(fn, v_28);
    }
v_8:
    v_29 = basic_elt(env, 5); // neq
    v_28 = nil;
    return list3(v_29, v_30, v_28);
    v_28 = nil;
    return onevalue(v_28);
}



// Code for cl_subfof1

static LispObject CC_cl_subfof1(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_495, v_496, v_497;
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
    real_push(nil);
    stack_popper stack_popper_var(12);
// copy arguments values to proper place
    stack[-7] = v_5;
    stack[-8] = v_4;
    v_497 = v_3;
    stack[-9] = v_2;
// end of prologue
    v_495 = v_497;
    if (!consp(v_495)) goto v_16;
    else goto v_17;
v_16:
    v_495 = v_497;
    goto v_15;
v_17:
    v_495 = v_497;
    if (!car_legal(v_495)) v_495 = carerror(v_495); else
    v_495 = car(v_495);
    goto v_15;
    v_495 = nil;
v_15:
    stack[-6] = v_495;
    v_496 = stack[-6];
    v_495 = basic_elt(env, 1); // true
    if (v_496 == v_495) goto v_30;
    else goto v_31;
v_30:
    v_495 = lisp_true;
    goto v_29;
v_31:
    v_496 = stack[-6];
    v_495 = basic_elt(env, 2); // false
    v_495 = (v_496 == v_495 ? lisp_true : nil);
    goto v_29;
    v_495 = nil;
v_29:
    if (v_495 == nil) goto v_27;
    v_495 = v_497;
    goto v_13;
v_27:
    v_496 = stack[-6];
    v_495 = basic_elt(env, 3); // ex
    if (v_496 == v_495) goto v_47;
    else goto v_48;
v_47:
    v_495 = lisp_true;
    goto v_46;
v_48:
    v_496 = stack[-6];
    v_495 = basic_elt(env, 4); // all
    v_495 = (v_496 == v_495 ? lisp_true : nil);
    goto v_46;
    v_495 = nil;
v_46:
    if (v_495 == nil) goto v_44;
    v_495 = v_497;
    if (!car_legal(v_495)) v_495 = cdrerror(v_495); else
    v_495 = cdr(v_495);
    if (!car_legal(v_495)) v_495 = carerror(v_495); else
    v_495 = car(v_495);
    stack[-5] = v_495;
    v_495 = v_497;
    if (!car_legal(v_495)) v_495 = cdrerror(v_495); else
    v_495 = cdr(v_495);
    if (!car_legal(v_495)) v_495 = cdrerror(v_495); else
    v_495 = cdr(v_495);
    if (!car_legal(v_495)) v_495 = carerror(v_495); else
    v_495 = car(v_495);
    stack[-4] = v_495;
    v_495 = stack[-9];
    stack[-3] = v_495;
v_69:
    v_495 = stack[-3];
    if (v_495 == nil) goto v_74;
    else goto v_75;
v_74:
    v_495 = nil;
    goto v_68;
v_75:
    v_495 = stack[-3];
    if (!car_legal(v_495)) v_495 = carerror(v_495); else
    v_495 = car(v_495);
    v_497 = v_495;
    v_496 = v_497;
    v_495 = stack[-5];
    if (!consp(v_496)) goto v_83;
    v_496 = car(v_496);
    if (v_496 == v_495) goto v_84;
v_83:
    v_495 = v_497;
    v_495 = ncons(v_495);
    env = stack[-11];
    goto v_82;
v_84:
    v_495 = nil;
v_82:
    stack[-2] = v_495;
    v_495 = stack[-2];
    {   LispObject fn = basic_elt(env, 13); // lastpair
    v_495 = (*qfn1(fn))(fn, v_495);
    }
    env = stack[-11];
    stack[-1] = v_495;
    v_495 = stack[-3];
    if (!car_legal(v_495)) v_495 = cdrerror(v_495); else
    v_495 = cdr(v_495);
    stack[-3] = v_495;
    v_495 = stack[-1];
    if (!consp(v_495)) goto v_96;
    else goto v_97;
v_96:
    goto v_69;
v_97:
v_70:
    v_495 = stack[-3];
    if (v_495 == nil) goto v_101;
    else goto v_102;
v_101:
    v_495 = stack[-2];
    goto v_68;
v_102:
    stack[0] = stack[-1];
    v_495 = stack[-3];
    if (!car_legal(v_495)) v_495 = carerror(v_495); else
    v_495 = car(v_495);
    v_497 = v_495;
    v_496 = v_497;
    v_495 = stack[-5];
    if (!consp(v_496)) goto v_111;
    v_496 = car(v_496);
    if (v_496 == v_495) goto v_112;
v_111:
    v_495 = v_497;
    v_495 = ncons(v_495);
    env = stack[-11];
    goto v_110;
v_112:
    v_495 = nil;
v_110:
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_495);
    v_495 = stack[-1];
    {   LispObject fn = basic_elt(env, 13); // lastpair
    v_495 = (*qfn1(fn))(fn, v_495);
    }
    env = stack[-11];
    stack[-1] = v_495;
    v_495 = stack[-3];
    if (!car_legal(v_495)) v_495 = cdrerror(v_495); else
    v_495 = cdr(v_495);
    stack[-3] = v_495;
    goto v_70;
v_68:
    stack[-9] = v_495;
    v_495 = stack[-8];
    stack[-3] = v_495;
v_128:
    v_495 = stack[-3];
    if (v_495 == nil) goto v_133;
    else goto v_134;
v_133:
    v_495 = nil;
    goto v_127;
v_134:
    v_495 = stack[-3];
    if (!car_legal(v_495)) v_495 = carerror(v_495); else
    v_495 = car(v_495);
    v_497 = v_495;
    v_496 = v_497;
    v_495 = stack[-5];
    if (!consp(v_496)) goto v_142;
    v_496 = car(v_496);
    if (v_496 == v_495) goto v_143;
v_142:
    v_495 = v_497;
    v_495 = ncons(v_495);
    env = stack[-11];
    goto v_141;
v_143:
    v_495 = nil;
v_141:
    stack[-2] = v_495;
    v_495 = stack[-2];
    {   LispObject fn = basic_elt(env, 13); // lastpair
    v_495 = (*qfn1(fn))(fn, v_495);
    }
    env = stack[-11];
    stack[-1] = v_495;
    v_495 = stack[-3];
    if (!car_legal(v_495)) v_495 = cdrerror(v_495); else
    v_495 = cdr(v_495);
    stack[-3] = v_495;
    v_495 = stack[-1];
    if (!consp(v_495)) goto v_155;
    else goto v_156;
v_155:
    goto v_128;
v_156:
v_129:
    v_495 = stack[-3];
    if (v_495 == nil) goto v_160;
    else goto v_161;
v_160:
    v_495 = stack[-2];
    goto v_127;
v_161:
    stack[0] = stack[-1];
    v_495 = stack[-3];
    if (!car_legal(v_495)) v_495 = carerror(v_495); else
    v_495 = car(v_495);
    v_497 = v_495;
    v_496 = v_497;
    v_495 = stack[-5];
    if (!consp(v_496)) goto v_170;
    v_496 = car(v_496);
    if (v_496 == v_495) goto v_171;
v_170:
    v_495 = v_497;
    v_495 = ncons(v_495);
    env = stack[-11];
    goto v_169;
v_171:
    v_495 = nil;
v_169:
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_495);
    v_495 = stack[-1];
    {   LispObject fn = basic_elt(env, 13); // lastpair
    v_495 = (*qfn1(fn))(fn, v_495);
    }
    env = stack[-11];
    stack[-1] = v_495;
    v_495 = stack[-3];
    if (!car_legal(v_495)) v_495 = cdrerror(v_495); else
    v_495 = cdr(v_495);
    stack[-3] = v_495;
    goto v_129;
v_127:
    stack[-8] = v_495;
    stack[-2] = stack[-5];
    stack[-1] = stack[-4];
    stack[0] = stack[-8];
    v_495 = stack[-7];
    v_495 = ncons(v_495);
    env = stack[-11];
    {   LispObject fn = basic_elt(env, 14); // cl_newv
    v_495 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_495);
    }
    env = stack[-11];
    stack[0] = v_495;
    v_496 = stack[0];
    v_495 = stack[-5];
    if (equal(v_496, v_495)) goto v_191;
    v_496 = stack[0];
    v_495 = stack[-7];
    v_495 = cons(v_496, v_495);
    env = stack[-11];
    stack[-7] = v_495;
    v_497 = stack[0];
    v_496 = stack[-5];
    v_495 = stack[-4];
    {   LispObject fn = basic_elt(env, 15); // cl_subvarsubstat
    v_495 = (*qfn3(fn))(fn, v_497, v_496, v_495);
    }
    env = stack[-11];
    stack[-4] = v_495;
    goto v_189;
v_191:
v_189:
    stack[-1] = stack[-6];
    stack[-2] = stack[-9];
    stack[-3] = stack[-4];
    stack[-4] = stack[-8];
    v_495 = stack[-7];
    v_495 = ncons(v_495);
    env = stack[-11];
    {   LispObject fn = basic_elt(env, 0); // cl_subfof1
    v_495 = (*qfn4up(fn))(fn, stack[-2], stack[-3], stack[-4], v_495);
    }
    {
        LispObject v_509 = stack[-1];
        LispObject v_510 = stack[0];
        return list3(v_509, v_510, v_495);
    }
v_44:
    v_496 = stack[-6];
    v_495 = basic_elt(env, 5); // bex
    if (v_496 == v_495) goto v_216;
    else goto v_217;
v_216:
    v_495 = lisp_true;
    goto v_215;
v_217:
    v_496 = stack[-6];
    v_495 = basic_elt(env, 6); // ball
    v_495 = (v_496 == v_495 ? lisp_true : nil);
    goto v_215;
    v_495 = nil;
v_215:
    if (v_495 == nil) goto v_213;
    v_495 = v_497;
    if (!car_legal(v_495)) v_495 = cdrerror(v_495); else
    v_495 = cdr(v_495);
    if (!car_legal(v_495)) v_495 = carerror(v_495); else
    v_495 = car(v_495);
    stack[-5] = v_495;
    v_495 = v_497;
    if (!car_legal(v_495)) v_495 = cdrerror(v_495); else
    v_495 = cdr(v_495);
    if (!car_legal(v_495)) v_495 = cdrerror(v_495); else
    v_495 = cdr(v_495);
    if (!car_legal(v_495)) v_495 = carerror(v_495); else
    v_495 = car(v_495);
    stack[-4] = v_495;
    v_495 = v_497;
    if (!car_legal(v_495)) v_495 = cdrerror(v_495); else
    v_495 = cdr(v_495);
    if (!car_legal(v_495)) v_495 = cdrerror(v_495); else
    v_495 = cdr(v_495);
    if (!car_legal(v_495)) v_495 = cdrerror(v_495); else
    v_495 = cdr(v_495);
    if (!car_legal(v_495)) v_495 = carerror(v_495); else
    v_495 = car(v_495);
    stack[-3] = v_495;
    v_495 = stack[-9];
    stack[-9] = v_495;
v_243:
    v_495 = stack[-9];
    if (v_495 == nil) goto v_248;
    else goto v_249;
v_248:
    v_495 = nil;
    goto v_242;
v_249:
    v_495 = stack[-9];
    if (!car_legal(v_495)) v_495 = carerror(v_495); else
    v_495 = car(v_495);
    v_497 = v_495;
    v_496 = v_497;
    v_495 = stack[-5];
    if (!consp(v_496)) goto v_257;
    v_496 = car(v_496);
    if (v_496 == v_495) goto v_258;
v_257:
    v_495 = v_497;
    v_495 = ncons(v_495);
    env = stack[-11];
    goto v_256;
v_258:
    v_495 = nil;
v_256:
    stack[-2] = v_495;
    v_495 = stack[-2];
    {   LispObject fn = basic_elt(env, 13); // lastpair
    v_495 = (*qfn1(fn))(fn, v_495);
    }
    env = stack[-11];
    stack[-1] = v_495;
    v_495 = stack[-9];
    if (!car_legal(v_495)) v_495 = cdrerror(v_495); else
    v_495 = cdr(v_495);
    stack[-9] = v_495;
    v_495 = stack[-1];
    if (!consp(v_495)) goto v_270;
    else goto v_271;
v_270:
    goto v_243;
v_271:
v_244:
    v_495 = stack[-9];
    if (v_495 == nil) goto v_275;
    else goto v_276;
v_275:
    v_495 = stack[-2];
    goto v_242;
v_276:
    stack[0] = stack[-1];
    v_495 = stack[-9];
    if (!car_legal(v_495)) v_495 = carerror(v_495); else
    v_495 = car(v_495);
    v_497 = v_495;
    v_496 = v_497;
    v_495 = stack[-5];
    if (!consp(v_496)) goto v_285;
    v_496 = car(v_496);
    if (v_496 == v_495) goto v_286;
v_285:
    v_495 = v_497;
    v_495 = ncons(v_495);
    env = stack[-11];
    goto v_284;
v_286:
    v_495 = nil;
v_284:
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_495);
    v_495 = stack[-1];
    {   LispObject fn = basic_elt(env, 13); // lastpair
    v_495 = (*qfn1(fn))(fn, v_495);
    }
    env = stack[-11];
    stack[-1] = v_495;
    v_495 = stack[-9];
    if (!car_legal(v_495)) v_495 = cdrerror(v_495); else
    v_495 = cdr(v_495);
    stack[-9] = v_495;
    goto v_244;
v_242:
    stack[-9] = v_495;
    v_495 = stack[-8];
    stack[-8] = v_495;
v_302:
    v_495 = stack[-8];
    if (v_495 == nil) goto v_307;
    else goto v_308;
v_307:
    v_495 = nil;
    goto v_301;
v_308:
    v_495 = stack[-8];
    if (!car_legal(v_495)) v_495 = carerror(v_495); else
    v_495 = car(v_495);
    v_497 = v_495;
    v_496 = v_497;
    v_495 = stack[-5];
    if (!consp(v_496)) goto v_316;
    v_496 = car(v_496);
    if (v_496 == v_495) goto v_317;
v_316:
    v_495 = v_497;
    v_495 = ncons(v_495);
    env = stack[-11];
    goto v_315;
v_317:
    v_495 = nil;
v_315:
    stack[-2] = v_495;
    v_495 = stack[-2];
    {   LispObject fn = basic_elt(env, 13); // lastpair
    v_495 = (*qfn1(fn))(fn, v_495);
    }
    env = stack[-11];
    stack[-1] = v_495;
    v_495 = stack[-8];
    if (!car_legal(v_495)) v_495 = cdrerror(v_495); else
    v_495 = cdr(v_495);
    stack[-8] = v_495;
    v_495 = stack[-1];
    if (!consp(v_495)) goto v_329;
    else goto v_330;
v_329:
    goto v_302;
v_330:
v_303:
    v_495 = stack[-8];
    if (v_495 == nil) goto v_334;
    else goto v_335;
v_334:
    v_495 = stack[-2];
    goto v_301;
v_335:
    stack[0] = stack[-1];
    v_495 = stack[-8];
    if (!car_legal(v_495)) v_495 = carerror(v_495); else
    v_495 = car(v_495);
    v_497 = v_495;
    v_496 = v_497;
    v_495 = stack[-5];
    if (!consp(v_496)) goto v_344;
    v_496 = car(v_496);
    if (v_496 == v_495) goto v_345;
v_344:
    v_495 = v_497;
    v_495 = ncons(v_495);
    env = stack[-11];
    goto v_343;
v_345:
    v_495 = nil;
v_343:
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_495);
    v_495 = stack[-1];
    {   LispObject fn = basic_elt(env, 13); // lastpair
    v_495 = (*qfn1(fn))(fn, v_495);
    }
    env = stack[-11];
    stack[-1] = v_495;
    v_495 = stack[-8];
    if (!car_legal(v_495)) v_495 = cdrerror(v_495); else
    v_495 = cdr(v_495);
    stack[-8] = v_495;
    goto v_303;
v_301:
    stack[-8] = v_495;
    stack[-2] = stack[-5];
    stack[-1] = stack[-4];
    stack[0] = stack[-8];
    v_495 = stack[-7];
    v_495 = ncons(v_495);
    env = stack[-11];
    {   LispObject fn = basic_elt(env, 14); // cl_newv
    v_495 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_495);
    }
    env = stack[-11];
    stack[0] = v_495;
    v_496 = stack[0];
    v_495 = stack[-5];
    if (equal(v_496, v_495)) goto v_365;
    v_496 = stack[0];
    v_495 = stack[-7];
    v_495 = cons(v_496, v_495);
    env = stack[-11];
    stack[-7] = v_495;
    v_497 = stack[0];
    v_496 = stack[-5];
    v_495 = stack[-4];
    {   LispObject fn = basic_elt(env, 15); // cl_subvarsubstat
    v_495 = (*qfn3(fn))(fn, v_497, v_496, v_495);
    }
    env = stack[-11];
    stack[-4] = v_495;
    goto v_363;
v_365:
v_363:
    stack[-5] = stack[-6];
    stack[-2] = stack[0];
    stack[-1] = stack[-9];
    stack[0] = stack[-8];
    v_495 = stack[-7];
    v_495 = ncons(v_495);
    env = stack[-11];
    {   LispObject fn = basic_elt(env, 0); // cl_subfof1
    stack[0] = (*qfn4up(fn))(fn, stack[-1], stack[-4], stack[0], v_495);
    }
    env = stack[-11];
    stack[-1] = stack[-9];
    stack[-4] = stack[-8];
    v_495 = stack[-7];
    v_495 = ncons(v_495);
    env = stack[-11];
    {   LispObject fn = basic_elt(env, 0); // cl_subfof1
    v_495 = (*qfn4up(fn))(fn, stack[-1], stack[-3], stack[-4], v_495);
    }
    {
        LispObject v_511 = stack[-5];
        LispObject v_512 = stack[-2];
        LispObject v_513 = stack[0];
        return list4(v_511, v_512, v_513, v_495);
    }
v_213:
    v_496 = stack[-6];
    v_495 = basic_elt(env, 7); // or
    if (v_496 == v_495) goto v_404;
    else goto v_405;
v_404:
    v_495 = lisp_true;
    goto v_403;
v_405:
    v_496 = stack[-6];
    v_495 = basic_elt(env, 8); // and
    v_495 = (v_496 == v_495 ? lisp_true : nil);
    goto v_403;
    v_495 = nil;
v_403:
    if (v_495 == nil) goto v_401;
    v_495 = lisp_true;
    goto v_399;
v_401:
    v_496 = stack[-6];
    v_495 = basic_elt(env, 9); // not
    v_495 = (v_496 == v_495 ? lisp_true : nil);
    goto v_399;
    v_495 = nil;
v_399:
    if (v_495 == nil) goto v_397;
    v_495 = lisp_true;
    goto v_395;
v_397:
    v_496 = stack[-6];
    v_495 = basic_elt(env, 10); // impl
    if (v_496 == v_495) goto v_425;
    else goto v_426;
v_425:
    v_495 = lisp_true;
    goto v_424;
v_426:
    v_496 = stack[-6];
    v_495 = basic_elt(env, 11); // repl
    if (v_496 == v_495) goto v_434;
    else goto v_435;
v_434:
    v_495 = lisp_true;
    goto v_433;
v_435:
    v_496 = stack[-6];
    v_495 = basic_elt(env, 12); // equiv
    v_495 = (v_496 == v_495 ? lisp_true : nil);
    goto v_433;
    v_495 = nil;
v_433:
    goto v_424;
    v_495 = nil;
v_424:
    goto v_395;
    v_495 = nil;
v_395:
    if (v_495 == nil) goto v_393;
    stack[-10] = stack[-6];
    v_495 = v_497;
    if (!car_legal(v_495)) v_495 = cdrerror(v_495); else
    v_495 = cdr(v_495);
    stack[-6] = v_495;
    v_495 = stack[-6];
    if (v_495 == nil) goto v_456;
    else goto v_457;
v_456:
    v_495 = nil;
    goto v_450;
v_457:
    v_495 = stack[-6];
    if (!car_legal(v_495)) v_495 = carerror(v_495); else
    v_495 = car(v_495);
    stack[-2] = stack[-9];
    stack[-1] = v_495;
    stack[0] = stack[-8];
    v_495 = stack[-7];
    v_495 = ncons(v_495);
    env = stack[-11];
    {   LispObject fn = basic_elt(env, 0); // cl_subfof1
    v_495 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_495);
    }
    env = stack[-11];
    v_495 = ncons(v_495);
    env = stack[-11];
    stack[-4] = v_495;
    stack[-5] = v_495;
v_451:
    v_495 = stack[-6];
    if (!car_legal(v_495)) v_495 = cdrerror(v_495); else
    v_495 = cdr(v_495);
    stack[-6] = v_495;
    v_495 = stack[-6];
    if (v_495 == nil) goto v_474;
    else goto v_475;
v_474:
    v_495 = stack[-5];
    goto v_450;
v_475:
    stack[-3] = stack[-4];
    v_495 = stack[-6];
    if (!car_legal(v_495)) v_495 = carerror(v_495); else
    v_495 = car(v_495);
    stack[-2] = stack[-9];
    stack[-1] = v_495;
    stack[0] = stack[-8];
    v_495 = stack[-7];
    v_495 = ncons(v_495);
    env = stack[-11];
    {   LispObject fn = basic_elt(env, 0); // cl_subfof1
    v_495 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_495);
    }
    env = stack[-11];
    v_495 = ncons(v_495);
    env = stack[-11];
    if (!car_legal(stack[-3])) rplacd_fails(stack[-3]);
    setcdr(stack[-3], v_495);
    v_495 = stack[-4];
    if (!car_legal(v_495)) v_495 = cdrerror(v_495); else
    v_495 = cdr(v_495);
    stack[-4] = v_495;
    goto v_451;
v_450:
    {
        LispObject v_514 = stack[-10];
        return cons(v_514, v_495);
    }
v_393:
    v_495 = stack[-9];
    v_496 = v_497;
    {
        LispObject fn = basic_elt(env, 16); // rl_subat
        return (*qfn2(fn))(fn, v_495, v_496);
    }
v_13:
    return onevalue(v_495);
}



// Code for applyml

static LispObject CC_applyml(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
    stack_popper stack_popper_var(1);
// end of prologue
    {   LispObject fn = basic_elt(env, 6); // lex
    v_48 = (*qfn0(fn))(fn);
    }
    env = stack[0];
    v_48 = qvalue(basic_elt(env, 1)); // char
    {   LispObject fn = basic_elt(env, 7); // compress!*
    v_49 = (*qfn1(fn))(fn, v_48);
    }
    env = stack[0];
    v_48 = qvalue(basic_elt(env, 2)); // rdlist!*
    v_49 = Lassoc(nil, v_49, v_48);
    v_48 = v_49;
    if (v_49 == nil) goto v_10;
    v_49 = v_48;
    if (!car_legal(v_49)) v_49 = cdrerror(v_49); else
    v_49 = cdr(v_49);
    if (!car_legal(v_49)) v_49 = carerror(v_49); else
    v_49 = car(v_49);
    if (!car_legal(v_48)) v_48 = cdrerror(v_48); else
    v_48 = cdr(v_48);
    if (!car_legal(v_48)) v_48 = cdrerror(v_48); else
    v_48 = cdr(v_48);
    {
        LispObject fn = basic_elt(env, 8); // apply
        return (*qfn2(fn))(fn, v_49, v_48);
    }
v_10:
    v_49 = qvalue(basic_elt(env, 1)); // char
    v_48 = basic_elt(env, 3); // (i d e n t !/)
    if (equal(v_49, v_48)) goto v_26;
    else goto v_27;
v_26:
    v_48 = lisp_true;
    goto v_25;
v_27:
    v_49 = qvalue(basic_elt(env, 1)); // char
    v_48 = basic_elt(env, 4); // (c o m p o s e !/)
    v_48 = (equal(v_49, v_48) ? lisp_true : nil);
    goto v_25;
    v_48 = nil;
v_25:
    if (v_48 == nil) goto v_23;
    v_48 = nil;
    goto v_5;
v_23:
    v_49 = qvalue(basic_elt(env, 1)); // char
    v_48 = basic_elt(env, 5); // (i n v e r s e !/)
    if (equal(v_49, v_48)) goto v_37;
    else goto v_38;
v_37:
    v_48 = lisp_true;
    goto v_5;
v_38:
    v_48 = qvalue(basic_elt(env, 1)); // char
    {   LispObject fn = basic_elt(env, 7); // compress!*
    v_49 = (*qfn1(fn))(fn, v_48);
    }
    env = stack[0];
    v_48 = static_cast<LispObject>(272)+TAG_FIXNUM; // 17
    {   LispObject fn = basic_elt(env, 9); // errorml
    v_48 = (*qfn2(fn))(fn, v_49, v_48);
    }
    goto v_8;
v_8:
    v_48 = nil;
v_5:
    return onevalue(v_48);
}



// Code for product!-set2

static LispObject CC_productKset2(LispObject env,
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
    real_push(nil, nil, nil, nil, nil);
    stack_popper stack_popper_var(6);
// copy arguments values to proper place
    stack[-3] = v_3;
    v_46 = v_2;
// end of prologue
    stack[-4] = nil;
    stack[-2] = v_46;
v_11:
    v_46 = stack[-2];
    if (v_46 == nil) goto v_15;
    else goto v_16;
v_15:
    goto v_10;
v_16:
    v_46 = stack[-2];
    if (!car_legal(v_46)) v_46 = carerror(v_46); else
    v_46 = car(v_46);
    stack[-1] = v_46;
    v_46 = stack[-3];
    stack[0] = v_46;
v_25:
    v_46 = stack[0];
    if (v_46 == nil) goto v_29;
    else goto v_30;
v_29:
    goto v_24;
v_30:
    v_46 = stack[0];
    if (!car_legal(v_46)) v_46 = carerror(v_46); else
    v_46 = car(v_46);
    v_47 = stack[-1];
    v_47 = list2(v_47, v_46);
    env = stack[-5];
    v_46 = stack[-4];
    v_46 = cons(v_47, v_46);
    env = stack[-5];
    stack[-4] = v_46;
    v_46 = stack[0];
    if (!car_legal(v_46)) v_46 = cdrerror(v_46); else
    v_46 = cdr(v_46);
    stack[0] = v_46;
    goto v_25;
v_24:
    v_46 = stack[-2];
    if (!car_legal(v_46)) v_46 = cdrerror(v_46); else
    v_46 = cdr(v_46);
    stack[-2] = v_46;
    goto v_11;
v_10:
    v_46 = stack[-4];
    return onevalue(v_46);
}



// Code for dip!-nc!-m!*p!-distleft

static LispObject CC_dipKncKmHpKdistleft(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_39, v_40, v_41;
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
    v_39 = stack[-1];
    if (v_39 == nil) goto v_8;
    else goto v_9;
v_8:
    v_39 = nil;
    goto v_7;
v_9:
    v_39 = stack[-1];
    if (!car_legal(v_39)) v_39 = carerror(v_39); else
    v_39 = car(v_39);
    stack[-4] = v_39;
    v_39 = stack[-1];
    if (!car_legal(v_39)) v_39 = cdrerror(v_39); else
    v_39 = cdr(v_39);
    if (!car_legal(v_39)) v_39 = carerror(v_39); else
    v_39 = car(v_39);
    stack[0] = v_39;
    v_41 = stack[-3];
    v_40 = stack[-2];
    v_39 = stack[-1];
    if (!car_legal(v_39)) v_39 = cdrerror(v_39); else
    v_39 = cdr(v_39);
    if (!car_legal(v_39)) v_39 = cdrerror(v_39); else
    v_39 = cdr(v_39);
    {   LispObject fn = basic_elt(env, 0); // dip!-nc!-m!*p!-distleft
    v_39 = (*qfn3(fn))(fn, v_41, v_40, v_39);
    }
    env = stack[-5];
    stack[-1] = v_39;
    v_39 = stack[-4];
    v_39 = ncons(v_39);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 1); // dip!-nc!-ev!-prod
    v_39 = (*qfn4up(fn))(fn, stack[-3], stack[-2], stack[0], v_39);
    }
    env = stack[-5];
    v_40 = stack[-1];
    {
        LispObject fn = basic_elt(env, 2); // dipsum
        return (*qfn2(fn))(fn, v_40, v_39);
    }
    goto v_7;
    v_39 = nil;
v_7:
    return onevalue(v_39);
}



// Code for vdplsortin

static LispObject CC_vdplsortin(LispObject env,
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
    v_20 = v_2;
// end of prologue
    v_19 = stack[0];
    if (v_19 == nil) goto v_7;
    else goto v_8;
v_7:
    v_19 = v_20;
    return ncons(v_19);
v_8:
    v_21 = v_20;
    v_20 = stack[0];
    v_19 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // vdplsortin1
    v_19 = (*qfn3(fn))(fn, v_21, v_20, v_19);
    }
    v_19 = stack[0];
    goto v_6;
    v_19 = nil;
v_6:
    return onevalue(v_19);
}



// Code for validrule

static LispObject CC_validrule(LispObject env,
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
    v_17 = v_2;
// end of prologue
    {   LispObject fn = basic_elt(env, 1); // validrule1
    v_17 = (*qfn1(fn))(fn, v_17);
    }
    v_18 = v_17;
    v_17 = v_18;
    if (v_17 == nil) goto v_9;
    else goto v_10;
v_9:
    v_17 = nil;
    goto v_8;
v_10:
    v_17 = v_18;
    return ncons(v_17);
    v_17 = nil;
v_8:
    return onevalue(v_17);
}



// Code for preproc1

static LispObject CC_preproc1(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_621, v_622, v_623;
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
    stack[-1] = v_2;
// end of prologue
v_6:
    v_621 = stack[-1];
    if (!consp(v_621)) goto v_9;
    else goto v_10;
v_9:
    v_621 = stack[-1];
    return ncons(v_621);
v_10:
    v_621 = stack[-1];
    if (!car_legal(v_621)) v_622 = carerror(v_621); else
    v_622 = car(v_621);
    v_621 = basic_elt(env, 1); // !:rd!:
    if (v_622 == v_621) goto v_14;
    else goto v_15;
v_14:
    v_621 = stack[-1];
    if (!car_legal(v_621)) v_621 = cdrerror(v_621); else
    v_621 = cdr(v_621);
    if (!consp(v_621)) goto v_22;
    else goto v_23;
v_22:
    v_621 = stack[-1];
    if (!car_legal(v_621)) v_621 = cdrerror(v_621); else
    v_621 = cdr(v_621);
    v_621 = Lfloatp(nil, v_621);
    env = stack[-5];
    if (v_621 == nil) goto v_29;
    v_621 = stack[-1];
    if (!car_legal(v_621)) v_621 = cdrerror(v_621); else
    v_621 = cdr(v_621);
    {   LispObject fn = basic_elt(env, 19); // fl2bf
    v_621 = (*qfn1(fn))(fn, v_621);
    }
    goto v_27;
v_29:
    v_621 = stack[-1];
    if (!car_legal(v_621)) v_621 = cdrerror(v_621); else
    v_621 = cdr(v_621);
    if (!consp(v_621)) goto v_42;
    v_621 = stack[-1];
    if (!car_legal(v_621)) v_621 = cdrerror(v_621); else
    v_621 = cdr(v_621);
    goto v_40;
v_42:
    v_621 = stack[-1];
    if (!car_legal(v_621)) v_621 = cdrerror(v_621); else
    v_621 = cdr(v_621);
    v_621 = integerp(v_621);
    if (v_621 == nil) goto v_48;
    v_623 = basic_elt(env, 1); // !:rd!:
    v_621 = stack[-1];
    if (!car_legal(v_621)) v_622 = cdrerror(v_621); else
    v_622 = cdr(v_621);
    v_621 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_621 = list2star(v_623, v_622, v_621);
    env = stack[-5];
    goto v_40;
v_48:
    v_621 = stack[-1];
    if (!car_legal(v_621)) v_621 = cdrerror(v_621); else
    v_621 = cdr(v_621);
    {   LispObject fn = basic_elt(env, 20); // read!:num
    v_621 = (*qfn1(fn))(fn, v_621);
    }
    env = stack[-5];
    goto v_40;
    v_621 = nil;
v_40:
    {   LispObject fn = basic_elt(env, 21); // normbf
    v_621 = (*qfn1(fn))(fn, v_621);
    }
    goto v_27;
    v_621 = nil;
v_27:
    goto v_21;
v_23:
    v_621 = stack[-1];
    goto v_21;
    v_621 = nil;
v_21:
    return ncons(v_621);
v_15:
    v_621 = stack[-1];
    if (!car_legal(v_621)) v_622 = carerror(v_621); else
    v_622 = car(v_621);
    v_621 = basic_elt(env, 2); // !:dn!:
    if (v_622 == v_621) goto v_65;
    else goto v_66;
v_65:
    v_621 = stack[-1];
    if (!car_legal(v_621)) v_621 = cdrerror(v_621); else
    v_621 = cdr(v_621);
    if (!car_legal(v_621)) v_622 = carerror(v_621); else
    v_622 = car(v_621);
    v_621 = stack[-1];
    if (!car_legal(v_621)) v_621 = cdrerror(v_621); else
    v_621 = cdr(v_621);
    if (!car_legal(v_621)) v_621 = cdrerror(v_621); else
    v_621 = cdr(v_621);
    {   LispObject fn = basic_elt(env, 22); // decimal2internal
    v_621 = (*qfn2(fn))(fn, v_622, v_621);
    }
    env = stack[-5];
    stack[-1] = v_621;
    goto v_6;
v_66:
    v_621 = stack[-1];
    if (!car_legal(v_621)) v_622 = carerror(v_621); else
    v_622 = car(v_621);
    v_621 = basic_elt(env, 3); // !*sq
    if (v_622 == v_621) goto v_77;
    else goto v_78;
v_77:
    v_621 = stack[-1];
    if (!car_legal(v_621)) v_621 = cdrerror(v_621); else
    v_621 = cdr(v_621);
    if (!car_legal(v_621)) v_621 = carerror(v_621); else
    v_621 = car(v_621);
    {   LispObject fn = basic_elt(env, 23); // prepsq
    v_621 = (*qfn1(fn))(fn, v_621);
    }
    env = stack[-5];
    stack[-1] = v_621;
    goto v_6;
v_78:
    v_621 = stack[-1];
    if (!car_legal(v_621)) v_622 = carerror(v_621); else
    v_622 = car(v_621);
    v_621 = basic_elt(env, 4); // procedure
    if (v_622 == v_621) goto v_86;
    else goto v_87;
v_86:
    v_621 = stack[-1];
    if (!car_legal(v_621)) v_621 = cdrerror(v_621); else
    v_621 = cdr(v_621);
    if (!car_legal(v_621)) v_623 = carerror(v_621); else
    v_623 = car(v_621);
    v_622 = basic_elt(env, 5); // !*params!*
    v_621 = stack[-1];
    if (!car_legal(v_621)) v_621 = cdrerror(v_621); else
    v_621 = cdr(v_621);
    if (!car_legal(v_621)) v_621 = cdrerror(v_621); else
    v_621 = cdr(v_621);
    if (!car_legal(v_621)) v_621 = cdrerror(v_621); else
    v_621 = cdr(v_621);
    if (!car_legal(v_621)) v_621 = cdrerror(v_621); else
    v_621 = cdr(v_621);
    if (!car_legal(v_621)) v_621 = carerror(v_621); else
    v_621 = car(v_621);
    {   LispObject fn = basic_elt(env, 24); // symtabput
    v_621 = (*qfn3(fn))(fn, v_623, v_622, v_621);
    }
    env = stack[-5];
    v_621 = qvalue(basic_elt(env, 6)); // !*getdecs
    if (v_621 == nil) goto v_105;
    v_621 = stack[-1];
    if (!car_legal(v_621)) v_621 = cdrerror(v_621); else
    v_621 = cdr(v_621);
    if (!car_legal(v_621)) v_621 = cdrerror(v_621); else
    v_621 = cdr(v_621);
    if (!car_legal(v_621)) v_622 = carerror(v_621); else
    v_622 = car(v_621);
    v_621 = basic_elt(env, 7); // (real integer)
    v_621 = Lmemq(nil, v_622, v_621);
    if (v_621 == nil) goto v_110;
    v_621 = stack[-1];
    if (!car_legal(v_621)) v_621 = cdrerror(v_621); else
    v_621 = cdr(v_621);
    if (!car_legal(v_621)) stack[-2] = carerror(v_621); else
    stack[-2] = car(v_621);
    v_621 = stack[-1];
    if (!car_legal(v_621)) v_621 = cdrerror(v_621); else
    v_621 = cdr(v_621);
    if (!car_legal(v_621)) stack[0] = carerror(v_621); else
    stack[0] = car(v_621);
    v_621 = stack[-1];
    if (!car_legal(v_621)) v_621 = cdrerror(v_621); else
    v_621 = cdr(v_621);
    if (!car_legal(v_621)) v_621 = cdrerror(v_621); else
    v_621 = cdr(v_621);
    if (!car_legal(v_621)) v_621 = carerror(v_621); else
    v_621 = car(v_621);
    v_621 = ncons(v_621);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 24); // symtabput
    v_621 = (*qfn3(fn))(fn, stack[-2], stack[0], v_621);
    }
    env = stack[-5];
    v_621 = stack[-1];
    if (!car_legal(v_621)) v_621 = cdrerror(v_621); else
    v_621 = cdr(v_621);
    if (!car_legal(v_621)) v_621 = cdrerror(v_621); else
    v_621 = cdr(v_621);
    if (!car_legal(v_621)) v_621 = cdrerror(v_621); else
    v_621 = cdr(v_621);
    if (!car_legal(v_621)) v_621 = cdrerror(v_621); else
    v_621 = cdr(v_621);
    if (!car_legal(v_621)) v_621 = carerror(v_621); else
    v_621 = car(v_621);
    stack[-3] = v_621;
v_132:
    v_621 = stack[-3];
    if (v_621 == nil) goto v_141;
    else goto v_142;
v_141:
    goto v_131;
v_142:
    v_621 = stack[-3];
    if (!car_legal(v_621)) v_621 = carerror(v_621); else
    v_621 = car(v_621);
    v_622 = v_621;
    v_621 = stack[-1];
    if (!car_legal(v_621)) v_621 = cdrerror(v_621); else
    v_621 = cdr(v_621);
    if (!car_legal(v_621)) stack[-2] = carerror(v_621); else
    stack[-2] = car(v_621);
    stack[0] = v_622;
    v_621 = stack[-1];
    if (!car_legal(v_621)) v_621 = cdrerror(v_621); else
    v_621 = cdr(v_621);
    if (!car_legal(v_621)) v_621 = cdrerror(v_621); else
    v_621 = cdr(v_621);
    if (!car_legal(v_621)) v_621 = carerror(v_621); else
    v_621 = car(v_621);
    v_621 = ncons(v_621);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 24); // symtabput
    v_621 = (*qfn3(fn))(fn, stack[-2], stack[0], v_621);
    }
    env = stack[-5];
    v_621 = stack[-3];
    if (!car_legal(v_621)) v_621 = cdrerror(v_621); else
    v_621 = cdr(v_621);
    stack[-3] = v_621;
    goto v_132;
v_131:
    v_623 = basic_elt(env, 4); // procedure
    v_621 = stack[-1];
    if (!car_legal(v_621)) v_621 = cdrerror(v_621); else
    v_621 = cdr(v_621);
    if (!car_legal(v_621)) v_622 = carerror(v_621); else
    v_622 = car(v_621);
    v_621 = nil;
    stack[-4] = list3(v_623, v_622, v_621);
    env = stack[-5];
    v_621 = stack[-1];
    if (!car_legal(v_621)) v_621 = cdrerror(v_621); else
    v_621 = cdr(v_621);
    if (!car_legal(v_621)) v_621 = cdrerror(v_621); else
    v_621 = cdr(v_621);
    if (!car_legal(v_621)) v_621 = cdrerror(v_621); else
    v_621 = cdr(v_621);
    stack[-3] = v_621;
v_173:
    v_621 = stack[-3];
    if (v_621 == nil) goto v_181;
    else goto v_182;
v_181:
    v_621 = nil;
    goto v_172;
v_182:
    v_621 = stack[-3];
    if (!car_legal(v_621)) v_621 = carerror(v_621); else
    v_621 = car(v_621);
    {   LispObject fn = basic_elt(env, 0); // preproc1
    v_621 = (*qfn1(fn))(fn, v_621);
    }
    env = stack[-5];
    stack[-2] = v_621;
    v_621 = stack[-2];
    {   LispObject fn = basic_elt(env, 25); // lastpair
    v_621 = (*qfn1(fn))(fn, v_621);
    }
    env = stack[-5];
    stack[-1] = v_621;
    v_621 = stack[-3];
    if (!car_legal(v_621)) v_621 = cdrerror(v_621); else
    v_621 = cdr(v_621);
    stack[-3] = v_621;
    v_621 = stack[-1];
    if (!consp(v_621)) goto v_196;
    else goto v_197;
v_196:
    goto v_173;
v_197:
v_174:
    v_621 = stack[-3];
    if (v_621 == nil) goto v_201;
    else goto v_202;
v_201:
    v_621 = stack[-2];
    goto v_172;
v_202:
    stack[0] = stack[-1];
    v_621 = stack[-3];
    if (!car_legal(v_621)) v_621 = carerror(v_621); else
    v_621 = car(v_621);
    {   LispObject fn = basic_elt(env, 0); // preproc1
    v_621 = (*qfn1(fn))(fn, v_621);
    }
    env = stack[-5];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_621);
    v_621 = stack[-1];
    {   LispObject fn = basic_elt(env, 25); // lastpair
    v_621 = (*qfn1(fn))(fn, v_621);
    }
    env = stack[-5];
    stack[-1] = v_621;
    v_621 = stack[-3];
    if (!car_legal(v_621)) v_621 = cdrerror(v_621); else
    v_621 = cdr(v_621);
    stack[-3] = v_621;
    goto v_174;
v_172:
    v_621 = Lnconc(nil, stack[-4], v_621);
    return ncons(v_621);
v_110:
    v_621 = stack[-1];
    if (!car_legal(v_621)) v_621 = cdrerror(v_621); else
    v_621 = cdr(v_621);
    if (!car_legal(v_621)) v_621 = cdrerror(v_621); else
    v_621 = cdr(v_621);
    if (!car_legal(v_621)) v_621 = cdrerror(v_621); else
    v_621 = cdr(v_621);
    if (!car_legal(v_621)) v_621 = cdrerror(v_621); else
    v_621 = cdr(v_621);
    if (!car_legal(v_621)) v_621 = carerror(v_621); else
    v_621 = car(v_621);
    stack[-3] = v_621;
v_221:
    v_621 = stack[-3];
    if (v_621 == nil) goto v_230;
    else goto v_231;
v_230:
    goto v_220;
v_231:
    v_621 = stack[-3];
    if (!car_legal(v_621)) v_621 = carerror(v_621); else
    v_621 = car(v_621);
    v_622 = v_621;
    v_621 = stack[-1];
    if (!car_legal(v_621)) v_621 = cdrerror(v_621); else
    v_621 = cdr(v_621);
    if (!car_legal(v_621)) stack[-2] = carerror(v_621); else
    stack[-2] = car(v_621);
    stack[0] = v_622;
    v_621 = qvalue(basic_elt(env, 8)); // deftype!*
    v_621 = ncons(v_621);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 24); // symtabput
    v_621 = (*qfn3(fn))(fn, stack[-2], stack[0], v_621);
    }
    env = stack[-5];
    v_621 = stack[-3];
    if (!car_legal(v_621)) v_621 = cdrerror(v_621); else
    v_621 = cdr(v_621);
    stack[-3] = v_621;
    goto v_221;
v_220:
    v_621 = stack[-1];
    stack[-3] = v_621;
v_252:
    v_621 = stack[-3];
    if (v_621 == nil) goto v_257;
    else goto v_258;
v_257:
    v_621 = nil;
    goto v_251;
v_258:
    v_621 = stack[-3];
    if (!car_legal(v_621)) v_621 = carerror(v_621); else
    v_621 = car(v_621);
    {   LispObject fn = basic_elt(env, 0); // preproc1
    v_621 = (*qfn1(fn))(fn, v_621);
    }
    env = stack[-5];
    stack[-2] = v_621;
    v_621 = stack[-2];
    {   LispObject fn = basic_elt(env, 25); // lastpair
    v_621 = (*qfn1(fn))(fn, v_621);
    }
    env = stack[-5];
    stack[-1] = v_621;
    v_621 = stack[-3];
    if (!car_legal(v_621)) v_621 = cdrerror(v_621); else
    v_621 = cdr(v_621);
    stack[-3] = v_621;
    v_621 = stack[-1];
    if (!consp(v_621)) goto v_272;
    else goto v_273;
v_272:
    goto v_252;
v_273:
v_253:
    v_621 = stack[-3];
    if (v_621 == nil) goto v_277;
    else goto v_278;
v_277:
    v_621 = stack[-2];
    goto v_251;
v_278:
    stack[0] = stack[-1];
    v_621 = stack[-3];
    if (!car_legal(v_621)) v_621 = carerror(v_621); else
    v_621 = car(v_621);
    {   LispObject fn = basic_elt(env, 0); // preproc1
    v_621 = (*qfn1(fn))(fn, v_621);
    }
    env = stack[-5];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_621);
    v_621 = stack[-1];
    {   LispObject fn = basic_elt(env, 25); // lastpair
    v_621 = (*qfn1(fn))(fn, v_621);
    }
    env = stack[-5];
    stack[-1] = v_621;
    v_621 = stack[-3];
    if (!car_legal(v_621)) v_621 = cdrerror(v_621); else
    v_621 = cdr(v_621);
    stack[-3] = v_621;
    goto v_253;
v_251:
    return ncons(v_621);
    goto v_103;
v_105:
    v_621 = stack[-1];
    stack[-3] = v_621;
v_300:
    v_621 = stack[-3];
    if (v_621 == nil) goto v_305;
    else goto v_306;
v_305:
    v_621 = nil;
    goto v_299;
v_306:
    v_621 = stack[-3];
    if (!car_legal(v_621)) v_621 = carerror(v_621); else
    v_621 = car(v_621);
    {   LispObject fn = basic_elt(env, 0); // preproc1
    v_621 = (*qfn1(fn))(fn, v_621);
    }
    env = stack[-5];
    stack[-2] = v_621;
    v_621 = stack[-2];
    {   LispObject fn = basic_elt(env, 25); // lastpair
    v_621 = (*qfn1(fn))(fn, v_621);
    }
    env = stack[-5];
    stack[-1] = v_621;
    v_621 = stack[-3];
    if (!car_legal(v_621)) v_621 = cdrerror(v_621); else
    v_621 = cdr(v_621);
    stack[-3] = v_621;
    v_621 = stack[-1];
    if (!consp(v_621)) goto v_320;
    else goto v_321;
v_320:
    goto v_300;
v_321:
v_301:
    v_621 = stack[-3];
    if (v_621 == nil) goto v_325;
    else goto v_326;
v_325:
    v_621 = stack[-2];
    goto v_299;
v_326:
    stack[0] = stack[-1];
    v_621 = stack[-3];
    if (!car_legal(v_621)) v_621 = carerror(v_621); else
    v_621 = car(v_621);
    {   LispObject fn = basic_elt(env, 0); // preproc1
    v_621 = (*qfn1(fn))(fn, v_621);
    }
    env = stack[-5];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_621);
    v_621 = stack[-1];
    {   LispObject fn = basic_elt(env, 25); // lastpair
    v_621 = (*qfn1(fn))(fn, v_621);
    }
    env = stack[-5];
    stack[-1] = v_621;
    v_621 = stack[-3];
    if (!car_legal(v_621)) v_621 = cdrerror(v_621); else
    v_621 = cdr(v_621);
    stack[-3] = v_621;
    goto v_301;
v_299:
    return ncons(v_621);
v_103:
    goto v_8;
v_87:
    v_621 = stack[-1];
    if (!car_legal(v_621)) v_622 = carerror(v_621); else
    v_622 = car(v_621);
    v_621 = basic_elt(env, 9); // declare
    if (v_622 == v_621) goto v_340;
    else goto v_341;
v_340:
    v_621 = stack[-1];
    if (!car_legal(v_621)) v_621 = cdrerror(v_621); else
    v_621 = cdr(v_621);
    {   LispObject fn = basic_elt(env, 0); // preproc1
    v_621 = (*qfn1(fn))(fn, v_621);
    }
    env = stack[-5];
    if (!car_legal(v_621)) v_621 = carerror(v_621); else
    v_621 = car(v_621);
    stack[-1] = v_621;
    v_621 = stack[-1];
    {   LispObject fn = basic_elt(env, 26); // preprocdec
    v_621 = (*qfn1(fn))(fn, v_621);
    }
    env = stack[-5];
    stack[-1] = v_621;
    v_621 = stack[-1];
    stack[-4] = v_621;
v_354:
    v_621 = stack[-4];
    if (v_621 == nil) goto v_358;
    else goto v_359;
v_358:
    goto v_353;
v_359:
    v_621 = stack[-4];
    if (!car_legal(v_621)) v_621 = carerror(v_621); else
    v_621 = car(v_621);
    stack[-3] = v_621;
    v_621 = stack[-3];
    if (!car_legal(v_621)) v_621 = cdrerror(v_621); else
    v_621 = cdr(v_621);
    stack[-2] = v_621;
v_368:
    v_621 = stack[-2];
    if (v_621 == nil) goto v_373;
    else goto v_374;
v_373:
    goto v_367;
v_374:
    v_621 = stack[-2];
    if (!car_legal(v_621)) v_621 = carerror(v_621); else
    v_621 = car(v_621);
    v_623 = v_621;
    v_621 = stack[-3];
    if (!car_legal(v_621)) v_622 = carerror(v_621); else
    v_622 = car(v_621);
    v_621 = basic_elt(env, 10); // (subroutine function)
    v_621 = Lmemq(nil, v_622, v_621);
    if (v_621 == nil) goto v_383;
    v_622 = basic_elt(env, 11); // !*type!*
    v_621 = stack[-3];
    if (!car_legal(v_621)) v_621 = carerror(v_621); else
    v_621 = car(v_621);
    {   LispObject fn = basic_elt(env, 24); // symtabput
    v_621 = (*qfn3(fn))(fn, v_623, v_622, v_621);
    }
    env = stack[-5];
    goto v_381;
v_383:
    stack[-1] = nil;
    v_621 = v_623;
    if (!consp(v_621)) goto v_399;
    else goto v_400;
v_399:
    v_621 = v_623;
    stack[0] = v_621;
    goto v_398;
v_400:
    v_621 = v_623;
    if (!car_legal(v_621)) v_621 = carerror(v_621); else
    v_621 = car(v_621);
    stack[0] = v_621;
    goto v_398;
    stack[0] = nil;
v_398:
    v_621 = v_623;
    if (!consp(v_621)) goto v_409;
    else goto v_410;
v_409:
    v_621 = stack[-3];
    if (!car_legal(v_621)) v_621 = carerror(v_621); else
    v_621 = car(v_621);
    v_621 = ncons(v_621);
    env = stack[-5];
    goto v_408;
v_410:
    v_621 = stack[-3];
    if (!car_legal(v_621)) v_621 = carerror(v_621); else
    v_621 = car(v_621);
    v_622 = v_623;
    if (!car_legal(v_622)) v_622 = cdrerror(v_622); else
    v_622 = cdr(v_622);
    v_621 = cons(v_621, v_622);
    env = stack[-5];
    goto v_408;
    v_621 = nil;
v_408:
    {   LispObject fn = basic_elt(env, 24); // symtabput
    v_621 = (*qfn3(fn))(fn, stack[-1], stack[0], v_621);
    }
    env = stack[-5];
    goto v_381;
v_381:
    v_621 = stack[-2];
    if (!car_legal(v_621)) v_621 = cdrerror(v_621); else
    v_621 = cdr(v_621);
    stack[-2] = v_621;
    goto v_368;
v_367:
    v_621 = stack[-4];
    if (!car_legal(v_621)) v_621 = cdrerror(v_621); else
    v_621 = cdr(v_621);
    stack[-4] = v_621;
    goto v_354;
v_353:
    v_621 = nil;
    goto v_5;
v_341:
    v_621 = stack[-1];
    if (!car_legal(v_621)) v_622 = carerror(v_621); else
    v_622 = car(v_621);
    v_621 = basic_elt(env, 12); // setq
    if (v_622 == v_621) goto v_431;
    else goto v_432;
v_431:
    v_621 = stack[-1];
    if (!car_legal(v_621)) v_621 = cdrerror(v_621); else
    v_621 = cdr(v_621);
    if (!car_legal(v_621)) v_621 = cdrerror(v_621); else
    v_621 = cdr(v_621);
    if (!car_legal(v_621)) v_621 = carerror(v_621); else
    v_621 = car(v_621);
    v_621 = Lconsp(nil, v_621);
    env = stack[-5];
    if (v_621 == nil) goto v_438;
    else goto v_439;
v_438:
    v_621 = nil;
    goto v_437;
v_439:
    v_621 = stack[-1];
    if (!car_legal(v_621)) v_621 = cdrerror(v_621); else
    v_621 = cdr(v_621);
    if (!car_legal(v_621)) v_621 = cdrerror(v_621); else
    v_621 = cdr(v_621);
    if (!car_legal(v_621)) v_621 = carerror(v_621); else
    v_621 = car(v_621);
    if (!car_legal(v_621)) v_622 = carerror(v_621); else
    v_622 = car(v_621);
    v_621 = basic_elt(env, 13); // (cond progn)
    v_621 = Lmemq(nil, v_622, v_621);
    goto v_437;
    v_621 = nil;
v_437:
    goto v_430;
v_432:
    v_621 = nil;
    goto v_430;
    v_621 = nil;
v_430:
    if (v_621 == nil) goto v_428;
    v_621 = stack[-1];
    {
        LispObject fn = basic_elt(env, 27); // migrate!-setqs
        return (*qfn1(fn))(fn, v_621);
    }
v_428:
    v_621 = stack[-1];
    if (!car_legal(v_621)) v_622 = carerror(v_621); else
    v_622 = car(v_621);
    v_621 = basic_elt(env, 14); // (plus times difference quotient minus)
    v_621 = Lmemq(nil, v_622, v_621);
    if (v_621 == nil) goto v_461;
    v_621 = stack[-1];
    {   LispObject fn = basic_elt(env, 28); // simp!*
    v_621 = (*qfn1(fn))(fn, v_621);
    }
    env = stack[-5];
    v_623 = v_621;
    if (!car_legal(v_621)) v_621 = carerror(v_621); else
    v_621 = car(v_621);
    v_621 = Lconsp(nil, v_621);
    env = stack[-5];
    if (v_621 == nil) goto v_472;
    v_621 = v_623;
    if (!car_legal(v_621)) v_621 = carerror(v_621); else
    v_621 = car(v_621);
    if (!car_legal(v_621)) v_622 = carerror(v_621); else
    v_622 = car(v_621);
    v_621 = basic_elt(env, 15); // (!:cr!: !:crn!: !:gi!:)
    v_621 = Lmemq(nil, v_622, v_621);
    if (v_621 == nil) goto v_472;
    v_621 = v_623;
    if (!car_legal(v_621)) v_621 = cdrerror(v_621); else
    v_621 = cdr(v_621);
    v_621 = Lonep(nil, v_621);
    env = stack[-5];
    if (v_621 == nil) goto v_487;
    v_621 = v_623;
    if (!car_legal(v_621)) v_621 = carerror(v_621); else
    v_621 = car(v_621);
    return ncons(v_621);
v_487:
    stack[-1] = basic_elt(env, 16); // quotient
    v_621 = v_623;
    if (!car_legal(v_621)) stack[0] = carerror(v_621); else
    stack[0] = car(v_621);
    v_621 = v_623;
    if (!car_legal(v_621)) v_622 = cdrerror(v_621); else
    v_622 = cdr(v_621);
    v_621 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_621 = cons(v_622, v_621);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 23); // prepsq
    v_621 = (*qfn1(fn))(fn, v_621);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 0); // preproc1
    v_621 = (*qfn1(fn))(fn, v_621);
    }
    env = stack[-5];
    if (!car_legal(v_621)) v_621 = carerror(v_621); else
    v_621 = car(v_621);
    v_621 = list3(stack[-1], stack[0], v_621);
    return ncons(v_621);
    v_621 = nil;
    goto v_470;
v_472:
    v_621 = stack[-1];
    stack[-3] = v_621;
v_516:
    v_621 = stack[-3];
    if (v_621 == nil) goto v_521;
    else goto v_522;
v_521:
    v_621 = nil;
    goto v_515;
v_522:
    v_621 = stack[-3];
    if (!car_legal(v_621)) v_621 = carerror(v_621); else
    v_621 = car(v_621);
    {   LispObject fn = basic_elt(env, 0); // preproc1
    v_621 = (*qfn1(fn))(fn, v_621);
    }
    env = stack[-5];
    stack[-2] = v_621;
    v_621 = stack[-2];
    {   LispObject fn = basic_elt(env, 25); // lastpair
    v_621 = (*qfn1(fn))(fn, v_621);
    }
    env = stack[-5];
    stack[-1] = v_621;
    v_621 = stack[-3];
    if (!car_legal(v_621)) v_621 = cdrerror(v_621); else
    v_621 = cdr(v_621);
    stack[-3] = v_621;
    v_621 = stack[-1];
    if (!consp(v_621)) goto v_536;
    else goto v_537;
v_536:
    goto v_516;
v_537:
v_517:
    v_621 = stack[-3];
    if (v_621 == nil) goto v_541;
    else goto v_542;
v_541:
    v_621 = stack[-2];
    goto v_515;
v_542:
    stack[0] = stack[-1];
    v_621 = stack[-3];
    if (!car_legal(v_621)) v_621 = carerror(v_621); else
    v_621 = car(v_621);
    {   LispObject fn = basic_elt(env, 0); // preproc1
    v_621 = (*qfn1(fn))(fn, v_621);
    }
    env = stack[-5];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_621);
    v_621 = stack[-1];
    {   LispObject fn = basic_elt(env, 25); // lastpair
    v_621 = (*qfn1(fn))(fn, v_621);
    }
    env = stack[-5];
    stack[-1] = v_621;
    v_621 = stack[-3];
    if (!car_legal(v_621)) v_621 = cdrerror(v_621); else
    v_621 = cdr(v_621);
    stack[-3] = v_621;
    goto v_517;
v_515:
    return ncons(v_621);
    v_621 = nil;
v_470:
    goto v_5;
v_461:
    v_621 = qvalue(basic_elt(env, 6)); // !*getdecs
    if (v_621 == nil) goto v_561;
    v_621 = stack[-1];
    if (!car_legal(v_621)) v_622 = carerror(v_621); else
    v_622 = car(v_621);
    v_621 = basic_elt(env, 17); // (!~for for)
    v_621 = Lmemq(nil, v_622, v_621);
    if (v_621 == nil) goto v_561;
    v_623 = nil;
    v_621 = stack[-1];
    if (!car_legal(v_621)) v_621 = cdrerror(v_621); else
    v_621 = cdr(v_621);
    if (!car_legal(v_621)) v_622 = carerror(v_621); else
    v_622 = car(v_621);
    v_621 = basic_elt(env, 18); // (integer)
    {   LispObject fn = basic_elt(env, 24); // symtabput
    v_621 = (*qfn3(fn))(fn, v_623, v_622, v_621);
    }
    env = stack[-5];
    goto v_559;
v_561:
v_559:
    v_621 = stack[-1];
    stack[-3] = v_621;
v_581:
    v_621 = stack[-3];
    if (v_621 == nil) goto v_586;
    else goto v_587;
v_586:
    v_621 = nil;
    goto v_580;
v_587:
    v_621 = stack[-3];
    if (!car_legal(v_621)) v_621 = carerror(v_621); else
    v_621 = car(v_621);
    {   LispObject fn = basic_elt(env, 0); // preproc1
    v_621 = (*qfn1(fn))(fn, v_621);
    }
    env = stack[-5];
    stack[-2] = v_621;
    v_621 = stack[-2];
    {   LispObject fn = basic_elt(env, 25); // lastpair
    v_621 = (*qfn1(fn))(fn, v_621);
    }
    env = stack[-5];
    stack[-1] = v_621;
    v_621 = stack[-3];
    if (!car_legal(v_621)) v_621 = cdrerror(v_621); else
    v_621 = cdr(v_621);
    stack[-3] = v_621;
    v_621 = stack[-1];
    if (!consp(v_621)) goto v_601;
    else goto v_602;
v_601:
    goto v_581;
v_602:
v_582:
    v_621 = stack[-3];
    if (v_621 == nil) goto v_606;
    else goto v_607;
v_606:
    v_621 = stack[-2];
    goto v_580;
v_607:
    stack[0] = stack[-1];
    v_621 = stack[-3];
    if (!car_legal(v_621)) v_621 = carerror(v_621); else
    v_621 = car(v_621);
    {   LispObject fn = basic_elt(env, 0); // preproc1
    v_621 = (*qfn1(fn))(fn, v_621);
    }
    env = stack[-5];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_621);
    v_621 = stack[-1];
    {   LispObject fn = basic_elt(env, 25); // lastpair
    v_621 = (*qfn1(fn))(fn, v_621);
    }
    env = stack[-5];
    stack[-1] = v_621;
    v_621 = stack[-3];
    if (!car_legal(v_621)) v_621 = cdrerror(v_621); else
    v_621 = cdr(v_621);
    stack[-3] = v_621;
    goto v_582;
v_580:
    return ncons(v_621);
v_8:
    v_621 = nil;
v_5:
    return onevalue(v_621);
}



// Code for basisvectorp

static LispObject CC_basisvectorp(LispObject env,
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
    if (!consp(v_15)) goto v_7;
    v_15 = v_16;
    v_16 = qvalue(basic_elt(env, 1)); // basisvectorl!*
    v_15 = Lmemq(nil, v_15, v_16);
    goto v_5;
v_7:
    v_15 = nil;
    goto v_5;
    v_15 = nil;
v_5:
    return onevalue(v_15);
}



// Code for new_edge

static LispObject CC_new_edge(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    v_31 = stack[-1];
    if (!car_legal(v_31)) v_32 = carerror(v_31); else
    v_32 = car(v_31);
    v_31 = stack[0];
    if (!car_legal(v_31)) v_31 = carerror(v_31); else
    v_31 = car(v_31);
    {   LispObject fn = basic_elt(env, 2); // mk_edge_name
    stack[-2] = (*qfn2(fn))(fn, v_32, v_31);
    }
    env = stack[-3];
    v_31 = stack[-1];
    if (!car_legal(v_31)) v_32 = carerror(v_31); else
    v_32 = car(v_31);
    v_31 = stack[0];
    if (!car_legal(v_31)) v_31 = carerror(v_31); else
    v_31 = car(v_31);
    v_32 = cons(v_32, v_31);
    env = stack[-3];
    goto v_22;
    v_31 = nil;
    goto v_20;
v_22:
    v_31 = nil;
    goto v_20;
    v_31 = nil;
v_20:
    v_31 = list3(stack[-2], v_32, v_31);
    env = stack[-3];
    stack[0] = v_31;
    v_32 = stack[0];
    v_31 = qvalue(basic_elt(env, 1)); // new_edge_list
    v_31 = cons(v_32, v_31);
    env = stack[-3];
    setvalue(basic_elt(env, 1), v_31); // new_edge_list
    v_31 = stack[0];
    return onevalue(v_31);
}



// Code for solvevars

static LispObject CC_solvevars(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_33, v_34;
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
    v_34 = v_2;
// end of prologue
    v_33 = nil;
    stack[-2] = v_33;
    v_33 = v_34;
    {   LispObject fn = basic_elt(env, 1); // allbkern
    v_33 = (*qfn1(fn))(fn, v_33);
    }
    env = stack[-3];
    stack[-1] = v_33;
v_9:
    v_33 = stack[-1];
    if (v_33 == nil) goto v_14;
    else goto v_15;
v_14:
    goto v_8;
v_15:
    v_33 = stack[-1];
    if (!car_legal(v_33)) v_33 = carerror(v_33); else
    v_33 = car(v_33);
    stack[0] = v_33;
    v_33 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // constant_exprp
    v_33 = (*qfn1(fn))(fn, v_33);
    }
    env = stack[-3];
    if (v_33 == nil) goto v_23;
    else goto v_24;
v_23:
    v_34 = stack[0];
    v_33 = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // ordad
    v_33 = (*qfn2(fn))(fn, v_34, v_33);
    }
    env = stack[-3];
    stack[-2] = v_33;
    goto v_22;
v_24:
v_22:
    v_33 = stack[-1];
    if (!car_legal(v_33)) v_33 = cdrerror(v_33); else
    v_33 = cdr(v_33);
    stack[-1] = v_33;
    goto v_9;
v_8:
    v_33 = stack[-2];
    return onevalue(v_33);
}



// Code for rlval

static LispObject CC_rlval(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_161, v_162, v_163;
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
    v_162 = v_2;
// end of prologue
    v_161 = v_162;
    if (!consp(v_161)) goto v_11;
    else goto v_12;
v_11:
    v_161 = lisp_true;
    goto v_10;
v_12:
    v_161 = v_162;
    if (!car_legal(v_161)) v_161 = carerror(v_161); else
    v_161 = car(v_161);
    v_161 = (consp(v_161) ? nil : lisp_true);
    goto v_10;
    v_161 = nil;
v_10:
    if (v_161 == nil) goto v_8;
    v_161 = v_162;
    goto v_6;
v_8:
    v_161 = stack[-3];
    if (!consp(v_161)) goto v_25;
    else goto v_26;
v_25:
    v_161 = stack[-3];
    v_161 = static_cast<LispObject>(zerop(v_161));
    v_161 = v_161 ? lisp_true : nil;
    env = stack[-5];
    goto v_24;
v_26:
    v_161 = stack[-3];
    if (!car_legal(v_161)) v_161 = cdrerror(v_161); else
    v_161 = cdr(v_161);
    if (!car_legal(v_161)) v_163 = carerror(v_161); else
    v_163 = car(v_161);
    v_161 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_161 = (v_163 == v_161 ? lisp_true : nil);
    goto v_24;
    v_161 = nil;
v_24:
    if (v_161 == nil) goto v_22;
    v_161 = v_162;
    if (!car_legal(v_161)) v_161 = carerror(v_161); else
    v_161 = car(v_161);
    if (!car_legal(v_161)) v_163 = carerror(v_161); else
    v_163 = car(v_161);
    v_161 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_163 == v_161) goto v_39;
    else goto v_40;
v_39:
    v_161 = v_162;
    if (!car_legal(v_161)) v_161 = carerror(v_161); else
    v_161 = car(v_161);
    if (!car_legal(v_161)) v_161 = cdrerror(v_161); else
    v_161 = cdr(v_161);
    goto v_38;
v_40:
    v_161 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {
        LispObject fn = basic_elt(env, 3); // r2flbf
        return (*qfn1(fn))(fn, v_161);
    }
    v_161 = nil;
v_38:
    goto v_6;
v_22:
    v_163 = stack[-3];
    v_161 = basic_elt(env, 1); // !:rd!:
    if (!consp(v_163)) goto v_61;
    v_163 = car(v_163);
    if (v_163 == v_161) goto v_60;
    else goto v_61;
v_60:
    v_161 = stack[-3];
    if (!car_legal(v_161)) v_161 = cdrerror(v_161); else
    v_161 = cdr(v_161);
    v_161 = (consp(v_161) ? nil : lisp_true);
    v_161 = (v_161 == nil ? lisp_true : nil);
    goto v_59;
v_61:
    v_161 = nil;
    goto v_59;
    v_161 = nil;
v_59:
    stack[-2] = v_161;
    v_161 = v_162;
    {   LispObject fn = basic_elt(env, 4); // ncoeffs
    v_161 = (*qfn1(fn))(fn, v_161);
    }
    env = stack[-5];
    if (!car_legal(v_161)) v_161 = cdrerror(v_161); else
    v_161 = cdr(v_161);
    v_162 = v_161;
    if (!car_legal(v_161)) v_161 = carerror(v_161); else
    v_161 = car(v_161);
    stack[-4] = v_161;
    v_161 = v_162;
    if (!car_legal(v_161)) v_161 = cdrerror(v_161); else
    v_161 = cdr(v_161);
    stack[-1] = v_161;
v_79:
    v_161 = stack[-1];
    if (v_161 == nil) goto v_84;
    else goto v_85;
v_84:
    goto v_78;
v_85:
    v_161 = stack[-1];
    if (!car_legal(v_161)) v_161 = carerror(v_161); else
    v_161 = car(v_161);
    stack[0] = v_161;
    v_161 = stack[-2];
    if (v_161 == nil) goto v_94;
    v_162 = stack[-3];
    v_161 = stack[-4];
    {   LispObject fn = basic_elt(env, 5); // times!:
    v_161 = (*qfn2(fn))(fn, v_162, v_161);
    }
    env = stack[-5];
    goto v_92;
v_94:
    v_162 = stack[-3];
    v_161 = stack[-4];
    v_161 = times2(v_162, v_161);
    env = stack[-5];
    goto v_92;
    v_161 = nil;
v_92:
    stack[-4] = v_161;
    v_161 = stack[0];
    if (v_161 == nil) goto v_107;
    v_161 = stack[-2];
    if (v_161 == nil) goto v_112;
    v_162 = stack[0];
    v_161 = stack[-4];
    {   LispObject fn = basic_elt(env, 6); // plus!:
    v_161 = (*qfn2(fn))(fn, v_162, v_161);
    }
    env = stack[-5];
    goto v_110;
v_112:
    v_162 = stack[-4];
    v_161 = stack[0];
    v_161 = plus2(v_162, v_161);
    env = stack[-5];
    goto v_110;
    v_161 = nil;
v_110:
    stack[-4] = v_161;
    goto v_105;
v_107:
v_105:
    v_161 = stack[-1];
    if (!car_legal(v_161)) v_161 = cdrerror(v_161); else
    v_161 = cdr(v_161);
    stack[-1] = v_161;
    goto v_79;
v_78:
    v_161 = stack[-2];
    if (v_161 == nil) goto v_127;
    v_161 = stack[-4];
    if (!car_legal(v_161)) v_161 = cdrerror(v_161); else
    v_161 = cdr(v_161);
    if (!car_legal(v_161)) v_161 = carerror(v_161); else
    v_161 = car(v_161);
    v_163 = v_161;
    v_162 = v_163;
    v_161 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_162 == v_161) goto v_137;
    else goto v_138;
v_137:
    v_163 = basic_elt(env, 1); // !:rd!:
    v_162 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_161 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    return list2star(v_163, v_162, v_161);
v_138:
    v_162 = v_163;
    v_161 = qvalue(basic_elt(env, 2)); // !:bprec!:
    {   LispObject fn = basic_elt(env, 7); // inorm
    v_161 = (*qfn2(fn))(fn, v_162, v_161);
    }
    env = stack[-5];
    v_163 = v_161;
    stack[-1] = basic_elt(env, 1); // !:rd!:
    v_161 = v_163;
    if (!car_legal(v_161)) stack[0] = carerror(v_161); else
    stack[0] = car(v_161);
    v_161 = v_163;
    if (!car_legal(v_161)) v_162 = cdrerror(v_161); else
    v_162 = cdr(v_161);
    v_161 = stack[-4];
    if (!car_legal(v_161)) v_161 = cdrerror(v_161); else
    v_161 = cdr(v_161);
    if (!car_legal(v_161)) v_161 = cdrerror(v_161); else
    v_161 = cdr(v_161);
    v_161 = plus2(v_162, v_161);
    {
        LispObject v_169 = stack[-1];
        LispObject v_170 = stack[0];
        return list2star(v_169, v_170, v_161);
    }
    goto v_125;
v_127:
    v_161 = stack[-4];
    goto v_125;
    v_161 = nil;
v_125:
    goto v_6;
    v_161 = nil;
v_6:
    return onevalue(v_161);
}



// Code for ra_i2ra

static LispObject CC_ra_i2ra(LispObject env,
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
    stack[0] = basic_elt(env, 1); // ra_i2ra0
    v_8 = ncons(v_8);
    env = stack[-1];
    {
        LispObject v_10 = stack[0];
        LispObject fn = basic_elt(env, 2); // ra_wrapper
        return (*qfn2(fn))(fn, v_10, v_8);
    }
}



setup_type const u56_setup[] =
{
    {"search_att",              G0W2,     G1W2,     CC_search_att,G3W2, G4W2},
    {"mo_from_ei",              G0W1,     CC_mo_from_ei,G2W1, G3W1,     G4W1},
    {"boolean-eval2",           G0W1,     CC_booleanKeval2,G2W1,G3W1,   G4W1},
    {"distri_pol",              G0W1,     CC_distri_pol,G2W1, G3W1,     G4W1},
    {"aex_xtothen",             G0W2,     G1W2,     CC_aex_xtothen,G3W2,G4W2},
    {"get-min-degreelist",      G0W1,     CC_getKminKdegreelist,G2W1,G3W1,G4W1},
    {"available*p",             G0W1,     CC_availableHp,G2W1,G3W1,     G4W1},
    {"talp_get-minfct",         G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_talp_getKminfct},
    {"mri_irsplit",             G0W1,     CC_mri_irsplit,G2W1,G3W1,     G4W1},
    {"subsqnew",                G0W3,     G1W3,     G2W3,     CC_subsqnew,G4W3},
    {"implicitdec",             G0W1,     CC_implicitdec,G2W1,G3W1,     G4W1},
    {"bccheckz",                G0W1,     CC_bccheckz,G2W1,   G3W1,     G4W1},
    {"xnormalise",              G0W1,     CC_xnormalise,G2W1, G3W1,     G4W1},
    {"unshift",                 G0W1,     CC_unshift,G2W1,    G3W1,     G4W1},
    {"simpabs",                 G0W1,     CC_simpabs,G2W1,    G3W1,     G4W1},
    {"*sf2ex",                  G0W2,     G1W2,     CC_Hsf2ex,G3W2,     G4W2},
    {"compactf3",               G0W3,     G1W3,     G2W3,     CC_compactf3,G4W3},
    {"extodd",                  G0W1,     CC_extodd,G2W1,     G3W1,     G4W1},
    {"ofsf_facneq*",            G0W2,     G1W2,     CC_ofsf_facneqH,G3W2,G4W2},
    {"cl_subfof1",              G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_cl_subfof1},
    {"applyml",                 CC_applyml,G1W0,    G2W0,     G3W0,     G4W0},
    {"product-set2",            G0W2,     G1W2,     CC_productKset2,G3W2,G4W2},
    {"dip-nc-m*p-distleft",     G0W3,     G1W3,     G2W3,     CC_dipKncKmHpKdistleft,G4W3},
    {"vdplsortin",              G0W2,     G1W2,     CC_vdplsortin,G3W2, G4W2},
    {"validrule",               G0W1,     CC_validrule,G2W1,  G3W1,     G4W1},
    {"preproc1",                G0W1,     CC_preproc1,G2W1,   G3W1,     G4W1},
    {"basisvectorp",            G0W1,     CC_basisvectorp,G2W1,G3W1,    G4W1},
    {"new_edge",                G0W2,     G1W2,     CC_new_edge,G3W2,   G4W2},
    {"solvevars",               G0W1,     CC_solvevars,G2W1,  G3W1,     G4W1},
    {"rlval",                   G0W2,     G1W2,     CC_rlval, G3W2,     G4W2},
    {"ra_i2ra",                 G0W1,     CC_ra_i2ra,G2W1,    G3W1,     G4W1},
    {nullptr, 
        reinterpret_cast<no_args *>(
            reinterpret_cast<uintptr_t>("u56")),
        reinterpret_cast<one_arg *>(
            reinterpret_cast<uintptr_t>("56422 5399638 6265814")),
        nullptr, nullptr, nullptr}
};

// end of generated code
