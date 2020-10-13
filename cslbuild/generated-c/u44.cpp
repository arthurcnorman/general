
// $destdir/u44.c        Machine generated C code

// $Id$

#include "config.h"
#include "headers.h"



// Code for diffp

static LispObject CC_diffp(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_969, v_970, v_971;
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
    stack[-7] = v_3;
    stack[-8] = v_2;
// end of prologue
    stack[0] = nil;
    v_969 = stack[-8];
    if (!car_legal(v_969)) v_969 = cdrerror(v_969); else
    v_969 = cdr(v_969);
    stack[-9] = v_969;
    v_969 = stack[-8];
    if (!car_legal(v_969)) v_969 = carerror(v_969); else
    v_969 = car(v_969);
    stack[-8] = v_969;
    v_970 = stack[-9];
    v_969 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_969 = static_cast<LispObject>(greaterp2(v_970, v_969));
    v_969 = v_969 ? lisp_true : nil;
    env = stack[-10];
    if (v_969 == nil) goto v_27;
    v_969 = stack[-8];
    {   LispObject fn = basic_elt(env, 22); // noncomp
    v_969 = (*qfn1(fn))(fn, v_969);
    }
    env = stack[-10];
    if (v_969 == nil) goto v_27;
    v_970 = stack[-8];
    v_969 = stack[-7];
    v_969 = list2(v_970, v_969);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 23); // simpdf
    stack[-1] = (*qfn1(fn))(fn, v_969);
    }
    env = stack[-10];
    stack[0] = stack[-8];
    v_969 = stack[-9];
    v_969 = sub1(v_969);
    env = stack[-10];
    v_969 = list2(stack[0], v_969);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 24); // simpexpt
    v_969 = (*qfn1(fn))(fn, v_969);
    }
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 25); // multsq
    stack[-1] = (*qfn2(fn))(fn, stack[-1], v_969);
    }
    env = stack[-10];
    v_970 = stack[-8];
    v_969 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 26); // to
    v_970 = (*qfn2(fn))(fn, v_970, v_969);
    }
    env = stack[-10];
    v_969 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_969 = cons(v_970, v_969);
    env = stack[-10];
    v_970 = ncons(v_969);
    env = stack[-10];
    v_969 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[0] = cons(v_970, v_969);
    env = stack[-10];
    stack[-2] = stack[-8];
    v_969 = stack[-9];
    v_969 = sub1(v_969);
    env = stack[-10];
    v_970 = cons(stack[-2], v_969);
    env = stack[-10];
    v_969 = stack[-7];
    {   LispObject fn = basic_elt(env, 0); // diffp
    v_969 = (*qfn2(fn))(fn, v_970, v_969);
    }
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 25); // multsq
    v_969 = (*qfn2(fn))(fn, stack[0], v_969);
    }
    env = stack[-10];
    {
        LispObject v_982 = stack[-1];
        LispObject fn = basic_elt(env, 27); // addsq
        return (*qfn2(fn))(fn, v_982, v_969);
    }
v_27:
    v_970 = stack[-8];
    v_969 = stack[-7];
    if (v_970 == v_969) goto v_65;
    else goto v_66;
v_65:
    v_970 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_969 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_969 = cons(v_970, v_969);
    env = stack[-10];
    stack[0] = v_969;
    goto v_64;
v_66:
    v_969 = nil;
    goto v_64;
    v_969 = nil;
v_64:
    if (v_969 == nil) goto v_62;
    goto v_15;
v_62:
    v_969 = stack[-8];
    if (!consp(v_969)) goto v_75;
    else goto v_76;
v_75:
    goto v_16;
v_76:
    v_969 = stack[-8];
    if (!car_legal(v_969)) v_969 = carerror(v_969); else
    v_969 = car(v_969);
    if (!consp(v_969)) goto v_84;
    v_970 = stack[-8];
    v_969 = stack[-7];
    {   LispObject fn = basic_elt(env, 28); // difff
    v_969 = (*qfn2(fn))(fn, v_970, v_969);
    }
    env = stack[-10];
    stack[0] = v_969;
    goto v_82;
v_84:
    v_969 = nil;
    goto v_82;
    v_969 = nil;
v_82:
    if (v_969 == nil) goto v_80;
    else goto v_78;
v_80:
    v_969 = stack[-8];
    if (!car_legal(v_969)) v_970 = carerror(v_969); else
    v_970 = car(v_969);
    v_969 = basic_elt(env, 1); // !*sq
    if (v_970 == v_969) goto v_96;
    else goto v_97;
v_96:
    v_969 = stack[-8];
    if (!car_legal(v_969)) v_969 = cdrerror(v_969); else
    v_969 = cdr(v_969);
    if (!car_legal(v_969)) v_970 = carerror(v_969); else
    v_970 = car(v_969);
    v_969 = stack[-7];
    {   LispObject fn = basic_elt(env, 29); // diffsq
    v_969 = (*qfn2(fn))(fn, v_970, v_969);
    }
    env = stack[-10];
    stack[0] = v_969;
    goto v_95;
v_97:
    v_969 = nil;
    goto v_95;
    v_969 = nil;
v_95:
    if (v_969 == nil) goto v_93;
    else goto v_78;
v_93:
    goto v_79;
v_78:
    goto v_14;
v_79:
    v_969 = stack[-8];
    if (!car_legal(v_969)) v_970 = carerror(v_969); else
    v_970 = car(v_969);
    v_969 = basic_elt(env, 2); // dfform
    v_969 = get(v_970, v_969);
    env = stack[-10];
    stack[-6] = v_969;
    if (v_969 == nil) goto v_110;
    stack[0] = stack[-6];
    stack[-1] = stack[-8];
    stack[-2] = stack[-7];
    v_969 = stack[-9];
    v_969 = ncons(v_969);
    {
        LispObject v_983 = stack[0];
        LispObject v_984 = stack[-1];
        LispObject v_985 = stack[-2];
        return Lapply3(nil, v_983, v_984, v_985, v_969);
    }
v_110:
    v_969 = stack[-8];
    if (!car_legal(v_969)) stack[-1] = carerror(v_969); else
    stack[-1] = car(v_969);
    v_969 = stack[-8];
    {   LispObject fn = basic_elt(env, 30); // dfn_prop
    v_969 = (*qfn1(fn))(fn, v_969);
    }
    env = stack[-10];
    v_969 = get(stack[-1], v_969);
    env = stack[-10];
    stack[-6] = v_969;
    if (v_969 == nil) goto v_122;
    goto v_25;
v_122:
    v_969 = stack[-8];
    if (!car_legal(v_969)) v_970 = carerror(v_969); else
    v_970 = car(v_969);
    v_969 = basic_elt(env, 3); // plus
    if (v_970 == v_969) goto v_133;
    else goto v_134;
v_133:
    v_969 = stack[-8];
    {   LispObject fn = basic_elt(env, 31); // simp
    v_970 = (*qfn1(fn))(fn, v_969);
    }
    env = stack[-10];
    v_969 = stack[-7];
    {   LispObject fn = basic_elt(env, 29); // diffsq
    v_969 = (*qfn2(fn))(fn, v_970, v_969);
    }
    env = stack[-10];
    stack[0] = v_969;
    goto v_132;
v_134:
    v_969 = nil;
    goto v_132;
    v_969 = nil;
v_132:
    if (v_969 == nil) goto v_130;
    goto v_14;
v_130:
    goto v_17;
v_25:
    v_969 = stack[-6];
    stack[-5] = v_969;
    v_969 = stack[-8];
    if (!car_legal(v_969)) v_969 = cdrerror(v_969); else
    v_969 = cdr(v_969);
    stack[-4] = v_969;
v_13:
    v_969 = stack[-4];
    if (!car_legal(v_969)) v_969 = carerror(v_969); else
    v_969 = car(v_969);
    {   LispObject fn = basic_elt(env, 31); // simp
    v_970 = (*qfn1(fn))(fn, v_969);
    }
    env = stack[-10];
    v_969 = stack[-7];
    {   LispObject fn = basic_elt(env, 29); // diffsq
    v_970 = (*qfn2(fn))(fn, v_970, v_969);
    }
    env = stack[-10];
    v_969 = stack[0];
    v_969 = cons(v_970, v_969);
    env = stack[-10];
    stack[0] = v_969;
    v_969 = stack[0];
    if (!car_legal(v_969)) v_969 = carerror(v_969); else
    v_969 = car(v_969);
    if (!car_legal(v_969)) v_969 = carerror(v_969); else
    v_969 = car(v_969);
    if (v_969 == nil) goto v_160;
    v_969 = stack[-5];
    if (!car_legal(v_969)) v_969 = carerror(v_969); else
    v_969 = car(v_969);
    if (v_969 == nil) goto v_165;
    else goto v_160;
v_165:
    goto v_17;
v_160:
    v_969 = stack[-5];
    if (!car_legal(v_969)) v_969 = cdrerror(v_969); else
    v_969 = cdr(v_969);
    stack[-5] = v_969;
    v_969 = stack[-4];
    if (!car_legal(v_969)) v_969 = cdrerror(v_969); else
    v_969 = cdr(v_969);
    stack[-4] = v_969;
    v_969 = stack[-4];
    if (v_969 == nil) goto v_175;
    v_969 = stack[-5];
    if (v_969 == nil) goto v_175;
    goto v_13;
v_175:
    v_969 = stack[-4];
    if (v_969 == nil) goto v_182;
    else goto v_180;
v_182:
    v_969 = stack[-5];
    if (v_969 == nil) goto v_184;
    else goto v_180;
v_184:
    goto v_181;
v_180:
    goto v_17;
v_181:
    v_969 = stack[0];
    v_969 = Lreverse(nil, v_969);
    env = stack[-10];
    stack[-5] = v_969;
    v_969 = stack[-8];
    if (!car_legal(v_969)) v_969 = cdrerror(v_969); else
    v_969 = cdr(v_969);
    stack[-4] = v_969;
    v_970 = nil;
    v_969 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_969 = cons(v_970, v_969);
    env = stack[-10];
    stack[0] = v_969;
v_195:
    v_969 = stack[-5];
    if (!car_legal(v_969)) v_969 = carerror(v_969); else
    v_969 = car(v_969);
    if (!car_legal(v_969)) v_969 = carerror(v_969); else
    v_969 = car(v_969);
    if (v_969 == nil) goto v_199;
    v_969 = stack[-5];
    if (!car_legal(v_969)) stack[-1] = carerror(v_969); else
    stack[-1] = car(v_969);
    v_969 = stack[-6];
    if (!car_legal(v_969)) v_969 = carerror(v_969); else
    v_969 = car(v_969);
    if (!car_legal(v_969)) v_970 = carerror(v_969); else
    v_970 = car(v_969);
    v_969 = stack[-4];
    {   LispObject fn = basic_elt(env, 32); // pair
    v_970 = (*qfn2(fn))(fn, v_970, v_969);
    }
    env = stack[-10];
    v_969 = stack[-6];
    if (!car_legal(v_969)) v_969 = carerror(v_969); else
    v_969 = car(v_969);
    if (!car_legal(v_969)) v_969 = cdrerror(v_969); else
    v_969 = cdr(v_969);
    v_969 = Lsubla(nil, v_970, v_969);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 31); // simp
    v_969 = (*qfn1(fn))(fn, v_969);
    }
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 25); // multsq
    v_970 = (*qfn2(fn))(fn, stack[-1], v_969);
    }
    env = stack[-10];
    v_969 = stack[0];
    {   LispObject fn = basic_elt(env, 27); // addsq
    v_969 = (*qfn2(fn))(fn, v_970, v_969);
    }
    env = stack[-10];
    stack[0] = v_969;
    goto v_197;
v_199:
v_197:
    v_969 = stack[-6];
    if (!car_legal(v_969)) v_969 = cdrerror(v_969); else
    v_969 = cdr(v_969);
    stack[-6] = v_969;
    v_969 = stack[-5];
    if (!car_legal(v_969)) v_969 = cdrerror(v_969); else
    v_969 = cdr(v_969);
    stack[-5] = v_969;
    v_969 = stack[-5];
    if (v_969 == nil) goto v_225;
    goto v_195;
v_225:
v_14:
v_15:
    v_970 = stack[-8];
    v_969 = qvalue(basic_elt(env, 4)); // wtl!*
    v_969 = Latsoc(nil, v_970, v_969);
    stack[-6] = v_969;
    if (v_969 == nil) goto v_230;
    stack[-1] = basic_elt(env, 5); // k!*
    v_969 = stack[-6];
    if (!car_legal(v_969)) v_969 = cdrerror(v_969); else
    v_969 = cdr(v_969);
    v_969 = negate(v_969);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 26); // to
    v_970 = (*qfn2(fn))(fn, stack[-1], v_969);
    }
    env = stack[-10];
    v_969 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_969 = cons(v_970, v_969);
    env = stack[-10];
    v_970 = ncons(v_969);
    env = stack[-10];
    v_969 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_970 = cons(v_970, v_969);
    env = stack[-10];
    v_969 = stack[0];
    {   LispObject fn = basic_elt(env, 25); // multsq
    v_969 = (*qfn2(fn))(fn, v_970, v_969);
    }
    env = stack[-10];
    stack[0] = v_969;
    goto v_228;
v_230:
v_228:
    v_969 = stack[-9];
    v_969 = sub1(v_969);
    env = stack[-10];
    stack[-3] = v_969;
    v_970 = stack[-9];
    v_969 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_970 == v_969) goto v_251;
    else goto v_252;
v_251:
    v_969 = stack[0];
    goto v_250;
v_252:
    v_969 = qvalue(basic_elt(env, 6)); // dmode!*
    if (!symbolp(v_969)) v_969 = nil;
    else { v_969 = qfastgets(v_969);
           if (v_969 != nil) { v_969 = elt(v_969, 5); // convert
#ifdef RECORD_GET
             if (v_969 == SPID_NOPROP)
                record_get(elt(fastget_names, 5), 0),
                v_969 = nil;
             else record_get(elt(fastget_names, 5), 1),
                v_969 = lisp_true; }
           else record_get(elt(fastget_names, 5), 0); }
#else
             if (v_969 == SPID_NOPROP) v_969 = nil; else v_969 = lisp_true; }}
#endif
    if (v_969 == nil) goto v_261;
    v_969 = qvalue(basic_elt(env, 6)); // dmode!*
    if (!symbolp(v_969)) v_970 = nil;
    else { v_970 = qfastgets(v_969);
           if (v_970 != nil) { v_970 = elt(v_970, 34); // i2d
#ifdef RECORD_GET
             if (v_970 != SPID_NOPROP)
                record_get(elt(fastget_names, 34), 1);
             else record_get(elt(fastget_names, 34), 0),
                v_970 = nil; }
           else record_get(elt(fastget_names, 34), 0); }
#else
             if (v_970 == SPID_NOPROP) v_970 = nil; }}
#endif
    v_969 = stack[-9];
    v_969 = Lapply1(nil, v_970, v_969);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 33); // int!-equiv!-chk
    v_969 = (*qfn1(fn))(fn, v_969);
    }
    env = stack[-10];
    stack[-9] = v_969;
    v_969 = (v_969 == nil ? lisp_true : nil);
    goto v_259;
v_261:
    v_969 = nil;
    goto v_259;
    v_969 = nil;
v_259:
    if (v_969 == nil) goto v_257;
    v_970 = nil;
    v_969 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_969 = cons(v_970, v_969);
    env = stack[-10];
    goto v_250;
v_257:
    v_970 = stack[-8];
    v_969 = stack[-3];
    {   LispObject fn = basic_elt(env, 26); // to
    v_970 = (*qfn2(fn))(fn, v_970, v_969);
    }
    env = stack[-10];
    v_969 = stack[-9];
    v_969 = cons(v_970, v_969);
    env = stack[-10];
    v_970 = ncons(v_969);
    env = stack[-10];
    v_969 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_970 = cons(v_970, v_969);
    env = stack[-10];
    v_969 = stack[0];
    {   LispObject fn = basic_elt(env, 25); // multsq
    v_969 = (*qfn2(fn))(fn, v_970, v_969);
    }
    env = stack[-10];
    goto v_250;
    v_969 = nil;
v_250:
    {
        LispObject fn = basic_elt(env, 34); // rationalizesq
        return (*qfn1(fn))(fn, v_969);
    }
v_16:
    v_970 = stack[-8];
    v_969 = stack[-7];
    {   LispObject fn = basic_elt(env, 35); // depends
    v_969 = (*qfn2(fn))(fn, v_970, v_969);
    }
    env = stack[-10];
    if (v_969 == nil) goto v_294;
    else goto v_295;
v_294:
    v_970 = stack[-8];
    v_969 = qvalue(basic_elt(env, 7)); // powlis!*
    v_969 = Latsoc(nil, v_970, v_969);
    stack[-6] = v_969;
    if (v_969 == nil) goto v_305;
    else goto v_306;
v_305:
    v_969 = lisp_true;
    goto v_304;
v_306:
    v_969 = stack[-6];
    if (!car_legal(v_969)) v_969 = cdrerror(v_969); else
    v_969 = cdr(v_969);
    if (!car_legal(v_969)) v_969 = cdrerror(v_969); else
    v_969 = cdr(v_969);
    if (!car_legal(v_969)) v_969 = cdrerror(v_969); else
    v_969 = cdr(v_969);
    if (!car_legal(v_969)) v_970 = carerror(v_969); else
    v_970 = car(v_969);
    v_969 = stack[-7];
    {   LispObject fn = basic_elt(env, 35); // depends
    v_969 = (*qfn2(fn))(fn, v_970, v_969);
    }
    env = stack[-10];
    v_969 = (v_969 == nil ? lisp_true : nil);
    goto v_304;
    v_969 = nil;
v_304:
    if (v_969 == nil) goto v_302;
    v_969 = qvalue(basic_elt(env, 8)); // !*depend
    v_969 = (v_969 == nil ? lisp_true : nil);
    goto v_300;
v_302:
    v_969 = nil;
    goto v_300;
    v_969 = nil;
v_300:
    goto v_293;
v_295:
    v_969 = nil;
    goto v_293;
    v_969 = nil;
v_293:
    if (v_969 == nil) goto v_291;
    v_970 = nil;
    v_969 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_970, v_969);
v_291:
    v_969 = qvalue(basic_elt(env, 9)); // !*expanddf
    if (v_969 == nil) goto v_335;
    v_970 = stack[-8];
    v_969 = qvalue(basic_elt(env, 7)); // powlis!*
    v_969 = Latsoc(nil, v_970, v_969);
    stack[-6] = v_969;
    if (v_969 == nil) goto v_345;
    else goto v_346;
v_345:
    v_969 = lisp_true;
    goto v_344;
v_346:
    v_969 = stack[-6];
    if (!car_legal(v_969)) v_969 = cdrerror(v_969); else
    v_969 = cdr(v_969);
    if (!car_legal(v_969)) v_969 = cdrerror(v_969); else
    v_969 = cdr(v_969);
    if (!car_legal(v_969)) v_969 = cdrerror(v_969); else
    v_969 = cdr(v_969);
    if (!car_legal(v_969)) v_970 = carerror(v_969); else
    v_970 = car(v_969);
    v_969 = stack[-7];
    {   LispObject fn = basic_elt(env, 35); // depends
    v_969 = (*qfn2(fn))(fn, v_970, v_969);
    }
    env = stack[-10];
    v_969 = (v_969 == nil ? lisp_true : nil);
    goto v_344;
    v_969 = nil;
v_344:
    if (v_969 == nil) goto v_342;
    v_970 = stack[-8];
    v_969 = qvalue(basic_elt(env, 10)); // depl!*
    v_969 = Latsoc(nil, v_970, v_969);
    stack[-6] = v_969;
    if (v_969 == nil) goto v_363;
    else goto v_364;
v_363:
    v_969 = nil;
    goto v_362;
v_364:
    v_970 = stack[-7];
    v_969 = stack[-6];
    if (!car_legal(v_969)) v_969 = cdrerror(v_969); else
    v_969 = cdr(v_969);
    stack[-6] = v_969;
    v_969 = Lmemq(nil, v_970, v_969);
    v_969 = (v_969 == nil ? lisp_true : nil);
    goto v_362;
    v_969 = nil;
v_362:
    goto v_340;
v_342:
    v_969 = nil;
    goto v_340;
    v_969 = nil;
v_340:
    if (v_969 == nil) goto v_335;
    v_971 = stack[-8];
    v_970 = stack[-7];
    v_969 = stack[-6];
    {   LispObject fn = basic_elt(env, 36); // df!-chain!-rule
    v_969 = (*qfn3(fn))(fn, v_971, v_970, v_969);
    }
    env = stack[-10];
    stack[0] = v_969;
    goto v_15;
v_335:
    v_971 = basic_elt(env, 11); // df
    v_970 = stack[-8];
    v_969 = stack[-7];
    v_969 = list3(v_971, v_970, v_969);
    env = stack[-10];
    stack[0] = v_969;
    v_969 = stack[0];
    {   LispObject fn = basic_elt(env, 37); // opmtch
    v_969 = (*qfn1(fn))(fn, v_969);
    }
    env = stack[-10];
    stack[-6] = v_969;
    if (v_969 == nil) goto v_390;
    v_969 = stack[-6];
    {   LispObject fn = basic_elt(env, 31); // simp
    v_969 = (*qfn1(fn))(fn, v_969);
    }
    env = stack[-10];
    goto v_388;
v_390:
    v_970 = stack[0];
    v_969 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 38); // mksq
    v_969 = (*qfn2(fn))(fn, v_970, v_969);
    }
    env = stack[-10];
    goto v_388;
    v_969 = nil;
v_388:
    stack[0] = v_969;
    goto v_15;
v_17:
    v_969 = stack[-8];
    if (!car_legal(v_969)) v_970 = carerror(v_969); else
    v_970 = car(v_969);
    v_969 = basic_elt(env, 11); // df
    if (v_970 == v_969) goto v_402;
    else goto v_403;
v_402:
    v_969 = stack[-8];
    if (!car_legal(v_969)) v_969 = cdrerror(v_969); else
    v_969 = cdr(v_969);
    if (!car_legal(v_969)) v_970 = carerror(v_969); else
    v_970 = car(v_969);
    v_969 = stack[-7];
    if (v_970 == v_969) goto v_409;
    else goto v_410;
v_409:
    v_969 = qvalue(basic_elt(env, 12)); // !*commutedf
    if (v_969 == nil) goto v_418;
    v_969 = qvalue(basic_elt(env, 8)); // !*depend
    if (v_969 == nil) goto v_421;
    else goto v_418;
v_421:
    v_970 = nil;
    v_969 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_970, v_969);
v_418:
    v_969 = qvalue(basic_elt(env, 13)); // !*simpnoncomdf
    if (v_969 == nil) goto v_427;
    v_970 = stack[-7];
    v_969 = qvalue(basic_elt(env, 10)); // depl!*
    v_969 = Latsoc(nil, v_970, v_969);
    stack[0] = v_969;
    if (v_969 == nil) goto v_427;
    v_969 = stack[0];
    if (!car_legal(v_969)) v_969 = cdrerror(v_969); else
    v_969 = cdr(v_969);
    if (!car_legal(v_969)) v_969 = cdrerror(v_969); else
    v_969 = cdr(v_969);
    if (v_969 == nil) goto v_435;
    else goto v_427;
v_435:
    v_969 = stack[-8];
    if (!car_legal(v_969)) v_969 = cdrerror(v_969); else
    v_969 = cdr(v_969);
    if (!car_legal(v_969)) v_969 = cdrerror(v_969); else
    v_969 = cdr(v_969);
    if (!car_legal(v_969)) v_969 = carerror(v_969); else
    v_969 = car(v_969);
    stack[-6] = v_969;
    v_971 = basic_elt(env, 11); // df
    v_970 = stack[-8];
    v_969 = stack[-6];
    v_969 = list3(v_971, v_970, v_969);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 31); // simp
    stack[0] = (*qfn1(fn))(fn, v_969);
    }
    env = stack[-10];
    v_971 = basic_elt(env, 11); // df
    v_970 = stack[-7];
    v_969 = stack[-6];
    v_969 = list3(v_971, v_970, v_969);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 31); // simp
    v_969 = (*qfn1(fn))(fn, v_969);
    }
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 39); // quotsq
    v_969 = (*qfn2(fn))(fn, stack[0], v_969);
    }
    env = stack[-10];
    stack[0] = v_969;
    goto v_15;
v_427:
    goto v_408;
v_410:
    v_969 = stack[-8];
    if (!car_legal(v_969)) v_969 = cdrerror(v_969); else
    v_969 = cdr(v_969);
    if (!car_legal(v_969)) v_970 = carerror(v_969); else
    v_970 = car(v_969);
    v_969 = basic_elt(env, 14); // int
    if (!consp(v_970)) goto v_455;
    v_970 = car(v_970);
    if (v_970 == v_969) goto v_454;
    else goto v_455;
v_454:
    v_969 = stack[-8];
    if (!car_legal(v_969)) v_969 = cdrerror(v_969); else
    v_969 = cdr(v_969);
    if (!car_legal(v_969)) v_969 = carerror(v_969); else
    v_969 = car(v_969);
    if (!car_legal(v_969)) v_969 = cdrerror(v_969); else
    v_969 = cdr(v_969);
    if (!car_legal(v_969)) v_969 = cdrerror(v_969); else
    v_969 = cdr(v_969);
    if (!car_legal(v_969)) v_970 = carerror(v_969); else
    v_970 = car(v_969);
    v_969 = stack[-7];
    if (v_970 == v_969) goto v_463;
    else goto v_464;
v_463:
    v_971 = basic_elt(env, 11); // df
    v_969 = stack[-8];
    if (!car_legal(v_969)) v_969 = cdrerror(v_969); else
    v_969 = cdr(v_969);
    if (!car_legal(v_969)) v_969 = carerror(v_969); else
    v_969 = car(v_969);
    if (!car_legal(v_969)) v_969 = cdrerror(v_969); else
    v_969 = cdr(v_969);
    if (!car_legal(v_969)) v_970 = carerror(v_969); else
    v_970 = car(v_969);
    v_969 = stack[-8];
    if (!car_legal(v_969)) v_969 = cdrerror(v_969); else
    v_969 = cdr(v_969);
    if (!car_legal(v_969)) v_969 = cdrerror(v_969); else
    v_969 = cdr(v_969);
    v_969 = list2star(v_971, v_970, v_969);
    env = stack[-10];
    stack[0] = v_969;
    goto v_18;
v_464:
    v_969 = qvalue(basic_elt(env, 15)); // !*allowdfint
    if (v_969 == nil) goto v_483;
    v_969 = stack[-8];
    if (!car_legal(v_969)) v_969 = cdrerror(v_969); else
    v_969 = cdr(v_969);
    if (!car_legal(v_969)) v_969 = carerror(v_969); else
    v_969 = car(v_969);
    if (!car_legal(v_969)) v_969 = cdrerror(v_969); else
    v_969 = cdr(v_969);
    if (!car_legal(v_969)) v_969 = carerror(v_969); else
    v_969 = car(v_969);
    {   LispObject fn = basic_elt(env, 40); // simp!*
    v_970 = (*qfn1(fn))(fn, v_969);
    }
    env = stack[-10];
    v_969 = stack[-7];
    {   LispObject fn = basic_elt(env, 29); // diffsq
    v_969 = (*qfn2(fn))(fn, v_970, v_969);
    }
    env = stack[-10];
    stack[0] = v_969;
    {   LispObject fn = basic_elt(env, 41); // not_df_p
    v_969 = (*qfn1(fn))(fn, v_969);
    }
    env = stack[-10];
    if (v_969 == nil) goto v_483;
    stack[-2] = basic_elt(env, 11); // df
    stack[-1] = basic_elt(env, 14); // int
    v_969 = stack[0];
    {   LispObject fn = basic_elt(env, 42); // mk!*sq
    v_970 = (*qfn1(fn))(fn, v_969);
    }
    env = stack[-10];
    v_969 = stack[-8];
    if (!car_legal(v_969)) v_969 = cdrerror(v_969); else
    v_969 = cdr(v_969);
    if (!car_legal(v_969)) v_969 = carerror(v_969); else
    v_969 = car(v_969);
    if (!car_legal(v_969)) v_969 = cdrerror(v_969); else
    v_969 = cdr(v_969);
    if (!car_legal(v_969)) v_969 = cdrerror(v_969); else
    v_969 = cdr(v_969);
    if (!car_legal(v_969)) v_969 = carerror(v_969); else
    v_969 = car(v_969);
    v_969 = list3(stack[-1], v_970, v_969);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 43); // reval
    v_970 = (*qfn1(fn))(fn, v_969);
    }
    env = stack[-10];
    v_969 = stack[-8];
    if (!car_legal(v_969)) v_969 = cdrerror(v_969); else
    v_969 = cdr(v_969);
    if (!car_legal(v_969)) v_969 = cdrerror(v_969); else
    v_969 = cdr(v_969);
    v_969 = list2star(stack[-2], v_970, v_969);
    env = stack[-10];
    stack[0] = v_969;
    goto v_18;
v_483:
    goto v_408;
v_455:
v_408:
    v_969 = qvalue(basic_elt(env, 9)); // !*expanddf
    if (v_969 == nil) goto v_515;
    v_969 = stack[-8];
    if (!car_legal(v_969)) v_969 = cdrerror(v_969); else
    v_969 = cdr(v_969);
    if (!car_legal(v_969)) v_970 = carerror(v_969); else
    v_970 = car(v_969);
    v_969 = stack[-7];
    {   LispObject fn = basic_elt(env, 35); // depends
    v_969 = (*qfn2(fn))(fn, v_970, v_969);
    }
    env = stack[-10];
    if (v_969 == nil) goto v_515;
    v_969 = stack[-8];
    if (!car_legal(v_969)) v_969 = cdrerror(v_969); else
    v_969 = cdr(v_969);
    if (!car_legal(v_969)) v_970 = carerror(v_969); else
    v_970 = car(v_969);
    v_969 = qvalue(basic_elt(env, 7)); // powlis!*
    v_969 = Latsoc(nil, v_970, v_969);
    stack[-6] = v_969;
    if (v_969 == nil) goto v_528;
    else goto v_529;
v_528:
    v_969 = lisp_true;
    goto v_527;
v_529:
    v_969 = stack[-6];
    if (!car_legal(v_969)) v_969 = cdrerror(v_969); else
    v_969 = cdr(v_969);
    if (!car_legal(v_969)) v_969 = cdrerror(v_969); else
    v_969 = cdr(v_969);
    if (!car_legal(v_969)) v_969 = cdrerror(v_969); else
    v_969 = cdr(v_969);
    if (!car_legal(v_969)) v_970 = carerror(v_969); else
    v_970 = car(v_969);
    v_969 = stack[-7];
    {   LispObject fn = basic_elt(env, 35); // depends
    v_969 = (*qfn2(fn))(fn, v_970, v_969);
    }
    env = stack[-10];
    v_969 = (v_969 == nil ? lisp_true : nil);
    goto v_527;
    v_969 = nil;
v_527:
    if (v_969 == nil) goto v_515;
    v_970 = stack[-7];
    v_969 = stack[-8];
    if (!car_legal(v_969)) v_969 = cdrerror(v_969); else
    v_969 = cdr(v_969);
    if (!car_legal(v_969)) v_969 = carerror(v_969); else
    v_969 = car(v_969);
    {   LispObject fn = basic_elt(env, 44); // smember
    v_969 = (*qfn2(fn))(fn, v_970, v_969);
    }
    env = stack[-10];
    if (v_969 == nil) goto v_548;
    else goto v_549;
v_548:
    v_969 = stack[-8];
    if (!car_legal(v_969)) v_969 = cdrerror(v_969); else
    v_969 = cdr(v_969);
    if (!car_legal(v_969)) v_970 = carerror(v_969); else
    v_970 = car(v_969);
    v_969 = qvalue(basic_elt(env, 10)); // depl!*
    v_969 = Lassoc(nil, v_970, v_969);
    stack[-6] = v_969;
    v_969 = stack[-8];
    if (!car_legal(v_969)) v_969 = cdrerror(v_969); else
    v_969 = cdr(v_969);
    if (!car_legal(v_969)) v_969 = carerror(v_969); else
    v_969 = car(v_969);
    if (!consp(v_969)) goto v_563;
    v_969 = stack[-8];
    if (!car_legal(v_969)) v_969 = cdrerror(v_969); else
    v_969 = cdr(v_969);
    if (!car_legal(v_969)) v_969 = carerror(v_969); else
    v_969 = car(v_969);
    if (!car_legal(v_969)) v_969 = cdrerror(v_969); else
    v_969 = cdr(v_969);
    if (v_969 == nil) goto v_569;
    else goto v_570;
v_569:
    v_969 = nil;
    goto v_568;
v_570:
    v_969 = stack[-8];
    if (!car_legal(v_969)) v_969 = cdrerror(v_969); else
    v_969 = cdr(v_969);
    if (!car_legal(v_969)) v_969 = carerror(v_969); else
    v_969 = car(v_969);
    if (!car_legal(v_969)) v_969 = cdrerror(v_969); else
    v_969 = cdr(v_969);
    {   LispObject fn = basic_elt(env, 45); // get!-all!-kernels
    v_969 = (*qfn1(fn))(fn, v_969);
    }
    env = stack[-10];
    goto v_568;
    v_969 = nil;
v_568:
    goto v_561;
v_563:
    v_969 = nil;
    goto v_561;
    v_969 = nil;
v_561:
    stack[-5] = v_969;
    v_969 = stack[-6];
    if (v_969 == nil) goto v_589;
    v_969 = stack[-5];
    if (v_969 == nil) goto v_589;
    v_970 = stack[-7];
    v_969 = stack[-5];
    v_970 = Ldelete(nil, v_970, v_969);
    env = stack[-10];
    v_969 = stack[-7];
    {   LispObject fn = basic_elt(env, 46); // ldepends
    v_969 = (*qfn2(fn))(fn, v_970, v_969);
    }
    env = stack[-10];
    if (v_969 == nil) goto v_589;
    goto v_587;
v_589:
    v_969 = stack[-6];
    if (v_969 == nil) goto v_603;
    v_970 = stack[-7];
    v_969 = stack[-6];
    if (!car_legal(v_969)) v_969 = cdrerror(v_969); else
    v_969 = cdr(v_969);
    stack[-6] = v_969;
    v_969 = Lmemq(nil, v_970, v_969);
    if (v_969 == nil) goto v_606;
    else goto v_603;
v_606:
    v_971 = stack[-8];
    v_970 = stack[-7];
    v_969 = stack[-6];
    {   LispObject fn = basic_elt(env, 36); // df!-chain!-rule
    v_969 = (*qfn3(fn))(fn, v_971, v_970, v_969);
    }
    env = stack[-10];
    stack[0] = v_969;
    goto v_15;
v_603:
    v_969 = stack[-5];
    if (v_969 == nil) goto v_616;
    v_970 = stack[-7];
    v_969 = stack[-5];
    {   LispObject fn = basic_elt(env, 44); // smember
    v_969 = (*qfn2(fn))(fn, v_970, v_969);
    }
    env = stack[-10];
    if (v_969 == nil) goto v_619;
    else goto v_616;
v_619:
    v_971 = stack[-8];
    v_970 = stack[-7];
    v_969 = stack[-5];
    {   LispObject fn = basic_elt(env, 36); // df!-chain!-rule
    v_969 = (*qfn3(fn))(fn, v_971, v_970, v_969);
    }
    env = stack[-10];
    stack[0] = v_969;
    goto v_15;
v_616:
v_587:
    goto v_547;
v_549:
v_547:
    goto v_513;
v_515:
v_513:
    v_969 = stack[-8];
    if (!car_legal(v_969)) v_969 = cdrerror(v_969); else
    v_969 = cdr(v_969);
    if (!car_legal(v_969)) stack[0] = carerror(v_969); else
    stack[0] = car(v_969);
    v_970 = stack[-8];
    v_969 = stack[-7];
    {   LispObject fn = basic_elt(env, 47); // merge!-ind!-vars
    v_969 = (*qfn2(fn))(fn, v_970, v_969);
    }
    env = stack[-10];
    v_970 = cons(stack[0], v_969);
    env = stack[-10];
    stack[0] = v_970;
    v_969 = basic_elt(env, 11); // df
    if (!symbolp(v_969)) v_969 = nil;
    else { v_969 = qfastgets(v_969);
           if (v_969 != nil) { v_969 = elt(v_969, 50); // kvalue
#ifdef RECORD_GET
             if (v_969 != SPID_NOPROP)
                record_get(elt(fastget_names, 50), 1);
             else record_get(elt(fastget_names, 50), 0),
                v_969 = nil; }
           else record_get(elt(fastget_names, 50), 0); }
#else
             if (v_969 == SPID_NOPROP) v_969 = nil; }}
#endif
    {   LispObject fn = basic_elt(env, 48); // find_sub_df
    v_969 = (*qfn2(fn))(fn, v_970, v_969);
    }
    env = stack[-10];
    stack[-6] = v_969;
    if (v_969 == nil) goto v_630;
    v_969 = stack[-6];
    if (!car_legal(v_969)) v_969 = carerror(v_969); else
    v_969 = car(v_969);
    {   LispObject fn = basic_elt(env, 31); // simp
    v_969 = (*qfn1(fn))(fn, v_969);
    }
    env = stack[-10];
    stack[0] = v_969;
    v_969 = stack[-6];
    if (!car_legal(v_969)) v_969 = cdrerror(v_969); else
    v_969 = cdr(v_969);
    stack[-3] = v_969;
v_647:
    v_969 = stack[-3];
    if (v_969 == nil) goto v_652;
    else goto v_653;
v_652:
    goto v_646;
v_653:
    v_969 = stack[-3];
    if (!car_legal(v_969)) v_969 = carerror(v_969); else
    v_969 = car(v_969);
    stack[-2] = v_969;
    v_969 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-1] = v_969;
v_662:
    v_969 = stack[-2];
    if (!car_legal(v_969)) v_970 = cdrerror(v_969); else
    v_970 = cdr(v_969);
    v_969 = stack[-1];
    v_969 = difference2(v_970, v_969);
    env = stack[-10];
    v_969 = Lminusp(nil, v_969);
    env = stack[-10];
    if (v_969 == nil) goto v_667;
    goto v_661;
v_667:
    v_970 = stack[0];
    v_969 = stack[-2];
    if (!car_legal(v_969)) v_969 = carerror(v_969); else
    v_969 = car(v_969);
    {   LispObject fn = basic_elt(env, 29); // diffsq
    v_969 = (*qfn2(fn))(fn, v_970, v_969);
    }
    env = stack[-10];
    stack[0] = v_969;
    v_969 = stack[-1];
    v_969 = add1(v_969);
    env = stack[-10];
    stack[-1] = v_969;
    goto v_662;
v_661:
    v_969 = stack[-3];
    if (!car_legal(v_969)) v_969 = cdrerror(v_969); else
    v_969 = cdr(v_969);
    stack[-3] = v_969;
    goto v_647;
v_646:
    goto v_15;
v_630:
    v_970 = basic_elt(env, 11); // df
    v_969 = stack[0];
    v_969 = cons(v_970, v_969);
    env = stack[-10];
    stack[0] = v_969;
    goto v_628;
v_628:
    goto v_401;
v_403:
    v_969 = qvalue(basic_elt(env, 16)); // !*df_partial
    if (v_969 == nil) goto v_688;
    v_969 = qvalue(basic_elt(env, 9)); // !*expanddf
    if (v_969 == nil) goto v_688;
    v_969 = stack[-8];
    if (!car_legal(v_969)) v_969 = cdrerror(v_969); else
    v_969 = cdr(v_969);
    if (!car_legal(v_969)) v_969 = carerror(v_969); else
    v_969 = car(v_969);
    if (!consp(v_969)) goto v_688;
    v_969 = stack[-8];
    if (!car_legal(v_969)) v_969 = carerror(v_969); else
    v_969 = car(v_969);
    v_970 = Lexplode(nil, v_969);
    env = stack[-10];
    v_969 = basic_elt(env, 17); // (!! !! !_)
    v_969 = Lnconc(nil, v_970, v_969);
    env = stack[-10];
    v_969 = Lcompress(nil, v_969);
    env = stack[-10];
    v_969 = Lintern(nil, v_969);
    env = stack[-10];
    stack[-6] = v_969;
    v_969 = stack[-8];
    if (!car_legal(v_969)) v_969 = cdrerror(v_969); else
    v_969 = cdr(v_969);
    stack[-5] = v_969;
    v_970 = nil;
    v_969 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_969 = cons(v_970, v_969);
    env = stack[-10];
    stack[0] = v_969;
    v_969 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-3] = v_969;
    v_969 = stack[-5];
    stack[-2] = v_969;
v_714:
    v_969 = stack[-2];
    if (v_969 == nil) goto v_718;
    else goto v_719;
v_718:
    goto v_713;
v_719:
    v_969 = stack[-2];
    if (!car_legal(v_969)) v_969 = carerror(v_969); else
    v_969 = car(v_969);
    stack[-1] = v_969;
    v_969 = stack[-3];
    v_969 = add1(v_969);
    env = stack[-10];
    stack[-3] = v_969;
    v_971 = basic_elt(env, 11); // df
    v_970 = stack[-1];
    v_969 = stack[-7];
    v_969 = list3(v_971, v_970, v_969);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 31); // simp
    v_969 = (*qfn1(fn))(fn, v_969);
    }
    env = stack[-10];
    stack[-1] = v_969;
    if (!car_legal(v_969)) v_969 = carerror(v_969); else
    v_969 = car(v_969);
    if (v_969 == nil) goto v_733;
    v_970 = stack[-6];
    v_969 = stack[-3];
    {   LispObject fn = basic_elt(env, 49); // mkid
    v_969 = (*qfn2(fn))(fn, v_970, v_969);
    }
    env = stack[-10];
    stack[-4] = v_969;
    v_971 = stack[-4];
    v_970 = basic_elt(env, 18); // simpfn
    v_969 = basic_elt(env, 19); // simpiden
    v_969 = Lputprop(nil, v_971, v_970, v_969);
    env = stack[-10];
    v_970 = stack[-4];
    v_969 = stack[-5];
    v_969 = cons(v_970, v_969);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 31); // simp
    v_970 = (*qfn1(fn))(fn, v_969);
    }
    env = stack[-10];
    v_969 = stack[-1];
    {   LispObject fn = basic_elt(env, 25); // multsq
    v_969 = (*qfn2(fn))(fn, v_970, v_969);
    }
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 27); // addsq
    v_969 = (*qfn2(fn))(fn, stack[0], v_969);
    }
    env = stack[-10];
    stack[0] = v_969;
    goto v_731;
v_733:
v_731:
    v_969 = stack[-2];
    if (!car_legal(v_969)) v_969 = cdrerror(v_969); else
    v_969 = cdr(v_969);
    stack[-2] = v_969;
    goto v_714;
v_713:
    goto v_15;
v_688:
    v_971 = basic_elt(env, 11); // df
    v_970 = stack[-8];
    v_969 = stack[-7];
    v_969 = list3(v_971, v_970, v_969);
    env = stack[-10];
    stack[0] = v_969;
    goto v_401;
v_401:
v_18:
    v_969 = stack[0];
    {   LispObject fn = basic_elt(env, 37); // opmtch
    v_969 = (*qfn1(fn))(fn, v_969);
    }
    env = stack[-10];
    stack[-6] = v_969;
    if (v_969 == nil) goto v_766;
    v_969 = stack[-6];
    {   LispObject fn = basic_elt(env, 31); // simp
    v_969 = (*qfn1(fn))(fn, v_969);
    }
    env = stack[-10];
    stack[0] = v_969;
    goto v_764;
v_766:
    v_970 = stack[-8];
    v_969 = stack[-7];
    {   LispObject fn = basic_elt(env, 35); // depends
    v_969 = (*qfn2(fn))(fn, v_970, v_969);
    }
    env = stack[-10];
    if (v_969 == nil) goto v_775;
    else goto v_776;
v_775:
    v_969 = stack[0];
    if (!car_legal(v_969)) v_969 = cdrerror(v_969); else
    v_969 = cdr(v_969);
    if (!car_legal(v_969)) v_970 = carerror(v_969); else
    v_970 = car(v_969);
    stack[-8] = v_970;
    v_969 = qvalue(basic_elt(env, 7)); // powlis!*
    v_969 = Latsoc(nil, v_970, v_969);
    stack[-6] = v_969;
    if (v_969 == nil) goto v_786;
    else goto v_787;
v_786:
    v_969 = lisp_true;
    goto v_785;
v_787:
    v_969 = stack[-6];
    if (!car_legal(v_969)) v_969 = cdrerror(v_969); else
    v_969 = cdr(v_969);
    if (!car_legal(v_969)) v_969 = cdrerror(v_969); else
    v_969 = cdr(v_969);
    if (!car_legal(v_969)) v_969 = cdrerror(v_969); else
    v_969 = cdr(v_969);
    if (!car_legal(v_969)) v_970 = carerror(v_969); else
    v_970 = car(v_969);
    v_969 = stack[0];
    if (!car_legal(v_969)) v_969 = cdrerror(v_969); else
    v_969 = cdr(v_969);
    if (!car_legal(v_969)) v_969 = cdrerror(v_969); else
    v_969 = cdr(v_969);
    {   LispObject fn = basic_elt(env, 50); // dependsl
    v_969 = (*qfn2(fn))(fn, v_970, v_969);
    }
    env = stack[-10];
    v_969 = (v_969 == nil ? lisp_true : nil);
    goto v_785;
    v_969 = nil;
v_785:
    if (v_969 == nil) goto v_783;
    v_969 = qvalue(basic_elt(env, 8)); // !*depend
    v_969 = (v_969 == nil ? lisp_true : nil);
    goto v_781;
v_783:
    v_969 = nil;
    goto v_781;
    v_969 = nil;
v_781:
    goto v_774;
v_776:
    v_969 = nil;
    goto v_774;
    v_969 = nil;
v_774:
    if (v_969 == nil) goto v_772;
    v_970 = nil;
    v_969 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_970, v_969);
v_772:
    v_969 = qvalue(basic_elt(env, 9)); // !*expanddf
    if (v_969 == nil) goto v_818;
    v_969 = stack[-8];
    if (!consp(v_969)) goto v_825;
    v_969 = stack[0];
    if (!car_legal(v_969)) v_969 = cdrerror(v_969); else
    v_969 = cdr(v_969);
    if (!car_legal(v_969)) v_969 = cdrerror(v_969); else
    v_969 = cdr(v_969);
    if (!car_legal(v_969)) v_969 = cdrerror(v_969); else
    v_969 = cdr(v_969);
    if (v_969 == nil) goto v_829;
    else goto v_830;
v_829:
    v_969 = stack[-8];
    if (!car_legal(v_969)) v_970 = carerror(v_969); else
    v_970 = car(v_969);
    v_969 = basic_elt(env, 20); // (df int)
    v_969 = Lmemq(nil, v_970, v_969);
    if (v_969 == nil) goto v_837;
    else goto v_838;
v_837:
    v_970 = stack[-7];
    v_969 = stack[-8];
    {   LispObject fn = basic_elt(env, 44); // smember
    v_969 = (*qfn2(fn))(fn, v_970, v_969);
    }
    env = stack[-10];
    if (v_969 == nil) goto v_845;
    else goto v_846;
v_845:
    v_970 = stack[-8];
    v_969 = qvalue(basic_elt(env, 7)); // powlis!*
    v_969 = Latsoc(nil, v_970, v_969);
    stack[-6] = v_969;
    if (v_969 == nil) goto v_852;
    else goto v_853;
v_852:
    v_969 = lisp_true;
    goto v_851;
v_853:
    v_969 = stack[-6];
    if (!car_legal(v_969)) v_969 = cdrerror(v_969); else
    v_969 = cdr(v_969);
    if (!car_legal(v_969)) v_969 = cdrerror(v_969); else
    v_969 = cdr(v_969);
    if (!car_legal(v_969)) v_969 = cdrerror(v_969); else
    v_969 = cdr(v_969);
    if (!car_legal(v_969)) v_970 = carerror(v_969); else
    v_970 = car(v_969);
    v_969 = stack[-7];
    {   LispObject fn = basic_elt(env, 35); // depends
    v_969 = (*qfn2(fn))(fn, v_970, v_969);
    }
    env = stack[-10];
    v_969 = (v_969 == nil ? lisp_true : nil);
    goto v_851;
    v_969 = nil;
v_851:
    goto v_844;
v_846:
    v_969 = nil;
    goto v_844;
    v_969 = nil;
v_844:
    goto v_836;
v_838:
    v_969 = nil;
    goto v_836;
    v_969 = nil;
v_836:
    goto v_828;
v_830:
    v_969 = nil;
    goto v_828;
    v_969 = nil;
v_828:
    goto v_823;
v_825:
    v_969 = nil;
    goto v_823;
    v_969 = nil;
v_823:
    if (v_969 == nil) goto v_818;
    v_970 = stack[-8];
    v_969 = qvalue(basic_elt(env, 10)); // depl!*
    v_969 = Lassoc(nil, v_970, v_969);
    stack[-6] = v_969;
    v_969 = stack[-8];
    if (!car_legal(v_969)) v_969 = cdrerror(v_969); else
    v_969 = cdr(v_969);
    if (v_969 == nil) goto v_885;
    else goto v_886;
v_885:
    v_969 = nil;
    goto v_884;
v_886:
    v_969 = stack[-8];
    if (!car_legal(v_969)) v_969 = cdrerror(v_969); else
    v_969 = cdr(v_969);
    {   LispObject fn = basic_elt(env, 45); // get!-all!-kernels
    v_969 = (*qfn1(fn))(fn, v_969);
    }
    env = stack[-10];
    goto v_884;
    v_969 = nil;
v_884:
    stack[-5] = v_969;
    v_969 = stack[-6];
    if (v_969 == nil) goto v_898;
    v_969 = stack[-5];
    if (v_969 == nil) goto v_898;
    v_970 = stack[-7];
    v_969 = stack[-5];
    v_970 = Ldelete(nil, v_970, v_969);
    env = stack[-10];
    v_969 = stack[-7];
    {   LispObject fn = basic_elt(env, 46); // ldepends
    v_969 = (*qfn2(fn))(fn, v_970, v_969);
    }
    env = stack[-10];
    if (v_969 == nil) goto v_898;
    stack[-3] = basic_elt(env, 21); // "Possible inconsistent dependencies in"
    stack[-2] = stack[-8];
    stack[-1] = nil;
    v_970 = nil;
    v_969 = nil;
    v_969 = list2(v_970, v_969);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 51); // msgpri
    v_969 = (*qfn4up(fn))(fn, stack[-3], stack[-2], stack[-1], v_969);
    }
    env = stack[-10];
    v_970 = stack[0];
    v_969 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 38); // mksq
    v_969 = (*qfn2(fn))(fn, v_970, v_969);
    }
    env = stack[-10];
    stack[0] = v_969;
    goto v_896;
v_898:
    v_969 = stack[-6];
    if (v_969 == nil) goto v_921;
    v_970 = stack[-7];
    v_969 = stack[-6];
    if (!car_legal(v_969)) v_969 = cdrerror(v_969); else
    v_969 = cdr(v_969);
    stack[-6] = v_969;
    v_969 = Lmemq(nil, v_970, v_969);
    if (v_969 == nil) goto v_926;
    v_970 = stack[0];
    v_969 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 38); // mksq
    v_969 = (*qfn2(fn))(fn, v_970, v_969);
    }
    env = stack[-10];
    stack[0] = v_969;
    goto v_924;
v_926:
    v_971 = stack[-8];
    v_970 = stack[-7];
    v_969 = stack[-6];
    {   LispObject fn = basic_elt(env, 36); // df!-chain!-rule
    v_969 = (*qfn3(fn))(fn, v_971, v_970, v_969);
    }
    env = stack[-10];
    stack[0] = v_969;
    goto v_924;
v_924:
    goto v_896;
v_921:
    v_969 = stack[-5];
    if (v_969 == nil) goto v_941;
    v_970 = stack[-7];
    v_969 = stack[-5];
    {   LispObject fn = basic_elt(env, 44); // smember
    v_969 = (*qfn2(fn))(fn, v_970, v_969);
    }
    env = stack[-10];
    if (v_969 == nil) goto v_946;
    v_970 = stack[0];
    v_969 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 38); // mksq
    v_969 = (*qfn2(fn))(fn, v_970, v_969);
    }
    env = stack[-10];
    goto v_944;
v_946:
    v_971 = stack[-8];
    v_970 = stack[-7];
    v_969 = stack[-5];
    {   LispObject fn = basic_elt(env, 36); // df!-chain!-rule
    v_969 = (*qfn3(fn))(fn, v_971, v_970, v_969);
    }
    env = stack[-10];
    goto v_944;
    v_969 = nil;
v_944:
    stack[0] = v_969;
    goto v_896;
v_941:
    v_970 = stack[0];
    v_969 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 38); // mksq
    v_969 = (*qfn2(fn))(fn, v_970, v_969);
    }
    env = stack[-10];
    stack[0] = v_969;
    goto v_896;
v_896:
    goto v_764;
v_818:
    v_970 = stack[0];
    v_969 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 38); // mksq
    v_969 = (*qfn2(fn))(fn, v_970, v_969);
    }
    env = stack[-10];
    stack[0] = v_969;
    goto v_764;
v_764:
    goto v_15;
    return onevalue(v_969);
}



// Code for get!:const

static LispObject CC_getTconst(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    v_69 = stack[-1];
    if (!consp(v_69)) goto v_11;
    else goto v_12;
v_11:
    v_69 = stack[0];
    v_69 = integerp(v_69);
    if (v_69 == nil) goto v_16;
    else goto v_17;
v_16:
    v_69 = nil;
    goto v_15;
v_17:
    v_70 = stack[0];
    v_69 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_69 = static_cast<LispObject>(greaterp2(v_70, v_69));
    v_69 = v_69 ? lisp_true : nil;
    env = stack[-2];
    goto v_15;
    v_69 = nil;
v_15:
    goto v_10;
v_12:
    v_69 = nil;
    goto v_10;
    v_69 = nil;
v_10:
    if (v_69 == nil) goto v_8;
    v_70 = stack[-1];
    v_69 = basic_elt(env, 1); // save!:c
    v_69 = get(v_70, v_69);
    env = stack[-2];
    stack[-1] = v_69;
    v_69 = stack[-1];
    if (v_69 == nil) goto v_41;
    else goto v_42;
v_41:
    v_69 = lisp_true;
    goto v_40;
v_42:
    v_69 = stack[-1];
    if (!car_legal(v_69)) v_70 = carerror(v_69); else
    v_70 = car(v_69);
    v_69 = stack[0];
    v_69 = static_cast<LispObject>(lessp2(v_70, v_69));
    v_69 = v_69 ? lisp_true : nil;
    env = stack[-2];
    goto v_40;
    v_69 = nil;
v_40:
    if (v_69 == nil) goto v_38;
    v_69 = basic_elt(env, 2); // not_found
    goto v_31;
v_38:
    v_69 = stack[-1];
    if (!car_legal(v_69)) v_70 = carerror(v_69); else
    v_70 = car(v_69);
    v_69 = stack[0];
    if (equal(v_70, v_69)) goto v_52;
    else goto v_53;
v_52:
    v_69 = stack[-1];
    if (!car_legal(v_69)) v_69 = cdrerror(v_69); else
    v_69 = cdr(v_69);
    goto v_31;
v_53:
    v_69 = stack[-1];
    if (!car_legal(v_69)) v_70 = cdrerror(v_69); else
    v_70 = cdr(v_69);
    v_69 = stack[0];
    {
        LispObject fn = basic_elt(env, 3); // round!:mt
        return (*qfn2(fn))(fn, v_70, v_69);
    }
    v_69 = nil;
v_31:
    goto v_6;
v_8:
    v_69 = basic_elt(env, 0); // get!:const
    {
        LispObject fn = basic_elt(env, 4); // bflerrmsg
        return (*qfn1(fn))(fn, v_69);
    }
    v_69 = nil;
v_6:
    return onevalue(v_69);
}



// Code for nspaces

static LispObject CC_nspaces(LispObject env,
                         LispObject v_2)
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
    v_30 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[0] = v_30;
v_10:
    v_31 = stack[-1];
    v_30 = stack[0];
    v_30 = difference2(v_31, v_30);
    env = stack[-3];
    v_30 = Lminusp(nil, v_30);
    env = stack[-3];
    if (v_30 == nil) goto v_15;
    goto v_9;
v_15:
    v_32 = basic_elt(env, 1); // !!
    v_31 = basic_elt(env, 2); // ! 
    v_30 = stack[-2];
    v_30 = list2star(v_32, v_31, v_30);
    env = stack[-3];
    stack[-2] = v_30;
    v_30 = stack[0];
    v_30 = add1(v_30);
    env = stack[-3];
    stack[0] = v_30;
    goto v_10;
v_9:
    v_30 = stack[-2];
    v_30 = Lcompress(nil, v_30);
        return Lintern(nil, v_30);
    return onevalue(v_30);
}



// Code for all_defined_map_

static LispObject CC_all_defined_map_(LispObject env,
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
    v_10 = nil;
    {
        LispObject fn = basic_elt(env, 1); // al1_defined_map_
        return (*qfn3(fn))(fn, v_11, v_10, v_9);
    }
}



// Code for quotexf!*

static LispObject CC_quotexfH(LispObject env,
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    stack[-1] = v_3;
    stack[-2] = v_2;
// end of prologue
    stack[-3] = nil;
v_8:
    v_30 = stack[-2];
    if (v_30 == nil) goto v_11;
    else goto v_12;
v_11:
    v_30 = stack[-3];
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn1(fn))(fn, v_30);
    }
v_12:
    v_30 = stack[-2];
    if (!car_legal(v_30)) v_30 = carerror(v_30); else
    v_30 = car(v_30);
    if (!car_legal(v_30)) stack[0] = carerror(v_30); else
    stack[0] = car(v_30);
    v_30 = stack[-2];
    if (!car_legal(v_30)) v_30 = carerror(v_30); else
    v_30 = car(v_30);
    if (!car_legal(v_30)) v_31 = cdrerror(v_30); else
    v_31 = cdr(v_30);
    v_30 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // quotfexf!*1
    v_31 = (*qfn2(fn))(fn, v_31, v_30);
    }
    env = stack[-4];
    v_30 = stack[-3];
    v_30 = acons(stack[0], v_31, v_30);
    env = stack[-4];
    stack[-3] = v_30;
    v_30 = stack[-2];
    if (!car_legal(v_30)) v_30 = cdrerror(v_30); else
    v_30 = cdr(v_30);
    stack[-2] = v_30;
    goto v_8;
    v_30 = nil;
    return onevalue(v_30);
}



// Code for general!-multiply!-by!-constant!-mod!-p

static LispObject CC_generalKmultiplyKbyKconstantKmodKp(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    v_60 = stack[-1];
    if (v_60 == nil) goto v_7;
    else goto v_8;
v_7:
    v_60 = nil;
    goto v_6;
v_8:
    v_61 = stack[0];
    v_60 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_61 == v_60) goto v_11;
    else goto v_12;
v_11:
    v_60 = stack[-1];
    goto v_6;
v_12:
    v_60 = stack[-1];
    if (!consp(v_60)) goto v_20;
    else goto v_21;
v_20:
    v_60 = lisp_true;
    goto v_19;
v_21:
    v_60 = stack[-1];
    if (!car_legal(v_60)) v_60 = carerror(v_60); else
    v_60 = car(v_60);
    v_60 = (consp(v_60) ? nil : lisp_true);
    goto v_19;
    v_60 = nil;
v_19:
    if (v_60 == nil) goto v_17;
    v_61 = stack[-1];
    v_60 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // general!-modular!-times
    v_60 = (*qfn2(fn))(fn, v_61, v_60);
    }
    env = stack[-3];
    {
        LispObject fn = basic_elt(env, 2); // !*n2f
        return (*qfn1(fn))(fn, v_60);
    }
v_17:
    v_60 = stack[-1];
    if (!car_legal(v_60)) v_60 = carerror(v_60); else
    v_60 = car(v_60);
    if (!car_legal(v_60)) v_61 = cdrerror(v_60); else
    v_61 = cdr(v_60);
    v_60 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // general!-multiply!-by!-constant!-mod!-p
    stack[-2] = (*qfn2(fn))(fn, v_61, v_60);
    }
    env = stack[-3];
    v_60 = stack[-1];
    if (!car_legal(v_60)) v_61 = cdrerror(v_60); else
    v_61 = cdr(v_60);
    v_60 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // general!-multiply!-by!-constant!-mod!-p
    v_60 = (*qfn2(fn))(fn, v_61, v_60);
    }
    v_61 = stack[-2];
    v_62 = v_61;
    if (v_62 == nil) goto v_48;
    else goto v_49;
v_48:
    goto v_47;
v_49:
    v_62 = stack[-1];
    if (!car_legal(v_62)) v_62 = carerror(v_62); else
    v_62 = car(v_62);
    if (!car_legal(v_62)) v_62 = carerror(v_62); else
    v_62 = car(v_62);
    return acons(v_62, v_61, v_60);
    v_60 = nil;
v_47:
    goto v_6;
    v_60 = nil;
v_6:
    return onevalue(v_60);
}



// Code for rl_nnfnot

static LispObject CC_rl_nnfnot(LispObject env,
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
    stack[0] = qvalue(basic_elt(env, 1)); // rl_nnfnot!*
    v_8 = ncons(v_8);
    env = stack[-1];
    {
        LispObject v_10 = stack[0];
        LispObject fn = basic_elt(env, 2); // apply
        return (*qfn2(fn))(fn, v_10, v_8);
    }
}



// Code for makecoeffpairshom

static LispObject CC_makecoeffpairshom(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_203, v_204;
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
    v_203 = stack[-12];
    if (v_203 == nil) goto v_9;
    else goto v_10;
v_9:
    v_203 = basic_elt(env, 1); // ((nil))
    goto v_8;
v_10:
    v_203 = stack[-13];
    if (!car_legal(v_203)) v_203 = carerror(v_203); else
    v_203 = car(v_203);
    stack[-15] = v_203;
v_20:
    stack[0] = stack[-11];
    v_203 = stack[-14];
    if (!car_legal(v_203)) v_204 = carerror(v_203); else
    v_204 = car(v_203);
    v_203 = stack[-15];
    {   LispObject fn = basic_elt(env, 2); // tayexp!-difference
    v_203 = (*qfn2(fn))(fn, v_204, v_203);
    }
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 3); // tayexp!-times2
    v_203 = (*qfn2(fn))(fn, stack[0], v_203);
    }
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 4); // tayexp!-minusp
    v_203 = (*qfn1(fn))(fn, v_203);
    }
    env = stack[-16];
    if (v_203 == nil) goto v_27;
    v_203 = nil;
    goto v_19;
v_27:
    v_203 = stack[-14];
    if (!car_legal(v_203)) stack[-2] = cdrerror(v_203); else
    stack[-2] = cdr(v_203);
    v_203 = stack[-13];
    if (!car_legal(v_203)) stack[-1] = cdrerror(v_203); else
    stack[-1] = cdr(v_203);
    v_203 = stack[-12];
    if (!car_legal(v_203)) stack[0] = cdrerror(v_203); else
    stack[0] = cdr(v_203);
    v_203 = stack[-11];
    v_203 = ncons(v_203);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 0); // makecoeffpairshom
    v_203 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_203);
    }
    env = stack[-16];
    stack[-7] = v_203;
    v_203 = stack[-7];
    if (v_203 == nil) goto v_53;
    else goto v_54;
v_53:
    v_203 = nil;
    goto v_40;
v_54:
    v_203 = stack[-7];
    if (!car_legal(v_203)) v_203 = carerror(v_203); else
    v_203 = car(v_203);
    stack[-3] = v_203;
    stack[-2] = stack[-15];
    v_203 = stack[-3];
    if (!car_legal(v_203)) stack[-1] = carerror(v_203); else
    stack[-1] = car(v_203);
    v_203 = stack[-13];
    if (!car_legal(v_203)) stack[0] = carerror(v_203); else
    stack[0] = car(v_203);
    v_203 = stack[-12];
    if (!car_legal(v_203)) v_204 = carerror(v_203); else
    v_204 = car(v_203);
    v_203 = stack[-15];
    {   LispObject fn = basic_elt(env, 2); // tayexp!-difference
    v_203 = (*qfn2(fn))(fn, v_204, v_203);
    }
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 5); // tayexp!-plus2
    v_204 = (*qfn2(fn))(fn, stack[0], v_203);
    }
    env = stack[-16];
    v_203 = stack[-3];
    if (!car_legal(v_203)) v_203 = cdrerror(v_203); else
    v_203 = cdr(v_203);
    v_203 = cons(v_204, v_203);
    env = stack[-16];
    v_203 = acons(stack[-2], stack[-1], v_203);
    env = stack[-16];
    v_203 = ncons(v_203);
    env = stack[-16];
    stack[-5] = v_203;
    stack[-6] = v_203;
v_41:
    v_203 = stack[-7];
    if (!car_legal(v_203)) v_203 = cdrerror(v_203); else
    v_203 = cdr(v_203);
    stack[-7] = v_203;
    v_203 = stack[-7];
    if (v_203 == nil) goto v_79;
    else goto v_80;
v_79:
    v_203 = stack[-6];
    goto v_40;
v_80:
    stack[-4] = stack[-5];
    v_203 = stack[-7];
    if (!car_legal(v_203)) v_203 = carerror(v_203); else
    v_203 = car(v_203);
    stack[-3] = v_203;
    stack[-2] = stack[-15];
    v_203 = stack[-3];
    if (!car_legal(v_203)) stack[-1] = carerror(v_203); else
    stack[-1] = car(v_203);
    v_203 = stack[-13];
    if (!car_legal(v_203)) stack[0] = carerror(v_203); else
    stack[0] = car(v_203);
    v_203 = stack[-12];
    if (!car_legal(v_203)) v_204 = carerror(v_203); else
    v_204 = car(v_203);
    v_203 = stack[-15];
    {   LispObject fn = basic_elt(env, 2); // tayexp!-difference
    v_203 = (*qfn2(fn))(fn, v_204, v_203);
    }
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 5); // tayexp!-plus2
    v_204 = (*qfn2(fn))(fn, stack[0], v_203);
    }
    env = stack[-16];
    v_203 = stack[-3];
    if (!car_legal(v_203)) v_203 = cdrerror(v_203); else
    v_203 = cdr(v_203);
    v_203 = cons(v_204, v_203);
    env = stack[-16];
    v_203 = acons(stack[-2], stack[-1], v_203);
    env = stack[-16];
    v_203 = ncons(v_203);
    env = stack[-16];
    if (!car_legal(stack[-4])) rplacd_fails(stack[-4]);
    setcdr(stack[-4], v_203);
    v_203 = stack[-5];
    if (!car_legal(v_203)) v_203 = cdrerror(v_203); else
    v_203 = cdr(v_203);
    stack[-5] = v_203;
    goto v_41;
v_40:
    stack[-10] = v_203;
    v_203 = stack[-10];
    {   LispObject fn = basic_elt(env, 6); // lastpair
    v_203 = (*qfn1(fn))(fn, v_203);
    }
    env = stack[-16];
    stack[-9] = v_203;
    v_204 = stack[-15];
    v_203 = stack[-11];
    {   LispObject fn = basic_elt(env, 5); // tayexp!-plus2
    v_203 = (*qfn2(fn))(fn, v_204, v_203);
    }
    env = stack[-16];
    stack[-15] = v_203;
    v_203 = stack[-9];
    if (!consp(v_203)) goto v_112;
    else goto v_113;
v_112:
    goto v_20;
v_113:
v_21:
    stack[0] = stack[-11];
    v_203 = stack[-14];
    if (!car_legal(v_203)) v_204 = carerror(v_203); else
    v_204 = car(v_203);
    v_203 = stack[-15];
    {   LispObject fn = basic_elt(env, 2); // tayexp!-difference
    v_203 = (*qfn2(fn))(fn, v_204, v_203);
    }
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 3); // tayexp!-times2
    v_203 = (*qfn2(fn))(fn, stack[0], v_203);
    }
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 4); // tayexp!-minusp
    v_203 = (*qfn1(fn))(fn, v_203);
    }
    env = stack[-16];
    if (v_203 == nil) goto v_118;
    v_203 = stack[-10];
    goto v_19;
v_118:
    stack[-8] = stack[-9];
    v_203 = stack[-14];
    if (!car_legal(v_203)) stack[-2] = cdrerror(v_203); else
    stack[-2] = cdr(v_203);
    v_203 = stack[-13];
    if (!car_legal(v_203)) stack[-1] = cdrerror(v_203); else
    stack[-1] = cdr(v_203);
    v_203 = stack[-12];
    if (!car_legal(v_203)) stack[0] = cdrerror(v_203); else
    stack[0] = cdr(v_203);
    v_203 = stack[-11];
    v_203 = ncons(v_203);
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 0); // makecoeffpairshom
    v_203 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_203);
    }
    env = stack[-16];
    stack[-7] = v_203;
    v_203 = stack[-7];
    if (v_203 == nil) goto v_145;
    else goto v_146;
v_145:
    v_203 = nil;
    goto v_132;
v_146:
    v_203 = stack[-7];
    if (!car_legal(v_203)) v_203 = carerror(v_203); else
    v_203 = car(v_203);
    stack[-3] = v_203;
    stack[-2] = stack[-15];
    v_203 = stack[-3];
    if (!car_legal(v_203)) stack[-1] = carerror(v_203); else
    stack[-1] = car(v_203);
    v_203 = stack[-13];
    if (!car_legal(v_203)) stack[0] = carerror(v_203); else
    stack[0] = car(v_203);
    v_203 = stack[-12];
    if (!car_legal(v_203)) v_204 = carerror(v_203); else
    v_204 = car(v_203);
    v_203 = stack[-15];
    {   LispObject fn = basic_elt(env, 2); // tayexp!-difference
    v_203 = (*qfn2(fn))(fn, v_204, v_203);
    }
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 5); // tayexp!-plus2
    v_204 = (*qfn2(fn))(fn, stack[0], v_203);
    }
    env = stack[-16];
    v_203 = stack[-3];
    if (!car_legal(v_203)) v_203 = cdrerror(v_203); else
    v_203 = cdr(v_203);
    v_203 = cons(v_204, v_203);
    env = stack[-16];
    v_203 = acons(stack[-2], stack[-1], v_203);
    env = stack[-16];
    v_203 = ncons(v_203);
    env = stack[-16];
    stack[-5] = v_203;
    stack[-6] = v_203;
v_133:
    v_203 = stack[-7];
    if (!car_legal(v_203)) v_203 = cdrerror(v_203); else
    v_203 = cdr(v_203);
    stack[-7] = v_203;
    v_203 = stack[-7];
    if (v_203 == nil) goto v_171;
    else goto v_172;
v_171:
    v_203 = stack[-6];
    goto v_132;
v_172:
    stack[-4] = stack[-5];
    v_203 = stack[-7];
    if (!car_legal(v_203)) v_203 = carerror(v_203); else
    v_203 = car(v_203);
    stack[-3] = v_203;
    stack[-2] = stack[-15];
    v_203 = stack[-3];
    if (!car_legal(v_203)) stack[-1] = carerror(v_203); else
    stack[-1] = car(v_203);
    v_203 = stack[-13];
    if (!car_legal(v_203)) stack[0] = carerror(v_203); else
    stack[0] = car(v_203);
    v_203 = stack[-12];
    if (!car_legal(v_203)) v_204 = carerror(v_203); else
    v_204 = car(v_203);
    v_203 = stack[-15];
    {   LispObject fn = basic_elt(env, 2); // tayexp!-difference
    v_203 = (*qfn2(fn))(fn, v_204, v_203);
    }
    env = stack[-16];
    {   LispObject fn = basic_elt(env, 5); // tayexp!-plus2
    v_204 = (*qfn2(fn))(fn, stack[0], v_203);
    }
    env = stack[-16];
    v_203 = stack[-3];
    if (!car_legal(v_203)) v_203 = cdrerror(v_203); else
    v_203 = cdr(v_203);
    v_203 = cons(v_204, v_203);
    env = stack[-16];
    v_203 = acons(stack[-2], stack[-1], v_203);
    env = stack[-16];
    v_203 = ncons(v_203);
    env = stack[-16];
    if (!car_legal(stack[-4])) rplacd_fails(stack[-4]);
    setcdr(stack[-4], v_203);
    v_203 = stack[-5];
    if (!car_legal(v_203)) v_203 = cdrerror(v_203); else
    v_203 = cdr(v_203);
    stack[-5] = v_203;
    goto v_133;
v_132:
    if (!car_legal(stack[-8])) rplacd_fails(stack[-8]);
    setcdr(stack[-8], v_203);
    v_203 = stack[-9];
    {   LispObject fn = basic_elt(env, 6); // lastpair
    v_203 = (*qfn1(fn))(fn, v_203);
    }
    env = stack[-16];
    stack[-9] = v_203;
    v_204 = stack[-15];
    v_203 = stack[-11];
    {   LispObject fn = basic_elt(env, 5); // tayexp!-plus2
    v_203 = (*qfn2(fn))(fn, v_204, v_203);
    }
    env = stack[-16];
    stack[-15] = v_203;
    goto v_21;
v_19:
    goto v_8;
    v_203 = nil;
v_8:
    return onevalue(v_203);
}



// Code for pasf_exprng!-gball

static LispObject CC_pasf_exprngKgball(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_155, v_156, v_157, v_158;
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
    real_push(nil, nil, nil, nil, nil);
    stack_popper stack_popper_var(11);
// copy arguments values to proper place
    stack[-4] = v_7;
    stack[-5] = v_6;
    stack[-6] = v_5;
    stack[-7] = v_4;
    stack[0] = v_3;
    stack[-8] = v_2;
// end of prologue
    stack[-2] = nil;
    v_155 = stack[0];
    {   LispObject fn = basic_elt(env, 7); // cl_fvarl
    v_155 = (*qfn1(fn))(fn, v_155);
    }
    env = stack[-10];
    v_157 = v_155;
    v_156 = stack[-8];
    if (!consp(v_157)) goto v_25;
    v_157 = car(v_157);
    if (v_157 == v_156) goto v_26;
v_25:
    v_156 = lisp_true;
    goto v_24;
v_26:
    v_156 = v_155;
    if (!car_legal(v_156)) v_156 = cdrerror(v_156); else
    v_156 = cdr(v_156);
    goto v_24;
    v_156 = nil;
v_24:
    if (v_156 == nil) goto v_22;
    v_158 = basic_elt(env, 1); // "pasf_exprng: bad bound "
    v_157 = stack[0];
    v_156 = basic_elt(env, 2); // " with free variables "
    v_155 = list4(v_158, v_157, v_156, v_155);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 8); // rederr
    v_155 = (*qfn1(fn))(fn, v_155);
    }
    env = stack[-10];
    goto v_20;
v_22:
v_20:
    v_155 = qvalue(basic_elt(env, 3)); // !*rlexprngnatural
    if (v_155 == nil) goto v_44;
    v_155 = stack[-7];
    {   LispObject fn = basic_elt(env, 9); // pasf_exprng
    v_155 = (*qfn1(fn))(fn, v_155);
    }
    env = stack[-10];
    stack[-7] = v_155;
    goto v_42;
v_44:
v_42:
    v_155 = stack[0];
    {   LispObject fn = basic_elt(env, 10); // pasf_qff2ivl
    v_155 = (*qfn1(fn))(fn, v_155);
    }
    env = stack[-10];
    stack[-1] = v_155;
    v_155 = lisp_true;
    stack[-9] = v_155;
v_53:
    v_155 = stack[-9];
    if (v_155 == nil) goto v_56;
    v_155 = stack[-1];
    if (v_155 == nil) goto v_56;
    goto v_57;
v_56:
    goto v_52;
v_57:
    v_155 = stack[-1];
    if (!car_legal(v_155)) v_155 = carerror(v_155); else
    v_155 = car(v_155);
    v_156 = v_155;
    v_155 = stack[-1];
    if (!car_legal(v_155)) v_155 = cdrerror(v_155); else
    v_155 = cdr(v_155);
    stack[-1] = v_155;
    v_155 = v_156;
    stack[0] = v_155;
    v_155 = stack[0];
    if (!car_legal(v_155)) v_155 = carerror(v_155); else
    v_155 = car(v_155);
    stack[-3] = v_155;
v_76:
    v_155 = stack[-9];
    if (v_155 == nil) goto v_79;
    v_156 = stack[-3];
    v_155 = stack[0];
    if (!car_legal(v_155)) v_155 = cdrerror(v_155); else
    v_155 = cdr(v_155);
    v_155 = static_cast<LispObject>(lesseq2(v_156, v_155));
    v_155 = v_155 ? lisp_true : nil;
    env = stack[-10];
    if (v_155 == nil) goto v_79;
    goto v_80;
v_79:
    goto v_75;
v_80:
    v_157 = stack[-7];
    v_156 = stack[-8];
    v_155 = stack[-3];
    {   LispObject fn = basic_elt(env, 11); // pasf_sisub
    v_155 = (*qfn3(fn))(fn, v_157, v_156, v_155);
    }
    env = stack[-10];
    v_156 = qvalue(basic_elt(env, 3)); // !*rlexprngnatural
    if (v_156 == nil) goto v_95;
    else goto v_96;
v_95:
    {   LispObject fn = basic_elt(env, 9); // pasf_exprng
    v_155 = (*qfn1(fn))(fn, v_155);
    }
    env = stack[-10];
    goto v_94;
v_96:
v_94:
    v_157 = v_155;
    v_156 = stack[-4];
    if (v_157 == v_156) goto v_102;
    else goto v_103;
v_102:
    v_155 = nil;
    stack[-9] = v_155;
    goto v_101;
v_103:
    v_157 = v_155;
    v_156 = stack[-5];
    if (equal(v_157, v_156)) goto v_112;
    v_156 = v_155;
    v_155 = stack[-2];
    v_155 = cons(v_156, v_155);
    env = stack[-10];
    stack[-2] = v_155;
    goto v_110;
v_112:
v_110:
    v_155 = stack[-3];
    v_155 = add1(v_155);
    env = stack[-10];
    stack[-3] = v_155;
    goto v_101;
v_101:
    goto v_76;
v_75:
    goto v_53;
v_52:
    v_155 = stack[-9];
    if (v_155 == nil) goto v_122;
    else goto v_123;
v_122:
    v_155 = stack[-4];
    goto v_16;
v_123:
    v_155 = stack[-2];
    if (v_155 == nil) goto v_129;
    v_155 = stack[-2];
    if (!car_legal(v_155)) v_155 = cdrerror(v_155); else
    v_155 = cdr(v_155);
    if (v_155 == nil) goto v_129;
    v_156 = stack[-6];
    v_155 = stack[-2];
    return cons(v_156, v_155);
v_129:
    v_155 = stack[-2];
    if (v_155 == nil) goto v_138;
    else goto v_139;
v_138:
    v_156 = stack[-6];
    v_155 = basic_elt(env, 4); // and
    if (v_156 == v_155) goto v_143;
    else goto v_144;
v_143:
    v_155 = basic_elt(env, 5); // true
    goto v_142;
v_144:
    v_155 = basic_elt(env, 6); // false
    goto v_142;
    v_155 = nil;
v_142:
    goto v_127;
v_139:
    v_155 = stack[-2];
    if (!car_legal(v_155)) v_155 = carerror(v_155); else
    v_155 = car(v_155);
    goto v_127;
    v_155 = nil;
v_127:
v_16:
    return onevalue(v_155);
}



// Code for matrixml

static LispObject CC_matrixml(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_39 = basic_elt(env, 1); // "<matrix"
    {   LispObject fn = basic_elt(env, 5); // printout
    v_39 = (*qfn1(fn))(fn, v_39);
    }
    env = stack[-1];
    v_39 = stack[0];
    if (!car_legal(v_39)) v_40 = carerror(v_39); else
    v_40 = car(v_39);
    v_39 = basic_elt(env, 2); // ""
    {   LispObject fn = basic_elt(env, 6); // attributesml
    v_39 = (*qfn2(fn))(fn, v_40, v_39);
    }
    env = stack[-1];
    v_39 = lisp_true;
    {   LispObject fn = basic_elt(env, 7); // indent!*
    v_39 = (*qfn1(fn))(fn, v_39);
    }
    env = stack[-1];
    v_39 = stack[0];
    if (!car_legal(v_39)) v_39 = cdrerror(v_39); else
    v_39 = cdr(v_39);
    if (!car_legal(v_39)) v_40 = carerror(v_39); else
    v_40 = car(v_39);
    v_39 = basic_elt(env, 3); // matrixrow
    if (v_40 == v_39) goto v_16;
    else goto v_17;
v_16:
    v_39 = stack[0];
    if (!car_legal(v_39)) v_39 = cdrerror(v_39); else
    v_39 = cdr(v_39);
    if (!car_legal(v_39)) v_39 = cdrerror(v_39); else
    v_39 = cdr(v_39);
    if (!car_legal(v_39)) v_39 = carerror(v_39); else
    v_39 = car(v_39);
    {   LispObject fn = basic_elt(env, 8); // matrix_rows
    v_39 = (*qfn1(fn))(fn, v_39);
    }
    env = stack[-1];
    goto v_15;
v_17:
    v_39 = stack[0];
    if (!car_legal(v_39)) v_39 = cdrerror(v_39); else
    v_39 = cdr(v_39);
    if (!car_legal(v_39)) v_39 = cdrerror(v_39); else
    v_39 = cdr(v_39);
    if (!car_legal(v_39)) v_39 = carerror(v_39); else
    v_39 = car(v_39);
    {   LispObject fn = basic_elt(env, 9); // cols2rows
    v_39 = (*qfn1(fn))(fn, v_39);
    }
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 8); // matrix_rows
    v_39 = (*qfn1(fn))(fn, v_39);
    }
    env = stack[-1];
    goto v_15;
v_15:
    v_39 = nil;
    {   LispObject fn = basic_elt(env, 7); // indent!*
    v_39 = (*qfn1(fn))(fn, v_39);
    }
    env = stack[-1];
    v_39 = basic_elt(env, 4); // "</matrix>"
    {   LispObject fn = basic_elt(env, 5); // printout
    v_39 = (*qfn1(fn))(fn, v_39);
    }
    v_39 = nil;
    return onevalue(v_39);
}



// Code for convprc2

static LispObject CC_convprc2(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_77 = stack[-1];
    {   LispObject fn = basic_elt(env, 4); // convprec
    v_77 = (*qfn1(fn))(fn, v_77);
    }
    env = stack[-2];
    stack[-1] = v_77;
    v_77 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // convprec
    v_77 = (*qfn1(fn))(fn, v_77);
    }
    env = stack[-2];
    setvalue(basic_elt(env, 1), v_77); // yy!!
    v_77 = qvalue(basic_elt(env, 2)); // !*roundbf
    if (v_77 == nil) goto v_12;
    v_77 = qvalue(basic_elt(env, 1)); // yy!!
    v_78 = v_77;
    v_78 = Lfloatp(nil, v_78);
    env = stack[-2];
    if (v_78 == nil) goto v_19;
    {   LispObject fn = basic_elt(env, 5); // fl2bf
    v_77 = (*qfn1(fn))(fn, v_77);
    }
    env = stack[-2];
    goto v_17;
v_19:
    v_78 = v_77;
    if (!consp(v_78)) goto v_30;
    goto v_28;
v_30:
    v_78 = v_77;
    v_78 = integerp(v_78);
    if (v_78 == nil) goto v_34;
    v_79 = basic_elt(env, 3); // !:rd!:
    v_78 = v_77;
    v_77 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_77 = list2star(v_79, v_78, v_77);
    env = stack[-2];
    goto v_28;
v_34:
    {   LispObject fn = basic_elt(env, 6); // read!:num
    v_77 = (*qfn1(fn))(fn, v_77);
    }
    env = stack[-2];
    goto v_28;
    v_77 = nil;
v_28:
    {   LispObject fn = basic_elt(env, 7); // normbf
    v_77 = (*qfn1(fn))(fn, v_77);
    }
    env = stack[-2];
    goto v_17;
    v_77 = nil;
v_17:
    setvalue(basic_elt(env, 1), v_77); // yy!!
    v_77 = stack[-1];
    v_77 = Lfloatp(nil, v_77);
    env = stack[-2];
    if (v_77 == nil) goto v_48;
    v_77 = stack[-1];
    {
        LispObject fn = basic_elt(env, 5); // fl2bf
        return (*qfn1(fn))(fn, v_77);
    }
v_48:
    v_77 = stack[-1];
    if (!consp(v_77)) goto v_59;
    v_77 = stack[-1];
    goto v_57;
v_59:
    v_77 = stack[-1];
    v_77 = integerp(v_77);
    if (v_77 == nil) goto v_63;
    v_79 = basic_elt(env, 3); // !:rd!:
    v_78 = stack[-1];
    v_77 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_77 = list2star(v_79, v_78, v_77);
    env = stack[-2];
    goto v_57;
v_63:
    v_77 = stack[-1];
    {   LispObject fn = basic_elt(env, 6); // read!:num
    v_77 = (*qfn1(fn))(fn, v_77);
    }
    env = stack[-2];
    goto v_57;
    v_77 = nil;
v_57:
    {
        LispObject fn = basic_elt(env, 7); // normbf
        return (*qfn1(fn))(fn, v_77);
    }
    v_77 = nil;
    goto v_10;
v_12:
    v_77 = stack[-1];
    goto v_10;
    v_77 = nil;
v_10:
    return onevalue(v_77);
}



// Code for findhr

static LispObject CC_findhr(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    push(nil, nil);
    stack_popper stack_popper_var(3);
// end of prologue
    stack[-1] = nil;
v_8:
    v_45 = qvalue(basic_elt(env, 1)); // headhisto
    v_44 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_44 = static_cast<LispObject>(greaterp2(v_45, v_44));
    v_44 = v_44 ? lisp_true : nil;
    env = stack[-2];
    if (v_44 == nil) goto v_11;
    v_45 = qvalue(basic_elt(env, 2)); // codhisto
    v_44 = qvalue(basic_elt(env, 1)); // headhisto
    v_44 = Lgetv(nil, v_45, v_44);
    env = stack[-2];
    stack[-1] = v_44;
    if (v_44 == nil) goto v_17;
    else goto v_11;
v_17:
    goto v_12;
v_11:
    goto v_7;
v_12:
    v_44 = qvalue(basic_elt(env, 1)); // headhisto
    v_44 = sub1(v_44);
    env = stack[-2];
    setvalue(basic_elt(env, 1), v_44); // headhisto
    goto v_8;
v_7:
    v_44 = stack[-1];
    if (v_44 == nil) goto v_27;
    v_44 = stack[-1];
    v_44 = ncons(v_44);
    env = stack[-2];
    setvalue(basic_elt(env, 3), v_44); // psi
    v_44 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    setvalue(basic_elt(env, 4), v_44); // npsi
    stack[0] = qvalue(basic_elt(env, 5)); // codmat
    v_45 = qvalue(basic_elt(env, 6)); // maxvar
    v_44 = stack[-1];
    v_44 = plus2(v_45, v_44);
    env = stack[-2];
    v_46 = Lgetv(nil, stack[0], v_44);
    env = stack[-2];
    v_45 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_44 = nil;
    v_44 = Lputv(nil, v_46, v_45, v_44);
    env = stack[-2];
    v_45 = stack[-1];
    v_44 = qvalue(basic_elt(env, 7)); // rcoccup
    v_44 = cons(v_45, v_44);
    env = stack[-2];
    setvalue(basic_elt(env, 7), v_44); // rcoccup
    goto v_25;
v_27:
v_25:
    v_44 = stack[-1];
    return onevalue(v_44);
}



// Code for r2oaddspecies

static LispObject CC_r2oaddspecies(LispObject env,
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
    v_25 = stack[0];
    v_25 = Lassoc(nil, v_26, v_25);
    if (v_25 == nil) goto v_8;
    v_25 = stack[0];
    goto v_6;
v_8:
    v_25 = basic_elt(env, 1); // "new species: "
    v_25 = Lprinc(nil, v_25);
    env = stack[-2];
    v_25 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // prin2t
    v_25 = (*qfn1(fn))(fn, v_25);
    }
    env = stack[-2];
    v_26 = stack[-1];
    v_25 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_25 = cons(v_26, v_25);
    env = stack[-2];
    v_25 = ncons(v_25);
    {
        LispObject v_29 = stack[0];
        return Lappend_2(nil, v_29, v_25);
    }
    v_25 = nil;
v_6:
    return onevalue(v_25);
}



// Code for ordpl

static LispObject CC_ordpl(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_37, v_38, v_39, v_40;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_38 = v_3;
    v_39 = v_2;
// end of prologue
v_7:
    v_37 = v_39;
    if (!consp(v_37)) goto v_10;
    else goto v_11;
v_10:
    v_37 = v_39;
    {
        LispObject fn = basic_elt(env, 1); // ordp
        return (*qfn2(fn))(fn, v_37, v_38);
    }
v_11:
    v_37 = v_38;
    if (!consp(v_37)) goto v_16;
    else goto v_17;
v_16:
    v_37 = lisp_true;
    goto v_6;
v_17:
    v_37 = v_39;
    if (!car_legal(v_37)) v_40 = carerror(v_37); else
    v_40 = car(v_37);
    v_37 = v_38;
    if (!car_legal(v_37)) v_37 = carerror(v_37); else
    v_37 = car(v_37);
    if (equal(v_40, v_37)) goto v_20;
    else goto v_21;
v_20:
    v_37 = v_39;
    if (!car_legal(v_37)) v_37 = cdrerror(v_37); else
    v_37 = cdr(v_37);
    v_39 = v_37;
    v_37 = v_38;
    if (!car_legal(v_37)) v_37 = cdrerror(v_37); else
    v_37 = cdr(v_37);
    v_38 = v_37;
    goto v_7;
v_21:
    v_37 = v_39;
    if (!car_legal(v_37)) v_37 = carerror(v_37); else
    v_37 = car(v_37);
    if (!car_legal(v_38)) v_38 = carerror(v_38); else
    v_38 = car(v_38);
    {
        LispObject fn = basic_elt(env, 1); // ordp
        return (*qfn2(fn))(fn, v_37, v_38);
    }
    v_37 = nil;
v_6:
    return onevalue(v_37);
}



// Code for evalletsub

static LispObject CC_evalletsub(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_21 = v_3;
    stack[0] = v_2;
// end of prologue
    v_22 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // evalletsub2
    v_21 = (*qfn2(fn))(fn, v_22, v_21);
    }
    env = stack[-1];
    stack[0] = v_21;
    {   LispObject fn = basic_elt(env, 4); // errorp
    v_21 = (*qfn1(fn))(fn, v_21);
    }
    env = stack[-1];
    if (v_21 == nil) goto v_8;
    v_23 = basic_elt(env, 1); // alg
    v_22 = static_cast<LispObject>(384)+TAG_FIXNUM; // 24
    v_21 = basic_elt(env, 2); // "Invalid simplification"
    {
        LispObject fn = basic_elt(env, 5); // rerror
        return (*qfn3(fn))(fn, v_23, v_22, v_21);
    }
v_8:
    v_21 = stack[0];
    if (!car_legal(v_21)) v_21 = carerror(v_21); else
    v_21 = car(v_21);
    goto v_6;
    v_21 = nil;
v_6:
    return onevalue(v_21);
}



// Code for lieninstruc

static LispObject CC_lieninstruc(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_105, v_106, v_107, v_108;
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
    v_105 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-5] = v_105;
v_9:
    stack[0] = basic_elt(env, 1); // difference
    v_107 = basic_elt(env, 1); // difference
    v_106 = stack[-4];
    v_105 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_105 = list3(v_107, v_106, v_105);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 6); // aeval!*
    v_106 = (*qfn1(fn))(fn, v_105);
    }
    env = stack[-6];
    v_105 = stack[-5];
    v_105 = list3(stack[0], v_106, v_105);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 7); // aminusp!:
    v_105 = (*qfn1(fn))(fn, v_105);
    }
    env = stack[-6];
    if (v_105 == nil) goto v_14;
    goto v_8;
v_14:
    v_105 = stack[-5];
    v_105 = add1(v_105);
    env = stack[-6];
    stack[-3] = v_105;
v_28:
    stack[0] = basic_elt(env, 1); // difference
    v_105 = stack[-4];
    {   LispObject fn = basic_elt(env, 6); // aeval!*
    v_106 = (*qfn1(fn))(fn, v_105);
    }
    env = stack[-6];
    v_105 = stack[-3];
    v_105 = list3(stack[0], v_106, v_105);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 7); // aminusp!:
    v_105 = (*qfn1(fn))(fn, v_105);
    }
    env = stack[-6];
    if (v_105 == nil) goto v_34;
    goto v_27;
v_34:
    v_105 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-2] = v_105;
v_45:
    stack[0] = basic_elt(env, 1); // difference
    v_105 = stack[-4];
    {   LispObject fn = basic_elt(env, 6); // aeval!*
    v_106 = (*qfn1(fn))(fn, v_105);
    }
    env = stack[-6];
    v_105 = stack[-2];
    v_105 = list3(stack[0], v_106, v_105);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 7); // aminusp!:
    v_105 = (*qfn1(fn))(fn, v_105);
    }
    env = stack[-6];
    if (v_105 == nil) goto v_50;
    goto v_44;
v_50:
    v_108 = basic_elt(env, 2); // lie_cc
    v_107 = stack[-5];
    v_106 = stack[-3];
    v_105 = stack[-2];
    stack[0] = list4(v_108, v_107, v_106, v_105);
    env = stack[-6];
    v_108 = basic_elt(env, 3); // lienstrucin
    v_107 = stack[-5];
    v_106 = stack[-3];
    v_105 = stack[-2];
    v_105 = list4(v_108, v_107, v_106, v_105);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 6); // aeval!*
    v_105 = (*qfn1(fn))(fn, v_105);
    }
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 8); // setk
    v_105 = (*qfn2(fn))(fn, stack[0], v_105);
    }
    env = stack[-6];
    v_108 = basic_elt(env, 2); // lie_cc
    v_107 = stack[-3];
    v_106 = stack[-5];
    v_105 = stack[-2];
    stack[-1] = list4(v_108, v_107, v_106, v_105);
    env = stack[-6];
    stack[0] = basic_elt(env, 4); // minus
    v_108 = basic_elt(env, 3); // lienstrucin
    v_107 = stack[-5];
    v_106 = stack[-3];
    v_105 = stack[-2];
    v_105 = list4(v_108, v_107, v_106, v_105);
    env = stack[-6];
    v_105 = list2(stack[0], v_105);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 6); // aeval!*
    v_105 = (*qfn1(fn))(fn, v_105);
    }
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 8); // setk
    v_105 = (*qfn2(fn))(fn, stack[-1], v_105);
    }
    env = stack[-6];
    v_105 = stack[-2];
    v_107 = basic_elt(env, 5); // plus
    v_106 = v_105;
    v_105 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_105 = list3(v_107, v_106, v_105);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 6); // aeval!*
    v_105 = (*qfn1(fn))(fn, v_105);
    }
    env = stack[-6];
    stack[-2] = v_105;
    goto v_45;
v_44:
    v_105 = stack[-3];
    v_107 = basic_elt(env, 5); // plus
    v_106 = v_105;
    v_105 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_105 = list3(v_107, v_106, v_105);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 6); // aeval!*
    v_105 = (*qfn1(fn))(fn, v_105);
    }
    env = stack[-6];
    stack[-3] = v_105;
    goto v_28;
v_27:
    v_105 = stack[-5];
    v_107 = basic_elt(env, 5); // plus
    v_106 = v_105;
    v_105 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_105 = list3(v_107, v_106, v_105);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 6); // aeval!*
    v_105 = (*qfn1(fn))(fn, v_105);
    }
    env = stack[-6];
    stack[-5] = v_105;
    goto v_9;
v_8:
    v_105 = nil;
    return onevalue(v_105);
}



// Code for gcdlist

static LispObject CC_gcdlist(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_440, v_441, v_442;
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(15);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_440 = stack[0];
    if (v_440 == nil) goto v_6;
    else goto v_7;
v_6:
    v_440 = nil;
    goto v_5;
v_7:
    v_440 = stack[0];
    if (!car_legal(v_440)) v_440 = cdrerror(v_440); else
    v_440 = cdr(v_440);
    if (v_440 == nil) goto v_10;
    else goto v_11;
v_10:
    v_440 = stack[0];
    if (!car_legal(v_440)) v_440 = carerror(v_440); else
    v_440 = car(v_440);
    {
        LispObject fn = basic_elt(env, 2); // poly!-abs
        return (*qfn1(fn))(fn, v_440);
    }
v_11:
    v_440 = stack[0];
    if (!car_legal(v_440)) v_440 = carerror(v_440); else
    v_440 = car(v_440);
    if (!consp(v_440)) goto v_21;
    else goto v_22;
v_21:
    v_440 = lisp_true;
    goto v_20;
v_22:
    v_440 = stack[0];
    if (!car_legal(v_440)) v_440 = carerror(v_440); else
    v_440 = car(v_440);
    if (!car_legal(v_440)) v_440 = carerror(v_440); else
    v_440 = car(v_440);
    v_440 = (consp(v_440) ? nil : lisp_true);
    goto v_20;
    v_440 = nil;
v_20:
    if (v_440 == nil) goto v_18;
    v_440 = stack[0];
    if (!car_legal(v_440)) v_441 = cdrerror(v_440); else
    v_441 = cdr(v_440);
    v_440 = stack[0];
    if (!car_legal(v_440)) v_440 = carerror(v_440); else
    v_440 = car(v_440);
    {
        LispObject fn = basic_elt(env, 3); // gcdld
        return (*qfn2(fn))(fn, v_441, v_440);
    }
v_18:
    stack[-1] = nil;
v_46:
    v_440 = stack[0];
    if (v_440 == nil) goto v_49;
    else goto v_50;
v_49:
    goto v_45;
v_50:
    v_440 = stack[0];
    if (!car_legal(v_440)) v_440 = carerror(v_440); else
    v_440 = car(v_440);
    if (v_440 == nil) goto v_55;
    else goto v_56;
v_55:
    v_440 = stack[0];
    if (!car_legal(v_440)) v_440 = cdrerror(v_440); else
    v_440 = cdr(v_440);
    stack[0] = v_440;
    goto v_54;
v_56:
    v_440 = stack[0];
    if (!car_legal(v_440)) v_440 = carerror(v_440); else
    v_440 = car(v_440);
    if (!consp(v_440)) goto v_65;
    else goto v_66;
v_65:
    v_440 = lisp_true;
    goto v_64;
v_66:
    v_440 = stack[0];
    if (!car_legal(v_440)) v_440 = carerror(v_440); else
    v_440 = car(v_440);
    if (!car_legal(v_440)) v_440 = carerror(v_440); else
    v_440 = car(v_440);
    v_440 = (consp(v_440) ? nil : lisp_true);
    goto v_64;
    v_440 = nil;
v_64:
    if (v_440 == nil) goto v_62;
    v_440 = stack[0];
    if (!car_legal(v_440)) stack[-2] = cdrerror(v_440); else
    stack[-2] = cdr(v_440);
    v_440 = stack[-1];
    {   LispObject fn = basic_elt(env, 4); // mapcarcar
    v_441 = (*qfn1(fn))(fn, v_440);
    }
    env = stack[-14];
    v_440 = stack[0];
    if (!car_legal(v_440)) v_440 = carerror(v_440); else
    v_440 = car(v_440);
    {   LispObject fn = basic_elt(env, 3); // gcdld
    v_440 = (*qfn2(fn))(fn, v_441, v_440);
    }
    env = stack[-14];
    {   LispObject fn = basic_elt(env, 3); // gcdld
    v_440 = (*qfn2(fn))(fn, stack[-2], v_440);
    }
    env = stack[-14];
    v_440 = ncons(v_440);
    env = stack[-14];
    v_440 = ncons(v_440);
    env = stack[-14];
    stack[-1] = v_440;
    v_440 = nil;
    stack[0] = v_440;
    goto v_54;
v_62:
    v_440 = stack[0];
    if (!car_legal(v_440)) stack[-2] = carerror(v_440); else
    stack[-2] = car(v_440);
    v_440 = stack[0];
    if (!car_legal(v_440)) v_440 = carerror(v_440); else
    v_440 = car(v_440);
    {   LispObject fn = basic_elt(env, 5); // powers1
    v_441 = (*qfn1(fn))(fn, v_440);
    }
    env = stack[-14];
    v_440 = stack[-1];
    v_440 = acons(stack[-2], v_441, v_440);
    env = stack[-14];
    stack[-1] = v_440;
    v_440 = stack[0];
    if (!car_legal(v_440)) v_440 = cdrerror(v_440); else
    v_440 = cdr(v_440);
    stack[0] = v_440;
    goto v_54;
v_54:
    goto v_46;
v_45:
    v_440 = stack[-1];
    if (v_440 == nil) goto v_100;
    else goto v_101;
v_100:
    v_440 = nil;
    goto v_43;
v_101:
    v_440 = stack[-1];
    if (!car_legal(v_440)) v_440 = cdrerror(v_440); else
    v_440 = cdr(v_440);
    if (v_440 == nil) goto v_104;
    else goto v_105;
v_104:
    v_440 = stack[-1];
    if (!car_legal(v_440)) v_440 = carerror(v_440); else
    v_440 = car(v_440);
    if (!car_legal(v_440)) v_440 = carerror(v_440); else
    v_440 = car(v_440);
    {
        LispObject fn = basic_elt(env, 2); // poly!-abs
        return (*qfn1(fn))(fn, v_440);
    }
v_105:
    v_440 = nil;
    stack[-13] = v_440;
    v_440 = nil;
    stack[-12] = v_440;
    v_440 = stack[-1];
    stack[-11] = v_440;
    v_440 = stack[-11];
    if (v_440 == nil) goto v_123;
    else goto v_124;
v_123:
    v_440 = nil;
    goto v_118;
v_124:
    v_440 = stack[-11];
    if (!car_legal(v_440)) v_440 = carerror(v_440); else
    v_440 = car(v_440);
    stack[-7] = v_440;
    stack[-6] = nil;
    v_440 = stack[-7];
    if (!car_legal(v_440)) v_440 = cdrerror(v_440); else
    v_440 = cdr(v_440);
    stack[-5] = v_440;
    v_440 = stack[-5];
    if (v_440 == nil) goto v_146;
    else goto v_147;
v_146:
    v_440 = nil;
    goto v_140;
v_147:
    v_440 = stack[-5];
    if (!car_legal(v_440)) v_440 = carerror(v_440); else
    v_440 = car(v_440);
    stack[-1] = v_440;
    v_440 = stack[-1];
    if (!car_legal(v_440)) v_442 = carerror(v_440); else
    v_442 = car(v_440);
    v_440 = stack[-1];
    if (!car_legal(v_440)) v_440 = cdrerror(v_440); else
    v_440 = cdr(v_440);
    if (!car_legal(v_440)) v_441 = cdrerror(v_440); else
    v_441 = cdr(v_440);
    v_440 = stack[-6];
    v_440 = acons(v_442, v_441, v_440);
    env = stack[-14];
    stack[-6] = v_440;
    v_440 = stack[-1];
    if (!car_legal(v_440)) stack[0] = carerror(v_440); else
    stack[0] = car(v_440);
    v_440 = stack[-1];
    if (!car_legal(v_440)) v_440 = cdrerror(v_440); else
    v_440 = cdr(v_440);
    if (!car_legal(v_440)) v_441 = carerror(v_440); else
    v_441 = car(v_440);
    v_440 = stack[-1];
    if (!car_legal(v_440)) v_440 = cdrerror(v_440); else
    v_440 = cdr(v_440);
    if (!car_legal(v_440)) v_440 = cdrerror(v_440); else
    v_440 = cdr(v_440);
    v_440 = difference2(v_441, v_440);
    env = stack[-14];
    v_440 = cons(stack[0], v_440);
    env = stack[-14];
    v_440 = ncons(v_440);
    env = stack[-14];
    stack[-3] = v_440;
    stack[-4] = v_440;
v_141:
    v_440 = stack[-5];
    if (!car_legal(v_440)) v_440 = cdrerror(v_440); else
    v_440 = cdr(v_440);
    stack[-5] = v_440;
    v_440 = stack[-5];
    if (v_440 == nil) goto v_175;
    else goto v_176;
v_175:
    v_440 = stack[-4];
    goto v_140;
v_176:
    stack[-2] = stack[-3];
    v_440 = stack[-5];
    if (!car_legal(v_440)) v_440 = carerror(v_440); else
    v_440 = car(v_440);
    stack[-1] = v_440;
    v_440 = stack[-1];
    if (!car_legal(v_440)) v_442 = carerror(v_440); else
    v_442 = car(v_440);
    v_440 = stack[-1];
    if (!car_legal(v_440)) v_440 = cdrerror(v_440); else
    v_440 = cdr(v_440);
    if (!car_legal(v_440)) v_441 = cdrerror(v_440); else
    v_441 = cdr(v_440);
    v_440 = stack[-6];
    v_440 = acons(v_442, v_441, v_440);
    env = stack[-14];
    stack[-6] = v_440;
    v_440 = stack[-1];
    if (!car_legal(v_440)) stack[0] = carerror(v_440); else
    stack[0] = car(v_440);
    v_440 = stack[-1];
    if (!car_legal(v_440)) v_440 = cdrerror(v_440); else
    v_440 = cdr(v_440);
    if (!car_legal(v_440)) v_441 = carerror(v_440); else
    v_441 = car(v_440);
    v_440 = stack[-1];
    if (!car_legal(v_440)) v_440 = cdrerror(v_440); else
    v_440 = cdr(v_440);
    if (!car_legal(v_440)) v_440 = cdrerror(v_440); else
    v_440 = cdr(v_440);
    v_440 = difference2(v_441, v_440);
    env = stack[-14];
    v_440 = cons(stack[0], v_440);
    env = stack[-14];
    v_440 = ncons(v_440);
    env = stack[-14];
    if (!car_legal(stack[-2])) rplacd_fails(stack[-2]);
    setcdr(stack[-2], v_440);
    v_440 = stack[-3];
    if (!car_legal(v_440)) v_440 = cdrerror(v_440); else
    v_440 = cdr(v_440);
    stack[-3] = v_440;
    goto v_141;
v_140:
    stack[0] = v_440;
    v_440 = stack[-7];
    if (!car_legal(v_440)) v_440 = carerror(v_440); else
    v_440 = car(v_440);
    {   LispObject fn = basic_elt(env, 6); // numeric!-content
    v_440 = (*qfn1(fn))(fn, v_440);
    }
    env = stack[-14];
    stack[-1] = v_440;
    v_440 = stack[-12];
    if (v_440 == nil) goto v_209;
    else goto v_210;
v_209:
    v_440 = stack[-6];
    stack[-13] = v_440;
    v_440 = stack[-1];
    stack[-12] = v_440;
    goto v_208;
v_210:
    v_441 = stack[-13];
    v_440 = stack[-6];
    {   LispObject fn = basic_elt(env, 7); // vintersection
    v_440 = (*qfn2(fn))(fn, v_441, v_440);
    }
    env = stack[-14];
    stack[-13] = v_440;
    v_441 = stack[-12];
    v_440 = stack[-1];
    {   LispObject fn = basic_elt(env, 8); // gcddd
    v_440 = (*qfn2(fn))(fn, v_441, v_440);
    }
    env = stack[-14];
    stack[-12] = v_440;
    goto v_208;
v_208:
    v_440 = stack[-6];
    stack[-2] = v_440;
v_225:
    v_440 = stack[-2];
    if (v_440 == nil) goto v_229;
    else goto v_230;
v_229:
    goto v_224;
v_230:
    v_440 = stack[-2];
    if (!car_legal(v_440)) v_440 = carerror(v_440); else
    v_440 = car(v_440);
    v_442 = v_440;
    v_440 = v_442;
    if (!car_legal(v_440)) v_441 = cdrerror(v_440); else
    v_441 = cdr(v_440);
    v_440 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_441 == v_440) goto v_239;
    v_440 = v_442;
    if (!car_legal(v_440)) v_440 = carerror(v_440); else
    v_440 = car(v_440);
    v_441 = v_442;
    if (!car_legal(v_441)) v_441 = cdrerror(v_441); else
    v_441 = cdr(v_441);
    {   LispObject fn = basic_elt(env, 9); // mksp
    v_441 = (*qfn2(fn))(fn, v_440, v_441);
    }
    env = stack[-14];
    v_440 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_440 = cons(v_441, v_440);
    env = stack[-14];
    v_440 = ncons(v_440);
    env = stack[-14];
    {   LispObject fn = basic_elt(env, 10); // multf
    v_440 = (*qfn2(fn))(fn, stack[-1], v_440);
    }
    env = stack[-14];
    stack[-1] = v_440;
    goto v_237;
v_239:
v_237:
    v_440 = stack[-2];
    if (!car_legal(v_440)) v_440 = cdrerror(v_440); else
    v_440 = cdr(v_440);
    stack[-2] = v_440;
    goto v_225;
v_224:
    v_440 = stack[-7];
    if (!car_legal(v_440)) v_442 = carerror(v_440); else
    v_442 = car(v_440);
    v_441 = stack[-1];
    v_440 = basic_elt(env, 1); // "Term content division failed"
    {   LispObject fn = basic_elt(env, 11); // quotfail1
    v_441 = (*qfn3(fn))(fn, v_442, v_441, v_440);
    }
    env = stack[-14];
    v_440 = stack[0];
    v_440 = cons(v_441, v_440);
    env = stack[-14];
    v_440 = ncons(v_440);
    env = stack[-14];
    stack[-9] = v_440;
    stack[-10] = v_440;
v_119:
    v_440 = stack[-11];
    if (!car_legal(v_440)) v_440 = cdrerror(v_440); else
    v_440 = cdr(v_440);
    stack[-11] = v_440;
    v_440 = stack[-11];
    if (v_440 == nil) goto v_266;
    else goto v_267;
v_266:
    v_440 = stack[-10];
    goto v_118;
v_267:
    stack[-8] = stack[-9];
    v_440 = stack[-11];
    if (!car_legal(v_440)) v_440 = carerror(v_440); else
    v_440 = car(v_440);
    stack[-7] = v_440;
    stack[-6] = nil;
    v_440 = stack[-7];
    if (!car_legal(v_440)) v_440 = cdrerror(v_440); else
    v_440 = cdr(v_440);
    stack[-5] = v_440;
    v_440 = stack[-5];
    if (v_440 == nil) goto v_290;
    else goto v_291;
v_290:
    v_440 = nil;
    goto v_284;
v_291:
    v_440 = stack[-5];
    if (!car_legal(v_440)) v_440 = carerror(v_440); else
    v_440 = car(v_440);
    stack[-1] = v_440;
    v_440 = stack[-1];
    if (!car_legal(v_440)) v_442 = carerror(v_440); else
    v_442 = car(v_440);
    v_440 = stack[-1];
    if (!car_legal(v_440)) v_440 = cdrerror(v_440); else
    v_440 = cdr(v_440);
    if (!car_legal(v_440)) v_441 = cdrerror(v_440); else
    v_441 = cdr(v_440);
    v_440 = stack[-6];
    v_440 = acons(v_442, v_441, v_440);
    env = stack[-14];
    stack[-6] = v_440;
    v_440 = stack[-1];
    if (!car_legal(v_440)) stack[0] = carerror(v_440); else
    stack[0] = car(v_440);
    v_440 = stack[-1];
    if (!car_legal(v_440)) v_440 = cdrerror(v_440); else
    v_440 = cdr(v_440);
    if (!car_legal(v_440)) v_441 = carerror(v_440); else
    v_441 = car(v_440);
    v_440 = stack[-1];
    if (!car_legal(v_440)) v_440 = cdrerror(v_440); else
    v_440 = cdr(v_440);
    if (!car_legal(v_440)) v_440 = cdrerror(v_440); else
    v_440 = cdr(v_440);
    v_440 = difference2(v_441, v_440);
    env = stack[-14];
    v_440 = cons(stack[0], v_440);
    env = stack[-14];
    v_440 = ncons(v_440);
    env = stack[-14];
    stack[-3] = v_440;
    stack[-4] = v_440;
v_285:
    v_440 = stack[-5];
    if (!car_legal(v_440)) v_440 = cdrerror(v_440); else
    v_440 = cdr(v_440);
    stack[-5] = v_440;
    v_440 = stack[-5];
    if (v_440 == nil) goto v_319;
    else goto v_320;
v_319:
    v_440 = stack[-4];
    goto v_284;
v_320:
    stack[-2] = stack[-3];
    v_440 = stack[-5];
    if (!car_legal(v_440)) v_440 = carerror(v_440); else
    v_440 = car(v_440);
    stack[-1] = v_440;
    v_440 = stack[-1];
    if (!car_legal(v_440)) v_442 = carerror(v_440); else
    v_442 = car(v_440);
    v_440 = stack[-1];
    if (!car_legal(v_440)) v_440 = cdrerror(v_440); else
    v_440 = cdr(v_440);
    if (!car_legal(v_440)) v_441 = cdrerror(v_440); else
    v_441 = cdr(v_440);
    v_440 = stack[-6];
    v_440 = acons(v_442, v_441, v_440);
    env = stack[-14];
    stack[-6] = v_440;
    v_440 = stack[-1];
    if (!car_legal(v_440)) stack[0] = carerror(v_440); else
    stack[0] = car(v_440);
    v_440 = stack[-1];
    if (!car_legal(v_440)) v_440 = cdrerror(v_440); else
    v_440 = cdr(v_440);
    if (!car_legal(v_440)) v_441 = carerror(v_440); else
    v_441 = car(v_440);
    v_440 = stack[-1];
    if (!car_legal(v_440)) v_440 = cdrerror(v_440); else
    v_440 = cdr(v_440);
    if (!car_legal(v_440)) v_440 = cdrerror(v_440); else
    v_440 = cdr(v_440);
    v_440 = difference2(v_441, v_440);
    env = stack[-14];
    v_440 = cons(stack[0], v_440);
    env = stack[-14];
    v_440 = ncons(v_440);
    env = stack[-14];
    if (!car_legal(stack[-2])) rplacd_fails(stack[-2]);
    setcdr(stack[-2], v_440);
    v_440 = stack[-3];
    if (!car_legal(v_440)) v_440 = cdrerror(v_440); else
    v_440 = cdr(v_440);
    stack[-3] = v_440;
    goto v_285;
v_284:
    stack[0] = v_440;
    v_440 = stack[-7];
    if (!car_legal(v_440)) v_440 = carerror(v_440); else
    v_440 = car(v_440);
    {   LispObject fn = basic_elt(env, 6); // numeric!-content
    v_440 = (*qfn1(fn))(fn, v_440);
    }
    env = stack[-14];
    stack[-1] = v_440;
    v_440 = stack[-12];
    if (v_440 == nil) goto v_353;
    else goto v_354;
v_353:
    v_440 = stack[-6];
    stack[-13] = v_440;
    v_440 = stack[-1];
    stack[-12] = v_440;
    goto v_352;
v_354:
    v_441 = stack[-13];
    v_440 = stack[-6];
    {   LispObject fn = basic_elt(env, 7); // vintersection
    v_440 = (*qfn2(fn))(fn, v_441, v_440);
    }
    env = stack[-14];
    stack[-13] = v_440;
    v_441 = stack[-12];
    v_440 = stack[-1];
    {   LispObject fn = basic_elt(env, 8); // gcddd
    v_440 = (*qfn2(fn))(fn, v_441, v_440);
    }
    env = stack[-14];
    stack[-12] = v_440;
    goto v_352;
v_352:
    v_440 = stack[-6];
    stack[-2] = v_440;
v_369:
    v_440 = stack[-2];
    if (v_440 == nil) goto v_373;
    else goto v_374;
v_373:
    goto v_368;
v_374:
    v_440 = stack[-2];
    if (!car_legal(v_440)) v_440 = carerror(v_440); else
    v_440 = car(v_440);
    v_442 = v_440;
    v_440 = v_442;
    if (!car_legal(v_440)) v_441 = cdrerror(v_440); else
    v_441 = cdr(v_440);
    v_440 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_441 == v_440) goto v_383;
    v_440 = v_442;
    if (!car_legal(v_440)) v_440 = carerror(v_440); else
    v_440 = car(v_440);
    v_441 = v_442;
    if (!car_legal(v_441)) v_441 = cdrerror(v_441); else
    v_441 = cdr(v_441);
    {   LispObject fn = basic_elt(env, 9); // mksp
    v_441 = (*qfn2(fn))(fn, v_440, v_441);
    }
    env = stack[-14];
    v_440 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_440 = cons(v_441, v_440);
    env = stack[-14];
    v_440 = ncons(v_440);
    env = stack[-14];
    {   LispObject fn = basic_elt(env, 10); // multf
    v_440 = (*qfn2(fn))(fn, stack[-1], v_440);
    }
    env = stack[-14];
    stack[-1] = v_440;
    goto v_381;
v_383:
v_381:
    v_440 = stack[-2];
    if (!car_legal(v_440)) v_440 = cdrerror(v_440); else
    v_440 = cdr(v_440);
    stack[-2] = v_440;
    goto v_369;
v_368:
    v_440 = stack[-7];
    if (!car_legal(v_440)) v_442 = carerror(v_440); else
    v_442 = car(v_440);
    v_441 = stack[-1];
    v_440 = basic_elt(env, 1); // "Term content division failed"
    {   LispObject fn = basic_elt(env, 11); // quotfail1
    v_441 = (*qfn3(fn))(fn, v_442, v_441, v_440);
    }
    env = stack[-14];
    v_440 = stack[0];
    v_440 = cons(v_441, v_440);
    env = stack[-14];
    v_440 = ncons(v_440);
    env = stack[-14];
    if (!car_legal(stack[-8])) rplacd_fails(stack[-8]);
    setcdr(stack[-8], v_440);
    v_440 = stack[-9];
    if (!car_legal(v_440)) v_440 = cdrerror(v_440); else
    v_440 = cdr(v_440);
    stack[-9] = v_440;
    goto v_119;
v_118:
    stack[0] = v_440;
    v_440 = stack[-13];
    stack[-1] = v_440;
v_412:
    v_440 = stack[-1];
    if (v_440 == nil) goto v_416;
    else goto v_417;
v_416:
    goto v_411;
v_417:
    v_440 = stack[-1];
    if (!car_legal(v_440)) v_440 = carerror(v_440); else
    v_440 = car(v_440);
    stack[-2] = stack[-12];
    v_441 = v_440;
    if (!car_legal(v_441)) v_441 = carerror(v_441); else
    v_441 = car(v_441);
    if (!car_legal(v_440)) v_440 = cdrerror(v_440); else
    v_440 = cdr(v_440);
    {   LispObject fn = basic_elt(env, 9); // mksp
    v_441 = (*qfn2(fn))(fn, v_441, v_440);
    }
    env = stack[-14];
    v_440 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_440 = cons(v_441, v_440);
    env = stack[-14];
    v_440 = ncons(v_440);
    env = stack[-14];
    {   LispObject fn = basic_elt(env, 10); // multf
    v_440 = (*qfn2(fn))(fn, stack[-2], v_440);
    }
    env = stack[-14];
    stack[-12] = v_440;
    v_440 = stack[-1];
    if (!car_legal(v_440)) v_440 = cdrerror(v_440); else
    v_440 = cdr(v_440);
    stack[-1] = v_440;
    goto v_412;
v_411:
    stack[-1] = stack[-12];
    v_440 = stack[0];
    {   LispObject fn = basic_elt(env, 12); // gcdlist1
    v_440 = (*qfn1(fn))(fn, v_440);
    }
    env = stack[-14];
    {   LispObject fn = basic_elt(env, 10); // multf
    v_440 = (*qfn2(fn))(fn, stack[-1], v_440);
    }
    env = stack[-14];
    {
        LispObject fn = basic_elt(env, 2); // poly!-abs
        return (*qfn1(fn))(fn, v_440);
    }
v_43:
    goto v_5;
    v_440 = nil;
v_5:
    return onevalue(v_440);
}



// Code for nlist

static LispObject CC_nlist(LispObject env,
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
    stack[-2] = nil;
v_8:
    v_25 = stack[0];
    v_24 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_25 == v_24) goto v_11;
    else goto v_12;
v_11:
    v_24 = stack[-2];
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn1(fn))(fn, v_24);
    }
v_12:
    v_25 = stack[-1];
    v_24 = stack[-2];
    v_24 = cons(v_25, v_24);
    env = stack[-3];
    stack[-2] = v_24;
    v_24 = stack[0];
    v_24 = sub1(v_24);
    env = stack[-3];
    stack[0] = v_24;
    goto v_8;
    v_24 = nil;
    return onevalue(v_24);
}



// Code for pasf_ceil

static LispObject CC_pasf_ceil(LispObject env,
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
    v_82 = add1(v_82);
    env = stack[-2];
    goto v_48;
v_59:
    v_83 = stack[-1];
    v_82 = stack[0];
    v_82 = quot2(v_83, v_82);
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
    v_84 = basic_elt(env, 1); // "pasf_ceil: not a domain valued sf in input"
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



// Code for lowupperlimitml

static LispObject CC_lowupperlimitml(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_31;
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
    v_31 = basic_elt(env, 1); // "<lowlimit>"
    {   LispObject fn = basic_elt(env, 5); // printout
    v_31 = (*qfn1(fn))(fn, v_31);
    }
    env = stack[-1];
    v_31 = lisp_true;
    {   LispObject fn = basic_elt(env, 6); // indent!*
    v_31 = (*qfn1(fn))(fn, v_31);
    }
    env = stack[-1];
    v_31 = stack[0];
    if (!car_legal(v_31)) v_31 = cdrerror(v_31); else
    v_31 = cdr(v_31);
    if (!car_legal(v_31)) v_31 = carerror(v_31); else
    v_31 = car(v_31);
    {   LispObject fn = basic_elt(env, 7); // expression
    v_31 = (*qfn1(fn))(fn, v_31);
    }
    env = stack[-1];
    v_31 = nil;
    {   LispObject fn = basic_elt(env, 6); // indent!*
    v_31 = (*qfn1(fn))(fn, v_31);
    }
    env = stack[-1];
    v_31 = basic_elt(env, 2); // "</lowlimit>"
    {   LispObject fn = basic_elt(env, 5); // printout
    v_31 = (*qfn1(fn))(fn, v_31);
    }
    env = stack[-1];
    v_31 = basic_elt(env, 3); // "<uplimit>"
    {   LispObject fn = basic_elt(env, 5); // printout
    v_31 = (*qfn1(fn))(fn, v_31);
    }
    env = stack[-1];
    v_31 = lisp_true;
    {   LispObject fn = basic_elt(env, 6); // indent!*
    v_31 = (*qfn1(fn))(fn, v_31);
    }
    env = stack[-1];
    v_31 = stack[0];
    if (!car_legal(v_31)) v_31 = cdrerror(v_31); else
    v_31 = cdr(v_31);
    if (!car_legal(v_31)) v_31 = cdrerror(v_31); else
    v_31 = cdr(v_31);
    if (!car_legal(v_31)) v_31 = carerror(v_31); else
    v_31 = car(v_31);
    {   LispObject fn = basic_elt(env, 7); // expression
    v_31 = (*qfn1(fn))(fn, v_31);
    }
    env = stack[-1];
    v_31 = nil;
    {   LispObject fn = basic_elt(env, 6); // indent!*
    v_31 = (*qfn1(fn))(fn, v_31);
    }
    env = stack[-1];
    v_31 = basic_elt(env, 4); // "</uplimit>"
    {   LispObject fn = basic_elt(env, 5); // printout
    v_31 = (*qfn1(fn))(fn, v_31);
    }
    v_31 = nil;
    return onevalue(v_31);
}



// Code for ps!:plus!-erule

static LispObject CC_psTplusKerule(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    stack[0] = v_2;
// end of prologue
    v_35 = nil;
    v_34 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_34 = cons(v_35, v_34);
    env = stack[-3];
    v_35 = v_34;
    v_34 = stack[0];
    if (!car_legal(v_34)) v_34 = cdrerror(v_34); else
    v_34 = cdr(v_34);
    stack[-2] = v_34;
v_14:
    v_34 = stack[-2];
    if (v_34 == nil) goto v_19;
    else goto v_20;
v_19:
    goto v_13;
v_20:
    v_34 = stack[-2];
    if (!car_legal(v_34)) v_34 = carerror(v_34); else
    v_34 = car(v_34);
    stack[0] = v_35;
    v_35 = v_34;
    v_34 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // ps!:evaluate
    v_34 = (*qfn2(fn))(fn, v_35, v_34);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 2); // addsq
    v_34 = (*qfn2(fn))(fn, stack[0], v_34);
    }
    env = stack[-3];
    v_35 = v_34;
    v_34 = stack[-2];
    if (!car_legal(v_34)) v_34 = cdrerror(v_34); else
    v_34 = cdr(v_34);
    stack[-2] = v_34;
    goto v_14;
v_13:
    v_34 = v_35;
    return onevalue(v_34);
}



// Code for make_spoly_pair

static LispObject CC_make_spoly_pair(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_75, v_76, v_77, v_78;
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
v_8:
    v_76 = stack[-2];
    v_75 = stack[-3];
    {   LispObject fn = basic_elt(env, 2); // pfordp
    v_75 = (*qfn2(fn))(fn, v_76, v_75);
    }
    env = stack[-5];
    if (v_75 == nil) goto v_12;
    v_75 = stack[-2];
    v_76 = v_75;
    v_75 = stack[-3];
    stack[-2] = v_75;
    v_75 = v_76;
    stack[-3] = v_75;
    goto v_8;
v_12:
    v_75 = stack[-3];
    {   LispObject fn = basic_elt(env, 3); // xval
    stack[0] = (*qfn1(fn))(fn, v_75);
    }
    env = stack[-5];
    v_75 = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // xval
    v_75 = (*qfn1(fn))(fn, v_75);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 4); // xlcm
    v_75 = (*qfn2(fn))(fn, stack[0], v_75);
    }
    env = stack[-5];
    stack[-4] = v_75;
    v_75 = stack[-3];
    if (!car_legal(v_75)) v_75 = cdrerror(v_75); else
    v_75 = cdr(v_75);
    if (v_75 == nil) goto v_35;
    else goto v_34;
v_35:
    v_75 = stack[-2];
    if (!car_legal(v_75)) v_75 = cdrerror(v_75); else
    v_75 = cdr(v_75);
    if (v_75 == nil) goto v_38;
    else goto v_34;
v_38:
    v_75 = nil;
    goto v_32;
v_34:
    stack[-1] = stack[-4];
    v_75 = stack[-3];
    {   LispObject fn = basic_elt(env, 3); // xval
    stack[0] = (*qfn1(fn))(fn, v_75);
    }
    env = stack[-5];
    v_75 = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // xval
    v_75 = (*qfn1(fn))(fn, v_75);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 5); // triviallcm
    v_75 = (*qfn3(fn))(fn, stack[-1], stack[0], v_75);
    }
    env = stack[-5];
    if (v_75 == nil) goto v_46;
    else goto v_47;
v_46:
    v_75 = stack[-4];
    {   LispObject fn = basic_elt(env, 6); // mknwedge
    v_75 = (*qfn1(fn))(fn, v_75);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 7); // xdegreecheck
    v_75 = (*qfn1(fn))(fn, v_75);
    }
    env = stack[-5];
    if (v_75 == nil) goto v_56;
    else goto v_57;
v_56:
    v_77 = stack[-4];
    v_78 = basic_elt(env, 1); // spoly_pair
    v_76 = stack[-3];
    v_75 = stack[-2];
    return list4(v_77, v_78, v_76, v_75);
v_57:
    v_75 = nil;
    goto v_55;
    v_75 = nil;
v_55:
    goto v_45;
v_47:
    v_75 = nil;
    goto v_45;
    v_75 = nil;
v_45:
    goto v_32;
    v_75 = nil;
v_32:
    goto v_28;
    v_75 = nil;
    goto v_28;
    v_75 = nil;
v_28:
    goto v_7;
    v_75 = nil;
v_7:
    return onevalue(v_75);
}



// Code for simpsetdiff

static LispObject CC_simpsetdiff(LispObject env,
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
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_62 = v_2;
// end of prologue
    v_63 = basic_elt(env, 1); // setdiff
    {   LispObject fn = basic_elt(env, 3); // applysetop
    v_62 = (*qfn2(fn))(fn, v_63, v_62);
    }
    env = stack[0];
    v_64 = v_62;
    v_62 = v_64;
    if (!car_legal(v_62)) v_63 = carerror(v_62); else
    v_63 = car(v_62);
    v_62 = basic_elt(env, 1); // setdiff
    if (v_63 == v_62) goto v_14;
    else goto v_15;
v_14:
    v_62 = v_64;
    if (!car_legal(v_62)) v_62 = cdrerror(v_62); else
    v_62 = cdr(v_62);
    if (!car_legal(v_62)) v_63 = carerror(v_62); else
    v_63 = car(v_62);
    v_62 = v_64;
    if (!car_legal(v_62)) v_62 = cdrerror(v_62); else
    v_62 = cdr(v_62);
    if (!car_legal(v_62)) v_62 = cdrerror(v_62); else
    v_62 = cdr(v_62);
    if (!car_legal(v_62)) v_62 = carerror(v_62); else
    v_62 = car(v_62);
    if (equal(v_63, v_62)) goto v_25;
    else goto v_26;
v_25:
    v_62 = lisp_true;
    goto v_24;
v_26:
    v_62 = v_64;
    if (!car_legal(v_62)) v_62 = cdrerror(v_62); else
    v_62 = cdr(v_62);
    if (!car_legal(v_62)) v_63 = carerror(v_62); else
    v_63 = car(v_62);
    v_62 = qvalue(basic_elt(env, 2)); // empty_set
    v_62 = (equal(v_63, v_62) ? lisp_true : nil);
    goto v_24;
    v_62 = nil;
v_24:
    if (v_62 == nil) goto v_22;
    v_62 = qvalue(basic_elt(env, 2)); // empty_set
    goto v_20;
v_22:
    v_62 = v_64;
    if (!car_legal(v_62)) v_62 = cdrerror(v_62); else
    v_62 = cdr(v_62);
    if (!car_legal(v_62)) v_62 = cdrerror(v_62); else
    v_62 = cdr(v_62);
    if (!car_legal(v_62)) v_63 = carerror(v_62); else
    v_63 = car(v_62);
    v_62 = qvalue(basic_elt(env, 2)); // empty_set
    if (equal(v_63, v_62)) goto v_43;
    else goto v_44;
v_43:
    v_62 = v_64;
    if (!car_legal(v_62)) v_62 = cdrerror(v_62); else
    v_62 = cdr(v_62);
    if (!car_legal(v_62)) v_62 = carerror(v_62); else
    v_62 = car(v_62);
    goto v_20;
v_44:
    v_62 = v_64;
    goto v_20;
    v_62 = nil;
v_20:
    v_63 = v_62;
    goto v_13;
v_15:
    v_62 = v_64;
    v_63 = v_62;
    goto v_13;
    v_63 = nil;
v_13:
    v_62 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 4); // mksp
    v_63 = (*qfn2(fn))(fn, v_63, v_62);
    }
    env = stack[0];
    v_62 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_62 = cons(v_63, v_62);
    env = stack[0];
    v_63 = ncons(v_62);
    v_62 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_63, v_62);
}



// Code for defined_all_edge

static LispObject CC_defined_all_edge(LispObject env,
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
v_9:
    v_52 = stack[-2];
    if (v_52 == nil) goto v_12;
    else goto v_13;
v_12:
    v_52 = nil;
    goto v_8;
v_13:
    v_52 = stack[-2];
    if (!car_legal(v_52)) v_53 = carerror(v_52); else
    v_53 = car(v_52);
    v_52 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // def_edge
    v_52 = (*qfn2(fn))(fn, v_53, v_52);
    }
    env = stack[-4];
    if (v_52 == nil) goto v_17;
    v_52 = stack[-2];
    if (!car_legal(v_52)) v_52 = carerror(v_52); else
    v_52 = car(v_52);
    {   LispObject fn = basic_elt(env, 2); // p_def_edge
    v_52 = (*qfn1(fn))(fn, v_52);
    }
    env = stack[-4];
    if (v_52 == nil) goto v_25;
    v_52 = lisp_true;
    goto v_8;
v_25:
    v_53 = stack[-1];
    v_52 = stack[-2];
    stack[0] = Lnconc(nil, v_53, v_52);
    env = stack[-4];
    v_52 = stack[-2];
    if (!car_legal(v_52)) v_52 = carerror(v_52); else
    v_52 = car(v_52);
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    if (!car_legal(v_52)) v_54 = carerror(v_52); else
    v_54 = car(v_52);
    v_53 = lisp_true;
    v_52 = nil;
    v_52 = list2star(v_54, v_53, v_52);
    env = stack[-4];
    {
        LispObject v_59 = stack[0];
        LispObject fn = basic_elt(env, 3); // rep_edge_prop_
        return (*qfn2(fn))(fn, v_59, v_52);
    }
    goto v_11;
v_17:
    v_52 = stack[-2];
    if (!car_legal(v_52)) v_52 = cdrerror(v_52); else
    v_52 = cdr(v_52);
    stack[-3] = v_52;
    v_52 = stack[-2];
    if (!car_legal(v_52)) v_53 = carerror(v_52); else
    v_53 = car(v_52);
    v_52 = stack[-1];
    v_52 = cons(v_53, v_52);
    env = stack[-4];
    stack[-1] = v_52;
    v_52 = stack[-3];
    stack[-2] = v_52;
    goto v_9;
v_11:
    v_52 = nil;
v_8:
    return onevalue(v_52);
}



setup_type const u44_setup[] =
{
    {"diffp",                   G0W2,     G1W2,     CC_diffp, G3W2,     G4W2},
    {"get:const",               G0W2,     G1W2,     CC_getTconst,G3W2,  G4W2},
    {"nspaces",                 G0W1,     CC_nspaces,G2W1,    G3W1,     G4W1},
    {"all_defined_map_",        G0W2,     G1W2,     CC_all_defined_map_,G3W2,G4W2},
    {"quotexf*",                G0W2,     G1W2,     CC_quotexfH,G3W2,   G4W2},
    {"general-multiply-by-constant-mod-p",G0W2,G1W2,CC_generalKmultiplyKbyKconstantKmodKp,G3W2,G4W2},
    {"rl_nnfnot",               G0W1,     CC_rl_nnfnot,G2W1,  G3W1,     G4W1},
    {"makecoeffpairshom",       G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_makecoeffpairshom},
    {"pasf_exprng-gball",       G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_pasf_exprngKgball},
    {"matrixml",                G0W1,     CC_matrixml,G2W1,   G3W1,     G4W1},
    {"convprc2",                G0W2,     G1W2,     CC_convprc2,G3W2,   G4W2},
    {"findhr",                  CC_findhr,G1W0,     G2W0,     G3W0,     G4W0},
    {"r2oaddspecies",           G0W2,     G1W2,     CC_r2oaddspecies,G3W2,G4W2},
    {"ordpl",                   G0W2,     G1W2,     CC_ordpl, G3W2,     G4W2},
    {"evalletsub",              G0W2,     G1W2,     CC_evalletsub,G3W2, G4W2},
    {"lieninstruc",             G0W1,     CC_lieninstruc,G2W1,G3W1,     G4W1},
    {"gcdlist",                 G0W1,     CC_gcdlist,G2W1,    G3W1,     G4W1},
    {"nlist",                   G0W2,     G1W2,     CC_nlist, G3W2,     G4W2},
    {"pasf_ceil",               G0W2,     G1W2,     CC_pasf_ceil,G3W2,  G4W2},
    {"lowupperlimitml",         G0W1,     CC_lowupperlimitml,G2W1,G3W1, G4W1},
    {"ps:plus-erule",           G0W2,     G1W2,     CC_psTplusKerule,G3W2,G4W2},
    {"make_spoly_pair",         G0W2,     G1W2,     CC_make_spoly_pair,G3W2,G4W2},
    {"simpsetdiff",             G0W1,     CC_simpsetdiff,G2W1,G3W1,     G4W1},
    {"defined_all_edge",        G0W3,     G1W3,     G2W3,     CC_defined_all_edge,G4W3},
    {nullptr, 
        reinterpret_cast<no_args *>(
            reinterpret_cast<uintptr_t>("u44")),
        reinterpret_cast<one_arg *>(
            reinterpret_cast<uintptr_t>("46891 2685123 9816267")),
        nullptr, nullptr, nullptr}
};

// end of generated code
