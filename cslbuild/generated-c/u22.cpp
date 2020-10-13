
// $destdir/u22.c        Machine generated C code

// $Id$

#include "config.h"
#include "headers.h"



// Code for ps!:expt!-erule

static LispObject CC_psTexptKerule(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_127, v_128, v_129;
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
    stack[-9] = v_3;
    v_128 = v_2;
// end of prologue
    v_127 = v_128;
    if (!car_legal(v_127)) v_127 = cdrerror(v_127); else
    v_127 = cdr(v_127);
    if (!car_legal(v_127)) v_127 = carerror(v_127); else
    v_127 = car(v_127);
    stack[-10] = v_127;
    v_127 = v_128;
    if (!car_legal(v_127)) v_127 = cdrerror(v_127); else
    v_127 = cdr(v_127);
    if (!car_legal(v_127)) v_127 = cdrerror(v_127); else
    v_127 = cdr(v_127);
    if (!car_legal(v_127)) v_127 = carerror(v_127); else
    v_127 = car(v_127);
    stack[-6] = v_127;
    v_127 = v_128;
    if (!car_legal(v_127)) v_127 = cdrerror(v_127); else
    v_127 = cdr(v_127);
    if (!car_legal(v_127)) v_127 = cdrerror(v_127); else
    v_127 = cdr(v_127);
    if (!car_legal(v_127)) v_127 = cdrerror(v_127); else
    v_127 = cdr(v_127);
    if (!car_legal(v_127)) v_127 = carerror(v_127); else
    v_127 = car(v_127);
    stack[-5] = v_127;
    v_127 = stack[-10];
    {   LispObject fn = basic_elt(env, 3); // ps!:order
    v_127 = (*qfn1(fn))(fn, v_127);
    }
    env = stack[-11];
    stack[-8] = v_127;
    v_127 = qvalue(basic_elt(env, 1)); // ps
    {   LispObject fn = basic_elt(env, 3); // ps!:order
    v_127 = (*qfn1(fn))(fn, v_127);
    }
    env = stack[-11];
    stack[-7] = v_127;
    v_128 = stack[-9];
    v_127 = stack[-7];
    if (equal(v_128, v_127)) goto v_31;
    else goto v_32;
v_31:
    v_128 = stack[-5];
    v_127 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_128 == v_127) goto v_37;
    else goto v_38;
v_37:
    v_127 = stack[-6];
    stack[0] = v_127;
    goto v_36;
v_38:
    v_129 = basic_elt(env, 2); // quotient
    v_128 = stack[-6];
    v_127 = stack[-5];
    v_127 = list3(v_129, v_128, v_127);
    env = stack[-11];
    stack[0] = v_127;
    goto v_36;
v_36:
    v_128 = stack[-10];
    v_127 = stack[-8];
    {   LispObject fn = basic_elt(env, 4); // ps!:evaluate
    v_127 = (*qfn2(fn))(fn, v_128, v_127);
    }
    env = stack[-11];
    {   LispObject fn = basic_elt(env, 5); // prepsqxx
    v_128 = (*qfn1(fn))(fn, v_127);
    }
    env = stack[-11];
    v_127 = stack[0];
    v_127 = list2(v_128, v_127);
    env = stack[-11];
    {
        LispObject fn = basic_elt(env, 6); // simpexpt
        return (*qfn1(fn))(fn, v_127);
    }
v_32:
    v_128 = nil;
    v_127 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_127 = cons(v_128, v_127);
    env = stack[-11];
    stack[0] = v_127;
    v_127 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-4] = v_127;
v_63:
    v_128 = stack[-9];
    v_127 = stack[-7];
    v_128 = difference2(v_128, v_127);
    env = stack[-11];
    v_127 = stack[-4];
    v_127 = difference2(v_128, v_127);
    env = stack[-11];
    v_127 = Lminusp(nil, v_127);
    env = stack[-11];
    if (v_127 == nil) goto v_68;
    goto v_62;
v_68:
    stack[-3] = stack[0];
    v_128 = stack[-4];
    v_127 = stack[-6];
    stack[-1] = times2(v_128, v_127);
    env = stack[-11];
    stack[0] = stack[-5];
    v_128 = stack[-4];
    v_127 = stack[-9];
    v_128 = difference2(v_128, v_127);
    env = stack[-11];
    v_127 = stack[-7];
    v_127 = plus2(v_128, v_127);
    env = stack[-11];
    v_127 = times2(stack[0], v_127);
    env = stack[-11];
    v_127 = plus2(stack[-1], v_127);
    env = stack[-11];
    v_129 = v_127;
    v_128 = v_129;
    v_127 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_128 == v_127) goto v_94;
    else goto v_95;
v_94:
    v_127 = nil;
    v_128 = v_127;
    goto v_93;
v_95:
    v_127 = v_129;
    v_128 = v_127;
    goto v_93;
    v_128 = nil;
v_93:
    v_127 = stack[-5];
    stack[-2] = cons(v_128, v_127);
    env = stack[-11];
    stack[0] = stack[-10];
    v_128 = stack[-4];
    v_127 = stack[-8];
    v_127 = plus2(v_128, v_127);
    env = stack[-11];
    {   LispObject fn = basic_elt(env, 4); // ps!:evaluate
    stack[-1] = (*qfn2(fn))(fn, stack[0], v_127);
    }
    env = stack[-11];
    stack[0] = qvalue(basic_elt(env, 1)); // ps
    v_128 = stack[-9];
    v_127 = stack[-4];
    v_127 = difference2(v_128, v_127);
    env = stack[-11];
    {   LispObject fn = basic_elt(env, 4); // ps!:evaluate
    v_127 = (*qfn2(fn))(fn, stack[0], v_127);
    }
    env = stack[-11];
    {   LispObject fn = basic_elt(env, 7); // multsq
    v_127 = (*qfn2(fn))(fn, stack[-1], v_127);
    }
    env = stack[-11];
    {   LispObject fn = basic_elt(env, 7); // multsq
    v_127 = (*qfn2(fn))(fn, stack[-2], v_127);
    }
    env = stack[-11];
    {   LispObject fn = basic_elt(env, 8); // addsq
    v_127 = (*qfn2(fn))(fn, stack[-3], v_127);
    }
    env = stack[-11];
    stack[0] = v_127;
    v_127 = stack[-4];
    v_127 = add1(v_127);
    env = stack[-11];
    stack[-4] = v_127;
    goto v_63;
v_62:
    v_128 = stack[-9];
    v_127 = stack[-7];
    v_128 = difference2(v_128, v_127);
    env = stack[-11];
    v_127 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-1] = cons(v_128, v_127);
    env = stack[-11];
    v_128 = stack[-10];
    v_127 = stack[-8];
    {   LispObject fn = basic_elt(env, 4); // ps!:evaluate
    v_127 = (*qfn2(fn))(fn, v_128, v_127);
    }
    env = stack[-11];
    {   LispObject fn = basic_elt(env, 7); // multsq
    v_127 = (*qfn2(fn))(fn, stack[-1], v_127);
    }
    env = stack[-11];
    {
        LispObject v_141 = stack[0];
        LispObject fn = basic_elt(env, 9); // quotsq
        return (*qfn2(fn))(fn, v_141, v_127);
    }
    v_127 = nil;
    return onevalue(v_127);
}



// Code for setmat

static LispObject CC_setmat(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_47, v_48, v_49;
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
    v_47 = qvalue(basic_elt(env, 1)); // !*modular
    if (v_47 == nil) goto v_10;
    v_47 = basic_elt(env, 2); // modular
    v_47 = ncons(v_47);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 5); // off
    v_47 = (*qfn1(fn))(fn, v_47);
    }
    env = stack[-4];
    v_47 = basic_elt(env, 3); // mod_was_on
    v_47 = ncons(v_47);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 6); // on
    v_47 = (*qfn1(fn))(fn, v_47);
    }
    env = stack[-4];
    goto v_8;
v_10:
v_8:
    v_47 = stack[-2];
    {   LispObject fn = basic_elt(env, 7); // reval
    v_47 = (*qfn1(fn))(fn, v_47);
    }
    env = stack[-4];
    stack[-2] = v_47;
    v_47 = stack[-1];
    {   LispObject fn = basic_elt(env, 7); // reval
    v_47 = (*qfn1(fn))(fn, v_47);
    }
    env = stack[-4];
    stack[-1] = v_47;
    v_47 = stack[0];
    {   LispObject fn = basic_elt(env, 7); // reval
    v_47 = (*qfn1(fn))(fn, v_47);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 8); // simp
    v_47 = (*qfn1(fn))(fn, v_47);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 9); // mk!*sq
    v_47 = (*qfn1(fn))(fn, v_47);
    }
    env = stack[-4];
    stack[0] = v_47;
    v_49 = stack[-3];
    v_48 = stack[-2];
    v_47 = stack[-1];
    v_49 = list3(v_49, v_48, v_47);
    env = stack[-4];
    v_48 = stack[0];
    v_47 = stack[-3];
    {   LispObject fn = basic_elt(env, 10); // letmtr
    v_47 = (*qfn3(fn))(fn, v_49, v_48, v_47);
    }
    env = stack[-4];
    v_47 = qvalue(basic_elt(env, 4)); // !*mod_was_on
    if (v_47 == nil) goto v_37;
    v_47 = basic_elt(env, 2); // modular
    v_47 = ncons(v_47);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 6); // on
    v_47 = (*qfn1(fn))(fn, v_47);
    }
    env = stack[-4];
    v_47 = basic_elt(env, 3); // mod_was_on
    v_47 = ncons(v_47);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 5); // off
    v_47 = (*qfn1(fn))(fn, v_47);
    }
    goto v_35;
v_37:
v_35:
    v_47 = stack[-3];
    return onevalue(v_47);
}



// Code for coordp

static LispObject CC_coordp(LispObject env,
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
    v_8 = qvalue(basic_elt(env, 1)); // coord!*
    v_7 = Lmemq(nil, v_7, v_8);
    return onevalue(v_7);
}



// Code for indord2

static LispObject CC_indord2(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // indordp
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



// Code for begin11

static LispObject CC_begin11(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_414, v_415;
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
// Binding errmsg!*
// FLUIDBIND: reloadenv=6 litvec-offset=1 saveloc=5
{   bind_fluid_stack bind_fluid_var(-6, 1, -5);
    setvalue(basic_elt(env, 1), nil); // errmsg!*
    stack[-3] = nil;
// Binding newrule!*
// FLUIDBIND: reloadenv=6 litvec-offset=2 saveloc=2
{   bind_fluid_stack bind_fluid_var(-6, 2, -2);
    setvalue(basic_elt(env, 2), nil); // newrule!*
    v_415 = qvalue(basic_elt(env, 3)); // cursym!*
    v_414 = basic_elt(env, 4); // end
    if (v_415 == v_414) goto v_14;
    else goto v_15;
v_14:
    {   LispObject fn = basic_elt(env, 47); // terminalp
    v_414 = (*qfn0(fn))(fn);
    }
    env = stack[-6];
    if (v_414 == nil) goto v_21;
    v_414 = qvalue(basic_elt(env, 5)); // !*lisp_hook
    if (v_414 == nil) goto v_24;
    else goto v_21;
v_24:
    v_414 = basic_elt(env, 6); // !*semicol!*
    setvalue(basic_elt(env, 3), v_414); // cursym!*
    v_414 = nil;
    setvalue(basic_elt(env, 7), v_414); // curescaped!*
    v_414 = lisp_true;
    setvalue(basic_elt(env, 8), v_414); // !*nosave!*
    v_414 = nil;
    goto v_11;
v_21:
    v_414 = basic_elt(env, 4); // end
    {   LispObject fn = basic_elt(env, 48); // comm1
    v_414 = (*qfn1(fn))(fn, v_414);
    }
    env = stack[-6];
    v_414 = basic_elt(env, 4); // end
    goto v_11;
    goto v_13;
v_15:
    v_414 = qvalue(basic_elt(env, 9)); // !*reduce4
    if (v_414 == nil) goto v_41;
    v_414 = stack[-4];
    v_415 = v_414;
    goto v_39;
v_41:
    v_414 = stack[-4];
    if (!car_legal(v_414)) v_414 = cdrerror(v_414); else
    v_414 = cdr(v_414);
    if (!car_legal(v_414)) v_414 = carerror(v_414); else
    v_414 = car(v_414);
    v_415 = v_414;
    goto v_39;
    v_415 = nil;
v_39:
    v_414 = basic_elt(env, 10); // retry
    if (!consp(v_415)) goto v_36;
    v_415 = car(v_415);
    if (v_415 == v_414) goto v_35;
    else goto v_36;
v_35:
    v_414 = qvalue(basic_elt(env, 11)); // programl!*
    if (v_414 == nil) goto v_53;
    v_414 = qvalue(basic_elt(env, 11)); // programl!*
    stack[-4] = v_414;
    goto v_51;
v_53:
    v_414 = basic_elt(env, 12); // "No previous expression"
    {   LispObject fn = basic_elt(env, 49); // lprim
    v_414 = (*qfn1(fn))(fn, v_414);
    }
    v_414 = nil;
    goto v_11;
v_51:
    goto v_13;
v_36:
v_13:
    v_414 = qvalue(basic_elt(env, 9)); // !*reduce4
    if (v_414 == nil) goto v_63;
    else goto v_64;
v_63:
    v_414 = stack[-4];
    if (!car_legal(v_414)) v_414 = carerror(v_414); else
    v_414 = car(v_414);
    stack[-3] = v_414;
    v_414 = stack[-4];
    if (!car_legal(v_414)) v_414 = cdrerror(v_414); else
    v_414 = cdr(v_414);
    if (!car_legal(v_414)) v_414 = carerror(v_414); else
    v_414 = car(v_414);
    stack[-4] = v_414;
    goto v_62;
v_64:
v_62:
    v_414 = stack[-4];
    setvalue(basic_elt(env, 13), v_414); // program!*
    {   LispObject fn = basic_elt(env, 50); // eofcheck
    v_414 = (*qfn0(fn))(fn);
    }
    env = stack[-6];
    if (v_414 == nil) goto v_75;
    v_414 = basic_elt(env, 14); // c
    goto v_11;
v_75:
    v_414 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    setvalue(basic_elt(env, 15), v_414); // eof!*
    goto v_73;
v_73:
    v_415 = stack[-4];
    v_414 = qvalue(basic_elt(env, 9)); // !*reduce4
    if (v_414 == nil) goto v_86;
    v_414 = nil;
    goto v_84;
v_86:
    v_414 = stack[-3];
    goto v_84;
    v_414 = nil;
v_84:
    {   LispObject fn = basic_elt(env, 51); // add2inputbuf
    v_414 = (*qfn2(fn))(fn, v_415, v_414);
    }
    env = stack[-6];
    v_414 = stack[-4];
    if (!consp(v_414)) goto v_99;
    v_414 = stack[-4];
    if (!car_legal(v_414)) v_415 = carerror(v_414); else
    v_415 = car(v_414);
    v_414 = basic_elt(env, 16); // (bye quit)
    v_414 = Lmemq(nil, v_415, v_414);
    goto v_97;
v_99:
    v_414 = nil;
    goto v_97;
    v_414 = nil;
v_97:
    if (v_414 == nil) goto v_95;
    v_414 = basic_elt(env, 17); // bye
    {   LispObject fn = basic_elt(env, 52); // getd
    v_414 = (*qfn1(fn))(fn, v_414);
    }
    env = stack[-6];
    if (v_414 == nil) goto v_111;
    v_414 = stack[-4];
    {   LispObject fn = basic_elt(env, 53); // lispeval
    v_414 = (*qfn1(fn))(fn, v_414);
    }
    env = stack[-6];
    v_414 = lisp_true;
    setvalue(basic_elt(env, 8), v_414); // !*nosave!*
    v_414 = nil;
    goto v_11;
v_111:
    v_414 = lisp_true;
    setvalue(basic_elt(env, 18), v_414); // !*byeflag!*
    v_414 = nil;
    goto v_11;
    goto v_93;
v_95:
    v_414 = qvalue(basic_elt(env, 9)); // !*reduce4
    if (v_414 == nil) goto v_126;
    else goto v_127;
v_126:
    v_415 = stack[-4];
    v_414 = basic_elt(env, 19); // ed
    v_414 = Leqcar(nil, v_415, v_414);
    env = stack[-6];
    goto v_125;
v_127:
    v_414 = nil;
    goto v_125;
    v_414 = nil;
v_125:
    if (v_414 == nil) goto v_123;
    v_414 = basic_elt(env, 20); // cedit
    {   LispObject fn = basic_elt(env, 52); // getd
    v_414 = (*qfn1(fn))(fn, v_414);
    }
    env = stack[-6];
    if (v_414 == nil) goto v_138;
    {   LispObject fn = basic_elt(env, 47); // terminalp
    v_414 = (*qfn0(fn))(fn);
    }
    env = stack[-6];
    if (v_414 == nil) goto v_138;
    v_414 = stack[-4];
    if (!car_legal(v_414)) v_414 = cdrerror(v_414); else
    v_414 = cdr(v_414);
    {   LispObject fn = basic_elt(env, 20); // cedit
    v_414 = (*qfn1(fn))(fn, v_414);
    }
    env = stack[-6];
    goto v_136;
v_138:
    v_414 = basic_elt(env, 21); // "ED not supported"
    {   LispObject fn = basic_elt(env, 49); // lprim
    v_414 = (*qfn1(fn))(fn, v_414);
    }
    env = stack[-6];
    goto v_136;
v_136:
    v_414 = lisp_true;
    setvalue(basic_elt(env, 8), v_414); // !*nosave!*
    v_414 = nil;
    goto v_11;
v_123:
    v_414 = qvalue(basic_elt(env, 22)); // !*defn
    if (v_414 == nil) goto v_154;
    v_414 = qvalue(basic_elt(env, 23)); // erfg!*
    if (v_414 == nil) goto v_159;
    v_414 = nil;
    goto v_11;
v_159:
    v_415 = qvalue(basic_elt(env, 24)); // key!*
    v_414 = basic_elt(env, 25); // ignore
    v_414 = Lflagp(nil, v_415, v_414);
    env = stack[-6];
    if (v_414 == nil) goto v_166;
    else goto v_167;
v_166:
    v_415 = stack[-4];
    v_414 = basic_elt(env, 26); // quote
    v_414 = Leqcar(nil, v_415, v_414);
    env = stack[-6];
    v_414 = (v_414 == nil ? lisp_true : nil);
    goto v_165;
v_167:
    v_414 = nil;
    goto v_165;
    v_414 = nil;
v_165:
    if (v_414 == nil) goto v_163;
    v_414 = stack[-4];
    if (v_414 == nil) goto v_181;
    v_414 = stack[-4];
    {   LispObject fn = basic_elt(env, 54); // dfprint
    v_414 = (*qfn1(fn))(fn, v_414);
    }
    env = stack[-6];
    goto v_179;
v_181:
    goto v_179;
v_179:
    v_415 = qvalue(basic_elt(env, 24)); // key!*
    v_414 = basic_elt(env, 27); // eval
    v_414 = Lflagp(nil, v_415, v_414);
    env = stack[-6];
    if (v_414 == nil) goto v_190;
    else goto v_191;
v_190:
    v_414 = nil;
    goto v_11;
v_191:
    goto v_157;
v_163:
v_157:
    goto v_93;
v_154:
v_93:
    v_414 = qvalue(basic_elt(env, 28)); // !*output
    if (v_414 == nil) goto v_199;
    v_414 = qvalue(basic_elt(env, 29)); // ifl!*
    if (v_414 == nil) goto v_199;
    v_414 = qvalue(basic_elt(env, 30)); // !*echo
    if (v_414 == nil) goto v_199;
    v_414 = qvalue(basic_elt(env, 31)); // !*lessspace
    if (v_414 == nil) goto v_208;
    else goto v_199;
v_208:
    v_414 = Lterpri(nil);
    env = stack[-6];
    goto v_197;
v_199:
v_197:
    v_414 = qvalue(basic_elt(env, 32)); // ulimit!*
    v_414 = integerp(v_414);
    if (v_414 == nil) goto v_214;
    v_415 = qvalue(basic_elt(env, 32)); // ulimit!*
    v_414 = stack[-4];
    {   LispObject fn = basic_elt(env, 55); // errorset_with_timeout
    v_414 = (*qfn2(fn))(fn, v_415, v_414);
    }
    env = stack[-6];
    stack[0] = v_414;
    v_414 = stack[0];
    if (!consp(v_414)) goto v_223;
    v_414 = stack[0];
    if (!car_legal(v_414)) v_414 = carerror(v_414); else
    v_414 = car(v_414);
    stack[0] = v_414;
    goto v_221;
v_223:
v_221:
    goto v_212;
v_214:
    v_415 = stack[-4];
    v_414 = lisp_true;
    {   LispObject fn = basic_elt(env, 56); // errorset!*
    v_414 = (*qfn2(fn))(fn, v_415, v_414);
    }
    env = stack[-6];
    stack[0] = v_414;
    goto v_212;
v_212:
    v_414 = stack[0];
    {   LispObject fn = basic_elt(env, 57); // errorp
    v_414 = (*qfn1(fn))(fn, v_414);
    }
    env = stack[-6];
    if (v_414 == nil) goto v_236;
    else goto v_234;
v_236:
    v_414 = qvalue(basic_elt(env, 23)); // erfg!*
    if (v_414 == nil) goto v_239;
    else goto v_234;
v_239:
    goto v_235;
v_234:
    v_415 = stack[-3];
    v_414 = stack[-4];
    v_414 = list2(v_415, v_414);
    env = stack[-6];
    setvalue(basic_elt(env, 11), v_414); // programl!*
    v_414 = basic_elt(env, 33); // err2
    goto v_11;
v_235:
    v_414 = qvalue(basic_elt(env, 22)); // !*defn
    if (v_414 == nil) goto v_246;
    v_414 = nil;
    goto v_11;
v_246:
    v_414 = qvalue(basic_elt(env, 9)); // !*reduce4
    if (v_414 == nil) goto v_251;
    else goto v_252;
v_251:
    v_415 = stack[-3];
    v_414 = basic_elt(env, 34); // symbolic
    if (v_415 == v_414) goto v_257;
    v_414 = stack[-4];
    {   LispObject fn = basic_elt(env, 58); // getsetvars
    v_414 = (*qfn1(fn))(fn, v_414);
    }
    env = stack[-6];
    stack[-4] = v_414;
    goto v_255;
v_257:
    goto v_255;
v_255:
    goto v_250;
v_252:
    v_414 = stack[0];
    if (!car_legal(v_414)) v_414 = carerror(v_414); else
    v_414 = car(v_414);
    stack[0] = v_414;
    v_414 = stack[0];
    if (v_414 == nil) goto v_271;
    else goto v_272;
v_271:
    v_415 = nil;
    v_414 = basic_elt(env, 35); // noval
    {   LispObject fn = basic_elt(env, 59); // mkobject
    v_414 = (*qfn2(fn))(fn, v_415, v_414);
    }
    env = stack[-6];
    stack[0] = v_414;
    goto v_270;
v_272:
v_270:
    v_414 = stack[0];
    {   LispObject fn = basic_elt(env, 60); // type
    v_414 = (*qfn1(fn))(fn, v_414);
    }
    env = stack[-6];
    stack[-3] = v_414;
    v_414 = stack[0];
    {   LispObject fn = basic_elt(env, 61); // value
    v_414 = (*qfn1(fn))(fn, v_414);
    }
    env = stack[-6];
    stack[0] = v_414;
    goto v_250;
v_250:
    v_414 = qvalue(basic_elt(env, 9)); // !*reduce4
    if (v_414 == nil) goto v_284;
    else goto v_285;
v_284:
    v_414 = stack[0];
    if (!car_legal(v_414)) v_414 = carerror(v_414); else
    v_414 = car(v_414);
    v_415 = v_414;
    goto v_283;
v_285:
    v_414 = stack[0];
    v_415 = v_414;
    goto v_283;
    v_415 = nil;
v_283:
    v_414 = stack[-3];
    {   LispObject fn = basic_elt(env, 62); // add2resultbuf
    v_414 = (*qfn2(fn))(fn, v_415, v_414);
    }
    env = stack[-6];
    v_414 = qvalue(basic_elt(env, 28)); // !*output
    if (v_414 == nil) goto v_295;
    else goto v_296;
v_295:
    v_414 = nil;
    goto v_11;
v_296:
    v_415 = qvalue(basic_elt(env, 36)); // semic!*
    v_414 = basic_elt(env, 37); // !$
    if (v_415 == v_414) goto v_300;
    v_414 = qvalue(basic_elt(env, 9)); // !*reduce4
    if (v_414 == nil) goto v_306;
    v_414 = Lterpri(nil);
    env = stack[-6];
    v_415 = stack[-3];
    v_414 = basic_elt(env, 35); // noval
    if (v_415 == v_414) goto v_313;
    else goto v_314;
v_313:
    goto v_309;
v_314:
    v_414 = qvalue(basic_elt(env, 38)); // !*debug
    if (v_414 == nil) goto v_319;
    v_414 = basic_elt(env, 39); // "Value:"
    {   LispObject fn = basic_elt(env, 63); // prin2t
    v_414 = (*qfn1(fn))(fn, v_414);
    }
    env = stack[-6];
    goto v_312;
v_319:
v_312:
    stack[-1] = basic_elt(env, 40); // print
    v_415 = stack[-3];
    v_414 = stack[0];
    v_414 = list2(v_415, v_414);
    env = stack[-6];
    v_414 = ncons(v_414);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 64); // rapply1
    v_414 = (*qfn2(fn))(fn, stack[-1], v_414);
    }
    env = stack[-6];
v_309:
    goto v_304;
v_306:
    v_415 = stack[-3];
    v_414 = basic_elt(env, 34); // symbolic
    if (v_415 == v_414) goto v_329;
    else goto v_330;
v_329:
    v_414 = stack[0];
    if (!car_legal(v_414)) v_414 = carerror(v_414); else
    v_414 = car(v_414);
    if (v_414 == nil) goto v_339;
    else goto v_340;
v_339:
    v_415 = qvalue(basic_elt(env, 41)); // !*mode
    v_414 = basic_elt(env, 34); // symbolic
    v_414 = (v_415 == v_414 ? lisp_true : nil);
    v_414 = (v_414 == nil ? lisp_true : nil);
    goto v_338;
v_340:
    v_414 = nil;
    goto v_338;
    v_414 = nil;
v_338:
    if (v_414 == nil) goto v_336;
    goto v_334;
v_336:
    v_414 = Lterpri(nil);
    env = stack[-6];
    stack[-1] = basic_elt(env, 40); // print
    v_414 = stack[0];
    if (!car_legal(v_414)) v_414 = carerror(v_414); else
    v_414 = car(v_414);
    v_414 = Lmkquote(nil, v_414);
    env = stack[-6];
    v_415 = list2(stack[-1], v_414);
    env = stack[-6];
    v_414 = lisp_true;
    {   LispObject fn = basic_elt(env, 56); // errorset!*
    v_414 = (*qfn2(fn))(fn, v_415, v_414);
    }
    env = stack[-6];
    stack[0] = v_414;
    goto v_334;
v_334:
    goto v_304;
v_330:
    v_414 = stack[0];
    if (!car_legal(v_414)) v_414 = carerror(v_414); else
    v_414 = car(v_414);
    if (v_414 == nil) goto v_364;
    stack[-1] = basic_elt(env, 42); // assgnpri
    v_414 = stack[0];
    if (!car_legal(v_414)) v_414 = carerror(v_414); else
    v_414 = car(v_414);
    stack[0] = Lmkquote(nil, v_414);
    env = stack[-6];
    v_414 = stack[-4];
    if (v_414 == nil) goto v_376;
    v_415 = basic_elt(env, 43); // list
    v_414 = stack[-4];
    v_414 = cons(v_415, v_414);
    env = stack[-6];
    stack[-4] = v_414;
    goto v_374;
v_376:
    v_414 = nil;
    stack[-4] = v_414;
    goto v_374;
    stack[-4] = nil;
v_374:
    v_414 = basic_elt(env, 44); // only
    v_414 = Lmkquote(nil, v_414);
    env = stack[-6];
    v_415 = list4(stack[-1], stack[0], stack[-4], v_414);
    env = stack[-6];
    v_414 = lisp_true;
    {   LispObject fn = basic_elt(env, 56); // errorset!*
    v_414 = (*qfn2(fn))(fn, v_415, v_414);
    }
    env = stack[-6];
    stack[0] = v_414;
    goto v_304;
v_364:
v_304:
    goto v_294;
v_300:
v_294:
    v_414 = qvalue(basic_elt(env, 9)); // !*reduce4
    if (v_414 == nil) goto v_389;
    else goto v_390;
v_389:
    v_414 = stack[0];
    {   LispObject fn = basic_elt(env, 57); // errorp
    v_414 = (*qfn1(fn))(fn, v_414);
    }
    env = stack[-6];
    if (v_414 == nil) goto v_395;
    v_414 = basic_elt(env, 45); // err3
    goto v_393;
v_395:
    v_414 = nil;
    goto v_393;
    v_414 = nil;
v_393:
    goto v_11;
v_390:
    v_415 = qvalue(basic_elt(env, 41)); // !*mode
    v_414 = basic_elt(env, 35); // noval
    if (v_415 == v_414) goto v_403;
    v_414 = Lterpri(nil);
    env = stack[-6];
    v_414 = basic_elt(env, 46); // "of type: "
    v_414 = Lprinc(nil, v_414);
    env = stack[-6];
    v_414 = stack[-3];
    v_414 = Lprint(nil, v_414);
    goto v_388;
v_403:
v_388:
    v_414 = nil;
v_11:
    ;}  // end of a binding scope
    ;}  // end of a binding scope
    return onevalue(v_414);
}



// Code for mv!-pow!-mv!-!+

static LispObject CC_mvKpowKmvKL(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    stack[-2] = nil;
v_8:
    v_26 = stack[0];
    if (v_26 == nil) goto v_11;
    else goto v_12;
v_11:
    v_26 = stack[-2];
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn1(fn))(fn, v_26);
    }
v_12:
    v_27 = stack[-1];
    v_26 = stack[0];
    if (!car_legal(v_26)) v_26 = carerror(v_26); else
    v_26 = car(v_26);
    {   LispObject fn = basic_elt(env, 2); // mv!-pow!-mv!-term!-!+
    v_27 = (*qfn2(fn))(fn, v_27, v_26);
    }
    env = stack[-3];
    v_26 = stack[-2];
    v_26 = cons(v_27, v_26);
    env = stack[-3];
    stack[-2] = v_26;
    v_26 = stack[0];
    if (!car_legal(v_26)) v_26 = cdrerror(v_26); else
    v_26 = cdr(v_26);
    stack[0] = v_26;
    goto v_8;
    v_26 = nil;
    return onevalue(v_26);
}



// Code for moid_member

static LispObject CC_moid_member(LispObject env,
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
    v_24 = stack[0];
    if (v_24 == nil) goto v_7;
    else goto v_8;
v_7:
    v_24 = nil;
    goto v_6;
v_8:
    v_24 = stack[0];
    if (!car_legal(v_24)) v_25 = carerror(v_24); else
    v_25 = car(v_24);
    v_24 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // mo_vdivides!?
    v_24 = (*qfn2(fn))(fn, v_25, v_24);
    }
    env = stack[-2];
    if (v_24 == nil) goto v_15;
    else goto v_14;
v_15:
    v_25 = stack[-1];
    v_24 = stack[0];
    if (!car_legal(v_24)) v_24 = cdrerror(v_24); else
    v_24 = cdr(v_24);
    stack[-1] = v_25;
    stack[0] = v_24;
    goto v_1;
v_14:
    goto v_6;
    v_24 = nil;
v_6:
    return onevalue(v_24);
}



// Code for arglist_member

static LispObject CC_arglist_member(LispObject env,
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
    v_24 = stack[0];
    if (!consp(v_24)) goto v_8;
    v_25 = stack[-1];
    v_24 = stack[0];
    if (!car_legal(v_24)) v_24 = carerror(v_24); else
    v_24 = car(v_24);
    {   LispObject fn = basic_elt(env, 1); // mvar_member
    v_24 = (*qfn2(fn))(fn, v_25, v_24);
    }
    env = stack[-2];
    if (v_24 == nil) goto v_12;
    else goto v_11;
v_12:
    v_25 = stack[-1];
    v_24 = stack[0];
    if (!car_legal(v_24)) v_24 = cdrerror(v_24); else
    v_24 = cdr(v_24);
    stack[-1] = v_25;
    stack[0] = v_24;
    goto v_1;
v_11:
    goto v_6;
v_8:
    v_24 = nil;
    goto v_6;
    v_24 = nil;
v_6:
    return onevalue(v_24);
}



// Code for exc

static LispObject CC_exc(LispObject env,
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
    if (v_17 == nil) goto v_7;
    else goto v_8;
v_7:
    goto v_6;
v_8:
    v_16 = (v_16 == nil ? lisp_true : nil);
    goto v_6;
    v_16 = nil;
v_6:
    return onevalue(v_16);
}



// Code for sfto_kexp

static LispObject CC_sfto_kexp(LispObject env,
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
    goto v_8;
    goto v_6;
v_8:
v_6:
    v_27 = stack[0];
    v_26 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_26 = Leqn_2(nil, v_27, v_26);
    env = stack[-2];
    if (v_26 == nil) goto v_13;
    v_26 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_11;
v_13:
    v_27 = stack[-1];
    v_26 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // to
    v_27 = (*qfn2(fn))(fn, v_27, v_26);
    }
    env = stack[-2];
    v_26 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_26 = cons(v_27, v_26);
    return ncons(v_26);
    v_26 = nil;
v_11:
    return onevalue(v_26);
}



// Code for gcref_mkgraph

static LispObject CC_gcref_mkgraph(LispObject env,
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
    v_15 = qvalue(basic_elt(env, 1)); // !*gcrefudg
    if (v_15 == nil) goto v_7;
    v_15 = v_16;
    {
        LispObject fn = basic_elt(env, 2); // gcref_mkgraph!-udg
        return (*qfn1(fn))(fn, v_15);
    }
v_7:
    v_15 = v_16;
    {
        LispObject fn = basic_elt(env, 3); // gcref_mkgraph!-tgf
        return (*qfn1(fn))(fn, v_15);
    }
    v_15 = nil;
    return onevalue(v_15);
}



// Code for setqget

static LispObject CC_setqget(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_20, v_21, v_22, v_23;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// end of prologue
    v_20 = qvalue(basic_elt(env, 1)); // fluidbibasissetq
    if (!car_legal(v_20)) v_20 = carerror(v_20); else
    v_20 = car(v_20);
    v_22 = v_20;
    v_20 = qvalue(basic_elt(env, 1)); // fluidbibasissetq
    v_23 = v_20;
    v_21 = v_23;
    v_20 = v_23;
    if (!car_legal(v_20)) v_20 = cdrerror(v_20); else
    v_20 = cdr(v_20);
    if (!car_legal(v_20)) v_20 = carerror(v_20); else
    v_20 = car(v_20);
    if (!car_legal(v_21)) rplaca_fails(v_21);
    setcar(v_21, v_20);
    v_20 = v_21;
    v_21 = v_23;
    if (!car_legal(v_21)) v_21 = cdrerror(v_21); else
    v_21 = cdr(v_21);
    if (!car_legal(v_21)) v_21 = cdrerror(v_21); else
    v_21 = cdr(v_21);
    if (!car_legal(v_20)) rplacd_fails(v_20);
    setcdr(v_20, v_21);
    v_20 = v_22;
    return onevalue(v_20);
}



// Code for ezgcdf1

static LispObject CC_ezgcdf1(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_14, v_15, v_16;
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
    v_15 = v_3;
    v_16 = v_2;
// end of prologue
    v_14 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
// Binding factor!-level
// FLUIDBIND: reloadenv=1 litvec-offset=1 saveloc=0
{   bind_fluid_stack bind_fluid_var(-1, 1, 0);
    setvalue(basic_elt(env, 1), v_14); // factor!-level
    v_14 = v_16;
    v_14 = list2(v_14, v_15);
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // gcdlist
    v_14 = (*qfn1(fn))(fn, v_14);
    }
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // poly!-abs
    v_14 = (*qfn1(fn))(fn, v_14);
    }
    ;}  // end of a binding scope
    return onevalue(v_14);
}



// Code for talp_eqnrhskernels

static LispObject CC_talp_eqnrhskernels(LispObject env,
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
    {
        LispObject fn = basic_elt(env, 1); // talp_varlt
        return (*qfn1(fn))(fn, v_7);
    }
}



// Code for ctx_new

static LispObject CC_ctx_new(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_6, v_7;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// end of prologue
    v_7 = basic_elt(env, 1); // ctx
    v_6 = nil;
    return list2(v_7, v_6);
}



// Code for evaluate!-mod!-p

static LispObject CC_evaluateKmodKp(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_84, v_85, v_86;
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
v_8:
    v_84 = stack[-3];
    if (!consp(v_84)) goto v_15;
    else goto v_16;
v_15:
    v_84 = lisp_true;
    goto v_14;
v_16:
    v_84 = stack[-3];
    if (!car_legal(v_84)) v_84 = carerror(v_84); else
    v_84 = car(v_84);
    v_84 = (consp(v_84) ? nil : lisp_true);
    goto v_14;
    v_84 = nil;
v_14:
    if (v_84 == nil) goto v_12;
    v_84 = stack[-3];
    goto v_7;
v_12:
    v_85 = stack[-1];
    v_84 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_85 == v_84) goto v_25;
    else goto v_26;
v_25:
    v_84 = nil;
    stack[-1] = v_84;
    goto v_8;
v_26:
    v_84 = stack[-2];
    if (v_84 == nil) goto v_30;
    else goto v_31;
v_30:
    v_84 = basic_elt(env, 1); // "Variable=NIL in evaluate-mod-p"
    {
        LispObject fn = basic_elt(env, 2); // errorf
        return (*qfn1(fn))(fn, v_84);
    }
v_31:
    v_84 = stack[-3];
    if (!car_legal(v_84)) v_84 = carerror(v_84); else
    v_84 = car(v_84);
    if (!car_legal(v_84)) v_84 = carerror(v_84); else
    v_84 = car(v_84);
    if (!car_legal(v_84)) v_85 = carerror(v_84); else
    v_85 = car(v_84);
    v_84 = stack[-2];
    if (equal(v_85, v_84)) goto v_35;
    else goto v_36;
v_35:
    v_84 = stack[-3];
    if (!car_legal(v_84)) v_84 = carerror(v_84); else
    v_84 = car(v_84);
    if (!car_legal(v_84)) stack[-4] = cdrerror(v_84); else
    stack[-4] = cdr(v_84);
    v_84 = stack[-3];
    if (!car_legal(v_84)) v_84 = carerror(v_84); else
    v_84 = car(v_84);
    if (!car_legal(v_84)) v_84 = carerror(v_84); else
    v_84 = car(v_84);
    if (!car_legal(v_84)) stack[0] = cdrerror(v_84); else
    stack[0] = cdr(v_84);
    v_84 = stack[-3];
    if (!car_legal(v_84)) stack[-3] = cdrerror(v_84); else
    stack[-3] = cdr(v_84);
    v_85 = stack[-1];
    v_84 = stack[-2];
    v_84 = list2(v_85, v_84);
    env = stack[-5];
    {
        LispObject v_92 = stack[-4];
        LispObject v_93 = stack[0];
        LispObject v_94 = stack[-3];
        LispObject fn = basic_elt(env, 3); // horner!-rule!-mod!-p
        return (*qfn4up(fn))(fn, v_92, v_93, v_94, v_84);
    }
v_36:
    v_84 = stack[-3];
    if (!car_legal(v_84)) v_84 = carerror(v_84); else
    v_84 = car(v_84);
    if (!car_legal(v_84)) v_86 = cdrerror(v_84); else
    v_86 = cdr(v_84);
    v_85 = stack[-2];
    v_84 = stack[-1];
    {   LispObject fn = basic_elt(env, 0); // evaluate!-mod!-p
    stack[0] = (*qfn3(fn))(fn, v_86, v_85, v_84);
    }
    env = stack[-5];
    v_84 = stack[-3];
    if (!car_legal(v_84)) v_86 = cdrerror(v_84); else
    v_86 = cdr(v_84);
    v_85 = stack[-2];
    v_84 = stack[-1];
    {   LispObject fn = basic_elt(env, 0); // evaluate!-mod!-p
    v_84 = (*qfn3(fn))(fn, v_86, v_85, v_84);
    }
    v_85 = stack[0];
    v_86 = v_85;
    if (v_86 == nil) goto v_72;
    else goto v_73;
v_72:
    goto v_71;
v_73:
    v_86 = stack[-3];
    if (!car_legal(v_86)) v_86 = carerror(v_86); else
    v_86 = car(v_86);
    if (!car_legal(v_86)) v_86 = carerror(v_86); else
    v_86 = car(v_86);
    return acons(v_86, v_85, v_84);
    v_84 = nil;
v_71:
    goto v_7;
    v_84 = nil;
v_7:
    return onevalue(v_84);
}



// Code for getsetvars

static LispObject CC_getsetvars(LispObject env,
                         LispObject v_2)
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
    v_50 = stack[0];
    if (!consp(v_50)) goto v_10;
    else goto v_11;
v_10:
    v_50 = stack[-1];
    {
        LispObject fn = basic_elt(env, 3); // nreverse
        return (*qfn1(fn))(fn, v_50);
    }
v_11:
    v_50 = stack[0];
    if (!car_legal(v_50)) v_51 = carerror(v_50); else
    v_51 = car(v_50);
    v_50 = basic_elt(env, 1); // (setel setk)
    v_50 = Lmemq(nil, v_51, v_50);
    if (v_50 == nil) goto v_16;
    v_50 = stack[0];
    if (!car_legal(v_50)) v_50 = cdrerror(v_50); else
    v_50 = cdr(v_50);
    if (!car_legal(v_50)) v_50 = carerror(v_50); else
    v_50 = car(v_50);
    {   LispObject fn = basic_elt(env, 4); // getsetvarlis
    v_51 = (*qfn1(fn))(fn, v_50);
    }
    env = stack[-2];
    v_50 = stack[-1];
    v_50 = cons(v_51, v_50);
    env = stack[-2];
    stack[-1] = v_50;
    v_50 = stack[0];
    if (!car_legal(v_50)) v_50 = cdrerror(v_50); else
    v_50 = cdr(v_50);
    if (!car_legal(v_50)) v_50 = cdrerror(v_50); else
    v_50 = cdr(v_50);
    if (!car_legal(v_50)) v_50 = carerror(v_50); else
    v_50 = car(v_50);
    stack[0] = v_50;
    goto v_7;
v_16:
    v_50 = stack[0];
    if (!car_legal(v_50)) v_51 = carerror(v_50); else
    v_51 = car(v_50);
    v_50 = basic_elt(env, 2); // setq
    if (v_51 == v_50) goto v_31;
    else goto v_32;
v_31:
    v_50 = stack[0];
    if (!car_legal(v_50)) v_50 = cdrerror(v_50); else
    v_50 = cdr(v_50);
    if (!car_legal(v_50)) v_50 = carerror(v_50); else
    v_50 = car(v_50);
    v_51 = Lmkquote(nil, v_50);
    env = stack[-2];
    v_50 = stack[-1];
    v_50 = cons(v_51, v_50);
    env = stack[-2];
    stack[-1] = v_50;
    v_50 = stack[0];
    if (!car_legal(v_50)) v_50 = cdrerror(v_50); else
    v_50 = cdr(v_50);
    if (!car_legal(v_50)) v_50 = cdrerror(v_50); else
    v_50 = cdr(v_50);
    if (!car_legal(v_50)) v_50 = carerror(v_50); else
    v_50 = car(v_50);
    stack[0] = v_50;
    goto v_7;
v_32:
    v_50 = stack[-1];
    {
        LispObject fn = basic_elt(env, 3); // nreverse
        return (*qfn1(fn))(fn, v_50);
    }
    v_50 = nil;
    return onevalue(v_50);
}



// Code for ps!:minusp!:

static LispObject CC_psTminuspT(LispObject env,
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
    v_5 = nil;
    return onevalue(v_5);
}



// Code for xdegreecheck

static LispObject CC_xdegreecheck(LispObject env,
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
    v_16 = qvalue(basic_elt(env, 1)); // xtruncate!*
    if (v_16 == nil) goto v_6;
    else goto v_7;
v_6:
    v_16 = nil;
    goto v_5;
v_7:
    v_16 = v_17;
    {   LispObject fn = basic_elt(env, 2); // xdegree
    v_16 = (*qfn1(fn))(fn, v_16);
    }
    env = stack[0];
    v_17 = qvalue(basic_elt(env, 1)); // xtruncate!*
        return Lgreaterp_2(nil, v_16, v_17);
    v_16 = nil;
v_5:
    return onevalue(v_16);
}



// Code for indordp

static LispObject CC_indordp(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_42, v_43, v_44, v_45, v_46;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_44 = v_3;
    v_45 = v_2;
// end of prologue
    v_42 = qvalue(basic_elt(env, 1)); // indxl!*
    v_46 = v_42;
    v_43 = v_45;
    v_42 = v_46;
    v_42 = Lmemq(nil, v_43, v_42);
    if (v_42 == nil) goto v_12;
    else goto v_13;
v_12:
    v_42 = lisp_true;
    goto v_7;
v_13:
v_8:
    v_42 = v_46;
    if (v_42 == nil) goto v_20;
    else goto v_21;
v_20:
    v_42 = v_45;
    v_43 = v_44;
        return Lorderp(nil, v_42, v_43);
v_21:
    v_43 = v_45;
    v_42 = v_46;
    if (!car_legal(v_42)) v_42 = carerror(v_42); else
    v_42 = car(v_42);
    if (v_43 == v_42) goto v_28;
    else goto v_29;
v_28:
    v_42 = lisp_true;
    goto v_7;
v_29:
    v_43 = v_44;
    v_42 = v_46;
    if (!car_legal(v_42)) v_42 = carerror(v_42); else
    v_42 = car(v_42);
    if (v_43 == v_42) goto v_34;
    else goto v_35;
v_34:
    v_42 = nil;
    goto v_7;
v_35:
    v_42 = v_46;
    if (!car_legal(v_42)) v_42 = cdrerror(v_42); else
    v_42 = cdr(v_42);
    v_46 = v_42;
    goto v_8;
v_7:
    return onevalue(v_42);
}



// Code for symbvarlst

static LispObject CC_symbvarlst(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    v_85 = v_4;
    stack[-3] = v_3;
    v_87 = v_2;
// end of prologue
    v_86 = v_85;
    v_85 = basic_elt(env, 1); // symbolic
    if (v_86 == v_85) goto v_13;
    v_85 = nil;
    goto v_9;
v_13:
    v_85 = v_87;
    stack[-4] = v_85;
v_20:
    v_85 = stack[-4];
    if (v_85 == nil) goto v_23;
    else goto v_24;
v_23:
    goto v_19;
v_24:
    v_85 = stack[-4];
    if (!car_legal(v_85)) v_85 = carerror(v_85); else
    v_85 = car(v_85);
    v_85 = Lconsp(nil, v_85);
    env = stack[-5];
    if (v_85 == nil) goto v_30;
    v_85 = stack[-4];
    if (!car_legal(v_85)) v_85 = carerror(v_85); else
    v_85 = car(v_85);
    if (!car_legal(v_85)) v_85 = carerror(v_85); else
    v_85 = car(v_85);
    goto v_28;
v_30:
    v_85 = stack[-4];
    if (!car_legal(v_85)) v_85 = carerror(v_85); else
    v_85 = car(v_85);
    goto v_28;
    v_85 = nil;
v_28:
    stack[0] = v_85;
    v_85 = stack[0];
    v_85 = Lsymbol_specialp(nil, v_85);
    env = stack[-5];
    if (v_85 == nil) goto v_47;
    else goto v_48;
v_47:
    v_85 = stack[0];
    v_85 = Lsymbol_globalp(nil, v_85);
    env = stack[-5];
    if (v_85 == nil) goto v_53;
    else goto v_54;
v_53:
    v_86 = stack[0];
    v_85 = stack[-3];
    v_85 = Lsmemq(nil, v_86, v_85);
    env = stack[-5];
    if (v_85 == nil) goto v_59;
    else goto v_60;
v_59:
    v_85 = qvalue(basic_elt(env, 2)); // !*novarmsg
    v_85 = (v_85 == nil ? lisp_true : nil);
    goto v_58;
v_60:
    v_85 = nil;
    goto v_58;
    v_85 = nil;
v_58:
    goto v_52;
v_54:
    v_85 = nil;
    goto v_52;
    v_85 = nil;
v_52:
    goto v_46;
v_48:
    v_85 = nil;
    goto v_46;
    v_85 = nil;
v_46:
    if (v_85 == nil) goto v_44;
    stack[-2] = basic_elt(env, 3); // "local variable"
    stack[-1] = stack[0];
    stack[0] = basic_elt(env, 4); // "in procedure"
    v_86 = qvalue(basic_elt(env, 5)); // fname!*
    v_85 = basic_elt(env, 6); // "not used"
    v_85 = list2(v_86, v_85);
    env = stack[-5];
    v_85 = list3star(stack[-2], stack[-1], stack[0], v_85);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 7); // lprim
    v_85 = (*qfn1(fn))(fn, v_85);
    }
    env = stack[-5];
    goto v_42;
v_44:
v_42:
    v_85 = stack[-4];
    if (!car_legal(v_85)) v_85 = cdrerror(v_85); else
    v_85 = cdr(v_85);
    stack[-4] = v_85;
    goto v_20;
v_19:
    v_85 = nil;
v_9:
    return onevalue(v_85);
}



// Code for mv!-domainlist!-!+

static LispObject CC_mvKdomainlistKL(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_29 = stack[-1];
    if (v_29 == nil) goto v_11;
    else goto v_12;
v_11:
    v_29 = stack[-2];
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn1(fn))(fn, v_29);
    }
v_12:
    v_29 = stack[-1];
    if (!car_legal(v_29)) v_30 = carerror(v_29); else
    v_30 = car(v_29);
    v_29 = stack[0];
    if (!car_legal(v_29)) v_29 = carerror(v_29); else
    v_29 = car(v_29);
    v_30 = plus2(v_30, v_29);
    env = stack[-3];
    v_29 = stack[-2];
    v_29 = cons(v_30, v_29);
    env = stack[-3];
    stack[-2] = v_29;
    v_29 = stack[-1];
    if (!car_legal(v_29)) v_29 = cdrerror(v_29); else
    v_29 = cdr(v_29);
    stack[-1] = v_29;
    v_29 = stack[0];
    if (!car_legal(v_29)) v_29 = cdrerror(v_29); else
    v_29 = cdr(v_29);
    stack[0] = v_29;
    goto v_8;
    v_29 = nil;
    return onevalue(v_29);
}



// Code for qremd

static LispObject CC_qremd(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_78, v_79;
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
    v_78 = stack[-2];
    if (v_78 == nil) goto v_7;
    else goto v_8;
v_7:
    v_79 = stack[-2];
    v_78 = stack[-2];
    return cons(v_79, v_78);
v_8:
    v_79 = stack[-1];
    v_78 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_79 == v_78) goto v_13;
    else goto v_14;
v_13:
    v_78 = stack[-2];
    return ncons(v_78);
v_14:
    v_78 = qvalue(basic_elt(env, 1)); // dmode!*
    if (!symbolp(v_78)) v_78 = nil;
    else { v_78 = qfastgets(v_78);
           if (v_78 != nil) { v_78 = elt(v_78, 3); // field
#ifdef RECORD_GET
             if (v_78 == SPID_NOPROP)
                record_get(elt(fastget_names, 3), 0),
                v_78 = nil;
             else record_get(elt(fastget_names, 3), 1),
                v_78 = lisp_true; }
           else record_get(elt(fastget_names, 3), 0); }
#else
             if (v_78 == SPID_NOPROP) v_78 = nil; else v_78 = lisp_true; }}
#endif
    if (v_78 == nil) goto v_20;
    v_78 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // !:recip
    v_79 = (*qfn1(fn))(fn, v_78);
    }
    env = stack[-4];
    v_78 = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // multd
    v_78 = (*qfn2(fn))(fn, v_79, v_78);
    }
    return ncons(v_78);
v_20:
    v_78 = stack[-2];
    if (!consp(v_78)) goto v_32;
    else goto v_33;
v_32:
    v_78 = lisp_true;
    goto v_31;
v_33:
    v_78 = stack[-2];
    if (!car_legal(v_78)) v_78 = carerror(v_78); else
    v_78 = car(v_78);
    v_78 = (consp(v_78) ? nil : lisp_true);
    goto v_31;
    v_78 = nil;
v_31:
    if (v_78 == nil) goto v_29;
    v_79 = stack[-2];
    v_78 = stack[-1];
    {
        LispObject fn = basic_elt(env, 4); // !:divide
        return (*qfn2(fn))(fn, v_79, v_78);
    }
v_29:
    v_78 = stack[-2];
    if (!car_legal(v_78)) v_78 = carerror(v_78); else
    v_78 = car(v_78);
    if (!car_legal(v_78)) v_79 = cdrerror(v_78); else
    v_79 = cdr(v_78);
    v_78 = stack[-1];
    {   LispObject fn = basic_elt(env, 5); // qremf
    v_78 = (*qfn2(fn))(fn, v_79, v_78);
    }
    env = stack[-4];
    stack[-3] = v_78;
    v_78 = stack[-2];
    if (!car_legal(v_78)) v_78 = carerror(v_78); else
    v_78 = car(v_78);
    if (!car_legal(v_78)) v_79 = carerror(v_78); else
    v_79 = car(v_78);
    v_78 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_78 = cons(v_79, v_78);
    env = stack[-4];
    v_79 = ncons(v_78);
    env = stack[-4];
    v_78 = stack[-3];
    if (!car_legal(v_78)) v_78 = carerror(v_78); else
    v_78 = car(v_78);
    {   LispObject fn = basic_elt(env, 6); // multf
    stack[0] = (*qfn2(fn))(fn, v_79, v_78);
    }
    env = stack[-4];
    v_78 = stack[-2];
    if (!car_legal(v_78)) v_78 = carerror(v_78); else
    v_78 = car(v_78);
    if (!car_legal(v_78)) v_79 = carerror(v_78); else
    v_79 = car(v_78);
    v_78 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_78 = cons(v_79, v_78);
    env = stack[-4];
    v_79 = ncons(v_78);
    env = stack[-4];
    v_78 = stack[-3];
    if (!car_legal(v_78)) v_78 = cdrerror(v_78); else
    v_78 = cdr(v_78);
    {   LispObject fn = basic_elt(env, 6); // multf
    v_78 = (*qfn2(fn))(fn, v_79, v_78);
    }
    env = stack[-4];
    stack[0] = cons(stack[0], v_78);
    env = stack[-4];
    v_78 = stack[-2];
    if (!car_legal(v_78)) v_79 = cdrerror(v_78); else
    v_79 = cdr(v_78);
    v_78 = stack[-1];
    {   LispObject fn = basic_elt(env, 0); // qremd
    v_78 = (*qfn2(fn))(fn, v_79, v_78);
    }
    env = stack[-4];
    {
        LispObject v_84 = stack[0];
        LispObject fn = basic_elt(env, 7); // praddf
        return (*qfn2(fn))(fn, v_84, v_78);
    }
    goto v_6;
    v_78 = nil;
v_6:
    return onevalue(v_78);
}



// Code for ad_numsort

static LispObject CC_ad_numsort(LispObject env,
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
        LispObject fn = basic_elt(env, 2); // sort
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



// Code for cde_delete

static LispObject CC_cde_delete(LispObject env,
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
    v_35 = v_3;
    stack[0] = v_2;
// end of prologue
    v_38 = nil;
    stack[-1] = v_35;
v_11:
    v_35 = stack[-1];
    if (v_35 == nil) goto v_15;
    else goto v_16;
v_15:
    goto v_10;
v_16:
    v_35 = stack[-1];
    if (!car_legal(v_35)) v_35 = carerror(v_35); else
    v_35 = car(v_35);
    v_37 = v_35;
    v_36 = v_37;
    v_35 = stack[0];
    if (equal(v_36, v_35)) goto v_25;
    v_35 = v_37;
    v_36 = v_38;
    v_35 = cons(v_35, v_36);
    env = stack[-2];
    v_38 = v_35;
    goto v_23;
v_25:
v_23:
    v_35 = stack[-1];
    if (!car_legal(v_35)) v_35 = cdrerror(v_35); else
    v_35 = cdr(v_35);
    stack[-1] = v_35;
    goto v_11;
v_10:
    v_35 = v_38;
        return Lnreverse(nil, v_35);
    return onevalue(v_35);
}



// Code for derivative!-mod!-p!-1

static LispObject CC_derivativeKmodKpK1(LispObject env,
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    stack[-1] = v_3;
    stack[-2] = v_2;
// end of prologue
    v_74 = stack[-2];
    if (!consp(v_74)) goto v_11;
    else goto v_12;
v_11:
    v_74 = lisp_true;
    goto v_10;
v_12:
    v_74 = stack[-2];
    if (!car_legal(v_74)) v_74 = carerror(v_74); else
    v_74 = car(v_74);
    v_74 = (consp(v_74) ? nil : lisp_true);
    goto v_10;
    v_74 = nil;
v_10:
    if (v_74 == nil) goto v_8;
    v_74 = nil;
    goto v_6;
v_8:
    v_74 = stack[-2];
    if (!car_legal(v_74)) v_74 = carerror(v_74); else
    v_74 = car(v_74);
    if (!car_legal(v_74)) v_74 = carerror(v_74); else
    v_74 = car(v_74);
    if (!car_legal(v_74)) v_75 = carerror(v_74); else
    v_75 = car(v_74);
    v_74 = stack[-1];
    if (equal(v_75, v_74)) goto v_22;
    v_74 = nil;
    goto v_6;
v_22:
    v_74 = stack[-2];
    if (!car_legal(v_74)) v_74 = carerror(v_74); else
    v_74 = car(v_74);
    if (!car_legal(v_74)) v_74 = carerror(v_74); else
    v_74 = car(v_74);
    if (!car_legal(v_74)) v_75 = cdrerror(v_74); else
    v_75 = cdr(v_74);
    v_74 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_75 == v_74) goto v_29;
    else goto v_30;
v_29:
    v_74 = stack[-2];
    if (!car_legal(v_74)) v_74 = carerror(v_74); else
    v_74 = car(v_74);
    if (!car_legal(v_74)) v_74 = cdrerror(v_74); else
    v_74 = cdr(v_74);
    goto v_6;
v_30:
    v_74 = stack[-2];
    if (!car_legal(v_74)) v_74 = carerror(v_74); else
    v_74 = car(v_74);
    if (!car_legal(v_74)) stack[0] = cdrerror(v_74); else
    stack[0] = cdr(v_74);
    v_74 = stack[-2];
    if (!car_legal(v_74)) v_74 = carerror(v_74); else
    v_74 = car(v_74);
    if (!car_legal(v_74)) v_74 = carerror(v_74); else
    v_74 = car(v_74);
    if (!car_legal(v_74)) v_74 = cdrerror(v_74); else
    v_74 = cdr(v_74);
    v_74 = Lmodular_number(nil, v_74);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 1); // multiply!-by!-constant!-mod!-p
    stack[0] = (*qfn2(fn))(fn, stack[0], v_74);
    }
    env = stack[-4];
    v_74 = stack[-2];
    if (!car_legal(v_74)) v_75 = cdrerror(v_74); else
    v_75 = cdr(v_74);
    v_74 = stack[-1];
    {   LispObject fn = basic_elt(env, 0); // derivative!-mod!-p!-1
    v_74 = (*qfn2(fn))(fn, v_75, v_74);
    }
    env = stack[-4];
    stack[-3] = stack[0];
    stack[0] = v_74;
    v_74 = stack[-3];
    if (v_74 == nil) goto v_58;
    else goto v_59;
v_58:
    v_74 = stack[0];
    goto v_57;
v_59:
    v_75 = stack[-1];
    v_74 = stack[-2];
    if (!car_legal(v_74)) v_74 = carerror(v_74); else
    v_74 = car(v_74);
    if (!car_legal(v_74)) v_74 = carerror(v_74); else
    v_74 = car(v_74);
    if (!car_legal(v_74)) v_74 = cdrerror(v_74); else
    v_74 = cdr(v_74);
    v_74 = static_cast<LispObject>(static_cast<std::intptr_t>(v_74) - 0x10);
    {   LispObject fn = basic_elt(env, 2); // mksp
    v_76 = (*qfn2(fn))(fn, v_75, v_74);
    }
    v_75 = stack[-3];
    v_74 = stack[0];
    return acons(v_76, v_75, v_74);
    v_74 = nil;
v_57:
    goto v_6;
    v_74 = nil;
v_6:
    return onevalue(v_74);
}



// Code for collect_cdrs

static LispObject CC_collect_cdrs(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_25 = nil;
v_7:
    v_24 = stack[0];
    if (v_24 == nil) goto v_10;
    else goto v_11;
v_10:
    v_24 = v_25;
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn1(fn))(fn, v_24);
    }
v_11:
    v_24 = stack[0];
    if (!car_legal(v_24)) v_24 = carerror(v_24); else
    v_24 = car(v_24);
    if (!car_legal(v_24)) v_24 = cdrerror(v_24); else
    v_24 = cdr(v_24);
    v_24 = cons(v_24, v_25);
    env = stack[-1];
    v_25 = v_24;
    v_24 = stack[0];
    if (!car_legal(v_24)) v_24 = cdrerror(v_24); else
    v_24 = cdr(v_24);
    stack[0] = v_24;
    goto v_7;
    v_24 = nil;
    return onevalue(v_24);
}



// Code for pasf_simplat1

static LispObject CC_pasf_simplat1(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_195, v_196, v_197;
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
    v_195 = v_3;
    v_196 = v_2;
// end of prologue
    v_195 = v_196;
    {   LispObject fn = basic_elt(env, 6); // pasf_zcong
    v_195 = (*qfn1(fn))(fn, v_195);
    }
    env = stack[0];
    {   LispObject fn = basic_elt(env, 7); // pasf_mkpos
    v_195 = (*qfn1(fn))(fn, v_195);
    }
    env = stack[0];
    {   LispObject fn = basic_elt(env, 8); // pasf_dt
    v_195 = (*qfn1(fn))(fn, v_195);
    }
    env = stack[0];
    {   LispObject fn = basic_elt(env, 9); // pasf_vf
    v_195 = (*qfn1(fn))(fn, v_195);
    }
    env = stack[0];
    v_196 = v_195;
    v_197 = v_196;
    v_195 = basic_elt(env, 1); // true
    if (v_197 == v_195) goto v_18;
    else goto v_19;
v_18:
    v_195 = lisp_true;
    goto v_17;
v_19:
    v_197 = v_196;
    v_195 = basic_elt(env, 2); // false
    v_195 = (v_197 == v_195 ? lisp_true : nil);
    goto v_17;
    v_195 = nil;
v_17:
    if (v_195 == nil) goto v_15;
    v_195 = v_196;
    goto v_6;
v_15:
    v_195 = v_196;
    v_195 = Lconsp(nil, v_195);
    env = stack[0];
    if (v_195 == nil) goto v_32;
    v_195 = v_196;
    if (!car_legal(v_195)) v_195 = carerror(v_195); else
    v_195 = car(v_195);
    v_195 = Lconsp(nil, v_195);
    env = stack[0];
    if (v_195 == nil) goto v_32;
    v_195 = v_196;
    if (!car_legal(v_195)) v_195 = carerror(v_195); else
    v_195 = car(v_195);
    if (!car_legal(v_195)) v_197 = carerror(v_195); else
    v_197 = car(v_195);
    v_195 = basic_elt(env, 3); // (cong ncong)
    v_195 = Lmemq(nil, v_197, v_195);
    if (v_195 == nil) goto v_32;
    v_195 = v_196;
    {   LispObject fn = basic_elt(env, 10); // pasf_mr
    v_195 = (*qfn1(fn))(fn, v_195);
    }
    env = stack[0];
    {   LispObject fn = basic_elt(env, 9); // pasf_vf
    v_195 = (*qfn1(fn))(fn, v_195);
    }
    env = stack[0];
    {   LispObject fn = basic_elt(env, 11); // pasf_cecong
    v_195 = (*qfn1(fn))(fn, v_195);
    }
    env = stack[0];
    v_196 = v_195;
    goto v_30;
v_32:
    v_197 = v_196;
    v_195 = basic_elt(env, 1); // true
    if (v_197 == v_195) goto v_63;
    else goto v_64;
v_63:
    v_195 = lisp_true;
    goto v_62;
v_64:
    v_197 = v_196;
    v_195 = basic_elt(env, 2); // false
    v_195 = (v_197 == v_195 ? lisp_true : nil);
    goto v_62;
    v_195 = nil;
v_62:
    if (v_195 == nil) goto v_60;
    v_195 = v_196;
    v_197 = v_195;
    goto v_58;
v_60:
    v_195 = v_196;
    if (!car_legal(v_195)) v_195 = carerror(v_195); else
    v_195 = car(v_195);
    v_195 = Lconsp(nil, v_195);
    env = stack[0];
    if (v_195 == nil) goto v_75;
    v_195 = v_196;
    if (!car_legal(v_195)) v_195 = carerror(v_195); else
    v_195 = car(v_195);
    if (!car_legal(v_195)) v_195 = carerror(v_195); else
    v_195 = car(v_195);
    v_197 = v_195;
    goto v_58;
v_75:
    v_195 = v_196;
    if (!car_legal(v_195)) v_195 = carerror(v_195); else
    v_195 = car(v_195);
    v_197 = v_195;
    goto v_58;
    v_197 = nil;
v_58:
    v_195 = basic_elt(env, 4); // (equal neq)
    v_195 = Lmemq(nil, v_197, v_195);
    if (v_195 == nil) goto v_56;
    v_195 = v_196;
    {   LispObject fn = basic_elt(env, 12); // pasf_ceeq
    v_195 = (*qfn1(fn))(fn, v_195);
    }
    env = stack[0];
    v_196 = v_195;
    goto v_54;
v_56:
    v_195 = v_196;
    {   LispObject fn = basic_elt(env, 13); // pasf_cein
    v_195 = (*qfn1(fn))(fn, v_195);
    }
    env = stack[0];
    v_196 = v_195;
    goto v_54;
v_54:
    goto v_30;
v_30:
    v_197 = v_196;
    v_195 = basic_elt(env, 1); // true
    if (v_197 == v_195) goto v_100;
    else goto v_101;
v_100:
    v_195 = lisp_true;
    goto v_99;
v_101:
    v_197 = v_196;
    v_195 = basic_elt(env, 2); // false
    v_195 = (v_197 == v_195 ? lisp_true : nil);
    goto v_99;
    v_195 = nil;
v_99:
    if (v_195 == nil) goto v_97;
    v_195 = v_196;
    goto v_6;
v_97:
    v_197 = v_196;
    v_195 = basic_elt(env, 1); // true
    if (v_197 == v_195) goto v_121;
    else goto v_122;
v_121:
    v_195 = lisp_true;
    goto v_120;
v_122:
    v_197 = v_196;
    v_195 = basic_elt(env, 2); // false
    v_195 = (v_197 == v_195 ? lisp_true : nil);
    goto v_120;
    v_195 = nil;
v_120:
    if (v_195 == nil) goto v_118;
    v_195 = v_196;
    v_197 = v_195;
    goto v_116;
v_118:
    v_195 = v_196;
    if (!car_legal(v_195)) v_195 = carerror(v_195); else
    v_195 = car(v_195);
    v_195 = Lconsp(nil, v_195);
    env = stack[0];
    if (v_195 == nil) goto v_133;
    v_195 = v_196;
    if (!car_legal(v_195)) v_195 = carerror(v_195); else
    v_195 = car(v_195);
    if (!car_legal(v_195)) v_195 = carerror(v_195); else
    v_195 = car(v_195);
    v_197 = v_195;
    goto v_116;
v_133:
    v_195 = v_196;
    if (!car_legal(v_195)) v_195 = carerror(v_195); else
    v_195 = car(v_195);
    v_197 = v_195;
    goto v_116;
    v_197 = nil;
v_116:
    v_195 = basic_elt(env, 3); // (cong ncong)
    v_195 = Lmemq(nil, v_197, v_195);
    if (v_195 == nil) goto v_114;
    v_195 = v_196;
    {   LispObject fn = basic_elt(env, 14); // pasf_sc
    v_195 = (*qfn1(fn))(fn, v_195);
    }
    env = stack[0];
    goto v_112;
v_114:
    v_197 = v_196;
    v_195 = basic_elt(env, 1); // true
    if (v_197 == v_195) goto v_156;
    else goto v_157;
v_156:
    v_195 = lisp_true;
    goto v_155;
v_157:
    v_197 = v_196;
    v_195 = basic_elt(env, 2); // false
    v_195 = (v_197 == v_195 ? lisp_true : nil);
    goto v_155;
    v_195 = nil;
v_155:
    if (v_195 == nil) goto v_153;
    v_195 = v_196;
    v_197 = v_195;
    goto v_151;
v_153:
    v_195 = v_196;
    if (!car_legal(v_195)) v_195 = carerror(v_195); else
    v_195 = car(v_195);
    v_195 = Lconsp(nil, v_195);
    env = stack[0];
    if (v_195 == nil) goto v_168;
    v_195 = v_196;
    if (!car_legal(v_195)) v_195 = carerror(v_195); else
    v_195 = car(v_195);
    if (!car_legal(v_195)) v_195 = carerror(v_195); else
    v_195 = car(v_195);
    v_197 = v_195;
    goto v_151;
v_168:
    v_195 = v_196;
    if (!car_legal(v_195)) v_195 = carerror(v_195); else
    v_195 = car(v_195);
    v_197 = v_195;
    goto v_151;
    v_197 = nil;
v_151:
    v_195 = basic_elt(env, 4); // (equal neq)
    v_195 = Lmemq(nil, v_197, v_195);
    if (v_195 == nil) goto v_149;
    v_195 = v_196;
    {   LispObject fn = basic_elt(env, 15); // pasf_se
    v_195 = (*qfn1(fn))(fn, v_195);
    }
    env = stack[0];
    goto v_112;
v_149:
    v_195 = v_196;
    {   LispObject fn = basic_elt(env, 16); // pasf_or
    v_195 = (*qfn1(fn))(fn, v_195);
    }
    env = stack[0];
    goto v_112;
    v_195 = nil;
v_112:
    v_196 = v_195;
    v_195 = qvalue(basic_elt(env, 5)); // !*rlsifac
    if (v_195 == nil) goto v_189;
    else goto v_190;
v_189:
    v_195 = v_196;
    goto v_6;
v_190:
    v_195 = v_196;
    {
        LispObject fn = basic_elt(env, 17); // pasf_fact
        return (*qfn1(fn))(fn, v_195);
    }
v_6:
    return onevalue(v_195);
}



// Code for reln

static LispObject CC_reln(LispObject env,
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
    v_26 = basic_elt(env, 1); // "<apply>"
    {   LispObject fn = basic_elt(env, 5); // printout
    v_26 = (*qfn1(fn))(fn, v_26);
    }
    env = stack[-2];
    v_26 = basic_elt(env, 2); // "<"
    v_26 = Lprinc(nil, v_26);
    env = stack[-2];
    v_26 = stack[0];
    v_26 = Lprinc(nil, v_26);
    env = stack[-2];
    v_26 = stack[-1];
    if (!car_legal(v_26)) v_27 = carerror(v_26); else
    v_27 = car(v_26);
    v_26 = basic_elt(env, 3); // "/"
    {   LispObject fn = basic_elt(env, 6); // attributesml
    v_26 = (*qfn2(fn))(fn, v_27, v_26);
    }
    env = stack[-2];
    v_26 = lisp_true;
    {   LispObject fn = basic_elt(env, 7); // indent!*
    v_26 = (*qfn1(fn))(fn, v_26);
    }
    env = stack[-2];
    v_26 = stack[-1];
    if (!car_legal(v_26)) v_26 = cdrerror(v_26); else
    v_26 = cdr(v_26);
    {   LispObject fn = basic_elt(env, 8); // multi_elem
    v_26 = (*qfn1(fn))(fn, v_26);
    }
    env = stack[-2];
    v_26 = nil;
    {   LispObject fn = basic_elt(env, 7); // indent!*
    v_26 = (*qfn1(fn))(fn, v_26);
    }
    env = stack[-2];
    v_26 = basic_elt(env, 4); // "</apply>"
    {   LispObject fn = basic_elt(env, 5); // printout
    v_26 = (*qfn1(fn))(fn, v_26);
    }
    v_26 = nil;
    return onevalue(v_26);
}



// Code for diffsq

static LispObject CC_diffsq(LispObject env,
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    stack[-1] = v_3;
    stack[-2] = v_2;
// end of prologue
    v_22 = stack[-2];
    if (!car_legal(v_22)) v_23 = carerror(v_22); else
    v_23 = car(v_22);
    v_22 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // difff
    stack[-3] = (*qfn2(fn))(fn, v_23, v_22);
    }
    env = stack[-4];
    stack[0] = stack[-2];
    v_22 = stack[-2];
    if (!car_legal(v_22)) v_23 = cdrerror(v_22); else
    v_23 = cdr(v_22);
    v_22 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // difff
    v_22 = (*qfn2(fn))(fn, v_23, v_22);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 2); // multsq
    v_22 = (*qfn2(fn))(fn, stack[0], v_22);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 3); // negsq
    v_22 = (*qfn1(fn))(fn, v_22);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 4); // addsq
    stack[0] = (*qfn2(fn))(fn, stack[-3], v_22);
    }
    env = stack[-4];
    v_23 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_22 = stack[-2];
    if (!car_legal(v_22)) v_22 = cdrerror(v_22); else
    v_22 = cdr(v_22);
    v_22 = cons(v_23, v_22);
    env = stack[-4];
    {
        LispObject v_28 = stack[0];
        LispObject fn = basic_elt(env, 2); // multsq
        return (*qfn2(fn))(fn, v_28, v_22);
    }
}



// Code for wedgek2

static LispObject CC_wedgek2(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_129, v_130, v_131;
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
v_8:
    v_130 = stack[-4];
    v_129 = stack[-3];
    if (!car_legal(v_129)) v_129 = carerror(v_129); else
    v_129 = car(v_129);
    if (v_130 == v_129) goto v_15;
    else goto v_16;
v_15:
    v_130 = stack[-4];
    v_129 = basic_elt(env, 1); // wedge
    v_129 = Leqcar(nil, v_130, v_129);
    env = stack[-6];
    v_129 = (v_129 == nil ? lisp_true : nil);
    goto v_14;
v_16:
    v_129 = nil;
    goto v_14;
    v_129 = nil;
v_14:
    if (v_129 == nil) goto v_12;
    v_129 = stack[-4];
    {   LispObject fn = basic_elt(env, 2); // deg!*form
    v_129 = (*qfn1(fn))(fn, v_129);
    }
    env = stack[-6];
    v_130 = v_129;
    v_129 = v_130;
    v_129 = integerp(v_129);
    if (v_129 == nil) goto v_36;
    else goto v_37;
v_36:
    v_129 = nil;
    goto v_35;
v_37:
    v_129 = v_130;
    v_129 = Loddp(nil, v_129);
    env = stack[-6];
    goto v_35;
    v_129 = nil;
v_35:
    if (v_129 == nil) goto v_30;
    v_129 = nil;
    goto v_7;
v_30:
    v_130 = stack[-4];
    v_129 = stack[-3];
    v_129 = cons(v_130, v_129);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 3); // wedgef
    stack[0] = (*qfn1(fn))(fn, v_129);
    }
    env = stack[-6];
    v_129 = stack[-2];
    {   LispObject fn = basic_elt(env, 4); // mksgnsq
    v_129 = (*qfn1(fn))(fn, v_129);
    }
    env = stack[-6];
    {
        LispObject v_138 = stack[0];
        LispObject fn = basic_elt(env, 5); // multpfsq
        return (*qfn2(fn))(fn, v_138, v_129);
    }
    goto v_10;
v_12:
    v_129 = stack[-3];
    if (!car_legal(v_129)) v_130 = carerror(v_129); else
    v_130 = car(v_129);
    v_129 = basic_elt(env, 1); // wedge
    if (!consp(v_130)) goto v_56;
    v_130 = car(v_130);
    if (v_130 == v_129) goto v_55;
    else goto v_56;
v_55:
    v_129 = stack[-3];
    if (!car_legal(v_129)) v_129 = carerror(v_129); else
    v_129 = car(v_129);
    if (!car_legal(v_129)) v_129 = cdrerror(v_129); else
    v_129 = cdr(v_129);
    stack[-3] = v_129;
    goto v_8;
v_56:
    v_130 = stack[-4];
    v_129 = basic_elt(env, 1); // wedge
    if (!consp(v_130)) goto v_65;
    v_130 = car(v_130);
    if (v_130 == v_129) goto v_64;
    else goto v_65;
v_64:
    v_129 = stack[-4];
    if (!car_legal(v_129)) v_130 = cdrerror(v_129); else
    v_130 = cdr(v_129);
    v_129 = stack[-3];
    {   LispObject fn = basic_elt(env, 6); // wedgewedge
    stack[0] = (*qfn2(fn))(fn, v_130, v_129);
    }
    env = stack[-6];
    v_129 = stack[-2];
    {   LispObject fn = basic_elt(env, 4); // mksgnsq
    v_129 = (*qfn1(fn))(fn, v_129);
    }
    env = stack[-6];
    {
        LispObject v_139 = stack[0];
        LispObject fn = basic_elt(env, 5); // multpfsq
        return (*qfn2(fn))(fn, v_139, v_129);
    }
v_65:
    v_130 = stack[-4];
    v_129 = stack[-3];
    if (!car_legal(v_129)) v_129 = carerror(v_129); else
    v_129 = car(v_129);
    {   LispObject fn = basic_elt(env, 7); // worderp
    v_129 = (*qfn2(fn))(fn, v_130, v_129);
    }
    env = stack[-6];
    if (v_129 == nil) goto v_77;
    v_130 = stack[-4];
    v_129 = stack[-3];
    v_129 = cons(v_130, v_129);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 3); // wedgef
    stack[0] = (*qfn1(fn))(fn, v_129);
    }
    env = stack[-6];
    v_129 = stack[-2];
    {   LispObject fn = basic_elt(env, 4); // mksgnsq
    v_129 = (*qfn1(fn))(fn, v_129);
    }
    env = stack[-6];
    {
        LispObject v_140 = stack[0];
        LispObject fn = basic_elt(env, 5); // multpfsq
        return (*qfn2(fn))(fn, v_140, v_129);
    }
v_77:
    v_129 = stack[-3];
    if (!car_legal(v_129)) v_129 = cdrerror(v_129); else
    v_129 = cdr(v_129);
    if (v_129 == nil) goto v_90;
    v_129 = stack[-3];
    if (!car_legal(v_129)) v_131 = carerror(v_129); else
    v_131 = car(v_129);
    v_130 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_129 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_129 = list2star(v_131, v_130, v_129);
    env = stack[-6];
    stack[-5] = ncons(v_129);
    env = stack[-6];
    stack[-1] = stack[-4];
    v_129 = stack[-3];
    if (!car_legal(v_129)) stack[0] = cdrerror(v_129); else
    stack[0] = cdr(v_129);
    v_129 = stack[-4];
    {   LispObject fn = basic_elt(env, 2); // deg!*form
    stack[-4] = (*qfn1(fn))(fn, v_129);
    }
    env = stack[-6];
    v_129 = stack[-3];
    if (!car_legal(v_129)) v_129 = carerror(v_129); else
    v_129 = car(v_129);
    {   LispObject fn = basic_elt(env, 2); // deg!*form
    v_129 = (*qfn1(fn))(fn, v_129);
    }
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 8); // multf
    v_129 = (*qfn2(fn))(fn, stack[-4], v_129);
    }
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 9); // addf
    v_129 = (*qfn2(fn))(fn, stack[-2], v_129);
    }
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 0); // wedgek2
    v_129 = (*qfn3(fn))(fn, stack[-1], stack[0], v_129);
    }
    env = stack[-6];
    {
        LispObject v_141 = stack[-5];
        LispObject fn = basic_elt(env, 10); // wedgepf2
        return (*qfn2(fn))(fn, v_141, v_129);
    }
v_90:
    v_129 = stack[-3];
    if (!car_legal(v_129)) v_130 = carerror(v_129); else
    v_130 = car(v_129);
    v_129 = stack[-4];
    v_129 = list2(v_130, v_129);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 3); // wedgef
    stack[0] = (*qfn1(fn))(fn, v_129);
    }
    env = stack[-6];
    stack[-1] = stack[-2];
    v_129 = stack[-4];
    {   LispObject fn = basic_elt(env, 2); // deg!*form
    stack[-2] = (*qfn1(fn))(fn, v_129);
    }
    env = stack[-6];
    v_129 = stack[-3];
    if (!car_legal(v_129)) v_129 = carerror(v_129); else
    v_129 = car(v_129);
    {   LispObject fn = basic_elt(env, 2); // deg!*form
    v_129 = (*qfn1(fn))(fn, v_129);
    }
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 8); // multf
    v_129 = (*qfn2(fn))(fn, stack[-2], v_129);
    }
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 9); // addf
    v_129 = (*qfn2(fn))(fn, stack[-1], v_129);
    }
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 4); // mksgnsq
    v_129 = (*qfn1(fn))(fn, v_129);
    }
    env = stack[-6];
    {
        LispObject v_142 = stack[0];
        LispObject fn = basic_elt(env, 5); // multpfsq
        return (*qfn2(fn))(fn, v_142, v_129);
    }
v_10:
    v_129 = nil;
v_7:
    return onevalue(v_129);
}



// Code for fortexp

static LispObject CC_fortexp(LispObject env,
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
    v_7 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {
        LispObject fn = basic_elt(env, 1); // fortexp1
        return (*qfn2(fn))(fn, v_8, v_7);
    }
}



// Code for repartf

static LispObject CC_repartf(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_84, v_85;
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
    v_85 = basic_elt(env, 1); // i
    v_84 = qvalue(basic_elt(env, 2)); // kord!*
    v_84 = cons(v_85, v_84);
    env = stack[-4];
// Binding kord!*
// FLUIDBIND: reloadenv=4 litvec-offset=2 saveloc=3
{   bind_fluid_stack bind_fluid_var(-4, 2, -3);
    setvalue(basic_elt(env, 2), v_84); // kord!*
    v_84 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // reorder
    v_84 = (*qfn1(fn))(fn, v_84);
    }
    env = stack[-4];
    stack[-2] = v_84;
    v_84 = stack[-2];
    if (!consp(v_84)) goto v_18;
    else goto v_19;
v_18:
    v_84 = lisp_true;
    goto v_17;
v_19:
    v_84 = stack[-2];
    if (!car_legal(v_84)) v_84 = carerror(v_84); else
    v_84 = car(v_84);
    v_84 = (consp(v_84) ? nil : lisp_true);
    goto v_17;
    v_84 = nil;
v_17:
    if (v_84 == nil) goto v_15;
    v_84 = stack[-2];
    if (!consp(v_84)) goto v_29;
    else goto v_30;
v_29:
    v_84 = stack[-2];
    goto v_28;
v_30:
    v_84 = stack[-2];
    if (!car_legal(v_84)) v_85 = carerror(v_84); else
    v_85 = car(v_84);
    v_84 = basic_elt(env, 3); // cmpxfn
    v_84 = get(v_85, v_84);
    env = stack[-4];
    if (v_84 == nil) goto v_34;
    v_84 = stack[-2];
    if (!car_legal(v_84)) stack[-1] = carerror(v_84); else
    stack[-1] = car(v_84);
    v_84 = stack[-2];
    if (!car_legal(v_84)) v_84 = cdrerror(v_84); else
    v_84 = cdr(v_84);
    if (!car_legal(v_84)) stack[0] = carerror(v_84); else
    stack[0] = car(v_84);
    v_84 = stack[-2];
    if (!car_legal(v_84)) v_84 = carerror(v_84); else
    v_84 = car(v_84);
    if (!symbolp(v_84)) v_85 = nil;
    else { v_85 = qfastgets(v_84);
           if (v_85 != nil) { v_85 = elt(v_85, 34); // i2d
#ifdef RECORD_GET
             if (v_85 != SPID_NOPROP)
                record_get(elt(fastget_names, 34), 1);
             else record_get(elt(fastget_names, 34), 0),
                v_85 = nil; }
           else record_get(elt(fastget_names, 34), 0); }
#else
             if (v_85 == SPID_NOPROP) v_85 = nil; }}
#endif
    v_84 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_84 = Lapply1(nil, v_85, v_84);
    env = stack[-4];
    if (!car_legal(v_84)) v_84 = cdrerror(v_84); else
    v_84 = cdr(v_84);
    if (!car_legal(v_84)) v_84 = carerror(v_84); else
    v_84 = car(v_84);
    v_84 = list2star(stack[-1], stack[0], v_84);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 5); // int!-equiv!-chk
    v_84 = (*qfn1(fn))(fn, v_84);
    }
    goto v_28;
v_34:
    v_84 = stack[-2];
    goto v_28;
    v_84 = nil;
v_28:
    goto v_13;
v_15:
    v_84 = stack[-2];
    if (!car_legal(v_84)) v_84 = carerror(v_84); else
    v_84 = car(v_84);
    if (!car_legal(v_84)) v_84 = carerror(v_84); else
    v_84 = car(v_84);
    if (!car_legal(v_84)) v_85 = carerror(v_84); else
    v_85 = car(v_84);
    v_84 = basic_elt(env, 1); // i
    if (v_85 == v_84) goto v_56;
    else goto v_57;
v_56:
    v_84 = stack[-2];
    if (!car_legal(v_84)) v_84 = cdrerror(v_84); else
    v_84 = cdr(v_84);
    {   LispObject fn = basic_elt(env, 0); // repartf
    v_84 = (*qfn1(fn))(fn, v_84);
    }
    goto v_13;
v_57:
    v_84 = stack[-2];
    if (!car_legal(v_84)) v_84 = carerror(v_84); else
    v_84 = car(v_84);
    if (!car_legal(v_84)) v_85 = carerror(v_84); else
    v_85 = car(v_84);
    v_84 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_84 = cons(v_85, v_84);
    env = stack[-4];
    stack[0] = ncons(v_84);
    env = stack[-4];
    v_84 = stack[-2];
    if (!car_legal(v_84)) v_84 = carerror(v_84); else
    v_84 = car(v_84);
    if (!car_legal(v_84)) v_84 = cdrerror(v_84); else
    v_84 = cdr(v_84);
    {   LispObject fn = basic_elt(env, 0); // repartf
    v_84 = (*qfn1(fn))(fn, v_84);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 6); // multf
    stack[0] = (*qfn2(fn))(fn, stack[0], v_84);
    }
    env = stack[-4];
    v_84 = stack[-2];
    if (!car_legal(v_84)) v_84 = cdrerror(v_84); else
    v_84 = cdr(v_84);
    {   LispObject fn = basic_elt(env, 0); // repartf
    v_84 = (*qfn1(fn))(fn, v_84);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 7); // addf
    v_84 = (*qfn2(fn))(fn, stack[0], v_84);
    }
    goto v_13;
    v_84 = nil;
v_13:
    ;}  // end of a binding scope
    return onevalue(v_84);
}



// Code for assert_uninstall1

static LispObject CC_assert_uninstall1(LispObject env,
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
    v_27 = stack[0];
    v_26 = basic_elt(env, 1); // assert_installed
    v_26 = get(v_27, v_26);
    env = stack[-1];
    if (v_26 == nil) goto v_6;
    else goto v_7;
v_6:
    v_27 = basic_elt(env, 2); // "assert not installed for"
    v_26 = stack[0];
    v_26 = list2(v_27, v_26);
    env = stack[-1];
    {
        LispObject fn = basic_elt(env, 4); // lprim
        return (*qfn1(fn))(fn, v_26);
    }
v_7:
    v_28 = stack[0];
    v_27 = stack[0];
    v_26 = basic_elt(env, 3); // assert_noassertfn
    v_26 = get(v_27, v_26);
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 5); // copyd
    v_26 = (*qfn2(fn))(fn, v_28, v_26);
    }
    env = stack[-1];
    v_27 = stack[0];
    v_28 = basic_elt(env, 1); // assert_installed
    v_26 = nil;
        return Lputprop(nil, v_27, v_28, v_26);
    v_26 = nil;
    return onevalue(v_26);
}



// Code for setel1

static LispObject CC_setel1(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_57, v_58, v_59;
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
v_9:
    v_57 = stack[-2];
    if (!car_legal(v_57)) v_57 = carerror(v_57); else
    v_57 = car(v_57);
    v_57 = integerp(v_57);
    if (v_57 == nil) goto v_12;
    else goto v_13;
v_12:
    v_57 = stack[-2];
    if (!car_legal(v_57)) v_58 = carerror(v_57); else
    v_58 = car(v_57);
    v_57 = basic_elt(env, 1); // "array index"
    {
        LispObject fn = basic_elt(env, 4); // typerr
        return (*qfn2(fn))(fn, v_58, v_57);
    }
v_13:
    v_57 = stack[-2];
    if (!car_legal(v_57)) v_58 = carerror(v_57); else
    v_58 = car(v_57);
    v_57 = stack[0];
    if (!car_legal(v_57)) v_57 = carerror(v_57); else
    v_57 = car(v_57);
    v_57 = static_cast<LispObject>(geq2(v_58, v_57));
    v_57 = v_57 ? lisp_true : nil;
    env = stack[-4];
    if (v_57 == nil) goto v_23;
    else goto v_21;
v_23:
    v_57 = stack[-2];
    if (!car_legal(v_57)) v_58 = carerror(v_57); else
    v_58 = car(v_57);
    v_57 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_57 = static_cast<LispObject>(lessp2(v_58, v_57));
    v_57 = v_57 ? lisp_true : nil;
    env = stack[-4];
    if (v_57 == nil) goto v_29;
    else goto v_21;
v_29:
    goto v_22;
v_21:
    v_59 = basic_elt(env, 2); // rlisp
    v_58 = static_cast<LispObject>(368)+TAG_FIXNUM; // 23
    v_57 = basic_elt(env, 3); // "Array out of bounds"
    {
        LispObject fn = basic_elt(env, 5); // rerror
        return (*qfn3(fn))(fn, v_59, v_58, v_57);
    }
v_22:
    v_57 = stack[-2];
    if (!car_legal(v_57)) v_57 = cdrerror(v_57); else
    v_57 = cdr(v_57);
    if (v_57 == nil) goto v_38;
    else goto v_39;
v_38:
    v_59 = stack[-3];
    v_57 = stack[-2];
    if (!car_legal(v_57)) v_58 = carerror(v_57); else
    v_58 = car(v_57);
    v_57 = stack[-1];
        return Lputv(nil, v_59, v_58, v_57);
v_39:
    v_58 = stack[-3];
    v_57 = stack[-2];
    if (!car_legal(v_57)) v_57 = carerror(v_57); else
    v_57 = car(v_57);
    v_57 = Lgetv(nil, v_58, v_57);
    env = stack[-4];
    stack[-3] = v_57;
    v_57 = stack[-2];
    if (!car_legal(v_57)) v_57 = cdrerror(v_57); else
    v_57 = cdr(v_57);
    stack[-2] = v_57;
    v_57 = stack[0];
    if (!car_legal(v_57)) v_57 = cdrerror(v_57); else
    v_57 = cdr(v_57);
    stack[0] = v_57;
    goto v_9;
    v_57 = nil;
    return onevalue(v_57);
}



// Code for fs!:times

static LispObject CC_fsTtimes(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    v_30 = stack[-1];
    if (v_30 == nil) goto v_7;
    else goto v_8;
v_7:
    v_30 = nil;
    goto v_6;
v_8:
    v_30 = stack[0];
    if (v_30 == nil) goto v_11;
    else goto v_12;
v_11:
    v_30 = nil;
    goto v_6;
v_12:
    v_31 = stack[-1];
    v_30 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // fs!:timesterm
    v_30 = (*qfn2(fn))(fn, v_31, v_30);
    }
    env = stack[-3];
    stack[-2] = v_30;
    v_31 = stack[-1];
    v_30 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_31 = Lgetv(nil, v_31, v_30);
    env = stack[-3];
    v_30 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // fs!:times
    v_30 = (*qfn2(fn))(fn, v_31, v_30);
    }
    env = stack[-3];
    {
        LispObject v_35 = stack[-2];
        LispObject fn = basic_elt(env, 2); // fs!:plus
        return (*qfn2(fn))(fn, v_35, v_30);
    }
    goto v_6;
    v_30 = nil;
v_6:
    return onevalue(v_30);
}



// Code for splitlist!:

static LispObject CC_splitlistT(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_34 = nil;
v_8:
    v_32 = stack[-1];
    if (v_32 == nil) goto v_11;
    else goto v_12;
v_11:
    v_32 = v_34;
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn1(fn))(fn, v_32);
    }
v_12:
    v_32 = stack[-1];
    if (!car_legal(v_32)) v_33 = carerror(v_32); else
    v_33 = car(v_32);
    v_32 = stack[0];
    if (!consp(v_33)) goto v_17;
    v_33 = car(v_33);
    if (v_33 == v_32) goto v_16;
    else goto v_17;
v_16:
    v_32 = stack[-1];
    if (!car_legal(v_32)) v_32 = carerror(v_32); else
    v_32 = car(v_32);
    v_33 = v_34;
    v_32 = cons(v_32, v_33);
    env = stack[-2];
    v_34 = v_32;
    v_32 = stack[-1];
    if (!car_legal(v_32)) v_32 = cdrerror(v_32); else
    v_32 = cdr(v_32);
    stack[-1] = v_32;
    goto v_8;
v_17:
    v_32 = stack[-1];
    if (!car_legal(v_32)) v_32 = cdrerror(v_32); else
    v_32 = cdr(v_32);
    stack[-1] = v_32;
    goto v_8;
    v_32 = nil;
    return onevalue(v_32);
}



// Code for resimpf

static LispObject CC_resimpf(LispObject env,
                         LispObject v_2)
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
    v_13 = v_2;
// end of prologue
    v_12 = nil;
// Binding varstack!*
// FLUIDBIND: reloadenv=1 litvec-offset=1 saveloc=0
{   bind_fluid_stack bind_fluid_var(-1, 1, 0);
    setvalue(basic_elt(env, 1), v_12); // varstack!*
    v_12 = nil;
    {   LispObject fn = basic_elt(env, 2); // subf1
    v_12 = (*qfn2(fn))(fn, v_13, v_12);
    }
    if (!car_legal(v_12)) v_12 = carerror(v_12); else
    v_12 = car(v_12);
    ;}  // end of a binding scope
    return onevalue(v_12);
}



// Code for crprcd2

static LispObject CC_crprcd2(LispObject env,
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
    stack[-1] = v_2;
// end of prologue
    v_10 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // crprcd
    v_10 = (*qfn1(fn))(fn, v_10);
    }
    env = stack[-2];
    stack[-1] = v_10;
    v_10 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // crprcd
    v_10 = (*qfn1(fn))(fn, v_10);
    }
    env = stack[-2];
    setvalue(basic_elt(env, 1), v_10); // yy!!
    v_10 = stack[-1];
    return onevalue(v_10);
}



// Code for aex_mvar

static LispObject CC_aex_mvar(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_13;
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
    v_13 = v_2;
// end of prologue
    goto v_7;
    goto v_5;
v_7:
v_5:
    {   LispObject fn = basic_elt(env, 1); // aex_ex
    v_13 = (*qfn1(fn))(fn, v_13);
    }
    env = stack[0];
    if (!car_legal(v_13)) v_13 = carerror(v_13); else
    v_13 = car(v_13);
    {
        LispObject fn = basic_elt(env, 2); // sfto_mvarx
        return (*qfn1(fn))(fn, v_13);
    }
}



// Code for !*!*a2s

static LispObject CC_HHa2s(LispObject env,
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
    real_push(nil, nil, nil, nil, nil);
    stack_popper stack_popper_var(6);
// copy arguments values to proper place
    v_44 = v_3;
    stack[-3] = v_2;
// end of prologue
    v_44 = stack[-3];
    if (v_44 == nil) goto v_7;
    else goto v_8;
v_7:
    v_44 = basic_elt(env, 1); // "tell Hearn!!"
    {
        LispObject fn = basic_elt(env, 10); // rederr
        return (*qfn1(fn))(fn, v_44);
    }
v_8:
    v_45 = stack[-3];
    v_44 = basic_elt(env, 2); // nochange
    v_44 = Lflagpcar(nil, v_45, v_44);
    env = stack[-5];
    if (v_44 == nil) goto v_13;
    v_44 = stack[-3];
    if (!car_legal(v_44)) v_45 = carerror(v_44); else
    v_45 = car(v_44);
    v_44 = basic_elt(env, 3); // getel
    if (v_45 == v_44) goto v_13;
    v_44 = stack[-3];
    goto v_6;
v_13:
    v_45 = basic_elt(env, 4); // random
    v_44 = stack[-3];
    {   LispObject fn = basic_elt(env, 11); // smember
    v_44 = (*qfn2(fn))(fn, v_45, v_44);
    }
    env = stack[-5];
    if (v_44 == nil) goto v_24;
    stack[-4] = basic_elt(env, 5); // lambda
    stack[-2] = basic_elt(env, 6); // (!*uncached)
    stack[-1] = basic_elt(env, 7); // progn
    stack[0] = basic_elt(env, 8); // (declare (special !*uncached))
    v_45 = qvalue(basic_elt(env, 9)); // !*!*a2sfn
    v_44 = stack[-3];
    v_44 = list2(v_45, v_44);
    env = stack[-5];
    v_44 = list3(stack[-1], stack[0], v_44);
    env = stack[-5];
    v_45 = list3(stack[-4], stack[-2], v_44);
    v_44 = lisp_true;
    return list2(v_45, v_44);
v_24:
    v_45 = qvalue(basic_elt(env, 9)); // !*!*a2sfn
    v_44 = stack[-3];
    return list2(v_45, v_44);
    v_44 = nil;
v_6:
    return onevalue(v_44);
}



// Code for groebcplistsortin1

static LispObject CC_groebcplistsortin1(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
v_7:
    v_38 = stack[0];
    if (!car_legal(v_38)) v_39 = carerror(v_38); else
    v_39 = car(v_38);
    v_38 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // groebcpcompless!?
    v_38 = (*qfn2(fn))(fn, v_39, v_38);
    }
    env = stack[-3];
    if (v_38 == nil) goto v_10;
    else goto v_11;
v_10:
    stack[-2] = stack[0];
    v_38 = stack[0];
    if (!car_legal(v_38)) v_39 = carerror(v_38); else
    v_39 = car(v_38);
    v_38 = stack[0];
    if (!car_legal(v_38)) v_38 = cdrerror(v_38); else
    v_38 = cdr(v_38);
    v_38 = cons(v_39, v_38);
    if (!car_legal(stack[-2])) rplacd_fails(stack[-2]);
    setcdr(stack[-2], v_38);
    v_39 = stack[0];
    v_38 = stack[-1];
    if (!car_legal(v_39)) rplaca_fails(v_39);
    setcar(v_39, v_38);
    v_38 = v_39;
    goto v_6;
v_11:
    v_38 = stack[0];
    if (!car_legal(v_38)) v_38 = cdrerror(v_38); else
    v_38 = cdr(v_38);
    if (v_38 == nil) goto v_26;
    else goto v_27;
v_26:
    v_38 = stack[-1];
    v_38 = ncons(v_38);
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_38);
    v_38 = stack[0];
    goto v_6;
v_27:
    v_38 = stack[0];
    if (!car_legal(v_38)) v_38 = cdrerror(v_38); else
    v_38 = cdr(v_38);
    stack[0] = v_38;
    goto v_7;
    v_38 = nil;
v_6:
    return onevalue(v_38);
}



// Code for bytelist2id

static LispObject CC_bytelist2id(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // list2string
    v_7 = (*qfn1(fn))(fn, v_7);
    }
        return Lintern(nil, v_7);
}



// Code for mktails1

static LispObject CC_mktails1(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_78, v_79, v_80;
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
    v_78 = v_3;
    stack[-1] = v_2;
// end of prologue
    v_79 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // getroad
    v_78 = (*qfn2(fn))(fn, v_79, v_78);
    }
    env = stack[-3];
    v_79 = v_78;
    v_80 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_78 = v_79;
    if (v_80 == v_78) goto v_16;
    else goto v_17;
v_16:
    v_79 = nil;
    v_78 = stack[0];
    return cons(v_79, v_78);
v_17:
    v_80 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_78 = stack[-1];
    if (!car_legal(v_78)) v_78 = cdrerror(v_78); else
    v_78 = cdr(v_78);
    if (v_80 == v_78) goto v_25;
    else goto v_26;
v_25:
    v_78 = stack[-1];
    if (!car_legal(v_78)) v_79 = carerror(v_78); else
    v_79 = car(v_78);
    v_78 = basic_elt(env, 1); // replace_by_vector
    v_78 = get(v_79, v_78);
    env = stack[-3];
    if (v_78 == nil) goto v_34;
    else goto v_33;
v_34:
    v_78 = stack[-1];
    if (!car_legal(v_78)) v_78 = carerror(v_78); else
    v_78 = car(v_78);
v_33:
    v_79 = ncons(v_78);
    v_78 = stack[0];
    return cons(v_79, v_78);
v_26:
    v_80 = stack[-1];
    v_78 = stack[0];
    v_78 = Lassoc(nil, v_80, v_78);
    v_80 = v_78;
    v_78 = v_80;
    if (v_78 == nil) goto v_48;
    v_78 = v_80;
    if (!car_legal(v_78)) v_78 = cdrerror(v_78); else
    v_78 = cdr(v_78);
    if (!car_legal(v_78)) v_78 = cdrerror(v_78); else
    v_78 = cdr(v_78);
    if (v_78 == nil) goto v_52;
    else goto v_53;
v_52:
    v_78 = v_80;
    if (!car_legal(v_78)) v_79 = cdrerror(v_78); else
    v_79 = cdr(v_78);
    v_78 = stack[0];
    return cons(v_79, v_78);
v_53:
    v_78 = v_80;
    if (!car_legal(v_78)) v_78 = cdrerror(v_78); else
    v_78 = cdr(v_78);
    v_79 = Lreverse(nil, v_78);
    v_78 = stack[0];
    return cons(v_79, v_78);
    v_78 = nil;
    goto v_10;
v_48:
    v_78 = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // mkinds
    v_78 = (*qfn2(fn))(fn, v_78, v_79);
    }
    env = stack[-3];
    v_80 = v_78;
    stack[-2] = v_80;
    v_78 = stack[-1];
    v_79 = v_80;
    v_79 = cons(v_78, v_79);
    v_78 = stack[0];
    {
        LispObject v_84 = stack[-2];
        return list2star(v_84, v_79, v_78);
    }
v_10:
    return onevalue(v_78);
}



// Code for one!-entry!-listp

static LispObject CC_oneKentryKlistp(LispObject env,
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
    v_28 = stack[-1];
    if (v_28 == nil) goto v_7;
    else goto v_8;
v_7:
    v_28 = lisp_true;
    goto v_6;
v_8:
    v_28 = stack[-1];
    if (!car_legal(v_28)) v_29 = carerror(v_28); else
    v_29 = car(v_28);
    v_28 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // one!-entryp
    v_28 = (*qfn2(fn))(fn, v_29, v_28);
    }
    env = stack[-2];
    if (v_28 == nil) goto v_15;
    else goto v_16;
v_15:
    v_28 = nil;
    goto v_14;
v_16:
    v_28 = stack[-1];
    if (!car_legal(v_28)) v_29 = cdrerror(v_28); else
    v_29 = cdr(v_28);
    v_28 = stack[0];
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



// Code for setelv

static LispObject CC_setelv(LispObject env,
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
    real_push(nil, nil, nil, nil, nil);
    real_push(nil);
    stack_popper stack_popper_var(7);
// copy arguments values to proper place
    stack[-4] = v_3;
    v_49 = v_2;
// end of prologue
    v_48 = v_49;
    if (!car_legal(v_48)) stack[-5] = carerror(v_48); else
    stack[-5] = car(v_48);
    v_48 = v_49;
    if (!car_legal(v_48)) v_48 = cdrerror(v_48); else
    v_48 = cdr(v_48);
    stack[-3] = v_48;
    v_48 = stack[-3];
    if (v_48 == nil) goto v_19;
    else goto v_20;
v_19:
    v_48 = nil;
    goto v_13;
v_20:
    v_48 = stack[-3];
    if (!car_legal(v_48)) v_48 = carerror(v_48); else
    v_48 = car(v_48);
    {   LispObject fn = basic_elt(env, 1); // reval_without_mod
    v_48 = (*qfn1(fn))(fn, v_48);
    }
    env = stack[-6];
    v_48 = ncons(v_48);
    env = stack[-6];
    stack[-1] = v_48;
    stack[-2] = v_48;
v_14:
    v_48 = stack[-3];
    if (!car_legal(v_48)) v_48 = cdrerror(v_48); else
    v_48 = cdr(v_48);
    stack[-3] = v_48;
    v_48 = stack[-3];
    if (v_48 == nil) goto v_33;
    else goto v_34;
v_33:
    v_48 = stack[-2];
    goto v_13;
v_34:
    stack[0] = stack[-1];
    v_48 = stack[-3];
    if (!car_legal(v_48)) v_48 = carerror(v_48); else
    v_48 = car(v_48);
    {   LispObject fn = basic_elt(env, 1); // reval_without_mod
    v_48 = (*qfn1(fn))(fn, v_48);
    }
    env = stack[-6];
    v_48 = ncons(v_48);
    env = stack[-6];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_48);
    v_48 = stack[-1];
    if (!car_legal(v_48)) v_48 = cdrerror(v_48); else
    v_48 = cdr(v_48);
    stack[-1] = v_48;
    goto v_14;
v_13:
    v_49 = cons(stack[-5], v_48);
    env = stack[-6];
    v_48 = stack[-4];
    {
        LispObject fn = basic_elt(env, 2); // setel
        return (*qfn2(fn))(fn, v_49, v_48);
    }
}



// Code for prepd1

static LispObject CC_prepd1(LispObject env,
                         LispObject v_2)
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
        push(v_2);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_20 = v_2;
// end of prologue
    v_18 = v_20;
    if (!consp(v_18)) goto v_6;
    else goto v_7;
v_6:
    v_18 = v_20;
    goto v_5;
v_7:
    v_18 = v_20;
    if (!car_legal(v_18)) v_19 = carerror(v_18); else
    v_19 = car(v_18);
    v_18 = basic_elt(env, 1); // prepfn
    v_18 = get(v_19, v_18);
    v_19 = v_20;
        return Lapply1(nil, v_18, v_19);
    v_18 = nil;
v_5:
    return onevalue(v_18);
}



// Code for pst_termnodep

static LispObject CC_pst_termnodep(LispObject env,
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
    if (!car_legal(v_10)) v_11 = cdrerror(v_10); else
    v_11 = cdr(v_10);
    v_10 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_10 = Lgetv(nil, v_11, v_10);
    if (!car_legal(v_10)) v_10 = cdrerror(v_10); else
    v_10 = cdr(v_10);
    v_10 = (v_10 == nil ? lisp_true : nil);
    return onevalue(v_10);
}



// Code for ratn

static LispObject CC_ratn(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_31, v_32, v_33;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_33 = v_2;
// end of prologue
    v_31 = v_33;
    if (v_31 == nil) goto v_6;
    else goto v_7;
v_6:
    v_32 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_31 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_32, v_31);
v_7:
    v_31 = v_33;
    if (!consp(v_31)) goto v_12;
    else goto v_13;
v_12:
    v_32 = v_33;
    v_31 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_32, v_31);
v_13:
    v_31 = v_33;
    if (!car_legal(v_31)) v_32 = carerror(v_31); else
    v_32 = car(v_31);
    v_31 = basic_elt(env, 1); // !:rn!:
    if (v_32 == v_31) goto v_18;
    else goto v_19;
v_18:
    v_31 = v_33;
    if (!car_legal(v_31)) v_31 = cdrerror(v_31); else
    v_31 = cdr(v_31);
    goto v_5;
v_19:
    v_33 = basic_elt(env, 2); // arnum
    v_32 = static_cast<LispObject>(96)+TAG_FIXNUM; // 6
    v_31 = basic_elt(env, 3); // "Illegal domain in :ar:"
    {
        LispObject fn = basic_elt(env, 4); // rerror
        return (*qfn3(fn))(fn, v_33, v_32, v_31);
    }
    v_31 = nil;
v_5:
    return onevalue(v_31);
}



// Code for quotfail!-in!-vector

static LispObject CC_quotfailKinKvector(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_151, v_152, v_153;
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
    v_153 = v_3;
    stack[-9] = v_2;
// end of prologue
    v_152 = v_153;
    v_151 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if ((static_cast<std::intptr_t>(v_152) < static_cast<std::intptr_t>(v_151))) goto v_9;
    else goto v_10;
v_9:
    v_151 = v_153;
    goto v_8;
v_10:
    v_152 = stack[-7];
    v_151 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if ((static_cast<std::intptr_t>(v_152) < static_cast<std::intptr_t>(v_151))) goto v_14;
    else goto v_15;
v_14:
    v_151 = basic_elt(env, 1); // "Attempt to divide by zero"
    {
        LispObject fn = basic_elt(env, 4); // errorf
        return (*qfn1(fn))(fn, v_151);
    }
v_15:
    v_152 = v_153;
    v_151 = stack[-7];
    if ((static_cast<std::intptr_t>(v_152) < static_cast<std::intptr_t>(v_151))) goto v_20;
    else goto v_21;
v_20:
    v_151 = basic_elt(env, 2); // "Bad degrees in quotfail-in-vector"
    {
        LispObject fn = basic_elt(env, 4); // errorf
        return (*qfn1(fn))(fn, v_151);
    }
v_21:
    v_152 = v_153;
    v_151 = stack[-7];
    v_151 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_152) - static_cast<std::uintptr_t>(v_151) + TAG_FIXNUM);
    stack[-10] = v_151;
    v_151 = stack[-10];
    stack[-6] = v_151;
v_37:
    v_151 = stack[-6];
    v_151 = (static_cast<std::intptr_t>(v_151) < 0 ? lisp_true : nil);
    if (v_151 == nil) goto v_42;
    goto v_36;
v_42:
    v_153 = stack[-9];
    v_152 = stack[-7];
    v_151 = stack[-6];
    v_151 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_152) + static_cast<std::uintptr_t>(v_151) - TAG_FIXNUM);
    stack[0] = Lgetv(nil, v_153, v_151);
    env = stack[-11];
    v_152 = stack[-8];
    v_151 = stack[-7];
    v_151 = Lgetv(nil, v_152, v_151);
    env = stack[-11];
    v_151 = Lmodular_quotient(nil, stack[0], v_151);
    env = stack[-11];
    stack[-5] = v_151;
    v_151 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-4] = v_151;
v_61:
    v_151 = stack[-7];
    v_152 = static_cast<LispObject>(static_cast<std::intptr_t>(v_151) - 0x10);
    v_151 = stack[-4];
    v_151 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_152) - static_cast<std::uintptr_t>(v_151) + TAG_FIXNUM);
    v_151 = (static_cast<std::intptr_t>(v_151) < 0 ? lisp_true : nil);
    if (v_151 == nil) goto v_66;
    goto v_60;
v_66:
    stack[-3] = stack[-9];
    v_152 = stack[-6];
    v_151 = stack[-4];
    stack[-2] = static_cast<LispObject>(static_cast<std::uintptr_t>(v_152) + static_cast<std::uintptr_t>(v_151) - TAG_FIXNUM);
    v_153 = stack[-9];
    v_152 = stack[-6];
    v_151 = stack[-4];
    v_151 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_152) + static_cast<std::uintptr_t>(v_151) - TAG_FIXNUM);
    stack[-1] = Lgetv(nil, v_153, v_151);
    env = stack[-11];
    stack[0] = stack[-5];
    v_152 = stack[-8];
    v_151 = stack[-4];
    v_151 = Lgetv(nil, v_152, v_151);
    env = stack[-11];
    v_151 = Lmodular_times(nil, stack[0], v_151);
    env = stack[-11];
    {   std::intptr_t w = int_of_fixnum(stack[-1]) - int_of_fixnum(v_151);
        if (w < 0) w += current_modulus;
        v_151 = fixnum_of_int(w);
    }
    v_151 = Lputv(nil, stack[-3], stack[-2], v_151);
    env = stack[-11];
    v_151 = stack[-4];
    v_151 = static_cast<LispObject>(static_cast<std::intptr_t>(v_151) + 0x10);
    stack[-4] = v_151;
    goto v_61;
v_60:
    v_153 = stack[-9];
    v_152 = stack[-7];
    v_151 = stack[-6];
    v_152 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_152) + static_cast<std::uintptr_t>(v_151) - TAG_FIXNUM);
    v_151 = stack[-5];
    v_151 = Lputv(nil, v_153, v_152, v_151);
    env = stack[-11];
    v_151 = stack[-6];
    v_151 = static_cast<LispObject>(static_cast<std::intptr_t>(v_151) - 0x10);
    stack[-6] = v_151;
    goto v_37;
v_36:
    v_151 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[0] = v_151;
v_102:
    v_151 = stack[-7];
    v_152 = static_cast<LispObject>(static_cast<std::intptr_t>(v_151) - 0x10);
    v_151 = stack[0];
    v_151 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_152) - static_cast<std::uintptr_t>(v_151) + TAG_FIXNUM);
    v_151 = (static_cast<std::intptr_t>(v_151) < 0 ? lisp_true : nil);
    if (v_151 == nil) goto v_107;
    goto v_101;
v_107:
    v_152 = stack[-9];
    v_151 = stack[0];
    v_152 = Lgetv(nil, v_152, v_151);
    env = stack[-11];
    v_151 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_152 == v_151) goto v_117;
    v_151 = basic_elt(env, 3); // "Quotient not exact in quotfail!-in!-vector"
    {   LispObject fn = basic_elt(env, 4); // errorf
    v_151 = (*qfn1(fn))(fn, v_151);
    }
    env = stack[-11];
    goto v_115;
v_117:
v_115:
    v_151 = stack[0];
    v_151 = static_cast<LispObject>(static_cast<std::intptr_t>(v_151) + 0x10);
    stack[0] = v_151;
    goto v_102;
v_101:
    v_151 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-2] = v_151;
v_129:
    v_152 = stack[-10];
    v_151 = stack[-2];
    v_151 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_152) - static_cast<std::uintptr_t>(v_151) + TAG_FIXNUM);
    v_151 = (static_cast<std::intptr_t>(v_151) < 0 ? lisp_true : nil);
    if (v_151 == nil) goto v_134;
    goto v_128;
v_134:
    stack[-1] = stack[-9];
    stack[0] = stack[-2];
    v_153 = stack[-9];
    v_152 = stack[-7];
    v_151 = stack[-2];
    v_151 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_152) + static_cast<std::uintptr_t>(v_151) - TAG_FIXNUM);
    v_151 = Lgetv(nil, v_153, v_151);
    env = stack[-11];
    v_151 = Lputv(nil, stack[-1], stack[0], v_151);
    env = stack[-11];
    v_151 = stack[-2];
    v_151 = static_cast<LispObject>(static_cast<std::intptr_t>(v_151) + 0x10);
    stack[-2] = v_151;
    goto v_129;
v_128:
    v_151 = stack[-10];
    goto v_8;
    v_151 = nil;
v_8:
    return onevalue(v_151);
}



// Code for subsublis

static LispObject CC_subsublis(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_155, v_156, v_157;
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
    stack[-3] = v_2;
// end of prologue
v_1:
    v_156 = stack[0];
    v_155 = stack[-3];
    v_155 = Lassoc(nil, v_156, v_155);
    v_157 = v_155;
    if (v_155 == nil) goto v_11;
    v_155 = v_157;
    if (!car_legal(v_155)) v_155 = cdrerror(v_155); else
    v_155 = cdr(v_155);
    goto v_9;
v_11:
    v_156 = stack[0];
    v_155 = basic_elt(env, 1); // sqrt
    if (!consp(v_156)) goto v_22;
    v_156 = car(v_156);
    if (v_156 == v_155) goto v_21;
    else goto v_22;
v_21:
    v_157 = basic_elt(env, 2); // expt
    v_155 = stack[0];
    if (!car_legal(v_155)) v_155 = cdrerror(v_155); else
    v_155 = cdr(v_155);
    if (!car_legal(v_155)) v_156 = carerror(v_155); else
    v_156 = car(v_155);
    v_155 = basic_elt(env, 3); // (quotient 1 2)
    v_156 = list3(v_157, v_156, v_155);
    env = stack[-5];
    v_155 = stack[-3];
    v_155 = Lassoc(nil, v_156, v_155);
    v_157 = v_155;
    goto v_20;
v_22:
    v_155 = nil;
    goto v_20;
    v_155 = nil;
v_20:
    if (v_155 == nil) goto v_18;
    v_155 = v_157;
    if (!car_legal(v_155)) v_155 = cdrerror(v_155); else
    v_155 = cdr(v_155);
    goto v_9;
v_18:
    v_155 = stack[0];
    if (!consp(v_155)) goto v_39;
    else goto v_40;
v_39:
    v_155 = stack[0];
    goto v_9;
v_40:
    v_155 = stack[0];
    if (!car_legal(v_155)) v_155 = carerror(v_155); else
    v_155 = car(v_155);
    if (symbolp(v_155)) goto v_44;
    v_155 = stack[0];
    stack[-4] = v_155;
    v_155 = stack[-4];
    if (v_155 == nil) goto v_56;
    else goto v_57;
v_56:
    v_155 = nil;
    goto v_51;
v_57:
    v_155 = stack[-4];
    if (!car_legal(v_155)) v_155 = carerror(v_155); else
    v_155 = car(v_155);
    v_156 = stack[-3];
    {   LispObject fn = basic_elt(env, 0); // subsublis
    v_155 = (*qfn2(fn))(fn, v_156, v_155);
    }
    env = stack[-5];
    v_155 = ncons(v_155);
    env = stack[-5];
    stack[-1] = v_155;
    stack[-2] = v_155;
v_52:
    v_155 = stack[-4];
    if (!car_legal(v_155)) v_155 = cdrerror(v_155); else
    v_155 = cdr(v_155);
    stack[-4] = v_155;
    v_155 = stack[-4];
    if (v_155 == nil) goto v_71;
    else goto v_72;
v_71:
    v_155 = stack[-2];
    goto v_51;
v_72:
    stack[0] = stack[-1];
    v_155 = stack[-4];
    if (!car_legal(v_155)) v_155 = carerror(v_155); else
    v_155 = car(v_155);
    v_156 = stack[-3];
    {   LispObject fn = basic_elt(env, 0); // subsublis
    v_155 = (*qfn2(fn))(fn, v_156, v_155);
    }
    env = stack[-5];
    v_155 = ncons(v_155);
    env = stack[-5];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_155);
    v_155 = stack[-1];
    if (!car_legal(v_155)) v_155 = cdrerror(v_155); else
    v_155 = cdr(v_155);
    stack[-1] = v_155;
    goto v_52;
v_51:
    goto v_9;
v_44:
    v_155 = stack[0];
    if (!car_legal(v_155)) v_156 = carerror(v_155); else
    v_156 = car(v_155);
    v_155 = basic_elt(env, 4); // subfunc
    v_155 = get(v_156, v_155);
    env = stack[-5];
    v_157 = v_155;
    if (v_155 == nil) goto v_87;
    v_156 = stack[-3];
    v_155 = stack[0];
        return Lapply2(nil, v_157, v_156, v_155);
v_87:
    v_155 = stack[0];
    if (!car_legal(v_155)) v_155 = carerror(v_155); else
    v_155 = car(v_155);
    if (!symbolp(v_155)) v_155 = nil;
    else { v_155 = qfastgets(v_155);
           if (v_155 != nil) { v_155 = elt(v_155, 8); // dname
#ifdef RECORD_GET
             if (v_155 != SPID_NOPROP)
                record_get(elt(fastget_names, 8), 1);
             else record_get(elt(fastget_names, 8), 0),
                v_155 = nil; }
           else record_get(elt(fastget_names, 8), 0); }
#else
             if (v_155 == SPID_NOPROP) v_155 = nil; }}
#endif
    if (v_155 == nil) goto v_97;
    v_155 = stack[0];
    goto v_9;
v_97:
    v_155 = stack[0];
    if (!car_legal(v_155)) v_156 = carerror(v_155); else
    v_156 = car(v_155);
    v_155 = basic_elt(env, 5); // !*sq
    if (v_156 == v_155) goto v_102;
    else goto v_103;
v_102:
    stack[-1] = stack[-3];
    v_155 = stack[0];
    if (!car_legal(v_155)) v_155 = cdrerror(v_155); else
    v_155 = cdr(v_155);
    if (!car_legal(v_155)) v_155 = carerror(v_155); else
    v_155 = car(v_155);
    {   LispObject fn = basic_elt(env, 6); // prepsq
    v_155 = (*qfn1(fn))(fn, v_155);
    }
    env = stack[-5];
    stack[-3] = stack[-1];
    stack[0] = v_155;
    goto v_1;
v_103:
    v_155 = stack[0];
    stack[-4] = v_155;
    v_155 = stack[-4];
    if (v_155 == nil) goto v_124;
    else goto v_125;
v_124:
    v_155 = nil;
    goto v_119;
v_125:
    v_155 = stack[-4];
    if (!car_legal(v_155)) v_155 = carerror(v_155); else
    v_155 = car(v_155);
    v_156 = stack[-3];
    {   LispObject fn = basic_elt(env, 0); // subsublis
    v_155 = (*qfn2(fn))(fn, v_156, v_155);
    }
    env = stack[-5];
    v_155 = ncons(v_155);
    env = stack[-5];
    stack[-1] = v_155;
    stack[-2] = v_155;
v_120:
    v_155 = stack[-4];
    if (!car_legal(v_155)) v_155 = cdrerror(v_155); else
    v_155 = cdr(v_155);
    stack[-4] = v_155;
    v_155 = stack[-4];
    if (v_155 == nil) goto v_139;
    else goto v_140;
v_139:
    v_155 = stack[-2];
    goto v_119;
v_140:
    stack[0] = stack[-1];
    v_155 = stack[-4];
    if (!car_legal(v_155)) v_155 = carerror(v_155); else
    v_155 = car(v_155);
    v_156 = stack[-3];
    {   LispObject fn = basic_elt(env, 0); // subsublis
    v_155 = (*qfn2(fn))(fn, v_156, v_155);
    }
    env = stack[-5];
    v_155 = ncons(v_155);
    env = stack[-5];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_155);
    v_155 = stack[-1];
    if (!car_legal(v_155)) v_155 = cdrerror(v_155); else
    v_155 = cdr(v_155);
    stack[-1] = v_155;
    goto v_120;
v_119:
    goto v_9;
    v_155 = nil;
v_9:
    v_157 = v_155;
    v_155 = v_157;
    return onevalue(v_155);
}



// Code for homogp

static LispObject CC_homogp(LispObject env,
                         LispObject v_2)
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
    v_86 = stack[0];
    if (!consp(v_86)) goto v_14;
    else goto v_15;
v_14:
    v_86 = lisp_true;
    goto v_13;
v_15:
    v_86 = stack[0];
    if (!car_legal(v_86)) v_86 = carerror(v_86); else
    v_86 = car(v_86);
    v_86 = (consp(v_86) ? nil : lisp_true);
    goto v_13;
    v_86 = nil;
v_13:
    if (v_86 == nil) goto v_11;
    v_86 = lisp_true;
    goto v_9;
v_11:
    v_86 = stack[0];
    if (!car_legal(v_86)) v_86 = carerror(v_86); else
    v_86 = car(v_86);
    if (!consp(v_86)) goto v_28;
    else goto v_29;
v_28:
    v_86 = lisp_true;
    goto v_27;
v_29:
    v_86 = stack[0];
    if (!car_legal(v_86)) v_86 = carerror(v_86); else
    v_86 = car(v_86);
    if (!car_legal(v_86)) v_86 = carerror(v_86); else
    v_86 = car(v_86);
    v_86 = (consp(v_86) ? nil : lisp_true);
    goto v_27;
    v_86 = nil;
v_27:
    goto v_9;
    v_86 = nil;
v_9:
    if (v_86 == nil) goto v_7;
    v_86 = nil;
    goto v_5;
v_7:
    v_86 = stack[0];
    if (!car_legal(v_86)) v_86 = cdrerror(v_86); else
    v_86 = cdr(v_86);
    if (!car_legal(v_86)) v_86 = carerror(v_86); else
    v_86 = car(v_86);
    if (!car_legal(v_86)) v_86 = cdrerror(v_86); else
    v_86 = cdr(v_86);
    if (v_86 == nil) goto v_40;
    else goto v_41;
v_40:
    v_86 = nil;
    goto v_5;
v_41:
    v_86 = stack[0];
    if (!car_legal(v_86)) v_86 = cdrerror(v_86); else
    v_86 = cdr(v_86);
    if (!car_legal(v_86)) v_86 = carerror(v_86); else
    v_86 = car(v_86);
    {   LispObject fn = basic_elt(env, 1); // lastnondomain
    v_86 = (*qfn1(fn))(fn, v_86);
    }
    env = stack[-2];
    if (!car_legal(v_86)) v_86 = cdrerror(v_86); else
    v_86 = cdr(v_86);
    v_87 = v_86;
    v_86 = v_87;
    if (!consp(v_86)) goto v_57;
    else goto v_58;
v_57:
    v_86 = lisp_true;
    goto v_56;
v_58:
    v_86 = v_87;
    if (!car_legal(v_86)) v_86 = carerror(v_86); else
    v_86 = car(v_86);
    v_86 = (consp(v_86) ? nil : lisp_true);
    goto v_56;
    v_86 = nil;
v_56:
    if (v_86 == nil) goto v_48;
    v_86 = nil;
    goto v_5;
v_48:
    v_86 = stack[0];
    if (!car_legal(v_86)) v_86 = cdrerror(v_86); else
    v_86 = cdr(v_86);
    if (!car_legal(v_86)) v_86 = carerror(v_86); else
    v_86 = car(v_86);
    if (!car_legal(v_86)) v_86 = carerror(v_86); else
    v_86 = car(v_86);
    if (!car_legal(v_86)) v_86 = carerror(v_86); else
    v_86 = car(v_86);
    {   LispObject fn = basic_elt(env, 2); // listsum
    stack[-1] = (*qfn1(fn))(fn, v_86);
    }
    env = stack[-2];
    v_86 = stack[0];
    if (!car_legal(v_86)) v_86 = cdrerror(v_86); else
    v_86 = cdr(v_86);
    if (!car_legal(v_86)) v_86 = carerror(v_86); else
    v_86 = car(v_86);
    {   LispObject fn = basic_elt(env, 1); // lastnondomain
    v_86 = (*qfn1(fn))(fn, v_86);
    }
    env = stack[-2];
    if (!car_legal(v_86)) v_86 = carerror(v_86); else
    v_86 = car(v_86);
    if (!car_legal(v_86)) v_86 = carerror(v_86); else
    v_86 = car(v_86);
    {   LispObject fn = basic_elt(env, 2); // listsum
    v_86 = (*qfn1(fn))(fn, v_86);
    }
    if (equal(stack[-1], v_86)) goto v_67;
    else goto v_68;
v_67:
    v_86 = lisp_true;
    goto v_5;
v_68:
    v_86 = nil;
    goto v_5;
    v_86 = nil;
v_5:
    return onevalue(v_86);
}



// Code for unaryrd

static LispObject CC_unaryrd(LispObject env)
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



// Code for inttovec1

static LispObject CC_inttovec1(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_32, v_33;
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
    v_33 = stack[-1];
    v_32 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_33 == v_32) goto v_7;
    else goto v_8;
v_7:
    v_32 = stack[0];
    if (!car_legal(v_32)) v_32 = carerror(v_32); else
    v_32 = car(v_32);
    return ncons(v_32);
v_8:
    v_32 = stack[-1];
    v_33 = sub1(v_32);
    env = stack[-3];
    v_32 = stack[0];
    if (!car_legal(v_32)) v_32 = cdrerror(v_32); else
    v_32 = cdr(v_32);
    {   LispObject fn = basic_elt(env, 1); // inttovec!-solve
    v_32 = (*qfn2(fn))(fn, v_33, v_32);
    }
    env = stack[-3];
    stack[-2] = v_32;
    v_32 = stack[0];
    if (!car_legal(v_32)) v_33 = carerror(v_32); else
    v_33 = car(v_32);
    v_32 = stack[-2];
    if (!car_legal(v_32)) v_32 = carerror(v_32); else
    v_32 = car(v_32);
    stack[0] = difference2(v_33, v_32);
    env = stack[-3];
    v_32 = stack[-1];
    v_33 = sub1(v_32);
    env = stack[-3];
    v_32 = stack[-2];
    {   LispObject fn = basic_elt(env, 0); // inttovec1
    v_32 = (*qfn2(fn))(fn, v_33, v_32);
    }
    {
        LispObject v_37 = stack[0];
        return cons(v_37, v_32);
    }
    v_32 = nil;
    return onevalue(v_32);
}



// Code for mkfortterpri

static LispObject CC_mkfortterpri(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_5;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// end of prologue
    v_5 = basic_elt(env, 1); // fortterpri
    return ncons(v_5);
}



// Code for trwrite

static LispObject CC_trwrite(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_43;
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
    v_43 = stack[0];
    if (!car_legal(v_43)) v_43 = carerror(v_43); else
    v_43 = car(v_43);
    if (!symbolp(v_43)) v_43 = nil;
    else { v_43 = qfastgets(v_43);
           if (v_43 != nil) { v_43 = elt(v_43, 53); // tracing
#ifdef RECORD_GET
             if (v_43 == SPID_NOPROP)
                record_get(elt(fastget_names, 53), 0),
                v_43 = nil;
             else record_get(elt(fastget_names, 53), 1),
                v_43 = lisp_true; }
           else record_get(elt(fastget_names, 53), 0); }
#else
             if (v_43 == SPID_NOPROP) v_43 = nil; else v_43 = lisp_true; }}
#endif
    if (v_43 == nil) goto v_9;
    else goto v_10;
v_9:
    v_43 = nil;
    goto v_6;
v_10:
    v_43 = basic_elt(env, 1); // "**in procedure: "
    v_43 = Lprinc(nil, v_43);
    env = stack[-1];
    v_43 = stack[0];
    if (!car_legal(v_43)) v_43 = carerror(v_43); else
    v_43 = car(v_43);
    v_43 = Lprinc(nil, v_43);
    env = stack[-1];
    v_43 = Lterpri(nil);
    env = stack[-1];
    v_43 = stack[0];
    if (!car_legal(v_43)) v_43 = cdrerror(v_43); else
    v_43 = cdr(v_43);
    stack[0] = v_43;
v_25:
    v_43 = stack[0];
    if (v_43 == nil) goto v_30;
    else goto v_31;
v_30:
    goto v_24;
v_31:
    v_43 = stack[0];
    if (!car_legal(v_43)) v_43 = carerror(v_43); else
    v_43 = car(v_43);
    v_43 = Lprinc(nil, v_43);
    env = stack[-1];
    v_43 = stack[0];
    if (!car_legal(v_43)) v_43 = cdrerror(v_43); else
    v_43 = cdr(v_43);
    stack[0] = v_43;
    goto v_25;
v_24:
    v_43 = Lterpri(nil);
    v_43 = nil;
v_6:
    return onevalue(v_43);
}



// Code for lienjactest

static LispObject CC_lienjactest(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_205, v_206, v_207, v_208;
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(14);
// copy arguments values to proper place
    stack[-11] = v_2;
// end of prologue
    stack[0] = basic_elt(env, 1); // lie_jtest
    v_205 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {   LispObject fn = basic_elt(env, 6); // aeval
    v_205 = (*qfn1(fn))(fn, v_205);
    }
    env = stack[-13];
    {   LispObject fn = basic_elt(env, 7); // setk
    v_205 = (*qfn2(fn))(fn, stack[0], v_205);
    }
    env = stack[-13];
    v_205 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-12] = v_205;
v_13:
    stack[0] = basic_elt(env, 2); // difference
    v_207 = basic_elt(env, 2); // difference
    v_206 = stack[-11];
    v_205 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_205 = list3(v_207, v_206, v_205);
    env = stack[-13];
    {   LispObject fn = basic_elt(env, 8); // aeval!*
    v_206 = (*qfn1(fn))(fn, v_205);
    }
    env = stack[-13];
    v_205 = stack[-12];
    v_205 = list3(stack[0], v_206, v_205);
    env = stack[-13];
    {   LispObject fn = basic_elt(env, 9); // aminusp!:
    v_205 = (*qfn1(fn))(fn, v_205);
    }
    env = stack[-13];
    if (v_205 == nil) goto v_18;
    goto v_12;
v_18:
    v_205 = stack[-12];
    v_205 = add1(v_205);
    env = stack[-13];
    stack[-10] = v_205;
v_32:
    stack[0] = basic_elt(env, 2); // difference
    v_207 = basic_elt(env, 2); // difference
    v_206 = stack[-11];
    v_205 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_205 = list3(v_207, v_206, v_205);
    env = stack[-13];
    {   LispObject fn = basic_elt(env, 8); // aeval!*
    v_206 = (*qfn1(fn))(fn, v_205);
    }
    env = stack[-13];
    v_205 = stack[-10];
    v_205 = list3(stack[0], v_206, v_205);
    env = stack[-13];
    {   LispObject fn = basic_elt(env, 9); // aminusp!:
    v_205 = (*qfn1(fn))(fn, v_205);
    }
    env = stack[-13];
    if (v_205 == nil) goto v_38;
    goto v_31;
v_38:
    v_205 = stack[-10];
    v_205 = add1(v_205);
    env = stack[-13];
    stack[-9] = v_205;
v_52:
    stack[0] = basic_elt(env, 2); // difference
    v_205 = stack[-11];
    {   LispObject fn = basic_elt(env, 8); // aeval!*
    v_206 = (*qfn1(fn))(fn, v_205);
    }
    env = stack[-13];
    v_205 = stack[-9];
    v_205 = list3(stack[0], v_206, v_205);
    env = stack[-13];
    {   LispObject fn = basic_elt(env, 9); // aminusp!:
    v_205 = (*qfn1(fn))(fn, v_205);
    }
    env = stack[-13];
    if (v_205 == nil) goto v_58;
    goto v_51;
v_58:
    v_205 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-8] = v_205;
v_69:
    stack[0] = basic_elt(env, 2); // difference
    v_205 = stack[-11];
    {   LispObject fn = basic_elt(env, 8); // aeval!*
    v_206 = (*qfn1(fn))(fn, v_205);
    }
    env = stack[-13];
    v_205 = stack[-8];
    v_205 = list3(stack[0], v_206, v_205);
    env = stack[-13];
    {   LispObject fn = basic_elt(env, 9); // aminusp!:
    v_205 = (*qfn1(fn))(fn, v_205);
    }
    env = stack[-13];
    if (v_205 == nil) goto v_74;
    goto v_68;
v_74:
    v_205 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-7] = v_205;
    v_205 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-6] = v_205;
v_91:
    stack[0] = basic_elt(env, 2); // difference
    v_205 = stack[-11];
    {   LispObject fn = basic_elt(env, 8); // aeval!*
    v_206 = (*qfn1(fn))(fn, v_205);
    }
    env = stack[-13];
    v_205 = stack[-7];
    v_205 = list3(stack[0], v_206, v_205);
    env = stack[-13];
    {   LispObject fn = basic_elt(env, 9); // aminusp!:
    v_205 = (*qfn1(fn))(fn, v_205);
    }
    env = stack[-13];
    if (v_205 == nil) goto v_97;
    v_205 = stack[-6];
    v_206 = v_205;
    goto v_90;
v_97:
    stack[-5] = basic_elt(env, 3); // plus
    stack[-4] = basic_elt(env, 3); // plus
    stack[-1] = basic_elt(env, 4); // times
    v_208 = basic_elt(env, 5); // lie_cc
    v_207 = stack[-10];
    v_206 = stack[-9];
    v_205 = stack[-7];
    stack[0] = list4(v_208, v_207, v_206, v_205);
    env = stack[-13];
    v_208 = basic_elt(env, 5); // lie_cc
    v_207 = stack[-12];
    v_206 = stack[-7];
    v_205 = stack[-8];
    v_205 = list4(v_208, v_207, v_206, v_205);
    env = stack[-13];
    stack[-3] = list3(stack[-1], stack[0], v_205);
    env = stack[-13];
    stack[-1] = basic_elt(env, 4); // times
    v_208 = basic_elt(env, 5); // lie_cc
    v_207 = stack[-12];
    v_206 = stack[-10];
    v_205 = stack[-7];
    stack[0] = list4(v_208, v_207, v_206, v_205);
    env = stack[-13];
    v_208 = basic_elt(env, 5); // lie_cc
    v_207 = stack[-9];
    v_206 = stack[-7];
    v_205 = stack[-8];
    v_205 = list4(v_208, v_207, v_206, v_205);
    env = stack[-13];
    stack[-2] = list3(stack[-1], stack[0], v_205);
    env = stack[-13];
    stack[-1] = basic_elt(env, 4); // times
    v_208 = basic_elt(env, 5); // lie_cc
    v_207 = stack[-9];
    v_206 = stack[-12];
    v_205 = stack[-7];
    stack[0] = list4(v_208, v_207, v_206, v_205);
    env = stack[-13];
    v_208 = basic_elt(env, 5); // lie_cc
    v_207 = stack[-10];
    v_206 = stack[-7];
    v_205 = stack[-8];
    v_205 = list4(v_208, v_207, v_206, v_205);
    env = stack[-13];
    v_205 = list3(stack[-1], stack[0], v_205);
    env = stack[-13];
    v_205 = list4(stack[-4], stack[-3], stack[-2], v_205);
    env = stack[-13];
    {   LispObject fn = basic_elt(env, 8); // aeval!*
    v_206 = (*qfn1(fn))(fn, v_205);
    }
    env = stack[-13];
    v_205 = stack[-6];
    v_205 = list3(stack[-5], v_206, v_205);
    env = stack[-13];
    {   LispObject fn = basic_elt(env, 8); // aeval!*
    v_205 = (*qfn1(fn))(fn, v_205);
    }
    env = stack[-13];
    stack[-6] = v_205;
    v_205 = stack[-7];
    v_207 = basic_elt(env, 3); // plus
    v_206 = v_205;
    v_205 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_205 = list3(v_207, v_206, v_205);
    env = stack[-13];
    {   LispObject fn = basic_elt(env, 8); // aeval!*
    v_205 = (*qfn1(fn))(fn, v_205);
    }
    env = stack[-13];
    stack[-7] = v_205;
    goto v_91;
v_90:
    v_205 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {   LispObject fn = basic_elt(env, 10); // evalneq
    v_205 = (*qfn2(fn))(fn, v_206, v_205);
    }
    env = stack[-13];
    if (v_205 == nil) goto v_85;
    stack[0] = basic_elt(env, 1); // lie_jtest
    v_205 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 8); // aeval!*
    v_205 = (*qfn1(fn))(fn, v_205);
    }
    env = stack[-13];
    {   LispObject fn = basic_elt(env, 7); // setk
    v_205 = (*qfn2(fn))(fn, stack[0], v_205);
    }
    env = stack[-13];
    v_207 = basic_elt(env, 2); // difference
    v_206 = stack[-11];
    v_205 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_205 = list3(v_207, v_206, v_205);
    env = stack[-13];
    {   LispObject fn = basic_elt(env, 8); // aeval!*
    v_205 = (*qfn1(fn))(fn, v_205);
    }
    env = stack[-13];
    stack[-12] = v_205;
    v_205 = stack[-11];
    {   LispObject fn = basic_elt(env, 8); // aeval!*
    v_205 = (*qfn1(fn))(fn, v_205);
    }
    env = stack[-13];
    stack[-10] = v_205;
    v_207 = basic_elt(env, 3); // plus
    v_206 = stack[-11];
    v_205 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_205 = list3(v_207, v_206, v_205);
    env = stack[-13];
    {   LispObject fn = basic_elt(env, 8); // aeval!*
    v_205 = (*qfn1(fn))(fn, v_205);
    }
    env = stack[-13];
    stack[-9] = v_205;
    v_207 = basic_elt(env, 3); // plus
    v_206 = stack[-11];
    v_205 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_205 = list3(v_207, v_206, v_205);
    env = stack[-13];
    {   LispObject fn = basic_elt(env, 8); // aeval!*
    v_205 = (*qfn1(fn))(fn, v_205);
    }
    env = stack[-13];
    stack[-8] = v_205;
    goto v_83;
v_85:
v_83:
    v_205 = stack[-8];
    v_207 = basic_elt(env, 3); // plus
    v_206 = v_205;
    v_205 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_205 = list3(v_207, v_206, v_205);
    env = stack[-13];
    {   LispObject fn = basic_elt(env, 8); // aeval!*
    v_205 = (*qfn1(fn))(fn, v_205);
    }
    env = stack[-13];
    stack[-8] = v_205;
    goto v_69;
v_68:
    v_205 = stack[-9];
    v_207 = basic_elt(env, 3); // plus
    v_206 = v_205;
    v_205 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_205 = list3(v_207, v_206, v_205);
    env = stack[-13];
    {   LispObject fn = basic_elt(env, 8); // aeval!*
    v_205 = (*qfn1(fn))(fn, v_205);
    }
    env = stack[-13];
    stack[-9] = v_205;
    goto v_52;
v_51:
    v_205 = stack[-10];
    v_207 = basic_elt(env, 3); // plus
    v_206 = v_205;
    v_205 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_205 = list3(v_207, v_206, v_205);
    env = stack[-13];
    {   LispObject fn = basic_elt(env, 8); // aeval!*
    v_205 = (*qfn1(fn))(fn, v_205);
    }
    env = stack[-13];
    stack[-10] = v_205;
    goto v_32;
v_31:
    v_205 = stack[-12];
    v_207 = basic_elt(env, 3); // plus
    v_206 = v_205;
    v_205 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_205 = list3(v_207, v_206, v_205);
    env = stack[-13];
    {   LispObject fn = basic_elt(env, 8); // aeval!*
    v_205 = (*qfn1(fn))(fn, v_205);
    }
    env = stack[-13];
    stack[-12] = v_205;
    goto v_13;
v_12:
    v_205 = nil;
    return onevalue(v_205);
}



setup_type const u22_setup[] =
{
    {"ps:expt-erule",           G0W2,     G1W2,     CC_psTexptKerule,G3W2,G4W2},
    {"setmat",                  G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_setmat},
    {"coordp",                  G0W1,     CC_coordp,G2W1,     G3W1,     G4W1},
    {"indord2",                 G0W2,     G1W2,     CC_indord2,G3W2,    G4W2},
    {"begin11",                 G0W1,     CC_begin11,G2W1,    G3W1,     G4W1},
    {"mv-pow-mv-+",             G0W2,     G1W2,     CC_mvKpowKmvKL,G3W2,G4W2},
    {"moid_member",             G0W2,     G1W2,     CC_moid_member,G3W2,G4W2},
    {"arglist_member",          G0W2,     G1W2,     CC_arglist_member,G3W2,G4W2},
    {"exc",                     G0W2,     G1W2,     CC_exc,   G3W2,     G4W2},
    {"sfto_kexp",               G0W2,     G1W2,     CC_sfto_kexp,G3W2,  G4W2},
    {"gcref_mkgraph",           G0W1,     CC_gcref_mkgraph,G2W1,G3W1,   G4W1},
    {"setqget",                 CC_setqget,G1W0,    G2W0,     G3W0,     G4W0},
    {"ezgcdf1",                 G0W2,     G1W2,     CC_ezgcdf1,G3W2,    G4W2},
    {"talp_eqnrhskernels",      G0W1,     CC_talp_eqnrhskernels,G2W1,G3W1,G4W1},
    {"ctx_new",                 CC_ctx_new,G1W0,    G2W0,     G3W0,     G4W0},
    {"evaluate-mod-p",          G0W3,     G1W3,     G2W3,     CC_evaluateKmodKp,G4W3},
    {"getsetvars",              G0W1,     CC_getsetvars,G2W1, G3W1,     G4W1},
    {"ps:minusp:",              G0W1,     CC_psTminuspT,G2W1, G3W1,     G4W1},
    {"xdegreecheck",            G0W1,     CC_xdegreecheck,G2W1,G3W1,    G4W1},
    {"indordp",                 G0W2,     G1W2,     CC_indordp,G3W2,    G4W2},
    {"symbvarlst",              G0W3,     G1W3,     G2W3,     CC_symbvarlst,G4W3},
    {"mv-domainlist-+",         G0W2,     G1W2,     CC_mvKdomainlistKL,G3W2,G4W2},
    {"qremd",                   G0W2,     G1W2,     CC_qremd, G3W2,     G4W2},
    {"ad_numsort",              G0W1,     CC_ad_numsort,G2W1, G3W1,     G4W1},
    {"lambda_ygm6np4pcqv31",    G0W2,     G1W2,     CC_lambda_ygm6np4pcqv31,G3W2,G4W2},
    {"cde_delete",              G0W2,     G1W2,     CC_cde_delete,G3W2, G4W2},
    {"derivative-mod-p-1",      G0W2,     G1W2,     CC_derivativeKmodKpK1,G3W2,G4W2},
    {"collect_cdrs",            G0W1,     CC_collect_cdrs,G2W1,G3W1,    G4W1},
    {"pasf_simplat1",           G0W2,     G1W2,     CC_pasf_simplat1,G3W2,G4W2},
    {"reln",                    G0W2,     G1W2,     CC_reln,  G3W2,     G4W2},
    {"diffsq",                  G0W2,     G1W2,     CC_diffsq,G3W2,     G4W2},
    {"wedgek2",                 G0W3,     G1W3,     G2W3,     CC_wedgek2,G4W3},
    {"fortexp",                 G0W1,     CC_fortexp,G2W1,    G3W1,     G4W1},
    {"repartf",                 G0W1,     CC_repartf,G2W1,    G3W1,     G4W1},
    {"assert_uninstall1",       G0W1,     CC_assert_uninstall1,G2W1,G3W1,G4W1},
    {"setel1",                  G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_setel1},
    {"fs:times",                G0W2,     G1W2,     CC_fsTtimes,G3W2,   G4W2},
    {"splitlist:",              G0W2,     G1W2,     CC_splitlistT,G3W2, G4W2},
    {"resimpf",                 G0W1,     CC_resimpf,G2W1,    G3W1,     G4W1},
    {"crprcd2",                 G0W2,     G1W2,     CC_crprcd2,G3W2,    G4W2},
    {"aex_mvar",                G0W1,     CC_aex_mvar,G2W1,   G3W1,     G4W1},
    {"**a2s",                   G0W2,     G1W2,     CC_HHa2s, G3W2,     G4W2},
    {"groebcplistsortin1",      G0W2,     G1W2,     CC_groebcplistsortin1,G3W2,G4W2},
    {"bytelist2id",             G0W1,     CC_bytelist2id,G2W1,G3W1,     G4W1},
    {"mktails1",                G0W3,     G1W3,     G2W3,     CC_mktails1,G4W3},
    {"one-entry-listp",         G0W2,     G1W2,     CC_oneKentryKlistp,G3W2,G4W2},
    {"setelv",                  G0W2,     G1W2,     CC_setelv,G3W2,     G4W2},
    {"prepd1",                  G0W1,     CC_prepd1,G2W1,     G3W1,     G4W1},
    {"pst_termnodep",           G0W1,     CC_pst_termnodep,G2W1,G3W1,   G4W1},
    {"ratn",                    G0W1,     CC_ratn,  G2W1,     G3W1,     G4W1},
    {"quotfail-in-vector",      G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_quotfailKinKvector},
    {"subsublis",               G0W2,     G1W2,     CC_subsublis,G3W2,  G4W2},
    {"homogp",                  G0W1,     CC_homogp,G2W1,     G3W1,     G4W1},
    {"unaryrd",                 CC_unaryrd,G1W0,    G2W0,     G3W0,     G4W0},
    {"inttovec1",               G0W2,     G1W2,     CC_inttovec1,G3W2,  G4W2},
    {"mkfortterpri",            CC_mkfortterpri,G1W0,G2W0,    G3W0,     G4W0},
    {"trwrite",                 G0W1,     CC_trwrite,G2W1,    G3W1,     G4W1},
    {"lienjactest",             G0W1,     CC_lienjactest,G2W1,G3W1,     G4W1},
    {nullptr, 
        reinterpret_cast<no_args *>(
            reinterpret_cast<uintptr_t>("u22")),
        reinterpret_cast<one_arg *>(
            reinterpret_cast<uintptr_t>("115631 7526481 6375096")),
        nullptr, nullptr, nullptr}
};

// end of generated code
