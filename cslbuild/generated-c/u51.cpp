
// $destdir/u51.c        Machine generated C code

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


// Code for symmetrize!-inds

static LispObject CC_symmetrizeKinds(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_244, v_245;
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
    v_244 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-10] = v_244;
    v_244 = stack[-9];
    stack[-7] = v_244;
    v_244 = stack[-7];
    if (v_244 == nil) goto v_21;
    else goto v_22;
v_21:
    v_244 = nil;
    goto v_16;
v_22:
    v_244 = stack[-7];
    if (!car_legal(v_244)) v_244 = carerror(v_244); else
    v_244 = car(v_244);
    v_245 = v_244;
    if (!consp(v_245)) goto v_31;
    else goto v_32;
v_31:
    v_245 = stack[-8];
    {   LispObject fn = basic_elt(env, 1); // nth
    v_244 = (*qfn2(fn))(fn, v_245, v_244);
    }
    env = stack[-11];
    goto v_30;
v_32:
    stack[-3] = v_244;
    v_244 = stack[-3];
    if (v_244 == nil) goto v_48;
    else goto v_49;
v_48:
    v_244 = nil;
    goto v_43;
v_49:
    v_244 = stack[-3];
    if (!car_legal(v_244)) v_244 = carerror(v_244); else
    v_244 = car(v_244);
    v_245 = stack[-8];
    {   LispObject fn = basic_elt(env, 1); // nth
    v_244 = (*qfn2(fn))(fn, v_245, v_244);
    }
    env = stack[-11];
    v_244 = ncons(v_244);
    env = stack[-11];
    stack[-1] = v_244;
    stack[-2] = v_244;
v_44:
    v_244 = stack[-3];
    if (!car_legal(v_244)) v_244 = cdrerror(v_244); else
    v_244 = cdr(v_244);
    stack[-3] = v_244;
    v_244 = stack[-3];
    if (v_244 == nil) goto v_63;
    else goto v_64;
v_63:
    v_244 = stack[-2];
    goto v_43;
v_64:
    stack[0] = stack[-1];
    v_244 = stack[-3];
    if (!car_legal(v_244)) v_244 = carerror(v_244); else
    v_244 = car(v_244);
    v_245 = stack[-8];
    {   LispObject fn = basic_elt(env, 1); // nth
    v_244 = (*qfn2(fn))(fn, v_245, v_244);
    }
    env = stack[-11];
    v_244 = ncons(v_244);
    env = stack[-11];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_244);
    v_244 = stack[-1];
    if (!car_legal(v_244)) v_244 = cdrerror(v_244); else
    v_244 = cdr(v_244);
    stack[-1] = v_244;
    goto v_44;
v_43:
    goto v_30;
    v_244 = nil;
v_30:
    v_244 = ncons(v_244);
    env = stack[-11];
    stack[-5] = v_244;
    stack[-6] = v_244;
v_17:
    v_244 = stack[-7];
    if (!car_legal(v_244)) v_244 = cdrerror(v_244); else
    v_244 = cdr(v_244);
    stack[-7] = v_244;
    v_244 = stack[-7];
    if (v_244 == nil) goto v_82;
    else goto v_83;
v_82:
    v_244 = stack[-6];
    goto v_16;
v_83:
    stack[-4] = stack[-5];
    v_244 = stack[-7];
    if (!car_legal(v_244)) v_244 = carerror(v_244); else
    v_244 = car(v_244);
    v_245 = v_244;
    if (!consp(v_245)) goto v_93;
    else goto v_94;
v_93:
    v_245 = stack[-8];
    {   LispObject fn = basic_elt(env, 1); // nth
    v_244 = (*qfn2(fn))(fn, v_245, v_244);
    }
    env = stack[-11];
    goto v_92;
v_94:
    stack[-3] = v_244;
    v_244 = stack[-3];
    if (v_244 == nil) goto v_110;
    else goto v_111;
v_110:
    v_244 = nil;
    goto v_105;
v_111:
    v_244 = stack[-3];
    if (!car_legal(v_244)) v_244 = carerror(v_244); else
    v_244 = car(v_244);
    v_245 = stack[-8];
    {   LispObject fn = basic_elt(env, 1); // nth
    v_244 = (*qfn2(fn))(fn, v_245, v_244);
    }
    env = stack[-11];
    v_244 = ncons(v_244);
    env = stack[-11];
    stack[-1] = v_244;
    stack[-2] = v_244;
v_106:
    v_244 = stack[-3];
    if (!car_legal(v_244)) v_244 = cdrerror(v_244); else
    v_244 = cdr(v_244);
    stack[-3] = v_244;
    v_244 = stack[-3];
    if (v_244 == nil) goto v_125;
    else goto v_126;
v_125:
    v_244 = stack[-2];
    goto v_105;
v_126:
    stack[0] = stack[-1];
    v_244 = stack[-3];
    if (!car_legal(v_244)) v_244 = carerror(v_244); else
    v_244 = car(v_244);
    v_245 = stack[-8];
    {   LispObject fn = basic_elt(env, 1); // nth
    v_244 = (*qfn2(fn))(fn, v_245, v_244);
    }
    env = stack[-11];
    v_244 = ncons(v_244);
    env = stack[-11];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_244);
    v_244 = stack[-1];
    if (!car_legal(v_244)) v_244 = cdrerror(v_244); else
    v_244 = cdr(v_244);
    stack[-1] = v_244;
    goto v_106;
v_105:
    goto v_92;
    v_244 = nil;
v_92:
    v_244 = ncons(v_244);
    env = stack[-11];
    if (!car_legal(stack[-4])) rplacd_fails(stack[-4]);
    setcdr(stack[-4], v_244);
    v_244 = stack[-5];
    if (!car_legal(v_244)) v_244 = cdrerror(v_244); else
    v_244 = cdr(v_244);
    stack[-5] = v_244;
    goto v_17;
v_16:
    stack[-5] = v_244;
    v_244 = stack[-5];
    if (!car_legal(v_244)) v_244 = carerror(v_244); else
    v_244 = car(v_244);
    if (!consp(v_244)) goto v_145;
    else goto v_146;
v_145:
    v_244 = stack[-5];
    {   LispObject fn = basic_elt(env, 2); // indordn
    v_244 = (*qfn1(fn))(fn, v_244);
    }
    env = stack[-11];
    goto v_144;
v_146:
    v_244 = stack[-5];
    {   LispObject fn = basic_elt(env, 3); // indordln
    v_244 = (*qfn1(fn))(fn, v_244);
    }
    env = stack[-11];
    {   LispObject fn = basic_elt(env, 4); // flatindl
    v_244 = (*qfn1(fn))(fn, v_244);
    }
    env = stack[-11];
    goto v_144;
    v_244 = nil;
v_144:
    stack[0] = v_244;
    v_244 = stack[-9];
    if (!car_legal(v_244)) v_244 = carerror(v_244); else
    v_244 = car(v_244);
    if (!consp(v_244)) goto v_159;
    v_244 = stack[-9];
    {   LispObject fn = basic_elt(env, 4); // flatindl
    v_244 = (*qfn1(fn))(fn, v_244);
    }
    env = stack[-11];
    stack[-9] = v_244;
    goto v_157;
v_159:
v_157:
    v_245 = stack[-9];
    v_244 = stack[0];
    {   LispObject fn = basic_elt(env, 5); // pair
    v_244 = (*qfn2(fn))(fn, v_245, v_244);
    }
    env = stack[-11];
    stack[-5] = v_244;
    stack[-6] = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_244 = stack[-8];
    stack[-7] = v_244;
    v_244 = stack[-7];
    if (v_244 == nil) goto v_178;
    else goto v_179;
v_178:
    v_244 = nil;
    goto v_173;
v_179:
    v_244 = stack[-7];
    if (!car_legal(v_244)) v_244 = carerror(v_244); else
    v_244 = car(v_244);
    stack[-1] = v_244;
    v_244 = stack[-5];
    if (v_244 == nil) goto v_189;
    v_244 = stack[-5];
    if (!car_legal(v_244)) v_244 = carerror(v_244); else
    v_244 = car(v_244);
    if (!car_legal(v_244)) stack[0] = carerror(v_244); else
    stack[0] = car(v_244);
    v_244 = stack[-10];
    v_244 = add1(v_244);
    env = stack[-11];
    stack[-10] = v_244;
    if (equal(stack[0], v_244)) goto v_192;
    else goto v_189;
v_192:
    v_244 = stack[-5];
    if (!car_legal(v_244)) v_244 = carerror(v_244); else
    v_244 = car(v_244);
    if (!car_legal(v_244)) v_244 = cdrerror(v_244); else
    v_244 = cdr(v_244);
    v_245 = v_244;
    v_244 = stack[-5];
    if (!car_legal(v_244)) v_244 = cdrerror(v_244); else
    v_244 = cdr(v_244);
    stack[-5] = v_244;
    v_244 = v_245;
    goto v_187;
v_189:
    v_244 = stack[-1];
    goto v_187;
    v_244 = nil;
v_187:
    v_244 = ncons(v_244);
    env = stack[-11];
    stack[-3] = v_244;
    stack[-4] = v_244;
v_174:
    v_244 = stack[-7];
    if (!car_legal(v_244)) v_244 = cdrerror(v_244); else
    v_244 = cdr(v_244);
    stack[-7] = v_244;
    v_244 = stack[-7];
    if (v_244 == nil) goto v_211;
    else goto v_212;
v_211:
    v_244 = stack[-4];
    goto v_173;
v_212:
    stack[-2] = stack[-3];
    v_244 = stack[-7];
    if (!car_legal(v_244)) v_244 = carerror(v_244); else
    v_244 = car(v_244);
    stack[-1] = v_244;
    v_244 = stack[-5];
    if (v_244 == nil) goto v_223;
    v_244 = stack[-5];
    if (!car_legal(v_244)) v_244 = carerror(v_244); else
    v_244 = car(v_244);
    if (!car_legal(v_244)) stack[0] = carerror(v_244); else
    stack[0] = car(v_244);
    v_244 = stack[-10];
    v_244 = add1(v_244);
    env = stack[-11];
    stack[-10] = v_244;
    if (equal(stack[0], v_244)) goto v_226;
    else goto v_223;
v_226:
    v_244 = stack[-5];
    if (!car_legal(v_244)) v_244 = carerror(v_244); else
    v_244 = car(v_244);
    if (!car_legal(v_244)) v_244 = cdrerror(v_244); else
    v_244 = cdr(v_244);
    v_245 = v_244;
    v_244 = stack[-5];
    if (!car_legal(v_244)) v_244 = cdrerror(v_244); else
    v_244 = cdr(v_244);
    stack[-5] = v_244;
    v_244 = v_245;
    goto v_221;
v_223:
    v_244 = stack[-1];
    goto v_221;
    v_244 = nil;
v_221:
    v_244 = ncons(v_244);
    env = stack[-11];
    if (!car_legal(stack[-2])) rplacd_fails(stack[-2]);
    setcdr(stack[-2], v_244);
    v_244 = stack[-3];
    if (!car_legal(v_244)) v_244 = cdrerror(v_244); else
    v_244 = cdr(v_244);
    stack[-3] = v_244;
    goto v_174;
v_173:
    {
        LispObject v_257 = stack[-6];
        return cons(v_257, v_244);
    }
    return onevalue(v_244);
}



// Code for combin

static LispObject CC_combin(LispObject env,
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
    stack[-2] = v_3;
    stack[-3] = v_2;
// end of prologue
    v_67 = stack[-3];
    v_66 = stack[-2];
    v_66 = static_cast<LispObject>(greaterp2(v_67, v_66));
    v_66 = v_66 ? lisp_true : nil;
    env = stack[-5];
    if (v_66 == nil) goto v_8;
    v_66 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_6;
v_8:
    v_66 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-1] = v_66;
    stack[-4] = v_66;
    v_67 = stack[-2];
    v_66 = stack[-3];
    v_66 = difference2(v_67, v_66);
    env = stack[-5];
    v_66 = add1(v_66);
    env = stack[-5];
    stack[0] = v_66;
v_25:
    v_67 = stack[-2];
    v_66 = stack[0];
    v_66 = difference2(v_67, v_66);
    env = stack[-5];
    v_66 = Lminusp(nil, v_66);
    env = stack[-5];
    if (v_66 == nil) goto v_33;
    goto v_24;
v_33:
    v_67 = stack[-4];
    v_66 = stack[0];
    v_66 = times2(v_67, v_66);
    env = stack[-5];
    stack[-4] = v_66;
    v_66 = stack[0];
    v_66 = add1(v_66);
    env = stack[-5];
    stack[0] = v_66;
    goto v_25;
v_24:
    v_66 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[0] = v_66;
v_47:
    v_67 = stack[-3];
    v_66 = stack[0];
    v_66 = difference2(v_67, v_66);
    env = stack[-5];
    v_66 = Lminusp(nil, v_66);
    env = stack[-5];
    if (v_66 == nil) goto v_52;
    goto v_46;
v_52:
    v_67 = stack[-1];
    v_66 = stack[0];
    v_66 = times2(v_67, v_66);
    env = stack[-5];
    stack[-1] = v_66;
    v_66 = stack[0];
    v_66 = add1(v_66);
    env = stack[-5];
    stack[0] = v_66;
    goto v_47;
v_46:
    v_67 = stack[-4];
    v_66 = stack[-1];
    return quot2(v_67, v_66);
    goto v_6;
    v_66 = nil;
v_6:
    return onevalue(v_66);
}



// Code for dv_skelsplit

static LispObject CC_dv_skelsplit(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_313, v_314, v_315;
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
    push(nil, nil);
    stack_popper stack_popper_var(13);
// copy arguments values to proper place
    stack[-10] = v_2;
// end of prologue
    v_313 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-5] = v_313;
    v_313 = stack[-10];
    {   LispObject fn = basic_elt(env, 10); // listp
    v_313 = (*qfn1(fn))(fn, v_313);
    }
    env = stack[-12];
    if (v_313 == nil) goto v_22;
    v_313 = stack[-10];
    if (!car_legal(v_313)) v_313 = cdrerror(v_313); else
    v_313 = cdr(v_313);
    if (!car_legal(v_313)) v_313 = carerror(v_313); else
    v_313 = car(v_313);
    {   LispObject fn = basic_elt(env, 10); // listp
    v_313 = (*qfn1(fn))(fn, v_313);
    }
    env = stack[-12];
    if (v_313 == nil) goto v_28;
    v_313 = stack[-10];
    if (!car_legal(v_313)) v_313 = cdrerror(v_313); else
    v_313 = cdr(v_313);
    if (!car_legal(v_313)) v_313 = carerror(v_313); else
    v_313 = car(v_313);
    if (!car_legal(v_313)) v_314 = carerror(v_313); else
    v_314 = car(v_313);
    v_313 = basic_elt(env, 1); // list
    if (v_314 == v_313) goto v_34;
    else goto v_28;
v_34:
    v_313 = stack[-10];
    if (!car_legal(v_313)) v_313 = cdrerror(v_313); else
    v_313 = cdr(v_313);
    if (!car_legal(v_313)) v_313 = carerror(v_313); else
    v_313 = car(v_313);
    goto v_26;
v_28:
    v_313 = nil;
v_26:
    goto v_20;
v_22:
    v_313 = nil;
v_20:
    stack[-11] = v_313;
    v_313 = stack[-10];
    {   LispObject fn = basic_elt(env, 11); // dummyp
    v_313 = (*qfn1(fn))(fn, v_313);
    }
    env = stack[-12];
    stack[-6] = v_313;
    if (v_313 == nil) goto v_46;
    stack[-3] = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-2] = stack[-6];
    stack[-1] = basic_elt(env, 2); // !~dv
    stack[0] = basic_elt(env, 3); // !*
    v_313 = stack[-6];
    v_313 = ncons(v_313);
    env = stack[-12];
    v_313 = list2star(stack[-1], stack[0], v_313);
    {
        LispObject v_328 = stack[-3];
        LispObject v_329 = stack[-2];
        return list3(v_328, v_329, v_313);
    }
v_46:
    v_313 = stack[-10];
    {   LispObject fn = basic_elt(env, 10); // listp
    v_313 = (*qfn1(fn))(fn, v_313);
    }
    env = stack[-12];
    if (v_313 == nil) goto v_61;
    else goto v_62;
v_61:
    v_313 = lisp_true;
    goto v_60;
v_62:
    v_313 = stack[-11];
    if (v_313 == nil) goto v_70;
    else goto v_71;
v_70:
    v_313 = nil;
    goto v_69;
v_71:
    v_313 = stack[-10];
    if (!car_legal(v_313)) v_313 = cdrerror(v_313); else
    v_313 = cdr(v_313);
    if (!car_legal(v_313)) v_313 = cdrerror(v_313); else
    v_313 = cdr(v_313);
    v_313 = (v_313 == nil ? lisp_true : nil);
    goto v_69;
    v_313 = nil;
v_69:
    goto v_60;
    v_313 = nil;
v_60:
    if (v_313 == nil) goto v_58;
    stack[-1] = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[0] = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_313 = stack[-10];
    v_313 = ncons(v_313);
    {
        LispObject v_330 = stack[-1];
        LispObject v_331 = stack[0];
        return list3(v_330, v_331, v_313);
    }
v_58:
    v_313 = stack[-10];
    if (!car_legal(v_313)) v_314 = carerror(v_313); else
    v_314 = car(v_313);
    v_313 = basic_elt(env, 4); // symtree
    v_313 = get(v_314, v_313);
    env = stack[-12];
    stack[-9] = v_313;
    v_313 = stack[-9];
    if (v_313 == nil) goto v_91;
    else goto v_92;
v_91:
    v_313 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-3] = v_313;
    v_313 = stack[-11];
    if (v_313 == nil) goto v_111;
    v_313 = stack[-10];
    if (!car_legal(v_313)) v_313 = cdrerror(v_313); else
    v_313 = cdr(v_313);
    if (!car_legal(v_313)) v_313 = cdrerror(v_313); else
    v_313 = cdr(v_313);
    goto v_109;
v_111:
    v_313 = stack[-10];
    if (!car_legal(v_313)) v_313 = cdrerror(v_313); else
    v_313 = cdr(v_313);
    goto v_109;
    v_313 = nil;
v_109:
    v_314 = Llength(nil, v_313);
    env = stack[-12];
    v_313 = stack[-3];
    v_313 = difference2(v_314, v_313);
    env = stack[-12];
    v_313 = Lminusp(nil, v_313);
    env = stack[-12];
    if (v_313 == nil) goto v_104;
    v_313 = nil;
    goto v_98;
v_104:
    v_313 = stack[-3];
    v_313 = ncons(v_313);
    env = stack[-12];
    stack[-1] = v_313;
    stack[-2] = v_313;
v_99:
    v_313 = stack[-3];
    v_313 = add1(v_313);
    env = stack[-12];
    stack[-3] = v_313;
    v_313 = stack[-11];
    if (v_313 == nil) goto v_136;
    v_313 = stack[-10];
    if (!car_legal(v_313)) v_313 = cdrerror(v_313); else
    v_313 = cdr(v_313);
    if (!car_legal(v_313)) v_313 = cdrerror(v_313); else
    v_313 = cdr(v_313);
    goto v_134;
v_136:
    v_313 = stack[-10];
    if (!car_legal(v_313)) v_313 = cdrerror(v_313); else
    v_313 = cdr(v_313);
    goto v_134;
    v_313 = nil;
v_134:
    v_314 = Llength(nil, v_313);
    env = stack[-12];
    v_313 = stack[-3];
    v_313 = difference2(v_314, v_313);
    env = stack[-12];
    v_313 = Lminusp(nil, v_313);
    env = stack[-12];
    if (v_313 == nil) goto v_129;
    v_313 = stack[-2];
    goto v_98;
v_129:
    stack[0] = stack[-1];
    v_313 = stack[-3];
    v_313 = ncons(v_313);
    env = stack[-12];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_313);
    v_313 = stack[-1];
    if (!car_legal(v_313)) v_313 = cdrerror(v_313); else
    v_313 = cdr(v_313);
    stack[-1] = v_313;
    goto v_99;
v_98:
    stack[-9] = v_313;
    v_313 = stack[-10];
    if (!car_legal(v_313)) v_313 = carerror(v_313); else
    v_313 = car(v_313);
    if (!symbolp(v_313)) v_313 = nil;
    else { v_313 = qfastgets(v_313);
           if (v_313 != nil) { v_313 = elt(v_313, 43); // symmetric
#ifdef RECORD_GET
             if (v_313 == SPID_NOPROP)
                record_get(elt(fastget_names, 43), 0),
                v_313 = nil;
             else record_get(elt(fastget_names, 43), 1),
                v_313 = lisp_true; }
           else record_get(elt(fastget_names, 43), 0); }
#else
             if (v_313 == SPID_NOPROP) v_313 = nil; else v_313 = lisp_true; }}
#endif
    if (v_313 == nil) goto v_156;
    v_314 = basic_elt(env, 5); // !+
    v_313 = stack[-9];
    v_313 = cons(v_314, v_313);
    env = stack[-12];
    stack[-9] = v_313;
    goto v_154;
v_156:
    v_313 = stack[-10];
    if (!car_legal(v_313)) v_314 = carerror(v_313); else
    v_314 = car(v_313);
    v_313 = basic_elt(env, 6); // antisymmetric
    v_313 = Lflagp(nil, v_314, v_313);
    env = stack[-12];
    if (v_313 == nil) goto v_164;
    v_314 = basic_elt(env, 7); // !-
    v_313 = stack[-9];
    v_313 = cons(v_314, v_313);
    env = stack[-12];
    stack[-9] = v_313;
    goto v_154;
v_164:
    v_314 = basic_elt(env, 3); // !*
    v_313 = stack[-9];
    v_313 = cons(v_314, v_313);
    env = stack[-12];
    stack[-9] = v_313;
    goto v_154;
v_154:
    goto v_90;
v_92:
v_90:
    v_313 = stack[-11];
    if (v_313 == nil) goto v_183;
    v_313 = stack[-10];
    if (!car_legal(v_313)) v_313 = cdrerror(v_313); else
    v_313 = cdr(v_313);
    if (!car_legal(v_313)) v_313 = cdrerror(v_313); else
    v_313 = cdr(v_313);
    goto v_181;
v_183:
    v_313 = stack[-10];
    if (!car_legal(v_313)) v_313 = cdrerror(v_313); else
    v_313 = cdr(v_313);
    goto v_181;
    v_313 = nil;
v_181:
    v_313 = Llength(nil, v_313);
    env = stack[-12];
    v_313 = sub1(v_313);
    env = stack[-12];
    v_313 = Lmkvect(nil, v_313);
    env = stack[-12];
    stack[-8] = v_313;
    v_313 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-7] = v_313;
    v_313 = stack[-11];
    if (v_313 == nil) goto v_200;
    v_313 = stack[-10];
    if (!car_legal(v_313)) v_313 = cdrerror(v_313); else
    v_313 = cdr(v_313);
    if (!car_legal(v_313)) v_313 = cdrerror(v_313); else
    v_313 = cdr(v_313);
    goto v_198;
v_200:
    v_313 = stack[-10];
    if (!car_legal(v_313)) v_313 = cdrerror(v_313); else
    v_313 = cdr(v_313);
    goto v_198;
    v_313 = nil;
v_198:
    stack[-4] = v_313;
v_196:
    v_313 = stack[-4];
    if (v_313 == nil) goto v_211;
    else goto v_212;
v_211:
    goto v_195;
v_212:
    v_313 = stack[-4];
    if (!car_legal(v_313)) v_313 = carerror(v_313); else
    v_313 = car(v_313);
    stack[-1] = v_313;
    v_313 = stack[-7];
    v_313 = add1(v_313);
    env = stack[-12];
    stack[-7] = v_313;
    v_313 = stack[-1];
    {   LispObject fn = basic_elt(env, 11); // dummyp
    v_313 = (*qfn1(fn))(fn, v_313);
    }
    env = stack[-12];
    stack[-6] = v_313;
    if (v_313 == nil) goto v_223;
    v_314 = stack[-5];
    v_313 = stack[-6];
    {   LispObject fn = basic_elt(env, 12); // max
    v_313 = (*qfn2(fn))(fn, v_314, v_313);
    }
    env = stack[-12];
    stack[-5] = v_313;
    v_313 = stack[-1];
    if (symbolp(v_313)) goto v_231;
    else goto v_232;
v_231:
    stack[-3] = stack[-8];
    v_313 = stack[-7];
    stack[-2] = sub1(v_313);
    env = stack[-12];
    stack[-1] = basic_elt(env, 2); // !~dv
    stack[0] = basic_elt(env, 3); // !*
    v_313 = stack[-6];
    v_313 = ncons(v_313);
    env = stack[-12];
    v_313 = list2star(stack[-1], stack[0], v_313);
    env = stack[-12];
    v_313 = Lputv(nil, stack[-3], stack[-2], v_313);
    env = stack[-12];
    goto v_230;
v_232:
    stack[-3] = stack[-8];
    v_313 = stack[-7];
    stack[-2] = sub1(v_313);
    env = stack[-12];
    stack[-1] = basic_elt(env, 8); // !~dva
    stack[0] = basic_elt(env, 3); // !*
    v_313 = stack[-6];
    v_313 = ncons(v_313);
    env = stack[-12];
    v_313 = list2star(stack[-1], stack[0], v_313);
    env = stack[-12];
    v_313 = Lputv(nil, stack[-3], stack[-2], v_313);
    env = stack[-12];
    goto v_230;
v_230:
    goto v_221;
v_223:
    stack[-2] = stack[-8];
    v_313 = stack[-7];
    stack[0] = sub1(v_313);
    env = stack[-12];
    v_313 = stack[-1];
    v_313 = ncons(v_313);
    env = stack[-12];
    v_313 = Lputv(nil, stack[-2], stack[0], v_313);
    env = stack[-12];
    goto v_221;
v_221:
    v_313 = stack[-4];
    if (!car_legal(v_313)) v_313 = cdrerror(v_313); else
    v_313 = cdr(v_313);
    stack[-4] = v_313;
    goto v_196;
v_195:
    v_315 = stack[-9];
    v_314 = stack[-8];
    v_313 = basic_elt(env, 9); // idcons_ordp
    {   LispObject fn = basic_elt(env, 13); // st_sorttree
    v_313 = (*qfn3(fn))(fn, v_315, v_314, v_313);
    }
    env = stack[-12];
    stack[-9] = v_313;
    v_313 = stack[-9];
    if (v_313 == nil) goto v_272;
    v_313 = stack[-9];
    if (!car_legal(v_313)) v_314 = carerror(v_313); else
    v_314 = car(v_313);
    v_313 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_314 == v_313) goto v_275;
    else goto v_272;
v_275:
    v_313 = nil;
    goto v_13;
v_272:
    v_313 = stack[-9];
    if (!car_legal(v_313)) v_313 = carerror(v_313); else
    v_313 = car(v_313);
    stack[0] = v_313;
    v_313 = stack[-9];
    if (!car_legal(v_313)) v_314 = cdrerror(v_313); else
    v_314 = cdr(v_313);
    v_313 = stack[-8];
    {   LispObject fn = basic_elt(env, 14); // dv_skelsplit1
    v_313 = (*qfn2(fn))(fn, v_314, v_313);
    }
    env = stack[-12];
    stack[-1] = v_313;
    v_313 = stack[-1];
    if (!car_legal(v_313)) v_313 = cdrerror(v_313); else
    v_313 = cdr(v_313);
    {   LispObject fn = basic_elt(env, 15); // st_consolidate
    v_313 = (*qfn1(fn))(fn, v_313);
    }
    env = stack[-12];
    stack[-9] = v_313;
    v_313 = stack[-11];
    if (v_313 == nil) goto v_292;
    v_313 = stack[-10];
    if (!car_legal(v_313)) v_315 = carerror(v_313); else
    v_315 = car(v_313);
    v_314 = stack[-11];
    v_313 = stack[-1];
    if (!car_legal(v_313)) v_313 = carerror(v_313); else
    v_313 = car(v_313);
    v_313 = list2star(v_315, v_314, v_313);
    env = stack[-12];
    goto v_290;
v_292:
    v_313 = stack[-10];
    if (!car_legal(v_313)) v_314 = carerror(v_313); else
    v_314 = car(v_313);
    v_313 = stack[-1];
    if (!car_legal(v_313)) v_313 = carerror(v_313); else
    v_313 = car(v_313);
    v_313 = cons(v_314, v_313);
    env = stack[-12];
    goto v_290;
    v_313 = nil;
v_290:
    stack[-1] = v_313;
    stack[-2] = stack[-5];
    v_314 = stack[-1];
    v_313 = stack[-9];
    v_313 = cons(v_314, v_313);
    {
        LispObject v_332 = stack[0];
        LispObject v_333 = stack[-2];
        return list3(v_332, v_333, v_313);
    }
v_13:
    return onevalue(v_313);
}



// Code for simpdot

static LispObject CC_simpdot(LispObject env,
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
    v_7 = basic_elt(env, 1); // dotord
    {
        LispObject fn = basic_elt(env, 2); // mkvarg
        return (*qfn2(fn))(fn, v_8, v_7);
    }
}



// Code for coeff_totder

static LispObject CC_coeff_totder(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_55, v_56, v_57, v_58;
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
    v_55 = v_3;
    stack[-1] = v_2;
// end of prologue
    v_56 = stack[-1];
    {   LispObject fn = basic_elt(env, 5); // idtomind
    v_55 = (*qfn2(fn))(fn, v_56, v_55);
    }
    env = stack[-2];
    v_56 = v_55;
    if (!car_legal(v_56)) v_56 = carerror(v_56); else
    v_56 = car(v_56);
    v_58 = v_56;
    if (!car_legal(v_55)) v_55 = cdrerror(v_55); else
    v_55 = cdr(v_55);
    if (!car_legal(v_55)) v_56 = carerror(v_55); else
    v_56 = car(v_55);
    v_55 = qvalue(basic_elt(env, 1)); // all_mind_table!*
    v_55 = Lassoc(nil, v_56, v_55);
    if (!car_legal(v_55)) v_55 = cdrerror(v_55); else
    v_55 = cdr(v_55);
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    v_57 = v_55;
    v_55 = v_57;
    if (v_55 == nil) goto v_26;
    v_56 = stack[-1];
    v_55 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_56 == v_55) goto v_30;
    else goto v_31;
v_30:
    stack[-1] = v_58;
    v_56 = v_57;
    v_55 = stack[0];
    {   LispObject fn = basic_elt(env, 6); // nth
    v_55 = (*qfn2(fn))(fn, v_56, v_55);
    }
    env = stack[-2];
    v_56 = list2(stack[-1], v_55);
    env = stack[-2];
    v_55 = qvalue(basic_elt(env, 2)); // i2m_jetspace!*
    {   LispObject fn = basic_elt(env, 7); // cde_lassoc2
    v_55 = (*qfn2(fn))(fn, v_56, v_55);
    }
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    goto v_10;
v_31:
    stack[-1] = v_58;
    v_56 = v_57;
    v_55 = stack[0];
    {   LispObject fn = basic_elt(env, 6); // nth
    v_55 = (*qfn2(fn))(fn, v_56, v_55);
    }
    env = stack[-2];
    v_56 = list2(stack[-1], v_55);
    env = stack[-2];
    v_55 = qvalue(basic_elt(env, 3)); // i2m_jetspace_odd!*
    {   LispObject fn = basic_elt(env, 7); // cde_lassoc2
    v_55 = (*qfn2(fn))(fn, v_56, v_55);
    }
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    goto v_10;
    goto v_24;
v_26:
    v_55 = basic_elt(env, 4); // letop
    goto v_10;
v_24:
    v_55 = nil;
v_10:
    return onevalue(v_55);
}



// Code for ofsf_smmkatl!-or1

static LispObject CC_ofsf_smmkatlKor1(LispObject env,
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
    v_124 = basic_elt(env, 1); // (lessp greaterp equal)
    v_124 = Lmemq(nil, v_125, v_124);
    if (v_124 == nil) goto v_42;
    v_124 = stack[-6];
    if (!car_legal(v_124)) v_126 = cdrerror(v_124); else
    v_126 = cdr(v_124);
    v_124 = stack[0];
    if (!car_legal(v_124)) v_125 = cdrerror(v_124); else
    v_125 = cdr(v_124);
    v_124 = stack[-7];
    {   LispObject fn = basic_elt(env, 3); // ofsf_smmkat!-or2
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
    v_126 = basic_elt(env, 2); // or
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
    v_124 = basic_elt(env, 1); // (lessp greaterp equal)
    v_124 = Lmemq(nil, v_125, v_124);
    if (v_124 == nil) goto v_95;
    v_124 = stack[-6];
    if (!car_legal(v_124)) v_126 = cdrerror(v_124); else
    v_126 = cdr(v_124);
    v_124 = stack[0];
    if (!car_legal(v_124)) v_125 = cdrerror(v_124); else
    v_125 = cdr(v_124);
    v_124 = stack[-7];
    {   LispObject fn = basic_elt(env, 3); // ofsf_smmkat!-or2
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
    v_126 = basic_elt(env, 2); // or
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



// Code for change!+sq!+to!+int

static LispObject CC_changeLsqLtoLint(LispObject env,
                         LispObject v_2)
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
        push(v_2);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_23 = v_2;
// end of prologue
    {   LispObject fn = basic_elt(env, 2); // prepsq
    v_23 = (*qfn1(fn))(fn, v_23);
    }
    env = stack[0];
    {   LispObject fn = basic_elt(env, 3); // simp!*
    v_23 = (*qfn1(fn))(fn, v_23);
    }
    env = stack[0];
    v_25 = v_23;
    v_23 = v_25;
    if (!car_legal(v_23)) v_24 = cdrerror(v_23); else
    v_24 = cdr(v_23);
    v_23 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_24 == v_23) goto v_12;
    else goto v_13;
v_12:
    v_23 = v_25;
    if (!car_legal(v_23)) v_23 = carerror(v_23); else
    v_23 = car(v_23);
    goto v_6;
v_13:
    v_23 = basic_elt(env, 1); // "no integer in change!+sq!+to!+int"
    {   LispObject fn = basic_elt(env, 4); // rederr
    v_23 = (*qfn1(fn))(fn, v_23);
    }
    goto v_11;
v_11:
    v_23 = nil;
v_6:
    return onevalue(v_23);
}



// Code for qqe_simplqequal

static LispObject CC_qqe_simplqequal(LispObject env,
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
    real_push(nil, nil, nil, nil, nil);
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(10);
// copy arguments values to proper place
    v_243 = v_3;
    stack[0] = v_2;
// end of prologue
v_1:
    v_243 = stack[0];
    {   LispObject fn = basic_elt(env, 5); // qqe_arg2r
    v_243 = (*qfn1(fn))(fn, v_243);
    }
    env = stack[-9];
    stack[-7] = v_243;
    v_243 = stack[0];
    {   LispObject fn = basic_elt(env, 6); // qqe_arg2l
    v_243 = (*qfn1(fn))(fn, v_243);
    }
    env = stack[-9];
    stack[-8] = v_243;
    v_244 = stack[-7];
    v_243 = stack[-8];
    if (equal(v_244, v_243)) goto v_23;
    else goto v_24;
v_23:
    v_243 = basic_elt(env, 1); // true
    goto v_16;
v_24:
    v_243 = stack[-8];
    {   LispObject fn = basic_elt(env, 7); // qqe_qprefix!-var
    v_243 = (*qfn1(fn))(fn, v_243);
    }
    env = stack[-9];
    stack[-6] = v_243;
    v_243 = stack[-7];
    {   LispObject fn = basic_elt(env, 7); // qqe_qprefix!-var
    v_243 = (*qfn1(fn))(fn, v_243);
    }
    env = stack[-9];
    stack[-5] = v_243;
    v_244 = stack[-6];
    v_243 = stack[-5];
    if (v_244 == v_243) goto v_38;
    else goto v_39;
v_38:
    v_243 = lisp_true;
    goto v_37;
v_39:
    v_244 = stack[-6];
    v_243 = basic_elt(env, 2); // qepsilon
    if (v_244 == v_243) goto v_47;
    else goto v_48;
v_47:
    v_243 = lisp_true;
    goto v_46;
v_48:
    v_244 = stack[-5];
    v_243 = basic_elt(env, 2); // qepsilon
    v_243 = (v_244 == v_243 ? lisp_true : nil);
    goto v_46;
    v_243 = nil;
v_46:
    goto v_37;
    v_243 = nil;
v_37:
    if (v_243 == nil) goto v_35;
    v_243 = stack[-7];
    {   LispObject fn = basic_elt(env, 8); // qqe_number!-of!-adds!-in!-qterm
    v_243 = (*qfn1(fn))(fn, v_243);
    }
    env = stack[-9];
    stack[-3] = v_243;
    v_243 = stack[-8];
    {   LispObject fn = basic_elt(env, 8); // qqe_number!-of!-adds!-in!-qterm
    v_243 = (*qfn1(fn))(fn, v_243);
    }
    env = stack[-9];
    stack[-4] = v_243;
    v_243 = stack[-7];
    {   LispObject fn = basic_elt(env, 9); // qqe_number!-of!-tails!-in!-qterm
    v_243 = (*qfn1(fn))(fn, v_243);
    }
    env = stack[-9];
    stack[-1] = v_243;
    v_243 = stack[-8];
    {   LispObject fn = basic_elt(env, 9); // qqe_number!-of!-tails!-in!-qterm
    v_243 = (*qfn1(fn))(fn, v_243);
    }
    env = stack[-9];
    stack[-2] = v_243;
    v_244 = stack[-6];
    v_243 = stack[-5];
    if (v_244 == v_243) goto v_71;
    else goto v_72;
v_71:
    v_244 = stack[-3];
    v_243 = stack[-1];
    v_243 = static_cast<LispObject>(geq2(v_244, v_243));
    v_243 = v_243 ? lisp_true : nil;
    env = stack[-9];
    if (v_243 == nil) goto v_79;
    else goto v_78;
v_79:
    v_244 = stack[-4];
    v_243 = stack[-2];
    v_243 = static_cast<LispObject>(geq2(v_244, v_243));
    v_243 = v_243 ? lisp_true : nil;
    env = stack[-9];
    if (v_243 == nil) goto v_83;
    else goto v_78;
v_83:
    v_243 = nil;
    goto v_76;
v_78:
    v_244 = stack[-3];
    v_243 = stack[-1];
    stack[0] = difference2(v_244, v_243);
    env = stack[-9];
    v_244 = stack[-4];
    v_243 = stack[-2];
    v_243 = difference2(v_244, v_243);
    env = stack[-9];
    v_243 = (equal(stack[0], v_243) ? lisp_true : nil);
    v_243 = (v_243 == nil ? lisp_true : nil);
    goto v_76;
    v_243 = nil;
v_76:
    goto v_70;
v_72:
    v_243 = nil;
    goto v_70;
    v_243 = nil;
v_70:
    if (v_243 == nil) goto v_68;
    v_243 = basic_elt(env, 3); // false
    goto v_16;
v_68:
    v_244 = stack[-7];
    v_243 = basic_elt(env, 2); // qepsilon
    if (v_244 == v_243) goto v_107;
    else goto v_108;
v_107:
    v_244 = stack[-4];
    v_243 = stack[-2];
    v_243 = static_cast<LispObject>(greaterp2(v_244, v_243));
    v_243 = v_243 ? lisp_true : nil;
    env = stack[-9];
    goto v_106;
v_108:
    v_243 = nil;
    goto v_106;
    v_243 = nil;
v_106:
    if (v_243 == nil) goto v_104;
    v_243 = basic_elt(env, 3); // false
    goto v_16;
v_104:
    v_244 = stack[-8];
    v_243 = basic_elt(env, 2); // qepsilon
    if (v_244 == v_243) goto v_122;
    else goto v_123;
v_122:
    v_244 = stack[-3];
    v_243 = stack[-1];
    v_243 = static_cast<LispObject>(greaterp2(v_244, v_243));
    v_243 = v_243 ? lisp_true : nil;
    env = stack[-9];
    goto v_121;
v_123:
    v_243 = nil;
    goto v_121;
    v_243 = nil;
v_121:
    if (v_243 == nil) goto v_119;
    v_243 = basic_elt(env, 3); // false
    goto v_16;
v_119:
    v_244 = stack[-7];
    v_243 = basic_elt(env, 2); // qepsilon
    if (v_244 == v_243) goto v_137;
    else goto v_138;
v_137:
    v_244 = stack[-3];
    v_243 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_244 == v_243) goto v_143;
    else goto v_144;
v_143:
    v_244 = stack[-4];
    v_243 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_243 = (v_244 == v_243 ? lisp_true : nil);
    goto v_142;
v_144:
    v_243 = nil;
    goto v_142;
    v_243 = nil;
v_142:
    goto v_136;
v_138:
    v_243 = nil;
    goto v_136;
    v_243 = nil;
v_136:
    if (v_243 == nil) goto v_134;
    v_244 = stack[-6];
    v_243 = basic_elt(env, 2); // qepsilon
    if (v_244 == v_243) goto v_158;
    else goto v_159;
v_158:
    v_243 = basic_elt(env, 1); // true
    goto v_16;
v_159:
    v_243 = stack[-8];
    {   LispObject fn = basic_elt(env, 10); // qqe_simplterm
    v_243 = (*qfn1(fn))(fn, v_243);
    }
    env = stack[-9];
    goto v_157;
v_157:
    v_244 = basic_elt(env, 4); // qequal
    v_245 = v_243;
    v_243 = stack[-7];
    {
        LispObject fn = basic_elt(env, 11); // qqe_mk2
        return (*qfn3(fn))(fn, v_244, v_245, v_243);
    }
v_134:
    v_244 = stack[-8];
    v_243 = basic_elt(env, 2); // qepsilon
    if (v_244 == v_243) goto v_176;
    else goto v_177;
v_176:
    v_244 = stack[-3];
    v_243 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_244 == v_243) goto v_182;
    else goto v_183;
v_182:
    v_244 = stack[-4];
    v_243 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_243 = (v_244 == v_243 ? lisp_true : nil);
    goto v_181;
v_183:
    v_243 = nil;
    goto v_181;
    v_243 = nil;
v_181:
    goto v_175;
v_177:
    v_243 = nil;
    goto v_175;
    v_243 = nil;
v_175:
    if (v_243 == nil) goto v_173;
    v_244 = stack[-5];
    v_243 = basic_elt(env, 2); // qepsilon
    if (v_244 == v_243) goto v_197;
    else goto v_198;
v_197:
    v_243 = basic_elt(env, 1); // true
    goto v_16;
v_198:
    v_243 = stack[-7];
    {   LispObject fn = basic_elt(env, 10); // qqe_simplterm
    v_243 = (*qfn1(fn))(fn, v_243);
    }
    env = stack[-9];
    stack[0] = v_243;
    goto v_196;
v_196:
    v_245 = basic_elt(env, 4); // qequal
    v_244 = stack[-8];
    v_243 = stack[0];
    {
        LispObject fn = basic_elt(env, 11); // qqe_mk2
        return (*qfn3(fn))(fn, v_245, v_244, v_243);
    }
v_173:
    goto v_33;
v_35:
v_33:
    v_243 = stack[-7];
    {   LispObject fn = basic_elt(env, 10); // qqe_simplterm
    v_243 = (*qfn1(fn))(fn, v_243);
    }
    env = stack[-9];
    stack[0] = v_243;
    v_243 = stack[-8];
    {   LispObject fn = basic_elt(env, 10); // qqe_simplterm
    v_243 = (*qfn1(fn))(fn, v_243);
    }
    env = stack[-9];
    v_245 = stack[-7];
    v_244 = stack[0];
    if (equal(v_245, v_244)) goto v_221;
    else goto v_222;
v_221:
    v_245 = stack[-8];
    v_244 = v_243;
    v_244 = (equal(v_245, v_244) ? lisp_true : nil);
    goto v_220;
v_222:
    v_244 = nil;
    goto v_220;
    v_244 = nil;
v_220:
    if (v_244 == nil) goto v_218;
    v_245 = basic_elt(env, 4); // qequal
    v_244 = v_243;
    v_243 = stack[0];
    {
        LispObject fn = basic_elt(env, 11); // qqe_mk2
        return (*qfn3(fn))(fn, v_245, v_244, v_243);
    }
v_218:
    v_245 = basic_elt(env, 4); // qequal
    v_244 = v_243;
    v_243 = stack[0];
    {   LispObject fn = basic_elt(env, 11); // qqe_mk2
    v_243 = (*qfn3(fn))(fn, v_245, v_244, v_243);
    }
    env = stack[-9];
    stack[0] = v_243;
    goto v_1;
    v_243 = nil;
v_16:
    return onevalue(v_243);
}



// Code for acfsf_varlat

static LispObject CC_acfsf_varlat(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // acfsf_arg2l
    v_7 = (*qfn1(fn))(fn, v_7);
    }
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // kernels
        return (*qfn1(fn))(fn, v_7);
    }
}



// Code for gb_buchcrit4t

static LispObject CC_gb_buchcrit4t(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // ev_disjointp
    v_9 = (*qfn2(fn))(fn, v_10, v_9);
    }
    v_9 = (v_9 == nil ? lisp_true : nil);
    return onevalue(v_9);
}



// Code for transferrow1

static LispObject CC_transferrow1(LispObject env,
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
// space for vars preserved across procedure calls
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    stack[-1] = qvalue(basic_elt(env, 1)); // codmat
    v_27 = qvalue(basic_elt(env, 2)); // maxvar
    v_26 = stack[0];
    v_26 = plus2(v_27, v_26);
    env = stack[-2];
    v_27 = Lgetv(nil, stack[-1], v_26);
    env = stack[-2];
    v_26 = static_cast<LispObject>(80)+TAG_FIXNUM; // 5
    v_26 = Lgetv(nil, v_27, v_26);
    env = stack[-2];
    if (v_26 == nil) goto v_6;
    else goto v_7;
v_6:
    stack[-1] = qvalue(basic_elt(env, 1)); // codmat
    v_27 = qvalue(basic_elt(env, 2)); // maxvar
    v_26 = stack[0];
    v_26 = plus2(v_27, v_26);
    env = stack[-2];
    v_27 = Lgetv(nil, stack[-1], v_26);
    env = stack[-2];
    v_26 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_26 = Lgetv(nil, v_27, v_26);
    v_26 = (is_number(v_26) ? lisp_true : nil);
    goto v_5;
v_7:
    v_26 = nil;
    goto v_5;
    v_26 = nil;
v_5:
    return onevalue(v_26);
}



// Code for vdpmember

static LispObject CC_vdpmember(LispObject env,
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
    v_25 = nil;
    goto v_6;
v_11:
    v_26 = stack[-1];
    v_25 = stack[0];
    if (!car_legal(v_25)) v_25 = carerror(v_25); else
    v_25 = car(v_25);
    {   LispObject fn = basic_elt(env, 1); // vdpequal
    v_25 = (*qfn2(fn))(fn, v_26, v_25);
    }
    env = stack[-2];
    if (v_25 == nil) goto v_15;
    v_25 = stack[0];
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



// Code for exptbf

static LispObject CC_exptbf(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    v_31 = stack[-1];
    v_31 = Levenp(nil, v_31);
    env = stack[-3];
    if (v_31 == nil) goto v_11;
    else goto v_12;
v_11:
    v_32 = stack[0];
    v_31 = stack[-2];
    {   LispObject fn = basic_elt(env, 1); // csl_timbf
    v_31 = (*qfn2(fn))(fn, v_32, v_31);
    }
    env = stack[-3];
    stack[0] = v_31;
    goto v_10;
v_12:
v_10:
    v_32 = stack[-1];
    v_31 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    {   LispObject fn = basic_elt(env, 2); // lshift
    v_31 = (*qfn2(fn))(fn, v_32, v_31);
    }
    env = stack[-3];
    stack[-1] = v_31;
    v_32 = stack[-1];
    v_31 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_32 == v_31) goto v_23;
    else goto v_24;
v_23:
    v_31 = stack[0];
    goto v_7;
v_24:
    v_32 = stack[-2];
    v_31 = stack[-2];
    {   LispObject fn = basic_elt(env, 1); // csl_timbf
    v_31 = (*qfn2(fn))(fn, v_32, v_31);
    }
    env = stack[-3];
    stack[-2] = v_31;
    goto v_8;
v_7:
    return onevalue(v_31);
}



// Code for preproc

static LispObject CC_preproc(LispObject env,
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
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_19 = v_2;
// end of prologue
    {   LispObject fn = basic_elt(env, 1); // preproc1
    v_19 = (*qfn1(fn))(fn, v_19);
    }
    v_20 = v_19;
    v_19 = v_20;
    if (v_19 == nil) goto v_12;
    v_19 = v_20;
    if (!car_legal(v_19)) v_19 = carerror(v_19); else
    v_19 = car(v_19);
    goto v_6;
v_12:
    v_19 = v_20;
    goto v_6;
    v_19 = nil;
v_6:
    return onevalue(v_19);
}



// Code for coeff1_calc

static LispObject CC_coeff1_calc(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    v_30 = stack[0];
    if (v_30 == nil) goto v_12;
    else goto v_13;
v_12:
    stack[0] = stack[-3];
    v_30 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_30 = ncons(v_30);
    env = stack[-4];
    {
        LispObject v_37 = stack[0];
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn2(fn))(fn, v_37, v_30);
    }
v_13:
    v_32 = stack[-2];
    v_31 = stack[-1];
    v_30 = stack[0];
    if (!car_legal(v_30)) v_30 = carerror(v_30); else
    v_30 = car(v_30);
    {   LispObject fn = basic_elt(env, 2); // calc_coeffmap_
    v_31 = (*qfn3(fn))(fn, v_32, v_31, v_30);
    }
    env = stack[-4];
    v_30 = stack[-3];
    v_30 = cons(v_31, v_30);
    env = stack[-4];
    stack[-3] = v_30;
    v_30 = stack[0];
    if (!car_legal(v_30)) v_30 = cdrerror(v_30); else
    v_30 = cdr(v_30);
    stack[0] = v_30;
    goto v_9;
    v_30 = nil;
    return onevalue(v_30);
}



// Code for subs2chkex

static LispObject CC_subs2chkex(LispObject env,
                         LispObject v_2)
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
    v_34 = stack[0];
    if (v_34 == nil) goto v_6;
    else goto v_7;
v_6:
    v_34 = nil;
    goto v_5;
v_7:
    v_34 = stack[0];
    if (!car_legal(v_34)) v_34 = carerror(v_34); else
    v_34 = car(v_34);
    if (!car_legal(v_34)) v_34 = cdrerror(v_34); else
    v_34 = cdr(v_34);
    {   LispObject fn = basic_elt(env, 1); // subs2chk
    v_34 = (*qfn1(fn))(fn, v_34);
    }
    env = stack[-1];
    v_35 = v_34;
    if (v_35 == nil) goto v_20;
    v_35 = stack[0];
    if (!car_legal(v_35)) v_35 = carerror(v_35); else
    v_35 = car(v_35);
    if (!car_legal(v_35)) v_36 = carerror(v_35); else
    v_36 = car(v_35);
    v_35 = v_34;
    v_34 = stack[0];
    if (!car_legal(v_34)) v_34 = cdrerror(v_34); else
    v_34 = cdr(v_34);
    return acons(v_36, v_35, v_34);
v_20:
    v_34 = stack[0];
    if (!car_legal(v_34)) v_34 = cdrerror(v_34); else
    v_34 = cdr(v_34);
    stack[0] = v_34;
    goto v_1;
    v_34 = nil;
    goto v_5;
    v_34 = nil;
v_5:
    return onevalue(v_34);
}



// Code for red_redpol

static LispObject CC_red_redpol(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    v_24 = v_3;
    stack[0] = v_2;
// end of prologue
    {   LispObject fn = basic_elt(env, 2); // red_prepare
    v_24 = (*qfn1(fn))(fn, v_24);
    }
    env = stack[-1];
    v_25 = qvalue(basic_elt(env, 1)); // !*red_total
    if (v_25 == nil) goto v_14;
    v_25 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // red_totalred
    v_24 = (*qfn2(fn))(fn, v_25, v_24);
    }
    env = stack[-1];
    goto v_12;
v_14:
    v_25 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // red_topred
    v_24 = (*qfn2(fn))(fn, v_25, v_24);
    }
    env = stack[-1];
    goto v_12;
    v_24 = nil;
v_12:
    {
        LispObject fn = basic_elt(env, 5); // red_extract
        return (*qfn1(fn))(fn, v_24);
    }
    return onevalue(v_24);
}



// Code for ofsf_smmkatl!-or

static LispObject CC_ofsf_smmkatlKor(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_88, v_89, v_90;
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
    stack[-3] = v_4;
    v_88 = v_3;
    stack[-4] = v_2;
// end of prologue
    stack[-5] = v_88;
v_14:
    v_88 = stack[-5];
    if (v_88 == nil) goto v_19;
    else goto v_20;
v_19:
    v_88 = nil;
    goto v_13;
v_20:
    v_88 = stack[-5];
    if (!car_legal(v_88)) v_88 = carerror(v_88); else
    v_88 = car(v_88);
    v_89 = v_88;
    if (!car_legal(v_89)) v_90 = carerror(v_89); else
    v_90 = car(v_89);
    v_89 = stack[-4];
    v_89 = Latsoc(nil, v_90, v_89);
    v_90 = v_89;
    v_89 = v_90;
    if (v_89 == nil) goto v_32;
    else goto v_33;
v_32:
    v_89 = basic_elt(env, 1); // or
    v_90 = v_88;
    v_88 = stack[-3];
    {   LispObject fn = basic_elt(env, 2); // ofsf_ir2atl
    v_88 = (*qfn3(fn))(fn, v_89, v_90, v_88);
    }
    env = stack[-6];
    goto v_31;
v_33:
    v_89 = v_88;
    v_88 = stack[-3];
    {   LispObject fn = basic_elt(env, 3); // ofsf_smmkatl!-or1
    v_88 = (*qfn3(fn))(fn, v_90, v_89, v_88);
    }
    env = stack[-6];
    goto v_31;
    v_88 = nil;
v_31:
    stack[-2] = v_88;
    v_88 = stack[-2];
    {   LispObject fn = basic_elt(env, 4); // lastpair
    v_88 = (*qfn1(fn))(fn, v_88);
    }
    env = stack[-6];
    stack[-1] = v_88;
    v_88 = stack[-5];
    if (!car_legal(v_88)) v_88 = cdrerror(v_88); else
    v_88 = cdr(v_88);
    stack[-5] = v_88;
    v_88 = stack[-1];
    if (!consp(v_88)) goto v_51;
    else goto v_52;
v_51:
    goto v_14;
v_52:
v_15:
    v_88 = stack[-5];
    if (v_88 == nil) goto v_56;
    else goto v_57;
v_56:
    v_88 = stack[-2];
    goto v_13;
v_57:
    stack[0] = stack[-1];
    v_88 = stack[-5];
    if (!car_legal(v_88)) v_88 = carerror(v_88); else
    v_88 = car(v_88);
    v_89 = v_88;
    if (!car_legal(v_89)) v_90 = carerror(v_89); else
    v_90 = car(v_89);
    v_89 = stack[-4];
    v_89 = Latsoc(nil, v_90, v_89);
    v_90 = v_89;
    v_89 = v_90;
    if (v_89 == nil) goto v_70;
    else goto v_71;
v_70:
    v_90 = basic_elt(env, 1); // or
    v_89 = v_88;
    v_88 = stack[-3];
    {   LispObject fn = basic_elt(env, 2); // ofsf_ir2atl
    v_88 = (*qfn3(fn))(fn, v_90, v_89, v_88);
    }
    env = stack[-6];
    goto v_69;
v_71:
    v_89 = v_88;
    v_88 = stack[-3];
    {   LispObject fn = basic_elt(env, 3); // ofsf_smmkatl!-or1
    v_88 = (*qfn3(fn))(fn, v_90, v_89, v_88);
    }
    env = stack[-6];
    goto v_69;
    v_88 = nil;
v_69:
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_88);
    v_88 = stack[-1];
    {   LispObject fn = basic_elt(env, 4); // lastpair
    v_88 = (*qfn1(fn))(fn, v_88);
    }
    env = stack[-6];
    stack[-1] = v_88;
    v_88 = stack[-5];
    if (!car_legal(v_88)) v_88 = cdrerror(v_88); else
    v_88 = cdr(v_88);
    stack[-5] = v_88;
    goto v_15;
v_13:
    return onevalue(v_88);
}



// Code for simp!-sign2

static LispObject CC_simpKsign2(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_21 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // rd!-sign
    v_21 = (*qfn1(fn))(fn, v_21);
    }
    env = stack[-1];
    v_22 = v_21;
    v_21 = v_22;
    if (v_21 == nil) goto v_10;
    v_21 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_22, v_21);
v_10:
    v_22 = basic_elt(env, 1); // sign
    v_21 = stack[0];
    v_21 = list2(v_22, v_21);
    env = stack[-1];
    {
        LispObject fn = basic_elt(env, 3); // simpiden
        return (*qfn1(fn))(fn, v_21);
    }
    v_21 = nil;
    return onevalue(v_21);
}



// Code for talp_try1

static LispObject CC_talp_try1(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_161, v_162, v_163;
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
    v_162 = v_2;
// end of prologue
    v_161 = v_162;
    if (!consp(v_161)) goto v_10;
    else goto v_11;
v_10:
    v_161 = v_162;
    goto v_7;
v_11:
    v_161 = v_162;
    {   LispObject fn = basic_elt(env, 5); // talp_rnf
    v_161 = (*qfn1(fn))(fn, v_161);
    }
    env = stack[-5];
    stack[0] = v_161;
    v_162 = stack[0];
    v_161 = basic_elt(env, 1); // true
    if (v_162 == v_161) goto v_26;
    else goto v_27;
v_26:
    v_161 = lisp_true;
    goto v_25;
v_27:
    v_162 = stack[0];
    v_161 = basic_elt(env, 2); // false
    v_161 = (v_162 == v_161 ? lisp_true : nil);
    goto v_25;
    v_161 = nil;
v_25:
    if (v_161 == nil) goto v_23;
    v_161 = lisp_true;
    goto v_21;
v_23:
    v_161 = stack[0];
    {   LispObject fn = basic_elt(env, 6); // talp_atfp
    v_161 = (*qfn1(fn))(fn, v_161);
    }
    env = stack[-5];
    goto v_21;
    v_161 = nil;
v_21:
    if (v_161 == nil) goto v_19;
    v_161 = stack[0];
    goto v_7;
v_19:
    v_161 = stack[0];
    {   LispObject fn = basic_elt(env, 7); // talp_op
    v_161 = (*qfn1(fn))(fn, v_161);
    }
    env = stack[-5];
    v_163 = v_161;
    v_162 = v_163;
    v_161 = basic_elt(env, 3); // or
    if (v_162 == v_161) goto v_46;
    else goto v_47;
v_46:
    stack[-4] = basic_elt(env, 4); // and
    v_161 = stack[0];
    {   LispObject fn = basic_elt(env, 8); // talp_argl
    v_161 = (*qfn1(fn))(fn, v_161);
    }
    env = stack[-5];
    stack[-3] = v_161;
    v_161 = stack[-3];
    if (v_161 == nil) goto v_65;
    else goto v_66;
v_65:
    v_161 = nil;
    goto v_59;
v_66:
    v_161 = stack[-3];
    if (!car_legal(v_161)) v_161 = carerror(v_161); else
    v_161 = car(v_161);
    {   LispObject fn = basic_elt(env, 9); // cl_nnfnot
    v_161 = (*qfn1(fn))(fn, v_161);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 0); // talp_try1
    v_161 = (*qfn1(fn))(fn, v_161);
    }
    env = stack[-5];
    v_161 = ncons(v_161);
    env = stack[-5];
    stack[-1] = v_161;
    stack[-2] = v_161;
v_60:
    v_161 = stack[-3];
    if (!car_legal(v_161)) v_161 = cdrerror(v_161); else
    v_161 = cdr(v_161);
    stack[-3] = v_161;
    v_161 = stack[-3];
    if (v_161 == nil) goto v_80;
    else goto v_81;
v_80:
    v_161 = stack[-2];
    goto v_59;
v_81:
    stack[0] = stack[-1];
    v_161 = stack[-3];
    if (!car_legal(v_161)) v_161 = carerror(v_161); else
    v_161 = car(v_161);
    {   LispObject fn = basic_elt(env, 9); // cl_nnfnot
    v_161 = (*qfn1(fn))(fn, v_161);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 0); // talp_try1
    v_161 = (*qfn1(fn))(fn, v_161);
    }
    env = stack[-5];
    v_161 = ncons(v_161);
    env = stack[-5];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_161);
    v_161 = stack[-1];
    if (!car_legal(v_161)) v_161 = cdrerror(v_161); else
    v_161 = cdr(v_161);
    stack[-1] = v_161;
    goto v_60;
v_59:
    v_161 = cons(stack[-4], v_161);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 10); // talp_try2
    v_161 = (*qfn1(fn))(fn, v_161);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 9); // cl_nnfnot
    v_163 = (*qfn1(fn))(fn, v_161);
    }
    env = stack[-5];
    v_162 = nil;
    v_161 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    {
        LispObject fn = basic_elt(env, 11); // cl_simpl
        return (*qfn3(fn))(fn, v_163, v_162, v_161);
    }
v_47:
    v_162 = v_163;
    v_161 = basic_elt(env, 4); // and
    if (v_162 == v_161) goto v_97;
    else goto v_98;
v_97:
    stack[-4] = v_163;
    v_161 = stack[0];
    {   LispObject fn = basic_elt(env, 8); // talp_argl
    v_161 = (*qfn1(fn))(fn, v_161);
    }
    env = stack[-5];
    stack[-3] = v_161;
    v_161 = stack[-3];
    if (v_161 == nil) goto v_115;
    else goto v_116;
v_115:
    v_161 = nil;
    goto v_109;
v_116:
    v_161 = stack[-3];
    if (!car_legal(v_161)) v_161 = carerror(v_161); else
    v_161 = car(v_161);
    {   LispObject fn = basic_elt(env, 0); // talp_try1
    v_161 = (*qfn1(fn))(fn, v_161);
    }
    env = stack[-5];
    v_161 = ncons(v_161);
    env = stack[-5];
    stack[-1] = v_161;
    stack[-2] = v_161;
v_110:
    v_161 = stack[-3];
    if (!car_legal(v_161)) v_161 = cdrerror(v_161); else
    v_161 = cdr(v_161);
    stack[-3] = v_161;
    v_161 = stack[-3];
    if (v_161 == nil) goto v_129;
    else goto v_130;
v_129:
    v_161 = stack[-2];
    goto v_109;
v_130:
    stack[0] = stack[-1];
    v_161 = stack[-3];
    if (!car_legal(v_161)) v_161 = carerror(v_161); else
    v_161 = car(v_161);
    {   LispObject fn = basic_elt(env, 0); // talp_try1
    v_161 = (*qfn1(fn))(fn, v_161);
    }
    env = stack[-5];
    v_161 = ncons(v_161);
    env = stack[-5];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_161);
    v_161 = stack[-1];
    if (!car_legal(v_161)) v_161 = cdrerror(v_161); else
    v_161 = cdr(v_161);
    stack[-1] = v_161;
    goto v_110;
v_109:
    v_161 = cons(stack[-4], v_161);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 10); // talp_try2
    v_163 = (*qfn1(fn))(fn, v_161);
    }
    env = stack[-5];
    v_162 = nil;
    v_161 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    {
        LispObject fn = basic_elt(env, 11); // cl_simpl
        return (*qfn3(fn))(fn, v_163, v_162, v_161);
    }
v_98:
    stack[-2] = v_163;
    v_161 = stack[0];
    if (!car_legal(v_161)) v_161 = cdrerror(v_161); else
    v_161 = cdr(v_161);
    if (!car_legal(v_161)) stack[-1] = carerror(v_161); else
    stack[-1] = car(v_161);
    v_161 = stack[0];
    if (!car_legal(v_161)) v_161 = cdrerror(v_161); else
    v_161 = cdr(v_161);
    if (!car_legal(v_161)) v_161 = cdrerror(v_161); else
    v_161 = cdr(v_161);
    if (!car_legal(v_161)) v_161 = carerror(v_161); else
    v_161 = car(v_161);
    {   LispObject fn = basic_elt(env, 0); // talp_try1
    v_161 = (*qfn1(fn))(fn, v_161);
    }
    env = stack[-5];
    v_161 = ncons(v_161);
    env = stack[-5];
    v_163 = list2star(stack[-2], stack[-1], v_161);
    env = stack[-5];
    v_162 = nil;
    v_161 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    {
        LispObject fn = basic_elt(env, 11); // cl_simpl
        return (*qfn3(fn))(fn, v_163, v_162, v_161);
    }
    v_161 = nil;
v_7:
    return onevalue(v_161);
}



// Code for tchscheme

static LispObject CC_tchscheme(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// end of prologue
    stack[-3] = nil;
    stack[-2] = nil;
    v_77 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-1] = v_77;
v_10:
    v_78 = qvalue(basic_elt(env, 1)); // rowmax
    v_77 = stack[-1];
    v_77 = difference2(v_78, v_77);
    env = stack[-4];
    v_77 = Lminusp(nil, v_77);
    env = stack[-4];
    if (v_77 == nil) goto v_15;
    goto v_9;
v_15:
    stack[0] = qvalue(basic_elt(env, 2)); // codmat
    v_78 = qvalue(basic_elt(env, 3)); // maxvar
    v_77 = stack[-1];
    v_77 = plus2(v_78, v_77);
    env = stack[-4];
    v_78 = Lgetv(nil, stack[0], v_77);
    env = stack[-4];
    v_77 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_78 = Lgetv(nil, v_78, v_77);
    env = stack[-4];
    v_77 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    if (v_78 == v_77) goto v_28;
    stack[0] = qvalue(basic_elt(env, 2)); // codmat
    v_78 = qvalue(basic_elt(env, 3)); // maxvar
    v_77 = stack[-1];
    v_77 = plus2(v_78, v_77);
    env = stack[-4];
    v_78 = Lgetv(nil, stack[0], v_77);
    env = stack[-4];
    v_77 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_77 = Lgetv(nil, v_78, v_77);
    env = stack[-4];
    stack[-3] = v_77;
    if (v_77 == nil) goto v_39;
    else goto v_40;
v_39:
    v_77 = nil;
    goto v_38;
v_40:
    v_77 = stack[-3];
    if (!car_legal(v_77)) v_77 = cdrerror(v_77); else
    v_77 = cdr(v_77);
    if (v_77 == nil) goto v_53;
    else goto v_54;
v_53:
    v_78 = stack[-1];
    v_77 = stack[-3];
    if (!car_legal(v_77)) v_77 = carerror(v_77); else
    v_77 = car(v_77);
    if (!car_legal(v_77)) v_77 = cdrerror(v_77); else
    v_77 = cdr(v_77);
    if (!car_legal(v_77)) v_77 = carerror(v_77); else
    v_77 = car(v_77);
    {   LispObject fn = basic_elt(env, 4); // transferrow
    v_77 = (*qfn2(fn))(fn, v_78, v_77);
    }
    env = stack[-4];
    goto v_52;
v_54:
    v_77 = nil;
    goto v_52;
    v_77 = nil;
v_52:
    goto v_38;
    v_77 = nil;
v_38:
    goto v_26;
v_28:
    v_77 = nil;
    goto v_26;
    v_77 = nil;
v_26:
    if (v_77 == nil) goto v_24;
    v_78 = stack[-1];
    v_77 = stack[-3];
    if (!car_legal(v_77)) v_77 = carerror(v_77); else
    v_77 = car(v_77);
    {   LispObject fn = basic_elt(env, 5); // chscheme
    v_77 = (*qfn2(fn))(fn, v_78, v_77);
    }
    env = stack[-4];
    v_77 = lisp_true;
    stack[-2] = v_77;
    goto v_22;
v_24:
v_22:
    v_77 = stack[-1];
    v_77 = add1(v_77);
    env = stack[-4];
    stack[-1] = v_77;
    goto v_10;
v_9:
    v_77 = stack[-2];
    return onevalue(v_77);
}



// Code for cos!*

static LispObject CC_cosH(LispObject env,
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
    v_7 = qvalue(basic_elt(env, 1)); // !:bprec!:
    {
        LispObject fn = basic_elt(env, 2); // cos!:
        return (*qfn2(fn))(fn, v_8, v_7);
    }
}



// Code for requote1

static LispObject CC_requote1(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_72, v_73;
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
    stack[0] = nil;
v_8:
    v_72 = stack[-1];
    if (v_72 == nil) goto v_11;
    else goto v_12;
v_11:
    v_72 = stack[-2];
        return Lnreverse(nil, v_72);
v_12:
    v_72 = stack[-1];
    if (!car_legal(v_72)) v_72 = carerror(v_72); else
    v_72 = car(v_72);
    if (is_number(v_72)) goto v_16;
    v_72 = stack[-1];
    if (!car_legal(v_72)) v_73 = carerror(v_72); else
    v_73 = car(v_72);
    v_72 = basic_elt(env, 1); // (nil t)
    v_72 = Lmemq(nil, v_73, v_72);
    if (v_72 == nil) goto v_21;
    else goto v_16;
v_21:
    goto v_17;
v_16:
    v_72 = stack[-1];
    if (!car_legal(v_72)) v_73 = carerror(v_72); else
    v_73 = car(v_72);
    v_72 = stack[-2];
    v_72 = cons(v_73, v_72);
    env = stack[-3];
    stack[-2] = v_72;
    goto v_10;
v_17:
    v_72 = stack[-1];
    if (!car_legal(v_72)) v_72 = carerror(v_72); else
    v_72 = car(v_72);
    if (!consp(v_72)) goto v_30;
    else goto v_31;
v_30:
    v_72 = nil;
    goto v_7;
v_31:
    v_72 = stack[-1];
    if (!car_legal(v_72)) v_72 = carerror(v_72); else
    v_72 = car(v_72);
    if (!car_legal(v_72)) v_73 = carerror(v_72); else
    v_73 = car(v_72);
    v_72 = basic_elt(env, 2); // quote
    if (v_73 == v_72) goto v_35;
    else goto v_36;
v_35:
    v_72 = stack[-1];
    if (!car_legal(v_72)) v_72 = carerror(v_72); else
    v_72 = car(v_72);
    if (!car_legal(v_72)) v_72 = cdrerror(v_72); else
    v_72 = cdr(v_72);
    if (!car_legal(v_72)) v_73 = carerror(v_72); else
    v_73 = car(v_72);
    v_72 = stack[-2];
    v_72 = cons(v_73, v_72);
    env = stack[-3];
    stack[-2] = v_72;
    goto v_10;
v_36:
    v_72 = stack[-1];
    if (!car_legal(v_72)) v_72 = carerror(v_72); else
    v_72 = car(v_72);
    if (!car_legal(v_72)) v_73 = carerror(v_72); else
    v_73 = car(v_72);
    v_72 = basic_elt(env, 3); // list
    if (v_73 == v_72) goto v_51;
    else goto v_52;
v_51:
    v_72 = stack[-1];
    if (!car_legal(v_72)) v_72 = carerror(v_72); else
    v_72 = car(v_72);
    if (!car_legal(v_72)) v_72 = cdrerror(v_72); else
    v_72 = cdr(v_72);
    {   LispObject fn = basic_elt(env, 0); // requote1
    v_72 = (*qfn1(fn))(fn, v_72);
    }
    env = stack[-3];
    stack[0] = v_72;
    goto v_50;
v_52:
    v_72 = nil;
    goto v_50;
    v_72 = nil;
v_50:
    if (v_72 == nil) goto v_48;
    v_73 = stack[0];
    v_72 = stack[-2];
    v_72 = cons(v_73, v_72);
    env = stack[-3];
    stack[-2] = v_72;
    goto v_10;
v_48:
    v_72 = nil;
    goto v_7;
v_10:
    v_72 = stack[-1];
    if (!car_legal(v_72)) v_72 = cdrerror(v_72); else
    v_72 = cdr(v_72);
    stack[-1] = v_72;
    goto v_8;
v_7:
    return onevalue(v_72);
}



// Code for store_edges

static LispObject CC_store_edges(LispObject env,
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



// Code for normmat

static LispObject CC_normmat(LispObject env,
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(10);
// copy arguments values to proper place
    v_104 = v_2;
// end of prologue
    stack[-6] = nil;
    v_103 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-8] = v_103;
    v_103 = v_104;
    stack[-5] = v_103;
v_13:
    v_103 = stack[-5];
    if (v_103 == nil) goto v_17;
    else goto v_18;
v_17:
    goto v_12;
v_18:
    v_103 = stack[-5];
    if (!car_legal(v_103)) v_103 = carerror(v_103); else
    v_103 = car(v_103);
    stack[-1] = v_103;
    v_103 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-7] = v_103;
    v_103 = stack[-1];
    stack[0] = v_103;
v_28:
    v_103 = stack[0];
    if (v_103 == nil) goto v_32;
    else goto v_33;
v_32:
    goto v_27;
v_33:
    v_103 = stack[0];
    if (!car_legal(v_103)) v_103 = carerror(v_103); else
    v_103 = car(v_103);
    v_104 = stack[-7];
    if (!car_legal(v_103)) v_103 = cdrerror(v_103); else
    v_103 = cdr(v_103);
    {   LispObject fn = basic_elt(env, 1); // lcm
    v_103 = (*qfn2(fn))(fn, v_104, v_103);
    }
    env = stack[-9];
    stack[-7] = v_103;
    v_103 = stack[0];
    if (!car_legal(v_103)) v_103 = cdrerror(v_103); else
    v_103 = cdr(v_103);
    stack[0] = v_103;
    goto v_28;
v_27:
    v_103 = stack[-1];
    stack[-4] = v_103;
    v_103 = stack[-4];
    if (v_103 == nil) goto v_55;
    else goto v_56;
v_55:
    v_103 = nil;
    v_104 = v_103;
    goto v_50;
v_56:
    v_103 = stack[-4];
    if (!car_legal(v_103)) v_103 = carerror(v_103); else
    v_103 = car(v_103);
    v_104 = v_103;
    if (!car_legal(v_104)) stack[0] = carerror(v_104); else
    stack[0] = car(v_104);
    v_104 = stack[-7];
    if (!car_legal(v_103)) v_103 = cdrerror(v_103); else
    v_103 = cdr(v_103);
    {   LispObject fn = basic_elt(env, 2); // quotf
    v_103 = (*qfn2(fn))(fn, v_104, v_103);
    }
    env = stack[-9];
    {   LispObject fn = basic_elt(env, 3); // multf
    v_103 = (*qfn2(fn))(fn, stack[0], v_103);
    }
    env = stack[-9];
    v_103 = ncons(v_103);
    env = stack[-9];
    stack[-2] = v_103;
    stack[-3] = v_103;
v_51:
    v_103 = stack[-4];
    if (!car_legal(v_103)) v_103 = cdrerror(v_103); else
    v_103 = cdr(v_103);
    stack[-4] = v_103;
    v_103 = stack[-4];
    if (v_103 == nil) goto v_74;
    else goto v_75;
v_74:
    v_103 = stack[-3];
    v_104 = v_103;
    goto v_50;
v_75:
    stack[-1] = stack[-2];
    v_103 = stack[-4];
    if (!car_legal(v_103)) v_103 = carerror(v_103); else
    v_103 = car(v_103);
    v_104 = v_103;
    if (!car_legal(v_104)) stack[0] = carerror(v_104); else
    stack[0] = car(v_104);
    v_104 = stack[-7];
    if (!car_legal(v_103)) v_103 = cdrerror(v_103); else
    v_103 = cdr(v_103);
    {   LispObject fn = basic_elt(env, 2); // quotf
    v_103 = (*qfn2(fn))(fn, v_104, v_103);
    }
    env = stack[-9];
    {   LispObject fn = basic_elt(env, 3); // multf
    v_103 = (*qfn2(fn))(fn, stack[0], v_103);
    }
    env = stack[-9];
    v_103 = ncons(v_103);
    env = stack[-9];
    if (!car_legal(stack[-1])) rplacd_fails(stack[-1]);
    setcdr(stack[-1], v_103);
    v_103 = stack[-2];
    if (!car_legal(v_103)) v_103 = cdrerror(v_103); else
    v_103 = cdr(v_103);
    stack[-2] = v_103;
    goto v_51;
v_50:
    v_103 = stack[-6];
    v_103 = cons(v_104, v_103);
    env = stack[-9];
    stack[-6] = v_103;
    v_104 = stack[-7];
    v_103 = stack[-8];
    {   LispObject fn = basic_elt(env, 3); // multf
    v_103 = (*qfn2(fn))(fn, v_104, v_103);
    }
    env = stack[-9];
    stack[-8] = v_103;
    v_103 = stack[-5];
    if (!car_legal(v_103)) v_103 = cdrerror(v_103); else
    v_103 = cdr(v_103);
    stack[-5] = v_103;
    goto v_13;
v_12:
    v_103 = stack[-6];
    v_104 = Lreverse(nil, v_103);
    v_103 = stack[-8];
    return cons(v_104, v_103);
    return onevalue(v_103);
}



// Code for extract_numid

static LispObject CC_extract_numid(LispObject env,
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
    stack[0] = v_2;
// end of prologue
v_1:
    v_31 = stack[0];
    if (v_31 == nil) goto v_6;
    else goto v_7;
v_6:
    v_31 = nil;
    goto v_5;
v_7:
    v_31 = stack[0];
    if (!car_legal(v_31)) v_31 = carerror(v_31); else
    v_31 = car(v_31);
    {   LispObject fn = basic_elt(env, 1); // !*id2num
    v_31 = (*qfn1(fn))(fn, v_31);
    }
    env = stack[-2];
    v_32 = v_31;
    v_31 = v_32;
    if (v_31 == nil) goto v_19;
    stack[-1] = v_32;
    v_31 = stack[0];
    if (!car_legal(v_31)) v_31 = cdrerror(v_31); else
    v_31 = cdr(v_31);
    {   LispObject fn = basic_elt(env, 0); // extract_numid
    v_31 = (*qfn1(fn))(fn, v_31);
    }
    {
        LispObject v_35 = stack[-1];
        return cons(v_35, v_31);
    }
v_19:
    v_31 = stack[0];
    if (!car_legal(v_31)) v_31 = cdrerror(v_31); else
    v_31 = cdr(v_31);
    stack[0] = v_31;
    goto v_1;
    v_31 = nil;
    goto v_5;
    v_31 = nil;
v_5:
    return onevalue(v_31);
}



// Code for eval_uni_poly

static LispObject CC_eval_uni_poly(LispObject env,
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
    v_69 = stack[-2];
    if (!consp(v_69)) goto v_7;
    else goto v_8;
v_7:
    v_69 = stack[-2];
    goto v_6;
v_8:
    v_69 = stack[-2];
    if (!car_legal(v_69)) v_69 = carerror(v_69); else
    v_69 = car(v_69);
    if (!car_legal(v_69)) v_69 = cdrerror(v_69); else
    v_69 = cdr(v_69);
    v_71 = v_69;
    v_69 = stack[-2];
    if (!car_legal(v_69)) v_69 = carerror(v_69); else
    v_69 = car(v_69);
    if (!car_legal(v_69)) v_69 = carerror(v_69); else
    v_69 = car(v_69);
    if (!car_legal(v_69)) v_69 = cdrerror(v_69); else
    v_69 = cdr(v_69);
    v_70 = v_69;
    v_69 = stack[-2];
    if (!car_legal(v_69)) v_69 = cdrerror(v_69); else
    v_69 = cdr(v_69);
    stack[-2] = v_69;
v_28:
    v_69 = stack[-2];
    if (!consp(v_69)) goto v_31;
    else goto v_32;
v_31:
    goto v_27;
v_32:
    stack[-3] = v_71;
    stack[0] = stack[-1];
    v_69 = stack[-2];
    if (!car_legal(v_69)) v_69 = carerror(v_69); else
    v_69 = car(v_69);
    if (!car_legal(v_69)) v_69 = carerror(v_69); else
    v_69 = car(v_69);
    if (!car_legal(v_69)) v_69 = cdrerror(v_69); else
    v_69 = cdr(v_69);
    v_69 = difference2(v_70, v_69);
    env = stack[-4];
    v_69 = Lexpt(nil, stack[0], v_69);
    env = stack[-4];
    v_70 = times2(stack[-3], v_69);
    env = stack[-4];
    v_69 = stack[-2];
    if (!car_legal(v_69)) v_69 = carerror(v_69); else
    v_69 = car(v_69);
    if (!car_legal(v_69)) v_69 = cdrerror(v_69); else
    v_69 = cdr(v_69);
    v_69 = plus2(v_70, v_69);
    env = stack[-4];
    v_71 = v_69;
    v_69 = stack[-2];
    if (!car_legal(v_69)) v_69 = carerror(v_69); else
    v_69 = car(v_69);
    if (!car_legal(v_69)) v_69 = carerror(v_69); else
    v_69 = car(v_69);
    if (!car_legal(v_69)) v_69 = cdrerror(v_69); else
    v_69 = cdr(v_69);
    v_70 = v_69;
    v_69 = stack[-2];
    if (!car_legal(v_69)) v_69 = cdrerror(v_69); else
    v_69 = cdr(v_69);
    stack[-2] = v_69;
    goto v_28;
v_27:
    stack[0] = v_71;
    v_69 = stack[-1];
    v_69 = Lexpt(nil, v_69, v_70);
    env = stack[-4];
    v_69 = times2(stack[0], v_69);
    env = stack[-4];
    v_71 = v_69;
    v_69 = stack[-2];
    if (v_69 == nil) goto v_63;
    v_70 = v_71;
    v_69 = stack[-2];
    v_69 = plus2(v_70, v_69);
    v_71 = v_69;
    goto v_61;
v_63:
v_61:
    v_69 = v_71;
    goto v_6;
    v_69 = nil;
v_6:
    return onevalue(v_69);
}



// Code for exports

static LispObject CC_exports(LispObject env,
                         LispObject v_2)
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
    v_10 = v_9;
    v_9 = qvalue(basic_elt(env, 1)); // exportslist!*
    {   LispObject fn = basic_elt(env, 2); // union
    v_9 = (*qfn2(fn))(fn, v_10, v_9);
    }
    env = stack[0];
    setvalue(basic_elt(env, 1), v_9); // exportslist!*
    v_9 = nil;
    return onevalue(v_9);
}



// Code for smt_liter

static LispObject CC_smt_liter(LispObject env,
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
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_12 = v_2;
// end of prologue
    v_13 = v_12;
    v_13 = Lalpha_char_p(nil, v_13);
    env = stack[0];
    if (v_13 == nil) goto v_6;
    else goto v_5;
v_6:
    v_13 = basic_elt(env, 1); // (!~ !! !@ !$ !% !^ !& !* !_ !- !+ != !< !> !. !? !/ !:)
    v_12 = Lmemq(nil, v_12, v_13);
    v_13 = v_12;
v_5:
    return onevalue(v_13);
}



// Code for giprim

static LispObject CC_giprim(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_17, v_18, v_19;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_19 = v_2;
// end of prologue
    v_18 = v_19;
    v_17 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_18 == v_17) goto v_6;
    else goto v_7;
v_6:
    v_17 = basic_elt(env, 1); // i
    goto v_5;
v_7:
    v_17 = basic_elt(env, 2); // times
    v_18 = v_19;
    v_19 = basic_elt(env, 1); // i
    return list3(v_17, v_18, v_19);
    v_17 = nil;
v_5:
    return onevalue(v_17);
}



// Code for qqe_prefix!-length

static LispObject CC_qqe_prefixKlength(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    v_47 = v_2;
// end of prologue
    v_46 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_48 = v_46;
    v_46 = v_47;
    if (v_46 == nil) goto v_11;
    else goto v_12;
v_11:
    v_46 = nil;
    stack[0] = v_46;
    goto v_10;
v_12:
    v_46 = v_47;
    stack[0] = v_46;
    goto v_10;
v_10:
v_21:
    v_46 = stack[0];
    if (v_46 == nil) goto v_24;
    v_46 = stack[0];
    if (!consp(v_46)) goto v_24;
    goto v_25;
v_24:
    goto v_20;
v_25:
    v_46 = stack[0];
    if (!car_legal(v_46)) v_47 = carerror(v_46); else
    v_47 = car(v_46);
    v_46 = basic_elt(env, 1); // (rtail ltail rhead lhead)
    v_46 = Lmemq(nil, v_47, v_46);
    if (v_46 == nil) goto v_34;
    v_46 = v_48;
    v_46 = add1(v_46);
    env = stack[-1];
    v_48 = v_46;
    goto v_32;
v_34:
v_32:
    v_46 = stack[0];
    if (!car_legal(v_46)) v_46 = cdrerror(v_46); else
    v_46 = cdr(v_46);
    if (!car_legal(v_46)) v_46 = carerror(v_46); else
    v_46 = car(v_46);
    stack[0] = v_46;
    goto v_21;
v_20:
    v_46 = v_48;
    return onevalue(v_46);
}



// Code for rl_simplb

static LispObject CC_rl_simplb(LispObject env,
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
    stack[0] = qvalue(basic_elt(env, 1)); // rl_simplb!*
    v_10 = list2(v_11, v_10);
    env = stack[-1];
    {
        LispObject v_13 = stack[0];
        LispObject fn = basic_elt(env, 2); // apply
        return (*qfn2(fn))(fn, v_13, v_10);
    }
}



// Code for intconv

static LispObject CC_intconv(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_26, v_27, v_28;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_28 = v_2;
// end of prologue
    v_26 = qvalue(basic_elt(env, 1)); // dmode!*
    if (v_26 == nil) goto v_10;
    else goto v_11;
v_10:
    v_26 = lisp_true;
    goto v_9;
v_11:
    v_27 = qvalue(basic_elt(env, 1)); // dmode!*
    v_26 = basic_elt(env, 2); // (!:rd!: !:cr!:)
    v_26 = Lmemq(nil, v_27, v_26);
    goto v_9;
    v_26 = nil;
v_9:
    if (v_26 == nil) goto v_7;
    v_26 = v_28;
    goto v_5;
v_7:
    v_26 = qvalue(basic_elt(env, 1)); // dmode!*
    if (!symbolp(v_26)) v_26 = nil;
    else { v_26 = qfastgets(v_26);
           if (v_26 != nil) { v_26 = elt(v_26, 34); // i2d
#ifdef RECORD_GET
             if (v_26 != SPID_NOPROP)
                record_get(elt(fastget_names, 34), 1);
             else record_get(elt(fastget_names, 34), 0),
                v_26 = nil; }
           else record_get(elt(fastget_names, 34), 0); }
#else
             if (v_26 == SPID_NOPROP) v_26 = nil; }}
#endif
    v_27 = v_28;
        return Lapply1(nil, v_26, v_27);
    v_26 = nil;
v_5:
    return onevalue(v_26);
}



// Code for splitrec

static LispObject CC_splitrec(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_115, v_116, v_117;
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
    push(nil, nil);
    stack_popper stack_popper_var(8);
// copy arguments values to proper place
    stack[-2] = v_5;
    stack[-3] = v_4;
    stack[-4] = v_3;
    stack[-5] = v_2;
// end of prologue
    v_115 = stack[-5];
    if (!consp(v_115)) goto v_13;
    else goto v_14;
v_13:
    v_115 = lisp_true;
    goto v_12;
v_14:
    v_115 = stack[-5];
    if (!car_legal(v_115)) v_115 = carerror(v_115); else
    v_115 = car(v_115);
    v_115 = (consp(v_115) ? nil : lisp_true);
    goto v_12;
    v_115 = nil;
v_12:
    if (v_115 == nil) goto v_10;
    v_116 = stack[-5];
    v_115 = stack[-3];
    {   LispObject fn = basic_elt(env, 2); // multf
    v_115 = (*qfn2(fn))(fn, v_116, v_115);
    }
    env = stack[-7];
    stack[-3] = v_115;
    v_116 = stack[-2];
    v_115 = qvalue(basic_elt(env, 1)); // list!-pq
    v_115 = Lassoc(nil, v_116, v_115);
    v_116 = v_115;
    if (v_115 == nil) goto v_31;
    stack[0] = v_116;
    v_115 = v_116;
    if (!car_legal(v_115)) v_116 = cdrerror(v_115); else
    v_116 = cdr(v_115);
    v_115 = stack[-3];
    {   LispObject fn = basic_elt(env, 3); // addf
    v_115 = (*qfn2(fn))(fn, v_116, v_115);
    }
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_115);
    goto v_29;
v_31:
    v_117 = stack[-2];
    v_116 = stack[-3];
    v_115 = qvalue(basic_elt(env, 1)); // list!-pq
    v_115 = acons(v_117, v_116, v_115);
    env = stack[-7];
    setvalue(basic_elt(env, 1), v_115); // list!-pq
    goto v_29;
v_29:
    v_115 = nil;
    goto v_8;
v_10:
    v_115 = stack[-5];
    if (!car_legal(v_115)) v_115 = carerror(v_115); else
    v_115 = car(v_115);
    if (!car_legal(v_115)) v_115 = carerror(v_115); else
    v_115 = car(v_115);
    if (!car_legal(v_115)) v_116 = carerror(v_115); else
    v_116 = car(v_115);
    v_115 = stack[-4];
    if (!consp(v_116)) goto v_58;
    v_116 = car(v_116);
    if (v_116 == v_115) goto v_57;
    else goto v_58;
v_57:
    v_115 = stack[-5];
    if (!car_legal(v_115)) v_115 = carerror(v_115); else
    v_115 = car(v_115);
    if (!car_legal(v_115)) v_115 = carerror(v_115); else
    v_115 = car(v_115);
    if (!car_legal(v_115)) v_115 = carerror(v_115); else
    v_115 = car(v_115);
    v_116 = Llength(nil, v_115);
    env = stack[-7];
    v_115 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_115 = static_cast<LispObject>(greaterp2(v_116, v_115));
    v_115 = v_115 ? lisp_true : nil;
    env = stack[-7];
    goto v_56;
v_58:
    v_115 = nil;
    goto v_56;
    v_115 = nil;
v_56:
    if (v_115 == nil) goto v_54;
    v_115 = stack[-5];
    if (!car_legal(v_115)) v_115 = carerror(v_115); else
    v_115 = car(v_115);
    if (!car_legal(v_115)) stack[-6] = cdrerror(v_115); else
    stack[-6] = cdr(v_115);
    stack[-1] = stack[-4];
    stack[0] = stack[-3];
    v_115 = stack[-5];
    if (!car_legal(v_115)) v_115 = carerror(v_115); else
    v_115 = car(v_115);
    if (!car_legal(v_115)) v_116 = carerror(v_115); else
    v_116 = car(v_115);
    v_115 = stack[-2];
    v_115 = cons(v_116, v_115);
    env = stack[-7];
    v_115 = ncons(v_115);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 0); // splitrec
    v_115 = (*qfn4up(fn))(fn, stack[-6], stack[-1], stack[0], v_115);
    }
    env = stack[-7];
    goto v_52;
v_54:
    v_115 = stack[-5];
    if (!car_legal(v_115)) v_115 = carerror(v_115); else
    v_115 = car(v_115);
    if (!car_legal(v_115)) stack[-6] = cdrerror(v_115); else
    stack[-6] = cdr(v_115);
    stack[-1] = stack[-4];
    v_115 = stack[-5];
    if (!car_legal(v_115)) v_115 = carerror(v_115); else
    v_115 = car(v_115);
    if (!car_legal(v_115)) v_116 = carerror(v_115); else
    v_116 = car(v_115);
    v_115 = stack[-3];
    v_115 = cons(v_116, v_115);
    env = stack[-7];
    stack[0] = ncons(v_115);
    env = stack[-7];
    v_115 = stack[-2];
    v_115 = ncons(v_115);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 0); // splitrec
    v_115 = (*qfn4up(fn))(fn, stack[-6], stack[-1], stack[0], v_115);
    }
    env = stack[-7];
    goto v_52;
v_52:
    v_115 = stack[-5];
    if (!car_legal(v_115)) v_115 = cdrerror(v_115); else
    v_115 = cdr(v_115);
    if (v_115 == nil) goto v_105;
    v_115 = stack[-5];
    if (!car_legal(v_115)) stack[0] = cdrerror(v_115); else
    stack[0] = cdr(v_115);
    stack[-1] = stack[-4];
    v_115 = stack[-2];
    v_115 = ncons(v_115);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 0); // splitrec
    v_115 = (*qfn4up(fn))(fn, stack[0], stack[-1], stack[-3], v_115);
    }
    goto v_103;
v_105:
v_103:
    v_115 = nil;
    goto v_8;
    v_115 = nil;
v_8:
    return onevalue(v_115);
}



// Code for f2dip2

static LispObject CC_f2dip2(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_47, v_48, v_49;
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
    stack[-2] = v_6;
    stack[-3] = v_5;
    stack[-4] = v_4;
    stack[-5] = v_3;
    stack[-6] = v_2;
// end of prologue
    v_48 = stack[-6];
    v_47 = qvalue(basic_elt(env, 1)); // dipvars!*
    v_47 = Lmemq(nil, v_48, v_47);
    if (v_47 == nil) goto v_11;
    stack[-7] = stack[-3];
    stack[-1] = stack[-6];
    stack[0] = stack[-5];
    v_47 = qvalue(basic_elt(env, 1)); // dipvars!*
    v_47 = ncons(v_47);
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 2); // evinsert
    v_47 = (*qfn4up(fn))(fn, stack[-7], stack[-1], stack[0], v_47);
    }
    env = stack[-8];
    goto v_9;
v_11:
    v_47 = nil;
    goto v_9;
    v_47 = nil;
v_9:
    v_48 = v_47;
    v_47 = v_48;
    if (v_47 == nil) goto v_28;
    v_47 = v_48;
    stack[-3] = v_47;
    goto v_26;
v_28:
    stack[0] = stack[-2];
    v_48 = stack[-6];
    v_47 = stack[-5];
    {   LispObject fn = basic_elt(env, 3); // to
    v_48 = (*qfn2(fn))(fn, v_48, v_47);
    }
    env = stack[-8];
    v_47 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_49 = cons(v_48, v_47);
    env = stack[-8];
    v_48 = nil;
    v_47 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_47 = acons(v_49, v_48, v_47);
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 4); // multsq
    v_47 = (*qfn2(fn))(fn, stack[0], v_47);
    }
    env = stack[-8];
    stack[-2] = v_47;
    goto v_26;
v_26:
    v_49 = stack[-4];
    v_48 = stack[-3];
    v_47 = stack[-2];
    {
        LispObject fn = basic_elt(env, 5); // f2dip1
        return (*qfn3(fn))(fn, v_49, v_48, v_47);
    }
}



// Code for xpartitk

static LispObject CC_xpartitk(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_37 = stack[0];
    v_36 = basic_elt(env, 1); // (wedge partdf)
    {   LispObject fn = basic_elt(env, 2); // memqcar
    v_36 = (*qfn2(fn))(fn, v_37, v_36);
    }
    env = stack[-1];
    if (v_36 == nil) goto v_7;
    v_36 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // reval
    v_36 = (*qfn1(fn))(fn, v_36);
    }
    env = stack[-1];
    v_38 = v_36;
    v_37 = v_38;
    v_36 = stack[0];
    if (equal(v_37, v_36)) goto v_16;
    else goto v_17;
v_16:
    v_38 = stack[0];
    v_37 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_36 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_36 = list2star(v_38, v_37, v_36);
    return ncons(v_36);
v_17:
    v_36 = v_38;
    {
        LispObject fn = basic_elt(env, 4); // xpartitop
        return (*qfn1(fn))(fn, v_36);
    }
    v_36 = nil;
    goto v_5;
v_7:
    v_38 = stack[0];
    v_37 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_36 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_36 = list2star(v_38, v_37, v_36);
    return ncons(v_36);
    v_36 = nil;
v_5:
    return onevalue(v_36);
}



// Code for sqprla

static LispObject CC_sqprla(LispObject env,
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
    if (!car_legal(v_10)) v_10 = carerror(v_10); else
    v_10 = car(v_10);
    {   LispObject fn = basic_elt(env, 1); // prepsq!*
    v_11 = (*qfn1(fn))(fn, v_10);
    }
    env = stack[-1];
    v_10 = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // maprintla
        return (*qfn2(fn))(fn, v_11, v_10);
    }
}



// Code for physop!*sq

static LispObject CC_physopHsq(LispObject env,
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
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_20 = v_2;
// end of prologue
    if (!car_legal(v_20)) v_20 = carerror(v_20); else
    v_20 = car(v_20);
    {   LispObject fn = basic_elt(env, 2); // !*q2a
    v_20 = (*qfn1(fn))(fn, v_20);
    }
    env = stack[0];
    {   LispObject fn = basic_elt(env, 3); // !*collectphysops
    v_20 = (*qfn1(fn))(fn, v_20);
    }
    env = stack[0];
    if (v_20 == nil) goto v_13;
    else goto v_14;
v_13:
    v_20 = nil;
    goto v_12;
v_14:
    v_20 = basic_elt(env, 1); // physop
    goto v_12;
    v_20 = nil;
v_12:
    return onevalue(v_20);
}



// Code for precision1

static LispObject CC_precision1(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_81 = v_3;
    stack[0] = v_2;
// end of prologue
    v_80 = stack[0];
    v_79 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_80 == v_79) goto v_10;
    else goto v_11;
v_10:
    v_79 = qvalue(basic_elt(env, 1)); // !!rdprec
    goto v_7;
v_11:
    v_79 = v_81;
    if (v_79 == nil) goto v_18;
    {   LispObject fn = basic_elt(env, 13); // rmsubs
    v_79 = (*qfn0(fn))(fn);
    }
    env = stack[-4];
    goto v_16;
v_18:
v_16:
    v_79 = qvalue(basic_elt(env, 1)); // !!rdprec
    stack[-3] = v_79;
    v_79 = qvalue(basic_elt(env, 2)); // !*roundbf
    if (v_79 == nil) goto v_26;
    v_79 = stack[0];
    v_80 = v_79;
    goto v_24;
v_26:
    v_80 = stack[0];
    v_79 = qvalue(basic_elt(env, 3)); // minprec!#
    {   LispObject fn = basic_elt(env, 14); // max
    v_79 = (*qfn2(fn))(fn, v_80, v_79);
    }
    env = stack[-4];
    v_80 = v_79;
    goto v_24;
    v_80 = nil;
v_24:
    setvalue(basic_elt(env, 1), v_80); // !!rdprec
    v_79 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_79 = plus2(v_80, v_79);
    env = stack[-4];
    setvalue(basic_elt(env, 4), v_79); // !:prec!:
    v_79 = qvalue(basic_elt(env, 5)); // !:print!-prec!:
    if (v_79 == nil) goto v_38;
    v_80 = qvalue(basic_elt(env, 5)); // !:print!-prec!:
    v_79 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_79 = plus2(v_80, v_79);
    env = stack[-4];
    v_79 = static_cast<LispObject>(lessp2(stack[0], v_79));
    v_79 = v_79 ? lisp_true : nil;
    env = stack[-4];
    if (v_79 == nil) goto v_38;
    v_79 = nil;
    setvalue(basic_elt(env, 5), v_79); // !:print!-prec!:
    goto v_36;
v_38:
v_36:
    v_79 = qvalue(basic_elt(env, 4)); // !:prec!:
    {   LispObject fn = basic_elt(env, 15); // decprec2internal
    v_79 = (*qfn1(fn))(fn, v_79);
    }
    env = stack[-4];
    setvalue(basic_elt(env, 6), v_79); // !:bprec!:
    stack[-1] = basic_elt(env, 7); // !:rd!:
    stack[0] = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_80 = qvalue(basic_elt(env, 6)); // !:bprec!:
    v_79 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_79 = quot2(v_80, v_79);
    env = stack[-4];
    v_79 = negate(v_79);
    env = stack[-4];
    v_79 = list2star(stack[-1], stack[0], v_79);
    env = stack[-4];
    setvalue(basic_elt(env, 8), v_79); // epsqrt!*
    stack[-1] = basic_elt(env, 7); // !:rd!:
    stack[0] = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_80 = static_cast<LispObject>(96)+TAG_FIXNUM; // 6
    v_79 = qvalue(basic_elt(env, 6)); // !:bprec!:
    v_79 = difference2(v_80, v_79);
    env = stack[-4];
    v_79 = list2star(stack[-1], stack[0], v_79);
    env = stack[-4];
    setvalue(basic_elt(env, 9), v_79); // rd!-tolerance!*
    stack[-2] = basic_elt(env, 7); // !:rd!:
    stack[-1] = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[0] = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_80 = static_cast<LispObject>(96)+TAG_FIXNUM; // 6
    v_79 = qvalue(basic_elt(env, 6)); // !:bprec!:
    v_79 = difference2(v_80, v_79);
    env = stack[-4];
    v_79 = times2(stack[0], v_79);
    env = stack[-4];
    v_79 = list2star(stack[-2], stack[-1], v_79);
    env = stack[-4];
    setvalue(basic_elt(env, 10), v_79); // cr!-tolerance!*
    v_80 = qvalue(basic_elt(env, 1)); // !!rdprec
    v_79 = qvalue(basic_elt(env, 11)); // !!flprec
    v_79 = static_cast<LispObject>(greaterp2(v_80, v_79));
    v_79 = v_79 ? lisp_true : nil;
    env = stack[-4];
    if (v_79 == nil) goto v_73;
    else goto v_72;
v_73:
    v_79 = qvalue(basic_elt(env, 2)); // !*roundbf
v_72:
    setvalue(basic_elt(env, 12), v_79); // !*!*roundbf
    v_79 = stack[-3];
v_7:
    return onevalue(v_79);
}



// Code for merge_lists

static LispObject CC_merge_lists(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_128, v_129;
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
    stack[-5] = v_2;
// end of prologue
    stack[-6] = nil;
    stack[-3] = nil;
    stack[-1] = nil;
    v_128 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[0] = v_128;
    v_128 = stack[-5];
    v_128 = Lreverse(nil, v_128);
    env = stack[-7];
    stack[-5] = v_128;
    v_128 = stack[-5];
    if (v_128 == nil) goto v_22;
    v_128 = stack[-5];
    if (!car_legal(v_128)) v_128 = carerror(v_128); else
    v_128 = car(v_128);
    stack[-6] = v_128;
    goto v_20;
v_22:
    goto v_14;
v_20:
v_13:
    v_128 = stack[-4];
    if (v_128 == nil) goto v_31;
    v_128 = stack[-4];
    if (!car_legal(v_128)) v_128 = carerror(v_128); else
    v_128 = car(v_128);
    stack[-2] = v_128;
    goto v_29;
v_31:
    goto v_14;
v_29:
    v_129 = stack[-6];
    v_128 = stack[-2];
    v_128 = static_cast<LispObject>(lessp2(v_129, v_128));
    v_128 = v_128 ? lisp_true : nil;
    env = stack[-7];
    if (v_128 == nil) goto v_40;
    goto v_14;
v_40:
    v_129 = stack[-2];
    v_128 = stack[-3];
    v_128 = cons(v_129, v_128);
    env = stack[-7];
    stack[-3] = v_128;
    v_128 = stack[-1];
    v_128 = (v_128 == nil ? lisp_true : nil);
    stack[-1] = v_128;
    v_128 = stack[-4];
    if (!car_legal(v_128)) v_128 = cdrerror(v_128); else
    v_128 = cdr(v_128);
    stack[-4] = v_128;
    goto v_13;
v_14:
    v_128 = stack[-5];
    if (v_128 == nil) goto v_53;
    else goto v_54;
v_53:
    v_129 = stack[-3];
    v_128 = stack[-4];
    {   LispObject fn = basic_elt(env, 1); // reversip2
    v_128 = (*qfn2(fn))(fn, v_129, v_128);
    }
    {
        LispObject v_137 = stack[0];
        return cons(v_137, v_128);
    }
v_54:
    v_128 = stack[-3];
    if (v_128 == nil) goto v_63;
    else goto v_64;
v_63:
    v_129 = stack[-5];
    v_128 = stack[-4];
    {   LispObject fn = basic_elt(env, 1); // reversip2
    v_128 = (*qfn2(fn))(fn, v_129, v_128);
    }
    {
        LispObject v_138 = stack[0];
        return cons(v_138, v_128);
    }
v_64:
    v_128 = stack[-3];
    if (!car_legal(v_128)) v_128 = carerror(v_128); else
    v_128 = car(v_128);
    stack[-2] = v_128;
    v_129 = stack[-6];
    v_128 = stack[-2];
    if (equal(v_129, v_128)) goto v_79;
    else goto v_80;
v_79:
    v_129 = stack[-6];
    v_128 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_128 = static_cast<LispObject>(greaterp2(v_129, v_128));
    v_128 = v_128 ? lisp_true : nil;
    env = stack[-7];
    goto v_78;
v_80:
    v_128 = nil;
    goto v_78;
    v_128 = nil;
v_78:
    if (v_128 == nil) goto v_76;
    v_128 = nil;
    goto v_12;
v_76:
    v_129 = stack[-6];
    v_128 = stack[-2];
    v_128 = static_cast<LispObject>(greaterp2(v_129, v_128));
    v_128 = v_128 ? lisp_true : nil;
    env = stack[-7];
    if (v_128 == nil) goto v_93;
    goto v_15;
v_93:
    v_129 = stack[-2];
    v_128 = stack[-4];
    v_128 = cons(v_129, v_128);
    env = stack[-7];
    stack[-4] = v_128;
    v_128 = stack[-3];
    if (!car_legal(v_128)) v_128 = cdrerror(v_128); else
    v_128 = cdr(v_128);
    stack[-3] = v_128;
    v_128 = stack[-1];
    v_128 = (v_128 == nil ? lisp_true : nil);
    stack[-1] = v_128;
    goto v_14;
v_15:
    v_129 = stack[-6];
    v_128 = stack[-4];
    v_128 = cons(v_129, v_128);
    env = stack[-7];
    stack[-4] = v_128;
    v_128 = stack[-5];
    if (!car_legal(v_128)) v_128 = cdrerror(v_128); else
    v_128 = cdr(v_128);
    stack[-5] = v_128;
    v_128 = stack[-1];
    if (v_128 == nil) goto v_112;
    v_129 = stack[-6];
    v_128 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_128 = static_cast<LispObject>(greaterp2(v_129, v_128));
    v_128 = v_128 ? lisp_true : nil;
    env = stack[-7];
    if (v_128 == nil) goto v_112;
    v_128 = stack[0];
    v_128 = negate(v_128);
    env = stack[-7];
    stack[0] = v_128;
    goto v_110;
v_112:
v_110:
    v_128 = stack[-5];
    if (v_128 == nil) goto v_124;
    v_128 = stack[-5];
    if (!car_legal(v_128)) v_128 = carerror(v_128); else
    v_128 = car(v_128);
    stack[-6] = v_128;
    goto v_122;
v_124:
v_122:
    goto v_14;
v_12:
    return onevalue(v_128);
}



// Code for update_components

static LispObject CC_update_components(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_41, v_42, v_43, v_44;
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
    v_43 = v_4;
    stack[0] = v_3;
    v_41 = v_2;
// end of prologue
    stack[-1] = v_41;
v_12:
    v_41 = stack[-1];
    if (v_41 == nil) goto v_16;
    else goto v_17;
v_16:
    goto v_11;
v_17:
    v_41 = stack[-1];
    if (!car_legal(v_41)) v_41 = carerror(v_41); else
    v_41 = car(v_41);
    v_42 = v_41;
    v_44 = v_42;
    v_41 = stack[0];
    v_41 = Lassoc(nil, v_44, v_41);
    v_44 = v_41;
    if (v_41 == nil) goto v_26;
    v_41 = v_43;
    v_41 = Lassoc(nil, v_42, v_41);
    if (v_41 == nil) goto v_31;
    else goto v_26;
v_31:
    v_41 = v_44;
    v_42 = v_43;
    v_41 = cons(v_41, v_42);
    env = stack[-2];
    v_43 = v_41;
    goto v_24;
v_26:
v_24:
    v_41 = stack[-1];
    if (!car_legal(v_41)) v_41 = cdrerror(v_41); else
    v_41 = cdr(v_41);
    stack[-1] = v_41;
    goto v_12;
v_11:
    v_41 = v_43;
    return onevalue(v_41);
}



// Code for ofsf_irl2atl

static LispObject CC_ofsf_irl2atl(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    stack[-3] = v_4;
    v_55 = v_3;
    stack[-4] = v_2;
// end of prologue
    stack[-5] = v_55;
v_11:
    v_55 = stack[-5];
    if (v_55 == nil) goto v_16;
    else goto v_17;
v_16:
    v_55 = nil;
    goto v_10;
v_17:
    v_55 = stack[-5];
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    v_57 = stack[-4];
    v_56 = v_55;
    v_55 = stack[-3];
    {   LispObject fn = basic_elt(env, 1); // ofsf_ir2atl
    v_55 = (*qfn3(fn))(fn, v_57, v_56, v_55);
    }
    env = stack[-6];
    stack[-2] = v_55;
    v_55 = stack[-2];
    {   LispObject fn = basic_elt(env, 2); // lastpair
    v_55 = (*qfn1(fn))(fn, v_55);
    }
    env = stack[-6];
    stack[-1] = v_55;
    v_55 = stack[-5];
    if (!car_legal(v_55)) v_55 = cdrerror(v_55); else
    v_55 = cdr(v_55);
    stack[-5] = v_55;
    v_55 = stack[-1];
    if (!consp(v_55)) goto v_33;
    else goto v_34;
v_33:
    goto v_11;
v_34:
v_12:
    v_55 = stack[-5];
    if (v_55 == nil) goto v_38;
    else goto v_39;
v_38:
    v_55 = stack[-2];
    goto v_10;
v_39:
    stack[0] = stack[-1];
    v_55 = stack[-5];
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    v_57 = stack[-4];
    v_56 = v_55;
    v_55 = stack[-3];
    {   LispObject fn = basic_elt(env, 1); // ofsf_ir2atl
    v_55 = (*qfn3(fn))(fn, v_57, v_56, v_55);
    }
    env = stack[-6];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_55);
    v_55 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // lastpair
    v_55 = (*qfn1(fn))(fn, v_55);
    }
    env = stack[-6];
    stack[-1] = v_55;
    v_55 = stack[-5];
    if (!car_legal(v_55)) v_55 = cdrerror(v_55); else
    v_55 = cdr(v_55);
    stack[-5] = v_55;
    goto v_12;
v_10:
    return onevalue(v_55);
}



// Code for ofsf_evalatp

static LispObject CC_ofsf_evalatp(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_64 = v_2;
// end of prologue
    v_63 = v_64;
    v_62 = basic_elt(env, 1); // equal
    if (v_63 == v_62) goto v_7;
    else goto v_8;
v_7:
    v_62 = stack[0];
    v_62 = (v_62 == nil ? lisp_true : nil);
    goto v_6;
v_8:
    v_63 = v_64;
    v_62 = basic_elt(env, 2); // neq
    if (v_63 == v_62) goto v_13;
    else goto v_14;
v_13:
    v_62 = stack[0];
    v_62 = (v_62 == nil ? lisp_true : nil);
    v_62 = (v_62 == nil ? lisp_true : nil);
    goto v_6;
v_14:
    v_63 = v_64;
    v_62 = basic_elt(env, 3); // leq
    if (v_63 == v_62) goto v_20;
    else goto v_21;
v_20:
    v_62 = stack[0];
    {   LispObject fn = basic_elt(env, 8); // minusf
    v_62 = (*qfn1(fn))(fn, v_62);
    }
    if (v_62 == nil) goto v_26;
    else goto v_25;
v_26:
    v_62 = stack[0];
    v_62 = (v_62 == nil ? lisp_true : nil);
v_25:
    goto v_6;
v_21:
    v_63 = v_64;
    v_62 = basic_elt(env, 4); // geq
    if (v_63 == v_62) goto v_31;
    else goto v_32;
v_31:
    v_62 = stack[0];
    {   LispObject fn = basic_elt(env, 8); // minusf
    v_62 = (*qfn1(fn))(fn, v_62);
    }
    v_62 = (v_62 == nil ? lisp_true : nil);
    goto v_6;
v_32:
    v_63 = v_64;
    v_62 = basic_elt(env, 5); // lessp
    if (v_63 == v_62) goto v_38;
    else goto v_39;
v_38:
    v_62 = stack[0];
    {
        LispObject fn = basic_elt(env, 8); // minusf
        return (*qfn1(fn))(fn, v_62);
    }
v_39:
    v_63 = v_64;
    v_62 = basic_elt(env, 6); // greaterp
    if (v_63 == v_62) goto v_44;
    else goto v_45;
v_44:
    v_62 = stack[0];
    {   LispObject fn = basic_elt(env, 8); // minusf
    v_62 = (*qfn1(fn))(fn, v_62);
    }
    if (v_62 == nil) goto v_50;
    else goto v_49;
v_50:
    v_62 = stack[0];
    v_62 = (v_62 == nil ? lisp_true : nil);
v_49:
    v_62 = (v_62 == nil ? lisp_true : nil);
    goto v_6;
v_45:
    v_62 = basic_elt(env, 7); // "ofsf_evalatp: unknown operator "
    v_63 = v_64;
    v_62 = list2(v_62, v_63);
    env = stack[-1];
    {
        LispObject fn = basic_elt(env, 9); // rederr
        return (*qfn1(fn))(fn, v_62);
    }
    v_62 = nil;
v_6:
    return onevalue(v_62);
}



setup_type const u51_setup[] =
{
    {"symmetrize-inds",         G0W2,     G1W2,     CC_symmetrizeKinds,G3W2,G4W2},
    {"combin",                  G0W2,     G1W2,     CC_combin,G3W2,     G4W2},
    {"dv_skelsplit",            G0W1,     CC_dv_skelsplit,G2W1,G3W1,    G4W1},
    {"simpdot",                 G0W1,     CC_simpdot,G2W1,    G3W1,     G4W1},
    {"coeff_totder",            G0W3,     G1W3,     G2W3,     CC_coeff_totder,G4W3},
    {"ofsf_smmkatl-or1",        G0W3,     G1W3,     G2W3,     CC_ofsf_smmkatlKor1,G4W3},
    {"change+sq+to+int",        G0W1,     CC_changeLsqLtoLint,G2W1,G3W1,G4W1},
    {"qqe_simplqequal",         G0W2,     G1W2,     CC_qqe_simplqequal,G3W2,G4W2},
    {"acfsf_varlat",            G0W1,     CC_acfsf_varlat,G2W1,G3W1,    G4W1},
    {"gb_buchcrit4t",           G0W2,     G1W2,     CC_gb_buchcrit4t,G3W2,G4W2},
    {"transferrow1",            G0W1,     CC_transferrow1,G2W1,G3W1,    G4W1},
    {"vdpmember",               G0W2,     G1W2,     CC_vdpmember,G3W2,  G4W2},
    {"exptbf",                  G0W3,     G1W3,     G2W3,     CC_exptbf,G4W3},
    {"preproc",                 G0W1,     CC_preproc,G2W1,    G3W1,     G4W1},
    {"coeff1_calc",             G0W3,     G1W3,     G2W3,     CC_coeff1_calc,G4W3},
    {"subs2chkex",              G0W1,     CC_subs2chkex,G2W1, G3W1,     G4W1},
    {"red_redpol",              G0W2,     G1W2,     CC_red_redpol,G3W2, G4W2},
    {"ofsf_smmkatl-or",         G0W3,     G1W3,     G2W3,     CC_ofsf_smmkatlKor,G4W3},
    {"simp-sign2",              G0W1,     CC_simpKsign2,G2W1, G3W1,     G4W1},
    {"talp_try1",               G0W1,     CC_talp_try1,G2W1,  G3W1,     G4W1},
    {"tchscheme",               CC_tchscheme,G1W0,  G2W0,     G3W0,     G4W0},
    {"cos*",                    G0W1,     CC_cosH,  G2W1,     G3W1,     G4W1},
    {"requote1",                G0W1,     CC_requote1,G2W1,   G3W1,     G4W1},
    {"store_edges",             G0W1,     CC_store_edges,G2W1,G3W1,     G4W1},
    {"normmat",                 G0W1,     CC_normmat,G2W1,    G3W1,     G4W1},
    {"extract_numid",           G0W1,     CC_extract_numid,G2W1,G3W1,   G4W1},
    {"eval_uni_poly",           G0W2,     G1W2,     CC_eval_uni_poly,G3W2,G4W2},
    {"exports",                 G0W1,     CC_exports,G2W1,    G3W1,     G4W1},
    {"smt_liter",               G0W1,     CC_smt_liter,G2W1,  G3W1,     G4W1},
    {"giprim",                  G0W1,     CC_giprim,G2W1,     G3W1,     G4W1},
    {"qqe_prefix-length",       G0W1,     CC_qqe_prefixKlength,G2W1,G3W1,G4W1},
    {"rl_simplb",               G0W2,     G1W2,     CC_rl_simplb,G3W2,  G4W2},
    {"intconv",                 G0W1,     CC_intconv,G2W1,    G3W1,     G4W1},
    {"splitrec",                G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_splitrec},
    {"f2dip2",                  G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_f2dip2},
    {"xpartitk",                G0W1,     CC_xpartitk,G2W1,   G3W1,     G4W1},
    {"sqprla",                  G0W2,     G1W2,     CC_sqprla,G3W2,     G4W2},
    {"physop*sq",               G0W1,     CC_physopHsq,G2W1,  G3W1,     G4W1},
    {"precision1",              G0W2,     G1W2,     CC_precision1,G3W2, G4W2},
    {"merge_lists",             G0W2,     G1W2,     CC_merge_lists,G3W2,G4W2},
    {"update_components",       G0W3,     G1W3,     G2W3,     CC_update_components,G4W3},
    {"ofsf_irl2atl",            G0W3,     G1W3,     G2W3,     CC_ofsf_irl2atl,G4W3},
    {"ofsf_evalatp",            G0W2,     G1W2,     CC_ofsf_evalatp,G3W2,G4W2},
    {nullptr, 
        reinterpret_cast<no_args *>(
            reinterpret_cast<uintptr_t>("u51")),
        reinterpret_cast<one_arg *>(
            reinterpret_cast<uintptr_t>("10910 47199 2836573")),
        nullptr, nullptr, nullptr}
};

// end of generated code
