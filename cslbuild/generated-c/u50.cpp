
// $destdir/u50.c        Machine generated C code

// $Id$

#include "config.h"
#include "headers.h"



// Code for ofsf_sminsert1

static LispObject CC_ofsf_sminsert1(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_130, v_131, v_132;
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
    real_push(nil);
    stack_popper stack_popper_var(7);
// copy arguments values to proper place
    stack[0] = v_6;
    stack[-1] = v_5;
    stack[-2] = v_4;
    stack[-3] = v_3;
    stack[-4] = v_2;
// end of prologue
    stack[-5] = stack[-3];
    v_130 = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // negsq
    v_130 = (*qfn1(fn))(fn, v_130);
    }
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 4); // addsq
    v_130 = (*qfn2(fn))(fn, stack[-5], v_130);
    }
    env = stack[-6];
    if (!car_legal(v_130)) v_130 = carerror(v_130); else
    v_130 = car(v_130);
    v_131 = v_130;
    v_130 = v_131;
    if (v_130 == nil) goto v_19;
    else goto v_20;
v_19:
    v_131 = stack[-4];
    v_130 = stack[-2];
    {   LispObject fn = basic_elt(env, 5); // ofsf_smeqtable
    v_130 = (*qfn2(fn))(fn, v_131, v_130);
    }
    env = stack[-6];
    v_132 = v_130;
    v_131 = v_132;
    v_130 = basic_elt(env, 1); // false
    if (v_131 == v_130) goto v_27;
    else goto v_28;
v_27:
    v_130 = basic_elt(env, 1); // false
    goto v_11;
v_28:
    v_131 = stack[-4];
    v_130 = v_132;
    if (v_131 == v_130) goto v_34;
    else goto v_35;
v_34:
    v_130 = basic_elt(env, 2); // true
    goto v_11;
v_35:
    v_131 = stack[0];
    v_130 = stack[-3];
    return list2star(v_131, v_132, v_130);
v_20:
    v_130 = v_131;
    {   LispObject fn = basic_elt(env, 6); // minusf
    v_130 = (*qfn1(fn))(fn, v_130);
    }
    env = stack[-6];
    if (v_130 == nil) goto v_46;
    v_131 = stack[-4];
    v_130 = stack[-2];
    {   LispObject fn = basic_elt(env, 7); // ofsf_smordtable
    v_130 = (*qfn2(fn))(fn, v_131, v_130);
    }
    env = stack[-6];
    v_132 = v_130;
    v_130 = v_132;
    if (!consp(v_130)) goto v_54;
    else goto v_55;
v_54:
    v_130 = v_132;
    goto v_11;
v_55:
    v_131 = v_132;
    v_130 = stack[-4];
    if (!consp(v_131)) goto v_65;
    v_131 = car(v_131);
    if (v_131 == v_130) goto v_64;
    else goto v_65;
v_64:
    v_130 = v_132;
    if (!car_legal(v_130)) v_130 = cdrerror(v_130); else
    v_130 = cdr(v_130);
    goto v_63;
v_65:
    v_130 = nil;
    goto v_63;
    v_130 = nil;
v_63:
    if (v_130 == nil) goto v_61;
    v_130 = basic_elt(env, 2); // true
    goto v_11;
v_61:
    v_131 = stack[0];
    v_130 = v_132;
    if (!car_legal(v_130)) v_130 = carerror(v_130); else
    v_130 = car(v_130);
    if (!car_legal(v_132)) v_132 = cdrerror(v_132); else
    v_132 = cdr(v_132);
    if (v_132 == nil) goto v_82;
    v_132 = stack[-3];
    goto v_80;
v_82:
    v_132 = stack[-1];
    goto v_80;
    v_132 = nil;
v_80:
    return list2star(v_131, v_130, v_132);
v_46:
    v_131 = stack[-2];
    v_130 = stack[-4];
    {   LispObject fn = basic_elt(env, 7); // ofsf_smordtable
    v_130 = (*qfn2(fn))(fn, v_131, v_130);
    }
    env = stack[-6];
    v_132 = v_130;
    v_130 = v_132;
    if (!consp(v_130)) goto v_94;
    else goto v_95;
v_94:
    v_130 = v_132;
    goto v_11;
v_95:
    v_131 = v_132;
    v_130 = stack[-4];
    if (!consp(v_131)) goto v_105;
    v_131 = car(v_131);
    if (v_131 == v_130) goto v_104;
    else goto v_105;
v_104:
    v_130 = v_132;
    if (!car_legal(v_130)) v_130 = cdrerror(v_130); else
    v_130 = cdr(v_130);
    v_130 = (v_130 == nil ? lisp_true : nil);
    goto v_103;
v_105:
    v_130 = nil;
    goto v_103;
    v_130 = nil;
v_103:
    if (v_130 == nil) goto v_101;
    v_130 = basic_elt(env, 2); // true
    goto v_11;
v_101:
    v_131 = stack[0];
    v_130 = v_132;
    if (!car_legal(v_130)) v_130 = carerror(v_130); else
    v_130 = car(v_130);
    if (!car_legal(v_132)) v_132 = cdrerror(v_132); else
    v_132 = cdr(v_132);
    if (v_132 == nil) goto v_123;
    v_132 = stack[-1];
    goto v_121;
v_123:
    v_132 = stack[-3];
    goto v_121;
    v_132 = nil;
v_121:
    return list2star(v_131, v_130, v_132);
v_11:
    return onevalue(v_130);
}



// Code for opfchk!!

static LispObject CC_opfchkB(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_209, v_210;
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
    stack[-6] = v_2;
// end of prologue
    stack[-3] = nil;
    stack[-2] = nil;
    v_209 = stack[-6];
    if (!car_legal(v_209)) v_209 = carerror(v_209); else
    v_209 = car(v_209);
    stack[-7] = v_209;
    stack[-5] = v_209;
    v_209 = stack[-6];
    if (!car_legal(v_209)) v_209 = cdrerror(v_209); else
    v_209 = cdr(v_209);
    stack[-6] = v_209;
    v_210 = stack[-7];
    v_209 = basic_elt(env, 1); // integer
    v_209 = Lflagp(nil, v_210, v_209);
    env = stack[-8];
    if (v_209 == nil) goto v_23;
    v_209 = lisp_true;
    stack[-3] = v_209;
    v_210 = stack[-7];
    v_209 = basic_elt(env, 2); // !:rn!:
    v_209 = get(v_210, v_209);
    env = stack[-8];
    goto v_21;
v_23:
    v_209 = qvalue(basic_elt(env, 3)); // !*numval
    if (v_209 == nil) goto v_32;
    v_210 = qvalue(basic_elt(env, 4)); // dmode!*
    v_209 = basic_elt(env, 5); // (!:rd!: !:cr!:)
    v_209 = Lmemq(nil, v_210, v_209);
    if (v_209 == nil) goto v_32;
    v_210 = stack[-7];
    v_209 = basic_elt(env, 6); // !:rd!:
    v_209 = get(v_210, v_209);
    env = stack[-8];
    goto v_21;
v_32:
    v_209 = nil;
v_21:
    stack[-7] = v_209;
    v_209 = stack[-7];
    if (v_209 == nil) goto v_44;
    else goto v_45;
v_44:
    v_209 = nil;
    goto v_11;
v_45:
    v_209 = stack[-3];
    if (v_209 == nil) goto v_51;
    v_209 = basic_elt(env, 7); // simprn
    goto v_49;
v_51:
    v_210 = stack[-7];
    v_209 = basic_elt(env, 8); // simparg
    v_209 = get(v_210, v_209);
    env = stack[-8];
    stack[-4] = v_209;
    if (v_209 == nil) goto v_55;
    v_209 = stack[-4];
    goto v_49;
v_55:
    v_209 = basic_elt(env, 9); // simprd
    goto v_49;
    v_209 = nil;
v_49:
    stack[-4] = v_209;
    v_209 = stack[-3];
    if (v_209 == nil) goto v_67;
    else goto v_65;
v_67:
    v_209 = qvalue(basic_elt(env, 10)); // !*complex
    if (v_209 == nil) goto v_65;
    goto v_66;
v_65:
    goto v_14;
v_66:
    v_209 = stack[-6];
    if (!car_legal(v_209)) v_210 = carerror(v_209); else
    v_210 = car(v_209);
    v_209 = basic_elt(env, 11); // list
    if (!consp(v_210)) goto v_74;
    v_210 = car(v_210);
    if (v_210 == v_209) goto v_73;
    else goto v_74;
v_73:
    v_209 = stack[-6];
    if (!car_legal(v_209)) v_209 = carerror(v_209); else
    v_209 = car(v_209);
    if (!car_legal(v_209)) v_209 = cdrerror(v_209); else
    v_209 = cdr(v_209);
    {   LispObject fn = basic_elt(env, 17); // revlis
    v_209 = (*qfn1(fn))(fn, v_209);
    }
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 18); // simpcr
    v_209 = (*qfn1(fn))(fn, v_209);
    }
    env = stack[-8];
    v_210 = v_209;
    if (v_209 == nil) goto v_82;
    v_209 = nil;
    if (!consp(v_210)) goto v_82;
    v_210 = car(v_210);
    if (v_210 == v_209) goto v_89;
    else goto v_82;
v_89:
    goto v_13;
v_82:
    goto v_14;
    goto v_72;
v_74:
v_72:
    v_209 = stack[-6];
    {   LispObject fn = basic_elt(env, 17); // revlis
    v_209 = (*qfn1(fn))(fn, v_209);
    }
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 18); // simpcr
    v_209 = (*qfn1(fn))(fn, v_209);
    }
    env = stack[-8];
    stack[-6] = v_209;
    if (v_209 == nil) goto v_97;
    else goto v_98;
v_97:
    v_209 = nil;
    goto v_11;
v_98:
    v_210 = stack[-6];
    v_209 = nil;
    if (!consp(v_210)) goto v_108;
    v_210 = car(v_210);
    if (v_210 == v_209) goto v_107;
    else goto v_108;
v_107:
    v_209 = lisp_true;
    goto v_106;
v_108:
    v_210 = stack[-5];
    v_209 = basic_elt(env, 12); // expt
    if (v_210 == v_209) goto v_117;
    else goto v_118;
v_117:
    v_209 = stack[-6];
    if (!car_legal(v_209)) v_209 = carerror(v_209); else
    v_209 = car(v_209);
    if (!car_legal(v_209)) v_209 = carerror(v_209); else
    v_209 = car(v_209);
    {   LispObject fn = basic_elt(env, 19); // rd!:minusp
    v_209 = (*qfn1(fn))(fn, v_209);
    }
    env = stack[-8];
    goto v_116;
v_118:
    v_209 = nil;
    goto v_116;
    v_209 = nil;
v_116:
    goto v_106;
    v_209 = nil;
v_106:
    if (v_209 == nil) goto v_104;
    v_209 = stack[-6];
    if (!car_legal(v_209)) v_209 = cdrerror(v_209); else
    v_209 = cdr(v_209);
    stack[-6] = v_209;
    goto v_96;
v_104:
    v_209 = stack[-6];
    if (!car_legal(v_209)) v_209 = cdrerror(v_209); else
    v_209 = cdr(v_209);
    stack[-2] = v_209;
    v_209 = stack[-6];
    if (!car_legal(v_209)) v_209 = carerror(v_209); else
    v_209 = car(v_209);
    stack[-6] = v_209;
    goto v_14;
v_96:
v_12:
    v_210 = stack[-5];
    v_209 = basic_elt(env, 13); // !:cr!:
    v_209 = get(v_210, v_209);
    env = stack[-8];
    stack[-7] = v_209;
    if (v_209 == nil) goto v_139;
    goto v_15;
v_139:
v_13:
    stack[-1] = basic_elt(env, 14); // alg
    stack[0] = static_cast<LispObject>(288)+TAG_FIXNUM; // 18
    v_210 = stack[-5];
    v_209 = basic_elt(env, 15); // "is not defined as complex function"
    v_209 = list2(v_210, v_209);
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 20); // rerror
    v_209 = (*qfn3(fn))(fn, stack[-1], stack[0], v_209);
    }
    env = stack[-8];
v_14:
    stack[0] = stack[-4];
    v_209 = stack[-6];
    {   LispObject fn = basic_elt(env, 17); // revlis
    v_209 = (*qfn1(fn))(fn, v_209);
    }
    env = stack[-8];
    v_209 = Lapply1(nil, stack[0], v_209);
    env = stack[-8];
    stack[-6] = v_209;
    if (v_209 == nil) goto v_151;
    else goto v_152;
v_151:
    v_209 = nil;
    goto v_11;
v_152:
v_15:
    stack[0] = basic_elt(env, 16); // apply
    v_209 = stack[-7];
    stack[-1] = Lmkquote(nil, v_209);
    env = stack[-8];
    v_209 = stack[-6];
    v_209 = Lmkquote(nil, v_209);
    env = stack[-8];
    v_209 = list3(stack[0], stack[-1], v_209);
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 21); // errorset2
    v_209 = (*qfn1(fn))(fn, v_209);
    }
    env = stack[-8];
    stack[-6] = v_209;
    v_209 = stack[-6];
    {   LispObject fn = basic_elt(env, 22); // errorp
    v_209 = (*qfn1(fn))(fn, v_209);
    }
    env = stack[-8];
    if (v_209 == nil) goto v_169;
    else goto v_167;
v_169:
    v_209 = stack[-6];
    if (!car_legal(v_209)) v_210 = carerror(v_209); else
    v_210 = car(v_209);
    stack[-6] = v_210;
    v_209 = basic_elt(env, 6); // !:rd!:
    if (!consp(v_210)) goto v_176;
    v_210 = car(v_210);
    if (v_210 == v_209) goto v_175;
    else goto v_176;
v_175:
    v_209 = stack[-6];
    if (!car_legal(v_209)) v_209 = cdrerror(v_209); else
    v_209 = cdr(v_209);
    {   LispObject fn = basic_elt(env, 23); // complexp
    v_209 = (*qfn1(fn))(fn, v_209);
    }
    env = stack[-8];
    goto v_174;
v_176:
    v_209 = nil;
    goto v_174;
    v_209 = nil;
v_174:
    if (v_209 == nil) goto v_172;
    else goto v_167;
v_172:
    goto v_168;
v_167:
    v_209 = stack[-2];
    if (v_209 == nil) goto v_190;
    v_209 = stack[-2];
    stack[-6] = v_209;
    v_209 = nil;
    stack[-2] = v_209;
    goto v_12;
v_190:
    v_209 = nil;
    goto v_11;
    goto v_166;
v_168:
    v_209 = stack[-3];
    if (v_209 == nil) goto v_202;
    v_209 = stack[-6];
    {
        LispObject fn = basic_elt(env, 24); // intconv
        return (*qfn1(fn))(fn, v_209);
    }
v_202:
    v_209 = stack[-6];
    goto v_200;
    v_209 = nil;
v_200:
    goto v_11;
v_166:
    v_209 = nil;
v_11:
    return onevalue(v_209);
}



// Code for get!*order

static LispObject CC_getHorder(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // get!*elements
    v_9 = (*qfn1(fn))(fn, v_9);
    }
        return Llength(nil, v_9);
    return onevalue(v_9);
}



// Code for talp_try2

static LispObject CC_talp_try2(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // cl_bvarl
    v_27 = (*qfn1(fn))(fn, v_27);
    }
    env = stack[-2];
    stack[-1] = v_27;
    v_27 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // cl_fvarl
    v_27 = (*qfn1(fn))(fn, v_27);
    }
    env = stack[-2];
    v_28 = stack[-1];
    v_27 = Lappend_2(nil, v_28, v_27);
    env = stack[-2];
    v_28 = v_27;
    if (v_28 == nil) goto v_19;
    v_28 = stack[0];
    {
        LispObject fn = basic_elt(env, 3); // talp_try3
        return (*qfn2(fn))(fn, v_28, v_27);
    }
v_19:
    v_27 = stack[0];
    goto v_17;
    v_27 = nil;
v_17:
    return onevalue(v_27);
}



// Code for reprod

static LispObject CC_reprod(LispObject env,
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
v_7:
    v_24 = stack[-1];
    if (v_24 == nil) goto v_10;
    else goto v_11;
v_10:
    goto v_6;
v_11:
    v_24 = stack[-1];
    if (!car_legal(v_24)) v_25 = carerror(v_24); else
    v_25 = car(v_24);
    v_24 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_24 = cons(v_25, v_24);
    env = stack[-2];
    v_25 = ncons(v_24);
    env = stack[-2];
    v_24 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // multf
    v_24 = (*qfn2(fn))(fn, v_25, v_24);
    }
    env = stack[-2];
    stack[0] = v_24;
    v_24 = stack[-1];
    if (!car_legal(v_24)) v_24 = cdrerror(v_24); else
    v_24 = cdr(v_24);
    stack[-1] = v_24;
    goto v_7;
v_6:
    v_24 = stack[0];
    return onevalue(v_24);
}



// Code for groebmakepair

static LispObject CC_groebmakepair(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_53, v_54, v_55;
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
    v_53 = stack[-3];
    if (!car_legal(v_53)) v_53 = cdrerror(v_53); else
    v_53 = cdr(v_53);
    if (!car_legal(v_53)) v_54 = carerror(v_53); else
    v_54 = car(v_53);
    v_53 = stack[-2];
    if (!car_legal(v_53)) v_53 = cdrerror(v_53); else
    v_53 = cdr(v_53);
    if (!car_legal(v_53)) v_53 = carerror(v_53); else
    v_53 = car(v_53);
    {   LispObject fn = basic_elt(env, 2); // vevlcm
    v_53 = (*qfn2(fn))(fn, v_54, v_53);
    }
    env = stack[-5];
    stack[-4] = v_53;
    v_53 = qvalue(basic_elt(env, 1)); // !*gsugar
    if (v_53 == nil) goto v_20;
    v_53 = stack[-3];
    {   LispObject fn = basic_elt(env, 3); // gsugar
    stack[0] = (*qfn1(fn))(fn, v_53);
    }
    env = stack[-5];
    v_54 = stack[-4];
    v_53 = stack[-3];
    if (!car_legal(v_53)) v_53 = cdrerror(v_53); else
    v_53 = cdr(v_53);
    if (!car_legal(v_53)) v_53 = carerror(v_53); else
    v_53 = car(v_53);
    {   LispObject fn = basic_elt(env, 4); // vevdif
    v_53 = (*qfn2(fn))(fn, v_54, v_53);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 5); // vevtdeg
    v_53 = (*qfn1(fn))(fn, v_53);
    }
    env = stack[-5];
    v_53 = static_cast<LispObject>(static_cast<std::uintptr_t>(stack[0]) + static_cast<std::uintptr_t>(v_53) - TAG_FIXNUM);
    stack[-1] = v_53;
    v_53 = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // gsugar
    stack[0] = (*qfn1(fn))(fn, v_53);
    }
    env = stack[-5];
    v_54 = stack[-4];
    v_53 = stack[-2];
    if (!car_legal(v_53)) v_53 = cdrerror(v_53); else
    v_53 = cdr(v_53);
    if (!car_legal(v_53)) v_53 = carerror(v_53); else
    v_53 = car(v_53);
    {   LispObject fn = basic_elt(env, 4); // vevdif
    v_53 = (*qfn2(fn))(fn, v_54, v_53);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 5); // vevtdeg
    v_53 = (*qfn1(fn))(fn, v_53);
    }
    env = stack[-5];
    v_53 = static_cast<LispObject>(static_cast<std::uintptr_t>(stack[0]) + static_cast<std::uintptr_t>(v_53) - TAG_FIXNUM);
    stack[0] = stack[-4];
    v_54 = stack[-1];
    {   LispObject fn = basic_elt(env, 6); // max
    v_53 = (*qfn2(fn))(fn, v_54, v_53);
    }
    {
        LispObject v_61 = stack[0];
        LispObject v_62 = stack[-3];
        LispObject v_63 = stack[-2];
        return list4(v_61, v_62, v_63, v_53);
    }
v_20:
    v_55 = stack[-4];
    v_54 = stack[-3];
    v_53 = stack[-2];
    return list3(v_55, v_54, v_53);
    v_53 = nil;
    return onevalue(v_53);
}



// Code for al1_defined_vertex

static LispObject CC_al1_defined_vertex(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_56, v_57;
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
    stack_popper stack_popper_var(6);
// copy arguments values to proper place
    stack[0] = v_5;
    stack[-1] = v_4;
    stack[-2] = v_3;
    stack[-3] = v_2;
// end of prologue
v_10:
    v_56 = stack[-3];
    if (v_56 == nil) goto v_13;
    else goto v_14;
v_13:
    v_56 = stack[-2];
    if (v_56 == nil) goto v_18;
    else goto v_19;
v_18:
    v_56 = lisp_true;
    goto v_9;
v_19:
    v_57 = stack[-2];
    v_56 = stack[-1];
    {
        LispObject fn = basic_elt(env, 1); // re_parents
        return (*qfn2(fn))(fn, v_57, v_56);
    }
    goto v_12;
v_14:
    v_56 = stack[-3];
    if (!car_legal(v_56)) v_57 = carerror(v_56); else
    v_57 = car(v_56);
    v_56 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // defined_edge
    v_56 = (*qfn2(fn))(fn, v_57, v_56);
    }
    env = stack[-5];
    if (v_56 == nil) goto v_28;
    v_57 = stack[-2];
    v_56 = stack[-3];
    if (!car_legal(v_56)) v_56 = cdrerror(v_56); else
    v_56 = cdr(v_56);
    v_56 = Lnconc(nil, v_57, v_56);
    env = stack[-5];
    stack[-4] = v_56;
    v_56 = nil;
    stack[-2] = v_56;
    v_56 = stack[-3];
    if (!car_legal(v_56)) v_57 = carerror(v_56); else
    v_57 = car(v_56);
    v_56 = stack[-1];
    v_56 = cons(v_57, v_56);
    env = stack[-5];
    stack[-1] = v_56;
    v_56 = stack[-3];
    if (!car_legal(v_56)) v_57 = carerror(v_56); else
    v_57 = car(v_56);
    v_56 = stack[0];
    v_56 = cons(v_57, v_56);
    env = stack[-5];
    stack[0] = v_56;
    v_56 = stack[-4];
    stack[-3] = v_56;
    goto v_10;
v_28:
    v_56 = stack[-3];
    if (!car_legal(v_56)) v_56 = cdrerror(v_56); else
    v_56 = cdr(v_56);
    stack[-4] = v_56;
    v_56 = stack[-3];
    if (!car_legal(v_56)) v_57 = carerror(v_56); else
    v_57 = car(v_56);
    v_56 = stack[-2];
    v_56 = cons(v_57, v_56);
    env = stack[-5];
    stack[-2] = v_56;
    v_56 = stack[-4];
    stack[-3] = v_56;
    goto v_10;
v_12:
    v_56 = nil;
v_9:
    return onevalue(v_56);
}



// Code for coeffs!-to!-form1

static LispObject CC_coeffsKtoKform1(LispObject env,
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
    real_push(nil, nil, nil, nil, nil);
    stack_popper stack_popper_var(6);
// copy arguments values to proper place
    stack[-1] = v_4;
    stack[-2] = v_3;
    stack[-3] = v_2;
// end of prologue
    v_41 = stack[-1];
    v_40 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_40 = static_cast<LispObject>(greaterp2(v_41, v_40));
    v_40 = v_40 ? lisp_true : nil;
    env = stack[-5];
    if (v_40 == nil) goto v_9;
    v_40 = stack[-3];
    if (!car_legal(v_40)) stack[-4] = cdrerror(v_40); else
    stack[-4] = cdr(v_40);
    stack[0] = stack[-2];
    v_40 = stack[-1];
    v_40 = sub1(v_40);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 0); // coeffs!-to!-form1
    v_40 = (*qfn3(fn))(fn, stack[-4], stack[0], v_40);
    }
    env = stack[-5];
    stack[0] = v_40;
    v_40 = stack[-3];
    if (!car_legal(v_40)) v_40 = carerror(v_40); else
    v_40 = car(v_40);
    if (v_40 == nil) goto v_23;
    v_41 = stack[-2];
    v_40 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // to
    v_42 = (*qfn2(fn))(fn, v_41, v_40);
    }
    v_40 = stack[-3];
    if (!car_legal(v_40)) v_41 = carerror(v_40); else
    v_41 = car(v_40);
    v_40 = stack[0];
    return acons(v_42, v_41, v_40);
v_23:
    v_40 = stack[0];
    goto v_21;
    v_40 = nil;
v_21:
    goto v_7;
v_9:
    v_40 = stack[-3];
    if (!car_legal(v_40)) v_40 = carerror(v_40); else
    v_40 = car(v_40);
    goto v_7;
    v_40 = nil;
v_7:
    return onevalue(v_40);
}



// Code for freeoflist

static LispObject CC_freeoflist(LispObject env,
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
    if (v_25 == nil) goto v_10;
    else goto v_11;
v_10:
    v_25 = lisp_true;
    goto v_6;
v_11:
    v_26 = stack[-1];
    v_25 = stack[0];
    if (!car_legal(v_25)) v_25 = carerror(v_25); else
    v_25 = car(v_25);
    {   LispObject fn = basic_elt(env, 1); // freeof
    v_25 = (*qfn2(fn))(fn, v_26, v_25);
    }
    env = stack[-2];
    if (v_25 == nil) goto v_15;
    v_25 = stack[0];
    if (!car_legal(v_25)) v_25 = cdrerror(v_25); else
    v_25 = cdr(v_25);
    stack[0] = v_25;
    goto v_7;
v_15:
    v_25 = nil;
    goto v_6;
    v_25 = nil;
v_6:
    return onevalue(v_25);
}



// Code for updkorder

static LispObject CC_updkorder(LispObject env,
                         LispObject v_2)
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
    v_26 = v_2;
// end of prologue
    v_25 = qvalue(basic_elt(env, 1)); // kord!*
    stack[-1] = v_25;
    stack[0] = v_26;
    v_25 = stack[-1];
    v_25 = Ldelete(nil, v_26, v_25);
    env = stack[-2];
    v_25 = cons(stack[0], v_25);
    env = stack[-2];
    v_27 = v_25;
    v_26 = stack[-1];
    v_25 = v_27;
    if (equal(v_26, v_25)) goto v_16;
    else goto v_17;
v_16:
    v_25 = stack[-1];
    goto v_7;
v_17:
    v_25 = v_27;
    setvalue(basic_elt(env, 1), v_25); // kord!*
    v_25 = nil;
    v_25 = ncons(v_25);
    env = stack[-2];
    setvalue(basic_elt(env, 2), v_25); // alglist!*
    v_25 = stack[-1];
v_7:
    return onevalue(v_25);
}



// Code for ofsf_smwrmknowl

static LispObject CC_ofsf_smwrmknowl(LispObject env,
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
    v_18 = qvalue(basic_elt(env, 1)); // !*rlsusi
    if (v_18 == nil) goto v_8;
    v_18 = v_20;
    {
        LispObject fn = basic_elt(env, 2); // ofsf_susirmknowl
        return (*qfn2(fn))(fn, v_18, v_19);
    }
v_8:
    v_18 = v_20;
    {
        LispObject fn = basic_elt(env, 3); // ofsf_smrmknowl
        return (*qfn2(fn))(fn, v_18, v_19);
    }
    v_18 = nil;
    return onevalue(v_18);
}



// Code for gd_simpl

static LispObject CC_gd_simpl(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_22, v_23, v_24, v_25;
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
    v_25 = v_2;
// end of prologue
    v_24 = nil;
    v_23 = lisp_true;
    v_22 = nil;
// Binding !*guardian
// FLUIDBIND: reloadenv=3 litvec-offset=1 saveloc=2
{   bind_fluid_stack bind_fluid_var(-3, 1, -2);
    setvalue(basic_elt(env, 1), v_24); // !*guardian
// Binding !*rlnzden
// FLUIDBIND: reloadenv=3 litvec-offset=2 saveloc=1
{   bind_fluid_stack bind_fluid_var(-3, 2, -1);
    setvalue(basic_elt(env, 2), v_23); // !*rlnzden
// Binding !*rladdcond
// FLUIDBIND: reloadenv=3 litvec-offset=3 saveloc=0
{   bind_fluid_stack bind_fluid_var(-3, 3, 0);
    setvalue(basic_elt(env, 3), v_22); // !*rladdcond
    v_22 = v_25;
    {   LispObject fn = basic_elt(env, 4); // rl_simp
    v_24 = (*qfn1(fn))(fn, v_22);
    }
    env = stack[-3];
    v_23 = nil;
    v_22 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    {   LispObject fn = basic_elt(env, 5); // rl_simpl
    v_22 = (*qfn3(fn))(fn, v_24, v_23, v_22);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 6); // rl_prepfof
    v_22 = (*qfn1(fn))(fn, v_22);
    }
    ;}  // end of a binding scope
    ;}  // end of a binding scope
    ;}  // end of a binding scope
    return onevalue(v_22);
}



// Code for !*multsq

static LispObject CC_Hmultsq(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_113, v_114;
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
    v_113 = stack[-3];
    if (!car_legal(v_113)) v_113 = carerror(v_113); else
    v_113 = car(v_113);
    if (v_113 == nil) goto v_11;
    else goto v_12;
v_11:
    v_113 = lisp_true;
    goto v_10;
v_12:
    v_113 = stack[-2];
    if (!car_legal(v_113)) v_113 = carerror(v_113); else
    v_113 = car(v_113);
    v_113 = (v_113 == nil ? lisp_true : nil);
    goto v_10;
    v_113 = nil;
v_10:
    if (v_113 == nil) goto v_8;
    v_114 = nil;
    v_113 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_114, v_113);
v_8:
    v_113 = stack[-3];
    if (!car_legal(v_113)) v_114 = cdrerror(v_113); else
    v_114 = cdr(v_113);
    v_113 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_114 == v_113) goto v_28;
    else goto v_29;
v_28:
    v_113 = stack[-2];
    if (!car_legal(v_113)) v_114 = cdrerror(v_113); else
    v_114 = cdr(v_113);
    v_113 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_113 = (v_114 == v_113 ? lisp_true : nil);
    goto v_27;
v_29:
    v_113 = nil;
    goto v_27;
    v_113 = nil;
v_27:
    if (v_113 == nil) goto v_25;
    v_113 = stack[-3];
    if (!car_legal(v_113)) v_114 = carerror(v_113); else
    v_114 = car(v_113);
    v_113 = stack[-2];
    if (!car_legal(v_113)) v_113 = carerror(v_113); else
    v_113 = car(v_113);
    {   LispObject fn = basic_elt(env, 1); // !*multf
    v_114 = (*qfn2(fn))(fn, v_114, v_113);
    }
    v_113 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_114, v_113);
v_25:
    v_113 = stack[-3];
    if (!car_legal(v_113)) v_114 = carerror(v_113); else
    v_114 = car(v_113);
    v_113 = stack[-2];
    if (!car_legal(v_113)) v_113 = cdrerror(v_113); else
    v_113 = cdr(v_113);
    {   LispObject fn = basic_elt(env, 2); // gcdf
    v_113 = (*qfn2(fn))(fn, v_114, v_113);
    }
    env = stack[-5];
    stack[-4] = v_113;
    v_113 = stack[-2];
    if (!car_legal(v_113)) v_114 = carerror(v_113); else
    v_114 = car(v_113);
    v_113 = stack[-3];
    if (!car_legal(v_113)) v_113 = cdrerror(v_113); else
    v_113 = cdr(v_113);
    {   LispObject fn = basic_elt(env, 2); // gcdf
    v_113 = (*qfn2(fn))(fn, v_114, v_113);
    }
    env = stack[-5];
    stack[-1] = v_113;
    v_113 = stack[-3];
    if (!car_legal(v_113)) v_114 = carerror(v_113); else
    v_114 = car(v_113);
    v_113 = stack[-4];
    {   LispObject fn = basic_elt(env, 3); // quotf!-fail
    stack[0] = (*qfn2(fn))(fn, v_114, v_113);
    }
    env = stack[-5];
    v_113 = stack[-2];
    if (!car_legal(v_113)) v_114 = carerror(v_113); else
    v_114 = car(v_113);
    v_113 = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // quotf!-fail
    v_113 = (*qfn2(fn))(fn, v_114, v_113);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 1); // !*multf
    v_113 = (*qfn2(fn))(fn, stack[0], v_113);
    }
    env = stack[-5];
    stack[0] = v_113;
    v_113 = stack[-3];
    if (!car_legal(v_113)) v_114 = cdrerror(v_113); else
    v_114 = cdr(v_113);
    v_113 = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // quotf!-fail
    stack[-1] = (*qfn2(fn))(fn, v_114, v_113);
    }
    env = stack[-5];
    v_113 = stack[-2];
    if (!car_legal(v_113)) v_114 = cdrerror(v_113); else
    v_114 = cdr(v_113);
    v_113 = stack[-4];
    {   LispObject fn = basic_elt(env, 3); // quotf!-fail
    v_113 = (*qfn2(fn))(fn, v_114, v_113);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 1); // !*multf
    v_113 = (*qfn2(fn))(fn, stack[-1], v_113);
    }
    env = stack[-5];
    stack[-4] = v_113;
    v_113 = stack[-4];
    {   LispObject fn = basic_elt(env, 4); // minusf
    v_113 = (*qfn1(fn))(fn, v_113);
    }
    env = stack[-5];
    if (v_113 == nil) goto v_85;
    v_113 = stack[0];
    {   LispObject fn = basic_elt(env, 5); // negf
    v_113 = (*qfn1(fn))(fn, v_113);
    }
    env = stack[-5];
    stack[0] = v_113;
    v_113 = stack[-4];
    {   LispObject fn = basic_elt(env, 5); // negf
    v_113 = (*qfn1(fn))(fn, v_113);
    }
    env = stack[-5];
    stack[-4] = v_113;
    goto v_83;
v_85:
v_83:
    v_114 = stack[0];
    v_113 = stack[-4];
    {   LispObject fn = basic_elt(env, 2); // gcdf
    v_113 = (*qfn2(fn))(fn, v_114, v_113);
    }
    env = stack[-5];
    stack[-1] = v_113;
    v_114 = stack[-1];
    v_113 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_114 == v_113) goto v_97;
    else goto v_98;
v_97:
    v_114 = stack[0];
    v_113 = stack[-4];
    return cons(v_114, v_113);
v_98:
    v_114 = stack[0];
    v_113 = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // quotf!-fail
    stack[0] = (*qfn2(fn))(fn, v_114, v_113);
    }
    env = stack[-5];
    v_114 = stack[-4];
    v_113 = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // quotf!-fail
    v_113 = (*qfn2(fn))(fn, v_114, v_113);
    }
    {
        LispObject v_120 = stack[0];
        return cons(v_120, v_113);
    }
    v_113 = nil;
    goto v_6;
    v_113 = nil;
v_6:
    return onevalue(v_113);
}



// Code for talp_simplatfn

static LispObject CC_talp_simplatfn(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_147, v_148, v_149;
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
    v_147 = stack[-1];
    if (!consp(v_147)) goto v_12;
    else goto v_13;
v_12:
    stack[0] = stack[-1];
    {   LispObject fn = basic_elt(env, 5); // talp_getl
    v_147 = (*qfn0(fn))(fn);
    }
    env = stack[-5];
    v_147 = Latsoc(nil, stack[0], v_147);
    if (v_147 == nil) goto v_17;
    else goto v_18;
v_17:
    v_148 = stack[-1];
    v_147 = stack[-2];
    {   LispObject fn = basic_elt(env, 6); // talp_telp
    v_147 = (*qfn2(fn))(fn, v_148, v_147);
    }
    env = stack[-5];
    if (v_147 == nil) goto v_25;
    v_147 = stack[-3];
    v_148 = basic_elt(env, 1); // equal
        return Lneq_2(nil, v_147, v_148);
v_25:
    stack[0] = stack[-3];
    v_147 = stack[-2];
    {   LispObject fn = basic_elt(env, 7); // talp_simplt
    v_148 = (*qfn1(fn))(fn, v_147);
    }
    env = stack[-5];
    v_147 = stack[-1];
    {
        LispObject v_155 = stack[0];
        LispObject fn = basic_elt(env, 8); // talp_mk2
        return (*qfn3(fn))(fn, v_155, v_148, v_147);
    }
    goto v_16;
v_18:
    v_147 = stack[-3];
    v_148 = basic_elt(env, 1); // equal
        return Lneq_2(nil, v_147, v_148);
v_16:
    goto v_11;
v_13:
    v_147 = stack[-2];
    {   LispObject fn = basic_elt(env, 9); // talp_fop
    stack[0] = (*qfn1(fn))(fn, v_147);
    }
    env = stack[-5];
    v_147 = stack[-1];
    {   LispObject fn = basic_elt(env, 9); // talp_fop
    v_147 = (*qfn1(fn))(fn, v_147);
    }
    env = stack[-5];
    v_147 = (stack[0] == v_147 ? lisp_true : nil);
    stack[0] = v_147;
    v_147 = stack[-2];
    {   LispObject fn = basic_elt(env, 10); // talp_fargl
    v_147 = (*qfn1(fn))(fn, v_147);
    }
    env = stack[-5];
    stack[-2] = v_147;
    v_147 = stack[-1];
    {   LispObject fn = basic_elt(env, 10); // talp_fargl
    v_147 = (*qfn1(fn))(fn, v_147);
    }
    env = stack[-5];
    stack[-1] = v_147;
v_57:
    v_147 = stack[-2];
    if (v_147 == nil) goto v_60;
    v_147 = stack[-1];
    if (v_147 == nil) goto v_60;
    v_147 = stack[0];
    if (v_147 == nil) goto v_60;
    goto v_61;
v_60:
    goto v_56;
v_61:
    v_149 = basic_elt(env, 1); // equal
    v_147 = stack[-2];
    if (!car_legal(v_147)) v_148 = carerror(v_147); else
    v_148 = car(v_147);
    v_147 = stack[-1];
    if (!car_legal(v_147)) v_147 = carerror(v_147); else
    v_147 = car(v_147);
    {   LispObject fn = basic_elt(env, 11); // talp_simplat2
    v_147 = (*qfn3(fn))(fn, v_149, v_148, v_147);
    }
    env = stack[-5];
    stack[0] = v_147;
    v_147 = stack[0];
    if (v_147 == nil) goto v_79;
    v_148 = stack[0];
    v_147 = lisp_true;
    if (equal(v_148, v_147)) goto v_79;
    v_148 = stack[-3];
    v_147 = basic_elt(env, 1); // equal
    if (v_148 == v_147) goto v_87;
    else goto v_88;
v_87:
    v_148 = stack[0];
    v_147 = stack[-4];
    v_147 = cons(v_148, v_147);
    env = stack[-5];
    stack[-4] = v_147;
    goto v_86;
v_88:
    v_149 = basic_elt(env, 2); // neq
    v_147 = stack[0];
    if (!car_legal(v_147)) v_148 = cdrerror(v_147); else
    v_148 = cdr(v_147);
    v_147 = stack[-4];
    v_147 = acons(v_149, v_148, v_147);
    env = stack[-5];
    stack[-4] = v_147;
    goto v_86;
v_86:
    goto v_77;
v_79:
v_77:
    v_147 = stack[-2];
    if (!car_legal(v_147)) v_147 = cdrerror(v_147); else
    v_147 = cdr(v_147);
    stack[-2] = v_147;
    v_147 = stack[-1];
    if (!car_legal(v_147)) v_147 = cdrerror(v_147); else
    v_147 = cdr(v_147);
    stack[-1] = v_147;
    goto v_57;
v_56:
    v_147 = stack[0];
    if (v_147 == nil) goto v_109;
    v_147 = stack[-4];
    if (v_147 == nil) goto v_109;
    v_147 = stack[-4];
    if (!car_legal(v_147)) v_147 = cdrerror(v_147); else
    v_147 = cdr(v_147);
    if (v_147 == nil) goto v_117;
    v_148 = stack[-3];
    v_147 = basic_elt(env, 1); // equal
    if (v_148 == v_147) goto v_122;
    else goto v_123;
v_122:
    v_148 = basic_elt(env, 3); // and
    v_147 = stack[-4];
    return cons(v_148, v_147);
v_123:
    v_148 = basic_elt(env, 4); // or
    v_147 = stack[-4];
    return cons(v_148, v_147);
    goto v_115;
v_117:
    v_147 = stack[-4];
    if (!car_legal(v_147)) v_147 = carerror(v_147); else
    v_147 = car(v_147);
    goto v_9;
v_115:
    goto v_107;
v_109:
    v_147 = stack[-3];
    v_148 = basic_elt(env, 1); // equal
    if (v_147 == v_148) goto v_138;
    else goto v_139;
v_138:
    v_147 = stack[0];
    goto v_9;
v_139:
    v_147 = stack[0];
    v_147 = (v_147 == nil ? lisp_true : nil);
    goto v_9;
v_107:
    goto v_11;
v_11:
    v_147 = nil;
v_9:
    return onevalue(v_147);
}



// Code for qqe_length!-graph!-neighbors

static LispObject CC_qqe_lengthKgraphKneighbors(LispObject env,
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
    v_8 = basic_elt(env, 1); // neighbors
    return get(v_7, v_8);
}



// Code for arprep!:

static LispObject CC_arprepT(LispObject env,
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
    v_18 = v_2;
// end of prologue
    v_17 = qvalue(basic_elt(env, 1)); // !*reexpress
    if (v_17 == nil) goto v_8;
    v_17 = v_18;
    if (!car_legal(v_17)) v_17 = cdrerror(v_17); else
    v_17 = cdr(v_17);
    {   LispObject fn = basic_elt(env, 2); // express!-in!-arvars
    v_17 = (*qfn1(fn))(fn, v_17);
    }
    env = stack[0];
    goto v_6;
v_8:
    v_17 = v_18;
    if (!car_legal(v_17)) v_17 = cdrerror(v_17); else
    v_17 = cdr(v_17);
    goto v_6;
    v_17 = nil;
v_6:
    {
        LispObject fn = basic_elt(env, 3); // prepf
        return (*qfn1(fn))(fn, v_17);
    }
}



// Code for make_wedge_pair

static LispObject CC_make_wedge_pair(LispObject env,
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    stack[-1] = v_3;
    stack[-2] = v_2;
// end of prologue
    v_59 = stack[-2];
    v_58 = stack[-2];
    stack[0] = list2(v_59, v_58);
    env = stack[-4];
    v_58 = stack[-1];
    {   LispObject fn = basic_elt(env, 4); // xval
    v_58 = (*qfn1(fn))(fn, v_58);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 5); // xlcm
    v_58 = (*qfn2(fn))(fn, stack[0], v_58);
    }
    env = stack[-4];
    stack[-3] = v_58;
    v_58 = qvalue(basic_elt(env, 1)); // !*twosided
    if (v_58 == nil) goto v_16;
    v_58 = qvalue(basic_elt(env, 2)); // xtruncate!*
    if (v_58 == nil) goto v_19;
    else goto v_16;
v_19:
    goto v_15;
v_16:
    stack[0] = stack[-2];
    v_58 = stack[-1];
    {   LispObject fn = basic_elt(env, 4); // xval
    v_58 = (*qfn1(fn))(fn, v_58);
    }
    env = stack[-4];
    v_58 = Lmemq(nil, stack[0], v_58);
    if (v_58 == nil) goto v_21;
    else goto v_15;
v_21:
    v_58 = nil;
    goto v_13;
v_15:
    v_59 = stack[-2];
    v_58 = stack[-1];
    {   LispObject fn = basic_elt(env, 6); // overall_factor
    v_58 = (*qfn2(fn))(fn, v_59, v_58);
    }
    env = stack[-4];
    if (v_58 == nil) goto v_31;
    else goto v_32;
v_31:
    v_58 = stack[-3];
    {   LispObject fn = basic_elt(env, 7); // mknwedge
    v_58 = (*qfn1(fn))(fn, v_58);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 8); // xdegreecheck
    v_58 = (*qfn1(fn))(fn, v_58);
    }
    env = stack[-4];
    if (v_58 == nil) goto v_38;
    else goto v_39;
v_38:
    stack[0] = basic_elt(env, 3); // wedge_pair
    v_60 = stack[-2];
    v_59 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_58 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_58 = list2star(v_60, v_59, v_58);
    env = stack[-4];
    v_59 = ncons(v_58);
    v_58 = stack[-1];
    {
        LispObject v_65 = stack[-3];
        LispObject v_66 = stack[0];
        return list4(v_65, v_66, v_59, v_58);
    }
v_39:
    v_58 = nil;
    goto v_37;
    v_58 = nil;
v_37:
    goto v_30;
v_32:
    v_58 = nil;
    goto v_30;
    v_58 = nil;
v_30:
    goto v_13;
    v_58 = nil;
v_13:
    return onevalue(v_58);
}



// Code for coeff_sortl

static LispObject CC_coeff_sortl(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_12, v_13, v_14;
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
    v_12 = v_2;
// end of prologue
    v_13 = v_12;
    v_12 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // coeff_ordn
    v_14 = (*qfn2(fn))(fn, v_13, v_12);
    }
    env = stack[-2];
    v_13 = stack[-1];
    v_12 = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // coeff_sortl1
        return (*qfn3(fn))(fn, v_14, v_13, v_12);
    }
}



// Code for rule!-list

static LispObject CC_ruleKlist(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_135, v_136, v_137;
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
v_11:
    v_135 = nil;
    setvalue(basic_elt(env, 1), v_135); // frasc!*
    v_135 = stack[-3];
    if (v_135 == nil) goto v_19;
    else goto v_20;
v_19:
    v_135 = lisp_true;
    goto v_18;
v_20:
    stack[0] = stack[-3];
    v_135 = nil;
    v_135 = ncons(v_135);
    env = stack[-5];
    v_135 = (equal(stack[0], v_135) ? lisp_true : nil);
    goto v_18;
    v_135 = nil;
v_18:
    if (v_135 == nil) goto v_16;
    v_135 = nil;
    setvalue(basic_elt(env, 2), v_135); // mcond!*
    goto v_10;
v_16:
    v_135 = lisp_true;
    setvalue(basic_elt(env, 2), v_135); // mcond!*
    v_135 = stack[-3];
    if (!car_legal(v_135)) v_135 = carerror(v_135); else
    v_135 = car(v_135);
    stack[-1] = v_135;
    v_135 = stack[-1];
    if (symbolp(v_135)) goto v_35;
    else goto v_36;
v_35:
    v_135 = stack[-1];
    if (!symbolp(v_135)) v_135 = nil;
    else { v_135 = qfastgets(v_135);
           if (v_135 != nil) { v_135 = elt(v_135, 4); // avalue
#ifdef RECORD_GET
             if (v_135 != SPID_NOPROP)
                record_get(elt(fastget_names, 4), 1);
             else record_get(elt(fastget_names, 4), 0),
                v_135 = nil; }
           else record_get(elt(fastget_names, 4), 0); }
#else
             if (v_135 == SPID_NOPROP) v_135 = nil; }}
#endif
    v_137 = v_135;
    if (v_135 == nil) goto v_41;
    v_135 = v_137;
    if (!car_legal(v_135)) v_136 = carerror(v_135); else
    v_136 = car(v_135);
    v_135 = basic_elt(env, 3); // list
    if (v_136 == v_135) goto v_45;
    else goto v_41;
v_45:
    v_135 = v_137;
    if (!car_legal(v_135)) v_135 = cdrerror(v_135); else
    v_135 = cdr(v_135);
    if (!car_legal(v_135)) v_135 = carerror(v_135); else
    v_135 = car(v_135);
    if (!car_legal(v_135)) v_135 = cdrerror(v_135); else
    v_135 = cdr(v_135);
    v_136 = Lreverse(nil, v_135);
    env = stack[-5];
    v_135 = stack[-3];
    if (!car_legal(v_135)) v_135 = cdrerror(v_135); else
    v_135 = cdr(v_135);
    v_135 = Lappend_2(nil, v_136, v_135);
    env = stack[-5];
    stack[-3] = v_135;
    goto v_11;
v_41:
    v_136 = stack[-1];
    v_135 = basic_elt(env, 4); // "rule list"
    {   LispObject fn = basic_elt(env, 11); // typerr
    v_135 = (*qfn2(fn))(fn, v_136, v_135);
    }
    env = stack[-5];
    goto v_39;
v_39:
    goto v_34;
v_36:
    v_135 = stack[-1];
    if (!car_legal(v_135)) v_136 = carerror(v_135); else
    v_136 = car(v_135);
    v_135 = basic_elt(env, 3); // list
    if (v_136 == v_135) goto v_62;
    else goto v_63;
v_62:
    v_135 = stack[-1];
    if (!car_legal(v_135)) v_136 = cdrerror(v_135); else
    v_136 = cdr(v_135);
    v_135 = stack[-3];
    if (!car_legal(v_135)) v_135 = cdrerror(v_135); else
    v_135 = cdr(v_135);
    v_135 = Lappend_2(nil, v_136, v_135);
    env = stack[-5];
    stack[-3] = v_135;
    goto v_11;
v_63:
    v_135 = stack[-1];
    if (!car_legal(v_135)) v_136 = carerror(v_135); else
    v_136 = car(v_135);
    v_135 = basic_elt(env, 5); // equal
    if (v_136 == v_135) goto v_72;
    else goto v_73;
v_72:
    v_135 = basic_elt(env, 6); // "Please use => instead of = in rules"
    {   LispObject fn = basic_elt(env, 12); // lprim
    v_135 = (*qfn1(fn))(fn, v_135);
    }
    env = stack[-5];
    goto v_34;
v_73:
    v_135 = stack[-1];
    if (!car_legal(v_135)) v_136 = carerror(v_135); else
    v_136 = car(v_135);
    v_135 = basic_elt(env, 7); // replaceby
    if (v_136 == v_135) goto v_80;
    v_136 = stack[-1];
    v_135 = basic_elt(env, 8); // "rule"
    {   LispObject fn = basic_elt(env, 11); // typerr
    v_135 = (*qfn2(fn))(fn, v_136, v_135);
    }
    env = stack[-5];
    goto v_34;
v_80:
v_34:
    v_135 = stack[-1];
    if (!car_legal(v_135)) v_135 = cdrerror(v_135); else
    v_135 = cdr(v_135);
    if (!car_legal(v_135)) v_135 = carerror(v_135); else
    v_135 = car(v_135);
    {   LispObject fn = basic_elt(env, 13); // remove!-free!-vars
    v_135 = (*qfn1(fn))(fn, v_135);
    }
    env = stack[-5];
    stack[0] = v_135;
    v_135 = stack[-1];
    if (!car_legal(v_135)) v_135 = cdrerror(v_135); else
    v_135 = cdr(v_135);
    if (!car_legal(v_135)) v_135 = cdrerror(v_135); else
    v_135 = cdr(v_135);
    if (!car_legal(v_135)) v_136 = carerror(v_135); else
    v_136 = car(v_135);
    v_135 = basic_elt(env, 9); // when
    if (!consp(v_136)) goto v_94;
    v_136 = car(v_136);
    if (v_136 == v_135) goto v_93;
    else goto v_94;
v_93:
    v_135 = stack[-1];
    if (!car_legal(v_135)) v_135 = cdrerror(v_135); else
    v_135 = cdr(v_135);
    if (!car_legal(v_135)) v_135 = cdrerror(v_135); else
    v_135 = cdr(v_135);
    if (!car_legal(v_135)) v_135 = carerror(v_135); else
    v_135 = car(v_135);
    if (!car_legal(v_135)) v_135 = cdrerror(v_135); else
    v_135 = cdr(v_135);
    if (!car_legal(v_135)) v_135 = cdrerror(v_135); else
    v_135 = cdr(v_135);
    if (!car_legal(v_135)) v_135 = carerror(v_135); else
    v_135 = car(v_135);
    {   LispObject fn = basic_elt(env, 14); // remove!-free!-vars!*
    v_137 = (*qfn1(fn))(fn, v_135);
    }
    env = stack[-5];
    v_136 = nil;
    v_135 = basic_elt(env, 10); // algebraic
    {   LispObject fn = basic_elt(env, 15); // formbool
    v_135 = (*qfn3(fn))(fn, v_137, v_136, v_135);
    }
    env = stack[-5];
    setvalue(basic_elt(env, 2), v_135); // mcond!*
    v_135 = stack[-1];
    if (!car_legal(v_135)) v_135 = cdrerror(v_135); else
    v_135 = cdr(v_135);
    if (!car_legal(v_135)) v_135 = cdrerror(v_135); else
    v_135 = cdr(v_135);
    if (!car_legal(v_135)) v_135 = carerror(v_135); else
    v_135 = car(v_135);
    if (!car_legal(v_135)) v_135 = cdrerror(v_135); else
    v_135 = cdr(v_135);
    if (!car_legal(v_135)) v_135 = carerror(v_135); else
    v_135 = car(v_135);
    {   LispObject fn = basic_elt(env, 14); // remove!-free!-vars!*
    v_135 = (*qfn1(fn))(fn, v_135);
    }
    env = stack[-5];
    goto v_92;
v_94:
    v_135 = stack[-1];
    if (!car_legal(v_135)) v_135 = cdrerror(v_135); else
    v_135 = cdr(v_135);
    if (!car_legal(v_135)) v_135 = cdrerror(v_135); else
    v_135 = cdr(v_135);
    if (!car_legal(v_135)) v_135 = carerror(v_135); else
    v_135 = car(v_135);
    {   LispObject fn = basic_elt(env, 14); // remove!-free!-vars!*
    v_135 = (*qfn1(fn))(fn, v_135);
    }
    env = stack[-5];
    goto v_92;
v_92:
    stack[-4] = stack[0];
    stack[-1] = v_135;
    stack[0] = qvalue(basic_elt(env, 1)); // frasc!*
    v_136 = qvalue(basic_elt(env, 2)); // mcond!*
    v_135 = stack[-2];
    v_135 = list2(v_136, v_135);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 16); // rule!*
    v_135 = (*qfn4up(fn))(fn, stack[-4], stack[-1], stack[0], v_135);
    }
    env = stack[-5];
    v_135 = stack[-3];
    if (!car_legal(v_135)) v_135 = cdrerror(v_135); else
    v_135 = cdr(v_135);
    stack[-3] = v_135;
    goto v_11;
v_10:
    return onevalue(v_135);
}



// Code for df!-chain!-rule

static LispObject CC_dfKchainKrule(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    stack[-3] = v_3;
    stack[-4] = v_2;
// end of prologue
    v_43 = nil;
    v_42 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_42 = cons(v_43, v_42);
    env = stack[-6];
    v_43 = v_42;
    v_42 = stack[0];
    stack[-5] = v_42;
v_15:
    v_42 = stack[-5];
    if (v_42 == nil) goto v_19;
    else goto v_20;
v_19:
    goto v_14;
v_20:
    v_42 = stack[-5];
    if (!car_legal(v_42)) v_42 = carerror(v_42); else
    v_42 = car(v_42);
    stack[-2] = v_42;
    stack[-1] = v_43;
    v_44 = basic_elt(env, 1); // df
    v_43 = stack[-4];
    v_42 = stack[-2];
    v_42 = list3(v_44, v_43, v_42);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 2); // simp
    stack[0] = (*qfn1(fn))(fn, v_42);
    }
    env = stack[-6];
    v_44 = basic_elt(env, 1); // df
    v_43 = stack[-2];
    v_42 = stack[-3];
    v_42 = list3(v_44, v_43, v_42);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 2); // simp
    v_42 = (*qfn1(fn))(fn, v_42);
    }
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 3); // multsq
    v_42 = (*qfn2(fn))(fn, stack[0], v_42);
    }
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 4); // addsq
    v_42 = (*qfn2(fn))(fn, stack[-1], v_42);
    }
    env = stack[-6];
    v_43 = v_42;
    v_42 = stack[-5];
    if (!car_legal(v_42)) v_42 = cdrerror(v_42); else
    v_42 = cdr(v_42);
    stack[-5] = v_42;
    goto v_15;
v_14:
    v_42 = v_43;
    return onevalue(v_42);
}



// Code for cali_bc_power

static LispObject CC_cali_bc_power(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // exptf
    v_9 = (*qfn2(fn))(fn, v_10, v_9);
    }
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // bc!=simp
        return (*qfn1(fn))(fn, v_9);
    }
}



// Code for test!-bool

static LispObject CC_testKbool(LispObject env,
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
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_10 = v_2;
// end of prologue
    if (!car_legal(v_10)) v_10 = carerror(v_10); else
    v_10 = car(v_10);
    {   LispObject fn = basic_elt(env, 1); // boolean!-eval1
    v_10 = (*qfn1(fn))(fn, v_10);
    }
    env = stack[0];
    v_10 = ncons(v_10);
    env = stack[0];
    {   LispObject fn = basic_elt(env, 2); // simp!-prop
    v_10 = (*qfn1(fn))(fn, v_10);
    }
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 3); // mk!*sq
        return (*qfn1(fn))(fn, v_10);
    }
}



// Code for pst_d1

static LispObject CC_pst_d1(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_144;
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
    stack[-10] = v_4;
    stack[-11] = v_3;
    v_144 = v_2;
// end of prologue
    stack[0] = stack[-10];
    v_144 = sub1(v_144);
    env = stack[-13];
    v_144 = Lgetv(nil, stack[0], v_144);
    env = stack[-13];
    stack[-12] = v_144;
    v_144 = stack[-12];
    if (v_144 == nil) goto v_18;
    else goto v_19;
v_18:
    v_144 = nil;
    goto v_10;
v_19:
    v_144 = stack[-12];
    if (!car_legal(v_144)) v_144 = carerror(v_144); else
    v_144 = car(v_144);
    stack[-6] = v_144;
    stack[0] = stack[-10];
    v_144 = stack[-11];
    v_144 = sub1(v_144);
    env = stack[-13];
    v_144 = Lgetv(nil, stack[0], v_144);
    env = stack[-13];
    stack[-5] = v_144;
    v_144 = stack[-5];
    if (v_144 == nil) goto v_39;
    else goto v_40;
v_39:
    v_144 = nil;
    goto v_31;
v_40:
    v_144 = stack[-5];
    if (!car_legal(v_144)) v_144 = carerror(v_144); else
    v_144 = car(v_144);
    stack[-1] = v_144;
    v_144 = stack[-6];
    {   LispObject fn = basic_elt(env, 1); // sc_kern
    stack[0] = (*qfn1(fn))(fn, v_144);
    }
    env = stack[-13];
    v_144 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // sc_kern
    v_144 = (*qfn1(fn))(fn, v_144);
    }
    env = stack[-13];
    {   LispObject fn = basic_elt(env, 2); // pa_coinc_split
    v_144 = (*qfn2(fn))(fn, stack[0], v_144);
    }
    env = stack[-13];
    if (!car_legal(v_144)) v_144 = carerror(v_144); else
    v_144 = car(v_144);
    {   LispObject fn = basic_elt(env, 3); // ordn
    v_144 = (*qfn1(fn))(fn, v_144);
    }
    env = stack[-13];
    v_144 = ncons(v_144);
    env = stack[-13];
    stack[-3] = v_144;
    stack[-4] = v_144;
v_32:
    v_144 = stack[-5];
    if (!car_legal(v_144)) v_144 = cdrerror(v_144); else
    v_144 = cdr(v_144);
    stack[-5] = v_144;
    v_144 = stack[-5];
    if (v_144 == nil) goto v_58;
    else goto v_59;
v_58:
    v_144 = stack[-4];
    goto v_31;
v_59:
    stack[-2] = stack[-3];
    v_144 = stack[-5];
    if (!car_legal(v_144)) v_144 = carerror(v_144); else
    v_144 = car(v_144);
    stack[-1] = v_144;
    v_144 = stack[-6];
    {   LispObject fn = basic_elt(env, 1); // sc_kern
    stack[0] = (*qfn1(fn))(fn, v_144);
    }
    env = stack[-13];
    v_144 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // sc_kern
    v_144 = (*qfn1(fn))(fn, v_144);
    }
    env = stack[-13];
    {   LispObject fn = basic_elt(env, 2); // pa_coinc_split
    v_144 = (*qfn2(fn))(fn, stack[0], v_144);
    }
    env = stack[-13];
    if (!car_legal(v_144)) v_144 = carerror(v_144); else
    v_144 = car(v_144);
    {   LispObject fn = basic_elt(env, 3); // ordn
    v_144 = (*qfn1(fn))(fn, v_144);
    }
    env = stack[-13];
    v_144 = ncons(v_144);
    env = stack[-13];
    if (!car_legal(stack[-2])) rplacd_fails(stack[-2]);
    setcdr(stack[-2], v_144);
    v_144 = stack[-3];
    if (!car_legal(v_144)) v_144 = cdrerror(v_144); else
    v_144 = cdr(v_144);
    stack[-3] = v_144;
    goto v_32;
v_31:
    {   LispObject fn = basic_elt(env, 3); // ordn
    v_144 = (*qfn1(fn))(fn, v_144);
    }
    env = stack[-13];
    v_144 = ncons(v_144);
    env = stack[-13];
    stack[-8] = v_144;
    stack[-9] = v_144;
v_11:
    v_144 = stack[-12];
    if (!car_legal(v_144)) v_144 = cdrerror(v_144); else
    v_144 = cdr(v_144);
    stack[-12] = v_144;
    v_144 = stack[-12];
    if (v_144 == nil) goto v_81;
    else goto v_82;
v_81:
    v_144 = stack[-9];
    goto v_10;
v_82:
    stack[-7] = stack[-8];
    v_144 = stack[-12];
    if (!car_legal(v_144)) v_144 = carerror(v_144); else
    v_144 = car(v_144);
    stack[-6] = v_144;
    stack[0] = stack[-10];
    v_144 = stack[-11];
    v_144 = sub1(v_144);
    env = stack[-13];
    v_144 = Lgetv(nil, stack[0], v_144);
    env = stack[-13];
    stack[-5] = v_144;
    v_144 = stack[-5];
    if (v_144 == nil) goto v_103;
    else goto v_104;
v_103:
    v_144 = nil;
    goto v_95;
v_104:
    v_144 = stack[-5];
    if (!car_legal(v_144)) v_144 = carerror(v_144); else
    v_144 = car(v_144);
    stack[-1] = v_144;
    v_144 = stack[-6];
    {   LispObject fn = basic_elt(env, 1); // sc_kern
    stack[0] = (*qfn1(fn))(fn, v_144);
    }
    env = stack[-13];
    v_144 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // sc_kern
    v_144 = (*qfn1(fn))(fn, v_144);
    }
    env = stack[-13];
    {   LispObject fn = basic_elt(env, 2); // pa_coinc_split
    v_144 = (*qfn2(fn))(fn, stack[0], v_144);
    }
    env = stack[-13];
    if (!car_legal(v_144)) v_144 = carerror(v_144); else
    v_144 = car(v_144);
    {   LispObject fn = basic_elt(env, 3); // ordn
    v_144 = (*qfn1(fn))(fn, v_144);
    }
    env = stack[-13];
    v_144 = ncons(v_144);
    env = stack[-13];
    stack[-3] = v_144;
    stack[-4] = v_144;
v_96:
    v_144 = stack[-5];
    if (!car_legal(v_144)) v_144 = cdrerror(v_144); else
    v_144 = cdr(v_144);
    stack[-5] = v_144;
    v_144 = stack[-5];
    if (v_144 == nil) goto v_122;
    else goto v_123;
v_122:
    v_144 = stack[-4];
    goto v_95;
v_123:
    stack[-2] = stack[-3];
    v_144 = stack[-5];
    if (!car_legal(v_144)) v_144 = carerror(v_144); else
    v_144 = car(v_144);
    stack[-1] = v_144;
    v_144 = stack[-6];
    {   LispObject fn = basic_elt(env, 1); // sc_kern
    stack[0] = (*qfn1(fn))(fn, v_144);
    }
    env = stack[-13];
    v_144 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // sc_kern
    v_144 = (*qfn1(fn))(fn, v_144);
    }
    env = stack[-13];
    {   LispObject fn = basic_elt(env, 2); // pa_coinc_split
    v_144 = (*qfn2(fn))(fn, stack[0], v_144);
    }
    env = stack[-13];
    if (!car_legal(v_144)) v_144 = carerror(v_144); else
    v_144 = car(v_144);
    {   LispObject fn = basic_elt(env, 3); // ordn
    v_144 = (*qfn1(fn))(fn, v_144);
    }
    env = stack[-13];
    v_144 = ncons(v_144);
    env = stack[-13];
    if (!car_legal(stack[-2])) rplacd_fails(stack[-2]);
    setcdr(stack[-2], v_144);
    v_144 = stack[-3];
    if (!car_legal(v_144)) v_144 = cdrerror(v_144); else
    v_144 = cdr(v_144);
    stack[-3] = v_144;
    goto v_96;
v_95:
    {   LispObject fn = basic_elt(env, 3); // ordn
    v_144 = (*qfn1(fn))(fn, v_144);
    }
    env = stack[-13];
    v_144 = ncons(v_144);
    env = stack[-13];
    if (!car_legal(stack[-7])) rplacd_fails(stack[-7]);
    setcdr(stack[-7], v_144);
    v_144 = stack[-8];
    if (!car_legal(v_144)) v_144 = cdrerror(v_144); else
    v_144 = cdr(v_144);
    stack[-8] = v_144;
    goto v_11;
v_10:
    return onevalue(v_144);
}



// Code for dnform

static LispObject CC_dnform(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_12, v_13, v_14;
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
    v_12 = v_4;
    v_13 = v_3;
    v_14 = v_2;
// end of prologue
    stack[-2] = v_14;
    stack[-1] = v_13;
    stack[0] = v_12;
    v_12 = basic_elt(env, 1); // e
    v_12 = ncons(v_12);
    env = stack[-3];
    {
        LispObject v_18 = stack[-2];
        LispObject v_19 = stack[-1];
        LispObject v_20 = stack[0];
        LispObject fn = basic_elt(env, 2); // dnform1
        return (*qfn4up(fn))(fn, v_18, v_19, v_20, v_12);
    }
}



// Code for count!-linear!-factors!-mod!-p

static LispObject CC_countKlinearKfactorsKmodKp(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_175, v_176, v_177;
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
// Binding linear!-factors
// FLUIDBIND: reloadenv=8 litvec-offset=1 saveloc=3
{   bind_fluid_stack bind_fluid_var(-8, 1, -3);
    setvalue(basic_elt(env, 1), nil); // linear!-factors
    v_175 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-2] = v_175;
v_15:
    v_176 = qvalue(basic_elt(env, 2)); // dpoly
    v_175 = stack[-2];
    v_175 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_176) - static_cast<std::uintptr_t>(v_175) + TAG_FIXNUM);
    v_175 = (static_cast<std::intptr_t>(v_175) < 0 ? lisp_true : nil);
    if (v_175 == nil) goto v_20;
    goto v_14;
v_20:
    stack[-1] = stack[-5];
    stack[0] = stack[-2];
    v_176 = qvalue(basic_elt(env, 3)); // poly!-vector
    v_175 = stack[-2];
    v_175 = Lgetv(nil, v_176, v_175);
    env = stack[-8];
    v_175 = Lputv(nil, stack[-1], stack[0], v_175);
    env = stack[-8];
    v_175 = stack[-2];
    v_175 = static_cast<LispObject>(static_cast<std::intptr_t>(v_175) + 0x10);
    stack[-2] = v_175;
    goto v_15;
v_14:
    v_177 = qvalue(basic_elt(env, 4)); // current!-modulus
    v_176 = stack[-6];
    v_175 = stack[-4];
    {   LispObject fn = basic_elt(env, 5); // make!-x!-to!-p
    v_175 = (*qfn3(fn))(fn, v_177, v_176, v_175);
    }
    env = stack[-8];
    stack[-7] = v_175;
    v_175 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-2] = v_175;
v_41:
    v_176 = stack[-7];
    v_175 = stack[-2];
    v_175 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_176) - static_cast<std::uintptr_t>(v_175) + TAG_FIXNUM);
    v_175 = (static_cast<std::intptr_t>(v_175) < 0 ? lisp_true : nil);
    if (v_175 == nil) goto v_46;
    goto v_40;
v_46:
    stack[-1] = stack[-6];
    stack[0] = stack[-2];
    v_176 = stack[-4];
    v_175 = stack[-2];
    v_175 = Lgetv(nil, v_176, v_175);
    env = stack[-8];
    v_175 = Lputv(nil, stack[-1], stack[0], v_175);
    env = stack[-8];
    v_175 = stack[-2];
    v_175 = static_cast<LispObject>(static_cast<std::intptr_t>(v_175) + 0x10);
    stack[-2] = v_175;
    goto v_41;
v_40:
    v_176 = stack[-7];
    v_175 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if ((static_cast<std::intptr_t>(v_176) < static_cast<std::intptr_t>(v_175))) goto v_62;
    else goto v_63;
v_62:
    v_176 = stack[-7];
    v_175 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if ((static_cast<std::intptr_t>(v_176) < static_cast<std::intptr_t>(v_175))) goto v_68;
    else goto v_69;
v_68:
    v_177 = stack[-6];
    v_176 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_175 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_175 = Lputv(nil, v_177, v_176, v_175);
    env = stack[-8];
    goto v_67;
v_69:
v_67:
    v_177 = stack[-6];
    v_176 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_175 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   std::intptr_t w = int_of_fixnum(v_175);
        if (w != 0) w = current_modulus - w;
        v_175 = fixnum_of_int(w);
    }
    v_175 = Lputv(nil, v_177, v_176, v_175);
    env = stack[-8];
    v_175 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-7] = v_175;
    goto v_61;
v_63:
    stack[-1] = stack[-6];
    stack[0] = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_176 = stack[-6];
    v_175 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_176 = Lgetv(nil, v_176, v_175);
    env = stack[-8];
    v_175 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   std::intptr_t w = int_of_fixnum(v_176) - int_of_fixnum(v_175);
        if (w < 0) w += current_modulus;
        v_175 = fixnum_of_int(w);
    }
    v_175 = Lputv(nil, stack[-1], stack[0], v_175);
    env = stack[-8];
    v_176 = stack[-7];
    v_175 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_176 == v_175) goto v_98;
    else goto v_99;
v_98:
    v_176 = stack[-6];
    v_175 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_176 = Lgetv(nil, v_176, v_175);
    env = stack[-8];
    v_175 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_175 = (v_176 == v_175 ? lisp_true : nil);
    goto v_97;
v_99:
    v_175 = nil;
    goto v_97;
    v_175 = nil;
v_97:
    if (v_175 == nil) goto v_95;
    v_176 = stack[-6];
    v_175 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_176 = Lgetv(nil, v_176, v_175);
    env = stack[-8];
    v_175 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_176 == v_175) goto v_112;
    else goto v_113;
v_112:
    v_175 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    stack[-7] = v_175;
    goto v_111;
v_113:
    v_175 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-7] = v_175;
    goto v_111;
v_111:
    goto v_93;
v_95:
v_93:
    goto v_61;
v_61:
    v_176 = stack[-7];
    v_175 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if ((static_cast<std::intptr_t>(v_176) < static_cast<std::intptr_t>(v_175))) goto v_124;
    else goto v_125;
v_124:
    v_177 = stack[-5];
    v_176 = qvalue(basic_elt(env, 2)); // dpoly
    v_175 = stack[-6];
    {   LispObject fn = basic_elt(env, 6); // copy!-vector
    v_175 = (*qfn3(fn))(fn, v_177, v_176, v_175);
    }
    env = stack[-8];
    stack[-4] = v_175;
    goto v_123;
v_125:
    stack[-1] = stack[-6];
    stack[0] = stack[-7];
    stack[-2] = stack[-5];
    v_175 = qvalue(basic_elt(env, 2)); // dpoly
    v_175 = ncons(v_175);
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 7); // gcd!-in!-vector
    v_175 = (*qfn4up(fn))(fn, stack[-1], stack[0], stack[-2], v_175);
    }
    env = stack[-8];
    stack[-4] = v_175;
    goto v_123;
v_123:
    v_175 = stack[-4];
    v_175 = Lmkvect(nil, v_175);
    env = stack[-8];
    setvalue(basic_elt(env, 1), v_175); // linear!-factors
    v_175 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-2] = v_175;
v_145:
    v_176 = stack[-4];
    v_175 = stack[-2];
    v_175 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_176) - static_cast<std::uintptr_t>(v_175) + TAG_FIXNUM);
    v_175 = (static_cast<std::intptr_t>(v_175) < 0 ? lisp_true : nil);
    if (v_175 == nil) goto v_150;
    goto v_144;
v_150:
    stack[-1] = qvalue(basic_elt(env, 1)); // linear!-factors
    stack[0] = stack[-2];
    v_176 = stack[-6];
    v_175 = stack[-2];
    v_175 = Lgetv(nil, v_176, v_175);
    env = stack[-8];
    v_175 = Lputv(nil, stack[-1], stack[0], v_175);
    env = stack[-8];
    v_175 = stack[-2];
    v_175 = static_cast<LispObject>(static_cast<std::intptr_t>(v_175) + 0x10);
    stack[-2] = v_175;
    goto v_145;
v_144:
    stack[-2] = qvalue(basic_elt(env, 3)); // poly!-vector
    stack[-1] = qvalue(basic_elt(env, 2)); // dpoly
    stack[0] = qvalue(basic_elt(env, 1)); // linear!-factors
    v_175 = stack[-4];
    v_175 = ncons(v_175);
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 8); // quotfail!-in!-vector
    v_175 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_175);
    }
    env = stack[-8];
    setvalue(basic_elt(env, 2), v_175); // dpoly
    v_177 = stack[-4];
    v_176 = qvalue(basic_elt(env, 1)); // linear!-factors
    v_175 = stack[-7];
    v_175 = list3(v_177, v_176, v_175);
    ;}  // end of a binding scope
    return onevalue(v_175);
}



// Code for ofsf_smdbgetrel

static LispObject CC_ofsf_smdbgetrel(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_30, v_31, v_32, v_33;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_31 = v_3;
    v_32 = v_2;
// end of prologue
v_7:
    v_33 = v_32;
    v_30 = v_31;
    if (!car_legal(v_30)) v_30 = carerror(v_30); else
    v_30 = car(v_30);
    if (!car_legal(v_30)) v_30 = cdrerror(v_30); else
    v_30 = cdr(v_30);
    if (!car_legal(v_30)) v_30 = cdrerror(v_30); else
    v_30 = cdr(v_30);
    if (equal(v_33, v_30)) goto v_10;
    else goto v_11;
v_10:
    v_30 = v_31;
    if (!car_legal(v_30)) v_30 = carerror(v_30); else
    v_30 = car(v_30);
    if (!car_legal(v_30)) v_30 = cdrerror(v_30); else
    v_30 = cdr(v_30);
    if (!car_legal(v_30)) v_30 = carerror(v_30); else
    v_30 = car(v_30);
    goto v_6;
v_11:
    v_30 = v_31;
    if (!car_legal(v_30)) v_30 = cdrerror(v_30); else
    v_30 = cdr(v_30);
    if (v_30 == nil) goto v_22;
    v_30 = v_31;
    if (!car_legal(v_30)) v_30 = cdrerror(v_30); else
    v_30 = cdr(v_30);
    v_31 = v_30;
    goto v_7;
v_22:
    v_30 = nil;
    goto v_6;
    v_30 = nil;
v_6:
    return onevalue(v_30);
}



// Code for qqe_length!-graph!-marked

static LispObject CC_qqe_lengthKgraphKmarked(LispObject env,
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
    v_8 = basic_elt(env, 1); // blockmark
    return get(v_7, v_8);
}



// Code for pasf_dnf

static LispObject CC_pasf_dnf(LispObject env,
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
    v_19 = stack[0];
    v_18 = basic_elt(env, 1); // and
    {   LispObject fn = basic_elt(env, 3); // pasf_puregconp
    v_18 = (*qfn2(fn))(fn, v_19, v_18);
    }
    env = stack[-1];
    if (v_18 == nil) goto v_7;
    v_18 = stack[0];
    goto v_5;
v_7:
    v_18 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // pasf_pnf
    v_19 = (*qfn1(fn))(fn, v_18);
    }
    env = stack[-1];
    v_18 = basic_elt(env, 2); // dnf
    {
        LispObject fn = basic_elt(env, 5); // pasf_pbnf
        return (*qfn2(fn))(fn, v_19, v_18);
    }
    v_18 = nil;
v_5:
    return onevalue(v_18);
}



// Code for division!-test

static LispObject CC_divisionKtest(LispObject env,
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
    if (v_25 == nil) goto v_10;
    else goto v_11;
v_10:
    v_25 = lisp_true;
    goto v_6;
v_11:
    v_25 = stack[0];
    if (!car_legal(v_25)) v_26 = carerror(v_25); else
    v_26 = car(v_25);
    v_25 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // quotf
    v_25 = (*qfn2(fn))(fn, v_26, v_25);
    }
    env = stack[-2];
    if (v_25 == nil) goto v_14;
    else goto v_15;
v_14:
    v_25 = nil;
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



// Code for ldf!-spf!-var

static LispObject CC_ldfKspfKvar(LispObject env,
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
    v_77 = v_2;
// end of prologue
    v_78 = nil;
    stack[-3] = nil;
    stack[-1] = v_77;
v_11:
    v_77 = stack[-1];
    if (v_77 == nil) goto v_15;
    else goto v_16;
v_15:
    goto v_10;
v_16:
    v_77 = stack[-1];
    if (!car_legal(v_77)) v_77 = carerror(v_77); else
    v_77 = car(v_77);
    stack[0] = v_78;
    if (!car_legal(v_77)) v_77 = cdrerror(v_77); else
    v_77 = cdr(v_77);
    {   LispObject fn = basic_elt(env, 3); // kernels
    v_77 = (*qfn1(fn))(fn, v_77);
    }
    env = stack[-4];
    v_77 = Lappend_2(nil, stack[0], v_77);
    env = stack[-4];
    v_78 = v_77;
    v_77 = stack[-1];
    if (!car_legal(v_77)) v_77 = cdrerror(v_77); else
    v_77 = cdr(v_77);
    stack[-1] = v_77;
    goto v_11;
v_10:
    v_77 = v_78;
    {   LispObject fn = basic_elt(env, 4); // makeset
    v_77 = (*qfn1(fn))(fn, v_77);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 5); // prlist
    v_77 = (*qfn1(fn))(fn, v_77);
    }
    env = stack[-4];
    stack[-2] = v_77;
v_32:
    v_77 = stack[-2];
    if (v_77 == nil) goto v_38;
    else goto v_39;
v_38:
    goto v_31;
v_39:
    v_77 = stack[-2];
    if (!car_legal(v_77)) v_77 = carerror(v_77); else
    v_77 = car(v_77);
    stack[-1] = v_77;
    v_78 = stack[-1];
    v_77 = basic_elt(env, 1); // x
    if (!consp(v_78)) goto v_51;
    v_78 = car(v_78);
    if (v_78 == v_77) goto v_52;
v_51:
    v_78 = stack[-1];
    v_77 = basic_elt(env, 2); // u
    v_77 = Leqcar(nil, v_78, v_77);
    env = stack[-4];
    v_77 = (v_77 == nil ? lisp_true : nil);
    goto v_50;
v_52:
    v_77 = nil;
    goto v_50;
    v_77 = nil;
v_50:
    if (v_77 == nil) goto v_48;
    v_78 = basic_elt(env, 1); // x
    v_77 = stack[-1];
    if (!car_legal(v_77)) v_77 = cdrerror(v_77); else
    v_77 = cdr(v_77);
    {   LispObject fn = basic_elt(env, 6); // sacar
    stack[0] = (*qfn2(fn))(fn, v_78, v_77);
    }
    env = stack[-4];
    v_78 = basic_elt(env, 2); // u
    v_77 = stack[-1];
    if (!car_legal(v_77)) v_77 = cdrerror(v_77); else
    v_77 = cdr(v_77);
    {   LispObject fn = basic_elt(env, 6); // sacar
    v_78 = (*qfn2(fn))(fn, v_78, v_77);
    }
    env = stack[-4];
    v_77 = stack[-3];
    {   LispObject fn = basic_elt(env, 7); // appends
    v_77 = (*qfn3(fn))(fn, stack[0], v_78, v_77);
    }
    env = stack[-4];
    stack[-3] = v_77;
    goto v_46;
v_48:
v_46:
    v_77 = stack[-2];
    if (!car_legal(v_77)) v_77 = cdrerror(v_77); else
    v_77 = cdr(v_77);
    stack[-2] = v_77;
    goto v_32;
v_31:
    v_77 = stack[-3];
    {
        LispObject fn = basic_elt(env, 4); // makeset
        return (*qfn1(fn))(fn, v_77);
    }
    return onevalue(v_77);
}



// Code for dipreplus

static LispObject CC_dipreplus(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_21, v_22;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_22 = v_2;
// end of prologue
    v_21 = v_22;
    if (!consp(v_21)) goto v_6;
    else goto v_7;
v_6:
    v_21 = v_22;
    goto v_5;
v_7:
    v_21 = v_22;
    if (!car_legal(v_21)) v_21 = cdrerror(v_21); else
    v_21 = cdr(v_21);
    if (v_21 == nil) goto v_10;
    else goto v_11;
v_10:
    v_21 = v_22;
    if (!car_legal(v_21)) v_21 = carerror(v_21); else
    v_21 = car(v_21);
    goto v_5;
v_11:
    v_21 = basic_elt(env, 1); // plus
    return cons(v_21, v_22);
    v_21 = nil;
v_5:
    return onevalue(v_21);
}



// Code for ratmean

static LispObject CC_ratmean(LispObject env,
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
    v_9 = lisp_true;
    {
        LispObject fn = basic_elt(env, 1); // ratplusm
        return (*qfn3(fn))(fn, v_11, v_10, v_9);
    }
}



// Code for indordlp

static LispObject CC_indordlp(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_62, v_63, v_64, v_65;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_63 = v_3;
    v_64 = v_2;
// end of prologue
v_7:
    v_62 = v_64;
    if (v_62 == nil) goto v_10;
    else goto v_11;
v_10:
    v_62 = nil;
    goto v_6;
v_11:
    v_62 = v_63;
    if (v_62 == nil) goto v_14;
    else goto v_15;
v_14:
    v_62 = lisp_true;
    goto v_6;
v_15:
    v_62 = v_64;
    if (!car_legal(v_62)) v_65 = carerror(v_62); else
    v_65 = car(v_62);
    v_62 = v_63;
    if (!car_legal(v_62)) v_62 = carerror(v_62); else
    v_62 = car(v_62);
    if (equal(v_65, v_62)) goto v_18;
    else goto v_19;
v_18:
    v_62 = v_64;
    if (!car_legal(v_62)) v_62 = cdrerror(v_62); else
    v_62 = cdr(v_62);
    v_64 = v_62;
    v_62 = v_63;
    if (!car_legal(v_62)) v_62 = cdrerror(v_62); else
    v_62 = cdr(v_62);
    v_63 = v_62;
    goto v_7;
v_19:
    v_62 = v_64;
    if (!car_legal(v_62)) v_62 = carerror(v_62); else
    v_62 = car(v_62);
    if (!consp(v_62)) goto v_28;
    else goto v_29;
v_28:
    v_62 = v_63;
    if (!car_legal(v_62)) v_62 = carerror(v_62); else
    v_62 = car(v_62);
    if (!consp(v_62)) goto v_34;
    else goto v_35;
v_34:
    v_62 = v_64;
    if (!car_legal(v_62)) v_62 = carerror(v_62); else
    v_62 = car(v_62);
    if (!car_legal(v_63)) v_63 = carerror(v_63); else
    v_63 = car(v_63);
    {
        LispObject fn = basic_elt(env, 1); // indordp
        return (*qfn2(fn))(fn, v_62, v_63);
    }
v_35:
    v_62 = lisp_true;
    goto v_6;
    goto v_9;
v_29:
    v_62 = v_63;
    if (!car_legal(v_62)) v_62 = carerror(v_62); else
    v_62 = car(v_62);
    if (!consp(v_62)) goto v_46;
    else goto v_47;
v_46:
    v_62 = nil;
    goto v_6;
v_47:
    v_62 = v_64;
    if (!car_legal(v_62)) v_62 = carerror(v_62); else
    v_62 = car(v_62);
    if (!car_legal(v_62)) v_62 = cdrerror(v_62); else
    v_62 = cdr(v_62);
    if (!car_legal(v_62)) v_62 = carerror(v_62); else
    v_62 = car(v_62);
    if (!car_legal(v_63)) v_63 = carerror(v_63); else
    v_63 = car(v_63);
    if (!car_legal(v_63)) v_63 = cdrerror(v_63); else
    v_63 = cdr(v_63);
    if (!car_legal(v_63)) v_63 = carerror(v_63); else
    v_63 = car(v_63);
    {
        LispObject fn = basic_elt(env, 1); // indordp
        return (*qfn2(fn))(fn, v_62, v_63);
    }
v_9:
    v_62 = nil;
v_6:
    return onevalue(v_62);
}



// Code for simp!-prop!-form

static LispObject CC_simpKpropKform(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_219, v_220, v_221;
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
    v_220 = v_2;
// end of prologue
    v_221 = v_220;
    v_219 = basic_elt(env, 1); // (nil)
    if (equal(v_221, v_219)) goto v_6;
    else goto v_7;
v_6:
    v_219 = qvalue(basic_elt(env, 2)); // !'true
    goto v_5;
v_7:
    v_219 = v_220;
    stack[-7] = v_219;
    v_219 = stack[-7];
    if (v_219 == nil) goto v_22;
    else goto v_23;
v_22:
    v_219 = nil;
    goto v_17;
v_23:
    v_219 = stack[-7];
    if (!car_legal(v_219)) v_219 = carerror(v_219); else
    v_219 = car(v_219);
    stack[-3] = v_219;
    v_219 = stack[-3];
    if (v_219 == nil) goto v_39;
    else goto v_40;
v_39:
    v_219 = nil;
    goto v_34;
v_40:
    v_219 = stack[-3];
    if (!car_legal(v_219)) v_219 = carerror(v_219); else
    v_219 = car(v_219);
    v_221 = v_219;
    v_220 = v_221;
    v_219 = basic_elt(env, 3); // not_prop!*
    if (!consp(v_220)) goto v_50;
    v_220 = car(v_220);
    if (v_220 == v_219) goto v_49;
    else goto v_50;
v_49:
    v_219 = basic_elt(env, 4); // not
    v_220 = v_221;
    if (!car_legal(v_220)) v_220 = cdrerror(v_220); else
    v_220 = cdr(v_220);
    if (!car_legal(v_220)) v_220 = carerror(v_220); else
    v_220 = car(v_220);
    v_219 = list2(v_219, v_220);
    env = stack[-8];
    goto v_48;
v_50:
    v_219 = v_221;
    if (!car_legal(v_219)) v_219 = cdrerror(v_219); else
    v_219 = cdr(v_219);
    if (!car_legal(v_219)) v_219 = carerror(v_219); else
    v_219 = car(v_219);
    goto v_48;
    v_219 = nil;
v_48:
    v_219 = ncons(v_219);
    env = stack[-8];
    stack[-1] = v_219;
    stack[-2] = v_219;
v_35:
    v_219 = stack[-3];
    if (!car_legal(v_219)) v_219 = cdrerror(v_219); else
    v_219 = cdr(v_219);
    stack[-3] = v_219;
    v_219 = stack[-3];
    if (v_219 == nil) goto v_68;
    else goto v_69;
v_68:
    v_219 = stack[-2];
    goto v_34;
v_69:
    stack[0] = stack[-1];
    v_219 = stack[-3];
    if (!car_legal(v_219)) v_219 = carerror(v_219); else
    v_219 = car(v_219);
    v_221 = v_219;
    v_220 = v_221;
    v_219 = basic_elt(env, 3); // not_prop!*
    if (!consp(v_220)) goto v_80;
    v_220 = car(v_220);
    if (v_220 == v_219) goto v_79;
    else goto v_80;
v_79:
    v_219 = basic_elt(env, 4); // not
    v_220 = v_221;
    if (!car_legal(v_220)) v_220 = cdrerror(v_220); else
    v_220 = cdr(v_220);
    if (!car_legal(v_220)) v_220 = carerror(v_220); else
    v_220 = car(v_220);
    v_219 = list2(v_219, v_220);
    env = stack[-8];
    goto v_78;
v_80:
    v_219 = v_221;
    if (!car_legal(v_219)) v_219 = cdrerror(v_219); else
    v_219 = cdr(v_219);
    if (!car_legal(v_219)) v_219 = carerror(v_219); else
    v_219 = car(v_219);
    goto v_78;
    v_219 = nil;
v_78:
    v_219 = ncons(v_219);
    env = stack[-8];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_219);
    v_219 = stack[-1];
    if (!car_legal(v_219)) v_219 = cdrerror(v_219); else
    v_219 = cdr(v_219);
    stack[-1] = v_219;
    goto v_35;
v_34:
    v_220 = v_219;
    if (!car_legal(v_220)) v_220 = cdrerror(v_220); else
    v_220 = cdr(v_220);
    if (v_220 == nil) goto v_100;
    v_220 = qvalue(basic_elt(env, 5)); // !'and
    v_219 = cons(v_220, v_219);
    env = stack[-8];
    goto v_98;
v_100:
    if (!car_legal(v_219)) v_219 = carerror(v_219); else
    v_219 = car(v_219);
    goto v_98;
    v_219 = nil;
v_98:
    v_219 = ncons(v_219);
    env = stack[-8];
    stack[-5] = v_219;
    stack[-6] = v_219;
v_18:
    v_219 = stack[-7];
    if (!car_legal(v_219)) v_219 = cdrerror(v_219); else
    v_219 = cdr(v_219);
    stack[-7] = v_219;
    v_219 = stack[-7];
    if (v_219 == nil) goto v_114;
    else goto v_115;
v_114:
    v_219 = stack[-6];
    goto v_17;
v_115:
    stack[-4] = stack[-5];
    v_219 = stack[-7];
    if (!car_legal(v_219)) v_219 = carerror(v_219); else
    v_219 = car(v_219);
    stack[-3] = v_219;
    v_219 = stack[-3];
    if (v_219 == nil) goto v_132;
    else goto v_133;
v_132:
    v_219 = nil;
    goto v_127;
v_133:
    v_219 = stack[-3];
    if (!car_legal(v_219)) v_219 = carerror(v_219); else
    v_219 = car(v_219);
    v_221 = v_219;
    v_220 = v_221;
    v_219 = basic_elt(env, 3); // not_prop!*
    if (!consp(v_220)) goto v_143;
    v_220 = car(v_220);
    if (v_220 == v_219) goto v_142;
    else goto v_143;
v_142:
    v_219 = basic_elt(env, 4); // not
    v_220 = v_221;
    if (!car_legal(v_220)) v_220 = cdrerror(v_220); else
    v_220 = cdr(v_220);
    if (!car_legal(v_220)) v_220 = carerror(v_220); else
    v_220 = car(v_220);
    v_219 = list2(v_219, v_220);
    env = stack[-8];
    goto v_141;
v_143:
    v_219 = v_221;
    if (!car_legal(v_219)) v_219 = cdrerror(v_219); else
    v_219 = cdr(v_219);
    if (!car_legal(v_219)) v_219 = carerror(v_219); else
    v_219 = car(v_219);
    goto v_141;
    v_219 = nil;
v_141:
    v_219 = ncons(v_219);
    env = stack[-8];
    stack[-1] = v_219;
    stack[-2] = v_219;
v_128:
    v_219 = stack[-3];
    if (!car_legal(v_219)) v_219 = cdrerror(v_219); else
    v_219 = cdr(v_219);
    stack[-3] = v_219;
    v_219 = stack[-3];
    if (v_219 == nil) goto v_161;
    else goto v_162;
v_161:
    v_219 = stack[-2];
    goto v_127;
v_162:
    stack[0] = stack[-1];
    v_219 = stack[-3];
    if (!car_legal(v_219)) v_219 = carerror(v_219); else
    v_219 = car(v_219);
    v_221 = v_219;
    v_220 = v_221;
    v_219 = basic_elt(env, 3); // not_prop!*
    if (!consp(v_220)) goto v_173;
    v_220 = car(v_220);
    if (v_220 == v_219) goto v_172;
    else goto v_173;
v_172:
    v_219 = basic_elt(env, 4); // not
    v_220 = v_221;
    if (!car_legal(v_220)) v_220 = cdrerror(v_220); else
    v_220 = cdr(v_220);
    if (!car_legal(v_220)) v_220 = carerror(v_220); else
    v_220 = car(v_220);
    v_219 = list2(v_219, v_220);
    env = stack[-8];
    goto v_171;
v_173:
    v_219 = v_221;
    if (!car_legal(v_219)) v_219 = cdrerror(v_219); else
    v_219 = cdr(v_219);
    if (!car_legal(v_219)) v_219 = carerror(v_219); else
    v_219 = car(v_219);
    goto v_171;
    v_219 = nil;
v_171:
    v_219 = ncons(v_219);
    env = stack[-8];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_219);
    v_219 = stack[-1];
    if (!car_legal(v_219)) v_219 = cdrerror(v_219); else
    v_219 = cdr(v_219);
    stack[-1] = v_219;
    goto v_128;
v_127:
    v_220 = v_219;
    if (!car_legal(v_220)) v_220 = cdrerror(v_220); else
    v_220 = cdr(v_220);
    if (v_220 == nil) goto v_193;
    v_220 = qvalue(basic_elt(env, 5)); // !'and
    v_219 = cons(v_220, v_219);
    env = stack[-8];
    goto v_191;
v_193:
    if (!car_legal(v_219)) v_219 = carerror(v_219); else
    v_219 = car(v_219);
    goto v_191;
    v_219 = nil;
v_191:
    v_219 = ncons(v_219);
    env = stack[-8];
    if (!car_legal(stack[-4])) rplacd_fails(stack[-4]);
    setcdr(stack[-4], v_219);
    v_219 = stack[-5];
    if (!car_legal(v_219)) v_219 = cdrerror(v_219); else
    v_219 = cdr(v_219);
    stack[-5] = v_219;
    goto v_18;
v_17:
    v_220 = v_219;
    v_219 = v_220;
    if (!car_legal(v_219)) v_219 = cdrerror(v_219); else
    v_219 = cdr(v_219);
    if (v_219 == nil) goto v_209;
    v_219 = qvalue(basic_elt(env, 6)); // !'or
    return cons(v_219, v_220);
v_209:
    v_219 = v_220;
    if (!car_legal(v_219)) v_219 = carerror(v_219); else
    v_219 = car(v_219);
    goto v_207;
    v_219 = nil;
v_207:
    goto v_5;
    v_219 = nil;
v_5:
    return onevalue(v_219);
}



// Code for can_rep_cell

static LispObject CC_can_rep_cell(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_13 = v_2;
// end of prologue
    if (!car_legal(v_13)) v_13 = cdrerror(v_13); else
    v_13 = cdr(v_13);
    if (!car_legal(v_13)) v_14 = carerror(v_13); else
    v_14 = car(v_13);
    v_13 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-1] = Lgetv(nil, v_14, v_13);
    env = stack[-2];
    v_13 = stack[0];
    v_13 = sub1(v_13);
    {
        LispObject v_17 = stack[-1];
        return Lgetv(nil, v_17, v_13);
    }
}



// Code for even_action_pow

static LispObject CC_even_action_pow(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_89, v_90, v_91, v_92;
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
    stack[-2] = v_5;
    stack[-3] = v_4;
    stack[-4] = v_3;
    v_92 = v_2;
// end of prologue
    v_89 = stack[-4];
    if (!car_legal(v_89)) v_89 = carerror(v_89); else
    v_89 = car(v_89);
    v_91 = v_89;
    v_89 = stack[-4];
    if (!car_legal(v_89)) v_89 = cdrerror(v_89); else
    v_89 = cdr(v_89);
    stack[-1] = v_89;
    v_90 = v_91;
    v_89 = v_92;
    v_89 = Lassoc(nil, v_90, v_89);
    stack[0] = v_89;
    if (v_89 == nil) goto v_22;
    v_90 = stack[-1];
    v_89 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_90 == v_89) goto v_28;
    else goto v_29;
v_28:
    v_90 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_89 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_89 = cons(v_90, v_89);
    env = stack[-6];
    goto v_27;
v_29:
    stack[-4] = v_91;
    v_89 = stack[-1];
    v_89 = sub1(v_89);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 1); // to
    v_90 = (*qfn2(fn))(fn, stack[-4], v_89);
    }
    env = stack[-6];
    v_89 = stack[-1];
    v_91 = cons(v_90, v_89);
    env = stack[-6];
    v_90 = nil;
    v_89 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_89 = acons(v_91, v_90, v_89);
    env = stack[-6];
    goto v_27;
    v_89 = nil;
v_27:
    v_91 = stack[0];
    v_90 = stack[-3];
    {   LispObject fn = basic_elt(env, 2); // component_action
    v_89 = (*qfn3(fn))(fn, v_91, v_90, v_89);
    }
    env = stack[-6];
    stack[0] = v_89;
    v_90 = stack[0];
    v_89 = stack[-2];
    {
        LispObject fn = basic_elt(env, 3); // multsq
        return (*qfn2(fn))(fn, v_90, v_89);
    }
v_22:
    v_90 = v_91;
    v_91 = v_92;
    v_89 = nil;
    {   LispObject fn = basic_elt(env, 4); // find_active_components
    v_89 = (*qfn3(fn))(fn, v_90, v_91, v_89);
    }
    env = stack[-6];
    stack[-1] = v_89;
    v_90 = nil;
    v_89 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_89 = cons(v_90, v_89);
    env = stack[-6];
    stack[0] = v_89;
    v_89 = stack[-1];
    stack[-5] = v_89;
v_63:
    v_89 = stack[-5];
    if (v_89 == nil) goto v_67;
    else goto v_68;
v_67:
    goto v_62;
v_68:
    v_89 = stack[-5];
    if (!car_legal(v_89)) v_89 = carerror(v_89); else
    v_89 = car(v_89);
    stack[-1] = v_89;
    v_90 = stack[-4];
    v_89 = stack[-1];
    if (!car_legal(v_89)) v_89 = carerror(v_89); else
    v_89 = car(v_89);
    {   LispObject fn = basic_elt(env, 5); // diffp
    v_89 = (*qfn2(fn))(fn, v_90, v_89);
    }
    env = stack[-6];
    v_91 = stack[-1];
    v_90 = stack[-3];
    {   LispObject fn = basic_elt(env, 2); // component_action
    v_89 = (*qfn3(fn))(fn, v_91, v_90, v_89);
    }
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 6); // addsq
    v_89 = (*qfn2(fn))(fn, stack[0], v_89);
    }
    env = stack[-6];
    stack[0] = v_89;
    v_89 = stack[-5];
    if (!car_legal(v_89)) v_89 = cdrerror(v_89); else
    v_89 = cdr(v_89);
    stack[-5] = v_89;
    goto v_63;
v_62:
    v_90 = stack[0];
    v_89 = stack[-2];
    {
        LispObject fn = basic_elt(env, 3); // multsq
        return (*qfn2(fn))(fn, v_90, v_89);
    }
    return onevalue(v_89);
}



// Code for quotf!*

static LispObject CC_quotfH(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_46 = stack[-1];
    if (v_46 == nil) goto v_7;
    else goto v_8;
v_7:
    v_46 = nil;
    goto v_6;
v_8:
    v_47 = stack[-1];
    v_46 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // quotf
    v_46 = (*qfn2(fn))(fn, v_47, v_46);
    }
    env = stack[-2];
    v_47 = v_46;
    v_46 = v_47;
    if (v_46 == nil) goto v_20;
    v_46 = v_47;
    goto v_18;
v_20:
    v_47 = stack[-1];
    v_46 = stack[0];
    v_46 = cons(v_47, v_46);
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // rationalizesq
    v_46 = (*qfn1(fn))(fn, v_46);
    }
    env = stack[-2];
    v_48 = v_46;
    v_46 = v_48;
    if (!car_legal(v_46)) v_47 = cdrerror(v_46); else
    v_47 = cdr(v_46);
    v_46 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_47 == v_46) goto v_32;
    else goto v_33;
v_32:
    v_46 = v_48;
    if (!car_legal(v_46)) v_46 = carerror(v_46); else
    v_46 = car(v_46);
    goto v_31;
v_33:
    v_48 = basic_elt(env, 1); // "DIVISION FAILED"
    v_47 = stack[-1];
    v_46 = stack[0];
    v_46 = list3(v_48, v_47, v_46);
    env = stack[-2];
    {
        LispObject fn = basic_elt(env, 4); // errach
        return (*qfn1(fn))(fn, v_46);
    }
    v_46 = nil;
v_31:
    goto v_18;
    v_46 = nil;
v_18:
    goto v_6;
    v_46 = nil;
v_6:
    return onevalue(v_46);
}



// Code for talp_cocc

static LispObject CC_talp_cocc(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_59, v_60, v_61;
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
    v_59 = v_2;
// end of prologue
    v_60 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_61 = v_60;
    v_60 = v_59;
    v_60 = Lconsp(nil, v_60);
    env = stack[-3];
    if (v_60 == nil) goto v_13;
    stack[-2] = v_59;
v_19:
    v_59 = stack[-2];
    if (v_59 == nil) goto v_23;
    else goto v_24;
v_23:
    goto v_18;
v_24:
    v_59 = stack[-2];
    if (!car_legal(v_59)) v_59 = carerror(v_59); else
    v_59 = car(v_59);
    v_60 = v_59;
    v_59 = v_60;
    v_59 = Lconsp(nil, v_59);
    env = stack[-3];
    if (v_59 == nil) goto v_33;
    stack[0] = v_61;
    v_59 = stack[-1];
    {   LispObject fn = basic_elt(env, 0); // talp_cocc
    v_59 = (*qfn2(fn))(fn, v_60, v_59);
    }
    env = stack[-3];
    v_59 = plus2(stack[0], v_59);
    env = stack[-3];
    v_61 = v_59;
    goto v_31;
v_33:
    v_59 = stack[-1];
    if (v_60 == v_59) goto v_45;
    else goto v_46;
v_45:
    v_59 = v_61;
    v_59 = add1(v_59);
    env = stack[-3];
    v_61 = v_59;
    goto v_44;
v_46:
v_44:
    goto v_31;
v_31:
    v_59 = stack[-2];
    if (!car_legal(v_59)) v_59 = cdrerror(v_59); else
    v_59 = cdr(v_59);
    stack[-2] = v_59;
    goto v_19;
v_18:
    goto v_11;
v_13:
    v_60 = stack[-1];
    if (v_60 == v_59) goto v_53;
    else goto v_54;
v_53:
    v_59 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_7;
v_54:
v_11:
    v_59 = v_61;
v_7:
    return onevalue(v_59);
}



// Code for sfto_deggcd1

static LispObject CC_sfto_deggcd1(LispObject env,
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
    v_69 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_71 = v_69;
    v_69 = lisp_true;
    stack[-3] = v_69;
v_13:
    v_69 = stack[-3];
    if (v_69 == nil) goto v_16;
    v_70 = v_71;
    v_69 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_70 == v_69) goto v_16;
    goto v_17;
v_16:
    goto v_12;
v_17:
    v_69 = stack[-2];
    if (!consp(v_69)) goto v_30;
    else goto v_31;
v_30:
    v_69 = lisp_true;
    goto v_29;
v_31:
    v_69 = stack[-2];
    if (!car_legal(v_69)) v_69 = carerror(v_69); else
    v_69 = car(v_69);
    v_69 = (consp(v_69) ? nil : lisp_true);
    goto v_29;
    v_69 = nil;
v_29:
    if (v_69 == nil) goto v_27;
    v_69 = nil;
    stack[-3] = v_69;
    goto v_25;
v_27:
    v_69 = stack[-2];
    if (!car_legal(v_69)) v_69 = carerror(v_69); else
    v_69 = car(v_69);
    if (!car_legal(v_69)) v_69 = carerror(v_69); else
    v_69 = car(v_69);
    if (!car_legal(v_69)) v_70 = carerror(v_69); else
    v_70 = car(v_69);
    v_69 = stack[-1];
    if (v_70 == v_69) goto v_44;
    else goto v_45;
v_44:
    v_70 = v_71;
    v_69 = stack[-2];
    if (!car_legal(v_69)) v_69 = carerror(v_69); else
    v_69 = car(v_69);
    if (!car_legal(v_69)) v_69 = carerror(v_69); else
    v_69 = car(v_69);
    if (!car_legal(v_69)) v_69 = cdrerror(v_69); else
    v_69 = cdr(v_69);
    v_69 = Lgcd_2(nil, v_70, v_69);
    env = stack[-4];
    v_71 = v_69;
    goto v_43;
v_45:
    stack[0] = v_71;
    v_69 = stack[-2];
    if (!car_legal(v_69)) v_69 = carerror(v_69); else
    v_69 = car(v_69);
    if (!car_legal(v_69)) v_70 = cdrerror(v_69); else
    v_70 = cdr(v_69);
    v_69 = stack[-1];
    {   LispObject fn = basic_elt(env, 0); // sfto_deggcd1
    v_69 = (*qfn2(fn))(fn, v_70, v_69);
    }
    env = stack[-4];
    v_69 = Lgcd_2(nil, stack[0], v_69);
    env = stack[-4];
    v_71 = v_69;
    goto v_43;
v_43:
    v_69 = stack[-2];
    if (!car_legal(v_69)) v_69 = cdrerror(v_69); else
    v_69 = cdr(v_69);
    stack[-2] = v_69;
    goto v_25;
v_25:
    goto v_13;
v_12:
    v_69 = v_71;
    return onevalue(v_69);
}



// Code for vdpfmon

static LispObject CC_vdpfmon(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_28;
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
    v_28 = v_2;
// end of prologue
    stack[-5] = basic_elt(env, 1); // vdp
    stack[-3] = stack[-4];
    stack[-2] = v_28;
    stack[-1] = stack[-4];
    stack[0] = ncons(v_28);
    env = stack[-6];
    v_28 = nil;
    v_28 = ncons(v_28);
    env = stack[-6];
    v_28 = acons(stack[-1], stack[0], v_28);
    env = stack[-6];
    v_28 = list3star(stack[-5], stack[-3], stack[-2], v_28);
    env = stack[-6];
    stack[-1] = v_28;
    v_28 = qvalue(basic_elt(env, 2)); // !*gsugar
    if (v_28 == nil) goto v_21;
    stack[0] = stack[-1];
    v_28 = stack[-4];
    {   LispObject fn = basic_elt(env, 3); // vevtdeg
    v_28 = (*qfn1(fn))(fn, v_28);
    }
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 4); // gsetsugar
    v_28 = (*qfn2(fn))(fn, stack[0], v_28);
    }
    goto v_19;
v_21:
v_19:
    v_28 = stack[-1];
    return onevalue(v_28);
}



// Code for xexptpf

static LispObject CC_xexptpf(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_37 = stack[0];
    v_36 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_37 == v_36) goto v_14;
    else goto v_15;
v_14:
    goto v_10;
v_15:
    v_37 = stack[-1];
    v_36 = stack[-2];
    v_36 = cons(v_37, v_36);
    env = stack[-3];
    stack[-2] = v_36;
    v_36 = stack[0];
    v_36 = sub1(v_36);
    env = stack[-3];
    stack[0] = v_36;
    goto v_9;
v_10:
    v_36 = stack[-1];
    v_37 = v_36;
v_11:
    v_36 = stack[-2];
    if (v_36 == nil) goto v_26;
    else goto v_27;
v_26:
    v_36 = v_37;
    goto v_8;
v_27:
    v_36 = stack[-2];
    v_36 = car(v_36);
    {   LispObject fn = basic_elt(env, 1); // wedgepf
    v_36 = (*qfn2(fn))(fn, v_36, v_37);
    }
    env = stack[-3];
    v_37 = v_36;
    v_36 = stack[-2];
    v_36 = cdr(v_36);
    stack[-2] = v_36;
    goto v_11;
v_8:
    return onevalue(v_36);
}



// Code for latexprint

static LispObject CC_latexprint(LispObject env,
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
    stack[0] = v_2;
// end of prologue
    {   LispObject fn = basic_elt(env, 1); // prinlabegin
    v_8 = (*qfn0(fn))(fn);
    }
    env = stack[-1];
    v_8 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // latexprin
    v_8 = (*qfn1(fn))(fn, v_8);
    }
    env = stack[-1];
    {
        LispObject fn = basic_elt(env, 3); // prinlaend
        return (*qfn0(fn))(fn);
    }
}



// Code for denlist

static LispObject CC_denlist(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_40 = stack[-1];
    if (v_40 == nil) goto v_11;
    else goto v_12;
v_11:
    v_40 = stack[-2];
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn1(fn))(fn, v_40);
    }
v_12:
    v_40 = stack[-1];
    if (!car_legal(v_40)) v_40 = carerror(v_40); else
    v_40 = car(v_40);
    v_41 = Llength(nil, v_40);
    env = stack[-3];
    v_40 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    if (v_41 == v_40) goto v_16;
    else goto v_17;
v_16:
    v_40 = stack[-1];
    if (!car_legal(v_40)) v_41 = carerror(v_40); else
    v_41 = car(v_40);
    v_40 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // ev!-denom2
    v_41 = (*qfn2(fn))(fn, v_41, v_40);
    }
    env = stack[-3];
    v_40 = stack[-2];
    v_40 = cons(v_41, v_40);
    env = stack[-3];
    stack[-2] = v_40;
    v_40 = stack[-1];
    if (!car_legal(v_40)) v_40 = cdrerror(v_40); else
    v_40 = cdr(v_40);
    stack[-1] = v_40;
    goto v_8;
v_17:
    v_40 = stack[-1];
    if (!car_legal(v_40)) v_41 = carerror(v_40); else
    v_41 = car(v_40);
    v_40 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // ev!-denom3
    v_41 = (*qfn2(fn))(fn, v_41, v_40);
    }
    env = stack[-3];
    v_40 = stack[-2];
    v_40 = cons(v_41, v_40);
    env = stack[-3];
    stack[-2] = v_40;
    v_40 = stack[-1];
    if (!car_legal(v_40)) v_40 = cdrerror(v_40); else
    v_40 = cdr(v_40);
    stack[-1] = v_40;
    goto v_8;
    v_40 = nil;
    return onevalue(v_40);
}



// Code for hdiff

static LispObject CC_hdiff(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    v_22 = stack[-1];
    if (v_22 == nil) goto v_7;
    else goto v_8;
v_7:
    v_22 = nil;
    goto v_6;
v_8:
    v_23 = stack[-1];
    v_22 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_23 = Lgetv(nil, v_23, v_22);
    env = stack[-3];
    v_22 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // hdiff
    stack[-2] = (*qfn2(fn))(fn, v_23, v_22);
    }
    env = stack[-3];
    v_23 = stack[-1];
    v_22 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // hdiffterm
    v_22 = (*qfn2(fn))(fn, v_23, v_22);
    }
    env = stack[-3];
    {
        LispObject v_27 = stack[-2];
        LispObject fn = basic_elt(env, 2); // fs!:plus
        return (*qfn2(fn))(fn, v_27, v_22);
    }
    v_22 = nil;
v_6:
    return onevalue(v_22);
}



// Code for eval!-yetunknowntypeexpr

static LispObject CC_evalKyetunknowntypeexpr(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_114, v_115;
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
    stack[0] = v_2;
// end of prologue
v_1:
    v_114 = stack[0];
    if (!consp(v_114)) goto v_7;
    else goto v_8;
v_7:
    v_114 = stack[0];
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
    v_115 = v_114;
    v_114 = v_115;
    if (v_114 == nil) goto v_16;
    v_114 = v_115;
    if (!car_legal(v_114)) v_114 = cdrerror(v_114); else
    v_114 = cdr(v_114);
    if (!car_legal(v_114)) v_115 = carerror(v_114); else
    v_115 = car(v_114);
    v_114 = stack[-4];
    stack[0] = v_115;
    stack[-4] = v_114;
    goto v_1;
v_16:
    v_114 = stack[0];
    goto v_14;
    v_114 = nil;
v_14:
    goto v_6;
v_8:
    v_114 = stack[0];
    if (!car_legal(v_114)) v_115 = carerror(v_114); else
    v_115 = car(v_114);
    v_114 = basic_elt(env, 1); // !*sq
    if (v_115 == v_114) goto v_30;
    else goto v_31;
v_30:
    v_114 = lisp_true;
    goto v_29;
v_31:
    v_114 = stack[0];
    if (!car_legal(v_114)) v_114 = carerror(v_114); else
    v_114 = car(v_114);
    if (!symbolp(v_114)) v_114 = nil;
    else { v_114 = qfastgets(v_114);
           if (v_114 != nil) { v_114 = elt(v_114, 8); // dname
#ifdef RECORD_GET
             if (v_114 != SPID_NOPROP)
                record_get(elt(fastget_names, 8), 1);
             else record_get(elt(fastget_names, 8), 0),
                v_114 = nil; }
           else record_get(elt(fastget_names, 8), 0); }
#else
             if (v_114 == SPID_NOPROP) v_114 = nil; }}
#endif
    if (v_114 == nil) goto v_40;
    else goto v_39;
v_40:
    v_114 = stack[0];
    if (!car_legal(v_114)) v_115 = carerror(v_114); else
    v_115 = car(v_114);
    v_114 = basic_elt(env, 2); // !:dn!:
    v_114 = (v_115 == v_114 ? lisp_true : nil);
v_39:
    goto v_29;
    v_114 = nil;
v_29:
    if (v_114 == nil) goto v_27;
    v_114 = stack[0];
    goto v_6;
v_27:
    v_114 = stack[0];
    if (!car_legal(v_114)) v_114 = carerror(v_114); else
    v_114 = car(v_114);
    if (!symbolp(v_114)) v_114 = nil;
    else { v_114 = qfastgets(v_114);
           if (v_114 != nil) { v_114 = elt(v_114, 45); // psopfn
#ifdef RECORD_GET
             if (v_114 != SPID_NOPROP)
                record_get(elt(fastget_names, 45), 1);
             else record_get(elt(fastget_names, 45), 0),
                v_114 = nil; }
           else record_get(elt(fastget_names, 45), 0); }
#else
             if (v_114 == SPID_NOPROP) v_114 = nil; }}
#endif
    stack[-1] = v_114;
    v_114 = stack[-1];
    if (v_114 == nil) goto v_58;
    v_114 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // getrtype
    v_115 = (*qfn1(fn))(fn, v_114);
    }
    env = stack[-6];
    v_114 = basic_elt(env, 3); // yetunknowntype
    if (v_115 == v_114) goto v_61;
    else goto v_58;
v_61:
    v_115 = stack[-1];
    v_114 = stack[0];
    if (!car_legal(v_114)) v_114 = cdrerror(v_114); else
    v_114 = cdr(v_114);
        return Lapply1(nil, v_115, v_114);
v_58:
    v_114 = stack[0];
    if (!car_legal(v_114)) stack[-5] = carerror(v_114); else
    stack[-5] = car(v_114);
    v_114 = stack[0];
    if (!car_legal(v_114)) v_114 = cdrerror(v_114); else
    v_114 = cdr(v_114);
    stack[-3] = v_114;
    v_114 = stack[-3];
    if (v_114 == nil) goto v_84;
    else goto v_85;
v_84:
    v_114 = nil;
    goto v_78;
v_85:
    v_114 = stack[-3];
    if (!car_legal(v_114)) v_114 = carerror(v_114); else
    v_114 = car(v_114);
    v_115 = v_114;
    v_114 = stack[-4];
    {   LispObject fn = basic_elt(env, 0); // eval!-yetunknowntypeexpr
    v_114 = (*qfn2(fn))(fn, v_115, v_114);
    }
    env = stack[-6];
    v_114 = ncons(v_114);
    env = stack[-6];
    stack[-1] = v_114;
    stack[-2] = v_114;
v_79:
    v_114 = stack[-3];
    if (!car_legal(v_114)) v_114 = cdrerror(v_114); else
    v_114 = cdr(v_114);
    stack[-3] = v_114;
    v_114 = stack[-3];
    if (v_114 == nil) goto v_99;
    else goto v_100;
v_99:
    v_114 = stack[-2];
    goto v_78;
v_100:
    stack[0] = stack[-1];
    v_114 = stack[-3];
    if (!car_legal(v_114)) v_114 = carerror(v_114); else
    v_114 = car(v_114);
    v_115 = v_114;
    v_114 = stack[-4];
    {   LispObject fn = basic_elt(env, 0); // eval!-yetunknowntypeexpr
    v_114 = (*qfn2(fn))(fn, v_115, v_114);
    }
    env = stack[-6];
    v_114 = ncons(v_114);
    env = stack[-6];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_114);
    v_114 = stack[-1];
    if (!car_legal(v_114)) v_114 = cdrerror(v_114); else
    v_114 = cdr(v_114);
    stack[-1] = v_114;
    goto v_79;
v_78:
    {
        LispObject v_122 = stack[-5];
        return cons(v_122, v_114);
    }
    v_114 = nil;
    goto v_6;
    v_114 = nil;
v_6:
    return onevalue(v_114);
}



// Code for gigcd!:

static LispObject CC_gigcdT(LispObject env,
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
v_8:
    v_24 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // gizerop!:
    v_24 = (*qfn1(fn))(fn, v_24);
    }
    env = stack[-3];
    if (v_24 == nil) goto v_12;
    v_24 = stack[-1];
    {
        LispObject fn = basic_elt(env, 2); // fqa
        return (*qfn1(fn))(fn, v_24);
    }
v_12:
    v_24 = stack[0];
    stack[-2] = v_24;
    v_25 = stack[-1];
    v_24 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // giremainder
    v_24 = (*qfn2(fn))(fn, v_25, v_24);
    }
    env = stack[-3];
    stack[0] = v_24;
    v_24 = stack[-2];
    stack[-1] = v_24;
    goto v_8;
    v_24 = nil;
    return onevalue(v_24);
}



// Code for matrix_input_test

static LispObject CC_matrix_input_test(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_21, v_22, v_23;
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
    v_22 = v_2;
// end of prologue
    v_23 = v_22;
    v_21 = basic_elt(env, 1); // mat
    if (!consp(v_23)) goto v_8;
    v_23 = car(v_23);
    if (v_23 == v_21) goto v_9;
v_8:
    v_23 = basic_elt(env, 2); // "ERROR: `"
    v_21 = basic_elt(env, 3); // "' is non matrix input."
    v_21 = list3(v_23, v_22, v_21);
    env = stack[0];
    {   LispObject fn = basic_elt(env, 4); // rederr
    v_21 = (*qfn1(fn))(fn, v_21);
    }
    goto v_7;
v_9:
    v_21 = v_22;
    goto v_5;
v_7:
    v_21 = nil;
v_5:
    return onevalue(v_21);
}



setup_type const u50_setup[] =
{
    {"ofsf_sminsert1",          G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_ofsf_sminsert1},
    {"opfchk!",                 G0W1,     CC_opfchkB,G2W1,    G3W1,     G4W1},
    {"get*order",               G0W1,     CC_getHorder,G2W1,  G3W1,     G4W1},
    {"talp_try2",               G0W1,     CC_talp_try2,G2W1,  G3W1,     G4W1},
    {"reprod",                  G0W2,     G1W2,     CC_reprod,G3W2,     G4W2},
    {"groebmakepair",           G0W2,     G1W2,     CC_groebmakepair,G3W2,G4W2},
    {"al1_defined_vertex",      G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_al1_defined_vertex},
    {"coeffs-to-form1",         G0W3,     G1W3,     G2W3,     CC_coeffsKtoKform1,G4W3},
    {"freeoflist",              G0W2,     G1W2,     CC_freeoflist,G3W2, G4W2},
    {"updkorder",               G0W1,     CC_updkorder,G2W1,  G3W1,     G4W1},
    {"ofsf_smwrmknowl",         G0W2,     G1W2,     CC_ofsf_smwrmknowl,G3W2,G4W2},
    {"gd_simpl",                G0W1,     CC_gd_simpl,G2W1,   G3W1,     G4W1},
    {"*multsq",                 G0W2,     G1W2,     CC_Hmultsq,G3W2,    G4W2},
    {"talp_simplatfn",          G0W3,     G1W3,     G2W3,     CC_talp_simplatfn,G4W3},
    {"qqe_length-graph-neighbors",G0W1,   CC_qqe_lengthKgraphKneighbors,G2W1,G3W1,G4W1},
    {"arprep:",                 G0W1,     CC_arprepT,G2W1,    G3W1,     G4W1},
    {"make_wedge_pair",         G0W2,     G1W2,     CC_make_wedge_pair,G3W2,G4W2},
    {"coeff_sortl",             G0W3,     G1W3,     G2W3,     CC_coeff_sortl,G4W3},
    {"rule-list",               G0W2,     G1W2,     CC_ruleKlist,G3W2,  G4W2},
    {"df-chain-rule",           G0W3,     G1W3,     G2W3,     CC_dfKchainKrule,G4W3},
    {"cali_bc_power",           G0W2,     G1W2,     CC_cali_bc_power,G3W2,G4W2},
    {"test-bool",               G0W1,     CC_testKbool,G2W1,  G3W1,     G4W1},
    {"pst_d1",                  G0W3,     G1W3,     G2W3,     CC_pst_d1,G4W3},
    {"dnform",                  G0W3,     G1W3,     G2W3,     CC_dnform,G4W3},
    {"count-linear-factors-mod-p",G0W3,   G1W3,     G2W3,     CC_countKlinearKfactorsKmodKp,G4W3},
    {"ofsf_smdbgetrel",         G0W2,     G1W2,     CC_ofsf_smdbgetrel,G3W2,G4W2},
    {"qqe_length-graph-marked", G0W1,     CC_qqe_lengthKgraphKmarked,G2W1,G3W1,G4W1},
    {"pasf_dnf",                G0W1,     CC_pasf_dnf,G2W1,   G3W1,     G4W1},
    {"division-test",           G0W2,     G1W2,     CC_divisionKtest,G3W2,G4W2},
    {"ldf-spf-var",             G0W1,     CC_ldfKspfKvar,G2W1,G3W1,     G4W1},
    {"dipreplus",               G0W1,     CC_dipreplus,G2W1,  G3W1,     G4W1},
    {"ratmean",                 G0W2,     G1W2,     CC_ratmean,G3W2,    G4W2},
    {"indordlp",                G0W2,     G1W2,     CC_indordlp,G3W2,   G4W2},
    {"simp-prop-form",          G0W1,     CC_simpKpropKform,G2W1,G3W1,  G4W1},
    {"can_rep_cell",            G0W2,     G1W2,     CC_can_rep_cell,G3W2,G4W2},
    {"even_action_pow",         G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_even_action_pow},
    {"quotf*",                  G0W2,     G1W2,     CC_quotfH,G3W2,     G4W2},
    {"talp_cocc",               G0W2,     G1W2,     CC_talp_cocc,G3W2,  G4W2},
    {"sfto_deggcd1",            G0W2,     G1W2,     CC_sfto_deggcd1,G3W2,G4W2},
    {"vdpfmon",                 G0W2,     G1W2,     CC_vdpfmon,G3W2,    G4W2},
    {"xexptpf",                 G0W2,     G1W2,     CC_xexptpf,G3W2,    G4W2},
    {"latexprint",              G0W1,     CC_latexprint,G2W1, G3W1,     G4W1},
    {"denlist",                 G0W2,     G1W2,     CC_denlist,G3W2,    G4W2},
    {"hdiff",                   G0W2,     G1W2,     CC_hdiff, G3W2,     G4W2},
    {"eval-yetunknowntypeexpr", G0W2,     G1W2,     CC_evalKyetunknowntypeexpr,G3W2,G4W2},
    {"gigcd:",                  G0W2,     G1W2,     CC_gigcdT,G3W2,     G4W2},
    {"matrix_input_test",       G0W1,     CC_matrix_input_test,G2W1,G3W1,G4W1},
    {nullptr, 
        reinterpret_cast<no_args *>(
            reinterpret_cast<uintptr_t>("u50")),
        reinterpret_cast<one_arg *>(
            reinterpret_cast<uintptr_t>("111547 2521697 6761785")),
        nullptr, nullptr, nullptr}
};

// end of generated code
