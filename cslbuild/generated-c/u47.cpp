
// $destdir/u47.c        Machine generated C code

// $Id$

#include "config.h"
#include "headers.h"



// Code for ofsf_smmkatl!-and1

static LispObject CC_ofsf_smmkatlKand1(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_124, v_125, v_126;
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
    stack[-5] = v_4;
    stack[0] = v_3;
    stack[-6] = v_2;
// end of prologue
    v_124 = stack[0];
    if (!car_legal(v_124)) v_125 = carerror(v_124); else
    v_125 = car(v_124);
    v_124 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_124 = cons(v_125, v_124);
    env = stack[-8];
    stack[-7] = v_124;
    v_124 = stack[0];
    if (!car_legal(v_124)) v_124 = cdrerror(v_124); else
    v_124 = cdr(v_124);
    stack[-4] = v_124;
v_19:
    v_124 = stack[-4];
    if (v_124 == nil) goto v_25;
    else goto v_26;
v_25:
    v_124 = nil;
    goto v_18;
v_26:
    v_124 = stack[-4];
    if (!car_legal(v_124)) v_124 = carerror(v_124); else
    v_124 = car(v_124);
    stack[0] = v_124;
    v_124 = stack[0];
    if (!car_legal(v_124)) v_125 = carerror(v_124); else
    v_125 = car(v_124);
    v_124 = stack[-5];
    if (equal(v_125, v_124)) goto v_34;
    else goto v_35;
v_34:
    v_124 = stack[0];
    if (!car_legal(v_124)) v_124 = cdrerror(v_124); else
    v_124 = cdr(v_124);
    if (!car_legal(v_124)) v_125 = carerror(v_124); else
    v_125 = car(v_124);
    v_124 = basic_elt(env, 1); // (lessp greaterp)
    v_124 = Lmemq(nil, v_125, v_124);
    if (v_124 == nil) goto v_42;
    v_124 = stack[-6];
    if (!car_legal(v_124)) v_126 = cdrerror(v_124); else
    v_126 = cdr(v_124);
    v_124 = stack[0];
    if (!car_legal(v_124)) v_125 = cdrerror(v_124); else
    v_125 = cdr(v_124);
    v_124 = stack[-7];
    {   LispObject fn = basic_elt(env, 3); // ofsf_smmkat!-and2
    v_124 = (*qfn3(fn))(fn, v_126, v_125, v_124);
    }
    env = stack[-8];
    v_125 = v_124;
    if (v_124 == nil) goto v_42;
    v_124 = v_125;
    v_124 = ncons(v_124);
    env = stack[-8];
    goto v_40;
v_42:
    v_126 = basic_elt(env, 2); // and
    v_124 = stack[0];
    if (!car_legal(v_124)) v_125 = cdrerror(v_124); else
    v_125 = cdr(v_124);
    v_124 = stack[-7];
    {   LispObject fn = basic_elt(env, 4); // ofsf_entry2at
    v_124 = (*qfn3(fn))(fn, v_126, v_125, v_124);
    }
    env = stack[-8];
    v_124 = ncons(v_124);
    env = stack[-8];
    goto v_40;
    v_124 = nil;
v_40:
    goto v_33;
v_35:
    v_124 = nil;
v_33:
    stack[-3] = v_124;
    v_124 = stack[-3];
    {   LispObject fn = basic_elt(env, 5); // lastpair
    v_124 = (*qfn1(fn))(fn, v_124);
    }
    env = stack[-8];
    stack[-2] = v_124;
    v_124 = stack[-4];
    if (!car_legal(v_124)) v_124 = cdrerror(v_124); else
    v_124 = cdr(v_124);
    stack[-4] = v_124;
    v_124 = stack[-2];
    if (!consp(v_124)) goto v_72;
    else goto v_73;
v_72:
    goto v_19;
v_73:
v_20:
    v_124 = stack[-4];
    if (v_124 == nil) goto v_77;
    else goto v_78;
v_77:
    v_124 = stack[-3];
    goto v_18;
v_78:
    stack[-1] = stack[-2];
    v_124 = stack[-4];
    if (!car_legal(v_124)) v_124 = carerror(v_124); else
    v_124 = car(v_124);
    stack[0] = v_124;
    v_124 = stack[0];
    if (!car_legal(v_124)) v_125 = carerror(v_124); else
    v_125 = car(v_124);
    v_124 = stack[-5];
    if (equal(v_125, v_124)) goto v_87;
    else goto v_88;
v_87:
    v_124 = stack[0];
    if (!car_legal(v_124)) v_124 = cdrerror(v_124); else
    v_124 = cdr(v_124);
    if (!car_legal(v_124)) v_125 = carerror(v_124); else
    v_125 = car(v_124);
    v_124 = basic_elt(env, 1); // (lessp greaterp)
    v_124 = Lmemq(nil, v_125, v_124);
    if (v_124 == nil) goto v_95;
    v_124 = stack[-6];
    if (!car_legal(v_124)) v_126 = cdrerror(v_124); else
    v_126 = cdr(v_124);
    v_124 = stack[0];
    if (!car_legal(v_124)) v_125 = cdrerror(v_124); else
    v_125 = cdr(v_124);
    v_124 = stack[-7];
    {   LispObject fn = basic_elt(env, 3); // ofsf_smmkat!-and2
    v_124 = (*qfn3(fn))(fn, v_126, v_125, v_124);
    }
    env = stack[-8];
    v_125 = v_124;
    if (v_124 == nil) goto v_95;
    v_124 = v_125;
    v_124 = ncons(v_124);
    env = stack[-8];
    goto v_93;
v_95:
    v_126 = basic_elt(env, 2); // and
    v_124 = stack[0];
    if (!car_legal(v_124)) v_125 = cdrerror(v_124); else
    v_125 = cdr(v_124);
    v_124 = stack[-7];
    {   LispObject fn = basic_elt(env, 4); // ofsf_entry2at
    v_124 = (*qfn3(fn))(fn, v_126, v_125, v_124);
    }
    env = stack[-8];
    v_124 = ncons(v_124);
    env = stack[-8];
    goto v_93;
    v_124 = nil;
v_93:
    goto v_86;
v_88:
    v_124 = nil;
v_86:
    if (!car_legal(stack[-1])) rplacd_fails(stack[-1]);
    setcdr(stack[-1], v_124);
    v_124 = stack[-2];
    {   LispObject fn = basic_elt(env, 5); // lastpair
    v_124 = (*qfn1(fn))(fn, v_124);
    }
    env = stack[-8];
    stack[-2] = v_124;
    v_124 = stack[-4];
    if (!car_legal(v_124)) v_124 = cdrerror(v_124); else
    v_124 = cdr(v_124);
    stack[-4] = v_124;
    goto v_20;
v_18:
    return onevalue(v_124);
}



// Code for simpx1

static LispObject CC_simpx1(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_554, v_555, v_556;
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
    stack[-1] = v_3;
    stack[-4] = v_2;
// end of prologue
    stack[-6] = nil;
    v_555 = stack[-4];
    v_554 = basic_elt(env, 1); // !*minus!*
    if (!consp(v_555)) goto v_16;
    v_555 = car(v_555);
    if (v_555 == v_554) goto v_15;
    else goto v_16;
v_15:
    v_555 = stack[-1];
    v_554 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_555 == v_554) goto v_27;
    else goto v_28;
v_27:
    v_554 = stack[-3];
    v_554 = integerp(v_554);
    if (v_554 == nil) goto v_33;
    else goto v_34;
v_33:
    v_554 = nil;
    goto v_32;
v_34:
    v_555 = stack[-3];
    v_554 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_555 = Cremainder(v_555, v_554);
    env = stack[-7];
    v_554 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_554 = (v_555 == v_554 ? lisp_true : nil);
    goto v_32;
    v_554 = nil;
v_32:
    goto v_26;
v_28:
    v_554 = nil;
    goto v_26;
    v_554 = nil;
v_26:
    if (v_554 == nil) goto v_24;
    else goto v_22;
v_24:
    v_555 = stack[-3];
    v_554 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_555 == v_554) goto v_51;
    else goto v_52;
v_51:
    v_555 = stack[-1];
    v_554 = basic_elt(env, 2); // quotient
    if (!consp(v_555)) goto v_58;
    v_555 = car(v_555);
    if (v_555 == v_554) goto v_57;
    else goto v_58;
v_57:
    v_554 = stack[-1];
    if (!car_legal(v_554)) v_554 = cdrerror(v_554); else
    v_554 = cdr(v_554);
    if (!car_legal(v_554)) v_555 = carerror(v_554); else
    v_555 = car(v_554);
    v_554 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_555 == v_554) goto v_64;
    else goto v_65;
v_64:
    v_554 = stack[-1];
    if (!car_legal(v_554)) v_554 = cdrerror(v_554); else
    v_554 = cdr(v_554);
    if (!car_legal(v_554)) v_554 = cdrerror(v_554); else
    v_554 = cdr(v_554);
    if (!car_legal(v_554)) v_554 = carerror(v_554); else
    v_554 = car(v_554);
    v_554 = integerp(v_554);
    if (v_554 == nil) goto v_72;
    else goto v_73;
v_72:
    v_554 = nil;
    goto v_71;
v_73:
    v_554 = stack[-1];
    if (!car_legal(v_554)) v_554 = cdrerror(v_554); else
    v_554 = cdr(v_554);
    if (!car_legal(v_554)) v_554 = cdrerror(v_554); else
    v_554 = cdr(v_554);
    if (!car_legal(v_554)) v_555 = carerror(v_554); else
    v_555 = car(v_554);
    v_554 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_555 = Cremainder(v_555, v_554);
    env = stack[-7];
    v_554 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_554 = (v_555 == v_554 ? lisp_true : nil);
    goto v_71;
    v_554 = nil;
v_71:
    goto v_63;
v_65:
    v_554 = nil;
    goto v_63;
    v_554 = nil;
v_63:
    goto v_56;
v_58:
    v_554 = nil;
    goto v_56;
    v_554 = nil;
v_56:
    goto v_50;
v_52:
    v_554 = nil;
    goto v_50;
    v_554 = nil;
v_50:
    if (v_554 == nil) goto v_48;
    else goto v_22;
v_48:
    goto v_23;
v_22:
    stack[-6] = basic_elt(env, 3); // expt
    stack[-5] = basic_elt(env, 4); // i
    stack[-2] = basic_elt(env, 2); // quotient
    stack[0] = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_555 = stack[-3];
    v_554 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_554 = quot2(v_555, v_554);
    env = stack[-7];
    v_554 = list3(stack[-2], stack[0], v_554);
    env = stack[-7];
    v_554 = list3(stack[-6], stack[-5], v_554);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 18); // simp
    stack[0] = (*qfn1(fn))(fn, v_554);
    }
    env = stack[-7];
    v_554 = stack[-4];
    if (!car_legal(v_554)) v_554 = cdrerror(v_554); else
    v_554 = cdr(v_554);
    if (!car_legal(v_554)) stack[-2] = carerror(v_554); else
    stack[-2] = car(v_554);
    v_556 = basic_elt(env, 2); // quotient
    v_555 = stack[-1];
    v_554 = stack[-3];
    v_554 = list3(v_556, v_555, v_554);
    env = stack[-7];
    v_554 = list2(stack[-2], v_554);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 19); // simpexpt
    v_554 = (*qfn1(fn))(fn, v_554);
    }
    env = stack[-7];
    {
        LispObject v_564 = stack[0];
        LispObject fn = basic_elt(env, 20); // multsq
        return (*qfn2(fn))(fn, v_564, v_554);
    }
v_23:
    v_555 = stack[-1];
    v_554 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_555 == v_554) goto v_123;
    else goto v_124;
v_123:
    v_554 = stack[-3];
    v_554 = integerp(v_554);
    goto v_122;
v_124:
    v_554 = nil;
    goto v_122;
    v_554 = nil;
v_122:
    if (v_554 == nil) goto v_120;
    v_554 = stack[-4];
    if (!car_legal(v_554)) v_554 = cdrerror(v_554); else
    v_554 = cdr(v_554);
    if (!car_legal(v_554)) stack[0] = carerror(v_554); else
    stack[0] = car(v_554);
    v_556 = basic_elt(env, 2); // quotient
    v_555 = stack[-1];
    v_554 = stack[-3];
    v_554 = list3(v_556, v_555, v_554);
    env = stack[-7];
    v_554 = list2(stack[0], v_554);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 19); // simpexpt
    v_554 = (*qfn1(fn))(fn, v_554);
    }
    env = stack[-7];
    {
        LispObject fn = basic_elt(env, 21); // negsq
        return (*qfn1(fn))(fn, v_554);
    }
v_120:
    goto v_14;
v_16:
v_14:
    v_554 = stack[-1];
    if (is_number(v_554)) goto v_147;
    else goto v_146;
v_147:
    v_554 = stack[-3];
    if (is_number(v_554)) goto v_149;
    else goto v_146;
v_149:
    goto v_144;
v_146:
    v_555 = qvalue(basic_elt(env, 5)); // frlis!*
    v_554 = stack[-1];
    {   LispObject fn = basic_elt(env, 22); // smemqlp
    v_554 = (*qfn2(fn))(fn, v_555, v_554);
    }
    env = stack[-7];
    if (v_554 == nil) goto v_152;
    else goto v_151;
v_152:
    v_555 = qvalue(basic_elt(env, 5)); // frlis!*
    v_554 = stack[-3];
    {   LispObject fn = basic_elt(env, 22); // smemqlp
    v_554 = (*qfn2(fn))(fn, v_555, v_554);
    }
    env = stack[-7];
    if (v_554 == nil) goto v_156;
    else goto v_151;
v_156:
    goto v_144;
v_151:
    goto v_145;
v_144:
    goto v_11;
v_145:
    stack[0] = basic_elt(env, 3); // expt
    stack[-2] = stack[-4];
    v_555 = stack[-3];
    v_554 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_555 == v_554) goto v_166;
    else goto v_167;
v_166:
    v_554 = stack[-1];
    goto v_165;
v_167:
    v_556 = basic_elt(env, 2); // quotient
    v_555 = stack[-1];
    v_554 = stack[-3];
    v_554 = list3(v_556, v_555, v_554);
    env = stack[-7];
    goto v_165;
    v_554 = nil;
v_165:
    v_555 = list3(stack[0], stack[-2], v_554);
    env = stack[-7];
    v_554 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {
        LispObject fn = basic_elt(env, 23); // mksq
        return (*qfn2(fn))(fn, v_555, v_554);
    }
v_11:
    v_554 = stack[-1];
    if (is_number(v_554)) goto v_180;
    else goto v_181;
v_180:
    v_554 = stack[-1];
    v_554 = Lminusp(nil, v_554);
    env = stack[-7];
    if (v_554 == nil) goto v_186;
    v_554 = stack[-1];
    v_554 = negate(v_554);
    env = stack[-7];
    stack[-1] = v_554;
    goto v_12;
v_186:
    v_554 = stack[-1];
    v_554 = integerp(v_554);
    if (v_554 == nil) goto v_192;
    v_554 = stack[-3];
    v_554 = integerp(v_554);
    if (v_554 == nil) goto v_198;
    v_554 = stack[-6];
    if (v_554 == nil) goto v_204;
    v_554 = stack[-1];
    v_554 = negate(v_554);
    env = stack[-7];
    stack[-1] = v_554;
    goto v_202;
v_204:
v_202:
    v_554 = stack[-1];
    stack[-5] = v_554;
    v_554 = qvalue(basic_elt(env, 6)); // !*mcd
    if (v_554 == nil) goto v_212;
    v_554 = stack[-4];
    v_554 = integerp(v_554);
    if (v_554 == nil) goto v_216;
    else goto v_215;
v_216:
    v_554 = qvalue(basic_elt(env, 7)); // !*notseparate
    if (v_554 == nil) goto v_215;
    goto v_212;
v_215:
    stack[-2] = stack[-5];
    stack[0] = stack[-3];
    v_555 = stack[-1];
    v_554 = stack[-3];
    v_554 = quot2(v_555, v_554);
    env = stack[-7];
    stack[-1] = v_554;
    v_554 = times2(stack[0], v_554);
    env = stack[-7];
    v_554 = difference2(stack[-2], v_554);
    env = stack[-7];
    stack[-5] = v_554;
    v_555 = stack[-5];
    v_554 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_554 = static_cast<LispObject>(lessp2(v_555, v_554));
    v_554 = v_554 ? lisp_true : nil;
    env = stack[-7];
    if (v_554 == nil) goto v_231;
    v_554 = stack[-1];
    v_554 = sub1(v_554);
    env = stack[-7];
    stack[-1] = v_554;
    v_555 = stack[-5];
    v_554 = stack[-3];
    v_554 = plus2(v_555, v_554);
    env = stack[-7];
    stack[-5] = v_554;
    goto v_229;
v_231:
v_229:
    goto v_210;
v_212:
    v_554 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-1] = v_554;
    goto v_210;
v_210:
    v_555 = stack[-4];
    v_554 = stack[-1];
    v_554 = list2(v_555, v_554);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 19); // simpexpt
    v_554 = (*qfn1(fn))(fn, v_554);
    }
    env = stack[-7];
    stack[0] = v_554;
    v_555 = stack[-5];
    v_554 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_555 == v_554) goto v_249;
    else goto v_250;
v_249:
    v_554 = stack[0];
    goto v_10;
v_250:
    v_555 = stack[-3];
    v_554 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    if (v_555 == v_554) goto v_258;
    else goto v_259;
v_258:
    v_554 = qvalue(basic_elt(env, 8)); // !*keepsqrts
    goto v_257;
v_259:
    v_554 = nil;
    goto v_257;
    v_554 = nil;
v_257:
    if (v_554 == nil) goto v_255;
    stack[-1] = stack[0];
    v_554 = basic_elt(env, 9); // sqrt
    if (!symbolp(v_554)) stack[0] = nil;
    else { stack[0] = qfastgets(v_554);
           if (stack[0] != nil) { stack[0] = elt(stack[0], 22); // simpfn
#ifdef RECORD_GET
             if (stack[0] != SPID_NOPROP)
                record_get(elt(fastget_names, 22), 1);
             else record_get(elt(fastget_names, 22), 0),
                stack[0] = nil; }
           else record_get(elt(fastget_names, 22), 0); }
#else
             if (stack[0] == SPID_NOPROP) stack[0] = nil; }}
#endif
    v_554 = stack[-4];
    v_554 = ncons(v_554);
    env = stack[-7];
    v_554 = Lapply1(nil, stack[0], v_554);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 20); // multsq
    v_554 = (*qfn2(fn))(fn, stack[-1], v_554);
    }
    env = stack[-7];
    stack[0] = v_554;
    v_555 = stack[-5];
    v_554 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_554 = static_cast<LispObject>(lessp2(v_555, v_554));
    v_554 = v_554 ? lisp_true : nil;
    env = stack[-7];
    if (v_554 == nil) goto v_276;
    v_554 = stack[0];
    {   LispObject fn = basic_elt(env, 24); // invsq
    v_554 = (*qfn1(fn))(fn, v_554);
    }
    env = stack[-7];
    stack[0] = v_554;
    v_554 = stack[-5];
    v_554 = negate(v_554);
    env = stack[-7];
    stack[-5] = v_554;
    goto v_274;
v_276:
v_274:
    v_555 = stack[0];
    v_554 = stack[-5];
    {
        LispObject fn = basic_elt(env, 25); // exptsq
        return (*qfn2(fn))(fn, v_555, v_554);
    }
v_255:
    v_554 = stack[-4];
    {   LispObject fn = basic_elt(env, 26); // simp!*
    v_555 = (*qfn1(fn))(fn, v_554);
    }
    env = stack[-7];
    v_554 = stack[-3];
    {   LispObject fn = basic_elt(env, 27); // simprad
    v_555 = (*qfn2(fn))(fn, v_555, v_554);
    }
    env = stack[-7];
    v_554 = stack[-5];
    {   LispObject fn = basic_elt(env, 25); // exptsq
    v_554 = (*qfn2(fn))(fn, v_555, v_554);
    }
    env = stack[-7];
    {
        LispObject v_565 = stack[0];
        LispObject fn = basic_elt(env, 20); // multsq
        return (*qfn2(fn))(fn, v_565, v_554);
    }
    goto v_196;
v_198:
    v_554 = stack[-1];
    stack[-5] = v_554;
    v_554 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-1] = v_554;
    goto v_196;
v_196:
    goto v_184;
v_192:
    v_554 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-5] = v_554;
    goto v_184;
v_184:
    goto v_179;
v_181:
    v_554 = stack[-1];
    if (!consp(v_554)) goto v_304;
    else goto v_305;
v_304:
    v_554 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-5] = v_554;
    goto v_179;
v_305:
    v_554 = stack[-1];
    if (!car_legal(v_554)) v_555 = carerror(v_554); else
    v_555 = car(v_554);
    v_554 = basic_elt(env, 10); // minus
    if (v_555 == v_554) goto v_308;
    else goto v_309;
v_308:
    v_554 = stack[-1];
    if (!car_legal(v_554)) v_554 = cdrerror(v_554); else
    v_554 = cdr(v_554);
    if (!car_legal(v_554)) v_554 = carerror(v_554); else
    v_554 = car(v_554);
    stack[-1] = v_554;
    goto v_12;
v_309:
    v_554 = stack[-1];
    if (!car_legal(v_554)) v_555 = carerror(v_554); else
    v_555 = car(v_554);
    v_554 = basic_elt(env, 11); // plus
    if (v_555 == v_554) goto v_320;
    else goto v_321;
v_320:
    v_554 = qvalue(basic_elt(env, 12)); // !*expandexpt
    goto v_319;
v_321:
    v_554 = nil;
    goto v_319;
    v_554 = nil;
v_319:
    if (v_554 == nil) goto v_317;
    v_555 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_554 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_554 = cons(v_555, v_554);
    env = stack[-7];
    stack[-5] = v_554;
    v_554 = stack[-1];
    if (!car_legal(v_554)) v_554 = cdrerror(v_554); else
    v_554 = cdr(v_554);
    stack[-2] = v_554;
v_335:
    v_554 = stack[-2];
    if (v_554 == nil) goto v_340;
    else goto v_341;
v_340:
    goto v_334;
v_341:
    v_554 = stack[-2];
    if (!car_legal(v_554)) v_554 = carerror(v_554); else
    v_554 = car(v_554);
    stack[-1] = stack[-4];
    stack[0] = basic_elt(env, 2); // quotient
    v_555 = stack[-6];
    if (v_555 == nil) goto v_356;
    v_555 = basic_elt(env, 10); // minus
    v_554 = list2(v_555, v_554);
    env = stack[-7];
    v_555 = v_554;
    goto v_354;
v_356:
    v_555 = v_554;
    goto v_354;
    v_555 = nil;
v_354:
    v_554 = stack[-3];
    v_554 = list3(stack[0], v_555, v_554);
    env = stack[-7];
    v_554 = list2(stack[-1], v_554);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 19); // simpexpt
    v_555 = (*qfn1(fn))(fn, v_554);
    }
    env = stack[-7];
    v_554 = stack[-5];
    {   LispObject fn = basic_elt(env, 20); // multsq
    v_554 = (*qfn2(fn))(fn, v_555, v_554);
    }
    env = stack[-7];
    stack[-5] = v_554;
    v_554 = stack[-2];
    if (!car_legal(v_554)) v_554 = cdrerror(v_554); else
    v_554 = cdr(v_554);
    stack[-2] = v_554;
    goto v_335;
v_334:
    v_554 = stack[-5];
    goto v_10;
v_317:
    v_554 = stack[-1];
    if (!car_legal(v_554)) v_555 = carerror(v_554); else
    v_555 = car(v_554);
    v_554 = basic_elt(env, 13); // times
    if (v_555 == v_554) goto v_373;
    else goto v_374;
v_373:
    v_554 = stack[-1];
    if (!car_legal(v_554)) v_554 = cdrerror(v_554); else
    v_554 = cdr(v_554);
    if (!car_legal(v_554)) v_554 = carerror(v_554); else
    v_554 = car(v_554);
    v_554 = integerp(v_554);
    goto v_372;
v_374:
    v_554 = nil;
    goto v_372;
    v_554 = nil;
v_372:
    if (v_554 == nil) goto v_370;
    v_554 = stack[-3];
    if (is_number(v_554)) goto v_387;
    else goto v_388;
v_387:
    v_555 = stack[-3];
    v_554 = stack[-1];
    if (!car_legal(v_554)) v_554 = cdrerror(v_554); else
    v_554 = cdr(v_554);
    if (!car_legal(v_554)) v_554 = carerror(v_554); else
    v_554 = car(v_554);
    v_554 = Lgcd_2(nil, v_555, v_554);
    env = stack[-7];
    stack[-5] = v_554;
    v_555 = stack[-3];
    v_554 = stack[-5];
    v_554 = quot2(v_555, v_554);
    env = stack[-7];
    stack[-3] = v_554;
    v_554 = stack[-1];
    if (!car_legal(v_554)) v_554 = cdrerror(v_554); else
    v_554 = cdr(v_554);
    if (!car_legal(v_554)) v_555 = carerror(v_554); else
    v_555 = car(v_554);
    v_554 = stack[-5];
    v_554 = quot2(v_555, v_554);
    env = stack[-7];
    stack[-5] = v_554;
    goto v_386;
v_388:
    v_554 = stack[-1];
    if (!car_legal(v_554)) v_554 = cdrerror(v_554); else
    v_554 = cdr(v_554);
    if (!car_legal(v_554)) v_554 = carerror(v_554); else
    v_554 = car(v_554);
    stack[-5] = v_554;
    goto v_386;
v_386:
    v_554 = stack[-1];
    if (!car_legal(v_554)) v_554 = cdrerror(v_554); else
    v_554 = cdr(v_554);
    if (!car_legal(v_554)) v_554 = cdrerror(v_554); else
    v_554 = cdr(v_554);
    if (!car_legal(v_554)) v_554 = cdrerror(v_554); else
    v_554 = cdr(v_554);
    if (v_554 == nil) goto v_411;
    v_555 = basic_elt(env, 13); // times
    v_554 = stack[-1];
    if (!car_legal(v_554)) v_554 = cdrerror(v_554); else
    v_554 = cdr(v_554);
    if (!car_legal(v_554)) v_554 = cdrerror(v_554); else
    v_554 = cdr(v_554);
    v_554 = cons(v_555, v_554);
    env = stack[-7];
    goto v_409;
v_411:
    v_554 = stack[-1];
    if (!car_legal(v_554)) v_554 = cdrerror(v_554); else
    v_554 = cdr(v_554);
    if (!car_legal(v_554)) v_554 = cdrerror(v_554); else
    v_554 = cdr(v_554);
    if (!car_legal(v_554)) v_554 = carerror(v_554); else
    v_554 = car(v_554);
    goto v_409;
    v_554 = nil;
v_409:
    stack[-1] = v_554;
    goto v_179;
v_370:
    v_554 = stack[-1];
    if (!car_legal(v_554)) v_555 = carerror(v_554); else
    v_555 = car(v_554);
    v_554 = basic_elt(env, 2); // quotient
    if (v_555 == v_554) goto v_431;
    else goto v_432;
v_431:
    v_555 = stack[-3];
    v_554 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_555 == v_554) goto v_438;
    else goto v_439;
v_438:
    v_554 = qvalue(basic_elt(env, 12)); // !*expandexpt
    goto v_437;
v_439:
    v_554 = nil;
    goto v_437;
    v_554 = nil;
v_437:
    goto v_430;
v_432:
    v_554 = nil;
    goto v_430;
    v_554 = nil;
v_430:
    if (v_554 == nil) goto v_428;
    v_554 = stack[-1];
    if (!car_legal(v_554)) v_554 = cdrerror(v_554); else
    v_554 = cdr(v_554);
    if (!car_legal(v_554)) v_554 = cdrerror(v_554); else
    v_554 = cdr(v_554);
    if (!car_legal(v_554)) v_554 = carerror(v_554); else
    v_554 = car(v_554);
    stack[-3] = v_554;
    v_554 = stack[-1];
    if (!car_legal(v_554)) v_554 = cdrerror(v_554); else
    v_554 = cdr(v_554);
    if (!car_legal(v_554)) v_554 = carerror(v_554); else
    v_554 = car(v_554);
    stack[-1] = v_554;
    goto v_11;
v_428:
    v_554 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-5] = v_554;
    goto v_179;
v_179:
    v_554 = stack[-4];
    if (symbolp(v_554)) goto v_463;
    else goto v_462;
v_463:
    v_555 = stack[-4];
    v_554 = basic_elt(env, 14); // used!*
    v_554 = Lflagp(nil, v_555, v_554);
    env = stack[-7];
    if (v_554 == nil) goto v_465;
    else goto v_462;
v_465:
    v_554 = stack[-4];
    v_555 = ncons(v_554);
    env = stack[-7];
    v_554 = basic_elt(env, 14); // used!*
    v_554 = Lflag(nil, v_555, v_554);
    env = stack[-7];
    goto v_460;
v_462:
v_460:
    v_555 = stack[-4];
    v_554 = basic_elt(env, 15); // (minus 1)
    if (equal(v_555, v_554)) goto v_479;
    else goto v_480;
v_479:
    v_555 = stack[-3];
    v_554 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_555 == v_554) goto v_485;
    else goto v_486;
v_485:
    v_556 = basic_elt(env, 16); // difference
    v_555 = stack[-1];
    v_554 = basic_elt(env, 17); // (quotient 1 2)
    v_554 = list3(v_556, v_555, v_554);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 18); // simp
    v_554 = (*qfn1(fn))(fn, v_554);
    }
    env = stack[-7];
    if (!car_legal(v_554)) v_554 = carerror(v_554); else
    v_554 = car(v_554);
    v_554 = (v_554 == nil ? lisp_true : nil);
    goto v_484;
v_486:
    v_554 = nil;
    goto v_484;
    v_554 = nil;
v_484:
    goto v_478;
v_480:
    v_554 = nil;
    goto v_478;
    v_554 = nil;
v_478:
    if (v_554 == nil) goto v_476;
    v_554 = basic_elt(env, 4); // i
    {   LispObject fn = basic_elt(env, 18); // simp
    v_554 = (*qfn1(fn))(fn, v_554);
    }
    env = stack[-7];
    stack[-4] = v_554;
    v_554 = stack[-6];
    if (v_554 == nil) goto v_507;
    v_554 = stack[-4];
    {
        LispObject fn = basic_elt(env, 21); // negsq
        return (*qfn1(fn))(fn, v_554);
    }
v_507:
    v_554 = stack[-4];
    goto v_505;
    v_554 = nil;
v_505:
    goto v_10;
v_476:
    stack[0] = basic_elt(env, 3); // expt
    stack[-2] = stack[-4];
    v_555 = stack[-3];
    v_554 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_555 == v_554) goto v_519;
    else goto v_520;
v_519:
    v_554 = stack[-1];
    goto v_518;
v_520:
    v_556 = basic_elt(env, 2); // quotient
    v_555 = stack[-1];
    v_554 = stack[-3];
    v_554 = list3(v_556, v_555, v_554);
    env = stack[-7];
    goto v_518;
    v_554 = nil;
v_518:
    v_554 = list3(stack[0], stack[-2], v_554);
    env = stack[-7];
    stack[-4] = v_554;
    stack[0] = stack[-4];
    v_554 = stack[-6];
    if (v_554 == nil) goto v_535;
    v_554 = stack[-5];
    v_554 = negate(v_554);
    env = stack[-7];
    goto v_533;
v_535:
    v_554 = stack[-5];
    goto v_533;
    v_554 = nil;
v_533:
    {
        LispObject v_566 = stack[0];
        LispObject fn = basic_elt(env, 23); // mksq
        return (*qfn2(fn))(fn, v_566, v_554);
    }
v_12:
    v_554 = qvalue(basic_elt(env, 6)); // !*mcd
    if (v_554 == nil) goto v_545;
    v_556 = stack[-4];
    v_555 = stack[-1];
    v_554 = stack[-3];
    {   LispObject fn = basic_elt(env, 0); // simpx1
    v_554 = (*qfn3(fn))(fn, v_556, v_555, v_554);
    }
    env = stack[-7];
    {
        LispObject fn = basic_elt(env, 24); // invsq
        return (*qfn1(fn))(fn, v_554);
    }
v_545:
    v_554 = stack[-6];
    v_554 = (v_554 == nil ? lisp_true : nil);
    stack[-6] = v_554;
    goto v_11;
v_10:
    return onevalue(v_554);
}



// Code for vdp_monp

static LispObject CC_vdp_monp(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // vdp_poly
    v_7 = (*qfn1(fn))(fn, v_7);
    }
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // dip_monp
        return (*qfn1(fn))(fn, v_7);
    }
}



// Code for dip!-nc!-ev!-prod

static LispObject CC_dipKncKevKprod(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_16, v_17, v_18, v_19;
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
    v_16 = v_5;
    v_17 = v_4;
    v_18 = v_3;
    v_19 = v_2;
// end of prologue
    stack[-2] = v_18;
    stack[-1] = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[0] = v_16;
    v_16 = v_19;
    {   LispObject fn = basic_elt(env, 1); // bcprod
    v_17 = (*qfn2(fn))(fn, v_16, v_17);
    }
    env = stack[-3];
    v_16 = nil;
    v_16 = list2star(stack[0], v_17, v_16);
    env = stack[-3];
    {
        LispObject v_23 = stack[-2];
        LispObject v_24 = stack[-1];
        LispObject fn = basic_elt(env, 2); // dip!-nc!-ev!-prod1
        return (*qfn3(fn))(fn, v_23, v_24, v_16);
    }
}



// Code for lndepends

static LispObject CC_lndepends(LispObject env,
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
    v_30 = stack[-1];
    if (v_30 == nil) goto v_7;
    else goto v_8;
v_7:
    v_30 = nil;
    goto v_6;
v_8:
    v_30 = stack[-1];
    if (!consp(v_30)) goto v_11;
    else goto v_12;
v_11:
    v_31 = stack[-1];
    v_30 = stack[0];
    {
        LispObject fn = basic_elt(env, 1); // ndepends
        return (*qfn2(fn))(fn, v_31, v_30);
    }
v_12:
    v_30 = stack[-1];
    if (!car_legal(v_30)) v_31 = carerror(v_30); else
    v_31 = car(v_30);
    v_30 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // ndepends
    v_30 = (*qfn2(fn))(fn, v_31, v_30);
    }
    env = stack[-2];
    if (v_30 == nil) goto v_21;
    else goto v_20;
v_21:
    v_30 = stack[-1];
    if (!car_legal(v_30)) v_31 = cdrerror(v_30); else
    v_31 = cdr(v_30);
    v_30 = stack[0];
    stack[-1] = v_31;
    stack[0] = v_30;
    goto v_1;
v_20:
    goto v_6;
    v_30 = nil;
v_6:
    return onevalue(v_30);
}



// Code for listquotient

static LispObject CC_listquotient(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_132, v_133, v_134;
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
    push(nil, nil);
    stack_popper stack_popper_var(8);
// copy arguments values to proper place
    stack[-4] = v_3;
    stack[0] = v_2;
// end of prologue
    v_132 = stack[0];
    if (!car_legal(v_132)) v_133 = carerror(v_132); else
    v_133 = car(v_132);
    v_132 = stack[-4];
    {   LispObject fn = basic_elt(env, 3); // reval1
    v_132 = (*qfn2(fn))(fn, v_133, v_132);
    }
    env = stack[-7];
    stack[-3] = v_132;
    v_132 = stack[0];
    if (!car_legal(v_132)) v_132 = cdrerror(v_132); else
    v_132 = cdr(v_132);
    if (!car_legal(v_132)) v_133 = carerror(v_132); else
    v_133 = car(v_132);
    v_132 = stack[-4];
    {   LispObject fn = basic_elt(env, 3); // reval1
    v_132 = (*qfn2(fn))(fn, v_133, v_132);
    }
    env = stack[-7];
    stack[-6] = v_132;
    stack[-5] = basic_elt(env, 1); // list
    v_133 = stack[-3];
    v_132 = basic_elt(env, 1); // list
    if (!consp(v_133)) goto v_22;
    v_133 = car(v_133);
    if (v_133 == v_132) goto v_23;
v_22:
    v_132 = stack[-6];
    if (!car_legal(v_132)) v_132 = cdrerror(v_132); else
    v_132 = cdr(v_132);
    stack[-6] = v_132;
    v_132 = stack[-6];
    if (v_132 == nil) goto v_37;
    else goto v_38;
v_37:
    v_132 = nil;
    goto v_31;
v_38:
    v_132 = stack[-6];
    if (!car_legal(v_132)) v_132 = carerror(v_132); else
    v_132 = car(v_132);
    v_134 = basic_elt(env, 2); // quotient
    v_133 = stack[-3];
    v_133 = list3(v_134, v_133, v_132);
    env = stack[-7];
    v_132 = stack[-4];
    {   LispObject fn = basic_elt(env, 3); // reval1
    v_132 = (*qfn2(fn))(fn, v_133, v_132);
    }
    env = stack[-7];
    v_132 = ncons(v_132);
    env = stack[-7];
    stack[-1] = v_132;
    stack[-2] = v_132;
v_32:
    v_132 = stack[-6];
    if (!car_legal(v_132)) v_132 = cdrerror(v_132); else
    v_132 = cdr(v_132);
    stack[-6] = v_132;
    v_132 = stack[-6];
    if (v_132 == nil) goto v_55;
    else goto v_56;
v_55:
    v_132 = stack[-2];
    goto v_31;
v_56:
    stack[0] = stack[-1];
    v_132 = stack[-6];
    if (!car_legal(v_132)) v_132 = carerror(v_132); else
    v_132 = car(v_132);
    v_134 = basic_elt(env, 2); // quotient
    v_133 = stack[-3];
    v_133 = list3(v_134, v_133, v_132);
    env = stack[-7];
    v_132 = stack[-4];
    {   LispObject fn = basic_elt(env, 3); // reval1
    v_132 = (*qfn2(fn))(fn, v_133, v_132);
    }
    env = stack[-7];
    v_132 = ncons(v_132);
    env = stack[-7];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_132);
    v_132 = stack[-1];
    if (!car_legal(v_132)) v_132 = cdrerror(v_132); else
    v_132 = cdr(v_132);
    stack[-1] = v_132;
    goto v_32;
v_31:
    goto v_21;
v_23:
    v_133 = stack[-6];
    v_132 = basic_elt(env, 1); // list
    if (!consp(v_133)) goto v_74;
    v_133 = car(v_133);
    if (v_133 == v_132) goto v_73;
    else goto v_74;
v_73:
    v_132 = stack[-3];
    if (!car_legal(v_132)) v_134 = cdrerror(v_132); else
    v_134 = cdr(v_132);
    v_132 = stack[-6];
    if (!car_legal(v_132)) v_133 = cdrerror(v_132); else
    v_133 = cdr(v_132);
    v_132 = stack[-4];
    {   LispObject fn = basic_elt(env, 4); // listquotient2
    v_132 = (*qfn3(fn))(fn, v_134, v_133, v_132);
    }
    goto v_21;
v_74:
    v_132 = stack[-3];
    if (!car_legal(v_132)) v_132 = cdrerror(v_132); else
    v_132 = cdr(v_132);
    stack[-3] = v_132;
    v_132 = stack[-3];
    if (v_132 == nil) goto v_96;
    else goto v_97;
v_96:
    v_132 = nil;
    goto v_90;
v_97:
    v_132 = stack[-3];
    if (!car_legal(v_132)) v_132 = carerror(v_132); else
    v_132 = car(v_132);
    v_134 = basic_elt(env, 2); // quotient
    v_133 = v_132;
    v_132 = stack[-6];
    v_133 = list3(v_134, v_133, v_132);
    env = stack[-7];
    v_132 = stack[-4];
    {   LispObject fn = basic_elt(env, 3); // reval1
    v_132 = (*qfn2(fn))(fn, v_133, v_132);
    }
    env = stack[-7];
    v_132 = ncons(v_132);
    env = stack[-7];
    stack[-1] = v_132;
    stack[-2] = v_132;
v_91:
    v_132 = stack[-3];
    if (!car_legal(v_132)) v_132 = cdrerror(v_132); else
    v_132 = cdr(v_132);
    stack[-3] = v_132;
    v_132 = stack[-3];
    if (v_132 == nil) goto v_114;
    else goto v_115;
v_114:
    v_132 = stack[-2];
    goto v_90;
v_115:
    stack[0] = stack[-1];
    v_132 = stack[-3];
    if (!car_legal(v_132)) v_132 = carerror(v_132); else
    v_132 = car(v_132);
    v_134 = basic_elt(env, 2); // quotient
    v_133 = v_132;
    v_132 = stack[-6];
    v_133 = list3(v_134, v_133, v_132);
    env = stack[-7];
    v_132 = stack[-4];
    {   LispObject fn = basic_elt(env, 3); // reval1
    v_132 = (*qfn2(fn))(fn, v_133, v_132);
    }
    env = stack[-7];
    v_132 = ncons(v_132);
    env = stack[-7];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_132);
    v_132 = stack[-1];
    if (!car_legal(v_132)) v_132 = cdrerror(v_132); else
    v_132 = cdr(v_132);
    stack[-1] = v_132;
    goto v_91;
v_90:
    goto v_21;
    v_132 = nil;
v_21:
    {
        LispObject v_142 = stack[-5];
        return cons(v_142, v_132);
    }
    return onevalue(v_132);
}



// Code for vecsimp!*

static LispObject CC_vecsimpH(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // vecp
    v_15 = (*qfn1(fn))(fn, v_15);
    }
    env = stack[-1];
    if (v_15 == nil) goto v_7;
    v_15 = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // vecsm!*
        return (*qfn1(fn))(fn, v_15);
    }
v_7:
    v_15 = stack[0];
    goto v_5;
    v_15 = nil;
v_5:
    return onevalue(v_15);
}



// Code for verify_tens_ids

static LispObject CC_verify_tens_ids(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_39, v_40;
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
    v_39 = stack[-1];
    if (!car_legal(v_39)) v_39 = carerror(v_39); else
    v_39 = car(v_39);
    v_40 = v_39;
    v_39 = stack[-1];
    if (!car_legal(v_39)) v_39 = cdrerror(v_39); else
    v_39 = cdr(v_39);
    if (!car_legal(v_39)) v_39 = carerror(v_39); else
    v_39 = car(v_39);
    stack[0] = v_39;
    v_39 = v_40;
    {   LispObject fn = basic_elt(env, 3); // extract_dummy_ids
    v_39 = (*qfn1(fn))(fn, v_39);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 4); // repeats
    v_39 = (*qfn1(fn))(fn, v_39);
    }
    env = stack[-3];
    if (v_39 == nil) goto v_17;
    else goto v_15;
v_17:
    v_39 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // extract_dummy_ids
    v_39 = (*qfn1(fn))(fn, v_39);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 4); // repeats
    v_39 = (*qfn1(fn))(fn, v_39);
    }
    env = stack[-3];
    if (v_39 == nil) goto v_21;
    else goto v_15;
v_21:
    goto v_16;
v_15:
    stack[-2] = basic_elt(env, 1); // cantens
    stack[0] = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_39 = stack[-1];
    if (!car_legal(v_39)) v_40 = carerror(v_39); else
    v_40 = car(v_39);
    v_39 = stack[-1];
    if (!car_legal(v_39)) v_39 = cdrerror(v_39); else
    v_39 = cdr(v_39);
    if (!car_legal(v_39)) v_39 = carerror(v_39); else
    v_39 = car(v_39);
    v_40 = list2(v_40, v_39);
    env = stack[-3];
    v_39 = basic_elt(env, 2); // "are inconsistent lists of indices"
    v_39 = list2(v_40, v_39);
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 5); // rerror
    v_39 = (*qfn3(fn))(fn, stack[-2], stack[0], v_39);
    }
    goto v_14;
v_16:
    v_39 = lisp_true;
    goto v_7;
v_14:
    v_39 = nil;
v_7:
    return onevalue(v_39);
}



// Code for evaluate!-in!-order!-mod!-p

static LispObject CC_evaluateKinKorderKmodKp(LispObject env,
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    stack[-1] = v_3;
    stack[-2] = v_2;
// end of prologue
v_7:
    v_53 = stack[-2];
    if (!consp(v_53)) goto v_14;
    else goto v_15;
v_14:
    v_53 = lisp_true;
    goto v_13;
v_15:
    v_53 = stack[-2];
    if (!car_legal(v_53)) v_53 = carerror(v_53); else
    v_53 = car(v_53);
    v_53 = (consp(v_53) ? nil : lisp_true);
    goto v_13;
    v_53 = nil;
v_13:
    if (v_53 == nil) goto v_11;
    v_53 = stack[-2];
    {
        LispObject fn = basic_elt(env, 1); // !*d2n
        return (*qfn1(fn))(fn, v_53);
    }
v_11:
    v_53 = stack[-2];
    if (!car_legal(v_53)) v_53 = carerror(v_53); else
    v_53 = car(v_53);
    if (!car_legal(v_53)) v_53 = carerror(v_53); else
    v_53 = car(v_53);
    if (!car_legal(v_53)) v_54 = carerror(v_53); else
    v_54 = car(v_53);
    v_53 = stack[-1];
    if (!car_legal(v_53)) v_53 = carerror(v_53); else
    v_53 = car(v_53);
    if (!car_legal(v_53)) v_53 = carerror(v_53); else
    v_53 = car(v_53);
    if (equal(v_54, v_53)) goto v_25;
    else goto v_26;
v_25:
    v_53 = stack[-2];
    if (!car_legal(v_53)) v_53 = carerror(v_53); else
    v_53 = car(v_53);
    if (!car_legal(v_53)) v_54 = cdrerror(v_53); else
    v_54 = cdr(v_53);
    v_53 = stack[-1];
    if (!car_legal(v_53)) v_53 = cdrerror(v_53); else
    v_53 = cdr(v_53);
    {   LispObject fn = basic_elt(env, 0); // evaluate!-in!-order!-mod!-p
    stack[-3] = (*qfn2(fn))(fn, v_54, v_53);
    }
    env = stack[-4];
    v_53 = stack[-2];
    if (!car_legal(v_53)) v_53 = carerror(v_53); else
    v_53 = car(v_53);
    if (!car_legal(v_53)) v_53 = carerror(v_53); else
    v_53 = car(v_53);
    if (!car_legal(v_53)) stack[0] = cdrerror(v_53); else
    stack[0] = cdr(v_53);
    v_53 = stack[-2];
    if (!car_legal(v_53)) stack[-2] = cdrerror(v_53); else
    stack[-2] = cdr(v_53);
    v_53 = stack[-1];
    v_53 = ncons(v_53);
    env = stack[-4];
    {
        LispObject v_59 = stack[-3];
        LispObject v_60 = stack[0];
        LispObject v_61 = stack[-2];
        LispObject fn = basic_elt(env, 2); // horner!-rule!-in!-order!-mod!-p
        return (*qfn4up(fn))(fn, v_59, v_60, v_61, v_53);
    }
v_26:
    v_53 = stack[-1];
    if (!car_legal(v_53)) v_53 = cdrerror(v_53); else
    v_53 = cdr(v_53);
    stack[-1] = v_53;
    goto v_7;
    v_53 = nil;
    return onevalue(v_53);
}



// Code for domainp_list

static LispObject CC_domainp_list(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_35, v_36;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_35 = v_2;
// end of prologue
v_1:
    v_36 = v_35;
    if (v_36 == nil) goto v_6;
    else goto v_7;
v_6:
    v_35 = lisp_true;
    goto v_5;
v_7:
    v_36 = v_35;
    if (!car_legal(v_36)) v_36 = carerror(v_36); else
    v_36 = car(v_36);
    if (!consp(v_36)) goto v_18;
    else goto v_19;
v_18:
    v_36 = lisp_true;
    goto v_17;
v_19:
    v_36 = v_35;
    if (!car_legal(v_36)) v_36 = carerror(v_36); else
    v_36 = car(v_36);
    if (!car_legal(v_36)) v_36 = carerror(v_36); else
    v_36 = car(v_36);
    v_36 = (consp(v_36) ? nil : lisp_true);
    goto v_17;
    v_36 = nil;
v_17:
    if (v_36 == nil) goto v_15;
    if (!car_legal(v_35)) v_35 = cdrerror(v_35); else
    v_35 = cdr(v_35);
    goto v_1;
v_15:
    v_35 = nil;
    goto v_13;
    v_35 = nil;
v_13:
    goto v_5;
    v_35 = nil;
v_5:
    return onevalue(v_35);
}



// Code for !*a2kwoweight

static LispObject CC_Ha2kwoweight(LispObject env,
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    stack[-2] = v_2;
// end of prologue
    v_32 = lisp_true;
    v_31 = nil;
// Binding !*uncached
// FLUIDBIND: reloadenv=4 litvec-offset=1 saveloc=3
{   bind_fluid_stack bind_fluid_var(-4, 1, -3);
    setvalue(basic_elt(env, 1), v_32); // !*uncached
// Binding wtl!*
// FLUIDBIND: reloadenv=4 litvec-offset=2 saveloc=1
{   bind_fluid_stack bind_fluid_var(-4, 2, -1);
    setvalue(basic_elt(env, 2), v_31); // wtl!*
    v_31 = stack[-2];
    {   LispObject fn = basic_elt(env, 4); // simp!*
    v_31 = (*qfn1(fn))(fn, v_31);
    }
    env = stack[-4];
    stack[0] = v_31;
    v_31 = stack[0];
    {   LispObject fn = basic_elt(env, 5); // kernp
    v_31 = (*qfn1(fn))(fn, v_31);
    }
    env = stack[-4];
    if (v_31 == nil) goto v_16;
    v_31 = stack[0];
    if (!car_legal(v_31)) v_31 = carerror(v_31); else
    v_31 = car(v_31);
    if (!car_legal(v_31)) v_31 = carerror(v_31); else
    v_31 = car(v_31);
    if (!car_legal(v_31)) v_31 = carerror(v_31); else
    v_31 = car(v_31);
    if (!car_legal(v_31)) v_31 = carerror(v_31); else
    v_31 = car(v_31);
    goto v_14;
v_16:
    v_32 = stack[-2];
    v_31 = basic_elt(env, 3); // kernel
    {   LispObject fn = basic_elt(env, 6); // typerr
    v_31 = (*qfn2(fn))(fn, v_32, v_31);
    }
    goto v_14;
    v_31 = nil;
v_14:
    ;}  // end of a binding scope
    ;}  // end of a binding scope
    return onevalue(v_31);
}



// Code for drop_dec_with

static LispObject CC_drop_dec_with(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_70, v_71, v_72;
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
    stack[-5] = nil;
    v_70 = stack[-2];
    if (v_70 == nil) goto v_14;
    v_71 = stack[-3];
    v_70 = basic_elt(env, 1); // dec_with_rl
    v_70 = get(v_71, v_70);
    env = stack[-6];
    goto v_12;
v_14:
    v_71 = stack[-3];
    v_70 = basic_elt(env, 2); // dec_with
    v_70 = get(v_71, v_70);
    env = stack[-6];
    goto v_12;
    v_70 = nil;
v_12:
    stack[-1] = v_70;
v_27:
    v_70 = stack[-1];
    if (v_70 == nil) goto v_31;
    else goto v_32;
v_31:
    goto v_26;
v_32:
    v_70 = stack[-1];
    if (!car_legal(v_70)) v_70 = carerror(v_70); else
    v_70 = car(v_70);
    stack[0] = v_70;
    v_71 = stack[-4];
    v_70 = stack[0];
    v_70 = Ldelete(nil, v_71, v_70);
    env = stack[-6];
    stack[0] = v_70;
    v_70 = stack[0];
    v_71 = Llength(nil, v_70);
    env = stack[-6];
    v_70 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_70 = static_cast<LispObject>(greaterp2(v_71, v_70));
    v_70 = v_70 ? lisp_true : nil;
    env = stack[-6];
    if (v_70 == nil) goto v_44;
    v_71 = stack[0];
    v_70 = stack[-5];
    v_70 = cons(v_71, v_70);
    env = stack[-6];
    stack[-5] = v_70;
    goto v_42;
v_44:
v_42:
    v_70 = stack[-1];
    if (!car_legal(v_70)) v_70 = cdrerror(v_70); else
    v_70 = cdr(v_70);
    stack[-1] = v_70;
    goto v_27;
v_26:
    v_70 = stack[-2];
    if (v_70 == nil) goto v_58;
    v_72 = stack[-3];
    v_71 = basic_elt(env, 1); // dec_with_rl
    v_70 = stack[-5];
    v_70 = Lputprop(nil, v_72, v_71, v_70);
    goto v_56;
v_58:
    v_72 = stack[-3];
    v_71 = basic_elt(env, 2); // dec_with
    v_70 = stack[-5];
    v_70 = Lputprop(nil, v_72, v_71, v_70);
    goto v_56;
v_56:
    v_70 = nil;
    return onevalue(v_70);
}



// Code for cl_sordp

static LispObject CC_cl_sordp(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_931, v_932, v_933, v_934;
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
    v_931 = stack[-1];
    if (!consp(v_931)) goto v_11;
    else goto v_12;
v_11:
    v_931 = stack[-1];
    goto v_10;
v_12:
    v_931 = stack[-1];
    if (!car_legal(v_931)) v_931 = carerror(v_931); else
    v_931 = car(v_931);
    goto v_10;
    v_931 = nil;
v_10:
    v_934 = v_931;
    v_931 = stack[0];
    if (!consp(v_931)) goto v_21;
    else goto v_22;
v_21:
    v_931 = stack[0];
    goto v_20;
v_22:
    v_931 = stack[0];
    if (!car_legal(v_931)) v_931 = carerror(v_931); else
    v_931 = car(v_931);
    goto v_20;
    v_931 = nil;
v_20:
    v_933 = v_931;
    v_932 = v_934;
    v_931 = basic_elt(env, 1); // true
    if (v_932 == v_931) goto v_43;
    else goto v_44;
v_43:
    v_931 = lisp_true;
    goto v_42;
v_44:
    v_932 = v_934;
    v_931 = basic_elt(env, 2); // false
    v_931 = (v_932 == v_931 ? lisp_true : nil);
    goto v_42;
    v_931 = nil;
v_42:
    if (v_931 == nil) goto v_40;
    v_931 = lisp_true;
    goto v_38;
v_40:
    v_932 = v_934;
    v_931 = basic_elt(env, 3); // or
    if (v_932 == v_931) goto v_70;
    else goto v_71;
v_70:
    v_931 = lisp_true;
    goto v_69;
v_71:
    v_932 = v_934;
    v_931 = basic_elt(env, 4); // and
    v_931 = (v_932 == v_931 ? lisp_true : nil);
    goto v_69;
    v_931 = nil;
v_69:
    if (v_931 == nil) goto v_67;
    v_931 = lisp_true;
    goto v_65;
v_67:
    v_932 = v_934;
    v_931 = basic_elt(env, 5); // not
    v_931 = (v_932 == v_931 ? lisp_true : nil);
    goto v_65;
    v_931 = nil;
v_65:
    if (v_931 == nil) goto v_63;
    v_931 = lisp_true;
    goto v_61;
v_63:
    v_932 = v_934;
    v_931 = basic_elt(env, 6); // impl
    if (v_932 == v_931) goto v_91;
    else goto v_92;
v_91:
    v_931 = lisp_true;
    goto v_90;
v_92:
    v_932 = v_934;
    v_931 = basic_elt(env, 7); // repl
    if (v_932 == v_931) goto v_100;
    else goto v_101;
v_100:
    v_931 = lisp_true;
    goto v_99;
v_101:
    v_932 = v_934;
    v_931 = basic_elt(env, 8); // equiv
    v_931 = (v_932 == v_931 ? lisp_true : nil);
    goto v_99;
    v_931 = nil;
v_99:
    goto v_90;
    v_931 = nil;
v_90:
    goto v_61;
    v_931 = nil;
v_61:
    if (v_931 == nil) goto v_59;
    v_931 = lisp_true;
    goto v_57;
v_59:
    v_932 = v_934;
    v_931 = basic_elt(env, 9); // ex
    if (v_932 == v_931) goto v_119;
    else goto v_120;
v_119:
    v_931 = lisp_true;
    goto v_118;
v_120:
    v_932 = v_934;
    v_931 = basic_elt(env, 10); // all
    v_931 = (v_932 == v_931 ? lisp_true : nil);
    goto v_118;
    v_931 = nil;
v_118:
    if (v_931 == nil) goto v_116;
    v_931 = lisp_true;
    goto v_114;
v_116:
    v_932 = v_934;
    v_931 = basic_elt(env, 11); // bex
    if (v_932 == v_931) goto v_138;
    else goto v_139;
v_138:
    v_931 = lisp_true;
    goto v_137;
v_139:
    v_932 = v_934;
    v_931 = basic_elt(env, 12); // ball
    v_931 = (v_932 == v_931 ? lisp_true : nil);
    goto v_137;
    v_931 = nil;
v_137:
    if (v_931 == nil) goto v_135;
    v_931 = lisp_true;
    goto v_133;
v_135:
    v_931 = v_934;
    if (!symbolp(v_931)) v_931 = nil;
    else { v_931 = qfastgets(v_931);
           if (v_931 != nil) { v_931 = elt(v_931, 21); // rl_external
#ifdef RECORD_GET
             if (v_931 != SPID_NOPROP)
                record_get(elt(fastget_names, 21), 1);
             else record_get(elt(fastget_names, 21), 0),
                v_931 = nil; }
           else record_get(elt(fastget_names, 21), 0); }
#else
             if (v_931 == SPID_NOPROP) v_931 = nil; }}
#endif
    goto v_133;
    v_931 = nil;
v_133:
    goto v_114;
    v_931 = nil;
v_114:
    goto v_57;
    v_931 = nil;
v_57:
    goto v_38;
    v_931 = nil;
v_38:
    if (v_931 == nil) goto v_35;
    else goto v_36;
v_35:
    v_932 = v_933;
    v_931 = basic_elt(env, 1); // true
    if (v_932 == v_931) goto v_159;
    else goto v_160;
v_159:
    v_931 = lisp_true;
    goto v_158;
v_160:
    v_932 = v_933;
    v_931 = basic_elt(env, 2); // false
    v_931 = (v_932 == v_931 ? lisp_true : nil);
    goto v_158;
    v_931 = nil;
v_158:
    if (v_931 == nil) goto v_156;
    v_931 = lisp_true;
    goto v_154;
v_156:
    v_932 = v_933;
    v_931 = basic_elt(env, 3); // or
    if (v_932 == v_931) goto v_186;
    else goto v_187;
v_186:
    v_931 = lisp_true;
    goto v_185;
v_187:
    v_932 = v_933;
    v_931 = basic_elt(env, 4); // and
    v_931 = (v_932 == v_931 ? lisp_true : nil);
    goto v_185;
    v_931 = nil;
v_185:
    if (v_931 == nil) goto v_183;
    v_931 = lisp_true;
    goto v_181;
v_183:
    v_932 = v_933;
    v_931 = basic_elt(env, 5); // not
    v_931 = (v_932 == v_931 ? lisp_true : nil);
    goto v_181;
    v_931 = nil;
v_181:
    if (v_931 == nil) goto v_179;
    v_931 = lisp_true;
    goto v_177;
v_179:
    v_932 = v_933;
    v_931 = basic_elt(env, 6); // impl
    if (v_932 == v_931) goto v_207;
    else goto v_208;
v_207:
    v_931 = lisp_true;
    goto v_206;
v_208:
    v_932 = v_933;
    v_931 = basic_elt(env, 7); // repl
    if (v_932 == v_931) goto v_216;
    else goto v_217;
v_216:
    v_931 = lisp_true;
    goto v_215;
v_217:
    v_932 = v_933;
    v_931 = basic_elt(env, 8); // equiv
    v_931 = (v_932 == v_931 ? lisp_true : nil);
    goto v_215;
    v_931 = nil;
v_215:
    goto v_206;
    v_931 = nil;
v_206:
    goto v_177;
    v_931 = nil;
v_177:
    if (v_931 == nil) goto v_175;
    v_931 = lisp_true;
    goto v_173;
v_175:
    v_932 = v_933;
    v_931 = basic_elt(env, 9); // ex
    if (v_932 == v_931) goto v_235;
    else goto v_236;
v_235:
    v_931 = lisp_true;
    goto v_234;
v_236:
    v_932 = v_933;
    v_931 = basic_elt(env, 10); // all
    v_931 = (v_932 == v_931 ? lisp_true : nil);
    goto v_234;
    v_931 = nil;
v_234:
    if (v_931 == nil) goto v_232;
    v_931 = lisp_true;
    goto v_230;
v_232:
    v_932 = v_933;
    v_931 = basic_elt(env, 11); // bex
    if (v_932 == v_931) goto v_254;
    else goto v_255;
v_254:
    v_931 = lisp_true;
    goto v_253;
v_255:
    v_932 = v_933;
    v_931 = basic_elt(env, 12); // ball
    v_931 = (v_932 == v_931 ? lisp_true : nil);
    goto v_253;
    v_931 = nil;
v_253:
    if (v_931 == nil) goto v_251;
    v_931 = lisp_true;
    goto v_249;
v_251:
    v_931 = v_933;
    if (!symbolp(v_931)) v_931 = nil;
    else { v_931 = qfastgets(v_931);
           if (v_931 != nil) { v_931 = elt(v_931, 21); // rl_external
#ifdef RECORD_GET
             if (v_931 != SPID_NOPROP)
                record_get(elt(fastget_names, 21), 1);
             else record_get(elt(fastget_names, 21), 0),
                v_931 = nil; }
           else record_get(elt(fastget_names, 21), 0); }
#else
             if (v_931 == SPID_NOPROP) v_931 = nil; }}
#endif
    goto v_249;
    v_931 = nil;
v_249:
    goto v_230;
    v_931 = nil;
v_230:
    goto v_173;
    v_931 = nil;
v_173:
    goto v_154;
    v_931 = nil;
v_154:
    v_931 = (v_931 == nil ? lisp_true : nil);
    goto v_34;
v_36:
    v_931 = nil;
    goto v_34;
    v_931 = nil;
v_34:
    if (v_931 == nil) goto v_32;
    v_932 = stack[-1];
    v_931 = stack[0];
    {
        LispObject fn = basic_elt(env, 13); // rl_ordatp
        return (*qfn2(fn))(fn, v_932, v_931);
    }
v_32:
    v_932 = v_934;
    v_931 = basic_elt(env, 1); // true
    if (v_932 == v_931) goto v_290;
    else goto v_291;
v_290:
    v_931 = lisp_true;
    goto v_289;
v_291:
    v_932 = v_934;
    v_931 = basic_elt(env, 2); // false
    v_931 = (v_932 == v_931 ? lisp_true : nil);
    goto v_289;
    v_931 = nil;
v_289:
    if (v_931 == nil) goto v_287;
    v_931 = lisp_true;
    goto v_285;
v_287:
    v_932 = v_934;
    v_931 = basic_elt(env, 3); // or
    if (v_932 == v_931) goto v_317;
    else goto v_318;
v_317:
    v_931 = lisp_true;
    goto v_316;
v_318:
    v_932 = v_934;
    v_931 = basic_elt(env, 4); // and
    v_931 = (v_932 == v_931 ? lisp_true : nil);
    goto v_316;
    v_931 = nil;
v_316:
    if (v_931 == nil) goto v_314;
    v_931 = lisp_true;
    goto v_312;
v_314:
    v_932 = v_934;
    v_931 = basic_elt(env, 5); // not
    v_931 = (v_932 == v_931 ? lisp_true : nil);
    goto v_312;
    v_931 = nil;
v_312:
    if (v_931 == nil) goto v_310;
    v_931 = lisp_true;
    goto v_308;
v_310:
    v_932 = v_934;
    v_931 = basic_elt(env, 6); // impl
    if (v_932 == v_931) goto v_338;
    else goto v_339;
v_338:
    v_931 = lisp_true;
    goto v_337;
v_339:
    v_932 = v_934;
    v_931 = basic_elt(env, 7); // repl
    if (v_932 == v_931) goto v_347;
    else goto v_348;
v_347:
    v_931 = lisp_true;
    goto v_346;
v_348:
    v_932 = v_934;
    v_931 = basic_elt(env, 8); // equiv
    v_931 = (v_932 == v_931 ? lisp_true : nil);
    goto v_346;
    v_931 = nil;
v_346:
    goto v_337;
    v_931 = nil;
v_337:
    goto v_308;
    v_931 = nil;
v_308:
    if (v_931 == nil) goto v_306;
    v_931 = lisp_true;
    goto v_304;
v_306:
    v_932 = v_934;
    v_931 = basic_elt(env, 9); // ex
    if (v_932 == v_931) goto v_366;
    else goto v_367;
v_366:
    v_931 = lisp_true;
    goto v_365;
v_367:
    v_932 = v_934;
    v_931 = basic_elt(env, 10); // all
    v_931 = (v_932 == v_931 ? lisp_true : nil);
    goto v_365;
    v_931 = nil;
v_365:
    if (v_931 == nil) goto v_363;
    v_931 = lisp_true;
    goto v_361;
v_363:
    v_932 = v_934;
    v_931 = basic_elt(env, 11); // bex
    if (v_932 == v_931) goto v_385;
    else goto v_386;
v_385:
    v_931 = lisp_true;
    goto v_384;
v_386:
    v_932 = v_934;
    v_931 = basic_elt(env, 12); // ball
    v_931 = (v_932 == v_931 ? lisp_true : nil);
    goto v_384;
    v_931 = nil;
v_384:
    if (v_931 == nil) goto v_382;
    v_931 = lisp_true;
    goto v_380;
v_382:
    v_931 = v_934;
    if (!symbolp(v_931)) v_931 = nil;
    else { v_931 = qfastgets(v_931);
           if (v_931 != nil) { v_931 = elt(v_931, 21); // rl_external
#ifdef RECORD_GET
             if (v_931 != SPID_NOPROP)
                record_get(elt(fastget_names, 21), 1);
             else record_get(elt(fastget_names, 21), 0),
                v_931 = nil; }
           else record_get(elt(fastget_names, 21), 0); }
#else
             if (v_931 == SPID_NOPROP) v_931 = nil; }}
#endif
    goto v_380;
    v_931 = nil;
v_380:
    goto v_361;
    v_931 = nil;
v_361:
    goto v_304;
    v_931 = nil;
v_304:
    goto v_285;
    v_931 = nil;
v_285:
    if (v_931 == nil) goto v_282;
    else goto v_283;
v_282:
    v_932 = v_933;
    v_931 = basic_elt(env, 1); // true
    if (v_932 == v_931) goto v_406;
    else goto v_407;
v_406:
    v_931 = lisp_true;
    goto v_405;
v_407:
    v_932 = v_933;
    v_931 = basic_elt(env, 2); // false
    v_931 = (v_932 == v_931 ? lisp_true : nil);
    goto v_405;
    v_931 = nil;
v_405:
    if (v_931 == nil) goto v_403;
    v_931 = lisp_true;
    goto v_401;
v_403:
    v_932 = v_933;
    v_931 = basic_elt(env, 3); // or
    if (v_932 == v_931) goto v_433;
    else goto v_434;
v_433:
    v_931 = lisp_true;
    goto v_432;
v_434:
    v_932 = v_933;
    v_931 = basic_elt(env, 4); // and
    v_931 = (v_932 == v_931 ? lisp_true : nil);
    goto v_432;
    v_931 = nil;
v_432:
    if (v_931 == nil) goto v_430;
    v_931 = lisp_true;
    goto v_428;
v_430:
    v_932 = v_933;
    v_931 = basic_elt(env, 5); // not
    v_931 = (v_932 == v_931 ? lisp_true : nil);
    goto v_428;
    v_931 = nil;
v_428:
    if (v_931 == nil) goto v_426;
    v_931 = lisp_true;
    goto v_424;
v_426:
    v_932 = v_933;
    v_931 = basic_elt(env, 6); // impl
    if (v_932 == v_931) goto v_454;
    else goto v_455;
v_454:
    v_931 = lisp_true;
    goto v_453;
v_455:
    v_932 = v_933;
    v_931 = basic_elt(env, 7); // repl
    if (v_932 == v_931) goto v_463;
    else goto v_464;
v_463:
    v_931 = lisp_true;
    goto v_462;
v_464:
    v_932 = v_933;
    v_931 = basic_elt(env, 8); // equiv
    v_931 = (v_932 == v_931 ? lisp_true : nil);
    goto v_462;
    v_931 = nil;
v_462:
    goto v_453;
    v_931 = nil;
v_453:
    goto v_424;
    v_931 = nil;
v_424:
    if (v_931 == nil) goto v_422;
    v_931 = lisp_true;
    goto v_420;
v_422:
    v_932 = v_933;
    v_931 = basic_elt(env, 9); // ex
    if (v_932 == v_931) goto v_482;
    else goto v_483;
v_482:
    v_931 = lisp_true;
    goto v_481;
v_483:
    v_932 = v_933;
    v_931 = basic_elt(env, 10); // all
    v_931 = (v_932 == v_931 ? lisp_true : nil);
    goto v_481;
    v_931 = nil;
v_481:
    if (v_931 == nil) goto v_479;
    v_931 = lisp_true;
    goto v_477;
v_479:
    v_932 = v_933;
    v_931 = basic_elt(env, 11); // bex
    if (v_932 == v_931) goto v_501;
    else goto v_502;
v_501:
    v_931 = lisp_true;
    goto v_500;
v_502:
    v_932 = v_933;
    v_931 = basic_elt(env, 12); // ball
    v_931 = (v_932 == v_931 ? lisp_true : nil);
    goto v_500;
    v_931 = nil;
v_500:
    if (v_931 == nil) goto v_498;
    v_931 = lisp_true;
    goto v_496;
v_498:
    v_931 = v_933;
    if (!symbolp(v_931)) v_931 = nil;
    else { v_931 = qfastgets(v_931);
           if (v_931 != nil) { v_931 = elt(v_931, 21); // rl_external
#ifdef RECORD_GET
             if (v_931 != SPID_NOPROP)
                record_get(elt(fastget_names, 21), 1);
             else record_get(elt(fastget_names, 21), 0),
                v_931 = nil; }
           else record_get(elt(fastget_names, 21), 0); }
#else
             if (v_931 == SPID_NOPROP) v_931 = nil; }}
#endif
    goto v_496;
    v_931 = nil;
v_496:
    goto v_477;
    v_931 = nil;
v_477:
    goto v_420;
    v_931 = nil;
v_420:
    goto v_401;
    v_931 = nil;
v_401:
    goto v_281;
v_283:
    v_931 = nil;
    goto v_281;
    v_931 = nil;
v_281:
    if (v_931 == nil) goto v_279;
    v_931 = lisp_true;
    goto v_8;
v_279:
    v_932 = v_934;
    v_931 = basic_elt(env, 1); // true
    if (v_932 == v_931) goto v_531;
    else goto v_532;
v_531:
    v_931 = lisp_true;
    goto v_530;
v_532:
    v_932 = v_934;
    v_931 = basic_elt(env, 2); // false
    v_931 = (v_932 == v_931 ? lisp_true : nil);
    goto v_530;
    v_931 = nil;
v_530:
    if (v_931 == nil) goto v_528;
    v_931 = lisp_true;
    goto v_526;
v_528:
    v_932 = v_934;
    v_931 = basic_elt(env, 3); // or
    if (v_932 == v_931) goto v_558;
    else goto v_559;
v_558:
    v_931 = lisp_true;
    goto v_557;
v_559:
    v_932 = v_934;
    v_931 = basic_elt(env, 4); // and
    v_931 = (v_932 == v_931 ? lisp_true : nil);
    goto v_557;
    v_931 = nil;
v_557:
    if (v_931 == nil) goto v_555;
    v_931 = lisp_true;
    goto v_553;
v_555:
    v_932 = v_934;
    v_931 = basic_elt(env, 5); // not
    v_931 = (v_932 == v_931 ? lisp_true : nil);
    goto v_553;
    v_931 = nil;
v_553:
    if (v_931 == nil) goto v_551;
    v_931 = lisp_true;
    goto v_549;
v_551:
    v_932 = v_934;
    v_931 = basic_elt(env, 6); // impl
    if (v_932 == v_931) goto v_579;
    else goto v_580;
v_579:
    v_931 = lisp_true;
    goto v_578;
v_580:
    v_932 = v_934;
    v_931 = basic_elt(env, 7); // repl
    if (v_932 == v_931) goto v_588;
    else goto v_589;
v_588:
    v_931 = lisp_true;
    goto v_587;
v_589:
    v_932 = v_934;
    v_931 = basic_elt(env, 8); // equiv
    v_931 = (v_932 == v_931 ? lisp_true : nil);
    goto v_587;
    v_931 = nil;
v_587:
    goto v_578;
    v_931 = nil;
v_578:
    goto v_549;
    v_931 = nil;
v_549:
    if (v_931 == nil) goto v_547;
    v_931 = lisp_true;
    goto v_545;
v_547:
    v_932 = v_934;
    v_931 = basic_elt(env, 9); // ex
    if (v_932 == v_931) goto v_607;
    else goto v_608;
v_607:
    v_931 = lisp_true;
    goto v_606;
v_608:
    v_932 = v_934;
    v_931 = basic_elt(env, 10); // all
    v_931 = (v_932 == v_931 ? lisp_true : nil);
    goto v_606;
    v_931 = nil;
v_606:
    if (v_931 == nil) goto v_604;
    v_931 = lisp_true;
    goto v_602;
v_604:
    v_932 = v_934;
    v_931 = basic_elt(env, 11); // bex
    if (v_932 == v_931) goto v_626;
    else goto v_627;
v_626:
    v_931 = lisp_true;
    goto v_625;
v_627:
    v_932 = v_934;
    v_931 = basic_elt(env, 12); // ball
    v_931 = (v_932 == v_931 ? lisp_true : nil);
    goto v_625;
    v_931 = nil;
v_625:
    if (v_931 == nil) goto v_623;
    v_931 = lisp_true;
    goto v_621;
v_623:
    v_931 = v_934;
    if (!symbolp(v_931)) v_931 = nil;
    else { v_931 = qfastgets(v_931);
           if (v_931 != nil) { v_931 = elt(v_931, 21); // rl_external
#ifdef RECORD_GET
             if (v_931 != SPID_NOPROP)
                record_get(elt(fastget_names, 21), 1);
             else record_get(elt(fastget_names, 21), 0),
                v_931 = nil; }
           else record_get(elt(fastget_names, 21), 0); }
#else
             if (v_931 == SPID_NOPROP) v_931 = nil; }}
#endif
    goto v_621;
    v_931 = nil;
v_621:
    goto v_602;
    v_931 = nil;
v_602:
    goto v_545;
    v_931 = nil;
v_545:
    goto v_526;
    v_931 = nil;
v_526:
    if (v_931 == nil) goto v_523;
    v_932 = v_933;
    v_931 = basic_elt(env, 1); // true
    if (v_932 == v_931) goto v_648;
    else goto v_649;
v_648:
    v_931 = lisp_true;
    goto v_647;
v_649:
    v_932 = v_933;
    v_931 = basic_elt(env, 2); // false
    v_931 = (v_932 == v_931 ? lisp_true : nil);
    goto v_647;
    v_931 = nil;
v_647:
    if (v_931 == nil) goto v_645;
    v_931 = lisp_true;
    goto v_643;
v_645:
    v_932 = v_933;
    v_931 = basic_elt(env, 3); // or
    if (v_932 == v_931) goto v_675;
    else goto v_676;
v_675:
    v_931 = lisp_true;
    goto v_674;
v_676:
    v_932 = v_933;
    v_931 = basic_elt(env, 4); // and
    v_931 = (v_932 == v_931 ? lisp_true : nil);
    goto v_674;
    v_931 = nil;
v_674:
    if (v_931 == nil) goto v_672;
    v_931 = lisp_true;
    goto v_670;
v_672:
    v_932 = v_933;
    v_931 = basic_elt(env, 5); // not
    v_931 = (v_932 == v_931 ? lisp_true : nil);
    goto v_670;
    v_931 = nil;
v_670:
    if (v_931 == nil) goto v_668;
    v_931 = lisp_true;
    goto v_666;
v_668:
    v_932 = v_933;
    v_931 = basic_elt(env, 6); // impl
    if (v_932 == v_931) goto v_696;
    else goto v_697;
v_696:
    v_931 = lisp_true;
    goto v_695;
v_697:
    v_932 = v_933;
    v_931 = basic_elt(env, 7); // repl
    if (v_932 == v_931) goto v_705;
    else goto v_706;
v_705:
    v_931 = lisp_true;
    goto v_704;
v_706:
    v_932 = v_933;
    v_931 = basic_elt(env, 8); // equiv
    v_931 = (v_932 == v_931 ? lisp_true : nil);
    goto v_704;
    v_931 = nil;
v_704:
    goto v_695;
    v_931 = nil;
v_695:
    goto v_666;
    v_931 = nil;
v_666:
    if (v_931 == nil) goto v_664;
    v_931 = lisp_true;
    goto v_662;
v_664:
    v_932 = v_933;
    v_931 = basic_elt(env, 9); // ex
    if (v_932 == v_931) goto v_724;
    else goto v_725;
v_724:
    v_931 = lisp_true;
    goto v_723;
v_725:
    v_932 = v_933;
    v_931 = basic_elt(env, 10); // all
    v_931 = (v_932 == v_931 ? lisp_true : nil);
    goto v_723;
    v_931 = nil;
v_723:
    if (v_931 == nil) goto v_721;
    v_931 = lisp_true;
    goto v_719;
v_721:
    v_932 = v_933;
    v_931 = basic_elt(env, 11); // bex
    if (v_932 == v_931) goto v_743;
    else goto v_744;
v_743:
    v_931 = lisp_true;
    goto v_742;
v_744:
    v_932 = v_933;
    v_931 = basic_elt(env, 12); // ball
    v_931 = (v_932 == v_931 ? lisp_true : nil);
    goto v_742;
    v_931 = nil;
v_742:
    if (v_931 == nil) goto v_740;
    v_931 = lisp_true;
    goto v_738;
v_740:
    v_931 = v_933;
    if (!symbolp(v_931)) v_931 = nil;
    else { v_931 = qfastgets(v_931);
           if (v_931 != nil) { v_931 = elt(v_931, 21); // rl_external
#ifdef RECORD_GET
             if (v_931 != SPID_NOPROP)
                record_get(elt(fastget_names, 21), 1);
             else record_get(elt(fastget_names, 21), 0),
                v_931 = nil; }
           else record_get(elt(fastget_names, 21), 0); }
#else
             if (v_931 == SPID_NOPROP) v_931 = nil; }}
#endif
    goto v_738;
    v_931 = nil;
v_738:
    goto v_719;
    v_931 = nil;
v_719:
    goto v_662;
    v_931 = nil;
v_662:
    goto v_643;
    v_931 = nil;
v_643:
    if (v_931 == nil) goto v_641;
    else goto v_523;
v_641:
    v_931 = nil;
    goto v_8;
v_523:
    v_932 = v_934;
    v_931 = v_933;
    if (equal(v_932, v_931)) goto v_762;
    v_931 = v_934;
    v_932 = v_933;
    {
        LispObject fn = basic_elt(env, 14); // cl_ordopp
        return (*qfn2(fn))(fn, v_931, v_932);
    }
v_762:
    v_932 = v_934;
    v_931 = basic_elt(env, 1); // true
    if (v_932 == v_931) goto v_774;
    else goto v_775;
v_774:
    v_931 = lisp_true;
    goto v_773;
v_775:
    v_932 = v_934;
    v_931 = basic_elt(env, 2); // false
    v_931 = (v_932 == v_931 ? lisp_true : nil);
    goto v_773;
    v_931 = nil;
v_773:
    if (v_931 == nil) goto v_771;
    v_931 = lisp_true;
    goto v_8;
v_771:
    v_932 = v_934;
    v_931 = basic_elt(env, 9); // ex
    if (v_932 == v_931) goto v_791;
    else goto v_792;
v_791:
    v_931 = lisp_true;
    goto v_790;
v_792:
    v_932 = v_934;
    v_931 = basic_elt(env, 10); // all
    v_931 = (v_932 == v_931 ? lisp_true : nil);
    goto v_790;
    v_931 = nil;
v_790:
    if (v_931 == nil) goto v_788;
    v_931 = stack[-1];
    if (!car_legal(v_931)) v_931 = cdrerror(v_931); else
    v_931 = cdr(v_931);
    if (!car_legal(v_931)) v_932 = carerror(v_931); else
    v_932 = car(v_931);
    v_931 = stack[0];
    if (!car_legal(v_931)) v_931 = cdrerror(v_931); else
    v_931 = cdr(v_931);
    if (!car_legal(v_931)) v_931 = carerror(v_931); else
    v_931 = car(v_931);
    if (equal(v_932, v_931)) goto v_804;
    v_931 = stack[-1];
    if (!car_legal(v_931)) v_931 = cdrerror(v_931); else
    v_931 = cdr(v_931);
    if (!car_legal(v_931)) v_932 = carerror(v_931); else
    v_932 = car(v_931);
    v_931 = stack[0];
    if (!car_legal(v_931)) v_931 = cdrerror(v_931); else
    v_931 = cdr(v_931);
    if (!car_legal(v_931)) v_931 = carerror(v_931); else
    v_931 = car(v_931);
    {   LispObject fn = basic_elt(env, 15); // ordp
    v_931 = (*qfn2(fn))(fn, v_932, v_931);
    }
    env = stack[-2];
    if (v_931 == nil) goto v_813;
    else goto v_814;
v_813:
    v_931 = nil;
    goto v_812;
v_814:
    v_931 = stack[-1];
    if (!car_legal(v_931)) v_931 = cdrerror(v_931); else
    v_931 = cdr(v_931);
    if (!car_legal(v_931)) v_932 = carerror(v_931); else
    v_932 = car(v_931);
    v_931 = stack[0];
    if (!car_legal(v_931)) v_931 = cdrerror(v_931); else
    v_931 = cdr(v_931);
    if (!car_legal(v_931)) v_931 = carerror(v_931); else
    v_931 = car(v_931);
    v_931 = Lneq_2(nil, v_932, v_931);
    goto v_812;
    v_931 = nil;
v_812:
    v_931 = (v_931 == nil ? lisp_true : nil);
    goto v_8;
v_804:
    v_931 = stack[-1];
    if (!car_legal(v_931)) v_931 = cdrerror(v_931); else
    v_931 = cdr(v_931);
    if (!car_legal(v_931)) v_931 = cdrerror(v_931); else
    v_931 = cdr(v_931);
    if (!car_legal(v_931)) v_932 = carerror(v_931); else
    v_932 = car(v_931);
    v_931 = stack[0];
    if (!car_legal(v_931)) v_931 = cdrerror(v_931); else
    v_931 = cdr(v_931);
    if (!car_legal(v_931)) v_931 = cdrerror(v_931); else
    v_931 = cdr(v_931);
    if (!car_legal(v_931)) v_931 = carerror(v_931); else
    v_931 = car(v_931);
    stack[-1] = v_932;
    stack[0] = v_931;
    goto v_1;
    goto v_786;
v_788:
v_786:
    v_932 = v_934;
    v_931 = basic_elt(env, 11); // bex
    if (v_932 == v_931) goto v_850;
    else goto v_851;
v_850:
    v_931 = lisp_true;
    goto v_849;
v_851:
    v_932 = v_934;
    v_931 = basic_elt(env, 12); // ball
    v_931 = (v_932 == v_931 ? lisp_true : nil);
    goto v_849;
    v_931 = nil;
v_849:
    if (v_931 == nil) goto v_847;
    v_931 = stack[-1];
    if (!car_legal(v_931)) v_931 = cdrerror(v_931); else
    v_931 = cdr(v_931);
    if (!car_legal(v_931)) v_932 = carerror(v_931); else
    v_932 = car(v_931);
    v_931 = stack[0];
    if (!car_legal(v_931)) v_931 = cdrerror(v_931); else
    v_931 = cdr(v_931);
    if (!car_legal(v_931)) v_931 = carerror(v_931); else
    v_931 = car(v_931);
    if (equal(v_932, v_931)) goto v_863;
    v_931 = stack[-1];
    if (!car_legal(v_931)) v_931 = cdrerror(v_931); else
    v_931 = cdr(v_931);
    if (!car_legal(v_931)) v_932 = carerror(v_931); else
    v_932 = car(v_931);
    v_931 = stack[0];
    if (!car_legal(v_931)) v_931 = cdrerror(v_931); else
    v_931 = cdr(v_931);
    if (!car_legal(v_931)) v_931 = carerror(v_931); else
    v_931 = car(v_931);
    {   LispObject fn = basic_elt(env, 15); // ordp
    v_931 = (*qfn2(fn))(fn, v_932, v_931);
    }
    env = stack[-2];
    if (v_931 == nil) goto v_872;
    else goto v_873;
v_872:
    v_931 = nil;
    goto v_871;
v_873:
    v_931 = stack[-1];
    if (!car_legal(v_931)) v_931 = cdrerror(v_931); else
    v_931 = cdr(v_931);
    if (!car_legal(v_931)) v_932 = carerror(v_931); else
    v_932 = car(v_931);
    v_931 = stack[0];
    if (!car_legal(v_931)) v_931 = cdrerror(v_931); else
    v_931 = cdr(v_931);
    if (!car_legal(v_931)) v_931 = carerror(v_931); else
    v_931 = car(v_931);
    v_931 = Lneq_2(nil, v_932, v_931);
    goto v_871;
    v_931 = nil;
v_871:
    v_931 = (v_931 == nil ? lisp_true : nil);
    goto v_8;
v_863:
    v_931 = stack[-1];
    if (!car_legal(v_931)) v_931 = cdrerror(v_931); else
    v_931 = cdr(v_931);
    if (!car_legal(v_931)) v_931 = cdrerror(v_931); else
    v_931 = cdr(v_931);
    if (!car_legal(v_931)) v_931 = cdrerror(v_931); else
    v_931 = cdr(v_931);
    if (!car_legal(v_931)) v_932 = carerror(v_931); else
    v_932 = car(v_931);
    v_931 = stack[0];
    if (!car_legal(v_931)) v_931 = cdrerror(v_931); else
    v_931 = cdr(v_931);
    if (!car_legal(v_931)) v_931 = cdrerror(v_931); else
    v_931 = cdr(v_931);
    if (!car_legal(v_931)) v_931 = cdrerror(v_931); else
    v_931 = cdr(v_931);
    if (!car_legal(v_931)) v_931 = carerror(v_931); else
    v_931 = car(v_931);
    if (equal(v_932, v_931)) goto v_893;
    v_931 = stack[-1];
    if (!car_legal(v_931)) v_931 = cdrerror(v_931); else
    v_931 = cdr(v_931);
    if (!car_legal(v_931)) v_931 = cdrerror(v_931); else
    v_931 = cdr(v_931);
    if (!car_legal(v_931)) v_931 = cdrerror(v_931); else
    v_931 = cdr(v_931);
    if (!car_legal(v_931)) v_932 = carerror(v_931); else
    v_932 = car(v_931);
    v_931 = stack[0];
    if (!car_legal(v_931)) v_931 = cdrerror(v_931); else
    v_931 = cdr(v_931);
    if (!car_legal(v_931)) v_931 = cdrerror(v_931); else
    v_931 = cdr(v_931);
    if (!car_legal(v_931)) v_931 = cdrerror(v_931); else
    v_931 = cdr(v_931);
    if (!car_legal(v_931)) v_931 = carerror(v_931); else
    v_931 = car(v_931);
    stack[-1] = v_932;
    stack[0] = v_931;
    goto v_1;
v_893:
    v_931 = stack[-1];
    if (!car_legal(v_931)) v_931 = cdrerror(v_931); else
    v_931 = cdr(v_931);
    if (!car_legal(v_931)) v_931 = cdrerror(v_931); else
    v_931 = cdr(v_931);
    if (!car_legal(v_931)) v_932 = carerror(v_931); else
    v_932 = car(v_931);
    v_931 = stack[0];
    if (!car_legal(v_931)) v_931 = cdrerror(v_931); else
    v_931 = cdr(v_931);
    if (!car_legal(v_931)) v_931 = cdrerror(v_931); else
    v_931 = cdr(v_931);
    if (!car_legal(v_931)) v_931 = carerror(v_931); else
    v_931 = car(v_931);
    stack[-1] = v_932;
    stack[0] = v_931;
    goto v_1;
    goto v_845;
v_847:
v_845:
    v_931 = stack[-1];
    if (!car_legal(v_931)) v_932 = cdrerror(v_931); else
    v_932 = cdr(v_931);
    v_931 = stack[0];
    if (!car_legal(v_931)) v_931 = cdrerror(v_931); else
    v_931 = cdr(v_931);
    {
        LispObject fn = basic_elt(env, 16); // cl_sordpl
        return (*qfn2(fn))(fn, v_932, v_931);
    }
v_8:
    return onevalue(v_931);
}



// Code for rl_sacat

static LispObject CC_rl_sacat(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    v_12 = v_4;
    v_13 = v_3;
    v_14 = v_2;
// end of prologue
    stack[0] = qvalue(basic_elt(env, 1)); // rl_sacat!*
    v_12 = list3(v_14, v_13, v_12);
    env = stack[-1];
    {
        LispObject v_16 = stack[0];
        LispObject fn = basic_elt(env, 2); // apply
        return (*qfn2(fn))(fn, v_16, v_12);
    }
}



// Code for acfsf_clnegrel

static LispObject CC_acfsf_clnegrel(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_15, v_16;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_15 = v_3;
    v_16 = v_2;
// end of prologue
    if (v_15 == nil) goto v_8;
    v_15 = v_16;
    goto v_6;
v_8:
    v_15 = v_16;
    {
        LispObject fn = basic_elt(env, 1); // acfsf_lnegrel
        return (*qfn1(fn))(fn, v_15);
    }
    v_15 = nil;
v_6:
    return onevalue(v_15);
}



// Code for dipretimes

static LispObject CC_dipretimes(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_36, v_37, v_38;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_37 = v_2;
// end of prologue
v_6:
    v_36 = v_37;
    if (!car_legal(v_36)) v_38 = carerror(v_36); else
    v_38 = car(v_36);
    v_36 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_38 == v_36) goto v_9;
    else goto v_10;
v_9:
    v_36 = v_37;
    if (!car_legal(v_36)) v_36 = cdrerror(v_36); else
    v_36 = cdr(v_36);
    if (v_36 == nil) goto v_17;
    v_36 = v_37;
    if (!car_legal(v_36)) v_36 = cdrerror(v_36); else
    v_36 = cdr(v_36);
    v_37 = v_36;
    goto v_6;
v_17:
    v_36 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_5;
    goto v_8;
v_10:
    v_36 = v_37;
    if (!car_legal(v_36)) v_36 = cdrerror(v_36); else
    v_36 = cdr(v_36);
    if (v_36 == nil) goto v_25;
    else goto v_26;
v_25:
    v_36 = v_37;
    if (!car_legal(v_36)) v_36 = carerror(v_36); else
    v_36 = car(v_36);
    goto v_5;
v_26:
    v_36 = basic_elt(env, 1); // times
    return cons(v_36, v_37);
v_8:
    v_36 = nil;
v_5:
    return onevalue(v_36);
}



// Code for indordln

static LispObject CC_indordln(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    v_35 = v_2;
// end of prologue
    v_34 = v_35;
    if (v_34 == nil) goto v_6;
    else goto v_7;
v_6:
    v_34 = nil;
    goto v_5;
v_7:
    v_34 = v_35;
    if (!car_legal(v_34)) v_34 = cdrerror(v_34); else
    v_34 = cdr(v_34);
    if (v_34 == nil) goto v_10;
    else goto v_11;
v_10:
    v_34 = v_35;
    goto v_5;
v_11:
    v_34 = v_35;
    if (!car_legal(v_34)) v_34 = cdrerror(v_34); else
    v_34 = cdr(v_34);
    if (!car_legal(v_34)) v_34 = cdrerror(v_34); else
    v_34 = cdr(v_34);
    if (v_34 == nil) goto v_15;
    else goto v_16;
v_15:
    v_34 = v_35;
    if (!car_legal(v_34)) v_34 = carerror(v_34); else
    v_34 = car(v_34);
    if (!car_legal(v_35)) v_35 = cdrerror(v_35); else
    v_35 = cdr(v_35);
    if (!car_legal(v_35)) v_35 = carerror(v_35); else
    v_35 = car(v_35);
    {
        LispObject fn = basic_elt(env, 1); // indordl2
        return (*qfn2(fn))(fn, v_34, v_35);
    }
v_16:
    v_34 = v_35;
    if (!car_legal(v_34)) stack[0] = carerror(v_34); else
    stack[0] = car(v_34);
    v_34 = v_35;
    if (!car_legal(v_34)) v_34 = cdrerror(v_34); else
    v_34 = cdr(v_34);
    {   LispObject fn = basic_elt(env, 0); // indordln
    v_34 = (*qfn1(fn))(fn, v_34);
    }
    env = stack[-1];
    {
        LispObject v_37 = stack[0];
        LispObject fn = basic_elt(env, 2); // indordlad
        return (*qfn2(fn))(fn, v_37, v_34);
    }
    v_34 = nil;
v_5:
    return onevalue(v_34);
}



// Code for free

static LispObject CC_free(LispObject env,
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
    v_20 = stack[0];
    if (!car_legal(v_20)) v_20 = cdrerror(v_20); else
    v_20 = cdr(v_20);
    if (!car_legal(v_20)) v_20 = carerror(v_20); else
    v_20 = car(v_20);
    {   LispObject fn = basic_elt(env, 1); // freeind
    v_20 = (*qfn1(fn))(fn, v_20);
    }
    env = stack[-1];
    if (v_20 == nil) goto v_6;
    else goto v_7;
v_6:
    v_20 = nil;
    goto v_5;
v_7:
    v_20 = stack[0];
    if (!car_legal(v_20)) v_20 = cdrerror(v_20); else
    v_20 = cdr(v_20);
    if (!car_legal(v_20)) v_20 = cdrerror(v_20); else
    v_20 = cdr(v_20);
    if (!car_legal(v_20)) v_20 = carerror(v_20); else
    v_20 = car(v_20);
    {
        LispObject fn = basic_elt(env, 1); // freeind
        return (*qfn1(fn))(fn, v_20);
    }
    v_20 = nil;
v_5:
    return onevalue(v_20);
}



// Code for !*multf

static LispObject CC_Hmultf(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_400, v_401, v_402;
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
    v_400 = stack[-3];
    if (v_400 == nil) goto v_17;
    else goto v_18;
v_17:
    v_400 = lisp_true;
    goto v_16;
v_18:
    v_400 = stack[-2];
    v_400 = (v_400 == nil ? lisp_true : nil);
    goto v_16;
    v_400 = nil;
v_16:
    if (v_400 == nil) goto v_14;
    v_400 = nil;
    goto v_8;
v_14:
    v_401 = stack[-3];
    v_400 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_401 == v_400) goto v_26;
    else goto v_27;
v_26:
    v_400 = stack[-2];
    {
        LispObject fn = basic_elt(env, 5); // squashsqrt
        return (*qfn1(fn))(fn, v_400);
    }
v_27:
    v_401 = stack[-2];
    v_400 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_401 == v_400) goto v_32;
    else goto v_33;
v_32:
    v_400 = stack[-3];
    {
        LispObject fn = basic_elt(env, 5); // squashsqrt
        return (*qfn1(fn))(fn, v_400);
    }
v_33:
    v_400 = stack[-3];
    if (!consp(v_400)) goto v_42;
    else goto v_43;
v_42:
    v_400 = lisp_true;
    goto v_41;
v_43:
    v_400 = stack[-3];
    if (!car_legal(v_400)) v_400 = carerror(v_400); else
    v_400 = car(v_400);
    v_400 = (consp(v_400) ? nil : lisp_true);
    goto v_41;
    v_400 = nil;
v_41:
    if (v_400 == nil) goto v_39;
    stack[0] = stack[-3];
    v_400 = stack[-2];
    {   LispObject fn = basic_elt(env, 5); // squashsqrt
    v_400 = (*qfn1(fn))(fn, v_400);
    }
    env = stack[-5];
    {
        LispObject v_408 = stack[0];
        LispObject fn = basic_elt(env, 6); // multd
        return (*qfn2(fn))(fn, v_408, v_400);
    }
v_39:
    v_400 = stack[-2];
    if (!consp(v_400)) goto v_59;
    else goto v_60;
v_59:
    v_400 = lisp_true;
    goto v_58;
v_60:
    v_400 = stack[-2];
    if (!car_legal(v_400)) v_400 = carerror(v_400); else
    v_400 = car(v_400);
    v_400 = (consp(v_400) ? nil : lisp_true);
    goto v_58;
    v_400 = nil;
v_58:
    if (v_400 == nil) goto v_56;
    stack[0] = stack[-2];
    v_400 = stack[-3];
    {   LispObject fn = basic_elt(env, 5); // squashsqrt
    v_400 = (*qfn1(fn))(fn, v_400);
    }
    env = stack[-5];
    {
        LispObject v_409 = stack[0];
        LispObject fn = basic_elt(env, 6); // multd
        return (*qfn2(fn))(fn, v_409, v_400);
    }
v_56:
    v_400 = qvalue(basic_elt(env, 1)); // !*noncomp
    if (v_400 == nil) goto v_73;
    v_401 = stack[-3];
    v_400 = stack[-2];
    {
        LispObject fn = basic_elt(env, 7); // multf
        return (*qfn2(fn))(fn, v_401, v_400);
    }
v_73:
    v_400 = stack[-3];
    if (!car_legal(v_400)) v_400 = carerror(v_400); else
    v_400 = car(v_400);
    if (!car_legal(v_400)) v_400 = carerror(v_400); else
    v_400 = car(v_400);
    if (!car_legal(v_400)) v_400 = carerror(v_400); else
    v_400 = car(v_400);
    stack[0] = v_400;
    v_400 = stack[-2];
    if (!car_legal(v_400)) v_400 = carerror(v_400); else
    v_400 = car(v_400);
    if (!car_legal(v_400)) v_400 = carerror(v_400); else
    v_400 = car(v_400);
    if (!car_legal(v_400)) v_400 = carerror(v_400); else
    v_400 = car(v_400);
    stack[-1] = v_400;
    v_401 = stack[0];
    v_400 = stack[-1];
    if (v_401 == v_400) goto v_88;
    else goto v_89;
v_88:
    goto v_10;
v_89:
    v_401 = stack[0];
    v_400 = stack[-1];
    {   LispObject fn = basic_elt(env, 8); // ordop
    v_400 = (*qfn2(fn))(fn, v_401, v_400);
    }
    env = stack[-5];
    if (v_400 == nil) goto v_93;
    goto v_9;
v_93:
    v_401 = stack[-3];
    v_400 = stack[-2];
    if (!car_legal(v_400)) v_400 = carerror(v_400); else
    v_400 = car(v_400);
    if (!car_legal(v_400)) v_400 = cdrerror(v_400); else
    v_400 = cdr(v_400);
    {   LispObject fn = basic_elt(env, 0); // !*multf
    v_400 = (*qfn2(fn))(fn, v_401, v_400);
    }
    env = stack[-5];
    stack[0] = v_400;
    v_401 = stack[-3];
    v_400 = stack[-2];
    if (!car_legal(v_400)) v_400 = cdrerror(v_400); else
    v_400 = cdr(v_400);
    {   LispObject fn = basic_elt(env, 0); // !*multf
    v_400 = (*qfn2(fn))(fn, v_401, v_400);
    }
    env = stack[-5];
    stack[-1] = v_400;
    v_400 = stack[0];
    if (v_400 == nil) goto v_108;
    else goto v_109;
v_108:
    v_400 = stack[-1];
    goto v_107;
v_109:
    v_400 = stack[-2];
    if (!car_legal(v_400)) v_400 = carerror(v_400); else
    v_400 = car(v_400);
    if (!car_legal(v_400)) v_400 = cdrerror(v_400); else
    v_400 = cdr(v_400);
    if (!consp(v_400)) goto v_120;
    else goto v_121;
v_120:
    v_400 = lisp_true;
    goto v_119;
v_121:
    v_400 = stack[-2];
    if (!car_legal(v_400)) v_400 = carerror(v_400); else
    v_400 = car(v_400);
    if (!car_legal(v_400)) v_400 = cdrerror(v_400); else
    v_400 = cdr(v_400);
    if (!car_legal(v_400)) v_400 = carerror(v_400); else
    v_400 = car(v_400);
    v_400 = (consp(v_400) ? nil : lisp_true);
    goto v_119;
    v_400 = nil;
v_119:
    if (v_400 == nil) goto v_116;
    else goto v_117;
v_116:
    v_400 = stack[-3];
    if (!car_legal(v_400)) v_400 = carerror(v_400); else
    v_400 = car(v_400);
    if (!car_legal(v_400)) v_400 = carerror(v_400); else
    v_400 = car(v_400);
    if (!car_legal(v_400)) v_401 = carerror(v_400); else
    v_401 = car(v_400);
    v_400 = stack[-2];
    if (!car_legal(v_400)) v_400 = carerror(v_400); else
    v_400 = car(v_400);
    if (!car_legal(v_400)) v_400 = cdrerror(v_400); else
    v_400 = cdr(v_400);
    if (!car_legal(v_400)) v_400 = carerror(v_400); else
    v_400 = car(v_400);
    if (!car_legal(v_400)) v_400 = carerror(v_400); else
    v_400 = car(v_400);
    if (!car_legal(v_400)) v_400 = carerror(v_400); else
    v_400 = car(v_400);
    if (v_401 == v_400) goto v_135;
    else goto v_136;
v_135:
    v_400 = stack[-3];
    if (!car_legal(v_400)) v_400 = carerror(v_400); else
    v_400 = car(v_400);
    if (!car_legal(v_400)) v_400 = carerror(v_400); else
    v_400 = car(v_400);
    if (!car_legal(v_400)) v_400 = carerror(v_400); else
    v_400 = car(v_400);
    if (!consp(v_400)) goto v_150;
    v_400 = stack[-3];
    if (!car_legal(v_400)) v_400 = carerror(v_400); else
    v_400 = car(v_400);
    if (!car_legal(v_400)) v_400 = carerror(v_400); else
    v_400 = car(v_400);
    if (!car_legal(v_400)) v_400 = carerror(v_400); else
    v_400 = car(v_400);
    if (!car_legal(v_400)) v_401 = carerror(v_400); else
    v_401 = car(v_400);
    v_400 = basic_elt(env, 2); // (expt sqrt)
    v_400 = Lmemq(nil, v_401, v_400);
    goto v_148;
v_150:
    v_400 = nil;
    goto v_148;
    v_400 = nil;
v_148:
    goto v_134;
v_136:
    v_400 = nil;
    goto v_134;
    v_400 = nil;
v_134:
    goto v_115;
v_117:
    v_400 = nil;
    goto v_115;
    v_400 = nil;
v_115:
    if (v_400 == nil) goto v_113;
    v_400 = stack[-2];
    if (!car_legal(v_400)) v_400 = carerror(v_400); else
    v_400 = car(v_400);
    if (!car_legal(v_400)) v_401 = carerror(v_400); else
    v_401 = car(v_400);
    v_400 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_400 = cons(v_401, v_400);
    env = stack[-5];
    v_400 = ncons(v_400);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 0); // !*multf
    v_401 = (*qfn2(fn))(fn, stack[0], v_400);
    }
    env = stack[-5];
    v_400 = stack[-1];
    {
        LispObject fn = basic_elt(env, 9); // addf
        return (*qfn2(fn))(fn, v_401, v_400);
    }
v_113:
    v_400 = stack[-2];
    if (!car_legal(v_400)) v_400 = carerror(v_400); else
    v_400 = car(v_400);
    if (!car_legal(v_400)) v_402 = carerror(v_400); else
    v_402 = car(v_400);
    v_401 = stack[0];
    v_400 = stack[-1];
    {
        LispObject fn = basic_elt(env, 10); // makeupsf
        return (*qfn3(fn))(fn, v_402, v_401, v_400);
    }
    v_400 = nil;
v_107:
    goto v_8;
v_9:
    v_400 = stack[-3];
    if (!car_legal(v_400)) v_400 = carerror(v_400); else
    v_400 = car(v_400);
    if (!car_legal(v_400)) v_401 = cdrerror(v_400); else
    v_401 = cdr(v_400);
    v_400 = stack[-2];
    {   LispObject fn = basic_elt(env, 0); // !*multf
    v_400 = (*qfn2(fn))(fn, v_401, v_400);
    }
    env = stack[-5];
    stack[0] = v_400;
    v_400 = stack[-3];
    if (!car_legal(v_400)) v_401 = cdrerror(v_400); else
    v_401 = cdr(v_400);
    v_400 = stack[-2];
    {   LispObject fn = basic_elt(env, 0); // !*multf
    v_400 = (*qfn2(fn))(fn, v_401, v_400);
    }
    env = stack[-5];
    stack[-1] = v_400;
    v_400 = stack[0];
    if (v_400 == nil) goto v_200;
    else goto v_201;
v_200:
    v_400 = stack[-1];
    goto v_199;
v_201:
    v_400 = stack[-3];
    if (!car_legal(v_400)) v_400 = carerror(v_400); else
    v_400 = car(v_400);
    if (!car_legal(v_400)) v_400 = cdrerror(v_400); else
    v_400 = cdr(v_400);
    if (!consp(v_400)) goto v_212;
    else goto v_213;
v_212:
    v_400 = lisp_true;
    goto v_211;
v_213:
    v_400 = stack[-3];
    if (!car_legal(v_400)) v_400 = carerror(v_400); else
    v_400 = car(v_400);
    if (!car_legal(v_400)) v_400 = cdrerror(v_400); else
    v_400 = cdr(v_400);
    if (!car_legal(v_400)) v_400 = carerror(v_400); else
    v_400 = car(v_400);
    v_400 = (consp(v_400) ? nil : lisp_true);
    goto v_211;
    v_400 = nil;
v_211:
    if (v_400 == nil) goto v_208;
    else goto v_209;
v_208:
    v_400 = stack[-3];
    if (!car_legal(v_400)) v_400 = carerror(v_400); else
    v_400 = car(v_400);
    if (!car_legal(v_400)) v_400 = cdrerror(v_400); else
    v_400 = cdr(v_400);
    if (!car_legal(v_400)) v_400 = carerror(v_400); else
    v_400 = car(v_400);
    if (!car_legal(v_400)) v_400 = carerror(v_400); else
    v_400 = car(v_400);
    if (!car_legal(v_400)) v_401 = carerror(v_400); else
    v_401 = car(v_400);
    v_400 = stack[-2];
    if (!car_legal(v_400)) v_400 = carerror(v_400); else
    v_400 = car(v_400);
    if (!car_legal(v_400)) v_400 = carerror(v_400); else
    v_400 = car(v_400);
    if (!car_legal(v_400)) v_400 = carerror(v_400); else
    v_400 = car(v_400);
    if (v_401 == v_400) goto v_227;
    else goto v_228;
v_227:
    v_400 = stack[-2];
    if (!car_legal(v_400)) v_400 = carerror(v_400); else
    v_400 = car(v_400);
    if (!car_legal(v_400)) v_400 = carerror(v_400); else
    v_400 = car(v_400);
    if (!car_legal(v_400)) v_400 = carerror(v_400); else
    v_400 = car(v_400);
    if (!consp(v_400)) goto v_242;
    v_400 = stack[-2];
    if (!car_legal(v_400)) v_400 = carerror(v_400); else
    v_400 = car(v_400);
    if (!car_legal(v_400)) v_400 = carerror(v_400); else
    v_400 = car(v_400);
    if (!car_legal(v_400)) v_400 = carerror(v_400); else
    v_400 = car(v_400);
    if (!car_legal(v_400)) v_401 = carerror(v_400); else
    v_401 = car(v_400);
    v_400 = basic_elt(env, 2); // (expt sqrt)
    v_400 = Lmemq(nil, v_401, v_400);
    goto v_240;
v_242:
    v_400 = nil;
    goto v_240;
    v_400 = nil;
v_240:
    goto v_226;
v_228:
    v_400 = nil;
    goto v_226;
    v_400 = nil;
v_226:
    goto v_207;
v_209:
    v_400 = nil;
    goto v_207;
    v_400 = nil;
v_207:
    if (v_400 == nil) goto v_205;
    v_400 = stack[-3];
    if (!car_legal(v_400)) v_400 = carerror(v_400); else
    v_400 = car(v_400);
    if (!car_legal(v_400)) v_401 = carerror(v_400); else
    v_401 = car(v_400);
    v_400 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_400 = cons(v_401, v_400);
    env = stack[-5];
    v_401 = ncons(v_400);
    env = stack[-5];
    v_400 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // !*multf
    v_401 = (*qfn2(fn))(fn, v_401, v_400);
    }
    env = stack[-5];
    v_400 = stack[-1];
    {
        LispObject fn = basic_elt(env, 9); // addf
        return (*qfn2(fn))(fn, v_401, v_400);
    }
v_205:
    v_400 = stack[-3];
    if (!car_legal(v_400)) v_400 = carerror(v_400); else
    v_400 = car(v_400);
    if (!car_legal(v_400)) v_402 = carerror(v_400); else
    v_402 = car(v_400);
    v_401 = stack[0];
    v_400 = stack[-1];
    {
        LispObject fn = basic_elt(env, 10); // makeupsf
        return (*qfn3(fn))(fn, v_402, v_401, v_400);
    }
    v_400 = nil;
v_199:
    goto v_8;
v_10:
    v_400 = stack[-3];
    if (!car_legal(v_400)) v_400 = carerror(v_400); else
    v_400 = car(v_400);
    v_401 = ncons(v_400);
    env = stack[-5];
    v_400 = stack[-2];
    if (!car_legal(v_400)) v_400 = cdrerror(v_400); else
    v_400 = cdr(v_400);
    {   LispObject fn = basic_elt(env, 0); // !*multf
    stack[-1] = (*qfn2(fn))(fn, v_401, v_400);
    }
    env = stack[-5];
    v_400 = stack[-3];
    if (!car_legal(v_400)) v_401 = cdrerror(v_400); else
    v_401 = cdr(v_400);
    v_400 = stack[-2];
    {   LispObject fn = basic_elt(env, 0); // !*multf
    v_400 = (*qfn2(fn))(fn, v_401, v_400);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 9); // addf
    v_400 = (*qfn2(fn))(fn, stack[-1], v_400);
    }
    env = stack[-5];
    stack[-1] = v_400;
    v_401 = stack[0];
    v_400 = basic_elt(env, 3); // sqrt
    if (!consp(v_401)) goto v_295;
    v_401 = car(v_401);
    if (v_401 == v_400) goto v_294;
    else goto v_295;
v_294:
    v_400 = stack[-1];
    {   LispObject fn = basic_elt(env, 5); // squashsqrt
    stack[-4] = (*qfn1(fn))(fn, v_400);
    }
    env = stack[-5];
    stack[-1] = stack[0];
    v_400 = stack[-3];
    if (!car_legal(v_400)) v_400 = carerror(v_400); else
    v_400 = car(v_400);
    if (!car_legal(v_400)) v_401 = cdrerror(v_400); else
    v_401 = cdr(v_400);
    v_400 = stack[-2];
    if (!car_legal(v_400)) v_400 = carerror(v_400); else
    v_400 = car(v_400);
    if (!car_legal(v_400)) v_400 = cdrerror(v_400); else
    v_400 = cdr(v_400);
    {   LispObject fn = basic_elt(env, 0); // !*multf
    stack[0] = (*qfn2(fn))(fn, v_401, v_400);
    }
    env = stack[-5];
    v_400 = stack[-3];
    if (!car_legal(v_400)) v_400 = carerror(v_400); else
    v_400 = car(v_400);
    if (!car_legal(v_400)) v_400 = carerror(v_400); else
    v_400 = car(v_400);
    if (!car_legal(v_400)) v_401 = cdrerror(v_400); else
    v_401 = cdr(v_400);
    v_400 = stack[-2];
    if (!car_legal(v_400)) v_400 = carerror(v_400); else
    v_400 = car(v_400);
    if (!car_legal(v_400)) v_400 = carerror(v_400); else
    v_400 = car(v_400);
    if (!car_legal(v_400)) v_400 = cdrerror(v_400); else
    v_400 = cdr(v_400);
    v_400 = plus2(v_401, v_400);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 11); // !*multfsqrt
    v_400 = (*qfn3(fn))(fn, stack[-1], stack[0], v_400);
    }
    env = stack[-5];
    {
        LispObject v_410 = stack[-4];
        LispObject fn = basic_elt(env, 9); // addf
        return (*qfn2(fn))(fn, v_410, v_400);
    }
v_295:
    v_401 = stack[0];
    v_400 = basic_elt(env, 4); // expt
    if (!consp(v_401)) goto v_325;
    v_401 = car(v_401);
    if (v_401 == v_400) goto v_324;
    else goto v_325;
v_324:
    v_400 = stack[0];
    if (!car_legal(v_400)) v_400 = cdrerror(v_400); else
    v_400 = cdr(v_400);
    if (!car_legal(v_400)) v_400 = cdrerror(v_400); else
    v_400 = cdr(v_400);
    if (!car_legal(v_400)) v_400 = carerror(v_400); else
    v_400 = car(v_400);
    {   LispObject fn = basic_elt(env, 12); // prefix!-rational!-numberp
    v_400 = (*qfn1(fn))(fn, v_400);
    }
    env = stack[-5];
    goto v_323;
v_325:
    v_400 = nil;
    goto v_323;
    v_400 = nil;
v_323:
    if (v_400 == nil) goto v_321;
    v_400 = stack[-1];
    {   LispObject fn = basic_elt(env, 5); // squashsqrt
    stack[-4] = (*qfn1(fn))(fn, v_400);
    }
    env = stack[-5];
    stack[-1] = stack[0];
    v_400 = stack[-3];
    if (!car_legal(v_400)) v_400 = carerror(v_400); else
    v_400 = car(v_400);
    if (!car_legal(v_400)) v_401 = cdrerror(v_400); else
    v_401 = cdr(v_400);
    v_400 = stack[-2];
    if (!car_legal(v_400)) v_400 = carerror(v_400); else
    v_400 = car(v_400);
    if (!car_legal(v_400)) v_400 = cdrerror(v_400); else
    v_400 = cdr(v_400);
    {   LispObject fn = basic_elt(env, 0); // !*multf
    stack[0] = (*qfn2(fn))(fn, v_401, v_400);
    }
    env = stack[-5];
    v_400 = stack[-3];
    if (!car_legal(v_400)) v_400 = carerror(v_400); else
    v_400 = car(v_400);
    if (!car_legal(v_400)) v_400 = carerror(v_400); else
    v_400 = car(v_400);
    if (!car_legal(v_400)) v_401 = cdrerror(v_400); else
    v_401 = cdr(v_400);
    v_400 = stack[-2];
    if (!car_legal(v_400)) v_400 = carerror(v_400); else
    v_400 = car(v_400);
    if (!car_legal(v_400)) v_400 = carerror(v_400); else
    v_400 = car(v_400);
    if (!car_legal(v_400)) v_400 = cdrerror(v_400); else
    v_400 = cdr(v_400);
    v_400 = plus2(v_401, v_400);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 13); // !*multfexpt
    v_400 = (*qfn3(fn))(fn, stack[-1], stack[0], v_400);
    }
    env = stack[-5];
    {
        LispObject v_411 = stack[-4];
        LispObject fn = basic_elt(env, 9); // addf
        return (*qfn2(fn))(fn, v_411, v_400);
    }
v_321:
    v_400 = stack[-3];
    if (!car_legal(v_400)) v_400 = carerror(v_400); else
    v_400 = car(v_400);
    if (!car_legal(v_400)) v_400 = carerror(v_400); else
    v_400 = car(v_400);
    if (!car_legal(v_400)) v_401 = cdrerror(v_400); else
    v_401 = cdr(v_400);
    v_400 = stack[-2];
    if (!car_legal(v_400)) v_400 = carerror(v_400); else
    v_400 = car(v_400);
    if (!car_legal(v_400)) v_400 = carerror(v_400); else
    v_400 = car(v_400);
    if (!car_legal(v_400)) v_400 = cdrerror(v_400); else
    v_400 = cdr(v_400);
    v_400 = plus2(v_401, v_400);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 14); // mkspm
    v_400 = (*qfn2(fn))(fn, stack[0], v_400);
    }
    env = stack[-5];
    stack[0] = v_400;
    v_400 = stack[0];
    if (v_400 == nil) goto v_375;
    else goto v_376;
v_375:
    v_400 = lisp_true;
    goto v_374;
v_376:
    v_400 = stack[-3];
    if (!car_legal(v_400)) v_400 = carerror(v_400); else
    v_400 = car(v_400);
    if (!car_legal(v_400)) v_401 = cdrerror(v_400); else
    v_401 = cdr(v_400);
    v_400 = stack[-2];
    if (!car_legal(v_400)) v_400 = carerror(v_400); else
    v_400 = car(v_400);
    if (!car_legal(v_400)) v_400 = cdrerror(v_400); else
    v_400 = cdr(v_400);
    {   LispObject fn = basic_elt(env, 0); // !*multf
    v_400 = (*qfn2(fn))(fn, v_401, v_400);
    }
    env = stack[-5];
    stack[-3] = v_400;
    v_400 = (v_400 == nil ? lisp_true : nil);
    goto v_374;
    v_400 = nil;
v_374:
    if (v_400 == nil) goto v_372;
    v_400 = stack[-1];
    goto v_370;
v_372:
    v_401 = stack[0];
    v_400 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_400 = cons(v_401, v_400);
    env = stack[-5];
    v_401 = ncons(v_400);
    env = stack[-5];
    v_400 = stack[-3];
    {   LispObject fn = basic_elt(env, 7); // multf
    v_401 = (*qfn2(fn))(fn, v_401, v_400);
    }
    env = stack[-5];
    v_400 = stack[-1];
    {
        LispObject fn = basic_elt(env, 9); // addf
        return (*qfn2(fn))(fn, v_401, v_400);
    }
    v_400 = nil;
v_370:
v_8:
    return onevalue(v_400);
}



// Code for nonlnr

static LispObject CC_nonlnr(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_81, v_82;
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
    v_81 = stack[-1];
    if (!consp(v_81)) goto v_11;
    else goto v_12;
v_11:
    v_81 = lisp_true;
    goto v_10;
v_12:
    v_81 = stack[-1];
    if (!car_legal(v_81)) v_81 = carerror(v_81); else
    v_81 = car(v_81);
    v_81 = (consp(v_81) ? nil : lisp_true);
    goto v_10;
    v_81 = nil;
v_10:
    if (v_81 == nil) goto v_8;
    v_81 = nil;
    goto v_6;
v_8:
    v_81 = stack[-1];
    if (!car_legal(v_81)) v_81 = carerror(v_81); else
    v_81 = car(v_81);
    if (!car_legal(v_81)) v_81 = carerror(v_81); else
    v_81 = car(v_81);
    if (!car_legal(v_81)) v_82 = carerror(v_81); else
    v_82 = car(v_81);
    v_81 = stack[0];
    v_81 = Lmember(nil, v_82, v_81);
    if (v_81 == nil) goto v_22;
    v_81 = stack[-1];
    if (!car_legal(v_81)) v_81 = carerror(v_81); else
    v_81 = car(v_81);
    if (!car_legal(v_81)) v_81 = carerror(v_81); else
    v_81 = car(v_81);
    if (!car_legal(v_81)) v_82 = cdrerror(v_81); else
    v_82 = cdr(v_81);
    v_81 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_81 = static_cast<LispObject>(greaterp2(v_82, v_81));
    v_81 = v_81 ? lisp_true : nil;
    env = stack[-2];
    if (v_81 == nil) goto v_31;
    else goto v_30;
v_31:
    v_81 = stack[-1];
    if (!car_legal(v_81)) v_81 = carerror(v_81); else
    v_81 = car(v_81);
    if (!car_legal(v_81)) v_82 = cdrerror(v_81); else
    v_82 = cdr(v_81);
    v_81 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // freeofl
    v_81 = (*qfn2(fn))(fn, v_82, v_81);
    }
    env = stack[-2];
    if (v_81 == nil) goto v_40;
    else goto v_41;
v_40:
    v_81 = lisp_true;
    goto v_39;
v_41:
    v_81 = stack[-1];
    if (!car_legal(v_81)) v_82 = cdrerror(v_81); else
    v_82 = cdr(v_81);
    v_81 = stack[0];
    stack[-1] = v_82;
    stack[0] = v_81;
    goto v_1;
    v_81 = nil;
v_39:
v_30:
    goto v_6;
v_22:
    v_81 = stack[-1];
    if (!car_legal(v_81)) v_81 = carerror(v_81); else
    v_81 = car(v_81);
    if (!car_legal(v_81)) v_81 = carerror(v_81); else
    v_81 = car(v_81);
    if (!car_legal(v_81)) v_82 = carerror(v_81); else
    v_82 = car(v_81);
    v_81 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // freeofl
    v_81 = (*qfn2(fn))(fn, v_82, v_81);
    }
    env = stack[-2];
    if (v_81 == nil) goto v_58;
    else goto v_59;
v_58:
    v_81 = lisp_true;
    goto v_57;
v_59:
    v_81 = stack[-1];
    if (!car_legal(v_81)) v_81 = carerror(v_81); else
    v_81 = car(v_81);
    if (!car_legal(v_81)) v_82 = cdrerror(v_81); else
    v_82 = cdr(v_81);
    v_81 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // nonlnr
    v_81 = (*qfn2(fn))(fn, v_82, v_81);
    }
    env = stack[-2];
    if (v_81 == nil) goto v_71;
    else goto v_70;
v_71:
    v_81 = stack[-1];
    if (!car_legal(v_81)) v_82 = cdrerror(v_81); else
    v_82 = cdr(v_81);
    v_81 = stack[0];
    stack[-1] = v_82;
    stack[0] = v_81;
    goto v_1;
v_70:
    goto v_57;
    v_81 = nil;
v_57:
    goto v_6;
    v_81 = nil;
v_6:
    return onevalue(v_81);
}



// Code for janettreeinsert

static LispObject CC_janettreeinsert(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_173, v_174, v_175;
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(10);
// copy arguments values to proper place
    stack[-7] = v_2;
// end of prologue
    v_174 = stack[-7];
    v_173 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_173 = Lgetv(nil, v_174, v_173);
    env = stack[-9];
    if (!car_legal(v_173)) v_173 = carerror(v_173); else
    v_173 = car(v_173);
    stack[-3] = v_173;
    v_174 = stack[-3];
    v_173 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_173 = Lgetv(nil, v_174, v_173);
    env = stack[-9];
    stack[-6] = v_173;
    v_173 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-8] = v_173;
    v_173 = qvalue(basic_elt(env, 1)); // fluidbibasisjanettreerootnode
    if (v_173 == nil) goto v_23;
    else goto v_24;
v_23:
    v_175 = stack[-6];
    v_174 = stack[-8];
    v_173 = stack[-7];
    {   LispObject fn = basic_elt(env, 2); // janettreenodebuild
    v_173 = (*qfn3(fn))(fn, v_175, v_174, v_173);
    }
    env = stack[-9];
    setvalue(basic_elt(env, 1), v_173); // fluidbibasisjanettreerootnode
    goto v_22;
v_24:
    v_173 = qvalue(basic_elt(env, 1)); // fluidbibasisjanettreerootnode
    stack[-5] = v_173;
v_36:
    v_174 = stack[-6];
    v_173 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_173 = static_cast<LispObject>(greaterp2(v_174, v_173));
    v_173 = v_173 ? lisp_true : nil;
    env = stack[-9];
    if (v_173 == nil) goto v_39;
    else goto v_40;
v_39:
    goto v_35;
v_40:
v_47:
    v_173 = stack[-5];
    if (v_173 == nil) goto v_50;
    v_173 = stack[-5];
    if (!car_legal(v_173)) v_173 = carerror(v_173); else
    v_173 = car(v_173);
    if (!car_legal(v_173)) stack[0] = carerror(v_173); else
    stack[0] = car(v_173);
    v_174 = stack[-3];
    v_173 = stack[-8];
    {   LispObject fn = basic_elt(env, 3); // monomgetvariabledegree
    v_173 = (*qfn2(fn))(fn, v_174, v_173);
    }
    env = stack[-9];
    v_173 = static_cast<LispObject>(lessp2(stack[0], v_173));
    v_173 = v_173 ? lisp_true : nil;
    env = stack[-9];
    if (v_173 == nil) goto v_50;
    v_173 = stack[-5];
    if (!car_legal(v_173)) v_173 = cdrerror(v_173); else
    v_173 = cdr(v_173);
    if (!car_legal(v_173)) v_173 = carerror(v_173); else
    v_173 = car(v_173);
    if (v_173 == nil) goto v_50;
    goto v_51;
v_50:
    goto v_46;
v_51:
    v_173 = stack[-5];
    if (!car_legal(v_173)) v_173 = cdrerror(v_173); else
    v_173 = cdr(v_173);
    if (!car_legal(v_173)) v_173 = carerror(v_173); else
    v_173 = car(v_173);
    stack[-5] = v_173;
    goto v_47;
v_46:
    v_173 = stack[-5];
    if (v_173 == nil) goto v_75;
    v_173 = stack[-5];
    if (!car_legal(v_173)) v_173 = carerror(v_173); else
    v_173 = car(v_173);
    if (!car_legal(v_173)) stack[0] = carerror(v_173); else
    stack[0] = car(v_173);
    v_174 = stack[-3];
    v_173 = stack[-8];
    {   LispObject fn = basic_elt(env, 3); // monomgetvariabledegree
    v_173 = (*qfn2(fn))(fn, v_174, v_173);
    }
    env = stack[-9];
    v_173 = static_cast<LispObject>(greaterp2(stack[0], v_173));
    v_173 = v_173 ? lisp_true : nil;
    env = stack[-9];
    if (v_173 == nil) goto v_75;
    v_175 = stack[-6];
    v_174 = stack[-8];
    v_173 = stack[-7];
    {   LispObject fn = basic_elt(env, 2); // janettreenodebuild
    v_173 = (*qfn3(fn))(fn, v_175, v_174, v_173);
    }
    env = stack[-9];
    stack[-4] = v_173;
    v_173 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-6] = v_173;
    v_173 = stack[-5];
    if (!car_legal(v_173)) stack[-2] = cdrerror(v_173); else
    stack[-2] = cdr(v_173);
    v_173 = stack[-5];
    if (!car_legal(v_173)) v_173 = carerror(v_173); else
    v_173 = car(v_173);
    if (!car_legal(v_173)) stack[-1] = carerror(v_173); else
    stack[-1] = car(v_173);
    v_173 = stack[-5];
    if (!car_legal(v_173)) v_173 = carerror(v_173); else
    v_173 = car(v_173);
    if (!car_legal(v_173)) stack[0] = cdrerror(v_173); else
    stack[0] = cdr(v_173);
    v_173 = stack[-5];
    if (!car_legal(v_173)) v_173 = cdrerror(v_173); else
    v_173 = cdr(v_173);
    if (!car_legal(v_173)) v_174 = carerror(v_173); else
    v_174 = car(v_173);
    v_173 = stack[-5];
    if (!car_legal(v_173)) v_173 = cdrerror(v_173); else
    v_173 = cdr(v_173);
    if (!car_legal(v_173)) v_173 = cdrerror(v_173); else
    v_173 = cdr(v_173);
    v_173 = cons(v_174, v_173);
    env = stack[-9];
    v_173 = acons(stack[-1], stack[0], v_173);
    env = stack[-9];
    {   LispObject fn = basic_elt(env, 4); // setcar
    v_173 = (*qfn2(fn))(fn, stack[-2], v_173);
    }
    env = stack[-9];
    v_173 = stack[-5];
    if (!car_legal(v_173)) v_174 = cdrerror(v_173); else
    v_174 = cdr(v_173);
    v_173 = stack[-4];
    if (!car_legal(v_173)) v_173 = cdrerror(v_173); else
    v_173 = cdr(v_173);
    if (!car_legal(v_173)) v_173 = cdrerror(v_173); else
    v_173 = cdr(v_173);
    {   LispObject fn = basic_elt(env, 5); // setcdr
    v_173 = (*qfn2(fn))(fn, v_174, v_173);
    }
    env = stack[-9];
    v_173 = stack[-5];
    if (!car_legal(v_173)) v_174 = carerror(v_173); else
    v_174 = car(v_173);
    v_173 = stack[-4];
    if (!car_legal(v_173)) v_173 = carerror(v_173); else
    v_173 = car(v_173);
    if (!car_legal(v_173)) v_173 = carerror(v_173); else
    v_173 = car(v_173);
    {   LispObject fn = basic_elt(env, 4); // setcar
    v_173 = (*qfn2(fn))(fn, v_174, v_173);
    }
    env = stack[-9];
    v_173 = stack[-5];
    if (!car_legal(v_173)) v_174 = carerror(v_173); else
    v_174 = car(v_173);
    v_173 = stack[-4];
    if (!car_legal(v_173)) v_173 = carerror(v_173); else
    v_173 = car(v_173);
    if (!car_legal(v_173)) v_173 = cdrerror(v_173); else
    v_173 = cdr(v_173);
    {   LispObject fn = basic_elt(env, 5); // setcdr
    v_173 = (*qfn2(fn))(fn, v_174, v_173);
    }
    env = stack[-9];
    goto v_73;
v_75:
    v_173 = stack[-5];
    if (v_173 == nil) goto v_128;
    v_173 = stack[-5];
    if (!car_legal(v_173)) v_173 = carerror(v_173); else
    v_173 = car(v_173);
    if (!car_legal(v_173)) stack[0] = carerror(v_173); else
    stack[0] = car(v_173);
    v_174 = stack[-3];
    v_173 = stack[-8];
    {   LispObject fn = basic_elt(env, 3); // monomgetvariabledegree
    v_173 = (*qfn2(fn))(fn, v_174, v_173);
    }
    env = stack[-9];
    if (equal(stack[0], v_173)) goto v_134;
    else goto v_135;
v_134:
    v_173 = stack[-5];
    if (!car_legal(v_173)) v_173 = cdrerror(v_173); else
    v_173 = cdr(v_173);
    if (!car_legal(v_173)) v_173 = cdrerror(v_173); else
    v_173 = cdr(v_173);
    goto v_133;
v_135:
    v_173 = nil;
    goto v_133;
    v_173 = nil;
v_133:
    if (v_173 == nil) goto v_128;
    stack[0] = stack[-6];
    v_174 = stack[-3];
    v_173 = stack[-8];
    {   LispObject fn = basic_elt(env, 3); // monomgetvariabledegree
    v_173 = (*qfn2(fn))(fn, v_174, v_173);
    }
    env = stack[-9];
    v_173 = difference2(stack[0], v_173);
    env = stack[-9];
    stack[-6] = v_173;
    v_173 = stack[-8];
    v_173 = add1(v_173);
    env = stack[-9];
    stack[-8] = v_173;
    v_173 = stack[-5];
    if (!car_legal(v_173)) v_173 = cdrerror(v_173); else
    v_173 = cdr(v_173);
    if (!car_legal(v_173)) v_173 = cdrerror(v_173); else
    v_173 = cdr(v_173);
    stack[-5] = v_173;
    goto v_73;
v_128:
    v_173 = stack[-5];
    if (v_173 == nil) goto v_160;
    v_173 = stack[-5];
    if (!car_legal(v_173)) stack[0] = cdrerror(v_173); else
    stack[0] = cdr(v_173);
    v_175 = stack[-6];
    v_174 = stack[-8];
    v_173 = stack[-7];
    {   LispObject fn = basic_elt(env, 2); // janettreenodebuild
    v_173 = (*qfn3(fn))(fn, v_175, v_174, v_173);
    }
    env = stack[-9];
    {   LispObject fn = basic_elt(env, 4); // setcar
    v_173 = (*qfn2(fn))(fn, stack[0], v_173);
    }
    env = stack[-9];
    v_173 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-6] = v_173;
    goto v_73;
v_160:
v_73:
    goto v_36;
v_35:
    goto v_22;
v_22:
    v_173 = nil;
    return onevalue(v_173);
}



// Code for ofsf_smeqtable

static LispObject CC_ofsf_smeqtable(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_23, v_24, v_25, v_26, v_27, v_28;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_26 = v_3;
    v_27 = v_2;
// end of prologue
    v_23 = basic_elt(env, 1); // ((equal (equal . equal) (neq . false) (geq . equal) (leq . equal) (greaterp . false) (lessp . false)) (neq (neq . neq) (geq
// . greaterp) (leq . lessp) (greaterp . greaterp) (lessp . lessp)) (geq (geq . geq) (leq . equal) (greaterp . greaterp) (lessp
// . false)) (leq (leq . leq) (greaterp . false) (lessp . lessp)) (greaterp (greaterp . greaterp) (lessp . false)) (lessp (lessp
// . lessp)))
    v_28 = v_23;
    v_25 = v_26;
    v_24 = v_27;
    v_23 = v_28;
    v_23 = Latsoc(nil, v_24, v_23);
    v_23 = Latsoc(nil, v_25, v_23);
    if (v_23 == nil) goto v_11;
    else goto v_10;
v_11:
    v_23 = v_27;
    v_24 = v_26;
    v_25 = v_28;
    v_24 = Latsoc(nil, v_24, v_25);
    v_23 = Latsoc(nil, v_23, v_24);
v_10:
    if (!car_legal(v_23)) v_23 = cdrerror(v_23); else
    v_23 = cdr(v_23);
    return onevalue(v_23);
}



// Code for ev_init

static LispObject CC_ev_init(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_4;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// end of prologue
    v_4 = nil;
    return onevalue(v_4);
}



// Code for spinnerprod

static LispObject CC_spinnerprod(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_104, v_105, v_106, v_107;
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
    stack[-4] = v_7;
    v_104 = v_6;
    v_105 = v_5;
    stack[-5] = v_4;
    v_106 = v_3;
    v_107 = v_2;
// end of prologue
    stack[-6] = v_105;
    v_105 = stack[-6];
    stack[-3] = v_105;
    if (!car_legal(v_104)) v_104 = cdrerror(v_104); else
    v_104 = cdr(v_104);
    stack[-1] = v_104;
v_21:
    v_104 = stack[-1];
    if (v_104 == nil) goto v_26;
    else goto v_27;
v_26:
    goto v_20;
v_27:
    v_104 = stack[-1];
    if (!car_legal(v_104)) v_104 = carerror(v_104); else
    v_104 = car(v_104);
    v_105 = v_104;
    v_104 = v_105;
    if (!car_legal(v_104)) v_104 = carerror(v_104); else
    v_104 = car(v_104);
    stack[-7] = v_104;
    v_104 = stack[-7];
    if (v_104 == nil) goto v_37;
    else goto v_38;
v_37:
    v_104 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-7] = v_104;
    goto v_36;
v_38:
v_36:
    v_104 = v_105;
    if (!car_legal(v_104)) v_104 = cdrerror(v_104); else
    v_104 = cdr(v_104);
    stack[-2] = v_104;
    v_104 = stack[-2];
    if (v_104 == nil) goto v_49;
    else goto v_50;
v_49:
    v_104 = lisp_true;
    goto v_48;
v_50:
    stack[0] = stack[-2];
    v_104 = nil;
    v_104 = ncons(v_104);
    env = stack[-8];
    v_104 = (equal(stack[0], v_104) ? lisp_true : nil);
    goto v_48;
    v_104 = nil;
v_48:
    if (v_104 == nil) goto v_46;
    v_104 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-2] = v_104;
    goto v_44;
v_46:
v_44:
    v_105 = stack[-7];
    v_104 = stack[-5];
    v_104 = static_cast<LispObject>(lesseq2(v_105, v_104));
    v_104 = v_104 ? lisp_true : nil;
    env = stack[-8];
    if (v_104 == nil) goto v_63;
    v_105 = stack[-7];
    v_104 = stack[-4];
    v_104 = Latsoc(nil, v_105, v_104);
    stack[-7] = v_104;
    v_104 = stack[-7];
    if (v_104 == nil) goto v_76;
    else goto v_77;
v_76:
    v_104 = lisp_true;
    goto v_75;
v_77:
    stack[0] = stack[-7];
    v_104 = nil;
    v_104 = ncons(v_104);
    env = stack[-8];
    v_104 = (equal(stack[0], v_104) ? lisp_true : nil);
    goto v_75;
    v_104 = nil;
v_75:
    if (v_104 == nil) goto v_73;
    goto v_71;
v_73:
    stack[0] = basic_elt(env, 1); // plus
    stack[-3] = stack[-6];
    v_106 = basic_elt(env, 2); // times
    v_105 = stack[-2];
    v_104 = stack[-7];
    if (!car_legal(v_104)) v_104 = cdrerror(v_104); else
    v_104 = cdr(v_104);
    v_104 = list3(v_106, v_105, v_104);
    env = stack[-8];
    v_104 = list3(stack[0], stack[-3], v_104);
    env = stack[-8];
    stack[-6] = v_104;
    v_104 = stack[-6];
    stack[-3] = v_104;
    goto v_71;
v_71:
    goto v_61;
v_63:
v_61:
    v_104 = stack[-1];
    if (!car_legal(v_104)) v_104 = cdrerror(v_104); else
    v_104 = cdr(v_104);
    stack[-1] = v_104;
    goto v_21;
v_20:
    v_104 = stack[-3];
    return onevalue(v_104);
}



// Code for dipequal

static LispObject CC_dipequal(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
v_7:
    v_52 = stack[-1];
    if (v_52 == nil) goto v_10;
    else goto v_11;
v_10:
    v_52 = stack[0];
    v_52 = (v_52 == nil ? lisp_true : nil);
    goto v_6;
v_11:
    v_52 = stack[0];
    if (v_52 == nil) goto v_15;
    else goto v_16;
v_15:
    v_52 = nil;
    goto v_6;
v_16:
    v_52 = stack[-1];
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    if (!car_legal(v_52)) v_53 = carerror(v_52); else
    v_53 = car(v_52);
    v_52 = stack[0];
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    if (!car_legal(v_52)) v_52 = carerror(v_52); else
    v_52 = car(v_52);
    if (equal(v_53, v_52)) goto v_23;
    else goto v_24;
v_23:
    v_52 = stack[-1];
    if (!car_legal(v_52)) v_53 = carerror(v_52); else
    v_53 = car(v_52);
    v_52 = stack[0];
    if (!car_legal(v_52)) v_52 = carerror(v_52); else
    v_52 = car(v_52);
    {   LispObject fn = basic_elt(env, 1); // evequal
    v_52 = (*qfn2(fn))(fn, v_53, v_52);
    }
    env = stack[-2];
    if (v_52 == nil) goto v_34;
    v_52 = stack[-1];
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    stack[-1] = v_52;
    v_52 = stack[0];
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    stack[0] = v_52;
    goto v_7;
v_34:
    v_52 = nil;
    goto v_6;
    goto v_22;
v_24:
    v_52 = nil;
    goto v_6;
v_22:
    goto v_9;
v_9:
    v_52 = nil;
v_6:
    return onevalue(v_52);
}



// Code for natnump

static LispObject CC_natnump(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_16, v_17;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_16 = v_2;
// end of prologue
    v_17 = v_16;
    v_17 = integerp(v_17);
    if (v_17 == nil) goto v_6;
    else goto v_7;
v_6:
    v_16 = nil;
    goto v_5;
v_7:
    v_17 = v_16;
    v_16 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
        return Lgeq_2(nil, v_17, v_16);
    v_16 = nil;
v_5:
    return onevalue(v_16);
}



// Code for defined_vertex

static LispObject CC_defined_vertex(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
v_7:
    v_29 = stack[-1];
    if (v_29 == nil) goto v_10;
    else goto v_11;
v_10:
    v_29 = lisp_true;
    goto v_6;
v_11:
    v_29 = stack[-1];
    if (!car_legal(v_29)) v_30 = carerror(v_29); else
    v_30 = car(v_29);
    v_29 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // memq_edgelist
    v_29 = (*qfn2(fn))(fn, v_30, v_29);
    }
    env = stack[-2];
    if (v_29 == nil) goto v_19;
    v_29 = stack[-1];
    if (!car_legal(v_29)) v_29 = cdrerror(v_29); else
    v_29 = cdr(v_29);
    stack[-1] = v_29;
    goto v_7;
v_19:
    v_29 = nil;
    goto v_6;
    goto v_9;
v_9:
    v_29 = nil;
v_6:
    return onevalue(v_29);
}



// Code for reduce!-weights

static LispObject CC_reduceKweights(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    stack[-6] = nil;
    v_56 = stack[-5];
    v_55 = stack[-3];
    {   LispObject fn = basic_elt(env, 1); // red!-weight
    v_55 = (*qfn2(fn))(fn, v_56, v_55);
    }
    env = stack[-7];
    stack[-2] = v_55;
v_12:
    v_56 = stack[-5];
    v_55 = stack[-4];
    {   LispObject fn = basic_elt(env, 2); // mv!-domainlist!-!+
    v_55 = (*qfn2(fn))(fn, v_56, v_55);
    }
    env = stack[-7];
    stack[-1] = v_55;
    v_56 = stack[-1];
    v_55 = stack[-3];
    {   LispObject fn = basic_elt(env, 1); // red!-weight
    v_55 = (*qfn2(fn))(fn, v_56, v_55);
    }
    env = stack[-7];
    stack[0] = v_55;
    v_56 = stack[0];
    v_55 = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // red!-weight!-less!-p
    v_55 = (*qfn2(fn))(fn, v_56, v_55);
    }
    env = stack[-7];
    if (v_55 == nil) goto v_26;
    v_55 = lisp_true;
    stack[-6] = v_55;
    v_55 = stack[-1];
    stack[-5] = v_55;
    v_55 = stack[0];
    stack[-2] = v_55;
    goto v_12;
v_26:
    v_55 = stack[-6];
    if (v_55 == nil) goto v_36;
    v_55 = stack[-5];
    goto v_11;
v_36:
v_13:
    v_56 = stack[-5];
    v_55 = stack[-4];
    {   LispObject fn = basic_elt(env, 4); // mv!-domainlist!-!-
    v_55 = (*qfn2(fn))(fn, v_56, v_55);
    }
    env = stack[-7];
    stack[-1] = v_55;
    v_56 = stack[-1];
    v_55 = stack[-3];
    {   LispObject fn = basic_elt(env, 1); // red!-weight
    v_55 = (*qfn2(fn))(fn, v_56, v_55);
    }
    env = stack[-7];
    stack[0] = v_55;
    v_56 = stack[0];
    v_55 = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // red!-weight!-less!-p
    v_55 = (*qfn2(fn))(fn, v_56, v_55);
    }
    env = stack[-7];
    if (v_55 == nil) goto v_48;
    v_55 = stack[-1];
    stack[-5] = v_55;
    v_55 = stack[0];
    stack[-2] = v_55;
    goto v_13;
v_48:
    v_55 = stack[-5];
v_11:
    return onevalue(v_55);
}



// Code for fs!:prin!:

static LispObject CC_fsTprinT(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_11 = basic_elt(env, 1); // "["
    {   LispObject fn = basic_elt(env, 3); // prin2!*
    v_11 = (*qfn1(fn))(fn, v_11);
    }
    env = stack[-1];
    v_11 = stack[0];
    if (!car_legal(v_11)) v_11 = cdrerror(v_11); else
    v_11 = cdr(v_11);
    {   LispObject fn = basic_elt(env, 4); // fs!:prin
    v_11 = (*qfn1(fn))(fn, v_11);
    }
    env = stack[-1];
    v_11 = basic_elt(env, 2); // "]"
    {
        LispObject fn = basic_elt(env, 3); // prin2!*
        return (*qfn1(fn))(fn, v_11);
    }
}



// Code for bagp

static LispObject CC_bagp(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_16, v_17;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_17 = v_2;
// end of prologue
    v_16 = v_17;
    if (!consp(v_16)) goto v_7;
    v_16 = v_17;
    if (!car_legal(v_16)) v_16 = carerror(v_16); else
    v_16 = car(v_16);
    v_17 = basic_elt(env, 1); // bag
        return Lflagp(nil, v_16, v_17);
v_7:
    v_16 = nil;
    goto v_5;
    v_16 = nil;
v_5:
    return onevalue(v_16);
}



// Code for bfminus

static LispObject CC_bfminus(LispObject env,
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
    if (!consp(v_15)) goto v_6;
    else goto v_7;
v_6:
    v_15 = v_16;
    return negate(v_15);
v_7:
    v_15 = v_16;
    {
        LispObject fn = basic_elt(env, 1); // minus!:
        return (*qfn1(fn))(fn, v_15);
    }
    v_15 = nil;
    return onevalue(v_15);
}



// Code for get!-new!-prime

static LispObject CC_getKnewKprime(LispObject env,
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    stack[-2] = v_2;
// end of prologue
    v_69 = qvalue(basic_elt(env, 1)); // !*force!-prime
    if (v_69 == nil) goto v_7;
    v_69 = qvalue(basic_elt(env, 1)); // !*force!-prime
    goto v_5;
v_7:
    stack[-3] = nil;
    v_69 = stack[-2];
    stack[-1] = v_69;
v_20:
    v_69 = stack[-1];
    if (v_69 == nil) goto v_24;
    else goto v_25;
v_24:
    goto v_19;
v_25:
    v_69 = stack[-1];
    if (!car_legal(v_69)) v_69 = carerror(v_69); else
    v_69 = car(v_69);
    stack[0] = v_69;
    v_70 = stack[0];
    v_69 = static_cast<LispObject>(512)+TAG_FIXNUM; // 32
    v_69 = static_cast<LispObject>(lessp2(v_70, v_69));
    v_69 = v_69 ? lisp_true : nil;
    env = stack[-4];
    if (v_69 == nil) goto v_34;
    v_70 = stack[0];
    v_69 = stack[-3];
    v_69 = cons(v_70, v_69);
    env = stack[-4];
    stack[-3] = v_69;
    goto v_32;
v_34:
v_32:
    v_69 = stack[-1];
    if (!car_legal(v_69)) v_69 = cdrerror(v_69); else
    v_69 = cdr(v_69);
    stack[-1] = v_69;
    goto v_20;
v_19:
v_16:
    v_69 = stack[-3];
    {   LispObject fn = basic_elt(env, 4); // random!-teeny!-prime
    v_69 = (*qfn1(fn))(fn, v_69);
    }
    env = stack[-4];
    stack[0] = v_69;
    if (v_69 == nil) goto v_45;
    else goto v_46;
v_45:
    {   LispObject fn = basic_elt(env, 5); // random!-small!-prime
    v_69 = (*qfn0(fn))(fn);
    }
    env = stack[-4];
    stack[0] = v_69;
    v_69 = basic_elt(env, 2); // all
    stack[-3] = v_69;
    goto v_44;
v_46:
    v_70 = stack[0];
    v_69 = stack[-3];
    v_69 = cons(v_70, v_69);
    env = stack[-4];
    stack[-3] = v_69;
    goto v_44;
v_44:
    v_70 = stack[0];
    v_69 = stack[-2];
    v_69 = Lmember(nil, v_70, v_69);
    if (v_69 == nil) goto v_60;
    else goto v_58;
v_60:
    v_70 = stack[0];
    v_69 = qvalue(basic_elt(env, 3)); // smallest!-prime
    v_69 = static_cast<LispObject>(lesseq2(v_70, v_69));
    v_69 = v_69 ? lisp_true : nil;
    env = stack[-4];
    if (v_69 == nil) goto v_64;
    else goto v_58;
v_64:
    goto v_59;
v_58:
    goto v_16;
v_59:
    v_69 = stack[0];
    goto v_5;
    v_69 = nil;
v_5:
    return onevalue(v_69);
}



// Code for girationalize!:

static LispObject CC_girationalizeT(LispObject env,
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
// space for vars preserved across procedure calls
    real_push(nil, nil, nil, nil, nil);
    real_push(nil);
    stack_popper stack_popper_var(7);
// copy arguments values to proper place
    stack[-4] = v_2;
// end of prologue
    stack[-5] = nil;
// Binding !*gcd
// FLUIDBIND: reloadenv=6 litvec-offset=1 saveloc=3
{   bind_fluid_stack bind_fluid_var(-6, 1, -3);
    setvalue(basic_elt(env, 1), nil); // !*gcd
    v_46 = lisp_true;
    setvalue(basic_elt(env, 1), v_46); // !*gcd
    stack[-1] = stack[-5];
    v_46 = stack[-4];
    if (!car_legal(v_46)) v_46 = cdrerror(v_46); else
    v_46 = cdr(v_46);
    stack[-5] = v_46;
    {   LispObject fn = basic_elt(env, 3); // conjgd
    v_46 = (*qfn1(fn))(fn, v_46);
    }
    env = stack[-6];
    stack[0] = v_46;
    if (equal(stack[-1], v_46)) goto v_13;
    else goto v_14;
v_13:
    v_46 = stack[-4];
    goto v_9;
v_14:
    stack[-2] = stack[0];
    v_47 = stack[-5];
    v_46 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // addf
    stack[-1] = (*qfn2(fn))(fn, v_47, v_46);
    }
    env = stack[-6];
    v_46 = stack[-5];
    {   LispObject fn = basic_elt(env, 5); // negf
    v_46 = (*qfn1(fn))(fn, v_46);
    }
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 4); // addf
    stack[0] = (*qfn2(fn))(fn, stack[0], v_46);
    }
    env = stack[-6];
    v_48 = basic_elt(env, 2); // !:gi!:
    v_47 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_46 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_46 = list2star(v_48, v_47, v_46);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 6); // multf
    v_46 = (*qfn2(fn))(fn, stack[0], v_46);
    }
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 7); // gcdf
    v_47 = (*qfn2(fn))(fn, stack[-1], v_46);
    }
    env = stack[-6];
    v_46 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    {   LispObject fn = basic_elt(env, 8); // quotf
    v_46 = (*qfn2(fn))(fn, v_47, v_46);
    }
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 9); // quotf!-fail
    v_46 = (*qfn2(fn))(fn, stack[-2], v_46);
    }
    env = stack[-6];
    stack[0] = v_46;
    v_46 = stack[-4];
    if (!car_legal(v_46)) v_47 = carerror(v_46); else
    v_47 = car(v_46);
    v_46 = stack[0];
    {   LispObject fn = basic_elt(env, 6); // multf
    stack[-1] = (*qfn2(fn))(fn, v_47, v_46);
    }
    env = stack[-6];
    v_47 = stack[-5];
    v_46 = stack[0];
    {   LispObject fn = basic_elt(env, 6); // multf
    v_46 = (*qfn2(fn))(fn, v_47, v_46);
    }
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 10); // gigcdsq
    v_46 = (*qfn2(fn))(fn, stack[-1], v_46);
    }
v_9:
    ;}  // end of a binding scope
    return onevalue(v_46);
}



// Code for talp_lssimpl

static LispObject CC_talp_lssimpl(LispObject env,
                         LispObject v_2)
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
    stack[0] = v_2;
// end of prologue
    v_101 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // talp_rnf
    v_101 = (*qfn1(fn))(fn, v_101);
    }
    env = stack[-5];
    stack[0] = v_101;
    v_101 = stack[0];
    if (!consp(v_101)) goto v_15;
    else goto v_16;
v_15:
    v_101 = lisp_true;
    goto v_14;
v_16:
    v_101 = stack[0];
    {   LispObject fn = basic_elt(env, 5); // talp_atfp
    v_101 = (*qfn1(fn))(fn, v_101);
    }
    env = stack[-5];
    goto v_14;
    v_101 = nil;
v_14:
    if (v_101 == nil) goto v_12;
    v_101 = stack[0];
    goto v_6;
v_12:
    v_101 = stack[0];
    {   LispObject fn = basic_elt(env, 6); // talp_op
    v_101 = (*qfn1(fn))(fn, v_101);
    }
    env = stack[-5];
    v_103 = v_101;
    v_102 = v_103;
    v_101 = basic_elt(env, 1); // or
    if (v_102 == v_101) goto v_32;
    else goto v_33;
v_32:
    v_101 = lisp_true;
    goto v_31;
v_33:
    v_102 = v_103;
    v_101 = basic_elt(env, 2); // and
    v_101 = (v_102 == v_101 ? lisp_true : nil);
    goto v_31;
    v_101 = nil;
v_31:
    if (v_101 == nil) goto v_29;
    stack[-4] = v_103;
    v_101 = stack[0];
    {   LispObject fn = basic_elt(env, 7); // talp_argl
    v_101 = (*qfn1(fn))(fn, v_101);
    }
    env = stack[-5];
    stack[-3] = v_101;
    v_101 = stack[-3];
    if (v_101 == nil) goto v_56;
    else goto v_57;
v_56:
    v_101 = nil;
    goto v_50;
v_57:
    v_101 = stack[-3];
    if (!car_legal(v_101)) v_101 = carerror(v_101); else
    v_101 = car(v_101);
    {   LispObject fn = basic_elt(env, 0); // talp_lssimpl
    v_101 = (*qfn1(fn))(fn, v_101);
    }
    env = stack[-5];
    v_101 = ncons(v_101);
    env = stack[-5];
    stack[-1] = v_101;
    stack[-2] = v_101;
v_51:
    v_101 = stack[-3];
    if (!car_legal(v_101)) v_101 = cdrerror(v_101); else
    v_101 = cdr(v_101);
    stack[-3] = v_101;
    v_101 = stack[-3];
    if (v_101 == nil) goto v_70;
    else goto v_71;
v_70:
    v_101 = stack[-2];
    goto v_50;
v_71:
    stack[0] = stack[-1];
    v_101 = stack[-3];
    if (!car_legal(v_101)) v_101 = carerror(v_101); else
    v_101 = car(v_101);
    {   LispObject fn = basic_elt(env, 0); // talp_lssimpl
    v_101 = (*qfn1(fn))(fn, v_101);
    }
    env = stack[-5];
    v_101 = ncons(v_101);
    env = stack[-5];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_101);
    v_101 = stack[-1];
    if (!car_legal(v_101)) v_101 = cdrerror(v_101); else
    v_101 = cdr(v_101);
    stack[-1] = v_101;
    goto v_51;
v_50:
    v_101 = cons(stack[-4], v_101);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 8); // talp_lssimpl1
    v_101 = (*qfn1(fn))(fn, v_101);
    }
    env = stack[-5];
    {
        LispObject fn = basic_elt(env, 4); // talp_rnf
        return (*qfn1(fn))(fn, v_101);
    }
v_29:
    v_102 = v_103;
    v_101 = basic_elt(env, 3); // (ex all)
    v_101 = Lmemq(nil, v_102, v_101);
    if (v_101 == nil) goto v_85;
    stack[-2] = v_103;
    v_101 = stack[0];
    if (!car_legal(v_101)) v_101 = cdrerror(v_101); else
    v_101 = cdr(v_101);
    if (!car_legal(v_101)) stack[-1] = carerror(v_101); else
    stack[-1] = car(v_101);
    v_101 = stack[0];
    if (!car_legal(v_101)) v_101 = cdrerror(v_101); else
    v_101 = cdr(v_101);
    if (!car_legal(v_101)) v_101 = cdrerror(v_101); else
    v_101 = cdr(v_101);
    if (!car_legal(v_101)) v_101 = carerror(v_101); else
    v_101 = car(v_101);
    {   LispObject fn = basic_elt(env, 0); // talp_lssimpl
    v_101 = (*qfn1(fn))(fn, v_101);
    }
    env = stack[-5];
    v_101 = ncons(v_101);
    env = stack[-5];
    v_101 = list2star(stack[-2], stack[-1], v_101);
    env = stack[-5];
    {
        LispObject fn = basic_elt(env, 4); // talp_rnf
        return (*qfn1(fn))(fn, v_101);
    }
v_85:
    v_101 = nil;
v_6:
    return onevalue(v_101);
}



// Code for bc_dcont

static LispObject CC_bc_dcont(LispObject env,
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
        LispObject fn = basic_elt(env, 1); // sfto_dcontentf
        return (*qfn1(fn))(fn, v_7);
    }
}



// Code for cr!:prep

static LispObject CC_crTprep(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_19 = basic_elt(env, 1); // !:rd!:
    v_18 = stack[0];
    if (!car_legal(v_18)) v_18 = cdrerror(v_18); else
    v_18 = cdr(v_18);
    if (!car_legal(v_18)) v_18 = carerror(v_18); else
    v_18 = car(v_18);
    v_18 = cons(v_19, v_18);
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 2); // rd!:prep
    stack[-1] = (*qfn1(fn))(fn, v_18);
    }
    env = stack[-2];
    v_19 = basic_elt(env, 1); // !:rd!:
    v_18 = stack[0];
    if (!car_legal(v_18)) v_18 = cdrerror(v_18); else
    v_18 = cdr(v_18);
    if (!car_legal(v_18)) v_18 = cdrerror(v_18); else
    v_18 = cdr(v_18);
    v_18 = cons(v_19, v_18);
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 2); // rd!:prep
    v_18 = (*qfn1(fn))(fn, v_18);
    }
    env = stack[-2];
    v_18 = cons(stack[-1], v_18);
    env = stack[-2];
    {
        LispObject fn = basic_elt(env, 3); // crprep1
        return (*qfn1(fn))(fn, v_18);
    }
}



// Code for vdplsort

static LispObject CC_vdplsort(LispObject env,
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
    v_7 = basic_elt(env, 1); // vdpvevlcomp
    {
        LispObject fn = basic_elt(env, 2); // sort
        return (*qfn2(fn))(fn, v_8, v_7);
    }
}



setup_type const u47_setup[] =
{
    {"ofsf_smmkatl-and1",       G0W3,     G1W3,     G2W3,     CC_ofsf_smmkatlKand1,G4W3},
    {"simpx1",                  G0W3,     G1W3,     G2W3,     CC_simpx1,G4W3},
    {"vdp_monp",                G0W1,     CC_vdp_monp,G2W1,   G3W1,     G4W1},
    {"dip-nc-ev-prod",          G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_dipKncKevKprod},
    {"lndepends",               G0W2,     G1W2,     CC_lndepends,G3W2,  G4W2},
    {"listquotient",            G0W2,     G1W2,     CC_listquotient,G3W2,G4W2},
    {"vecsimp*",                G0W1,     CC_vecsimpH,G2W1,   G3W1,     G4W1},
    {"verify_tens_ids",         G0W1,     CC_verify_tens_ids,G2W1,G3W1, G4W1},
    {"evaluate-in-order-mod-p", G0W2,     G1W2,     CC_evaluateKinKorderKmodKp,G3W2,G4W2},
    {"domainp_list",            G0W1,     CC_domainp_list,G2W1,G3W1,    G4W1},
    {"*a2kwoweight",            G0W1,     CC_Ha2kwoweight,G2W1,G3W1,    G4W1},
    {"drop_dec_with",           G0W3,     G1W3,     G2W3,     CC_drop_dec_with,G4W3},
    {"cl_sordp",                G0W2,     G1W2,     CC_cl_sordp,G3W2,   G4W2},
    {"rl_sacat",                G0W3,     G1W3,     G2W3,     CC_rl_sacat,G4W3},
    {"acfsf_clnegrel",          G0W2,     G1W2,     CC_acfsf_clnegrel,G3W2,G4W2},
    {"dipretimes",              G0W1,     CC_dipretimes,G2W1, G3W1,     G4W1},
    {"indordln",                G0W1,     CC_indordln,G2W1,   G3W1,     G4W1},
    {"free",                    G0W1,     CC_free,  G2W1,     G3W1,     G4W1},
    {"*multf",                  G0W2,     G1W2,     CC_Hmultf,G3W2,     G4W2},
    {"nonlnr",                  G0W2,     G1W2,     CC_nonlnr,G3W2,     G4W2},
    {"janettreeinsert",         G0W1,     CC_janettreeinsert,G2W1,G3W1, G4W1},
    {"ofsf_smeqtable",          G0W2,     G1W2,     CC_ofsf_smeqtable,G3W2,G4W2},
    {"ev_init",                 CC_ev_init,G1W0,    G2W0,     G3W0,     G4W0},
    {"spinnerprod",             G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_spinnerprod},
    {"dipequal",                G0W2,     G1W2,     CC_dipequal,G3W2,   G4W2},
    {"natnump",                 G0W1,     CC_natnump,G2W1,    G3W1,     G4W1},
    {"defined_vertex",          G0W2,     G1W2,     CC_defined_vertex,G3W2,G4W2},
    {"reduce-weights",          G0W3,     G1W3,     G2W3,     CC_reduceKweights,G4W3},
    {"fs:prin:",                G0W1,     CC_fsTprinT,G2W1,   G3W1,     G4W1},
    {"bagp",                    G0W1,     CC_bagp,  G2W1,     G3W1,     G4W1},
    {"bfminus",                 G0W1,     CC_bfminus,G2W1,    G3W1,     G4W1},
    {"get-new-prime",           G0W1,     CC_getKnewKprime,G2W1,G3W1,   G4W1},
    {"girationalize:",          G0W1,     CC_girationalizeT,G2W1,G3W1,  G4W1},
    {"talp_lssimpl",            G0W1,     CC_talp_lssimpl,G2W1,G3W1,    G4W1},
    {"bc_dcont",                G0W1,     CC_bc_dcont,G2W1,   G3W1,     G4W1},
    {"cr:prep",                 G0W1,     CC_crTprep,G2W1,    G3W1,     G4W1},
    {"vdplsort",                G0W1,     CC_vdplsort,G2W1,   G3W1,     G4W1},
    {nullptr, 
        reinterpret_cast<no_args *>(
            reinterpret_cast<uintptr_t>("u47")),
        reinterpret_cast<one_arg *>(
            reinterpret_cast<uintptr_t>("157940 6721509 9423787")),
        nullptr, nullptr, nullptr}
};

// end of generated code
