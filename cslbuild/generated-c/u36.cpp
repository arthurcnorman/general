
// $destdir/u36.c        Machine generated C code

// $Id$

#include "config.h"
#include "headers.h"



// Code for mk!+real!+inner!+product

static LispObject CC_mkLrealLinnerLproduct(LispObject env,
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
    stack_popper stack_popper_var(6);
// copy arguments values to proper place
    stack[-2] = v_3;
    stack[-3] = v_2;
// end of prologue
    v_55 = stack[-3];
    {   LispObject fn = basic_elt(env, 3); // get!+vec!+dim
    stack[0] = (*qfn1(fn))(fn, v_55);
    }
    env = stack[-5];
    v_55 = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // get!+vec!+dim
    v_55 = (*qfn1(fn))(fn, v_55);
    }
    env = stack[-5];
    if (equal(stack[0], v_55)) goto v_12;
    v_55 = basic_elt(env, 1); // "wrong dimensions in innerproduct"
    {   LispObject fn = basic_elt(env, 4); // rederr
    v_55 = (*qfn1(fn))(fn, v_55);
    }
    env = stack[-5];
    goto v_10;
v_12:
v_10:
    v_56 = nil;
    v_55 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_55 = cons(v_56, v_55);
    env = stack[-5];
    stack[0] = v_55;
    v_55 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-4] = v_55;
v_25:
    v_55 = stack[-3];
    {   LispObject fn = basic_elt(env, 3); // get!+vec!+dim
    v_56 = (*qfn1(fn))(fn, v_55);
    }
    env = stack[-5];
    v_55 = stack[-4];
    v_55 = difference2(v_56, v_55);
    env = stack[-5];
    v_55 = Lminusp(nil, v_55);
    env = stack[-5];
    if (v_55 == nil) goto v_30;
    goto v_24;
v_30:
    stack[-1] = stack[0];
    v_56 = stack[-3];
    v_55 = stack[-4];
    {   LispObject fn = basic_elt(env, 5); // get!+vec!+entry
    stack[0] = (*qfn2(fn))(fn, v_56, v_55);
    }
    env = stack[-5];
    v_56 = stack[-2];
    v_55 = stack[-4];
    {   LispObject fn = basic_elt(env, 5); // get!+vec!+entry
    v_55 = (*qfn2(fn))(fn, v_56, v_55);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 6); // multsq
    v_55 = (*qfn2(fn))(fn, stack[0], v_55);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 7); // addsq
    v_55 = (*qfn2(fn))(fn, stack[-1], v_55);
    }
    env = stack[-5];
    stack[0] = v_55;
    v_55 = stack[-4];
    v_55 = add1(v_55);
    env = stack[-5];
    stack[-4] = v_55;
    goto v_25;
v_24:
    v_55 = lisp_true;
// Binding !*sub2
// FLUIDBIND: reloadenv=5 litvec-offset=2 saveloc=1
{   bind_fluid_stack bind_fluid_var(-5, 2, -1);
    setvalue(basic_elt(env, 2), v_55); // !*sub2
    v_55 = stack[0];
    {   LispObject fn = basic_elt(env, 8); // subs2
    v_55 = (*qfn1(fn))(fn, v_55);
    }
    stack[0] = v_55;
    ;}  // end of a binding scope
    v_55 = stack[0];
    return onevalue(v_55);
}



// Code for sqfrf

static LispObject CC_sqfrf(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_265, v_266, v_267, v_268;
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
// Binding !*gcd
// FLUIDBIND: reloadenv=11 litvec-offset=1 saveloc=8
{   bind_fluid_stack bind_fluid_var(-11, 1, -8);
    setvalue(basic_elt(env, 1), nil); // !*gcd
    stack[-7] = nil;
    stack[-3] = nil;
    stack[-2] = nil;
// Binding !*msg
// FLUIDBIND: reloadenv=11 litvec-offset=2 saveloc=5
{   bind_fluid_stack bind_fluid_var(-11, 2, -5);
    setvalue(basic_elt(env, 2), nil); // !*msg
    v_265 = lisp_true;
    setvalue(basic_elt(env, 1), v_265); // !*gcd
    v_265 = qvalue(basic_elt(env, 3)); // !*rounded
    stack[-1] = v_265;
    if (v_265 == nil) goto v_23;
    v_265 = basic_elt(env, 4); // rational
    v_265 = ncons(v_265);
    env = stack[-11];
    {   LispObject fn = basic_elt(env, 10); // on
    v_265 = (*qfn1(fn))(fn, v_265);
    }
    env = stack[-11];
    v_266 = stack[-9];
    v_265 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_265 = cons(v_266, v_265);
    env = stack[-11];
    {   LispObject fn = basic_elt(env, 11); // resimp
    v_265 = (*qfn1(fn))(fn, v_265);
    }
    env = stack[-11];
    if (!car_legal(v_265)) v_265 = carerror(v_265); else
    v_265 = car(v_265);
    stack[-9] = v_265;
    goto v_21;
v_23:
v_21:
    v_265 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-10] = v_265;
    v_265 = stack[-9];
    if (!car_legal(v_265)) v_265 = carerror(v_265); else
    v_265 = car(v_265);
    if (!car_legal(v_265)) v_265 = carerror(v_265); else
    v_265 = car(v_265);
    if (!car_legal(v_265)) v_265 = carerror(v_265); else
    v_265 = car(v_265);
    stack[-4] = v_265;
    v_265 = lisp_true;
// Binding !*ezgcd
// FLUIDBIND: reloadenv=11 litvec-offset=5 saveloc=0
{   bind_fluid_stack bind_fluid_var(-11, 5, 0);
    setvalue(basic_elt(env, 5), v_265); // !*ezgcd
    stack[-6] = stack[-9];
    v_266 = stack[-9];
    v_265 = stack[-4];
    {   LispObject fn = basic_elt(env, 12); // diff
    v_265 = (*qfn2(fn))(fn, v_266, v_265);
    }
    env = stack[-11];
    {   LispObject fn = basic_elt(env, 13); // gcdf
    v_265 = (*qfn2(fn))(fn, stack[-6], v_265);
    }
    env = stack[-11];
    stack[-6] = v_265;
    ;}  // end of a binding scope
    v_266 = stack[-9];
    v_265 = stack[-6];
    {   LispObject fn = basic_elt(env, 14); // quotf!-fail
    v_265 = (*qfn2(fn))(fn, v_266, v_265);
    }
    env = stack[-11];
    stack[-9] = v_265;
    v_265 = qvalue(basic_elt(env, 6)); // dmode!*
    if (!symbolp(v_265)) v_265 = nil;
    else { v_265 = qfastgets(v_265);
           if (v_265 != nil) { v_265 = elt(v_265, 3); // field
#ifdef RECORD_GET
             if (v_265 == SPID_NOPROP)
                record_get(elt(fastget_names, 3), 0),
                v_265 = nil;
             else record_get(elt(fastget_names, 3), 1),
                v_265 = lisp_true; }
           else record_get(elt(fastget_names, 3), 0); }
#else
             if (v_265 == SPID_NOPROP) v_265 = nil; else v_265 = lisp_true; }}
#endif
    if (v_265 == nil) goto v_57;
    v_265 = stack[-9];
    {   LispObject fn = basic_elt(env, 15); // lnc
    v_266 = (*qfn1(fn))(fn, v_265);
    }
    env = stack[-11];
    stack[-3] = v_266;
    v_265 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_265 = Lneq_2(nil, v_266, v_265);
    env = stack[-11];
    goto v_55;
v_57:
    v_265 = nil;
    goto v_55;
    v_265 = nil;
v_55:
    if (v_265 == nil) goto v_53;
    v_265 = stack[-3];
    {   LispObject fn = basic_elt(env, 16); // !:recip
    v_266 = (*qfn1(fn))(fn, v_265);
    }
    env = stack[-11];
    v_265 = stack[-9];
    {   LispObject fn = basic_elt(env, 17); // multd
    v_265 = (*qfn2(fn))(fn, v_266, v_265);
    }
    env = stack[-11];
    stack[-9] = v_265;
    v_266 = stack[-3];
    v_265 = stack[-6];
    {   LispObject fn = basic_elt(env, 17); // multd
    v_265 = (*qfn2(fn))(fn, v_266, v_265);
    }
    env = stack[-11];
    stack[-6] = v_265;
    goto v_51;
v_53:
v_51:
v_76:
    v_266 = stack[-6];
    v_265 = stack[-4];
    {   LispObject fn = basic_elt(env, 18); // degr
    v_266 = (*qfn2(fn))(fn, v_266, v_265);
    }
    env = stack[-11];
    v_265 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_265 = static_cast<LispObject>(greaterp2(v_266, v_265));
    v_265 = v_265 ? lisp_true : nil;
    env = stack[-11];
    if (v_265 == nil) goto v_79;
    else goto v_80;
v_79:
    goto v_75;
v_80:
    v_266 = stack[-6];
    v_265 = stack[-9];
    {   LispObject fn = basic_elt(env, 13); // gcdf
    v_265 = (*qfn2(fn))(fn, v_266, v_265);
    }
    env = stack[-11];
    stack[0] = v_265;
    v_266 = stack[-9];
    v_265 = stack[0];
    if (equal(v_266, v_265)) goto v_93;
    v_266 = stack[-9];
    v_265 = stack[0];
    {   LispObject fn = basic_elt(env, 19); // quotf
    v_267 = (*qfn2(fn))(fn, v_266, v_265);
    }
    env = stack[-11];
    v_266 = stack[-10];
    v_265 = stack[-2];
    v_265 = acons(v_267, v_266, v_265);
    env = stack[-11];
    stack[-2] = v_265;
    goto v_91;
v_93:
v_91:
    v_266 = stack[-6];
    v_265 = stack[0];
    {   LispObject fn = basic_elt(env, 19); // quotf
    v_265 = (*qfn2(fn))(fn, v_266, v_265);
    }
    env = stack[-11];
    stack[-6] = v_265;
    v_265 = stack[0];
    stack[-9] = v_265;
    v_265 = stack[-10];
    v_265 = add1(v_265);
    env = stack[-11];
    stack[-10] = v_265;
    goto v_76;
v_75:
    v_265 = stack[-1];
    if (v_265 == nil) goto v_111;
    v_265 = basic_elt(env, 7); // rounded
    v_265 = ncons(v_265);
    env = stack[-11];
    {   LispObject fn = basic_elt(env, 10); // on
    v_265 = (*qfn1(fn))(fn, v_265);
    }
    env = stack[-11];
    v_266 = stack[-9];
    v_265 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_265 = cons(v_266, v_265);
    env = stack[-11];
    {   LispObject fn = basic_elt(env, 11); // resimp
    v_265 = (*qfn1(fn))(fn, v_265);
    }
    env = stack[-11];
    if (!car_legal(v_265)) v_265 = carerror(v_265); else
    v_265 = car(v_265);
    stack[-9] = v_265;
    v_265 = stack[-2];
    stack[-4] = v_265;
    v_265 = stack[-4];
    if (v_265 == nil) goto v_130;
    else goto v_131;
v_130:
    v_265 = nil;
    goto v_125;
v_131:
    v_265 = stack[-4];
    if (!car_legal(v_265)) v_265 = carerror(v_265); else
    v_265 = car(v_265);
    stack[0] = v_265;
    v_265 = stack[0];
    if (!car_legal(v_265)) v_266 = carerror(v_265); else
    v_266 = car(v_265);
    v_265 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_265 = cons(v_266, v_265);
    env = stack[-11];
    {   LispObject fn = basic_elt(env, 11); // resimp
    v_265 = (*qfn1(fn))(fn, v_265);
    }
    env = stack[-11];
    if (!car_legal(v_265)) v_266 = carerror(v_265); else
    v_266 = car(v_265);
    v_265 = stack[0];
    if (!car_legal(v_265)) v_265 = cdrerror(v_265); else
    v_265 = cdr(v_265);
    v_265 = cons(v_266, v_265);
    env = stack[-11];
    v_265 = ncons(v_265);
    env = stack[-11];
    stack[-2] = v_265;
    stack[-3] = v_265;
v_126:
    v_265 = stack[-4];
    if (!car_legal(v_265)) v_265 = cdrerror(v_265); else
    v_265 = cdr(v_265);
    stack[-4] = v_265;
    v_265 = stack[-4];
    if (v_265 == nil) goto v_151;
    else goto v_152;
v_151:
    v_265 = stack[-3];
    goto v_125;
v_152:
    stack[-1] = stack[-2];
    v_265 = stack[-4];
    if (!car_legal(v_265)) v_265 = carerror(v_265); else
    v_265 = car(v_265);
    stack[0] = v_265;
    v_265 = stack[0];
    if (!car_legal(v_265)) v_266 = carerror(v_265); else
    v_266 = car(v_265);
    v_265 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_265 = cons(v_266, v_265);
    env = stack[-11];
    {   LispObject fn = basic_elt(env, 11); // resimp
    v_265 = (*qfn1(fn))(fn, v_265);
    }
    env = stack[-11];
    if (!car_legal(v_265)) v_266 = carerror(v_265); else
    v_266 = car(v_265);
    v_265 = stack[0];
    if (!car_legal(v_265)) v_265 = cdrerror(v_265); else
    v_265 = cdr(v_265);
    v_265 = cons(v_266, v_265);
    env = stack[-11];
    v_265 = ncons(v_265);
    env = stack[-11];
    if (!car_legal(stack[-1])) rplacd_fails(stack[-1]);
    setcdr(stack[-1], v_265);
    v_265 = stack[-2];
    if (!car_legal(v_265)) v_265 = cdrerror(v_265); else
    v_265 = cdr(v_265);
    stack[-2] = v_265;
    goto v_126;
v_125:
    stack[-2] = v_265;
    goto v_109;
v_111:
v_109:
    v_266 = stack[-6];
    v_265 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_266 == v_265) goto v_179;
    v_266 = stack[-6];
    v_265 = stack[-7];
    v_265 = Lassoc(nil, v_266, v_265);
    goto v_177;
v_179:
    v_265 = nil;
    goto v_177;
    v_265 = nil;
v_177:
    if (v_265 == nil) goto v_175;
    v_265 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-6] = v_265;
    goto v_173;
v_175:
v_173:
    v_266 = stack[-6];
    v_265 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_266 == v_265) goto v_192;
    v_266 = stack[-10];
    v_265 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_266 == v_265) goto v_197;
    else goto v_198;
v_197:
    v_266 = stack[-6];
    v_265 = stack[-9];
    {   LispObject fn = basic_elt(env, 20); // multf
    v_265 = (*qfn2(fn))(fn, v_266, v_265);
    }
    env = stack[-11];
    stack[-9] = v_265;
    goto v_196;
v_198:
    v_266 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_265 = stack[-2];
    {   LispObject fn = basic_elt(env, 21); // rassoc
    v_265 = (*qfn2(fn))(fn, v_266, v_265);
    }
    env = stack[-11];
    stack[0] = v_265;
    if (v_265 == nil) goto v_205;
    stack[-1] = stack[0];
    v_266 = stack[-6];
    v_265 = stack[0];
    if (!car_legal(v_265)) v_265 = carerror(v_265); else
    v_265 = car(v_265);
    {   LispObject fn = basic_elt(env, 20); // multf
    v_265 = (*qfn2(fn))(fn, v_266, v_265);
    }
    env = stack[-11];
    if (!car_legal(stack[-1])) rplaca_fails(stack[-1]);
    setcar(stack[-1], v_265);
    goto v_196;
v_205:
    v_265 = stack[-2];
    if (v_265 == nil) goto v_219;
    else goto v_220;
v_219:
    v_266 = stack[-6];
    v_265 = stack[-10];
    {   LispObject fn = basic_elt(env, 22); // rootxf
    v_266 = (*qfn2(fn))(fn, v_266, v_265);
    }
    env = stack[-11];
    stack[0] = v_266;
    v_265 = basic_elt(env, 8); // failed
    v_265 = Lneq_2(nil, v_266, v_265);
    env = stack[-11];
    goto v_218;
v_220:
    v_265 = nil;
    goto v_218;
    v_265 = nil;
v_218:
    if (v_265 == nil) goto v_216;
    v_266 = stack[0];
    v_265 = stack[-9];
    {   LispObject fn = basic_elt(env, 20); // multf
    v_265 = (*qfn2(fn))(fn, v_266, v_265);
    }
    env = stack[-11];
    stack[-9] = v_265;
    goto v_196;
v_216:
    v_265 = stack[-6];
    if (!consp(v_265)) goto v_237;
    else goto v_238;
v_237:
    v_265 = lisp_true;
    goto v_236;
v_238:
    v_265 = stack[-6];
    if (!car_legal(v_265)) v_265 = carerror(v_265); else
    v_265 = car(v_265);
    v_265 = (consp(v_265) ? nil : lisp_true);
    goto v_236;
    v_265 = nil;
v_236:
    if (v_265 == nil) goto v_233;
    else goto v_234;
v_233:
    stack[0] = stack[-2];
    v_266 = stack[-6];
    v_265 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_265 = cons(v_266, v_265);
    env = stack[-11];
    {   LispObject fn = basic_elt(env, 23); // aconc
    v_265 = (*qfn2(fn))(fn, stack[0], v_265);
    }
    env = stack[-11];
    stack[-2] = v_265;
    goto v_196;
v_234:
    v_268 = basic_elt(env, 9); // "sqfrf failure"
    v_267 = stack[-9];
    v_266 = stack[-10];
    v_265 = stack[-2];
    v_265 = list4(v_268, v_267, v_266, v_265);
    env = stack[-11];
    {   LispObject fn = basic_elt(env, 24); // errach
    v_265 = (*qfn1(fn))(fn, v_265);
    }
    env = stack[-11];
    goto v_196;
v_196:
    goto v_190;
v_192:
v_190:
    v_267 = stack[-9];
    v_266 = stack[-10];
    v_265 = stack[-2];
    v_265 = acons(v_267, v_266, v_265);
    ;}  // end of a binding scope
    ;}  // end of a binding scope
    return onevalue(v_265);
}



// Code for fnrd

static LispObject CC_fnrd(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil);
    stack_popper stack_popper_var(2);
// end of prologue
    stack[0] = nil;
    {   LispObject fn = basic_elt(env, 3); // lex
    v_22 = (*qfn0(fn))(fn);
    }
    env = stack[-1];
    v_23 = qvalue(basic_elt(env, 1)); // char
    v_22 = basic_elt(env, 2); // (c i)
    if (equal(v_23, v_22)) goto v_10;
    v_22 = qvalue(basic_elt(env, 1)); // char
    v_23 = Lcompress(nil, v_22);
    env = stack[-1];
    v_22 = static_cast<LispObject>(320)+TAG_FIXNUM; // 20
    {   LispObject fn = basic_elt(env, 4); // errorml
    v_22 = (*qfn2(fn))(fn, v_23, v_22);
    }
    env = stack[-1];
    goto v_8;
v_10:
    {   LispObject fn = basic_elt(env, 5); // mathml2
    v_22 = (*qfn0(fn))(fn);
    }
    env = stack[-1];
    stack[0] = v_22;
    goto v_8;
v_8:
    {   LispObject fn = basic_elt(env, 3); // lex
    v_22 = (*qfn0(fn))(fn);
    }
    v_22 = stack[0];
    return onevalue(v_22);
}



// Code for physoptimes

static LispObject CC_physoptimes(LispObject env,
                         LispObject v_2)
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
    stack[0] = v_2;
// end of prologue
    stack[-2] = nil;
    v_190 = qvalue(basic_elt(env, 1)); // tstack!*
    v_189 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_190 == v_189) goto v_20;
    else goto v_21;
v_20:
    v_189 = qvalue(basic_elt(env, 2)); // mul!*
    goto v_19;
v_21:
    v_189 = nil;
    goto v_19;
    v_189 = nil;
v_19:
    if (v_189 == nil) goto v_17;
    v_189 = qvalue(basic_elt(env, 2)); // mul!*
    stack[-2] = v_189;
    v_189 = nil;
    setvalue(basic_elt(env, 2), v_189); // mul!*
    goto v_15;
v_17:
v_15:
    v_189 = qvalue(basic_elt(env, 1)); // tstack!*
    v_189 = add1(v_189);
    env = stack[-7];
    setvalue(basic_elt(env, 1), v_189); // tstack!*
    v_189 = stack[0];
    if (!car_legal(v_189)) v_189 = carerror(v_189); else
    v_189 = car(v_189);
    {   LispObject fn = basic_elt(env, 4); // physopsim!*
    v_189 = (*qfn1(fn))(fn, v_189);
    }
    env = stack[-7];
    stack[-6] = v_189;
    v_189 = stack[0];
    if (!car_legal(v_189)) v_189 = cdrerror(v_189); else
    v_189 = cdr(v_189);
    stack[-1] = v_189;
v_39:
    v_189 = stack[-1];
    if (v_189 == nil) goto v_44;
    else goto v_45;
v_44:
    goto v_38;
v_45:
    v_189 = stack[-1];
    if (!car_legal(v_189)) v_189 = carerror(v_189); else
    v_189 = car(v_189);
    {   LispObject fn = basic_elt(env, 4); // physopsim!*
    v_189 = (*qfn1(fn))(fn, v_189);
    }
    env = stack[-7];
    stack[-5] = v_189;
    v_189 = stack[-6];
    {   LispObject fn = basic_elt(env, 5); // getphystype
    v_189 = (*qfn1(fn))(fn, v_189);
    }
    env = stack[-7];
    stack[-4] = v_189;
    v_189 = stack[-5];
    {   LispObject fn = basic_elt(env, 5); // getphystype
    v_189 = (*qfn1(fn))(fn, v_189);
    }
    env = stack[-7];
    stack[-3] = v_189;
    v_189 = stack[-4];
    if (v_189 == nil) goto v_59;
    else goto v_60;
v_59:
    v_189 = stack[-3];
    if (v_189 == nil) goto v_64;
    else goto v_65;
v_64:
    v_189 = stack[-6];
    {   LispObject fn = basic_elt(env, 6); // physop2sq
    stack[0] = (*qfn1(fn))(fn, v_189);
    }
    env = stack[-7];
    v_189 = stack[-5];
    {   LispObject fn = basic_elt(env, 6); // physop2sq
    v_189 = (*qfn1(fn))(fn, v_189);
    }
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 7); // multsq
    v_189 = (*qfn2(fn))(fn, stack[0], v_189);
    }
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 8); // mk!*sq
    v_189 = (*qfn1(fn))(fn, v_189);
    }
    env = stack[-7];
    stack[-6] = v_189;
    goto v_63;
v_65:
    v_189 = stack[-6];
    v_189 = static_cast<LispObject>(zerop(v_189));
    v_189 = v_189 ? lisp_true : nil;
    env = stack[-7];
    if (v_189 == nil) goto v_74;
    v_190 = nil;
    v_189 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_189 = cons(v_190, v_189);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 8); // mk!*sq
    v_189 = (*qfn1(fn))(fn, v_189);
    }
    env = stack[-7];
    stack[-6] = v_189;
    goto v_63;
v_74:
    v_189 = stack[-6];
    v_189 = Lonep(nil, v_189);
    env = stack[-7];
    if (v_189 == nil) goto v_82;
    v_189 = stack[-5];
    {   LispObject fn = basic_elt(env, 6); // physop2sq
    v_189 = (*qfn1(fn))(fn, v_189);
    }
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 8); // mk!*sq
    v_189 = (*qfn1(fn))(fn, v_189);
    }
    env = stack[-7];
    stack[-6] = v_189;
    goto v_63;
v_82:
    v_189 = stack[-6];
    {   LispObject fn = basic_elt(env, 6); // physop2sq
    stack[0] = (*qfn1(fn))(fn, v_189);
    }
    env = stack[-7];
    v_189 = stack[-5];
    {   LispObject fn = basic_elt(env, 6); // physop2sq
    v_189 = (*qfn1(fn))(fn, v_189);
    }
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 7); // multsq
    v_189 = (*qfn2(fn))(fn, stack[0], v_189);
    }
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 8); // mk!*sq
    v_189 = (*qfn1(fn))(fn, v_189);
    }
    env = stack[-7];
    stack[-6] = v_189;
    goto v_63;
v_63:
    goto v_58;
v_60:
    v_189 = stack[-3];
    if (v_189 == nil) goto v_96;
    else goto v_97;
v_96:
    v_189 = stack[-5];
    v_189 = static_cast<LispObject>(zerop(v_189));
    v_189 = v_189 ? lisp_true : nil;
    env = stack[-7];
    if (v_189 == nil) goto v_102;
    v_190 = nil;
    v_189 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_189 = cons(v_190, v_189);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 8); // mk!*sq
    v_189 = (*qfn1(fn))(fn, v_189);
    }
    env = stack[-7];
    goto v_100;
v_102:
    v_189 = stack[-5];
    v_189 = Lonep(nil, v_189);
    env = stack[-7];
    if (v_189 == nil) goto v_110;
    v_189 = stack[-6];
    {   LispObject fn = basic_elt(env, 6); // physop2sq
    v_189 = (*qfn1(fn))(fn, v_189);
    }
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 8); // mk!*sq
    v_189 = (*qfn1(fn))(fn, v_189);
    }
    env = stack[-7];
    goto v_100;
v_110:
    v_189 = stack[-5];
    {   LispObject fn = basic_elt(env, 6); // physop2sq
    stack[0] = (*qfn1(fn))(fn, v_189);
    }
    env = stack[-7];
    v_189 = stack[-6];
    {   LispObject fn = basic_elt(env, 6); // physop2sq
    v_189 = (*qfn1(fn))(fn, v_189);
    }
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 7); // multsq
    v_189 = (*qfn2(fn))(fn, stack[0], v_189);
    }
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 8); // mk!*sq
    v_189 = (*qfn1(fn))(fn, v_189);
    }
    env = stack[-7];
    goto v_100;
    v_189 = nil;
v_100:
    stack[-6] = v_189;
    goto v_58;
v_97:
    v_189 = stack[-6];
    {   LispObject fn = basic_elt(env, 9); // physopaeval
    stack[0] = (*qfn1(fn))(fn, v_189);
    }
    env = stack[-7];
    v_189 = stack[-5];
    {   LispObject fn = basic_elt(env, 9); // physopaeval
    v_189 = (*qfn1(fn))(fn, v_189);
    }
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 10); // physopordchk
    v_189 = (*qfn2(fn))(fn, stack[0], v_189);
    }
    env = stack[-7];
    if (v_189 == nil) goto v_125;
    v_190 = stack[-4];
    v_189 = stack[-3];
    if (equal(v_190, v_189)) goto v_135;
    else goto v_136;
v_135:
    v_190 = stack[-4];
    v_189 = basic_elt(env, 3); // scalar
    v_189 = (v_190 == v_189 ? lisp_true : nil);
    goto v_134;
v_136:
    v_189 = nil;
    goto v_134;
    v_189 = nil;
v_134:
    if (v_189 == nil) goto v_125;
    v_189 = stack[-6];
    {   LispObject fn = basic_elt(env, 6); // physop2sq
    stack[0] = (*qfn1(fn))(fn, v_189);
    }
    env = stack[-7];
    v_189 = stack[-5];
    {   LispObject fn = basic_elt(env, 6); // physop2sq
    v_189 = (*qfn1(fn))(fn, v_189);
    }
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 7); // multsq
    v_189 = (*qfn2(fn))(fn, stack[0], v_189);
    }
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 8); // mk!*sq
    v_189 = (*qfn1(fn))(fn, v_189);
    }
    env = stack[-7];
    stack[-6] = v_189;
    goto v_58;
v_125:
    v_190 = stack[-6];
    v_189 = stack[-5];
    {   LispObject fn = basic_elt(env, 11); // multopop!*
    v_189 = (*qfn2(fn))(fn, v_190, v_189);
    }
    env = stack[-7];
    stack[-6] = v_189;
    goto v_58;
v_58:
    v_189 = stack[-1];
    if (!car_legal(v_189)) v_189 = cdrerror(v_189); else
    v_189 = cdr(v_189);
    stack[-1] = v_189;
    goto v_39;
v_38:
v_12:
    v_189 = qvalue(basic_elt(env, 2)); // mul!*
    if (v_189 == nil) goto v_164;
    else goto v_165;
v_164:
    v_189 = lisp_true;
    goto v_163;
v_165:
    v_190 = qvalue(basic_elt(env, 1)); // tstack!*
    v_189 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_189 = static_cast<LispObject>(greaterp2(v_190, v_189));
    v_189 = v_189 ? lisp_true : nil;
    env = stack[-7];
    goto v_163;
    v_189 = nil;
v_163:
    if (v_189 == nil) goto v_161;
    goto v_13;
v_161:
    v_189 = qvalue(basic_elt(env, 2)); // mul!*
    if (!car_legal(v_189)) v_190 = carerror(v_189); else
    v_190 = car(v_189);
    v_189 = stack[-6];
    v_189 = Lapply1(nil, v_190, v_189);
    env = stack[-7];
    stack[-6] = v_189;
    v_189 = qvalue(basic_elt(env, 2)); // mul!*
    if (!car_legal(v_189)) v_189 = cdrerror(v_189); else
    v_189 = cdr(v_189);
    setvalue(basic_elt(env, 2), v_189); // mul!*
    goto v_12;
v_13:
    v_189 = qvalue(basic_elt(env, 1)); // tstack!*
    v_189 = sub1(v_189);
    env = stack[-7];
    setvalue(basic_elt(env, 1), v_189); // tstack!*
    v_190 = qvalue(basic_elt(env, 1)); // tstack!*
    v_189 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_190 == v_189) goto v_183;
    else goto v_184;
v_183:
    v_189 = stack[-2];
    setvalue(basic_elt(env, 2), v_189); // mul!*
    goto v_182;
v_184:
v_182:
    v_189 = stack[-6];
    return onevalue(v_189);
}



// Code for prop!-simp1

static LispObject CC_propKsimp1(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_63, v_64;
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(9);
// copy arguments values to proper place
    stack[0] = v_6;
    stack[-2] = v_5;
    stack[-6] = v_4;
    stack[-3] = v_3;
    stack[-4] = v_2;
// end of prologue
    v_63 = stack[-3];
    if (v_63 == nil) goto v_10;
    else goto v_11;
v_10:
    v_64 = stack[-2];
    v_63 = stack[0];
    stack[0] = list2(v_64, v_63);
    env = stack[-8];
    stack[-1] = stack[-4];
    v_63 = stack[-6];
    v_63 = Lreverse(nil, v_63);
    {
        LispObject v_73 = stack[0];
        LispObject v_74 = stack[-1];
        return list2star(v_73, v_74, v_63);
    }
v_11:
    v_64 = stack[-4];
    v_63 = stack[-3];
    if (!car_legal(v_63)) v_63 = carerror(v_63); else
    v_63 = car(v_63);
    {   LispObject fn = basic_elt(env, 1); // prop!-simp2
    v_63 = (*qfn2(fn))(fn, v_64, v_63);
    }
    env = stack[-8];
    stack[-1] = v_63;
    v_63 = stack[-1];
    if (v_63 == nil) goto v_29;
    else goto v_30;
v_29:
    v_63 = stack[-3];
    if (!car_legal(v_63)) stack[-1] = cdrerror(v_63); else
    stack[-1] = cdr(v_63);
    v_63 = stack[-3];
    if (!car_legal(v_63)) v_64 = carerror(v_63); else
    v_64 = car(v_63);
    v_63 = stack[-6];
    stack[-3] = cons(v_64, v_63);
    env = stack[-8];
    v_64 = stack[-2];
    v_63 = stack[0];
    v_63 = list2(v_64, v_63);
    env = stack[-8];
    {
        LispObject v_75 = stack[-4];
        LispObject v_76 = stack[-1];
        LispObject v_77 = stack[-3];
        LispObject fn = basic_elt(env, 0); // prop!-simp1
        return (*qfn4up(fn))(fn, v_75, v_76, v_77, v_63);
    }
v_30:
    v_63 = stack[-1];
    if (!car_legal(v_63)) stack[-7] = cdrerror(v_63); else
    stack[-7] = cdr(v_63);
    v_63 = stack[-3];
    if (!car_legal(v_63)) stack[-5] = cdrerror(v_63); else
    stack[-5] = cdr(v_63);
    stack[-4] = stack[-6];
    v_63 = stack[-2];
    stack[-3] = add1(v_63);
    env = stack[-8];
    v_63 = stack[-1];
    if (!car_legal(v_63)) stack[-2] = carerror(v_63); else
    stack[-2] = car(v_63);
    stack[-1] = stack[0];
    stack[0] = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    v_63 = stack[-6];
    v_63 = Llength(nil, v_63);
    env = stack[-8];
    v_63 = Lexpt(nil, stack[0], v_63);
    env = stack[-8];
    v_63 = times2(stack[-1], v_63);
    env = stack[-8];
    v_63 = times2(stack[-2], v_63);
    env = stack[-8];
    v_63 = list2(stack[-3], v_63);
    env = stack[-8];
    {
        LispObject v_78 = stack[-7];
        LispObject v_79 = stack[-5];
        LispObject v_80 = stack[-4];
        LispObject fn = basic_elt(env, 0); // prop!-simp1
        return (*qfn4up(fn))(fn, v_78, v_79, v_80, v_63);
    }
    v_63 = nil;
    goto v_9;
    v_63 = nil;
v_9:
    return onevalue(v_63);
}



// Code for liennewstruc

static LispObject CC_liennewstruc(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_371, v_372, v_373, v_374;
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
    stack[-12] = v_4;
    stack[-13] = v_3;
    stack[-14] = v_2;
// end of prologue
    v_373 = basic_elt(env, 1); // lie_a
    v_372 = stack[-14];
    v_371 = stack[-14];
    v_371 = list3(v_373, v_372, v_371);
    env = stack[-16];
    v_371 = ncons(v_371);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 11); // matrix
    v_371 = (*qfn1(fn))(fn, v_371);
    }
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 12); // aeval
    v_371 = (*qfn1(fn))(fn, v_371);
    }
    env = stack[-16];
    stack[0] = basic_elt(env, 1); // lie_a
    v_373 = basic_elt(env, 2); // expt
    v_372 = basic_elt(env, 1); // lie_a
    v_371 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_371 = list3(v_373, v_372, v_371);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 12); // aeval
    v_371 = (*qfn1(fn))(fn, v_371);
    }
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 13); // setk
    v_371 = (*qfn2(fn))(fn, stack[0], v_371);
    }
    env = stack[-16];
    v_371 = stack[-13];
    {   LispObject fn = basic_elt(env, 14); // aeval!*
    v_371 = (*qfn1(fn))(fn, v_371);
    }
    env = stack[-16];
    stack[-15] = v_371;
v_25:
    stack[0] = basic_elt(env, 3); // difference
    v_373 = basic_elt(env, 3); // difference
    v_372 = stack[-14];
    v_371 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_371 = list3(v_373, v_372, v_371);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 14); // aeval!*
    v_372 = (*qfn1(fn))(fn, v_371);
    }
    env = stack[-16];
    v_371 = stack[-15];
    v_371 = list3(stack[0], v_372, v_371);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 15); // aminusp!:
    v_371 = (*qfn1(fn))(fn, v_371);
    }
    env = stack[-16];
    if (v_371 == nil) goto v_31;
    goto v_24;
v_31:
    v_373 = basic_elt(env, 4); // plus
    v_372 = stack[-15];
    v_371 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_371 = list3(v_373, v_372, v_371);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 14); // aeval!*
    v_371 = (*qfn1(fn))(fn, v_371);
    }
    env = stack[-16];
    stack[-11] = v_371;
v_45:
    stack[0] = basic_elt(env, 3); // difference
    v_371 = stack[-14];
    {   LispObject fn = basic_elt(env, 14); // aeval!*
    v_372 = (*qfn1(fn))(fn, v_371);
    }
    env = stack[-16];
    v_371 = stack[-11];
    v_371 = list3(stack[0], v_372, v_371);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 15); // aminusp!:
    v_371 = (*qfn1(fn))(fn, v_371);
    }
    env = stack[-16];
    if (v_371 == nil) goto v_54;
    goto v_44;
v_54:
    v_373 = basic_elt(env, 5); // lie_lamb
    v_372 = stack[-15];
    v_371 = stack[-11];
    stack[-10] = list3(v_373, v_372, v_371);
    env = stack[-16];
    stack[-9] = basic_elt(env, 6); // quotient
    v_371 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-8] = v_371;
    v_371 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-7] = v_371;
v_74:
    stack[0] = basic_elt(env, 3); // difference
    v_371 = stack[-14];
    {   LispObject fn = basic_elt(env, 14); // aeval!*
    v_372 = (*qfn1(fn))(fn, v_371);
    }
    env = stack[-16];
    v_371 = stack[-8];
    v_371 = list3(stack[0], v_372, v_371);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 15); // aminusp!:
    v_371 = (*qfn1(fn))(fn, v_371);
    }
    env = stack[-16];
    if (v_371 == nil) goto v_80;
    v_371 = stack[-7];
    stack[0] = v_371;
    goto v_73;
v_80:
    stack[-6] = basic_elt(env, 4); // plus
    v_371 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-5] = v_371;
    v_371 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-4] = v_371;
v_95:
    stack[0] = basic_elt(env, 3); // difference
    v_371 = stack[-14];
    {   LispObject fn = basic_elt(env, 14); // aeval!*
    v_372 = (*qfn1(fn))(fn, v_371);
    }
    env = stack[-16];
    v_371 = stack[-5];
    v_371 = list3(stack[0], v_372, v_371);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 15); // aminusp!:
    v_371 = (*qfn1(fn))(fn, v_371);
    }
    env = stack[-16];
    if (v_371 == nil) goto v_101;
    v_371 = stack[-4];
    v_372 = v_371;
    goto v_94;
v_101:
    stack[-3] = basic_elt(env, 4); // plus
    stack[-2] = basic_elt(env, 7); // times
    v_373 = basic_elt(env, 8); // lientrans
    v_372 = stack[-15];
    v_371 = stack[-8];
    stack[-1] = list3(v_373, v_372, v_371);
    env = stack[-16];
    v_373 = basic_elt(env, 8); // lientrans
    v_372 = stack[-11];
    v_371 = stack[-5];
    stack[0] = list3(v_373, v_372, v_371);
    env = stack[-16];
    v_374 = basic_elt(env, 9); // lie_cc
    v_373 = stack[-8];
    v_372 = stack[-5];
    v_371 = stack[-12];
    v_371 = list4(v_374, v_373, v_372, v_371);
    env = stack[-16];
    v_371 = list4(stack[-2], stack[-1], stack[0], v_371);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 14); // aeval!*
    v_372 = (*qfn1(fn))(fn, v_371);
    }
    env = stack[-16];
    v_371 = stack[-4];
    v_371 = list3(stack[-3], v_372, v_371);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 14); // aeval!*
    v_371 = (*qfn1(fn))(fn, v_371);
    }
    env = stack[-16];
    stack[-4] = v_371;
    v_371 = stack[-5];
    v_373 = basic_elt(env, 4); // plus
    v_372 = v_371;
    v_371 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_371 = list3(v_373, v_372, v_371);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 14); // aeval!*
    v_371 = (*qfn1(fn))(fn, v_371);
    }
    env = stack[-16];
    stack[-5] = v_371;
    goto v_95;
v_94:
    v_371 = stack[-7];
    v_371 = list3(stack[-6], v_372, v_371);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 14); // aeval!*
    v_371 = (*qfn1(fn))(fn, v_371);
    }
    env = stack[-16];
    stack[-7] = v_371;
    v_371 = stack[-8];
    v_373 = basic_elt(env, 4); // plus
    v_372 = v_371;
    v_371 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_371 = list3(v_373, v_372, v_371);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 14); // aeval!*
    v_371 = (*qfn1(fn))(fn, v_371);
    }
    env = stack[-16];
    stack[-8] = v_371;
    goto v_74;
v_73:
    v_373 = basic_elt(env, 8); // lientrans
    v_372 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_371 = stack[-12];
    v_371 = list3(v_373, v_372, v_371);
    env = stack[-16];
    v_371 = list3(stack[-9], stack[0], v_371);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 14); // aeval!*
    v_371 = (*qfn1(fn))(fn, v_371);
    }
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 13); // setk
    v_371 = (*qfn2(fn))(fn, stack[-10], v_371);
    }
    env = stack[-16];
    v_371 = stack[-11];
    v_373 = basic_elt(env, 4); // plus
    v_372 = v_371;
    v_371 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_371 = list3(v_373, v_372, v_371);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 14); // aeval!*
    v_371 = (*qfn1(fn))(fn, v_371);
    }
    env = stack[-16];
    stack[-11] = v_371;
    goto v_45;
v_44:
    v_371 = stack[-15];
    v_373 = basic_elt(env, 4); // plus
    v_372 = v_371;
    v_371 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_371 = list3(v_373, v_372, v_371);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 14); // aeval!*
    v_371 = (*qfn1(fn))(fn, v_371);
    }
    env = stack[-16];
    stack[-15] = v_371;
    goto v_25;
v_24:
    v_373 = basic_elt(env, 4); // plus
    v_372 = stack[-13];
    v_371 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_371 = list3(v_373, v_372, v_371);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 14); // aeval!*
    v_371 = (*qfn1(fn))(fn, v_371);
    }
    env = stack[-16];
    stack[-2] = v_371;
v_165:
    stack[0] = basic_elt(env, 3); // difference
    v_371 = stack[-14];
    {   LispObject fn = basic_elt(env, 14); // aeval!*
    v_372 = (*qfn1(fn))(fn, v_371);
    }
    env = stack[-16];
    v_371 = stack[-2];
    v_371 = list3(stack[0], v_372, v_371);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 15); // aminusp!:
    v_371 = (*qfn1(fn))(fn, v_371);
    }
    env = stack[-16];
    if (v_371 == nil) goto v_174;
    goto v_164;
v_174:
    stack[-1] = basic_elt(env, 1); // lie_a
    stack[0] = stack[-2];
    v_373 = basic_elt(env, 4); // plus
    v_372 = stack[-13];
    v_371 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_371 = list3(v_373, v_372, v_371);
    env = stack[-16];
    stack[-1] = list3(stack[-1], stack[0], v_371);
    env = stack[-16];
    stack[0] = basic_elt(env, 10); // minus
    v_373 = basic_elt(env, 5); // lie_lamb
    v_372 = stack[-13];
    v_371 = stack[-2];
    v_371 = list3(v_373, v_372, v_371);
    env = stack[-16];
    v_371 = list2(stack[0], v_371);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 14); // aeval!*
    v_371 = (*qfn1(fn))(fn, v_371);
    }
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 13); // setk
    v_371 = (*qfn2(fn))(fn, stack[-1], v_371);
    }
    env = stack[-16];
    v_373 = basic_elt(env, 1); // lie_a
    v_372 = stack[-2];
    v_371 = stack[-13];
    stack[-1] = list3(v_373, v_372, v_371);
    env = stack[-16];
    stack[0] = basic_elt(env, 5); // lie_lamb
    v_373 = basic_elt(env, 4); // plus
    v_372 = stack[-13];
    v_371 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_372 = list3(v_373, v_372, v_371);
    env = stack[-16];
    v_371 = stack[-2];
    v_371 = list3(stack[0], v_372, v_371);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 14); // aeval!*
    v_371 = (*qfn1(fn))(fn, v_371);
    }
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 13); // setk
    v_371 = (*qfn2(fn))(fn, stack[-1], v_371);
    }
    env = stack[-16];
    v_371 = stack[-2];
    v_373 = basic_elt(env, 4); // plus
    v_372 = v_371;
    v_371 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_371 = list3(v_373, v_372, v_371);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 14); // aeval!*
    v_371 = (*qfn1(fn))(fn, v_371);
    }
    env = stack[-16];
    stack[-2] = v_371;
    goto v_165;
v_164:
    stack[0] = basic_elt(env, 8); // lientrans
    v_373 = basic_elt(env, 7); // times
    v_372 = basic_elt(env, 1); // lie_a
    v_371 = basic_elt(env, 8); // lientrans
    v_371 = list3(v_373, v_372, v_371);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 12); // aeval
    v_371 = (*qfn1(fn))(fn, v_371);
    }
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 13); // setk
    v_371 = (*qfn2(fn))(fn, stack[0], v_371);
    }
    env = stack[-16];
    v_373 = basic_elt(env, 4); // plus
    v_372 = stack[-13];
    v_371 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_371 = list3(v_373, v_372, v_371);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 14); // aeval!*
    v_371 = (*qfn1(fn))(fn, v_371);
    }
    env = stack[-16];
    stack[-13] = v_371;
v_227:
    stack[0] = basic_elt(env, 3); // difference
    v_373 = basic_elt(env, 3); // difference
    v_372 = stack[-14];
    v_371 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_371 = list3(v_373, v_372, v_371);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 14); // aeval!*
    v_372 = (*qfn1(fn))(fn, v_371);
    }
    env = stack[-16];
    v_371 = stack[-13];
    v_371 = list3(stack[0], v_372, v_371);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 15); // aminusp!:
    v_371 = (*qfn1(fn))(fn, v_371);
    }
    env = stack[-16];
    if (v_371 == nil) goto v_236;
    goto v_226;
v_236:
    v_373 = basic_elt(env, 4); // plus
    v_372 = stack[-13];
    v_371 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_371 = list3(v_373, v_372, v_371);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 14); // aeval!*
    v_371 = (*qfn1(fn))(fn, v_371);
    }
    env = stack[-16];
    stack[-11] = v_371;
v_250:
    stack[0] = basic_elt(env, 3); // difference
    v_371 = stack[-14];
    {   LispObject fn = basic_elt(env, 14); // aeval!*
    v_372 = (*qfn1(fn))(fn, v_371);
    }
    env = stack[-16];
    v_371 = stack[-11];
    v_371 = list3(stack[0], v_372, v_371);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 15); // aminusp!:
    v_371 = (*qfn1(fn))(fn, v_371);
    }
    env = stack[-16];
    if (v_371 == nil) goto v_259;
    goto v_249;
v_259:
    v_373 = basic_elt(env, 5); // lie_lamb
    v_372 = stack[-13];
    v_371 = stack[-11];
    stack[-10] = list3(v_373, v_372, v_371);
    env = stack[-16];
    stack[-9] = basic_elt(env, 6); // quotient
    v_371 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-8] = v_371;
    v_371 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-7] = v_371;
v_279:
    stack[0] = basic_elt(env, 3); // difference
    v_371 = stack[-14];
    {   LispObject fn = basic_elt(env, 14); // aeval!*
    v_372 = (*qfn1(fn))(fn, v_371);
    }
    env = stack[-16];
    v_371 = stack[-8];
    v_371 = list3(stack[0], v_372, v_371);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 15); // aminusp!:
    v_371 = (*qfn1(fn))(fn, v_371);
    }
    env = stack[-16];
    if (v_371 == nil) goto v_285;
    v_371 = stack[-7];
    stack[0] = v_371;
    goto v_278;
v_285:
    stack[-6] = basic_elt(env, 4); // plus
    v_371 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-5] = v_371;
    v_371 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-4] = v_371;
v_300:
    stack[0] = basic_elt(env, 3); // difference
    v_371 = stack[-14];
    {   LispObject fn = basic_elt(env, 14); // aeval!*
    v_372 = (*qfn1(fn))(fn, v_371);
    }
    env = stack[-16];
    v_371 = stack[-5];
    v_371 = list3(stack[0], v_372, v_371);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 15); // aminusp!:
    v_371 = (*qfn1(fn))(fn, v_371);
    }
    env = stack[-16];
    if (v_371 == nil) goto v_306;
    v_371 = stack[-4];
    v_372 = v_371;
    goto v_299;
v_306:
    stack[-3] = basic_elt(env, 4); // plus
    stack[-2] = basic_elt(env, 7); // times
    v_373 = basic_elt(env, 8); // lientrans
    v_372 = stack[-13];
    v_371 = stack[-8];
    stack[-1] = list3(v_373, v_372, v_371);
    env = stack[-16];
    v_373 = basic_elt(env, 8); // lientrans
    v_372 = stack[-11];
    v_371 = stack[-5];
    stack[0] = list3(v_373, v_372, v_371);
    env = stack[-16];
    v_374 = basic_elt(env, 9); // lie_cc
    v_373 = stack[-8];
    v_372 = stack[-5];
    v_371 = stack[-12];
    v_371 = list4(v_374, v_373, v_372, v_371);
    env = stack[-16];
    v_371 = list4(stack[-2], stack[-1], stack[0], v_371);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 14); // aeval!*
    v_372 = (*qfn1(fn))(fn, v_371);
    }
    env = stack[-16];
    v_371 = stack[-4];
    v_371 = list3(stack[-3], v_372, v_371);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 14); // aeval!*
    v_371 = (*qfn1(fn))(fn, v_371);
    }
    env = stack[-16];
    stack[-4] = v_371;
    v_371 = stack[-5];
    v_373 = basic_elt(env, 4); // plus
    v_372 = v_371;
    v_371 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_371 = list3(v_373, v_372, v_371);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 14); // aeval!*
    v_371 = (*qfn1(fn))(fn, v_371);
    }
    env = stack[-16];
    stack[-5] = v_371;
    goto v_300;
v_299:
    v_371 = stack[-7];
    v_371 = list3(stack[-6], v_372, v_371);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 14); // aeval!*
    v_371 = (*qfn1(fn))(fn, v_371);
    }
    env = stack[-16];
    stack[-7] = v_371;
    v_371 = stack[-8];
    v_373 = basic_elt(env, 4); // plus
    v_372 = v_371;
    v_371 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_371 = list3(v_373, v_372, v_371);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 14); // aeval!*
    v_371 = (*qfn1(fn))(fn, v_371);
    }
    env = stack[-16];
    stack[-8] = v_371;
    goto v_279;
v_278:
    v_373 = basic_elt(env, 8); // lientrans
    v_372 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_371 = stack[-12];
    v_371 = list3(v_373, v_372, v_371);
    env = stack[-16];
    v_371 = list3(stack[-9], stack[0], v_371);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 14); // aeval!*
    v_371 = (*qfn1(fn))(fn, v_371);
    }
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 13); // setk
    v_371 = (*qfn2(fn))(fn, stack[-10], v_371);
    }
    env = stack[-16];
    v_371 = stack[-11];
    v_373 = basic_elt(env, 4); // plus
    v_372 = v_371;
    v_371 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_371 = list3(v_373, v_372, v_371);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 14); // aeval!*
    v_371 = (*qfn1(fn))(fn, v_371);
    }
    env = stack[-16];
    stack[-11] = v_371;
    goto v_250;
v_249:
    v_371 = stack[-13];
    v_373 = basic_elt(env, 4); // plus
    v_372 = v_371;
    v_371 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_371 = list3(v_373, v_372, v_371);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 14); // aeval!*
    v_371 = (*qfn1(fn))(fn, v_371);
    }
    env = stack[-16];
    stack[-13] = v_371;
    goto v_227;
v_226:
    v_371 = basic_elt(env, 1); // lie_a
    v_371 = ncons(v_371);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 16); // clear
    v_371 = (*qfn1(fn))(fn, v_371);
    }
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 12); // aeval
    v_371 = (*qfn1(fn))(fn, v_371);
    }
    v_371 = nil;
    return onevalue(v_371);
}



// Code for dp_neworder

static LispObject CC_dp_neworder(LispObject env,
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
    if (v_51 == nil) goto v_14;
    else goto v_15;
v_14:
    v_51 = nil;
    v_52 = v_51;
    goto v_9;
v_15:
    v_51 = stack[-4];
    if (!car_legal(v_51)) v_51 = carerror(v_51); else
    v_51 = car(v_51);
    stack[0] = v_51;
    v_51 = stack[0];
    if (!car_legal(v_51)) v_51 = carerror(v_51); else
    v_51 = car(v_51);
    {   LispObject fn = basic_elt(env, 2); // mo_neworder
    v_52 = (*qfn1(fn))(fn, v_51);
    }
    env = stack[-5];
    v_51 = stack[0];
    if (!car_legal(v_51)) v_51 = cdrerror(v_51); else
    v_51 = cdr(v_51);
    v_51 = cons(v_52, v_51);
    env = stack[-5];
    v_51 = ncons(v_51);
    env = stack[-5];
    stack[-2] = v_51;
    stack[-3] = v_51;
v_10:
    v_51 = stack[-4];
    if (!car_legal(v_51)) v_51 = cdrerror(v_51); else
    v_51 = cdr(v_51);
    stack[-4] = v_51;
    v_51 = stack[-4];
    if (v_51 == nil) goto v_32;
    else goto v_33;
v_32:
    v_51 = stack[-3];
    v_52 = v_51;
    goto v_9;
v_33:
    stack[-1] = stack[-2];
    v_51 = stack[-4];
    if (!car_legal(v_51)) v_51 = carerror(v_51); else
    v_51 = car(v_51);
    stack[0] = v_51;
    v_51 = stack[0];
    if (!car_legal(v_51)) v_51 = carerror(v_51); else
    v_51 = car(v_51);
    {   LispObject fn = basic_elt(env, 2); // mo_neworder
    v_52 = (*qfn1(fn))(fn, v_51);
    }
    env = stack[-5];
    v_51 = stack[0];
    if (!car_legal(v_51)) v_51 = cdrerror(v_51); else
    v_51 = cdr(v_51);
    v_51 = cons(v_52, v_51);
    env = stack[-5];
    v_51 = ncons(v_51);
    env = stack[-5];
    if (!car_legal(stack[-1])) rplacd_fails(stack[-1]);
    setcdr(stack[-1], v_51);
    v_51 = stack[-2];
    if (!car_legal(v_51)) v_51 = cdrerror(v_51); else
    v_51 = cdr(v_51);
    stack[-2] = v_51;
    goto v_10;
v_9:
    v_51 = basic_elt(env, 1); // dp!=mocompare
    {
        LispObject fn = basic_elt(env, 3); // sort
        return (*qfn2(fn))(fn, v_52, v_51);
    }
}



// Code for rl_fvarl

static LispObject CC_rl_fvarl(LispObject env,
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
    stack[0] = qvalue(basic_elt(env, 1)); // rl_fvarl!*
    v_8 = ncons(v_8);
    env = stack[-1];
    {
        LispObject v_10 = stack[0];
        LispObject fn = basic_elt(env, 2); // apply
        return (*qfn2(fn))(fn, v_10, v_8);
    }
}



// Code for give!*position

static LispObject CC_giveHposition(LispObject env,
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
    real_push(nil, nil, nil, nil, nil);
    stack_popper stack_popper_var(6);
// copy arguments values to proper place
    stack[-2] = v_3;
    stack[-3] = v_2;
// end of prologue
    v_53 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-4] = v_53;
    v_53 = nil;
    stack[-1] = v_53;
v_13:
    v_53 = stack[-1];
    if (v_53 == nil) goto v_20;
    else goto v_21;
v_20:
    stack[0] = stack[-4];
    v_53 = stack[-2];
    v_53 = Llength(nil, v_53);
    env = stack[-5];
    v_53 = static_cast<LispObject>(lesseq2(stack[0], v_53));
    v_53 = v_53 ? lisp_true : nil;
    env = stack[-5];
    goto v_19;
v_21:
    v_53 = nil;
    goto v_19;
    v_53 = nil;
v_19:
    if (v_53 == nil) goto v_16;
    else goto v_17;
v_16:
    goto v_12;
v_17:
    v_54 = stack[-2];
    v_53 = stack[-4];
    {   LispObject fn = basic_elt(env, 2); // nth
    v_54 = (*qfn2(fn))(fn, v_54, v_53);
    }
    env = stack[-5];
    v_53 = stack[-3];
    if (equal(v_54, v_53)) goto v_33;
    else goto v_34;
v_33:
    v_53 = lisp_true;
    stack[-1] = v_53;
    goto v_32;
v_34:
    v_53 = stack[-4];
    v_53 = add1(v_53);
    env = stack[-5];
    stack[-4] = v_53;
    goto v_32;
v_32:
    goto v_13;
v_12:
    v_53 = stack[-1];
    if (v_53 == nil) goto v_47;
    else goto v_48;
v_47:
    v_53 = basic_elt(env, 1); // "error in give position"
    {   LispObject fn = basic_elt(env, 3); // rederr
    v_53 = (*qfn1(fn))(fn, v_53);
    }
    goto v_46;
v_48:
v_46:
    v_53 = stack[-4];
    return onevalue(v_53);
}



// Code for pasf_smwcpknowl

static LispObject CC_pasf_smwcpknowl(LispObject env,
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
    v_15 = qvalue(basic_elt(env, 1)); // !*rlsusi
    if (v_15 == nil) goto v_7;
    v_15 = v_16;
    {
        LispObject fn = basic_elt(env, 2); // cl_susicpknowl
        return (*qfn1(fn))(fn, v_15);
    }
v_7:
    v_15 = v_16;
    {
        LispObject fn = basic_elt(env, 3); // cl_smcpknowl
        return (*qfn1(fn))(fn, v_15);
    }
    v_15 = nil;
    return onevalue(v_15);
}



// Code for ciml

static LispObject CC_ciml(LispObject env,
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
    v_18 = basic_elt(env, 1); // "<ci"
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
    v_18 = basic_elt(env, 3); // "</ci>"
    v_18 = Lprinc(nil, v_18);
    v_18 = nil;
    return onevalue(v_18);
}



// Code for sparpri

static LispObject CC_sparpri(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    stack[-4] = v_4;
    v_44 = v_3;
    v_45 = v_2;
// end of prologue
    stack[-5] = v_44;
    v_44 = v_45;
    stack[-3] = v_44;
v_15:
    v_44 = stack[-3];
    if (v_44 == nil) goto v_19;
    else goto v_20;
v_19:
    goto v_14;
v_20:
    v_44 = stack[-3];
    if (!car_legal(v_44)) v_44 = carerror(v_44); else
    v_44 = car(v_44);
    stack[-2] = v_44;
    stack[-1] = basic_elt(env, 1); // quote
    stack[0] = basic_elt(env, 2); // setq
    v_46 = stack[-4];
    v_45 = stack[-5];
    v_44 = stack[-2];
    if (!car_legal(v_44)) v_44 = carerror(v_44); else
    v_44 = car(v_44);
    v_45 = list3(v_46, v_45, v_44);
    env = stack[-6];
    v_44 = stack[-2];
    if (!car_legal(v_44)) v_44 = cdrerror(v_44); else
    v_44 = cdr(v_44);
    v_44 = list3(stack[0], v_45, v_44);
    env = stack[-6];
    v_45 = list2(stack[-1], v_44);
    env = stack[-6];
    v_44 = basic_elt(env, 3); // first
    {   LispObject fn = basic_elt(env, 6); // writepri
    v_44 = (*qfn2(fn))(fn, v_45, v_44);
    }
    env = stack[-6];
    v_45 = basic_elt(env, 4); // (quote !$)
    v_44 = basic_elt(env, 5); // last
    {   LispObject fn = basic_elt(env, 6); // writepri
    v_44 = (*qfn2(fn))(fn, v_45, v_44);
    }
    env = stack[-6];
    v_44 = stack[-3];
    if (!car_legal(v_44)) v_44 = cdrerror(v_44); else
    v_44 = cdr(v_44);
    stack[-3] = v_44;
    goto v_15;
v_14:
    v_44 = nil;
    return onevalue(v_44);
}



// Code for groebspolynom3

static LispObject CC_groebspolynom3(LispObject env,
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
    v_14 = v_3;
    v_15 = v_2;
// end of prologue
    {   LispObject fn = basic_elt(env, 1); // groebspolynom4
    v_14 = (*qfn2(fn))(fn, v_15, v_14);
    }
    env = stack[-1];
    stack[0] = v_14;
    v_14 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // groebsavelterm
    v_14 = (*qfn1(fn))(fn, v_14);
    }
    v_14 = stack[0];
    return onevalue(v_14);
}



// Code for evalb

static LispObject CC_evalb(LispObject env,
                         LispObject v_2)
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
    v_19 = v_17;
    v_18 = nil;
    v_17 = basic_elt(env, 1); // algebraic
    {   LispObject fn = basic_elt(env, 4); // formbool
    v_17 = (*qfn3(fn))(fn, v_19, v_18, v_17);
    }
    env = stack[0];
    {   LispObject fn = basic_elt(env, 5); // eval
    v_17 = (*qfn1(fn))(fn, v_17);
    }
    env = stack[0];
    if (v_17 == nil) goto v_7;
    v_17 = basic_elt(env, 2); // true
    goto v_5;
v_7:
    v_17 = basic_elt(env, 3); // false
    goto v_5;
    v_17 = nil;
v_5:
    return onevalue(v_17);
}



// Code for string2bytelist

static LispObject CC_string2bytelist(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_42, v_43;
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
    v_42 = v_2;
// end of prologue
    stack[-1] = nil;
    {   LispObject fn = basic_elt(env, 1); // string2list
    v_42 = (*qfn1(fn))(fn, v_42);
    }
    env = stack[-2];
    stack[0] = v_42;
v_12:
    v_42 = stack[0];
    if (v_42 == nil) goto v_15;
    else goto v_16;
v_15:
    goto v_11;
v_16:
    v_42 = stack[0];
    if (!car_legal(v_42)) v_42 = carerror(v_42); else
    v_42 = car(v_42);
    v_42 = Lminusp(nil, v_42);
    env = stack[-2];
    if (v_42 == nil) goto v_22;
    v_43 = static_cast<LispObject>(4096)+TAG_FIXNUM; // 256
    v_42 = stack[0];
    if (!car_legal(v_42)) v_42 = carerror(v_42); else
    v_42 = car(v_42);
    v_43 = plus2(v_43, v_42);
    env = stack[-2];
    v_42 = stack[-1];
    v_42 = cons(v_43, v_42);
    env = stack[-2];
    stack[-1] = v_42;
    goto v_20;
v_22:
    v_42 = stack[0];
    if (!car_legal(v_42)) v_43 = carerror(v_42); else
    v_43 = car(v_42);
    v_42 = stack[-1];
    v_42 = cons(v_43, v_42);
    env = stack[-2];
    stack[-1] = v_42;
    goto v_20;
v_20:
    v_42 = stack[0];
    if (!car_legal(v_42)) v_42 = cdrerror(v_42); else
    v_42 = cdr(v_42);
    stack[0] = v_42;
    goto v_12;
v_11:
    v_42 = stack[-1];
        return Lnreverse(nil, v_42);
    return onevalue(v_42);
}



// Code for lf!=zero

static LispObject CC_lfMzero(LispObject env,
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
    v_7 = (v_7 == nil ? lisp_true : nil);
    return onevalue(v_7);
}



// Code for clean_numid

static LispObject CC_clean_numid(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    stack[-1] = nil;
v_7:
    v_30 = stack[0];
    if (v_30 == nil) goto v_10;
    else goto v_11;
v_10:
    v_30 = stack[-1];
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn1(fn))(fn, v_30);
    }
v_11:
    v_30 = stack[0];
    if (!car_legal(v_30)) v_30 = carerror(v_30); else
    v_30 = car(v_30);
    {   LispObject fn = basic_elt(env, 2); // !*id2num
    v_30 = (*qfn1(fn))(fn, v_30);
    }
    env = stack[-2];
    if (v_30 == nil) goto v_16;
    v_30 = stack[0];
    if (!car_legal(v_30)) v_30 = cdrerror(v_30); else
    v_30 = cdr(v_30);
    stack[0] = v_30;
    goto v_7;
v_16:
    v_30 = stack[0];
    if (!car_legal(v_30)) v_31 = carerror(v_30); else
    v_31 = car(v_30);
    v_30 = stack[-1];
    v_30 = cons(v_31, v_30);
    env = stack[-2];
    stack[-1] = v_30;
    v_30 = stack[0];
    if (!car_legal(v_30)) v_30 = cdrerror(v_30); else
    v_30 = cdr(v_30);
    stack[0] = v_30;
    goto v_7;
    v_30 = nil;
    return onevalue(v_30);
}



// Code for drnconv

static LispObject CC_drnconv(LispObject env,
                         LispObject v_2)
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
        push(v_2);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_47 = v_2;
// end of prologue
    v_46 = v_47;
    if (v_46 == nil) goto v_10;
    else goto v_11;
v_10:
    v_46 = lisp_true;
    goto v_9;
v_11:
    v_46 = v_47;
    v_46 = (is_number(v_46) ? lisp_true : nil);
    if (v_46 == nil) goto v_18;
    else goto v_17;
v_18:
    v_48 = v_47;
    v_46 = qvalue(basic_elt(env, 1)); // dmd!*
    v_46 = Leqcar(nil, v_48, v_46);
    env = stack[0];
v_17:
    goto v_9;
    v_46 = nil;
v_9:
    if (v_46 == nil) goto v_7;
    v_46 = v_47;
    goto v_5;
v_7:
    v_46 = v_47;
    if (!car_legal(v_46)) v_48 = carerror(v_46); else
    v_48 = car(v_46);
    v_46 = qvalue(basic_elt(env, 1)); // dmd!*
    v_46 = get(v_48, v_46);
    v_48 = v_46;
    v_46 = v_48;
    if (v_46 == nil) goto v_35;
    v_46 = v_48;
    if (!consp(v_46)) goto v_38;
    else goto v_35;
v_38:
    v_46 = v_48;
        return Lapply1(nil, v_46, v_47);
v_35:
    v_46 = v_47;
    goto v_33;
    v_46 = nil;
v_33:
    goto v_5;
    v_46 = nil;
v_5:
    return onevalue(v_46);
}



// Code for ra_intequiv0

static LispObject CC_ra_intequiv0(LispObject env,
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
    real_push(nil, nil, nil, nil, nil);
    stack_popper stack_popper_var(6);
// copy arguments values to proper place
    stack[-3] = v_2;
// end of prologue
    v_103 = stack[-3];
    {   LispObject fn = basic_elt(env, 2); // ra_zerop
    v_103 = (*qfn1(fn))(fn, v_103);
    }
    env = stack[-5];
    if (v_103 == nil) goto v_13;
    v_103 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_9;
v_13:
    v_103 = stack[-3];
    {   LispObject fn = basic_elt(env, 3); // ra_f
    v_103 = (*qfn1(fn))(fn, v_103);
    }
    env = stack[-5];
    stack[-4] = v_103;
    v_103 = stack[-4];
    if (!car_legal(v_103)) v_103 = carerror(v_103); else
    v_103 = car(v_103);
    if (!car_legal(v_103)) v_103 = carerror(v_103); else
    v_103 = car(v_103);
    if (!car_legal(v_103)) v_104 = cdrerror(v_103); else
    v_104 = cdr(v_103);
    v_103 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_103 = Leqn_2(nil, v_104, v_103);
    env = stack[-5];
    if (v_103 == nil) goto v_22;
    v_103 = stack[-4];
    if (!car_legal(v_103)) v_103 = carerror(v_103); else
    v_103 = car(v_103);
    if (!car_legal(v_103)) v_104 = cdrerror(v_103); else
    v_104 = cdr(v_103);
    v_103 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_103 = Leqn_2(nil, v_104, v_103);
    env = stack[-5];
    if (v_103 == nil) goto v_22;
    v_103 = stack[-4];
    if (!car_legal(v_103)) v_103 = cdrerror(v_103); else
    v_103 = cdr(v_103);
    {
        LispObject fn = basic_elt(env, 4); // negf
        return (*qfn1(fn))(fn, v_103);
    }
v_22:
    v_103 = stack[-3];
    {   LispObject fn = basic_elt(env, 5); // ra_iv
    v_103 = (*qfn1(fn))(fn, v_103);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 6); // riv_l
    v_103 = (*qfn1(fn))(fn, v_103);
    }
    env = stack[-5];
    stack[-1] = v_103;
    v_103 = stack[-3];
    {   LispObject fn = basic_elt(env, 5); // ra_iv
    v_103 = (*qfn1(fn))(fn, v_103);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 7); // riv_u
    v_103 = (*qfn1(fn))(fn, v_103);
    }
    env = stack[-5];
    stack[0] = v_103;
v_47:
    stack[-2] = stack[0];
    v_103 = stack[-1];
    {   LispObject fn = basic_elt(env, 8); // negsq
    v_103 = (*qfn1(fn))(fn, v_103);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 9); // addsq
    stack[-2] = (*qfn2(fn))(fn, stack[-2], v_103);
    }
    env = stack[-5];
    v_104 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_103 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_103 = cons(v_104, v_103);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 10); // sfto_greaterq
    v_103 = (*qfn2(fn))(fn, stack[-2], v_103);
    }
    env = stack[-5];
    if (v_103 == nil) goto v_50;
    else goto v_51;
v_50:
    goto v_46;
v_51:
    stack[-2] = stack[-4];
    v_103 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_103 = ncons(v_103);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 11); // ra_refine1
    v_103 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_103);
    }
    env = stack[-5];
    v_104 = v_103;
    v_103 = v_104;
    if (!car_legal(v_103)) v_103 = carerror(v_103); else
    v_103 = car(v_103);
    stack[-1] = v_103;
    v_103 = v_104;
    if (!car_legal(v_103)) v_103 = cdrerror(v_103); else
    v_103 = cdr(v_103);
    stack[0] = v_103;
    goto v_47;
v_46:
    v_103 = stack[-1];
    {   LispObject fn = basic_elt(env, 12); // sfto_floorq
    v_103 = (*qfn1(fn))(fn, v_103);
    }
    env = stack[-5];
    if (!car_legal(v_103)) v_104 = carerror(v_103); else
    v_104 = car(v_103);
    v_103 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 13); // addf
    v_103 = (*qfn2(fn))(fn, v_104, v_103);
    }
    env = stack[-5];
    stack[-1] = v_103;
    v_104 = stack[-1];
    v_103 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_104 = cons(v_104, v_103);
    env = stack[-5];
    v_103 = stack[0];
    {   LispObject fn = basic_elt(env, 14); // sfto_lessq
    v_103 = (*qfn2(fn))(fn, v_104, v_103);
    }
    env = stack[-5];
    if (v_103 == nil) goto v_83;
    stack[0] = stack[-4];
    v_104 = basic_elt(env, 1); // x
    v_103 = stack[-1];
    v_103 = cons(v_104, v_103);
    env = stack[-5];
    v_103 = ncons(v_103);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 15); // sfto_fsub1
    v_103 = (*qfn2(fn))(fn, stack[0], v_103);
    }
    if (v_103 == nil) goto v_90;
    else goto v_83;
v_90:
    v_103 = stack[-1];
    if (v_103 == nil) goto v_99;
    else goto v_98;
v_99:
    v_103 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
v_98:
    goto v_9;
v_83:
    v_103 = stack[-3];
v_9:
    return onevalue(v_103);
}



// Code for lex_init

static LispObject CC_lex_init(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
    stack_popper stack_popper_var(1);
// end of prologue
    v_24 = static_cast<LispObject>(1024)+TAG_FIXNUM; // 64
    v_24 = Lmkvect(nil, v_24);
    env = stack[0];
    setvalue(basic_elt(env, 1), v_24); // last64
    v_24 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    setvalue(basic_elt(env, 2), v_24); // last64p
    v_24 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    setvalue(basic_elt(env, 3), v_24); // which_line
    v_24 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    setvalue(basic_elt(env, 4), v_24); // if_depth
    v_24 = qvalue(basic_elt(env, 5)); // !*tracelex
    if (v_24 == nil) goto v_11;
    v_25 = Lposn(nil);
    env = stack[0];
    v_24 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_25 == v_24) goto v_16;
    v_24 = Lterpri(nil);
    env = stack[0];
    goto v_14;
v_16:
v_14:
    v_24 = basic_elt(env, 6); // "yylex initialized"
    v_24 = Lprintc(nil, v_24);
    env = stack[0];
    goto v_9;
v_11:
v_9:
    v_24 = nil;
    setvalue(basic_elt(env, 7), v_24); // lex_peeked
    {
        LispObject fn = basic_elt(env, 8); // yyreadch
        return (*qfn0(fn))(fn);
    }
}



// Code for ofsf_sippsubst1

static LispObject CC_ofsf_sippsubst1(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_23, v_24, v_25;
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
    v_23 = v_25;
    if (!consp(v_23)) goto v_8;
    else goto v_9;
v_8:
    v_23 = v_25;
    stack[0] = v_23;
    goto v_7;
v_9:
    v_23 = v_25;
    if (!car_legal(v_23)) v_23 = carerror(v_23); else
    v_23 = car(v_23);
    stack[0] = v_23;
    goto v_7;
    stack[0] = nil;
v_7:
    v_23 = v_25;
    if (!car_legal(v_23)) v_23 = cdrerror(v_23); else
    v_23 = cdr(v_23);
    if (!car_legal(v_23)) v_23 = carerror(v_23); else
    v_23 = car(v_23);
    {   LispObject fn = basic_elt(env, 1); // ofsf_siatsubf
    v_23 = (*qfn2(fn))(fn, v_23, v_24);
    }
    if (!car_legal(v_23)) v_24 = carerror(v_23); else
    v_24 = car(v_23);
    v_23 = nil;
    {
        LispObject v_27 = stack[0];
        return list3(v_27, v_24, v_23);
    }
}



// Code for even_action_sf

static LispObject CC_even_action_sf(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_44, v_45;
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
    stack[-3] = v_5;
    stack[-4] = v_4;
    stack[-5] = v_3;
    stack[-6] = v_2;
// end of prologue
    v_45 = nil;
    v_44 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_44 = cons(v_45, v_44);
    env = stack[-8];
    v_45 = v_44;
v_15:
    v_44 = stack[-5];
    if (!consp(v_44)) goto v_22;
    else goto v_23;
v_22:
    v_44 = lisp_true;
    goto v_21;
v_23:
    v_44 = stack[-5];
    if (!car_legal(v_44)) v_44 = carerror(v_44); else
    v_44 = car(v_44);
    v_44 = (consp(v_44) ? nil : lisp_true);
    goto v_21;
    v_44 = nil;
v_21:
    if (v_44 == nil) goto v_19;
    goto v_14;
v_19:
    stack[-7] = v_45;
    stack[-2] = stack[-6];
    v_44 = stack[-5];
    if (!car_legal(v_44)) stack[-1] = carerror(v_44); else
    stack[-1] = car(v_44);
    stack[0] = stack[-4];
    v_44 = stack[-3];
    v_44 = ncons(v_44);
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 1); // even_action_term
    v_44 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_44);
    }
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 2); // addsq
    v_44 = (*qfn2(fn))(fn, stack[-7], v_44);
    }
    env = stack[-8];
    v_45 = v_44;
    v_44 = stack[-5];
    if (!car_legal(v_44)) v_44 = cdrerror(v_44); else
    v_44 = cdr(v_44);
    stack[-5] = v_44;
    goto v_15;
v_14:
    v_44 = v_45;
    return onevalue(v_44);
}



// Code for maxfrom1

static LispObject CC_maxfrom1(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    v_26 = stack[-2];
    if (v_26 == nil) goto v_11;
    else goto v_12;
v_11:
    v_26 = stack[0];
    goto v_7;
v_12:
    v_26 = stack[-2];
    if (!car_legal(v_26)) v_26 = carerror(v_26); else
    v_26 = car(v_26);
    if (!car_legal(v_26)) v_27 = carerror(v_26); else
    v_27 = car(v_26);
    v_26 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // nth
    v_27 = (*qfn2(fn))(fn, v_27, v_26);
    }
    env = stack[-3];
    v_26 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // max
    v_26 = (*qfn2(fn))(fn, v_27, v_26);
    }
    env = stack[-3];
    stack[0] = v_26;
    v_26 = stack[-2];
    if (!car_legal(v_26)) v_26 = cdrerror(v_26); else
    v_26 = cdr(v_26);
    stack[-2] = v_26;
    goto v_8;
    v_26 = nil;
v_7:
    return onevalue(v_26);
}



// Code for get!-denom!-l

static LispObject CC_getKdenomKl(LispObject env,
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
    v_50 = v_2;
// end of prologue
    v_49 = v_50;
    if (!car_legal(v_49)) v_49 = carerror(v_49); else
    v_49 = car(v_49);
    if (!consp(v_49)) goto v_6;
    else goto v_7;
v_6:
    v_49 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_5;
v_7:
    v_49 = v_50;
    if (!car_legal(v_49)) v_49 = carerror(v_49); else
    v_49 = car(v_49);
    if (!car_legal(v_49)) v_49 = cdrerror(v_49); else
    v_49 = cdr(v_49);
    if (!car_legal(v_49)) v_49 = cdrerror(v_49); else
    v_49 = cdr(v_49);
    goto v_5;
    v_49 = nil;
v_5:
    if (!car_legal(v_50)) v_50 = cdrerror(v_50); else
    v_50 = cdr(v_50);
    stack[0] = v_50;
v_21:
    v_50 = stack[0];
    if (v_50 == nil) goto v_26;
    else goto v_27;
v_26:
    goto v_20;
v_27:
    v_50 = stack[0];
    if (!car_legal(v_50)) v_50 = carerror(v_50); else
    v_50 = car(v_50);
    v_51 = v_50;
    v_50 = v_49;
    v_49 = v_51;
    if (!consp(v_49)) goto v_37;
    else goto v_38;
v_37:
    v_49 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_36;
v_38:
    v_49 = v_51;
    if (!car_legal(v_49)) v_49 = cdrerror(v_49); else
    v_49 = cdr(v_49);
    if (!car_legal(v_49)) v_49 = cdrerror(v_49); else
    v_49 = cdr(v_49);
    goto v_36;
    v_49 = nil;
v_36:
    {   LispObject fn = basic_elt(env, 1); // lcmn
    v_49 = (*qfn2(fn))(fn, v_50, v_49);
    }
    env = stack[-1];
    v_50 = stack[0];
    if (!car_legal(v_50)) v_50 = cdrerror(v_50); else
    v_50 = cdr(v_50);
    stack[0] = v_50;
    goto v_21;
v_20:
    return onevalue(v_49);
}



// Code for talp_maxd

static LispObject CC_talp_maxd(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    v_50 = v_2;
// end of prologue
    v_49 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-1] = v_49;
    v_49 = v_50;
    if (!consp(v_49)) goto v_13;
    else goto v_14;
v_13:
    v_49 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_8;
v_14:
    v_49 = v_50;
    {   LispObject fn = basic_elt(env, 1); // rl_atl
    v_49 = (*qfn1(fn))(fn, v_49);
    }
    env = stack[-3];
    stack[-2] = v_49;
v_21:
    v_49 = stack[-2];
    if (v_49 == nil) goto v_24;
    else goto v_25;
v_24:
    goto v_20;
v_25:
    v_49 = stack[-2];
    if (!car_legal(v_49)) v_49 = carerror(v_49); else
    v_49 = car(v_49);
    {   LispObject fn = basic_elt(env, 2); // talp_arg2l
    v_49 = (*qfn1(fn))(fn, v_49);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 3); // talp_td
    stack[0] = (*qfn1(fn))(fn, v_49);
    }
    env = stack[-3];
    v_49 = stack[-2];
    if (!car_legal(v_49)) v_49 = carerror(v_49); else
    v_49 = car(v_49);
    {   LispObject fn = basic_elt(env, 4); // talp_arg2r
    v_49 = (*qfn1(fn))(fn, v_49);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 3); // talp_td
    v_49 = (*qfn1(fn))(fn, v_49);
    }
    env = stack[-3];
    v_49 = Lmax_2(nil, stack[0], v_49);
    env = stack[-3];
    stack[0] = v_49;
    v_50 = stack[0];
    v_49 = stack[-1];
    v_49 = static_cast<LispObject>(greaterp2(v_50, v_49));
    v_49 = v_49 ? lisp_true : nil;
    env = stack[-3];
    if (v_49 == nil) goto v_40;
    v_49 = stack[0];
    stack[-1] = v_49;
    goto v_38;
v_40:
v_38:
    v_49 = stack[-2];
    if (!car_legal(v_49)) v_49 = cdrerror(v_49); else
    v_49 = cdr(v_49);
    stack[-2] = v_49;
    goto v_21;
v_20:
    v_49 = stack[-1];
v_8:
    return onevalue(v_49);
}



// Code for symbolsom

static LispObject CC_symbolsom(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_109, v_110, v_111;
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
    stack[-1] = nil;
// Binding name
// FLUIDBIND: reloadenv=6 litvec-offset=1 saveloc=0
{   bind_fluid_stack bind_fluid_var(-6, 1, 0);
    setvalue(basic_elt(env, 1), nil); // name
    v_109 = stack[-4];
    if (!car_legal(v_109)) v_110 = carerror(v_109); else
    v_110 = car(v_109);
    v_109 = qvalue(basic_elt(env, 2)); // valid_om!*
    v_109 = Lassoc(nil, v_110, v_109);
    stack[-5] = v_109;
    v_109 = stack[-5];
    if (v_109 == nil) goto v_19;
    v_109 = stack[-5];
    if (!car_legal(v_109)) v_109 = cdrerror(v_109); else
    v_109 = cdr(v_109);
    if (!car_legal(v_109)) v_109 = carerror(v_109); else
    v_109 = car(v_109);
    stack[-5] = v_109;
    goto v_17;
v_19:
v_17:
    v_109 = stack[-4];
    if (!car_legal(v_109)) v_109 = carerror(v_109); else
    v_109 = car(v_109);
    setvalue(basic_elt(env, 1), v_109); // name
    v_109 = stack[-4];
    if (!car_legal(v_109)) v_109 = cdrerror(v_109); else
    v_109 = cdr(v_109);
    if (!car_legal(v_109)) v_109 = cdrerror(v_109); else
    v_109 = cdr(v_109);
    if (!car_legal(v_109)) v_109 = carerror(v_109); else
    v_109 = car(v_109);
    stack[-3] = v_109;
    v_109 = stack[-4];
    v_109 = Lreverse(nil, v_109);
    env = stack[-6];
    if (!car_legal(v_109)) v_109 = carerror(v_109); else
    v_109 = car(v_109);
    stack[-2] = v_109;
    v_110 = qvalue(basic_elt(env, 1)); // name
    v_109 = basic_elt(env, 3); // diff
    if (v_110 == v_109) goto v_36;
    v_109 = stack[-4];
    if (!car_legal(v_109)) v_109 = cdrerror(v_109); else
    v_109 = cdr(v_109);
    if (!car_legal(v_109)) v_109 = cdrerror(v_109); else
    v_109 = cdr(v_109);
    if (!car_legal(v_109)) v_109 = cdrerror(v_109); else
    v_109 = cdr(v_109);
    if (!car_legal(v_109)) v_109 = carerror(v_109); else
    v_109 = car(v_109);
    stack[-1] = v_109;
    goto v_34;
v_36:
v_34:
    v_109 = stack[-1];
    if (v_109 == nil) goto v_47;
    v_109 = stack[-1];
    if (!car_legal(v_109)) v_110 = carerror(v_109); else
    v_110 = car(v_109);
    v_109 = basic_elt(env, 4); // condition
    if (v_110 == v_109) goto v_51;
    else goto v_52;
v_51:
    v_110 = basic_elt(env, 5); // "<condition> tag not supported in MathML"
    v_109 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 14); // errorml
    v_109 = (*qfn2(fn))(fn, v_110, v_109);
    }
    env = stack[-6];
    goto v_50;
v_52:
v_50:
    goto v_45;
v_47:
v_45:
    v_109 = basic_elt(env, 6); // "<OMA>"
    {   LispObject fn = basic_elt(env, 15); // printout
    v_109 = (*qfn1(fn))(fn, v_109);
    }
    env = stack[-6];
    v_109 = lisp_true;
    {   LispObject fn = basic_elt(env, 16); // indent!*
    v_109 = (*qfn1(fn))(fn, v_109);
    }
    env = stack[-6];
    v_109 = stack[-1];
    if (v_109 == nil) goto v_70;
    v_110 = qvalue(basic_elt(env, 1)); // name
    v_109 = basic_elt(env, 7); // int
    v_109 = (v_110 == v_109 ? lisp_true : nil);
    goto v_68;
v_70:
    v_109 = nil;
    goto v_68;
    v_109 = nil;
v_68:
    if (v_109 == nil) goto v_66;
    v_109 = basic_elt(env, 8); // defint
    setvalue(basic_elt(env, 1), v_109); // name
    goto v_64;
v_66:
v_64:
    v_109 = basic_elt(env, 9); // "<OMS cd="""
    {   LispObject fn = basic_elt(env, 15); // printout
    v_109 = (*qfn1(fn))(fn, v_109);
    }
    env = stack[-6];
    v_109 = stack[-5];
    v_109 = Lprinc(nil, v_109);
    env = stack[-6];
    v_109 = basic_elt(env, 10); // """ name="""
    v_109 = Lprinc(nil, v_109);
    env = stack[-6];
    v_109 = qvalue(basic_elt(env, 1)); // name
    v_109 = Lprinc(nil, v_109);
    env = stack[-6];
    v_109 = basic_elt(env, 11); // """/>"
    v_109 = Lprinc(nil, v_109);
    env = stack[-6];
    v_109 = stack[-1];
    if (v_109 == nil) goto v_92;
    v_109 = stack[-1];
    {   LispObject fn = basic_elt(env, 17); // objectom
    v_109 = (*qfn1(fn))(fn, v_109);
    }
    env = stack[-6];
    goto v_90;
v_92:
v_90:
    stack[-4] = basic_elt(env, 12); // lambda
    stack[-1] = nil;
    v_111 = stack[-3];
    v_110 = stack[-2];
    v_109 = nil;
    v_109 = list2star(v_111, v_110, v_109);
    env = stack[-6];
    v_109 = list2star(stack[-4], stack[-1], v_109);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 18); // lambdaom
    v_109 = (*qfn1(fn))(fn, v_109);
    }
    env = stack[-6];
    v_109 = nil;
    {   LispObject fn = basic_elt(env, 16); // indent!*
    v_109 = (*qfn1(fn))(fn, v_109);
    }
    env = stack[-6];
    v_109 = basic_elt(env, 13); // "</OMA>"
    {   LispObject fn = basic_elt(env, 15); // printout
    v_109 = (*qfn1(fn))(fn, v_109);
    }
    v_109 = nil;
    ;}  // end of a binding scope
    return onevalue(v_109);
}



// Code for degreef

static LispObject CC_degreef(LispObject env,
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
    v_44 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
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
    if (v_45 == v_44) goto v_21;
    else goto v_22;
v_21:
    v_44 = stack[-1];
    if (!car_legal(v_44)) v_44 = carerror(v_44); else
    v_44 = car(v_44);
    if (!car_legal(v_44)) v_44 = carerror(v_44); else
    v_44 = car(v_44);
    if (!car_legal(v_44)) v_44 = cdrerror(v_44); else
    v_44 = cdr(v_44);
    goto v_6;
v_22:
    v_44 = stack[-1];
    if (!car_legal(v_44)) v_44 = carerror(v_44); else
    v_44 = car(v_44);
    if (!car_legal(v_44)) v_45 = cdrerror(v_44); else
    v_45 = cdr(v_44);
    v_44 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // degreef
    stack[-2] = (*qfn2(fn))(fn, v_45, v_44);
    }
    env = stack[-3];
    v_44 = stack[-1];
    if (!car_legal(v_44)) v_45 = cdrerror(v_44); else
    v_45 = cdr(v_44);
    v_44 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // degreef
    v_44 = (*qfn2(fn))(fn, v_45, v_44);
    }
    env = stack[-3];
    {
        LispObject v_49 = stack[-2];
        LispObject fn = basic_elt(env, 1); // max
        return (*qfn2(fn))(fn, v_49, v_44);
    }
    v_44 = nil;
v_6:
    return onevalue(v_44);
}



// Code for sc_mkmatrix

static LispObject CC_sc_mkmatrix(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(9);
// copy arguments values to proper place
    stack[-5] = v_3;
    stack[-6] = v_2;
// end of prologue
    v_60 = stack[-6];
    v_60 = sub1(v_60);
    env = stack[-8];
    v_60 = Lmkvect(nil, v_60);
    env = stack[-8];
    stack[-7] = v_60;
    v_60 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-3] = v_60;
v_15:
    v_60 = stack[-6];
    v_61 = sub1(v_60);
    env = stack[-8];
    v_60 = stack[-3];
    v_60 = difference2(v_61, v_60);
    env = stack[-8];
    v_60 = Lminusp(nil, v_60);
    env = stack[-8];
    if (v_60 == nil) goto v_20;
    goto v_14;
v_20:
    v_60 = stack[-5];
    v_60 = sub1(v_60);
    env = stack[-8];
    v_60 = Lmkvect(nil, v_60);
    env = stack[-8];
    stack[-4] = v_60;
    v_60 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-2] = v_60;
v_33:
    v_60 = stack[-5];
    v_61 = sub1(v_60);
    env = stack[-8];
    v_60 = stack[-2];
    v_60 = difference2(v_61, v_60);
    env = stack[-8];
    v_60 = Lminusp(nil, v_60);
    env = stack[-8];
    if (v_60 == nil) goto v_38;
    goto v_32;
v_38:
    stack[-1] = stack[-4];
    stack[0] = stack[-2];
    v_60 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {   LispObject fn = basic_elt(env, 1); // sc_simp
    v_60 = (*qfn1(fn))(fn, v_60);
    }
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 2); // sc_iputv
    v_60 = (*qfn3(fn))(fn, stack[-1], stack[0], v_60);
    }
    env = stack[-8];
    v_60 = stack[-2];
    v_60 = add1(v_60);
    env = stack[-8];
    stack[-2] = v_60;
    goto v_33;
v_32:
    v_62 = stack[-7];
    v_61 = stack[-3];
    v_60 = stack[-4];
    {   LispObject fn = basic_elt(env, 2); // sc_iputv
    v_60 = (*qfn3(fn))(fn, v_62, v_61, v_60);
    }
    env = stack[-8];
    v_60 = stack[-3];
    v_60 = add1(v_60);
    env = stack[-8];
    stack[-3] = v_60;
    goto v_15;
v_14:
    v_60 = stack[-7];
    return onevalue(v_60);
}



// Code for collectphysops_reversed

static LispObject CC_collectphysops_reversed(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_50 = stack[-1];
    if (!consp(v_50)) goto v_9;
    else goto v_10;
v_9:
    v_50 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // physopp
    v_50 = (*qfn1(fn))(fn, v_50);
    }
    if (v_50 == nil) goto v_15;
    v_51 = stack[-1];
    v_50 = stack[0];
    return cons(v_51, v_50);
v_15:
    v_50 = stack[0];
    goto v_6;
    goto v_8;
v_10:
    v_50 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // physopp
    v_50 = (*qfn1(fn))(fn, v_50);
    }
    env = stack[-3];
    if (v_50 == nil) goto v_25;
    stack[-2] = stack[-1];
    v_50 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // collectindices
    v_50 = (*qfn1(fn))(fn, v_50);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 3); // removeindices
    v_51 = (*qfn2(fn))(fn, stack[-2], v_50);
    }
    v_50 = stack[0];
    return cons(v_51, v_50);
v_25:
v_8:
v_36:
    v_50 = stack[-1];
    if (!consp(v_50)) goto v_39;
    else goto v_40;
v_39:
    goto v_35;
v_40:
    v_50 = stack[-1];
    if (!car_legal(v_50)) v_51 = carerror(v_50); else
    v_51 = car(v_50);
    v_50 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // collectphysops_reversed
    v_50 = (*qfn2(fn))(fn, v_51, v_50);
    }
    env = stack[-3];
    stack[0] = v_50;
    v_50 = stack[-1];
    if (!car_legal(v_50)) v_50 = cdrerror(v_50); else
    v_50 = cdr(v_50);
    stack[-1] = v_50;
    goto v_36;
v_35:
    v_50 = stack[0];
v_6:
    return onevalue(v_50);
}



// Code for contr2

static LispObject CC_contr2(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    v_38 = stack[-1];
    if (v_38 == nil) goto v_12;
    else goto v_13;
v_12:
    stack[-1] = stack[-3];
    v_39 = stack[-2];
    v_38 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // contr
    v_38 = (*qfn2(fn))(fn, v_39, v_38);
    }
    env = stack[-4];
    {
        LispObject v_44 = stack[-1];
        LispObject fn = basic_elt(env, 2); // nreverse
        return (*qfn2(fn))(fn, v_44, v_38);
    }
v_13:
    v_38 = stack[0];
    if (v_38 == nil) goto v_20;
    else goto v_21;
v_20:
    stack[0] = stack[-3];
    v_39 = stack[-2];
    v_38 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // contr
    v_38 = (*qfn2(fn))(fn, v_39, v_38);
    }
    env = stack[-4];
    {
        LispObject v_45 = stack[0];
        LispObject fn = basic_elt(env, 2); // nreverse
        return (*qfn2(fn))(fn, v_45, v_38);
    }
v_21:
    v_39 = stack[-2];
    v_38 = stack[-1];
    if (!car_legal(v_38)) v_38 = carerror(v_38); else
    v_38 = car(v_38);
    {   LispObject fn = basic_elt(env, 3); // split!-road
    v_39 = (*qfn2(fn))(fn, v_39, v_38);
    }
    env = stack[-4];
    v_38 = stack[-3];
    v_38 = cons(v_39, v_38);
    env = stack[-4];
    stack[-3] = v_38;
    v_38 = stack[-1];
    if (!car_legal(v_38)) v_38 = cdrerror(v_38); else
    v_38 = cdr(v_38);
    stack[-1] = v_38;
    goto v_9;
    v_38 = nil;
    return onevalue(v_38);
}



// Code for listsub

static LispObject CC_listsub(LispObject env,
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
    v_46 = v_3;
    stack[-3] = v_2;
// end of prologue
    if (!car_legal(v_46)) v_46 = cdrerror(v_46); else
    v_46 = cdr(v_46);
    stack[-4] = v_46;
    v_46 = stack[-4];
    if (v_46 == nil) goto v_16;
    else goto v_17;
v_16:
    v_46 = nil;
    goto v_10;
v_17:
    v_46 = stack[-4];
    if (!car_legal(v_46)) v_46 = carerror(v_46); else
    v_46 = car(v_46);
    v_47 = stack[-3];
    {   LispObject fn = basic_elt(env, 1); // subeval1
    v_46 = (*qfn2(fn))(fn, v_47, v_46);
    }
    env = stack[-5];
    v_46 = ncons(v_46);
    env = stack[-5];
    stack[-1] = v_46;
    stack[-2] = v_46;
v_11:
    v_46 = stack[-4];
    if (!car_legal(v_46)) v_46 = cdrerror(v_46); else
    v_46 = cdr(v_46);
    stack[-4] = v_46;
    v_46 = stack[-4];
    if (v_46 == nil) goto v_31;
    else goto v_32;
v_31:
    v_46 = stack[-2];
    goto v_10;
v_32:
    stack[0] = stack[-1];
    v_46 = stack[-4];
    if (!car_legal(v_46)) v_46 = carerror(v_46); else
    v_46 = car(v_46);
    v_47 = stack[-3];
    {   LispObject fn = basic_elt(env, 1); // subeval1
    v_46 = (*qfn2(fn))(fn, v_47, v_46);
    }
    env = stack[-5];
    v_46 = ncons(v_46);
    env = stack[-5];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_46);
    v_46 = stack[-1];
    if (!car_legal(v_46)) v_46 = cdrerror(v_46); else
    v_46 = cdr(v_46);
    stack[-1] = v_46;
    goto v_11;
v_10:
    {
        LispObject fn = basic_elt(env, 2); // makelist
        return (*qfn1(fn))(fn, v_46);
    }
}



// Code for fs!:make!-nullangle

static LispObject CC_fsTmakeKnullangle(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    push(nil, nil);
    stack_popper stack_popper_var(3);
// end of prologue
    v_29 = static_cast<LispObject>(112)+TAG_FIXNUM; // 7
    v_29 = Lmkvect(nil, v_29);
    env = stack[-2];
    stack[-1] = v_29;
    v_29 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[0] = v_29;
v_11:
    v_30 = static_cast<LispObject>(112)+TAG_FIXNUM; // 7
    v_29 = stack[0];
    v_29 = difference2(v_30, v_29);
    env = stack[-2];
    v_29 = Lminusp(nil, v_29);
    env = stack[-2];
    if (v_29 == nil) goto v_16;
    goto v_10;
v_16:
    v_31 = stack[-1];
    v_30 = stack[0];
    v_29 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_29 = Lputv(nil, v_31, v_30, v_29);
    env = stack[-2];
    v_29 = stack[0];
    v_29 = add1(v_29);
    env = stack[-2];
    stack[0] = v_29;
    goto v_11;
v_10:
    v_29 = stack[-1];
    return onevalue(v_29);
}



// Code for groeb!=crita

static LispObject CC_groebMcrita(LispObject env,
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
    v_7 = basic_elt(env, 1); // groeb!=testa
    {
        LispObject fn = basic_elt(env, 2); // listminimize
        return (*qfn2(fn))(fn, v_8, v_7);
    }
}



// Code for split!-further

static LispObject CC_splitKfurther(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_116, v_117, v_118;
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
    stack[0] = v_4;
    stack[-1] = v_3;
    stack[-4] = v_2;
// end of prologue
    v_116 = stack[-4];
    if (v_116 == nil) goto v_8;
    else goto v_9;
v_8:
    v_116 = nil;
    return ncons(v_116);
v_9:
    v_116 = stack[-4];
    if (!car_legal(v_116)) v_118 = cdrerror(v_116); else
    v_118 = cdr(v_116);
    v_117 = stack[-1];
    v_116 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // split!-further
    v_116 = (*qfn3(fn))(fn, v_118, v_117, v_116);
    }
    env = stack[-6];
    stack[-5] = v_116;
    v_116 = stack[-5];
    if (!car_legal(v_116)) v_116 = cdrerror(v_116); else
    v_116 = cdr(v_116);
    stack[-3] = v_116;
    v_116 = stack[-5];
    if (!car_legal(v_116)) v_116 = carerror(v_116); else
    v_116 = car(v_116);
    stack[-5] = v_116;
    v_117 = qvalue(basic_elt(env, 1)); // number!-needed
    v_116 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_117 == v_116) goto v_33;
    else goto v_34;
v_33:
    goto v_21;
v_34:
    v_118 = stack[-1];
    v_117 = stack[0];
    v_116 = qvalue(basic_elt(env, 2)); // work!-vector1
    {   LispObject fn = basic_elt(env, 6); // copy!-vector
    v_116 = (*qfn3(fn))(fn, v_118, v_117, v_116);
    }
    env = stack[-6];
    setvalue(basic_elt(env, 3), v_116); // dwork1
    v_116 = stack[-4];
    if (!car_legal(v_116)) v_116 = carerror(v_116); else
    v_116 = car(v_116);
    if (!car_legal(v_116)) v_118 = carerror(v_116); else
    v_118 = car(v_116);
    v_116 = stack[-4];
    if (!car_legal(v_116)) v_116 = carerror(v_116); else
    v_116 = car(v_116);
    if (!car_legal(v_116)) v_117 = cdrerror(v_116); else
    v_117 = cdr(v_116);
    v_116 = qvalue(basic_elt(env, 4)); // work!-vector2
    {   LispObject fn = basic_elt(env, 6); // copy!-vector
    v_116 = (*qfn3(fn))(fn, v_118, v_117, v_116);
    }
    env = stack[-6];
    setvalue(basic_elt(env, 5), v_116); // dwork2
    stack[-2] = qvalue(basic_elt(env, 2)); // work!-vector1
    stack[-1] = qvalue(basic_elt(env, 3)); // dwork1
    stack[0] = qvalue(basic_elt(env, 4)); // work!-vector2
    v_116 = qvalue(basic_elt(env, 5)); // dwork2
    v_116 = ncons(v_116);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 7); // gcd!-in!-vector
    v_116 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_116);
    }
    env = stack[-6];
    setvalue(basic_elt(env, 3), v_116); // dwork1
    v_117 = qvalue(basic_elt(env, 3)); // dwork1
    v_116 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_117 == v_116) goto v_61;
    else goto v_62;
v_61:
    v_116 = lisp_true;
    goto v_60;
v_62:
    v_117 = qvalue(basic_elt(env, 3)); // dwork1
    v_116 = stack[-4];
    if (!car_legal(v_116)) v_116 = carerror(v_116); else
    v_116 = car(v_116);
    if (!car_legal(v_116)) v_116 = cdrerror(v_116); else
    v_116 = cdr(v_116);
    v_116 = (equal(v_117, v_116) ? lisp_true : nil);
    goto v_60;
    v_116 = nil;
v_60:
    if (v_116 == nil) goto v_58;
    goto v_21;
v_58:
    v_116 = stack[-4];
    if (!car_legal(v_116)) v_116 = carerror(v_116); else
    v_116 = car(v_116);
    if (!car_legal(v_116)) v_118 = carerror(v_116); else
    v_118 = car(v_116);
    v_116 = stack[-4];
    if (!car_legal(v_116)) v_116 = carerror(v_116); else
    v_116 = car(v_116);
    if (!car_legal(v_116)) v_117 = cdrerror(v_116); else
    v_117 = cdr(v_116);
    v_116 = qvalue(basic_elt(env, 4)); // work!-vector2
    {   LispObject fn = basic_elt(env, 6); // copy!-vector
    v_116 = (*qfn3(fn))(fn, v_118, v_117, v_116);
    }
    env = stack[-6];
    setvalue(basic_elt(env, 5), v_116); // dwork2
    stack[-2] = qvalue(basic_elt(env, 4)); // work!-vector2
    stack[-1] = qvalue(basic_elt(env, 5)); // dwork2
    stack[0] = qvalue(basic_elt(env, 2)); // work!-vector1
    v_116 = qvalue(basic_elt(env, 3)); // dwork1
    v_116 = ncons(v_116);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 8); // quotfail!-in!-vector
    v_116 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_116);
    }
    env = stack[-6];
    setvalue(basic_elt(env, 5), v_116); // dwork2
    v_116 = qvalue(basic_elt(env, 3)); // dwork1
    v_116 = Lmkvect(nil, v_116);
    env = stack[-6];
    stack[0] = v_116;
    v_118 = qvalue(basic_elt(env, 2)); // work!-vector1
    v_117 = qvalue(basic_elt(env, 3)); // dwork1
    v_116 = stack[0];
    {   LispObject fn = basic_elt(env, 6); // copy!-vector
    v_116 = (*qfn3(fn))(fn, v_118, v_117, v_116);
    }
    env = stack[-6];
    v_118 = stack[0];
    v_117 = qvalue(basic_elt(env, 3)); // dwork1
    v_116 = stack[-5];
    v_116 = acons(v_118, v_117, v_116);
    env = stack[-6];
    stack[-5] = v_116;
    stack[-1] = qvalue(basic_elt(env, 4)); // work!-vector2
    stack[0] = qvalue(basic_elt(env, 5)); // dwork2
    v_116 = qvalue(basic_elt(env, 5)); // dwork2
    v_116 = Lmkvect(nil, v_116);
    env = stack[-6];
    stack[-2] = v_116;
    {   LispObject fn = basic_elt(env, 6); // copy!-vector
    v_116 = (*qfn3(fn))(fn, stack[-1], stack[0], v_116);
    }
    env = stack[-6];
    v_118 = stack[-2];
    v_117 = qvalue(basic_elt(env, 5)); // dwork2
    v_116 = stack[-3];
    v_116 = acons(v_118, v_117, v_116);
    env = stack[-6];
    stack[-3] = v_116;
    v_116 = qvalue(basic_elt(env, 1)); // number!-needed
    v_116 = static_cast<LispObject>(static_cast<std::intptr_t>(v_116) - 0x10);
    setvalue(basic_elt(env, 1), v_116); // number!-needed
    v_117 = stack[-5];
    v_116 = stack[-3];
    return cons(v_117, v_116);
v_21:
    v_118 = stack[-5];
    v_116 = stack[-4];
    if (!car_legal(v_116)) v_117 = carerror(v_116); else
    v_117 = car(v_116);
    v_116 = stack[-3];
    return list2star(v_118, v_117, v_116);
    goto v_7;
    v_116 = nil;
v_7:
    return onevalue(v_116);
}



// Code for rl_transform

static LispObject CC_rl_transform(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_21, v_22, v_23, v_24, v_25, v_26, v_27;
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    v_21 = v_8;
    v_22 = v_7;
    v_23 = v_6;
    v_24 = v_5;
    v_25 = v_4;
    v_26 = v_3;
    v_27 = v_2;
// end of prologue
    stack[-3] = qvalue(basic_elt(env, 1)); // rl_transform!*
    stack[-2] = v_27;
    stack[-1] = v_26;
    stack[0] = v_25;
    v_21 = list4(v_24, v_23, v_22, v_21);
    env = stack[-4];
    v_21 = list3star(stack[-2], stack[-1], stack[0], v_21);
    env = stack[-4];
    {
        LispObject v_32 = stack[-3];
        LispObject fn = basic_elt(env, 2); // apply
        return (*qfn2(fn))(fn, v_32, v_21);
    }
}



// Code for evalnumberp

static LispObject CC_evalnumberp(LispObject env,
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
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_52 = v_2;
// end of prologue
    {   LispObject fn = basic_elt(env, 3); // aeval
    v_52 = (*qfn1(fn))(fn, v_52);
    }
    env = stack[0];
    v_54 = v_52;
    v_52 = v_54;
    if (!consp(v_52)) goto v_9;
    else goto v_10;
v_9:
    v_52 = v_54;
    v_52 = (is_number(v_52) ? lisp_true : nil);
    goto v_8;
v_10:
    v_52 = v_54;
    if (!car_legal(v_52)) v_53 = carerror(v_52); else
    v_53 = car(v_52);
    v_52 = basic_elt(env, 1); // !*sq
    if (v_53 == v_52) goto v_19;
    v_52 = lisp_true;
    goto v_17;
v_19:
    v_52 = v_54;
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    if (!car_legal(v_52)) v_52 = carerror(v_52); else
    v_52 = car(v_52);
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    v_52 = (consp(v_52) ? nil : lisp_true);
    v_52 = (v_52 == nil ? lisp_true : nil);
    goto v_17;
    v_52 = nil;
v_17:
    if (v_52 == nil) goto v_15;
    v_52 = nil;
    goto v_8;
v_15:
    v_52 = v_54;
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    if (!car_legal(v_52)) v_52 = carerror(v_52); else
    v_52 = car(v_52);
    if (!car_legal(v_52)) v_52 = carerror(v_52); else
    v_52 = car(v_52);
    v_53 = v_52;
    v_52 = v_53;
    if (!consp(v_52)) goto v_42;
    else goto v_43;
v_42:
    v_52 = lisp_true;
    goto v_41;
v_43:
    v_52 = v_53;
    if (!car_legal(v_52)) v_52 = carerror(v_52); else
    v_52 = car(v_52);
    v_53 = basic_elt(env, 2); // numbertag
        return Lflagp(nil, v_52, v_53);
    v_52 = nil;
v_41:
    goto v_8;
    v_52 = nil;
v_8:
    return onevalue(v_52);
}



// Code for rl_convertarg

static LispObject CC_rl_convertarg(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    v_12 = v_4;
    v_13 = v_3;
    stack[0] = v_2;
// end of prologue
    {   LispObject fn = basic_elt(env, 1); // rl_conversionfunction
    stack[-1] = (*qfn2(fn))(fn, v_13, v_12);
    }
    env = stack[-2];
    v_12 = stack[0];
    v_12 = ncons(v_12);
    env = stack[-2];
    {
        LispObject v_16 = stack[-1];
        LispObject fn = basic_elt(env, 2); // apply
        return (*qfn2(fn))(fn, v_16, v_12);
    }
}



// Code for mconv1

static LispObject CC_mconv1(LispObject env,
                         LispObject v_2)
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
    v_40 = stack[-1];
    if (!consp(v_40)) goto v_14;
    else goto v_15;
v_14:
    v_40 = lisp_true;
    goto v_13;
v_15:
    v_40 = stack[-1];
    if (!car_legal(v_40)) v_40 = carerror(v_40); else
    v_40 = car(v_40);
    v_40 = (consp(v_40) ? nil : lisp_true);
    goto v_13;
    v_40 = nil;
v_13:
    if (v_40 == nil) goto v_11;
    stack[0] = stack[-2];
    v_40 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // drnconv
    v_40 = (*qfn1(fn))(fn, v_40);
    }
    env = stack[-3];
    {
        LispObject v_45 = stack[0];
        LispObject fn = basic_elt(env, 2); // nreverse
        return (*qfn2(fn))(fn, v_45, v_40);
    }
v_11:
    v_40 = stack[-1];
    if (!car_legal(v_40)) v_40 = carerror(v_40); else
    v_40 = car(v_40);
    if (!car_legal(v_40)) stack[0] = carerror(v_40); else
    stack[0] = car(v_40);
    v_40 = stack[-1];
    if (!car_legal(v_40)) v_40 = carerror(v_40); else
    v_40 = car(v_40);
    if (!car_legal(v_40)) v_40 = cdrerror(v_40); else
    v_40 = cdr(v_40);
    {   LispObject fn = basic_elt(env, 0); // mconv1
    v_41 = (*qfn1(fn))(fn, v_40);
    }
    env = stack[-3];
    v_40 = stack[-2];
    v_40 = acons(stack[0], v_41, v_40);
    env = stack[-3];
    stack[-2] = v_40;
    v_40 = stack[-1];
    if (!car_legal(v_40)) v_40 = cdrerror(v_40); else
    v_40 = cdr(v_40);
    stack[-1] = v_40;
    goto v_7;
    v_40 = nil;
    return onevalue(v_40);
}



// Code for setrd

static LispObject CC_setrd(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    push(nil, nil);
    stack_popper stack_popper_var(3);
// end of prologue
    v_16 = qvalue(basic_elt(env, 1)); // atts
    v_15 = basic_elt(env, 2); // (type)
    {   LispObject fn = basic_elt(env, 4); // retattributes
    v_15 = (*qfn2(fn))(fn, v_16, v_15);
    }
    env = stack[-2];
    stack[-1] = basic_elt(env, 3); // set
    stack[0] = v_15;
    {   LispObject fn = basic_elt(env, 5); // stats_getargs
    v_15 = (*qfn0(fn))(fn);
    }
    {
        LispObject v_19 = stack[-1];
        LispObject v_20 = stack[0];
        return list2star(v_19, v_20, v_15);
    }
    return onevalue(v_15);
}



// Code for exdff0

static LispObject CC_exdff0(LispObject env,
                         LispObject v_2)
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
    v_67 = stack[-2];
    if (!consp(v_67)) goto v_17;
    else goto v_18;
v_17:
    v_67 = lisp_true;
    goto v_16;
v_18:
    v_67 = stack[-2];
    if (!car_legal(v_67)) v_67 = carerror(v_67); else
    v_67 = car(v_67);
    v_67 = (consp(v_67) ? nil : lisp_true);
    goto v_16;
    v_67 = nil;
v_16:
    if (v_67 == nil) goto v_14;
    goto v_9;
v_14:
    v_67 = stack[-2];
    if (!car_legal(v_67)) v_67 = carerror(v_67); else
    v_67 = car(v_67);
    if (!car_legal(v_67)) v_68 = carerror(v_67); else
    v_68 = car(v_67);
    v_67 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_67 = cons(v_68, v_67);
    env = stack[-4];
    v_68 = ncons(v_67);
    env = stack[-4];
    v_67 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[0] = cons(v_68, v_67);
    env = stack[-4];
    v_67 = stack[-2];
    if (!car_legal(v_67)) v_67 = carerror(v_67); else
    v_67 = car(v_67);
    if (!car_legal(v_67)) v_67 = cdrerror(v_67); else
    v_67 = cdr(v_67);
    {   LispObject fn = basic_elt(env, 0); // exdff0
    v_67 = (*qfn1(fn))(fn, v_67);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 1); // multsqpf
    stack[-1] = (*qfn2(fn))(fn, stack[0], v_67);
    }
    env = stack[-4];
    v_67 = stack[-2];
    if (!car_legal(v_67)) v_67 = carerror(v_67); else
    v_67 = car(v_67);
    if (!car_legal(v_67)) v_67 = carerror(v_67); else
    v_67 = car(v_67);
    {   LispObject fn = basic_elt(env, 2); // exdfp0
    stack[0] = (*qfn1(fn))(fn, v_67);
    }
    env = stack[-4];
    v_67 = stack[-2];
    if (!car_legal(v_67)) v_67 = carerror(v_67); else
    v_67 = car(v_67);
    if (!car_legal(v_67)) v_68 = cdrerror(v_67); else
    v_68 = cdr(v_67);
    v_67 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_67 = cons(v_68, v_67);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 3); // multpfsq
    v_67 = (*qfn2(fn))(fn, stack[0], v_67);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 4); // addpf
    v_68 = (*qfn2(fn))(fn, stack[-1], v_67);
    }
    env = stack[-4];
    v_67 = stack[-3];
    v_67 = cons(v_68, v_67);
    env = stack[-4];
    stack[-3] = v_67;
    v_67 = stack[-2];
    if (!car_legal(v_67)) v_67 = cdrerror(v_67); else
    v_67 = cdr(v_67);
    stack[-2] = v_67;
    goto v_8;
v_9:
    v_67 = nil;
    v_68 = v_67;
v_10:
    v_67 = stack[-3];
    if (v_67 == nil) goto v_57;
    else goto v_58;
v_57:
    v_67 = v_68;
    goto v_7;
v_58:
    v_67 = stack[-3];
    v_67 = car(v_67);
    {   LispObject fn = basic_elt(env, 4); // addpf
    v_67 = (*qfn2(fn))(fn, v_67, v_68);
    }
    env = stack[-4];
    v_68 = v_67;
    v_67 = stack[-3];
    v_67 = cdr(v_67);
    stack[-3] = v_67;
    goto v_10;
v_7:
    return onevalue(v_67);
}



// Code for r2findindex1

static LispObject CC_r2findindex1(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    v_29 = v_4;
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
v_8:
    v_28 = stack[0];
    if (v_28 == nil) goto v_11;
    else goto v_12;
v_11:
    v_28 = basic_elt(env, 1); // "index not found"
    {
        LispObject fn = basic_elt(env, 2); // rederr
        return (*qfn1(fn))(fn, v_28);
    }
v_12:
    v_30 = stack[-1];
    v_28 = stack[0];
    if (!car_legal(v_28)) v_28 = carerror(v_28); else
    v_28 = car(v_28);
    if (equal(v_30, v_28)) goto v_16;
    else goto v_17;
v_16:
    v_28 = v_29;
    goto v_7;
v_17:
    v_28 = stack[0];
    if (!car_legal(v_28)) v_28 = cdrerror(v_28); else
    v_28 = cdr(v_28);
    stack[0] = v_28;
    v_28 = v_29;
    v_28 = add1(v_28);
    env = stack[-2];
    v_29 = v_28;
    goto v_8;
    v_28 = nil;
v_7:
    return onevalue(v_28);
}



// Code for chkint!*

static LispObject CC_chkintH(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_90, v_91, v_92;
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
    v_90 = qvalue(basic_elt(env, 1)); // !*!*roundbf
    if (v_90 == nil) goto v_7;
    v_90 = stack[0];
    v_90 = Lfloatp(nil, v_90);
    env = stack[-1];
    if (v_90 == nil) goto v_12;
    v_90 = stack[0];
    {
        LispObject fn = basic_elt(env, 4); // fl2bf
        return (*qfn1(fn))(fn, v_90);
    }
v_12:
    v_90 = stack[0];
    if (!consp(v_90)) goto v_23;
    v_90 = stack[0];
    goto v_21;
v_23:
    v_90 = stack[0];
    v_90 = integerp(v_90);
    if (v_90 == nil) goto v_27;
    v_92 = basic_elt(env, 2); // !:rd!:
    v_91 = stack[0];
    v_90 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_90 = list2star(v_92, v_91, v_90);
    env = stack[-1];
    goto v_21;
v_27:
    v_90 = stack[0];
    {   LispObject fn = basic_elt(env, 5); // read!:num
    v_90 = (*qfn1(fn))(fn, v_90);
    }
    env = stack[-1];
    goto v_21;
    v_90 = nil;
v_21:
    {
        LispObject fn = basic_elt(env, 6); // normbf
        return (*qfn1(fn))(fn, v_90);
    }
    v_90 = nil;
    goto v_5;
v_7:
    v_90 = stack[0];
    v_90 = Labsval(nil, v_90);
    env = stack[-1];
    v_91 = v_90;
    v_90 = stack[0];
    v_90 = Lfloatp(nil, v_90);
    env = stack[-1];
    if (v_90 == nil) goto v_46;
    v_90 = stack[0];
    goto v_44;
v_46:
    v_90 = v_91;
    {   LispObject fn = basic_elt(env, 7); // msd
    v_91 = (*qfn1(fn))(fn, v_90);
    }
    env = stack[-1];
    v_90 = qvalue(basic_elt(env, 3)); // !!maxbflexp
    v_90 = static_cast<LispObject>(lesseq2(v_91, v_90));
    v_90 = v_90 ? lisp_true : nil;
    env = stack[-1];
    if (v_90 == nil) goto v_51;
    v_90 = stack[0];
        return Lfloat(nil, v_90);
v_51:
    {   LispObject fn = basic_elt(env, 8); // rndbfon
    v_90 = (*qfn0(fn))(fn);
    }
    env = stack[-1];
    v_90 = stack[0];
    v_90 = Lfloatp(nil, v_90);
    env = stack[-1];
    if (v_90 == nil) goto v_64;
    v_90 = stack[0];
    {
        LispObject fn = basic_elt(env, 4); // fl2bf
        return (*qfn1(fn))(fn, v_90);
    }
v_64:
    v_90 = stack[0];
    if (!consp(v_90)) goto v_75;
    v_90 = stack[0];
    goto v_73;
v_75:
    v_90 = stack[0];
    v_90 = integerp(v_90);
    if (v_90 == nil) goto v_79;
    v_92 = basic_elt(env, 2); // !:rd!:
    v_91 = stack[0];
    v_90 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_90 = list2star(v_92, v_91, v_90);
    env = stack[-1];
    goto v_73;
v_79:
    v_90 = stack[0];
    {   LispObject fn = basic_elt(env, 5); // read!:num
    v_90 = (*qfn1(fn))(fn, v_90);
    }
    env = stack[-1];
    goto v_73;
    v_90 = nil;
v_73:
    {
        LispObject fn = basic_elt(env, 6); // normbf
        return (*qfn1(fn))(fn, v_90);
    }
    v_90 = nil;
    goto v_44;
    v_90 = nil;
v_44:
    goto v_5;
    v_90 = nil;
v_5:
    return onevalue(v_90);
}



// Code for innprodpex

static LispObject CC_innprodpex(LispObject env,
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    stack[-1] = v_3;
    stack[-2] = v_2;
// end of prologue
v_1:
    v_52 = stack[-1];
    if (v_52 == nil) goto v_7;
    else goto v_8;
v_7:
    v_52 = nil;
    goto v_6;
v_8:
    v_53 = stack[-2];
    v_52 = stack[-1];
    if (!car_legal(v_52)) v_52 = carerror(v_52); else
    v_52 = car(v_52);
    if (!car_legal(v_52)) v_52 = carerror(v_52); else
    v_52 = car(v_52);
    {   LispObject fn = basic_elt(env, 1); // innprodp2
    v_52 = (*qfn2(fn))(fn, v_53, v_52);
    }
    env = stack[-4];
    v_53 = v_52;
    v_52 = v_53;
    if (v_52 == nil) goto v_22;
    v_52 = v_53;
    if (!car_legal(v_52)) stack[-3] = cdrerror(v_52); else
    stack[-3] = cdr(v_52);
    v_52 = v_53;
    if (!car_legal(v_52)) v_52 = carerror(v_52); else
    v_52 = car(v_52);
    if (v_52 == nil) goto v_30;
    v_52 = stack[-1];
    if (!car_legal(v_52)) v_52 = carerror(v_52); else
    v_52 = car(v_52);
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    {   LispObject fn = basic_elt(env, 2); // negf
    v_52 = (*qfn1(fn))(fn, v_52);
    }
    env = stack[-4];
    stack[0] = v_52;
    goto v_28;
v_30:
    v_52 = stack[-1];
    if (!car_legal(v_52)) v_52 = carerror(v_52); else
    v_52 = car(v_52);
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    stack[0] = v_52;
    goto v_28;
    stack[0] = nil;
v_28:
    v_53 = stack[-2];
    v_52 = stack[-1];
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    {   LispObject fn = basic_elt(env, 0); // innprodpex
    v_52 = (*qfn2(fn))(fn, v_53, v_52);
    }
    {
        LispObject v_58 = stack[-3];
        LispObject v_59 = stack[0];
        return acons(v_58, v_59, v_52);
    }
v_22:
    v_53 = stack[-2];
    v_52 = stack[-1];
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    stack[-2] = v_53;
    stack[-1] = v_52;
    goto v_1;
    v_52 = nil;
    goto v_6;
    v_52 = nil;
v_6:
    return onevalue(v_52);
}



// Code for rootextractf

static LispObject CC_rootextractf(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_220, v_221, v_222;
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
    v_220 = stack[-3];
    if (!consp(v_220)) goto v_10;
    else goto v_11;
v_10:
    v_220 = lisp_true;
    goto v_9;
v_11:
    v_220 = stack[-3];
    if (!car_legal(v_220)) v_220 = carerror(v_220); else
    v_220 = car(v_220);
    v_220 = (consp(v_220) ? nil : lisp_true);
    goto v_9;
    v_220 = nil;
v_9:
    if (v_220 == nil) goto v_7;
    v_220 = stack[-3];
    goto v_5;
v_7:
    v_220 = stack[-3];
    if (!car_legal(v_220)) v_220 = carerror(v_220); else
    v_220 = car(v_220);
    if (!car_legal(v_220)) v_220 = carerror(v_220); else
    v_220 = car(v_220);
    if (!car_legal(v_220)) v_220 = carerror(v_220); else
    v_220 = car(v_220);
    stack[-4] = v_220;
    v_220 = stack[-3];
    if (!car_legal(v_220)) v_220 = carerror(v_220); else
    v_220 = car(v_220);
    if (!car_legal(v_220)) v_220 = carerror(v_220); else
    v_220 = car(v_220);
    if (!car_legal(v_220)) v_220 = cdrerror(v_220); else
    v_220 = cdr(v_220);
    stack[0] = v_220;
    v_220 = stack[-3];
    if (!car_legal(v_220)) v_220 = cdrerror(v_220); else
    v_220 = cdr(v_220);
    {   LispObject fn = basic_elt(env, 0); // rootextractf
    v_220 = (*qfn1(fn))(fn, v_220);
    }
    env = stack[-5];
    stack[-2] = v_220;
    v_220 = stack[-3];
    if (!car_legal(v_220)) v_220 = carerror(v_220); else
    v_220 = car(v_220);
    if (!car_legal(v_220)) v_220 = cdrerror(v_220); else
    v_220 = cdr(v_220);
    {   LispObject fn = basic_elt(env, 0); // rootextractf
    v_220 = (*qfn1(fn))(fn, v_220);
    }
    env = stack[-5];
    stack[-1] = v_220;
    v_220 = stack[-1];
    if (v_220 == nil) goto v_46;
    else goto v_47;
v_46:
    v_220 = stack[-2];
    goto v_28;
v_47:
    v_220 = stack[-4];
    if (!consp(v_220)) goto v_50;
    else goto v_51;
v_50:
    v_220 = stack[-3];
    if (!car_legal(v_220)) v_220 = carerror(v_220); else
    v_220 = car(v_220);
    if (!car_legal(v_220)) v_222 = carerror(v_220); else
    v_222 = car(v_220);
    v_221 = stack[-1];
    v_220 = stack[-2];
    return acons(v_222, v_221, v_220);
v_51:
    v_220 = stack[-4];
    if (!car_legal(v_220)) v_221 = carerror(v_220); else
    v_221 = car(v_220);
    v_220 = basic_elt(env, 1); // sqrt
    if (v_221 == v_220) goto v_63;
    else goto v_64;
v_63:
    v_220 = lisp_true;
    goto v_62;
v_64:
    v_220 = stack[-4];
    if (!car_legal(v_220)) v_221 = carerror(v_220); else
    v_221 = car(v_220);
    v_220 = basic_elt(env, 2); // expt
    if (v_221 == v_220) goto v_73;
    else goto v_74;
v_73:
    v_220 = stack[-4];
    if (!car_legal(v_220)) v_220 = cdrerror(v_220); else
    v_220 = cdr(v_220);
    if (!car_legal(v_220)) v_220 = cdrerror(v_220); else
    v_220 = cdr(v_220);
    if (!car_legal(v_220)) v_221 = carerror(v_220); else
    v_221 = car(v_220);
    v_220 = basic_elt(env, 3); // quotient
    if (!consp(v_221)) goto v_81;
    v_221 = car(v_221);
    if (v_221 == v_220) goto v_80;
    else goto v_81;
v_80:
    v_220 = stack[-4];
    if (!car_legal(v_220)) v_220 = cdrerror(v_220); else
    v_220 = cdr(v_220);
    if (!car_legal(v_220)) v_220 = cdrerror(v_220); else
    v_220 = cdr(v_220);
    if (!car_legal(v_220)) v_220 = carerror(v_220); else
    v_220 = car(v_220);
    if (!car_legal(v_220)) v_220 = cdrerror(v_220); else
    v_220 = cdr(v_220);
    if (!car_legal(v_220)) v_221 = carerror(v_220); else
    v_221 = car(v_220);
    v_220 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_221 == v_220) goto v_90;
    else goto v_91;
v_90:
    v_220 = stack[-4];
    if (!car_legal(v_220)) v_220 = cdrerror(v_220); else
    v_220 = cdr(v_220);
    if (!car_legal(v_220)) v_220 = cdrerror(v_220); else
    v_220 = cdr(v_220);
    if (!car_legal(v_220)) v_220 = carerror(v_220); else
    v_220 = car(v_220);
    if (!car_legal(v_220)) v_220 = cdrerror(v_220); else
    v_220 = cdr(v_220);
    if (!car_legal(v_220)) v_220 = cdrerror(v_220); else
    v_220 = cdr(v_220);
    if (!car_legal(v_220)) v_220 = carerror(v_220); else
    v_220 = car(v_220);
    v_220 = (is_number(v_220) ? lisp_true : nil);
    goto v_89;
v_91:
    v_220 = nil;
    goto v_89;
    v_220 = nil;
v_89:
    goto v_79;
v_81:
    v_220 = nil;
    goto v_79;
    v_220 = nil;
v_79:
    goto v_72;
v_74:
    v_220 = nil;
    goto v_72;
    v_220 = nil;
v_72:
    goto v_62;
    v_220 = nil;
v_62:
    if (v_220 == nil) goto v_60;
    v_222 = stack[0];
    v_220 = stack[-4];
    if (!car_legal(v_220)) v_221 = carerror(v_220); else
    v_221 = car(v_220);
    v_220 = basic_elt(env, 1); // sqrt
    if (v_221 == v_220) goto v_120;
    else goto v_121;
v_120:
    v_220 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    goto v_119;
v_121:
    v_220 = stack[-4];
    if (!car_legal(v_220)) v_220 = cdrerror(v_220); else
    v_220 = cdr(v_220);
    if (!car_legal(v_220)) v_220 = cdrerror(v_220); else
    v_220 = cdr(v_220);
    if (!car_legal(v_220)) v_220 = carerror(v_220); else
    v_220 = car(v_220);
    if (!car_legal(v_220)) v_220 = cdrerror(v_220); else
    v_220 = cdr(v_220);
    if (!car_legal(v_220)) v_220 = cdrerror(v_220); else
    v_220 = cdr(v_220);
    if (!car_legal(v_220)) v_220 = carerror(v_220); else
    v_220 = car(v_220);
    goto v_119;
    v_220 = nil;
v_119:
    v_220 = Ldivide_2(nil, v_222, v_220);
    env = stack[-5];
    stack[0] = v_220;
    v_220 = stack[0];
    if (!car_legal(v_220)) v_221 = carerror(v_220); else
    v_221 = car(v_220);
    v_220 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_221 == v_220) goto v_137;
    else goto v_138;
v_137:
    v_220 = stack[-1];
    if (v_220 == nil) goto v_144;
    else goto v_145;
v_144:
    v_220 = stack[-2];
    goto v_143;
v_145:
    v_220 = stack[-3];
    if (!car_legal(v_220)) v_220 = carerror(v_220); else
    v_220 = car(v_220);
    if (!car_legal(v_220)) v_222 = carerror(v_220); else
    v_222 = car(v_220);
    v_221 = stack[-1];
    v_220 = stack[-2];
    return acons(v_222, v_221, v_220);
    v_220 = nil;
v_143:
    goto v_28;
v_138:
    v_220 = stack[-4];
    if (!car_legal(v_220)) v_220 = cdrerror(v_220); else
    v_220 = cdr(v_220);
    if (!car_legal(v_220)) v_220 = carerror(v_220); else
    v_220 = car(v_220);
    if (is_number(v_220)) goto v_156;
    else goto v_157;
v_156:
    v_220 = stack[-4];
    if (!car_legal(v_220)) v_220 = cdrerror(v_220); else
    v_220 = cdr(v_220);
    if (!car_legal(v_220)) v_221 = carerror(v_220); else
    v_221 = car(v_220);
    v_220 = stack[0];
    if (!car_legal(v_220)) v_220 = carerror(v_220); else
    v_220 = car(v_220);
    v_221 = Lexpt(nil, v_221, v_220);
    env = stack[-5];
    v_220 = stack[-1];
    {   LispObject fn = basic_elt(env, 4); // multd
    v_220 = (*qfn2(fn))(fn, v_221, v_220);
    }
    env = stack[-5];
    stack[-1] = v_220;
    v_220 = stack[0];
    if (!car_legal(v_220)) v_220 = cdrerror(v_220); else
    v_220 = cdr(v_220);
    stack[0] = v_220;
    goto v_136;
v_157:
    v_220 = stack[-4];
    if (!car_legal(v_220)) v_220 = cdrerror(v_220); else
    v_220 = cdr(v_220);
    if (!car_legal(v_220)) v_221 = carerror(v_220); else
    v_221 = car(v_220);
    v_220 = stack[0];
    if (!car_legal(v_220)) v_220 = carerror(v_220); else
    v_220 = car(v_220);
    v_220 = list2(v_221, v_220);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 5); // simpexpt
    v_220 = (*qfn1(fn))(fn, v_220);
    }
    env = stack[-5];
    v_222 = v_220;
    v_220 = v_222;
    if (!car_legal(v_220)) v_221 = cdrerror(v_220); else
    v_221 = cdr(v_220);
    v_220 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_221 == v_220) goto v_182;
    else goto v_183;
v_182:
    v_220 = v_222;
    if (!car_legal(v_220)) v_221 = carerror(v_220); else
    v_221 = car(v_220);
    v_220 = stack[-1];
    {   LispObject fn = basic_elt(env, 6); // multf
    v_220 = (*qfn2(fn))(fn, v_221, v_220);
    }
    env = stack[-5];
    stack[-1] = v_220;
    v_220 = stack[0];
    if (!car_legal(v_220)) v_220 = cdrerror(v_220); else
    v_220 = cdr(v_220);
    stack[0] = v_220;
    goto v_181;
v_183:
    v_220 = stack[-3];
    if (!car_legal(v_220)) v_220 = carerror(v_220); else
    v_220 = car(v_220);
    if (!car_legal(v_220)) v_220 = carerror(v_220); else
    v_220 = car(v_220);
    if (!car_legal(v_220)) v_220 = cdrerror(v_220); else
    v_220 = cdr(v_220);
    stack[0] = v_220;
    goto v_181;
v_181:
    goto v_136;
v_136:
    goto v_45;
v_60:
v_45:
    v_221 = stack[0];
    v_220 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_221 == v_220) goto v_201;
    else goto v_202;
v_201:
    v_221 = stack[-1];
    v_220 = stack[-2];
    {
        LispObject fn = basic_elt(env, 7); // addf
        return (*qfn2(fn))(fn, v_221, v_220);
    }
v_202:
    v_220 = stack[-1];
    if (v_220 == nil) goto v_208;
    else goto v_209;
v_208:
    v_220 = stack[-2];
    goto v_200;
v_209:
    v_221 = stack[-4];
    v_220 = stack[0];
    {   LispObject fn = basic_elt(env, 8); // to
    v_222 = (*qfn2(fn))(fn, v_221, v_220);
    }
    v_221 = stack[-1];
    v_220 = stack[-2];
    return acons(v_222, v_221, v_220);
    v_220 = nil;
v_200:
v_28:
    goto v_5;
    v_220 = nil;
v_5:
    return onevalue(v_220);
}



setup_type const u36_setup[] =
{
    {"mk+real+inner+product",   G0W2,     G1W2,     CC_mkLrealLinnerLproduct,G3W2,G4W2},
    {"sqfrf",                   G0W1,     CC_sqfrf, G2W1,     G3W1,     G4W1},
    {"fnrd",                    CC_fnrd,  G1W0,     G2W0,     G3W0,     G4W0},
    {"physoptimes",             G0W1,     CC_physoptimes,G2W1,G3W1,     G4W1},
    {"prop-simp1",              G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_propKsimp1},
    {"liennewstruc",            G0W3,     G1W3,     G2W3,     CC_liennewstruc,G4W3},
    {"dp_neworder",             G0W1,     CC_dp_neworder,G2W1,G3W1,     G4W1},
    {"rl_fvarl",                G0W1,     CC_rl_fvarl,G2W1,   G3W1,     G4W1},
    {"give*position",           G0W2,     G1W2,     CC_giveHposition,G3W2,G4W2},
    {"pasf_smwcpknowl",         G0W1,     CC_pasf_smwcpknowl,G2W1,G3W1, G4W1},
    {"ciml",                    G0W1,     CC_ciml,  G2W1,     G3W1,     G4W1},
    {"sparpri",                 G0W3,     G1W3,     G2W3,     CC_sparpri,G4W3},
    {"groebspolynom3",          G0W2,     G1W2,     CC_groebspolynom3,G3W2,G4W2},
    {"evalb",                   G0W1,     CC_evalb, G2W1,     G3W1,     G4W1},
    {"string2bytelist",         G0W1,     CC_string2bytelist,G2W1,G3W1, G4W1},
    {"lf=zero",                 G0W1,     CC_lfMzero,G2W1,    G3W1,     G4W1},
    {"clean_numid",             G0W1,     CC_clean_numid,G2W1,G3W1,     G4W1},
    {"drnconv",                 G0W1,     CC_drnconv,G2W1,    G3W1,     G4W1},
    {"ra_intequiv0",            G0W1,     CC_ra_intequiv0,G2W1,G3W1,    G4W1},
    {"lex_init",                CC_lex_init,G1W0,   G2W0,     G3W0,     G4W0},
    {"ofsf_sippsubst1",         G0W2,     G1W2,     CC_ofsf_sippsubst1,G3W2,G4W2},
    {"even_action_sf",          G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_even_action_sf},
    {"maxfrom1",                G0W3,     G1W3,     G2W3,     CC_maxfrom1,G4W3},
    {"get-denom-l",             G0W1,     CC_getKdenomKl,G2W1,G3W1,     G4W1},
    {"talp_maxd",               G0W1,     CC_talp_maxd,G2W1,  G3W1,     G4W1},
    {"symbolsom",               G0W1,     CC_symbolsom,G2W1,  G3W1,     G4W1},
    {"degreef",                 G0W2,     G1W2,     CC_degreef,G3W2,    G4W2},
    {"sc_mkmatrix",             G0W2,     G1W2,     CC_sc_mkmatrix,G3W2,G4W2},
    {"collectphysops_reversed", G0W2,     G1W2,     CC_collectphysops_reversed,G3W2,G4W2},
    {"contr2",                  G0W3,     G1W3,     G2W3,     CC_contr2,G4W3},
    {"listsub",                 G0W2,     G1W2,     CC_listsub,G3W2,    G4W2},
    {"fs:make-nullangle",       CC_fsTmakeKnullangle,G1W0,G2W0,G3W0,    G4W0},
    {"groeb=crita",             G0W1,     CC_groebMcrita,G2W1,G3W1,     G4W1},
    {"split-further",           G0W3,     G1W3,     G2W3,     CC_splitKfurther,G4W3},
    {"rl_transform",            G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_rl_transform},
    {"evalnumberp",             G0W1,     CC_evalnumberp,G2W1,G3W1,     G4W1},
    {"rl_convertarg",           G0W3,     G1W3,     G2W3,     CC_rl_convertarg,G4W3},
    {"mconv1",                  G0W1,     CC_mconv1,G2W1,     G3W1,     G4W1},
    {"setrd",                   CC_setrd, G1W0,     G2W0,     G3W0,     G4W0},
    {"exdff0",                  G0W1,     CC_exdff0,G2W1,     G3W1,     G4W1},
    {"r2findindex1",            G0W3,     G1W3,     G2W3,     CC_r2findindex1,G4W3},
    {"chkint*",                 G0W1,     CC_chkintH,G2W1,    G3W1,     G4W1},
    {"innprodpex",              G0W2,     G1W2,     CC_innprodpex,G3W2, G4W2},
    {"rootextractf",            G0W1,     CC_rootextractf,G2W1,G3W1,    G4W1},
    {nullptr, 
        reinterpret_cast<no_args *>(
            reinterpret_cast<uintptr_t>("u36")),
        reinterpret_cast<one_arg *>(
            reinterpret_cast<uintptr_t>("166848 263349 8516143")),
        nullptr, nullptr, nullptr}
};

// end of generated code
