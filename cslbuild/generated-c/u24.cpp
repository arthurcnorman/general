
// $destdir/u24.c        Machine generated C code

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


// Code for fs!:null!-angle

static LispObject CC_fsTnullKangle(LispObject env,
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
    v_34 = v_2;
// end of prologue
    v_35 = v_34;
    v_34 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_34 = Lgetv(nil, v_35, v_34);
    env = stack[-3];
    stack[0] = v_34;
    v_34 = lisp_true;
    stack[-2] = v_34;
    v_34 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-1] = v_34;
v_9:
    v_35 = stack[0];
    v_34 = stack[-1];
    v_35 = Lgetv(nil, v_35, v_34);
    env = stack[-3];
    v_34 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_35 == v_34) goto v_18;
    v_34 = nil;
    goto v_8;
v_18:
    v_34 = stack[-1];
    v_34 = add1(v_34);
    env = stack[-3];
    stack[-1] = v_34;
    v_35 = stack[-1];
    v_34 = static_cast<LispObject>(128)+TAG_FIXNUM; // 8
    v_34 = static_cast<LispObject>(lessp2(v_35, v_34));
    v_34 = v_34 ? lisp_true : nil;
    env = stack[-3];
    if (v_34 == nil) goto v_29;
    goto v_9;
v_29:
    v_34 = stack[-2];
v_8:
    return onevalue(v_34);
}



// Code for mo_equal!?

static LispObject CC_mo_equalW(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_12 = v_2;
// end of prologue
    if (!car_legal(v_12)) v_12 = carerror(v_12); else
    v_12 = car(v_12);
    {   LispObject fn = basic_elt(env, 1); // mo!=shorten
    stack[-1] = (*qfn1(fn))(fn, v_12);
    }
    env = stack[-2];
    v_12 = stack[0];
    if (!car_legal(v_12)) v_12 = carerror(v_12); else
    v_12 = car(v_12);
    {   LispObject fn = basic_elt(env, 1); // mo!=shorten
    v_12 = (*qfn1(fn))(fn, v_12);
    }
    v_12 = (equal(stack[-1], v_12) ? lisp_true : nil);
    return onevalue(v_12);
}



// Code for st_sorttree

static LispObject CC_st_sorttree(LispObject env,
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
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_11 = v_4;
    v_12 = v_3;
    v_13 = v_2;
// end of prologue
    {   LispObject fn = basic_elt(env, 1); // st_sorttree1
    v_11 = (*qfn3(fn))(fn, v_13, v_12, v_11);
    }
    if (!car_legal(v_11)) v_11 = cdrerror(v_11); else
    v_11 = cdr(v_11);
    return onevalue(v_11);
}



// Code for rlis

static LispObject CC_rlis(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    push(nil, nil);
    stack_popper stack_popper_var(3);
// end of prologue
    v_33 = qvalue(basic_elt(env, 1)); // cursym!*
    stack[0] = v_33;
    {   LispObject fn = basic_elt(env, 5); // scan
    v_33 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
    if (!symbolp(v_33)) v_33 = nil;
    else { v_33 = qfastgets(v_33);
           if (v_33 != nil) { v_33 = elt(v_33, 55); // delim
#ifdef RECORD_GET
             if (v_33 == SPID_NOPROP)
                record_get(elt(fastget_names, 55), 0),
                v_33 = nil;
             else record_get(elt(fastget_names, 55), 1),
                v_33 = lisp_true; }
           else record_get(elt(fastget_names, 55), 0); }
#else
             if (v_33 == SPID_NOPROP) v_33 = nil; else v_33 = lisp_true; }}
#endif
    if (v_33 == nil) goto v_10;
    v_34 = stack[0];
    v_33 = nil;
    return list2(v_34, v_33);
v_10:
    v_33 = qvalue(basic_elt(env, 2)); // !*reduce4
    if (v_33 == nil) goto v_17;
    stack[-1] = stack[0];
    stack[0] = basic_elt(env, 3); // list
    v_33 = basic_elt(env, 4); // lambda
    {   LispObject fn = basic_elt(env, 6); // xread1
    v_33 = (*qfn1(fn))(fn, v_33);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 7); // remcomma
    v_33 = (*qfn1(fn))(fn, v_33);
    }
    env = stack[-2];
    v_33 = cons(stack[0], v_33);
    {
        LispObject v_37 = stack[-1];
        return list2(v_37, v_33);
    }
v_17:
    v_33 = basic_elt(env, 4); // lambda
    {   LispObject fn = basic_elt(env, 6); // xread1
    v_33 = (*qfn1(fn))(fn, v_33);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 7); // remcomma
    v_33 = (*qfn1(fn))(fn, v_33);
    }
    {
        LispObject v_38 = stack[0];
        return cons(v_38, v_33);
    }
    v_33 = nil;
    return onevalue(v_33);
}



// Code for settinsert

static LispObject CC_settinsert(LispObject env,
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
// space for vars preserved across procedure calls
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_11 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // janettreeinsert
    v_11 = (*qfn1(fn))(fn, v_11);
    }
    env = stack[-1];
    v_12 = stack[0];
    v_11 = qvalue(basic_elt(env, 1)); // fluidbibasissett
    v_11 = cons(v_12, v_11);
    env = stack[-1];
    setvalue(basic_elt(env, 1), v_11); // fluidbibasissett
    v_11 = nil;
    return onevalue(v_11);
}



// Code for get!*elements

static LispObject CC_getHelements(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_10, v_11;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_10 = v_2;
// end of prologue
    v_11 = basic_elt(env, 1); // elems
    return get(v_10, v_11);
    return onevalue(v_10);
}



// Code for dipcondense

static LispObject CC_dipcondense(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_68, v_69;
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
    v_68 = qvalue(basic_elt(env, 1)); // dipevlist!*
    stack[-3] = v_68;
v_11:
    v_68 = stack[-2];
    if (v_68 == nil) goto v_14;
    else goto v_15;
v_14:
    goto v_10;
v_15:
    v_68 = stack[-2];
    if (!car_legal(v_68)) v_68 = carerror(v_68); else
    v_68 = car(v_68);
    stack[-1] = v_68;
v_22:
    v_68 = stack[-3];
    if (!car_legal(v_68)) v_68 = cdrerror(v_68); else
    v_68 = cdr(v_68);
    if (v_68 == nil) goto v_25;
    v_68 = stack[-2];
    if (!car_legal(v_68)) v_69 = carerror(v_68); else
    v_69 = car(v_68);
    v_68 = stack[-3];
    if (!car_legal(v_68)) v_68 = cdrerror(v_68); else
    v_68 = cdr(v_68);
    if (!car_legal(v_68)) v_68 = carerror(v_68); else
    v_68 = car(v_68);
    {   LispObject fn = basic_elt(env, 2); // evcompless!?
    v_68 = (*qfn2(fn))(fn, v_69, v_68);
    }
    env = stack[-4];
    if (v_68 == nil) goto v_25;
    goto v_26;
v_25:
    goto v_21;
v_26:
    v_68 = stack[-3];
    if (!car_legal(v_68)) v_68 = cdrerror(v_68); else
    v_68 = cdr(v_68);
    stack[-3] = v_68;
    goto v_22;
v_21:
    v_68 = stack[-3];
    if (!car_legal(v_68)) v_68 = cdrerror(v_68); else
    v_68 = cdr(v_68);
    if (v_68 == nil) goto v_43;
    v_69 = stack[-1];
    v_68 = stack[-3];
    if (!car_legal(v_68)) v_68 = cdrerror(v_68); else
    v_68 = cdr(v_68);
    if (!car_legal(v_68)) v_68 = carerror(v_68); else
    v_68 = car(v_68);
    if (equal(v_69, v_68)) goto v_47;
    else goto v_43;
v_47:
    v_69 = stack[-2];
    v_68 = stack[-3];
    if (!car_legal(v_68)) v_68 = cdrerror(v_68); else
    v_68 = cdr(v_68);
    if (!car_legal(v_68)) v_68 = carerror(v_68); else
    v_68 = car(v_68);
    {   LispObject fn = basic_elt(env, 3); // setcar
    v_68 = (*qfn2(fn))(fn, v_69, v_68);
    }
    env = stack[-4];
    goto v_41;
v_43:
    stack[0] = stack[-3];
    v_69 = stack[-1];
    v_68 = stack[-3];
    if (!car_legal(v_68)) v_68 = cdrerror(v_68); else
    v_68 = cdr(v_68);
    v_68 = cons(v_69, v_68);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 4); // setcdr
    v_68 = (*qfn2(fn))(fn, stack[0], v_68);
    }
    env = stack[-4];
    goto v_41;
v_41:
    v_68 = stack[-2];
    if (!car_legal(v_68)) v_68 = cdrerror(v_68); else
    v_68 = cdr(v_68);
    if (!car_legal(v_68)) v_68 = cdrerror(v_68); else
    v_68 = cdr(v_68);
    stack[-2] = v_68;
    goto v_11;
v_10:
    v_68 = nil;
    return onevalue(v_68);
}



// Code for cut!:ep

static LispObject CC_cutTep(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_63, v_64;
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
    v_64 = stack[-2];
    v_63 = basic_elt(env, 1); // !:rd!:
    if (!consp(v_64)) goto v_16;
    v_64 = car(v_64);
    if (v_64 == v_63) goto v_15;
    else goto v_16;
v_15:
    v_63 = stack[-2];
    if (!car_legal(v_63)) v_63 = cdrerror(v_63); else
    v_63 = cdr(v_63);
    v_63 = (consp(v_63) ? nil : lisp_true);
    v_63 = (v_63 == nil ? lisp_true : nil);
    goto v_14;
v_16:
    v_63 = nil;
    goto v_14;
    v_63 = nil;
v_14:
    if (v_63 == nil) goto v_12;
    v_63 = stack[-1];
    v_63 = integerp(v_63);
    goto v_10;
v_12:
    v_63 = nil;
    goto v_10;
    v_63 = nil;
v_10:
    if (v_63 == nil) goto v_8;
    v_64 = stack[-1];
    v_63 = stack[-2];
    if (!car_legal(v_63)) v_63 = cdrerror(v_63); else
    v_63 = cdr(v_63);
    if (!car_legal(v_63)) v_63 = cdrerror(v_63); else
    v_63 = cdr(v_63);
    v_64 = difference2(v_64, v_63);
    env = stack[-4];
    stack[-1] = v_64;
    v_63 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_63 = static_cast<LispObject>(lesseq2(v_64, v_63));
    v_63 = v_63 ? lisp_true : nil;
    env = stack[-4];
    if (v_63 == nil) goto v_35;
    v_63 = stack[-2];
    goto v_33;
v_35:
    stack[-3] = basic_elt(env, 1); // !:rd!:
    v_63 = stack[-2];
    if (!car_legal(v_63)) v_63 = cdrerror(v_63); else
    v_63 = cdr(v_63);
    if (!car_legal(v_63)) stack[0] = carerror(v_63); else
    stack[0] = car(v_63);
    v_63 = stack[-1];
    v_63 = negate(v_63);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 2); // ashift
    stack[0] = (*qfn2(fn))(fn, stack[0], v_63);
    }
    env = stack[-4];
    v_63 = stack[-2];
    if (!car_legal(v_63)) v_63 = cdrerror(v_63); else
    v_63 = cdr(v_63);
    if (!car_legal(v_63)) v_64 = cdrerror(v_63); else
    v_64 = cdr(v_63);
    v_63 = stack[-1];
    v_63 = plus2(v_64, v_63);
    {
        LispObject v_69 = stack[-3];
        LispObject v_70 = stack[0];
        return list2star(v_69, v_70, v_63);
    }
    v_63 = nil;
v_33:
    goto v_6;
v_8:
    v_63 = basic_elt(env, 0); // cut!:ep
    {
        LispObject fn = basic_elt(env, 3); // bflerrmsg
        return (*qfn1(fn))(fn, v_63);
    }
    v_63 = nil;
v_6:
    return onevalue(v_63);
}



// Code for splitcomplex

static LispObject CC_splitcomplex(LispObject env,
                         LispObject v_2)
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
    v_47 = qvalue(basic_elt(env, 1)); // kord!*
    v_46 = lisp_true;
// Binding kord!*
// FLUIDBIND: reloadenv=4 litvec-offset=1 saveloc=3
{   bind_fluid_stack bind_fluid_var(-4, 1, -3);
    setvalue(basic_elt(env, 1), v_47); // kord!*
// Binding !*exp
// FLUIDBIND: reloadenv=4 litvec-offset=2 saveloc=2
{   bind_fluid_stack bind_fluid_var(-4, 2, -2);
    setvalue(basic_elt(env, 2), v_46); // !*exp
    v_46 = basic_elt(env, 3); // i
    if (!symbolp(v_46)) v_46 = nil;
    else { v_46 = qfastgets(v_46);
           if (v_46 != nil) { v_46 = elt(v_46, 56); // idvalfn
#ifdef RECORD_GET
             if (v_46 != SPID_NOPROP)
                record_get(elt(fastget_names, 56), 1);
             else record_get(elt(fastget_names, 56), 0),
                v_46 = nil; }
           else record_get(elt(fastget_names, 56), 0); }
#else
             if (v_46 == SPID_NOPROP) v_46 = nil; }}
#endif
    if (v_46 == nil) goto v_16;
    v_46 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // expand!-imrepart
    v_46 = (*qfn1(fn))(fn, v_46);
    }
    env = stack[-4];
    goto v_14;
v_16:
    v_47 = basic_elt(env, 3); // i
    v_46 = stack[0];
    v_46 = Lsmemq(nil, v_47, v_46);
    env = stack[-4];
    if (v_46 == nil) goto v_26;
    v_47 = basic_elt(env, 3); // i
    v_46 = qvalue(basic_elt(env, 1)); // kord!*
    v_46 = cons(v_47, v_46);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 5); // setkorder
    v_46 = (*qfn1(fn))(fn, v_46);
    }
    env = stack[-4];
    v_46 = stack[0];
    {   LispObject fn = basic_elt(env, 6); // reorder
    v_46 = (*qfn1(fn))(fn, v_46);
    }
    env = stack[-4];
    stack[0] = v_46;
    goto v_24;
v_26:
v_24:
    v_46 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // expand!-imrepart
    v_46 = (*qfn1(fn))(fn, v_46);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 7); // subs2
    v_46 = (*qfn1(fn))(fn, v_46);
    }
    env = stack[-4];
    goto v_14;
    v_46 = nil;
v_14:
    stack[-1] = v_46;
    v_46 = stack[-1];
    {   LispObject fn = basic_elt(env, 8); // take!-realpart
    stack[0] = (*qfn1(fn))(fn, v_46);
    }
    env = stack[-4];
    v_46 = stack[-1];
    {   LispObject fn = basic_elt(env, 9); // take!-impart
    v_46 = (*qfn1(fn))(fn, v_46);
    }
    env = stack[-4];
    v_46 = cons(stack[0], v_46);
    ;}  // end of a binding scope
    ;}  // end of a binding scope
    return onevalue(v_46);
}



// Code for fs!:prin1

static LispObject CC_fsTprin1(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_107, v_108;
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
    v_107 = lisp_true;
    stack[-3] = v_107;
    v_108 = stack[0];
    v_107 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_108 = Lgetv(nil, v_108, v_107);
    env = stack[-4];
    v_107 = basic_elt(env, 1); // (1 . 1)
    if (equal(v_108, v_107)) goto v_13;
    v_107 = basic_elt(env, 2); // "("
    {   LispObject fn = basic_elt(env, 10); // prin2!*
    v_107 = (*qfn1(fn))(fn, v_107);
    }
    env = stack[-4];
    v_108 = stack[0];
    v_107 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_107 = Lgetv(nil, v_108, v_107);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 11); // sqprint
    v_107 = (*qfn1(fn))(fn, v_107);
    }
    env = stack[-4];
    v_107 = basic_elt(env, 3); // ")"
    {   LispObject fn = basic_elt(env, 10); // prin2!*
    v_107 = (*qfn1(fn))(fn, v_107);
    }
    env = stack[-4];
    goto v_11;
v_13:
v_11:
    v_107 = stack[0];
    {   LispObject fn = basic_elt(env, 12); // fs!:null!-angle
    v_107 = (*qfn1(fn))(fn, v_107);
    }
    env = stack[-4];
    if (v_107 == nil) goto v_28;
    else goto v_29;
v_28:
    v_108 = stack[0];
    v_107 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_107 = Lgetv(nil, v_108, v_107);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 10); // prin2!*
    v_107 = (*qfn1(fn))(fn, v_107);
    }
    env = stack[-4];
    v_107 = basic_elt(env, 4); // "["
    {   LispObject fn = basic_elt(env, 10); // prin2!*
    v_107 = (*qfn1(fn))(fn, v_107);
    }
    env = stack[-4];
    v_108 = stack[0];
    v_107 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_107 = Lgetv(nil, v_108, v_107);
    env = stack[-4];
    stack[-2] = v_107;
    v_107 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[0] = v_107;
v_44:
    v_108 = static_cast<LispObject>(112)+TAG_FIXNUM; // 7
    v_107 = stack[0];
    v_107 = difference2(v_108, v_107);
    env = stack[-4];
    v_107 = Lminusp(nil, v_107);
    env = stack[-4];
    if (v_107 == nil) goto v_49;
    goto v_43;
v_49:
    v_108 = stack[-2];
    v_107 = stack[0];
    v_108 = Lgetv(nil, v_108, v_107);
    env = stack[-4];
    stack[-1] = v_108;
    v_107 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_108 == v_107) goto v_58;
    v_108 = stack[-1];
    v_107 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_107 = static_cast<LispObject>(lessp2(v_108, v_107));
    v_107 = v_107 ? lisp_true : nil;
    env = stack[-4];
    if (v_107 == nil) goto v_66;
    v_107 = lisp_true;
    stack[-3] = v_107;
    v_107 = basic_elt(env, 5); // "-"
    {   LispObject fn = basic_elt(env, 10); // prin2!*
    v_107 = (*qfn1(fn))(fn, v_107);
    }
    env = stack[-4];
    v_107 = stack[-1];
    v_107 = negate(v_107);
    env = stack[-4];
    stack[-1] = v_107;
    goto v_64;
v_66:
v_64:
    v_107 = stack[-3];
    if (v_107 == nil) goto v_77;
    else goto v_78;
v_77:
    v_107 = basic_elt(env, 6); // "+"
    {   LispObject fn = basic_elt(env, 10); // prin2!*
    v_107 = (*qfn1(fn))(fn, v_107);
    }
    env = stack[-4];
    goto v_76;
v_78:
v_76:
    v_108 = stack[-1];
    v_107 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_108 == v_107) goto v_85;
    v_107 = stack[-1];
    {   LispObject fn = basic_elt(env, 10); // prin2!*
    v_107 = (*qfn1(fn))(fn, v_107);
    }
    env = stack[-4];
    goto v_83;
v_85:
v_83:
    v_107 = nil;
    stack[-3] = v_107;
    v_108 = qvalue(basic_elt(env, 7)); // fourier!-name!*
    v_107 = stack[0];
    v_107 = Lgetv(nil, v_108, v_107);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 10); // prin2!*
    v_107 = (*qfn1(fn))(fn, v_107);
    }
    env = stack[-4];
    goto v_56;
v_58:
v_56:
    v_107 = stack[0];
    v_107 = add1(v_107);
    env = stack[-4];
    stack[0] = v_107;
    goto v_44;
v_43:
    v_107 = basic_elt(env, 8); // "]"
    {   LispObject fn = basic_elt(env, 10); // prin2!*
    v_107 = (*qfn1(fn))(fn, v_107);
    }
    goto v_27;
v_29:
    v_108 = stack[0];
    v_107 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_108 = Lgetv(nil, v_108, v_107);
    env = stack[-4];
    v_107 = basic_elt(env, 1); // (1 . 1)
    if (equal(v_108, v_107)) goto v_99;
    else goto v_100;
v_99:
    v_107 = basic_elt(env, 9); // "1"
    {   LispObject fn = basic_elt(env, 10); // prin2!*
    v_107 = (*qfn1(fn))(fn, v_107);
    }
    goto v_27;
v_100:
v_27:
    v_107 = nil;
    return onevalue(v_107);
}



// Code for mo_lcm

static LispObject CC_mo_lcm(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_63, v_64;
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
    v_64 = v_3;
    v_63 = v_2;
// end of prologue
    stack[-2] = nil;
    if (!car_legal(v_63)) v_63 = carerror(v_63); else
    v_63 = car(v_63);
    stack[-1] = v_63;
    v_63 = v_64;
    if (!car_legal(v_63)) v_63 = carerror(v_63); else
    v_63 = car(v_63);
    stack[0] = v_63;
v_16:
    v_63 = stack[-1];
    if (v_63 == nil) goto v_19;
    v_63 = stack[0];
    if (v_63 == nil) goto v_19;
    goto v_20;
v_19:
    goto v_15;
v_20:
    v_63 = stack[-1];
    if (!car_legal(v_63)) v_64 = carerror(v_63); else
    v_64 = car(v_63);
    v_63 = stack[0];
    if (!car_legal(v_63)) v_63 = carerror(v_63); else
    v_63 = car(v_63);
    if ((static_cast<std::intptr_t>(v_64) > static_cast<std::intptr_t>(v_63))) goto v_29;
    else goto v_30;
v_29:
    v_63 = stack[-1];
    if (!car_legal(v_63)) v_63 = carerror(v_63); else
    v_63 = car(v_63);
    v_64 = v_63;
    goto v_28;
v_30:
    v_63 = stack[0];
    if (!car_legal(v_63)) v_63 = carerror(v_63); else
    v_63 = car(v_63);
    v_64 = v_63;
    goto v_28;
    v_64 = nil;
v_28:
    v_63 = stack[-2];
    v_63 = cons(v_64, v_63);
    env = stack[-3];
    stack[-2] = v_63;
    v_63 = stack[-1];
    if (!car_legal(v_63)) v_63 = cdrerror(v_63); else
    v_63 = cdr(v_63);
    stack[-1] = v_63;
    v_63 = stack[0];
    if (!car_legal(v_63)) v_63 = cdrerror(v_63); else
    v_63 = cdr(v_63);
    stack[0] = v_63;
    goto v_16;
v_15:
    v_63 = stack[-2];
    v_64 = Lnreverse(nil, v_63);
    env = stack[-3];
    v_63 = stack[-1];
    if (v_63 == nil) goto v_52;
    v_63 = stack[-1];
    goto v_50;
v_52:
    v_63 = stack[0];
    goto v_50;
    v_63 = nil;
v_50:
    v_63 = Lappend_2(nil, v_64, v_63);
    env = stack[-3];
    stack[-2] = v_63;
    v_63 = stack[-2];
    {   LispObject fn = basic_elt(env, 1); // mo!=shorten
    stack[0] = (*qfn1(fn))(fn, v_63);
    }
    env = stack[-3];
    v_63 = stack[-2];
    {   LispObject fn = basic_elt(env, 2); // mo!=deglist
    v_63 = (*qfn1(fn))(fn, v_63);
    }
    {
        LispObject v_68 = stack[0];
        return cons(v_68, v_63);
    }
    return onevalue(v_63);
}



// Code for numlist_ordp

static LispObject CC_numlist_ordp(LispObject env,
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
    v_9 = basic_elt(env, 1); // lambda_ygm6np4pcqv31
    {
        LispObject fn = basic_elt(env, 2); // cons_ordp
        return (*qfn3(fn))(fn, v_11, v_10, v_9);
    }
}



// Code for lambda_ygm6np4pcqv31

static LispObject CC_lambda_ygm6np4pcqv31(LispObject env,
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
    v_8 = v_3;
    v_9 = v_2;
// end of prologue
        return Lleq_2(nil, v_9, v_8);
}



// Code for remlocs

static LispObject CC_remlocs(LispObject env,
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    v_71 = v_2;
// end of prologue
    v_70 = qvalue(basic_elt(env, 1)); // !*globals
    if (v_70 == nil) goto v_10;
    v_70 = v_71;
    stack[-2] = v_70;
v_15:
    v_70 = stack[-2];
    if (v_70 == nil) goto v_19;
    else goto v_20;
v_19:
    goto v_14;
v_20:
    v_70 = stack[-2];
    if (!car_legal(v_70)) v_70 = carerror(v_70); else
    v_70 = car(v_70);
    stack[-1] = v_70;
    v_71 = stack[-1];
    v_70 = qvalue(basic_elt(env, 2)); // locls!*
    v_70 = Lassoc(nil, v_71, v_70);
    stack[-3] = v_70;
    v_70 = stack[-3];
    if (v_70 == nil) goto v_31;
    else goto v_32;
v_31:
    v_70 = basic_elt(env, 3); // begin
    {   LispObject fn = basic_elt(env, 5); // getd
    v_70 = (*qfn1(fn))(fn, v_70);
    }
    env = stack[-4];
    if (v_70 == nil) goto v_37;
    v_71 = basic_elt(env, 4); // " Lvar confused"
    v_70 = stack[-1];
    v_70 = list2(v_71, v_70);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 6); // rederr
    v_70 = (*qfn1(fn))(fn, v_70);
    }
    env = stack[-4];
    goto v_35;
v_37:
    stack[0] = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_71 = basic_elt(env, 4); // " Lvar confused"
    v_70 = stack[-1];
    v_70 = list2(v_71, v_70);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 7); // error
    v_70 = (*qfn2(fn))(fn, stack[0], v_70);
    }
    env = stack[-4];
    goto v_35;
v_35:
    goto v_30;
v_32:
v_30:
    v_70 = stack[-3];
    if (!car_legal(v_70)) v_70 = cdrerror(v_70); else
    v_70 = cdr(v_70);
    if (!car_legal(v_70)) v_70 = cdrerror(v_70); else
    v_70 = cdr(v_70);
    if (v_70 == nil) goto v_54;
    v_71 = stack[-3];
    v_70 = stack[-3];
    if (!car_legal(v_70)) v_70 = cdrerror(v_70); else
    v_70 = cdr(v_70);
    if (!car_legal(v_70)) v_70 = cdrerror(v_70); else
    v_70 = cdr(v_70);
    if (!car_legal(v_71)) rplacd_fails(v_71);
    setcdr(v_71, v_70);
    goto v_52;
v_54:
    v_71 = stack[-3];
    v_70 = qvalue(basic_elt(env, 2)); // locls!*
    {   LispObject fn = basic_elt(env, 8); // efface1
    v_70 = (*qfn2(fn))(fn, v_71, v_70);
    }
    env = stack[-4];
    setvalue(basic_elt(env, 2), v_70); // locls!*
    goto v_52;
v_52:
    v_70 = stack[-2];
    if (!car_legal(v_70)) v_70 = cdrerror(v_70); else
    v_70 = cdr(v_70);
    stack[-2] = v_70;
    goto v_15;
v_14:
    goto v_8;
v_10:
v_8:
    v_70 = nil;
    return onevalue(v_70);
}



// Code for revalx

static LispObject CC_revalx(LispObject env,
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
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_27 = v_2;
// end of prologue
    v_26 = v_27;
    if (!consp(v_26)) goto v_12;
    v_26 = v_27;
    if (!car_legal(v_26)) v_26 = carerror(v_26); else
    v_26 = car(v_26);
    v_26 = (consp(v_26) ? nil : lisp_true);
    v_26 = (v_26 == nil ? lisp_true : nil);
    goto v_10;
v_12:
    v_26 = nil;
    goto v_10;
    v_26 = nil;
v_10:
    if (v_26 == nil) goto v_8;
    v_26 = v_27;
    {   LispObject fn = basic_elt(env, 1); // prepf
    v_26 = (*qfn1(fn))(fn, v_26);
    }
    env = stack[0];
    goto v_6;
v_8:
    v_26 = v_27;
    goto v_6;
    v_26 = nil;
v_6:
    {
        LispObject fn = basic_elt(env, 2); // reval
        return (*qfn1(fn))(fn, v_26);
    }
}



// Code for rl_subalchk

static LispObject CC_rl_subalchk(LispObject env,
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
    stack[0] = qvalue(basic_elt(env, 1)); // rl_subalchk!*
    v_8 = ncons(v_8);
    env = stack[-1];
    {
        LispObject v_10 = stack[0];
        LispObject fn = basic_elt(env, 2); // apply
        return (*qfn2(fn))(fn, v_10, v_8);
    }
}



// Code for pasf_zcong

static LispObject CC_pasf_zcong(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_166, v_167, v_168;
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
    v_167 = v_2;
// end of prologue
    v_166 = v_167;
    v_166 = Lconsp(nil, v_166);
    env = stack[0];
    if (v_166 == nil) goto v_7;
    v_166 = v_167;
    if (!car_legal(v_166)) v_166 = carerror(v_166); else
    v_166 = car(v_166);
    v_166 = Lconsp(nil, v_166);
    env = stack[0];
    if (v_166 == nil) goto v_7;
    v_166 = v_167;
    if (!car_legal(v_166)) v_166 = carerror(v_166); else
    v_166 = car(v_166);
    if (!car_legal(v_166)) v_168 = carerror(v_166); else
    v_168 = car(v_166);
    v_166 = basic_elt(env, 1); // (cong ncong)
    v_166 = Lmemq(nil, v_168, v_166);
    if (v_166 == nil) goto v_7;
    v_166 = v_167;
    if (!car_legal(v_166)) v_166 = carerror(v_166); else
    v_166 = car(v_166);
    if (!car_legal(v_166)) v_166 = cdrerror(v_166); else
    v_166 = cdr(v_166);
    if (v_166 == nil) goto v_24;
    else goto v_25;
v_24:
    v_168 = v_167;
    v_166 = basic_elt(env, 2); // true
    if (v_168 == v_166) goto v_40;
    else goto v_41;
v_40:
    v_166 = lisp_true;
    goto v_39;
v_41:
    v_168 = v_167;
    v_166 = basic_elt(env, 3); // false
    v_166 = (v_168 == v_166 ? lisp_true : nil);
    goto v_39;
    v_166 = nil;
v_39:
    if (v_166 == nil) goto v_37;
    v_166 = v_167;
    v_168 = v_166;
    goto v_35;
v_37:
    v_166 = v_167;
    if (!car_legal(v_166)) v_166 = carerror(v_166); else
    v_166 = car(v_166);
    v_166 = Lconsp(nil, v_166);
    env = stack[0];
    if (v_166 == nil) goto v_52;
    v_166 = v_167;
    if (!car_legal(v_166)) v_166 = carerror(v_166); else
    v_166 = car(v_166);
    if (!car_legal(v_166)) v_166 = carerror(v_166); else
    v_166 = car(v_166);
    v_168 = v_166;
    goto v_35;
v_52:
    v_166 = v_167;
    if (!car_legal(v_166)) v_166 = carerror(v_166); else
    v_166 = car(v_166);
    v_168 = v_166;
    goto v_35;
    v_168 = nil;
v_35:
    v_166 = basic_elt(env, 4); // cong
    if (v_168 == v_166) goto v_32;
    else goto v_33;
v_32:
    v_166 = basic_elt(env, 5); // equal
    v_168 = v_166;
    goto v_31;
v_33:
    v_166 = basic_elt(env, 6); // neq
    v_168 = v_166;
    goto v_31;
    v_168 = nil;
v_31:
    v_166 = v_167;
    if (!car_legal(v_166)) v_166 = cdrerror(v_166); else
    v_166 = cdr(v_166);
    if (!car_legal(v_166)) v_167 = carerror(v_166); else
    v_167 = car(v_166);
    v_166 = nil;
    return list3(v_168, v_167, v_166);
v_25:
    v_166 = v_167;
    if (!car_legal(v_166)) v_166 = cdrerror(v_166); else
    v_166 = cdr(v_166);
    if (!car_legal(v_166)) v_166 = carerror(v_166); else
    v_166 = car(v_166);
    if (v_166 == nil) goto v_76;
    else goto v_77;
v_76:
    v_168 = v_167;
    v_166 = basic_elt(env, 2); // true
    if (v_168 == v_166) goto v_87;
    else goto v_88;
v_87:
    v_166 = lisp_true;
    goto v_86;
v_88:
    v_168 = v_167;
    v_166 = basic_elt(env, 3); // false
    v_166 = (v_168 == v_166 ? lisp_true : nil);
    goto v_86;
    v_166 = nil;
v_86:
    if (v_166 == nil) goto v_84;
    v_166 = v_167;
    v_168 = v_166;
    goto v_82;
v_84:
    v_166 = v_167;
    if (!car_legal(v_166)) v_166 = carerror(v_166); else
    v_166 = car(v_166);
    v_166 = Lconsp(nil, v_166);
    env = stack[0];
    if (v_166 == nil) goto v_99;
    v_166 = v_167;
    if (!car_legal(v_166)) v_166 = carerror(v_166); else
    v_166 = car(v_166);
    if (!car_legal(v_166)) v_166 = carerror(v_166); else
    v_166 = car(v_166);
    v_168 = v_166;
    goto v_82;
v_99:
    v_166 = v_167;
    if (!car_legal(v_166)) v_166 = carerror(v_166); else
    v_166 = car(v_166);
    v_168 = v_166;
    goto v_82;
    v_168 = nil;
v_82:
    v_166 = basic_elt(env, 4); // cong
    v_166 = (v_168 == v_166 ? lisp_true : nil);
    goto v_75;
v_77:
    v_166 = nil;
    goto v_75;
    v_166 = nil;
v_75:
    if (v_166 == nil) goto v_73;
    v_166 = basic_elt(env, 2); // true
    goto v_23;
v_73:
    v_166 = v_167;
    if (!car_legal(v_166)) v_166 = cdrerror(v_166); else
    v_166 = cdr(v_166);
    if (!car_legal(v_166)) v_166 = carerror(v_166); else
    v_166 = car(v_166);
    if (v_166 == nil) goto v_120;
    else goto v_121;
v_120:
    v_168 = v_167;
    v_166 = basic_elt(env, 2); // true
    if (v_168 == v_166) goto v_131;
    else goto v_132;
v_131:
    v_166 = lisp_true;
    goto v_130;
v_132:
    v_168 = v_167;
    v_166 = basic_elt(env, 3); // false
    v_166 = (v_168 == v_166 ? lisp_true : nil);
    goto v_130;
    v_166 = nil;
v_130:
    if (v_166 == nil) goto v_128;
    v_166 = v_167;
    v_168 = v_166;
    goto v_126;
v_128:
    v_166 = v_167;
    if (!car_legal(v_166)) v_166 = carerror(v_166); else
    v_166 = car(v_166);
    v_166 = Lconsp(nil, v_166);
    env = stack[0];
    if (v_166 == nil) goto v_143;
    v_166 = v_167;
    if (!car_legal(v_166)) v_166 = carerror(v_166); else
    v_166 = car(v_166);
    if (!car_legal(v_166)) v_166 = carerror(v_166); else
    v_166 = car(v_166);
    v_168 = v_166;
    goto v_126;
v_143:
    v_166 = v_167;
    if (!car_legal(v_166)) v_166 = carerror(v_166); else
    v_166 = car(v_166);
    v_168 = v_166;
    goto v_126;
    v_168 = nil;
v_126:
    v_166 = basic_elt(env, 7); // ncong
    v_166 = (v_168 == v_166 ? lisp_true : nil);
    goto v_119;
v_121:
    v_166 = nil;
    goto v_119;
    v_166 = nil;
v_119:
    if (v_166 == nil) goto v_117;
    v_166 = basic_elt(env, 3); // false
    goto v_23;
v_117:
    v_166 = v_167;
    goto v_23;
    v_166 = nil;
v_23:
    goto v_5;
v_7:
    v_166 = v_167;
    goto v_5;
    v_166 = nil;
v_5:
    return onevalue(v_166);
}



// Code for vdp_setsugar

static LispObject CC_vdp_setsugar(LispObject env,
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
    v_19 = v_2;
// end of prologue
    v_18 = qvalue(basic_elt(env, 1)); // !*cgbsugar
    if (v_18 == nil) goto v_7;
    else goto v_8;
v_7:
    v_17 = v_19;
    goto v_6;
v_8:
    v_18 = basic_elt(env, 2); // sugar
    {
        LispObject fn = basic_elt(env, 3); // vdp_putprop
        return (*qfn3(fn))(fn, v_19, v_18, v_17);
    }
    v_17 = nil;
v_6:
    return onevalue(v_17);
}



// Code for ps!:prepfn!:

static LispObject CC_psTprepfnT(LispObject env,
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



// Code for ps!:putv

static LispObject CC_psTputv(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_40, v_41, v_42;
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
    v_42 = v_2;
// end of prologue
    v_41 = v_42;
    v_40 = basic_elt(env, 1); // !:ps!:
    if (!consp(v_41)) goto v_9;
    v_41 = car(v_41);
    if (v_41 == v_40) goto v_8;
    else goto v_9;
v_8:
    v_40 = v_42;
    if (!car_legal(v_40)) v_40 = cdrerror(v_40); else
    v_40 = cdr(v_40);
    if (symbolp(v_40)) goto v_15;
    else goto v_16;
v_15:
    v_40 = v_42;
    if (!car_legal(v_40)) v_40 = cdrerror(v_40); else
    v_40 = cdr(v_40);
    {   LispObject fn = basic_elt(env, 4); // eval
    v_42 = (*qfn1(fn))(fn, v_40);
    }
    v_41 = stack[-1];
    v_40 = stack[0];
        return Lputv(nil, v_42, v_41, v_40);
v_16:
    v_40 = v_42;
    if (!car_legal(v_40)) v_42 = cdrerror(v_40); else
    v_42 = cdr(v_40);
    v_41 = stack[-1];
    v_40 = stack[0];
        return Lputv(nil, v_42, v_41, v_40);
    v_40 = nil;
    goto v_7;
v_9:
    stack[-1] = basic_elt(env, 2); // tps
    stack[0] = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_40 = basic_elt(env, 3); // "PS:PUTV: not a ps"
    v_41 = v_42;
    v_40 = list2(v_40, v_41);
    env = stack[-2];
    {
        LispObject v_45 = stack[-1];
        LispObject v_46 = stack[0];
        LispObject fn = basic_elt(env, 5); // rerror
        return (*qfn3(fn))(fn, v_45, v_46, v_40);
    }
    v_40 = nil;
v_7:
    return onevalue(v_40);
}



// Code for mktails

static LispObject CC_mktails(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    v_48 = v_4;
    stack[-2] = v_3;
    v_49 = v_2;
// end of prologue
    stack[0] = nil;
    v_47 = v_49;
    if (v_47 == nil) goto v_14;
    else goto v_15;
v_14:
    v_47 = nil;
    return cons(v_47, v_48);
v_15:
    v_47 = v_49;
    stack[-3] = v_47;
    v_47 = v_48;
    stack[-1] = v_47;
v_24:
    v_47 = stack[-3];
    if (v_47 == nil) goto v_27;
    else goto v_28;
v_27:
    goto v_23;
v_28:
    v_47 = stack[-3];
    if (!car_legal(v_47)) v_49 = carerror(v_47); else
    v_49 = car(v_47);
    v_48 = stack[-2];
    v_47 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // mktails1
    v_47 = (*qfn3(fn))(fn, v_49, v_48, v_47);
    }
    env = stack[-4];
    v_48 = v_47;
    v_47 = v_48;
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    stack[-1] = v_47;
    v_47 = v_48;
    if (!car_legal(v_47)) v_48 = carerror(v_47); else
    v_48 = car(v_47);
    v_47 = stack[0];
    v_47 = Lappend_2(nil, v_48, v_47);
    env = stack[-4];
    stack[0] = v_47;
    v_47 = stack[-3];
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    stack[-3] = v_47;
    goto v_24;
v_23:
    v_48 = stack[0];
    v_47 = stack[-1];
    return cons(v_48, v_47);
    return onevalue(v_47);
}



// Code for impartf

static LispObject CC_impartf(LispObject env,
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_89 = basic_elt(env, 1); // i
    v_88 = qvalue(basic_elt(env, 2)); // kord!*
    v_88 = cons(v_89, v_88);
    env = stack[-4];
// Binding kord!*
// FLUIDBIND: reloadenv=4 litvec-offset=2 saveloc=3
{   bind_fluid_stack bind_fluid_var(-4, 2, -3);
    setvalue(basic_elt(env, 2), v_88); // kord!*
    v_88 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // reorder
    v_88 = (*qfn1(fn))(fn, v_88);
    }
    env = stack[-4];
    stack[-2] = v_88;
    v_88 = stack[-2];
    if (!consp(v_88)) goto v_18;
    else goto v_19;
v_18:
    v_88 = lisp_true;
    goto v_17;
v_19:
    v_88 = stack[-2];
    if (!car_legal(v_88)) v_88 = carerror(v_88); else
    v_88 = car(v_88);
    v_88 = (consp(v_88) ? nil : lisp_true);
    goto v_17;
    v_88 = nil;
v_17:
    if (v_88 == nil) goto v_15;
    v_88 = stack[-2];
    if (!consp(v_88)) goto v_29;
    else goto v_30;
v_29:
    v_88 = nil;
    goto v_28;
v_30:
    v_88 = stack[-2];
    if (!car_legal(v_88)) v_89 = carerror(v_88); else
    v_89 = car(v_88);
    v_88 = basic_elt(env, 3); // cmpxfn
    v_88 = get(v_89, v_88);
    env = stack[-4];
    if (v_88 == nil) goto v_34;
    v_88 = stack[-2];
    if (!car_legal(v_88)) stack[-1] = carerror(v_88); else
    stack[-1] = car(v_88);
    v_88 = stack[-2];
    if (!car_legal(v_88)) v_88 = cdrerror(v_88); else
    v_88 = cdr(v_88);
    if (!car_legal(v_88)) stack[0] = cdrerror(v_88); else
    stack[0] = cdr(v_88);
    v_88 = stack[-2];
    if (!car_legal(v_88)) v_88 = carerror(v_88); else
    v_88 = car(v_88);
    if (!symbolp(v_88)) v_89 = nil;
    else { v_89 = qfastgets(v_88);
           if (v_89 != nil) { v_89 = elt(v_89, 34); // i2d
#ifdef RECORD_GET
             if (v_89 != SPID_NOPROP)
                record_get(elt(fastget_names, 34), 1);
             else record_get(elt(fastget_names, 34), 0),
                v_89 = nil; }
           else record_get(elt(fastget_names, 34), 0); }
#else
             if (v_89 == SPID_NOPROP) v_89 = nil; }}
#endif
    v_88 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_88 = Lapply1(nil, v_89, v_88);
    env = stack[-4];
    if (!car_legal(v_88)) v_88 = cdrerror(v_88); else
    v_88 = cdr(v_88);
    if (!car_legal(v_88)) v_88 = carerror(v_88); else
    v_88 = car(v_88);
    v_88 = list2star(stack[-1], stack[0], v_88);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 5); // int!-equiv!-chk
    v_88 = (*qfn1(fn))(fn, v_88);
    }
    goto v_28;
v_34:
    v_88 = nil;
    goto v_28;
    v_88 = nil;
v_28:
    goto v_13;
v_15:
    v_88 = stack[-2];
    if (!car_legal(v_88)) v_88 = carerror(v_88); else
    v_88 = car(v_88);
    if (!car_legal(v_88)) v_88 = carerror(v_88); else
    v_88 = car(v_88);
    if (!car_legal(v_88)) v_89 = carerror(v_88); else
    v_89 = car(v_88);
    v_88 = basic_elt(env, 1); // i
    if (v_89 == v_88) goto v_56;
    else goto v_57;
v_56:
    v_88 = stack[-2];
    if (!car_legal(v_88)) v_88 = carerror(v_88); else
    v_88 = car(v_88);
    if (!car_legal(v_88)) stack[0] = cdrerror(v_88); else
    stack[0] = cdr(v_88);
    v_88 = stack[-2];
    if (!car_legal(v_88)) v_88 = cdrerror(v_88); else
    v_88 = cdr(v_88);
    {   LispObject fn = basic_elt(env, 0); // impartf
    v_88 = (*qfn1(fn))(fn, v_88);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 6); // addf
    v_88 = (*qfn2(fn))(fn, stack[0], v_88);
    }
    goto v_13;
v_57:
    v_88 = stack[-2];
    if (!car_legal(v_88)) v_88 = carerror(v_88); else
    v_88 = car(v_88);
    if (!car_legal(v_88)) v_89 = carerror(v_88); else
    v_89 = car(v_88);
    v_88 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_88 = cons(v_89, v_88);
    env = stack[-4];
    stack[0] = ncons(v_88);
    env = stack[-4];
    v_88 = stack[-2];
    if (!car_legal(v_88)) v_88 = carerror(v_88); else
    v_88 = car(v_88);
    if (!car_legal(v_88)) v_88 = cdrerror(v_88); else
    v_88 = cdr(v_88);
    {   LispObject fn = basic_elt(env, 0); // impartf
    v_88 = (*qfn1(fn))(fn, v_88);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 7); // multf
    stack[0] = (*qfn2(fn))(fn, stack[0], v_88);
    }
    env = stack[-4];
    v_88 = stack[-2];
    if (!car_legal(v_88)) v_88 = cdrerror(v_88); else
    v_88 = cdr(v_88);
    {   LispObject fn = basic_elt(env, 0); // impartf
    v_88 = (*qfn1(fn))(fn, v_88);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 6); // addf
    v_88 = (*qfn2(fn))(fn, stack[0], v_88);
    }
    goto v_13;
    v_88 = nil;
v_13:
    ;}  // end of a binding scope
    return onevalue(v_88);
}



// Code for riv_mk

static LispObject CC_riv_mk(LispObject env,
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
    v_11 = basic_elt(env, 1); // iv
    return list3(v_11, v_10, v_9);
}



// Code for aex_bvarl

static LispObject CC_aex_bvarl(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // aex_ctx
    v_7 = (*qfn1(fn))(fn, v_7);
    }
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // ctx_idl
        return (*qfn1(fn))(fn, v_7);
    }
}



// Code for gcref_mkgraph!-tgf

static LispObject CC_gcref_mkgraphKtgf(LispObject env,
                         LispObject v_2)
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
    v_46 = stack[0];
    stack[-1] = v_46;
v_7:
    v_46 = stack[-1];
    if (v_46 == nil) goto v_11;
    else goto v_12;
v_11:
    goto v_6;
v_12:
    v_46 = stack[-1];
    if (!car_legal(v_46)) v_46 = carerror(v_46); else
    v_46 = car(v_46);
    {   LispObject fn = basic_elt(env, 3); // gcref_mknode!-tgf
    v_46 = (*qfn1(fn))(fn, v_46);
    }
    env = stack[-2];
    v_46 = stack[-1];
    if (!car_legal(v_46)) v_46 = cdrerror(v_46); else
    v_46 = cdr(v_46);
    stack[-1] = v_46;
    goto v_7;
v_6:
    v_46 = basic_elt(env, 1); // "#"
    {   LispObject fn = basic_elt(env, 4); // prin2t
    v_46 = (*qfn1(fn))(fn, v_46);
    }
    env = stack[-2];
    v_46 = stack[0];
    stack[-1] = v_46;
v_27:
    v_46 = stack[-1];
    if (v_46 == nil) goto v_31;
    else goto v_32;
v_31:
    v_46 = nil;
    goto v_26;
v_32:
    v_46 = stack[-1];
    if (!car_legal(v_46)) v_46 = carerror(v_46); else
    v_46 = car(v_46);
    stack[0] = v_46;
    v_47 = v_46;
    v_46 = basic_elt(env, 2); // calls
    v_46 = get(v_47, v_46);
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 5); // gcref_select
    v_46 = (*qfn1(fn))(fn, v_46);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 6); // gcref_mkedges!-tgf
    v_46 = (*qfn2(fn))(fn, stack[0], v_46);
    }
    env = stack[-2];
    v_46 = stack[-1];
    if (!car_legal(v_46)) v_46 = cdrerror(v_46); else
    v_46 = cdr(v_46);
    stack[-1] = v_46;
    goto v_27;
v_26:
    return onevalue(v_46);
}



// Code for polynomlistreduce

static LispObject CC_polynomlistreduce(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_76, v_77, v_78;
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
    v_76 = nil;
    v_76 = ncons(v_76);
    env = stack[-5];
    stack[-4] = v_76;
    v_76 = stack[-2];
    if (!car_legal(v_76)) v_76 = carerror(v_76); else
    v_76 = car(v_76);
    if (v_76 == nil) goto v_14;
    else goto v_15;
v_14:
    v_76 = stack[-4];
    goto v_9;
v_15:
v_22:
    v_76 = stack[-2];
    if (!car_legal(v_76)) v_76 = carerror(v_76); else
    v_76 = car(v_76);
    if (v_76 == nil) goto v_25;
    else goto v_26;
v_25:
    goto v_21;
v_26:
    v_78 = stack[-3];
    v_77 = stack[-2];
    v_76 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // polynomlistfinddivisor
    v_76 = (*qfn3(fn))(fn, v_78, v_77, v_76);
    }
    env = stack[-5];
v_36:
    v_77 = v_76;
    if (v_77 == nil) goto v_39;
    else goto v_40;
v_39:
    goto v_35;
v_40:
    v_77 = stack[-2];
    {   LispObject fn = basic_elt(env, 2); // polynomreduceby
    v_76 = (*qfn2(fn))(fn, v_77, v_76);
    }
    env = stack[-5];
    v_78 = stack[-3];
    v_77 = stack[-2];
    v_76 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // polynomlistfinddivisor
    v_76 = (*qfn3(fn))(fn, v_78, v_77, v_76);
    }
    env = stack[-5];
    goto v_36;
v_35:
    v_76 = stack[-2];
    if (!car_legal(v_76)) v_76 = carerror(v_76); else
    v_76 = car(v_76);
    if (v_76 == nil) goto v_54;
    stack[0] = stack[-4];
    v_76 = stack[-2];
    if (!car_legal(v_76)) v_78 = carerror(v_76); else
    v_78 = car(v_76);
    v_77 = nil;
    v_76 = nil;
    v_76 = list2star(v_78, v_77, v_76);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 3); // polynomadd
    v_76 = (*qfn2(fn))(fn, stack[0], v_76);
    }
    env = stack[-5];
    v_77 = stack[-2];
    v_76 = stack[-2];
    if (!car_legal(v_76)) v_76 = cdrerror(v_76); else
    v_76 = cdr(v_76);
    if (!car_legal(v_76)) v_76 = carerror(v_76); else
    v_76 = car(v_76);
    if (!car_legal(v_77)) rplaca_fails(v_77);
    setcar(v_77, v_76);
    v_76 = stack[-2];
    if (!car_legal(v_76)) v_76 = cdrerror(v_76); else
    v_76 = cdr(v_76);
    if (!car_legal(v_76)) v_76 = cdrerror(v_76); else
    v_76 = cdr(v_76);
    if (!car_legal(v_77)) rplacd_fails(v_77);
    setcdr(v_77, v_76);
    goto v_52;
v_54:
v_52:
    goto v_22;
v_21:
    v_76 = stack[-4];
v_9:
    return onevalue(v_76);
}



// Code for opmtchrevop

static LispObject CC_opmtchrevop(LispObject env,
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
    v_30 = qvalue(basic_elt(env, 1)); // !*val
    if (v_30 == nil) goto v_10;
    else goto v_11;
v_10:
    v_30 = lisp_true;
    goto v_9;
v_11:
    v_31 = basic_elt(env, 2); // cons
    v_30 = stack[0];
    v_30 = Lsmemq(nil, v_31, v_30);
    env = stack[-2];
    goto v_9;
    v_30 = nil;
v_9:
    if (v_30 == nil) goto v_7;
    v_30 = stack[0];
    {
        LispObject fn = basic_elt(env, 3); // opmtch
        return (*qfn1(fn))(fn, v_30);
    }
v_7:
    v_30 = stack[0];
    if (!car_legal(v_30)) stack[-1] = carerror(v_30); else
    stack[-1] = car(v_30);
    v_30 = stack[0];
    if (!car_legal(v_30)) v_30 = cdrerror(v_30); else
    v_30 = cdr(v_30);
    {   LispObject fn = basic_elt(env, 4); // revlis
    v_30 = (*qfn1(fn))(fn, v_30);
    }
    env = stack[-2];
    v_30 = cons(stack[-1], v_30);
    env = stack[-2];
    {
        LispObject fn = basic_elt(env, 3); // opmtch
        return (*qfn1(fn))(fn, v_30);
    }
    v_30 = nil;
    return onevalue(v_30);
}



// Code for rl_eqnrhskernels

static LispObject CC_rl_eqnrhskernels(LispObject env,
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
    stack[0] = qvalue(basic_elt(env, 1)); // rl_eqnrhskernels!*
    v_8 = ncons(v_8);
    env = stack[-1];
    {
        LispObject v_10 = stack[0];
        LispObject fn = basic_elt(env, 2); // apply
        return (*qfn2(fn))(fn, v_10, v_8);
    }
}



// Code for pasf_floor

static LispObject CC_pasf_floor(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_82, v_83, v_84;
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
    v_82 = stack[-1];
    if (!consp(v_82)) goto v_15;
    else goto v_16;
v_15:
    v_82 = lisp_true;
    goto v_14;
v_16:
    v_82 = stack[-1];
    if (!car_legal(v_82)) v_82 = carerror(v_82); else
    v_82 = car(v_82);
    v_82 = (consp(v_82) ? nil : lisp_true);
    goto v_14;
    v_82 = nil;
v_14:
    if (v_82 == nil) goto v_12;
    v_82 = stack[0];
    if (!consp(v_82)) goto v_26;
    else goto v_27;
v_26:
    v_82 = lisp_true;
    goto v_25;
v_27:
    v_82 = stack[0];
    if (!car_legal(v_82)) v_82 = carerror(v_82); else
    v_82 = car(v_82);
    v_82 = (consp(v_82) ? nil : lisp_true);
    goto v_25;
    v_82 = nil;
v_25:
    goto v_10;
v_12:
    v_82 = nil;
    goto v_10;
    v_82 = nil;
v_10:
    if (v_82 == nil) goto v_8;
    v_82 = stack[-1];
    if (v_82 == nil) goto v_40;
    else goto v_41;
v_40:
    v_82 = nil;
    goto v_39;
v_41:
    v_83 = stack[-1];
    v_82 = stack[0];
    v_83 = Cremainder(v_83, v_82);
    env = stack[-2];
    v_82 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_83 == v_82) goto v_49;
    else goto v_50;
v_49:
    v_83 = stack[-1];
    v_82 = stack[0];
    v_82 = quot2(v_83, v_82);
    env = stack[-2];
    goto v_48;
v_50:
    v_83 = stack[-1];
    v_82 = stack[0];
    v_83 = times2(v_83, v_82);
    env = stack[-2];
    v_82 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_82 = static_cast<LispObject>(greaterp2(v_83, v_82));
    v_82 = v_82 ? lisp_true : nil;
    env = stack[-2];
    if (v_82 == nil) goto v_59;
    v_83 = stack[-1];
    v_82 = stack[0];
    v_82 = quot2(v_83, v_82);
    env = stack[-2];
    goto v_48;
v_59:
    v_83 = stack[-1];
    v_82 = stack[0];
    v_82 = quot2(v_83, v_82);
    env = stack[-2];
    v_82 = sub1(v_82);
    env = stack[-2];
    goto v_48;
    v_82 = nil;
v_48:
    {   LispObject fn = basic_elt(env, 2); // simp
    v_82 = (*qfn1(fn))(fn, v_82);
    }
    if (!car_legal(v_82)) v_82 = carerror(v_82); else
    v_82 = car(v_82);
    goto v_39;
    v_82 = nil;
v_39:
    goto v_6;
v_8:
    v_84 = basic_elt(env, 1); // "pasf_floor: not a domain valued sf in input"
    v_83 = stack[-1];
    v_82 = stack[0];
    v_82 = list3(v_84, v_83, v_82);
    env = stack[-2];
    {
        LispObject fn = basic_elt(env, 3); // rederr
        return (*qfn1(fn))(fn, v_82);
    }
    v_82 = nil;
v_6:
    return onevalue(v_82);
}



// Code for bvarml

static LispObject CC_bvarml(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_31 = basic_elt(env, 1); // "<bvar>"
    {   LispObject fn = basic_elt(env, 3); // printout
    v_31 = (*qfn1(fn))(fn, v_31);
    }
    env = stack[-1];
    v_31 = lisp_true;
    {   LispObject fn = basic_elt(env, 4); // indent!*
    v_31 = (*qfn1(fn))(fn, v_31);
    }
    env = stack[-1];
    v_31 = stack[0];
    if (!car_legal(v_31)) v_31 = carerror(v_31); else
    v_31 = car(v_31);
    {   LispObject fn = basic_elt(env, 5); // expression
    v_31 = (*qfn1(fn))(fn, v_31);
    }
    env = stack[-1];
    v_31 = stack[0];
    if (!car_legal(v_31)) v_31 = cdrerror(v_31); else
    v_31 = cdr(v_31);
    if (!car_legal(v_31)) v_32 = carerror(v_31); else
    v_32 = car(v_31);
    v_31 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_32 == v_31) goto v_16;
    v_31 = stack[0];
    if (!car_legal(v_31)) v_31 = cdrerror(v_31); else
    v_31 = cdr(v_31);
    if (!car_legal(v_31)) v_31 = carerror(v_31); else
    v_31 = car(v_31);
    v_31 = ncons(v_31);
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 6); // degreeml
    v_31 = (*qfn1(fn))(fn, v_31);
    }
    env = stack[-1];
    goto v_14;
v_16:
v_14:
    v_31 = nil;
    {   LispObject fn = basic_elt(env, 4); // indent!*
    v_31 = (*qfn1(fn))(fn, v_31);
    }
    env = stack[-1];
    v_31 = basic_elt(env, 2); // "</bvar>"
    {   LispObject fn = basic_elt(env, 3); // printout
    v_31 = (*qfn1(fn))(fn, v_31);
    }
    v_31 = nil;
    return onevalue(v_31);
}



// Code for band_matrix

static LispObject CC_band_matrix(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_149, v_150;
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
    stack[-10] = nil;
    v_149 = stack[-8];
    v_149 = integerp(v_149);
    if (v_149 == nil) goto v_18;
    else goto v_19;
v_18:
    v_149 = basic_elt(env, 1); // "Error in band_matrix(second argument): should be an integer."
    {   LispObject fn = basic_elt(env, 7); // rederr
    v_149 = (*qfn1(fn))(fn, v_149);
    }
    env = stack[-11];
    goto v_17;
v_19:
v_17:
    v_149 = stack[-9];
    if (!consp(v_149)) goto v_26;
    else goto v_27;
v_26:
    v_149 = stack[-9];
    v_149 = ncons(v_149);
    env = stack[-11];
    stack[-9] = v_149;
    goto v_25;
v_27:
    v_149 = stack[-9];
    if (!car_legal(v_149)) v_150 = carerror(v_149); else
    v_150 = car(v_149);
    v_149 = basic_elt(env, 2); // list
    if (v_150 == v_149) goto v_31;
    else goto v_32;
v_31:
    v_149 = stack[-9];
    if (!car_legal(v_149)) v_149 = cdrerror(v_149); else
    v_149 = cdr(v_149);
    stack[-9] = v_149;
    goto v_25;
v_32:
    v_149 = basic_elt(env, 3); // "Error in band_matrix(first argument): should be single value or list."
    {   LispObject fn = basic_elt(env, 7); // rederr
    v_149 = (*qfn1(fn))(fn, v_149);
    }
    env = stack[-11];
    goto v_25;
v_25:
    v_149 = stack[-9];
    v_149 = Llength(nil, v_149);
    env = stack[-11];
    stack[-7] = v_149;
    v_149 = stack[-7];
    v_149 = Levenp(nil, v_149);
    env = stack[-11];
    if (v_149 == nil) goto v_47;
    v_149 = basic_elt(env, 4); // "Error in band matrix(first argument): number of elements must be odd."
    {   LispObject fn = basic_elt(env, 7); // rederr
    v_149 = (*qfn1(fn))(fn, v_149);
    }
    env = stack[-11];
    goto v_45;
v_47:
v_45:
    stack[0] = basic_elt(env, 5); // quotient
    v_149 = stack[-7];
    v_150 = add1(v_149);
    env = stack[-11];
    v_149 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_149 = list3(stack[0], v_150, v_149);
    env = stack[-11];
    {   LispObject fn = basic_elt(env, 8); // reval
    v_149 = (*qfn1(fn))(fn, v_149);
    }
    env = stack[-11];
    stack[-6] = v_149;
    v_149 = stack[-6];
    v_149 = integerp(v_149);
    if (v_149 == nil) goto v_66;
    v_149 = stack[-6];
    v_150 = v_149;
    goto v_64;
v_66:
    v_149 = stack[-6];
    {   LispObject fn = basic_elt(env, 8); // reval
    v_149 = (*qfn1(fn))(fn, v_149);
    }
    env = stack[-11];
    v_150 = v_149;
    goto v_64;
    v_150 = nil;
v_64:
    v_149 = stack[-8];
    v_149 = static_cast<LispObject>(greaterp2(v_150, v_149));
    v_149 = v_149 ? lisp_true : nil;
    env = stack[-11];
    if (v_149 == nil) goto v_61;
    v_149 = basic_elt(env, 6); // "Error in band_matrix: too many elements. Band matrix is overflowing."
    {   LispObject fn = basic_elt(env, 7); // rederr
    v_149 = (*qfn1(fn))(fn, v_149);
    }
    env = stack[-11];
    goto v_59;
v_61:
    v_150 = stack[-8];
    v_149 = stack[-8];
    {   LispObject fn = basic_elt(env, 9); // mkmatrix
    v_149 = (*qfn2(fn))(fn, v_150, v_149);
    }
    env = stack[-11];
    stack[-10] = v_149;
    goto v_59;
v_59:
    v_149 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-5] = v_149;
v_85:
    v_150 = stack[-8];
    v_149 = stack[-5];
    v_149 = difference2(v_150, v_149);
    env = stack[-11];
    v_149 = Lminusp(nil, v_149);
    env = stack[-11];
    if (v_149 == nil) goto v_90;
    goto v_84;
v_90:
    v_149 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-4] = v_149;
v_99:
    v_150 = stack[-8];
    v_149 = stack[-4];
    v_149 = difference2(v_150, v_149);
    env = stack[-11];
    v_149 = Lminusp(nil, v_149);
    env = stack[-11];
    if (v_149 == nil) goto v_104;
    goto v_98;
v_104:
    v_150 = stack[-6];
    v_149 = stack[-5];
    v_150 = difference2(v_150, v_149);
    env = stack[-11];
    v_149 = stack[-4];
    v_150 = plus2(v_150, v_149);
    env = stack[-11];
    v_149 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_149 = static_cast<LispObject>(greaterp2(v_150, v_149));
    v_149 = v_149 ? lisp_true : nil;
    env = stack[-11];
    if (v_149 == nil) goto v_113;
    v_150 = stack[-6];
    v_149 = stack[-5];
    v_150 = difference2(v_150, v_149);
    env = stack[-11];
    v_149 = stack[-4];
    v_150 = plus2(v_150, v_149);
    env = stack[-11];
    v_149 = stack[-7];
    v_149 = static_cast<LispObject>(lesseq2(v_150, v_149));
    v_149 = v_149 ? lisp_true : nil;
    env = stack[-11];
    if (v_149 == nil) goto v_113;
    stack[-3] = stack[-10];
    stack[-2] = stack[-5];
    stack[-1] = stack[-4];
    stack[0] = stack[-9];
    v_150 = stack[-6];
    v_149 = stack[-5];
    v_150 = difference2(v_150, v_149);
    env = stack[-11];
    v_149 = stack[-4];
    v_149 = plus2(v_150, v_149);
    env = stack[-11];
    {   LispObject fn = basic_elt(env, 10); // nth
    v_149 = (*qfn2(fn))(fn, stack[0], v_149);
    }
    env = stack[-11];
    v_149 = ncons(v_149);
    env = stack[-11];
    {   LispObject fn = basic_elt(env, 11); // setmat
    v_149 = (*qfn4up(fn))(fn, stack[-3], stack[-2], stack[-1], v_149);
    }
    env = stack[-11];
    goto v_111;
v_113:
v_111:
    v_149 = stack[-4];
    v_149 = add1(v_149);
    env = stack[-11];
    stack[-4] = v_149;
    goto v_99;
v_98:
    v_149 = stack[-5];
    v_149 = add1(v_149);
    env = stack[-11];
    stack[-5] = v_149;
    goto v_85;
v_84:
    v_149 = stack[-10];
    return onevalue(v_149);
}



// Code for rd!:zerop!:

static LispObject CC_rdTzeropT(LispObject env,
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
    if (!consp(v_18)) goto v_6;
    else goto v_7;
v_6:
    v_18 = v_19;
    if (!car_legal(v_18)) v_18 = cdrerror(v_18); else
    v_18 = cdr(v_18);
    {
        LispObject fn = basic_elt(env, 1); // ft!:zerop
        return (*qfn1(fn))(fn, v_18);
    }
v_7:
    v_18 = v_19;
    {   LispObject fn = basic_elt(env, 2); // round!*
    v_18 = (*qfn1(fn))(fn, v_18);
    }
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 3); // bfzerop!:
        return (*qfn1(fn))(fn, v_18);
    }
    v_18 = nil;
    return onevalue(v_18);
}



// Code for flatindl

static LispObject CC_flatindl(LispObject env,
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
    v_35 = nil;
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
    v_35 = Lappend_2(nil, v_35, v_36);
    env = stack[-2];
    v_36 = v_35;
    v_35 = stack[-1];
    v_35 = cdr(v_35);
    stack[-1] = v_35;
    goto v_10;
v_7:
    return onevalue(v_35);
}



// Code for formcond1

static LispObject CC_formcond1(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    v_37 = stack[-3];
    if (v_37 == nil) goto v_12;
    else goto v_13;
v_12:
    v_37 = stack[-4];
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn1(fn))(fn, v_37);
    }
v_13:
    v_37 = stack[-3];
    if (!car_legal(v_37)) v_37 = carerror(v_37); else
    v_37 = car(v_37);
    if (!car_legal(v_37)) v_39 = carerror(v_37); else
    v_39 = car(v_37);
    v_38 = stack[-2];
    v_37 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // formbool
    stack[0] = (*qfn3(fn))(fn, v_39, v_38, v_37);
    }
    env = stack[-5];
    v_37 = stack[-3];
    if (!car_legal(v_37)) v_37 = carerror(v_37); else
    v_37 = car(v_37);
    if (!car_legal(v_37)) v_37 = cdrerror(v_37); else
    v_37 = cdr(v_37);
    if (!car_legal(v_37)) v_39 = carerror(v_37); else
    v_39 = car(v_37);
    v_38 = stack[-2];
    v_37 = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // formc
    v_37 = (*qfn3(fn))(fn, v_39, v_38, v_37);
    }
    env = stack[-5];
    v_38 = list2(stack[0], v_37);
    env = stack[-5];
    v_37 = stack[-4];
    v_37 = cons(v_38, v_37);
    env = stack[-5];
    stack[-4] = v_37;
    v_37 = stack[-3];
    if (!car_legal(v_37)) v_37 = cdrerror(v_37); else
    v_37 = cdr(v_37);
    stack[-3] = v_37;
    goto v_9;
    v_37 = nil;
    return onevalue(v_37);
}



// Code for red_totalred

static LispObject CC_red_totalred(LispObject env,
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
    stack[0] = v_11;
    {   LispObject fn = basic_elt(env, 1); // red_topred
    v_10 = (*qfn2(fn))(fn, v_11, v_10);
    }
    env = stack[-1];
    {
        LispObject v_13 = stack[0];
        LispObject fn = basic_elt(env, 2); // red_tailred
        return (*qfn2(fn))(fn, v_13, v_10);
    }
}



// Code for ilog2

static LispObject CC_ilog2(LispObject env,
                         LispObject v_2)
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
    v_80 = stack[-2];
    v_79 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_79 = static_cast<LispObject>(lesseq2(v_80, v_79));
    v_79 = v_79 ? lisp_true : nil;
    env = stack[-4];
    if (v_79 == nil) goto v_12;
    v_80 = stack[-2];
    v_79 = basic_elt(env, 0); // ilog2
    {   LispObject fn = basic_elt(env, 1); // terrlst
    v_79 = (*qfn2(fn))(fn, v_80, v_79);
    }
    env = stack[-4];
    goto v_10;
v_12:
v_10:
    v_79 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    stack[0] = v_79;
    v_79 = stack[0];
    v_79 = ncons(v_79);
    env = stack[-4];
    stack[-1] = v_79;
v_24:
    v_80 = stack[-2];
    v_79 = stack[0];
    v_79 = static_cast<LispObject>(greaterp2(v_80, v_79));
    v_79 = v_79 ? lisp_true : nil;
    env = stack[-4];
    if (v_79 == nil) goto v_27;
    else goto v_28;
v_27:
    goto v_23;
v_28:
    v_80 = stack[0];
    v_79 = stack[-1];
    v_79 = cons(v_80, v_79);
    env = stack[-4];
    stack[-1] = v_79;
    v_80 = stack[0];
    v_79 = stack[0];
    v_79 = times2(v_80, v_79);
    env = stack[-4];
    stack[0] = v_79;
    goto v_24;
v_23:
    v_79 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-3] = v_79;
v_42:
    v_79 = stack[-1];
    if (!car_legal(v_79)) v_80 = carerror(v_79); else
    v_80 = car(v_79);
    stack[0] = v_80;
    v_79 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    if (v_80 == v_79) goto v_45;
    else goto v_46;
v_45:
    goto v_41;
v_46:
    v_79 = stack[-1];
    if (!car_legal(v_79)) v_79 = cdrerror(v_79); else
    v_79 = cdr(v_79);
    stack[-1] = v_79;
    v_80 = stack[-2];
    v_79 = stack[0];
    v_79 = static_cast<LispObject>(geq2(v_80, v_79));
    v_79 = v_79 ? lisp_true : nil;
    env = stack[-4];
    if (v_79 == nil) goto v_56;
    v_80 = stack[-2];
    v_79 = stack[0];
    v_79 = quot2(v_80, v_79);
    env = stack[-4];
    stack[-2] = v_79;
    v_79 = stack[-3];
    v_79 = add1(v_79);
    env = stack[-4];
    stack[-3] = v_79;
    goto v_54;
v_56:
v_54:
    v_80 = stack[-3];
    v_79 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_79 = times2(v_80, v_79);
    env = stack[-4];
    stack[-3] = v_79;
    goto v_42;
v_41:
    v_80 = stack[-2];
    v_79 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_79 = static_cast<LispObject>(geq2(v_80, v_79));
    v_79 = v_79 ? lisp_true : nil;
    env = stack[-4];
    if (v_79 == nil) goto v_72;
    v_79 = stack[-3];
    v_79 = add1(v_79);
    stack[-3] = v_79;
    goto v_70;
v_72:
v_70:
    v_79 = stack[-3];
    return onevalue(v_79);
}



// Code for lalr_prin_production

static LispObject CC_lalr_prin_production(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_12 = stack[0];
    if (!car_legal(v_12)) v_12 = carerror(v_12); else
    v_12 = car(v_12);
    {   LispObject fn = basic_elt(env, 2); // lalr_prin_symbol
    v_12 = (*qfn1(fn))(fn, v_12);
    }
    env = stack[-1];
    v_12 = basic_elt(env, 1); // " -> "
    v_12 = Lprinc(nil, v_12);
    env = stack[-1];
    v_12 = stack[0];
    if (!car_legal(v_12)) v_12 = cdrerror(v_12); else
    v_12 = cdr(v_12);
    {
        LispObject fn = basic_elt(env, 3); // lalr_prin_rhs
        return (*qfn1(fn))(fn, v_12);
    }
}



// Code for defineargs

static LispObject CC_defineargs(LispObject env,
                         LispObject v_3, LispObject v_4)
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
        push(v_3,v_4);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_4,v_3);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil, nil, nil, nil, nil);
    stack_popper stack_popper_var(6);
// copy arguments values to proper place
    stack[-3] = v_4;
    v_49 = v_3;
// end of prologue
// Binding name
// FLUIDBIND: reloadenv=5 litvec-offset=1 saveloc=4
{   bind_fluid_stack bind_fluid_var(-5, 1, -4);
    setvalue(basic_elt(env, 1), v_49); // name
    v_49 = qvalue(basic_elt(env, 1)); // name
    if (!symbolp(v_49)) v_49 = nil;
    else { v_49 = qfastgets(v_49);
           if (v_49 != nil) { v_49 = elt(v_49, 42); // number!-of!-args
#ifdef RECORD_GET
             if (v_49 != SPID_NOPROP)
                record_get(elt(fastget_names, 42), 1);
             else record_get(elt(fastget_names, 42), 0),
                v_49 = nil; }
           else record_get(elt(fastget_names, 42), 0); }
#else
             if (v_49 == SPID_NOPROP) v_49 = nil; }}
#endif
    v_51 = v_49;
    v_49 = v_51;
    if (v_49 == nil) goto v_19;
    else goto v_20;
v_19:
    v_50 = qvalue(basic_elt(env, 1)); // name
    v_49 = stack[-3];
    {   LispObject fn = basic_elt(env, 3); // hasarg
    v_49 = (*qfn2(fn))(fn, v_50, v_49);
    }
    goto v_14;
v_20:
    v_50 = stack[-3];
    v_49 = v_51;
    if (equal(v_50, v_49)) goto v_27;
    else goto v_28;
v_27:
    v_49 = nil;
    goto v_14;
v_28:
    v_50 = qvalue(basic_elt(env, 1)); // name
    v_49 = basic_elt(env, 2); // calledby
    v_49 = get(v_50, v_49);
    env = stack[-5];
    v_50 = v_49;
    if (v_49 == nil) goto v_35;
    stack[-2] = qvalue(basic_elt(env, 1)); // name
    stack[-1] = stack[-3];
    stack[0] = v_51;
    v_49 = v_50;
    v_49 = ncons(v_49);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 4); // instdof
    v_49 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_49);
    }
    env = stack[-5];
    goto v_33;
v_35:
v_33:
    v_50 = qvalue(basic_elt(env, 1)); // name
    v_49 = stack[-3];
    {   LispObject fn = basic_elt(env, 3); // hasarg
    v_49 = (*qfn2(fn))(fn, v_50, v_49);
    }
    v_49 = nil;
v_14:
    ;}  // end of a binding scope
    return onevalue(v_49);
}



// Code for ofsf_ignshift

static LispObject CC_ofsf_ignshift(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_76, v_77, v_78;
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
    v_76 = stack[-2];
    if (!car_legal(v_76)) v_76 = cdrerror(v_76); else
    v_76 = cdr(v_76);
    if (!car_legal(v_76)) v_77 = carerror(v_76); else
    v_77 = car(v_76);
    v_76 = stack[-1];
    {   LispObject fn = basic_elt(env, 5); // sfto_reorder
    v_76 = (*qfn2(fn))(fn, v_77, v_76);
    }
    env = stack[-3];
    v_78 = v_76;
    v_76 = v_78;
    if (!consp(v_76)) goto v_24;
    else goto v_25;
v_24:
    v_76 = lisp_true;
    goto v_23;
v_25:
    v_76 = v_78;
    if (!car_legal(v_76)) v_76 = carerror(v_76); else
    v_76 = car(v_76);
    v_76 = (consp(v_76) ? nil : lisp_true);
    goto v_23;
    v_76 = nil;
v_23:
    if (v_76 == nil) goto v_20;
    else goto v_21;
v_20:
    v_76 = v_78;
    if (!car_legal(v_76)) v_76 = cdrerror(v_76); else
    v_76 = cdr(v_76);
    if (v_76 == nil) goto v_35;
    else goto v_36;
v_35:
    v_76 = v_78;
    if (!car_legal(v_76)) v_76 = carerror(v_76); else
    v_76 = car(v_76);
    if (!car_legal(v_76)) v_76 = carerror(v_76); else
    v_76 = car(v_76);
    if (!car_legal(v_76)) v_77 = carerror(v_76); else
    v_77 = car(v_76);
    v_76 = stack[-1];
    v_76 = (v_77 == v_76 ? lisp_true : nil);
    goto v_34;
v_36:
    v_76 = nil;
    goto v_34;
    v_76 = nil;
v_34:
    goto v_19;
v_21:
    v_76 = nil;
    goto v_19;
    v_76 = nil;
v_19:
    if (v_76 == nil) goto v_17;
    v_76 = qvalue(basic_elt(env, 1)); // !*rlpos
    if (v_76 == nil) goto v_55;
    else goto v_53;
v_55:
    v_76 = stack[0];
    if (v_76 == nil) goto v_58;
    else goto v_53;
v_58:
    v_76 = stack[-2];
    if (!car_legal(v_76)) v_77 = carerror(v_76); else
    v_77 = car(v_76);
    v_76 = basic_elt(env, 2); // (equal neq)
    v_76 = Lmemq(nil, v_77, v_76);
    if (v_76 == nil) goto v_61;
    else goto v_53;
v_61:
    v_76 = v_78;
    if (!car_legal(v_76)) v_76 = carerror(v_76); else
    v_76 = car(v_76);
    if (!car_legal(v_76)) v_76 = carerror(v_76); else
    v_76 = car(v_76);
    if (!car_legal(v_76)) v_76 = cdrerror(v_76); else
    v_76 = cdr(v_76);
    v_76 = Levenp(nil, v_76);
    env = stack[-3];
    if (v_76 == nil) goto v_66;
    else goto v_53;
v_66:
    goto v_54;
v_53:
    v_76 = basic_elt(env, 3); // ignore
    goto v_8;
v_54:
    v_76 = basic_elt(env, 4); // odd
    goto v_8;
    goto v_15;
v_17:
v_15:
    v_76 = nil;
v_8:
    return onevalue(v_76);
}



// Code for tripleisprolongedby

static LispObject CC_tripleisprolongedby(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_3;
    v_47 = v_2;
// end of prologue
    v_48 = v_47;
    v_47 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_47 = Lgetv(nil, v_48, v_47);
    env = stack[-2];
    stack[-1] = v_47;
v_13:
    v_47 = stack[-1];
    if (!car_legal(v_47)) v_47 = carerror(v_47); else
    v_47 = car(v_47);
    if (v_47 == nil) goto v_16;
    v_47 = stack[-1];
    if (!car_legal(v_47)) v_48 = carerror(v_47); else
    v_48 = car(v_47);
    v_47 = stack[0];
    v_47 = static_cast<LispObject>(greaterp2(v_48, v_47));
    v_47 = v_47 ? lisp_true : nil;
    env = stack[-2];
    if (v_47 == nil) goto v_16;
    goto v_17;
v_16:
    goto v_12;
v_17:
    v_47 = stack[-1];
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    stack[-1] = v_47;
    goto v_13;
v_12:
    v_47 = stack[-1];
    if (!car_legal(v_47)) v_47 = carerror(v_47); else
    v_47 = car(v_47);
    if (v_47 == nil) goto v_33;
    v_47 = stack[-1];
    if (!car_legal(v_47)) v_48 = carerror(v_47); else
    v_48 = car(v_47);
    v_47 = stack[0];
    if (equal(v_48, v_47)) goto v_37;
    else goto v_33;
v_37:
    v_47 = lisp_true;
    goto v_7;
v_33:
    v_47 = nil;
    goto v_7;
    v_47 = nil;
v_7:
    return onevalue(v_47);
}



// Code for ofsf_smupdknowl

static LispObject CC_ofsf_smupdknowl(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_70, v_71, v_72;
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
    stack[-1] = v_5;
    stack[-2] = v_4;
    stack[-3] = v_3;
    stack[-4] = v_2;
// end of prologue
v_14:
    v_70 = stack[-3];
    if (v_70 == nil) goto v_17;
    else goto v_18;
v_17:
    goto v_13;
v_18:
    v_71 = stack[-4];
    v_70 = basic_elt(env, 1); // and
    if (v_71 == v_70) goto v_23;
    else goto v_24;
v_23:
    v_70 = stack[-3];
    if (!car_legal(v_70)) v_70 = carerror(v_70); else
    v_70 = car(v_70);
    goto v_22;
v_24:
    v_70 = stack[-3];
    if (!car_legal(v_70)) v_70 = carerror(v_70); else
    v_70 = car(v_70);
    {   LispObject fn = basic_elt(env, 3); // ofsf_negateat
    v_70 = (*qfn1(fn))(fn, v_70);
    }
    env = stack[-6];
    goto v_22;
    v_70 = nil;
v_22:
    v_71 = v_70;
    v_70 = stack[-3];
    if (!car_legal(v_70)) v_70 = cdrerror(v_70); else
    v_70 = cdr(v_70);
    stack[-3] = v_70;
    v_70 = stack[-1];
    {   LispObject fn = basic_elt(env, 4); // ofsf_at2ir
    v_70 = (*qfn2(fn))(fn, v_71, v_70);
    }
    env = stack[-6];
    v_72 = v_70;
    v_70 = v_72;
    if (!car_legal(v_70)) v_71 = carerror(v_70); else
    v_71 = car(v_70);
    v_70 = stack[-2];
    v_70 = Lassoc(nil, v_71, v_70);
    stack[-5] = v_70;
    if (v_70 == nil) goto v_42;
    stack[0] = stack[-5];
    v_70 = v_72;
    if (!car_legal(v_70)) v_70 = cdrerror(v_70); else
    v_70 = cdr(v_70);
    if (!car_legal(v_70)) v_71 = carerror(v_70); else
    v_71 = car(v_70);
    v_70 = stack[-5];
    if (!car_legal(v_70)) v_70 = cdrerror(v_70); else
    v_70 = cdr(v_70);
    {   LispObject fn = basic_elt(env, 5); // ofsf_sminsert
    v_70 = (*qfn2(fn))(fn, v_71, v_70);
    }
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 6); // setcdr
    v_70 = (*qfn2(fn))(fn, stack[0], v_70);
    }
    env = stack[-6];
    v_70 = stack[-5];
    if (!car_legal(v_70)) v_71 = cdrerror(v_70); else
    v_71 = cdr(v_70);
    v_70 = basic_elt(env, 2); // false
    if (v_71 == v_70) goto v_57;
    else goto v_58;
v_57:
    v_70 = nil;
    stack[-3] = v_70;
    v_70 = basic_elt(env, 2); // false
    stack[-2] = v_70;
    goto v_56;
v_58:
v_56:
    goto v_40;
v_42:
    v_71 = v_72;
    v_70 = stack[-2];
    v_70 = cons(v_71, v_70);
    env = stack[-6];
    stack[-2] = v_70;
    goto v_40;
v_40:
    goto v_14;
v_13:
    v_70 = stack[-2];
    return onevalue(v_70);
}



// Code for cl_smsimpl!-junct1

static LispObject CC_cl_smsimplKjunct1(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_282, v_283, v_284;
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
    push(nil, nil);
    stack_popper stack_popper_var(13);
// copy arguments values to proper place
    stack[-5] = v_8;
    stack[-6] = v_7;
    stack[-7] = v_6;
    stack[-8] = v_5;
    stack[-9] = v_4;
    v_282 = v_3;
    stack[-10] = v_2;
// end of prologue
    stack[-11] = nil;
    stack[-4] = nil;
    stack[-3] = nil;
v_20:
    v_282 = stack[-9];
    if (v_282 == nil) goto v_23;
    else goto v_24;
v_23:
    goto v_19;
v_24:
    v_282 = stack[-9];
    if (!car_legal(v_282)) v_282 = carerror(v_282); else
    v_282 = car(v_282);
    v_283 = v_282;
    v_282 = stack[-9];
    if (!car_legal(v_282)) v_282 = cdrerror(v_282); else
    v_282 = cdr(v_282);
    stack[-9] = v_282;
    v_282 = v_283;
    stack[-11] = v_282;
    stack[-2] = stack[-11];
    stack[-1] = stack[-7];
    v_282 = stack[-6];
    stack[0] = sub1(v_282);
    env = stack[-12];
    v_282 = stack[-10];
    v_282 = ncons(v_282);
    env = stack[-12];
    {   LispObject fn = basic_elt(env, 14); // cl_simpl1
    v_282 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_282);
    }
    env = stack[-12];
    stack[-1] = v_282;
    v_282 = stack[-1];
    if (!consp(v_282)) goto v_45;
    else goto v_46;
v_45:
    v_282 = stack[-1];
    goto v_44;
v_46:
    v_282 = stack[-1];
    if (!car_legal(v_282)) v_282 = carerror(v_282); else
    v_282 = car(v_282);
    goto v_44;
    v_282 = nil;
v_44:
    v_284 = v_282;
    v_283 = v_284;
    v_282 = stack[-5];
    if (v_283 == v_282) goto v_55;
    else goto v_56;
v_55:
    v_282 = stack[-5];
    stack[-11] = v_282;
    v_282 = nil;
    stack[-9] = v_282;
    goto v_54;
v_56:
    v_283 = v_284;
    v_282 = stack[-10];
    if (v_283 == v_282) goto v_61;
    else goto v_62;
v_61:
    v_282 = stack[-1];
    if (!car_legal(v_282)) v_282 = cdrerror(v_282); else
    v_282 = cdr(v_282);
    stack[0] = v_282;
v_69:
    v_282 = stack[0];
    if (v_282 == nil) goto v_72;
    v_282 = stack[0];
    if (!car_legal(v_282)) v_282 = carerror(v_282); else
    v_282 = car(v_282);
    {   LispObject fn = basic_elt(env, 15); // cl_atfp
    v_282 = (*qfn1(fn))(fn, v_282);
    }
    env = stack[-12];
    if (v_282 == nil) goto v_72;
    goto v_73;
v_72:
    goto v_68;
v_73:
    v_282 = stack[0];
    if (!car_legal(v_282)) v_283 = carerror(v_282); else
    v_283 = car(v_282);
    v_282 = stack[-3];
    v_282 = cons(v_283, v_282);
    env = stack[-12];
    stack[-3] = v_282;
    v_282 = stack[0];
    if (!car_legal(v_282)) v_282 = cdrerror(v_282); else
    v_282 = cdr(v_282);
    stack[0] = v_282;
    goto v_69;
v_68:
    v_282 = qvalue(basic_elt(env, 1)); // !*rlsiidem
    if (v_282 == nil) goto v_90;
    v_282 = stack[-3];
    if (v_282 == nil) goto v_90;
    v_282 = stack[-4];
    v_283 = Lnreverse(nil, v_282);
    env = stack[-12];
    v_282 = stack[-9];
    v_282 = Lnconc(nil, v_283, v_282);
    env = stack[-12];
    stack[-9] = v_282;
    v_282 = nil;
    stack[-4] = v_282;
    goto v_88;
v_90:
v_88:
    stack[-1] = stack[-4];
    v_282 = stack[0];
    v_282 = Lreverse(nil, v_282);
    env = stack[-12];
    v_282 = Lnconc(nil, stack[-1], v_282);
    env = stack[-12];
    stack[-4] = v_282;
    goto v_54;
v_62:
    v_283 = v_284;
    v_282 = basic_elt(env, 2); // true
    if (v_283 == v_282) goto v_112;
    else goto v_113;
v_112:
    v_282 = lisp_true;
    goto v_111;
v_113:
    v_283 = v_284;
    v_282 = basic_elt(env, 3); // false
    v_282 = (v_283 == v_282 ? lisp_true : nil);
    goto v_111;
    v_282 = nil;
v_111:
    if (v_282 == nil) goto v_109;
    v_282 = lisp_true;
    goto v_107;
v_109:
    v_283 = v_284;
    v_282 = basic_elt(env, 4); // or
    if (v_283 == v_282) goto v_139;
    else goto v_140;
v_139:
    v_282 = lisp_true;
    goto v_138;
v_140:
    v_283 = v_284;
    v_282 = basic_elt(env, 5); // and
    v_282 = (v_283 == v_282 ? lisp_true : nil);
    goto v_138;
    v_282 = nil;
v_138:
    if (v_282 == nil) goto v_136;
    v_282 = lisp_true;
    goto v_134;
v_136:
    v_283 = v_284;
    v_282 = basic_elt(env, 6); // not
    v_282 = (v_283 == v_282 ? lisp_true : nil);
    goto v_134;
    v_282 = nil;
v_134:
    if (v_282 == nil) goto v_132;
    v_282 = lisp_true;
    goto v_130;
v_132:
    v_283 = v_284;
    v_282 = basic_elt(env, 7); // impl
    if (v_283 == v_282) goto v_160;
    else goto v_161;
v_160:
    v_282 = lisp_true;
    goto v_159;
v_161:
    v_283 = v_284;
    v_282 = basic_elt(env, 8); // repl
    if (v_283 == v_282) goto v_169;
    else goto v_170;
v_169:
    v_282 = lisp_true;
    goto v_168;
v_170:
    v_283 = v_284;
    v_282 = basic_elt(env, 9); // equiv
    v_282 = (v_283 == v_282 ? lisp_true : nil);
    goto v_168;
    v_282 = nil;
v_168:
    goto v_159;
    v_282 = nil;
v_159:
    goto v_130;
    v_282 = nil;
v_130:
    if (v_282 == nil) goto v_128;
    v_282 = lisp_true;
    goto v_126;
v_128:
    v_283 = v_284;
    v_282 = basic_elt(env, 10); // ex
    if (v_283 == v_282) goto v_188;
    else goto v_189;
v_188:
    v_282 = lisp_true;
    goto v_187;
v_189:
    v_283 = v_284;
    v_282 = basic_elt(env, 11); // all
    v_282 = (v_283 == v_282 ? lisp_true : nil);
    goto v_187;
    v_282 = nil;
v_187:
    if (v_282 == nil) goto v_185;
    v_282 = lisp_true;
    goto v_183;
v_185:
    v_283 = v_284;
    v_282 = basic_elt(env, 12); // bex
    if (v_283 == v_282) goto v_207;
    else goto v_208;
v_207:
    v_282 = lisp_true;
    goto v_206;
v_208:
    v_283 = v_284;
    v_282 = basic_elt(env, 13); // ball
    v_282 = (v_283 == v_282 ? lisp_true : nil);
    goto v_206;
    v_282 = nil;
v_206:
    if (v_282 == nil) goto v_204;
    v_282 = lisp_true;
    goto v_202;
v_204:
    v_282 = v_284;
    if (!symbolp(v_282)) v_282 = nil;
    else { v_282 = qfastgets(v_282);
           if (v_282 != nil) { v_282 = elt(v_282, 21); // rl_external
#ifdef RECORD_GET
             if (v_282 != SPID_NOPROP)
                record_get(elt(fastget_names, 21), 1);
             else record_get(elt(fastget_names, 21), 0),
                v_282 = nil; }
           else record_get(elt(fastget_names, 21), 0); }
#else
             if (v_282 == SPID_NOPROP) v_282 = nil; }}
#endif
    goto v_202;
    v_282 = nil;
v_202:
    goto v_183;
    v_282 = nil;
v_183:
    goto v_126;
    v_282 = nil;
v_126:
    goto v_107;
    v_282 = nil;
v_107:
    if (v_282 == nil) goto v_105;
    stack[0] = v_284;
    v_282 = stack[-5];
    {   LispObject fn = basic_elt(env, 16); // cl_flip
    v_282 = (*qfn1(fn))(fn, v_282);
    }
    env = stack[-12];
    if (equal(stack[0], v_282)) goto v_225;
    v_283 = stack[-1];
    v_282 = stack[-4];
    v_282 = cons(v_283, v_282);
    env = stack[-12];
    stack[-4] = v_282;
    goto v_223;
v_225:
v_223:
    goto v_54;
v_105:
    v_282 = qvalue(basic_elt(env, 1)); // !*rlsiidem
    if (v_282 == nil) goto v_237;
    v_282 = stack[-4];
    v_283 = Lnreverse(nil, v_282);
    env = stack[-12];
    v_282 = stack[-9];
    v_282 = Lnconc(nil, v_283, v_282);
    env = stack[-12];
    stack[-9] = v_282;
    v_282 = nil;
    stack[-4] = v_282;
    goto v_235;
v_237:
v_235:
    v_282 = stack[-1];
    v_282 = ncons(v_282);
    env = stack[-12];
    stack[-3] = v_282;
    goto v_54;
v_54:
    v_282 = stack[-3];
    if (v_282 == nil) goto v_249;
    stack[0] = stack[-10];
    stack[-1] = stack[-3];
    stack[-2] = stack[-7];
    v_282 = stack[-6];
    v_282 = ncons(v_282);
    env = stack[-12];
    {   LispObject fn = basic_elt(env, 17); // rl_smupdknowl
    v_282 = (*qfn4up(fn))(fn, stack[0], stack[-1], stack[-2], v_282);
    }
    env = stack[-12];
    stack[-7] = v_282;
    v_283 = stack[-7];
    v_282 = basic_elt(env, 3); // false
    if (v_283 == v_282) goto v_259;
    else goto v_260;
v_259:
    v_282 = stack[-5];
    stack[-11] = v_282;
    v_282 = nil;
    stack[-9] = v_282;
    goto v_258;
v_260:
v_258:
    v_282 = nil;
    stack[-3] = v_282;
    goto v_247;
v_249:
v_247:
    goto v_20;
v_19:
    v_283 = stack[-11];
    v_282 = stack[-5];
    if (v_283 == v_282) goto v_268;
    else goto v_269;
v_268:
    v_282 = stack[-5];
    return ncons(v_282);
v_269:
    stack[0] = stack[-10];
    stack[-1] = stack[-4];
    stack[-2] = stack[-8];
    v_284 = stack[-7];
    v_283 = stack[-6];
    v_282 = stack[-5];
    v_282 = list3(v_284, v_283, v_282);
    env = stack[-12];
    {
        LispObject v_297 = stack[0];
        LispObject v_298 = stack[-1];
        LispObject v_299 = stack[-2];
        LispObject fn = basic_elt(env, 18); // cl_smsimpl!-junct2
        return (*qfn4up(fn))(fn, v_297, v_298, v_299, v_282);
    }
    return onevalue(v_282);
}



// Code for om2ir

static LispObject CC_om2ir(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil);
    stack_popper stack_popper_var(2);
// end of prologue
    v_45 = nil;
    stack[0] = v_45;
    v_45 = basic_elt(env, 1); // (safe_atts char ch atts count temp space temp2)
    {   LispObject fn = basic_elt(env, 11); // fluid
    v_45 = (*qfn1(fn))(fn, v_45);
    }
    env = stack[-1];
    v_45 = static_cast<LispObject>(512)+TAG_FIXNUM; // 32
    v_45 = ncons(v_45);
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 12); // list2string
    v_45 = (*qfn1(fn))(fn, v_45);
    }
    env = stack[-1];
    v_45 = Lintern(nil, v_45);
    env = stack[-1];
    setvalue(basic_elt(env, 2), v_45); // space
    v_45 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    setvalue(basic_elt(env, 3), v_45); // count
    v_45 = Lreadch(nil);
    env = stack[-1];
    setvalue(basic_elt(env, 4), v_45); // ch
    v_45 = nil;
    setvalue(basic_elt(env, 5), v_45); // temp2
    {   LispObject fn = basic_elt(env, 13); // lex
    v_45 = (*qfn0(fn))(fn);
    }
    env = stack[-1];
    v_46 = qvalue(basic_elt(env, 6)); // char
    v_45 = basic_elt(env, 7); // (o m o b j)
    if (equal(v_46, v_45)) goto v_19;
    else goto v_20;
v_19:
    {   LispObject fn = basic_elt(env, 13); // lex
    v_45 = (*qfn0(fn))(fn);
    }
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 14); // omobj
    v_45 = (*qfn0(fn))(fn);
    }
    env = stack[-1];
    stack[0] = v_45;
    goto v_18;
v_20:
    v_46 = basic_elt(env, 8); // "<omobj>"
    v_45 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    {   LispObject fn = basic_elt(env, 15); // errorml
    v_45 = (*qfn2(fn))(fn, v_46, v_45);
    }
    env = stack[-1];
    goto v_18;
v_18:
    {   LispObject fn = basic_elt(env, 13); // lex
    v_45 = (*qfn0(fn))(fn);
    }
    env = stack[-1];
    v_46 = qvalue(basic_elt(env, 6)); // char
    v_45 = basic_elt(env, 9); // (!/ o m o b j)
    if (equal(v_46, v_45)) goto v_34;
    else goto v_35;
v_34:
    v_45 = Lterpri(nil);
    goto v_33;
v_35:
    v_46 = basic_elt(env, 10); // "</omobj>"
    v_45 = static_cast<LispObject>(304)+TAG_FIXNUM; // 19
    {   LispObject fn = basic_elt(env, 15); // errorml
    v_45 = (*qfn2(fn))(fn, v_46, v_45);
    }
    goto v_33;
v_33:
    v_45 = stack[0];
    return onevalue(v_45);
}



// Code for mkmatrix

static LispObject CC_mkmatrix(LispObject env,
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
    real_push(nil, nil, nil, nil, nil);
    real_push(nil);
    stack_popper stack_popper_var(12);
// copy arguments values to proper place
    stack[-8] = v_3;
    stack[-9] = v_2;
// end of prologue
    stack[-10] = basic_elt(env, 1); // mat
    v_110 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-7] = v_110;
    v_111 = stack[-9];
    v_110 = stack[-7];
    v_110 = difference2(v_111, v_110);
    env = stack[-11];
    v_110 = Lminusp(nil, v_110);
    env = stack[-11];
    if (v_110 == nil) goto v_17;
    v_110 = nil;
    goto v_11;
v_17:
    v_110 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-3] = v_110;
    v_111 = stack[-8];
    v_110 = stack[-3];
    v_110 = difference2(v_111, v_110);
    env = stack[-11];
    v_110 = Lminusp(nil, v_110);
    env = stack[-11];
    if (v_110 == nil) goto v_34;
    v_110 = nil;
    goto v_28;
v_34:
    v_110 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_110 = ncons(v_110);
    env = stack[-11];
    stack[-1] = v_110;
    stack[-2] = v_110;
v_29:
    v_110 = stack[-3];
    v_110 = add1(v_110);
    env = stack[-11];
    stack[-3] = v_110;
    v_111 = stack[-8];
    v_110 = stack[-3];
    v_110 = difference2(v_111, v_110);
    env = stack[-11];
    v_110 = Lminusp(nil, v_110);
    env = stack[-11];
    if (v_110 == nil) goto v_47;
    v_110 = stack[-2];
    goto v_28;
v_47:
    stack[0] = stack[-1];
    v_110 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_110 = ncons(v_110);
    env = stack[-11];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_110);
    v_110 = stack[-1];
    if (!car_legal(v_110)) v_110 = cdrerror(v_110); else
    v_110 = cdr(v_110);
    stack[-1] = v_110;
    goto v_29;
v_28:
    v_110 = ncons(v_110);
    env = stack[-11];
    stack[-5] = v_110;
    stack[-6] = v_110;
v_12:
    v_110 = stack[-7];
    v_110 = add1(v_110);
    env = stack[-11];
    stack[-7] = v_110;
    v_111 = stack[-9];
    v_110 = stack[-7];
    v_110 = difference2(v_111, v_110);
    env = stack[-11];
    v_110 = Lminusp(nil, v_110);
    env = stack[-11];
    if (v_110 == nil) goto v_64;
    v_110 = stack[-6];
    goto v_11;
v_64:
    stack[-4] = stack[-5];
    v_110 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-3] = v_110;
    v_111 = stack[-8];
    v_110 = stack[-3];
    v_110 = difference2(v_111, v_110);
    env = stack[-11];
    v_110 = Lminusp(nil, v_110);
    env = stack[-11];
    if (v_110 == nil) goto v_82;
    v_110 = nil;
    goto v_76;
v_82:
    v_110 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_110 = ncons(v_110);
    env = stack[-11];
    stack[-1] = v_110;
    stack[-2] = v_110;
v_77:
    v_110 = stack[-3];
    v_110 = add1(v_110);
    env = stack[-11];
    stack[-3] = v_110;
    v_111 = stack[-8];
    v_110 = stack[-3];
    v_110 = difference2(v_111, v_110);
    env = stack[-11];
    v_110 = Lminusp(nil, v_110);
    env = stack[-11];
    if (v_110 == nil) goto v_95;
    v_110 = stack[-2];
    goto v_76;
v_95:
    stack[0] = stack[-1];
    v_110 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_110 = ncons(v_110);
    env = stack[-11];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_110);
    v_110 = stack[-1];
    if (!car_legal(v_110)) v_110 = cdrerror(v_110); else
    v_110 = cdr(v_110);
    stack[-1] = v_110;
    goto v_77;
v_76:
    v_110 = ncons(v_110);
    env = stack[-11];
    if (!car_legal(stack[-4])) rplacd_fails(stack[-4]);
    setcdr(stack[-4], v_110);
    v_110 = stack[-5];
    if (!car_legal(v_110)) v_110 = cdrerror(v_110); else
    v_110 = cdr(v_110);
    stack[-5] = v_110;
    goto v_12;
v_11:
    {
        LispObject v_123 = stack[-10];
        return cons(v_123, v_110);
    }
}



// Code for setdmode

static LispObject CC_setdmode(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_98, v_99, v_100;
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
    v_98 = stack[-2];
    if (!symbolp(v_98)) v_98 = nil;
    else { v_98 = qfastgets(v_98);
           if (v_98 != nil) { v_98 = elt(v_98, 8); // dname
#ifdef RECORD_GET
             if (v_98 != SPID_NOPROP)
                record_get(elt(fastget_names, 8), 1);
             else record_get(elt(fastget_names, 8), 0),
                v_98 = nil; }
           else record_get(elt(fastget_names, 8), 0); }
#else
             if (v_98 == SPID_NOPROP) v_98 = nil; }}
#endif
    stack[0] = v_98;
    if (v_98 == nil) goto v_11;
    v_98 = stack[0];
    stack[-2] = v_98;
    goto v_9;
v_11:
v_9:
    v_99 = stack[-2];
    v_98 = basic_elt(env, 1); // complex!-rational
    if (v_99 == v_98) goto v_17;
    else goto v_18;
v_17:
    v_98 = qvalue(basic_elt(env, 2)); // dmode!*
    stack[0] = v_98;
    if (v_98 == nil) goto v_24;
    v_98 = stack[0];
    if (!symbolp(v_98)) v_98 = nil;
    else { v_98 = qfastgets(v_98);
           if (v_98 != nil) { v_98 = elt(v_98, 8); // dname
#ifdef RECORD_GET
             if (v_98 != SPID_NOPROP)
                record_get(elt(fastget_names, 8), 1);
             else record_get(elt(fastget_names, 8), 0),
                v_98 = nil; }
           else record_get(elt(fastget_names, 8), 0); }
#else
             if (v_98 == SPID_NOPROP) v_98 = nil; }}
#endif
    stack[0] = v_98;
    goto v_22;
v_24:
v_22:
    v_99 = basic_elt(env, 3); // complex
    v_98 = stack[-1];
    {   LispObject fn = basic_elt(env, 13); // onoff
    v_98 = (*qfn2(fn))(fn, v_99, v_98);
    }
    env = stack[-4];
    v_99 = basic_elt(env, 4); // rational
    v_98 = stack[-1];
    {   LispObject fn = basic_elt(env, 13); // onoff
    v_98 = (*qfn2(fn))(fn, v_99, v_98);
    }
    v_98 = stack[0];
    goto v_7;
v_18:
    v_99 = stack[-2];
    v_98 = basic_elt(env, 5); // complex!-rounded
    if (v_99 == v_98) goto v_35;
    else goto v_36;
v_35:
    v_98 = qvalue(basic_elt(env, 2)); // dmode!*
    stack[0] = v_98;
    if (v_98 == nil) goto v_42;
    v_98 = stack[0];
    if (!symbolp(v_98)) v_98 = nil;
    else { v_98 = qfastgets(v_98);
           if (v_98 != nil) { v_98 = elt(v_98, 8); // dname
#ifdef RECORD_GET
             if (v_98 != SPID_NOPROP)
                record_get(elt(fastget_names, 8), 1);
             else record_get(elt(fastget_names, 8), 0),
                v_98 = nil; }
           else record_get(elt(fastget_names, 8), 0); }
#else
             if (v_98 == SPID_NOPROP) v_98 = nil; }}
#endif
    stack[0] = v_98;
    goto v_40;
v_42:
v_40:
    v_99 = basic_elt(env, 3); // complex
    v_98 = stack[-1];
    {   LispObject fn = basic_elt(env, 13); // onoff
    v_98 = (*qfn2(fn))(fn, v_99, v_98);
    }
    env = stack[-4];
    v_99 = basic_elt(env, 6); // rounded
    v_98 = stack[-1];
    {   LispObject fn = basic_elt(env, 13); // onoff
    v_98 = (*qfn2(fn))(fn, v_99, v_98);
    }
    v_98 = stack[0];
    goto v_7;
v_36:
    v_99 = stack[-2];
    v_98 = basic_elt(env, 7); // tag
    v_98 = get(v_99, v_98);
    env = stack[-4];
    if (v_98 == nil) goto v_55;
    else goto v_56;
v_55:
    stack[-3] = basic_elt(env, 8); // poly
    stack[0] = static_cast<LispObject>(80)+TAG_FIXNUM; // 5
    v_100 = basic_elt(env, 9); // "Domain mode error:"
    v_99 = stack[-2];
    v_98 = basic_elt(env, 10); // "is not a domain mode"
    v_98 = list3(v_100, v_99, v_98);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 14); // rerror
    v_98 = (*qfn3(fn))(fn, stack[-3], stack[0], v_98);
    }
    env = stack[-4];
    goto v_54;
v_56:
v_54:
    v_99 = stack[-2];
    v_98 = basic_elt(env, 11); // package!-name
    v_98 = get(v_99, v_98);
    env = stack[-4];
    stack[0] = v_98;
    if (v_98 == nil) goto v_70;
    v_98 = stack[0];
    {   LispObject fn = basic_elt(env, 15); // load!-package
    v_98 = (*qfn1(fn))(fn, v_98);
    }
    env = stack[-4];
    goto v_68;
v_70:
v_68:
    v_99 = stack[-2];
    v_98 = basic_elt(env, 3); // complex
    if (v_99 == v_98) goto v_82;
    else goto v_83;
v_82:
    v_98 = lisp_true;
    goto v_81;
v_83:
    v_98 = qvalue(basic_elt(env, 12)); // !*complex
    goto v_81;
    v_98 = nil;
v_81:
    if (v_98 == nil) goto v_79;
    v_99 = stack[-2];
    v_98 = stack[-1];
    {
        LispObject fn = basic_elt(env, 16); // setcmpxmode
        return (*qfn2(fn))(fn, v_99, v_98);
    }
v_79:
    v_99 = stack[-2];
    v_98 = stack[-1];
    {
        LispObject fn = basic_elt(env, 17); // setdmode1
        return (*qfn2(fn))(fn, v_99, v_98);
    }
    v_98 = nil;
v_7:
    return onevalue(v_98);
}



// Code for gbfdot

static LispObject CC_gbfdot(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // csl_timbf
    stack[-2] = (*qfn2(fn))(fn, v_17, v_16);
    }
    env = stack[-3];
    v_16 = stack[-1];
    if (!car_legal(v_16)) v_17 = cdrerror(v_16); else
    v_17 = cdr(v_16);
    v_16 = stack[0];
    if (!car_legal(v_16)) v_16 = cdrerror(v_16); else
    v_16 = cdr(v_16);
    {   LispObject fn = basic_elt(env, 1); // csl_timbf
    v_16 = (*qfn2(fn))(fn, v_17, v_16);
    }
    env = stack[-3];
    {
        LispObject v_21 = stack[-2];
        LispObject fn = basic_elt(env, 2); // plubf
        return (*qfn2(fn))(fn, v_21, v_16);
    }
}



// Code for r2findindex

static LispObject CC_r2findindex(LispObject env,
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
    v_9 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {
        LispObject fn = basic_elt(env, 1); // r2findindex1
        return (*qfn3(fn))(fn, v_11, v_10, v_9);
    }
}



// Code for comblog

static LispObject CC_comblog(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_92, v_93;
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
    v_92 = stack[0];
    if (!consp(v_92)) goto v_14;
    else goto v_15;
v_14:
    v_92 = lisp_true;
    goto v_13;
v_15:
    v_92 = stack[0];
    if (!car_legal(v_92)) v_93 = carerror(v_92); else
    v_93 = car(v_92);
    v_92 = qvalue(basic_elt(env, 1)); // domainlist!*
    v_92 = Lmemq(nil, v_93, v_92);
    goto v_13;
    v_92 = nil;
v_13:
    if (v_92 == nil) goto v_11;
    v_93 = stack[-1];
    v_92 = stack[0];
    {
        LispObject fn = basic_elt(env, 5); // nreverse
        return (*qfn2(fn))(fn, v_93, v_92);
    }
v_11:
    v_92 = stack[0];
    if (!car_legal(v_92)) v_93 = carerror(v_92); else
    v_93 = car(v_92);
    v_92 = basic_elt(env, 2); // plus
    if (v_93 == v_92) goto v_31;
    else goto v_32;
v_31:
    v_92 = lisp_true;
    goto v_30;
v_32:
    v_92 = stack[0];
    if (!car_legal(v_92)) v_93 = carerror(v_92); else
    v_93 = car(v_92);
    v_92 = basic_elt(env, 3); // times
    if (v_93 == v_92) goto v_41;
    else goto v_42;
v_41:
    v_92 = stack[0];
    {   LispObject fn = basic_elt(env, 6); // simp!*
    v_92 = (*qfn1(fn))(fn, v_92);
    }
    env = stack[-2];
    if (!car_legal(v_92)) v_92 = carerror(v_92); else
    v_92 = car(v_92);
    v_93 = v_92;
    v_92 = v_93;
    if (!consp(v_92)) goto v_56;
    else goto v_57;
v_56:
    v_92 = lisp_true;
    goto v_55;
v_57:
    v_92 = v_93;
    if (!car_legal(v_92)) v_92 = carerror(v_92); else
    v_92 = car(v_92);
    v_92 = (consp(v_92) ? nil : lisp_true);
    goto v_55;
    v_92 = nil;
v_55:
    if (v_92 == nil) goto v_52;
    else goto v_53;
v_52:
    v_92 = v_93;
    if (!car_legal(v_92)) v_92 = carerror(v_92); else
    v_92 = car(v_92);
    if (!car_legal(v_92)) v_92 = carerror(v_92); else
    v_92 = car(v_92);
    if (!car_legal(v_92)) v_93 = carerror(v_92); else
    v_93 = car(v_92);
    v_92 = basic_elt(env, 4); // log
    v_92 = Leqcar(nil, v_93, v_92);
    env = stack[-2];
    goto v_51;
v_53:
    v_92 = nil;
    goto v_51;
    v_92 = nil;
v_51:
    goto v_40;
v_42:
    v_92 = nil;
    goto v_40;
    v_92 = nil;
v_40:
    goto v_30;
    v_92 = nil;
v_30:
    if (v_92 == nil) goto v_28;
    v_92 = stack[0];
    {   LispObject fn = basic_elt(env, 6); // simp!*
    v_92 = (*qfn1(fn))(fn, v_92);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 7); // clogsq
    v_92 = (*qfn1(fn))(fn, v_92);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 8); // prepsq!*
    v_92 = (*qfn1(fn))(fn, v_92);
    }
    env = stack[-2];
    {
        LispObject v_96 = stack[-1];
        LispObject fn = basic_elt(env, 5); // nreverse
        return (*qfn2(fn))(fn, v_96, v_92);
    }
v_28:
    v_92 = stack[0];
    if (!car_legal(v_92)) v_92 = carerror(v_92); else
    v_92 = car(v_92);
    {   LispObject fn = basic_elt(env, 0); // comblog
    v_93 = (*qfn1(fn))(fn, v_92);
    }
    env = stack[-2];
    v_92 = stack[-1];
    v_92 = cons(v_93, v_92);
    env = stack[-2];
    stack[-1] = v_92;
    v_92 = stack[0];
    if (!car_legal(v_92)) v_92 = cdrerror(v_92); else
    v_92 = cdr(v_92);
    stack[0] = v_92;
    goto v_7;
    v_92 = nil;
    return onevalue(v_92);
}



// Code for assert_check1

static LispObject CC_assert_check1(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_178, v_179, v_180;
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(14);
// copy arguments values to proper place
    stack[-7] = v_6;
    stack[-8] = v_5;
    stack[-9] = v_4;
    stack[-10] = v_3;
    stack[-11] = v_2;
// end of prologue
    stack[-6] = nil;
    v_178 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-5] = v_178;
    v_178 = qvalue(basic_elt(env, 1)); // !*assertstatistics
    if (v_178 == nil) goto v_20;
    v_179 = stack[-11];
    v_178 = qvalue(basic_elt(env, 2)); // assertstatistics!*
    v_178 = Latsoc(nil, v_179, v_178);
    v_179 = v_178;
    v_178 = v_179;
    if (v_178 == nil) goto v_28;
    v_178 = v_179;
    if (!car_legal(v_178)) stack[0] = cdrerror(v_178); else
    stack[0] = cdr(v_178);
    v_178 = v_179;
    if (!car_legal(v_178)) v_178 = cdrerror(v_178); else
    v_178 = cdr(v_178);
    if (!car_legal(v_178)) v_178 = carerror(v_178); else
    v_178 = car(v_178);
    v_178 = add1(v_178);
    env = stack[-13];
    {   LispObject fn = basic_elt(env, 5); // setcar
    v_178 = (*qfn2(fn))(fn, stack[0], v_178);
    }
    env = stack[-13];
    goto v_26;
v_28:
    stack[0] = stack[-11];
    v_180 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_179 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_178 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_179 = list3(v_180, v_179, v_178);
    env = stack[-13];
    v_178 = qvalue(basic_elt(env, 2)); // assertstatistics!*
    v_178 = acons(stack[0], v_179, v_178);
    env = stack[-13];
    setvalue(basic_elt(env, 2), v_178); // assertstatistics!*
    goto v_26;
v_26:
    goto v_18;
v_20:
v_18:
    v_178 = stack[-8];
    stack[-12] = v_178;
    v_178 = stack[-9];
    stack[-4] = v_178;
v_50:
    v_178 = stack[-4];
    if (v_178 == nil) goto v_54;
    else goto v_55;
v_54:
    goto v_49;
v_55:
    v_178 = stack[-4];
    if (!car_legal(v_178)) v_178 = carerror(v_178); else
    v_178 = car(v_178);
    stack[-3] = v_178;
    v_178 = stack[-5];
    v_178 = add1(v_178);
    env = stack[-13];
    stack[-5] = v_178;
    v_178 = stack[-12];
    if (!car_legal(v_178)) v_179 = carerror(v_178); else
    v_179 = car(v_178);
    v_178 = basic_elt(env, 3); // assert_dyntypechk
    v_178 = get(v_179, v_178);
    env = stack[-13];
    v_179 = v_178;
    if (v_178 == nil) goto v_66;
    stack[0] = v_179;
    v_178 = stack[-3];
    v_178 = ncons(v_178);
    env = stack[-13];
    {   LispObject fn = basic_elt(env, 6); // apply
    v_178 = (*qfn2(fn))(fn, stack[0], v_178);
    }
    env = stack[-13];
    if (v_178 == nil) goto v_75;
    else goto v_76;
v_75:
    v_178 = stack[-3];
    v_178 = Lconsp(nil, v_178);
    env = stack[-13];
    if (v_178 == nil) goto v_83;
    else goto v_84;
v_83:
    v_178 = nil;
    goto v_82;
v_84:
    v_178 = stack[-3];
    if (!car_legal(v_178)) v_179 = carerror(v_178); else
    v_179 = car(v_178);
    v_178 = basic_elt(env, 4); // assert_ignore
    v_178 = Lflagp(nil, v_179, v_178);
    env = stack[-13];
    goto v_82;
    v_178 = nil;
v_82:
    v_178 = (v_178 == nil ? lisp_true : nil);
    goto v_74;
v_76:
    v_178 = nil;
    goto v_74;
    v_178 = nil;
v_74:
    if (v_178 == nil) goto v_66;
    v_178 = lisp_true;
    stack[-6] = v_178;
    stack[-2] = stack[-11];
    stack[-1] = stack[-8];
    stack[0] = stack[-7];
    v_180 = stack[-5];
    v_178 = stack[-12];
    if (!car_legal(v_178)) v_179 = carerror(v_178); else
    v_179 = car(v_178);
    v_178 = stack[-3];
    v_178 = list3(v_180, v_179, v_178);
    env = stack[-13];
    {   LispObject fn = basic_elt(env, 7); // assert_error
    v_178 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_178);
    }
    env = stack[-13];
    goto v_64;
v_66:
v_64:
    v_178 = stack[-12];
    if (!car_legal(v_178)) v_178 = cdrerror(v_178); else
    v_178 = cdr(v_178);
    stack[-12] = v_178;
    v_178 = stack[-4];
    if (!car_legal(v_178)) v_178 = cdrerror(v_178); else
    v_178 = cdr(v_178);
    stack[-4] = v_178;
    goto v_50;
v_49:
    v_179 = stack[-10];
    v_178 = stack[-9];
    {   LispObject fn = basic_elt(env, 6); // apply
    v_178 = (*qfn2(fn))(fn, v_179, v_178);
    }
    env = stack[-13];
    stack[-2] = v_178;
    v_179 = stack[-7];
    v_178 = basic_elt(env, 3); // assert_dyntypechk
    v_178 = get(v_179, v_178);
    env = stack[-13];
    v_179 = v_178;
    if (v_178 == nil) goto v_118;
    stack[0] = v_179;
    v_178 = stack[-2];
    v_178 = ncons(v_178);
    env = stack[-13];
    {   LispObject fn = basic_elt(env, 6); // apply
    v_178 = (*qfn2(fn))(fn, stack[0], v_178);
    }
    env = stack[-13];
    if (v_178 == nil) goto v_126;
    else goto v_127;
v_126:
    v_178 = stack[-2];
    v_178 = Lconsp(nil, v_178);
    env = stack[-13];
    if (v_178 == nil) goto v_134;
    else goto v_135;
v_134:
    v_178 = nil;
    goto v_133;
v_135:
    v_178 = stack[-2];
    if (!car_legal(v_178)) v_179 = carerror(v_178); else
    v_179 = car(v_178);
    v_178 = basic_elt(env, 4); // assert_ignore
    v_178 = Lflagp(nil, v_179, v_178);
    env = stack[-13];
    goto v_133;
    v_178 = nil;
v_133:
    v_178 = (v_178 == nil ? lisp_true : nil);
    goto v_125;
v_127:
    v_178 = nil;
    goto v_125;
    v_178 = nil;
v_125:
    if (v_178 == nil) goto v_118;
    v_178 = lisp_true;
    stack[-6] = v_178;
    stack[-1] = stack[-11];
    stack[-3] = stack[-8];
    stack[0] = stack[-7];
    v_180 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_179 = stack[-7];
    v_178 = stack[-2];
    v_178 = list3(v_180, v_179, v_178);
    env = stack[-13];
    {   LispObject fn = basic_elt(env, 7); // assert_error
    v_178 = (*qfn4up(fn))(fn, stack[-1], stack[-3], stack[0], v_178);
    }
    env = stack[-13];
    goto v_116;
v_118:
v_116:
    v_178 = qvalue(basic_elt(env, 1)); // !*assertstatistics
    if (v_178 == nil) goto v_161;
    v_178 = stack[-6];
    if (v_178 == nil) goto v_161;
    v_179 = stack[-11];
    v_178 = qvalue(basic_elt(env, 2)); // assertstatistics!*
    v_178 = Latsoc(nil, v_179, v_178);
    if (!car_legal(v_178)) v_178 = cdrerror(v_178); else
    v_178 = cdr(v_178);
    v_179 = v_178;
    v_178 = v_179;
    if (!car_legal(v_178)) stack[0] = cdrerror(v_178); else
    stack[0] = cdr(v_178);
    v_178 = v_179;
    if (!car_legal(v_178)) v_178 = cdrerror(v_178); else
    v_178 = cdr(v_178);
    if (!car_legal(v_178)) v_178 = carerror(v_178); else
    v_178 = car(v_178);
    v_178 = add1(v_178);
    env = stack[-13];
    {   LispObject fn = basic_elt(env, 5); // setcar
    v_178 = (*qfn2(fn))(fn, stack[0], v_178);
    }
    goto v_159;
v_161:
v_159:
    v_178 = stack[-2];
    return onevalue(v_178);
}



// Code for matop_pseudomod

static LispObject CC_matop_pseudomod(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // mod!*
    v_9 = (*qfn2(fn))(fn, v_10, v_9);
    }
    if (!car_legal(v_9)) v_9 = carerror(v_9); else
    v_9 = car(v_9);
    return onevalue(v_9);
}



// Code for gcdout

static LispObject CC_gcdout(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_63, v_64, v_65;
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
    v_63 = qvalue(basic_elt(env, 1)); // !*modular
    if (v_63 == nil) goto v_7;
    v_63 = stack[0];
    goto v_5;
v_7:
    v_63 = stack[0];
    if (v_63 == nil) goto v_10;
    else goto v_11;
v_10:
    v_63 = nil;
    goto v_5;
v_11:
    v_63 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // ljet
    v_63 = (*qfn1(fn))(fn, v_63);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // ord
    v_64 = (*qfn1(fn))(fn, v_63);
    }
    env = stack[-2];
    v_63 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_64 == v_63) goto v_14;
    else goto v_15;
v_14:
    v_63 = stack[0];
    goto v_5;
v_15:
    v_63 = stack[0];
    stack[-1] = v_63;
    v_63 = stack[-1];
    if (!car_legal(v_63)) v_63 = carerror(v_63); else
    v_63 = car(v_63);
    if (!car_legal(v_63)) v_63 = cdrerror(v_63); else
    v_63 = cdr(v_63);
    v_65 = v_63;
v_33:
    v_63 = stack[-1];
    if (v_63 == nil) goto v_36;
    v_64 = v_65;
    v_63 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_64 == v_63) goto v_36;
    goto v_37;
v_36:
    goto v_32;
v_37:
    v_64 = v_65;
    v_63 = stack[-1];
    if (!car_legal(v_63)) v_63 = carerror(v_63); else
    v_63 = car(v_63);
    if (!car_legal(v_63)) v_63 = cdrerror(v_63); else
    v_63 = cdr(v_63);
    {   LispObject fn = basic_elt(env, 4); // gcdf!*
    v_63 = (*qfn2(fn))(fn, v_64, v_63);
    }
    env = stack[-2];
    v_65 = v_63;
    v_63 = stack[-1];
    if (!car_legal(v_63)) v_63 = cdrerror(v_63); else
    v_63 = cdr(v_63);
    stack[-1] = v_63;
    goto v_33;
v_32:
    v_64 = v_65;
    v_63 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_64 == v_63) goto v_53;
    else goto v_54;
v_53:
    v_63 = stack[0];
    goto v_52;
v_54:
    v_63 = stack[0];
    v_64 = v_65;
    {
        LispObject fn = basic_elt(env, 5); // pcdiv
        return (*qfn2(fn))(fn, v_63, v_64);
    }
    v_63 = nil;
v_52:
    goto v_5;
    v_63 = nil;
v_5:
    return onevalue(v_63);
}



setup_type const u24_setup[] =
{
    {"fs:null-angle",           G0W1,     CC_fsTnullKangle,G2W1,G3W1,   G4W1},
    {"mo_equal?",               G0W2,     G1W2,     CC_mo_equalW,G3W2,  G4W2},
    {"st_sorttree",             G0W3,     G1W3,     G2W3,     CC_st_sorttree,G4W3},
    {"rlis",                    CC_rlis,  G1W0,     G2W0,     G3W0,     G4W0},
    {"settinsert",              G0W1,     CC_settinsert,G2W1, G3W1,     G4W1},
    {"get*elements",            G0W1,     CC_getHelements,G2W1,G3W1,    G4W1},
    {"dipcondense",             G0W1,     CC_dipcondense,G2W1,G3W1,     G4W1},
    {"cut:ep",                  G0W2,     G1W2,     CC_cutTep,G3W2,     G4W2},
    {"splitcomplex",            G0W1,     CC_splitcomplex,G2W1,G3W1,    G4W1},
    {"fs:prin1",                G0W1,     CC_fsTprin1,G2W1,   G3W1,     G4W1},
    {"mo_lcm",                  G0W2,     G1W2,     CC_mo_lcm,G3W2,     G4W2},
    {"numlist_ordp",            G0W2,     G1W2,     CC_numlist_ordp,G3W2,G4W2},
    {"lambda_ygm6np4pcqv31",    G0W2,     G1W2,     CC_lambda_ygm6np4pcqv31,G3W2,G4W2},
    {"remlocs",                 G0W1,     CC_remlocs,G2W1,    G3W1,     G4W1},
    {"revalx",                  G0W1,     CC_revalx,G2W1,     G3W1,     G4W1},
    {"rl_subalchk",             G0W1,     CC_rl_subalchk,G2W1,G3W1,     G4W1},
    {"pasf_zcong",              G0W1,     CC_pasf_zcong,G2W1, G3W1,     G4W1},
    {"vdp_setsugar",            G0W2,     G1W2,     CC_vdp_setsugar,G3W2,G4W2},
    {"ps:prepfn:",              G0W1,     CC_psTprepfnT,G2W1, G3W1,     G4W1},
    {"ps:putv",                 G0W3,     G1W3,     G2W3,     CC_psTputv,G4W3},
    {"mktails",                 G0W3,     G1W3,     G2W3,     CC_mktails,G4W3},
    {"impartf",                 G0W1,     CC_impartf,G2W1,    G3W1,     G4W1},
    {"riv_mk",                  G0W2,     G1W2,     CC_riv_mk,G3W2,     G4W2},
    {"aex_bvarl",               G0W1,     CC_aex_bvarl,G2W1,  G3W1,     G4W1},
    {"gcref_mkgraph-tgf",       G0W1,     CC_gcref_mkgraphKtgf,G2W1,G3W1,G4W1},
    {"polynomlistreduce",       G0W3,     G1W3,     G2W3,     CC_polynomlistreduce,G4W3},
    {"opmtchrevop",             G0W1,     CC_opmtchrevop,G2W1,G3W1,     G4W1},
    {"rl_eqnrhskernels",        G0W1,     CC_rl_eqnrhskernels,G2W1,G3W1,G4W1},
    {"pasf_floor",              G0W2,     G1W2,     CC_pasf_floor,G3W2, G4W2},
    {"bvarml",                  G0W1,     CC_bvarml,G2W1,     G3W1,     G4W1},
    {"band_matrix",             G0W2,     G1W2,     CC_band_matrix,G3W2,G4W2},
    {"rd:zerop:",               G0W1,     CC_rdTzeropT,G2W1,  G3W1,     G4W1},
    {"flatindl",                G0W1,     CC_flatindl,G2W1,   G3W1,     G4W1},
    {"formcond1",               G0W3,     G1W3,     G2W3,     CC_formcond1,G4W3},
    {"red_totalred",            G0W2,     G1W2,     CC_red_totalred,G3W2,G4W2},
    {"ilog2",                   G0W1,     CC_ilog2, G2W1,     G3W1,     G4W1},
    {"lalr_prin_production",    G0W1,     CC_lalr_prin_production,G2W1,G3W1,G4W1},
    {"defineargs",              G0W2,     G1W2,     CC_defineargs,G3W2, G4W2},
    {"ofsf_ignshift",           G0W3,     G1W3,     G2W3,     CC_ofsf_ignshift,G4W3},
    {"tripleisprolongedby",     G0W2,     G1W2,     CC_tripleisprolongedby,G3W2,G4W2},
    {"ofsf_smupdknowl",         G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_ofsf_smupdknowl},
    {"cl_smsimpl-junct1",       G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_cl_smsimplKjunct1},
    {"om2ir",                   CC_om2ir, G1W0,     G2W0,     G3W0,     G4W0},
    {"mkmatrix",                G0W2,     G1W2,     CC_mkmatrix,G3W2,   G4W2},
    {"setdmode",                G0W2,     G1W2,     CC_setdmode,G3W2,   G4W2},
    {"gbfdot",                  G0W2,     G1W2,     CC_gbfdot,G3W2,     G4W2},
    {"r2findindex",             G0W2,     G1W2,     CC_r2findindex,G3W2,G4W2},
    {"comblog",                 G0W1,     CC_comblog,G2W1,    G3W1,     G4W1},
    {"assert_check1",           G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_assert_check1},
    {"matop_pseudomod",         G0W2,     G1W2,     CC_matop_pseudomod,G3W2,G4W2},
    {"gcdout",                  G0W1,     CC_gcdout,G2W1,     G3W1,     G4W1},
    {nullptr, 
        reinterpret_cast<no_args *>(
            reinterpret_cast<uintptr_t>("u24")),
        reinterpret_cast<one_arg *>(
            reinterpret_cast<uintptr_t>("63807 1997501 6377117")),
        nullptr, nullptr, nullptr}
};

// end of generated code
