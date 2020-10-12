
// $destdir/u38.c        Machine generated C code

// $Id$

#include "config.h"
#include "headers.h"



// Code for weak_xreduce1

static LispObject CC_weak_xreduce1(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    stack[-3] = v_4;
    stack[-4] = v_3;
    stack[-5] = v_2;
// end of prologue
    v_104 = stack[-4];
    stack[0] = v_104;
v_16:
    v_104 = stack[-5];
    if (v_104 == nil) goto v_19;
    v_104 = stack[0];
    if (v_104 == nil) goto v_19;
    goto v_20;
v_19:
    goto v_15;
v_20:
    v_104 = stack[0];
    if (!car_legal(v_104)) v_104 = carerror(v_104); else
    v_104 = car(v_104);
    stack[-6] = v_104;
    v_104 = stack[0];
    if (!car_legal(v_104)) v_104 = cdrerror(v_104); else
    v_104 = cdr(v_104);
    stack[0] = v_104;
    v_104 = stack[-6];
    {   LispObject fn = basic_elt(env, 7); // xval
    stack[-1] = (*qfn1(fn))(fn, v_104);
    }
    env = stack[-7];
    v_104 = stack[-5];
    {   LispObject fn = basic_elt(env, 7); // xval
    v_104 = (*qfn1(fn))(fn, v_104);
    }
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 8); // xdiv
    v_104 = (*qfn2(fn))(fn, stack[-1], v_104);
    }
    env = stack[-7];
    stack[-1] = v_104;
    if (v_104 == nil) goto v_35;
    v_104 = stack[-1];
    {   LispObject fn = basic_elt(env, 9); // mknwedge
    v_106 = (*qfn1(fn))(fn, v_104);
    }
    env = stack[-7];
    v_105 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_104 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_104 = list2star(v_106, v_105, v_104);
    env = stack[-7];
    v_104 = ncons(v_104);
    env = stack[-7];
    stack[-1] = v_104;
    v_105 = stack[-1];
    v_104 = stack[-6];
    {   LispObject fn = basic_elt(env, 10); // wedgepf
    v_104 = (*qfn2(fn))(fn, v_105, v_104);
    }
    env = stack[-7];
    stack[0] = v_104;
    v_104 = stack[-5];
    if (!car_legal(v_104)) v_104 = carerror(v_104); else
    v_104 = car(v_104);
    if (!car_legal(v_104)) v_105 = cdrerror(v_104); else
    v_105 = cdr(v_104);
    v_104 = stack[0];
    if (!car_legal(v_104)) v_104 = carerror(v_104); else
    v_104 = car(v_104);
    if (!car_legal(v_104)) v_104 = cdrerror(v_104); else
    v_104 = cdr(v_104);
    {   LispObject fn = basic_elt(env, 11); // quotsq
    v_104 = (*qfn2(fn))(fn, v_105, v_104);
    }
    env = stack[-7];
    stack[-2] = v_104;
    v_104 = stack[-2];
    {   LispObject fn = basic_elt(env, 12); // negsq
    v_104 = (*qfn1(fn))(fn, v_104);
    }
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 13); // multpfsq
    v_104 = (*qfn2(fn))(fn, stack[0], v_104);
    }
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 14); // addpf
    v_104 = (*qfn2(fn))(fn, stack[-5], v_104);
    }
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 15); // subs2pf
    v_104 = (*qfn1(fn))(fn, v_104);
    }
    env = stack[-7];
    stack[-5] = v_104;
    v_104 = qvalue(basic_elt(env, 1)); // !*trxmod
    if (v_104 == nil) goto v_69;
    stack[0] = stack[-3];
    v_105 = stack[-1];
    v_104 = stack[-2];
    {   LispObject fn = basic_elt(env, 13); // multpfsq
    v_105 = (*qfn2(fn))(fn, v_105, v_104);
    }
    env = stack[-7];
    v_104 = stack[-6];
    v_104 = list2(v_105, v_104);
    env = stack[-7];
    v_104 = ncons(v_104);
    env = stack[-7];
    v_104 = Lnconc(nil, stack[0], v_104);
    env = stack[-7];
    stack[-3] = v_104;
    goto v_67;
v_69:
v_67:
    v_104 = qvalue(basic_elt(env, 1)); // !*trxmod
    if (v_104 == nil) goto v_82;
    v_105 = basic_elt(env, 2); // "   "
    v_104 = basic_elt(env, 3); // first
    {   LispObject fn = basic_elt(env, 16); // writepri
    v_104 = (*qfn2(fn))(fn, v_105, v_104);
    }
    env = stack[-7];
    stack[0] = basic_elt(env, 4); // wedge
    v_105 = stack[-1];
    v_104 = stack[-2];
    {   LispObject fn = basic_elt(env, 13); // multpfsq
    v_104 = (*qfn2(fn))(fn, v_105, v_104);
    }
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 17); // preppf
    stack[-1] = (*qfn1(fn))(fn, v_104);
    }
    env = stack[-7];
    v_104 = stack[-6];
    {   LispObject fn = basic_elt(env, 17); // preppf
    v_104 = (*qfn1(fn))(fn, v_104);
    }
    env = stack[-7];
    v_104 = list3(stack[0], stack[-1], v_104);
    env = stack[-7];
    v_105 = Lmkquote(nil, v_104);
    env = stack[-7];
    v_104 = nil;
    {   LispObject fn = basic_elt(env, 16); // writepri
    v_104 = (*qfn2(fn))(fn, v_105, v_104);
    }
    env = stack[-7];
    v_105 = basic_elt(env, 5); // " +"
    v_104 = basic_elt(env, 6); // last
    {   LispObject fn = basic_elt(env, 16); // writepri
    v_104 = (*qfn2(fn))(fn, v_105, v_104);
    }
    env = stack[-7];
    goto v_80;
v_82:
v_80:
    v_104 = stack[-4];
    stack[0] = v_104;
    goto v_33;
v_35:
v_33:
    goto v_16;
v_15:
    v_104 = stack[-5];
    return onevalue(v_104);
}



// Code for intrdsortin

static LispObject CC_intrdsortin(LispObject env,
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
    stack[-2] = nil;
v_8:
    v_44 = stack[0];
    if (v_44 == nil) goto v_11;
    else goto v_12;
v_11:
    stack[0] = stack[-2];
    v_44 = stack[-1];
    v_44 = ncons(v_44);
    env = stack[-3];
    {
        LispObject v_49 = stack[0];
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn2(fn))(fn, v_49, v_44);
    }
v_12:
    v_44 = stack[-1];
    if (!car_legal(v_44)) v_45 = carerror(v_44); else
    v_45 = car(v_44);
    v_44 = stack[0];
    if (!car_legal(v_44)) v_44 = carerror(v_44); else
    v_44 = car(v_44);
    if (!car_legal(v_44)) v_44 = carerror(v_44); else
    v_44 = car(v_44);
    {   LispObject fn = basic_elt(env, 2); // !:difference
    v_44 = (*qfn2(fn))(fn, v_45, v_44);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 3); // !:minusp
    v_44 = (*qfn1(fn))(fn, v_44);
    }
    env = stack[-3];
    if (v_44 == nil) goto v_19;
    v_44 = stack[0];
    if (!car_legal(v_44)) v_45 = carerror(v_44); else
    v_45 = car(v_44);
    v_44 = stack[-2];
    v_44 = cons(v_45, v_44);
    env = stack[-3];
    stack[-2] = v_44;
    v_44 = stack[0];
    if (!car_legal(v_44)) v_44 = cdrerror(v_44); else
    v_44 = cdr(v_44);
    stack[0] = v_44;
    goto v_8;
v_19:
    v_45 = stack[-1];
    v_44 = stack[0];
    v_44 = cons(v_45, v_44);
    env = stack[-3];
    {
        LispObject v_50 = stack[-2];
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn2(fn))(fn, v_50, v_44);
    }
    v_44 = nil;
    return onevalue(v_44);
}



// Code for all_defined_vertex

static LispObject CC_all_defined_vertex(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    v_11 = v_3;
    v_12 = v_2;
// end of prologue
    stack[-2] = v_12;
    stack[-1] = nil;
    stack[0] = nil;
    v_11 = ncons(v_11);
    env = stack[-3];
    {
        LispObject v_16 = stack[-2];
        LispObject v_17 = stack[-1];
        LispObject v_18 = stack[0];
        LispObject fn = basic_elt(env, 1); // al1_defined_vertex
        return (*qfn4up(fn))(fn, v_16, v_17, v_18, v_11);
    }
}



// Code for listeval0

static LispObject CC_listeval0(LispObject env,
                         LispObject v_2)
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
    v_62 = qvalue(basic_elt(env, 1)); // simpcount!*
    v_63 = add1(v_62);
    env = stack[-1];
    setvalue(basic_elt(env, 1), v_63); // simpcount!*
    v_62 = qvalue(basic_elt(env, 2)); // simplimit!*
    v_62 = static_cast<LispObject>(greaterp2(v_63, v_62));
    v_62 = v_62 ? lisp_true : nil;
    env = stack[-1];
    if (v_62 == nil) goto v_10;
    v_62 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    setvalue(basic_elt(env, 1), v_62); // simpcount!*
    v_64 = basic_elt(env, 3); // rlisp
    v_63 = static_cast<LispObject>(320)+TAG_FIXNUM; // 20
    v_62 = basic_elt(env, 4); // "Simplification recursion too deep"
    {   LispObject fn = basic_elt(env, 6); // rerror
    v_62 = (*qfn3(fn))(fn, v_64, v_63, v_62);
    }
    env = stack[-1];
    goto v_8;
v_10:
v_8:
    v_62 = stack[0];
    if (symbolp(v_62)) goto v_22;
    else goto v_23;
v_22:
    v_62 = stack[0];
    if (!symbolp(v_62)) v_62 = nil;
    else { v_62 = qfastgets(v_62);
           if (v_62 != nil) { v_62 = elt(v_62, 17); // share
#ifdef RECORD_GET
             if (v_62 == SPID_NOPROP)
                record_get(elt(fastget_names, 17), 0),
                v_62 = nil;
             else record_get(elt(fastget_names, 17), 1),
                v_62 = lisp_true; }
           else record_get(elt(fastget_names, 17), 0); }
#else
             if (v_62 == SPID_NOPROP) v_62 = nil; else v_62 = lisp_true; }}
#endif
    if (v_62 == nil) goto v_28;
    v_62 = stack[0];
    {   LispObject fn = basic_elt(env, 7); // eval
    v_62 = (*qfn1(fn))(fn, v_62);
    }
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 0); // listeval0
    v_62 = (*qfn1(fn))(fn, v_62);
    }
    env = stack[-1];
    stack[0] = v_62;
    goto v_26;
v_28:
    v_62 = stack[0];
    if (!symbolp(v_62)) v_62 = nil;
    else { v_62 = qfastgets(v_62);
           if (v_62 != nil) { v_62 = elt(v_62, 4); // avalue
#ifdef RECORD_GET
             if (v_62 != SPID_NOPROP)
                record_get(elt(fastget_names, 4), 1);
             else record_get(elt(fastget_names, 4), 0),
                v_62 = nil; }
           else record_get(elt(fastget_names, 4), 0); }
#else
             if (v_62 == SPID_NOPROP) v_62 = nil; }}
#endif
    v_64 = v_62;
    if (v_62 == nil) goto v_35;
    v_62 = v_64;
    if (!car_legal(v_62)) v_62 = cdrerror(v_62); else
    v_62 = cdr(v_62);
    if (!car_legal(v_62)) v_63 = carerror(v_62); else
    v_63 = car(v_62);
    v_62 = stack[0];
    if (equal(v_63, v_62)) goto v_35;
    v_62 = v_64;
    if (!car_legal(v_62)) v_62 = cdrerror(v_62); else
    v_62 = cdr(v_62);
    if (!car_legal(v_62)) v_62 = carerror(v_62); else
    v_62 = car(v_62);
    {   LispObject fn = basic_elt(env, 0); // listeval0
    v_62 = (*qfn1(fn))(fn, v_62);
    }
    env = stack[-1];
    stack[0] = v_62;
    goto v_26;
v_35:
v_26:
    goto v_21;
v_23:
v_21:
    v_62 = stack[0];
    if (!car_legal(v_62)) v_62 = carerror(v_62); else
    v_62 = car(v_62);
    {   LispObject fn = basic_elt(env, 8); // getrtype
    v_63 = (*qfn1(fn))(fn, v_62);
    }
    env = stack[-1];
    v_62 = basic_elt(env, 5); // array
    if (v_63 == v_62) goto v_50;
    else goto v_51;
v_50:
    v_62 = stack[0];
    {   LispObject fn = basic_elt(env, 9); // getelv
    v_62 = (*qfn1(fn))(fn, v_62);
    }
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 0); // listeval0
    v_62 = (*qfn1(fn))(fn, v_62);
    }
    env = stack[-1];
    stack[0] = v_62;
    goto v_49;
v_51:
v_49:
    v_62 = qvalue(basic_elt(env, 1)); // simpcount!*
    v_62 = sub1(v_62);
    env = stack[-1];
    setvalue(basic_elt(env, 1), v_62); // simpcount!*
    v_62 = stack[0];
    return onevalue(v_62);
}



// Code for num_signsort

static LispObject CC_num_signsort(LispObject env,
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
    v_7 = basic_elt(env, 1); // lambda_ygm6np4pcqv31
    {
        LispObject fn = basic_elt(env, 2); // ad_signsort
        return (*qfn2(fn))(fn, v_8, v_7);
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



// Code for lpos

static LispObject CC_lpos(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_20, v_21, v_22, v_23;
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
    v_22 = v_3;
    v_23 = v_2;
// end of prologue
    v_21 = v_23;
    v_20 = v_22;
    if (!car_legal(v_20)) v_20 = carerror(v_20); else
    v_20 = car(v_20);
    if (v_21 == v_20) goto v_7;
    else goto v_8;
v_7:
    v_20 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_6;
v_8:
    v_20 = v_23;
    v_21 = v_22;
    if (!car_legal(v_21)) v_21 = cdrerror(v_21); else
    v_21 = cdr(v_21);
    {   LispObject fn = basic_elt(env, 0); // lpos
    v_20 = (*qfn2(fn))(fn, v_20, v_21);
    }
    return add1(v_20);
    v_20 = nil;
v_6:
    return onevalue(v_20);
}



// Code for makeqn!-maybe

static LispObject CC_makeqnKmaybe(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_18, v_19, v_20;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_18 = v_4;
    v_19 = v_3;
    v_20 = v_2;
// end of prologue
    if (v_18 == nil) goto v_9;
    v_18 = v_19;
    goto v_7;
v_9:
    v_18 = basic_elt(env, 1); // equal
    return list3(v_18, v_20, v_19);
    v_18 = nil;
v_7:
    return onevalue(v_18);
}



// Code for lalr_lr0_initial_itemset

static LispObject CC_lalr_lr0_initial_itemset(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
    stack_popper stack_popper_var(1);
// end of prologue
    v_19 = basic_elt(env, 1); // !S!'
    {   LispObject fn = basic_elt(env, 3); // lalr_productions
    v_19 = (*qfn1(fn))(fn, v_19);
    }
    env = stack[0];
    if (!car_legal(v_19)) v_19 = carerror(v_19); else
    v_19 = car(v_19);
    if (!car_legal(v_19)) v_19 = carerror(v_19); else
    v_19 = car(v_19);
    if (!car_legal(v_19)) v_19 = carerror(v_19); else
    v_19 = car(v_19);
    v_21 = basic_elt(env, 1); // !S!'
    v_20 = basic_elt(env, 2); // !.
    v_19 = list3(v_21, v_20, v_19);
    env = stack[0];
    v_19 = ncons(v_19);
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 4); // lalr_lr0_closure
        return (*qfn1(fn))(fn, v_19);
    }
    return onevalue(v_19);
}



// Code for aex_mklcnt

static LispObject CC_aex_mklcnt(LispObject env,
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
    stack[0] = v_2;
// end of prologue
v_1:
    v_56 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // aex_simpleratp
    v_56 = (*qfn1(fn))(fn, v_56);
    }
    env = stack[-2];
    if (v_56 == nil) goto v_11;
    else goto v_9;
v_11:
    v_56 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // aex_ctx
    v_56 = (*qfn1(fn))(fn, v_56);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // ctx_idl
    v_56 = (*qfn1(fn))(fn, v_56);
    }
    env = stack[-2];
    if (v_56 == nil) goto v_9;
    goto v_10;
v_9:
    v_56 = stack[0];
    goto v_6;
v_10:
    v_56 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // aex_fvarl
    v_56 = (*qfn1(fn))(fn, v_56);
    }
    env = stack[-2];
    stack[-1] = v_56;
    v_56 = stack[-1];
    if (v_56 == nil) goto v_24;
    goto v_29;
    goto v_27;
v_29:
v_27:
    v_57 = stack[0];
    v_56 = stack[-1];
    if (!car_legal(v_56)) v_56 = carerror(v_56); else
    v_56 = car(v_56);
    {   LispObject fn = basic_elt(env, 5); // aex_lc
    v_56 = (*qfn2(fn))(fn, v_57, v_56);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 6); // aex_nullp
    v_56 = (*qfn1(fn))(fn, v_56);
    }
    env = stack[-2];
    if (v_56 == nil) goto v_34;
    v_57 = stack[0];
    v_56 = stack[-1];
    if (!car_legal(v_56)) v_56 = carerror(v_56); else
    v_56 = car(v_56);
    {   LispObject fn = basic_elt(env, 7); // aex_red
    v_56 = (*qfn2(fn))(fn, v_57, v_56);
    }
    env = stack[-2];
    stack[0] = v_56;
    goto v_1;
v_34:
    v_56 = stack[0];
    goto v_6;
v_24:
    v_56 = stack[0];
    {   LispObject fn = basic_elt(env, 8); // aex_sgn
    v_57 = (*qfn1(fn))(fn, v_56);
    }
    env = stack[-2];
    v_56 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_56 = Leqn_2(nil, v_57, v_56);
    env = stack[-2];
    if (v_56 == nil) goto v_49;
    {
        LispObject fn = basic_elt(env, 9); // aex_0
        return (*qfn0(fn))(fn);
    }
v_49:
    v_56 = stack[0];
v_6:
    return onevalue(v_56);
}



// Code for multerm

static LispObject CC_multerm(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    v_20 = stack[-1];
    if (!car_legal(v_20)) v_21 = cdrerror(v_20); else
    v_21 = cdr(v_20);
    v_20 = stack[0];
    if (!car_legal(v_20)) v_20 = cdrerror(v_20); else
    v_20 = cdr(v_20);
    {   LispObject fn = basic_elt(env, 1); // !*multsq
    v_20 = (*qfn2(fn))(fn, v_21, v_20);
    }
    env = stack[-3];
    stack[-2] = v_20;
    v_20 = stack[-1];
    if (!car_legal(v_20)) v_21 = carerror(v_20); else
    v_21 = car(v_20);
    v_20 = stack[0];
    if (!car_legal(v_20)) v_20 = carerror(v_20); else
    v_20 = car(v_20);
    {   LispObject fn = basic_elt(env, 2); // mulpower
    v_20 = (*qfn2(fn))(fn, v_21, v_20);
    }
    env = stack[-3];
    {
        LispObject v_25 = stack[-2];
        LispObject fn = basic_elt(env, 3); // multdfconst
        return (*qfn2(fn))(fn, v_25, v_20);
    }
    return onevalue(v_20);
}



// Code for mri_opn

static LispObject CC_mri_opn(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // mri_op
    v_17 = (*qfn1(fn))(fn, v_17);
    }
    v_18 = v_17;
    v_17 = v_18;
    if (!consp(v_17)) goto v_9;
    else goto v_10;
v_9:
    v_17 = v_18;
    goto v_8;
v_10:
    v_17 = v_18;
    if (!car_legal(v_17)) v_17 = carerror(v_17); else
    v_17 = car(v_17);
    goto v_8;
    v_17 = nil;
v_8:
    return onevalue(v_17);
}



// Code for dip_sum

static LispObject CC_dip_sum(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    stack[-4] = nil;
    stack[0] = nil;
v_17:
    v_110 = stack[0];
    if (v_110 == nil) goto v_21;
    goto v_16;
v_21:
    v_110 = stack[-6];
    if (v_110 == nil) goto v_26;
    else goto v_27;
v_26:
    v_110 = stack[-5];
    stack[-1] = v_110;
    v_110 = lisp_true;
    stack[0] = v_110;
    goto v_25;
v_27:
    v_110 = stack[-5];
    if (v_110 == nil) goto v_31;
    else goto v_32;
v_31:
    v_110 = stack[-6];
    stack[-1] = v_110;
    v_110 = lisp_true;
    stack[0] = v_110;
    goto v_25;
v_32:
    v_110 = stack[-6];
    {   LispObject fn = basic_elt(env, 1); // dip_evlmon
    v_110 = (*qfn1(fn))(fn, v_110);
    }
    env = stack[-8];
    stack[-2] = v_110;
    v_110 = stack[-5];
    {   LispObject fn = basic_elt(env, 1); // dip_evlmon
    v_110 = (*qfn1(fn))(fn, v_110);
    }
    env = stack[-8];
    stack[-1] = v_110;
    v_111 = stack[-2];
    v_110 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // ev_comp
    v_110 = (*qfn2(fn))(fn, v_111, v_110);
    }
    env = stack[-8];
    stack[-3] = v_110;
    v_111 = stack[-3];
    v_110 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 3); // iequal
    v_110 = (*qfn2(fn))(fn, v_111, v_110);
    }
    env = stack[-8];
    if (v_110 == nil) goto v_48;
    v_110 = stack[-6];
    {   LispObject fn = basic_elt(env, 4); // dip_lbc
    v_112 = (*qfn1(fn))(fn, v_110);
    }
    env = stack[-8];
    v_111 = stack[-2];
    v_110 = nil;
    {   LispObject fn = basic_elt(env, 5); // dip_moncomp
    v_110 = (*qfn3(fn))(fn, v_112, v_111, v_110);
    }
    env = stack[-8];
    stack[-1] = v_110;
    v_110 = stack[-6];
    {   LispObject fn = basic_elt(env, 6); // dip_mred
    v_110 = (*qfn1(fn))(fn, v_110);
    }
    env = stack[-8];
    stack[-6] = v_110;
    goto v_46;
v_48:
    v_111 = stack[-3];
    v_110 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    {   LispObject fn = basic_elt(env, 3); // iequal
    v_110 = (*qfn2(fn))(fn, v_111, v_110);
    }
    env = stack[-8];
    if (v_110 == nil) goto v_60;
    v_110 = stack[-5];
    {   LispObject fn = basic_elt(env, 4); // dip_lbc
    v_112 = (*qfn1(fn))(fn, v_110);
    }
    env = stack[-8];
    v_111 = stack[-1];
    v_110 = nil;
    {   LispObject fn = basic_elt(env, 5); // dip_moncomp
    v_110 = (*qfn3(fn))(fn, v_112, v_111, v_110);
    }
    env = stack[-8];
    stack[-1] = v_110;
    v_110 = stack[-5];
    {   LispObject fn = basic_elt(env, 6); // dip_mred
    v_110 = (*qfn1(fn))(fn, v_110);
    }
    env = stack[-8];
    stack[-5] = v_110;
    goto v_46;
v_60:
    v_110 = stack[-6];
    {   LispObject fn = basic_elt(env, 4); // dip_lbc
    stack[-1] = (*qfn1(fn))(fn, v_110);
    }
    env = stack[-8];
    v_110 = stack[-5];
    {   LispObject fn = basic_elt(env, 4); // dip_lbc
    v_110 = (*qfn1(fn))(fn, v_110);
    }
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 7); // bc_sum
    v_110 = (*qfn2(fn))(fn, stack[-1], v_110);
    }
    env = stack[-8];
    v_111 = v_110;
    v_110 = v_111;
    if (v_110 == nil) goto v_81;
    v_112 = v_111;
    v_111 = stack[-2];
    v_110 = nil;
    {   LispObject fn = basic_elt(env, 5); // dip_moncomp
    v_110 = (*qfn3(fn))(fn, v_112, v_111, v_110);
    }
    env = stack[-8];
    goto v_79;
v_81:
    v_110 = nil;
v_79:
    stack[-1] = v_110;
    v_110 = stack[-6];
    {   LispObject fn = basic_elt(env, 6); // dip_mred
    v_110 = (*qfn1(fn))(fn, v_110);
    }
    env = stack[-8];
    stack[-6] = v_110;
    v_110 = stack[-5];
    {   LispObject fn = basic_elt(env, 6); // dip_mred
    v_110 = (*qfn1(fn))(fn, v_110);
    }
    env = stack[-8];
    stack[-5] = v_110;
    goto v_46;
v_46:
    goto v_25;
v_25:
    v_110 = stack[-1];
    if (v_110 == nil) goto v_94;
    v_110 = stack[-7];
    if (v_110 == nil) goto v_98;
    else goto v_99;
v_98:
    v_110 = stack[-1];
    stack[-4] = v_110;
    stack[-7] = v_110;
    goto v_97;
v_99:
    v_110 = stack[-4];
    if (!car_legal(v_110)) v_111 = cdrerror(v_110); else
    v_111 = cdr(v_110);
    v_110 = stack[-1];
    {   LispObject fn = basic_elt(env, 8); // setcdr
    v_110 = (*qfn2(fn))(fn, v_111, v_110);
    }
    env = stack[-8];
    v_110 = stack[-1];
    stack[-4] = v_110;
    goto v_97;
v_97:
    goto v_92;
v_94:
v_92:
    goto v_17;
v_16:
    v_110 = stack[-7];
    return onevalue(v_110);
}



// Code for ofsf_factsf

static LispObject CC_ofsf_factsf(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    stack[-1] = nil;
v_8:
    v_39 = stack[0];
    v_38 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_38 = static_cast<LispObject>(lesseq2(v_39, v_38));
    v_38 = v_38 ? lisp_true : nil;
    env = stack[-2];
    if (v_38 == nil) goto v_14;
    goto v_9;
v_14:
    v_39 = stack[0];
    v_38 = stack[-1];
    v_38 = cons(v_39, v_38);
    env = stack[-2];
    stack[-1] = v_38;
    v_38 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 1); // negf
    v_38 = (*qfn1(fn))(fn, v_38);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 2); // addf
    v_38 = (*qfn2(fn))(fn, stack[0], v_38);
    }
    env = stack[-2];
    stack[0] = v_38;
    goto v_8;
v_9:
    v_38 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_39 = v_38;
v_10:
    v_38 = stack[-1];
    if (v_38 == nil) goto v_28;
    else goto v_29;
v_28:
    v_38 = v_39;
    goto v_7;
v_29:
    v_38 = stack[-1];
    v_38 = car(v_38);
    {   LispObject fn = basic_elt(env, 3); // multf
    v_38 = (*qfn2(fn))(fn, v_38, v_39);
    }
    env = stack[-2];
    v_39 = v_38;
    v_38 = stack[-1];
    v_38 = cdr(v_38);
    stack[-1] = v_38;
    goto v_10;
v_7:
    return onevalue(v_38);
}



// Code for determinantrd

static LispObject CC_determinantrd(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil);
    stack_popper stack_popper_var(2);
// end of prologue
    {   LispObject fn = basic_elt(env, 1); // mathml
    v_10 = (*qfn0(fn))(fn);
    }
    env = stack[-1];
    stack[0] = v_10;
    {   LispObject fn = basic_elt(env, 2); // lex
    v_10 = (*qfn0(fn))(fn);
    }
    v_10 = stack[0];
    return ncons(v_10);
    return onevalue(v_10);
}



// Code for greatertype

static LispObject CC_greatertype(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_152, v_153, v_154;
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
    stack[-3] = nil;
    stack[-2] = nil;
    stack[-1] = nil;
    v_152 = qvalue(basic_elt(env, 1)); // optlang!*
    if (v_152 == nil) goto v_18;
    v_152 = qvalue(basic_elt(env, 1)); // optlang!*
    v_153 = v_152;
    goto v_16;
v_18:
    v_152 = basic_elt(env, 2); // fortran
    v_153 = v_152;
    goto v_16;
    v_153 = nil;
v_16:
    v_152 = basic_elt(env, 3); // conversion
    v_152 = get(v_153, v_152);
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 4); // eval
    v_152 = (*qfn1(fn))(fn, v_152);
    }
    env = stack[-8];
    stack[-7] = v_152;
    v_152 = stack[-7];
    if (!car_legal(v_152)) v_153 = carerror(v_152); else
    v_153 = car(v_152);
    v_152 = stack[-5];
    if (equal(v_153, v_152)) goto v_27;
    else goto v_28;
v_27:
    v_152 = lisp_true;
    stack[-1] = v_152;
    goto v_26;
v_28:
    v_152 = stack[-7];
    if (!car_legal(v_152)) v_153 = carerror(v_152); else
    v_153 = car(v_152);
    v_152 = stack[-6];
    if (equal(v_153, v_152)) goto v_33;
    else goto v_34;
v_33:
    v_152 = nil;
    stack[-1] = v_152;
    goto v_26;
v_34:
v_43:
    v_152 = stack[-7];
    if (!car_legal(v_152)) v_152 = cdrerror(v_152); else
    v_152 = cdr(v_152);
    stack[-7] = v_152;
    if (v_152 == nil) goto v_46;
    v_152 = stack[-4];
    if (v_152 == nil) goto v_51;
    else goto v_46;
v_51:
    goto v_47;
v_46:
    goto v_42;
v_47:
    v_152 = stack[-7];
    if (!car_legal(v_152)) v_152 = carerror(v_152); else
    v_152 = car(v_152);
    v_154 = v_152;
v_58:
    v_152 = v_154;
    if (v_152 == nil) goto v_61;
    v_152 = stack[-2];
    if (v_152 == nil) goto v_65;
    else goto v_61;
v_65:
    goto v_62;
v_61:
    goto v_57;
v_62:
    v_152 = v_154;
    if (!car_legal(v_152)) v_153 = carerror(v_152); else
    v_153 = car(v_152);
    v_152 = stack[-6];
    if (equal(v_153, v_152)) goto v_70;
    else goto v_71;
v_70:
    v_152 = lisp_true;
    stack[-3] = v_152;
    goto v_69;
v_71:
v_69:
    v_152 = v_154;
    if (!car_legal(v_152)) v_153 = carerror(v_152); else
    v_153 = car(v_152);
    v_152 = stack[-5];
    if (equal(v_153, v_152)) goto v_78;
    else goto v_79;
v_78:
    v_152 = lisp_true;
    stack[-2] = v_152;
    goto v_77;
v_79:
    v_152 = v_154;
    if (!car_legal(v_152)) v_152 = cdrerror(v_152); else
    v_152 = cdr(v_152);
    v_154 = v_152;
    goto v_77;
v_77:
    goto v_58;
v_57:
    v_152 = stack[-2];
    if (v_152 == nil) goto v_91;
    v_152 = v_154;
    if (!car_legal(v_152)) v_152 = cdrerror(v_152); else
    v_152 = cdr(v_152);
    v_154 = v_152;
v_97:
    v_152 = v_154;
    if (v_152 == nil) goto v_100;
    v_152 = stack[-1];
    if (v_152 == nil) goto v_104;
    else goto v_100;
v_104:
    goto v_101;
v_100:
    goto v_96;
v_101:
    v_152 = v_154;
    if (!car_legal(v_152)) v_153 = carerror(v_152); else
    v_153 = car(v_152);
    v_152 = stack[-6];
    if (equal(v_153, v_152)) goto v_109;
    else goto v_110;
v_109:
    v_152 = lisp_true;
    stack[-1] = v_152;
    stack[-3] = v_152;
    goto v_108;
v_110:
    v_152 = v_154;
    if (!car_legal(v_152)) v_152 = cdrerror(v_152); else
    v_152 = cdr(v_152);
    v_154 = v_152;
    goto v_108;
v_108:
    goto v_97;
v_96:
    goto v_89;
v_91:
v_89:
    v_152 = stack[-3];
    if (v_152 == nil) goto v_124;
    v_152 = stack[-2];
    if (v_152 == nil) goto v_127;
    else goto v_124;
v_127:
    goto v_122;
v_124:
    v_152 = stack[-3];
    if (v_152 == nil) goto v_132;
    else goto v_133;
v_132:
    v_152 = stack[-2];
    goto v_131;
v_133:
    v_152 = nil;
    goto v_131;
    v_152 = nil;
v_131:
    if (v_152 == nil) goto v_129;
    else goto v_122;
v_129:
    goto v_123;
v_122:
    stack[0] = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_153 = stack[-6];
    v_152 = stack[-5];
    v_152 = cons(v_153, v_152);
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 5); // typerror
    v_152 = (*qfn2(fn))(fn, stack[0], v_152);
    }
    env = stack[-8];
    goto v_121;
v_123:
    v_152 = stack[-3];
    if (v_152 == nil) goto v_145;
    v_152 = stack[-2];
    if (v_152 == nil) goto v_145;
    v_152 = lisp_true;
    stack[-4] = v_152;
    goto v_121;
v_145:
v_121:
    goto v_43;
v_42:
    goto v_26;
v_26:
    v_152 = stack[-1];
    return onevalue(v_152);
}



// Code for mkupf

static LispObject CC_mkupf(LispObject env,
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
    v_90 = v_2;
// end of prologue
    v_91 = v_90;
    v_90 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 1); // mksq
    v_90 = (*qfn2(fn))(fn, v_91, v_90);
    }
    env = stack[-1];
    stack[0] = v_90;
    v_90 = stack[0];
    if (!car_legal(v_90)) v_90 = carerror(v_90); else
    v_90 = car(v_90);
    if (v_90 == nil) goto v_12;
    else goto v_13;
v_12:
    v_90 = nil;
    goto v_11;
v_13:
    v_90 = stack[0];
    if (!car_legal(v_90)) v_90 = carerror(v_90); else
    v_90 = car(v_90);
    if (!consp(v_90)) goto v_21;
    else goto v_22;
v_21:
    v_90 = lisp_true;
    goto v_20;
v_22:
    v_90 = stack[0];
    if (!car_legal(v_90)) v_90 = carerror(v_90); else
    v_90 = car(v_90);
    if (!car_legal(v_90)) v_90 = carerror(v_90); else
    v_90 = car(v_90);
    v_90 = (consp(v_90) ? nil : lisp_true);
    goto v_20;
    v_90 = nil;
v_20:
    if (v_90 == nil) goto v_18;
    v_91 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_90 = stack[0];
    v_90 = cons(v_91, v_90);
    return ncons(v_90);
v_18:
    v_90 = stack[0];
    if (!car_legal(v_90)) v_91 = cdrerror(v_90); else
    v_91 = cdr(v_90);
    v_90 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_91 == v_90) goto v_40;
    else goto v_41;
v_40:
    v_90 = stack[0];
    if (!car_legal(v_90)) v_90 = carerror(v_90); else
    v_90 = car(v_90);
    if (!car_legal(v_90)) v_90 = carerror(v_90); else
    v_90 = car(v_90);
    if (!car_legal(v_90)) v_91 = cdrerror(v_90); else
    v_91 = cdr(v_90);
    v_90 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_91 == v_90) goto v_47;
    else goto v_48;
v_47:
    v_90 = stack[0];
    if (!car_legal(v_90)) v_90 = carerror(v_90); else
    v_90 = car(v_90);
    if (!car_legal(v_90)) v_90 = cdrerror(v_90); else
    v_90 = cdr(v_90);
    if (v_90 == nil) goto v_56;
    else goto v_57;
v_56:
    v_90 = stack[0];
    if (!car_legal(v_90)) v_90 = carerror(v_90); else
    v_90 = car(v_90);
    if (!car_legal(v_90)) v_90 = carerror(v_90); else
    v_90 = car(v_90);
    if (!car_legal(v_90)) v_90 = carerror(v_90); else
    v_90 = car(v_90);
    if (!car_legal(v_90)) v_90 = carerror(v_90); else
    v_90 = car(v_90);
    {   LispObject fn = basic_elt(env, 2); // sfp
    v_90 = (*qfn1(fn))(fn, v_90);
    }
    env = stack[-1];
    v_90 = (v_90 == nil ? lisp_true : nil);
    goto v_55;
v_57:
    v_90 = nil;
    goto v_55;
    v_90 = nil;
v_55:
    goto v_46;
v_48:
    v_90 = nil;
    goto v_46;
    v_90 = nil;
v_46:
    goto v_39;
v_41:
    v_90 = nil;
    goto v_39;
    v_90 = nil;
v_39:
    if (v_90 == nil) goto v_37;
    v_90 = stack[0];
    if (!car_legal(v_90)) v_90 = carerror(v_90); else
    v_90 = car(v_90);
    if (!car_legal(v_90)) v_90 = carerror(v_90); else
    v_90 = car(v_90);
    if (!car_legal(v_90)) v_90 = carerror(v_90); else
    v_90 = car(v_90);
    if (!car_legal(v_90)) v_92 = carerror(v_90); else
    v_92 = car(v_90);
    v_91 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_90 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_90 = list2star(v_92, v_91, v_90);
    return ncons(v_90);
v_37:
    v_90 = stack[0];
    {
        LispObject fn = basic_elt(env, 3); // partitsq!*
        return (*qfn1(fn))(fn, v_90);
    }
    v_90 = nil;
v_11:
    return onevalue(v_90);
}



// Code for !:!:quotient

static LispObject CC_TTquotient(LispObject env,
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
    v_19 = v_3;
    v_18 = v_2;
// end of prologue
    stack[0] = v_18;
    v_18 = v_19;
    v_18 = integerp(v_18);
    if (v_18 == nil) goto v_10;
    v_18 = v_19;
    {   LispObject fn = basic_elt(env, 1); // i2rd!*
    v_18 = (*qfn1(fn))(fn, v_18);
    }
    env = stack[-1];
    goto v_8;
v_10:
    v_18 = v_19;
    goto v_8;
    v_18 = nil;
v_8:
    {
        LispObject v_21 = stack[0];
        LispObject fn = basic_elt(env, 2); // !:quotient
        return (*qfn2(fn))(fn, v_21, v_18);
    }
}



// Code for calc_coeffmap_

static LispObject CC_calc_coeffmap_(LispObject env,
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    stack[-1] = v_4;
    stack[-2] = v_3;
    v_25 = v_2;
// end of prologue
    v_26 = v_25;
    v_25 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // calc_map_
    v_25 = (*qfn2(fn))(fn, v_26, v_25);
    }
    env = stack[-4];
    v_27 = v_25;
    v_26 = v_27;
    v_25 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_26 == v_25) goto v_12;
    else goto v_13;
v_12:
    v_25 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_11;
v_13:
    stack[-3] = basic_elt(env, 1); // times
    stack[0] = v_27;
    v_26 = stack[-2];
    v_25 = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // calc_coeff
    v_25 = (*qfn2(fn))(fn, v_26, v_25);
    }
    {
        LispObject v_32 = stack[-3];
        LispObject v_33 = stack[0];
        return list2star(v_32, v_33, v_25);
    }
    v_25 = nil;
v_11:
    return onevalue(v_25);
}



// Code for lalr_make_compressed_goto_table

static LispObject CC_lalr_make_compressed_goto_table(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// end of prologue
    v_49 = qvalue(basic_elt(env, 1)); // nonterminals
    v_49 = Llength(nil, v_49);
    env = stack[-3];
    v_49 = sub1(v_49);
    env = stack[-3];
    v_49 = Lmkvect(nil, v_49);
    env = stack[-3];
    stack[-2] = v_49;
    v_49 = qvalue(basic_elt(env, 1)); // nonterminals
    stack[-1] = v_49;
v_14:
    v_49 = stack[-1];
    if (v_49 == nil) goto v_18;
    else goto v_19;
v_18:
    goto v_13;
v_19:
    v_49 = stack[-1];
    if (!car_legal(v_49)) v_49 = carerror(v_49); else
    v_49 = car(v_49);
    stack[0] = v_49;
    v_50 = stack[0];
    v_49 = basic_elt(env, 2); // !S!'
    if (v_50 == v_49) goto v_28;
    v_49 = stack[0];
    {   LispObject fn = basic_elt(env, 5); // lalr_make_compressed_goto_column
    v_49 = (*qfn1(fn))(fn, v_49);
    }
    env = stack[-3];
    v_52 = v_49;
    v_51 = stack[-2];
    v_50 = stack[0];
    v_49 = basic_elt(env, 3); // lalr_nonterminal_code
    v_49 = get(v_50, v_49);
    env = stack[-3];
    v_50 = v_52;
    v_49 = Lputv(nil, v_51, v_49, v_50);
    env = stack[-3];
    goto v_26;
v_28:
v_26:
    v_49 = stack[-1];
    if (!car_legal(v_49)) v_49 = cdrerror(v_49); else
    v_49 = cdr(v_49);
    stack[-1] = v_49;
    goto v_14;
v_13:
    v_49 = qvalue(basic_elt(env, 4)); // !*lalr_verbose
    if (v_49 == nil) goto v_44;
    v_49 = stack[-2];
    {   LispObject fn = basic_elt(env, 6); // lalr_print_compressed_goto_table
    v_49 = (*qfn1(fn))(fn, v_49);
    }
    goto v_42;
v_44:
v_42:
    v_49 = stack[-2];
    return onevalue(v_49);
}



// Code for setqinsertlist

static LispObject CC_setqinsertlist(LispObject env,
                         LispObject v_2)
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
    v_95 = v_2;
// end of prologue
    v_94 = qvalue(basic_elt(env, 1)); // fluidbibasissetq
    stack[-2] = v_94;
    v_94 = v_95;
    stack[-1] = v_94;
v_14:
    v_94 = stack[-2];
    if (!car_legal(v_94)) v_94 = carerror(v_94); else
    v_94 = car(v_94);
    if (v_94 == nil) goto v_17;
    v_94 = stack[-1];
    if (!car_legal(v_94)) v_94 = carerror(v_94); else
    v_94 = car(v_94);
    if (v_94 == nil) goto v_17;
    goto v_18;
v_17:
    goto v_13;
v_18:
    v_94 = stack[-2];
    if (!car_legal(v_94)) v_95 = carerror(v_94); else
    v_95 = car(v_94);
    v_94 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_94 = Lgetv(nil, v_95, v_94);
    env = stack[-3];
    if (!car_legal(v_94)) stack[0] = carerror(v_94); else
    stack[0] = car(v_94);
    v_94 = stack[-1];
    if (!car_legal(v_94)) v_95 = carerror(v_94); else
    v_95 = car(v_94);
    v_94 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_94 = Lgetv(nil, v_95, v_94);
    env = stack[-3];
    if (!car_legal(v_94)) v_94 = carerror(v_94); else
    v_94 = car(v_94);
    {   LispObject fn = basic_elt(env, 2); // monomcompare
    v_94 = (*qfn2(fn))(fn, stack[0], v_94);
    }
    env = stack[-3];
    v_96 = v_94;
    v_95 = v_96;
    v_94 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    if (v_95 == v_94) goto v_43;
    else goto v_44;
v_43:
    v_94 = lisp_true;
    goto v_42;
v_44:
    v_95 = v_96;
    v_94 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_94 = (v_95 == v_94 ? lisp_true : nil);
    goto v_42;
    v_94 = nil;
v_42:
    if (v_94 == nil) goto v_40;
    v_94 = stack[-2];
    if (!car_legal(v_94)) v_94 = cdrerror(v_94); else
    v_94 = cdr(v_94);
    stack[-2] = v_94;
    goto v_38;
v_40:
    stack[0] = stack[-2];
    v_94 = stack[-2];
    if (!car_legal(v_94)) v_95 = carerror(v_94); else
    v_95 = car(v_94);
    v_94 = stack[-2];
    if (!car_legal(v_94)) v_94 = cdrerror(v_94); else
    v_94 = cdr(v_94);
    v_94 = cons(v_95, v_94);
    env = stack[-3];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_94);
    v_95 = stack[0];
    v_94 = stack[-1];
    if (!car_legal(v_94)) v_94 = carerror(v_94); else
    v_94 = car(v_94);
    if (!car_legal(v_95)) rplaca_fails(v_95);
    setcar(v_95, v_94);
    v_94 = stack[-2];
    if (!car_legal(v_94)) v_94 = cdrerror(v_94); else
    v_94 = cdr(v_94);
    stack[-2] = v_94;
    v_94 = stack[-1];
    if (!car_legal(v_94)) v_94 = cdrerror(v_94); else
    v_94 = cdr(v_94);
    stack[-1] = v_94;
    goto v_38;
v_38:
    goto v_14;
v_13:
    v_94 = stack[-1];
    if (!car_legal(v_94)) v_94 = carerror(v_94); else
    v_94 = car(v_94);
    if (v_94 == nil) goto v_77;
    v_95 = stack[-2];
    v_94 = stack[-1];
    if (!car_legal(v_95)) rplacd_fails(v_95);
    setcdr(v_95, v_94);
    v_94 = v_95;
    v_96 = v_94;
    v_95 = v_96;
    v_94 = v_96;
    if (!car_legal(v_94)) v_94 = cdrerror(v_94); else
    v_94 = cdr(v_94);
    if (!car_legal(v_94)) v_94 = carerror(v_94); else
    v_94 = car(v_94);
    if (!car_legal(v_95)) rplaca_fails(v_95);
    setcar(v_95, v_94);
    v_94 = v_95;
    v_95 = v_96;
    if (!car_legal(v_95)) v_95 = cdrerror(v_95); else
    v_95 = cdr(v_95);
    if (!car_legal(v_95)) v_95 = cdrerror(v_95); else
    v_95 = cdr(v_95);
    if (!car_legal(v_94)) rplacd_fails(v_94);
    setcdr(v_94, v_95);
    goto v_75;
v_77:
v_75:
    v_94 = nil;
    return onevalue(v_94);
}



// Code for cl_bvarl

static LispObject CC_cl_bvarl(LispObject env,
                         LispObject v_2)
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
    {   LispObject fn = basic_elt(env, 2); // cl_bvarl1
    v_9 = (*qfn1(fn))(fn, v_8);
    }
    env = stack[0];
    v_8 = basic_elt(env, 1); // ordp
    {
        LispObject fn = basic_elt(env, 3); // sort
        return (*qfn2(fn))(fn, v_9, v_8);
    }
}



// Code for pasf_smwupdknowl

static LispObject CC_pasf_smwupdknowl(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_26, v_27, v_28, v_29, v_30;
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
    v_27 = v_5;
    v_28 = v_4;
    v_29 = v_3;
    v_30 = v_2;
// end of prologue
    v_26 = qvalue(basic_elt(env, 1)); // !*rlsusi
    if (v_26 == nil) goto v_10;
    stack[-2] = v_30;
    stack[-1] = v_29;
    stack[0] = v_28;
    v_26 = v_27;
    v_26 = ncons(v_26);
    env = stack[-3];
    {
        LispObject v_34 = stack[-2];
        LispObject v_35 = stack[-1];
        LispObject v_36 = stack[0];
        LispObject fn = basic_elt(env, 2); // cl_susiupdknowl
        return (*qfn4up(fn))(fn, v_34, v_35, v_36, v_26);
    }
v_10:
    stack[-2] = v_30;
    stack[-1] = v_29;
    stack[0] = v_28;
    v_26 = v_27;
    v_26 = ncons(v_26);
    env = stack[-3];
    {
        LispObject v_37 = stack[-2];
        LispObject v_38 = stack[-1];
        LispObject v_39 = stack[0];
        LispObject fn = basic_elt(env, 3); // cl_smupdknowl
        return (*qfn4up(fn))(fn, v_37, v_38, v_39, v_26);
    }
    v_26 = nil;
    return onevalue(v_26);
}



// Code for omattrir

static LispObject CC_omattrir(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    push(nil, nil);
    stack_popper stack_popper_var(3);
// end of prologue
    {   LispObject fn = basic_elt(env, 5); // lex
    v_46 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 6); // omatpir
    v_46 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
    stack[-1] = v_46;
    {   LispObject fn = basic_elt(env, 5); // lex
    v_46 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 7); // omobj
    v_46 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
    stack[0] = v_46;
    {   LispObject fn = basic_elt(env, 5); // lex
    v_46 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
    v_46 = basic_elt(env, 1); // (!/ o m a t t r)
    {   LispObject fn = basic_elt(env, 8); // checktag
    v_46 = (*qfn1(fn))(fn, v_46);
    }
    env = stack[-2];
    v_46 = stack[-1];
    v_46 = Lconsp(nil, v_46);
    env = stack[-2];
    if (v_46 == nil) goto v_17;
    v_46 = stack[-1];
    if (!car_legal(v_46)) v_46 = carerror(v_46); else
    v_46 = car(v_46);
    if (!car_legal(v_46)) v_46 = cdrerror(v_46); else
    v_46 = cdr(v_46);
    if (!car_legal(v_46)) v_47 = carerror(v_46); else
    v_47 = car(v_46);
    v_46 = basic_elt(env, 2); // csymbol
    if (v_47 == v_46) goto v_22;
    else goto v_23;
v_22:
    v_48 = stack[0];
    v_47 = nil;
    v_46 = nil;
    return list2star(v_48, v_47, v_46);
v_23:
    goto v_15;
v_17:
v_15:
    v_46 = stack[0];
    if (is_number(v_46)) goto v_35;
    else goto v_36;
v_35:
    v_48 = basic_elt(env, 3); // cn
    v_47 = stack[-1];
    v_46 = stack[0];
    return list3(v_48, v_47, v_46);
v_36:
    v_48 = basic_elt(env, 4); // ci
    v_47 = stack[-1];
    v_46 = stack[0];
    return list3(v_48, v_47, v_46);
    return onevalue(v_46);
}



// Code for sptransmat

static LispObject CC_sptransmat(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_119, v_120, v_121;
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
    stack[-1] = v_2;
// end of prologue
    v_119 = stack[-1];
    v_119 = Lconsp(nil, v_119);
    env = stack[-7];
    if (v_119 == nil) goto v_17;
    v_119 = stack[-1];
    stack[0] = v_119;
    v_119 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // matlength
    v_119 = (*qfn1(fn))(fn, v_119);
    }
    env = stack[-7];
    if (!car_legal(v_119)) v_119 = cdrerror(v_119); else
    v_119 = cdr(v_119);
    goto v_15;
v_17:
    v_119 = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // aeval
    v_119 = (*qfn1(fn))(fn, v_119);
    }
    env = stack[-7];
    stack[0] = v_119;
    v_119 = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // aeval
    v_119 = (*qfn1(fn))(fn, v_119);
    }
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 2); // matlength
    v_119 = (*qfn1(fn))(fn, v_119);
    }
    env = stack[-7];
    if (!car_legal(v_119)) v_119 = cdrerror(v_119); else
    v_119 = cdr(v_119);
    goto v_15;
v_15:
    v_120 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-6] = v_120;
    v_120 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-5] = v_120;
    v_120 = v_119;
    if (!car_legal(v_120)) stack[-1] = carerror(v_120); else
    stack[-1] = car(v_120);
    v_120 = basic_elt(env, 1); // spm
    v_119 = cons(v_120, v_119);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 4); // mkempspmat
    v_119 = (*qfn2(fn))(fn, stack[-1], v_119);
    }
    env = stack[-7];
    stack[-2] = v_119;
    v_119 = nil;
    v_119 = ncons(v_119);
    env = stack[-7];
    v_119 = ncons(v_119);
    env = stack[-7];
    stack[-3] = v_119;
    v_119 = stack[0];
    if (!car_legal(v_119)) v_119 = cdrerror(v_119); else
    v_119 = cdr(v_119);
    stack[-1] = v_119;
v_46:
    v_119 = stack[-1];
    if (v_119 == nil) goto v_51;
    else goto v_52;
v_51:
    goto v_45;
v_52:
    v_119 = stack[-1];
    if (!car_legal(v_119)) v_119 = carerror(v_119); else
    v_119 = car(v_119);
    stack[0] = v_119;
    v_119 = stack[-6];
    v_119 = add1(v_119);
    env = stack[-7];
    stack[-6] = v_119;
    v_119 = stack[0];
    stack[0] = v_119;
v_64:
    v_119 = stack[0];
    if (v_119 == nil) goto v_68;
    else goto v_69;
v_68:
    goto v_63;
v_69:
    v_119 = stack[0];
    if (!car_legal(v_119)) v_119 = carerror(v_119); else
    v_119 = car(v_119);
    stack[-4] = v_119;
    v_119 = stack[-5];
    v_119 = add1(v_119);
    env = stack[-7];
    stack[-5] = v_119;
    v_120 = stack[-4];
    v_119 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_120 == v_119) goto v_80;
    else goto v_81;
v_80:
    goto v_79;
v_81:
    v_121 = stack[-5];
    v_120 = stack[-4];
    v_119 = stack[-3];
    v_119 = acons(v_121, v_120, v_119);
    env = stack[-7];
    stack[-3] = v_119;
    goto v_79;
v_79:
    v_119 = stack[0];
    if (!car_legal(v_119)) v_119 = cdrerror(v_119); else
    v_119 = cdr(v_119);
    stack[0] = v_119;
    goto v_64;
v_63:
    v_119 = stack[-3];
    v_119 = Lreverse(nil, v_119);
    env = stack[-7];
    stack[-3] = v_119;
    stack[0] = stack[-3];
    v_119 = nil;
    v_119 = ncons(v_119);
    env = stack[-7];
    v_119 = ncons(v_119);
    env = stack[-7];
    if (equal(stack[0], v_119)) goto v_98;
    v_120 = stack[-2];
    v_119 = stack[-6];
    stack[-4] = list2(v_120, v_119);
    env = stack[-7];
    stack[0] = stack[-2];
    v_119 = nil;
    v_119 = ncons(v_119);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 5); // letmtr3
    v_119 = (*qfn4up(fn))(fn, stack[-4], stack[-3], stack[0], v_119);
    }
    env = stack[-7];
    goto v_96;
v_98:
v_96:
    v_119 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-5] = v_119;
    v_119 = nil;
    v_119 = ncons(v_119);
    env = stack[-7];
    v_119 = ncons(v_119);
    env = stack[-7];
    stack[-3] = v_119;
    v_119 = stack[-1];
    if (!car_legal(v_119)) v_119 = cdrerror(v_119); else
    v_119 = cdr(v_119);
    stack[-1] = v_119;
    goto v_46;
v_45:
    v_119 = stack[-2];
    return onevalue(v_119);
}



// Code for vdpcleanup

static LispObject CC_vdpcleanup(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_5;
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
    v_5 = nil;
    v_5 = ncons(v_5);
    env = stack[0];
    setvalue(basic_elt(env, 1), v_5); // dipevlist!*
    return onevalue(v_5);
}



// Code for contposp

static LispObject CC_contposp(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_24, v_25;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_24 = v_2;
// end of prologue
v_1:
    v_25 = v_24;
    if (v_25 == nil) goto v_6;
    else goto v_7;
v_6:
    v_24 = lisp_true;
    goto v_5;
v_7:
    v_25 = v_24;
    if (!car_legal(v_25)) v_25 = carerror(v_25); else
    v_25 = car(v_25);
    if (!consp(v_25)) goto v_14;
    else goto v_15;
v_14:
    if (!car_legal(v_24)) v_24 = cdrerror(v_24); else
    v_24 = cdr(v_24);
    goto v_1;
v_15:
    v_24 = nil;
    goto v_13;
    v_24 = nil;
v_13:
    goto v_5;
    v_24 = nil;
v_5:
    return onevalue(v_24);
}



// Code for toolongassignp

static LispObject CC_toolongassignp(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_9;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_9 = v_2;
// end of prologue
    if (!car_legal(v_9)) v_9 = cdrerror(v_9); else
    v_9 = cdr(v_9);
    if (!car_legal(v_9)) v_9 = cdrerror(v_9); else
    v_9 = cdr(v_9);
    if (!car_legal(v_9)) v_9 = carerror(v_9); else
    v_9 = car(v_9);
    {
        LispObject fn = basic_elt(env, 1); // toolongexpp
        return (*qfn1(fn))(fn, v_9);
    }
}



// Code for simppartdf

static LispObject CC_simppartdf(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // partitpartdf
    v_7 = (*qfn1(fn))(fn, v_7);
    }
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // !*pf2sq
        return (*qfn1(fn))(fn, v_7);
    }
}



// Code for s_world_names

static LispObject CC_s_world_names(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_42;
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
    v_42 = v_2;
// end of prologue
    if (!car_legal(v_42)) v_42 = carerror(v_42); else
    v_42 = car(v_42);
    stack[-3] = v_42;
    v_42 = stack[-3];
    if (v_42 == nil) goto v_14;
    else goto v_15;
v_14:
    v_42 = nil;
    goto v_8;
v_15:
    v_42 = stack[-3];
    if (!car_legal(v_42)) v_42 = carerror(v_42); else
    v_42 = car(v_42);
    if (!car_legal(v_42)) v_42 = carerror(v_42); else
    v_42 = car(v_42);
    v_42 = ncons(v_42);
    env = stack[-4];
    stack[-1] = v_42;
    stack[-2] = v_42;
v_9:
    v_42 = stack[-3];
    if (!car_legal(v_42)) v_42 = cdrerror(v_42); else
    v_42 = cdr(v_42);
    stack[-3] = v_42;
    v_42 = stack[-3];
    if (v_42 == nil) goto v_28;
    else goto v_29;
v_28:
    v_42 = stack[-2];
    goto v_8;
v_29:
    stack[0] = stack[-1];
    v_42 = stack[-3];
    if (!car_legal(v_42)) v_42 = carerror(v_42); else
    v_42 = car(v_42);
    if (!car_legal(v_42)) v_42 = carerror(v_42); else
    v_42 = car(v_42);
    v_42 = ncons(v_42);
    env = stack[-4];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_42);
    v_42 = stack[-1];
    if (!car_legal(v_42)) v_42 = cdrerror(v_42); else
    v_42 = cdr(v_42);
    stack[-1] = v_42;
    goto v_9;
v_8:
    return onevalue(v_42);
}



// Code for dp_from_ei

static LispObject CC_dp_from_ei(LispObject env,
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
    stack[0] = v_2;
// end of prologue
    v_10 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 1); // cali_bc_fi
    stack[-1] = (*qfn1(fn))(fn, v_10);
    }
    env = stack[-2];
    v_10 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // mo_from_ei
    v_10 = (*qfn1(fn))(fn, v_10);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // dp_term
    v_10 = (*qfn2(fn))(fn, stack[-1], v_10);
    }
    return ncons(v_10);
}



// Code for createmonomunit

static LispObject CC_createmonomunit(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// end of prologue
    v_18 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_18 = Lmkvect(nil, v_18);
    env = stack[-3];
    stack[-2] = v_18;
    v_20 = stack[-2];
    v_19 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_18 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_18 = Lputv(nil, v_20, v_19, v_18);
    env = stack[-3];
    stack[-1] = stack[-2];
    stack[0] = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_18 = nil;
    v_18 = ncons(v_18);
    env = stack[-3];
    v_18 = Lputv(nil, stack[-1], stack[0], v_18);
    v_18 = stack[-2];
    return onevalue(v_18);
}



// Code for pickbasicset

static LispObject CC_pickbasicset(LispObject env,
                         LispObject v_2)
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
    v_95 = qvalue(basic_elt(env, 1)); // wuvarlist!*
    stack[-1] = v_95;
v_10:
    v_95 = stack[-1];
    if (v_95 == nil) goto v_14;
    else goto v_15;
v_14:
    goto v_9;
v_15:
    v_95 = stack[-1];
    if (!car_legal(v_95)) v_95 = carerror(v_95); else
    v_95 = car(v_95);
    stack[0] = v_95;
v_23:
    v_95 = stack[-2];
    if (v_95 == nil) goto v_26;
    v_95 = stack[-2];
    if (!car_legal(v_95)) v_95 = carerror(v_95); else
    v_95 = car(v_95);
    if (!car_legal(v_95)) v_95 = carerror(v_95); else
    v_95 = car(v_95);
    if (!car_legal(v_95)) v_95 = carerror(v_95); else
    v_95 = car(v_95);
    if (!car_legal(v_95)) v_96 = carerror(v_95); else
    v_96 = car(v_95);
    v_95 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // symbollessp
    v_95 = (*qfn2(fn))(fn, v_96, v_95);
    }
    env = stack[-4];
    if (v_95 == nil) goto v_26;
    goto v_27;
v_26:
    goto v_22;
v_27:
    v_95 = stack[-2];
    if (!car_legal(v_95)) v_95 = cdrerror(v_95); else
    v_95 = cdr(v_95);
    stack[-2] = v_95;
    goto v_23;
v_22:
v_43:
    v_95 = stack[-2];
    if (v_95 == nil) goto v_46;
    v_96 = stack[0];
    v_95 = stack[-2];
    if (!car_legal(v_95)) v_95 = carerror(v_95); else
    v_95 = car(v_95);
    if (!car_legal(v_95)) v_95 = carerror(v_95); else
    v_95 = car(v_95);
    if (!car_legal(v_95)) v_95 = carerror(v_95); else
    v_95 = car(v_95);
    if (!car_legal(v_95)) v_95 = carerror(v_95); else
    v_95 = car(v_95);
    if (equal(v_96, v_95)) goto v_53;
    else goto v_54;
v_53:
    v_95 = stack[-2];
    if (!car_legal(v_95)) v_96 = carerror(v_95); else
    v_96 = car(v_95);
    v_95 = stack[-3];
    {   LispObject fn = basic_elt(env, 3); // wureducedpolysp
    v_95 = (*qfn2(fn))(fn, v_96, v_95);
    }
    env = stack[-4];
    v_95 = (v_95 == nil ? lisp_true : nil);
    goto v_52;
v_54:
    v_95 = nil;
    goto v_52;
    v_95 = nil;
v_52:
    if (v_95 == nil) goto v_46;
    goto v_47;
v_46:
    goto v_42;
v_47:
    v_95 = stack[-2];
    if (!car_legal(v_95)) v_95 = cdrerror(v_95); else
    v_95 = cdr(v_95);
    stack[-2] = v_95;
    goto v_43;
v_42:
    v_95 = stack[-2];
    if (v_95 == nil) goto v_75;
    v_96 = stack[0];
    v_95 = stack[-2];
    if (!car_legal(v_95)) v_95 = carerror(v_95); else
    v_95 = car(v_95);
    if (!car_legal(v_95)) v_95 = carerror(v_95); else
    v_95 = car(v_95);
    if (!car_legal(v_95)) v_95 = carerror(v_95); else
    v_95 = car(v_95);
    if (!car_legal(v_95)) v_95 = carerror(v_95); else
    v_95 = car(v_95);
    if (equal(v_96, v_95)) goto v_78;
    else goto v_75;
v_78:
    v_95 = stack[-2];
    if (!car_legal(v_95)) v_96 = carerror(v_95); else
    v_96 = car(v_95);
    v_95 = stack[-3];
    v_95 = cons(v_96, v_95);
    env = stack[-4];
    stack[-3] = v_95;
    v_95 = stack[-2];
    if (!car_legal(v_95)) v_95 = cdrerror(v_95); else
    v_95 = cdr(v_95);
    stack[-2] = v_95;
    goto v_73;
v_75:
v_73:
    v_95 = stack[-1];
    if (!car_legal(v_95)) v_95 = cdrerror(v_95); else
    v_95 = cdr(v_95);
    stack[-1] = v_95;
    goto v_10;
v_9:
    v_95 = stack[-3];
        return Lnreverse(nil, v_95);
    return onevalue(v_95);
}



// Code for mri_ofsf2mriat

static LispObject CC_mri_ofsf2mriat(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_12, v_13, v_14;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_12 = v_3;
    v_13 = v_2;
// end of prologue
    v_14 = v_13;
    if (!car_legal(v_14)) v_14 = carerror(v_14); else
    v_14 = car(v_14);
    if (!car_legal(v_13)) v_13 = cdrerror(v_13); else
    v_13 = cdr(v_13);
    if (!car_legal(v_13)) v_13 = carerror(v_13); else
    v_13 = car(v_13);
    {
        LispObject fn = basic_elt(env, 1); // mri_0mk2
        return (*qfn3(fn))(fn, v_14, v_13, v_12);
    }
}



// Code for intervalom

static LispObject CC_intervalom(LispObject env,
                         LispObject v_2)
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
// Binding name
// FLUIDBIND: reloadenv=4 litvec-offset=1 saveloc=1
{   bind_fluid_stack bind_fluid_var(-4, 1, -1);
    setvalue(basic_elt(env, 1), nil); // name
    v_74 = stack[-2];
    if (!car_legal(v_74)) v_74 = cdrerror(v_74); else
    v_74 = cdr(v_74);
    if (!car_legal(v_74)) v_74 = carerror(v_74); else
    v_74 = car(v_74);
    stack[-3] = v_74;
    v_74 = stack[-2];
    if (!car_legal(v_74)) v_74 = carerror(v_74); else
    v_74 = car(v_74);
    setvalue(basic_elt(env, 1), v_74); // name
    v_75 = qvalue(basic_elt(env, 1)); // name
    v_74 = basic_elt(env, 2); // lowupperlimit
    if (v_75 == v_74) goto v_18;
    else goto v_19;
v_18:
    v_74 = basic_elt(env, 3); // integer_interval
    setvalue(basic_elt(env, 1), v_74); // name
    v_74 = nil;
    stack[-3] = v_74;
    v_74 = stack[-2];
    if (!car_legal(v_74)) v_76 = carerror(v_74); else
    v_76 = car(v_74);
    v_75 = nil;
    v_74 = stack[-2];
    if (!car_legal(v_74)) v_74 = cdrerror(v_74); else
    v_74 = cdr(v_74);
    v_74 = list2star(v_76, v_75, v_74);
    env = stack[-4];
    stack[-2] = v_74;
    goto v_17;
v_19:
v_17:
    v_75 = qvalue(basic_elt(env, 1)); // name
    v_74 = qvalue(basic_elt(env, 4)); // valid_om!*
    v_74 = Lassoc(nil, v_75, v_74);
    if (!car_legal(v_74)) v_74 = cdrerror(v_74); else
    v_74 = cdr(v_74);
    if (!car_legal(v_74)) v_74 = carerror(v_74); else
    v_74 = car(v_74);
    stack[0] = v_74;
    v_74 = stack[-3];
    if (v_74 == nil) goto v_38;
    v_74 = stack[-3];
    if (!car_legal(v_74)) v_74 = carerror(v_74); else
    v_74 = car(v_74);
    if (!car_legal(v_74)) v_74 = cdrerror(v_74); else
    v_74 = cdr(v_74);
    if (!car_legal(v_74)) v_74 = carerror(v_74); else
    v_74 = car(v_74);
    v_75 = Lintern(nil, v_74);
    env = stack[-4];
    v_74 = qvalue(basic_elt(env, 5)); // interval!*
    v_74 = Lassoc(nil, v_75, v_74);
    if (!car_legal(v_74)) v_74 = cdrerror(v_74); else
    v_74 = cdr(v_74);
    if (!car_legal(v_74)) v_74 = carerror(v_74); else
    v_74 = car(v_74);
    setvalue(basic_elt(env, 1), v_74); // name
    goto v_36;
v_38:
v_36:
    v_74 = basic_elt(env, 6); // "<OMA>"
    {   LispObject fn = basic_elt(env, 11); // printout
    v_74 = (*qfn1(fn))(fn, v_74);
    }
    env = stack[-4];
    v_74 = lisp_true;
    {   LispObject fn = basic_elt(env, 12); // indent!*
    v_74 = (*qfn1(fn))(fn, v_74);
    }
    env = stack[-4];
    v_74 = basic_elt(env, 7); // "<OMS cd="""
    {   LispObject fn = basic_elt(env, 11); // printout
    v_74 = (*qfn1(fn))(fn, v_74);
    }
    env = stack[-4];
    v_74 = stack[0];
    v_74 = Lprinc(nil, v_74);
    env = stack[-4];
    v_74 = basic_elt(env, 8); // """ name="""
    v_74 = Lprinc(nil, v_74);
    env = stack[-4];
    v_74 = qvalue(basic_elt(env, 1)); // name
    v_74 = Lprinc(nil, v_74);
    env = stack[-4];
    v_74 = basic_elt(env, 9); // """/>"
    v_74 = Lprinc(nil, v_74);
    env = stack[-4];
    v_74 = stack[-2];
    if (!car_legal(v_74)) v_74 = cdrerror(v_74); else
    v_74 = cdr(v_74);
    if (!car_legal(v_74)) v_74 = cdrerror(v_74); else
    v_74 = cdr(v_74);
    {   LispObject fn = basic_elt(env, 13); // multiom
    v_74 = (*qfn1(fn))(fn, v_74);
    }
    env = stack[-4];
    v_74 = nil;
    {   LispObject fn = basic_elt(env, 12); // indent!*
    v_74 = (*qfn1(fn))(fn, v_74);
    }
    env = stack[-4];
    v_74 = basic_elt(env, 10); // "</OMA>"
    {   LispObject fn = basic_elt(env, 11); // printout
    v_74 = (*qfn1(fn))(fn, v_74);
    }
    v_74 = nil;
    ;}  // end of a binding scope
    return onevalue(v_74);
}



// Code for remzzzz

static LispObject CC_remzzzz(LispObject env,
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
    v_39 = nil;
v_8:
    v_37 = stack[-1];
    if (v_37 == nil) goto v_11;
    else goto v_12;
v_11:
    v_38 = v_39;
    v_37 = stack[0];
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn2(fn))(fn, v_38, v_37);
    }
v_12:
    v_37 = stack[-1];
    if (!car_legal(v_37)) v_37 = carerror(v_37); else
    v_37 = car(v_37);
    if (!car_legal(v_37)) v_38 = carerror(v_37); else
    v_38 = car(v_37);
    v_37 = stack[0];
    if (!car_legal(v_37)) v_37 = carerror(v_37); else
    v_37 = car(v_37);
    if (!car_legal(v_37)) v_37 = carerror(v_37); else
    v_37 = car(v_37);
    if (equal(v_38, v_37)) goto v_17;
    else goto v_18;
v_17:
    v_37 = stack[-1];
    if (!car_legal(v_37)) v_37 = cdrerror(v_37); else
    v_37 = cdr(v_37);
    stack[-1] = v_37;
    v_37 = stack[0];
    if (!car_legal(v_37)) v_37 = cdrerror(v_37); else
    v_37 = cdr(v_37);
    stack[0] = v_37;
    goto v_8;
v_18:
    v_37 = stack[0];
    if (!car_legal(v_37)) v_37 = carerror(v_37); else
    v_37 = car(v_37);
    v_38 = v_39;
    v_37 = cons(v_37, v_38);
    env = stack[-2];
    v_39 = v_37;
    v_37 = stack[0];
    if (!car_legal(v_37)) v_37 = cdrerror(v_37); else
    v_37 = cdr(v_37);
    stack[0] = v_37;
    goto v_8;
    v_37 = nil;
    return onevalue(v_37);
}



// Code for sc_rowscalarproduct

static LispObject CC_sc_rowscalarproduct(LispObject env,
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
    real_push(nil, nil, nil, nil, nil);
    stack_popper stack_popper_var(6);
// copy arguments values to proper place
    stack[-2] = v_3;
    stack[-3] = v_2;
// end of prologue
    v_39 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {   LispObject fn = basic_elt(env, 1); // sc_simp
    v_39 = (*qfn1(fn))(fn, v_39);
    }
    env = stack[-5];
    stack[0] = v_39;
    v_39 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-4] = v_39;
v_13:
    v_39 = stack[-3];
    {   LispObject fn = basic_elt(env, 2); // fast!-column!-dim
    v_40 = (*qfn1(fn))(fn, v_39);
    }
    env = stack[-5];
    v_39 = stack[-4];
    v_39 = difference2(v_40, v_39);
    env = stack[-5];
    v_39 = Lminusp(nil, v_39);
    env = stack[-5];
    if (v_39 == nil) goto v_18;
    goto v_12;
v_18:
    stack[-1] = stack[0];
    v_41 = stack[-3];
    v_40 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_39 = stack[-4];
    {   LispObject fn = basic_elt(env, 3); // sc_getmat
    stack[0] = (*qfn3(fn))(fn, v_41, v_40, v_39);
    }
    env = stack[-5];
    v_41 = stack[-2];
    v_40 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_39 = stack[-4];
    {   LispObject fn = basic_elt(env, 3); // sc_getmat
    v_39 = (*qfn3(fn))(fn, v_41, v_40, v_39);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 4); // sc_multsq
    v_39 = (*qfn2(fn))(fn, stack[0], v_39);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 5); // sc_addsq
    v_39 = (*qfn2(fn))(fn, stack[-1], v_39);
    }
    env = stack[-5];
    stack[0] = v_39;
    v_39 = stack[-4];
    v_39 = add1(v_39);
    env = stack[-5];
    stack[-4] = v_39;
    goto v_13;
v_12:
    v_39 = stack[0];
    return onevalue(v_39);
}



// Code for simpunion

static LispObject CC_simpunion(LispObject env,
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
// space for vars preserved across procedure calls
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    v_42 = v_2;
// end of prologue
    v_43 = basic_elt(env, 1); // union
    {   LispObject fn = basic_elt(env, 3); // applysetop
    v_42 = (*qfn2(fn))(fn, v_43, v_42);
    }
    env = stack[-1];
    v_44 = v_42;
    v_42 = v_44;
    if (!car_legal(v_42)) v_43 = carerror(v_42); else
    v_43 = car(v_42);
    v_42 = basic_elt(env, 1); // union
    if (v_43 == v_42) goto v_14;
    else goto v_15;
v_14:
    v_42 = qvalue(basic_elt(env, 2)); // empty_set
    v_43 = v_44;
    if (!car_legal(v_43)) v_43 = cdrerror(v_43); else
    v_43 = cdr(v_43);
    v_42 = Ldelete(nil, v_42, v_43);
    env = stack[-1];
    v_44 = v_42;
    if (!car_legal(v_42)) v_42 = cdrerror(v_42); else
    v_42 = cdr(v_42);
    if (v_42 == nil) goto v_22;
    stack[0] = basic_elt(env, 1); // union
    v_42 = v_44;
    {   LispObject fn = basic_elt(env, 4); // ordn
    v_42 = (*qfn1(fn))(fn, v_42);
    }
    env = stack[-1];
    v_42 = cons(stack[0], v_42);
    env = stack[-1];
    goto v_20;
v_22:
    v_42 = v_44;
    if (!car_legal(v_42)) v_42 = carerror(v_42); else
    v_42 = car(v_42);
    goto v_20;
    v_42 = nil;
v_20:
    v_43 = v_42;
    goto v_13;
v_15:
    v_42 = v_44;
    v_43 = v_42;
    goto v_13;
    v_43 = nil;
v_13:
    v_42 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 5); // mksp
    v_43 = (*qfn2(fn))(fn, v_43, v_42);
    }
    env = stack[-1];
    v_42 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_42 = cons(v_43, v_42);
    env = stack[-1];
    v_43 = ncons(v_42);
    v_42 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_43, v_42);
}



// Code for gbfplus

static LispObject CC_gbfplus(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // plubf
    stack[-2] = (*qfn2(fn))(fn, v_17, v_16);
    }
    env = stack[-3];
    v_16 = stack[-1];
    if (!car_legal(v_16)) v_17 = cdrerror(v_16); else
    v_17 = cdr(v_16);
    v_16 = stack[0];
    if (!car_legal(v_16)) v_16 = cdrerror(v_16); else
    v_16 = cdr(v_16);
    {   LispObject fn = basic_elt(env, 1); // plubf
    v_16 = (*qfn2(fn))(fn, v_17, v_16);
    }
    {
        LispObject v_21 = stack[-2];
        return cons(v_21, v_16);
    }
}



// Code for indxsymp

static LispObject CC_indxsymp(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
v_1:
    v_28 = stack[0];
    if (v_28 == nil) goto v_7;
    else goto v_8;
v_7:
    v_28 = lisp_true;
    goto v_6;
v_8:
    v_28 = stack[0];
    if (!car_legal(v_28)) v_29 = carerror(v_28); else
    v_29 = car(v_28);
    v_28 = stack[-1];
    v_28 = Lapply1(nil, v_29, v_28);
    env = stack[-2];
    if (v_28 == nil) goto v_15;
    else goto v_16;
v_15:
    v_28 = nil;
    goto v_14;
v_16:
    v_29 = stack[-1];
    v_28 = stack[0];
    if (!car_legal(v_28)) v_28 = cdrerror(v_28); else
    v_28 = cdr(v_28);
    stack[-1] = v_29;
    stack[0] = v_28;
    goto v_1;
    v_28 = nil;
v_14:
    goto v_6;
    v_28 = nil;
v_6:
    return onevalue(v_28);
}



// Code for getphystypeexpt

static LispObject CC_getphystypeexpt(LispObject env,
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
    {   LispObject fn = basic_elt(env, 2); // getphystypecar
    v_30 = (*qfn1(fn))(fn, v_30);
    }
    env = stack[-1];
    v_31 = v_30;
    v_30 = v_31;
    if (v_30 == nil) goto v_11;
    else goto v_12;
v_11:
    v_30 = nil;
    goto v_10;
v_12:
    v_30 = stack[0];
    if (!car_legal(v_30)) v_30 = cdrerror(v_30); else
    v_30 = cdr(v_30);
    if (!car_legal(v_30)) v_30 = carerror(v_30); else
    v_30 = car(v_30);
    if (is_number(v_30)) goto v_17;
    else goto v_16;
v_17:
    v_30 = stack[0];
    if (!car_legal(v_30)) v_30 = cdrerror(v_30); else
    v_30 = cdr(v_30);
    if (!car_legal(v_30)) v_30 = carerror(v_30); else
    v_30 = car(v_30);
    v_30 = Levenp(nil, v_30);
    env = stack[-1];
    if (v_30 == nil) goto v_16;
    v_30 = basic_elt(env, 1); // scalar
    goto v_10;
v_16:
    v_30 = v_31;
    goto v_10;
    v_30 = nil;
v_10:
    return onevalue(v_30);
}



// Code for fs!:minusp

static LispObject CC_fsTminusp(LispObject env,
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
v_6:
    v_28 = stack[0];
    if (v_28 == nil) goto v_9;
    else goto v_10;
v_9:
    v_28 = nil;
    goto v_5;
v_10:
    v_29 = stack[0];
    v_28 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_28 = Lgetv(nil, v_29, v_28);
    env = stack[-1];
    if (v_28 == nil) goto v_13;
    else goto v_14;
v_13:
    v_29 = stack[0];
    v_28 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_28 = Lgetv(nil, v_29, v_28);
    env = stack[-1];
    if (!car_legal(v_28)) v_28 = carerror(v_28); else
    v_28 = car(v_28);
    {
        LispObject fn = basic_elt(env, 1); // minusf
        return (*qfn1(fn))(fn, v_28);
    }
v_14:
    v_29 = stack[0];
    v_28 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_28 = Lgetv(nil, v_29, v_28);
    env = stack[-1];
    stack[0] = v_28;
    goto v_6;
    v_28 = nil;
v_5:
    return onevalue(v_28);
}



// Code for squashsqrt

static LispObject CC_squashsqrt(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_153, v_154, v_155;
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
v_1:
    v_153 = qvalue(basic_elt(env, 1)); // sqrtflag
    if (v_153 == nil) goto v_10;
    else goto v_11;
v_10:
    v_153 = lisp_true;
    goto v_9;
v_11:
    v_153 = stack[-1];
    if (!consp(v_153)) goto v_18;
    else goto v_19;
v_18:
    v_153 = lisp_true;
    goto v_17;
v_19:
    v_153 = stack[-1];
    if (!car_legal(v_153)) v_153 = carerror(v_153); else
    v_153 = car(v_153);
    if (!car_legal(v_153)) v_153 = carerror(v_153); else
    v_153 = car(v_153);
    if (!car_legal(v_153)) v_153 = carerror(v_153); else
    v_153 = car(v_153);
    v_153 = (consp(v_153) ? nil : lisp_true);
    goto v_17;
    v_153 = nil;
v_17:
    goto v_9;
    v_153 = nil;
v_9:
    if (v_153 == nil) goto v_7;
    v_153 = stack[-1];
    goto v_5;
v_7:
    v_153 = stack[-1];
    if (!car_legal(v_153)) v_153 = carerror(v_153); else
    v_153 = car(v_153);
    if (!car_legal(v_153)) v_153 = carerror(v_153); else
    v_153 = car(v_153);
    if (!car_legal(v_153)) v_153 = carerror(v_153); else
    v_153 = car(v_153);
    if (!car_legal(v_153)) v_154 = carerror(v_153); else
    v_154 = car(v_153);
    v_153 = basic_elt(env, 2); // sqrt
    if (v_154 == v_153) goto v_34;
    else goto v_35;
v_34:
    v_153 = stack[-1];
    if (!car_legal(v_153)) v_153 = carerror(v_153); else
    v_153 = car(v_153);
    if (!car_legal(v_153)) v_153 = carerror(v_153); else
    v_153 = car(v_153);
    if (!car_legal(v_153)) v_154 = cdrerror(v_153); else
    v_154 = cdr(v_153);
    v_153 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_153 = static_cast<LispObject>(greaterp2(v_154, v_153));
    v_153 = v_153 ? lisp_true : nil;
    env = stack[-3];
    goto v_33;
v_35:
    v_153 = nil;
    goto v_33;
    v_153 = nil;
v_33:
    if (v_153 == nil) goto v_31;
    v_153 = stack[-1];
    if (!car_legal(v_153)) v_153 = cdrerror(v_153); else
    v_153 = cdr(v_153);
    {   LispObject fn = basic_elt(env, 0); // squashsqrt
    stack[0] = (*qfn1(fn))(fn, v_153);
    }
    env = stack[-3];
    v_153 = stack[-1];
    if (!car_legal(v_153)) v_153 = carerror(v_153); else
    v_153 = car(v_153);
    if (!car_legal(v_153)) v_153 = carerror(v_153); else
    v_153 = car(v_153);
    if (!car_legal(v_153)) v_155 = carerror(v_153); else
    v_155 = car(v_153);
    v_153 = stack[-1];
    if (!car_legal(v_153)) v_153 = carerror(v_153); else
    v_153 = car(v_153);
    if (!car_legal(v_153)) v_154 = cdrerror(v_153); else
    v_154 = cdr(v_153);
    v_153 = stack[-1];
    if (!car_legal(v_153)) v_153 = carerror(v_153); else
    v_153 = car(v_153);
    if (!car_legal(v_153)) v_153 = carerror(v_153); else
    v_153 = car(v_153);
    if (!car_legal(v_153)) v_153 = cdrerror(v_153); else
    v_153 = cdr(v_153);
    {   LispObject fn = basic_elt(env, 4); // !*multfsqrt
    v_153 = (*qfn3(fn))(fn, v_155, v_154, v_153);
    }
    env = stack[-3];
    {
        LispObject v_159 = stack[0];
        LispObject fn = basic_elt(env, 5); // addf
        return (*qfn2(fn))(fn, v_159, v_153);
    }
v_31:
    v_153 = stack[-1];
    if (!car_legal(v_153)) v_153 = carerror(v_153); else
    v_153 = car(v_153);
    if (!car_legal(v_153)) v_153 = carerror(v_153); else
    v_153 = car(v_153);
    if (!car_legal(v_153)) v_153 = carerror(v_153); else
    v_153 = car(v_153);
    if (!car_legal(v_153)) v_154 = carerror(v_153); else
    v_154 = car(v_153);
    v_153 = basic_elt(env, 3); // expt
    if (v_154 == v_153) goto v_71;
    else goto v_72;
v_71:
    v_153 = stack[-1];
    if (!car_legal(v_153)) v_153 = carerror(v_153); else
    v_153 = car(v_153);
    if (!car_legal(v_153)) v_153 = carerror(v_153); else
    v_153 = car(v_153);
    if (!car_legal(v_153)) v_153 = carerror(v_153); else
    v_153 = car(v_153);
    if (!car_legal(v_153)) v_153 = cdrerror(v_153); else
    v_153 = cdr(v_153);
    if (!car_legal(v_153)) v_153 = cdrerror(v_153); else
    v_153 = cdr(v_153);
    if (!car_legal(v_153)) v_153 = carerror(v_153); else
    v_153 = car(v_153);
    {   LispObject fn = basic_elt(env, 6); // prefix!-rational!-numberp
    v_153 = (*qfn1(fn))(fn, v_153);
    }
    env = stack[-3];
    if (v_153 == nil) goto v_81;
    else goto v_82;
v_81:
    v_153 = nil;
    goto v_80;
v_82:
    v_153 = stack[-1];
    if (!car_legal(v_153)) v_153 = carerror(v_153); else
    v_153 = car(v_153);
    if (!car_legal(v_153)) v_153 = carerror(v_153); else
    v_153 = car(v_153);
    if (!car_legal(v_153)) v_154 = cdrerror(v_153); else
    v_154 = cdr(v_153);
    v_153 = stack[-1];
    if (!car_legal(v_153)) v_153 = carerror(v_153); else
    v_153 = car(v_153);
    if (!car_legal(v_153)) v_153 = carerror(v_153); else
    v_153 = car(v_153);
    if (!car_legal(v_153)) v_153 = carerror(v_153); else
    v_153 = car(v_153);
    if (!car_legal(v_153)) v_153 = cdrerror(v_153); else
    v_153 = cdr(v_153);
    if (!car_legal(v_153)) v_153 = cdrerror(v_153); else
    v_153 = cdr(v_153);
    if (!car_legal(v_153)) v_153 = carerror(v_153); else
    v_153 = car(v_153);
    if (!car_legal(v_153)) v_153 = cdrerror(v_153); else
    v_153 = cdr(v_153);
    if (!car_legal(v_153)) v_153 = cdrerror(v_153); else
    v_153 = cdr(v_153);
    if (!car_legal(v_153)) v_153 = carerror(v_153); else
    v_153 = car(v_153);
    v_153 = static_cast<LispObject>(geq2(v_154, v_153));
    v_153 = v_153 ? lisp_true : nil;
    env = stack[-3];
    goto v_80;
    v_153 = nil;
v_80:
    goto v_70;
v_72:
    v_153 = nil;
    goto v_70;
    v_153 = nil;
v_70:
    if (v_153 == nil) goto v_68;
    v_153 = stack[-1];
    if (!car_legal(v_153)) v_153 = cdrerror(v_153); else
    v_153 = cdr(v_153);
    {   LispObject fn = basic_elt(env, 0); // squashsqrt
    stack[0] = (*qfn1(fn))(fn, v_153);
    }
    env = stack[-3];
    v_153 = stack[-1];
    if (!car_legal(v_153)) v_153 = carerror(v_153); else
    v_153 = car(v_153);
    if (!car_legal(v_153)) v_153 = carerror(v_153); else
    v_153 = car(v_153);
    if (!car_legal(v_153)) v_155 = carerror(v_153); else
    v_155 = car(v_153);
    v_153 = stack[-1];
    if (!car_legal(v_153)) v_153 = carerror(v_153); else
    v_153 = car(v_153);
    if (!car_legal(v_153)) v_154 = cdrerror(v_153); else
    v_154 = cdr(v_153);
    v_153 = stack[-1];
    if (!car_legal(v_153)) v_153 = carerror(v_153); else
    v_153 = car(v_153);
    if (!car_legal(v_153)) v_153 = carerror(v_153); else
    v_153 = car(v_153);
    if (!car_legal(v_153)) v_153 = cdrerror(v_153); else
    v_153 = cdr(v_153);
    {   LispObject fn = basic_elt(env, 7); // !*multfexpt
    v_153 = (*qfn3(fn))(fn, v_155, v_154, v_153);
    }
    env = stack[-3];
    {
        LispObject v_160 = stack[0];
        LispObject fn = basic_elt(env, 5); // addf
        return (*qfn2(fn))(fn, v_160, v_153);
    }
v_68:
    v_153 = stack[-1];
    if (!car_legal(v_153)) v_153 = carerror(v_153); else
    v_153 = car(v_153);
    if (!car_legal(v_153)) v_153 = cdrerror(v_153); else
    v_153 = cdr(v_153);
    {   LispObject fn = basic_elt(env, 0); // squashsqrt
    v_153 = (*qfn1(fn))(fn, v_153);
    }
    env = stack[-3];
    v_154 = v_153;
    v_153 = v_154;
    if (v_153 == nil) goto v_137;
    else goto v_138;
v_137:
    v_153 = stack[-1];
    if (!car_legal(v_153)) v_153 = cdrerror(v_153); else
    v_153 = cdr(v_153);
    stack[-1] = v_153;
    goto v_1;
v_138:
    v_153 = stack[-1];
    if (!car_legal(v_153)) v_153 = carerror(v_153); else
    v_153 = car(v_153);
    if (!car_legal(v_153)) stack[-2] = carerror(v_153); else
    stack[-2] = car(v_153);
    stack[0] = v_154;
    v_153 = stack[-1];
    if (!car_legal(v_153)) v_153 = cdrerror(v_153); else
    v_153 = cdr(v_153);
    {   LispObject fn = basic_elt(env, 0); // squashsqrt
    v_153 = (*qfn1(fn))(fn, v_153);
    }
    {
        LispObject v_161 = stack[-2];
        LispObject v_162 = stack[0];
        return acons(v_161, v_162, v_153);
    }
    v_153 = nil;
    goto v_5;
    v_153 = nil;
v_5:
    return onevalue(v_153);
}



// Code for ofsf_decdeg2

static LispObject CC_ofsf_decdeg2(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_160, v_161, v_162;
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
    stack[-4] = v_4;
    stack[-5] = v_3;
    stack[-3] = v_2;
// end of prologue
// Binding !*gcd
// FLUIDBIND: reloadenv=7 litvec-offset=1 saveloc=2
{   bind_fluid_stack bind_fluid_var(-7, 1, -2);
    setvalue(basic_elt(env, 1), nil); // !*gcd
    stack[-1] = nil;
    v_160 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[0] = v_160;
    v_160 = lisp_true;
    setvalue(basic_elt(env, 1), v_160); // !*gcd
    v_160 = qvalue(basic_elt(env, 2)); // !*rlbrkcxk
    if (v_160 == nil) goto v_20;
    v_161 = stack[-3];
    v_160 = stack[-5];
    {   LispObject fn = basic_elt(env, 4); // ofsf_cxkdgcd
    v_160 = (*qfn2(fn))(fn, v_161, v_160);
    }
    env = stack[-7];
    stack[0] = v_160;
    goto v_18;
v_20:
v_18:
    v_160 = stack[-3];
    {   LispObject fn = basic_elt(env, 5); // cl_atl1
    v_160 = (*qfn1(fn))(fn, v_160);
    }
    env = stack[-7];
    stack[-3] = v_160;
v_29:
    v_160 = stack[-3];
    if (v_160 == nil) goto v_32;
    v_161 = stack[0];
    v_160 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_160 = Leqn_2(nil, v_161, v_160);
    env = stack[-7];
    if (v_160 == nil) goto v_36;
    else goto v_32;
v_36:
    goto v_33;
v_32:
    goto v_28;
v_33:
    v_160 = stack[-3];
    if (!car_legal(v_160)) v_160 = carerror(v_160); else
    v_160 = car(v_160);
    v_161 = v_160;
    v_160 = stack[-3];
    if (!car_legal(v_160)) v_160 = cdrerror(v_160); else
    v_160 = cdr(v_160);
    stack[-3] = v_160;
    v_160 = v_161;
    stack[-6] = v_160;
    v_162 = stack[-6];
    v_161 = stack[-5];
    v_160 = stack[-4];
    {   LispObject fn = basic_elt(env, 6); // ofsf_ignshift
    v_160 = (*qfn3(fn))(fn, v_162, v_161, v_160);
    }
    env = stack[-7];
    v_162 = v_160;
    v_161 = v_162;
    v_160 = basic_elt(env, 3); // odd
    if (v_161 == v_160) goto v_60;
    else goto v_61;
v_60:
    v_160 = stack[-1];
    v_160 = (v_160 == nil ? lisp_true : nil);
    goto v_59;
v_61:
    v_160 = nil;
    goto v_59;
    v_160 = nil;
v_59:
    if (v_160 == nil) goto v_57;
    v_160 = basic_elt(env, 3); // odd
    stack[-1] = v_160;
    goto v_55;
v_57:
    v_160 = v_162;
    if (v_160 == nil) goto v_70;
    else goto v_71;
v_70:
    v_160 = stack[-6];
    if (!car_legal(v_160)) v_160 = cdrerror(v_160); else
    v_160 = cdr(v_160);
    if (!car_legal(v_160)) v_161 = carerror(v_160); else
    v_161 = car(v_160);
    v_160 = stack[-5];
    {   LispObject fn = basic_elt(env, 7); // sfto_reorder
    v_160 = (*qfn2(fn))(fn, v_161, v_160);
    }
    env = stack[-7];
    stack[-6] = v_160;
v_80:
    v_160 = stack[-6];
    if (!consp(v_160)) goto v_91;
    else goto v_92;
v_91:
    v_160 = lisp_true;
    goto v_90;
v_92:
    v_160 = stack[-6];
    if (!car_legal(v_160)) v_160 = carerror(v_160); else
    v_160 = car(v_160);
    v_160 = (consp(v_160) ? nil : lisp_true);
    goto v_90;
    v_160 = nil;
v_90:
    if (v_160 == nil) goto v_87;
    else goto v_88;
v_87:
    v_160 = stack[-6];
    if (!car_legal(v_160)) v_160 = carerror(v_160); else
    v_160 = car(v_160);
    if (!car_legal(v_160)) v_160 = carerror(v_160); else
    v_160 = car(v_160);
    if (!car_legal(v_160)) v_161 = carerror(v_160); else
    v_161 = car(v_160);
    v_160 = stack[-5];
    if (v_161 == v_160) goto v_102;
    else goto v_103;
v_102:
    v_161 = stack[0];
    v_160 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_160 = Lneq_2(nil, v_161, v_160);
    env = stack[-7];
    goto v_101;
v_103:
    v_160 = nil;
    goto v_101;
    v_160 = nil;
v_101:
    goto v_86;
v_88:
    v_160 = nil;
    goto v_86;
    v_160 = nil;
v_86:
    if (v_160 == nil) goto v_83;
    else goto v_84;
v_83:
    goto v_79;
v_84:
    v_161 = stack[0];
    v_160 = stack[-6];
    if (!car_legal(v_160)) v_160 = carerror(v_160); else
    v_160 = car(v_160);
    if (!car_legal(v_160)) v_160 = carerror(v_160); else
    v_160 = car(v_160);
    if (!car_legal(v_160)) v_160 = cdrerror(v_160); else
    v_160 = cdr(v_160);
    {   LispObject fn = basic_elt(env, 8); // gcdf
    v_160 = (*qfn2(fn))(fn, v_161, v_160);
    }
    env = stack[-7];
    stack[0] = v_160;
    v_160 = stack[-6];
    if (!car_legal(v_160)) v_160 = cdrerror(v_160); else
    v_160 = cdr(v_160);
    stack[-6] = v_160;
    goto v_80;
v_79:
    goto v_55;
v_71:
v_55:
    v_161 = stack[0];
    v_160 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_160 = static_cast<LispObject>(greaterp2(v_161, v_160));
    v_160 = v_160 ? lisp_true : nil;
    env = stack[-7];
    if (v_160 == nil) goto v_130;
    v_161 = stack[-1];
    v_160 = basic_elt(env, 3); // odd
    if (v_161 == v_160) goto v_135;
    else goto v_130;
v_135:
    v_160 = lisp_true;
    stack[-1] = v_160;
v_141:
    v_161 = stack[0];
    v_160 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    {   LispObject fn = basic_elt(env, 9); // quotf
    v_160 = (*qfn2(fn))(fn, v_161, v_160);
    }
    env = stack[-7];
    v_162 = v_160;
    if (v_160 == nil) goto v_144;
    else goto v_145;
v_144:
    goto v_140;
v_145:
    v_160 = v_162;
    stack[0] = v_160;
    goto v_141;
v_140:
    goto v_128;
v_130:
v_128:
    goto v_29;
v_28:
    v_161 = stack[0];
    v_160 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_161 == v_160) goto v_153;
    else goto v_154;
v_153:
    v_160 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_14;
v_154:
    v_160 = stack[0];
v_14:
    ;}  // end of a binding scope
    return onevalue(v_160);
}



// Code for mk!+scal!+mult!+mat

static LispObject CC_mkLscalLmultLmat(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_159, v_160;
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
    stack_popper stack_popper_var(11);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-8] = v_2;
// end of prologue
    v_159 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // matrix!+p
    v_159 = (*qfn1(fn))(fn, v_159);
    }
    env = stack[-10];
    if (v_159 == nil) goto v_13;
    else goto v_14;
v_13:
    v_159 = basic_elt(env, 1); // "no matrix in add"
    {   LispObject fn = basic_elt(env, 4); // rederr
    v_159 = (*qfn1(fn))(fn, v_159);
    }
    env = stack[-10];
    goto v_12;
v_14:
v_12:
    v_159 = stack[0];
    stack[-9] = v_159;
    v_159 = stack[-9];
    if (v_159 == nil) goto v_28;
    else goto v_29;
v_28:
    v_159 = nil;
    goto v_23;
v_29:
    v_159 = stack[-9];
    if (!car_legal(v_159)) v_159 = carerror(v_159); else
    v_159 = car(v_159);
    stack[-4] = v_159;
    v_159 = stack[-4];
    if (v_159 == nil) goto v_45;
    else goto v_46;
v_45:
    v_159 = nil;
    goto v_40;
v_46:
    v_159 = stack[-4];
    if (!car_legal(v_159)) v_159 = carerror(v_159); else
    v_159 = car(v_159);
    v_160 = stack[-8];
    {   LispObject fn = basic_elt(env, 5); // multsq
    v_159 = (*qfn2(fn))(fn, v_160, v_159);
    }
    env = stack[-10];
    v_160 = v_159;
    v_159 = lisp_true;
// Binding !*sub2
// FLUIDBIND: reloadenv=10 litvec-offset=2 saveloc=0
{   bind_fluid_stack bind_fluid_var(-10, 2, 0);
    setvalue(basic_elt(env, 2), v_159); // !*sub2
    v_159 = v_160;
    {   LispObject fn = basic_elt(env, 6); // subs2
    v_159 = (*qfn1(fn))(fn, v_159);
    }
    env = stack[-10];
    v_160 = v_159;
    ;}  // end of a binding scope
    v_159 = v_160;
    v_159 = ncons(v_159);
    env = stack[-10];
    stack[-2] = v_159;
    stack[-3] = v_159;
v_41:
    v_159 = stack[-4];
    if (!car_legal(v_159)) v_159 = cdrerror(v_159); else
    v_159 = cdr(v_159);
    stack[-4] = v_159;
    v_159 = stack[-4];
    if (v_159 == nil) goto v_67;
    else goto v_68;
v_67:
    v_159 = stack[-3];
    goto v_40;
v_68:
    stack[-1] = stack[-2];
    v_159 = stack[-4];
    if (!car_legal(v_159)) v_159 = carerror(v_159); else
    v_159 = car(v_159);
    v_160 = stack[-8];
    {   LispObject fn = basic_elt(env, 5); // multsq
    v_159 = (*qfn2(fn))(fn, v_160, v_159);
    }
    env = stack[-10];
    v_160 = v_159;
    v_159 = lisp_true;
// Binding !*sub2
// FLUIDBIND: reloadenv=10 litvec-offset=2 saveloc=0
{   bind_fluid_stack bind_fluid_var(-10, 2, 0);
    setvalue(basic_elt(env, 2), v_159); // !*sub2
    v_159 = v_160;
    {   LispObject fn = basic_elt(env, 6); // subs2
    v_159 = (*qfn1(fn))(fn, v_159);
    }
    env = stack[-10];
    v_160 = v_159;
    ;}  // end of a binding scope
    v_159 = v_160;
    v_159 = ncons(v_159);
    env = stack[-10];
    if (!car_legal(stack[-1])) rplacd_fails(stack[-1]);
    setcdr(stack[-1], v_159);
    v_159 = stack[-2];
    if (!car_legal(v_159)) v_159 = cdrerror(v_159); else
    v_159 = cdr(v_159);
    stack[-2] = v_159;
    goto v_41;
v_40:
    v_159 = ncons(v_159);
    env = stack[-10];
    stack[-6] = v_159;
    stack[-7] = v_159;
v_24:
    v_159 = stack[-9];
    if (!car_legal(v_159)) v_159 = cdrerror(v_159); else
    v_159 = cdr(v_159);
    stack[-9] = v_159;
    v_159 = stack[-9];
    if (v_159 == nil) goto v_93;
    else goto v_94;
v_93:
    v_159 = stack[-7];
    goto v_23;
v_94:
    stack[-5] = stack[-6];
    v_159 = stack[-9];
    if (!car_legal(v_159)) v_159 = carerror(v_159); else
    v_159 = car(v_159);
    stack[-4] = v_159;
    v_159 = stack[-4];
    if (v_159 == nil) goto v_111;
    else goto v_112;
v_111:
    v_159 = nil;
    goto v_106;
v_112:
    v_159 = stack[-4];
    if (!car_legal(v_159)) v_159 = carerror(v_159); else
    v_159 = car(v_159);
    v_160 = stack[-8];
    {   LispObject fn = basic_elt(env, 5); // multsq
    v_159 = (*qfn2(fn))(fn, v_160, v_159);
    }
    env = stack[-10];
    v_160 = v_159;
    v_159 = lisp_true;
// Binding !*sub2
// FLUIDBIND: reloadenv=10 litvec-offset=2 saveloc=0
{   bind_fluid_stack bind_fluid_var(-10, 2, 0);
    setvalue(basic_elt(env, 2), v_159); // !*sub2
    v_159 = v_160;
    {   LispObject fn = basic_elt(env, 6); // subs2
    v_159 = (*qfn1(fn))(fn, v_159);
    }
    env = stack[-10];
    v_160 = v_159;
    ;}  // end of a binding scope
    v_159 = v_160;
    v_159 = ncons(v_159);
    env = stack[-10];
    stack[-2] = v_159;
    stack[-3] = v_159;
v_107:
    v_159 = stack[-4];
    if (!car_legal(v_159)) v_159 = cdrerror(v_159); else
    v_159 = cdr(v_159);
    stack[-4] = v_159;
    v_159 = stack[-4];
    if (v_159 == nil) goto v_133;
    else goto v_134;
v_133:
    v_159 = stack[-3];
    goto v_106;
v_134:
    stack[-1] = stack[-2];
    v_159 = stack[-4];
    if (!car_legal(v_159)) v_159 = carerror(v_159); else
    v_159 = car(v_159);
    v_160 = stack[-8];
    {   LispObject fn = basic_elt(env, 5); // multsq
    v_159 = (*qfn2(fn))(fn, v_160, v_159);
    }
    env = stack[-10];
    v_160 = v_159;
    v_159 = lisp_true;
// Binding !*sub2
// FLUIDBIND: reloadenv=10 litvec-offset=2 saveloc=0
{   bind_fluid_stack bind_fluid_var(-10, 2, 0);
    setvalue(basic_elt(env, 2), v_159); // !*sub2
    v_159 = v_160;
    {   LispObject fn = basic_elt(env, 6); // subs2
    v_159 = (*qfn1(fn))(fn, v_159);
    }
    env = stack[-10];
    v_160 = v_159;
    ;}  // end of a binding scope
    v_159 = v_160;
    v_159 = ncons(v_159);
    env = stack[-10];
    if (!car_legal(stack[-1])) rplacd_fails(stack[-1]);
    setcdr(stack[-1], v_159);
    v_159 = stack[-2];
    if (!car_legal(v_159)) v_159 = cdrerror(v_159); else
    v_159 = cdr(v_159);
    stack[-2] = v_159;
    goto v_107;
v_106:
    v_159 = ncons(v_159);
    env = stack[-10];
    if (!car_legal(stack[-5])) rplacd_fails(stack[-5]);
    setcdr(stack[-5], v_159);
    v_159 = stack[-6];
    if (!car_legal(v_159)) v_159 = cdrerror(v_159); else
    v_159 = cdr(v_159);
    stack[-6] = v_159;
    goto v_24;
v_23:
    return onevalue(v_159);
}



// Code for cl_susiupdknowl2

static LispObject CC_cl_susiupdknowl2(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_113, v_114, v_115;
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(9);
// copy arguments values to proper place
    stack[-4] = v_4;
    stack[-5] = v_3;
    stack[-6] = v_2;
// end of prologue
    stack[-3] = nil;
    stack[-1] = nil;
    stack[0] = nil;
    v_113 = stack[-5];
    stack[-2] = v_113;
v_18:
    v_113 = stack[-2];
    if (v_113 == nil) goto v_21;
    else goto v_22;
v_21:
    goto v_17;
v_22:
    v_113 = stack[-2];
    if (!car_legal(v_113)) v_113 = carerror(v_113); else
    v_113 = car(v_113);
    stack[-7] = v_113;
    v_113 = stack[-2];
    if (!car_legal(v_113)) v_113 = cdrerror(v_113); else
    v_113 = cdr(v_113);
    stack[-2] = v_113;
    v_114 = stack[-7];
    v_113 = stack[-6];
    {   LispObject fn = basic_elt(env, 2); // rl_susibin
    v_113 = (*qfn2(fn))(fn, v_114, v_113);
    }
    env = stack[-8];
    stack[-3] = v_113;
    v_114 = stack[-3];
    v_113 = basic_elt(env, 1); // false
    if (v_114 == v_113) goto v_34;
    else goto v_35;
v_34:
    v_113 = nil;
    stack[-2] = v_113;
    goto v_33;
v_35:
    v_115 = stack[-3];
    v_114 = stack[-5];
    v_113 = stack[-7];
    {   LispObject fn = basic_elt(env, 3); // cl_susiinter
    v_113 = (*qfn3(fn))(fn, v_115, v_114, v_113);
    }
    env = stack[-8];
    stack[-3] = v_113;
    v_114 = stack[0];
    v_113 = stack[-3];
    if (!car_legal(v_113)) v_113 = cdrerror(v_113); else
    v_113 = cdr(v_113);
    if (!car_legal(v_113)) v_113 = carerror(v_113); else
    v_113 = car(v_113);
    v_113 = Lnconc(nil, v_114, v_113);
    env = stack[-8];
    stack[0] = v_113;
    v_113 = stack[-3];
    if (!car_legal(v_113)) v_113 = carerror(v_113); else
    v_113 = car(v_113);
    stack[-5] = v_113;
    v_113 = stack[-3];
    if (!car_legal(v_113)) v_113 = cdrerror(v_113); else
    v_113 = cdr(v_113);
    if (!car_legal(v_113)) v_113 = cdrerror(v_113); else
    v_113 = cdr(v_113);
    if (!car_legal(v_113)) v_113 = carerror(v_113); else
    v_113 = car(v_113);
    if (v_113 == nil) goto v_55;
    goto v_53;
v_55:
v_53:
    v_113 = stack[-3];
    if (!car_legal(v_113)) v_113 = cdrerror(v_113); else
    v_113 = cdr(v_113);
    if (!car_legal(v_113)) v_113 = cdrerror(v_113); else
    v_113 = cdr(v_113);
    if (!car_legal(v_113)) v_113 = cdrerror(v_113); else
    v_113 = cdr(v_113);
    if (!car_legal(v_113)) v_113 = carerror(v_113); else
    v_113 = car(v_113);
    if (v_113 == nil) goto v_64;
    v_113 = lisp_true;
    stack[-1] = v_113;
    v_113 = nil;
    stack[-2] = v_113;
    goto v_62;
v_64:
v_62:
    goto v_33;
v_33:
    goto v_18;
v_17:
    v_114 = stack[-3];
    v_113 = basic_elt(env, 1); // false
    if (v_114 == v_113) goto v_74;
    else goto v_75;
v_74:
    v_113 = basic_elt(env, 1); // false
    goto v_14;
v_75:
    v_113 = stack[-1];
    if (v_113 == nil) goto v_81;
    else goto v_82;
v_81:
    v_114 = stack[-6];
    v_113 = stack[-5];
    v_113 = cons(v_114, v_113);
    env = stack[-8];
    stack[-5] = v_113;
    goto v_80;
v_82:
v_80:
v_89:
    v_113 = stack[0];
    if (v_113 == nil) goto v_92;
    else goto v_93;
v_92:
    goto v_88;
v_93:
    v_113 = stack[0];
    if (!car_legal(v_113)) v_115 = carerror(v_113); else
    v_115 = car(v_113);
    v_114 = stack[-5];
    v_113 = stack[-4];
    {   LispObject fn = basic_elt(env, 0); // cl_susiupdknowl2
    v_113 = (*qfn3(fn))(fn, v_115, v_114, v_113);
    }
    env = stack[-8];
    stack[-5] = v_113;
    v_114 = stack[-5];
    v_113 = basic_elt(env, 1); // false
    if (v_114 == v_113) goto v_103;
    else goto v_104;
v_103:
    v_113 = nil;
    stack[0] = v_113;
    goto v_102;
v_104:
    v_113 = stack[0];
    if (!car_legal(v_113)) v_113 = cdrerror(v_113); else
    v_113 = cdr(v_113);
    stack[0] = v_113;
    goto v_102;
v_102:
    goto v_89;
v_88:
    v_113 = stack[-5];
v_14:
    return onevalue(v_113);
}



// Code for gcdld

static LispObject CC_gcdld(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_47 = v_3;
    v_48 = v_2;
// end of prologue
v_8:
    v_49 = v_47;
    v_46 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_49 == v_46) goto v_15;
    else goto v_16;
v_15:
    v_46 = lisp_true;
    goto v_14;
v_16:
    v_49 = v_47;
    v_46 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    v_46 = (v_49 == v_46 ? lisp_true : nil);
    goto v_14;
    v_46 = nil;
v_14:
    if (v_46 == nil) goto v_12;
    v_46 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_7;
v_12:
    v_46 = v_48;
    if (v_46 == nil) goto v_26;
    else goto v_27;
v_26:
    v_46 = v_47;
        return Labsval(nil, v_46);
v_27:
    v_46 = v_48;
    if (!car_legal(v_46)) v_46 = carerror(v_46); else
    v_46 = car(v_46);
    if (v_46 == nil) goto v_31;
    else goto v_32;
v_31:
    v_46 = v_48;
    if (!car_legal(v_46)) v_46 = cdrerror(v_46); else
    v_46 = cdr(v_46);
    v_48 = v_46;
    goto v_8;
v_32:
    v_46 = v_48;
    if (!car_legal(v_46)) v_46 = cdrerror(v_46); else
    v_46 = cdr(v_46);
    stack[0] = v_46;
    v_46 = v_47;
    v_47 = v_48;
    if (!car_legal(v_47)) v_47 = carerror(v_47); else
    v_47 = car(v_47);
    {   LispObject fn = basic_elt(env, 1); // gcd!-with!-number
    v_46 = (*qfn2(fn))(fn, v_46, v_47);
    }
    env = stack[-1];
    v_47 = v_46;
    v_46 = stack[0];
    v_48 = v_46;
    goto v_8;
    v_46 = nil;
v_7:
    return onevalue(v_46);
}



// Code for matrixelems

static LispObject CC_matrixelems(LispObject env,
                         LispObject v_2)
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
    v_26 = nil;
v_7:
    v_25 = stack[0];
    if (v_25 == nil) goto v_11;
    v_25 = stack[0];
    if (!car_legal(v_25)) v_25 = carerror(v_25); else
    v_25 = car(v_25);
    if (!car_legal(v_25)) v_25 = cdrerror(v_25); else
    v_25 = cdr(v_25);
    if (!car_legal(v_25)) v_25 = cdrerror(v_25); else
    v_25 = cdr(v_25);
    v_25 = cons(v_25, v_26);
    env = stack[-1];
    v_26 = v_25;
    v_25 = stack[0];
    if (!car_legal(v_25)) v_25 = cdrerror(v_25); else
    v_25 = cdr(v_25);
    stack[0] = v_25;
    goto v_7;
v_11:
    v_25 = v_26;
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn1(fn))(fn, v_25);
    }
    v_25 = nil;
    return onevalue(v_25);
}



// Code for f2dip1

static LispObject CC_f2dip1(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    v_62 = stack[-4];
    if (v_62 == nil) goto v_8;
    else goto v_9;
v_8:
    v_62 = nil;
    goto v_7;
v_9:
    v_62 = stack[-4];
    if (!consp(v_62)) goto v_16;
    else goto v_17;
v_16:
    v_62 = lisp_true;
    goto v_15;
v_17:
    v_62 = stack[-4];
    if (!car_legal(v_62)) v_62 = carerror(v_62); else
    v_62 = car(v_62);
    v_62 = (consp(v_62) ? nil : lisp_true);
    goto v_15;
    v_62 = nil;
v_15:
    if (v_62 == nil) goto v_13;
    v_62 = stack[-2];
    v_62 = (is_number(v_62) ? lisp_true : nil);
    if (v_62 == nil) goto v_27;
    else goto v_26;
v_27:
    v_62 = stack[-2];
    {   LispObject fn = basic_elt(env, 1); // f2dip11
    v_62 = (*qfn1(fn))(fn, v_62);
    }
    env = stack[-6];
v_26:
    stack[0] = stack[-3];
    stack[-1] = stack[-2];
    v_62 = stack[-4];
    {   LispObject fn = basic_elt(env, 2); // bcfd
    v_62 = (*qfn1(fn))(fn, v_62);
    }
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 3); // bcprod
    v_63 = (*qfn2(fn))(fn, stack[-1], v_62);
    }
    v_62 = nil;
    {
        LispObject v_71 = stack[0];
        return list2star(v_71, v_63, v_62);
    }
v_13:
    v_62 = stack[-4];
    if (!car_legal(v_62)) v_62 = carerror(v_62); else
    v_62 = car(v_62);
    if (!car_legal(v_62)) v_62 = carerror(v_62); else
    v_62 = car(v_62);
    if (!car_legal(v_62)) stack[-5] = carerror(v_62); else
    stack[-5] = car(v_62);
    v_62 = stack[-4];
    if (!car_legal(v_62)) v_62 = carerror(v_62); else
    v_62 = car(v_62);
    if (!car_legal(v_62)) v_62 = carerror(v_62); else
    v_62 = car(v_62);
    if (!car_legal(v_62)) stack[-1] = cdrerror(v_62); else
    stack[-1] = cdr(v_62);
    v_62 = stack[-4];
    if (!car_legal(v_62)) v_62 = carerror(v_62); else
    v_62 = car(v_62);
    if (!car_legal(v_62)) stack[0] = cdrerror(v_62); else
    stack[0] = cdr(v_62);
    v_63 = stack[-3];
    v_62 = stack[-2];
    v_62 = list2(v_63, v_62);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 4); // f2dip2
    stack[0] = (*qfn4up(fn))(fn, stack[-5], stack[-1], stack[0], v_62);
    }
    env = stack[-6];
    v_62 = stack[-4];
    if (!car_legal(v_62)) v_64 = cdrerror(v_62); else
    v_64 = cdr(v_62);
    v_63 = stack[-3];
    v_62 = stack[-2];
    {   LispObject fn = basic_elt(env, 0); // f2dip1
    v_62 = (*qfn3(fn))(fn, v_64, v_63, v_62);
    }
    env = stack[-6];
    {
        LispObject v_72 = stack[0];
        LispObject fn = basic_elt(env, 5); // dipsum
        return (*qfn2(fn))(fn, v_72, v_62);
    }
    v_62 = nil;
v_7:
    return onevalue(v_62);
}



// Code for add_item

static LispObject CC_add_item(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_41 = stack[0];
    if (!car_legal(v_41)) v_41 = cdrerror(v_41); else
    v_41 = cdr(v_41);
    if (v_41 == nil) goto v_10;
    else goto v_11;
v_10:
    v_42 = stack[0];
    v_41 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // setcar
    v_41 = (*qfn2(fn))(fn, v_42, v_41);
    }
    env = stack[-3];
    stack[-2] = stack[0];
    stack[-1] = basic_elt(env, 1); // !*xset!*
    stack[0] = nil;
    v_41 = basic_elt(env, 1); // !*xset!*
    v_41 = ncons(v_41);
    env = stack[-3];
    v_41 = acons(stack[-1], stack[0], v_41);
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 3); // setcdr
    v_41 = (*qfn2(fn))(fn, stack[-2], v_41);
    }
    v_41 = nil;
    goto v_6;
v_11:
    v_41 = stack[0];
    if (!car_legal(v_41)) v_41 = carerror(v_41); else
    v_41 = car(v_41);
    if (!car_legal(v_41)) v_42 = carerror(v_41); else
    v_42 = car(v_41);
    v_41 = stack[-1];
    if (!car_legal(v_41)) v_41 = carerror(v_41); else
    v_41 = car(v_41);
    {   LispObject fn = basic_elt(env, 4); // monordp
    v_41 = (*qfn2(fn))(fn, v_42, v_41);
    }
    env = stack[-3];
    if (v_41 == nil) goto v_26;
    v_41 = stack[0];
    if (!car_legal(v_41)) v_41 = cdrerror(v_41); else
    v_41 = cdr(v_41);
    if (!car_legal(v_41)) v_41 = carerror(v_41); else
    v_41 = car(v_41);
    stack[0] = v_41;
    goto v_7;
v_26:
    v_41 = stack[0];
    if (!car_legal(v_41)) v_41 = cdrerror(v_41); else
    v_41 = cdr(v_41);
    if (!car_legal(v_41)) v_41 = cdrerror(v_41); else
    v_41 = cdr(v_41);
    stack[0] = v_41;
    goto v_7;
    v_41 = nil;
v_6:
    return onevalue(v_41);
}



// Code for bflessp

static LispObject CC_bflessp(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_18, v_19, v_20;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_19 = v_3;
    v_20 = v_2;
// end of prologue
    v_18 = v_20;
    if (!consp(v_18)) goto v_7;
    else goto v_8;
v_7:
    v_18 = v_20;
        return Llessp_2(nil, v_18, v_19);
v_8:
    v_18 = v_19;
    v_19 = v_20;
    {
        LispObject fn = basic_elt(env, 1); // grpbf
        return (*qfn2(fn))(fn, v_18, v_19);
    }
    v_18 = nil;
    return onevalue(v_18);
}



// Code for spp

static LispObject CC_spp(LispObject env,
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
    v_16 = v_2;
// end of prologue
    v_17 = v_16;
    v_17 = Lconsp(nil, v_17);
    env = stack[0];
    if (v_17 == nil) goto v_6;
    else goto v_7;
v_6:
    v_16 = nil;
    goto v_5;
v_7:
    if (!car_legal(v_16)) v_16 = carerror(v_16); else
    v_16 = car(v_16);
    {
        LispObject fn = basic_elt(env, 1); // kernelp
        return (*qfn1(fn))(fn, v_16);
    }
    v_16 = nil;
v_5:
    return onevalue(v_16);
}



// Code for s_noparents

static LispObject CC_s_noparents(LispObject env,
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
    {   LispObject fn = basic_elt(env, 2); // has_parents
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



// Code for xremf

static LispObject CC_xremf(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_217, v_218, v_219;
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(10);
// copy arguments values to proper place
    stack[-5] = v_4;
    stack[-6] = v_3;
    stack[-7] = v_2;
// end of prologue
    stack[-1] = nil;
    v_217 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-8] = v_217;
    v_217 = stack[-6];
    if (!consp(v_217)) goto v_24;
    else goto v_25;
v_24:
    v_217 = lisp_true;
    goto v_23;
v_25:
    v_217 = stack[-6];
    if (!car_legal(v_217)) v_217 = carerror(v_217); else
    v_217 = car(v_217);
    v_217 = (consp(v_217) ? nil : lisp_true);
    goto v_23;
    v_217 = nil;
v_23:
    if (v_217 == nil) goto v_21;
    v_218 = stack[-7];
    v_217 = stack[-6];
    {   LispObject fn = basic_elt(env, 1); // qremd
    v_217 = (*qfn2(fn))(fn, v_218, v_217);
    }
    if (!car_legal(v_217)) v_217 = cdrerror(v_217); else
    v_217 = cdr(v_217);
    return ncons(v_217);
v_21:
    v_217 = stack[-7];
    {   LispObject fn = basic_elt(env, 2); // termsf
    v_217 = (*qfn1(fn))(fn, v_217);
    }
    env = stack[-9];
    stack[0] = v_217;
v_14:
    v_218 = stack[-5];
    v_217 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_217 = static_cast<LispObject>(lesseq2(v_218, v_217));
    v_217 = v_217 ? lisp_true : nil;
    env = stack[-9];
    if (v_217 == nil) goto v_43;
    v_217 = nil;
    goto v_13;
v_43:
    v_217 = stack[-7];
    if (!consp(v_217)) goto v_52;
    else goto v_53;
v_52:
    v_217 = lisp_true;
    goto v_51;
v_53:
    v_217 = stack[-7];
    if (!car_legal(v_217)) v_217 = carerror(v_217); else
    v_217 = car(v_217);
    v_217 = (consp(v_217) ? nil : lisp_true);
    goto v_51;
    v_217 = nil;
v_51:
    if (v_217 == nil) goto v_49;
    v_218 = stack[-1];
    v_217 = stack[-7];
    {   LispObject fn = basic_elt(env, 3); // addf
    v_217 = (*qfn2(fn))(fn, v_218, v_217);
    }
    return ncons(v_217);
v_49:
    v_217 = stack[-7];
    if (!car_legal(v_217)) v_217 = carerror(v_217); else
    v_217 = car(v_217);
    if (!car_legal(v_217)) v_217 = carerror(v_217); else
    v_217 = car(v_217);
    if (!car_legal(v_217)) v_218 = carerror(v_217); else
    v_218 = car(v_217);
    v_217 = stack[-6];
    if (!car_legal(v_217)) v_217 = carerror(v_217); else
    v_217 = car(v_217);
    if (!car_legal(v_217)) v_217 = carerror(v_217); else
    v_217 = car(v_217);
    if (!car_legal(v_217)) v_217 = carerror(v_217); else
    v_217 = car(v_217);
    if (v_218 == v_217) goto v_65;
    else goto v_66;
v_65:
    v_217 = stack[-7];
    if (!car_legal(v_217)) v_217 = carerror(v_217); else
    v_217 = car(v_217);
    if (!car_legal(v_217)) v_217 = carerror(v_217); else
    v_217 = car(v_217);
    if (!car_legal(v_217)) v_218 = cdrerror(v_217); else
    v_218 = cdr(v_217);
    v_217 = stack[-6];
    if (!car_legal(v_217)) v_217 = carerror(v_217); else
    v_217 = car(v_217);
    if (!car_legal(v_217)) v_217 = carerror(v_217); else
    v_217 = car(v_217);
    if (!car_legal(v_217)) v_217 = cdrerror(v_217); else
    v_217 = cdr(v_217);
    v_218 = difference2(v_218, v_217);
    env = stack[-9];
    stack[-4] = v_218;
    v_217 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_217 = static_cast<LispObject>(lessp2(v_218, v_217));
    v_217 = v_217 ? lisp_true : nil;
    env = stack[-9];
    if (v_217 == nil) goto v_78;
    v_218 = stack[-1];
    v_217 = stack[-7];
    {   LispObject fn = basic_elt(env, 3); // addf
    v_217 = (*qfn2(fn))(fn, v_218, v_217);
    }
    return ncons(v_217);
v_78:
    v_217 = stack[-7];
    if (!car_legal(v_217)) v_217 = carerror(v_217); else
    v_217 = car(v_217);
    if (!car_legal(v_217)) v_218 = cdrerror(v_217); else
    v_218 = cdr(v_217);
    v_217 = stack[-6];
    if (!car_legal(v_217)) v_217 = carerror(v_217); else
    v_217 = car(v_217);
    if (!car_legal(v_217)) v_217 = cdrerror(v_217); else
    v_217 = cdr(v_217);
    {   LispObject fn = basic_elt(env, 4); // qremf
    v_217 = (*qfn2(fn))(fn, v_218, v_217);
    }
    env = stack[-9];
    stack[-3] = v_217;
    v_217 = stack[-7];
    if (!car_legal(v_217)) v_217 = carerror(v_217); else
    v_217 = car(v_217);
    if (!car_legal(v_217)) v_218 = carerror(v_217); else
    v_218 = car(v_217);
    v_217 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_217 = cons(v_218, v_217);
    env = stack[-9];
    v_218 = ncons(v_217);
    env = stack[-9];
    v_217 = stack[-3];
    if (!car_legal(v_217)) v_217 = cdrerror(v_217); else
    v_217 = cdr(v_217);
    {   LispObject fn = basic_elt(env, 5); // multf
    v_217 = (*qfn2(fn))(fn, v_218, v_217);
    }
    env = stack[-9];
    stack[-2] = v_217;
    v_218 = stack[-5];
    v_217 = stack[-8];
    v_217 = plus2(v_218, v_217);
    env = stack[-9];
    stack[-5] = v_217;
    v_218 = stack[-1];
    v_217 = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // addf
    v_217 = (*qfn2(fn))(fn, v_218, v_217);
    }
    env = stack[-9];
    stack[-1] = v_217;
    v_217 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // termsf
    v_217 = (*qfn1(fn))(fn, v_217);
    }
    env = stack[-9];
    stack[-8] = v_217;
    v_218 = stack[-5];
    v_217 = stack[-8];
    v_218 = difference2(v_218, v_217);
    env = stack[-9];
    v_217 = stack[0];
    v_217 = plus2(v_218, v_217);
    env = stack[-9];
    stack[-5] = v_217;
    v_217 = stack[-3];
    if (!car_legal(v_217)) v_217 = carerror(v_217); else
    v_217 = car(v_217);
    if (v_217 == nil) goto v_127;
    else goto v_128;
v_127:
    v_217 = stack[-7];
    if (!car_legal(v_217)) v_217 = cdrerror(v_217); else
    v_217 = cdr(v_217);
    goto v_126;
v_128:
    stack[0] = stack[-7];
    v_218 = stack[-4];
    v_217 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_218 == v_217) goto v_141;
    else goto v_142;
v_141:
    v_217 = stack[-6];
    stack[-4] = v_217;
    goto v_140;
v_142:
    v_217 = stack[-7];
    if (!car_legal(v_217)) v_217 = carerror(v_217); else
    v_217 = car(v_217);
    if (!car_legal(v_217)) v_217 = carerror(v_217); else
    v_217 = car(v_217);
    if (!car_legal(v_217)) v_218 = carerror(v_217); else
    v_218 = car(v_217);
    v_217 = stack[-4];
    {   LispObject fn = basic_elt(env, 6); // to
    v_218 = (*qfn2(fn))(fn, v_218, v_217);
    }
    env = stack[-9];
    v_217 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_217 = cons(v_218, v_217);
    env = stack[-9];
    v_218 = ncons(v_217);
    env = stack[-9];
    v_217 = stack[-6];
    {   LispObject fn = basic_elt(env, 5); // multf
    v_217 = (*qfn2(fn))(fn, v_218, v_217);
    }
    env = stack[-9];
    stack[-4] = v_217;
    goto v_140;
    stack[-4] = nil;
v_140:
    v_217 = stack[-3];
    if (!car_legal(v_217)) v_217 = carerror(v_217); else
    v_217 = car(v_217);
    {   LispObject fn = basic_elt(env, 7); // negf
    v_217 = (*qfn1(fn))(fn, v_217);
    }
    env = stack[-9];
    {   LispObject fn = basic_elt(env, 5); // multf
    v_217 = (*qfn2(fn))(fn, stack[-4], v_217);
    }
    env = stack[-9];
    {   LispObject fn = basic_elt(env, 3); // addf
    stack[0] = (*qfn2(fn))(fn, stack[0], v_217);
    }
    env = stack[-9];
    v_217 = stack[-2];
    {   LispObject fn = basic_elt(env, 7); // negf
    v_217 = (*qfn1(fn))(fn, v_217);
    }
    env = stack[-9];
    {   LispObject fn = basic_elt(env, 3); // addf
    v_217 = (*qfn2(fn))(fn, stack[0], v_217);
    }
    env = stack[-9];
    goto v_126;
    v_217 = nil;
v_126:
    stack[-7] = v_217;
    v_217 = stack[-7];
    {   LispObject fn = basic_elt(env, 2); // termsf
    v_217 = (*qfn1(fn))(fn, v_217);
    }
    env = stack[-9];
    stack[0] = v_217;
    v_218 = stack[-5];
    v_217 = stack[0];
    v_217 = difference2(v_218, v_217);
    env = stack[-9];
    stack[-5] = v_217;
    goto v_14;
    goto v_41;
v_66:
    v_217 = stack[-7];
    if (!car_legal(v_217)) v_217 = carerror(v_217); else
    v_217 = car(v_217);
    if (!car_legal(v_217)) v_217 = carerror(v_217); else
    v_217 = car(v_217);
    if (!car_legal(v_217)) v_218 = carerror(v_217); else
    v_218 = car(v_217);
    v_217 = stack[-6];
    if (!car_legal(v_217)) v_217 = carerror(v_217); else
    v_217 = car(v_217);
    if (!car_legal(v_217)) v_217 = carerror(v_217); else
    v_217 = car(v_217);
    if (!car_legal(v_217)) v_217 = carerror(v_217); else
    v_217 = car(v_217);
    {   LispObject fn = basic_elt(env, 8); // ordop
    v_217 = (*qfn2(fn))(fn, v_218, v_217);
    }
    env = stack[-9];
    if (v_217 == nil) goto v_169;
    else goto v_170;
v_169:
    v_218 = stack[-1];
    v_217 = stack[-7];
    {   LispObject fn = basic_elt(env, 3); // addf
    v_217 = (*qfn2(fn))(fn, v_218, v_217);
    }
    return ncons(v_217);
v_170:
v_41:
    v_218 = stack[-5];
    v_217 = stack[-8];
    v_217 = plus2(v_218, v_217);
    env = stack[-9];
    stack[-5] = v_217;
    v_217 = stack[-7];
    if (!car_legal(v_217)) v_217 = carerror(v_217); else
    v_217 = car(v_217);
    if (!car_legal(v_217)) v_219 = cdrerror(v_217); else
    v_219 = cdr(v_217);
    v_218 = stack[-6];
    v_217 = stack[-5];
    {   LispObject fn = basic_elt(env, 0); // xremf
    v_217 = (*qfn3(fn))(fn, v_219, v_218, v_217);
    }
    env = stack[-9];
    stack[-3] = v_217;
    v_217 = stack[-3];
    if (v_217 == nil) goto v_195;
    else goto v_196;
v_195:
    v_217 = nil;
    goto v_13;
v_196:
    v_217 = stack[-7];
    if (!car_legal(v_217)) v_217 = carerror(v_217); else
    v_217 = car(v_217);
    if (!car_legal(v_217)) v_218 = carerror(v_217); else
    v_218 = car(v_217);
    v_217 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_217 = cons(v_218, v_217);
    env = stack[-9];
    v_218 = ncons(v_217);
    env = stack[-9];
    v_217 = stack[-3];
    if (!car_legal(v_217)) v_217 = carerror(v_217); else
    v_217 = car(v_217);
    {   LispObject fn = basic_elt(env, 5); // multf
    v_217 = (*qfn2(fn))(fn, v_218, v_217);
    }
    env = stack[-9];
    {   LispObject fn = basic_elt(env, 3); // addf
    v_217 = (*qfn2(fn))(fn, stack[-1], v_217);
    }
    env = stack[-9];
    stack[-1] = v_217;
    v_217 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // termsf
    v_217 = (*qfn1(fn))(fn, v_217);
    }
    env = stack[-9];
    stack[-8] = v_217;
    v_218 = stack[-5];
    v_217 = stack[-8];
    v_217 = difference2(v_218, v_217);
    env = stack[-9];
    stack[-5] = v_217;
    v_217 = stack[-7];
    if (!car_legal(v_217)) v_217 = cdrerror(v_217); else
    v_217 = cdr(v_217);
    stack[-7] = v_217;
    goto v_14;
v_13:
    return onevalue(v_217);
}



// Code for vector!-to!-poly

static LispObject CC_vectorKtoKpoly(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    v_54 = stack[-3];
    v_53 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if ((static_cast<std::intptr_t>(v_54) < static_cast<std::intptr_t>(v_53))) goto v_11;
    else goto v_12;
v_11:
    v_53 = nil;
    goto v_8;
v_12:
    v_54 = stack[-4];
    v_53 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_53 = Lgetv(nil, v_54, v_53);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 1); // !*n2f
    v_53 = (*qfn1(fn))(fn, v_53);
    }
    env = stack[-6];
    stack[-5] = v_53;
    v_53 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-1] = v_53;
v_23:
    v_54 = stack[-3];
    v_53 = stack[-1];
    v_53 = difference2(v_54, v_53);
    env = stack[-6];
    v_53 = Lminusp(nil, v_53);
    env = stack[-6];
    if (v_53 == nil) goto v_28;
    goto v_22;
v_28:
    v_54 = stack[-4];
    v_53 = stack[-1];
    v_54 = Lgetv(nil, v_54, v_53);
    env = stack[-6];
    v_53 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_54 == v_53) goto v_37;
    v_54 = stack[-2];
    v_53 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // to
    stack[0] = (*qfn2(fn))(fn, v_54, v_53);
    }
    env = stack[-6];
    v_54 = stack[-4];
    v_53 = stack[-1];
    v_54 = Lgetv(nil, v_54, v_53);
    env = stack[-6];
    v_53 = stack[-5];
    v_53 = acons(stack[0], v_54, v_53);
    env = stack[-6];
    stack[-5] = v_53;
    goto v_35;
v_37:
v_35:
    v_53 = stack[-1];
    v_53 = add1(v_53);
    env = stack[-6];
    stack[-1] = v_53;
    goto v_23;
v_22:
    v_53 = stack[-5];
v_8:
    return onevalue(v_53);
}



setup_type const u38_setup[] =
{
    {"weak_xreduce1",           G0W3,     G1W3,     G2W3,     CC_weak_xreduce1,G4W3},
    {"intrdsortin",             G0W2,     G1W2,     CC_intrdsortin,G3W2,G4W2},
    {"all_defined_vertex",      G0W2,     G1W2,     CC_all_defined_vertex,G3W2,G4W2},
    {"listeval0",               G0W1,     CC_listeval0,G2W1,  G3W1,     G4W1},
    {"num_signsort",            G0W1,     CC_num_signsort,G2W1,G3W1,    G4W1},
    {"lambda_ygm6np4pcqv31",    G0W2,     G1W2,     CC_lambda_ygm6np4pcqv31,G3W2,G4W2},
    {"lpos",                    G0W2,     G1W2,     CC_lpos,  G3W2,     G4W2},
    {"makeqn-maybe",            G0W3,     G1W3,     G2W3,     CC_makeqnKmaybe,G4W3},
    {"lalr_lr0_initial_itemset",CC_lalr_lr0_initial_itemset,G1W0,G2W0,G3W0,G4W0},
    {"aex_mklcnt",              G0W1,     CC_aex_mklcnt,G2W1, G3W1,     G4W1},
    {"multerm",                 G0W2,     G1W2,     CC_multerm,G3W2,    G4W2},
    {"mri_opn",                 G0W1,     CC_mri_opn,G2W1,    G3W1,     G4W1},
    {"dip_sum",                 G0W2,     G1W2,     CC_dip_sum,G3W2,    G4W2},
    {"ofsf_factsf",             G0W1,     CC_ofsf_factsf,G2W1,G3W1,     G4W1},
    {"determinantrd",           CC_determinantrd,G1W0,G2W0,   G3W0,     G4W0},
    {"greatertype",             G0W2,     G1W2,     CC_greatertype,G3W2,G4W2},
    {"mkupf",                   G0W1,     CC_mkupf, G2W1,     G3W1,     G4W1},
    {"::quotient",              G0W2,     G1W2,     CC_TTquotient,G3W2, G4W2},
    {"calc_coeffmap_",          G0W3,     G1W3,     G2W3,     CC_calc_coeffmap_,G4W3},
    {"lalr_make_compressed_goto_table",CC_lalr_make_compressed_goto_table,G1W0,G2W0,G3W0,G4W0},
    {"setqinsertlist",          G0W1,     CC_setqinsertlist,G2W1,G3W1,  G4W1},
    {"cl_bvarl",                G0W1,     CC_cl_bvarl,G2W1,   G3W1,     G4W1},
    {"pasf_smwupdknowl",        G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_pasf_smwupdknowl},
    {"omattrir",                CC_omattrir,G1W0,   G2W0,     G3W0,     G4W0},
    {"sptransmat",              G0W1,     CC_sptransmat,G2W1, G3W1,     G4W1},
    {"vdpcleanup",              CC_vdpcleanup,G1W0, G2W0,     G3W0,     G4W0},
    {"contposp",                G0W1,     CC_contposp,G2W1,   G3W1,     G4W1},
    {"toolongassignp",          G0W1,     CC_toolongassignp,G2W1,G3W1,  G4W1},
    {"simppartdf",              G0W1,     CC_simppartdf,G2W1, G3W1,     G4W1},
    {"s_world_names",           G0W1,     CC_s_world_names,G2W1,G3W1,   G4W1},
    {"dp_from_ei",              G0W1,     CC_dp_from_ei,G2W1, G3W1,     G4W1},
    {"createmonomunit",         CC_createmonomunit,G1W0,G2W0, G3W0,     G4W0},
    {"pickbasicset",            G0W1,     CC_pickbasicset,G2W1,G3W1,    G4W1},
    {"mri_ofsf2mriat",          G0W2,     G1W2,     CC_mri_ofsf2mriat,G3W2,G4W2},
    {"intervalom",              G0W1,     CC_intervalom,G2W1, G3W1,     G4W1},
    {"remzzzz",                 G0W2,     G1W2,     CC_remzzzz,G3W2,    G4W2},
    {"sc_rowscalarproduct",     G0W2,     G1W2,     CC_sc_rowscalarproduct,G3W2,G4W2},
    {"simpunion",               G0W1,     CC_simpunion,G2W1,  G3W1,     G4W1},
    {"gbfplus",                 G0W2,     G1W2,     CC_gbfplus,G3W2,    G4W2},
    {"indxsymp",                G0W2,     G1W2,     CC_indxsymp,G3W2,   G4W2},
    {"getphystypeexpt",         G0W1,     CC_getphystypeexpt,G2W1,G3W1, G4W1},
    {"fs:minusp",               G0W1,     CC_fsTminusp,G2W1,  G3W1,     G4W1},
    {"squashsqrt",              G0W1,     CC_squashsqrt,G2W1, G3W1,     G4W1},
    {"ofsf_decdeg2",            G0W3,     G1W3,     G2W3,     CC_ofsf_decdeg2,G4W3},
    {"mk+scal+mult+mat",        G0W2,     G1W2,     CC_mkLscalLmultLmat,G3W2,G4W2},
    {"cl_susiupdknowl2",        G0W3,     G1W3,     G2W3,     CC_cl_susiupdknowl2,G4W3},
    {"gcdld",                   G0W2,     G1W2,     CC_gcdld, G3W2,     G4W2},
    {"matrixelems",             G0W1,     CC_matrixelems,G2W1,G3W1,     G4W1},
    {"f2dip1",                  G0W3,     G1W3,     G2W3,     CC_f2dip1,G4W3},
    {"add_item",                G0W2,     G1W2,     CC_add_item,G3W2,   G4W2},
    {"bflessp",                 G0W2,     G1W2,     CC_bflessp,G3W2,    G4W2},
    {"spp",                     G0W1,     CC_spp,   G2W1,     G3W1,     G4W1},
    {"s_noparents",             G0W1,     CC_s_noparents,G2W1,G3W1,     G4W1},
    {"xremf",                   G0W3,     G1W3,     G2W3,     CC_xremf, G4W3},
    {"vector-to-poly",          G0W3,     G1W3,     G2W3,     CC_vectorKtoKpoly,G4W3},
    {nullptr, 
        reinterpret_cast<no_args *>(
            reinterpret_cast<uintptr_t>("u38")),
        reinterpret_cast<one_arg *>(
            reinterpret_cast<uintptr_t>("46748 6457982 2322238")),
        nullptr, nullptr, nullptr}
};

// end of generated code
