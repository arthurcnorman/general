
// $destdir/u14.c        Machine generated C code

// $Id$

#include "config.h"
#include "headers.h"



// Code for xread1

static LispObject CC_xread1(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_948, v_949, v_950;
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
    stack[-8] = nil;
    stack[-6] = nil;
    stack[-5] = nil;
    stack[-4] = nil;
    stack[-2] = nil;
    stack[-1] = nil;
    v_948 = qvalue(basic_elt(env, 1)); // commentlist!*
    if (v_948 == nil) goto v_39;
    v_948 = qvalue(basic_elt(env, 1)); // commentlist!*
    stack[-1] = v_948;
    v_948 = nil;
    setvalue(basic_elt(env, 1), v_948); // commentlist!*
    goto v_37;
v_39:
v_37:
v_14:
    v_948 = qvalue(basic_elt(env, 2)); // cursym!*
    stack[-3] = v_948;
v_15:
    v_948 = stack[-3];
    if (symbolp(v_948)) goto v_47;
    goto v_45;
v_47:
    v_949 = stack[-3];
    v_948 = basic_elt(env, 3); // !*lpar!*
    if (v_949 == v_948) goto v_50;
    else goto v_51;
v_50:
    goto v_19;
v_51:
    v_949 = stack[-3];
    v_948 = basic_elt(env, 4); // !*rpar!*
    if (v_949 == v_948) goto v_54;
    else goto v_55;
v_54:
    goto v_21;
v_55:
    v_948 = stack[-3];
    if (!symbolp(v_948)) v_948 = nil;
    else { v_948 = qfastgets(v_948);
           if (v_948 != nil) { v_948 = elt(v_948, 23); // infix
#ifdef RECORD_GET
             if (v_948 != SPID_NOPROP)
                record_get(elt(fastget_names, 23), 1);
             else record_get(elt(fastget_names, 23), 0),
                v_948 = nil; }
           else record_get(elt(fastget_names, 23), 0); }
#else
             if (v_948 == SPID_NOPROP) v_948 = nil; }}
#endif
    stack[-4] = v_948;
    if (v_948 == nil) goto v_59;
    goto v_22;
v_59:
    v_948 = stack[-3];
    if (!symbolp(v_948)) v_948 = nil;
    else { v_948 = qfastgets(v_948);
           if (v_948 != nil) { v_948 = elt(v_948, 55); // delim
#ifdef RECORD_GET
             if (v_948 == SPID_NOPROP)
                record_get(elt(fastget_names, 55), 0),
                v_948 = nil;
             else record_get(elt(fastget_names, 55), 1),
                v_948 = lisp_true; }
           else record_get(elt(fastget_names, 55), 0); }
#else
             if (v_948 == SPID_NOPROP) v_948 = nil; else v_948 = lisp_true; }}
#endif
    if (v_948 == nil) goto v_63;
    goto v_33;
v_63:
    v_948 = stack[-3];
    if (!symbolp(v_948)) v_948 = nil;
    else { v_948 = qfastgets(v_948);
           if (v_948 != nil) { v_948 = elt(v_948, 36); // stat
#ifdef RECORD_GET
             if (v_948 != SPID_NOPROP)
                record_get(elt(fastget_names, 36), 1);
             else record_get(elt(fastget_names, 36), 0),
                v_948 = nil; }
           else record_get(elt(fastget_names, 36), 0); }
#else
             if (v_948 == SPID_NOPROP) v_948 = nil; }}
#endif
    stack[-4] = v_948;
    if (v_948 == nil) goto v_67;
    goto v_32;
v_67:
    v_948 = qvalue(basic_elt(env, 5)); // !*reduce4
    if (v_948 == nil) goto v_74;
    else goto v_75;
v_74:
    v_949 = stack[-3];
    v_948 = basic_elt(env, 6); // type
    v_948 = Lflagp(nil, v_949, v_948);
    env = stack[-9];
    goto v_73;
v_75:
    v_948 = nil;
    goto v_73;
    v_948 = nil;
v_73:
    if (v_948 == nil) goto v_71;
    v_949 = basic_elt(env, 7); // decstat
    v_948 = nil;
    {   LispObject fn = basic_elt(env, 48); // lispapply
    v_949 = (*qfn2(fn))(fn, v_949, v_948);
    }
    env = stack[-9];
    v_948 = stack[-6];
    v_948 = cons(v_949, v_948);
    env = stack[-9];
    stack[-6] = v_948;
    goto v_14;
v_71:
v_45:
v_16:
    v_948 = nil;
    stack[-4] = v_948;
v_17:
    v_949 = stack[-3];
    v_948 = stack[-6];
    v_948 = cons(v_949, v_948);
    env = stack[-9];
    stack[-6] = v_948;
    v_948 = stack[-3];
    {   LispObject fn = basic_elt(env, 49); // toknump
    v_948 = (*qfn1(fn))(fn, v_948);
    }
    env = stack[-9];
    if (v_948 == nil) goto v_95;
    v_949 = stack[-2];
    v_948 = qvalue(basic_elt(env, 8)); // !$eol!$
    if (v_949 == v_948) goto v_103;
    v_948 = qvalue(basic_elt(env, 9)); // nxtsym!*
    {   LispObject fn = basic_elt(env, 50); // chknewnam
    v_948 = (*qfn1(fn))(fn, v_948);
    }
    env = stack[-9];
    stack[-2] = v_948;
    if (symbolp(v_948)) goto v_109;
    v_948 = nil;
    goto v_107;
v_109:
    v_948 = stack[-2];
    if (!symbolp(v_948)) v_948 = nil;
    else { v_948 = qfastgets(v_948);
           if (v_948 != nil) { v_948 = elt(v_948, 55); // delim
#ifdef RECORD_GET
             if (v_948 == SPID_NOPROP)
                record_get(elt(fastget_names, 55), 0),
                v_948 = nil;
             else record_get(elt(fastget_names, 55), 1),
                v_948 = lisp_true; }
           else record_get(elt(fastget_names, 55), 0); }
#else
             if (v_948 == SPID_NOPROP) v_948 = nil; else v_948 = lisp_true; }}
#endif
    if (v_948 == nil) goto v_117;
    else goto v_118;
v_117:
    v_948 = stack[-2];
    if (!symbolp(v_948)) v_948 = nil;
    else { v_948 = qfastgets(v_948);
           if (v_948 != nil) { v_948 = elt(v_948, 11); // switch!*
#ifdef RECORD_GET
             if (v_948 != SPID_NOPROP)
                record_get(elt(fastget_names, 11), 1);
             else record_get(elt(fastget_names, 11), 0),
                v_948 = nil; }
           else record_get(elt(fastget_names, 11), 0); }
#else
             if (v_948 == SPID_NOPROP) v_948 = nil; }}
#endif
    if (v_948 == nil) goto v_123;
    v_949 = stack[-2];
    v_948 = basic_elt(env, 10); // !(
    if (v_949 == v_948) goto v_123;
    goto v_124;
v_123:
    v_948 = stack[-2];
    if (!symbolp(v_948)) v_948 = nil;
    else { v_948 = qfastgets(v_948);
           if (v_948 != nil) { v_948 = elt(v_948, 23); // infix
#ifdef RECORD_GET
             if (v_948 != SPID_NOPROP)
                record_get(elt(fastget_names, 23), 1);
             else record_get(elt(fastget_names, 23), 0),
                v_948 = nil; }
           else record_get(elt(fastget_names, 23), 0); }
#else
             if (v_948 == SPID_NOPROP) v_948 = nil; }}
#endif
    if (v_948 == nil) goto v_133;
    else goto v_134;
v_133:
    v_948 = qvalue(basic_elt(env, 11)); // !*eoldelimp
    if (v_948 == nil) goto v_139;
    else goto v_140;
v_139:
    v_948 = nil;
    goto v_138;
v_140:
    v_949 = stack[-2];
    v_948 = qvalue(basic_elt(env, 8)); // !$eol!$
    v_948 = (v_949 == v_948 ? lisp_true : nil);
    goto v_138;
    v_948 = nil;
v_138:
    v_948 = (v_948 == nil ? lisp_true : nil);
    goto v_132;
v_134:
    v_948 = nil;
    goto v_132;
    v_948 = nil;
v_132:
    goto v_122;
v_124:
    v_948 = nil;
    goto v_122;
    v_948 = nil;
v_122:
    goto v_116;
v_118:
    v_948 = nil;
    goto v_116;
    v_948 = nil;
v_116:
    goto v_107;
    v_948 = nil;
v_107:
    goto v_101;
v_103:
    v_948 = nil;
    goto v_101;
    v_948 = nil;
v_101:
    if (v_948 == nil) goto v_95;
    v_948 = basic_elt(env, 12); // times
    setvalue(basic_elt(env, 2), v_948); // cursym!*
    v_948 = nil;
    setvalue(basic_elt(env, 13), v_948); // curescaped!*
    goto v_14;
v_95:
    v_949 = stack[-7];
    v_948 = basic_elt(env, 14); // proc
    if (v_949 == v_948) goto v_167;
    else goto v_168;
v_167:
    v_948 = stack[-6];
    v_949 = Llength(nil, v_948);
    env = stack[-9];
    v_948 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_948 = static_cast<LispObject>(greaterp2(v_949, v_948));
    v_948 = v_948 ? lisp_true : nil;
    env = stack[-9];
    goto v_166;
v_168:
    v_948 = nil;
    goto v_166;
    v_948 = nil;
v_166:
    if (v_948 == nil) goto v_164;
    v_949 = basic_elt(env, 15); // "Syntax error in procedure header"
    v_948 = nil;
    {   LispObject fn = basic_elt(env, 51); // symerr
    v_948 = (*qfn2(fn))(fn, v_949, v_948);
    }
    env = stack[-9];
    goto v_93;
v_164:
v_93:
v_18:
    {   LispObject fn = basic_elt(env, 52); // scan
    v_948 = (*qfn0(fn))(fn);
    }
    env = stack[-9];
    stack[-3] = v_948;
    goto v_15;
v_19:
    {   LispObject fn = basic_elt(env, 53); // eolcheck
    v_948 = (*qfn0(fn))(fn);
    }
    env = stack[-9];
    v_948 = nil;
    stack[-4] = v_948;
    {   LispObject fn = basic_elt(env, 52); // scan
    v_949 = (*qfn0(fn))(fn);
    }
    env = stack[-9];
    v_948 = basic_elt(env, 4); // !*rpar!*
    if (v_949 == v_948) goto v_186;
    else goto v_187;
v_186:
    goto v_20;
v_187:
    v_949 = stack[-6];
    v_948 = basic_elt(env, 16); // struct
    v_948 = Lflagpcar(nil, v_949, v_948);
    env = stack[-9];
    if (v_948 == nil) goto v_191;
    v_948 = stack[-6];
    if (!car_legal(v_948)) v_948 = carerror(v_948); else
    v_948 = car(v_948);
    {   LispObject fn = basic_elt(env, 0); // xread1
    v_948 = (*qfn1(fn))(fn, v_948);
    }
    env = stack[-9];
    stack[-3] = v_948;
    goto v_185;
v_191:
    v_948 = basic_elt(env, 17); // paren
    {   LispObject fn = basic_elt(env, 0); // xread1
    v_948 = (*qfn1(fn))(fn, v_948);
    }
    env = stack[-9];
    stack[-3] = v_948;
    goto v_185;
v_185:
    v_949 = stack[-7];
    v_948 = basic_elt(env, 16); // struct
    v_948 = Lflagp(nil, v_949, v_948);
    env = stack[-9];
    if (v_948 == nil) goto v_205;
    v_948 = stack[-3];
    {   LispObject fn = basic_elt(env, 54); // remcomma
    v_948 = (*qfn1(fn))(fn, v_948);
    }
    env = stack[-9];
    stack[-3] = v_948;
    goto v_17;
v_205:
    v_949 = stack[-3];
    v_948 = basic_elt(env, 18); // !*comma!*
    if (!consp(v_949)) goto v_211;
    v_949 = car(v_949);
    if (v_949 == v_948) goto v_212;
v_211:
    goto v_17;
v_212:
    v_948 = stack[-6];
    if (v_948 == nil) goto v_216;
    else goto v_217;
v_216:
    v_949 = stack[-7];
    v_948 = basic_elt(env, 19); // lambda
    if (v_949 == v_948) goto v_221;
    else goto v_222;
v_221:
    goto v_17;
v_222:
    v_949 = basic_elt(env, 20); // "Improper delimiter"
    v_948 = nil;
    {   LispObject fn = basic_elt(env, 51); // symerr
    v_948 = (*qfn2(fn))(fn, v_949, v_948);
    }
    env = stack[-9];
    goto v_220;
v_220:
    goto v_203;
v_217:
    v_948 = stack[-6];
    if (!car_legal(v_948)) v_950 = carerror(v_948); else
    v_950 = car(v_948);
    v_948 = stack[-3];
    if (!car_legal(v_948)) v_949 = cdrerror(v_948); else
    v_949 = cdr(v_948);
    v_948 = stack[-6];
    if (!car_legal(v_948)) v_948 = cdrerror(v_948); else
    v_948 = cdr(v_948);
    v_948 = acons(v_950, v_949, v_948);
    env = stack[-9];
    stack[-6] = v_948;
    goto v_203;
v_203:
    goto v_18;
v_20:
    v_948 = stack[-6];
    if (v_948 == nil) goto v_242;
    v_948 = stack[-6];
    if (!car_legal(v_948)) v_948 = carerror(v_948); else
    v_948 = car(v_948);
    v_949 = ncons(v_948);
    env = stack[-9];
    v_948 = stack[-6];
    if (!car_legal(v_948)) v_948 = cdrerror(v_948); else
    v_948 = cdr(v_948);
    v_948 = cons(v_949, v_948);
    env = stack[-9];
    stack[-6] = v_948;
    goto v_240;
v_242:
v_240:
    goto v_18;
v_21:
    v_948 = stack[-7];
    if (v_948 == nil) goto v_256;
    else goto v_257;
v_256:
    v_948 = lisp_true;
    goto v_255;
v_257:
    v_949 = stack[-7];
    v_948 = basic_elt(env, 21); // group
    if (v_949 == v_948) goto v_264;
    else goto v_265;
v_264:
    v_948 = lisp_true;
    goto v_263;
v_265:
    v_949 = stack[-7];
    v_948 = basic_elt(env, 14); // proc
    v_948 = (v_949 == v_948 ? lisp_true : nil);
    goto v_263;
    v_948 = nil;
v_263:
    goto v_255;
    v_948 = nil;
v_255:
    if (v_948 == nil) goto v_253;
    v_949 = basic_elt(env, 22); // "Too many right parentheses"
    v_948 = nil;
    {   LispObject fn = basic_elt(env, 51); // symerr
    v_948 = (*qfn2(fn))(fn, v_949, v_948);
    }
    env = stack[-9];
    goto v_251;
v_253:
    goto v_34;
v_251:
v_22:
    {   LispObject fn = basic_elt(env, 53); // eolcheck
    v_948 = (*qfn0(fn))(fn);
    }
    env = stack[-9];
    v_949 = stack[-3];
    v_948 = basic_elt(env, 18); // !*comma!*
    if (v_949 == v_948) goto v_286;
    else goto v_287;
v_286:
    v_948 = lisp_true;
    goto v_285;
v_287:
    {   LispObject fn = basic_elt(env, 52); // scan
    v_948 = (*qfn0(fn))(fn);
    }
    env = stack[-9];
    stack[-2] = v_948;
    if (!consp(v_948)) goto v_296;
    v_948 = lisp_true;
    goto v_294;
v_296:
    v_948 = stack[-2];
    {   LispObject fn = basic_elt(env, 49); // toknump
    v_948 = (*qfn1(fn))(fn, v_948);
    }
    env = stack[-9];
    goto v_294;
    v_948 = nil;
v_294:
    goto v_285;
    v_948 = nil;
v_285:
    if (v_948 == nil) goto v_283;
    goto v_23;
v_283:
    v_949 = stack[-2];
    v_948 = basic_elt(env, 4); // !*rpar!*
    if (v_949 == v_948) goto v_307;
    else goto v_308;
v_307:
    v_948 = lisp_true;
    goto v_306;
v_308:
    v_949 = stack[-2];
    v_948 = basic_elt(env, 18); // !*comma!*
    if (v_949 == v_948) goto v_316;
    else goto v_317;
v_316:
    v_948 = lisp_true;
    goto v_315;
v_317:
    v_948 = stack[-2];
    if (!symbolp(v_948)) v_948 = nil;
    else { v_948 = qfastgets(v_948);
           if (v_948 != nil) { v_948 = elt(v_948, 55); // delim
#ifdef RECORD_GET
             if (v_948 == SPID_NOPROP)
                record_get(elt(fastget_names, 55), 0),
                v_948 = nil;
             else record_get(elt(fastget_names, 55), 1),
                v_948 = lisp_true; }
           else record_get(elt(fastget_names, 55), 0); }
#else
             if (v_948 == SPID_NOPROP) v_948 = nil; else v_948 = lisp_true; }}
#endif
    goto v_315;
    v_948 = nil;
v_315:
    goto v_306;
    v_948 = nil;
v_306:
    if (v_948 == nil) goto v_304;
    goto v_24;
v_304:
    v_949 = stack[-2];
    v_948 = basic_elt(env, 3); // !*lpar!*
    if (v_949 == v_948) goto v_329;
    else goto v_330;
v_329:
    {   LispObject fn = basic_elt(env, 53); // eolcheck
    v_948 = (*qfn0(fn))(fn);
    }
    env = stack[-9];
    if (v_948 == nil) goto v_335;
    else goto v_336;
v_335:
    v_948 = basic_elt(env, 17); // paren
    {   LispObject fn = basic_elt(env, 55); // xread
    v_948 = (*qfn1(fn))(fn, v_948);
    }
    env = stack[-9];
    stack[-2] = v_948;
    if (!consp(v_948)) goto v_341;
    v_948 = stack[-2];
    if (!car_legal(v_948)) v_949 = carerror(v_948); else
    v_949 = car(v_948);
    v_948 = basic_elt(env, 18); // !*comma!*
    if (v_949 == v_948) goto v_346;
    else goto v_347;
v_346:
    v_949 = stack[-3];
    v_948 = stack[-2];
    if (!car_legal(v_948)) v_948 = cdrerror(v_948); else
    v_948 = cdr(v_948);
    v_948 = cons(v_949, v_948);
    env = stack[-9];
    stack[-3] = v_948;
    goto v_345;
v_347:
    v_948 = nil;
    goto v_345;
    v_948 = nil;
v_345:
    goto v_339;
v_341:
    v_948 = nil;
    goto v_339;
    v_948 = nil;
v_339:
    goto v_334;
v_336:
    v_948 = nil;
    goto v_334;
    v_948 = nil;
v_334:
    goto v_328;
v_330:
    v_948 = nil;
    goto v_328;
    v_948 = nil;
v_328:
    if (v_948 == nil) goto v_326;
    goto v_15;
v_326:
v_23:
    v_948 = stack[-6];
    if (v_948 == nil) goto v_370;
    goto v_26;
v_370:
    v_949 = stack[-3];
    v_948 = basic_elt(env, 23); // unary
    v_948 = get(v_949, v_948);
    env = stack[-9];
    stack[-3] = v_948;
    if (v_948 == nil) goto v_372;
    else goto v_373;
v_372:
    v_949 = basic_elt(env, 24); // "Redundant operator"
    v_948 = nil;
    {   LispObject fn = basic_elt(env, 51); // symerr
    v_948 = (*qfn2(fn))(fn, v_949, v_948);
    }
    env = stack[-9];
    goto v_368;
v_373:
v_368:
    v_949 = basic_elt(env, 25); // !*!*un!*!*
    v_948 = stack[-8];
    v_948 = cons(v_949, v_948);
    env = stack[-9];
    stack[-8] = v_948;
    goto v_30;
v_24:
    v_948 = stack[-4];
    if (v_948 == nil) goto v_386;
    v_948 = nil;
    stack[-4] = v_948;
    goto v_384;
v_386:
v_384:
    v_949 = stack[-3];
    v_948 = stack[-6];
    v_948 = cons(v_949, v_948);
    env = stack[-9];
    stack[-6] = v_948;
v_25:
    v_948 = stack[-2];
    stack[-3] = v_948;
    goto v_15;
v_26:
    v_948 = stack[-6];
    if (v_948 == nil) goto v_395;
    else goto v_396;
v_395:
    v_949 = basic_elt(env, 20); // "Improper delimiter"
    v_948 = nil;
    {   LispObject fn = basic_elt(env, 51); // symerr
    v_948 = (*qfn2(fn))(fn, v_949, v_948);
    }
    env = stack[-9];
    goto v_394;
v_396:
v_394:
    v_948 = stack[-6];
    if (!car_legal(v_948)) v_949 = carerror(v_948); else
    v_949 = car(v_948);
    v_948 = stack[-3];
    {   LispObject fn = basic_elt(env, 56); // mkvar
    v_948 = (*qfn2(fn))(fn, v_949, v_948);
    }
    env = stack[-9];
    stack[0] = v_948;
v_27:
    v_948 = stack[-6];
    if (!car_legal(v_948)) v_948 = cdrerror(v_948); else
    v_948 = cdr(v_948);
    stack[-6] = v_948;
    v_948 = stack[-6];
    if (v_948 == nil) goto v_409;
    else goto v_410;
v_409:
    goto v_28;
v_410:
    v_948 = stack[-6];
    if (!car_legal(v_948)) v_948 = carerror(v_948); else
    v_948 = car(v_948);
    if (!consp(v_948)) goto v_416;
    else goto v_417;
v_416:
    v_948 = stack[-6];
    if (!car_legal(v_948)) v_948 = carerror(v_948); else
    v_948 = car(v_948);
    v_948 = Lsymbolp(nil, v_948);
    env = stack[-9];
    v_948 = (v_948 == nil ? lisp_true : nil);
    goto v_415;
v_417:
    v_948 = nil;
    goto v_415;
    v_948 = nil;
v_415:
    if (v_948 == nil) goto v_413;
    v_949 = basic_elt(env, 26); // "Missing operator"
    v_948 = nil;
    {   LispObject fn = basic_elt(env, 51); // symerr
    v_948 = (*qfn2(fn))(fn, v_949, v_948);
    }
    env = stack[-9];
    goto v_408;
v_413:
v_408:
    v_948 = stack[-6];
    if (!car_legal(v_948)) v_949 = carerror(v_948); else
    v_949 = car(v_948);
    v_948 = stack[0];
    v_948 = list2(v_949, v_948);
    env = stack[-9];
    stack[0] = v_948;
    goto v_27;
v_28:
    v_949 = stack[0];
    v_948 = stack[-8];
    v_948 = cons(v_949, v_948);
    env = stack[-9];
    stack[-8] = v_948;
v_29:
    v_948 = stack[-5];
    if (v_948 == nil) goto v_439;
    else goto v_440;
v_439:
    v_949 = stack[-4];
    v_948 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_949 == v_948) goto v_444;
    else goto v_445;
v_444:
    goto v_35;
v_445:
    goto v_443;
v_443:
    goto v_438;
v_440:
    v_948 = stack[-8];
    if (v_948 == nil) goto v_452;
    v_948 = stack[-8];
    if (!car_legal(v_948)) v_949 = cdrerror(v_948); else
    v_949 = cdr(v_948);
    v_948 = basic_elt(env, 25); // !*!*un!*!*
    if (!consp(v_949)) goto v_459;
    v_949 = car(v_949);
    if (v_949 == v_948) goto v_458;
    else goto v_459;
v_458:
    v_948 = stack[-5];
    if (!car_legal(v_948)) v_948 = cdrerror(v_948); else
    v_948 = cdr(v_948);
    if (v_948 == nil) goto v_466;
    else goto v_467;
v_466:
    v_948 = nil;
    goto v_465;
v_467:
    v_949 = stack[-4];
    v_948 = stack[-5];
    if (!car_legal(v_948)) v_948 = carerror(v_948); else
    v_948 = car(v_948);
    if (!car_legal(v_948)) v_948 = carerror(v_948); else
    v_948 = car(v_948);
    v_948 = static_cast<LispObject>(geq2(v_949, v_948));
    v_948 = v_948 ? lisp_true : nil;
    env = stack[-9];
    if (v_948 == nil) goto v_475;
    else goto v_476;
v_475:
    v_948 = nil;
    goto v_474;
v_476:
    v_949 = stack[-4];
    v_948 = stack[-5];
    if (!car_legal(v_948)) v_948 = cdrerror(v_948); else
    v_948 = cdr(v_948);
    if (!car_legal(v_948)) v_948 = carerror(v_948); else
    v_948 = car(v_948);
    if (!car_legal(v_948)) v_948 = carerror(v_948); else
    v_948 = car(v_948);
    v_948 = static_cast<LispObject>(lesseq2(v_949, v_948));
    v_948 = v_948 ? lisp_true : nil;
    env = stack[-9];
    goto v_474;
    v_948 = nil;
v_474:
    goto v_465;
    v_948 = nil;
v_465:
    goto v_457;
v_459:
    v_948 = nil;
    goto v_457;
    v_948 = nil;
v_457:
    if (v_948 == nil) goto v_452;
    v_949 = basic_elt(env, 27); // "Please use parentheses around use of the unary operator"
    v_948 = nil;
    {   LispObject fn = basic_elt(env, 51); // symerr
    v_948 = (*qfn2(fn))(fn, v_949, v_948);
    }
    env = stack[-9];
    goto v_438;
v_452:
    v_949 = stack[-4];
    v_948 = stack[-5];
    if (!car_legal(v_948)) v_948 = carerror(v_948); else
    v_948 = car(v_948);
    if (!car_legal(v_948)) v_948 = carerror(v_948); else
    v_948 = car(v_948);
    v_948 = static_cast<LispObject>(lessp2(v_949, v_948));
    v_948 = v_948 ? lisp_true : nil;
    env = stack[-9];
    if (v_948 == nil) goto v_499;
    else goto v_497;
v_499:
    v_949 = stack[-4];
    v_948 = stack[-5];
    if (!car_legal(v_948)) v_948 = carerror(v_948); else
    v_948 = car(v_948);
    if (!car_legal(v_948)) v_948 = carerror(v_948); else
    v_948 = car(v_948);
    if (equal(v_949, v_948)) goto v_508;
    else goto v_509;
v_508:
    v_949 = stack[-3];
    v_948 = stack[-5];
    if (!car_legal(v_948)) v_948 = carerror(v_948); else
    v_948 = car(v_948);
    if (!car_legal(v_948)) v_948 = cdrerror(v_948); else
    v_948 = cdr(v_948);
    if (v_949 == v_948) goto v_520;
    else goto v_521;
v_520:
    v_948 = stack[-3];
    if (!symbolp(v_948)) v_948 = nil;
    else { v_948 = qfastgets(v_948);
           if (v_948 != nil) { v_948 = elt(v_948, 35); // nary
#ifdef RECORD_GET
             if (v_948 == SPID_NOPROP)
                record_get(elt(fastget_names, 35), 0),
                v_948 = nil;
             else record_get(elt(fastget_names, 35), 1),
                v_948 = lisp_true; }
           else record_get(elt(fastget_names, 35), 0); }
#else
             if (v_948 == SPID_NOPROP) v_948 = nil; else v_948 = lisp_true; }}
#endif
    if (v_948 == nil) goto v_528;
    else goto v_529;
v_528:
    v_949 = stack[-3];
    v_948 = basic_elt(env, 28); // right
    v_948 = Lflagp(nil, v_949, v_948);
    env = stack[-9];
    v_948 = (v_948 == nil ? lisp_true : nil);
    goto v_527;
v_529:
    v_948 = nil;
    goto v_527;
    v_948 = nil;
v_527:
    goto v_519;
v_521:
    v_948 = nil;
    goto v_519;
    v_948 = nil;
v_519:
    if (v_948 == nil) goto v_517;
    v_948 = lisp_true;
    goto v_515;
v_517:
    v_948 = stack[-5];
    if (!car_legal(v_948)) v_948 = carerror(v_948); else
    v_948 = car(v_948);
    if (!car_legal(v_948)) v_948 = cdrerror(v_948); else
    v_948 = cdr(v_948);
    if (!symbolp(v_948)) v_948 = nil;
    else { v_948 = qfastgets(v_948);
           if (v_948 != nil) { v_948 = elt(v_948, 49); // alt
#ifdef RECORD_GET
             if (v_948 != SPID_NOPROP)
                record_get(elt(fastget_names, 49), 1);
             else record_get(elt(fastget_names, 49), 0),
                v_948 = nil; }
           else record_get(elt(fastget_names, 49), 0); }
#else
             if (v_948 == SPID_NOPROP) v_948 = nil; }}
#endif
    goto v_515;
    v_948 = nil;
v_515:
    goto v_507;
v_509:
    v_948 = nil;
    goto v_507;
    v_948 = nil;
v_507:
    if (v_948 == nil) goto v_505;
    else goto v_497;
v_505:
    goto v_498;
v_497:
    goto v_31;
v_498:
v_438:
v_30:
    v_950 = stack[-4];
    v_949 = stack[-3];
    v_948 = stack[-5];
    v_948 = acons(v_950, v_949, v_948);
    env = stack[-9];
    stack[-5] = v_948;
    v_949 = stack[-3];
    v_948 = basic_elt(env, 18); // !*comma!*
    if (v_949 == v_948) goto v_559;
    goto v_25;
v_559:
    v_948 = stack[-5];
    if (!car_legal(v_948)) v_948 = cdrerror(v_948); else
    v_948 = cdr(v_948);
    if (v_948 == nil) goto v_564;
    else goto v_562;
v_564:
    v_948 = stack[-7];
    if (v_948 == nil) goto v_570;
    else goto v_571;
v_570:
    v_948 = lisp_true;
    goto v_569;
v_571:
    v_949 = stack[-7];
    v_948 = basic_elt(env, 29); // (lambda paren)
    v_948 = Lmemq(nil, v_949, v_948);
    if (v_948 == nil) goto v_578;
    else goto v_577;
v_578:
    v_949 = stack[-7];
    v_948 = basic_elt(env, 16); // struct
    v_948 = Lflagp(nil, v_949, v_948);
    env = stack[-9];
v_577:
    goto v_569;
    v_948 = nil;
v_569:
    if (v_948 == nil) goto v_567;
    else goto v_562;
v_567:
    goto v_563;
v_562:
    goto v_18;
v_563:
    goto v_35;
v_31:
    v_948 = stack[-8];
    if (!car_legal(v_948)) v_948 = cdrerror(v_948); else
    v_948 = cdr(v_948);
    if (!car_legal(v_948)) v_949 = carerror(v_948); else
    v_949 = car(v_948);
    v_948 = basic_elt(env, 30); // not
    if (!consp(v_949)) goto v_594;
    v_949 = car(v_949);
    if (v_949 == v_948) goto v_593;
    else goto v_594;
v_593:
    v_948 = stack[-5];
    if (!car_legal(v_948)) v_948 = carerror(v_948); else
    v_948 = car(v_948);
    if (!car_legal(v_948)) v_949 = carerror(v_948); else
    v_949 = car(v_948);
    v_948 = basic_elt(env, 31); // member
    if (!symbolp(v_948)) v_948 = nil;
    else { v_948 = qfastgets(v_948);
           if (v_948 != nil) { v_948 = elt(v_948, 23); // infix
#ifdef RECORD_GET
             if (v_948 != SPID_NOPROP)
                record_get(elt(fastget_names, 23), 1);
             else record_get(elt(fastget_names, 23), 0),
                v_948 = nil; }
           else record_get(elt(fastget_names, 23), 0); }
#else
             if (v_948 == SPID_NOPROP) v_948 = nil; }}
#endif
    v_948 = static_cast<LispObject>(geq2(v_949, v_948));
    v_948 = v_948 ? lisp_true : nil;
    env = stack[-9];
    goto v_592;
v_594:
    v_948 = nil;
    goto v_592;
    v_948 = nil;
v_592:
    if (v_948 == nil) goto v_590;
    v_949 = basic_elt(env, 32); // "NOT"
    v_948 = basic_elt(env, 33); // "infix operator"
    {   LispObject fn = basic_elt(env, 57); // typerr
    v_948 = (*qfn2(fn))(fn, v_949, v_948);
    }
    env = stack[-9];
    goto v_588;
v_590:
v_588:
    v_948 = stack[-8];
    if (!car_legal(v_948)) v_948 = cdrerror(v_948); else
    v_948 = cdr(v_948);
    if (!car_legal(v_948)) v_949 = carerror(v_948); else
    v_949 = car(v_948);
    v_948 = basic_elt(env, 25); // !*!*un!*!*
    if (v_949 == v_948) goto v_614;
    else goto v_615;
v_614:
    v_948 = stack[-8];
    if (!car_legal(v_948)) v_949 = carerror(v_948); else
    v_949 = car(v_948);
    v_948 = basic_elt(env, 25); // !*!*un!*!*
    if (v_949 == v_948) goto v_622;
    else goto v_623;
v_622:
    goto v_30;
v_623:
    v_948 = stack[-5];
    if (!car_legal(v_948)) v_948 = carerror(v_948); else
    v_948 = car(v_948);
    if (!car_legal(v_948)) v_949 = cdrerror(v_948); else
    v_949 = cdr(v_948);
    v_948 = stack[-8];
    if (!car_legal(v_948)) v_948 = carerror(v_948); else
    v_948 = car(v_948);
    v_948 = list2(v_949, v_948);
    env = stack[-9];
    stack[0] = v_948;
    goto v_621;
v_621:
    goto v_613;
v_615:
    v_948 = stack[-5];
    if (!car_legal(v_948)) v_948 = carerror(v_948); else
    v_948 = car(v_948);
    if (!car_legal(v_948)) stack[0] = cdrerror(v_948); else
    stack[0] = cdr(v_948);
    v_948 = stack[-8];
    if (!car_legal(v_948)) v_949 = carerror(v_948); else
    v_949 = car(v_948);
    v_948 = stack[-5];
    if (!car_legal(v_948)) v_948 = carerror(v_948); else
    v_948 = car(v_948);
    if (!car_legal(v_948)) v_948 = cdrerror(v_948); else
    v_948 = cdr(v_948);
    if (!consp(v_949)) goto v_648;
    v_949 = car(v_949);
    if (v_949 == v_948) goto v_647;
    else goto v_648;
v_647:
    v_948 = stack[-5];
    if (!car_legal(v_948)) v_948 = carerror(v_948); else
    v_948 = car(v_948);
    if (!car_legal(v_948)) v_948 = cdrerror(v_948); else
    v_948 = cdr(v_948);
    if (!symbolp(v_948)) v_948 = nil;
    else { v_948 = qfastgets(v_948);
           if (v_948 != nil) { v_948 = elt(v_948, 35); // nary
#ifdef RECORD_GET
             if (v_948 == SPID_NOPROP)
                record_get(elt(fastget_names, 35), 0),
                v_948 = nil;
             else record_get(elt(fastget_names, 35), 1),
                v_948 = lisp_true; }
           else record_get(elt(fastget_names, 35), 0); }
#else
             if (v_948 == SPID_NOPROP) v_948 = nil; else v_948 = lisp_true; }}
#endif
    goto v_646;
v_648:
    v_948 = nil;
    goto v_646;
    v_948 = nil;
v_646:
    if (v_948 == nil) goto v_644;
    v_948 = stack[-8];
    if (!car_legal(v_948)) v_948 = cdrerror(v_948); else
    v_948 = cdr(v_948);
    if (!car_legal(v_948)) v_949 = carerror(v_948); else
    v_949 = car(v_948);
    v_948 = stack[-8];
    if (!car_legal(v_948)) v_948 = carerror(v_948); else
    v_948 = car(v_948);
    if (!car_legal(v_948)) v_948 = cdrerror(v_948); else
    v_948 = cdr(v_948);
    v_948 = cons(v_949, v_948);
    env = stack[-9];
    goto v_642;
v_644:
    v_948 = stack[-8];
    if (!car_legal(v_948)) v_948 = cdrerror(v_948); else
    v_948 = cdr(v_948);
    if (!car_legal(v_948)) v_949 = carerror(v_948); else
    v_949 = car(v_948);
    v_948 = stack[-8];
    if (!car_legal(v_948)) v_948 = carerror(v_948); else
    v_948 = car(v_948);
    v_948 = list2(v_949, v_948);
    env = stack[-9];
    goto v_642;
    v_948 = nil;
v_642:
    v_948 = cons(stack[0], v_948);
    env = stack[-9];
    stack[0] = v_948;
    goto v_613;
v_613:
    v_948 = stack[-5];
    if (!car_legal(v_948)) v_948 = cdrerror(v_948); else
    v_948 = cdr(v_948);
    stack[-5] = v_948;
    v_949 = stack[0];
    v_948 = stack[-8];
    if (!car_legal(v_948)) v_948 = cdrerror(v_948); else
    v_948 = cdr(v_948);
    if (!car_legal(v_948)) v_948 = cdrerror(v_948); else
    v_948 = cdr(v_948);
    v_948 = cons(v_949, v_948);
    env = stack[-9];
    stack[-8] = v_948;
    goto v_29;
v_32:
    v_949 = stack[-4];
    v_948 = basic_elt(env, 34); // endstat
    if (v_949 == v_948) goto v_687;
    {   LispObject fn = basic_elt(env, 53); // eolcheck
    v_948 = (*qfn0(fn))(fn);
    }
    env = stack[-9];
    goto v_685;
v_687:
v_685:
    v_949 = stack[-3];
    v_948 = basic_elt(env, 35); // go
    v_948 = Lflagp(nil, v_949, v_948);
    env = stack[-9];
    if (v_948 == nil) goto v_698;
    v_948 = lisp_true;
    goto v_696;
v_698:
    v_949 = stack[-7];
    v_948 = basic_elt(env, 14); // proc
    if (v_949 == v_948) goto v_708;
    v_949 = stack[-4];
    v_948 = basic_elt(env, 36); // endstatfn
    v_948 = Lflagp(nil, v_949, v_948);
    env = stack[-9];
    if (v_948 == nil) goto v_714;
    v_948 = lisp_true;
    goto v_712;
v_714:
    v_948 = qvalue(basic_elt(env, 9)); // nxtsym!*
    {   LispObject fn = basic_elt(env, 58); // delcp
    v_948 = (*qfn1(fn))(fn, v_948);
    }
    env = stack[-9];
    if (v_948 == nil) goto v_723;
    else goto v_724;
v_723:
    v_949 = qvalue(basic_elt(env, 9)); // nxtsym!*
    v_948 = basic_elt(env, 37); // !,
    v_948 = (v_949 == v_948 ? lisp_true : nil);
    v_948 = (v_948 == nil ? lisp_true : nil);
    goto v_722;
v_724:
    v_948 = nil;
    goto v_722;
    v_948 = nil;
v_722:
    goto v_712;
    v_948 = nil;
v_712:
    goto v_706;
v_708:
    v_948 = nil;
    goto v_706;
    v_948 = nil;
v_706:
    goto v_696;
    v_948 = nil;
v_696:
    if (v_948 == nil) goto v_693;
    else goto v_694;
v_693:
    goto v_16;
v_694:
    v_949 = stack[-3];
    v_948 = basic_elt(env, 38); // procedure
    if (v_949 == v_948) goto v_743;
    else goto v_744;
v_743:
    v_948 = qvalue(basic_elt(env, 5)); // !*reduce4
    goto v_742;
v_744:
    v_948 = nil;
    goto v_742;
    v_948 = nil;
v_742:
    if (v_948 == nil) goto v_740;
    v_948 = stack[-6];
    if (v_948 == nil) goto v_754;
    v_948 = stack[-6];
    if (!car_legal(v_948)) v_948 = cdrerror(v_948); else
    v_948 = cdr(v_948);
    if (v_948 == nil) goto v_760;
    else goto v_758;
v_760:
    v_948 = qvalue(basic_elt(env, 5)); // !*reduce4
    if (v_948 == nil) goto v_763;
    else goto v_758;
v_763:
    goto v_759;
v_758:
    v_949 = basic_elt(env, 39); // "proc form"
    v_948 = nil;
    {   LispObject fn = basic_elt(env, 51); // symerr
    v_948 = (*qfn2(fn))(fn, v_949, v_948);
    }
    env = stack[-9];
    goto v_757;
v_759:
    v_948 = stack[-6];
    if (!car_legal(v_948)) v_948 = carerror(v_948); else
    v_948 = car(v_948);
    {   LispObject fn = basic_elt(env, 59); // procstat1
    v_948 = (*qfn1(fn))(fn, v_948);
    }
    env = stack[-9];
    v_948 = ncons(v_948);
    env = stack[-9];
    stack[-6] = v_948;
    goto v_757;
v_757:
    goto v_752;
v_754:
    v_948 = nil;
    {   LispObject fn = basic_elt(env, 59); // procstat1
    v_948 = (*qfn1(fn))(fn, v_948);
    }
    env = stack[-9];
    v_948 = ncons(v_948);
    env = stack[-9];
    stack[-6] = v_948;
    goto v_752;
v_752:
    goto v_738;
v_740:
    v_949 = stack[-4];
    v_948 = nil;
    {   LispObject fn = basic_elt(env, 48); // lispapply
    v_949 = (*qfn2(fn))(fn, v_949, v_948);
    }
    env = stack[-9];
    v_948 = stack[-6];
    v_948 = cons(v_949, v_948);
    env = stack[-9];
    stack[-6] = v_948;
    goto v_738;
v_738:
    v_948 = nil;
    stack[-4] = v_948;
    goto v_14;
v_33:
    v_949 = qvalue(basic_elt(env, 2)); // cursym!*
    v_948 = basic_elt(env, 40); // !*semicol!*
    if (v_949 == v_948) goto v_790;
    {   LispObject fn = basic_elt(env, 53); // eolcheck
    v_948 = (*qfn0(fn))(fn);
    }
    env = stack[-9];
    goto v_788;
v_790:
v_788:
    v_949 = stack[-3];
    v_948 = basic_elt(env, 41); // !*colon!*
    if (v_949 == v_948) goto v_801;
    else goto v_802;
v_801:
    v_949 = stack[-7];
    v_948 = basic_elt(env, 42); // for
    if (v_949 == v_948) goto v_808;
    v_948 = qvalue(basic_elt(env, 43)); // !*blockp
    if (v_948 == nil) goto v_813;
    else goto v_814;
v_813:
    v_948 = lisp_true;
    goto v_812;
v_814:
    v_948 = stack[-6];
    if (v_948 == nil) goto v_821;
    else goto v_822;
v_821:
    v_948 = lisp_true;
    goto v_820;
v_822:
    v_948 = stack[-6];
    if (!car_legal(v_948)) v_948 = carerror(v_948); else
    v_948 = car(v_948);
    if (!consp(v_948)) goto v_830;
    v_948 = lisp_true;
    goto v_828;
v_830:
    v_948 = stack[-6];
    if (!car_legal(v_948)) v_948 = cdrerror(v_948); else
    v_948 = cdr(v_948);
    goto v_828;
    v_948 = nil;
v_828:
    goto v_820;
    v_948 = nil;
v_820:
    goto v_812;
    v_948 = nil;
v_812:
    goto v_806;
v_808:
    v_948 = nil;
    goto v_806;
    v_948 = nil;
v_806:
    goto v_800;
v_802:
    v_948 = nil;
    goto v_800;
    v_948 = nil;
v_800:
    if (v_948 == nil) goto v_798;
    else goto v_796;
v_798:
    v_949 = stack[-3];
    v_948 = basic_elt(env, 44); // nodel
    v_948 = Lflagp(nil, v_949, v_948);
    env = stack[-9];
    if (v_948 == nil) goto v_848;
    v_948 = stack[-7];
    if (v_948 == nil) goto v_854;
    else goto v_855;
v_854:
    v_948 = lisp_true;
    goto v_853;
v_855:
    v_949 = stack[-7];
    v_948 = basic_elt(env, 21); // group
    if (v_949 == v_948) goto v_862;
    else goto v_863;
v_862:
    v_949 = stack[-3];
    v_948 = basic_elt(env, 45); // (!*rsqbkt!* !*rcbkt!* !*rsqb!*)
    v_948 = Lmemq(nil, v_949, v_948);
    v_948 = (v_948 == nil ? lisp_true : nil);
    goto v_861;
v_863:
    v_948 = nil;
    goto v_861;
    v_948 = nil;
v_861:
    goto v_853;
    v_948 = nil;
v_853:
    goto v_846;
v_848:
    v_948 = nil;
    goto v_846;
    v_948 = nil;
v_846:
    if (v_948 == nil) goto v_844;
    else goto v_796;
v_844:
    goto v_797;
v_796:
    v_949 = basic_elt(env, 20); // "Improper delimiter"
    v_948 = nil;
    {   LispObject fn = basic_elt(env, 51); // symerr
    v_948 = (*qfn2(fn))(fn, v_949, v_948);
    }
    env = stack[-9];
    goto v_795;
v_797:
    v_948 = stack[-7];
    if (symbolp(v_948)) goto v_881;
    else goto v_880;
v_881:
    v_949 = stack[-7];
    v_948 = basic_elt(env, 17); // paren
    if (v_949 == v_948) goto v_886;
    else goto v_887;
v_886:
    v_948 = lisp_true;
    goto v_885;
v_887:
    v_949 = stack[-7];
    v_948 = basic_elt(env, 16); // struct
    v_948 = Lflagp(nil, v_949, v_948);
    env = stack[-9];
    goto v_885;
    v_948 = nil;
v_885:
    if (v_948 == nil) goto v_880;
    v_949 = basic_elt(env, 46); // "Too few right parentheses"
    v_948 = nil;
    {   LispObject fn = basic_elt(env, 51); // symerr
    v_948 = (*qfn2(fn))(fn, v_949, v_948);
    }
    env = stack[-9];
    goto v_795;
v_880:
v_795:
v_34:
    v_948 = stack[-4];
    if (v_948 == nil) goto v_902;
    v_949 = basic_elt(env, 20); // "Improper delimiter"
    v_948 = nil;
    {   LispObject fn = basic_elt(env, 51); // symerr
    v_948 = (*qfn2(fn))(fn, v_949, v_948);
    }
    env = stack[-9];
    goto v_900;
v_902:
    v_948 = stack[-8];
    if (v_948 == nil) goto v_911;
    else goto v_912;
v_911:
    v_948 = stack[-6];
    if (v_948 == nil) goto v_916;
    else goto v_917;
v_916:
    v_948 = stack[-5];
    v_948 = (v_948 == nil ? lisp_true : nil);
    goto v_915;
v_917:
    v_948 = nil;
    goto v_915;
    v_948 = nil;
v_915:
    goto v_910;
v_912:
    v_948 = nil;
    goto v_910;
    v_948 = nil;
v_910:
    if (v_948 == nil) goto v_908;
    v_949 = nil;
    v_948 = stack[-1];
    {
        LispObject fn = basic_elt(env, 60); // xcomment
        return (*qfn2(fn))(fn, v_949, v_948);
    }
v_908:
v_900:
    v_948 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-4] = v_948;
    goto v_26;
v_35:
    v_948 = stack[-8];
    if (!car_legal(v_948)) v_948 = cdrerror(v_948); else
    v_948 = cdr(v_948);
    if (v_948 == nil) goto v_933;
    else goto v_934;
v_933:
    v_948 = stack[-8];
    if (!car_legal(v_948)) v_949 = carerror(v_948); else
    v_949 = car(v_948);
    v_948 = stack[-1];
    {
        LispObject fn = basic_elt(env, 60); // xcomment
        return (*qfn2(fn))(fn, v_949, v_948);
    }
v_934:
    v_948 = basic_elt(env, 47); // "Please send hearn@rand.org your program!!"
    v_948 = Lprint(nil, v_948);
    env = stack[-9];
    goto v_932;
v_932:
    v_949 = basic_elt(env, 20); // "Improper delimiter"
    v_948 = nil;
    {   LispObject fn = basic_elt(env, 51); // symerr
    v_948 = (*qfn2(fn))(fn, v_949, v_948);
    }
    v_948 = nil;
    return onevalue(v_948);
}



// Code for binomial!-coefft!-mod!-p

static LispObject CC_binomialKcoefftKmodKp(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_71, v_72, v_73, v_74;
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
    v_72 = stack[-3];
    v_71 = stack[0];
    v_71 = static_cast<LispObject>(lessp2(v_72, v_71));
    v_71 = v_71 ? lisp_true : nil;
    env = stack[-5];
    if (v_71 == nil) goto v_8;
    v_71 = nil;
    goto v_6;
v_8:
    v_72 = stack[-3];
    v_71 = stack[0];
    if (equal(v_72, v_71)) goto v_13;
    else goto v_14;
v_13:
    v_71 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_6;
v_14:
    v_72 = stack[0];
    v_71 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_72 == v_71) goto v_18;
    else goto v_19;
v_18:
    v_71 = stack[-3];
    v_71 = Lmodular_number(nil, v_71);
    env = stack[-5];
    {
        LispObject fn = basic_elt(env, 1); // !*n2f
        return (*qfn1(fn))(fn, v_71);
    }
v_19:
    v_71 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-4] = v_71;
    stack[-1] = stack[0];
    v_72 = stack[-3];
    v_71 = stack[0];
    v_71 = difference2(v_72, v_71);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 2); // min
    v_71 = (*qfn2(fn))(fn, stack[-1], v_71);
    }
    env = stack[-5];
    stack[-2] = v_71;
    v_71 = stack[-3];
    v_71 = Lmodular_number(nil, v_71);
    env = stack[-5];
    stack[-3] = v_71;
    v_71 = stack[0];
    v_71 = Lmodular_number(nil, v_71);
    env = stack[-5];
    v_71 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[0] = v_71;
v_45:
    v_72 = stack[-2];
    v_71 = stack[0];
    v_71 = difference2(v_72, v_71);
    env = stack[-5];
    v_71 = Lminusp(nil, v_71);
    env = stack[-5];
    if (v_71 == nil) goto v_50;
    goto v_44;
v_50:
    v_71 = stack[0];
    v_71 = Lmodular_number(nil, v_71);
    env = stack[-5];
    stack[-1] = v_71;
    v_74 = stack[-4];
    v_73 = stack[-3];
    v_72 = stack[-1];
    v_71 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   std::intptr_t w = int_of_fixnum(v_72) - int_of_fixnum(v_71);
        if (w < 0) w += current_modulus;
        v_71 = fixnum_of_int(w);
    }
    {   std::intptr_t w = int_of_fixnum(v_73) - int_of_fixnum(v_71);
        if (w < 0) w += current_modulus;
        v_71 = fixnum_of_int(w);
    }
    v_72 = Lmodular_times(nil, v_74, v_71);
    env = stack[-5];
    v_71 = stack[-1];
    v_71 = Lmodular_quotient(nil, v_72, v_71);
    env = stack[-5];
    stack[-4] = v_71;
    v_71 = stack[0];
    v_71 = add1(v_71);
    env = stack[-5];
    stack[0] = v_71;
    goto v_45;
v_44:
    v_71 = stack[-4];
    {
        LispObject fn = basic_elt(env, 1); // !*n2f
        return (*qfn1(fn))(fn, v_71);
    }
    goto v_6;
    v_71 = nil;
v_6:
    return onevalue(v_71);
}



// Code for !*kp2f

static LispObject CC_Hkp2f(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_20 = stack[0];
    v_19 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_19 = static_cast<LispObject>(greaterp2(v_20, v_19));
    v_19 = v_19 ? lisp_true : nil;
    env = stack[-2];
    if (v_19 == nil) goto v_8;
    v_20 = stack[-1];
    v_19 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // mksq
    v_19 = (*qfn2(fn))(fn, v_20, v_19);
    }
    if (!car_legal(v_19)) v_19 = carerror(v_19); else
    v_19 = car(v_19);
    goto v_6;
v_8:
    v_19 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_6;
    v_19 = nil;
v_6:
    return onevalue(v_19);
}



// Code for revalind

static LispObject CC_revalind(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_27, v_28, v_29;
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
// Binding alglist!*
// FLUIDBIND: reloadenv=4 litvec-offset=1 saveloc=1
{   bind_fluid_stack bind_fluid_var(-4, 1, -1);
    setvalue(basic_elt(env, 1), nil); // alglist!*
// Binding dmode!*
// FLUIDBIND: reloadenv=4 litvec-offset=2 saveloc=0
{   bind_fluid_stack bind_fluid_var(-4, 2, 0);
    setvalue(basic_elt(env, 2), nil); // dmode!*
    v_27 = nil;
    v_27 = ncons(v_27);
    env = stack[-4];
    setvalue(basic_elt(env, 1), v_27); // alglist!*
    v_27 = qvalue(basic_elt(env, 3)); // subfg!*
    stack[-3] = v_27;
    v_27 = nil;
    setvalue(basic_elt(env, 3), v_27); // subfg!*
    v_29 = basic_elt(env, 4); // !0
    v_28 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_27 = stack[-2];
    v_27 = Lsubst(nil, v_29, v_28, v_27);
    env = stack[-4];
    stack[-2] = v_27;
    v_27 = stack[-2];
    {   LispObject fn = basic_elt(env, 5); // simp
    v_27 = (*qfn1(fn))(fn, v_27);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 6); // prepsq
    v_27 = (*qfn1(fn))(fn, v_27);
    }
    env = stack[-4];
    v_28 = v_27;
    v_27 = stack[-3];
    setvalue(basic_elt(env, 3), v_27); // subfg!*
    v_27 = v_28;
    ;}  // end of a binding scope
    ;}  // end of a binding scope
    return onevalue(v_27);
}



// Code for scalopp

static LispObject CC_scalopp(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_130, v_131, v_132;
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
    v_130 = stack[-3];
    if (symbolp(v_130)) goto v_10;
    v_130 = nil;
    goto v_8;
v_10:
    v_130 = stack[-3];
    if (!symbolp(v_130)) v_131 = nil;
    else { v_131 = qfastgets(v_130);
           if (v_131 != nil) { v_131 = elt(v_131, 18); // phystype
#ifdef RECORD_GET
             if (v_131 != SPID_NOPROP)
                record_get(elt(fastget_names, 18), 1);
             else record_get(elt(fastget_names, 18), 0),
                v_131 = nil; }
           else record_get(elt(fastget_names, 18), 0); }
#else
             if (v_131 == SPID_NOPROP) v_131 = nil; }}
#endif
    v_130 = basic_elt(env, 1); // scalar
    v_130 = (v_131 == v_130 ? lisp_true : nil);
    goto v_8;
    v_130 = nil;
v_8:
    if (v_130 == nil) goto v_6;
    else goto v_5;
v_6:
    v_130 = stack[-3];
    if (!consp(v_130)) goto v_22;
    v_130 = stack[-3];
    if (!car_legal(v_130)) v_130 = carerror(v_130); else
    v_130 = car(v_130);
    if (!symbolp(v_130)) v_131 = nil;
    else { v_131 = qfastgets(v_130);
           if (v_131 != nil) { v_131 = elt(v_131, 18); // phystype
#ifdef RECORD_GET
             if (v_131 != SPID_NOPROP)
                record_get(elt(fastget_names, 18), 1);
             else record_get(elt(fastget_names, 18), 0),
                v_131 = nil; }
           else record_get(elt(fastget_names, 18), 0); }
#else
             if (v_131 == SPID_NOPROP) v_131 = nil; }}
#endif
    v_130 = basic_elt(env, 1); // scalar
    if (v_131 == v_130) goto v_26;
    else goto v_27;
v_26:
    v_130 = lisp_true;
    goto v_25;
v_27:
    v_130 = stack[-3];
    if (!car_legal(v_130)) v_130 = carerror(v_130); else
    v_130 = car(v_130);
    if (!symbolp(v_130)) v_131 = nil;
    else { v_131 = qfastgets(v_130);
           if (v_131 != nil) { v_131 = elt(v_131, 18); // phystype
#ifdef RECORD_GET
             if (v_131 != SPID_NOPROP)
                record_get(elt(fastget_names, 18), 1);
             else record_get(elt(fastget_names, 18), 0),
                v_131 = nil; }
           else record_get(elt(fastget_names, 18), 0); }
#else
             if (v_131 == SPID_NOPROP) v_131 = nil; }}
#endif
    v_130 = basic_elt(env, 2); // vector
    if (v_131 == v_130) goto v_40;
    else goto v_41;
v_40:
    v_130 = stack[-3];
    if (!car_legal(v_130)) v_130 = cdrerror(v_130); else
    v_130 = cdr(v_130);
    if (!car_legal(v_130)) v_130 = carerror(v_130); else
    v_130 = car(v_130);
    {   LispObject fn = basic_elt(env, 5); // isanindex
    v_130 = (*qfn1(fn))(fn, v_130);
    }
    env = stack[-5];
    goto v_39;
v_41:
    v_130 = nil;
    goto v_39;
    v_130 = nil;
v_39:
    if (v_130 == nil) goto v_37;
    else goto v_36;
v_37:
    v_130 = stack[-3];
    if (!car_legal(v_130)) v_130 = carerror(v_130); else
    v_130 = car(v_130);
    if (!symbolp(v_130)) v_131 = nil;
    else { v_131 = qfastgets(v_130);
           if (v_131 != nil) { v_131 = elt(v_131, 18); // phystype
#ifdef RECORD_GET
             if (v_131 != SPID_NOPROP)
                record_get(elt(fastget_names, 18), 1);
             else record_get(elt(fastget_names, 18), 0),
                v_131 = nil; }
           else record_get(elt(fastget_names, 18), 0); }
#else
             if (v_131 == SPID_NOPROP) v_131 = nil; }}
#endif
    v_130 = basic_elt(env, 3); // tensor
    if (v_131 == v_130) goto v_55;
    else goto v_56;
v_55:
    v_130 = stack[-3];
    if (!car_legal(v_130)) v_130 = cdrerror(v_130); else
    v_130 = cdr(v_130);
    v_132 = Llength(nil, v_130);
    env = stack[-5];
    v_130 = stack[-3];
    if (!car_legal(v_130)) v_131 = carerror(v_130); else
    v_131 = car(v_130);
    v_130 = basic_elt(env, 4); // tensdimen
    v_130 = get(v_131, v_130);
    env = stack[-5];
    v_130 = static_cast<LispObject>(geq2(v_132, v_130));
    v_130 = v_130 ? lisp_true : nil;
    env = stack[-5];
    if (v_130 == nil) goto v_63;
    else goto v_64;
v_63:
    v_130 = nil;
    goto v_62;
v_64:
    v_130 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-4] = v_130;
    v_130 = stack[-3];
    if (!car_legal(v_130)) v_131 = carerror(v_130); else
    v_131 = car(v_130);
    v_130 = basic_elt(env, 4); // tensdimen
    v_131 = get(v_131, v_130);
    env = stack[-5];
    v_130 = stack[-4];
    v_130 = difference2(v_131, v_130);
    env = stack[-5];
    v_130 = Lminusp(nil, v_130);
    env = stack[-5];
    if (v_130 == nil) goto v_87;
    v_130 = nil;
    goto v_81;
v_87:
    v_130 = stack[-3];
    if (!car_legal(v_130)) v_131 = cdrerror(v_130); else
    v_131 = cdr(v_130);
    v_130 = stack[-4];
    {   LispObject fn = basic_elt(env, 6); // nth
    v_130 = (*qfn2(fn))(fn, v_131, v_130);
    }
    env = stack[-5];
    v_130 = ncons(v_130);
    env = stack[-5];
    stack[-1] = v_130;
    stack[-2] = v_130;
v_82:
    v_130 = stack[-4];
    v_130 = add1(v_130);
    env = stack[-5];
    stack[-4] = v_130;
    v_130 = stack[-3];
    if (!car_legal(v_130)) v_131 = carerror(v_130); else
    v_131 = car(v_130);
    v_130 = basic_elt(env, 4); // tensdimen
    v_131 = get(v_131, v_130);
    env = stack[-5];
    v_130 = stack[-4];
    v_130 = difference2(v_131, v_130);
    env = stack[-5];
    v_130 = Lminusp(nil, v_130);
    env = stack[-5];
    if (v_130 == nil) goto v_106;
    v_130 = stack[-2];
    goto v_81;
v_106:
    stack[0] = stack[-1];
    v_130 = stack[-3];
    if (!car_legal(v_130)) v_131 = cdrerror(v_130); else
    v_131 = cdr(v_130);
    v_130 = stack[-4];
    {   LispObject fn = basic_elt(env, 6); // nth
    v_130 = (*qfn2(fn))(fn, v_131, v_130);
    }
    env = stack[-5];
    v_130 = ncons(v_130);
    env = stack[-5];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_130);
    v_130 = stack[-1];
    if (!car_legal(v_130)) v_130 = cdrerror(v_130); else
    v_130 = cdr(v_130);
    stack[-1] = v_130;
    goto v_82;
v_81:
    {
        LispObject fn = basic_elt(env, 7); // areallindices
        return (*qfn1(fn))(fn, v_130);
    }
    v_130 = nil;
v_62:
    goto v_54;
v_56:
    v_130 = nil;
    goto v_54;
    v_130 = nil;
v_54:
v_36:
    goto v_25;
    v_130 = nil;
v_25:
    goto v_20;
v_22:
    v_130 = nil;
    goto v_20;
    v_130 = nil;
v_20:
v_5:
    return onevalue(v_130);
}



// Code for lalr_reduction_index

static LispObject CC_lalr_reduction_index(LispObject env,
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
// space for vars preserved across procedure calls
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    v_11 = v_2;
// end of prologue
    v_10 = v_11;
    if (!car_legal(v_10)) stack[0] = cdrerror(v_10); else
    stack[0] = cdr(v_10);
    v_10 = v_11;
    if (!car_legal(v_10)) v_10 = carerror(v_10); else
    v_10 = car(v_10);
    {   LispObject fn = basic_elt(env, 1); // lalr_productions
    v_10 = (*qfn1(fn))(fn, v_10);
    }
    env = stack[-1];
    {
        LispObject v_13 = stack[0];
        LispObject fn = basic_elt(env, 2); // cdrassoc
        return (*qfn2(fn))(fn, v_13, v_10);
    }
}



// Code for rempropss

static LispObject CC_rempropss(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_40, v_41, v_42, v_43, v_44, v_45;
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
    v_44 = v_3;
    v_40 = v_2;
// end of prologue
    v_45 = v_40;
v_8:
    v_40 = v_45;
    if (v_40 == nil) goto v_12;
    else goto v_13;
v_12:
    v_40 = nil;
    goto v_7;
v_13:
    v_40 = v_45;
    if (!car_legal(v_40)) v_40 = carerror(v_40); else
    v_40 = car(v_40);
    v_43 = v_40;
    v_40 = v_44;
    v_42 = v_40;
v_22:
    v_40 = v_42;
    if (v_40 == nil) goto v_26;
    else goto v_27;
v_26:
    goto v_21;
v_27:
    v_40 = v_42;
    if (!car_legal(v_40)) v_40 = carerror(v_40); else
    v_40 = car(v_40);
    v_41 = v_43;
    v_40 = Lremprop(nil, v_41, v_40);
    env = stack[0];
    v_40 = v_42;
    if (!car_legal(v_40)) v_40 = cdrerror(v_40); else
    v_40 = cdr(v_40);
    v_42 = v_40;
    goto v_22;
v_21:
    v_40 = v_45;
    if (!car_legal(v_40)) v_40 = cdrerror(v_40); else
    v_40 = cdr(v_40);
    v_45 = v_40;
    goto v_8;
v_7:
    return onevalue(v_40);
}



// Code for rl_simpl

static LispObject CC_rl_simpl(LispObject env,
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
    stack[0] = qvalue(basic_elt(env, 1)); // rl_simpl!*
    v_12 = list3(v_14, v_13, v_12);
    env = stack[-1];
    {
        LispObject v_16 = stack[0];
        LispObject fn = basic_elt(env, 2); // apply
        return (*qfn2(fn))(fn, v_16, v_12);
    }
}



// Code for cl_smmkatl

static LispObject CC_cl_smmkatl(LispObject env, LispObject v_2,
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
    real_push(nil);
    stack_popper stack_popper_var(7);
// copy arguments values to proper place
    stack[-3] = v_5;
    v_115 = v_4;
    v_116 = v_3;
    stack[-4] = v_2;
// end of prologue
    stack[-5] = v_115;
v_15:
    v_115 = stack[-5];
    if (v_115 == nil) goto v_20;
    else goto v_21;
v_20:
    v_115 = nil;
    goto v_14;
v_21:
    v_115 = stack[-5];
    if (!car_legal(v_115)) v_115 = carerror(v_115); else
    v_115 = car(v_115);
    v_117 = v_115;
    v_115 = v_117;
    if (!car_legal(v_115)) v_116 = cdrerror(v_115); else
    v_116 = cdr(v_115);
    v_115 = stack[-3];
    if (equal(v_116, v_115)) goto v_29;
    else goto v_30;
v_29:
    v_115 = v_117;
    if (!car_legal(v_115)) v_115 = carerror(v_115); else
    v_115 = car(v_115);
    v_115 = ncons(v_115);
    env = stack[-6];
    goto v_28;
v_30:
    v_115 = nil;
v_28:
    stack[-2] = v_115;
    v_115 = stack[-2];
    {   LispObject fn = basic_elt(env, 2); // lastpair
    v_115 = (*qfn1(fn))(fn, v_115);
    }
    env = stack[-6];
    stack[-1] = v_115;
    v_115 = stack[-5];
    if (!car_legal(v_115)) v_115 = cdrerror(v_115); else
    v_115 = cdr(v_115);
    stack[-5] = v_115;
    v_115 = stack[-1];
    if (!consp(v_115)) goto v_43;
    else goto v_44;
v_43:
    goto v_15;
v_44:
v_16:
    v_115 = stack[-5];
    if (v_115 == nil) goto v_48;
    else goto v_49;
v_48:
    v_115 = stack[-2];
    goto v_14;
v_49:
    stack[0] = stack[-1];
    v_115 = stack[-5];
    if (!car_legal(v_115)) v_115 = carerror(v_115); else
    v_115 = car(v_115);
    v_117 = v_115;
    v_115 = v_117;
    if (!car_legal(v_115)) v_116 = cdrerror(v_115); else
    v_116 = cdr(v_115);
    v_115 = stack[-3];
    if (equal(v_116, v_115)) goto v_58;
    else goto v_59;
v_58:
    v_115 = v_117;
    if (!car_legal(v_115)) v_115 = carerror(v_115); else
    v_115 = car(v_115);
    v_115 = ncons(v_115);
    env = stack[-6];
    goto v_57;
v_59:
    v_115 = nil;
v_57:
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_115);
    v_115 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // lastpair
    v_115 = (*qfn1(fn))(fn, v_115);
    }
    env = stack[-6];
    stack[-1] = v_115;
    v_115 = stack[-5];
    if (!car_legal(v_115)) v_115 = cdrerror(v_115); else
    v_115 = cdr(v_115);
    stack[-5] = v_115;
    goto v_16;
v_14:
    v_117 = v_115;
    v_116 = stack[-4];
    v_115 = basic_elt(env, 1); // or
    if (v_116 == v_115) goto v_73;
    else goto v_74;
v_73:
    v_115 = v_117;
    stack[-3] = v_115;
    v_115 = stack[-3];
    if (v_115 == nil) goto v_86;
    else goto v_87;
v_86:
    v_115 = nil;
    goto v_81;
v_87:
    v_115 = stack[-3];
    if (!car_legal(v_115)) v_115 = carerror(v_115); else
    v_115 = car(v_115);
    {   LispObject fn = basic_elt(env, 3); // rl_negateat
    v_115 = (*qfn1(fn))(fn, v_115);
    }
    env = stack[-6];
    v_115 = ncons(v_115);
    env = stack[-6];
    stack[-1] = v_115;
    stack[-2] = v_115;
v_82:
    v_115 = stack[-3];
    if (!car_legal(v_115)) v_115 = cdrerror(v_115); else
    v_115 = cdr(v_115);
    stack[-3] = v_115;
    v_115 = stack[-3];
    if (v_115 == nil) goto v_100;
    else goto v_101;
v_100:
    v_115 = stack[-2];
    goto v_81;
v_101:
    stack[0] = stack[-1];
    v_115 = stack[-3];
    if (!car_legal(v_115)) v_115 = carerror(v_115); else
    v_115 = car(v_115);
    {   LispObject fn = basic_elt(env, 3); // rl_negateat
    v_115 = (*qfn1(fn))(fn, v_115);
    }
    env = stack[-6];
    v_115 = ncons(v_115);
    env = stack[-6];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_115);
    v_115 = stack[-1];
    if (!car_legal(v_115)) v_115 = cdrerror(v_115); else
    v_115 = cdr(v_115);
    stack[-1] = v_115;
    goto v_82;
v_81:
    v_117 = v_115;
    goto v_72;
v_74:
v_72:
    v_115 = v_117;
    return onevalue(v_115);
}



// Code for ibalp_vmember

static LispObject CC_ibalp_vmember(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // ibalp_vequal
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



// Code for make!-univariate!-image!-mod!-p

static LispObject CC_makeKunivariateKimageKmodKp(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_177, v_178, v_179;
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
    v_177 = stack[-2];
    if (!consp(v_177)) goto v_15;
    else goto v_16;
v_15:
    v_177 = lisp_true;
    goto v_14;
v_16:
    v_177 = stack[-2];
    if (!car_legal(v_177)) v_177 = carerror(v_177); else
    v_177 = car(v_177);
    v_177 = (consp(v_177) ? nil : lisp_true);
    goto v_14;
    v_177 = nil;
v_14:
    if (v_177 == nil) goto v_12;
    v_177 = stack[-2];
    if (v_177 == nil) goto v_26;
    else goto v_27;
v_26:
    v_177 = nil;
    goto v_8;
v_27:
    v_177 = stack[-2];
    v_177 = Lmodular_number(nil, v_177);
    env = stack[-4];
    {
        LispObject fn = basic_elt(env, 1); // !*n2f
        return (*qfn1(fn))(fn, v_177);
    }
    goto v_10;
v_12:
v_10:
    v_177 = stack[-2];
    if (!car_legal(v_177)) v_177 = carerror(v_177); else
    v_177 = car(v_177);
    if (!car_legal(v_177)) v_177 = carerror(v_177); else
    v_177 = car(v_177);
    if (!car_legal(v_177)) v_178 = carerror(v_177); else
    v_178 = car(v_177);
    v_177 = stack[-1];
    if (equal(v_178, v_177)) goto v_37;
    else goto v_38;
v_37:
    v_177 = nil;
    stack[0] = v_177;
v_47:
    v_177 = stack[-2];
    if (!consp(v_177)) goto v_58;
    else goto v_59;
v_58:
    v_177 = lisp_true;
    goto v_57;
v_59:
    v_177 = stack[-2];
    if (!car_legal(v_177)) v_177 = carerror(v_177); else
    v_177 = car(v_177);
    v_177 = (consp(v_177) ? nil : lisp_true);
    goto v_57;
    v_177 = nil;
v_57:
    if (v_177 == nil) goto v_54;
    else goto v_55;
v_54:
    v_177 = stack[-2];
    if (!car_legal(v_177)) v_177 = carerror(v_177); else
    v_177 = car(v_177);
    if (!car_legal(v_177)) v_177 = carerror(v_177); else
    v_177 = car(v_177);
    if (!car_legal(v_177)) v_178 = carerror(v_177); else
    v_178 = car(v_177);
    v_177 = stack[-1];
    v_177 = (equal(v_178, v_177) ? lisp_true : nil);
    goto v_53;
v_55:
    v_177 = nil;
    goto v_53;
    v_177 = nil;
v_53:
    if (v_177 == nil) goto v_50;
    else goto v_51;
v_50:
    goto v_46;
v_51:
    v_177 = stack[-2];
    if (!car_legal(v_177)) v_177 = carerror(v_177); else
    v_177 = car(v_177);
    if (!car_legal(v_177)) v_178 = cdrerror(v_177); else
    v_178 = cdr(v_177);
    v_177 = stack[-1];
    {   LispObject fn = basic_elt(env, 0); // make!-univariate!-image!-mod!-p
    v_177 = (*qfn2(fn))(fn, v_178, v_177);
    }
    env = stack[-4];
    v_178 = v_177;
    if (v_178 == nil) goto v_85;
    v_178 = stack[-2];
    if (!car_legal(v_178)) v_178 = carerror(v_178); else
    v_178 = car(v_178);
    if (!car_legal(v_178)) v_179 = carerror(v_178); else
    v_179 = car(v_178);
    v_178 = v_177;
    v_177 = stack[0];
    v_177 = acons(v_179, v_178, v_177);
    env = stack[-4];
    stack[0] = v_177;
    goto v_83;
v_85:
v_83:
    v_177 = stack[-2];
    if (!car_legal(v_177)) v_177 = cdrerror(v_177); else
    v_177 = cdr(v_177);
    stack[-2] = v_177;
    goto v_47;
v_46:
    v_178 = stack[-2];
    v_177 = stack[-1];
    {   LispObject fn = basic_elt(env, 0); // make!-univariate!-image!-mod!-p
    v_177 = (*qfn2(fn))(fn, v_178, v_177);
    }
    stack[-2] = v_177;
v_101:
    v_177 = stack[0];
    if (v_177 == nil) goto v_104;
    else goto v_105;
v_104:
    goto v_100;
v_105:
    v_177 = stack[0];
    if (!car_legal(v_177)) v_177 = cdrerror(v_177); else
    v_177 = cdr(v_177);
    v_179 = stack[0];
    v_178 = stack[-2];
    if (!car_legal(v_179)) rplacd_fails(v_179);
    setcdr(v_179, v_178);
    v_178 = stack[0];
    stack[-2] = v_178;
    stack[0] = v_177;
    goto v_101;
v_100:
    v_177 = stack[-2];
    goto v_8;
v_38:
    v_177 = nil;
    stack[0] = v_177;
v_121:
    v_177 = stack[-2];
    if (!consp(v_177)) goto v_132;
    else goto v_133;
v_132:
    v_177 = lisp_true;
    goto v_131;
v_133:
    v_177 = stack[-2];
    if (!car_legal(v_177)) v_177 = carerror(v_177); else
    v_177 = car(v_177);
    v_177 = (consp(v_177) ? nil : lisp_true);
    goto v_131;
    v_177 = nil;
v_131:
    if (v_177 == nil) goto v_128;
    else goto v_129;
v_128:
    v_177 = stack[-2];
    if (!car_legal(v_177)) v_177 = carerror(v_177); else
    v_177 = car(v_177);
    if (!car_legal(v_177)) v_177 = carerror(v_177); else
    v_177 = car(v_177);
    if (!car_legal(v_177)) v_178 = carerror(v_177); else
    v_178 = car(v_177);
    v_177 = stack[-1];
    v_177 = (equal(v_178, v_177) ? lisp_true : nil);
    v_177 = (v_177 == nil ? lisp_true : nil);
    goto v_127;
v_129:
    v_177 = nil;
    goto v_127;
    v_177 = nil;
v_127:
    if (v_177 == nil) goto v_124;
    else goto v_125;
v_124:
    goto v_120;
v_125:
    stack[-3] = stack[0];
    v_177 = stack[-2];
    if (!car_legal(v_177)) v_177 = carerror(v_177); else
    v_177 = car(v_177);
    if (!car_legal(v_177)) v_177 = carerror(v_177); else
    v_177 = car(v_177);
    if (!car_legal(v_177)) v_178 = carerror(v_177); else
    v_178 = car(v_177);
    v_177 = stack[-2];
    if (!car_legal(v_177)) v_177 = carerror(v_177); else
    v_177 = car(v_177);
    if (!car_legal(v_177)) v_177 = carerror(v_177); else
    v_177 = car(v_177);
    if (!car_legal(v_177)) v_177 = cdrerror(v_177); else
    v_177 = cdr(v_177);
    {   LispObject fn = basic_elt(env, 2); // image!-of!-power
    stack[0] = (*qfn2(fn))(fn, v_178, v_177);
    }
    env = stack[-4];
    v_177 = stack[-2];
    if (!car_legal(v_177)) v_177 = carerror(v_177); else
    v_177 = car(v_177);
    if (!car_legal(v_177)) v_178 = cdrerror(v_177); else
    v_178 = cdr(v_177);
    v_177 = stack[-1];
    {   LispObject fn = basic_elt(env, 0); // make!-univariate!-image!-mod!-p
    v_177 = (*qfn2(fn))(fn, v_178, v_177);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 3); // times!-mod!-p
    v_177 = (*qfn2(fn))(fn, stack[0], v_177);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 4); // plus!-mod!-p
    v_177 = (*qfn2(fn))(fn, stack[-3], v_177);
    }
    env = stack[-4];
    stack[0] = v_177;
    v_177 = stack[-2];
    if (!car_legal(v_177)) v_177 = cdrerror(v_177); else
    v_177 = cdr(v_177);
    stack[-2] = v_177;
    goto v_121;
v_120:
    v_178 = stack[-2];
    v_177 = stack[-1];
    {   LispObject fn = basic_elt(env, 0); // make!-univariate!-image!-mod!-p
    v_177 = (*qfn2(fn))(fn, v_178, v_177);
    }
    env = stack[-4];
    stack[-2] = v_177;
    v_178 = stack[0];
    v_177 = stack[-2];
    {
        LispObject fn = basic_elt(env, 4); // plus!-mod!-p
        return (*qfn2(fn))(fn, v_178, v_177);
    }
    v_177 = nil;
v_8:
    return onevalue(v_177);
}



// Code for minusp!:

static LispObject CC_minuspT(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_30, v_31, v_32;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_31 = v_2;
// end of prologue
    v_30 = v_31;
    v_32 = basic_elt(env, 1); // !:rd!:
    if (!consp(v_30)) goto v_11;
    v_30 = car(v_30);
    if (v_30 == v_32) goto v_10;
    else goto v_11;
v_10:
    v_30 = v_31;
    if (!car_legal(v_30)) v_30 = cdrerror(v_30); else
    v_30 = cdr(v_30);
    v_30 = (consp(v_30) ? nil : lisp_true);
    v_30 = (v_30 == nil ? lisp_true : nil);
    goto v_9;
v_11:
    v_30 = nil;
    goto v_9;
    v_30 = nil;
v_9:
    if (v_30 == nil) goto v_7;
    v_30 = v_31;
    if (!car_legal(v_30)) v_30 = cdrerror(v_30); else
    v_30 = cdr(v_30);
    if (!car_legal(v_30)) v_31 = carerror(v_30); else
    v_31 = car(v_30);
    v_30 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
        return Llessp_2(nil, v_31, v_30);
v_7:
    v_30 = nil;
    goto v_5;
    v_30 = nil;
v_5:
    return onevalue(v_30);
}



// Code for isimplicit

static LispObject CC_isimplicit(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_36 = basic_elt(env, 1); // implicit! 
    v_36 = Lexplode(nil, v_36);
    env = stack[-2];
    stack[-1] = v_36;
    v_36 = stack[0];
    v_36 = Lexplode(nil, v_36);
    v_37 = v_36;
    v_36 = lisp_true;
    v_38 = v_36;
v_16:
    v_36 = v_38;
    if (v_36 == nil) goto v_19;
    v_36 = stack[-1];
    if (v_36 == nil) goto v_19;
    goto v_20;
v_19:
    goto v_15;
v_20:
    v_36 = v_37;
    if (!car_legal(v_36)) v_38 = carerror(v_36); else
    v_38 = car(v_36);
    v_36 = stack[-1];
    if (!car_legal(v_36)) v_36 = carerror(v_36); else
    v_36 = car(v_36);
    v_36 = (equal(v_38, v_36) ? lisp_true : nil);
    v_38 = v_36;
    v_36 = stack[-1];
    if (!car_legal(v_36)) v_36 = cdrerror(v_36); else
    v_36 = cdr(v_36);
    stack[-1] = v_36;
    v_36 = v_37;
    if (!car_legal(v_36)) v_36 = cdrerror(v_36); else
    v_36 = cdr(v_36);
    v_37 = v_36;
    goto v_16;
v_15:
    v_36 = v_38;
    return onevalue(v_36);
}



// Code for getmat

static LispObject CC_getmat(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_15, v_16, v_17;
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
    v_15 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // off_mod_reval
    v_15 = (*qfn1(fn))(fn, v_15);
    }
    env = stack[-3];
    stack[-1] = v_15;
    v_15 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // off_mod_reval
    v_15 = (*qfn1(fn))(fn, v_15);
    }
    env = stack[-3];
    stack[0] = v_15;
    v_17 = stack[-2];
    v_16 = stack[-1];
    v_15 = stack[0];
    v_15 = list3(v_17, v_16, v_15);
    env = stack[-3];
    {
        LispObject fn = basic_elt(env, 2); // unchecked_getmatelem
        return (*qfn1(fn))(fn, v_15);
    }
}



// Code for groebcpcompless!?

static LispObject CC_groebcpcomplessW(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_66, v_67, v_68, v_69;
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
    v_66 = qvalue(basic_elt(env, 1)); // !*gsugar
    if (v_66 == nil) goto v_8;
    v_66 = stack[-1];
    if (!car_legal(v_66)) v_66 = cdrerror(v_66); else
    v_66 = cdr(v_66);
    if (!car_legal(v_66)) v_66 = cdrerror(v_66); else
    v_66 = cdr(v_66);
    if (!car_legal(v_66)) v_66 = cdrerror(v_66); else
    v_66 = cdr(v_66);
    if (!car_legal(v_66)) v_67 = carerror(v_66); else
    v_67 = car(v_66);
    v_66 = stack[0];
    if (!car_legal(v_66)) v_66 = cdrerror(v_66); else
    v_66 = cdr(v_66);
    if (!car_legal(v_66)) v_66 = cdrerror(v_66); else
    v_66 = cdr(v_66);
    if (!car_legal(v_66)) v_66 = cdrerror(v_66); else
    v_66 = cdr(v_66);
    if (!car_legal(v_66)) v_66 = carerror(v_66); else
    v_66 = car(v_66);
    stack[-2] = difference2(v_67, v_66);
    env = stack[-3];
    v_66 = stack[-1];
    if (!car_legal(v_66)) v_67 = carerror(v_66); else
    v_67 = car(v_66);
    v_66 = stack[0];
    if (!car_legal(v_66)) v_66 = carerror(v_66); else
    v_66 = car(v_66);
    {   LispObject fn = basic_elt(env, 3); // vevcomp
    v_66 = (*qfn2(fn))(fn, v_67, v_66);
    }
    env = stack[-3];
    v_69 = stack[-2];
    v_68 = v_66;
    v_67 = v_69;
    v_66 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_67 == v_66) goto v_31;
    v_67 = v_69;
    v_66 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
        return Llessp_2(nil, v_67, v_66);
v_31:
    v_67 = v_68;
    v_66 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_67 == v_66) goto v_38;
    v_67 = v_68;
    v_66 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
        return Llessp_2(nil, v_67, v_66);
v_38:
    v_66 = stack[-1];
    if (!car_legal(v_66)) v_66 = cdrerror(v_66); else
    v_66 = cdr(v_66);
    if (!car_legal(v_66)) v_66 = cdrerror(v_66); else
    v_66 = cdr(v_66);
    if (!car_legal(v_66)) v_67 = carerror(v_66); else
    v_67 = car(v_66);
    v_66 = basic_elt(env, 2); // number
    {   LispObject fn = basic_elt(env, 4); // vdpgetprop
    stack[-1] = (*qfn2(fn))(fn, v_67, v_66);
    }
    env = stack[-3];
    v_66 = stack[0];
    if (!car_legal(v_66)) v_66 = cdrerror(v_66); else
    v_66 = cdr(v_66);
    if (!car_legal(v_66)) v_66 = cdrerror(v_66); else
    v_66 = cdr(v_66);
    if (!car_legal(v_66)) v_67 = carerror(v_66); else
    v_67 = car(v_66);
    v_66 = basic_elt(env, 2); // number
    {   LispObject fn = basic_elt(env, 4); // vdpgetprop
    v_66 = (*qfn2(fn))(fn, v_67, v_66);
    }
    {
        LispObject v_73 = stack[-1];
        return Llessp_2(nil, v_73, v_66);
    }
    v_66 = nil;
    goto v_6;
v_8:
    v_66 = stack[-1];
    if (!car_legal(v_66)) v_67 = carerror(v_66); else
    v_67 = car(v_66);
    v_66 = stack[0];
    if (!car_legal(v_66)) v_66 = carerror(v_66); else
    v_66 = car(v_66);
    {
        LispObject fn = basic_elt(env, 5); // vevcompless!?
        return (*qfn2(fn))(fn, v_67, v_66);
    }
    v_66 = nil;
v_6:
    return onevalue(v_66);
}



// Code for vevdif

static LispObject CC_vevdif(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_95 = nil;
    v_94 = stack[-4];
    stack[-1] = v_94;
    v_94 = stack[-3];
    stack[0] = v_94;
v_16:
    v_94 = stack[-1];
    if (v_94 == nil) goto v_19;
    v_94 = stack[0];
    if (v_94 == nil) goto v_19;
    v_94 = v_95;
    if (v_94 == nil) goto v_26;
    else goto v_19;
v_26:
    goto v_20;
v_19:
    goto v_15;
v_20:
    v_94 = stack[-1];
    if (!car_legal(v_94)) v_95 = carerror(v_94); else
    v_95 = car(v_94);
    v_94 = stack[0];
    if (!car_legal(v_94)) v_94 = carerror(v_94); else
    v_94 = car(v_94);
    v_94 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_95) - static_cast<std::uintptr_t>(v_94) + TAG_FIXNUM);
    stack[-2] = v_94;
    v_95 = stack[-2];
    v_94 = stack[-5];
    v_94 = cons(v_95, v_94);
    env = stack[-6];
    stack[-5] = v_94;
    v_95 = stack[-2];
    v_94 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_94 = (static_cast<std::intptr_t>(v_95) < static_cast<std::intptr_t>(v_94)) ? lisp_true : nil;
    v_95 = v_94;
    v_94 = stack[-1];
    if (!car_legal(v_94)) v_94 = cdrerror(v_94); else
    v_94 = cdr(v_94);
    stack[-1] = v_94;
    v_94 = stack[0];
    if (!car_legal(v_94)) v_94 = cdrerror(v_94); else
    v_94 = cdr(v_94);
    stack[0] = v_94;
    goto v_16;
v_15:
    v_94 = v_95;
    if (v_94 == nil) goto v_48;
    else goto v_46;
v_48:
    v_94 = stack[0];
    if (v_94 == nil) goto v_50;
    v_94 = stack[0];
    if (v_94 == nil) goto v_56;
    else goto v_57;
v_56:
    v_94 = lisp_true;
    goto v_55;
v_57:
    v_94 = stack[0];
    if (!car_legal(v_94)) v_95 = carerror(v_94); else
    v_95 = car(v_94);
    v_94 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_95 == v_94) goto v_64;
    else goto v_65;
v_64:
    v_94 = stack[0];
    if (!car_legal(v_94)) v_94 = cdrerror(v_94); else
    v_94 = cdr(v_94);
    {   LispObject fn = basic_elt(env, 4); // vevzero!?1
    v_94 = (*qfn1(fn))(fn, v_94);
    }
    env = stack[-6];
    goto v_63;
v_65:
    v_94 = nil;
    goto v_63;
    v_94 = nil;
v_63:
    goto v_55;
    v_94 = nil;
v_55:
    if (v_94 == nil) goto v_53;
    else goto v_50;
v_53:
    goto v_46;
v_50:
    goto v_47;
v_46:
    v_94 = stack[-4];
    v_94 = Lprint(nil, v_94);
    env = stack[-6];
    v_94 = stack[-3];
    v_94 = Lprint(nil, v_94);
    env = stack[-6];
    v_94 = basic_elt(env, 1); // backtrace
    {   LispObject fn = basic_elt(env, 5); // getd
    v_94 = (*qfn1(fn))(fn, v_94);
    }
    env = stack[-6];
    if (v_94 == nil) goto v_82;
    {   LispObject fn = basic_elt(env, 1); // backtrace
    v_94 = (*qfn0(fn))(fn);
    }
    env = stack[-6];
    goto v_80;
v_82:
v_80:
    v_96 = basic_elt(env, 2); // dipoly
    v_95 = static_cast<LispObject>(80)+TAG_FIXNUM; // 5
    v_94 = basic_elt(env, 3); // "Vevdif, difference would be < 0"
    {
        LispObject fn = basic_elt(env, 6); // rerror
        return (*qfn3(fn))(fn, v_96, v_95, v_94);
    }
v_47:
    v_94 = stack[-5];
    v_95 = Lnreverse(nil, v_94);
    v_94 = stack[-1];
        return Lnconc(nil, v_95, v_94);
    return onevalue(v_94);
}



// Code for red!-ratios2

static LispObject CC_redKratios2(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_63, v_64;
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
    v_63 = stack[-4];
    if (v_63 == nil) goto v_13;
    else goto v_14;
v_13:
    v_63 = nil;
    goto v_12;
v_14:
    v_64 = stack[-2];
    v_63 = stack[-3];
    if (!car_legal(v_63)) v_63 = carerror(v_63); else
    v_63 = car(v_63);
    stack[0] = times2(v_64, v_63);
    env = stack[-6];
    stack[-5] = stack[0];
    v_64 = stack[-1];
    v_63 = stack[-4];
    if (!car_legal(v_63)) v_63 = carerror(v_63); else
    v_63 = car(v_63);
    v_63 = times2(v_64, v_63);
    env = stack[-6];
    if (equal(stack[0], v_63)) goto v_21;
    else goto v_22;
v_21:
    v_64 = stack[-5];
    v_63 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_64 == v_63) goto v_34;
    v_64 = stack[-1];
    v_63 = stack[-2];
    v_64 = Lgcd_2(nil, v_64, v_63);
    env = stack[-6];
    v_63 = stack[-1];
    v_64 = Cremainder(v_64, v_63);
    env = stack[-6];
    v_63 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_63 = (v_64 == v_63 ? lisp_true : nil);
    goto v_32;
v_34:
    v_63 = nil;
    goto v_32;
    v_63 = nil;
v_32:
    goto v_20;
v_22:
    v_63 = nil;
    goto v_20;
    v_63 = nil;
v_20:
    if (v_63 == nil) goto v_18;
    v_64 = stack[-1];
    v_63 = stack[-2];
    {
        LispObject fn = basic_elt(env, 1); // red!-lowest!-terms
        return (*qfn2(fn))(fn, v_64, v_63);
    }
v_18:
    v_63 = stack[-4];
    if (!car_legal(v_63)) stack[0] = cdrerror(v_63); else
    stack[0] = cdr(v_63);
    v_63 = stack[-3];
    if (!car_legal(v_63)) stack[-3] = cdrerror(v_63); else
    stack[-3] = cdr(v_63);
    v_63 = stack[-1];
    v_63 = ncons(v_63);
    env = stack[-6];
    {
        LispObject v_71 = stack[0];
        LispObject v_72 = stack[-3];
        LispObject v_73 = stack[-2];
        LispObject fn = basic_elt(env, 0); // red!-ratios2
        return (*qfn4up(fn))(fn, v_71, v_72, v_73, v_63);
    }
    v_63 = nil;
v_12:
    return onevalue(v_63);
}



// Code for cali_bc_zero!?

static LispObject CC_cali_bc_zeroW(LispObject env,
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
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_37 = v_2;
// end of prologue
    v_36 = v_37;
    if (v_36 == nil) goto v_10;
    else goto v_11;
v_10:
    v_36 = lisp_true;
    goto v_9;
v_11:
    v_38 = v_37;
    v_36 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_36 = (v_38 == v_36 ? lisp_true : nil);
    goto v_9;
    v_36 = nil;
v_9:
    if (v_36 == nil) goto v_7;
    v_36 = lisp_true;
    goto v_5;
v_7:
    v_36 = qvalue(basic_elt(env, 1)); // !*hardzerotest
    if (v_36 == nil) goto v_21;
    v_36 = v_37;
    v_36 = Lconsp(nil, v_36);
    env = stack[0];
    if (v_36 == nil) goto v_21;
    v_36 = v_37;
    {   LispObject fn = basic_elt(env, 2); // prepf
    v_36 = (*qfn1(fn))(fn, v_36);
    }
    env = stack[0];
    {   LispObject fn = basic_elt(env, 3); // simp
    v_36 = (*qfn1(fn))(fn, v_36);
    }
    env = stack[0];
    if (!car_legal(v_36)) v_36 = carerror(v_36); else
    v_36 = car(v_36);
    {   LispObject fn = basic_elt(env, 4); // bc!=simp
    v_36 = (*qfn1(fn))(fn, v_36);
    }
    v_36 = (v_36 == nil ? lisp_true : nil);
    goto v_5;
v_21:
    v_36 = nil;
    goto v_5;
    v_36 = nil;
v_5:
    return onevalue(v_36);
}



// Code for gperm0

static LispObject CC_gperm0(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    v_20 = v_2;
// end of prologue
    v_19 = v_20;
    if (v_19 == nil) goto v_6;
    else goto v_7;
v_6:
    v_19 = nil;
    goto v_5;
v_7:
    v_19 = v_20;
    if (!car_legal(v_19)) stack[0] = cdrerror(v_19); else
    stack[0] = cdr(v_19);
    v_19 = v_20;
    if (!car_legal(v_19)) v_19 = carerror(v_19); else
    v_19 = car(v_19);
    v_19 = ncons(v_19);
    env = stack[-1];
    v_19 = ncons(v_19);
    env = stack[-1];
    {
        LispObject v_22 = stack[0];
        LispObject fn = basic_elt(env, 1); // gperm3
        return (*qfn2(fn))(fn, v_22, v_19);
    }
    v_19 = nil;
v_5:
    return onevalue(v_19);
}



// Code for portable_prin

static LispObject CC_portable_prin(LispObject env,
                         LispObject v_2)
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
// Binding !*ll!*
// FLUIDBIND: reloadenv=5 litvec-offset=1 saveloc=4
{   bind_fluid_stack bind_fluid_var(-5, 1, -4);
    setvalue(basic_elt(env, 1), nil); // !*ll!*
    v_20 = nil;
    v_21 = Llinelength(nil, v_20);
    env = stack[-5];
    v_20 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_20 = difference2(v_21, v_20);
    env = stack[-5];
    setvalue(basic_elt(env, 1), v_20); // !*ll!*
    stack[-2] = stack[-3];
    stack[-1] = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[0] = lisp_true;
    v_20 = nil;
    v_20 = ncons(v_20);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 2); // p_prinl2
    v_20 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_20);
    }
    v_20 = stack[-3];
    ;}  // end of a binding scope
    return onevalue(v_20);
}



// Code for aex_deg

static LispObject CC_aex_deg(LispObject env,
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
        LispObject fn = basic_elt(env, 2); // sfto_vardeg
        return (*qfn2(fn))(fn, v_11, v_10);
    }
}



// Code for ofsf_smwupdknowl

static LispObject CC_ofsf_smwupdknowl(LispObject env, LispObject v_2,
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
        LispObject fn = basic_elt(env, 3); // ofsf_smupdknowl
        return (*qfn4up(fn))(fn, v_37, v_38, v_39, v_26);
    }
    v_26 = nil;
    return onevalue(v_26);
}



// Code for removeg2

static LispObject CC_removeg2(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_130, v_131, v_132, v_133, v_134;
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
    v_130 = stack[-1];
    if (!car_legal(v_130)) v_130 = cdrerror(v_130); else
    v_130 = cdr(v_130);
    if (!car_legal(v_130)) v_130 = cdrerror(v_130); else
    v_130 = cdr(v_130);
    if (!car_legal(v_130)) v_130 = cdrerror(v_130); else
    v_130 = cdr(v_130);
    if (!car_legal(v_130)) v_130 = carerror(v_130); else
    v_130 = car(v_130);
    v_131 = v_130;
    v_130 = stack[0];
    if (!car_legal(v_130)) v_132 = carerror(v_130); else
    v_132 = car(v_130);
    v_130 = basic_elt(env, 1); // g3
    if (v_132 == v_130) goto v_25;
    v_130 = lisp_true;
    goto v_23;
v_25:
    v_132 = v_131;
    v_130 = stack[0];
    if (!car_legal(v_130)) v_130 = cdrerror(v_130); else
    v_130 = cdr(v_130);
    v_130 = Lmemq(nil, v_132, v_130);
    v_130 = (v_130 == nil ? lisp_true : nil);
    goto v_23;
    v_130 = nil;
v_23:
    if (v_130 == nil) goto v_21;
    v_133 = basic_elt(env, 2); // "Edge"
    v_132 = v_131;
    v_131 = basic_elt(env, 3); // "is absent in vertex"
    v_130 = stack[0];
    v_130 = list4(v_133, v_132, v_131, v_130);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 5); // cerror
    v_130 = (*qfn1(fn))(fn, v_130);
    }
    env = stack[-4];
    goto v_19;
v_21:
    v_130 = stack[0];
    {   LispObject fn = basic_elt(env, 6); // revv0
    v_130 = (*qfn2(fn))(fn, v_130, v_131);
    }
    env = stack[-4];
    goto v_19;
    v_130 = nil;
v_19:
    stack[0] = v_130;
    v_131 = stack[0];
    v_130 = basic_elt(env, 4); // qg
    if (!car_legal(v_131)) rplaca_fails(v_131);
    setcar(v_131, v_130);
    v_130 = stack[-2];
    if (!car_legal(v_130)) stack[-3] = carerror(v_130); else
    stack[-3] = car(v_130);
    v_130 = stack[-2];
    if (!car_legal(v_130)) v_130 = cdrerror(v_130); else
    v_130 = cdr(v_130);
    {   LispObject fn = basic_elt(env, 7); // mkcopy
    v_130 = (*qfn1(fn))(fn, v_130);
    }
    env = stack[-4];
    v_130 = cons(stack[-3], v_130);
    env = stack[-4];
    stack[-3] = v_130;
    v_131 = stack[-1];
    v_130 = stack[-3];
    v_130 = Lmember(nil, v_131, v_130);
    if (!car_legal(v_130)) v_130 = carerror(v_130); else
    v_130 = car(v_130);
    v_133 = v_130;
    v_131 = stack[0];
    v_130 = stack[-3];
    v_130 = Lmember(nil, v_131, v_130);
    if (!car_legal(v_130)) v_130 = carerror(v_130); else
    v_130 = car(v_130);
    v_132 = v_130;
    v_130 = stack[-1];
    if (!car_legal(v_130)) v_130 = cdrerror(v_130); else
    v_130 = cdr(v_130);
    if (!car_legal(v_130)) v_130 = cdrerror(v_130); else
    v_130 = cdr(v_130);
    if (!car_legal(v_130)) v_130 = carerror(v_130); else
    v_130 = car(v_130);
    v_134 = v_130;
    v_130 = stack[-1];
    if (!car_legal(v_130)) v_130 = cdrerror(v_130); else
    v_130 = cdr(v_130);
    if (!car_legal(v_130)) v_131 = cdrerror(v_130); else
    v_131 = cdr(v_130);
    v_130 = stack[-1];
    if (!car_legal(v_130)) v_130 = cdrerror(v_130); else
    v_130 = cdr(v_130);
    if (!car_legal(v_130)) v_130 = cdrerror(v_130); else
    v_130 = cdr(v_130);
    if (!car_legal(v_130)) v_130 = cdrerror(v_130); else
    v_130 = cdr(v_130);
    if (!car_legal(v_130)) v_130 = carerror(v_130); else
    v_130 = car(v_130);
    if (!car_legal(v_131)) rplaca_fails(v_131);
    setcar(v_131, v_130);
    v_130 = stack[-1];
    if (!car_legal(v_130)) v_130 = cdrerror(v_130); else
    v_130 = cdr(v_130);
    if (!car_legal(v_130)) v_130 = cdrerror(v_130); else
    v_130 = cdr(v_130);
    if (!car_legal(v_130)) v_131 = cdrerror(v_130); else
    v_131 = cdr(v_130);
    v_130 = stack[0];
    if (!car_legal(v_130)) v_130 = cdrerror(v_130); else
    v_130 = cdr(v_130);
    if (!car_legal(v_130)) v_130 = cdrerror(v_130); else
    v_130 = cdr(v_130);
    if (!car_legal(v_130)) v_130 = carerror(v_130); else
    v_130 = car(v_130);
    if (!car_legal(v_131)) rplaca_fails(v_131);
    setcar(v_131, v_130);
    v_130 = stack[0];
    if (!car_legal(v_130)) v_130 = cdrerror(v_130); else
    v_130 = cdr(v_130);
    if (!car_legal(v_130)) v_130 = cdrerror(v_130); else
    v_130 = cdr(v_130);
    v_131 = v_134;
    if (!car_legal(v_130)) rplaca_fails(v_130);
    setcar(v_130, v_131);
    v_130 = v_133;
    if (!car_legal(v_130)) v_130 = cdrerror(v_130); else
    v_130 = cdr(v_130);
    if (!car_legal(v_130)) v_130 = carerror(v_130); else
    v_130 = car(v_130);
    v_134 = v_130;
    v_130 = v_133;
    if (!car_legal(v_130)) v_131 = cdrerror(v_130); else
    v_131 = cdr(v_130);
    v_130 = v_133;
    if (!car_legal(v_130)) v_130 = cdrerror(v_130); else
    v_130 = cdr(v_130);
    if (!car_legal(v_130)) v_130 = cdrerror(v_130); else
    v_130 = cdr(v_130);
    if (!car_legal(v_130)) v_130 = cdrerror(v_130); else
    v_130 = cdr(v_130);
    if (!car_legal(v_130)) v_130 = carerror(v_130); else
    v_130 = car(v_130);
    if (!car_legal(v_131)) rplaca_fails(v_131);
    setcar(v_131, v_130);
    v_130 = v_133;
    if (!car_legal(v_130)) v_130 = cdrerror(v_130); else
    v_130 = cdr(v_130);
    if (!car_legal(v_130)) v_130 = cdrerror(v_130); else
    v_130 = cdr(v_130);
    if (!car_legal(v_130)) v_131 = cdrerror(v_130); else
    v_131 = cdr(v_130);
    v_130 = v_132;
    if (!car_legal(v_130)) v_130 = cdrerror(v_130); else
    v_130 = cdr(v_130);
    if (!car_legal(v_130)) v_130 = cdrerror(v_130); else
    v_130 = cdr(v_130);
    if (!car_legal(v_130)) v_130 = carerror(v_130); else
    v_130 = car(v_130);
    if (!car_legal(v_131)) rplaca_fails(v_131);
    setcar(v_131, v_130);
    v_130 = v_132;
    if (!car_legal(v_130)) v_130 = cdrerror(v_130); else
    v_130 = cdr(v_130);
    if (!car_legal(v_130)) v_131 = cdrerror(v_130); else
    v_131 = cdr(v_130);
    v_130 = v_132;
    if (!car_legal(v_130)) v_130 = cdrerror(v_130); else
    v_130 = cdr(v_130);
    if (!car_legal(v_130)) v_130 = carerror(v_130); else
    v_130 = car(v_130);
    if (!car_legal(v_131)) rplaca_fails(v_131);
    setcar(v_131, v_130);
    v_130 = v_132;
    if (!car_legal(v_130)) v_130 = cdrerror(v_130); else
    v_130 = cdr(v_130);
    v_131 = v_134;
    if (!car_legal(v_130)) rplaca_fails(v_130);
    setcar(v_130, v_131);
    stack[0] = stack[-2];
    v_130 = stack[-3];
    if (!car_legal(v_130)) v_130 = carerror(v_130); else
    v_130 = car(v_130);
    {   LispObject fn = basic_elt(env, 8); // negsq
    v_131 = (*qfn1(fn))(fn, v_130);
    }
    v_130 = stack[-3];
    if (!car_legal(v_130)) v_130 = cdrerror(v_130); else
    v_130 = cdr(v_130);
    {
        LispObject v_139 = stack[0];
        return list2star(v_139, v_131, v_130);
    }
    return onevalue(v_130);
}



// Code for pasf_susipost

static LispObject CC_pasf_susipost(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_6, v_7;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_6 = v_3;
    v_7 = v_2;
// end of prologue
    v_6 = v_7;
    return onevalue(v_6);
}



// Code for vdp_plist

static LispObject CC_vdp_plist(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_10;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_10 = v_2;
// end of prologue
    if (!car_legal(v_10)) v_10 = cdrerror(v_10); else
    v_10 = cdr(v_10);
    if (!car_legal(v_10)) v_10 = cdrerror(v_10); else
    v_10 = cdr(v_10);
    if (!car_legal(v_10)) v_10 = cdrerror(v_10); else
    v_10 = cdr(v_10);
    if (!car_legal(v_10)) v_10 = cdrerror(v_10); else
    v_10 = cdr(v_10);
    if (!car_legal(v_10)) v_10 = carerror(v_10); else
    v_10 = car(v_10);
    return onevalue(v_10);
}



// Code for mathml2

static LispObject CC_mathml2(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_8;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// end of prologue
    {
        LispObject fn = basic_elt(env, 1); // sub_math
        return (*qfn0(fn))(fn);
    }
    return onevalue(v_8);
}



// Code for setdmode1

static LispObject CC_setdmode1(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_122, v_123, v_124, v_125;
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
    v_123 = v_3;
    stack[-5] = v_2;
// end of prologue
    v_124 = stack[-5];
    v_122 = basic_elt(env, 1); // tag
    v_122 = get(v_124, v_122);
    env = stack[-7];
    stack[-6] = v_122;
    v_122 = qvalue(basic_elt(env, 2)); // dmode!*
    stack[-4] = v_122;
    v_122 = v_123;
    if (v_122 == nil) goto v_16;
    else goto v_17;
v_16:
    v_122 = stack[-4];
    if (v_122 == nil) goto v_21;
    else goto v_22;
v_21:
    v_122 = nil;
    goto v_20;
v_22:
    v_123 = stack[-5];
    v_122 = stack[-4];
    if (!symbolp(v_122)) v_122 = nil;
    else { v_122 = qfastgets(v_122);
           if (v_122 != nil) { v_122 = elt(v_122, 8); // dname
#ifdef RECORD_GET
             if (v_122 != SPID_NOPROP)
                record_get(elt(fastget_names, 8), 1);
             else record_get(elt(fastget_names, 8), 0),
                v_122 = nil; }
           else record_get(elt(fastget_names, 8), 0); }
#else
             if (v_122 == SPID_NOPROP) v_122 = nil; }}
#endif
    stack[-4] = v_122;
    if (v_123 == v_122) goto v_25;
    else goto v_26;
v_25:
    {   LispObject fn = basic_elt(env, 11); // rmsubs
    v_122 = (*qfn0(fn))(fn);
    }
    env = stack[-7];
    v_122 = nil;
    setvalue(basic_elt(env, 2), v_122); // dmode!*
    setvalue(basic_elt(env, 3), v_122); // gdmode!*
    v_122 = stack[-4];
    goto v_20;
v_26:
    v_123 = stack[-5];
    v_122 = stack[-4];
    {
        LispObject fn = basic_elt(env, 12); // offmoderr
        return (*qfn2(fn))(fn, v_123, v_122);
    }
    v_122 = nil;
v_20:
    goto v_9;
v_17:
    v_123 = stack[-5];
    v_122 = basic_elt(env, 4); // (rounded complex!-rounded)
    v_122 = Lmemq(nil, v_123, v_122);
    if (v_122 == nil) goto v_43;
    {   LispObject fn = basic_elt(env, 13); // !!mfefix
    v_122 = (*qfn0(fn))(fn);
    }
    env = stack[-7];
    goto v_41;
v_43:
v_41:
    v_123 = stack[-6];
    v_122 = stack[-4];
    if (v_123 == v_122) goto v_50;
    else goto v_51;
v_50:
    v_122 = stack[-6];
    goto v_9;
v_51:
    goto v_15;
v_15:
    v_123 = stack[-6];
    v_122 = basic_elt(env, 5); // realtype
    v_122 = get(v_123, v_122);
    env = stack[-7];
    stack[-3] = v_122;
    if (v_122 == nil) goto v_57;
    else goto v_58;
v_57:
    v_122 = stack[-6];
    stack[-3] = v_122;
    goto v_56;
v_58:
v_56:
    v_122 = qvalue(basic_elt(env, 6)); // domainlist!*
    stack[-2] = v_122;
v_66:
    v_122 = stack[-2];
    if (v_122 == nil) goto v_70;
    else goto v_71;
v_70:
    goto v_65;
v_71:
    v_122 = stack[-2];
    if (!car_legal(v_122)) v_122 = carerror(v_122); else
    v_122 = car(v_122);
    stack[-1] = v_122;
    v_123 = stack[-1];
    v_122 = basic_elt(env, 7); // !:gi!:
    if (v_123 == v_122) goto v_84;
    v_123 = stack[-1];
    v_122 = stack[-3];
    v_122 = (v_123 == v_122 ? lisp_true : nil);
    v_122 = (v_122 == nil ? lisp_true : nil);
    goto v_82;
v_84:
    v_122 = nil;
    goto v_82;
    v_122 = nil;
v_82:
    if (v_122 == nil) goto v_80;
    v_122 = basic_elt(env, 8); // !*
    stack[0] = Lexplode(nil, v_122);
    env = stack[-7];
    v_122 = stack[-1];
    if (!symbolp(v_122)) v_122 = nil;
    else { v_122 = qfastgets(v_122);
           if (v_122 != nil) { v_122 = elt(v_122, 8); // dname
#ifdef RECORD_GET
             if (v_122 != SPID_NOPROP)
                record_get(elt(fastget_names, 8), 1);
             else record_get(elt(fastget_names, 8), 0),
                v_122 = nil; }
           else record_get(elt(fastget_names, 8), 0); }
#else
             if (v_122 == SPID_NOPROP) v_122 = nil; }}
#endif
    v_122 = Lexplode(nil, v_122);
    env = stack[-7];
    v_122 = Lappend_2(nil, stack[0], v_122);
    env = stack[-7];
    v_122 = Lcompress(nil, v_122);
    env = stack[-7];
    v_123 = Lintern(nil, v_122);
    env = stack[-7];
    v_122 = nil;
    v_122 = Lset(nil, v_123, v_122);
    env = stack[-7];
    goto v_78;
v_80:
v_78:
    v_122 = stack[-2];
    if (!car_legal(v_122)) v_122 = cdrerror(v_122); else
    v_122 = cdr(v_122);
    stack[-2] = v_122;
    goto v_66;
v_65:
    {   LispObject fn = basic_elt(env, 11); // rmsubs
    v_122 = (*qfn0(fn))(fn);
    }
    env = stack[-7];
    v_122 = stack[-4];
    if (!symbolp(v_122)) v_122 = nil;
    else { v_122 = qfastgets(v_122);
           if (v_122 != nil) { v_122 = elt(v_122, 8); // dname
#ifdef RECORD_GET
             if (v_122 != SPID_NOPROP)
                record_get(elt(fastget_names, 8), 1);
             else record_get(elt(fastget_names, 8), 0),
                v_122 = nil; }
           else record_get(elt(fastget_names, 8), 0); }
#else
             if (v_122 == SPID_NOPROP) v_122 = nil; }}
#endif
    stack[-4] = v_122;
    v_122 = stack[-4];
    if (v_122 == nil) goto v_112;
    v_125 = basic_elt(env, 9); // "Domain mode"
    v_124 = stack[-4];
    v_123 = basic_elt(env, 10); // "changed to"
    v_122 = stack[-5];
    v_122 = list4(v_125, v_124, v_123, v_122);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 14); // lprim
    v_122 = (*qfn1(fn))(fn, v_122);
    }
    env = stack[-7];
    goto v_110;
v_112:
v_110:
    v_122 = stack[-6];
    setvalue(basic_elt(env, 2), v_122); // dmode!*
    setvalue(basic_elt(env, 3), v_122); // gdmode!*
    v_122 = stack[-4];
v_9:
    return onevalue(v_122);
}



// Code for sc_minussq

static LispObject CC_sc_minussq(LispObject env,
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
        LispObject fn = basic_elt(env, 1); // minusf
        return (*qfn1(fn))(fn, v_7);
    }
}



// Code for vevlcm

static LispObject CC_vevlcm(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_57, v_58, v_59;
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
    v_59 = nil;
v_10:
    v_57 = stack[-1];
    if (v_57 == nil) goto v_13;
    v_57 = stack[0];
    if (v_57 == nil) goto v_13;
    goto v_14;
v_13:
    goto v_9;
v_14:
    v_57 = stack[-1];
    if (!car_legal(v_57)) v_58 = carerror(v_57); else
    v_58 = car(v_57);
    v_57 = stack[0];
    if (!car_legal(v_57)) v_57 = carerror(v_57); else
    v_57 = car(v_57);
    if ((static_cast<std::intptr_t>(v_58) > static_cast<std::intptr_t>(v_57))) goto v_23;
    else goto v_24;
v_23:
    v_57 = stack[-1];
    if (!car_legal(v_57)) v_57 = carerror(v_57); else
    v_57 = car(v_57);
    goto v_22;
v_24:
    v_57 = stack[0];
    if (!car_legal(v_57)) v_57 = carerror(v_57); else
    v_57 = car(v_57);
    goto v_22;
    v_57 = nil;
v_22:
    v_58 = v_59;
    v_57 = cons(v_57, v_58);
    env = stack[-2];
    v_59 = v_57;
    v_57 = stack[-1];
    if (!car_legal(v_57)) v_57 = cdrerror(v_57); else
    v_57 = cdr(v_57);
    stack[-1] = v_57;
    v_57 = stack[0];
    if (!car_legal(v_57)) v_57 = cdrerror(v_57); else
    v_57 = cdr(v_57);
    stack[0] = v_57;
    goto v_10;
v_9:
    v_57 = v_59;
    v_57 = Lnreverse(nil, v_57);
    env = stack[-2];
    v_59 = v_57;
    v_57 = stack[-1];
    if (v_57 == nil) goto v_45;
    v_58 = v_59;
    v_57 = stack[-1];
    v_57 = Lnconc(nil, v_58, v_57);
    v_59 = v_57;
    goto v_43;
v_45:
    v_57 = stack[0];
    if (v_57 == nil) goto v_51;
    v_58 = v_59;
    v_57 = stack[0];
    v_57 = Lnconc(nil, v_58, v_57);
    v_59 = v_57;
    goto v_43;
v_51:
v_43:
    v_57 = v_59;
    return onevalue(v_57);
}



// Code for mksgnsq

static LispObject CC_mksgnsq(LispObject env,
                         LispObject v_2)
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
    v_29 = v_30;
    {   LispObject fn = basic_elt(env, 1); // evenfree
    v_29 = (*qfn1(fn))(fn, v_29);
    }
    env = stack[-1];
    v_30 = v_29;
    if (v_29 == nil) goto v_6;
    else goto v_7;
v_6:
    v_30 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_29 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_30, v_29);
v_7:
    v_31 = v_30;
    v_29 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_31 == v_29) goto v_13;
    else goto v_14;
v_13:
    v_30 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    v_29 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_30, v_29);
v_14:
    stack[0] = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    v_29 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_29 = cons(v_30, v_29);
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // mk!*sq
    v_29 = (*qfn1(fn))(fn, v_29);
    }
    env = stack[-1];
    v_29 = list2(stack[0], v_29);
    env = stack[-1];
    {
        LispObject fn = basic_elt(env, 3); // simpexpt
        return (*qfn1(fn))(fn, v_29);
    }
    v_29 = nil;
    return onevalue(v_29);
}



// Code for defined_edge

static LispObject CC_defined_edge(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    stack[0] = v_3;
    v_21 = v_2;
// end of prologue
    v_19 = v_21;
    if (!car_legal(v_19)) v_20 = carerror(v_19); else
    v_20 = car(v_19);
    v_19 = qvalue(basic_elt(env, 1)); // old_edge_list
    v_19 = Lassoc(nil, v_20, v_19);
    if (v_19 == nil) goto v_7;
    else goto v_6;
v_7:
    v_19 = v_21;
    if (!car_legal(v_19)) v_20 = carerror(v_19); else
    v_20 = car(v_19);
    v_19 = qvalue(basic_elt(env, 2)); // new_edge_list
    {   LispObject fn = basic_elt(env, 3); // all_edge
    v_21 = (*qfn2(fn))(fn, v_20, v_19);
    }
    env = stack[-1];
    v_20 = nil;
    v_19 = stack[0];
    {
        LispObject fn = basic_elt(env, 4); // defined_all_edge
        return (*qfn3(fn))(fn, v_21, v_20, v_19);
    }
v_6:
    return onevalue(v_19);
}



// Code for rnconc

static LispObject CC_rnconc(LispObject env,
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
    stack[-1] = v_2;
// end of prologue
    v_47 = stack[-1];
    if (v_47 == nil) goto v_7;
    else goto v_8;
v_7:
    v_47 = stack[0];
    goto v_6;
v_8:
    v_47 = qvalue(basic_elt(env, 1)); // !*ncmp
    if (v_47 == nil) goto v_12;
    v_47 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // noncomfp1
    v_47 = (*qfn1(fn))(fn, v_47);
    }
    env = stack[-2];
    if (v_47 == nil) goto v_12;
    v_47 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // noncomfp1
    v_47 = (*qfn1(fn))(fn, v_47);
    }
    env = stack[-2];
    if (v_47 == nil) goto v_12;
    v_48 = stack[-1];
    v_47 = stack[0];
    {
        LispObject fn = basic_elt(env, 3); // addf
        return (*qfn2(fn))(fn, v_48, v_47);
    }
v_12:
    v_47 = stack[-1];
    v_48 = v_47;
v_33:
    v_47 = v_48;
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    if (v_47 == nil) goto v_36;
    else goto v_37;
v_36:
    goto v_32;
v_37:
    v_47 = v_48;
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    v_48 = v_47;
    goto v_33;
v_32:
    v_47 = stack[0];
    if (!car_legal(v_48)) rplacd_fails(v_48);
    setcdr(v_48, v_47);
    v_47 = stack[-1];
    goto v_6;
    v_47 = nil;
v_6:
    return onevalue(v_47);
}



// Code for evalneq

static LispObject CC_evalneq(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // evalequal
    v_9 = (*qfn2(fn))(fn, v_10, v_9);
    }
    v_9 = (v_9 == nil ? lisp_true : nil);
    return onevalue(v_9);
}



// Code for dp_times_bcmo

static LispObject CC_dp_times_bcmo(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    v_57 = v_4;
    stack[-5] = v_3;
    stack[-6] = v_2;
// end of prologue
    stack[-7] = v_57;
    v_57 = stack[-7];
    if (v_57 == nil) goto v_15;
    else goto v_16;
v_15:
    v_57 = nil;
    goto v_10;
v_16:
    v_57 = stack[-7];
    if (!car_legal(v_57)) v_57 = carerror(v_57); else
    v_57 = car(v_57);
    stack[-1] = v_57;
    v_58 = stack[-5];
    v_57 = stack[-1];
    if (!car_legal(v_57)) v_57 = carerror(v_57); else
    v_57 = car(v_57);
    {   LispObject fn = basic_elt(env, 1); // mo_sum
    stack[0] = (*qfn2(fn))(fn, v_58, v_57);
    }
    env = stack[-8];
    v_58 = stack[-6];
    v_57 = stack[-1];
    if (!car_legal(v_57)) v_57 = cdrerror(v_57); else
    v_57 = cdr(v_57);
    {   LispObject fn = basic_elt(env, 2); // cali_bc_prod
    v_57 = (*qfn2(fn))(fn, v_58, v_57);
    }
    env = stack[-8];
    v_57 = cons(stack[0], v_57);
    env = stack[-8];
    v_57 = ncons(v_57);
    env = stack[-8];
    stack[-3] = v_57;
    stack[-4] = v_57;
v_11:
    v_57 = stack[-7];
    if (!car_legal(v_57)) v_57 = cdrerror(v_57); else
    v_57 = cdr(v_57);
    stack[-7] = v_57;
    v_57 = stack[-7];
    if (v_57 == nil) goto v_36;
    else goto v_37;
v_36:
    v_57 = stack[-4];
    goto v_10;
v_37:
    stack[-2] = stack[-3];
    v_57 = stack[-7];
    if (!car_legal(v_57)) v_57 = carerror(v_57); else
    v_57 = car(v_57);
    stack[-1] = v_57;
    v_58 = stack[-5];
    v_57 = stack[-1];
    if (!car_legal(v_57)) v_57 = carerror(v_57); else
    v_57 = car(v_57);
    {   LispObject fn = basic_elt(env, 1); // mo_sum
    stack[0] = (*qfn2(fn))(fn, v_58, v_57);
    }
    env = stack[-8];
    v_58 = stack[-6];
    v_57 = stack[-1];
    if (!car_legal(v_57)) v_57 = cdrerror(v_57); else
    v_57 = cdr(v_57);
    {   LispObject fn = basic_elt(env, 2); // cali_bc_prod
    v_57 = (*qfn2(fn))(fn, v_58, v_57);
    }
    env = stack[-8];
    v_57 = cons(stack[0], v_57);
    env = stack[-8];
    v_57 = ncons(v_57);
    env = stack[-8];
    if (!car_legal(stack[-2])) rplacd_fails(stack[-2]);
    setcdr(stack[-2], v_57);
    v_57 = stack[-3];
    if (!car_legal(v_57)) v_57 = cdrerror(v_57); else
    v_57 = cdr(v_57);
    stack[-3] = v_57;
    goto v_11;
v_10:
    return onevalue(v_57);
}



// Code for ra_budan!-0!-1

static LispObject CC_ra_budanK0K1(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_73, v_74;
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
    v_74 = v_2;
// end of prologue
    v_73 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-1] = v_73;
    v_73 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[0] = v_73;
    v_73 = v_74;
    {   LispObject fn = basic_elt(env, 1); // ra_budan!-transform
    v_73 = (*qfn1(fn))(fn, v_73);
    }
    env = stack[-4];
    stack[-3] = v_73;
v_18:
    v_73 = stack[-3];
    if (v_73 == nil) goto v_21;
    else goto v_22;
v_21:
    goto v_17;
v_22:
    v_73 = stack[-3];
    if (!consp(v_73)) goto v_31;
    else goto v_32;
v_31:
    v_73 = lisp_true;
    goto v_30;
v_32:
    v_73 = stack[-3];
    if (!car_legal(v_73)) v_73 = carerror(v_73); else
    v_73 = car(v_73);
    v_73 = (consp(v_73) ? nil : lisp_true);
    goto v_30;
    v_73 = nil;
v_30:
    if (v_73 == nil) goto v_28;
    v_73 = stack[-3];
    v_74 = v_73;
    v_73 = nil;
    stack[-3] = v_73;
    goto v_26;
v_28:
    v_73 = stack[-3];
    if (!car_legal(v_73)) v_73 = carerror(v_73); else
    v_73 = car(v_73);
    if (!car_legal(v_73)) v_73 = cdrerror(v_73); else
    v_73 = cdr(v_73);
    v_74 = v_73;
    v_73 = stack[-3];
    if (!car_legal(v_73)) v_73 = cdrerror(v_73); else
    v_73 = cdr(v_73);
    stack[-3] = v_73;
    goto v_26;
v_26:
    v_73 = v_74;
    {   LispObject fn = basic_elt(env, 2); // minusf
    v_73 = (*qfn1(fn))(fn, v_73);
    }
    env = stack[-4];
    if (v_73 == nil) goto v_52;
    v_73 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    goto v_50;
v_52:
    v_73 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_50;
    v_73 = nil;
v_50:
    stack[-2] = v_73;
    v_74 = stack[-2];
    v_73 = stack[-1];
    v_74 = times2(v_74, v_73);
    env = stack[-4];
    v_73 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_73 = static_cast<LispObject>(lessp2(v_74, v_73));
    v_73 = v_73 ? lisp_true : nil;
    env = stack[-4];
    if (v_73 == nil) goto v_62;
    v_73 = stack[0];
    v_73 = add1(v_73);
    env = stack[-4];
    stack[0] = v_73;
    goto v_60;
v_62:
v_60:
    v_73 = stack[-2];
    stack[-1] = v_73;
    goto v_18;
v_17:
    v_73 = stack[0];
    return onevalue(v_73);
}



// Code for p_prin

static LispObject CC_p_prin(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_100, v_101;
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
    v_100 = v_2;
// end of prologue
    v_100 = Lexplode(nil, v_100);
    env = stack[-2];
    stack[-1] = v_100;
    v_101 = stack[-1];
    v_100 = basic_elt(env, 1); // !_
    if (!consp(v_101)) goto v_13;
    v_101 = car(v_101);
    if (v_101 == v_100) goto v_12;
    else goto v_13;
v_12:
    v_101 = basic_elt(env, 2); // !!
    v_100 = stack[-1];
    v_100 = cons(v_101, v_100);
    env = stack[-2];
    stack[-1] = v_100;
    goto v_11;
v_13:
v_11:
    v_100 = qvalue(basic_elt(env, 3)); // bldmsg_chars!*
    if (v_100 == nil) goto v_23;
    v_100 = stack[0];
    if (v_100 == nil) goto v_28;
    v_101 = basic_elt(env, 4); // ! 
    v_100 = qvalue(basic_elt(env, 3)); // bldmsg_chars!*
    v_100 = cons(v_101, v_100);
    env = stack[-2];
    setvalue(basic_elt(env, 3), v_100); // bldmsg_chars!*
    goto v_26;
v_28:
v_26:
    v_100 = stack[-1];
    stack[0] = v_100;
v_36:
    v_100 = stack[0];
    if (v_100 == nil) goto v_40;
    else goto v_41;
v_40:
    goto v_35;
v_41:
    v_100 = stack[0];
    if (!car_legal(v_100)) v_100 = carerror(v_100); else
    v_100 = car(v_100);
    v_101 = v_100;
    v_100 = qvalue(basic_elt(env, 3)); // bldmsg_chars!*
    v_100 = cons(v_101, v_100);
    env = stack[-2];
    setvalue(basic_elt(env, 3), v_100); // bldmsg_chars!*
    v_100 = stack[0];
    if (!car_legal(v_100)) v_100 = cdrerror(v_100); else
    v_100 = cdr(v_100);
    stack[0] = v_100;
    goto v_36;
v_35:
    goto v_21;
v_23:
    v_100 = stack[0];
    if (v_100 == nil) goto v_57;
    stack[0] = Lposn(nil);
    env = stack[-2];
    v_100 = stack[-1];
    v_100 = Llength(nil, v_100);
    env = stack[-2];
    v_100 = add1(v_100);
    env = stack[-2];
    v_101 = plus2(stack[0], v_100);
    env = stack[-2];
    v_100 = qvalue(basic_elt(env, 5)); // !*ll!*
    v_100 = static_cast<LispObject>(greaterp2(v_101, v_100));
    v_100 = v_100 ? lisp_true : nil;
    env = stack[-2];
    if (v_100 == nil) goto v_62;
    v_100 = Lterpri(nil);
    env = stack[-2];
    goto v_60;
v_62:
v_60:
    v_100 = basic_elt(env, 6); // " "
    v_100 = Lprinc(nil, v_100);
    env = stack[-2];
    goto v_55;
v_57:
    stack[0] = Lposn(nil);
    env = stack[-2];
    v_100 = stack[-1];
    v_100 = Llength(nil, v_100);
    env = stack[-2];
    v_101 = plus2(stack[0], v_100);
    env = stack[-2];
    v_100 = qvalue(basic_elt(env, 5)); // !*ll!*
    v_100 = static_cast<LispObject>(greaterp2(v_101, v_100));
    v_100 = v_100 ? lisp_true : nil;
    env = stack[-2];
    if (v_100 == nil) goto v_74;
    v_100 = Lterpri(nil);
    env = stack[-2];
    goto v_55;
v_74:
v_55:
    v_100 = stack[-1];
    stack[0] = v_100;
v_85:
    v_100 = stack[0];
    if (v_100 == nil) goto v_89;
    else goto v_90;
v_89:
    goto v_84;
v_90:
    v_100 = stack[0];
    if (!car_legal(v_100)) v_100 = carerror(v_100); else
    v_100 = car(v_100);
    v_100 = Lprinc(nil, v_100);
    env = stack[-2];
    v_100 = stack[0];
    if (!car_legal(v_100)) v_100 = cdrerror(v_100); else
    v_100 = cdr(v_100);
    stack[0] = v_100;
    goto v_85;
v_84:
    goto v_21;
v_21:
    v_100 = nil;
    return onevalue(v_100);
}



// Code for ofsf_entry2at1

static LispObject CC_ofsf_entry2at1(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    v_19 = v_2;
// end of prologue
    v_20 = stack[-1];
    if (!car_legal(v_20)) v_21 = carerror(v_20); else
    v_21 = car(v_20);
    v_20 = v_19;
    v_19 = basic_elt(env, 1); // and
    v_19 = (v_20 == v_19 ? lisp_true : nil);
    {   LispObject fn = basic_elt(env, 2); // ofsf_clnegrel
    stack[-2] = (*qfn2(fn))(fn, v_21, v_19);
    }
    env = stack[-3];
    v_20 = stack[0];
    v_19 = stack[-1];
    if (!car_legal(v_19)) v_19 = cdrerror(v_19); else
    v_19 = cdr(v_19);
    {   LispObject fn = basic_elt(env, 3); // addsq
    v_19 = (*qfn2(fn))(fn, v_20, v_19);
    }
    if (!car_legal(v_19)) v_20 = carerror(v_19); else
    v_20 = car(v_19);
    v_19 = nil;
    {
        LispObject v_25 = stack[-2];
        return list3(v_25, v_20, v_19);
    }
}



// Code for polynommultiplybyvariable

static LispObject CC_polynommultiplybyvariable(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_76, v_77;
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
    v_76 = stack[-2];
    stack[0] = v_76;
v_12:
    v_76 = stack[0];
    if (!car_legal(v_76)) v_76 = carerror(v_76); else
    v_76 = car(v_76);
    if (v_76 == nil) goto v_15;
    else goto v_16;
v_15:
    goto v_11;
v_16:
    v_76 = stack[0];
    if (!car_legal(v_76)) v_77 = carerror(v_76); else
    v_77 = car(v_76);
    v_76 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // monomgetvariabledegree
    v_77 = (*qfn2(fn))(fn, v_77, v_76);
    }
    env = stack[-4];
    v_76 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_76 = Leqn_2(nil, v_77, v_76);
    env = stack[-4];
    if (v_76 == nil) goto v_23;
    v_76 = stack[0];
    if (!car_legal(v_76)) v_77 = carerror(v_76); else
    v_77 = car(v_76);
    v_76 = stack[-3];
    v_76 = cons(v_77, v_76);
    env = stack[-4];
    stack[-3] = v_76;
    v_77 = stack[0];
    v_76 = stack[0];
    if (!car_legal(v_76)) v_76 = cdrerror(v_76); else
    v_76 = cdr(v_76);
    if (!car_legal(v_76)) v_76 = carerror(v_76); else
    v_76 = car(v_76);
    if (!car_legal(v_77)) rplaca_fails(v_77);
    setcar(v_77, v_76);
    v_76 = stack[0];
    if (!car_legal(v_76)) v_76 = cdrerror(v_76); else
    v_76 = cdr(v_76);
    if (!car_legal(v_76)) v_76 = cdrerror(v_76); else
    v_76 = cdr(v_76);
    if (!car_legal(v_77)) rplacd_fails(v_77);
    setcdr(v_77, v_76);
    goto v_21;
v_23:
    v_76 = stack[0];
    if (!car_legal(v_76)) v_76 = cdrerror(v_76); else
    v_76 = cdr(v_76);
    stack[0] = v_76;
    goto v_21;
v_21:
    goto v_12;
v_11:
    v_77 = nil;
    v_76 = stack[-3];
    v_76 = cons(v_77, v_76);
    env = stack[-4];
    stack[-3] = v_76;
    v_76 = stack[-3];
    v_76 = Lreverse(nil, v_76);
    env = stack[-4];
    stack[-3] = v_76;
    v_76 = stack[-3];
    stack[0] = v_76;
v_58:
    v_76 = stack[0];
    if (!car_legal(v_76)) v_76 = carerror(v_76); else
    v_76 = car(v_76);
    if (v_76 == nil) goto v_61;
    else goto v_62;
v_61:
    goto v_57;
v_62:
    v_76 = stack[0];
    if (!car_legal(v_76)) v_77 = carerror(v_76); else
    v_77 = car(v_76);
    v_76 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // monommultiplybyvariable
    v_76 = (*qfn2(fn))(fn, v_77, v_76);
    }
    env = stack[-4];
    v_76 = stack[0];
    if (!car_legal(v_76)) v_76 = cdrerror(v_76); else
    v_76 = cdr(v_76);
    stack[0] = v_76;
    goto v_58;
v_57:
    v_77 = stack[-2];
    v_76 = stack[-3];
    {   LispObject fn = basic_elt(env, 3); // polynomadd
    v_76 = (*qfn2(fn))(fn, v_77, v_76);
    }
    v_76 = nil;
    return onevalue(v_76);
}



// Code for intexprlisp

static LispObject CC_intexprlisp(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // intexprnp
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



// Code for cl_sitheo

static LispObject CC_cl_sitheo(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_57, v_58, v_59;
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
    stack[-1] = nil;
// Binding !*rlsiexpla
// FLUIDBIND: reloadenv=4 litvec-offset=1 saveloc=0
{   bind_fluid_stack bind_fluid_var(-4, 1, 0);
    setvalue(basic_elt(env, 1), nil); // !*rlsiexpla
    v_57 = qvalue(basic_elt(env, 2)); // !*rlsithok
    if (v_57 == nil) goto v_14;
    v_57 = stack[-2];
    goto v_10;
v_14:
v_19:
    v_57 = stack[-2];
    if (v_57 == nil) goto v_22;
    else goto v_23;
v_22:
    goto v_18;
v_23:
    v_57 = stack[-2];
    if (!car_legal(v_57)) v_57 = carerror(v_57); else
    v_57 = car(v_57);
    stack[-3] = v_57;
    v_57 = stack[-2];
    if (!car_legal(v_57)) v_57 = cdrerror(v_57); else
    v_57 = cdr(v_57);
    stack[-2] = v_57;
    v_58 = stack[-3];
    v_57 = nil;
    {   LispObject fn = basic_elt(env, 6); // cl_simplat
    v_57 = (*qfn2(fn))(fn, v_58, v_57);
    }
    env = stack[-4];
    v_59 = v_57;
    v_58 = v_59;
    v_57 = basic_elt(env, 3); // false
    if (v_58 == v_57) goto v_35;
    else goto v_36;
v_35:
    v_57 = basic_elt(env, 4); // inctheo
    stack[-3] = v_57;
    v_57 = nil;
    stack[-2] = v_57;
    goto v_34;
v_36:
    v_58 = v_59;
    v_57 = basic_elt(env, 5); // true
    if (v_58 == v_57) goto v_42;
    v_58 = v_59;
    v_57 = stack[-1];
    v_57 = cons(v_58, v_57);
    env = stack[-4];
    stack[-1] = v_57;
    goto v_34;
v_42:
v_34:
    goto v_19;
v_18:
    v_58 = stack[-3];
    v_57 = basic_elt(env, 4); // inctheo
    if (v_58 == v_57) goto v_50;
    else goto v_51;
v_50:
    v_57 = basic_elt(env, 4); // inctheo
    goto v_10;
v_51:
    v_57 = stack[-1];
v_10:
    ;}  // end of a binding scope
    return onevalue(v_57);
}



// Code for qqe_ofsf_simplat1

static LispObject CC_qqe_ofsf_simplat1(LispObject env,
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
    {   LispObject fn = basic_elt(env, 2); // qqe_simplat1
    v_27 = (*qfn2(fn))(fn, v_28, v_27);
    }
    env = stack[-3];
    stack[-2] = v_27;
    v_28 = stack[-2];
    v_27 = basic_elt(env, 1); // (true false)
    v_27 = Lmemq(nil, v_28, v_27);
    if (v_27 == nil) goto v_13;
    else goto v_11;
v_13:
    v_27 = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // qqe_op
    v_27 = (*qfn1(fn))(fn, v_27);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 4); // qqe_rqopp
    v_27 = (*qfn1(fn))(fn, v_27);
    }
    env = stack[-3];
    if (v_27 == nil) goto v_17;
    else goto v_11;
v_17:
    goto v_12;
v_11:
    v_27 = stack[-2];
    goto v_10;
v_12:
    v_28 = stack[-2];
    v_27 = stack[0];
    {
        LispObject fn = basic_elt(env, 5); // ofsf_simplat1
        return (*qfn2(fn))(fn, v_28, v_27);
    }
    v_27 = nil;
v_10:
    return onevalue(v_27);
}



// Code for sf2ss

static LispObject CC_sf2ss(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[-1] = v_2;
// end of prologue
    v_38 = stack[-1];
    if (!consp(v_38)) goto v_14;
    else goto v_15;
v_14:
    v_38 = lisp_true;
    goto v_13;
v_15:
    v_38 = stack[-1];
    if (!car_legal(v_38)) v_38 = carerror(v_38); else
    v_38 = car(v_38);
    v_38 = (consp(v_38) ? nil : lisp_true);
    goto v_13;
    v_38 = nil;
v_13:
    if (v_38 == nil) goto v_11;
    v_38 = stack[-1];
    goto v_7;
v_11:
    v_38 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // searchpl
    v_38 = (*qfn1(fn))(fn, v_38);
    }
    env = stack[-3];
    stack[-2] = v_38;
    v_38 = stack[-2];
    {   LispObject fn = basic_elt(env, 2); // qsort
    stack[0] = (*qfn1(fn))(fn, v_38);
    }
    env = stack[-3];
    v_38 = stack[-2];
    v_38 = Llength(nil, v_38);
    env = stack[-3];
    v_38 = cons(stack[0], v_38);
    env = stack[-3];
    stack[0] = v_38;
    v_39 = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // sq2sspl
    v_39 = (*qfn2(fn))(fn, v_39, v_38);
    }
    env = stack[-3];
    v_38 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_38 = list2star(stack[0], v_39, v_38);
    env = stack[-3];
    {
        LispObject fn = basic_elt(env, 4); // lx2xx
        return (*qfn1(fn))(fn, v_38);
    }
v_7:
    return onevalue(v_38);
}



setup_type const u14_setup[] =
{
    {"xread1",                  G0W1,     CC_xread1,G2W1,     G3W1,     G4W1},
    {"binomial-coefft-mod-p",   G0W2,     G1W2,     CC_binomialKcoefftKmodKp,G3W2,G4W2},
    {"*kp2f",                   G0W2,     G1W2,     CC_Hkp2f, G3W2,     G4W2},
    {"revalind",                G0W1,     CC_revalind,G2W1,   G3W1,     G4W1},
    {"scalopp",                 G0W1,     CC_scalopp,G2W1,    G3W1,     G4W1},
    {"lalr_reduction_index",    G0W1,     CC_lalr_reduction_index,G2W1,G3W1,G4W1},
    {"rempropss",               G0W2,     G1W2,     CC_rempropss,G3W2,  G4W2},
    {"rl_simpl",                G0W3,     G1W3,     G2W3,     CC_rl_simpl,G4W3},
    {"cl_smmkatl",              G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_cl_smmkatl},
    {"ibalp_vmember",           G0W2,     G1W2,     CC_ibalp_vmember,G3W2,G4W2},
    {"make-univariate-image-mod-p",G0W2,  G1W2,     CC_makeKunivariateKimageKmodKp,G3W2,G4W2},
    {"minusp:",                 G0W1,     CC_minuspT,G2W1,    G3W1,     G4W1},
    {"isimplicit",              G0W1,     CC_isimplicit,G2W1, G3W1,     G4W1},
    {"getmat",                  G0W3,     G1W3,     G2W3,     CC_getmat,G4W3},
    {"groebcpcompless?",        G0W2,     G1W2,     CC_groebcpcomplessW,G3W2,G4W2},
    {"vevdif",                  G0W2,     G1W2,     CC_vevdif,G3W2,     G4W2},
    {"red-ratios2",             G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_redKratios2},
    {"cali_bc_zero?",           G0W1,     CC_cali_bc_zeroW,G2W1,G3W1,   G4W1},
    {"gperm0",                  G0W1,     CC_gperm0,G2W1,     G3W1,     G4W1},
    {"portable_prin",           G0W1,     CC_portable_prin,G2W1,G3W1,   G4W1},
    {"aex_deg",                 G0W2,     G1W2,     CC_aex_deg,G3W2,    G4W2},
    {"ofsf_smwupdknowl",        G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_ofsf_smwupdknowl},
    {"removeg2",                G0W3,     G1W3,     G2W3,     CC_removeg2,G4W3},
    {"pasf_susipost",           G0W2,     G1W2,     CC_pasf_susipost,G3W2,G4W2},
    {"vdp_plist",               G0W1,     CC_vdp_plist,G2W1,  G3W1,     G4W1},
    {"mathml2",                 CC_mathml2,G1W0,    G2W0,     G3W0,     G4W0},
    {"setdmode1",               G0W2,     G1W2,     CC_setdmode1,G3W2,  G4W2},
    {"sc_minussq",              G0W1,     CC_sc_minussq,G2W1, G3W1,     G4W1},
    {"vevlcm",                  G0W2,     G1W2,     CC_vevlcm,G3W2,     G4W2},
    {"mksgnsq",                 G0W1,     CC_mksgnsq,G2W1,    G3W1,     G4W1},
    {"defined_edge",            G0W2,     G1W2,     CC_defined_edge,G3W2,G4W2},
    {"rnconc",                  G0W2,     G1W2,     CC_rnconc,G3W2,     G4W2},
    {"evalneq",                 G0W2,     G1W2,     CC_evalneq,G3W2,    G4W2},
    {"dp_times_bcmo",           G0W3,     G1W3,     G2W3,     CC_dp_times_bcmo,G4W3},
    {"ra_budan-0-1",            G0W1,     CC_ra_budanK0K1,G2W1,G3W1,    G4W1},
    {"p_prin",                  G0W2,     G1W2,     CC_p_prin,G3W2,     G4W2},
    {"ofsf_entry2at1",          G0W3,     G1W3,     G2W3,     CC_ofsf_entry2at1,G4W3},
    {"polynommultiplybyvariable",G0W2,    G1W2,     CC_polynommultiplybyvariable,G3W2,G4W2},
    {"intexprlisp",             G0W2,     G1W2,     CC_intexprlisp,G3W2,G4W2},
    {"cl_sitheo",               G0W1,     CC_cl_sitheo,G2W1,  G3W1,     G4W1},
    {"qqe_ofsf_simplat1",       G0W2,     G1W2,     CC_qqe_ofsf_simplat1,G3W2,G4W2},
    {"sf2ss",                   G0W1,     CC_sf2ss, G2W1,     G3W1,     G4W1},
    {nullptr, 
        reinterpret_cast<no_args *>(
            reinterpret_cast<uintptr_t>("u14")),
        reinterpret_cast<one_arg *>(
            reinterpret_cast<uintptr_t>("72515 9525852 89327")),
        nullptr, nullptr, nullptr}
};

// end of generated code
