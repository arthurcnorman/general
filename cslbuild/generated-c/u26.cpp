
// $destdir/u26.c        Machine generated C code

// $Id$

#include "config.h"
#include "headers.h"



// Code for subs3t

static LispObject CC_subs3t(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_297, v_298, v_299, v_300;
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
    v_298 = v_3;
    stack[-4] = v_2;
// end of prologue
    stack[-5] = nil;
    v_297 = stack[-4];
    if (!car_legal(v_297)) stack[0] = carerror(v_297); else
    stack[0] = car(v_297);
    v_297 = stack[-4];
    if (!car_legal(v_297)) v_297 = cdrerror(v_297); else
    v_297 = cdr(v_297);
    if (!consp(v_297)) goto v_27;
    else goto v_28;
v_27:
    v_297 = lisp_true;
    goto v_26;
v_28:
    v_297 = stack[-4];
    if (!car_legal(v_297)) v_297 = cdrerror(v_297); else
    v_297 = cdr(v_297);
    if (!car_legal(v_297)) v_297 = carerror(v_297); else
    v_297 = car(v_297);
    v_297 = (consp(v_297) ? nil : lisp_true);
    goto v_26;
    v_297 = nil;
v_26:
    if (v_297 == nil) goto v_24;
    v_297 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 5); // sizchk
    v_297 = (*qfn2(fn))(fn, v_298, v_297);
    }
    env = stack[-6];
    goto v_22;
v_24:
    v_297 = v_298;
    goto v_22;
    v_297 = nil;
v_22:
    {   LispObject fn = basic_elt(env, 6); // mtchk
    v_297 = (*qfn2(fn))(fn, stack[0], v_297);
    }
    env = stack[-6];
    stack[-3] = v_297;
    v_297 = stack[-3];
    if (v_297 == nil) goto v_46;
    else goto v_47;
v_46:
    goto v_12;
v_47:
    v_297 = stack[-3];
    if (!car_legal(v_297)) v_297 = carerror(v_297); else
    v_297 = car(v_297);
    if (!car_legal(v_297)) v_297 = carerror(v_297); else
    v_297 = car(v_297);
    if (v_297 == nil) goto v_49;
    else goto v_50;
v_49:
    goto v_13;
v_50:
    v_297 = stack[-4];
    if (!car_legal(v_297)) v_299 = cdrerror(v_297); else
    v_299 = cdr(v_297);
    v_298 = stack[-3];
    v_297 = nil;
    {   LispObject fn = basic_elt(env, 7); // subs3f1
    v_297 = (*qfn3(fn))(fn, v_299, v_298, v_297);
    }
    env = stack[-6];
    stack[-2] = v_297;
    v_297 = qvalue(basic_elt(env, 1)); // mchfg!*
    if (v_297 == nil) goto v_62;
    v_297 = stack[-4];
    if (!car_legal(v_297)) v_298 = carerror(v_297); else
    v_298 = car(v_297);
    v_297 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_297 = cons(v_298, v_297);
    env = stack[-6];
    v_298 = ncons(v_297);
    env = stack[-6];
    v_297 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_298 = cons(v_298, v_297);
    env = stack[-6];
    v_297 = stack[-2];
    {
        LispObject fn = basic_elt(env, 8); // multsq
        return (*qfn2(fn))(fn, v_298, v_297);
    }
v_62:
v_12:
    v_297 = stack[-4];
    v_298 = ncons(v_297);
    v_297 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_298, v_297);
v_13:
    v_297 = stack[-3];
    if (!car_legal(v_297)) v_297 = carerror(v_297); else
    v_297 = car(v_297);
    if (!car_legal(v_297)) v_297 = cdrerror(v_297); else
    v_297 = cdr(v_297);
    if (!car_legal(v_297)) v_297 = cdrerror(v_297); else
    v_297 = cdr(v_297);
    stack[-3] = v_297;
    v_297 = stack[-3];
    if (!car_legal(v_297)) v_297 = cdrerror(v_297); else
    v_297 = cdr(v_297);
    if (!car_legal(v_297)) v_297 = carerror(v_297); else
    v_297 = car(v_297);
    if (!car_legal(v_297)) v_297 = carerror(v_297); else
    v_297 = car(v_297);
    stack[-1] = v_297;
    v_297 = nil;
    setvalue(basic_elt(env, 1), v_297); // mchfg!*
    v_297 = stack[-4];
    if (!car_legal(v_297)) v_299 = cdrerror(v_297); else
    v_299 = cdr(v_297);
    v_298 = qvalue(basic_elt(env, 2)); // !*match
    v_297 = nil;
    {   LispObject fn = basic_elt(env, 7); // subs3f1
    v_297 = (*qfn3(fn))(fn, v_299, v_298, v_297);
    }
    env = stack[-6];
    stack[-2] = v_297;
    v_297 = lisp_true;
    setvalue(basic_elt(env, 1), v_297); // mchfg!*
    v_297 = stack[-1];
    if (!car_legal(v_297)) v_298 = carerror(v_297); else
    v_298 = car(v_297);
    v_297 = stack[-4];
    if (!car_legal(v_297)) v_297 = carerror(v_297); else
    v_297 = car(v_297);
    if (!car_legal(v_297)) v_297 = carerror(v_297); else
    v_297 = car(v_297);
    if (equal(v_298, v_297)) goto v_95;
    goto v_17;
v_95:
    v_298 = stack[-1];
    v_297 = stack[-4];
    if (!car_legal(v_297)) v_297 = carerror(v_297); else
    v_297 = car(v_297);
    if (equal(v_298, v_297)) goto v_102;
    v_297 = stack[-4];
    if (!car_legal(v_297)) v_297 = carerror(v_297); else
    v_297 = car(v_297);
    if (!car_legal(v_297)) stack[0] = carerror(v_297); else
    stack[0] = car(v_297);
    v_297 = stack[-4];
    if (!car_legal(v_297)) v_297 = carerror(v_297); else
    v_297 = car(v_297);
    if (!car_legal(v_297)) v_298 = cdrerror(v_297); else
    v_298 = cdr(v_297);
    v_297 = stack[-1];
    if (!car_legal(v_297)) v_297 = cdrerror(v_297); else
    v_297 = cdr(v_297);
    v_297 = difference2(v_298, v_297);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 9); // to
    v_298 = (*qfn2(fn))(fn, stack[0], v_297);
    }
    env = stack[-6];
    v_297 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_297 = cons(v_298, v_297);
    env = stack[-6];
    v_298 = ncons(v_297);
    env = stack[-6];
    v_297 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_298 = cons(v_298, v_297);
    env = stack[-6];
    v_297 = stack[-2];
    {   LispObject fn = basic_elt(env, 8); // multsq
    v_297 = (*qfn2(fn))(fn, v_298, v_297);
    }
    env = stack[-6];
    stack[-2] = v_297;
    goto v_93;
v_102:
v_93:
v_14:
    v_297 = stack[-3];
    {   LispObject fn = basic_elt(env, 10); // simpcar
    v_298 = (*qfn1(fn))(fn, v_297);
    }
    env = stack[-6];
    v_297 = stack[-2];
    {   LispObject fn = basic_elt(env, 8); // multsq
    v_297 = (*qfn2(fn))(fn, v_298, v_297);
    }
    env = stack[-6];
    stack[-2] = v_297;
    v_297 = stack[-3];
    if (!car_legal(v_297)) v_297 = cdrerror(v_297); else
    v_297 = cdr(v_297);
    if (!car_legal(v_297)) v_297 = carerror(v_297); else
    v_297 = car(v_297);
    if (!car_legal(v_297)) v_297 = cdrerror(v_297); else
    v_297 = cdr(v_297);
    stack[-3] = v_297;
    v_297 = stack[-3];
    if (v_297 == nil) goto v_133;
    else goto v_134;
v_133:
    v_297 = stack[-2];
    goto v_11;
v_134:
    v_297 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-1] = v_297;
v_15:
    v_297 = stack[-3];
    if (v_297 == nil) goto v_140;
    else goto v_141;
v_140:
    goto v_16;
v_141:
    v_297 = stack[-3];
    if (!car_legal(v_297)) v_297 = carerror(v_297); else
    v_297 = car(v_297);
    if (!car_legal(v_297)) v_297 = carerror(v_297); else
    v_297 = car(v_297);
    if (!consp(v_297)) goto v_149;
    else goto v_150;
v_149:
    v_297 = lisp_true;
    goto v_148;
v_150:
    v_297 = stack[-3];
    if (!car_legal(v_297)) v_297 = carerror(v_297); else
    v_297 = car(v_297);
    if (!car_legal(v_297)) v_297 = carerror(v_297); else
    v_297 = car(v_297);
    {   LispObject fn = basic_elt(env, 11); // sfp
    v_297 = (*qfn1(fn))(fn, v_297);
    }
    env = stack[-6];
    goto v_148;
    v_297 = nil;
v_148:
    if (v_297 == nil) goto v_146;
    v_297 = stack[-3];
    if (!car_legal(v_297)) v_297 = carerror(v_297); else
    v_297 = car(v_297);
    if (!car_legal(v_297)) v_297 = carerror(v_297); else
    v_297 = car(v_297);
    goto v_144;
v_146:
    v_297 = nil;
// Binding subfg!*
// FLUIDBIND: reloadenv=6 litvec-offset=3 saveloc=4
{   bind_fluid_stack bind_fluid_var(-6, 3, -4);
    setvalue(basic_elt(env, 3), v_297); // subfg!*
    v_297 = stack[-3];
    if (!car_legal(v_297)) v_297 = carerror(v_297); else
    v_297 = car(v_297);
    if (!car_legal(v_297)) v_297 = carerror(v_297); else
    v_297 = car(v_297);
    {   LispObject fn = basic_elt(env, 12); // simp
    v_297 = (*qfn1(fn))(fn, v_297);
    }
    env = stack[-6];
    stack[0] = v_297;
    v_297 = stack[0];
    {   LispObject fn = basic_elt(env, 13); // kernp
    v_297 = (*qfn1(fn))(fn, v_297);
    }
    env = stack[-6];
    if (v_297 == nil) goto v_177;
    v_297 = stack[0];
    if (!car_legal(v_297)) v_297 = carerror(v_297); else
    v_297 = car(v_297);
    if (!car_legal(v_297)) v_297 = carerror(v_297); else
    v_297 = car(v_297);
    if (!car_legal(v_297)) v_297 = carerror(v_297); else
    v_297 = car(v_297);
    if (!car_legal(v_297)) v_298 = carerror(v_297); else
    v_298 = car(v_297);
    stack[0] = v_298;
    v_297 = stack[-3];
    if (!car_legal(v_297)) v_297 = carerror(v_297); else
    v_297 = car(v_297);
    if (!car_legal(v_297)) v_297 = carerror(v_297); else
    v_297 = car(v_297);
    if (!car_legal(v_297)) v_297 = carerror(v_297); else
    v_297 = car(v_297);
    if (!consp(v_298)) goto v_177;
    v_298 = car(v_298);
    if (v_298 == v_297) goto v_181;
    else goto v_177;
v_181:
    v_297 = stack[0];
    goto v_175;
v_177:
    v_297 = stack[-3];
    if (!car_legal(v_297)) v_297 = carerror(v_297); else
    v_297 = car(v_297);
    if (!car_legal(v_297)) v_297 = carerror(v_297); else
    v_297 = car(v_297);
    {   LispObject fn = basic_elt(env, 14); // revop1
    v_297 = (*qfn1(fn))(fn, v_297);
    }
    env = stack[-6];
    goto v_175;
    v_297 = nil;
v_175:
    ;}  // end of a binding scope
    goto v_144;
    v_297 = nil;
v_144:
    stack[0] = v_297;
    v_297 = stack[0];
    {   LispObject fn = basic_elt(env, 15); // noncomp
    v_297 = (*qfn1(fn))(fn, v_297);
    }
    env = stack[-6];
    if (v_297 == nil) goto v_204;
    else goto v_202;
v_204:
    v_297 = qvalue(basic_elt(env, 4)); // !*mcd
    if (v_297 == nil) goto v_202;
    goto v_203;
v_202:
    v_297 = lisp_true;
    stack[-5] = v_297;
    goto v_201;
v_203:
v_201:
    v_297 = stack[-5];
    if (v_297 == nil) goto v_218;
    else goto v_219;
v_218:
    v_297 = stack[-3];
    if (!car_legal(v_297)) v_297 = carerror(v_297); else
    v_297 = car(v_297);
    if (!car_legal(v_297)) v_297 = cdrerror(v_297); else
    v_297 = cdr(v_297);
    goto v_217;
v_219:
    v_297 = stack[-3];
    if (!car_legal(v_297)) v_297 = carerror(v_297); else
    v_297 = car(v_297);
    if (!car_legal(v_297)) v_297 = cdrerror(v_297); else
    v_297 = cdr(v_297);
    v_297 = negate(v_297);
    env = stack[-6];
    goto v_217;
    v_297 = nil;
v_217:
    {   LispObject fn = basic_elt(env, 16); // mksp
    v_298 = (*qfn2(fn))(fn, stack[0], v_297);
    }
    env = stack[-6];
    v_297 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_297 = cons(v_298, v_297);
    env = stack[-6];
    v_297 = ncons(v_297);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 17); // multf
    v_297 = (*qfn2(fn))(fn, stack[-1], v_297);
    }
    env = stack[-6];
    stack[-1] = v_297;
    v_297 = stack[-3];
    if (!car_legal(v_297)) v_297 = cdrerror(v_297); else
    v_297 = cdr(v_297);
    stack[-3] = v_297;
    goto v_15;
v_16:
    v_297 = stack[-5];
    if (v_297 == nil) goto v_235;
    else goto v_236;
v_235:
    v_297 = stack[-2];
    if (!car_legal(v_297)) stack[0] = carerror(v_297); else
    stack[0] = car(v_297);
    v_298 = stack[-1];
    v_297 = stack[-2];
    if (!car_legal(v_297)) v_297 = cdrerror(v_297); else
    v_297 = cdr(v_297);
    {   LispObject fn = basic_elt(env, 17); // multf
    v_297 = (*qfn2(fn))(fn, v_298, v_297);
    }
    {
        LispObject v_307 = stack[0];
        return cons(v_307, v_297);
    }
v_236:
    v_298 = stack[-1];
    v_297 = stack[-2];
    if (!car_legal(v_297)) v_297 = carerror(v_297); else
    v_297 = car(v_297);
    {   LispObject fn = basic_elt(env, 17); // multf
    v_298 = (*qfn2(fn))(fn, v_298, v_297);
    }
    v_297 = stack[-2];
    if (!car_legal(v_297)) v_297 = cdrerror(v_297); else
    v_297 = cdr(v_297);
    return cons(v_298, v_297);
    v_297 = nil;
    goto v_11;
v_17:
    v_297 = stack[-1];
    if (!car_legal(v_297)) v_297 = carerror(v_297); else
    v_297 = car(v_297);
    {   LispObject fn = basic_elt(env, 12); // simp
    stack[0] = (*qfn1(fn))(fn, v_297);
    }
    env = stack[-6];
    v_297 = stack[-4];
    if (!car_legal(v_297)) v_297 = carerror(v_297); else
    v_297 = car(v_297);
    if (!car_legal(v_297)) v_297 = carerror(v_297); else
    v_297 = car(v_297);
    {   LispObject fn = basic_elt(env, 12); // simp
    v_297 = (*qfn1(fn))(fn, v_297);
    }
    env = stack[-6];
    if (equal(stack[0], v_297)) goto v_257;
    v_300 = basic_elt(env, 0); // subs3t
    v_299 = stack[-4];
    v_298 = stack[-3];
    v_297 = stack[-1];
    v_297 = list4(v_300, v_299, v_298, v_297);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 18); // errach
    v_297 = (*qfn1(fn))(fn, v_297);
    }
    env = stack[-6];
    goto v_255;
v_257:
v_255:
    v_297 = stack[-1];
    if (!car_legal(v_297)) v_298 = cdrerror(v_297); else
    v_298 = cdr(v_297);
    v_297 = stack[-4];
    if (!car_legal(v_297)) v_297 = carerror(v_297); else
    v_297 = car(v_297);
    if (!car_legal(v_297)) v_297 = cdrerror(v_297); else
    v_297 = cdr(v_297);
    if (equal(v_298, v_297)) goto v_274;
    v_297 = stack[-4];
    if (!car_legal(v_297)) v_297 = carerror(v_297); else
    v_297 = car(v_297);
    if (!car_legal(v_297)) stack[0] = carerror(v_297); else
    stack[0] = car(v_297);
    v_297 = stack[-4];
    if (!car_legal(v_297)) v_297 = carerror(v_297); else
    v_297 = car(v_297);
    if (!car_legal(v_297)) v_298 = cdrerror(v_297); else
    v_298 = cdr(v_297);
    v_297 = stack[-1];
    if (!car_legal(v_297)) v_297 = cdrerror(v_297); else
    v_297 = cdr(v_297);
    v_297 = difference2(v_298, v_297);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 9); // to
    v_298 = (*qfn2(fn))(fn, stack[0], v_297);
    }
    env = stack[-6];
    v_297 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_297 = cons(v_298, v_297);
    env = stack[-6];
    v_298 = ncons(v_297);
    env = stack[-6];
    v_297 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_298 = cons(v_298, v_297);
    env = stack[-6];
    v_297 = stack[-2];
    {   LispObject fn = basic_elt(env, 8); // multsq
    v_297 = (*qfn2(fn))(fn, v_298, v_297);
    }
    env = stack[-6];
    stack[-2] = v_297;
    goto v_272;
v_274:
v_272:
    goto v_14;
v_11:
    return onevalue(v_297);
}



// Code for dmconv0

static LispObject CC_dmconv0(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_18, v_19, v_20;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_20 = v_2;
// end of prologue
    v_18 = v_20;
    if (v_18 == nil) goto v_6;
    else goto v_7;
v_6:
    v_18 = basic_elt(env, 1); // !:rn!:
    goto v_5;
v_7:
    v_19 = v_20;
    v_18 = basic_elt(env, 2); // !:gi!:
    if (v_19 == v_18) goto v_10;
    else goto v_11;
v_10:
    v_18 = basic_elt(env, 3); // !:crn!:
    goto v_5;
v_11:
    v_18 = v_20;
    goto v_5;
    v_18 = nil;
v_5:
    setvalue(basic_elt(env, 4), v_18); // dmd!*
    return onevalue(v_18);
}



// Code for ra_zerop

static LispObject CC_ra_zerop(LispObject env,
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
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_8 = v_2;
// end of prologue
    {   LispObject fn = basic_elt(env, 1); // ra_f
    v_8 = (*qfn1(fn))(fn, v_8);
    }
    if (!car_legal(v_8)) v_8 = cdrerror(v_8); else
    v_8 = cdr(v_8);
    v_8 = (v_8 == nil ? lisp_true : nil);
    return onevalue(v_8);
}



// Code for refprint

static LispObject CC_refprint(LispObject env,
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
    real_push(nil, nil, nil, nil, nil);
    stack_popper stack_popper_var(6);
// copy arguments values to proper place
    stack[-3] = v_2;
// end of prologue
    v_70 = qvalue(basic_elt(env, 1)); // cloc!*
    if (v_70 == nil) goto v_11;
    v_70 = qvalue(basic_elt(env, 1)); // cloc!*
    if (!car_legal(v_70)) v_70 = carerror(v_70); else
    v_70 = car(v_70);
    goto v_9;
v_11:
    v_70 = basic_elt(env, 2); // "*TTYINPUT*"
    goto v_9;
    v_70 = nil;
v_9:
    stack[-4] = v_70;
    v_71 = stack[-4];
    v_70 = qvalue(basic_elt(env, 3)); // pfiles!*
    v_70 = Lassoc(nil, v_71, v_70);
    setvalue(basic_elt(env, 4), v_70); // curfun!*
    if (v_70 == nil) goto v_21;
    v_70 = qvalue(basic_elt(env, 4)); // curfun!*
    if (!car_legal(v_70)) v_70 = carerror(v_70); else
    v_70 = car(v_70);
    stack[-4] = v_70;
    v_70 = qvalue(basic_elt(env, 4)); // curfun!*
    if (!car_legal(v_70)) v_70 = cdrerror(v_70); else
    v_70 = cdr(v_70);
    setvalue(basic_elt(env, 4), v_70); // curfun!*
    goto v_19;
v_21:
    stack[0] = stack[-4];
    v_70 = basic_elt(env, 5); // g
    v_71 = Lgensym1(nil, v_70);
    env = stack[-5];
    setvalue(basic_elt(env, 4), v_71); // curfun!*
    v_70 = qvalue(basic_elt(env, 3)); // pfiles!*
    v_70 = acons(stack[0], v_71, v_70);
    env = stack[-5];
    setvalue(basic_elt(env, 3), v_70); // pfiles!*
    v_70 = stack[-4];
    v_70 = Lexplode(nil, v_70);
    env = stack[-5];
    if (!car_legal(v_70)) v_70 = cdrerror(v_70); else
    v_70 = cdr(v_70);
    v_70 = Lnreverse(nil, v_70);
    env = stack[-5];
    if (!car_legal(v_70)) v_70 = cdrerror(v_70); else
    v_70 = cdr(v_70);
    v_70 = Lnreverse(nil, v_70);
    env = stack[-5];
    stack[-2] = v_70;
    stack[-1] = qvalue(basic_elt(env, 4)); // curfun!*
    stack[0] = basic_elt(env, 6); // rccnam
    v_70 = stack[-2];
    v_71 = Llength(nil, v_70);
    env = stack[-5];
    v_70 = stack[-2];
    v_70 = cons(v_71, v_70);
    env = stack[-5];
    v_70 = Lputprop(nil, stack[-1], stack[0], v_70);
    env = stack[-5];
    goto v_19;
v_19:
    v_70 = qvalue(basic_elt(env, 1)); // cloc!*
    if (v_70 == nil) goto v_52;
    v_70 = qvalue(basic_elt(env, 1)); // cloc!*
    if (!car_legal(v_70)) v_70 = cdrerror(v_70); else
    v_70 = cdr(v_70);
    if (v_70 == nil) goto v_52;
    v_71 = stack[-4];
    v_70 = qvalue(basic_elt(env, 1)); // cloc!*
    if (!car_legal(v_70)) v_70 = cdrerror(v_70); else
    v_70 = cdr(v_70);
    v_70 = cons(v_71, v_70);
    env = stack[-5];
    goto v_50;
v_52:
    v_70 = nil;
    goto v_50;
    v_70 = nil;
v_50:
    setvalue(basic_elt(env, 7), v_70); // curlin!*
    v_70 = nil;
    setvalue(basic_elt(env, 8), v_70); // locls!*
    setvalue(basic_elt(env, 9), v_70); // globs!*
    setvalue(basic_elt(env, 10), v_70); // calls!*
    v_70 = stack[-3];
    {   LispObject fn = basic_elt(env, 11); // anform
    v_70 = (*qfn1(fn))(fn, v_70);
    }
    env = stack[-5];
    v_70 = qvalue(basic_elt(env, 4)); // curfun!*
    {   LispObject fn = basic_elt(env, 12); // outrefend
    v_70 = (*qfn1(fn))(fn, v_70);
    }
    v_70 = nil;
    return onevalue(v_70);
}



// Code for cl_f2ml

static LispObject CC_cl_f2ml(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_189, v_190, v_191;
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
    stack[0] = v_2;
// end of prologue
v_1:
    v_189 = stack[0];
    if (!consp(v_189)) goto v_10;
    else goto v_11;
v_10:
    v_189 = stack[0];
    goto v_9;
v_11:
    v_189 = stack[0];
    if (!car_legal(v_189)) v_189 = carerror(v_189); else
    v_189 = car(v_189);
    goto v_9;
    v_189 = nil;
v_9:
    v_191 = v_189;
    v_190 = stack[0];
    v_189 = basic_elt(env, 1); // true
    if (v_190 == v_189) goto v_24;
    else goto v_25;
v_24:
    v_189 = lisp_true;
    goto v_23;
v_25:
    v_190 = stack[0];
    v_189 = basic_elt(env, 2); // false
    v_189 = (v_190 == v_189 ? lisp_true : nil);
    goto v_23;
    v_189 = nil;
v_23:
    if (v_189 == nil) goto v_21;
    v_189 = nil;
    goto v_7;
v_21:
    v_190 = v_191;
    v_189 = basic_elt(env, 3); // or
    if (v_190 == v_189) goto v_49;
    else goto v_50;
v_49:
    v_189 = lisp_true;
    goto v_48;
v_50:
    v_190 = v_191;
    v_189 = basic_elt(env, 4); // and
    v_189 = (v_190 == v_189 ? lisp_true : nil);
    goto v_48;
    v_189 = nil;
v_48:
    if (v_189 == nil) goto v_46;
    v_189 = lisp_true;
    goto v_44;
v_46:
    v_190 = v_191;
    v_189 = basic_elt(env, 5); // not
    v_189 = (v_190 == v_189 ? lisp_true : nil);
    goto v_44;
    v_189 = nil;
v_44:
    if (v_189 == nil) goto v_42;
    v_189 = lisp_true;
    goto v_40;
v_42:
    v_190 = v_191;
    v_189 = basic_elt(env, 6); // impl
    if (v_190 == v_189) goto v_70;
    else goto v_71;
v_70:
    v_189 = lisp_true;
    goto v_69;
v_71:
    v_190 = v_191;
    v_189 = basic_elt(env, 7); // repl
    if (v_190 == v_189) goto v_79;
    else goto v_80;
v_79:
    v_189 = lisp_true;
    goto v_78;
v_80:
    v_190 = v_191;
    v_189 = basic_elt(env, 8); // equiv
    v_189 = (v_190 == v_189 ? lisp_true : nil);
    goto v_78;
    v_189 = nil;
v_78:
    goto v_69;
    v_189 = nil;
v_69:
    goto v_40;
    v_189 = nil;
v_40:
    if (v_189 == nil) goto v_38;
    v_189 = stack[0];
    if (!car_legal(v_189)) v_189 = cdrerror(v_189); else
    v_189 = cdr(v_189);
    stack[-4] = v_189;
    v_189 = stack[-4];
    if (v_189 == nil) goto v_100;
    else goto v_101;
v_100:
    v_189 = nil;
    v_190 = v_189;
    goto v_94;
v_101:
    v_189 = stack[-4];
    if (!car_legal(v_189)) v_189 = carerror(v_189); else
    v_189 = car(v_189);
    v_190 = v_189;
    v_189 = stack[-3];
    {   LispObject fn = basic_elt(env, 0); // cl_f2ml
    v_189 = (*qfn2(fn))(fn, v_190, v_189);
    }
    env = stack[-5];
    v_189 = ncons(v_189);
    env = stack[-5];
    stack[-1] = v_189;
    stack[-2] = v_189;
v_95:
    v_189 = stack[-4];
    if (!car_legal(v_189)) v_189 = cdrerror(v_189); else
    v_189 = cdr(v_189);
    stack[-4] = v_189;
    v_189 = stack[-4];
    if (v_189 == nil) goto v_115;
    else goto v_116;
v_115:
    v_189 = stack[-2];
    v_190 = v_189;
    goto v_94;
v_116:
    stack[0] = stack[-1];
    v_189 = stack[-4];
    if (!car_legal(v_189)) v_189 = carerror(v_189); else
    v_189 = car(v_189);
    v_190 = v_189;
    v_189 = stack[-3];
    {   LispObject fn = basic_elt(env, 0); // cl_f2ml
    v_189 = (*qfn2(fn))(fn, v_190, v_189);
    }
    env = stack[-5];
    v_189 = ncons(v_189);
    env = stack[-5];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_189);
    v_189 = stack[-1];
    if (!car_legal(v_189)) v_189 = cdrerror(v_189); else
    v_189 = cdr(v_189);
    stack[-1] = v_189;
    goto v_95;
v_94:
    v_189 = basic_elt(env, 9); // plus2
    {
        LispObject fn = basic_elt(env, 14); // lto_almerge
        return (*qfn2(fn))(fn, v_190, v_189);
    }
v_38:
    v_190 = v_191;
    v_189 = basic_elt(env, 10); // ex
    if (v_190 == v_189) goto v_137;
    else goto v_138;
v_137:
    v_189 = lisp_true;
    goto v_136;
v_138:
    v_190 = v_191;
    v_189 = basic_elt(env, 11); // all
    v_189 = (v_190 == v_189 ? lisp_true : nil);
    goto v_136;
    v_189 = nil;
v_136:
    if (v_189 == nil) goto v_134;
    v_189 = stack[0];
    if (!car_legal(v_189)) v_189 = cdrerror(v_189); else
    v_189 = cdr(v_189);
    if (!car_legal(v_189)) v_189 = cdrerror(v_189); else
    v_189 = cdr(v_189);
    if (!car_legal(v_189)) v_190 = carerror(v_189); else
    v_190 = car(v_189);
    v_189 = stack[-3];
    stack[0] = v_190;
    stack[-3] = v_189;
    goto v_1;
v_134:
    v_190 = v_191;
    v_189 = basic_elt(env, 12); // bex
    if (v_190 == v_189) goto v_159;
    else goto v_160;
v_159:
    v_189 = lisp_true;
    goto v_158;
v_160:
    v_190 = v_191;
    v_189 = basic_elt(env, 13); // ball
    v_189 = (v_190 == v_189 ? lisp_true : nil);
    goto v_158;
    v_189 = nil;
v_158:
    if (v_189 == nil) goto v_156;
    v_189 = stack[0];
    if (!car_legal(v_189)) v_189 = cdrerror(v_189); else
    v_189 = cdr(v_189);
    if (!car_legal(v_189)) v_189 = cdrerror(v_189); else
    v_189 = cdr(v_189);
    if (!car_legal(v_189)) v_190 = carerror(v_189); else
    v_190 = car(v_189);
    v_189 = stack[-3];
    {   LispObject fn = basic_elt(env, 0); // cl_f2ml
    stack[-1] = (*qfn2(fn))(fn, v_190, v_189);
    }
    env = stack[-5];
    v_189 = stack[0];
    if (!car_legal(v_189)) v_189 = cdrerror(v_189); else
    v_189 = cdr(v_189);
    if (!car_legal(v_189)) v_189 = cdrerror(v_189); else
    v_189 = cdr(v_189);
    if (!car_legal(v_189)) v_189 = cdrerror(v_189); else
    v_189 = cdr(v_189);
    if (!car_legal(v_189)) v_190 = carerror(v_189); else
    v_190 = car(v_189);
    v_189 = stack[-3];
    {   LispObject fn = basic_elt(env, 0); // cl_f2ml
    v_189 = (*qfn2(fn))(fn, v_190, v_189);
    }
    env = stack[-5];
    v_190 = list2(stack[-1], v_189);
    env = stack[-5];
    v_189 = basic_elt(env, 9); // plus2
    {
        LispObject fn = basic_elt(env, 14); // lto_almerge
        return (*qfn2(fn))(fn, v_190, v_189);
    }
v_156:
    stack[-1] = stack[-3];
    v_189 = stack[0];
    v_189 = ncons(v_189);
    env = stack[-5];
    {
        LispObject v_197 = stack[-1];
        LispObject fn = basic_elt(env, 15); // apply
        return (*qfn2(fn))(fn, v_197, v_189);
    }
v_7:
    return onevalue(v_189);
}



// Code for ofsf_at2ir

static LispObject CC_ofsf_at2ir(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_60, v_61, v_62;
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
    v_61 = v_2;
// end of prologue
    v_60 = v_61;
    if (!car_legal(v_60)) v_60 = carerror(v_60); else
    v_60 = car(v_60);
    stack[-4] = v_60;
    v_60 = v_61;
    if (!car_legal(v_60)) v_60 = cdrerror(v_60); else
    v_60 = cdr(v_60);
    if (!car_legal(v_60)) v_60 = carerror(v_60); else
    v_60 = car(v_60);
    stack[-2] = v_60;
    stack[0] = v_60;
v_18:
    v_60 = stack[0];
    if (!consp(v_60)) goto v_25;
    else goto v_26;
v_25:
    v_60 = lisp_true;
    goto v_24;
v_26:
    v_60 = stack[0];
    if (!car_legal(v_60)) v_60 = carerror(v_60); else
    v_60 = car(v_60);
    v_60 = (consp(v_60) ? nil : lisp_true);
    goto v_24;
    v_60 = nil;
v_24:
    if (v_60 == nil) goto v_22;
    goto v_17;
v_22:
    v_60 = stack[0];
    if (!car_legal(v_60)) v_60 = cdrerror(v_60); else
    v_60 = cdr(v_60);
    stack[0] = v_60;
    goto v_18;
v_17:
    stack[-1] = stack[-2];
    v_60 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // negf
    v_60 = (*qfn1(fn))(fn, v_60);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 2); // addf
    v_60 = (*qfn2(fn))(fn, stack[-1], v_60);
    }
    env = stack[-5];
    stack[-2] = v_60;
    v_60 = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // sfto_dcontentf
    v_60 = (*qfn1(fn))(fn, v_60);
    }
    env = stack[-5];
    stack[-1] = v_60;
    v_61 = stack[-2];
    v_60 = stack[-1];
    {   LispObject fn = basic_elt(env, 4); // quotf
    v_60 = (*qfn2(fn))(fn, v_61, v_60);
    }
    env = stack[-5];
    stack[-2] = v_60;
    v_61 = stack[0];
    v_60 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[0] = cons(v_61, v_60);
    env = stack[-5];
    v_61 = stack[-1];
    v_60 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_60 = cons(v_61, v_60);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 5); // quotsq
    v_60 = (*qfn2(fn))(fn, stack[0], v_60);
    }
    env = stack[-5];
    stack[0] = v_60;
    stack[-1] = stack[-2];
    v_62 = stack[-3];
    v_61 = stack[-4];
    v_60 = stack[0];
    v_61 = list2star(v_62, v_61, v_60);
    v_60 = nil;
    {
        LispObject v_68 = stack[-1];
        return list2star(v_68, v_61, v_60);
    }
    return onevalue(v_60);
}



// Code for expnd

static LispObject CC_expnd(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_36 = qvalue(basic_elt(env, 1)); // !*really_off_exp
    if (v_36 == nil) goto v_7;
    v_36 = stack[0];
    goto v_5;
v_7:
// Binding !*sub2
// FLUIDBIND: reloadenv=2 litvec-offset=2 saveloc=1
{   bind_fluid_stack bind_fluid_var(-2, 2, -1);
    setvalue(basic_elt(env, 2), nil); // !*sub2
    v_36 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // expnd1
    v_36 = (*qfn1(fn))(fn, v_36);
    }
    env = stack[-2];
    stack[0] = v_36;
    v_36 = qvalue(basic_elt(env, 2)); // !*sub2
    if (v_36 == nil) goto v_22;
    v_36 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // subs2f
    v_36 = (*qfn1(fn))(fn, v_36);
    }
    v_38 = v_36;
    if (!car_legal(v_36)) v_37 = cdrerror(v_36); else
    v_37 = cdr(v_36);
    v_36 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_37 == v_36) goto v_25;
    else goto v_22;
v_25:
    v_36 = v_38;
    if (!car_legal(v_36)) v_36 = carerror(v_36); else
    v_36 = car(v_36);
    goto v_20;
v_22:
    v_36 = stack[0];
    goto v_20;
    v_36 = nil;
v_20:
    ;}  // end of a binding scope
    goto v_5;
    v_36 = nil;
v_5:
    return onevalue(v_36);
}



// Code for groedeletip

static LispObject CC_groedeletip(LispObject env,
                         LispObject v_2, LispObject v_3)
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
v_10:
    v_59 = stack[0];
    if (v_59 == nil) goto v_13;
    v_60 = stack[-1];
    v_59 = stack[0];
    if (!car_legal(v_59)) v_59 = carerror(v_59); else
    v_59 = car(v_59);
    if (equal(v_60, v_59)) goto v_17;
    else goto v_13;
v_17:
    goto v_14;
v_13:
    goto v_9;
v_14:
    v_59 = stack[0];
    if (!car_legal(v_59)) v_59 = cdrerror(v_59); else
    v_59 = cdr(v_59);
    stack[0] = v_59;
    goto v_10;
v_9:
    v_59 = stack[0];
    if (v_59 == nil) goto v_26;
    else goto v_27;
v_26:
    v_59 = nil;
    goto v_7;
v_27:
    v_59 = stack[0];
    stack[-2] = v_59;
v_33:
    v_59 = stack[0];
    if (!car_legal(v_59)) v_59 = cdrerror(v_59); else
    v_59 = cdr(v_59);
    if (v_59 == nil) goto v_36;
    else goto v_37;
v_36:
    goto v_32;
v_37:
    v_60 = stack[-1];
    v_59 = stack[0];
    if (!car_legal(v_59)) v_59 = cdrerror(v_59); else
    v_59 = cdr(v_59);
    if (!car_legal(v_59)) v_59 = carerror(v_59); else
    v_59 = car(v_59);
    if (equal(v_60, v_59)) goto v_43;
    else goto v_44;
v_43:
    v_60 = stack[0];
    v_59 = stack[0];
    if (!car_legal(v_59)) v_59 = cdrerror(v_59); else
    v_59 = cdr(v_59);
    if (!car_legal(v_59)) v_59 = cdrerror(v_59); else
    v_59 = cdr(v_59);
    {   LispObject fn = basic_elt(env, 1); // setcdr
    v_59 = (*qfn2(fn))(fn, v_60, v_59);
    }
    env = stack[-3];
    goto v_42;
v_44:
    v_59 = stack[0];
    if (!car_legal(v_59)) v_59 = cdrerror(v_59); else
    v_59 = cdr(v_59);
    stack[0] = v_59;
    goto v_42;
v_42:
    goto v_33;
v_32:
    v_59 = stack[-2];
v_7:
    return onevalue(v_59);
}



// Code for insertparens

static LispObject CC_insertparens(LispObject env,
                         LispObject v_2)
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
    v_10 = v_2;
// end of prologue
    stack[-1] = basic_elt(env, 1); // !(
    stack[0] = v_10;
    v_10 = basic_elt(env, 2); // !)
    v_10 = ncons(v_10);
    env = stack[-2];
    v_10 = Lappend_2(nil, stack[0], v_10);
    {
        LispObject v_13 = stack[-1];
        return cons(v_13, v_10);
    }
}



// Code for can_be_proved

static LispObject CC_can_be_proved(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_25 = stack[-1];
    if (v_25 == nil) goto v_10;
    else goto v_11;
v_10:
    v_25 = lisp_true;
    goto v_6;
v_11:
    v_25 = stack[-1];
    if (!car_legal(v_25)) v_26 = carerror(v_25); else
    v_26 = car(v_25);
    v_25 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // can_be_p
    v_25 = (*qfn2(fn))(fn, v_26, v_25);
    }
    env = stack[-2];
    if (v_25 == nil) goto v_15;
    v_25 = stack[-1];
    if (!car_legal(v_25)) v_25 = cdrerror(v_25); else
    v_25 = cdr(v_25);
    stack[-1] = v_25;
    goto v_7;
v_15:
    v_25 = nil;
    goto v_6;
    v_25 = nil;
v_6:
    return onevalue(v_25);
}



// Code for log_assignment_list

static LispObject CC_log_assignment_list(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_25 = stack[0];
    if (!consp(v_25)) goto v_10;
    else goto v_11;
v_10:
    v_25 = nil;
    goto v_6;
v_11:
    v_26 = stack[-1];
    v_25 = stack[0];
    if (!car_legal(v_25)) v_25 = carerror(v_25); else
    v_25 = car(v_25);
    {   LispObject fn = basic_elt(env, 1); // log_assignment
    v_25 = (*qfn2(fn))(fn, v_26, v_25);
    }
    env = stack[-2];
    if (v_25 == nil) goto v_15;
    v_25 = lisp_true;
    goto v_6;
v_15:
    v_25 = stack[0];
    if (!car_legal(v_25)) v_25 = cdrerror(v_25); else
    v_25 = cdr(v_25);
    stack[0] = v_25;
    goto v_7;
    v_25 = nil;
v_6:
    return onevalue(v_25);
}



// Code for dv_cambhead

static LispObject CC_dv_cambhead(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
v_1:
    v_35 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // listp
    v_35 = (*qfn1(fn))(fn, v_35);
    }
    env = stack[-2];
    if (v_35 == nil) goto v_9;
    v_35 = stack[0];
    if (!car_legal(v_35)) stack[-1] = carerror(v_35); else
    stack[-1] = car(v_35);
    v_36 = basic_elt(env, 1); // expt
    v_35 = basic_elt(env, 2); // minus
    v_35 = list2(v_36, v_35);
    env = stack[-2];
    v_35 = Lmember(nil, stack[-1], v_35);
    if (v_35 == nil) goto v_15;
    v_35 = stack[0];
    if (!car_legal(v_35)) v_35 = cdrerror(v_35); else
    v_35 = cdr(v_35);
    if (!car_legal(v_35)) v_35 = carerror(v_35); else
    v_35 = car(v_35);
    stack[0] = v_35;
    goto v_1;
v_15:
    v_35 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // listp
    v_35 = (*qfn1(fn))(fn, v_35);
    }
    if (v_35 == nil) goto v_29;
    v_35 = stack[0];
    if (!car_legal(v_35)) v_35 = carerror(v_35); else
    v_35 = car(v_35);
    goto v_5;
v_29:
    goto v_7;
v_9:
v_7:
    v_35 = nil;
v_5:
    return onevalue(v_35);
}



// Code for mod_eval_uni_poly

static LispObject CC_mod_eval_uni_poly(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_77, v_78, v_79;
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
    v_77 = stack[-2];
    if (!consp(v_77)) goto v_7;
    else goto v_8;
v_7:
    v_77 = stack[-2];
    {
        LispObject fn = basic_elt(env, 2); // mod!#
        return (*qfn1(fn))(fn, v_77);
    }
v_8:
    v_77 = stack[-2];
    if (!car_legal(v_77)) v_77 = carerror(v_77); else
    v_77 = car(v_77);
    if (!car_legal(v_77)) v_77 = cdrerror(v_77); else
    v_77 = cdr(v_77);
    {   LispObject fn = basic_elt(env, 2); // mod!#
    v_77 = (*qfn1(fn))(fn, v_77);
    }
    env = stack[-4];
    v_79 = v_77;
    v_77 = stack[-2];
    if (!car_legal(v_77)) v_77 = carerror(v_77); else
    v_77 = car(v_77);
    if (!car_legal(v_77)) v_77 = carerror(v_77); else
    v_77 = car(v_77);
    if (!car_legal(v_77)) v_77 = cdrerror(v_77); else
    v_77 = cdr(v_77);
    v_78 = v_77;
    v_77 = stack[-2];
    if (!car_legal(v_77)) v_77 = cdrerror(v_77); else
    v_77 = cdr(v_77);
    stack[-2] = v_77;
v_30:
    v_77 = stack[-2];
    if (!consp(v_77)) goto v_33;
    else goto v_34;
v_33:
    goto v_29;
v_34:
    stack[-3] = v_79;
    stack[0] = stack[-1];
    v_77 = stack[-2];
    if (!car_legal(v_77)) v_77 = carerror(v_77); else
    v_77 = car(v_77);
    if (!car_legal(v_77)) v_77 = carerror(v_77); else
    v_77 = car(v_77);
    if (!car_legal(v_77)) v_77 = cdrerror(v_77); else
    v_77 = cdr(v_77);
    v_77 = difference2(v_78, v_77);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 3); // general!-modular!-expt
    v_77 = (*qfn2(fn))(fn, stack[0], v_77);
    }
    env = stack[-4];
    v_78 = times2(stack[-3], v_77);
    env = stack[-4];
    v_77 = qvalue(basic_elt(env, 1)); // current!-modulus
    stack[0] = Cremainder(v_78, v_77);
    env = stack[-4];
    v_77 = stack[-2];
    if (!car_legal(v_77)) v_77 = carerror(v_77); else
    v_77 = car(v_77);
    if (!car_legal(v_77)) v_77 = cdrerror(v_77); else
    v_77 = cdr(v_77);
    {   LispObject fn = basic_elt(env, 2); // mod!#
    v_77 = (*qfn1(fn))(fn, v_77);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 4); // general!-modular!-plus
    v_77 = (*qfn2(fn))(fn, stack[0], v_77);
    }
    env = stack[-4];
    v_79 = v_77;
    v_77 = stack[-2];
    if (!car_legal(v_77)) v_77 = carerror(v_77); else
    v_77 = car(v_77);
    if (!car_legal(v_77)) v_77 = carerror(v_77); else
    v_77 = car(v_77);
    if (!car_legal(v_77)) v_77 = cdrerror(v_77); else
    v_77 = cdr(v_77);
    v_78 = v_77;
    v_77 = stack[-2];
    if (!car_legal(v_77)) v_77 = cdrerror(v_77); else
    v_77 = cdr(v_77);
    stack[-2] = v_77;
    goto v_30;
v_29:
    stack[0] = v_79;
    v_77 = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // general!-modular!-expt
    v_77 = (*qfn2(fn))(fn, v_77, v_78);
    }
    env = stack[-4];
    v_78 = times2(stack[0], v_77);
    env = stack[-4];
    v_77 = qvalue(basic_elt(env, 1)); // current!-modulus
    v_77 = Cremainder(v_78, v_77);
    env = stack[-4];
    v_79 = v_77;
    v_77 = stack[-2];
    if (v_77 == nil) goto v_70;
    stack[0] = v_79;
    v_77 = stack[-2];
    {   LispObject fn = basic_elt(env, 2); // mod!#
    v_77 = (*qfn1(fn))(fn, v_77);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 4); // general!-modular!-plus
    v_77 = (*qfn2(fn))(fn, stack[0], v_77);
    }
    v_79 = v_77;
    goto v_68;
v_70:
v_68:
    v_77 = v_79;
    goto v_6;
    v_77 = nil;
v_6:
    return onevalue(v_77);
}



// Code for nonlnrsys

static LispObject CC_nonlnrsys(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
v_1:
    v_24 = stack[-1];
    if (v_24 == nil) goto v_7;
    else goto v_8;
v_7:
    v_24 = nil;
    goto v_6;
v_8:
    v_24 = stack[-1];
    if (!car_legal(v_24)) v_25 = carerror(v_24); else
    v_25 = car(v_24);
    v_24 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // nonlnr
    v_24 = (*qfn2(fn))(fn, v_25, v_24);
    }
    env = stack[-2];
    if (v_24 == nil) goto v_15;
    else goto v_14;
v_15:
    v_24 = stack[-1];
    if (!car_legal(v_24)) v_25 = cdrerror(v_24); else
    v_25 = cdr(v_24);
    v_24 = stack[0];
    stack[-1] = v_25;
    stack[0] = v_24;
    goto v_1;
v_14:
    goto v_6;
    v_24 = nil;
v_6:
    return onevalue(v_24);
}



// Code for lalr_make_arglist

static LispObject CC_lalr_make_arglist(LispObject env,
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
    real_push(nil, nil, nil, nil, nil);
    real_push(nil);
    stack_popper stack_popper_var(7);
// copy arguments values to proper place
    stack[-4] = v_2;
// end of prologue
    v_49 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-5] = v_49;
    v_50 = stack[-4];
    v_49 = stack[-5];
    v_49 = difference2(v_50, v_49);
    env = stack[-6];
    v_49 = Lminusp(nil, v_49);
    env = stack[-6];
    if (v_49 == nil) goto v_14;
    v_49 = nil;
    goto v_8;
v_14:
    stack[0] = basic_elt(env, 1); // !$
    v_49 = stack[-5];
    v_49 = Lexplodec(nil, v_49);
    env = stack[-6];
    v_49 = cons(stack[0], v_49);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 2); // list2string
    v_49 = (*qfn1(fn))(fn, v_49);
    }
    env = stack[-6];
    v_49 = Lintern(nil, v_49);
    env = stack[-6];
    v_49 = ncons(v_49);
    env = stack[-6];
    stack[-2] = v_49;
    stack[-3] = v_49;
v_9:
    v_49 = stack[-5];
    v_49 = add1(v_49);
    env = stack[-6];
    stack[-5] = v_49;
    v_50 = stack[-4];
    v_49 = stack[-5];
    v_49 = difference2(v_50, v_49);
    env = stack[-6];
    v_49 = Lminusp(nil, v_49);
    env = stack[-6];
    if (v_49 == nil) goto v_32;
    v_49 = stack[-3];
    goto v_8;
v_32:
    stack[-1] = stack[-2];
    stack[0] = basic_elt(env, 1); // !$
    v_49 = stack[-5];
    v_49 = Lexplodec(nil, v_49);
    env = stack[-6];
    v_49 = cons(stack[0], v_49);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 2); // list2string
    v_49 = (*qfn1(fn))(fn, v_49);
    }
    env = stack[-6];
    v_49 = Lintern(nil, v_49);
    env = stack[-6];
    v_49 = ncons(v_49);
    env = stack[-6];
    if (!car_legal(stack[-1])) rplacd_fails(stack[-1]);
    setcdr(stack[-1], v_49);
    v_49 = stack[-2];
    if (!car_legal(v_49)) v_49 = cdrerror(v_49); else
    v_49 = cdr(v_49);
    stack[-2] = v_49;
    goto v_9;
v_8:
    return onevalue(v_49);
}



// Code for rl_bettergaussp

static LispObject CC_rl_bettergaussp(LispObject env,
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
    stack[0] = qvalue(basic_elt(env, 1)); // rl_bettergaussp!*
    v_10 = list2(v_11, v_10);
    env = stack[-1];
    {
        LispObject v_13 = stack[0];
        LispObject fn = basic_elt(env, 2); // apply
        return (*qfn2(fn))(fn, v_13, v_10);
    }
}



// Code for texstrlen

static LispObject CC_texstrlen(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    v_49 = v_2;
// end of prologue
    v_50 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_51 = v_50;
    v_50 = nil;
    stack[0] = v_49;
v_14:
    v_49 = stack[0];
    if (v_49 == nil) goto v_18;
    else goto v_19;
v_18:
    goto v_13;
v_19:
    v_49 = stack[0];
    if (!car_legal(v_49)) v_49 = carerror(v_49); else
    v_49 = car(v_49);
    if (v_50 == nil) goto v_31;
    else goto v_32;
v_31:
    v_50 = v_49;
    v_49 = basic_elt(env, 1); // !!
    v_49 = (v_50 == v_49 ? lisp_true : nil);
    goto v_30;
v_32:
    v_49 = nil;
    goto v_30;
    v_49 = nil;
v_30:
    if (v_49 == nil) goto v_28;
    v_49 = lisp_true;
    v_50 = v_49;
    goto v_26;
v_28:
    v_49 = v_51;
    v_49 = add1(v_49);
    env = stack[-1];
    v_51 = v_49;
    v_49 = nil;
    v_50 = v_49;
    goto v_26;
v_26:
    v_49 = stack[0];
    if (!car_legal(v_49)) v_49 = cdrerror(v_49); else
    v_49 = cdr(v_49);
    stack[0] = v_49;
    goto v_14;
v_13:
    v_49 = v_51;
    return onevalue(v_49);
}



// Code for talp_list2vec

static LispObject CC_talp_list2vec(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[-1] = v_2;
// end of prologue
    v_36 = stack[-1];
    v_36 = Llength(nil, v_36);
    env = stack[-3];
    v_36 = sub1(v_36);
    env = stack[-3];
    v_36 = Lmkvect(nil, v_36);
    env = stack[-3];
    stack[-2] = v_36;
    v_36 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[0] = v_36;
v_14:
    v_36 = stack[-2];
    v_37 = Lupbv(nil, v_36);
    env = stack[-3];
    v_36 = stack[0];
    v_36 = difference2(v_37, v_36);
    env = stack[-3];
    v_36 = Lminusp(nil, v_36);
    env = stack[-3];
    if (v_36 == nil) goto v_19;
    goto v_13;
v_19:
    v_38 = stack[-2];
    v_37 = stack[0];
    v_36 = stack[-1];
    if (!car_legal(v_36)) v_36 = carerror(v_36); else
    v_36 = car(v_36);
    v_36 = Lputv(nil, v_38, v_37, v_36);
    env = stack[-3];
    v_36 = stack[-1];
    if (!car_legal(v_36)) v_36 = cdrerror(v_36); else
    v_36 = cdr(v_36);
    stack[-1] = v_36;
    v_36 = stack[0];
    v_36 = add1(v_36);
    env = stack[-3];
    stack[0] = v_36;
    goto v_14;
v_13:
    v_36 = stack[-2];
    return onevalue(v_36);
}



// Code for pasf_cein

static LispObject CC_pasf_cein(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_162, v_163;
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
    v_163 = stack[-3];
    v_162 = basic_elt(env, 1); // true
    if (v_163 == v_162) goto v_18;
    else goto v_19;
v_18:
    v_162 = lisp_true;
    goto v_17;
v_19:
    v_163 = stack[-3];
    v_162 = basic_elt(env, 2); // false
    v_162 = (v_163 == v_162 ? lisp_true : nil);
    goto v_17;
    v_162 = nil;
v_17:
    if (v_162 == nil) goto v_15;
    v_162 = lisp_true;
    goto v_13;
v_15:
    v_163 = stack[-3];
    v_162 = basic_elt(env, 1); // true
    if (v_163 == v_162) goto v_37;
    else goto v_38;
v_37:
    v_162 = lisp_true;
    goto v_36;
v_38:
    v_163 = stack[-3];
    v_162 = basic_elt(env, 2); // false
    v_162 = (v_163 == v_162 ? lisp_true : nil);
    goto v_36;
    v_162 = nil;
v_36:
    if (v_162 == nil) goto v_34;
    v_162 = stack[-3];
    v_163 = v_162;
    goto v_32;
v_34:
    v_162 = stack[-3];
    if (!car_legal(v_162)) v_162 = carerror(v_162); else
    v_162 = car(v_162);
    v_162 = Lconsp(nil, v_162);
    env = stack[-5];
    if (v_162 == nil) goto v_49;
    v_162 = stack[-3];
    if (!car_legal(v_162)) v_162 = carerror(v_162); else
    v_162 = car(v_162);
    if (!car_legal(v_162)) v_162 = carerror(v_162); else
    v_162 = car(v_162);
    v_163 = v_162;
    goto v_32;
v_49:
    v_162 = stack[-3];
    if (!car_legal(v_162)) v_162 = carerror(v_162); else
    v_162 = car(v_162);
    v_163 = v_162;
    goto v_32;
    v_163 = nil;
v_32:
    v_162 = basic_elt(env, 3); // (leq greaterp geq lessp)
    v_162 = Lmemq(nil, v_163, v_162);
    v_162 = (v_162 == nil ? lisp_true : nil);
    goto v_13;
    v_162 = nil;
v_13:
    if (v_162 == nil) goto v_11;
    v_162 = stack[-3];
    goto v_7;
v_11:
    v_162 = stack[-3];
    if (!car_legal(v_162)) v_162 = cdrerror(v_162); else
    v_162 = cdr(v_162);
    if (!car_legal(v_162)) v_162 = carerror(v_162); else
    v_162 = car(v_162);
    {   LispObject fn = basic_elt(env, 6); // pasf_deci
    v_162 = (*qfn1(fn))(fn, v_162);
    }
    env = stack[-5];
    stack[-2] = v_162;
    v_162 = stack[-2];
    if (!car_legal(v_162)) v_162 = carerror(v_162); else
    v_162 = car(v_162);
    {   LispObject fn = basic_elt(env, 7); // sfto_dcontentf
    v_162 = (*qfn1(fn))(fn, v_162);
    }
    env = stack[-5];
    stack[-4] = v_162;
    v_162 = stack[-3];
    if (!car_legal(v_162)) stack[-1] = carerror(v_162); else
    stack[-1] = car(v_162);
    v_162 = stack[-2];
    if (!car_legal(v_162)) stack[0] = carerror(v_162); else
    stack[0] = car(v_162);
    v_162 = stack[-4];
    {   LispObject fn = basic_elt(env, 8); // simp
    v_162 = (*qfn1(fn))(fn, v_162);
    }
    env = stack[-5];
    if (!car_legal(v_162)) v_162 = carerror(v_162); else
    v_162 = car(v_162);
    {   LispObject fn = basic_elt(env, 9); // quotfx
    stack[0] = (*qfn2(fn))(fn, stack[0], v_162);
    }
    env = stack[-5];
    v_163 = stack[-3];
    v_162 = basic_elt(env, 1); // true
    if (v_163 == v_162) goto v_91;
    else goto v_92;
v_91:
    v_162 = lisp_true;
    goto v_90;
v_92:
    v_163 = stack[-3];
    v_162 = basic_elt(env, 2); // false
    v_162 = (v_163 == v_162 ? lisp_true : nil);
    goto v_90;
    v_162 = nil;
v_90:
    if (v_162 == nil) goto v_88;
    v_162 = stack[-3];
    v_163 = v_162;
    goto v_86;
v_88:
    v_162 = stack[-3];
    if (!car_legal(v_162)) v_162 = carerror(v_162); else
    v_162 = car(v_162);
    v_162 = Lconsp(nil, v_162);
    env = stack[-5];
    if (v_162 == nil) goto v_103;
    v_162 = stack[-3];
    if (!car_legal(v_162)) v_162 = carerror(v_162); else
    v_162 = car(v_162);
    if (!car_legal(v_162)) v_162 = carerror(v_162); else
    v_162 = car(v_162);
    v_163 = v_162;
    goto v_86;
v_103:
    v_162 = stack[-3];
    if (!car_legal(v_162)) v_162 = carerror(v_162); else
    v_162 = car(v_162);
    v_163 = v_162;
    goto v_86;
    v_163 = nil;
v_86:
    v_162 = basic_elt(env, 4); // (leq greaterp)
    v_162 = Lmemq(nil, v_163, v_162);
    if (v_162 == nil) goto v_84;
    v_162 = stack[-2];
    if (!car_legal(v_162)) v_162 = cdrerror(v_162); else
    v_162 = cdr(v_162);
    v_163 = negate(v_162);
    env = stack[-5];
    v_162 = stack[-4];
    {   LispObject fn = basic_elt(env, 10); // pasf_floor
    v_162 = (*qfn2(fn))(fn, v_163, v_162);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 11); // negf
    v_162 = (*qfn1(fn))(fn, v_162);
    }
    env = stack[-5];
    goto v_82;
v_84:
    v_163 = stack[-3];
    v_162 = basic_elt(env, 1); // true
    if (v_163 == v_162) goto v_130;
    else goto v_131;
v_130:
    v_162 = lisp_true;
    goto v_129;
v_131:
    v_163 = stack[-3];
    v_162 = basic_elt(env, 2); // false
    v_162 = (v_163 == v_162 ? lisp_true : nil);
    goto v_129;
    v_162 = nil;
v_129:
    if (v_162 == nil) goto v_127;
    v_162 = stack[-3];
    v_163 = v_162;
    goto v_125;
v_127:
    v_162 = stack[-3];
    if (!car_legal(v_162)) v_162 = carerror(v_162); else
    v_162 = car(v_162);
    v_162 = Lconsp(nil, v_162);
    env = stack[-5];
    if (v_162 == nil) goto v_142;
    v_162 = stack[-3];
    if (!car_legal(v_162)) v_162 = carerror(v_162); else
    v_162 = car(v_162);
    if (!car_legal(v_162)) v_162 = carerror(v_162); else
    v_162 = car(v_162);
    v_163 = v_162;
    goto v_125;
v_142:
    v_162 = stack[-3];
    if (!car_legal(v_162)) v_162 = carerror(v_162); else
    v_162 = car(v_162);
    v_163 = v_162;
    goto v_125;
    v_163 = nil;
v_125:
    v_162 = basic_elt(env, 5); // (geq lessp)
    v_162 = Lmemq(nil, v_163, v_162);
    if (v_162 == nil) goto v_123;
    v_162 = stack[-2];
    if (!car_legal(v_162)) v_162 = cdrerror(v_162); else
    v_162 = cdr(v_162);
    v_163 = negate(v_162);
    env = stack[-5];
    v_162 = stack[-4];
    {   LispObject fn = basic_elt(env, 12); // pasf_ceil
    v_162 = (*qfn2(fn))(fn, v_163, v_162);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 11); // negf
    v_162 = (*qfn1(fn))(fn, v_162);
    }
    env = stack[-5];
    goto v_82;
v_123:
    v_162 = nil;
v_82:
    {   LispObject fn = basic_elt(env, 13); // addf
    v_163 = (*qfn2(fn))(fn, stack[0], v_162);
    }
    v_162 = nil;
    {
        LispObject v_169 = stack[-1];
        return list3(v_169, v_163, v_162);
    }
v_7:
    return onevalue(v_162);
}



// Code for unaryir

static LispObject CC_unaryir(LispObject env,
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
// Binding name
// FLUIDBIND: reloadenv=3 litvec-offset=1 saveloc=2
{   bind_fluid_stack bind_fluid_var(-3, 1, -2);
    setvalue(basic_elt(env, 1), nil); // name
    v_29 = qvalue(basic_elt(env, 2)); // atts
    v_28 = basic_elt(env, 1); // name
    {   LispObject fn = basic_elt(env, 4); // find
    v_28 = (*qfn2(fn))(fn, v_29, v_28);
    }
    env = stack[-3];
    v_28 = Lintern(nil, v_28);
    env = stack[-3];
    setvalue(basic_elt(env, 1), v_28); // name
    v_29 = qvalue(basic_elt(env, 2)); // atts
    v_28 = basic_elt(env, 3); // cd
    {   LispObject fn = basic_elt(env, 4); // find
    v_28 = (*qfn2(fn))(fn, v_29, v_28);
    }
    env = stack[-3];
    v_28 = Lintern(nil, v_28);
    env = stack[-3];
    v_29 = v_28;
    v_28 = stack[-1];
    if (equal(v_29, v_28)) goto v_21;
    v_28 = qvalue(basic_elt(env, 1)); // name
    {   LispObject fn = basic_elt(env, 5); // encodeir
    v_28 = (*qfn1(fn))(fn, v_28);
    }
    goto v_9;
v_21:
    v_28 = stack[0];
v_9:
    ;}  // end of a binding scope
    return onevalue(v_28);
}



// Code for ps!:evaluate!-next

static LispObject CC_psTevaluateKnext(LispObject env,
                         LispObject v_3, LispObject v_4)
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
    v_33 = v_3;
// end of prologue
// Binding ps
// FLUIDBIND: reloadenv=4 litvec-offset=1 saveloc=3
{   bind_fluid_stack bind_fluid_var(-4, 1, -3);
    setvalue(basic_elt(env, 1), v_33); // ps
    v_34 = qvalue(basic_elt(env, 1)); // ps
    v_33 = static_cast<LispObject>(96)+TAG_FIXNUM; // 6
    {   LispObject fn = basic_elt(env, 3); // ps!:getv
    v_33 = (*qfn2(fn))(fn, v_34, v_33);
    }
    env = stack[-4];
    if (!car_legal(v_33)) v_34 = carerror(v_33); else
    v_34 = car(v_33);
    v_33 = basic_elt(env, 2); // ps!:erule
    stack[0] = get(v_34, v_33);
    env = stack[-4];
    v_33 = qvalue(basic_elt(env, 1)); // ps
    {   LispObject fn = basic_elt(env, 4); // ps!:expression
    v_34 = (*qfn1(fn))(fn, v_33);
    }
    env = stack[-4];
    v_33 = stack[-2];
    v_33 = list2(v_34, v_33);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 5); // apply
    v_33 = (*qfn2(fn))(fn, stack[0], v_33);
    }
    env = stack[-4];
    stack[-1] = v_33;
    stack[0] = qvalue(basic_elt(env, 1)); // ps
    v_33 = stack[-1];
    {   LispObject fn = basic_elt(env, 6); // prepsqxx
    v_33 = (*qfn1(fn))(fn, v_33);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 7); // simp!*
    v_33 = (*qfn1(fn))(fn, v_33);
    }
    env = stack[-4];
    stack[-1] = v_33;
    {   LispObject fn = basic_elt(env, 8); // ps!:set!-term
    v_33 = (*qfn3(fn))(fn, stack[0], stack[-2], v_33);
    }
    v_33 = stack[-1];
    ;}  // end of a binding scope
    return onevalue(v_33);
}



// Code for vdpvevlcomp

static LispObject CC_vdpvevlcomp(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_16, v_17;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_16 = v_3;
    v_17 = v_2;
// end of prologue
    if (!car_legal(v_17)) v_17 = cdrerror(v_17); else
    v_17 = cdr(v_17);
    if (!car_legal(v_17)) v_17 = cdrerror(v_17); else
    v_17 = cdr(v_17);
    if (!car_legal(v_17)) v_17 = cdrerror(v_17); else
    v_17 = cdr(v_17);
    if (!car_legal(v_17)) v_17 = carerror(v_17); else
    v_17 = car(v_17);
    if (!car_legal(v_16)) v_16 = cdrerror(v_16); else
    v_16 = cdr(v_16);
    if (!car_legal(v_16)) v_16 = cdrerror(v_16); else
    v_16 = cdr(v_16);
    if (!car_legal(v_16)) v_16 = cdrerror(v_16); else
    v_16 = cdr(v_16);
    if (!car_legal(v_16)) v_16 = carerror(v_16); else
    v_16 = car(v_16);
    {
        LispObject fn = basic_elt(env, 1); // dipevlcomp
        return (*qfn2(fn))(fn, v_17, v_16);
    }
}



// Code for random

static LispObject CC_random(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_85, v_86;
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
    v_85 = stack[-3];
    if (is_number(v_85)) goto v_15;
    v_85 = lisp_true;
    goto v_13;
v_15:
    v_86 = stack[-3];
    v_85 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_85 = static_cast<LispObject>(lesseq2(v_86, v_85));
    v_85 = v_85 ? lisp_true : nil;
    env = stack[-5];
    goto v_13;
    v_85 = nil;
v_13:
    if (v_85 == nil) goto v_11;
    v_86 = stack[-3];
    v_85 = basic_elt(env, 1); // "positive number"
    {   LispObject fn = basic_elt(env, 4); // typerr
    v_85 = (*qfn2(fn))(fn, v_86, v_85);
    }
    env = stack[-5];
    goto v_9;
v_11:
v_9:
    v_85 = stack[-3];
    v_85 = Lfloatp(nil, v_85);
    env = stack[-5];
    if (v_85 == nil) goto v_29;
    {   LispObject fn = basic_elt(env, 5); // next!-random!-number
    v_85 = (*qfn0(fn))(fn);
    }
    env = stack[-5];
    v_86 = Lfloat(nil, v_85);
    env = stack[-5];
    v_85 = qvalue(basic_elt(env, 2)); // unidev_fac!*
    v_85 = times2(v_86, v_85);
    env = stack[-5];
    stack[-2] = v_85;
    {   LispObject fn = basic_elt(env, 5); // next!-random!-number
    v_85 = (*qfn0(fn))(fn);
    }
    env = stack[-5];
    v_86 = Lfloat(nil, v_85);
    env = stack[-5];
    v_85 = stack[-2];
    stack[0] = plus2(v_86, v_85);
    env = stack[-5];
    v_86 = qvalue(basic_elt(env, 2)); // unidev_fac!*
    v_85 = stack[-3];
    v_85 = times2(v_86, v_85);
    {
        LispObject v_92 = stack[0];
        return times2(v_92, v_85);
    }
v_29:
v_48:
    {   LispObject fn = basic_elt(env, 5); // next!-random!-number
    v_85 = (*qfn0(fn))(fn);
    }
    env = stack[-5];
    stack[-2] = v_85;
    v_85 = qvalue(basic_elt(env, 3)); // randommodulus!*
    stack[-4] = v_85;
v_53:
    v_86 = stack[-4];
    v_85 = stack[-3];
    v_85 = static_cast<LispObject>(lessp2(v_86, v_85));
    v_85 = v_85 ? lisp_true : nil;
    env = stack[-5];
    if (v_85 == nil) goto v_56;
    else goto v_57;
v_56:
    goto v_52;
v_57:
    v_86 = stack[-4];
    v_85 = qvalue(basic_elt(env, 3)); // randommodulus!*
    v_85 = times2(v_86, v_85);
    env = stack[-5];
    stack[-4] = v_85;
    v_86 = qvalue(basic_elt(env, 3)); // randommodulus!*
    v_85 = stack[-2];
    stack[0] = times2(v_86, v_85);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 5); // next!-random!-number
    v_85 = (*qfn0(fn))(fn);
    }
    env = stack[-5];
    v_85 = plus2(stack[0], v_85);
    env = stack[-5];
    stack[-2] = v_85;
    goto v_53;
v_52:
    stack[-1] = stack[-2];
    stack[0] = stack[-4];
    v_86 = stack[-4];
    v_85 = stack[-3];
    v_85 = Cremainder(v_86, v_85);
    env = stack[-5];
    v_85 = difference2(stack[0], v_85);
    env = stack[-5];
    v_85 = static_cast<LispObject>(lessp2(stack[-1], v_85));
    v_85 = v_85 ? lisp_true : nil;
    env = stack[-5];
    if (v_85 == nil) goto v_73;
    else goto v_74;
v_73:
    goto v_48;
v_74:
    v_86 = stack[-2];
    v_85 = stack[-3];
    return Cremainder(v_86, v_85);
    v_85 = nil;
    return onevalue(v_85);
}



// Code for getphystypecar

static LispObject CC_getphystypecar(LispObject env,
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
    if (!car_legal(v_15)) v_15 = carerror(v_15); else
    v_15 = car(v_15);
    {
        LispObject fn = basic_elt(env, 1); // getphystype
        return (*qfn1(fn))(fn, v_15);
    }
v_7:
    v_15 = nil;
    goto v_5;
    v_15 = nil;
v_5:
    return onevalue(v_15);
}



// Code for factorial

static LispObject CC_factorial(LispObject env,
                         LispObject v_2)
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
    v_30 = stack[-1];
    v_30 = integerp(v_30);
    if (v_30 == nil) goto v_10;
    else goto v_11;
v_10:
    v_30 = lisp_true;
    goto v_9;
v_11:
    v_31 = stack[-1];
    v_30 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_30 = static_cast<LispObject>(lessp2(v_31, v_30));
    v_30 = v_30 ? lisp_true : nil;
    env = stack[-3];
    goto v_9;
    v_30 = nil;
v_9:
    if (v_30 == nil) goto v_7;
    stack[-2] = basic_elt(env, 1); // arith
    stack[0] = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_31 = stack[-1];
    v_30 = basic_elt(env, 2); // "invalid factorial argument"
    v_30 = list2(v_31, v_30);
    env = stack[-3];
    {
        LispObject v_35 = stack[-2];
        LispObject v_36 = stack[0];
        LispObject fn = basic_elt(env, 3); // rerror
        return (*qfn3(fn))(fn, v_35, v_36, v_30);
    }
v_7:
    v_30 = stack[-1];
    {
        LispObject fn = basic_elt(env, 4); // nfactorial
        return (*qfn1(fn))(fn, v_30);
    }
    v_30 = nil;
    return onevalue(v_30);
}



// Code for random!-teeny!-prime

static LispObject CC_randomKteenyKprime(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_44 = stack[0];
    v_43 = basic_elt(env, 1); // all
    if (v_44 == v_43) goto v_10;
    else goto v_11;
v_10:
    v_43 = lisp_true;
    goto v_9;
v_11:
    v_43 = stack[0];
    v_44 = Llength(nil, v_43);
    env = stack[-2];
    v_43 = static_cast<LispObject>(160)+TAG_FIXNUM; // 10
    v_43 = (v_44 == v_43 ? lisp_true : nil);
    goto v_9;
    v_43 = nil;
v_9:
    if (v_43 == nil) goto v_7;
    v_43 = nil;
    goto v_5;
v_7:
v_29:
    stack[-1] = qvalue(basic_elt(env, 2)); // teeny!-primes
    {   LispObject fn = basic_elt(env, 3); // next!-random!-number
    v_44 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
    v_43 = static_cast<LispObject>(160)+TAG_FIXNUM; // 10
    v_43 = Cremainder(v_44, v_43);
    env = stack[-2];
    v_43 = Lgetv(nil, stack[-1], v_43);
    env = stack[-2];
    v_45 = v_43;
    v_44 = v_45;
    v_43 = stack[0];
    v_43 = Lmember(nil, v_44, v_43);
    if (v_43 == nil) goto v_38;
    goto v_29;
v_38:
    v_43 = v_45;
    goto v_5;
    v_43 = nil;
v_5:
    return onevalue(v_43);
}



// Code for sfto_dgcd

static LispObject CC_sfto_dgcd(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_3;
    v_22 = v_2;
// end of prologue
    {   LispObject fn = basic_elt(env, 1); // sfto_dcontentf
    v_22 = (*qfn1(fn))(fn, v_22);
    }
    env = stack[-2];
    stack[-1] = v_22;
    v_23 = stack[-1];
    v_22 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_22 = Leqn_2(nil, v_23, v_22);
    env = stack[-2];
    if (v_22 == nil) goto v_13;
    v_22 = stack[-1];
    goto v_7;
v_13:
    v_22 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // sfto_dcontentf
    v_22 = (*qfn1(fn))(fn, v_22);
    }
    env = stack[-2];
    {
        LispObject v_26 = stack[-1];
        LispObject fn = basic_elt(env, 2); // sfto_gcdf
        return (*qfn2(fn))(fn, v_26, v_22);
    }
v_7:
    return onevalue(v_22);
}



// Code for outrefend

static LispObject CC_outrefend(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_172, v_173, v_174;
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
    v_172 = qvalue(basic_elt(env, 1)); // calls!*
    v_173 = v_172;
    v_172 = v_173;
    if (v_172 == nil) goto v_9;
    stack[-1] = stack[-2];
    stack[0] = basic_elt(env, 2); // calls
    v_172 = qvalue(basic_elt(env, 3)); // toplv!*
    if (v_172 == nil) goto v_17;
    v_174 = v_173;
    v_173 = stack[-2];
    v_172 = basic_elt(env, 2); // calls
    v_172 = get(v_173, v_172);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 20); // union
    v_172 = (*qfn2(fn))(fn, v_174, v_172);
    }
    env = stack[-4];
    goto v_15;
v_17:
    v_172 = v_173;
    goto v_15;
    v_172 = nil;
v_15:
    v_172 = Lputprop(nil, stack[-1], stack[0], v_172);
    env = stack[-4];
    goto v_7;
v_9:
v_7:
    v_172 = qvalue(basic_elt(env, 1)); // calls!*
    stack[-1] = v_172;
v_30:
    v_172 = stack[-1];
    if (v_172 == nil) goto v_34;
    else goto v_35;
v_34:
    goto v_29;
v_35:
    v_172 = stack[-1];
    if (!car_legal(v_172)) v_172 = carerror(v_172); else
    v_172 = car(v_172);
    stack[0] = v_172;
    v_172 = stack[0];
    v_173 = ncons(v_172);
    env = stack[-4];
    v_172 = basic_elt(env, 4); // cinthis
    v_172 = Lremflag(nil, v_173, v_172);
    env = stack[-4];
    v_173 = stack[0];
    v_172 = stack[-2];
    if (v_173 == v_172) goto v_48;
    v_173 = stack[0];
    v_172 = basic_elt(env, 5); // seen
    v_172 = Lflagp(nil, v_173, v_172);
    env = stack[-4];
    if (v_172 == nil) goto v_53;
    else goto v_54;
v_53:
    v_172 = stack[0];
    v_173 = ncons(v_172);
    env = stack[-4];
    v_172 = basic_elt(env, 5); // seen
    v_172 = Lflag(nil, v_173, v_172);
    env = stack[-4];
    v_173 = stack[0];
    v_172 = qvalue(basic_elt(env, 6)); // seen!*
    v_172 = cons(v_173, v_172);
    env = stack[-4];
    setvalue(basic_elt(env, 6), v_172); // seen!*
    goto v_52;
v_54:
v_52:
    v_174 = stack[0];
    v_173 = basic_elt(env, 7); // calledby
    v_172 = stack[-2];
    {   LispObject fn = basic_elt(env, 21); // traput
    v_172 = (*qfn3(fn))(fn, v_174, v_173, v_172);
    }
    env = stack[-4];
    goto v_46;
v_48:
v_46:
    v_172 = stack[-1];
    if (!car_legal(v_172)) v_172 = cdrerror(v_172); else
    v_172 = cdr(v_172);
    stack[-1] = v_172;
    goto v_30;
v_29:
    v_172 = qvalue(basic_elt(env, 8)); // globs!*
    v_173 = v_172;
    v_172 = v_173;
    if (v_172 == nil) goto v_76;
    stack[-1] = stack[-2];
    stack[0] = basic_elt(env, 9); // globs
    v_172 = qvalue(basic_elt(env, 3)); // toplv!*
    if (v_172 == nil) goto v_84;
    v_174 = v_173;
    v_173 = stack[-2];
    v_172 = basic_elt(env, 9); // globs
    v_172 = get(v_173, v_172);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 20); // union
    v_172 = (*qfn2(fn))(fn, v_174, v_172);
    }
    env = stack[-4];
    goto v_82;
v_84:
    v_172 = v_173;
    goto v_82;
    v_172 = nil;
v_82:
    v_172 = Lputprop(nil, stack[-1], stack[0], v_172);
    env = stack[-4];
    goto v_74;
v_76:
v_74:
    v_172 = qvalue(basic_elt(env, 8)); // globs!*
    stack[-3] = v_172;
v_97:
    v_172 = stack[-3];
    if (v_172 == nil) goto v_101;
    else goto v_102;
v_101:
    v_172 = nil;
    goto v_96;
v_102:
    v_172 = stack[-3];
    if (!car_legal(v_172)) v_172 = carerror(v_172); else
    v_172 = car(v_172);
    stack[-1] = v_172;
    stack[0] = stack[-1];
    v_173 = stack[-1];
    v_172 = basic_elt(env, 10); // dclglb
    v_172 = Lflagp(nil, v_173, v_172);
    env = stack[-4];
    if (v_172 == nil) goto v_113;
    v_172 = basic_elt(env, 11); // usedby
    v_173 = v_172;
    goto v_111;
v_113:
    v_173 = stack[-1];
    v_172 = basic_elt(env, 12); // gseen
    v_172 = Lflagp(nil, v_173, v_172);
    env = stack[-4];
    if (v_172 == nil) goto v_122;
    else goto v_123;
v_122:
    v_173 = stack[-1];
    v_172 = qvalue(basic_elt(env, 13)); // gseen!*
    v_172 = cons(v_173, v_172);
    env = stack[-4];
    setvalue(basic_elt(env, 13), v_172); // gseen!*
    v_172 = stack[-1];
    v_173 = ncons(v_172);
    env = stack[-4];
    v_172 = basic_elt(env, 12); // gseen
    v_172 = Lflag(nil, v_173, v_172);
    env = stack[-4];
    goto v_121;
v_123:
v_121:
    v_172 = basic_elt(env, 14); // usedunby
    v_173 = v_172;
    goto v_111;
    v_173 = nil;
v_111:
    v_172 = stack[-2];
    {   LispObject fn = basic_elt(env, 21); // traput
    v_172 = (*qfn3(fn))(fn, stack[0], v_173, v_172);
    }
    env = stack[-4];
    v_172 = stack[-1];
    v_173 = ncons(v_172);
    env = stack[-4];
    v_172 = basic_elt(env, 15); // glb2rf
    v_172 = Lremflag(nil, v_173, v_172);
    env = stack[-4];
    v_173 = stack[-1];
    v_172 = basic_elt(env, 16); // glb2bd
    v_172 = Lflagp(nil, v_173, v_172);
    env = stack[-4];
    if (v_172 == nil) goto v_143;
    v_172 = stack[-1];
    v_173 = ncons(v_172);
    env = stack[-4];
    v_172 = basic_elt(env, 16); // glb2bd
    v_172 = Lremflag(nil, v_173, v_172);
    env = stack[-4];
    v_174 = stack[-1];
    v_173 = basic_elt(env, 17); // boundby
    v_172 = stack[-2];
    {   LispObject fn = basic_elt(env, 21); // traput
    v_172 = (*qfn3(fn))(fn, v_174, v_173, v_172);
    }
    env = stack[-4];
    goto v_141;
v_143:
v_141:
    v_173 = stack[-1];
    v_172 = basic_elt(env, 18); // glb2st
    v_172 = Lflagp(nil, v_173, v_172);
    env = stack[-4];
    if (v_172 == nil) goto v_158;
    v_172 = stack[-1];
    v_173 = ncons(v_172);
    env = stack[-4];
    v_172 = basic_elt(env, 18); // glb2st
    v_172 = Lremflag(nil, v_173, v_172);
    env = stack[-4];
    v_174 = stack[-1];
    v_173 = basic_elt(env, 19); // setby
    v_172 = stack[-2];
    {   LispObject fn = basic_elt(env, 21); // traput
    v_172 = (*qfn3(fn))(fn, v_174, v_173, v_172);
    }
    env = stack[-4];
    goto v_156;
v_158:
v_156:
    v_172 = stack[-3];
    if (!car_legal(v_172)) v_172 = cdrerror(v_172); else
    v_172 = cdr(v_172);
    stack[-3] = v_172;
    goto v_97;
v_96:
    return onevalue(v_172);
}



// Code for simpcv

static LispObject CC_simpcv(LispObject env,
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
    v_36 = Llength(nil, v_35);
    env = stack[-1];
    v_35 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    if (v_36 == v_35) goto v_7;
    v_36 = basic_elt(env, 1); // "Invalid number of edges in vertex"
    v_35 = stack[0];
    v_35 = list2(v_36, v_35);
    env = stack[-1];
    {
        LispObject fn = basic_elt(env, 4); // cerror
        return (*qfn1(fn))(fn, v_35);
    }
v_7:
    v_36 = basic_elt(env, 2); // simpcgraph
    v_35 = qvalue(basic_elt(env, 3)); // mul!*
    v_35 = Lmemq(nil, v_36, v_35);
    if (v_35 == nil) goto v_19;
    else goto v_20;
v_19:
    v_36 = qvalue(basic_elt(env, 3)); // mul!*
    v_35 = basic_elt(env, 2); // simpcgraph
    {   LispObject fn = basic_elt(env, 5); // aconc!*
    v_35 = (*qfn2(fn))(fn, v_36, v_35);
    }
    env = stack[-1];
    setvalue(basic_elt(env, 3), v_35); // mul!*
    goto v_18;
v_20:
v_18:
    v_36 = stack[0];
    v_35 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 6); // to
    v_36 = (*qfn2(fn))(fn, v_36, v_35);
    }
    env = stack[-1];
    v_35 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_35 = cons(v_36, v_35);
    env = stack[-1];
    v_36 = ncons(v_35);
    v_35 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_36, v_35);
    v_35 = nil;
    return onevalue(v_35);
}



// Code for smemberlp

static LispObject CC_smemberlp(LispObject env,
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
    if (v_30 == nil) goto v_7;
    else goto v_8;
v_7:
    v_30 = nil;
    goto v_6;
v_8:
    v_30 = stack[0];
    if (!consp(v_30)) goto v_11;
    else goto v_12;
v_11:
    v_31 = stack[0];
    v_30 = stack[-1];
    v_30 = Lmember(nil, v_31, v_30);
    goto v_6;
v_12:
    v_31 = stack[-1];
    v_30 = stack[0];
    if (!car_legal(v_30)) v_30 = carerror(v_30); else
    v_30 = car(v_30);
    {   LispObject fn = basic_elt(env, 0); // smemberlp
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



// Code for offexpchk

static LispObject CC_offexpchk(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_32;
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
    v_32 = qvalue(basic_elt(env, 1)); // !*really_off_exp
    if (v_32 == nil) goto v_8;
    else goto v_6;
v_8:
    v_32 = qvalue(basic_elt(env, 2)); // frlis!*
    if (v_32 == nil) goto v_11;
    v_32 = stack[0];
    if (!car_legal(v_32)) v_32 = carerror(v_32); else
    v_32 = car(v_32);
    {   LispObject fn = basic_elt(env, 3); // freevarinexptchk
    v_32 = (*qfn1(fn))(fn, v_32);
    }
    env = stack[-2];
    if (v_32 == nil) goto v_11;
    goto v_6;
v_11:
    v_32 = stack[0];
    if (!car_legal(v_32)) v_32 = cdrerror(v_32); else
    v_32 = cdr(v_32);
    {   LispObject fn = basic_elt(env, 3); // freevarinexptchk
    v_32 = (*qfn1(fn))(fn, v_32);
    }
    env = stack[-2];
    if (v_32 == nil) goto v_18;
    else goto v_6;
v_18:
    goto v_7;
v_6:
    v_32 = stack[0];
    goto v_5;
v_7:
    v_32 = stack[0];
    if (!car_legal(v_32)) v_32 = carerror(v_32); else
    v_32 = car(v_32);
    {   LispObject fn = basic_elt(env, 4); // mkprod
    stack[-1] = (*qfn1(fn))(fn, v_32);
    }
    env = stack[-2];
    v_32 = stack[0];
    if (!car_legal(v_32)) v_32 = cdrerror(v_32); else
    v_32 = cdr(v_32);
    {   LispObject fn = basic_elt(env, 4); // mkprod
    v_32 = (*qfn1(fn))(fn, v_32);
    }
    env = stack[-2];
    {
        LispObject v_35 = stack[-1];
        LispObject fn = basic_elt(env, 5); // canprod
        return (*qfn2(fn))(fn, v_35, v_32);
    }
    v_32 = nil;
v_5:
    return onevalue(v_32);
}



// Code for formc!*

static LispObject CC_formcH(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_16, v_17, v_18, v_19;
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
    v_17 = v_4;
    v_18 = v_3;
    v_19 = v_2;
// end of prologue
// Binding !*!*a2sfn
// FLUIDBIND: reloadenv=1 litvec-offset=1 saveloc=0
{   bind_fluid_stack bind_fluid_var(-1, 1, 0);
    setvalue(basic_elt(env, 1), nil); // !*!*a2sfn
    v_16 = basic_elt(env, 2); // revalx
    setvalue(basic_elt(env, 1), v_16); // !*!*a2sfn
    v_16 = v_19;
    {   LispObject fn = basic_elt(env, 3); // formc
    v_16 = (*qfn3(fn))(fn, v_16, v_18, v_17);
    }
    ;}  // end of a binding scope
    return onevalue(v_16);
}



// Code for physopordchk!*

static LispObject CC_physopordchkH(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_110, v_111;
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
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
v_1:
    v_110 = stack[-1];
    if (!car_legal(v_110)) v_110 = carerror(v_110); else
    v_110 = car(v_110);
    stack[-4] = v_110;
    v_110 = stack[-1];
    if (!car_legal(v_110)) v_110 = cdrerror(v_110); else
    v_110 = cdr(v_110);
    stack[-1] = v_110;
    v_110 = stack[-1];
    if (v_110 == nil) goto v_16;
    else goto v_17;
v_16:
    v_110 = stack[0];
    if (!car_legal(v_110)) v_110 = cdrerror(v_110); else
    v_110 = cdr(v_110);
    if (v_110 == nil) goto v_21;
    else goto v_22;
v_21:
    v_111 = stack[-4];
    v_110 = stack[0];
    if (!car_legal(v_110)) v_110 = carerror(v_110); else
    v_110 = car(v_110);
    {   LispObject fn = basic_elt(env, 1); // ncmpchk
    v_110 = (*qfn2(fn))(fn, v_111, v_110);
    }
    env = stack[-5];
    if (v_110 == nil) goto v_27;
    else goto v_28;
v_27:
    v_110 = nil;
    goto v_26;
v_28:
    v_110 = stack[-4];
    {   LispObject fn = basic_elt(env, 2); // invp
    v_111 = (*qfn1(fn))(fn, v_110);
    }
    v_110 = stack[0];
    if (!car_legal(v_110)) v_110 = carerror(v_110); else
    v_110 = car(v_110);
    v_110 = (equal(v_111, v_110) ? lisp_true : nil);
    v_110 = (v_110 == nil ? lisp_true : nil);
    goto v_26;
    v_110 = nil;
v_26:
    goto v_9;
v_22:
    v_110 = stack[0];
    stack[-3] = v_110;
    v_110 = stack[-3];
    if (v_110 == nil) goto v_53;
    else goto v_54;
v_53:
    v_110 = nil;
    goto v_48;
v_54:
    v_110 = stack[-3];
    if (!car_legal(v_110)) v_110 = carerror(v_110); else
    v_110 = car(v_110);
    v_111 = stack[-4];
    {   LispObject fn = basic_elt(env, 1); // ncmpchk
    v_110 = (*qfn2(fn))(fn, v_111, v_110);
    }
    env = stack[-5];
    v_110 = ncons(v_110);
    env = stack[-5];
    stack[-1] = v_110;
    stack[-2] = v_110;
v_49:
    v_110 = stack[-3];
    if (!car_legal(v_110)) v_110 = cdrerror(v_110); else
    v_110 = cdr(v_110);
    stack[-3] = v_110;
    v_110 = stack[-3];
    if (v_110 == nil) goto v_68;
    else goto v_69;
v_68:
    v_110 = stack[-2];
    goto v_48;
v_69:
    stack[0] = stack[-1];
    v_110 = stack[-3];
    if (!car_legal(v_110)) v_110 = carerror(v_110); else
    v_110 = car(v_110);
    v_111 = stack[-4];
    {   LispObject fn = basic_elt(env, 1); // ncmpchk
    v_110 = (*qfn2(fn))(fn, v_111, v_110);
    }
    env = stack[-5];
    v_110 = ncons(v_110);
    env = stack[-5];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_110);
    v_110 = stack[-1];
    if (!car_legal(v_110)) v_110 = cdrerror(v_110); else
    v_110 = cdr(v_110);
    stack[-1] = v_110;
    goto v_49;
v_48:
    v_111 = nil;
    v_110 = Lmember(nil, v_111, v_110);
    if (v_110 == nil) goto v_86;
    v_110 = nil;
    goto v_9;
v_86:
    v_110 = lisp_true;
    goto v_9;
    goto v_20;
v_20:
    goto v_15;
v_17:
    v_110 = stack[-4];
    v_111 = ncons(v_110);
    env = stack[-5];
    v_110 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // physopordchk!*
    v_110 = (*qfn2(fn))(fn, v_111, v_110);
    }
    env = stack[-5];
    if (v_110 == nil) goto v_98;
    else goto v_99;
v_98:
    v_110 = nil;
    goto v_97;
v_99:
    v_111 = stack[-1];
    v_110 = stack[0];
    stack[-1] = v_111;
    stack[0] = v_110;
    goto v_1;
    v_110 = nil;
v_97:
    goto v_9;
v_15:
    v_110 = nil;
v_9:
    return onevalue(v_110);
}



// Code for red_topredbe

static LispObject CC_red_topredbe(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_62 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // bas_dpoly
    v_62 = (*qfn1(fn))(fn, v_62);
    }
    env = stack[-4];
    if (v_62 == nil) goto v_11;
    else goto v_12;
v_11:
    v_62 = lisp_true;
    goto v_10;
v_12:
    v_62 = stack[-2];
    v_62 = (v_62 == nil ? lisp_true : nil);
    goto v_10;
    v_62 = nil;
v_10:
    if (v_62 == nil) goto v_8;
    v_62 = stack[-1];
    goto v_6;
v_8:
    {   LispObject fn = basic_elt(env, 3); // cali_trace
    v_63 = (*qfn0(fn))(fn);
    }
    env = stack[-4];
    v_62 = static_cast<LispObject>(1264)+TAG_FIXNUM; // 79
    v_62 = static_cast<LispObject>(greaterp2(v_63, v_62));
    v_62 = v_62 ? lisp_true : nil;
    env = stack[-4];
    if (v_62 == nil) goto v_30;
    v_62 = basic_elt(env, 1); // " reduce "
    v_62 = Lprinc(nil, v_62);
    env = stack[-4];
    v_62 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // bas_dpoly
    v_62 = (*qfn1(fn))(fn, v_62);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 4); // dp_print
    v_62 = (*qfn1(fn))(fn, v_62);
    }
    env = stack[-4];
    goto v_28;
v_30:
v_28:
v_42:
    v_62 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // bas_dpoly
    v_62 = (*qfn1(fn))(fn, v_62);
    }
    env = stack[-4];
    v_63 = v_62;
    if (v_62 == nil) goto v_45;
    stack[-3] = stack[-2];
    v_62 = v_63;
    {   LispObject fn = basic_elt(env, 5); // dp_lmon
    stack[0] = (*qfn1(fn))(fn, v_62);
    }
    env = stack[-4];
    v_62 = stack[-1];
    {   LispObject fn = basic_elt(env, 6); // bas_dpecart
    v_62 = (*qfn1(fn))(fn, v_62);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 7); // red_divtestbe
    v_63 = (*qfn3(fn))(fn, stack[-3], stack[0], v_62);
    }
    env = stack[-4];
    v_62 = v_63;
    if (v_63 == nil) goto v_45;
    goto v_46;
v_45:
    goto v_41;
v_46:
    v_63 = stack[-1];
    {   LispObject fn = basic_elt(env, 8); // red_subst
    v_62 = (*qfn2(fn))(fn, v_63, v_62);
    }
    env = stack[-4];
    stack[-1] = v_62;
    goto v_42;
v_41:
    v_62 = stack[-1];
    goto v_6;
    v_62 = nil;
v_6:
    return onevalue(v_62);
}



// Code for trailing!.coefft

static LispObject CC_trailingQcoefft(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_36, v_37, v_38, v_39;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_37 = v_3;
    v_38 = v_2;
// end of prologue
v_7:
    v_36 = v_38;
    if (!consp(v_36)) goto v_14;
    else goto v_15;
v_14:
    v_36 = lisp_true;
    goto v_13;
v_15:
    v_36 = v_38;
    if (!car_legal(v_36)) v_36 = carerror(v_36); else
    v_36 = car(v_36);
    v_36 = (consp(v_36) ? nil : lisp_true);
    goto v_13;
    v_36 = nil;
v_13:
    if (v_36 == nil) goto v_11;
    v_36 = v_38;
    goto v_6;
v_11:
    v_36 = v_38;
    if (!car_legal(v_36)) v_36 = carerror(v_36); else
    v_36 = car(v_36);
    if (!car_legal(v_36)) v_36 = carerror(v_36); else
    v_36 = car(v_36);
    if (!car_legal(v_36)) v_39 = carerror(v_36); else
    v_39 = car(v_36);
    v_36 = v_37;
    if (equal(v_39, v_36)) goto v_24;
    else goto v_25;
v_24:
    v_36 = v_38;
    if (!car_legal(v_36)) v_36 = cdrerror(v_36); else
    v_36 = cdr(v_36);
    v_38 = v_36;
    goto v_7;
v_25:
    v_36 = v_38;
    goto v_6;
    v_36 = nil;
v_6:
    return onevalue(v_36);
}



// Code for gf2cr!:

static LispObject CC_gf2crT(LispObject env,
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
    stack[-2] = basic_elt(env, 1); // !:cr!:
    v_12 = stack[-1];
    if (!car_legal(v_12)) v_12 = carerror(v_12); else
    v_12 = car(v_12);
    {   LispObject fn = basic_elt(env, 2); // striptag
    stack[0] = (*qfn1(fn))(fn, v_12);
    }
    env = stack[-3];
    v_12 = stack[-1];
    if (!car_legal(v_12)) v_12 = cdrerror(v_12); else
    v_12 = cdr(v_12);
    {   LispObject fn = basic_elt(env, 2); // striptag
    v_12 = (*qfn1(fn))(fn, v_12);
    }
    {
        LispObject v_16 = stack[-2];
        LispObject v_17 = stack[0];
        return list2star(v_16, v_17, v_12);
    }
}



// Code for extmult

static LispObject CC_extmult(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_107, v_108, v_109;
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
v_11:
    v_107 = stack[-4];
    if (v_107 == nil) goto v_19;
    else goto v_20;
v_19:
    v_107 = lisp_true;
    goto v_18;
v_20:
    v_107 = stack[-3];
    v_107 = (v_107 == nil ? lisp_true : nil);
    goto v_18;
    v_107 = nil;
v_18:
    if (v_107 == nil) goto v_16;
    v_107 = nil;
    stack[0] = v_107;
    goto v_12;
v_16:
    v_109 = stack[-4];
    v_108 = stack[-3];
    v_107 = stack[-5];
    v_107 = acons(v_109, v_108, v_107);
    env = stack[-6];
    stack[-5] = v_107;
    v_107 = stack[-4];
    if (!car_legal(v_107)) v_107 = cdrerror(v_107); else
    v_107 = cdr(v_107);
    if (v_107 == nil) goto v_35;
    v_107 = stack[-4];
    if (!car_legal(v_107)) v_107 = carerror(v_107); else
    v_107 = car(v_107);
    v_107 = ncons(v_107);
    env = stack[-6];
    stack[-4] = v_107;
    goto v_33;
v_35:
v_33:
    v_107 = stack[-3];
    if (!car_legal(v_107)) v_107 = cdrerror(v_107); else
    v_107 = cdr(v_107);
    stack[-3] = v_107;
    goto v_11;
v_12:
v_45:
    v_107 = stack[-5];
    if (v_107 == nil) goto v_48;
    else goto v_49;
v_48:
    goto v_44;
v_49:
    v_107 = stack[-5];
    if (!car_legal(v_107)) v_107 = carerror(v_107); else
    v_107 = car(v_107);
    if (!car_legal(v_107)) v_107 = carerror(v_107); else
    v_107 = car(v_107);
    stack[-4] = v_107;
    v_107 = stack[-5];
    if (!car_legal(v_107)) v_107 = carerror(v_107); else
    v_107 = car(v_107);
    if (!car_legal(v_107)) v_107 = cdrerror(v_107); else
    v_107 = cdr(v_107);
    stack[-3] = v_107;
    v_107 = stack[-5];
    if (!car_legal(v_107)) v_107 = cdrerror(v_107); else
    v_107 = cdr(v_107);
    stack[-5] = v_107;
    v_107 = stack[-4];
    if (!car_legal(v_107)) v_107 = carerror(v_107); else
    v_107 = car(v_107);
    if (!car_legal(v_107)) v_107 = carerror(v_107); else
    v_107 = car(v_107);
    if (!car_legal(v_107)) v_108 = carerror(v_107); else
    v_108 = car(v_107);
    v_107 = stack[-3];
    if (!car_legal(v_107)) v_107 = carerror(v_107); else
    v_107 = car(v_107);
    if (!car_legal(v_107)) v_107 = carerror(v_107); else
    v_107 = car(v_107);
    {   LispObject fn = basic_elt(env, 1); // ordexn
    v_107 = (*qfn2(fn))(fn, v_108, v_107);
    }
    env = stack[-6];
    stack[-1] = v_107;
    v_107 = stack[-1];
    if (v_107 == nil) goto v_71;
    v_107 = stack[-4];
    if (!car_legal(v_107)) v_107 = carerror(v_107); else
    v_107 = car(v_107);
    if (!car_legal(v_107)) v_108 = cdrerror(v_107); else
    v_108 = cdr(v_107);
    v_107 = stack[-3];
    if (!car_legal(v_107)) v_107 = carerror(v_107); else
    v_107 = car(v_107);
    if (!car_legal(v_107)) v_107 = cdrerror(v_107); else
    v_107 = cdr(v_107);
    {   LispObject fn = basic_elt(env, 2); // c!:subs2multf
    v_107 = (*qfn2(fn))(fn, v_108, v_107);
    }
    env = stack[-6];
    v_108 = v_107;
    v_107 = stack[-1];
    if (!car_legal(v_107)) v_107 = carerror(v_107); else
    v_107 = car(v_107);
    if (v_107 == nil) goto v_83;
    v_107 = v_108;
    {   LispObject fn = basic_elt(env, 3); // negf
    v_107 = (*qfn1(fn))(fn, v_107);
    }
    env = stack[-6];
    v_108 = v_107;
    goto v_81;
v_83:
v_81:
    v_107 = stack[-1];
    if (!car_legal(v_107)) stack[-2] = cdrerror(v_107); else
    stack[-2] = cdr(v_107);
    stack[-1] = v_108;
    v_107 = stack[-4];
    if (!car_legal(v_107)) v_108 = cdrerror(v_107); else
    v_108 = cdr(v_107);
    v_107 = stack[-3];
    {   LispObject fn = basic_elt(env, 0); // extmult
    v_107 = (*qfn2(fn))(fn, v_108, v_107);
    }
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 4); // extadd
    v_107 = (*qfn2(fn))(fn, stack[0], v_107);
    }
    env = stack[-6];
    v_107 = acons(stack[-2], stack[-1], v_107);
    env = stack[-6];
    stack[0] = v_107;
    goto v_69;
v_71:
    v_107 = stack[-4];
    if (!car_legal(v_107)) v_108 = cdrerror(v_107); else
    v_108 = cdr(v_107);
    v_107 = stack[-3];
    {   LispObject fn = basic_elt(env, 0); // extmult
    v_108 = (*qfn2(fn))(fn, v_108, v_107);
    }
    env = stack[-6];
    v_107 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // extadd
    v_107 = (*qfn2(fn))(fn, v_108, v_107);
    }
    env = stack[-6];
    stack[0] = v_107;
    goto v_69;
v_69:
    goto v_45;
v_44:
    v_107 = stack[0];
    return onevalue(v_107);
}



// Code for add2locs

static LispObject CC_add2locs(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_103, v_104;
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
    v_104 = v_2;
// end of prologue
    v_103 = qvalue(basic_elt(env, 1)); // !*globals
    if (v_103 == nil) goto v_10;
    v_103 = v_104;
    stack[-2] = v_103;
v_15:
    v_103 = stack[-2];
    if (v_103 == nil) goto v_19;
    else goto v_20;
v_19:
    goto v_14;
v_20:
    v_103 = stack[-2];
    if (!car_legal(v_103)) v_103 = carerror(v_103); else
    v_103 = car(v_103);
    stack[-1] = v_103;
    v_104 = stack[-1];
    v_103 = qvalue(basic_elt(env, 2)); // locls!*
    v_103 = Lassoc(nil, v_104, v_103);
    stack[-3] = v_103;
    v_103 = stack[-3];
    if (v_103 == nil) goto v_32;
    v_104 = stack[-1];
    v_103 = basic_elt(env, 3); // dclglb
    v_103 = Lflagp(nil, v_104, v_103);
    env = stack[-4];
    if (v_103 == nil) goto v_32;
    v_103 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {   LispObject fn = basic_elt(env, 11); // qerline
    v_103 = (*qfn1(fn))(fn, v_103);
    }
    env = stack[-4];
    v_103 = basic_elt(env, 4); // "*** Variable "
    v_103 = Lprinc(nil, v_103);
    env = stack[-4];
    v_103 = stack[-1];
    v_103 = Lprin(nil, v_103);
    env = stack[-4];
    v_103 = basic_elt(env, 5); // " nested declaration in "
    v_103 = Lprinc(nil, v_103);
    env = stack[-4];
    v_103 = qvalue(basic_elt(env, 6)); // curfun!*
    {   LispObject fn = basic_elt(env, 12); // princng
    v_103 = (*qfn1(fn))(fn, v_103);
    }
    env = stack[-4];
    v_103 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {   LispObject fn = basic_elt(env, 13); // newline
    v_103 = (*qfn1(fn))(fn, v_103);
    }
    env = stack[-4];
    stack[0] = stack[-3];
    v_104 = nil;
    v_103 = stack[-3];
    v_103 = cons(v_104, v_103);
    env = stack[-4];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_103);
    goto v_30;
v_32:
    stack[0] = stack[-1];
    v_103 = nil;
    v_104 = ncons(v_103);
    env = stack[-4];
    v_103 = qvalue(basic_elt(env, 2)); // locls!*
    v_103 = acons(stack[0], v_104, v_103);
    env = stack[-4];
    setvalue(basic_elt(env, 2), v_103); // locls!*
    goto v_30;
v_30:
    v_104 = stack[-1];
    v_103 = basic_elt(env, 3); // dclglb
    v_103 = Lflagp(nil, v_104, v_103);
    env = stack[-4];
    if (v_103 == nil) goto v_70;
    v_103 = lisp_true;
    goto v_68;
v_70:
    v_104 = stack[-1];
    v_103 = basic_elt(env, 7); // glb2rf
    v_103 = Lflagp(nil, v_104, v_103);
    env = stack[-4];
    goto v_68;
    v_103 = nil;
v_68:
    if (v_103 == nil) goto v_66;
    v_103 = stack[-1];
    {   LispObject fn = basic_elt(env, 14); // globind
    v_103 = (*qfn1(fn))(fn, v_103);
    }
    env = stack[-4];
    goto v_64;
v_66:
v_64:
    v_104 = stack[-1];
    v_103 = basic_elt(env, 8); // seen
    v_103 = Lflagp(nil, v_104, v_103);
    env = stack[-4];
    if (v_103 == nil) goto v_85;
    v_103 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {   LispObject fn = basic_elt(env, 11); // qerline
    v_103 = (*qfn1(fn))(fn, v_103);
    }
    env = stack[-4];
    v_103 = basic_elt(env, 9); // "*** Function "
    v_103 = Lprinc(nil, v_103);
    env = stack[-4];
    v_103 = stack[-1];
    {   LispObject fn = basic_elt(env, 12); // princng
    v_103 = (*qfn1(fn))(fn, v_103);
    }
    env = stack[-4];
    v_103 = basic_elt(env, 10); // " used as variable in "
    v_103 = Lprinc(nil, v_103);
    env = stack[-4];
    v_103 = qvalue(basic_elt(env, 6)); // curfun!*
    {   LispObject fn = basic_elt(env, 12); // princng
    v_103 = (*qfn1(fn))(fn, v_103);
    }
    env = stack[-4];
    v_103 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {   LispObject fn = basic_elt(env, 13); // newline
    v_103 = (*qfn1(fn))(fn, v_103);
    }
    env = stack[-4];
    goto v_83;
v_85:
v_83:
    v_103 = stack[-2];
    if (!car_legal(v_103)) v_103 = cdrerror(v_103); else
    v_103 = cdr(v_103);
    stack[-2] = v_103;
    goto v_15;
v_14:
    goto v_8;
v_10:
v_8:
    v_103 = nil;
    return onevalue(v_103);
}



// Code for monomcomparedeglex

static LispObject CC_monomcomparedeglex(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_95, v_96;
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
    v_95 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-1] = v_95;
    v_96 = stack[0];
    v_95 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-3] = Lgetv(nil, v_96, v_95);
    env = stack[-4];
    v_96 = stack[-2];
    v_95 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_95 = Lgetv(nil, v_96, v_95);
    env = stack[-4];
    if ((static_cast<std::intptr_t>(stack[-3]) > static_cast<std::intptr_t>(v_95))) goto v_14;
    else goto v_15;
v_14:
    v_95 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-1] = v_95;
    goto v_13;
v_15:
    v_96 = stack[0];
    v_95 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-3] = Lgetv(nil, v_96, v_95);
    env = stack[-4];
    v_96 = stack[-2];
    v_95 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_95 = Lgetv(nil, v_96, v_95);
    env = stack[-4];
    if ((static_cast<std::intptr_t>(stack[-3]) < static_cast<std::intptr_t>(v_95))) goto v_23;
    else goto v_24;
v_23:
    v_95 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    stack[-1] = v_95;
    goto v_13;
v_24:
    stack[-3] = nil;
    v_96 = stack[0];
    v_95 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_95 = Lgetv(nil, v_96, v_95);
    env = stack[-4];
    v_95 = cons(stack[-3], v_95);
    env = stack[-4];
    v_95 = Lreverse(nil, v_95);
    env = stack[-4];
    if (!car_legal(v_95)) v_95 = cdrerror(v_95); else
    v_95 = cdr(v_95);
    stack[-3] = v_95;
    stack[0] = nil;
    v_96 = stack[-2];
    v_95 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_95 = Lgetv(nil, v_96, v_95);
    env = stack[-4];
    v_95 = cons(stack[0], v_95);
    env = stack[-4];
    v_95 = Lreverse(nil, v_95);
    env = stack[-4];
    if (!car_legal(v_95)) v_95 = cdrerror(v_95); else
    v_95 = cdr(v_95);
    stack[0] = v_95;
v_50:
    v_95 = stack[-3];
    if (!car_legal(v_95)) v_95 = carerror(v_95); else
    v_95 = car(v_95);
    if (v_95 == nil) goto v_53;
    v_95 = stack[0];
    if (!car_legal(v_95)) v_95 = carerror(v_95); else
    v_95 = car(v_95);
    if (v_95 == nil) goto v_53;
    goto v_54;
v_53:
    goto v_49;
v_54:
    v_95 = stack[-3];
    if (!car_legal(v_95)) v_96 = carerror(v_95); else
    v_96 = car(v_95);
    v_95 = stack[0];
    if (!car_legal(v_95)) v_95 = carerror(v_95); else
    v_95 = car(v_95);
    v_95 = static_cast<LispObject>(lessp2(v_96, v_95));
    v_95 = v_95 ? lisp_true : nil;
    env = stack[-4];
    if (v_95 == nil) goto v_65;
    v_95 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-1] = v_95;
    v_95 = nil;
    v_95 = ncons(v_95);
    env = stack[-4];
    stack[-3] = v_95;
    goto v_63;
v_65:
    v_95 = stack[-3];
    if (!car_legal(v_95)) v_96 = carerror(v_95); else
    v_96 = car(v_95);
    v_95 = stack[0];
    if (!car_legal(v_95)) v_95 = carerror(v_95); else
    v_95 = car(v_95);
    v_95 = static_cast<LispObject>(greaterp2(v_96, v_95));
    v_95 = v_95 ? lisp_true : nil;
    env = stack[-4];
    if (v_95 == nil) goto v_76;
    v_95 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    stack[-1] = v_95;
    v_95 = nil;
    v_95 = ncons(v_95);
    env = stack[-4];
    stack[-3] = v_95;
    goto v_63;
v_76:
    v_95 = stack[-3];
    if (!car_legal(v_95)) v_95 = cdrerror(v_95); else
    v_95 = cdr(v_95);
    stack[-3] = v_95;
    v_95 = stack[0];
    if (!car_legal(v_95)) v_95 = cdrerror(v_95); else
    v_95 = cdr(v_95);
    stack[0] = v_95;
    goto v_63;
v_63:
    goto v_50;
v_49:
    goto v_13;
v_13:
    v_95 = stack[-1];
    return onevalue(v_95);
}



// Code for poly!-multfnc

static LispObject CC_polyKmultfnc(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_145, v_146, v_147;
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
    v_145 = qvalue(basic_elt(env, 1)); // !*sstools!-loaded
    if (v_145 == nil) goto v_8;
    v_146 = stack[-2];
    v_145 = stack[-1];
    {
        LispObject fn = basic_elt(env, 3); // sstools!-multfnc
        return (*qfn2(fn))(fn, v_146, v_145);
    }
v_8:
    v_145 = stack[-2];
    if (!car_legal(v_145)) v_145 = carerror(v_145); else
    v_145 = car(v_145);
    if (!car_legal(v_145)) stack[0] = cdrerror(v_145); else
    stack[0] = cdr(v_145);
    v_145 = stack[-1];
    if (!car_legal(v_145)) v_145 = carerror(v_145); else
    v_145 = car(v_145);
    v_145 = ncons(v_145);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 4); // poly!-multf
    v_145 = (*qfn2(fn))(fn, stack[0], v_145);
    }
    env = stack[-4];
    stack[-3] = v_145;
    v_145 = stack[-3];
    if (v_145 == nil) goto v_28;
    else goto v_29;
v_28:
    goto v_27;
v_29:
    v_145 = stack[-3];
    if (!consp(v_145)) goto v_40;
    else goto v_41;
v_40:
    v_145 = lisp_true;
    goto v_39;
v_41:
    v_145 = stack[-3];
    if (!car_legal(v_145)) v_145 = carerror(v_145); else
    v_145 = car(v_145);
    v_145 = (consp(v_145) ? nil : lisp_true);
    goto v_39;
    v_145 = nil;
v_39:
    if (v_145 == nil) goto v_36;
    else goto v_37;
v_36:
    v_145 = stack[-3];
    if (!car_legal(v_145)) v_145 = carerror(v_145); else
    v_145 = car(v_145);
    if (!car_legal(v_145)) v_145 = carerror(v_145); else
    v_145 = car(v_145);
    if (!car_legal(v_145)) v_146 = carerror(v_145); else
    v_146 = car(v_145);
    v_145 = stack[-2];
    if (!car_legal(v_145)) v_145 = carerror(v_145); else
    v_145 = car(v_145);
    if (!car_legal(v_145)) v_145 = carerror(v_145); else
    v_145 = car(v_145);
    if (!car_legal(v_145)) v_145 = carerror(v_145); else
    v_145 = car(v_145);
    v_145 = (v_146 == v_145 ? lisp_true : nil);
    goto v_35;
v_37:
    v_145 = nil;
    goto v_35;
    v_145 = nil;
v_35:
    if (v_145 == nil) goto v_33;
    v_145 = stack[-2];
    if (!car_legal(v_145)) v_145 = carerror(v_145); else
    v_145 = car(v_145);
    if (!car_legal(v_145)) v_145 = carerror(v_145); else
    v_145 = car(v_145);
    if (!car_legal(v_145)) stack[0] = carerror(v_145); else
    stack[0] = car(v_145);
    v_145 = stack[-2];
    if (!car_legal(v_145)) v_145 = carerror(v_145); else
    v_145 = car(v_145);
    if (!car_legal(v_145)) v_145 = carerror(v_145); else
    v_145 = car(v_145);
    if (!car_legal(v_145)) v_146 = cdrerror(v_145); else
    v_146 = cdr(v_145);
    v_145 = stack[-3];
    if (!car_legal(v_145)) v_145 = carerror(v_145); else
    v_145 = car(v_145);
    if (!car_legal(v_145)) v_145 = carerror(v_145); else
    v_145 = car(v_145);
    if (!car_legal(v_145)) v_145 = cdrerror(v_145); else
    v_145 = cdr(v_145);
    v_145 = plus2(v_146, v_145);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 5); // mkspm
    v_145 = (*qfn2(fn))(fn, stack[0], v_145);
    }
    env = stack[-4];
    v_147 = v_145;
    if (v_145 == nil) goto v_64;
    else goto v_65;
v_64:
    v_145 = nil;
    stack[0] = v_145;
    goto v_63;
v_65:
    v_146 = v_147;
    v_145 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_146 == v_145) goto v_81;
    else goto v_82;
v_81:
    v_145 = stack[-3];
    if (!car_legal(v_145)) v_145 = carerror(v_145); else
    v_145 = car(v_145);
    if (!car_legal(v_145)) v_145 = cdrerror(v_145); else
    v_145 = cdr(v_145);
    stack[0] = v_145;
    goto v_63;
v_82:
    v_146 = v_147;
    v_145 = stack[-3];
    if (!car_legal(v_145)) v_145 = carerror(v_145); else
    v_145 = car(v_145);
    if (!car_legal(v_145)) v_145 = cdrerror(v_145); else
    v_145 = cdr(v_145);
    v_145 = cons(v_146, v_145);
    env = stack[-4];
    v_145 = ncons(v_145);
    env = stack[-4];
    stack[0] = v_145;
    goto v_63;
    stack[0] = nil;
v_63:
    v_145 = stack[-2];
    if (!car_legal(v_145)) v_145 = carerror(v_145); else
    v_145 = car(v_145);
    if (!car_legal(v_145)) v_146 = carerror(v_145); else
    v_146 = car(v_145);
    v_145 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_145 = cons(v_146, v_145);
    env = stack[-4];
    v_146 = ncons(v_145);
    env = stack[-4];
    v_145 = stack[-3];
    if (!car_legal(v_145)) v_145 = cdrerror(v_145); else
    v_145 = cdr(v_145);
    {   LispObject fn = basic_elt(env, 4); // poly!-multf
    v_145 = (*qfn2(fn))(fn, v_146, v_145);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 6); // addf
    v_145 = (*qfn2(fn))(fn, stack[0], v_145);
    }
    env = stack[-4];
    stack[-3] = v_145;
    goto v_27;
v_33:
    v_145 = stack[-2];
    if (!car_legal(v_145)) v_145 = carerror(v_145); else
    v_145 = car(v_145);
    if (!car_legal(v_145)) v_145 = carerror(v_145); else
    v_145 = car(v_145);
    if (!car_legal(v_145)) v_145 = carerror(v_145); else
    v_145 = car(v_145);
    {   LispObject fn = basic_elt(env, 7); // noncomp
    v_145 = (*qfn1(fn))(fn, v_145);
    }
    env = stack[-4];
    if (v_145 == nil) goto v_106;
    v_145 = stack[-2];
    if (!car_legal(v_145)) v_145 = carerror(v_145); else
    v_145 = car(v_145);
    if (!car_legal(v_145)) v_146 = carerror(v_145); else
    v_146 = car(v_145);
    v_145 = stack[-3];
    v_145 = cons(v_146, v_145);
    env = stack[-4];
    v_145 = ncons(v_145);
    env = stack[-4];
    stack[-3] = v_145;
    goto v_27;
v_106:
    v_145 = lisp_true;
// Binding !*!*processed
// FLUIDBIND: reloadenv=4 litvec-offset=2 saveloc=0
{   bind_fluid_stack bind_fluid_var(-4, 2, 0);
    setvalue(basic_elt(env, 2), v_145); // !*!*processed
    v_145 = stack[-2];
    if (!car_legal(v_145)) v_145 = carerror(v_145); else
    v_145 = car(v_145);
    if (!car_legal(v_145)) v_146 = carerror(v_145); else
    v_146 = car(v_145);
    v_145 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_145 = cons(v_146, v_145);
    env = stack[-4];
    v_146 = ncons(v_145);
    env = stack[-4];
    v_145 = stack[-3];
    {   LispObject fn = basic_elt(env, 4); // poly!-multf
    v_145 = (*qfn2(fn))(fn, v_146, v_145);
    }
    env = stack[-4];
    stack[-3] = v_145;
    ;}  // end of a binding scope
    goto v_27;
v_27:
    v_145 = stack[-2];
    if (!car_legal(v_145)) v_146 = cdrerror(v_145); else
    v_146 = cdr(v_145);
    v_145 = stack[-1];
    {   LispObject fn = basic_elt(env, 4); // poly!-multf
    stack[0] = (*qfn2(fn))(fn, v_146, v_145);
    }
    env = stack[-4];
    v_145 = stack[-2];
    if (!car_legal(v_145)) v_145 = carerror(v_145); else
    v_145 = car(v_145);
    v_146 = ncons(v_145);
    env = stack[-4];
    v_145 = stack[-1];
    if (!car_legal(v_145)) v_145 = cdrerror(v_145); else
    v_145 = cdr(v_145);
    {   LispObject fn = basic_elt(env, 4); // poly!-multf
    v_145 = (*qfn2(fn))(fn, v_146, v_145);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 6); // addf
    v_145 = (*qfn2(fn))(fn, stack[0], v_145);
    }
    env = stack[-4];
    {
        LispObject v_152 = stack[-3];
        LispObject fn = basic_elt(env, 6); // addf
        return (*qfn2(fn))(fn, v_152, v_145);
    }
    goto v_6;
    v_145 = nil;
v_6:
    return onevalue(v_145);
}



// Code for talp_telp

static LispObject CC_talp_telp(LispObject env,
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
    stack[-2] = nil;
    v_46 = stack[0];
    if (!consp(v_46)) goto v_10;
    else goto v_11;
v_10:
    v_47 = stack[-1];
    v_46 = stack[0];
    v_46 = (v_47 == v_46 ? lisp_true : nil);
    goto v_7;
v_11:
    v_46 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // talp_invp
    v_46 = (*qfn1(fn))(fn, v_46);
    }
    env = stack[-3];
    if (v_46 == nil) goto v_16;
    else goto v_17;
v_16:
    v_46 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // talp_fargl
    v_46 = (*qfn1(fn))(fn, v_46);
    }
    env = stack[-3];
    stack[0] = v_46;
v_24:
    v_46 = stack[-2];
    if (v_46 == nil) goto v_31;
    else goto v_32;
v_31:
    v_46 = stack[0];
    goto v_30;
v_32:
    v_46 = nil;
    goto v_30;
    v_46 = nil;
v_30:
    if (v_46 == nil) goto v_27;
    else goto v_28;
v_27:
    goto v_23;
v_28:
    v_47 = stack[-1];
    v_46 = stack[0];
    if (!car_legal(v_46)) v_46 = carerror(v_46); else
    v_46 = car(v_46);
    {   LispObject fn = basic_elt(env, 0); // talp_telp
    v_46 = (*qfn2(fn))(fn, v_47, v_46);
    }
    env = stack[-3];
    stack[-2] = v_46;
    v_46 = stack[0];
    if (!car_legal(v_46)) v_46 = cdrerror(v_46); else
    v_46 = cdr(v_46);
    stack[0] = v_46;
    goto v_24;
v_23:
    v_46 = stack[-2];
    goto v_7;
v_17:
    v_46 = nil;
v_7:
    return onevalue(v_46);
}



// Code for pasf_anegrel

static LispObject CC_pasf_anegrel(LispObject env,
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
    v_15 = basic_elt(env, 1); // ((equal . equal) (neq . neq) (leq . geq) (geq . leq) (lessp . greaterp) (greaterp . lessp) (cong . cong) (ncong . ncong))
    v_15 = Latsoc(nil, v_16, v_15);
    if (!car_legal(v_15)) v_15 = cdrerror(v_15); else
    v_15 = cdr(v_15);
    if (v_15 == nil) goto v_6;
    else goto v_5;
v_6:
    v_15 = basic_elt(env, 2); // "pasf_anegrel: unknown operator "
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



// Code for multi_args

static LispObject CC_multi_args(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_18;
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
    v_18 = stack[0];
    if (v_18 == nil) goto v_9;
    v_18 = stack[0];
    if (!car_legal(v_18)) v_18 = carerror(v_18); else
    v_18 = car(v_18);
    {   LispObject fn = basic_elt(env, 1); // expression
    v_18 = (*qfn1(fn))(fn, v_18);
    }
    env = stack[-1];
    v_18 = stack[0];
    if (!car_legal(v_18)) v_18 = cdrerror(v_18); else
    v_18 = cdr(v_18);
    {   LispObject fn = basic_elt(env, 0); // multi_args
    v_18 = (*qfn1(fn))(fn, v_18);
    }
    goto v_7;
v_9:
v_7:
    v_18 = nil;
    return onevalue(v_18);
}



// Code for getdec

static LispObject CC_getdec(LispObject env,
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
    v_19 = nil;
    v_18 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // symtabget
    v_18 = (*qfn2(fn))(fn, v_19, v_18);
    }
    env = stack[-1];
    v_19 = v_18;
    v_18 = v_19;
    if (v_18 == nil) goto v_12;
    else goto v_13;
v_12:
    v_18 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // implicitdec
    v_18 = (*qfn1(fn))(fn, v_18);
    }
    v_19 = v_18;
    goto v_11;
v_13:
v_11:
    v_18 = v_19;
    return onevalue(v_18);
}



// Code for memqcar

static LispObject CC_memqcar(LispObject env,
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
    v_17 = v_3;
    v_18 = v_2;
// end of prologue
    v_19 = v_18;
    if (!consp(v_19)) goto v_8;
    if (!car_legal(v_18)) v_18 = carerror(v_18); else
    v_18 = car(v_18);
    v_17 = Lmemq(nil, v_18, v_17);
    goto v_6;
v_8:
    v_17 = nil;
    goto v_6;
    v_17 = nil;
v_6:
    return onevalue(v_17);
}



// Code for oprinla

static LispObject CC_oprinla(LispObject env,
                         LispObject v_2)
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
        push(v_2);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_36 = v_2;
// end of prologue
    v_37 = v_36;
    v_35 = basic_elt(env, 1); // lapr
    v_35 = get(v_37, v_35);
    env = stack[0];
    v_37 = v_35;
    if (v_35 == nil) goto v_10;
    v_35 = v_37;
    {   LispObject fn = basic_elt(env, 4); // prin2la
    v_35 = (*qfn1(fn))(fn, v_35);
    }
    goto v_8;
v_10:
    v_35 = v_36;
    if (!symbolp(v_35)) v_35 = nil;
    else { v_35 = qfastgets(v_35);
           if (v_35 != nil) { v_35 = elt(v_35, 37); // prtch
#ifdef RECORD_GET
             if (v_35 != SPID_NOPROP)
                record_get(elt(fastget_names, 37), 1);
             else record_get(elt(fastget_names, 37), 0),
                v_35 = nil; }
           else record_get(elt(fastget_names, 37), 0); }
#else
             if (v_35 == SPID_NOPROP) v_35 = nil; }}
#endif
    v_37 = v_35;
    if (v_35 == nil) goto v_17;
    v_35 = v_37;
    {   LispObject fn = basic_elt(env, 4); // prin2la
    v_35 = (*qfn1(fn))(fn, v_35);
    }
    goto v_8;
v_17:
    v_37 = v_36;
    v_35 = basic_elt(env, 2); // lapop
    v_35 = get(v_37, v_35);
    env = stack[0];
    v_37 = v_35;
    if (v_35 == nil) goto v_23;
    v_35 = v_37;
    {   LispObject fn = basic_elt(env, 4); // prin2la
    v_35 = (*qfn1(fn))(fn, v_35);
    }
    env = stack[0];
    v_35 = basic_elt(env, 3); // ! 
    {   LispObject fn = basic_elt(env, 4); // prin2la
    v_35 = (*qfn1(fn))(fn, v_35);
    }
    goto v_8;
v_23:
    v_35 = v_36;
    {   LispObject fn = basic_elt(env, 5); // prinlatom
    v_35 = (*qfn1(fn))(fn, v_35);
    }
    goto v_8;
v_8:
    v_35 = nil;
    return onevalue(v_35);
}



// Code for gftimesn

static LispObject CC_gftimesn(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_45, v_46, v_47;
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
    v_46 = v_3;
    v_47 = v_2;
// end of prologue
    v_45 = v_47;
    if (!car_legal(v_45)) v_45 = carerror(v_45); else
    v_45 = car(v_45);
    if (!consp(v_45)) goto v_7;
    else goto v_8;
v_7:
    v_45 = v_47;
    {
        LispObject fn = basic_elt(env, 1); // gfftimes
        return (*qfn2(fn))(fn, v_45, v_46);
    }
v_8:
    v_45 = v_47;
    if (!car_legal(v_45)) v_45 = carerror(v_45); else
    v_45 = car(v_45);
    stack[-4] = v_45;
    v_45 = v_47;
    if (!car_legal(v_45)) v_45 = cdrerror(v_45); else
    v_45 = cdr(v_45);
    stack[-3] = v_45;
    v_45 = v_46;
    if (!car_legal(v_45)) v_45 = carerror(v_45); else
    v_45 = car(v_45);
    stack[-2] = v_45;
    v_45 = v_46;
    if (!car_legal(v_45)) v_45 = cdrerror(v_45); else
    v_45 = cdr(v_45);
    stack[-1] = v_45;
    v_46 = stack[-4];
    v_45 = stack[-2];
    {   LispObject fn = basic_elt(env, 2); // times!:
    stack[0] = (*qfn2(fn))(fn, v_46, v_45);
    }
    env = stack[-5];
    v_46 = stack[-3];
    v_45 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // times!:
    v_45 = (*qfn2(fn))(fn, v_46, v_45);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 3); // difference!:
    stack[0] = (*qfn2(fn))(fn, stack[0], v_45);
    }
    env = stack[-5];
    v_46 = stack[-4];
    v_45 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // times!:
    stack[-1] = (*qfn2(fn))(fn, v_46, v_45);
    }
    env = stack[-5];
    v_46 = stack[-3];
    v_45 = stack[-2];
    {   LispObject fn = basic_elt(env, 2); // times!:
    v_45 = (*qfn2(fn))(fn, v_46, v_45);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 4); // plus!:
    v_45 = (*qfn2(fn))(fn, stack[-1], v_45);
    }
    {
        LispObject v_53 = stack[0];
        return cons(v_53, v_45);
    }
    goto v_6;
    v_45 = nil;
v_6:
    return onevalue(v_45);
}



// Code for fieldconv

static LispObject CC_fieldconv(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_133, v_134, v_135;
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
    v_133 = stack[-1];
    if (!car_legal(v_133)) v_133 = carerror(v_133); else
    v_133 = car(v_133);
    stack[-3] = v_133;
    v_133 = stack[-1];
    if (!car_legal(v_133)) v_133 = cdrerror(v_133); else
    v_133 = cdr(v_133);
    stack[0] = v_133;
    v_133 = qvalue(basic_elt(env, 1)); // dmode!*
    if (v_133 == nil) goto v_16;
    else goto v_17;
v_16:
    v_134 = stack[-2];
    v_133 = basic_elt(env, 2); // !:rn!:
    if (!consp(v_134)) goto v_21;
    v_134 = car(v_134);
    if (v_134 == v_133) goto v_22;
v_21:
    v_133 = stack[-2];
    if (!car_legal(v_133)) v_134 = carerror(v_133); else
    v_134 = car(v_133);
    v_133 = basic_elt(env, 2); // !:rn!:
    v_133 = get(v_134, v_133);
    env = stack[-4];
    v_134 = v_133;
    if (v_133 == nil) goto v_29;
    v_133 = v_134;
    if (!consp(v_133)) goto v_35;
    else goto v_29;
v_35:
    v_133 = stack[-2];
    v_133 = Lapply1(nil, v_134, v_133);
    env = stack[-4];
    stack[-2] = v_133;
    goto v_27;
v_29:
    v_133 = stack[-2];
    if (!car_legal(v_133)) v_134 = carerror(v_133); else
    v_134 = car(v_133);
    v_133 = basic_elt(env, 3); // quotient
    v_133 = get(v_134, v_133);
    env = stack[-4];
    if (v_133 == nil) goto v_41;
    v_135 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_134 = stack[-2];
    v_133 = basic_elt(env, 3); // quotient
    {   LispObject fn = basic_elt(env, 5); // dcombine
    v_133 = (*qfn3(fn))(fn, v_135, v_134, v_133);
    }
    env = stack[-4];
    stack[-2] = v_133;
    v_134 = stack[-2];
    v_133 = stack[-1];
    if (!car_legal(v_133)) v_133 = carerror(v_133); else
    v_133 = car(v_133);
    {   LispObject fn = basic_elt(env, 6); // multd
    stack[0] = (*qfn2(fn))(fn, v_134, v_133);
    }
    env = stack[-4];
    v_134 = stack[-2];
    v_133 = stack[-1];
    if (!car_legal(v_133)) v_133 = cdrerror(v_133); else
    v_133 = cdr(v_133);
    {   LispObject fn = basic_elt(env, 6); // multd
    v_133 = (*qfn2(fn))(fn, v_134, v_133);
    }
    {
        LispObject v_140 = stack[0];
        return cons(v_140, v_133);
    }
v_41:
    v_134 = basic_elt(env, 4); // "field conversion"
    v_133 = stack[-2];
    v_133 = list2(v_134, v_133);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 7); // errach
    v_133 = (*qfn1(fn))(fn, v_133);
    }
    env = stack[-4];
    goto v_27;
v_27:
    goto v_20;
v_22:
v_20:
    v_133 = stack[-2];
    if (!car_legal(v_133)) v_135 = carerror(v_133); else
    v_135 = car(v_133);
    v_133 = stack[-2];
    if (!car_legal(v_133)) v_133 = cdrerror(v_133); else
    v_133 = cdr(v_133);
    if (!car_legal(v_133)) v_134 = cdrerror(v_133); else
    v_134 = cdr(v_133);
    v_133 = stack[-2];
    if (!car_legal(v_133)) v_133 = cdrerror(v_133); else
    v_133 = cdr(v_133);
    if (!car_legal(v_133)) v_133 = carerror(v_133); else
    v_133 = car(v_133);
    v_133 = list2star(v_135, v_134, v_133);
    env = stack[-4];
    stack[-2] = v_133;
    v_133 = stack[0];
    if (!consp(v_133)) goto v_81;
    else goto v_82;
v_81:
    v_133 = lisp_true;
    goto v_80;
v_82:
    v_133 = stack[0];
    if (!car_legal(v_133)) v_133 = carerror(v_133); else
    v_133 = car(v_133);
    v_133 = (consp(v_133) ? nil : lisp_true);
    goto v_80;
    v_133 = nil;
v_80:
    if (v_133 == nil) goto v_78;
    v_134 = stack[-2];
    v_133 = stack[-3];
    {   LispObject fn = basic_elt(env, 6); // multd
    v_134 = (*qfn2(fn))(fn, v_134, v_133);
    }
    env = stack[-4];
    v_133 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_133 = cons(v_134, v_133);
    env = stack[-4];
    goto v_76;
v_78:
    v_134 = stack[-2];
    v_133 = stack[-3];
    {   LispObject fn = basic_elt(env, 6); // multd
    stack[-1] = (*qfn2(fn))(fn, v_134, v_133);
    }
    env = stack[-4];
    v_134 = stack[-2];
    v_133 = stack[0];
    {   LispObject fn = basic_elt(env, 6); // multd
    v_133 = (*qfn2(fn))(fn, v_134, v_133);
    }
    env = stack[-4];
    v_133 = cons(stack[-1], v_133);
    env = stack[-4];
    goto v_76;
    v_133 = nil;
v_76:
    {
        LispObject fn = basic_elt(env, 8); // simpgd
        return (*qfn1(fn))(fn, v_133);
    }
v_17:
    v_133 = stack[0];
    if (!consp(v_133)) goto v_110;
    else goto v_111;
v_110:
    v_133 = lisp_true;
    goto v_109;
v_111:
    v_133 = stack[0];
    if (!car_legal(v_133)) v_133 = carerror(v_133); else
    v_133 = car(v_133);
    v_133 = (consp(v_133) ? nil : lisp_true);
    goto v_109;
    v_133 = nil;
v_109:
    if (v_133 == nil) goto v_107;
    v_134 = stack[-3];
    v_133 = stack[0];
    {   LispObject fn = basic_elt(env, 9); // divd
    v_134 = (*qfn2(fn))(fn, v_134, v_133);
    }
    v_133 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_134, v_133);
v_107:
    v_134 = stack[-3];
    v_133 = stack[-2];
    {   LispObject fn = basic_elt(env, 9); // divd
    stack[-1] = (*qfn2(fn))(fn, v_134, v_133);
    }
    env = stack[-4];
    v_134 = stack[0];
    v_133 = stack[-2];
    {   LispObject fn = basic_elt(env, 9); // divd
    v_133 = (*qfn2(fn))(fn, v_134, v_133);
    }
    {
        LispObject v_141 = stack[-1];
        return cons(v_141, v_133);
    }
    v_133 = nil;
    return onevalue(v_133);
}



// Code for repeats

static LispObject CC_repeats(LispObject env,
                         LispObject v_2)
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
    v_34 = nil;
v_7:
    v_32 = stack[0];
    if (v_32 == nil) goto v_10;
    else goto v_11;
v_10:
    v_32 = v_34;
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn1(fn))(fn, v_32);
    }
v_11:
    v_32 = stack[0];
    if (!car_legal(v_32)) v_33 = carerror(v_32); else
    v_33 = car(v_32);
    v_32 = stack[0];
    if (!car_legal(v_32)) v_32 = cdrerror(v_32); else
    v_32 = cdr(v_32);
    v_32 = Lmember(nil, v_33, v_32);
    if (v_32 == nil) goto v_16;
    v_32 = stack[0];
    if (!car_legal(v_32)) v_32 = carerror(v_32); else
    v_32 = car(v_32);
    v_33 = v_34;
    v_32 = cons(v_32, v_33);
    env = stack[-1];
    v_34 = v_32;
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



// Code for reduce!-mod!-p!*

static LispObject CC_reduceKmodKpH(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    v_11 = v_3;
    v_12 = v_2;
// end of prologue
// Binding current!-modulus
// FLUIDBIND: reloadenv=1 litvec-offset=1 saveloc=0
{   bind_fluid_stack bind_fluid_var(-1, 1, 0);
    setvalue(basic_elt(env, 1), v_11); // current!-modulus
    v_11 = v_12;
    {   LispObject fn = basic_elt(env, 2); // general!-reduce!-mod!-p
    v_11 = (*qfn1(fn))(fn, v_11);
    }
    ;}  // end of a binding scope
    return onevalue(v_11);
}



setup_type const u26_setup[] =
{
    {"subs3t",                  G0W2,     G1W2,     CC_subs3t,G3W2,     G4W2},
    {"dmconv0",                 G0W1,     CC_dmconv0,G2W1,    G3W1,     G4W1},
    {"ra_zerop",                G0W1,     CC_ra_zerop,G2W1,   G3W1,     G4W1},
    {"refprint",                G0W1,     CC_refprint,G2W1,   G3W1,     G4W1},
    {"cl_f2ml",                 G0W2,     G1W2,     CC_cl_f2ml,G3W2,    G4W2},
    {"ofsf_at2ir",              G0W2,     G1W2,     CC_ofsf_at2ir,G3W2, G4W2},
    {"expnd",                   G0W1,     CC_expnd, G2W1,     G3W1,     G4W1},
    {"groedeletip",             G0W2,     G1W2,     CC_groedeletip,G3W2,G4W2},
    {"insertparens",            G0W1,     CC_insertparens,G2W1,G3W1,    G4W1},
    {"can_be_proved",           G0W2,     G1W2,     CC_can_be_proved,G3W2,G4W2},
    {"log_assignment_list",     G0W2,     G1W2,     CC_log_assignment_list,G3W2,G4W2},
    {"dv_cambhead",             G0W1,     CC_dv_cambhead,G2W1,G3W1,     G4W1},
    {"mod_eval_uni_poly",       G0W2,     G1W2,     CC_mod_eval_uni_poly,G3W2,G4W2},
    {"nonlnrsys",               G0W2,     G1W2,     CC_nonlnrsys,G3W2,  G4W2},
    {"lalr_make_arglist",       G0W1,     CC_lalr_make_arglist,G2W1,G3W1,G4W1},
    {"rl_bettergaussp",         G0W2,     G1W2,     CC_rl_bettergaussp,G3W2,G4W2},
    {"texstrlen",               G0W1,     CC_texstrlen,G2W1,  G3W1,     G4W1},
    {"talp_list2vec",           G0W1,     CC_talp_list2vec,G2W1,G3W1,   G4W1},
    {"pasf_cein",               G0W1,     CC_pasf_cein,G2W1,  G3W1,     G4W1},
    {"unaryir",                 G0W2,     G1W2,     CC_unaryir,G3W2,    G4W2},
    {"ps:evaluate-next",        G0W2,     G1W2,     CC_psTevaluateKnext,G3W2,G4W2},
    {"vdpvevlcomp",             G0W2,     G1W2,     CC_vdpvevlcomp,G3W2,G4W2},
    {"random",                  G0W1,     CC_random,G2W1,     G3W1,     G4W1},
    {"getphystypecar",          G0W1,     CC_getphystypecar,G2W1,G3W1,  G4W1},
    {"factorial",               G0W1,     CC_factorial,G2W1,  G3W1,     G4W1},
    {"random-teeny-prime",      G0W1,     CC_randomKteenyKprime,G2W1,G3W1,G4W1},
    {"sfto_dgcd",               G0W2,     G1W2,     CC_sfto_dgcd,G3W2,  G4W2},
    {"outrefend",               G0W1,     CC_outrefend,G2W1,  G3W1,     G4W1},
    {"simpcv",                  G0W1,     CC_simpcv,G2W1,     G3W1,     G4W1},
    {"smemberlp",               G0W2,     G1W2,     CC_smemberlp,G3W2,  G4W2},
    {"offexpchk",               G0W1,     CC_offexpchk,G2W1,  G3W1,     G4W1},
    {"formc*",                  G0W3,     G1W3,     G2W3,     CC_formcH,G4W3},
    {"physopordchk*",           G0W2,     G1W2,     CC_physopordchkH,G3W2,G4W2},
    {"red_topredbe",            G0W2,     G1W2,     CC_red_topredbe,G3W2,G4W2},
    {"trailing.coefft",         G0W2,     G1W2,     CC_trailingQcoefft,G3W2,G4W2},
    {"gf2cr:",                  G0W1,     CC_gf2crT,G2W1,     G3W1,     G4W1},
    {"extmult",                 G0W2,     G1W2,     CC_extmult,G3W2,    G4W2},
    {"add2locs",                G0W1,     CC_add2locs,G2W1,   G3W1,     G4W1},
    {"monomcomparedeglex",      G0W2,     G1W2,     CC_monomcomparedeglex,G3W2,G4W2},
    {"poly-multfnc",            G0W2,     G1W2,     CC_polyKmultfnc,G3W2,G4W2},
    {"talp_telp",               G0W2,     G1W2,     CC_talp_telp,G3W2,  G4W2},
    {"pasf_anegrel",            G0W1,     CC_pasf_anegrel,G2W1,G3W1,    G4W1},
    {"multi_args",              G0W1,     CC_multi_args,G2W1, G3W1,     G4W1},
    {"getdec",                  G0W1,     CC_getdec,G2W1,     G3W1,     G4W1},
    {"memqcar",                 G0W2,     G1W2,     CC_memqcar,G3W2,    G4W2},
    {"oprinla",                 G0W1,     CC_oprinla,G2W1,    G3W1,     G4W1},
    {"gftimesn",                G0W2,     G1W2,     CC_gftimesn,G3W2,   G4W2},
    {"fieldconv",               G0W2,     G1W2,     CC_fieldconv,G3W2,  G4W2},
    {"repeats",                 G0W1,     CC_repeats,G2W1,    G3W1,     G4W1},
    {"reduce-mod-p*",           G0W2,     G1W2,     CC_reduceKmodKpH,G3W2,G4W2},
    {nullptr, 
        reinterpret_cast<no_args *>(
            reinterpret_cast<uintptr_t>("u26")),
        reinterpret_cast<one_arg *>(
            reinterpret_cast<uintptr_t>("30665 1871264 4815787")),
        nullptr, nullptr, nullptr}
};

// end of generated code
