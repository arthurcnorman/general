
// $destdir/u11.c        Machine generated C code

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


// Code for form1

static LispObject CC_form1(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_353, v_354, v_355;
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
v_1:
    v_353 = stack[-3];
    if (!consp(v_353)) goto v_12;
    else goto v_13;
v_12:
    v_353 = stack[-3];
    if (symbolp(v_353)) goto v_18;
    v_353 = stack[-3];
    goto v_16;
v_18:
    v_354 = stack[-3];
    v_353 = basic_elt(env, 1); // ed
    if (v_354 == v_353) goto v_21;
    else goto v_22;
v_21:
    v_353 = stack[-3];
    return ncons(v_353);
v_22:
    v_353 = stack[-3];
    if (!symbolp(v_353)) v_353 = nil;
    else { v_353 = qfastgets(v_353);
           if (v_353 != nil) { v_353 = elt(v_353, 48); // modefn
#ifdef RECORD_GET
             if (v_353 == SPID_NOPROP)
                record_get(elt(fastget_names, 48), 0),
                v_353 = nil;
             else record_get(elt(fastget_names, 48), 1),
                v_353 = lisp_true; }
           else record_get(elt(fastget_names, 48), 0); }
#else
             if (v_353 == SPID_NOPROP) v_353 = nil; else v_353 = lisp_true; }}
#endif
    if (v_353 == nil) goto v_28;
    v_353 = stack[-3];
    {
        LispObject fn = basic_elt(env, 23); // set!-global!-mode
        return (*qfn1(fn))(fn, v_353);
    }
v_28:
    v_354 = stack[-1];
    v_353 = basic_elt(env, 2); // idfn
    v_353 = get(v_354, v_353);
    stack[-4] = v_353;
    if (v_353 == nil) goto v_34;
    v_355 = stack[-4];
    v_354 = stack[-3];
    v_353 = stack[-2];
        return Lapply2(nil, v_355, v_354, v_353);
v_34:
    v_353 = stack[-3];
    goto v_16;
    v_353 = nil;
v_16:
    goto v_9;
v_13:
    v_353 = stack[-3];
    if (!car_legal(v_353)) v_353 = carerror(v_353); else
    v_353 = car(v_353);
    if (!consp(v_353)) goto v_46;
    v_355 = stack[-3];
    v_354 = stack[-2];
    v_353 = stack[-1];
    {
        LispObject fn = basic_elt(env, 24); // form2
        return (*qfn3(fn))(fn, v_355, v_354, v_353);
    }
v_46:
    v_353 = stack[-3];
    if (!car_legal(v_353)) v_353 = carerror(v_353); else
    v_353 = car(v_353);
    if (symbolp(v_353)) goto v_54;
    v_353 = stack[-3];
    if (!car_legal(v_353)) v_354 = carerror(v_353); else
    v_354 = car(v_353);
    v_353 = basic_elt(env, 3); // "operator"
    {   LispObject fn = basic_elt(env, 25); // typerr
    v_353 = (*qfn2(fn))(fn, v_354, v_353);
    }
    env = stack[-5];
    goto v_11;
v_54:
    v_353 = stack[-3];
    if (!car_legal(v_353)) v_354 = carerror(v_353); else
    v_354 = car(v_353);
    v_353 = basic_elt(env, 4); // comment
    if (v_354 == v_353) goto v_61;
    else goto v_62;
v_61:
    v_353 = stack[-3];
    {   LispObject fn = basic_elt(env, 26); // lastpair
    v_353 = (*qfn1(fn))(fn, v_353);
    }
    env = stack[-5];
    if (!car_legal(v_353)) v_355 = carerror(v_353); else
    v_355 = car(v_353);
    v_354 = stack[-2];
    v_353 = stack[-1];
    stack[-3] = v_355;
    stack[-2] = v_354;
    stack[-1] = v_353;
    goto v_1;
v_62:
    v_353 = stack[-3];
    if (!car_legal(v_353)) v_354 = carerror(v_353); else
    v_354 = car(v_353);
    v_353 = basic_elt(env, 5); // noform
    v_353 = Lflagp(nil, v_354, v_353);
    env = stack[-5];
    if (v_353 == nil) goto v_73;
    v_353 = stack[-3];
    goto v_9;
v_73:
    v_353 = stack[-3];
    if (!car_legal(v_353)) v_353 = carerror(v_353); else
    v_353 = car(v_353);
    {   LispObject fn = basic_elt(env, 27); // arrayp
    v_353 = (*qfn1(fn))(fn, v_353);
    }
    env = stack[-5];
    if (v_353 == nil) goto v_80;
    v_354 = stack[-1];
    v_353 = basic_elt(env, 6); // symbolic
    if (v_354 == v_353) goto v_85;
    else goto v_80;
v_85:
    stack[0] = basic_elt(env, 7); // getel
    v_355 = stack[-3];
    v_354 = stack[-2];
    v_353 = stack[-1];
    {   LispObject fn = basic_elt(env, 28); // intargfn
    v_353 = (*qfn3(fn))(fn, v_355, v_354, v_353);
    }
    {
        LispObject v_361 = stack[0];
        return list2(v_361, v_353);
    }
v_80:
    v_353 = stack[-3];
    if (!car_legal(v_353)) v_353 = cdrerror(v_353); else
    v_353 = cdr(v_353);
    v_353 = Lconsp(nil, v_353);
    env = stack[-5];
    if (v_353 == nil) goto v_95;
    v_353 = stack[-3];
    if (!car_legal(v_353)) v_353 = carerror(v_353); else
    v_353 = car(v_353);
    if (!symbolp(v_353)) v_354 = nil;
    else { v_354 = qfastgets(v_353);
           if (v_354 != nil) { v_354 = elt(v_354, 2); // rtype
#ifdef RECORD_GET
             if (v_354 != SPID_NOPROP)
                record_get(elt(fastget_names, 2), 1);
             else record_get(elt(fastget_names, 2), 0),
                v_354 = nil; }
           else record_get(elt(fastget_names, 2), 0); }
#else
             if (v_354 == SPID_NOPROP) v_354 = nil; }}
#endif
    v_353 = basic_elt(env, 8); // vector
    if (v_354 == v_353) goto v_103;
    else goto v_104;
v_103:
    v_353 = lisp_true;
    goto v_102;
v_104:
    v_353 = stack[-3];
    if (!car_legal(v_353)) v_353 = cdrerror(v_353); else
    v_353 = cdr(v_353);
    if (!car_legal(v_353)) v_353 = carerror(v_353); else
    v_353 = car(v_353);
    v_353 = Lsimple_vectorp(nil, v_353);
    env = stack[-5];
    if (v_353 == nil) goto v_114;
    else goto v_113;
v_114:
    v_353 = stack[-3];
    if (!car_legal(v_353)) v_353 = cdrerror(v_353); else
    v_353 = cdr(v_353);
    if (!car_legal(v_353)) v_354 = carerror(v_353); else
    v_354 = car(v_353);
    v_353 = basic_elt(env, 9); // vecfn
    v_353 = Lflagpcar(nil, v_354, v_353);
    env = stack[-5];
v_113:
    goto v_102;
    v_353 = nil;
v_102:
    if (v_353 == nil) goto v_95;
    v_355 = stack[-3];
    v_354 = stack[-2];
    v_353 = stack[-1];
    {
        LispObject fn = basic_elt(env, 29); // getvect
        return (*qfn3(fn))(fn, v_355, v_354, v_353);
    }
v_95:
    v_353 = stack[-3];
    if (!car_legal(v_353)) v_353 = carerror(v_353); else
    v_353 = car(v_353);
    if (!symbolp(v_353)) v_353 = nil;
    else { v_353 = qfastgets(v_353);
           if (v_353 != nil) { v_353 = elt(v_353, 48); // modefn
#ifdef RECORD_GET
             if (v_353 == SPID_NOPROP)
                record_get(elt(fastget_names, 48), 0),
                v_353 = nil;
             else record_get(elt(fastget_names, 48), 1),
                v_353 = lisp_true; }
           else record_get(elt(fastget_names, 48), 0); }
#else
             if (v_353 == SPID_NOPROP) v_353 = nil; else v_353 = lisp_true; }}
#endif
    if (v_353 == nil) goto v_129;
    v_353 = stack[-3];
    if (!car_legal(v_353)) v_353 = cdrerror(v_353); else
    v_353 = cdr(v_353);
    if (!car_legal(v_353)) stack[0] = carerror(v_353); else
    stack[0] = car(v_353);
    v_353 = stack[-3];
    if (!car_legal(v_353)) v_353 = carerror(v_353); else
    v_353 = car(v_353);
    v_353 = ncons(v_353);
    env = stack[-5];
    {
        LispObject v_362 = stack[0];
        LispObject v_363 = stack[-2];
        LispObject v_364 = stack[-1];
        LispObject fn = basic_elt(env, 30); // convertmode
        return (*qfn4up(fn))(fn, v_362, v_363, v_364, v_353);
    }
v_129:
    v_353 = stack[-3];
    if (!car_legal(v_353)) v_354 = carerror(v_353); else
    v_354 = car(v_353);
    v_353 = basic_elt(env, 10); // formfn
    v_353 = get(v_354, v_353);
    env = stack[-5];
    stack[-4] = v_353;
    if (v_353 == nil) goto v_143;
    stack[0] = stack[-4];
    v_353 = stack[-1];
    v_353 = ncons(v_353);
    env = stack[-5];
    v_354 = Lapply3(nil, stack[0], stack[-3], stack[-2], v_353);
    env = stack[-5];
    v_353 = stack[-1];
    {
        LispObject fn = basic_elt(env, 31); // macrochk
        return (*qfn2(fn))(fn, v_354, v_353);
    }
v_143:
    v_353 = stack[-3];
    if (!car_legal(v_353)) v_353 = carerror(v_353); else
    v_353 = car(v_353);
    if (!symbolp(v_353)) v_354 = nil;
    else { v_354 = qfastgets(v_353);
           if (v_354 != nil) { v_354 = elt(v_354, 36); // stat
#ifdef RECORD_GET
             if (v_354 != SPID_NOPROP)
                record_get(elt(fastget_names, 36), 1);
             else record_get(elt(fastget_names, 36), 0),
                v_354 = nil; }
           else record_get(elt(fastget_names, 36), 0); }
#else
             if (v_354 == SPID_NOPROP) v_354 = nil; }}
#endif
    v_353 = basic_elt(env, 11); // rlis
    if (v_354 == v_353) goto v_156;
    else goto v_157;
v_156:
    v_355 = stack[-3];
    v_354 = stack[-2];
    v_353 = stack[-1];
    {   LispObject fn = basic_elt(env, 32); // formrlis
    v_354 = (*qfn3(fn))(fn, v_355, v_354, v_353);
    }
    env = stack[-5];
    v_353 = stack[-1];
    {
        LispObject fn = basic_elt(env, 31); // macrochk
        return (*qfn2(fn))(fn, v_354, v_353);
    }
v_157:
    v_353 = stack[-3];
    if (!car_legal(v_353)) v_354 = carerror(v_353); else
    v_354 = car(v_353);
    v_353 = basic_elt(env, 12); // !*comma!*
    if (v_354 == v_353) goto v_168;
    else goto v_169;
v_168:
    v_353 = stack[-3];
    if (!car_legal(v_353)) v_353 = cdrerror(v_353); else
    v_353 = cdr(v_353);
    if (!car_legal(v_353)) v_353 = carerror(v_353); else
    v_353 = car(v_353);
    if (!consp(v_353)) goto v_180;
    v_353 = stack[-3];
    if (!car_legal(v_353)) v_353 = cdrerror(v_353); else
    v_353 = cdr(v_353);
    if (!car_legal(v_353)) v_353 = cdrerror(v_353); else
    v_353 = cdr(v_353);
    if (!car_legal(v_353)) v_353 = carerror(v_353); else
    v_353 = car(v_353);
    if (!consp(v_353)) goto v_186;
    else goto v_187;
v_186:
    v_353 = stack[-3];
    if (!car_legal(v_353)) v_353 = cdrerror(v_353); else
    v_353 = cdr(v_353);
    if (!car_legal(v_353)) v_353 = carerror(v_353); else
    v_353 = car(v_353);
    if (!car_legal(v_353)) v_354 = carerror(v_353); else
    v_354 = car(v_353);
    v_353 = basic_elt(env, 13); // type
    v_353 = Lflagp(nil, v_354, v_353);
    env = stack[-5];
    goto v_185;
v_187:
    v_353 = nil;
    goto v_185;
    v_353 = nil;
v_185:
    goto v_178;
v_180:
    v_353 = nil;
    goto v_178;
    v_353 = nil;
v_178:
    if (v_353 == nil) goto v_176;
    v_353 = stack[-3];
    if (!car_legal(v_353)) v_353 = cdrerror(v_353); else
    v_353 = cdr(v_353);
    if (!car_legal(v_353)) v_353 = carerror(v_353); else
    v_353 = car(v_353);
    if (!car_legal(v_353)) v_353 = carerror(v_353); else
    v_353 = car(v_353);
    {   LispObject fn = basic_elt(env, 33); // blocktyperr
    v_353 = (*qfn1(fn))(fn, v_353);
    }
    env = stack[-5];
    goto v_174;
v_176:
    stack[-4] = basic_elt(env, 14); // rlisp
    stack[0] = static_cast<LispObject>(160)+TAG_FIXNUM; // 10
    v_354 = basic_elt(env, 15); // "Syntax error: , invalid after"
    v_353 = stack[-3];
    if (!car_legal(v_353)) v_353 = cdrerror(v_353); else
    v_353 = cdr(v_353);
    if (!car_legal(v_353)) v_353 = carerror(v_353); else
    v_353 = car(v_353);
    v_353 = list2(v_354, v_353);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 34); // rerror
    v_353 = (*qfn3(fn))(fn, stack[-4], stack[0], v_353);
    }
    env = stack[-5];
    goto v_174;
v_174:
    goto v_11;
v_169:
v_11:
    v_354 = stack[-1];
    v_353 = basic_elt(env, 6); // symbolic
    if (v_354 == v_353) goto v_225;
    else goto v_226;
v_225:
    v_353 = lisp_true;
    goto v_224;
v_226:
    v_353 = stack[-3];
    if (!car_legal(v_353)) v_353 = carerror(v_353); else
    v_353 = car(v_353);
    if (!symbolp(v_353)) v_353 = nil;
    else { v_353 = qfastgets(v_353);
           if (v_353 != nil) { v_353 = elt(v_353, 59); // opfn
#ifdef RECORD_GET
             if (v_353 == SPID_NOPROP)
                record_get(elt(fastget_names, 59), 0),
                v_353 = nil;
             else record_get(elt(fastget_names, 59), 1),
                v_353 = lisp_true; }
           else record_get(elt(fastget_names, 59), 0); }
#else
             if (v_353 == SPID_NOPROP) v_353 = nil; else v_353 = lisp_true; }}
#endif
    goto v_224;
    v_353 = nil;
v_224:
    if (v_353 == nil) goto v_222;
    v_353 = stack[-3];
    {   LispObject fn = basic_elt(env, 35); // argnochk
    v_353 = (*qfn1(fn))(fn, v_353);
    }
    env = stack[-5];
    goto v_220;
v_222:
v_220:
    v_353 = stack[-3];
    if (!car_legal(v_353)) v_355 = cdrerror(v_353); else
    v_355 = cdr(v_353);
    v_354 = stack[-2];
    v_353 = stack[-1];
    {   LispObject fn = basic_elt(env, 36); // formlis
    v_353 = (*qfn3(fn))(fn, v_355, v_354, v_353);
    }
    env = stack[-5];
    stack[-4] = v_353;
    v_354 = stack[-4];
    v_353 = stack[-3];
    if (!car_legal(v_353)) v_353 = cdrerror(v_353); else
    v_353 = cdr(v_353);
    if (equal(v_354, v_353)) goto v_244;
    else goto v_245;
v_244:
    v_353 = stack[-3];
    goto v_243;
v_245:
    v_353 = stack[-3];
    if (!car_legal(v_353)) v_354 = carerror(v_353); else
    v_354 = car(v_353);
    v_353 = stack[-4];
    v_353 = cons(v_354, v_353);
    env = stack[-5];
    goto v_243;
    v_353 = nil;
v_243:
    stack[0] = v_353;
    v_354 = stack[-1];
    v_353 = basic_elt(env, 6); // symbolic
    if (v_354 == v_353) goto v_262;
    else goto v_263;
v_262:
    v_353 = lisp_true;
    goto v_261;
v_263:
    v_353 = stack[-3];
    if (!car_legal(v_353)) v_353 = carerror(v_353); else
    v_353 = car(v_353);
    if (!symbolp(v_353)) v_353 = nil;
    else { v_353 = qfastgets(v_353);
           if (v_353 != nil) { v_353 = elt(v_353, 36); // stat
#ifdef RECORD_GET
             if (v_353 != SPID_NOPROP)
                record_get(elt(fastget_names, 36), 1);
             else record_get(elt(fastget_names, 36), 0),
                v_353 = nil; }
           else record_get(elt(fastget_names, 36), 0); }
#else
             if (v_353 == SPID_NOPROP) v_353 = nil; }}
#endif
    if (v_353 == nil) goto v_271;
    else goto v_270;
v_271:
    v_353 = stack[-3];
    if (!car_legal(v_353)) v_353 = cdrerror(v_353); else
    v_353 = cdr(v_353);
    if (v_353 == nil) goto v_280;
    else goto v_281;
v_280:
    v_353 = nil;
    goto v_279;
v_281:
    v_353 = stack[-3];
    if (!car_legal(v_353)) v_353 = cdrerror(v_353); else
    v_353 = cdr(v_353);
    if (!car_legal(v_353)) v_354 = carerror(v_353); else
    v_354 = car(v_353);
    v_353 = basic_elt(env, 16); // quote
    if (!consp(v_354)) goto v_290;
    v_354 = car(v_354);
    if (v_354 == v_353) goto v_289;
    else goto v_290;
v_289:
    v_353 = qvalue(basic_elt(env, 17)); // !*micro!-version
    if (v_353 == nil) goto v_298;
    else goto v_299;
v_298:
    v_353 = nil;
    goto v_297;
v_299:
    v_353 = qvalue(basic_elt(env, 18)); // !*defn
    v_353 = (v_353 == nil ? lisp_true : nil);
    goto v_297;
    v_353 = nil;
v_297:
    v_353 = (v_353 == nil ? lisp_true : nil);
    goto v_288;
v_290:
    v_353 = nil;
    goto v_288;
    v_353 = nil;
v_288:
    goto v_279;
    v_353 = nil;
v_279:
    if (v_353 == nil) goto v_277;
    else goto v_276;
v_277:
    v_354 = stack[0];
    v_353 = stack[-2];
    {   LispObject fn = basic_elt(env, 37); // intexprnp
    v_353 = (*qfn2(fn))(fn, v_354, v_353);
    }
    env = stack[-5];
    if (v_353 == nil) goto v_312;
    else goto v_313;
v_312:
    v_353 = nil;
    goto v_311;
v_313:
    v_353 = qvalue(basic_elt(env, 19)); // !*composites
    if (v_353 == nil) goto v_322;
    else goto v_323;
v_322:
    v_354 = qvalue(basic_elt(env, 20)); // current!-modulus
    v_353 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_353 = (v_354 == v_353 ? lisp_true : nil);
    goto v_321;
v_323:
    v_353 = nil;
    goto v_321;
    v_353 = nil;
v_321:
    goto v_311;
    v_353 = nil;
v_311:
v_276:
v_270:
    goto v_261;
    v_353 = nil;
v_261:
    if (v_353 == nil) goto v_259;
    v_354 = stack[0];
    v_353 = stack[-1];
    {
        LispObject fn = basic_elt(env, 31); // macrochk
        return (*qfn2(fn))(fn, v_354, v_353);
    }
v_259:
    v_354 = stack[-1];
    v_353 = basic_elt(env, 21); // algebraic
    if (v_354 == v_353) goto v_335;
    v_353 = basic_elt(env, 21); // algebraic
    v_353 = ncons(v_353);
    env = stack[-5];
    {
        LispObject v_365 = stack[0];
        LispObject v_366 = stack[-2];
        LispObject v_367 = stack[-1];
        LispObject fn = basic_elt(env, 30); // convertmode
        return (*qfn4up(fn))(fn, v_365, v_366, v_367, v_353);
    }
v_335:
    stack[0] = basic_elt(env, 22); // list
    v_353 = stack[-3];
    if (!car_legal(v_353)) v_354 = carerror(v_353); else
    v_354 = car(v_353);
    v_353 = stack[-2];
    {   LispObject fn = basic_elt(env, 38); // algid
    v_354 = (*qfn2(fn))(fn, v_354, v_353);
    }
    v_353 = stack[-4];
    {
        LispObject v_368 = stack[0];
        return list2star(v_368, v_354, v_353);
    }
    v_353 = nil;
v_9:
    return onevalue(v_353);
}



// Code for ord

static LispObject CC_ord(LispObject env,
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
    v_19 = qvalue(basic_elt(env, 1)); // ordering
    v_18 = basic_elt(env, 2); // lex
    if (v_19 == v_18) goto v_6;
    else goto v_7;
v_6:
    v_18 = basic_elt(env, 3); // plus
    v_19 = v_20;
    v_18 = cons(v_18, v_19);
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 4); // eval
        return (*qfn1(fn))(fn, v_18);
    }
v_7:
    v_18 = v_20;
    if (!car_legal(v_18)) v_18 = carerror(v_18); else
    v_18 = car(v_18);
    goto v_5;
    v_18 = nil;
v_5:
    return onevalue(v_18);
}



// Code for !*id2num

static LispObject CC_Hid2num(LispObject env,
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
    v_17 = qvalue(basic_elt(env, 1)); // pair_id_num!*
    v_16 = Lassoc(nil, v_16, v_17);
    v_17 = v_16;
    if (v_16 == nil) goto v_10;
    v_16 = v_17;
    if (!car_legal(v_16)) v_16 = cdrerror(v_16); else
    v_16 = cdr(v_16);
    goto v_6;
v_10:
    v_16 = nil;
v_6:
    return onevalue(v_16);
}



// Code for sc_kern

static LispObject CC_sc_kern(LispObject env,
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
    v_11 = v_2;
// end of prologue
    stack[0] = qvalue(basic_elt(env, 1)); // g_sc_ve
    v_11 = sub1(v_11);
    env = stack[-1];
    v_11 = Lgetv(nil, stack[0], v_11);
    if (!car_legal(v_11)) v_11 = cdrerror(v_11); else
    v_11 = cdr(v_11);
    if (!car_legal(v_11)) v_11 = cdrerror(v_11); else
    v_11 = cdr(v_11);
    if (!car_legal(v_11)) v_11 = carerror(v_11); else
    v_11 = car(v_11);
    return onevalue(v_11);
}



// Code for list_assoc

static LispObject CC_list_assoc(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_25, v_26, v_27, v_28;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_26 = v_3;
    v_27 = v_2;
// end of prologue
v_7:
    v_25 = v_26;
    if (v_25 == nil) goto v_10;
    else goto v_11;
v_10:
    v_25 = v_26;
    goto v_6;
v_11:
    v_25 = v_26;
    if (!car_legal(v_25)) v_25 = carerror(v_25); else
    v_25 = car(v_25);
    if (!car_legal(v_25)) v_28 = carerror(v_25); else
    v_28 = car(v_25);
    v_25 = v_27;
    if (equal(v_28, v_25)) goto v_14;
    else goto v_15;
v_14:
    v_25 = v_26;
    goto v_6;
v_15:
    v_25 = v_26;
    if (!car_legal(v_25)) v_25 = cdrerror(v_25); else
    v_25 = cdr(v_25);
    v_26 = v_25;
    goto v_7;
    v_25 = nil;
v_6:
    return onevalue(v_25);
}



// Code for get_action_without_lookahead

static LispObject CC_get_action_without_lookahead(LispObject env,
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
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_21 = v_2;
// end of prologue
    v_22 = qvalue(basic_elt(env, 1)); // parser_action_table
    v_21 = Lgetv(nil, v_22, v_21);
    v_22 = v_21;
    v_21 = v_22;
    if (!car_legal(v_21)) v_21 = carerror(v_21); else
    v_21 = car(v_21);
    if (v_21 == nil) goto v_12;
    else goto v_13;
v_12:
    v_21 = v_22;
    if (!car_legal(v_21)) v_21 = cdrerror(v_21); else
    v_21 = cdr(v_21);
    goto v_6;
v_13:
    v_21 = nil;
    goto v_6;
    v_21 = nil;
v_6:
    return onevalue(v_21);
}



// Code for revv0

static LispObject CC_revv0(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_47, v_48, v_49, v_50, v_51;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_49 = v_3;
    v_50 = v_2;
// end of prologue
v_1:
    v_47 = v_50;
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    if (!car_legal(v_47)) v_48 = carerror(v_47); else
    v_48 = car(v_47);
    v_47 = v_49;
    if (v_48 == v_47) goto v_7;
    else goto v_8;
v_7:
    v_47 = v_50;
    goto v_6;
v_8:
    v_47 = v_50;
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    if (!car_legal(v_47)) v_47 = carerror(v_47); else
    v_47 = car(v_47);
    v_51 = v_47;
    v_47 = v_50;
    if (!car_legal(v_47)) v_48 = cdrerror(v_47); else
    v_48 = cdr(v_47);
    v_47 = v_50;
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    if (!car_legal(v_47)) v_47 = carerror(v_47); else
    v_47 = car(v_47);
    if (!car_legal(v_48)) rplaca_fails(v_48);
    setcar(v_48, v_47);
    v_47 = v_50;
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    if (!car_legal(v_47)) v_48 = cdrerror(v_47); else
    v_48 = cdr(v_47);
    v_47 = v_50;
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    if (!car_legal(v_47)) v_47 = carerror(v_47); else
    v_47 = car(v_47);
    if (!car_legal(v_48)) rplaca_fails(v_48);
    setcar(v_48, v_47);
    v_47 = v_50;
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    v_48 = v_51;
    if (!car_legal(v_47)) rplaca_fails(v_47);
    setcar(v_47, v_48);
    v_48 = v_50;
    v_47 = v_49;
    v_50 = v_48;
    v_49 = v_47;
    goto v_1;
    goto v_6;
    v_47 = nil;
v_6:
    return onevalue(v_47);
}



// Code for rl_external

static LispObject CC_rl_external(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_25, v_26, v_27;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_26 = v_3;
    v_25 = v_2;
// end of prologue
    if (!symbolp(v_25)) v_25 = nil;
    else { v_25 = qfastgets(v_25);
           if (v_25 != nil) { v_25 = elt(v_25, 21); // rl_external
#ifdef RECORD_GET
             if (v_25 != SPID_NOPROP)
                record_get(elt(fastget_names, 21), 1);
             else record_get(elt(fastget_names, 21), 0),
                v_25 = nil; }
           else record_get(elt(fastget_names, 21), 0); }
#else
             if (v_25 == SPID_NOPROP) v_25 = nil; }}
#endif
    v_27 = v_25;
    v_25 = v_27;
    if (v_25 == nil) goto v_13;
    v_25 = v_26;
    v_26 = v_27;
    v_25 = Latsoc(nil, v_25, v_26);
    v_27 = v_25;
    v_25 = v_27;
    if (v_25 == nil) goto v_21;
    v_25 = v_27;
    if (!car_legal(v_25)) v_25 = cdrerror(v_25); else
    v_25 = cdr(v_25);
    goto v_7;
v_21:
    goto v_11;
v_13:
v_11:
    v_25 = nil;
v_7:
    return onevalue(v_25);
}



// Code for quotfx

static LispObject CC_quotfx(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_27, v_28, v_29;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_28 = v_3;
    v_29 = v_2;
// end of prologue
    v_27 = qvalue(basic_elt(env, 1)); // !*exp
    if (v_27 == nil) goto v_11;
    else goto v_12;
v_11:
    v_27 = lisp_true;
    goto v_10;
v_12:
    v_27 = qvalue(basic_elt(env, 2)); // !*mcd
    v_27 = (v_27 == nil ? lisp_true : nil);
    goto v_10;
    v_27 = nil;
v_10:
    if (v_27 == nil) goto v_8;
    v_27 = v_29;
    {
        LispObject fn = basic_elt(env, 3); // quotf
        return (*qfn2(fn))(fn, v_27, v_28);
    }
v_8:
    v_27 = v_29;
    {
        LispObject fn = basic_elt(env, 4); // quotfx1
        return (*qfn2(fn))(fn, v_27, v_28);
    }
    v_27 = nil;
    return onevalue(v_27);
}



// Code for ibalp_clauselp

static LispObject CC_ibalp_clauselp(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
v_1:
    v_25 = stack[0];
    if (v_25 == nil) goto v_6;
    else goto v_7;
v_6:
    v_25 = lisp_true;
    goto v_5;
v_7:
    v_25 = stack[0];
    if (!car_legal(v_25)) v_25 = carerror(v_25); else
    v_25 = car(v_25);
    {   LispObject fn = basic_elt(env, 1); // ibalp_clausep
    v_25 = (*qfn1(fn))(fn, v_25);
    }
    env = stack[-1];
    if (v_25 == nil) goto v_14;
    else goto v_15;
v_14:
    v_25 = nil;
    goto v_13;
v_15:
    v_25 = stack[0];
    if (!car_legal(v_25)) v_25 = cdrerror(v_25); else
    v_25 = cdr(v_25);
    stack[0] = v_25;
    goto v_1;
    v_25 = nil;
v_13:
    goto v_5;
    v_25 = nil;
v_5:
    return onevalue(v_25);
}



// Code for expression

static LispObject CC_expression(LispObject env,
                         LispObject v_2)
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
    v_72 = v_2;
// end of prologue
    v_70 = v_72;
    if (v_70 == nil) goto v_10;
    v_70 = v_72;
    if (!consp(v_70)) goto v_14;
    else goto v_15;
v_14:
    v_70 = v_72;
    {   LispObject fn = basic_elt(env, 3); // constsml
    v_70 = (*qfn1(fn))(fn, v_70);
    }
    goto v_13;
v_15:
    v_70 = v_72;
    if (!car_legal(v_70)) v_71 = carerror(v_70); else
    v_71 = car(v_70);
    v_70 = qvalue(basic_elt(env, 1)); // ir2mml!*
    v_70 = Lassoc(nil, v_71, v_70);
    v_71 = v_70;
    if (v_70 == nil) goto v_24;
    v_70 = v_71;
    if (!car_legal(v_70)) v_70 = cdrerror(v_70); else
    v_70 = cdr(v_70);
    if (!car_legal(v_70)) v_70 = cdrerror(v_70); else
    v_70 = cdr(v_70);
    if (!car_legal(v_70)) v_70 = carerror(v_70); else
    v_70 = car(v_70);
    if (v_70 == nil) goto v_31;
    else goto v_32;
v_31:
    v_70 = v_71;
    if (!car_legal(v_70)) v_70 = cdrerror(v_70); else
    v_70 = cdr(v_70);
    if (!car_legal(v_70)) stack[0] = carerror(v_70); else
    stack[0] = car(v_70);
    v_70 = v_72;
    if (!car_legal(v_70)) v_70 = cdrerror(v_70); else
    v_70 = cdr(v_70);
    v_70 = ncons(v_70);
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 4); // apply
    v_70 = (*qfn2(fn))(fn, stack[0], v_70);
    }
    goto v_30;
v_32:
    v_70 = v_71;
    if (!car_legal(v_70)) v_70 = cdrerror(v_70); else
    v_70 = cdr(v_70);
    if (!car_legal(v_70)) stack[0] = carerror(v_70); else
    stack[0] = car(v_70);
    v_70 = v_72;
    if (!car_legal(v_70)) v_70 = cdrerror(v_70); else
    v_70 = cdr(v_70);
    v_71 = v_72;
    if (!car_legal(v_71)) v_71 = carerror(v_71); else
    v_71 = car(v_71);
    v_70 = list2(v_70, v_71);
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 4); // apply
    v_70 = (*qfn2(fn))(fn, stack[0], v_70);
    }
    goto v_30;
v_30:
    goto v_22;
v_24:
    v_70 = v_72;
    if (!car_legal(v_70)) v_71 = carerror(v_70); else
    v_71 = car(v_70);
    v_70 = basic_elt(env, 2); // !*sq
    if (v_71 == v_70) goto v_55;
    else goto v_56;
v_55:
    v_70 = v_72;
    if (!car_legal(v_70)) v_70 = cdrerror(v_70); else
    v_70 = cdr(v_70);
    if (!car_legal(v_70)) v_70 = carerror(v_70); else
    v_70 = car(v_70);
    {   LispObject fn = basic_elt(env, 5); // prepsq
    v_70 = (*qfn1(fn))(fn, v_70);
    }
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 0); // expression
    v_70 = (*qfn1(fn))(fn, v_70);
    }
    goto v_22;
v_56:
    v_70 = v_72;
    {   LispObject fn = basic_elt(env, 6); // operator_fn
    v_70 = (*qfn1(fn))(fn, v_70);
    }
    goto v_22;
v_22:
    goto v_13;
v_13:
    goto v_8;
v_10:
v_8:
    v_70 = nil;
    return onevalue(v_70);
}



// Code for ident

static LispObject CC_ident(LispObject env,
                         LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_14, v_15;
#ifdef CHECK_STACK
    if_check_stack;
#endif
#ifdef CONSERVATIVE
    poll();
#else // CONSERVATIVE
    if (++reclaim_trigger_count == reclaim_trigger_target ||
        stack >= stackLimit)
    {
        push(v_3);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_3);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    v_14 = v_3;
// end of prologue
// Binding op
// FLUIDBIND: reloadenv=1 litvec-offset=1 saveloc=0
{   bind_fluid_stack bind_fluid_var(-1, 1, 0);
    setvalue(basic_elt(env, 1), v_14); // op
    v_15 = qvalue(basic_elt(env, 1)); // op
    v_14 = basic_elt(env, 2); // identity
    v_14 = get(v_15, v_14);
    ;}  // end of a binding scope
    return onevalue(v_14);
}



// Code for vdpgetprop

static LispObject CC_vdpgetprop(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_44, v_45, v_46, v_47;
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
    v_46 = v_3;
    v_47 = v_2;
// end of prologue
    v_44 = v_47;
    if (v_44 == nil) goto v_7;
    else goto v_8;
v_7:
    v_44 = nil;
    goto v_6;
v_8:
    v_45 = v_47;
    v_44 = basic_elt(env, 1); // vdp
    if (!consp(v_45)) goto v_11;
    v_45 = car(v_45);
    if (v_45 == v_44) goto v_12;
v_11:
    stack[-1] = basic_elt(env, 2); // dipoly
    stack[0] = static_cast<LispObject>(112)+TAG_FIXNUM; // 7
    v_44 = basic_elt(env, 3); // "vdpgetprop given a non-vdp as 1st parameter"
    v_45 = v_47;
    v_44 = list3(v_44, v_45, v_46);
    env = stack[-2];
    {
        LispObject v_50 = stack[-1];
        LispObject v_51 = stack[0];
        LispObject fn = basic_elt(env, 4); // rerror
        return (*qfn3(fn))(fn, v_50, v_51, v_44);
    }
v_12:
    v_44 = v_46;
    v_45 = v_47;
    if (!car_legal(v_45)) v_45 = cdrerror(v_45); else
    v_45 = cdr(v_45);
    if (!car_legal(v_45)) v_45 = cdrerror(v_45); else
    v_45 = cdr(v_45);
    if (!car_legal(v_45)) v_45 = cdrerror(v_45); else
    v_45 = cdr(v_45);
    if (!car_legal(v_45)) v_45 = cdrerror(v_45); else
    v_45 = cdr(v_45);
    if (!car_legal(v_45)) v_45 = carerror(v_45); else
    v_45 = car(v_45);
    v_44 = Lassoc(nil, v_44, v_45);
    v_45 = v_44;
    v_44 = v_45;
    if (v_44 == nil) goto v_37;
    v_44 = v_45;
    if (!car_legal(v_44)) v_44 = cdrerror(v_44); else
    v_44 = cdr(v_44);
    goto v_35;
v_37:
    v_44 = nil;
    goto v_35;
    v_44 = nil;
v_35:
    goto v_6;
    v_44 = nil;
v_6:
    return onevalue(v_44);
}



// Code for xdegree

static LispObject CC_xdegree(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // deg!*form
    v_16 = (*qfn1(fn))(fn, v_16);
    }
    v_17 = v_16;
    v_16 = v_17;
    if (v_16 == nil) goto v_9;
    else goto v_10;
v_9:
    v_16 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_8;
v_10:
    v_16 = v_17;
    goto v_8;
    v_16 = nil;
v_8:
    return onevalue(v_16);
}



// Code for sfpx

static LispObject CC_sfpx(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    v_11 = v_2;
// end of prologue
    stack[-2] = v_11;
    stack[-1] = nil;
    stack[0] = nil;
    v_12 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_11 = lisp_true;
    v_11 = list2(v_12, v_11);
    env = stack[-3];
    {
        LispObject v_16 = stack[-2];
        LispObject v_17 = stack[-1];
        LispObject v_18 = stack[0];
        LispObject fn = basic_elt(env, 1); // sfpx1
        return (*qfn4up(fn))(fn, v_16, v_17, v_18, v_11);
    }
}



// Code for mv!-domainlist!-!-

static LispObject CC_mvKdomainlistKK(LispObject env,
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
    v_30 = difference2(v_30, v_29);
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



// Code for exptf

static LispObject CC_exptf(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_49 = stack[0];
    v_48 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_48 = static_cast<LispObject>(lessp2(v_49, v_48));
    v_48 = v_48 ? lisp_true : nil;
    env = stack[-2];
    if (v_48 == nil) goto v_8;
    v_50 = basic_elt(env, 1); // "exptf"
    v_49 = stack[-1];
    v_48 = stack[0];
    v_48 = list3(v_50, v_49, v_48);
    env = stack[-2];
    {
        LispObject fn = basic_elt(env, 3); // errach
        return (*qfn1(fn))(fn, v_48);
    }
v_8:
    v_48 = stack[-1];
    if (!consp(v_48)) goto v_21;
    else goto v_22;
v_21:
    v_48 = lisp_true;
    goto v_20;
v_22:
    v_48 = stack[-1];
    if (!car_legal(v_48)) v_48 = carerror(v_48); else
    v_48 = car(v_48);
    v_48 = (consp(v_48) ? nil : lisp_true);
    goto v_20;
    v_48 = nil;
v_20:
    if (v_48 == nil) goto v_18;
    v_49 = stack[-1];
    v_48 = stack[0];
    {
        LispObject fn = basic_elt(env, 4); // !:expt
        return (*qfn2(fn))(fn, v_49, v_48);
    }
v_18:
    v_48 = qvalue(basic_elt(env, 2)); // !*exp
    if (v_48 == nil) goto v_35;
    else goto v_33;
v_35:
    v_48 = stack[-1];
    {   LispObject fn = basic_elt(env, 5); // kernlp
    v_48 = (*qfn1(fn))(fn, v_48);
    }
    env = stack[-2];
    if (v_48 == nil) goto v_37;
    else goto v_33;
v_37:
    goto v_34;
v_33:
    v_49 = stack[-1];
    v_48 = stack[0];
    {
        LispObject fn = basic_elt(env, 6); // exptf1
        return (*qfn2(fn))(fn, v_49, v_48);
    }
v_34:
    v_49 = stack[-1];
    v_48 = stack[0];
    {
        LispObject fn = basic_elt(env, 7); // mksfpf
        return (*qfn2(fn))(fn, v_49, v_48);
    }
    v_48 = nil;
    return onevalue(v_48);
}



// Code for lalr_generate_lr0_collection

static LispObject CC_lalr_generate_lr0_collection(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil, nil, nil, nil, nil);
    push(nil, nil);
    stack_popper stack_popper_var(8);
// end of prologue
    {   LispObject fn = basic_elt(env, 3); // lalr_lr0_initial_itemset
    v_83 = (*qfn0(fn))(fn);
    }
    env = stack[-7];
    v_82 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_82 = cons(v_83, v_82);
    env = stack[-7];
    v_82 = ncons(v_82);
    env = stack[-7];
    setvalue(basic_elt(env, 1), v_82); // itemset_collection
    v_82 = qvalue(basic_elt(env, 1)); // itemset_collection
    if (!car_legal(v_82)) v_82 = carerror(v_82); else
    v_82 = car(v_82);
    v_82 = ncons(v_82);
    env = stack[-7];
    stack[-6] = v_82;
    v_82 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-5] = v_82;
v_22:
    v_82 = stack[-6];
    if (v_82 == nil) goto v_25;
    else goto v_26;
v_25:
    goto v_21;
v_26:
    v_82 = stack[-6];
    if (!car_legal(v_82)) v_82 = carerror(v_82); else
    v_82 = car(v_82);
    stack[-4] = v_82;
    v_82 = stack[-6];
    if (!car_legal(v_82)) v_82 = cdrerror(v_82); else
    v_82 = cdr(v_82);
    stack[-6] = v_82;
    v_82 = stack[-4];
    if (!car_legal(v_82)) v_82 = carerror(v_82); else
    v_82 = car(v_82);
    stack[-3] = v_82;
    v_82 = qvalue(basic_elt(env, 2)); // symbols
    stack[-2] = v_82;
v_38:
    v_82 = stack[-2];
    if (v_82 == nil) goto v_42;
    else goto v_43;
v_42:
    goto v_37;
v_43:
    v_82 = stack[-2];
    if (!car_legal(v_82)) v_82 = carerror(v_82); else
    v_82 = car(v_82);
    stack[-1] = v_82;
    v_83 = stack[-3];
    v_82 = stack[-1];
    {   LispObject fn = basic_elt(env, 4); // lalr_compute_lr0_goto
    v_82 = (*qfn2(fn))(fn, v_83, v_82);
    }
    env = stack[-7];
    v_83 = v_82;
    if (v_82 == nil) goto v_52;
    v_84 = v_83;
    v_82 = qvalue(basic_elt(env, 1)); // itemset_collection
    v_82 = Lassoc(nil, v_84, v_82);
    v_84 = v_82;
    if (v_82 == nil) goto v_59;
    v_82 = v_84;
    stack[0] = v_82;
    goto v_57;
v_59:
    stack[0] = v_83;
    v_82 = stack[-5];
    v_82 = add1(v_82);
    env = stack[-7];
    stack[-5] = v_82;
    v_82 = cons(stack[0], v_82);
    env = stack[-7];
    stack[0] = v_82;
    v_83 = stack[0];
    v_82 = qvalue(basic_elt(env, 1)); // itemset_collection
    v_82 = cons(v_83, v_82);
    env = stack[-7];
    setvalue(basic_elt(env, 1), v_82); // itemset_collection
    v_83 = stack[0];
    v_82 = stack[-6];
    v_82 = cons(v_83, v_82);
    env = stack[-7];
    stack[-6] = v_82;
    goto v_57;
v_57:
    v_84 = stack[-4];
    v_83 = stack[-1];
    v_82 = stack[0];
    {   LispObject fn = basic_elt(env, 5); // lalr_add_goto
    v_82 = (*qfn3(fn))(fn, v_84, v_83, v_82);
    }
    env = stack[-7];
    goto v_50;
v_52:
v_50:
    v_82 = stack[-2];
    if (!car_legal(v_82)) v_82 = cdrerror(v_82); else
    v_82 = cdr(v_82);
    stack[-2] = v_82;
    goto v_38;
v_37:
    goto v_22;
v_21:
    v_82 = nil;
    return onevalue(v_82);
}



// Code for convertmode1

static LispObject CC_convertmode1(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_78, v_79, v_80, v_81, v_82, v_83, v_84;
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
    v_80 = v_5;
    v_81 = v_4;
    v_82 = v_3;
    v_83 = v_2;
// end of prologue
    v_79 = v_80;
    v_78 = basic_elt(env, 1); // real
    if (v_79 == v_78) goto v_12;
    else goto v_13;
v_12:
    v_78 = basic_elt(env, 2); // algebraic
    v_80 = v_78;
    goto v_11;
v_13:
v_11:
    v_79 = v_81;
    v_78 = basic_elt(env, 1); // real
    if (v_79 == v_78) goto v_19;
    else goto v_20;
v_19:
    v_78 = basic_elt(env, 2); // algebraic
    v_81 = v_78;
    goto v_18;
v_20:
v_18:
    v_79 = v_81;
    v_78 = v_80;
    if (v_79 == v_78) goto v_26;
    else goto v_27;
v_26:
    v_78 = v_83;
    goto v_9;
v_27:
    v_78 = v_83;
    if (symbolp(v_78)) goto v_33;
    else goto v_32;
v_33:
    v_79 = v_83;
    v_78 = v_82;
    v_78 = Latsoc(nil, v_79, v_78);
    v_84 = v_78;
    if (v_78 == nil) goto v_32;
    v_78 = v_84;
    if (!car_legal(v_78)) v_79 = cdrerror(v_78); else
    v_79 = cdr(v_78);
    v_78 = basic_elt(env, 3); // (integer scalar real)
    v_78 = Lmemq(nil, v_79, v_78);
    if (v_78 == nil) goto v_43;
    else goto v_44;
v_43:
    v_78 = v_84;
    if (!car_legal(v_78)) v_79 = cdrerror(v_78); else
    v_79 = cdr(v_78);
    v_78 = v_80;
    v_78 = (v_79 == v_78 ? lisp_true : nil);
    v_78 = (v_78 == nil ? lisp_true : nil);
    goto v_42;
v_44:
    v_78 = nil;
    goto v_42;
    v_78 = nil;
v_42:
    if (v_78 == nil) goto v_32;
    stack[-2] = v_83;
    stack[-1] = v_82;
    stack[0] = v_81;
    v_78 = v_84;
    if (!car_legal(v_78)) v_78 = cdrerror(v_78); else
    v_78 = cdr(v_78);
    v_78 = ncons(v_78);
    env = stack[-3];
    {
        LispObject v_88 = stack[-2];
        LispObject v_89 = stack[-1];
        LispObject v_90 = stack[0];
        LispObject fn = basic_elt(env, 4); // convertmode
        return (*qfn4up(fn))(fn, v_88, v_89, v_90, v_78);
    }
v_32:
    v_79 = v_80;
    v_78 = v_81;
    v_78 = get(v_79, v_78);
    env = stack[-3];
    v_84 = v_78;
    if (v_78 == nil) goto v_64;
    else goto v_65;
v_64:
    v_78 = v_80;
    v_79 = v_81;
    {   LispObject fn = basic_elt(env, 5); // typerr
    v_78 = (*qfn2(fn))(fn, v_78, v_79);
    }
    goto v_25;
v_65:
    v_78 = v_84;
    v_79 = v_83;
    v_80 = v_82;
        return Lapply2(nil, v_78, v_79, v_80);
v_25:
    v_78 = nil;
v_9:
    return onevalue(v_78);
}



// Code for ofsf_posvarpat

static LispObject CC_ofsf_posvarpat(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_38 = v_2;
// end of prologue
    v_36 = v_38;
    if (!consp(v_36)) goto v_10;
    else goto v_11;
v_10:
    v_36 = v_38;
    goto v_9;
v_11:
    v_36 = v_38;
    if (!car_legal(v_36)) v_36 = carerror(v_36); else
    v_36 = car(v_36);
    goto v_9;
    v_36 = nil;
v_9:
    stack[-1] = v_36;
    v_37 = stack[-1];
    v_36 = basic_elt(env, 1); // (greaterp geq)
    v_36 = Lmemq(nil, v_37, v_36);
    if (v_36 == nil) goto v_20;
    else goto v_21;
v_20:
    v_36 = nil;
    goto v_7;
v_21:
    v_36 = v_38;
    if (!car_legal(v_36)) v_36 = cdrerror(v_36); else
    v_36 = cdr(v_36);
    if (!car_legal(v_36)) v_36 = carerror(v_36); else
    v_36 = car(v_36);
    {   LispObject fn = basic_elt(env, 2); // sfto_varp
    v_37 = (*qfn1(fn))(fn, v_36);
    }
    v_36 = stack[0];
    if (v_37 == v_36) goto v_28;
    else goto v_29;
v_28:
    v_36 = stack[-1];
    goto v_7;
v_29:
    v_36 = nil;
v_7:
    return onevalue(v_36);
}



// Code for monommultiplybyvariable

static LispObject CC_monommultiplybyvariable(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_58 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_58 = Lgetv(nil, v_59, v_58);
    env = stack[-4];
    stack[-3] = v_58;
v_13:
    v_58 = stack[-3];
    if (!car_legal(v_58)) v_58 = carerror(v_58); else
    v_58 = car(v_58);
    if (v_58 == nil) goto v_16;
    v_58 = stack[-3];
    if (!car_legal(v_58)) v_59 = carerror(v_58); else
    v_59 = car(v_58);
    v_58 = stack[-1];
    v_58 = static_cast<LispObject>(greaterp2(v_59, v_58));
    v_58 = v_58 ? lisp_true : nil;
    env = stack[-4];
    if (v_58 == nil) goto v_16;
    goto v_17;
v_16:
    goto v_12;
v_17:
    v_58 = stack[-3];
    if (!car_legal(v_58)) v_58 = cdrerror(v_58); else
    v_58 = cdr(v_58);
    stack[-3] = v_58;
    goto v_13;
v_12:
    v_58 = stack[-3];
    if (!car_legal(v_58)) v_58 = carerror(v_58); else
    v_58 = car(v_58);
    if (v_58 == nil) goto v_32;
    v_58 = stack[-3];
    if (!car_legal(v_58)) v_59 = carerror(v_58); else
    v_59 = car(v_58);
    v_58 = stack[-1];
    if (equal(v_59, v_58)) goto v_37;
    else goto v_32;
v_37:
    goto v_33;
v_32:
    stack[0] = stack[-3];
    v_58 = stack[-3];
    if (!car_legal(v_58)) v_59 = carerror(v_58); else
    v_59 = car(v_58);
    v_58 = stack[-3];
    if (!car_legal(v_58)) v_58 = cdrerror(v_58); else
    v_58 = cdr(v_58);
    v_58 = cons(v_59, v_58);
    env = stack[-4];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_58);
    v_59 = stack[0];
    v_58 = stack[-1];
    if (!car_legal(v_59)) rplaca_fails(v_59);
    setcar(v_59, v_58);
    stack[-1] = stack[-2];
    stack[0] = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_59 = stack[-2];
    v_58 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_58 = Lgetv(nil, v_59, v_58);
    env = stack[-4];
    v_58 = add1(v_58);
    env = stack[-4];
    v_58 = Lputv(nil, stack[-1], stack[0], v_58);
    goto v_31;
v_33:
v_31:
    v_58 = nil;
    return onevalue(v_58);
}



// Code for totalcompare

static LispObject CC_totalcompare(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
v_1:
    v_56 = stack[-1];
    v_55 = stack[0];
    if (equal(v_56, v_55)) goto v_7;
    else goto v_8;
v_7:
    v_55 = basic_elt(env, 1); // equal
    goto v_6;
v_8:
    v_56 = stack[-1];
    v_55 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // wulessp
    v_55 = (*qfn2(fn))(fn, v_56, v_55);
    }
    env = stack[-2];
    if (v_55 == nil) goto v_13;
    v_55 = basic_elt(env, 2); // less
    goto v_6;
v_13:
    v_56 = stack[0];
    v_55 = stack[-1];
    {   LispObject fn = basic_elt(env, 4); // wulessp
    v_55 = (*qfn2(fn))(fn, v_56, v_55);
    }
    env = stack[-2];
    if (v_55 == nil) goto v_19;
    v_55 = basic_elt(env, 3); // greater
    goto v_6;
v_19:
    v_55 = stack[-1];
    {   LispObject fn = basic_elt(env, 5); // wuconstantp
    v_55 = (*qfn1(fn))(fn, v_55);
    }
    env = stack[-2];
    if (v_55 == nil) goto v_25;
    v_56 = stack[-1];
    v_55 = stack[0];
    {
        LispObject fn = basic_elt(env, 6); // totalcompareconstants
        return (*qfn2(fn))(fn, v_56, v_55);
    }
v_25:
    v_55 = stack[-1];
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    if (!car_legal(v_55)) v_56 = cdrerror(v_55); else
    v_56 = cdr(v_55);
    v_55 = stack[0];
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    if (!car_legal(v_55)) v_55 = cdrerror(v_55); else
    v_55 = cdr(v_55);
    {   LispObject fn = basic_elt(env, 0); // totalcompare
    v_55 = (*qfn2(fn))(fn, v_56, v_55);
    }
    env = stack[-2];
    v_57 = v_55;
    v_56 = v_57;
    v_55 = basic_elt(env, 1); // equal
    if (v_56 == v_55) goto v_46;
    v_55 = v_57;
    goto v_35;
v_46:
    v_55 = stack[-1];
    if (!car_legal(v_55)) v_56 = cdrerror(v_55); else
    v_56 = cdr(v_55);
    v_55 = stack[0];
    if (!car_legal(v_55)) v_55 = cdrerror(v_55); else
    v_55 = cdr(v_55);
    stack[-1] = v_56;
    stack[0] = v_55;
    goto v_1;
v_35:
    goto v_6;
    v_55 = nil;
v_6:
    return onevalue(v_55);
}



// Code for tayexp!-difference

static LispObject CC_tayexpKdifference(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_3;
    v_61 = v_2;
// end of prologue
    v_60 = v_61;
    if (!consp(v_60)) goto v_11;
    else goto v_12;
v_11:
    v_60 = stack[0];
    v_60 = (consp(v_60) ? nil : lisp_true);
    goto v_10;
v_12:
    v_60 = nil;
    goto v_10;
    v_60 = nil;
v_10:
    if (v_60 == nil) goto v_8;
    v_60 = stack[0];
    return difference2(v_61, v_60);
v_8:
    v_60 = v_61;
    if (!consp(v_60)) goto v_26;
    else goto v_27;
v_26:
    v_60 = v_61;
    {   LispObject fn = basic_elt(env, 1); // !*i2rn
    v_61 = (*qfn1(fn))(fn, v_60);
    }
    env = stack[-2];
    v_60 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // rndifference!:
    v_60 = (*qfn2(fn))(fn, v_61, v_60);
    }
    goto v_25;
v_27:
    v_60 = stack[0];
    if (!consp(v_60)) goto v_33;
    else goto v_34;
v_33:
    stack[-1] = v_61;
    v_60 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // !*i2rn
    v_60 = (*qfn1(fn))(fn, v_60);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 2); // rndifference!:
    v_60 = (*qfn2(fn))(fn, stack[-1], v_60);
    }
    goto v_25;
v_34:
    v_60 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // rndifference!:
    v_60 = (*qfn2(fn))(fn, v_61, v_60);
    }
    goto v_25;
    v_60 = nil;
v_25:
    v_62 = v_60;
    v_60 = v_62;
    if (!car_legal(v_60)) v_60 = cdrerror(v_60); else
    v_60 = cdr(v_60);
    if (!car_legal(v_60)) v_61 = cdrerror(v_60); else
    v_61 = cdr(v_60);
    v_60 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_61 == v_60) goto v_48;
    else goto v_49;
v_48:
    v_60 = v_62;
    if (!car_legal(v_60)) v_60 = cdrerror(v_60); else
    v_60 = cdr(v_60);
    if (!car_legal(v_60)) v_60 = carerror(v_60); else
    v_60 = car(v_60);
    goto v_47;
v_49:
    v_60 = v_62;
    goto v_47;
    v_60 = nil;
v_47:
    goto v_6;
    v_60 = nil;
v_6:
    return onevalue(v_60);
}



// Code for cl_smcpknowl

static LispObject CC_cl_smcpknowl(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_39;
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
    v_39 = v_2;
// end of prologue
    stack[-3] = v_39;
    v_39 = stack[-3];
    if (v_39 == nil) goto v_13;
    else goto v_14;
v_13:
    v_39 = nil;
    goto v_8;
v_14:
    v_39 = stack[-3];
    if (!car_legal(v_39)) v_39 = carerror(v_39); else
    v_39 = car(v_39);
    v_39 = ncons(v_39);
    env = stack[-4];
    stack[-1] = v_39;
    stack[-2] = v_39;
v_9:
    v_39 = stack[-3];
    if (!car_legal(v_39)) v_39 = cdrerror(v_39); else
    v_39 = cdr(v_39);
    stack[-3] = v_39;
    v_39 = stack[-3];
    if (v_39 == nil) goto v_26;
    else goto v_27;
v_26:
    v_39 = stack[-2];
    goto v_8;
v_27:
    stack[0] = stack[-1];
    v_39 = stack[-3];
    if (!car_legal(v_39)) v_39 = carerror(v_39); else
    v_39 = car(v_39);
    v_39 = ncons(v_39);
    env = stack[-4];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_39);
    v_39 = stack[-1];
    if (!car_legal(v_39)) v_39 = cdrerror(v_39); else
    v_39 = cdr(v_39);
    stack[-1] = v_39;
    goto v_9;
v_8:
    return onevalue(v_39);
}



// Code for exchk2

static LispObject CC_exchk2(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_71, v_72, v_73;
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
    v_71 = stack[-1];
    if (v_71 == nil) goto v_11;
    else goto v_12;
v_11:
    v_71 = stack[0];
    goto v_7;
v_12:
    v_71 = stack[-1];
    if (!car_legal(v_71)) v_71 = cdrerror(v_71); else
    v_71 = cdr(v_71);
    stack[-2] = v_71;
    v_71 = stack[-1];
    if (!car_legal(v_71)) v_71 = carerror(v_71); else
    v_71 = car(v_71);
    if (!car_legal(v_71)) v_71 = cdrerror(v_71); else
    v_71 = cdr(v_71);
    {   LispObject fn = basic_elt(env, 6); // prepsqx
    v_71 = (*qfn1(fn))(fn, v_71);
    }
    env = stack[-3];
    v_73 = v_71;
    v_72 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_73 == v_72) goto v_27;
    else goto v_28;
v_27:
    v_71 = stack[-1];
    if (!car_legal(v_71)) v_71 = carerror(v_71); else
    v_71 = car(v_71);
    if (!car_legal(v_71)) v_71 = carerror(v_71); else
    v_71 = car(v_71);
    v_72 = v_71;
    goto v_26;
v_28:
    v_72 = qvalue(basic_elt(env, 1)); // !*nosqrts
    if (v_72 == nil) goto v_35;
    v_73 = basic_elt(env, 2); // expt
    v_72 = stack[-1];
    if (!car_legal(v_72)) v_72 = carerror(v_72); else
    v_72 = car(v_72);
    if (!car_legal(v_72)) v_72 = carerror(v_72); else
    v_72 = car(v_72);
    v_71 = list3(v_73, v_72, v_71);
    env = stack[-3];
    v_72 = v_71;
    goto v_26;
v_35:
    v_73 = v_71;
    v_72 = basic_elt(env, 3); // (quotient 1 2)
    if (equal(v_73, v_72)) goto v_43;
    else goto v_44;
v_43:
    v_72 = basic_elt(env, 4); // sqrt
    v_71 = stack[-1];
    if (!car_legal(v_71)) v_71 = carerror(v_71); else
    v_71 = car(v_71);
    if (!car_legal(v_71)) v_71 = carerror(v_71); else
    v_71 = car(v_71);
    v_71 = list2(v_72, v_71);
    env = stack[-3];
    v_72 = v_71;
    goto v_26;
v_44:
    v_73 = v_71;
    v_72 = basic_elt(env, 5); // 0.5
    if (equal(v_73, v_72)) goto v_52;
    else goto v_53;
v_52:
    v_72 = basic_elt(env, 4); // sqrt
    v_71 = stack[-1];
    if (!car_legal(v_71)) v_71 = carerror(v_71); else
    v_71 = car(v_71);
    if (!car_legal(v_71)) v_71 = carerror(v_71); else
    v_71 = car(v_71);
    v_71 = list2(v_72, v_71);
    env = stack[-3];
    v_72 = v_71;
    goto v_26;
v_53:
    v_73 = basic_elt(env, 2); // expt
    v_72 = stack[-1];
    if (!car_legal(v_72)) v_72 = carerror(v_72); else
    v_72 = car(v_72);
    if (!car_legal(v_72)) v_72 = carerror(v_72); else
    v_72 = car(v_72);
    v_71 = list3(v_73, v_72, v_71);
    env = stack[-3];
    v_72 = v_71;
    goto v_26;
    v_72 = nil;
v_26:
    v_71 = stack[0];
    v_71 = cons(v_72, v_71);
    env = stack[-3];
    stack[0] = v_71;
    v_71 = stack[-2];
    stack[-1] = v_71;
    goto v_8;
    v_71 = nil;
v_7:
    return onevalue(v_71);
}



// Code for mkuwedge

static LispObject CC_mkuwedge(LispObject env,
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
    v_20 = v_19;
    if (!car_legal(v_20)) v_20 = cdrerror(v_20); else
    v_20 = cdr(v_20);
    if (v_20 == nil) goto v_7;
    v_20 = basic_elt(env, 1); // wedge
    v_19 = cons(v_20, v_19);
    env = stack[0];
    {   LispObject fn = basic_elt(env, 2); // fkern
    v_19 = (*qfn1(fn))(fn, v_19);
    }
    if (!car_legal(v_19)) v_19 = carerror(v_19); else
    v_19 = car(v_19);
    goto v_5;
v_7:
    if (!car_legal(v_19)) v_19 = carerror(v_19); else
    v_19 = car(v_19);
    goto v_5;
    v_19 = nil;
v_5:
    return onevalue(v_19);
}



// Code for formop

static LispObject CC_formop(LispObject env,
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
    stack[-2] = nil;
v_8:
    v_51 = stack[-1];
    if (!consp(v_51)) goto v_17;
    else goto v_18;
v_17:
    v_51 = lisp_true;
    goto v_16;
v_18:
    v_51 = stack[-1];
    if (!car_legal(v_51)) v_51 = carerror(v_51); else
    v_51 = car(v_51);
    v_51 = (consp(v_51) ? nil : lisp_true);
    goto v_16;
    v_51 = nil;
v_16:
    if (v_51 == nil) goto v_14;
    goto v_9;
v_14:
    v_51 = stack[-1];
    if (!car_legal(v_51)) v_51 = carerror(v_51); else
    v_51 = car(v_51);
    if (!car_legal(v_51)) stack[0] = carerror(v_51); else
    stack[0] = car(v_51);
    v_51 = stack[-1];
    if (!car_legal(v_51)) v_51 = carerror(v_51); else
    v_51 = car(v_51);
    if (!car_legal(v_51)) v_51 = cdrerror(v_51); else
    v_51 = cdr(v_51);
    {   LispObject fn = basic_elt(env, 0); // formop
    v_51 = (*qfn1(fn))(fn, v_51);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 1); // multop
    v_52 = (*qfn2(fn))(fn, stack[0], v_51);
    }
    env = stack[-3];
    v_51 = stack[-2];
    v_51 = cons(v_52, v_51);
    env = stack[-3];
    stack[-2] = v_51;
    v_51 = stack[-1];
    if (!car_legal(v_51)) v_51 = cdrerror(v_51); else
    v_51 = cdr(v_51);
    stack[-1] = v_51;
    goto v_8;
v_9:
    v_51 = stack[-1];
    v_52 = v_51;
v_10:
    v_51 = stack[-2];
    if (v_51 == nil) goto v_41;
    else goto v_42;
v_41:
    v_51 = v_52;
    goto v_7;
v_42:
    v_51 = stack[-2];
    v_51 = car(v_51);
    {   LispObject fn = basic_elt(env, 2); // raddf
    v_51 = (*qfn2(fn))(fn, v_51, v_52);
    }
    env = stack[-3];
    v_52 = v_51;
    v_51 = stack[-2];
    v_51 = cdr(v_51);
    stack[-2] = v_51;
    goto v_10;
v_7:
    return onevalue(v_51);
}



// Code for leftzeros

static LispObject CC_leftzeros(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    stack[-1] = nil;
v_8:
    v_45 = stack[0];
    if (v_45 == nil) goto v_17;
    else goto v_18;
v_17:
    v_45 = lisp_true;
    goto v_16;
v_18:
    v_45 = stack[0];
    if (!car_legal(v_45)) v_46 = carerror(v_45); else
    v_46 = car(v_45);
    v_45 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_45 = Lneq_2(nil, v_46, v_45);
    env = stack[-2];
    goto v_16;
    v_45 = nil;
v_16:
    if (v_45 == nil) goto v_14;
    goto v_9;
v_14:
    v_46 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_45 = stack[-1];
    v_45 = cons(v_46, v_45);
    env = stack[-2];
    stack[-1] = v_45;
    v_45 = stack[0];
    if (!car_legal(v_45)) v_45 = cdrerror(v_45); else
    v_45 = cdr(v_45);
    stack[0] = v_45;
    goto v_8;
v_9:
    v_45 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_46 = v_45;
v_10:
    v_45 = stack[-1];
    if (v_45 == nil) goto v_35;
    else goto v_36;
v_35:
    v_45 = v_46;
    goto v_7;
v_36:
    v_45 = stack[-1];
    v_45 = car(v_45);
    v_45 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_45) + static_cast<std::uintptr_t>(v_46) - TAG_FIXNUM);
    v_46 = v_45;
    v_45 = stack[-1];
    v_45 = cdr(v_45);
    stack[-1] = v_45;
    goto v_10;
v_7:
    return onevalue(v_45);
}



// Code for arintequiv!:

static LispObject CC_arintequivT(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_38, v_39, v_40;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_39 = v_2;
// end of prologue
    v_38 = v_39;
    if (!car_legal(v_38)) v_38 = cdrerror(v_38); else
    v_38 = cdr(v_38);
    if (is_number(v_38)) goto v_6;
    else goto v_7;
v_6:
    v_38 = v_39;
    if (!car_legal(v_38)) v_38 = cdrerror(v_38); else
    v_38 = cdr(v_38);
    goto v_5;
v_7:
    v_38 = v_39;
    if (!car_legal(v_38)) v_38 = cdrerror(v_38); else
    v_38 = cdr(v_38);
    if (!car_legal(v_38)) v_38 = carerror(v_38); else
    v_38 = car(v_38);
    v_40 = basic_elt(env, 1); // !:rn!:
    if (v_38 == v_40) goto v_16;
    else goto v_17;
v_16:
    v_38 = v_39;
    if (!car_legal(v_38)) v_38 = cdrerror(v_38); else
    v_38 = cdr(v_38);
    if (!car_legal(v_38)) v_38 = cdrerror(v_38); else
    v_38 = cdr(v_38);
    if (!car_legal(v_38)) v_40 = cdrerror(v_38); else
    v_40 = cdr(v_38);
    v_38 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_38 = (v_40 == v_38 ? lisp_true : nil);
    goto v_15;
v_17:
    v_38 = nil;
    goto v_15;
    v_38 = nil;
v_15:
    if (v_38 == nil) goto v_13;
    v_38 = v_39;
    if (!car_legal(v_38)) v_38 = cdrerror(v_38); else
    v_38 = cdr(v_38);
    if (!car_legal(v_38)) v_38 = cdrerror(v_38); else
    v_38 = cdr(v_38);
    if (!car_legal(v_38)) v_38 = carerror(v_38); else
    v_38 = car(v_38);
    goto v_5;
v_13:
    v_38 = nil;
    goto v_5;
    v_38 = nil;
v_5:
    return onevalue(v_38);
}



// Code for reduce!-mod!-p

static LispObject CC_reduceKmodKp(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_51, v_52, v_53;
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
    v_51 = stack[0];
    if (v_51 == nil) goto v_6;
    else goto v_7;
v_6:
    v_51 = nil;
    goto v_5;
v_7:
    v_51 = stack[0];
    if (!consp(v_51)) goto v_14;
    else goto v_15;
v_14:
    v_51 = lisp_true;
    goto v_13;
v_15:
    v_51 = stack[0];
    if (!car_legal(v_51)) v_51 = carerror(v_51); else
    v_51 = car(v_51);
    v_51 = (consp(v_51) ? nil : lisp_true);
    goto v_13;
    v_51 = nil;
v_13:
    if (v_51 == nil) goto v_11;
    v_51 = stack[0];
    v_51 = Lmodular_number(nil, v_51);
    env = stack[-2];
    {
        LispObject fn = basic_elt(env, 1); // !*n2f
        return (*qfn1(fn))(fn, v_51);
    }
v_11:
    v_51 = stack[0];
    if (!car_legal(v_51)) v_51 = carerror(v_51); else
    v_51 = car(v_51);
    if (!car_legal(v_51)) v_51 = cdrerror(v_51); else
    v_51 = cdr(v_51);
    {   LispObject fn = basic_elt(env, 0); // reduce!-mod!-p
    stack[-1] = (*qfn1(fn))(fn, v_51);
    }
    env = stack[-2];
    v_51 = stack[0];
    if (!car_legal(v_51)) v_51 = cdrerror(v_51); else
    v_51 = cdr(v_51);
    {   LispObject fn = basic_elt(env, 0); // reduce!-mod!-p
    v_51 = (*qfn1(fn))(fn, v_51);
    }
    v_52 = stack[-1];
    v_53 = v_52;
    if (v_53 == nil) goto v_39;
    else goto v_40;
v_39:
    goto v_38;
v_40:
    v_53 = stack[0];
    if (!car_legal(v_53)) v_53 = carerror(v_53); else
    v_53 = car(v_53);
    if (!car_legal(v_53)) v_53 = carerror(v_53); else
    v_53 = car(v_53);
    return acons(v_53, v_52, v_51);
    v_51 = nil;
v_38:
    goto v_5;
    v_51 = nil;
v_5:
    return onevalue(v_51);
}



// Code for mconv

static LispObject CC_mconv(LispObject env,
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
    v_8 = qvalue(basic_elt(env, 1)); // dmode!*
    {   LispObject fn = basic_elt(env, 2); // dmconv0
    v_8 = (*qfn1(fn))(fn, v_8);
    }
    env = stack[-1];
    v_8 = stack[0];
    {
        LispObject fn = basic_elt(env, 3); // mconv1
        return (*qfn1(fn))(fn, v_8);
    }
}



// Code for lalr_lr0_itemset_to_lalr_kernel

static LispObject CC_lalr_lr0_itemset_to_lalr_kernel(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    v_47 = v_2;
// end of prologue
    stack[-2] = nil;
    stack[-1] = v_47;
v_10:
    v_47 = stack[-1];
    if (v_47 == nil) goto v_14;
    else goto v_15;
v_14:
    goto v_9;
v_15:
    v_47 = stack[-1];
    if (!car_legal(v_47)) v_47 = carerror(v_47); else
    v_47 = car(v_47);
    stack[0] = v_47;
    v_47 = stack[0];
    if (!car_legal(v_47)) v_48 = carerror(v_47); else
    v_48 = car(v_47);
    v_47 = basic_elt(env, 1); // !S!'
    if (v_48 == v_47) goto v_27;
    else goto v_28;
v_27:
    v_47 = lisp_true;
    goto v_26;
v_28:
    v_47 = stack[0];
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    if (!car_legal(v_47)) v_48 = carerror(v_47); else
    v_48 = car(v_47);
    v_47 = basic_elt(env, 2); // !.
    v_47 = Lneq_2(nil, v_48, v_47);
    env = stack[-3];
    goto v_26;
    v_47 = nil;
v_26:
    if (v_47 == nil) goto v_24;
    v_47 = stack[0];
    v_48 = ncons(v_47);
    env = stack[-3];
    v_47 = stack[-2];
    v_47 = cons(v_48, v_47);
    env = stack[-3];
    stack[-2] = v_47;
    goto v_22;
v_24:
v_22:
    v_47 = stack[-1];
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    stack[-1] = v_47;
    goto v_10;
v_9:
    v_47 = stack[-2];
    return onevalue(v_47);
}



// Code for formclis

static LispObject CC_formclis(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
v_11:
    v_29 = stack[-2];
    if (v_29 == nil) goto v_14;
    else goto v_15;
v_14:
    goto v_10;
v_15:
    v_29 = stack[-2];
    if (!car_legal(v_29)) v_31 = carerror(v_29); else
    v_31 = car(v_29);
    v_30 = stack[-1];
    v_29 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // formc
    v_30 = (*qfn3(fn))(fn, v_31, v_30, v_29);
    }
    env = stack[-4];
    v_29 = stack[-3];
    v_29 = cons(v_30, v_29);
    env = stack[-4];
    stack[-3] = v_29;
    v_29 = stack[-2];
    if (!car_legal(v_29)) v_29 = cdrerror(v_29); else
    v_29 = cdr(v_29);
    stack[-2] = v_29;
    goto v_11;
v_10:
    v_29 = stack[-3];
    {
        LispObject fn = basic_elt(env, 2); // reversip!*
        return (*qfn1(fn))(fn, v_29);
    }
    return onevalue(v_29);
}



// Code for preptayexp

static LispObject CC_preptayexp(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_14, v_15;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_15 = v_2;
// end of prologue
    v_14 = v_15;
    if (!consp(v_14)) goto v_6;
    else goto v_7;
v_6:
    v_14 = v_15;
    goto v_5;
v_7:
    v_14 = v_15;
    {
        LispObject fn = basic_elt(env, 1); // rnprep!:
        return (*qfn1(fn))(fn, v_14);
    }
    v_14 = nil;
v_5:
    return onevalue(v_14);
}



// Code for ofsf_prepat

static LispObject CC_ofsf_prepat(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_16;
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
    v_16 = stack[-1];
    if (!car_legal(v_16)) stack[-2] = carerror(v_16); else
    stack[-2] = car(v_16);
    v_16 = stack[-1];
    if (!car_legal(v_16)) v_16 = cdrerror(v_16); else
    v_16 = cdr(v_16);
    if (!car_legal(v_16)) v_16 = carerror(v_16); else
    v_16 = car(v_16);
    {   LispObject fn = basic_elt(env, 1); // prepf
    stack[0] = (*qfn1(fn))(fn, v_16);
    }
    env = stack[-3];
    v_16 = stack[-1];
    if (!car_legal(v_16)) v_16 = cdrerror(v_16); else
    v_16 = cdr(v_16);
    if (!car_legal(v_16)) v_16 = cdrerror(v_16); else
    v_16 = cdr(v_16);
    if (!car_legal(v_16)) v_16 = carerror(v_16); else
    v_16 = car(v_16);
    {   LispObject fn = basic_elt(env, 1); // prepf
    v_16 = (*qfn1(fn))(fn, v_16);
    }
    {
        LispObject v_20 = stack[-2];
        LispObject v_21 = stack[0];
        return list3(v_20, v_21, v_16);
    }
}



// Code for image!-of!-power

static LispObject CC_imageKofKpower(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_29 = qvalue(basic_elt(env, 1)); // image!-set
    v_29 = Lassoc(nil, v_30, v_29);
    stack[-2] = v_29;
    v_29 = stack[-2];
    if (v_29 == nil) goto v_13;
    else goto v_14;
v_13:
    {   LispObject fn = basic_elt(env, 2); // next!-random!-number
    v_29 = (*qfn0(fn))(fn);
    }
    env = stack[-3];
    v_29 = Lmodular_number(nil, v_29);
    env = stack[-3];
    stack[-2] = v_29;
    v_31 = stack[-1];
    v_30 = stack[-2];
    v_29 = qvalue(basic_elt(env, 1)); // image!-set
    v_29 = acons(v_31, v_30, v_29);
    env = stack[-3];
    setvalue(basic_elt(env, 1), v_29); // image!-set
    goto v_12;
v_14:
    v_29 = stack[-2];
    if (!car_legal(v_29)) v_29 = cdrerror(v_29); else
    v_29 = cdr(v_29);
    stack[-2] = v_29;
    goto v_12;
v_12:
    v_30 = stack[-2];
    v_29 = stack[0];
        return Lmodular_expt(nil, v_30, v_29);
    return onevalue(v_29);
}



// Code for addpf

static LispObject CC_addpf(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_107, v_108, v_109;
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
    stack[0] = nil;
v_8:
    v_107 = stack[-2];
    if (v_107 == nil) goto v_11;
    else goto v_12;
v_11:
    v_108 = stack[0];
    v_107 = stack[-1];
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn2(fn))(fn, v_108, v_107);
    }
v_12:
    v_107 = stack[-1];
    if (v_107 == nil) goto v_17;
    else goto v_18;
v_17:
    v_108 = stack[0];
    v_107 = stack[-2];
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn2(fn))(fn, v_108, v_107);
    }
v_18:
    v_107 = stack[-2];
    if (!car_legal(v_107)) v_107 = carerror(v_107); else
    v_107 = car(v_107);
    if (!car_legal(v_107)) v_108 = carerror(v_107); else
    v_108 = car(v_107);
    v_107 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_108 == v_107) goto v_23;
    else goto v_24;
v_23:
    v_108 = stack[-2];
    v_107 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // addmpf
    v_107 = (*qfn2(fn))(fn, v_108, v_107);
    }
    env = stack[-4];
    {
        LispObject v_114 = stack[0];
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn2(fn))(fn, v_114, v_107);
    }
v_24:
    v_107 = stack[-1];
    if (!car_legal(v_107)) v_107 = carerror(v_107); else
    v_107 = car(v_107);
    if (!car_legal(v_107)) v_108 = carerror(v_107); else
    v_108 = car(v_107);
    v_107 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_108 == v_107) goto v_34;
    else goto v_35;
v_34:
    v_108 = stack[-1];
    v_107 = stack[-2];
    {   LispObject fn = basic_elt(env, 2); // addmpf
    v_107 = (*qfn2(fn))(fn, v_108, v_107);
    }
    env = stack[-4];
    {
        LispObject v_115 = stack[0];
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn2(fn))(fn, v_115, v_107);
    }
v_35:
    v_107 = stack[-2];
    if (!car_legal(v_107)) v_107 = carerror(v_107); else
    v_107 = car(v_107);
    if (!car_legal(v_107)) v_108 = carerror(v_107); else
    v_108 = car(v_107);
    v_107 = stack[-1];
    if (!car_legal(v_107)) v_107 = carerror(v_107); else
    v_107 = car(v_107);
    if (!car_legal(v_107)) v_107 = carerror(v_107); else
    v_107 = car(v_107);
    if (equal(v_108, v_107)) goto v_45;
    else goto v_46;
v_45:
    stack[-3] = stack[0];
    v_107 = stack[-2];
    if (!car_legal(v_107)) v_107 = carerror(v_107); else
    v_107 = car(v_107);
    if (!car_legal(v_107)) v_108 = cdrerror(v_107); else
    v_108 = cdr(v_107);
    v_107 = stack[-1];
    if (!car_legal(v_107)) v_107 = carerror(v_107); else
    v_107 = car(v_107);
    if (!car_legal(v_107)) v_107 = cdrerror(v_107); else
    v_107 = cdr(v_107);
    {   LispObject fn = basic_elt(env, 3); // addsq
    stack[0] = (*qfn2(fn))(fn, v_108, v_107);
    }
    env = stack[-4];
    v_107 = stack[-2];
    if (!car_legal(v_107)) v_108 = cdrerror(v_107); else
    v_108 = cdr(v_107);
    v_107 = stack[-1];
    if (!car_legal(v_107)) v_107 = cdrerror(v_107); else
    v_107 = cdr(v_107);
    {   LispObject fn = basic_elt(env, 0); // addpf
    v_107 = (*qfn2(fn))(fn, v_108, v_107);
    }
    env = stack[-4];
    v_108 = stack[0];
    v_109 = v_108;
    if (!car_legal(v_109)) v_109 = carerror(v_109); else
    v_109 = car(v_109);
    if (v_109 == nil) goto v_71;
    else goto v_72;
v_71:
    goto v_70;
v_72:
    v_109 = stack[-2];
    if (!car_legal(v_109)) v_109 = carerror(v_109); else
    v_109 = car(v_109);
    if (!car_legal(v_109)) v_109 = carerror(v_109); else
    v_109 = car(v_109);
    v_107 = acons(v_109, v_108, v_107);
    env = stack[-4];
    goto v_70;
    v_107 = nil;
v_70:
    {
        LispObject v_116 = stack[-3];
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn2(fn))(fn, v_116, v_107);
    }
v_46:
    v_107 = stack[-2];
    if (!car_legal(v_107)) v_107 = carerror(v_107); else
    v_107 = car(v_107);
    if (!car_legal(v_107)) v_108 = carerror(v_107); else
    v_108 = car(v_107);
    v_107 = stack[-1];
    if (!car_legal(v_107)) v_107 = carerror(v_107); else
    v_107 = car(v_107);
    if (!car_legal(v_107)) v_107 = carerror(v_107); else
    v_107 = car(v_107);
    {   LispObject fn = basic_elt(env, 4); // termordp!!
    v_107 = (*qfn2(fn))(fn, v_108, v_107);
    }
    env = stack[-4];
    if (v_107 == nil) goto v_85;
    v_107 = stack[-2];
    if (!car_legal(v_107)) v_108 = carerror(v_107); else
    v_108 = car(v_107);
    v_107 = stack[0];
    v_107 = cons(v_108, v_107);
    env = stack[-4];
    stack[0] = v_107;
    v_107 = stack[-2];
    if (!car_legal(v_107)) v_107 = cdrerror(v_107); else
    v_107 = cdr(v_107);
    stack[-2] = v_107;
    goto v_8;
v_85:
    v_107 = stack[-1];
    if (!car_legal(v_107)) v_108 = carerror(v_107); else
    v_108 = car(v_107);
    v_107 = stack[0];
    v_107 = cons(v_108, v_107);
    env = stack[-4];
    stack[0] = v_107;
    v_107 = stack[-1];
    if (!car_legal(v_107)) v_107 = cdrerror(v_107); else
    v_107 = cdr(v_107);
    stack[-1] = v_107;
    goto v_8;
    v_107 = nil;
    return onevalue(v_107);
}



// Code for id2bytelist

static LispObject CC_id2bytelist(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // id2string
    v_7 = (*qfn1(fn))(fn, v_7);
    }
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // string2bytelist
        return (*qfn1(fn))(fn, v_7);
    }
}



// Code for scan

static LispObject CC_scan(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_616, v_617, v_618;
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
    v_617 = qvalue(basic_elt(env, 1)); // cursym!*
    v_616 = basic_elt(env, 2); // !*semicol!*
    if (v_617 == v_616) goto v_26;
    goto v_9;
v_26:
v_8:
    v_616 = nil;
    setvalue(basic_elt(env, 3), v_616); // escaped!*
    {   LispObject fn = basic_elt(env, 44); // token
    v_616 = (*qfn0(fn))(fn);
    }
    env = stack[-3];
    setvalue(basic_elt(env, 4), v_616); // nxtsym!*
v_9:
    v_616 = qvalue(basic_elt(env, 4)); // nxtsym!*
    if (!consp(v_616)) goto v_38;
    v_616 = qvalue(basic_elt(env, 4)); // nxtsym!*
    {   LispObject fn = basic_elt(env, 45); // toknump
    v_616 = (*qfn1(fn))(fn, v_616);
    }
    env = stack[-3];
    v_616 = (v_616 == nil ? lisp_true : nil);
    goto v_36;
v_38:
    v_616 = nil;
    goto v_36;
    v_616 = nil;
v_36:
    if (v_616 == nil) goto v_34;
    goto v_20;
v_34:
    v_617 = qvalue(basic_elt(env, 4)); // nxtsym!*
    v_616 = basic_elt(env, 5); // else
    if (v_617 == v_616) goto v_50;
    else goto v_51;
v_50:
    v_616 = lisp_true;
    goto v_49;
v_51:
    v_617 = qvalue(basic_elt(env, 1)); // cursym!*
    v_616 = basic_elt(env, 2); // !*semicol!*
    v_616 = (v_617 == v_616 ? lisp_true : nil);
    goto v_49;
    v_616 = nil;
v_49:
    if (v_616 == nil) goto v_47;
    v_616 = nil;
    setvalue(basic_elt(env, 6), v_616); // outl!*
    goto v_32;
v_47:
v_32:
    v_616 = qvalue(basic_elt(env, 4)); // nxtsym!*
    {   LispObject fn = basic_elt(env, 46); // prin2x
    v_616 = (*qfn1(fn))(fn, v_616);
    }
    env = stack[-3];
v_10:
    v_616 = qvalue(basic_elt(env, 4)); // nxtsym!*
    if (symbolp(v_616)) goto v_66;
    goto v_21;
v_66:
    v_616 = qvalue(basic_elt(env, 4)); // nxtsym!*
    if (!symbolp(v_616)) v_616 = nil;
    else { v_616 = qfastgets(v_616);
           if (v_616 != nil) { v_616 = elt(v_616, 28); // newnam
#ifdef RECORD_GET
             if (v_616 != SPID_NOPROP)
                record_get(elt(fastget_names, 28), 1);
             else record_get(elt(fastget_names, 28), 0),
                v_616 = nil; }
           else record_get(elt(fastget_names, 28), 0); }
#else
             if (v_616 == SPID_NOPROP) v_616 = nil; }}
#endif
    stack[-1] = v_616;
    if (v_616 == nil) goto v_69;
    v_617 = stack[-1];
    v_616 = qvalue(basic_elt(env, 4)); // nxtsym!*
    if (equal(v_617, v_616)) goto v_69;
    goto v_19;
v_69:
    v_617 = qvalue(basic_elt(env, 4)); // nxtsym!*
    v_616 = basic_elt(env, 7); // comment
    if (v_617 == v_616) goto v_80;
    else goto v_81;
v_80:
    v_616 = lisp_true;
    goto v_79;
v_81:
    v_617 = qvalue(basic_elt(env, 4)); // nxtsym!*
    v_616 = basic_elt(env, 8); // !C!O!M!M!E!N!T
    if (v_617 == v_616) goto v_89;
    else goto v_90;
v_89:
    v_616 = lisp_true;
    goto v_88;
v_90:
    v_617 = qvalue(basic_elt(env, 4)); // nxtsym!*
    v_616 = basic_elt(env, 9); // !Comment
    v_616 = (v_617 == v_616 ? lisp_true : nil);
    goto v_88;
    v_616 = nil;
v_88:
    goto v_79;
    v_616 = nil;
v_79:
    if (v_616 == nil) goto v_77;
    v_616 = basic_elt(env, 7); // comment
    {   LispObject fn = basic_elt(env, 47); // read!-comment1
    v_616 = (*qfn1(fn))(fn, v_616);
    }
    env = stack[-3];
    stack[-1] = v_616;
    v_616 = qvalue(basic_elt(env, 10)); // !*comment
    if (v_616 == nil) goto v_104;
    v_616 = stack[-1];
    goto v_7;
v_104:
    goto v_8;
    goto v_64;
v_77:
    v_617 = qvalue(basic_elt(env, 4)); // nxtsym!*
    v_616 = basic_elt(env, 11); // !%
    if (v_617 == v_616) goto v_113;
    else goto v_114;
v_113:
    v_617 = qvalue(basic_elt(env, 12)); // ttype!*
    v_616 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_616 = (v_617 == v_616 ? lisp_true : nil);
    goto v_112;
v_114:
    v_616 = nil;
    goto v_112;
    v_616 = nil;
v_112:
    if (v_616 == nil) goto v_110;
    v_616 = basic_elt(env, 13); // percent_comment
    {   LispObject fn = basic_elt(env, 47); // read!-comment1
    v_616 = (*qfn1(fn))(fn, v_616);
    }
    env = stack[-3];
    stack[-1] = v_616;
    v_616 = qvalue(basic_elt(env, 10)); // !*comment
    if (v_616 == nil) goto v_128;
    v_616 = stack[-1];
    goto v_7;
v_128:
    goto v_8;
    goto v_64;
v_110:
    v_617 = qvalue(basic_elt(env, 4)); // nxtsym!*
    v_616 = basic_elt(env, 14); // !#if
    if (v_617 == v_616) goto v_133;
    else goto v_134;
v_133:
    goto v_16;
v_134:
    v_617 = qvalue(basic_elt(env, 4)); // nxtsym!*
    v_616 = basic_elt(env, 15); // !#else
    if (v_617 == v_616) goto v_141;
    else goto v_142;
v_141:
    v_616 = lisp_true;
    goto v_140;
v_142:
    v_617 = qvalue(basic_elt(env, 4)); // nxtsym!*
    v_616 = basic_elt(env, 16); // !#elif
    v_616 = (v_617 == v_616 ? lisp_true : nil);
    goto v_140;
    v_616 = nil;
v_140:
    if (v_616 == nil) goto v_138;
    v_616 = nil;
    stack[-2] = v_616;
    stack[-1] = v_616;
    setvalue(basic_elt(env, 4), v_616); // nxtsym!*
    goto v_17;
v_138:
    v_617 = qvalue(basic_elt(env, 4)); // nxtsym!*
    v_616 = basic_elt(env, 17); // !#endif
    if (v_617 == v_616) goto v_152;
    else goto v_153;
v_152:
    goto v_8;
v_153:
    v_617 = qvalue(basic_elt(env, 4)); // nxtsym!*
    v_616 = basic_elt(env, 18); // !#eval
    if (v_617 == v_616) goto v_156;
    else goto v_157;
v_156:
    {   LispObject fn = basic_elt(env, 48); // rread
    v_618 = (*qfn0(fn))(fn);
    }
    env = stack[-3];
    v_617 = qvalue(basic_elt(env, 19)); // !*backtrace
    v_616 = nil;
    {   LispObject fn = basic_elt(env, 49); // errorset
    v_616 = (*qfn3(fn))(fn, v_618, v_617, v_616);
    }
    env = stack[-3];
    v_616 = nil;
    setvalue(basic_elt(env, 3), v_616); // escaped!*
    setvalue(basic_elt(env, 20), v_616); // curescaped!*
    goto v_8;
v_157:
    v_617 = qvalue(basic_elt(env, 4)); // nxtsym!*
    v_616 = basic_elt(env, 21); // !#define
    if (v_617 == v_616) goto v_165;
    else goto v_166;
v_165:
    v_618 = basic_elt(env, 22); // (rread)
    v_617 = qvalue(basic_elt(env, 19)); // !*backtrace
    v_616 = nil;
    {   LispObject fn = basic_elt(env, 49); // errorset
    v_616 = (*qfn3(fn))(fn, v_618, v_617, v_616);
    }
    env = stack[-3];
    stack[-1] = v_616;
    v_616 = nil;
    setvalue(basic_elt(env, 3), v_616); // escaped!*
    setvalue(basic_elt(env, 20), v_616); // curescaped!*
    v_616 = stack[-1];
    {   LispObject fn = basic_elt(env, 50); // errorp
    v_616 = (*qfn1(fn))(fn, v_616);
    }
    env = stack[-3];
    if (v_616 == nil) goto v_177;
    goto v_8;
v_177:
    v_618 = basic_elt(env, 22); // (rread)
    v_617 = qvalue(basic_elt(env, 19)); // !*backtrace
    v_616 = nil;
    {   LispObject fn = basic_elt(env, 49); // errorset
    v_616 = (*qfn3(fn))(fn, v_618, v_617, v_616);
    }
    env = stack[-3];
    stack[0] = v_616;
    v_616 = nil;
    setvalue(basic_elt(env, 3), v_616); // escaped!*
    setvalue(basic_elt(env, 20), v_616); // curescaped!*
    v_616 = stack[0];
    {   LispObject fn = basic_elt(env, 50); // errorp
    v_616 = (*qfn1(fn))(fn, v_616);
    }
    env = stack[-3];
    if (v_616 == nil) goto v_188;
    goto v_8;
v_188:
    v_616 = stack[-1];
    if (!car_legal(v_616)) v_618 = carerror(v_616); else
    v_618 = car(v_616);
    v_617 = basic_elt(env, 23); // newnam
    v_616 = stack[0];
    if (!car_legal(v_616)) v_616 = carerror(v_616); else
    v_616 = car(v_616);
    v_616 = Lputprop(nil, v_618, v_617, v_616);
    env = stack[-3];
    v_616 = basic_elt(env, 24); // "*** "
    v_616 = Lprinc(nil, v_616);
    env = stack[-3];
    v_616 = stack[-1];
    if (!car_legal(v_616)) v_616 = carerror(v_616); else
    v_616 = car(v_616);
    v_616 = Lprin(nil, v_616);
    env = stack[-3];
    v_616 = basic_elt(env, 25); // " => "
    v_616 = Lprinc(nil, v_616);
    env = stack[-3];
    v_616 = stack[0];
    if (!car_legal(v_616)) v_616 = carerror(v_616); else
    v_616 = car(v_616);
    v_616 = Lprint(nil, v_616);
    env = stack[-3];
    goto v_8;
v_166:
    v_617 = qvalue(basic_elt(env, 12)); // ttype!*
    v_616 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    if (v_617 == v_616) goto v_208;
    goto v_21;
v_208:
    v_617 = qvalue(basic_elt(env, 4)); // nxtsym!*
    v_616 = qvalue(basic_elt(env, 26)); // !$eof!$
    if (v_617 == v_616) goto v_211;
    else goto v_212;
v_211:
    {
        LispObject fn = basic_elt(env, 51); // filenderr
        return (*qfn0(fn))(fn);
    }
v_212:
    v_617 = qvalue(basic_elt(env, 4)); // nxtsym!*
    v_616 = basic_elt(env, 27); // !'
    if (v_617 == v_616) goto v_216;
    else goto v_217;
v_216:
    v_616 = basic_elt(env, 28); // "Invalid QUOTE"
    {   LispObject fn = basic_elt(env, 52); // rederr
    v_616 = (*qfn1(fn))(fn, v_616);
    }
    env = stack[-3];
    goto v_64;
v_217:
    v_616 = qvalue(basic_elt(env, 29)); // !*eoldelimp
    if (v_616 == nil) goto v_223;
    v_617 = qvalue(basic_elt(env, 4)); // nxtsym!*
    v_616 = qvalue(basic_elt(env, 30)); // !$eol!$
    if (v_617 == v_616) goto v_226;
    else goto v_223;
v_226:
    goto v_18;
v_223:
    v_617 = qvalue(basic_elt(env, 4)); // nxtsym!*
    v_616 = basic_elt(env, 31); // !#
    if (v_617 == v_616) goto v_233;
    else goto v_234;
v_233:
    v_616 = qvalue(basic_elt(env, 32)); // crchar!*
    v_616 = Lwhitespace_char_p(nil, v_616);
    env = stack[-3];
    v_616 = (v_616 == nil ? lisp_true : nil);
    goto v_232;
v_234:
    v_616 = nil;
    goto v_232;
    v_616 = nil;
v_232:
    if (v_616 == nil) goto v_230;
    goto v_14;
v_230:
    v_616 = qvalue(basic_elt(env, 4)); // nxtsym!*
    if (!symbolp(v_616)) v_616 = nil;
    else { v_616 = qfastgets(v_616);
           if (v_616 != nil) { v_616 = elt(v_616, 11); // switch!*
#ifdef RECORD_GET
             if (v_616 != SPID_NOPROP)
                record_get(elt(fastget_names, 11), 1);
             else record_get(elt(fastget_names, 11), 0),
                v_616 = nil; }
           else record_get(elt(fastget_names, 11), 0); }
#else
             if (v_616 == SPID_NOPROP) v_616 = nil; }}
#endif
    stack[-1] = v_616;
    if (v_616 == nil) goto v_243;
    else goto v_244;
v_243:
    goto v_21;
v_244:
    v_616 = stack[-1];
    if (!car_legal(v_616)) v_617 = cdrerror(v_616); else
    v_617 = cdr(v_616);
    v_616 = basic_elt(env, 2); // !*semicol!*
    if (!consp(v_617)) goto v_248;
    v_617 = car(v_617);
    if (v_617 == v_616) goto v_247;
    else goto v_248;
v_247:
    goto v_18;
v_248:
v_64:
    v_616 = qvalue(basic_elt(env, 32)); // crchar!*
    v_616 = Lwhitespace_char_p(nil, v_616);
    env = stack[-3];
    stack[-2] = v_616;
v_11:
    {   LispObject fn = basic_elt(env, 44); // token
    v_616 = (*qfn0(fn))(fn);
    }
    env = stack[-3];
    setvalue(basic_elt(env, 4), v_616); // nxtsym!*
    v_617 = qvalue(basic_elt(env, 12)); // ttype!*
    v_616 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    if (v_617 == v_616) goto v_259;
    goto v_12;
v_259:
    v_617 = qvalue(basic_elt(env, 4)); // nxtsym!*
    v_616 = qvalue(basic_elt(env, 26)); // !$eof!$
    if (v_617 == v_616) goto v_262;
    else goto v_263;
v_262:
    {
        LispObject fn = basic_elt(env, 51); // filenderr
        return (*qfn0(fn))(fn);
    }
v_263:
    v_616 = stack[-1];
    if (!car_legal(v_616)) v_616 = carerror(v_616); else
    v_616 = car(v_616);
    if (v_616 == nil) goto v_268;
    goto v_13;
v_268:
v_12:
    v_616 = stack[-1];
    if (!car_legal(v_616)) v_616 = cdrerror(v_616); else
    v_616 = cdr(v_616);
    if (!car_legal(v_616)) v_616 = carerror(v_616); else
    v_616 = car(v_616);
    setvalue(basic_elt(env, 1), v_616); // cursym!*
    v_616 = nil;
    setvalue(basic_elt(env, 20), v_616); // curescaped!*
    v_617 = qvalue(basic_elt(env, 1)); // cursym!*
    v_616 = basic_elt(env, 33); // !*rpar!*
    if (v_617 == v_616) goto v_278;
    else goto v_279;
v_278:
    goto v_22;
v_279:
    v_616 = qvalue(basic_elt(env, 1)); // cursym!*
    {
        LispObject fn = basic_elt(env, 53); // addcomment
        return (*qfn1(fn))(fn, v_616);
    }
v_13:
    v_616 = stack[-2];
    if (v_616 == nil) goto v_290;
    else goto v_288;
v_290:
    v_617 = qvalue(basic_elt(env, 4)); // nxtsym!*
    v_616 = stack[-1];
    if (!car_legal(v_616)) v_616 = carerror(v_616); else
    v_616 = car(v_616);
    v_616 = Latsoc(nil, v_617, v_616);
    stack[0] = v_616;
    if (v_616 == nil) goto v_288;
    goto v_289;
v_288:
    goto v_12;
v_289:
    v_616 = qvalue(basic_elt(env, 4)); // nxtsym!*
    {   LispObject fn = basic_elt(env, 46); // prin2x
    v_616 = (*qfn1(fn))(fn, v_616);
    }
    env = stack[-3];
    v_616 = stack[0];
    if (!car_legal(v_616)) v_616 = cdrerror(v_616); else
    v_616 = cdr(v_616);
    stack[-1] = v_616;
    v_616 = stack[-1];
    if (!car_legal(v_616)) v_616 = carerror(v_616); else
    v_616 = car(v_616);
    if (v_616 == nil) goto v_307;
    else goto v_308;
v_307:
    v_616 = stack[-1];
    if (!car_legal(v_616)) v_616 = cdrerror(v_616); else
    v_616 = cdr(v_616);
    if (!car_legal(v_616)) v_617 = carerror(v_616); else
    v_617 = car(v_616);
    v_616 = basic_elt(env, 34); // !*comment!*
    v_616 = (v_617 == v_616 ? lisp_true : nil);
    goto v_306;
v_308:
    v_616 = nil;
    goto v_306;
    v_616 = nil;
v_306:
    if (v_616 == nil) goto v_304;
    {   LispObject fn = basic_elt(env, 54); // read!-comment
    v_616 = (*qfn0(fn))(fn);
    }
    env = stack[-3];
    setvalue(basic_elt(env, 35), v_616); // comment!*
    goto v_8;
v_304:
    goto v_11;
v_14:
    v_616 = nil;
    stack[-2] = v_616;
    v_616 = qvalue(basic_elt(env, 4)); // nxtsym!*
    if (!symbolp(v_616)) v_616 = nil;
    else { v_616 = qfastgets(v_616);
           if (v_616 != nil) { v_616 = elt(v_616, 11); // switch!*
#ifdef RECORD_GET
             if (v_616 != SPID_NOPROP)
                record_get(elt(fastget_names, 11), 1);
             else record_get(elt(fastget_names, 11), 0),
                v_616 = nil; }
           else record_get(elt(fastget_names, 11), 0); }
#else
             if (v_616 == SPID_NOPROP) v_616 = nil; }}
#endif
    stack[-1] = v_616;
    {   LispObject fn = basic_elt(env, 44); // token
    v_616 = (*qfn0(fn))(fn);
    }
    env = stack[-3];
    setvalue(basic_elt(env, 4), v_616); // nxtsym!*
    v_617 = qvalue(basic_elt(env, 4)); // nxtsym!*
    v_616 = basic_elt(env, 36); // if
    if (v_617 == v_616) goto v_330;
    else goto v_331;
v_330:
    v_616 = lisp_true;
    goto v_329;
v_331:
    v_617 = qvalue(basic_elt(env, 4)); // nxtsym!*
    v_616 = basic_elt(env, 5); // else
    if (v_617 == v_616) goto v_339;
    else goto v_340;
v_339:
    v_616 = lisp_true;
    goto v_338;
v_340:
    v_617 = qvalue(basic_elt(env, 4)); // nxtsym!*
    v_616 = basic_elt(env, 37); // elif
    if (v_617 == v_616) goto v_348;
    else goto v_349;
v_348:
    v_616 = lisp_true;
    goto v_347;
v_349:
    v_617 = qvalue(basic_elt(env, 4)); // nxtsym!*
    v_616 = basic_elt(env, 38); // endif
    if (v_617 == v_616) goto v_357;
    else goto v_358;
v_357:
    v_616 = lisp_true;
    goto v_356;
v_358:
    v_617 = qvalue(basic_elt(env, 4)); // nxtsym!*
    v_616 = basic_elt(env, 39); // eval
    if (v_617 == v_616) goto v_366;
    else goto v_367;
v_366:
    v_616 = lisp_true;
    goto v_365;
v_367:
    v_617 = qvalue(basic_elt(env, 4)); // nxtsym!*
    v_616 = basic_elt(env, 40); // define
    v_616 = (v_617 == v_616 ? lisp_true : nil);
    goto v_365;
    v_616 = nil;
v_365:
    goto v_356;
    v_616 = nil;
v_356:
    goto v_347;
    v_616 = nil;
v_347:
    goto v_338;
    v_616 = nil;
v_338:
    goto v_329;
    v_616 = nil;
v_329:
    if (v_616 == nil) goto v_327;
    goto v_15;
v_327:
    v_617 = qvalue(basic_elt(env, 12)); // ttype!*
    v_616 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    if (v_617 == v_616) goto v_379;
    goto v_12;
v_379:
    v_617 = qvalue(basic_elt(env, 4)); // nxtsym!*
    v_616 = qvalue(basic_elt(env, 26)); // !$eof!$
    if (v_617 == v_616) goto v_382;
    else goto v_383;
v_382:
    {
        LispObject fn = basic_elt(env, 51); // filenderr
        return (*qfn0(fn))(fn);
    }
v_383:
    v_616 = stack[-1];
    if (!car_legal(v_616)) v_616 = carerror(v_616); else
    v_616 = car(v_616);
    if (v_616 == nil) goto v_388;
    goto v_13;
v_388:
    goto v_12;
v_15:
    v_616 = qvalue(basic_elt(env, 4)); // nxtsym!*
    {   LispObject fn = basic_elt(env, 46); // prin2x
    v_616 = (*qfn1(fn))(fn, v_616);
    }
    env = stack[-3];
    stack[0] = basic_elt(env, 31); // !#
    v_616 = qvalue(basic_elt(env, 4)); // nxtsym!*
    v_616 = Lexplodec(nil, v_616);
    env = stack[-3];
    v_616 = cons(stack[0], v_616);
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 55); // list2string
    v_616 = (*qfn1(fn))(fn, v_616);
    }
    env = stack[-3];
    v_616 = Lintern(nil, v_616);
    env = stack[-3];
    setvalue(basic_elt(env, 4), v_616); // nxtsym!*
    goto v_10;
v_16:
    {   LispObject fn = basic_elt(env, 48); // rread
    v_618 = (*qfn0(fn))(fn);
    }
    env = stack[-3];
    v_617 = qvalue(basic_elt(env, 19)); // !*backtrace
    v_616 = nil;
    {   LispObject fn = basic_elt(env, 49); // errorset
    v_616 = (*qfn3(fn))(fn, v_618, v_617, v_616);
    }
    env = stack[-3];
    stack[-1] = v_616;
    v_616 = nil;
    setvalue(basic_elt(env, 3), v_616); // escaped!*
    setvalue(basic_elt(env, 20), v_616); // curescaped!*
    v_616 = stack[-1];
    {   LispObject fn = basic_elt(env, 50); // errorp
    v_616 = (*qfn1(fn))(fn, v_616);
    }
    env = stack[-3];
    if (v_616 == nil) goto v_410;
    else goto v_411;
v_410:
    v_616 = stack[-1];
    if (!car_legal(v_616)) v_616 = carerror(v_616); else
    v_616 = car(v_616);
    goto v_409;
v_411:
    v_616 = nil;
    goto v_409;
    v_616 = nil;
v_409:
    if (v_616 == nil) goto v_407;
    goto v_8;
v_407:
    v_616 = nil;
    stack[-1] = v_616;
    v_616 = lisp_true;
    stack[-2] = v_616;
v_17:
    v_617 = qvalue(basic_elt(env, 4)); // nxtsym!*
    v_616 = basic_elt(env, 31); // !#
    if (v_617 == v_616) goto v_427;
    else goto v_428;
v_427:
    v_617 = qvalue(basic_elt(env, 12)); // ttype!*
    v_616 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    if (v_617 == v_616) goto v_433;
    else goto v_434;
v_433:
    v_616 = qvalue(basic_elt(env, 32)); // crchar!*
    v_616 = Lwhitespace_char_p(nil, v_616);
    env = stack[-3];
    v_616 = (v_616 == nil ? lisp_true : nil);
    goto v_432;
v_434:
    v_616 = nil;
    goto v_432;
    v_616 = nil;
v_432:
    goto v_426;
v_428:
    v_616 = nil;
    goto v_426;
    v_616 = nil;
v_426:
    if (v_616 == nil) goto v_424;
    {   LispObject fn = basic_elt(env, 44); // token
    v_616 = (*qfn0(fn))(fn);
    }
    env = stack[-3];
    setvalue(basic_elt(env, 4), v_616); // nxtsym!*
    v_617 = qvalue(basic_elt(env, 12)); // ttype!*
    v_616 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_617 == v_616) goto v_449;
    else goto v_450;
v_449:
    stack[0] = basic_elt(env, 31); // !#
    v_616 = qvalue(basic_elt(env, 4)); // nxtsym!*
    v_616 = Lexplodec(nil, v_616);
    env = stack[-3];
    v_616 = cons(stack[0], v_616);
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 55); // list2string
    v_616 = (*qfn1(fn))(fn, v_616);
    }
    env = stack[-3];
    v_616 = Lintern(nil, v_616);
    env = stack[-3];
    setvalue(basic_elt(env, 4), v_616); // nxtsym!*
    goto v_448;
v_450:
v_448:
    goto v_422;
v_424:
v_422:
    v_617 = qvalue(basic_elt(env, 4)); // nxtsym!*
    v_616 = basic_elt(env, 17); // !#endif
    if (v_617 == v_616) goto v_461;
    else goto v_462;
v_461:
    v_616 = stack[-1];
    if (v_616 == nil) goto v_467;
    else goto v_468;
v_467:
    goto v_8;
v_468:
    v_616 = stack[-1];
    if (!car_legal(v_616)) v_616 = cdrerror(v_616); else
    v_616 = cdr(v_616);
    stack[-1] = v_616;
    goto v_466;
v_466:
    goto v_460;
v_462:
    v_617 = qvalue(basic_elt(env, 4)); // nxtsym!*
    v_616 = basic_elt(env, 14); // !#if
    if (v_617 == v_616) goto v_474;
    else goto v_475;
v_474:
    v_617 = nil;
    v_616 = stack[-1];
    v_616 = cons(v_617, v_616);
    env = stack[-3];
    stack[-1] = v_616;
    goto v_460;
v_475:
    v_617 = qvalue(basic_elt(env, 4)); // nxtsym!*
    v_616 = basic_elt(env, 15); // !#else
    if (v_617 == v_616) goto v_485;
    else goto v_486;
v_485:
    v_616 = stack[-1];
    if (v_616 == nil) goto v_491;
    else goto v_492;
v_491:
    v_616 = stack[-2];
    goto v_490;
v_492:
    v_616 = nil;
    goto v_490;
    v_616 = nil;
v_490:
    goto v_484;
v_486:
    v_616 = nil;
    goto v_484;
    v_616 = nil;
v_484:
    if (v_616 == nil) goto v_482;
    goto v_8;
v_482:
    v_617 = qvalue(basic_elt(env, 4)); // nxtsym!*
    v_616 = basic_elt(env, 16); // !#elif
    if (v_617 == v_616) goto v_505;
    else goto v_506;
v_505:
    v_616 = stack[-1];
    if (v_616 == nil) goto v_511;
    else goto v_512;
v_511:
    v_616 = stack[-2];
    goto v_510;
v_512:
    v_616 = nil;
    goto v_510;
    v_616 = nil;
v_510:
    goto v_504;
v_506:
    v_616 = nil;
    goto v_504;
    v_616 = nil;
v_504:
    if (v_616 == nil) goto v_502;
    goto v_16;
v_502:
v_460:
    {   LispObject fn = basic_elt(env, 44); // token
    v_616 = (*qfn0(fn))(fn);
    }
    env = stack[-3];
    setvalue(basic_elt(env, 4), v_616); // nxtsym!*
    v_617 = qvalue(basic_elt(env, 12)); // ttype!*
    v_616 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    if (v_617 == v_616) goto v_528;
    else goto v_529;
v_528:
    v_617 = qvalue(basic_elt(env, 4)); // nxtsym!*
    v_616 = qvalue(basic_elt(env, 26)); // !$eof!$
    v_616 = (v_617 == v_616 ? lisp_true : nil);
    goto v_527;
v_529:
    v_616 = nil;
    goto v_527;
    v_616 = nil;
v_527:
    if (v_616 == nil) goto v_525;
    {
        LispObject fn = basic_elt(env, 51); // filenderr
        return (*qfn0(fn))(fn);
    }
v_525:
    goto v_17;
v_18:
    v_616 = qvalue(basic_elt(env, 4)); // nxtsym!*
    setvalue(basic_elt(env, 41), v_616); // semic!*
    v_616 = nil;
    setvalue(basic_elt(env, 20), v_616); // curescaped!*
    v_616 = basic_elt(env, 2); // !*semicol!*
    {
        LispObject fn = basic_elt(env, 53); // addcomment
        return (*qfn1(fn))(fn, v_616);
    }
v_19:
    v_616 = stack[-1];
    setvalue(basic_elt(env, 4), v_616); // nxtsym!*
    v_616 = stack[-1];
    v_616 = Lstringp(nil, v_616);
    env = stack[-3];
    if (v_616 == nil) goto v_549;
    goto v_21;
v_549:
    v_616 = stack[-1];
    if (!consp(v_616)) goto v_552;
    else goto v_553;
v_552:
    goto v_10;
v_553:
    goto v_21;
v_20:
    v_616 = qvalue(basic_elt(env, 4)); // nxtsym!*
    if (!car_legal(v_616)) v_617 = carerror(v_616); else
    v_617 = car(v_616);
    v_616 = basic_elt(env, 42); // string
    if (v_617 == v_616) goto v_560;
    goto v_21;
v_560:
    v_616 = basic_elt(env, 43); // " "
    {   LispObject fn = basic_elt(env, 46); // prin2x
    v_616 = (*qfn1(fn))(fn, v_616);
    }
    env = stack[-3];
    v_616 = qvalue(basic_elt(env, 4)); // nxtsym!*
    if (!car_legal(v_616)) v_616 = cdrerror(v_616); else
    v_616 = cdr(v_616);
    if (!car_legal(v_616)) v_616 = carerror(v_616); else
    v_616 = car(v_616);
    v_616 = Lmkquote(nil, v_616);
    env = stack[-3];
    setvalue(basic_elt(env, 4), v_616); // nxtsym!*
    if (!car_legal(v_616)) v_616 = cdrerror(v_616); else
    v_616 = cdr(v_616);
    if (!car_legal(v_616)) v_616 = carerror(v_616); else
    v_616 = car(v_616);
    {   LispObject fn = basic_elt(env, 46); // prin2x
    v_616 = (*qfn1(fn))(fn, v_616);
    }
    env = stack[-3];
v_21:
    v_616 = qvalue(basic_elt(env, 4)); // nxtsym!*
    setvalue(basic_elt(env, 1), v_616); // cursym!*
    v_616 = qvalue(basic_elt(env, 3)); // escaped!*
    setvalue(basic_elt(env, 20), v_616); // curescaped!*
    v_616 = nil;
    setvalue(basic_elt(env, 3), v_616); // escaped!*
    {   LispObject fn = basic_elt(env, 44); // token
    v_616 = (*qfn0(fn))(fn);
    }
    env = stack[-3];
    setvalue(basic_elt(env, 4), v_616); // nxtsym!*
    v_617 = qvalue(basic_elt(env, 4)); // nxtsym!*
    v_616 = qvalue(basic_elt(env, 26)); // !$eof!$
    if (v_617 == v_616) goto v_583;
    else goto v_584;
v_583:
    v_617 = qvalue(basic_elt(env, 12)); // ttype!*
    v_616 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_616 = (v_617 == v_616 ? lisp_true : nil);
    goto v_582;
v_584:
    v_616 = nil;
    goto v_582;
    v_616 = nil;
v_582:
    if (v_616 == nil) goto v_580;
    {
        LispObject fn = basic_elt(env, 51); // filenderr
        return (*qfn0(fn))(fn);
    }
v_580:
v_22:
    v_616 = qvalue(basic_elt(env, 4)); // nxtsym!*
    if (is_number(v_616)) goto v_596;
    v_616 = qvalue(basic_elt(env, 4)); // nxtsym!*
    if (!consp(v_616)) goto v_603;
    else goto v_604;
v_603:
    v_616 = qvalue(basic_elt(env, 4)); // nxtsym!*
    if (!symbolp(v_616)) v_616 = nil;
    else { v_616 = qfastgets(v_616);
           if (v_616 != nil) { v_616 = elt(v_616, 11); // switch!*
#ifdef RECORD_GET
             if (v_616 != SPID_NOPROP)
                record_get(elt(fastget_names, 11), 1);
             else record_get(elt(fastget_names, 11), 0),
                v_616 = nil; }
           else record_get(elt(fastget_names, 11), 0); }
#else
             if (v_616 == SPID_NOPROP) v_616 = nil; }}
#endif
    v_616 = (v_616 == nil ? lisp_true : nil);
    goto v_602;
v_604:
    v_616 = nil;
    goto v_602;
    v_616 = nil;
v_602:
    if (v_616 == nil) goto v_600;
    else goto v_596;
v_600:
    goto v_597;
v_596:
    v_616 = basic_elt(env, 43); // " "
    {   LispObject fn = basic_elt(env, 46); // prin2x
    v_616 = (*qfn1(fn))(fn, v_616);
    }
    env = stack[-3];
    goto v_595;
v_597:
v_595:
    v_616 = qvalue(basic_elt(env, 1)); // cursym!*
    {
        LispObject fn = basic_elt(env, 53); // addcomment
        return (*qfn1(fn))(fn, v_616);
    }
v_7:
    return onevalue(v_616);
}



// Code for ra_budancount

static LispObject CC_ra_budancount(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // ra_transform
    v_11 = (*qfn3(fn))(fn, v_13, v_12, v_11);
    }
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // ra_budan!-0!-1
        return (*qfn1(fn))(fn, v_11);
    }
}



// Code for lalr_prin_nonterminal

static LispObject CC_lalr_prin_nonterminal(LispObject env,
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
    v_25 = v_2;
// end of prologue
    v_26 = v_25;
    v_25 = qvalue(basic_elt(env, 1)); // nonterminal_codes
    {   LispObject fn = basic_elt(env, 2); // cdrassoc
    v_25 = (*qfn2(fn))(fn, v_26, v_25);
    }
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // explode2uc
    v_25 = (*qfn1(fn))(fn, v_25);
    }
    env = stack[-1];
    stack[0] = v_25;
v_7:
    v_25 = stack[0];
    if (v_25 == nil) goto v_14;
    else goto v_15;
v_14:
    v_25 = nil;
    goto v_6;
v_15:
    v_25 = stack[0];
    if (!car_legal(v_25)) v_25 = carerror(v_25); else
    v_25 = car(v_25);
    v_25 = Lprinc(nil, v_25);
    env = stack[-1];
    v_25 = stack[0];
    if (!car_legal(v_25)) v_25 = cdrerror(v_25); else
    v_25 = cdr(v_25);
    stack[0] = v_25;
    goto v_7;
v_6:
    return onevalue(v_25);
}



// Code for remflagss

static LispObject CC_remflagss(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_24, v_25, v_26, v_27;
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
    v_24 = v_3;
    v_26 = v_2;
// end of prologue
    v_27 = v_24;
v_8:
    v_24 = v_27;
    if (v_24 == nil) goto v_12;
    else goto v_13;
v_12:
    v_24 = nil;
    goto v_7;
v_13:
    v_24 = v_27;
    if (!car_legal(v_24)) v_24 = carerror(v_24); else
    v_24 = car(v_24);
    v_25 = v_26;
    v_24 = Lremflag(nil, v_25, v_24);
    env = stack[0];
    v_24 = v_27;
    if (!car_legal(v_24)) v_24 = cdrerror(v_24); else
    v_24 = cdr(v_24);
    v_27 = v_24;
    goto v_8;
v_7:
    return onevalue(v_24);
}



// Code for ordpa

static LispObject CC_ordpa(LispObject env,
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
    {
        LispObject fn = basic_elt(env, 1); // ordp
        return (*qfn2(fn))(fn, v_9, v_8);
    }
}



// Code for rl_smrmknowl

static LispObject CC_rl_smrmknowl(LispObject env,
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
    stack[0] = qvalue(basic_elt(env, 1)); // rl_smrmknowl!*
    v_10 = list2(v_11, v_10);
    env = stack[-1];
    {
        LispObject v_13 = stack[0];
        LispObject fn = basic_elt(env, 2); // apply
        return (*qfn2(fn))(fn, v_13, v_10);
    }
}



// Code for kernord!-split

static LispObject CC_kernordKsplit(LispObject env,
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
    real_push(nil, nil, nil, nil, nil);
    stack_popper stack_popper_var(6);
// copy arguments values to proper place
    stack[-2] = v_3;
    stack[-3] = v_2;
// end of prologue
    stack[-4] = nil;
    stack[-1] = nil;
    v_82 = stack[-3];
    {   LispObject fn = basic_elt(env, 1); // powers
    v_82 = (*qfn1(fn))(fn, v_82);
    }
    env = stack[-5];
    stack[-3] = v_82;
    v_82 = stack[-2];
    {   LispObject fn = basic_elt(env, 1); // powers
    v_82 = (*qfn1(fn))(fn, v_82);
    }
    env = stack[-5];
    stack[-2] = v_82;
    v_82 = stack[-3];
    stack[0] = v_82;
v_16:
    v_82 = stack[0];
    if (v_82 == nil) goto v_20;
    else goto v_21;
v_20:
    goto v_15;
v_21:
    v_82 = stack[0];
    if (!car_legal(v_82)) v_82 = carerror(v_82); else
    v_82 = car(v_82);
    v_84 = v_82;
    v_82 = v_84;
    if (!car_legal(v_82)) v_83 = carerror(v_82); else
    v_83 = car(v_82);
    v_82 = stack[-2];
    v_82 = Lassoc(nil, v_83, v_82);
    if (v_82 == nil) goto v_30;
    v_83 = v_84;
    v_82 = stack[-1];
    v_82 = cons(v_83, v_82);
    env = stack[-5];
    stack[-1] = v_82;
    goto v_28;
v_30:
    v_83 = v_84;
    v_82 = stack[-4];
    v_82 = cons(v_83, v_82);
    env = stack[-5];
    stack[-4] = v_82;
    goto v_28;
v_28:
    v_82 = stack[0];
    if (!car_legal(v_82)) v_82 = cdrerror(v_82); else
    v_82 = cdr(v_82);
    stack[0] = v_82;
    goto v_16;
v_15:
    v_82 = stack[-2];
    stack[0] = v_82;
v_48:
    v_82 = stack[0];
    if (v_82 == nil) goto v_52;
    else goto v_53;
v_52:
    goto v_47;
v_53:
    v_82 = stack[0];
    if (!car_legal(v_82)) v_82 = carerror(v_82); else
    v_82 = car(v_82);
    v_84 = v_82;
    v_82 = v_84;
    if (!car_legal(v_82)) v_83 = carerror(v_82); else
    v_83 = car(v_82);
    v_82 = stack[-3];
    v_82 = Lassoc(nil, v_83, v_82);
    if (v_82 == nil) goto v_62;
    v_83 = v_84;
    v_82 = stack[-1];
    v_82 = cons(v_83, v_82);
    env = stack[-5];
    stack[-1] = v_82;
    goto v_60;
v_62:
    v_83 = v_84;
    v_82 = stack[-4];
    v_82 = cons(v_83, v_82);
    env = stack[-5];
    stack[-4] = v_82;
    goto v_60;
v_60:
    v_82 = stack[0];
    if (!car_legal(v_82)) v_82 = cdrerror(v_82); else
    v_82 = cdr(v_82);
    stack[0] = v_82;
    goto v_48;
v_47:
    v_82 = stack[-4];
    v_83 = Lnreverse(nil, v_82);
    env = stack[-5];
    v_82 = stack[-1];
    v_82 = Lnreverse(nil, v_82);
    return cons(v_83, v_82);
    return onevalue(v_82);
}



// Code for basicom

static LispObject CC_basicom(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_32;
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
    v_32 = stack[0];
    if (is_number(v_32)) goto v_8;
    else goto v_9;
v_8:
    v_32 = stack[0];
    v_32 = integerp(v_32);
    if (v_32 == nil) goto v_14;
    v_32 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // integerom
    v_32 = (*qfn1(fn))(fn, v_32);
    }
    env = stack[-1];
    goto v_12;
v_14:
v_12:
    v_32 = stack[0];
    v_32 = Lfloatp(nil, v_32);
    env = stack[-1];
    if (v_32 == nil) goto v_22;
    v_32 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // floatom
    v_32 = (*qfn1(fn))(fn, v_32);
    }
    goto v_20;
v_22:
v_20:
    goto v_7;
v_9:
    v_32 = stack[0];
    if (symbolp(v_32)) goto v_27;
    else goto v_28;
v_27:
    v_32 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // variableom
    v_32 = (*qfn1(fn))(fn, v_32);
    }
    goto v_7;
v_28:
v_7:
    v_32 = nil;
    return onevalue(v_32);
}



// Code for dfn_prop

static LispObject CC_dfn_prop(LispObject env,
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
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_30 = v_2;
// end of prologue
    if (!car_legal(v_30)) v_30 = cdrerror(v_30); else
    v_30 = cdr(v_30);
    v_30 = Llength(nil, v_30);
    env = stack[0];
    v_32 = v_30;
    v_31 = v_32;
    v_30 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_31 == v_30) goto v_10;
    else goto v_11;
v_10:
    v_30 = basic_elt(env, 1); // dfn
    goto v_9;
v_11:
    v_31 = v_32;
    v_30 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    if (v_31 == v_30) goto v_15;
    else goto v_16;
v_15:
    v_30 = basic_elt(env, 2); // dfn2
    goto v_9;
v_16:
    v_31 = v_32;
    v_30 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    if (v_31 == v_30) goto v_20;
    else goto v_21;
v_20:
    v_30 = basic_elt(env, 3); // dfn3
    goto v_9;
v_21:
    v_30 = basic_elt(env, 1); // dfn
    v_31 = v_32;
    {
        LispObject fn = basic_elt(env, 4); // mkid
        return (*qfn2(fn))(fn, v_30, v_31);
    }
    v_30 = nil;
v_9:
    return onevalue(v_30);
}



// Code for initwght

static LispObject CC_initwght(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_71, v_72;
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
    stack[-3] = v_2;
// end of prologue
    v_71 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-5] = v_71;
    stack[0] = v_71;
    stack[-1] = qvalue(basic_elt(env, 1)); // codmat
    v_72 = qvalue(basic_elt(env, 2)); // maxvar
    v_71 = stack[-3];
    v_71 = plus2(v_72, v_71);
    env = stack[-6];
    v_72 = Lgetv(nil, stack[-1], v_71);
    env = stack[-6];
    v_71 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_71 = Lgetv(nil, v_72, v_71);
    env = stack[-6];
    stack[-4] = v_71;
v_12:
    v_71 = stack[-4];
    if (v_71 == nil) goto v_22;
    else goto v_23;
v_22:
    goto v_11;
v_23:
    v_71 = stack[-4];
    if (!car_legal(v_71)) v_71 = carerror(v_71); else
    v_71 = car(v_71);
    stack[-2] = v_71;
    stack[-1] = qvalue(basic_elt(env, 1)); // codmat
    v_72 = qvalue(basic_elt(env, 2)); // maxvar
    v_71 = stack[-2];
    if (!car_legal(v_71)) v_71 = carerror(v_71); else
    v_71 = car(v_71);
    v_71 = plus2(v_72, v_71);
    env = stack[-6];
    v_72 = Lgetv(nil, stack[-1], v_71);
    env = stack[-6];
    v_71 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_71 = Lgetv(nil, v_72, v_71);
    env = stack[-6];
    if (v_71 == nil) goto v_32;
    v_71 = stack[-2];
    if (!car_legal(v_71)) v_71 = cdrerror(v_71); else
    v_71 = cdr(v_71);
    if (!car_legal(v_71)) v_71 = carerror(v_71); else
    v_71 = car(v_71);
    {   LispObject fn = basic_elt(env, 3); // dm!-abs
    v_71 = (*qfn1(fn))(fn, v_71);
    }
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 4); // !:onep
    v_71 = (*qfn1(fn))(fn, v_71);
    }
    env = stack[-6];
    if (v_71 == nil) goto v_43;
    else goto v_44;
v_43:
    v_71 = stack[-5];
    v_71 = add1(v_71);
    env = stack[-6];
    stack[-5] = v_71;
    goto v_42;
v_44:
v_42:
    v_71 = stack[0];
    v_71 = add1(v_71);
    env = stack[-6];
    stack[0] = v_71;
    goto v_30;
v_32:
v_30:
    v_71 = stack[-4];
    if (!car_legal(v_71)) v_71 = cdrerror(v_71); else
    v_71 = cdr(v_71);
    stack[-4] = v_71;
    goto v_12;
v_11:
    stack[-1] = qvalue(basic_elt(env, 1)); // codmat
    v_72 = qvalue(basic_elt(env, 2)); // maxvar
    v_71 = stack[-3];
    v_71 = plus2(v_72, v_71);
    env = stack[-6];
    stack[-4] = Lgetv(nil, stack[-1], v_71);
    env = stack[-6];
    stack[-3] = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-2] = stack[0];
    stack[-1] = stack[-5];
    v_72 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_71 = stack[-5];
    v_71 = times2(v_72, v_71);
    env = stack[-6];
    v_71 = plus2(stack[0], v_71);
    env = stack[-6];
    v_71 = acons(stack[-2], stack[-1], v_71);
    env = stack[-6];
    v_71 = Lputv(nil, stack[-4], stack[-3], v_71);
    v_71 = nil;
    return onevalue(v_71);
}



// Code for bcone!?

static LispObject CC_bconeW(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_28, v_29, v_30;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_29 = v_2;
// end of prologue
    v_28 = qvalue(basic_elt(env, 1)); // !*grmod!*
    if (v_28 == nil) goto v_7;
    v_28 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
        return Leqn_2(nil, v_29, v_28);
v_7:
    v_28 = v_29;
    if (!car_legal(v_28)) v_30 = cdrerror(v_28); else
    v_30 = cdr(v_28);
    v_28 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_30 == v_28) goto v_16;
    else goto v_17;
v_16:
    v_28 = v_29;
    if (!car_legal(v_28)) v_29 = carerror(v_28); else
    v_29 = car(v_28);
    v_28 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_28 = (v_29 == v_28 ? lisp_true : nil);
    goto v_15;
v_17:
    v_28 = nil;
    goto v_15;
    v_28 = nil;
v_15:
    goto v_5;
    v_28 = nil;
v_5:
    return onevalue(v_28);
}



// Code for vdplength

static LispObject CC_vdplength(LispObject env,
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
    if (!car_legal(v_10)) v_10 = carerror(v_10); else
    v_10 = car(v_10);
    {
        LispObject fn = basic_elt(env, 1); // diplength
        return (*qfn1(fn))(fn, v_10);
    }
}



// Code for plus!:

static LispObject CC_plusT(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_68, v_69, v_70, v_71;
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
    v_70 = v_3;
    v_71 = v_2;
// end of prologue
    v_68 = v_71;
    if (!car_legal(v_68)) v_68 = cdrerror(v_68); else
    v_68 = cdr(v_68);
    if (!car_legal(v_68)) v_69 = carerror(v_68); else
    v_69 = car(v_68);
    stack[-1] = v_69;
    v_68 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_69 == v_68) goto v_14;
    else goto v_15;
v_14:
    v_68 = v_70;
    goto v_13;
v_15:
    v_68 = v_70;
    if (!car_legal(v_68)) v_68 = cdrerror(v_68); else
    v_68 = cdr(v_68);
    if (!car_legal(v_68)) v_69 = carerror(v_68); else
    v_69 = car(v_68);
    stack[0] = v_69;
    v_68 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_69 == v_68) goto v_21;
    else goto v_22;
v_21:
    v_68 = v_71;
    goto v_13;
v_22:
    v_68 = v_71;
    if (!car_legal(v_68)) v_68 = cdrerror(v_68); else
    v_68 = cdr(v_68);
    if (!car_legal(v_68)) v_68 = cdrerror(v_68); else
    v_68 = cdr(v_68);
    stack[-4] = v_68;
    v_69 = v_70;
    if (!car_legal(v_69)) v_69 = cdrerror(v_69); else
    v_69 = cdr(v_69);
    if (!car_legal(v_69)) v_69 = cdrerror(v_69); else
    v_69 = cdr(v_69);
    stack[-2] = v_69;
    v_69 = difference2(v_68, v_69);
    env = stack[-5];
    stack[-3] = v_69;
    v_68 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_69 == v_68) goto v_28;
    else goto v_29;
v_28:
    stack[-2] = basic_elt(env, 1); // !:rd!:
    v_69 = stack[-1];
    v_68 = stack[0];
    v_69 = plus2(v_69, v_68);
    v_68 = stack[-4];
    {
        LispObject v_77 = stack[-2];
        return list2star(v_77, v_69, v_68);
    }
v_29:
    v_69 = stack[-3];
    v_68 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_68 = static_cast<LispObject>(greaterp2(v_69, v_68));
    v_68 = v_68 ? lisp_true : nil;
    env = stack[-5];
    if (v_68 == nil) goto v_45;
    stack[-4] = basic_elt(env, 1); // !:rd!:
    v_69 = stack[-1];
    v_68 = stack[-3];
    {   LispObject fn = basic_elt(env, 2); // ashift
    v_69 = (*qfn2(fn))(fn, v_69, v_68);
    }
    env = stack[-5];
    v_68 = stack[0];
    v_69 = plus2(v_69, v_68);
    v_68 = stack[-2];
    {
        LispObject v_78 = stack[-4];
        return list2star(v_78, v_69, v_68);
    }
v_45:
    stack[-2] = basic_elt(env, 1); // !:rd!:
    v_68 = stack[-3];
    v_68 = negate(v_68);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 2); // ashift
    v_68 = (*qfn2(fn))(fn, stack[0], v_68);
    }
    env = stack[-5];
    v_69 = plus2(stack[-1], v_68);
    v_68 = stack[-4];
    {
        LispObject v_79 = stack[-2];
        return list2star(v_79, v_69, v_68);
    }
    v_68 = nil;
v_13:
    return onevalue(v_68);
}



// Code for getphystypesf

static LispObject CC_getphystypesf(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_33;
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
    if (v_33 == nil) goto v_10;
    else goto v_11;
v_10:
    v_33 = lisp_true;
    goto v_9;
v_11:
    v_33 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // domain!*p
    v_33 = (*qfn1(fn))(fn, v_33);
    }
    env = stack[-1];
    goto v_9;
    v_33 = nil;
v_9:
    if (v_33 == nil) goto v_7;
    v_33 = nil;
    goto v_5;
v_7:
    v_33 = stack[0];
    if (!car_legal(v_33)) v_33 = carerror(v_33); else
    v_33 = car(v_33);
    if (!car_legal(v_33)) v_33 = carerror(v_33); else
    v_33 = car(v_33);
    if (!car_legal(v_33)) v_33 = carerror(v_33); else
    v_33 = car(v_33);
    {   LispObject fn = basic_elt(env, 2); // getphystype
    v_33 = (*qfn1(fn))(fn, v_33);
    }
    env = stack[-1];
    if (v_33 == nil) goto v_23;
    else goto v_22;
v_23:
    v_33 = stack[0];
    if (!car_legal(v_33)) v_33 = carerror(v_33); else
    v_33 = car(v_33);
    if (!car_legal(v_33)) v_33 = cdrerror(v_33); else
    v_33 = cdr(v_33);
    stack[0] = v_33;
    goto v_1;
v_22:
    goto v_5;
    v_33 = nil;
v_5:
    return onevalue(v_33);
}



// Code for split!-road

static LispObject CC_splitKroad(LispObject env,
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    stack[-1] = v_3;
    stack[-2] = v_2;
// end of prologue
    v_25 = stack[-1];
    if (!car_legal(v_25)) stack[-3] = carerror(v_25); else
    stack[-3] = car(v_25);
    v_25 = stack[-2];
    if (!car_legal(v_25)) v_27 = carerror(v_25); else
    v_27 = car(v_25);
    v_25 = stack[-2];
    if (!car_legal(v_25)) v_26 = cdrerror(v_25); else
    v_26 = cdr(v_25);
    v_25 = stack[-1];
    if (!car_legal(v_25)) v_25 = cdrerror(v_25); else
    v_25 = cdr(v_25);
    if (!car_legal(v_25)) v_25 = carerror(v_25); else
    v_25 = car(v_25);
    {   LispObject fn = basic_elt(env, 1); // sroad
    stack[0] = (*qfn3(fn))(fn, v_27, v_26, v_25);
    }
    env = stack[-4];
    v_25 = stack[-2];
    if (!car_legal(v_25)) v_27 = carerror(v_25); else
    v_27 = car(v_25);
    v_25 = stack[-2];
    if (!car_legal(v_25)) v_26 = cdrerror(v_25); else
    v_26 = cdr(v_25);
    v_25 = stack[-1];
    if (!car_legal(v_25)) v_25 = cdrerror(v_25); else
    v_25 = cdr(v_25);
    if (!car_legal(v_25)) v_25 = cdrerror(v_25); else
    v_25 = cdr(v_25);
    if (!car_legal(v_25)) v_25 = carerror(v_25); else
    v_25 = car(v_25);
    {   LispObject fn = basic_elt(env, 1); // sroad
    v_25 = (*qfn3(fn))(fn, v_27, v_26, v_25);
    }
    {
        LispObject v_32 = stack[-3];
        LispObject v_33 = stack[0];
        return list3(v_32, v_33, v_25);
    }
}



setup_type const u11_setup[] =
{
    {"form1",                   G0W3,     G1W3,     G2W3,     CC_form1, G4W3},
    {"ord",                     G0W1,     CC_ord,   G2W1,     G3W1,     G4W1},
    {"*id2num",                 G0W1,     CC_Hid2num,G2W1,    G3W1,     G4W1},
    {"sc_kern",                 G0W1,     CC_sc_kern,G2W1,    G3W1,     G4W1},
    {"list_assoc",              G0W2,     G1W2,     CC_list_assoc,G3W2, G4W2},
    {"get_action_without_lookahead",G0W1, CC_get_action_without_lookahead,G2W1,G3W1,G4W1},
    {"revv0",                   G0W2,     G1W2,     CC_revv0, G3W2,     G4W2},
    {"rl_external",             G0W2,     G1W2,     CC_rl_external,G3W2,G4W2},
    {"quotfx",                  G0W2,     G1W2,     CC_quotfx,G3W2,     G4W2},
    {"ibalp_clauselp",          G0W1,     CC_ibalp_clauselp,G2W1,G3W1,  G4W1},
    {"expression",              G0W1,     CC_expression,G2W1, G3W1,     G4W1},
    {"ident",                   G0W1,     CC_ident, G2W1,     G3W1,     G4W1},
    {"vdpgetprop",              G0W2,     G1W2,     CC_vdpgetprop,G3W2, G4W2},
    {"xdegree",                 G0W1,     CC_xdegree,G2W1,    G3W1,     G4W1},
    {"sfpx",                    G0W1,     CC_sfpx,  G2W1,     G3W1,     G4W1},
    {"mv-domainlist--",         G0W2,     G1W2,     CC_mvKdomainlistKK,G3W2,G4W2},
    {"exptf",                   G0W2,     G1W2,     CC_exptf, G3W2,     G4W2},
    {"lalr_generate_lr0_collection",CC_lalr_generate_lr0_collection,G1W0,G2W0,G3W0,G4W0},
    {"convertmode1",            G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_convertmode1},
    {"ofsf_posvarpat",          G0W2,     G1W2,     CC_ofsf_posvarpat,G3W2,G4W2},
    {"monommultiplybyvariable", G0W2,     G1W2,     CC_monommultiplybyvariable,G3W2,G4W2},
    {"totalcompare",            G0W2,     G1W2,     CC_totalcompare,G3W2,G4W2},
    {"tayexp-difference",       G0W2,     G1W2,     CC_tayexpKdifference,G3W2,G4W2},
    {"cl_smcpknowl",            G0W1,     CC_cl_smcpknowl,G2W1,G3W1,    G4W1},
    {"exchk2",                  G0W2,     G1W2,     CC_exchk2,G3W2,     G4W2},
    {"mkuwedge",                G0W1,     CC_mkuwedge,G2W1,   G3W1,     G4W1},
    {"formop",                  G0W1,     CC_formop,G2W1,     G3W1,     G4W1},
    {"leftzeros",               G0W1,     CC_leftzeros,G2W1,  G3W1,     G4W1},
    {"arintequiv:",             G0W1,     CC_arintequivT,G2W1,G3W1,     G4W1},
    {"reduce-mod-p",            G0W1,     CC_reduceKmodKp,G2W1,G3W1,    G4W1},
    {"mconv",                   G0W1,     CC_mconv, G2W1,     G3W1,     G4W1},
    {"lalr_lr0_itemset_to_lalr_kernel",G0W1,CC_lalr_lr0_itemset_to_lalr_kernel,G2W1,G3W1,G4W1},
    {"formclis",                G0W3,     G1W3,     G2W3,     CC_formclis,G4W3},
    {"preptayexp",              G0W1,     CC_preptayexp,G2W1, G3W1,     G4W1},
    {"ofsf_prepat",             G0W1,     CC_ofsf_prepat,G2W1,G3W1,     G4W1},
    {"image-of-power",          G0W2,     G1W2,     CC_imageKofKpower,G3W2,G4W2},
    {"addpf",                   G0W2,     G1W2,     CC_addpf, G3W2,     G4W2},
    {"id2bytelist",             G0W1,     CC_id2bytelist,G2W1,G3W1,     G4W1},
    {"scan",                    CC_scan,  G1W0,     G2W0,     G3W0,     G4W0},
    {"ra_budancount",           G0W3,     G1W3,     G2W3,     CC_ra_budancount,G4W3},
    {"lalr_prin_nonterminal",   G0W1,     CC_lalr_prin_nonterminal,G2W1,G3W1,G4W1},
    {"remflagss",               G0W2,     G1W2,     CC_remflagss,G3W2,  G4W2},
    {"ordpa",                   G0W2,     G1W2,     CC_ordpa, G3W2,     G4W2},
    {"rl_smrmknowl",            G0W2,     G1W2,     CC_rl_smrmknowl,G3W2,G4W2},
    {"kernord-split",           G0W2,     G1W2,     CC_kernordKsplit,G3W2,G4W2},
    {"basicom",                 G0W1,     CC_basicom,G2W1,    G3W1,     G4W1},
    {"dfn_prop",                G0W1,     CC_dfn_prop,G2W1,   G3W1,     G4W1},
    {"initwght",                G0W1,     CC_initwght,G2W1,   G3W1,     G4W1},
    {"bcone?",                  G0W1,     CC_bconeW,G2W1,     G3W1,     G4W1},
    {"vdplength",               G0W1,     CC_vdplength,G2W1,  G3W1,     G4W1},
    {"plus:",                   G0W2,     G1W2,     CC_plusT, G3W2,     G4W2},
    {"getphystypesf",           G0W1,     CC_getphystypesf,G2W1,G3W1,   G4W1},
    {"split-road",              G0W2,     G1W2,     CC_splitKroad,G3W2, G4W2},
    {nullptr, 
        reinterpret_cast<no_args *>(
            reinterpret_cast<uintptr_t>("u11")),
        reinterpret_cast<one_arg *>(
            reinterpret_cast<uintptr_t>("49994 7990876 9021729")),
        nullptr, nullptr, nullptr}
};

// end of generated code
