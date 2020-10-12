
// $destdir/u12.c        Machine generated C code

// $Id$

#include "config.h"
#include "headers.h"



// Code for simp

static LispObject CC_simp(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_486, v_487, v_488;
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
    stack[-5] = v_2;
// end of prologue
    v_486 = qvalue(basic_elt(env, 1)); // varstack!*
// Binding varstack!*
// FLUIDBIND: reloadenv=7 litvec-offset=1 saveloc=6
{   bind_fluid_stack bind_fluid_var(-7, 1, -6);
    setvalue(basic_elt(env, 1), v_486); // varstack!*
    stack[-1] = nil;
    v_486 = stack[-5];
    v_486 = integerp(v_486);
    if (v_486 == nil) goto v_14;
    v_487 = stack[-5];
    v_486 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_487 == v_486) goto v_19;
    else goto v_20;
v_19:
    v_487 = nil;
    v_486 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_486 = cons(v_487, v_486);
    goto v_10;
v_20:
    v_486 = qvalue(basic_elt(env, 2)); // dmode!*
    if (v_486 == nil) goto v_26;
    else goto v_27;
v_26:
    v_487 = stack[-5];
    v_486 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_486 = cons(v_487, v_486);
    goto v_10;
v_27:
    goto v_18;
v_18:
    goto v_12;
v_14:
    v_487 = stack[-5];
    v_486 = qvalue(basic_elt(env, 1)); // varstack!*
    v_486 = Lmember(nil, v_487, v_486);
    if (v_486 == nil) goto v_36;
    v_486 = stack[-5];
    {   LispObject fn = basic_elt(env, 22); // recursiveerror
    v_486 = (*qfn1(fn))(fn, v_486);
    }
    env = stack[-7];
    goto v_12;
v_36:
v_12:
    v_487 = stack[-5];
    v_486 = qvalue(basic_elt(env, 1)); // varstack!*
    v_486 = cons(v_487, v_486);
    env = stack[-7];
    setvalue(basic_elt(env, 1), v_486); // varstack!*
    v_487 = qvalue(basic_elt(env, 3)); // simpcount!*
    v_486 = qvalue(basic_elt(env, 4)); // simplimit!*
    v_486 = static_cast<LispObject>(greaterp2(v_487, v_486));
    v_486 = v_486 ? lisp_true : nil;
    env = stack[-7];
    if (v_486 == nil) goto v_48;
    v_486 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    setvalue(basic_elt(env, 3), v_486); // simpcount!*
    v_488 = basic_elt(env, 5); // alg
    v_487 = static_cast<LispObject>(192)+TAG_FIXNUM; // 12
    v_486 = basic_elt(env, 6); // "Simplification recursion too deep"
    {   LispObject fn = basic_elt(env, 23); // rerror
    v_486 = (*qfn3(fn))(fn, v_488, v_487, v_486);
    }
    env = stack[-7];
    goto v_46;
v_48:
    v_487 = stack[-5];
    v_486 = basic_elt(env, 7); // !*sq
    if (!consp(v_487)) goto v_62;
    v_487 = car(v_487);
    if (v_487 == v_486) goto v_61;
    else goto v_62;
v_61:
    v_486 = stack[-5];
    if (!car_legal(v_486)) v_486 = cdrerror(v_486); else
    v_486 = cdr(v_486);
    if (!car_legal(v_486)) v_486 = cdrerror(v_486); else
    v_486 = cdr(v_486);
    if (!car_legal(v_486)) v_486 = carerror(v_486); else
    v_486 = car(v_486);
    if (v_486 == nil) goto v_68;
    else goto v_69;
v_68:
    v_486 = nil;
    goto v_67;
v_69:
    v_486 = qvalue(basic_elt(env, 8)); // !*resimp
    v_486 = (v_486 == nil ? lisp_true : nil);
    goto v_67;
    v_486 = nil;
v_67:
    goto v_60;
v_62:
    v_486 = nil;
    goto v_60;
    v_486 = nil;
v_60:
    if (v_486 == nil) goto v_58;
    v_486 = stack[-5];
    if (!car_legal(v_486)) v_486 = cdrerror(v_486); else
    v_486 = cdr(v_486);
    if (!car_legal(v_486)) v_486 = carerror(v_486); else
    v_486 = car(v_486);
    goto v_10;
v_58:
    v_486 = qvalue(basic_elt(env, 9)); // !*uncached
    if (v_486 == nil) goto v_89;
    else goto v_90;
v_89:
    v_486 = qvalue(basic_elt(env, 10)); // alglist!*
    if (!car_legal(v_486)) v_486 = carerror(v_486); else
    v_486 = car(v_486);
    v_487 = v_486;
    if (v_487 == nil) goto v_97;
    else goto v_98;
v_97:
    v_486 = nil;
    goto v_96;
v_98:
    v_487 = stack[-5];
    {   LispObject fn = basic_elt(env, 24); // gethash
    v_486 = (*qfn2(fn))(fn, v_487, v_486);
    }
    env = stack[-7];
    goto v_96;
    v_486 = nil;
v_96:
    stack[-1] = v_486;
    goto v_88;
v_90:
    v_486 = nil;
    goto v_88;
    v_486 = nil;
v_88:
    if (v_486 == nil) goto v_86;
    v_486 = stack[-1];
    if (!car_legal(v_486)) v_486 = carerror(v_486); else
    v_486 = car(v_486);
    if (v_486 == nil) goto v_112;
    v_486 = lisp_true;
    setvalue(basic_elt(env, 11), v_486); // !*sub2
    goto v_110;
v_112:
v_110:
    v_486 = stack[-1];
    if (!car_legal(v_486)) v_486 = cdrerror(v_486); else
    v_486 = cdr(v_486);
    goto v_10;
v_86:
v_46:
    v_486 = qvalue(basic_elt(env, 3)); // simpcount!*
    v_486 = add1(v_486);
    env = stack[-7];
    setvalue(basic_elt(env, 3), v_486); // simpcount!*
    v_486 = stack[-5];
    if (!consp(v_486)) goto v_122;
    else goto v_123;
v_122:
    v_486 = stack[-5];
    {   LispObject fn = basic_elt(env, 25); // simpatom
    v_487 = (*qfn1(fn))(fn, v_486);
    }
    env = stack[-7];
    v_486 = stack[-5];
    {   LispObject fn = basic_elt(env, 26); // !*ssave
    v_486 = (*qfn2(fn))(fn, v_487, v_486);
    }
    goto v_10;
v_123:
    v_486 = stack[-5];
    if (!car_legal(v_486)) v_486 = carerror(v_486); else
    v_486 = car(v_486);
    if (symbolp(v_486)) goto v_134;
    v_486 = lisp_true;
    goto v_132;
v_134:
    v_486 = stack[-5];
    if (!car_legal(v_486)) v_486 = carerror(v_486); else
    v_486 = car(v_486);
    v_486 = (v_486 == nil ? lisp_true : nil);
    goto v_132;
    v_486 = nil;
v_132:
    if (v_486 == nil) goto v_130;
    v_486 = stack[-5];
    if (!car_legal(v_486)) v_486 = carerror(v_486); else
    v_486 = car(v_486);
    if (!consp(v_486)) goto v_145;
    else goto v_146;
v_145:
    v_486 = stack[-5];
    if (!car_legal(v_486)) v_487 = carerror(v_486); else
    v_487 = car(v_486);
    v_486 = basic_elt(env, 12); // "operator"
    {   LispObject fn = basic_elt(env, 27); // typerr
    v_486 = (*qfn2(fn))(fn, v_487, v_486);
    }
    goto v_144;
v_146:
    v_486 = stack[-5];
    if (!car_legal(v_486)) v_486 = carerror(v_486); else
    v_486 = car(v_486);
    if (!car_legal(v_486)) v_486 = carerror(v_486); else
    v_486 = car(v_486);
    if (symbolp(v_486)) goto v_155;
    else goto v_154;
v_155:
    v_486 = stack[-5];
    if (!car_legal(v_486)) v_486 = carerror(v_486); else
    v_486 = car(v_486);
    if (!car_legal(v_486)) v_487 = carerror(v_486); else
    v_487 = car(v_486);
    v_486 = basic_elt(env, 13); // name
    v_486 = get(v_487, v_486);
    env = stack[-7];
    stack[-1] = v_486;
    if (v_486 == nil) goto v_154;
    v_487 = stack[-5];
    v_486 = stack[-5];
    {   LispObject fn = basic_elt(env, 26); // !*ssave
    v_486 = (*qfn2(fn))(fn, v_487, v_486);
    }
    goto v_10;
v_154:
    v_486 = stack[-5];
    if (!car_legal(v_486)) v_487 = carerror(v_486); else
    v_487 = car(v_486);
    v_486 = basic_elt(env, 14); // mat
    if (!consp(v_487)) goto v_173;
    v_487 = car(v_487);
    if (v_487 == v_486) goto v_172;
    else goto v_173;
v_172:
    v_486 = stack[-5];
    if (!car_legal(v_486)) v_486 = cdrerror(v_486); else
    v_486 = cdr(v_486);
    {   LispObject fn = basic_elt(env, 28); // revlis
    v_486 = (*qfn1(fn))(fn, v_486);
    }
    env = stack[-7];
    stack[-1] = v_486;
    {   LispObject fn = basic_elt(env, 29); // numlis
    v_486 = (*qfn1(fn))(fn, v_486);
    }
    env = stack[-7];
    if (v_486 == nil) goto v_180;
    else goto v_181;
v_180:
    v_486 = nil;
    goto v_179;
v_181:
    v_486 = stack[-1];
    v_487 = Llength(nil, v_486);
    env = stack[-7];
    v_486 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_486 = (v_487 == v_486 ? lisp_true : nil);
    goto v_179;
    v_486 = nil;
v_179:
    goto v_171;
v_173:
    v_486 = nil;
    goto v_171;
    v_486 = nil;
v_171:
    if (v_486 == nil) goto v_169;
    v_486 = stack[-5];
    if (!car_legal(v_486)) v_486 = carerror(v_486); else
    v_486 = car(v_486);
    if (!car_legal(v_486)) v_487 = cdrerror(v_486); else
    v_487 = cdr(v_486);
    v_486 = stack[-1];
    if (!car_legal(v_486)) v_486 = carerror(v_486); else
    v_486 = car(v_486);
    {   LispObject fn = basic_elt(env, 30); // nth
    v_487 = (*qfn2(fn))(fn, v_487, v_486);
    }
    env = stack[-7];
    v_486 = stack[-1];
    if (!car_legal(v_486)) v_486 = cdrerror(v_486); else
    v_486 = cdr(v_486);
    if (!car_legal(v_486)) v_486 = carerror(v_486); else
    v_486 = car(v_486);
    {   LispObject fn = basic_elt(env, 30); // nth
    v_486 = (*qfn2(fn))(fn, v_487, v_486);
    }
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 0); // simp
    v_487 = (*qfn1(fn))(fn, v_486);
    }
    env = stack[-7];
    v_486 = stack[-5];
    {   LispObject fn = basic_elt(env, 26); // !*ssave
    v_486 = (*qfn2(fn))(fn, v_487, v_486);
    }
    goto v_10;
v_169:
    v_487 = stack[-5];
    v_486 = lisp_true;
    {   LispObject fn = basic_elt(env, 31); // errpri2
    v_486 = (*qfn2(fn))(fn, v_487, v_486);
    }
    goto v_144;
v_144:
    goto v_121;
v_130:
    v_486 = stack[-5];
    if (!car_legal(v_486)) v_486 = carerror(v_486); else
    v_486 = car(v_486);
    if (!symbolp(v_486)) v_486 = nil;
    else { v_486 = qfastgets(v_486);
           if (v_486 != nil) { v_486 = elt(v_486, 59); // opfn
#ifdef RECORD_GET
             if (v_486 == SPID_NOPROP)
                record_get(elt(fastget_names, 59), 0),
                v_486 = nil;
             else record_get(elt(fastget_names, 59), 1),
                v_486 = lisp_true; }
           else record_get(elt(fastget_names, 59), 0); }
#else
             if (v_486 == SPID_NOPROP) v_486 = nil; else v_486 = lisp_true; }}
#endif
    if (v_486 == nil) goto v_215;
    v_486 = stack[-5];
    {   LispObject fn = basic_elt(env, 32); // opfneval
    v_486 = (*qfn1(fn))(fn, v_486);
    }
    env = stack[-7];
    stack[-1] = v_486;
    {   LispObject fn = basic_elt(env, 33); // getrtype
    v_486 = (*qfn1(fn))(fn, v_486);
    }
    env = stack[-7];
    v_487 = v_486;
    if (v_486 == nil) goto v_221;
    else goto v_222;
v_221:
    v_486 = stack[-1];
    {   LispObject fn = basic_elt(env, 34); // simp_without_resimp
    v_487 = (*qfn1(fn))(fn, v_486);
    }
    env = stack[-7];
    v_486 = stack[-5];
    {   LispObject fn = basic_elt(env, 26); // !*ssave
    v_486 = (*qfn2(fn))(fn, v_487, v_486);
    }
    goto v_10;
v_222:
    v_486 = basic_elt(env, 15); // yetunknowntype
    if (v_487 == v_486) goto v_234;
    else goto v_235;
v_234:
    v_486 = stack[-1];
    {   LispObject fn = basic_elt(env, 35); // reval
    v_486 = (*qfn1(fn))(fn, v_486);
    }
    env = stack[-7];
    stack[-1] = v_486;
    {   LispObject fn = basic_elt(env, 33); // getrtype
    v_486 = (*qfn1(fn))(fn, v_486);
    }
    env = stack[-7];
    v_486 = (v_486 == nil ? lisp_true : nil);
    goto v_233;
v_235:
    v_486 = nil;
    goto v_233;
    v_486 = nil;
v_233:
    if (v_486 == nil) goto v_231;
    v_486 = stack[-1];
    {   LispObject fn = basic_elt(env, 0); // simp
    v_486 = (*qfn1(fn))(fn, v_486);
    }
    goto v_10;
v_231:
    v_487 = stack[-5];
    v_486 = basic_elt(env, 16); // "scalar"
    {   LispObject fn = basic_elt(env, 27); // typerr
    v_486 = (*qfn2(fn))(fn, v_487, v_486);
    }
    goto v_220;
v_220:
    goto v_121;
v_215:
    v_486 = stack[-5];
    if (!car_legal(v_486)) v_486 = carerror(v_486); else
    v_486 = car(v_486);
    if (!symbolp(v_486)) v_486 = nil;
    else { v_486 = qfastgets(v_486);
           if (v_486 != nil) { v_486 = elt(v_486, 45); // psopfn
#ifdef RECORD_GET
             if (v_486 != SPID_NOPROP)
                record_get(elt(fastget_names, 45), 1);
             else record_get(elt(fastget_names, 45), 0),
                v_486 = nil; }
           else record_get(elt(fastget_names, 45), 0); }
#else
             if (v_486 == SPID_NOPROP) v_486 = nil; }}
#endif
    stack[-1] = v_486;
    if (v_486 == nil) goto v_253;
    stack[0] = stack[-1];
    v_486 = stack[-5];
    {   LispObject fn = basic_elt(env, 36); // argnochk
    v_486 = (*qfn1(fn))(fn, v_486);
    }
    env = stack[-7];
    if (!car_legal(v_486)) v_486 = cdrerror(v_486); else
    v_486 = cdr(v_486);
    v_486 = Lapply1(nil, stack[0], v_486);
    env = stack[-7];
    stack[-1] = v_486;
    {   LispObject fn = basic_elt(env, 33); // getrtype
    v_486 = (*qfn1(fn))(fn, v_486);
    }
    env = stack[-7];
    if (v_486 == nil) goto v_260;
    v_487 = stack[-5];
    v_486 = basic_elt(env, 16); // "scalar"
    {   LispObject fn = basic_elt(env, 27); // typerr
    v_486 = (*qfn2(fn))(fn, v_487, v_486);
    }
    goto v_258;
v_260:
    v_487 = stack[-1];
    v_486 = stack[-5];
    if (equal(v_487, v_486)) goto v_270;
    else goto v_271;
v_270:
    v_487 = stack[-1];
    v_486 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 37); // to
    v_487 = (*qfn2(fn))(fn, v_487, v_486);
    }
    env = stack[-7];
    v_486 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_486 = cons(v_487, v_486);
    env = stack[-7];
    v_487 = ncons(v_486);
    env = stack[-7];
    v_486 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_487 = cons(v_487, v_486);
    env = stack[-7];
    v_486 = stack[-5];
    {   LispObject fn = basic_elt(env, 26); // !*ssave
    v_486 = (*qfn2(fn))(fn, v_487, v_486);
    }
    goto v_10;
v_271:
    v_486 = stack[-1];
    {   LispObject fn = basic_elt(env, 34); // simp_without_resimp
    v_487 = (*qfn1(fn))(fn, v_486);
    }
    env = stack[-7];
    v_486 = stack[-5];
    {   LispObject fn = basic_elt(env, 26); // !*ssave
    v_486 = (*qfn2(fn))(fn, v_487, v_486);
    }
    goto v_10;
v_258:
    goto v_121;
v_253:
    v_486 = stack[-5];
    if (!car_legal(v_486)) v_486 = carerror(v_486); else
    v_486 = car(v_486);
    if (!symbolp(v_486)) v_486 = nil;
    else { v_486 = qfastgets(v_486);
           if (v_486 != nil) { v_486 = elt(v_486, 41); // polyfn
#ifdef RECORD_GET
             if (v_486 != SPID_NOPROP)
                record_get(elt(fastget_names, 41), 1);
             else record_get(elt(fastget_names, 41), 0),
                v_486 = nil; }
           else record_get(elt(fastget_names, 41), 0); }
#else
             if (v_486 == SPID_NOPROP) v_486 = nil; }}
#endif
    stack[-1] = v_486;
    if (v_486 == nil) goto v_291;
    v_486 = stack[-5];
    {   LispObject fn = basic_elt(env, 36); // argnochk
    v_486 = (*qfn1(fn))(fn, v_486);
    }
    env = stack[-7];
    stack[-4] = stack[-1];
    v_486 = stack[-5];
    if (!car_legal(v_486)) v_486 = cdrerror(v_486); else
    v_486 = cdr(v_486);
    stack[-3] = v_486;
    v_486 = stack[-3];
    if (v_486 == nil) goto v_311;
    else goto v_312;
v_311:
    v_486 = nil;
    goto v_305;
v_312:
    v_486 = stack[-3];
    if (!car_legal(v_486)) v_486 = carerror(v_486); else
    v_486 = car(v_486);
    {   LispObject fn = basic_elt(env, 38); // simp!*
    v_486 = (*qfn1(fn))(fn, v_486);
    }
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 39); // !*q2f
    v_486 = (*qfn1(fn))(fn, v_486);
    }
    env = stack[-7];
    v_486 = ncons(v_486);
    env = stack[-7];
    stack[-1] = v_486;
    stack[-2] = v_486;
v_306:
    v_486 = stack[-3];
    if (!car_legal(v_486)) v_486 = cdrerror(v_486); else
    v_486 = cdr(v_486);
    stack[-3] = v_486;
    v_486 = stack[-3];
    if (v_486 == nil) goto v_326;
    else goto v_327;
v_326:
    v_486 = stack[-2];
    goto v_305;
v_327:
    stack[0] = stack[-1];
    v_486 = stack[-3];
    if (!car_legal(v_486)) v_486 = carerror(v_486); else
    v_486 = car(v_486);
    {   LispObject fn = basic_elt(env, 38); // simp!*
    v_486 = (*qfn1(fn))(fn, v_486);
    }
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 39); // !*q2f
    v_486 = (*qfn1(fn))(fn, v_486);
    }
    env = stack[-7];
    v_486 = ncons(v_486);
    env = stack[-7];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_486);
    v_486 = stack[-1];
    if (!car_legal(v_486)) v_486 = cdrerror(v_486); else
    v_486 = cdr(v_486);
    stack[-1] = v_486;
    goto v_306;
v_305:
    {   LispObject fn = basic_elt(env, 40); // lispapply
    v_487 = (*qfn2(fn))(fn, stack[-4], v_486);
    }
    env = stack[-7];
    v_486 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_487 = cons(v_487, v_486);
    env = stack[-7];
    v_486 = stack[-5];
    {   LispObject fn = basic_elt(env, 26); // !*ssave
    v_486 = (*qfn2(fn))(fn, v_487, v_486);
    }
    goto v_10;
v_291:
    v_486 = stack[-5];
    if (!car_legal(v_486)) v_486 = carerror(v_486); else
    v_486 = car(v_486);
    if (!symbolp(v_486)) v_486 = nil;
    else { v_486 = qfastgets(v_486);
           if (v_486 != nil) { v_486 = elt(v_486, 9); // opmtch
#ifdef RECORD_GET
             if (v_486 != SPID_NOPROP)
                record_get(elt(fastget_names, 9), 1);
             else record_get(elt(fastget_names, 9), 0),
                v_486 = nil; }
           else record_get(elt(fastget_names, 9), 0); }
#else
             if (v_486 == SPID_NOPROP) v_486 = nil; }}
#endif
    if (v_486 == nil) goto v_344;
    v_486 = stack[-5];
    if (!car_legal(v_486)) v_486 = carerror(v_486); else
    v_486 = car(v_486);
    if (!symbolp(v_486)) v_487 = nil;
    else { v_487 = qfastgets(v_486);
           if (v_487 != nil) { v_487 = elt(v_487, 22); // simpfn
#ifdef RECORD_GET
             if (v_487 != SPID_NOPROP)
                record_get(elt(fastget_names, 22), 1);
             else record_get(elt(fastget_names, 22), 0),
                v_487 = nil; }
           else record_get(elt(fastget_names, 22), 0); }
#else
             if (v_487 == SPID_NOPROP) v_487 = nil; }}
#endif
    v_486 = basic_elt(env, 17); // simpiden
    if (v_487 == v_486) goto v_353;
    v_486 = stack[-5];
    {   LispObject fn = basic_elt(env, 41); // opmtchrevop
    v_486 = (*qfn1(fn))(fn, v_486);
    }
    env = stack[-7];
    stack[-1] = v_486;
    goto v_351;
v_353:
    v_486 = nil;
    goto v_351;
    v_486 = nil;
v_351:
    if (v_486 == nil) goto v_344;
    v_486 = stack[-1];
    {   LispObject fn = basic_elt(env, 0); // simp
    v_487 = (*qfn1(fn))(fn, v_486);
    }
    env = stack[-7];
    v_486 = stack[-5];
    {   LispObject fn = basic_elt(env, 26); // !*ssave
    v_486 = (*qfn2(fn))(fn, v_487, v_486);
    }
    goto v_10;
v_344:
    v_486 = stack[-5];
    if (!car_legal(v_486)) v_486 = carerror(v_486); else
    v_486 = car(v_486);
    if (!symbolp(v_486)) v_486 = nil;
    else { v_486 = qfastgets(v_486);
           if (v_486 != nil) { v_486 = elt(v_486, 22); // simpfn
#ifdef RECORD_GET
             if (v_486 != SPID_NOPROP)
                record_get(elt(fastget_names, 22), 1);
             else record_get(elt(fastget_names, 22), 0),
                v_486 = nil; }
           else record_get(elt(fastget_names, 22), 0); }
#else
             if (v_486 == SPID_NOPROP) v_486 = nil; }}
#endif
    stack[-1] = v_486;
    if (v_486 == nil) goto v_368;
    stack[0] = stack[-1];
    v_487 = stack[-1];
    v_486 = basic_elt(env, 17); // simpiden
    if (v_487 == v_486) goto v_381;
    else goto v_382;
v_381:
    v_486 = lisp_true;
    goto v_380;
v_382:
    v_486 = stack[-5];
    if (!car_legal(v_486)) v_486 = carerror(v_486); else
    v_486 = car(v_486);
    if (!symbolp(v_486)) v_486 = nil;
    else { v_486 = qfastgets(v_486);
           if (v_486 != nil) { v_486 = elt(v_486, 62); // full
#ifdef RECORD_GET
             if (v_486 == SPID_NOPROP)
                record_get(elt(fastget_names, 62), 0),
                v_486 = nil;
             else record_get(elt(fastget_names, 62), 1),
                v_486 = lisp_true; }
           else record_get(elt(fastget_names, 62), 0); }
#else
             if (v_486 == SPID_NOPROP) v_486 = nil; else v_486 = lisp_true; }}
#endif
    goto v_380;
    v_486 = nil;
v_380:
    if (v_486 == nil) goto v_378;
    v_486 = stack[-5];
    {   LispObject fn = basic_elt(env, 36); // argnochk
    v_486 = (*qfn1(fn))(fn, v_486);
    }
    env = stack[-7];
    goto v_376;
v_378:
    v_486 = stack[-5];
    {   LispObject fn = basic_elt(env, 36); // argnochk
    v_486 = (*qfn1(fn))(fn, v_486);
    }
    env = stack[-7];
    if (!car_legal(v_486)) v_486 = cdrerror(v_486); else
    v_486 = cdr(v_486);
    goto v_376;
    v_486 = nil;
v_376:
    v_487 = Lapply1(nil, stack[0], v_486);
    env = stack[-7];
    v_486 = stack[-5];
    {   LispObject fn = basic_elt(env, 26); // !*ssave
    v_486 = (*qfn2(fn))(fn, v_487, v_486);
    }
    goto v_10;
v_368:
    v_486 = stack[-5];
    if (!car_legal(v_486)) v_486 = carerror(v_486); else
    v_486 = car(v_486);
    if (!symbolp(v_486)) v_486 = nil;
    else { v_486 = qfastgets(v_486);
           if (v_486 != nil) { v_486 = elt(v_486, 2); // rtype
#ifdef RECORD_GET
             if (v_486 != SPID_NOPROP)
                record_get(elt(fastget_names, 2), 1);
             else record_get(elt(fastget_names, 2), 0),
                v_486 = nil; }
           else record_get(elt(fastget_names, 2), 0); }
#else
             if (v_486 == SPID_NOPROP) v_486 = nil; }}
#endif
    stack[-1] = v_486;
    if (v_486 == nil) goto v_400;
    v_487 = stack[-1];
    v_486 = basic_elt(env, 18); // getelemfn
    v_486 = get(v_487, v_486);
    env = stack[-7];
    stack[-1] = v_486;
    if (v_486 == nil) goto v_400;
    v_487 = stack[-1];
    v_486 = stack[-5];
    v_486 = Lapply1(nil, v_487, v_486);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 0); // simp
    v_487 = (*qfn1(fn))(fn, v_486);
    }
    env = stack[-7];
    v_486 = stack[-5];
    {   LispObject fn = basic_elt(env, 26); // !*ssave
    v_486 = (*qfn2(fn))(fn, v_487, v_486);
    }
    goto v_10;
v_400:
    v_486 = stack[-5];
    if (!car_legal(v_486)) v_487 = carerror(v_486); else
    v_487 = car(v_486);
    v_486 = basic_elt(env, 19); // boolean
    v_486 = Lflagp(nil, v_487, v_486);
    env = stack[-7];
    if (v_486 == nil) goto v_420;
    v_486 = lisp_true;
    goto v_418;
v_420:
    v_486 = stack[-5];
    if (!car_legal(v_486)) v_486 = carerror(v_486); else
    v_486 = car(v_486);
    if (!symbolp(v_486)) v_486 = nil;
    else { v_486 = qfastgets(v_486);
           if (v_486 != nil) { v_486 = elt(v_486, 23); // infix
#ifdef RECORD_GET
             if (v_486 != SPID_NOPROP)
                record_get(elt(fastget_names, 23), 1);
             else record_get(elt(fastget_names, 23), 0),
                v_486 = nil; }
           else record_get(elt(fastget_names, 23), 0); }
#else
             if (v_486 == SPID_NOPROP) v_486 = nil; }}
#endif
    goto v_418;
    v_486 = nil;
v_418:
    if (v_486 == nil) goto v_416;
    v_486 = stack[-5];
    if (!car_legal(v_486)) v_486 = carerror(v_486); else
    v_486 = car(v_486);
    if (!symbolp(v_486)) v_486 = nil;
    else { v_486 = qfastgets(v_486);
           if (v_486 != nil) { v_486 = elt(v_486, 37); // prtch
#ifdef RECORD_GET
             if (v_486 != SPID_NOPROP)
                record_get(elt(fastget_names, 37), 1);
             else record_get(elt(fastget_names, 37), 0),
                v_486 = nil; }
           else record_get(elt(fastget_names, 37), 0); }
#else
             if (v_486 == SPID_NOPROP) v_486 = nil; }}
#endif
    stack[-1] = v_486;
    if (v_486 == nil) goto v_435;
    v_486 = stack[-1];
    v_487 = v_486;
    goto v_433;
v_435:
    v_486 = stack[-5];
    if (!car_legal(v_486)) v_486 = carerror(v_486); else
    v_486 = car(v_486);
    v_487 = v_486;
    goto v_433;
    v_487 = nil;
v_433:
    v_486 = basic_elt(env, 20); // "algebraic operator"
    {   LispObject fn = basic_elt(env, 27); // typerr
    v_486 = (*qfn2(fn))(fn, v_487, v_486);
    }
    goto v_121;
v_416:
    v_486 = stack[-5];
    if (!car_legal(v_486)) v_487 = carerror(v_486); else
    v_487 = car(v_486);
    v_486 = basic_elt(env, 21); // nochange
    v_486 = Lflagp(nil, v_487, v_486);
    env = stack[-7];
    if (v_486 == nil) goto v_446;
    v_486 = stack[-5];
    {   LispObject fn = basic_elt(env, 42); // lispeval
    v_486 = (*qfn1(fn))(fn, v_486);
    }
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 0); // simp
    v_487 = (*qfn1(fn))(fn, v_486);
    }
    env = stack[-7];
    v_486 = stack[-5];
    {   LispObject fn = basic_elt(env, 26); // !*ssave
    v_486 = (*qfn2(fn))(fn, v_487, v_486);
    }
    goto v_10;
v_446:
    v_486 = stack[-5];
    if (!car_legal(v_486)) v_486 = carerror(v_486); else
    v_486 = car(v_486);
    if (!symbolp(v_486)) v_486 = nil;
    else { v_486 = qfastgets(v_486);
           if (v_486 != nil) { v_486 = elt(v_486, 45); // psopfn
#ifdef RECORD_GET
             if (v_486 != SPID_NOPROP)
                record_get(elt(fastget_names, 45), 1);
             else record_get(elt(fastget_names, 45), 0),
                v_486 = nil; }
           else record_get(elt(fastget_names, 45), 0); }
#else
             if (v_486 == SPID_NOPROP) v_486 = nil; }}
#endif
    if (v_486 == nil) goto v_458;
    else goto v_456;
v_458:
    v_486 = stack[-5];
    if (!car_legal(v_486)) v_486 = carerror(v_486); else
    v_486 = car(v_486);
    if (!symbolp(v_486)) v_486 = nil;
    else { v_486 = qfastgets(v_486);
           if (v_486 != nil) { v_486 = elt(v_486, 19); // rtypefn
#ifdef RECORD_GET
             if (v_486 != SPID_NOPROP)
                record_get(elt(fastget_names, 19), 1);
             else record_get(elt(fastget_names, 19), 0),
                v_486 = nil; }
           else record_get(elt(fastget_names, 19), 0); }
#else
             if (v_486 == SPID_NOPROP) v_486 = nil; }}
#endif
    if (v_486 == nil) goto v_462;
    else goto v_456;
v_462:
    goto v_457;
v_456:
    v_487 = stack[-5];
    v_486 = basic_elt(env, 16); // "scalar"
    {   LispObject fn = basic_elt(env, 27); // typerr
    v_486 = (*qfn2(fn))(fn, v_487, v_486);
    }
    goto v_121;
v_457:
    v_486 = stack[-5];
    if (!car_legal(v_486)) v_487 = carerror(v_486); else
    v_487 = car(v_486);
    v_486 = basic_elt(env, 12); // "operator"
    {   LispObject fn = basic_elt(env, 43); // redmsg
    v_486 = (*qfn2(fn))(fn, v_487, v_486);
    }
    env = stack[-7];
    v_486 = stack[-5];
    if (!car_legal(v_486)) v_486 = carerror(v_486); else
    v_486 = car(v_486);
    {   LispObject fn = basic_elt(env, 44); // mkop
    v_486 = (*qfn1(fn))(fn, v_486);
    }
    env = stack[-7];
    v_487 = stack[-5];
    v_486 = qvalue(basic_elt(env, 1)); // varstack!*
    v_486 = Ldelete(nil, v_487, v_486);
    env = stack[-7];
    setvalue(basic_elt(env, 1), v_486); // varstack!*
    v_486 = stack[-5];
    {   LispObject fn = basic_elt(env, 0); // simp
    v_487 = (*qfn1(fn))(fn, v_486);
    }
    env = stack[-7];
    v_486 = stack[-5];
    {   LispObject fn = basic_elt(env, 26); // !*ssave
    v_486 = (*qfn2(fn))(fn, v_487, v_486);
    }
    goto v_10;
v_121:
    v_486 = nil;
v_10:
    ;}  // end of a binding scope
    return onevalue(v_486);
}



// Code for red!-weight!-less!-p

static LispObject CC_redKweightKlessKp(LispObject env,
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
    v_25 = v_27;
    if (!car_legal(v_25)) v_28 = carerror(v_25); else
    v_28 = car(v_25);
    v_25 = v_26;
    if (!car_legal(v_25)) v_25 = carerror(v_25); else
    v_25 = car(v_25);
    if (equal(v_28, v_25)) goto v_7;
    else goto v_8;
v_7:
    v_25 = v_27;
    if (!car_legal(v_25)) v_25 = cdrerror(v_25); else
    v_25 = cdr(v_25);
    if (!car_legal(v_26)) v_26 = cdrerror(v_26); else
    v_26 = cdr(v_26);
        return Llessp_2(nil, v_25, v_26);
v_8:
    v_25 = v_27;
    if (!car_legal(v_25)) v_25 = carerror(v_25); else
    v_25 = car(v_25);
    if (!car_legal(v_26)) v_26 = carerror(v_26); else
    v_26 = car(v_26);
        return Llessp_2(nil, v_25, v_26);
    v_25 = nil;
    return onevalue(v_25);
}



// Code for pv_times3

static LispObject CC_pv_times3(LispObject env,
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
    stack[-2] = times2(v_17, v_16);
    env = stack[-3];
    v_16 = stack[-1];
    if (!car_legal(v_16)) v_17 = cdrerror(v_16); else
    v_17 = cdr(v_16);
    v_16 = stack[0];
    if (!car_legal(v_16)) v_16 = cdrerror(v_16); else
    v_16 = cdr(v_16);
    {   LispObject fn = basic_elt(env, 1); // pappend
    v_16 = (*qfn2(fn))(fn, v_17, v_16);
    }
    {
        LispObject v_21 = stack[-2];
        return cons(v_21, v_16);
    }
}



// Code for raiseind!:

static LispObject CC_raiseindT(LispObject env,
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
    v_15 = v_2;
// end of prologue
    v_16 = v_15;
    if (!consp(v_16)) goto v_6;
    else goto v_7;
v_6:
    goto v_5;
v_7:
    if (!car_legal(v_15)) v_15 = cdrerror(v_15); else
    v_15 = cdr(v_15);
    if (!car_legal(v_15)) v_15 = carerror(v_15); else
    v_15 = car(v_15);
    goto v_5;
    v_15 = nil;
v_5:
    return onevalue(v_15);
}



// Code for set!-general!-modulus

static LispObject CC_setKgeneralKmodulus(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_33, v_34;
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
    v_33 = stack[0];
    if (is_number(v_33)) goto v_11;
    v_33 = lisp_true;
    goto v_9;
v_11:
    v_34 = stack[0];
    v_33 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_33 = (v_34 == v_33 ? lisp_true : nil);
    goto v_9;
    v_33 = nil;
v_9:
    if (v_33 == nil) goto v_7;
    v_33 = qvalue(basic_elt(env, 1)); // current!-modulus
    goto v_5;
v_7:
    v_33 = qvalue(basic_elt(env, 1)); // current!-modulus
    stack[-1] = v_33;
    v_33 = stack[0];
    setvalue(basic_elt(env, 1), v_33); // current!-modulus
    v_34 = stack[0];
    v_33 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_33 = quot2(v_34, v_33);
    env = stack[-2];
    setvalue(basic_elt(env, 2), v_33); // modulus!/2
    v_33 = stack[0];
    v_33 = Lset_small_modulus(nil, v_33);
    v_33 = stack[-1];
    goto v_5;
    v_33 = nil;
v_5:
    return onevalue(v_33);
}



// Code for ra_budan!-transform

static LispObject CC_ra_budanKtransform(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_75, v_76;
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
    v_76 = basic_elt(env, 1); // x
    v_75 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 2); // to
    v_76 = (*qfn2(fn))(fn, v_76, v_75);
    }
    env = stack[-4];
    v_75 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_75 = cons(v_76, v_75);
    env = stack[-4];
    v_76 = ncons(v_75);
    env = stack[-4];
    v_75 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 3); // addf
    v_75 = (*qfn2(fn))(fn, v_76, v_75);
    }
    env = stack[-4];
    stack[0] = v_75;
    v_75 = stack[-2];
    if (!consp(v_75)) goto v_23;
    else goto v_24;
v_23:
    v_75 = lisp_true;
    goto v_22;
v_24:
    v_75 = stack[-2];
    if (!car_legal(v_75)) v_75 = carerror(v_75); else
    v_75 = car(v_75);
    v_75 = (consp(v_75) ? nil : lisp_true);
    goto v_22;
    v_75 = nil;
v_22:
    if (v_75 == nil) goto v_20;
    v_75 = stack[-2];
    goto v_8;
v_20:
    v_75 = stack[-2];
    if (!car_legal(v_75)) v_75 = cdrerror(v_75); else
    v_75 = cdr(v_75);
    {   LispObject fn = basic_elt(env, 0); // ra_budan!-transform
    v_75 = (*qfn1(fn))(fn, v_75);
    }
    env = stack[-4];
    stack[-3] = v_75;
    v_75 = stack[-2];
    if (!car_legal(v_75)) v_75 = cdrerror(v_75); else
    v_75 = cdr(v_75);
    if (!consp(v_75)) goto v_42;
    else goto v_43;
v_42:
    v_75 = lisp_true;
    goto v_41;
v_43:
    v_75 = stack[-2];
    if (!car_legal(v_75)) v_75 = cdrerror(v_75); else
    v_75 = cdr(v_75);
    if (!car_legal(v_75)) v_75 = carerror(v_75); else
    v_75 = car(v_75);
    v_75 = (consp(v_75) ? nil : lisp_true);
    goto v_41;
    v_75 = nil;
v_41:
    if (v_75 == nil) goto v_39;
    v_75 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_37;
v_39:
    v_75 = stack[-2];
    if (!car_legal(v_75)) v_75 = cdrerror(v_75); else
    v_75 = cdr(v_75);
    if (!car_legal(v_75)) v_75 = carerror(v_75); else
    v_75 = car(v_75);
    if (!car_legal(v_75)) v_75 = carerror(v_75); else
    v_75 = car(v_75);
    if (!car_legal(v_75)) v_75 = cdrerror(v_75); else
    v_75 = cdr(v_75);
    goto v_37;
    v_75 = nil;
v_37:
    v_76 = stack[-2];
    if (!car_legal(v_76)) v_76 = carerror(v_76); else
    v_76 = car(v_76);
    if (!car_legal(v_76)) stack[-1] = cdrerror(v_76); else
    stack[-1] = cdr(v_76);
    v_76 = stack[-2];
    if (!car_legal(v_76)) v_76 = carerror(v_76); else
    v_76 = car(v_76);
    if (!car_legal(v_76)) v_76 = carerror(v_76); else
    v_76 = car(v_76);
    if (!car_legal(v_76)) v_76 = cdrerror(v_76); else
    v_76 = cdr(v_76);
    v_75 = difference2(v_76, v_75);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 4); // exptf
    v_76 = (*qfn2(fn))(fn, stack[0], v_75);
    }
    env = stack[-4];
    v_75 = stack[-3];
    {   LispObject fn = basic_elt(env, 5); // multf
    v_75 = (*qfn2(fn))(fn, v_76, v_75);
    }
    env = stack[-4];
    {
        LispObject v_81 = stack[-1];
        LispObject fn = basic_elt(env, 3); // addf
        return (*qfn2(fn))(fn, v_81, v_75);
    }
v_8:
    return onevalue(v_75);
}



// Code for lalr_make_compressed_action_row

static LispObject CC_lalr_make_compressed_action_row(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_15, v_16;
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
    {   LispObject fn = basic_elt(env, 1); // lalr_list_of_actions
    v_15 = (*qfn1(fn))(fn, v_15);
    }
    env = stack[-1];
    v_16 = v_15;
    v_15 = stack[0];
    if (!car_legal(v_15)) v_15 = cdrerror(v_15); else
    v_15 = cdr(v_15);
    {   LispObject fn = basic_elt(env, 2); // lalr_resolve_conflicts
    v_15 = (*qfn2(fn))(fn, v_16, v_15);
    }
    env = stack[-1];
    {
        LispObject fn = basic_elt(env, 3); // lalr_make_compressed_action_row1
        return (*qfn1(fn))(fn, v_15);
    }
    return onevalue(v_15);
}



// Code for ofsf_smwcpknowl

static LispObject CC_ofsf_smwcpknowl(LispObject env,
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
    v_15 = qvalue(basic_elt(env, 1)); // !*rlsusi
    if (v_15 == nil) goto v_7;
    v_15 = v_16;
    {
        LispObject fn = basic_elt(env, 2); // cl_susicpknowl
        return (*qfn1(fn))(fn, v_15);
    }
v_7:
    v_15 = v_16;
    {
        LispObject fn = basic_elt(env, 3); // ofsf_smcpknowl
        return (*qfn1(fn))(fn, v_15);
    }
    v_15 = nil;
    return onevalue(v_15);
}



// Code for color1

static LispObject CC_color1(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_219, v_220, v_221, v_222;
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
    v_221 = v_2;
// end of prologue
v_1:
v_9:
    v_219 = v_221;
    if (!car_legal(v_219)) v_219 = carerror(v_219); else
    v_219 = car(v_219);
    if (!car_legal(v_219)) v_219 = carerror(v_219); else
    v_219 = car(v_219);
    if (v_219 == nil) goto v_16;
    else goto v_17;
v_16:
    v_219 = lisp_true;
    goto v_15;
v_17:
    v_219 = v_221;
    if (!car_legal(v_219)) v_219 = cdrerror(v_219); else
    v_219 = cdr(v_219);
    v_219 = (v_219 == nil ? lisp_true : nil);
    goto v_15;
    v_219 = nil;
v_15:
    if (v_219 == nil) goto v_13;
    v_219 = stack[-1];
    if (v_219 == nil) goto v_29;
    else goto v_30;
v_29:
    v_219 = v_221;
    if (!car_legal(v_219)) v_220 = carerror(v_219); else
    v_220 = car(v_219);
    v_219 = stack[0];
    {
        LispObject fn = basic_elt(env, 5); // addsq
        return (*qfn2(fn))(fn, v_220, v_219);
    }
v_30:
    v_219 = stack[-1];
    if (!car_legal(v_219)) v_219 = carerror(v_219); else
    v_219 = car(v_219);
    stack[-2] = v_219;
    v_219 = stack[-1];
    if (!car_legal(v_219)) v_219 = cdrerror(v_219); else
    v_219 = cdr(v_219);
    stack[-1] = v_219;
    v_219 = v_221;
    if (!car_legal(v_219)) v_220 = carerror(v_219); else
    v_220 = car(v_219);
    v_219 = stack[0];
    {   LispObject fn = basic_elt(env, 5); // addsq
    v_219 = (*qfn2(fn))(fn, v_220, v_219);
    }
    env = stack[-3];
    stack[0] = v_219;
    v_219 = stack[-2];
    v_221 = v_219;
    goto v_9;
    goto v_11;
v_13:
    v_220 = basic_elt(env, 1); // qg
    v_219 = v_221;
    if (!car_legal(v_219)) v_219 = cdrerror(v_219); else
    v_219 = cdr(v_219);
    v_219 = Lassoc(nil, v_220, v_219);
    v_222 = v_219;
    if (v_219 == nil) goto v_55;
    v_219 = v_222;
    if (!car_legal(v_219)) v_219 = cdrerror(v_219); else
    v_219 = cdr(v_219);
    if (!car_legal(v_219)) v_220 = carerror(v_219); else
    v_220 = car(v_219);
    v_219 = v_222;
    if (!car_legal(v_219)) v_219 = cdrerror(v_219); else
    v_219 = cdr(v_219);
    if (!car_legal(v_219)) v_219 = cdrerror(v_219); else
    v_219 = cdr(v_219);
    if (!car_legal(v_219)) v_219 = carerror(v_219); else
    v_219 = car(v_219);
    if (v_220 == v_219) goto v_66;
    else goto v_67;
v_66:
    v_219 = lisp_true;
    goto v_65;
v_67:
    v_219 = v_222;
    if (!car_legal(v_219)) v_219 = cdrerror(v_219); else
    v_219 = cdr(v_219);
    if (!car_legal(v_219)) v_220 = carerror(v_219); else
    v_220 = car(v_219);
    v_219 = v_222;
    if (!car_legal(v_219)) v_219 = cdrerror(v_219); else
    v_219 = cdr(v_219);
    if (!car_legal(v_219)) v_219 = cdrerror(v_219); else
    v_219 = cdr(v_219);
    if (!car_legal(v_219)) v_219 = cdrerror(v_219); else
    v_219 = cdr(v_219);
    if (!car_legal(v_219)) v_219 = carerror(v_219); else
    v_219 = car(v_219);
    if (v_220 == v_219) goto v_80;
    else goto v_81;
v_80:
    v_219 = lisp_true;
    goto v_79;
v_81:
    v_219 = v_222;
    if (!car_legal(v_219)) v_219 = cdrerror(v_219); else
    v_219 = cdr(v_219);
    if (!car_legal(v_219)) v_219 = cdrerror(v_219); else
    v_219 = cdr(v_219);
    if (!car_legal(v_219)) v_220 = carerror(v_219); else
    v_220 = car(v_219);
    v_219 = v_222;
    if (!car_legal(v_219)) v_219 = cdrerror(v_219); else
    v_219 = cdr(v_219);
    if (!car_legal(v_219)) v_219 = cdrerror(v_219); else
    v_219 = cdr(v_219);
    if (!car_legal(v_219)) v_219 = cdrerror(v_219); else
    v_219 = cdr(v_219);
    if (!car_legal(v_219)) v_219 = carerror(v_219); else
    v_219 = car(v_219);
    v_219 = (v_220 == v_219 ? lisp_true : nil);
    goto v_79;
    v_219 = nil;
v_79:
    goto v_65;
    v_219 = nil;
v_65:
    if (v_219 == nil) goto v_63;
    v_220 = nil;
    v_219 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_219 = cons(v_220, v_219);
    env = stack[-3];
    v_221 = ncons(v_219);
    env = stack[-3];
    v_220 = stack[-1];
    v_219 = stack[0];
    stack[-1] = v_220;
    stack[0] = v_219;
    goto v_1;
v_63:
    v_219 = v_221;
    v_220 = v_222;
    {   LispObject fn = basic_elt(env, 6); // removeg
    v_219 = (*qfn2(fn))(fn, v_219, v_220);
    }
    env = stack[-3];
    v_221 = v_219;
    v_219 = v_221;
    if (!car_legal(v_219)) stack[-2] = carerror(v_219); else
    stack[-2] = car(v_219);
    v_219 = v_221;
    if (!car_legal(v_219)) v_219 = cdrerror(v_219); else
    v_219 = cdr(v_219);
    if (v_219 == nil) goto v_119;
    v_219 = v_221;
    if (!car_legal(v_219)) v_220 = cdrerror(v_219); else
    v_220 = cdr(v_219);
    v_219 = stack[-1];
    v_219 = cons(v_220, v_219);
    env = stack[-3];
    v_220 = v_219;
    goto v_117;
v_119:
    v_219 = stack[-1];
    v_220 = v_219;
    goto v_117;
    v_220 = nil;
v_117:
    v_219 = stack[0];
    v_221 = stack[-2];
    stack[-1] = v_220;
    stack[0] = v_219;
    goto v_1;
v_55:
    v_220 = basic_elt(env, 2); // g3
    v_219 = v_221;
    if (!car_legal(v_219)) v_219 = cdrerror(v_219); else
    v_219 = cdr(v_219);
    v_219 = Lassoc(nil, v_220, v_219);
    v_222 = v_219;
    if (v_219 == nil) goto v_131;
    v_219 = v_222;
    if (!car_legal(v_219)) v_219 = cdrerror(v_219); else
    v_219 = cdr(v_219);
    if (!car_legal(v_219)) v_220 = carerror(v_219); else
    v_220 = car(v_219);
    v_219 = v_222;
    if (!car_legal(v_219)) v_219 = cdrerror(v_219); else
    v_219 = cdr(v_219);
    if (!car_legal(v_219)) v_219 = cdrerror(v_219); else
    v_219 = cdr(v_219);
    if (!car_legal(v_219)) v_219 = carerror(v_219); else
    v_219 = car(v_219);
    if (v_220 == v_219) goto v_142;
    else goto v_143;
v_142:
    v_219 = lisp_true;
    goto v_141;
v_143:
    v_219 = v_222;
    if (!car_legal(v_219)) v_219 = cdrerror(v_219); else
    v_219 = cdr(v_219);
    if (!car_legal(v_219)) v_220 = carerror(v_219); else
    v_220 = car(v_219);
    v_219 = v_222;
    if (!car_legal(v_219)) v_219 = cdrerror(v_219); else
    v_219 = cdr(v_219);
    if (!car_legal(v_219)) v_219 = cdrerror(v_219); else
    v_219 = cdr(v_219);
    if (!car_legal(v_219)) v_219 = cdrerror(v_219); else
    v_219 = cdr(v_219);
    if (!car_legal(v_219)) v_219 = carerror(v_219); else
    v_219 = car(v_219);
    if (v_220 == v_219) goto v_156;
    else goto v_157;
v_156:
    v_219 = lisp_true;
    goto v_155;
v_157:
    v_219 = v_222;
    if (!car_legal(v_219)) v_219 = cdrerror(v_219); else
    v_219 = cdr(v_219);
    if (!car_legal(v_219)) v_219 = cdrerror(v_219); else
    v_219 = cdr(v_219);
    if (!car_legal(v_219)) v_220 = carerror(v_219); else
    v_220 = car(v_219);
    v_219 = v_222;
    if (!car_legal(v_219)) v_219 = cdrerror(v_219); else
    v_219 = cdr(v_219);
    if (!car_legal(v_219)) v_219 = cdrerror(v_219); else
    v_219 = cdr(v_219);
    if (!car_legal(v_219)) v_219 = cdrerror(v_219); else
    v_219 = cdr(v_219);
    if (!car_legal(v_219)) v_219 = carerror(v_219); else
    v_219 = car(v_219);
    v_219 = (v_220 == v_219 ? lisp_true : nil);
    goto v_155;
    v_219 = nil;
v_155:
    goto v_141;
    v_219 = nil;
v_141:
    if (v_219 == nil) goto v_139;
    v_220 = nil;
    v_219 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_219 = cons(v_220, v_219);
    env = stack[-3];
    v_221 = ncons(v_219);
    env = stack[-3];
    v_220 = stack[-1];
    v_219 = stack[0];
    stack[-1] = v_220;
    stack[0] = v_219;
    goto v_1;
v_139:
    v_219 = v_221;
    v_220 = v_222;
    {   LispObject fn = basic_elt(env, 7); // split3gv
    v_219 = (*qfn2(fn))(fn, v_219, v_220);
    }
    env = stack[-3];
    v_221 = v_219;
    v_219 = v_221;
    if (!car_legal(v_219)) stack[-2] = carerror(v_219); else
    stack[-2] = car(v_219);
    v_219 = v_221;
    if (!car_legal(v_219)) v_220 = cdrerror(v_219); else
    v_220 = cdr(v_219);
    v_219 = stack[-1];
    v_220 = cons(v_220, v_219);
    env = stack[-3];
    v_219 = stack[0];
    v_221 = stack[-2];
    stack[-1] = v_220;
    stack[0] = v_219;
    goto v_1;
v_131:
    stack[0] = basic_elt(env, 3); // "Invalid structure of c0-graph."
    v_219 = v_221;
    if (v_219 == nil) goto v_204;
    else goto v_205;
v_204:
    v_219 = nil;
    goto v_203;
v_205:
    v_219 = v_221;
    if (!car_legal(v_219)) v_219 = cdrerror(v_219); else
    v_219 = cdr(v_219);
    if (v_219 == nil) goto v_208;
    else goto v_209;
v_208:
    v_219 = v_221;
    if (!car_legal(v_219)) v_219 = carerror(v_219); else
    v_219 = car(v_219);
    goto v_203;
v_209:
    v_219 = basic_elt(env, 4); // times
    v_220 = v_221;
    v_219 = cons(v_219, v_220);
    env = stack[-3];
    goto v_203;
    v_219 = nil;
v_203:
    v_219 = list2(stack[0], v_219);
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 8); // cerror
    v_219 = (*qfn1(fn))(fn, v_219);
    }
    goto v_53;
v_53:
    v_219 = nil;
    goto v_8;
v_11:
    v_219 = nil;
v_8:
    return onevalue(v_219);
}



// Code for cl_simpl

static LispObject CC_cl_simpl(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_50, v_51, v_52;
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
    stack[-2] = v_4;
    v_51 = v_3;
    stack[-3] = v_2;
// end of prologue
    v_50 = qvalue(basic_elt(env, 1)); // !*rlsism
    if (v_50 == nil) goto v_11;
    else goto v_12;
v_11:
    stack[-1] = stack[-3];
    stack[0] = nil;
    v_50 = nil;
    v_50 = ncons(v_50);
    env = stack[-5];
    {
        LispObject v_58 = stack[-1];
        LispObject v_59 = stack[0];
        LispObject v_60 = stack[-2];
        LispObject fn = basic_elt(env, 5); // cl_simpl1
        return (*qfn4up(fn))(fn, v_58, v_59, v_60, v_50);
    }
v_12:
    v_50 = v_51;
    {   LispObject fn = basic_elt(env, 6); // cl_sitheo
    v_50 = (*qfn1(fn))(fn, v_50);
    }
    env = stack[-5];
    v_51 = v_50;
    v_52 = v_51;
    v_50 = basic_elt(env, 2); // inctheo
    if (v_52 == v_50) goto v_24;
    else goto v_25;
v_24:
    v_50 = basic_elt(env, 2); // inctheo
    {
        LispObject fn = basic_elt(env, 7); // rl_exc
        return (*qfn1(fn))(fn, v_50);
    }
v_25:
    stack[-4] = basic_elt(env, 3); // and
    stack[-1] = v_51;
    stack[0] = nil;
    v_50 = stack[-2];
    v_50 = add1(v_50);
    env = stack[-5];
    v_50 = ncons(v_50);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 8); // rl_smupdknowl
    v_50 = (*qfn4up(fn))(fn, stack[-4], stack[-1], stack[0], v_50);
    }
    env = stack[-5];
    v_52 = v_50;
    v_51 = v_52;
    v_50 = basic_elt(env, 4); // false
    if (v_51 == v_50) goto v_39;
    else goto v_40;
v_39:
    v_50 = basic_elt(env, 2); // inctheo
    goto v_8;
v_40:
    stack[-1] = stack[-3];
    stack[0] = v_52;
    v_50 = nil;
    v_50 = ncons(v_50);
    env = stack[-5];
    {
        LispObject v_61 = stack[-1];
        LispObject v_62 = stack[0];
        LispObject v_63 = stack[-2];
        LispObject fn = basic_elt(env, 5); // cl_simpl1
        return (*qfn4up(fn))(fn, v_61, v_62, v_63, v_50);
    }
v_8:
    return onevalue(v_50);
}



// Code for ibalp_clausep

static LispObject CC_ibalp_clausep(LispObject env,
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
    {   LispObject fn = basic_elt(env, 2); // ibalp_litp
    v_30 = (*qfn1(fn))(fn, v_30);
    }
    env = stack[-1];
    if (v_30 == nil) goto v_6;
    else goto v_5;
v_6:
    v_30 = stack[0];
    if (!consp(v_30)) goto v_15;
    else goto v_16;
v_15:
    v_30 = stack[0];
    v_31 = v_30;
    goto v_14;
v_16:
    v_30 = stack[0];
    if (!car_legal(v_30)) v_30 = carerror(v_30); else
    v_30 = car(v_30);
    v_31 = v_30;
    goto v_14;
    v_31 = nil;
v_14:
    v_30 = basic_elt(env, 1); // or
    if (v_31 == v_30) goto v_11;
    else goto v_12;
v_11:
    v_30 = stack[0];
    if (!car_legal(v_30)) v_30 = cdrerror(v_30); else
    v_30 = cdr(v_30);
    {
        LispObject fn = basic_elt(env, 3); // ibalp_litlp
        return (*qfn1(fn))(fn, v_30);
    }
v_12:
    v_30 = nil;
    goto v_10;
    v_30 = nil;
v_10:
v_5:
    return onevalue(v_30);
}



// Code for omiir

static LispObject CC_omiir(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil);
    stack_popper stack_popper_var(2);
// end of prologue
    {   LispObject fn = basic_elt(env, 2); // lex
    v_11 = (*qfn0(fn))(fn);
    }
    env = stack[-1];
    v_11 = qvalue(basic_elt(env, 1)); // char
    v_11 = Lcompress(nil, v_11);
    env = stack[-1];
    stack[0] = v_11;
    {   LispObject fn = basic_elt(env, 2); // lex
    v_11 = (*qfn0(fn))(fn);
    }
    v_11 = stack[0];
    return onevalue(v_11);
}



// Code for writepri

static LispObject CC_writepri(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_10, v_11, v_12;
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
    {   LispObject fn = basic_elt(env, 1); // eval
    v_12 = (*qfn1(fn))(fn, v_10);
    }
    env = stack[-1];
    v_11 = nil;
    v_10 = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // assgnpri
        return (*qfn3(fn))(fn, v_12, v_11, v_10);
    }
}



// Code for argnochk

static LispObject CC_argnochk(LispObject env,
                         LispObject v_2)
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
    stack[-5] = v_2;
// end of prologue
    v_112 = qvalue(basic_elt(env, 1)); // !*argnochk
    if (v_112 == nil) goto v_9;
    else goto v_10;
v_9:
    v_112 = stack[-5];
    goto v_6;
v_10:
    v_112 = stack[-5];
    if (!car_legal(v_112)) v_112 = carerror(v_112); else
    v_112 = car(v_112);
    {   LispObject fn = basic_elt(env, 11); // argsofopr
    v_112 = (*qfn1(fn))(fn, v_112);
    }
    env = stack[-7];
    stack[-6] = v_112;
    if (v_112 == nil) goto v_14;
    stack[0] = stack[-6];
    v_112 = stack[-5];
    if (!car_legal(v_112)) v_112 = cdrerror(v_112); else
    v_112 = cdr(v_112);
    v_112 = Llength(nil, v_112);
    env = stack[-7];
    if (equal(stack[0], v_112)) goto v_25;
    v_112 = stack[-5];
    if (!car_legal(v_112)) v_112 = carerror(v_112); else
    v_112 = car(v_112);
    if (!symbolp(v_112)) v_112 = nil;
    else { v_112 = qfastgets(v_112);
           if (v_112 != nil) { v_112 = elt(v_112, 22); // simpfn
#ifdef RECORD_GET
             if (v_112 != SPID_NOPROP)
                record_get(elt(fastget_names, 22), 1);
             else record_get(elt(fastget_names, 22), 0),
                v_112 = nil; }
           else record_get(elt(fastget_names, 22), 0); }
#else
             if (v_112 == SPID_NOPROP) v_112 = nil; }}
#endif
    if (v_112 == nil) goto v_32;
    else goto v_31;
v_32:
    v_112 = stack[-5];
    if (!car_legal(v_112)) v_112 = carerror(v_112); else
    v_112 = car(v_112);
    if (!symbolp(v_112)) v_112 = nil;
    else { v_112 = qfastgets(v_112);
           if (v_112 != nil) { v_112 = elt(v_112, 45); // psopfn
#ifdef RECORD_GET
             if (v_112 != SPID_NOPROP)
                record_get(elt(fastget_names, 45), 1);
             else record_get(elt(fastget_names, 45), 0),
                v_112 = nil; }
           else record_get(elt(fastget_names, 45), 0); }
#else
             if (v_112 == SPID_NOPROP) v_112 = nil; }}
#endif
    if (v_112 == nil) goto v_38;
    else goto v_37;
v_38:
    v_112 = stack[-5];
    if (!car_legal(v_112)) v_113 = carerror(v_112); else
    v_113 = car(v_112);
    v_112 = basic_elt(env, 2); // variadic
    v_112 = Lflagp(nil, v_113, v_112);
    env = stack[-7];
v_37:
v_31:
    v_112 = (v_112 == nil ? lisp_true : nil);
    goto v_23;
v_25:
    v_112 = nil;
    goto v_23;
    v_112 = nil;
v_23:
    if (v_112 == nil) goto v_21;
    v_112 = qvalue(basic_elt(env, 3)); // !*strict_argcount
    if (v_112 == nil) goto v_53;
    v_112 = basic_elt(env, 4); // "+++++ "
    v_112 = Lprinc(nil, v_112);
    env = stack[-7];
    v_112 = stack[-5];
    v_112 = Lprint(nil, v_112);
    env = stack[-7];
    stack[-4] = basic_elt(env, 5); // rlisp
    stack[-3] = static_cast<LispObject>(176)+TAG_FIXNUM; // 11
    v_112 = stack[-5];
    if (!car_legal(v_112)) stack[-2] = carerror(v_112); else
    stack[-2] = car(v_112);
    stack[-1] = basic_elt(env, 6); // "called with"
    v_112 = stack[-5];
    if (!car_legal(v_112)) v_112 = cdrerror(v_112); else
    v_112 = cdr(v_112);
    stack[0] = Llength(nil, v_112);
    env = stack[-7];
    v_112 = stack[-5];
    if (!car_legal(v_112)) v_112 = cdrerror(v_112); else
    v_112 = cdr(v_112);
    v_113 = Llength(nil, v_112);
    env = stack[-7];
    v_112 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_113 == v_112) goto v_72;
    else goto v_73;
v_72:
    v_112 = basic_elt(env, 7); // "argument"
    v_114 = v_112;
    goto v_71;
v_73:
    v_112 = basic_elt(env, 8); // "arguments"
    v_114 = v_112;
    goto v_71;
    v_114 = nil;
v_71:
    v_113 = basic_elt(env, 9); // "instead of"
    v_112 = stack[-6];
    v_112 = list3(v_114, v_113, v_112);
    env = stack[-7];
    v_112 = list3star(stack[-2], stack[-1], stack[0], v_112);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 12); // rerror
    v_112 = (*qfn3(fn))(fn, stack[-4], stack[-3], v_112);
    }
    goto v_51;
v_53:
    v_112 = stack[-5];
    if (!car_legal(v_112)) stack[-2] = carerror(v_112); else
    stack[-2] = car(v_112);
    stack[-1] = basic_elt(env, 6); // "called with"
    v_112 = stack[-5];
    if (!car_legal(v_112)) v_112 = cdrerror(v_112); else
    v_112 = cdr(v_112);
    stack[0] = Llength(nil, v_112);
    env = stack[-7];
    v_114 = basic_elt(env, 9); // "instead of"
    v_113 = stack[-6];
    v_112 = basic_elt(env, 8); // "arguments"
    v_112 = list3(v_114, v_113, v_112);
    env = stack[-7];
    v_112 = list3star(stack[-2], stack[-1], stack[0], v_112);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 13); // lprim
    v_112 = (*qfn1(fn))(fn, v_112);
    }
    v_112 = stack[-5];
    goto v_6;
v_51:
    goto v_19;
v_21:
    v_112 = stack[-5];
    goto v_6;
v_19:
    goto v_8;
v_14:
    v_112 = stack[-5];
    if (!car_legal(v_112)) stack[-1] = carerror(v_112); else
    stack[-1] = car(v_112);
    stack[0] = basic_elt(env, 10); // number!-of!-args
    v_112 = stack[-5];
    if (!car_legal(v_112)) v_112 = cdrerror(v_112); else
    v_112 = cdr(v_112);
    v_112 = Llength(nil, v_112);
    env = stack[-7];
    v_112 = Lputprop(nil, stack[-1], stack[0], v_112);
    v_112 = stack[-5];
    goto v_6;
v_8:
    v_112 = nil;
v_6:
    return onevalue(v_112);
}



// Code for compactfmatch2

static LispObject CC_compactfmatch2(LispObject env,
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
    v_26 = stack[0];
    if (!consp(v_26)) goto v_6;
    else goto v_7;
v_6:
    v_26 = nil;
    goto v_5;
v_7:
    v_26 = stack[0];
    if (!car_legal(v_26)) v_27 = carerror(v_26); else
    v_27 = car(v_26);
    v_26 = basic_elt(env, 1); // !~
    if (v_27 == v_26) goto v_10;
    else goto v_11;
v_10:
    v_26 = stack[0];
    return ncons(v_26);
v_11:
    v_26 = stack[0];
    if (!car_legal(v_26)) v_26 = carerror(v_26); else
    v_26 = car(v_26);
    {   LispObject fn = basic_elt(env, 0); // compactfmatch2
    stack[-1] = (*qfn1(fn))(fn, v_26);
    }
    env = stack[-2];
    v_26 = stack[0];
    if (!car_legal(v_26)) v_26 = cdrerror(v_26); else
    v_26 = cdr(v_26);
    {   LispObject fn = basic_elt(env, 0); // compactfmatch2
    v_26 = (*qfn1(fn))(fn, v_26);
    }
    {
        LispObject v_30 = stack[-1];
        return Lappend_2(nil, v_30, v_26);
    }
    v_26 = nil;
v_5:
    return onevalue(v_26);
}



// Code for make!-term

static LispObject CC_makeKterm(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_122, v_123, v_124;
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
    v_122 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-2] = v_122;
    v_122 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[0] = v_122;
v_11:
    v_123 = stack[-4];
    v_122 = stack[0];
    v_123 = Lgetv(nil, v_123, v_122);
    env = stack[-7];
    v_122 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_122 = static_cast<LispObject>(lessp2(v_123, v_122));
    v_122 = v_122 ? lisp_true : nil;
    env = stack[-7];
    if (v_122 == nil) goto v_17;
    v_122 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    stack[-2] = v_122;
    goto v_15;
v_17:
    v_123 = stack[-4];
    v_122 = stack[0];
    v_123 = Lgetv(nil, v_123, v_122);
    env = stack[-7];
    v_122 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_122 = static_cast<LispObject>(greaterp2(v_123, v_122));
    v_122 = v_122 ? lisp_true : nil;
    env = stack[-7];
    if (v_122 == nil) goto v_25;
    v_122 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-2] = v_122;
    goto v_15;
v_25:
    v_123 = stack[0];
    v_122 = static_cast<LispObject>(112)+TAG_FIXNUM; // 7
    if (v_123 == v_122) goto v_32;
    else goto v_33;
v_32:
    v_123 = stack[-5];
    v_122 = basic_elt(env, 1); // sin
    if (v_123 == v_122) goto v_38;
    else goto v_39;
v_38:
    v_122 = nil;
    goto v_10;
v_39:
    goto v_15;
v_33:
    v_122 = stack[0];
    v_122 = static_cast<LispObject>(static_cast<std::intptr_t>(v_122) + 0x10);
    stack[0] = v_122;
    goto v_11;
v_15:
    v_122 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_122 = Lmkvect(nil, v_122);
    env = stack[-7];
    stack[-6] = v_122;
    v_123 = stack[-2];
    v_122 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_123 == v_122) goto v_55;
    else goto v_56;
v_55:
    v_122 = lisp_true;
    goto v_54;
v_56:
    v_123 = stack[-5];
    v_122 = basic_elt(env, 2); // cos
    v_122 = (v_123 == v_122 ? lisp_true : nil);
    goto v_54;
    v_122 = nil;
v_54:
    if (v_122 == nil) goto v_52;
    v_124 = stack[-6];
    v_123 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_122 = stack[-3];
    v_122 = Lputv(nil, v_124, v_123, v_122);
    env = stack[-7];
    goto v_50;
v_52:
    stack[-1] = stack[-6];
    stack[0] = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_123 = basic_elt(env, 3); // (-1 . 1)
    v_122 = stack[-3];
    {   LispObject fn = basic_elt(env, 4); // multsq
    v_122 = (*qfn2(fn))(fn, v_123, v_122);
    }
    env = stack[-7];
    v_122 = Lputv(nil, stack[-1], stack[0], v_122);
    env = stack[-7];
    goto v_50;
v_50:
    v_124 = stack[-6];
    v_123 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_122 = stack[-5];
    v_122 = Lputv(nil, v_124, v_123, v_122);
    env = stack[-7];
    v_123 = stack[-2];
    v_122 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    if (v_123 == v_122) goto v_83;
    else goto v_84;
v_83:
    v_122 = static_cast<LispObject>(112)+TAG_FIXNUM; // 7
    v_122 = Lmkvect(nil, v_122);
    env = stack[-7];
    stack[-2] = v_122;
    v_122 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-3] = v_122;
v_92:
    v_123 = static_cast<LispObject>(112)+TAG_FIXNUM; // 7
    v_122 = stack[-3];
    v_122 = difference2(v_123, v_122);
    env = stack[-7];
    v_122 = Lminusp(nil, v_122);
    env = stack[-7];
    if (v_122 == nil) goto v_97;
    goto v_91;
v_97:
    stack[-1] = stack[-2];
    stack[0] = stack[-3];
    v_123 = stack[-4];
    v_122 = stack[-3];
    v_122 = Lgetv(nil, v_123, v_122);
    env = stack[-7];
    v_122 = negate(v_122);
    env = stack[-7];
    v_122 = Lputv(nil, stack[-1], stack[0], v_122);
    env = stack[-7];
    v_122 = stack[-3];
    v_122 = add1(v_122);
    env = stack[-7];
    stack[-3] = v_122;
    goto v_92;
v_91:
    v_122 = stack[-2];
    stack[-4] = v_122;
    goto v_82;
v_84:
v_82:
    v_124 = stack[-6];
    v_123 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_122 = stack[-4];
    v_122 = Lputv(nil, v_124, v_123, v_122);
    env = stack[-7];
    v_124 = stack[-6];
    v_123 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_122 = nil;
    v_122 = Lputv(nil, v_124, v_123, v_122);
    v_122 = stack[-6];
v_10:
    return onevalue(v_122);
}



// Code for listtest

static LispObject CC_listtest(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[0] = v_4;
    stack[-1] = v_3;
    stack[-2] = v_2;
// end of prologue
v_8:
    v_37 = stack[-2];
    if (v_37 == nil) goto v_11;
    else goto v_12;
v_11:
    v_37 = nil;
    goto v_7;
v_12:
    v_39 = stack[0];
    v_37 = stack[-2];
    if (!car_legal(v_37)) v_38 = carerror(v_37); else
    v_38 = car(v_37);
    v_37 = stack[-1];
    v_37 = Lapply2(nil, v_39, v_38, v_37);
    env = stack[-3];
    if (v_37 == nil) goto v_16;
    v_37 = stack[-2];
    if (!car_legal(v_37)) v_37 = carerror(v_37); else
    v_37 = car(v_37);
    if (v_37 == nil) goto v_24;
    else goto v_25;
v_24:
    v_37 = lisp_true;
    goto v_7;
v_25:
    v_37 = stack[-2];
    if (!car_legal(v_37)) v_37 = carerror(v_37); else
    v_37 = car(v_37);
    goto v_7;
    goto v_10;
v_16:
    v_37 = stack[-2];
    if (!car_legal(v_37)) v_37 = cdrerror(v_37); else
    v_37 = cdr(v_37);
    stack[-2] = v_37;
    goto v_8;
v_10:
    v_37 = nil;
v_7:
    return onevalue(v_37);
}



// Code for lalr_prin_action

static LispObject CC_lalr_prin_action(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_31 = stack[0];
    if (v_31 == nil) goto v_6;
    else goto v_7;
v_6:
    v_31 = basic_elt(env, 1); // " "
        return Lprinc(nil, v_31);
v_7:
    v_32 = stack[0];
    v_31 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_31 = static_cast<LispObject>(greaterp2(v_32, v_31));
    v_31 = v_31 ? lisp_true : nil;
    env = stack[-1];
    if (v_31 == nil) goto v_12;
    v_31 = basic_elt(env, 2); // "shift to state "
    v_31 = Lprinc(nil, v_31);
    v_31 = stack[0];
        return Lprin(nil, v_31);
v_12:
    v_32 = stack[0];
    v_31 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_32 == v_31) goto v_20;
    else goto v_21;
v_20:
    v_31 = basic_elt(env, 3); // "accept"
        return Lprinc(nil, v_31);
v_21:
    v_31 = stack[0];
    v_31 = negate(v_31);
    env = stack[-1];
    {
        LispObject fn = basic_elt(env, 4); // lalr_prin_reduction
        return (*qfn1(fn))(fn, v_31);
    }
    v_31 = nil;
    return onevalue(v_31);
}



// Code for formprogn

static LispObject CC_formprogn(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_13, v_14, v_15;
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
    v_13 = v_4;
    v_14 = v_3;
    v_15 = v_2;
// end of prologue
    stack[0] = basic_elt(env, 1); // progn
    if (!car_legal(v_15)) v_15 = cdrerror(v_15); else
    v_15 = cdr(v_15);
    {   LispObject fn = basic_elt(env, 2); // formclis
    v_13 = (*qfn3(fn))(fn, v_15, v_14, v_13);
    }
    {
        LispObject v_17 = stack[0];
        return cons(v_17, v_13);
    }
}



// Code for processcarpartitie1

static LispObject CC_processcarpartitie1(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_37, v_38;
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
    real_push(nil, nil, nil, nil, nil);
    stack_popper stack_popper_var(11);
// copy arguments values to proper place
    stack[-5] = v_6;
    stack[-6] = v_5;
    stack[-7] = v_4;
    v_37 = v_3;
    stack[-8] = v_2;
// end of prologue
v_11:
    v_38 = v_37;
    if (v_38 == nil) goto v_14;
    else goto v_15;
v_14:
    v_37 = stack[-5];
    goto v_10;
v_15:
    v_38 = v_37;
    if (!car_legal(v_38)) v_38 = cdrerror(v_38); else
    v_38 = cdr(v_38);
    stack[-9] = v_38;
    stack[-4] = stack[-7];
    stack[-3] = stack[-8];
    stack[-2] = v_37;
    v_38 = stack[-6];
    if (!car_legal(v_38)) stack[-1] = carerror(v_38); else
    stack[-1] = car(v_38);
    if (!car_legal(v_37)) v_38 = carerror(v_37); else
    v_38 = car(v_37);
    v_37 = stack[-6];
    if (!car_legal(v_37)) v_37 = cdrerror(v_37); else
    v_37 = cdr(v_37);
    stack[0] = cons(v_38, v_37);
    env = stack[-10];
    v_37 = stack[-5];
    v_37 = ncons(v_37);
    env = stack[-10];
    v_37 = acons(stack[-1], stack[0], v_37);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 1); // processpartitie1
    v_37 = (*qfn4up(fn))(fn, stack[-4], stack[-3], stack[-2], v_37);
    }
    env = stack[-10];
    stack[-5] = v_37;
    v_37 = stack[-9];
    goto v_11;
    v_37 = nil;
v_10:
    return onevalue(v_37);
}



// Code for subs3f1

static LispObject CC_subs3f1(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_134, v_135, v_136;
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
    v_135 = nil;
    v_134 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_134 = cons(v_135, v_134);
    env = stack[-4];
    stack[-3] = v_134;
v_10:
    v_134 = stack[-2];
    if (v_134 == nil) goto v_18;
    else goto v_19;
v_18:
    v_134 = stack[-3];
    goto v_9;
v_19:
    v_134 = stack[-2];
    if (!consp(v_134)) goto v_26;
    else goto v_27;
v_26:
    v_134 = lisp_true;
    goto v_25;
v_27:
    v_134 = stack[-2];
    if (!car_legal(v_134)) v_134 = carerror(v_134); else
    v_134 = car(v_134);
    v_134 = (consp(v_134) ? nil : lisp_true);
    goto v_25;
    v_134 = nil;
v_25:
    if (v_134 == nil) goto v_23;
    stack[0] = stack[-3];
    v_135 = stack[-2];
    v_134 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_134 = cons(v_135, v_134);
    env = stack[-4];
    {
        LispObject v_141 = stack[0];
        LispObject fn = basic_elt(env, 6); // addsq
        return (*qfn2(fn))(fn, v_141, v_134);
    }
v_23:
    v_134 = stack[0];
    if (v_134 == nil) goto v_41;
    v_134 = stack[-2];
    if (!car_legal(v_134)) v_134 = carerror(v_134); else
    v_134 = car(v_134);
    if (!car_legal(v_134)) v_134 = cdrerror(v_134); else
    v_134 = cdr(v_134);
    if (!consp(v_134)) goto v_47;
    else goto v_48;
v_47:
    v_134 = lisp_true;
    goto v_46;
v_48:
    v_134 = stack[-2];
    if (!car_legal(v_134)) v_134 = carerror(v_134); else
    v_134 = car(v_134);
    if (!car_legal(v_134)) v_134 = cdrerror(v_134); else
    v_134 = cdr(v_134);
    if (!car_legal(v_134)) v_134 = carerror(v_134); else
    v_134 = car(v_134);
    v_134 = (consp(v_134) ? nil : lisp_true);
    goto v_46;
    v_134 = nil;
v_46:
    if (v_134 == nil) goto v_41;
    goto v_12;
v_41:
    v_134 = qvalue(basic_elt(env, 1)); // !*mymatch
    if (v_134 == nil) goto v_63;
    v_134 = stack[-2];
    if (!car_legal(v_134)) v_135 = carerror(v_134); else
    v_135 = car(v_134);
    v_134 = stack[-1];
    {   LispObject fn = basic_elt(env, 7); // !*subs3tnc
    v_134 = (*qfn2(fn))(fn, v_135, v_134);
    }
    env = stack[-4];
    goto v_61;
v_63:
    v_134 = stack[-2];
    if (!car_legal(v_134)) v_135 = carerror(v_134); else
    v_135 = car(v_134);
    v_134 = stack[-1];
    {   LispObject fn = basic_elt(env, 8); // subs3t
    v_134 = (*qfn2(fn))(fn, v_135, v_134);
    }
    env = stack[-4];
    goto v_61;
    v_134 = nil;
v_61:
    v_136 = v_134;
    v_134 = stack[0];
    if (v_134 == nil) goto v_81;
    else goto v_82;
v_81:
    v_134 = lisp_true;
    goto v_80;
v_82:
    v_134 = qvalue(basic_elt(env, 2)); // mchfg!*
    v_134 = (v_134 == nil ? lisp_true : nil);
    goto v_80;
    v_134 = nil;
v_80:
    if (v_134 == nil) goto v_78;
    goto v_11;
v_78:
    v_134 = nil;
    setvalue(basic_elt(env, 2), v_134); // mchfg!*
    v_134 = v_136;
    if (!car_legal(v_134)) v_135 = carerror(v_134); else
    v_135 = car(v_134);
    v_134 = stack[-2];
    if (equal(v_135, v_134)) goto v_96;
    else goto v_97;
v_96:
    v_134 = v_136;
    if (!car_legal(v_134)) v_135 = cdrerror(v_134); else
    v_135 = cdr(v_134);
    v_134 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_134 = (v_135 == v_134 ? lisp_true : nil);
    goto v_95;
v_97:
    v_134 = nil;
    goto v_95;
    v_134 = nil;
v_95:
    if (v_134 == nil) goto v_93;
    v_135 = stack[-2];
    v_134 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_134 = cons(v_135, v_134);
    env = stack[-4];
    v_136 = v_134;
    goto v_11;
v_93:
    v_134 = qvalue(basic_elt(env, 3)); // !*resubs
    if (v_134 == nil) goto v_111;
    else goto v_112;
v_111:
    goto v_11;
v_112:
    v_134 = qvalue(basic_elt(env, 4)); // !*sub2
    if (v_134 == nil) goto v_116;
    else goto v_114;
v_116:
    v_134 = qvalue(basic_elt(env, 5)); // powlis1!*
    if (v_134 == nil) goto v_118;
    else goto v_114;
v_118:
    goto v_115;
v_114:
    v_134 = v_136;
    {   LispObject fn = basic_elt(env, 9); // subs2q
    v_134 = (*qfn1(fn))(fn, v_134);
    }
    env = stack[-4];
    v_136 = v_134;
    goto v_91;
v_115:
v_91:
    v_134 = v_136;
    {   LispObject fn = basic_elt(env, 10); // subs3q
    v_134 = (*qfn1(fn))(fn, v_134);
    }
    env = stack[-4];
    v_136 = v_134;
v_11:
    v_134 = stack[-3];
    v_135 = v_136;
    {   LispObject fn = basic_elt(env, 6); // addsq
    v_134 = (*qfn2(fn))(fn, v_134, v_135);
    }
    env = stack[-4];
    stack[-3] = v_134;
    v_134 = stack[-2];
    if (!car_legal(v_134)) v_134 = cdrerror(v_134); else
    v_134 = cdr(v_134);
    stack[-2] = v_134;
    goto v_10;
v_12:
    v_134 = stack[-2];
    if (!car_legal(v_134)) v_134 = carerror(v_134); else
    v_134 = car(v_134);
    v_135 = ncons(v_134);
    env = stack[-4];
    v_134 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_134 = cons(v_135, v_134);
    env = stack[-4];
    v_136 = v_134;
    goto v_11;
v_9:
    return onevalue(v_134);
}



// Code for get_rep_matrix_in

static LispObject CC_get_rep_matrix_in(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_60, v_61;
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
    v_61 = v_3;
    stack[-2] = v_2;
// end of prologue
    stack[-1] = nil;
    v_60 = nil;
    stack[-3] = v_60;
    v_60 = v_61;
    if (!car_legal(v_60)) v_60 = cdrerror(v_60); else
    v_60 = cdr(v_60);
    stack[0] = v_60;
v_15:
    v_60 = stack[-3];
    if (v_60 == nil) goto v_22;
    else goto v_23;
v_22:
    v_60 = stack[0];
    v_61 = Llength(nil, v_60);
    env = stack[-4];
    v_60 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_60 = static_cast<LispObject>(greaterp2(v_61, v_60));
    v_60 = v_60 ? lisp_true : nil;
    env = stack[-4];
    goto v_21;
v_23:
    v_60 = nil;
    goto v_21;
    v_60 = nil;
v_21:
    if (v_60 == nil) goto v_18;
    else goto v_19;
v_18:
    goto v_14;
v_19:
    v_60 = stack[0];
    if (!car_legal(v_60)) v_60 = carerror(v_60); else
    v_60 = car(v_60);
    if (!car_legal(v_60)) v_61 = carerror(v_60); else
    v_61 = car(v_60);
    v_60 = stack[-2];
    if (equal(v_61, v_60)) goto v_35;
    else goto v_36;
v_35:
    v_60 = stack[0];
    if (!car_legal(v_60)) v_60 = carerror(v_60); else
    v_60 = car(v_60);
    if (!car_legal(v_60)) v_60 = cdrerror(v_60); else
    v_60 = cdr(v_60);
    if (!car_legal(v_60)) v_60 = carerror(v_60); else
    v_60 = car(v_60);
    stack[-1] = v_60;
    v_60 = lisp_true;
    stack[-3] = v_60;
    goto v_34;
v_36:
v_34:
    v_60 = stack[0];
    if (!car_legal(v_60)) v_60 = cdrerror(v_60); else
    v_60 = cdr(v_60);
    stack[0] = v_60;
    goto v_15;
v_14:
    v_60 = stack[-3];
    if (v_60 == nil) goto v_53;
    v_60 = stack[-1];
    goto v_9;
v_53:
    v_60 = basic_elt(env, 1); // "error in get representation matrix"
    {   LispObject fn = basic_elt(env, 2); // rederr
    v_60 = (*qfn1(fn))(fn, v_60);
    }
    goto v_51;
v_51:
    v_60 = nil;
v_9:
    return onevalue(v_60);
}



// Code for cl_fvarl

static LispObject CC_cl_fvarl(LispObject env,
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
    {   LispObject fn = basic_elt(env, 2); // cl_fvarl1
    v_9 = (*qfn1(fn))(fn, v_8);
    }
    env = stack[0];
    v_8 = basic_elt(env, 1); // ordp
    {
        LispObject fn = basic_elt(env, 3); // sort
        return (*qfn2(fn))(fn, v_9, v_8);
    }
}



// Code for qsort

static LispObject CC_qsort(LispObject env,
                         LispObject v_2)
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
    v_55 = v_2;
// end of prologue
    stack[-2] = nil;
    stack[-1] = nil;
    v_54 = v_55;
    if (v_54 == nil) goto v_14;
    else goto v_15;
v_14:
    v_54 = nil;
    goto v_9;
v_15:
    v_54 = v_55;
    if (!car_legal(v_54)) v_54 = carerror(v_54); else
    v_54 = car(v_54);
    stack[-3] = v_54;
    v_54 = v_55;
    if (!car_legal(v_54)) v_54 = cdrerror(v_54); else
    v_54 = cdr(v_54);
    stack[0] = v_54;
v_10:
    v_54 = stack[0];
    if (v_54 == nil) goto v_24;
    else goto v_25;
v_24:
    goto v_11;
v_25:
    v_55 = stack[-3];
    v_54 = stack[0];
    if (!car_legal(v_54)) v_54 = carerror(v_54); else
    v_54 = car(v_54);
    {   LispObject fn = basic_elt(env, 1); // ordop
    v_54 = (*qfn2(fn))(fn, v_55, v_54);
    }
    env = stack[-4];
    if (v_54 == nil) goto v_30;
    v_54 = stack[0];
    if (!car_legal(v_54)) v_55 = carerror(v_54); else
    v_55 = car(v_54);
    v_54 = stack[-1];
    v_54 = cons(v_55, v_54);
    env = stack[-4];
    stack[-1] = v_54;
    goto v_28;
v_30:
    v_54 = stack[0];
    if (!car_legal(v_54)) v_55 = carerror(v_54); else
    v_55 = car(v_54);
    v_54 = stack[-2];
    v_54 = cons(v_55, v_54);
    env = stack[-4];
    stack[-2] = v_54;
    goto v_28;
v_28:
    v_54 = stack[0];
    if (!car_legal(v_54)) v_54 = cdrerror(v_54); else
    v_54 = cdr(v_54);
    stack[0] = v_54;
    goto v_10;
v_11:
    v_54 = stack[-2];
    {   LispObject fn = basic_elt(env, 0); // qsort
    stack[0] = (*qfn1(fn))(fn, v_54);
    }
    env = stack[-4];
    stack[-2] = stack[-3];
    v_54 = stack[-1];
    {   LispObject fn = basic_elt(env, 0); // qsort
    v_54 = (*qfn1(fn))(fn, v_54);
    }
    env = stack[-4];
    v_54 = cons(stack[-2], v_54);
    {
        LispObject v_60 = stack[0];
        return Lappend_2(nil, v_60, v_54);
    }
v_9:
    return onevalue(v_54);
}



// Code for integerom

static LispObject CC_integerom(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_12;
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
    v_12 = basic_elt(env, 1); // "<OMI> "
    {   LispObject fn = basic_elt(env, 3); // printout
    v_12 = (*qfn1(fn))(fn, v_12);
    }
    env = stack[-1];
    v_12 = stack[0];
    v_12 = Lprinc(nil, v_12);
    env = stack[-1];
    v_12 = basic_elt(env, 2); // " </OMI>"
    v_12 = Lprinc(nil, v_12);
    v_12 = nil;
    return onevalue(v_12);
}



// Code for c!:extadd

static LispObject CC_cTextadd(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_97, v_98, v_99;
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
    v_97 = stack[-1];
    if (v_97 == nil) goto v_14;
    else goto v_15;
v_14:
    v_97 = stack[0];
    v_98 = v_97;
    goto v_11;
v_15:
    v_97 = stack[0];
    if (v_97 == nil) goto v_18;
    else goto v_19;
v_18:
    v_97 = stack[-1];
    v_98 = v_97;
    goto v_11;
v_19:
    v_97 = stack[-1];
    if (!car_legal(v_97)) v_97 = carerror(v_97); else
    v_97 = car(v_97);
    if (!car_legal(v_97)) v_98 = carerror(v_97); else
    v_98 = car(v_97);
    v_97 = stack[0];
    if (!car_legal(v_97)) v_97 = carerror(v_97); else
    v_97 = car(v_97);
    if (!car_legal(v_97)) v_97 = carerror(v_97); else
    v_97 = car(v_97);
    if (equal(v_98, v_97)) goto v_22;
    else goto v_23;
v_22:
    v_97 = stack[-1];
    if (!car_legal(v_97)) v_97 = carerror(v_97); else
    v_97 = car(v_97);
    if (!car_legal(v_97)) v_98 = cdrerror(v_97); else
    v_98 = cdr(v_97);
    v_97 = stack[0];
    if (!car_legal(v_97)) v_97 = carerror(v_97); else
    v_97 = car(v_97);
    if (!car_legal(v_97)) v_97 = cdrerror(v_97); else
    v_97 = cdr(v_97);
    {   LispObject fn = basic_elt(env, 1); // addf
    v_97 = (*qfn2(fn))(fn, v_98, v_97);
    }
    env = stack[-3];
    v_98 = v_97;
    if (v_98 == nil) goto v_39;
    else goto v_40;
v_39:
    v_97 = stack[-1];
    if (!car_legal(v_97)) v_97 = cdrerror(v_97); else
    v_97 = cdr(v_97);
    stack[-1] = v_97;
    v_97 = stack[0];
    if (!car_legal(v_97)) v_97 = cdrerror(v_97); else
    v_97 = cdr(v_97);
    stack[0] = v_97;
    goto v_10;
v_40:
    v_98 = stack[-1];
    if (!car_legal(v_98)) v_98 = carerror(v_98); else
    v_98 = car(v_98);
    if (!car_legal(v_98)) v_99 = carerror(v_98); else
    v_99 = car(v_98);
    v_98 = v_97;
    v_97 = stack[-2];
    v_97 = acons(v_99, v_98, v_97);
    env = stack[-3];
    stack[-2] = v_97;
    v_97 = stack[-1];
    if (!car_legal(v_97)) v_97 = cdrerror(v_97); else
    v_97 = cdr(v_97);
    stack[-1] = v_97;
    v_97 = stack[0];
    if (!car_legal(v_97)) v_97 = cdrerror(v_97); else
    v_97 = cdr(v_97);
    stack[0] = v_97;
    goto v_10;
    goto v_13;
v_23:
    v_97 = stack[-1];
    if (!car_legal(v_97)) v_97 = carerror(v_97); else
    v_97 = car(v_97);
    if (!car_legal(v_97)) v_98 = carerror(v_97); else
    v_98 = car(v_97);
    v_97 = stack[0];
    if (!car_legal(v_97)) v_97 = carerror(v_97); else
    v_97 = car(v_97);
    if (!car_legal(v_97)) v_97 = carerror(v_97); else
    v_97 = car(v_97);
    {   LispObject fn = basic_elt(env, 2); // c!:ordexp
    v_97 = (*qfn2(fn))(fn, v_98, v_97);
    }
    env = stack[-3];
    if (v_97 == nil) goto v_59;
    v_97 = stack[-1];
    if (!car_legal(v_97)) v_98 = carerror(v_97); else
    v_98 = car(v_97);
    v_97 = stack[-2];
    v_97 = cons(v_98, v_97);
    env = stack[-3];
    stack[-2] = v_97;
    v_97 = stack[-1];
    if (!car_legal(v_97)) v_97 = cdrerror(v_97); else
    v_97 = cdr(v_97);
    stack[-1] = v_97;
    goto v_10;
v_59:
    v_97 = stack[0];
    if (!car_legal(v_97)) v_98 = carerror(v_97); else
    v_98 = car(v_97);
    v_97 = stack[-2];
    v_97 = cons(v_98, v_97);
    env = stack[-3];
    stack[-2] = v_97;
    v_97 = stack[0];
    if (!car_legal(v_97)) v_97 = cdrerror(v_97); else
    v_97 = cdr(v_97);
    stack[0] = v_97;
    goto v_10;
v_13:
v_11:
v_83:
    v_97 = stack[-2];
    if (v_97 == nil) goto v_86;
    else goto v_87;
v_86:
    goto v_82;
v_87:
    v_97 = stack[-2];
    if (!car_legal(v_97)) v_97 = carerror(v_97); else
    v_97 = car(v_97);
    v_97 = cons(v_97, v_98);
    env = stack[-3];
    v_98 = v_97;
    v_97 = stack[-2];
    if (!car_legal(v_97)) v_97 = cdrerror(v_97); else
    v_97 = cdr(v_97);
    stack[-2] = v_97;
    goto v_83;
v_82:
    v_97 = v_98;
    return onevalue(v_97);
}



// Code for lessp!:

static LispObject CC_lesspT(LispObject env,
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
    v_9 = v_3;
    v_8 = v_2;
// end of prologue
    {
        LispObject fn = basic_elt(env, 1); // greaterp!:
        return (*qfn2(fn))(fn, v_9, v_8);
    }
}



// Code for condterpri

static LispObject CC_condterpri(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_60;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// end of prologue
    v_60 = qvalue(basic_elt(env, 1)); // !*output
    if (v_60 == nil) goto v_5;
    else goto v_6;
v_5:
    v_60 = nil;
    goto v_4;
v_6:
    v_60 = qvalue(basic_elt(env, 2)); // !*echo
    if (v_60 == nil) goto v_13;
    else goto v_14;
v_13:
    v_60 = nil;
    goto v_12;
v_14:
    v_60 = qvalue(basic_elt(env, 3)); // !*extraecho
    if (v_60 == nil) goto v_21;
    else goto v_22;
v_21:
    v_60 = nil;
    goto v_20;
v_22:
    v_60 = qvalue(basic_elt(env, 4)); // !*int
    if (v_60 == nil) goto v_33;
    else goto v_34;
v_33:
    v_60 = lisp_true;
    goto v_32;
v_34:
    v_60 = qvalue(basic_elt(env, 5)); // ifl!*
    goto v_32;
    v_60 = nil;
v_32:
    if (v_60 == nil) goto v_29;
    else goto v_30;
v_29:
    v_60 = nil;
    goto v_28;
v_30:
    v_60 = qvalue(basic_elt(env, 6)); // !*defn
    if (v_60 == nil) goto v_45;
    else goto v_46;
v_45:
    v_60 = qvalue(basic_elt(env, 7)); // !*demo
    if (v_60 == nil) goto v_50;
    else goto v_51;
v_50:
        return Lterpri(nil);
v_51:
    v_60 = nil;
    goto v_49;
    v_60 = nil;
v_49:
    goto v_44;
v_46:
    v_60 = nil;
    goto v_44;
    v_60 = nil;
v_44:
    goto v_28;
    v_60 = nil;
v_28:
    goto v_20;
    v_60 = nil;
v_20:
    goto v_12;
    v_60 = nil;
v_12:
    goto v_4;
    v_60 = nil;
v_4:
    return onevalue(v_60);
}



// Code for red_better

static LispObject CC_red_better(LispObject env,
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
    v_10 = v_2;
// end of prologue
    {   LispObject fn = basic_elt(env, 1); // bas_dplen
    stack[-1] = (*qfn1(fn))(fn, v_10);
    }
    env = stack[-2];
    v_10 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // bas_dplen
    v_10 = (*qfn1(fn))(fn, v_10);
    }
    {
        LispObject v_13 = stack[-1];
        return Llessp_2(nil, v_13, v_10);
    }
}



// Code for gperm3

static LispObject CC_gperm3(LispObject env,
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
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    v_26 = v_3;
    v_25 = v_2;
// end of prologue
v_8:
    v_27 = v_25;
    if (v_27 == nil) goto v_11;
    else goto v_12;
v_11:
    v_25 = v_26;
    goto v_7;
v_12:
    v_27 = v_25;
    if (!car_legal(v_27)) v_27 = cdrerror(v_27); else
    v_27 = cdr(v_27);
    stack[0] = v_27;
    v_27 = v_26;
    if (!car_legal(v_25)) v_26 = carerror(v_25); else
    v_26 = car(v_25);
    v_25 = nil;
    {   LispObject fn = basic_elt(env, 1); // gperm2
    v_25 = (*qfn3(fn))(fn, v_27, v_26, v_25);
    }
    env = stack[-1];
    v_26 = v_25;
    v_25 = stack[0];
    goto v_8;
    v_25 = nil;
v_7:
    return onevalue(v_25);
}



// Code for ordn

static LispObject CC_ordn(LispObject env,
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
        LispObject fn = basic_elt(env, 1); // ord2
        return (*qfn2(fn))(fn, v_34, v_35);
    }
v_16:
    v_34 = v_35;
    if (!car_legal(v_34)) stack[0] = carerror(v_34); else
    stack[0] = car(v_34);
    v_34 = v_35;
    if (!car_legal(v_34)) v_34 = cdrerror(v_34); else
    v_34 = cdr(v_34);
    {   LispObject fn = basic_elt(env, 0); // ordn
    v_34 = (*qfn1(fn))(fn, v_34);
    }
    env = stack[-1];
    {
        LispObject v_37 = stack[0];
        LispObject fn = basic_elt(env, 2); // ordad
        return (*qfn2(fn))(fn, v_37, v_34);
    }
    v_34 = nil;
v_5:
    return onevalue(v_34);
}



// Code for rnminus!:

static LispObject CC_rnminusT(LispObject env,
                         LispObject v_2)
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
    v_14 = stack[0];
    if (!car_legal(v_14)) stack[-1] = carerror(v_14); else
    stack[-1] = car(v_14);
    v_14 = stack[0];
    if (!car_legal(v_14)) v_14 = cdrerror(v_14); else
    v_14 = cdr(v_14);
    if (!car_legal(v_14)) v_14 = carerror(v_14); else
    v_14 = car(v_14);
    {   LispObject fn = basic_elt(env, 1); // !:minus
    v_15 = (*qfn1(fn))(fn, v_14);
    }
    v_14 = stack[0];
    if (!car_legal(v_14)) v_14 = cdrerror(v_14); else
    v_14 = cdr(v_14);
    if (!car_legal(v_14)) v_14 = cdrerror(v_14); else
    v_14 = cdr(v_14);
    {
        LispObject v_18 = stack[-1];
        return list2star(v_18, v_15, v_14);
    }
}



// Code for split_f

static LispObject CC_split_f(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_125, v_126;
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(9);
// copy arguments values to proper place
    stack[-3] = v_5;
    stack[-4] = v_4;
    stack[-5] = v_3;
    stack[-6] = v_2;
// end of prologue
v_10:
    v_125 = stack[-6];
    if (v_125 == nil) goto v_13;
    else goto v_14;
v_13:
    v_125 = stack[-3];
    goto v_9;
v_14:
    v_125 = stack[-6];
    if (!consp(v_125)) goto v_21;
    else goto v_22;
v_21:
    v_125 = lisp_true;
    goto v_20;
v_22:
    v_125 = stack[-6];
    if (!car_legal(v_125)) v_125 = carerror(v_125); else
    v_125 = car(v_125);
    v_125 = (consp(v_125) ? nil : lisp_true);
    goto v_20;
    v_125 = nil;
v_20:
    if (v_125 == nil) goto v_18;
    v_126 = stack[-4];
    v_125 = stack[-6];
    {   LispObject fn = basic_elt(env, 3); // multf
    v_126 = (*qfn2(fn))(fn, v_126, v_125);
    }
    env = stack[-8];
    v_125 = stack[-3];
    if (!car_legal(v_125)) v_125 = carerror(v_125); else
    v_125 = car(v_125);
    {   LispObject fn = basic_elt(env, 4); // addf
    v_126 = (*qfn2(fn))(fn, v_126, v_125);
    }
    v_125 = stack[-3];
    if (!car_legal(v_125)) v_125 = cdrerror(v_125); else
    v_125 = cdr(v_125);
    return cons(v_126, v_125);
v_18:
    v_125 = stack[-6];
    if (!car_legal(v_125)) v_125 = carerror(v_125); else
    v_125 = car(v_125);
    if (!car_legal(v_125)) v_125 = carerror(v_125); else
    v_125 = car(v_125);
    if (!car_legal(v_125)) v_125 = carerror(v_125); else
    v_125 = car(v_125);
    if (!consp(v_125)) goto v_44;
    v_125 = stack[-6];
    if (!car_legal(v_125)) v_125 = carerror(v_125); else
    v_125 = car(v_125);
    if (!car_legal(v_125)) v_125 = carerror(v_125); else
    v_125 = car(v_125);
    if (!car_legal(v_125)) v_125 = carerror(v_125); else
    v_125 = car(v_125);
    if (!car_legal(v_125)) v_126 = carerror(v_125); else
    v_126 = car(v_125);
    v_125 = stack[-5];
    v_125 = Lmember(nil, v_126, v_125);
    goto v_42;
v_44:
    v_125 = nil;
    goto v_42;
    v_125 = nil;
v_42:
    if (v_125 == nil) goto v_40;
    v_125 = stack[-6];
    if (!car_legal(v_125)) v_125 = carerror(v_125); else
    v_125 = car(v_125);
    if (!car_legal(v_125)) v_125 = carerror(v_125); else
    v_125 = car(v_125);
    if (!car_legal(v_125)) v_126 = cdrerror(v_125); else
    v_126 = cdr(v_125);
    v_125 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_126 == v_125) goto v_66;
    v_125 = lisp_true;
    goto v_64;
v_66:
    v_125 = stack[-6];
    if (!car_legal(v_125)) v_125 = carerror(v_125); else
    v_125 = car(v_125);
    if (!car_legal(v_125)) v_126 = cdrerror(v_125); else
    v_126 = cdr(v_125);
    v_125 = stack[-5];
    {   LispObject fn = basic_elt(env, 5); // get_first_kernel
    v_125 = (*qfn2(fn))(fn, v_126, v_125);
    }
    env = stack[-8];
    goto v_64;
    v_125 = nil;
v_64:
    if (v_125 == nil) goto v_62;
    stack[-1] = basic_elt(env, 1); // "SPLIT_F: expression not linear w.r.t."
    v_126 = basic_elt(env, 2); // list
    v_125 = stack[-5];
    stack[-2] = cons(v_126, v_125);
    env = stack[-8];
    stack[0] = nil;
    v_126 = nil;
    v_125 = lisp_true;
    v_125 = list2(v_126, v_125);
    env = stack[-8];
    {
        LispObject v_135 = stack[-1];
        LispObject v_136 = stack[-2];
        LispObject v_137 = stack[0];
        LispObject fn = basic_elt(env, 6); // msgpri
        return (*qfn4up(fn))(fn, v_135, v_136, v_137, v_125);
    }
v_62:
    v_125 = stack[-6];
    if (!car_legal(v_125)) v_125 = cdrerror(v_125); else
    v_125 = cdr(v_125);
    stack[-7] = v_125;
    stack[-1] = stack[-3];
    v_125 = stack[-6];
    if (!car_legal(v_125)) v_125 = carerror(v_125); else
    v_125 = car(v_125);
    if (!car_legal(v_125)) v_125 = carerror(v_125); else
    v_125 = car(v_125);
    if (!car_legal(v_125)) stack[0] = carerror(v_125); else
    stack[0] = car(v_125);
    v_126 = stack[-4];
    v_125 = stack[-6];
    if (!car_legal(v_125)) v_125 = carerror(v_125); else
    v_125 = car(v_125);
    if (!car_legal(v_125)) v_125 = cdrerror(v_125); else
    v_125 = cdr(v_125);
    {   LispObject fn = basic_elt(env, 3); // multf
    v_125 = (*qfn2(fn))(fn, v_126, v_125);
    }
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 7); // update_kc_list
    v_125 = (*qfn3(fn))(fn, stack[-1], stack[0], v_125);
    }
    env = stack[-8];
    stack[-3] = v_125;
    v_125 = stack[-7];
    stack[-6] = v_125;
    goto v_10;
    goto v_12;
v_40:
    v_125 = stack[-6];
    if (!car_legal(v_125)) v_125 = cdrerror(v_125); else
    v_125 = cdr(v_125);
    stack[-7] = v_125;
    v_125 = stack[-6];
    if (!car_legal(v_125)) v_125 = carerror(v_125); else
    v_125 = car(v_125);
    if (!car_legal(v_125)) stack[-2] = cdrerror(v_125); else
    stack[-2] = cdr(v_125);
    stack[-1] = stack[-5];
    stack[0] = stack[-4];
    v_125 = stack[-6];
    if (!car_legal(v_125)) v_125 = carerror(v_125); else
    v_125 = car(v_125);
    if (!car_legal(v_125)) v_126 = carerror(v_125); else
    v_126 = car(v_125);
    v_125 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_125 = cons(v_126, v_125);
    env = stack[-8];
    v_125 = ncons(v_125);
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 3); // multf
    stack[0] = (*qfn2(fn))(fn, stack[0], v_125);
    }
    env = stack[-8];
    v_125 = stack[-3];
    v_125 = ncons(v_125);
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 0); // split_f
    v_125 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_125);
    }
    env = stack[-8];
    stack[-3] = v_125;
    v_125 = stack[-7];
    stack[-6] = v_125;
    goto v_10;
v_12:
    v_125 = nil;
v_9:
    return onevalue(v_125);
}



// Code for rl_simp

static LispObject CC_rl_simp(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // rl_simp1
    v_7 = (*qfn1(fn))(fn, v_7);
    }
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // rl_csimpl
        return (*qfn1(fn))(fn, v_7);
    }
}



// Code for get_group_in

static LispObject CC_get_group_in(LispObject env,
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
    if (!car_legal(v_8)) v_8 = carerror(v_8); else
    v_8 = car(v_8);
    return onevalue(v_8);
}



// Code for ibalp_simpterm

static LispObject CC_ibalp_simpterm(LispObject env,
                         LispObject v_2)
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
v_1:
    v_76 = stack[0];
    if (!consp(v_76)) goto v_9;
    else goto v_10;
v_9:
    v_76 = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // ibalp_simpatom
        return (*qfn1(fn))(fn, v_76);
    }
v_10:
    v_76 = stack[0];
    if (!car_legal(v_76)) v_76 = carerror(v_76); else
    v_76 = car(v_76);
    stack[-1] = v_76;
    v_76 = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // ibalp_boolfp
    v_76 = (*qfn1(fn))(fn, v_76);
    }
    env = stack[-5];
    if (v_76 == nil) goto v_19;
    stack[-4] = stack[-1];
    v_76 = stack[0];
    if (!car_legal(v_76)) v_76 = cdrerror(v_76); else
    v_76 = cdr(v_76);
    stack[-3] = v_76;
    v_76 = stack[-3];
    if (v_76 == nil) goto v_34;
    else goto v_35;
v_34:
    v_76 = nil;
    goto v_28;
v_35:
    v_76 = stack[-3];
    if (!car_legal(v_76)) v_76 = carerror(v_76); else
    v_76 = car(v_76);
    {   LispObject fn = basic_elt(env, 0); // ibalp_simpterm
    v_76 = (*qfn1(fn))(fn, v_76);
    }
    env = stack[-5];
    v_76 = ncons(v_76);
    env = stack[-5];
    stack[-1] = v_76;
    stack[-2] = v_76;
v_29:
    v_76 = stack[-3];
    if (!car_legal(v_76)) v_76 = cdrerror(v_76); else
    v_76 = cdr(v_76);
    stack[-3] = v_76;
    v_76 = stack[-3];
    if (v_76 == nil) goto v_48;
    else goto v_49;
v_48:
    v_76 = stack[-2];
    goto v_28;
v_49:
    stack[0] = stack[-1];
    v_76 = stack[-3];
    if (!car_legal(v_76)) v_76 = carerror(v_76); else
    v_76 = car(v_76);
    {   LispObject fn = basic_elt(env, 0); // ibalp_simpterm
    v_76 = (*qfn1(fn))(fn, v_76);
    }
    env = stack[-5];
    v_76 = ncons(v_76);
    env = stack[-5];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_76);
    v_76 = stack[-1];
    if (!car_legal(v_76)) v_76 = cdrerror(v_76); else
    v_76 = cdr(v_76);
    stack[-1] = v_76;
    goto v_29;
v_28:
    {
        LispObject v_83 = stack[-4];
        return cons(v_83, v_76);
    }
v_19:
    v_76 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // reval
    v_76 = (*qfn1(fn))(fn, v_76);
    }
    env = stack[-5];
    stack[0] = v_76;
    v_77 = stack[0];
    v_76 = stack[-1];
    if (!consp(v_77)) goto v_67;
    v_77 = car(v_77);
    if (v_77 == v_76) goto v_66;
    else goto v_67;
v_66:
    v_77 = stack[-1];
    v_76 = basic_elt(env, 1); // "Boolean function"
    {   LispObject fn = basic_elt(env, 5); // typerr
    v_76 = (*qfn2(fn))(fn, v_77, v_76);
    }
    env = stack[-5];
    goto v_65;
v_67:
v_65:
    v_76 = stack[0];
    stack[0] = v_76;
    goto v_1;
    return onevalue(v_76);
}



// Code for gb_buch!-ev_divides!?

static LispObject CC_gb_buchKev_dividesW(LispObject env,
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
    v_9 = v_3;
    v_8 = v_2;
// end of prologue
    {
        LispObject fn = basic_elt(env, 1); // ev_mtest!?
        return (*qfn2(fn))(fn, v_9, v_8);
    }
}



// Code for cgb_buch!-ev_divides!?

static LispObject CC_cgb_buchKev_dividesW(LispObject env,
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
    v_9 = v_3;
    v_8 = v_2;
// end of prologue
    {
        LispObject fn = basic_elt(env, 1); // ev_mtest!?
        return (*qfn2(fn))(fn, v_9, v_8);
    }
}



// Code for naryrd

static LispObject CC_naryrd(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil);
    stack_popper stack_popper_var(2);
// end of prologue
    {   LispObject fn = basic_elt(env, 1); // mathml
    v_18 = (*qfn0(fn))(fn);
    }
    env = stack[-1];
    v_19 = v_18;
    v_18 = v_19;
    if (v_18 == nil) goto v_9;
    else goto v_10;
v_9:
    v_18 = nil;
    goto v_8;
v_10:
    stack[0] = v_19;
    {   LispObject fn = basic_elt(env, 0); // naryrd
    v_18 = (*qfn0(fn))(fn);
    }
    {
        LispObject v_21 = stack[0];
        return cons(v_21, v_18);
    }
    v_18 = nil;
v_8:
    return onevalue(v_18);
}



// Code for sc_setmat

static LispObject CC_sc_setmat(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_15, v_16;
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
    stack[0] = v_5;
    stack[-1] = v_4;
    v_15 = v_3;
    v_16 = v_2;
// end of prologue
    stack[-2] = v_16;
    v_15 = sub1(v_15);
    env = stack[-3];
    stack[-2] = Lgetv(nil, stack[-2], v_15);
    env = stack[-3];
    v_15 = stack[-1];
    v_16 = sub1(v_15);
    v_15 = stack[0];
    {
        LispObject v_20 = stack[-2];
        return Lputv(nil, v_20, v_16, v_15);
    }
}



// Code for flatindxl

static LispObject CC_flatindxl(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_59, v_60;
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
    v_59 = v_2;
// end of prologue
    stack[-3] = v_59;
    v_59 = stack[-3];
    if (v_59 == nil) goto v_13;
    else goto v_14;
v_13:
    v_59 = nil;
    goto v_8;
v_14:
    v_59 = stack[-3];
    if (!car_legal(v_59)) v_59 = carerror(v_59); else
    v_59 = car(v_59);
    v_60 = v_59;
    v_59 = v_60;
    if (!consp(v_59)) goto v_23;
    else goto v_24;
v_23:
    v_59 = v_60;
    goto v_22;
v_24:
    v_59 = v_60;
    if (!car_legal(v_59)) v_59 = cdrerror(v_59); else
    v_59 = cdr(v_59);
    if (!car_legal(v_59)) v_59 = carerror(v_59); else
    v_59 = car(v_59);
    goto v_22;
    v_59 = nil;
v_22:
    v_59 = ncons(v_59);
    env = stack[-4];
    stack[-1] = v_59;
    stack[-2] = v_59;
v_9:
    v_59 = stack[-3];
    if (!car_legal(v_59)) v_59 = cdrerror(v_59); else
    v_59 = cdr(v_59);
    stack[-3] = v_59;
    v_59 = stack[-3];
    if (v_59 == nil) goto v_36;
    else goto v_37;
v_36:
    v_59 = stack[-2];
    goto v_8;
v_37:
    stack[0] = stack[-1];
    v_59 = stack[-3];
    if (!car_legal(v_59)) v_59 = carerror(v_59); else
    v_59 = car(v_59);
    v_60 = v_59;
    v_59 = v_60;
    if (!consp(v_59)) goto v_47;
    else goto v_48;
v_47:
    v_59 = v_60;
    goto v_46;
v_48:
    v_59 = v_60;
    if (!car_legal(v_59)) v_59 = cdrerror(v_59); else
    v_59 = cdr(v_59);
    if (!car_legal(v_59)) v_59 = carerror(v_59); else
    v_59 = car(v_59);
    goto v_46;
    v_59 = nil;
v_46:
    v_59 = ncons(v_59);
    env = stack[-4];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_59);
    v_59 = stack[-1];
    if (!car_legal(v_59)) v_59 = cdrerror(v_59); else
    v_59 = cdr(v_59);
    stack[-1] = v_59;
    goto v_9;
v_8:
    return onevalue(v_59);
}



// Code for gfrsq

static LispObject CC_gfrsq(LispObject env,
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
    {
        LispObject fn = basic_elt(env, 1); // gfdot
        return (*qfn2(fn))(fn, v_8, v_7);
    }
}



// Code for ncmpchk

static LispObject CC_ncmpchk(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    v_19 = stack[-1];
    v_18 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // noncommuting
    v_18 = (*qfn2(fn))(fn, v_19, v_18);
    }
    env = stack[-2];
    if (v_18 == nil) goto v_7;
    else goto v_8;
v_7:
    v_18 = lisp_true;
    goto v_6;
v_8:
    v_19 = stack[-1];
    v_18 = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // physop!-ordop
        return (*qfn2(fn))(fn, v_19, v_18);
    }
    v_18 = nil;
v_6:
    return onevalue(v_18);
}



// Code for mv!-pow!-!-

static LispObject CC_mvKpowKK(LispObject env,
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



// Code for dp!=mocompare

static LispObject CC_dpMmocompare(LispObject env,
                         LispObject v_2, LispObject v_3)
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
        push(v_2,v_3);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_3,v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_12 = v_3;
    v_13 = v_2;
// end of prologue
    if (!car_legal(v_13)) v_13 = carerror(v_13); else
    v_13 = car(v_13);
    if (!car_legal(v_12)) v_12 = carerror(v_12); else
    v_12 = car(v_12);
    {   LispObject fn = basic_elt(env, 1); // mo_compare
    v_13 = (*qfn2(fn))(fn, v_13, v_12);
    }
    v_12 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
        return Leqn_2(nil, v_13, v_12);
}



// Code for eqdummy

static LispObject CC_eqdummy(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_20, v_21, v_22;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_20 = v_3;
    v_21 = v_2;
// end of prologue
    v_22 = v_21;
    if (v_22 == nil) goto v_7;
    else goto v_8;
v_7:
    v_20 = nil;
    goto v_6;
v_8:
    if (!symbolp(v_21)) v_21 = nil;
    else { v_21 = qfastgets(v_21);
           if (v_21 != nil) { v_21 = elt(v_21, 32); // dummy
#ifdef RECORD_GET
             if (v_21 != SPID_NOPROP)
                record_get(elt(fastget_names, 32), 1);
             else record_get(elt(fastget_names, 32), 0),
                v_21 = nil; }
           else record_get(elt(fastget_names, 32), 0); }
#else
             if (v_21 == SPID_NOPROP) v_21 = nil; }}
#endif
    if (!car_legal(v_21)) v_21 = carerror(v_21); else
    v_21 = car(v_21);
    if (!symbolp(v_20)) v_20 = nil;
    else { v_20 = qfastgets(v_20);
           if (v_20 != nil) { v_20 = elt(v_20, 32); // dummy
#ifdef RECORD_GET
             if (v_20 != SPID_NOPROP)
                record_get(elt(fastget_names, 32), 1);
             else record_get(elt(fastget_names, 32), 0),
                v_20 = nil; }
           else record_get(elt(fastget_names, 32), 0); }
#else
             if (v_20 == SPID_NOPROP) v_20 = nil; }}
#endif
    if (!car_legal(v_20)) v_20 = carerror(v_20); else
    v_20 = car(v_20);
    v_20 = (v_21 == v_20 ? lisp_true : nil);
    goto v_6;
    v_20 = nil;
v_6:
    return onevalue(v_20);
}



// Code for b!:ordexn

static LispObject CC_bTordexn(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_60, v_61;
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
    stack[-3] = nil;
v_11:
    v_60 = stack[-1];
    if (v_60 == nil) goto v_14;
    v_61 = stack[-2];
    v_60 = stack[-1];
    if (!car_legal(v_60)) v_60 = carerror(v_60); else
    v_60 = car(v_60);
    v_60 = static_cast<LispObject>(lessp2(v_61, v_60));
    v_60 = v_60 ? lisp_true : nil;
    env = stack[-4];
    if (v_60 == nil) goto v_14;
    goto v_15;
v_14:
    goto v_10;
v_15:
    v_60 = stack[-1];
    if (!car_legal(v_60)) v_61 = carerror(v_60); else
    v_61 = car(v_60);
    v_60 = stack[-3];
    v_60 = cons(v_61, v_60);
    env = stack[-4];
    stack[-3] = v_60;
    v_60 = stack[-1];
    if (!car_legal(v_60)) v_60 = cdrerror(v_60); else
    v_60 = cdr(v_60);
    stack[-1] = v_60;
    v_60 = stack[0];
    v_60 = (v_60 == nil ? lisp_true : nil);
    stack[0] = v_60;
    goto v_11;
v_10:
    v_60 = stack[-1];
    if (v_60 == nil) goto v_34;
    else goto v_35;
v_34:
    v_61 = stack[-2];
    v_60 = stack[-3];
    v_60 = cons(v_61, v_60);
    env = stack[-4];
    v_60 = Lnreverse(nil, v_60);
    {
        LispObject v_66 = stack[0];
        return cons(v_66, v_60);
    }
v_35:
    v_61 = stack[-2];
    v_60 = stack[-1];
    if (!car_legal(v_60)) v_60 = carerror(v_60); else
    v_60 = car(v_60);
    v_60 = Leqn_2(nil, v_61, v_60);
    env = stack[-4];
    if (v_60 == nil) goto v_46;
    v_60 = nil;
    goto v_8;
v_46:
    v_61 = stack[-2];
    v_60 = stack[-3];
    v_60 = cons(v_61, v_60);
    env = stack[-4];
    v_61 = Lnreverse(nil, v_60);
    env = stack[-4];
    v_60 = stack[-1];
    v_60 = Lnconc(nil, v_61, v_60);
    {
        LispObject v_67 = stack[0];
        return cons(v_67, v_60);
    }
v_8:
    return onevalue(v_60);
}



// Code for horner!-rule

static LispObject CC_hornerKrule(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_126, v_127, v_128;
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
    v_126 = stack[-2];
    if (!consp(v_126)) goto v_13;
    else goto v_14;
v_13:
    v_126 = lisp_true;
    goto v_12;
v_14:
    v_126 = stack[-2];
    if (!car_legal(v_126)) v_126 = carerror(v_126); else
    v_126 = car(v_126);
    v_126 = (consp(v_126) ? nil : lisp_true);
    goto v_12;
    v_126 = nil;
v_12:
    if (v_126 == nil) goto v_10;
    v_126 = stack[-1];
    if (!car_legal(v_126)) v_126 = carerror(v_126); else
    v_126 = car(v_126);
    if (!car_legal(v_126)) v_126 = cdrerror(v_126); else
    v_126 = cdr(v_126);
    v_126 = static_cast<LispObject>(zerop(v_126));
    v_126 = v_126 ? lisp_true : nil;
    env = stack[-6];
    if (v_126 == nil) goto v_25;
    v_126 = stack[-2];
    {
        LispObject fn = basic_elt(env, 1); // !*d2n
        return (*qfn1(fn))(fn, v_126);
    }
v_25:
    v_126 = stack[-2];
    {   LispObject fn = basic_elt(env, 1); // !*d2n
    stack[0] = (*qfn1(fn))(fn, v_126);
    }
    env = stack[-6];
    stack[-2] = stack[-4];
    v_126 = stack[-1];
    if (!car_legal(v_126)) v_126 = carerror(v_126); else
    v_126 = car(v_126);
    if (!car_legal(v_126)) v_127 = cdrerror(v_126); else
    v_127 = cdr(v_126);
    v_126 = stack[-3];
    v_126 = Lexpt(nil, v_127, v_126);
    env = stack[-6];
    v_126 = times2(stack[-2], v_126);
    {
        LispObject v_135 = stack[0];
        return plus2(v_135, v_126);
    }
    v_126 = nil;
    goto v_8;
v_10:
    v_126 = stack[-2];
    if (!car_legal(v_126)) v_126 = carerror(v_126); else
    v_126 = car(v_126);
    if (!car_legal(v_126)) v_126 = carerror(v_126); else
    v_126 = car(v_126);
    if (!car_legal(v_126)) v_127 = carerror(v_126); else
    v_127 = car(v_126);
    v_126 = stack[-1];
    if (!car_legal(v_126)) v_126 = carerror(v_126); else
    v_126 = car(v_126);
    if (!car_legal(v_126)) v_126 = carerror(v_126); else
    v_126 = car(v_126);
    if (equal(v_127, v_126)) goto v_45;
    v_126 = stack[-1];
    if (!car_legal(v_126)) v_126 = carerror(v_126); else
    v_126 = car(v_126);
    if (!car_legal(v_126)) v_126 = cdrerror(v_126); else
    v_126 = cdr(v_126);
    v_126 = static_cast<LispObject>(zerop(v_126));
    v_126 = v_126 ? lisp_true : nil;
    env = stack[-6];
    if (v_126 == nil) goto v_56;
    v_127 = stack[-2];
    v_126 = stack[-1];
    if (!car_legal(v_126)) v_126 = cdrerror(v_126); else
    v_126 = cdr(v_126);
    {
        LispObject fn = basic_elt(env, 2); // evaluate!-in!-order
        return (*qfn2(fn))(fn, v_127, v_126);
    }
v_56:
    v_127 = stack[-2];
    v_126 = stack[-1];
    if (!car_legal(v_126)) v_126 = cdrerror(v_126); else
    v_126 = cdr(v_126);
    {   LispObject fn = basic_elt(env, 2); // evaluate!-in!-order
    stack[0] = (*qfn2(fn))(fn, v_127, v_126);
    }
    env = stack[-6];
    stack[-2] = stack[-4];
    v_126 = stack[-1];
    if (!car_legal(v_126)) v_126 = carerror(v_126); else
    v_126 = car(v_126);
    if (!car_legal(v_126)) v_127 = cdrerror(v_126); else
    v_127 = cdr(v_126);
    v_126 = stack[-3];
    v_126 = Lexpt(nil, v_127, v_126);
    env = stack[-6];
    v_126 = times2(stack[-2], v_126);
    {
        LispObject v_136 = stack[0];
        return plus2(v_136, v_126);
    }
    v_126 = nil;
    goto v_8;
v_45:
    v_126 = stack[-2];
    if (!car_legal(v_126)) v_126 = carerror(v_126); else
    v_126 = car(v_126);
    if (!car_legal(v_126)) v_126 = carerror(v_126); else
    v_126 = car(v_126);
    if (!car_legal(v_126)) v_126 = cdrerror(v_126); else
    v_126 = cdr(v_126);
    stack[-5] = v_126;
    v_126 = stack[-1];
    if (!car_legal(v_126)) v_126 = carerror(v_126); else
    v_126 = car(v_126);
    if (!car_legal(v_126)) v_126 = cdrerror(v_126); else
    v_126 = cdr(v_126);
    v_126 = static_cast<LispObject>(zerop(v_126));
    v_126 = v_126 ? lisp_true : nil;
    env = stack[-6];
    if (v_126 == nil) goto v_92;
    v_126 = stack[-2];
    if (!car_legal(v_126)) v_126 = carerror(v_126); else
    v_126 = car(v_126);
    if (!car_legal(v_126)) v_127 = cdrerror(v_126); else
    v_127 = cdr(v_126);
    v_126 = stack[-1];
    if (!car_legal(v_126)) v_126 = cdrerror(v_126); else
    v_126 = cdr(v_126);
    {   LispObject fn = basic_elt(env, 2); // evaluate!-in!-order
    v_126 = (*qfn2(fn))(fn, v_127, v_126);
    }
    env = stack[-6];
    stack[0] = v_126;
    goto v_90;
v_92:
    v_126 = stack[-2];
    if (!car_legal(v_126)) v_126 = carerror(v_126); else
    v_126 = car(v_126);
    if (!car_legal(v_126)) v_127 = cdrerror(v_126); else
    v_127 = cdr(v_126);
    v_126 = stack[-1];
    if (!car_legal(v_126)) v_126 = cdrerror(v_126); else
    v_126 = cdr(v_126);
    {   LispObject fn = basic_elt(env, 2); // evaluate!-in!-order
    stack[0] = (*qfn2(fn))(fn, v_127, v_126);
    }
    env = stack[-6];
    v_126 = stack[-1];
    if (!car_legal(v_126)) v_126 = carerror(v_126); else
    v_126 = car(v_126);
    if (!car_legal(v_126)) v_128 = cdrerror(v_126); else
    v_128 = cdr(v_126);
    v_127 = stack[-3];
    v_126 = stack[-5];
    v_126 = static_cast<LispObject>(static_cast<std::uintptr_t>(v_127) - static_cast<std::uintptr_t>(v_126) + TAG_FIXNUM);
    v_126 = Lexpt(nil, v_128, v_126);
    env = stack[-6];
    v_126 = times2(stack[-4], v_126);
    env = stack[-6];
    v_126 = plus2(stack[0], v_126);
    env = stack[-6];
    stack[0] = v_126;
    goto v_90;
    stack[0] = nil;
v_90:
    stack[-3] = stack[-5];
    v_126 = stack[-2];
    if (!car_legal(v_126)) stack[-2] = cdrerror(v_126); else
    stack[-2] = cdr(v_126);
    v_126 = stack[-1];
    v_126 = ncons(v_126);
    env = stack[-6];
    {
        LispObject v_137 = stack[0];
        LispObject v_138 = stack[-3];
        LispObject v_139 = stack[-2];
        LispObject fn = basic_elt(env, 0); // horner!-rule
        return (*qfn4up(fn))(fn, v_137, v_138, v_139, v_126);
    }
    goto v_8;
    v_126 = nil;
v_8:
    return onevalue(v_126);
}



// Code for cde_lassoc2

static LispObject CC_cde_lassoc2(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_32, v_33, v_34, v_35;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_34 = v_3;
    v_35 = v_2;
// end of prologue
v_7:
    v_32 = v_34;
    if (v_32 == nil) goto v_10;
    else goto v_11;
v_10:
    v_32 = nil;
    goto v_6;
v_11:
    v_32 = v_34;
    if (!car_legal(v_32)) v_32 = carerror(v_32); else
    v_32 = car(v_32);
    if (!consp(v_32)) goto v_14;
    else goto v_15;
v_14:
    v_32 = basic_elt(env, 1); // "Error: bad alist"
    {
        LispObject fn = basic_elt(env, 2); // rederr
        return (*qfn1(fn))(fn, v_32);
    }
v_15:
    v_33 = v_35;
    v_32 = v_34;
    if (!car_legal(v_32)) v_32 = carerror(v_32); else
    v_32 = car(v_32);
    if (!car_legal(v_32)) v_32 = cdrerror(v_32); else
    v_32 = cdr(v_32);
    if (equal(v_33, v_32)) goto v_20;
    else goto v_21;
v_20:
    v_32 = v_34;
    if (!car_legal(v_32)) v_32 = carerror(v_32); else
    v_32 = car(v_32);
    goto v_6;
v_21:
    v_32 = v_34;
    if (!car_legal(v_32)) v_32 = cdrerror(v_32); else
    v_32 = cdr(v_32);
    v_34 = v_32;
    goto v_7;
    v_32 = nil;
v_6:
    return onevalue(v_32);
}



// Code for gcdf2

static LispObject CC_gcdf2(LispObject env,
                         LispObject v_2, LispObject v_3)
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
// Binding asymplis!*
// FLUIDBIND: reloadenv=7 litvec-offset=1 saveloc=6
{   bind_fluid_stack bind_fluid_var(-7, 1, -6);
    setvalue(basic_elt(env, 1), nil); // asymplis!*
    v_217 = qvalue(basic_elt(env, 2)); // !*anygcd
    if (v_217 == nil) goto v_17;
    else goto v_18;
v_17:
    v_217 = lisp_true;
    goto v_16;
v_18:
    v_217 = stack[-5];
    {   LispObject fn = basic_elt(env, 4); // num!-exponents
    v_217 = (*qfn1(fn))(fn, v_217);
    }
    env = stack[-7];
    if (v_217 == nil) goto v_25;
    else goto v_26;
v_25:
    v_217 = lisp_true;
    goto v_24;
v_26:
    v_217 = stack[-4];
    {   LispObject fn = basic_elt(env, 4); // num!-exponents
    v_217 = (*qfn1(fn))(fn, v_217);
    }
    env = stack[-7];
    v_217 = (v_217 == nil ? lisp_true : nil);
    goto v_24;
    v_217 = nil;
v_24:
    goto v_16;
    v_217 = nil;
v_16:
    if (v_217 == nil) goto v_14;
    v_217 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_10;
v_14:
    v_217 = qvalue(basic_elt(env, 3)); // !*gcd
    if (v_217 == nil) goto v_39;
    v_218 = stack[-5];
    v_217 = stack[-4];
    {   LispObject fn = basic_elt(env, 5); // kernord
    v_217 = (*qfn2(fn))(fn, v_218, v_217);
    }
    env = stack[-7];
    stack[-3] = v_217;
    v_218 = Llength(nil, v_217);
    env = stack[-7];
    v_217 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_217 = static_cast<LispObject>(greaterp2(v_218, v_217));
    v_217 = v_217 ? lisp_true : nil;
    env = stack[-7];
    if (v_217 == nil) goto v_39;
    v_217 = stack[-3];
    {   LispObject fn = basic_elt(env, 6); // setkorder
    v_217 = (*qfn1(fn))(fn, v_217);
    }
    env = stack[-7];
    v_217 = ncons(v_217);
    env = stack[-7];
    stack[-3] = v_217;
    v_217 = stack[-5];
    {   LispObject fn = basic_elt(env, 7); // reorder
    v_217 = (*qfn1(fn))(fn, v_217);
    }
    env = stack[-7];
    stack[-5] = v_217;
    v_217 = stack[-4];
    {   LispObject fn = basic_elt(env, 7); // reorder
    v_217 = (*qfn1(fn))(fn, v_217);
    }
    env = stack[-7];
    stack[-4] = v_217;
    goto v_37;
v_39:
    v_217 = nil;
    stack[-3] = v_217;
    goto v_37;
v_37:
    v_217 = stack[-5];
    if (!car_legal(v_217)) v_217 = carerror(v_217); else
    v_217 = car(v_217);
    if (!car_legal(v_217)) v_217 = carerror(v_217); else
    v_217 = car(v_217);
    if (!car_legal(v_217)) v_218 = carerror(v_217); else
    v_218 = car(v_217);
    v_217 = stack[-4];
    if (!car_legal(v_217)) v_217 = carerror(v_217); else
    v_217 = car(v_217);
    if (!car_legal(v_217)) v_217 = carerror(v_217); else
    v_217 = car(v_217);
    if (!car_legal(v_217)) v_217 = carerror(v_217); else
    v_217 = car(v_217);
    if (v_218 == v_217) goto v_61;
    else goto v_62;
v_61:
    v_217 = stack[-5];
    {   LispObject fn = basic_elt(env, 8); // comfac
    v_217 = (*qfn1(fn))(fn, v_217);
    }
    env = stack[-7];
    stack[-1] = v_217;
    v_217 = stack[-4];
    {   LispObject fn = basic_elt(env, 8); // comfac
    v_217 = (*qfn1(fn))(fn, v_217);
    }
    env = stack[-7];
    stack[0] = v_217;
    v_217 = stack[-1];
    if (!car_legal(v_217)) v_218 = cdrerror(v_217); else
    v_218 = cdr(v_217);
    v_217 = stack[0];
    if (!car_legal(v_217)) v_217 = cdrerror(v_217); else
    v_217 = cdr(v_217);
    {   LispObject fn = basic_elt(env, 9); // gcdf1
    v_217 = (*qfn2(fn))(fn, v_218, v_217);
    }
    env = stack[-7];
    stack[-2] = v_217;
    v_217 = stack[-1];
    {   LispObject fn = basic_elt(env, 10); // comfac!-to!-poly
    v_217 = (*qfn1(fn))(fn, v_217);
    }
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 11); // quotf1
    v_217 = (*qfn2(fn))(fn, stack[-5], v_217);
    }
    env = stack[-7];
    stack[-5] = v_217;
    v_217 = stack[0];
    {   LispObject fn = basic_elt(env, 10); // comfac!-to!-poly
    v_217 = (*qfn1(fn))(fn, v_217);
    }
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 11); // quotf1
    v_217 = (*qfn2(fn))(fn, stack[-4], v_217);
    }
    env = stack[-7];
    stack[-4] = v_217;
    v_217 = qvalue(basic_elt(env, 3)); // !*gcd
    if (v_217 == nil) goto v_95;
    v_218 = stack[-5];
    v_217 = stack[-4];
    {   LispObject fn = basic_elt(env, 12); // gcdk
    v_218 = (*qfn2(fn))(fn, v_218, v_217);
    }
    env = stack[-7];
    v_217 = stack[-2];
    {   LispObject fn = basic_elt(env, 13); // multf
    v_217 = (*qfn2(fn))(fn, v_218, v_217);
    }
    env = stack[-7];
    stack[-2] = v_217;
    goto v_93;
v_95:
    v_217 = stack[-4];
    if (v_217 == nil) goto v_103;
    v_218 = stack[-5];
    v_217 = stack[-4];
    {   LispObject fn = basic_elt(env, 11); // quotf1
    v_217 = (*qfn2(fn))(fn, v_218, v_217);
    }
    env = stack[-7];
    if (v_217 == nil) goto v_103;
    v_218 = stack[-4];
    v_217 = stack[-2];
    {   LispObject fn = basic_elt(env, 13); // multf
    v_217 = (*qfn2(fn))(fn, v_218, v_217);
    }
    env = stack[-7];
    stack[-2] = v_217;
    goto v_93;
v_103:
    v_217 = stack[-5];
    if (v_217 == nil) goto v_114;
    v_218 = stack[-4];
    v_217 = stack[-5];
    {   LispObject fn = basic_elt(env, 11); // quotf1
    v_217 = (*qfn2(fn))(fn, v_218, v_217);
    }
    env = stack[-7];
    if (v_217 == nil) goto v_114;
    v_218 = stack[-5];
    v_217 = stack[-2];
    {   LispObject fn = basic_elt(env, 13); // multf
    v_217 = (*qfn2(fn))(fn, v_218, v_217);
    }
    env = stack[-7];
    stack[-2] = v_217;
    goto v_93;
v_114:
v_93:
    v_217 = stack[-1];
    if (!car_legal(v_217)) v_217 = carerror(v_217); else
    v_217 = car(v_217);
    if (v_217 == nil) goto v_127;
    v_217 = stack[0];
    if (!car_legal(v_217)) v_217 = carerror(v_217); else
    v_217 = car(v_217);
    if (v_217 == nil) goto v_127;
    v_217 = stack[-1];
    if (!car_legal(v_217)) v_217 = carerror(v_217); else
    v_217 = car(v_217);
    if (!car_legal(v_217)) v_218 = cdrerror(v_217); else
    v_218 = cdr(v_217);
    v_217 = stack[0];
    if (!car_legal(v_217)) v_217 = carerror(v_217); else
    v_217 = car(v_217);
    if (!car_legal(v_217)) v_217 = cdrerror(v_217); else
    v_217 = cdr(v_217);
    v_217 = static_cast<LispObject>(greaterp2(v_218, v_217));
    v_217 = v_217 ? lisp_true : nil;
    env = stack[-7];
    if (v_217 == nil) goto v_137;
    v_217 = stack[0];
    if (!car_legal(v_217)) v_218 = carerror(v_217); else
    v_218 = car(v_217);
    v_217 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_217 = cons(v_218, v_217);
    env = stack[-7];
    v_218 = ncons(v_217);
    env = stack[-7];
    v_217 = stack[-2];
    {   LispObject fn = basic_elt(env, 13); // multf
    v_217 = (*qfn2(fn))(fn, v_218, v_217);
    }
    env = stack[-7];
    stack[-2] = v_217;
    goto v_135;
v_137:
    v_217 = stack[-1];
    if (!car_legal(v_217)) v_218 = carerror(v_217); else
    v_218 = car(v_217);
    v_217 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_217 = cons(v_218, v_217);
    env = stack[-7];
    v_218 = ncons(v_217);
    env = stack[-7];
    v_217 = stack[-2];
    {   LispObject fn = basic_elt(env, 13); // multf
    v_217 = (*qfn2(fn))(fn, v_218, v_217);
    }
    env = stack[-7];
    stack[-2] = v_217;
    goto v_135;
v_135:
    goto v_125;
v_127:
v_125:
    goto v_60;
v_62:
    v_217 = stack[-5];
    if (!car_legal(v_217)) v_217 = carerror(v_217); else
    v_217 = car(v_217);
    if (!car_legal(v_217)) v_217 = carerror(v_217); else
    v_217 = car(v_217);
    if (!car_legal(v_217)) v_217 = carerror(v_217); else
    v_217 = car(v_217);
    {   LispObject fn = basic_elt(env, 14); // noncomp
    v_217 = (*qfn1(fn))(fn, v_217);
    }
    env = stack[-7];
    if (v_217 == nil) goto v_162;
    v_217 = stack[-4];
    if (!car_legal(v_217)) v_217 = carerror(v_217); else
    v_217 = car(v_217);
    if (!car_legal(v_217)) v_217 = carerror(v_217); else
    v_217 = car(v_217);
    if (!car_legal(v_217)) v_217 = carerror(v_217); else
    v_217 = car(v_217);
    {   LispObject fn = basic_elt(env, 14); // noncomp
    v_217 = (*qfn1(fn))(fn, v_217);
    }
    env = stack[-7];
    if (v_217 == nil) goto v_162;
    v_219 = stack[-5];
    v_218 = stack[-4];
    v_217 = stack[-4];
    if (!car_legal(v_217)) v_217 = carerror(v_217); else
    v_217 = car(v_217);
    if (!car_legal(v_217)) v_217 = carerror(v_217); else
    v_217 = car(v_217);
    if (!car_legal(v_217)) v_217 = carerror(v_217); else
    v_217 = car(v_217);
    {   LispObject fn = basic_elt(env, 15); // gcdfnc
    v_217 = (*qfn3(fn))(fn, v_219, v_218, v_217);
    }
    env = stack[-7];
    stack[-2] = v_217;
    goto v_60;
v_162:
    v_217 = stack[-5];
    if (!car_legal(v_217)) v_217 = carerror(v_217); else
    v_217 = car(v_217);
    if (!car_legal(v_217)) v_217 = carerror(v_217); else
    v_217 = car(v_217);
    if (!car_legal(v_217)) v_218 = carerror(v_217); else
    v_218 = car(v_217);
    v_217 = stack[-4];
    if (!car_legal(v_217)) v_217 = carerror(v_217); else
    v_217 = car(v_217);
    if (!car_legal(v_217)) v_217 = carerror(v_217); else
    v_217 = car(v_217);
    if (!car_legal(v_217)) v_217 = carerror(v_217); else
    v_217 = car(v_217);
    {   LispObject fn = basic_elt(env, 16); // ordop
    v_217 = (*qfn2(fn))(fn, v_218, v_217);
    }
    env = stack[-7];
    if (v_217 == nil) goto v_183;
    v_217 = stack[-5];
    {   LispObject fn = basic_elt(env, 8); // comfac
    v_217 = (*qfn1(fn))(fn, v_217);
    }
    env = stack[-7];
    if (!car_legal(v_217)) v_218 = cdrerror(v_217); else
    v_218 = cdr(v_217);
    v_217 = stack[-4];
    {   LispObject fn = basic_elt(env, 9); // gcdf1
    v_217 = (*qfn2(fn))(fn, v_218, v_217);
    }
    env = stack[-7];
    stack[-2] = v_217;
    goto v_60;
v_183:
    v_217 = stack[-4];
    {   LispObject fn = basic_elt(env, 8); // comfac
    v_217 = (*qfn1(fn))(fn, v_217);
    }
    env = stack[-7];
    if (!car_legal(v_217)) v_218 = cdrerror(v_217); else
    v_218 = cdr(v_217);
    v_217 = stack[-5];
    {   LispObject fn = basic_elt(env, 9); // gcdf1
    v_217 = (*qfn2(fn))(fn, v_218, v_217);
    }
    env = stack[-7];
    stack[-2] = v_217;
    goto v_60;
v_60:
    v_217 = stack[-3];
    if (v_217 == nil) goto v_208;
    v_217 = stack[-3];
    if (!car_legal(v_217)) v_217 = carerror(v_217); else
    v_217 = car(v_217);
    {   LispObject fn = basic_elt(env, 6); // setkorder
    v_217 = (*qfn1(fn))(fn, v_217);
    }
    env = stack[-7];
    v_217 = stack[-2];
    {   LispObject fn = basic_elt(env, 7); // reorder
    v_217 = (*qfn1(fn))(fn, v_217);
    }
    stack[-2] = v_217;
    goto v_206;
v_208:
v_206:
    v_217 = stack[-2];
v_10:
    ;}  // end of a binding scope
    return onevalue(v_217);
}



// Code for qqe_arg!-check!-b

static LispObject CC_qqe_argKcheckKb(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_57;
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
    v_57 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // qqe_id!-nyt!-branchb
    v_57 = (*qfn1(fn))(fn, v_57);
    }
    env = stack[-1];
    if (v_57 == nil) goto v_8;
    else goto v_9;
v_8:
    v_57 = nil;
    goto v_5;
v_9:
    v_57 = stack[0];
    if (!consp(v_57)) goto v_17;
    else goto v_18;
v_17:
    v_57 = stack[0];
    v_57 = (is_number(v_57) ? lisp_true : nil);
    v_57 = (v_57 == nil ? lisp_true : nil);
    goto v_16;
v_18:
    v_57 = nil;
    goto v_16;
    v_57 = nil;
v_16:
    if (v_57 == nil) goto v_14;
    v_57 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // qqe_qtidp
    v_57 = (*qfn1(fn))(fn, v_57);
    }
    env = stack[-1];
    if (v_57 == nil) goto v_29;
    v_57 = nil;
    goto v_5;
v_29:
    v_57 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // qqe_nytidp
    v_57 = (*qfn1(fn))(fn, v_57);
    }
    env = stack[-1];
    if (v_57 == nil) goto v_34;
    v_57 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // qqe_btid
    v_57 = (*qfn1(fn))(fn, v_57);
    }
    env = stack[-1];
    v_57 = stack[0];
    {   LispObject fn = basic_elt(env, 5); // qqe_add2rollbackids
    v_57 = (*qfn1(fn))(fn, v_57);
    }
    v_57 = lisp_true;
    goto v_5;
v_34:
    v_57 = lisp_true;
    goto v_5;
    goto v_7;
v_14:
    v_57 = stack[0];
    if (!consp(v_57)) goto v_48;
    v_57 = stack[0];
    {   LispObject fn = basic_elt(env, 6); // qqe_arg!-check
    v_57 = (*qfn1(fn))(fn, v_57);
    }
    v_57 = lisp_true;
    goto v_5;
v_48:
    v_57 = lisp_true;
    goto v_5;
v_7:
    v_57 = nil;
v_5:
    return onevalue(v_57);
}



// Code for rl_susibin

static LispObject CC_rl_susibin(LispObject env,
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
    stack[0] = qvalue(basic_elt(env, 1)); // rl_susibin!*
    v_10 = list2(v_11, v_10);
    env = stack[-1];
    {
        LispObject v_13 = stack[0];
        LispObject fn = basic_elt(env, 2); // apply
        return (*qfn2(fn))(fn, v_13, v_10);
    }
}



// Code for aex_varl

static LispObject CC_aex_varl(LispObject env,
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
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_8 = v_2;
// end of prologue
    {   LispObject fn = basic_elt(env, 1); // aex_ex
    v_8 = (*qfn1(fn))(fn, v_8);
    }
    env = stack[0];
    if (!car_legal(v_8)) v_8 = carerror(v_8); else
    v_8 = car(v_8);
    {
        LispObject fn = basic_elt(env, 2); // kernels
        return (*qfn1(fn))(fn, v_8);
    }
}



// Code for omvir

static LispObject CC_omvir(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil);
    stack_popper stack_popper_var(2);
// end of prologue
// Binding name
// FLUIDBIND: reloadenv=1 litvec-offset=1 saveloc=0
{   bind_fluid_stack bind_fluid_var(-1, 1, 0);
    setvalue(basic_elt(env, 1), nil); // name
    v_33 = qvalue(basic_elt(env, 2)); // atts
    v_32 = basic_elt(env, 1); // name
    {   LispObject fn = basic_elt(env, 6); // find
    v_32 = (*qfn2(fn))(fn, v_33, v_32);
    }
    env = stack[-1];
    setvalue(basic_elt(env, 1), v_32); // name
    v_33 = qvalue(basic_elt(env, 2)); // atts
    v_32 = basic_elt(env, 3); // hex
    {   LispObject fn = basic_elt(env, 6); // find
    v_32 = (*qfn2(fn))(fn, v_33, v_32);
    }
    env = stack[-1];
    if (v_32 == nil) goto v_13;
    v_33 = basic_elt(env, 4); // "wrong att"
    v_32 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    {   LispObject fn = basic_elt(env, 7); // errorml
    v_32 = (*qfn2(fn))(fn, v_33, v_32);
    }
    env = stack[-1];
    goto v_11;
v_13:
v_11:
    v_33 = qvalue(basic_elt(env, 2)); // atts
    v_32 = basic_elt(env, 5); // dec
    {   LispObject fn = basic_elt(env, 6); // find
    v_32 = (*qfn2(fn))(fn, v_33, v_32);
    }
    env = stack[-1];
    if (v_32 == nil) goto v_23;
    v_33 = basic_elt(env, 4); // "wrong att"
    v_32 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    {   LispObject fn = basic_elt(env, 7); // errorml
    v_32 = (*qfn2(fn))(fn, v_33, v_32);
    }
    env = stack[-1];
    goto v_21;
v_23:
v_21:
    v_32 = qvalue(basic_elt(env, 1)); // name
    ;}  // end of a binding scope
    return onevalue(v_32);
}



// Code for spquotematrix

static LispObject CC_spquotematrix(LispObject env,
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
    v_5 = basic_elt(env, 1); // sparse
    return onevalue(v_5);
}



// Code for vdpzero

static LispObject CC_vdpzero(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_5;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// end of prologue
    v_5 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {
        LispObject fn = basic_elt(env, 1); // a2vdp
        return (*qfn1(fn))(fn, v_5);
    }
}



// Code for tokquote

static LispObject CC_tokquote(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
    stack_popper stack_popper_var(1);
// end of prologue
    {   LispObject fn = basic_elt(env, 5); // readch1
    v_11 = (*qfn0(fn))(fn);
    }
    env = stack[0];
    setvalue(basic_elt(env, 1), v_11); // crchar!*
    {   LispObject fn = basic_elt(env, 6); // rread
    v_11 = (*qfn0(fn))(fn);
    }
    env = stack[0];
    v_11 = Lmkquote(nil, v_11);
    env = stack[0];
    setvalue(basic_elt(env, 2), v_11); // nxtsym!*
    v_11 = nil;
    setvalue(basic_elt(env, 3), v_11); // curescaped!*
    v_11 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    setvalue(basic_elt(env, 4), v_11); // ttype!*
    v_11 = qvalue(basic_elt(env, 2)); // nxtsym!*
    return onevalue(v_11);
}



// Code for red!-ratios1

static LispObject CC_redKratios1(LispObject env,
                         LispObject v_2, LispObject v_3)
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
v_1:
    v_31 = stack[-3];
    if (v_31 == nil) goto v_7;
    else goto v_8;
v_7:
    v_31 = nil;
    goto v_6;
v_8:
    v_31 = stack[-3];
    if (!car_legal(v_31)) stack[-4] = cdrerror(v_31); else
    stack[-4] = cdr(v_31);
    v_31 = stack[-2];
    if (!car_legal(v_31)) stack[-1] = cdrerror(v_31); else
    stack[-1] = cdr(v_31);
    v_31 = stack[-3];
    if (!car_legal(v_31)) stack[0] = carerror(v_31); else
    stack[0] = car(v_31);
    v_31 = stack[-2];
    if (!car_legal(v_31)) v_31 = carerror(v_31); else
    v_31 = car(v_31);
    v_31 = ncons(v_31);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 1); // red!-ratios2
    v_31 = (*qfn4up(fn))(fn, stack[-4], stack[-1], stack[0], v_31);
    }
    env = stack[-5];
    if (v_31 == nil) goto v_15;
    else goto v_14;
v_15:
    v_31 = stack[-3];
    if (!car_legal(v_31)) v_32 = cdrerror(v_31); else
    v_32 = cdr(v_31);
    v_31 = stack[-2];
    if (!car_legal(v_31)) v_31 = cdrerror(v_31); else
    v_31 = cdr(v_31);
    stack[-3] = v_32;
    stack[-2] = v_31;
    goto v_1;
v_14:
    goto v_6;
    v_31 = nil;
v_6:
    return onevalue(v_31);
}



// Code for multop

static LispObject CC_multop(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_29 = v_2;
// end of prologue
    v_27 = qvalue(basic_elt(env, 1)); // kord!*
    if (v_27 == nil) goto v_7;
    else goto v_8;
v_7:
    v_28 = v_29;
    v_27 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_27 = cons(v_28, v_27);
    env = stack[-1];
    v_28 = ncons(v_27);
    env = stack[-1];
    v_27 = stack[0];
    {
        LispObject fn = basic_elt(env, 3); // multf
        return (*qfn2(fn))(fn, v_28, v_27);
    }
v_8:
    v_27 = v_29;
    if (!car_legal(v_27)) v_28 = carerror(v_27); else
    v_28 = car(v_27);
    v_27 = basic_elt(env, 2); // k!*
    if (v_28 == v_27) goto v_16;
    else goto v_17;
v_16:
    v_27 = stack[0];
    goto v_6;
v_17:
    v_28 = v_29;
    v_27 = stack[0];
    {
        LispObject fn = basic_elt(env, 4); // rmultpf
        return (*qfn2(fn))(fn, v_28, v_27);
    }
    v_27 = nil;
v_6:
    return onevalue(v_27);
}



// Code for red_divtest

static LispObject CC_red_divtest(LispObject env,
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
v_7:
    v_28 = stack[-1];
    if (v_28 == nil) goto v_10;
    else goto v_11;
v_10:
    v_28 = nil;
    goto v_6;
v_11:
    v_28 = stack[-1];
    if (!car_legal(v_28)) v_28 = carerror(v_28); else
    v_28 = car(v_28);
    {   LispObject fn = basic_elt(env, 1); // bas_dpoly
    v_28 = (*qfn1(fn))(fn, v_28);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 2); // dp_lmon
    v_29 = (*qfn1(fn))(fn, v_28);
    }
    env = stack[-2];
    v_28 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // mo_vdivides!?
    v_28 = (*qfn2(fn))(fn, v_29, v_28);
    }
    env = stack[-2];
    if (v_28 == nil) goto v_15;
    v_28 = stack[-1];
    if (!car_legal(v_28)) v_28 = carerror(v_28); else
    v_28 = car(v_28);
    goto v_6;
v_15:
    v_28 = stack[-1];
    if (!car_legal(v_28)) v_28 = cdrerror(v_28); else
    v_28 = cdr(v_28);
    stack[-1] = v_28;
    goto v_7;
    v_28 = nil;
v_6:
    return onevalue(v_28);
}



// Code for pdif

static LispObject CC_pdif(LispObject env,
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
    {   LispObject fn = basic_elt(env, 1); // pneg
    v_9 = (*qfn1(fn))(fn, v_9);
    }
    env = stack[-1];
    {
        LispObject v_12 = stack[0];
        LispObject fn = basic_elt(env, 2); // psum
        return (*qfn2(fn))(fn, v_12, v_9);
    }
}



// Code for pv_intequiv

static LispObject CC_pv_intequiv(LispObject env,
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
    v_15 = v_2;
// end of prologue
    v_16 = v_15;
    if (!car_legal(v_16)) v_16 = cdrerror(v_16); else
    v_16 = cdr(v_16);
    if (!consp(v_16)) goto v_6;
    else goto v_7;
v_6:
    if (!car_legal(v_15)) v_15 = cdrerror(v_15); else
    v_15 = cdr(v_15);
    goto v_5;
v_7:
    v_15 = nil;
    goto v_5;
    v_15 = nil;
v_5:
    return onevalue(v_15);
}



// Code for crprcd

static LispObject CC_crprcd(LispObject env,
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
// space for vars preserved across procedure calls
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_17 = stack[0];
    if (!car_legal(v_17)) v_17 = cdrerror(v_17); else
    v_17 = cdr(v_17);
    if (!car_legal(v_17)) v_17 = carerror(v_17); else
    v_17 = car(v_17);
    {   LispObject fn = basic_elt(env, 1); // convprec!*
    stack[-1] = (*qfn1(fn))(fn, v_17);
    }
    env = stack[-2];
    v_17 = stack[0];
    if (!car_legal(v_17)) v_17 = cdrerror(v_17); else
    v_17 = cdr(v_17);
    if (!car_legal(v_17)) v_17 = cdrerror(v_17); else
    v_17 = cdr(v_17);
    {   LispObject fn = basic_elt(env, 1); // convprec!*
    v_17 = (*qfn1(fn))(fn, v_17);
    }
    v_18 = stack[-1];
    return cons(v_18, v_17);
}



// Code for simpexpon1

static LispObject CC_simpexpon1(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_42, v_43;
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
    v_42 = qvalue(basic_elt(env, 1)); // !*numval
    if (v_42 == nil) goto v_8;
    v_43 = qvalue(basic_elt(env, 2)); // dmode!*
    v_42 = basic_elt(env, 3); // !:rd!:
    if (v_43 == v_42) goto v_14;
    else goto v_15;
v_14:
    v_42 = lisp_true;
    goto v_13;
v_15:
    v_43 = qvalue(basic_elt(env, 2)); // dmode!*
    v_42 = basic_elt(env, 4); // !:cr!:
    v_42 = (v_43 == v_42 ? lisp_true : nil);
    goto v_13;
    v_42 = nil;
v_13:
    if (v_42 == nil) goto v_8;
    v_43 = stack[-1];
    v_42 = stack[-2];
        return Lapply1(nil, v_43, v_42);
v_8:
// Binding dmode!*
// FLUIDBIND: reloadenv=4 litvec-offset=2 saveloc=3
{   bind_fluid_stack bind_fluid_var(-4, 2, -3);
    setvalue(basic_elt(env, 2), nil); // dmode!*
// Binding alglist!*
// FLUIDBIND: reloadenv=4 litvec-offset=5 saveloc=0
{   bind_fluid_stack bind_fluid_var(-4, 5, 0);
    setvalue(basic_elt(env, 5), nil); // alglist!*
    v_42 = nil;
    v_42 = ncons(v_42);
    env = stack[-4];
    setvalue(basic_elt(env, 5), v_42); // alglist!*
    v_43 = stack[-1];
    v_42 = stack[-2];
    v_42 = Lapply1(nil, v_43, v_42);
    ;}  // end of a binding scope
    ;}  // end of a binding scope
    goto v_6;
    v_42 = nil;
v_6:
    return onevalue(v_42);
}



// Code for talp_simplatrinv

static LispObject CC_talp_simplatrinv(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[0] = v_4;
    stack[-1] = v_3;
    stack[-2] = v_2;
// end of prologue
    v_70 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // talp_simplt
    v_70 = (*qfn1(fn))(fn, v_70);
    }
    env = stack[-3];
    stack[0] = v_70;
    v_70 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // talp_invp
    v_70 = (*qfn1(fn))(fn, v_70);
    }
    env = stack[-3];
    if (v_70 == nil) goto v_11;
    v_70 = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // talp_invp
    v_70 = (*qfn1(fn))(fn, v_70);
    }
    env = stack[-3];
    if (v_70 == nil) goto v_17;
    v_70 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // talp_simplt
    v_70 = (*qfn1(fn))(fn, v_70);
    }
    env = stack[-3];
    stack[-1] = v_70;
    v_70 = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // talp_invp
    v_70 = (*qfn1(fn))(fn, v_70);
    }
    env = stack[-3];
    if (v_70 == nil) goto v_25;
    v_71 = stack[-1];
    v_70 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // talp_eqtp
    v_70 = (*qfn2(fn))(fn, v_71, v_70);
    }
    env = stack[-3];
    if (v_70 == nil) goto v_31;
    v_70 = stack[-2];
    v_71 = basic_elt(env, 1); // equal
    if (v_70 == v_71) goto v_37;
    else goto v_38;
v_37:
    v_70 = lisp_true;
    goto v_36;
v_38:
    v_70 = nil;
    goto v_36;
    v_70 = nil;
v_36:
    goto v_29;
v_31:
    v_72 = stack[-2];
    v_71 = stack[-1];
    v_70 = stack[0];
    {
        LispObject fn = basic_elt(env, 5); // talp_mk2
        return (*qfn3(fn))(fn, v_72, v_71, v_70);
    }
    v_70 = nil;
v_29:
    goto v_23;
v_25:
    v_72 = stack[-2];
    v_71 = stack[-1];
    v_70 = stack[0];
    {
        LispObject fn = basic_elt(env, 6); // talp_simplat2
        return (*qfn3(fn))(fn, v_72, v_71, v_70);
    }
    v_70 = nil;
v_23:
    goto v_15;
v_17:
    v_70 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // talp_simplt
    v_71 = (*qfn1(fn))(fn, v_70);
    }
    env = stack[-3];
    v_70 = stack[0];
    {
        LispObject v_76 = stack[-2];
        LispObject fn = basic_elt(env, 5); // talp_mk2
        return (*qfn3(fn))(fn, v_76, v_71, v_70);
    }
    v_70 = nil;
v_15:
    goto v_9;
v_11:
    v_72 = stack[-2];
    v_71 = stack[-1];
    v_70 = stack[0];
    {
        LispObject fn = basic_elt(env, 6); // talp_simplat2
        return (*qfn3(fn))(fn, v_72, v_71, v_70);
    }
    v_70 = nil;
v_9:
    return onevalue(v_70);
}



// Code for mkzl

static LispObject CC_mkzl(LispObject env,
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
    v_23 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
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



setup_type const u12_setup[] =
{
    {"simp",                    G0W1,     CC_simp,  G2W1,     G3W1,     G4W1},
    {"red-weight-less-p",       G0W2,     G1W2,     CC_redKweightKlessKp,G3W2,G4W2},
    {"pv_times3",               G0W2,     G1W2,     CC_pv_times3,G3W2,  G4W2},
    {"raiseind:",               G0W1,     CC_raiseindT,G2W1,  G3W1,     G4W1},
    {"set-general-modulus",     G0W1,     CC_setKgeneralKmodulus,G2W1,G3W1,G4W1},
    {"ra_budan-transform",      G0W1,     CC_ra_budanKtransform,G2W1,G3W1,G4W1},
    {"lalr_make_compressed_action_row",G0W1,CC_lalr_make_compressed_action_row,G2W1,G3W1,G4W1},
    {"ofsf_smwcpknowl",         G0W1,     CC_ofsf_smwcpknowl,G2W1,G3W1, G4W1},
    {"color1",                  G0W3,     G1W3,     G2W3,     CC_color1,G4W3},
    {"cl_simpl",                G0W3,     G1W3,     G2W3,     CC_cl_simpl,G4W3},
    {"ibalp_clausep",           G0W1,     CC_ibalp_clausep,G2W1,G3W1,   G4W1},
    {"omiir",                   CC_omiir, G1W0,     G2W0,     G3W0,     G4W0},
    {"writepri",                G0W2,     G1W2,     CC_writepri,G3W2,   G4W2},
    {"argnochk",                G0W1,     CC_argnochk,G2W1,   G3W1,     G4W1},
    {"compactfmatch2",          G0W1,     CC_compactfmatch2,G2W1,G3W1,  G4W1},
    {"make-term",               G0W3,     G1W3,     G2W3,     CC_makeKterm,G4W3},
    {"listtest",                G0W3,     G1W3,     G2W3,     CC_listtest,G4W3},
    {"lalr_prin_action",        G0W1,     CC_lalr_prin_action,G2W1,G3W1,G4W1},
    {"formprogn",               G0W3,     G1W3,     G2W3,     CC_formprogn,G4W3},
    {"processcarpartitie1",     G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_processcarpartitie1},
    {"subs3f1",                 G0W3,     G1W3,     G2W3,     CC_subs3f1,G4W3},
    {"get_rep_matrix_in",       G0W2,     G1W2,     CC_get_rep_matrix_in,G3W2,G4W2},
    {"cl_fvarl",                G0W1,     CC_cl_fvarl,G2W1,   G3W1,     G4W1},
    {"qsort",                   G0W1,     CC_qsort, G2W1,     G3W1,     G4W1},
    {"integerom",               G0W1,     CC_integerom,G2W1,  G3W1,     G4W1},
    {"c:extadd",                G0W2,     G1W2,     CC_cTextadd,G3W2,   G4W2},
    {"lessp:",                  G0W2,     G1W2,     CC_lesspT,G3W2,     G4W2},
    {"condterpri",              CC_condterpri,G1W0, G2W0,     G3W0,     G4W0},
    {"red_better",              G0W2,     G1W2,     CC_red_better,G3W2, G4W2},
    {"gperm3",                  G0W2,     G1W2,     CC_gperm3,G3W2,     G4W2},
    {"ordn",                    G0W1,     CC_ordn,  G2W1,     G3W1,     G4W1},
    {"rnminus:",                G0W1,     CC_rnminusT,G2W1,   G3W1,     G4W1},
    {"split_f",                 G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_split_f},
    {"rl_simp",                 G0W1,     CC_rl_simp,G2W1,    G3W1,     G4W1},
    {"get_group_in",            G0W1,     CC_get_group_in,G2W1,G3W1,    G4W1},
    {"ibalp_simpterm",          G0W1,     CC_ibalp_simpterm,G2W1,G3W1,  G4W1},
    {"gb_buch-ev_divides?",     G0W2,     G1W2,     CC_gb_buchKev_dividesW,G3W2,G4W2},
    {"cgb_buch-ev_divides?",    G0W2,     G1W2,     CC_cgb_buchKev_dividesW,G3W2,G4W2},
    {"naryrd",                  CC_naryrd,G1W0,     G2W0,     G3W0,     G4W0},
    {"sc_setmat",               G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_sc_setmat},
    {"flatindxl",               G0W1,     CC_flatindxl,G2W1,  G3W1,     G4W1},
    {"gfrsq",                   G0W1,     CC_gfrsq, G2W1,     G3W1,     G4W1},
    {"ncmpchk",                 G0W2,     G1W2,     CC_ncmpchk,G3W2,    G4W2},
    {"mv-pow--",                G0W2,     G1W2,     CC_mvKpowKK,G3W2,   G4W2},
    {"dp=mocompare",            G0W2,     G1W2,     CC_dpMmocompare,G3W2,G4W2},
    {"eqdummy",                 G0W2,     G1W2,     CC_eqdummy,G3W2,    G4W2},
    {"b:ordexn",                G0W2,     G1W2,     CC_bTordexn,G3W2,   G4W2},
    {"horner-rule",             G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_hornerKrule},
    {"cde_lassoc2",             G0W2,     G1W2,     CC_cde_lassoc2,G3W2,G4W2},
    {"gcdf2",                   G0W2,     G1W2,     CC_gcdf2, G3W2,     G4W2},
    {"qqe_arg-check-b",         G0W1,     CC_qqe_argKcheckKb,G2W1,G3W1, G4W1},
    {"rl_susibin",              G0W2,     G1W2,     CC_rl_susibin,G3W2, G4W2},
    {"aex_varl",                G0W1,     CC_aex_varl,G2W1,   G3W1,     G4W1},
    {"omvir",                   CC_omvir, G1W0,     G2W0,     G3W0,     G4W0},
    {"spquotematrix",           G0W1,     CC_spquotematrix,G2W1,G3W1,   G4W1},
    {"vdpzero",                 CC_vdpzero,G1W0,    G2W0,     G3W0,     G4W0},
    {"tokquote",                CC_tokquote,G1W0,   G2W0,     G3W0,     G4W0},
    {"red-ratios1",             G0W2,     G1W2,     CC_redKratios1,G3W2,G4W2},
    {"multop",                  G0W2,     G1W2,     CC_multop,G3W2,     G4W2},
    {"red_divtest",             G0W2,     G1W2,     CC_red_divtest,G3W2,G4W2},
    {"pdif",                    G0W2,     G1W2,     CC_pdif,  G3W2,     G4W2},
    {"pv_intequiv",             G0W1,     CC_pv_intequiv,G2W1,G3W1,     G4W1},
    {"crprcd",                  G0W1,     CC_crprcd,G2W1,     G3W1,     G4W1},
    {"simpexpon1",              G0W2,     G1W2,     CC_simpexpon1,G3W2, G4W2},
    {"talp_simplatrinv",        G0W3,     G1W3,     G2W3,     CC_talp_simplatrinv,G4W3},
    {"mkzl",                    G0W1,     CC_mkzl,  G2W1,     G3W1,     G4W1},
    {nullptr, 
        reinterpret_cast<no_args *>(
            reinterpret_cast<uintptr_t>("u12")),
        reinterpret_cast<one_arg *>(
            reinterpret_cast<uintptr_t>("169557 2701747 1894550")),
        nullptr, nullptr, nullptr}
};

// end of generated code
