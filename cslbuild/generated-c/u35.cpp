
// $destdir/u35.c        Machine generated C code

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


// Code for log_freevars_list

static LispObject CC_log_freevars_list(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    v_36 = stack[-1];
    if (!consp(v_36)) goto v_11;
    else goto v_12;
v_11:
    v_36 = nil;
    goto v_7;
v_12:
    v_36 = stack[0];
    if (v_36 == nil) goto v_16;
    v_36 = stack[-1];
    if (!car_legal(v_36)) v_36 = carerror(v_36); else
    v_36 = car(v_36);
    if (!consp(v_36)) goto v_19;
    else goto v_16;
v_19:
    v_36 = stack[-1];
    if (!car_legal(v_36)) v_36 = cdrerror(v_36); else
    v_36 = cdr(v_36);
    stack[-1] = v_36;
    v_36 = lisp_true;
    stack[0] = v_36;
    goto v_8;
v_16:
    v_37 = stack[-2];
    v_36 = stack[-1];
    if (!car_legal(v_36)) v_36 = carerror(v_36); else
    v_36 = car(v_36);
    {   LispObject fn = basic_elt(env, 1); // log_freevars
    v_36 = (*qfn2(fn))(fn, v_37, v_36);
    }
    env = stack[-3];
    if (v_36 == nil) goto v_26;
    v_36 = lisp_true;
    goto v_7;
v_26:
    v_36 = stack[-1];
    if (!car_legal(v_36)) v_36 = cdrerror(v_36); else
    v_36 = cdr(v_36);
    stack[-1] = v_36;
    goto v_8;
    v_36 = nil;
v_7:
    return onevalue(v_36);
}



// Code for ratfunpri1

static LispObject CC_ratfunpri1(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_226, v_227, v_228;
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
    v_227 = qvalue(basic_elt(env, 1)); // spare!*
    v_226 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_226 = plus2(v_227, v_226);
    env = stack[-8];
    setvalue(basic_elt(env, 1), v_226); // spare!*
    v_226 = stack[0];
    if (!car_legal(v_226)) v_226 = cdrerror(v_226); else
    v_226 = cdr(v_226);
    if (!car_legal(v_226)) v_228 = carerror(v_226); else
    v_228 = car(v_226);
    v_227 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_226 = nil;
    {   LispObject fn = basic_elt(env, 13); // layout!-formula
    v_226 = (*qfn3(fn))(fn, v_228, v_227, v_226);
    }
    env = stack[-8];
    stack[-7] = v_226;
    if (v_226 == nil) goto v_29;
    v_226 = stack[0];
    if (!car_legal(v_226)) v_226 = cdrerror(v_226); else
    v_226 = cdr(v_226);
    if (!car_legal(v_226)) v_226 = cdrerror(v_226); else
    v_226 = cdr(v_226);
    if (!car_legal(v_226)) v_228 = carerror(v_226); else
    v_228 = car(v_226);
    v_227 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_226 = nil;
    {   LispObject fn = basic_elt(env, 13); // layout!-formula
    v_226 = (*qfn3(fn))(fn, v_228, v_227, v_226);
    }
    env = stack[-8];
    stack[-6] = v_226;
    if (v_226 == nil) goto v_29;
    v_227 = qvalue(basic_elt(env, 1)); // spare!*
    v_226 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_226 = difference2(v_227, v_226);
    env = stack[-8];
    setvalue(basic_elt(env, 1), v_226); // spare!*
    stack[0] = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_226 = stack[-7];
    if (!car_legal(v_226)) v_226 = carerror(v_226); else
    v_226 = car(v_226);
    if (!car_legal(v_226)) v_227 = cdrerror(v_226); else
    v_227 = cdr(v_226);
    v_226 = stack[-6];
    if (!car_legal(v_226)) v_226 = carerror(v_226); else
    v_226 = car(v_226);
    if (!car_legal(v_226)) v_226 = cdrerror(v_226); else
    v_226 = cdr(v_226);
    {   LispObject fn = basic_elt(env, 14); // max
    v_226 = (*qfn2(fn))(fn, v_227, v_226);
    }
    env = stack[-8];
    v_226 = plus2(stack[0], v_226);
    env = stack[-8];
    stack[-2] = v_226;
    stack[0] = stack[-2];
    v_226 = nil;
    v_227 = Llinelength(nil, v_226);
    env = stack[-8];
    v_226 = qvalue(basic_elt(env, 1)); // spare!*
    v_227 = difference2(v_227, v_226);
    env = stack[-8];
    v_226 = qvalue(basic_elt(env, 2)); // posn!*
    v_226 = difference2(v_227, v_226);
    env = stack[-8];
    v_226 = static_cast<LispObject>(greaterp2(stack[0], v_226));
    v_226 = v_226 ? lisp_true : nil;
    env = stack[-8];
    if (v_226 == nil) goto v_60;
    v_226 = lisp_true;
    {   LispObject fn = basic_elt(env, 15); // terpri!*
    v_226 = (*qfn1(fn))(fn, v_226);
    }
    env = stack[-8];
    goto v_58;
v_60:
v_58:
    v_226 = stack[-7];
    if (!car_legal(v_226)) v_226 = carerror(v_226); else
    v_226 = car(v_226);
    if (!car_legal(v_226)) v_227 = cdrerror(v_226); else
    v_227 = cdr(v_226);
    v_226 = stack[-6];
    if (!car_legal(v_226)) v_226 = carerror(v_226); else
    v_226 = car(v_226);
    if (!car_legal(v_226)) v_226 = cdrerror(v_226); else
    v_226 = cdr(v_226);
    v_226 = difference2(v_227, v_226);
    env = stack[-8];
    stack[-1] = v_226;
    v_227 = stack[-1];
    v_226 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_226 = static_cast<LispObject>(greaterp2(v_227, v_226));
    v_226 = v_226 ? lisp_true : nil;
    env = stack[-8];
    if (v_226 == nil) goto v_81;
    v_226 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[0] = v_226;
    v_227 = stack[-1];
    v_226 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_226 = quot2(v_227, v_226);
    env = stack[-8];
    stack[-3] = v_226;
    goto v_79;
v_81:
    v_226 = stack[-1];
    v_227 = negate(v_226);
    env = stack[-8];
    v_226 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_226 = quot2(v_227, v_226);
    env = stack[-8];
    stack[0] = v_226;
    v_226 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-3] = v_226;
    goto v_79;
v_79:
    v_226 = stack[-7];
    if (!car_legal(v_226)) v_226 = cdrerror(v_226); else
    v_226 = cdr(v_226);
    if (!car_legal(v_226)) v_227 = cdrerror(v_226); else
    v_227 = cdr(v_226);
    v_226 = stack[-7];
    if (!car_legal(v_226)) v_226 = cdrerror(v_226); else
    v_226 = cdr(v_226);
    if (!car_legal(v_226)) v_226 = carerror(v_226); else
    v_226 = car(v_226);
    v_226 = difference2(v_227, v_226);
    env = stack[-8];
    v_226 = add1(v_226);
    env = stack[-8];
    stack[-5] = v_226;
    v_226 = stack[-6];
    if (!car_legal(v_226)) v_226 = cdrerror(v_226); else
    v_226 = cdr(v_226);
    if (!car_legal(v_226)) v_227 = cdrerror(v_226); else
    v_227 = cdr(v_226);
    v_226 = stack[-6];
    if (!car_legal(v_226)) v_226 = cdrerror(v_226); else
    v_226 = cdr(v_226);
    if (!car_legal(v_226)) v_226 = carerror(v_226); else
    v_226 = car(v_226);
    v_226 = difference2(v_227, v_226);
    env = stack[-8];
    v_226 = add1(v_226);
    env = stack[-8];
    stack[-4] = v_226;
    stack[-1] = stack[0];
    stack[0] = qvalue(basic_elt(env, 2)); // posn!*
    v_227 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_226 = qvalue(basic_elt(env, 3)); // orig!*
    v_226 = difference2(v_227, v_226);
    env = stack[-8];
    v_226 = plus2(stack[0], v_226);
    env = stack[-8];
    stack[0] = plus2(stack[-1], v_226);
    env = stack[-8];
    v_227 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_226 = stack[-7];
    if (!car_legal(v_226)) v_226 = cdrerror(v_226); else
    v_226 = cdr(v_226);
    if (!car_legal(v_226)) v_226 = carerror(v_226); else
    v_226 = car(v_226);
    v_227 = difference2(v_227, v_226);
    env = stack[-8];
    v_226 = qvalue(basic_elt(env, 4)); // ycoord!*
    v_227 = plus2(v_227, v_226);
    env = stack[-8];
    v_226 = stack[-7];
    if (!car_legal(v_226)) v_226 = carerror(v_226); else
    v_226 = car(v_226);
    if (!car_legal(v_226)) v_226 = carerror(v_226); else
    v_226 = car(v_226);
    {   LispObject fn = basic_elt(env, 16); // update!-pline
    stack[-1] = (*qfn3(fn))(fn, stack[0], v_227, v_226);
    }
    env = stack[-8];
    stack[0] = qvalue(basic_elt(env, 2)); // posn!*
    v_227 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_226 = qvalue(basic_elt(env, 3)); // orig!*
    v_226 = difference2(v_227, v_226);
    env = stack[-8];
    v_226 = plus2(stack[0], v_226);
    env = stack[-8];
    stack[0] = plus2(stack[-3], v_226);
    env = stack[-8];
    v_227 = qvalue(basic_elt(env, 4)); // ycoord!*
    v_226 = stack[-6];
    if (!car_legal(v_226)) v_226 = cdrerror(v_226); else
    v_226 = cdr(v_226);
    if (!car_legal(v_226)) v_226 = cdrerror(v_226); else
    v_226 = cdr(v_226);
    v_226 = difference2(v_227, v_226);
    env = stack[-8];
    v_227 = sub1(v_226);
    env = stack[-8];
    v_226 = stack[-6];
    if (!car_legal(v_226)) v_226 = carerror(v_226); else
    v_226 = car(v_226);
    if (!car_legal(v_226)) v_226 = carerror(v_226); else
    v_226 = car(v_226);
    {   LispObject fn = basic_elt(env, 16); // update!-pline
    v_227 = (*qfn3(fn))(fn, stack[0], v_227, v_226);
    }
    env = stack[-8];
    v_226 = qvalue(basic_elt(env, 5)); // pline!*
    v_226 = Lappend_2(nil, v_227, v_226);
    env = stack[-8];
    v_226 = Lappend_2(nil, stack[-1], v_226);
    env = stack[-8];
    setvalue(basic_elt(env, 5), v_226); // pline!*
    stack[0] = qvalue(basic_elt(env, 6)); // ymin!*
    v_227 = qvalue(basic_elt(env, 4)); // ycoord!*
    v_226 = stack[-4];
    v_226 = difference2(v_227, v_226);
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 17); // min
    v_226 = (*qfn2(fn))(fn, stack[0], v_226);
    }
    env = stack[-8];
    setvalue(basic_elt(env, 6), v_226); // ymin!*
    stack[0] = qvalue(basic_elt(env, 7)); // ymax!*
    v_227 = qvalue(basic_elt(env, 4)); // ycoord!*
    v_226 = stack[-5];
    v_226 = plus2(v_227, v_226);
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 14); // max
    v_226 = (*qfn2(fn))(fn, stack[0], v_226);
    }
    env = stack[-8];
    setvalue(basic_elt(env, 7), v_226); // ymax!*
    v_226 = basic_elt(env, 8); // bar
    {   LispObject fn = basic_elt(env, 18); // symbol
    v_226 = (*qfn1(fn))(fn, v_226);
    }
    env = stack[-8];
    stack[-1] = v_226;
    v_226 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[0] = v_226;
v_165:
    v_227 = stack[-2];
    v_226 = stack[0];
    v_226 = difference2(v_227, v_226);
    env = stack[-8];
    v_226 = Lminusp(nil, v_226);
    env = stack[-8];
    if (v_226 == nil) goto v_170;
    goto v_164;
v_170:
    v_226 = stack[-1];
    {   LispObject fn = basic_elt(env, 19); // prin2!*
    v_226 = (*qfn1(fn))(fn, v_226);
    }
    env = stack[-8];
    v_226 = stack[0];
    v_226 = add1(v_226);
    env = stack[-8];
    stack[0] = v_226;
    goto v_165;
v_164:
    goto v_27;
v_29:
    v_227 = qvalue(basic_elt(env, 1)); // spare!*
    v_226 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_226 = difference2(v_227, v_226);
    env = stack[-8];
    setvalue(basic_elt(env, 1), v_226); // spare!*
    v_226 = stack[0];
    if (!car_legal(v_226)) v_226 = cdrerror(v_226); else
    v_226 = cdr(v_226);
    stack[0] = v_226;
    v_226 = basic_elt(env, 9); // quotient
    if (!symbolp(v_226)) v_226 = nil;
    else { v_226 = qfastgets(v_226);
           if (v_226 != nil) { v_226 = elt(v_226, 23); // infix
#ifdef RECORD_GET
             if (v_226 != SPID_NOPROP)
                record_get(elt(fastget_names, 23), 1);
             else record_get(elt(fastget_names, 23), 0),
                v_226 = nil; }
           else record_get(elt(fastget_names, 23), 0); }
#else
             if (v_226 == SPID_NOPROP) v_226 = nil; }}
#endif
    stack[-2] = v_226;
    v_226 = qvalue(basic_elt(env, 10)); // p!*!*
    if (v_226 == nil) goto v_192;
    v_227 = qvalue(basic_elt(env, 10)); // p!*!*
    v_226 = stack[-2];
    v_226 = static_cast<LispObject>(greaterp2(v_227, v_226));
    v_226 = v_226 ? lisp_true : nil;
    env = stack[-8];
    stack[-1] = v_226;
    goto v_190;
v_192:
    v_226 = nil;
    stack[-1] = v_226;
    goto v_190;
v_190:
    v_226 = stack[-1];
    if (v_226 == nil) goto v_203;
    v_226 = basic_elt(env, 11); // "("
    {   LispObject fn = basic_elt(env, 19); // prin2!*
    v_226 = (*qfn1(fn))(fn, v_226);
    }
    env = stack[-8];
    goto v_201;
v_203:
v_201:
    v_226 = stack[0];
    if (!car_legal(v_226)) v_227 = carerror(v_226); else
    v_227 = car(v_226);
    v_226 = stack[-2];
    {   LispObject fn = basic_elt(env, 20); // maprint
    v_226 = (*qfn2(fn))(fn, v_227, v_226);
    }
    env = stack[-8];
    v_226 = basic_elt(env, 9); // quotient
    {   LispObject fn = basic_elt(env, 21); // oprin
    v_226 = (*qfn1(fn))(fn, v_226);
    }
    env = stack[-8];
    v_226 = stack[0];
    if (!car_legal(v_226)) v_226 = cdrerror(v_226); else
    v_226 = cdr(v_226);
    if (!car_legal(v_226)) v_226 = carerror(v_226); else
    v_226 = car(v_226);
    {   LispObject fn = basic_elt(env, 22); // negnumberchk
    v_227 = (*qfn1(fn))(fn, v_226);
    }
    env = stack[-8];
    v_226 = stack[-2];
    {   LispObject fn = basic_elt(env, 20); // maprint
    v_226 = (*qfn2(fn))(fn, v_227, v_226);
    }
    env = stack[-8];
    v_226 = stack[-1];
    if (v_226 == nil) goto v_222;
    v_226 = basic_elt(env, 12); // ")"
    {   LispObject fn = basic_elt(env, 19); // prin2!*
    v_226 = (*qfn1(fn))(fn, v_226);
    }
    goto v_220;
v_222:
v_220:
    goto v_27;
v_27:
    v_226 = nil;
    return onevalue(v_226);
}



// Code for mo_zero!?

static LispObject CC_mo_zeroW(LispObject env,
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
    if (!car_legal(v_7)) v_7 = carerror(v_7); else
    v_7 = car(v_7);
    {
        LispObject fn = basic_elt(env, 1); // mo!=zero
        return (*qfn1(fn))(fn, v_7);
    }
}



// Code for !*f2di

static LispObject CC_Hf2di(LispObject env,
                         LispObject v_3, LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_173, v_174;
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
    real_push(nil, nil, nil, nil, nil);
    push(nil, nil);
    stack_popper stack_popper_var(8);
// copy arguments values to proper place
    v_173 = v_4;
    stack[-5] = v_3;
// end of prologue
// Binding varlist!*
// FLUIDBIND: reloadenv=7 litvec-offset=1 saveloc=6
{   bind_fluid_stack bind_fluid_var(-7, 1, -6);
    setvalue(basic_elt(env, 1), v_173); // varlist!*
    v_173 = stack[-5];
    if (v_173 == nil) goto v_13;
    else goto v_14;
v_13:
    v_173 = nil;
    goto v_12;
v_14:
    v_173 = stack[-5];
    if (!consp(v_173)) goto v_21;
    else goto v_22;
v_21:
    v_173 = lisp_true;
    goto v_20;
v_22:
    v_173 = stack[-5];
    if (!car_legal(v_173)) v_173 = carerror(v_173); else
    v_173 = car(v_173);
    v_173 = (consp(v_173) ? nil : lisp_true);
    goto v_20;
    v_173 = nil;
v_20:
    if (v_173 == nil) goto v_18;
    v_173 = qvalue(basic_elt(env, 1)); // varlist!*
    stack[-3] = v_173;
    v_173 = stack[-3];
    if (v_173 == nil) goto v_42;
    else goto v_43;
v_42:
    v_173 = nil;
    goto v_37;
v_43:
    v_173 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_173 = ncons(v_173);
    env = stack[-7];
    stack[-1] = v_173;
    stack[-2] = v_173;
v_38:
    v_173 = stack[-3];
    if (!car_legal(v_173)) v_173 = cdrerror(v_173); else
    v_173 = cdr(v_173);
    stack[-3] = v_173;
    v_173 = stack[-3];
    if (v_173 == nil) goto v_55;
    else goto v_56;
v_55:
    v_173 = stack[-2];
    goto v_37;
v_56:
    stack[0] = stack[-1];
    v_173 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_173 = ncons(v_173);
    env = stack[-7];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_173);
    v_173 = stack[-1];
    if (!car_legal(v_173)) v_173 = cdrerror(v_173); else
    v_173 = cdr(v_173);
    stack[-1] = v_173;
    goto v_38;
v_37:
    {   LispObject fn = basic_elt(env, 2); // addgt
    v_174 = (*qfn1(fn))(fn, v_173);
    }
    env = stack[-7];
    v_173 = stack[-5];
    v_173 = cons(v_174, v_173);
    env = stack[-7];
    v_173 = ncons(v_173);
    goto v_12;
v_18:
    v_173 = stack[-5];
    if (!car_legal(v_173)) v_173 = carerror(v_173); else
    v_173 = car(v_173);
    if (!car_legal(v_173)) v_173 = carerror(v_173); else
    v_173 = car(v_173);
    if (!car_legal(v_173)) v_174 = carerror(v_173); else
    v_174 = car(v_173);
    v_173 = qvalue(basic_elt(env, 1)); // varlist!*
    v_173 = Lmember(nil, v_174, v_173);
    if (v_173 == nil) goto v_75;
    v_173 = stack[-5];
    if (!car_legal(v_173)) v_173 = carerror(v_173); else
    v_173 = car(v_173);
    if (!car_legal(v_173)) v_174 = cdrerror(v_173); else
    v_174 = cdr(v_173);
    v_173 = qvalue(basic_elt(env, 1)); // varlist!*
    {   LispObject fn = basic_elt(env, 0); // !*f2di
    stack[-4] = (*qfn2(fn))(fn, v_174, v_173);
    }
    env = stack[-7];
    v_173 = qvalue(basic_elt(env, 1)); // varlist!*
    stack[-3] = v_173;
    v_173 = stack[-3];
    if (v_173 == nil) goto v_98;
    else goto v_99;
v_98:
    v_173 = nil;
    goto v_93;
v_99:
    v_173 = stack[-3];
    if (!car_legal(v_173)) v_173 = carerror(v_173); else
    v_173 = car(v_173);
    v_174 = v_173;
    v_173 = stack[-5];
    if (!car_legal(v_173)) v_173 = carerror(v_173); else
    v_173 = car(v_173);
    if (!car_legal(v_173)) v_173 = carerror(v_173); else
    v_173 = car(v_173);
    if (!car_legal(v_173)) v_173 = carerror(v_173); else
    v_173 = car(v_173);
    if (equal(v_174, v_173)) goto v_108;
    else goto v_109;
v_108:
    v_173 = stack[-5];
    if (!car_legal(v_173)) v_173 = carerror(v_173); else
    v_173 = car(v_173);
    if (!car_legal(v_173)) v_173 = carerror(v_173); else
    v_173 = car(v_173);
    if (!car_legal(v_173)) v_173 = cdrerror(v_173); else
    v_173 = cdr(v_173);
    goto v_107;
v_109:
    v_173 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_107;
    v_173 = nil;
v_107:
    v_173 = ncons(v_173);
    env = stack[-7];
    stack[-1] = v_173;
    stack[-2] = v_173;
v_94:
    v_173 = stack[-3];
    if (!car_legal(v_173)) v_173 = cdrerror(v_173); else
    v_173 = cdr(v_173);
    stack[-3] = v_173;
    v_173 = stack[-3];
    if (v_173 == nil) goto v_126;
    else goto v_127;
v_126:
    v_173 = stack[-2];
    goto v_93;
v_127:
    stack[0] = stack[-1];
    v_173 = stack[-3];
    if (!car_legal(v_173)) v_173 = carerror(v_173); else
    v_173 = car(v_173);
    v_174 = v_173;
    v_173 = stack[-5];
    if (!car_legal(v_173)) v_173 = carerror(v_173); else
    v_173 = car(v_173);
    if (!car_legal(v_173)) v_173 = carerror(v_173); else
    v_173 = car(v_173);
    if (!car_legal(v_173)) v_173 = carerror(v_173); else
    v_173 = car(v_173);
    if (equal(v_174, v_173)) goto v_137;
    else goto v_138;
v_137:
    v_173 = stack[-5];
    if (!car_legal(v_173)) v_173 = carerror(v_173); else
    v_173 = car(v_173);
    if (!car_legal(v_173)) v_173 = carerror(v_173); else
    v_173 = car(v_173);
    if (!car_legal(v_173)) v_173 = cdrerror(v_173); else
    v_173 = cdr(v_173);
    goto v_136;
v_138:
    v_173 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_136;
    v_173 = nil;
v_136:
    v_173 = ncons(v_173);
    env = stack[-7];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_173);
    v_173 = stack[-1];
    if (!car_legal(v_173)) v_173 = cdrerror(v_173); else
    v_173 = cdr(v_173);
    stack[-1] = v_173;
    goto v_94;
v_93:
    {   LispObject fn = basic_elt(env, 2); // addgt
    v_173 = (*qfn1(fn))(fn, v_173);
    }
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 3); // pdmult
    v_173 = (*qfn2(fn))(fn, stack[-4], v_173);
    }
    env = stack[-7];
    stack[0] = v_173;
    goto v_73;
v_75:
    v_173 = stack[-5];
    if (!car_legal(v_173)) v_173 = carerror(v_173); else
    v_173 = car(v_173);
    if (!car_legal(v_173)) v_174 = cdrerror(v_173); else
    v_174 = cdr(v_173);
    v_173 = qvalue(basic_elt(env, 1)); // varlist!*
    {   LispObject fn = basic_elt(env, 0); // !*f2di
    stack[0] = (*qfn2(fn))(fn, v_174, v_173);
    }
    env = stack[-7];
    v_173 = stack[-5];
    if (!car_legal(v_173)) v_173 = carerror(v_173); else
    v_173 = car(v_173);
    if (!car_legal(v_173)) v_174 = carerror(v_173); else
    v_174 = car(v_173);
    v_173 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_173 = cons(v_174, v_173);
    env = stack[-7];
    v_173 = ncons(v_173);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 4); // pcmult
    v_173 = (*qfn2(fn))(fn, stack[0], v_173);
    }
    env = stack[-7];
    stack[0] = v_173;
    goto v_73;
    stack[0] = nil;
v_73:
    v_173 = stack[-5];
    if (!car_legal(v_173)) v_174 = cdrerror(v_173); else
    v_174 = cdr(v_173);
    v_173 = qvalue(basic_elt(env, 1)); // varlist!*
    {   LispObject fn = basic_elt(env, 0); // !*f2di
    v_173 = (*qfn2(fn))(fn, v_174, v_173);
    }
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 5); // psum
    v_173 = (*qfn2(fn))(fn, stack[0], v_173);
    }
    goto v_12;
    v_173 = nil;
v_12:
    ;}  // end of a binding scope
    return onevalue(v_173);
}



// Code for msolve!-polyn

static LispObject CC_msolveKpolyn(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_163, v_164, v_165;
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
    v_163 = stack[-8];
    if (!car_legal(v_163)) v_163 = carerror(v_163); else
    v_163 = car(v_163);
    stack[-10] = v_163;
    v_163 = stack[-8];
    if (!car_legal(v_163)) v_163 = cdrerror(v_163); else
    v_163 = cdr(v_163);
    if (v_163 == nil) goto v_10;
    else goto v_11;
v_10:
    v_164 = stack[-9];
    v_163 = stack[-8];
    if (!car_legal(v_163)) v_163 = carerror(v_163); else
    v_163 = car(v_163);
    {
        LispObject fn = basic_elt(env, 2); // msolve!-poly1
        return (*qfn2(fn))(fn, v_164, v_163);
    }
v_11:
    v_163 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-7] = v_163;
v_25:
    v_163 = qvalue(basic_elt(env, 1)); // current!-modulus
    v_164 = sub1(v_163);
    env = stack[-11];
    v_163 = stack[-7];
    v_163 = difference2(v_164, v_163);
    env = stack[-11];
    v_163 = Lminusp(nil, v_163);
    env = stack[-11];
    if (v_163 == nil) goto v_31;
    v_163 = nil;
    goto v_24;
v_31:
    stack[0] = stack[-9];
    v_164 = stack[-10];
    v_163 = stack[-7];
    v_163 = cons(v_164, v_163);
    env = stack[-11];
    v_163 = ncons(v_163);
    env = stack[-11];
    {   LispObject fn = basic_elt(env, 3); // subf
    v_163 = (*qfn2(fn))(fn, stack[0], v_163);
    }
    env = stack[-11];
    if (!car_legal(v_163)) v_164 = carerror(v_163); else
    v_164 = car(v_163);
    v_163 = stack[-8];
    if (!car_legal(v_163)) v_163 = cdrerror(v_163); else
    v_163 = cdr(v_163);
    {   LispObject fn = basic_elt(env, 0); // msolve!-polyn
    v_163 = (*qfn2(fn))(fn, v_164, v_163);
    }
    env = stack[-11];
    stack[-3] = v_163;
    v_163 = stack[-3];
    if (v_163 == nil) goto v_56;
    else goto v_57;
v_56:
    v_163 = nil;
    goto v_42;
v_57:
    v_163 = stack[-3];
    if (!car_legal(v_163)) v_163 = carerror(v_163); else
    v_163 = car(v_163);
    v_165 = stack[-10];
    v_164 = stack[-7];
    v_163 = acons(v_165, v_164, v_163);
    env = stack[-11];
    v_163 = ncons(v_163);
    env = stack[-11];
    stack[-1] = v_163;
    stack[-2] = v_163;
v_43:
    v_163 = stack[-3];
    if (!car_legal(v_163)) v_163 = cdrerror(v_163); else
    v_163 = cdr(v_163);
    stack[-3] = v_163;
    v_163 = stack[-3];
    if (v_163 == nil) goto v_72;
    else goto v_73;
v_72:
    v_163 = stack[-2];
    goto v_42;
v_73:
    stack[0] = stack[-1];
    v_163 = stack[-3];
    if (!car_legal(v_163)) v_163 = carerror(v_163); else
    v_163 = car(v_163);
    v_165 = stack[-10];
    v_164 = stack[-7];
    v_163 = acons(v_165, v_164, v_163);
    env = stack[-11];
    v_163 = ncons(v_163);
    env = stack[-11];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_163);
    v_163 = stack[-1];
    if (!car_legal(v_163)) v_163 = cdrerror(v_163); else
    v_163 = cdr(v_163);
    stack[-1] = v_163;
    goto v_43;
v_42:
    stack[-6] = v_163;
    v_163 = stack[-6];
    {   LispObject fn = basic_elt(env, 4); // lastpair
    v_163 = (*qfn1(fn))(fn, v_163);
    }
    env = stack[-11];
    stack[-5] = v_163;
    v_163 = stack[-7];
    v_163 = add1(v_163);
    env = stack[-11];
    stack[-7] = v_163;
    v_163 = stack[-5];
    if (!consp(v_163)) goto v_94;
    else goto v_95;
v_94:
    goto v_25;
v_95:
v_26:
    v_163 = qvalue(basic_elt(env, 1)); // current!-modulus
    v_164 = sub1(v_163);
    env = stack[-11];
    v_163 = stack[-7];
    v_163 = difference2(v_164, v_163);
    env = stack[-11];
    v_163 = Lminusp(nil, v_163);
    env = stack[-11];
    if (v_163 == nil) goto v_100;
    v_163 = stack[-6];
    goto v_24;
v_100:
    stack[-4] = stack[-5];
    stack[0] = stack[-9];
    v_164 = stack[-10];
    v_163 = stack[-7];
    v_163 = cons(v_164, v_163);
    env = stack[-11];
    v_163 = ncons(v_163);
    env = stack[-11];
    {   LispObject fn = basic_elt(env, 3); // subf
    v_163 = (*qfn2(fn))(fn, stack[0], v_163);
    }
    env = stack[-11];
    if (!car_legal(v_163)) v_164 = carerror(v_163); else
    v_164 = car(v_163);
    v_163 = stack[-8];
    if (!car_legal(v_163)) v_163 = cdrerror(v_163); else
    v_163 = cdr(v_163);
    {   LispObject fn = basic_elt(env, 0); // msolve!-polyn
    v_163 = (*qfn2(fn))(fn, v_164, v_163);
    }
    env = stack[-11];
    stack[-3] = v_163;
    v_163 = stack[-3];
    if (v_163 == nil) goto v_126;
    else goto v_127;
v_126:
    v_163 = nil;
    goto v_112;
v_127:
    v_163 = stack[-3];
    if (!car_legal(v_163)) v_163 = carerror(v_163); else
    v_163 = car(v_163);
    v_165 = stack[-10];
    v_164 = stack[-7];
    v_163 = acons(v_165, v_164, v_163);
    env = stack[-11];
    v_163 = ncons(v_163);
    env = stack[-11];
    stack[-1] = v_163;
    stack[-2] = v_163;
v_113:
    v_163 = stack[-3];
    if (!car_legal(v_163)) v_163 = cdrerror(v_163); else
    v_163 = cdr(v_163);
    stack[-3] = v_163;
    v_163 = stack[-3];
    if (v_163 == nil) goto v_142;
    else goto v_143;
v_142:
    v_163 = stack[-2];
    goto v_112;
v_143:
    stack[0] = stack[-1];
    v_163 = stack[-3];
    if (!car_legal(v_163)) v_163 = carerror(v_163); else
    v_163 = car(v_163);
    v_165 = stack[-10];
    v_164 = stack[-7];
    v_163 = acons(v_165, v_164, v_163);
    env = stack[-11];
    v_163 = ncons(v_163);
    env = stack[-11];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_163);
    v_163 = stack[-1];
    if (!car_legal(v_163)) v_163 = cdrerror(v_163); else
    v_163 = cdr(v_163);
    stack[-1] = v_163;
    goto v_113;
v_112:
    if (!car_legal(stack[-4])) rplacd_fails(stack[-4]);
    setcdr(stack[-4], v_163);
    v_163 = stack[-5];
    {   LispObject fn = basic_elt(env, 4); // lastpair
    v_163 = (*qfn1(fn))(fn, v_163);
    }
    env = stack[-11];
    stack[-5] = v_163;
    v_163 = stack[-7];
    v_163 = add1(v_163);
    env = stack[-11];
    stack[-7] = v_163;
    goto v_26;
v_24:
    goto v_9;
    v_163 = nil;
v_9:
    return onevalue(v_163);
}



// Code for reduce!-mod!-eigf

static LispObject CC_reduceKmodKeigf(LispObject env,
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
    stack[-1] = v_3;
    v_24 = v_2;
// end of prologue
    v_25 = qvalue(basic_elt(env, 1)); // !*sub2
// Binding !*sub2
// FLUIDBIND: reloadenv=3 litvec-offset=1 saveloc=2
{   bind_fluid_stack bind_fluid_var(-3, 1, -2);
    setvalue(basic_elt(env, 1), v_25); // !*sub2
    v_25 = v_24;
    if (!car_legal(v_25)) v_25 = carerror(v_25); else
    v_25 = car(v_25);
    if (!car_legal(v_25)) stack[0] = carerror(v_25); else
    stack[0] = car(v_25);
    v_25 = v_24;
    if (!car_legal(v_25)) v_25 = cdrerror(v_25); else
    v_25 = cdr(v_25);
    if (!car_legal(v_24)) v_24 = carerror(v_24); else
    v_24 = car(v_24);
    if (!car_legal(v_24)) v_24 = cdrerror(v_24); else
    v_24 = cdr(v_24);
    v_24 = cons(v_25, v_24);
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 2); // cancel
    v_24 = (*qfn1(fn))(fn, v_24);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 3); // negsq
    v_24 = (*qfn1(fn))(fn, v_24);
    }
    env = stack[-3];
    v_25 = cons(stack[0], v_24);
    env = stack[-3];
    v_24 = stack[-1];
    {   LispObject fn = basic_elt(env, 4); // reduce!-eival!-powers
    v_24 = (*qfn2(fn))(fn, v_25, v_24);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 5); // subs2
    v_24 = (*qfn1(fn))(fn, v_24);
    }
    ;}  // end of a binding scope
    return onevalue(v_24);
}



// Code for ra_u

static LispObject CC_ra_u(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // ra_iv
    v_7 = (*qfn1(fn))(fn, v_7);
    }
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // riv_u
        return (*qfn1(fn))(fn, v_7);
    }
}



// Code for vdp_putprop

static LispObject CC_vdp_putprop(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_37, v_38, v_39, v_40, v_41;
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
    v_39 = v_4;
    v_40 = v_3;
    stack[0] = v_2;
// end of prologue
    v_37 = stack[0];
    if (!car_legal(v_37)) v_37 = cdrerror(v_37); else
    v_37 = cdr(v_37);
    if (!car_legal(v_37)) v_37 = cdrerror(v_37); else
    v_37 = cdr(v_37);
    if (!car_legal(v_37)) v_37 = cdrerror(v_37); else
    v_37 = cdr(v_37);
    if (!car_legal(v_37)) v_37 = cdrerror(v_37); else
    v_37 = cdr(v_37);
    v_38 = v_37;
    v_41 = v_40;
    v_37 = v_38;
    if (!car_legal(v_37)) v_37 = carerror(v_37); else
    v_37 = car(v_37);
    v_37 = Latsoc(nil, v_41, v_37);
    v_41 = v_37;
    v_37 = v_41;
    if (v_37 == nil) goto v_22;
    v_37 = v_41;
    v_38 = v_39;
    if (!car_legal(v_37)) rplacd_fails(v_37);
    setcdr(v_37, v_38);
    goto v_20;
v_22:
    stack[-1] = v_38;
    v_37 = v_40;
    if (!car_legal(v_38)) v_38 = carerror(v_38); else
    v_38 = car(v_38);
    v_37 = acons(v_37, v_39, v_38);
    if (!car_legal(stack[-1])) rplaca_fails(stack[-1]);
    setcar(stack[-1], v_37);
    goto v_20;
v_20:
    v_37 = stack[0];
    return onevalue(v_37);
}



// Code for listrd

static LispObject CC_listrd(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    push(nil, nil);
    stack_popper stack_popper_var(3);
// end of prologue
    v_14 = qvalue(basic_elt(env, 1)); // atts
    v_13 = basic_elt(env, 2); // (order)
    {   LispObject fn = basic_elt(env, 4); // retattributes
    v_13 = (*qfn2(fn))(fn, v_14, v_13);
    }
    env = stack[-2];
    stack[-1] = basic_elt(env, 3); // list
    stack[0] = v_13;
    {   LispObject fn = basic_elt(env, 5); // stats_getargs
    v_13 = (*qfn0(fn))(fn);
    }
    {
        LispObject v_17 = stack[-1];
        LispObject v_18 = stack[0];
        return list2star(v_17, v_18, v_13);
    }
    return onevalue(v_13);
}



// Code for ps!:sqrt!-erule

static LispObject CC_psTsqrtKerule(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_101, v_102, v_103;
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
    v_101 = v_2;
// end of prologue
    if (!car_legal(v_101)) v_101 = cdrerror(v_101); else
    v_101 = cdr(v_101);
    if (!car_legal(v_101)) v_101 = carerror(v_101); else
    v_101 = car(v_101);
    stack[-8] = v_101;
    v_102 = nil;
    v_101 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_101 = cons(v_102, v_101);
    env = stack[-9];
    stack[0] = v_101;
    v_101 = stack[-8];
    {   LispObject fn = basic_elt(env, 3); // ps!:order
    v_101 = (*qfn1(fn))(fn, v_101);
    }
    env = stack[-9];
    stack[-5] = v_101;
    v_101 = qvalue(basic_elt(env, 1)); // ps
    {   LispObject fn = basic_elt(env, 3); // ps!:order
    v_101 = (*qfn1(fn))(fn, v_101);
    }
    env = stack[-9];
    stack[-6] = v_101;
    v_102 = stack[-7];
    v_101 = stack[-6];
    if (equal(v_102, v_101)) goto v_23;
    else goto v_24;
v_23:
    v_102 = stack[-8];
    v_101 = stack[-5];
    {   LispObject fn = basic_elt(env, 4); // ps!:evaluate
    v_101 = (*qfn2(fn))(fn, v_102, v_101);
    }
    env = stack[-9];
    {   LispObject fn = basic_elt(env, 5); // prepsqxx
    v_102 = (*qfn1(fn))(fn, v_101);
    }
    env = stack[-9];
    v_101 = basic_elt(env, 2); // (quotient 1 2)
    v_101 = list2(v_102, v_101);
    env = stack[-9];
    {
        LispObject fn = basic_elt(env, 6); // simpexpt
        return (*qfn1(fn))(fn, v_101);
    }
v_24:
    v_101 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-4] = v_101;
v_37:
    v_102 = stack[-7];
    v_101 = stack[-6];
    v_102 = difference2(v_102, v_101);
    env = stack[-9];
    v_101 = stack[-4];
    v_101 = difference2(v_102, v_101);
    env = stack[-9];
    v_101 = Lminusp(nil, v_101);
    env = stack[-9];
    if (v_101 == nil) goto v_42;
    goto v_36;
v_42:
    stack[-3] = stack[0];
    v_102 = stack[-4];
    v_101 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    stack[0] = times2(v_102, v_101);
    env = stack[-9];
    v_102 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_101 = stack[-7];
    v_101 = times2(v_102, v_101);
    env = stack[-9];
    v_102 = difference2(stack[0], v_101);
    env = stack[-9];
    v_101 = stack[-5];
    v_101 = plus2(v_102, v_101);
    env = stack[-9];
    v_103 = v_101;
    v_102 = v_103;
    v_101 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_102 == v_101) goto v_66;
    else goto v_67;
v_66:
    v_101 = nil;
    v_102 = v_101;
    goto v_65;
v_67:
    v_101 = v_103;
    v_102 = v_101;
    goto v_65;
    v_102 = nil;
v_65:
    v_101 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-2] = cons(v_102, v_101);
    env = stack[-9];
    stack[0] = stack[-8];
    v_102 = stack[-4];
    v_101 = stack[-5];
    v_101 = plus2(v_102, v_101);
    env = stack[-9];
    {   LispObject fn = basic_elt(env, 4); // ps!:evaluate
    stack[-1] = (*qfn2(fn))(fn, stack[0], v_101);
    }
    env = stack[-9];
    stack[0] = qvalue(basic_elt(env, 1)); // ps
    v_102 = stack[-7];
    v_101 = stack[-4];
    v_101 = difference2(v_102, v_101);
    env = stack[-9];
    {   LispObject fn = basic_elt(env, 4); // ps!:evaluate
    v_101 = (*qfn2(fn))(fn, stack[0], v_101);
    }
    env = stack[-9];
    {   LispObject fn = basic_elt(env, 7); // multsq
    v_101 = (*qfn2(fn))(fn, stack[-1], v_101);
    }
    env = stack[-9];
    {   LispObject fn = basic_elt(env, 7); // multsq
    v_101 = (*qfn2(fn))(fn, stack[-2], v_101);
    }
    env = stack[-9];
    {   LispObject fn = basic_elt(env, 8); // addsq
    v_101 = (*qfn2(fn))(fn, stack[-3], v_101);
    }
    env = stack[-9];
    stack[0] = v_101;
    v_101 = stack[-4];
    v_101 = add1(v_101);
    env = stack[-9];
    stack[-4] = v_101;
    goto v_37;
v_36:
    stack[-1] = stack[0];
    stack[0] = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_102 = stack[-7];
    v_101 = stack[-6];
    v_101 = difference2(v_102, v_101);
    env = stack[-9];
    v_102 = times2(stack[0], v_101);
    env = stack[-9];
    v_101 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[0] = cons(v_102, v_101);
    env = stack[-9];
    v_102 = stack[-8];
    v_101 = stack[-5];
    {   LispObject fn = basic_elt(env, 4); // ps!:evaluate
    v_101 = (*qfn2(fn))(fn, v_102, v_101);
    }
    env = stack[-9];
    {   LispObject fn = basic_elt(env, 7); // multsq
    v_101 = (*qfn2(fn))(fn, stack[0], v_101);
    }
    env = stack[-9];
    {
        LispObject v_113 = stack[-1];
        LispObject fn = basic_elt(env, 9); // quotsq
        return (*qfn2(fn))(fn, v_113, v_101);
    }
    return onevalue(v_101);
}



// Code for resume

static LispObject CC_resume(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_29, v_30, v_31;
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
    v_30 = v_3;
    v_31 = v_2;
// end of prologue
    v_29 = v_30;
    if (v_29 == nil) goto v_8;
    v_29 = v_30;
    if (!car_legal(v_29)) v_29 = carerror(v_29); else
    v_29 = car(v_29);
    if (!car_legal(v_29)) stack[-2] = carerror(v_29); else
    stack[-2] = car(v_29);
    v_29 = v_30;
    if (!car_legal(v_29)) v_29 = carerror(v_29); else
    v_29 = car(v_29);
    if (!car_legal(v_29)) v_29 = cdrerror(v_29); else
    v_29 = cdr(v_29);
    if (!car_legal(v_29)) stack[-1] = carerror(v_29); else
    stack[-1] = car(v_29);
    stack[0] = v_31;
    v_29 = v_30;
    if (!car_legal(v_29)) v_29 = cdrerror(v_29); else
    v_29 = cdr(v_29);
    v_29 = ncons(v_29);
    env = stack[-3];
    {
        LispObject v_35 = stack[-2];
        LispObject v_36 = stack[-1];
        LispObject v_37 = stack[0];
        LispObject fn = basic_elt(env, 2); // amatch
        return (*qfn4up(fn))(fn, v_35, v_36, v_37, v_29);
    }
v_8:
    v_29 = v_31;
    {   LispObject fn = basic_elt(env, 3); // chk
    v_30 = (*qfn1(fn))(fn, v_29);
    }
    env = stack[-3];
    v_29 = lisp_true;
    if (v_30 == v_29) goto v_22;
    else goto v_23;
v_22:
    v_29 = qvalue(basic_elt(env, 1)); // substitution
    {
        LispObject fn = basic_elt(env, 4); // bsubs
        return (*qfn1(fn))(fn, v_29);
    }
v_23:
    v_29 = nil;
    return onevalue(v_29);
}



// Code for evinvlexcomp

static LispObject CC_evinvlexcomp(LispObject env,
                         LispObject v_2, LispObject v_3)
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
v_7:
    v_65 = stack[-1];
    if (v_65 == nil) goto v_10;
    else goto v_11;
v_10:
    v_65 = stack[0];
    if (v_65 == nil) goto v_15;
    else goto v_16;
v_15:
    v_65 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_6;
v_16:
    v_65 = basic_elt(env, 1); // (0)
    stack[-1] = v_65;
    goto v_7;
    goto v_9;
v_11:
    v_65 = stack[0];
    if (v_65 == nil) goto v_22;
    else goto v_23;
v_22:
    v_66 = stack[-1];
    v_65 = basic_elt(env, 1); // (0)
    {
        LispObject fn = basic_elt(env, 2); // evlexcomp
        return (*qfn2(fn))(fn, v_66, v_65);
    }
v_23:
    v_65 = stack[-1];
    if (!car_legal(v_65)) v_66 = carerror(v_65); else
    v_66 = car(v_65);
    v_65 = stack[0];
    if (!car_legal(v_65)) v_65 = carerror(v_65); else
    v_65 = car(v_65);
    {   LispObject fn = basic_elt(env, 3); // iequal
    v_65 = (*qfn2(fn))(fn, v_66, v_65);
    }
    env = stack[-3];
    if (v_65 == nil) goto v_29;
    v_65 = stack[-1];
    if (!car_legal(v_65)) v_65 = cdrerror(v_65); else
    v_65 = cdr(v_65);
    stack[-1] = v_65;
    v_65 = stack[0];
    if (!car_legal(v_65)) v_65 = cdrerror(v_65); else
    v_65 = cdr(v_65);
    stack[0] = v_65;
    goto v_7;
v_29:
    v_65 = stack[-1];
    if (!car_legal(v_65)) v_66 = cdrerror(v_65); else
    v_66 = cdr(v_65);
    v_65 = stack[0];
    if (!car_legal(v_65)) v_65 = cdrerror(v_65); else
    v_65 = cdr(v_65);
    {   LispObject fn = basic_elt(env, 0); // evinvlexcomp
    v_65 = (*qfn2(fn))(fn, v_66, v_65);
    }
    env = stack[-3];
    stack[-2] = v_65;
    v_66 = stack[-2];
    v_65 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {   LispObject fn = basic_elt(env, 3); // iequal
    v_65 = (*qfn2(fn))(fn, v_66, v_65);
    }
    if (v_65 == nil) goto v_49;
    else goto v_50;
v_49:
    v_65 = stack[-2];
    goto v_48;
v_50:
    v_65 = stack[0];
    if (!car_legal(v_65)) v_66 = carerror(v_65); else
    v_66 = car(v_65);
    v_65 = stack[-1];
    if (!car_legal(v_65)) v_65 = carerror(v_65); else
    v_65 = car(v_65);
    if ((static_cast<std::intptr_t>(v_66) > static_cast<std::intptr_t>(v_65))) goto v_55;
    else goto v_56;
v_55:
    v_65 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_48;
v_56:
    v_65 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    goto v_48;
    v_65 = nil;
v_48:
    goto v_6;
v_9:
    v_65 = nil;
v_6:
    return onevalue(v_65);
}



// Code for vdpilcomb1

static LispObject CC_vdpilcomb1(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_48, v_49, v_50;
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
    push(nil, nil);
    stack_popper stack_popper_var(8);
// copy arguments values to proper place
    stack[-2] = v_7;
    v_49 = v_6;
    stack[-3] = v_5;
    stack[-4] = v_4;
    v_50 = v_3;
    stack[-5] = v_2;
// end of prologue
    v_48 = stack[-5];
    if (!car_legal(v_48)) v_48 = cdrerror(v_48); else
    v_48 = cdr(v_48);
    if (!car_legal(v_48)) v_48 = cdrerror(v_48); else
    v_48 = cdr(v_48);
    if (!car_legal(v_48)) v_48 = cdrerror(v_48); else
    v_48 = cdr(v_48);
    if (!car_legal(v_48)) stack[-6] = carerror(v_48); else
    stack[-6] = car(v_48);
    stack[-1] = v_50;
    stack[0] = stack[-4];
    v_48 = stack[-3];
    if (!car_legal(v_48)) v_48 = cdrerror(v_48); else
    v_48 = cdr(v_48);
    if (!car_legal(v_48)) v_48 = cdrerror(v_48); else
    v_48 = cdr(v_48);
    if (!car_legal(v_48)) v_48 = cdrerror(v_48); else
    v_48 = cdr(v_48);
    if (!car_legal(v_48)) v_50 = carerror(v_48); else
    v_50 = car(v_48);
    v_48 = stack[-2];
    v_48 = list3(v_50, v_49, v_48);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 2); // dipilcomb1
    v_48 = (*qfn4up(fn))(fn, stack[-6], stack[-1], stack[0], v_48);
    }
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 3); // dip2vdp
    v_48 = (*qfn1(fn))(fn, v_48);
    }
    env = stack[-7];
    stack[-1] = v_48;
    v_48 = qvalue(basic_elt(env, 1)); // !*gsugar
    if (v_48 == nil) goto v_32;
    stack[0] = stack[-1];
    v_48 = stack[-5];
    {   LispObject fn = basic_elt(env, 4); // gsugar
    stack[-5] = (*qfn1(fn))(fn, v_48);
    }
    env = stack[-7];
    v_48 = stack[-4];
    {   LispObject fn = basic_elt(env, 5); // vevtdeg
    v_48 = (*qfn1(fn))(fn, v_48);
    }
    env = stack[-7];
    stack[-4] = plus2(stack[-5], v_48);
    env = stack[-7];
    v_48 = stack[-3];
    {   LispObject fn = basic_elt(env, 4); // gsugar
    stack[-3] = (*qfn1(fn))(fn, v_48);
    }
    env = stack[-7];
    v_48 = stack[-2];
    {   LispObject fn = basic_elt(env, 5); // vevtdeg
    v_48 = (*qfn1(fn))(fn, v_48);
    }
    env = stack[-7];
    v_48 = plus2(stack[-3], v_48);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 6); // max
    v_48 = (*qfn2(fn))(fn, stack[-4], v_48);
    }
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 7); // gsetsugar
    v_48 = (*qfn2(fn))(fn, stack[0], v_48);
    }
    goto v_30;
v_32:
v_30:
    v_48 = stack[-1];
    return onevalue(v_48);
}



// Code for unplus

static LispObject CC_unplus(LispObject env,
                         LispObject v_2)
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
    v_58 = nil;
v_7:
    v_56 = stack[-1];
    if (!consp(v_56)) goto v_10;
    else goto v_11;
v_10:
    v_57 = v_58;
    v_56 = stack[-1];
    {
        LispObject fn = basic_elt(env, 2); // nreverse
        return (*qfn2(fn))(fn, v_57, v_56);
    }
v_11:
    v_56 = stack[-1];
    if (!car_legal(v_56)) v_57 = carerror(v_56); else
    v_57 = car(v_56);
    v_56 = basic_elt(env, 1); // plus
    if (v_57 == v_56) goto v_16;
    else goto v_17;
v_16:
    v_56 = stack[-1];
    if (!car_legal(v_56)) v_56 = cdrerror(v_56); else
    v_56 = cdr(v_56);
    stack[-1] = v_56;
    goto v_7;
v_17:
    v_56 = stack[-1];
    if (!car_legal(v_56)) v_56 = carerror(v_56); else
    v_56 = car(v_56);
    if (!consp(v_56)) goto v_27;
    else goto v_28;
v_27:
    v_56 = lisp_true;
    goto v_26;
v_28:
    v_56 = stack[-1];
    if (!car_legal(v_56)) v_57 = carerror(v_56); else
    v_57 = car(v_56);
    v_56 = basic_elt(env, 1); // plus
    v_56 = Leqcar(nil, v_57, v_56);
    env = stack[-3];
    v_56 = (v_56 == nil ? lisp_true : nil);
    goto v_26;
    v_56 = nil;
v_26:
    if (v_56 == nil) goto v_24;
    v_56 = stack[-1];
    if (!car_legal(v_56)) v_56 = carerror(v_56); else
    v_56 = car(v_56);
    v_57 = v_58;
    v_56 = cons(v_56, v_57);
    env = stack[-3];
    v_58 = v_56;
    v_56 = stack[-1];
    if (!car_legal(v_56)) v_56 = cdrerror(v_56); else
    v_56 = cdr(v_56);
    stack[-1] = v_56;
    goto v_7;
v_24:
    stack[-2] = v_58;
    v_56 = stack[-1];
    if (!car_legal(v_56)) v_56 = carerror(v_56); else
    v_56 = car(v_56);
    if (!car_legal(v_56)) stack[0] = cdrerror(v_56); else
    stack[0] = cdr(v_56);
    v_56 = stack[-1];
    if (!car_legal(v_56)) v_56 = cdrerror(v_56); else
    v_56 = cdr(v_56);
    {   LispObject fn = basic_elt(env, 0); // unplus
    v_56 = (*qfn1(fn))(fn, v_56);
    }
    env = stack[-3];
    v_56 = Lappend_2(nil, stack[0], v_56);
    env = stack[-3];
    {
        LispObject v_62 = stack[-2];
        LispObject fn = basic_elt(env, 2); // nreverse
        return (*qfn2(fn))(fn, v_62, v_56);
    }
    v_56 = nil;
    return onevalue(v_56);
}



// Code for !*!*a2i

static LispObject CC_HHa2i(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_18 = v_3;
    stack[0] = v_2;
// end of prologue
    v_19 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // intexprnp
    v_18 = (*qfn2(fn))(fn, v_19, v_18);
    }
    env = stack[-1];
    if (v_18 == nil) goto v_8;
    v_18 = stack[0];
    goto v_6;
v_8:
    v_19 = basic_elt(env, 1); // ieval
    v_18 = stack[0];
    return list2(v_19, v_18);
    v_18 = nil;
v_6:
    return onevalue(v_18);
}



// Code for dv_ind2var

static LispObject CC_dv_ind2var(LispObject env,
                         LispObject v_2)
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
    stack[-1] = stack[0];
    v_21 = qvalue(basic_elt(env, 1)); // g_dvnames
    {   LispObject fn = basic_elt(env, 3); // upbve
    v_21 = (*qfn1(fn))(fn, v_21);
    }
    env = stack[-2];
    v_21 = static_cast<LispObject>(lesseq2(stack[-1], v_21));
    v_21 = v_21 ? lisp_true : nil;
    env = stack[-2];
    if (v_21 == nil) goto v_7;
    stack[-1] = qvalue(basic_elt(env, 1)); // g_dvnames
    v_21 = stack[0];
    v_21 = sub1(v_21);
    {
        LispObject v_25 = stack[-1];
        return Lgetv(nil, v_25, v_21);
    }
v_7:
    v_22 = qvalue(basic_elt(env, 2)); // g_dvbase
    v_21 = stack[0];
    {
        LispObject fn = basic_elt(env, 4); // mkid
        return (*qfn2(fn))(fn, v_22, v_21);
    }
    v_21 = nil;
    return onevalue(v_21);
}



// Code for lalr_warn_shift_reduce_conflict

static LispObject CC_lalr_warn_shift_reduce_conflict(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_44;
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
    v_44 = Lposn(nil);
    env = stack[-3];
    v_44 = static_cast<LispObject>(zerop(v_44));
    v_44 = v_44 ? lisp_true : nil;
    env = stack[-3];
    if (v_44 == nil) goto v_8;
    else goto v_9;
v_8:
    v_44 = Lterpri(nil);
    env = stack[-3];
    goto v_7;
v_9:
v_7:
    v_44 = basic_elt(env, 1); // "+++ Shift/reduce conflict in itemset #"
    v_44 = Lprinc(nil, v_44);
    env = stack[-3];
    v_44 = stack[0];
    v_44 = Lprin(nil, v_44);
    env = stack[-3];
    v_44 = basic_elt(env, 2); // " on lookahead "
    v_44 = Lprinc(nil, v_44);
    env = stack[-3];
    v_44 = stack[-2];
    if (!car_legal(v_44)) v_44 = carerror(v_44); else
    v_44 = car(v_44);
    {   LispObject fn = basic_elt(env, 6); // lalr_prin_symbol
    v_44 = (*qfn1(fn))(fn, v_44);
    }
    env = stack[-3];
    v_44 = Lterpri(nil);
    env = stack[-3];
    v_44 = basic_elt(env, 3); // "Reduce: "
    v_44 = Lprinc(nil, v_44);
    env = stack[-3];
    v_44 = stack[-1];
    if (!car_legal(v_44)) v_44 = cdrerror(v_44); else
    v_44 = cdr(v_44);
    if (!car_legal(v_44)) v_44 = carerror(v_44); else
    v_44 = car(v_44);
    if (!car_legal(v_44)) v_44 = cdrerror(v_44); else
    v_44 = cdr(v_44);
    if (!car_legal(v_44)) v_44 = carerror(v_44); else
    v_44 = car(v_44);
    {   LispObject fn = basic_elt(env, 7); // lalr_prin_production
    v_44 = (*qfn1(fn))(fn, v_44);
    }
    env = stack[-3];
    v_44 = Lterpri(nil);
    env = stack[-3];
    v_44 = basic_elt(env, 4); // "Shift: to state #"
    v_44 = Lprinc(nil, v_44);
    env = stack[-3];
    v_44 = stack[-2];
    if (!car_legal(v_44)) v_44 = cdrerror(v_44); else
    v_44 = cdr(v_44);
    if (!car_legal(v_44)) v_44 = carerror(v_44); else
    v_44 = car(v_44);
    if (!car_legal(v_44)) v_44 = cdrerror(v_44); else
    v_44 = cdr(v_44);
    if (!car_legal(v_44)) v_44 = carerror(v_44); else
    v_44 = car(v_44);
    v_44 = Lprin(nil, v_44);
    env = stack[-3];
    v_44 = Lterpri(nil);
    env = stack[-3];
    v_44 = basic_elt(env, 5); // "Resolved in favour of the shift operation"
    v_44 = Lprintc(nil, v_44);
        return Lterpri(nil);
}



// Code for dvfsf_v

static LispObject CC_dvfsf_v(LispObject env,
                         LispObject v_2)
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
        push(v_2);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_21 = v_2;
// end of prologue
    v_22 = v_21;
    v_21 = qvalue(basic_elt(env, 1)); // dvfsf_p!*
    {   LispObject fn = basic_elt(env, 2); // qremf
    v_21 = (*qfn2(fn))(fn, v_22, v_21);
    }
    env = stack[0];
    v_22 = v_21;
    v_21 = v_22;
    if (!car_legal(v_21)) v_21 = cdrerror(v_21); else
    v_21 = cdr(v_21);
    if (v_21 == nil) goto v_10;
    else goto v_11;
v_10:
    v_21 = v_22;
    if (!car_legal(v_21)) v_21 = carerror(v_21); else
    v_21 = car(v_21);
    {   LispObject fn = basic_elt(env, 0); // dvfsf_v
    v_21 = (*qfn1(fn))(fn, v_21);
    }
    return add1(v_21);
v_11:
    v_21 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_9;
    v_21 = nil;
v_9:
    return onevalue(v_21);
}



// Code for plusdf

static LispObject CC_plusdf(LispObject env,
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    stack[-1] = v_3;
    stack[-2] = v_2;
// end of prologue
    stack[0] = nil;
v_8:
    v_85 = stack[-2];
    if (v_85 == nil) goto v_11;
    else goto v_12;
v_11:
    v_86 = stack[0];
    v_85 = stack[-1];
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn2(fn))(fn, v_86, v_85);
    }
v_12:
    v_85 = stack[-1];
    if (v_85 == nil) goto v_17;
    else goto v_18;
v_17:
    v_86 = stack[0];
    v_85 = stack[-2];
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn2(fn))(fn, v_86, v_85);
    }
v_18:
    v_85 = stack[-2];
    if (!car_legal(v_85)) v_85 = carerror(v_85); else
    v_85 = car(v_85);
    if (!car_legal(v_85)) v_86 = carerror(v_85); else
    v_86 = car(v_85);
    v_85 = stack[-1];
    if (!car_legal(v_85)) v_85 = carerror(v_85); else
    v_85 = car(v_85);
    if (!car_legal(v_85)) v_85 = carerror(v_85); else
    v_85 = car(v_85);
    if (equal(v_86, v_85)) goto v_23;
    else goto v_24;
v_23:
    stack[-3] = stack[0];
    v_85 = stack[-2];
    if (!car_legal(v_85)) v_85 = carerror(v_85); else
    v_85 = car(v_85);
    if (!car_legal(v_85)) v_86 = cdrerror(v_85); else
    v_86 = cdr(v_85);
    v_85 = stack[-1];
    if (!car_legal(v_85)) v_85 = carerror(v_85); else
    v_85 = car(v_85);
    if (!car_legal(v_85)) v_85 = cdrerror(v_85); else
    v_85 = cdr(v_85);
    {   LispObject fn = basic_elt(env, 2); // !*addsq
    stack[0] = (*qfn2(fn))(fn, v_86, v_85);
    }
    env = stack[-4];
    v_85 = stack[-2];
    if (!car_legal(v_85)) v_86 = cdrerror(v_85); else
    v_86 = cdr(v_85);
    v_85 = stack[-1];
    if (!car_legal(v_85)) v_85 = cdrerror(v_85); else
    v_85 = cdr(v_85);
    {   LispObject fn = basic_elt(env, 0); // plusdf
    v_85 = (*qfn2(fn))(fn, v_86, v_85);
    }
    env = stack[-4];
    v_86 = stack[0];
    v_87 = v_86;
    if (!car_legal(v_87)) v_87 = carerror(v_87); else
    v_87 = car(v_87);
    if (v_87 == nil) goto v_49;
    else goto v_50;
v_49:
    goto v_48;
v_50:
    v_87 = stack[-2];
    if (!car_legal(v_87)) v_87 = carerror(v_87); else
    v_87 = car(v_87);
    if (!car_legal(v_87)) v_87 = carerror(v_87); else
    v_87 = car(v_87);
    v_85 = acons(v_87, v_86, v_85);
    env = stack[-4];
    goto v_48;
    v_85 = nil;
v_48:
    {
        LispObject v_92 = stack[-3];
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn2(fn))(fn, v_92, v_85);
    }
v_24:
    v_85 = stack[-2];
    if (!car_legal(v_85)) v_85 = carerror(v_85); else
    v_85 = car(v_85);
    if (!car_legal(v_85)) v_86 = carerror(v_85); else
    v_86 = car(v_85);
    v_85 = stack[-1];
    if (!car_legal(v_85)) v_85 = carerror(v_85); else
    v_85 = car(v_85);
    if (!car_legal(v_85)) v_85 = carerror(v_85); else
    v_85 = car(v_85);
    {   LispObject fn = basic_elt(env, 3); // orddf
    v_85 = (*qfn2(fn))(fn, v_86, v_85);
    }
    env = stack[-4];
    if (v_85 == nil) goto v_63;
    v_85 = stack[-2];
    if (!car_legal(v_85)) v_86 = carerror(v_85); else
    v_86 = car(v_85);
    v_85 = stack[0];
    v_85 = cons(v_86, v_85);
    env = stack[-4];
    stack[0] = v_85;
    v_85 = stack[-2];
    if (!car_legal(v_85)) v_85 = cdrerror(v_85); else
    v_85 = cdr(v_85);
    stack[-2] = v_85;
    goto v_8;
v_63:
    v_85 = stack[-1];
    if (!car_legal(v_85)) v_86 = carerror(v_85); else
    v_86 = car(v_85);
    v_85 = stack[0];
    v_85 = cons(v_86, v_85);
    env = stack[-4];
    stack[0] = v_85;
    v_85 = stack[-1];
    if (!car_legal(v_85)) v_85 = cdrerror(v_85); else
    v_85 = cdr(v_85);
    stack[-1] = v_85;
    goto v_8;
    v_85 = nil;
    return onevalue(v_85);
}



// Code for get!*inverse

static LispObject CC_getHinverse(LispObject env,
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
    v_20 = v_3;
    v_19 = v_2;
// end of prologue
    v_21 = v_19;
    v_19 = basic_elt(env, 1); // inverse
    v_19 = get(v_21, v_19);
    env = stack[-1];
    v_21 = v_19;
    v_19 = v_21;
    if (!car_legal(v_19)) v_19 = cdrerror(v_19); else
    v_19 = cdr(v_19);
    if (!car_legal(v_19)) stack[0] = carerror(v_19); else
    stack[0] = car(v_19);
    v_19 = v_20;
    v_20 = v_21;
    if (!car_legal(v_20)) v_20 = carerror(v_20); else
    v_20 = car(v_20);
    {   LispObject fn = basic_elt(env, 2); // give!*position
    v_19 = (*qfn2(fn))(fn, v_19, v_20);
    }
    env = stack[-1];
    {
        LispObject v_23 = stack[0];
        LispObject fn = basic_elt(env, 3); // nth
        return (*qfn2(fn))(fn, v_23, v_19);
    }
    return onevalue(v_19);
}



// Code for cgp_lbc

static LispObject CC_cgp_lbc(LispObject env,
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
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // dip_lbc
        return (*qfn1(fn))(fn, v_7);
    }
}



// Code for getargsrd

static LispObject CC_getargsrd(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil);
    stack_popper stack_popper_var(2);
// end of prologue
    v_18 = qvalue(basic_elt(env, 1)); // char
    v_17 = basic_elt(env, 2); // (b v a r)
    if (equal(v_18, v_17)) goto v_8;
    else goto v_9;
v_8:
    {   LispObject fn = basic_elt(env, 3); // bvarrd
    v_17 = (*qfn0(fn))(fn);
    }
    env = stack[-1];
    stack[0] = v_17;
    {   LispObject fn = basic_elt(env, 4); // lex
    v_17 = (*qfn0(fn))(fn);
    }
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 0); // getargsrd
    v_17 = (*qfn0(fn))(fn);
    }
    {
        LispObject v_20 = stack[0];
        return cons(v_20, v_17);
    }
v_9:
    v_17 = nil;
    return onevalue(v_17);
}



// Code for valuecoefft

static LispObject CC_valuecoefft(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_39, v_40, v_41, v_42, v_43;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_41 = v_4;
    v_42 = v_3;
    v_43 = v_2;
// end of prologue
v_8:
    v_39 = v_41;
    if (v_39 == nil) goto v_11;
    else goto v_12;
v_11:
    v_39 = basic_elt(env, 1); // "Valuecoefft - no value"
    {
        LispObject fn = basic_elt(env, 2); // interr
        return (*qfn1(fn))(fn, v_39);
    }
v_12:
    v_40 = v_43;
    v_39 = v_41;
    if (!car_legal(v_39)) v_39 = carerror(v_39); else
    v_39 = car(v_39);
    if (v_40 == v_39) goto v_16;
    else goto v_17;
v_16:
    v_39 = v_42;
    if (!car_legal(v_39)) v_40 = carerror(v_39); else
    v_40 = car(v_39);
    v_39 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_40 == v_39) goto v_23;
    else goto v_24;
v_23:
    v_39 = nil;
    goto v_7;
v_24:
    v_39 = v_42;
    if (!car_legal(v_39)) v_39 = carerror(v_39); else
    v_39 = car(v_39);
    goto v_7;
    goto v_10;
v_17:
    v_39 = v_42;
    if (!car_legal(v_39)) v_39 = cdrerror(v_39); else
    v_39 = cdr(v_39);
    v_42 = v_39;
    v_39 = v_41;
    if (!car_legal(v_39)) v_39 = cdrerror(v_39); else
    v_39 = cdr(v_39);
    v_41 = v_39;
    goto v_8;
v_10:
    v_39 = nil;
v_7:
    return onevalue(v_39);
}



// Code for evaluate

static LispObject CC_evaluate(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(8);
// copy arguments values to proper place
    v_47 = v_4;
    v_48 = v_3;
    stack[-5] = v_2;
// end of prologue
// Binding !*evaluateerror
// FLUIDBIND: reloadenv=7 litvec-offset=1 saveloc=4
{   bind_fluid_stack bind_fluid_var(-7, 1, -4);
    setvalue(basic_elt(env, 1), nil); // !*evaluateerror
    v_46 = qvalue(basic_elt(env, 2)); // !*protfg
    v_46 = (v_46 == nil ? lisp_true : nil);
    stack[-3] = v_46;
    v_46 = v_48;
    {   LispObject fn = basic_elt(env, 6); // pair
    v_46 = (*qfn2(fn))(fn, v_46, v_47);
    }
    env = stack[-7];
    stack[-6] = v_46;
    v_47 = nil;
    v_46 = lisp_true;
// Binding !*msg
// FLUIDBIND: reloadenv=7 litvec-offset=3 saveloc=2
{   bind_fluid_stack bind_fluid_var(-7, 3, -2);
    setvalue(basic_elt(env, 3), v_47); // !*msg
// Binding !*protfg
// FLUIDBIND: reloadenv=7 litvec-offset=2 saveloc=1
{   bind_fluid_stack bind_fluid_var(-7, 2, -1);
    setvalue(basic_elt(env, 2), v_46); // !*protfg
    stack[0] = basic_elt(env, 4); // evaluate0
    v_46 = stack[-5];
    stack[-5] = Lmkquote(nil, v_46);
    env = stack[-7];
    v_46 = stack[-6];
    v_46 = Lmkquote(nil, v_46);
    env = stack[-7];
    v_48 = list3(stack[0], stack[-5], v_46);
    env = stack[-7];
    v_47 = stack[-3];
    v_46 = nil;
    {   LispObject fn = basic_elt(env, 7); // errorset
    v_46 = (*qfn3(fn))(fn, v_48, v_47, v_46);
    }
    env = stack[-7];
    stack[0] = v_46;
    ;}  // end of a binding scope
    ;}  // end of a binding scope
    v_46 = stack[0];
    {   LispObject fn = basic_elt(env, 8); // errorp
    v_46 = (*qfn1(fn))(fn, v_46);
    }
    env = stack[-7];
    if (v_46 == nil) goto v_38;
    v_46 = basic_elt(env, 5); // "error during function evaluation (e.g. singularity)"
    {   LispObject fn = basic_elt(env, 9); // rederr
    v_46 = (*qfn1(fn))(fn, v_46);
    }
    goto v_36;
v_38:
v_36:
    v_46 = stack[0];
    if (!car_legal(v_46)) v_46 = carerror(v_46); else
    v_46 = car(v_46);
    ;}  // end of a binding scope
    return onevalue(v_46);
}



// Code for assert_procstat!-argl

static LispObject CC_assert_procstatKargl(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// end of prologue
    stack[0] = nil;
v_11:
    v_111 = qvalue(basic_elt(env, 1)); // cursym!*
    v_110 = basic_elt(env, 2); // !*rpar!*
    if (v_111 == v_110) goto v_14;
    else goto v_15;
v_14:
    goto v_10;
v_15:
    {   LispObject fn = basic_elt(env, 12); // eolcheck
    v_110 = (*qfn0(fn))(fn);
    }
    env = stack[-3];
    v_110 = qvalue(basic_elt(env, 1)); // cursym!*
    if (symbolp(v_110)) goto v_23;
    v_111 = basic_elt(env, 3); // "Expecting identifier but found"
    v_110 = qvalue(basic_elt(env, 1)); // cursym!*
    v_110 = list2(v_111, v_110);
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 13); // assert_rederr
    v_110 = (*qfn1(fn))(fn, v_110);
    }
    env = stack[-3];
    goto v_21;
v_23:
v_21:
    v_110 = qvalue(basic_elt(env, 1)); // cursym!*
    stack[-2] = v_110;
    {   LispObject fn = basic_elt(env, 14); // scan
    v_110 = (*qfn0(fn))(fn);
    }
    env = stack[-3];
    v_111 = qvalue(basic_elt(env, 1)); // cursym!*
    v_110 = basic_elt(env, 4); // !*colon!*
    if (v_111 == v_110) goto v_33;
    else goto v_34;
v_33:
    {   LispObject fn = basic_elt(env, 14); // scan
    v_110 = (*qfn0(fn))(fn);
    }
    env = stack[-3];
    v_110 = qvalue(basic_elt(env, 1)); // cursym!*
    {   LispObject fn = basic_elt(env, 15); // assert_typesyntaxp
    v_110 = (*qfn1(fn))(fn, v_110);
    }
    env = stack[-3];
    if (v_110 == nil) goto v_40;
    else goto v_41;
v_40:
    v_111 = basic_elt(env, 5); // "Expecting type but found"
    v_110 = qvalue(basic_elt(env, 1)); // cursym!*
    v_110 = list2(v_111, v_110);
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 13); // assert_rederr
    v_110 = (*qfn1(fn))(fn, v_110);
    }
    env = stack[-3];
    goto v_39;
v_41:
v_39:
    v_110 = qvalue(basic_elt(env, 1)); // cursym!*
    stack[-1] = v_110;
    {   LispObject fn = basic_elt(env, 14); // scan
    v_110 = (*qfn0(fn))(fn);
    }
    env = stack[-3];
    v_110 = stack[-1];
    goto v_32;
v_34:
    v_110 = nil;
v_32:
    v_112 = stack[-2];
    v_111 = v_110;
    v_110 = stack[0];
    v_110 = acons(v_112, v_111, v_110);
    env = stack[-3];
    stack[0] = v_110;
    v_111 = qvalue(basic_elt(env, 1)); // cursym!*
    v_110 = basic_elt(env, 6); // (!*comma!* !*rpar!*)
    v_110 = Lmemq(nil, v_111, v_110);
    if (v_110 == nil) goto v_57;
    else goto v_58;
v_57:
    v_111 = basic_elt(env, 7); // "Expecting ',' or ')' but found"
    v_110 = qvalue(basic_elt(env, 1)); // cursym!*
    v_110 = list2(v_111, v_110);
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 13); // assert_rederr
    v_110 = (*qfn1(fn))(fn, v_110);
    }
    env = stack[-3];
    goto v_56;
v_58:
v_56:
    v_111 = qvalue(basic_elt(env, 1)); // cursym!*
    v_110 = basic_elt(env, 8); // !*comma!*
    if (v_111 == v_110) goto v_68;
    else goto v_69;
v_68:
    {   LispObject fn = basic_elt(env, 14); // scan
    v_110 = (*qfn0(fn))(fn);
    }
    env = stack[-3];
    goto v_67;
v_69:
v_67:
    goto v_11;
v_10:
    v_111 = qvalue(basic_elt(env, 9)); // nxtsym!*
    v_110 = basic_elt(env, 4); // !*colon!*
    if (v_111 == v_110) goto v_80;
    else goto v_81;
v_80:
    v_110 = lisp_true;
    goto v_79;
v_81:
    v_111 = qvalue(basic_elt(env, 9)); // nxtsym!*
    v_110 = basic_elt(env, 10); // !:
    v_110 = (v_111 == v_110 ? lisp_true : nil);
    goto v_79;
    v_110 = nil;
v_79:
    if (v_110 == nil) goto v_77;
    {   LispObject fn = basic_elt(env, 14); // scan
    v_110 = (*qfn0(fn))(fn);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 14); // scan
    v_110 = (*qfn0(fn))(fn);
    }
    env = stack[-3];
    v_110 = qvalue(basic_elt(env, 1)); // cursym!*
    {   LispObject fn = basic_elt(env, 15); // assert_typesyntaxp
    v_110 = (*qfn1(fn))(fn, v_110);
    }
    env = stack[-3];
    if (v_110 == nil) goto v_94;
    else goto v_95;
v_94:
    v_111 = basic_elt(env, 5); // "Expecting type but found"
    v_110 = qvalue(basic_elt(env, 1)); // cursym!*
    v_110 = list2(v_111, v_110);
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 13); // assert_rederr
    v_110 = (*qfn1(fn))(fn, v_110);
    }
    env = stack[-3];
    goto v_93;
v_95:
v_93:
    v_110 = qvalue(basic_elt(env, 1)); // cursym!*
    goto v_75;
v_77:
    v_110 = nil;
v_75:
    v_112 = basic_elt(env, 11); // returnvalue
    v_111 = v_110;
    v_110 = stack[0];
    v_110 = acons(v_112, v_111, v_110);
    stack[0] = v_110;
    v_110 = stack[0];
        return Lnreverse(nil, v_110);
    return onevalue(v_110);
}



// Code for ad_splitname

static LispObject CC_ad_splitname(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    v_57 = v_2;
// end of prologue
    v_56 = v_57;
    if (symbolp(v_56)) goto v_6;
    else goto v_7;
v_6:
    stack[0] = nil;
    v_56 = v_57;
    v_56 = Lexplode(nil, v_56);
    env = stack[-2];
    v_56 = Lreverse(nil, v_56);
    env = stack[-2];
    stack[-1] = v_56;
v_18:
    v_56 = stack[-1];
    if (v_56 == nil) goto v_21;
    v_56 = stack[-1];
    if (!car_legal(v_56)) v_56 = carerror(v_56); else
    v_56 = car(v_56);
    {   LispObject fn = basic_elt(env, 1); // charnump!:
    v_56 = (*qfn1(fn))(fn, v_56);
    }
    env = stack[-2];
    if (v_56 == nil) goto v_21;
    goto v_22;
v_21:
    goto v_17;
v_22:
    v_56 = stack[-1];
    if (!car_legal(v_56)) v_57 = carerror(v_56); else
    v_57 = car(v_56);
    v_56 = stack[0];
    v_56 = cons(v_57, v_56);
    env = stack[-2];
    stack[0] = v_56;
    v_56 = stack[-1];
    if (!car_legal(v_56)) v_56 = cdrerror(v_56); else
    v_56 = cdr(v_56);
    stack[-1] = v_56;
    goto v_18;
v_17:
    v_56 = stack[-1];
    if (v_56 == nil) goto v_40;
    v_56 = stack[-1];
    v_56 = Lreverse(nil, v_56);
    env = stack[-2];
    v_56 = Lcompress(nil, v_56);
    env = stack[-2];
    v_56 = Lintern(nil, v_56);
    env = stack[-2];
    stack[-1] = v_56;
    goto v_38;
v_40:
v_38:
    v_56 = stack[0];
    if (v_56 == nil) goto v_49;
    v_56 = stack[0];
    v_56 = Lcompress(nil, v_56);
    stack[0] = v_56;
    goto v_47;
v_49:
v_47:
    v_57 = stack[-1];
    v_56 = stack[0];
    return cons(v_57, v_56);
    goto v_5;
v_7:
    v_56 = nil;
v_5:
    return onevalue(v_56);
}



// Code for difbf

static LispObject CC_difbf(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_136, v_137, v_138;
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
    stack[-6] = v_3;
    stack[-7] = v_2;
// end of prologue
    v_136 = stack[-7];
    if (!car_legal(v_136)) v_136 = cdrerror(v_136); else
    v_136 = cdr(v_136);
    if (!car_legal(v_136)) v_137 = carerror(v_136); else
    v_137 = car(v_136);
    stack[-8] = v_137;
    v_136 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_137 == v_136) goto v_16;
    else goto v_17;
v_16:
    v_136 = stack[-6];
    {   LispObject fn = basic_elt(env, 3); // minus!:
    v_136 = (*qfn1(fn))(fn, v_136);
    }
    env = stack[-9];
    goto v_13;
v_17:
    v_136 = stack[-6];
    if (!car_legal(v_136)) v_136 = cdrerror(v_136); else
    v_136 = cdr(v_136);
    if (!car_legal(v_136)) v_137 = carerror(v_136); else
    v_137 = car(v_136);
    stack[-5] = v_137;
    v_136 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_137 == v_136) goto v_26;
    else goto v_27;
v_26:
    v_136 = stack[-7];
    goto v_13;
v_27:
    v_136 = stack[-7];
    if (!car_legal(v_136)) v_136 = cdrerror(v_136); else
    v_136 = cdr(v_136);
    if (!car_legal(v_136)) v_137 = cdrerror(v_136); else
    v_137 = cdr(v_136);
    stack[-4] = v_137;
    v_136 = stack[-6];
    if (!car_legal(v_136)) v_136 = cdrerror(v_136); else
    v_136 = cdr(v_136);
    if (!car_legal(v_136)) v_136 = cdrerror(v_136); else
    v_136 = cdr(v_136);
    stack[-3] = v_136;
    v_137 = difference2(v_137, v_136);
    env = stack[-9];
    stack[-2] = v_137;
    v_136 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_137 == v_136) goto v_35;
    else goto v_36;
v_35:
    stack[0] = basic_elt(env, 1); // !:rd!:
    v_137 = stack[-8];
    v_136 = stack[-5];
    v_137 = difference2(v_137, v_136);
    env = stack[-9];
    v_136 = stack[-4];
    v_136 = list2star(stack[0], v_137, v_136);
    env = stack[-9];
    goto v_13;
v_36:
    stack[-1] = stack[-2];
    v_136 = stack[-8];
    v_136 = Labsval(nil, v_136);
    env = stack[-9];
    {   LispObject fn = basic_elt(env, 4); // msd
    stack[0] = (*qfn1(fn))(fn, v_136);
    }
    env = stack[-9];
    v_136 = stack[-5];
    v_136 = Labsval(nil, v_136);
    env = stack[-9];
    {   LispObject fn = basic_elt(env, 4); // msd
    v_136 = (*qfn1(fn))(fn, v_136);
    }
    env = stack[-9];
    v_136 = difference2(stack[0], v_136);
    env = stack[-9];
    v_136 = plus2(stack[-1], v_136);
    env = stack[-9];
    stack[-1] = v_136;
    v_136 = qvalue(basic_elt(env, 2)); // !:bprec!:
    v_136 = add1(v_136);
    env = stack[-9];
    stack[0] = v_136;
    v_137 = stack[-1];
    v_136 = stack[0];
    v_136 = static_cast<LispObject>(greaterp2(v_137, v_136));
    v_136 = v_136 ? lisp_true : nil;
    env = stack[-9];
    if (v_136 == nil) goto v_65;
    v_136 = stack[-7];
    goto v_13;
v_65:
    v_136 = stack[0];
    v_136 = negate(v_136);
    env = stack[-9];
    v_136 = static_cast<LispObject>(lessp2(stack[-1], v_136));
    v_136 = v_136 ? lisp_true : nil;
    env = stack[-9];
    if (v_136 == nil) goto v_73;
    v_136 = stack[-6];
    {   LispObject fn = basic_elt(env, 3); // minus!:
    v_136 = (*qfn1(fn))(fn, v_136);
    }
    env = stack[-9];
    goto v_13;
v_73:
    v_137 = stack[-2];
    v_136 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_136 = static_cast<LispObject>(greaterp2(v_137, v_136));
    v_136 = v_136 ? lisp_true : nil;
    env = stack[-9];
    if (v_136 == nil) goto v_83;
    stack[0] = basic_elt(env, 1); // !:rd!:
    v_137 = stack[-8];
    v_136 = stack[-2];
    {   LispObject fn = basic_elt(env, 5); // ashift
    v_137 = (*qfn2(fn))(fn, v_137, v_136);
    }
    env = stack[-9];
    v_136 = stack[-5];
    v_137 = difference2(v_137, v_136);
    env = stack[-9];
    v_136 = stack[-3];
    v_136 = list2star(stack[0], v_137, v_136);
    env = stack[-9];
    goto v_13;
v_83:
    stack[0] = basic_elt(env, 1); // !:rd!:
    stack[-1] = stack[-8];
    stack[-3] = stack[-5];
    v_136 = stack[-2];
    v_136 = negate(v_136);
    env = stack[-9];
    {   LispObject fn = basic_elt(env, 5); // ashift
    v_136 = (*qfn2(fn))(fn, stack[-3], v_136);
    }
    env = stack[-9];
    v_137 = difference2(stack[-1], v_136);
    env = stack[-9];
    v_136 = stack[-4];
    v_136 = list2star(stack[0], v_137, v_136);
    env = stack[-9];
    goto v_13;
    v_136 = nil;
v_13:
    stack[-2] = v_136;
    v_136 = stack[-2];
    if (!car_legal(v_136)) v_136 = cdrerror(v_136); else
    v_136 = cdr(v_136);
    if (!car_legal(v_136)) v_136 = carerror(v_136); else
    v_136 = car(v_136);
    v_138 = v_136;
    v_137 = v_138;
    v_136 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_137 == v_136) goto v_115;
    else goto v_116;
v_115:
    v_138 = basic_elt(env, 1); // !:rd!:
    v_137 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_136 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    return list2star(v_138, v_137, v_136);
v_116:
    v_137 = v_138;
    v_136 = qvalue(basic_elt(env, 2)); // !:bprec!:
    {   LispObject fn = basic_elt(env, 6); // inorm
    v_136 = (*qfn2(fn))(fn, v_137, v_136);
    }
    env = stack[-9];
    v_138 = v_136;
    stack[-1] = basic_elt(env, 1); // !:rd!:
    v_136 = v_138;
    if (!car_legal(v_136)) stack[0] = carerror(v_136); else
    stack[0] = car(v_136);
    v_136 = v_138;
    if (!car_legal(v_136)) v_137 = cdrerror(v_136); else
    v_137 = cdr(v_136);
    v_136 = stack[-2];
    if (!car_legal(v_136)) v_136 = cdrerror(v_136); else
    v_136 = cdr(v_136);
    if (!car_legal(v_136)) v_136 = cdrerror(v_136); else
    v_136 = cdr(v_136);
    v_136 = plus2(v_137, v_136);
    {
        LispObject v_148 = stack[-1];
        LispObject v_149 = stack[0];
        return list2star(v_148, v_149, v_136);
    }
    return onevalue(v_136);
}



// Code for order_of_der_mind

static LispObject CC_order_of_der_mind(LispObject env,
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
    if (!car_legal(v_8)) v_8 = carerror(v_8); else
    v_8 = car(v_8);
    {
        LispObject fn = basic_elt(env, 1); // length_multiindex
        return (*qfn1(fn))(fn, v_8);
    }
}



// Code for lalr_get_lex_codes

static LispObject CC_lalr_get_lex_codes(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_43, v_44;
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
    v_43 = v_2;
// end of prologue
    stack[-1] = nil;
    stack[0] = v_43;
v_12:
    v_43 = stack[0];
    if (v_43 == nil) goto v_16;
    else goto v_17;
v_16:
    goto v_11;
v_17:
    v_43 = stack[0];
    if (!car_legal(v_43)) v_43 = carerror(v_43); else
    v_43 = car(v_43);
    v_44 = v_43;
    v_43 = v_44;
    v_43 = Lstringp(nil, v_43);
    env = stack[-2];
    if (v_43 == nil) goto v_26;
    v_43 = stack[-1];
    v_43 = cons(v_44, v_43);
    env = stack[-2];
    stack[-1] = v_43;
    goto v_24;
v_26:
v_24:
    v_43 = stack[0];
    if (!car_legal(v_43)) v_43 = cdrerror(v_43); else
    v_43 = cdr(v_43);
    stack[0] = v_43;
    goto v_12;
v_11:
    {   LispObject fn = basic_elt(env, 2); // lex_save_context
    v_43 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
    stack[0] = v_43;
    {   LispObject fn = basic_elt(env, 3); // lex_cleanup
    v_43 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
    v_43 = stack[-1];
    {   LispObject fn = basic_elt(env, 4); // lex_keywords
    v_43 = (*qfn1(fn))(fn, v_43);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 2); // lex_save_context
    v_43 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
    setvalue(basic_elt(env, 1), v_43); // lex_context
    {   LispObject fn = basic_elt(env, 5); // lex_export_codes
    v_43 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
    stack[-1] = v_43;
    v_43 = stack[0];
    {   LispObject fn = basic_elt(env, 6); // lex_restore_context
    v_43 = (*qfn1(fn))(fn, v_43);
    }
    v_43 = stack[-1];
    return onevalue(v_43);
}



// Code for polynomcompare

static LispObject CC_polynomcompare(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_74, v_75, v_76;
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
    v_75 = v_3;
    v_74 = v_2;
// end of prologue
    stack[-1] = v_74;
    v_74 = v_75;
    stack[0] = v_74;
v_15:
    v_74 = stack[-1];
    if (!car_legal(v_74)) v_74 = carerror(v_74); else
    v_74 = car(v_74);
    if (v_74 == nil) goto v_18;
    v_74 = stack[0];
    if (!car_legal(v_74)) v_74 = carerror(v_74); else
    v_74 = car(v_74);
    if (v_74 == nil) goto v_18;
    goto v_19;
v_18:
    goto v_14;
v_19:
    v_74 = stack[-1];
    if (!car_legal(v_74)) v_75 = carerror(v_74); else
    v_75 = car(v_74);
    v_74 = stack[0];
    if (!car_legal(v_74)) v_74 = carerror(v_74); else
    v_74 = car(v_74);
    {   LispObject fn = basic_elt(env, 1); // monomcompare
    v_74 = (*qfn2(fn))(fn, v_75, v_74);
    }
    env = stack[-2];
    v_76 = v_74;
    v_75 = v_76;
    v_74 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_75 == v_74) goto v_34;
    else goto v_35;
v_34:
    v_74 = nil;
    v_74 = ncons(v_74);
    env = stack[-2];
    stack[0] = v_74;
    goto v_33;
v_35:
    v_75 = v_76;
    v_74 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    if (v_75 == v_74) goto v_41;
    else goto v_42;
v_41:
    v_74 = nil;
    v_74 = ncons(v_74);
    env = stack[-2];
    stack[-1] = v_74;
    goto v_33;
v_42:
    v_74 = stack[-1];
    if (!car_legal(v_74)) v_74 = cdrerror(v_74); else
    v_74 = cdr(v_74);
    stack[-1] = v_74;
    v_74 = stack[0];
    if (!car_legal(v_74)) v_74 = cdrerror(v_74); else
    v_74 = cdr(v_74);
    stack[0] = v_74;
    goto v_33;
v_33:
    goto v_15;
v_14:
    v_74 = stack[-1];
    if (!car_legal(v_74)) v_74 = carerror(v_74); else
    v_74 = car(v_74);
    if (v_74 == nil) goto v_59;
    v_74 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_9;
v_59:
    v_74 = stack[0];
    if (!car_legal(v_74)) v_74 = carerror(v_74); else
    v_74 = car(v_74);
    if (v_74 == nil) goto v_65;
    v_74 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    goto v_9;
v_65:
    v_74 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_9;
    v_74 = nil;
v_9:
    return onevalue(v_74);
}



// Code for ofsf_smcpknowl

static LispObject CC_ofsf_smcpknowl(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_51, v_52;
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
    v_51 = v_2;
// end of prologue
    stack[-4] = v_51;
    v_51 = stack[-4];
    if (v_51 == nil) goto v_13;
    else goto v_14;
v_13:
    v_51 = nil;
    goto v_8;
v_14:
    v_51 = stack[-4];
    if (!car_legal(v_51)) v_51 = carerror(v_51); else
    v_51 = car(v_51);
    v_52 = v_51;
    v_51 = v_52;
    if (!car_legal(v_51)) stack[0] = carerror(v_51); else
    stack[0] = car(v_51);
    v_51 = v_52;
    if (!car_legal(v_51)) v_52 = cdrerror(v_51); else
    v_52 = cdr(v_51);
    v_51 = nil;
    v_51 = Lappend_2(nil, v_52, v_51);
    env = stack[-5];
    v_51 = cons(stack[0], v_51);
    env = stack[-5];
    v_51 = ncons(v_51);
    env = stack[-5];
    stack[-2] = v_51;
    stack[-3] = v_51;
v_9:
    v_51 = stack[-4];
    if (!car_legal(v_51)) v_51 = cdrerror(v_51); else
    v_51 = cdr(v_51);
    stack[-4] = v_51;
    v_51 = stack[-4];
    if (v_51 == nil) goto v_32;
    else goto v_33;
v_32:
    v_51 = stack[-3];
    goto v_8;
v_33:
    stack[-1] = stack[-2];
    v_51 = stack[-4];
    if (!car_legal(v_51)) v_51 = carerror(v_51); else
    v_51 = car(v_51);
    v_52 = v_51;
    v_51 = v_52;
    if (!car_legal(v_51)) stack[0] = carerror(v_51); else
    stack[0] = car(v_51);
    v_51 = v_52;
    if (!car_legal(v_51)) v_52 = cdrerror(v_51); else
    v_52 = cdr(v_51);
    v_51 = nil;
    v_51 = Lappend_2(nil, v_52, v_51);
    env = stack[-5];
    v_51 = cons(stack[0], v_51);
    env = stack[-5];
    v_51 = ncons(v_51);
    env = stack[-5];
    if (!car_legal(stack[-1])) rplacd_fails(stack[-1]);
    setcdr(stack[-1], v_51);
    v_51 = stack[-2];
    if (!car_legal(v_51)) v_51 = cdrerror(v_51); else
    v_51 = cdr(v_51);
    stack[-2] = v_51;
    goto v_9;
v_8:
    return onevalue(v_51);
}



// Code for multdf

static LispObject CC_multdf(LispObject env,
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
    if (v_45 == nil) goto v_11;
    else goto v_12;
v_11:
    v_45 = lisp_true;
    goto v_10;
v_12:
    v_45 = stack[0];
    v_45 = (v_45 == nil ? lisp_true : nil);
    goto v_10;
    v_45 = nil;
v_10:
    if (v_45 == nil) goto v_8;
    v_45 = nil;
    goto v_6;
v_8:
    v_45 = stack[-1];
    if (!car_legal(v_45)) v_46 = carerror(v_45); else
    v_46 = car(v_45);
    v_45 = stack[0];
    if (!car_legal(v_45)) v_45 = carerror(v_45); else
    v_45 = car(v_45);
    {   LispObject fn = basic_elt(env, 1); // multerm
    v_45 = (*qfn2(fn))(fn, v_46, v_45);
    }
    env = stack[-3];
    stack[-2] = v_45;
    v_45 = stack[-1];
    if (!car_legal(v_45)) v_46 = cdrerror(v_45); else
    v_46 = cdr(v_45);
    v_45 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // multdf
    v_45 = (*qfn2(fn))(fn, v_46, v_45);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 2); // plusdf
    v_45 = (*qfn2(fn))(fn, stack[-2], v_45);
    }
    env = stack[-3];
    stack[-2] = v_45;
    v_45 = stack[-1];
    if (!car_legal(v_45)) v_45 = carerror(v_45); else
    v_45 = car(v_45);
    v_46 = ncons(v_45);
    env = stack[-3];
    v_45 = stack[0];
    if (!car_legal(v_45)) v_45 = cdrerror(v_45); else
    v_45 = cdr(v_45);
    {   LispObject fn = basic_elt(env, 0); // multdf
    v_45 = (*qfn2(fn))(fn, v_46, v_45);
    }
    env = stack[-3];
    {
        LispObject v_50 = stack[-2];
        LispObject fn = basic_elt(env, 2); // plusdf
        return (*qfn2(fn))(fn, v_50, v_45);
    }
    goto v_6;
    v_45 = nil;
v_6:
    return onevalue(v_45);
}



// Code for talp_specsub

static LispObject CC_talp_specsub(LispObject env,
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
    real_push(nil, nil, nil, nil, nil);
    real_push(nil);
    stack_popper stack_popper_var(7);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-4] = v_2;
// end of prologue
    v_84 = stack[0];
    v_83 = basic_elt(env, 1); // true
    if (v_84 == v_83) goto v_15;
    else goto v_16;
v_15:
    v_83 = lisp_true;
    goto v_14;
v_16:
    v_84 = stack[0];
    v_83 = basic_elt(env, 2); // false
    v_83 = (v_84 == v_83 ? lisp_true : nil);
    goto v_14;
    v_83 = nil;
v_14:
    if (v_83 == nil) goto v_12;
    v_83 = stack[0];
    goto v_8;
v_12:
    v_83 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // talp_atfp
    v_83 = (*qfn1(fn))(fn, v_83);
    }
    env = stack[-6];
    if (v_83 == nil) goto v_29;
    v_83 = stack[-4];
    if (!car_legal(v_83)) v_85 = carerror(v_83); else
    v_85 = car(v_83);
    v_83 = stack[-4];
    if (!car_legal(v_83)) v_84 = cdrerror(v_83); else
    v_84 = cdr(v_83);
    v_83 = stack[0];
    {
        LispObject fn = basic_elt(env, 4); // talp_specsubat
        return (*qfn3(fn))(fn, v_85, v_84, v_83);
    }
v_29:
    v_83 = stack[0];
    {   LispObject fn = basic_elt(env, 5); // talp_op
    v_83 = (*qfn1(fn))(fn, v_83);
    }
    env = stack[-6];
    stack[-5] = v_83;
    v_83 = stack[0];
    {   LispObject fn = basic_elt(env, 6); // talp_argl
    v_83 = (*qfn1(fn))(fn, v_83);
    }
    env = stack[-6];
    stack[-3] = v_83;
    v_83 = stack[-3];
    if (v_83 == nil) goto v_52;
    else goto v_53;
v_52:
    v_83 = nil;
    goto v_46;
v_53:
    v_83 = stack[-3];
    if (!car_legal(v_83)) v_83 = carerror(v_83); else
    v_83 = car(v_83);
    v_84 = stack[-4];
    {   LispObject fn = basic_elt(env, 0); // talp_specsub
    v_83 = (*qfn2(fn))(fn, v_84, v_83);
    }
    env = stack[-6];
    v_83 = ncons(v_83);
    env = stack[-6];
    stack[-1] = v_83;
    stack[-2] = v_83;
v_47:
    v_83 = stack[-3];
    if (!car_legal(v_83)) v_83 = cdrerror(v_83); else
    v_83 = cdr(v_83);
    stack[-3] = v_83;
    v_83 = stack[-3];
    if (v_83 == nil) goto v_67;
    else goto v_68;
v_67:
    v_83 = stack[-2];
    goto v_46;
v_68:
    stack[0] = stack[-1];
    v_83 = stack[-3];
    if (!car_legal(v_83)) v_83 = carerror(v_83); else
    v_83 = car(v_83);
    v_84 = stack[-4];
    {   LispObject fn = basic_elt(env, 0); // talp_specsub
    v_83 = (*qfn2(fn))(fn, v_84, v_83);
    }
    env = stack[-6];
    v_83 = ncons(v_83);
    env = stack[-6];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_83);
    v_83 = stack[-1];
    if (!car_legal(v_83)) v_83 = cdrerror(v_83); else
    v_83 = cdr(v_83);
    stack[-1] = v_83;
    goto v_47;
v_46:
    {
        LispObject v_92 = stack[-5];
        return cons(v_92, v_83);
    }
v_8:
    return onevalue(v_83);
}



// Code for ithlistelem

static LispObject CC_ithlistelem(LispObject env,
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
// space for vars preserved across procedure calls
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    v_21 = stack[-1];
    if (v_21 == nil) goto v_10;
    v_21 = stack[-1];
    if (!car_legal(v_21)) v_22 = carerror(v_21); else
    v_22 = car(v_21);
    v_21 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // nth
    stack[-2] = (*qfn2(fn))(fn, v_22, v_21);
    }
    env = stack[-3];
    v_21 = stack[-1];
    if (!car_legal(v_21)) v_22 = cdrerror(v_21); else
    v_22 = cdr(v_21);
    v_21 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // ithlistelem
    v_21 = (*qfn2(fn))(fn, v_22, v_21);
    }
    {
        LispObject v_26 = stack[-2];
        return cons(v_26, v_21);
    }
v_10:
    v_21 = nil;
    return onevalue(v_21);
}



// Code for maxl

static LispObject CC_maxl(LispObject env,
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
    stack[-1] = nil;
v_8:
    v_35 = stack[0];
    if (v_35 == nil) goto v_13;
    else goto v_14;
v_13:
    goto v_9;
v_14:
    v_35 = stack[0];
    if (!car_legal(v_35)) v_36 = carerror(v_35); else
    v_36 = car(v_35);
    v_35 = stack[-1];
    v_35 = cons(v_36, v_35);
    env = stack[-2];
    stack[-1] = v_35;
    v_35 = stack[0];
    if (!car_legal(v_35)) v_35 = cdrerror(v_35); else
    v_35 = cdr(v_35);
    stack[0] = v_35;
    goto v_8;
v_9:
    v_35 = static_cast<LispObject>(-160000)+TAG_FIXNUM; // -10000
    v_36 = v_35;
v_10:
    v_35 = stack[-1];
    if (v_35 == nil) goto v_25;
    else goto v_26;
v_25:
    v_35 = v_36;
    goto v_7;
v_26:
    v_35 = stack[-1];
    v_35 = car(v_35);
    {   LispObject fn = basic_elt(env, 1); // max
    v_35 = (*qfn2(fn))(fn, v_35, v_36);
    }
    env = stack[-2];
    v_36 = v_35;
    v_35 = stack[-1];
    v_35 = cdr(v_35);
    stack[-1] = v_35;
    goto v_10;
v_7:
    return onevalue(v_35);
}



// Code for sc_subtrsq

static LispObject CC_sc_subtrsq(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // negsq
    v_9 = (*qfn1(fn))(fn, v_9);
    }
    env = stack[-1];
    {
        LispObject v_12 = stack[0];
        LispObject fn = basic_elt(env, 2); // addsq
        return (*qfn2(fn))(fn, v_12, v_9);
    }
}



// Code for getrlist

static LispObject CC_getrlist(LispObject env,
                         LispObject v_2)
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
    v_32 = v_33;
    v_31 = basic_elt(env, 1); // list
    if (!consp(v_32)) goto v_7;
    v_32 = car(v_32);
    if (v_32 == v_31) goto v_6;
    else goto v_7;
v_6:
    v_31 = v_33;
    if (!car_legal(v_31)) v_31 = cdrerror(v_31); else
    v_31 = cdr(v_31);
    goto v_5;
v_7:
    v_32 = v_33;
    v_31 = basic_elt(env, 2); // !*sq
    if (!consp(v_32)) goto v_19;
    v_32 = car(v_32);
    if (v_32 == v_31) goto v_18;
    else goto v_19;
v_18:
    v_31 = v_33;
    if (!car_legal(v_31)) v_31 = cdrerror(v_31); else
    v_31 = cdr(v_31);
    if (!car_legal(v_31)) v_31 = carerror(v_31); else
    v_31 = car(v_31);
    {   LispObject fn = basic_elt(env, 4); // prepsq
    v_31 = (*qfn1(fn))(fn, v_31);
    }
    env = stack[0];
    v_32 = v_31;
    goto v_17;
v_19:
    v_31 = v_33;
    v_32 = v_31;
    goto v_17;
    v_32 = nil;
v_17:
    v_31 = basic_elt(env, 3); // "list"
    {
        LispObject fn = basic_elt(env, 5); // typerr
        return (*qfn2(fn))(fn, v_32, v_31);
    }
    v_31 = nil;
v_5:
    return onevalue(v_31);
}



// Code for plubf

static LispObject CC_plubf(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    stack[-6] = v_3;
    stack[-7] = v_2;
// end of prologue
    v_134 = stack[-7];
    if (!car_legal(v_134)) v_134 = cdrerror(v_134); else
    v_134 = cdr(v_134);
    if (!car_legal(v_134)) v_135 = carerror(v_134); else
    v_135 = car(v_134);
    stack[-8] = v_135;
    v_134 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_135 == v_134) goto v_16;
    else goto v_17;
v_16:
    v_134 = stack[-6];
    goto v_13;
v_17:
    v_134 = stack[-6];
    if (!car_legal(v_134)) v_134 = cdrerror(v_134); else
    v_134 = cdr(v_134);
    if (!car_legal(v_134)) v_135 = carerror(v_134); else
    v_135 = car(v_134);
    stack[-5] = v_135;
    v_134 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_135 == v_134) goto v_25;
    else goto v_26;
v_25:
    v_134 = stack[-7];
    goto v_13;
v_26:
    v_134 = stack[-7];
    if (!car_legal(v_134)) v_134 = cdrerror(v_134); else
    v_134 = cdr(v_134);
    if (!car_legal(v_134)) v_135 = cdrerror(v_134); else
    v_135 = cdr(v_134);
    stack[-4] = v_135;
    v_134 = stack[-6];
    if (!car_legal(v_134)) v_134 = cdrerror(v_134); else
    v_134 = cdr(v_134);
    if (!car_legal(v_134)) v_134 = cdrerror(v_134); else
    v_134 = cdr(v_134);
    stack[-3] = v_134;
    v_135 = difference2(v_135, v_134);
    env = stack[-9];
    stack[-2] = v_135;
    v_134 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_135 == v_134) goto v_34;
    else goto v_35;
v_34:
    stack[0] = basic_elt(env, 1); // !:rd!:
    v_135 = stack[-8];
    v_134 = stack[-5];
    v_135 = plus2(v_135, v_134);
    env = stack[-9];
    v_134 = stack[-4];
    v_134 = list2star(stack[0], v_135, v_134);
    env = stack[-9];
    goto v_13;
v_35:
    stack[-1] = stack[-2];
    v_134 = stack[-8];
    v_134 = Labsval(nil, v_134);
    env = stack[-9];
    {   LispObject fn = basic_elt(env, 3); // msd
    stack[0] = (*qfn1(fn))(fn, v_134);
    }
    env = stack[-9];
    v_134 = stack[-5];
    v_134 = Labsval(nil, v_134);
    env = stack[-9];
    {   LispObject fn = basic_elt(env, 3); // msd
    v_134 = (*qfn1(fn))(fn, v_134);
    }
    env = stack[-9];
    v_134 = difference2(stack[0], v_134);
    env = stack[-9];
    v_134 = plus2(stack[-1], v_134);
    env = stack[-9];
    stack[-1] = v_134;
    v_134 = qvalue(basic_elt(env, 2)); // !:bprec!:
    v_134 = add1(v_134);
    env = stack[-9];
    stack[0] = v_134;
    v_135 = stack[-1];
    v_134 = stack[0];
    v_134 = static_cast<LispObject>(greaterp2(v_135, v_134));
    v_134 = v_134 ? lisp_true : nil;
    env = stack[-9];
    if (v_134 == nil) goto v_64;
    v_134 = stack[-7];
    goto v_13;
v_64:
    v_134 = stack[0];
    v_134 = negate(v_134);
    env = stack[-9];
    v_134 = static_cast<LispObject>(lessp2(stack[-1], v_134));
    v_134 = v_134 ? lisp_true : nil;
    env = stack[-9];
    if (v_134 == nil) goto v_72;
    v_134 = stack[-6];
    goto v_13;
v_72:
    v_135 = stack[-2];
    v_134 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_134 = static_cast<LispObject>(greaterp2(v_135, v_134));
    v_134 = v_134 ? lisp_true : nil;
    env = stack[-9];
    if (v_134 == nil) goto v_81;
    stack[0] = basic_elt(env, 1); // !:rd!:
    v_135 = stack[-8];
    v_134 = stack[-2];
    {   LispObject fn = basic_elt(env, 4); // ashift
    v_135 = (*qfn2(fn))(fn, v_135, v_134);
    }
    env = stack[-9];
    v_134 = stack[-5];
    v_135 = plus2(v_135, v_134);
    env = stack[-9];
    v_134 = stack[-3];
    v_134 = list2star(stack[0], v_135, v_134);
    env = stack[-9];
    goto v_13;
v_81:
    stack[0] = basic_elt(env, 1); // !:rd!:
    stack[-1] = stack[-8];
    stack[-3] = stack[-5];
    v_134 = stack[-2];
    v_134 = negate(v_134);
    env = stack[-9];
    {   LispObject fn = basic_elt(env, 4); // ashift
    v_134 = (*qfn2(fn))(fn, stack[-3], v_134);
    }
    env = stack[-9];
    v_135 = plus2(stack[-1], v_134);
    env = stack[-9];
    v_134 = stack[-4];
    v_134 = list2star(stack[0], v_135, v_134);
    env = stack[-9];
    goto v_13;
    v_134 = nil;
v_13:
    stack[-2] = v_134;
    v_134 = stack[-2];
    if (!car_legal(v_134)) v_134 = cdrerror(v_134); else
    v_134 = cdr(v_134);
    if (!car_legal(v_134)) v_134 = carerror(v_134); else
    v_134 = car(v_134);
    v_136 = v_134;
    v_135 = v_136;
    v_134 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_135 == v_134) goto v_113;
    else goto v_114;
v_113:
    v_136 = basic_elt(env, 1); // !:rd!:
    v_135 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_134 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    return list2star(v_136, v_135, v_134);
v_114:
    v_135 = v_136;
    v_134 = qvalue(basic_elt(env, 2)); // !:bprec!:
    {   LispObject fn = basic_elt(env, 5); // inorm
    v_134 = (*qfn2(fn))(fn, v_135, v_134);
    }
    env = stack[-9];
    v_136 = v_134;
    stack[-1] = basic_elt(env, 1); // !:rd!:
    v_134 = v_136;
    if (!car_legal(v_134)) stack[0] = carerror(v_134); else
    stack[0] = car(v_134);
    v_134 = v_136;
    if (!car_legal(v_134)) v_135 = cdrerror(v_134); else
    v_135 = cdr(v_134);
    v_134 = stack[-2];
    if (!car_legal(v_134)) v_134 = cdrerror(v_134); else
    v_134 = cdr(v_134);
    if (!car_legal(v_134)) v_134 = cdrerror(v_134); else
    v_134 = cdr(v_134);
    v_134 = plus2(v_135, v_134);
    {
        LispObject v_146 = stack[-1];
        LispObject v_147 = stack[0];
        return list2star(v_146, v_147, v_134);
    }
    return onevalue(v_134);
}



// Code for sublap

static LispObject CC_sublap(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    v_62 = stack[-1];
    if (v_62 == nil) goto v_14;
    else goto v_15;
v_14:
    v_62 = lisp_true;
    goto v_13;
v_15:
    v_62 = stack[0];
    v_62 = (v_62 == nil ? lisp_true : nil);
    goto v_13;
    v_62 = nil;
v_13:
    if (v_62 == nil) goto v_11;
    v_62 = stack[0];
    goto v_9;
v_11:
    v_62 = stack[0];
    if (!consp(v_62)) goto v_23;
    else goto v_24;
v_23:
    v_62 = stack[0];
    if (is_number(v_62)) goto v_28;
    else goto v_29;
v_28:
    v_62 = stack[0];
    goto v_27;
v_29:
    v_63 = stack[0];
    v_62 = stack[-1];
    v_62 = Latsoc(nil, v_63, v_62);
    v_63 = v_62;
    if (v_62 == nil) goto v_33;
    v_62 = v_63;
    if (!car_legal(v_62)) v_62 = cdrerror(v_62); else
    v_62 = cdr(v_62);
    goto v_27;
v_33:
    v_62 = stack[0];
    goto v_27;
    v_62 = nil;
v_27:
    goto v_9;
v_24:
    v_62 = stack[0];
    if (!car_legal(v_62)) v_63 = carerror(v_62); else
    v_63 = car(v_62);
    v_62 = basic_elt(env, 1); // app
    v_62 = Lflagp(nil, v_63, v_62);
    env = stack[-3];
    if (v_62 == nil) goto v_43;
    v_63 = stack[-1];
    v_62 = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // sublap1
        return (*qfn2(fn))(fn, v_63, v_62);
    }
v_43:
    v_63 = stack[-1];
    v_62 = stack[0];
    if (!car_legal(v_62)) v_62 = carerror(v_62); else
    v_62 = car(v_62);
    {   LispObject fn = basic_elt(env, 0); // sublap
    stack[-2] = (*qfn2(fn))(fn, v_63, v_62);
    }
    env = stack[-3];
    v_63 = stack[-1];
    v_62 = stack[0];
    if (!car_legal(v_62)) v_62 = cdrerror(v_62); else
    v_62 = cdr(v_62);
    {   LispObject fn = basic_elt(env, 0); // sublap
    v_62 = (*qfn2(fn))(fn, v_63, v_62);
    }
    {
        LispObject v_67 = stack[-2];
        return cons(v_67, v_62);
    }
    v_62 = nil;
v_9:
    return onevalue(v_62);
}



// Code for min0

static LispObject CC_min0(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // min
    v_11 = (*qfn2(fn))(fn, v_11, v_10);
    }
    env = stack[0];
    v_10 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {
        LispObject fn = basic_elt(env, 2); // max
        return (*qfn2(fn))(fn, v_11, v_10);
    }
}



// Code for indordl2

static LispObject CC_indordl2(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // indordlp
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



// Code for getphystypeall

static LispObject CC_getphystypeall(LispObject env,
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
    v_30 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_29 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // deleteall
    v_29 = (*qfn2(fn))(fn, v_30, v_29);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // collectphystype
    v_29 = (*qfn1(fn))(fn, v_29);
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
    if (v_29 == nil) goto v_17;
    stack[-1] = basic_elt(env, 0); // getphystypeall
    v_30 = basic_elt(env, 1); // "PHYSOP type mismatch in"
    v_29 = stack[0];
    v_29 = list2(v_30, v_29);
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 4); // rederr2
    v_29 = (*qfn2(fn))(fn, stack[-1], v_29);
    }
    goto v_8;
v_17:
    v_29 = v_30;
    if (!car_legal(v_29)) v_29 = carerror(v_29); else
    v_29 = car(v_29);
    goto v_6;
v_8:
    v_29 = nil;
v_6:
    return onevalue(v_29);
}



// Code for deletez1

static LispObject CC_deletez1(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_35, v_36, v_37, v_38;
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
    v_38 = nil;
v_8:
    v_35 = stack[-1];
    if (v_35 == nil) goto v_11;
    else goto v_12;
v_11:
    v_35 = v_38;
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn1(fn))(fn, v_35);
    }
v_12:
    v_37 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_35 = stack[-1];
    if (!car_legal(v_35)) v_35 = carerror(v_35); else
    v_35 = car(v_35);
    if (!car_legal(v_35)) v_36 = carerror(v_35); else
    v_36 = car(v_35);
    v_35 = stack[0];
    v_35 = Lassoc(nil, v_36, v_35);
    if (!car_legal(v_35)) v_35 = cdrerror(v_35); else
    v_35 = cdr(v_35);
    if (v_37 == v_35) goto v_16;
    else goto v_17;
v_16:
    v_35 = stack[-1];
    if (!car_legal(v_35)) v_35 = cdrerror(v_35); else
    v_35 = cdr(v_35);
    stack[-1] = v_35;
    goto v_8;
v_17:
    v_35 = stack[-1];
    if (!car_legal(v_35)) v_35 = carerror(v_35); else
    v_35 = car(v_35);
    v_36 = v_38;
    v_35 = cons(v_35, v_36);
    env = stack[-2];
    v_38 = v_35;
    v_35 = stack[-1];
    if (!car_legal(v_35)) v_35 = cdrerror(v_35); else
    v_35 = cdr(v_35);
    stack[-1] = v_35;
    goto v_8;
    v_35 = nil;
    return onevalue(v_35);
}



// Code for realvaluedp

static LispObject CC_realvaluedp(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_64, v_65;
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
    v_64 = stack[0];
    if (!consp(v_64)) goto v_6;
    else goto v_7;
v_6:
    v_64 = stack[0];
    v_64 = (is_number(v_64) ? lisp_true : nil);
    if (v_64 == nil) goto v_11;
    else goto v_10;
v_11:
    v_64 = stack[0];
    v_65 = basic_elt(env, 1); // realvalued
        return Lflagp(nil, v_64, v_65);
v_10:
    goto v_5;
v_7:
    v_64 = stack[0];
    if (!car_legal(v_64)) v_65 = carerror(v_64); else
    v_65 = car(v_64);
    stack[-1] = v_65;
    v_64 = basic_elt(env, 2); // alwaysrealvalued
    v_64 = Lflagp(nil, v_65, v_64);
    env = stack[-2];
    if (v_64 == nil) goto v_26;
    v_64 = lisp_true;
    goto v_24;
v_26:
    v_65 = stack[-1];
    v_64 = basic_elt(env, 1); // realvalued
    v_64 = Lflagp(nil, v_65, v_64);
    env = stack[-2];
    if (v_64 == nil) goto v_40;
    v_64 = stack[0];
    if (!car_legal(v_64)) v_64 = cdrerror(v_64); else
    v_64 = cdr(v_64);
    {   LispObject fn = basic_elt(env, 4); // realvaluedlist
    v_64 = (*qfn1(fn))(fn, v_64);
    }
    env = stack[-2];
    goto v_38;
v_40:
    v_64 = nil;
    goto v_38;
    v_64 = nil;
v_38:
    if (v_64 == nil) goto v_36;
    else goto v_35;
v_36:
    v_65 = stack[-1];
    v_64 = basic_elt(env, 3); // condrealvalued
    v_64 = get(v_65, v_64);
    env = stack[-2];
    v_65 = v_64;
    if (v_64 == nil) goto v_52;
    else goto v_53;
v_52:
    v_64 = nil;
    goto v_51;
v_53:
    v_64 = stack[0];
    if (!car_legal(v_64)) v_64 = cdrerror(v_64); else
    v_64 = cdr(v_64);
    {
        LispObject fn = basic_elt(env, 5); // apply
        return (*qfn2(fn))(fn, v_65, v_64);
    }
    v_64 = nil;
v_51:
v_35:
    goto v_24;
    v_64 = nil;
v_24:
    goto v_5;
    v_64 = nil;
v_5:
    return onevalue(v_64);
}



// Code for assert_formproc

static LispObject CC_assert_formproc(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_94, v_95, v_96;
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
    stack[-7] = v_4;
    stack[-8] = v_3;
    stack[0] = v_2;
// end of prologue
    stack[-5] = nil;
    stack[-4] = nil;
    v_95 = stack[-7];
    v_94 = basic_elt(env, 1); // symbolic
    if (v_95 == v_94) goto v_19;
    v_94 = basic_elt(env, 2); // "asserted procedures are available in symbolic mode only"
    v_94 = ncons(v_94);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 7); // rederr
    v_94 = (*qfn1(fn))(fn, v_94);
    }
    env = stack[-10];
    goto v_17;
v_19:
v_17:
    v_94 = stack[0];
    if (!car_legal(v_94)) v_94 = cdrerror(v_94); else
    v_94 = cdr(v_94);
    if (!car_legal(v_94)) v_94 = carerror(v_94); else
    v_94 = car(v_94);
    stack[-9] = v_94;
    v_94 = stack[0];
    if (!car_legal(v_94)) v_94 = cdrerror(v_94); else
    v_94 = cdr(v_94);
    if (!car_legal(v_94)) v_94 = cdrerror(v_94); else
    v_94 = cdr(v_94);
    if (!car_legal(v_94)) v_94 = carerror(v_94); else
    v_94 = car(v_94);
    v_95 = v_94;
    v_94 = stack[0];
    if (!car_legal(v_94)) v_94 = cdrerror(v_94); else
    v_94 = cdr(v_94);
    if (!car_legal(v_94)) v_94 = cdrerror(v_94); else
    v_94 = cdr(v_94);
    if (!car_legal(v_94)) v_94 = cdrerror(v_94); else
    v_94 = cdr(v_94);
    if (!car_legal(v_94)) v_94 = carerror(v_94); else
    v_94 = car(v_94);
    stack[-6] = v_94;
    v_94 = v_95;
    v_94 = Lreverse(nil, v_94);
    env = stack[-10];
    v_95 = v_94;
    v_94 = v_95;
    if (!car_legal(v_94)) v_94 = carerror(v_94); else
    v_94 = car(v_94);
    if (!car_legal(v_94)) v_94 = cdrerror(v_94); else
    v_94 = cdr(v_94);
    stack[-3] = v_94;
    v_94 = v_95;
    if (!car_legal(v_94)) v_94 = cdrerror(v_94); else
    v_94 = cdr(v_94);
    v_95 = v_94;
    v_94 = v_95;
    stack[-1] = v_94;
v_47:
    v_94 = stack[-1];
    if (v_94 == nil) goto v_51;
    else goto v_52;
v_51:
    goto v_46;
v_52:
    v_94 = stack[-1];
    if (!car_legal(v_94)) v_94 = carerror(v_94); else
    v_94 = car(v_94);
    stack[0] = v_94;
    v_94 = stack[0];
    if (!car_legal(v_94)) v_95 = carerror(v_94); else
    v_95 = car(v_94);
    v_94 = stack[-5];
    v_94 = cons(v_95, v_94);
    env = stack[-10];
    stack[-5] = v_94;
    v_94 = stack[0];
    if (!car_legal(v_94)) v_95 = cdrerror(v_94); else
    v_95 = cdr(v_94);
    v_94 = stack[-4];
    v_94 = cons(v_95, v_94);
    env = stack[-10];
    stack[-4] = v_94;
    v_94 = stack[-1];
    if (!car_legal(v_94)) v_94 = cdrerror(v_94); else
    v_94 = cdr(v_94);
    stack[-1] = v_94;
    goto v_47;
v_46:
    stack[-2] = basic_elt(env, 3); // procedure
    stack[-1] = stack[-9];
    stack[0] = nil;
    v_96 = basic_elt(env, 4); // expr
    v_95 = stack[-5];
    v_94 = stack[-6];
    v_94 = list3(v_96, v_95, v_94);
    env = stack[-10];
    v_96 = list3star(stack[-2], stack[-1], stack[0], v_94);
    env = stack[-10];
    v_95 = stack[-8];
    v_94 = stack[-7];
    {   LispObject fn = basic_elt(env, 8); // formproc
    v_94 = (*qfn3(fn))(fn, v_96, v_95, v_94);
    }
    env = stack[-10];
    stack[0] = v_94;
    v_94 = qvalue(basic_elt(env, 5)); // !*assert
    if (v_94 == nil) goto v_81;
    else goto v_82;
v_81:
    v_94 = stack[0];
    goto v_15;
v_82:
    v_96 = stack[-9];
    v_95 = stack[-4];
    v_94 = stack[-3];
    v_94 = list3(v_96, v_95, v_94);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 9); // assert_declarestat1
    v_94 = (*qfn1(fn))(fn, v_94);
    }
    env = stack[-10];
    v_95 = v_94;
    v_96 = basic_elt(env, 6); // progn
    v_94 = stack[0];
    return list3(v_96, v_94, v_95);
v_15:
    return onevalue(v_94);
}



// Code for subeval1

static LispObject CC_subeval1(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_69, v_70, v_71;
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
v_11:
    v_69 = stack[-2];
    if (v_69 == nil) goto v_14;
    v_69 = stack[-2];
    if (!car_legal(v_69)) v_69 = carerror(v_69); else
    v_69 = car(v_69);
    if (!car_legal(v_69)) v_70 = carerror(v_69); else
    v_70 = car(v_69);
    v_69 = stack[-2];
    if (!car_legal(v_69)) v_69 = carerror(v_69); else
    v_69 = car(v_69);
    if (!car_legal(v_69)) v_69 = cdrerror(v_69); else
    v_69 = cdr(v_69);
    if (equal(v_70, v_69)) goto v_18;
    else goto v_14;
v_18:
    goto v_15;
v_14:
    goto v_10;
v_15:
    v_69 = stack[-2];
    if (!car_legal(v_69)) v_69 = cdrerror(v_69); else
    v_69 = cdr(v_69);
    stack[-2] = v_69;
    goto v_11;
v_10:
    v_69 = stack[-2];
    if (v_69 == nil) goto v_30;
    else goto v_31;
v_30:
    v_69 = stack[-1];
    goto v_8;
v_31:
    v_69 = stack[-1];
    {   LispObject fn = basic_elt(env, 5); // getrtype
    v_69 = (*qfn1(fn))(fn, v_69);
    }
    env = stack[-4];
    v_71 = v_69;
    if (v_69 == nil) goto v_35;
    v_70 = v_71;
    v_69 = basic_elt(env, 1); // subfn
    v_69 = get(v_70, v_69);
    env = stack[-4];
    v_70 = v_69;
    if (v_69 == nil) goto v_41;
    v_71 = v_70;
    v_70 = stack[-2];
    v_69 = stack[-1];
        return Lapply2(nil, v_71, v_70, v_69);
v_41:
    stack[-3] = basic_elt(env, 2); // alg
    stack[0] = static_cast<LispObject>(368)+TAG_FIXNUM; // 23
    v_69 = basic_elt(env, 3); // "No substitution defined for type"
    v_70 = v_71;
    v_69 = list2(v_69, v_70);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 6); // rerror
    v_69 = (*qfn3(fn))(fn, stack[-3], stack[0], v_69);
    }
    env = stack[-4];
    goto v_39;
v_39:
    goto v_29;
v_35:
v_29:
    v_69 = stack[-1];
    {   LispObject fn = basic_elt(env, 7); // simp
    v_70 = (*qfn1(fn))(fn, v_69);
    }
    env = stack[-4];
    v_69 = stack[-2];
    {   LispObject fn = basic_elt(env, 8); // subsq
    v_69 = (*qfn2(fn))(fn, v_70, v_69);
    }
    env = stack[-4];
    stack[-2] = v_69;
    v_69 = lisp_true;
// Binding !*sub2
// FLUIDBIND: reloadenv=4 litvec-offset=4 saveloc=0
{   bind_fluid_stack bind_fluid_var(-4, 4, 0);
    setvalue(basic_elt(env, 4), v_69); // !*sub2
    v_69 = stack[-2];
    {   LispObject fn = basic_elt(env, 9); // subs2
    v_69 = (*qfn1(fn))(fn, v_69);
    }
    env = stack[-4];
    stack[-2] = v_69;
    ;}  // end of a binding scope
    v_69 = stack[-2];
    {
        LispObject fn = basic_elt(env, 10); // mk!*sq
        return (*qfn1(fn))(fn, v_69);
    }
v_8:
    return onevalue(v_69);
}



// Code for remchkf1

static LispObject CC_remchkf1(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_39 = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // termsf
    v_39 = (*qfn1(fn))(fn, v_39);
    }
    env = stack[-3];
    stack[-2] = v_39;
    v_41 = stack[-1];
    v_40 = stack[0];
    v_39 = stack[-2];
    {   LispObject fn = basic_elt(env, 4); // xremf
    v_39 = (*qfn3(fn))(fn, v_41, v_40, v_39);
    }
    env = stack[-3];
    stack[0] = v_39;
    v_39 = stack[0];
    if (v_39 == nil) goto v_21;
    else goto v_22;
v_21:
    v_39 = lisp_true;
    goto v_20;
v_22:
    v_39 = stack[0];
    if (!car_legal(v_39)) v_39 = carerror(v_39); else
    v_39 = car(v_39);
    stack[0] = v_39;
    {   LispObject fn = basic_elt(env, 3); // termsf
    v_40 = (*qfn1(fn))(fn, v_39);
    }
    env = stack[-3];
    v_39 = stack[-2];
    v_39 = static_cast<LispObject>(geq2(v_40, v_39));
    v_39 = v_39 ? lisp_true : nil;
    env = stack[-3];
    goto v_20;
    v_39 = nil;
v_20:
    if (v_39 == nil) goto v_18;
    v_39 = stack[-1];
    goto v_7;
v_18:
    v_39 = qvalue(basic_elt(env, 1)); // !*trcompact
    if (v_39 == nil) goto v_34;
    v_39 = basic_elt(env, 2); // "*** Remainder smaller"
    {   LispObject fn = basic_elt(env, 5); // prin2t
    v_39 = (*qfn1(fn))(fn, v_39);
    }
    goto v_16;
v_34:
v_16:
    v_39 = stack[0];
v_7:
    return onevalue(v_39);
}



// Code for subcare

static LispObject CC_subcare(LispObject env,
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    stack[0] = v_4;
    stack[-1] = v_3;
    stack[-2] = v_2;
// end of prologue
    stack[-3] = nil;
v_9:
    v_52 = stack[0];
    if (v_52 == nil) goto v_12;
    else goto v_13;
v_12:
    v_52 = stack[-3];
    {
        LispObject fn = basic_elt(env, 2); // nreverse
        return (*qfn1(fn))(fn, v_52);
    }
v_13:
    v_53 = stack[-2];
    v_52 = stack[0];
    if (equal(v_53, v_52)) goto v_17;
    else goto v_18;
v_17:
    v_53 = stack[-3];
    v_52 = stack[-1];
    {
        LispObject fn = basic_elt(env, 2); // nreverse
        return (*qfn2(fn))(fn, v_53, v_52);
    }
v_18:
    v_52 = stack[0];
    if (!consp(v_52)) goto v_28;
    else goto v_29;
v_28:
    v_52 = lisp_true;
    goto v_27;
v_29:
    v_52 = stack[0];
    if (!car_legal(v_52)) v_53 = carerror(v_52); else
    v_53 = car(v_52);
    v_52 = basic_elt(env, 1); // subfunc
    v_52 = get(v_53, v_52);
    env = stack[-4];
    goto v_27;
    v_52 = nil;
v_27:
    if (v_52 == nil) goto v_25;
    v_53 = stack[-3];
    v_52 = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // nreverse
        return (*qfn2(fn))(fn, v_53, v_52);
    }
v_25:
    v_54 = stack[-2];
    v_53 = stack[-1];
    v_52 = stack[0];
    if (!car_legal(v_52)) v_52 = carerror(v_52); else
    v_52 = car(v_52);
    {   LispObject fn = basic_elt(env, 0); // subcare
    v_53 = (*qfn3(fn))(fn, v_54, v_53, v_52);
    }
    env = stack[-4];
    v_52 = stack[-3];
    v_52 = cons(v_53, v_52);
    env = stack[-4];
    stack[-3] = v_52;
    v_52 = stack[0];
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    stack[0] = v_52;
    goto v_9;
    v_52 = nil;
    return onevalue(v_52);
}



// Code for mo!=zero

static LispObject CC_moMzero(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_25, v_26, v_27;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_26 = v_2;
// end of prologue
v_1:
    v_25 = v_26;
    if (v_25 == nil) goto v_6;
    else goto v_7;
v_6:
    v_25 = lisp_true;
    goto v_5;
v_7:
    v_25 = v_26;
    if (!car_legal(v_25)) v_27 = carerror(v_25); else
    v_27 = car(v_25);
    v_25 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_27 == v_25) goto v_14;
    else goto v_15;
v_14:
    v_25 = v_26;
    if (!car_legal(v_25)) v_25 = cdrerror(v_25); else
    v_25 = cdr(v_25);
    v_26 = v_25;
    goto v_1;
v_15:
    v_25 = nil;
    goto v_13;
    v_25 = nil;
v_13:
    goto v_5;
    v_25 = nil;
v_5:
    return onevalue(v_25);
}



// Code for gvar1

static LispObject CC_gvar1(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_87, v_88, v_89, v_90;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_90 = v_3;
    v_89 = v_2;
// end of prologue
v_7:
    v_87 = v_89;
    if (v_87 == nil) goto v_14;
    else goto v_15;
v_14:
    v_87 = lisp_true;
    goto v_13;
v_15:
    v_87 = v_89;
    v_87 = (is_number(v_87) ? lisp_true : nil);
    if (v_87 == nil) goto v_22;
    else goto v_21;
v_22:
    v_88 = v_89;
    v_87 = basic_elt(env, 1); // i
    if (v_88 == v_87) goto v_27;
    else goto v_28;
v_27:
    v_87 = qvalue(basic_elt(env, 2)); // !*complex
    goto v_26;
v_28:
    v_87 = nil;
    goto v_26;
    v_87 = nil;
v_26:
v_21:
    goto v_13;
    v_87 = nil;
v_13:
    if (v_87 == nil) goto v_11;
    v_87 = v_90;
    goto v_6;
v_11:
    v_87 = v_89;
    if (!consp(v_87)) goto v_36;
    else goto v_37;
v_36:
    v_88 = v_89;
    v_87 = v_90;
    v_87 = Lmember(nil, v_88, v_87);
    if (v_87 == nil) goto v_42;
    v_87 = v_90;
    goto v_6;
v_42:
    v_87 = v_89;
    v_88 = v_90;
    return cons(v_87, v_88);
    goto v_9;
v_37:
    v_87 = v_89;
    if (!car_legal(v_87)) v_87 = carerror(v_87); else
    v_87 = car(v_87);
    if (!symbolp(v_87)) v_87 = nil;
    else { v_87 = qfastgets(v_87);
           if (v_87 != nil) { v_87 = elt(v_87, 8); // dname
#ifdef RECORD_GET
             if (v_87 != SPID_NOPROP)
                record_get(elt(fastget_names, 8), 1);
             else record_get(elt(fastget_names, 8), 0),
                v_87 = nil; }
           else record_get(elt(fastget_names, 8), 0); }
#else
             if (v_87 == SPID_NOPROP) v_87 = nil; }}
#endif
    if (v_87 == nil) goto v_53;
    v_87 = v_90;
    goto v_6;
v_53:
    v_87 = v_89;
    if (!car_legal(v_87)) v_88 = carerror(v_87); else
    v_88 = car(v_87);
    v_87 = basic_elt(env, 3); // (plus times expt difference minus)
    v_87 = Lmemq(nil, v_88, v_87);
    if (v_87 == nil) goto v_59;
    v_87 = v_89;
    if (!car_legal(v_87)) v_87 = cdrerror(v_87); else
    v_87 = cdr(v_87);
    v_88 = v_90;
    {
        LispObject fn = basic_elt(env, 5); // gvarlis1
        return (*qfn2(fn))(fn, v_87, v_88);
    }
v_59:
    v_87 = v_89;
    if (!car_legal(v_87)) v_88 = carerror(v_87); else
    v_88 = car(v_87);
    v_87 = basic_elt(env, 4); // quotient
    if (v_88 == v_87) goto v_68;
    else goto v_69;
v_68:
    v_87 = v_89;
    if (!car_legal(v_87)) v_87 = cdrerror(v_87); else
    v_87 = cdr(v_87);
    if (!car_legal(v_87)) v_87 = carerror(v_87); else
    v_87 = car(v_87);
    v_89 = v_87;
    goto v_7;
v_69:
    v_88 = v_89;
    v_87 = v_90;
    v_87 = Lmember(nil, v_88, v_87);
    if (v_87 == nil) goto v_77;
    v_87 = v_90;
    goto v_6;
v_77:
    v_87 = v_89;
    v_88 = v_90;
    return cons(v_87, v_88);
v_9:
    v_87 = nil;
v_6:
    return onevalue(v_87);
}



// Code for ofsf_lnegrel

static LispObject CC_ofsf_lnegrel(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_42, v_43, v_44;
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
    v_44 = v_2;
// end of prologue
    v_43 = v_44;
    v_42 = basic_elt(env, 1); // equal
    if (v_43 == v_42) goto v_6;
    else goto v_7;
v_6:
    v_42 = basic_elt(env, 2); // neq
    goto v_5;
v_7:
    v_43 = v_44;
    v_42 = basic_elt(env, 2); // neq
    if (v_43 == v_42) goto v_11;
    else goto v_12;
v_11:
    v_42 = basic_elt(env, 1); // equal
    goto v_5;
v_12:
    v_43 = v_44;
    v_42 = basic_elt(env, 3); // leq
    if (v_43 == v_42) goto v_16;
    else goto v_17;
v_16:
    v_42 = basic_elt(env, 4); // greaterp
    goto v_5;
v_17:
    v_43 = v_44;
    v_42 = basic_elt(env, 5); // lessp
    if (v_43 == v_42) goto v_21;
    else goto v_22;
v_21:
    v_42 = basic_elt(env, 6); // geq
    goto v_5;
v_22:
    v_43 = v_44;
    v_42 = basic_elt(env, 6); // geq
    if (v_43 == v_42) goto v_26;
    else goto v_27;
v_26:
    v_42 = basic_elt(env, 5); // lessp
    goto v_5;
v_27:
    v_43 = v_44;
    v_42 = basic_elt(env, 4); // greaterp
    if (v_43 == v_42) goto v_31;
    else goto v_32;
v_31:
    v_42 = basic_elt(env, 3); // leq
    goto v_5;
v_32:
    v_42 = basic_elt(env, 7); // "ofsf_lnegrel: unknown operator "
    v_43 = v_44;
    v_42 = list2(v_42, v_43);
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 8); // rederr
        return (*qfn1(fn))(fn, v_42);
    }
    v_42 = nil;
v_5:
    return onevalue(v_42);
}



setup_type const u35_setup[] =
{
    {"log_freevars_list",       G0W3,     G1W3,     G2W3,     CC_log_freevars_list,G4W3},
    {"ratfunpri1",              G0W1,     CC_ratfunpri1,G2W1, G3W1,     G4W1},
    {"mo_zero?",                G0W1,     CC_mo_zeroW,G2W1,   G3W1,     G4W1},
    {"*f2di",                   G0W2,     G1W2,     CC_Hf2di, G3W2,     G4W2},
    {"msolve-polyn",            G0W2,     G1W2,     CC_msolveKpolyn,G3W2,G4W2},
    {"reduce-mod-eigf",         G0W2,     G1W2,     CC_reduceKmodKeigf,G3W2,G4W2},
    {"ra_u",                    G0W1,     CC_ra_u,  G2W1,     G3W1,     G4W1},
    {"vdp_putprop",             G0W3,     G1W3,     G2W3,     CC_vdp_putprop,G4W3},
    {"listrd",                  CC_listrd,G1W0,     G2W0,     G3W0,     G4W0},
    {"ps:sqrt-erule",           G0W2,     G1W2,     CC_psTsqrtKerule,G3W2,G4W2},
    {"resume",                  G0W2,     G1W2,     CC_resume,G3W2,     G4W2},
    {"evinvlexcomp",            G0W2,     G1W2,     CC_evinvlexcomp,G3W2,G4W2},
    {"vdpilcomb1",              G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_vdpilcomb1},
    {"unplus",                  G0W1,     CC_unplus,G2W1,     G3W1,     G4W1},
    {"**a2i",                   G0W2,     G1W2,     CC_HHa2i, G3W2,     G4W2},
    {"dv_ind2var",              G0W1,     CC_dv_ind2var,G2W1, G3W1,     G4W1},
    {"lalr_warn_shift_reduce_conflict",G0W3,G1W3,   G2W3,     CC_lalr_warn_shift_reduce_conflict,G4W3},
    {"dvfsf_v",                 G0W1,     CC_dvfsf_v,G2W1,    G3W1,     G4W1},
    {"plusdf",                  G0W2,     G1W2,     CC_plusdf,G3W2,     G4W2},
    {"get*inverse",             G0W2,     G1W2,     CC_getHinverse,G3W2,G4W2},
    {"cgp_lbc",                 G0W1,     CC_cgp_lbc,G2W1,    G3W1,     G4W1},
    {"getargsrd",               CC_getargsrd,G1W0,  G2W0,     G3W0,     G4W0},
    {"valuecoefft",             G0W3,     G1W3,     G2W3,     CC_valuecoefft,G4W3},
    {"evaluate",                G0W3,     G1W3,     G2W3,     CC_evaluate,G4W3},
    {"assert_procstat-argl",    CC_assert_procstatKargl,G1W0,G2W0,G3W0, G4W0},
    {"ad_splitname",            G0W1,     CC_ad_splitname,G2W1,G3W1,    G4W1},
    {"difbf",                   G0W2,     G1W2,     CC_difbf, G3W2,     G4W2},
    {"order_of_der_mind",       G0W1,     CC_order_of_der_mind,G2W1,G3W1,G4W1},
    {"lalr_get_lex_codes",      G0W1,     CC_lalr_get_lex_codes,G2W1,G3W1,G4W1},
    {"polynomcompare",          G0W2,     G1W2,     CC_polynomcompare,G3W2,G4W2},
    {"ofsf_smcpknowl",          G0W1,     CC_ofsf_smcpknowl,G2W1,G3W1,  G4W1},
    {"multdf",                  G0W2,     G1W2,     CC_multdf,G3W2,     G4W2},
    {"talp_specsub",            G0W2,     G1W2,     CC_talp_specsub,G3W2,G4W2},
    {"ithlistelem",             G0W2,     G1W2,     CC_ithlistelem,G3W2,G4W2},
    {"maxl",                    G0W1,     CC_maxl,  G2W1,     G3W1,     G4W1},
    {"sc_subtrsq",              G0W2,     G1W2,     CC_sc_subtrsq,G3W2, G4W2},
    {"getrlist",                G0W1,     CC_getrlist,G2W1,   G3W1,     G4W1},
    {"plubf",                   G0W2,     G1W2,     CC_plubf, G3W2,     G4W2},
    {"sublap",                  G0W2,     G1W2,     CC_sublap,G3W2,     G4W2},
    {"min0",                    G0W2,     G1W2,     CC_min0,  G3W2,     G4W2},
    {"indordl2",                G0W2,     G1W2,     CC_indordl2,G3W2,   G4W2},
    {"getphystypeall",          G0W1,     CC_getphystypeall,G2W1,G3W1,  G4W1},
    {"deletez1",                G0W2,     G1W2,     CC_deletez1,G3W2,   G4W2},
    {"realvaluedp",             G0W1,     CC_realvaluedp,G2W1,G3W1,     G4W1},
    {"assert_formproc",         G0W3,     G1W3,     G2W3,     CC_assert_formproc,G4W3},
    {"subeval1",                G0W2,     G1W2,     CC_subeval1,G3W2,   G4W2},
    {"remchkf1",                G0W2,     G1W2,     CC_remchkf1,G3W2,   G4W2},
    {"subcare",                 G0W3,     G1W3,     G2W3,     CC_subcare,G4W3},
    {"mo=zero",                 G0W1,     CC_moMzero,G2W1,    G3W1,     G4W1},
    {"gvar1",                   G0W2,     G1W2,     CC_gvar1, G3W2,     G4W2},
    {"ofsf_lnegrel",            G0W1,     CC_ofsf_lnegrel,G2W1,G3W1,    G4W1},
    {nullptr, 
        reinterpret_cast<no_args *>(
            reinterpret_cast<uintptr_t>("u35")),
        reinterpret_cast<one_arg *>(
            reinterpret_cast<uintptr_t>("183161 6110864 8115840")),
        nullptr, nullptr, nullptr}
};

// end of generated code
