
// $destdir/u39.c        Machine generated C code

// $Id$

#include "config.h"
#include "headers.h"



// Code for lex_keywords

static LispObject CC_lex_keywords(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_261, v_262, v_263, v_264;
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
    v_261 = v_2;
// end of prologue
    stack[-4] = v_261;
v_7:
    v_261 = stack[-4];
    if (v_261 == nil) goto v_11;
    else goto v_12;
v_11:
    v_261 = nil;
    goto v_6;
v_12:
    v_261 = stack[-4];
    if (!car_legal(v_261)) v_261 = carerror(v_261); else
    v_261 = car(v_261);
    stack[-3] = v_261;
    v_261 = stack[-3];
    {   LispObject fn = basic_elt(env, 14); // widestring2list
    v_261 = (*qfn1(fn))(fn, v_261);
    }
    env = stack[-6];
    stack[-2] = v_261;
    v_261 = stack[-2];
    if (v_261 == nil) goto v_27;
    else goto v_28;
v_27:
    v_261 = basic_elt(env, 1); // "Empty string passed to lex_keywords"
    {   LispObject fn = basic_elt(env, 15); // rederr
    v_261 = (*qfn1(fn))(fn, v_261);
    }
    env = stack[-6];
    goto v_26;
v_28:
v_26:
    v_261 = stack[-2];
    if (!car_legal(v_261)) v_262 = carerror(v_261); else
    v_262 = car(v_261);
    v_261 = static_cast<LispObject>(1040)+TAG_FIXNUM; // 65
    v_261 = static_cast<LispObject>(geq2(v_262, v_261));
    v_261 = v_261 ? lisp_true : nil;
    env = stack[-6];
    if (v_261 == nil) goto v_37;
    else goto v_38;
v_37:
    v_261 = nil;
    goto v_36;
v_38:
    v_261 = stack[-2];
    if (!car_legal(v_261)) v_262 = carerror(v_261); else
    v_262 = car(v_261);
    v_261 = static_cast<LispObject>(1440)+TAG_FIXNUM; // 90
    v_261 = static_cast<LispObject>(lesseq2(v_262, v_261));
    v_261 = v_261 ? lisp_true : nil;
    env = stack[-6];
    goto v_36;
    v_261 = nil;
v_36:
    if (v_261 == nil) goto v_34;
    else goto v_33;
v_34:
    v_261 = stack[-2];
    if (!car_legal(v_261)) v_262 = carerror(v_261); else
    v_262 = car(v_261);
    v_261 = static_cast<LispObject>(1552)+TAG_FIXNUM; // 97
    v_261 = static_cast<LispObject>(geq2(v_262, v_261));
    v_261 = v_261 ? lisp_true : nil;
    env = stack[-6];
    if (v_261 == nil) goto v_52;
    else goto v_53;
v_52:
    v_261 = nil;
    goto v_51;
v_53:
    v_261 = stack[-2];
    if (!car_legal(v_261)) v_262 = carerror(v_261); else
    v_262 = car(v_261);
    v_261 = static_cast<LispObject>(1952)+TAG_FIXNUM; // 122
    v_261 = static_cast<LispObject>(lesseq2(v_262, v_261));
    v_261 = v_261 ? lisp_true : nil;
    env = stack[-6];
    goto v_51;
    v_261 = nil;
v_51:
v_33:
    stack[-5] = v_261;
    v_261 = stack[-2];
    if (!car_legal(v_261)) v_261 = cdrerror(v_261); else
    v_261 = cdr(v_261);
    stack[-1] = v_261;
v_68:
    v_261 = stack[-1];
    if (v_261 == nil) goto v_73;
    else goto v_74;
v_73:
    goto v_67;
v_74:
    v_261 = stack[-1];
    if (!car_legal(v_261)) v_261 = carerror(v_261); else
    v_261 = car(v_261);
    stack[0] = v_261;
    v_262 = stack[0];
    v_261 = static_cast<LispObject>(1040)+TAG_FIXNUM; // 65
    v_261 = static_cast<LispObject>(geq2(v_262, v_261));
    v_261 = v_261 ? lisp_true : nil;
    env = stack[-6];
    if (v_261 == nil) goto v_88;
    v_262 = stack[0];
    v_261 = static_cast<LispObject>(1440)+TAG_FIXNUM; // 90
    v_261 = static_cast<LispObject>(lesseq2(v_262, v_261));
    v_261 = v_261 ? lisp_true : nil;
    env = stack[-6];
    if (v_261 == nil) goto v_88;
    goto v_87;
v_88:
    v_262 = stack[0];
    v_261 = static_cast<LispObject>(1552)+TAG_FIXNUM; // 97
    v_261 = static_cast<LispObject>(geq2(v_262, v_261));
    v_261 = v_261 ? lisp_true : nil;
    env = stack[-6];
    if (v_261 == nil) goto v_97;
    v_262 = stack[0];
    v_261 = static_cast<LispObject>(1952)+TAG_FIXNUM; // 122
    v_261 = static_cast<LispObject>(lesseq2(v_262, v_261));
    v_261 = v_261 ? lisp_true : nil;
    env = stack[-6];
    if (v_261 == nil) goto v_97;
    goto v_87;
v_97:
    v_262 = stack[0];
    v_261 = static_cast<LispObject>(768)+TAG_FIXNUM; // 48
    v_261 = static_cast<LispObject>(geq2(v_262, v_261));
    v_261 = v_261 ? lisp_true : nil;
    env = stack[-6];
    if (v_261 == nil) goto v_108;
    v_262 = stack[0];
    v_261 = static_cast<LispObject>(912)+TAG_FIXNUM; // 57
    v_261 = static_cast<LispObject>(lesseq2(v_262, v_261));
    v_261 = v_261 ? lisp_true : nil;
    env = stack[-6];
    if (v_261 == nil) goto v_108;
    goto v_109;
v_108:
    v_262 = stack[0];
    v_261 = static_cast<LispObject>(1520)+TAG_FIXNUM; // 95
    v_261 = Lneq_2(nil, v_262, v_261);
    env = stack[-6];
    goto v_107;
v_109:
    v_261 = nil;
    goto v_107;
    v_261 = nil;
v_107:
    goto v_85;
v_87:
    v_261 = nil;
    goto v_85;
    v_261 = nil;
v_85:
    if (v_261 == nil) goto v_83;
    v_261 = nil;
    stack[-5] = v_261;
    goto v_81;
v_83:
v_81:
    v_261 = stack[-1];
    if (!car_legal(v_261)) v_261 = cdrerror(v_261); else
    v_261 = cdr(v_261);
    stack[-1] = v_261;
    goto v_68;
v_67:
    v_261 = stack[-2];
    if (!car_legal(v_261)) v_261 = cdrerror(v_261); else
    v_261 = cdr(v_261);
    if (v_261 == nil) goto v_136;
    else goto v_137;
v_136:
    v_261 = lisp_true;
    goto v_135;
v_137:
    v_261 = stack[-5];
    goto v_135;
    v_261 = nil;
v_135:
    if (v_261 == nil) goto v_133;
    v_261 = stack[-3];
    v_261 = Lintern(nil, v_261);
    env = stack[-6];
    stack[-2] = v_261;
    v_262 = stack[-2];
    v_261 = basic_elt(env, 2); // lex_code
    v_261 = get(v_262, v_261);
    env = stack[-6];
    if (v_261 == nil) goto v_148;
    else goto v_149;
v_148:
    v_262 = stack[-2];
    v_261 = qvalue(basic_elt(env, 3)); // lex_keyword_names
    v_261 = cons(v_262, v_261);
    env = stack[-6];
    setvalue(basic_elt(env, 3), v_261); // lex_keyword_names
    v_262 = stack[-2];
    v_261 = basic_elt(env, 4); // lex_next_code
    v_261 = get(v_262, v_261);
    env = stack[-6];
    if (v_261 == nil) goto v_158;
    else goto v_159;
v_158:
    v_263 = stack[-2];
    v_262 = basic_elt(env, 2); // lex_code
    v_261 = qvalue(basic_elt(env, 4)); // lex_next_code
    v_261 = Lputprop(nil, v_263, v_262, v_261);
    env = stack[-6];
    v_263 = qvalue(basic_elt(env, 4)); // lex_next_code
    v_262 = stack[-2];
    v_261 = qvalue(basic_elt(env, 5)); // lex_codename
    v_261 = acons(v_263, v_262, v_261);
    env = stack[-6];
    setvalue(basic_elt(env, 5), v_261); // lex_codename
    v_261 = qvalue(basic_elt(env, 6)); // !*tracelex
    if (v_261 == nil) goto v_174;
    v_261 = basic_elt(env, 7); // "Token '"
    v_261 = Lprinc(nil, v_261);
    env = stack[-6];
    v_261 = stack[-2];
    v_261 = Lprin(nil, v_261);
    env = stack[-6];
    v_261 = basic_elt(env, 8); // "' allocated code "
    v_261 = Lprinc(nil, v_261);
    env = stack[-6];
    v_261 = qvalue(basic_elt(env, 4)); // lex_next_code
    v_261 = Lprint(nil, v_261);
    env = stack[-6];
    goto v_172;
v_174:
v_172:
    v_261 = qvalue(basic_elt(env, 4)); // lex_next_code
    v_261 = add1(v_261);
    env = stack[-6];
    setvalue(basic_elt(env, 4), v_261); // lex_next_code
    goto v_157;
v_159:
v_157:
    goto v_147;
v_149:
v_147:
    goto v_22;
v_133:
    v_261 = stack[-3];
    v_261 = Lintern(nil, v_261);
    env = stack[-6];
    stack[-3] = v_261;
    v_262 = stack[-3];
    v_261 = basic_elt(env, 2); // lex_code
    v_261 = get(v_262, v_261);
    env = stack[-6];
    if (v_261 == nil) goto v_191;
    else goto v_192;
v_191:
    v_262 = stack[-3];
    v_261 = qvalue(basic_elt(env, 3)); // lex_keyword_names
    v_261 = cons(v_262, v_261);
    env = stack[-6];
    setvalue(basic_elt(env, 3), v_261); // lex_keyword_names
    v_263 = stack[-3];
    v_262 = basic_elt(env, 2); // lex_code
    v_261 = qvalue(basic_elt(env, 4)); // lex_next_code
    v_261 = Lputprop(nil, v_263, v_262, v_261);
    env = stack[-6];
    v_263 = qvalue(basic_elt(env, 4)); // lex_next_code
    v_262 = stack[-3];
    v_261 = qvalue(basic_elt(env, 5)); // lex_codename
    v_261 = acons(v_263, v_262, v_261);
    env = stack[-6];
    setvalue(basic_elt(env, 5), v_261); // lex_codename
    v_261 = qvalue(basic_elt(env, 4)); // lex_next_code
    v_261 = add1(v_261);
    env = stack[-6];
    setvalue(basic_elt(env, 4), v_261); // lex_next_code
    v_261 = stack[-2];
    v_261 = Lreverse(nil, v_261);
    env = stack[-6];
    if (!car_legal(v_261)) v_261 = cdrerror(v_261); else
    v_261 = cdr(v_261);
    v_261 = Lreverse(nil, v_261);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 16); // list2widestring
    v_261 = (*qfn1(fn))(fn, v_261);
    }
    env = stack[-6];
    stack[-5] = v_261;
    v_261 = stack[-5];
    v_261 = ncons(v_261);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 0); // lex_keywords
    v_261 = (*qfn1(fn))(fn, v_261);
    }
    env = stack[-6];
    v_261 = stack[-5];
    v_261 = Lintern(nil, v_261);
    env = stack[-6];
    stack[-5] = v_261;
    v_261 = stack[-2];
    {   LispObject fn = basic_elt(env, 17); // lastcar
    v_261 = (*qfn1(fn))(fn, v_261);
    }
    env = stack[-6];
    v_261 = ncons(v_261);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 16); // list2widestring
    v_261 = (*qfn1(fn))(fn, v_261);
    }
    env = stack[-6];
    v_261 = Lintern(nil, v_261);
    env = stack[-6];
    stack[-2] = v_261;
    v_261 = qvalue(basic_elt(env, 6)); // !*tracelex
    if (v_261 == nil) goto v_227;
    v_261 = Lposn(nil);
    env = stack[-6];
    v_261 = static_cast<LispObject>(zerop(v_261));
    v_261 = v_261 ? lisp_true : nil;
    env = stack[-6];
    if (v_261 == nil) goto v_231;
    else goto v_232;
v_231:
    v_261 = Lterpri(nil);
    env = stack[-6];
    goto v_230;
v_232:
v_230:
    v_261 = basic_elt(env, 9); // "dipthong data '"
    v_261 = Lprinc(nil, v_261);
    env = stack[-6];
    v_261 = stack[-5];
    v_261 = Lprin(nil, v_261);
    env = stack[-6];
    v_261 = basic_elt(env, 10); // "' plus '"
    v_261 = Lprinc(nil, v_261);
    env = stack[-6];
    v_261 = stack[-2];
    v_261 = Lprin(nil, v_261);
    env = stack[-6];
    v_261 = basic_elt(env, 11); // "' => '"
    v_261 = Lprinc(nil, v_261);
    env = stack[-6];
    v_261 = stack[-3];
    v_261 = Lprin(nil, v_261);
    env = stack[-6];
    v_261 = basic_elt(env, 12); // "'"
    v_261 = Lprintc(nil, v_261);
    env = stack[-6];
    goto v_225;
v_227:
v_225:
    stack[-1] = stack[-5];
    stack[0] = basic_elt(env, 13); // lex_dipthong
    v_264 = stack[-2];
    v_263 = stack[-3];
    v_262 = stack[-5];
    v_261 = basic_elt(env, 13); // lex_dipthong
    v_261 = get(v_262, v_261);
    env = stack[-6];
    v_261 = acons(v_264, v_263, v_261);
    env = stack[-6];
    v_261 = Lputprop(nil, stack[-1], stack[0], v_261);
    env = stack[-6];
    goto v_190;
v_192:
v_190:
v_22:
    v_261 = stack[-4];
    if (!car_legal(v_261)) v_261 = cdrerror(v_261); else
    v_261 = cdr(v_261);
    stack[-4] = v_261;
    goto v_7;
v_6:
    return onevalue(v_261);
}



// Code for cl_atnum

static LispObject CC_cl_atnum(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
v_1:
    v_173 = stack[0];
    if (!consp(v_173)) goto v_10;
    else goto v_11;
v_10:
    v_173 = stack[0];
    goto v_9;
v_11:
    v_173 = stack[0];
    if (!car_legal(v_173)) v_173 = carerror(v_173); else
    v_173 = car(v_173);
    goto v_9;
    v_173 = nil;
v_9:
    v_175 = v_173;
    v_174 = v_175;
    v_173 = basic_elt(env, 1); // or
    if (v_174 == v_173) goto v_32;
    else goto v_33;
v_32:
    v_173 = lisp_true;
    goto v_31;
v_33:
    v_174 = v_175;
    v_173 = basic_elt(env, 2); // and
    v_173 = (v_174 == v_173 ? lisp_true : nil);
    goto v_31;
    v_173 = nil;
v_31:
    if (v_173 == nil) goto v_29;
    v_173 = lisp_true;
    goto v_27;
v_29:
    v_174 = v_175;
    v_173 = basic_elt(env, 3); // not
    v_173 = (v_174 == v_173 ? lisp_true : nil);
    goto v_27;
    v_173 = nil;
v_27:
    if (v_173 == nil) goto v_25;
    v_173 = lisp_true;
    goto v_23;
v_25:
    v_174 = v_175;
    v_173 = basic_elt(env, 4); // impl
    if (v_174 == v_173) goto v_53;
    else goto v_54;
v_53:
    v_173 = lisp_true;
    goto v_52;
v_54:
    v_174 = v_175;
    v_173 = basic_elt(env, 5); // repl
    if (v_174 == v_173) goto v_62;
    else goto v_63;
v_62:
    v_173 = lisp_true;
    goto v_61;
v_63:
    v_174 = v_175;
    v_173 = basic_elt(env, 6); // equiv
    v_173 = (v_174 == v_173 ? lisp_true : nil);
    goto v_61;
    v_173 = nil;
v_61:
    goto v_52;
    v_173 = nil;
v_52:
    goto v_23;
    v_173 = nil;
v_23:
    if (v_173 == nil) goto v_21;
    v_173 = stack[0];
    if (!car_legal(v_173)) v_173 = cdrerror(v_173); else
    v_173 = cdr(v_173);
    stack[-1] = v_173;
    v_173 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[0] = v_173;
v_76:
    v_173 = stack[-1];
    if (v_173 == nil) goto v_82;
    else goto v_83;
v_82:
    v_173 = stack[0];
    goto v_75;
v_83:
    v_173 = stack[-1];
    if (!car_legal(v_173)) v_173 = carerror(v_173); else
    v_173 = car(v_173);
    {   LispObject fn = basic_elt(env, 0); // cl_atnum
    v_174 = (*qfn1(fn))(fn, v_173);
    }
    env = stack[-2];
    v_173 = stack[0];
    v_173 = plus2(v_174, v_173);
    env = stack[-2];
    stack[0] = v_173;
    v_173 = stack[-1];
    if (!car_legal(v_173)) v_173 = cdrerror(v_173); else
    v_173 = cdr(v_173);
    stack[-1] = v_173;
    goto v_76;
v_75:
    goto v_7;
v_21:
    v_174 = v_175;
    v_173 = basic_elt(env, 7); // ex
    if (v_174 == v_173) goto v_101;
    else goto v_102;
v_101:
    v_173 = lisp_true;
    goto v_100;
v_102:
    v_174 = v_175;
    v_173 = basic_elt(env, 8); // all
    v_173 = (v_174 == v_173 ? lisp_true : nil);
    goto v_100;
    v_173 = nil;
v_100:
    if (v_173 == nil) goto v_98;
    v_173 = stack[0];
    if (!car_legal(v_173)) v_173 = cdrerror(v_173); else
    v_173 = cdr(v_173);
    if (!car_legal(v_173)) v_173 = cdrerror(v_173); else
    v_173 = cdr(v_173);
    if (!car_legal(v_173)) v_173 = carerror(v_173); else
    v_173 = car(v_173);
    stack[0] = v_173;
    goto v_1;
v_98:
    v_174 = v_175;
    v_173 = basic_elt(env, 9); // bex
    if (v_174 == v_173) goto v_122;
    else goto v_123;
v_122:
    v_173 = lisp_true;
    goto v_121;
v_123:
    v_174 = v_175;
    v_173 = basic_elt(env, 10); // ball
    v_173 = (v_174 == v_173 ? lisp_true : nil);
    goto v_121;
    v_173 = nil;
v_121:
    if (v_173 == nil) goto v_119;
    v_173 = stack[0];
    if (!car_legal(v_173)) v_173 = cdrerror(v_173); else
    v_173 = cdr(v_173);
    if (!car_legal(v_173)) v_173 = cdrerror(v_173); else
    v_173 = cdr(v_173);
    if (!car_legal(v_173)) v_173 = carerror(v_173); else
    v_173 = car(v_173);
    {   LispObject fn = basic_elt(env, 0); // cl_atnum
    stack[-1] = (*qfn1(fn))(fn, v_173);
    }
    env = stack[-2];
    v_173 = stack[0];
    if (!car_legal(v_173)) v_173 = cdrerror(v_173); else
    v_173 = cdr(v_173);
    if (!car_legal(v_173)) v_173 = cdrerror(v_173); else
    v_173 = cdr(v_173);
    if (!car_legal(v_173)) v_173 = cdrerror(v_173); else
    v_173 = cdr(v_173);
    if (!car_legal(v_173)) v_173 = carerror(v_173); else
    v_173 = car(v_173);
    {   LispObject fn = basic_elt(env, 0); // cl_atnum
    v_173 = (*qfn1(fn))(fn, v_173);
    }
    {
        LispObject v_178 = stack[-1];
        return plus2(v_178, v_173);
    }
v_119:
    v_174 = v_175;
    v_173 = basic_elt(env, 11); // true
    if (v_174 == v_173) goto v_150;
    else goto v_151;
v_150:
    v_173 = lisp_true;
    goto v_149;
v_151:
    v_174 = v_175;
    v_173 = basic_elt(env, 12); // false
    v_173 = (v_174 == v_173 ? lisp_true : nil);
    goto v_149;
    v_173 = nil;
v_149:
    if (v_173 == nil) goto v_147;
    v_173 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_7;
v_147:
    v_174 = v_175;
    v_173 = basic_elt(env, 0); // cl_atnum
    {   LispObject fn = basic_elt(env, 13); // rl_external
    v_173 = (*qfn2(fn))(fn, v_174, v_173);
    }
    env = stack[-2];
    v_174 = v_173;
    if (v_173 == nil) goto v_164;
    stack[-1] = v_174;
    v_173 = stack[0];
    v_173 = ncons(v_173);
    env = stack[-2];
    {
        LispObject v_179 = stack[-1];
        LispObject fn = basic_elt(env, 14); // apply
        return (*qfn2(fn))(fn, v_179, v_173);
    }
v_164:
    v_173 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
v_7:
    return onevalue(v_173);
}



// Code for cl_pnf1

static LispObject CC_cl_pnf1(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_36;
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
    v_36 = v_2;
// end of prologue
    {   LispObject fn = basic_elt(env, 1); // cl_rename!-vars
    v_36 = (*qfn1(fn))(fn, v_36);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 2); // cl_pnf2
    v_36 = (*qfn1(fn))(fn, v_36);
    }
    env = stack[-2];
    stack[-1] = v_36;
    v_36 = stack[-1];
    if (!car_legal(v_36)) v_36 = cdrerror(v_36); else
    v_36 = cdr(v_36);
    if (v_36 == nil) goto v_14;
    else goto v_15;
v_14:
    v_36 = lisp_true;
    goto v_13;
v_15:
    v_36 = stack[-1];
    if (!car_legal(v_36)) v_36 = carerror(v_36); else
    v_36 = car(v_36);
    {   LispObject fn = basic_elt(env, 3); // cl_qb
    stack[0] = (*qfn1(fn))(fn, v_36);
    }
    env = stack[-2];
    v_36 = stack[-1];
    if (!car_legal(v_36)) v_36 = cdrerror(v_36); else
    v_36 = cdr(v_36);
    if (!car_legal(v_36)) v_36 = carerror(v_36); else
    v_36 = car(v_36);
    {   LispObject fn = basic_elt(env, 3); // cl_qb
    v_36 = (*qfn1(fn))(fn, v_36);
    }
    env = stack[-2];
    v_36 = static_cast<LispObject>(lessp2(stack[0], v_36));
    v_36 = v_36 ? lisp_true : nil;
    goto v_13;
    v_36 = nil;
v_13:
    if (v_36 == nil) goto v_11;
    v_36 = stack[-1];
    if (!car_legal(v_36)) v_36 = carerror(v_36); else
    v_36 = car(v_36);
    goto v_9;
v_11:
    v_36 = stack[-1];
    if (!car_legal(v_36)) v_36 = cdrerror(v_36); else
    v_36 = cdr(v_36);
    if (!car_legal(v_36)) v_36 = carerror(v_36); else
    v_36 = car(v_36);
    goto v_9;
    v_36 = nil;
v_9:
    return onevalue(v_36);
}



// Code for fnom

static LispObject CC_fnom(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_45;
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
    v_45 = basic_elt(env, 1); // "<OMA>"
    {   LispObject fn = basic_elt(env, 11); // printout
    v_45 = (*qfn1(fn))(fn, v_45);
    }
    env = stack[-1];
    v_45 = lisp_true;
    {   LispObject fn = basic_elt(env, 12); // indent!*
    v_45 = (*qfn1(fn))(fn, v_45);
    }
    env = stack[-1];
    v_45 = basic_elt(env, 2); // "<OMATTR>"
    {   LispObject fn = basic_elt(env, 11); // printout
    v_45 = (*qfn1(fn))(fn, v_45);
    }
    env = stack[-1];
    v_45 = lisp_true;
    {   LispObject fn = basic_elt(env, 12); // indent!*
    v_45 = (*qfn1(fn))(fn, v_45);
    }
    env = stack[-1];
    v_45 = basic_elt(env, 3); // "<OMATP>"
    {   LispObject fn = basic_elt(env, 11); // printout
    v_45 = (*qfn1(fn))(fn, v_45);
    }
    env = stack[-1];
    v_45 = lisp_true;
    {   LispObject fn = basic_elt(env, 12); // indent!*
    v_45 = (*qfn1(fn))(fn, v_45);
    }
    env = stack[-1];
    v_45 = basic_elt(env, 4); // "<OMS cd=""typmml"" name=""type""/>"
    {   LispObject fn = basic_elt(env, 11); // printout
    v_45 = (*qfn1(fn))(fn, v_45);
    }
    env = stack[-1];
    v_45 = basic_elt(env, 5); // "<OMS cd=""typmml"" name="""
    {   LispObject fn = basic_elt(env, 11); // printout
    v_45 = (*qfn1(fn))(fn, v_45);
    }
    env = stack[-1];
    v_45 = basic_elt(env, 6); // "fn_type"
    v_45 = Lprinc(nil, v_45);
    env = stack[-1];
    v_45 = basic_elt(env, 7); // """/>"
    v_45 = Lprinc(nil, v_45);
    env = stack[-1];
    v_45 = nil;
    {   LispObject fn = basic_elt(env, 12); // indent!*
    v_45 = (*qfn1(fn))(fn, v_45);
    }
    env = stack[-1];
    v_45 = basic_elt(env, 8); // "</OMATP>"
    {   LispObject fn = basic_elt(env, 11); // printout
    v_45 = (*qfn1(fn))(fn, v_45);
    }
    env = stack[-1];
    v_45 = stack[0];
    if (!car_legal(v_45)) v_45 = carerror(v_45); else
    v_45 = car(v_45);
    {   LispObject fn = basic_elt(env, 13); // objectom
    v_45 = (*qfn1(fn))(fn, v_45);
    }
    env = stack[-1];
    v_45 = nil;
    {   LispObject fn = basic_elt(env, 12); // indent!*
    v_45 = (*qfn1(fn))(fn, v_45);
    }
    env = stack[-1];
    v_45 = basic_elt(env, 9); // "</OMATTR>"
    {   LispObject fn = basic_elt(env, 11); // printout
    v_45 = (*qfn1(fn))(fn, v_45);
    }
    env = stack[-1];
    v_45 = stack[0];
    if (!car_legal(v_45)) v_45 = cdrerror(v_45); else
    v_45 = cdr(v_45);
    if (!car_legal(v_45)) v_45 = cdrerror(v_45); else
    v_45 = cdr(v_45);
    {   LispObject fn = basic_elt(env, 14); // multiom
    v_45 = (*qfn1(fn))(fn, v_45);
    }
    env = stack[-1];
    v_45 = nil;
    {   LispObject fn = basic_elt(env, 12); // indent!*
    v_45 = (*qfn1(fn))(fn, v_45);
    }
    env = stack[-1];
    v_45 = basic_elt(env, 10); // "</OMA>"
    {   LispObject fn = basic_elt(env, 11); // printout
    v_45 = (*qfn1(fn))(fn, v_45);
    }
    v_45 = nil;
    return onevalue(v_45);
}



// Code for plusrd

static LispObject CC_plusrd(LispObject env)
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
    v_19 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_9;
v_11:
    stack[0] = v_20;
    {   LispObject fn = basic_elt(env, 0); // plusrd
    v_19 = (*qfn0(fn))(fn);
    }
    env = stack[-1];
    {
        LispObject v_22 = stack[0];
        LispObject fn = basic_elt(env, 2); // alg_plus
        return (*qfn2(fn))(fn, v_22, v_19);
    }
    v_19 = nil;
v_9:
    return onevalue(v_19);
}



// Code for simpimpart

static LispObject CC_simpimpart(LispObject env,
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
// Binding !*factor
// FLUIDBIND: reloadenv=1 litvec-offset=1 saveloc=0
{   bind_fluid_stack bind_fluid_var(-1, 1, 0);
    setvalue(basic_elt(env, 1), v_12); // !*factor
    v_12 = v_13;
    if (!car_legal(v_12)) v_12 = carerror(v_12); else
    v_12 = car(v_12);
    {   LispObject fn = basic_elt(env, 2); // simp!*
    v_12 = (*qfn1(fn))(fn, v_12);
    }
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // impartsq
    v_12 = (*qfn1(fn))(fn, v_12);
    }
    ;}  // end of a binding scope
    return onevalue(v_12);
}



// Code for genexp

static LispObject CC_genexp(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_22;
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
    v_22 = stack[0];
    if (!consp(v_22)) goto v_6;
    else goto v_7;
v_6:
    v_22 = stack[0];
    {
        LispObject fn = basic_elt(env, 1); // genp
        return (*qfn1(fn))(fn, v_22);
    }
v_7:
    v_22 = stack[0];
    if (!car_legal(v_22)) v_22 = carerror(v_22); else
    v_22 = car(v_22);
    {   LispObject fn = basic_elt(env, 0); // genexp
    v_22 = (*qfn1(fn))(fn, v_22);
    }
    env = stack[-1];
    if (v_22 == nil) goto v_15;
    else goto v_14;
v_15:
    v_22 = stack[0];
    if (!car_legal(v_22)) v_22 = cdrerror(v_22); else
    v_22 = cdr(v_22);
    stack[0] = v_22;
    goto v_1;
v_14:
    goto v_5;
    v_22 = nil;
v_5:
    return onevalue(v_22);
}



// Code for exdfprn

static LispObject CC_exdfprn(LispObject env,
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
// space for vars preserved across procedure calls
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_10 = basic_elt(env, 1); // "d"
    {   LispObject fn = basic_elt(env, 2); // prin2!*
    v_10 = (*qfn1(fn))(fn, v_10);
    }
    env = stack[-1];
    v_10 = stack[0];
    if (!car_legal(v_10)) v_10 = cdrerror(v_10); else
    v_10 = cdr(v_10);
    if (!car_legal(v_10)) v_10 = carerror(v_10); else
    v_10 = car(v_10);
    {
        LispObject fn = basic_elt(env, 3); // rembras
        return (*qfn1(fn))(fn, v_10);
    }
}



// Code for aceq

static LispObject CC_aceq(LispObject env,
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
// space for vars preserved across procedure calls
    real_push(nil);
    stack_popper stack_popper_var(2);
// copy arguments values to proper place
    v_37 = v_3;
    v_38 = v_2;
// end of prologue
v_8:
    v_36 = v_38;
    if (v_36 == nil) goto v_11;
    else goto v_12;
v_11:
    v_36 = v_37;
    v_36 = (v_36 == nil ? lisp_true : nil);
    goto v_7;
v_12:
    v_36 = v_37;
    if (v_36 == nil) goto v_16;
    else goto v_17;
v_16:
    v_36 = nil;
    goto v_7;
v_17:
    v_36 = v_38;
    if (!car_legal(v_36)) v_39 = carerror(v_36); else
    v_39 = car(v_36);
    v_36 = v_37;
    v_36 = Lmember(nil, v_39, v_36);
    if (v_36 == nil) goto v_21;
    v_36 = v_38;
    if (!car_legal(v_36)) v_36 = cdrerror(v_36); else
    v_36 = cdr(v_36);
    stack[0] = v_36;
    v_36 = v_38;
    if (!car_legal(v_36)) v_36 = carerror(v_36); else
    v_36 = car(v_36);
    v_36 = Ldelete(nil, v_36, v_37);
    env = stack[-1];
    v_37 = v_36;
    v_36 = stack[0];
    v_38 = v_36;
    goto v_8;
v_21:
    v_36 = nil;
    goto v_7;
    v_36 = nil;
v_7:
    return onevalue(v_36);
}



// Code for log_freevars

static LispObject CC_log_freevars(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_163, v_164, v_165;
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
    v_164 = v_2;
// end of prologue
    v_163 = stack[0];
    if (!consp(v_163)) goto v_7;
    else goto v_8;
v_7:
    v_163 = stack[0];
    if (symbolp(v_163)) goto v_17;
    v_163 = lisp_true;
    goto v_15;
v_17:
    v_163 = stack[0];
    v_163 = Lmember(nil, v_163, v_164);
    if (v_163 == nil) goto v_24;
    else goto v_23;
v_24:
    v_163 = stack[0];
    v_163 = Lsymbol_globalp(nil, v_163);
    env = stack[-1];
    if (v_163 == nil) goto v_30;
    else goto v_29;
v_30:
    v_163 = stack[0];
    v_163 = Lsymbol_specialp(nil, v_163);
    env = stack[-1];
    if (v_163 == nil) goto v_35;
    else goto v_34;
v_35:
    v_164 = stack[0];
    v_163 = basic_elt(env, 1); // constant!?
    v_163 = get(v_164, v_163);
    env = stack[-1];
    if (v_163 == nil) goto v_40;
    else goto v_39;
v_40:
    v_163 = stack[0];
    if (v_163 == nil) goto v_46;
    else goto v_47;
v_46:
    v_163 = lisp_true;
    goto v_45;
v_47:
    v_164 = stack[0];
    v_163 = lisp_true;
    v_163 = (equal(v_164, v_163) ? lisp_true : nil);
    goto v_45;
    v_163 = nil;
v_45:
v_39:
v_34:
v_29:
v_23:
    goto v_15;
    v_163 = nil;
v_15:
    if (v_163 == nil) goto v_13;
    v_163 = nil;
    goto v_11;
v_13:
    v_163 = Lposn(nil);
    env = stack[-1];
    v_163 = static_cast<LispObject>(zerop(v_163));
    v_163 = v_163 ? lisp_true : nil;
    env = stack[-1];
    if (v_163 == nil) goto v_60;
    else goto v_61;
v_60:
    v_163 = Lterpri(nil);
    env = stack[-1];
    goto v_59;
v_61:
v_59:
    v_163 = basic_elt(env, 2); // "+++ Use of free variable in smacro/inline body: "
    v_163 = Lprinc(nil, v_163);
    env = stack[-1];
    v_163 = stack[0];
    v_163 = Lprint(nil, v_163);
    env = stack[-1];
    v_163 = basic_elt(env, 3); // "+++ Macro was: "
    v_163 = Lprinc(nil, v_163);
    env = stack[-1];
    v_163 = qvalue(basic_elt(env, 4)); // inlineinfo
    v_163 = Lprint(nil, v_163);
    v_163 = lisp_true;
    goto v_11;
    v_163 = nil;
v_11:
    goto v_6;
v_8:
    v_165 = stack[0];
    v_163 = basic_elt(env, 5); // quote
    if (!consp(v_165)) goto v_79;
    v_165 = car(v_165);
    if (v_165 == v_163) goto v_78;
    else goto v_79;
v_78:
    v_163 = lisp_true;
    goto v_77;
v_79:
    v_165 = stack[0];
    v_163 = basic_elt(env, 6); // function
    if (!consp(v_165)) goto v_93;
    v_165 = car(v_165);
    if (v_165 == v_163) goto v_92;
    else goto v_93;
v_92:
    v_163 = stack[0];
    if (!car_legal(v_163)) v_163 = cdrerror(v_163); else
    v_163 = cdr(v_163);
    if (!car_legal(v_163)) v_163 = carerror(v_163); else
    v_163 = car(v_163);
    v_163 = (consp(v_163) ? nil : lisp_true);
    goto v_91;
v_93:
    v_163 = nil;
    goto v_91;
    v_163 = nil;
v_91:
    if (v_163 == nil) goto v_89;
    v_163 = lisp_true;
    goto v_87;
v_89:
    v_165 = stack[0];
    v_163 = basic_elt(env, 7); // go
    v_163 = Leqcar(nil, v_165, v_163);
    env = stack[-1];
    goto v_87;
    v_163 = nil;
v_87:
    goto v_77;
    v_163 = nil;
v_77:
    if (v_163 == nil) goto v_75;
    v_163 = nil;
    goto v_6;
v_75:
    v_165 = stack[0];
    v_163 = basic_elt(env, 8); // prog
    if (!consp(v_165)) goto v_112;
    v_165 = car(v_165);
    if (v_165 == v_163) goto v_111;
    else goto v_112;
v_111:
    v_163 = stack[0];
    if (!car_legal(v_163)) v_163 = cdrerror(v_163); else
    v_163 = cdr(v_163);
    if (!car_legal(v_163)) v_163 = carerror(v_163); else
    v_163 = car(v_163);
    v_165 = Lappend_2(nil, v_163, v_164);
    env = stack[-1];
    v_163 = stack[0];
    if (!car_legal(v_163)) v_164 = cdrerror(v_163); else
    v_164 = cdr(v_163);
    v_163 = lisp_true;
    {
        LispObject fn = basic_elt(env, 11); // log_freevars_list
        return (*qfn3(fn))(fn, v_165, v_164, v_163);
    }
v_112:
    v_165 = stack[0];
    v_163 = basic_elt(env, 9); // lambda
    if (!consp(v_165)) goto v_126;
    v_165 = car(v_165);
    if (v_165 == v_163) goto v_125;
    else goto v_126;
v_125:
    v_163 = stack[0];
    if (!car_legal(v_163)) v_163 = cdrerror(v_163); else
    v_163 = cdr(v_163);
    if (!car_legal(v_163)) v_163 = carerror(v_163); else
    v_163 = car(v_163);
    v_165 = Lappend_2(nil, v_163, v_164);
    env = stack[-1];
    v_163 = stack[0];
    if (!car_legal(v_163)) v_164 = cdrerror(v_163); else
    v_164 = cdr(v_163);
    v_163 = nil;
    {
        LispObject fn = basic_elt(env, 11); // log_freevars_list
        return (*qfn3(fn))(fn, v_165, v_164, v_163);
    }
v_126:
    v_165 = stack[0];
    v_163 = basic_elt(env, 10); // cond
    if (!consp(v_165)) goto v_140;
    v_165 = car(v_165);
    if (v_165 == v_163) goto v_139;
    else goto v_140;
v_139:
    v_163 = stack[0];
    if (!car_legal(v_163)) v_163 = cdrerror(v_163); else
    v_163 = cdr(v_163);
    {
        LispObject fn = basic_elt(env, 12); // log_freevars_list_list
        return (*qfn2(fn))(fn, v_164, v_163);
    }
v_140:
    v_163 = stack[0];
    if (!car_legal(v_163)) v_163 = carerror(v_163); else
    v_163 = car(v_163);
    if (!consp(v_163)) goto v_148;
    else goto v_149;
v_148:
    v_165 = v_164;
    v_163 = stack[0];
    if (!car_legal(v_163)) v_164 = cdrerror(v_163); else
    v_164 = cdr(v_163);
    v_163 = nil;
    {
        LispObject fn = basic_elt(env, 11); // log_freevars_list
        return (*qfn3(fn))(fn, v_165, v_164, v_163);
    }
v_149:
    v_165 = v_164;
    v_164 = stack[0];
    v_163 = nil;
    {
        LispObject fn = basic_elt(env, 11); // log_freevars_list
        return (*qfn3(fn))(fn, v_165, v_164, v_163);
    }
    v_163 = nil;
v_6:
    return onevalue(v_163);
}



// Code for bas_make

static LispObject CC_bas_make(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    stack[-2] = v_3;
    v_14 = v_2;
// end of prologue
    stack[-3] = v_14;
    stack[-1] = stack[-2];
    v_14 = stack[-2];
    stack[0] = Llength(nil, v_14);
    env = stack[-4];
    v_14 = stack[-2];
    {   LispObject fn = basic_elt(env, 1); // dp_ecart
    v_15 = (*qfn1(fn))(fn, v_14);
    }
    env = stack[-4];
    v_14 = nil;
    v_14 = list2(v_15, v_14);
    {
        LispObject v_20 = stack[-3];
        LispObject v_21 = stack[-1];
        LispObject v_22 = stack[0];
        return list3star(v_20, v_21, v_22, v_14);
    }
}



// Code for pst_subpst

static LispObject CC_pst_subpst(LispObject env,
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
    v_11 = v_3;
    v_10 = v_2;
// end of prologue
    if (!car_legal(v_10)) stack[0] = cdrerror(v_10); else
    stack[0] = cdr(v_10);
    v_10 = v_11;
    v_10 = sub1(v_10);
    {
        LispObject v_13 = stack[0];
        return Lgetv(nil, v_13, v_10);
    }
}



// Code for appn

static LispObject CC_appn(LispObject env,
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
    v_36 = Lappend_2(nil, v_36, v_37);
    env = stack[-3];
    v_37 = v_36;
    v_36 = stack[-2];
    v_36 = cdr(v_36);
    stack[-2] = v_36;
    goto v_11;
v_8:
    return onevalue(v_36);
}



// Code for multivariatep

static LispObject CC_multivariatep(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
v_7:
    v_44 = stack[-1];
    if (!consp(v_44)) goto v_14;
    else goto v_15;
v_14:
    v_44 = lisp_true;
    goto v_13;
v_15:
    v_44 = stack[-1];
    if (!car_legal(v_44)) v_44 = carerror(v_44); else
    v_44 = car(v_44);
    v_44 = (consp(v_44) ? nil : lisp_true);
    goto v_13;
    v_44 = nil;
v_13:
    if (v_44 == nil) goto v_11;
    v_44 = nil;
    goto v_6;
v_11:
    v_44 = stack[-1];
    if (!car_legal(v_44)) v_44 = carerror(v_44); else
    v_44 = car(v_44);
    if (!car_legal(v_44)) v_44 = carerror(v_44); else
    v_44 = car(v_44);
    if (!car_legal(v_44)) v_45 = carerror(v_44); else
    v_45 = car(v_44);
    v_44 = stack[0];
    if (v_45 == v_44) goto v_25;
    v_44 = lisp_true;
    goto v_6;
v_25:
    v_44 = stack[-1];
    if (!car_legal(v_44)) v_44 = carerror(v_44); else
    v_44 = car(v_44);
    if (!car_legal(v_44)) v_45 = cdrerror(v_44); else
    v_45 = cdr(v_44);
    v_44 = stack[0];
    {   LispObject fn = basic_elt(env, 0); // multivariatep
    v_44 = (*qfn2(fn))(fn, v_45, v_44);
    }
    env = stack[-2];
    if (v_44 == nil) goto v_33;
    v_44 = lisp_true;
    goto v_6;
v_33:
    v_44 = stack[-1];
    if (!car_legal(v_44)) v_44 = cdrerror(v_44); else
    v_44 = cdr(v_44);
    stack[-1] = v_44;
    goto v_7;
    v_44 = nil;
v_6:
    return onevalue(v_44);
}



// Code for lalr_augment_grammar

static LispObject CC_lalr_augment_grammar(LispObject env,
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
    v_24 = basic_elt(env, 1); // !S!'
    v_23 = stack[0];
    v_23 = Lassoc(nil, v_24, v_23);
    if (v_23 == nil) goto v_7;
    v_23 = stack[0];
    goto v_5;
v_7:
    stack[-1] = basic_elt(env, 1); // !S!'
    v_23 = stack[0];
    if (!car_legal(v_23)) v_23 = carerror(v_23); else
    v_23 = car(v_23);
    if (!car_legal(v_23)) v_23 = carerror(v_23); else
    v_23 = car(v_23);
    v_23 = ncons(v_23);
    env = stack[-2];
    v_23 = ncons(v_23);
    env = stack[-2];
    v_24 = list2(stack[-1], v_23);
    v_23 = stack[0];
    return cons(v_24, v_23);
    v_23 = nil;
v_5:
    return onevalue(v_23);
}



// Code for createsinglevariablemonom

static LispObject CC_createsinglevariablemonom(LispObject env,
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
// space for vars preserved across procedure calls
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    stack[-2] = v_2;
// end of prologue
    v_21 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_21 = Lmkvect(nil, v_21);
    env = stack[-4];
    stack[-3] = v_21;
    v_23 = stack[-3];
    v_22 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_21 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_21 = Lputv(nil, v_23, v_22, v_21);
    env = stack[-4];
    stack[-1] = stack[-3];
    stack[0] = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_23 = stack[-2];
    v_22 = nil;
    v_21 = nil;
    v_21 = list2star(v_23, v_22, v_21);
    env = stack[-4];
    v_21 = Lputv(nil, stack[-1], stack[0], v_21);
    v_21 = stack[-3];
    return onevalue(v_21);
}



// Code for my_freeof

static LispObject CC_my_freeof(LispObject env,
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
    stack[-1] = v_2;
// end of prologue
    v_20 = stack[0];
    v_19 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // smember
    v_19 = (*qfn2(fn))(fn, v_20, v_19);
    }
    env = stack[-2];
    if (v_19 == nil) goto v_7;
    else goto v_8;
v_7:
    v_21 = qvalue(basic_elt(env, 1)); // depl!*
    v_20 = stack[-1];
    v_19 = stack[0];
    {
        LispObject fn = basic_elt(env, 3); // freeofdepl
        return (*qfn3(fn))(fn, v_21, v_20, v_19);
    }
v_8:
    v_19 = nil;
    goto v_6;
    v_19 = nil;
v_6:
    return onevalue(v_19);
}



// Code for giintgcd

static LispObject CC_giintgcd(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_50, v_51, v_52, v_53;
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
    v_51 = v_3;
    v_52 = v_2;
// end of prologue
v_8:
    v_53 = v_51;
    v_50 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_53 == v_50) goto v_11;
    else goto v_12;
v_11:
    v_50 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_7;
v_12:
    v_50 = v_52;
    if (v_50 == nil) goto v_16;
    else goto v_17;
v_16:
    v_50 = v_51;
    goto v_7;
v_17:
    v_50 = v_52;
    if (!consp(v_50)) goto v_20;
    else goto v_21;
v_20:
    v_50 = v_52;
        return Lgcd_2(nil, v_50, v_51);
v_21:
    v_53 = v_52;
    v_50 = basic_elt(env, 1); // !:gi!:
    if (!consp(v_53)) goto v_27;
    v_53 = car(v_53);
    if (v_53 == v_50) goto v_26;
    else goto v_27;
v_26:
    v_50 = v_52;
    if (!car_legal(v_50)) v_50 = cdrerror(v_50); else
    v_50 = cdr(v_50);
    if (!car_legal(v_50)) stack[0] = carerror(v_50); else
    stack[0] = car(v_50);
    v_50 = v_52;
    if (!car_legal(v_50)) v_50 = cdrerror(v_50); else
    v_50 = cdr(v_50);
    if (!car_legal(v_50)) v_50 = cdrerror(v_50); else
    v_50 = cdr(v_50);
    v_50 = Lgcd_2(nil, v_50, v_51);
    {
        LispObject v_55 = stack[0];
        return Lgcd_2(nil, v_55, v_50);
    }
v_27:
    v_50 = v_52;
    if (!car_legal(v_50)) v_50 = carerror(v_50); else
    v_50 = car(v_50);
    if (!car_legal(v_50)) v_50 = cdrerror(v_50); else
    v_50 = cdr(v_50);
    stack[0] = v_50;
    v_50 = v_52;
    if (!car_legal(v_50)) v_50 = cdrerror(v_50); else
    v_50 = cdr(v_50);
    {   LispObject fn = basic_elt(env, 0); // giintgcd
    v_50 = (*qfn2(fn))(fn, v_50, v_51);
    }
    env = stack[-1];
    v_51 = v_50;
    v_50 = stack[0];
    v_52 = v_50;
    goto v_8;
    v_50 = nil;
v_7:
    return onevalue(v_50);
}



// Code for talp_nextt1

static LispObject CC_talp_nextt1(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_175, v_176;
    LispObject v_5, v_6, v_7, v_8, v_9;
    if (_a4up_ == nil)
        aerror1("not enough arguments provided", basic_elt(env, 0));
    v_5 = car(_a4up_); _a4up_ = cdr(_a4up_);
    if (_a4up_ == nil)
        aerror1("not enough arguments provided", basic_elt(env, 0));
    v_6 = car(_a4up_); _a4up_ = cdr(_a4up_);
    if (_a4up_ == nil)
        aerror1("not enough arguments provided", basic_elt(env, 0));
    v_7 = car(_a4up_); _a4up_ = cdr(_a4up_);
    if (_a4up_ == nil)
        aerror1("not enough arguments provided", basic_elt(env, 0));
    v_8 = car(_a4up_); _a4up_ = cdr(_a4up_);
    if (_a4up_ == nil)
        aerror1("not enough arguments provided", basic_elt(env, 0));
    v_9 = car(_a4up_); _a4up_ = cdr(_a4up_);
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
        push(v_8,v_9);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_9,v_8,v_7,v_6,v_5,v_4);
        pop(v_3,v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    real_push(nil, nil, nil, nil, nil);
    real_push(nil, nil, nil, nil, nil);
    real_push(nil, nil, nil, nil, nil);
    push(nil, nil);
    stack_popper stack_popper_var(18);
// copy arguments values to proper place
    stack[-8] = v_9;
    stack[-9] = v_8;
    stack[-10] = v_7;
    stack[-11] = v_6;
    stack[-12] = v_5;
    stack[-13] = v_4;
    stack[-14] = v_3;
    stack[-15] = v_2;
// end of prologue
    stack[-16] = nil;
    v_175 = stack[-15];
    if (!consp(v_175)) goto v_18;
    else goto v_19;
v_18:
    stack[0] = stack[-15];
    stack[-1] = stack[-14];
    stack[-2] = stack[-13];
    stack[-3] = stack[-12];
    stack[-4] = stack[-11];
    stack[-5] = stack[-10];
    v_176 = stack[-9];
    v_175 = stack[-8];
    v_175 = list2(v_176, v_175);
    env = stack[-17];
    v_175 = list3star(stack[-3], stack[-4], stack[-5], v_175);
    env = stack[-17];
    {
        LispObject v_194 = stack[0];
        LispObject v_195 = stack[-1];
        LispObject v_196 = stack[-2];
        LispObject fn = basic_elt(env, 1); // talp_nextt!-atom
        return (*qfn4up(fn))(fn, v_194, v_195, v_196, v_175);
    }
v_19:
    v_175 = stack[-15];
    {   LispObject fn = basic_elt(env, 2); // talp_invp
    v_175 = (*qfn1(fn))(fn, v_175);
    }
    env = stack[-17];
    if (v_175 == nil) goto v_35;
    v_175 = stack[-15];
    {   LispObject fn = basic_elt(env, 3); // talp_fargl
    v_175 = (*qfn1(fn))(fn, v_175);
    }
    env = stack[-17];
    if (!car_legal(v_175)) stack[-3] = carerror(v_175); else
    stack[-3] = car(v_175);
    v_175 = stack[-14];
    stack[-4] = add1(v_175);
    env = stack[-17];
    stack[-5] = stack[-13];
    stack[-2] = stack[-12];
    stack[-1] = stack[-11];
    stack[0] = stack[-10];
    v_176 = stack[-9];
    v_175 = lisp_true;
    v_175 = list2(v_176, v_175);
    env = stack[-17];
    v_175 = list3star(stack[-2], stack[-1], stack[0], v_175);
    env = stack[-17];
    {   LispObject fn = basic_elt(env, 0); // talp_nextt1
    v_175 = (*qfn4up(fn))(fn, stack[-3], stack[-4], stack[-5], v_175);
    }
    env = stack[-17];
    v_176 = v_175;
    v_175 = v_176;
    if (!car_legal(v_175)) v_175 = carerror(v_175); else
    v_175 = car(v_175);
    if (v_175 == nil) goto v_56;
    stack[0] = stack[-15];
    v_175 = v_176;
    if (!car_legal(v_175)) v_175 = cdrerror(v_175); else
    v_175 = cdr(v_175);
    v_175 = ncons(v_175);
    env = stack[-17];
    {   LispObject fn = basic_elt(env, 4); // setcdr
    v_175 = (*qfn2(fn))(fn, stack[0], v_175);
    }
    v_176 = lisp_true;
    v_175 = stack[-15];
    return cons(v_176, v_175);
v_56:
    goto v_33;
v_35:
    v_175 = stack[-15];
    {   LispObject fn = basic_elt(env, 3); // talp_fargl
    v_175 = (*qfn1(fn))(fn, v_175);
    }
    env = stack[-17];
    stack[-6] = v_175;
    v_176 = stack[-12];
    v_175 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_175 = Lgetv(nil, v_176, v_175);
    env = stack[-17];
    stack[-7] = v_175;
v_76:
    v_175 = stack[-6];
    if (v_175 == nil) goto v_79;
    v_175 = stack[-16];
    if (v_175 == nil) goto v_83;
    else goto v_79;
v_83:
    goto v_80;
v_79:
    goto v_75;
v_80:
    v_175 = stack[-6];
    if (!car_legal(v_175)) stack[-5] = carerror(v_175); else
    stack[-5] = car(v_175);
    v_175 = stack[-14];
    stack[-4] = add1(v_175);
    env = stack[-17];
    stack[-3] = stack[-13];
    stack[-2] = stack[-12];
    stack[-1] = stack[-11];
    stack[0] = stack[-10];
    v_176 = stack[-9];
    v_175 = nil;
    v_175 = list2(v_176, v_175);
    env = stack[-17];
    v_175 = list3star(stack[-2], stack[-1], stack[0], v_175);
    env = stack[-17];
    {   LispObject fn = basic_elt(env, 0); // talp_nextt1
    v_175 = (*qfn4up(fn))(fn, stack[-5], stack[-4], stack[-3], v_175);
    }
    env = stack[-17];
    v_176 = v_175;
    if (!car_legal(v_176)) v_176 = carerror(v_176); else
    v_176 = car(v_176);
    if (v_176 == nil) goto v_103;
    v_176 = lisp_true;
    stack[-16] = v_176;
    v_176 = stack[-6];
    if (!car_legal(v_175)) v_175 = cdrerror(v_175); else
    v_175 = cdr(v_175);
    {   LispObject fn = basic_elt(env, 5); // setcar
    v_175 = (*qfn2(fn))(fn, v_176, v_175);
    }
    env = stack[-17];
    goto v_101;
v_103:
    v_176 = stack[-6];
    v_175 = stack[-7];
    {   LispObject fn = basic_elt(env, 5); // setcar
    v_175 = (*qfn2(fn))(fn, v_176, v_175);
    }
    env = stack[-17];
    goto v_101;
v_101:
    v_175 = stack[-6];
    if (!car_legal(v_175)) v_175 = cdrerror(v_175); else
    v_175 = cdr(v_175);
    stack[-6] = v_175;
    goto v_76;
v_75:
    goto v_33;
v_33:
    v_175 = stack[-16];
    if (v_175 == nil) goto v_120;
    else goto v_121;
v_120:
    v_175 = stack[-8];
    if (v_175 == nil) goto v_126;
    v_176 = stack[-15];
    v_175 = stack[-9];
    {   LispObject fn = basic_elt(env, 6); // talp_get!-idx
    v_175 = (*qfn2(fn))(fn, v_176, v_175);
    }
    env = stack[-17];
    stack[-1] = v_175;
    stack[0] = stack[-1];
    v_175 = stack[-9];
    v_175 = Lupbv(nil, v_175);
    env = stack[-17];
    v_175 = static_cast<LispObject>(lessp2(stack[0], v_175));
    v_175 = v_175 ? lisp_true : nil;
    env = stack[-17];
    if (v_175 == nil) goto v_135;
    stack[0] = lisp_true;
    v_175 = stack[-1];
    stack[-1] = add1(v_175);
    env = stack[-17];
    stack[-2] = stack[-9];
    stack[-3] = stack[-11];
    v_175 = stack[-12];
    v_175 = ncons(v_175);
    env = stack[-17];
    {   LispObject fn = basic_elt(env, 7); // talp_get!-minfct
    v_175 = (*qfn4up(fn))(fn, stack[-1], stack[-2], stack[-3], v_175);
    }
    {
        LispObject v_197 = stack[0];
        return cons(v_197, v_175);
    }
v_135:
    goto v_124;
v_126:
    v_176 = stack[-15];
    v_175 = stack[-10];
    {   LispObject fn = basic_elt(env, 6); // talp_get!-idx
    v_175 = (*qfn2(fn))(fn, v_176, v_175);
    }
    env = stack[-17];
    stack[-1] = v_175;
    stack[0] = stack[-1];
    v_175 = stack[-10];
    v_175 = Lupbv(nil, v_175);
    env = stack[-17];
    v_175 = static_cast<LispObject>(lessp2(stack[0], v_175));
    v_175 = v_175 ? lisp_true : nil;
    env = stack[-17];
    if (v_175 == nil) goto v_158;
    stack[0] = lisp_true;
    v_175 = stack[-1];
    stack[-1] = add1(v_175);
    env = stack[-17];
    stack[-2] = stack[-10];
    stack[-3] = stack[-11];
    v_175 = stack[-12];
    v_175 = ncons(v_175);
    env = stack[-17];
    {   LispObject fn = basic_elt(env, 7); // talp_get!-minfct
    v_175 = (*qfn4up(fn))(fn, stack[-1], stack[-2], stack[-3], v_175);
    }
    {
        LispObject v_198 = stack[0];
        return cons(v_198, v_175);
    }
v_158:
    goto v_124;
v_124:
    goto v_119;
v_121:
v_119:
    v_176 = stack[-16];
    v_175 = stack[-15];
    return cons(v_176, v_175);
    return onevalue(v_175);
}



// Code for rl_onp

static LispObject CC_rl_onp(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_12 = basic_elt(env, 1); // !*
    stack[-1] = Lexplode(nil, v_12);
    env = stack[-2];
    v_12 = stack[0];
    v_12 = Lexplode(nil, v_12);
    env = stack[-2];
    v_12 = Lappend_2(nil, stack[-1], v_12);
    env = stack[-2];
    v_12 = Lcompress(nil, v_12);
    env = stack[-2];
    v_12 = Lintern(nil, v_12);
    env = stack[-2];
    {
        LispObject fn = basic_elt(env, 2); // eval
        return (*qfn1(fn))(fn, v_12);
    }
}



// Code for vectorrd

static LispObject CC_vectorrd(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_17, v_18, v_19;
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
    v_18 = qvalue(basic_elt(env, 1)); // atts
    v_17 = basic_elt(env, 2); // (type other)
    {   LispObject fn = basic_elt(env, 4); // retattributes
    v_17 = (*qfn2(fn))(fn, v_18, v_17);
    }
    env = stack[-1];
    stack[0] = v_17;
    {   LispObject fn = basic_elt(env, 5); // matrixrowrd
    v_17 = (*qfn0(fn))(fn);
    }
    env = stack[-1];
    v_18 = v_17;
    v_19 = basic_elt(env, 3); // vectorml
    v_17 = stack[0];
    return list2star(v_19, v_17, v_18);
    return onevalue(v_17);
}



// Code for ldf!-simp

static LispObject CC_ldfKsimp(LispObject env,
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
    v_58 = v_2;
// end of prologue
    v_57 = v_58;
    if (v_57 == nil) goto v_6;
    else goto v_7;
v_6:
    v_57 = nil;
    goto v_5;
v_7:
    v_57 = v_58;
    if (!car_legal(v_57)) v_57 = cdrerror(v_57); else
    v_57 = cdr(v_57);
    if (v_57 == nil) goto v_10;
    else goto v_11;
v_10:
    v_57 = v_58;
    if (!car_legal(v_57)) v_57 = carerror(v_57); else
    v_57 = car(v_57);
    if (!car_legal(v_57)) v_57 = carerror(v_57); else
    v_57 = car(v_57);
    if (!car_legal(v_57)) v_58 = carerror(v_57); else
    v_58 = car(v_57);
    v_57 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 1); // to
    v_58 = (*qfn2(fn))(fn, v_58, v_57);
    }
    env = stack[-1];
    v_57 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_57 = cons(v_58, v_57);
    env = stack[-1];
    v_57 = ncons(v_57);
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // prepf
    v_57 = (*qfn1(fn))(fn, v_57);
    }
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // simp
    v_57 = (*qfn1(fn))(fn, v_57);
    }
    if (!car_legal(v_57)) v_57 = carerror(v_57); else
    v_57 = car(v_57);
    goto v_5;
v_11:
    v_57 = v_58;
    {   LispObject fn = basic_elt(env, 2); // prepf
    v_57 = (*qfn1(fn))(fn, v_57);
    }
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // simp
    v_57 = (*qfn1(fn))(fn, v_57);
    }
    env = stack[-1];
    if (!car_legal(v_57)) v_57 = carerror(v_57); else
    v_57 = car(v_57);
    v_58 = v_57;
    v_57 = v_58;
    if (!consp(v_57)) goto v_41;
    else goto v_42;
v_41:
    v_57 = lisp_true;
    goto v_40;
v_42:
    v_57 = v_58;
    if (!car_legal(v_57)) v_57 = carerror(v_57); else
    v_57 = car(v_57);
    v_57 = (consp(v_57) ? nil : lisp_true);
    goto v_40;
    v_57 = nil;
v_40:
    if (v_57 == nil) goto v_37;
    else goto v_38;
v_37:
    stack[0] = v_58;
    v_57 = v_58;
    {   LispObject fn = basic_elt(env, 4); // comfac
    v_57 = (*qfn1(fn))(fn, v_57);
    }
    env = stack[-1];
    if (!car_legal(v_57)) v_57 = cdrerror(v_57); else
    v_57 = cdr(v_57);
    {   LispObject fn = basic_elt(env, 5); // quotf
    v_57 = (*qfn2(fn))(fn, stack[0], v_57);
    }
    env = stack[-1];
    v_58 = v_57;
    goto v_36;
v_38:
v_36:
    v_57 = v_58;
    {
        LispObject fn = basic_elt(env, 6); // absf
        return (*qfn1(fn))(fn, v_57);
    }
    goto v_5;
    v_57 = nil;
v_5:
    return onevalue(v_57);
}



// Code for transmat1

static LispObject CC_transmat1(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_120, v_121, v_122;
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
    v_120 = stack[-6];
    if (!car_legal(v_120)) v_120 = carerror(v_120); else
    v_120 = car(v_120);
    {   LispObject fn = basic_elt(env, 5); // aeval
    v_120 = (*qfn1(fn))(fn, v_120);
    }
    env = stack[-8];
    if (!car_legal(v_120)) v_120 = cdrerror(v_120); else
    v_120 = cdr(v_120);
    stack[0] = v_120;
    v_120 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-5] = v_120;
    v_120 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-4] = v_120;
    v_120 = stack[-6];
    if (!car_legal(v_120)) v_120 = carerror(v_120); else
    v_120 = car(v_120);
    {   LispObject fn = basic_elt(env, 5); // aeval
    v_120 = (*qfn1(fn))(fn, v_120);
    }
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 6); // matlength
    v_120 = (*qfn1(fn))(fn, v_120);
    }
    env = stack[-8];
    if (!car_legal(v_120)) v_120 = cdrerror(v_120); else
    v_120 = cdr(v_120);
    v_121 = v_120;
    if (!car_legal(v_121)) stack[-1] = carerror(v_121); else
    stack[-1] = car(v_121);
    v_121 = basic_elt(env, 1); // spm
    v_120 = cons(v_121, v_120);
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 7); // mkempspmat
    v_120 = (*qfn2(fn))(fn, stack[-1], v_120);
    }
    env = stack[-8];
    stack[-7] = v_120;
    v_120 = nil;
    v_120 = ncons(v_120);
    env = stack[-8];
    v_120 = ncons(v_120);
    env = stack[-8];
    stack[-2] = v_120;
    v_120 = stack[0];
    stack[-1] = v_120;
v_37:
    v_120 = stack[-1];
    if (v_120 == nil) goto v_41;
    else goto v_42;
v_41:
    goto v_36;
v_42:
    v_120 = stack[-1];
    if (!car_legal(v_120)) v_120 = carerror(v_120); else
    v_120 = car(v_120);
    stack[0] = v_120;
    v_120 = stack[-5];
    v_120 = add1(v_120);
    env = stack[-8];
    stack[-5] = v_120;
    v_120 = stack[0];
    stack[0] = v_120;
v_54:
    v_120 = stack[0];
    if (v_120 == nil) goto v_58;
    else goto v_59;
v_58:
    goto v_53;
v_59:
    v_120 = stack[0];
    if (!car_legal(v_120)) v_120 = carerror(v_120); else
    v_120 = car(v_120);
    stack[-3] = v_120;
    v_120 = stack[-4];
    v_120 = add1(v_120);
    env = stack[-8];
    stack[-4] = v_120;
    v_121 = stack[-3];
    v_120 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_121 == v_120) goto v_70;
    else goto v_71;
v_70:
    goto v_69;
v_71:
    v_122 = stack[-4];
    v_121 = stack[-3];
    v_120 = stack[-2];
    v_120 = acons(v_122, v_121, v_120);
    env = stack[-8];
    stack[-2] = v_120;
    goto v_69;
v_69:
    v_120 = stack[0];
    if (!car_legal(v_120)) v_120 = cdrerror(v_120); else
    v_120 = cdr(v_120);
    stack[0] = v_120;
    goto v_54;
v_53:
    v_120 = stack[-2];
    v_120 = Lreverse(nil, v_120);
    env = stack[-8];
    stack[-2] = v_120;
    stack[0] = stack[-2];
    v_120 = nil;
    v_120 = ncons(v_120);
    env = stack[-8];
    v_120 = ncons(v_120);
    env = stack[-8];
    if (equal(stack[0], v_120)) goto v_88;
    v_121 = stack[-7];
    v_120 = stack[-5];
    stack[-3] = list2(v_121, v_120);
    env = stack[-8];
    stack[0] = stack[-7];
    v_120 = nil;
    v_120 = ncons(v_120);
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 8); // letmtr3
    v_120 = (*qfn4up(fn))(fn, stack[-3], stack[-2], stack[0], v_120);
    }
    env = stack[-8];
    goto v_86;
v_88:
v_86:
    v_120 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-4] = v_120;
    v_120 = nil;
    v_120 = ncons(v_120);
    env = stack[-8];
    v_120 = ncons(v_120);
    env = stack[-8];
    stack[-2] = v_120;
    v_120 = stack[-1];
    if (!car_legal(v_120)) v_120 = cdrerror(v_120); else
    v_120 = cdr(v_120);
    stack[-1] = v_120;
    goto v_37;
v_36:
    v_120 = stack[-6];
    if (!car_legal(v_120)) stack[-1] = carerror(v_120); else
    stack[-1] = car(v_120);
    stack[0] = basic_elt(env, 2); // avalue
    v_121 = basic_elt(env, 3); // sparse
    v_120 = stack[-7];
    v_120 = list2(v_121, v_120);
    env = stack[-8];
    v_120 = Lputprop(nil, stack[-1], stack[0], v_120);
    env = stack[-8];
    v_120 = stack[-6];
    if (!car_legal(v_120)) v_122 = carerror(v_120); else
    v_122 = car(v_120);
    v_121 = basic_elt(env, 4); // rtype
    v_120 = basic_elt(env, 3); // sparse
    v_120 = Lputprop(nil, v_122, v_121, v_120);
    v_120 = nil;
    return onevalue(v_120);
}



// Code for on!-double1

static LispObject CC_onKdouble1(LispObject env,
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
v_6:
    v_31 = stack[0];
    v_31 = Lconsp(nil, v_31);
    env = stack[-1];
    if (v_31 == nil) goto v_10;
    v_31 = stack[0];
    if (!car_legal(v_31)) v_31 = carerror(v_31); else
    v_31 = car(v_31);
    {   LispObject fn = basic_elt(env, 2); // doublep
    v_31 = (*qfn1(fn))(fn, v_31);
    }
    env = stack[-1];
    if (v_31 == nil) goto v_16;
    v_31 = lisp_true;
    setvalue(basic_elt(env, 1), v_31); // !*double
    goto v_5;
v_16:
    v_31 = stack[0];
    if (!car_legal(v_31)) v_31 = carerror(v_31); else
    v_31 = car(v_31);
    {   LispObject fn = basic_elt(env, 0); // on!-double1
    v_31 = (*qfn1(fn))(fn, v_31);
    }
    env = stack[-1];
    v_31 = stack[0];
    if (!car_legal(v_31)) v_31 = cdrerror(v_31); else
    v_31 = cdr(v_31);
    stack[0] = v_31;
    goto v_6;
    goto v_8;
v_10:
    v_31 = nil;
    goto v_5;
v_8:
    v_31 = nil;
v_5:
    return onevalue(v_31);
}



// Code for getupper

static LispObject CC_getupper(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_8, v_9;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_8 = v_2;
// end of prologue
    v_9 = qvalue(basic_elt(env, 1)); // metricu!*
    v_8 = Latsoc(nil, v_8, v_9);
    if (!car_legal(v_8)) v_8 = cdrerror(v_8); else
    v_8 = cdr(v_8);
    return onevalue(v_8);
}



// Code for replace2_parents

static LispObject CC_replace2_parents(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_26, v_27, v_28, v_29, v_30;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_27 = v_4;
    v_28 = v_3;
    v_29 = v_2;
// end of prologue
    v_30 = v_29;
    v_26 = v_27;
    if (!car_legal(v_26)) v_26 = carerror(v_26); else
    v_26 = car(v_26);
    if (equal(v_30, v_26)) goto v_8;
    else goto v_9;
v_8:
    v_30 = v_27;
    v_26 = v_28;
    if (!car_legal(v_30)) rplaca_fails(v_30);
    setcar(v_30, v_26);
    goto v_7;
v_9:
v_7:
    v_26 = v_27;
    if (!car_legal(v_26)) v_26 = cdrerror(v_26); else
    v_26 = cdr(v_26);
    if (equal(v_29, v_26)) goto v_18;
    else goto v_19;
v_18:
    v_26 = v_27;
    v_27 = v_28;
    if (!car_legal(v_26)) rplacd_fails(v_26);
    setcdr(v_26, v_27);
    goto v_17;
v_19:
    v_26 = nil;
v_17:
    return onevalue(v_26);
}



// Code for prepsq!*1

static LispObject CC_prepsqH1(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_425, v_426, v_427;
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
    v_425 = stack[-6];
    if (!consp(v_425)) goto v_21;
    else goto v_22;
v_21:
    v_425 = lisp_true;
    goto v_20;
v_22:
    v_425 = stack[-6];
    if (!car_legal(v_425)) v_425 = carerror(v_425); else
    v_425 = car(v_425);
    v_425 = (consp(v_425) ? nil : lisp_true);
    goto v_20;
    v_425 = nil;
v_20:
    if (v_425 == nil) goto v_17;
    else goto v_18;
v_17:
    v_425 = stack[-6];
    if (!car_legal(v_425)) v_425 = carerror(v_425); else
    v_425 = car(v_425);
    if (!car_legal(v_425)) v_425 = carerror(v_425); else
    v_425 = car(v_425);
    if (!car_legal(v_425)) v_426 = carerror(v_425); else
    v_426 = car(v_425);
    v_425 = qvalue(basic_elt(env, 1)); // factors!*
    v_425 = Lmember(nil, v_426, v_425);
    if (v_425 == nil) goto v_32;
    else goto v_31;
v_32:
    v_425 = stack[-6];
    if (!car_legal(v_425)) v_425 = carerror(v_425); else
    v_425 = car(v_425);
    if (!car_legal(v_425)) v_425 = carerror(v_425); else
    v_425 = car(v_425);
    if (!car_legal(v_425)) v_425 = carerror(v_425); else
    v_425 = car(v_425);
    if (!consp(v_425)) goto v_42;
    v_425 = stack[-6];
    if (!car_legal(v_425)) v_425 = carerror(v_425); else
    v_425 = car(v_425);
    if (!car_legal(v_425)) v_425 = carerror(v_425); else
    v_425 = car(v_425);
    if (!car_legal(v_425)) v_425 = carerror(v_425); else
    v_425 = car(v_425);
    if (!car_legal(v_425)) v_426 = carerror(v_425); else
    v_426 = car(v_425);
    v_425 = qvalue(basic_elt(env, 1)); // factors!*
    v_425 = Lmember(nil, v_426, v_425);
    goto v_40;
v_42:
    v_425 = nil;
    goto v_40;
    v_425 = nil;
v_40:
v_31:
    goto v_16;
v_18:
    v_425 = nil;
    goto v_16;
    v_425 = nil;
v_16:
    if (v_425 == nil) goto v_14;
    v_426 = stack[-5];
    v_425 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_426 == v_425) goto v_63;
    else goto v_64;
v_63:
    v_425 = stack[-6];
    if (!car_legal(v_425)) v_425 = carerror(v_425); else
    v_425 = car(v_425);
    if (!car_legal(v_425)) v_426 = cdrerror(v_425); else
    v_426 = cdr(v_425);
    v_425 = stack[-5];
    stack[0] = cons(v_426, v_425);
    env = stack[-8];
    v_425 = stack[-6];
    if (!car_legal(v_425)) v_425 = carerror(v_425); else
    v_425 = car(v_425);
    if (!car_legal(v_425)) v_426 = carerror(v_425); else
    v_426 = car(v_425);
    v_425 = stack[-4];
    v_425 = cons(v_426, v_425);
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 10); // prepsq!*0
    v_425 = (*qfn2(fn))(fn, stack[0], v_425);
    }
    env = stack[-8];
    stack[0] = v_425;
    goto v_62;
v_64:
    v_425 = stack[-6];
    if (!car_legal(v_425)) v_425 = carerror(v_425); else
    v_425 = car(v_425);
    if (!car_legal(v_425)) v_425 = carerror(v_425); else
    v_425 = car(v_425);
    if (!car_legal(v_425)) v_425 = cdrerror(v_425); else
    v_425 = cdr(v_425);
    stack[-2] = v_425;
    v_425 = stack[-5];
    stack[-1] = v_425;
    v_425 = stack[-6];
    if (!car_legal(v_425)) v_425 = carerror(v_425); else
    v_425 = car(v_425);
    if (!car_legal(v_425)) v_425 = carerror(v_425); else
    v_425 = car(v_425);
    if (!car_legal(v_425)) v_426 = carerror(v_425); else
    v_426 = car(v_425);
    v_425 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 11); // to
    v_426 = (*qfn2(fn))(fn, v_426, v_425);
    }
    env = stack[-8];
    v_425 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_425 = cons(v_426, v_425);
    env = stack[-8];
    v_425 = ncons(v_425);
    env = stack[-8];
    stack[0] = v_425;
v_101:
    v_426 = stack[-1];
    v_425 = stack[0];
    {   LispObject fn = basic_elt(env, 12); // quotfm
    v_425 = (*qfn2(fn))(fn, v_426, v_425);
    }
    env = stack[-8];
    stack[-7] = v_425;
    if (v_425 == nil) goto v_104;
    else goto v_105;
v_104:
    goto v_100;
v_105:
    v_425 = stack[-7];
    stack[-1] = v_425;
    v_425 = stack[-2];
    v_425 = sub1(v_425);
    env = stack[-8];
    stack[-2] = v_425;
    goto v_101;
v_100:
    v_425 = stack[-6];
    if (!car_legal(v_425)) v_425 = carerror(v_425); else
    v_425 = car(v_425);
    if (!car_legal(v_425)) v_426 = cdrerror(v_425); else
    v_426 = cdr(v_425);
    v_425 = stack[-1];
    stack[0] = cons(v_426, v_425);
    env = stack[-8];
    v_426 = stack[-2];
    v_425 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_425 = static_cast<LispObject>(greaterp2(v_426, v_425));
    v_425 = v_425 ? lisp_true : nil;
    env = stack[-8];
    if (v_425 == nil) goto v_122;
    v_425 = stack[-6];
    if (!car_legal(v_425)) v_425 = carerror(v_425); else
    v_425 = car(v_425);
    if (!car_legal(v_425)) v_425 = carerror(v_425); else
    v_425 = car(v_425);
    if (!car_legal(v_425)) v_426 = carerror(v_425); else
    v_426 = car(v_425);
    v_425 = stack[-2];
    {   LispObject fn = basic_elt(env, 11); // to
    v_426 = (*qfn2(fn))(fn, v_426, v_425);
    }
    env = stack[-8];
    v_425 = stack[-4];
    v_425 = cons(v_426, v_425);
    env = stack[-8];
    goto v_120;
v_122:
    v_426 = stack[-2];
    v_425 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_425 = static_cast<LispObject>(lessp2(v_426, v_425));
    v_425 = v_425 ? lisp_true : nil;
    env = stack[-8];
    if (v_425 == nil) goto v_135;
    v_427 = basic_elt(env, 2); // expt
    v_425 = stack[-6];
    if (!car_legal(v_425)) v_425 = carerror(v_425); else
    v_425 = car(v_425);
    if (!car_legal(v_425)) v_425 = carerror(v_425); else
    v_425 = car(v_425);
    if (!car_legal(v_425)) v_426 = carerror(v_425); else
    v_426 = car(v_425);
    v_425 = stack[-2];
    v_426 = list3(v_427, v_426, v_425);
    env = stack[-8];
    v_425 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 13); // mksp
    v_426 = (*qfn2(fn))(fn, v_426, v_425);
    }
    env = stack[-8];
    v_425 = stack[-4];
    v_425 = cons(v_426, v_425);
    env = stack[-8];
    goto v_120;
v_135:
    v_425 = stack[-4];
    goto v_120;
    v_425 = nil;
v_120:
    {   LispObject fn = basic_elt(env, 10); // prepsq!*0
    v_425 = (*qfn2(fn))(fn, stack[0], v_425);
    }
    env = stack[-8];
    stack[0] = v_425;
    goto v_62;
    stack[0] = nil;
v_62:
    v_425 = stack[-6];
    if (!car_legal(v_425)) v_426 = cdrerror(v_425); else
    v_426 = cdr(v_425);
    v_425 = stack[-5];
    v_426 = cons(v_426, v_425);
    env = stack[-8];
    v_425 = stack[-4];
    {   LispObject fn = basic_elt(env, 10); // prepsq!*0
    v_425 = (*qfn2(fn))(fn, v_426, v_425);
    }
    env = stack[-8];
    {
        LispObject v_436 = stack[0];
        LispObject fn = basic_elt(env, 14); // nconc!*
        return (*qfn2(fn))(fn, v_436, v_425);
    }
v_14:
    v_425 = stack[-5];
    if (!consp(v_425)) goto v_165;
    else goto v_166;
v_165:
    v_425 = lisp_true;
    goto v_164;
v_166:
    v_425 = stack[-5];
    if (!car_legal(v_425)) v_425 = carerror(v_425); else
    v_425 = car(v_425);
    v_425 = (consp(v_425) ? nil : lisp_true);
    goto v_164;
    v_425 = nil;
v_164:
    if (v_425 == nil) goto v_161;
    else goto v_162;
v_161:
    v_425 = qvalue(basic_elt(env, 3)); // kord!*
    stack[-3] = v_425;
v_177:
    v_425 = stack[-3];
    if (v_425 == nil) goto v_181;
    else goto v_182;
v_181:
    goto v_176;
v_182:
    v_425 = stack[-3];
    if (!car_legal(v_425)) v_425 = carerror(v_425); else
    v_425 = car(v_425);
    stack[-2] = v_425;
    v_425 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-1] = v_425;
    v_426 = stack[-2];
    v_425 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 11); // to
    v_426 = (*qfn2(fn))(fn, v_426, v_425);
    }
    env = stack[-8];
    v_425 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_425 = cons(v_426, v_425);
    env = stack[-8];
    v_425 = ncons(v_425);
    env = stack[-8];
    stack[0] = v_425;
v_202:
    v_426 = stack[-5];
    v_425 = stack[0];
    {   LispObject fn = basic_elt(env, 12); // quotfm
    v_425 = (*qfn2(fn))(fn, v_426, v_425);
    }
    env = stack[-8];
    stack[-7] = v_425;
    if (v_425 == nil) goto v_205;
    else goto v_206;
v_205:
    goto v_201;
v_206:
    v_425 = stack[-1];
    v_425 = sub1(v_425);
    env = stack[-8];
    stack[-1] = v_425;
    v_425 = stack[-7];
    stack[-5] = v_425;
    goto v_202;
v_201:
    v_426 = stack[-1];
    v_425 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_425 = static_cast<LispObject>(lessp2(v_426, v_425));
    v_425 = v_425 ? lisp_true : nil;
    env = stack[-8];
    if (v_425 == nil) goto v_217;
    v_427 = basic_elt(env, 2); // expt
    v_426 = stack[-2];
    v_425 = stack[-1];
    v_426 = list3(v_427, v_426, v_425);
    env = stack[-8];
    v_425 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 13); // mksp
    v_426 = (*qfn2(fn))(fn, v_426, v_425);
    }
    env = stack[-8];
    v_425 = stack[-4];
    v_425 = cons(v_426, v_425);
    env = stack[-8];
    stack[-4] = v_425;
    goto v_215;
v_217:
v_215:
    v_425 = stack[-3];
    if (!car_legal(v_425)) v_425 = cdrerror(v_425); else
    v_425 = cdr(v_425);
    stack[-3] = v_425;
    goto v_177;
v_176:
    goto v_160;
v_162:
v_160:
    v_425 = stack[-6];
    {   LispObject fn = basic_elt(env, 15); // kernlp
    v_425 = (*qfn1(fn))(fn, v_425);
    }
    env = stack[-8];
    if (v_425 == nil) goto v_234;
    v_426 = stack[-4];
    v_425 = stack[-6];
    {   LispObject fn = basic_elt(env, 16); // mkkl
    v_425 = (*qfn2(fn))(fn, v_426, v_425);
    }
    env = stack[-8];
    stack[-6] = v_425;
    v_425 = nil;
    stack[-4] = v_425;
    goto v_232;
v_234:
v_232:
    v_425 = qvalue(basic_elt(env, 4)); // dnl!*
    if (v_425 == nil) goto v_244;
    v_425 = qvalue(basic_elt(env, 5)); // !*allfac
    if (v_425 == nil) goto v_248;
    else goto v_249;
v_248:
    v_425 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_247;
v_249:
    v_425 = stack[-6];
    {   LispObject fn = basic_elt(env, 17); // ckrn
    v_425 = (*qfn1(fn))(fn, v_425);
    }
    env = stack[-8];
    goto v_247;
    v_425 = nil;
v_247:
    stack[-1] = v_425;
    v_426 = stack[-1];
    v_425 = qvalue(basic_elt(env, 4)); // dnl!*
    {   LispObject fn = basic_elt(env, 18); // ckrn!*
    v_425 = (*qfn2(fn))(fn, v_426, v_425);
    }
    env = stack[-8];
    stack[-7] = v_425;
    v_426 = stack[-1];
    v_425 = stack[-7];
    {   LispObject fn = basic_elt(env, 19); // quotof
    v_425 = (*qfn2(fn))(fn, v_426, v_425);
    }
    env = stack[-8];
    v_426 = stack[-6];
    v_425 = stack[-7];
    {   LispObject fn = basic_elt(env, 19); // quotof
    v_425 = (*qfn2(fn))(fn, v_426, v_425);
    }
    env = stack[-8];
    stack[-6] = v_425;
    v_426 = stack[-5];
    v_425 = stack[-7];
    {   LispObject fn = basic_elt(env, 19); // quotof
    v_425 = (*qfn2(fn))(fn, v_426, v_425);
    }
    env = stack[-8];
    stack[-5] = v_425;
    goto v_242;
v_244:
v_242:
    v_425 = qvalue(basic_elt(env, 6)); // upl!*
    if (v_425 == nil) goto v_271;
    v_425 = stack[-5];
    {   LispObject fn = basic_elt(env, 17); // ckrn
    v_425 = (*qfn1(fn))(fn, v_425);
    }
    env = stack[-8];
    stack[0] = v_425;
    v_426 = stack[0];
    v_425 = qvalue(basic_elt(env, 6)); // upl!*
    {   LispObject fn = basic_elt(env, 18); // ckrn!*
    v_425 = (*qfn2(fn))(fn, v_426, v_425);
    }
    env = stack[-8];
    stack[-7] = v_425;
    v_426 = stack[0];
    v_425 = stack[-7];
    {   LispObject fn = basic_elt(env, 19); // quotof
    v_425 = (*qfn2(fn))(fn, v_426, v_425);
    }
    env = stack[-8];
    stack[0] = v_425;
    v_426 = stack[-6];
    v_425 = stack[-7];
    {   LispObject fn = basic_elt(env, 19); // quotof
    v_425 = (*qfn2(fn))(fn, v_426, v_425);
    }
    env = stack[-8];
    stack[-6] = v_425;
    v_426 = stack[-5];
    v_425 = stack[-7];
    {   LispObject fn = basic_elt(env, 19); // quotof
    v_425 = (*qfn2(fn))(fn, v_426, v_425);
    }
    env = stack[-8];
    stack[-5] = v_425;
    goto v_269;
v_271:
    v_425 = qvalue(basic_elt(env, 7)); // !*div
    if (v_425 == nil) goto v_288;
    v_425 = stack[-5];
    {   LispObject fn = basic_elt(env, 17); // ckrn
    v_425 = (*qfn1(fn))(fn, v_425);
    }
    env = stack[-8];
    stack[0] = v_425;
    goto v_269;
v_288:
    v_425 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[0] = v_425;
    goto v_269;
v_269:
    stack[-1] = stack[-6];
    v_426 = stack[-5];
    v_425 = stack[0];
    {   LispObject fn = basic_elt(env, 19); // quotof
    v_425 = (*qfn2(fn))(fn, v_426, v_425);
    }
    env = stack[-8];
    v_425 = cons(stack[-1], v_425);
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 20); // canonsq
    v_425 = (*qfn1(fn))(fn, v_425);
    }
    env = stack[-8];
    stack[-6] = v_425;
    v_425 = stack[-6];
    if (!car_legal(v_425)) v_426 = carerror(v_425); else
    v_426 = car(v_425);
    v_425 = stack[0];
    {   LispObject fn = basic_elt(env, 19); // quotof
    v_426 = (*qfn2(fn))(fn, v_426, v_425);
    }
    env = stack[-8];
    v_425 = stack[-6];
    if (!car_legal(v_425)) v_425 = cdrerror(v_425); else
    v_425 = cdr(v_425);
    v_425 = cons(v_426, v_425);
    env = stack[-8];
    stack[-6] = v_425;
    v_425 = qvalue(basic_elt(env, 5)); // !*allfac
    if (v_425 == nil) goto v_311;
    v_425 = stack[-6];
    if (!car_legal(v_425)) v_425 = carerror(v_425); else
    v_425 = car(v_425);
    {   LispObject fn = basic_elt(env, 17); // ckrn
    v_425 = (*qfn1(fn))(fn, v_425);
    }
    env = stack[-8];
    stack[-1] = v_425;
    v_425 = stack[-6];
    if (!car_legal(v_425)) v_425 = cdrerror(v_425); else
    v_425 = cdr(v_425);
    {   LispObject fn = basic_elt(env, 17); // ckrn
    v_425 = (*qfn1(fn))(fn, v_425);
    }
    env = stack[-8];
    stack[0] = v_425;
    v_426 = stack[-1];
    v_425 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_426 == v_425) goto v_330;
    v_425 = lisp_true;
    goto v_328;
v_330:
    v_426 = stack[0];
    v_425 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_425 = Lneq_2(nil, v_426, v_425);
    env = stack[-8];
    goto v_328;
    v_425 = nil;
v_328:
    if (v_425 == nil) goto v_326;
    v_426 = stack[-1];
    v_425 = stack[-6];
    if (!car_legal(v_425)) v_425 = carerror(v_425); else
    v_425 = car(v_425);
    if (equal(v_426, v_425)) goto v_342;
    v_425 = lisp_true;
    goto v_340;
v_342:
    v_426 = stack[0];
    v_425 = stack[-6];
    if (!car_legal(v_425)) v_425 = cdrerror(v_425); else
    v_425 = cdr(v_425);
    v_425 = Lneq_2(nil, v_426, v_425);
    env = stack[-8];
    goto v_340;
    v_425 = nil;
v_340:
    goto v_324;
v_326:
    v_425 = nil;
    goto v_324;
    v_425 = nil;
v_324:
    if (v_425 == nil) goto v_322;
    v_425 = stack[-6];
    if (!car_legal(v_425)) v_426 = cdrerror(v_425); else
    v_426 = cdr(v_425);
    v_425 = stack[0];
    {   LispObject fn = basic_elt(env, 19); // quotof
    v_425 = (*qfn2(fn))(fn, v_426, v_425);
    }
    env = stack[-8];
    stack[-5] = v_425;
    v_425 = stack[-6];
    if (!car_legal(v_425)) v_426 = carerror(v_425); else
    v_426 = car(v_425);
    v_425 = stack[-1];
    {   LispObject fn = basic_elt(env, 19); // quotof
    v_425 = (*qfn2(fn))(fn, v_426, v_425);
    }
    env = stack[-8];
    stack[-6] = v_425;
    v_426 = stack[-4];
    v_425 = stack[-1];
    {   LispObject fn = basic_elt(env, 16); // mkkl
    v_425 = (*qfn2(fn))(fn, v_426, v_425);
    }
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 21); // prepf
    v_425 = (*qfn1(fn))(fn, v_425);
    }
    env = stack[-8];
    stack[-4] = v_425;
    v_425 = stack[0];
    {   LispObject fn = basic_elt(env, 21); // prepf
    v_425 = (*qfn1(fn))(fn, v_425);
    }
    env = stack[-8];
    stack[-1] = v_425;
    v_426 = stack[-4];
    v_425 = stack[-6];
    {   LispObject fn = basic_elt(env, 22); // addfactors
    v_425 = (*qfn2(fn))(fn, v_426, v_425);
    }
    env = stack[-8];
    stack[-6] = v_425;
    v_426 = stack[-1];
    v_425 = stack[-5];
    {   LispObject fn = basic_elt(env, 22); // addfactors
    v_425 = (*qfn2(fn))(fn, v_426, v_425);
    }
    env = stack[-8];
    stack[-5] = v_425;
    v_426 = stack[-5];
    v_425 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_426 == v_425) goto v_378;
    else goto v_379;
v_378:
    v_425 = stack[-6];
    {
        LispObject fn = basic_elt(env, 23); // rmplus
        return (*qfn1(fn))(fn, v_425);
    }
v_379:
    v_426 = stack[-6];
    v_425 = basic_elt(env, 8); // minus
    if (!consp(v_426)) goto v_390;
    v_426 = car(v_426);
    if (v_426 == v_425) goto v_389;
    else goto v_390;
v_389:
    stack[0] = basic_elt(env, 8); // minus
    v_427 = basic_elt(env, 9); // quotient
    v_425 = stack[-6];
    if (!car_legal(v_425)) v_425 = cdrerror(v_425); else
    v_425 = cdr(v_425);
    if (!car_legal(v_425)) v_426 = carerror(v_425); else
    v_426 = car(v_425);
    v_425 = stack[-5];
    v_425 = list3(v_427, v_426, v_425);
    env = stack[-8];
    v_425 = list2(stack[0], v_425);
    goto v_388;
v_390:
    v_427 = basic_elt(env, 9); // quotient
    v_426 = stack[-6];
    v_425 = stack[-5];
    v_425 = list3(v_427, v_426, v_425);
    goto v_388;
    v_425 = nil;
v_388:
    return ncons(v_425);
    v_425 = nil;
    goto v_10;
v_322:
    goto v_309;
v_311:
v_309:
    v_425 = stack[-4];
    if (v_425 == nil) goto v_411;
    v_425 = stack[-4];
    {   LispObject fn = basic_elt(env, 24); // exchk
    stack[0] = (*qfn1(fn))(fn, v_425);
    }
    env = stack[-8];
    v_425 = stack[-6];
    {   LispObject fn = basic_elt(env, 25); // prepsq
    v_425 = (*qfn1(fn))(fn, v_425);
    }
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 26); // aconc!*
    v_425 = (*qfn2(fn))(fn, stack[0], v_425);
    }
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 27); // retimes
    v_425 = (*qfn1(fn))(fn, v_425);
    }
    return ncons(v_425);
v_411:
    v_425 = stack[-6];
    {   LispObject fn = basic_elt(env, 25); // prepsq
    v_425 = (*qfn1(fn))(fn, v_425);
    }
    env = stack[-8];
    {
        LispObject fn = basic_elt(env, 23); // rmplus
        return (*qfn1(fn))(fn, v_425);
    }
    v_425 = nil;
v_10:
    return onevalue(v_425);
}



// Code for reduce

static LispObject CC_reduce(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_39 = v_2;
// end of prologue
    stack[0] = v_39;
    v_39 = qvalue(basic_elt(env, 1)); // !*yyy
    if (v_39 == nil) goto v_13;
    v_40 = stack[0];
    v_39 = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // reduce!-ratios
    v_39 = (*qfn2(fn))(fn, v_40, v_39);
    }
    env = stack[-3];
    stack[0] = v_39;
    goto v_11;
v_13:
v_11:
    v_39 = stack[-1];
    {   LispObject fn = basic_elt(env, 4); // set!-weights
    v_39 = (*qfn1(fn))(fn, v_39);
    }
    env = stack[-3];
    stack[-2] = v_39;
    v_39 = qvalue(basic_elt(env, 2)); // !*xxx
    if (v_39 == nil) goto v_23;
    v_41 = stack[0];
    v_40 = stack[-1];
    v_39 = stack[-2];
    {   LispObject fn = basic_elt(env, 5); // reduce!-columns
    v_39 = (*qfn3(fn))(fn, v_41, v_40, v_39);
    }
    env = stack[-3];
    stack[0] = v_39;
    goto v_21;
v_23:
v_21:
    v_39 = qvalue(basic_elt(env, 2)); // !*xxx
    if (v_39 == nil) goto v_32;
    v_41 = stack[0];
    v_40 = stack[-1];
    v_39 = stack[-2];
    {   LispObject fn = basic_elt(env, 6); // reduce!-weights
    v_39 = (*qfn3(fn))(fn, v_41, v_40, v_39);
    }
    stack[0] = v_39;
    goto v_30;
v_32:
v_30:
    v_39 = stack[0];
    return onevalue(v_39);
}



// Code for fs!:minusp!:

static LispObject CC_fsTminuspT(LispObject env,
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
        LispObject fn = basic_elt(env, 1); // fs!:minusp
        return (*qfn1(fn))(fn, v_7);
    }
}



// Code for xnsiz

static LispObject CC_xnsiz(LispObject env,
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
    {   LispObject fn = basic_elt(env, 2); // xnsiz1
    v_10 = (*qfn1(fn))(fn, v_9);
    }
    env = stack[0];
    v_9 = qvalue(basic_elt(env, 1)); // !!log2of10
    v_9 = quot2(v_10, v_9);
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 3); // ceiling
        return (*qfn1(fn))(fn, v_9);
    }
}



// Code for lalr_collect_nonterminals

static LispObject CC_lalr_collect_nonterminals(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_44;
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
    v_44 = v_2;
// end of prologue
    stack[-3] = v_44;
    v_44 = stack[-3];
    if (v_44 == nil) goto v_14;
    else goto v_15;
v_14:
    v_44 = nil;
    goto v_9;
v_15:
    v_44 = stack[-3];
    if (!car_legal(v_44)) v_44 = carerror(v_44); else
    v_44 = car(v_44);
    if (!car_legal(v_44)) v_44 = carerror(v_44); else
    v_44 = car(v_44);
    v_44 = Lintern(nil, v_44);
    env = stack[-4];
    v_44 = ncons(v_44);
    env = stack[-4];
    stack[-1] = v_44;
    stack[-2] = v_44;
v_10:
    v_44 = stack[-3];
    if (!car_legal(v_44)) v_44 = cdrerror(v_44); else
    v_44 = cdr(v_44);
    stack[-3] = v_44;
    v_44 = stack[-3];
    if (v_44 == nil) goto v_29;
    else goto v_30;
v_29:
    v_44 = stack[-2];
    goto v_9;
v_30:
    stack[0] = stack[-1];
    v_44 = stack[-3];
    if (!car_legal(v_44)) v_44 = carerror(v_44); else
    v_44 = car(v_44);
    if (!car_legal(v_44)) v_44 = carerror(v_44); else
    v_44 = car(v_44);
    v_44 = Lintern(nil, v_44);
    env = stack[-4];
    v_44 = ncons(v_44);
    env = stack[-4];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_44);
    v_44 = stack[-1];
    if (!car_legal(v_44)) v_44 = cdrerror(v_44); else
    v_44 = cdr(v_44);
    stack[-1] = v_44;
    goto v_10;
v_9:
    {
        LispObject fn = basic_elt(env, 1); // lalr_remove_duplicates
        return (*qfn1(fn))(fn, v_44);
    }
}



// Code for simpexpt2

static LispObject CC_simpexpt2(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_428, v_429, v_430;
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
    stack[0] = nil;
    v_429 = stack[-3];
    v_428 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_429 == v_428) goto v_13;
    else goto v_14;
v_13:
    v_429 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_428 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_429, v_428);
v_14:
    v_428 = stack[-2];
    if (!car_legal(v_428)) v_428 = carerror(v_428); else
    v_428 = car(v_428);
    stack[-4] = v_428;
    v_428 = stack[-3];
    v_428 = Lconsp(nil, v_428);
    env = stack[-5];
    if (v_428 == nil) goto v_25;
    v_428 = stack[-3];
    if (!car_legal(v_428)) v_429 = carerror(v_428); else
    v_429 = car(v_428);
    v_428 = basic_elt(env, 1); // expt
    if (v_429 == v_428) goto v_34;
    else goto v_35;
v_34:
    v_428 = qvalue(basic_elt(env, 2)); // !*precise_complex
    v_428 = (v_428 == nil ? lisp_true : nil);
    goto v_33;
v_35:
    v_428 = nil;
    goto v_33;
    v_428 = nil;
v_33:
    if (v_428 == nil) goto v_31;
    v_428 = stack[-3];
    if (!car_legal(v_428)) v_428 = cdrerror(v_428); else
    v_428 = cdr(v_428);
    if (!car_legal(v_428)) v_428 = cdrerror(v_428); else
    v_428 = cdr(v_428);
    if (!car_legal(v_428)) v_428 = carerror(v_428); else
    v_428 = car(v_428);
    {   LispObject fn = basic_elt(env, 14); // simp
    v_429 = (*qfn1(fn))(fn, v_428);
    }
    env = stack[-5];
    stack[-4] = v_429;
    v_428 = stack[-2];
    {   LispObject fn = basic_elt(env, 15); // multsq
    v_428 = (*qfn2(fn))(fn, v_429, v_428);
    }
    env = stack[-5];
    stack[-2] = v_428;
    v_428 = qvalue(basic_elt(env, 3)); // !*precise
    if (v_428 == nil) goto v_54;
    v_428 = stack[-4];
    if (!car_legal(v_428)) v_428 = carerror(v_428); else
    v_428 = car(v_428);
    if (is_number(v_428)) goto v_58;
    else goto v_54;
v_58:
    v_428 = stack[-4];
    if (!car_legal(v_428)) v_428 = carerror(v_428); else
    v_428 = car(v_428);
    v_428 = Levenp(nil, v_428);
    env = stack[-5];
    if (v_428 == nil) goto v_54;
    v_429 = basic_elt(env, 4); // abs
    v_428 = stack[-3];
    if (!car_legal(v_428)) v_428 = cdrerror(v_428); else
    v_428 = cdr(v_428);
    if (!car_legal(v_428)) v_428 = carerror(v_428); else
    v_428 = car(v_428);
    v_428 = list2(v_429, v_428);
    env = stack[-5];
    stack[-3] = v_428;
    goto v_52;
v_54:
    v_428 = stack[-3];
    if (!car_legal(v_428)) v_428 = cdrerror(v_428); else
    v_428 = cdr(v_428);
    if (!car_legal(v_428)) v_428 = carerror(v_428); else
    v_428 = car(v_428);
    stack[-3] = v_428;
    goto v_52;
v_52:
    v_430 = stack[-3];
    v_429 = stack[-2];
    v_428 = stack[-1];
    {
        LispObject fn = basic_elt(env, 16); // simpexpt1
        return (*qfn3(fn))(fn, v_430, v_429, v_428);
    }
v_31:
    v_428 = stack[-3];
    if (!car_legal(v_428)) v_429 = carerror(v_428); else
    v_429 = car(v_428);
    v_428 = basic_elt(env, 5); // sqrt
    if (v_429 == v_428) goto v_83;
    else goto v_84;
v_83:
    v_428 = qvalue(basic_elt(env, 6)); // !*keepsqrts
    v_428 = (v_428 == nil ? lisp_true : nil);
    goto v_82;
v_84:
    v_428 = nil;
    goto v_82;
    v_428 = nil;
v_82:
    if (v_428 == nil) goto v_80;
    v_428 = stack[-3];
    if (!car_legal(v_428)) v_428 = cdrerror(v_428); else
    v_428 = cdr(v_428);
    if (!car_legal(v_428)) stack[0] = carerror(v_428); else
    stack[0] = car(v_428);
    v_429 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_428 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_429 = cons(v_429, v_428);
    env = stack[-5];
    v_428 = stack[-2];
    {   LispObject fn = basic_elt(env, 15); // multsq
    v_429 = (*qfn2(fn))(fn, v_429, v_428);
    }
    env = stack[-5];
    v_428 = stack[-1];
    stack[-3] = stack[0];
    stack[-2] = v_429;
    stack[-1] = v_428;
    goto v_1;
v_80:
    v_428 = stack[-3];
    if (!car_legal(v_428)) v_429 = carerror(v_428); else
    v_429 = car(v_428);
    v_428 = basic_elt(env, 7); // times
    if (v_429 == v_428) goto v_107;
    else goto v_108;
v_107:
    v_428 = qvalue(basic_elt(env, 3)); // !*precise
    if (v_428 == nil) goto v_114;
    else goto v_115;
v_114:
    v_428 = qvalue(basic_elt(env, 8)); // !*modular
    v_428 = (v_428 == nil ? lisp_true : nil);
    goto v_113;
v_115:
    v_428 = nil;
    goto v_113;
    v_428 = nil;
v_113:
    goto v_106;
v_108:
    v_428 = nil;
    goto v_106;
    v_428 = nil;
v_106:
    if (v_428 == nil) goto v_104;
    v_429 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_428 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_428 = cons(v_429, v_428);
    env = stack[-5];
    stack[-4] = v_428;
    v_428 = stack[-3];
    if (!car_legal(v_428)) v_428 = cdrerror(v_428); else
    v_428 = cdr(v_428);
    stack[0] = v_428;
v_131:
    v_428 = stack[0];
    if (v_428 == nil) goto v_136;
    else goto v_137;
v_136:
    goto v_130;
v_137:
    v_428 = stack[0];
    if (!car_legal(v_428)) v_428 = carerror(v_428); else
    v_428 = car(v_428);
    v_430 = v_428;
    v_429 = stack[-2];
    v_428 = stack[-1];
    {   LispObject fn = basic_elt(env, 16); // simpexpt1
    v_429 = (*qfn3(fn))(fn, v_430, v_429, v_428);
    }
    env = stack[-5];
    v_428 = stack[-4];
    {   LispObject fn = basic_elt(env, 15); // multsq
    v_428 = (*qfn2(fn))(fn, v_429, v_428);
    }
    env = stack[-5];
    stack[-4] = v_428;
    v_428 = stack[0];
    if (!car_legal(v_428)) v_428 = cdrerror(v_428); else
    v_428 = cdr(v_428);
    stack[0] = v_428;
    goto v_131;
v_130:
    v_428 = stack[-4];
    goto v_10;
v_104:
    v_428 = stack[-3];
    if (!car_legal(v_428)) v_429 = carerror(v_428); else
    v_429 = car(v_428);
    v_428 = basic_elt(env, 7); // times
    if (v_429 == v_428) goto v_156;
    else goto v_157;
v_156:
    v_428 = stack[-3];
    if (!car_legal(v_428)) v_428 = cdrerror(v_428); else
    v_428 = cdr(v_428);
    {   LispObject fn = basic_elt(env, 17); // split!-sign
    v_428 = (*qfn1(fn))(fn, v_428);
    }
    env = stack[-5];
    stack[0] = v_428;
    if (v_428 == nil) goto v_163;
    else goto v_164;
v_163:
    v_428 = nil;
    goto v_162;
v_164:
    v_428 = stack[0];
    if (!car_legal(v_428)) v_428 = carerror(v_428); else
    v_428 = car(v_428);
    goto v_162;
    v_428 = nil;
v_162:
    goto v_155;
v_157:
    v_428 = nil;
    goto v_155;
    v_428 = nil;
v_155:
    if (v_428 == nil) goto v_153;
    v_428 = stack[0];
    if (!car_legal(v_428)) v_428 = cdrerror(v_428); else
    v_428 = cdr(v_428);
    if (!car_legal(v_428)) v_429 = carerror(v_428); else
    v_429 = car(v_428);
    v_428 = stack[0];
    if (!car_legal(v_428)) v_428 = cdrerror(v_428); else
    v_428 = cdr(v_428);
    if (!car_legal(v_428)) v_428 = cdrerror(v_428); else
    v_428 = cdr(v_428);
    v_428 = Lappend_2(nil, v_429, v_428);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 18); // retimes
    v_430 = (*qfn1(fn))(fn, v_428);
    }
    env = stack[-5];
    v_429 = stack[-2];
    v_428 = stack[-1];
    {   LispObject fn = basic_elt(env, 16); // simpexpt1
    v_428 = (*qfn3(fn))(fn, v_430, v_429, v_428);
    }
    env = stack[-5];
    stack[-4] = v_428;
    v_428 = stack[0];
    if (!car_legal(v_428)) v_428 = carerror(v_428); else
    v_428 = car(v_428);
    stack[0] = v_428;
v_190:
    v_428 = stack[0];
    if (v_428 == nil) goto v_195;
    else goto v_196;
v_195:
    goto v_189;
v_196:
    v_428 = stack[0];
    if (!car_legal(v_428)) v_428 = carerror(v_428); else
    v_428 = car(v_428);
    v_430 = v_428;
    v_429 = stack[-2];
    v_428 = stack[-1];
    {   LispObject fn = basic_elt(env, 16); // simpexpt1
    v_429 = (*qfn3(fn))(fn, v_430, v_429, v_428);
    }
    env = stack[-5];
    v_428 = stack[-4];
    {   LispObject fn = basic_elt(env, 15); // multsq
    v_428 = (*qfn2(fn))(fn, v_429, v_428);
    }
    env = stack[-5];
    stack[-4] = v_428;
    v_428 = stack[0];
    if (!car_legal(v_428)) v_428 = cdrerror(v_428); else
    v_428 = cdr(v_428);
    stack[0] = v_428;
    goto v_190;
v_189:
    v_428 = stack[-4];
    goto v_10;
v_153:
    v_428 = stack[-3];
    if (!car_legal(v_428)) v_429 = carerror(v_428); else
    v_429 = car(v_428);
    v_428 = basic_elt(env, 9); // quotient
    if (v_429 == v_428) goto v_215;
    else goto v_216;
v_215:
    v_428 = qvalue(basic_elt(env, 3)); // !*precise
    if (v_428 == nil) goto v_222;
    else goto v_223;
v_222:
    v_428 = lisp_true;
    goto v_221;
v_223:
    v_428 = stack[-3];
    if (!car_legal(v_428)) v_428 = cdrerror(v_428); else
    v_428 = cdr(v_428);
    if (!car_legal(v_428)) v_428 = cdrerror(v_428); else
    v_428 = cdr(v_428);
    if (!car_legal(v_428)) v_428 = carerror(v_428); else
    v_428 = car(v_428);
    {   LispObject fn = basic_elt(env, 19); // posnump
    v_428 = (*qfn1(fn))(fn, v_428);
    }
    env = stack[-5];
    if (v_428 == nil) goto v_230;
    else goto v_231;
v_230:
    v_428 = nil;
    goto v_229;
v_231:
    v_428 = stack[-2];
    {   LispObject fn = basic_elt(env, 20); // prepsq
    v_428 = (*qfn1(fn))(fn, v_428);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 19); // posnump
    v_428 = (*qfn1(fn))(fn, v_428);
    }
    env = stack[-5];
    goto v_229;
    v_428 = nil;
v_229:
    goto v_221;
    v_428 = nil;
v_221:
    goto v_214;
v_216:
    v_428 = nil;
    goto v_214;
    v_428 = nil;
v_214:
    if (v_428 == nil) goto v_212;
    v_428 = stack[-1];
    if (v_428 == nil) goto v_252;
    else goto v_253;
v_252:
    v_428 = qvalue(basic_elt(env, 10)); // !*mcd
    goto v_251;
v_253:
    v_428 = nil;
    goto v_251;
    v_428 = nil;
v_251:
    if (v_428 == nil) goto v_249;
    v_428 = stack[-3];
    {   LispObject fn = basic_elt(env, 21); // simp!*
    v_428 = (*qfn1(fn))(fn, v_428);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 20); // prepsq
    v_430 = (*qfn1(fn))(fn, v_428);
    }
    env = stack[-5];
    v_429 = stack[-2];
    v_428 = lisp_true;
    {
        LispObject fn = basic_elt(env, 16); // simpexpt1
        return (*qfn3(fn))(fn, v_430, v_429, v_428);
    }
v_249:
    v_428 = stack[-2];
    {   LispObject fn = basic_elt(env, 20); // prepsq
    v_428 = (*qfn1(fn))(fn, v_428);
    }
    env = stack[-5];
    stack[-2] = v_428;
    v_428 = stack[-3];
    if (!car_legal(v_428)) v_428 = cdrerror(v_428); else
    v_428 = cdr(v_428);
    if (!car_legal(v_428)) v_429 = carerror(v_428); else
    v_429 = car(v_428);
    v_428 = stack[-2];
    v_428 = list2(v_429, v_428);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 22); // simpexpt
    stack[0] = (*qfn1(fn))(fn, v_428);
    }
    env = stack[-5];
    v_428 = stack[-3];
    if (!car_legal(v_428)) v_428 = cdrerror(v_428); else
    v_428 = cdr(v_428);
    if (!car_legal(v_428)) v_428 = cdrerror(v_428); else
    v_428 = cdr(v_428);
    if (!car_legal(v_428)) v_429 = carerror(v_428); else
    v_429 = car(v_428);
    v_428 = stack[-2];
    v_428 = list2(v_429, v_428);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 22); // simpexpt
    v_428 = (*qfn1(fn))(fn, v_428);
    }
    env = stack[-5];
    {
        LispObject v_436 = stack[0];
        LispObject fn = basic_elt(env, 23); // quotsq
        return (*qfn2(fn))(fn, v_436, v_428);
    }
v_212:
    v_428 = stack[-3];
    if (!car_legal(v_428)) v_429 = carerror(v_428); else
    v_429 = car(v_428);
    v_428 = basic_elt(env, 11); // minus
    if (v_429 == v_428) goto v_285;
    else goto v_286;
v_285:
    v_428 = qvalue(basic_elt(env, 3)); // !*precise
    if (v_428 == nil) goto v_292;
    else goto v_293;
v_292:
    v_428 = stack[-3];
    if (!car_legal(v_428)) v_428 = cdrerror(v_428); else
    v_428 = cdr(v_428);
    if (!car_legal(v_428)) v_429 = carerror(v_428); else
    v_429 = car(v_428);
    v_428 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_428 = (v_429 == v_428 ? lisp_true : nil);
    v_428 = (v_428 == nil ? lisp_true : nil);
    goto v_291;
v_293:
    v_428 = nil;
    goto v_291;
    v_428 = nil;
v_291:
    goto v_284;
v_286:
    v_428 = nil;
    goto v_284;
    v_428 = nil;
v_284:
    if (v_428 == nil) goto v_282;
    v_428 = stack[-2];
    {   LispObject fn = basic_elt(env, 20); // prepsq
    v_428 = (*qfn1(fn))(fn, v_428);
    }
    env = stack[-5];
    stack[-1] = v_428;
    v_429 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    v_428 = stack[-1];
    v_428 = list2(v_429, v_428);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 22); // simpexpt
    stack[0] = (*qfn1(fn))(fn, v_428);
    }
    env = stack[-5];
    v_428 = stack[-3];
    if (!car_legal(v_428)) v_428 = cdrerror(v_428); else
    v_428 = cdr(v_428);
    if (!car_legal(v_428)) v_429 = carerror(v_428); else
    v_429 = car(v_428);
    v_428 = stack[-1];
    v_428 = list2(v_429, v_428);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 22); // simpexpt
    v_428 = (*qfn1(fn))(fn, v_428);
    }
    env = stack[-5];
    {
        LispObject v_437 = stack[0];
        LispObject fn = basic_elt(env, 15); // multsq
        return (*qfn2(fn))(fn, v_437, v_428);
    }
v_282:
    goto v_23;
v_25:
v_23:
    v_428 = stack[-1];
    if (v_428 == nil) goto v_323;
    else goto v_324;
v_323:
    v_428 = qvalue(basic_elt(env, 12)); // dmode!*
    if (v_428 == nil) goto v_328;
    v_428 = stack[-3];
    if (symbolp(v_428)) goto v_333;
    else goto v_328;
v_333:
    v_429 = stack[-3];
    v_428 = qvalue(basic_elt(env, 12)); // dmode!*
    v_428 = get(v_429, v_428);
    env = stack[-5];
    if (v_428 == nil) goto v_328;
    goto v_329;
v_328:
    v_428 = stack[-3];
    {   LispObject fn = basic_elt(env, 21); // simp!*
    v_428 = (*qfn1(fn))(fn, v_428);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 20); // prepsq
    v_428 = (*qfn1(fn))(fn, v_428);
    }
    env = stack[-5];
    stack[-3] = v_428;
    goto v_327;
v_329:
v_327:
    v_430 = stack[-3];
    v_429 = stack[-2];
    v_428 = lisp_true;
    {
        LispObject fn = basic_elt(env, 16); // simpexpt1
        return (*qfn3(fn))(fn, v_430, v_429, v_428);
    }
v_324:
    v_428 = stack[-3];
    if (is_number(v_428)) goto v_348;
    else goto v_347;
v_348:
    v_428 = stack[-3];
    v_428 = static_cast<LispObject>(zerop(v_428));
    v_428 = v_428 ? lisp_true : nil;
    env = stack[-5];
    if (v_428 == nil) goto v_347;
    v_429 = nil;
    v_428 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_429, v_428);
v_347:
    v_428 = stack[-4];
    if (is_number(v_428)) goto v_357;
    v_428 = stack[-4];
    {   LispObject fn = basic_elt(env, 24); // prepf
    v_428 = (*qfn1(fn))(fn, v_428);
    }
    env = stack[-5];
    stack[-4] = v_428;
    goto v_322;
v_357:
v_322:
    v_428 = stack[-2];
    if (!car_legal(v_428)) v_428 = cdrerror(v_428); else
    v_428 = cdr(v_428);
    {   LispObject fn = basic_elt(env, 24); // prepf
    v_428 = (*qfn1(fn))(fn, v_428);
    }
    env = stack[-5];
    stack[-2] = v_428;
    v_429 = stack[-4];
    v_428 = qvalue(basic_elt(env, 13)); // frlis!*
    v_428 = Lmemq(nil, v_429, v_428);
    if (v_428 == nil) goto v_367;
    v_429 = stack[-2];
    v_428 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_429 == v_428) goto v_372;
    else goto v_367;
v_372:
    v_430 = stack[-3];
    v_429 = stack[-4];
    v_428 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_428 = acons(v_430, v_429, v_428);
    env = stack[-5];
    v_429 = ncons(v_428);
    v_428 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_429, v_428);
v_367:
    v_428 = qvalue(basic_elt(env, 10)); // !*mcd
    if (v_428 == nil) goto v_386;
    else goto v_384;
v_386:
    v_428 = stack[-4];
    if (is_number(v_428)) goto v_392;
    v_428 = lisp_true;
    goto v_390;
v_392:
    v_429 = stack[-2];
    v_428 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_429 == v_428) goto v_400;
    v_428 = lisp_true;
    goto v_398;
v_400:
    v_428 = stack[-3];
    if (!consp(v_428)) goto v_408;
    else goto v_409;
v_408:
    v_428 = lisp_true;
    goto v_407;
v_409:
    v_428 = stack[-3];
    {   LispObject fn = basic_elt(env, 21); // simp!*
    v_428 = (*qfn1(fn))(fn, v_428);
    }
    env = stack[-5];
    if (!car_legal(v_428)) v_429 = cdrerror(v_428); else
    v_429 = cdr(v_428);
    v_428 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_428 = Lneq_2(nil, v_429, v_428);
    env = stack[-5];
    goto v_407;
    v_428 = nil;
v_407:
    goto v_398;
    v_428 = nil;
v_398:
    goto v_390;
    v_428 = nil;
v_390:
    if (v_428 == nil) goto v_388;
    else goto v_384;
v_388:
    goto v_385;
v_384:
    v_430 = stack[-3];
    v_429 = stack[-4];
    v_428 = stack[-2];
    {
        LispObject fn = basic_elt(env, 25); // simpx1
        return (*qfn3(fn))(fn, v_430, v_429, v_428);
    }
v_385:
    v_429 = stack[-3];
    v_428 = stack[-4];
    {
        LispObject fn = basic_elt(env, 26); // mksq
        return (*qfn2(fn))(fn, v_429, v_428);
    }
    v_428 = nil;
v_10:
    return onevalue(v_428);
}



// Code for pasf_uprap

static LispObject CC_pasf_uprap(LispObject env,
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
    v_7 = nil;
    {
        LispObject fn = basic_elt(env, 1); // pasf_uprap1
        return (*qfn2(fn))(fn, v_8, v_7);
    }
}



// Code for lowupperlimitrd

static LispObject CC_lowupperlimitrd(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// end of prologue
    stack[-2] = nil;
    {   LispObject fn = basic_elt(env, 5); // mathml
    v_26 = (*qfn0(fn))(fn);
    }
    env = stack[-3];
    stack[0] = v_26;
    {   LispObject fn = basic_elt(env, 6); // lex
    v_26 = (*qfn0(fn))(fn);
    }
    env = stack[-3];
    v_27 = qvalue(basic_elt(env, 1)); // char
    v_26 = basic_elt(env, 2); // (!/ l o w l i m i t)
    if (equal(v_27, v_26)) goto v_11;
    else goto v_12;
v_11:
    {   LispObject fn = basic_elt(env, 7); // upperlimitrd
    v_26 = (*qfn0(fn))(fn);
    }
    env = stack[-3];
    stack[-2] = v_26;
    goto v_10;
v_12:
    v_27 = basic_elt(env, 3); // "</lowlimit>"
    v_26 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    {   LispObject fn = basic_elt(env, 8); // errorml
    v_26 = (*qfn2(fn))(fn, v_27, v_26);
    }
    env = stack[-3];
    goto v_10;
v_10:
    stack[-1] = basic_elt(env, 4); // lowupperlimit
    v_26 = stack[-2];
    v_26 = ncons(v_26);
    {
        LispObject v_31 = stack[-1];
        LispObject v_32 = stack[0];
        return list2star(v_31, v_32, v_26);
    }
    return onevalue(v_26);
}



// Code for spcol_dim

static LispObject CC_spcol_dim(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_30;
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
    v_30 = qvalue(basic_elt(env, 1)); // !*fast_la
    if (v_30 == nil) goto v_13;
    else goto v_14;
v_13:
    v_30 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // matrixp
    v_30 = (*qfn1(fn))(fn, v_30);
    }
    env = stack[-1];
    v_30 = (v_30 == nil ? lisp_true : nil);
    goto v_12;
v_14:
    v_30 = nil;
    goto v_12;
    v_30 = nil;
v_12:
    if (v_30 == nil) goto v_10;
    v_30 = basic_elt(env, 2); // "Error in spcol_dim: input should be a matrix."
    {   LispObject fn = basic_elt(env, 4); // rederr
    v_30 = (*qfn1(fn))(fn, v_30);
    }
    env = stack[-1];
    goto v_8;
v_10:
v_8:
    v_30 = stack[0];
    {   LispObject fn = basic_elt(env, 5); // spmatlength
    v_30 = (*qfn1(fn))(fn, v_30);
    }
    if (!car_legal(v_30)) v_30 = cdrerror(v_30); else
    v_30 = cdr(v_30);
    if (!car_legal(v_30)) v_30 = cdrerror(v_30); else
    v_30 = cdr(v_30);
    if (!car_legal(v_30)) v_30 = carerror(v_30); else
    v_30 = car(v_30);
    return onevalue(v_30);
}



// Code for inszzz

static LispObject CC_inszzz(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_77 = stack[-1];
    if (v_77 == nil) goto v_15;
    else goto v_16;
v_15:
    v_77 = lisp_true;
    goto v_14;
v_16:
    v_77 = stack[-1];
    if (!car_legal(v_77)) v_77 = carerror(v_77); else
    v_77 = car(v_77);
    if (!car_legal(v_77)) v_78 = carerror(v_77); else
    v_78 = car(v_77);
    v_77 = stack[-2];
    if (!car_legal(v_77)) v_77 = carerror(v_77); else
    v_77 = car(v_77);
    v_77 = static_cast<LispObject>(lessp2(v_78, v_77));
    v_77 = v_77 ? lisp_true : nil;
    env = stack[-4];
    goto v_14;
    v_77 = nil;
v_14:
    if (v_77 == nil) goto v_12;
    stack[0] = stack[-3];
    v_78 = stack[-2];
    v_77 = stack[-1];
    v_77 = cons(v_78, v_77);
    env = stack[-4];
    {
        LispObject v_83 = stack[0];
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn2(fn))(fn, v_83, v_77);
    }
v_12:
    v_77 = stack[-1];
    if (!car_legal(v_77)) v_77 = carerror(v_77); else
    v_77 = car(v_77);
    if (!car_legal(v_77)) v_78 = carerror(v_77); else
    v_78 = car(v_77);
    v_77 = stack[-2];
    if (!car_legal(v_77)) v_77 = carerror(v_77); else
    v_77 = car(v_77);
    if (equal(v_78, v_77)) goto v_32;
    else goto v_33;
v_32:
    v_77 = stack[-1];
    if (!car_legal(v_77)) v_77 = carerror(v_77); else
    v_77 = car(v_77);
    if (!car_legal(v_77)) stack[0] = cdrerror(v_77); else
    stack[0] = cdr(v_77);
    v_77 = stack[-1];
    if (!car_legal(v_77)) v_77 = carerror(v_77); else
    v_77 = car(v_77);
    if (!car_legal(v_77)) v_77 = cdrerror(v_77); else
    v_77 = cdr(v_77);
    if (!car_legal(v_77)) v_78 = carerror(v_77); else
    v_78 = car(v_77);
    v_77 = stack[-2];
    if (!car_legal(v_77)) v_77 = cdrerror(v_77); else
    v_77 = cdr(v_77);
    if (!car_legal(v_77)) v_77 = carerror(v_77); else
    v_77 = car(v_77);
    {   LispObject fn = basic_elt(env, 2); // dm!-plus
    v_77 = (*qfn2(fn))(fn, v_78, v_77);
    }
    env = stack[-4];
    if (!car_legal(stack[0])) rplaca_fails(stack[0]);
    setcar(stack[0], v_77);
    v_77 = stack[-1];
    if (!car_legal(v_77)) v_77 = carerror(v_77); else
    v_77 = car(v_77);
    if (!car_legal(v_77)) v_77 = cdrerror(v_77); else
    v_77 = cdr(v_77);
    if (!car_legal(v_77)) v_77 = carerror(v_77); else
    v_77 = car(v_77);
    {   LispObject fn = basic_elt(env, 3); // zeropp
    v_77 = (*qfn1(fn))(fn, v_77);
    }
    env = stack[-4];
    if (v_77 == nil) goto v_54;
    v_78 = stack[-3];
    v_77 = stack[-1];
    if (!car_legal(v_77)) v_77 = cdrerror(v_77); else
    v_77 = cdr(v_77);
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn2(fn))(fn, v_78, v_77);
    }
v_54:
    v_78 = stack[-3];
    v_77 = stack[-1];
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn2(fn))(fn, v_78, v_77);
    }
    goto v_10;
v_33:
    v_77 = stack[-1];
    if (!car_legal(v_77)) v_78 = carerror(v_77); else
    v_78 = car(v_77);
    v_77 = stack[-3];
    v_77 = cons(v_78, v_77);
    env = stack[-4];
    stack[-3] = v_77;
    v_77 = stack[-1];
    if (!car_legal(v_77)) v_77 = cdrerror(v_77); else
    v_77 = cdr(v_77);
    stack[-1] = v_77;
    goto v_8;
v_10:
    v_77 = nil;
    return onevalue(v_77);
}



// Code for qsum!-simpexpt1

static LispObject CC_qsumKsimpexpt1(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_36 = stack[0];
    if (!car_legal(v_36)) v_37 = carerror(v_36); else
    v_37 = car(v_36);
    v_36 = basic_elt(env, 1); // minus
    if (!consp(v_37)) goto v_7;
    v_37 = car(v_37);
    if (v_37 == v_36) goto v_6;
    else goto v_7;
v_6:
    v_37 = basic_elt(env, 2); // (minus 1)
    v_36 = stack[0];
    if (!car_legal(v_36)) v_36 = cdrerror(v_36); else
    v_36 = cdr(v_36);
    if (!car_legal(v_36)) v_36 = carerror(v_36); else
    v_36 = car(v_36);
    v_36 = list2(v_37, v_36);
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 4); // basic!-simpexpt
    stack[-1] = (*qfn1(fn))(fn, v_36);
    }
    env = stack[-2];
    v_36 = stack[0];
    if (!car_legal(v_36)) v_36 = carerror(v_36); else
    v_36 = car(v_36);
    if (!car_legal(v_36)) v_36 = cdrerror(v_36); else
    v_36 = cdr(v_36);
    if (!car_legal(v_36)) v_37 = carerror(v_36); else
    v_37 = car(v_36);
    v_36 = stack[0];
    if (!car_legal(v_36)) v_36 = cdrerror(v_36); else
    v_36 = cdr(v_36);
    if (!car_legal(v_36)) v_36 = carerror(v_36); else
    v_36 = car(v_36);
    v_36 = list2(v_37, v_36);
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 0); // qsum!-simpexpt1
    v_36 = (*qfn1(fn))(fn, v_36);
    }
    env = stack[-2];
    {
        LispObject v_40 = stack[-1];
        LispObject fn = basic_elt(env, 5); // multsq
        return (*qfn2(fn))(fn, v_40, v_36);
    }
v_7:
    v_36 = nil;
// Binding inside!-qsum!-simpexpt!*
// FLUIDBIND: reloadenv=2 litvec-offset=3 saveloc=1
{   bind_fluid_stack bind_fluid_var(-2, 3, -1);
    setvalue(basic_elt(env, 3), v_36); // inside!-qsum!-simpexpt!*
    v_36 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // basic!-simpexpt
    v_36 = (*qfn1(fn))(fn, v_36);
    }
    ;}  // end of a binding scope
    goto v_5;
    v_36 = nil;
v_5:
    return onevalue(v_36);
}



// Code for simp_without_resimp

static LispObject CC_simp_without_resimp(LispObject env,
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
    v_10 = nil;
// Binding !*resimp
// FLUIDBIND: reloadenv=1 litvec-offset=1 saveloc=0
{   bind_fluid_stack bind_fluid_var(-1, 1, 0);
    setvalue(basic_elt(env, 1), v_10); // !*resimp
    v_10 = v_11;
    {   LispObject fn = basic_elt(env, 2); // simp
    v_10 = (*qfn1(fn))(fn, v_10);
    }
    ;}  // end of a binding scope
    return onevalue(v_10);
}



// Code for groebinvokecritm

static LispObject CC_groebinvokecritm(LispObject env,
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    stack[-1] = v_3;
    stack[-2] = v_2;
// end of prologue
    v_36 = stack[-1];
    stack[-3] = v_36;
v_8:
    v_36 = stack[-3];
    if (v_36 == nil) goto v_12;
    else goto v_13;
v_12:
    goto v_7;
v_13:
    v_36 = stack[-3];
    if (!car_legal(v_36)) v_36 = carerror(v_36); else
    v_36 = car(v_36);
    stack[0] = v_36;
    v_36 = stack[-2];
    if (!car_legal(v_36)) v_37 = carerror(v_36); else
    v_37 = car(v_36);
    v_36 = stack[0];
    if (!car_legal(v_36)) v_36 = carerror(v_36); else
    v_36 = car(v_36);
    {   LispObject fn = basic_elt(env, 2); // buchvevdivides!?
    v_36 = (*qfn2(fn))(fn, v_37, v_36);
    }
    env = stack[-4];
    if (v_36 == nil) goto v_22;
    v_36 = qvalue(basic_elt(env, 1)); // mcount!*
    v_36 = add1(v_36);
    env = stack[-4];
    setvalue(basic_elt(env, 1), v_36); // mcount!*
    v_37 = stack[0];
    v_36 = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // groedeletip
    v_36 = (*qfn2(fn))(fn, v_37, v_36);
    }
    env = stack[-4];
    stack[-1] = v_36;
    goto v_20;
v_22:
v_20:
    v_36 = stack[-3];
    if (!car_legal(v_36)) v_36 = cdrerror(v_36); else
    v_36 = cdr(v_36);
    stack[-3] = v_36;
    goto v_8;
v_7:
    v_36 = stack[-1];
    return onevalue(v_36);
}



// Code for sc_columnscalarproduct

static LispObject CC_sc_columnscalarproduct(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_39 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    {   LispObject fn = basic_elt(env, 1); // sc_simp
    v_39 = (*qfn1(fn))(fn, v_39);
    }
    env = stack[-5];
    stack[0] = v_39;
    v_39 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-4] = v_39;
v_13:
    v_39 = stack[-3];
    {   LispObject fn = basic_elt(env, 2); // fast!-row!-dim
    v_40 = (*qfn1(fn))(fn, v_39);
    }
    env = stack[-5];
    v_39 = stack[-4];
    v_39 = difference2(v_40, v_39);
    env = stack[-5];
    v_39 = Lminusp(nil, v_39);
    env = stack[-5];
    if (v_39 == nil) goto v_18;
    goto v_12;
v_18:
    stack[-1] = stack[0];
    v_41 = stack[-3];
    v_40 = stack[-4];
    v_39 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 3); // sc_getmat
    stack[0] = (*qfn3(fn))(fn, v_41, v_40, v_39);
    }
    env = stack[-5];
    v_41 = stack[-2];
    v_40 = stack[-4];
    v_39 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 3); // sc_getmat
    v_39 = (*qfn3(fn))(fn, v_41, v_40, v_39);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 4); // sc_multsq
    v_39 = (*qfn2(fn))(fn, stack[0], v_39);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 5); // sc_addsq
    v_39 = (*qfn2(fn))(fn, stack[-1], v_39);
    }
    env = stack[-5];
    stack[0] = v_39;
    v_39 = stack[-4];
    v_39 = add1(v_39);
    env = stack[-5];
    stack[-4] = v_39;
    goto v_13;
v_12:
    v_39 = stack[0];
    return onevalue(v_39);
}



// Code for mkbc

static LispObject CC_mkbc(LispObject env,
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
v_7:
    v_69 = stack[-1];
    v_69 = (is_number(v_69) ? lisp_true : nil);
    if (v_69 == nil) goto v_10;
    else goto v_9;
v_10:
    v_69 = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // f2dip11
    v_69 = (*qfn1(fn))(fn, v_69);
    }
    env = stack[-3];
v_9:
    v_69 = stack[0];
    v_69 = (is_number(v_69) ? lisp_true : nil);
    if (v_69 == nil) goto v_17;
    else goto v_16;
v_17:
    v_69 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // f2dip11
    v_69 = (*qfn1(fn))(fn, v_69);
    }
    env = stack[-3];
v_16:
    v_69 = qvalue(basic_elt(env, 1)); // !*grmod!*
    if (v_69 == nil) goto v_25;
    v_69 = stack[0];
    v_69 = Lmodular_reciprocal(nil, v_69);
    env = stack[-3];
    v_69 = times2(stack[-1], v_69);
    env = stack[-3];
    {
        LispObject fn = basic_elt(env, 4); // bcfi
        return (*qfn1(fn))(fn, v_69);
    }
v_25:
    v_70 = stack[0];
    v_69 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_70 == v_69) goto v_32;
    else goto v_33;
v_32:
    v_70 = stack[-1];
    v_69 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_70 == v_69) goto v_38;
    else goto v_39;
v_38:
    v_69 = basic_elt(env, 2); // (1 . 1)
    goto v_6;
v_39:
    v_70 = stack[-1];
    v_69 = stack[0];
    return cons(v_70, v_69);
    goto v_23;
v_33:
    v_69 = stack[0];
    {   LispObject fn = basic_elt(env, 5); // minusf
    v_69 = (*qfn1(fn))(fn, v_69);
    }
    env = stack[-3];
    if (v_69 == nil) goto v_49;
    v_69 = stack[-1];
    {   LispObject fn = basic_elt(env, 6); // negf
    v_69 = (*qfn1(fn))(fn, v_69);
    }
    env = stack[-3];
    stack[-1] = v_69;
    v_69 = stack[0];
    {   LispObject fn = basic_elt(env, 6); // negf
    v_69 = (*qfn1(fn))(fn, v_69);
    }
    env = stack[-3];
    stack[0] = v_69;
    goto v_7;
v_49:
    v_70 = stack[-1];
    v_69 = stack[0];
    {   LispObject fn = basic_elt(env, 7); // gcdf
    v_69 = (*qfn2(fn))(fn, v_70, v_69);
    }
    env = stack[-3];
    stack[-2] = v_69;
    v_70 = stack[-1];
    v_69 = stack[-2];
    {   LispObject fn = basic_elt(env, 8); // quotfx
    stack[-1] = (*qfn2(fn))(fn, v_70, v_69);
    }
    env = stack[-3];
    v_70 = stack[0];
    v_69 = stack[-2];
    {   LispObject fn = basic_elt(env, 8); // quotfx
    v_69 = (*qfn2(fn))(fn, v_70, v_69);
    }
    {
        LispObject v_74 = stack[-1];
        return cons(v_74, v_69);
    }
v_23:
    v_69 = nil;
v_6:
    return onevalue(v_69);
}



// Code for applysetop

static LispObject CC_applysetop(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_184, v_185, v_186;
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(9);
// copy arguments values to proper place
    v_185 = v_3;
    stack[-6] = v_2;
// end of prologue
    stack[-5] = nil;
    v_184 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-7] = v_184;
    v_184 = v_185;
    stack[-4] = v_184;
    v_184 = stack[-4];
    if (v_184 == nil) goto v_20;
    else goto v_21;
v_20:
    v_184 = nil;
    goto v_15;
v_21:
    v_184 = stack[-4];
    if (!car_legal(v_184)) v_184 = carerror(v_184); else
    v_184 = car(v_184);
    stack[0] = v_184;
    v_184 = stack[0];
    {   LispObject fn = basic_elt(env, 5); // reval
    v_185 = (*qfn1(fn))(fn, v_184);
    }
    env = stack[-8];
    stack[0] = v_185;
    v_184 = basic_elt(env, 1); // list
    if (!consp(v_185)) goto v_31;
    v_185 = car(v_185);
    if (v_185 == v_184) goto v_30;
    else goto v_31;
v_30:
    v_184 = stack[0];
    if (!car_legal(v_184)) v_184 = cdrerror(v_184); else
    v_184 = cdr(v_184);
    {   LispObject fn = basic_elt(env, 6); // delete!-dups
    v_184 = (*qfn1(fn))(fn, v_184);
    }
    env = stack[-8];
    stack[0] = v_184;
    v_185 = stack[-7];
    v_184 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_185 == v_184) goto v_41;
    else goto v_42;
v_41:
    v_184 = stack[0];
    goto v_40;
v_42:
    v_186 = stack[-6];
    v_185 = stack[-7];
    v_184 = stack[0];
    v_184 = Lapply2(nil, v_186, v_185, v_184);
    env = stack[-8];
    goto v_40;
    v_184 = nil;
v_40:
    stack[-7] = v_184;
    v_184 = stack[0];
    {   LispObject fn = basic_elt(env, 7); // make!-set
    v_184 = (*qfn1(fn))(fn, v_184);
    }
    env = stack[-8];
    goto v_29;
v_31:
    v_184 = stack[0];
    if (symbolp(v_184)) goto v_54;
    v_184 = stack[0];
    v_184 = Lconsp(nil, v_184);
    env = stack[-8];
    if (v_184 == nil) goto v_58;
    v_184 = stack[0];
    if (!car_legal(v_184)) v_185 = carerror(v_184); else
    v_185 = car(v_184);
    v_184 = basic_elt(env, 2); // setvalued
    v_184 = Lflagp(nil, v_185, v_184);
    env = stack[-8];
    if (v_184 == nil) goto v_58;
    goto v_54;
v_58:
    goto v_55;
v_54:
    v_185 = stack[0];
    v_184 = stack[-5];
    v_184 = Lmember(nil, v_185, v_184);
    if (v_184 == nil) goto v_69;
    else goto v_70;
v_69:
    v_185 = stack[0];
    v_184 = stack[-5];
    v_184 = cons(v_185, v_184);
    env = stack[-8];
    stack[-5] = v_184;
    goto v_68;
v_70:
v_68:
    v_184 = stack[0];
    goto v_29;
v_55:
    v_185 = stack[0];
    v_184 = basic_elt(env, 3); // "set"
    {   LispObject fn = basic_elt(env, 8); // typerr
    v_184 = (*qfn2(fn))(fn, v_185, v_184);
    }
    env = stack[-8];
    goto v_29;
    v_184 = nil;
v_29:
    v_184 = ncons(v_184);
    env = stack[-8];
    stack[-2] = v_184;
    stack[-3] = v_184;
v_16:
    v_184 = stack[-4];
    if (!car_legal(v_184)) v_184 = cdrerror(v_184); else
    v_184 = cdr(v_184);
    stack[-4] = v_184;
    v_184 = stack[-4];
    if (v_184 == nil) goto v_87;
    else goto v_88;
v_87:
    v_184 = stack[-3];
    goto v_15;
v_88:
    stack[-1] = stack[-2];
    v_184 = stack[-4];
    if (!car_legal(v_184)) v_184 = carerror(v_184); else
    v_184 = car(v_184);
    stack[0] = v_184;
    v_184 = stack[0];
    {   LispObject fn = basic_elt(env, 5); // reval
    v_185 = (*qfn1(fn))(fn, v_184);
    }
    env = stack[-8];
    stack[0] = v_185;
    v_184 = basic_elt(env, 1); // list
    if (!consp(v_185)) goto v_99;
    v_185 = car(v_185);
    if (v_185 == v_184) goto v_98;
    else goto v_99;
v_98:
    v_184 = stack[0];
    if (!car_legal(v_184)) v_184 = cdrerror(v_184); else
    v_184 = cdr(v_184);
    {   LispObject fn = basic_elt(env, 6); // delete!-dups
    v_184 = (*qfn1(fn))(fn, v_184);
    }
    env = stack[-8];
    stack[0] = v_184;
    v_185 = stack[-7];
    v_184 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_185 == v_184) goto v_109;
    else goto v_110;
v_109:
    v_184 = stack[0];
    goto v_108;
v_110:
    v_186 = stack[-6];
    v_185 = stack[-7];
    v_184 = stack[0];
    v_184 = Lapply2(nil, v_186, v_185, v_184);
    env = stack[-8];
    goto v_108;
    v_184 = nil;
v_108:
    stack[-7] = v_184;
    v_184 = stack[0];
    {   LispObject fn = basic_elt(env, 7); // make!-set
    v_184 = (*qfn1(fn))(fn, v_184);
    }
    env = stack[-8];
    goto v_97;
v_99:
    v_184 = stack[0];
    if (symbolp(v_184)) goto v_122;
    v_184 = stack[0];
    v_184 = Lconsp(nil, v_184);
    env = stack[-8];
    if (v_184 == nil) goto v_126;
    v_184 = stack[0];
    if (!car_legal(v_184)) v_185 = carerror(v_184); else
    v_185 = car(v_184);
    v_184 = basic_elt(env, 2); // setvalued
    v_184 = Lflagp(nil, v_185, v_184);
    env = stack[-8];
    if (v_184 == nil) goto v_126;
    goto v_122;
v_126:
    goto v_123;
v_122:
    v_185 = stack[0];
    v_184 = stack[-5];
    v_184 = Lmember(nil, v_185, v_184);
    if (v_184 == nil) goto v_137;
    else goto v_138;
v_137:
    v_185 = stack[0];
    v_184 = stack[-5];
    v_184 = cons(v_185, v_184);
    env = stack[-8];
    stack[-5] = v_184;
    goto v_136;
v_138:
v_136:
    v_184 = stack[0];
    goto v_97;
v_123:
    v_185 = stack[0];
    v_184 = basic_elt(env, 3); // "set"
    {   LispObject fn = basic_elt(env, 8); // typerr
    v_184 = (*qfn2(fn))(fn, v_185, v_184);
    }
    env = stack[-8];
    goto v_97;
    v_184 = nil;
v_97:
    v_184 = ncons(v_184);
    env = stack[-8];
    if (!car_legal(stack[-1])) rplacd_fails(stack[-1]);
    setcdr(stack[-1], v_184);
    v_184 = stack[-2];
    if (!car_legal(v_184)) v_184 = cdrerror(v_184); else
    v_184 = cdr(v_184);
    stack[-2] = v_184;
    goto v_16;
v_15:
    v_186 = v_184;
    v_184 = stack[-5];
    if (v_184 == nil) goto v_157;
    stack[0] = stack[-6];
    v_185 = stack[-6];
    v_184 = basic_elt(env, 4); // setdiff
    if (v_185 == v_184) goto v_163;
    else goto v_164;
v_163:
    v_184 = v_186;
    goto v_162;
v_164:
    v_185 = stack[-7];
    v_184 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_185 == v_184) goto v_168;
    else goto v_169;
v_168:
    v_184 = stack[-5];
    goto v_162;
v_169:
    v_184 = stack[-7];
    {   LispObject fn = basic_elt(env, 7); // make!-set
    v_185 = (*qfn1(fn))(fn, v_184);
    }
    env = stack[-8];
    v_184 = stack[-5];
    v_184 = cons(v_185, v_184);
    goto v_162;
    v_184 = nil;
v_162:
    {
        LispObject v_195 = stack[0];
        return cons(v_195, v_184);
    }
v_157:
    v_184 = stack[-7];
    {   LispObject fn = basic_elt(env, 7); // make!-set
    v_184 = (*qfn1(fn))(fn, v_184);
    }
    env = stack[-8];
    {
        LispObject fn = basic_elt(env, 9); // aeval
        return (*qfn1(fn))(fn, v_184);
    }
    v_184 = nil;
    return onevalue(v_184);
}



// Code for mod!-dump1

static LispObject CC_modKdump1(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
v_9:
    v_32 = stack[-1];
    if (v_32 == nil) goto v_12;
    else goto v_13;
v_12:
    v_32 = stack[-4];
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn1(fn))(fn, v_32);
    }
v_13:
    v_32 = stack[-1];
    if (!car_legal(v_32)) v_32 = carerror(v_32); else
    v_32 = car(v_32);
    if (!car_legal(v_32)) stack[0] = carerror(v_32); else
    stack[0] = car(v_32);
    v_34 = stack[-3];
    v_33 = stack[-2];
    v_32 = stack[-1];
    if (!car_legal(v_32)) v_32 = carerror(v_32); else
    v_32 = car(v_32);
    if (!car_legal(v_32)) v_32 = cdrerror(v_32); else
    v_32 = cdr(v_32);
    {   LispObject fn = basic_elt(env, 2); // l!-subst
    v_33 = (*qfn3(fn))(fn, v_34, v_33, v_32);
    }
    env = stack[-5];
    v_32 = stack[-4];
    v_32 = acons(stack[0], v_33, v_32);
    env = stack[-5];
    stack[-4] = v_32;
    v_32 = stack[-1];
    if (!car_legal(v_32)) v_32 = cdrerror(v_32); else
    v_32 = cdr(v_32);
    stack[-1] = v_32;
    goto v_9;
    v_32 = nil;
    return onevalue(v_32);
}



// Code for quotodd

static LispObject CC_quotodd(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_28, v_29, v_30;
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
    v_29 = v_3;
    v_30 = v_2;
// end of prologue
    v_28 = v_30;
    if (!consp(v_28)) goto v_11;
    else goto v_12;
v_11:
    v_28 = v_29;
    v_28 = (consp(v_28) ? nil : lisp_true);
    goto v_10;
v_12:
    v_28 = nil;
    goto v_10;
    v_28 = nil;
v_10:
    if (v_28 == nil) goto v_8;
    v_28 = v_30;
    {   LispObject fn = basic_elt(env, 1); // mkrn
    v_28 = (*qfn2(fn))(fn, v_28, v_29);
    }
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // int!-equiv!-chk
        return (*qfn1(fn))(fn, v_28);
    }
v_8:
    v_28 = v_30;
    {
        LispObject fn = basic_elt(env, 3); // lowest!-terms
        return (*qfn2(fn))(fn, v_28, v_29);
    }
    v_28 = nil;
    return onevalue(v_28);
}



setup_type const u39_setup[] =
{
    {"lex_keywords",            G0W1,     CC_lex_keywords,G2W1,G3W1,    G4W1},
    {"cl_atnum",                G0W1,     CC_cl_atnum,G2W1,   G3W1,     G4W1},
    {"cl_pnf1",                 G0W1,     CC_cl_pnf1,G2W1,    G3W1,     G4W1},
    {"fnom",                    G0W1,     CC_fnom,  G2W1,     G3W1,     G4W1},
    {"plusrd",                  CC_plusrd,G1W0,     G2W0,     G3W0,     G4W0},
    {"simpimpart",              G0W1,     CC_simpimpart,G2W1, G3W1,     G4W1},
    {"genexp",                  G0W1,     CC_genexp,G2W1,     G3W1,     G4W1},
    {"exdfprn",                 G0W1,     CC_exdfprn,G2W1,    G3W1,     G4W1},
    {"aceq",                    G0W2,     G1W2,     CC_aceq,  G3W2,     G4W2},
    {"log_freevars",            G0W2,     G1W2,     CC_log_freevars,G3W2,G4W2},
    {"bas_make",                G0W2,     G1W2,     CC_bas_make,G3W2,   G4W2},
    {"pst_subpst",              G0W2,     G1W2,     CC_pst_subpst,G3W2, G4W2},
    {"appn",                    G0W2,     G1W2,     CC_appn,  G3W2,     G4W2},
    {"multivariatep",           G0W2,     G1W2,     CC_multivariatep,G3W2,G4W2},
    {"lalr_augment_grammar",    G0W1,     CC_lalr_augment_grammar,G2W1,G3W1,G4W1},
    {"createsinglevariablemonom",G0W1,    CC_createsinglevariablemonom,G2W1,G3W1,G4W1},
    {"my_freeof",               G0W2,     G1W2,     CC_my_freeof,G3W2,  G4W2},
    {"giintgcd",                G0W2,     G1W2,     CC_giintgcd,G3W2,   G4W2},
    {"talp_nextt1",             G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_talp_nextt1},
    {"rl_onp",                  G0W1,     CC_rl_onp,G2W1,     G3W1,     G4W1},
    {"vectorrd",                CC_vectorrd,G1W0,   G2W0,     G3W0,     G4W0},
    {"ldf-simp",                G0W1,     CC_ldfKsimp,G2W1,   G3W1,     G4W1},
    {"transmat1",               G0W1,     CC_transmat1,G2W1,  G3W1,     G4W1},
    {"on-double1",              G0W1,     CC_onKdouble1,G2W1, G3W1,     G4W1},
    {"getupper",                G0W1,     CC_getupper,G2W1,   G3W1,     G4W1},
    {"replace2_parents",        G0W3,     G1W3,     G2W3,     CC_replace2_parents,G4W3},
    {"prepsq*1",                G0W3,     G1W3,     G2W3,     CC_prepsqH1,G4W3},
    {"reduce",                  G0W2,     G1W2,     CC_reduce,G3W2,     G4W2},
    {"fs:minusp:",              G0W1,     CC_fsTminuspT,G2W1, G3W1,     G4W1},
    {"xnsiz",                   G0W1,     CC_xnsiz, G2W1,     G3W1,     G4W1},
    {"lalr_collect_nonterminals",G0W1,    CC_lalr_collect_nonterminals,G2W1,G3W1,G4W1},
    {"simpexpt2",               G0W3,     G1W3,     G2W3,     CC_simpexpt2,G4W3},
    {"pasf_uprap",              G0W1,     CC_pasf_uprap,G2W1, G3W1,     G4W1},
    {"lowupperlimitrd",         CC_lowupperlimitrd,G1W0,G2W0, G3W0,     G4W0},
    {"spcol_dim",               G0W1,     CC_spcol_dim,G2W1,  G3W1,     G4W1},
    {"inszzz",                  G0W2,     G1W2,     CC_inszzz,G3W2,     G4W2},
    {"qsum-simpexpt1",          G0W1,     CC_qsumKsimpexpt1,G2W1,G3W1,  G4W1},
    {"simp_without_resimp",     G0W1,     CC_simp_without_resimp,G2W1,G3W1,G4W1},
    {"groebinvokecritm",        G0W2,     G1W2,     CC_groebinvokecritm,G3W2,G4W2},
    {"sc_columnscalarproduct",  G0W2,     G1W2,     CC_sc_columnscalarproduct,G3W2,G4W2},
    {"mkbc",                    G0W2,     G1W2,     CC_mkbc,  G3W2,     G4W2},
    {"applysetop",              G0W2,     G1W2,     CC_applysetop,G3W2, G4W2},
    {"mod-dump1",               G0W3,     G1W3,     G2W3,     CC_modKdump1,G4W3},
    {"quotodd",                 G0W2,     G1W2,     CC_quotodd,G3W2,    G4W2},
    {nullptr, 
        reinterpret_cast<no_args *>(
            reinterpret_cast<uintptr_t>("u39")),
        reinterpret_cast<one_arg *>(
            reinterpret_cast<uintptr_t>("152894 4012351 3584107")),
        nullptr, nullptr, nullptr}
};

// end of generated code
