
// $destdir/u45.c        Machine generated C code

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


// Code for applsmacro

static LispObject CC_applsmacro(LispObject env,
                         LispObject v_3, LispObject v_4,
                         LispObject v_5)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_291, v_292, v_293;
#ifdef CHECK_STACK
    if_check_stack;
#endif
#ifdef CONSERVATIVE
    poll();
#else // CONSERVATIVE
    if (++reclaim_trigger_count == reclaim_trigger_target ||
        stack >= stackLimit)
    {
        push(v_3,v_4,v_5);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_5,v_4,v_3);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil, nil, nil, nil, nil);
    real_push(nil, nil, nil, nil, nil);
    stack_popper stack_popper_var(11);
// copy arguments values to proper place
    v_291 = v_5;
    stack[-8] = v_4;
    v_292 = v_3;
// end of prologue
// Binding name
// FLUIDBIND: reloadenv=10 litvec-offset=1 saveloc=9
{   bind_fluid_stack bind_fluid_var(-10, 1, -9);
    setvalue(basic_elt(env, 1), v_291); // name
    stack[-6] = nil;
// Binding inlineinfo
// FLUIDBIND: reloadenv=10 litvec-offset=2 saveloc=5
{   bind_fluid_stack bind_fluid_var(-10, 2, -5);
    setvalue(basic_elt(env, 2), nil); // inlineinfo
    v_291 = v_292;
    if (!car_legal(v_291)) v_291 = cdrerror(v_291); else
    v_291 = cdr(v_291);
    if (!car_legal(v_291)) v_291 = carerror(v_291); else
    v_291 = car(v_291);
    stack[-2] = v_291;
    v_291 = v_292;
    if (!car_legal(v_291)) v_291 = cdrerror(v_291); else
    v_291 = cdr(v_291);
    if (!car_legal(v_291)) v_291 = cdrerror(v_291); else
    v_291 = cdr(v_291);
    if (!car_legal(v_291)) v_291 = carerror(v_291); else
    v_291 = car(v_291);
    stack[-7] = v_291;
    v_293 = qvalue(basic_elt(env, 1)); // name
    v_292 = stack[-2];
    v_291 = stack[-7];
    v_291 = list3(v_293, v_292, v_291);
    env = stack[-10];
    setvalue(basic_elt(env, 2), v_291); // inlineinfo
    v_291 = stack[-2];
    stack[0] = Llength(nil, v_291);
    env = stack[-10];
    v_291 = stack[-8];
    v_291 = Llength(nil, v_291);
    env = stack[-10];
    if (equal(stack[0], v_291)) goto v_34;
    stack[-1] = basic_elt(env, 3); // rlisp
    stack[0] = static_cast<LispObject>(240)+TAG_FIXNUM; // 15
    v_292 = basic_elt(env, 4); // "Argument mismatch for SMACRO"
    v_291 = qvalue(basic_elt(env, 1)); // name
    v_291 = list2(v_292, v_291);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 8); // rerror
    v_291 = (*qfn3(fn))(fn, stack[-1], stack[0], v_291);
    }
    env = stack[-10];
    goto v_32;
v_34:
v_32:
    v_291 = qvalue(basic_elt(env, 5)); // !*loginlines
    if (v_291 == nil) goto v_48;
    v_293 = stack[-2];
    v_292 = stack[-7];
    v_291 = stack[-8];
    {   LispObject fn = basic_elt(env, 9); // log_inlines
    v_291 = (*qfn3(fn))(fn, v_293, v_292, v_291);
    }
    env = stack[-10];
    goto v_46;
v_48:
v_46:
    v_291 = stack[-8];
    {   LispObject fn = basic_elt(env, 10); // no!-side!-effect!-listp
    v_291 = (*qfn1(fn))(fn, v_291);
    }
    env = stack[-10];
    if (v_291 == nil) goto v_58;
    else goto v_56;
v_58:
    v_292 = stack[-2];
    v_291 = stack[-7];
    {   LispObject fn = basic_elt(env, 11); // one!-entry!-listp
    v_291 = (*qfn2(fn))(fn, v_292, v_291);
    }
    env = stack[-10];
    if (v_291 == nil) goto v_61;
    else goto v_56;
v_61:
    goto v_57;
v_56:
    v_292 = stack[-2];
    v_291 = stack[-8];
    {   LispObject fn = basic_elt(env, 12); // pair
    v_292 = (*qfn2(fn))(fn, v_292, v_291);
    }
    env = stack[-10];
    v_291 = stack[-7];
    {   LispObject fn = basic_elt(env, 13); // subla!-q
    v_291 = (*qfn2(fn))(fn, v_292, v_291);
    }
    goto v_19;
v_57:
    v_291 = stack[-2];
    v_292 = Llength(nil, v_291);
    env = stack[-10];
    v_291 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_291 = static_cast<LispObject>(greaterp2(v_292, v_291));
    v_291 = v_291 ? lisp_true : nil;
    env = stack[-10];
    if (v_291 == nil) goto v_71;
    v_291 = stack[-2];
    stack[-4] = v_291;
    v_291 = stack[-4];
    if (v_291 == nil) goto v_85;
    else goto v_86;
v_85:
    v_291 = nil;
    goto v_80;
v_86:
    v_291 = stack[-4];
    if (!car_legal(v_291)) v_291 = carerror(v_291); else
    v_291 = car(v_291);
    stack[0] = v_291;
    v_291 = basic_elt(env, 6); // g
    v_291 = Lgensym1(nil, v_291);
    env = stack[-10];
    v_291 = cons(stack[0], v_291);
    env = stack[-10];
    v_291 = ncons(v_291);
    env = stack[-10];
    stack[-2] = v_291;
    stack[-3] = v_291;
v_81:
    v_291 = stack[-4];
    if (!car_legal(v_291)) v_291 = cdrerror(v_291); else
    v_291 = cdr(v_291);
    stack[-4] = v_291;
    v_291 = stack[-4];
    if (v_291 == nil) goto v_101;
    else goto v_102;
v_101:
    v_291 = stack[-3];
    goto v_80;
v_102:
    stack[-1] = stack[-2];
    v_291 = stack[-4];
    if (!car_legal(v_291)) v_291 = carerror(v_291); else
    v_291 = car(v_291);
    stack[0] = v_291;
    v_291 = basic_elt(env, 6); // g
    v_291 = Lgensym1(nil, v_291);
    env = stack[-10];
    v_291 = cons(stack[0], v_291);
    env = stack[-10];
    v_291 = ncons(v_291);
    env = stack[-10];
    if (!car_legal(stack[-1])) rplacd_fails(stack[-1]);
    setcdr(stack[-1], v_291);
    v_291 = stack[-2];
    if (!car_legal(v_291)) v_291 = cdrerror(v_291); else
    v_291 = cdr(v_291);
    stack[-2] = v_291;
    goto v_81;
v_80:
    stack[0] = v_291;
    v_292 = stack[0];
    v_291 = stack[-7];
    {   LispObject fn = basic_elt(env, 13); // subla!-q
    v_291 = (*qfn2(fn))(fn, v_292, v_291);
    }
    env = stack[-10];
    stack[-7] = v_291;
    v_291 = stack[0];
    stack[-3] = v_291;
    v_291 = stack[-3];
    if (v_291 == nil) goto v_129;
    else goto v_130;
v_129:
    v_291 = nil;
    goto v_124;
v_130:
    v_291 = stack[-3];
    if (!car_legal(v_291)) v_291 = carerror(v_291); else
    v_291 = car(v_291);
    if (!car_legal(v_291)) v_291 = cdrerror(v_291); else
    v_291 = cdr(v_291);
    v_291 = ncons(v_291);
    env = stack[-10];
    stack[-1] = v_291;
    stack[-2] = v_291;
v_125:
    v_291 = stack[-3];
    if (!car_legal(v_291)) v_291 = cdrerror(v_291); else
    v_291 = cdr(v_291);
    stack[-3] = v_291;
    v_291 = stack[-3];
    if (v_291 == nil) goto v_143;
    else goto v_144;
v_143:
    v_291 = stack[-2];
    goto v_124;
v_144:
    stack[0] = stack[-1];
    v_291 = stack[-3];
    if (!car_legal(v_291)) v_291 = carerror(v_291); else
    v_291 = car(v_291);
    if (!car_legal(v_291)) v_291 = cdrerror(v_291); else
    v_291 = cdr(v_291);
    v_291 = ncons(v_291);
    env = stack[-10];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_291);
    v_291 = stack[-1];
    if (!car_legal(v_291)) v_291 = cdrerror(v_291); else
    v_291 = cdr(v_291);
    stack[-1] = v_291;
    goto v_125;
v_124:
    stack[-2] = v_291;
    goto v_55;
v_71:
v_55:
    v_291 = stack[-8];
    stack[-1] = v_291;
v_160:
    v_291 = stack[-1];
    if (v_291 == nil) goto v_164;
    else goto v_165;
v_164:
    goto v_159;
v_165:
    v_291 = stack[-1];
    if (!car_legal(v_291)) v_291 = carerror(v_291); else
    v_291 = car(v_291);
    stack[0] = v_291;
    v_291 = stack[0];
    {   LispObject fn = basic_elt(env, 14); // no!-side!-effectp
    v_291 = (*qfn1(fn))(fn, v_291);
    }
    env = stack[-10];
    if (v_291 == nil) goto v_175;
    else goto v_173;
v_175:
    v_291 = stack[-2];
    if (!car_legal(v_291)) v_292 = carerror(v_291); else
    v_292 = car(v_291);
    v_291 = stack[-7];
    {   LispObject fn = basic_elt(env, 15); // one!-entryp
    v_291 = (*qfn2(fn))(fn, v_292, v_291);
    }
    env = stack[-10];
    if (v_291 == nil) goto v_178;
    else goto v_173;
v_178:
    goto v_174;
v_173:
    v_291 = stack[-2];
    if (!car_legal(v_291)) v_292 = carerror(v_291); else
    v_292 = car(v_291);
    v_291 = stack[0];
    v_291 = cons(v_292, v_291);
    env = stack[-10];
    v_292 = ncons(v_291);
    env = stack[-10];
    v_291 = stack[-7];
    {   LispObject fn = basic_elt(env, 13); // subla!-q
    v_291 = (*qfn2(fn))(fn, v_292, v_291);
    }
    env = stack[-10];
    stack[-7] = v_291;
    goto v_172;
v_174:
    stack[-3] = stack[-6];
    v_291 = stack[-2];
    if (!car_legal(v_291)) v_292 = carerror(v_291); else
    v_292 = car(v_291);
    v_291 = stack[0];
    v_291 = cons(v_292, v_291);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 16); // aconc
    v_291 = (*qfn2(fn))(fn, stack[-3], v_291);
    }
    env = stack[-10];
    stack[-6] = v_291;
    goto v_172;
v_172:
    v_291 = stack[-2];
    if (!car_legal(v_291)) v_291 = cdrerror(v_291); else
    v_291 = cdr(v_291);
    stack[-2] = v_291;
    v_291 = stack[-1];
    if (!car_legal(v_291)) v_291 = cdrerror(v_291); else
    v_291 = cdr(v_291);
    stack[-1] = v_291;
    goto v_160;
v_159:
    v_291 = stack[-6];
    if (v_291 == nil) goto v_204;
    else goto v_205;
v_204:
    v_291 = stack[-7];
    goto v_19;
v_205:
    stack[-4] = basic_elt(env, 7); // lambda
    v_291 = stack[-6];
    stack[-3] = v_291;
    v_291 = stack[-3];
    if (v_291 == nil) goto v_222;
    else goto v_223;
v_222:
    v_291 = nil;
    v_292 = v_291;
    goto v_217;
v_223:
    v_291 = stack[-3];
    if (!car_legal(v_291)) v_291 = carerror(v_291); else
    v_291 = car(v_291);
    if (!car_legal(v_291)) v_291 = carerror(v_291); else
    v_291 = car(v_291);
    v_291 = ncons(v_291);
    env = stack[-10];
    stack[-1] = v_291;
    stack[-2] = v_291;
v_218:
    v_291 = stack[-3];
    if (!car_legal(v_291)) v_291 = cdrerror(v_291); else
    v_291 = cdr(v_291);
    stack[-3] = v_291;
    v_291 = stack[-3];
    if (v_291 == nil) goto v_236;
    else goto v_237;
v_236:
    v_291 = stack[-2];
    v_292 = v_291;
    goto v_217;
v_237:
    stack[0] = stack[-1];
    v_291 = stack[-3];
    if (!car_legal(v_291)) v_291 = carerror(v_291); else
    v_291 = car(v_291);
    if (!car_legal(v_291)) v_291 = carerror(v_291); else
    v_291 = car(v_291);
    v_291 = ncons(v_291);
    env = stack[-10];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_291);
    v_291 = stack[-1];
    if (!car_legal(v_291)) v_291 = cdrerror(v_291); else
    v_291 = cdr(v_291);
    stack[-1] = v_291;
    goto v_218;
v_217:
    v_291 = stack[-7];
    stack[-3] = list3(stack[-4], v_292, v_291);
    env = stack[-10];
    v_291 = stack[-6];
    stack[-4] = v_291;
    v_291 = stack[-4];
    if (v_291 == nil) goto v_260;
    else goto v_261;
v_260:
    v_291 = nil;
    goto v_255;
v_261:
    v_291 = stack[-4];
    if (!car_legal(v_291)) v_291 = carerror(v_291); else
    v_291 = car(v_291);
    if (!car_legal(v_291)) v_291 = cdrerror(v_291); else
    v_291 = cdr(v_291);
    v_291 = ncons(v_291);
    env = stack[-10];
    stack[-1] = v_291;
    stack[-2] = v_291;
v_256:
    v_291 = stack[-4];
    if (!car_legal(v_291)) v_291 = cdrerror(v_291); else
    v_291 = cdr(v_291);
    stack[-4] = v_291;
    v_291 = stack[-4];
    if (v_291 == nil) goto v_274;
    else goto v_275;
v_274:
    v_291 = stack[-2];
    goto v_255;
v_275:
    stack[0] = stack[-1];
    v_291 = stack[-4];
    if (!car_legal(v_291)) v_291 = carerror(v_291); else
    v_291 = car(v_291);
    if (!car_legal(v_291)) v_291 = cdrerror(v_291); else
    v_291 = cdr(v_291);
    v_291 = ncons(v_291);
    env = stack[-10];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_291);
    v_291 = stack[-1];
    if (!car_legal(v_291)) v_291 = cdrerror(v_291); else
    v_291 = cdr(v_291);
    stack[-1] = v_291;
    goto v_256;
v_255:
    v_291 = cons(stack[-3], v_291);
    stack[0] = v_291;
    v_291 = stack[0];
    goto v_19;
    v_291 = nil;
v_19:
    ;}  // end of a binding scope
    ;}  // end of a binding scope
    return onevalue(v_291);
}



// Code for prsum

static LispObject CC_prsum(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_38, v_39, v_40;
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
    v_38 = stack[-1];
    if (v_38 == nil) goto v_11;
    else goto v_12;
v_11:
    v_38 = stack[-2];
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn1(fn))(fn, v_38);
    }
v_12:
    v_38 = stack[0];
    if (!car_legal(v_38)) v_38 = carerror(v_38); else
    v_38 = car(v_38);
    if (v_38 == nil) goto v_16;
    else goto v_17;
v_16:
    v_38 = stack[-1];
    if (!car_legal(v_38)) v_38 = cdrerror(v_38); else
    v_38 = cdr(v_38);
    stack[-1] = v_38;
    v_38 = stack[0];
    if (!car_legal(v_38)) v_38 = cdrerror(v_38); else
    v_38 = cdr(v_38);
    stack[0] = v_38;
    goto v_8;
v_17:
    v_38 = stack[-1];
    if (!car_legal(v_38)) v_39 = carerror(v_38); else
    v_39 = car(v_38);
    v_38 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 2); // to
    v_40 = (*qfn2(fn))(fn, v_39, v_38);
    }
    env = stack[-3];
    v_38 = stack[0];
    if (!car_legal(v_38)) v_39 = carerror(v_38); else
    v_39 = car(v_38);
    v_38 = stack[-2];
    v_38 = acons(v_40, v_39, v_38);
    env = stack[-3];
    stack[-2] = v_38;
    v_38 = stack[-1];
    if (!car_legal(v_38)) v_38 = cdrerror(v_38); else
    v_38 = cdr(v_38);
    stack[-1] = v_38;
    v_38 = stack[0];
    if (!car_legal(v_38)) v_38 = cdrerror(v_38); else
    v_38 = cdr(v_38);
    stack[0] = v_38;
    goto v_8;
    v_38 = nil;
    return onevalue(v_38);
}



// Code for subs2p

static LispObject CC_subs2p(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    v_62 = stack[-2];
    if (!car_legal(v_62)) v_62 = cdrerror(v_62); else
    v_62 = cdr(v_62);
    v_62 = integerp(v_62);
    if (v_62 == nil) goto v_14;
    else goto v_15;
v_14:
    v_62 = lisp_true;
    goto v_13;
v_15:
    v_62 = stack[-2];
    if (!car_legal(v_62)) v_63 = cdrerror(v_62); else
    v_63 = cdr(v_62);
    v_62 = stack[-1];
    v_62 = Ldivide_2(nil, v_63, v_62);
    env = stack[-3];
    stack[-1] = v_62;
    if (!car_legal(v_62)) v_63 = carerror(v_62); else
    v_63 = car(v_62);
    v_62 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_62 = (v_63 == v_62 ? lisp_true : nil);
    goto v_13;
    v_62 = nil;
v_13:
    if (v_62 == nil) goto v_11;
    v_63 = stack[-2];
    v_62 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_62 = cons(v_63, v_62);
    env = stack[-3];
    v_63 = ncons(v_62);
    v_62 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_63, v_62);
v_11:
    v_62 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // simp
    v_63 = (*qfn1(fn))(fn, v_62);
    }
    env = stack[-3];
    v_62 = stack[-1];
    if (!car_legal(v_62)) v_62 = carerror(v_62); else
    v_62 = car(v_62);
    {   LispObject fn = basic_elt(env, 2); // exptsq
    v_62 = (*qfn2(fn))(fn, v_63, v_62);
    }
    env = stack[-3];
    stack[0] = v_62;
    v_62 = stack[-1];
    if (!car_legal(v_62)) v_63 = cdrerror(v_62); else
    v_63 = cdr(v_62);
    v_62 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_63 == v_62) goto v_42;
    else goto v_43;
v_42:
    v_62 = stack[0];
    goto v_41;
v_43:
    v_62 = stack[-2];
    if (!car_legal(v_62)) v_63 = carerror(v_62); else
    v_63 = car(v_62);
    v_62 = stack[-1];
    if (!car_legal(v_62)) v_62 = cdrerror(v_62); else
    v_62 = cdr(v_62);
    {   LispObject fn = basic_elt(env, 3); // to
    v_63 = (*qfn2(fn))(fn, v_63, v_62);
    }
    env = stack[-3];
    v_62 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_62 = cons(v_63, v_62);
    env = stack[-3];
    v_63 = ncons(v_62);
    env = stack[-3];
    v_62 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_63 = cons(v_63, v_62);
    env = stack[-3];
    v_62 = stack[0];
    {
        LispObject fn = basic_elt(env, 4); // multsq
        return (*qfn2(fn))(fn, v_63, v_62);
    }
    v_62 = nil;
v_41:
    return onevalue(v_62);
}



// Code for prim!-part

static LispObject CC_primKpart(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // comfac
    v_9 = (*qfn1(fn))(fn, v_9);
    }
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // comfac!-to!-poly
    v_9 = (*qfn1(fn))(fn, v_9);
    }
    env = stack[-1];
    {
        LispObject v_11 = stack[0];
        LispObject fn = basic_elt(env, 3); // quotf1
        return (*qfn2(fn))(fn, v_11, v_9);
    }
}



// Code for totalcompareconstants

static LispObject CC_totalcompareconstants(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_142, v_143, v_144;
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
    v_143 = stack[-2];
    v_142 = stack[-1];
    if (equal(v_143, v_142)) goto v_7;
    else goto v_8;
v_7:
    v_142 = basic_elt(env, 1); // equal
    goto v_6;
v_8:
    v_142 = stack[-2];
    if (!consp(v_142)) goto v_16;
    else goto v_17;
v_16:
    v_142 = lisp_true;
    goto v_15;
v_17:
    v_142 = stack[-2];
    if (!car_legal(v_142)) v_142 = carerror(v_142); else
    v_142 = car(v_142);
    v_142 = (consp(v_142) ? nil : lisp_true);
    goto v_15;
    v_142 = nil;
v_15:
    if (v_142 == nil) goto v_13;
    v_142 = stack[-1];
    if (!consp(v_142)) goto v_31;
    else goto v_32;
v_31:
    v_142 = lisp_true;
    goto v_30;
v_32:
    v_142 = stack[-1];
    if (!car_legal(v_142)) v_142 = carerror(v_142); else
    v_142 = car(v_142);
    v_142 = (consp(v_142) ? nil : lisp_true);
    goto v_30;
    v_142 = nil;
v_30:
    if (v_142 == nil) goto v_28;
    v_142 = stack[-2];
    if (v_142 == nil) goto v_47;
    else goto v_48;
v_47:
    v_142 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_143 = v_142;
    goto v_46;
v_48:
    v_142 = stack[-2];
    v_143 = v_142;
    goto v_46;
    v_143 = nil;
v_46:
    v_142 = stack[-1];
    if (v_142 == nil) goto v_56;
    else goto v_57;
v_56:
    v_142 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_55;
v_57:
    v_142 = stack[-1];
    goto v_55;
    v_142 = nil;
v_55:
    v_142 = static_cast<LispObject>(lessp2(v_143, v_142));
    v_142 = v_142 ? lisp_true : nil;
    env = stack[-4];
    if (v_142 == nil) goto v_43;
    v_142 = basic_elt(env, 2); // less
    goto v_41;
v_43:
    v_142 = basic_elt(env, 3); // greater
    goto v_41;
    v_142 = nil;
v_41:
    goto v_26;
v_28:
    v_142 = basic_elt(env, 2); // less
    goto v_26;
    v_142 = nil;
v_26:
    goto v_6;
v_13:
    v_142 = stack[-1];
    if (!consp(v_142)) goto v_74;
    else goto v_75;
v_74:
    v_142 = lisp_true;
    goto v_73;
v_75:
    v_142 = stack[-1];
    if (!car_legal(v_142)) v_142 = carerror(v_142); else
    v_142 = car(v_142);
    v_142 = (consp(v_142) ? nil : lisp_true);
    goto v_73;
    v_142 = nil;
v_73:
    if (v_142 == nil) goto v_71;
    v_142 = basic_elt(env, 3); // greater
    goto v_6;
v_71:
// Binding wukord!*
// FLUIDBIND: reloadenv=4 litvec-offset=4 saveloc=3
{   bind_fluid_stack bind_fluid_var(-4, 4, -3);
    setvalue(basic_elt(env, 4), nil); // wukord!*
// Binding wuvarlist!*
// FLUIDBIND: reloadenv=4 litvec-offset=5 saveloc=0
{   bind_fluid_stack bind_fluid_var(-4, 5, 0);
    setvalue(basic_elt(env, 5), nil); // wuvarlist!*
    v_142 = stack[-2];
    if (!car_legal(v_142)) v_142 = carerror(v_142); else
    v_142 = car(v_142);
    if (!car_legal(v_142)) v_142 = carerror(v_142); else
    v_142 = car(v_142);
    if (!car_legal(v_142)) v_143 = carerror(v_142); else
    v_143 = car(v_142);
    v_142 = stack[-1];
    if (!car_legal(v_142)) v_142 = carerror(v_142); else
    v_142 = car(v_142);
    if (!car_legal(v_142)) v_142 = carerror(v_142); else
    v_142 = car(v_142);
    if (!car_legal(v_142)) v_142 = carerror(v_142); else
    v_142 = car(v_142);
    {   LispObject fn = basic_elt(env, 6); // symbollessp
    v_142 = (*qfn2(fn))(fn, v_143, v_142);
    }
    env = stack[-4];
    if (v_142 == nil) goto v_96;
    v_142 = basic_elt(env, 2); // less
    goto v_92;
v_96:
    v_142 = stack[-1];
    if (!car_legal(v_142)) v_142 = carerror(v_142); else
    v_142 = car(v_142);
    if (!car_legal(v_142)) v_142 = carerror(v_142); else
    v_142 = car(v_142);
    if (!car_legal(v_142)) v_143 = carerror(v_142); else
    v_143 = car(v_142);
    v_142 = stack[-2];
    if (!car_legal(v_142)) v_142 = carerror(v_142); else
    v_142 = car(v_142);
    if (!car_legal(v_142)) v_142 = carerror(v_142); else
    v_142 = car(v_142);
    if (!car_legal(v_142)) v_142 = carerror(v_142); else
    v_142 = car(v_142);
    {   LispObject fn = basic_elt(env, 6); // symbollessp
    v_142 = (*qfn2(fn))(fn, v_143, v_142);
    }
    env = stack[-4];
    if (v_142 == nil) goto v_108;
    v_142 = basic_elt(env, 3); // greater
    goto v_92;
v_108:
    v_142 = stack[-2];
    if (!car_legal(v_142)) v_142 = carerror(v_142); else
    v_142 = car(v_142);
    if (!car_legal(v_142)) v_143 = cdrerror(v_142); else
    v_143 = cdr(v_142);
    v_142 = stack[-1];
    if (!car_legal(v_142)) v_142 = carerror(v_142); else
    v_142 = car(v_142);
    if (!car_legal(v_142)) v_142 = cdrerror(v_142); else
    v_142 = cdr(v_142);
    {   LispObject fn = basic_elt(env, 0); // totalcompareconstants
    v_142 = (*qfn2(fn))(fn, v_143, v_142);
    }
    env = stack[-4];
    v_144 = v_142;
    goto v_94;
v_94:
    v_143 = v_144;
    v_142 = basic_elt(env, 1); // equal
    if (v_143 == v_142) goto v_131;
    v_142 = v_144;
    goto v_92;
v_131:
    v_142 = stack[-2];
    if (!car_legal(v_142)) v_143 = cdrerror(v_142); else
    v_143 = cdr(v_142);
    v_142 = stack[-1];
    if (!car_legal(v_142)) v_142 = cdrerror(v_142); else
    v_142 = cdr(v_142);
    {   LispObject fn = basic_elt(env, 0); // totalcompareconstants
    v_142 = (*qfn2(fn))(fn, v_143, v_142);
    }
v_92:
    ;}  // end of a binding scope
    ;}  // end of a binding scope
    goto v_6;
    v_142 = nil;
v_6:
    return onevalue(v_142);
}



// Code for quotientml

static LispObject CC_quotientml(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_65;
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
    v_65 = stack[-1];
    if (!car_legal(v_65)) v_65 = carerror(v_65); else
    v_65 = car(v_65);
    if (is_number(v_65)) goto v_11;
    else goto v_10;
v_11:
    v_65 = stack[-1];
    if (!car_legal(v_65)) v_65 = cdrerror(v_65); else
    v_65 = cdr(v_65);
    if (!car_legal(v_65)) v_65 = carerror(v_65); else
    v_65 = car(v_65);
    if (is_number(v_65)) goto v_14;
    else goto v_10;
v_14:
    v_65 = qvalue(basic_elt(env, 1)); // !*web
    if (v_65 == nil) goto v_20;
    else goto v_21;
v_20:
    v_65 = basic_elt(env, 2); // "<cn type=""rational""> "
    {   LispObject fn = basic_elt(env, 10); // printout
    v_65 = (*qfn1(fn))(fn, v_65);
    }
    env = stack[-2];
    goto v_19;
v_21:
    v_65 = basic_elt(env, 3); // "<cn type=&quot;rational&quot;> "
    {   LispObject fn = basic_elt(env, 10); // printout
    v_65 = (*qfn1(fn))(fn, v_65);
    }
    env = stack[-2];
    goto v_19;
v_19:
    v_65 = stack[-1];
    if (!car_legal(v_65)) v_65 = carerror(v_65); else
    v_65 = car(v_65);
    v_65 = Lprinc(nil, v_65);
    env = stack[-2];
    v_65 = basic_elt(env, 4); // " <sep/> "
    v_65 = Lprinc(nil, v_65);
    env = stack[-2];
    v_65 = stack[-1];
    if (!car_legal(v_65)) v_65 = cdrerror(v_65); else
    v_65 = cdr(v_65);
    if (!car_legal(v_65)) v_65 = carerror(v_65); else
    v_65 = car(v_65);
    v_65 = Lprinc(nil, v_65);
    env = stack[-2];
    v_65 = basic_elt(env, 5); // " </cn>"
    v_65 = Lprinc(nil, v_65);
    goto v_8;
v_10:
    v_65 = basic_elt(env, 6); // "<apply>"
    {   LispObject fn = basic_elt(env, 10); // printout
    v_65 = (*qfn1(fn))(fn, v_65);
    }
    env = stack[-2];
    v_65 = basic_elt(env, 7); // "<"
    v_65 = Lprinc(nil, v_65);
    env = stack[-2];
    v_65 = stack[0];
    v_65 = Lprinc(nil, v_65);
    env = stack[-2];
    v_65 = basic_elt(env, 8); // "/>"
    v_65 = Lprinc(nil, v_65);
    env = stack[-2];
    v_65 = lisp_true;
    {   LispObject fn = basic_elt(env, 11); // indent!*
    v_65 = (*qfn1(fn))(fn, v_65);
    }
    env = stack[-2];
    v_65 = stack[-1];
    if (!car_legal(v_65)) v_65 = cdrerror(v_65); else
    v_65 = cdr(v_65);
    if (!car_legal(v_65)) v_65 = carerror(v_65); else
    v_65 = car(v_65);
    {   LispObject fn = basic_elt(env, 12); // expression
    v_65 = (*qfn1(fn))(fn, v_65);
    }
    env = stack[-2];
    v_65 = stack[-1];
    if (!car_legal(v_65)) v_65 = cdrerror(v_65); else
    v_65 = cdr(v_65);
    if (!car_legal(v_65)) v_65 = cdrerror(v_65); else
    v_65 = cdr(v_65);
    if (!car_legal(v_65)) v_65 = carerror(v_65); else
    v_65 = car(v_65);
    {   LispObject fn = basic_elt(env, 12); // expression
    v_65 = (*qfn1(fn))(fn, v_65);
    }
    env = stack[-2];
    v_65 = nil;
    {   LispObject fn = basic_elt(env, 11); // indent!*
    v_65 = (*qfn1(fn))(fn, v_65);
    }
    env = stack[-2];
    v_65 = basic_elt(env, 9); // "</apply>"
    {   LispObject fn = basic_elt(env, 10); // printout
    v_65 = (*qfn1(fn))(fn, v_65);
    }
    goto v_8;
v_8:
    v_65 = nil;
    return onevalue(v_65);
}



// Code for simpsqrtsq

static LispObject CC_simpsqrtsq(LispObject env,
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
    if (!car_legal(v_11)) v_11 = carerror(v_11); else
    v_11 = car(v_11);
    {   LispObject fn = basic_elt(env, 1); // simpsqrt2
    stack[-1] = (*qfn1(fn))(fn, v_11);
    }
    env = stack[-2];
    v_11 = stack[0];
    if (!car_legal(v_11)) v_11 = cdrerror(v_11); else
    v_11 = cdr(v_11);
    {   LispObject fn = basic_elt(env, 1); // simpsqrt2
    v_11 = (*qfn1(fn))(fn, v_11);
    }
    {
        LispObject v_14 = stack[-1];
        return cons(v_14, v_11);
    }
}



// Code for ps!:arg!-values

static LispObject CC_psTargKvalues(LispObject env,
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
    real_push(nil, nil, nil, nil, nil);
    stack_popper stack_popper_var(6);
// copy arguments values to proper place
    v_124 = v_2;
// end of prologue
    v_123 = v_124;
    if (!car_legal(v_123)) stack[-4] = carerror(v_123); else
    stack[-4] = car(v_123);
    v_123 = v_124;
    if (!car_legal(v_123)) v_123 = cdrerror(v_123); else
    v_123 = cdr(v_123);
    stack[-3] = v_123;
    v_123 = stack[-3];
    if (v_123 == nil) goto v_17;
    else goto v_18;
v_17:
    v_123 = nil;
    goto v_11;
v_18:
    v_123 = stack[-3];
    if (!car_legal(v_123)) v_123 = carerror(v_123); else
    v_123 = car(v_123);
    v_125 = v_123;
    v_123 = v_125;
    if (!consp(v_123)) goto v_31;
    else goto v_32;
v_31:
    v_123 = lisp_true;
    goto v_30;
v_32:
    v_123 = v_125;
    if (!car_legal(v_123)) v_124 = carerror(v_123); else
    v_124 = car(v_123);
    v_123 = basic_elt(env, 1); // !:ps!:
    if (v_124 == v_123) goto v_40;
    v_123 = v_125;
    if (!car_legal(v_123)) v_123 = carerror(v_123); else
    v_123 = car(v_123);
    if (!symbolp(v_123)) v_123 = nil;
    else { v_123 = qfastgets(v_123);
           if (v_123 != nil) { v_123 = elt(v_123, 8); // dname
#ifdef RECORD_GET
             if (v_123 != SPID_NOPROP)
                record_get(elt(fastget_names, 8), 1);
             else record_get(elt(fastget_names, 8), 0),
                v_123 = nil; }
           else record_get(elt(fastget_names, 8), 0); }
#else
             if (v_123 == SPID_NOPROP) v_123 = nil; }}
#endif
    goto v_38;
v_40:
    v_123 = nil;
    goto v_38;
    v_123 = nil;
v_38:
    goto v_30;
    v_123 = nil;
v_30:
    if (v_123 == nil) goto v_28;
    v_123 = v_125;
    goto v_26;
v_28:
    v_123 = v_125;
    v_123 = Lconsp(nil, v_123);
    env = stack[-5];
    if (v_123 == nil) goto v_52;
    v_123 = v_125;
    if (!car_legal(v_123)) v_124 = carerror(v_123); else
    v_124 = car(v_123);
    v_123 = basic_elt(env, 1); // !:ps!:
    if (v_124 == v_123) goto v_56;
    else goto v_52;
v_56:
    v_123 = v_125;
    {   LispObject fn = basic_elt(env, 2); // ps!:value
    v_123 = (*qfn1(fn))(fn, v_123);
    }
    env = stack[-5];
    goto v_26;
v_52:
    v_123 = v_125;
    {   LispObject fn = basic_elt(env, 0); // ps!:arg!-values
    v_123 = (*qfn1(fn))(fn, v_123);
    }
    env = stack[-5];
    goto v_26;
    v_123 = nil;
v_26:
    v_123 = ncons(v_123);
    env = stack[-5];
    stack[-1] = v_123;
    stack[-2] = v_123;
v_12:
    v_123 = stack[-3];
    if (!car_legal(v_123)) v_123 = cdrerror(v_123); else
    v_123 = cdr(v_123);
    stack[-3] = v_123;
    v_123 = stack[-3];
    if (v_123 == nil) goto v_70;
    else goto v_71;
v_70:
    v_123 = stack[-2];
    goto v_11;
v_71:
    stack[0] = stack[-1];
    v_123 = stack[-3];
    if (!car_legal(v_123)) v_123 = carerror(v_123); else
    v_123 = car(v_123);
    v_125 = v_123;
    v_123 = v_125;
    if (!consp(v_123)) goto v_85;
    else goto v_86;
v_85:
    v_123 = lisp_true;
    goto v_84;
v_86:
    v_123 = v_125;
    if (!car_legal(v_123)) v_124 = carerror(v_123); else
    v_124 = car(v_123);
    v_123 = basic_elt(env, 1); // !:ps!:
    if (v_124 == v_123) goto v_94;
    v_123 = v_125;
    if (!car_legal(v_123)) v_123 = carerror(v_123); else
    v_123 = car(v_123);
    if (!symbolp(v_123)) v_123 = nil;
    else { v_123 = qfastgets(v_123);
           if (v_123 != nil) { v_123 = elt(v_123, 8); // dname
#ifdef RECORD_GET
             if (v_123 != SPID_NOPROP)
                record_get(elt(fastget_names, 8), 1);
             else record_get(elt(fastget_names, 8), 0),
                v_123 = nil; }
           else record_get(elt(fastget_names, 8), 0); }
#else
             if (v_123 == SPID_NOPROP) v_123 = nil; }}
#endif
    goto v_92;
v_94:
    v_123 = nil;
    goto v_92;
    v_123 = nil;
v_92:
    goto v_84;
    v_123 = nil;
v_84:
    if (v_123 == nil) goto v_82;
    v_123 = v_125;
    goto v_80;
v_82:
    v_123 = v_125;
    v_123 = Lconsp(nil, v_123);
    env = stack[-5];
    if (v_123 == nil) goto v_106;
    v_123 = v_125;
    if (!car_legal(v_123)) v_124 = carerror(v_123); else
    v_124 = car(v_123);
    v_123 = basic_elt(env, 1); // !:ps!:
    if (v_124 == v_123) goto v_110;
    else goto v_106;
v_110:
    v_123 = v_125;
    {   LispObject fn = basic_elt(env, 2); // ps!:value
    v_123 = (*qfn1(fn))(fn, v_123);
    }
    env = stack[-5];
    goto v_80;
v_106:
    v_123 = v_125;
    {   LispObject fn = basic_elt(env, 0); // ps!:arg!-values
    v_123 = (*qfn1(fn))(fn, v_123);
    }
    env = stack[-5];
    goto v_80;
    v_123 = nil;
v_80:
    v_123 = ncons(v_123);
    env = stack[-5];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_123);
    v_123 = stack[-1];
    if (!car_legal(v_123)) v_123 = cdrerror(v_123); else
    v_123 = cdr(v_123);
    stack[-1] = v_123;
    goto v_12;
v_11:
    {
        LispObject v_131 = stack[-4];
        return cons(v_131, v_123);
    }
}



// Code for wedgewedge

static LispObject CC_wedgewedge(LispObject env,
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
    stack[-2] = nil;
v_9:
    v_52 = stack[-1];
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    if (v_52 == nil) goto v_14;
    else goto v_15;
v_14:
    goto v_10;
v_15:
    v_52 = stack[-1];
    if (!car_legal(v_52)) v_54 = carerror(v_52); else
    v_54 = car(v_52);
    v_53 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_52 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_54 = list2star(v_54, v_53, v_52);
    env = stack[-3];
    v_53 = nil;
    v_52 = stack[-2];
    v_52 = acons(v_54, v_53, v_52);
    env = stack[-3];
    stack[-2] = v_52;
    v_52 = stack[-1];
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    stack[-1] = v_52;
    goto v_9;
v_10:
    v_52 = stack[-1];
    if (!car_legal(v_52)) v_54 = carerror(v_52); else
    v_54 = car(v_52);
    v_53 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_52 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_52 = list2star(v_54, v_53, v_52);
    env = stack[-3];
    stack[-1] = ncons(v_52);
    env = stack[-3];
    v_54 = stack[0];
    v_53 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_52 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_52 = list2star(v_54, v_53, v_52);
    env = stack[-3];
    v_52 = ncons(v_52);
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 1); // wedgepf2
    v_52 = (*qfn2(fn))(fn, stack[-1], v_52);
    }
    env = stack[-3];
    v_53 = v_52;
v_11:
    v_52 = stack[-2];
    if (v_52 == nil) goto v_42;
    else goto v_43;
v_42:
    v_52 = v_53;
    goto v_8;
v_43:
    v_52 = stack[-2];
    v_52 = car(v_52);
    {   LispObject fn = basic_elt(env, 1); // wedgepf2
    v_52 = (*qfn2(fn))(fn, v_52, v_53);
    }
    env = stack[-3];
    v_53 = v_52;
    v_52 = stack[-2];
    v_52 = cdr(v_52);
    stack[-2] = v_52;
    goto v_11;
v_8:
    return onevalue(v_52);
}



// Code for mksqrt

static LispObject CC_mksqrt(LispObject env,
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
// space for vars preserved across procedure calls
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_33 = qvalue(basic_elt(env, 1)); // !*keepsqrts
    if (v_33 == nil) goto v_6;
    else goto v_7;
v_6:
    stack[-1] = basic_elt(env, 2); // expt
    v_35 = basic_elt(env, 3); // quotient
    v_34 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_33 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_33 = list3(v_35, v_34, v_33);
    {
        LispObject v_38 = stack[-1];
        LispObject v_39 = stack[0];
        return list3(v_38, v_39, v_33);
    }
v_7:
    v_33 = qvalue(basic_elt(env, 4)); // !*!*sqrt
    if (v_33 == nil) goto v_20;
    else goto v_21;
v_20:
    v_33 = lisp_true;
    setvalue(basic_elt(env, 4), v_33); // !*!*sqrt
    v_35 = basic_elt(env, 5); // (x)
    v_34 = lisp_true;
    v_33 = basic_elt(env, 6); // (let00 (quote ((equal (expt (sqrt x) 2) x))))
    v_33 = list3(v_35, v_34, v_33);
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 8); // forall
    v_33 = (*qfn1(fn))(fn, v_33);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 9); // aeval
    v_33 = (*qfn1(fn))(fn, v_33);
    }
    env = stack[-2];
    goto v_19;
v_21:
v_19:
    v_34 = basic_elt(env, 7); // sqrt
    v_33 = stack[0];
    return list2(v_34, v_33);
    v_33 = nil;
    return onevalue(v_33);
}



// Code for fermionicp

static LispObject CC_fermionicp(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_124, v_125;
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
    v_124 = stack[0];
    if (!consp(v_124)) goto v_7;
    v_124 = stack[0];
    if (!car_legal(v_124)) v_125 = carerror(v_124); else
    v_125 = car(v_124);
    v_124 = basic_elt(env, 1); // fermionic
    v_124 = Lflagp(nil, v_125, v_124);
    env = stack[-1];
    if (v_124 == nil) goto v_12;
    v_124 = lisp_true;
    goto v_10;
v_12:
    v_124 = stack[0];
    if (!car_legal(v_124)) v_125 = carerror(v_124); else
    v_125 = car(v_124);
    v_124 = basic_elt(env, 2); // d
    if (v_125 == v_124) goto v_26;
    else goto v_27;
v_26:
    v_124 = stack[0];
    if (!car_legal(v_124)) v_124 = cdrerror(v_124); else
    v_124 = cdr(v_124);
    if (!car_legal(v_124)) v_124 = cdrerror(v_124); else
    v_124 = cdr(v_124);
    if (!car_legal(v_124)) v_124 = carerror(v_124); else
    v_124 = car(v_124);
    {   LispObject fn = basic_elt(env, 0); // fermionicp
    v_124 = (*qfn1(fn))(fn, v_124);
    }
    env = stack[-1];
    v_124 = (v_124 == nil ? lisp_true : nil);
    goto v_25;
v_27:
    v_124 = nil;
    goto v_25;
    v_124 = nil;
v_25:
    if (v_124 == nil) goto v_23;
    v_124 = lisp_true;
    goto v_21;
v_23:
    v_124 = stack[0];
    if (!car_legal(v_124)) v_125 = carerror(v_124); else
    v_125 = car(v_124);
    v_124 = basic_elt(env, 3); // df
    if (v_125 == v_124) goto v_48;
    else goto v_49;
v_48:
    v_124 = stack[0];
    if (!car_legal(v_124)) v_124 = cdrerror(v_124); else
    v_124 = cdr(v_124);
    if (!car_legal(v_124)) v_124 = cdrerror(v_124); else
    v_124 = cdr(v_124);
    if (!car_legal(v_124)) v_124 = carerror(v_124); else
    v_124 = car(v_124);
    {   LispObject fn = basic_elt(env, 0); // fermionicp
    v_124 = (*qfn1(fn))(fn, v_124);
    }
    env = stack[-1];
    goto v_47;
v_49:
    v_124 = nil;
    goto v_47;
    v_124 = nil;
v_47:
    if (v_124 == nil) goto v_45;
    else goto v_44;
v_45:
    v_124 = stack[0];
    if (!car_legal(v_124)) v_125 = carerror(v_124); else
    v_125 = car(v_124);
    v_124 = basic_elt(env, 3); // df
    if (v_125 == v_124) goto v_63;
    else goto v_64;
v_63:
    v_124 = stack[0];
    if (!car_legal(v_124)) v_124 = cdrerror(v_124); else
    v_124 = cdr(v_124);
    if (!car_legal(v_124)) v_124 = carerror(v_124); else
    v_124 = car(v_124);
    {   LispObject fn = basic_elt(env, 0); // fermionicp
    v_124 = (*qfn1(fn))(fn, v_124);
    }
    env = stack[-1];
    if (v_124 == nil) goto v_71;
    v_125 = basic_elt(env, 4); // s
    v_124 = stack[0];
    if (!car_legal(v_124)) v_124 = cdrerror(v_124); else
    v_124 = cdr(v_124);
    if (!car_legal(v_124)) v_124 = cdrerror(v_124); else
    v_124 = cdr(v_124);
    v_124 = Lmemq(nil, v_125, v_124);
    if (v_124 == nil) goto v_79;
    v_124 = qvalue(basic_elt(env, 5)); // s_changes_parity
    v_124 = (v_124 == nil ? lisp_true : nil);
    goto v_77;
v_79:
    v_125 = lisp_true;
    v_124 = stack[0];
    if (!car_legal(v_124)) v_124 = cdrerror(v_124); else
    v_124 = cdr(v_124);
    if (!car_legal(v_124)) v_124 = cdrerror(v_124); else
    v_124 = cdr(v_124);
    v_124 = Lmemq(nil, v_125, v_124);
    if (v_124 == nil) goto v_88;
    v_124 = qvalue(basic_elt(env, 6)); // t_changes_parity
    v_124 = (v_124 == nil ? lisp_true : nil);
    goto v_77;
v_88:
    v_124 = lisp_true;
    goto v_77;
    v_124 = nil;
v_77:
    goto v_69;
v_71:
    v_125 = basic_elt(env, 4); // s
    v_124 = stack[0];
    if (!car_legal(v_124)) v_124 = cdrerror(v_124); else
    v_124 = cdr(v_124);
    if (!car_legal(v_124)) v_124 = cdrerror(v_124); else
    v_124 = cdr(v_124);
    v_124 = Lmemq(nil, v_125, v_124);
    if (v_124 == nil) goto v_100;
    v_124 = qvalue(basic_elt(env, 5)); // s_changes_parity
    goto v_69;
v_100:
    v_125 = lisp_true;
    v_124 = stack[0];
    if (!car_legal(v_124)) v_124 = cdrerror(v_124); else
    v_124 = cdr(v_124);
    if (!car_legal(v_124)) v_124 = cdrerror(v_124); else
    v_124 = cdr(v_124);
    v_124 = Lmemq(nil, v_125, v_124);
    if (v_124 == nil) goto v_108;
    v_124 = qvalue(basic_elt(env, 6)); // t_changes_parity
    goto v_69;
v_108:
    v_124 = nil;
    goto v_69;
    v_124 = nil;
v_69:
    goto v_62;
v_64:
    v_124 = nil;
    goto v_62;
    v_124 = nil;
v_62:
v_44:
    goto v_21;
    v_124 = nil;
v_21:
    goto v_10;
    v_124 = nil;
v_10:
    goto v_5;
v_7:
    v_124 = nil;
    goto v_5;
    v_124 = nil;
v_5:
    return onevalue(v_124);
}



// Code for rule

static LispObject CC_rule(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_138, v_139;
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(9);
// copy arguments values to proper place
    stack[-4] = v_5;
    stack[0] = v_4;
    stack[-5] = v_3;
    stack[-6] = v_2;
// end of prologue
    stack[-7] = nil;
    v_139 = stack[0];
    v_138 = stack[-6];
    v_138 = Lsubla(nil, v_139, v_138);
    env = stack[-8];
    stack[-2] = v_138;
    v_139 = stack[-2];
    v_138 = stack[-6];
    if (equal(v_139, v_138)) goto v_20;
    v_138 = stack[-2];
    if (!consp(v_138)) goto v_25;
    else goto v_26;
v_25:
    v_138 = stack[-6];
    {
        LispObject fn = basic_elt(env, 7); // errpri1
        return (*qfn1(fn))(fn, v_138);
    }
v_26:
    v_138 = lisp_true;
    stack[-7] = v_138;
    v_138 = stack[-2];
    stack[-6] = v_138;
    goto v_24;
v_24:
    goto v_18;
v_20:
v_18:
    v_139 = stack[0];
    v_138 = stack[-5];
    v_138 = Lsubla(nil, v_139, v_138);
    env = stack[-8];
    stack[-2] = v_138;
    v_139 = stack[-2];
    v_138 = stack[-5];
    if (equal(v_139, v_138)) goto v_40;
    v_138 = stack[-2];
    stack[-5] = v_138;
    v_139 = stack[-5];
    v_138 = basic_elt(env, 1); // !*sq!*
    if (!consp(v_139)) goto v_47;
    v_139 = car(v_139);
    if (v_139 == v_138) goto v_46;
    else goto v_47;
v_46:
    v_138 = stack[-5];
    if (!car_legal(v_138)) v_138 = cdrerror(v_138); else
    v_138 = cdr(v_138);
    if (!car_legal(v_138)) v_138 = carerror(v_138); else
    v_138 = car(v_138);
    {   LispObject fn = basic_elt(env, 8); // prepsq!*
    v_138 = (*qfn1(fn))(fn, v_138);
    }
    env = stack[-8];
    stack[-5] = v_138;
    goto v_45;
v_47:
v_45:
    goto v_38;
v_40:
v_38:
    v_138 = stack[0];
    stack[-3] = v_138;
    v_138 = stack[-3];
    if (v_138 == nil) goto v_64;
    else goto v_65;
v_64:
    v_138 = nil;
    goto v_59;
v_65:
    v_138 = stack[-3];
    if (!car_legal(v_138)) v_138 = carerror(v_138); else
    v_138 = car(v_138);
    if (!car_legal(v_138)) v_138 = cdrerror(v_138); else
    v_138 = cdr(v_138);
    v_138 = ncons(v_138);
    env = stack[-8];
    stack[-1] = v_138;
    stack[-2] = v_138;
v_60:
    v_138 = stack[-3];
    if (!car_legal(v_138)) v_138 = cdrerror(v_138); else
    v_138 = cdr(v_138);
    stack[-3] = v_138;
    v_138 = stack[-3];
    if (v_138 == nil) goto v_78;
    else goto v_79;
v_78:
    v_138 = stack[-2];
    goto v_59;
v_79:
    stack[0] = stack[-1];
    v_138 = stack[-3];
    if (!car_legal(v_138)) v_138 = carerror(v_138); else
    v_138 = car(v_138);
    if (!car_legal(v_138)) v_138 = cdrerror(v_138); else
    v_138 = cdr(v_138);
    v_138 = ncons(v_138);
    env = stack[-8];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_138);
    v_138 = stack[-1];
    if (!car_legal(v_138)) v_138 = cdrerror(v_138); else
    v_138 = cdr(v_138);
    stack[-1] = v_138;
    goto v_60;
v_59:
    stack[0] = v_138;
    v_139 = stack[0];
    v_138 = qvalue(basic_elt(env, 2)); // mcond!*
    {   LispObject fn = basic_elt(env, 9); // smemql
    v_138 = (*qfn2(fn))(fn, v_139, v_138);
    }
    env = stack[-8];
    stack[-2] = v_138;
    v_139 = stack[0];
    v_138 = stack[-6];
    {   LispObject fn = basic_elt(env, 9); // smemql
    v_138 = (*qfn2(fn))(fn, v_139, v_138);
    }
    env = stack[-8];
    stack[-1] = v_138;
    v_139 = stack[-2];
    v_138 = stack[-1];
    {   LispObject fn = basic_elt(env, 10); // setdiff
    v_139 = (*qfn2(fn))(fn, v_139, v_138);
    }
    env = stack[-8];
    v_138 = v_139;
    if (v_139 == nil) goto v_102;
    else goto v_100;
v_102:
    v_139 = stack[0];
    v_138 = stack[-5];
    {   LispObject fn = basic_elt(env, 9); // smemql
    v_139 = (*qfn2(fn))(fn, v_139, v_138);
    }
    env = stack[-8];
    v_138 = stack[-2];
    {   LispObject fn = basic_elt(env, 10); // setdiff
    stack[0] = (*qfn2(fn))(fn, v_139, v_138);
    }
    env = stack[-8];
    v_139 = stack[-1];
    v_138 = stack[-2];
    {   LispObject fn = basic_elt(env, 10); // setdiff
    v_138 = (*qfn2(fn))(fn, v_139, v_138);
    }
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 10); // setdiff
    v_139 = (*qfn2(fn))(fn, stack[0], v_138);
    }
    env = stack[-8];
    v_138 = v_139;
    if (v_139 == nil) goto v_106;
    else goto v_100;
v_106:
    goto v_101;
v_100:
    v_139 = basic_elt(env, 3); // "Unmatched free variable(s)"
    v_138 = cons(v_139, v_138);
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 11); // lprie
    v_138 = (*qfn1(fn))(fn, v_138);
    }
    env = stack[-8];
    v_138 = basic_elt(env, 4); // hold
    setvalue(basic_elt(env, 5), v_138); // erfg!*
    v_138 = nil;
    goto v_13;
v_101:
    v_139 = stack[-6];
    v_138 = basic_elt(env, 6); // getel
    if (!consp(v_139)) goto v_123;
    v_139 = car(v_139);
    if (v_139 == v_138) goto v_122;
    else goto v_123;
v_122:
    v_138 = stack[-6];
    if (!car_legal(v_138)) v_138 = cdrerror(v_138); else
    v_138 = cdr(v_138);
    if (!car_legal(v_138)) v_138 = carerror(v_138); else
    v_138 = car(v_138);
    {   LispObject fn = basic_elt(env, 12); // lispeval
    v_138 = (*qfn1(fn))(fn, v_138);
    }
    env = stack[-8];
    stack[-6] = v_138;
    goto v_99;
v_123:
v_99:
    stack[-1] = stack[-6];
    stack[-2] = stack[-5];
    stack[0] = nil;
    v_139 = stack[-4];
    v_138 = stack[-7];
    v_138 = list2(v_139, v_138);
    env = stack[-8];
    {
        LispObject v_148 = stack[-1];
        LispObject v_149 = stack[-2];
        LispObject v_150 = stack[0];
        LispObject fn = basic_elt(env, 13); // let3
        return (*qfn4up(fn))(fn, v_148, v_149, v_150, v_138);
    }
v_13:
    return onevalue(v_138);
}



// Code for depend!-f

static LispObject CC_dependKf(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
v_1:
    v_44 = stack[-1];
    if (!consp(v_44)) goto v_11;
    else goto v_12;
v_11:
    v_44 = lisp_true;
    goto v_10;
v_12:
    v_44 = stack[-1];
    if (!car_legal(v_44)) v_44 = carerror(v_44); else
    v_44 = car(v_44);
    v_44 = (consp(v_44) ? nil : lisp_true);
    goto v_10;
    v_44 = nil;
v_10:
    if (v_44 == nil) goto v_8;
    v_44 = nil;
    goto v_6;
v_8:
    v_44 = stack[-1];
    if (!car_legal(v_44)) v_44 = carerror(v_44); else
    v_44 = car(v_44);
    if (!car_legal(v_44)) v_44 = carerror(v_44); else
    v_44 = car(v_44);
    if (!car_legal(v_44)) v_45 = carerror(v_44); else
    v_45 = car(v_44);
    v_44 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // depend!-p
    v_44 = (*qfn2(fn))(fn, v_45, v_44);
    }
    env = stack[-2];
    if (v_44 == nil) goto v_25;
    else goto v_24;
v_25:
    v_44 = stack[-1];
    if (!car_legal(v_44)) v_44 = carerror(v_44); else
    v_44 = car(v_44);
    if (!car_legal(v_44)) v_45 = cdrerror(v_44); else
    v_45 = cdr(v_44);
    v_44 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // depend!-f
    v_44 = (*qfn2(fn))(fn, v_45, v_44);
    }
    env = stack[-2];
    if (v_44 == nil) goto v_34;
    else goto v_33;
v_34:
    v_44 = stack[-1];
    if (!car_legal(v_44)) v_45 = cdrerror(v_44); else
    v_45 = cdr(v_44);
    v_44 = stack[0];
    stack[-1] = v_45;
    stack[0] = v_44;
    goto v_1;
v_33:
v_24:
    goto v_6;
    v_44 = nil;
v_6:
    return onevalue(v_44);
}



// Code for mri_ofsf2mri

static LispObject CC_mri_ofsf2mri(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    v_10 = v_3;
    v_11 = v_2;
// end of prologue
    stack[-1] = v_11;
    stack[0] = basic_elt(env, 1); // mri_ofsf2mriat
    v_10 = ncons(v_10);
    env = stack[-2];
    {
        LispObject v_14 = stack[-1];
        LispObject v_15 = stack[0];
        LispObject fn = basic_elt(env, 2); // cl_apply2ats1
        return (*qfn3(fn))(fn, v_14, v_15, v_10);
    }
}



// Code for csymbolrd

static LispObject CC_csymbolrd(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_17, v_18, v_19;
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
    {   LispObject fn = basic_elt(env, 1); // fnrd
    v_17 = (*qfn0(fn))(fn);
    }
    env = stack[-1];
    stack[0] = v_17;
    {   LispObject fn = basic_elt(env, 2); // stats_getargs
    v_17 = (*qfn0(fn))(fn);
    }
    v_19 = stack[0];
    v_18 = nil;
    return list2star(v_19, v_18, v_17);
    return onevalue(v_17);
}



// Code for !*rn2rd

static LispObject CC_Hrn2rd(LispObject env,
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
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_9 = v_2;
// end of prologue
    if (!car_legal(v_9)) v_9 = cdrerror(v_9); else
    v_9 = cdr(v_9);
    {   LispObject fn = basic_elt(env, 1); // r2bf
    v_9 = (*qfn1(fn))(fn, v_9);
    }
    env = stack[0];
    {   LispObject fn = basic_elt(env, 2); // chkrn!*
    v_9 = (*qfn1(fn))(fn, v_9);
    }
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 3); // mkround
        return (*qfn1(fn))(fn, v_9);
    }
}



// Code for dipcontevmin

static LispObject CC_dipcontevmin(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_60 = nil;
v_10:
    v_58 = stack[-1];
    if (v_58 == nil) goto v_13;
    v_58 = stack[0];
    if (v_58 == nil) goto v_13;
    goto v_14;
v_13:
    goto v_9;
v_14:
    v_58 = stack[-1];
    if (!car_legal(v_58)) v_59 = carerror(v_58); else
    v_59 = car(v_58);
    v_58 = stack[0];
    if (!car_legal(v_58)) v_58 = carerror(v_58); else
    v_58 = car(v_58);
    if ((static_cast<std::intptr_t>(v_59) < static_cast<std::intptr_t>(v_58))) goto v_23;
    else goto v_24;
v_23:
    v_58 = stack[-1];
    if (!car_legal(v_58)) v_58 = carerror(v_58); else
    v_58 = car(v_58);
    goto v_22;
v_24:
    v_58 = stack[0];
    if (!car_legal(v_58)) v_58 = carerror(v_58); else
    v_58 = car(v_58);
    goto v_22;
    v_58 = nil;
v_22:
    v_59 = v_60;
    v_58 = cons(v_58, v_59);
    env = stack[-2];
    v_60 = v_58;
    v_58 = stack[-1];
    if (!car_legal(v_58)) v_58 = cdrerror(v_58); else
    v_58 = cdr(v_58);
    stack[-1] = v_58;
    v_58 = stack[0];
    if (!car_legal(v_58)) v_58 = cdrerror(v_58); else
    v_58 = cdr(v_58);
    stack[0] = v_58;
    goto v_10;
v_9:
v_42:
    v_58 = v_60;
    if (v_58 == nil) goto v_45;
    v_59 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_58 = v_60;
    if (!car_legal(v_58)) v_58 = carerror(v_58); else
    v_58 = car(v_58);
    if (v_59 == v_58) goto v_49;
    else goto v_45;
v_49:
    goto v_46;
v_45:
    goto v_41;
v_46:
    v_58 = v_60;
    if (!car_legal(v_58)) v_58 = cdrerror(v_58); else
    v_58 = cdr(v_58);
    v_60 = v_58;
    goto v_42;
v_41:
    v_58 = v_60;
        return Lnreverse(nil, v_58);
    return onevalue(v_58);
}



// Code for subfindices

static LispObject CC_subfindices(LispObject env,
                         LispObject v_2, LispObject v_3)
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
// Binding alglist!*
// FLUIDBIND: reloadenv=4 litvec-offset=1 saveloc=3
{   bind_fluid_stack bind_fluid_var(-4, 1, -3);
    setvalue(basic_elt(env, 1), nil); // alglist!*
    v_135 = nil;
    v_135 = ncons(v_135);
    env = stack[-4];
    setvalue(basic_elt(env, 1), v_135); // alglist!*
    v_135 = stack[-2];
    if (!consp(v_135)) goto v_17;
    else goto v_18;
v_17:
    v_135 = lisp_true;
    goto v_16;
v_18:
    v_135 = stack[-2];
    if (!car_legal(v_135)) v_135 = carerror(v_135); else
    v_135 = car(v_135);
    v_135 = (consp(v_135) ? nil : lisp_true);
    goto v_16;
    v_135 = nil;
v_16:
    if (v_135 == nil) goto v_14;
    v_136 = stack[-2];
    v_135 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_135 = cons(v_136, v_135);
    goto v_12;
v_14:
    v_135 = stack[-2];
    if (!car_legal(v_135)) v_135 = carerror(v_135); else
    v_135 = car(v_135);
    if (!car_legal(v_135)) v_135 = carerror(v_135); else
    v_135 = car(v_135);
    if (!car_legal(v_135)) v_135 = carerror(v_135); else
    v_135 = car(v_135);
    if (!consp(v_135)) goto v_35;
    else goto v_36;
v_35:
    v_135 = stack[-2];
    if (!car_legal(v_135)) v_135 = carerror(v_135); else
    v_135 = car(v_135);
    if (!car_legal(v_135)) v_136 = carerror(v_135); else
    v_136 = car(v_135);
    v_135 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_135 = cons(v_136, v_135);
    env = stack[-4];
    v_136 = ncons(v_135);
    env = stack[-4];
    v_135 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_135 = cons(v_136, v_135);
    env = stack[-4];
    stack[0] = v_135;
    goto v_34;
v_36:
    v_135 = stack[-2];
    if (!car_legal(v_135)) v_135 = carerror(v_135); else
    v_135 = car(v_135);
    if (!car_legal(v_135)) v_135 = carerror(v_135); else
    v_135 = car(v_135);
    if (!car_legal(v_135)) v_135 = carerror(v_135); else
    v_135 = car(v_135);
    {   LispObject fn = basic_elt(env, 3); // sfp
    v_135 = (*qfn1(fn))(fn, v_135);
    }
    env = stack[-4];
    if (v_135 == nil) goto v_50;
    v_135 = stack[-2];
    if (!car_legal(v_135)) v_135 = carerror(v_135); else
    v_135 = car(v_135);
    if (!car_legal(v_135)) v_135 = carerror(v_135); else
    v_135 = car(v_135);
    if (!car_legal(v_135)) v_136 = carerror(v_135); else
    v_136 = car(v_135);
    v_135 = stack[-1];
    {   LispObject fn = basic_elt(env, 0); // subfindices
    v_136 = (*qfn2(fn))(fn, v_136, v_135);
    }
    env = stack[-4];
    v_135 = stack[-2];
    if (!car_legal(v_135)) v_135 = carerror(v_135); else
    v_135 = car(v_135);
    if (!car_legal(v_135)) v_135 = carerror(v_135); else
    v_135 = car(v_135);
    if (!car_legal(v_135)) v_135 = cdrerror(v_135); else
    v_135 = cdr(v_135);
    {   LispObject fn = basic_elt(env, 4); // exptsq
    v_135 = (*qfn2(fn))(fn, v_136, v_135);
    }
    env = stack[-4];
    stack[0] = v_135;
    goto v_34;
v_50:
    v_135 = stack[-2];
    if (!car_legal(v_135)) v_135 = carerror(v_135); else
    v_135 = car(v_135);
    if (!car_legal(v_135)) v_135 = carerror(v_135); else
    v_135 = car(v_135);
    if (!car_legal(v_135)) v_135 = carerror(v_135); else
    v_135 = car(v_135);
    if (!car_legal(v_135)) v_135 = carerror(v_135); else
    v_135 = car(v_135);
    if (!symbolp(v_135)) v_135 = nil;
    else { v_135 = qfastgets(v_135);
           if (v_135 != nil) { v_135 = elt(v_135, 16); // indexvar
#ifdef RECORD_GET
             if (v_135 == SPID_NOPROP)
                record_get(elt(fastget_names, 16), 0),
                v_135 = nil;
             else record_get(elt(fastget_names, 16), 1),
                v_135 = lisp_true; }
           else record_get(elt(fastget_names, 16), 0); }
#else
             if (v_135 == SPID_NOPROP) v_135 = nil; else v_135 = lisp_true; }}
#endif
    if (v_135 == nil) goto v_68;
    v_135 = stack[-2];
    if (!car_legal(v_135)) v_135 = carerror(v_135); else
    v_135 = car(v_135);
    if (!car_legal(v_135)) v_135 = carerror(v_135); else
    v_135 = car(v_135);
    if (!car_legal(v_135)) v_135 = carerror(v_135); else
    v_135 = car(v_135);
    if (!car_legal(v_135)) stack[0] = carerror(v_135); else
    stack[0] = car(v_135);
    v_136 = stack[-1];
    v_135 = stack[-2];
    if (!car_legal(v_135)) v_135 = carerror(v_135); else
    v_135 = car(v_135);
    if (!car_legal(v_135)) v_135 = carerror(v_135); else
    v_135 = car(v_135);
    if (!car_legal(v_135)) v_135 = carerror(v_135); else
    v_135 = car(v_135);
    if (!car_legal(v_135)) v_135 = cdrerror(v_135); else
    v_135 = cdr(v_135);
    v_135 = Lsubla(nil, v_136, v_135);
    env = stack[-4];
    v_135 = cons(stack[0], v_135);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 5); // simpindexvar
    v_136 = (*qfn1(fn))(fn, v_135);
    }
    env = stack[-4];
    v_135 = stack[-2];
    if (!car_legal(v_135)) v_135 = carerror(v_135); else
    v_135 = car(v_135);
    if (!car_legal(v_135)) v_135 = carerror(v_135); else
    v_135 = car(v_135);
    if (!car_legal(v_135)) v_135 = cdrerror(v_135); else
    v_135 = cdr(v_135);
    {   LispObject fn = basic_elt(env, 4); // exptsq
    v_135 = (*qfn2(fn))(fn, v_136, v_135);
    }
    env = stack[-4];
    stack[0] = v_135;
    goto v_34;
v_68:
    v_135 = stack[-2];
    if (!car_legal(v_135)) v_135 = carerror(v_135); else
    v_135 = car(v_135);
    if (!car_legal(v_135)) v_135 = carerror(v_135); else
    v_135 = car(v_135);
    if (!car_legal(v_135)) v_135 = carerror(v_135); else
    v_135 = car(v_135);
    if (!car_legal(v_135)) v_136 = carerror(v_135); else
    v_136 = car(v_135);
    v_135 = basic_elt(env, 2); // (wedge d partdf innerprod liedf hodge vardf)
    v_135 = Lmemq(nil, v_136, v_135);
    if (v_135 == nil) goto v_95;
    v_136 = stack[-1];
    v_135 = stack[-2];
    if (!car_legal(v_135)) v_135 = carerror(v_135); else
    v_135 = car(v_135);
    if (!car_legal(v_135)) v_135 = carerror(v_135); else
    v_135 = car(v_135);
    if (!car_legal(v_135)) v_135 = carerror(v_135); else
    v_135 = car(v_135);
    {   LispObject fn = basic_elt(env, 6); // subindk
    v_135 = (*qfn2(fn))(fn, v_136, v_135);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 7); // simp
    v_136 = (*qfn1(fn))(fn, v_135);
    }
    env = stack[-4];
    v_135 = stack[-2];
    if (!car_legal(v_135)) v_135 = carerror(v_135); else
    v_135 = car(v_135);
    if (!car_legal(v_135)) v_135 = carerror(v_135); else
    v_135 = car(v_135);
    if (!car_legal(v_135)) v_135 = cdrerror(v_135); else
    v_135 = cdr(v_135);
    {   LispObject fn = basic_elt(env, 4); // exptsq
    v_135 = (*qfn2(fn))(fn, v_136, v_135);
    }
    env = stack[-4];
    stack[0] = v_135;
    goto v_34;
v_95:
    v_135 = stack[-2];
    if (!car_legal(v_135)) v_135 = carerror(v_135); else
    v_135 = car(v_135);
    if (!car_legal(v_135)) v_136 = carerror(v_135); else
    v_136 = car(v_135);
    v_135 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_135 = cons(v_136, v_135);
    env = stack[-4];
    v_136 = ncons(v_135);
    env = stack[-4];
    v_135 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_135 = cons(v_136, v_135);
    env = stack[-4];
    stack[0] = v_135;
    goto v_34;
    stack[0] = nil;
v_34:
    v_135 = stack[-2];
    if (!car_legal(v_135)) v_135 = carerror(v_135); else
    v_135 = car(v_135);
    if (!car_legal(v_135)) v_136 = cdrerror(v_135); else
    v_136 = cdr(v_135);
    v_135 = stack[-1];
    {   LispObject fn = basic_elt(env, 0); // subfindices
    v_135 = (*qfn2(fn))(fn, v_136, v_135);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 8); // multsq
    stack[0] = (*qfn2(fn))(fn, stack[0], v_135);
    }
    env = stack[-4];
    v_135 = stack[-2];
    if (!car_legal(v_135)) v_136 = cdrerror(v_135); else
    v_136 = cdr(v_135);
    v_135 = stack[-1];
    {   LispObject fn = basic_elt(env, 0); // subfindices
    v_135 = (*qfn2(fn))(fn, v_136, v_135);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 9); // addsq
    v_135 = (*qfn2(fn))(fn, stack[0], v_135);
    }
    goto v_12;
    v_135 = nil;
v_12:
    ;}  // end of a binding scope
    return onevalue(v_135);
}



// Code for gd_gcasesimpl

static LispObject CC_gd_gcasesimpl(LispObject env,
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
// space for vars preserved across procedure calls
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_15 = stack[0];
    if (!car_legal(v_15)) stack[-1] = carerror(v_15); else
    stack[-1] = car(v_15);
    v_15 = stack[0];
    if (!car_legal(v_15)) v_15 = cdrerror(v_15); else
    v_15 = cdr(v_15);
    if (!car_legal(v_15)) v_15 = carerror(v_15); else
    v_15 = car(v_15);
    {   LispObject fn = basic_elt(env, 1); // gd_simpl
    v_16 = (*qfn1(fn))(fn, v_15);
    }
    v_15 = stack[0];
    if (!car_legal(v_15)) v_15 = cdrerror(v_15); else
    v_15 = cdr(v_15);
    if (!car_legal(v_15)) v_15 = cdrerror(v_15); else
    v_15 = cdr(v_15);
    if (!car_legal(v_15)) v_15 = carerror(v_15); else
    v_15 = car(v_15);
    {
        LispObject v_19 = stack[-1];
        return list3(v_19, v_16, v_15);
    }
}



// Code for ofsf_sippsignchkf

static LispObject CC_ofsf_sippsignchkf(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_106, v_107, v_108, v_109;
    LispObject v_5, v_6, v_7, v_8;
    if (_a4up_ == nil)
        aerror1("not enough arguments provided", basic_elt(env, 0));
    v_5 = car(_a4up_); _a4up_ = cdr(_a4up_);
    if (_a4up_ == nil)
        aerror1("not enough arguments provided", basic_elt(env, 0));
    v_6 = car(_a4up_); _a4up_ = cdr(_a4up_);
    if (_a4up_ == nil)
        aerror1("not enough arguments provided", basic_elt(env, 0));
    v_7 = car(_a4up_); _a4up_ = cdr(_a4up_);
    if (_a4up_ == nil)
        aerror1("not enough arguments provided", basic_elt(env, 0));
    v_8 = car(_a4up_); _a4up_ = cdr(_a4up_);
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
        push(v_8);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_8,v_7,v_6,v_5,v_4,v_3);
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
    stack[-3] = v_8;
    stack[-4] = v_7;
    stack[-5] = v_6;
    stack[-6] = v_5;
    stack[-7] = v_4;
    stack[-8] = v_3;
    stack[-9] = v_2;
// end of prologue
    v_106 = stack[-9];
    if (!consp(v_106)) goto v_22;
    else goto v_23;
v_22:
    v_106 = lisp_true;
    goto v_21;
v_23:
    v_106 = stack[-9];
    if (!car_legal(v_106)) v_106 = carerror(v_106); else
    v_106 = car(v_106);
    v_106 = (consp(v_106) ? nil : lisp_true);
    goto v_21;
    v_106 = nil;
v_21:
    if (v_106 == nil) goto v_19;
    v_106 = stack[-9];
    {
        LispObject fn = basic_elt(env, 2); // ofsf_updsigndom
        return (*qfn1(fn))(fn, v_106);
    }
v_19:
    v_106 = stack[-9];
    if (!car_legal(v_106)) v_106 = carerror(v_106); else
    v_106 = car(v_106);
    if (!car_legal(v_106)) v_106 = carerror(v_106); else
    v_106 = car(v_106);
    if (!car_legal(v_106)) stack[-2] = carerror(v_106); else
    stack[-2] = car(v_106);
    stack[-1] = stack[-8];
    stack[0] = stack[-7];
    v_109 = stack[-6];
    v_108 = stack[-5];
    v_107 = stack[-4];
    v_106 = stack[-3];
    v_106 = list4(v_109, v_108, v_107, v_106);
    env = stack[-11];
    {   LispObject fn = basic_elt(env, 3); // ofsf_updsignvar
    v_106 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_106);
    }
    env = stack[-11];
    stack[-10] = v_106;
    v_107 = stack[-10];
    v_106 = basic_elt(env, 1); // unknown
    if (v_107 == v_106) goto v_47;
    else goto v_48;
v_47:
    v_106 = basic_elt(env, 1); // unknown
    goto v_15;
v_48:
    v_106 = stack[-9];
    if (!car_legal(v_106)) v_106 = carerror(v_106); else
    v_106 = car(v_106);
    if (!car_legal(v_106)) stack[-2] = cdrerror(v_106); else
    stack[-2] = cdr(v_106);
    stack[-1] = stack[-8];
    stack[0] = stack[-7];
    v_109 = stack[-6];
    v_108 = stack[-5];
    v_107 = stack[-4];
    v_106 = stack[-3];
    v_106 = list4(v_109, v_108, v_107, v_106);
    env = stack[-11];
    {   LispObject fn = basic_elt(env, 0); // ofsf_sippsignchkf
    v_106 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_106);
    }
    env = stack[-11];
    stack[-1] = v_106;
    v_107 = stack[-1];
    v_106 = basic_elt(env, 1); // unknown
    if (v_107 == v_106) goto v_65;
    else goto v_66;
v_65:
    v_106 = basic_elt(env, 1); // unknown
    goto v_15;
v_66:
    v_106 = stack[-9];
    if (!car_legal(v_106)) stack[0] = cdrerror(v_106); else
    stack[0] = cdr(v_106);
    stack[-2] = stack[-8];
    v_109 = stack[-6];
    v_108 = stack[-5];
    v_107 = stack[-4];
    v_106 = stack[-3];
    v_106 = list4(v_109, v_108, v_107, v_106);
    env = stack[-11];
    {   LispObject fn = basic_elt(env, 0); // ofsf_sippsignchkf
    v_106 = (*qfn4up(fn))(fn, stack[0], stack[-2], stack[-7], v_106);
    }
    env = stack[-11];
    stack[0] = v_106;
    v_107 = stack[0];
    v_106 = basic_elt(env, 1); // unknown
    if (v_107 == v_106) goto v_82;
    else goto v_83;
v_82:
    v_106 = basic_elt(env, 1); // unknown
    goto v_15;
v_83:
    v_107 = stack[-10];
    v_106 = stack[-9];
    if (!car_legal(v_106)) v_106 = carerror(v_106); else
    v_106 = car(v_106);
    if (!car_legal(v_106)) v_106 = carerror(v_106); else
    v_106 = car(v_106);
    if (!car_legal(v_106)) v_106 = cdrerror(v_106); else
    v_106 = cdr(v_106);
    {   LispObject fn = basic_elt(env, 4); // ofsf_updsignpow
    v_106 = (*qfn2(fn))(fn, v_107, v_106);
    }
    env = stack[-11];
    stack[-10] = v_106;
    v_107 = stack[-1];
    v_106 = stack[-10];
    {   LispObject fn = basic_elt(env, 5); // ofsf_updsignmult
    v_106 = (*qfn2(fn))(fn, v_107, v_106);
    }
    env = stack[-11];
    v_108 = v_106;
    v_107 = v_108;
    v_106 = basic_elt(env, 1); // unknown
    if (v_107 == v_106) goto v_98;
    else goto v_99;
v_98:
    v_106 = basic_elt(env, 1); // unknown
    goto v_15;
v_99:
    v_107 = v_108;
    v_106 = stack[0];
    {
        LispObject fn = basic_elt(env, 6); // ofsf_updsignadd
        return (*qfn2(fn))(fn, v_107, v_106);
    }
v_15:
    return onevalue(v_106);
}



// Code for mri_prifloor

static LispObject CC_mri_prifloor(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_20 = qvalue(basic_elt(env, 1)); // !*nat
    if (v_20 == nil) goto v_6;
    else goto v_7;
v_6:
    v_20 = basic_elt(env, 2); // failed
    goto v_5;
v_7:
    v_20 = basic_elt(env, 3); // "["
    {   LispObject fn = basic_elt(env, 5); // prin2!*
    v_20 = (*qfn1(fn))(fn, v_20);
    }
    env = stack[-1];
    v_20 = stack[0];
    if (!car_legal(v_20)) v_20 = cdrerror(v_20); else
    v_20 = cdr(v_20);
    if (!car_legal(v_20)) v_20 = carerror(v_20); else
    v_20 = car(v_20);
    {   LispObject fn = basic_elt(env, 6); // maprin
    v_20 = (*qfn1(fn))(fn, v_20);
    }
    env = stack[-1];
    v_20 = basic_elt(env, 4); // "]"
    {
        LispObject fn = basic_elt(env, 5); // prin2!*
        return (*qfn1(fn))(fn, v_20);
    }
    v_20 = nil;
v_5:
    return onevalue(v_20);
}



// Code for make!-image!-mod!-p

static LispObject CC_makeKimageKmodKp(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_25 = stack[-1];
    v_24 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // degree!-in!-variable
    v_24 = (*qfn2(fn))(fn, v_25, v_24);
    }
    env = stack[-3];
    stack[-2] = v_24;
    v_25 = stack[-1];
    v_24 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // make!-univariate!-image!-mod!-p
    v_24 = (*qfn2(fn))(fn, v_25, v_24);
    }
    env = stack[-3];
    stack[-1] = v_24;
    v_25 = stack[-1];
    v_24 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // degree!-in!-variable
    v_25 = (*qfn2(fn))(fn, v_25, v_24);
    }
    env = stack[-3];
    v_24 = stack[-2];
    if (equal(v_25, v_24)) goto v_17;
    v_24 = lisp_true;
    setvalue(basic_elt(env, 1), v_24); // unlucky!-case
    goto v_15;
v_17:
v_15:
    v_24 = stack[-1];
    return onevalue(v_24);
}



// Code for matrixir

static LispObject CC_matrixir(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_35, v_36, v_37;
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
    {   LispObject fn = basic_elt(env, 4); // lex
    v_35 = (*qfn0(fn))(fn);
    }
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 5); // omobjs
    v_35 = (*qfn0(fn))(fn);
    }
    env = stack[-1];
    v_37 = v_35;
    v_35 = v_37;
    if (!car_legal(v_35)) v_35 = cdrerror(v_35); else
    v_35 = cdr(v_35);
    if (!car_legal(v_35)) v_35 = carerror(v_35); else
    v_35 = car(v_35);
    if (!car_legal(v_35)) v_35 = cdrerror(v_35); else
    v_35 = cdr(v_35);
    if (!car_legal(v_35)) v_35 = carerror(v_35); else
    v_35 = car(v_35);
    if (!car_legal(v_35)) v_36 = carerror(v_35); else
    v_36 = car(v_35);
    v_35 = basic_elt(env, 1); // matrixcolumn
    if (v_36 == v_35) goto v_10;
    else goto v_11;
v_10:
    stack[0] = basic_elt(env, 1); // matrixcolumn
    v_35 = v_37;
    {   LispObject fn = basic_elt(env, 6); // matrixelems
    v_36 = (*qfn1(fn))(fn, v_35);
    }
    env = stack[-1];
    v_35 = nil;
    v_35 = list2star(stack[0], v_36, v_35);
    env = stack[-1];
    v_37 = v_35;
    goto v_9;
v_11:
    stack[0] = basic_elt(env, 2); // matrixrow
    v_35 = v_37;
    {   LispObject fn = basic_elt(env, 6); // matrixelems
    v_36 = (*qfn1(fn))(fn, v_35);
    }
    env = stack[-1];
    v_35 = nil;
    v_35 = list2star(stack[0], v_36, v_35);
    env = stack[-1];
    v_37 = v_35;
    goto v_9;
v_9:
    v_36 = basic_elt(env, 3); // matrix
    v_35 = nil;
    return list2star(v_36, v_35, v_37);
    return onevalue(v_35);
}



// Code for simpdf

static LispObject CC_simpdf(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_228, v_229;
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
    push(nil, nil);
    stack_popper stack_popper_var(8);
// copy arguments values to proper place
    stack[-5] = v_2;
// end of prologue
    stack[-3] = nil;
    v_228 = qvalue(basic_elt(env, 1)); // subfg!*
    if (v_228 == nil) goto v_13;
    else goto v_14;
v_13:
    v_229 = basic_elt(env, 2); // df
    v_228 = stack[-5];
    v_229 = cons(v_229, v_228);
    env = stack[-7];
    v_228 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {
        LispObject fn = basic_elt(env, 8); // mksq
        return (*qfn2(fn))(fn, v_229, v_228);
    }
v_14:
    v_228 = stack[-5];
    if (!car_legal(v_228)) v_228 = cdrerror(v_228); else
    v_228 = cdr(v_228);
    stack[-6] = v_228;
    v_228 = stack[-5];
    if (!car_legal(v_228)) v_228 = carerror(v_228); else
    v_228 = car(v_228);
    {   LispObject fn = basic_elt(env, 9); // simp!*
    v_228 = (*qfn1(fn))(fn, v_228);
    }
    env = stack[-7];
    stack[-5] = v_228;
v_10:
    v_228 = stack[-6];
    if (v_228 == nil) goto v_32;
    else goto v_33;
v_32:
    v_228 = lisp_true;
    goto v_31;
v_33:
    v_228 = stack[-5];
    if (!car_legal(v_228)) v_228 = carerror(v_228); else
    v_228 = car(v_228);
    v_228 = (v_228 == nil ? lisp_true : nil);
    goto v_31;
    v_228 = nil;
v_31:
    if (v_228 == nil) goto v_29;
    v_228 = stack[-5];
    goto v_9;
v_29:
    v_228 = stack[-3];
    if (v_228 == nil) goto v_48;
    else goto v_49;
v_48:
    v_228 = lisp_true;
    goto v_47;
v_49:
    v_229 = stack[-3];
    v_228 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_228 = (v_229 == v_228 ? lisp_true : nil);
    goto v_47;
    v_228 = nil;
v_47:
    if (v_228 == nil) goto v_45;
    v_228 = stack[-6];
    if (!car_legal(v_228)) v_228 = carerror(v_228); else
    v_228 = car(v_228);
    {   LispObject fn = basic_elt(env, 9); // simp!*
    v_228 = (*qfn1(fn))(fn, v_228);
    }
    env = stack[-7];
    goto v_43;
v_45:
    v_228 = stack[-3];
    goto v_43;
    v_228 = nil;
v_43:
    stack[-4] = v_228;
    v_228 = stack[-4];
    if (!car_legal(v_228)) v_229 = cdrerror(v_228); else
    v_229 = cdr(v_228);
    v_228 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_229 == v_228) goto v_70;
    v_228 = lisp_true;
    goto v_68;
v_70:
    v_228 = stack[-4];
    if (!car_legal(v_228)) v_228 = carerror(v_228); else
    v_228 = car(v_228);
    v_228 = (consp(v_228) ? nil : lisp_true);
    goto v_68;
    v_228 = nil;
v_68:
    if (v_228 == nil) goto v_66;
    v_228 = stack[-4];
    {   LispObject fn = basic_elt(env, 10); // prepsq
    v_229 = (*qfn1(fn))(fn, v_228);
    }
    env = stack[-7];
    v_228 = basic_elt(env, 3); // "kernel or integer"
    {   LispObject fn = basic_elt(env, 11); // typerr
    v_228 = (*qfn2(fn))(fn, v_229, v_228);
    }
    env = stack[-7];
    goto v_64;
v_66:
    v_228 = stack[-4];
    if (!car_legal(v_228)) v_228 = carerror(v_228); else
    v_228 = car(v_228);
    stack[-2] = v_228;
    v_228 = stack[-2];
    if (!consp(v_228)) goto v_95;
    else goto v_96;
v_95:
    v_228 = lisp_true;
    goto v_94;
v_96:
    v_228 = stack[-2];
    if (!car_legal(v_228)) v_228 = carerror(v_228); else
    v_228 = car(v_228);
    v_228 = (consp(v_228) ? nil : lisp_true);
    goto v_94;
    v_228 = nil;
v_94:
    if (v_228 == nil) goto v_92;
    v_228 = stack[-2];
    if (!car_legal(v_228)) v_229 = carerror(v_228); else
    v_229 = car(v_228);
    v_228 = basic_elt(env, 4); // domain!-diff!-fn
    v_228 = get(v_229, v_228);
    env = stack[-7];
    if (v_228 == nil) goto v_107;
// Binding dmode!*
// FLUIDBIND: reloadenv=7 litvec-offset=5 saveloc=1
{   bind_fluid_stack bind_fluid_var(-7, 5, -1);
    setvalue(basic_elt(env, 5), nil); // dmode!*
// Binding alglist!*
// FLUIDBIND: reloadenv=7 litvec-offset=6 saveloc=0
{   bind_fluid_stack bind_fluid_var(-7, 6, 0);
    setvalue(basic_elt(env, 6), nil); // alglist!*
    v_228 = nil;
    v_228 = ncons(v_228);
    env = stack[-7];
    setvalue(basic_elt(env, 6), v_228); // alglist!*
    v_228 = stack[-2];
    {   LispObject fn = basic_elt(env, 12); // prepf
    v_228 = (*qfn1(fn))(fn, v_228);
    }
    env = stack[-7];
    stack[-4] = v_228;
    v_228 = stack[-4];
    {   LispObject fn = basic_elt(env, 13); // prekernp
    v_228 = (*qfn1(fn))(fn, v_228);
    }
    env = stack[-7];
    if (v_228 == nil) goto v_124;
    else goto v_125;
v_124:
    v_229 = stack[-4];
    v_228 = basic_elt(env, 7); // "kernel"
    {   LispObject fn = basic_elt(env, 11); // typerr
    v_228 = (*qfn2(fn))(fn, v_229, v_228);
    }
    env = stack[-7];
    goto v_123;
v_125:
v_123:
    ;}  // end of a binding scope
    ;}  // end of a binding scope
    goto v_105;
v_107:
    v_228 = stack[-2];
    {   LispObject fn = basic_elt(env, 12); // prepf
    v_229 = (*qfn1(fn))(fn, v_228);
    }
    env = stack[-7];
    v_228 = basic_elt(env, 7); // "kernel"
    {   LispObject fn = basic_elt(env, 11); // typerr
    v_228 = (*qfn2(fn))(fn, v_229, v_228);
    }
    env = stack[-7];
    goto v_105;
v_105:
    goto v_90;
v_92:
    v_228 = stack[-2];
    if (!car_legal(v_228)) v_228 = cdrerror(v_228); else
    v_228 = cdr(v_228);
    if (v_228 == nil) goto v_143;
    else goto v_144;
v_143:
    v_228 = stack[-2];
    if (!car_legal(v_228)) v_228 = carerror(v_228); else
    v_228 = car(v_228);
    if (!car_legal(v_228)) v_229 = cdrerror(v_228); else
    v_229 = cdr(v_228);
    v_228 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_229 == v_228) goto v_149;
    else goto v_150;
v_149:
    v_228 = stack[-2];
    if (!car_legal(v_228)) v_228 = carerror(v_228); else
    v_228 = car(v_228);
    if (!car_legal(v_228)) v_228 = carerror(v_228); else
    v_228 = car(v_228);
    if (!car_legal(v_228)) v_229 = cdrerror(v_228); else
    v_229 = cdr(v_228);
    v_228 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_228 = (v_229 == v_228 ? lisp_true : nil);
    goto v_148;
v_150:
    v_228 = nil;
    goto v_148;
    v_228 = nil;
v_148:
    goto v_142;
v_144:
    v_228 = nil;
    goto v_142;
    v_228 = nil;
v_142:
    if (v_228 == nil) goto v_140;
    v_228 = stack[-2];
    if (!car_legal(v_228)) v_228 = carerror(v_228); else
    v_228 = car(v_228);
    if (!car_legal(v_228)) v_228 = carerror(v_228); else
    v_228 = car(v_228);
    if (!car_legal(v_228)) v_228 = carerror(v_228); else
    v_228 = car(v_228);
    stack[-4] = v_228;
    goto v_90;
v_140:
    v_228 = stack[-2];
    {   LispObject fn = basic_elt(env, 12); // prepf
    v_229 = (*qfn1(fn))(fn, v_228);
    }
    env = stack[-7];
    v_228 = basic_elt(env, 7); // "kernel"
    {   LispObject fn = basic_elt(env, 11); // typerr
    v_228 = (*qfn2(fn))(fn, v_229, v_228);
    }
    env = stack[-7];
    goto v_90;
v_90:
    goto v_64;
v_64:
    v_228 = stack[-6];
    if (!car_legal(v_228)) v_228 = cdrerror(v_228); else
    v_228 = cdr(v_228);
    stack[-6] = v_228;
    v_228 = stack[-6];
    if (v_228 == nil) goto v_181;
    else goto v_182;
v_181:
    v_229 = stack[-5];
    v_228 = stack[-4];
    {   LispObject fn = basic_elt(env, 14); // diffsq
    v_228 = (*qfn2(fn))(fn, v_229, v_228);
    }
    env = stack[-7];
    stack[-5] = v_228;
    goto v_10;
v_182:
    v_228 = stack[-6];
    if (!car_legal(v_228)) v_228 = carerror(v_228); else
    v_228 = car(v_228);
    {   LispObject fn = basic_elt(env, 9); // simp!*
    v_228 = (*qfn1(fn))(fn, v_228);
    }
    env = stack[-7];
    stack[-3] = v_228;
    v_228 = stack[-3];
    if (!car_legal(v_228)) v_228 = carerror(v_228); else
    v_228 = car(v_228);
    if (v_228 == nil) goto v_192;
    else goto v_193;
v_192:
    v_228 = stack[-6];
    if (!car_legal(v_228)) v_228 = cdrerror(v_228); else
    v_228 = cdr(v_228);
    stack[-6] = v_228;
    v_228 = nil;
    stack[-3] = v_228;
    goto v_10;
v_193:
    v_228 = stack[-3];
    {   LispObject fn = basic_elt(env, 15); // d2int
    v_228 = (*qfn1(fn))(fn, v_228);
    }
    env = stack[-7];
    stack[0] = v_228;
    if (v_228 == nil) goto v_199;
    else goto v_200;
v_199:
    v_229 = stack[-5];
    v_228 = stack[-4];
    {   LispObject fn = basic_elt(env, 14); // diffsq
    v_228 = (*qfn2(fn))(fn, v_229, v_228);
    }
    env = stack[-7];
    stack[-5] = v_228;
    goto v_10;
v_200:
    v_228 = stack[-6];
    if (!car_legal(v_228)) v_228 = cdrerror(v_228); else
    v_228 = cdr(v_228);
    stack[-6] = v_228;
    v_228 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-1] = v_228;
v_211:
    v_229 = stack[0];
    v_228 = stack[-1];
    v_228 = difference2(v_229, v_228);
    env = stack[-7];
    v_228 = Lminusp(nil, v_228);
    env = stack[-7];
    if (v_228 == nil) goto v_216;
    goto v_210;
v_216:
    v_229 = stack[-5];
    v_228 = stack[-4];
    {   LispObject fn = basic_elt(env, 14); // diffsq
    v_228 = (*qfn2(fn))(fn, v_229, v_228);
    }
    env = stack[-7];
    stack[-5] = v_228;
    v_228 = stack[-1];
    v_228 = add1(v_228);
    env = stack[-7];
    stack[-1] = v_228;
    goto v_211;
v_210:
    v_228 = nil;
    stack[-3] = v_228;
    goto v_10;
v_9:
    return onevalue(v_228);
}



// Code for findhc

static LispObject CC_findhc(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_71, v_72;
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
    v_71 = v_2;
// end of prologue
    stack[-4] = nil;
    v_72 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    setvalue(basic_elt(env, 1), v_72); // njsi
    stack[-2] = v_72;
    v_72 = nil;
    setvalue(basic_elt(env, 2), v_72); // jsi
    stack[0] = qvalue(basic_elt(env, 3)); // codmat
    v_72 = qvalue(basic_elt(env, 4)); // maxvar
    v_71 = plus2(v_72, v_71);
    env = stack[-5];
    v_72 = Lgetv(nil, stack[0], v_71);
    env = stack[-5];
    v_71 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_71 = Lgetv(nil, v_72, v_71);
    env = stack[-5];
    stack[-1] = v_71;
v_15:
    v_71 = stack[-1];
    if (v_71 == nil) goto v_25;
    else goto v_26;
v_25:
    goto v_14;
v_26:
    v_71 = stack[-1];
    if (!car_legal(v_71)) v_71 = carerror(v_71); else
    v_71 = car(v_71);
    stack[0] = qvalue(basic_elt(env, 3)); // codmat
    v_72 = qvalue(basic_elt(env, 4)); // maxvar
    if (!car_legal(v_71)) v_71 = carerror(v_71); else
    v_71 = car(v_71);
    stack[-3] = v_71;
    v_71 = plus2(v_72, v_71);
    env = stack[-5];
    v_72 = Lgetv(nil, stack[0], v_71);
    env = stack[-5];
    v_71 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_71 = Lgetv(nil, v_72, v_71);
    env = stack[-5];
    if (v_71 == nil) goto v_35;
    v_72 = stack[-3];
    v_71 = qvalue(basic_elt(env, 2)); // jsi
    v_71 = cons(v_72, v_71);
    env = stack[-5];
    setvalue(basic_elt(env, 2), v_71); // jsi
    v_71 = qvalue(basic_elt(env, 1)); // njsi
    v_71 = add1(v_71);
    env = stack[-5];
    setvalue(basic_elt(env, 1), v_71); // njsi
    stack[0] = qvalue(basic_elt(env, 3)); // codmat
    v_72 = qvalue(basic_elt(env, 4)); // maxvar
    v_71 = stack[-3];
    v_71 = plus2(v_72, v_71);
    env = stack[-5];
    v_72 = Lgetv(nil, stack[0], v_71);
    env = stack[-5];
    v_71 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_71 = Lgetv(nil, v_72, v_71);
    env = stack[-5];
    if (!car_legal(v_71)) v_71 = carerror(v_71); else
    v_71 = car(v_71);
    if (!car_legal(v_71)) v_72 = carerror(v_71); else
    v_72 = car(v_71);
    stack[0] = v_72;
    v_71 = stack[-2];
    v_71 = static_cast<LispObject>(greaterp2(v_72, v_71));
    v_71 = v_71 ? lisp_true : nil;
    env = stack[-5];
    if (v_71 == nil) goto v_52;
    v_71 = stack[0];
    stack[-2] = v_71;
    v_71 = stack[-3];
    stack[-4] = v_71;
    goto v_50;
v_52:
v_50:
    goto v_33;
v_35:
v_33:
    v_71 = stack[-1];
    if (!car_legal(v_71)) v_71 = cdrerror(v_71); else
    v_71 = cdr(v_71);
    stack[-1] = v_71;
    goto v_15;
v_14:
    v_71 = qvalue(basic_elt(env, 2)); // jsi
    v_71 = Lreverse(nil, v_71);
    env = stack[-5];
    setvalue(basic_elt(env, 2), v_71); // jsi
    v_71 = stack[-4];
    return onevalue(v_71);
}



// Code for gfstorval

static LispObject CC_gfstorval(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_11 = v_10;
    v_10 = v_9;
    v_9 = qvalue(basic_elt(env, 1)); // !*xnlist
    v_9 = acons(v_11, v_10, v_9);
    env = stack[0];
    setvalue(basic_elt(env, 1), v_9); // !*xnlist
    return onevalue(v_9);
}



// Code for fortassign

static LispObject CC_fortassign(LispObject env,
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
    v_13 = v_12;
    if (!car_legal(v_13)) v_13 = cdrerror(v_13); else
    v_13 = cdr(v_13);
    if (!car_legal(v_13)) v_13 = carerror(v_13); else
    v_13 = car(v_13);
    if (!car_legal(v_12)) v_12 = cdrerror(v_12); else
    v_12 = cdr(v_12);
    if (!car_legal(v_12)) v_12 = cdrerror(v_12); else
    v_12 = cdr(v_12);
    if (!car_legal(v_12)) v_12 = carerror(v_12); else
    v_12 = car(v_12);
    {
        LispObject fn = basic_elt(env, 1); // mkffortassign
        return (*qfn2(fn))(fn, v_13, v_12);
    }
}



// Code for new_prove

static LispObject CC_new_prove(LispObject env,
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
    stack[-1] = v_2;
// end of prologue
v_1:
    v_31 = stack[0];
    if (v_31 == nil) goto v_7;
    else goto v_8;
v_7:
    v_31 = nil;
    goto v_6;
v_8:
    v_32 = stack[-1];
    v_31 = stack[0];
    if (!car_legal(v_31)) v_31 = carerror(v_31); else
    v_31 = car(v_31);
    {   LispObject fn = basic_elt(env, 1); // new_provev
    v_31 = (*qfn2(fn))(fn, v_32, v_31);
    }
    env = stack[-2];
    v_32 = v_31;
    v_31 = v_32;
    if (v_31 == nil) goto v_21;
    v_31 = v_32;
    return ncons(v_31);
v_21:
    v_32 = stack[-1];
    v_31 = stack[0];
    if (!car_legal(v_31)) v_31 = cdrerror(v_31); else
    v_31 = cdr(v_31);
    stack[-1] = v_32;
    stack[0] = v_31;
    goto v_1;
    v_31 = nil;
    goto v_6;
    v_31 = nil;
v_6:
    return onevalue(v_31);
}



// Code for sign!-abs

static LispObject CC_signKabs(LispObject env,
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
    v_34 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // sign!-of
    v_34 = (*qfn1(fn))(fn, v_34);
    }
    env = stack[-2];
    stack[-1] = v_34;
    v_34 = stack[-1];
    if (is_number(v_34)) goto v_10;
    v_34 = nil;
    goto v_8;
v_10:
    v_35 = stack[-1];
    v_34 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_34 = static_cast<LispObject>(lessp2(v_35, v_34));
    v_34 = v_34 ? lisp_true : nil;
    env = stack[-2];
    if (v_34 == nil) goto v_19;
    v_35 = basic_elt(env, 1); // minus
    v_34 = stack[0];
    v_34 = list2(v_35, v_34);
    env = stack[-2];
    goto v_17;
v_19:
    v_35 = stack[-1];
    v_34 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_35 == v_34) goto v_26;
    else goto v_27;
v_26:
    v_34 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_17;
v_27:
    v_34 = stack[0];
    goto v_17;
    v_34 = nil;
v_17:
    {
        LispObject fn = basic_elt(env, 3); // simp
        return (*qfn1(fn))(fn, v_34);
    }
    v_34 = nil;
v_8:
    return onevalue(v_34);
}



// Code for setmatelem

static LispObject CC_setmatelem(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_114, v_115, v_116;
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
    v_114 = stack[-3];
    v_115 = Llength(nil, v_114);
    env = stack[-5];
    v_114 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    if (v_115 == v_114) goto v_12;
    v_115 = stack[-3];
    v_114 = basic_elt(env, 1); // "matrix element"
    {   LispObject fn = basic_elt(env, 8); // typerr
    v_114 = (*qfn2(fn))(fn, v_115, v_114);
    }
    env = stack[-5];
    goto v_10;
v_12:
v_10:
    v_114 = stack[-3];
    if (!car_legal(v_114)) v_114 = carerror(v_114); else
    v_114 = car(v_114);
    if (!symbolp(v_114)) v_114 = nil;
    else { v_114 = qfastgets(v_114);
           if (v_114 != nil) { v_114 = elt(v_114, 4); // avalue
#ifdef RECORD_GET
             if (v_114 != SPID_NOPROP)
                record_get(elt(fastget_names, 4), 1);
             else record_get(elt(fastget_names, 4), 0),
                v_114 = nil; }
           else record_get(elt(fastget_names, 4), 0); }
#else
             if (v_114 == SPID_NOPROP) v_114 = nil; }}
#endif
    stack[-4] = v_114;
    v_114 = stack[-4];
    if (v_114 == nil) goto v_28;
    else goto v_29;
v_28:
    v_114 = lisp_true;
    goto v_27;
v_29:
    v_114 = stack[-4];
    if (!car_legal(v_114)) v_115 = carerror(v_114); else
    v_115 = car(v_114);
    v_114 = basic_elt(env, 2); // matrix
    v_114 = (v_115 == v_114 ? lisp_true : nil);
    v_114 = (v_114 == nil ? lisp_true : nil);
    goto v_27;
    v_114 = nil;
v_27:
    if (v_114 == nil) goto v_25;
    v_114 = stack[-3];
    if (!car_legal(v_114)) v_115 = carerror(v_114); else
    v_115 = car(v_114);
    v_114 = basic_elt(env, 3); // "matrix"
    {   LispObject fn = basic_elt(env, 8); // typerr
    v_114 = (*qfn2(fn))(fn, v_115, v_114);
    }
    env = stack[-5];
    goto v_23;
v_25:
    v_114 = stack[-4];
    if (!car_legal(v_114)) v_114 = cdrerror(v_114); else
    v_114 = cdr(v_114);
    if (!car_legal(v_114)) v_115 = carerror(v_114); else
    v_115 = car(v_114);
    stack[-4] = v_115;
    v_114 = basic_elt(env, 4); // mat
    if (!consp(v_115)) goto v_43;
    v_115 = car(v_115);
    if (v_115 == v_114) goto v_44;
v_43:
    stack[-1] = basic_elt(env, 2); // matrix
    stack[0] = static_cast<LispObject>(160)+TAG_FIXNUM; // 10
    v_116 = basic_elt(env, 5); // "Matrix"
    v_114 = stack[-3];
    if (!car_legal(v_114)) v_115 = carerror(v_114); else
    v_115 = car(v_114);
    v_114 = basic_elt(env, 6); // "not set"
    v_114 = list3(v_116, v_115, v_114);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 9); // rerror
    v_114 = (*qfn3(fn))(fn, stack[-1], stack[0], v_114);
    }
    env = stack[-5];
    goto v_23;
v_44:
v_23:
    v_114 = stack[-3];
    if (!car_legal(v_114)) v_114 = cdrerror(v_114); else
    v_114 = cdr(v_114);
    if (!car_legal(v_114)) v_114 = carerror(v_114); else
    v_114 = car(v_114);
    {   LispObject fn = basic_elt(env, 10); // reval_without_mod
    v_114 = (*qfn1(fn))(fn, v_114);
    }
    env = stack[-5];
    stack[0] = v_114;
    v_114 = stack[0];
    v_114 = integerp(v_114);
    if (v_114 == nil) goto v_68;
    else goto v_69;
v_68:
    v_114 = lisp_true;
    goto v_67;
v_69:
    v_115 = stack[0];
    v_114 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_114 = static_cast<LispObject>(lesseq2(v_115, v_114));
    v_114 = v_114 ? lisp_true : nil;
    env = stack[-5];
    goto v_67;
    v_114 = nil;
v_67:
    if (v_114 == nil) goto v_65;
    v_115 = stack[0];
    v_114 = basic_elt(env, 7); // "positive integer"
    {   LispObject fn = basic_elt(env, 8); // typerr
    v_114 = (*qfn2(fn))(fn, v_115, v_114);
    }
    env = stack[-5];
    goto v_63;
v_65:
v_63:
    v_114 = stack[-4];
    if (!car_legal(v_114)) v_115 = cdrerror(v_114); else
    v_115 = cdr(v_114);
    v_114 = stack[0];
    {   LispObject fn = basic_elt(env, 11); // nth
    v_114 = (*qfn2(fn))(fn, v_115, v_114);
    }
    env = stack[-5];
    stack[-4] = v_114;
    v_114 = stack[-3];
    if (!car_legal(v_114)) v_114 = cdrerror(v_114); else
    v_114 = cdr(v_114);
    if (!car_legal(v_114)) v_114 = cdrerror(v_114); else
    v_114 = cdr(v_114);
    if (!car_legal(v_114)) v_114 = carerror(v_114); else
    v_114 = car(v_114);
    {   LispObject fn = basic_elt(env, 10); // reval_without_mod
    v_114 = (*qfn1(fn))(fn, v_114);
    }
    env = stack[-5];
    stack[0] = v_114;
    v_114 = stack[0];
    v_114 = integerp(v_114);
    if (v_114 == nil) goto v_96;
    else goto v_97;
v_96:
    v_114 = lisp_true;
    goto v_95;
v_97:
    v_115 = stack[0];
    v_114 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_114 = static_cast<LispObject>(lesseq2(v_115, v_114));
    v_114 = v_114 ? lisp_true : nil;
    env = stack[-5];
    goto v_95;
    v_114 = nil;
v_95:
    if (v_114 == nil) goto v_93;
    v_115 = stack[0];
    v_114 = basic_elt(env, 7); // "positive integer"
    {   LispObject fn = basic_elt(env, 8); // typerr
    v_114 = (*qfn2(fn))(fn, v_115, v_114);
    }
    env = stack[-5];
    goto v_91;
v_93:
v_91:
    v_115 = stack[-4];
    v_114 = stack[0];
    {   LispObject fn = basic_elt(env, 12); // pnth
    v_115 = (*qfn2(fn))(fn, v_115, v_114);
    }
    v_114 = stack[-2];
    if (!car_legal(v_115)) rplaca_fails(v_115);
    setcar(v_115, v_114);
    v_114 = v_115;
    return onevalue(v_114);
}



// Code for dfp!-rule!-found

static LispObject CC_dfpKruleKfound(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_20, v_21, v_22, v_23;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_21 = v_3;
    v_22 = v_2;
// end of prologue
    v_20 = v_22;
    v_23 = basic_elt(env, 1); // dfp
    if (!consp(v_20)) goto v_7;
    v_20 = car(v_20);
    if (v_20 == v_23) goto v_8;
v_7:
    v_20 = lisp_true;
    goto v_6;
v_8:
    v_20 = v_22;
    if (!car_legal(v_20)) v_20 = cdrerror(v_20); else
    v_20 = cdr(v_20);
    if (!car_legal(v_20)) v_20 = carerror(v_20); else
    v_20 = car(v_20);
        return Lneq_2(nil, v_20, v_21);
    v_20 = nil;
v_6:
    return onevalue(v_20);
}



// Code for fs!:timescoeff

static LispObject CC_fsTtimescoeff(LispObject env,
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
    stack_popper stack_popper_var(6);
// copy arguments values to proper place
    stack[-2] = v_3;
    stack[-3] = v_2;
// end of prologue
v_1:
    v_62 = stack[-2];
    if (v_62 == nil) goto v_7;
    else goto v_8;
v_7:
    v_62 = nil;
    goto v_6;
v_8:
    stack[0] = stack[-3];
    v_63 = stack[-2];
    v_62 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_62 = Lgetv(nil, v_63, v_62);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 3); // multsq
    v_62 = (*qfn2(fn))(fn, stack[0], v_62);
    }
    env = stack[-5];
    stack[0] = v_62;
    v_63 = stack[0];
    v_62 = basic_elt(env, 1); // (nil . 1)
    if (equal(v_63, v_62)) goto v_24;
    else goto v_25;
v_24:
    v_62 = basic_elt(env, 2); // "zero in times"
    v_62 = Lprint(nil, v_62);
    env = stack[-5];
    stack[0] = stack[-3];
    v_63 = stack[-2];
    v_62 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_62 = Lgetv(nil, v_63, v_62);
    env = stack[-5];
    stack[-3] = stack[0];
    stack[-2] = v_62;
    goto v_1;
v_25:
    v_62 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_62 = Lmkvect(nil, v_62);
    env = stack[-5];
    stack[-4] = v_62;
    v_64 = stack[-4];
    v_63 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_62 = stack[0];
    v_62 = Lputv(nil, v_64, v_63, v_62);
    env = stack[-5];
    stack[-1] = stack[-4];
    stack[0] = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_63 = stack[-2];
    v_62 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_62 = Lgetv(nil, v_63, v_62);
    env = stack[-5];
    v_62 = Lputv(nil, stack[-1], stack[0], v_62);
    env = stack[-5];
    stack[-1] = stack[-4];
    stack[0] = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_63 = stack[-2];
    v_62 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_62 = Lgetv(nil, v_63, v_62);
    env = stack[-5];
    v_62 = Lputv(nil, stack[-1], stack[0], v_62);
    env = stack[-5];
    stack[-1] = stack[-4];
    stack[0] = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_63 = stack[-2];
    v_62 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_62 = Lgetv(nil, v_63, v_62);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 0); // fs!:timescoeff
    v_62 = (*qfn2(fn))(fn, stack[-3], v_62);
    }
    env = stack[-5];
    v_62 = Lputv(nil, stack[-1], stack[0], v_62);
    v_62 = stack[-4];
    goto v_6;
    v_62 = nil;
v_6:
    return onevalue(v_62);
}



// Code for mkindxlist

static LispObject CC_mkindxlist(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_91, v_92;
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
    v_91 = v_2;
// end of prologue
    stack[-4] = v_91;
    v_91 = stack[-4];
    if (v_91 == nil) goto v_13;
    else goto v_14;
v_13:
    v_91 = nil;
    goto v_8;
v_14:
    v_91 = stack[-4];
    if (!car_legal(v_91)) v_91 = carerror(v_91); else
    v_91 = car(v_91);
    v_92 = v_91;
    v_91 = v_92;
    v_91 = integerp(v_91);
    if (v_91 == nil) goto v_24;
    v_91 = v_92;
    {   LispObject fn = basic_elt(env, 2); // !*num2id
    v_91 = (*qfn1(fn))(fn, v_91);
    }
    env = stack[-5];
    goto v_22;
v_24:
    v_91 = v_92;
    v_91 = Lconsp(nil, v_91);
    env = stack[-5];
    if (v_91 == nil) goto v_30;
    v_91 = v_92;
    if (!car_legal(v_91)) v_91 = cdrerror(v_91); else
    v_91 = cdr(v_91);
    if (!car_legal(v_91)) v_91 = carerror(v_91); else
    v_91 = car(v_91);
    v_91 = integerp(v_91);
    if (v_91 == nil) goto v_30;
    stack[0] = basic_elt(env, 1); // minus
    v_91 = v_92;
    if (!car_legal(v_91)) v_91 = cdrerror(v_91); else
    v_91 = cdr(v_91);
    if (!car_legal(v_91)) v_91 = carerror(v_91); else
    v_91 = car(v_91);
    {   LispObject fn = basic_elt(env, 2); // !*num2id
    v_91 = (*qfn1(fn))(fn, v_91);
    }
    env = stack[-5];
    v_91 = list2(stack[0], v_91);
    env = stack[-5];
    goto v_22;
v_30:
    v_91 = v_92;
    goto v_22;
    v_91 = nil;
v_22:
    v_91 = ncons(v_91);
    env = stack[-5];
    stack[-2] = v_91;
    stack[-3] = v_91;
v_9:
    v_91 = stack[-4];
    if (!car_legal(v_91)) v_91 = cdrerror(v_91); else
    v_91 = cdr(v_91);
    stack[-4] = v_91;
    v_91 = stack[-4];
    if (v_91 == nil) goto v_52;
    else goto v_53;
v_52:
    v_91 = stack[-3];
    goto v_8;
v_53:
    stack[-1] = stack[-2];
    v_91 = stack[-4];
    if (!car_legal(v_91)) v_91 = carerror(v_91); else
    v_91 = car(v_91);
    v_92 = v_91;
    v_91 = v_92;
    v_91 = integerp(v_91);
    if (v_91 == nil) goto v_64;
    v_91 = v_92;
    {   LispObject fn = basic_elt(env, 2); // !*num2id
    v_91 = (*qfn1(fn))(fn, v_91);
    }
    env = stack[-5];
    goto v_62;
v_64:
    v_91 = v_92;
    v_91 = Lconsp(nil, v_91);
    env = stack[-5];
    if (v_91 == nil) goto v_70;
    v_91 = v_92;
    if (!car_legal(v_91)) v_91 = cdrerror(v_91); else
    v_91 = cdr(v_91);
    if (!car_legal(v_91)) v_91 = carerror(v_91); else
    v_91 = car(v_91);
    v_91 = integerp(v_91);
    if (v_91 == nil) goto v_70;
    stack[0] = basic_elt(env, 1); // minus
    v_91 = v_92;
    if (!car_legal(v_91)) v_91 = cdrerror(v_91); else
    v_91 = cdr(v_91);
    if (!car_legal(v_91)) v_91 = carerror(v_91); else
    v_91 = car(v_91);
    {   LispObject fn = basic_elt(env, 2); // !*num2id
    v_91 = (*qfn1(fn))(fn, v_91);
    }
    env = stack[-5];
    v_91 = list2(stack[0], v_91);
    env = stack[-5];
    goto v_62;
v_70:
    v_91 = v_92;
    goto v_62;
    v_91 = nil;
v_62:
    v_91 = ncons(v_91);
    env = stack[-5];
    if (!car_legal(stack[-1])) rplacd_fails(stack[-1]);
    setcdr(stack[-1], v_91);
    v_91 = stack[-2];
    if (!car_legal(v_91)) v_91 = cdrerror(v_91); else
    v_91 = cdr(v_91);
    stack[-2] = v_91;
    goto v_9;
v_8:
    return onevalue(v_91);
}



// Code for inormmat

static LispObject CC_inormmat(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_97, v_98;
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
    v_97 = v_2;
// end of prologue
    stack[-6] = nil;
    stack[-5] = v_97;
v_12:
    v_97 = stack[-5];
    if (v_97 == nil) goto v_16;
    else goto v_17;
v_16:
    goto v_11;
v_17:
    v_97 = stack[-5];
    if (!car_legal(v_97)) v_97 = carerror(v_97); else
    v_97 = car(v_97);
    stack[-1] = v_97;
    v_97 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-7] = v_97;
    v_97 = stack[-1];
    stack[0] = v_97;
v_27:
    v_97 = stack[0];
    if (v_97 == nil) goto v_31;
    else goto v_32;
v_31:
    goto v_26;
v_32:
    v_97 = stack[0];
    if (!car_legal(v_97)) v_97 = carerror(v_97); else
    v_97 = car(v_97);
    v_98 = stack[-7];
    if (!car_legal(v_97)) v_97 = cdrerror(v_97); else
    v_97 = cdr(v_97);
    {   LispObject fn = basic_elt(env, 1); // ilcm
    v_97 = (*qfn2(fn))(fn, v_98, v_97);
    }
    env = stack[-8];
    stack[-7] = v_97;
    v_97 = stack[0];
    if (!car_legal(v_97)) v_97 = cdrerror(v_97); else
    v_97 = cdr(v_97);
    stack[0] = v_97;
    goto v_27;
v_26:
    v_97 = stack[-1];
    stack[-4] = v_97;
    v_97 = stack[-4];
    if (v_97 == nil) goto v_54;
    else goto v_55;
v_54:
    v_97 = nil;
    v_98 = v_97;
    goto v_49;
v_55:
    v_97 = stack[-4];
    if (!car_legal(v_97)) v_97 = carerror(v_97); else
    v_97 = car(v_97);
    v_98 = v_97;
    if (!car_legal(v_98)) stack[0] = carerror(v_98); else
    stack[0] = car(v_98);
    v_98 = stack[-7];
    if (!car_legal(v_97)) v_97 = cdrerror(v_97); else
    v_97 = cdr(v_97);
    v_97 = quot2(v_98, v_97);
    env = stack[-8];
    v_97 = times2(stack[0], v_97);
    env = stack[-8];
    v_97 = ncons(v_97);
    env = stack[-8];
    stack[-2] = v_97;
    stack[-3] = v_97;
v_50:
    v_97 = stack[-4];
    if (!car_legal(v_97)) v_97 = cdrerror(v_97); else
    v_97 = cdr(v_97);
    stack[-4] = v_97;
    v_97 = stack[-4];
    if (v_97 == nil) goto v_73;
    else goto v_74;
v_73:
    v_97 = stack[-3];
    v_98 = v_97;
    goto v_49;
v_74:
    stack[-1] = stack[-2];
    v_97 = stack[-4];
    if (!car_legal(v_97)) v_97 = carerror(v_97); else
    v_97 = car(v_97);
    v_98 = v_97;
    if (!car_legal(v_98)) stack[0] = carerror(v_98); else
    stack[0] = car(v_98);
    v_98 = stack[-7];
    if (!car_legal(v_97)) v_97 = cdrerror(v_97); else
    v_97 = cdr(v_97);
    v_97 = quot2(v_98, v_97);
    env = stack[-8];
    v_97 = times2(stack[0], v_97);
    env = stack[-8];
    v_97 = ncons(v_97);
    env = stack[-8];
    if (!car_legal(stack[-1])) rplacd_fails(stack[-1]);
    setcdr(stack[-1], v_97);
    v_97 = stack[-2];
    if (!car_legal(v_97)) v_97 = cdrerror(v_97); else
    v_97 = cdr(v_97);
    stack[-2] = v_97;
    goto v_50;
v_49:
    v_97 = stack[-6];
    v_97 = cons(v_98, v_97);
    env = stack[-8];
    stack[-6] = v_97;
    v_97 = stack[-5];
    if (!car_legal(v_97)) v_97 = cdrerror(v_97); else
    v_97 = cdr(v_97);
    stack[-5] = v_97;
    goto v_12;
v_11:
    v_97 = stack[-6];
        return Lreverse(nil, v_97);
    return onevalue(v_97);
}



// Code for no_of_tm_sf_limited

static LispObject CC_no_of_tm_sf_limited(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_53 = stack[-1];
    if (v_53 == nil) goto v_7;
    else goto v_8;
v_7:
    v_53 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_6;
v_8:
    v_53 = stack[-1];
    v_53 = Lconsp(nil, v_53);
    env = stack[-3];
    if (v_53 == nil) goto v_15;
    else goto v_16;
v_15:
    v_53 = lisp_true;
    goto v_14;
v_16:
    v_53 = stack[-1];
    if (!car_legal(v_53)) v_53 = carerror(v_53); else
    v_53 = car(v_53);
    v_53 = Lconsp(nil, v_53);
    env = stack[-3];
    v_53 = (v_53 == nil ? lisp_true : nil);
    goto v_14;
    v_53 = nil;
v_14:
    if (v_53 == nil) goto v_12;
    v_53 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_6;
v_12:
    v_53 = stack[-1];
    if (!car_legal(v_53)) v_53 = carerror(v_53); else
    v_53 = car(v_53);
    if (!car_legal(v_53)) v_54 = cdrerror(v_53); else
    v_54 = cdr(v_53);
    v_53 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // no_of_tm_sf_limited
    v_53 = (*qfn2(fn))(fn, v_54, v_53);
    }
    env = stack[-3];
    stack[-2] = v_53;
    v_54 = stack[-2];
    v_53 = stack[0];
    v_53 = static_cast<LispObject>(greaterp2(v_54, v_53));
    v_53 = v_53 ? lisp_true : nil;
    env = stack[-3];
    if (v_53 == nil) goto v_40;
    v_53 = stack[-2];
    goto v_38;
v_40:
    v_53 = stack[-1];
    if (!car_legal(v_53)) v_54 = cdrerror(v_53); else
    v_54 = cdr(v_53);
    v_53 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // no_of_tm_sf_limited
    v_53 = (*qfn2(fn))(fn, v_54, v_53);
    }
    {
        LispObject v_58 = stack[-2];
        return plus2(v_58, v_53);
    }
    v_53 = nil;
v_38:
    goto v_6;
    v_53 = nil;
v_6:
    return onevalue(v_53);
}



// Code for settreset

static LispObject CC_settreset(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
    stack_popper stack_popper_var(1);
// end of prologue
    v_8 = nil;
    setvalue(basic_elt(env, 1), v_8); // fluidbibasisjanettreerootnode
    v_8 = nil;
    v_8 = ncons(v_8);
    env = stack[0];
    setvalue(basic_elt(env, 2), v_8); // fluidbibasissett
    v_8 = nil;
    return onevalue(v_8);
}



// Code for ofsf_updsignvar

static LispObject CC_ofsf_updsignvar(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_51, v_52, v_53, v_54, v_55, v_56, v_57, v_58;
    LispObject v_5, v_6, v_7, v_8;
    if (_a4up_ == nil)
        aerror1("not enough arguments provided", basic_elt(env, 0));
    v_5 = car(_a4up_); _a4up_ = cdr(_a4up_);
    if (_a4up_ == nil)
        aerror1("not enough arguments provided", basic_elt(env, 0));
    v_6 = car(_a4up_); _a4up_ = cdr(_a4up_);
    if (_a4up_ == nil)
        aerror1("not enough arguments provided", basic_elt(env, 0));
    v_7 = car(_a4up_); _a4up_ = cdr(_a4up_);
    if (_a4up_ == nil)
        aerror1("not enough arguments provided", basic_elt(env, 0));
    v_8 = car(_a4up_); _a4up_ = cdr(_a4up_);
    if (_a4up_ != nil)
        aerror1("too many arguments provided", basic_elt(env, 0));
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_53 = v_8;
    v_54 = v_7;
    v_55 = v_6;
    v_56 = v_5;
    v_57 = v_4;
    v_51 = v_3;
    v_58 = v_2;
// end of prologue
    v_52 = v_58;
    v_51 = Lmemq(nil, v_52, v_51);
    if (v_51 == nil) goto v_13;
    v_51 = basic_elt(env, 1); // equal
    goto v_11;
v_13:
    v_51 = v_58;
    v_52 = v_57;
    v_51 = Lmemq(nil, v_51, v_52);
    if (v_51 == nil) goto v_19;
    v_51 = basic_elt(env, 2); // greaterp
    goto v_11;
v_19:
    v_51 = v_58;
    v_52 = v_56;
    v_51 = Lmemq(nil, v_51, v_52);
    if (v_51 == nil) goto v_25;
    v_51 = basic_elt(env, 3); // lessp
    goto v_11;
v_25:
    v_51 = v_58;
    v_52 = v_55;
    v_51 = Lmemq(nil, v_51, v_52);
    if (v_51 == nil) goto v_31;
    v_51 = basic_elt(env, 4); // geq
    goto v_11;
v_31:
    v_51 = v_58;
    v_52 = v_54;
    v_51 = Lmemq(nil, v_51, v_52);
    if (v_51 == nil) goto v_37;
    v_51 = basic_elt(env, 5); // leq
    goto v_11;
v_37:
    v_51 = v_58;
    v_52 = v_53;
    v_51 = Lmemq(nil, v_51, v_52);
    if (v_51 == nil) goto v_43;
    v_51 = basic_elt(env, 6); // neq
    goto v_11;
v_43:
    v_51 = basic_elt(env, 7); // unknown
    goto v_11;
    v_51 = nil;
v_11:
    return onevalue(v_51);
}



// Code for mkexpt

static LispObject CC_mkexpt(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_18, v_19, v_20, v_21;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_20 = v_3;
    v_21 = v_2;
// end of prologue
    v_19 = v_20;
    v_18 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_19 == v_18) goto v_7;
    else goto v_8;
v_7:
    v_18 = v_21;
    goto v_6;
v_8:
    v_18 = basic_elt(env, 1); // expt
    v_19 = v_21;
    return list3(v_18, v_19, v_20);
    v_18 = nil;
v_6:
    return onevalue(v_18);
}



// Code for iv_cutn

static LispObject CC_iv_cutn(LispObject env,
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
    v_21 = v_2;
// end of prologue
    v_20 = v_21;
    if (!car_legal(v_20)) v_20 = cdrerror(v_20); else
    v_20 = cdr(v_20);
    if (v_20 == nil) goto v_7;
    v_20 = v_21;
    if (!car_legal(v_20)) stack[0] = carerror(v_20); else
    stack[0] = car(v_20);
    v_20 = v_21;
    if (!car_legal(v_20)) v_20 = cdrerror(v_20); else
    v_20 = cdr(v_20);
    {   LispObject fn = basic_elt(env, 0); // iv_cutn
    v_20 = (*qfn1(fn))(fn, v_20);
    }
    env = stack[-1];
    {
        LispObject v_23 = stack[0];
        LispObject fn = basic_elt(env, 1); // iv_cut
        return (*qfn2(fn))(fn, v_23, v_20);
    }
v_7:
    v_20 = v_21;
    if (!car_legal(v_20)) v_20 = carerror(v_20); else
    v_20 = car(v_20);
    goto v_5;
    v_20 = nil;
v_5:
    return onevalue(v_20);
}



// Code for bc_gcd

static LispObject CC_bc_gcd(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_56, v_57, v_58, v_59;
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
    v_58 = v_3;
    v_59 = v_2;
// end of prologue
    v_56 = v_59;
    if (!car_legal(v_56)) v_57 = cdrerror(v_56); else
    v_57 = cdr(v_56);
    v_56 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_57 == v_56) goto v_11;
    else goto v_12;
v_11:
    v_56 = v_58;
    if (!car_legal(v_56)) v_57 = cdrerror(v_56); else
    v_57 = cdr(v_56);
    v_56 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_56 = (v_57 == v_56 ? lisp_true : nil);
    goto v_10;
v_12:
    v_56 = nil;
    goto v_10;
    v_56 = nil;
v_10:
    if (v_56 == nil) goto v_8;
    v_56 = v_59;
    if (!car_legal(v_56)) v_56 = carerror(v_56); else
    v_56 = car(v_56);
    v_56 = integerp(v_56);
    if (v_56 == nil) goto v_26;
    v_56 = v_58;
    if (!car_legal(v_56)) v_56 = carerror(v_56); else
    v_56 = car(v_56);
    v_56 = integerp(v_56);
    if (v_56 == nil) goto v_26;
    v_56 = v_59;
    if (!car_legal(v_56)) v_56 = carerror(v_56); else
    v_56 = car(v_56);
    v_57 = v_58;
    if (!car_legal(v_57)) v_57 = carerror(v_57); else
    v_57 = car(v_57);
    v_57 = Lgcd_2(nil, v_56, v_57);
    v_56 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_57, v_56);
v_26:
    v_56 = v_59;
    if (!car_legal(v_56)) v_56 = carerror(v_56); else
    v_56 = car(v_56);
    v_57 = v_58;
    if (!car_legal(v_57)) v_57 = carerror(v_57); else
    v_57 = car(v_57);
    {   LispObject fn = basic_elt(env, 1); // gcdf!*
    v_57 = (*qfn2(fn))(fn, v_56, v_57);
    }
    v_56 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_57, v_56);
    v_56 = nil;
    goto v_6;
v_8:
    v_57 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_56 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_57, v_56);
    v_56 = nil;
v_6:
    return onevalue(v_56);
}



// Code for cnml

static LispObject CC_cnml(LispObject env,
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
    stack[0] = v_2;
// end of prologue
    v_18 = basic_elt(env, 1); // "<cn"
    {   LispObject fn = basic_elt(env, 4); // printout
    v_18 = (*qfn1(fn))(fn, v_18);
    }
    env = stack[-1];
    v_18 = stack[0];
    if (!car_legal(v_18)) v_19 = carerror(v_18); else
    v_19 = car(v_18);
    v_18 = basic_elt(env, 2); // ""
    {   LispObject fn = basic_elt(env, 5); // attributesml
    v_18 = (*qfn2(fn))(fn, v_19, v_18);
    }
    env = stack[-1];
    v_18 = stack[0];
    if (!car_legal(v_18)) v_18 = cdrerror(v_18); else
    v_18 = cdr(v_18);
    if (!car_legal(v_18)) v_18 = carerror(v_18); else
    v_18 = car(v_18);
    v_18 = Lprinc(nil, v_18);
    env = stack[-1];
    v_18 = basic_elt(env, 3); // "</cn>"
    v_18 = Lprinc(nil, v_18);
    v_18 = nil;
    return onevalue(v_18);
}



// Code for znumrnil

static LispObject CC_znumrnil(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // znumr
    v_16 = (*qfn1(fn))(fn, v_16);
    }
    if (v_16 == nil) goto v_7;
    v_17 = nil;
    v_16 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_17, v_16);
v_7:
    v_16 = stack[0];
    goto v_5;
    v_16 = nil;
v_5:
    return onevalue(v_16);
}



// Code for scar

static LispObject CC_scar(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
v_1:
    v_30 = stack[0];
    if (!consp(v_30)) goto v_7;
    else goto v_8;
v_7:
    v_30 = nil;
    goto v_6;
v_8:
    v_31 = stack[-1];
    v_30 = stack[0];
    if (!car_legal(v_30)) v_30 = carerror(v_30); else
    v_30 = car(v_30);
    if (equal(v_31, v_30)) goto v_11;
    else goto v_12;
v_11:
    v_30 = stack[0];
    goto v_6;
v_12:
    v_31 = stack[-1];
    v_30 = stack[0];
    if (!car_legal(v_30)) v_30 = carerror(v_30); else
    v_30 = car(v_30);
    {   LispObject fn = basic_elt(env, 0); // scar
    v_30 = (*qfn2(fn))(fn, v_31, v_30);
    }
    env = stack[-2];
    if (v_30 == nil) goto v_21;
    else goto v_20;
v_21:
    v_31 = stack[-1];
    v_30 = stack[0];
    if (!car_legal(v_30)) v_30 = cdrerror(v_30); else
    v_30 = cdr(v_30);
    stack[-1] = v_31;
    stack[0] = v_30;
    goto v_1;
v_20:
    goto v_6;
    v_30 = nil;
v_6:
    return onevalue(v_30);
}



// Code for copy_vect

static LispObject CC_copy_vect(LispObject env,
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
    v_27 = stack[-1];
    if (!car_legal(v_27)) v_27 = cdrerror(v_27); else
    v_27 = cdr(v_27);
    if (!car_legal(v_27)) v_27 = carerror(v_27); else
    v_27 = car(v_27);
    {   LispObject fn = basic_elt(env, 2); // fullcopy
    v_27 = (*qfn1(fn))(fn, v_27);
    }
    env = stack[-2];
    v_28 = stack[0];
    if (v_28 == nil) goto v_16;
    else goto v_17;
v_16:
    v_28 = stack[-1];
    if (!car_legal(v_28)) v_28 = cdrerror(v_28); else
    v_28 = cdr(v_28);
    if (!car_legal(v_28)) v_28 = cdrerror(v_28); else
    v_28 = cdr(v_28);
    if (!car_legal(v_28)) v_28 = carerror(v_28); else
    v_28 = car(v_28);
    stack[0] = v_28;
    goto v_15;
v_17:
v_15:
    v_29 = basic_elt(env, 1); // sparsemat
    v_28 = v_27;
    v_27 = stack[0];
    return list3(v_29, v_28, v_27);
    return onevalue(v_27);
}



// Code for partitwedge

static LispObject CC_partitwedge(LispObject env,
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
    v_19 = v_2;
// end of prologue
    v_18 = v_19;
    if (!car_legal(v_18)) v_18 = cdrerror(v_18); else
    v_18 = cdr(v_18);
    if (v_18 == nil) goto v_6;
    else goto v_7;
v_6:
    v_18 = v_19;
    if (!car_legal(v_18)) v_18 = carerror(v_18); else
    v_18 = car(v_18);
    {
        LispObject fn = basic_elt(env, 1); // partitop
        return (*qfn1(fn))(fn, v_18);
    }
v_7:
    v_18 = v_19;
    {   LispObject fn = basic_elt(env, 2); // xpndwedge
    v_18 = (*qfn1(fn))(fn, v_18);
    }
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 3); // mkuniquewedge
        return (*qfn1(fn))(fn, v_18);
    }
    v_18 = nil;
    return onevalue(v_18);
}



// Code for endmodule

static LispObject CC_endmodule(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
    stack_popper stack_popper_var(1);
// end of prologue
    v_20 = qvalue(basic_elt(env, 1)); // mode!-list!*
    if (v_20 == nil) goto v_7;
    else goto v_8;
v_7:
    v_20 = basic_elt(env, 2); // "ENDMODULE called outside module"
    {   LispObject fn = basic_elt(env, 7); // rederr
    v_20 = (*qfn1(fn))(fn, v_20);
    }
    env = stack[0];
    goto v_6;
v_8:
v_6:
    v_20 = nil;
    setvalue(basic_elt(env, 3), v_20); // exportslist!*
    v_20 = nil;
    setvalue(basic_elt(env, 4), v_20); // importslist!*
    v_20 = nil;
    v_20 = ncons(v_20);
    env = stack[0];
    setvalue(basic_elt(env, 5), v_20); // alglist!*
    v_20 = qvalue(basic_elt(env, 1)); // mode!-list!*
    if (!car_legal(v_20)) v_20 = carerror(v_20); else
    v_20 = car(v_20);
    setvalue(basic_elt(env, 6), v_20); // !*mode
    v_20 = qvalue(basic_elt(env, 1)); // mode!-list!*
    if (!car_legal(v_20)) v_20 = cdrerror(v_20); else
    v_20 = cdr(v_20);
    setvalue(basic_elt(env, 1), v_20); // mode!-list!*
    v_20 = nil;
    return onevalue(v_20);
}



// Code for mkforttab

static LispObject CC_mkforttab(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil);
    stack_popper stack_popper_var(2);
// end of prologue
    stack[0] = basic_elt(env, 1); // forttab
    v_9 = qvalue(basic_elt(env, 2)); // fortcurrind!*
    v_8 = static_cast<LispObject>(96)+TAG_FIXNUM; // 6
    v_8 = plus2(v_9, v_8);
    {
        LispObject v_11 = stack[0];
        return list2(v_11, v_8);
    }
}



// Code for coeff_calc

static LispObject CC_coeff_calc(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    v_13 = v_4;
    v_14 = v_3;
    v_15 = v_2;
// end of prologue
    stack[0] = basic_elt(env, 1); // plus
    {   LispObject fn = basic_elt(env, 2); // coeff1_calc
    v_13 = (*qfn3(fn))(fn, v_15, v_14, v_13);
    }
    env = stack[-1];
    v_13 = cons(stack[0], v_13);
    env = stack[-1];
    {
        LispObject fn = basic_elt(env, 3); // reval
        return (*qfn1(fn))(fn, v_13);
    }
}



// Code for split!-comfac!-part

static LispObject CC_splitKcomfacKpart(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_8, v_9, v_10;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_8 = v_2;
// end of prologue
    v_10 = v_8;
    v_9 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_8 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {
        LispObject fn = basic_elt(env, 1); // split!-comfac
        return (*qfn3(fn))(fn, v_10, v_9, v_8);
    }
}



// Code for listminimize

static LispObject CC_listminimize(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_18, v_19, v_20;
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
    v_18 = v_3;
    v_19 = v_2;
// end of prologue
    v_20 = v_19;
    if (v_20 == nil) goto v_7;
    else goto v_8;
v_7:
    v_18 = nil;
    goto v_6;
v_8:
    v_20 = nil;
    {   LispObject fn = basic_elt(env, 1); // cali!=min
    v_18 = (*qfn3(fn))(fn, v_20, v_19, v_18);
    }
        return Lreverse(nil, v_18);
    v_18 = nil;
v_6:
    return onevalue(v_18);
}



// Code for zfactor1

static LispObject CC_zfactor1(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_118, v_119, v_120;
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
    stack[0] = nil;
v_8:
    v_119 = stack[-4];
    v_118 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_118 = static_cast<LispObject>(lessp2(v_119, v_118));
    v_118 = v_118 ? lisp_true : nil;
    env = stack[-6];
    if (v_118 == nil) goto v_12;
    v_120 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    v_119 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_118 = stack[0];
    v_118 = acons(v_120, v_119, v_118);
    env = stack[-6];
    stack[0] = v_118;
    v_118 = stack[-4];
    v_118 = negate(v_118);
    env = stack[-6];
    stack[-4] = v_118;
    goto v_8;
v_12:
    v_119 = stack[-4];
    v_118 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_118 = static_cast<LispObject>(lessp2(v_119, v_118));
    v_118 = v_118 ? lisp_true : nil;
    env = stack[-6];
    if (v_118 == nil) goto v_23;
    v_119 = stack[-4];
    v_118 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_118 = cons(v_119, v_118);
    env = stack[-6];
    v_118 = ncons(v_118);
    env = stack[-6];
    {
        LispObject v_127 = stack[0];
        LispObject fn = basic_elt(env, 2); // nreverse
        return (*qfn2(fn))(fn, v_127, v_118);
    }
v_23:
    stack[-5] = stack[0];
    v_118 = qvalue(basic_elt(env, 1)); // !*primelist!*
    stack[-2] = v_118;
    v_118 = nil;
    stack[-1] = v_118;
v_47:
    v_118 = stack[-2];
    if (v_118 == nil) goto v_50;
    else goto v_51;
v_50:
    goto v_46;
v_51:
    v_118 = stack[-2];
    if (!car_legal(v_118)) v_118 = carerror(v_118); else
    v_118 = car(v_118);
    stack[0] = v_118;
    v_118 = stack[-2];
    if (!car_legal(v_118)) v_118 = cdrerror(v_118); else
    v_118 = cdr(v_118);
    stack[-2] = v_118;
v_60:
    v_119 = stack[-4];
    v_118 = stack[0];
    v_118 = Ldivide_2(nil, v_119, v_118);
    env = stack[-6];
    v_120 = v_118;
    if (!car_legal(v_118)) v_119 = cdrerror(v_118); else
    v_119 = cdr(v_118);
    v_118 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_119 == v_118) goto v_64;
    goto v_59;
v_64:
    v_118 = v_120;
    if (!car_legal(v_118)) v_118 = carerror(v_118); else
    v_118 = car(v_118);
    stack[-4] = v_118;
    v_119 = stack[0];
    v_118 = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // add!-factor
    v_118 = (*qfn2(fn))(fn, v_119, v_118);
    }
    env = stack[-6];
    stack[-1] = v_118;
    goto v_60;
v_59:
    v_119 = stack[-4];
    v_118 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_119 == v_118) goto v_83;
    v_119 = stack[0];
    v_118 = stack[0];
    v_119 = times2(v_119, v_118);
    env = stack[-6];
    v_118 = stack[-4];
    v_118 = static_cast<LispObject>(greaterp2(v_119, v_118));
    v_118 = v_118 ? lisp_true : nil;
    env = stack[-6];
    goto v_81;
v_83:
    v_118 = nil;
    goto v_81;
    v_118 = nil;
v_81:
    if (v_118 == nil) goto v_79;
    v_118 = nil;
    stack[-2] = v_118;
    v_119 = stack[-4];
    v_118 = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // add!-factor
    v_118 = (*qfn2(fn))(fn, v_119, v_118);
    }
    env = stack[-6];
    stack[-1] = v_118;
    v_118 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-4] = v_118;
    goto v_77;
v_79:
v_77:
    goto v_47;
v_46:
    v_119 = stack[-4];
    v_118 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_119 == v_118) goto v_101;
    else goto v_102;
v_101:
    v_118 = stack[-1];
    goto v_100;
v_102:
    v_118 = stack[-3];
    if (v_118 == nil) goto v_106;
    else goto v_107;
v_106:
    v_120 = stack[-4];
    v_119 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_118 = stack[-1];
    v_118 = acons(v_120, v_119, v_118);
    env = stack[-6];
    goto v_100;
v_107:
    v_119 = stack[-4];
    v_118 = stack[-1];
    {   LispObject fn = basic_elt(env, 4); // mcfactor!*
    v_118 = (*qfn2(fn))(fn, v_119, v_118);
    }
    env = stack[-6];
    goto v_100;
    v_118 = nil;
v_100:
    {
        LispObject v_128 = stack[-5];
        LispObject fn = basic_elt(env, 2); // nreverse
        return (*qfn2(fn))(fn, v_128, v_118);
    }
    v_118 = nil;
    return onevalue(v_118);
}



// Code for precision

static LispObject CC_precision(LispObject env,
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
// space for vars preserved across procedure calls
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_26 = stack[0];
    if (is_number(v_26)) goto v_11;
    v_26 = lisp_true;
    goto v_9;
v_11:
    v_27 = stack[0];
    v_26 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_26 = static_cast<LispObject>(lessp2(v_27, v_26));
    v_26 = v_26 ? lisp_true : nil;
    env = stack[-1];
    goto v_9;
    v_26 = nil;
v_9:
    if (v_26 == nil) goto v_7;
    v_28 = basic_elt(env, 1); // arith
    v_27 = static_cast<LispObject>(96)+TAG_FIXNUM; // 6
    v_26 = basic_elt(env, 2); // "positive number required"
    {   LispObject fn = basic_elt(env, 3); // rerror
    v_26 = (*qfn3(fn))(fn, v_28, v_27, v_26);
    }
    env = stack[-1];
    goto v_5;
v_7:
v_5:
    v_27 = stack[0];
    v_26 = lisp_true;
    {
        LispObject fn = basic_elt(env, 4); // precision1
        return (*qfn2(fn))(fn, v_27, v_26);
    }
}



// Code for mkrootsql

static LispObject CC_mkrootsql(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    v_45 = stack[-1];
    if (v_45 == nil) goto v_7;
    else goto v_8;
v_7:
    v_45 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {
        LispObject fn = basic_elt(env, 1); // !*d2q
        return (*qfn1(fn))(fn, v_45);
    }
v_8:
    v_45 = stack[-1];
    if (!car_legal(v_45)) v_45 = carerror(v_45); else
    v_45 = car(v_45);
    if (!car_legal(v_45)) v_46 = cdrerror(v_45); else
    v_46 = cdr(v_45);
    v_45 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_45 = static_cast<LispObject>(greaterp2(v_46, v_45));
    v_45 = v_45 ? lisp_true : nil;
    env = stack[-3];
    if (v_45 == nil) goto v_13;
    v_45 = stack[-1];
    if (!car_legal(v_45)) v_45 = carerror(v_45); else
    v_45 = car(v_45);
    if (!car_legal(v_45)) v_46 = carerror(v_45); else
    v_46 = car(v_45);
    v_45 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // mkrootsq
    v_46 = (*qfn2(fn))(fn, v_46, v_45);
    }
    env = stack[-3];
    v_45 = stack[-1];
    if (!car_legal(v_45)) v_45 = carerror(v_45); else
    v_45 = car(v_45);
    if (!car_legal(v_45)) v_45 = cdrerror(v_45); else
    v_45 = cdr(v_45);
    {   LispObject fn = basic_elt(env, 3); // exptsq
    stack[-2] = (*qfn2(fn))(fn, v_46, v_45);
    }
    env = stack[-3];
    v_45 = stack[-1];
    if (!car_legal(v_45)) v_46 = cdrerror(v_45); else
    v_46 = cdr(v_45);
    v_45 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // mkrootsql
    v_45 = (*qfn2(fn))(fn, v_46, v_45);
    }
    env = stack[-3];
    {
        LispObject v_50 = stack[-2];
        LispObject fn = basic_elt(env, 4); // multsq
        return (*qfn2(fn))(fn, v_50, v_45);
    }
v_13:
    v_45 = stack[-1];
    if (!car_legal(v_45)) v_45 = carerror(v_45); else
    v_45 = car(v_45);
    if (!car_legal(v_45)) v_46 = carerror(v_45); else
    v_46 = car(v_45);
    v_45 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // mkrootsq
    stack[-2] = (*qfn2(fn))(fn, v_46, v_45);
    }
    env = stack[-3];
    v_45 = stack[-1];
    if (!car_legal(v_45)) v_46 = cdrerror(v_45); else
    v_46 = cdr(v_45);
    v_45 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // mkrootsql
    v_45 = (*qfn2(fn))(fn, v_46, v_45);
    }
    env = stack[-3];
    {
        LispObject v_51 = stack[-2];
        LispObject fn = basic_elt(env, 4); // multsq
        return (*qfn2(fn))(fn, v_51, v_45);
    }
    v_45 = nil;
    return onevalue(v_45);
}



// Code for talp_simplatlinv

static LispObject CC_talp_simplatlinv(LispObject env,
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
    v_25 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // talp_simplt
    v_25 = (*qfn1(fn))(fn, v_25);
    }
    env = stack[-3];
    stack[-1] = v_25;
    v_25 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // talp_invp
    v_25 = (*qfn1(fn))(fn, v_25);
    }
    env = stack[-3];
    if (v_25 == nil) goto v_11;
    v_27 = stack[-2];
    v_26 = stack[-1];
    v_25 = stack[0];
    {
        LispObject fn = basic_elt(env, 3); // talp_mk2
        return (*qfn3(fn))(fn, v_27, v_26, v_25);
    }
v_11:
    v_25 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // talp_simplt
    v_25 = (*qfn1(fn))(fn, v_25);
    }
    env = stack[-3];
    {
        LispObject v_31 = stack[-2];
        LispObject v_32 = stack[-1];
        LispObject fn = basic_elt(env, 4); // talp_simplat2
        return (*qfn3(fn))(fn, v_31, v_32, v_25);
    }
    v_25 = nil;
    return onevalue(v_25);
}



setup_type const u45_setup[] =
{
    {"applsmacro",              G0W3,     G1W3,     G2W3,     CC_applsmacro,G4W3},
    {"prsum",                   G0W2,     G1W2,     CC_prsum, G3W2,     G4W2},
    {"subs2p",                  G0W3,     G1W3,     G2W3,     CC_subs2p,G4W3},
    {"prim-part",               G0W1,     CC_primKpart,G2W1,  G3W1,     G4W1},
    {"totalcompareconstants",   G0W2,     G1W2,     CC_totalcompareconstants,G3W2,G4W2},
    {"quotientml",              G0W2,     G1W2,     CC_quotientml,G3W2, G4W2},
    {"simpsqrtsq",              G0W1,     CC_simpsqrtsq,G2W1, G3W1,     G4W1},
    {"ps:arg-values",           G0W1,     CC_psTargKvalues,G2W1,G3W1,   G4W1},
    {"wedgewedge",              G0W2,     G1W2,     CC_wedgewedge,G3W2, G4W2},
    {"mksqrt",                  G0W1,     CC_mksqrt,G2W1,     G3W1,     G4W1},
    {"fermionicp",              G0W1,     CC_fermionicp,G2W1, G3W1,     G4W1},
    {"rule",                    G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_rule},
    {"depend-f",                G0W2,     G1W2,     CC_dependKf,G3W2,   G4W2},
    {"mri_ofsf2mri",            G0W2,     G1W2,     CC_mri_ofsf2mri,G3W2,G4W2},
    {"csymbolrd",               CC_csymbolrd,G1W0,  G2W0,     G3W0,     G4W0},
    {"*rn2rd",                  G0W1,     CC_Hrn2rd,G2W1,     G3W1,     G4W1},
    {"dipcontevmin",            G0W2,     G1W2,     CC_dipcontevmin,G3W2,G4W2},
    {"subfindices",             G0W2,     G1W2,     CC_subfindices,G3W2,G4W2},
    {"gd_gcasesimpl",           G0W1,     CC_gd_gcasesimpl,G2W1,G3W1,   G4W1},
    {"ofsf_sippsignchkf",       G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_ofsf_sippsignchkf},
    {"mri_prifloor",            G0W1,     CC_mri_prifloor,G2W1,G3W1,    G4W1},
    {"make-image-mod-p",        G0W2,     G1W2,     CC_makeKimageKmodKp,G3W2,G4W2},
    {"matrixir",                CC_matrixir,G1W0,   G2W0,     G3W0,     G4W0},
    {"simpdf",                  G0W1,     CC_simpdf,G2W1,     G3W1,     G4W1},
    {"findhc",                  G0W1,     CC_findhc,G2W1,     G3W1,     G4W1},
    {"gfstorval",               G0W2,     G1W2,     CC_gfstorval,G3W2,  G4W2},
    {"fortassign",              G0W1,     CC_fortassign,G2W1, G3W1,     G4W1},
    {"new_prove",               G0W2,     G1W2,     CC_new_prove,G3W2,  G4W2},
    {"sign-abs",                G0W1,     CC_signKabs,G2W1,   G3W1,     G4W1},
    {"setmatelem",              G0W2,     G1W2,     CC_setmatelem,G3W2, G4W2},
    {"dfp-rule-found",          G0W2,     G1W2,     CC_dfpKruleKfound,G3W2,G4W2},
    {"fs:timescoeff",           G0W2,     G1W2,     CC_fsTtimescoeff,G3W2,G4W2},
    {"mkindxlist",              G0W1,     CC_mkindxlist,G2W1, G3W1,     G4W1},
    {"inormmat",                G0W1,     CC_inormmat,G2W1,   G3W1,     G4W1},
    {"no_of_tm_sf_limited",     G0W2,     G1W2,     CC_no_of_tm_sf_limited,G3W2,G4W2},
    {"settreset",               CC_settreset,G1W0,  G2W0,     G3W0,     G4W0},
    {"ofsf_updsignvar",         G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_ofsf_updsignvar},
    {"mkexpt",                  G0W2,     G1W2,     CC_mkexpt,G3W2,     G4W2},
    {"iv_cutn",                 G0W1,     CC_iv_cutn,G2W1,    G3W1,     G4W1},
    {"bc_gcd",                  G0W2,     G1W2,     CC_bc_gcd,G3W2,     G4W2},
    {"cnml",                    G0W1,     CC_cnml,  G2W1,     G3W1,     G4W1},
    {"znumrnil",                G0W1,     CC_znumrnil,G2W1,   G3W1,     G4W1},
    {"scar",                    G0W2,     G1W2,     CC_scar,  G3W2,     G4W2},
    {"copy_vect",               G0W2,     G1W2,     CC_copy_vect,G3W2,  G4W2},
    {"partitwedge",             G0W1,     CC_partitwedge,G2W1,G3W1,     G4W1},
    {"endmodule",               CC_endmodule,G1W0,  G2W0,     G3W0,     G4W0},
    {"mkforttab",               CC_mkforttab,G1W0,  G2W0,     G3W0,     G4W0},
    {"coeff_calc",              G0W3,     G1W3,     G2W3,     CC_coeff_calc,G4W3},
    {"split-comfac-part",       G0W1,     CC_splitKcomfacKpart,G2W1,G3W1,G4W1},
    {"listminimize",            G0W2,     G1W2,     CC_listminimize,G3W2,G4W2},
    {"zfactor1",                G0W2,     G1W2,     CC_zfactor1,G3W2,   G4W2},
    {"precision",               G0W1,     CC_precision,G2W1,  G3W1,     G4W1},
    {"mkrootsql",               G0W2,     G1W2,     CC_mkrootsql,G3W2,  G4W2},
    {"talp_simplatlinv",        G0W3,     G1W3,     G2W3,     CC_talp_simplatlinv,G4W3},
    {nullptr, 
        reinterpret_cast<no_args *>(
            reinterpret_cast<uintptr_t>("u45")),
        reinterpret_cast<one_arg *>(
            reinterpret_cast<uintptr_t>("95899 2283492 5024683")),
        nullptr, nullptr, nullptr}
};

// end of generated code
