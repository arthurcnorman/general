
// $destdir/u28.c        Machine generated C code

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


// Code for inprint

static LispObject CC_inprint(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_319, v_320, v_321;
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
    stack[0] = nil;
    v_320 = stack[-3];
    v_319 = basic_elt(env, 1); // times
    if (v_320 == v_319) goto v_17;
    else goto v_18;
v_17:
    v_319 = qvalue(basic_elt(env, 2)); // !*nat
    if (v_319 == nil) goto v_23;
    else goto v_24;
v_23:
    v_319 = nil;
    goto v_22;
v_24:
    v_319 = qvalue(basic_elt(env, 3)); // !*asterisk
    v_319 = (v_319 == nil ? lisp_true : nil);
    goto v_22;
    v_319 = nil;
v_22:
    goto v_16;
v_18:
    v_319 = nil;
    goto v_16;
    v_319 = nil;
v_16:
    if (v_319 == nil) goto v_14;
    v_319 = basic_elt(env, 4); // times2
    stack[-3] = v_319;
    v_321 = basic_elt(env, 4); // times2
    v_320 = basic_elt(env, 5); // infix
    v_319 = basic_elt(env, 1); // times
    if (!symbolp(v_319)) v_319 = nil;
    else { v_319 = qfastgets(v_319);
           if (v_319 != nil) { v_319 = elt(v_319, 23); // infix
#ifdef RECORD_GET
             if (v_319 != SPID_NOPROP)
                record_get(elt(fastget_names, 23), 1);
             else record_get(elt(fastget_names, 23), 0),
                v_319 = nil; }
           else record_get(elt(fastget_names, 23), 0); }
#else
             if (v_319 == SPID_NOPROP) v_319 = nil; }}
#endif
    v_319 = Lputprop(nil, v_321, v_320, v_319);
    env = stack[-5];
    v_321 = basic_elt(env, 4); // times2
    v_320 = basic_elt(env, 6); // prtch
    v_319 = basic_elt(env, 7); // " "
    v_319 = Lputprop(nil, v_321, v_320, v_319);
    env = stack[-5];
    goto v_12;
v_14:
v_12:
    v_320 = stack[-3];
    v_319 = basic_elt(env, 8); // plus
    if (v_320 == v_319) goto v_50;
    else goto v_51;
v_50:
    v_319 = qvalue(basic_elt(env, 9)); // !*revpri
    goto v_49;
v_51:
    v_319 = nil;
    goto v_49;
    v_319 = nil;
v_49:
    if (v_319 == nil) goto v_47;
    v_319 = stack[-1];
    v_319 = Lreverse(nil, v_319);
    env = stack[-5];
    stack[-1] = v_319;
    goto v_45;
v_47:
v_45:
    v_319 = stack[-3];
    if (!symbolp(v_319)) v_319 = nil;
    else { v_319 = qfastgets(v_319);
           if (v_319 != nil) { v_319 = elt(v_319, 49); // alt
#ifdef RECORD_GET
             if (v_319 != SPID_NOPROP)
                record_get(elt(fastget_names, 49), 1);
             else record_get(elt(fastget_names, 49), 0),
                v_319 = nil; }
           else record_get(elt(fastget_names, 49), 0); }
#else
             if (v_319 == SPID_NOPROP) v_319 = nil; }}
#endif
    if (v_319 == nil) goto v_62;
    else goto v_63;
v_62:
    v_320 = stack[-3];
    v_319 = basic_elt(env, 10); // not
    if (v_320 == v_319) goto v_68;
    else goto v_69;
v_68:
    v_319 = stack[-3];
    {   LispObject fn = basic_elt(env, 20); // oprin
    v_319 = (*qfn1(fn))(fn, v_319);
    }
    env = stack[-5];
    goto v_67;
v_69:
    v_320 = stack[-3];
    v_319 = basic_elt(env, 11); // setq
    if (v_320 == v_319) goto v_78;
    else goto v_79;
v_78:
    v_319 = stack[-1];
    v_319 = Lreverse(nil, v_319);
    env = stack[-5];
    if (!car_legal(v_319)) v_319 = carerror(v_319); else
    v_319 = car(v_319);
    stack[-4] = v_319;
    if (!consp(v_319)) goto v_85;
    v_319 = stack[-4];
    if (!car_legal(v_319)) v_319 = carerror(v_319); else
    v_319 = car(v_319);
    if (symbolp(v_319)) goto v_92;
    v_319 = nil;
    goto v_90;
v_92:
    v_319 = stack[-4];
    {   LispObject fn = basic_elt(env, 21); // getrtype
    v_319 = (*qfn1(fn))(fn, v_319);
    }
    env = stack[-5];
    stack[0] = v_319;
    if (v_319 == nil) goto v_100;
    else goto v_101;
v_100:
    v_319 = nil;
    goto v_99;
v_101:
    v_320 = stack[0];
    v_319 = basic_elt(env, 12); // tag
    v_320 = get(v_320, v_319);
    env = stack[-5];
    v_319 = basic_elt(env, 13); // setprifn
    v_319 = get(v_320, v_319);
    env = stack[-5];
    stack[0] = v_319;
    goto v_99;
    v_319 = nil;
v_99:
    goto v_90;
    v_319 = nil;
v_90:
    goto v_83;
v_85:
    v_319 = nil;
    goto v_83;
    v_319 = nil;
v_83:
    goto v_77;
v_79:
    v_319 = nil;
    goto v_77;
    v_319 = nil;
v_77:
    if (v_319 == nil) goto v_75;
    v_321 = stack[0];
    v_319 = stack[-1];
    if (!car_legal(v_319)) v_320 = carerror(v_319); else
    v_320 = car(v_319);
    v_319 = stack[-4];
        return Lapply2(nil, v_321, v_320, v_319);
v_75:
v_67:
    v_319 = stack[-1];
    if (!car_legal(v_319)) v_319 = carerror(v_319); else
    v_319 = car(v_319);
    if (!consp(v_319)) goto v_130;
    v_319 = stack[-1];
    if (!car_legal(v_319)) v_319 = carerror(v_319); else
    v_319 = car(v_319);
    if (!car_legal(v_319)) v_319 = carerror(v_319); else
    v_319 = car(v_319);
    if (symbolp(v_319)) goto v_136;
    v_319 = nil;
    goto v_134;
v_136:
    v_319 = qvalue(basic_elt(env, 2)); // !*nat
    if (v_319 == nil) goto v_145;
    else goto v_146;
v_145:
    v_319 = nil;
    goto v_144;
v_146:
    v_319 = stack[-1];
    if (!car_legal(v_319)) v_319 = carerror(v_319); else
    v_319 = car(v_319);
    if (!car_legal(v_319)) v_319 = carerror(v_319); else
    v_319 = car(v_319);
    if (!symbolp(v_319)) v_319 = nil;
    else { v_319 = qfastgets(v_319);
           if (v_319 != nil) { v_319 = elt(v_319, 57); // prifn
#ifdef RECORD_GET
             if (v_319 != SPID_NOPROP)
                record_get(elt(fastget_names, 57), 1);
             else record_get(elt(fastget_names, 57), 0),
                v_319 = nil; }
           else record_get(elt(fastget_names, 57), 0); }
#else
             if (v_319 == SPID_NOPROP) v_319 = nil; }}
#endif
    stack[-4] = v_319;
    if (v_319 == nil) goto v_155;
    else goto v_154;
v_155:
    v_319 = stack[-1];
    if (!car_legal(v_319)) v_319 = carerror(v_319); else
    v_319 = car(v_319);
    if (!car_legal(v_319)) v_319 = carerror(v_319); else
    v_319 = car(v_319);
    if (!symbolp(v_319)) v_319 = nil;
    else { v_319 = qfastgets(v_319);
           if (v_319 != nil) { v_319 = elt(v_319, 60); // pprifn
#ifdef RECORD_GET
             if (v_319 != SPID_NOPROP)
                record_get(elt(fastget_names, 60), 1);
             else record_get(elt(fastget_names, 60), 0),
                v_319 = nil; }
           else record_get(elt(fastget_names, 60), 0); }
#else
             if (v_319 == SPID_NOPROP) v_319 = nil; }}
#endif
    stack[-4] = v_319;
    if (v_319 == nil) goto v_160;
    else goto v_154;
v_160:
    v_319 = nil;
    goto v_152;
v_154:
    v_320 = stack[-4];
    v_319 = stack[-3];
    v_320 = get(v_320, v_319);
    env = stack[-5];
    v_319 = basic_elt(env, 14); // inbrackets
    v_319 = (v_320 == v_319 ? lisp_true : nil);
    goto v_152;
    v_319 = nil;
v_152:
    goto v_144;
    v_319 = nil;
v_144:
    goto v_134;
    v_319 = nil;
v_134:
    goto v_128;
v_130:
    v_319 = nil;
    goto v_128;
    v_319 = nil;
v_128:
    if (v_319 == nil) goto v_126;
    v_319 = basic_elt(env, 15); // "("
    {   LispObject fn = basic_elt(env, 22); // prin2!*
    v_319 = (*qfn1(fn))(fn, v_319);
    }
    env = stack[-5];
    v_319 = stack[-1];
    if (!car_legal(v_319)) v_320 = carerror(v_319); else
    v_320 = car(v_319);
    v_319 = stack[-2];
    {   LispObject fn = basic_elt(env, 23); // maprint
    v_319 = (*qfn2(fn))(fn, v_320, v_319);
    }
    env = stack[-5];
    v_319 = basic_elt(env, 16); // ")"
    {   LispObject fn = basic_elt(env, 22); // prin2!*
    v_319 = (*qfn1(fn))(fn, v_319);
    }
    env = stack[-5];
    goto v_124;
v_126:
    v_319 = qvalue(basic_elt(env, 17)); // !*nosplit
    if (v_319 == nil) goto v_185;
    v_319 = qvalue(basic_elt(env, 18)); // testing!-width!*
    if (v_319 == nil) goto v_188;
    else goto v_185;
v_188:
    v_319 = stack[-1];
    if (!car_legal(v_319)) v_321 = carerror(v_319); else
    v_321 = car(v_319);
    v_320 = stack[-2];
    v_319 = nil;
    {   LispObject fn = basic_elt(env, 24); // prinfit
    v_319 = (*qfn3(fn))(fn, v_321, v_320, v_319);
    }
    env = stack[-5];
    goto v_124;
v_185:
    v_319 = stack[-1];
    if (!car_legal(v_319)) v_320 = carerror(v_319); else
    v_320 = car(v_319);
    v_319 = stack[-2];
    {   LispObject fn = basic_elt(env, 23); // maprint
    v_319 = (*qfn2(fn))(fn, v_320, v_319);
    }
    env = stack[-5];
    goto v_124;
v_124:
    v_319 = stack[-1];
    if (!car_legal(v_319)) v_319 = cdrerror(v_319); else
    v_319 = cdr(v_319);
    stack[-1] = v_319;
    goto v_61;
v_63:
v_61:
    v_319 = qvalue(basic_elt(env, 17)); // !*nosplit
    if (v_319 == nil) goto v_206;
    v_319 = qvalue(basic_elt(env, 18)); // testing!-width!*
    if (v_319 == nil) goto v_209;
    else goto v_206;
v_209:
    v_319 = stack[-1];
    stack[-1] = v_319;
v_214:
    v_319 = stack[-1];
    if (v_319 == nil) goto v_218;
    else goto v_219;
v_218:
    goto v_213;
v_219:
    v_319 = stack[-1];
    if (!car_legal(v_319)) v_319 = carerror(v_319); else
    v_319 = car(v_319);
    stack[0] = v_319;
    v_319 = stack[0];
    if (!consp(v_319)) goto v_231;
    else goto v_232;
v_231:
    v_319 = lisp_true;
    goto v_230;
v_232:
    v_320 = stack[-3];
    v_319 = stack[0];
    if (!car_legal(v_319)) v_319 = carerror(v_319); else
    v_319 = car(v_319);
    if (!symbolp(v_319)) v_319 = nil;
    else { v_319 = qfastgets(v_319);
           if (v_319 != nil) { v_319 = elt(v_319, 49); // alt
#ifdef RECORD_GET
             if (v_319 != SPID_NOPROP)
                record_get(elt(fastget_names, 49), 1);
             else record_get(elt(fastget_names, 49), 0),
                v_319 = nil; }
           else record_get(elt(fastget_names, 49), 0); }
#else
             if (v_319 == SPID_NOPROP) v_319 = nil; }}
#endif
    v_319 = (v_320 == v_319 ? lisp_true : nil);
    v_319 = (v_319 == nil ? lisp_true : nil);
    goto v_230;
    v_319 = nil;
v_230:
    if (v_319 == nil) goto v_228;
    v_320 = stack[-3];
    v_319 = basic_elt(env, 19); // (setq !*comma!*)
    v_319 = Lmemq(nil, v_320, v_319);
    if (v_319 == nil) goto v_246;
    v_319 = stack[-3];
    {   LispObject fn = basic_elt(env, 20); // oprin
    v_319 = (*qfn1(fn))(fn, v_319);
    }
    env = stack[-5];
    v_319 = stack[0];
    {   LispObject fn = basic_elt(env, 25); // negnumberchk
    v_321 = (*qfn1(fn))(fn, v_319);
    }
    env = stack[-5];
    v_320 = stack[-2];
    v_319 = nil;
    {   LispObject fn = basic_elt(env, 24); // prinfit
    v_319 = (*qfn3(fn))(fn, v_321, v_320, v_319);
    }
    env = stack[-5];
    goto v_244;
v_246:
    v_319 = stack[0];
    {   LispObject fn = basic_elt(env, 25); // negnumberchk
    v_321 = (*qfn1(fn))(fn, v_319);
    }
    env = stack[-5];
    v_320 = stack[-2];
    v_319 = stack[-3];
    {   LispObject fn = basic_elt(env, 24); // prinfit
    v_319 = (*qfn3(fn))(fn, v_321, v_320, v_319);
    }
    env = stack[-5];
    goto v_244;
v_244:
    goto v_226;
v_228:
    v_321 = stack[0];
    v_320 = stack[-2];
    v_319 = nil;
    {   LispObject fn = basic_elt(env, 24); // prinfit
    v_319 = (*qfn3(fn))(fn, v_321, v_320, v_319);
    }
    env = stack[-5];
    goto v_226;
v_226:
    v_319 = stack[-1];
    if (!car_legal(v_319)) v_319 = cdrerror(v_319); else
    v_319 = cdr(v_319);
    stack[-1] = v_319;
    goto v_214;
v_213:
    goto v_204;
v_206:
    v_319 = stack[-1];
    stack[-1] = v_319;
v_277:
    v_319 = stack[-1];
    if (v_319 == nil) goto v_281;
    else goto v_282;
v_281:
    goto v_276;
v_282:
    v_319 = stack[-1];
    if (!car_legal(v_319)) v_319 = carerror(v_319); else
    v_319 = car(v_319);
    stack[0] = v_319;
    v_319 = stack[0];
    if (!consp(v_319)) goto v_294;
    else goto v_295;
v_294:
    v_319 = lisp_true;
    goto v_293;
v_295:
    v_320 = stack[-3];
    v_319 = stack[0];
    if (!car_legal(v_319)) v_319 = carerror(v_319); else
    v_319 = car(v_319);
    if (!symbolp(v_319)) v_319 = nil;
    else { v_319 = qfastgets(v_319);
           if (v_319 != nil) { v_319 = elt(v_319, 49); // alt
#ifdef RECORD_GET
             if (v_319 != SPID_NOPROP)
                record_get(elt(fastget_names, 49), 1);
             else record_get(elt(fastget_names, 49), 0),
                v_319 = nil; }
           else record_get(elt(fastget_names, 49), 0); }
#else
             if (v_319 == SPID_NOPROP) v_319 = nil; }}
#endif
    v_319 = (v_320 == v_319 ? lisp_true : nil);
    v_319 = (v_319 == nil ? lisp_true : nil);
    goto v_293;
    v_319 = nil;
v_293:
    if (v_319 == nil) goto v_291;
    v_319 = stack[-3];
    {   LispObject fn = basic_elt(env, 20); // oprin
    v_319 = (*qfn1(fn))(fn, v_319);
    }
    env = stack[-5];
    v_319 = stack[0];
    {   LispObject fn = basic_elt(env, 25); // negnumberchk
    v_320 = (*qfn1(fn))(fn, v_319);
    }
    env = stack[-5];
    v_319 = stack[-2];
    {   LispObject fn = basic_elt(env, 23); // maprint
    v_319 = (*qfn2(fn))(fn, v_320, v_319);
    }
    env = stack[-5];
    goto v_289;
v_291:
    v_320 = stack[0];
    v_319 = stack[-2];
    {   LispObject fn = basic_elt(env, 23); // maprint
    v_319 = (*qfn2(fn))(fn, v_320, v_319);
    }
    env = stack[-5];
    goto v_289;
v_289:
    v_319 = stack[-1];
    if (!car_legal(v_319)) v_319 = cdrerror(v_319); else
    v_319 = cdr(v_319);
    stack[-1] = v_319;
    goto v_277;
v_276:
    goto v_204;
v_204:
    v_319 = nil;
    return onevalue(v_319);
}



// Code for mksetq

static LispObject CC_mksetq(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_36, v_37, v_38, v_39;
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
    v_37 = v_3;
    v_38 = v_2;
// end of prologue
    v_36 = v_38;
    if (!consp(v_36)) goto v_7;
    else goto v_8;
v_7:
    v_36 = basic_elt(env, 1); // setq
    return list3(v_36, v_38, v_37);
v_8:
    v_36 = v_38;
    if (!car_legal(v_36)) v_39 = carerror(v_36); else
    v_39 = car(v_36);
    v_36 = basic_elt(env, 2); // setfn
    v_36 = get(v_39, v_36);
    env = stack[0];
    v_39 = v_36;
    if (v_36 == nil) goto v_22;
    v_36 = v_39;
        return Lapply2(nil, v_36, v_38, v_37);
v_22:
    v_37 = v_38;
    v_36 = basic_elt(env, 3); // "assignment argument"
    {   LispObject fn = basic_elt(env, 4); // typerr
    v_36 = (*qfn2(fn))(fn, v_37, v_36);
    }
    goto v_20;
v_20:
    v_36 = nil;
    goto v_6;
    v_36 = nil;
v_6:
    return onevalue(v_36);
}



// Code for general!-evaluate!-mod!-p

static LispObject CC_generalKevaluateKmodKp(LispObject env,
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
    v_84 = basic_elt(env, 1); // "Variable=NIL in GENERAL-EVALUATE-MOD-P"
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
        LispObject fn = basic_elt(env, 3); // general!-horner!-rule!-mod!-p
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
    {   LispObject fn = basic_elt(env, 0); // general!-evaluate!-mod!-p
    stack[0] = (*qfn3(fn))(fn, v_86, v_85, v_84);
    }
    env = stack[-5];
    v_84 = stack[-3];
    if (!car_legal(v_84)) v_86 = cdrerror(v_84); else
    v_86 = cdr(v_84);
    v_85 = stack[-2];
    v_84 = stack[-1];
    {   LispObject fn = basic_elt(env, 0); // general!-evaluate!-mod!-p
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



// Code for bndtst

static LispObject CC_bndtst(LispObject env,
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
    {   LispObject fn = basic_elt(env, 2); // abs!:
    v_9 = (*qfn1(fn))(fn, v_8);
    }
    env = stack[0];
    v_8 = qvalue(basic_elt(env, 1)); // tentothetenth!*!*
    {
        LispObject fn = basic_elt(env, 3); // greaterp!:
        return (*qfn2(fn))(fn, v_9, v_8);
    }
}



// Code for setk1

static LispObject CC_setk1(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(8);
// copy arguments values to proper place
    stack[-1] = v_4;
    stack[0] = v_3;
    stack[-5] = v_2;
// end of prologue
    stack[-6] = nil;
// Binding !*uncached
// FLUIDBIND: reloadenv=7 litvec-offset=1 saveloc=2
{   bind_fluid_stack bind_fluid_var(-7, 1, -2);
    setvalue(basic_elt(env, 1), nil); // !*uncached
    v_175 = lisp_true;
    setvalue(basic_elt(env, 1), v_175); // !*uncached
    v_175 = stack[-5];
    if (!consp(v_175)) goto v_16;
    else goto v_17;
v_16:
    v_175 = stack[-1];
    if (v_175 == nil) goto v_21;
    else goto v_22;
v_21:
    v_175 = stack[-5];
    if (!symbolp(v_175)) v_175 = nil;
    else { v_175 = qfastgets(v_175);
           if (v_175 != nil) { v_175 = elt(v_175, 4); // avalue
#ifdef RECORD_GET
             if (v_175 != SPID_NOPROP)
                record_get(elt(fastget_names, 4), 1);
             else record_get(elt(fastget_names, 4), 0),
                v_175 = nil; }
           else record_get(elt(fastget_names, 4), 0); }
#else
             if (v_175 == SPID_NOPROP) v_175 = nil; }}
#endif
    if (v_175 == nil) goto v_26;
    else goto v_27;
v_26:
    stack[-1] = nil;
    stack[-3] = stack[-5];
    stack[0] = basic_elt(env, 2); // "not found"
    v_176 = nil;
    v_175 = nil;
    v_175 = list2(v_176, v_175);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 10); // msgpri
    v_175 = (*qfn4up(fn))(fn, stack[-1], stack[-3], stack[0], v_175);
    }
    goto v_25;
v_27:
    v_176 = stack[-5];
    v_175 = basic_elt(env, 3); // avalue
    v_175 = Lremprop(nil, v_176, v_175);
    goto v_25;
v_25:
    v_175 = nil;
    goto v_12;
v_22:
    v_175 = stack[-5];
    if (!symbolp(v_175)) v_175 = nil;
    else { v_175 = qfastgets(v_175);
           if (v_175 != nil) { v_175 = elt(v_175, 4); // avalue
#ifdef RECORD_GET
             if (v_175 != SPID_NOPROP)
                record_get(elt(fastget_names, 4), 1);
             else record_get(elt(fastget_names, 4), 0),
                v_175 = nil; }
           else record_get(elt(fastget_names, 4), 0); }
#else
             if (v_175 == SPID_NOPROP) v_175 = nil; }}
#endif
    stack[-6] = v_175;
    if (v_175 == nil) goto v_44;
    v_177 = stack[-5];
    v_175 = stack[-6];
    if (!car_legal(v_175)) v_176 = carerror(v_175); else
    v_176 = car(v_175);
    v_175 = stack[0];
    {   LispObject fn = basic_elt(env, 11); // put!-avalue
    v_175 = (*qfn3(fn))(fn, v_177, v_176, v_175);
    }
    goto v_20;
v_44:
    v_177 = stack[-5];
    v_176 = basic_elt(env, 4); // scalar
    v_175 = stack[0];
    {   LispObject fn = basic_elt(env, 11); // put!-avalue
    v_175 = (*qfn3(fn))(fn, v_177, v_176, v_175);
    }
    goto v_20;
v_20:
    v_175 = stack[0];
    goto v_12;
v_17:
    v_175 = stack[-5];
    if (!car_legal(v_175)) v_175 = carerror(v_175); else
    v_175 = car(v_175);
    if (!consp(v_175)) goto v_60;
    v_177 = basic_elt(env, 5); // alg
    v_176 = static_cast<LispObject>(400)+TAG_FIXNUM; // 25
    v_175 = basic_elt(env, 6); // "Invalid syntax: improper assignment"
    {   LispObject fn = basic_elt(env, 12); // rerror
    v_175 = (*qfn3(fn))(fn, v_177, v_176, v_175);
    }
    env = stack[-7];
    goto v_15;
v_60:
v_15:
    v_175 = stack[-5];
    if (!car_legal(v_175)) stack[-3] = carerror(v_175); else
    stack[-3] = car(v_175);
    v_175 = stack[-5];
    if (!car_legal(v_175)) v_175 = cdrerror(v_175); else
    v_175 = cdr(v_175);
    {   LispObject fn = basic_elt(env, 13); // revlis
    v_175 = (*qfn1(fn))(fn, v_175);
    }
    env = stack[-7];
    v_175 = cons(stack[-3], v_175);
    env = stack[-7];
    stack[-5] = v_175;
    v_175 = stack[-1];
    if (v_175 == nil) goto v_75;
    else goto v_76;
v_75:
    v_176 = stack[-5];
    v_175 = qvalue(basic_elt(env, 7)); // wtl!*
    v_175 = Lassoc(nil, v_176, v_175);
    stack[-3] = v_175;
    v_175 = stack[-5];
    if (!car_legal(v_175)) v_175 = carerror(v_175); else
    v_175 = car(v_175);
    if (!symbolp(v_175)) v_175 = nil;
    else { v_175 = qfastgets(v_175);
           if (v_175 != nil) { v_175 = elt(v_175, 50); // kvalue
#ifdef RECORD_GET
             if (v_175 != SPID_NOPROP)
                record_get(elt(fastget_names, 50), 1);
             else record_get(elt(fastget_names, 50), 0),
                v_175 = nil; }
           else record_get(elt(fastget_names, 50), 0); }
#else
             if (v_175 == SPID_NOPROP) v_175 = nil; }}
#endif
    stack[-4] = v_175;
    if (v_175 == nil) goto v_87;
    else goto v_88;
v_87:
    v_175 = lisp_true;
    goto v_86;
v_88:
    v_176 = stack[-5];
    v_175 = stack[-4];
    v_175 = Lassoc(nil, v_176, v_175);
    stack[-6] = v_175;
    v_175 = (v_175 == nil ? lisp_true : nil);
    goto v_86;
    v_175 = nil;
v_86:
    if (v_175 == nil) goto v_84;
    v_175 = stack[-3];
    if (v_175 == nil) goto v_105;
    else goto v_106;
v_105:
    v_175 = qvalue(basic_elt(env, 8)); // !*sqrtrulep
    v_175 = (v_175 == nil ? lisp_true : nil);
    goto v_104;
v_106:
    v_175 = nil;
    goto v_104;
    v_175 = nil;
v_104:
    if (v_175 == nil) goto v_102;
    stack[-4] = nil;
    stack[-1] = stack[-5];
    stack[0] = basic_elt(env, 2); // "not found"
    v_176 = nil;
    v_175 = nil;
    v_175 = list2(v_176, v_175);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 10); // msgpri
    v_175 = (*qfn4up(fn))(fn, stack[-4], stack[-1], stack[0], v_175);
    }
    env = stack[-7];
    goto v_100;
v_102:
v_100:
    goto v_82;
v_84:
    v_175 = stack[-5];
    if (!car_legal(v_175)) stack[-1] = carerror(v_175); else
    stack[-1] = car(v_175);
    stack[0] = basic_elt(env, 9); // kvalue
    v_176 = stack[-6];
    v_175 = stack[-4];
    v_175 = Ldelete(nil, v_176, v_175);
    env = stack[-7];
    v_175 = Lputprop(nil, stack[-1], stack[0], v_175);
    env = stack[-7];
    goto v_82;
v_82:
    v_175 = stack[-3];
    if (v_175 == nil) goto v_132;
    v_176 = stack[-5];
    v_175 = qvalue(basic_elt(env, 7)); // wtl!*
    {   LispObject fn = basic_elt(env, 14); // delasc
    v_175 = (*qfn2(fn))(fn, v_176, v_175);
    }
    env = stack[-7];
    setvalue(basic_elt(env, 7), v_175); // wtl!*
    goto v_130;
v_132:
v_130:
    v_175 = nil;
    goto v_12;
v_76:
    v_175 = stack[-5];
    if (!car_legal(v_175)) v_175 = carerror(v_175); else
    v_175 = car(v_175);
    if (!symbolp(v_175)) v_175 = nil;
    else { v_175 = qfastgets(v_175);
           if (v_175 != nil) { v_175 = elt(v_175, 50); // kvalue
#ifdef RECORD_GET
             if (v_175 != SPID_NOPROP)
                record_get(elt(fastget_names, 50), 1);
             else record_get(elt(fastget_names, 50), 0),
                v_175 = nil; }
           else record_get(elt(fastget_names, 50), 0); }
#else
             if (v_175 == SPID_NOPROP) v_175 = nil; }}
#endif
    stack[-4] = v_175;
    if (v_175 == nil) goto v_138;
    else goto v_139;
v_138:
    v_175 = stack[-5];
    if (!car_legal(v_175)) stack[-3] = carerror(v_175); else
    stack[-3] = car(v_175);
    stack[-1] = nil;
    stack[-4] = stack[-5];
    v_175 = stack[0];
    v_175 = ncons(v_175);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 15); // put!-kvalue
    v_175 = (*qfn4up(fn))(fn, stack[-3], stack[-1], stack[-4], v_175);
    }
    goto v_74;
v_139:
    v_176 = stack[-5];
    v_175 = stack[-4];
    v_175 = Lassoc(nil, v_176, v_175);
    stack[-6] = v_175;
    if (v_175 == nil) goto v_155;
    v_176 = stack[-5];
    v_175 = stack[0];
    {   LispObject fn = basic_elt(env, 16); // updoldrules
    v_175 = (*qfn2(fn))(fn, v_176, v_175);
    }
    env = stack[-7];
    v_175 = stack[-6];
    if (!car_legal(v_175)) v_176 = carerror(v_175); else
    v_176 = car(v_175);
    v_175 = stack[-4];
    {   LispObject fn = basic_elt(env, 14); // delasc
    v_175 = (*qfn2(fn))(fn, v_176, v_175);
    }
    env = stack[-7];
    stack[-4] = v_175;
    goto v_153;
v_155:
v_153:
    v_175 = stack[-5];
    if (!car_legal(v_175)) stack[-1] = carerror(v_175); else
    stack[-1] = car(v_175);
    stack[-3] = stack[-4];
    stack[-4] = stack[-5];
    v_175 = stack[0];
    v_175 = ncons(v_175);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 15); // put!-kvalue
    v_175 = (*qfn4up(fn))(fn, stack[-1], stack[-3], stack[-4], v_175);
    }
    goto v_74;
v_74:
    v_175 = stack[0];
v_12:
    ;}  // end of a binding scope
    return onevalue(v_175);
}



// Code for lex_export_codes

static LispObject CC_lex_export_codes(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_6, v_7;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// end of prologue
    v_7 = qvalue(basic_elt(env, 1)); // lex_codename
    v_6 = basic_elt(env, 2); // ordopcar
    {
        LispObject fn = basic_elt(env, 3); // sort
        return (*qfn2(fn))(fn, v_7, v_6);
    }
}



// Code for comm1

static LispObject CC_comm1(LispObject env,
                         LispObject v_2)
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
    v_64 = stack[0];
    v_63 = basic_elt(env, 1); // end
    if (v_64 == v_63) goto v_9;
    else goto v_10;
v_9:
    {   LispObject fn = basic_elt(env, 6); // scan
    v_63 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
    goto v_8;
v_10:
v_8:
v_16:
    v_64 = qvalue(basic_elt(env, 2)); // cursym!*
    v_63 = basic_elt(env, 3); // !*semicol!*
    if (v_64 == v_63) goto v_23;
    else goto v_24;
v_23:
    v_63 = lisp_true;
    goto v_22;
v_24:
    v_64 = stack[0];
    v_63 = basic_elt(env, 1); // end
    if (v_64 == v_63) goto v_32;
    else goto v_33;
v_32:
    v_64 = qvalue(basic_elt(env, 2)); // cursym!*
    v_63 = basic_elt(env, 4); // (end else then until !*rpar!* !*rsqbkt!*)
    v_63 = Lmemq(nil, v_64, v_63);
    goto v_31;
v_33:
    v_63 = nil;
    goto v_31;
    v_63 = nil;
v_31:
    goto v_22;
    v_63 = nil;
v_22:
    if (v_63 == nil) goto v_20;
    goto v_15;
v_20:
    v_64 = stack[0];
    v_63 = basic_elt(env, 1); // end
    if (v_64 == v_63) goto v_49;
    else goto v_50;
v_49:
    v_63 = stack[-1];
    v_63 = (v_63 == nil ? lisp_true : nil);
    goto v_48;
v_50:
    v_63 = nil;
    goto v_48;
    v_63 = nil;
v_48:
    if (v_63 == nil) goto v_46;
    v_63 = basic_elt(env, 5); // "END-COMMENT NO LONGER SUPPORTED"
    v_63 = ncons(v_63);
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 7); // lprim
    v_63 = (*qfn1(fn))(fn, v_63);
    }
    env = stack[-2];
    v_63 = lisp_true;
    stack[-1] = v_63;
    goto v_44;
v_46:
v_44:
    {   LispObject fn = basic_elt(env, 6); // scan
    v_63 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
    goto v_16;
v_15:
    v_63 = nil;
    return onevalue(v_63);
}



// Code for createtriplewithancestor

static LispObject CC_createtriplewithancestor(LispObject env,
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
    v_30 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_30 = Lmkvect(nil, v_30);
    env = stack[-3];
    stack[-2] = v_30;
    v_32 = stack[-2];
    v_31 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_30 = qvalue(basic_elt(env, 1)); // fluidbibasistripleid
    v_30 = Lputv(nil, v_32, v_31, v_30);
    env = stack[-3];
    v_32 = stack[-2];
    v_31 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_30 = stack[-1];
    v_30 = Lputv(nil, v_32, v_31, v_30);
    env = stack[-3];
    v_32 = stack[-2];
    v_31 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_30 = stack[0];
    v_30 = Lputv(nil, v_32, v_31, v_30);
    env = stack[-3];
    stack[-1] = stack[-2];
    stack[0] = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_30 = nil;
    v_30 = ncons(v_30);
    env = stack[-3];
    v_30 = Lputv(nil, stack[-1], stack[0], v_30);
    env = stack[-3];
    v_30 = qvalue(basic_elt(env, 1)); // fluidbibasistripleid
    v_30 = static_cast<LispObject>(static_cast<std::intptr_t>(v_30) + 0x10);
    setvalue(basic_elt(env, 1), v_30); // fluidbibasistripleid
    v_30 = stack[-2];
    return onevalue(v_30);
}



// Code for qqe_ofsf_simpat

static LispObject CC_qqe_ofsf_simpat(LispObject env,
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
    v_28 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // qqe_arg2l
    v_28 = (*qfn1(fn))(fn, v_28);
    }
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // qqe_ofsf_chsimpterm
    v_28 = (*qfn1(fn))(fn, v_28);
    }
    env = stack[-1];
    v_28 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // qqe_arg2r
    v_28 = (*qfn1(fn))(fn, v_28);
    }
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // qqe_ofsf_chsimpterm
    v_28 = (*qfn1(fn))(fn, v_28);
    }
    env = stack[-1];
    v_28 = stack[0];
    {   LispObject fn = basic_elt(env, 5); // qqe_arg!-check
    v_28 = (*qfn1(fn))(fn, v_28);
    }
    env = stack[-1];
    v_28 = stack[0];
    {   LispObject fn = basic_elt(env, 6); // qqe_op
    v_29 = (*qfn1(fn))(fn, v_28);
    }
    env = stack[-1];
    v_28 = basic_elt(env, 1); // (qequal qneq)
    v_28 = Lmemq(nil, v_29, v_28);
    if (v_28 == nil) goto v_17;
    v_28 = stack[0];
    {
        LispObject fn = basic_elt(env, 7); // qqe_simpat
        return (*qfn1(fn))(fn, v_28);
    }
v_17:
    v_28 = stack[0];
    {
        LispObject fn = basic_elt(env, 8); // ofsf_simpat
        return (*qfn1(fn))(fn, v_28);
    }
    v_28 = nil;
    return onevalue(v_28);
}



// Code for ev_mtest!?

static LispObject CC_ev_mtestW(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_37, v_38, v_39, v_40, v_41;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_39 = v_3;
    v_40 = v_2;
// end of prologue
    v_37 = lisp_true;
    v_41 = v_37;
v_11:
    v_37 = v_40;
    if (v_37 == nil) goto v_14;
    v_37 = v_41;
    if (v_37 == nil) goto v_14;
    goto v_15;
v_14:
    goto v_10;
v_15:
    v_37 = v_40;
    if (!car_legal(v_37)) v_38 = carerror(v_37); else
    v_38 = car(v_37);
    v_37 = v_39;
    if (!car_legal(v_37)) v_37 = carerror(v_37); else
    v_37 = car(v_37);
    if ((static_cast<std::intptr_t>(v_38) < static_cast<std::intptr_t>(v_37))) goto v_23;
    else goto v_24;
v_23:
    v_37 = nil;
    v_41 = v_37;
    v_40 = v_37;
    goto v_22;
v_24:
    v_37 = v_40;
    if (!car_legal(v_37)) v_37 = cdrerror(v_37); else
    v_37 = cdr(v_37);
    v_40 = v_37;
    v_37 = v_39;
    if (!car_legal(v_37)) v_37 = cdrerror(v_37); else
    v_37 = cdr(v_37);
    v_39 = v_37;
    goto v_22;
v_22:
    goto v_11;
v_10:
    v_37 = v_41;
    return onevalue(v_37);
}



// Code for ombindir

static LispObject CC_ombindir(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_24;
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
    {   LispObject fn = basic_elt(env, 2); // lex
    v_24 = (*qfn0(fn))(fn);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 3); // omobj
    v_24 = (*qfn0(fn))(fn);
    }
    env = stack[-3];
    stack[-1] = v_24;
    {   LispObject fn = basic_elt(env, 2); // lex
    v_24 = (*qfn0(fn))(fn);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 4); // variablesir
    v_24 = (*qfn0(fn))(fn);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 5); // tobvarir
    v_24 = (*qfn1(fn))(fn, v_24);
    }
    env = stack[-3];
    stack[0] = v_24;
    {   LispObject fn = basic_elt(env, 2); // lex
    v_24 = (*qfn0(fn))(fn);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 3); // omobj
    v_24 = (*qfn0(fn))(fn);
    }
    env = stack[-3];
    stack[-2] = v_24;
    {   LispObject fn = basic_elt(env, 2); // lex
    v_24 = (*qfn0(fn))(fn);
    }
    env = stack[-3];
    v_24 = basic_elt(env, 1); // (!/ o m b i n d)
    {   LispObject fn = basic_elt(env, 6); // checktag
    v_24 = (*qfn1(fn))(fn, v_24);
    }
    env = stack[-3];
    v_24 = stack[-2];
    v_24 = ncons(v_24);
    env = stack[-3];
    v_24 = Lappend_2(nil, stack[0], v_24);
    {
        LispObject v_28 = stack[-1];
        return Lappend_2(nil, v_28, v_24);
    }
    return onevalue(v_24);
}



// Code for rowdel

static LispObject CC_rowdel(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_42 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // delhisto
    v_42 = (*qfn1(fn))(fn, v_42);
    }
    env = stack[-2];
    stack[-1] = qvalue(basic_elt(env, 1)); // codmat
    v_43 = qvalue(basic_elt(env, 2)); // maxvar
    v_42 = stack[0];
    v_42 = plus2(v_43, v_42);
    env = stack[-2];
    v_44 = Lgetv(nil, stack[-1], v_42);
    env = stack[-2];
    v_43 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_42 = nil;
    v_42 = Lputv(nil, v_44, v_43, v_42);
    env = stack[-2];
    stack[-1] = qvalue(basic_elt(env, 1)); // codmat
    v_43 = qvalue(basic_elt(env, 2)); // maxvar
    v_42 = stack[0];
    v_42 = plus2(v_43, v_42);
    env = stack[-2];
    v_43 = Lgetv(nil, stack[-1], v_42);
    env = stack[-2];
    v_42 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    v_42 = Lgetv(nil, v_43, v_42);
    env = stack[-2];
    stack[0] = v_42;
v_17:
    v_42 = stack[0];
    if (v_42 == nil) goto v_27;
    else goto v_28;
v_27:
    v_42 = nil;
    goto v_16;
v_28:
    v_42 = stack[0];
    if (!car_legal(v_42)) v_42 = carerror(v_42); else
    v_42 = car(v_42);
    v_43 = v_42;
    if (!car_legal(v_43)) v_43 = carerror(v_43); else
    v_43 = car(v_43);
    if (!car_legal(v_42)) v_42 = cdrerror(v_42); else
    v_42 = cdr(v_42);
    if (!car_legal(v_42)) v_42 = carerror(v_42); else
    v_42 = car(v_42);
    {   LispObject fn = basic_elt(env, 4); // downwght
    v_42 = (*qfn2(fn))(fn, v_43, v_42);
    }
    env = stack[-2];
    v_42 = stack[0];
    if (!car_legal(v_42)) v_42 = cdrerror(v_42); else
    v_42 = cdr(v_42);
    stack[0] = v_42;
    goto v_17;
v_16:
    return onevalue(v_42);
}



// Code for string!-of!-list

static LispObject CC_stringKofKlist(LispObject env,
                         LispObject v_2)
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
    v_64 = v_2;
// end of prologue
    v_63 = v_64;
    if (v_63 == nil) goto v_6;
    else goto v_7;
v_6:
    v_63 = basic_elt(env, 1); // ""
    goto v_5;
v_7:
    v_63 = v_64;
    stack[-4] = v_63;
v_18:
    v_63 = stack[-4];
    if (v_63 == nil) goto v_23;
    else goto v_24;
v_23:
    v_63 = nil;
    goto v_17;
v_24:
    v_63 = stack[-4];
    if (!car_legal(v_63)) v_63 = carerror(v_63); else
    v_63 = car(v_63);
    stack[0] = basic_elt(env, 2); // !;
    v_63 = Lexplode(nil, v_63);
    env = stack[-5];
    v_63 = cons(stack[0], v_63);
    env = stack[-5];
    stack[-3] = v_63;
    v_63 = stack[-3];
    {   LispObject fn = basic_elt(env, 3); // lastpair
    v_63 = (*qfn1(fn))(fn, v_63);
    }
    env = stack[-5];
    stack[-2] = v_63;
    v_63 = stack[-4];
    if (!car_legal(v_63)) v_63 = cdrerror(v_63); else
    v_63 = cdr(v_63);
    stack[-4] = v_63;
    v_63 = stack[-2];
    if (!consp(v_63)) goto v_40;
    else goto v_41;
v_40:
    goto v_18;
v_41:
v_19:
    v_63 = stack[-4];
    if (v_63 == nil) goto v_45;
    else goto v_46;
v_45:
    v_63 = stack[-3];
    goto v_17;
v_46:
    stack[-1] = stack[-2];
    v_63 = stack[-4];
    if (!car_legal(v_63)) v_63 = carerror(v_63); else
    v_63 = car(v_63);
    stack[0] = basic_elt(env, 2); // !;
    v_63 = Lexplode(nil, v_63);
    env = stack[-5];
    v_63 = cons(stack[0], v_63);
    env = stack[-5];
    if (!car_legal(stack[-1])) rplacd_fails(stack[-1]);
    setcdr(stack[-1], v_63);
    v_63 = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // lastpair
    v_63 = (*qfn1(fn))(fn, v_63);
    }
    env = stack[-5];
    stack[-2] = v_63;
    v_63 = stack[-4];
    if (!car_legal(v_63)) v_63 = cdrerror(v_63); else
    v_63 = cdr(v_63);
    stack[-4] = v_63;
    goto v_19;
v_17:
    if (!car_legal(v_63)) v_63 = cdrerror(v_63); else
    v_63 = cdr(v_63);
    {
        LispObject fn = basic_elt(env, 4); // list2string
        return (*qfn1(fn))(fn, v_63);
    }
    v_63 = nil;
v_5:
    return onevalue(v_63);
}



// Code for rdcos!*

static LispObject CC_rdcosH(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // convprec
    v_19 = (*qfn1(fn))(fn, v_19);
    }
    env = stack[0];
    v_20 = v_19;
    v_19 = v_20;
    if (!consp(v_19)) goto v_10;
    else goto v_11;
v_10:
    v_19 = v_20;
    {   LispObject fn = basic_elt(env, 2); // cos
    v_19 = (*qfn1(fn))(fn, v_19);
    }
    env = stack[0];
    goto v_9;
v_11:
    v_19 = v_20;
    {   LispObject fn = basic_elt(env, 3); // cos!*
    v_19 = (*qfn1(fn))(fn, v_19);
    }
    env = stack[0];
    goto v_9;
    v_19 = nil;
v_9:
    {
        LispObject fn = basic_elt(env, 4); // mkround
        return (*qfn1(fn))(fn, v_19);
    }
}



// Code for mk!-numr

static LispObject CC_mkKnumr(LispObject env,
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    stack[0] = v_4;
    stack[-1] = v_3;
    stack[-2] = v_2;
// end of prologue
    stack[-3] = nil;
v_9:
    v_38 = stack[-1];
    v_37 = stack[0];
    if (equal(v_38, v_37)) goto v_12;
    else goto v_13;
v_12:
    v_37 = stack[-3];
    {
        LispObject fn = basic_elt(env, 2); // nreverse
        return (*qfn1(fn))(fn, v_37);
    }
v_13:
    v_38 = stack[-1];
    v_37 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_38 == v_37) goto v_23;
    else goto v_24;
v_23:
    v_37 = stack[-2];
    v_38 = v_37;
    goto v_22;
v_24:
    v_39 = basic_elt(env, 1); // difference
    v_38 = stack[-2];
    v_37 = stack[-1];
    v_37 = list3(v_39, v_38, v_37);
    env = stack[-4];
    v_38 = v_37;
    goto v_22;
    v_38 = nil;
v_22:
    v_37 = stack[-3];
    v_37 = cons(v_38, v_37);
    env = stack[-4];
    stack[-3] = v_37;
    v_37 = stack[-1];
    v_37 = add1(v_37);
    env = stack[-4];
    stack[-1] = v_37;
    goto v_9;
    v_37 = nil;
    return onevalue(v_37);
}



// Code for assert_stat1

static LispObject CC_assert_stat1(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_65, v_66;
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
    stack[0] = nil;
    {   LispObject fn = basic_elt(env, 7); // scan
    v_66 = (*qfn0(fn))(fn);
    }
    env = stack[-1];
    v_65 = basic_elt(env, 1); // !*lpar!*
    if (v_66 == v_65) goto v_9;
    v_66 = basic_elt(env, 2); // "expecting '(' in assert but found"
    v_65 = qvalue(basic_elt(env, 3)); // cursym!*
    v_65 = list2(v_66, v_65);
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 8); // rederr
    v_65 = (*qfn1(fn))(fn, v_65);
    }
    env = stack[-1];
    goto v_7;
v_9:
v_7:
    {   LispObject fn = basic_elt(env, 7); // scan
    v_66 = (*qfn0(fn))(fn);
    }
    env = stack[-1];
    v_65 = basic_elt(env, 4); // !*rpar!*
    if (v_66 == v_65) goto v_18;
    else goto v_19;
v_18:
    v_65 = nil;
    goto v_5;
v_19:
v_25:
    v_66 = qvalue(basic_elt(env, 3)); // cursym!*
    v_65 = stack[0];
    v_65 = cons(v_66, v_65);
    env = stack[-1];
    stack[0] = v_65;
    {   LispObject fn = basic_elt(env, 7); // scan
    v_65 = (*qfn0(fn))(fn);
    }
    env = stack[-1];
    v_66 = qvalue(basic_elt(env, 3)); // cursym!*
    v_65 = basic_elt(env, 5); // !*comma!*
    if (v_66 == v_65) goto v_37;
    v_66 = qvalue(basic_elt(env, 3)); // cursym!*
    v_65 = basic_elt(env, 4); // !*rpar!*
    v_65 = Lneq_2(nil, v_66, v_65);
    env = stack[-1];
    goto v_35;
v_37:
    v_65 = nil;
    goto v_35;
    v_65 = nil;
v_35:
    if (v_65 == nil) goto v_33;
    v_66 = basic_elt(env, 6); // "expecting ',' or ')' in assert but found"
    v_65 = qvalue(basic_elt(env, 3)); // cursym!*
    v_65 = list2(v_66, v_65);
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 8); // rederr
    v_65 = (*qfn1(fn))(fn, v_65);
    }
    env = stack[-1];
    goto v_31;
v_33:
v_31:
    v_66 = qvalue(basic_elt(env, 3)); // cursym!*
    v_65 = basic_elt(env, 5); // !*comma!*
    if (v_66 == v_65) goto v_52;
    else goto v_53;
v_52:
    {   LispObject fn = basic_elt(env, 7); // scan
    v_65 = (*qfn0(fn))(fn);
    }
    env = stack[-1];
    goto v_51;
v_53:
v_51:
    v_66 = qvalue(basic_elt(env, 3)); // cursym!*
    v_65 = basic_elt(env, 4); // !*rpar!*
    if (v_66 == v_65) goto v_60;
    goto v_25;
v_60:
    v_65 = stack[0];
        return Lnreverse(nil, v_65);
v_5:
    return onevalue(v_65);
}



// Code for mo_2a

static LispObject CC_mo_2a(LispObject env,
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
// space for vars preserved across procedure calls
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    v_9 = v_2;
// end of prologue
    if (!car_legal(v_9)) stack[0] = carerror(v_9); else
    stack[0] = car(v_9);
    v_9 = qvalue(basic_elt(env, 1)); // cali!=basering
    {   LispObject fn = basic_elt(env, 2); // ring_all_names
    v_9 = (*qfn1(fn))(fn, v_9);
    }
    env = stack[-1];
    {
        LispObject v_11 = stack[0];
        LispObject fn = basic_elt(env, 3); // mo!=expvec2a1
        return (*qfn2(fn))(fn, v_11, v_9);
    }
}



// Code for lalr_collect_terminals

static LispObject CC_lalr_collect_terminals(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_70, v_71, v_72, v_73;
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
    v_70 = v_2;
// end of prologue
    v_73 = nil;
    stack[-2] = v_70;
v_10:
    v_70 = stack[-2];
    if (v_70 == nil) goto v_14;
    else goto v_15;
v_14:
    goto v_9;
v_15:
    v_70 = stack[-2];
    if (!car_legal(v_70)) v_70 = carerror(v_70); else
    v_70 = car(v_70);
    if (!car_legal(v_70)) v_70 = cdrerror(v_70); else
    v_70 = cdr(v_70);
    stack[-1] = v_70;
v_24:
    v_70 = stack[-1];
    if (v_70 == nil) goto v_29;
    else goto v_30;
v_29:
    goto v_23;
v_30:
    v_70 = stack[-1];
    if (!car_legal(v_70)) v_70 = carerror(v_70); else
    v_70 = car(v_70);
    if (!car_legal(v_70)) v_70 = carerror(v_70); else
    v_70 = car(v_70);
    stack[0] = v_70;
v_39:
    v_70 = stack[0];
    if (v_70 == nil) goto v_44;
    else goto v_45;
v_44:
    goto v_38;
v_45:
    v_70 = stack[0];
    if (!car_legal(v_70)) v_70 = carerror(v_70); else
    v_70 = car(v_70);
    v_72 = v_70;
    v_71 = v_72;
    v_70 = v_73;
    v_70 = Lmember(nil, v_71, v_70);
    if (v_70 == nil) goto v_53;
    else goto v_54;
v_53:
    v_70 = v_72;
    v_71 = v_73;
    v_70 = cons(v_70, v_71);
    env = stack[-3];
    v_73 = v_70;
    goto v_52;
v_54:
v_52:
    v_70 = stack[0];
    if (!car_legal(v_70)) v_70 = cdrerror(v_70); else
    v_70 = cdr(v_70);
    stack[0] = v_70;
    goto v_39;
v_38:
    v_70 = stack[-1];
    if (!car_legal(v_70)) v_70 = cdrerror(v_70); else
    v_70 = cdr(v_70);
    stack[-1] = v_70;
    goto v_24;
v_23:
    v_70 = stack[-2];
    if (!car_legal(v_70)) v_70 = cdrerror(v_70); else
    v_70 = cdr(v_70);
    stack[-2] = v_70;
    goto v_10;
v_9:
    v_71 = v_73;
    v_70 = qvalue(basic_elt(env, 1)); // nonterminals
    {
        LispObject fn = basic_elt(env, 2); // setdiff
        return (*qfn2(fn))(fn, v_71, v_70);
    }
    return onevalue(v_70);
}



// Code for gcref_remprops

static LispObject CC_gcref_remprops(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
    stack_popper stack_popper_var(1);
// end of prologue
    v_40 = qvalue(basic_elt(env, 1)); // seen!*
    v_39 = basic_elt(env, 2); // (gall calls globs calledby alsois sameas)
    {   LispObject fn = basic_elt(env, 12); // rempropss
    v_39 = (*qfn2(fn))(fn, v_40, v_39);
    }
    env = stack[0];
    v_40 = qvalue(basic_elt(env, 1)); // seen!*
    v_39 = basic_elt(env, 3); // (seen cinthis defd)
    {   LispObject fn = basic_elt(env, 13); // remflagss
    v_39 = (*qfn2(fn))(fn, v_40, v_39);
    }
    env = stack[0];
    v_40 = qvalue(basic_elt(env, 4)); // gcref_exportl!*
    v_39 = basic_elt(env, 5); // (exported)
    {   LispObject fn = basic_elt(env, 13); // remflagss
    v_39 = (*qfn2(fn))(fn, v_40, v_39);
    }
    env = stack[0];
    v_40 = qvalue(basic_elt(env, 6)); // gseen!*
    v_39 = basic_elt(env, 7); // (usedby usedunby boundby setby)
    {   LispObject fn = basic_elt(env, 12); // rempropss
    v_39 = (*qfn2(fn))(fn, v_40, v_39);
    }
    env = stack[0];
    v_40 = qvalue(basic_elt(env, 6)); // gseen!*
    v_39 = basic_elt(env, 8); // (dclglb gseen glb2rf glb2bd glb2st)
    {   LispObject fn = basic_elt(env, 13); // remflagss
    v_39 = (*qfn2(fn))(fn, v_40, v_39);
    }
    env = stack[0];
    v_39 = qvalue(basic_elt(env, 9)); // tseen!*
    v_41 = v_39;
v_21:
    v_39 = v_41;
    if (v_39 == nil) goto v_25;
    else goto v_26;
v_25:
    goto v_20;
v_26:
    v_39 = v_41;
    if (!car_legal(v_39)) v_39 = carerror(v_39); else
    v_39 = car(v_39);
    if (!car_legal(v_39)) v_40 = carerror(v_39); else
    v_40 = car(v_39);
    v_39 = basic_elt(env, 10); // funs
    v_39 = Lremprop(nil, v_40, v_39);
    env = stack[0];
    v_39 = v_41;
    if (!car_legal(v_39)) v_39 = cdrerror(v_39); else
    v_39 = cdr(v_39);
    v_41 = v_39;
    goto v_21;
v_20:
    v_39 = nil;
    setvalue(basic_elt(env, 9), v_39); // tseen!*
    setvalue(basic_elt(env, 1), v_39); // seen!*
    setvalue(basic_elt(env, 6), v_39); // gseen!*
    setvalue(basic_elt(env, 11), v_39); // haveargs!*
    return onevalue(v_39);
}



// Code for prepreform1

static LispObject CC_prepreform1(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_160, v_161;
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
    stack[-5] = v_3;
    stack[0] = v_2;
// end of prologue
v_1:
    v_160 = stack[0];
    if (!consp(v_160)) goto v_11;
    else goto v_12;
v_11:
    v_160 = lisp_true;
    goto v_10;
v_12:
    v_160 = stack[0];
    if (!car_legal(v_160)) v_160 = carerror(v_160); else
    v_160 = car(v_160);
    if (!symbolp(v_160)) v_160 = nil;
    else { v_160 = qfastgets(v_160);
           if (v_160 != nil) { v_160 = elt(v_160, 8); // dname
#ifdef RECORD_GET
             if (v_160 != SPID_NOPROP)
                record_get(elt(fastget_names, 8), 1);
             else record_get(elt(fastget_names, 8), 0),
                v_160 = nil; }
           else record_get(elt(fastget_names, 8), 0); }
#else
             if (v_160 == SPID_NOPROP) v_160 = nil; }}
#endif
    goto v_10;
    v_160 = nil;
v_10:
    if (v_160 == nil) goto v_8;
    v_160 = stack[0];
    goto v_6;
v_8:
    stack[-6] = nil;
    v_160 = stack[-5];
    stack[-1] = v_160;
v_30:
    v_160 = stack[-6];
    if (v_160 == nil) goto v_37;
    else goto v_38;
v_37:
    v_160 = stack[-1];
    goto v_36;
v_38:
    v_160 = nil;
    goto v_36;
    v_160 = nil;
v_36:
    if (v_160 == nil) goto v_33;
    else goto v_34;
v_33:
    goto v_29;
v_34:
    v_160 = stack[-1];
    if (!car_legal(v_160)) v_161 = carerror(v_160); else
    v_161 = car(v_160);
    v_160 = stack[0];
    if (!car_legal(v_160)) v_160 = cdrerror(v_160); else
    v_160 = cdr(v_160);
    v_160 = Lsmemq(nil, v_161, v_160);
    env = stack[-7];
    if (v_160 == nil) goto v_48;
    v_160 = lisp_true;
    stack[-6] = v_160;
    goto v_46;
v_48:
    v_160 = stack[-1];
    if (!car_legal(v_160)) v_160 = cdrerror(v_160); else
    v_160 = cdr(v_160);
    stack[-1] = v_160;
    goto v_46;
v_46:
    goto v_30;
v_29:
    v_160 = stack[-6];
    if (v_160 == nil) goto v_61;
    else goto v_62;
v_61:
    v_160 = stack[0];
    goto v_26;
v_62:
    v_160 = stack[0];
    if (!car_legal(v_160)) v_161 = carerror(v_160); else
    v_161 = car(v_160);
    v_160 = basic_elt(env, 1); // (plus difference minus times quotient)
    v_160 = Lmemq(nil, v_161, v_160);
    if (v_160 == nil) goto v_69;
    else goto v_67;
v_69:
    v_160 = stack[0];
    if (!car_legal(v_160)) v_160 = carerror(v_160); else
    v_160 = car(v_160);
    if (!symbolp(v_160)) v_160 = nil;
    else { v_160 = qfastgets(v_160);
           if (v_160 != nil) { v_160 = elt(v_160, 22); // simpfn
#ifdef RECORD_GET
             if (v_160 != SPID_NOPROP)
                record_get(elt(fastget_names, 22), 1);
             else record_get(elt(fastget_names, 22), 0),
                v_160 = nil; }
           else record_get(elt(fastget_names, 22), 0); }
#else
             if (v_160 == SPID_NOPROP) v_160 = nil; }}
#endif
    if (v_160 == nil) goto v_67;
    goto v_68;
v_67:
    v_160 = nil;
    stack[-6] = v_160;
    goto v_66;
v_68:
v_66:
    v_160 = stack[0];
    if (!car_legal(v_160)) v_161 = carerror(v_160); else
    v_161 = car(v_160);
    v_160 = basic_elt(env, 2); // !*sq
    if (v_161 == v_160) goto v_81;
    else goto v_82;
v_81:
    v_160 = stack[0];
    if (!car_legal(v_160)) v_160 = cdrerror(v_160); else
    v_160 = cdr(v_160);
    if (!car_legal(v_160)) v_160 = carerror(v_160); else
    v_160 = car(v_160);
    {   LispObject fn = basic_elt(env, 3); // sqhorner!*
    v_160 = (*qfn1(fn))(fn, v_160);
    }
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 4); // prepsq!*
    v_161 = (*qfn1(fn))(fn, v_160);
    }
    env = stack[-7];
    v_160 = stack[-5];
    stack[0] = v_161;
    stack[-5] = v_160;
    goto v_1;
v_82:
    v_160 = stack[0];
    if (!car_legal(v_160)) stack[-4] = carerror(v_160); else
    stack[-4] = car(v_160);
    v_160 = stack[0];
    if (!car_legal(v_160)) v_160 = cdrerror(v_160); else
    v_160 = cdr(v_160);
    stack[-3] = v_160;
    v_160 = stack[-3];
    if (v_160 == nil) goto v_108;
    else goto v_109;
v_108:
    v_160 = nil;
    goto v_102;
v_109:
    v_160 = stack[-3];
    if (!car_legal(v_160)) v_160 = carerror(v_160); else
    v_160 = car(v_160);
    v_161 = v_160;
    v_160 = stack[-6];
    if (v_160 == nil) goto v_120;
    v_160 = v_161;
    {   LispObject fn = basic_elt(env, 5); // simp!*
    v_160 = (*qfn1(fn))(fn, v_160);
    }
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 3); // sqhorner!*
    v_160 = (*qfn1(fn))(fn, v_160);
    }
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 4); // prepsq!*
    v_160 = (*qfn1(fn))(fn, v_160);
    }
    env = stack[-7];
    v_161 = v_160;
    goto v_118;
v_120:
    v_160 = v_161;
    v_161 = v_160;
    goto v_118;
    v_161 = nil;
v_118:
    v_160 = stack[-5];
    {   LispObject fn = basic_elt(env, 0); // prepreform1
    v_160 = (*qfn2(fn))(fn, v_161, v_160);
    }
    env = stack[-7];
    v_160 = ncons(v_160);
    env = stack[-7];
    stack[-1] = v_160;
    stack[-2] = v_160;
v_103:
    v_160 = stack[-3];
    if (!car_legal(v_160)) v_160 = cdrerror(v_160); else
    v_160 = cdr(v_160);
    stack[-3] = v_160;
    v_160 = stack[-3];
    if (v_160 == nil) goto v_134;
    else goto v_135;
v_134:
    v_160 = stack[-2];
    goto v_102;
v_135:
    stack[0] = stack[-1];
    v_160 = stack[-3];
    if (!car_legal(v_160)) v_160 = carerror(v_160); else
    v_160 = car(v_160);
    v_161 = v_160;
    v_160 = stack[-6];
    if (v_160 == nil) goto v_147;
    v_160 = v_161;
    {   LispObject fn = basic_elt(env, 5); // simp!*
    v_160 = (*qfn1(fn))(fn, v_160);
    }
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 3); // sqhorner!*
    v_160 = (*qfn1(fn))(fn, v_160);
    }
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 4); // prepsq!*
    v_160 = (*qfn1(fn))(fn, v_160);
    }
    env = stack[-7];
    v_161 = v_160;
    goto v_145;
v_147:
    v_160 = v_161;
    v_161 = v_160;
    goto v_145;
    v_161 = nil;
v_145:
    v_160 = stack[-5];
    {   LispObject fn = basic_elt(env, 0); // prepreform1
    v_160 = (*qfn2(fn))(fn, v_161, v_160);
    }
    env = stack[-7];
    v_160 = ncons(v_160);
    env = stack[-7];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_160);
    v_160 = stack[-1];
    if (!car_legal(v_160)) v_160 = cdrerror(v_160); else
    v_160 = cdr(v_160);
    stack[-1] = v_160;
    goto v_103;
v_102:
    {
        LispObject v_169 = stack[-4];
        return cons(v_169, v_160);
    }
    v_160 = nil;
v_26:
    goto v_6;
    v_160 = nil;
v_6:
    return onevalue(v_160);
}



// Code for cl_atl1

static LispObject CC_cl_atl1(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // cl_atml1
    v_42 = (*qfn1(fn))(fn, v_42);
    }
    env = stack[-4];
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



// Code for internal!-factorf

static LispObject CC_internalKfactorf(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_220, v_221;
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
    stack_popper stack_popper_var(11);
// copy arguments values to proper place
    stack[-8] = v_2;
// end of prologue
    v_220 = qvalue(basic_elt(env, 1)); // current!-modulus
// Binding current!-modulus
// FLUIDBIND: reloadenv=10 litvec-offset=1 saveloc=9
{   bind_fluid_stack bind_fluid_var(-10, 1, -9);
    setvalue(basic_elt(env, 1), v_220); // current!-modulus
// Binding m!-image!-variable
// FLUIDBIND: reloadenv=10 litvec-offset=2 saveloc=7
{   bind_fluid_stack bind_fluid_var(-10, 2, -7);
    setvalue(basic_elt(env, 2), nil); // m!-image!-variable
    stack[-6] = nil;
    v_220 = stack[-8];
    if (!consp(v_220)) goto v_23;
    else goto v_24;
v_23:
    v_220 = lisp_true;
    goto v_22;
v_24:
    v_220 = stack[-8];
    if (!car_legal(v_220)) v_220 = carerror(v_220); else
    v_220 = car(v_220);
    v_220 = (consp(v_220) ? nil : lisp_true);
    goto v_22;
    v_220 = nil;
v_22:
    if (v_220 == nil) goto v_20;
    v_220 = stack[-8];
    v_220 = ncons(v_220);
    goto v_16;
v_20:
    v_221 = stack[-8];
    v_220 = nil;
    {   LispObject fn = basic_elt(env, 4); // kernord
    v_220 = (*qfn2(fn))(fn, v_221, v_220);
    }
    env = stack[-10];
    v_221 = v_220;
    v_220 = qvalue(basic_elt(env, 3)); // !*kernreverse
    if (v_220 == nil) goto v_40;
    v_220 = v_221;
    v_220 = Lreverse(nil, v_220);
    env = stack[-10];
    v_221 = v_220;
    goto v_38;
v_40:
v_38:
    v_220 = v_221;
    {   LispObject fn = basic_elt(env, 5); // setkorder
    v_220 = (*qfn1(fn))(fn, v_220);
    }
    env = stack[-10];
    stack[-3] = v_220;
    v_220 = stack[-8];
    {   LispObject fn = basic_elt(env, 6); // reorder
    v_220 = (*qfn1(fn))(fn, v_220);
    }
    env = stack[-10];
    stack[-8] = v_220;
    v_220 = stack[-8];
    {   LispObject fn = basic_elt(env, 7); // minusf
    v_220 = (*qfn1(fn))(fn, v_220);
    }
    env = stack[-10];
    if (v_220 == nil) goto v_51;
    v_220 = stack[-6];
    v_220 = (v_220 == nil ? lisp_true : nil);
    stack[-6] = v_220;
    v_220 = stack[-8];
    {   LispObject fn = basic_elt(env, 8); // negf
    v_220 = (*qfn1(fn))(fn, v_220);
    }
    env = stack[-10];
    stack[-8] = v_220;
    goto v_49;
v_51:
v_49:
    v_220 = stack[-8];
    {   LispObject fn = basic_elt(env, 9); // comfac
    v_220 = (*qfn1(fn))(fn, v_220);
    }
    env = stack[-10];
    stack[-2] = v_220;
    stack[0] = stack[-8];
    v_220 = stack[-2];
    {   LispObject fn = basic_elt(env, 10); // comfac!-to!-poly
    v_220 = (*qfn1(fn))(fn, v_220);
    }
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 11); // quotf1
    v_220 = (*qfn2(fn))(fn, stack[0], v_220);
    }
    env = stack[-10];
    stack[-8] = v_220;
    v_220 = stack[-8];
    if (!consp(v_220)) goto v_70;
    else goto v_71;
v_70:
    v_220 = lisp_true;
    goto v_69;
v_71:
    v_220 = stack[-8];
    if (!car_legal(v_220)) v_220 = carerror(v_220); else
    v_220 = car(v_220);
    v_220 = (consp(v_220) ? nil : lisp_true);
    goto v_69;
    v_220 = nil;
v_69:
    if (v_220 == nil) goto v_67;
    v_220 = stack[-8];
    stack[-5] = v_220;
    v_220 = nil;
    stack[-8] = v_220;
    goto v_65;
v_67:
    v_220 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-5] = v_220;
    v_220 = stack[-8];
    if (!car_legal(v_220)) v_220 = carerror(v_220); else
    v_220 = car(v_220);
    if (!car_legal(v_220)) v_220 = carerror(v_220); else
    v_220 = car(v_220);
    if (!car_legal(v_220)) v_220 = carerror(v_220); else
    v_220 = car(v_220);
    setvalue(basic_elt(env, 2), v_220); // m!-image!-variable
    v_220 = stack[-8];
    {   LispObject fn = basic_elt(env, 12); // factorize!-primitive!-polynomial
    v_221 = (*qfn1(fn))(fn, v_220);
    }
    env = stack[-10];
    v_220 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 13); // distribute!.multiplicity
    v_220 = (*qfn2(fn))(fn, v_221, v_220);
    }
    env = stack[-10];
    stack[-8] = v_220;
    goto v_65;
v_65:
    v_220 = stack[-2];
    if (!car_legal(v_220)) v_220 = carerror(v_220); else
    v_220 = car(v_220);
    stack[-1] = v_220;
    v_220 = stack[-2];
    if (!car_legal(v_220)) v_220 = cdrerror(v_220); else
    v_220 = cdr(v_220);
    {   LispObject fn = basic_elt(env, 14); // fctrf1
    v_220 = (*qfn1(fn))(fn, v_220);
    }
    env = stack[-10];
    stack[-2] = v_220;
    v_220 = stack[-1];
    if (v_220 == nil) goto v_100;
    v_220 = stack[-2];
    if (!car_legal(v_220)) stack[0] = carerror(v_220); else
    stack[0] = car(v_220);
    v_220 = stack[-1];
    if (!car_legal(v_220)) v_221 = carerror(v_220); else
    v_221 = car(v_220);
    v_220 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 15); // to
    v_221 = (*qfn2(fn))(fn, v_221, v_220);
    }
    env = stack[-10];
    v_220 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_220 = cons(v_221, v_220);
    env = stack[-10];
    v_221 = ncons(v_220);
    env = stack[-10];
    v_220 = stack[-1];
    if (!car_legal(v_220)) v_220 = cdrerror(v_220); else
    v_220 = cdr(v_220);
    v_221 = cons(v_221, v_220);
    env = stack[-10];
    v_220 = stack[-2];
    if (!car_legal(v_220)) v_220 = cdrerror(v_220); else
    v_220 = cdr(v_220);
    v_220 = list2star(stack[0], v_221, v_220);
    env = stack[-10];
    stack[-2] = v_220;
    goto v_98;
v_100:
v_98:
    v_220 = stack[-6];
    if (v_220 == nil) goto v_120;
    v_220 = stack[-5];
    {   LispObject fn = basic_elt(env, 8); // negf
    v_220 = (*qfn1(fn))(fn, v_220);
    }
    env = stack[-10];
    stack[-5] = v_220;
    goto v_118;
v_120:
v_118:
    stack[0] = stack[-2];
    v_221 = stack[-5];
    v_220 = stack[-8];
    v_220 = cons(v_221, v_220);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 16); // fac!-merge
    v_220 = (*qfn2(fn))(fn, stack[0], v_220);
    }
    env = stack[-10];
    stack[-8] = v_220;
    v_220 = stack[-3];
    {   LispObject fn = basic_elt(env, 5); // setkorder
    v_220 = (*qfn1(fn))(fn, v_220);
    }
    env = stack[-10];
    v_220 = stack[-8];
    if (!car_legal(v_220)) v_220 = cdrerror(v_220); else
    v_220 = cdr(v_220);
    stack[-4] = v_220;
    v_220 = stack[-4];
    if (v_220 == nil) goto v_141;
    else goto v_142;
v_141:
    v_220 = nil;
    goto v_135;
v_142:
    v_220 = stack[-4];
    if (!car_legal(v_220)) v_220 = carerror(v_220); else
    v_220 = car(v_220);
    stack[0] = v_220;
    v_220 = stack[0];
    if (!car_legal(v_220)) v_220 = carerror(v_220); else
    v_220 = car(v_220);
    {   LispObject fn = basic_elt(env, 6); // reorder
    v_220 = (*qfn1(fn))(fn, v_220);
    }
    env = stack[-10];
    stack[-5] = v_220;
    {   LispObject fn = basic_elt(env, 7); // minusf
    v_220 = (*qfn1(fn))(fn, v_220);
    }
    env = stack[-10];
    if (v_220 == nil) goto v_153;
    v_220 = stack[-6];
    v_220 = (v_220 == nil ? lisp_true : nil);
    stack[-6] = v_220;
    v_220 = stack[-5];
    {   LispObject fn = basic_elt(env, 8); // negf
    v_220 = (*qfn1(fn))(fn, v_220);
    }
    env = stack[-10];
    v_221 = v_220;
    goto v_151;
v_153:
    v_220 = stack[-5];
    v_221 = v_220;
    goto v_151;
    v_221 = nil;
v_151:
    v_220 = stack[0];
    if (!car_legal(v_220)) v_220 = cdrerror(v_220); else
    v_220 = cdr(v_220);
    v_220 = cons(v_221, v_220);
    env = stack[-10];
    v_220 = ncons(v_220);
    env = stack[-10];
    stack[-2] = v_220;
    stack[-3] = v_220;
v_136:
    v_220 = stack[-4];
    if (!car_legal(v_220)) v_220 = cdrerror(v_220); else
    v_220 = cdr(v_220);
    stack[-4] = v_220;
    v_220 = stack[-4];
    if (v_220 == nil) goto v_171;
    else goto v_172;
v_171:
    v_220 = stack[-3];
    goto v_135;
v_172:
    stack[-1] = stack[-2];
    v_220 = stack[-4];
    if (!car_legal(v_220)) v_220 = carerror(v_220); else
    v_220 = car(v_220);
    stack[0] = v_220;
    v_220 = stack[0];
    if (!car_legal(v_220)) v_220 = carerror(v_220); else
    v_220 = car(v_220);
    {   LispObject fn = basic_elt(env, 6); // reorder
    v_220 = (*qfn1(fn))(fn, v_220);
    }
    env = stack[-10];
    stack[-5] = v_220;
    {   LispObject fn = basic_elt(env, 7); // minusf
    v_220 = (*qfn1(fn))(fn, v_220);
    }
    env = stack[-10];
    if (v_220 == nil) goto v_184;
    v_220 = stack[-6];
    v_220 = (v_220 == nil ? lisp_true : nil);
    stack[-6] = v_220;
    v_220 = stack[-5];
    {   LispObject fn = basic_elt(env, 8); // negf
    v_220 = (*qfn1(fn))(fn, v_220);
    }
    env = stack[-10];
    v_221 = v_220;
    goto v_182;
v_184:
    v_220 = stack[-5];
    v_221 = v_220;
    goto v_182;
    v_221 = nil;
v_182:
    v_220 = stack[0];
    if (!car_legal(v_220)) v_220 = cdrerror(v_220); else
    v_220 = cdr(v_220);
    v_220 = cons(v_221, v_220);
    env = stack[-10];
    v_220 = ncons(v_220);
    env = stack[-10];
    if (!car_legal(stack[-1])) rplacd_fails(stack[-1]);
    setcdr(stack[-1], v_220);
    v_220 = stack[-2];
    if (!car_legal(v_220)) v_220 = cdrerror(v_220); else
    v_220 = cdr(v_220);
    stack[-2] = v_220;
    goto v_136;
v_135:
    stack[-2] = v_220;
    stack[0] = stack[-6];
    v_220 = stack[-8];
    if (!car_legal(v_220)) v_220 = carerror(v_220); else
    v_220 = car(v_220);
    {   LispObject fn = basic_elt(env, 7); // minusf
    v_220 = (*qfn1(fn))(fn, v_220);
    }
    env = stack[-10];
    if (equal(stack[0], v_220)) goto v_205;
    v_220 = stack[-8];
    if (!car_legal(v_220)) v_220 = carerror(v_220); else
    v_220 = car(v_220);
    {   LispObject fn = basic_elt(env, 8); // negf
    v_220 = (*qfn1(fn))(fn, v_220);
    }
    env = stack[-10];
    v_221 = v_220;
    goto v_203;
v_205:
    v_220 = stack[-8];
    if (!car_legal(v_220)) v_220 = carerror(v_220); else
    v_220 = car(v_220);
    v_221 = v_220;
    goto v_203;
    v_221 = nil;
v_203:
    v_220 = stack[-2];
    v_220 = cons(v_221, v_220);
v_16:
    ;}  // end of a binding scope
    ;}  // end of a binding scope
    return onevalue(v_220);
}



// Code for sfto_b!:ordexp

static LispObject CC_sfto_bTordexp(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_35 = stack[-1];
    if (v_35 == nil) goto v_10;
    else goto v_11;
v_10:
    v_35 = lisp_true;
    goto v_6;
v_11:
    v_35 = stack[-1];
    if (!car_legal(v_35)) v_36 = carerror(v_35); else
    v_36 = car(v_35);
    v_35 = stack[0];
    if (!car_legal(v_35)) v_35 = carerror(v_35); else
    v_35 = car(v_35);
    v_35 = static_cast<LispObject>(greaterp2(v_36, v_35));
    v_35 = v_35 ? lisp_true : nil;
    env = stack[-2];
    if (v_35 == nil) goto v_15;
    v_35 = lisp_true;
    goto v_6;
v_15:
    v_35 = stack[-1];
    if (!car_legal(v_35)) v_36 = carerror(v_35); else
    v_36 = car(v_35);
    v_35 = stack[0];
    if (!car_legal(v_35)) v_35 = carerror(v_35); else
    v_35 = car(v_35);
    if (equal(v_36, v_35)) goto v_22;
    else goto v_23;
v_22:
    v_35 = stack[-1];
    if (!car_legal(v_35)) v_35 = cdrerror(v_35); else
    v_35 = cdr(v_35);
    stack[-1] = v_35;
    v_35 = stack[0];
    if (!car_legal(v_35)) v_35 = cdrerror(v_35); else
    v_35 = cdr(v_35);
    stack[0] = v_35;
    goto v_7;
v_23:
    v_35 = nil;
    goto v_6;
    v_35 = nil;
v_6:
    return onevalue(v_35);
}



// Code for nextcomb

static LispObject CC_nextcomb(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_97, v_98;
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
    stack[0] = v_3;
    v_98 = v_2;
// end of prologue
// Binding i
// FLUIDBIND: reloadenv=4 litvec-offset=1 saveloc=2
{   bind_fluid_stack bind_fluid_var(-4, 1, -2);
    setvalue(basic_elt(env, 1), nil); // i
    v_97 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    setvalue(basic_elt(env, 1), v_97); // i
    v_97 = v_98;
    if (!car_legal(v_97)) v_97 = carerror(v_97); else
    v_97 = car(v_97);
    stack[-3] = v_97;
    v_97 = v_98;
    if (!car_legal(v_97)) v_97 = cdrerror(v_97); else
    v_97 = cdr(v_97);
    stack[-1] = v_97;
    v_98 = stack[0];
    v_97 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_98 == v_97) goto v_19;
    else goto v_20;
v_19:
    v_97 = nil;
    v_97 = ncons(v_97);
    goto v_18;
v_20:
    v_97 = stack[-3];
    v_98 = Llength(nil, v_97);
    env = stack[-4];
    v_97 = stack[0];
    v_98 = difference2(v_98, v_97);
    env = stack[-4];
    setvalue(basic_elt(env, 1), v_98); // i
    v_97 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_97 = static_cast<LispObject>(lessp2(v_98, v_97));
    v_97 = v_97 ? lisp_true : nil;
    env = stack[-4];
    if (v_97 == nil) goto v_26;
    v_97 = nil;
    v_97 = ncons(v_97);
    goto v_18;
v_26:
    v_98 = qvalue(basic_elt(env, 1)); // i
    v_97 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_98 == v_97) goto v_35;
    else goto v_36;
v_35:
    v_97 = stack[-3];
    v_97 = ncons(v_97);
    goto v_18;
v_36:
    v_97 = stack[-1];
    if (v_97 == nil) goto v_42;
    v_97 = stack[0];
    v_97 = sub1(v_97);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 0); // nextcomb
    v_97 = (*qfn2(fn))(fn, stack[-1], v_97);
    }
    env = stack[-4];
    v_98 = stack[-3];
    if (!car_legal(v_98)) stack[-1] = carerror(v_98); else
    stack[-1] = car(v_98);
    v_98 = v_97;
    if (!car_legal(v_98)) stack[0] = carerror(v_98); else
    stack[0] = car(v_98);
    v_98 = v_97;
    if (!car_legal(v_98)) v_98 = cdrerror(v_98); else
    v_98 = cdr(v_98);
    if (v_98 == nil) goto v_56;
    v_98 = stack[-3];
    if (!car_legal(v_97)) v_97 = cdrerror(v_97); else
    v_97 = cdr(v_97);
    v_97 = cons(v_98, v_97);
    env = stack[-4];
    goto v_54;
v_56:
    v_97 = stack[-3];
    if (!car_legal(v_97)) v_97 = cdrerror(v_97); else
    v_97 = cdr(v_97);
    v_97 = ncons(v_97);
    env = stack[-4];
    goto v_54;
    v_97 = nil;
v_54:
    v_97 = acons(stack[-1], stack[0], v_97);
    goto v_18;
v_42:
    v_97 = stack[-3];
    if (!car_legal(v_97)) v_97 = cdrerror(v_97); else
    v_97 = cdr(v_97);
    {   LispObject fn = basic_elt(env, 2); // initcomb
    stack[-1] = (*qfn1(fn))(fn, v_97);
    }
    env = stack[-4];
    v_97 = stack[0];
    v_97 = sub1(v_97);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 0); // nextcomb
    v_97 = (*qfn2(fn))(fn, stack[-1], v_97);
    }
    env = stack[-4];
    v_98 = stack[-3];
    if (!car_legal(v_98)) stack[-1] = carerror(v_98); else
    stack[-1] = car(v_98);
    v_98 = v_97;
    if (!car_legal(v_98)) stack[0] = carerror(v_98); else
    stack[0] = car(v_98);
    v_98 = v_97;
    if (!car_legal(v_98)) v_98 = cdrerror(v_98); else
    v_98 = cdr(v_98);
    if (v_98 == nil) goto v_84;
    v_98 = stack[-3];
    if (!car_legal(v_97)) v_97 = cdrerror(v_97); else
    v_97 = cdr(v_97);
    v_97 = cons(v_98, v_97);
    env = stack[-4];
    goto v_82;
v_84:
    v_97 = stack[-3];
    if (!car_legal(v_97)) v_97 = cdrerror(v_97); else
    v_97 = cdr(v_97);
    v_97 = ncons(v_97);
    env = stack[-4];
    goto v_82;
    v_97 = nil;
v_82:
    v_97 = acons(stack[-1], stack[0], v_97);
    goto v_18;
    v_97 = nil;
v_18:
    ;}  // end of a binding scope
    return onevalue(v_97);
}



// Code for gcompatible

static LispObject CC_gcompatible(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_21, v_22, v_23;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_22 = v_3;
    v_23 = v_2;
// end of prologue
    v_21 = qvalue(basic_elt(env, 1)); // gmodule!*
    if (v_21 == nil) goto v_7;
    else goto v_8;
v_7:
    v_21 = lisp_true;
    goto v_6;
v_8:
    v_21 = v_23;
    if (!car_legal(v_21)) v_21 = cdrerror(v_21); else
    v_21 = cdr(v_21);
    if (!car_legal(v_21)) v_23 = carerror(v_21); else
    v_23 = car(v_21);
    v_21 = v_22;
    if (!car_legal(v_21)) v_21 = cdrerror(v_21); else
    v_21 = cdr(v_21);
    if (!car_legal(v_21)) v_22 = carerror(v_21); else
    v_22 = car(v_21);
    v_21 = qvalue(basic_elt(env, 1)); // gmodule!*
    {
        LispObject fn = basic_elt(env, 2); // gevcompatible1
        return (*qfn3(fn))(fn, v_23, v_22, v_21);
    }
    v_21 = nil;
v_6:
    return onevalue(v_21);
}



// Code for contr!-strand

static LispObject CC_contrKstrand(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    stack[0] = v_3;
    v_22 = v_2;
// end of prologue
v_7:
    v_23 = stack[0];
    if (v_23 == nil) goto v_10;
    else goto v_11;
v_10:
    goto v_6;
v_11:
    v_23 = v_22;
    v_22 = stack[0];
    if (!car_legal(v_22)) v_22 = carerror(v_22); else
    v_22 = car(v_22);
    {   LispObject fn = basic_elt(env, 1); // contr1!-strand
    v_22 = (*qfn2(fn))(fn, v_23, v_22);
    }
    env = stack[-1];
    v_23 = stack[0];
    if (!car_legal(v_23)) v_23 = cdrerror(v_23); else
    v_23 = cdr(v_23);
    stack[0] = v_23;
    goto v_7;
    v_22 = nil;
v_6:
    return onevalue(v_22);
}



// Code for nzero

static LispObject CC_nzero(LispObject env,
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



// Code for merge

static LispObject CC_merge(LispObject env,
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    stack[0] = v_4;
    stack[-1] = v_3;
    stack[-2] = v_2;
// end of prologue
    v_40 = stack[-2];
    if (v_40 == nil) goto v_8;
    else goto v_9;
v_8:
    v_40 = stack[-1];
    goto v_7;
v_9:
    v_40 = stack[-1];
    if (v_40 == nil) goto v_12;
    else goto v_13;
v_12:
    v_40 = stack[-2];
    goto v_7;
v_13:
    v_42 = stack[0];
    v_40 = stack[-2];
    if (!car_legal(v_40)) v_41 = carerror(v_40); else
    v_41 = car(v_40);
    v_40 = stack[-1];
    if (!car_legal(v_40)) v_40 = carerror(v_40); else
    v_40 = car(v_40);
    v_40 = Lapply2(nil, v_42, v_41, v_40);
    env = stack[-4];
    if (v_40 == nil) goto v_17;
    stack[-3] = stack[-2];
    v_40 = stack[-2];
    if (!car_legal(v_40)) v_42 = cdrerror(v_40); else
    v_42 = cdr(v_40);
    v_41 = stack[-1];
    v_40 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // merge
    v_40 = (*qfn3(fn))(fn, v_42, v_41, v_40);
    }
    if (!car_legal(stack[-3])) rplacd_fails(stack[-3]);
    setcdr(stack[-3], v_40);
    v_40 = stack[-3];
    goto v_7;
v_17:
    stack[-3] = stack[-1];
    v_42 = stack[-2];
    v_40 = stack[-1];
    if (!car_legal(v_40)) v_41 = cdrerror(v_40); else
    v_41 = cdr(v_40);
    v_40 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // merge
    v_40 = (*qfn3(fn))(fn, v_42, v_41, v_40);
    }
    if (!car_legal(stack[-3])) rplacd_fails(stack[-3]);
    setcdr(stack[-3], v_40);
    v_40 = stack[-3];
    goto v_7;
    v_40 = nil;
v_7:
    return onevalue(v_40);
}



// Code for insert

static LispObject CC_insert(LispObject env,
                         LispObject v_3, LispObject v_4)
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
        push(v_3,v_4);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_4,v_3);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    v_44 = v_4;
    stack[-1] = v_3;
// end of prologue
// Binding gg!*
// FLUIDBIND: reloadenv=3 litvec-offset=1 saveloc=2
{   bind_fluid_stack bind_fluid_var(-3, 1, -2);
    setvalue(basic_elt(env, 1), v_44); // gg!*
    stack[0] = nil;
v_16:
    v_44 = qvalue(basic_elt(env, 1)); // gg!*
    if (v_44 == nil) goto v_19;
    v_44 = stack[-1];
    if (!car_legal(v_44)) v_45 = cdrerror(v_44); else
    v_45 = cdr(v_44);
    v_44 = qvalue(basic_elt(env, 1)); // gg!*
    if (!car_legal(v_44)) v_44 = carerror(v_44); else
    v_44 = car(v_44);
    if (!car_legal(v_44)) v_44 = cdrerror(v_44); else
    v_44 = cdr(v_44);
    {   LispObject fn = basic_elt(env, 2); // dless
    v_44 = (*qfn2(fn))(fn, v_45, v_44);
    }
    env = stack[-3];
    if (v_44 == nil) goto v_19;
    goto v_20;
v_19:
    goto v_15;
v_20:
    v_44 = qvalue(basic_elt(env, 1)); // gg!*
    if (!car_legal(v_44)) v_45 = carerror(v_44); else
    v_45 = car(v_44);
    v_44 = stack[0];
    v_44 = cons(v_45, v_44);
    env = stack[-3];
    stack[0] = v_44;
    v_44 = qvalue(basic_elt(env, 1)); // gg!*
    if (!car_legal(v_44)) v_44 = cdrerror(v_44); else
    v_44 = cdr(v_44);
    setvalue(basic_elt(env, 1), v_44); // gg!*
    goto v_16;
v_15:
    v_44 = stack[0];
    stack[0] = Lnreverse(nil, v_44);
    env = stack[-3];
    v_45 = stack[-1];
    v_44 = qvalue(basic_elt(env, 1)); // gg!*
    v_44 = cons(v_45, v_44);
    env = stack[-3];
    v_44 = Lappend_2(nil, stack[0], v_44);
    ;}  // end of a binding scope
    return onevalue(v_44);
}



// Code for charnump!:

static LispObject CC_charnumpT(LispObject env,
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
    real_push(nil, nil, nil, nil, nil);
    real_push(nil, nil, nil, nil, nil);
    push(nil, nil, nil);
    stack_popper stack_popper_var(14);
// copy arguments values to proper place
    v_30 = v_2;
// end of prologue
    stack[-12] = v_30;
    stack[-11] = basic_elt(env, 1); // !0
    stack[-10] = basic_elt(env, 2); // !1
    stack[-9] = basic_elt(env, 3); // !2
    stack[-8] = basic_elt(env, 4); // !3
    stack[-7] = basic_elt(env, 5); // !4
    stack[-6] = basic_elt(env, 6); // !5
    stack[-5] = basic_elt(env, 7); // !6
    stack[-4] = basic_elt(env, 8); // !7
    stack[-3] = basic_elt(env, 9); // !8
    stack[-2] = basic_elt(env, 10); // !9
    stack[-1] = basic_elt(env, 11); // !10
    stack[0] = basic_elt(env, 12); // !11
    v_31 = basic_elt(env, 13); // !12
    v_30 = basic_elt(env, 14); // !13
    v_30 = list2(v_31, v_30);
    env = stack[-13];
    v_30 = list3star(stack[-2], stack[-1], stack[0], v_30);
    env = stack[-13];
    v_30 = list3star(stack[-5], stack[-4], stack[-3], v_30);
    env = stack[-13];
    v_30 = list3star(stack[-8], stack[-7], stack[-6], v_30);
    env = stack[-13];
    v_30 = list3star(stack[-11], stack[-10], stack[-9], v_30);
    v_30 = Lmemq(nil, stack[-12], v_30);
    if (v_30 == nil) goto v_7;
    v_30 = lisp_true;
    goto v_5;
v_7:
    v_30 = nil;
v_5:
    return onevalue(v_30);
}



// Code for build!-null!-vector

static LispObject CC_buildKnullKvector(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(7);
// copy arguments values to proper place
    stack[-2] = v_4;
    stack[-3] = v_3;
    stack[-4] = v_2;
// end of prologue
    v_40 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-5] = v_40;
v_11:
    v_40 = stack[-4];
    v_41 = static_cast<LispObject>(static_cast<std::intptr_t>(v_40) - 0x10);
    v_40 = stack[-5];
    v_40 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_41) - static_cast<std::uintptr_t>(v_40) + TAG_FIXNUM);
    v_40 = (static_cast<std::intptr_t>(v_40) < 0 ? lisp_true : nil);
    if (v_40 == nil) goto v_16;
    goto v_10;
v_16:
    stack[-1] = stack[-3];
    stack[0] = stack[-5];
    v_41 = stack[-2];
    v_40 = stack[-5];
    v_41 = Lgetv(nil, v_41, v_40);
    env = stack[-6];
    v_40 = stack[-4];
    v_40 = Lgetv(nil, v_41, v_40);
    env = stack[-6];
    v_40 = Lputv(nil, stack[-1], stack[0], v_40);
    env = stack[-6];
    v_40 = stack[-5];
    v_40 = static_cast<LispObject>(static_cast<std::intptr_t>(v_40) + 0x10);
    stack[-5] = v_40;
    goto v_11;
v_10:
    v_42 = stack[-3];
    v_41 = stack[-4];
    v_40 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_40 = Lputv(nil, v_42, v_41, v_40);
    v_41 = stack[-3];
    v_40 = stack[-4];
    return cons(v_41, v_40);
    return onevalue(v_40);
}



// Code for lalr_generate_collection

static LispObject CC_lalr_generate_collection(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_65, v_66;
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
    v_65 = qvalue(basic_elt(env, 1)); // itemset_collection
    stack[-1] = v_65;
v_10:
    v_65 = stack[-1];
    if (v_65 == nil) goto v_14;
    else goto v_15;
v_14:
    goto v_9;
v_15:
    v_65 = stack[-1];
    if (!car_legal(v_65)) v_65 = carerror(v_65); else
    v_65 = car(v_65);
    stack[0] = v_65;
    if (!car_legal(v_65)) v_65 = carerror(v_65); else
    v_65 = car(v_65);
    {   LispObject fn = basic_elt(env, 3); // lalr_lr0_itemset_to_lalr_kernel
    v_65 = (*qfn1(fn))(fn, v_65);
    }
    env = stack[-2];
    if (!car_legal(stack[0])) rplaca_fails(stack[0]);
    setcar(stack[0], v_65);
    v_65 = stack[-1];
    if (!car_legal(v_65)) v_65 = cdrerror(v_65); else
    v_65 = cdr(v_65);
    stack[-1] = v_65;
    goto v_10;
v_9:
    {   LispObject fn = basic_elt(env, 4); // lalr_analyze_lookaheads
    v_65 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
    stack[0] = v_65;
    v_66 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_65 = qvalue(basic_elt(env, 1)); // itemset_collection
    {   LispObject fn = basic_elt(env, 5); // carrassoc
    v_65 = (*qfn2(fn))(fn, v_66, v_65);
    }
    env = stack[-2];
    if (!car_legal(v_65)) v_66 = carerror(v_65); else
    v_66 = car(v_65);
    v_65 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {   LispObject fn = basic_elt(env, 6); // lalr_add_lookahead
    v_65 = (*qfn2(fn))(fn, v_66, v_65);
    }
    env = stack[-2];
    v_65 = stack[0];
    {   LispObject fn = basic_elt(env, 7); // lalr_propagate_lookaheads
    v_65 = (*qfn1(fn))(fn, v_65);
    }
    env = stack[-2];
    v_65 = qvalue(basic_elt(env, 1)); // itemset_collection
    stack[-1] = v_65;
v_41:
    v_65 = stack[-1];
    if (v_65 == nil) goto v_45;
    else goto v_46;
v_45:
    goto v_40;
v_46:
    v_65 = stack[-1];
    if (!car_legal(v_65)) v_65 = carerror(v_65); else
    v_65 = car(v_65);
    stack[0] = v_65;
    if (!car_legal(v_65)) v_65 = carerror(v_65); else
    v_65 = car(v_65);
    {   LispObject fn = basic_elt(env, 8); // lalr_closure
    v_65 = (*qfn1(fn))(fn, v_65);
    }
    env = stack[-2];
    if (!car_legal(stack[0])) rplaca_fails(stack[0]);
    setcar(stack[0], v_65);
    v_65 = stack[-1];
    if (!car_legal(v_65)) v_65 = cdrerror(v_65); else
    v_65 = cdr(v_65);
    stack[-1] = v_65;
    goto v_41;
v_40:
    v_65 = qvalue(basic_elt(env, 2)); // !*lalr_verbose
    if (v_65 == nil) goto v_62;
    {   LispObject fn = basic_elt(env, 9); // lalr_print_collection
    v_65 = (*qfn0(fn))(fn);
    }
    goto v_60;
v_62:
v_60:
    v_65 = nil;
    return onevalue(v_65);
}



// Code for normalform

static LispObject CC_normalform(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_87, v_88, v_89;
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
    v_87 = nil;
    v_87 = ncons(v_87);
    env = stack[-3];
    stack[-2] = v_87;
    v_87 = stack[-1];
    if (!car_legal(v_87)) v_87 = carerror(v_87); else
    v_87 = car(v_87);
    if (v_87 == nil) goto v_12;
    else goto v_13;
v_12:
    v_87 = stack[-2];
    goto v_7;
v_13:
    v_87 = qvalue(basic_elt(env, 1)); // fluidbibasisnormalforms
    v_87 = static_cast<LispObject>(static_cast<std::intptr_t>(v_87) + 0x10);
    setvalue(basic_elt(env, 1), v_87); // fluidbibasisnormalforms
v_22:
    v_87 = stack[-1];
    if (!car_legal(v_87)) v_87 = carerror(v_87); else
    v_87 = car(v_87);
    if (v_87 == nil) goto v_25;
    else goto v_26;
v_25:
    goto v_21;
v_26:
    v_87 = stack[-1];
    if (!car_legal(v_87)) v_87 = carerror(v_87); else
    v_87 = car(v_87);
    {   LispObject fn = basic_elt(env, 2); // janettreefind
    v_87 = (*qfn1(fn))(fn, v_87);
    }
    env = stack[-3];
    v_88 = v_87;
v_35:
    v_87 = v_88;
    if (v_87 == nil) goto v_38;
    else goto v_39;
v_38:
    goto v_34;
v_39:
    stack[0] = stack[-1];
    v_87 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_87 = Lgetv(nil, v_88, v_87);
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 3); // polynomheadreduceby
    v_87 = (*qfn2(fn))(fn, stack[0], v_87);
    }
    env = stack[-3];
    v_87 = stack[-1];
    if (!car_legal(v_87)) v_87 = carerror(v_87); else
    v_87 = car(v_87);
    if (v_87 == nil) goto v_50;
    v_87 = stack[-1];
    if (!car_legal(v_87)) v_87 = carerror(v_87); else
    v_87 = car(v_87);
    {   LispObject fn = basic_elt(env, 2); // janettreefind
    v_87 = (*qfn1(fn))(fn, v_87);
    }
    env = stack[-3];
    v_88 = v_87;
    goto v_48;
v_50:
    v_87 = nil;
    v_88 = v_87;
    goto v_48;
v_48:
    goto v_35;
v_34:
    v_87 = stack[-1];
    if (!car_legal(v_87)) v_87 = carerror(v_87); else
    v_87 = car(v_87);
    if (v_87 == nil) goto v_65;
    stack[0] = stack[-2];
    v_87 = stack[-1];
    if (!car_legal(v_87)) v_89 = carerror(v_87); else
    v_89 = car(v_87);
    v_88 = nil;
    v_87 = nil;
    v_87 = list2star(v_89, v_88, v_87);
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 4); // polynomadd
    v_87 = (*qfn2(fn))(fn, stack[0], v_87);
    }
    env = stack[-3];
    v_88 = stack[-1];
    v_87 = stack[-1];
    if (!car_legal(v_87)) v_87 = cdrerror(v_87); else
    v_87 = cdr(v_87);
    if (!car_legal(v_87)) v_87 = carerror(v_87); else
    v_87 = car(v_87);
    if (!car_legal(v_88)) rplaca_fails(v_88);
    setcar(v_88, v_87);
    v_87 = stack[-1];
    if (!car_legal(v_87)) v_87 = cdrerror(v_87); else
    v_87 = cdr(v_87);
    if (!car_legal(v_87)) v_87 = cdrerror(v_87); else
    v_87 = cdr(v_87);
    if (!car_legal(v_88)) rplacd_fails(v_88);
    setcdr(v_88, v_87);
    goto v_63;
v_65:
v_63:
    goto v_22;
v_21:
    v_87 = stack[-2];
v_7:
    return onevalue(v_87);
}



// Code for wureducedp

static LispObject CC_wureducedp(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_35 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // wuconstantp
    v_35 = (*qfn1(fn))(fn, v_35);
    }
    env = stack[-2];
    if (v_35 == nil) goto v_7;
    else goto v_6;
v_7:
    v_35 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // wuconstantp
    v_35 = (*qfn1(fn))(fn, v_35);
    }
    env = stack[-2];
    if (v_35 == nil) goto v_12;
    else goto v_11;
v_12:
    v_35 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // wuconstantp
    v_35 = (*qfn1(fn))(fn, v_35);
    }
    env = stack[-2];
    if (v_35 == nil) goto v_21;
    v_35 = nil;
    goto v_19;
v_21:
    v_35 = stack[0];
    if (!car_legal(v_35)) v_35 = carerror(v_35); else
    v_35 = car(v_35);
    if (!car_legal(v_35)) v_35 = carerror(v_35); else
    v_35 = car(v_35);
    if (!car_legal(v_35)) v_35 = carerror(v_35); else
    v_35 = car(v_35);
    goto v_19;
    v_35 = nil;
v_19:
    {   LispObject fn = basic_elt(env, 2); // deginvar
    v_36 = (*qfn2(fn))(fn, stack[-1], v_35);
    }
    v_35 = stack[0];
    if (!car_legal(v_35)) v_35 = carerror(v_35); else
    v_35 = car(v_35);
    if (!car_legal(v_35)) v_35 = carerror(v_35); else
    v_35 = car(v_35);
    if (!car_legal(v_35)) v_35 = cdrerror(v_35); else
    v_35 = cdr(v_35);
        return Llessp_2(nil, v_36, v_35);
v_11:
v_6:
    return onevalue(v_35);
}



// Code for get!-denom!-ll

static LispObject CC_getKdenomKll(LispObject env,
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
    if (!car_legal(v_30)) stack[0] = carerror(v_30); else
    stack[0] = car(v_30);
    v_30 = stack[-1];
    if (!car_legal(v_30)) v_30 = carerror(v_30); else
    v_30 = car(v_30);
    {   LispObject fn = basic_elt(env, 2); // get!-denom!-l
    v_30 = (*qfn1(fn))(fn, v_30);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 3); // lcmn
    v_31 = (*qfn2(fn))(fn, stack[0], v_30);
    }
    env = stack[-4];
    v_30 = stack[-3];
    v_30 = cons(v_31, v_30);
    env = stack[-4];
    stack[-3] = v_30;
    v_30 = stack[-2];
    if (!car_legal(v_30)) v_30 = cdrerror(v_30); else
    v_30 = cdr(v_30);
    stack[-2] = v_30;
    v_30 = stack[-1];
    if (!car_legal(v_30)) v_30 = cdrerror(v_30); else
    v_30 = cdr(v_30);
    stack[-1] = v_30;
    goto v_8;
    v_30 = nil;
    return onevalue(v_30);
}



// Code for mksp!*

static LispObject CC_mkspH(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    stack[-2] = nil;
    v_52 = stack[-1];
    if (v_52 == nil) goto v_14;
    else goto v_15;
v_14:
    v_52 = lisp_true;
    goto v_13;
v_15:
    v_52 = stack[-1];
    {   LispObject fn = basic_elt(env, 1); // kernlp
    v_52 = (*qfn1(fn))(fn, v_52);
    }
    env = stack[-3];
    goto v_13;
    v_52 = nil;
v_13:
    if (v_52 == nil) goto v_11;
    v_53 = stack[-1];
    v_52 = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // exptf
        return (*qfn2(fn))(fn, v_53, v_52);
    }
v_11:
    v_52 = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // minusf
    v_52 = (*qfn1(fn))(fn, v_52);
    }
    env = stack[-3];
    if (v_52 == nil) goto v_26;
    v_52 = lisp_true;
    stack[-2] = v_52;
    v_52 = stack[-1];
    {   LispObject fn = basic_elt(env, 4); // negf
    v_52 = (*qfn1(fn))(fn, v_52);
    }
    env = stack[-3];
    stack[-1] = v_52;
    goto v_9;
v_26:
v_9:
    v_53 = stack[-1];
    v_52 = stack[0];
    {   LispObject fn = basic_elt(env, 5); // mksp
    v_53 = (*qfn2(fn))(fn, v_53, v_52);
    }
    env = stack[-3];
    v_52 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_52 = cons(v_53, v_52);
    env = stack[-3];
    v_52 = ncons(v_52);
    env = stack[-3];
    stack[-1] = v_52;
    v_52 = stack[-2];
    if (v_52 == nil) goto v_41;
    v_52 = stack[0];
    v_52 = Levenp(nil, v_52);
    env = stack[-3];
    if (v_52 == nil) goto v_44;
    else goto v_41;
v_44:
    v_52 = stack[-1];
    {
        LispObject fn = basic_elt(env, 4); // negf
        return (*qfn1(fn))(fn, v_52);
    }
v_41:
    v_52 = stack[-1];
    goto v_39;
    v_52 = nil;
v_39:
    return onevalue(v_52);
}



// Code for talp_try

static LispObject CC_talp_try(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // rl_pnf
    v_9 = (*qfn1(fn))(fn, v_9);
    }
    env = stack[0];
    {   LispObject fn = basic_elt(env, 2); // talp_invtscsimpl
    v_9 = (*qfn1(fn))(fn, v_9);
    }
    env = stack[0];
    {   LispObject fn = basic_elt(env, 3); // talp_lssimpl
    v_9 = (*qfn1(fn))(fn, v_9);
    }
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 4); // talp_try1
        return (*qfn1(fn))(fn, v_9);
    }
}



// Code for vunion

static LispObject CC_vunion(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_55 = stack[-2];
    if (v_55 == nil) goto v_10;
    else goto v_11;
v_10:
    v_55 = stack[-1];
    goto v_9;
v_11:
    v_55 = stack[-2];
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    if (!car_legal(v_55)) v_56 = carerror(v_55); else
    v_56 = car(v_55);
    v_55 = stack[-1];
    v_55 = Lassoc(nil, v_56, v_55);
    stack[-3] = v_55;
    if (v_55 == nil) goto v_14;
    else goto v_15;
v_14:
    v_55 = stack[-2];
    if (!car_legal(v_55)) stack[0] = carerror(v_55); else
    stack[0] = car(v_55);
    v_55 = stack[-2];
    if (!car_legal(v_55)) v_56 = cdrerror(v_55); else
    v_56 = cdr(v_55);
    v_55 = stack[-1];
    {   LispObject fn = basic_elt(env, 0); // vunion
    v_55 = (*qfn2(fn))(fn, v_56, v_55);
    }
    {
        LispObject v_61 = stack[0];
        return cons(v_61, v_55);
    }
v_15:
    v_55 = stack[-2];
    if (!car_legal(v_55)) v_55 = carerror(v_55); else
    v_55 = car(v_55);
    if (!car_legal(v_55)) v_56 = cdrerror(v_55); else
    v_56 = cdr(v_55);
    v_55 = stack[-3];
    if (!car_legal(v_55)) v_55 = cdrerror(v_55); else
    v_55 = cdr(v_55);
    v_55 = static_cast<LispObject>(greaterp2(v_56, v_55));
    v_55 = v_55 ? lisp_true : nil;
    env = stack[-4];
    if (v_55 == nil) goto v_29;
    v_55 = stack[-2];
    if (!car_legal(v_55)) stack[0] = carerror(v_55); else
    stack[0] = car(v_55);
    v_55 = stack[-2];
    if (!car_legal(v_55)) stack[-2] = cdrerror(v_55); else
    stack[-2] = cdr(v_55);
    v_56 = stack[-3];
    v_55 = stack[-1];
    v_55 = Ldelete(nil, v_56, v_55);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 0); // vunion
    v_55 = (*qfn2(fn))(fn, stack[-2], v_55);
    }
    {
        LispObject v_62 = stack[0];
        return cons(v_62, v_55);
    }
v_29:
    stack[0] = stack[-3];
    v_55 = stack[-2];
    if (!car_legal(v_55)) stack[-2] = cdrerror(v_55); else
    stack[-2] = cdr(v_55);
    v_56 = stack[-3];
    v_55 = stack[-1];
    v_55 = Ldelete(nil, v_56, v_55);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 0); // vunion
    v_55 = (*qfn2(fn))(fn, stack[-2], v_55);
    }
    {
        LispObject v_63 = stack[0];
        return cons(v_63, v_55);
    }
    v_55 = nil;
v_9:
    return onevalue(v_55);
}



// Code for cnrd

static LispObject CC_cnrd(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_109, v_110, v_111;
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
    stack_popper stack_popper_var(6);
// end of prologue
    v_110 = qvalue(basic_elt(env, 1)); // atts
    v_109 = basic_elt(env, 2); // type
    {   LispObject fn = basic_elt(env, 15); // find
    v_109 = (*qfn2(fn))(fn, v_110, v_109);
    }
    env = stack[-5];
    v_109 = Lintern(nil, v_109);
    env = stack[-5];
    stack[-1] = v_109;
    v_110 = qvalue(basic_elt(env, 1)); // atts
    v_109 = basic_elt(env, 3); // base
    {   LispObject fn = basic_elt(env, 15); // find
    v_109 = (*qfn2(fn))(fn, v_110, v_109);
    }
    env = stack[-5];
    stack[0] = v_109;
    {   LispObject fn = basic_elt(env, 16); // lex
    v_109 = (*qfn0(fn))(fn);
    }
    env = stack[-5];
    v_109 = qvalue(basic_elt(env, 4)); // char
    stack[-4] = v_109;
    {   LispObject fn = basic_elt(env, 16); // lex
    v_109 = (*qfn0(fn))(fn);
    }
    env = stack[-5];
    v_110 = stack[-1];
    v_109 = basic_elt(env, 5); // constant
    if (v_110 == v_109) goto v_23;
    else goto v_24;
v_23:
    v_109 = stack[-4];
    {
        LispObject fn = basic_elt(env, 17); // compress!*
        return (*qfn1(fn))(fn, v_109);
    }
v_24:
    v_109 = stack[-1];
    if (v_109 == nil) goto v_31;
    else goto v_32;
v_31:
    v_109 = stack[-4];
    {
        LispObject fn = basic_elt(env, 17); // compress!*
        return (*qfn1(fn))(fn, v_109);
    }
v_32:
    v_110 = stack[-1];
    v_109 = basic_elt(env, 6); // (real integer)
    v_109 = Lmember(nil, v_110, v_109);
    if (v_109 == nil) goto v_39;
    v_109 = stack[0];
    if (v_109 == nil) goto v_45;
    else goto v_46;
v_45:
    v_109 = stack[-4];
    {
        LispObject fn = basic_elt(env, 17); // compress!*
        return (*qfn1(fn))(fn, v_109);
    }
v_46:
    stack[-3] = basic_elt(env, 7); // based_integer
    stack[-2] = nil;
    stack[-1] = stack[0];
    stack[0] = basic_elt(env, 8); // string
    v_109 = stack[-4];
    {   LispObject fn = basic_elt(env, 17); // compress!*
    v_110 = (*qfn1(fn))(fn, v_109);
    }
    env = stack[-5];
    v_109 = nil;
    v_110 = list2star(stack[0], v_110, v_109);
    env = stack[-5];
    v_109 = nil;
    v_109 = list2star(stack[-1], v_110, v_109);
    {
        LispObject v_117 = stack[-3];
        LispObject v_118 = stack[-2];
        return list2star(v_117, v_118, v_109);
    }
    goto v_37;
v_39:
v_37:
    v_109 = stack[-1];
    v_110 = Lintern(nil, v_109);
    env = stack[-5];
    v_109 = basic_elt(env, 9); // (rational complex!-cartesian complex!-polar)
    v_109 = Lmember(nil, v_110, v_109);
    if (v_109 == nil) goto v_66;
    {   LispObject fn = basic_elt(env, 18); // seprd
    v_109 = (*qfn0(fn))(fn);
    }
    env = stack[-5];
    stack[-2] = v_109;
    v_110 = stack[-1];
    v_109 = basic_elt(env, 10); // rational
    if (v_110 == v_109) goto v_74;
    else goto v_75;
v_74:
    {   LispObject fn = basic_elt(env, 16); // lex
    v_109 = (*qfn0(fn))(fn);
    }
    env = stack[-5];
    v_109 = stack[-4];
    {   LispObject fn = basic_elt(env, 17); // compress!*
    v_110 = (*qfn1(fn))(fn, v_109);
    }
    env = stack[-5];
    v_109 = stack[-2];
    {
        LispObject fn = basic_elt(env, 10); // rational
        return (*qfn2(fn))(fn, v_110, v_109);
    }
v_75:
    v_110 = stack[-1];
    v_109 = basic_elt(env, 11); // complex!-cartesian
    if (v_110 == v_109) goto v_83;
    else goto v_84;
v_83:
    {   LispObject fn = basic_elt(env, 16); // lex
    v_109 = (*qfn0(fn))(fn);
    }
    env = stack[-5];
    stack[-1] = basic_elt(env, 12); // complex_cartesian
    stack[0] = nil;
    v_109 = stack[-4];
    {   LispObject fn = basic_elt(env, 17); // compress!*
    v_111 = (*qfn1(fn))(fn, v_109);
    }
    env = stack[-5];
    v_110 = stack[-2];
    v_109 = nil;
    v_109 = list2star(v_111, v_110, v_109);
    {
        LispObject v_119 = stack[-1];
        LispObject v_120 = stack[0];
        return list2star(v_119, v_120, v_109);
    }
v_84:
    v_110 = stack[-1];
    v_109 = basic_elt(env, 13); // complex!-polar
    if (v_110 == v_109) goto v_96;
    else goto v_97;
v_96:
    {   LispObject fn = basic_elt(env, 16); // lex
    v_109 = (*qfn0(fn))(fn);
    }
    env = stack[-5];
    stack[-1] = basic_elt(env, 14); // complex_polar
    stack[0] = nil;
    v_109 = stack[-4];
    {   LispObject fn = basic_elt(env, 17); // compress!*
    v_111 = (*qfn1(fn))(fn, v_109);
    }
    env = stack[-5];
    v_110 = stack[-2];
    v_109 = nil;
    v_109 = list2star(v_111, v_110, v_109);
    {
        LispObject v_121 = stack[-1];
        LispObject v_122 = stack[0];
        return list2star(v_121, v_122, v_109);
    }
v_97:
    goto v_64;
v_66:
v_64:
    v_109 = nil;
    return onevalue(v_109);
}



// Code for doublep

static LispObject CC_doublep(LispObject env,
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
    v_18 = v_2;
// end of prologue
    v_17 = v_18;
    v_19 = basic_elt(env, 1); // !:rd!:
    if (!consp(v_17)) goto v_7;
    v_17 = car(v_17);
    if (v_17 == v_19) goto v_6;
    else goto v_7;
v_6:
    v_17 = v_18;
    if (!car_legal(v_17)) v_17 = cdrerror(v_17); else
    v_17 = cdr(v_17);
        return Lconsp(nil, v_17);
v_7:
    v_17 = nil;
    goto v_5;
    v_17 = nil;
v_5:
    return onevalue(v_17);
}



// Code for groebsavelterm

static LispObject CC_groebsavelterm(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_30, v_31;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_31 = v_2;
// end of prologue
    v_30 = qvalue(basic_elt(env, 1)); // !*groelterms
    if (v_30 == nil) goto v_7;
    v_30 = v_31;
    if (v_30 == nil) goto v_13;
    else goto v_14;
v_13:
    v_30 = lisp_true;
    goto v_12;
v_14:
    v_30 = v_31;
    if (!car_legal(v_30)) v_30 = cdrerror(v_30); else
    v_30 = cdr(v_30);
    if (!car_legal(v_30)) v_30 = cdrerror(v_30); else
    v_30 = cdr(v_30);
    if (!car_legal(v_30)) v_30 = cdrerror(v_30); else
    v_30 = cdr(v_30);
    if (!car_legal(v_30)) v_30 = carerror(v_30); else
    v_30 = car(v_30);
    v_30 = (v_30 == nil ? lisp_true : nil);
    goto v_12;
    v_30 = nil;
v_12:
    if (v_30 == nil) goto v_10;
    else goto v_7;
v_10:
    v_30 = v_31;
    if (!car_legal(v_30)) v_30 = cdrerror(v_30); else
    v_30 = cdr(v_30);
    if (!car_legal(v_30)) v_30 = cdrerror(v_30); else
    v_30 = cdr(v_30);
    if (!car_legal(v_30)) v_30 = carerror(v_30); else
    v_30 = car(v_30);
    {
        LispObject fn = basic_elt(env, 2); // groebsaveltermbc
        return (*qfn1(fn))(fn, v_30);
    }
v_7:
    v_30 = nil;
    return onevalue(v_30);
}



// Code for permp

static LispObject CC_permp(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_37, v_38, v_39, v_40;
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
    v_38 = v_3;
    v_39 = v_2;
// end of prologue
v_7:
    v_37 = v_39;
    if (v_37 == nil) goto v_10;
    else goto v_11;
v_10:
    v_37 = lisp_true;
    goto v_6;
v_11:
    v_37 = v_39;
    if (!car_legal(v_37)) v_40 = carerror(v_37); else
    v_40 = car(v_37);
    v_37 = v_38;
    if (!car_legal(v_37)) v_37 = carerror(v_37); else
    v_37 = car(v_37);
    if (equal(v_40, v_37)) goto v_14;
    else goto v_15;
v_14:
    v_37 = v_39;
    if (!car_legal(v_37)) v_37 = cdrerror(v_37); else
    v_37 = cdr(v_37);
    v_39 = v_37;
    v_37 = v_38;
    if (!car_legal(v_37)) v_37 = cdrerror(v_37); else
    v_37 = cdr(v_37);
    v_38 = v_37;
    goto v_7;
v_15:
    v_37 = v_39;
    if (!car_legal(v_37)) stack[0] = cdrerror(v_37); else
    stack[0] = cdr(v_37);
    v_37 = v_38;
    if (!car_legal(v_37)) v_37 = carerror(v_37); else
    v_37 = car(v_37);
    if (!car_legal(v_39)) v_39 = carerror(v_39); else
    v_39 = car(v_39);
    if (!car_legal(v_38)) v_38 = cdrerror(v_38); else
    v_38 = cdr(v_38);
    v_37 = Lsubst(nil, v_37, v_39, v_38);
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 0); // permp
    v_37 = (*qfn2(fn))(fn, stack[0], v_37);
    }
    v_37 = (v_37 == nil ? lisp_true : nil);
    goto v_6;
    v_37 = nil;
v_6:
    return onevalue(v_37);
}



// Code for getphystypeor

static LispObject CC_getphystypeor(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_21;
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
    v_21 = stack[0];
    if (!consp(v_21)) goto v_7;
    v_21 = stack[0];
    if (!car_legal(v_21)) v_21 = carerror(v_21); else
    v_21 = car(v_21);
    {   LispObject fn = basic_elt(env, 1); // getphystype
    v_21 = (*qfn1(fn))(fn, v_21);
    }
    env = stack[-1];
    if (v_21 == nil) goto v_11;
    else goto v_10;
v_11:
    v_21 = stack[0];
    if (!car_legal(v_21)) v_21 = cdrerror(v_21); else
    v_21 = cdr(v_21);
    stack[0] = v_21;
    goto v_1;
v_10:
    goto v_5;
v_7:
    v_21 = nil;
    goto v_5;
    v_21 = nil;
v_5:
    return onevalue(v_21);
}



// Code for l!-subst

static LispObject CC_lKsubst(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_35, v_36, v_37;
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
    v_37 = nil;
v_9:
    v_35 = stack[0];
    if (v_35 == nil) goto v_12;
    else goto v_13;
v_12:
    v_35 = v_37;
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn1(fn))(fn, v_35);
    }
v_13:
    v_36 = stack[-1];
    v_35 = stack[0];
    if (!car_legal(v_35)) v_35 = carerror(v_35); else
    v_35 = car(v_35);
    if (equal(v_36, v_35)) goto v_17;
    else goto v_18;
v_17:
    v_35 = stack[-2];
    v_36 = v_37;
    v_35 = cons(v_35, v_36);
    env = stack[-3];
    v_37 = v_35;
    v_35 = stack[0];
    if (!car_legal(v_35)) v_35 = cdrerror(v_35); else
    v_35 = cdr(v_35);
    stack[0] = v_35;
    goto v_9;
v_18:
    v_35 = stack[0];
    if (!car_legal(v_35)) v_35 = carerror(v_35); else
    v_35 = car(v_35);
    v_36 = v_37;
    v_35 = cons(v_35, v_36);
    env = stack[-3];
    v_37 = v_35;
    v_35 = stack[0];
    if (!car_legal(v_35)) v_35 = cdrerror(v_35); else
    v_35 = cdr(v_35);
    stack[0] = v_35;
    goto v_9;
    v_35 = nil;
    return onevalue(v_35);
}



// Code for formde

static LispObject CC_formde(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_43, v_44, v_45;
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
    v_43 = v_2;
// end of prologue
    stack[-6] = basic_elt(env, 1); // procedure
    v_44 = v_43;
    if (!car_legal(v_44)) v_44 = cdrerror(v_44); else
    v_44 = cdr(v_44);
    if (!car_legal(v_44)) stack[-3] = carerror(v_44); else
    stack[-3] = car(v_44);
    stack[-2] = basic_elt(env, 2); // symbolic
    stack[-1] = basic_elt(env, 3); // expr
    v_44 = v_43;
    if (!car_legal(v_44)) v_44 = cdrerror(v_44); else
    v_44 = cdr(v_44);
    if (!car_legal(v_44)) v_44 = cdrerror(v_44); else
    v_44 = cdr(v_44);
    if (!car_legal(v_44)) stack[0] = carerror(v_44); else
    stack[0] = car(v_44);
    v_44 = v_43;
    if (!car_legal(v_44)) v_44 = cdrerror(v_44); else
    v_44 = cdr(v_44);
    if (!car_legal(v_44)) v_44 = cdrerror(v_44); else
    v_44 = cdr(v_44);
    if (!car_legal(v_44)) v_44 = cdrerror(v_44); else
    v_44 = cdr(v_44);
    if (!car_legal(v_44)) v_44 = cdrerror(v_44); else
    v_44 = cdr(v_44);
    if (v_44 == nil) goto v_21;
    else goto v_22;
v_21:
    if (!car_legal(v_43)) v_43 = cdrerror(v_43); else
    v_43 = cdr(v_43);
    if (!car_legal(v_43)) v_43 = cdrerror(v_43); else
    v_43 = cdr(v_43);
    if (!car_legal(v_43)) v_43 = cdrerror(v_43); else
    v_43 = cdr(v_43);
    if (!car_legal(v_43)) v_43 = carerror(v_43); else
    v_43 = car(v_43);
    goto v_20;
v_22:
    v_44 = basic_elt(env, 4); // progn
    if (!car_legal(v_43)) v_43 = cdrerror(v_43); else
    v_43 = cdr(v_43);
    if (!car_legal(v_43)) v_43 = cdrerror(v_43); else
    v_43 = cdr(v_43);
    if (!car_legal(v_43)) v_43 = cdrerror(v_43); else
    v_43 = cdr(v_43);
    v_43 = cons(v_44, v_43);
    env = stack[-7];
    goto v_20;
    v_43 = nil;
v_20:
    v_43 = list3(stack[-1], stack[0], v_43);
    env = stack[-7];
    v_45 = list3star(stack[-6], stack[-3], stack[-2], v_43);
    env = stack[-7];
    v_44 = stack[-5];
    v_43 = stack[-4];
    {
        LispObject fn = basic_elt(env, 5); // formproc
        return (*qfn3(fn))(fn, v_45, v_44, v_43);
    }
}



// Code for sqhorner!*

static LispObject CC_sqhornerH(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[-1] = v_2;
// end of prologue
    v_27 = qvalue(basic_elt(env, 1)); // !*horner
    if (v_27 == nil) goto v_6;
    else goto v_7;
v_6:
    v_27 = stack[-1];
    goto v_5;
v_7:
    v_28 = qvalue(basic_elt(env, 2)); // ordl!*
    v_27 = qvalue(basic_elt(env, 3)); // kord!*
    v_27 = Lappend_2(nil, v_28, v_27);
    env = stack[-3];
// Binding kord!*
// FLUIDBIND: reloadenv=3 litvec-offset=3 saveloc=2
{   bind_fluid_stack bind_fluid_var(-3, 3, -2);
    setvalue(basic_elt(env, 3), v_27); // kord!*
    v_27 = stack[-1];
    if (!car_legal(v_27)) v_27 = carerror(v_27); else
    v_27 = car(v_27);
    {   LispObject fn = basic_elt(env, 4); // reorder
    stack[0] = (*qfn1(fn))(fn, v_27);
    }
    env = stack[-3];
    v_27 = stack[-1];
    if (!car_legal(v_27)) v_27 = cdrerror(v_27); else
    v_27 = cdr(v_27);
    {   LispObject fn = basic_elt(env, 4); // reorder
    v_27 = (*qfn1(fn))(fn, v_27);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 5); // hornerf
    v_27 = (*qfn1(fn))(fn, v_27);
    }
    env = stack[-3];
    v_27 = cons(stack[0], v_27);
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 6); // hornersq
    v_27 = (*qfn1(fn))(fn, v_27);
    }
    ;}  // end of a binding scope
    goto v_5;
    v_27 = nil;
v_5:
    return onevalue(v_27);
}



// Code for delasc

static LispObject CC_delasc(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_43, v_44;
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
v_10:
    v_43 = stack[0];
    if (v_43 == nil) goto v_13;
    else goto v_14;
v_13:
    goto v_9;
v_14:
    v_43 = stack[0];
    if (!car_legal(v_43)) v_43 = carerror(v_43); else
    v_43 = car(v_43);
    if (!consp(v_43)) goto v_23;
    else goto v_24;
v_23:
    v_43 = lisp_true;
    goto v_22;
v_24:
    v_44 = stack[-1];
    v_43 = stack[0];
    if (!car_legal(v_43)) v_43 = carerror(v_43); else
    v_43 = car(v_43);
    if (!car_legal(v_43)) v_43 = carerror(v_43); else
    v_43 = car(v_43);
    v_43 = Lneq_2(nil, v_44, v_43);
    env = stack[-3];
    goto v_22;
    v_43 = nil;
v_22:
    if (v_43 == nil) goto v_20;
    v_43 = stack[0];
    if (!car_legal(v_43)) v_44 = carerror(v_43); else
    v_44 = car(v_43);
    v_43 = stack[-2];
    v_43 = cons(v_44, v_43);
    env = stack[-3];
    stack[-2] = v_43;
    goto v_18;
v_20:
v_18:
    v_43 = stack[0];
    if (!car_legal(v_43)) v_43 = cdrerror(v_43); else
    v_43 = cdr(v_43);
    stack[0] = v_43;
    goto v_10;
v_9:
    v_43 = stack[-2];
        return Lnreverse(nil, v_43);
    return onevalue(v_43);
}



// Code for lalr_prin_reduction

static LispObject CC_lalr_prin_reduction(LispObject env,
                         LispObject v_2)
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
    v_48 = qvalue(basic_elt(env, 1)); // reduction_info
    if (!car_legal(v_48)) v_48 = carerror(v_48); else
    v_48 = car(v_48);
    stack[-3] = v_48;
    v_48 = qvalue(basic_elt(env, 1)); // reduction_info
    if (!car_legal(v_48)) v_48 = cdrerror(v_48); else
    v_48 = cdr(v_48);
    if (!car_legal(v_48)) v_48 = carerror(v_48); else
    v_48 = car(v_48);
    stack[-1] = v_48;
    v_48 = qvalue(basic_elt(env, 1)); // reduction_info
    if (!car_legal(v_48)) v_48 = cdrerror(v_48); else
    v_48 = cdr(v_48);
    if (!car_legal(v_48)) v_48 = cdrerror(v_48); else
    v_48 = cdr(v_48);
    if (!car_legal(v_48)) v_48 = carerror(v_48); else
    v_48 = car(v_48);
    stack[0] = v_48;
    v_48 = basic_elt(env, 2); // "reduce by #"
    v_48 = Lprinc(nil, v_48);
    env = stack[-4];
    v_48 = stack[-2];
    v_48 = Lprin(nil, v_48);
    env = stack[-4];
    v_48 = basic_elt(env, 3); // ": "
    v_48 = Lprinc(nil, v_48);
    env = stack[-4];
    v_49 = stack[0];
    v_48 = stack[-2];
    {   LispObject fn = basic_elt(env, 6); // getv16
    v_48 = (*qfn2(fn))(fn, v_49, v_48);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 7); // lalr_prin_nonterminal
    v_48 = (*qfn1(fn))(fn, v_48);
    }
    env = stack[-4];
    v_48 = basic_elt(env, 4); // " -> ["
    v_48 = Lprinc(nil, v_48);
    env = stack[-4];
    v_49 = stack[-1];
    v_48 = stack[-2];
    {   LispObject fn = basic_elt(env, 8); // getv8
    v_48 = (*qfn2(fn))(fn, v_49, v_48);
    }
    env = stack[-4];
    v_48 = Lprin(nil, v_48);
    env = stack[-4];
    v_48 = basic_elt(env, 5); // " symbols] "
    v_48 = Lprinc(nil, v_48);
    env = stack[-4];
    v_49 = stack[-3];
    v_48 = stack[-2];
    v_48 = Lgetv(nil, v_49, v_48);
    env = stack[-4];
    v_49 = v_48;
    if (v_48 == nil) goto v_40;
    v_48 = v_49;
    {   LispObject fn = basic_elt(env, 9); // getd
    v_48 = (*qfn1(fn))(fn, v_48);
    }
    env = stack[-4];
    if (!car_legal(v_48)) v_48 = cdrerror(v_48); else
    v_48 = cdr(v_48);
    {   LispObject fn = basic_elt(env, 10); // prin_with_margin
    v_48 = (*qfn1(fn))(fn, v_48);
    }
    goto v_38;
v_40:
v_38:
    v_48 = nil;
    return onevalue(v_48);
}



// Code for co_new

static LispObject CC_co_new(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_5;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// end of prologue
    v_5 = nil;
    return ncons(v_5);
}



// Code for ofsf_negateat

static LispObject CC_ofsf_negateat(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_22, v_23, v_24;
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
    v_22 = stack[0];
    if (!car_legal(v_22)) v_22 = cdrerror(v_22); else
    v_22 = cdr(v_22);
    if (!car_legal(v_22)) v_23 = carerror(v_22); else
    v_23 = car(v_22);
    v_22 = stack[0];
    if (!car_legal(v_22)) v_22 = cdrerror(v_22); else
    v_22 = cdr(v_22);
    if (!car_legal(v_22)) v_22 = cdrerror(v_22); else
    v_22 = cdr(v_22);
    if (!car_legal(v_22)) v_22 = carerror(v_22); else
    v_22 = car(v_22);
    v_22 = list2(v_23, v_22);
    env = stack[-2];
    stack[-1] = v_22;
    v_22 = stack[0];
    if (!car_legal(v_22)) v_22 = carerror(v_22); else
    v_22 = car(v_22);
    {   LispObject fn = basic_elt(env, 1); // ofsf_lnegrel
    v_24 = (*qfn1(fn))(fn, v_22);
    }
    v_22 = stack[-1];
    if (!car_legal(v_22)) v_23 = carerror(v_22); else
    v_23 = car(v_22);
    v_22 = stack[-1];
    if (!car_legal(v_22)) v_22 = cdrerror(v_22); else
    v_22 = cdr(v_22);
    if (!car_legal(v_22)) v_22 = carerror(v_22); else
    v_22 = car(v_22);
    return list3(v_24, v_23, v_22);
}



// Code for mk!+conjugate!+sq

static LispObject CC_mkLconjugateLsq(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_8;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_8 = v_2;
// end of prologue
    {
        LispObject fn = basic_elt(env, 1); // conjsq
        return (*qfn1(fn))(fn, v_8);
    }
    return onevalue(v_8);
}



// Code for dm!-mkfloat

static LispObject CC_dmKmkfloat(LispObject env,
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
    v_18 = v_17;
    v_18 = Lintegerp(nil, v_18);
    env = stack[0];
    if (v_18 == nil) goto v_7;
    v_18 = basic_elt(env, 1); // !:rd!:
    if (!symbolp(v_18)) v_18 = nil;
    else { v_18 = qfastgets(v_18);
           if (v_18 != nil) { v_18 = elt(v_18, 34); // i2d
#ifdef RECORD_GET
             if (v_18 != SPID_NOPROP)
                record_get(elt(fastget_names, 34), 1);
             else record_get(elt(fastget_names, 34), 0),
                v_18 = nil; }
           else record_get(elt(fastget_names, 34), 0); }
#else
             if (v_18 == SPID_NOPROP) v_18 = nil; }}
#endif
        return Lapply1(nil, v_18, v_17);
v_7:
    goto v_5;
    v_17 = nil;
v_5:
    return onevalue(v_17);
}



// Code for bcfd

static LispObject CC_bcfd(LispObject env,
                         LispObject v_2)
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
        push(v_2);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_34 = v_2;
// end of prologue
    v_32 = qvalue(basic_elt(env, 1)); // !*grmod!*
    if (v_32 == nil) goto v_6;
    else goto v_7;
v_6:
    v_33 = v_34;
    v_32 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {
        LispObject fn = basic_elt(env, 4); // mkbc
        return (*qfn2(fn))(fn, v_33, v_32);
    }
v_7:
    v_32 = v_34;
    v_32 = integerp(v_32);
    if (v_32 == nil) goto v_13;
    v_32 = v_34;
    {
        LispObject fn = basic_elt(env, 5); // bcfi
        return (*qfn1(fn))(fn, v_32);
    }
v_13:
    v_32 = v_34;
    if (!car_legal(v_32)) v_33 = carerror(v_32); else
    v_33 = car(v_32);
    v_32 = basic_elt(env, 2); // !:mod!:
    if (v_33 == v_32) goto v_19;
    v_32 = basic_elt(env, 3); // "Invalid modular coefficient"
    v_33 = v_34;
    v_32 = list2(v_32, v_33);
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 6); // rederr
        return (*qfn1(fn))(fn, v_32);
    }
v_19:
    v_32 = v_34;
    if (!car_legal(v_32)) v_32 = cdrerror(v_32); else
    v_32 = cdr(v_32);
    {
        LispObject fn = basic_elt(env, 5); // bcfi
        return (*qfn1(fn))(fn, v_32);
    }
    v_32 = nil;
    return onevalue(v_32);
}



// Code for vevstrictlydivides!?

static LispObject CC_vevstrictlydividesW(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_17, v_18, v_19, v_20;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_19 = v_3;
    v_20 = v_2;
// end of prologue
    v_18 = v_20;
    v_17 = v_19;
    if (equal(v_18, v_17)) goto v_8;
    v_17 = v_19;
    v_18 = v_20;
    {
        LispObject fn = basic_elt(env, 1); // vevmtest!?
        return (*qfn2(fn))(fn, v_17, v_18);
    }
v_8:
    v_17 = nil;
    goto v_6;
    v_17 = nil;
v_6:
    return onevalue(v_17);
}



// Code for equalreval

static LispObject CC_equalreval(LispObject env,
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
    v_30 = v_2;
// end of prologue
    v_31 = qvalue(basic_elt(env, 1)); // substitution
    if (v_31 == nil) goto v_6;
    else goto v_7;
v_6:
    stack[-1] = basic_elt(env, 2); // equal
    v_31 = v_30;
    if (!car_legal(v_31)) stack[0] = carerror(v_31); else
    stack[0] = car(v_31);
    if (!car_legal(v_30)) v_30 = cdrerror(v_30); else
    v_30 = cdr(v_30);
    if (!car_legal(v_30)) v_30 = carerror(v_30); else
    v_30 = car(v_30);
    {   LispObject fn = basic_elt(env, 3); // reval
    v_30 = (*qfn1(fn))(fn, v_30);
    }
    env = stack[-2];
    v_30 = ncons(v_30);
    {
        LispObject v_34 = stack[-1];
        LispObject v_35 = stack[0];
        return list2star(v_34, v_35, v_30);
    }
v_7:
    v_31 = v_30;
    if (!car_legal(v_31)) v_31 = carerror(v_31); else
    v_31 = car(v_31);
    if (!car_legal(v_30)) v_30 = cdrerror(v_30); else
    v_30 = cdr(v_30);
    if (!car_legal(v_30)) v_30 = carerror(v_30); else
    v_30 = car(v_30);
    {   LispObject fn = basic_elt(env, 4); // evalequal
    v_30 = (*qfn2(fn))(fn, v_31, v_30);
    }
    if (v_30 == nil) goto v_19;
    v_30 = lisp_true;
    goto v_5;
v_19:
    v_30 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_5;
    v_30 = nil;
v_5:
    return onevalue(v_30);
}



// Code for contract!-strand

static LispObject CC_contractKstrand(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // zero!-roads
    v_9 = (*qfn1(fn))(fn, v_9);
    }
    env = stack[-1];
    {
        LispObject v_12 = stack[0];
        LispObject fn = basic_elt(env, 2); // contr!-strand
        return (*qfn2(fn))(fn, v_12, v_9);
    }
}



// Code for sf2mv

static LispObject CC_sf2mv(LispObject env,
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
        LispObject fn = basic_elt(env, 1); // sf2mv1
        return (*qfn3(fn))(fn, v_11, v_10, v_9);
    }
}



// Code for fs!:prepfn!:

static LispObject CC_fsTprepfnT(LispObject env,
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



// Code for all_sml_opchar

static LispObject CC_all_sml_opchar(LispObject env,
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
v_1:
    v_37 = stack[0];
    if (v_37 == nil) goto v_6;
    else goto v_7;
v_6:
    v_37 = lisp_true;
    goto v_5;
v_7:
    v_38 = qvalue(basic_elt(env, 1)); // lexer_style!*
    v_37 = static_cast<LispObject>(2097152)+TAG_FIXNUM; // 131072
    {   LispObject fn = basic_elt(env, 3); // land
    v_37 = (*qfn2(fn))(fn, v_38, v_37);
    }
    env = stack[-1];
    v_37 = static_cast<LispObject>(zerop(v_37));
    v_37 = v_37 ? lisp_true : nil;
    env = stack[-1];
    if (v_37 == nil) goto v_18;
    else goto v_19;
v_18:
    v_37 = stack[0];
    if (!car_legal(v_37)) v_38 = carerror(v_37); else
    v_38 = car(v_37);
    v_37 = basic_elt(env, 2); // sml_opchar
    v_37 = Lflagp(nil, v_38, v_37);
    env = stack[-1];
    goto v_17;
v_19:
    v_37 = nil;
    goto v_17;
    v_37 = nil;
v_17:
    if (v_37 == nil) goto v_15;
    v_37 = stack[0];
    if (!car_legal(v_37)) v_37 = cdrerror(v_37); else
    v_37 = cdr(v_37);
    stack[0] = v_37;
    goto v_1;
v_15:
    v_37 = nil;
    goto v_13;
    v_37 = nil;
v_13:
    goto v_5;
    v_37 = nil;
v_5:
    return onevalue(v_37);
}



setup_type const u28_setup[] =
{
    {"inprint",                 G0W3,     G1W3,     G2W3,     CC_inprint,G4W3},
    {"mksetq",                  G0W2,     G1W2,     CC_mksetq,G3W2,     G4W2},
    {"general-evaluate-mod-p",  G0W3,     G1W3,     G2W3,     CC_generalKevaluateKmodKp,G4W3},
    {"bndtst",                  G0W1,     CC_bndtst,G2W1,     G3W1,     G4W1},
    {"setk1",                   G0W3,     G1W3,     G2W3,     CC_setk1, G4W3},
    {"lex_export_codes",        CC_lex_export_codes,G1W0,G2W0,G3W0,     G4W0},
    {"comm1",                   G0W1,     CC_comm1, G2W1,     G3W1,     G4W1},
    {"createtriplewithancestor",G0W2,     G1W2,     CC_createtriplewithancestor,G3W2,G4W2},
    {"qqe_ofsf_simpat",         G0W1,     CC_qqe_ofsf_simpat,G2W1,G3W1, G4W1},
    {"ev_mtest?",               G0W2,     G1W2,     CC_ev_mtestW,G3W2,  G4W2},
    {"ombindir",                CC_ombindir,G1W0,   G2W0,     G3W0,     G4W0},
    {"rowdel",                  G0W1,     CC_rowdel,G2W1,     G3W1,     G4W1},
    {"string-of-list",          G0W1,     CC_stringKofKlist,G2W1,G3W1,  G4W1},
    {"rdcos*",                  G0W1,     CC_rdcosH,G2W1,     G3W1,     G4W1},
    {"mk-numr",                 G0W3,     G1W3,     G2W3,     CC_mkKnumr,G4W3},
    {"assert_stat1",            CC_assert_stat1,G1W0,G2W0,    G3W0,     G4W0},
    {"mo_2a",                   G0W1,     CC_mo_2a, G2W1,     G3W1,     G4W1},
    {"lalr_collect_terminals",  G0W1,     CC_lalr_collect_terminals,G2W1,G3W1,G4W1},
    {"gcref_remprops",          CC_gcref_remprops,G1W0,G2W0,  G3W0,     G4W0},
    {"prepreform1",             G0W2,     G1W2,     CC_prepreform1,G3W2,G4W2},
    {"cl_atl1",                 G0W1,     CC_cl_atl1,G2W1,    G3W1,     G4W1},
    {"internal-factorf",        G0W1,     CC_internalKfactorf,G2W1,G3W1,G4W1},
    {"sfto_b:ordexp",           G0W2,     G1W2,     CC_sfto_bTordexp,G3W2,G4W2},
    {"nextcomb",                G0W2,     G1W2,     CC_nextcomb,G3W2,   G4W2},
    {"gcompatible",             G0W2,     G1W2,     CC_gcompatible,G3W2,G4W2},
    {"contr-strand",            G0W2,     G1W2,     CC_contrKstrand,G3W2,G4W2},
    {"nzero",                   G0W1,     CC_nzero, G2W1,     G3W1,     G4W1},
    {"merge",                   G0W3,     G1W3,     G2W3,     CC_merge, G4W3},
    {"insert",                  G0W2,     G1W2,     CC_insert,G3W2,     G4W2},
    {"charnump:",               G0W1,     CC_charnumpT,G2W1,  G3W1,     G4W1},
    {"build-null-vector",       G0W3,     G1W3,     G2W3,     CC_buildKnullKvector,G4W3},
    {"lalr_generate_collection",CC_lalr_generate_collection,G1W0,G2W0,G3W0,G4W0},
    {"normalform",              G0W1,     CC_normalform,G2W1, G3W1,     G4W1},
    {"wureducedp",              G0W2,     G1W2,     CC_wureducedp,G3W2, G4W2},
    {"get-denom-ll",            G0W2,     G1W2,     CC_getKdenomKll,G3W2,G4W2},
    {"mksp*",                   G0W2,     G1W2,     CC_mkspH, G3W2,     G4W2},
    {"talp_try",                G0W1,     CC_talp_try,G2W1,   G3W1,     G4W1},
    {"vunion",                  G0W2,     G1W2,     CC_vunion,G3W2,     G4W2},
    {"cnrd",                    CC_cnrd,  G1W0,     G2W0,     G3W0,     G4W0},
    {"doublep",                 G0W1,     CC_doublep,G2W1,    G3W1,     G4W1},
    {"groebsavelterm",          G0W1,     CC_groebsavelterm,G2W1,G3W1,  G4W1},
    {"permp",                   G0W2,     G1W2,     CC_permp, G3W2,     G4W2},
    {"getphystypeor",           G0W1,     CC_getphystypeor,G2W1,G3W1,   G4W1},
    {"l-subst",                 G0W3,     G1W3,     G2W3,     CC_lKsubst,G4W3},
    {"formde",                  G0W3,     G1W3,     G2W3,     CC_formde,G4W3},
    {"sqhorner*",               G0W1,     CC_sqhornerH,G2W1,  G3W1,     G4W1},
    {"delasc",                  G0W2,     G1W2,     CC_delasc,G3W2,     G4W2},
    {"lalr_prin_reduction",     G0W1,     CC_lalr_prin_reduction,G2W1,G3W1,G4W1},
    {"co_new",                  CC_co_new,G1W0,     G2W0,     G3W0,     G4W0},
    {"ofsf_negateat",           G0W1,     CC_ofsf_negateat,G2W1,G3W1,   G4W1},
    {"mk+conjugate+sq",         G0W1,     CC_mkLconjugateLsq,G2W1,G3W1, G4W1},
    {"dm-mkfloat",              G0W1,     CC_dmKmkfloat,G2W1, G3W1,     G4W1},
    {"bcfd",                    G0W1,     CC_bcfd,  G2W1,     G3W1,     G4W1},
    {"vevstrictlydivides?",     G0W2,     G1W2,     CC_vevstrictlydividesW,G3W2,G4W2},
    {"equalreval",              G0W1,     CC_equalreval,G2W1, G3W1,     G4W1},
    {"contract-strand",         G0W2,     G1W2,     CC_contractKstrand,G3W2,G4W2},
    {"sf2mv",                   G0W2,     G1W2,     CC_sf2mv, G3W2,     G4W2},
    {"fs:prepfn:",              G0W1,     CC_fsTprepfnT,G2W1, G3W1,     G4W1},
    {"all_sml_opchar",          G0W1,     CC_all_sml_opchar,G2W1,G3W1,  G4W1},
    {nullptr, 
        reinterpret_cast<no_args *>(
            reinterpret_cast<uintptr_t>("u28")),
        reinterpret_cast<one_arg *>(
            reinterpret_cast<uintptr_t>("96065 1706130 30271")),
        nullptr, nullptr, nullptr}
};

// end of generated code
