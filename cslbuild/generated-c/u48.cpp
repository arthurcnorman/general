
// $destdir/u48.c        Machine generated C code

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


// Code for maprintla

static LispObject CC_maprintla(LispObject env,
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
v_1:
    v_243 = stack[-2];
    if (v_243 == nil) goto v_13;
    else goto v_14;
v_13:
    v_243 = nil;
    goto v_7;
v_14:
    v_243 = stack[-2];
    if (is_number(v_243)) goto v_17;
    else goto v_18;
v_17:
    goto v_10;
v_18:
    v_243 = stack[-2];
    if (!consp(v_243)) goto v_20;
    else goto v_21;
v_20:
    v_243 = stack[-2];
    {
        LispObject fn = basic_elt(env, 15); // prinlatom
        return (*qfn1(fn))(fn, v_243);
    }
v_21:
    v_243 = stack[-2];
    v_243 = Lstringp(nil, v_243);
    env = stack[-4];
    if (v_243 == nil) goto v_26;
    v_243 = stack[-2];
    {
        LispObject fn = basic_elt(env, 16); // prin2la
        return (*qfn1(fn))(fn, v_243);
    }
v_26:
    v_243 = stack[-2];
    if (!car_legal(v_243)) v_243 = carerror(v_243); else
    v_243 = car(v_243);
    if (!consp(v_243)) goto v_32;
    v_243 = stack[-2];
    if (!car_legal(v_243)) v_244 = carerror(v_243); else
    v_244 = car(v_243);
    v_243 = stack[-1];
    stack[-2] = v_244;
    stack[-1] = v_243;
    goto v_1;
v_32:
    v_243 = stack[-2];
    if (!car_legal(v_243)) v_244 = carerror(v_243); else
    v_244 = car(v_243);
    v_243 = basic_elt(env, 1); // laprifn
    v_243 = get(v_244, v_243);
    env = stack[-4];
    stack[-3] = v_243;
    if (v_243 == nil) goto v_40;
    v_243 = stack[-2];
    if (!car_legal(v_243)) v_244 = carerror(v_243); else
    v_244 = car(v_243);
    v_243 = basic_elt(env, 2); // fulla
    v_243 = Lflagp(nil, v_244, v_243);
    env = stack[-4];
    if (v_243 == nil) goto v_53;
    else goto v_54;
v_53:
    stack[0] = stack[-3];
    v_243 = stack[-2];
    if (!car_legal(v_243)) v_244 = cdrerror(v_243); else
    v_244 = cdr(v_243);
    v_243 = stack[-1];
    v_243 = list2(v_244, v_243);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 17); // apply
    v_244 = (*qfn2(fn))(fn, stack[0], v_243);
    }
    env = stack[-4];
    v_243 = basic_elt(env, 3); // failed
    v_243 = (v_244 == v_243 ? lisp_true : nil);
    v_243 = (v_243 == nil ? lisp_true : nil);
    goto v_52;
v_54:
    v_243 = nil;
    goto v_52;
    v_243 = nil;
v_52:
    if (v_243 == nil) goto v_50;
    v_243 = lisp_true;
    goto v_48;
v_50:
    v_243 = stack[-2];
    if (!car_legal(v_243)) v_244 = carerror(v_243); else
    v_244 = car(v_243);
    v_243 = basic_elt(env, 2); // fulla
    v_243 = Lflagp(nil, v_244, v_243);
    env = stack[-4];
    if (v_243 == nil) goto v_77;
    stack[0] = stack[-3];
    v_244 = stack[-2];
    v_243 = stack[-1];
    v_243 = list2(v_244, v_243);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 17); // apply
    v_244 = (*qfn2(fn))(fn, stack[0], v_243);
    }
    env = stack[-4];
    v_243 = basic_elt(env, 3); // failed
    v_243 = (v_244 == v_243 ? lisp_true : nil);
    v_243 = (v_243 == nil ? lisp_true : nil);
    goto v_75;
v_77:
    v_243 = nil;
    goto v_75;
    v_243 = nil;
v_75:
    goto v_48;
    v_243 = nil;
v_48:
    if (v_243 == nil) goto v_40;
    v_243 = stack[-2];
    goto v_7;
v_40:
    v_243 = stack[-2];
    if (!car_legal(v_243)) v_244 = carerror(v_243); else
    v_244 = car(v_243);
    v_243 = basic_elt(env, 4); // indexed
    v_243 = get(v_244, v_243);
    env = stack[-4];
    stack[-3] = v_243;
    if (v_243 == nil) goto v_95;
    v_243 = stack[-2];
    if (!car_legal(v_243)) v_245 = carerror(v_243); else
    v_245 = car(v_243);
    v_243 = stack[-2];
    if (!car_legal(v_243)) v_244 = cdrerror(v_243); else
    v_244 = cdr(v_243);
    v_243 = stack[-3];
    {
        LispObject fn = basic_elt(env, 18); // prinidop
        return (*qfn3(fn))(fn, v_245, v_244, v_243);
    }
v_95:
    v_243 = stack[-2];
    if (!car_legal(v_243)) v_243 = carerror(v_243); else
    v_243 = car(v_243);
    if (!symbolp(v_243)) v_243 = nil;
    else { v_243 = qfastgets(v_243);
           if (v_243 != nil) { v_243 = elt(v_243, 23); // infix
#ifdef RECORD_GET
             if (v_243 != SPID_NOPROP)
                record_get(elt(fastget_names, 23), 1);
             else record_get(elt(fastget_names, 23), 0),
                v_243 = nil; }
           else record_get(elt(fastget_names, 23), 0); }
#else
             if (v_243 == SPID_NOPROP) v_243 = nil; }}
#endif
    stack[-3] = v_243;
    if (v_243 == nil) goto v_107;
    goto v_8;
v_107:
    v_243 = stack[-2];
    if (!car_legal(v_243)) v_244 = carerror(v_243); else
    v_244 = car(v_243);
    v_243 = basic_elt(env, 5); // !:rd!:
    if (v_244 == v_243) goto v_111;
    else goto v_112;
v_111:
// Binding !*nat
// FLUIDBIND: reloadenv=4 litvec-offset=6 saveloc=1
{   bind_fluid_stack bind_fluid_var(-4, 6, -1);
    setvalue(basic_elt(env, 6), nil); // !*nat
    v_243 = stack[-2];
    if (!car_legal(v_243)) v_243 = cdrerror(v_243); else
    v_243 = cdr(v_243);
    v_243 = Lfloatp(nil, v_243);
    env = stack[-4];
    if (v_243 == nil) goto v_124;
    v_243 = stack[-2];
    if (!car_legal(v_243)) v_243 = cdrerror(v_243); else
    v_243 = cdr(v_243);
    v_243 = Llengthc(nil, v_243);
    env = stack[-4];
    goto v_122;
v_124:
    v_243 = stack[-2];
    if (!car_legal(v_243)) v_243 = cdrerror(v_243); else
    v_243 = cdr(v_243);
    if (!car_legal(v_243)) v_243 = carerror(v_243); else
    v_243 = car(v_243);
    stack[0] = Llengthc(nil, v_243);
    env = stack[-4];
    v_243 = stack[-2];
    if (!car_legal(v_243)) v_243 = cdrerror(v_243); else
    v_243 = cdr(v_243);
    if (!car_legal(v_243)) v_243 = cdrerror(v_243); else
    v_243 = cdr(v_243);
    v_244 = Llengthc(nil, v_243);
    env = stack[-4];
    v_243 = static_cast<LispObject>(80)+TAG_FIXNUM; // 5
    v_243 = plus2(v_244, v_243);
    env = stack[-4];
    v_243 = plus2(stack[0], v_243);
    env = stack[-4];
    goto v_122;
    v_243 = nil;
v_122:
    stack[0] = v_243;
    v_244 = qvalue(basic_elt(env, 7)); // ncharspr!*
    v_243 = stack[0];
    v_244 = plus2(v_244, v_243);
    env = stack[-4];
    v_243 = qvalue(basic_elt(env, 8)); // laline!*
    v_243 = static_cast<LispObject>(greaterp2(v_244, v_243));
    v_243 = v_243 ? lisp_true : nil;
    env = stack[-4];
    if (v_243 == nil) goto v_147;
    v_243 = Lterpri(nil);
    env = stack[-4];
    v_243 = stack[0];
    setvalue(basic_elt(env, 7), v_243); // ncharspr!*
    goto v_145;
v_147:
    v_244 = qvalue(basic_elt(env, 7)); // ncharspr!*
    v_243 = stack[0];
    v_243 = plus2(v_244, v_243);
    env = stack[-4];
    setvalue(basic_elt(env, 7), v_243); // ncharspr!*
    goto v_145;
v_145:
    v_243 = qvalue(basic_elt(env, 9)); // orig!*
    setvalue(basic_elt(env, 10), v_243); // posn!*
    v_243 = stack[-2];
    {   LispObject fn = basic_elt(env, 19); // rd!:prin
    v_243 = (*qfn1(fn))(fn, v_243);
    }
    v_243 = nil;
    ;}  // end of a binding scope
    goto v_7;
v_112:
    v_243 = stack[-2];
    if (!car_legal(v_243)) v_243 = carerror(v_243); else
    v_243 = car(v_243);
    {   LispObject fn = basic_elt(env, 20); // oprinla
    v_243 = (*qfn1(fn))(fn, v_243);
    }
    env = stack[-4];
    v_243 = stack[-2];
    if (!car_legal(v_243)) v_245 = carerror(v_243); else
    v_245 = car(v_243);
    v_243 = stack[-2];
    if (!car_legal(v_243)) v_244 = cdrerror(v_243); else
    v_244 = cdr(v_243);
    v_243 = stack[-1];
    {   LispObject fn = basic_elt(env, 21); // prinpopargs
    v_243 = (*qfn3(fn))(fn, v_245, v_244, v_243);
    }
    v_243 = stack[-2];
    goto v_7;
v_8:
    v_244 = stack[-3];
    v_243 = stack[-1];
    v_243 = static_cast<LispObject>(greaterp2(v_244, v_243));
    v_243 = v_243 ? lisp_true : nil;
    env = stack[-4];
    stack[-1] = v_243;
    v_243 = stack[-1];
    if (v_243 == nil) goto v_183;
    else goto v_184;
v_183:
    v_243 = stack[-2];
    if (!car_legal(v_243)) v_244 = carerror(v_243); else
    v_244 = car(v_243);
    v_243 = basic_elt(env, 11); // equal
    v_243 = (v_244 == v_243 ? lisp_true : nil);
    goto v_182;
v_184:
    v_243 = nil;
    goto v_182;
    v_243 = nil;
v_182:
    if (v_243 == nil) goto v_180;
    v_243 = lisp_true;
    stack[-1] = v_243;
    goto v_178;
v_180:
v_178:
    v_243 = stack[-1];
    if (v_243 == nil) goto v_197;
    goto v_9;
v_197:
    v_243 = basic_elt(env, 12); // !(
    {   LispObject fn = basic_elt(env, 15); // prinlatom
    v_243 = (*qfn1(fn))(fn, v_243);
    }
    env = stack[-4];
v_9:
    v_243 = stack[-2];
    if (!car_legal(v_243)) v_245 = carerror(v_243); else
    v_245 = car(v_243);
    v_244 = stack[-3];
    v_243 = stack[-2];
    if (!car_legal(v_243)) v_243 = cdrerror(v_243); else
    v_243 = cdr(v_243);
    {   LispObject fn = basic_elt(env, 22); // inprinla
    v_243 = (*qfn3(fn))(fn, v_245, v_244, v_243);
    }
    env = stack[-4];
    v_243 = stack[-1];
    if (v_243 == nil) goto v_210;
    v_243 = stack[-2];
    goto v_7;
v_210:
    v_243 = basic_elt(env, 13); // !)
    {   LispObject fn = basic_elt(env, 15); // prinlatom
    v_243 = (*qfn1(fn))(fn, v_243);
    }
    v_243 = stack[-2];
    goto v_7;
v_10:
    v_244 = stack[-2];
    v_243 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_243 = static_cast<LispObject>(lessp2(v_244, v_243));
    v_243 = v_243 ? lisp_true : nil;
    env = stack[-4];
    if (v_243 == nil) goto v_222;
    else goto v_223;
v_222:
    v_243 = lisp_true;
    goto v_221;
v_223:
    v_244 = stack[-1];
    v_243 = basic_elt(env, 14); // minus
    if (!symbolp(v_243)) v_243 = nil;
    else { v_243 = qfastgets(v_243);
           if (v_243 != nil) { v_243 = elt(v_243, 23); // infix
#ifdef RECORD_GET
             if (v_243 != SPID_NOPROP)
                record_get(elt(fastget_names, 23), 1);
             else record_get(elt(fastget_names, 23), 0),
                v_243 = nil; }
           else record_get(elt(fastget_names, 23), 0); }
#else
             if (v_243 == SPID_NOPROP) v_243 = nil; }}
#endif
    v_243 = static_cast<LispObject>(lessp2(v_244, v_243));
    v_243 = v_243 ? lisp_true : nil;
    env = stack[-4];
    goto v_221;
    v_243 = nil;
v_221:
    if (v_243 == nil) goto v_219;
    v_243 = stack[-2];
    {
        LispObject fn = basic_elt(env, 16); // prin2la
        return (*qfn1(fn))(fn, v_243);
    }
v_219:
    v_243 = basic_elt(env, 12); // !(
    {   LispObject fn = basic_elt(env, 16); // prin2la
    v_243 = (*qfn1(fn))(fn, v_243);
    }
    env = stack[-4];
    v_243 = stack[-2];
    {   LispObject fn = basic_elt(env, 16); // prin2la
    v_243 = (*qfn1(fn))(fn, v_243);
    }
    env = stack[-4];
    v_243 = basic_elt(env, 13); // !)
    {   LispObject fn = basic_elt(env, 16); // prin2la
    v_243 = (*qfn1(fn))(fn, v_243);
    }
    v_243 = stack[-2];
v_7:
    return onevalue(v_243);
}



// Code for mkdmoderr

static LispObject CC_mkdmoderr(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_14 = v_2;
// end of prologue
    stack[-4] = basic_elt(env, 1); // lambda
    stack[-2] = basic_elt(env, 2); // (!*x!*)
    stack[-1] = basic_elt(env, 3); // dmoderr
    stack[0] = Lmkquote(nil, v_14);
    env = stack[-5];
    v_14 = stack[-3];
    v_14 = Lmkquote(nil, v_14);
    env = stack[-5];
    v_14 = list3(stack[-1], stack[0], v_14);
    {
        LispObject v_20 = stack[-4];
        LispObject v_21 = stack[-2];
        return list3(v_20, v_21, v_14);
    }
}



// Code for reset_opnums

static LispObject CC_reset_opnums(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil, nil, nil, nil, nil);
    stack_popper stack_popper_var(6);
// end of prologue
    v_48 = qvalue(basic_elt(env, 1)); // oporder!*
    stack[-4] = v_48;
    v_48 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-3] = v_48;
v_10:
    v_48 = stack[-4];
    if (v_48 == nil) goto v_15;
    else goto v_16;
v_15:
    v_48 = nil;
    goto v_9;
v_16:
    v_48 = stack[-4];
    if (!car_legal(v_48)) v_48 = carerror(v_48); else
    v_48 = car(v_48);
    v_49 = v_48;
    v_48 = stack[-4];
    if (!car_legal(v_48)) v_48 = cdrerror(v_48); else
    v_48 = cdr(v_48);
    stack[-4] = v_48;
    v_48 = v_49;
    if (symbolp(v_48)) goto v_25;
    else goto v_26;
v_25:
    v_48 = v_49;
    stack[-2] = v_48;
    v_48 = nil;
    goto v_24;
v_26:
    v_48 = v_49;
    if (!car_legal(v_48)) v_48 = carerror(v_48); else
    v_48 = car(v_48);
    stack[-2] = v_48;
    v_48 = v_49;
    if (!car_legal(v_48)) v_48 = cdrerror(v_48); else
    v_48 = cdr(v_48);
    goto v_24;
v_24:
    stack[-1] = stack[-2];
    stack[0] = basic_elt(env, 2); // opnum
    v_49 = v_48;
    v_48 = stack[-3];
    v_50 = cons(v_49, v_48);
    env = stack[-5];
    v_49 = stack[-2];
    v_48 = basic_elt(env, 2); // opnum
    v_48 = get(v_49, v_48);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 3); // !*xadd
    v_48 = (*qfn2(fn))(fn, v_50, v_48);
    }
    env = stack[-5];
    v_48 = Lputprop(nil, stack[-1], stack[0], v_48);
    env = stack[-5];
    v_48 = stack[-3];
    v_48 = add1(v_48);
    env = stack[-5];
    stack[-3] = v_48;
    goto v_10;
v_9:
    return onevalue(v_48);
}



// Code for mk_names_map_2

static LispObject CC_mk_names_map_2(LispObject env,
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    v_45 = v_2;
// end of prologue
    v_46 = v_45;
    if (!car_legal(v_46)) v_46 = carerror(v_46); else
    v_46 = car(v_46);
    if (!car_legal(v_45)) v_45 = cdrerror(v_45); else
    v_45 = cdr(v_45);
    v_45 = Lappend_2(nil, v_46, v_45);
    env = stack[-4];
    stack[-3] = v_45;
    v_45 = stack[-3];
    if (v_45 == nil) goto v_17;
    else goto v_18;
v_17:
    v_45 = nil;
    goto v_8;
v_18:
    v_45 = stack[-3];
    if (!car_legal(v_45)) v_45 = carerror(v_45); else
    v_45 = car(v_45);
    if (!car_legal(v_45)) v_45 = carerror(v_45); else
    v_45 = car(v_45);
    v_45 = ncons(v_45);
    env = stack[-4];
    stack[-1] = v_45;
    stack[-2] = v_45;
v_9:
    v_45 = stack[-3];
    if (!car_legal(v_45)) v_45 = cdrerror(v_45); else
    v_45 = cdr(v_45);
    stack[-3] = v_45;
    v_45 = stack[-3];
    if (v_45 == nil) goto v_31;
    else goto v_32;
v_31:
    v_45 = stack[-2];
    goto v_8;
v_32:
    stack[0] = stack[-1];
    v_45 = stack[-3];
    if (!car_legal(v_45)) v_45 = carerror(v_45); else
    v_45 = car(v_45);
    if (!car_legal(v_45)) v_45 = carerror(v_45); else
    v_45 = car(v_45);
    v_45 = ncons(v_45);
    env = stack[-4];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_45);
    v_45 = stack[-1];
    if (!car_legal(v_45)) v_45 = cdrerror(v_45); else
    v_45 = cdr(v_45);
    stack[-1] = v_45;
    goto v_9;
v_8:
    return onevalue(v_45);
}



// Code for njets

static LispObject CC_njets(LispObject env,
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
    v_11 = v_3;
    v_12 = v_2;
// end of prologue
    stack[-1] = v_11;
    stack[0] = v_11;
    v_11 = v_12;
    v_11 = sub1(v_11);
    env = stack[-2];
    v_11 = plus2(stack[0], v_11);
    env = stack[-2];
    {
        LispObject v_15 = stack[-1];
        LispObject fn = basic_elt(env, 1); // combin
        return (*qfn2(fn))(fn, v_15, v_11);
    }
}



// Code for pst_mkpst

static LispObject CC_pst_mkpst(LispObject env,
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
    stack[0] = nil;
    {   LispObject fn = basic_elt(env, 1); // pst_mkpst1
    v_9 = (*qfn1(fn))(fn, v_9);
    }
    env = stack[-1];
    v_9 = cons(stack[0], v_9);
    env = stack[-1];
    {
        LispObject fn = basic_elt(env, 2); // pst_equitable
        return (*qfn1(fn))(fn, v_9);
    }
}



// Code for general!-modular!-difference

static LispObject CC_generalKmodularKdifference(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    v_22 = v_3;
    v_23 = v_2;
// end of prologue
    v_22 = difference2(v_23, v_22);
    env = stack[-1];
    stack[0] = v_22;
    v_23 = stack[0];
    v_22 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_22 = static_cast<LispObject>(lessp2(v_23, v_22));
    v_22 = v_22 ? lisp_true : nil;
    env = stack[-1];
    if (v_22 == nil) goto v_14;
    v_23 = stack[0];
    v_22 = qvalue(basic_elt(env, 1)); // current!-modulus
    v_22 = plus2(v_23, v_22);
    stack[0] = v_22;
    goto v_12;
v_14:
v_12:
    v_22 = stack[0];
    return onevalue(v_22);
}



// Code for aex_psrem

static LispObject CC_aex_psrem(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    goto v_15;
    goto v_13;
v_15:
v_13:
    v_58 = stack[-2];
    {   LispObject fn = basic_elt(env, 1); // aex_fvarl
    v_58 = (*qfn1(fn))(fn, v_58);
    }
    env = stack[-5];
    if (v_58 == nil) goto v_19;
    else goto v_20;
v_19:
    {
        LispObject fn = basic_elt(env, 2); // aex_0
        return (*qfn0(fn))(fn);
    }
v_20:
    v_58 = stack[-3];
    {   LispObject fn = basic_elt(env, 3); // aex_ex
    v_58 = (*qfn1(fn))(fn, v_58);
    }
    env = stack[-5];
    if (!car_legal(v_58)) v_58 = carerror(v_58); else
    v_58 = car(v_58);
    stack[-4] = v_58;
    v_58 = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // aex_ex
    v_58 = (*qfn1(fn))(fn, v_58);
    }
    env = stack[-5];
    if (!car_legal(v_58)) v_58 = carerror(v_58); else
    v_58 = car(v_58);
    stack[0] = v_58;
    v_59 = stack[-2];
    v_58 = stack[-1];
    {   LispObject fn = basic_elt(env, 4); // aex_lc
    v_58 = (*qfn2(fn))(fn, v_59, v_58);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 5); // aex_sgn
    v_58 = (*qfn1(fn))(fn, v_58);
    }
    env = stack[-5];
    goto v_37;
    goto v_35;
v_37:
v_35:
    v_58 = ncons(v_58);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 6); // sfto_psrem
    v_58 = (*qfn4up(fn))(fn, stack[-4], stack[0], stack[-1], v_58);
    }
    env = stack[-5];
    stack[0] = v_58;
    v_59 = stack[0];
    v_58 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-1] = cons(v_59, v_58);
    env = stack[-5];
    v_58 = stack[0];
    {   LispObject fn = basic_elt(env, 7); // kernels
    stack[0] = (*qfn1(fn))(fn, v_58);
    }
    env = stack[-5];
    v_58 = stack[-3];
    {   LispObject fn = basic_elt(env, 8); // aex_ctx
    stack[-3] = (*qfn1(fn))(fn, v_58);
    }
    env = stack[-5];
    v_58 = stack[-2];
    {   LispObject fn = basic_elt(env, 8); // aex_ctx
    v_58 = (*qfn1(fn))(fn, v_58);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 9); // ctx_union
    v_58 = (*qfn2(fn))(fn, stack[-3], v_58);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 10); // ctx_filter
    v_58 = (*qfn2(fn))(fn, stack[0], v_58);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 11); // aex_mk
    v_58 = (*qfn2(fn))(fn, stack[-1], v_58);
    }
    env = stack[-5];
    {
        LispObject fn = basic_elt(env, 12); // aex_mklcnt
        return (*qfn1(fn))(fn, v_58);
    }
    return onevalue(v_58);
}



// Code for f2df

static LispObject CC_f2df(LispObject env,
                         LispObject v_2)
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
    v_69 = stack[0];
    if (!consp(v_69)) goto v_10;
    else goto v_11;
v_10:
    v_69 = lisp_true;
    goto v_9;
v_11:
    v_69 = stack[0];
    if (!car_legal(v_69)) v_69 = carerror(v_69); else
    v_69 = car(v_69);
    v_69 = (consp(v_69) ? nil : lisp_true);
    goto v_9;
    v_69 = nil;
v_9:
    if (v_69 == nil) goto v_7;
    v_70 = stack[0];
    v_69 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_69 = cons(v_70, v_69);
    env = stack[-2];
    {
        LispObject fn = basic_elt(env, 2); // dfconst
        return (*qfn1(fn))(fn, v_69);
    }
v_7:
    v_69 = stack[0];
    if (!car_legal(v_69)) v_69 = carerror(v_69); else
    v_69 = car(v_69);
    if (!car_legal(v_69)) v_69 = carerror(v_69); else
    v_69 = car(v_69);
    if (!car_legal(v_69)) v_70 = carerror(v_69); else
    v_70 = car(v_69);
    v_69 = qvalue(basic_elt(env, 1)); // zlist
    v_69 = Lmember(nil, v_70, v_69);
    if (v_69 == nil) goto v_24;
    v_69 = stack[0];
    if (!car_legal(v_69)) v_69 = carerror(v_69); else
    v_69 = car(v_69);
    if (!car_legal(v_69)) v_69 = carerror(v_69); else
    v_69 = car(v_69);
    if (!car_legal(v_69)) v_71 = carerror(v_69); else
    v_71 = car(v_69);
    v_69 = stack[0];
    if (!car_legal(v_69)) v_69 = carerror(v_69); else
    v_69 = car(v_69);
    if (!car_legal(v_69)) v_69 = carerror(v_69); else
    v_69 = car(v_69);
    if (!car_legal(v_69)) v_70 = cdrerror(v_69); else
    v_70 = cdr(v_69);
    v_69 = qvalue(basic_elt(env, 1)); // zlist
    {   LispObject fn = basic_elt(env, 3); // vp2df
    stack[-1] = (*qfn3(fn))(fn, v_71, v_70, v_69);
    }
    env = stack[-2];
    v_69 = stack[0];
    if (!car_legal(v_69)) v_69 = carerror(v_69); else
    v_69 = car(v_69);
    if (!car_legal(v_69)) v_69 = cdrerror(v_69); else
    v_69 = cdr(v_69);
    {   LispObject fn = basic_elt(env, 0); // f2df
    v_69 = (*qfn1(fn))(fn, v_69);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 4); // multdf
    stack[-1] = (*qfn2(fn))(fn, stack[-1], v_69);
    }
    env = stack[-2];
    v_69 = stack[0];
    if (!car_legal(v_69)) v_69 = cdrerror(v_69); else
    v_69 = cdr(v_69);
    {   LispObject fn = basic_elt(env, 0); // f2df
    v_69 = (*qfn1(fn))(fn, v_69);
    }
    env = stack[-2];
    {
        LispObject v_74 = stack[-1];
        LispObject fn = basic_elt(env, 5); // plusdf
        return (*qfn2(fn))(fn, v_74, v_69);
    }
v_24:
    v_69 = stack[0];
    if (!car_legal(v_69)) v_69 = carerror(v_69); else
    v_69 = car(v_69);
    if (!car_legal(v_69)) v_70 = carerror(v_69); else
    v_70 = car(v_69);
    v_69 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_71 = cons(v_70, v_69);
    env = stack[-2];
    v_70 = nil;
    v_69 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-1] = acons(v_71, v_70, v_69);
    env = stack[-2];
    v_69 = stack[0];
    if (!car_legal(v_69)) v_69 = carerror(v_69); else
    v_69 = car(v_69);
    if (!car_legal(v_69)) v_69 = cdrerror(v_69); else
    v_69 = cdr(v_69);
    {   LispObject fn = basic_elt(env, 0); // f2df
    v_69 = (*qfn1(fn))(fn, v_69);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 6); // multdfconst
    stack[-1] = (*qfn2(fn))(fn, stack[-1], v_69);
    }
    env = stack[-2];
    v_69 = stack[0];
    if (!car_legal(v_69)) v_69 = cdrerror(v_69); else
    v_69 = cdr(v_69);
    {   LispObject fn = basic_elt(env, 0); // f2df
    v_69 = (*qfn1(fn))(fn, v_69);
    }
    env = stack[-2];
    {
        LispObject v_75 = stack[-1];
        LispObject fn = basic_elt(env, 5); // plusdf
        return (*qfn2(fn))(fn, v_75, v_69);
    }
    v_69 = nil;
    return onevalue(v_69);
}



// Code for get_dimension_in

static LispObject CC_get_dimension_in(LispObject env,
                         LispObject v_2)
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
        push(v_2);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_11 = v_2;
// end of prologue
    v_12 = basic_elt(env, 1); // id
    {   LispObject fn = basic_elt(env, 2); // get_rep_matrix_in
    v_11 = (*qfn2(fn))(fn, v_12, v_11);
    }
    env = stack[0];
    {   LispObject fn = basic_elt(env, 3); // mk!+trace
    v_11 = (*qfn1(fn))(fn, v_11);
    }
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 4); // change!+sq!+to!+int
        return (*qfn1(fn))(fn, v_11);
    }
    return onevalue(v_11);
}



// Code for talp_qesolset

static LispObject CC_talp_qesolset(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_86, v_87;
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
    v_86 = stack[-1];
    {   LispObject fn = basic_elt(env, 4); // talp_arg2l
    v_86 = (*qfn1(fn))(fn, v_86);
    }
    env = stack[-4];
    stack[-3] = v_86;
    v_86 = stack[-1];
    {   LispObject fn = basic_elt(env, 5); // talp_arg2r
    v_86 = (*qfn1(fn))(fn, v_86);
    }
    env = stack[-4];
    stack[0] = v_86;
    v_87 = stack[-3];
    v_86 = stack[-2];
    {   LispObject fn = basic_elt(env, 6); // talp_contains
    v_86 = (*qfn2(fn))(fn, v_87, v_86);
    }
    env = stack[-4];
    if (v_86 == nil) goto v_18;
    else goto v_17;
v_18:
    v_87 = stack[0];
    v_86 = stack[-2];
    {   LispObject fn = basic_elt(env, 6); // talp_contains
    v_86 = (*qfn2(fn))(fn, v_87, v_86);
    }
    env = stack[-4];
    if (v_86 == nil) goto v_22;
    else goto v_17;
v_22:
    v_86 = basic_elt(env, 1); // ignore
    goto v_9;
v_17:
    v_86 = stack[-1];
    if (!consp(v_86)) goto v_33;
    else goto v_34;
v_33:
    v_86 = stack[-1];
    v_87 = v_86;
    goto v_32;
v_34:
    v_86 = stack[-1];
    if (!car_legal(v_86)) v_86 = carerror(v_86); else
    v_86 = car(v_86);
    v_87 = v_86;
    goto v_32;
    v_87 = nil;
v_32:
    v_86 = basic_elt(env, 2); // equal
    if (v_87 == v_86) goto v_30;
    v_86 = basic_elt(env, 3); // failed
    goto v_9;
v_30:
    v_87 = stack[-3];
    v_86 = stack[-2];
    {   LispObject fn = basic_elt(env, 6); // talp_contains
    v_86 = (*qfn2(fn))(fn, v_87, v_86);
    }
    env = stack[-4];
    if (v_86 == nil) goto v_46;
    v_87 = stack[0];
    v_86 = stack[-2];
    {   LispObject fn = basic_elt(env, 6); // talp_contains
    v_86 = (*qfn2(fn))(fn, v_87, v_86);
    }
    env = stack[-4];
    if (v_86 == nil) goto v_46;
    v_86 = basic_elt(env, 3); // failed
    goto v_9;
v_46:
    v_87 = stack[-3];
    v_86 = stack[-2];
    if (equal(v_87, v_86)) goto v_63;
    v_87 = stack[0];
    v_86 = stack[-2];
    v_86 = Lneq_2(nil, v_87, v_86);
    env = stack[-4];
    goto v_61;
v_63:
    v_86 = nil;
    goto v_61;
    v_86 = nil;
v_61:
    if (v_86 == nil) goto v_59;
    v_86 = basic_elt(env, 3); // failed
    goto v_9;
v_59:
    v_87 = stack[-3];
    v_86 = stack[-2];
    if (v_87 == v_86) goto v_75;
    else goto v_76;
v_75:
    v_86 = stack[0];
    goto v_74;
v_76:
    v_86 = stack[-3];
    goto v_74;
    v_86 = nil;
v_74:
    v_87 = stack[-2];
    return cons(v_87, v_86);
v_9:
    return onevalue(v_86);
}



// Code for cl_susicpknowl

static LispObject CC_cl_susicpknowl(LispObject env,
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    v_47 = v_2;
// end of prologue
    stack[-3] = v_47;
    v_47 = stack[-3];
    if (v_47 == nil) goto v_13;
    else goto v_14;
v_13:
    v_47 = nil;
    goto v_8;
v_14:
    v_47 = stack[-3];
    if (!car_legal(v_47)) v_47 = carerror(v_47); else
    v_47 = car(v_47);
    v_48 = v_47;
    if (!car_legal(v_48)) v_48 = carerror(v_48); else
    v_48 = car(v_48);
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    v_47 = cons(v_48, v_47);
    env = stack[-4];
    v_47 = ncons(v_47);
    env = stack[-4];
    stack[-1] = v_47;
    stack[-2] = v_47;
v_9:
    v_47 = stack[-3];
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    stack[-3] = v_47;
    v_47 = stack[-3];
    if (v_47 == nil) goto v_30;
    else goto v_31;
v_30:
    v_47 = stack[-2];
    goto v_8;
v_31:
    stack[0] = stack[-1];
    v_47 = stack[-3];
    if (!car_legal(v_47)) v_47 = carerror(v_47); else
    v_47 = car(v_47);
    v_48 = v_47;
    if (!car_legal(v_48)) v_48 = carerror(v_48); else
    v_48 = car(v_48);
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    v_47 = cons(v_48, v_47);
    env = stack[-4];
    v_47 = ncons(v_47);
    env = stack[-4];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_47);
    v_47 = stack[-1];
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    stack[-1] = v_47;
    goto v_9;
v_8:
    return onevalue(v_47);
}



// Code for gpexpp

static LispObject CC_gpexpp(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_184, v_185;
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
    v_184 = stack[0];
    if (!consp(v_184)) goto v_10;
    else goto v_11;
v_10:
    v_184 = stack[0];
    v_184 = Lsymbolp(nil, v_184);
    v_185 = v_184;
    if (v_184 == nil) goto v_16;
    v_184 = v_185;
    goto v_6;
v_16:
    v_184 = stack[0];
    v_184 = (is_number(v_184) ? lisp_true : nil);
    v_185 = v_184;
    if (v_184 == nil) goto v_21;
    v_184 = v_185;
    goto v_6;
v_21:
    v_184 = nil;
    goto v_6;
    goto v_9;
v_11:
    v_184 = stack[0];
    if (!car_legal(v_184)) v_185 = carerror(v_184); else
    v_185 = car(v_184);
    v_184 = basic_elt(env, 1); // (!:rd!: !:cr!: !:crn!: !:gi!:)
    v_184 = Lmemq(nil, v_185, v_184);
    if (v_184 == nil) goto v_29;
    v_184 = lisp_true;
    goto v_6;
v_29:
    v_184 = stack[0];
    if (!car_legal(v_184)) v_185 = carerror(v_184); else
    v_185 = car(v_184);
    v_184 = basic_elt(env, 2); // plus
    if (v_185 == v_184) goto v_35;
    else goto v_36;
v_35:
    v_184 = stack[0];
    v_185 = Llength(nil, v_184);
    env = stack[-1];
    v_184 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_184 = static_cast<LispObject>(geq2(v_185, v_184));
    v_184 = v_184 ? lisp_true : nil;
    env = stack[-1];
    if (v_184 == nil) goto v_43;
    v_184 = stack[0];
    if (!car_legal(v_184)) v_184 = cdrerror(v_184); else
    v_184 = cdr(v_184);
    if (!car_legal(v_184)) v_184 = carerror(v_184); else
    v_184 = car(v_184);
    {   LispObject fn = basic_elt(env, 0); // gpexpp
    v_184 = (*qfn1(fn))(fn, v_184);
    }
    env = stack[-1];
    if (v_184 == nil) goto v_51;
    v_184 = stack[0];
    if (!car_legal(v_184)) v_184 = cdrerror(v_184); else
    v_184 = cdr(v_184);
    if (!car_legal(v_184)) v_184 = cdrerror(v_184); else
    v_184 = cdr(v_184);
    {
        LispObject fn = basic_elt(env, 8); // gpexp1p
        return (*qfn1(fn))(fn, v_184);
    }
v_51:
    v_184 = nil;
    goto v_6;
    goto v_41;
v_43:
    v_184 = nil;
    goto v_6;
v_41:
    goto v_9;
v_36:
    v_184 = stack[0];
    if (!car_legal(v_184)) v_185 = carerror(v_184); else
    v_185 = car(v_184);
    v_184 = basic_elt(env, 3); // (minus recip)
    v_184 = Lmemq(nil, v_185, v_184);
    if (v_184 == nil) goto v_67;
    v_184 = stack[0];
    v_185 = Llength(nil, v_184);
    env = stack[-1];
    v_184 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    if (v_185 == v_184) goto v_74;
    else goto v_75;
v_74:
    v_184 = stack[0];
    if (!car_legal(v_184)) v_184 = cdrerror(v_184); else
    v_184 = cdr(v_184);
    if (!car_legal(v_184)) v_184 = carerror(v_184); else
    v_184 = car(v_184);
    stack[0] = v_184;
    goto v_7;
v_75:
    v_184 = nil;
    goto v_6;
    goto v_9;
v_67:
    v_184 = stack[0];
    if (!car_legal(v_184)) v_185 = carerror(v_184); else
    v_185 = car(v_184);
    v_184 = basic_elt(env, 4); // (difference quotient expt)
    v_184 = Lmemq(nil, v_185, v_184);
    if (v_184 == nil) goto v_86;
    v_184 = stack[0];
    v_185 = Llength(nil, v_184);
    env = stack[-1];
    v_184 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    if (v_185 == v_184) goto v_93;
    else goto v_94;
v_93:
    v_184 = stack[0];
    if (!car_legal(v_184)) v_184 = cdrerror(v_184); else
    v_184 = cdr(v_184);
    if (!car_legal(v_184)) v_184 = carerror(v_184); else
    v_184 = car(v_184);
    {   LispObject fn = basic_elt(env, 0); // gpexpp
    v_184 = (*qfn1(fn))(fn, v_184);
    }
    env = stack[-1];
    if (v_184 == nil) goto v_101;
    v_184 = stack[0];
    if (!car_legal(v_184)) v_184 = cdrerror(v_184); else
    v_184 = cdr(v_184);
    if (!car_legal(v_184)) v_184 = cdrerror(v_184); else
    v_184 = cdr(v_184);
    if (!car_legal(v_184)) v_184 = carerror(v_184); else
    v_184 = car(v_184);
    stack[0] = v_184;
    goto v_7;
v_101:
    v_184 = nil;
    goto v_6;
    goto v_92;
v_94:
    v_184 = nil;
    goto v_6;
v_92:
    goto v_9;
v_86:
    v_184 = stack[0];
    if (!car_legal(v_184)) v_185 = carerror(v_184); else
    v_185 = car(v_184);
    v_184 = basic_elt(env, 5); // times
    if (v_185 == v_184) goto v_116;
    else goto v_117;
v_116:
    v_184 = stack[0];
    v_185 = Llength(nil, v_184);
    env = stack[-1];
    v_184 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_184 = static_cast<LispObject>(geq2(v_185, v_184));
    v_184 = v_184 ? lisp_true : nil;
    env = stack[-1];
    if (v_184 == nil) goto v_124;
    v_184 = stack[0];
    if (!car_legal(v_184)) v_184 = cdrerror(v_184); else
    v_184 = cdr(v_184);
    if (!car_legal(v_184)) v_184 = carerror(v_184); else
    v_184 = car(v_184);
    {   LispObject fn = basic_elt(env, 0); // gpexpp
    v_184 = (*qfn1(fn))(fn, v_184);
    }
    env = stack[-1];
    if (v_184 == nil) goto v_132;
    v_184 = stack[0];
    if (!car_legal(v_184)) v_184 = cdrerror(v_184); else
    v_184 = cdr(v_184);
    if (!car_legal(v_184)) v_184 = cdrerror(v_184); else
    v_184 = cdr(v_184);
    if (!car_legal(v_184)) v_184 = carerror(v_184); else
    v_184 = car(v_184);
    {   LispObject fn = basic_elt(env, 0); // gpexpp
    v_184 = (*qfn1(fn))(fn, v_184);
    }
    env = stack[-1];
    if (v_184 == nil) goto v_140;
    v_184 = stack[0];
    if (!car_legal(v_184)) v_184 = cdrerror(v_184); else
    v_184 = cdr(v_184);
    if (!car_legal(v_184)) v_184 = cdrerror(v_184); else
    v_184 = cdr(v_184);
    if (!car_legal(v_184)) v_184 = cdrerror(v_184); else
    v_184 = cdr(v_184);
    {
        LispObject fn = basic_elt(env, 8); // gpexp1p
        return (*qfn1(fn))(fn, v_184);
    }
v_140:
    v_184 = nil;
    goto v_6;
    goto v_130;
v_132:
    v_184 = nil;
    goto v_6;
v_130:
    goto v_122;
v_124:
    v_184 = nil;
    goto v_6;
v_122:
    goto v_9;
v_117:
    v_184 = stack[0];
    if (!car_legal(v_184)) v_185 = carerror(v_184); else
    v_185 = car(v_184);
    v_184 = basic_elt(env, 6); // !:rd!:
    if (v_185 == v_184) goto v_160;
    else goto v_161;
v_160:
    v_184 = lisp_true;
    goto v_6;
v_161:
    v_184 = stack[0];
    if (!car_legal(v_184)) v_185 = carerror(v_184); else
    v_185 = car(v_184);
    v_184 = basic_elt(env, 7); // (!:cr!: !:crn!: !:gi!:)
    v_184 = Lmemq(nil, v_185, v_184);
    if (v_184 == nil) goto v_167;
    v_184 = lisp_true;
    goto v_6;
v_167:
    v_184 = stack[0];
    if (!car_legal(v_184)) v_184 = carerror(v_184); else
    v_184 = car(v_184);
    {   LispObject fn = basic_elt(env, 9); // unresidp
    v_184 = (*qfn1(fn))(fn, v_184);
    }
    env = stack[-1];
    if (v_184 == nil) goto v_174;
    v_184 = stack[0];
    if (!car_legal(v_184)) v_184 = cdrerror(v_184); else
    v_184 = cdr(v_184);
    {
        LispObject fn = basic_elt(env, 10); // gparg1p
        return (*qfn1(fn))(fn, v_184);
    }
v_174:
    v_184 = nil;
    goto v_6;
v_9:
    v_184 = nil;
v_6:
    return onevalue(v_184);
}



// Code for mo_support

static LispObject CC_mo_support(LispObject env,
                         LispObject v_2)
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
    v_37 = qvalue(basic_elt(env, 1)); // cali!=basering
    {   LispObject fn = basic_elt(env, 2); // ring_names
    v_37 = (*qfn1(fn))(fn, v_37);
    }
    env = stack[-4];
    stack[-1] = v_37;
v_10:
    v_37 = stack[-1];
    if (v_37 == nil) goto v_15;
    else goto v_16;
v_15:
    goto v_9;
v_16:
    v_37 = stack[-1];
    if (!car_legal(v_37)) v_37 = carerror(v_37); else
    v_37 = car(v_37);
    stack[0] = v_37;
    v_37 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // mo_from_a
    v_38 = (*qfn1(fn))(fn, v_37);
    }
    env = stack[-4];
    v_37 = stack[-2];
    {   LispObject fn = basic_elt(env, 4); // mo_divides!?
    v_37 = (*qfn2(fn))(fn, v_38, v_37);
    }
    env = stack[-4];
    if (v_37 == nil) goto v_25;
    v_38 = stack[0];
    v_37 = stack[-3];
    v_37 = cons(v_38, v_37);
    env = stack[-4];
    stack[-3] = v_37;
    goto v_23;
v_25:
v_23:
    v_37 = stack[-1];
    if (!car_legal(v_37)) v_37 = cdrerror(v_37); else
    v_37 = cdr(v_37);
    stack[-1] = v_37;
    goto v_10;
v_9:
    v_37 = stack[-3];
        return Lnreverse(nil, v_37);
    return onevalue(v_37);
}



// Code for addnew

static LispObject CC_addnew(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[0] = v_4;
    stack[-1] = v_3;
    stack[-2] = v_2;
// end of prologue
    v_30 = qvalue(basic_elt(env, 1)); // gv!*
    v_29 = stack[-1];
    v_28 = stack[-2];
    v_28 = Lputv(nil, v_30, v_29, v_28);
    env = stack[-3];
    v_30 = qvalue(basic_elt(env, 2)); // bv!*
    v_29 = stack[-1];
    v_28 = lisp_true;
    v_28 = Lputv(nil, v_30, v_29, v_28);
    env = stack[-3];
    v_28 = stack[-2];
    if (v_28 == nil) goto v_16;
    else goto v_17;
v_16:
    v_28 = stack[0];
    goto v_15;
v_17:
    v_28 = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // ljet
    v_28 = (*qfn1(fn))(fn, v_28);
    }
    env = stack[-3];
    v_29 = cons(stack[-1], v_28);
    env = stack[-3];
    v_28 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // insert
    v_28 = (*qfn2(fn))(fn, v_29, v_28);
    }
    goto v_15;
    v_28 = nil;
v_15:
    return onevalue(v_28);
}



// Code for flattens1

static LispObject CC_flattens1(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
v_6:
    v_29 = stack[0];
    if (!consp(v_29)) goto v_9;
    else goto v_10;
v_9:
    v_29 = stack[0];
    return ncons(v_29);
v_10:
    v_29 = stack[0];
    if (!car_legal(v_29)) v_29 = cdrerror(v_29); else
    v_29 = cdr(v_29);
    if (v_29 == nil) goto v_15;
    v_29 = stack[0];
    if (!car_legal(v_29)) v_29 = carerror(v_29); else
    v_29 = car(v_29);
    {   LispObject fn = basic_elt(env, 0); // flattens1
    stack[-1] = (*qfn1(fn))(fn, v_29);
    }
    env = stack[-2];
    v_29 = stack[0];
    if (!car_legal(v_29)) v_29 = cdrerror(v_29); else
    v_29 = cdr(v_29);
    {   LispObject fn = basic_elt(env, 0); // flattens1
    v_29 = (*qfn1(fn))(fn, v_29);
    }
    {
        LispObject v_32 = stack[-1];
        return Lappend_2(nil, v_32, v_29);
    }
v_15:
    v_29 = stack[0];
    if (!car_legal(v_29)) v_29 = carerror(v_29); else
    v_29 = car(v_29);
    stack[0] = v_29;
    goto v_6;
    v_29 = nil;
    return onevalue(v_29);
}



// Code for mkexpvec

static LispObject CC_mkexpvec(LispObject env,
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
    real_push(nil, nil, nil, nil, nil);
    stack_popper stack_popper_var(6);
// copy arguments values to proper place
    stack[-3] = v_2;
// end of prologue
    v_70 = stack[-3];
    v_69 = qvalue(basic_elt(env, 1)); // dipvars!*
    v_69 = Lmember(nil, v_70, v_69);
    if (v_69 == nil) goto v_6;
    else goto v_7;
v_6:
    v_70 = stack[-3];
    v_69 = basic_elt(env, 2); // "dipoly variable"
    {
        LispObject fn = basic_elt(env, 3); // typerr
        return (*qfn2(fn))(fn, v_70, v_69);
    }
v_7:
    v_69 = qvalue(basic_elt(env, 1)); // dipvars!*
    stack[-4] = v_69;
    v_69 = stack[-4];
    if (v_69 == nil) goto v_25;
    else goto v_26;
v_25:
    v_69 = nil;
    goto v_20;
v_26:
    v_69 = stack[-4];
    if (!car_legal(v_69)) v_69 = carerror(v_69); else
    v_69 = car(v_69);
    v_70 = v_69;
    v_69 = stack[-3];
    if (v_70 == v_69) goto v_35;
    else goto v_36;
v_35:
    v_69 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_34;
v_36:
    v_69 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_34;
    v_69 = nil;
v_34:
    v_69 = ncons(v_69);
    env = stack[-5];
    stack[-1] = v_69;
    stack[-2] = v_69;
v_21:
    v_69 = stack[-4];
    if (!car_legal(v_69)) v_69 = cdrerror(v_69); else
    v_69 = cdr(v_69);
    stack[-4] = v_69;
    v_69 = stack[-4];
    if (v_69 == nil) goto v_47;
    else goto v_48;
v_47:
    v_69 = stack[-2];
    goto v_20;
v_48:
    stack[0] = stack[-1];
    v_69 = stack[-4];
    if (!car_legal(v_69)) v_69 = carerror(v_69); else
    v_69 = car(v_69);
    v_70 = v_69;
    v_69 = stack[-3];
    if (v_70 == v_69) goto v_58;
    else goto v_59;
v_58:
    v_69 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_57;
v_59:
    v_69 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_57;
    v_69 = nil;
v_57:
    v_69 = ncons(v_69);
    env = stack[-5];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_69);
    v_69 = stack[-1];
    if (!car_legal(v_69)) v_69 = cdrerror(v_69); else
    v_69 = cdr(v_69);
    stack[-1] = v_69;
    goto v_21;
v_20:
    goto v_5;
    v_69 = nil;
v_5:
    return onevalue(v_69);
}



// Code for qroundup

static LispObject CC_qroundup(LispObject env,
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
    v_26 = stack[-1];
    v_25 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_25 = static_cast<LispObject>(lessp2(v_26, v_25));
    v_25 = v_25 ? lisp_true : nil;
    env = stack[-2];
    if (v_25 == nil) goto v_8;
    v_25 = stack[-1];
    v_26 = negate(v_25);
    env = stack[-2];
    v_25 = stack[0];
    v_25 = quot2(v_26, v_25);
    return negate(v_25);
v_8:
    v_25 = stack[0];
    v_25 = sub1(v_25);
    env = stack[-2];
    v_26 = plus2(stack[-1], v_25);
    v_25 = stack[0];
    return quot2(v_26, v_25);
    v_25 = nil;
    return onevalue(v_25);
}



// Code for aex_unbind

static LispObject CC_aex_unbind(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    v_12 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // aex_ex
    stack[-2] = (*qfn1(fn))(fn, v_12);
    }
    env = stack[-3];
    v_12 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // aex_ctx
    v_13 = (*qfn1(fn))(fn, v_12);
    }
    env = stack[-3];
    v_12 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // ctx_remove
    v_12 = (*qfn2(fn))(fn, v_13, v_12);
    }
    env = stack[-3];
    {
        LispObject v_17 = stack[-2];
        LispObject fn = basic_elt(env, 4); // aex_mk
        return (*qfn2(fn))(fn, v_17, v_12);
    }
}



// Code for min2!-order

static LispObject CC_min2Korder(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    stack[-4] = nil;
v_9:
    v_66 = stack[-3];
    if (v_66 == nil) goto v_12;
    else goto v_13;
v_12:
    v_66 = stack[-4];
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn1(fn))(fn, v_66);
    }
v_13:
    v_66 = stack[-1];
    if (!car_legal(v_66)) v_66 = carerror(v_66); else
    v_66 = car(v_66);
    stack[0] = v_66;
    v_66 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_67 = v_66;
v_24:
    v_66 = stack[0];
    if (v_66 == nil) goto v_30;
    else goto v_31;
v_30:
    v_66 = v_67;
    goto v_23;
v_31:
    v_66 = stack[0];
    if (!car_legal(v_66)) v_66 = carerror(v_66); else
    v_66 = car(v_66);
    {   LispObject fn = basic_elt(env, 2); // tayexp!-plus2
    v_66 = (*qfn2(fn))(fn, v_66, v_67);
    }
    env = stack[-5];
    v_67 = v_66;
    v_66 = stack[0];
    if (!car_legal(v_66)) v_66 = cdrerror(v_66); else
    v_66 = cdr(v_66);
    stack[0] = v_66;
    goto v_24;
v_23:
    stack[0] = v_66;
    v_67 = stack[0];
    v_66 = stack[-2];
    if (!car_legal(v_66)) v_66 = carerror(v_66); else
    v_66 = car(v_66);
    {   LispObject fn = basic_elt(env, 3); // tayexp!-greaterp
    v_66 = (*qfn2(fn))(fn, v_67, v_66);
    }
    env = stack[-5];
    if (v_66 == nil) goto v_46;
    v_67 = stack[0];
    v_66 = stack[-3];
    if (!car_legal(v_66)) v_66 = carerror(v_66); else
    v_66 = car(v_66);
    {   LispObject fn = basic_elt(env, 4); // tayexp!-min2
    v_66 = (*qfn2(fn))(fn, v_67, v_66);
    }
    env = stack[-5];
    v_67 = v_66;
    goto v_44;
v_46:
    v_66 = stack[-3];
    if (!car_legal(v_66)) v_66 = carerror(v_66); else
    v_66 = car(v_66);
    v_67 = v_66;
    goto v_44;
    v_67 = nil;
v_44:
    v_66 = stack[-4];
    v_66 = cons(v_67, v_66);
    env = stack[-5];
    stack[-4] = v_66;
    v_66 = stack[-3];
    if (!car_legal(v_66)) v_66 = cdrerror(v_66); else
    v_66 = cdr(v_66);
    stack[-3] = v_66;
    v_66 = stack[-2];
    if (!car_legal(v_66)) v_66 = cdrerror(v_66); else
    v_66 = cdr(v_66);
    stack[-2] = v_66;
    v_66 = stack[-1];
    if (!car_legal(v_66)) v_66 = cdrerror(v_66); else
    v_66 = cdr(v_66);
    stack[-1] = v_66;
    goto v_9;
    v_66 = nil;
    return onevalue(v_66);
}



// Code for mk!+inner!+product

static LispObject CC_mkLinnerLproduct(LispObject env,
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
    real_push(nil, nil, nil, nil, nil);
    stack_popper stack_popper_var(6);
// copy arguments values to proper place
    stack[-1] = v_3;
    stack[-3] = v_2;
// end of prologue
    v_66 = stack[-3];
    {   LispObject fn = basic_elt(env, 4); // get!+vec!+dim
    stack[0] = (*qfn1(fn))(fn, v_66);
    }
    env = stack[-5];
    v_66 = stack[-1];
    {   LispObject fn = basic_elt(env, 4); // get!+vec!+dim
    v_66 = (*qfn1(fn))(fn, v_66);
    }
    env = stack[-5];
    if (equal(stack[0], v_66)) goto v_13;
    v_66 = basic_elt(env, 1); // "wrong dimensions in innerproduct"
    {   LispObject fn = basic_elt(env, 5); // rederr
    v_66 = (*qfn1(fn))(fn, v_66);
    }
    env = stack[-5];
    goto v_11;
v_13:
v_11:
    v_67 = nil;
    v_66 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_66 = cons(v_67, v_66);
    env = stack[-5];
    stack[0] = v_66;
    v_66 = qvalue(basic_elt(env, 2)); // !*complex
    if (v_66 == nil) goto v_26;
    v_66 = stack[-1];
    {   LispObject fn = basic_elt(env, 6); // mk!+conjugate!+vec
    v_66 = (*qfn1(fn))(fn, v_66);
    }
    env = stack[-5];
    stack[-4] = v_66;
    goto v_24;
v_26:
    v_66 = stack[-1];
    stack[-4] = v_66;
    goto v_24;
v_24:
    v_66 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-2] = v_66;
v_36:
    v_66 = stack[-3];
    {   LispObject fn = basic_elt(env, 4); // get!+vec!+dim
    v_67 = (*qfn1(fn))(fn, v_66);
    }
    env = stack[-5];
    v_66 = stack[-2];
    v_66 = difference2(v_67, v_66);
    env = stack[-5];
    v_66 = Lminusp(nil, v_66);
    env = stack[-5];
    if (v_66 == nil) goto v_41;
    goto v_35;
v_41:
    stack[-1] = stack[0];
    v_67 = stack[-3];
    v_66 = stack[-2];
    {   LispObject fn = basic_elt(env, 7); // get!+vec!+entry
    stack[0] = (*qfn2(fn))(fn, v_67, v_66);
    }
    env = stack[-5];
    v_67 = stack[-4];
    v_66 = stack[-2];
    {   LispObject fn = basic_elt(env, 7); // get!+vec!+entry
    v_66 = (*qfn2(fn))(fn, v_67, v_66);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 8); // multsq
    v_66 = (*qfn2(fn))(fn, stack[0], v_66);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 9); // addsq
    v_66 = (*qfn2(fn))(fn, stack[-1], v_66);
    }
    env = stack[-5];
    stack[0] = v_66;
    v_66 = stack[-2];
    v_66 = add1(v_66);
    env = stack[-5];
    stack[-2] = v_66;
    goto v_36;
v_35:
    v_66 = lisp_true;
// Binding !*sub2
// FLUIDBIND: reloadenv=5 litvec-offset=3 saveloc=1
{   bind_fluid_stack bind_fluid_var(-5, 3, -1);
    setvalue(basic_elt(env, 3), v_66); // !*sub2
    v_66 = stack[0];
    {   LispObject fn = basic_elt(env, 10); // subs2
    v_66 = (*qfn1(fn))(fn, v_66);
    }
    stack[0] = v_66;
    ;}  // end of a binding scope
    v_66 = stack[0];
    return onevalue(v_66);
}



// Code for mri_simplfloor1

static LispObject CC_mri_simplfloor1(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[-1] = v_2;
// end of prologue
    v_51 = stack[-1];
    if (!consp(v_51)) goto v_15;
    else goto v_16;
v_15:
    v_51 = lisp_true;
    goto v_14;
v_16:
    v_51 = stack[-1];
    if (!car_legal(v_51)) v_51 = carerror(v_51); else
    v_51 = car(v_51);
    v_51 = (consp(v_51) ? nil : lisp_true);
    goto v_14;
    v_51 = nil;
v_14:
    if (v_51 == nil) goto v_12;
    v_51 = stack[-1];
    goto v_8;
v_12:
    v_51 = stack[-1];
    if (!car_legal(v_51)) v_51 = carerror(v_51); else
    v_51 = car(v_51);
    if (!car_legal(v_51)) v_51 = cdrerror(v_51); else
    v_51 = cdr(v_51);
    {   LispObject fn = basic_elt(env, 1); // mri_simplfloor
    v_51 = (*qfn1(fn))(fn, v_51);
    }
    env = stack[-3];
    stack[0] = v_51;
    v_51 = stack[-1];
    if (!car_legal(v_51)) v_51 = cdrerror(v_51); else
    v_51 = cdr(v_51);
    {   LispObject fn = basic_elt(env, 1); // mri_simplfloor
    v_51 = (*qfn1(fn))(fn, v_51);
    }
    env = stack[-3];
    stack[-2] = v_51;
    v_51 = stack[-1];
    if (!car_legal(v_51)) v_51 = carerror(v_51); else
    v_51 = car(v_51);
    if (!car_legal(v_51)) v_51 = carerror(v_51); else
    v_51 = car(v_51);
    if (!car_legal(v_51)) v_51 = carerror(v_51); else
    v_51 = car(v_51);
    {   LispObject fn = basic_elt(env, 2); // mri_irsplit
    v_51 = (*qfn1(fn))(fn, v_51);
    }
    env = stack[-3];
    v_52 = v_51;
    if (!car_legal(v_52)) v_52 = carerror(v_52); else
    v_52 = car(v_52);
    if (!car_legal(v_51)) v_51 = cdrerror(v_51); else
    v_51 = cdr(v_51);
    {   LispObject fn = basic_elt(env, 3); // addf
    v_52 = (*qfn2(fn))(fn, v_52, v_51);
    }
    env = stack[-3];
    v_51 = stack[-1];
    if (!car_legal(v_51)) v_51 = carerror(v_51); else
    v_51 = car(v_51);
    if (!car_legal(v_51)) v_51 = carerror(v_51); else
    v_51 = car(v_51);
    if (!car_legal(v_51)) v_51 = cdrerror(v_51); else
    v_51 = cdr(v_51);
    {   LispObject fn = basic_elt(env, 4); // exptf
    v_51 = (*qfn2(fn))(fn, v_52, v_51);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 5); // multf
    v_52 = (*qfn2(fn))(fn, stack[0], v_51);
    }
    env = stack[-3];
    v_51 = stack[-2];
    {
        LispObject fn = basic_elt(env, 3); // addf
        return (*qfn2(fn))(fn, v_52, v_51);
    }
v_8:
    return onevalue(v_51);
}



// Code for cl_bnfsimpl

static LispObject CC_cl_bnfsimpl(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_16, v_17, v_18;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_17 = v_3;
    v_18 = v_2;
// end of prologue
    v_16 = qvalue(basic_elt(env, 1)); // !*rlbnfsac
    if (v_16 == nil) goto v_8;
    v_16 = v_18;
    {
        LispObject fn = basic_elt(env, 2); // cl_sac
        return (*qfn2(fn))(fn, v_16, v_17);
    }
v_8:
    v_16 = v_18;
    goto v_6;
    v_16 = nil;
v_6:
    return onevalue(v_16);
}



// Code for vdp_zero

static LispObject CC_vdp_zero(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_7, v_8, v_9;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// end of prologue
    v_9 = basic_elt(env, 1); // invalid
    v_8 = basic_elt(env, 1); // invalid
    v_7 = nil;
    {
        LispObject fn = basic_elt(env, 2); // vdp_make
        return (*qfn3(fn))(fn, v_9, v_8, v_7);
    }
}



// Code for countof

static LispObject CC_countof(LispObject env,
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
    if (equal(v_28, v_27)) goto v_7;
    else goto v_8;
v_7:
    v_27 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_6;
v_8:
    v_27 = stack[0];
    if (!consp(v_27)) goto v_12;
    else goto v_13;
v_12:
    v_27 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_6;
v_13:
    v_28 = stack[-1];
    v_27 = stack[0];
    if (!car_legal(v_27)) v_27 = carerror(v_27); else
    v_27 = car(v_27);
    {   LispObject fn = basic_elt(env, 0); // countof
    stack[-2] = (*qfn2(fn))(fn, v_28, v_27);
    }
    env = stack[-3];
    v_28 = stack[-1];
    v_27 = stack[0];
    if (!car_legal(v_27)) v_27 = cdrerror(v_27); else
    v_27 = cdr(v_27);
    {   LispObject fn = basic_elt(env, 0); // countof
    v_27 = (*qfn2(fn))(fn, v_28, v_27);
    }
    {
        LispObject v_32 = stack[-2];
        return plus2(v_32, v_27);
    }
    v_27 = nil;
v_6:
    return onevalue(v_27);
}



// Code for evalgeq

static LispObject CC_evalgeq(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // evallessp
    v_9 = (*qfn2(fn))(fn, v_10, v_9);
    }
    v_9 = (v_9 == nil ? lisp_true : nil);
    return onevalue(v_9);
}



// Code for lengthn

static LispObject CC_lengthn(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_27 = stack[0];
    if (v_27 == nil) goto v_6;
    else goto v_7;
v_6:
    v_27 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_5;
v_7:
    v_27 = stack[0];
    if (!car_legal(v_27)) v_27 = carerror(v_27); else
    v_27 = car(v_27);
    if (is_number(v_27)) goto v_10;
    else goto v_11;
v_10:
    v_27 = stack[0];
    if (!car_legal(v_27)) v_27 = carerror(v_27); else
    v_27 = car(v_27);
    stack[-1] = sub1(v_27);
    env = stack[-2];
    v_27 = stack[0];
    if (!car_legal(v_27)) v_27 = cdrerror(v_27); else
    v_27 = cdr(v_27);
    {   LispObject fn = basic_elt(env, 0); // lengthn
    v_27 = (*qfn1(fn))(fn, v_27);
    }
    {
        LispObject v_30 = stack[-1];
        return plus2(v_30, v_27);
    }
v_11:
    v_27 = stack[0];
    if (!car_legal(v_27)) v_27 = cdrerror(v_27); else
    v_27 = cdr(v_27);
    {   LispObject fn = basic_elt(env, 0); // lengthn
    v_27 = (*qfn1(fn))(fn, v_27);
    }
    return add1(v_27);
    v_27 = nil;
v_5:
    return onevalue(v_27);
}



// Code for spmatlength

static LispObject CC_spmatlength(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_49, v_50, v_51, v_52;
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
    v_51 = v_2;
// end of prologue
    v_49 = v_51;
    v_49 = Lconsp(nil, v_49);
    env = stack[-2];
    if (v_49 == nil) goto v_11;
    v_49 = v_51;
    goto v_9;
v_11:
    v_49 = v_51;
    if (!symbolp(v_49)) v_49 = nil;
    else { v_49 = qfastgets(v_49);
           if (v_49 != nil) { v_49 = elt(v_49, 4); // avalue
#ifdef RECORD_GET
             if (v_49 != SPID_NOPROP)
                record_get(elt(fastget_names, 4), 1);
             else record_get(elt(fastget_names, 4), 0),
                v_49 = nil; }
           else record_get(elt(fastget_names, 4), 0); }
#else
             if (v_49 == SPID_NOPROP) v_49 = nil; }}
#endif
    if (!car_legal(v_49)) v_49 = cdrerror(v_49); else
    v_49 = cdr(v_49);
    if (!car_legal(v_49)) v_49 = carerror(v_49); else
    v_49 = car(v_49);
    goto v_9;
v_9:
    v_50 = v_49;
    if (!car_legal(v_50)) v_50 = cdrerror(v_50); else
    v_50 = cdr(v_50);
    if (!car_legal(v_50)) v_50 = cdrerror(v_50); else
    v_50 = cdr(v_50);
    if (!car_legal(v_50)) v_50 = carerror(v_50); else
    v_50 = car(v_50);
    if (!car_legal(v_50)) v_50 = cdrerror(v_50); else
    v_50 = cdr(v_50);
    v_52 = v_50;
    v_50 = v_49;
    v_49 = basic_elt(env, 1); // sparsemat
    if (!consp(v_50)) goto v_28;
    v_50 = car(v_50);
    if (v_50 == v_49) goto v_29;
v_28:
    stack[-1] = basic_elt(env, 2); // matrix
    stack[0] = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_50 = basic_elt(env, 3); // "Matrix"
    v_49 = basic_elt(env, 4); // "not set"
    v_49 = list3(v_50, v_51, v_49);
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 6); // rerror
    v_49 = (*qfn3(fn))(fn, stack[-1], stack[0], v_49);
    }
    goto v_27;
v_29:
    v_50 = basic_elt(env, 5); // list
    v_49 = v_52;
    if (!car_legal(v_49)) v_49 = carerror(v_49); else
    v_49 = car(v_49);
    v_51 = v_52;
    if (!car_legal(v_51)) v_51 = cdrerror(v_51); else
    v_51 = cdr(v_51);
    if (!car_legal(v_51)) v_51 = carerror(v_51); else
    v_51 = car(v_51);
    return list3(v_50, v_49, v_51);
v_27:
    v_49 = nil;
    return onevalue(v_49);
}



// Code for sfpf

static LispObject CC_sfpf(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_27, v_28;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_28 = v_2;
// end of prologue
    v_27 = v_28;
    if (!consp(v_27)) goto v_10;
    else goto v_11;
v_10:
    v_27 = lisp_true;
    goto v_9;
v_11:
    v_27 = v_28;
    if (!car_legal(v_27)) v_27 = carerror(v_27); else
    v_27 = car(v_27);
    v_27 = (consp(v_27) ? nil : lisp_true);
    goto v_9;
    v_27 = nil;
v_9:
    if (v_27 == nil) goto v_6;
    else goto v_7;
v_6:
    v_27 = v_28;
    if (!car_legal(v_27)) v_27 = carerror(v_27); else
    v_27 = car(v_27);
    if (!car_legal(v_27)) v_27 = carerror(v_27); else
    v_27 = car(v_27);
    if (!car_legal(v_27)) v_27 = carerror(v_27); else
    v_27 = car(v_27);
    {
        LispObject fn = basic_elt(env, 1); // sfp
        return (*qfn1(fn))(fn, v_27);
    }
v_7:
    v_27 = nil;
    goto v_5;
    v_27 = nil;
v_5:
    return onevalue(v_27);
}



// Code for pnth!*

static LispObject CC_pnthH(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_26 = v_3;
    stack[0] = v_2;
// end of prologue
v_7:
    v_25 = stack[0];
    if (v_25 == nil) goto v_10;
    else goto v_11;
v_10:
    v_25 = nil;
    goto v_6;
v_11:
    v_27 = v_26;
    v_25 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_27 == v_25) goto v_14;
    else goto v_15;
v_14:
    v_25 = stack[0];
    goto v_6;
v_15:
    v_25 = stack[0];
    if (!car_legal(v_25)) v_25 = cdrerror(v_25); else
    v_25 = cdr(v_25);
    stack[0] = v_25;
    v_25 = v_26;
    v_25 = sub1(v_25);
    env = stack[-1];
    v_26 = v_25;
    goto v_7;
    v_25 = nil;
v_6:
    return onevalue(v_25);
}



// Code for generic_arguments

static LispObject CC_generic_arguments(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_10, v_11, v_12;
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
    v_12 = basic_elt(env, 1); // list
    if (!car_legal(v_10)) v_11 = carerror(v_10); else
    v_11 = car(v_10);
    v_10 = basic_elt(env, 2); // generic_function
    v_10 = get(v_11, v_10);
    return cons(v_12, v_10);
}



// Code for fs!:subang

static LispObject CC_fsTsubang(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    v_86 = stack[-8];
    if (v_86 == nil) goto v_8;
    else goto v_9;
v_8:
    v_86 = nil;
    goto v_7;
v_9:
    v_86 = static_cast<LispObject>(112)+TAG_FIXNUM; // 7
    v_86 = Lmkvect(nil, v_86);
    env = stack[-10];
    stack[-9] = v_86;
    v_87 = stack[-8];
    v_86 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_87 = Lgetv(nil, v_87, v_86);
    env = stack[-10];
    v_86 = stack[-7];
    v_86 = Lgetv(nil, v_87, v_86);
    env = stack[-10];
    stack[-5] = v_86;
    v_86 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-4] = v_86;
v_28:
    v_87 = static_cast<LispObject>(112)+TAG_FIXNUM; // 7
    v_86 = stack[-4];
    v_86 = difference2(v_87, v_86);
    env = stack[-10];
    v_86 = Lminusp(nil, v_86);
    env = stack[-10];
    if (v_86 == nil) goto v_33;
    goto v_27;
v_33:
    v_87 = stack[-4];
    v_86 = stack[-7];
    if (equal(v_87, v_86)) goto v_41;
    else goto v_42;
v_41:
    stack[-2] = stack[-9];
    stack[-1] = stack[-4];
    stack[0] = stack[-5];
    v_87 = stack[-6];
    v_86 = stack[-4];
    v_86 = Lgetv(nil, v_87, v_86);
    env = stack[-10];
    v_86 = times2(stack[0], v_86);
    env = stack[-10];
    v_86 = Lputv(nil, stack[-2], stack[-1], v_86);
    env = stack[-10];
    goto v_40;
v_42:
    stack[-3] = stack[-9];
    stack[-2] = stack[-4];
    v_87 = stack[-8];
    v_86 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_87 = Lgetv(nil, v_87, v_86);
    env = stack[-10];
    v_86 = stack[-4];
    stack[-1] = Lgetv(nil, v_87, v_86);
    env = stack[-10];
    stack[0] = stack[-5];
    v_87 = stack[-6];
    v_86 = stack[-4];
    v_86 = Lgetv(nil, v_87, v_86);
    env = stack[-10];
    v_86 = times2(stack[0], v_86);
    env = stack[-10];
    v_86 = plus2(stack[-1], v_86);
    env = stack[-10];
    v_86 = Lputv(nil, stack[-3], stack[-2], v_86);
    env = stack[-10];
    goto v_40;
v_40:
    v_86 = stack[-4];
    v_86 = add1(v_86);
    env = stack[-10];
    stack[-4] = v_86;
    goto v_28;
v_27:
    v_87 = stack[-8];
    v_86 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_88 = Lgetv(nil, v_87, v_86);
    env = stack[-10];
    v_87 = stack[-7];
    v_86 = stack[-6];
    {   LispObject fn = basic_elt(env, 0); // fs!:subang
    stack[-1] = (*qfn3(fn))(fn, v_88, v_87, v_86);
    }
    env = stack[-10];
    v_87 = stack[-8];
    v_86 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[0] = Lgetv(nil, v_87, v_86);
    env = stack[-10];
    stack[-2] = stack[-9];
    v_87 = stack[-8];
    v_86 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_86 = Lgetv(nil, v_87, v_86);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 1); // make!-term
    v_86 = (*qfn3(fn))(fn, stack[0], stack[-2], v_86);
    }
    env = stack[-10];
    {
        LispObject v_99 = stack[-1];
        LispObject fn = basic_elt(env, 2); // fs!:plus
        return (*qfn2(fn))(fn, v_99, v_86);
    }
    goto v_7;
    v_86 = nil;
v_7:
    return onevalue(v_86);
}



// Code for cali_bc_from_a

static LispObject CC_cali_bc_from_a(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // simp!*
    v_8 = (*qfn1(fn))(fn, v_8);
    }
    env = stack[0];
    if (!car_legal(v_8)) v_8 = carerror(v_8); else
    v_8 = car(v_8);
    {
        LispObject fn = basic_elt(env, 2); // bc!=simp
        return (*qfn1(fn))(fn, v_8);
    }
}



// Code for dv_skel2factor

static LispObject CC_dv_skel2factor(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_70 = v_3;
    stack[-4] = v_2;
// end of prologue
    v_69 = stack[-4];
    if (!car_legal(v_69)) v_69 = cdrerror(v_69); else
    v_69 = cdr(v_69);
    if (v_69 == nil) goto v_11;
    else goto v_12;
v_11:
    v_69 = stack[-4];
    if (!car_legal(v_69)) v_69 = carerror(v_69); else
    v_69 = car(v_69);
    goto v_8;
v_12:
    v_69 = stack[-4];
    if (!car_legal(v_69)) v_69 = cdrerror(v_69); else
    v_69 = cdr(v_69);
    v_69 = Lsublis(nil, v_70, v_69);
    env = stack[-6];
    stack[-5] = v_69;
    v_69 = stack[-5];
    {   LispObject fn = basic_elt(env, 1); // st_ad_numsorttree
    v_69 = (*qfn1(fn))(fn, v_69);
    }
    env = stack[-6];
    stack[-5] = v_69;
    v_69 = stack[-5];
    if (!car_legal(v_69)) v_69 = cdrerror(v_69); else
    v_69 = cdr(v_69);
    {   LispObject fn = basic_elt(env, 2); // st_flatten
    v_69 = (*qfn1(fn))(fn, v_69);
    }
    env = stack[-6];
    stack[-3] = v_69;
    v_69 = stack[-3];
    if (v_69 == nil) goto v_34;
    else goto v_35;
v_34:
    v_69 = nil;
    goto v_27;
v_35:
    v_69 = stack[-3];
    if (!car_legal(v_69)) v_69 = carerror(v_69); else
    v_69 = car(v_69);
    {   LispObject fn = basic_elt(env, 3); // dv_ind2var
    v_69 = (*qfn1(fn))(fn, v_69);
    }
    env = stack[-6];
    v_69 = ncons(v_69);
    env = stack[-6];
    stack[-1] = v_69;
    stack[-2] = v_69;
v_28:
    v_69 = stack[-3];
    if (!car_legal(v_69)) v_69 = cdrerror(v_69); else
    v_69 = cdr(v_69);
    stack[-3] = v_69;
    v_69 = stack[-3];
    if (v_69 == nil) goto v_48;
    else goto v_49;
v_48:
    v_69 = stack[-2];
    goto v_27;
v_49:
    stack[0] = stack[-1];
    v_69 = stack[-3];
    if (!car_legal(v_69)) v_69 = carerror(v_69); else
    v_69 = car(v_69);
    {   LispObject fn = basic_elt(env, 3); // dv_ind2var
    v_69 = (*qfn1(fn))(fn, v_69);
    }
    env = stack[-6];
    v_69 = ncons(v_69);
    env = stack[-6];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_69);
    v_69 = stack[-1];
    if (!car_legal(v_69)) v_69 = cdrerror(v_69); else
    v_69 = cdr(v_69);
    stack[-1] = v_69;
    goto v_28;
v_27:
    v_70 = stack[-5];
    if (!car_legal(v_70)) stack[0] = carerror(v_70); else
    stack[0] = car(v_70);
    v_70 = stack[-4];
    if (!car_legal(v_70)) v_70 = carerror(v_70); else
    v_70 = car(v_70);
    {   LispObject fn = basic_elt(env, 4); // dv_skel2factor1
    v_69 = (*qfn2(fn))(fn, v_70, v_69);
    }
    {
        LispObject v_77 = stack[0];
        return cons(v_77, v_69);
    }
v_8:
    return onevalue(v_69);
}



// Code for alistp

static LispObject CC_alistp(LispObject env,
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
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_34 = v_2;
// end of prologue
v_1:
    v_35 = v_34;
    if (v_35 == nil) goto v_6;
    else goto v_7;
v_6:
    v_34 = lisp_true;
    goto v_5;
v_7:
    v_35 = v_34;
    v_35 = Lconsp(nil, v_35);
    env = stack[0];
    if (v_35 == nil) goto v_14;
    else goto v_15;
v_14:
    v_34 = nil;
    goto v_13;
v_15:
    v_35 = v_34;
    if (!car_legal(v_35)) v_35 = carerror(v_35); else
    v_35 = car(v_35);
    v_35 = Lconsp(nil, v_35);
    env = stack[0];
    if (v_35 == nil) goto v_23;
    else goto v_24;
v_23:
    v_34 = nil;
    goto v_22;
v_24:
    if (!car_legal(v_34)) v_34 = cdrerror(v_34); else
    v_34 = cdr(v_34);
    goto v_1;
    v_34 = nil;
v_22:
    goto v_13;
    v_34 = nil;
v_13:
    goto v_5;
    v_34 = nil;
v_5:
    return onevalue(v_34);
}



// Code for add!-factor

static LispObject CC_addKfactor(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_47, v_48, v_49;
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
    v_47 = stack[0];
    v_47 = Lconsp(nil, v_47);
    env = stack[-2];
    if (v_47 == nil) goto v_8;
    v_48 = stack[-1];
    v_47 = stack[0];
    if (!car_legal(v_47)) v_47 = carerror(v_47); else
    v_47 = car(v_47);
    if (!car_legal(v_47)) v_47 = carerror(v_47); else
    v_47 = car(v_47);
    v_47 = static_cast<LispObject>(greaterp2(v_48, v_47));
    v_47 = v_47 ? lisp_true : nil;
    env = stack[-2];
    if (v_47 == nil) goto v_14;
    v_47 = nil;
    goto v_12;
v_14:
    v_48 = stack[-1];
    v_47 = stack[0];
    v_47 = Lassoc(nil, v_48, v_47);
    goto v_12;
    v_47 = nil;
v_12:
    goto v_6;
v_8:
    v_47 = nil;
    goto v_6;
    v_47 = nil;
v_6:
    v_48 = v_47;
    v_47 = v_48;
    if (v_47 == nil) goto v_33;
    stack[-1] = v_48;
    v_47 = v_48;
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    v_47 = add1(v_47);
    if (!car_legal(stack[-1])) rplacd_fails(stack[-1]);
    setcdr(stack[-1], v_47);
    v_47 = stack[0];
    goto v_31;
v_33:
    v_49 = stack[-1];
    v_48 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_47 = stack[0];
    return acons(v_49, v_48, v_47);
    v_47 = nil;
v_31:
    return onevalue(v_47);
}



// Code for dfdeg

static LispObject CC_dfdeg(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_35, v_36;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_35 = v_3;
    v_36 = v_2;
// end of prologue
    v_35 = Lmember(nil, v_35, v_36);
    v_36 = v_35;
    if (v_35 == nil) goto v_7;
    else goto v_8;
v_7:
    v_35 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_6;
v_8:
    v_35 = v_36;
    if (!car_legal(v_35)) v_35 = cdrerror(v_35); else
    v_35 = cdr(v_35);
    if (v_35 == nil) goto v_17;
    else goto v_18;
v_17:
    v_35 = lisp_true;
    goto v_16;
v_18:
    v_35 = v_36;
    if (!car_legal(v_35)) v_35 = cdrerror(v_35); else
    v_35 = cdr(v_35);
    if (!car_legal(v_35)) v_35 = carerror(v_35); else
    v_35 = car(v_35);
    v_35 = integerp(v_35);
    v_35 = (v_35 == nil ? lisp_true : nil);
    goto v_16;
    v_35 = nil;
v_16:
    if (v_35 == nil) goto v_14;
    v_35 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_6;
v_14:
    v_35 = v_36;
    if (!car_legal(v_35)) v_35 = cdrerror(v_35); else
    v_35 = cdr(v_35);
    if (!car_legal(v_35)) v_35 = carerror(v_35); else
    v_35 = car(v_35);
    goto v_6;
    v_35 = nil;
v_6:
    return onevalue(v_35);
}



// Code for talp_get!-idx

static LispObject CC_talp_getKidx(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_108, v_109;
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
    v_108 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-2] = v_108;
v_12:
    stack[0] = stack[-2];
    v_108 = stack[-3];
    v_108 = Lupbv(nil, v_108);
    env = stack[-6];
    v_108 = static_cast<LispObject>(lesseq2(stack[0], v_108));
    v_108 = v_108 ? lisp_true : nil;
    env = stack[-6];
    if (v_108 == nil) goto v_15;
    v_108 = stack[-5];
    if (v_108 == nil) goto v_22;
    else goto v_15;
v_22:
    goto v_16;
v_15:
    goto v_11;
v_16:
    v_108 = stack[-4];
    if (!consp(v_108)) goto v_27;
    else goto v_28;
v_27:
    v_109 = stack[-3];
    v_108 = stack[-2];
    v_109 = Lgetv(nil, v_109, v_108);
    env = stack[-6];
    v_108 = stack[-4];
    if (v_109 == v_108) goto v_32;
    else goto v_33;
v_32:
    v_108 = lisp_true;
    stack[-5] = v_108;
    goto v_31;
v_33:
    v_108 = stack[-2];
    v_108 = add1(v_108);
    env = stack[-6];
    stack[-2] = v_108;
    goto v_31;
v_31:
    goto v_26;
v_28:
    v_108 = stack[-4];
    {   LispObject fn = basic_elt(env, 1); // talp_fop
    v_108 = (*qfn1(fn))(fn, v_108);
    }
    env = stack[-6];
    v_108 = Lconsp(nil, v_108);
    env = stack[-6];
    if (v_108 == nil) goto v_44;
    v_109 = stack[-3];
    v_108 = stack[-2];
    v_108 = Lgetv(nil, v_109, v_108);
    env = stack[-6];
    stack[-1] = v_108;
    v_108 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // talp_fop
    v_108 = (*qfn1(fn))(fn, v_108);
    }
    env = stack[-6];
    v_108 = Lconsp(nil, v_108);
    env = stack[-6];
    if (v_108 == nil) goto v_55;
    v_108 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // talp_fop
    v_108 = (*qfn1(fn))(fn, v_108);
    }
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 2); // talp_invf
    stack[0] = (*qfn1(fn))(fn, v_108);
    }
    env = stack[-6];
    v_108 = stack[-4];
    {   LispObject fn = basic_elt(env, 1); // talp_fop
    v_108 = (*qfn1(fn))(fn, v_108);
    }
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 2); // talp_invf
    v_108 = (*qfn1(fn))(fn, v_108);
    }
    env = stack[-6];
    if (stack[0] == v_108) goto v_63;
    else goto v_64;
v_63:
    v_108 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // talp_fop
    v_108 = (*qfn1(fn))(fn, v_108);
    }
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 3); // talp_invn
    stack[0] = (*qfn1(fn))(fn, v_108);
    }
    env = stack[-6];
    v_108 = stack[-4];
    {   LispObject fn = basic_elt(env, 1); // talp_fop
    v_108 = (*qfn1(fn))(fn, v_108);
    }
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 3); // talp_invn
    v_108 = (*qfn1(fn))(fn, v_108);
    }
    env = stack[-6];
    v_108 = (stack[0] == v_108 ? lisp_true : nil);
    goto v_62;
v_64:
    v_108 = nil;
    goto v_62;
    v_108 = nil;
v_62:
    if (v_108 == nil) goto v_55;
    v_108 = lisp_true;
    stack[-5] = v_108;
    goto v_53;
v_55:
    v_108 = stack[-2];
    v_108 = add1(v_108);
    env = stack[-6];
    stack[-2] = v_108;
    goto v_53;
v_53:
    goto v_26;
v_44:
    v_109 = stack[-3];
    v_108 = stack[-2];
    v_108 = Lgetv(nil, v_109, v_108);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 1); // talp_fop
    stack[0] = (*qfn1(fn))(fn, v_108);
    }
    env = stack[-6];
    v_108 = stack[-4];
    {   LispObject fn = basic_elt(env, 1); // talp_fop
    v_108 = (*qfn1(fn))(fn, v_108);
    }
    env = stack[-6];
    if (stack[0] == v_108) goto v_86;
    else goto v_87;
v_86:
    v_108 = lisp_true;
    stack[-5] = v_108;
    goto v_26;
v_87:
    v_108 = stack[-2];
    v_108 = add1(v_108);
    env = stack[-6];
    stack[-2] = v_108;
    goto v_26;
v_26:
    goto v_12;
v_11:
    v_108 = stack[-5];
    if (v_108 == nil) goto v_102;
    v_108 = stack[-2];
    goto v_100;
v_102:
    v_108 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    goto v_100;
    v_108 = nil;
v_100:
    return onevalue(v_108);
}



// Code for iv_new

static LispObject CC_iv_new(LispObject env,
                         LispObject v_2, LispObject v_3)
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
        push(v_2,v_3);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_3,v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_26 = v_3;
    v_27 = v_2;
// end of prologue
    v_25 = v_27;
    if (v_25 == nil) goto v_10;
    v_25 = v_27;
    v_27 = v_25;
    goto v_8;
v_10:
    v_25 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_27 = v_25;
    goto v_8;
    v_27 = nil;
v_8:
    v_25 = v_26;
    if (v_25 == nil) goto v_19;
    v_25 = v_26;
    goto v_17;
v_19:
    v_25 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_17;
    v_25 = nil;
v_17:
    v_25 = cons(v_27, v_25);
    return ncons(v_25);
}



// Code for mulpower

static LispObject CC_mulpower(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_34, v_35, v_36;
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
    v_34 = v_3;
    v_35 = v_2;
// end of prologue
    stack[0] = nil;
    {   LispObject fn = basic_elt(env, 3); // addexptsdf
    v_34 = (*qfn2(fn))(fn, v_35, v_34);
    }
    env = stack[-2];
    stack[-1] = v_34;
    v_34 = qvalue(basic_elt(env, 1)); // sqrtlist
    if (v_34 == nil) goto v_15;
    v_35 = stack[-1];
    v_34 = qvalue(basic_elt(env, 2)); // zlist
    {   LispObject fn = basic_elt(env, 4); // reduceroots
    v_34 = (*qfn2(fn))(fn, v_35, v_34);
    }
    env = stack[-2];
    stack[0] = v_34;
    goto v_13;
v_15:
v_13:
    v_36 = stack[-1];
    v_35 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_34 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_34 = list2star(v_36, v_35, v_34);
    env = stack[-2];
    v_34 = ncons(v_34);
    env = stack[-2];
    stack[-1] = v_34;
    v_34 = stack[0];
    if (v_34 == nil) goto v_28;
    v_35 = stack[-1];
    v_34 = stack[0];
    {   LispObject fn = basic_elt(env, 5); // multdf
    v_34 = (*qfn2(fn))(fn, v_35, v_34);
    }
    stack[-1] = v_34;
    goto v_26;
v_28:
v_26:
    v_34 = stack[-1];
    return onevalue(v_34);
}



// Code for parfool

static LispObject CC_parfool(LispObject env,
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
    v_37 = v_2;
// end of prologue
    v_35 = v_37;
    if (!car_legal(v_35)) v_35 = carerror(v_35); else
    v_35 = car(v_35);
    if (v_35 == nil) goto v_6;
    else goto v_7;
v_6:
    v_35 = lisp_true;
    goto v_5;
v_7:
    v_35 = v_37;
    if (!car_legal(v_35)) v_35 = carerror(v_35); else
    v_35 = car(v_35);
    if (is_number(v_35)) goto v_13;
    else goto v_12;
v_13:
    v_35 = v_37;
    if (!car_legal(v_35)) v_36 = cdrerror(v_35); else
    v_36 = cdr(v_35);
    v_35 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_36 == v_35) goto v_19;
    else goto v_20;
v_19:
    v_35 = v_37;
    if (!car_legal(v_35)) v_36 = carerror(v_35); else
    v_36 = car(v_35);
    v_35 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_35 = static_cast<LispObject>(lessp2(v_36, v_35));
    v_35 = v_35 ? lisp_true : nil;
    goto v_18;
v_20:
    v_35 = nil;
    goto v_18;
    v_35 = nil;
v_18:
    if (v_35 == nil) goto v_12;
    v_35 = lisp_true;
    goto v_5;
v_12:
    v_35 = nil;
    goto v_5;
    v_35 = nil;
v_5:
    return onevalue(v_35);
}



// Code for spmatsm!*

static LispObject CC_spmatsmH(LispObject env,
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
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_23 = v_3;
    v_24 = v_2;
// end of prologue
    v_23 = v_24;
    {   LispObject fn = basic_elt(env, 2); // spmatsm
    v_23 = (*qfn1(fn))(fn, v_23);
    }
    env = stack[0];
    v_25 = v_23;
    v_24 = v_25;
    v_23 = basic_elt(env, 1); // sparsemat
    if (!consp(v_24)) goto v_13;
    v_24 = car(v_24);
    if (v_24 == v_23) goto v_12;
    else goto v_13;
v_12:
    v_23 = v_25;
    goto v_7;
v_13:
    v_23 = v_25;
    {
        LispObject fn = basic_elt(env, 3); // matsm!*1
        return (*qfn1(fn))(fn, v_23);
    }
    v_23 = nil;
v_7:
    return onevalue(v_23);
}



// Code for matsm!*

static LispObject CC_matsmH(LispObject env,
                         LispObject v_2, LispObject v_3)
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
        push(v_2,v_3);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_3,v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_8 = v_3;
    v_9 = v_2;
// end of prologue
    v_8 = v_9;
    {   LispObject fn = basic_elt(env, 1); // matsm
    v_8 = (*qfn1(fn))(fn, v_8);
    }
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // matsm!*1
        return (*qfn1(fn))(fn, v_8);
    }
}



// Code for f2dip

static LispObject CC_f2dip(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    v_9 = v_2;
// end of prologue
    stack[-1] = v_9;
    {   LispObject fn = basic_elt(env, 1); // evzero
    stack[0] = (*qfn0(fn))(fn);
    }
    env = stack[-2];
    v_9 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 2); // bcfd
    v_9 = (*qfn1(fn))(fn, v_9);
    }
    env = stack[-2];
    {
        LispObject v_12 = stack[-1];
        LispObject v_13 = stack[0];
        LispObject fn = basic_elt(env, 3); // f2dip1
        return (*qfn3(fn))(fn, v_12, v_13, v_9);
    }
}



// Code for dim!<!=deg

static LispObject CC_dimRMdeg(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    v_30 = v_2;
// end of prologue
    stack[0] = qvalue(basic_elt(env, 1)); // dimex!*
    {   LispObject fn = basic_elt(env, 2); // deg!*form
    v_30 = (*qfn1(fn))(fn, v_30);
    }
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // negf
    v_30 = (*qfn1(fn))(fn, v_30);
    }
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 4); // addf
    v_30 = (*qfn2(fn))(fn, stack[0], v_30);
    }
    v_31 = v_30;
    v_30 = v_31;
    if (v_30 == nil) goto v_12;
    else goto v_13;
v_12:
    v_30 = lisp_true;
    goto v_11;
v_13:
    v_30 = v_31;
    v_30 = integerp(v_30);
    if (v_30 == nil) goto v_20;
    else goto v_21;
v_20:
    v_30 = nil;
    goto v_19;
v_21:
    v_30 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
        return Lleq_2(nil, v_31, v_30);
    v_30 = nil;
v_19:
    goto v_11;
    v_30 = nil;
v_11:
    return onevalue(v_30);
}



// Code for mk_parents_prim

static LispObject CC_mk_parents_prim(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_30 = stack[0];
    v_31 = Llength(nil, v_30);
    env = stack[-1];
    v_30 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    if (v_31 == v_30) goto v_7;
    v_30 = stack[0];
    goto v_5;
v_7:
    v_30 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // s_noparents
    v_30 = (*qfn1(fn))(fn, v_30);
    }
    env = stack[-1];
    v_31 = v_30;
    if (v_31 == nil) goto v_19;
    else goto v_20;
v_19:
    v_30 = stack[0];
    goto v_18;
v_20:
    v_31 = stack[0];
    if (!car_legal(v_30)) v_30 = carerror(v_30); else
    v_30 = car(v_30);
    {   LispObject fn = basic_elt(env, 2); // mk_edge_parents
    v_30 = (*qfn2(fn))(fn, v_31, v_30);
    }
    v_30 = stack[0];
    goto v_18;
    v_30 = nil;
v_18:
    goto v_5;
    v_30 = nil;
v_5:
    return onevalue(v_30);
}



// Code for expand!-imrepartpow

static LispObject CC_expandKimrepartpow(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_77, v_78;
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
// Binding !*exp
// FLUIDBIND: reloadenv=4 litvec-offset=1 saveloc=3
{   bind_fluid_stack bind_fluid_var(-4, 1, -3);
    setvalue(basic_elt(env, 1), nil); // !*exp
    v_77 = lisp_true;
    setvalue(basic_elt(env, 1), v_77); // !*exp
    v_77 = stack[-2];
    if (!car_legal(v_77)) v_77 = carerror(v_77); else
    v_77 = car(v_77);
    v_77 = Lconsp(nil, v_77);
    env = stack[-4];
    if (v_77 == nil) goto v_12;
    else goto v_13;
v_12:
    v_77 = nil;
    goto v_11;
v_13:
    v_77 = stack[-2];
    if (!car_legal(v_77)) v_77 = carerror(v_77); else
    v_77 = car(v_77);
    if (!car_legal(v_77)) v_77 = carerror(v_77); else
    v_77 = car(v_77);
    if (symbolp(v_77)) goto v_23;
    v_77 = nil;
    goto v_21;
v_23:
    v_77 = stack[-2];
    if (!car_legal(v_77)) v_77 = carerror(v_77); else
    v_77 = car(v_77);
    if (!car_legal(v_77)) v_78 = carerror(v_77); else
    v_78 = car(v_77);
    v_77 = basic_elt(env, 2); // cmpxsplitfn
    v_77 = get(v_78, v_77);
    env = stack[-4];
    goto v_21;
    v_77 = nil;
v_21:
    goto v_11;
    v_77 = nil;
v_11:
    v_78 = v_77;
    v_77 = v_78;
    if (v_77 == nil) goto v_38;
    else goto v_39;
v_38:
    v_77 = stack[-2];
    if (!car_legal(v_77)) v_78 = carerror(v_77); else
    v_78 = car(v_77);
    v_77 = basic_elt(env, 3); // i
    if (v_78 == v_77) goto v_43;
    else goto v_44;
v_43:
    v_78 = basic_elt(env, 3); // i
    v_77 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 4); // to
    v_78 = (*qfn2(fn))(fn, v_78, v_77);
    }
    env = stack[-4];
    v_77 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_77 = cons(v_78, v_77);
    env = stack[-4];
    v_78 = ncons(v_77);
    env = stack[-4];
    v_77 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_77 = cons(v_78, v_77);
    env = stack[-4];
    goto v_42;
v_44:
    v_77 = stack[-2];
    if (!car_legal(v_77)) v_77 = carerror(v_77); else
    v_77 = car(v_77);
    {   LispObject fn = basic_elt(env, 5); // mkrepart
    stack[-1] = (*qfn1(fn))(fn, v_77);
    }
    env = stack[-4];
    v_77 = basic_elt(env, 3); // i
    {   LispObject fn = basic_elt(env, 6); // simp
    stack[0] = (*qfn1(fn))(fn, v_77);
    }
    env = stack[-4];
    v_77 = stack[-2];
    if (!car_legal(v_77)) v_77 = carerror(v_77); else
    v_77 = car(v_77);
    {   LispObject fn = basic_elt(env, 7); // mkimpart
    v_77 = (*qfn1(fn))(fn, v_77);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 8); // multsq
    v_77 = (*qfn2(fn))(fn, stack[0], v_77);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 9); // addsq
    v_77 = (*qfn2(fn))(fn, stack[-1], v_77);
    }
    env = stack[-4];
    goto v_42;
    v_77 = nil;
v_42:
    v_78 = v_77;
    goto v_37;
v_39:
    v_77 = stack[-2];
    if (!car_legal(v_77)) v_77 = carerror(v_77); else
    v_77 = car(v_77);
    v_77 = Lapply1(nil, v_78, v_77);
    env = stack[-4];
    v_78 = v_77;
    goto v_37;
    v_78 = nil;
v_37:
    v_77 = stack[-2];
    if (!car_legal(v_77)) v_77 = cdrerror(v_77); else
    v_77 = cdr(v_77);
    {   LispObject fn = basic_elt(env, 10); // exptsq
    v_77 = (*qfn2(fn))(fn, v_78, v_77);
    }
    ;}  // end of a binding scope
    return onevalue(v_77);
}



// Code for bfrsq

static LispObject CC_bfrsq(LispObject env,
                         LispObject v_2)
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
    v_32 = v_2;
// end of prologue
    v_31 = v_32;
    if (!car_legal(v_31)) v_31 = carerror(v_31); else
    v_31 = car(v_31);
    if (!car_legal(v_32)) v_32 = cdrerror(v_32); else
    v_32 = cdr(v_32);
    stack[-1] = v_32;
    v_32 = v_31;
    if (!consp(v_32)) goto v_12;
    else goto v_13;
v_12:
    v_32 = v_31;
    stack[0] = times2(v_32, v_31);
    env = stack[-2];
    v_32 = stack[-1];
    v_31 = stack[-1];
    v_31 = times2(v_32, v_31);
    {
        LispObject v_35 = stack[0];
        return plus2(v_35, v_31);
    }
v_13:
    v_32 = v_31;
    {   LispObject fn = basic_elt(env, 1); // csl_timbf
    stack[0] = (*qfn2(fn))(fn, v_32, v_31);
    }
    env = stack[-2];
    v_32 = stack[-1];
    v_31 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // csl_timbf
    v_31 = (*qfn2(fn))(fn, v_32, v_31);
    }
    env = stack[-2];
    {
        LispObject v_36 = stack[0];
        LispObject fn = basic_elt(env, 2); // plubf
        return (*qfn2(fn))(fn, v_36, v_31);
    }
    v_31 = nil;
    return onevalue(v_31);
}



// Code for sfchk

static LispObject CC_sfchk(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_15;
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
    v_15 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // sfp
    v_15 = (*qfn1(fn))(fn, v_15);
    }
    env = stack[-1];
    if (v_15 == nil) goto v_7;
    v_15 = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // prepf
        return (*qfn1(fn))(fn, v_15);
    }
v_7:
    v_15 = stack[0];
    goto v_5;
    v_15 = nil;
v_5:
    return onevalue(v_15);
}



// Code for replace!-next

static LispObject CC_replaceKnext(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_39, v_40, v_41, v_42;
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
    v_39 = stack[-1];
    if (v_39 == nil) goto v_11;
    else goto v_12;
v_11:
    v_39 = stack[-2];
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn1(fn))(fn, v_39);
    }
v_12:
    v_39 = stack[-1];
    if (!car_legal(v_39)) v_39 = carerror(v_39); else
    v_39 = car(v_39);
    if (!car_legal(v_39)) v_42 = carerror(v_39); else
    v_42 = car(v_39);
    v_39 = stack[-1];
    if (!car_legal(v_39)) v_39 = carerror(v_39); else
    v_39 = car(v_39);
    if (!car_legal(v_39)) v_39 = cdrerror(v_39); else
    v_39 = cdr(v_39);
    if (!car_legal(v_39)) v_41 = carerror(v_39); else
    v_41 = car(v_39);
    v_39 = stack[-1];
    if (!car_legal(v_39)) v_39 = carerror(v_39); else
    v_39 = car(v_39);
    if (!car_legal(v_39)) v_39 = cdrerror(v_39); else
    v_39 = cdr(v_39);
    if (!car_legal(v_39)) v_39 = cdrerror(v_39); else
    v_39 = cdr(v_39);
    if (!car_legal(v_39)) v_40 = carerror(v_39); else
    v_40 = car(v_39);
    v_39 = stack[0];
    if (!car_legal(v_39)) v_39 = carerror(v_39); else
    v_39 = car(v_39);
    v_40 = list4(v_42, v_41, v_40, v_39);
    env = stack[-3];
    v_39 = stack[-2];
    v_39 = cons(v_40, v_39);
    env = stack[-3];
    stack[-2] = v_39;
    v_39 = stack[-1];
    if (!car_legal(v_39)) v_39 = cdrerror(v_39); else
    v_39 = cdr(v_39);
    stack[-1] = v_39;
    v_39 = stack[0];
    if (!car_legal(v_39)) v_39 = cdrerror(v_39); else
    v_39 = cdr(v_39);
    stack[0] = v_39;
    goto v_8;
    v_39 = nil;
    return onevalue(v_39);
}



// Code for talp_mkinvop

static LispObject CC_talp_mkinvop(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_17 = basic_elt(env, 1); // inv_
    stack[-2] = Lexplode(nil, v_17);
    env = stack[-3];
    v_17 = stack[-1];
    v_17 = ncons(v_17);
    env = stack[-3];
    v_17 = Lnconc(nil, stack[-2], v_17);
    env = stack[-3];
    v_17 = Lcompress(nil, v_17);
    env = stack[-3];
    stack[-1] = Lexplode(nil, v_17);
    env = stack[-3];
    v_17 = stack[0];
    v_17 = Lexplode(nil, v_17);
    env = stack[-3];
    v_17 = Lnconc(nil, stack[-1], v_17);
    env = stack[-3];
    v_17 = Lcompress(nil, v_17);
        return Lintern(nil, v_17);
}



// Code for bc_zero

static LispObject CC_bc_zero(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_6, v_7;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// end of prologue
    v_7 = nil;
    v_6 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_7, v_6);
}



// Code for gfquotient

static LispObject CC_gfquotient(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_19, v_20, v_21;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_20 = v_3;
    v_21 = v_2;
// end of prologue
    v_19 = v_21;
    if (!car_legal(v_19)) v_19 = carerror(v_19); else
    v_19 = car(v_19);
    if (!consp(v_19)) goto v_7;
    else goto v_8;
v_7:
    v_19 = v_21;
    {
        LispObject fn = basic_elt(env, 1); // gffquot
        return (*qfn2(fn))(fn, v_19, v_20);
    }
v_8:
    v_19 = v_21;
    {
        LispObject fn = basic_elt(env, 2); // gbfquot
        return (*qfn2(fn))(fn, v_19, v_20);
    }
    v_19 = nil;
    return onevalue(v_19);
}



// Code for mkrepart

static LispObject CC_mkrepart(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_49 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // sfp
    v_49 = (*qfn1(fn))(fn, v_49);
    }
    env = stack[-1];
    if (v_49 == nil) goto v_7;
    v_49 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // realvaluedp!-sf
    v_49 = (*qfn1(fn))(fn, v_49);
    }
    env = stack[-1];
    if (v_49 == nil) goto v_13;
    v_50 = stack[0];
    v_49 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 4); // to
    v_50 = (*qfn2(fn))(fn, v_50, v_49);
    }
    env = stack[-1];
    v_49 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_49 = cons(v_50, v_49);
    env = stack[-1];
    v_50 = ncons(v_49);
    v_49 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_50, v_49);
v_13:
    v_50 = stack[0];
    v_49 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_49 = cons(v_50, v_49);
    env = stack[-1];
    {
        LispObject fn = basic_elt(env, 5); // repartsq
        return (*qfn1(fn))(fn, v_49);
    }
    v_49 = nil;
    goto v_5;
v_7:
    v_49 = stack[0];
    {   LispObject fn = basic_elt(env, 6); // realvaluedp
    v_49 = (*qfn1(fn))(fn, v_49);
    }
    env = stack[-1];
    if (v_49 == nil) goto v_31;
    v_50 = stack[0];
    v_49 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 4); // to
    v_50 = (*qfn2(fn))(fn, v_50, v_49);
    }
    env = stack[-1];
    v_49 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_49 = cons(v_50, v_49);
    env = stack[-1];
    v_50 = ncons(v_49);
    v_49 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_50, v_49);
v_31:
    v_50 = basic_elt(env, 1); // repart
    v_49 = stack[0];
    v_50 = list2(v_50, v_49);
    env = stack[-1];
    v_49 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {
        LispObject fn = basic_elt(env, 7); // mksq
        return (*qfn2(fn))(fn, v_50, v_49);
    }
    v_49 = nil;
v_5:
    return onevalue(v_49);
}



// Code for mo!=expvec2a1

static LispObject CC_moMexpvec2a1(LispObject env,
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
v_8:
    v_52 = stack[-1];
    if (v_52 == nil) goto v_11;
    else goto v_12;
v_11:
    v_52 = stack[-2];
    {
        LispObject fn = basic_elt(env, 2); // nreverse
        return (*qfn1(fn))(fn, v_52);
    }
v_12:
    v_52 = stack[-1];
    if (!car_legal(v_52)) v_53 = carerror(v_52); else
    v_53 = car(v_52);
    v_52 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_53 == v_52) goto v_16;
    else goto v_17;
v_16:
    v_52 = stack[-1];
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    stack[-1] = v_52;
    v_52 = stack[0];
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    stack[0] = v_52;
    goto v_8;
v_17:
    v_52 = stack[-1];
    if (!car_legal(v_52)) v_53 = carerror(v_52); else
    v_53 = car(v_52);
    v_52 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_53 == v_52) goto v_25;
    else goto v_26;
v_25:
    v_52 = stack[0];
    if (!car_legal(v_52)) v_53 = carerror(v_52); else
    v_53 = car(v_52);
    v_52 = stack[-2];
    v_52 = cons(v_53, v_52);
    env = stack[-3];
    stack[-2] = v_52;
    v_52 = stack[-1];
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    stack[-1] = v_52;
    v_52 = stack[0];
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    stack[0] = v_52;
    goto v_8;
v_26:
    v_54 = basic_elt(env, 1); // expt
    v_52 = stack[0];
    if (!car_legal(v_52)) v_53 = carerror(v_52); else
    v_53 = car(v_52);
    v_52 = stack[-1];
    if (!car_legal(v_52)) v_52 = carerror(v_52); else
    v_52 = car(v_52);
    v_53 = list3(v_54, v_53, v_52);
    env = stack[-3];
    v_52 = stack[-2];
    v_52 = cons(v_53, v_52);
    env = stack[-3];
    stack[-2] = v_52;
    v_52 = stack[-1];
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    stack[-1] = v_52;
    v_52 = stack[0];
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    stack[0] = v_52;
    goto v_8;
    v_52 = nil;
    return onevalue(v_52);
}



// Code for sub01

static LispObject CC_sub01(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_35 = nil;
v_8:
    v_33 = stack[0];
    if (v_33 == nil) goto v_12;
    v_33 = stack[0];
    if (!car_legal(v_33)) v_34 = carerror(v_33); else
    v_34 = car(v_33);
    v_33 = stack[-1];
    if (equal(v_34, v_33)) goto v_17;
    else goto v_18;
v_17:
    v_33 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_16;
v_18:
    v_33 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_16;
    v_33 = nil;
v_16:
    v_34 = v_35;
    v_33 = cons(v_33, v_34);
    env = stack[-2];
    v_35 = v_33;
    v_33 = stack[0];
    if (!car_legal(v_33)) v_33 = cdrerror(v_33); else
    v_33 = cdr(v_33);
    stack[0] = v_33;
    goto v_8;
v_12:
    v_33 = v_35;
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn1(fn))(fn, v_33);
    }
    v_33 = nil;
    return onevalue(v_33);
}



// Code for depend!-sq

static LispObject CC_dependKsq(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    v_16 = stack[-1];
    if (!car_legal(v_16)) v_17 = carerror(v_16); else
    v_17 = car(v_16);
    v_16 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // depend!-f
    v_16 = (*qfn2(fn))(fn, v_17, v_16);
    }
    env = stack[-2];
    if (v_16 == nil) goto v_7;
    else goto v_6;
v_7:
    v_16 = stack[-1];
    if (!car_legal(v_16)) v_17 = cdrerror(v_16); else
    v_17 = cdr(v_16);
    v_16 = stack[0];
    {
        LispObject fn = basic_elt(env, 1); // depend!-f
        return (*qfn2(fn))(fn, v_17, v_16);
    }
v_6:
    return onevalue(v_16);
}



// Code for mri_irsplit1

static LispObject CC_mri_irsplit1(LispObject env,
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_85 = stack[0];
    if (!consp(v_85)) goto v_17;
    else goto v_18;
v_17:
    v_85 = lisp_true;
    goto v_16;
v_18:
    v_85 = stack[0];
    if (!car_legal(v_85)) v_85 = carerror(v_85); else
    v_85 = car(v_85);
    v_85 = (consp(v_85) ? nil : lisp_true);
    goto v_16;
    v_85 = nil;
v_16:
    if (v_85 == nil) goto v_14;
    v_85 = stack[0];
    return ncons(v_85);
v_14:
    v_85 = stack[0];
    if (!car_legal(v_85)) v_85 = cdrerror(v_85); else
    v_85 = cdr(v_85);
    {   LispObject fn = basic_elt(env, 0); // mri_irsplit1
    v_85 = (*qfn1(fn))(fn, v_85);
    }
    env = stack[-4];
    stack[-2] = v_85;
    v_85 = stack[0];
    if (!car_legal(v_85)) v_85 = carerror(v_85); else
    v_85 = car(v_85);
    if (!car_legal(v_85)) v_85 = carerror(v_85); else
    v_85 = car(v_85);
    if (!car_legal(v_85)) v_85 = cdrerror(v_85); else
    v_85 = cdr(v_85);
    stack[-1] = v_85;
    v_85 = stack[0];
    if (!car_legal(v_85)) v_85 = carerror(v_85); else
    v_85 = car(v_85);
    if (!car_legal(v_85)) v_85 = carerror(v_85); else
    v_85 = car(v_85);
    if (!car_legal(v_85)) v_86 = carerror(v_85); else
    v_86 = car(v_85);
    v_85 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 1); // to
    v_86 = (*qfn2(fn))(fn, v_86, v_85);
    }
    env = stack[-4];
    v_85 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_85 = cons(v_86, v_85);
    env = stack[-4];
    v_86 = ncons(v_85);
    env = stack[-4];
    v_85 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // exptf
    v_85 = (*qfn2(fn))(fn, v_86, v_85);
    }
    env = stack[-4];
    stack[-1] = v_85;
    v_85 = stack[-1];
    if (!car_legal(v_85)) v_85 = carerror(v_85); else
    v_85 = car(v_85);
    if (!car_legal(v_85)) v_85 = carerror(v_85); else
    v_85 = car(v_85);
    if (!car_legal(v_85)) v_85 = carerror(v_85); else
    v_85 = car(v_85);
    {   LispObject fn = basic_elt(env, 3); // mri_realvarp
    v_85 = (*qfn1(fn))(fn, v_85);
    }
    env = stack[-4];
    if (v_85 == nil) goto v_49;
    v_85 = stack[-2];
    if (!car_legal(v_85)) stack[-3] = carerror(v_85); else
    stack[-3] = car(v_85);
    v_85 = stack[0];
    if (!car_legal(v_85)) v_85 = carerror(v_85); else
    v_85 = car(v_85);
    if (!car_legal(v_85)) v_86 = cdrerror(v_85); else
    v_86 = cdr(v_85);
    v_85 = stack[-1];
    {   LispObject fn = basic_elt(env, 4); // multf
    v_86 = (*qfn2(fn))(fn, v_86, v_85);
    }
    env = stack[-4];
    v_85 = stack[-2];
    if (!car_legal(v_85)) v_85 = cdrerror(v_85); else
    v_85 = cdr(v_85);
    {   LispObject fn = basic_elt(env, 5); // addf
    v_85 = (*qfn2(fn))(fn, v_86, v_85);
    }
    {
        LispObject v_91 = stack[-3];
        return cons(v_91, v_85);
    }
v_49:
    v_85 = stack[0];
    if (!car_legal(v_85)) v_85 = carerror(v_85); else
    v_85 = car(v_85);
    if (!car_legal(v_85)) v_85 = cdrerror(v_85); else
    v_85 = cdr(v_85);
    {   LispObject fn = basic_elt(env, 0); // mri_irsplit1
    v_85 = (*qfn1(fn))(fn, v_85);
    }
    env = stack[-4];
    stack[-3] = v_85;
    v_85 = stack[-3];
    if (!car_legal(v_85)) v_86 = carerror(v_85); else
    v_86 = car(v_85);
    v_85 = stack[-1];
    {   LispObject fn = basic_elt(env, 4); // multf
    v_86 = (*qfn2(fn))(fn, v_86, v_85);
    }
    env = stack[-4];
    v_85 = stack[-2];
    if (!car_legal(v_85)) v_85 = carerror(v_85); else
    v_85 = car(v_85);
    {   LispObject fn = basic_elt(env, 5); // addf
    stack[0] = (*qfn2(fn))(fn, v_86, v_85);
    }
    env = stack[-4];
    v_85 = stack[-3];
    if (!car_legal(v_85)) v_86 = cdrerror(v_85); else
    v_86 = cdr(v_85);
    v_85 = stack[-1];
    {   LispObject fn = basic_elt(env, 4); // multf
    v_86 = (*qfn2(fn))(fn, v_86, v_85);
    }
    env = stack[-4];
    v_85 = stack[-2];
    if (!car_legal(v_85)) v_85 = cdrerror(v_85); else
    v_85 = cdr(v_85);
    {   LispObject fn = basic_elt(env, 5); // addf
    v_85 = (*qfn2(fn))(fn, v_86, v_85);
    }
    {
        LispObject v_92 = stack[0];
        return cons(v_92, v_85);
    }
    return onevalue(v_85);
}



// Code for pasf_smordtable

static LispObject CC_pasf_smordtable(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_30, v_31;
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    stack[0] = v_5;
    stack[-1] = v_4;
    stack[-2] = v_3;
    stack[-3] = v_2;
// end of prologue
    v_31 = stack[-1];
    v_30 = stack[0];
    v_30 = static_cast<LispObject>(lessp2(v_31, v_30));
    v_30 = v_30 ? lisp_true : nil;
    env = stack[-4];
    if (v_30 == nil) goto v_10;
    v_31 = stack[-3];
    v_30 = stack[-2];
    {
        LispObject fn = basic_elt(env, 2); // pasf_smordtable2
        return (*qfn2(fn))(fn, v_31, v_30);
    }
v_10:
    v_31 = stack[-1];
    v_30 = stack[0];
    v_30 = static_cast<LispObject>(greaterp2(v_31, v_30));
    v_30 = v_30 ? lisp_true : nil;
    env = stack[-4];
    if (v_30 == nil) goto v_18;
    v_31 = stack[-3];
    v_30 = stack[-2];
    {
        LispObject fn = basic_elt(env, 3); // pasf_smordtable1
        return (*qfn2(fn))(fn, v_31, v_30);
    }
v_18:
    v_30 = basic_elt(env, 1); // "abused smordtable"
    v_30 = ncons(v_30);
    env = stack[-4];
    {
        LispObject fn = basic_elt(env, 4); // rederr
        return (*qfn1(fn))(fn, v_30);
    }
    v_30 = nil;
    return onevalue(v_30);
}



// Code for den

static LispObject CC_den(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // simp!*
    v_10 = (*qfn1(fn))(fn, v_10);
    }
    env = stack[0];
    if (!car_legal(v_10)) v_11 = cdrerror(v_10); else
    v_11 = cdr(v_10);
    v_10 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_10 = cons(v_11, v_10);
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // mk!*sq
        return (*qfn1(fn))(fn, v_10);
    }
}



// Code for groebcplistmerge

static LispObject CC_groebcplistmerge(LispObject env,
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    stack[-1] = v_3;
    stack[-2] = v_2;
// end of prologue
    v_48 = stack[-2];
    if (v_48 == nil) goto v_12;
    else goto v_13;
v_12:
    v_48 = stack[-1];
    goto v_9;
v_13:
    v_48 = stack[-1];
    if (v_48 == nil) goto v_18;
    else goto v_19;
v_18:
    v_48 = stack[-2];
    goto v_9;
v_19:
    v_48 = stack[-2];
    if (!car_legal(v_48)) v_48 = carerror(v_48); else
    v_48 = car(v_48);
    stack[-3] = v_48;
    v_48 = stack[-1];
    if (!car_legal(v_48)) v_48 = carerror(v_48); else
    v_48 = car(v_48);
    stack[0] = v_48;
    v_49 = stack[-3];
    v_48 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // groebcpcompless!?
    v_48 = (*qfn2(fn))(fn, v_49, v_48);
    }
    env = stack[-4];
    if (v_48 == nil) goto v_32;
    stack[0] = stack[-3];
    v_48 = stack[-2];
    if (!car_legal(v_48)) v_49 = cdrerror(v_48); else
    v_49 = cdr(v_48);
    v_48 = stack[-1];
    {   LispObject fn = basic_elt(env, 0); // groebcplistmerge
    v_48 = (*qfn2(fn))(fn, v_49, v_48);
    }
    {
        LispObject v_54 = stack[0];
        return cons(v_54, v_48);
    }
v_32:
    v_49 = stack[-2];
    v_48 = stack[-1];
    if (!car_legal(v_48)) v_48 = cdrerror(v_48); else
    v_48 = cdr(v_48);
    {   LispObject fn = basic_elt(env, 0); // groebcplistmerge
    v_48 = (*qfn2(fn))(fn, v_49, v_48);
    }
    {
        LispObject v_55 = stack[0];
        return cons(v_55, v_48);
    }
    v_48 = nil;
v_9:
    return onevalue(v_48);
}



// Code for subs2pf

static LispObject CC_subs2pf(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
v_1:
    v_33 = stack[0];
    if (v_33 == nil) goto v_7;
    v_33 = stack[0];
    if (!car_legal(v_33)) v_33 = carerror(v_33); else
    v_33 = car(v_33);
    if (!car_legal(v_33)) v_33 = cdrerror(v_33); else
    v_33 = cdr(v_33);
    {   LispObject fn = basic_elt(env, 1); // resimp
    v_33 = (*qfn1(fn))(fn, v_33);
    }
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // subs2
    v_33 = (*qfn1(fn))(fn, v_33);
    }
    env = stack[-1];
    v_34 = v_33;
    if (!car_legal(v_34)) v_34 = carerror(v_34); else
    v_34 = car(v_34);
    if (v_34 == nil) goto v_18;
    v_34 = stack[0];
    if (!car_legal(v_34)) v_34 = carerror(v_34); else
    v_34 = car(v_34);
    if (!car_legal(v_34)) v_35 = carerror(v_34); else
    v_35 = car(v_34);
    v_34 = v_33;
    v_33 = stack[0];
    if (!car_legal(v_33)) v_33 = cdrerror(v_33); else
    v_33 = cdr(v_33);
    return acons(v_35, v_34, v_33);
v_18:
    v_33 = stack[0];
    if (!car_legal(v_33)) v_33 = cdrerror(v_33); else
    v_33 = cdr(v_33);
    stack[0] = v_33;
    goto v_1;
    v_33 = nil;
    goto v_5;
v_7:
    v_33 = nil;
v_5:
    return onevalue(v_33);
}



// Code for !:log2

static LispObject CC_Tlog2(LispObject env,
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
    v_25 = basic_elt(env, 0); // !:log2
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
    v_25 = qvalue(basic_elt(env, 2)); // bftwo!*
    v_24 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // log!:
    v_24 = (*qfn2(fn))(fn, v_25, v_24);
    }
    env = stack[-2];
    stack[-1] = v_24;
    v_25 = basic_elt(env, 0); // !:log2
    v_24 = stack[-1];
    {   LispObject fn = basic_elt(env, 5); // save!:const
    v_24 = (*qfn2(fn))(fn, v_25, v_24);
    }
    v_24 = stack[-1];
v_6:
    return onevalue(v_24);
}



// Code for lispcodeexp

static LispObject CC_lispcodeexp(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_320, v_321, v_322;
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
    stack[-2] = v_2;
// end of prologue
v_1:
    v_320 = stack[-2];
    if (is_number(v_320)) goto v_9;
    else goto v_10;
v_9:
    v_320 = stack[-3];
    if (v_320 == nil) goto v_15;
    v_320 = stack[-2];
        return Lfloat(nil, v_320);
v_15:
    v_320 = stack[-2];
    goto v_13;
    v_320 = nil;
v_13:
    goto v_8;
v_10:
    v_321 = stack[-2];
    v_320 = basic_elt(env, 1); // e
    if (v_321 == v_320) goto v_22;
    else goto v_23;
v_22:
    v_321 = basic_elt(env, 2); // exp
    v_320 = basic_elt(env, 3); // 1.0
    v_321 = list2(v_321, v_320);
    env = stack[-5];
    v_320 = stack[-3];
    stack[-2] = v_321;
    stack[-3] = v_320;
    goto v_1;
v_23:
    v_320 = stack[-2];
    if (!consp(v_320)) goto v_35;
    else goto v_36;
v_35:
    v_320 = lisp_true;
    goto v_34;
v_36:
    v_320 = stack[-2];
    if (!car_legal(v_320)) v_321 = carerror(v_320); else
    v_321 = car(v_320);
    v_320 = basic_elt(env, 4); // (!:rd!: !:cr!: !:crn!: !:gi!:)
    v_320 = Lmemq(nil, v_321, v_320);
    goto v_34;
    v_320 = nil;
v_34:
    if (v_320 == nil) goto v_32;
    v_320 = qvalue(basic_elt(env, 5)); // irena!-constants
    if (v_320 == nil) goto v_48;
    v_320 = stack[-2];
    if (v_320 == nil) goto v_48;
    v_320 = stack[-2];
    v_320 = Lstringp(nil, v_320);
    env = stack[-5];
    if (v_320 == nil) goto v_54;
    else goto v_48;
v_54:
    v_320 = stack[-2];
    {   LispObject fn = basic_elt(env, 19); // check!-for!-irena!-constants
    v_320 = (*qfn1(fn))(fn, v_320);
    }
    goto v_46;
v_48:
v_46:
    v_320 = stack[-2];
    goto v_8;
v_32:
    v_320 = stack[-2];
    if (!car_legal(v_320)) v_321 = carerror(v_320); else
    v_321 = car(v_320);
    v_320 = basic_elt(env, 6); // expt
    if (v_321 == v_320) goto v_60;
    else goto v_61;
v_60:
    v_320 = stack[-2];
    if (!car_legal(v_320)) v_320 = cdrerror(v_320); else
    v_320 = cdr(v_320);
    if (!car_legal(v_320)) v_321 = carerror(v_320); else
    v_321 = car(v_320);
    v_320 = basic_elt(env, 1); // e
    if (v_321 == v_320) goto v_67;
    else goto v_68;
v_67:
    v_321 = basic_elt(env, 2); // exp
    v_320 = stack[-2];
    if (!car_legal(v_320)) v_320 = cdrerror(v_320); else
    v_320 = cdr(v_320);
    if (!car_legal(v_320)) v_320 = cdrerror(v_320); else
    v_320 = cdr(v_320);
    if (!car_legal(v_320)) v_320 = carerror(v_320); else
    v_320 = car(v_320);
    v_321 = list2(v_321, v_320);
    env = stack[-5];
    v_320 = stack[-3];
    stack[-2] = v_321;
    stack[-3] = v_320;
    goto v_1;
v_68:
    v_320 = stack[-2];
    if (!car_legal(v_320)) v_320 = cdrerror(v_320); else
    v_320 = cdr(v_320);
    if (!car_legal(v_320)) v_320 = cdrerror(v_320); else
    v_320 = cdr(v_320);
    if (!car_legal(v_320)) v_321 = carerror(v_320); else
    v_321 = car(v_320);
    v_320 = basic_elt(env, 7); // (quotient 1 2)
    if (equal(v_321, v_320)) goto v_81;
    else goto v_82;
v_81:
    v_321 = basic_elt(env, 8); // sqrt
    v_320 = stack[-2];
    if (!car_legal(v_320)) v_320 = cdrerror(v_320); else
    v_320 = cdr(v_320);
    if (!car_legal(v_320)) v_320 = carerror(v_320); else
    v_320 = car(v_320);
    v_321 = list2(v_321, v_320);
    env = stack[-5];
    v_320 = stack[-3];
    stack[-2] = v_321;
    stack[-3] = v_320;
    goto v_1;
v_82:
    v_320 = stack[-2];
    if (!car_legal(v_320)) v_320 = cdrerror(v_320); else
    v_320 = cdr(v_320);
    if (!car_legal(v_320)) v_320 = cdrerror(v_320); else
    v_320 = cdr(v_320);
    if (!car_legal(v_320)) v_321 = carerror(v_320); else
    v_321 = car(v_320);
    v_320 = basic_elt(env, 9); // !:rd!:
    if (!consp(v_321)) goto v_96;
    v_321 = car(v_321);
    if (v_321 == v_320) goto v_95;
    else goto v_96;
v_95:
    v_320 = stack[-2];
    if (!car_legal(v_320)) v_320 = cdrerror(v_320); else
    v_320 = cdr(v_320);
    if (!car_legal(v_320)) v_320 = cdrerror(v_320); else
    v_320 = cdr(v_320);
    if (!car_legal(v_320)) v_320 = carerror(v_320); else
    v_320 = car(v_320);
    {   LispObject fn = basic_elt(env, 20); // realrat
    v_320 = (*qfn1(fn))(fn, v_320);
    }
    env = stack[-5];
    stack[-1] = v_320;
    v_321 = stack[-1];
    v_320 = basic_elt(env, 10); // (1 . 2)
    if (equal(v_321, v_320)) goto v_113;
    else goto v_114;
v_113:
    stack[0] = basic_elt(env, 8); // sqrt
    v_320 = stack[-2];
    if (!car_legal(v_320)) v_320 = cdrerror(v_320); else
    v_320 = cdr(v_320);
    if (!car_legal(v_320)) v_321 = carerror(v_320); else
    v_321 = car(v_320);
    v_320 = stack[-3];
    {   LispObject fn = basic_elt(env, 0); // lispcodeexp
    v_320 = (*qfn2(fn))(fn, v_321, v_320);
    }
    {
        LispObject v_328 = stack[0];
        return list2(v_328, v_320);
    }
v_114:
    stack[0] = basic_elt(env, 6); // expt
    v_320 = stack[-2];
    if (!car_legal(v_320)) v_320 = cdrerror(v_320); else
    v_320 = cdr(v_320);
    if (!car_legal(v_320)) v_321 = carerror(v_320); else
    v_321 = car(v_320);
    v_320 = stack[-3];
    {   LispObject fn = basic_elt(env, 0); // lispcodeexp
    stack[-2] = (*qfn2(fn))(fn, v_321, v_320);
    }
    env = stack[-5];
    v_322 = basic_elt(env, 11); // quotient
    v_320 = stack[-1];
    if (!car_legal(v_320)) v_321 = carerror(v_320); else
    v_321 = car(v_320);
    v_320 = stack[-1];
    if (!car_legal(v_320)) v_320 = cdrerror(v_320); else
    v_320 = cdr(v_320);
    v_321 = list3(v_322, v_321, v_320);
    env = stack[-5];
    v_320 = nil;
    {   LispObject fn = basic_elt(env, 0); // lispcodeexp
    v_320 = (*qfn2(fn))(fn, v_321, v_320);
    }
    {
        LispObject v_329 = stack[0];
        LispObject v_330 = stack[-2];
        return list3(v_329, v_330, v_320);
    }
    v_320 = nil;
    goto v_66;
v_96:
    stack[0] = basic_elt(env, 6); // expt
    v_320 = stack[-2];
    if (!car_legal(v_320)) v_320 = cdrerror(v_320); else
    v_320 = cdr(v_320);
    if (!car_legal(v_320)) v_321 = carerror(v_320); else
    v_321 = car(v_320);
    v_320 = stack[-3];
    {   LispObject fn = basic_elt(env, 0); // lispcodeexp
    stack[-1] = (*qfn2(fn))(fn, v_321, v_320);
    }
    env = stack[-5];
    v_320 = stack[-2];
    if (!car_legal(v_320)) v_320 = cdrerror(v_320); else
    v_320 = cdr(v_320);
    if (!car_legal(v_320)) v_320 = cdrerror(v_320); else
    v_320 = cdr(v_320);
    if (!car_legal(v_320)) v_321 = carerror(v_320); else
    v_321 = car(v_320);
    v_320 = nil;
    {   LispObject fn = basic_elt(env, 0); // lispcodeexp
    v_320 = (*qfn2(fn))(fn, v_321, v_320);
    }
    {
        LispObject v_331 = stack[0];
        LispObject v_332 = stack[-1];
        return list3(v_331, v_332, v_320);
    }
    v_320 = nil;
v_66:
    goto v_8;
v_61:
    v_320 = stack[-2];
    if (!car_legal(v_320)) v_321 = carerror(v_320); else
    v_321 = car(v_320);
    v_320 = basic_elt(env, 11); // quotient
    if (v_321 == v_320) goto v_156;
    else goto v_157;
v_156:
    stack[-1] = basic_elt(env, 11); // quotient
    v_320 = stack[-2];
    if (!car_legal(v_320)) v_320 = cdrerror(v_320); else
    v_320 = cdr(v_320);
    if (!car_legal(v_320)) v_321 = carerror(v_320); else
    v_321 = car(v_320);
    v_320 = lisp_true;
    {   LispObject fn = basic_elt(env, 0); // lispcodeexp
    stack[0] = (*qfn2(fn))(fn, v_321, v_320);
    }
    env = stack[-5];
    v_320 = stack[-2];
    if (!car_legal(v_320)) v_320 = cdrerror(v_320); else
    v_320 = cdr(v_320);
    if (!car_legal(v_320)) v_320 = cdrerror(v_320); else
    v_320 = cdr(v_320);
    if (!car_legal(v_320)) v_321 = carerror(v_320); else
    v_321 = car(v_320);
    v_320 = lisp_true;
    {   LispObject fn = basic_elt(env, 0); // lispcodeexp
    v_320 = (*qfn2(fn))(fn, v_321, v_320);
    }
    {
        LispObject v_333 = stack[-1];
        LispObject v_334 = stack[0];
        return list3(v_333, v_334, v_320);
    }
v_157:
    v_320 = stack[-2];
    if (!car_legal(v_320)) v_321 = carerror(v_320); else
    v_321 = car(v_320);
    v_320 = basic_elt(env, 12); // recip
    if (v_321 == v_320) goto v_174;
    else goto v_175;
v_174:
    v_320 = qvalue(basic_elt(env, 13)); // !*period
    if (v_320 == nil) goto v_182;
    stack[-1] = basic_elt(env, 11); // quotient
    stack[0] = basic_elt(env, 3); // 1.0
    v_320 = stack[-2];
    if (!car_legal(v_320)) v_320 = cdrerror(v_320); else
    v_320 = cdr(v_320);
    if (!car_legal(v_320)) v_321 = carerror(v_320); else
    v_321 = car(v_320);
    v_320 = stack[-3];
    {   LispObject fn = basic_elt(env, 0); // lispcodeexp
    v_320 = (*qfn2(fn))(fn, v_321, v_320);
    }
    {
        LispObject v_335 = stack[-1];
        LispObject v_336 = stack[0];
        return list3(v_335, v_336, v_320);
    }
v_182:
    stack[-1] = basic_elt(env, 11); // quotient
    stack[0] = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_320 = stack[-2];
    if (!car_legal(v_320)) v_320 = cdrerror(v_320); else
    v_320 = cdr(v_320);
    if (!car_legal(v_320)) v_321 = carerror(v_320); else
    v_321 = car(v_320);
    v_320 = stack[-3];
    {   LispObject fn = basic_elt(env, 0); // lispcodeexp
    v_320 = (*qfn2(fn))(fn, v_321, v_320);
    }
    {
        LispObject v_337 = stack[-1];
        LispObject v_338 = stack[0];
        return list3(v_337, v_338, v_320);
    }
    v_320 = nil;
    goto v_8;
v_175:
    v_320 = stack[-2];
    if (!car_legal(v_320)) v_321 = carerror(v_320); else
    v_321 = car(v_320);
    v_320 = basic_elt(env, 14); // difference
    if (v_321 == v_320) goto v_202;
    else goto v_203;
v_202:
    stack[-4] = basic_elt(env, 15); // plus
    v_320 = stack[-2];
    if (!car_legal(v_320)) v_320 = cdrerror(v_320); else
    v_320 = cdr(v_320);
    if (!car_legal(v_320)) v_321 = carerror(v_320); else
    v_321 = car(v_320);
    v_320 = stack[-3];
    {   LispObject fn = basic_elt(env, 0); // lispcodeexp
    stack[-1] = (*qfn2(fn))(fn, v_321, v_320);
    }
    env = stack[-5];
    stack[0] = basic_elt(env, 16); // minus
    v_320 = stack[-2];
    if (!car_legal(v_320)) v_320 = cdrerror(v_320); else
    v_320 = cdr(v_320);
    if (!car_legal(v_320)) v_320 = cdrerror(v_320); else
    v_320 = cdr(v_320);
    if (!car_legal(v_320)) v_321 = carerror(v_320); else
    v_321 = car(v_320);
    v_320 = stack[-3];
    {   LispObject fn = basic_elt(env, 0); // lispcodeexp
    v_320 = (*qfn2(fn))(fn, v_321, v_320);
    }
    env = stack[-5];
    v_320 = list2(stack[0], v_320);
    {
        LispObject v_339 = stack[-4];
        LispObject v_340 = stack[-1];
        return list3(v_339, v_340, v_320);
    }
v_203:
    v_320 = stack[-2];
    if (!car_legal(v_320)) v_321 = carerror(v_320); else
    v_321 = car(v_320);
    v_320 = qvalue(basic_elt(env, 17)); // !*lisparithexpops!*
    v_320 = Lmemq(nil, v_321, v_320);
    if (v_320 == nil) goto v_226;
    else goto v_227;
v_226:
    v_320 = stack[-2];
    if (!car_legal(v_320)) v_321 = carerror(v_320); else
    v_321 = car(v_320);
    v_320 = qvalue(basic_elt(env, 18)); // !*lisplogexpops!*
    v_320 = Lmemq(nil, v_321, v_320);
    v_320 = (v_320 == nil ? lisp_true : nil);
    goto v_225;
v_227:
    v_320 = nil;
    goto v_225;
    v_320 = nil;
v_225:
    if (v_320 == nil) goto v_223;
    v_320 = stack[-2];
    stack[-3] = v_320;
    v_320 = stack[-3];
    if (v_320 == nil) goto v_249;
    else goto v_250;
v_249:
    v_320 = nil;
    goto v_244;
v_250:
    v_320 = stack[-3];
    if (!car_legal(v_320)) v_320 = carerror(v_320); else
    v_320 = car(v_320);
    v_321 = v_320;
    v_320 = nil;
    {   LispObject fn = basic_elt(env, 0); // lispcodeexp
    v_320 = (*qfn2(fn))(fn, v_321, v_320);
    }
    env = stack[-5];
    v_320 = ncons(v_320);
    env = stack[-5];
    stack[-1] = v_320;
    stack[-2] = v_320;
v_245:
    v_320 = stack[-3];
    if (!car_legal(v_320)) v_320 = cdrerror(v_320); else
    v_320 = cdr(v_320);
    stack[-3] = v_320;
    v_320 = stack[-3];
    if (v_320 == nil) goto v_264;
    else goto v_265;
v_264:
    v_320 = stack[-2];
    goto v_244;
v_265:
    stack[0] = stack[-1];
    v_320 = stack[-3];
    if (!car_legal(v_320)) v_320 = carerror(v_320); else
    v_320 = car(v_320);
    v_321 = v_320;
    v_320 = nil;
    {   LispObject fn = basic_elt(env, 0); // lispcodeexp
    v_320 = (*qfn2(fn))(fn, v_321, v_320);
    }
    env = stack[-5];
    v_320 = ncons(v_320);
    env = stack[-5];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_320);
    v_320 = stack[-1];
    if (!car_legal(v_320)) v_320 = cdrerror(v_320); else
    v_320 = cdr(v_320);
    stack[-1] = v_320;
    goto v_245;
v_244:
    goto v_8;
v_223:
    v_320 = stack[-2];
    stack[-4] = v_320;
    v_320 = stack[-4];
    if (v_320 == nil) goto v_290;
    else goto v_291;
v_290:
    v_320 = nil;
    goto v_285;
v_291:
    v_320 = stack[-4];
    if (!car_legal(v_320)) v_320 = carerror(v_320); else
    v_320 = car(v_320);
    v_321 = v_320;
    v_320 = stack[-3];
    {   LispObject fn = basic_elt(env, 0); // lispcodeexp
    v_320 = (*qfn2(fn))(fn, v_321, v_320);
    }
    env = stack[-5];
    v_320 = ncons(v_320);
    env = stack[-5];
    stack[-1] = v_320;
    stack[-2] = v_320;
v_286:
    v_320 = stack[-4];
    if (!car_legal(v_320)) v_320 = cdrerror(v_320); else
    v_320 = cdr(v_320);
    stack[-4] = v_320;
    v_320 = stack[-4];
    if (v_320 == nil) goto v_305;
    else goto v_306;
v_305:
    v_320 = stack[-2];
    goto v_285;
v_306:
    stack[0] = stack[-1];
    v_320 = stack[-4];
    if (!car_legal(v_320)) v_320 = carerror(v_320); else
    v_320 = car(v_320);
    v_321 = v_320;
    v_320 = stack[-3];
    {   LispObject fn = basic_elt(env, 0); // lispcodeexp
    v_320 = (*qfn2(fn))(fn, v_321, v_320);
    }
    env = stack[-5];
    v_320 = ncons(v_320);
    env = stack[-5];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_320);
    v_320 = stack[-1];
    if (!car_legal(v_320)) v_320 = cdrerror(v_320); else
    v_320 = cdr(v_320);
    stack[-1] = v_320;
    goto v_286;
v_285:
    goto v_8;
    v_320 = nil;
v_8:
    return onevalue(v_320);
}



// Code for physopsubs

static LispObject CC_physopsubs(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[-1] = v_2;
// end of prologue
// Binding alglist!*
// FLUIDBIND: reloadenv=3 litvec-offset=1 saveloc=2
{   bind_fluid_stack bind_fluid_var(-3, 1, -2);
    setvalue(basic_elt(env, 1), nil); // alglist!*
    v_79 = nil;
    v_79 = ncons(v_79);
    env = stack[-3];
    setvalue(basic_elt(env, 1), v_79); // alglist!*
    v_79 = stack[-1];
    {   LispObject fn = basic_elt(env, 10); // physop2sq
    v_79 = (*qfn1(fn))(fn, v_79);
    }
    env = stack[-3];
    stack[-1] = v_79;
    v_79 = qvalue(basic_elt(env, 2)); // physoplist!*
    stack[0] = v_79;
v_17:
    v_79 = stack[0];
    if (v_79 == nil) goto v_21;
    else goto v_22;
v_21:
    goto v_16;
v_22:
    v_79 = stack[0];
    if (!car_legal(v_79)) v_79 = carerror(v_79); else
    v_79 = car(v_79);
    v_81 = v_79;
    v_80 = v_81;
    v_79 = basic_elt(env, 3); // rtype
    v_79 = Lremprop(nil, v_80, v_79);
    env = stack[-3];
    v_80 = basic_elt(env, 4); // simpfn
    v_79 = basic_elt(env, 5); // simpiden
    v_79 = Lputprop(nil, v_81, v_80, v_79);
    env = stack[-3];
    v_79 = stack[0];
    if (!car_legal(v_79)) v_79 = cdrerror(v_79); else
    v_79 = cdr(v_79);
    stack[0] = v_79;
    goto v_17;
v_16:
    v_80 = basic_elt(env, 6); // (dot)
    v_79 = basic_elt(env, 7); // physopfn
    v_79 = Lremflag(nil, v_80, v_79);
    env = stack[-3];
    v_81 = basic_elt(env, 8); // dot
    v_80 = basic_elt(env, 4); // simpfn
    v_79 = basic_elt(env, 5); // simpiden
    v_79 = Lputprop(nil, v_81, v_80, v_79);
    env = stack[-3];
    v_79 = stack[-1];
    {   LispObject fn = basic_elt(env, 11); // subs2
    v_79 = (*qfn1(fn))(fn, v_79);
    }
    env = stack[-3];
    stack[-1] = v_79;
    v_79 = stack[-1];
    {   LispObject fn = basic_elt(env, 12); // !*q2a
    v_79 = (*qfn1(fn))(fn, v_79);
    }
    env = stack[-3];
    stack[-1] = v_79;
    v_79 = qvalue(basic_elt(env, 2)); // physoplist!*
    stack[0] = v_79;
v_51:
    v_79 = stack[0];
    if (v_79 == nil) goto v_55;
    else goto v_56;
v_55:
    goto v_50;
v_56:
    v_79 = stack[0];
    if (!car_legal(v_79)) v_79 = carerror(v_79); else
    v_79 = car(v_79);
    v_81 = v_79;
    v_80 = v_81;
    v_79 = basic_elt(env, 4); // simpfn
    v_79 = Lremprop(nil, v_80, v_79);
    env = stack[-3];
    v_80 = basic_elt(env, 3); // rtype
    v_79 = basic_elt(env, 9); // physop
    v_79 = Lputprop(nil, v_81, v_80, v_79);
    env = stack[-3];
    v_79 = stack[0];
    if (!car_legal(v_79)) v_79 = cdrerror(v_79); else
    v_79 = cdr(v_79);
    stack[0] = v_79;
    goto v_51;
v_50:
    v_80 = basic_elt(env, 8); // dot
    v_79 = basic_elt(env, 4); // simpfn
    v_79 = Lremprop(nil, v_80, v_79);
    env = stack[-3];
    v_80 = basic_elt(env, 6); // (dot)
    v_79 = basic_elt(env, 7); // physopfn
    v_79 = Lflag(nil, v_80, v_79);
    v_79 = stack[-1];
    ;}  // end of a binding scope
    return onevalue(v_79);
}



setup_type const u48_setup[] =
{
    {"maprintla",               G0W2,     G1W2,     CC_maprintla,G3W2,  G4W2},
    {"mkdmoderr",               G0W2,     G1W2,     CC_mkdmoderr,G3W2,  G4W2},
    {"reset_opnums",            CC_reset_opnums,G1W0,G2W0,    G3W0,     G4W0},
    {"mk_names_map_2",          G0W1,     CC_mk_names_map_2,G2W1,G3W1,  G4W1},
    {"njets",                   G0W2,     G1W2,     CC_njets, G3W2,     G4W2},
    {"pst_mkpst",               G0W1,     CC_pst_mkpst,G2W1,  G3W1,     G4W1},
    {"general-modular-difference",G0W2,   G1W2,     CC_generalKmodularKdifference,G3W2,G4W2},
    {"aex_psrem",               G0W3,     G1W3,     G2W3,     CC_aex_psrem,G4W3},
    {"f2df",                    G0W1,     CC_f2df,  G2W1,     G3W1,     G4W1},
    {"get_dimension_in",        G0W1,     CC_get_dimension_in,G2W1,G3W1,G4W1},
    {"talp_qesolset",           G0W2,     G1W2,     CC_talp_qesolset,G3W2,G4W2},
    {"cl_susicpknowl",          G0W1,     CC_cl_susicpknowl,G2W1,G3W1,  G4W1},
    {"gpexpp",                  G0W1,     CC_gpexpp,G2W1,     G3W1,     G4W1},
    {"mo_support",              G0W1,     CC_mo_support,G2W1, G3W1,     G4W1},
    {"addnew",                  G0W3,     G1W3,     G2W3,     CC_addnew,G4W3},
    {"flattens1",               G0W1,     CC_flattens1,G2W1,  G3W1,     G4W1},
    {"mkexpvec",                G0W1,     CC_mkexpvec,G2W1,   G3W1,     G4W1},
    {"qroundup",                G0W2,     G1W2,     CC_qroundup,G3W2,   G4W2},
    {"aex_unbind",              G0W2,     G1W2,     CC_aex_unbind,G3W2, G4W2},
    {"min2-order",              G0W3,     G1W3,     G2W3,     CC_min2Korder,G4W3},
    {"mk+inner+product",        G0W2,     G1W2,     CC_mkLinnerLproduct,G3W2,G4W2},
    {"mri_simplfloor1",         G0W1,     CC_mri_simplfloor1,G2W1,G3W1, G4W1},
    {"cl_bnfsimpl",             G0W2,     G1W2,     CC_cl_bnfsimpl,G3W2,G4W2},
    {"vdp_zero",                CC_vdp_zero,G1W0,   G2W0,     G3W0,     G4W0},
    {"countof",                 G0W2,     G1W2,     CC_countof,G3W2,    G4W2},
    {"evalgeq",                 G0W2,     G1W2,     CC_evalgeq,G3W2,    G4W2},
    {"lengthn",                 G0W1,     CC_lengthn,G2W1,    G3W1,     G4W1},
    {"spmatlength",             G0W1,     CC_spmatlength,G2W1,G3W1,     G4W1},
    {"sfpf",                    G0W1,     CC_sfpf,  G2W1,     G3W1,     G4W1},
    {"pnth*",                   G0W2,     G1W2,     CC_pnthH, G3W2,     G4W2},
    {"generic_arguments",       G0W1,     CC_generic_arguments,G2W1,G3W1,G4W1},
    {"fs:subang",               G0W3,     G1W3,     G2W3,     CC_fsTsubang,G4W3},
    {"cali_bc_from_a",          G0W1,     CC_cali_bc_from_a,G2W1,G3W1,  G4W1},
    {"dv_skel2factor",          G0W2,     G1W2,     CC_dv_skel2factor,G3W2,G4W2},
    {"alistp",                  G0W1,     CC_alistp,G2W1,     G3W1,     G4W1},
    {"add-factor",              G0W2,     G1W2,     CC_addKfactor,G3W2, G4W2},
    {"dfdeg",                   G0W2,     G1W2,     CC_dfdeg, G3W2,     G4W2},
    {"talp_get-idx",            G0W2,     G1W2,     CC_talp_getKidx,G3W2,G4W2},
    {"iv_new",                  G0W2,     G1W2,     CC_iv_new,G3W2,     G4W2},
    {"mulpower",                G0W2,     G1W2,     CC_mulpower,G3W2,   G4W2},
    {"parfool",                 G0W1,     CC_parfool,G2W1,    G3W1,     G4W1},
    {"spmatsm*",                G0W2,     G1W2,     CC_spmatsmH,G3W2,   G4W2},
    {"matsm*",                  G0W2,     G1W2,     CC_matsmH,G3W2,     G4W2},
    {"f2dip",                   G0W1,     CC_f2dip, G2W1,     G3W1,     G4W1},
    {"dim<=deg",                G0W1,     CC_dimRMdeg,G2W1,   G3W1,     G4W1},
    {"mk_parents_prim",         G0W1,     CC_mk_parents_prim,G2W1,G3W1, G4W1},
    {"expand-imrepartpow",      G0W1,     CC_expandKimrepartpow,G2W1,G3W1,G4W1},
    {"bfrsq",                   G0W1,     CC_bfrsq, G2W1,     G3W1,     G4W1},
    {"sfchk",                   G0W1,     CC_sfchk, G2W1,     G3W1,     G4W1},
    {"replace-next",            G0W2,     G1W2,     CC_replaceKnext,G3W2,G4W2},
    {"talp_mkinvop",            G0W2,     G1W2,     CC_talp_mkinvop,G3W2,G4W2},
    {"bc_zero",                 CC_bc_zero,G1W0,    G2W0,     G3W0,     G4W0},
    {"gfquotient",              G0W2,     G1W2,     CC_gfquotient,G3W2, G4W2},
    {"mkrepart",                G0W1,     CC_mkrepart,G2W1,   G3W1,     G4W1},
    {"mo=expvec2a1",            G0W2,     G1W2,     CC_moMexpvec2a1,G3W2,G4W2},
    {"sub01",                   G0W2,     G1W2,     CC_sub01, G3W2,     G4W2},
    {"depend-sq",               G0W2,     G1W2,     CC_dependKsq,G3W2,  G4W2},
    {"mri_irsplit1",            G0W1,     CC_mri_irsplit1,G2W1,G3W1,    G4W1},
    {"pasf_smordtable",         G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_pasf_smordtable},
    {"den",                     G0W1,     CC_den,   G2W1,     G3W1,     G4W1},
    {"groebcplistmerge",        G0W2,     G1W2,     CC_groebcplistmerge,G3W2,G4W2},
    {"subs2pf",                 G0W1,     CC_subs2pf,G2W1,    G3W1,     G4W1},
    {":log2",                   G0W1,     CC_Tlog2, G2W1,     G3W1,     G4W1},
    {"lispcodeexp",             G0W2,     G1W2,     CC_lispcodeexp,G3W2,G4W2},
    {"physopsubs",              G0W1,     CC_physopsubs,G2W1, G3W1,     G4W1},
    {nullptr, 
        reinterpret_cast<no_args *>(
            reinterpret_cast<uintptr_t>("u48")),
        reinterpret_cast<one_arg *>(
            reinterpret_cast<uintptr_t>("63073 7272097 8612076")),
        nullptr, nullptr, nullptr}
};

// end of generated code
