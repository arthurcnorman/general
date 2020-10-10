
// $destdir/u16.c        Machine generated C code

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


// Code for use!-berlekamp

static LispObject CC_useKberlekamp(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_200, v_201, v_202;
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
    v_200 = qvalue(basic_elt(env, 1)); // dpoly
    v_200 = static_cast<LispObject>(static_cast<std::intptr_t>(v_200) - 0x10);
    stack[-8] = v_200;
    v_200 = stack[-8];
    v_200 = Lmkvect(nil, v_200);
    env = stack[-13];
    stack[-12] = v_200;
    v_200 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-1] = v_200;
v_20:
    v_201 = stack[-8];
    v_200 = stack[-1];
    v_200 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_201) - static_cast<std::uintptr_t>(v_200) + TAG_FIXNUM);
    v_200 = (static_cast<std::intptr_t>(v_200) < 0 ? lisp_true : nil);
    if (v_200 == nil) goto v_25;
    goto v_19;
v_25:
    v_200 = stack[-8];
    v_200 = Lmkvect(nil, v_200);
    env = stack[-13];
    stack[-2] = v_200;
    v_200 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[0] = v_200;
v_36:
    v_201 = stack[-8];
    v_200 = stack[0];
    v_200 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_201) - static_cast<std::uintptr_t>(v_200) + TAG_FIXNUM);
    v_200 = (static_cast<std::intptr_t>(v_200) < 0 ? lisp_true : nil);
    if (v_200 == nil) goto v_41;
    goto v_35;
v_41:
    v_202 = stack[-2];
    v_201 = stack[0];
    v_200 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_200 = Lputv(nil, v_202, v_201, v_200);
    env = stack[-13];
    v_200 = stack[0];
    v_200 = static_cast<LispObject>(static_cast<std::intptr_t>(v_200) + 0x10);
    stack[0] = v_200;
    goto v_36;
v_35:
    v_202 = stack[-12];
    v_201 = stack[-1];
    v_200 = stack[-2];
    v_200 = Lputv(nil, v_202, v_201, v_200);
    env = stack[-13];
    v_200 = stack[-1];
    v_200 = static_cast<LispObject>(static_cast<std::intptr_t>(v_200) + 0x10);
    stack[-1] = v_200;
    goto v_20;
v_19:
    stack[-1] = stack[-11];
    stack[-2] = stack[-10];
    stack[0] = qvalue(basic_elt(env, 2)); // poly!-vector
    v_200 = qvalue(basic_elt(env, 1)); // dpoly
    v_200 = ncons(v_200);
    env = stack[-13];
    {   LispObject fn = basic_elt(env, 4); // remainder!-in!-vector
    v_200 = (*qfn4up(fn))(fn, stack[-1], stack[-2], stack[0], v_200);
    }
    env = stack[-13];
    stack[-10] = v_200;
    v_200 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-7] = v_200;
    v_200 = stack[-8];
    v_200 = Lmkvect(nil, v_200);
    env = stack[-13];
    stack[-6] = v_200;
    v_202 = stack[-6];
    v_201 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_200 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_200 = Lputv(nil, v_202, v_201, v_200);
    env = stack[-13];
    v_200 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-5] = v_200;
v_75:
    v_201 = stack[-8];
    v_200 = stack[-5];
    v_200 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_201) - static_cast<std::uintptr_t>(v_200) + TAG_FIXNUM);
    v_200 = (static_cast<std::intptr_t>(v_200) < 0 ? lisp_true : nil);
    if (v_200 == nil) goto v_80;
    goto v_74;
v_80:
    v_201 = qvalue(basic_elt(env, 3)); // current!-modulus
    v_200 = qvalue(basic_elt(env, 1)); // dpoly
    if ((static_cast<std::intptr_t>(v_201) > static_cast<std::intptr_t>(v_200))) goto v_88;
    else goto v_89;
v_88:
    stack[-1] = stack[-6];
    stack[-2] = stack[-7];
    stack[0] = stack[-11];
    v_201 = stack[-10];
    v_200 = stack[-9];
    v_200 = list2(v_201, v_200);
    env = stack[-13];
    {   LispObject fn = basic_elt(env, 5); // times!-in!-vector
    v_200 = (*qfn4up(fn))(fn, stack[-1], stack[-2], stack[0], v_200);
    }
    env = stack[-13];
    stack[-7] = v_200;
    goto v_87;
v_89:
    v_200 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[0] = v_200;
v_104:
    v_200 = qvalue(basic_elt(env, 3)); // current!-modulus
    v_201 = static_cast<LispObject>(static_cast<std::intptr_t>(v_200) - 0x10);
    v_200 = stack[0];
    v_200 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_201) - static_cast<std::uintptr_t>(v_200) + TAG_FIXNUM);
    v_200 = (static_cast<std::intptr_t>(v_200) < 0 ? lisp_true : nil);
    if (v_200 == nil) goto v_109;
    goto v_103;
v_109:
    v_202 = stack[-9];
    v_201 = stack[0];
    v_200 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_200 = Lputv(nil, v_202, v_201, v_200);
    env = stack[-13];
    v_200 = stack[0];
    v_200 = static_cast<LispObject>(static_cast<std::intptr_t>(v_200) + 0x10);
    stack[0] = v_200;
    goto v_104;
v_103:
    v_200 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-2] = v_200;
v_125:
    v_201 = stack[-7];
    v_200 = stack[-2];
    v_200 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_201) - static_cast<std::uintptr_t>(v_200) + TAG_FIXNUM);
    v_200 = (static_cast<std::intptr_t>(v_200) < 0 ? lisp_true : nil);
    if (v_200 == nil) goto v_130;
    goto v_124;
v_130:
    stack[-1] = stack[-9];
    v_201 = qvalue(basic_elt(env, 3)); // current!-modulus
    v_200 = stack[-2];
    stack[0] = static_cast<LispObject>(static_cast<std::uintptr_t>(v_201) + static_cast<std::uintptr_t>(v_200) - TAG_FIXNUM);
    v_201 = stack[-6];
    v_200 = stack[-2];
    v_200 = Lgetv(nil, v_201, v_200);
    env = stack[-13];
    v_200 = Lputv(nil, stack[-1], stack[0], v_200);
    env = stack[-13];
    v_200 = stack[-2];
    v_200 = static_cast<LispObject>(static_cast<std::intptr_t>(v_200) + 0x10);
    stack[-2] = v_200;
    goto v_125;
v_124:
    v_201 = stack[-7];
    v_200 = qvalue(basic_elt(env, 3)); // current!-modulus
    v_200 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_201) + static_cast<std::uintptr_t>(v_200) - TAG_FIXNUM);
    stack[-7] = v_200;
    goto v_87;
v_87:
    stack[-1] = stack[-9];
    stack[-2] = stack[-7];
    stack[0] = qvalue(basic_elt(env, 2)); // poly!-vector
    v_200 = qvalue(basic_elt(env, 1)); // dpoly
    v_200 = ncons(v_200);
    env = stack[-13];
    {   LispObject fn = basic_elt(env, 4); // remainder!-in!-vector
    v_200 = (*qfn4up(fn))(fn, stack[-1], stack[-2], stack[0], v_200);
    }
    env = stack[-13];
    stack[-7] = v_200;
    v_200 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-4] = v_200;
v_158:
    v_201 = stack[-7];
    v_200 = stack[-4];
    v_200 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_201) - static_cast<std::uintptr_t>(v_200) + TAG_FIXNUM);
    v_200 = (static_cast<std::intptr_t>(v_200) < 0 ? lisp_true : nil);
    if (v_200 == nil) goto v_163;
    goto v_157;
v_163:
    v_201 = stack[-12];
    v_200 = stack[-4];
    stack[-3] = Lgetv(nil, v_201, v_200);
    env = stack[-13];
    stack[-2] = stack[-5];
    stack[-1] = stack[-6];
    stack[0] = stack[-4];
    v_201 = stack[-9];
    v_200 = stack[-4];
    v_200 = Lgetv(nil, v_201, v_200);
    env = stack[-13];
    v_200 = Lputv(nil, stack[-1], stack[0], v_200);
    env = stack[-13];
    v_200 = Lputv(nil, stack[-3], stack[-2], v_200);
    env = stack[-13];
    v_200 = stack[-4];
    v_200 = static_cast<LispObject>(static_cast<std::intptr_t>(v_200) + 0x10);
    stack[-4] = v_200;
    goto v_158;
v_157:
    v_201 = stack[-12];
    v_200 = stack[-5];
    stack[-1] = Lgetv(nil, v_201, v_200);
    env = stack[-13];
    stack[0] = stack[-5];
    v_201 = stack[-12];
    v_200 = stack[-5];
    v_201 = Lgetv(nil, v_201, v_200);
    env = stack[-13];
    v_200 = stack[-5];
    v_201 = Lgetv(nil, v_201, v_200);
    env = stack[-13];
    v_200 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   std::intptr_t w = int_of_fixnum(v_201) - int_of_fixnum(v_200);
        if (w < 0) w += current_modulus;
        v_200 = fixnum_of_int(w);
    }
    v_200 = Lputv(nil, stack[-1], stack[0], v_200);
    env = stack[-13];
    v_200 = stack[-5];
    v_200 = static_cast<LispObject>(static_cast<std::intptr_t>(v_200) + 0x10);
    stack[-5] = v_200;
    goto v_75;
v_74:
    v_201 = stack[-12];
    v_200 = stack[-8];
    {
        LispObject fn = basic_elt(env, 6); // find!-null!-space
        return (*qfn2(fn))(fn, v_201, v_200);
    }
    return onevalue(v_200);
}



// Code for rread1

static LispObject CC_rread1(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    push(nil, nil);
    stack_popper stack_popper_var(3);
// end of prologue
    {   LispObject fn = basic_elt(env, 13); // ptoken
    v_94 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
    stack[-1] = v_94;
    v_95 = qvalue(basic_elt(env, 1)); // ttype!*
    v_94 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    if (v_95 == v_94) goto v_11;
    v_94 = stack[-1];
    if (symbolp(v_94)) goto v_16;
    else goto v_17;
v_16:
    v_94 = qvalue(basic_elt(env, 2)); // !*quotenewnam
    if (v_94 == nil) goto v_22;
    v_95 = stack[-1];
    v_94 = basic_elt(env, 3); // quotenewnam
    v_94 = get(v_95, v_94);
    stack[0] = v_94;
    if (v_94 == nil) goto v_22;
    v_94 = stack[0];
    goto v_20;
v_22:
    v_94 = stack[-1];
    goto v_20;
    v_94 = nil;
v_20:
    goto v_15;
v_17:
    v_95 = stack[-1];
    v_94 = basic_elt(env, 4); // !:dn!:
    if (!consp(v_95)) goto v_34;
    v_95 = car(v_95);
    if (v_95 == v_94) goto v_33;
    else goto v_34;
v_33:
    v_96 = stack[-1];
    v_95 = nil;
    v_94 = basic_elt(env, 5); // symbolic
    {
        LispObject fn = basic_elt(env, 14); // dnform
        return (*qfn3(fn))(fn, v_96, v_95, v_94);
    }
v_34:
    v_94 = stack[-1];
    goto v_15;
    v_94 = nil;
v_15:
    goto v_6;
v_11:
    v_95 = stack[-1];
    v_94 = basic_elt(env, 6); // !(
    if (v_95 == v_94) goto v_45;
    else goto v_46;
v_45:
    {
        LispObject fn = basic_elt(env, 15); // rrdls
        return (*qfn0(fn))(fn);
    }
v_46:
    v_95 = stack[-1];
    v_94 = basic_elt(env, 7); // !+
    if (v_95 == v_94) goto v_54;
    else goto v_55;
v_54:
    v_94 = lisp_true;
    goto v_53;
v_55:
    v_95 = stack[-1];
    v_94 = basic_elt(env, 8); // !-
    v_94 = (v_95 == v_94 ? lisp_true : nil);
    goto v_53;
    v_94 = nil;
v_53:
    if (v_94 == nil) goto v_50;
    else goto v_51;
v_50:
    v_94 = stack[-1];
    goto v_6;
v_51:
    {   LispObject fn = basic_elt(env, 13); // ptoken
    v_94 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
    stack[0] = v_94;
    v_95 = stack[0];
    v_94 = basic_elt(env, 4); // !:dn!:
    if (!consp(v_95)) goto v_69;
    v_95 = car(v_95);
    if (v_95 == v_94) goto v_68;
    else goto v_69;
v_68:
    v_96 = stack[0];
    v_95 = nil;
    v_94 = basic_elt(env, 5); // symbolic
    {   LispObject fn = basic_elt(env, 14); // dnform
    v_94 = (*qfn3(fn))(fn, v_96, v_95, v_94);
    }
    env = stack[-2];
    stack[0] = v_94;
    goto v_67;
v_69:
v_67:
    v_94 = stack[0];
    if (is_number(v_94)) goto v_80;
    v_94 = basic_elt(env, 9); // " "
    setvalue(basic_elt(env, 10), v_94); // nxtsym!*
    v_95 = basic_elt(env, 11); // "Syntax error: improper number"
    v_94 = nil;
    {   LispObject fn = basic_elt(env, 16); // symerr
    v_94 = (*qfn2(fn))(fn, v_95, v_94);
    }
    goto v_78;
v_80:
    v_95 = stack[-1];
    v_94 = basic_elt(env, 8); // !-
    if (v_95 == v_94) goto v_86;
    else goto v_87;
v_86:
    v_95 = basic_elt(env, 12); // minus
    v_94 = stack[0];
    v_94 = Lapply1(nil, v_95, v_94);
    stack[0] = v_94;
    goto v_78;
v_87:
v_78:
    v_94 = stack[0];
v_6:
    return onevalue(v_94);
}



// Code for aex_mvartest

static LispObject CC_aex_mvartest(LispObject env,
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
    stack[0] = v_3;
    v_10 = v_2;
// end of prologue
    {   LispObject fn = basic_elt(env, 1); // aex_ex
    v_10 = (*qfn1(fn))(fn, v_10);
    }
    env = stack[-1];
    if (!car_legal(v_10)) v_11 = carerror(v_10); else
    v_11 = car(v_10);
    v_10 = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // sfto_mvartest
        return (*qfn2(fn))(fn, v_11, v_10);
    }
}



// Code for idsort

static LispObject CC_idsort(LispObject env,
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
    v_7 = basic_elt(env, 1); // idcompare
    {
        LispObject fn = basic_elt(env, 2); // sort
        return (*qfn2(fn))(fn, v_8, v_7);
    }
}



// Code for talp_subalchk

static LispObject CC_talp_subalchk(LispObject env,
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



// Code for qqe_ofsf_chsimpterm

static LispObject CC_qqe_ofsf_chsimpterm(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_80, v_81;
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
    v_81 = v_2;
// end of prologue
    v_80 = v_81;
    if (!consp(v_80)) goto v_9;
    else goto v_10;
v_9:
    v_80 = v_81;
    goto v_6;
v_10:
    v_80 = v_81;
    if (!car_legal(v_80)) v_80 = cdrerror(v_80); else
    v_80 = cdr(v_80);
    stack[-1] = v_80;
v_19:
    v_80 = stack[-1];
    if (v_80 == nil) goto v_22;
    else goto v_23;
v_22:
    goto v_18;
v_23:
    v_80 = stack[-1];
    if (!car_legal(v_80)) v_80 = carerror(v_80); else
    v_80 = car(v_80);
    v_80 = Lconsp(nil, v_80);
    env = stack[-2];
    if (v_80 == nil) goto v_29;
    v_80 = stack[-1];
    if (!car_legal(v_80)) v_80 = carerror(v_80); else
    v_80 = car(v_80);
    {   LispObject fn = basic_elt(env, 3); // qqe_op
    v_81 = (*qfn1(fn))(fn, v_80);
    }
    env = stack[-2];
    v_80 = basic_elt(env, 1); // expt
    if (v_81 == v_80) goto v_37;
    else goto v_38;
v_37:
    v_80 = stack[-1];
    if (!car_legal(v_80)) v_80 = carerror(v_80); else
    v_80 = car(v_80);
    {   LispObject fn = basic_elt(env, 4); // qqe_arg2l
    v_80 = (*qfn1(fn))(fn, v_80);
    }
    env = stack[-2];
    v_80 = Lconsp(nil, v_80);
    env = stack[-2];
    if (v_80 == nil) goto v_45;
    else goto v_46;
v_45:
    v_80 = nil;
    goto v_44;
v_46:
    v_80 = stack[-1];
    if (!car_legal(v_80)) v_80 = carerror(v_80); else
    v_80 = car(v_80);
    {   LispObject fn = basic_elt(env, 4); // qqe_arg2l
    v_80 = (*qfn1(fn))(fn, v_80);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // qqe_op
    v_81 = (*qfn1(fn))(fn, v_80);
    }
    env = stack[-2];
    v_80 = basic_elt(env, 2); // (ltail rtail)
    v_80 = Lmemq(nil, v_81, v_80);
    goto v_44;
    v_80 = nil;
v_44:
    goto v_36;
v_38:
    v_80 = nil;
    goto v_36;
    v_80 = nil;
v_36:
    if (v_80 == nil) goto v_29;
    stack[0] = stack[-1];
    v_80 = stack[-1];
    if (!car_legal(v_80)) v_80 = carerror(v_80); else
    v_80 = car(v_80);
    {   LispObject fn = basic_elt(env, 5); // qqe_chsimpterm
    v_80 = (*qfn1(fn))(fn, v_80);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 6); // setcar
    v_80 = (*qfn2(fn))(fn, stack[0], v_80);
    }
    env = stack[-2];
    goto v_27;
v_29:
    v_80 = stack[-1];
    if (!car_legal(v_80)) v_80 = carerror(v_80); else
    v_80 = car(v_80);
    v_80 = Lconsp(nil, v_80);
    env = stack[-2];
    if (v_80 == nil) goto v_69;
    v_80 = stack[-1];
    if (!car_legal(v_80)) v_80 = carerror(v_80); else
    v_80 = car(v_80);
    {   LispObject fn = basic_elt(env, 0); // qqe_ofsf_chsimpterm
    v_80 = (*qfn1(fn))(fn, v_80);
    }
    env = stack[-2];
    goto v_27;
v_69:
v_27:
    v_80 = stack[-1];
    if (!car_legal(v_80)) v_80 = cdrerror(v_80); else
    v_80 = cdr(v_80);
    stack[-1] = v_80;
    goto v_19;
v_18:
    goto v_8;
v_8:
    v_80 = nil;
v_6:
    return onevalue(v_80);
}



// Code for pasf_sisub!-gand

static LispObject CC_pasf_sisubKgand(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_90, v_91, v_92;
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(9);
// copy arguments values to proper place
    stack[-1] = v_7;
    stack[-2] = v_6;
    stack[-3] = v_5;
    stack[-4] = v_4;
    stack[-5] = v_3;
    stack[-6] = v_2;
// end of prologue
    stack[0] = nil;
    v_90 = lisp_true;
    stack[-7] = v_90;
v_18:
    v_90 = stack[-7];
    if (v_90 == nil) goto v_21;
    v_90 = stack[-5];
    if (v_90 == nil) goto v_21;
    goto v_22;
v_21:
    goto v_17;
v_22:
    v_90 = stack[-5];
    if (!car_legal(v_90)) v_90 = carerror(v_90); else
    v_90 = car(v_90);
    v_91 = v_90;
    v_90 = stack[-5];
    if (!car_legal(v_90)) v_90 = cdrerror(v_90); else
    v_90 = cdr(v_90);
    stack[-5] = v_90;
    v_90 = v_91;
    v_92 = v_90;
    v_91 = stack[-4];
    v_90 = stack[-3];
    {   LispObject fn = basic_elt(env, 4); // pasf_sisub
    v_90 = (*qfn3(fn))(fn, v_92, v_91, v_90);
    }
    env = stack[-8];
    v_92 = v_90;
    v_91 = v_92;
    v_90 = stack[-1];
    if (v_91 == v_90) goto v_43;
    else goto v_44;
v_43:
    v_90 = nil;
    stack[-7] = v_90;
    goto v_42;
v_44:
    v_91 = v_92;
    v_90 = stack[-2];
    if (equal(v_91, v_90)) goto v_49;
    v_91 = v_92;
    v_90 = stack[0];
    v_90 = cons(v_91, v_90);
    env = stack[-8];
    stack[0] = v_90;
    goto v_42;
v_49:
v_42:
    goto v_18;
v_17:
    v_90 = stack[-7];
    if (v_90 == nil) goto v_57;
    else goto v_58;
v_57:
    v_90 = stack[-1];
    goto v_14;
v_58:
    v_90 = stack[0];
    if (v_90 == nil) goto v_64;
    v_90 = stack[0];
    if (!car_legal(v_90)) v_90 = cdrerror(v_90); else
    v_90 = cdr(v_90);
    if (v_90 == nil) goto v_64;
    v_91 = stack[-6];
    v_90 = stack[0];
    return cons(v_91, v_90);
v_64:
    v_90 = stack[0];
    if (v_90 == nil) goto v_73;
    else goto v_74;
v_73:
    v_91 = stack[-6];
    v_90 = basic_elt(env, 1); // and
    if (v_91 == v_90) goto v_78;
    else goto v_79;
v_78:
    v_90 = basic_elt(env, 2); // true
    goto v_77;
v_79:
    v_90 = basic_elt(env, 3); // false
    goto v_77;
    v_90 = nil;
v_77:
    goto v_62;
v_74:
    v_90 = stack[0];
    if (!car_legal(v_90)) v_90 = carerror(v_90); else
    v_90 = car(v_90);
    goto v_62;
    v_90 = nil;
v_62:
v_14:
    return onevalue(v_90);
}



// Code for ibalp_negatet

static LispObject CC_ibalp_negatet(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_21, v_22, v_23;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_23 = v_2;
// end of prologue
    v_22 = v_23;
    v_21 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_22 == v_21) goto v_6;
    else goto v_7;
v_6:
    v_21 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_5;
v_7:
    v_22 = v_23;
    v_21 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_22 == v_21) goto v_11;
    else goto v_12;
v_11:
    v_21 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_5;
v_12:
    v_21 = basic_elt(env, 1); // bnot
    v_22 = v_23;
    return list2(v_21, v_22);
    v_21 = nil;
v_5:
    return onevalue(v_21);
}



// Code for mapins

static LispObject CC_mapins(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_30, v_31, v_32;
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
    v_30 = stack[0];
    if (v_30 == nil) goto v_11;
    else goto v_12;
v_11:
    v_30 = stack[-2];
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn1(fn))(fn, v_30);
    }
v_12:
    v_31 = stack[-1];
    v_30 = stack[0];
    if (!car_legal(v_30)) v_30 = carerror(v_30); else
    v_30 = car(v_30);
    if (!car_legal(v_30)) v_30 = carerror(v_30); else
    v_30 = car(v_30);
    v_32 = cons(v_31, v_30);
    env = stack[-3];
    v_30 = stack[0];
    if (!car_legal(v_30)) v_30 = carerror(v_30); else
    v_30 = car(v_30);
    if (!car_legal(v_30)) v_31 = cdrerror(v_30); else
    v_31 = cdr(v_30);
    v_30 = stack[-2];
    v_30 = acons(v_32, v_31, v_30);
    env = stack[-3];
    stack[-2] = v_30;
    v_30 = stack[0];
    if (!car_legal(v_30)) v_30 = cdrerror(v_30); else
    v_30 = cdr(v_30);
    stack[0] = v_30;
    goto v_8;
    v_30 = nil;
    return onevalue(v_30);
}



// Code for cird

static LispObject CC_cird(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_41, v_42, v_43;
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
    v_42 = qvalue(basic_elt(env, 1)); // atts
    v_41 = basic_elt(env, 2); // (type)
    {   LispObject fn = basic_elt(env, 5); // retattributes
    v_41 = (*qfn2(fn))(fn, v_42, v_41);
    }
    env = stack[-2];
    stack[0] = v_41;
    {   LispObject fn = basic_elt(env, 6); // lex
    v_41 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
    v_41 = qvalue(basic_elt(env, 3)); // char
    stack[-1] = v_41;
    {   LispObject fn = basic_elt(env, 6); // lex
    v_41 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
    v_41 = stack[-1];
    v_41 = Lcompress(nil, v_41);
    env = stack[-2];
    v_42 = v_41;
    v_41 = v_42;
    if (is_number(v_41)) goto v_23;
    else goto v_24;
v_23:
    v_41 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    {   LispObject fn = basic_elt(env, 7); // errorml
    v_41 = (*qfn2(fn))(fn, v_42, v_41);
    }
    env = stack[-2];
    goto v_22;
v_24:
v_22:
    v_41 = stack[-1];
    {   LispObject fn = basic_elt(env, 8); // compress!*
    v_41 = (*qfn1(fn))(fn, v_41);
    }
    env = stack[-2];
    v_42 = v_41;
    v_41 = stack[0];
    if (v_41 == nil) goto v_33;
    else goto v_34;
v_33:
    v_41 = v_42;
    goto v_9;
v_34:
    v_43 = basic_elt(env, 4); // ci
    v_41 = stack[0];
    return list3(v_43, v_41, v_42);
v_9:
    return onevalue(v_41);
}



// Code for bsubs

static LispObject CC_bsubs(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_63;
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
    v_63 = stack[0];
    if (v_63 == nil) goto v_6;
    else goto v_7;
v_6:
    v_63 = stack[0];
    goto v_5;
v_7:
    v_63 = stack[0];
    if (!consp(v_63)) goto v_10;
    else goto v_11;
v_10:
    v_63 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // bound
    v_63 = (*qfn1(fn))(fn, v_63);
    }
    env = stack[-4];
    if (v_63 == nil) goto v_16;
    v_63 = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // binding
        return (*qfn1(fn))(fn, v_63);
    }
v_16:
    v_63 = stack[0];
    goto v_14;
    v_63 = nil;
v_14:
    goto v_5;
v_11:
    v_63 = stack[0];
    stack[-3] = v_63;
    v_63 = stack[-3];
    if (v_63 == nil) goto v_35;
    else goto v_36;
v_35:
    v_63 = nil;
    goto v_30;
v_36:
    v_63 = stack[-3];
    if (!car_legal(v_63)) v_63 = carerror(v_63); else
    v_63 = car(v_63);
    {   LispObject fn = basic_elt(env, 0); // bsubs
    v_63 = (*qfn1(fn))(fn, v_63);
    }
    env = stack[-4];
    v_63 = ncons(v_63);
    env = stack[-4];
    stack[-1] = v_63;
    stack[-2] = v_63;
v_31:
    v_63 = stack[-3];
    if (!car_legal(v_63)) v_63 = cdrerror(v_63); else
    v_63 = cdr(v_63);
    stack[-3] = v_63;
    v_63 = stack[-3];
    if (v_63 == nil) goto v_49;
    else goto v_50;
v_49:
    v_63 = stack[-2];
    goto v_30;
v_50:
    stack[0] = stack[-1];
    v_63 = stack[-3];
    if (!car_legal(v_63)) v_63 = carerror(v_63); else
    v_63 = car(v_63);
    {   LispObject fn = basic_elt(env, 0); // bsubs
    v_63 = (*qfn1(fn))(fn, v_63);
    }
    env = stack[-4];
    v_63 = ncons(v_63);
    env = stack[-4];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_63);
    v_63 = stack[-1];
    if (!car_legal(v_63)) v_63 = cdrerror(v_63); else
    v_63 = cdr(v_63);
    stack[-1] = v_63;
    goto v_31;
v_30:
    goto v_5;
    v_63 = nil;
v_5:
    return onevalue(v_63);
}



// Code for wedgepf

static LispObject CC_wedgepf(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // !*pf2wedgepf
    v_10 = (*qfn1(fn))(fn, v_10);
    }
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // wedgepf2
    v_10 = (*qfn2(fn))(fn, stack[0], v_10);
    }
    env = stack[-1];
    {
        LispObject fn = basic_elt(env, 3); // !*wedgepf2pf
        return (*qfn1(fn))(fn, v_10);
    }
}



// Code for all_edge

static LispObject CC_all_edge(LispObject env,
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
    v_32 = stack[0];
    if (v_32 == nil) goto v_11;
    else goto v_12;
v_11:
    v_32 = v_34;
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn1(fn))(fn, v_32);
    }
v_12:
    v_33 = stack[-1];
    v_32 = stack[0];
    if (!car_legal(v_32)) v_32 = carerror(v_32); else
    v_32 = car(v_32);
    if (!car_legal(v_32)) v_32 = carerror(v_32); else
    v_32 = car(v_32);
    if (v_33 == v_32) goto v_16;
    else goto v_17;
v_16:
    v_32 = stack[0];
    if (!car_legal(v_32)) v_32 = carerror(v_32); else
    v_32 = car(v_32);
    v_33 = v_34;
    v_32 = cons(v_32, v_33);
    env = stack[-2];
    v_34 = v_32;
    v_32 = stack[0];
    if (!car_legal(v_32)) v_32 = cdrerror(v_32); else
    v_32 = cdr(v_32);
    stack[0] = v_32;
    goto v_8;
v_17:
    v_32 = stack[0];
    if (!car_legal(v_32)) v_32 = cdrerror(v_32); else
    v_32 = cdr(v_32);
    stack[0] = v_32;
    goto v_8;
    v_32 = nil;
    return onevalue(v_32);
}



// Code for mkid

static LispObject CC_mkid(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_54, v_55;
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
    v_54 = v_2;
// end of prologue
    v_55 = v_54;
    if (symbolp(v_55)) goto v_8;
    v_55 = v_54;
    v_54 = basic_elt(env, 1); // "MKID root"
    {
        LispObject fn = basic_elt(env, 3); // typerr
        return (*qfn2(fn))(fn, v_55, v_54);
    }
v_8:
    v_55 = stack[0];
    if (!consp(v_55)) goto v_17;
    else goto v_18;
v_17:
    v_55 = stack[0];
    v_55 = Lsymbolp(nil, v_55);
    env = stack[-2];
    if (v_55 == nil) goto v_22;
    else goto v_21;
v_22:
    v_55 = stack[0];
    v_55 = integerp(v_55);
    if (v_55 == nil) goto v_27;
    else goto v_28;
v_27:
    v_55 = nil;
    goto v_26;
v_28:
    v_55 = stack[0];
    v_55 = Lminusp(nil, v_55);
    env = stack[-2];
    v_55 = (v_55 == nil ? lisp_true : nil);
    goto v_26;
    v_55 = nil;
v_26:
v_21:
    goto v_16;
v_18:
    v_55 = nil;
    goto v_16;
    v_55 = nil;
v_16:
    if (v_55 == nil) goto v_14;
    {   LispObject fn = basic_elt(env, 4); // get!-print!-name
    v_54 = (*qfn1(fn))(fn, v_54);
    }
    env = stack[-2];
    stack[-1] = Lexplode(nil, v_54);
    env = stack[-2];
    v_54 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // get!-print!-name
    v_54 = (*qfn1(fn))(fn, v_54);
    }
    env = stack[-2];
    v_54 = Lexplode(nil, v_54);
    env = stack[-2];
    v_54 = Lnconc(nil, stack[-1], v_54);
    env = stack[-2];
    v_54 = Lcompress(nil, v_54);
        return Lintern(nil, v_54);
v_14:
    v_55 = stack[0];
    v_54 = basic_elt(env, 2); // "MKID index"
    {
        LispObject fn = basic_elt(env, 3); // typerr
        return (*qfn2(fn))(fn, v_55, v_54);
    }
    v_54 = nil;
    return onevalue(v_54);
}



// Code for mv!-pow!-chk

static LispObject CC_mvKpowKchk(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    v_27 = v_3;
    stack[0] = v_2;
// end of prologue
    v_28 = v_27;
    if (v_28 == nil) goto v_8;
    v_28 = stack[0];
    if (!car_legal(v_28)) v_28 = carerror(v_28); else
    v_28 = car(v_28);
    if (!car_legal(v_28)) v_28 = carerror(v_28); else
    v_28 = car(v_28);
    if (!car_legal(v_27)) v_27 = carerror(v_27); else
    v_27 = car(v_27);
    if (!car_legal(v_27)) v_27 = carerror(v_27); else
    v_27 = car(v_27);
    {   LispObject fn = basic_elt(env, 1); // mv!-pow!-!-
    v_27 = (*qfn2(fn))(fn, v_28, v_27);
    }
    env = stack[-1];
    stack[0] = v_27;
    if (v_27 == nil) goto v_8;
    v_27 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // mv!-pow!-minusp
    v_27 = (*qfn1(fn))(fn, v_27);
    }
    if (v_27 == nil) goto v_20;
    else goto v_8;
v_20:
    v_27 = stack[0];
    goto v_6;
v_8:
    v_27 = nil;
    goto v_6;
    v_27 = nil;
v_6:
    return onevalue(v_27);
}



// Code for dp_neg

static LispObject CC_dp_neg(LispObject env,
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
    stack_popper stack_popper_var(6);
// copy arguments values to proper place
    v_49 = v_2;
// end of prologue
    stack[-4] = v_49;
    v_49 = stack[-4];
    if (v_49 == nil) goto v_13;
    else goto v_14;
v_13:
    v_49 = nil;
    goto v_8;
v_14:
    v_49 = stack[-4];
    if (!car_legal(v_49)) v_49 = carerror(v_49); else
    v_49 = car(v_49);
    v_50 = v_49;
    v_49 = v_50;
    if (!car_legal(v_49)) stack[0] = carerror(v_49); else
    stack[0] = car(v_49);
    v_49 = v_50;
    if (!car_legal(v_49)) v_49 = cdrerror(v_49); else
    v_49 = cdr(v_49);
    {   LispObject fn = basic_elt(env, 1); // cali_bc_neg
    v_49 = (*qfn1(fn))(fn, v_49);
    }
    env = stack[-5];
    v_49 = cons(stack[0], v_49);
    env = stack[-5];
    v_49 = ncons(v_49);
    env = stack[-5];
    stack[-2] = v_49;
    stack[-3] = v_49;
v_9:
    v_49 = stack[-4];
    if (!car_legal(v_49)) v_49 = cdrerror(v_49); else
    v_49 = cdr(v_49);
    stack[-4] = v_49;
    v_49 = stack[-4];
    if (v_49 == nil) goto v_31;
    else goto v_32;
v_31:
    v_49 = stack[-3];
    goto v_8;
v_32:
    stack[-1] = stack[-2];
    v_49 = stack[-4];
    if (!car_legal(v_49)) v_49 = carerror(v_49); else
    v_49 = car(v_49);
    v_50 = v_49;
    v_49 = v_50;
    if (!car_legal(v_49)) stack[0] = carerror(v_49); else
    stack[0] = car(v_49);
    v_49 = v_50;
    if (!car_legal(v_49)) v_49 = cdrerror(v_49); else
    v_49 = cdr(v_49);
    {   LispObject fn = basic_elt(env, 1); // cali_bc_neg
    v_49 = (*qfn1(fn))(fn, v_49);
    }
    env = stack[-5];
    v_49 = cons(stack[0], v_49);
    env = stack[-5];
    v_49 = ncons(v_49);
    env = stack[-5];
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



// Code for pappend

static LispObject CC_pappend(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_57, v_58;
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
    v_57 = stack[-4];
    {   LispObject fn = basic_elt(env, 1); // unpkp
    v_57 = (*qfn1(fn))(fn, v_57);
    }
    env = stack[-6];
    stack[-4] = v_57;
    v_57 = stack[-4];
    v_57 = Llength(nil, v_57);
    env = stack[-6];
    stack[-5] = v_57;
    v_57 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // unpkp
    v_57 = (*qfn1(fn))(fn, v_57);
    }
    env = stack[-6];
    stack[0] = v_57;
    v_57 = stack[0];
    stack[-3] = v_57;
    v_57 = stack[-3];
    if (v_57 == nil) goto v_23;
    else goto v_24;
v_23:
    v_57 = nil;
    goto v_18;
v_24:
    v_57 = stack[-3];
    if (!car_legal(v_57)) v_57 = carerror(v_57); else
    v_57 = car(v_57);
    v_58 = v_57;
    v_57 = stack[-5];
    v_57 = plus2(v_58, v_57);
    env = stack[-6];
    v_57 = ncons(v_57);
    env = stack[-6];
    stack[-1] = v_57;
    stack[-2] = v_57;
v_19:
    v_57 = stack[-3];
    if (!car_legal(v_57)) v_57 = cdrerror(v_57); else
    v_57 = cdr(v_57);
    stack[-3] = v_57;
    v_57 = stack[-3];
    if (v_57 == nil) goto v_38;
    else goto v_39;
v_38:
    v_57 = stack[-2];
    goto v_18;
v_39:
    stack[0] = stack[-1];
    v_57 = stack[-3];
    if (!car_legal(v_57)) v_57 = carerror(v_57); else
    v_57 = car(v_57);
    v_58 = v_57;
    v_57 = stack[-5];
    v_57 = plus2(v_58, v_57);
    env = stack[-6];
    v_57 = ncons(v_57);
    env = stack[-6];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_57);
    v_57 = stack[-1];
    if (!car_legal(v_57)) v_57 = cdrerror(v_57); else
    v_57 = cdr(v_57);
    stack[-1] = v_57;
    goto v_19;
v_18:
    stack[0] = v_57;
    v_58 = stack[-4];
    v_57 = stack[0];
    v_57 = Lappend_2(nil, v_58, v_57);
    env = stack[-6];
    {
        LispObject fn = basic_elt(env, 2); // pkp
        return (*qfn1(fn))(fn, v_57);
    }
    return onevalue(v_57);
}



// Code for b!:extmult

static LispObject CC_bTextmult(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_112, v_113, v_114;
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
    v_112 = stack[-4];
    if (v_112 == nil) goto v_19;
    else goto v_20;
v_19:
    v_112 = lisp_true;
    goto v_18;
v_20:
    v_112 = stack[-3];
    v_112 = (v_112 == nil ? lisp_true : nil);
    goto v_18;
    v_112 = nil;
v_18:
    if (v_112 == nil) goto v_16;
    v_112 = nil;
    stack[0] = v_112;
    goto v_12;
v_16:
    v_113 = stack[-3];
    v_112 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_113 == v_112) goto v_28;
    else goto v_29;
v_28:
    v_112 = stack[-4];
    stack[0] = v_112;
    goto v_12;
v_29:
    v_114 = stack[-4];
    v_113 = stack[-3];
    v_112 = stack[-5];
    v_112 = acons(v_114, v_113, v_112);
    env = stack[-6];
    stack[-5] = v_112;
    v_112 = stack[-4];
    if (!car_legal(v_112)) v_112 = cdrerror(v_112); else
    v_112 = cdr(v_112);
    if (v_112 == nil) goto v_40;
    v_112 = stack[-4];
    if (!car_legal(v_112)) v_112 = carerror(v_112); else
    v_112 = car(v_112);
    v_112 = ncons(v_112);
    env = stack[-6];
    stack[-4] = v_112;
    goto v_38;
v_40:
v_38:
    v_112 = stack[-3];
    if (!car_legal(v_112)) v_112 = cdrerror(v_112); else
    v_112 = cdr(v_112);
    stack[-3] = v_112;
    goto v_11;
v_12:
v_50:
    v_112 = stack[-5];
    if (v_112 == nil) goto v_53;
    else goto v_54;
v_53:
    goto v_49;
v_54:
    v_112 = stack[-5];
    if (!car_legal(v_112)) v_112 = carerror(v_112); else
    v_112 = car(v_112);
    if (!car_legal(v_112)) v_112 = carerror(v_112); else
    v_112 = car(v_112);
    stack[-4] = v_112;
    v_112 = stack[-5];
    if (!car_legal(v_112)) v_112 = carerror(v_112); else
    v_112 = car(v_112);
    if (!car_legal(v_112)) v_112 = cdrerror(v_112); else
    v_112 = cdr(v_112);
    stack[-3] = v_112;
    v_112 = stack[-5];
    if (!car_legal(v_112)) v_112 = cdrerror(v_112); else
    v_112 = cdr(v_112);
    stack[-5] = v_112;
    v_112 = stack[-4];
    if (!car_legal(v_112)) v_112 = carerror(v_112); else
    v_112 = car(v_112);
    if (!car_legal(v_112)) v_112 = carerror(v_112); else
    v_112 = car(v_112);
    if (!car_legal(v_112)) v_113 = carerror(v_112); else
    v_113 = car(v_112);
    v_112 = stack[-3];
    if (!car_legal(v_112)) v_112 = carerror(v_112); else
    v_112 = car(v_112);
    if (!car_legal(v_112)) v_112 = carerror(v_112); else
    v_112 = car(v_112);
    {   LispObject fn = basic_elt(env, 1); // b!:ordexn
    v_112 = (*qfn2(fn))(fn, v_113, v_112);
    }
    env = stack[-6];
    stack[-1] = v_112;
    v_112 = stack[-1];
    if (v_112 == nil) goto v_76;
    v_112 = stack[-4];
    if (!car_legal(v_112)) v_112 = carerror(v_112); else
    v_112 = car(v_112);
    if (!car_legal(v_112)) v_113 = cdrerror(v_112); else
    v_113 = cdr(v_112);
    v_112 = stack[-3];
    if (!car_legal(v_112)) v_112 = carerror(v_112); else
    v_112 = car(v_112);
    if (!car_legal(v_112)) v_112 = cdrerror(v_112); else
    v_112 = cdr(v_112);
    {   LispObject fn = basic_elt(env, 2); // multf
    v_112 = (*qfn2(fn))(fn, v_113, v_112);
    }
    env = stack[-6];
    v_113 = v_112;
    v_112 = stack[-1];
    if (!car_legal(v_112)) v_112 = carerror(v_112); else
    v_112 = car(v_112);
    if (v_112 == nil) goto v_88;
    v_112 = v_113;
    {   LispObject fn = basic_elt(env, 3); // negf
    v_112 = (*qfn1(fn))(fn, v_112);
    }
    env = stack[-6];
    v_113 = v_112;
    goto v_86;
v_88:
v_86:
    v_112 = stack[-1];
    if (!car_legal(v_112)) stack[-2] = cdrerror(v_112); else
    stack[-2] = cdr(v_112);
    stack[-1] = v_113;
    v_112 = stack[-4];
    if (!car_legal(v_112)) v_113 = cdrerror(v_112); else
    v_113 = cdr(v_112);
    v_112 = stack[-3];
    {   LispObject fn = basic_elt(env, 0); // b!:extmult
    v_112 = (*qfn2(fn))(fn, v_113, v_112);
    }
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 4); // b!:extadd
    v_112 = (*qfn2(fn))(fn, stack[0], v_112);
    }
    env = stack[-6];
    v_112 = acons(stack[-2], stack[-1], v_112);
    env = stack[-6];
    stack[0] = v_112;
    goto v_74;
v_76:
    v_112 = stack[-4];
    if (!car_legal(v_112)) v_113 = cdrerror(v_112); else
    v_113 = cdr(v_112);
    v_112 = stack[-3];
    {   LispObject fn = basic_elt(env, 0); // b!:extmult
    v_113 = (*qfn2(fn))(fn, v_113, v_112);
    }
    env = stack[-6];
    v_112 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // b!:extadd
    v_112 = (*qfn2(fn))(fn, v_113, v_112);
    }
    env = stack[-6];
    stack[0] = v_112;
    goto v_74;
v_74:
    goto v_50;
v_49:
    v_112 = stack[0];
    return onevalue(v_112);
}



// Code for tr_write

static LispObject CC_tr_write(LispObject env,
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
    v_29 = v_2;
// end of prologue
    v_28 = qvalue(basic_elt(env, 1)); // !*trsolve
    if (v_28 == nil) goto v_7;
    v_28 = v_29;
    stack[0] = v_28;
v_12:
    v_28 = stack[0];
    if (v_28 == nil) goto v_16;
    else goto v_17;
v_16:
    goto v_11;
v_17:
    v_28 = stack[0];
    if (!car_legal(v_28)) v_28 = carerror(v_28); else
    v_28 = car(v_28);
    v_28 = Lprinc(nil, v_28);
    env = stack[-1];
    v_28 = stack[0];
    if (!car_legal(v_28)) v_28 = cdrerror(v_28); else
    v_28 = cdr(v_28);
    stack[0] = v_28;
    goto v_12;
v_11:
        return Lterpri(nil);
v_7:
    v_28 = nil;
    return onevalue(v_28);
}



// Code for difference!-mod!-p

static LispObject CC_differenceKmodKp(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // minus!-mod!-p
    v_9 = (*qfn1(fn))(fn, v_9);
    }
    env = stack[-1];
    {
        LispObject v_12 = stack[0];
        LispObject fn = basic_elt(env, 2); // plus!-mod!-p
        return (*qfn2(fn))(fn, v_12, v_9);
    }
}



// Code for reduce!-degree!-mod!-p

static LispObject CC_reduceKdegreeKmodKp(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    v_55 = stack[-1];
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    if (!car_legal(v_55)) v_55 = cdrerror(v_55); else
    v_55 = cdr(v_55);
    {   std::intptr_t w = int_of_fixnum(v_55);
        if (w != 0) w = current_modulus - w;
        v_56 = fixnum_of_int(w);
    }
    v_55 = stack[0];
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    if (!car_legal(v_55)) v_55 = cdrerror(v_55); else
    v_55 = cdr(v_55);
    v_55 = Lmodular_quotient(nil, v_56, v_55);
    env = stack[-3];
    stack[-2] = v_55;
    v_55 = stack[-1];
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    if (!car_legal(v_55)) v_56 = cdrerror(v_55); else
    v_56 = cdr(v_55);
    v_55 = stack[0];
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    if (!car_legal(v_55)) v_55 = cdrerror(v_55); else
    v_55 = cdr(v_55);
    v_55 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_56) - static_cast<std::uintptr_t>(v_55) + TAG_FIXNUM);
    v_57 = v_55;
    v_56 = v_57;
    v_55 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_56 == v_55) goto v_28;
    else goto v_29;
v_28:
    v_55 = stack[-1];
    if (!car_legal(v_55)) stack[-1] = cdrerror(v_55); else
    stack[-1] = cdr(v_55);
    v_55 = stack[0];
    if (!car_legal(v_55)) v_56 = cdrerror(v_55); else
    v_56 = cdr(v_55);
    v_55 = stack[-2];
    {   LispObject fn = basic_elt(env, 1); // multiply!-by!-constant!-mod!-p
    v_55 = (*qfn2(fn))(fn, v_56, v_55);
    }
    env = stack[-3];
    {
        LispObject v_61 = stack[-1];
        LispObject fn = basic_elt(env, 2); // plus!-mod!-p
        return (*qfn2(fn))(fn, v_61, v_55);
    }
v_29:
    v_55 = stack[-1];
    if (!car_legal(v_55)) stack[-1] = cdrerror(v_55); else
    stack[-1] = cdr(v_55);
    v_55 = stack[0];
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    v_56 = v_57;
    {   LispObject fn = basic_elt(env, 3); // mksp
    v_56 = (*qfn2(fn))(fn, v_55, v_56);
    }
    env = stack[-3];
    v_55 = stack[-2];
    v_56 = cons(v_56, v_55);
    env = stack[-3];
    v_55 = stack[0];
    if (!car_legal(v_55)) v_55 = cdrerror(v_55); else
    v_55 = cdr(v_55);
    {   LispObject fn = basic_elt(env, 4); // times!-term!-mod!-p
    v_55 = (*qfn2(fn))(fn, v_56, v_55);
    }
    env = stack[-3];
    {
        LispObject v_62 = stack[-1];
        LispObject fn = basic_elt(env, 2); // plus!-mod!-p
        return (*qfn2(fn))(fn, v_62, v_55);
    }
    v_55 = nil;
    return onevalue(v_55);
}



// Code for lalr_make_compressed_action_row1

static LispObject CC_lalr_make_compressed_action_row1(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_101, v_102, v_103, v_104, v_105;
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
    stack[-2] = nil;
    v_101 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // lalr_most_common_reduction
    v_101 = (*qfn1(fn))(fn, v_101);
    }
    env = stack[-4];
    stack[-3] = v_101;
    v_101 = stack[0];
    stack[-1] = v_101;
v_15:
    v_101 = stack[-1];
    if (v_101 == nil) goto v_19;
    else goto v_20;
v_19:
    goto v_14;
v_20:
    v_101 = stack[-1];
    if (!car_legal(v_101)) v_101 = carerror(v_101); else
    v_101 = car(v_101);
    v_103 = v_101;
    v_101 = v_103;
    if (!car_legal(v_101)) v_101 = cdrerror(v_101); else
    v_101 = cdr(v_101);
    if (!car_legal(v_101)) v_102 = carerror(v_101); else
    v_102 = car(v_101);
    v_101 = stack[-3];
    if (equal(v_102, v_101)) goto v_29;
    v_101 = v_103;
    if (!car_legal(v_101)) v_101 = carerror(v_101); else
    v_101 = car(v_101);
    v_105 = v_101;
    v_101 = v_103;
    if (!car_legal(v_101)) v_101 = cdrerror(v_101); else
    v_101 = cdr(v_101);
    if (!car_legal(v_101)) v_101 = carerror(v_101); else
    v_101 = car(v_101);
    if (!car_legal(v_101)) v_101 = carerror(v_101); else
    v_101 = car(v_101);
    v_104 = v_101;
    v_102 = v_104;
    v_101 = basic_elt(env, 1); // shift
    if (v_102 == v_101) goto v_42;
    else goto v_43;
v_42:
    v_102 = v_105;
    v_101 = v_103;
    if (!car_legal(v_101)) v_101 = cdrerror(v_101); else
    v_101 = cdr(v_101);
    if (!car_legal(v_101)) v_101 = carerror(v_101); else
    v_101 = car(v_101);
    if (!car_legal(v_101)) v_101 = cdrerror(v_101); else
    v_101 = cdr(v_101);
    if (!car_legal(v_101)) v_103 = carerror(v_101); else
    v_103 = car(v_101);
    v_101 = stack[-2];
    v_101 = acons(v_102, v_103, v_101);
    env = stack[-4];
    stack[-2] = v_101;
    goto v_41;
v_43:
    v_102 = v_104;
    v_101 = basic_elt(env, 2); // accept
    if (v_102 == v_101) goto v_54;
    else goto v_55;
v_54:
    v_103 = v_105;
    v_102 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_101 = stack[-2];
    v_101 = acons(v_103, v_102, v_101);
    env = stack[-4];
    stack[-2] = v_101;
    goto v_41;
v_55:
    v_102 = v_104;
    v_101 = basic_elt(env, 3); // reduce
    if (v_102 == v_101) goto v_62;
    else goto v_63;
v_62:
    stack[0] = v_105;
    v_101 = v_103;
    if (!car_legal(v_101)) v_101 = cdrerror(v_101); else
    v_101 = cdr(v_101);
    if (!car_legal(v_101)) v_101 = carerror(v_101); else
    v_101 = car(v_101);
    if (!car_legal(v_101)) v_101 = cdrerror(v_101); else
    v_101 = cdr(v_101);
    if (!car_legal(v_101)) v_101 = cdrerror(v_101); else
    v_101 = cdr(v_101);
    if (!car_legal(v_101)) v_101 = carerror(v_101); else
    v_101 = car(v_101);
    v_102 = negate(v_101);
    env = stack[-4];
    v_101 = stack[-2];
    v_101 = acons(stack[0], v_102, v_101);
    env = stack[-4];
    stack[-2] = v_101;
    goto v_41;
v_63:
v_41:
    goto v_27;
v_29:
v_27:
    v_101 = stack[-1];
    if (!car_legal(v_101)) v_101 = cdrerror(v_101); else
    v_101 = cdr(v_101);
    stack[-1] = v_101;
    goto v_15;
v_14:
    v_101 = stack[-3];
    if (v_101 == nil) goto v_81;
    v_101 = stack[-3];
    if (!car_legal(v_101)) v_102 = carerror(v_101); else
    v_102 = car(v_101);
    v_101 = basic_elt(env, 2); // accept
    if (v_102 == v_101) goto v_85;
    else goto v_86;
v_85:
    v_101 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_84;
v_86:
    v_101 = stack[-3];
    if (!car_legal(v_101)) v_101 = cdrerror(v_101); else
    v_101 = cdr(v_101);
    if (!car_legal(v_101)) v_101 = cdrerror(v_101); else
    v_101 = cdr(v_101);
    if (!car_legal(v_101)) v_101 = carerror(v_101); else
    v_101 = car(v_101);
    v_101 = negate(v_101);
    goto v_84;
    v_101 = nil;
v_84:
    stack[-3] = v_101;
    goto v_79;
v_81:
v_79:
    v_102 = stack[-2];
    v_101 = stack[-3];
    return cons(v_102, v_101);
    return onevalue(v_101);
}



// Code for powers3

static LispObject CC_powers3(LispObject env,
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
    stack[-1] = v_3;
    v_46 = v_2;
// end of prologue
v_8:
    v_47 = v_46;
    if (!consp(v_47)) goto v_15;
    else goto v_16;
v_15:
    v_47 = lisp_true;
    goto v_14;
v_16:
    v_47 = v_46;
    if (!car_legal(v_47)) v_47 = carerror(v_47); else
    v_47 = car(v_47);
    v_47 = (consp(v_47) ? nil : lisp_true);
    goto v_14;
    v_47 = nil;
v_14:
    if (v_47 == nil) goto v_12;
    v_46 = stack[-1];
    goto v_7;
v_12:
    v_47 = v_46;
    if (!car_legal(v_47)) v_47 = carerror(v_47); else
    v_47 = car(v_47);
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    stack[-2] = v_47;
    v_47 = v_46;
    if (!car_legal(v_47)) v_47 = carerror(v_47); else
    v_47 = car(v_47);
    if (!car_legal(v_47)) v_47 = carerror(v_47); else
    v_47 = car(v_47);
    if (!car_legal(v_47)) stack[0] = carerror(v_47); else
    stack[0] = car(v_47);
    v_47 = v_46;
    if (!car_legal(v_47)) v_47 = carerror(v_47); else
    v_47 = car(v_47);
    if (!car_legal(v_47)) v_47 = carerror(v_47); else
    v_47 = car(v_47);
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    if (!car_legal(v_46)) v_46 = carerror(v_46); else
    v_46 = car(v_46);
    if (!car_legal(v_46)) v_46 = carerror(v_46); else
    v_46 = car(v_46);
    if (!car_legal(v_46)) v_46 = cdrerror(v_46); else
    v_46 = cdr(v_46);
    v_47 = cons(v_47, v_46);
    env = stack[-3];
    v_46 = stack[-1];
    v_46 = acons(stack[0], v_47, v_46);
    env = stack[-3];
    stack[-1] = v_46;
    v_46 = stack[-2];
    goto v_8;
    v_46 = nil;
v_7:
    return onevalue(v_46);
}



// Code for ibalp_redclause

static LispObject CC_ibalp_redclause(LispObject env,
                         LispObject v_2)
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
    stack[0] = nil;
    v_36 = stack[-1];
    if (!car_legal(v_36)) v_36 = carerror(v_36); else
    v_36 = car(v_36);
    stack[-2] = v_36;
v_12:
    v_36 = stack[-2];
    if (v_36 == nil) goto v_15;
    v_36 = stack[0];
    if (v_36 == nil) goto v_19;
    else goto v_15;
v_19:
    goto v_16;
v_15:
    goto v_11;
v_16:
    v_36 = stack[-2];
    if (!car_legal(v_36)) v_37 = carerror(v_36); else
    v_37 = car(v_36);
    v_36 = stack[-1];
    if (!car_legal(v_36)) v_36 = cdrerror(v_36); else
    v_36 = cdr(v_36);
    if (!car_legal(v_36)) v_36 = carerror(v_36); else
    v_36 = car(v_36);
    {   LispObject fn = basic_elt(env, 1); // ibalp_vmember
    v_36 = (*qfn2(fn))(fn, v_37, v_36);
    }
    env = stack[-3];
    if (v_36 == nil) goto v_25;
    v_36 = lisp_true;
    stack[0] = v_36;
    goto v_23;
v_25:
v_23:
    v_36 = stack[-2];
    if (!car_legal(v_36)) v_36 = cdrerror(v_36); else
    v_36 = cdr(v_36);
    stack[-2] = v_36;
    goto v_12;
v_11:
    v_36 = stack[0];
    return onevalue(v_36);
}



// Code for matrixrowrd

static LispObject CC_matrixrowrd(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_19, v_20;
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
    v_19 = (*qfn0(fn))(fn);
    }
    env = stack[-1];
    v_20 = v_19;
    v_19 = v_20;
    if (v_19 == nil) goto v_10;
    else goto v_11;
v_10:
    v_19 = nil;
    goto v_9;
v_11:
    stack[0] = v_20;
    {   LispObject fn = basic_elt(env, 0); // matrixrowrd
    v_19 = (*qfn0(fn))(fn);
    }
    {
        LispObject v_22 = stack[0];
        return cons(v_22, v_19);
    }
    v_19 = nil;
v_9:
    return onevalue(v_19);
}



// Code for opmtch

static LispObject CC_opmtch(LispObject env,
                         LispObject v_2)
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
    v_78 = v_2;
// end of prologue
// Binding rpt
// FLUIDBIND: reloadenv=3 litvec-offset=1 saveloc=0
{   bind_fluid_stack bind_fluid_var(-3, 1, 0);
    setvalue(basic_elt(env, 1), nil); // rpt
    v_77 = basic_elt(env, 2); // inf
    setvalue(basic_elt(env, 1), v_77); // rpt
    v_77 = v_78;
    if (!car_legal(v_77)) v_77 = carerror(v_77); else
    v_77 = car(v_77);
    if (!symbolp(v_77)) v_77 = nil;
    else { v_77 = qfastgets(v_77);
           if (v_77 != nil) { v_77 = elt(v_77, 9); // opmtch
#ifdef RECORD_GET
             if (v_77 != SPID_NOPROP)
                record_get(elt(fastget_names, 9), 1);
             else record_get(elt(fastget_names, 9), 0),
                v_77 = nil; }
           else record_get(elt(fastget_names, 9), 0); }
#else
             if (v_77 == SPID_NOPROP) v_77 = nil; }}
#endif
    stack[-1] = v_77;
    v_77 = stack[-1];
    if (v_77 == nil) goto v_20;
    else goto v_21;
v_20:
    v_77 = lisp_true;
    goto v_19;
v_21:
    v_77 = qvalue(basic_elt(env, 3)); // subfg!*
    v_77 = (v_77 == nil ? lisp_true : nil);
    goto v_19;
    v_77 = nil;
v_19:
    if (v_77 == nil) goto v_17;
    v_77 = nil;
    goto v_9;
v_17:
    v_77 = v_78;
    stack[-2] = v_77;
v_32:
    v_77 = stack[-1];
    if (!car_legal(v_77)) v_77 = carerror(v_77); else
    v_77 = car(v_77);
    if (!car_legal(v_77)) v_77 = carerror(v_77); else
    v_77 = car(v_77);
    if (!consp(v_77)) goto v_35;
    else goto v_36;
v_35:
    v_77 = stack[-1];
    if (!car_legal(v_77)) v_77 = carerror(v_77); else
    v_77 = car(v_77);
    {   LispObject fn = basic_elt(env, 4); // sroot1
    v_77 = (*qfn2(fn))(fn, v_78, v_77);
    }
    env = stack[-3];
    goto v_34;
v_36:
    v_77 = stack[-1];
    if (!car_legal(v_77)) v_77 = carerror(v_77); else
    v_77 = car(v_77);
    {   LispObject fn = basic_elt(env, 5); // oldmtch
    v_77 = (*qfn2(fn))(fn, v_78, v_77);
    }
    env = stack[-3];
    goto v_34;
    v_77 = nil;
v_34:
    v_78 = v_77;
    v_79 = v_78;
    v_77 = stack[-2];
    if (equal(v_79, v_77)) goto v_57;
    v_77 = lisp_true;
    goto v_55;
v_57:
    v_77 = stack[-1];
    if (!car_legal(v_77)) v_77 = cdrerror(v_77); else
    v_77 = cdr(v_77);
    stack[-1] = v_77;
    v_77 = (v_77 == nil ? lisp_true : nil);
    goto v_55;
    v_77 = nil;
v_55:
    if (v_77 == nil) goto v_52;
    else goto v_53;
v_52:
    goto v_32;
v_53:
    v_79 = v_78;
    v_77 = stack[-2];
    if (v_79 == v_77) goto v_68;
    else goto v_69;
v_68:
    v_77 = nil;
    goto v_67;
v_69:
    v_77 = v_78;
    goto v_67;
    v_77 = nil;
v_67:
v_9:
    ;}  // end of a binding scope
    return onevalue(v_77);
}



// Code for mkinds

static LispObject CC_mkinds(LispObject env,
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
    v_27 = stack[0];
    v_26 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_27 == v_26) goto v_7;
    else goto v_8;
v_7:
    v_26 = nil;
    goto v_6;
v_8:
    v_27 = stack[-1];
    v_26 = stack[0];
    v_26 = cons(v_27, v_26);
    env = stack[-3];
    stack[-2] = v_26;
    v_26 = stack[0];
    v_26 = sub1(v_26);
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 0); // mkinds
    v_26 = (*qfn2(fn))(fn, stack[-1], v_26);
    }
    {
        LispObject v_31 = stack[-2];
        return cons(v_31, v_26);
    }
    goto v_6;
    v_26 = nil;
v_6:
    return onevalue(v_26);
}



// Code for flatsizec

static LispObject CC_flatsizec(LispObject env,
                         LispObject v_2)
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
    v_25 = stack[0];
    if (v_25 == nil) goto v_6;
    else goto v_7;
v_6:
    v_25 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_5;
v_7:
    v_25 = stack[0];
    if (!consp(v_25)) goto v_10;
    else goto v_11;
v_10:
    v_25 = stack[0];
    {
        LispObject fn = basic_elt(env, 1); // widelengthc
        return (*qfn1(fn))(fn, v_25);
    }
v_11:
    v_25 = stack[0];
    if (!car_legal(v_25)) v_25 = carerror(v_25); else
    v_25 = car(v_25);
    {   LispObject fn = basic_elt(env, 0); // flatsizec
    stack[-1] = (*qfn1(fn))(fn, v_25);
    }
    env = stack[-2];
    v_25 = stack[0];
    if (!car_legal(v_25)) v_25 = cdrerror(v_25); else
    v_25 = cdr(v_25);
    {   LispObject fn = basic_elt(env, 0); // flatsizec
    v_25 = (*qfn1(fn))(fn, v_25);
    }
    env = stack[-2];
    v_25 = add1(v_25);
    {
        LispObject v_28 = stack[-1];
        return plus2(v_28, v_25);
    }
    v_25 = nil;
v_5:
    return onevalue(v_25);
}



// Code for general!-modular!-reciprocal

static LispObject CC_generalKmodularKreciprocal(LispObject env,
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
    stack[0] = v_2;
// end of prologue
    v_30 = qvalue(basic_elt(env, 1)); // !*balanced_mod
    if (v_30 == nil) goto v_7;
    v_31 = stack[0];
    v_30 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_30 = static_cast<LispObject>(lessp2(v_31, v_30));
    v_30 = v_30 ? lisp_true : nil;
    env = stack[-3];
    if (v_30 == nil) goto v_7;
    stack[-1] = qvalue(basic_elt(env, 2)); // current!-modulus
    v_31 = stack[0];
    v_30 = qvalue(basic_elt(env, 2)); // current!-modulus
    stack[-2] = plus2(v_31, v_30);
    env = stack[-3];
    stack[0] = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_30 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_30 = ncons(v_30);
    env = stack[-3];
    {
        LispObject v_35 = stack[-1];
        LispObject v_36 = stack[-2];
        LispObject v_37 = stack[0];
        LispObject fn = basic_elt(env, 3); // general!-reciprocal!-by!-gcd
        return (*qfn4up(fn))(fn, v_35, v_36, v_37, v_30);
    }
v_7:
    stack[-2] = qvalue(basic_elt(env, 2)); // current!-modulus
    stack[-1] = stack[0];
    stack[0] = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_30 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_30 = ncons(v_30);
    env = stack[-3];
    {
        LispObject v_38 = stack[-2];
        LispObject v_39 = stack[-1];
        LispObject v_40 = stack[0];
        LispObject fn = basic_elt(env, 3); // general!-reciprocal!-by!-gcd
        return (*qfn4up(fn))(fn, v_38, v_39, v_40, v_30);
    }
    v_30 = nil;
    return onevalue(v_30);
}



// Code for ra_transform

static LispObject CC_ra_transform(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    v_27 = v_4;
    stack[-2] = v_3;
    v_28 = v_2;
// end of prologue
    stack[-3] = v_28;
    stack[-1] = basic_elt(env, 1); // x
    stack[0] = v_27;
    v_27 = stack[-2];
    {   LispObject fn = basic_elt(env, 2); // negsq
    v_27 = (*qfn1(fn))(fn, v_27);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 3); // addsq
    stack[0] = (*qfn2(fn))(fn, stack[0], v_27);
    }
    env = stack[-4];
    v_28 = basic_elt(env, 1); // x
    v_27 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 4); // to
    v_28 = (*qfn2(fn))(fn, v_28, v_27);
    }
    env = stack[-4];
    v_27 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_27 = cons(v_28, v_27);
    env = stack[-4];
    v_28 = ncons(v_27);
    env = stack[-4];
    v_27 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_27 = cons(v_28, v_27);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 5); // multsq
    v_28 = (*qfn2(fn))(fn, stack[0], v_27);
    }
    env = stack[-4];
    v_27 = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // addsq
    v_27 = (*qfn2(fn))(fn, v_28, v_27);
    }
    env = stack[-4];
    v_27 = cons(stack[-1], v_27);
    env = stack[-4];
    v_27 = ncons(v_27);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 6); // sfto_qsub1
    v_27 = (*qfn2(fn))(fn, stack[-3], v_27);
    }
    if (!car_legal(v_27)) v_27 = carerror(v_27); else
    v_27 = car(v_27);
    return onevalue(v_27);
}



// Code for rl_prepfof

static LispObject CC_rl_prepfof(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // rl_csimpl
    v_7 = (*qfn1(fn))(fn, v_7);
    }
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // rl_prepfof1
        return (*qfn1(fn))(fn, v_7);
    }
}



// Code for poly!-minusp

static LispObject CC_polyKminusp(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_33, v_34;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_33 = v_2;
// end of prologue
v_6:
    v_34 = v_33;
    if (v_34 == nil) goto v_9;
    else goto v_10;
v_9:
    v_33 = nil;
    goto v_5;
v_10:
    v_34 = v_33;
    if (!consp(v_34)) goto v_17;
    else goto v_18;
v_17:
    v_34 = lisp_true;
    goto v_16;
v_18:
    v_34 = v_33;
    if (!car_legal(v_34)) v_34 = carerror(v_34); else
    v_34 = car(v_34);
    v_34 = (consp(v_34) ? nil : lisp_true);
    goto v_16;
    v_34 = nil;
v_16:
    if (v_34 == nil) goto v_14;
        return Lminusp(nil, v_33);
v_14:
    if (!car_legal(v_33)) v_33 = carerror(v_33); else
    v_33 = car(v_33);
    if (!car_legal(v_33)) v_33 = cdrerror(v_33); else
    v_33 = cdr(v_33);
    goto v_6;
    v_33 = nil;
v_5:
    return onevalue(v_33);
}



// Code for delet

static LispObject CC_delet(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_51 = nil;
v_8:
    v_49 = stack[-1];
    if (v_49 == nil) goto v_11;
    else goto v_12;
v_11:
    v_50 = v_51;
    v_49 = stack[0];
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn2(fn))(fn, v_50, v_49);
    }
v_12:
    v_49 = stack[0];
    if (v_49 == nil) goto v_21;
    else goto v_22;
v_21:
    v_49 = lisp_true;
    goto v_20;
v_22:
    v_50 = stack[-1];
    v_49 = stack[0];
    v_49 = (equal(v_50, v_49) ? lisp_true : nil);
    goto v_20;
    v_49 = nil;
v_20:
    if (v_49 == nil) goto v_18;
    v_49 = v_51;
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn1(fn))(fn, v_49);
    }
v_18:
    v_50 = stack[-1];
    v_49 = stack[0];
    if (!car_legal(v_49)) v_49 = carerror(v_49); else
    v_49 = car(v_49);
    if (equal(v_50, v_49)) goto v_32;
    else goto v_33;
v_32:
    v_50 = v_51;
    v_49 = stack[0];
    if (!car_legal(v_49)) v_49 = cdrerror(v_49); else
    v_49 = cdr(v_49);
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn2(fn))(fn, v_50, v_49);
    }
v_33:
    v_49 = stack[0];
    if (!car_legal(v_49)) v_49 = carerror(v_49); else
    v_49 = car(v_49);
    v_50 = v_51;
    v_49 = cons(v_49, v_50);
    env = stack[-2];
    v_51 = v_49;
    v_49 = stack[0];
    if (!car_legal(v_49)) v_49 = cdrerror(v_49); else
    v_49 = cdr(v_49);
    stack[0] = v_49;
    goto v_8;
    v_49 = nil;
    return onevalue(v_49);
}



// Code for ibalp_emptyclausep

static LispObject CC_ibalp_emptyclausep(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
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
    if (!car_legal(v_37)) v_37 = carerror(v_37); else
    v_37 = car(v_37);
    if (v_37 == nil) goto v_6;
    else goto v_7;
v_6:
    v_37 = stack[0];
    if (!car_legal(v_37)) v_37 = cdrerror(v_37); else
    v_37 = cdr(v_37);
    if (!car_legal(v_37)) v_37 = cdrerror(v_37); else
    v_37 = cdr(v_37);
    if (!car_legal(v_37)) v_38 = carerror(v_37); else
    v_38 = car(v_37);
    v_37 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_37 = Leqn_2(nil, v_38, v_37);
    if (v_37 == nil) goto v_16;
    else goto v_17;
v_16:
    v_37 = nil;
    goto v_15;
v_17:
    v_37 = stack[0];
    if (!car_legal(v_37)) v_37 = cdrerror(v_37); else
    v_37 = cdr(v_37);
    if (!car_legal(v_37)) v_37 = cdrerror(v_37); else
    v_37 = cdr(v_37);
    if (!car_legal(v_37)) v_37 = cdrerror(v_37); else
    v_37 = cdr(v_37);
    if (!car_legal(v_37)) v_38 = carerror(v_37); else
    v_38 = car(v_37);
    v_37 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
        return Leqn_2(nil, v_38, v_37);
    v_37 = nil;
v_15:
    goto v_5;
v_7:
    v_37 = nil;
    goto v_5;
    v_37 = nil;
v_5:
    return onevalue(v_37);
}



// Code for c!:extmult

static LispObject CC_cTextmult(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_182, v_183, v_184;
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
    v_182 = nil;
    stack[-5] = v_182;
v_12:
    v_182 = stack[-4];
    if (v_182 == nil) goto v_21;
    else goto v_22;
v_21:
    v_182 = lisp_true;
    goto v_20;
v_22:
    v_182 = stack[-3];
    v_182 = (v_182 == nil ? lisp_true : nil);
    goto v_20;
    v_182 = nil;
v_20:
    if (v_182 == nil) goto v_18;
    v_182 = nil;
    stack[-1] = v_182;
    goto v_13;
v_18:
    v_183 = stack[-3];
    v_182 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_183 == v_182) goto v_30;
    else goto v_31;
v_30:
    v_182 = stack[-4];
    stack[-1] = v_182;
    goto v_13;
v_31:
    v_182 = stack[-4];
    if (!car_legal(v_182)) v_182 = carerror(v_182); else
    v_182 = car(v_182);
    if (!car_legal(v_182)) v_182 = carerror(v_182); else
    v_182 = car(v_182);
    if (!car_legal(v_182)) v_183 = carerror(v_182); else
    v_183 = car(v_182);
    v_182 = stack[-3];
    if (!car_legal(v_182)) v_182 = carerror(v_182); else
    v_182 = car(v_182);
    if (!car_legal(v_182)) v_182 = carerror(v_182); else
    v_182 = car(v_182);
    {   LispObject fn = basic_elt(env, 2); // c!:ordexn
    v_182 = (*qfn2(fn))(fn, v_183, v_182);
    }
    env = stack[-6];
    stack[0] = v_182;
    v_182 = stack[0];
    if (v_182 == nil) goto v_46;
    stack[-1] = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_184 = stack[0];
    v_183 = stack[-4];
    v_182 = stack[-3];
    v_183 = list2star(v_184, v_183, v_182);
    env = stack[-6];
    v_182 = stack[-5];
    v_182 = acons(stack[-1], v_183, v_182);
    env = stack[-6];
    stack[-5] = v_182;
    v_182 = stack[-4];
    if (!car_legal(v_182)) v_182 = cdrerror(v_182); else
    v_182 = cdr(v_182);
    stack[-4] = v_182;
    goto v_12;
v_46:
    stack[0] = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_183 = stack[-4];
    v_182 = stack[-3];
    v_183 = cons(v_183, v_182);
    env = stack[-6];
    v_182 = stack[-5];
    v_182 = acons(stack[0], v_183, v_182);
    env = stack[-6];
    stack[-5] = v_182;
    v_182 = stack[-4];
    if (!car_legal(v_182)) v_182 = cdrerror(v_182); else
    v_182 = cdr(v_182);
    stack[-4] = v_182;
    goto v_12;
v_13:
    v_182 = stack[-5];
    if (v_182 == nil) goto v_69;
    else goto v_70;
v_69:
    v_182 = stack[-1];
    goto v_11;
v_70:
    v_182 = stack[-5];
    if (!car_legal(v_182)) v_182 = carerror(v_182); else
    v_182 = car(v_182);
    v_184 = v_182;
    v_182 = stack[-5];
    if (!car_legal(v_182)) v_182 = cdrerror(v_182); else
    v_182 = cdr(v_182);
    stack[-5] = v_182;
    v_182 = v_184;
    if (!car_legal(v_182)) v_183 = carerror(v_182); else
    v_183 = car(v_182);
    v_182 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_183 == v_182) goto v_79;
    else goto v_80;
v_79:
    v_182 = v_184;
    if (!car_legal(v_182)) v_182 = cdrerror(v_182); else
    v_182 = cdr(v_182);
    v_184 = v_182;
    v_182 = v_184;
    if (!car_legal(v_182)) v_182 = carerror(v_182); else
    v_182 = car(v_182);
    stack[0] = v_182;
    v_182 = v_184;
    if (!car_legal(v_182)) v_182 = cdrerror(v_182); else
    v_182 = cdr(v_182);
    v_184 = v_182;
    v_182 = v_184;
    if (!car_legal(v_182)) v_182 = carerror(v_182); else
    v_182 = car(v_182);
    stack[-4] = v_182;
    v_182 = v_184;
    if (!car_legal(v_182)) v_182 = cdrerror(v_182); else
    v_182 = cdr(v_182);
    stack[-3] = v_182;
    stack[-2] = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_183 = stack[-4];
    v_182 = stack[-3];
    v_182 = cons(v_183, v_182);
    env = stack[-6];
    v_183 = list2star(stack[-1], stack[0], v_182);
    env = stack[-6];
    v_182 = stack[-5];
    v_182 = acons(stack[-2], v_183, v_182);
    env = stack[-6];
    stack[-5] = v_182;
    v_182 = stack[-4];
    if (!car_legal(v_182)) v_182 = carerror(v_182); else
    v_182 = car(v_182);
    v_182 = ncons(v_182);
    env = stack[-6];
    stack[-4] = v_182;
    v_182 = stack[-3];
    if (!car_legal(v_182)) v_182 = cdrerror(v_182); else
    v_182 = cdr(v_182);
    stack[-3] = v_182;
    goto v_12;
v_80:
    v_182 = v_184;
    if (!car_legal(v_182)) v_183 = carerror(v_182); else
    v_183 = car(v_182);
    v_182 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    if (v_183 == v_182) goto v_108;
    else goto v_109;
v_108:
    v_182 = v_184;
    if (!car_legal(v_182)) v_182 = cdrerror(v_182); else
    v_182 = cdr(v_182);
    v_184 = v_182;
    v_182 = v_184;
    if (!car_legal(v_182)) v_182 = carerror(v_182); else
    v_182 = car(v_182);
    stack[-4] = v_182;
    v_182 = v_184;
    if (!car_legal(v_182)) v_182 = cdrerror(v_182); else
    v_182 = cdr(v_182);
    stack[-3] = v_182;
    v_184 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_183 = stack[-1];
    v_182 = stack[-5];
    v_182 = acons(v_184, v_183, v_182);
    env = stack[-6];
    stack[-5] = v_182;
    v_182 = stack[-4];
    if (!car_legal(v_182)) v_182 = carerror(v_182); else
    v_182 = car(v_182);
    v_182 = ncons(v_182);
    env = stack[-6];
    stack[-4] = v_182;
    v_182 = stack[-3];
    if (!car_legal(v_182)) v_182 = cdrerror(v_182); else
    v_182 = cdr(v_182);
    stack[-3] = v_182;
    goto v_12;
v_109:
    v_182 = v_184;
    if (!car_legal(v_182)) v_183 = carerror(v_182); else
    v_183 = car(v_182);
    v_182 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    if (v_183 == v_182) goto v_128;
    else goto v_129;
v_128:
    v_182 = v_184;
    if (!car_legal(v_182)) v_182 = cdrerror(v_182); else
    v_182 = cdr(v_182);
    v_184 = v_182;
    v_182 = v_184;
    if (!car_legal(v_182)) v_182 = carerror(v_182); else
    v_182 = car(v_182);
    stack[-2] = v_182;
    v_182 = v_184;
    if (!car_legal(v_182)) v_182 = cdrerror(v_182); else
    v_182 = cdr(v_182);
    v_184 = v_182;
    v_182 = v_184;
    if (!car_legal(v_182)) v_182 = carerror(v_182); else
    v_182 = car(v_182);
    stack[0] = v_182;
    v_182 = v_184;
    if (!car_legal(v_182)) v_182 = cdrerror(v_182); else
    v_182 = cdr(v_182);
    v_184 = v_182;
    v_182 = v_184;
    if (!car_legal(v_182)) v_182 = carerror(v_182); else
    v_182 = car(v_182);
    stack[-4] = v_182;
    v_182 = v_184;
    if (!car_legal(v_182)) v_182 = cdrerror(v_182); else
    v_182 = cdr(v_182);
    stack[-3] = v_182;
    v_182 = stack[-4];
    if (!car_legal(v_182)) v_182 = carerror(v_182); else
    v_182 = car(v_182);
    if (!car_legal(v_182)) v_183 = cdrerror(v_182); else
    v_183 = cdr(v_182);
    v_182 = stack[-3];
    if (!car_legal(v_182)) v_182 = carerror(v_182); else
    v_182 = car(v_182);
    if (!car_legal(v_182)) v_182 = cdrerror(v_182); else
    v_182 = cdr(v_182);
    {   LispObject fn = basic_elt(env, 3); // c!:subs2multf
    v_182 = (*qfn2(fn))(fn, v_183, v_182);
    }
    env = stack[-6];
    v_184 = v_182;
    v_182 = stack[0];
    if (!car_legal(v_182)) v_182 = carerror(v_182); else
    v_182 = car(v_182);
    if (v_182 == nil) goto v_157;
    v_182 = v_184;
    {   LispObject fn = basic_elt(env, 4); // negf
    v_182 = (*qfn1(fn))(fn, v_182);
    }
    env = stack[-6];
    v_184 = v_182;
    goto v_155;
v_157:
v_155:
    v_182 = stack[0];
    if (!car_legal(v_182)) v_182 = cdrerror(v_182); else
    v_182 = cdr(v_182);
    v_183 = v_184;
    v_182 = cons(v_182, v_183);
    env = stack[-6];
    stack[0] = ncons(v_182);
    env = stack[-6];
    v_183 = stack[-1];
    v_182 = stack[-2];
    {   LispObject fn = basic_elt(env, 5); // c!:extadd
    v_182 = (*qfn2(fn))(fn, v_183, v_182);
    }
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 5); // c!:extadd
    v_182 = (*qfn2(fn))(fn, stack[0], v_182);
    }
    env = stack[-6];
    stack[-1] = v_182;
    goto v_13;
v_129:
    v_182 = v_184;
    if (!car_legal(v_182)) v_183 = carerror(v_182); else
    v_183 = car(v_182);
    v_182 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    if (v_183 == v_182) goto v_171;
    else goto v_172;
v_171:
    v_182 = stack[-1];
    v_183 = v_184;
    if (!car_legal(v_183)) v_183 = cdrerror(v_183); else
    v_183 = cdr(v_183);
    {   LispObject fn = basic_elt(env, 5); // c!:extadd
    v_182 = (*qfn2(fn))(fn, v_182, v_183);
    }
    env = stack[-6];
    stack[-1] = v_182;
    goto v_13;
v_172:
    v_182 = basic_elt(env, 1); // "should never get here"
    {   LispObject fn = basic_elt(env, 6); // rederr
    v_182 = (*qfn1(fn))(fn, v_182);
    }
    v_182 = nil;
v_11:
    return onevalue(v_182);
}



// Code for dpmat_coldegs

static LispObject CC_dpmat_coldegs(LispObject env,
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
    v_7 = static_cast<LispObject>(80)+TAG_FIXNUM; // 5
    {
        LispObject fn = basic_elt(env, 1); // nth
        return (*qfn2(fn))(fn, v_8, v_7);
    }
}



// Code for nb

static LispObject CC_nb(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_13;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_13 = v_2;
// end of prologue
    if (v_13 == nil) goto v_7;
    v_13 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_5;
v_7:
    v_13 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    goto v_5;
    v_13 = nil;
v_5:
    return onevalue(v_13);
}



// Code for lex_start_block_comment

static LispObject CC_lex_start_block_comment(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_57, v_58;
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
    v_58 = stack[0];
    v_57 = basic_elt(env, 1); // !/
    if (v_58 == v_57) goto v_10;
    else goto v_11;
v_10:
    {   LispObject fn = basic_elt(env, 5); // yypeek
    v_58 = (*qfn0(fn))(fn);
    }
    env = stack[-1];
    v_57 = basic_elt(env, 2); // !*
    if (v_58 == v_57) goto v_16;
    else goto v_17;
v_16:
    v_58 = qvalue(basic_elt(env, 3)); // lexer_style!*
    v_57 = static_cast<LispObject>(128)+TAG_FIXNUM; // 8
    {   LispObject fn = basic_elt(env, 6); // land
    v_57 = (*qfn2(fn))(fn, v_58, v_57);
    }
    env = stack[-1];
    v_57 = static_cast<LispObject>(zerop(v_57));
    v_57 = v_57 ? lisp_true : nil;
    env = stack[-1];
    v_57 = (v_57 == nil ? lisp_true : nil);
    goto v_15;
v_17:
    v_57 = nil;
    goto v_15;
    v_57 = nil;
v_15:
    goto v_9;
v_11:
    v_57 = nil;
    goto v_9;
    v_57 = nil;
v_9:
    if (v_57 == nil) goto v_7;
    v_57 = lisp_true;
    goto v_5;
v_7:
    v_58 = stack[0];
    v_57 = basic_elt(env, 4); // !(
    if (v_58 == v_57) goto v_36;
    else goto v_37;
v_36:
    {   LispObject fn = basic_elt(env, 5); // yypeek
    v_58 = (*qfn0(fn))(fn);
    }
    env = stack[-1];
    v_57 = basic_elt(env, 2); // !*
    if (v_58 == v_57) goto v_42;
    else goto v_43;
v_42:
    v_58 = qvalue(basic_elt(env, 3)); // lexer_style!*
    v_57 = static_cast<LispObject>(256)+TAG_FIXNUM; // 16
    {   LispObject fn = basic_elt(env, 6); // land
    v_57 = (*qfn2(fn))(fn, v_58, v_57);
    }
    env = stack[-1];
    v_57 = static_cast<LispObject>(zerop(v_57));
    v_57 = v_57 ? lisp_true : nil;
    v_57 = (v_57 == nil ? lisp_true : nil);
    goto v_41;
v_43:
    v_57 = nil;
    goto v_41;
    v_57 = nil;
v_41:
    goto v_35;
v_37:
    v_57 = nil;
    goto v_35;
    v_57 = nil;
v_35:
    goto v_5;
    v_57 = nil;
v_5:
    return onevalue(v_57);
}



// Code for setpage

static LispObject CC_setpage(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_9, v_10;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_10 = v_3;
    v_9 = v_2;
// end of prologue
    setvalue(basic_elt(env, 1), v_9); // title!*
    v_9 = v_10;
    setvalue(basic_elt(env, 2), v_9); // pgnum!*
    v_9 = nil;
    return onevalue(v_9);
}



// Code for mri_pasf2mriat

static LispObject CC_mri_pasf2mriat(LispObject env,
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



// Code for qqe_simplterm

static LispObject CC_qqe_simplterm(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_41, v_42, v_43;
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
    v_41 = stack[0];
    if (!consp(v_41)) goto v_9;
    else goto v_10;
v_9:
    v_41 = stack[0];
    goto v_6;
v_10:
    v_41 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // qqe_op
    v_41 = (*qfn1(fn))(fn, v_41);
    }
    env = stack[-1];
    v_43 = v_41;
    v_42 = v_43;
    v_41 = basic_elt(env, 1); // (ltail rtail)
    v_41 = Lmemq(nil, v_42, v_41);
    if (v_41 == nil) goto v_18;
    v_41 = stack[0];
    {
        LispObject fn = basic_elt(env, 5); // qqe_simplterm!-tail
        return (*qfn1(fn))(fn, v_41);
    }
v_18:
    v_42 = v_43;
    v_41 = basic_elt(env, 2); // (lhead rhead)
    v_41 = Lmemq(nil, v_42, v_41);
    if (v_41 == nil) goto v_25;
    v_41 = stack[0];
    {
        LispObject fn = basic_elt(env, 6); // qqe_simplterm!-head
        return (*qfn1(fn))(fn, v_41);
    }
v_25:
    v_42 = v_43;
    v_41 = basic_elt(env, 3); // (ladd radd)
    v_41 = Lmemq(nil, v_42, v_41);
    if (v_41 == nil) goto v_32;
    v_41 = stack[0];
    {
        LispObject fn = basic_elt(env, 7); // qqe_simplterm!-add
        return (*qfn1(fn))(fn, v_41);
    }
v_32:
    v_41 = stack[0];
    goto v_6;
    v_41 = nil;
v_6:
    return onevalue(v_41);
}



// Code for pasf_mkpos

static LispObject CC_pasf_mkpos(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_104 = stack[0];
    v_103 = basic_elt(env, 1); // true
    if (v_104 == v_103) goto v_17;
    else goto v_18;
v_17:
    v_103 = lisp_true;
    goto v_16;
v_18:
    v_104 = stack[0];
    v_103 = basic_elt(env, 2); // false
    v_103 = (v_104 == v_103 ? lisp_true : nil);
    goto v_16;
    v_103 = nil;
v_16:
    if (v_103 == nil) goto v_13;
    else goto v_14;
v_13:
    v_103 = stack[0];
    if (!car_legal(v_103)) v_103 = cdrerror(v_103); else
    v_103 = cdr(v_103);
    if (!car_legal(v_103)) v_103 = carerror(v_103); else
    v_103 = car(v_103);
    {   LispObject fn = basic_elt(env, 4); // minusf
    v_103 = (*qfn1(fn))(fn, v_103);
    }
    env = stack[-3];
    goto v_12;
v_14:
    v_103 = nil;
    goto v_12;
    v_103 = nil;
v_12:
    if (v_103 == nil) goto v_10;
    v_103 = stack[0];
    {   LispObject fn = basic_elt(env, 5); // pasf_anegateat
    v_103 = (*qfn1(fn))(fn, v_103);
    }
    env = stack[-3];
    goto v_8;
v_10:
    v_103 = stack[0];
    goto v_8;
    v_103 = nil;
v_8:
    stack[-2] = v_103;
    v_103 = stack[-2];
    v_103 = Lconsp(nil, v_103);
    env = stack[-3];
    if (v_103 == nil) goto v_42;
    v_103 = stack[-2];
    if (!car_legal(v_103)) v_103 = carerror(v_103); else
    v_103 = car(v_103);
    v_103 = Lconsp(nil, v_103);
    env = stack[-3];
    if (v_103 == nil) goto v_42;
    v_103 = stack[-2];
    if (!car_legal(v_103)) v_103 = carerror(v_103); else
    v_103 = car(v_103);
    if (!car_legal(v_103)) v_104 = carerror(v_103); else
    v_104 = car(v_103);
    v_103 = basic_elt(env, 3); // (cong ncong)
    v_103 = Lmemq(nil, v_104, v_103);
    if (v_103 == nil) goto v_42;
    v_103 = stack[-2];
    if (!car_legal(v_103)) v_103 = carerror(v_103); else
    v_103 = car(v_103);
    if (!car_legal(v_103)) v_103 = cdrerror(v_103); else
    v_103 = cdr(v_103);
    {   LispObject fn = basic_elt(env, 4); // minusf
    v_103 = (*qfn1(fn))(fn, v_103);
    }
    env = stack[-3];
    if (v_103 == nil) goto v_42;
    v_104 = stack[-2];
    v_103 = basic_elt(env, 1); // true
    if (v_104 == v_103) goto v_70;
    else goto v_71;
v_70:
    v_103 = lisp_true;
    goto v_69;
v_71:
    v_104 = stack[-2];
    v_103 = basic_elt(env, 2); // false
    v_103 = (v_104 == v_103 ? lisp_true : nil);
    goto v_69;
    v_103 = nil;
v_69:
    if (v_103 == nil) goto v_67;
    v_103 = stack[-2];
    stack[-1] = v_103;
    goto v_65;
v_67:
    v_103 = stack[-2];
    if (!car_legal(v_103)) v_103 = carerror(v_103); else
    v_103 = car(v_103);
    v_103 = Lconsp(nil, v_103);
    env = stack[-3];
    if (v_103 == nil) goto v_82;
    v_103 = stack[-2];
    if (!car_legal(v_103)) v_103 = carerror(v_103); else
    v_103 = car(v_103);
    if (!car_legal(v_103)) v_103 = carerror(v_103); else
    v_103 = car(v_103);
    stack[-1] = v_103;
    goto v_65;
v_82:
    v_103 = stack[-2];
    if (!car_legal(v_103)) v_103 = carerror(v_103); else
    v_103 = car(v_103);
    stack[-1] = v_103;
    goto v_65;
    stack[-1] = nil;
v_65:
    v_103 = stack[-2];
    if (!car_legal(v_103)) v_103 = carerror(v_103); else
    v_103 = car(v_103);
    if (!car_legal(v_103)) v_103 = cdrerror(v_103); else
    v_103 = cdr(v_103);
    {   LispObject fn = basic_elt(env, 6); // negf
    stack[0] = (*qfn1(fn))(fn, v_103);
    }
    env = stack[-3];
    v_103 = stack[-2];
    if (!car_legal(v_103)) v_103 = cdrerror(v_103); else
    v_103 = cdr(v_103);
    if (!car_legal(v_103)) v_104 = carerror(v_103); else
    v_104 = car(v_103);
    v_103 = nil;
    v_103 = list2(v_104, v_103);
    env = stack[-3];
    v_103 = acons(stack[-1], stack[0], v_103);
    stack[-2] = v_103;
    goto v_40;
v_42:
v_40:
    v_103 = stack[-2];
    return onevalue(v_103);
}



// Code for ibalp_process!-var

static LispObject CC_ibalp_processKvar(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_170, v_171, v_172;
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
    real_push(nil, nil, nil, nil, nil);
    real_push(nil);
    stack_popper stack_popper_var(17);
// copy arguments values to proper place
    stack[-11] = v_5;
    stack[-12] = v_4;
    stack[-13] = v_3;
    stack[-14] = v_2;
// end of prologue
    stack[0] = basic_elt(env, 1); // !!
    v_170 = stack[-12];
    v_170 = Lexplode(nil, v_170);
    env = stack[-16];
    v_170 = cons(stack[0], v_170);
    env = stack[-16];
    v_170 = Lcompress(nil, v_170);
    env = stack[-16];
    v_170 = Lintern(nil, v_170);
    env = stack[-16];
    stack[-12] = v_170;
    v_171 = stack[-12];
    v_170 = stack[-13];
    v_170 = Latsoc(nil, v_171, v_170);
    v_171 = v_170;
    if (v_170 == nil) goto v_20;
    v_170 = v_171;
    if (!car_legal(v_170)) v_170 = cdrerror(v_170); else
    v_170 = cdr(v_170);
    stack[0] = v_170;
    goto v_18;
v_20:
    stack[-15] = stack[-12];
    stack[-10] = nil;
    stack[-9] = nil;
    stack[-8] = nil;
    stack[-7] = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-6] = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-5] = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    stack[-4] = nil;
    stack[-3] = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-2] = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-1] = nil;
    stack[0] = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_172 = nil;
    v_171 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_170 = nil;
    v_170 = list3(v_172, v_171, v_170);
    env = stack[-16];
    v_170 = list3star(stack[-2], stack[-1], stack[0], v_170);
    env = stack[-16];
    v_170 = list3star(stack[-5], stack[-4], stack[-3], v_170);
    env = stack[-16];
    v_170 = list3star(stack[-8], stack[-7], stack[-6], v_170);
    env = stack[-16];
    v_170 = list3star(stack[-15], stack[-10], stack[-9], v_170);
    env = stack[-16];
    stack[0] = v_170;
    v_172 = stack[-12];
    v_171 = stack[0];
    v_170 = stack[-13];
    v_170 = acons(v_172, v_171, v_170);
    env = stack[-16];
    stack[-13] = v_170;
    goto v_18;
v_18:
    v_171 = stack[-11];
    v_170 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_170 = Leqn_2(nil, v_171, v_170);
    env = stack[-16];
    if (v_170 == nil) goto v_55;
    v_170 = stack[0];
    if (!car_legal(v_170)) v_170 = cdrerror(v_170); else
    v_170 = cdr(v_170);
    if (!car_legal(v_170)) stack[-1] = cdrerror(v_170); else
    stack[-1] = cdr(v_170);
    v_171 = stack[-14];
    v_170 = stack[0];
    if (!car_legal(v_170)) v_170 = cdrerror(v_170); else
    v_170 = cdr(v_170);
    if (!car_legal(v_170)) v_170 = cdrerror(v_170); else
    v_170 = cdr(v_170);
    if (!car_legal(v_170)) v_170 = carerror(v_170); else
    v_170 = car(v_170);
    v_170 = cons(v_171, v_170);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 2); // setcar
    v_170 = (*qfn2(fn))(fn, stack[-1], v_170);
    }
    env = stack[-16];
    v_170 = stack[0];
    if (!car_legal(v_170)) v_170 = cdrerror(v_170); else
    v_170 = cdr(v_170);
    if (!car_legal(v_170)) v_170 = cdrerror(v_170); else
    v_170 = cdr(v_170);
    if (!car_legal(v_170)) v_170 = cdrerror(v_170); else
    v_170 = cdr(v_170);
    if (!car_legal(v_170)) stack[-1] = cdrerror(v_170); else
    stack[-1] = cdr(v_170);
    v_170 = stack[0];
    if (!car_legal(v_170)) v_170 = cdrerror(v_170); else
    v_170 = cdr(v_170);
    if (!car_legal(v_170)) v_170 = cdrerror(v_170); else
    v_170 = cdr(v_170);
    if (!car_legal(v_170)) v_170 = cdrerror(v_170); else
    v_170 = cdr(v_170);
    if (!car_legal(v_170)) v_170 = cdrerror(v_170); else
    v_170 = cdr(v_170);
    if (!car_legal(v_170)) v_170 = carerror(v_170); else
    v_170 = car(v_170);
    v_170 = add1(v_170);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 2); // setcar
    v_170 = (*qfn2(fn))(fn, stack[-1], v_170);
    }
    env = stack[-16];
    v_170 = stack[0];
    if (!car_legal(v_170)) v_170 = cdrerror(v_170); else
    v_170 = cdr(v_170);
    if (!car_legal(v_170)) v_170 = cdrerror(v_170); else
    v_170 = cdr(v_170);
    if (!car_legal(v_170)) v_170 = cdrerror(v_170); else
    v_170 = cdr(v_170);
    if (!car_legal(v_170)) v_170 = cdrerror(v_170); else
    v_170 = cdr(v_170);
    if (!car_legal(v_170)) v_170 = cdrerror(v_170); else
    v_170 = cdr(v_170);
    if (!car_legal(v_170)) v_170 = cdrerror(v_170); else
    v_170 = cdr(v_170);
    if (!car_legal(v_170)) v_170 = cdrerror(v_170); else
    v_170 = cdr(v_170);
    if (!car_legal(v_170)) stack[-1] = cdrerror(v_170); else
    stack[-1] = cdr(v_170);
    v_170 = stack[0];
    if (!car_legal(v_170)) v_170 = cdrerror(v_170); else
    v_170 = cdr(v_170);
    if (!car_legal(v_170)) v_170 = cdrerror(v_170); else
    v_170 = cdr(v_170);
    if (!car_legal(v_170)) v_170 = cdrerror(v_170); else
    v_170 = cdr(v_170);
    if (!car_legal(v_170)) v_170 = cdrerror(v_170); else
    v_170 = cdr(v_170);
    if (!car_legal(v_170)) v_170 = cdrerror(v_170); else
    v_170 = cdr(v_170);
    if (!car_legal(v_170)) v_170 = cdrerror(v_170); else
    v_170 = cdr(v_170);
    if (!car_legal(v_170)) v_170 = cdrerror(v_170); else
    v_170 = cdr(v_170);
    if (!car_legal(v_170)) v_170 = cdrerror(v_170); else
    v_170 = cdr(v_170);
    if (!car_legal(v_170)) v_170 = carerror(v_170); else
    v_170 = car(v_170);
    v_170 = add1(v_170);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 2); // setcar
    v_170 = (*qfn2(fn))(fn, stack[-1], v_170);
    }
    env = stack[-16];
    stack[-1] = stack[-14];
    v_171 = stack[0];
    v_170 = stack[-14];
    if (!car_legal(v_170)) v_170 = carerror(v_170); else
    v_170 = car(v_170);
    v_170 = cons(v_171, v_170);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 2); // setcar
    v_170 = (*qfn2(fn))(fn, stack[-1], v_170);
    }
    goto v_53;
v_55:
    v_170 = stack[0];
    if (!car_legal(v_170)) v_170 = cdrerror(v_170); else
    v_170 = cdr(v_170);
    if (!car_legal(v_170)) v_170 = cdrerror(v_170); else
    v_170 = cdr(v_170);
    if (!car_legal(v_170)) stack[-1] = cdrerror(v_170); else
    stack[-1] = cdr(v_170);
    v_171 = stack[-14];
    v_170 = stack[0];
    if (!car_legal(v_170)) v_170 = cdrerror(v_170); else
    v_170 = cdr(v_170);
    if (!car_legal(v_170)) v_170 = cdrerror(v_170); else
    v_170 = cdr(v_170);
    if (!car_legal(v_170)) v_170 = cdrerror(v_170); else
    v_170 = cdr(v_170);
    if (!car_legal(v_170)) v_170 = carerror(v_170); else
    v_170 = car(v_170);
    v_170 = cons(v_171, v_170);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 2); // setcar
    v_170 = (*qfn2(fn))(fn, stack[-1], v_170);
    }
    env = stack[-16];
    v_170 = stack[0];
    if (!car_legal(v_170)) v_170 = cdrerror(v_170); else
    v_170 = cdr(v_170);
    if (!car_legal(v_170)) v_170 = cdrerror(v_170); else
    v_170 = cdr(v_170);
    if (!car_legal(v_170)) v_170 = cdrerror(v_170); else
    v_170 = cdr(v_170);
    if (!car_legal(v_170)) v_170 = cdrerror(v_170); else
    v_170 = cdr(v_170);
    if (!car_legal(v_170)) stack[-1] = cdrerror(v_170); else
    stack[-1] = cdr(v_170);
    v_170 = stack[0];
    if (!car_legal(v_170)) v_170 = cdrerror(v_170); else
    v_170 = cdr(v_170);
    if (!car_legal(v_170)) v_170 = cdrerror(v_170); else
    v_170 = cdr(v_170);
    if (!car_legal(v_170)) v_170 = cdrerror(v_170); else
    v_170 = cdr(v_170);
    if (!car_legal(v_170)) v_170 = cdrerror(v_170); else
    v_170 = cdr(v_170);
    if (!car_legal(v_170)) v_170 = cdrerror(v_170); else
    v_170 = cdr(v_170);
    if (!car_legal(v_170)) v_170 = carerror(v_170); else
    v_170 = car(v_170);
    v_170 = add1(v_170);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 2); // setcar
    v_170 = (*qfn2(fn))(fn, stack[-1], v_170);
    }
    env = stack[-16];
    v_170 = stack[0];
    if (!car_legal(v_170)) v_170 = cdrerror(v_170); else
    v_170 = cdr(v_170);
    if (!car_legal(v_170)) v_170 = cdrerror(v_170); else
    v_170 = cdr(v_170);
    if (!car_legal(v_170)) v_170 = cdrerror(v_170); else
    v_170 = cdr(v_170);
    if (!car_legal(v_170)) v_170 = cdrerror(v_170); else
    v_170 = cdr(v_170);
    if (!car_legal(v_170)) v_170 = cdrerror(v_170); else
    v_170 = cdr(v_170);
    if (!car_legal(v_170)) v_170 = cdrerror(v_170); else
    v_170 = cdr(v_170);
    if (!car_legal(v_170)) v_170 = cdrerror(v_170); else
    v_170 = cdr(v_170);
    if (!car_legal(v_170)) v_170 = cdrerror(v_170); else
    v_170 = cdr(v_170);
    if (!car_legal(v_170)) stack[-1] = cdrerror(v_170); else
    stack[-1] = cdr(v_170);
    v_170 = stack[0];
    if (!car_legal(v_170)) v_170 = cdrerror(v_170); else
    v_170 = cdr(v_170);
    if (!car_legal(v_170)) v_170 = cdrerror(v_170); else
    v_170 = cdr(v_170);
    if (!car_legal(v_170)) v_170 = cdrerror(v_170); else
    v_170 = cdr(v_170);
    if (!car_legal(v_170)) v_170 = cdrerror(v_170); else
    v_170 = cdr(v_170);
    if (!car_legal(v_170)) v_170 = cdrerror(v_170); else
    v_170 = cdr(v_170);
    if (!car_legal(v_170)) v_170 = cdrerror(v_170); else
    v_170 = cdr(v_170);
    if (!car_legal(v_170)) v_170 = cdrerror(v_170); else
    v_170 = cdr(v_170);
    if (!car_legal(v_170)) v_170 = cdrerror(v_170); else
    v_170 = cdr(v_170);
    if (!car_legal(v_170)) v_170 = cdrerror(v_170); else
    v_170 = cdr(v_170);
    if (!car_legal(v_170)) v_170 = carerror(v_170); else
    v_170 = car(v_170);
    v_170 = add1(v_170);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 2); // setcar
    v_170 = (*qfn2(fn))(fn, stack[-1], v_170);
    }
    env = stack[-16];
    v_170 = stack[-14];
    if (!car_legal(v_170)) stack[-1] = cdrerror(v_170); else
    stack[-1] = cdr(v_170);
    v_171 = stack[0];
    v_170 = stack[-14];
    if (!car_legal(v_170)) v_170 = cdrerror(v_170); else
    v_170 = cdr(v_170);
    if (!car_legal(v_170)) v_170 = carerror(v_170); else
    v_170 = car(v_170);
    v_170 = cons(v_171, v_170);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 2); // setcar
    v_170 = (*qfn2(fn))(fn, stack[-1], v_170);
    }
    goto v_53;
v_53:
    v_170 = stack[-13];
    return onevalue(v_170);
}



// Code for cgp_ci

static LispObject CC_cgp_ci(LispObject env,
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
    v_7 = static_cast<LispObject>(96)+TAG_FIXNUM; // 6
    {
        LispObject fn = basic_elt(env, 1); // nth
        return (*qfn2(fn))(fn, v_8, v_7);
    }
}



// Code for diff!-k!-times!-mod!-p

static LispObject CC_diffKkKtimesKmodKp(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_117, v_118, v_119;
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
    v_117 = stack[-3];
    if (!consp(v_117)) goto v_12;
    else goto v_13;
v_12:
    v_117 = lisp_true;
    goto v_11;
v_13:
    v_117 = stack[-3];
    if (!car_legal(v_117)) v_117 = carerror(v_117); else
    v_117 = car(v_117);
    v_117 = (consp(v_117) ? nil : lisp_true);
    goto v_11;
    v_117 = nil;
v_11:
    if (v_117 == nil) goto v_9;
    v_117 = nil;
    goto v_7;
v_9:
    v_117 = stack[-3];
    if (!car_legal(v_117)) v_117 = carerror(v_117); else
    v_117 = car(v_117);
    if (!car_legal(v_117)) v_117 = carerror(v_117); else
    v_117 = car(v_117);
    if (!car_legal(v_117)) v_118 = carerror(v_117); else
    v_118 = car(v_117);
    v_117 = stack[-1];
    if (equal(v_118, v_117)) goto v_22;
    else goto v_23;
v_22:
    v_117 = stack[-3];
    if (!car_legal(v_117)) v_117 = carerror(v_117); else
    v_117 = car(v_117);
    if (!car_legal(v_117)) v_117 = carerror(v_117); else
    v_117 = car(v_117);
    if (!car_legal(v_117)) v_118 = cdrerror(v_117); else
    v_118 = cdr(v_117);
    v_117 = stack[-2];
    v_117 = static_cast<LispObject>(lessp2(v_118, v_117));
    v_117 = v_117 ? lisp_true : nil;
    env = stack[-5];
    if (v_117 == nil) goto v_32;
    v_117 = nil;
    goto v_30;
v_32:
    v_117 = stack[-3];
    if (!car_legal(v_117)) v_117 = carerror(v_117); else
    v_117 = car(v_117);
    if (!car_legal(v_117)) v_117 = carerror(v_117); else
    v_117 = car(v_117);
    if (!car_legal(v_117)) v_118 = cdrerror(v_117); else
    v_118 = cdr(v_117);
    v_117 = stack[-2];
    if (equal(v_118, v_117)) goto v_40;
    else goto v_41;
v_40:
    v_117 = stack[-3];
    if (!car_legal(v_117)) v_117 = carerror(v_117); else
    v_117 = car(v_117);
    if (!car_legal(v_117)) v_117 = cdrerror(v_117); else
    v_117 = cdr(v_117);
    goto v_30;
v_41:
    v_117 = stack[-3];
    if (!car_legal(v_117)) v_117 = carerror(v_117); else
    v_117 = car(v_117);
    if (!car_legal(v_117)) v_117 = carerror(v_117); else
    v_117 = car(v_117);
    if (!car_legal(v_117)) v_118 = cdrerror(v_117); else
    v_118 = cdr(v_117);
    v_117 = stack[-2];
    {   LispObject fn = basic_elt(env, 1); // binomial!-coefft!-mod!-p
    v_118 = (*qfn2(fn))(fn, v_118, v_117);
    }
    env = stack[-5];
    v_117 = stack[-3];
    if (!car_legal(v_117)) v_117 = carerror(v_117); else
    v_117 = car(v_117);
    if (!car_legal(v_117)) v_117 = cdrerror(v_117); else
    v_117 = cdr(v_117);
    {   LispObject fn = basic_elt(env, 2); // times!-mod!-p
    stack[0] = (*qfn2(fn))(fn, v_118, v_117);
    }
    env = stack[-5];
    v_117 = stack[-3];
    if (!car_legal(v_117)) v_119 = cdrerror(v_117); else
    v_119 = cdr(v_117);
    v_118 = stack[-2];
    v_117 = stack[-1];
    {   LispObject fn = basic_elt(env, 0); // diff!-k!-times!-mod!-p
    v_117 = (*qfn3(fn))(fn, v_119, v_118, v_117);
    }
    env = stack[-5];
    stack[-4] = stack[0];
    stack[0] = v_117;
    v_117 = stack[-4];
    if (v_117 == nil) goto v_71;
    else goto v_72;
v_71:
    v_117 = stack[0];
    goto v_70;
v_72:
    v_117 = stack[-3];
    if (!car_legal(v_117)) v_117 = carerror(v_117); else
    v_117 = car(v_117);
    if (!car_legal(v_117)) v_117 = carerror(v_117); else
    v_117 = car(v_117);
    if (!car_legal(v_117)) v_118 = cdrerror(v_117); else
    v_118 = cdr(v_117);
    v_117 = stack[-2];
    v_117 = difference2(v_118, v_117);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 3); // mksp
    v_119 = (*qfn2(fn))(fn, stack[-1], v_117);
    }
    v_118 = stack[-4];
    v_117 = stack[0];
    return acons(v_119, v_118, v_117);
    v_117 = nil;
v_70:
    goto v_30;
    v_117 = nil;
v_30:
    goto v_7;
v_23:
    v_117 = stack[-3];
    if (!car_legal(v_117)) v_117 = carerror(v_117); else
    v_117 = car(v_117);
    if (!car_legal(v_117)) v_119 = cdrerror(v_117); else
    v_119 = cdr(v_117);
    v_118 = stack[-2];
    v_117 = stack[-1];
    {   LispObject fn = basic_elt(env, 0); // diff!-k!-times!-mod!-p
    stack[0] = (*qfn3(fn))(fn, v_119, v_118, v_117);
    }
    env = stack[-5];
    v_117 = stack[-3];
    if (!car_legal(v_117)) v_119 = cdrerror(v_117); else
    v_119 = cdr(v_117);
    v_118 = stack[-2];
    v_117 = stack[-1];
    {   LispObject fn = basic_elt(env, 0); // diff!-k!-times!-mod!-p
    v_117 = (*qfn3(fn))(fn, v_119, v_118, v_117);
    }
    v_118 = stack[0];
    v_119 = v_118;
    if (v_119 == nil) goto v_105;
    else goto v_106;
v_105:
    goto v_104;
v_106:
    v_119 = stack[-3];
    if (!car_legal(v_119)) v_119 = carerror(v_119); else
    v_119 = car(v_119);
    if (!car_legal(v_119)) v_119 = carerror(v_119); else
    v_119 = car(v_119);
    return acons(v_119, v_118, v_117);
    v_117 = nil;
v_104:
    goto v_7;
    v_117 = nil;
v_7:
    return onevalue(v_117);
}



// Code for terpri!*

static LispObject CC_terpriH(LispObject env,
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
    v_63 = qvalue(basic_elt(env, 1)); // outputhandler!*
    if (v_63 == nil) goto v_11;
    v_64 = qvalue(basic_elt(env, 1)); // outputhandler!*
    v_65 = basic_elt(env, 2); // terpri
    v_63 = stack[0];
        return Lapply2(nil, v_64, v_65, v_63);
v_11:
    v_63 = qvalue(basic_elt(env, 3)); // testing!-width!*
    if (v_63 == nil) goto v_18;
    v_63 = lisp_true;
    setvalue(basic_elt(env, 4), v_63); // overflowed!*
    goto v_6;
v_18:
    v_63 = qvalue(basic_elt(env, 5)); // !*fort
    if (v_63 == nil) goto v_22;
    v_63 = stack[0];
    {
        LispObject fn = basic_elt(env, 13); // fterpri
        return (*qfn1(fn))(fn, v_63);
    }
v_22:
    v_63 = qvalue(basic_elt(env, 6)); // !*nat
    if (v_63 == nil) goto v_27;
    v_63 = qvalue(basic_elt(env, 7)); // pline!*
    if (v_63 == nil) goto v_27;
    v_63 = qvalue(basic_elt(env, 7)); // pline!*
    v_63 = Lreverse(nil, v_63);
    env = stack[-2];
    setvalue(basic_elt(env, 7), v_63); // pline!*
    v_63 = qvalue(basic_elt(env, 8)); // ymax!*
    stack[-1] = v_63;
v_37:
    v_64 = stack[-1];
    v_63 = qvalue(basic_elt(env, 9)); // ymin!*
    v_63 = difference2(v_64, v_63);
    env = stack[-2];
    v_63 = Lminusp(nil, v_63);
    env = stack[-2];
    if (v_63 == nil) goto v_42;
    goto v_36;
v_42:
    v_64 = qvalue(basic_elt(env, 7)); // pline!*
    v_63 = stack[-1];
    {   LispObject fn = basic_elt(env, 14); // scprint
    v_63 = (*qfn2(fn))(fn, v_64, v_63);
    }
    env = stack[-2];
    v_63 = Lterpri(nil);
    env = stack[-2];
    v_63 = stack[-1];
    v_63 = sub1(v_63);
    env = stack[-2];
    stack[-1] = v_63;
    goto v_37;
v_36:
    v_63 = nil;
    setvalue(basic_elt(env, 7), v_63); // pline!*
    goto v_9;
v_27:
v_9:
    v_63 = stack[0];
    if (v_63 == nil) goto v_58;
    v_63 = Lterpri(nil);
    env = stack[-2];
    goto v_56;
v_58:
v_56:
    v_63 = qvalue(basic_elt(env, 10)); // orig!*
    setvalue(basic_elt(env, 11), v_63); // posn!*
    v_63 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    setvalue(basic_elt(env, 9), v_63); // ymin!*
    setvalue(basic_elt(env, 8), v_63); // ymax!*
    setvalue(basic_elt(env, 12), v_63); // ycoord!*
    v_63 = nil;
v_6:
    return onevalue(v_63);
}



// Code for find_sub_df

static LispObject CC_find_sub_df(LispObject env,
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
    v_25 = stack[-1];
    v_24 = stack[0];
    if (!car_legal(v_24)) v_24 = carerror(v_24); else
    v_24 = car(v_24);
    {   LispObject fn = basic_elt(env, 1); // is_sub_df
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



// Code for redcodmat

static LispObject CC_redcodmat(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil);
    stack_popper stack_popper_var(2);
// end of prologue
    v_21 = qvalue(basic_elt(env, 1)); // rowmin
    stack[0] = v_21;
v_6:
    v_22 = qvalue(basic_elt(env, 2)); // rowmax
    v_21 = stack[0];
    v_21 = difference2(v_22, v_21);
    env = stack[-1];
    v_21 = Lminusp(nil, v_21);
    env = stack[-1];
    if (v_21 == nil) goto v_11;
    v_21 = nil;
    goto v_5;
v_11:
    v_21 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // testred
    v_21 = (*qfn1(fn))(fn, v_21);
    }
    env = stack[-1];
    v_21 = stack[0];
    v_21 = add1(v_21);
    env = stack[-1];
    stack[0] = v_21;
    goto v_6;
v_5:
    return onevalue(v_21);
}



// Code for exchk1

static LispObject CC_exchk1(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_149, v_150, v_151;
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
v_10:
    v_149 = stack[-4];
    if (v_149 == nil) goto v_13;
    else goto v_14;
v_13:
    v_150 = stack[-1];
    v_149 = stack[-2];
    v_150 = Lappend_2(nil, v_150, v_149);
    env = stack[-6];
    v_149 = stack[-3];
    {
        LispObject fn = basic_elt(env, 3); // exchk2
        return (*qfn2(fn))(fn, v_150, v_149);
    }
v_14:
    v_149 = stack[-4];
    if (!car_legal(v_149)) v_149 = carerror(v_149); else
    v_149 = car(v_149);
    if (!car_legal(v_149)) v_150 = carerror(v_149); else
    v_150 = car(v_149);
    v_149 = basic_elt(env, 1); // expt
    if (!consp(v_150)) goto v_22;
    v_150 = car(v_150);
    if (v_150 == v_149) goto v_21;
    else goto v_22;
v_21:
    v_151 = basic_elt(env, 2); // times
    v_149 = stack[-4];
    if (!car_legal(v_149)) v_149 = carerror(v_149); else
    v_149 = car(v_149);
    if (!car_legal(v_149)) v_150 = cdrerror(v_149); else
    v_150 = cdr(v_149);
    v_149 = stack[-4];
    if (!car_legal(v_149)) v_149 = carerror(v_149); else
    v_149 = car(v_149);
    if (!car_legal(v_149)) v_149 = carerror(v_149); else
    v_149 = car(v_149);
    if (!car_legal(v_149)) v_149 = cdrerror(v_149); else
    v_149 = cdr(v_149);
    if (!car_legal(v_149)) v_149 = cdrerror(v_149); else
    v_149 = cdr(v_149);
    if (!car_legal(v_149)) v_149 = carerror(v_149); else
    v_149 = car(v_149);
    v_149 = list3(v_151, v_150, v_149);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 4); // simpexpon
    v_149 = (*qfn1(fn))(fn, v_149);
    }
    env = stack[-6];
    stack[-5] = v_149;
    v_149 = stack[-4];
    if (!car_legal(v_149)) v_149 = carerror(v_149); else
    v_149 = car(v_149);
    if (!car_legal(v_149)) v_149 = carerror(v_149); else
    v_149 = car(v_149);
    if (!car_legal(v_149)) v_149 = cdrerror(v_149); else
    v_149 = cdr(v_149);
    if (!car_legal(v_149)) v_149 = carerror(v_149); else
    v_149 = car(v_149);
    if (is_number(v_149)) goto v_46;
    else goto v_47;
v_46:
    v_150 = stack[-5];
    v_149 = stack[-1];
    {   LispObject fn = basic_elt(env, 5); // assoc2
    v_149 = (*qfn2(fn))(fn, v_150, v_149);
    }
    env = stack[-6];
    v_150 = v_149;
    if (v_150 == nil) goto v_59;
    stack[0] = v_149;
    if (!car_legal(v_149)) v_150 = carerror(v_149); else
    v_150 = car(v_149);
    v_149 = stack[-4];
    if (!car_legal(v_149)) v_149 = carerror(v_149); else
    v_149 = car(v_149);
    if (!car_legal(v_149)) v_149 = carerror(v_149); else
    v_149 = car(v_149);
    if (!car_legal(v_149)) v_149 = cdrerror(v_149); else
    v_149 = cdr(v_149);
    if (!car_legal(v_149)) v_149 = carerror(v_149); else
    v_149 = car(v_149);
    v_149 = times2(v_150, v_149);
    env = stack[-6];
    if (!car_legal(stack[0])) rplaca_fails(stack[0]);
    setcar(stack[0], v_149);
    goto v_57;
v_59:
    v_149 = stack[-4];
    if (!car_legal(v_149)) v_149 = carerror(v_149); else
    v_149 = car(v_149);
    if (!car_legal(v_149)) v_149 = carerror(v_149); else
    v_149 = car(v_149);
    if (!car_legal(v_149)) v_149 = cdrerror(v_149); else
    v_149 = cdr(v_149);
    if (!car_legal(v_149)) v_151 = carerror(v_149); else
    v_151 = car(v_149);
    v_150 = stack[-5];
    v_149 = stack[-1];
    v_149 = acons(v_151, v_150, v_149);
    env = stack[-6];
    stack[-1] = v_149;
    goto v_57;
v_57:
    goto v_45;
v_47:
    v_149 = stack[-4];
    if (!car_legal(v_149)) v_149 = carerror(v_149); else
    v_149 = car(v_149);
    if (!car_legal(v_149)) v_149 = carerror(v_149); else
    v_149 = car(v_149);
    if (!car_legal(v_149)) v_149 = cdrerror(v_149); else
    v_149 = cdr(v_149);
    if (!car_legal(v_149)) v_150 = carerror(v_149); else
    v_150 = car(v_149);
    v_149 = stack[-2];
    v_149 = Lassoc(nil, v_150, v_149);
    v_150 = v_149;
    if (v_150 == nil) goto v_93;
    stack[0] = v_149;
    v_150 = stack[-5];
    if (!car_legal(v_149)) v_149 = cdrerror(v_149); else
    v_149 = cdr(v_149);
    {   LispObject fn = basic_elt(env, 6); // addsq
    v_149 = (*qfn2(fn))(fn, v_150, v_149);
    }
    env = stack[-6];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_149);
    goto v_91;
v_93:
    v_149 = stack[-4];
    if (!car_legal(v_149)) v_149 = carerror(v_149); else
    v_149 = car(v_149);
    if (!car_legal(v_149)) v_149 = carerror(v_149); else
    v_149 = car(v_149);
    if (!car_legal(v_149)) v_149 = cdrerror(v_149); else
    v_149 = cdr(v_149);
    if (!car_legal(v_149)) v_151 = carerror(v_149); else
    v_151 = car(v_149);
    v_150 = stack[-5];
    v_149 = stack[-2];
    v_149 = acons(v_151, v_150, v_149);
    env = stack[-6];
    stack[-2] = v_149;
    goto v_91;
v_91:
    goto v_45;
v_45:
    v_149 = stack[-4];
    if (!car_legal(v_149)) stack[0] = cdrerror(v_149); else
    stack[0] = cdr(v_149);
    v_149 = stack[-1];
    v_149 = ncons(v_149);
    env = stack[-6];
    {
        LispObject v_158 = stack[0];
        LispObject v_159 = stack[-3];
        LispObject v_160 = stack[-2];
        LispObject fn = basic_elt(env, 0); // exchk1
        return (*qfn4up(fn))(fn, v_158, v_159, v_160, v_149);
    }
    goto v_9;
v_22:
    v_149 = stack[-4];
    if (!car_legal(v_149)) v_149 = carerror(v_149); else
    v_149 = car(v_149);
    if (!car_legal(v_149)) v_150 = cdrerror(v_149); else
    v_150 = cdr(v_149);
    v_149 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_150 == v_149) goto v_118;
    else goto v_119;
v_118:
    v_149 = stack[-4];
    if (!car_legal(v_149)) v_149 = cdrerror(v_149); else
    v_149 = cdr(v_149);
    stack[-5] = v_149;
    v_149 = stack[-4];
    if (!car_legal(v_149)) v_149 = carerror(v_149); else
    v_149 = car(v_149);
    if (!car_legal(v_149)) v_149 = carerror(v_149); else
    v_149 = car(v_149);
    {   LispObject fn = basic_elt(env, 7); // sqchk
    v_150 = (*qfn1(fn))(fn, v_149);
    }
    env = stack[-6];
    v_149 = stack[-3];
    v_149 = cons(v_150, v_149);
    env = stack[-6];
    stack[-3] = v_149;
    v_149 = stack[-5];
    stack[-4] = v_149;
    goto v_10;
v_119:
    v_149 = stack[-4];
    if (!car_legal(v_149)) v_149 = cdrerror(v_149); else
    v_149 = cdr(v_149);
    stack[-5] = v_149;
    stack[0] = basic_elt(env, 1); // expt
    v_149 = stack[-4];
    if (!car_legal(v_149)) v_149 = carerror(v_149); else
    v_149 = car(v_149);
    if (!car_legal(v_149)) v_149 = carerror(v_149); else
    v_149 = car(v_149);
    {   LispObject fn = basic_elt(env, 7); // sqchk
    v_150 = (*qfn1(fn))(fn, v_149);
    }
    env = stack[-6];
    v_149 = stack[-4];
    if (!car_legal(v_149)) v_149 = carerror(v_149); else
    v_149 = car(v_149);
    if (!car_legal(v_149)) v_149 = cdrerror(v_149); else
    v_149 = cdr(v_149);
    v_150 = list3(stack[0], v_150, v_149);
    env = stack[-6];
    v_149 = stack[-3];
    v_149 = cons(v_150, v_149);
    env = stack[-6];
    stack[-3] = v_149;
    v_149 = stack[-5];
    stack[-4] = v_149;
    goto v_10;
    v_149 = nil;
v_9:
    return onevalue(v_149);
}



// Code for modminusp!:

static LispObject CC_modminuspT(LispObject env,
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
    v_18 = v_2;
// end of prologue
    v_19 = qvalue(basic_elt(env, 1)); // !*balanced_mod
    if (v_19 == nil) goto v_7;
    v_19 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    if (!car_legal(v_18)) v_18 = cdrerror(v_18); else
    v_18 = cdr(v_18);
    v_18 = times2(v_19, v_18);
    env = stack[0];
    v_19 = qvalue(basic_elt(env, 2)); // current!-modulus
        return Lgreaterp_2(nil, v_18, v_19);
v_7:
    v_18 = nil;
    goto v_5;
    v_18 = nil;
v_5:
    return onevalue(v_18);
}



// Code for unchecked_getmatelem

static LispObject CC_unchecked_getmatelem(LispObject env,
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
    if (!car_legal(v_36)) v_37 = carerror(v_36); else
    v_37 = car(v_36);
    v_38 = v_37;
    v_36 = basic_elt(env, 1); // mat
    if (!consp(v_37)) goto v_9;
    v_37 = car(v_37);
    if (v_37 == v_36) goto v_10;
v_9:
    stack[-2] = basic_elt(env, 2); // matrix
    stack[0] = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_38 = basic_elt(env, 3); // "Matrix"
    v_36 = stack[-1];
    if (!car_legal(v_36)) v_37 = carerror(v_36); else
    v_37 = car(v_36);
    v_36 = basic_elt(env, 4); // "not set"
    v_36 = list3(v_38, v_37, v_36);
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 5); // rerror
    v_36 = (*qfn3(fn))(fn, stack[-2], stack[0], v_36);
    }
    goto v_8;
v_10:
    v_36 = v_38;
    if (!car_legal(v_36)) v_37 = cdrerror(v_36); else
    v_37 = cdr(v_36);
    v_36 = stack[-1];
    if (!car_legal(v_36)) v_36 = cdrerror(v_36); else
    v_36 = cdr(v_36);
    if (!car_legal(v_36)) v_36 = carerror(v_36); else
    v_36 = car(v_36);
    {   LispObject fn = basic_elt(env, 6); // nth
    v_37 = (*qfn2(fn))(fn, v_37, v_36);
    }
    env = stack[-3];
    v_36 = stack[-1];
    if (!car_legal(v_36)) v_36 = cdrerror(v_36); else
    v_36 = cdr(v_36);
    if (!car_legal(v_36)) v_36 = cdrerror(v_36); else
    v_36 = cdr(v_36);
    if (!car_legal(v_36)) v_36 = carerror(v_36); else
    v_36 = car(v_36);
    {
        LispObject fn = basic_elt(env, 6); // nth
        return (*qfn2(fn))(fn, v_37, v_36);
    }
v_8:
    v_36 = nil;
    return onevalue(v_36);
}



// Code for termordp!!

static LispObject CC_termordpB(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_3;
    v_21 = v_2;
// end of prologue
    v_20 = v_21;
    v_19 = stack[0];
    if (equal(v_20, v_19)) goto v_8;
    v_19 = v_21;
    {   LispObject fn = basic_elt(env, 1); // guesspftype
    stack[-1] = (*qfn1(fn))(fn, v_19);
    }
    env = stack[-2];
    v_19 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // guesspftype
    v_19 = (*qfn1(fn))(fn, v_19);
    }
    env = stack[-2];
    {
        LispObject v_24 = stack[-1];
        LispObject fn = basic_elt(env, 2); // termordp
        return (*qfn2(fn))(fn, v_24, v_19);
    }
v_8:
    v_19 = nil;
    goto v_6;
    v_19 = nil;
v_6:
    return onevalue(v_19);
}



// Code for scal!*list

static LispObject CC_scalHlist(LispObject env,
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
    {   LispObject fn = basic_elt(env, 2); // !:times
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



// Code for actual_alst

static LispObject CC_actual_alst(LispObject env,
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
    v_33 = stack[-1];
    if (v_33 == nil) goto v_11;
    else goto v_12;
v_11:
    v_33 = v_35;
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn1(fn))(fn, v_33);
    }
v_12:
    v_33 = stack[-1];
    if (!car_legal(v_33)) v_33 = carerror(v_33); else
    v_33 = car(v_33);
    if (!car_legal(v_33)) v_34 = carerror(v_33); else
    v_34 = car(v_33);
    v_33 = stack[0];
    v_33 = Lmemq(nil, v_34, v_33);
    if (v_33 == nil) goto v_17;
    v_33 = stack[-1];
    if (!car_legal(v_33)) v_33 = carerror(v_33); else
    v_33 = car(v_33);
    v_34 = v_35;
    v_33 = cons(v_33, v_34);
    env = stack[-2];
    v_35 = v_33;
    v_33 = stack[-1];
    if (!car_legal(v_33)) v_33 = cdrerror(v_33); else
    v_33 = cdr(v_33);
    stack[-1] = v_33;
    goto v_8;
v_17:
    v_33 = stack[-1];
    if (!car_legal(v_33)) v_33 = cdrerror(v_33); else
    v_33 = cdr(v_33);
    stack[-1] = v_33;
    goto v_8;
    v_33 = nil;
    return onevalue(v_33);
}



// Code for symbid

static LispObject CC_symbid(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_83, v_84, v_85, v_86;
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
    v_85 = v_3;
    stack[0] = v_2;
// end of prologue
    v_83 = qvalue(basic_elt(env, 1)); // fname!*
    if (v_83 == nil) goto v_8;
    v_84 = qvalue(basic_elt(env, 2)); // ftype!*
    v_83 = basic_elt(env, 3); // (macro smacro inline)
    v_83 = Lmemq(nil, v_84, v_83);
    if (v_83 == nil) goto v_14;
    else goto v_15;
v_14:
    v_83 = stack[0];
    v_84 = v_85;
    v_83 = Latsoc(nil, v_83, v_84);
    if (v_83 == nil) goto v_21;
    else goto v_20;
v_21:
    v_83 = stack[0];
    v_83 = Lsymbol_specialp(nil, v_83);
    env = stack[-1];
    if (v_83 == nil) goto v_27;
    else goto v_26;
v_27:
    v_83 = stack[0];
    v_83 = Lsymbol_globalp(nil, v_83);
    env = stack[-1];
    if (v_83 == nil) goto v_32;
    else goto v_31;
v_32:
    v_83 = stack[0];
    if (v_83 == nil) goto v_37;
    else goto v_38;
v_37:
    v_83 = lisp_true;
    goto v_36;
v_38:
    v_84 = stack[0];
    v_83 = lisp_true;
    if (v_84 == v_83) goto v_45;
    else goto v_46;
v_45:
    v_83 = lisp_true;
    goto v_44;
v_46:
    v_83 = stack[0];
    if (!symbolp(v_83)) v_83 = nil;
    else { v_83 = qfastgets(v_83);
           if (v_83 != nil) { v_83 = elt(v_83, 17); // share
#ifdef RECORD_GET
             if (v_83 == SPID_NOPROP)
                record_get(elt(fastget_names, 17), 0),
                v_83 = nil;
             else record_get(elt(fastget_names, 17), 1),
                v_83 = lisp_true; }
           else record_get(elt(fastget_names, 17), 0); }
#else
             if (v_83 == SPID_NOPROP) v_83 = nil; else v_83 = lisp_true; }}
#endif
    if (v_83 == nil) goto v_55;
    v_83 = lisp_true;
    goto v_53;
v_55:
    v_83 = qvalue(basic_elt(env, 4)); // !*comp
    if (v_83 == nil) goto v_63;
    else goto v_62;
v_63:
    v_83 = qvalue(basic_elt(env, 5)); // !*cref
    if (v_83 == nil) goto v_67;
    else goto v_66;
v_67:
    v_84 = stack[0];
    v_83 = basic_elt(env, 6); // constant!?
    v_83 = get(v_84, v_83);
    env = stack[-1];
v_66:
v_62:
    goto v_53;
    v_83 = nil;
v_53:
    goto v_44;
    v_83 = nil;
v_44:
    goto v_36;
    v_83 = nil;
v_36:
v_31:
v_26:
v_20:
    v_83 = (v_83 == nil ? lisp_true : nil);
    goto v_13;
v_15:
    v_83 = nil;
    goto v_13;
    v_83 = nil;
v_13:
    if (v_83 == nil) goto v_8;
    v_86 = basic_elt(env, 7); // "nonlocal use of undeclared variable"
    v_85 = stack[0];
    v_84 = basic_elt(env, 8); // "in procedure"
    v_83 = qvalue(basic_elt(env, 1)); // fname!*
    v_83 = list4(v_86, v_85, v_84, v_83);
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 9); // lprim
    v_83 = (*qfn1(fn))(fn, v_83);
    }
    goto v_6;
v_8:
v_6:
    v_83 = stack[0];
    return onevalue(v_83);
}



// Code for nzeros

static LispObject CC_nzeros(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_23, v_24;
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
    v_24 = stack[0];
    v_23 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_24 == v_23) goto v_10;
    else goto v_11;
v_10:
    v_23 = stack[-1];
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn1(fn))(fn, v_23);
    }
v_11:
    v_24 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_23 = stack[-1];
    v_23 = cons(v_24, v_23);
    env = stack[-2];
    stack[-1] = v_23;
    v_23 = stack[0];
    v_23 = sub1(v_23);
    env = stack[-2];
    stack[0] = v_23;
    goto v_7;
    v_23 = nil;
    return onevalue(v_23);
}



// Code for cali_bc_inv

static LispObject CC_cali_bc_inv(LispObject env,
                         LispObject v_2)
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
        push(v_2);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_42 = v_2;
// end of prologue
    v_41 = v_42;
    v_40 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_41 == v_40) goto v_10;
    else goto v_11;
v_10:
    v_40 = lisp_true;
    goto v_9;
v_11:
    v_41 = v_42;
    v_40 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    v_40 = (v_41 == v_40 ? lisp_true : nil);
    goto v_9;
    v_40 = nil;
v_9:
    if (v_40 == nil) goto v_7;
    v_40 = v_42;
    goto v_5;
v_7:
    v_40 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_41 = v_42;
    {   LispObject fn = basic_elt(env, 1); // qremf
    v_40 = (*qfn2(fn))(fn, v_40, v_41);
    }
    v_41 = v_40;
    v_40 = v_41;
    if (!car_legal(v_40)) v_40 = cdrerror(v_40); else
    v_40 = cdr(v_40);
    if (v_40 == nil) goto v_32;
    v_40 = nil;
    goto v_25;
v_32:
    v_40 = v_41;
    if (!car_legal(v_40)) v_40 = carerror(v_40); else
    v_40 = car(v_40);
    goto v_25;
    v_40 = nil;
v_25:
    goto v_5;
    v_40 = nil;
v_5:
    return onevalue(v_40);
}



// Code for subsetp

static LispObject CC_subsetp(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_28, v_29, v_30, v_31;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_29 = v_3;
    v_30 = v_2;
// end of prologue
v_1:
    v_28 = v_30;
    if (v_28 == nil) goto v_7;
    else goto v_8;
v_7:
    v_28 = lisp_true;
    goto v_6;
v_8:
    v_28 = v_30;
    if (!car_legal(v_28)) v_31 = carerror(v_28); else
    v_31 = car(v_28);
    v_28 = v_29;
    v_28 = Lmember(nil, v_31, v_28);
    if (v_28 == nil) goto v_15;
    else goto v_16;
v_15:
    v_28 = nil;
    goto v_14;
v_16:
    v_28 = v_30;
    if (!car_legal(v_28)) v_30 = cdrerror(v_28); else
    v_30 = cdr(v_28);
    v_28 = v_29;
    v_29 = v_28;
    goto v_1;
    v_28 = nil;
v_14:
    goto v_6;
    v_28 = nil;
v_6:
    return onevalue(v_28);
}



// Code for wi_new

static LispObject CC_wi_new(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_19, v_20;
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
    v_19 = qvalue(basic_elt(env, 1)); // wi_number
    v_19 = add1(v_19);
    env = stack[-4];
    setvalue(basic_elt(env, 1), v_19); // wi_number
    v_20 = basic_elt(env, 2); // !:
    v_19 = qvalue(basic_elt(env, 1)); // wi_number
    {   LispObject fn = basic_elt(env, 4); // mkid
    v_19 = (*qfn2(fn))(fn, v_20, v_19);
    }
    env = stack[-4];
    v_19 = Lintern(nil, v_19);
    env = stack[-4];
    stack[-3] = v_19;
    stack[-1] = stack[-3];
    stack[0] = basic_elt(env, 3); // windex
    v_19 = stack[-2];
    v_19 = ncons(v_19);
    env = stack[-4];
    v_19 = Lputprop(nil, stack[-1], stack[0], v_19);
    v_19 = stack[-3];
    return onevalue(v_19);
}



setup_type const u16_setup[] =
{
    {"use-berlekamp",           G0W3,     G1W3,     G2W3,     CC_useKberlekamp,G4W3},
    {"rread1",                  CC_rread1,G1W0,     G2W0,     G3W0,     G4W0},
    {"aex_mvartest",            G0W2,     G1W2,     CC_aex_mvartest,G3W2,G4W2},
    {"idsort",                  G0W1,     CC_idsort,G2W1,     G3W1,     G4W1},
    {"talp_subalchk",           G0W1,     CC_talp_subalchk,G2W1,G3W1,   G4W1},
    {"qqe_ofsf_chsimpterm",     G0W1,     CC_qqe_ofsf_chsimpterm,G2W1,G3W1,G4W1},
    {"pasf_sisub-gand",         G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_pasf_sisubKgand},
    {"ibalp_negatet",           G0W1,     CC_ibalp_negatet,G2W1,G3W1,   G4W1},
    {"mapins",                  G0W2,     G1W2,     CC_mapins,G3W2,     G4W2},
    {"cird",                    CC_cird,  G1W0,     G2W0,     G3W0,     G4W0},
    {"bsubs",                   G0W1,     CC_bsubs, G2W1,     G3W1,     G4W1},
    {"wedgepf",                 G0W2,     G1W2,     CC_wedgepf,G3W2,    G4W2},
    {"all_edge",                G0W2,     G1W2,     CC_all_edge,G3W2,   G4W2},
    {"mkid",                    G0W2,     G1W2,     CC_mkid,  G3W2,     G4W2},
    {"mv-pow-chk",              G0W2,     G1W2,     CC_mvKpowKchk,G3W2, G4W2},
    {"dp_neg",                  G0W1,     CC_dp_neg,G2W1,     G3W1,     G4W1},
    {"pappend",                 G0W2,     G1W2,     CC_pappend,G3W2,    G4W2},
    {"b:extmult",               G0W2,     G1W2,     CC_bTextmult,G3W2,  G4W2},
    {"tr_write",                G0W1,     CC_tr_write,G2W1,   G3W1,     G4W1},
    {"difference-mod-p",        G0W2,     G1W2,     CC_differenceKmodKp,G3W2,G4W2},
    {"reduce-degree-mod-p",     G0W2,     G1W2,     CC_reduceKdegreeKmodKp,G3W2,G4W2},
    {"lalr_make_compressed_action_row1",G0W1,CC_lalr_make_compressed_action_row1,G2W1,G3W1,G4W1},
    {"powers3",                 G0W2,     G1W2,     CC_powers3,G3W2,    G4W2},
    {"ibalp_redclause",         G0W1,     CC_ibalp_redclause,G2W1,G3W1, G4W1},
    {"matrixrowrd",             CC_matrixrowrd,G1W0,G2W0,     G3W0,     G4W0},
    {"opmtch",                  G0W1,     CC_opmtch,G2W1,     G3W1,     G4W1},
    {"mkinds",                  G0W2,     G1W2,     CC_mkinds,G3W2,     G4W2},
    {"flatsizec",               G0W1,     CC_flatsizec,G2W1,  G3W1,     G4W1},
    {"general-modular-reciprocal",G0W1,   CC_generalKmodularKreciprocal,G2W1,G3W1,G4W1},
    {"ra_transform",            G0W3,     G1W3,     G2W3,     CC_ra_transform,G4W3},
    {"rl_prepfof",              G0W1,     CC_rl_prepfof,G2W1, G3W1,     G4W1},
    {"poly-minusp",             G0W1,     CC_polyKminusp,G2W1,G3W1,     G4W1},
    {"delet",                   G0W2,     G1W2,     CC_delet, G3W2,     G4W2},
    {"ibalp_emptyclausep",      G0W1,     CC_ibalp_emptyclausep,G2W1,G3W1,G4W1},
    {"c:extmult",               G0W2,     G1W2,     CC_cTextmult,G3W2,  G4W2},
    {"dpmat_coldegs",           G0W1,     CC_dpmat_coldegs,G2W1,G3W1,   G4W1},
    {"nb",                      G0W1,     CC_nb,    G2W1,     G3W1,     G4W1},
    {"lex_start_block_comment", G0W1,     CC_lex_start_block_comment,G2W1,G3W1,G4W1},
    {"setpage",                 G0W2,     G1W2,     CC_setpage,G3W2,    G4W2},
    {"mri_pasf2mriat",          G0W2,     G1W2,     CC_mri_pasf2mriat,G3W2,G4W2},
    {"qqe_simplterm",           G0W1,     CC_qqe_simplterm,G2W1,G3W1,   G4W1},
    {"pasf_mkpos",              G0W1,     CC_pasf_mkpos,G2W1, G3W1,     G4W1},
    {"ibalp_process-var",       G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_ibalp_processKvar},
    {"cgp_ci",                  G0W1,     CC_cgp_ci,G2W1,     G3W1,     G4W1},
    {"diff-k-times-mod-p",      G0W3,     G1W3,     G2W3,     CC_diffKkKtimesKmodKp,G4W3},
    {"terpri*",                 G0W1,     CC_terpriH,G2W1,    G3W1,     G4W1},
    {"find_sub_df",             G0W2,     G1W2,     CC_find_sub_df,G3W2,G4W2},
    {"redcodmat",               CC_redcodmat,G1W0,  G2W0,     G3W0,     G4W0},
    {"exchk1",                  G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_exchk1},
    {"modminusp:",              G0W1,     CC_modminuspT,G2W1, G3W1,     G4W1},
    {"unchecked_getmatelem",    G0W1,     CC_unchecked_getmatelem,G2W1,G3W1,G4W1},
    {"termordp!",               G0W2,     G1W2,     CC_termordpB,G3W2,  G4W2},
    {"scal*list",               G0W2,     G1W2,     CC_scalHlist,G3W2,  G4W2},
    {"actual_alst",             G0W2,     G1W2,     CC_actual_alst,G3W2,G4W2},
    {"symbid",                  G0W2,     G1W2,     CC_symbid,G3W2,     G4W2},
    {"nzeros",                  G0W1,     CC_nzeros,G2W1,     G3W1,     G4W1},
    {"cali_bc_inv",             G0W1,     CC_cali_bc_inv,G2W1,G3W1,     G4W1},
    {"subsetp",                 G0W2,     G1W2,     CC_subsetp,G3W2,    G4W2},
    {"wi_new",                  G0W1,     CC_wi_new,G2W1,     G3W1,     G4W1},
    {nullptr, 
        reinterpret_cast<no_args *>(
            reinterpret_cast<uintptr_t>("u16")),
        reinterpret_cast<one_arg *>(
            reinterpret_cast<uintptr_t>("81729 1102922 2761808")),
        nullptr, nullptr, nullptr}
};

// end of generated code
