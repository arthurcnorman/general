
// $destdir/u41.c        Machine generated C code

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


// Code for extbrsea

static LispObject CC_extbrsea(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_145, v_146, v_147;
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
    v_145 = qvalue(basic_elt(env, 1)); // rowmin
    stack[-1] = v_145;
v_9:
    v_146 = qvalue(basic_elt(env, 2)); // rowmax
    v_145 = stack[-1];
    v_145 = difference2(v_146, v_145);
    env = stack[-2];
    v_145 = Lminusp(nil, v_145);
    env = stack[-2];
    if (v_145 == nil) goto v_14;
    goto v_8;
v_14:
    stack[0] = qvalue(basic_elt(env, 3)); // codmat
    v_146 = qvalue(basic_elt(env, 4)); // maxvar
    v_145 = stack[-1];
    v_145 = plus2(v_146, v_145);
    env = stack[-2];
    v_146 = Lgetv(nil, stack[0], v_145);
    env = stack[-2];
    v_145 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_146 = Lgetv(nil, v_146, v_145);
    env = stack[-2];
    v_145 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    if (v_146 == v_145) goto v_26;
    else goto v_27;
v_26:
    v_145 = lisp_true;
    goto v_25;
v_27:
    stack[0] = qvalue(basic_elt(env, 3)); // codmat
    v_146 = qvalue(basic_elt(env, 4)); // maxvar
    v_145 = stack[-1];
    v_145 = plus2(v_146, v_145);
    env = stack[-2];
    v_146 = Lgetv(nil, stack[0], v_145);
    env = stack[-2];
    v_145 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_146 = Lgetv(nil, v_146, v_145);
    env = stack[-2];
    v_145 = static_cast<LispObject>(-32)+TAG_FIXNUM; // -2
    v_145 = (v_146 == v_145 ? lisp_true : nil);
    goto v_25;
    v_145 = nil;
v_25:
    if (v_145 == nil) goto v_23;
    stack[0] = qvalue(basic_elt(env, 3)); // codmat
    v_146 = qvalue(basic_elt(env, 4)); // maxvar
    v_145 = stack[-1];
    v_145 = plus2(v_146, v_145);
    env = stack[-2];
    v_147 = Lgetv(nil, stack[0], v_145);
    env = stack[-2];
    v_146 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_145 = nil;
    v_145 = Lputv(nil, v_147, v_146, v_145);
    env = stack[-2];
    goto v_21;
v_23:
    stack[0] = qvalue(basic_elt(env, 3)); // codmat
    v_146 = qvalue(basic_elt(env, 4)); // maxvar
    v_145 = stack[-1];
    v_145 = plus2(v_146, v_145);
    env = stack[-2];
    v_147 = Lgetv(nil, stack[0], v_145);
    env = stack[-2];
    v_146 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_145 = lisp_true;
    v_145 = Lputv(nil, v_147, v_146, v_145);
    env = stack[-2];
    goto v_21;
v_21:
    v_145 = stack[-1];
    v_145 = add1(v_145);
    env = stack[-2];
    stack[-1] = v_145;
    goto v_9;
v_8:
    {   LispObject fn = basic_elt(env, 6); // initbrsea
    v_145 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 7); // extbrsea1
    v_145 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
v_72:
    {   LispObject fn = basic_elt(env, 8); // expandprod
    v_145 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
    v_145 = qvalue(basic_elt(env, 1)); // rowmin
    stack[-1] = v_145;
v_77:
    v_146 = qvalue(basic_elt(env, 2)); // rowmax
    v_145 = stack[-1];
    v_145 = difference2(v_146, v_145);
    env = stack[-2];
    v_145 = Lminusp(nil, v_145);
    env = stack[-2];
    if (v_145 == nil) goto v_82;
    goto v_76;
v_82:
    stack[0] = qvalue(basic_elt(env, 3)); // codmat
    v_146 = qvalue(basic_elt(env, 4)); // maxvar
    v_145 = stack[-1];
    v_145 = plus2(v_146, v_145);
    env = stack[-2];
    v_146 = Lgetv(nil, stack[0], v_145);
    env = stack[-2];
    v_145 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_146 = Lgetv(nil, v_146, v_145);
    env = stack[-2];
    v_145 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    if (v_146 == v_145) goto v_95;
    stack[0] = qvalue(basic_elt(env, 3)); // codmat
    v_146 = qvalue(basic_elt(env, 4)); // maxvar
    v_145 = stack[-1];
    v_145 = plus2(v_146, v_145);
    env = stack[-2];
    v_146 = Lgetv(nil, stack[0], v_145);
    env = stack[-2];
    v_145 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_146 = Lgetv(nil, v_146, v_145);
    env = stack[-2];
    v_145 = basic_elt(env, 5); // times
    v_145 = (v_146 == v_145 ? lisp_true : nil);
    goto v_93;
v_95:
    v_145 = nil;
    goto v_93;
    v_145 = nil;
v_93:
    if (v_145 == nil) goto v_91;
    stack[0] = qvalue(basic_elt(env, 3)); // codmat
    v_146 = qvalue(basic_elt(env, 4)); // maxvar
    v_145 = stack[-1];
    v_145 = plus2(v_146, v_145);
    env = stack[-2];
    v_147 = Lgetv(nil, stack[0], v_145);
    env = stack[-2];
    v_146 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_145 = lisp_true;
    v_145 = Lputv(nil, v_147, v_146, v_145);
    env = stack[-2];
    goto v_89;
v_91:
    stack[0] = qvalue(basic_elt(env, 3)); // codmat
    v_146 = qvalue(basic_elt(env, 4)); // maxvar
    v_145 = stack[-1];
    v_145 = plus2(v_146, v_145);
    env = stack[-2];
    v_147 = Lgetv(nil, stack[0], v_145);
    env = stack[-2];
    v_146 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_145 = nil;
    v_145 = Lputv(nil, v_147, v_146, v_145);
    env = stack[-2];
    goto v_89;
v_89:
    v_145 = stack[-1];
    v_145 = add1(v_145);
    env = stack[-2];
    stack[-1] = v_145;
    goto v_77;
v_76:
    {   LispObject fn = basic_elt(env, 6); // initbrsea
    v_145 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 7); // extbrsea1
    v_145 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 9); // shrinkprod
    v_145 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
    if (v_145 == nil) goto v_143;
    goto v_72;
v_143:
    v_145 = nil;
    return onevalue(v_145);
}



// Code for copy_mat

static LispObject CC_copy_mat(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_67, v_68, v_69;
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
    v_67 = stack[-7];
    {   LispObject fn = basic_elt(env, 1); // matrix_input_test
    v_67 = (*qfn1(fn))(fn, v_67);
    }
    env = stack[-9];
    v_67 = stack[-7];
    {   LispObject fn = basic_elt(env, 2); // size_of_matrix
    v_67 = (*qfn1(fn))(fn, v_67);
    }
    env = stack[-9];
    if (!car_legal(v_67)) v_67 = carerror(v_67); else
    v_67 = car(v_67);
    stack[-6] = v_67;
    v_67 = stack[-7];
    {   LispObject fn = basic_elt(env, 2); // size_of_matrix
    v_67 = (*qfn1(fn))(fn, v_67);
    }
    env = stack[-9];
    if (!car_legal(v_67)) v_67 = cdrerror(v_67); else
    v_67 = cdr(v_67);
    if (!car_legal(v_67)) v_67 = carerror(v_67); else
    v_67 = car(v_67);
    stack[-5] = v_67;
    v_68 = stack[-6];
    v_67 = stack[-5];
    {   LispObject fn = basic_elt(env, 3); // mkmatrix
    v_67 = (*qfn2(fn))(fn, v_68, v_67);
    }
    env = stack[-9];
    stack[-8] = v_67;
    v_67 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-4] = v_67;
v_26:
    v_68 = stack[-6];
    v_67 = stack[-4];
    v_67 = difference2(v_68, v_67);
    env = stack[-9];
    v_67 = Lminusp(nil, v_67);
    env = stack[-9];
    if (v_67 == nil) goto v_31;
    goto v_25;
v_31:
    v_67 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-3] = v_67;
v_40:
    v_68 = stack[-5];
    v_67 = stack[-3];
    v_67 = difference2(v_68, v_67);
    env = stack[-9];
    v_67 = Lminusp(nil, v_67);
    env = stack[-9];
    if (v_67 == nil) goto v_45;
    goto v_39;
v_45:
    stack[-2] = stack[-8];
    stack[-1] = stack[-4];
    stack[0] = stack[-3];
    v_69 = stack[-7];
    v_68 = stack[-4];
    v_67 = stack[-3];
    {   LispObject fn = basic_elt(env, 4); // getmat
    v_67 = (*qfn3(fn))(fn, v_69, v_68, v_67);
    }
    env = stack[-9];
    v_67 = ncons(v_67);
    env = stack[-9];
    {   LispObject fn = basic_elt(env, 5); // setmat
    v_67 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_67);
    }
    env = stack[-9];
    v_67 = stack[-3];
    v_67 = add1(v_67);
    env = stack[-9];
    stack[-3] = v_67;
    goto v_40;
v_39:
    v_67 = stack[-4];
    v_67 = add1(v_67);
    env = stack[-9];
    stack[-4] = v_67;
    goto v_26;
v_25:
    v_67 = stack[-8];
    return onevalue(v_67);
}



// Code for exdf0

static LispObject CC_exdf0(LispObject env,
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
    push(nil, nil);
    stack_popper stack_popper_var(3);
// copy arguments values to proper place
    stack[0] = v_2;
// end of prologue
    v_19 = stack[0];
    if (!car_legal(v_19)) v_19 = carerror(v_19); else
    v_19 = car(v_19);
    {   LispObject fn = basic_elt(env, 1); // exdff0
    stack[-1] = (*qfn1(fn))(fn, v_19);
    }
    env = stack[-2];
    v_19 = stack[0];
    if (!car_legal(v_19)) v_19 = cdrerror(v_19); else
    v_19 = cdr(v_19);
    {   LispObject fn = basic_elt(env, 2); // negf
    v_19 = (*qfn1(fn))(fn, v_19);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 1); // exdff0
    v_20 = (*qfn1(fn))(fn, v_19);
    }
    env = stack[-2];
    v_19 = stack[0];
    {   LispObject fn = basic_elt(env, 3); // multpfsq
    v_19 = (*qfn2(fn))(fn, v_20, v_19);
    }
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 4); // addpf
    stack[-1] = (*qfn2(fn))(fn, stack[-1], v_19);
    }
    env = stack[-2];
    v_20 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_19 = stack[0];
    if (!car_legal(v_19)) v_19 = cdrerror(v_19); else
    v_19 = cdr(v_19);
    v_19 = cons(v_20, v_19);
    env = stack[-2];
    {
        LispObject v_23 = stack[-1];
        LispObject fn = basic_elt(env, 3); // multpfsq
        return (*qfn2(fn))(fn, v_23, v_19);
    }
}



// Code for multiply!-by!-power!-of!-ten

static LispObject CC_multiplyKbyKpowerKofKten(LispObject env,
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
    v_53 = stack[0];
    v_52 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_52 = static_cast<LispObject>(lessp2(v_53, v_52));
    v_52 = v_52 ? lisp_true : nil;
    env = stack[-3];
    if (v_52 == nil) goto v_8;
    v_52 = basic_elt(env, 0); // multiply!-by!-power!-of!-ten
    {
        LispObject fn = basic_elt(env, 3); // bflerrmsg
        return (*qfn1(fn))(fn, v_52);
    }
v_8:
    v_52 = qvalue(basic_elt(env, 1)); // bften!*
    stack[-2] = v_52;
v_20:
    v_53 = stack[0];
    v_52 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_52 = static_cast<LispObject>(greaterp2(v_53, v_52));
    v_52 = v_52 ? lisp_true : nil;
    env = stack[-3];
    if (v_52 == nil) goto v_23;
    else goto v_24;
v_23:
    goto v_19;
v_24:
    v_52 = stack[0];
    v_52 = Levenp(nil, v_52);
    env = stack[-3];
    if (v_52 == nil) goto v_31;
    else goto v_32;
v_31:
    v_53 = stack[-1];
    v_52 = stack[-2];
    {   LispObject fn = basic_elt(env, 4); // times!:
    v_52 = (*qfn2(fn))(fn, v_53, v_52);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 5); // normbf
    v_52 = (*qfn1(fn))(fn, v_52);
    }
    env = stack[-3];
    stack[-1] = v_52;
    goto v_30;
v_32:
v_30:
    v_53 = stack[0];
    v_52 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    {   LispObject fn = basic_elt(env, 6); // lshift
    v_52 = (*qfn2(fn))(fn, v_53, v_52);
    }
    env = stack[-3];
    stack[0] = v_52;
    v_53 = stack[-2];
    v_52 = stack[-2];
    {   LispObject fn = basic_elt(env, 4); // times!:
    v_53 = (*qfn2(fn))(fn, v_53, v_52);
    }
    env = stack[-3];
    v_52 = qvalue(basic_elt(env, 2)); // !:bprec!:
    {   LispObject fn = basic_elt(env, 7); // cut!:mt
    v_52 = (*qfn2(fn))(fn, v_53, v_52);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 5); // normbf
    v_52 = (*qfn1(fn))(fn, v_52);
    }
    env = stack[-3];
    stack[-2] = v_52;
    goto v_20;
v_19:
    v_53 = stack[-1];
    v_52 = qvalue(basic_elt(env, 2)); // !:bprec!:
    {   LispObject fn = basic_elt(env, 7); // cut!:mt
    v_52 = (*qfn2(fn))(fn, v_53, v_52);
    }
    env = stack[-3];
    {
        LispObject fn = basic_elt(env, 5); // normbf
        return (*qfn1(fn))(fn, v_52);
    }
    v_52 = nil;
    return onevalue(v_52);
}



// Code for formsetq0

static LispObject CC_formsetq0(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_315, v_316, v_317;
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
    stack[-7] = nil;
    v_315 = stack[-6];
    if (!car_legal(v_315)) v_315 = cdrerror(v_315); else
    v_315 = cdr(v_315);
    stack[-6] = v_315;
    if (!car_legal(v_315)) v_315 = carerror(v_315); else
    v_315 = car(v_315);
    stack[-3] = v_315;
    if (symbolp(v_315)) goto v_13;
    else goto v_14;
v_13:
    v_316 = stack[-3];
    v_315 = stack[-5];
    v_315 = Latsoc(nil, v_316, v_315);
    stack[-7] = v_315;
    goto v_12;
v_14:
v_12:
    v_315 = stack[-6];
    if (!car_legal(v_315)) v_315 = cdrerror(v_315); else
    v_315 = cdr(v_315);
    if (!car_legal(v_315)) v_316 = carerror(v_315); else
    v_316 = car(v_315);
    v_315 = basic_elt(env, 1); // quote
    if (!consp(v_316)) goto v_24;
    v_316 = car(v_316);
    if (v_316 == v_315) goto v_23;
    else goto v_24;
v_23:
    v_315 = basic_elt(env, 2); // symbolic
    stack[-4] = v_315;
    goto v_22;
v_24:
v_22:
    v_315 = stack[-6];
    if (!car_legal(v_315)) v_315 = cdrerror(v_315); else
    v_315 = cdr(v_315);
    if (!car_legal(v_315)) stack[-2] = carerror(v_315); else
    stack[-2] = car(v_315);
    stack[-1] = stack[-5];
    stack[0] = basic_elt(env, 2); // symbolic
    v_315 = stack[-4];
    v_315 = ncons(v_315);
    env = stack[-8];
    {   LispObject fn = basic_elt(env, 22); // convertmode
    v_315 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_315);
    }
    env = stack[-8];
    stack[0] = v_315;
    v_315 = stack[-3];
    if (!consp(v_315)) goto v_46;
    v_315 = qvalue(basic_elt(env, 3)); // !*savedef
    if (v_315 == nil) goto v_51;
    v_315 = stack[-3];
    if (!car_legal(v_315)) v_316 = carerror(v_315); else
    v_316 = car(v_315);
    v_315 = basic_elt(env, 4); // inline
    v_315 = get(v_316, v_315);
    env = stack[-8];
    if (v_315 == nil) goto v_55;
    else goto v_54;
v_55:
    v_315 = stack[-3];
    if (!car_legal(v_315)) v_316 = carerror(v_315); else
    v_316 = car(v_315);
    v_315 = basic_elt(env, 5); // smacro
    v_315 = get(v_316, v_315);
    env = stack[-8];
    if (v_315 == nil) goto v_60;
    else goto v_54;
v_60:
    goto v_51;
v_54:
    v_315 = Lposn(nil);
    env = stack[-8];
    v_315 = static_cast<LispObject>(zerop(v_315));
    v_315 = v_315 ? lisp_true : nil;
    env = stack[-8];
    if (v_315 == nil) goto v_67;
    else goto v_68;
v_67:
    v_315 = Lterpri(nil);
    env = stack[-8];
    goto v_66;
v_68:
v_66:
    v_315 = basic_elt(env, 6); // "+++ Assign via inline or smacro: "
    v_315 = Lprinc(nil, v_315);
    env = stack[-8];
    v_315 = stack[-3];
    v_315 = Lprint(nil, v_315);
    env = stack[-8];
    goto v_49;
v_51:
v_49:
    v_315 = lisp_true;
    goto v_44;
v_46:
    v_315 = nil;
    goto v_44;
    v_315 = nil;
v_44:
    if (v_315 == nil) goto v_42;
    v_315 = stack[-3];
    if (!car_legal(v_315)) v_315 = carerror(v_315); else
    v_315 = car(v_315);
    if (symbolp(v_315)) goto v_83;
    v_316 = stack[-3];
    v_315 = basic_elt(env, 7); // "assignment"
    {
        LispObject fn = basic_elt(env, 23); // typerr
        return (*qfn2(fn))(fn, v_316, v_315);
    }
v_83:
    v_316 = stack[-3];
    v_315 = stack[-4];
    {   LispObject fn = basic_elt(env, 24); // macrochk
    v_315 = (*qfn2(fn))(fn, v_316, v_315);
    }
    env = stack[-8];
    stack[-3] = v_315;
    if (!consp(v_315)) goto v_94;
    v_315 = stack[-3];
    if (!car_legal(v_315)) v_315 = carerror(v_315); else
    v_315 = car(v_315);
    {   LispObject fn = basic_elt(env, 25); // arrayp
    v_315 = (*qfn1(fn))(fn, v_315);
    }
    env = stack[-8];
    goto v_92;
v_94:
    v_315 = nil;
    goto v_92;
    v_315 = nil;
v_92:
    if (v_315 == nil) goto v_90;
    stack[-1] = basic_elt(env, 8); // setel
    v_317 = stack[-3];
    v_316 = stack[-5];
    v_315 = stack[-4];
    {   LispObject fn = basic_elt(env, 26); // intargfn
    v_316 = (*qfn3(fn))(fn, v_317, v_316, v_315);
    }
    v_315 = stack[0];
    {
        LispObject v_326 = stack[-1];
        return list3(v_326, v_316, v_315);
    }
v_90:
    v_315 = stack[-3];
    if (!consp(v_315)) goto v_116;
    v_315 = stack[-3];
    if (!car_legal(v_315)) v_315 = cdrerror(v_315); else
    v_315 = cdr(v_315);
    if (v_315 == nil) goto v_120;
    else goto v_121;
v_120:
    v_315 = nil;
    goto v_119;
v_121:
    v_315 = stack[-3];
    if (!car_legal(v_315)) v_315 = carerror(v_315); else
    v_315 = car(v_315);
    if (!symbolp(v_315)) v_316 = nil;
    else { v_316 = qfastgets(v_315);
           if (v_316 != nil) { v_316 = elt(v_316, 2); // rtype
#ifdef RECORD_GET
             if (v_316 != SPID_NOPROP)
                record_get(elt(fastget_names, 2), 1);
             else record_get(elt(fastget_names, 2), 0),
                v_316 = nil; }
           else record_get(elt(fastget_names, 2), 0); }
#else
             if (v_316 == SPID_NOPROP) v_316 = nil; }}
#endif
    v_315 = basic_elt(env, 9); // vector
    if (v_316 == v_315) goto v_129;
    else goto v_130;
v_129:
    v_315 = lisp_true;
    goto v_128;
v_130:
    v_315 = stack[-3];
    if (!car_legal(v_315)) v_315 = cdrerror(v_315); else
    v_315 = cdr(v_315);
    if (!car_legal(v_315)) v_315 = carerror(v_315); else
    v_315 = car(v_315);
    v_315 = Lsimple_vectorp(nil, v_315);
    env = stack[-8];
    if (v_315 == nil) goto v_140;
    else goto v_139;
v_140:
    v_315 = stack[-3];
    if (!car_legal(v_315)) v_315 = cdrerror(v_315); else
    v_315 = cdr(v_315);
    if (!car_legal(v_315)) v_316 = carerror(v_315); else
    v_316 = car(v_315);
    v_315 = basic_elt(env, 10); // vecfn
    v_315 = Lflagpcar(nil, v_316, v_315);
    env = stack[-8];
v_139:
    goto v_128;
    v_315 = nil;
v_128:
    goto v_119;
    v_315 = nil;
v_119:
    goto v_114;
v_116:
    v_315 = nil;
    goto v_114;
    v_315 = nil;
v_114:
    if (v_315 == nil) goto v_112;
    v_317 = stack[-6];
    v_316 = stack[-5];
    v_315 = stack[-4];
    {
        LispObject fn = basic_elt(env, 27); // putvect
        return (*qfn3(fn))(fn, v_317, v_316, v_315);
    }
v_112:
    v_316 = stack[-3];
    v_315 = basic_elt(env, 11); // part
    if (!consp(v_316)) goto v_158;
    v_316 = car(v_316);
    if (v_316 == v_315) goto v_157;
    else goto v_158;
v_157:
    stack[-2] = basic_elt(env, 12); // list
    v_315 = basic_elt(env, 13); // setpart!*
    stack[-1] = Lmkquote(nil, v_315);
    env = stack[-8];
    v_315 = stack[-3];
    if (!car_legal(v_315)) v_317 = cdrerror(v_315); else
    v_317 = cdr(v_315);
    v_316 = stack[-5];
    v_315 = stack[-4];
    {   LispObject fn = basic_elt(env, 28); // formlis
    v_315 = (*qfn3(fn))(fn, v_317, v_316, v_315);
    }
    env = stack[-8];
    v_316 = list2star(stack[-2], stack[-1], v_315);
    env = stack[-8];
    v_315 = stack[0];
    {
        LispObject fn = basic_elt(env, 29); // aconc
        return (*qfn2(fn))(fn, v_316, v_315);
    }
v_158:
    v_315 = stack[-3];
    if (!consp(v_315)) goto v_178;
    v_315 = stack[-3];
    if (!car_legal(v_315)) v_316 = carerror(v_315); else
    v_316 = car(v_315);
    v_315 = basic_elt(env, 14); // setqfn
    v_315 = get(v_316, v_315);
    env = stack[-8];
    stack[-7] = v_315;
    goto v_176;
v_178:
    v_315 = nil;
    goto v_176;
    v_315 = nil;
v_176:
    if (v_315 == nil) goto v_174;
    stack[0] = stack[-7];
    v_315 = stack[-3];
    if (!car_legal(v_315)) v_316 = cdrerror(v_315); else
    v_316 = cdr(v_315);
    v_315 = stack[-6];
    if (!car_legal(v_315)) v_315 = cdrerror(v_315); else
    v_315 = cdr(v_315);
    v_316 = Lappend_2(nil, v_316, v_315);
    env = stack[-8];
    v_315 = nil;
    {   LispObject fn = basic_elt(env, 30); // applsmacro
    v_317 = (*qfn3(fn))(fn, stack[0], v_316, v_315);
    }
    env = stack[-8];
    v_316 = stack[-5];
    v_315 = stack[-4];
    {
        LispObject fn = basic_elt(env, 31); // form1
        return (*qfn3(fn))(fn, v_317, v_316, v_315);
    }
v_174:
    v_316 = stack[-4];
    v_315 = basic_elt(env, 2); // symbolic
    if (v_316 == v_315) goto v_202;
    else goto v_203;
v_202:
    v_315 = qvalue(basic_elt(env, 15)); // !*rlisp88
    if (v_315 == nil) goto v_208;
    else goto v_207;
v_208:
    v_316 = stack[-3];
    v_315 = basic_elt(env, 16); // structfetch
    v_315 = Leqcar(nil, v_316, v_315);
    env = stack[-8];
v_207:
    goto v_201;
v_203:
    v_315 = nil;
    goto v_201;
    v_315 = nil;
v_201:
    if (v_315 == nil) goto v_199;
    stack[-1] = basic_elt(env, 17); // rsetf
    v_317 = stack[-3];
    v_316 = stack[-5];
    v_315 = stack[-4];
    {   LispObject fn = basic_elt(env, 31); // form1
    v_316 = (*qfn3(fn))(fn, v_317, v_316, v_315);
    }
    v_315 = stack[0];
    {
        LispObject v_327 = stack[-1];
        return list3(v_327, v_316, v_315);
    }
v_199:
    stack[-1] = basic_elt(env, 18); // setk
    v_317 = stack[-3];
    v_316 = stack[-5];
    v_315 = basic_elt(env, 19); // algebraic
    {   LispObject fn = basic_elt(env, 31); // form1
    v_316 = (*qfn3(fn))(fn, v_317, v_316, v_315);
    }
    v_315 = stack[0];
    {
        LispObject v_328 = stack[-1];
        return list3(v_328, v_316, v_315);
    }
    v_315 = nil;
    goto v_40;
v_42:
    v_315 = stack[-3];
    if (symbolp(v_315)) goto v_233;
    v_316 = stack[-3];
    v_315 = basic_elt(env, 7); // "assignment"
    {
        LispObject fn = basic_elt(env, 23); // typerr
        return (*qfn2(fn))(fn, v_316, v_315);
    }
v_233:
    v_316 = stack[-3];
    v_315 = basic_elt(env, 20); // reserved
    v_315 = Lflagp(nil, v_316, v_315);
    env = stack[-8];
    if (v_315 == nil) goto v_243;
    v_316 = stack[-3];
    v_315 = stack[-5];
    v_315 = Latsoc(nil, v_316, v_315);
    v_315 = (v_315 == nil ? lisp_true : nil);
    goto v_241;
v_243:
    v_315 = nil;
    goto v_241;
    v_315 = nil;
v_241:
    if (v_315 == nil) goto v_239;
    v_315 = stack[-3];
    {
        LispObject fn = basic_elt(env, 32); // rsverr
        return (*qfn1(fn))(fn, v_315);
    }
v_239:
    v_315 = stack[-3];
    if (!symbolp(v_315)) v_315 = nil;
    else { v_315 = qfastgets(v_315);
           if (v_315 != nil) { v_315 = elt(v_315, 17); // share
#ifdef RECORD_GET
             if (v_315 == SPID_NOPROP)
                record_get(elt(fastget_names, 17), 0),
                v_315 = nil;
             else record_get(elt(fastget_names, 17), 1),
                v_315 = lisp_true; }
           else record_get(elt(fastget_names, 17), 0); }
#else
             if (v_315 == SPID_NOPROP) v_315 = nil; else v_315 = lisp_true; }}
#endif
    if (v_315 == nil) goto v_257;
    v_316 = stack[-3];
    v_315 = stack[-5];
    {   LispObject fn = basic_elt(env, 33); // symbid
    v_316 = (*qfn2(fn))(fn, v_316, v_315);
    }
    env = stack[-8];
    v_315 = stack[0];
    {
        LispObject fn = basic_elt(env, 34); // mksetshare
        return (*qfn2(fn))(fn, v_316, v_315);
    }
v_257:
    v_316 = stack[-4];
    v_315 = basic_elt(env, 2); // symbolic
    if (v_316 == v_315) goto v_269;
    else goto v_270;
v_269:
    v_315 = lisp_true;
    goto v_268;
v_270:
    v_315 = stack[-7];
    if (v_315 == nil) goto v_278;
    else goto v_277;
v_278:
    v_316 = stack[0];
    v_315 = basic_elt(env, 1); // quote
    v_315 = Leqcar(nil, v_316, v_315);
    env = stack[-8];
v_277:
    goto v_268;
    v_315 = nil;
v_268:
    if (v_315 == nil) goto v_266;
    v_316 = stack[-3];
    v_315 = stack[-5];
    {   LispObject fn = basic_elt(env, 33); // symbid
    v_316 = (*qfn2(fn))(fn, v_316, v_315);
    }
    env = stack[-8];
    v_315 = stack[0];
    {
        LispObject fn = basic_elt(env, 35); // mksetq
        return (*qfn2(fn))(fn, v_316, v_315);
    }
v_266:
    v_315 = stack[-6];
    if (!car_legal(v_315)) v_315 = cdrerror(v_315); else
    v_315 = cdr(v_315);
    if (!car_legal(v_315)) v_315 = carerror(v_315); else
    v_315 = car(v_315);
    v_315 = Lsimple_vectorp(nil, v_315);
    env = stack[-8];
    if (v_315 == nil) goto v_290;
    else goto v_288;
v_290:
    v_315 = stack[-6];
    if (!car_legal(v_315)) v_315 = cdrerror(v_315); else
    v_315 = cdr(v_315);
    if (!car_legal(v_315)) v_316 = carerror(v_315); else
    v_316 = car(v_315);
    v_315 = basic_elt(env, 10); // vecfn
    v_315 = Lflagpcar(nil, v_316, v_315);
    env = stack[-8];
    if (v_315 == nil) goto v_295;
    else goto v_288;
v_295:
    goto v_289;
v_288:
    stack[0] = basic_elt(env, 21); // setv
    v_315 = stack[-3];
    v_316 = Lmkquote(nil, v_315);
    v_315 = stack[-6];
    if (!car_legal(v_315)) v_315 = cdrerror(v_315); else
    v_315 = cdr(v_315);
    if (!car_legal(v_315)) v_315 = carerror(v_315); else
    v_315 = car(v_315);
    {
        LispObject v_329 = stack[0];
        return list3(v_329, v_316, v_315);
    }
v_289:
    stack[-1] = basic_elt(env, 18); // setk
    v_315 = stack[-3];
    v_316 = Lmkquote(nil, v_315);
    v_315 = stack[0];
    {
        LispObject v_330 = stack[-1];
        return list3(v_330, v_316, v_315);
    }
    v_315 = nil;
v_40:
    return onevalue(v_315);
}



// Code for simp!-prop!-dist

static LispObject CC_simpKpropKdist(LispObject env,
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    v_102 = v_2;
// end of prologue
    v_103 = v_102;
    v_101 = basic_elt(env, 1); // plus
    if (!consp(v_103)) goto v_7;
    v_103 = car(v_103);
    if (v_103 == v_101) goto v_6;
    else goto v_7;
v_6:
    v_101 = v_102;
    if (!car_legal(v_101)) v_101 = cdrerror(v_101); else
    v_101 = cdr(v_101);
    v_102 = v_101;
    goto v_5;
v_7:
    v_101 = v_102;
    v_101 = ncons(v_101);
    env = stack[-4];
    v_102 = v_101;
    goto v_5;
v_5:
    v_101 = v_102;
    stack[-3] = v_101;
    v_101 = stack[-3];
    if (v_101 == nil) goto v_26;
    else goto v_27;
v_26:
    v_101 = nil;
    goto v_21;
v_27:
    v_101 = stack[-3];
    if (!car_legal(v_101)) v_101 = carerror(v_101); else
    v_101 = car(v_101);
    v_103 = v_101;
    v_102 = v_103;
    v_101 = basic_elt(env, 2); // times
    if (!consp(v_102)) goto v_37;
    v_102 = car(v_102);
    if (v_102 == v_101) goto v_36;
    else goto v_37;
v_36:
    v_101 = v_103;
    if (!car_legal(v_101)) v_101 = cdrerror(v_101); else
    v_101 = cdr(v_101);
    goto v_35;
v_37:
    v_101 = v_103;
    v_101 = ncons(v_101);
    env = stack[-4];
    goto v_35;
    v_101 = nil;
v_35:
    v_103 = v_101;
    v_101 = v_103;
    if (!car_legal(v_101)) v_101 = carerror(v_101); else
    v_101 = car(v_101);
    if (is_number(v_101)) goto v_49;
    else goto v_50;
v_49:
    v_101 = v_103;
    if (!car_legal(v_101)) v_101 = cdrerror(v_101); else
    v_101 = cdr(v_101);
    v_103 = v_101;
    goto v_48;
v_50:
v_48:
    v_102 = v_103;
    v_101 = basic_elt(env, 3); // lambda_iff2c8okfzyq1
    {   LispObject fn = basic_elt(env, 5); // sort
    v_101 = (*qfn2(fn))(fn, v_102, v_101);
    }
    env = stack[-4];
    v_101 = ncons(v_101);
    env = stack[-4];
    stack[-1] = v_101;
    stack[-2] = v_101;
v_22:
    v_101 = stack[-3];
    if (!car_legal(v_101)) v_101 = cdrerror(v_101); else
    v_101 = cdr(v_101);
    stack[-3] = v_101;
    v_101 = stack[-3];
    if (v_101 == nil) goto v_62;
    else goto v_63;
v_62:
    v_101 = stack[-2];
    goto v_21;
v_63:
    stack[0] = stack[-1];
    v_101 = stack[-3];
    if (!car_legal(v_101)) v_101 = carerror(v_101); else
    v_101 = car(v_101);
    v_103 = v_101;
    v_102 = v_103;
    v_101 = basic_elt(env, 2); // times
    if (!consp(v_102)) goto v_74;
    v_102 = car(v_102);
    if (v_102 == v_101) goto v_73;
    else goto v_74;
v_73:
    v_101 = v_103;
    if (!car_legal(v_101)) v_101 = cdrerror(v_101); else
    v_101 = cdr(v_101);
    goto v_72;
v_74:
    v_101 = v_103;
    v_101 = ncons(v_101);
    env = stack[-4];
    goto v_72;
    v_101 = nil;
v_72:
    v_103 = v_101;
    v_101 = v_103;
    if (!car_legal(v_101)) v_101 = carerror(v_101); else
    v_101 = car(v_101);
    if (is_number(v_101)) goto v_86;
    else goto v_87;
v_86:
    v_101 = v_103;
    if (!car_legal(v_101)) v_101 = cdrerror(v_101); else
    v_101 = cdr(v_101);
    v_103 = v_101;
    goto v_85;
v_87:
v_85:
    v_102 = v_103;
    v_101 = basic_elt(env, 3); // lambda_iff2c8okfzyq1
    {   LispObject fn = basic_elt(env, 5); // sort
    v_101 = (*qfn2(fn))(fn, v_102, v_101);
    }
    env = stack[-4];
    v_101 = ncons(v_101);
    env = stack[-4];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_101);
    v_101 = stack[-1];
    if (!car_legal(v_101)) v_101 = cdrerror(v_101); else
    v_101 = cdr(v_101);
    stack[-1] = v_101;
    goto v_22;
v_21:
    v_102 = v_101;
    v_101 = basic_elt(env, 4); // simp!-prop!-order
    {
        LispObject fn = basic_elt(env, 5); // sort
        return (*qfn2(fn))(fn, v_102, v_101);
    }
}



// Code for lambda_iff2c8okfzyq1

static LispObject CC_lambda_iff2c8okfzyq1(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_12, v_13;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_12 = v_3;
    v_13 = v_2;
// end of prologue
    if (!car_legal(v_13)) v_13 = cdrerror(v_13); else
    v_13 = cdr(v_13);
    if (!car_legal(v_13)) v_13 = carerror(v_13); else
    v_13 = car(v_13);
    if (!car_legal(v_12)) v_12 = cdrerror(v_12); else
    v_12 = cdr(v_12);
    if (!car_legal(v_12)) v_12 = carerror(v_12); else
    v_12 = car(v_12);
    {
        LispObject fn = basic_elt(env, 1); // ordp
        return (*qfn2(fn))(fn, v_13, v_12);
    }
}



// Code for lambda_iff2c8okfzyq1

static LispObject CC1_lambda_iff2c8okfzyq1(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_12, v_13;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_12 = v_3;
    v_13 = v_2;
// end of prologue
    if (!car_legal(v_13)) v_13 = cdrerror(v_13); else
    v_13 = cdr(v_13);
    if (!car_legal(v_13)) v_13 = carerror(v_13); else
    v_13 = car(v_13);
    if (!car_legal(v_12)) v_12 = cdrerror(v_12); else
    v_12 = cdr(v_12);
    if (!car_legal(v_12)) v_12 = carerror(v_12); else
    v_12 = car(v_12);
    {
        LispObject fn = basic_elt(env, 1); // ordp
        return (*qfn2(fn))(fn, v_13, v_12);
    }
}



// Code for list2vect!*

static LispObject CC_list2vectH(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_50, v_51;
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
    v_50 = stack[-4];
    v_50 = Llength(nil, v_50);
    env = stack[-6];
    v_50 = sub1(v_50);
    env = stack[-6];
    v_50 = Lmkvect(nil, v_50);
    env = stack[-6];
    stack[-5] = v_50;
    v_50 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-2] = v_50;
v_15:
    v_50 = stack[-5];
    v_50 = Lupbv(nil, v_50);
    env = stack[-6];
    v_51 = add1(v_50);
    env = stack[-6];
    v_50 = stack[-2];
    v_50 = difference2(v_51, v_50);
    env = stack[-6];
    v_50 = Lminusp(nil, v_50);
    env = stack[-6];
    if (v_50 == nil) goto v_20;
    goto v_14;
v_20:
    stack[-1] = stack[-5];
    v_50 = stack[-2];
    stack[0] = sub1(v_50);
    env = stack[-6];
    v_51 = stack[-3];
    v_50 = basic_elt(env, 1); // algebraic
    if (v_51 == v_50) goto v_34;
    else goto v_35;
v_34:
    v_51 = stack[-4];
    v_50 = stack[-2];
    {   LispObject fn = basic_elt(env, 2); // nth
    v_50 = (*qfn2(fn))(fn, v_51, v_50);
    }
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 3); // symb_to_alg
    v_50 = (*qfn1(fn))(fn, v_50);
    }
    env = stack[-6];
    goto v_33;
v_35:
    v_51 = stack[-4];
    v_50 = stack[-2];
    {   LispObject fn = basic_elt(env, 2); // nth
    v_50 = (*qfn2(fn))(fn, v_51, v_50);
    }
    env = stack[-6];
    goto v_33;
    v_50 = nil;
v_33:
    v_50 = Lputv(nil, stack[-1], stack[0], v_50);
    env = stack[-6];
    v_50 = stack[-2];
    v_50 = add1(v_50);
    env = stack[-6];
    stack[-2] = v_50;
    goto v_15;
v_14:
    v_50 = stack[-5];
    return onevalue(v_50);
}



// Code for which_first

static LispObject CC_which_first(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_31, v_32, v_33, v_34, v_35;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_32 = v_4;
    v_33 = v_3;
    v_34 = v_2;
// end of prologue
v_8:
    v_31 = v_32;
    if (v_31 == nil) goto v_11;
    else goto v_12;
v_11:
    v_31 = nil;
    goto v_7;
v_12:
    v_35 = v_34;
    v_31 = v_32;
    if (!car_legal(v_31)) v_31 = carerror(v_31); else
    v_31 = car(v_31);
    if (equal(v_35, v_31)) goto v_15;
    else goto v_16;
v_15:
    v_31 = v_34;
    goto v_7;
v_16:
    v_35 = v_33;
    v_31 = v_32;
    if (!car_legal(v_31)) v_31 = carerror(v_31); else
    v_31 = car(v_31);
    if (equal(v_35, v_31)) goto v_21;
    else goto v_22;
v_21:
    v_31 = v_33;
    goto v_7;
v_22:
    v_31 = v_32;
    if (!car_legal(v_31)) v_31 = cdrerror(v_31); else
    v_31 = cdr(v_31);
    v_32 = v_31;
    goto v_8;
    v_31 = nil;
v_7:
    return onevalue(v_31);
}



// Code for talp_trygaussvar

static LispObject CC_talp_trygaussvar(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_54, v_55, v_56;
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
    v_54 = stack[-1];
    {   LispObject fn = basic_elt(env, 4); // talp_atfp
    v_54 = (*qfn1(fn))(fn, v_54);
    }
    env = stack[-3];
    if (v_54 == nil) goto v_9;
    v_55 = stack[-2];
    v_54 = stack[-1];
    {
        LispObject fn = basic_elt(env, 5); // talp_qesolset
        return (*qfn2(fn))(fn, v_55, v_54);
    }
v_9:
    v_54 = stack[-1];
    if (!consp(v_54)) goto v_19;
    else goto v_20;
v_19:
    v_54 = stack[-1];
    v_55 = v_54;
    goto v_18;
v_20:
    v_54 = stack[-1];
    if (!car_legal(v_54)) v_54 = carerror(v_54); else
    v_54 = car(v_54);
    v_55 = v_54;
    goto v_18;
    v_55 = nil;
v_18:
    v_54 = basic_elt(env, 1); // and
    if (v_55 == v_54) goto v_15;
    else goto v_16;
v_15:
    v_56 = stack[-2];
    v_54 = stack[-1];
    if (!car_legal(v_54)) v_55 = cdrerror(v_54); else
    v_55 = cdr(v_54);
    v_54 = stack[0];
    {
        LispObject fn = basic_elt(env, 6); // talp_gaussand
        return (*qfn3(fn))(fn, v_56, v_55, v_54);
    }
v_16:
    v_54 = stack[-1];
    if (!consp(v_54)) goto v_37;
    else goto v_38;
v_37:
    v_54 = stack[-1];
    v_55 = v_54;
    goto v_36;
v_38:
    v_54 = stack[-1];
    if (!car_legal(v_54)) v_54 = carerror(v_54); else
    v_54 = car(v_54);
    v_55 = v_54;
    goto v_36;
    v_55 = nil;
v_36:
    v_54 = basic_elt(env, 2); // or
    if (v_55 == v_54) goto v_33;
    else goto v_34;
v_33:
    v_56 = stack[-2];
    v_54 = stack[-1];
    if (!car_legal(v_54)) v_55 = cdrerror(v_54); else
    v_55 = cdr(v_54);
    v_54 = stack[0];
    {
        LispObject fn = basic_elt(env, 7); // talp_gaussor
        return (*qfn3(fn))(fn, v_56, v_55, v_54);
    }
v_34:
    v_54 = basic_elt(env, 3); // failed
    goto v_7;
    v_54 = nil;
v_7:
    return onevalue(v_54);
}



// Code for cl_gand!-col

static LispObject CC_cl_gandKcol(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_144, v_145, v_146;
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
    stack_popper stack_popper_var(11);
// copy arguments values to proper place
    stack[-5] = v_5;
    stack[-6] = v_4;
    stack[-7] = v_3;
    stack[-8] = v_2;
// end of prologue
    stack[-9] = nil;
    v_146 = basic_elt(env, 1); // true
    v_145 = stack[-6];
    v_144 = basic_elt(env, 2); // and
    v_144 = (v_145 == v_144 ? lisp_true : nil);
    {   LispObject fn = basic_elt(env, 4); // cl_cflip
    v_144 = (*qfn2(fn))(fn, v_146, v_144);
    }
    env = stack[-10];
    stack[-4] = v_144;
    v_144 = stack[-4];
    {   LispObject fn = basic_elt(env, 5); // cl_flip
    v_144 = (*qfn1(fn))(fn, v_144);
    }
    env = stack[-10];
    stack[-3] = v_144;
v_22:
    v_144 = stack[-8];
    if (v_144 == nil) goto v_25;
    else goto v_26;
v_25:
    goto v_21;
v_26:
    v_144 = stack[-8];
    if (!car_legal(v_144)) stack[-2] = carerror(v_144); else
    stack[-2] = car(v_144);
    stack[-1] = stack[-5];
    v_144 = stack[-7];
    stack[0] = sub1(v_144);
    env = stack[-10];
    v_144 = stack[-6];
    v_144 = ncons(v_144);
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 6); // cl_simpl1
    v_144 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_144);
    }
    env = stack[-10];
    v_146 = v_144;
    v_144 = stack[-8];
    if (!car_legal(v_144)) v_144 = cdrerror(v_144); else
    v_144 = cdr(v_144);
    stack[-8] = v_144;
    v_145 = v_146;
    v_144 = stack[-3];
    if (v_145 == v_144) goto v_41;
    else goto v_42;
v_41:
    v_144 = stack[-3];
    v_144 = ncons(v_144);
    env = stack[-10];
    stack[-9] = v_144;
    v_144 = nil;
    stack[-8] = v_144;
    goto v_40;
v_42:
    v_145 = v_146;
    v_144 = stack[-4];
    if (equal(v_145, v_144)) goto v_49;
    v_144 = v_146;
    if (!consp(v_144)) goto v_58;
    else goto v_59;
v_58:
    v_144 = v_146;
    v_145 = v_144;
    goto v_57;
v_59:
    v_144 = v_146;
    if (!car_legal(v_144)) v_144 = carerror(v_144); else
    v_144 = car(v_144);
    v_145 = v_144;
    goto v_57;
    v_145 = nil;
v_57:
    v_144 = stack[-6];
    if (v_145 == v_144) goto v_54;
    else goto v_55;
v_54:
    v_144 = qvalue(basic_elt(env, 3)); // !*rlsichk
    if (v_144 == nil) goto v_70;
    v_144 = v_146;
    if (!car_legal(v_144)) v_144 = cdrerror(v_144); else
    v_144 = cdr(v_144);
    stack[0] = v_144;
v_75:
    v_144 = stack[0];
    if (v_144 == nil) goto v_80;
    else goto v_81;
v_80:
    goto v_74;
v_81:
    v_144 = stack[0];
    if (!car_legal(v_144)) v_144 = carerror(v_144); else
    v_144 = car(v_144);
    v_146 = v_144;
    v_145 = v_146;
    v_144 = stack[-9];
    v_144 = Lmember(nil, v_145, v_144);
    if (v_144 == nil) goto v_89;
    else goto v_90;
v_89:
    v_145 = v_146;
    v_144 = stack[-9];
    v_144 = cons(v_145, v_144);
    env = stack[-10];
    stack[-9] = v_144;
    goto v_88;
v_90:
v_88:
    v_144 = stack[0];
    if (!car_legal(v_144)) v_144 = cdrerror(v_144); else
    v_144 = cdr(v_144);
    stack[0] = v_144;
    goto v_75;
v_74:
    goto v_68;
v_70:
    v_144 = v_146;
    if (!car_legal(v_144)) v_144 = cdrerror(v_144); else
    v_144 = cdr(v_144);
    stack[0] = v_144;
v_104:
    v_144 = stack[0];
    if (v_144 == nil) goto v_109;
    else goto v_110;
v_109:
    goto v_103;
v_110:
    v_144 = stack[0];
    if (!car_legal(v_144)) v_144 = carerror(v_144); else
    v_144 = car(v_144);
    v_145 = v_144;
    v_144 = stack[-9];
    v_144 = cons(v_145, v_144);
    env = stack[-10];
    stack[-9] = v_144;
    v_144 = stack[0];
    if (!car_legal(v_144)) v_144 = cdrerror(v_144); else
    v_144 = cdr(v_144);
    stack[0] = v_144;
    goto v_104;
v_103:
    goto v_68;
v_68:
    goto v_53;
v_55:
    v_144 = qvalue(basic_elt(env, 3)); // !*rlsichk
    if (v_144 == nil) goto v_121;
    v_145 = v_146;
    v_144 = stack[-9];
    v_144 = Lmember(nil, v_145, v_144);
    if (v_144 == nil) goto v_121;
    goto v_122;
v_121:
    v_145 = v_146;
    v_144 = stack[-9];
    v_144 = cons(v_145, v_144);
    env = stack[-10];
    stack[-9] = v_144;
    goto v_53;
v_122:
v_53:
    goto v_40;
v_49:
v_40:
    goto v_22;
v_21:
    v_144 = stack[-9];
    if (v_144 == nil) goto v_136;
    v_144 = stack[-9];
        return Lnreverse(nil, v_144);
v_136:
    v_144 = stack[-4];
    return ncons(v_144);
    v_144 = nil;
    return onevalue(v_144);
}



// Code for pasf_susibinad

static LispObject CC_pasf_susibinad(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_189, v_190, v_191, v_192;
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
    stack[-1] = v_2;
// end of prologue
    v_189 = stack[-1];
    if (!car_legal(v_189)) v_190 = cdrerror(v_189); else
    v_190 = cdr(v_189);
    v_189 = stack[-4];
    if (!car_legal(v_189)) v_189 = cdrerror(v_189); else
    v_189 = cdr(v_189);
    {   LispObject fn = basic_elt(env, 5); // cl_susiminlevel
    v_189 = (*qfn2(fn))(fn, v_190, v_189);
    }
    env = stack[-6];
    stack[-3] = v_189;
    v_189 = stack[-1];
    if (!car_legal(v_189)) v_189 = carerror(v_189); else
    v_189 = car(v_189);
    stack[-1] = v_189;
    v_189 = stack[-4];
    if (!car_legal(v_189)) v_189 = carerror(v_189); else
    v_189 = car(v_189);
    stack[-4] = v_189;
    v_190 = stack[-4];
    v_189 = basic_elt(env, 1); // false
    if (v_190 == v_189) goto v_26;
    else goto v_27;
v_26:
    v_189 = basic_elt(env, 1); // false
    goto v_12;
v_27:
    v_190 = stack[-4];
    v_189 = basic_elt(env, 2); // true
    if (v_190 == v_189) goto v_33;
    else goto v_34;
v_33:
    v_189 = basic_elt(env, 3); // (delete . t)
    return ncons(v_189);
v_34:
    v_189 = stack[-1];
    if (!car_legal(v_189)) v_189 = cdrerror(v_189); else
    v_189 = cdr(v_189);
    if (!car_legal(v_189)) v_190 = carerror(v_189); else
    v_190 = car(v_189);
    v_189 = stack[-4];
    if (!car_legal(v_189)) v_189 = cdrerror(v_189); else
    v_189 = cdr(v_189);
    if (!car_legal(v_189)) v_189 = carerror(v_189); else
    v_189 = car(v_189);
    if (equal(v_190, v_189)) goto v_41;
    else goto v_42;
v_41:
    v_189 = stack[-1];
    if (!car_legal(v_189)) v_189 = cdrerror(v_189); else
    v_189 = cdr(v_189);
    if (!car_legal(v_189)) stack[0] = carerror(v_189); else
    stack[0] = car(v_189);
    v_189 = stack[-1];
    if (!car_legal(v_189)) stack[-1] = carerror(v_189); else
    stack[-1] = car(v_189);
    v_189 = stack[-4];
    if (!car_legal(v_189)) stack[-2] = carerror(v_189); else
    stack[-2] = car(v_189);
    v_189 = stack[-3];
    v_189 = ncons(v_189);
    env = stack[-6];
    {
        LispObject v_199 = stack[0];
        LispObject v_200 = stack[-1];
        LispObject v_201 = stack[-2];
        LispObject fn = basic_elt(env, 6); // pasf_susibineq
        return (*qfn4up(fn))(fn, v_199, v_200, v_201, v_189);
    }
v_42:
    v_189 = stack[-1];
    if (!car_legal(v_189)) v_189 = cdrerror(v_189); else
    v_189 = cdr(v_189);
    if (!car_legal(v_189)) v_189 = carerror(v_189); else
    v_189 = car(v_189);
    {   LispObject fn = basic_elt(env, 7); // pasf_dec
    v_189 = (*qfn1(fn))(fn, v_189);
    }
    env = stack[-6];
    stack[0] = v_189;
    v_189 = stack[-4];
    if (!car_legal(v_189)) v_189 = cdrerror(v_189); else
    v_189 = cdr(v_189);
    if (!car_legal(v_189)) v_189 = carerror(v_189); else
    v_189 = car(v_189);
    {   LispObject fn = basic_elt(env, 7); // pasf_dec
    v_189 = (*qfn1(fn))(fn, v_189);
    }
    env = stack[-6];
    stack[-5] = v_189;
    v_189 = stack[0];
    if (!car_legal(v_189)) v_190 = carerror(v_189); else
    v_190 = car(v_189);
    v_189 = stack[-5];
    if (!car_legal(v_189)) v_189 = carerror(v_189); else
    v_189 = car(v_189);
    if (equal(v_190, v_189)) goto v_69;
    else goto v_70;
v_69:
    v_189 = stack[-1];
    if (!car_legal(v_189)) stack[-2] = carerror(v_189); else
    stack[-2] = car(v_189);
    v_189 = stack[0];
    if (!car_legal(v_189)) stack[-1] = carerror(v_189); else
    stack[-1] = car(v_189);
    v_189 = stack[0];
    if (!car_legal(v_189)) v_189 = cdrerror(v_189); else
    v_189 = cdr(v_189);
    if (v_189 == nil) goto v_83;
    v_189 = stack[0];
    if (!car_legal(v_189)) v_189 = cdrerror(v_189); else
    v_189 = cdr(v_189);
    stack[0] = v_189;
    goto v_81;
v_83:
    v_189 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[0] = v_189;
    goto v_81;
    stack[0] = nil;
v_81:
    v_189 = stack[-4];
    if (!car_legal(v_189)) v_192 = carerror(v_189); else
    v_192 = car(v_189);
    v_189 = stack[-5];
    if (!car_legal(v_189)) v_191 = carerror(v_189); else
    v_191 = car(v_189);
    v_189 = stack[-5];
    if (!car_legal(v_189)) v_189 = cdrerror(v_189); else
    v_189 = cdr(v_189);
    if (v_189 == nil) goto v_99;
    v_189 = stack[-5];
    if (!car_legal(v_189)) v_189 = cdrerror(v_189); else
    v_189 = cdr(v_189);
    v_190 = v_189;
    goto v_97;
v_99:
    v_189 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_190 = v_189;
    goto v_97;
    v_190 = nil;
v_97:
    v_189 = stack[-3];
    v_189 = list4(v_192, v_191, v_190, v_189);
    env = stack[-6];
    {
        LispObject v_202 = stack[-2];
        LispObject v_203 = stack[-1];
        LispObject v_204 = stack[0];
        LispObject fn = basic_elt(env, 8); // pasf_susibinord
        return (*qfn4up(fn))(fn, v_202, v_203, v_204, v_189);
    }
v_70:
    v_189 = stack[0];
    if (!car_legal(v_189)) v_189 = carerror(v_189); else
    v_189 = car(v_189);
    {   LispObject fn = basic_elt(env, 9); // kernels
    v_189 = (*qfn1(fn))(fn, v_189);
    }
    env = stack[-6];
    stack[-2] = v_189;
    v_189 = stack[-5];
    if (!car_legal(v_189)) v_189 = carerror(v_189); else
    v_189 = car(v_189);
    {   LispObject fn = basic_elt(env, 9); // kernels
    v_189 = (*qfn1(fn))(fn, v_189);
    }
    env = stack[-6];
    v_191 = v_189;
    v_189 = stack[-1];
    if (!car_legal(v_189)) v_190 = carerror(v_189); else
    v_190 = car(v_189);
    v_189 = basic_elt(env, 4); // equal
    if (v_190 == v_189) goto v_120;
    else goto v_121;
v_120:
    v_189 = stack[-2];
    if (!car_legal(v_189)) v_189 = cdrerror(v_189); else
    v_189 = cdr(v_189);
    if (v_189 == nil) goto v_127;
    else goto v_128;
v_127:
    v_189 = stack[-2];
    if (!car_legal(v_189)) v_190 = carerror(v_189); else
    v_190 = car(v_189);
    v_189 = v_191;
    v_189 = Lmemq(nil, v_190, v_189);
    goto v_126;
v_128:
    v_189 = nil;
    goto v_126;
    v_189 = nil;
v_126:
    goto v_119;
v_121:
    v_189 = nil;
    goto v_119;
    v_189 = nil;
v_119:
    if (v_189 == nil) goto v_117;
    stack[-1] = stack[-4];
    v_189 = stack[-2];
    if (!car_legal(v_189)) stack[-2] = carerror(v_189); else
    stack[-2] = car(v_189);
    v_189 = stack[0];
    if (!car_legal(v_189)) v_189 = cdrerror(v_189); else
    v_189 = cdr(v_189);
    {   LispObject fn = basic_elt(env, 10); // negf
    v_189 = (*qfn1(fn))(fn, v_189);
    }
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 11); // pasf_subfof1
    v_191 = (*qfn3(fn))(fn, stack[-1], stack[-2], v_189);
    }
    env = stack[-6];
    v_190 = stack[-3];
    v_189 = lisp_true;
    {
        LispObject fn = basic_elt(env, 12); // pasf_susibinad1
        return (*qfn3(fn))(fn, v_191, v_190, v_189);
    }
v_117:
    v_189 = stack[-4];
    if (!car_legal(v_189)) v_190 = carerror(v_189); else
    v_190 = car(v_189);
    v_189 = basic_elt(env, 4); // equal
    if (v_190 == v_189) goto v_157;
    else goto v_158;
v_157:
    v_189 = v_191;
    if (!car_legal(v_189)) v_189 = cdrerror(v_189); else
    v_189 = cdr(v_189);
    if (v_189 == nil) goto v_164;
    else goto v_165;
v_164:
    v_189 = v_191;
    if (!car_legal(v_189)) v_190 = carerror(v_189); else
    v_190 = car(v_189);
    v_189 = stack[-2];
    v_189 = Lmemq(nil, v_190, v_189);
    goto v_163;
v_165:
    v_189 = nil;
    goto v_163;
    v_189 = nil;
v_163:
    goto v_156;
v_158:
    v_189 = nil;
    goto v_156;
    v_189 = nil;
v_156:
    if (v_189 == nil) goto v_154;
    v_189 = v_191;
    if (!car_legal(v_189)) stack[0] = carerror(v_189); else
    stack[0] = car(v_189);
    v_189 = stack[-5];
    if (!car_legal(v_189)) v_189 = cdrerror(v_189); else
    v_189 = cdr(v_189);
    {   LispObject fn = basic_elt(env, 10); // negf
    v_189 = (*qfn1(fn))(fn, v_189);
    }
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 11); // pasf_subfof1
    v_191 = (*qfn3(fn))(fn, stack[-1], stack[0], v_189);
    }
    env = stack[-6];
    v_190 = stack[-3];
    v_189 = nil;
    {
        LispObject fn = basic_elt(env, 12); // pasf_susibinad1
        return (*qfn3(fn))(fn, v_191, v_190, v_189);
    }
v_154:
    v_189 = nil;
v_12:
    return onevalue(v_189);
}



// Code for ctx_get

static LispObject CC_ctx_get(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_37 = v_2;
// end of prologue
    stack[-1] = nil;
    {   LispObject fn = basic_elt(env, 1); // ctx_ial
    v_37 = (*qfn1(fn))(fn, v_37);
    }
    v_39 = v_37;
v_13:
    v_37 = v_39;
    if (v_37 == nil) goto v_16;
    v_37 = stack[-1];
    if (v_37 == nil) goto v_20;
    else goto v_16;
v_20:
    goto v_17;
v_16:
    goto v_12;
v_17:
    v_37 = v_39;
    if (!car_legal(v_37)) v_37 = carerror(v_37); else
    v_37 = car(v_37);
    if (!car_legal(v_37)) v_38 = carerror(v_37); else
    v_38 = car(v_37);
    v_37 = stack[0];
    if (v_38 == v_37) goto v_25;
    else goto v_26;
v_25:
    v_37 = v_39;
    if (!car_legal(v_37)) v_37 = carerror(v_37); else
    v_37 = car(v_37);
    if (!car_legal(v_37)) v_37 = cdrerror(v_37); else
    v_37 = cdr(v_37);
    stack[-1] = v_37;
    goto v_24;
v_26:
v_24:
    v_37 = v_39;
    if (!car_legal(v_37)) v_37 = cdrerror(v_37); else
    v_37 = cdr(v_37);
    v_39 = v_37;
    goto v_13;
v_12:
    v_37 = stack[-1];
    return onevalue(v_37);
}



// Code for symbolsrd

static LispObject CC_symbolsrd(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_113, v_114, v_115;
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
    stack[-4] = nil;
    {   LispObject fn = basic_elt(env, 8); // lex
    v_113 = (*qfn0(fn))(fn);
    }
    env = stack[-5];
    v_114 = qvalue(basic_elt(env, 1)); // char
    v_113 = basic_elt(env, 2); // (b v a r)
    if (equal(v_114, v_113)) goto v_21;
    else goto v_22;
v_21:
    {   LispObject fn = basic_elt(env, 9); // bvarrd
    v_113 = (*qfn0(fn))(fn);
    }
    env = stack[-5];
    stack[-4] = v_113;
    v_113 = stack[-4];
    if (!car_legal(v_113)) v_113 = cdrerror(v_113); else
    v_113 = cdr(v_113);
    if (!car_legal(v_113)) v_113 = cdrerror(v_113); else
    v_113 = cdr(v_113);
    if (!car_legal(v_113)) v_114 = carerror(v_113); else
    v_114 = car(v_113);
    v_113 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_114 == v_113) goto v_28;
    else goto v_29;
v_28:
    v_113 = stack[-4];
    stack[-4] = v_113;
    goto v_27;
v_29:
    v_114 = basic_elt(env, 3); // ""
    v_113 = static_cast<LispObject>(208)+TAG_FIXNUM; // 13
    {   LispObject fn = basic_elt(env, 10); // errorml
    v_113 = (*qfn2(fn))(fn, v_114, v_113);
    }
    env = stack[-5];
    goto v_27;
v_27:
    {   LispObject fn = basic_elt(env, 8); // lex
    v_113 = (*qfn0(fn))(fn);
    }
    env = stack[-5];
    goto v_20;
v_22:
    v_114 = basic_elt(env, 4); // "<bvar>"
    v_113 = static_cast<LispObject>(224)+TAG_FIXNUM; // 14
    {   LispObject fn = basic_elt(env, 10); // errorml
    v_113 = (*qfn2(fn))(fn, v_114, v_113);
    }
    env = stack[-5];
    goto v_20;
v_20:
    v_114 = qvalue(basic_elt(env, 1)); // char
    v_113 = basic_elt(env, 5); // (l o w l i m i t)
    if (equal(v_114, v_113)) goto v_49;
    else goto v_50;
v_49:
    {   LispObject fn = basic_elt(env, 11); // lowupperlimitrd
    v_113 = (*qfn0(fn))(fn);
    }
    env = stack[-5];
    stack[-3] = v_113;
    {   LispObject fn = basic_elt(env, 8); // lex
    v_113 = (*qfn0(fn))(fn);
    }
    env = stack[-5];
    goto v_48;
v_50:
    v_113 = nil;
    stack[-3] = v_113;
    goto v_48;
v_48:
    v_114 = qvalue(basic_elt(env, 1)); // char
    v_113 = basic_elt(env, 6); // (i n t e r v a l)
    if (equal(v_114, v_113)) goto v_60;
    else goto v_61;
v_60:
    {   LispObject fn = basic_elt(env, 12); // intervalrd
    v_113 = (*qfn0(fn))(fn);
    }
    env = stack[-5];
    stack[-2] = v_113;
    {   LispObject fn = basic_elt(env, 8); // lex
    v_113 = (*qfn0(fn))(fn);
    }
    env = stack[-5];
    goto v_59;
v_61:
    v_113 = nil;
    stack[-2] = v_113;
    goto v_59;
v_59:
    v_114 = qvalue(basic_elt(env, 1)); // char
    v_113 = basic_elt(env, 7); // (c o n d i t i o n)
    if (equal(v_114, v_113)) goto v_71;
    else goto v_72;
v_71:
    {   LispObject fn = basic_elt(env, 13); // conditionrd
    v_113 = (*qfn0(fn))(fn);
    }
    env = stack[-5];
    stack[0] = v_113;
    {   LispObject fn = basic_elt(env, 8); // lex
    v_113 = (*qfn0(fn))(fn);
    }
    env = stack[-5];
    goto v_70;
v_72:
    v_113 = nil;
    stack[0] = v_113;
    goto v_70;
v_70:
    {   LispObject fn = basic_elt(env, 14); // mathml2
    v_113 = (*qfn0(fn))(fn);
    }
    env = stack[-5];
    stack[-1] = v_113;
    {   LispObject fn = basic_elt(env, 8); // lex
    v_113 = (*qfn0(fn))(fn);
    }
    v_113 = stack[-3];
    if (v_113 == nil) goto v_85;
    v_115 = stack[-4];
    v_114 = stack[-3];
    v_113 = stack[-1];
    return list3(v_115, v_114, v_113);
v_85:
    v_113 = stack[-2];
    if (v_113 == nil) goto v_94;
    v_115 = stack[-4];
    v_114 = stack[-2];
    v_113 = stack[-1];
    return list3(v_115, v_114, v_113);
v_94:
    v_113 = stack[0];
    if (v_113 == nil) goto v_103;
    v_115 = stack[-4];
    v_114 = stack[0];
    v_113 = stack[-1];
    return list3(v_115, v_114, v_113);
v_103:
    v_115 = stack[-4];
    v_114 = nil;
    v_113 = stack[-1];
    return list3(v_115, v_114, v_113);
    return onevalue(v_113);
}



// Code for findelem2

static LispObject CC_findelem2(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_46, v_47, v_48, v_49;
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
    stack[0] = v_4;
    v_47 = v_3;
    v_48 = v_2;
// end of prologue
    v_46 = v_48;
    v_46 = Lconsp(nil, v_46);
    env = stack[-1];
    if (v_46 == nil) goto v_15;
    v_46 = v_48;
    if (!car_legal(v_46)) v_49 = carerror(v_46); else
    v_49 = car(v_46);
    v_46 = basic_elt(env, 1); // sparsemat
    if (v_49 == v_46) goto v_19;
    else goto v_15;
v_19:
    v_46 = v_48;
    if (!car_legal(v_46)) v_46 = cdrerror(v_46); else
    v_46 = cdr(v_46);
    if (!car_legal(v_46)) v_46 = carerror(v_46); else
    v_46 = car(v_46);
    goto v_13;
v_15:
    v_46 = v_48;
    goto v_13;
v_13:
    v_46 = Lgetv(nil, v_46, v_47);
    v_47 = stack[0];
    v_46 = Latsoc(nil, v_47, v_46);
    v_47 = v_46;
    v_46 = v_47;
    if (v_46 == nil) goto v_37;
    else goto v_38;
v_37:
    v_46 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_36;
v_38:
    v_46 = v_47;
    if (!car_legal(v_46)) v_46 = cdrerror(v_46); else
    v_46 = cdr(v_46);
    goto v_36;
v_36:
    return onevalue(v_46);
}



// Code for init

static LispObject CC_init(LispObject env)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_62;
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
    v_62 = qvalue(basic_elt(env, 1)); // fluidbibasisvariables
    v_62 = Lreverse(nil, v_62);
    env = stack[-7];
    setvalue(basic_elt(env, 2), v_62); // fluidbibasisreversedvariables
    {   LispObject fn = basic_elt(env, 9); // initmonomials
    v_62 = (*qfn0(fn))(fn);
    }
    env = stack[-7];
    v_62 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-6] = v_62;
    v_62 = qvalue(basic_elt(env, 1)); // fluidbibasisvariables
    stack[-5] = v_62;
    v_62 = stack[-5];
    if (v_62 == nil) goto v_20;
    else goto v_21;
v_20:
    v_62 = nil;
    goto v_15;
v_21:
    v_62 = stack[-5];
    if (!car_legal(v_62)) v_62 = carerror(v_62); else
    v_62 = car(v_62);
    stack[-1] = v_62;
    stack[0] = qvalue(basic_elt(env, 3)); // fluidbibasissinglevariablemonomialss
    v_62 = stack[-6];
    v_62 = add1(v_62);
    env = stack[-7];
    stack[-6] = v_62;
    v_62 = Lgetv(nil, stack[0], v_62);
    env = stack[-7];
    v_62 = cons(stack[-1], v_62);
    env = stack[-7];
    v_62 = ncons(v_62);
    env = stack[-7];
    stack[-3] = v_62;
    stack[-4] = v_62;
v_16:
    v_62 = stack[-5];
    if (!car_legal(v_62)) v_62 = cdrerror(v_62); else
    v_62 = cdr(v_62);
    stack[-5] = v_62;
    v_62 = stack[-5];
    if (v_62 == nil) goto v_38;
    else goto v_39;
v_38:
    v_62 = stack[-4];
    goto v_15;
v_39:
    stack[-2] = stack[-3];
    v_62 = stack[-5];
    if (!car_legal(v_62)) v_62 = carerror(v_62); else
    v_62 = car(v_62);
    stack[-1] = v_62;
    stack[0] = qvalue(basic_elt(env, 3)); // fluidbibasissinglevariablemonomialss
    v_62 = stack[-6];
    v_62 = add1(v_62);
    env = stack[-7];
    stack[-6] = v_62;
    v_62 = Lgetv(nil, stack[0], v_62);
    env = stack[-7];
    v_62 = cons(stack[-1], v_62);
    env = stack[-7];
    v_62 = ncons(v_62);
    env = stack[-7];
    if (!car_legal(stack[-2])) rplacd_fails(stack[-2]);
    setcdr(stack[-2], v_62);
    v_62 = stack[-3];
    if (!car_legal(v_62)) v_62 = cdrerror(v_62); else
    v_62 = cdr(v_62);
    stack[-3] = v_62;
    goto v_16;
v_15:
    setvalue(basic_elt(env, 4), v_62); // fluidbibasissinglevariablemonomialsa
    {   LispObject fn = basic_elt(env, 10); // settreset
    v_62 = (*qfn0(fn))(fn);
    }
    env = stack[-7];
    v_62 = nil;
    v_62 = ncons(v_62);
    env = stack[-7];
    setvalue(basic_elt(env, 5), v_62); // fluidbibasissetq
    v_62 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    setvalue(basic_elt(env, 6), v_62); // fluidbibasisreductionsmade
    v_62 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    setvalue(basic_elt(env, 7), v_62); // fluidbibasisnormalforms
    v_62 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    setvalue(basic_elt(env, 8), v_62); // fluidbibasisnonzeronormalforms
    v_62 = nil;
    return onevalue(v_62);
}



// Code for size_of_matrix

static LispObject CC_size_of_matrix(LispObject env,
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
    v_23 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // matrix_input_test
    v_23 = (*qfn1(fn))(fn, v_23);
    }
    env = stack[-2];
    stack[-1] = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    v_23 = stack[0];
    v_23 = Llength(nil, v_23);
    env = stack[-2];
    v_23 = plus2(stack[-1], v_23);
    env = stack[-2];
    stack[-1] = v_23;
    v_23 = stack[0];
    if (!car_legal(v_23)) v_23 = cdrerror(v_23); else
    v_23 = cdr(v_23);
    if (!car_legal(v_23)) v_23 = carerror(v_23); else
    v_23 = car(v_23);
    v_23 = Llength(nil, v_23);
    v_24 = stack[-1];
    return list2(v_24, v_23);
    return onevalue(v_23);
}



// Code for fl2bf

static LispObject CC_fl2bf(LispObject env,
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
    {   LispObject fn = basic_elt(env, 4); // fp!-finite
    v_38 = (*qfn1(fn))(fn, v_38);
    }
    env = stack[-3];
    if (v_38 == nil) goto v_6;
    else goto v_7;
v_6:
    v_39 = basic_elt(env, 1); // "Floating point infinity or NaN"
    v_38 = stack[-1];
    v_38 = list2(v_39, v_38);
    env = stack[-3];
    {
        LispObject fn = basic_elt(env, 5); // rederr
        return (*qfn1(fn))(fn, v_38);
    }
v_7:
    v_38 = stack[-1];
    {   LispObject fn = basic_elt(env, 6); // frexp
    v_38 = (*qfn1(fn))(fn, v_38);
    }
    env = stack[-3];
    stack[-2] = v_38;
    v_38 = stack[-2];
    if (!car_legal(v_38)) v_38 = cdrerror(v_38); else
    v_38 = cdr(v_38);
    stack[-1] = v_38;
    v_38 = stack[-2];
    if (!car_legal(v_38)) v_38 = carerror(v_38); else
    v_38 = car(v_38);
    stack[-2] = v_38;
    stack[0] = stack[-1];
    v_39 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_38 = qvalue(basic_elt(env, 2)); // !!nbfpd
    v_38 = Lexpt(nil, v_39, v_38);
    env = stack[-3];
    v_38 = times2(stack[0], v_38);
    env = stack[-3];
    v_38 = Ltruncate(nil, v_38);
    env = stack[-3];
    stack[-1] = v_38;
    stack[0] = basic_elt(env, 3); // !:rd!:
    v_39 = stack[-2];
    v_38 = qvalue(basic_elt(env, 2)); // !!nbfpd
    v_38 = difference2(v_39, v_38);
    env = stack[-3];
    v_38 = list2star(stack[0], stack[-1], v_38);
    env = stack[-3];
    {
        LispObject fn = basic_elt(env, 7); // normbf
        return (*qfn1(fn))(fn, v_38);
    }
    goto v_5;
    v_38 = nil;
v_5:
    return onevalue(v_38);
}



// Code for list!-evaluate

static LispObject CC_listKevaluate(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_47, v_48, v_49;
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
    stack[-4] = v_3;
    v_47 = v_2;
// end of prologue
    stack[-5] = v_47;
    v_47 = stack[-5];
    if (v_47 == nil) goto v_15;
    else goto v_16;
v_15:
    v_47 = nil;
    goto v_10;
v_16:
    v_47 = stack[-5];
    if (!car_legal(v_47)) v_47 = carerror(v_47); else
    v_47 = car(v_47);
    v_49 = v_47;
    v_48 = stack[-4];
    v_47 = stack[-3];
    {   LispObject fn = basic_elt(env, 1); // evaluate
    v_47 = (*qfn3(fn))(fn, v_49, v_48, v_47);
    }
    env = stack[-6];
    v_47 = ncons(v_47);
    env = stack[-6];
    stack[-1] = v_47;
    stack[-2] = v_47;
v_11:
    v_47 = stack[-5];
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    stack[-5] = v_47;
    v_47 = stack[-5];
    if (v_47 == nil) goto v_31;
    else goto v_32;
v_31:
    v_47 = stack[-2];
    goto v_10;
v_32:
    stack[0] = stack[-1];
    v_47 = stack[-5];
    if (!car_legal(v_47)) v_47 = carerror(v_47); else
    v_47 = car(v_47);
    v_49 = v_47;
    v_48 = stack[-4];
    v_47 = stack[-3];
    {   LispObject fn = basic_elt(env, 1); // evaluate
    v_47 = (*qfn3(fn))(fn, v_49, v_48, v_47);
    }
    env = stack[-6];
    v_47 = ncons(v_47);
    env = stack[-6];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_47);
    v_47 = stack[-1];
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    stack[-1] = v_47;
    goto v_11;
v_10:
    return onevalue(v_47);
}



// Code for consrecip

static LispObject CC_consrecip(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_29, v_30, v_31;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_31 = v_2;
// end of prologue
    v_29 = v_31;
    if (!car_legal(v_29)) v_30 = carerror(v_29); else
    v_30 = car(v_29);
    v_29 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    if (v_30 == v_29) goto v_10;
    else goto v_11;
v_10:
    v_29 = lisp_true;
    goto v_9;
v_11:
    v_29 = v_31;
    if (!car_legal(v_29)) v_30 = carerror(v_29); else
    v_30 = car(v_29);
    v_29 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    v_29 = (v_30 == v_29 ? lisp_true : nil);
    goto v_9;
    v_29 = nil;
v_9:
    if (v_29 == nil) goto v_7;
    v_29 = v_31;
    if (!car_legal(v_29)) v_29 = carerror(v_29); else
    v_29 = car(v_29);
    goto v_5;
v_7:
    v_29 = basic_elt(env, 1); // recip
    v_30 = v_31;
    return cons(v_29, v_30);
    v_29 = nil;
v_5:
    return onevalue(v_29);
}



// Code for splitup

static LispObject CC_splitup(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_52 = v_3;
    stack[0] = v_2;
// end of prologue
    v_50 = stack[0];
    if (v_50 == nil) goto v_7;
    else goto v_8;
v_7:
    v_51 = nil;
    v_50 = nil;
    return list2(v_51, v_50);
v_8:
    v_50 = stack[0];
    if (!car_legal(v_50)) v_50 = carerror(v_50); else
    v_50 = car(v_50);
    if (!car_legal(v_50)) v_50 = carerror(v_50); else
    v_50 = car(v_50);
    if (!car_legal(v_50)) v_50 = carerror(v_50); else
    v_50 = car(v_50);
    v_51 = v_50;
    v_50 = v_51;
    if (v_50 == nil) goto v_22;
    else goto v_23;
v_22:
    v_50 = lisp_true;
    goto v_21;
v_23:
    v_50 = v_52;
    v_50 = Lmemq(nil, v_51, v_50);
    goto v_21;
    v_50 = nil;
v_21:
    if (v_50 == nil) goto v_14;
    v_51 = nil;
    v_50 = stack[0];
    return list2(v_51, v_50);
v_14:
    v_50 = stack[0];
    if (!car_legal(v_50)) v_50 = cdrerror(v_50); else
    v_50 = cdr(v_50);
    v_51 = v_52;
    {   LispObject fn = basic_elt(env, 0); // splitup
    v_50 = (*qfn2(fn))(fn, v_50, v_51);
    }
    env = stack[-2];
    v_51 = v_50;
    v_50 = stack[0];
    if (!car_legal(v_50)) stack[-1] = carerror(v_50); else
    stack[-1] = car(v_50);
    v_50 = v_51;
    if (!car_legal(v_50)) stack[0] = carerror(v_50); else
    stack[0] = car(v_50);
    v_50 = v_51;
    if (!car_legal(v_50)) v_50 = cdrerror(v_50); else
    v_50 = cdr(v_50);
    if (!car_legal(v_50)) v_50 = carerror(v_50); else
    v_50 = car(v_50);
    v_50 = ncons(v_50);
    {
        LispObject v_55 = stack[-1];
        LispObject v_56 = stack[0];
        return acons(v_55, v_56, v_50);
    }
    v_50 = nil;
    return onevalue(v_50);
}



// Code for simpquot

static LispObject CC_simpquot(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_151, v_152, v_153;
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
    v_151 = stack[-1];
    {   LispObject fn = basic_elt(env, 7); // simpcar
    stack[0] = (*qfn1(fn))(fn, v_151);
    }
    env = stack[-3];
    v_151 = stack[-1];
    if (!car_legal(v_151)) v_151 = cdrerror(v_151); else
    v_151 = cdr(v_151);
    if (!car_legal(v_151)) v_151 = carerror(v_151); else
    v_151 = car(v_151);
    {   LispObject fn = basic_elt(env, 8); // simp
    v_151 = (*qfn1(fn))(fn, v_151);
    }
    env = stack[-3];
    stack[-2] = stack[0];
    stack[0] = v_151;
    v_151 = stack[0];
    if (!car_legal(v_151)) v_151 = carerror(v_151); else
    v_151 = car(v_151);
    if (v_151 == nil) goto v_14;
    else goto v_15;
v_14:
    v_151 = stack[-2];
    if (!car_legal(v_151)) v_151 = carerror(v_151); else
    v_151 = car(v_151);
    if (v_151 == nil) goto v_20;
    else goto v_21;
v_20:
    v_153 = basic_elt(env, 1); // alg
    v_152 = static_cast<LispObject>(304)+TAG_FIXNUM; // 19
    v_151 = basic_elt(env, 2); // "0/0 formed"
    {
        LispObject fn = basic_elt(env, 9); // rerror
        return (*qfn3(fn))(fn, v_153, v_152, v_151);
    }
v_21:
    v_153 = basic_elt(env, 1); // alg
    v_152 = static_cast<LispObject>(320)+TAG_FIXNUM; // 20
    v_151 = basic_elt(env, 3); // "Zero divisor"
    {
        LispObject fn = basic_elt(env, 9); // rerror
        return (*qfn3(fn))(fn, v_153, v_152, v_151);
    }
    v_151 = nil;
    goto v_13;
v_15:
    v_152 = qvalue(basic_elt(env, 4)); // dmode!*
    v_151 = basic_elt(env, 5); // (!:rd!: !:cr!:)
    v_151 = Lmemq(nil, v_152, v_151);
    if (v_151 == nil) goto v_35;
    v_151 = stack[0];
    if (!car_legal(v_151)) v_151 = carerror(v_151); else
    v_151 = car(v_151);
    if (!consp(v_151)) goto v_47;
    else goto v_48;
v_47:
    v_151 = lisp_true;
    goto v_46;
v_48:
    v_151 = stack[0];
    if (!car_legal(v_151)) v_151 = carerror(v_151); else
    v_151 = car(v_151);
    if (!car_legal(v_151)) v_151 = carerror(v_151); else
    v_151 = car(v_151);
    v_151 = (consp(v_151) ? nil : lisp_true);
    goto v_46;
    v_151 = nil;
v_46:
    if (v_151 == nil) goto v_44;
    v_151 = stack[0];
    if (!car_legal(v_151)) v_151 = cdrerror(v_151); else
    v_151 = cdr(v_151);
    if (!consp(v_151)) goto v_64;
    else goto v_65;
v_64:
    v_151 = lisp_true;
    goto v_63;
v_65:
    v_151 = stack[0];
    if (!car_legal(v_151)) v_151 = cdrerror(v_151); else
    v_151 = cdr(v_151);
    if (!car_legal(v_151)) v_151 = carerror(v_151); else
    v_151 = car(v_151);
    v_151 = (consp(v_151) ? nil : lisp_true);
    goto v_63;
    v_151 = nil;
v_63:
    if (v_151 == nil) goto v_61;
    v_151 = stack[-2];
    if (!car_legal(v_151)) v_151 = cdrerror(v_151); else
    v_151 = cdr(v_151);
    if (!consp(v_151)) goto v_81;
    else goto v_82;
v_81:
    v_151 = lisp_true;
    goto v_80;
v_82:
    v_151 = stack[-2];
    if (!car_legal(v_151)) v_151 = cdrerror(v_151); else
    v_151 = cdr(v_151);
    if (!car_legal(v_151)) v_151 = carerror(v_151); else
    v_151 = car(v_151);
    v_151 = (consp(v_151) ? nil : lisp_true);
    goto v_80;
    v_151 = nil;
v_80:
    if (v_151 == nil) goto v_78;
    v_151 = stack[0];
    if (!car_legal(v_151)) v_151 = cdrerror(v_151); else
    v_151 = cdr(v_151);
    {   LispObject fn = basic_elt(env, 10); // !:onep
    v_151 = (*qfn1(fn))(fn, v_151);
    }
    env = stack[-3];
    if (v_151 == nil) goto v_94;
    else goto v_95;
v_94:
    v_151 = nil;
    goto v_93;
v_95:
    v_151 = stack[-2];
    if (!car_legal(v_151)) v_151 = cdrerror(v_151); else
    v_151 = cdr(v_151);
    {   LispObject fn = basic_elt(env, 10); // !:onep
    v_151 = (*qfn1(fn))(fn, v_151);
    }
    env = stack[-3];
    goto v_93;
    v_151 = nil;
v_93:
    goto v_76;
v_78:
    v_151 = nil;
    goto v_76;
    v_151 = nil;
v_76:
    goto v_59;
v_61:
    v_151 = nil;
    goto v_59;
    v_151 = nil;
v_59:
    goto v_42;
v_44:
    v_151 = nil;
    goto v_42;
    v_151 = nil;
v_42:
    if (v_151 == nil) goto v_35;
    v_151 = stack[-2];
    if (!car_legal(v_151)) v_151 = carerror(v_151); else
    v_151 = car(v_151);
    if (v_151 == nil) goto v_117;
    else goto v_118;
v_117:
    v_151 = nil;
    v_152 = v_151;
    goto v_116;
v_118:
    v_151 = stack[-2];
    if (!car_legal(v_151)) v_152 = carerror(v_151); else
    v_152 = car(v_151);
    v_151 = stack[0];
    if (!car_legal(v_151)) v_151 = carerror(v_151); else
    v_151 = car(v_151);
    {   LispObject fn = basic_elt(env, 11); // divd
    v_151 = (*qfn2(fn))(fn, v_152, v_151);
    }
    v_152 = v_151;
    goto v_116;
    v_152 = nil;
v_116:
    v_151 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_152, v_151);
v_35:
    stack[0] = stack[-2];
    v_151 = stack[-1];
    if (!car_legal(v_151)) v_151 = cdrerror(v_151); else
    v_151 = cdr(v_151);
    {   LispObject fn = basic_elt(env, 12); // simprecip
    v_151 = (*qfn1(fn))(fn, v_151);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 13); // multsq
    v_151 = (*qfn2(fn))(fn, stack[0], v_151);
    }
    env = stack[-3];
    stack[-1] = v_151;
    v_151 = qvalue(basic_elt(env, 6)); // !*modular
    if (v_151 == nil) goto v_140;
    v_151 = stack[-1];
    if (!car_legal(v_151)) v_151 = cdrerror(v_151); else
    v_151 = cdr(v_151);
    if (v_151 == nil) goto v_143;
    else goto v_140;
v_143:
    v_153 = basic_elt(env, 1); // alg
    v_152 = static_cast<LispObject>(3216)+TAG_FIXNUM; // 201
    v_151 = basic_elt(env, 3); // "Zero divisor"
    {   LispObject fn = basic_elt(env, 9); // rerror
    v_151 = (*qfn3(fn))(fn, v_153, v_152, v_151);
    }
    goto v_138;
v_140:
v_138:
    v_151 = stack[-1];
    goto v_13;
    v_151 = nil;
v_13:
    return onevalue(v_151);
}



// Code for mchsarg

static LispObject CC_mchsarg(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_124, v_125;
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(10);
// copy arguments values to proper place
    stack[-6] = v_4;
    stack[-7] = v_3;
    stack[-1] = v_2;
// end of prologue
    v_124 = stack[-7];
    {   LispObject fn = basic_elt(env, 2); // mtp
    v_124 = (*qfn1(fn))(fn, v_124);
    }
    env = stack[-9];
    if (v_124 == nil) goto v_10;
    v_125 = stack[-6];
    v_124 = basic_elt(env, 1); // times
    if (v_125 == v_124) goto v_18;
    v_124 = lisp_true;
    goto v_16;
v_18:
    v_124 = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // noncomfree
    v_124 = (*qfn1(fn))(fn, v_124);
    }
    env = stack[-9];
    goto v_16;
    v_124 = nil;
v_16:
    if (v_124 == nil) goto v_10;
    v_124 = stack[-7];
    {   LispObject fn = basic_elt(env, 4); // noncomperm
    v_124 = (*qfn1(fn))(fn, v_124);
    }
    env = stack[-9];
    stack[-4] = v_124;
    v_124 = stack[-4];
    if (v_124 == nil) goto v_36;
    else goto v_37;
v_36:
    v_124 = nil;
    goto v_30;
v_37:
    v_124 = stack[-4];
    if (!car_legal(v_124)) v_124 = carerror(v_124); else
    v_124 = car(v_124);
    v_125 = v_124;
    v_124 = stack[-1];
    {   LispObject fn = basic_elt(env, 5); // pair
    v_124 = (*qfn2(fn))(fn, v_125, v_124);
    }
    env = stack[-9];
    v_124 = ncons(v_124);
    env = stack[-9];
    stack[-2] = v_124;
    stack[-3] = v_124;
v_31:
    v_124 = stack[-4];
    if (!car_legal(v_124)) v_124 = cdrerror(v_124); else
    v_124 = cdr(v_124);
    stack[-4] = v_124;
    v_124 = stack[-4];
    if (v_124 == nil) goto v_51;
    else goto v_52;
v_51:
    v_124 = stack[-3];
    goto v_30;
v_52:
    stack[0] = stack[-2];
    v_124 = stack[-4];
    if (!car_legal(v_124)) v_124 = carerror(v_124); else
    v_124 = car(v_124);
    v_125 = v_124;
    v_124 = stack[-1];
    {   LispObject fn = basic_elt(env, 5); // pair
    v_124 = (*qfn2(fn))(fn, v_125, v_124);
    }
    env = stack[-9];
    v_124 = ncons(v_124);
    env = stack[-9];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_124);
    v_124 = stack[-2];
    if (!car_legal(v_124)) v_124 = cdrerror(v_124); else
    v_124 = cdr(v_124);
    stack[-2] = v_124;
    goto v_31;
v_30:
    goto v_8;
v_10:
    v_124 = stack[-1];
    {   LispObject fn = basic_elt(env, 4); // noncomperm
    v_124 = (*qfn1(fn))(fn, v_124);
    }
    env = stack[-9];
    stack[-8] = v_124;
v_73:
    v_124 = stack[-8];
    if (v_124 == nil) goto v_79;
    else goto v_80;
v_79:
    v_124 = nil;
    goto v_72;
v_80:
    v_124 = stack[-8];
    if (!car_legal(v_124)) v_124 = carerror(v_124); else
    v_124 = car(v_124);
    stack[-2] = v_124;
    stack[-1] = stack[-7];
    v_124 = nil;
    stack[0] = ncons(v_124);
    env = stack[-9];
    v_124 = stack[-6];
    v_124 = ncons(v_124);
    env = stack[-9];
    {   LispObject fn = basic_elt(env, 6); // mcharg2
    v_124 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_124);
    }
    env = stack[-9];
    stack[-5] = v_124;
    v_124 = stack[-5];
    {   LispObject fn = basic_elt(env, 7); // lastpair
    v_124 = (*qfn1(fn))(fn, v_124);
    }
    env = stack[-9];
    stack[-4] = v_124;
    v_124 = stack[-8];
    if (!car_legal(v_124)) v_124 = cdrerror(v_124); else
    v_124 = cdr(v_124);
    stack[-8] = v_124;
    v_124 = stack[-4];
    if (!consp(v_124)) goto v_99;
    else goto v_100;
v_99:
    goto v_73;
v_100:
v_74:
    v_124 = stack[-8];
    if (v_124 == nil) goto v_104;
    else goto v_105;
v_104:
    v_124 = stack[-5];
    goto v_72;
v_105:
    stack[-3] = stack[-4];
    v_124 = stack[-8];
    if (!car_legal(v_124)) v_124 = carerror(v_124); else
    v_124 = car(v_124);
    stack[-2] = v_124;
    stack[-1] = stack[-7];
    v_124 = nil;
    stack[0] = ncons(v_124);
    env = stack[-9];
    v_124 = stack[-6];
    v_124 = ncons(v_124);
    env = stack[-9];
    {   LispObject fn = basic_elt(env, 6); // mcharg2
    v_124 = (*qfn4up(fn))(fn, stack[-2], stack[-1], stack[0], v_124);
    }
    env = stack[-9];
    if (!car_legal(stack[-3])) rplacd_fails(stack[-3]);
    setcdr(stack[-3], v_124);
    v_124 = stack[-4];
    {   LispObject fn = basic_elt(env, 7); // lastpair
    v_124 = (*qfn1(fn))(fn, v_124);
    }
    env = stack[-9];
    stack[-4] = v_124;
    v_124 = stack[-8];
    if (!car_legal(v_124)) v_124 = cdrerror(v_124); else
    v_124 = cdr(v_124);
    stack[-8] = v_124;
    goto v_74;
v_72:
    goto v_8;
    v_124 = nil;
v_8:
    {
        LispObject fn = basic_elt(env, 8); // reversip!*
        return (*qfn1(fn))(fn, v_124);
    }
}



// Code for algmodep

static LispObject CC_algmodep(LispObject env,
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
    v_17 = basic_elt(env, 1); // (aeval aeval!*)
    v_16 = Lmemq(nil, v_16, v_17);
    goto v_5;
v_7:
    v_16 = nil;
    goto v_5;
    v_16 = nil;
v_5:
    return onevalue(v_16);
}



// Code for xnp

static LispObject CC_xnp(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_24, v_25, v_26, v_27;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_25 = v_3;
    v_26 = v_2;
// end of prologue
v_1:
    v_24 = v_26;
    if (v_24 == nil) goto v_7;
    else goto v_8;
v_7:
    v_24 = nil;
    goto v_6;
v_8:
    v_24 = v_26;
    if (!car_legal(v_24)) v_27 = carerror(v_24); else
    v_27 = car(v_24);
    v_24 = v_25;
    v_24 = Lmemq(nil, v_27, v_24);
    if (v_24 == nil) goto v_15;
    else goto v_14;
v_15:
    v_24 = v_26;
    if (!car_legal(v_24)) v_26 = cdrerror(v_24); else
    v_26 = cdr(v_24);
    v_24 = v_25;
    v_25 = v_24;
    goto v_1;
v_14:
    goto v_6;
    v_24 = nil;
v_6:
    return onevalue(v_24);
}



// Code for lalr_set_nonterminal_codes

static LispObject CC_lalr_set_nonterminal_codes(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    push(nil, nil, nil);
    stack_popper stack_popper_var(4);
// end of prologue
    v_59 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[-2] = v_59;
    v_59 = qvalue(basic_elt(env, 1)); // nonterminals
    stack[-1] = v_59;
v_10:
    v_59 = stack[-1];
    if (v_59 == nil) goto v_14;
    else goto v_15;
v_14:
    goto v_9;
v_15:
    v_59 = stack[-1];
    if (!car_legal(v_59)) v_59 = carerror(v_59); else
    v_59 = car(v_59);
    stack[0] = v_59;
    v_60 = stack[0];
    v_59 = basic_elt(env, 2); // !S!'
    if (v_60 == v_59) goto v_23;
    else goto v_24;
v_23:
    v_61 = stack[0];
    v_60 = basic_elt(env, 3); // lalr_nonterminal_code
    v_59 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    v_59 = Lputprop(nil, v_61, v_60, v_59);
    env = stack[-3];
    goto v_22;
v_24:
    v_61 = stack[0];
    v_60 = basic_elt(env, 3); // lalr_nonterminal_code
    v_59 = stack[-2];
    v_59 = Lputprop(nil, v_61, v_60, v_59);
    env = stack[-3];
    v_59 = qvalue(basic_elt(env, 4)); // !*lalr_verbose
    if (v_59 == nil) goto v_40;
    v_61 = stack[-2];
    v_60 = stack[0];
    v_59 = qvalue(basic_elt(env, 5)); // nonterminal_codes
    v_59 = acons(v_61, v_60, v_59);
    env = stack[-3];
    setvalue(basic_elt(env, 5), v_59); // nonterminal_codes
    goto v_38;
v_40:
v_38:
    v_59 = stack[-2];
    v_59 = add1(v_59);
    env = stack[-3];
    stack[-2] = v_59;
    goto v_22;
v_22:
    v_59 = stack[-1];
    if (!car_legal(v_59)) v_59 = cdrerror(v_59); else
    v_59 = cdr(v_59);
    stack[-1] = v_59;
    goto v_10;
v_9:
    v_59 = qvalue(basic_elt(env, 4)); // !*lalr_verbose
    if (v_59 == nil) goto v_53;
    v_61 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    v_60 = basic_elt(env, 2); // !S!'
    v_59 = qvalue(basic_elt(env, 5)); // nonterminal_codes
    v_59 = acons(v_61, v_60, v_59);
    env = stack[-3];
    setvalue(basic_elt(env, 5), v_59); // nonterminal_codes
    goto v_51;
v_53:
v_51:
    v_59 = nil;
    return onevalue(v_59);
}



// Code for talp_invtscc

static LispObject CC_talp_invtscc(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_89, v_90;
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
    v_89 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // talp_arg2l
    v_89 = (*qfn1(fn))(fn, v_89);
    }
    env = stack[-4];
    if (!consp(v_89)) goto v_12;
    else goto v_13;
v_12:
    v_89 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // talp_arg2l
    v_89 = (*qfn1(fn))(fn, v_89);
    }
    env = stack[-4];
    stack[-3] = v_89;
    goto v_11;
v_13:
    v_89 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // talp_arg2r
    v_89 = (*qfn1(fn))(fn, v_89);
    }
    env = stack[-4];
    if (!consp(v_89)) goto v_18;
    else goto v_19;
v_18:
    v_89 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // talp_arg2r
    v_89 = (*qfn1(fn))(fn, v_89);
    }
    env = stack[-4];
    stack[-3] = v_89;
    goto v_11;
v_19:
    v_89 = nil;
    goto v_9;
v_11:
    v_89 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // talp_arg2l
    v_89 = (*qfn1(fn))(fn, v_89);
    }
    env = stack[-4];
    if (!consp(v_89)) goto v_29;
    else goto v_30;
v_29:
    v_89 = stack[0];
    {   LispObject fn = basic_elt(env, 2); // talp_arg2r
    v_89 = (*qfn1(fn))(fn, v_89);
    }
    env = stack[-4];
    goto v_28;
v_30:
    v_89 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // talp_arg2l
    v_89 = (*qfn1(fn))(fn, v_89);
    }
    env = stack[-4];
    goto v_28;
    v_89 = nil;
v_28:
    stack[-2] = v_89;
    {   LispObject fn = basic_elt(env, 3); // talp_noffcts
    v_89 = (*qfn0(fn))(fn);
    }
    env = stack[-4];
    stack[0] = v_89;
    v_89 = stack[-2];
    {   LispObject fn = basic_elt(env, 4); // talp_invp
    v_89 = (*qfn1(fn))(fn, v_89);
    }
    env = stack[-4];
    if (v_89 == nil) goto v_46;
    else goto v_47;
v_46:
    v_89 = lisp_true;
    goto v_45;
v_47:
    v_89 = stack[-2];
    {   LispObject fn = basic_elt(env, 5); // talp_td
    v_90 = (*qfn1(fn))(fn, v_89);
    }
    env = stack[-4];
    v_89 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_89 = static_cast<LispObject>(greaterp2(v_90, v_89));
    v_89 = v_89 ? lisp_true : nil;
    env = stack[-4];
    if (v_89 == nil) goto v_55;
    else goto v_54;
v_55:
    v_90 = stack[0];
    v_89 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_89 = (v_90 == v_89 ? lisp_true : nil);
v_54:
    v_89 = (v_89 == nil ? lisp_true : nil);
    goto v_45;
    v_89 = nil;
v_45:
    if (v_89 == nil) goto v_43;
    v_89 = nil;
    goto v_9;
v_43:
    v_89 = stack[-2];
    stack[-1] = v_89;
v_68:
    v_89 = stack[-1];
    {   LispObject fn = basic_elt(env, 6); // talp_invarg
    v_89 = (*qfn1(fn))(fn, v_89);
    }
    env = stack[-4];
    if (!consp(v_89)) goto v_71;
    else goto v_72;
v_71:
    goto v_67;
v_72:
    v_89 = stack[-1];
    {   LispObject fn = basic_elt(env, 6); // talp_invarg
    v_89 = (*qfn1(fn))(fn, v_89);
    }
    env = stack[-4];
    stack[-1] = v_89;
    goto v_68;
v_67:
    stack[0] = stack[-3];
    v_89 = stack[-1];
    {   LispObject fn = basic_elt(env, 6); // talp_invarg
    v_89 = (*qfn1(fn))(fn, v_89);
    }
    if (equal(stack[0], v_89)) goto v_81;
    v_89 = nil;
    goto v_9;
v_81:
    v_90 = stack[-3];
    v_89 = stack[-2];
    return cons(v_90, v_89);
v_9:
    return onevalue(v_89);
}



// Code for pasf_sacat

static LispObject CC_pasf_sacat(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_7, v_8, v_9;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_7 = v_4;
    v_8 = v_3;
    v_9 = v_2;
// end of prologue
    v_7 = nil;
    return onevalue(v_7);
}



// Code for diffrd

static LispObject CC_diffrd(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    push(nil, nil);
    stack_popper stack_popper_var(3);
// end of prologue
    {   LispObject fn = basic_elt(env, 3); // lex
    v_25 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
    v_26 = qvalue(basic_elt(env, 1)); // char
    v_25 = basic_elt(env, 2); // (b v a r)
    if (equal(v_26, v_25)) goto v_10;
    else goto v_11;
v_10:
    {   LispObject fn = basic_elt(env, 4); // bvarrd
    v_25 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
    stack[-1] = v_25;
    {   LispObject fn = basic_elt(env, 3); // lex
    v_25 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
    goto v_9;
v_11:
    v_25 = nil;
    stack[-1] = v_25;
    goto v_9;
v_9:
    {   LispObject fn = basic_elt(env, 5); // mathml2
    v_25 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
    stack[0] = v_25;
    {   LispObject fn = basic_elt(env, 3); // lex
    v_25 = (*qfn0(fn))(fn);
    }
    env = stack[-2];
    v_26 = stack[-1];
    v_25 = stack[0];
    v_25 = list2(v_26, v_25);
    env = stack[-2];
    {
        LispObject fn = basic_elt(env, 6); // diff2
        return (*qfn1(fn))(fn, v_25);
    }
    return onevalue(v_25);
}



// Code for insertocc

static LispObject CC_insertocc(LispObject env,
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
    v_32 = v_3;
    stack[-1] = v_2;
// end of prologue
    v_31 = v_32;
    v_30 = stack[-1];
    v_30 = Lassoc(nil, v_31, v_30);
    stack[-2] = v_30;
    if (v_30 == nil) goto v_11;
    stack[0] = v_32;
    v_30 = stack[-2];
    if (!car_legal(v_30)) v_30 = cdrerror(v_30); else
    v_30 = cdr(v_30);
    v_30 = add1(v_30);
    env = stack[-3];
    v_32 = cons(stack[0], v_30);
    env = stack[-3];
    v_31 = stack[-2];
    v_30 = stack[-1];
    v_30 = Lsubst(nil, v_32, v_31, v_30);
    stack[-1] = v_30;
    goto v_9;
v_11:
    v_31 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_30 = stack[-1];
    v_30 = acons(v_32, v_31, v_30);
    stack[-1] = v_30;
    goto v_9;
v_9:
    v_30 = stack[-1];
    return onevalue(v_30);
}



// Code for xreadlist

static LispObject CC_xreadlist(LispObject env)
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
        env = reclaim(env, "stack", GC_STACK, 0);
    }
#endif // CONSERVATIVE
    real_push(env);
// space for vars preserved across procedure calls
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// end of prologue
    stack[-2] = nil;
    stack[-1] = nil;
    stack[0] = nil;
    {   LispObject fn = basic_elt(env, 9); // scan
    v_76 = (*qfn0(fn))(fn);
    }
    env = stack[-4];
    v_75 = basic_elt(env, 1); // !*rcbkt!*
    if (v_76 == v_75) goto v_12;
    else goto v_13;
v_12:
    {   LispObject fn = basic_elt(env, 9); // scan
    v_75 = (*qfn0(fn))(fn);
    }
    env = stack[-4];
    v_75 = basic_elt(env, 2); // list
    return ncons(v_75);
v_13:
v_9:
    v_75 = stack[-1];
    if (v_75 == nil) goto v_21;
    else goto v_22;
v_21:
    stack[0] = stack[-1];
    v_75 = basic_elt(env, 3); // group
    {   LispObject fn = basic_elt(env, 10); // xread1
    v_75 = (*qfn1(fn))(fn, v_75);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 11); // aconc
    v_75 = (*qfn2(fn))(fn, stack[0], v_75);
    }
    env = stack[-4];
    stack[0] = v_75;
    stack[-1] = v_75;
    goto v_20;
v_22:
    v_75 = basic_elt(env, 3); // group
    {   LispObject fn = basic_elt(env, 10); // xread1
    v_75 = (*qfn1(fn))(fn, v_75);
    }
    env = stack[-4];
    v_75 = ncons(v_75);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 12); // nconc2
    v_75 = (*qfn2(fn))(fn, stack[0], v_75);
    }
    env = stack[-4];
    stack[0] = v_75;
    goto v_20;
v_20:
    v_75 = qvalue(basic_elt(env, 4)); // cursym!*
    stack[-3] = v_75;
    v_76 = stack[-3];
    v_75 = basic_elt(env, 5); // !*semicol!*
    if (v_76 == v_75) goto v_38;
    else goto v_39;
v_38:
    v_76 = basic_elt(env, 6); // "Syntax error: semicolon in list"
    v_75 = nil;
    {   LispObject fn = basic_elt(env, 13); // symerr
    v_75 = (*qfn2(fn))(fn, v_76, v_75);
    }
    env = stack[-4];
    goto v_37;
v_39:
    {   LispObject fn = basic_elt(env, 9); // scan
    v_76 = (*qfn0(fn))(fn);
    }
    env = stack[-4];
    v_75 = basic_elt(env, 1); // !*rcbkt!*
    if (v_76 == v_75) goto v_49;
    else goto v_50;
v_49:
    v_76 = stack[-3];
    v_75 = basic_elt(env, 7); // !*comma!*
    v_75 = (v_76 == v_75 ? lisp_true : nil);
    goto v_48;
v_50:
    v_75 = nil;
    goto v_48;
    v_75 = nil;
v_48:
    if (v_75 == nil) goto v_46;
    v_76 = basic_elt(env, 8); // "Syntax error: invalid comma in list"
    v_75 = nil;
    {   LispObject fn = basic_elt(env, 13); // symerr
    v_75 = (*qfn2(fn))(fn, v_76, v_75);
    }
    env = stack[-4];
    goto v_37;
v_46:
v_37:
    v_76 = stack[-3];
    v_75 = basic_elt(env, 1); // !*rcbkt!*
    if (v_76 == v_75) goto v_64;
    else goto v_65;
v_64:
    v_76 = basic_elt(env, 2); // list
    v_75 = stack[-1];
    return cons(v_76, v_75);
v_65:
    v_75 = stack[-2];
    if (v_75 == nil) goto v_71;
    else goto v_72;
v_71:
    v_75 = stack[-3];
    stack[-2] = v_75;
    goto v_63;
v_72:
v_63:
    goto v_9;
    return onevalue(v_75);
}



// Code for incident1

static LispObject CC_incident1(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_71, v_72, v_73, v_74, v_75;
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
    v_73 = v_4;
    v_74 = v_3;
    v_75 = v_2;
// end of prologue
    v_72 = v_75;
    v_71 = v_74;
    if (!car_legal(v_71)) v_71 = carerror(v_71); else
    v_71 = car(v_71);
    if (!car_legal(v_71)) v_71 = carerror(v_71); else
    v_71 = car(v_71);
    if (v_72 == v_71) goto v_8;
    else goto v_9;
v_8:
    v_71 = v_74;
    if (!car_legal(v_71)) v_71 = cdrerror(v_71); else
    v_71 = cdr(v_71);
    if (!car_legal(v_71)) v_71 = carerror(v_71); else
    v_71 = car(v_71);
    if (!car_legal(v_71)) stack[-1] = carerror(v_71); else
    stack[-1] = car(v_71);
    stack[0] = v_73;
    v_71 = v_74;
    if (!car_legal(v_71)) v_71 = cdrerror(v_71); else
    v_71 = cdr(v_71);
    if (!car_legal(v_71)) v_71 = cdrerror(v_71); else
    v_71 = cdr(v_71);
    if (!car_legal(v_71)) v_71 = carerror(v_71); else
    v_71 = car(v_71);
    if (!car_legal(v_71)) v_71 = carerror(v_71); else
    v_71 = car(v_71);
    v_72 = v_73;
    v_71 = cons(v_71, v_72);
    env = stack[-2];
    v_71 = ncons(v_71);
    {
        LispObject v_78 = stack[-1];
        LispObject v_79 = stack[0];
        return acons(v_78, v_79, v_71);
    }
v_9:
    v_72 = v_75;
    v_71 = v_74;
    if (!car_legal(v_71)) v_71 = cdrerror(v_71); else
    v_71 = cdr(v_71);
    if (!car_legal(v_71)) v_71 = carerror(v_71); else
    v_71 = car(v_71);
    if (!car_legal(v_71)) v_71 = carerror(v_71); else
    v_71 = car(v_71);
    if (v_72 == v_71) goto v_28;
    else goto v_29;
v_28:
    v_71 = v_74;
    if (!car_legal(v_71)) v_71 = cdrerror(v_71); else
    v_71 = cdr(v_71);
    if (!car_legal(v_71)) v_71 = cdrerror(v_71); else
    v_71 = cdr(v_71);
    if (!car_legal(v_71)) v_71 = carerror(v_71); else
    v_71 = car(v_71);
    if (!car_legal(v_71)) stack[-1] = carerror(v_71); else
    stack[-1] = car(v_71);
    stack[0] = v_73;
    v_71 = v_74;
    if (!car_legal(v_71)) v_71 = carerror(v_71); else
    v_71 = car(v_71);
    if (!car_legal(v_71)) v_71 = carerror(v_71); else
    v_71 = car(v_71);
    v_72 = v_73;
    v_71 = cons(v_71, v_72);
    env = stack[-2];
    v_71 = ncons(v_71);
    {
        LispObject v_80 = stack[-1];
        LispObject v_81 = stack[0];
        return acons(v_80, v_81, v_71);
    }
v_29:
    v_72 = v_75;
    v_71 = v_74;
    if (!car_legal(v_71)) v_71 = cdrerror(v_71); else
    v_71 = cdr(v_71);
    if (!car_legal(v_71)) v_71 = cdrerror(v_71); else
    v_71 = cdr(v_71);
    if (!car_legal(v_71)) v_71 = carerror(v_71); else
    v_71 = car(v_71);
    if (!car_legal(v_71)) v_71 = carerror(v_71); else
    v_71 = car(v_71);
    if (v_72 == v_71) goto v_48;
    else goto v_49;
v_48:
    v_71 = v_74;
    if (!car_legal(v_71)) v_71 = carerror(v_71); else
    v_71 = car(v_71);
    if (!car_legal(v_71)) stack[-1] = carerror(v_71); else
    stack[-1] = car(v_71);
    stack[0] = v_73;
    v_71 = v_74;
    if (!car_legal(v_71)) v_71 = cdrerror(v_71); else
    v_71 = cdr(v_71);
    if (!car_legal(v_71)) v_71 = carerror(v_71); else
    v_71 = car(v_71);
    if (!car_legal(v_71)) v_71 = carerror(v_71); else
    v_71 = car(v_71);
    v_72 = v_73;
    v_71 = cons(v_71, v_72);
    env = stack[-2];
    v_71 = ncons(v_71);
    {
        LispObject v_82 = stack[-1];
        LispObject v_83 = stack[0];
        return acons(v_82, v_83, v_71);
    }
v_49:
    v_71 = nil;
    goto v_7;
    v_71 = nil;
v_7:
    return onevalue(v_71);
}



// Code for set!-weights

static LispObject CC_setKweights(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_47;
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
    v_47 = v_2;
// end of prologue
    stack[-4] = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    stack[-3] = v_47;
    v_47 = stack[-3];
    if (v_47 == nil) goto v_21;
    else goto v_22;
v_21:
    v_47 = nil;
    goto v_15;
v_22:
    v_47 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_47 = ncons(v_47);
    env = stack[-5];
    stack[-1] = v_47;
    stack[-2] = v_47;
v_16:
    v_47 = stack[-3];
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    stack[-3] = v_47;
    v_47 = stack[-3];
    if (v_47 == nil) goto v_34;
    else goto v_35;
v_34:
    v_47 = stack[-2];
    goto v_15;
v_35:
    stack[0] = stack[-1];
    v_47 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_47 = ncons(v_47);
    env = stack[-5];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_47);
    v_47 = stack[-1];
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    stack[-1] = v_47;
    goto v_16;
v_15:
    v_47 = cons(stack[-4], v_47);
        return Lnreverse(nil, v_47);
    return onevalue(v_47);
}



// Code for !*g2lex

static LispObject CC_Hg2lex(LispObject env,
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
    v_33 = v_2;
// end of prologue
    v_34 = nil;
    stack[-1] = v_33;
v_10:
    v_33 = stack[-1];
    if (v_33 == nil) goto v_14;
    else goto v_15;
v_14:
    goto v_9;
v_15:
    v_33 = stack[-1];
    if (!car_legal(v_33)) v_33 = carerror(v_33); else
    v_33 = car(v_33);
    stack[0] = v_34;
    v_34 = v_33;
    if (!car_legal(v_34)) v_34 = carerror(v_34); else
    v_34 = car(v_34);
    if (!car_legal(v_34)) v_34 = cdrerror(v_34); else
    v_34 = cdr(v_34);
    if (!car_legal(v_33)) v_33 = cdrerror(v_33); else
    v_33 = cdr(v_33);
    v_33 = cons(v_34, v_33);
    env = stack[-2];
    v_33 = ncons(v_33);
    env = stack[-2];
    {   LispObject fn = basic_elt(env, 1); // psum
    v_33 = (*qfn2(fn))(fn, stack[0], v_33);
    }
    env = stack[-2];
    v_34 = v_33;
    v_33 = stack[-1];
    if (!car_legal(v_33)) v_33 = cdrerror(v_33); else
    v_33 = cdr(v_33);
    stack[-1] = v_33;
    goto v_10;
v_9:
    v_33 = v_34;
    return onevalue(v_33);
}



// Code for !*n2a

static LispObject CC_Hn2a(LispObject env,
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
    v_15 = integerp(v_15);
    if (v_15 == nil) goto v_7;
    v_15 = v_16;
    goto v_5;
v_7:
    v_15 = v_16;
    {
        LispObject fn = basic_elt(env, 1); // !*q2a
        return (*qfn1(fn))(fn, v_15);
    }
    v_15 = nil;
v_5:
    return onevalue(v_15);
}



// Code for basic!-kern

static LispObject CC_basicKkern(LispObject env,
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
    v_28 = v_2;
// end of prologue
    v_27 = nil;
    stack[-1] = v_27;
    v_27 = v_28;
    stack[0] = v_27;
v_9:
    v_27 = stack[0];
    if (v_27 == nil) goto v_13;
    else goto v_14;
v_13:
    goto v_8;
v_14:
    v_27 = stack[0];
    if (!car_legal(v_27)) v_27 = carerror(v_27); else
    v_27 = car(v_27);
    {   LispObject fn = basic_elt(env, 1); // basic!-kern1
    v_28 = (*qfn1(fn))(fn, v_27);
    }
    env = stack[-2];
    v_27 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // union
    v_27 = (*qfn2(fn))(fn, v_28, v_27);
    }
    env = stack[-2];
    stack[-1] = v_27;
    v_27 = stack[0];
    if (!car_legal(v_27)) v_27 = cdrerror(v_27); else
    v_27 = cdr(v_27);
    stack[0] = v_27;
    goto v_9;
v_8:
    v_27 = stack[-1];
    return onevalue(v_27);
}



// Code for noncomfree

static LispObject CC_noncomfree(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_35;
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
    v_35 = stack[0];
    if (symbolp(v_35)) goto v_6;
    else goto v_7;
v_6:
    v_35 = stack[0];
    if (!symbolp(v_35)) v_35 = nil;
    else { v_35 = qfastgets(v_35);
           if (v_35 != nil) { v_35 = elt(v_35, 0); // noncom
#ifdef RECORD_GET
             if (v_35 == SPID_NOPROP)
                record_get(elt(fastget_names, 0), 0),
                v_35 = nil;
             else record_get(elt(fastget_names, 0), 1),
                v_35 = lisp_true; }
           else record_get(elt(fastget_names, 0), 0); }
#else
             if (v_35 == SPID_NOPROP) v_35 = nil; else v_35 = lisp_true; }}
#endif
    v_35 = (v_35 == nil ? lisp_true : nil);
    goto v_5;
v_7:
    v_35 = stack[0];
    if (!consp(v_35)) goto v_16;
    else goto v_17;
v_16:
    v_35 = lisp_true;
    goto v_15;
v_17:
    v_35 = stack[0];
    if (!car_legal(v_35)) v_35 = carerror(v_35); else
    v_35 = car(v_35);
    {   LispObject fn = basic_elt(env, 0); // noncomfree
    v_35 = (*qfn1(fn))(fn, v_35);
    }
    env = stack[-1];
    if (v_35 == nil) goto v_24;
    else goto v_25;
v_24:
    v_35 = nil;
    goto v_23;
v_25:
    v_35 = stack[0];
    if (!car_legal(v_35)) v_35 = cdrerror(v_35); else
    v_35 = cdr(v_35);
    stack[0] = v_35;
    goto v_1;
    v_35 = nil;
v_23:
    goto v_15;
    v_35 = nil;
v_15:
    goto v_5;
    v_35 = nil;
v_5:
    return onevalue(v_35);
}



// Code for gadd

static LispObject CC_gadd(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_74, v_75, v_76;
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
    v_74 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    stack[0] = v_74;
    v_75 = stack[-2];
    v_74 = stack[-3];
    v_74 = Latsoc(nil, v_75, v_74);
    stack[-1] = v_74;
    if (v_74 == nil) goto v_18;
    else goto v_19;
v_18:
    goto v_11;
v_19:
    v_75 = stack[-1];
    v_74 = stack[-3];
    v_74 = Ldelete(nil, v_75, v_74);
    env = stack[-6];
    stack[-3] = v_74;
    v_74 = stack[-1];
    if (!car_legal(v_74)) v_74 = cdrerror(v_74); else
    v_74 = cdr(v_74);
    if (!car_legal(v_74)) v_74 = cdrerror(v_74); else
    v_74 = cdr(v_74);
    stack[-5] = v_74;
    v_74 = stack[-1];
    if (!car_legal(v_74)) v_74 = cdrerror(v_74); else
    v_74 = cdr(v_74);
    if (!car_legal(v_74)) v_74 = carerror(v_74); else
    v_74 = car(v_74);
    stack[-1] = v_74;
v_11:
    v_74 = stack[-4];
    if (v_74 == nil) goto v_34;
    else goto v_35;
v_34:
    v_74 = stack[0];
    stack[0] = Levenp(nil, v_74);
    env = stack[-6];
    v_76 = stack[-2];
    v_75 = stack[-1];
    v_74 = stack[-5];
    v_75 = list2star(v_76, v_75, v_74);
    v_74 = stack[-3];
    {
        LispObject v_83 = stack[0];
        return list2star(v_83, v_75, v_74);
    }
v_35:
    v_74 = stack[-4];
    if (!car_legal(v_74)) v_75 = carerror(v_74); else
    v_75 = car(v_74);
    v_74 = basic_elt(env, 1); // a
    if (v_75 == v_74) goto v_45;
    else goto v_46;
v_45:
    goto v_13;
v_46:
    v_74 = stack[-4];
    if (!car_legal(v_74)) v_75 = carerror(v_74); else
    v_75 = car(v_74);
    v_74 = stack[-5];
    v_74 = cons(v_75, v_74);
    env = stack[-6];
    stack[-5] = v_74;
    goto v_33;
v_33:
v_12:
    v_74 = stack[-4];
    if (!car_legal(v_74)) v_74 = cdrerror(v_74); else
    v_74 = cdr(v_74);
    stack[-4] = v_74;
    goto v_11;
v_13:
    v_75 = qvalue(basic_elt(env, 2)); // ndims!*
    v_74 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    if (v_75 == v_74) goto v_61;
    v_76 = basic_elt(env, 3); // hephys
    v_75 = static_cast<LispObject>(128)+TAG_FIXNUM; // 8
    v_74 = basic_elt(env, 4); // "Gamma5 not allowed unless vecdim is 4"
    {   LispObject fn = basic_elt(env, 5); // rerror
    v_74 = (*qfn3(fn))(fn, v_76, v_75, v_74);
    }
    env = stack[-6];
    goto v_59;
v_61:
v_59:
    v_74 = stack[-1];
    v_74 = (v_74 == nil ? lisp_true : nil);
    stack[-1] = v_74;
    v_74 = stack[-5];
    v_75 = Llength(nil, v_74);
    env = stack[-6];
    v_74 = stack[0];
    v_74 = plus2(v_75, v_74);
    env = stack[-6];
    stack[0] = v_74;
    goto v_12;
    return onevalue(v_74);
}



// Code for mk!+equation

static LispObject CC_mkLequation(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_11, v_12, v_13;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_11 = v_3;
    v_12 = v_2;
// end of prologue
    v_13 = basic_elt(env, 1); // equal
    return list3(v_13, v_12, v_11);
    return onevalue(v_11);
}



// Code for talp_invtscsimpl

static LispObject CC_talp_invtscsimpl(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_111, v_112, v_113;
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
    v_111 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // talp_rnf
    v_111 = (*qfn1(fn))(fn, v_111);
    }
    env = stack[-5];
    stack[0] = v_111;
    v_111 = stack[0];
    if (!consp(v_111)) goto v_11;
    else goto v_12;
v_11:
    v_111 = stack[0];
    goto v_6;
v_12:
    v_111 = stack[0];
    {   LispObject fn = basic_elt(env, 5); // talp_atfp
    v_111 = (*qfn1(fn))(fn, v_111);
    }
    env = stack[-5];
    if (v_111 == nil) goto v_18;
    v_111 = stack[0];
    {   LispObject fn = basic_elt(env, 6); // talp_invtscc
    v_111 = (*qfn1(fn))(fn, v_111);
    }
    env = stack[-5];
    if (v_111 == nil) goto v_24;
    v_111 = stack[0];
    {   LispObject fn = basic_elt(env, 7); // talp_simpat
    v_111 = (*qfn1(fn))(fn, v_111);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 8); // talp_invtscsimplat
    v_111 = (*qfn1(fn))(fn, v_111);
    }
    env = stack[-5];
    {
        LispObject fn = basic_elt(env, 4); // talp_rnf
        return (*qfn1(fn))(fn, v_111);
    }
v_24:
    v_111 = stack[0];
    {
        LispObject fn = basic_elt(env, 7); // talp_simpat
        return (*qfn1(fn))(fn, v_111);
    }
    goto v_16;
v_18:
v_16:
    v_111 = stack[0];
    {   LispObject fn = basic_elt(env, 9); // talp_op
    v_111 = (*qfn1(fn))(fn, v_111);
    }
    env = stack[-5];
    v_113 = v_111;
    v_112 = v_113;
    v_111 = basic_elt(env, 1); // or
    if (v_112 == v_111) goto v_43;
    else goto v_44;
v_43:
    v_111 = lisp_true;
    goto v_42;
v_44:
    v_112 = v_113;
    v_111 = basic_elt(env, 2); // and
    v_111 = (v_112 == v_111 ? lisp_true : nil);
    goto v_42;
    v_111 = nil;
v_42:
    if (v_111 == nil) goto v_40;
    stack[-4] = v_113;
    v_111 = stack[0];
    {   LispObject fn = basic_elt(env, 10); // talp_argl
    v_111 = (*qfn1(fn))(fn, v_111);
    }
    env = stack[-5];
    stack[-3] = v_111;
    v_111 = stack[-3];
    if (v_111 == nil) goto v_66;
    else goto v_67;
v_66:
    v_111 = nil;
    goto v_60;
v_67:
    v_111 = stack[-3];
    if (!car_legal(v_111)) v_111 = carerror(v_111); else
    v_111 = car(v_111);
    {   LispObject fn = basic_elt(env, 0); // talp_invtscsimpl
    v_111 = (*qfn1(fn))(fn, v_111);
    }
    env = stack[-5];
    v_111 = ncons(v_111);
    env = stack[-5];
    stack[-1] = v_111;
    stack[-2] = v_111;
v_61:
    v_111 = stack[-3];
    if (!car_legal(v_111)) v_111 = cdrerror(v_111); else
    v_111 = cdr(v_111);
    stack[-3] = v_111;
    v_111 = stack[-3];
    if (v_111 == nil) goto v_80;
    else goto v_81;
v_80:
    v_111 = stack[-2];
    goto v_60;
v_81:
    stack[0] = stack[-1];
    v_111 = stack[-3];
    if (!car_legal(v_111)) v_111 = carerror(v_111); else
    v_111 = car(v_111);
    {   LispObject fn = basic_elt(env, 0); // talp_invtscsimpl
    v_111 = (*qfn1(fn))(fn, v_111);
    }
    env = stack[-5];
    v_111 = ncons(v_111);
    env = stack[-5];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_111);
    v_111 = stack[-1];
    if (!car_legal(v_111)) v_111 = cdrerror(v_111); else
    v_111 = cdr(v_111);
    stack[-1] = v_111;
    goto v_61;
v_60:
    v_111 = cons(stack[-4], v_111);
    env = stack[-5];
    {
        LispObject fn = basic_elt(env, 4); // talp_rnf
        return (*qfn1(fn))(fn, v_111);
    }
v_40:
    v_112 = v_113;
    v_111 = basic_elt(env, 3); // (ex all)
    v_111 = Lmemq(nil, v_112, v_111);
    if (v_111 == nil) goto v_95;
    stack[-2] = v_113;
    v_111 = stack[0];
    if (!car_legal(v_111)) v_111 = cdrerror(v_111); else
    v_111 = cdr(v_111);
    if (!car_legal(v_111)) stack[-1] = carerror(v_111); else
    stack[-1] = car(v_111);
    v_111 = stack[0];
    if (!car_legal(v_111)) v_111 = cdrerror(v_111); else
    v_111 = cdr(v_111);
    if (!car_legal(v_111)) v_111 = cdrerror(v_111); else
    v_111 = cdr(v_111);
    if (!car_legal(v_111)) v_111 = carerror(v_111); else
    v_111 = car(v_111);
    {   LispObject fn = basic_elt(env, 0); // talp_invtscsimpl
    v_111 = (*qfn1(fn))(fn, v_111);
    }
    env = stack[-5];
    v_111 = ncons(v_111);
    env = stack[-5];
    v_111 = list2star(stack[-2], stack[-1], v_111);
    env = stack[-5];
    {
        LispObject fn = basic_elt(env, 4); // talp_rnf
        return (*qfn1(fn))(fn, v_111);
    }
v_95:
    v_111 = nil;
v_6:
    return onevalue(v_111);
}



// Code for repr_new

static LispObject CC_repr_new(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_26, v_27, v_28, v_29;
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    v_26 = v_5;
    v_27 = v_4;
    v_28 = v_3;
    v_29 = v_2;
// end of prologue
    stack[-3] = v_29;
    stack[-2] = v_28;
    stack[-1] = v_27;
    stack[0] = v_26;
    v_26 = v_27;
    if (v_26 == nil) goto v_15;
    else goto v_16;
v_15:
    v_26 = basic_elt(env, 1); // "repr_new : invalid coefficient list"
    v_26 = ncons(v_26);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 2); // rederr
    v_26 = (*qfn1(fn))(fn, v_26);
    }
    env = stack[-4];
    goto v_14;
v_16:
    v_26 = v_27;
    if (!car_legal(v_26)) v_26 = carerror(v_26); else
    v_26 = car(v_26);
    if (!car_legal(v_26)) v_26 = cdrerror(v_26); else
    v_26 = cdr(v_26);
    goto v_14;
    v_26 = nil;
v_14:
    v_26 = list2(stack[0], v_26);
    {
        LispObject v_34 = stack[-3];
        LispObject v_35 = stack[-2];
        LispObject v_36 = stack[-1];
        return list3star(v_34, v_35, v_36, v_26);
    }
}



// Code for prsubsetrd

static LispObject CC_prsubsetrd(LispObject env)
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
    {   LispObject fn = basic_elt(env, 0); // prsubsetrd
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



setup_type const u41_setup[] =
{
    {"extbrsea",                CC_extbrsea,G1W0,   G2W0,     G3W0,     G4W0},
    {"copy_mat",                G0W1,     CC_copy_mat,G2W1,   G3W1,     G4W1},
    {"exdf0",                   G0W1,     CC_exdf0, G2W1,     G3W1,     G4W1},
    {"multiply-by-power-of-ten",G0W2,     G1W2,     CC_multiplyKbyKpowerKofKten,G3W2,G4W2},
    {"formsetq0",               G0W3,     G1W3,     G2W3,     CC_formsetq0,G4W3},
    {"simp-prop-dist",          G0W1,     CC_simpKpropKdist,G2W1,G3W1,  G4W1},
    {"lambda_iff2c8okfzyq1",    G0W2,     G1W2,     CC_lambda_iff2c8okfzyq1,G3W2,G4W2},
    {"lambda_iff2c8okfzyq1",    G0W2,     G1W2,     CC1_lambda_iff2c8okfzyq1,G3W2,G4W2},
    {"list2vect*",              G0W2,     G1W2,     CC_list2vectH,G3W2, G4W2},
    {"which_first",             G0W3,     G1W3,     G2W3,     CC_which_first,G4W3},
    {"talp_trygaussvar",        G0W3,     G1W3,     G2W3,     CC_talp_trygaussvar,G4W3},
    {"cl_gand-col",             G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_cl_gandKcol},
    {"pasf_susibinad",          G0W2,     G1W2,     CC_pasf_susibinad,G3W2,G4W2},
    {"ctx_get",                 G0W2,     G1W2,     CC_ctx_get,G3W2,    G4W2},
    {"symbolsrd",               CC_symbolsrd,G1W0,  G2W0,     G3W0,     G4W0},
    {"findelem2",               G0W3,     G1W3,     G2W3,     CC_findelem2,G4W3},
    {"init",                    CC_init,  G1W0,     G2W0,     G3W0,     G4W0},
    {"size_of_matrix",          G0W1,     CC_size_of_matrix,G2W1,G3W1,  G4W1},
    {"fl2bf",                   G0W1,     CC_fl2bf, G2W1,     G3W1,     G4W1},
    {"list-evaluate",           G0W3,     G1W3,     G2W3,     CC_listKevaluate,G4W3},
    {"consrecip",               G0W1,     CC_consrecip,G2W1,  G3W1,     G4W1},
    {"splitup",                 G0W2,     G1W2,     CC_splitup,G3W2,    G4W2},
    {"simpquot",                G0W1,     CC_simpquot,G2W1,   G3W1,     G4W1},
    {"mchsarg",                 G0W3,     G1W3,     G2W3,     CC_mchsarg,G4W3},
    {"algmodep",                G0W1,     CC_algmodep,G2W1,   G3W1,     G4W1},
    {"xnp",                     G0W2,     G1W2,     CC_xnp,   G3W2,     G4W2},
    {"lalr_set_nonterminal_codes",CC_lalr_set_nonterminal_codes,G1W0,G2W0,G3W0,G4W0},
    {"talp_invtscc",            G0W1,     CC_talp_invtscc,G2W1,G3W1,    G4W1},
    {"pasf_sacat",              G0W3,     G1W3,     G2W3,     CC_pasf_sacat,G4W3},
    {"diffrd",                  CC_diffrd,G1W0,     G2W0,     G3W0,     G4W0},
    {"insertocc",               G0W2,     G1W2,     CC_insertocc,G3W2,  G4W2},
    {"xreadlist",               CC_xreadlist,G1W0,  G2W0,     G3W0,     G4W0},
    {"incident1",               G0W3,     G1W3,     G2W3,     CC_incident1,G4W3},
    {"set-weights",             G0W1,     CC_setKweights,G2W1,G3W1,     G4W1},
    {"*g2lex",                  G0W1,     CC_Hg2lex,G2W1,     G3W1,     G4W1},
    {"*n2a",                    G0W1,     CC_Hn2a,  G2W1,     G3W1,     G4W1},
    {"basic-kern",              G0W1,     CC_basicKkern,G2W1, G3W1,     G4W1},
    {"noncomfree",              G0W1,     CC_noncomfree,G2W1, G3W1,     G4W1},
    {"gadd",                    G0W3,     G1W3,     G2W3,     CC_gadd,  G4W3},
    {"mk+equation",             G0W2,     G1W2,     CC_mkLequation,G3W2,G4W2},
    {"talp_invtscsimpl",        G0W1,     CC_talp_invtscsimpl,G2W1,G3W1,G4W1},
    {"repr_new",                G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_repr_new},
    {"prsubsetrd",              CC_prsubsetrd,G1W0, G2W0,     G3W0,     G4W0},
    {nullptr, 
        reinterpret_cast<no_args *>(
            reinterpret_cast<uintptr_t>("u41")),
        reinterpret_cast<one_arg *>(
            reinterpret_cast<uintptr_t>("117463 7222334 47046")),
        nullptr, nullptr, nullptr}
};

// end of generated code
