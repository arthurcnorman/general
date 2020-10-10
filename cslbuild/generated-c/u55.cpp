
// $destdir/u55.c        Machine generated C code

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


// Code for partitindexvar

static LispObject CC_partitindexvar(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_682, v_683, v_684;
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
    v_682 = stack[-7];
    if (!car_legal(v_682)) v_682 = cdrerror(v_682); else
    v_682 = cdr(v_682);
    stack[-4] = v_682;
    v_682 = stack[-4];
    if (v_682 == nil) goto v_24;
    else goto v_25;
v_24:
    v_682 = nil;
    goto v_18;
v_25:
    v_682 = stack[-4];
    if (!car_legal(v_682)) v_682 = carerror(v_682); else
    v_682 = car(v_682);
    {   LispObject fn = basic_elt(env, 5); // revalind
    v_682 = (*qfn1(fn))(fn, v_682);
    }
    env = stack[-9];
    v_683 = v_682;
    v_682 = v_683;
    if (!consp(v_682)) goto v_37;
    else goto v_38;
v_37:
    v_682 = v_683;
    if (is_number(v_682)) goto v_42;
    else goto v_43;
v_42:
    v_682 = v_683;
    v_682 = Lminusp(nil, v_682);
    env = stack[-9];
    if (v_682 == nil) goto v_48;
    stack[0] = basic_elt(env, 1); // minus
    v_682 = v_683;
    v_682 = Labsval(nil, v_682);
    env = stack[-9];
    {   LispObject fn = basic_elt(env, 6); // !*num2id
    v_682 = (*qfn1(fn))(fn, v_682);
    }
    env = stack[-9];
    v_682 = list2(stack[0], v_682);
    env = stack[-9];
    goto v_46;
v_48:
    v_682 = v_683;
    {   LispObject fn = basic_elt(env, 6); // !*num2id
    v_682 = (*qfn1(fn))(fn, v_682);
    }
    env = stack[-9];
    goto v_46;
    v_682 = nil;
v_46:
    goto v_41;
v_43:
    v_682 = v_683;
    goto v_41;
    v_682 = nil;
v_41:
    goto v_36;
v_38:
    v_682 = v_683;
    if (!car_legal(v_682)) v_682 = cdrerror(v_682); else
    v_682 = cdr(v_682);
    if (!car_legal(v_682)) v_682 = carerror(v_682); else
    v_682 = car(v_682);
    if (is_number(v_682)) goto v_63;
    else goto v_64;
v_63:
    stack[0] = basic_elt(env, 1); // minus
    v_682 = v_683;
    if (!car_legal(v_682)) v_682 = cdrerror(v_682); else
    v_682 = cdr(v_682);
    if (!car_legal(v_682)) v_682 = carerror(v_682); else
    v_682 = car(v_682);
    {   LispObject fn = basic_elt(env, 6); // !*num2id
    v_682 = (*qfn1(fn))(fn, v_682);
    }
    env = stack[-9];
    v_682 = list2(stack[0], v_682);
    env = stack[-9];
    goto v_36;
v_64:
    v_682 = v_683;
    goto v_36;
    v_682 = nil;
v_36:
    v_682 = ncons(v_682);
    env = stack[-9];
    stack[-2] = v_682;
    stack[-3] = v_682;
v_19:
    v_682 = stack[-4];
    if (!car_legal(v_682)) v_682 = cdrerror(v_682); else
    v_682 = cdr(v_682);
    stack[-4] = v_682;
    v_682 = stack[-4];
    if (v_682 == nil) goto v_81;
    else goto v_82;
v_81:
    v_682 = stack[-3];
    goto v_18;
v_82:
    stack[-1] = stack[-2];
    v_682 = stack[-4];
    if (!car_legal(v_682)) v_682 = carerror(v_682); else
    v_682 = car(v_682);
    {   LispObject fn = basic_elt(env, 5); // revalind
    v_682 = (*qfn1(fn))(fn, v_682);
    }
    env = stack[-9];
    v_683 = v_682;
    v_682 = v_683;
    if (!consp(v_682)) goto v_95;
    else goto v_96;
v_95:
    v_682 = v_683;
    if (is_number(v_682)) goto v_100;
    else goto v_101;
v_100:
    v_682 = v_683;
    v_682 = Lminusp(nil, v_682);
    env = stack[-9];
    if (v_682 == nil) goto v_106;
    stack[0] = basic_elt(env, 1); // minus
    v_682 = v_683;
    v_682 = Labsval(nil, v_682);
    env = stack[-9];
    {   LispObject fn = basic_elt(env, 6); // !*num2id
    v_682 = (*qfn1(fn))(fn, v_682);
    }
    env = stack[-9];
    v_682 = list2(stack[0], v_682);
    env = stack[-9];
    goto v_104;
v_106:
    v_682 = v_683;
    {   LispObject fn = basic_elt(env, 6); // !*num2id
    v_682 = (*qfn1(fn))(fn, v_682);
    }
    env = stack[-9];
    goto v_104;
    v_682 = nil;
v_104:
    goto v_99;
v_101:
    v_682 = v_683;
    goto v_99;
    v_682 = nil;
v_99:
    goto v_94;
v_96:
    v_682 = v_683;
    if (!car_legal(v_682)) v_682 = cdrerror(v_682); else
    v_682 = cdr(v_682);
    if (!car_legal(v_682)) v_682 = carerror(v_682); else
    v_682 = car(v_682);
    if (is_number(v_682)) goto v_121;
    else goto v_122;
v_121:
    stack[0] = basic_elt(env, 1); // minus
    v_682 = v_683;
    if (!car_legal(v_682)) v_682 = cdrerror(v_682); else
    v_682 = cdr(v_682);
    if (!car_legal(v_682)) v_682 = carerror(v_682); else
    v_682 = car(v_682);
    {   LispObject fn = basic_elt(env, 6); // !*num2id
    v_682 = (*qfn1(fn))(fn, v_682);
    }
    env = stack[-9];
    v_682 = list2(stack[0], v_682);
    env = stack[-9];
    goto v_94;
v_122:
    v_682 = v_683;
    goto v_94;
    v_682 = nil;
v_94:
    v_682 = ncons(v_682);
    env = stack[-9];
    if (!car_legal(stack[-1])) rplacd_fails(stack[-1]);
    setcdr(stack[-1], v_682);
    v_682 = stack[-2];
    if (!car_legal(v_682)) v_682 = cdrerror(v_682); else
    v_682 = cdr(v_682);
    stack[-2] = v_682;
    goto v_19;
v_18:
    stack[0] = v_682;
    v_682 = stack[-7];
    {   LispObject fn = basic_elt(env, 7); // deg!*form
    v_682 = (*qfn1(fn))(fn, v_682);
    }
    env = stack[-9];
    stack[-3] = v_682;
    v_682 = qvalue(basic_elt(env, 2)); // metricu!*
    if (v_682 == nil) goto v_142;
    else goto v_143;
v_142:
    goto v_13;
v_143:
    v_682 = stack[0];
    stack[-2] = v_682;
    v_682 = stack[-7];
    if (!car_legal(v_682)) v_683 = carerror(v_682); else
    v_683 = car(v_682);
    v_682 = basic_elt(env, 3); // covariant
    v_682 = Lflagp(nil, v_683, v_682);
    env = stack[-9];
    if (v_682 == nil) goto v_148;
    else goto v_149;
v_148:
v_156:
    v_682 = stack[-2];
    if (v_682 == nil) goto v_159;
    v_682 = stack[-2];
    if (!car_legal(v_682)) v_682 = carerror(v_682); else
    v_682 = car(v_682);
    if (!consp(v_682)) goto v_166;
    else goto v_167;
v_166:
    v_682 = lisp_true;
    goto v_165;
v_167:
    v_682 = stack[-2];
    if (!car_legal(v_682)) v_682 = carerror(v_682); else
    v_682 = car(v_682);
    if (!car_legal(v_682)) v_682 = cdrerror(v_682); else
    v_682 = cdr(v_682);
    if (!car_legal(v_682)) v_683 = carerror(v_682); else
    v_683 = car(v_682);
    v_682 = qvalue(basic_elt(env, 2)); // metricu!*
    v_682 = Latsoc(nil, v_683, v_682);
    v_682 = (v_682 == nil ? lisp_true : nil);
    goto v_165;
    v_682 = nil;
v_165:
    if (v_682 == nil) goto v_159;
    goto v_160;
v_159:
    goto v_155;
v_160:
    v_682 = stack[-2];
    if (!car_legal(v_682)) v_683 = carerror(v_682); else
    v_683 = car(v_682);
    v_682 = stack[-6];
    v_682 = cons(v_683, v_682);
    env = stack[-9];
    stack[-6] = v_682;
    v_682 = stack[-2];
    if (!car_legal(v_682)) v_682 = carerror(v_682); else
    v_682 = car(v_682);
    if (!consp(v_682)) goto v_188;
    v_682 = stack[-2];
    if (!car_legal(v_682)) v_682 = carerror(v_682); else
    v_682 = car(v_682);
    if (!car_legal(v_682)) v_682 = cdrerror(v_682); else
    v_682 = cdr(v_682);
    if (!car_legal(v_682)) v_683 = carerror(v_682); else
    v_683 = car(v_682);
    v_682 = stack[-8];
    v_682 = cons(v_683, v_682);
    env = stack[-9];
    stack[-8] = v_682;
    goto v_186;
v_188:
v_186:
    v_682 = stack[-2];
    if (!car_legal(v_682)) v_682 = cdrerror(v_682); else
    v_682 = cdr(v_682);
    stack[-2] = v_682;
    goto v_156;
v_155:
    v_682 = stack[-2];
    if (v_682 == nil) goto v_202;
    v_682 = nil;
    stack[-5] = v_682;
    v_682 = stack[-6];
    v_682 = Lreverse(nil, v_682);
    env = stack[-9];
    stack[-6] = v_682;
    v_682 = stack[-2];
    if (!car_legal(v_682)) v_682 = carerror(v_682); else
    v_682 = car(v_682);
    if (!car_legal(v_682)) v_682 = cdrerror(v_682); else
    v_682 = cdr(v_682);
    if (!car_legal(v_682)) v_682 = carerror(v_682); else
    v_682 = car(v_682);
    {   LispObject fn = basic_elt(env, 8); // getlower
    v_682 = (*qfn1(fn))(fn, v_682);
    }
    env = stack[-9];
    stack[-4] = v_682;
v_210:
    v_682 = stack[-4];
    if (v_682 == nil) goto v_218;
    else goto v_219;
v_218:
    goto v_209;
v_219:
    v_682 = stack[-4];
    if (!car_legal(v_682)) v_682 = carerror(v_682); else
    v_682 = car(v_682);
    stack[-3] = v_682;
    v_682 = stack[-7];
    if (!car_legal(v_682)) stack[-1] = carerror(v_682); else
    stack[-1] = car(v_682);
    stack[0] = stack[-6];
    v_682 = stack[-3];
    if (!car_legal(v_682)) v_683 = carerror(v_682); else
    v_683 = car(v_682);
    v_682 = stack[-2];
    if (!car_legal(v_682)) v_682 = cdrerror(v_682); else
    v_682 = cdr(v_682);
    v_682 = cons(v_683, v_682);
    env = stack[-9];
    v_682 = Lappend_2(nil, stack[0], v_682);
    env = stack[-9];
    v_682 = cons(stack[-1], v_682);
    env = stack[-9];
    {   LispObject fn = basic_elt(env, 0); // partitindexvar
    stack[0] = (*qfn1(fn))(fn, v_682);
    }
    env = stack[-9];
    v_682 = stack[-3];
    if (!car_legal(v_682)) v_682 = cdrerror(v_682); else
    v_682 = cdr(v_682);
    {   LispObject fn = basic_elt(env, 9); // simp
    v_682 = (*qfn1(fn))(fn, v_682);
    }
    env = stack[-9];
    {   LispObject fn = basic_elt(env, 10); // multpfsq
    v_683 = (*qfn2(fn))(fn, stack[0], v_682);
    }
    env = stack[-9];
    v_682 = stack[-5];
    {   LispObject fn = basic_elt(env, 11); // addpf
    v_682 = (*qfn2(fn))(fn, v_683, v_682);
    }
    env = stack[-9];
    stack[-5] = v_682;
    v_682 = stack[-4];
    if (!car_legal(v_682)) v_682 = cdrerror(v_682); else
    v_682 = cdr(v_682);
    stack[-4] = v_682;
    goto v_210;
v_209:
    v_682 = stack[-5];
    goto v_12;
v_202:
    goto v_147;
v_149:
v_249:
    v_682 = stack[-2];
    if (v_682 == nil) goto v_252;
    v_682 = stack[-2];
    if (!car_legal(v_682)) v_682 = carerror(v_682); else
    v_682 = car(v_682);
    if (!consp(v_682)) goto v_260;
    v_682 = lisp_true;
    goto v_258;
v_260:
    v_682 = stack[-2];
    if (!car_legal(v_682)) v_683 = carerror(v_682); else
    v_683 = car(v_682);
    v_682 = qvalue(basic_elt(env, 2)); // metricu!*
    v_682 = Latsoc(nil, v_683, v_682);
    v_682 = (v_682 == nil ? lisp_true : nil);
    goto v_258;
    v_682 = nil;
v_258:
    if (v_682 == nil) goto v_252;
    goto v_253;
v_252:
    goto v_248;
v_253:
    v_682 = stack[-2];
    if (!car_legal(v_682)) v_683 = carerror(v_682); else
    v_683 = car(v_682);
    v_682 = stack[-6];
    v_682 = cons(v_683, v_682);
    env = stack[-9];
    stack[-6] = v_682;
    v_682 = stack[-2];
    if (!car_legal(v_682)) v_682 = carerror(v_682); else
    v_682 = car(v_682);
    if (!consp(v_682)) goto v_278;
    else goto v_279;
v_278:
    v_682 = stack[-2];
    if (!car_legal(v_682)) v_683 = carerror(v_682); else
    v_683 = car(v_682);
    v_682 = stack[-8];
    v_682 = cons(v_683, v_682);
    env = stack[-9];
    stack[-8] = v_682;
    goto v_277;
v_279:
v_277:
    v_682 = stack[-2];
    if (!car_legal(v_682)) v_682 = cdrerror(v_682); else
    v_682 = cdr(v_682);
    stack[-2] = v_682;
    goto v_249;
v_248:
    v_682 = stack[-2];
    if (v_682 == nil) goto v_291;
    v_682 = nil;
    stack[-5] = v_682;
    v_682 = stack[-6];
    v_682 = Lreverse(nil, v_682);
    env = stack[-9];
    stack[-6] = v_682;
    v_682 = stack[-2];
    if (!car_legal(v_682)) v_682 = carerror(v_682); else
    v_682 = car(v_682);
    {   LispObject fn = basic_elt(env, 12); // getupper
    v_682 = (*qfn1(fn))(fn, v_682);
    }
    env = stack[-9];
    stack[-4] = v_682;
v_299:
    v_682 = stack[-4];
    if (v_682 == nil) goto v_305;
    else goto v_306;
v_305:
    goto v_298;
v_306:
    v_682 = stack[-4];
    if (!car_legal(v_682)) v_682 = carerror(v_682); else
    v_682 = car(v_682);
    stack[-3] = v_682;
    v_682 = stack[-7];
    if (!car_legal(v_682)) stack[-1] = carerror(v_682); else
    stack[-1] = car(v_682);
    stack[0] = stack[-6];
    v_683 = basic_elt(env, 1); // minus
    v_682 = stack[-3];
    if (!car_legal(v_682)) v_682 = carerror(v_682); else
    v_682 = car(v_682);
    v_683 = list2(v_683, v_682);
    env = stack[-9];
    v_682 = stack[-2];
    if (!car_legal(v_682)) v_682 = cdrerror(v_682); else
    v_682 = cdr(v_682);
    v_682 = cons(v_683, v_682);
    env = stack[-9];
    v_682 = Lappend_2(nil, stack[0], v_682);
    env = stack[-9];
    v_682 = cons(stack[-1], v_682);
    env = stack[-9];
    {   LispObject fn = basic_elt(env, 0); // partitindexvar
    stack[0] = (*qfn1(fn))(fn, v_682);
    }
    env = stack[-9];
    v_682 = stack[-3];
    if (!car_legal(v_682)) v_682 = cdrerror(v_682); else
    v_682 = cdr(v_682);
    {   LispObject fn = basic_elt(env, 9); // simp
    v_682 = (*qfn1(fn))(fn, v_682);
    }
    env = stack[-9];
    {   LispObject fn = basic_elt(env, 10); // multpfsq
    v_683 = (*qfn2(fn))(fn, stack[0], v_682);
    }
    env = stack[-9];
    v_682 = stack[-5];
    {   LispObject fn = basic_elt(env, 11); // addpf
    v_682 = (*qfn2(fn))(fn, v_683, v_682);
    }
    env = stack[-9];
    stack[-5] = v_682;
    v_682 = stack[-4];
    if (!car_legal(v_682)) v_682 = cdrerror(v_682); else
    v_682 = cdr(v_682);
    stack[-4] = v_682;
    goto v_299;
v_298:
    v_682 = stack[-5];
    goto v_12;
v_291:
    goto v_147;
v_147:
v_13:
    v_682 = stack[0];
    {   LispObject fn = basic_elt(env, 13); // coposp
    v_682 = (*qfn1(fn))(fn, v_682);
    }
    env = stack[-9];
    if (v_682 == nil) goto v_340;
    else goto v_341;
v_340:
    v_682 = lisp_true;
    goto v_339;
v_341:
    v_682 = stack[-7];
    if (!car_legal(v_682)) v_683 = carerror(v_682); else
    v_683 = car(v_682);
    v_682 = basic_elt(env, 4); // indxsymmetries
    v_682 = get(v_683, v_682);
    env = stack[-9];
    v_682 = (v_682 == nil ? lisp_true : nil);
    goto v_339;
    v_682 = nil;
v_339:
    if (v_682 == nil) goto v_337;
    v_682 = stack[-3];
    if (v_682 == nil) goto v_355;
    v_682 = stack[-7];
    if (!car_legal(v_682)) v_683 = carerror(v_682); else
    v_683 = car(v_682);
    v_682 = stack[0];
    v_682 = cons(v_683, v_682);
    env = stack[-9];
    {
        LispObject fn = basic_elt(env, 14); // mkupf
        return (*qfn1(fn))(fn, v_682);
    }
v_355:
    stack[-1] = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_682 = stack[-7];
    if (!car_legal(v_682)) v_683 = carerror(v_682); else
    v_683 = car(v_682);
    v_682 = stack[0];
    v_683 = cons(v_683, v_682);
    env = stack[-9];
    v_682 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 15); // mksq
    v_682 = (*qfn2(fn))(fn, v_683, v_682);
    }
    env = stack[-9];
    v_682 = cons(stack[-1], v_682);
    return ncons(v_682);
    v_682 = nil;
    goto v_12;
v_337:
    v_682 = stack[0];
    stack[-4] = v_682;
    v_682 = stack[-4];
    if (v_682 == nil) goto v_382;
    else goto v_383;
v_382:
    v_682 = nil;
    goto v_377;
v_383:
    v_682 = stack[-4];
    if (!car_legal(v_682)) v_682 = carerror(v_682); else
    v_682 = car(v_682);
    v_683 = v_682;
    v_682 = v_683;
    if (!consp(v_682)) goto v_392;
    else goto v_393;
v_392:
    v_682 = v_683;
    goto v_391;
v_393:
    v_682 = v_683;
    if (!car_legal(v_682)) v_682 = cdrerror(v_682); else
    v_682 = cdr(v_682);
    if (!car_legal(v_682)) v_682 = carerror(v_682); else
    v_682 = car(v_682);
    goto v_391;
    v_682 = nil;
v_391:
    v_682 = ncons(v_682);
    env = stack[-9];
    stack[-1] = v_682;
    stack[-2] = v_682;
v_378:
    v_682 = stack[-4];
    if (!car_legal(v_682)) v_682 = cdrerror(v_682); else
    v_682 = cdr(v_682);
    stack[-4] = v_682;
    v_682 = stack[-4];
    if (v_682 == nil) goto v_405;
    else goto v_406;
v_405:
    v_682 = stack[-2];
    goto v_377;
v_406:
    stack[0] = stack[-1];
    v_682 = stack[-4];
    if (!car_legal(v_682)) v_682 = carerror(v_682); else
    v_682 = car(v_682);
    v_683 = v_682;
    v_682 = v_683;
    if (!consp(v_682)) goto v_416;
    else goto v_417;
v_416:
    v_682 = v_683;
    goto v_415;
v_417:
    v_682 = v_683;
    if (!car_legal(v_682)) v_682 = cdrerror(v_682); else
    v_682 = cdr(v_682);
    if (!car_legal(v_682)) v_682 = carerror(v_682); else
    v_682 = car(v_682);
    goto v_415;
    v_682 = nil;
v_415:
    v_682 = ncons(v_682);
    env = stack[-9];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_682);
    v_682 = stack[-1];
    if (!car_legal(v_682)) v_682 = cdrerror(v_682); else
    v_682 = cdr(v_682);
    stack[-1] = v_682;
    goto v_378;
v_377:
    stack[0] = v_682;
    v_682 = stack[-7];
    if (!car_legal(v_682)) v_683 = carerror(v_682); else
    v_683 = car(v_682);
    v_682 = stack[0];
    v_682 = cons(v_683, v_682);
    env = stack[-9];
    {   LispObject fn = basic_elt(env, 16); // indexsymmetrize
    v_682 = (*qfn1(fn))(fn, v_682);
    }
    env = stack[-9];
    stack[0] = v_682;
    v_682 = stack[0];
    if (v_682 == nil) goto v_435;
    else goto v_436;
v_435:
    v_682 = nil;
    goto v_12;
v_436:
    v_682 = stack[0];
    if (!car_legal(v_682)) v_683 = carerror(v_682); else
    v_683 = car(v_682);
    v_682 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    if (v_683 == v_682) goto v_441;
    else goto v_442;
v_441:
    v_682 = lisp_true;
    stack[-5] = v_682;
    goto v_440;
v_442:
v_440:
    v_682 = stack[0];
    if (!car_legal(v_682)) v_682 = cdrerror(v_682); else
    v_682 = cdr(v_682);
    if (!car_legal(v_682)) v_682 = cdrerror(v_682); else
    v_682 = cdr(v_682);
    stack[0] = v_682;
    v_682 = stack[-7];
    if (!car_legal(v_682)) v_683 = carerror(v_682); else
    v_683 = car(v_682);
    v_682 = basic_elt(env, 3); // covariant
    v_682 = Lflagp(nil, v_683, v_682);
    env = stack[-9];
    if (v_682 == nil) goto v_453;
    v_682 = stack[0];
    stack[-4] = v_682;
    v_682 = stack[-4];
    if (v_682 == nil) goto v_467;
    else goto v_468;
v_467:
    v_682 = nil;
    goto v_462;
v_468:
    v_682 = stack[-4];
    if (!car_legal(v_682)) v_682 = carerror(v_682); else
    v_682 = car(v_682);
    v_684 = v_682;
    v_683 = v_684;
    v_682 = stack[-8];
    v_682 = Lmemq(nil, v_683, v_682);
    if (v_682 == nil) goto v_478;
    v_682 = v_684;
    goto v_476;
v_478:
    v_682 = basic_elt(env, 1); // minus
    v_683 = v_684;
    v_682 = list2(v_682, v_683);
    env = stack[-9];
    goto v_476;
    v_682 = nil;
v_476:
    v_682 = ncons(v_682);
    env = stack[-9];
    stack[-1] = v_682;
    stack[-2] = v_682;
v_463:
    v_682 = stack[-4];
    if (!car_legal(v_682)) v_682 = cdrerror(v_682); else
    v_682 = cdr(v_682);
    stack[-4] = v_682;
    v_682 = stack[-4];
    if (v_682 == nil) goto v_492;
    else goto v_493;
v_492:
    v_682 = stack[-2];
    goto v_462;
v_493:
    stack[0] = stack[-1];
    v_682 = stack[-4];
    if (!car_legal(v_682)) v_682 = carerror(v_682); else
    v_682 = car(v_682);
    v_684 = v_682;
    v_683 = v_684;
    v_682 = stack[-8];
    v_682 = Lmemq(nil, v_683, v_682);
    if (v_682 == nil) goto v_504;
    v_682 = v_684;
    goto v_502;
v_504:
    v_682 = basic_elt(env, 1); // minus
    v_683 = v_684;
    v_682 = list2(v_682, v_683);
    env = stack[-9];
    goto v_502;
    v_682 = nil;
v_502:
    v_682 = ncons(v_682);
    env = stack[-9];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_682);
    v_682 = stack[-1];
    if (!car_legal(v_682)) v_682 = cdrerror(v_682); else
    v_682 = cdr(v_682);
    stack[-1] = v_682;
    goto v_463;
v_462:
    stack[0] = v_682;
    goto v_451;
v_453:
    v_682 = qvalue(basic_elt(env, 2)); // metricu!*
    if (v_682 == nil) goto v_521;
    else goto v_522;
v_521:
    v_682 = stack[-7];
    if (!car_legal(v_682)) v_682 = cdrerror(v_682); else
    v_682 = cdr(v_682);
    if (!car_legal(v_682)) v_682 = carerror(v_682); else
    v_682 = car(v_682);
    v_682 = (consp(v_682) ? nil : lisp_true);
    v_682 = (v_682 == nil ? lisp_true : nil);
    goto v_520;
v_522:
    v_682 = nil;
    goto v_520;
    v_682 = nil;
v_520:
    if (v_682 == nil) goto v_518;
    v_682 = stack[0];
    stack[-4] = v_682;
    v_682 = stack[-4];
    if (v_682 == nil) goto v_541;
    else goto v_542;
v_541:
    v_682 = nil;
    goto v_536;
v_542:
    v_682 = stack[-4];
    if (!car_legal(v_682)) v_682 = carerror(v_682); else
    v_682 = car(v_682);
    v_683 = basic_elt(env, 1); // minus
    v_682 = list2(v_683, v_682);
    env = stack[-9];
    v_682 = ncons(v_682);
    env = stack[-9];
    stack[-1] = v_682;
    stack[-2] = v_682;
v_537:
    v_682 = stack[-4];
    if (!car_legal(v_682)) v_682 = cdrerror(v_682); else
    v_682 = cdr(v_682);
    stack[-4] = v_682;
    v_682 = stack[-4];
    if (v_682 == nil) goto v_556;
    else goto v_557;
v_556:
    v_682 = stack[-2];
    goto v_536;
v_557:
    stack[0] = stack[-1];
    v_682 = stack[-4];
    if (!car_legal(v_682)) v_682 = carerror(v_682); else
    v_682 = car(v_682);
    v_683 = basic_elt(env, 1); // minus
    v_682 = list2(v_683, v_682);
    env = stack[-9];
    v_682 = ncons(v_682);
    env = stack[-9];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_682);
    v_682 = stack[-1];
    if (!car_legal(v_682)) v_682 = cdrerror(v_682); else
    v_682 = cdr(v_682);
    stack[-1] = v_682;
    goto v_537;
v_536:
    stack[0] = v_682;
    goto v_451;
v_518:
    v_682 = stack[0];
    stack[-4] = v_682;
    v_682 = stack[-4];
    if (v_682 == nil) goto v_582;
    else goto v_583;
v_582:
    v_682 = nil;
    goto v_577;
v_583:
    v_682 = stack[-4];
    if (!car_legal(v_682)) v_682 = carerror(v_682); else
    v_682 = car(v_682);
    v_684 = v_682;
    v_683 = v_684;
    v_682 = stack[-8];
    v_682 = Lmemq(nil, v_683, v_682);
    if (v_682 == nil) goto v_593;
    v_682 = basic_elt(env, 1); // minus
    v_683 = v_684;
    v_682 = list2(v_682, v_683);
    env = stack[-9];
    goto v_591;
v_593:
    v_682 = v_684;
    goto v_591;
    v_682 = nil;
v_591:
    v_682 = ncons(v_682);
    env = stack[-9];
    stack[-1] = v_682;
    stack[-2] = v_682;
v_578:
    v_682 = stack[-4];
    if (!car_legal(v_682)) v_682 = cdrerror(v_682); else
    v_682 = cdr(v_682);
    stack[-4] = v_682;
    v_682 = stack[-4];
    if (v_682 == nil) goto v_607;
    else goto v_608;
v_607:
    v_682 = stack[-2];
    goto v_577;
v_608:
    stack[0] = stack[-1];
    v_682 = stack[-4];
    if (!car_legal(v_682)) v_682 = carerror(v_682); else
    v_682 = car(v_682);
    v_684 = v_682;
    v_683 = v_684;
    v_682 = stack[-8];
    v_682 = Lmemq(nil, v_683, v_682);
    if (v_682 == nil) goto v_619;
    v_682 = basic_elt(env, 1); // minus
    v_683 = v_684;
    v_682 = list2(v_682, v_683);
    env = stack[-9];
    goto v_617;
v_619:
    v_682 = v_684;
    goto v_617;
    v_682 = nil;
v_617:
    v_682 = ncons(v_682);
    env = stack[-9];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_682);
    v_682 = stack[-1];
    if (!car_legal(v_682)) v_682 = cdrerror(v_682); else
    v_682 = cdr(v_682);
    stack[-1] = v_682;
    goto v_578;
v_577:
    stack[0] = v_682;
    goto v_451;
v_451:
    v_682 = stack[-3];
    if (v_682 == nil) goto v_635;
    v_682 = stack[-5];
    if (v_682 == nil) goto v_640;
    v_682 = stack[-7];
    if (!car_legal(v_682)) v_683 = carerror(v_682); else
    v_683 = car(v_682);
    v_682 = stack[0];
    v_682 = cons(v_683, v_682);
    env = stack[-9];
    {   LispObject fn = basic_elt(env, 14); // mkupf
    stack[0] = (*qfn1(fn))(fn, v_682);
    }
    env = stack[-9];
    v_683 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    v_682 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_682 = cons(v_683, v_682);
    env = stack[-9];
    {
        LispObject v_694 = stack[0];
        LispObject fn = basic_elt(env, 10); // multpfsq
        return (*qfn2(fn))(fn, v_694, v_682);
    }
v_640:
    v_682 = stack[-7];
    if (!car_legal(v_682)) v_683 = carerror(v_682); else
    v_683 = car(v_682);
    v_682 = stack[0];
    v_682 = cons(v_683, v_682);
    env = stack[-9];
    {
        LispObject fn = basic_elt(env, 14); // mkupf
        return (*qfn1(fn))(fn, v_682);
    }
    v_682 = nil;
    goto v_633;
v_635:
    v_682 = stack[-5];
    if (v_682 == nil) goto v_659;
    stack[-1] = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_682 = stack[-7];
    if (!car_legal(v_682)) v_683 = carerror(v_682); else
    v_683 = car(v_682);
    v_682 = stack[0];
    v_683 = cons(v_683, v_682);
    env = stack[-9];
    v_682 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 15); // mksq
    v_682 = (*qfn2(fn))(fn, v_683, v_682);
    }
    env = stack[-9];
    {   LispObject fn = basic_elt(env, 17); // negsq
    v_682 = (*qfn1(fn))(fn, v_682);
    }
    env = stack[-9];
    v_682 = cons(stack[-1], v_682);
    return ncons(v_682);
v_659:
    stack[-1] = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_682 = stack[-7];
    if (!car_legal(v_682)) v_683 = carerror(v_682); else
    v_683 = car(v_682);
    v_682 = stack[0];
    v_683 = cons(v_683, v_682);
    env = stack[-9];
    v_682 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 15); // mksq
    v_682 = (*qfn2(fn))(fn, v_683, v_682);
    }
    env = stack[-9];
    v_682 = cons(stack[-1], v_682);
    return ncons(v_682);
    v_682 = nil;
v_633:
v_12:
    return onevalue(v_682);
}



// Code for mk!-coeff1

static LispObject CC_mkKcoeff1(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_60 = v_2;
// end of prologue
    v_59 = v_60;
    if (v_59 == nil) goto v_7;
    else goto v_8;
v_7:
    v_59 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_6;
v_8:
    stack[-5] = basic_elt(env, 1); // times
    v_59 = v_60;
    stack[-3] = v_59;
    v_59 = stack[-3];
    if (v_59 == nil) goto v_25;
    else goto v_26;
v_25:
    v_59 = nil;
    goto v_20;
v_26:
    v_59 = stack[-3];
    if (!car_legal(v_59)) v_59 = carerror(v_59); else
    v_59 = car(v_59);
    if (!car_legal(v_59)) v_60 = carerror(v_59); else
    v_60 = car(v_59);
    v_59 = stack[-4];
    {   LispObject fn = basic_elt(env, 2); // getroad
    v_59 = (*qfn2(fn))(fn, v_60, v_59);
    }
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 3); // factorial
    v_59 = (*qfn1(fn))(fn, v_59);
    }
    env = stack[-6];
    v_59 = ncons(v_59);
    env = stack[-6];
    stack[-1] = v_59;
    stack[-2] = v_59;
v_21:
    v_59 = stack[-3];
    if (!car_legal(v_59)) v_59 = cdrerror(v_59); else
    v_59 = cdr(v_59);
    stack[-3] = v_59;
    v_59 = stack[-3];
    if (v_59 == nil) goto v_42;
    else goto v_43;
v_42:
    v_59 = stack[-2];
    goto v_20;
v_43:
    stack[0] = stack[-1];
    v_59 = stack[-3];
    if (!car_legal(v_59)) v_59 = carerror(v_59); else
    v_59 = car(v_59);
    if (!car_legal(v_59)) v_60 = carerror(v_59); else
    v_60 = car(v_59);
    v_59 = stack[-4];
    {   LispObject fn = basic_elt(env, 2); // getroad
    v_59 = (*qfn2(fn))(fn, v_60, v_59);
    }
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 3); // factorial
    v_59 = (*qfn1(fn))(fn, v_59);
    }
    env = stack[-6];
    v_59 = ncons(v_59);
    env = stack[-6];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_59);
    v_59 = stack[-1];
    if (!car_legal(v_59)) v_59 = cdrerror(v_59); else
    v_59 = cdr(v_59);
    stack[-1] = v_59;
    goto v_21;
v_20:
    v_59 = cons(stack[-5], v_59);
    env = stack[-6];
    {
        LispObject fn = basic_elt(env, 4); // eval
        return (*qfn1(fn))(fn, v_59);
    }
    v_59 = nil;
v_6:
    return onevalue(v_59);
}



// Code for modroots1

static LispObject CC_modroots1(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_157, v_158, v_159;
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
    push(nil, nil);
    stack_popper stack_popper_var(13);
// copy arguments values to proper place
    stack[-1] = v_3;
    stack[-10] = v_2;
// end of prologue
    v_157 = stack[-1];
    if (!car_legal(v_157)) v_157 = cdrerror(v_157); else
    v_157 = cdr(v_157);
    if (v_157 == nil) goto v_7;
    else goto v_8;
v_7:
    v_159 = stack[-10];
    v_157 = stack[-1];
    if (!car_legal(v_157)) v_158 = carerror(v_157); else
    v_158 = car(v_157);
    v_157 = nil;
    {
        LispObject fn = basic_elt(env, 4); // modroots2
        return (*qfn3(fn))(fn, v_159, v_158, v_157);
    }
v_8:
    stack[-7] = nil;
    v_157 = stack[-1];
    if (!car_legal(v_157)) v_157 = carerror(v_157); else
    v_157 = car(v_157);
    stack[-11] = v_157;
    v_157 = stack[-1];
    if (!car_legal(v_157)) v_157 = cdrerror(v_157); else
    v_157 = cdr(v_157);
    stack[-1] = v_157;
    v_158 = stack[-10];
    v_157 = stack[-1];
    {   LispObject fn = basic_elt(env, 0); // modroots1
    v_157 = (*qfn2(fn))(fn, v_158, v_157);
    }
    env = stack[-12];
    stack[0] = v_157;
    v_157 = stack[0];
    if (v_157 == nil) goto v_37;
    else goto v_38;
v_37:
    v_157 = nil;
    goto v_27;
v_38:
    v_157 = stack[-10];
    if (!car_legal(v_157)) v_157 = carerror(v_157); else
    v_157 = car(v_157);
    if (!car_legal(v_157)) v_157 = carerror(v_157); else
    v_157 = car(v_157);
    if (!car_legal(v_157)) v_157 = carerror(v_157); else
    v_157 = car(v_157);
    stack[-6] = v_157;
    v_157 = basic_elt(env, 1); // g
    v_157 = Lgensym1(nil, v_157);
    env = stack[-12];
    stack[-5] = v_157;
    v_157 = stack[-1];
    stack[-1] = v_157;
    v_157 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_158 = v_157;
v_51:
    v_157 = stack[-1];
    if (v_157 == nil) goto v_56;
    else goto v_57;
v_56:
    v_157 = v_158;
    goto v_50;
v_57:
    v_157 = stack[-1];
    if (!car_legal(v_157)) v_157 = carerror(v_157); else
    v_157 = car(v_157);
    v_157 = times2(v_157, v_158);
    env = stack[-12];
    v_158 = v_157;
    v_157 = stack[-1];
    if (!car_legal(v_157)) v_157 = cdrerror(v_157); else
    v_157 = cdr(v_157);
    stack[-1] = v_157;
    goto v_51;
v_50:
    stack[-9] = v_157;
    v_158 = stack[-11];
    v_157 = stack[-9];
    v_157 = times2(v_158, v_157);
    env = stack[-12];
    stack[-8] = v_157;
    v_157 = stack[0];
    stack[-4] = v_157;
v_74:
    v_157 = stack[-4];
    if (v_157 == nil) goto v_78;
    else goto v_79;
v_78:
    goto v_73;
v_79:
    v_157 = stack[-4];
    if (!car_legal(v_157)) v_157 = carerror(v_157); else
    v_157 = car(v_157);
    stack[-3] = v_157;
    stack[-2] = stack[-10];
    stack[-1] = stack[-6];
    stack[0] = basic_elt(env, 2); // plus
    v_159 = basic_elt(env, 3); // times
    v_158 = stack[-5];
    v_157 = stack[-9];
    v_158 = list3(v_159, v_158, v_157);
    env = stack[-12];
    v_157 = stack[-3];
    v_157 = list2(v_158, v_157);
    env = stack[-12];
    v_157 = list2star(stack[-1], stack[0], v_157);
    env = stack[-12];
    v_157 = ncons(v_157);
    env = stack[-12];
    {   LispObject fn = basic_elt(env, 5); // subf
    v_157 = (*qfn2(fn))(fn, stack[-2], v_157);
    }
    env = stack[-12];
    if (!car_legal(v_157)) v_157 = carerror(v_157); else
    v_157 = car(v_157);
    v_158 = v_157;
    v_157 = stack[-11];
    {   LispObject fn = basic_elt(env, 6); // reduce!-mod!-p!*
    v_159 = (*qfn2(fn))(fn, v_158, v_157);
    }
    env = stack[-12];
    v_158 = stack[-11];
    v_157 = lisp_true;
    {   LispObject fn = basic_elt(env, 4); // modroots2
    v_157 = (*qfn3(fn))(fn, v_159, v_158, v_157);
    }
    env = stack[-12];
    stack[-2] = v_157;
v_101:
    v_157 = stack[-2];
    if (v_157 == nil) goto v_110;
    else goto v_111;
v_110:
    goto v_100;
v_111:
    v_157 = stack[-2];
    if (!car_legal(v_157)) v_157 = carerror(v_157); else
    v_157 = car(v_157);
    stack[-1] = v_157;
    v_158 = stack[-1];
    v_157 = stack[-9];
    v_158 = times2(v_158, v_157);
    env = stack[-12];
    v_157 = stack[-3];
    v_158 = plus2(v_158, v_157);
    env = stack[-12];
    v_157 = stack[-8];
    {   LispObject fn = basic_elt(env, 7); // modp
    v_157 = (*qfn2(fn))(fn, v_158, v_157);
    }
    env = stack[-12];
    stack[-1] = v_157;
    stack[0] = stack[-10];
    v_158 = stack[-6];
    v_157 = stack[-1];
    v_157 = cons(v_158, v_157);
    env = stack[-12];
    v_157 = ncons(v_157);
    env = stack[-12];
    {   LispObject fn = basic_elt(env, 5); // subf
    v_157 = (*qfn2(fn))(fn, stack[0], v_157);
    }
    env = stack[-12];
    if (!car_legal(v_157)) v_158 = carerror(v_157); else
    v_158 = car(v_157);
    v_157 = stack[-8];
    {   LispObject fn = basic_elt(env, 6); // reduce!-mod!-p!*
    v_157 = (*qfn2(fn))(fn, v_158, v_157);
    }
    env = stack[-12];
    if (v_157 == nil) goto v_130;
    else goto v_131;
v_130:
    v_158 = stack[-1];
    v_157 = stack[-7];
    v_157 = Lmember(nil, v_158, v_157);
    v_157 = (v_157 == nil ? lisp_true : nil);
    goto v_129;
v_131:
    v_157 = nil;
    goto v_129;
    v_157 = nil;
v_129:
    if (v_157 == nil) goto v_127;
    v_158 = stack[-1];
    v_157 = stack[-7];
    v_157 = cons(v_158, v_157);
    env = stack[-12];
    stack[-7] = v_157;
    goto v_125;
v_127:
v_125:
    v_157 = stack[-2];
    if (!car_legal(v_157)) v_157 = cdrerror(v_157); else
    v_157 = cdr(v_157);
    stack[-2] = v_157;
    goto v_101;
v_100:
    v_157 = stack[-4];
    if (!car_legal(v_157)) v_157 = cdrerror(v_157); else
    v_157 = cdr(v_157);
    stack[-4] = v_157;
    goto v_74;
v_73:
    v_157 = stack[-7];
v_27:
    goto v_6;
    v_157 = nil;
v_6:
    return onevalue(v_157);
}



// Code for mkg1

static LispObject CC_mkg1(LispObject env,
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
    v_25 = v_3;
    v_26 = v_2;
// end of prologue
    v_27 = v_25;
    v_24 = basic_elt(env, 1); // nospur
    v_24 = Lflagp(nil, v_27, v_24);
    env = stack[0];
    if (v_24 == nil) goto v_7;
    else goto v_8;
v_7:
    v_24 = basic_elt(env, 2); // g
    v_24 = list2star(v_24, v_25, v_26);
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 3); // mksf
        return (*qfn1(fn))(fn, v_24);
    }
v_8:
    v_24 = basic_elt(env, 2); // g
    v_24 = list2star(v_24, v_25, v_26);
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 3); // mksf
        return (*qfn1(fn))(fn, v_24);
    }
    v_24 = nil;
    return onevalue(v_24);
}



// Code for gd_newtype

static LispObject CC_gd_newtype(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_39, v_40, v_41, v_42;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_41 = v_3;
    v_42 = v_2;
// end of prologue
    v_40 = v_42;
    v_39 = v_41;
    if (v_40 == v_39) goto v_7;
    else goto v_8;
v_7:
    v_39 = v_42;
    goto v_6;
v_8:
    v_40 = v_42;
    v_39 = basic_elt(env, 1); // gec
    if (v_40 == v_39) goto v_12;
    else goto v_13;
v_12:
    v_40 = v_41;
    v_39 = basic_elt(env, 2); // geg
    if (v_40 == v_39) goto v_18;
    else goto v_19;
v_18:
    v_39 = basic_elt(env, 1); // gec
    goto v_17;
v_19:
    v_39 = nil;
    goto v_17;
    v_39 = nil;
v_17:
    goto v_6;
v_13:
    v_40 = v_42;
    v_39 = basic_elt(env, 2); // geg
    if (v_40 == v_39) goto v_26;
    else goto v_27;
v_26:
    v_39 = v_41;
    goto v_6;
v_27:
    v_40 = v_41;
    v_39 = basic_elt(env, 1); // gec
    if (v_40 == v_39) goto v_31;
    else goto v_32;
v_31:
    v_39 = nil;
    goto v_6;
v_32:
    v_39 = basic_elt(env, 3); // ger
    goto v_6;
    v_39 = nil;
v_6:
    return onevalue(v_39);
}



// Code for dfmax

static LispObject CC_dfmax(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    v_18 = v_4;
    stack[0] = v_3;
    stack[-1] = v_2;
// end of prologue
    v_20 = stack[-1];
    v_19 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // dfrel
    v_18 = (*qfn3(fn))(fn, v_20, v_19, v_18);
    }
    if (v_18 == nil) goto v_9;
    v_18 = stack[0];
    goto v_7;
v_9:
    v_18 = stack[-1];
    goto v_7;
    v_18 = nil;
v_7:
    return onevalue(v_18);
}



// Code for uterm

static LispObject CC_uterm(LispObject env,
                         LispObject v_3, LispObject v_4)
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
    v_59 = v_4;
    stack[-1] = v_3;
// end of prologue
// Binding rhs!*
// FLUIDBIND: reloadenv=3 litvec-offset=1 saveloc=2
{   bind_fluid_stack bind_fluid_var(-3, 1, -2);
    setvalue(basic_elt(env, 1), v_59); // rhs!*
    v_59 = qvalue(basic_elt(env, 1)); // rhs!*
    if (v_59 == nil) goto v_13;
    else goto v_14;
v_13:
    v_59 = nil;
    goto v_12;
v_14:
    v_60 = stack[-1];
    v_59 = qvalue(basic_elt(env, 1)); // rhs!*
    if (!car_legal(v_59)) v_59 = carerror(v_59); else
    v_59 = car(v_59);
    if (!car_legal(v_59)) v_59 = carerror(v_59); else
    v_59 = car(v_59);
    {   LispObject fn = basic_elt(env, 2); // addinds
    v_59 = (*qfn2(fn))(fn, v_60, v_59);
    }
    env = stack[-3];
    stack[0] = v_59;
    v_59 = qvalue(basic_elt(env, 1)); // rhs!*
    if (!car_legal(v_59)) v_59 = carerror(v_59); else
    v_59 = car(v_59);
    if (!car_legal(v_59)) v_59 = cdrerror(v_59); else
    v_59 = cdr(v_59);
    if (!car_legal(v_59)) v_60 = carerror(v_59); else
    v_60 = car(v_59);
    v_59 = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // evaluatecoeffts
    v_59 = (*qfn2(fn))(fn, v_60, v_59);
    }
    env = stack[-3];
    v_60 = v_59;
    if (v_60 == nil) goto v_36;
    else goto v_37;
v_36:
    v_60 = stack[-1];
    v_59 = qvalue(basic_elt(env, 1)); // rhs!*
    if (!car_legal(v_59)) v_59 = cdrerror(v_59); else
    v_59 = cdr(v_59);
    {   LispObject fn = basic_elt(env, 0); // uterm
    v_59 = (*qfn2(fn))(fn, v_60, v_59);
    }
    goto v_22;
v_37:
    v_60 = v_59;
    v_59 = qvalue(basic_elt(env, 1)); // rhs!*
    if (!car_legal(v_59)) v_59 = carerror(v_59); else
    v_59 = car(v_59);
    if (!car_legal(v_59)) v_59 = cdrerror(v_59); else
    v_59 = cdr(v_59);
    if (!car_legal(v_59)) v_59 = cdrerror(v_59); else
    v_59 = cdr(v_59);
    v_59 = cons(v_60, v_59);
    env = stack[-3];
    v_60 = stack[0];
    v_59 = cons(v_60, v_59);
    env = stack[-3];
    stack[0] = ncons(v_59);
    env = stack[-3];
    v_60 = stack[-1];
    v_59 = qvalue(basic_elt(env, 1)); // rhs!*
    if (!car_legal(v_59)) v_59 = cdrerror(v_59); else
    v_59 = cdr(v_59);
    {   LispObject fn = basic_elt(env, 0); // uterm
    v_59 = (*qfn2(fn))(fn, v_60, v_59);
    }
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 4); // plusdf
    v_59 = (*qfn2(fn))(fn, stack[0], v_59);
    }
v_22:
    goto v_12;
    v_59 = nil;
v_12:
    ;}  // end of a binding scope
    return onevalue(v_59);
}



// Code for talp_try3

static LispObject CC_talp_try3(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_228, v_229, v_230;
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
    push(nil, nil, nil);
    stack_popper stack_popper_var(14);
// copy arguments values to proper place
    stack[-11] = v_3;
    stack[0] = v_2;
// end of prologue
    stack[-10] = nil;
    stack[-9] = nil;
    stack[-8] = nil;
    stack[-7] = nil;
    v_229 = stack[0];
    v_228 = basic_elt(env, 1); // true
    if (v_229 == v_228) goto v_25;
    else goto v_26;
v_25:
    v_228 = lisp_true;
    goto v_24;
v_26:
    v_229 = stack[0];
    v_228 = basic_elt(env, 2); // false
    v_228 = (v_229 == v_228 ? lisp_true : nil);
    goto v_24;
    v_228 = nil;
v_24:
    if (v_228 == nil) goto v_22;
    v_228 = lisp_true;
    goto v_20;
v_22:
    v_228 = stack[0];
    {   LispObject fn = basic_elt(env, 5); // talp_atfp
    v_228 = (*qfn1(fn))(fn, v_228);
    }
    env = stack[-13];
    goto v_20;
    v_228 = nil;
v_20:
    if (v_228 == nil) goto v_18;
    v_228 = stack[0];
    goto v_14;
v_18:
    v_228 = stack[0];
    stack[-12] = v_228;
    v_228 = stack[-12];
    if (!consp(v_228)) goto v_48;
    else goto v_49;
v_48:
    v_228 = stack[-12];
    v_229 = v_228;
    goto v_47;
v_49:
    v_228 = stack[-12];
    if (!car_legal(v_228)) v_228 = carerror(v_228); else
    v_228 = car(v_228);
    v_229 = v_228;
    goto v_47;
    v_229 = nil;
v_47:
    v_228 = basic_elt(env, 3); // and
    if (v_229 == v_228) goto v_44;
    else goto v_45;
v_44:
    v_228 = stack[-12];
    {   LispObject fn = basic_elt(env, 6); // talp_argl
    v_228 = (*qfn1(fn))(fn, v_228);
    }
    env = stack[-13];
    stack[-4] = v_228;
v_60:
    v_228 = stack[-4];
    if (v_228 == nil) goto v_65;
    else goto v_66;
v_65:
    goto v_59;
v_66:
    v_228 = stack[-4];
    if (!car_legal(v_228)) v_228 = carerror(v_228); else
    v_228 = car(v_228);
    stack[-3] = v_228;
    v_228 = stack[-3];
    if (!consp(v_228)) goto v_79;
    v_228 = stack[-3];
    {   LispObject fn = basic_elt(env, 7); // talp_op
    v_229 = (*qfn1(fn))(fn, v_228);
    }
    env = stack[-13];
    v_228 = basic_elt(env, 4); // equal
    v_228 = (v_229 == v_228 ? lisp_true : nil);
    goto v_77;
v_79:
    v_228 = nil;
    goto v_77;
    v_228 = nil;
v_77:
    if (v_228 == nil) goto v_75;
    v_228 = stack[-3];
    {   LispObject fn = basic_elt(env, 8); // talp_arg2l
    v_228 = (*qfn1(fn))(fn, v_228);
    }
    env = stack[-13];
    stack[-6] = v_228;
    v_228 = stack[-3];
    {   LispObject fn = basic_elt(env, 9); // talp_arg2r
    v_228 = (*qfn1(fn))(fn, v_228);
    }
    env = stack[-13];
    stack[-5] = v_228;
    v_228 = stack[-11];
    stack[-2] = v_228;
v_95:
    v_228 = stack[-2];
    if (v_228 == nil) goto v_99;
    else goto v_100;
v_99:
    goto v_94;
v_100:
    v_228 = stack[-2];
    if (!car_legal(v_228)) v_228 = carerror(v_228); else
    v_228 = car(v_228);
    stack[-1] = v_228;
    v_228 = stack[-6];
    if (!consp(v_228)) goto v_113;
    else goto v_114;
v_113:
    v_229 = stack[-5];
    v_228 = stack[-1];
    {   LispObject fn = basic_elt(env, 10); // talp_contains
    v_228 = (*qfn2(fn))(fn, v_229, v_228);
    }
    env = stack[-13];
    goto v_112;
v_114:
    v_228 = nil;
    goto v_112;
    v_228 = nil;
v_112:
    if (v_228 == nil) goto v_110;
    else goto v_108;
v_110:
    v_228 = stack[-6];
    {   LispObject fn = basic_elt(env, 11); // talp_td
    stack[0] = (*qfn1(fn))(fn, v_228);
    }
    env = stack[-13];
    v_228 = stack[-5];
    {   LispObject fn = basic_elt(env, 11); // talp_td
    v_228 = (*qfn1(fn))(fn, v_228);
    }
    env = stack[-13];
    v_228 = static_cast<LispObject>(lessp2(stack[0], v_228));
    v_228 = v_228 ? lisp_true : nil;
    env = stack[-13];
    if (v_228 == nil) goto v_122;
    else goto v_108;
v_122:
    goto v_109;
v_108:
    v_228 = lisp_true;
    stack[-7] = v_228;
    goto v_107;
v_109:
v_107:
    v_228 = stack[-5];
    if (!consp(v_228)) goto v_136;
    else goto v_137;
v_136:
    v_229 = stack[-6];
    v_228 = stack[-1];
    {   LispObject fn = basic_elt(env, 10); // talp_contains
    v_228 = (*qfn2(fn))(fn, v_229, v_228);
    }
    env = stack[-13];
    goto v_135;
v_137:
    v_228 = nil;
    goto v_135;
    v_228 = nil;
v_135:
    if (v_228 == nil) goto v_133;
    else goto v_131;
v_133:
    v_228 = stack[-5];
    {   LispObject fn = basic_elt(env, 11); // talp_td
    stack[0] = (*qfn1(fn))(fn, v_228);
    }
    env = stack[-13];
    v_228 = stack[-6];
    {   LispObject fn = basic_elt(env, 11); // talp_td
    v_228 = (*qfn1(fn))(fn, v_228);
    }
    env = stack[-13];
    v_228 = static_cast<LispObject>(lessp2(stack[0], v_228));
    v_228 = v_228 ? lisp_true : nil;
    env = stack[-13];
    if (v_228 == nil) goto v_145;
    else goto v_131;
v_145:
    goto v_132;
v_131:
    v_228 = lisp_true;
    stack[-8] = v_228;
    goto v_130;
v_132:
v_130:
    v_228 = stack[-2];
    if (!car_legal(v_228)) v_228 = cdrerror(v_228); else
    v_228 = cdr(v_228);
    stack[-2] = v_228;
    goto v_95;
v_94:
    v_228 = stack[-8];
    if (v_228 == nil) goto v_157;
    v_229 = stack[-3];
    v_228 = stack[-9];
    v_228 = cons(v_229, v_228);
    env = stack[-13];
    stack[-9] = v_228;
    v_228 = stack[-3];
    {   LispObject fn = basic_elt(env, 8); // talp_arg2l
    stack[0] = (*qfn1(fn))(fn, v_228);
    }
    env = stack[-13];
    v_228 = stack[-3];
    {   LispObject fn = basic_elt(env, 9); // talp_arg2r
    v_229 = (*qfn1(fn))(fn, v_228);
    }
    env = stack[-13];
    v_228 = stack[-10];
    v_228 = acons(stack[0], v_229, v_228);
    env = stack[-13];
    stack[-10] = v_228;
    goto v_155;
v_157:
v_155:
    v_228 = stack[-7];
    if (v_228 == nil) goto v_171;
    v_229 = stack[-3];
    v_228 = stack[-9];
    v_228 = cons(v_229, v_228);
    env = stack[-13];
    stack[-9] = v_228;
    v_228 = stack[-3];
    {   LispObject fn = basic_elt(env, 9); // talp_arg2r
    stack[0] = (*qfn1(fn))(fn, v_228);
    }
    env = stack[-13];
    v_228 = stack[-3];
    {   LispObject fn = basic_elt(env, 8); // talp_arg2l
    v_229 = (*qfn1(fn))(fn, v_228);
    }
    env = stack[-13];
    v_228 = stack[-10];
    v_228 = acons(stack[0], v_229, v_228);
    env = stack[-13];
    stack[-10] = v_228;
    goto v_169;
v_171:
v_169:
    v_228 = nil;
    stack[-8] = v_228;
    v_228 = nil;
    stack[-7] = v_228;
    goto v_73;
v_75:
v_73:
    v_228 = stack[-4];
    if (!car_legal(v_228)) v_228 = cdrerror(v_228); else
    v_228 = cdr(v_228);
    stack[-4] = v_228;
    goto v_60;
v_59:
    goto v_43;
v_45:
v_43:
    v_228 = stack[-10];
    if (v_228 == nil) goto v_190;
    v_230 = stack[-10];
    v_229 = stack[-9];
    v_228 = stack[-11];
    {   LispObject fn = basic_elt(env, 12); // talp_extlftrs
    v_228 = (*qfn3(fn))(fn, v_230, v_229, v_228);
    }
    env = stack[-13];
    v_229 = v_228;
    v_228 = v_229;
    if (!car_legal(v_228)) v_228 = carerror(v_228); else
    v_228 = car(v_228);
    stack[-10] = v_228;
    v_228 = v_229;
    if (!car_legal(v_228)) v_228 = cdrerror(v_228); else
    v_228 = cdr(v_228);
    stack[-9] = v_228;
    goto v_188;
v_190:
v_188:
    v_228 = stack[-10];
    if (v_228 == nil) goto v_204;
    v_230 = stack[-12];
    v_229 = stack[-10];
    v_228 = stack[-9];
    {   LispObject fn = basic_elt(env, 13); // talp_chsbstres
    v_228 = (*qfn3(fn))(fn, v_230, v_229, v_228);
    }
    env = stack[-13];
    v_229 = v_228;
    v_228 = v_229;
    if (!car_legal(v_228)) v_228 = cdrerror(v_228); else
    v_228 = cdr(v_228);
    if (v_228 == nil) goto v_214;
    v_228 = v_229;
    if (!car_legal(v_228)) v_228 = carerror(v_228); else
    v_228 = car(v_228);
    {
        LispObject fn = basic_elt(env, 14); // talp_try1
        return (*qfn1(fn))(fn, v_228);
    }
v_214:
    v_228 = v_229;
    if (!car_legal(v_228)) v_228 = carerror(v_228); else
    v_228 = car(v_228);
    goto v_212;
    v_228 = nil;
v_212:
    goto v_202;
v_204:
    v_228 = stack[-12];
    {
        LispObject fn = basic_elt(env, 15); // talp_rnf
        return (*qfn1(fn))(fn, v_228);
    }
    v_228 = nil;
v_202:
v_14:
    return onevalue(v_228);
}



// Code for simpsqrt3

static LispObject CC_simpsqrt3(LispObject env,
                         LispObject v_2)
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
    v_48 = stack[0];
    v_47 = qvalue(basic_elt(env, 1)); // listofallsqrts
    v_47 = Lassoc(nil, v_48, v_47);
    stack[-1] = v_47;
    v_47 = stack[-1];
    if (v_47 == nil) goto v_14;
    v_47 = stack[-1];
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    goto v_6;
v_14:
    v_48 = qvalue(basic_elt(env, 2)); // listofnewsqrts
    v_47 = qvalue(basic_elt(env, 3)); // knowntobeindep
    v_47 = Latsoc(nil, v_48, v_47);
    stack[-1] = v_47;
    v_47 = stack[-1];
    if (v_47 == nil) goto v_23;
    else goto v_24;
v_23:
    goto v_7;
v_24:
    v_48 = stack[0];
    v_47 = stack[-1];
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    v_47 = Lassoc(nil, v_48, v_47);
    stack[-1] = v_47;
    v_47 = stack[-1];
    if (v_47 == nil) goto v_33;
    v_48 = stack[-1];
    v_47 = qvalue(basic_elt(env, 1)); // listofallsqrts
    v_47 = cons(v_48, v_47);
    env = stack[-2];
    setvalue(basic_elt(env, 1), v_47); // listofallsqrts
    v_47 = stack[-1];
    if (!car_legal(v_47)) v_47 = cdrerror(v_47); else
    v_47 = cdr(v_47);
    goto v_6;
v_33:
v_7:
    v_47 = stack[0];
    {   LispObject fn = basic_elt(env, 4); // actualsimpsqrt
    v_47 = (*qfn1(fn))(fn, v_47);
    }
    env = stack[-2];
    stack[-1] = v_47;
    v_49 = stack[0];
    v_48 = stack[-1];
    v_47 = qvalue(basic_elt(env, 1)); // listofallsqrts
    v_47 = acons(v_49, v_48, v_47);
    env = stack[-2];
    setvalue(basic_elt(env, 1), v_47); // listofallsqrts
    v_47 = stack[-1];
v_6:
    return onevalue(v_47);
}



// Code for ps!:value

static LispObject CC_psTvalue(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_43, v_44, v_45;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_45 = v_2;
// end of prologue
    v_43 = v_45;
    if (!consp(v_43)) goto v_10;
    else goto v_11;
v_10:
    v_43 = lisp_true;
    goto v_9;
v_11:
    v_43 = v_45;
    if (!car_legal(v_43)) v_44 = carerror(v_43); else
    v_44 = car(v_43);
    v_43 = basic_elt(env, 1); // !:ps!:
    if (v_44 == v_43) goto v_19;
    v_43 = v_45;
    if (!car_legal(v_43)) v_43 = carerror(v_43); else
    v_43 = car(v_43);
    if (!symbolp(v_43)) v_43 = nil;
    else { v_43 = qfastgets(v_43);
           if (v_43 != nil) { v_43 = elt(v_43, 8); // dname
#ifdef RECORD_GET
             if (v_43 != SPID_NOPROP)
                record_get(elt(fastget_names, 8), 1);
             else record_get(elt(fastget_names, 8), 0),
                v_43 = nil; }
           else record_get(elt(fastget_names, 8), 0); }
#else
             if (v_43 == SPID_NOPROP) v_43 = nil; }}
#endif
    goto v_17;
v_19:
    v_43 = nil;
    goto v_17;
    v_43 = nil;
v_17:
    goto v_9;
    v_43 = nil;
v_9:
    if (v_43 == nil) goto v_7;
    v_43 = v_45;
    if (v_43 == nil) goto v_32;
    v_43 = v_45;
    goto v_30;
v_32:
    v_43 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_30;
    v_43 = nil;
v_30:
    goto v_5;
v_7:
    v_44 = v_45;
    v_43 = static_cast<LispObject>(64)+TAG_FIXNUM; // 4
    {
        LispObject fn = basic_elt(env, 2); // ps!:getv
        return (*qfn2(fn))(fn, v_44, v_43);
    }
    v_43 = nil;
v_5:
    return onevalue(v_43);
}



// Code for setprev

static LispObject CC_setprev(LispObject env,
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
    real_push(nil, nil, nil, nil, nil);
    stack_popper stack_popper_var(6);
// copy arguments values to proper place
    stack[0] = v_3;
    stack[-3] = v_2;
// end of prologue
v_7:
    stack[-1] = qvalue(basic_elt(env, 1)); // codmat
    v_45 = qvalue(basic_elt(env, 2)); // maxvar
    v_44 = stack[-3];
    v_44 = plus2(v_45, v_44);
    env = stack[-5];
    v_45 = Lgetv(nil, stack[-1], v_44);
    env = stack[-5];
    v_44 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_44 = Lgetv(nil, v_45, v_44);
    env = stack[-5];
    if (is_number(v_44)) goto v_10;
    else goto v_11;
v_10:
    stack[-1] = qvalue(basic_elt(env, 1)); // codmat
    v_45 = qvalue(basic_elt(env, 2)); // maxvar
    v_44 = stack[-3];
    v_44 = plus2(v_45, v_44);
    env = stack[-5];
    v_45 = Lgetv(nil, stack[-1], v_44);
    env = stack[-5];
    v_44 = static_cast<LispObject>(48)+TAG_FIXNUM; // 3
    v_44 = Lgetv(nil, v_45, v_44);
    env = stack[-5];
    stack[-3] = v_44;
    goto v_7;
v_11:
    stack[-1] = qvalue(basic_elt(env, 1)); // codmat
    v_45 = qvalue(basic_elt(env, 2)); // maxvar
    v_44 = stack[-3];
    v_44 = plus2(v_45, v_44);
    env = stack[-5];
    stack[-4] = Lgetv(nil, stack[-1], v_44);
    env = stack[-5];
    stack[-2] = static_cast<LispObject>(128)+TAG_FIXNUM; // 8
    stack[-1] = stack[0];
    stack[0] = qvalue(basic_elt(env, 1)); // codmat
    v_45 = qvalue(basic_elt(env, 2)); // maxvar
    v_44 = stack[-3];
    v_44 = plus2(v_45, v_44);
    env = stack[-5];
    v_45 = Lgetv(nil, stack[0], v_44);
    env = stack[-5];
    v_44 = static_cast<LispObject>(128)+TAG_FIXNUM; // 8
    v_44 = Lgetv(nil, v_45, v_44);
    env = stack[-5];
    v_44 = cons(stack[-1], v_44);
    {
        LispObject v_51 = stack[-4];
        LispObject v_52 = stack[-2];
        return Lputv(nil, v_51, v_52, v_44);
    }
    v_44 = nil;
    return onevalue(v_44);
}



// Code for gvarlis

static LispObject CC_gvarlis(LispObject env,
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
    v_9 = nil;
    {   LispObject fn = basic_elt(env, 2); // gvarlis1
    v_10 = (*qfn2(fn))(fn, v_10, v_9);
    }
    env = stack[0];
    v_9 = basic_elt(env, 1); // ordop
    {
        LispObject fn = basic_elt(env, 3); // sort
        return (*qfn2(fn))(fn, v_10, v_9);
    }
}



// Code for xreduce1

static LispObject CC_xreduce1(LispObject env,
                         LispObject v_2, LispObject v_3,
                         LispObject v_4)
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
    v_30 = stack[-2];
    v_29 = stack[-1];
    v_28 = stack[0];
    {   LispObject fn = basic_elt(env, 1); // weak_xreduce1
    v_28 = (*qfn3(fn))(fn, v_30, v_29, v_28);
    }
    env = stack[-4];
    stack[-2] = v_28;
    if (v_28 == nil) goto v_13;
    v_28 = stack[-2];
    if (!car_legal(v_28)) v_29 = carerror(v_28); else
    v_29 = car(v_28);
    v_28 = stack[-3];
    v_28 = cons(v_29, v_28);
    env = stack[-4];
    stack[-3] = v_28;
    v_28 = stack[-2];
    if (!car_legal(v_28)) v_28 = cdrerror(v_28); else
    v_28 = cdr(v_28);
    stack[-2] = v_28;
    goto v_9;
v_13:
    v_28 = stack[-3];
    {
        LispObject fn = basic_elt(env, 2); // nreverse
        return (*qfn1(fn))(fn, v_28);
    }
    v_28 = nil;
    return onevalue(v_28);
}



// Code for calc_map_tar

static LispObject CC_calc_map_tar(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_61, v_62, v_63;
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
    stack[-3] = v_3;
    v_62 = v_2;
// end of prologue
    v_61 = v_62;
    if (!car_legal(v_61)) v_61 = carerror(v_61); else
    v_61 = car(v_61);
    stack[-4] = v_61;
    v_61 = v_62;
    if (!car_legal(v_61)) v_61 = cdrerror(v_61); else
    v_61 = cdr(v_61);
    if (!car_legal(v_61)) v_61 = carerror(v_61); else
    v_61 = car(v_61);
    stack[-2] = v_61;
    v_61 = v_62;
    if (!car_legal(v_61)) v_61 = cdrerror(v_61); else
    v_61 = cdr(v_61);
    if (!car_legal(v_61)) v_61 = cdrerror(v_61); else
    v_61 = cdr(v_61);
    if (!car_legal(v_61)) v_61 = carerror(v_61); else
    v_61 = car(v_61);
    stack[0] = v_61;
    v_61 = v_62;
    if (!car_legal(v_61)) v_61 = cdrerror(v_61); else
    v_61 = cdr(v_61);
    if (!car_legal(v_61)) v_61 = cdrerror(v_61); else
    v_61 = cdr(v_61);
    if (!car_legal(v_61)) v_61 = cdrerror(v_61); else
    v_61 = cdr(v_61);
    if (!car_legal(v_61)) v_61 = carerror(v_61); else
    v_61 = car(v_61);
    stack[-1] = v_61;
    v_61 = v_62;
    if (!car_legal(v_61)) v_61 = cdrerror(v_61); else
    v_61 = cdr(v_61);
    if (!car_legal(v_61)) v_61 = cdrerror(v_61); else
    v_61 = cdr(v_61);
    if (!car_legal(v_61)) v_61 = cdrerror(v_61); else
    v_61 = cdr(v_61);
    if (!car_legal(v_61)) v_61 = cdrerror(v_61); else
    v_61 = cdr(v_61);
    if (!car_legal(v_61)) v_61 = carerror(v_61); else
    v_61 = car(v_61);
    v_62 = v_61;
    v_61 = stack[-3];
    {   LispObject fn = basic_elt(env, 1); // ev!-poles
    v_61 = (*qfn2(fn))(fn, v_62, v_61);
    }
    env = stack[-5];
    if (v_61 == nil) goto v_36;
    v_61 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_12;
v_36:
    v_61 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // constimes
    stack[-1] = (*qfn1(fn))(fn, v_61);
    }
    env = stack[-5];
    v_62 = stack[0];
    v_61 = stack[-3];
    {   LispObject fn = basic_elt(env, 3); // ev!-tades
    v_61 = (*qfn2(fn))(fn, v_62, v_61);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 2); // constimes
    stack[0] = (*qfn1(fn))(fn, v_61);
    }
    env = stack[-5];
    v_61 = stack[-2];
    if (v_61 == nil) goto v_51;
    else goto v_52;
v_51:
    v_61 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    goto v_50;
v_52:
    v_63 = stack[-4];
    v_62 = stack[-2];
    v_61 = stack[-3];
    {   LispObject fn = basic_elt(env, 4); // strand!-alg!-top
    v_61 = (*qfn3(fn))(fn, v_63, v_62, v_61);
    }
    env = stack[-5];
    goto v_50;
    v_61 = nil;
v_50:
    v_61 = list3(stack[-1], stack[0], v_61);
    env = stack[-5];
    {
        LispObject fn = basic_elt(env, 2); // constimes
        return (*qfn1(fn))(fn, v_61);
    }
v_12:
    return onevalue(v_61);
}



// Code for !*ex2sf

static LispObject CC_Hex2sf(LispObject env,
                         LispObject v_2)
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
v_7:
    v_43 = stack[-1];
    if (v_43 == nil) goto v_10;
    else goto v_11;
v_10:
    v_43 = stack[-2];
    {
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn1(fn))(fn, v_43);
    }
v_11:
    v_43 = stack[-1];
    if (!car_legal(v_43)) v_43 = carerror(v_43); else
    v_43 = car(v_43);
    if (!car_legal(v_43)) v_43 = carerror(v_43); else
    v_43 = car(v_43);
    if (!car_legal(v_43)) v_43 = carerror(v_43); else
    v_43 = car(v_43);
    if (v_43 == nil) goto v_15;
    else goto v_16;
v_15:
    stack[0] = stack[-2];
    v_43 = stack[-1];
    if (!car_legal(v_43)) v_43 = carerror(v_43); else
    v_43 = car(v_43);
    if (!car_legal(v_43)) v_43 = cdrerror(v_43); else
    v_43 = cdr(v_43);
    {   LispObject fn = basic_elt(env, 2); // subs2chk
    v_43 = (*qfn1(fn))(fn, v_43);
    }
    env = stack[-3];
    {
        LispObject v_48 = stack[0];
        LispObject fn = basic_elt(env, 1); // nreverse
        return (*qfn2(fn))(fn, v_48, v_43);
    }
v_16:
    v_43 = stack[-1];
    if (!car_legal(v_43)) v_43 = carerror(v_43); else
    v_43 = car(v_43);
    if (!car_legal(v_43)) v_43 = carerror(v_43); else
    v_43 = car(v_43);
    if (!car_legal(v_43)) v_44 = carerror(v_43); else
    v_44 = car(v_43);
    v_43 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 3); // to
    stack[0] = (*qfn2(fn))(fn, v_44, v_43);
    }
    env = stack[-3];
    v_43 = stack[-1];
    if (!car_legal(v_43)) v_43 = carerror(v_43); else
    v_43 = car(v_43);
    if (!car_legal(v_43)) v_43 = cdrerror(v_43); else
    v_43 = cdr(v_43);
    {   LispObject fn = basic_elt(env, 2); // subs2chk
    v_44 = (*qfn1(fn))(fn, v_43);
    }
    env = stack[-3];
    v_43 = stack[-2];
    v_43 = acons(stack[0], v_44, v_43);
    env = stack[-3];
    stack[-2] = v_43;
    v_43 = stack[-1];
    if (!car_legal(v_43)) v_43 = cdrerror(v_43); else
    v_43 = cdr(v_43);
    stack[-1] = v_43;
    goto v_7;
    v_43 = nil;
    return onevalue(v_43);
}



// Code for red_extract

static LispObject CC_red_extract(LispObject env,
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    stack[-2] = v_2;
// end of prologue
    stack[0] = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_20 = stack[-2];
    {   LispObject fn = basic_elt(env, 1); // bas_rep
    v_20 = (*qfn1(fn))(fn, v_20);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 2); // dp_comp
    v_20 = (*qfn2(fn))(fn, stack[0], v_20);
    }
    env = stack[-4];
    stack[-3] = v_20;
    v_20 = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // bas_nr
    stack[-1] = (*qfn1(fn))(fn, v_20);
    }
    env = stack[-4];
    v_20 = stack[-2];
    {   LispObject fn = basic_elt(env, 4); // bas_dpoly
    stack[0] = (*qfn1(fn))(fn, v_20);
    }
    env = stack[-4];
    v_20 = stack[-2];
    {   LispObject fn = basic_elt(env, 1); // bas_rep
    v_21 = (*qfn1(fn))(fn, v_20);
    }
    env = stack[-4];
    v_20 = stack[-3];
    {   LispObject fn = basic_elt(env, 5); // dp_diff
    v_20 = (*qfn2(fn))(fn, v_21, v_20);
    }
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 6); // bas_make1
    v_21 = (*qfn3(fn))(fn, stack[-1], stack[0], v_20);
    }
    v_20 = stack[-3];
    return cons(v_21, v_20);
}



// Code for !*hfac

static LispObject CC_Hhfac(LispObject env,
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
    v_36 = stack[0];
    v_36 = integerp(v_36);
    if (v_36 == nil) goto v_10;
    else goto v_11;
v_10:
    v_36 = lisp_true;
    goto v_9;
v_11:
    v_37 = stack[0];
    v_36 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_36 = static_cast<LispObject>(lessp2(v_37, v_36));
    v_36 = v_36 ? lisp_true : nil;
    env = stack[-1];
    if (v_36 == nil) goto v_19;
    else goto v_18;
v_19:
    v_37 = stack[0];
    v_36 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    v_36 = static_cast<LispObject>(greaterp2(v_37, v_36));
    v_36 = v_36 ? lisp_true : nil;
    env = stack[-1];
v_18:
    goto v_9;
    v_36 = nil;
v_9:
    if (v_36 == nil) goto v_7;
    v_38 = basic_elt(env, 1); // avector
    v_37 = static_cast<LispObject>(208)+TAG_FIXNUM; // 13
    v_36 = basic_elt(env, 2); // "Invalid index"
    {
        LispObject fn = basic_elt(env, 4); // rerror
        return (*qfn3(fn))(fn, v_38, v_37, v_36);
    }
v_7:
    v_36 = basic_elt(env, 3); // hfactors
    {   LispObject fn = basic_elt(env, 5); // getavalue
    v_37 = (*qfn1(fn))(fn, v_36);
    }
    v_36 = stack[0];
        return Lgetv(nil, v_37, v_36);
    v_36 = nil;
    return onevalue(v_36);
}



// Code for sep_tens_from_other

static LispObject CC_sep_tens_from_other(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_118, v_119;
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
    stack[-4] = nil;
    v_118 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 2); // !*n2f
    v_118 = (*qfn1(fn))(fn, v_118);
    }
    env = stack[-5];
    stack[-2] = v_118;
v_10:
    v_118 = stack[-3];
    if (is_number(v_118)) goto v_15;
    else goto v_16;
v_15:
    v_118 = stack[-4];
    stack[0] = Lnreverse(nil, v_118);
    env = stack[-5];
    stack[-1] = stack[-2];
    v_118 = stack[-3];
    {   LispObject fn = basic_elt(env, 2); // !*n2f
    v_118 = (*qfn1(fn))(fn, v_118);
    }
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 3); // multf
    v_118 = (*qfn2(fn))(fn, stack[-1], v_118);
    }
    {
        LispObject v_125 = stack[0];
        return list2(v_125, v_118);
    }
v_16:
    v_118 = stack[-3];
    if (!car_legal(v_118)) v_118 = carerror(v_118); else
    v_118 = car(v_118);
    if (!car_legal(v_118)) v_118 = carerror(v_118); else
    v_118 = car(v_118);
    if (!car_legal(v_118)) v_118 = carerror(v_118); else
    v_118 = car(v_118);
    if (!consp(v_118)) goto v_25;
    else goto v_26;
v_25:
    stack[0] = stack[-2];
    v_118 = stack[-3];
    if (!car_legal(v_118)) v_118 = carerror(v_118); else
    v_118 = car(v_118);
    if (!car_legal(v_118)) v_119 = carerror(v_118); else
    v_119 = car(v_118);
    v_118 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_118 = cons(v_119, v_118);
    env = stack[-5];
    v_118 = ncons(v_118);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 3); // multf
    v_118 = (*qfn2(fn))(fn, stack[0], v_118);
    }
    env = stack[-5];
    stack[-2] = v_118;
    goto v_14;
v_26:
    v_118 = stack[-3];
    if (!car_legal(v_118)) v_118 = carerror(v_118); else
    v_118 = car(v_118);
    if (!car_legal(v_118)) v_118 = carerror(v_118); else
    v_118 = car(v_118);
    if (!car_legal(v_118)) v_118 = carerror(v_118); else
    v_118 = car(v_118);
    if (!car_legal(v_118)) v_119 = carerror(v_118); else
    v_119 = car(v_118);
    v_118 = basic_elt(env, 1); // translate1
    v_118 = get(v_119, v_118);
    env = stack[-5];
    stack[-1] = v_118;
    if (v_118 == nil) goto v_44;
    v_118 = stack[-3];
    {   LispObject fn = basic_elt(env, 4); // fullcopy
    v_118 = (*qfn1(fn))(fn, v_118);
    }
    env = stack[-5];
    stack[-3] = v_118;
    v_118 = stack[-3];
    if (!car_legal(v_118)) v_118 = carerror(v_118); else
    v_118 = car(v_118);
    if (!car_legal(v_118)) stack[0] = carerror(v_118); else
    stack[0] = car(v_118);
    v_119 = stack[-1];
    v_118 = stack[-3];
    if (!car_legal(v_118)) v_118 = carerror(v_118); else
    v_118 = car(v_118);
    if (!car_legal(v_118)) v_118 = carerror(v_118); else
    v_118 = car(v_118);
    if (!car_legal(v_118)) v_118 = carerror(v_118); else
    v_118 = car(v_118);
    v_118 = Lapply1(nil, v_119, v_118);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 5); // setcar
    v_118 = (*qfn2(fn))(fn, stack[0], v_118);
    }
    env = stack[-5];
    goto v_42;
v_44:
v_42:
    v_118 = stack[-3];
    if (!car_legal(v_118)) v_118 = carerror(v_118); else
    v_118 = car(v_118);
    if (!car_legal(v_118)) v_118 = carerror(v_118); else
    v_118 = car(v_118);
    if (!car_legal(v_118)) v_118 = carerror(v_118); else
    v_118 = car(v_118);
    stack[0] = v_118;
    {   LispObject fn = basic_elt(env, 6); // tensorp
    v_118 = (*qfn1(fn))(fn, v_118);
    }
    env = stack[-5];
    if (v_118 == nil) goto v_67;
    v_118 = stack[0];
    {   LispObject fn = basic_elt(env, 7); // no_dum_varp
    v_118 = (*qfn1(fn))(fn, v_118);
    }
    env = stack[-5];
    if (v_118 == nil) goto v_79;
    else goto v_80;
v_79:
    v_118 = lisp_true;
    goto v_78;
v_80:
    v_118 = stack[0];
    if (!car_legal(v_118)) v_118 = carerror(v_118); else
    v_118 = car(v_118);
    if (!symbolp(v_118)) v_118 = nil;
    else { v_118 = qfastgets(v_118);
           if (v_118 != nil) { v_118 = elt(v_118, 0); // noncom
#ifdef RECORD_GET
             if (v_118 == SPID_NOPROP)
                record_get(elt(fastget_names, 0), 0),
                v_118 = nil;
             else record_get(elt(fastget_names, 0), 1),
                v_118 = lisp_true; }
           else record_get(elt(fastget_names, 0), 0); }
#else
             if (v_118 == SPID_NOPROP) v_118 = nil; else v_118 = lisp_true; }}
#endif
    goto v_78;
    v_118 = nil;
v_78:
    if (v_118 == nil) goto v_76;
    v_118 = stack[-3];
    if (!car_legal(v_118)) v_118 = carerror(v_118); else
    v_118 = car(v_118);
    if (!car_legal(v_118)) v_118 = carerror(v_118); else
    v_118 = car(v_118);
    if (!car_legal(v_118)) v_119 = carerror(v_118); else
    v_119 = car(v_118);
    v_118 = stack[-4];
    v_118 = cons(v_119, v_118);
    env = stack[-5];
    stack[-4] = v_118;
    goto v_74;
v_76:
    stack[0] = stack[-2];
    v_118 = stack[-3];
    if (!car_legal(v_118)) v_118 = carerror(v_118); else
    v_118 = car(v_118);
    if (!car_legal(v_118)) v_119 = carerror(v_118); else
    v_119 = car(v_118);
    v_118 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_118 = cons(v_119, v_118);
    env = stack[-5];
    v_118 = ncons(v_118);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 3); // multf
    v_118 = (*qfn2(fn))(fn, stack[0], v_118);
    }
    env = stack[-5];
    stack[-2] = v_118;
    goto v_74;
v_74:
    goto v_65;
v_67:
    stack[0] = stack[-2];
    v_118 = stack[-3];
    if (!car_legal(v_118)) v_118 = carerror(v_118); else
    v_118 = car(v_118);
    if (!car_legal(v_118)) v_119 = carerror(v_118); else
    v_119 = car(v_118);
    v_118 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_118 = cons(v_119, v_118);
    env = stack[-5];
    v_118 = ncons(v_118);
    env = stack[-5];
    {   LispObject fn = basic_elt(env, 3); // multf
    v_118 = (*qfn2(fn))(fn, stack[0], v_118);
    }
    env = stack[-5];
    stack[-2] = v_118;
    goto v_65;
v_65:
    goto v_14;
v_14:
    v_118 = stack[-3];
    if (!car_legal(v_118)) v_118 = carerror(v_118); else
    v_118 = car(v_118);
    if (!car_legal(v_118)) v_118 = cdrerror(v_118); else
    v_118 = cdr(v_118);
    stack[-3] = v_118;
    goto v_10;
    return onevalue(v_118);
}



// Code for sqlessp

static LispObject CC_sqlessp(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_22 = v_2;
// end of prologue
    stack[0] = v_22;
    {   LispObject fn = basic_elt(env, 1); // negsq
    v_21 = (*qfn1(fn))(fn, v_21);
    }
    env = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // addsq
    v_21 = (*qfn2(fn))(fn, stack[0], v_21);
    }
    env = stack[-1];
    if (!car_legal(v_21)) v_21 = carerror(v_21); else
    v_21 = car(v_21);
    v_22 = v_21;
    v_21 = v_22;
    if (v_21 == nil) goto v_13;
    else goto v_14;
v_13:
    v_21 = nil;
    goto v_12;
v_14:
    v_21 = v_22;
    {
        LispObject fn = basic_elt(env, 3); // !:minusp
        return (*qfn1(fn))(fn, v_21);
    }
    v_21 = nil;
v_12:
    return onevalue(v_21);
}



// Code for generate_multiindex

static LispObject CC_generate_multiindex(LispObject env,
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
    real_push(nil, nil, nil, nil, nil);
    push(nil, nil);
    stack_popper stack_popper_var(8);
// copy arguments values to proper place
    stack[-5] = v_2;
// end of prologue
    v_51 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-6] = v_51;
    v_52 = qvalue(basic_elt(env, 1)); // n_indep_var
    v_51 = stack[-6];
    v_51 = difference2(v_52, v_51);
    env = stack[-7];
    v_51 = Lminusp(nil, v_51);
    env = stack[-7];
    if (v_51 == nil) goto v_14;
    v_51 = nil;
    goto v_8;
v_14:
    stack[-1] = stack[-5];
    stack[0] = stack[-6];
    v_52 = stack[-5];
    v_51 = stack[-6];
    {   LispObject fn = basic_elt(env, 2); // nth
    v_51 = (*qfn2(fn))(fn, v_52, v_51);
    }
    env = stack[-7];
    v_51 = add1(v_51);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 3); // cde_replace_nth
    v_51 = (*qfn3(fn))(fn, stack[-1], stack[0], v_51);
    }
    env = stack[-7];
    v_51 = ncons(v_51);
    env = stack[-7];
    stack[-3] = v_51;
    stack[-4] = v_51;
v_9:
    v_51 = stack[-6];
    v_51 = add1(v_51);
    env = stack[-7];
    stack[-6] = v_51;
    v_52 = qvalue(basic_elt(env, 1)); // n_indep_var
    v_51 = stack[-6];
    v_51 = difference2(v_52, v_51);
    env = stack[-7];
    v_51 = Lminusp(nil, v_51);
    env = stack[-7];
    if (v_51 == nil) goto v_33;
    v_51 = stack[-4];
    goto v_8;
v_33:
    stack[-2] = stack[-3];
    stack[-1] = stack[-5];
    stack[0] = stack[-6];
    v_52 = stack[-5];
    v_51 = stack[-6];
    {   LispObject fn = basic_elt(env, 2); // nth
    v_51 = (*qfn2(fn))(fn, v_52, v_51);
    }
    env = stack[-7];
    v_51 = add1(v_51);
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 3); // cde_replace_nth
    v_51 = (*qfn3(fn))(fn, stack[-1], stack[0], v_51);
    }
    env = stack[-7];
    v_51 = ncons(v_51);
    env = stack[-7];
    if (!car_legal(stack[-2])) rplacd_fails(stack[-2]);
    setcdr(stack[-2], v_51);
    v_51 = stack[-3];
    if (!car_legal(v_51)) v_51 = cdrerror(v_51); else
    v_51 = cdr(v_51);
    stack[-3] = v_51;
    goto v_9;
v_8:
    return onevalue(v_51);
}



// Code for sfto_mindeg1

static LispObject CC_sfto_mindeg1(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_49, v_50;
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
    v_49 = stack[-1];
    if (!consp(v_49)) goto v_18;
    else goto v_19;
v_18:
    v_49 = lisp_true;
    goto v_17;
v_19:
    v_49 = stack[-1];
    if (!car_legal(v_49)) v_49 = carerror(v_49); else
    v_49 = car(v_49);
    v_49 = (consp(v_49) ? nil : lisp_true);
    goto v_17;
    v_49 = nil;
v_17:
    if (v_49 == nil) goto v_15;
    v_49 = lisp_true;
    goto v_13;
v_15:
    v_49 = stack[-1];
    if (!car_legal(v_49)) v_49 = carerror(v_49); else
    v_49 = car(v_49);
    if (!car_legal(v_49)) v_49 = carerror(v_49); else
    v_49 = car(v_49);
    if (!car_legal(v_49)) v_50 = carerror(v_49); else
    v_50 = car(v_49);
    v_49 = stack[0];
    v_49 = Lneq_2(nil, v_50, v_49);
    env = stack[-2];
    goto v_13;
    v_49 = nil;
v_13:
    if (v_49 == nil) goto v_11;
    v_49 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    goto v_6;
v_11:
    v_49 = stack[-1];
    if (!car_legal(v_49)) v_49 = cdrerror(v_49); else
    v_49 = cdr(v_49);
    if (v_49 == nil) goto v_38;
    v_49 = stack[-1];
    if (!car_legal(v_49)) v_49 = cdrerror(v_49); else
    v_49 = cdr(v_49);
    stack[-1] = v_49;
    goto v_7;
v_38:
    v_49 = stack[-1];
    if (!car_legal(v_49)) v_49 = carerror(v_49); else
    v_49 = car(v_49);
    if (!car_legal(v_49)) v_49 = carerror(v_49); else
    v_49 = car(v_49);
    if (!car_legal(v_49)) v_49 = cdrerror(v_49); else
    v_49 = cdr(v_49);
    goto v_6;
    v_49 = nil;
v_6:
    return onevalue(v_49);
}



// Code for cl_ex

static LispObject CC_cl_ex(LispObject env,
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
    v_11 = basic_elt(env, 1); // ex
    {
        LispObject fn = basic_elt(env, 2); // cl_closure
        return (*qfn3(fn))(fn, v_11, v_10, v_9);
    }
}



// Code for ofsf_canegrel

static LispObject CC_ofsf_canegrel(LispObject env,
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
        LispObject fn = basic_elt(env, 1); // ofsf_anegrel
        return (*qfn1(fn))(fn, v_15);
    }
    v_15 = nil;
v_6:
    return onevalue(v_15);
}



// Code for get_rep_of_generator

static LispObject CC_get_rep_of_generator(LispObject env,
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    v_73 = v_3;
    stack[-2] = v_2;
// end of prologue
    stack[-1] = nil;
    v_72 = stack[-2];
    v_71 = basic_elt(env, 1); // id
    if (v_72 == v_71) goto v_12;
    else goto v_13;
v_12:
    v_71 = v_73;
    if (!car_legal(v_71)) v_71 = carerror(v_71); else
    v_71 = car(v_71);
    if (!car_legal(v_71)) v_71 = cdrerror(v_71); else
    v_71 = cdr(v_71);
    if (!car_legal(v_71)) v_71 = carerror(v_71); else
    v_71 = car(v_71);
    {   LispObject fn = basic_elt(env, 3); // get!+row!+nr
    v_71 = (*qfn1(fn))(fn, v_71);
    }
    env = stack[-4];
    {
        LispObject fn = basic_elt(env, 4); // mk!+unit!+mat
        return (*qfn1(fn))(fn, v_71);
    }
v_13:
    v_71 = nil;
    stack[-3] = v_71;
    v_71 = v_73;
    stack[0] = v_71;
v_26:
    v_71 = stack[-3];
    if (v_71 == nil) goto v_33;
    else goto v_34;
v_33:
    v_71 = stack[0];
    v_72 = Llength(nil, v_71);
    env = stack[-4];
    v_71 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_71 = static_cast<LispObject>(greaterp2(v_72, v_71));
    v_71 = v_71 ? lisp_true : nil;
    env = stack[-4];
    goto v_32;
v_34:
    v_71 = nil;
    goto v_32;
    v_71 = nil;
v_32:
    if (v_71 == nil) goto v_29;
    else goto v_30;
v_29:
    goto v_25;
v_30:
    v_71 = stack[0];
    if (!car_legal(v_71)) v_71 = carerror(v_71); else
    v_71 = car(v_71);
    if (!car_legal(v_71)) v_72 = carerror(v_71); else
    v_72 = car(v_71);
    v_71 = stack[-2];
    if (equal(v_72, v_71)) goto v_46;
    else goto v_47;
v_46:
    v_71 = lisp_true;
    stack[-3] = v_71;
    v_71 = stack[0];
    if (!car_legal(v_71)) v_71 = carerror(v_71); else
    v_71 = car(v_71);
    if (!car_legal(v_71)) v_71 = cdrerror(v_71); else
    v_71 = cdr(v_71);
    if (!car_legal(v_71)) v_71 = carerror(v_71); else
    v_71 = car(v_71);
    stack[-1] = v_71;
    goto v_45;
v_47:
v_45:
    v_71 = stack[0];
    if (!car_legal(v_71)) v_71 = cdrerror(v_71); else
    v_71 = cdr(v_71);
    stack[0] = v_71;
    goto v_26;
v_25:
    v_71 = stack[-3];
    if (v_71 == nil) goto v_64;
    v_71 = stack[-1];
    goto v_9;
v_64:
    v_71 = basic_elt(env, 2); // " error in get rep of generators"
    {   LispObject fn = basic_elt(env, 5); // rederr
    v_71 = (*qfn1(fn))(fn, v_71);
    }
    goto v_62;
v_62:
    v_71 = nil;
v_9:
    return onevalue(v_71);
}



// Code for rl_reval

static LispObject CC_rl_reval(LispObject env,
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
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_18 = v_3;
    v_19 = v_2;
// end of prologue
    if (v_18 == nil) goto v_8;
    v_18 = v_19;
    {   LispObject fn = basic_elt(env, 1); // rl_simp1
    v_18 = (*qfn1(fn))(fn, v_18);
    }
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 2); // rl_prepfof
        return (*qfn1(fn))(fn, v_18);
    }
v_8:
    v_18 = v_19;
    {   LispObject fn = basic_elt(env, 1); // rl_simp1
    v_18 = (*qfn1(fn))(fn, v_18);
    }
    env = stack[0];
    {
        LispObject fn = basic_elt(env, 3); // rl_mk!*fof
        return (*qfn1(fn))(fn, v_18);
    }
    v_18 = nil;
    return onevalue(v_18);
}



// Code for pasf_univnlp

static LispObject CC_pasf_univnlp(LispObject env,
                         LispObject v_2, LispObject v_3)
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
    v_51 = v_3;
    stack[-1] = v_2;
// end of prologue
    stack[0] = nil;
    v_51 = ncons(v_51);
    env = stack[-3];
    {   LispObject fn = basic_elt(env, 1); // setkorder
    v_51 = (*qfn1(fn))(fn, v_51);
    }
    env = stack[-3];
    stack[-2] = v_51;
    v_51 = stack[-1];
    if (!car_legal(v_51)) v_51 = cdrerror(v_51); else
    v_51 = cdr(v_51);
    if (!car_legal(v_51)) v_51 = carerror(v_51); else
    v_51 = car(v_51);
    if (!consp(v_51)) goto v_22;
    else goto v_23;
v_22:
    v_51 = lisp_true;
    goto v_21;
v_23:
    v_51 = stack[-1];
    if (!car_legal(v_51)) v_51 = cdrerror(v_51); else
    v_51 = cdr(v_51);
    if (!car_legal(v_51)) v_51 = carerror(v_51); else
    v_51 = car(v_51);
    if (!car_legal(v_51)) v_51 = carerror(v_51); else
    v_51 = car(v_51);
    v_51 = (consp(v_51) ? nil : lisp_true);
    goto v_21;
    v_51 = nil;
v_21:
    if (v_51 == nil) goto v_18;
    else goto v_19;
v_18:
    v_51 = stack[-1];
    if (!car_legal(v_51)) v_51 = cdrerror(v_51); else
    v_51 = cdr(v_51);
    if (!car_legal(v_51)) v_51 = carerror(v_51); else
    v_51 = car(v_51);
    {   LispObject fn = basic_elt(env, 2); // reorder
    v_51 = (*qfn1(fn))(fn, v_51);
    }
    env = stack[-3];
    if (!car_legal(v_51)) v_51 = carerror(v_51); else
    v_51 = car(v_51);
    if (!car_legal(v_51)) v_51 = carerror(v_51); else
    v_51 = car(v_51);
    if (!car_legal(v_51)) v_52 = cdrerror(v_51); else
    v_52 = cdr(v_51);
    v_51 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_51 = static_cast<LispObject>(greaterp2(v_52, v_51));
    v_51 = v_51 ? lisp_true : nil;
    env = stack[-3];
    goto v_17;
v_19:
    v_51 = nil;
    goto v_17;
    v_51 = nil;
v_17:
    if (v_51 == nil) goto v_15;
    v_51 = lisp_true;
    stack[0] = v_51;
    goto v_13;
v_15:
v_13:
    v_51 = stack[-2];
    {   LispObject fn = basic_elt(env, 1); // setkorder
    v_51 = (*qfn1(fn))(fn, v_51);
    }
    v_51 = stack[0];
    return onevalue(v_51);
}



// Code for remk

static LispObject CC_remk(LispObject env,
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
    real_push(nil, nil, nil, nil, nil);
    push(nil, nil);
    stack_popper stack_popper_var(8);
// copy arguments values to proper place
    stack[-4] = v_3;
    stack[-5] = v_2;
// end of prologue
    v_69 = stack[-4];
    if (!car_legal(v_69)) v_69 = carerror(v_69); else
    v_69 = car(v_69);
    if (!car_legal(v_69)) v_69 = cdrerror(v_69); else
    v_69 = cdr(v_69);
    stack[-6] = v_69;
    v_69 = stack[-4];
    if (!car_legal(v_69)) v_69 = carerror(v_69); else
    v_69 = car(v_69);
    if (!car_legal(v_69)) v_69 = carerror(v_69); else
    v_69 = car(v_69);
    if (!car_legal(v_69)) v_69 = carerror(v_69); else
    v_69 = car(v_69);
    stack[-3] = v_69;
    v_69 = stack[-4];
    if (!car_legal(v_69)) v_69 = carerror(v_69); else
    v_69 = car(v_69);
    if (!car_legal(v_69)) v_69 = carerror(v_69); else
    v_69 = car(v_69);
    if (!car_legal(v_69)) v_69 = cdrerror(v_69); else
    v_69 = cdr(v_69);
    stack[0] = v_69;
v_27:
    v_70 = stack[-5];
    v_69 = stack[-3];
    {   LispObject fn = basic_elt(env, 1); // degr
    v_70 = (*qfn2(fn))(fn, v_70, v_69);
    }
    env = stack[-7];
    v_69 = stack[0];
    v_70 = difference2(v_70, v_69);
    env = stack[-7];
    stack[-1] = v_70;
    v_69 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_69 = static_cast<LispObject>(geq2(v_70, v_69));
    v_69 = v_69 ? lisp_true : nil;
    env = stack[-7];
    if (v_69 == nil) goto v_30;
    else goto v_31;
v_30:
    goto v_26;
v_31:
    v_69 = stack[-5];
    if (!car_legal(v_69)) v_69 = carerror(v_69); else
    v_69 = car(v_69);
    if (!car_legal(v_69)) v_70 = cdrerror(v_69); else
    v_70 = cdr(v_69);
    v_69 = stack[-4];
    if (!car_legal(v_69)) v_69 = cdrerror(v_69); else
    v_69 = cdr(v_69);
    {   LispObject fn = basic_elt(env, 2); // multf
    v_69 = (*qfn2(fn))(fn, v_70, v_69);
    }
    env = stack[-7];
    {   LispObject fn = basic_elt(env, 3); // negf
    v_69 = (*qfn1(fn))(fn, v_69);
    }
    env = stack[-7];
    stack[-2] = v_69;
    v_70 = stack[-1];
    v_69 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_69 = static_cast<LispObject>(greaterp2(v_70, v_69));
    v_69 = v_69 ? lisp_true : nil;
    env = stack[-7];
    if (v_69 == nil) goto v_50;
    v_70 = stack[-3];
    v_69 = stack[-1];
    {   LispObject fn = basic_elt(env, 4); // to
    v_70 = (*qfn2(fn))(fn, v_70, v_69);
    }
    env = stack[-7];
    v_69 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_69 = cons(v_70, v_69);
    env = stack[-7];
    v_70 = ncons(v_69);
    env = stack[-7];
    v_69 = stack[-2];
    {   LispObject fn = basic_elt(env, 2); // multf
    v_69 = (*qfn2(fn))(fn, v_70, v_69);
    }
    env = stack[-7];
    stack[-2] = v_69;
    goto v_48;
v_50:
v_48:
    v_70 = stack[-6];
    v_69 = stack[-5];
    if (!car_legal(v_69)) v_69 = cdrerror(v_69); else
    v_69 = cdr(v_69);
    {   LispObject fn = basic_elt(env, 2); // multf
    v_70 = (*qfn2(fn))(fn, v_70, v_69);
    }
    env = stack[-7];
    v_69 = stack[-2];
    {   LispObject fn = basic_elt(env, 5); // addf
    v_69 = (*qfn2(fn))(fn, v_70, v_69);
    }
    env = stack[-7];
    stack[-5] = v_69;
    goto v_27;
v_26:
    v_69 = stack[-5];
    return onevalue(v_69);
}



// Code for irp_aex

static LispObject CC_irp_aex(LispObject env,
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
    v_7 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {
        LispObject fn = basic_elt(env, 1); // nth
        return (*qfn2(fn))(fn, v_8, v_7);
    }
}



// Code for mod!-domainvalchk

static LispObject CC_modKdomainvalchk(LispObject env,
                         LispObject v_2, LispObject v_3)
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
        push(v_2,v_3);
        env = reclaim(env, "stack", GC_STACK, 0);
        pop(v_3,v_2);
    }
#endif // CONSERVATIVE
    real_push(env);
    stack_popper stack_popper_var(1);
// copy arguments values to proper place
    v_37 = v_3;
    v_35 = v_2;
// end of prologue
    v_36 = v_35;
    v_35 = basic_elt(env, 1); // expt
    if (v_36 == v_35) goto v_10;
    else goto v_11;
v_10:
    v_35 = v_37;
    if (!car_legal(v_35)) v_35 = carerror(v_35); else
    v_35 = car(v_35);
    v_36 = v_37;
    if (!car_legal(v_36)) v_36 = cdrerror(v_36); else
    v_36 = cdr(v_36);
    if (!car_legal(v_36)) v_36 = carerror(v_36); else
    v_36 = car(v_36);
    {   LispObject fn = basic_elt(env, 3); // mod!-expt!-fract
    v_35 = (*qfn2(fn))(fn, v_35, v_36);
    }
    env = stack[0];
    goto v_9;
v_11:
    v_35 = nil;
    goto v_9;
    v_35 = nil;
v_9:
    v_36 = v_35;
    v_35 = v_36;
    v_37 = basic_elt(env, 2); // failed
    if (v_35 == v_37) goto v_25;
    else goto v_26;
v_25:
    v_35 = nil;
    goto v_24;
v_26:
    v_35 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    return cons(v_36, v_35);
    v_35 = nil;
v_24:
    return onevalue(v_35);
}



// Code for remove_root_item

static LispObject CC_remove_root_item(LispObject env,
                         LispObject v_2)
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
    v_53 = stack[-1];
    if (!car_legal(v_53)) v_53 = cdrerror(v_53); else
    v_53 = cdr(v_53);
    if (!car_legal(v_53)) v_53 = carerror(v_53); else
    v_53 = car(v_53);
    stack[-2] = v_53;
    v_53 = stack[-1];
    if (!car_legal(v_53)) v_53 = carerror(v_53); else
    v_53 = car(v_53);
    stack[0] = v_53;
    v_54 = stack[-1];
    v_53 = stack[-1];
    if (!car_legal(v_53)) v_53 = cdrerror(v_53); else
    v_53 = cdr(v_53);
    if (!car_legal(v_53)) v_53 = cdrerror(v_53); else
    v_53 = cdr(v_53);
    if (!car_legal(v_53)) v_53 = carerror(v_53); else
    v_53 = car(v_53);
    {   LispObject fn = basic_elt(env, 1); // setcar
    v_53 = (*qfn2(fn))(fn, v_54, v_53);
    }
    env = stack[-3];
    v_54 = stack[-1];
    v_53 = stack[-1];
    if (!car_legal(v_53)) v_53 = cdrerror(v_53); else
    v_53 = cdr(v_53);
    if (!car_legal(v_53)) v_53 = cdrerror(v_53); else
    v_53 = cdr(v_53);
    if (!car_legal(v_53)) v_53 = cdrerror(v_53); else
    v_53 = cdr(v_53);
    {   LispObject fn = basic_elt(env, 2); // setcdr
    v_53 = (*qfn2(fn))(fn, v_54, v_53);
    }
    env = stack[-3];
    v_53 = stack[-2];
    if (!car_legal(v_53)) v_53 = cdrerror(v_53); else
    v_53 = cdr(v_53);
    if (v_53 == nil) goto v_28;
v_33:
    v_53 = stack[-1];
    if (!car_legal(v_53)) v_53 = cdrerror(v_53); else
    v_53 = cdr(v_53);
    if (v_53 == nil) goto v_36;
    else goto v_37;
v_36:
    goto v_32;
v_37:
    v_53 = stack[-1];
    if (!car_legal(v_53)) v_53 = cdrerror(v_53); else
    v_53 = cdr(v_53);
    if (!car_legal(v_53)) v_53 = carerror(v_53); else
    v_53 = car(v_53);
    stack[-1] = v_53;
    goto v_33;
v_32:
    v_54 = stack[-1];
    v_53 = stack[-2];
    if (!car_legal(v_53)) v_53 = carerror(v_53); else
    v_53 = car(v_53);
    {   LispObject fn = basic_elt(env, 1); // setcar
    v_53 = (*qfn2(fn))(fn, v_54, v_53);
    }
    env = stack[-3];
    v_54 = stack[-1];
    v_53 = stack[-2];
    if (!car_legal(v_53)) v_53 = cdrerror(v_53); else
    v_53 = cdr(v_53);
    {   LispObject fn = basic_elt(env, 2); // setcdr
    v_53 = (*qfn2(fn))(fn, v_54, v_53);
    }
    goto v_26;
v_28:
v_26:
    v_53 = stack[0];
    return onevalue(v_53);
}



// Code for calc_map_2d

static LispObject CC_calc_map_2d(LispObject env, LispObject v_2,
                         LispObject v_3, LispObject v_4, LispObject _a4up_)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_28, v_29;
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
    v_28 = stack[-4];
    if (!car_legal(v_28)) v_28 = carerror(v_28); else
    v_28 = car(v_28);
    if (!car_legal(v_28)) v_28 = carerror(v_28); else
    v_28 = car(v_28);
    {   LispObject fn = basic_elt(env, 1); // mk_names_map_2
    stack[-5] = (*qfn1(fn))(fn, v_28);
    }
    env = stack[-6];
    v_28 = stack[-4];
    if (!car_legal(v_28)) v_28 = carerror(v_28); else
    v_28 = car(v_28);
    if (!car_legal(v_28)) stack[0] = cdrerror(v_28); else
    stack[0] = cdr(v_28);
    v_28 = stack[-4];
    if (!car_legal(v_28)) v_28 = cdrerror(v_28); else
    v_28 = cdr(v_28);
    if (!car_legal(v_28)) v_29 = carerror(v_28); else
    v_29 = car(v_28);
    v_28 = stack[-3];
    v_28 = cons(v_29, v_28);
    env = stack[-6];
    stack[0] = list2star(stack[-5], stack[0], v_28);
    env = stack[-6];
    v_28 = stack[-4];
    if (!car_legal(v_28)) v_28 = cdrerror(v_28); else
    v_28 = cdr(v_28);
    if (!car_legal(v_28)) v_28 = cdrerror(v_28); else
    v_28 = cdr(v_28);
    if (!car_legal(v_28)) v_29 = carerror(v_28); else
    v_29 = car(v_28);
    v_28 = stack[-1];
    {   LispObject fn = basic_elt(env, 2); // mk_binding
    v_28 = (*qfn2(fn))(fn, v_29, v_28);
    }
    env = stack[-6];
    {
        LispObject v_36 = stack[0];
        LispObject v_37 = stack[-2];
        LispObject fn = basic_elt(env, 3); // coeff_calc
        return (*qfn3(fn))(fn, v_36, v_37, v_28);
    }
}



// Code for depend1

static LispObject CC_depend1(LispObject env,
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
    push(nil, nil, nil, nil);
    stack_popper stack_popper_var(5);
// copy arguments values to proper place
    stack[0] = v_4;
    stack[-1] = v_3;
    stack[-2] = v_2;
// end of prologue
    v_74 = stack[-2];
    {   LispObject fn = basic_elt(env, 3); // !*a2k
    v_74 = (*qfn1(fn))(fn, v_74);
    }
    env = stack[-4];
    stack[-2] = v_74;
    v_74 = stack[-1];
    {   LispObject fn = basic_elt(env, 3); // !*a2k
    v_74 = (*qfn1(fn))(fn, v_74);
    }
    env = stack[-4];
    stack[-1] = v_74;
    v_75 = stack[-2];
    v_74 = stack[-1];
    if (v_75 == v_74) goto v_16;
    else goto v_17;
v_16:
    v_74 = nil;
    goto v_9;
v_17:
    v_75 = stack[-2];
    v_74 = qvalue(basic_elt(env, 1)); // depl!*
    v_74 = Lassoc(nil, v_75, v_74);
    stack[-3] = v_74;
    v_74 = stack[-3];
    if (v_74 == nil) goto v_27;
    v_74 = stack[0];
    if (v_74 == nil) goto v_32;
    v_74 = stack[-3];
    if (!car_legal(v_74)) stack[0] = carerror(v_74); else
    stack[0] = car(v_74);
    v_74 = stack[-1];
    v_75 = ncons(v_74);
    env = stack[-4];
    v_74 = stack[-3];
    if (!car_legal(v_74)) v_74 = cdrerror(v_74); else
    v_74 = cdr(v_74);
    {   LispObject fn = basic_elt(env, 4); // union
    v_75 = (*qfn2(fn))(fn, v_75, v_74);
    }
    env = stack[-4];
    v_74 = qvalue(basic_elt(env, 1)); // depl!*
    {   LispObject fn = basic_elt(env, 5); // repasc
    v_74 = (*qfn3(fn))(fn, stack[0], v_75, v_74);
    }
    env = stack[-4];
    setvalue(basic_elt(env, 1), v_74); // depl!*
    goto v_30;
v_32:
    v_75 = stack[-1];
    v_74 = stack[-3];
    if (!car_legal(v_74)) v_74 = cdrerror(v_74); else
    v_74 = cdr(v_74);
    v_75 = Ldelete(nil, v_75, v_74);
    env = stack[-4];
    v_74 = v_75;
    if (v_75 == nil) goto v_44;
    v_75 = stack[-3];
    if (!car_legal(v_75)) v_76 = carerror(v_75); else
    v_76 = car(v_75);
    v_75 = v_74;
    v_74 = qvalue(basic_elt(env, 1)); // depl!*
    {   LispObject fn = basic_elt(env, 5); // repasc
    v_74 = (*qfn3(fn))(fn, v_76, v_75, v_74);
    }
    env = stack[-4];
    setvalue(basic_elt(env, 1), v_74); // depl!*
    goto v_30;
v_44:
    v_75 = stack[-3];
    v_74 = qvalue(basic_elt(env, 1)); // depl!*
    v_74 = Ldelete(nil, v_75, v_74);
    env = stack[-4];
    setvalue(basic_elt(env, 1), v_74); // depl!*
    goto v_30;
v_30:
    goto v_25;
v_27:
    v_74 = stack[0];
    if (v_74 == nil) goto v_59;
    else goto v_60;
v_59:
    v_76 = stack[-2];
    v_75 = basic_elt(env, 2); // "has no prior dependence on"
    v_74 = stack[-1];
    v_74 = list3(v_76, v_75, v_74);
    env = stack[-4];
    {   LispObject fn = basic_elt(env, 6); // lprim
    v_74 = (*qfn1(fn))(fn, v_74);
    }
    goto v_25;
v_60:
    v_75 = stack[-2];
    v_74 = stack[-1];
    v_75 = list2(v_75, v_74);
    env = stack[-4];
    v_74 = qvalue(basic_elt(env, 1)); // depl!*
    v_74 = cons(v_75, v_74);
    env = stack[-4];
    setvalue(basic_elt(env, 1), v_74); // depl!*
    goto v_25;
v_25:
    v_74 = nil;
v_9:
    return onevalue(v_74);
}



// Code for zfactor

static LispObject CC_zfactor(LispObject env,
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
    v_7 = lisp_true;
    {
        LispObject fn = basic_elt(env, 1); // zfactor1
        return (*qfn2(fn))(fn, v_8, v_7);
    }
}



// Code for simprad

static LispObject CC_simprad(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_190, v_191;
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
    stack[0] = v_2;
// end of prologue
    v_190 = qvalue(basic_elt(env, 1)); // !*reduced
    if (v_190 == nil) goto v_8;
    v_190 = stack[0];
    if (!car_legal(v_190)) v_191 = carerror(v_190); else
    v_191 = car(v_190);
    v_190 = stack[-3];
    {   LispObject fn = basic_elt(env, 5); // radfa
    stack[-1] = (*qfn2(fn))(fn, v_191, v_190);
    }
    env = stack[-6];
    v_190 = stack[0];
    if (!car_legal(v_190)) v_191 = cdrerror(v_190); else
    v_191 = cdr(v_190);
    v_190 = stack[-3];
    {   LispObject fn = basic_elt(env, 5); // radfa
    v_190 = (*qfn2(fn))(fn, v_191, v_190);
    }
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 6); // invsq
    v_190 = (*qfn1(fn))(fn, v_190);
    }
    env = stack[-6];
    {
        LispObject v_198 = stack[-1];
        LispObject fn = basic_elt(env, 7); // multsq
        return (*qfn2(fn))(fn, v_198, v_190);
    }
v_8:
    stack[-4] = nil;
    v_190 = qvalue(basic_elt(env, 2)); // !*rationalize
    if (v_190 == nil) goto v_31;
    v_190 = stack[0];
    if (!car_legal(v_190)) v_191 = cdrerror(v_190); else
    v_191 = cdr(v_190);
    v_190 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_190 = list2(v_191, v_190);
    env = stack[-6];
    stack[-1] = v_190;
    v_190 = stack[0];
    if (!car_legal(v_190)) stack[-2] = carerror(v_190); else
    stack[-2] = car(v_190);
    v_190 = stack[0];
    if (!car_legal(v_190)) stack[0] = cdrerror(v_190); else
    stack[0] = cdr(v_190);
    v_190 = stack[-3];
    v_190 = sub1(v_190);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 8); // exptf
    v_190 = (*qfn2(fn))(fn, stack[0], v_190);
    }
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 9); // multf
    v_191 = (*qfn2(fn))(fn, stack[-2], v_190);
    }
    env = stack[-6];
    v_190 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_190 = cons(v_191, v_190);
    env = stack[-6];
    stack[0] = v_190;
    goto v_29;
v_31:
    v_190 = stack[0];
    if (!car_legal(v_190)) v_191 = cdrerror(v_190); else
    v_191 = cdr(v_190);
    v_190 = stack[-3];
    {   LispObject fn = basic_elt(env, 10); // radf
    v_190 = (*qfn2(fn))(fn, v_191, v_190);
    }
    env = stack[-6];
    stack[-1] = v_190;
    goto v_29;
v_29:
    v_191 = stack[-3];
    v_190 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    if (v_191 == v_190) goto v_59;
    else goto v_60;
v_59:
    v_190 = stack[0];
    if (!car_legal(v_190)) v_190 = carerror(v_190); else
    v_190 = car(v_190);
    {   LispObject fn = basic_elt(env, 11); // minusf
    v_190 = (*qfn1(fn))(fn, v_190);
    }
    env = stack[-6];
    goto v_58;
v_60:
    v_190 = nil;
    goto v_58;
    v_190 = nil;
v_58:
    if (v_190 == nil) goto v_56;
    v_190 = lisp_true;
    stack[-4] = v_190;
    v_190 = stack[0];
    if (!car_legal(v_190)) v_190 = carerror(v_190); else
    v_190 = car(v_190);
    {   LispObject fn = basic_elt(env, 12); // negf
    v_191 = (*qfn1(fn))(fn, v_190);
    }
    env = stack[-6];
    v_190 = stack[-3];
    {   LispObject fn = basic_elt(env, 10); // radf
    v_190 = (*qfn2(fn))(fn, v_191, v_190);
    }
    env = stack[-6];
    stack[-2] = v_190;
    goto v_54;
v_56:
    v_190 = stack[0];
    if (!car_legal(v_190)) v_191 = carerror(v_190); else
    v_191 = car(v_190);
    v_190 = stack[-3];
    {   LispObject fn = basic_elt(env, 10); // radf
    v_190 = (*qfn2(fn))(fn, v_191, v_190);
    }
    env = stack[-6];
    stack[-2] = v_190;
    goto v_54;
v_54:
    stack[-5] = basic_elt(env, 3); // quotient
    v_190 = stack[-2];
    if (!car_legal(v_190)) v_190 = cdrerror(v_190); else
    v_190 = cdr(v_190);
    {   LispObject fn = basic_elt(env, 13); // retimes
    stack[0] = (*qfn1(fn))(fn, v_190);
    }
    env = stack[-6];
    v_190 = stack[-1];
    if (!car_legal(v_190)) v_190 = cdrerror(v_190); else
    v_190 = cdr(v_190);
    {   LispObject fn = basic_elt(env, 13); // retimes
    v_190 = (*qfn1(fn))(fn, v_190);
    }
    env = stack[-6];
    v_190 = list3(stack[-5], stack[0], v_190);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 14); // simp
    v_190 = (*qfn1(fn))(fn, v_190);
    }
    env = stack[-6];
    stack[-5] = v_190;
    v_190 = stack[-5];
    if (!car_legal(v_190)) v_190 = carerror(v_190); else
    v_190 = car(v_190);
    if (!consp(v_190)) goto v_100;
    else goto v_101;
v_100:
    v_190 = lisp_true;
    goto v_99;
v_101:
    v_190 = stack[-5];
    if (!car_legal(v_190)) v_190 = carerror(v_190); else
    v_190 = car(v_190);
    if (!car_legal(v_190)) v_190 = carerror(v_190); else
    v_190 = car(v_190);
    v_190 = (consp(v_190) ? nil : lisp_true);
    goto v_99;
    v_190 = nil;
v_99:
    if (v_190 == nil) goto v_97;
    v_190 = stack[-5];
    if (!car_legal(v_190)) v_190 = cdrerror(v_190); else
    v_190 = cdr(v_190);
    if (!consp(v_190)) goto v_113;
    else goto v_114;
v_113:
    v_190 = lisp_true;
    goto v_112;
v_114:
    v_190 = stack[-5];
    if (!car_legal(v_190)) v_190 = cdrerror(v_190); else
    v_190 = cdr(v_190);
    if (!car_legal(v_190)) v_190 = carerror(v_190); else
    v_190 = car(v_190);
    v_190 = (consp(v_190) ? nil : lisp_true);
    goto v_112;
    v_190 = nil;
v_112:
    goto v_95;
v_97:
    v_190 = nil;
    goto v_95;
    v_190 = nil;
v_95:
    if (v_190 == nil) goto v_93;
    v_190 = stack[-5];
    if (!car_legal(v_190)) v_190 = carerror(v_190); else
    v_190 = car(v_190);
    {   LispObject fn = basic_elt(env, 15); // prepf
    v_191 = (*qfn1(fn))(fn, v_190);
    }
    env = stack[-6];
    v_190 = stack[-3];
    {   LispObject fn = basic_elt(env, 16); // mkrootsq
    stack[0] = (*qfn2(fn))(fn, v_191, v_190);
    }
    env = stack[-6];
    v_190 = stack[-5];
    if (!car_legal(v_190)) v_190 = cdrerror(v_190); else
    v_190 = cdr(v_190);
    {   LispObject fn = basic_elt(env, 15); // prepf
    v_191 = (*qfn1(fn))(fn, v_190);
    }
    env = stack[-6];
    v_190 = stack[-3];
    {   LispObject fn = basic_elt(env, 16); // mkrootsq
    v_190 = (*qfn2(fn))(fn, v_191, v_190);
    }
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 6); // invsq
    v_190 = (*qfn1(fn))(fn, v_190);
    }
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 7); // multsq
    v_190 = (*qfn2(fn))(fn, stack[0], v_190);
    }
    env = stack[-6];
    stack[-5] = v_190;
    goto v_91;
v_93:
    v_190 = stack[-4];
    if (v_190 == nil) goto v_144;
    v_190 = nil;
    stack[-4] = v_190;
    v_190 = stack[-5];
    {   LispObject fn = basic_elt(env, 17); // negsq
    v_190 = (*qfn1(fn))(fn, v_190);
    }
    env = stack[-6];
    stack[-5] = v_190;
    goto v_142;
v_144:
v_142:
    v_190 = stack[-5];
    {   LispObject fn = basic_elt(env, 18); // prepsq
    v_191 = (*qfn1(fn))(fn, v_190);
    }
    env = stack[-6];
    v_190 = stack[-3];
    {   LispObject fn = basic_elt(env, 16); // mkrootsq
    v_190 = (*qfn2(fn))(fn, v_191, v_190);
    }
    env = stack[-6];
    stack[-5] = v_190;
    goto v_91;
v_91:
    v_190 = qvalue(basic_elt(env, 4)); // !*precise
    if (v_190 == nil) goto v_158;
    v_190 = stack[-3];
    v_190 = Levenp(nil, v_190);
    env = stack[-6];
    if (v_190 == nil) goto v_158;
    v_190 = stack[-2];
    if (!car_legal(v_190)) v_191 = carerror(v_190); else
    v_191 = car(v_190);
    v_190 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_190 = cons(v_191, v_190);
    env = stack[-6];
    stack[0] = v_190;
    goto v_156;
v_158:
    v_190 = stack[-2];
    if (!car_legal(v_190)) v_191 = carerror(v_190); else
    v_191 = car(v_190);
    v_190 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_190 = cons(v_191, v_190);
    env = stack[-6];
    stack[0] = v_190;
    goto v_156;
    stack[0] = nil;
v_156:
    v_191 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_190 = stack[-1];
    if (!car_legal(v_190)) v_190 = carerror(v_190); else
    v_190 = car(v_190);
    v_190 = cons(v_191, v_190);
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 7); // multsq
    v_191 = (*qfn2(fn))(fn, stack[0], v_190);
    }
    env = stack[-6];
    v_190 = stack[-5];
    {   LispObject fn = basic_elt(env, 7); // multsq
    v_190 = (*qfn2(fn))(fn, v_191, v_190);
    }
    env = stack[-6];
    stack[-5] = v_190;
    v_190 = stack[-4];
    if (v_190 == nil) goto v_182;
    stack[0] = stack[-5];
    v_191 = static_cast<LispObject>(-16)+TAG_FIXNUM; // -1
    v_190 = static_cast<LispObject>(32)+TAG_FIXNUM; // 2
    {   LispObject fn = basic_elt(env, 16); // mkrootsq
    v_190 = (*qfn2(fn))(fn, v_191, v_190);
    }
    env = stack[-6];
    {   LispObject fn = basic_elt(env, 7); // multsq
    v_190 = (*qfn2(fn))(fn, stack[0], v_190);
    }
    stack[-5] = v_190;
    goto v_180;
v_182:
v_180:
    v_190 = stack[-5];
    goto v_6;
    v_190 = nil;
v_6:
    return onevalue(v_190);
}



// Code for crn!:zerop

static LispObject CC_crnTzerop(LispObject env,
                         LispObject v_2)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_22, v_23, v_24;
#ifdef CHECK_STACK
    if_check_stack;
#endif
// copy arguments values to proper place
    v_23 = v_2;
// end of prologue
    v_22 = v_23;
    if (!car_legal(v_22)) v_22 = cdrerror(v_22); else
    v_22 = cdr(v_22);
    if (!car_legal(v_22)) v_22 = carerror(v_22); else
    v_22 = car(v_22);
    if (!car_legal(v_22)) v_24 = carerror(v_22); else
    v_24 = car(v_22);
    v_22 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    if (v_24 == v_22) goto v_6;
    else goto v_7;
v_6:
    v_22 = v_23;
    if (!car_legal(v_22)) v_22 = cdrerror(v_22); else
    v_22 = cdr(v_22);
    if (!car_legal(v_22)) v_22 = cdrerror(v_22); else
    v_22 = cdr(v_22);
    if (!car_legal(v_22)) v_23 = carerror(v_22); else
    v_23 = car(v_22);
    v_22 = static_cast<LispObject>(0)+TAG_FIXNUM; // 0
    v_22 = (v_23 == v_22 ? lisp_true : nil);
    goto v_5;
v_7:
    v_22 = nil;
    goto v_5;
    v_22 = nil;
v_5:
    return onevalue(v_22);
}



// Code for imports

static LispObject CC_imports(LispObject env,
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
    v_9 = qvalue(basic_elt(env, 1)); // importslist!*
    {   LispObject fn = basic_elt(env, 2); // union
    v_9 = (*qfn2(fn))(fn, v_10, v_9);
    }
    env = stack[0];
    setvalue(basic_elt(env, 1), v_9); // importslist!*
    v_9 = nil;
    return onevalue(v_9);
}



// Code for monomispommaretdivisibleby

static LispObject CC_monomispommaretdivisibleby(LispObject env,
                         LispObject v_2, LispObject v_3)
{
    env = qenv(env);
#if 0 // Start of trace output
#endif // End of trace output
    LispObject v_93, v_94;
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
    v_93 = v_2;
// end of prologue
    stack[0] = nil;
    v_94 = v_93;
    v_93 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_93 = Lgetv(nil, v_94, v_93);
    env = stack[-3];
    stack[-2] = v_93;
    v_94 = stack[-1];
    v_93 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    v_93 = Lgetv(nil, v_94, v_93);
    env = stack[-3];
    stack[-1] = v_93;
v_18:
    v_93 = stack[-2];
    if (!car_legal(v_93)) v_93 = carerror(v_93); else
    v_93 = car(v_93);
    if (v_93 == nil) goto v_21;
    v_93 = stack[-2];
    if (!car_legal(v_93)) v_94 = carerror(v_93); else
    v_94 = car(v_93);
    v_93 = stack[-1];
    if (!car_legal(v_93)) v_93 = carerror(v_93); else
    v_93 = car(v_93);
    v_93 = static_cast<LispObject>(greaterp2(v_94, v_93));
    v_93 = v_93 ? lisp_true : nil;
    env = stack[-3];
    if (v_93 == nil) goto v_21;
    goto v_22;
v_21:
    goto v_17;
v_22:
    v_93 = stack[-2];
    if (!car_legal(v_93)) v_93 = cdrerror(v_93); else
    v_93 = cdr(v_93);
    stack[-2] = v_93;
    goto v_18;
v_17:
v_38:
    v_93 = stack[0];
    if (v_93 == nil) goto v_45;
    else goto v_46;
v_45:
    v_93 = stack[-2];
    if (!car_legal(v_93)) v_93 = carerror(v_93); else
    v_93 = car(v_93);
    if (v_93 == nil) goto v_50;
    else goto v_51;
v_50:
    v_93 = nil;
    goto v_49;
v_51:
    v_93 = stack[-1];
    if (!car_legal(v_93)) v_93 = carerror(v_93); else
    v_93 = car(v_93);
    goto v_49;
    v_93 = nil;
v_49:
    goto v_44;
v_46:
    v_93 = nil;
    goto v_44;
    v_93 = nil;
v_44:
    if (v_93 == nil) goto v_41;
    else goto v_42;
v_41:
    goto v_37;
v_42:
    v_93 = stack[-2];
    if (!car_legal(v_93)) v_94 = carerror(v_93); else
    v_94 = car(v_93);
    v_93 = stack[-1];
    if (!car_legal(v_93)) v_93 = carerror(v_93); else
    v_93 = car(v_93);
    if (equal(v_94, v_93)) goto v_66;
    v_93 = lisp_true;
    stack[0] = v_93;
    goto v_64;
v_66:
    v_93 = stack[-2];
    if (!car_legal(v_93)) v_93 = cdrerror(v_93); else
    v_93 = cdr(v_93);
    stack[-2] = v_93;
    v_93 = stack[-1];
    if (!car_legal(v_93)) v_93 = cdrerror(v_93); else
    v_93 = cdr(v_93);
    stack[-1] = v_93;
    goto v_64;
v_64:
    goto v_38;
v_37:
    v_93 = stack[-2];
    if (!car_legal(v_93)) v_93 = carerror(v_93); else
    v_93 = car(v_93);
    if (v_93 == nil) goto v_83;
    else goto v_84;
v_83:
    v_93 = stack[-1];
    if (!car_legal(v_93)) v_93 = carerror(v_93); else
    v_93 = car(v_93);
    v_93 = (v_93 == nil ? lisp_true : nil);
    goto v_82;
v_84:
    v_93 = nil;
    goto v_82;
    v_93 = nil;
v_82:
    return onevalue(v_93);
}



// Code for talp_raf

static LispObject CC_talp_raf(LispObject env,
                         LispObject v_2)
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
    stack[0] = v_2;
// end of prologue
    v_177 = stack[0];
    {   LispObject fn = basic_elt(env, 5); // talp_op
    v_177 = (*qfn1(fn))(fn, v_177);
    }
    env = stack[-10];
    stack[-9] = v_177;
    v_177 = stack[0];
    {   LispObject fn = basic_elt(env, 6); // talp_arg2l
    v_177 = (*qfn1(fn))(fn, v_177);
    }
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 7); // talp_tcfrp
    v_177 = (*qfn1(fn))(fn, v_177);
    }
    env = stack[-10];
    if (v_177 == nil) goto v_19;
    v_177 = stack[0];
    {   LispObject fn = basic_elt(env, 8); // talp_arg2r
    v_177 = (*qfn1(fn))(fn, v_177);
    }
    env = stack[-10];
    stack[-7] = v_177;
    v_177 = stack[0];
    {   LispObject fn = basic_elt(env, 6); // talp_arg2l
    v_177 = (*qfn1(fn))(fn, v_177);
    }
    env = stack[-10];
    goto v_17;
v_19:
    v_177 = stack[0];
    {   LispObject fn = basic_elt(env, 6); // talp_arg2l
    v_177 = (*qfn1(fn))(fn, v_177);
    }
    env = stack[-10];
    stack[-7] = v_177;
    v_177 = stack[0];
    {   LispObject fn = basic_elt(env, 8); // talp_arg2r
    v_177 = (*qfn1(fn))(fn, v_177);
    }
    env = stack[-10];
    goto v_17;
    v_177 = nil;
v_17:
    stack[-8] = v_177;
    v_177 = stack[-8];
    {   LispObject fn = basic_elt(env, 5); // talp_op
    v_178 = (*qfn1(fn))(fn, v_177);
    }
    env = stack[-10];
    v_177 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    {   LispObject fn = basic_elt(env, 9); // talp_getinvfsym
    v_178 = (*qfn2(fn))(fn, v_178, v_177);
    }
    env = stack[-10];
    v_177 = stack[-7];
    {   LispObject fn = basic_elt(env, 10); // talp_mkinv
    v_177 = (*qfn2(fn))(fn, v_178, v_177);
    }
    env = stack[-10];
    v_179 = stack[-9];
    v_178 = basic_elt(env, 1); // equal
    if (v_179 == v_178) goto v_42;
    else goto v_43;
v_42:
    v_179 = basic_elt(env, 2); // neq
    v_178 = v_177;
    v_177 = stack[-7];
    {   LispObject fn = basic_elt(env, 11); // talp_mk2
    v_177 = (*qfn3(fn))(fn, v_179, v_178, v_177);
    }
    env = stack[-10];
    goto v_41;
v_43:
    v_179 = basic_elt(env, 1); // equal
    v_178 = v_177;
    v_177 = stack[-7];
    {   LispObject fn = basic_elt(env, 11); // talp_mk2
    v_177 = (*qfn3(fn))(fn, v_179, v_178, v_177);
    }
    env = stack[-10];
    goto v_41;
    v_177 = nil;
v_41:
    {   LispObject fn = basic_elt(env, 12); // talp_simpat
    v_177 = (*qfn1(fn))(fn, v_177);
    }
    env = stack[-10];
    stack[-6] = v_177;
    v_177 = static_cast<LispObject>(16)+TAG_FIXNUM; // 1
    stack[-5] = v_177;
    v_177 = stack[-8];
    {   LispObject fn = basic_elt(env, 5); // talp_op
    stack[0] = (*qfn1(fn))(fn, v_177);
    }
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 13); // talp_getl
    v_177 = (*qfn0(fn))(fn);
    }
    env = stack[-10];
    v_177 = Latsoc(nil, stack[0], v_177);
    if (!car_legal(v_177)) v_178 = cdrerror(v_177); else
    v_178 = cdr(v_177);
    v_177 = stack[-5];
    v_177 = difference2(v_178, v_177);
    env = stack[-10];
    v_177 = Lminusp(nil, v_177);
    env = stack[-10];
    if (v_177 == nil) goto v_66;
    v_177 = nil;
    goto v_60;
v_66:
    v_177 = stack[-8];
    {   LispObject fn = basic_elt(env, 5); // talp_op
    v_178 = (*qfn1(fn))(fn, v_177);
    }
    env = stack[-10];
    v_177 = stack[-5];
    {   LispObject fn = basic_elt(env, 9); // talp_getinvfsym
    v_177 = (*qfn2(fn))(fn, v_178, v_177);
    }
    env = stack[-10];
    stack[-1] = stack[-9];
    v_178 = v_177;
    v_177 = stack[-7];
    {   LispObject fn = basic_elt(env, 10); // talp_mkinv
    stack[0] = (*qfn2(fn))(fn, v_178, v_177);
    }
    env = stack[-10];
    v_177 = stack[-8];
    {   LispObject fn = basic_elt(env, 14); // talp_fargl
    v_178 = (*qfn1(fn))(fn, v_177);
    }
    env = stack[-10];
    v_177 = stack[-5];
    {   LispObject fn = basic_elt(env, 15); // nth
    v_177 = (*qfn2(fn))(fn, v_178, v_177);
    }
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 11); // talp_mk2
    v_177 = (*qfn3(fn))(fn, stack[-1], stack[0], v_177);
    }
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 12); // talp_simpat
    v_177 = (*qfn1(fn))(fn, v_177);
    }
    env = stack[-10];
    v_177 = ncons(v_177);
    env = stack[-10];
    stack[-3] = v_177;
    stack[-4] = v_177;
v_61:
    v_177 = stack[-5];
    v_177 = add1(v_177);
    env = stack[-10];
    stack[-5] = v_177;
    v_177 = stack[-8];
    {   LispObject fn = basic_elt(env, 5); // talp_op
    stack[0] = (*qfn1(fn))(fn, v_177);
    }
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 13); // talp_getl
    v_177 = (*qfn0(fn))(fn);
    }
    env = stack[-10];
    v_177 = Latsoc(nil, stack[0], v_177);
    if (!car_legal(v_177)) v_178 = cdrerror(v_177); else
    v_178 = cdr(v_177);
    v_177 = stack[-5];
    v_177 = difference2(v_178, v_177);
    env = stack[-10];
    v_177 = Lminusp(nil, v_177);
    env = stack[-10];
    if (v_177 == nil) goto v_96;
    v_177 = stack[-4];
    goto v_60;
v_96:
    stack[-2] = stack[-3];
    v_177 = stack[-8];
    {   LispObject fn = basic_elt(env, 5); // talp_op
    v_178 = (*qfn1(fn))(fn, v_177);
    }
    env = stack[-10];
    v_177 = stack[-5];
    {   LispObject fn = basic_elt(env, 9); // talp_getinvfsym
    v_177 = (*qfn2(fn))(fn, v_178, v_177);
    }
    env = stack[-10];
    stack[-1] = stack[-9];
    v_178 = v_177;
    v_177 = stack[-7];
    {   LispObject fn = basic_elt(env, 10); // talp_mkinv
    stack[0] = (*qfn2(fn))(fn, v_178, v_177);
    }
    env = stack[-10];
    v_177 = stack[-8];
    {   LispObject fn = basic_elt(env, 14); // talp_fargl
    v_178 = (*qfn1(fn))(fn, v_177);
    }
    env = stack[-10];
    v_177 = stack[-5];
    {   LispObject fn = basic_elt(env, 15); // nth
    v_177 = (*qfn2(fn))(fn, v_178, v_177);
    }
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 11); // talp_mk2
    v_177 = (*qfn3(fn))(fn, stack[-1], stack[0], v_177);
    }
    env = stack[-10];
    {   LispObject fn = basic_elt(env, 12); // talp_simpat
    v_177 = (*qfn1(fn))(fn, v_177);
    }
    env = stack[-10];
    v_177 = ncons(v_177);
    env = stack[-10];
    if (!car_legal(stack[-2])) rplacd_fails(stack[-2]);
    setcdr(stack[-2], v_177);
    v_177 = stack[-3];
    if (!car_legal(v_177)) v_177 = cdrerror(v_177); else
    v_177 = cdr(v_177);
    stack[-3] = v_177;
    goto v_61;
v_60:
    v_179 = v_177;
    v_177 = v_179;
    stack[-3] = v_177;
    v_177 = stack[-3];
    if (v_177 == nil) goto v_134;
    else goto v_135;
v_134:
    v_177 = nil;
    goto v_129;
v_135:
    v_177 = stack[-3];
    if (!car_legal(v_177)) v_177 = carerror(v_177); else
    v_177 = car(v_177);
    {   LispObject fn = basic_elt(env, 16); // talp_rnf1
    v_177 = (*qfn1(fn))(fn, v_177);
    }
    env = stack[-10];
    v_177 = ncons(v_177);
    env = stack[-10];
    stack[-1] = v_177;
    stack[-2] = v_177;
v_130:
    v_177 = stack[-3];
    if (!car_legal(v_177)) v_177 = cdrerror(v_177); else
    v_177 = cdr(v_177);
    stack[-3] = v_177;
    v_177 = stack[-3];
    if (v_177 == nil) goto v_148;
    else goto v_149;
v_148:
    v_177 = stack[-2];
    goto v_129;
v_149:
    stack[0] = stack[-1];
    v_177 = stack[-3];
    if (!car_legal(v_177)) v_177 = carerror(v_177); else
    v_177 = car(v_177);
    {   LispObject fn = basic_elt(env, 16); // talp_rnf1
    v_177 = (*qfn1(fn))(fn, v_177);
    }
    env = stack[-10];
    v_177 = ncons(v_177);
    env = stack[-10];
    if (!car_legal(stack[0])) rplacd_fails(stack[0]);
    setcdr(stack[0], v_177);
    v_177 = stack[-1];
    if (!car_legal(v_177)) v_177 = cdrerror(v_177); else
    v_177 = cdr(v_177);
    stack[-1] = v_177;
    goto v_130;
v_129:
    v_179 = v_177;
    v_178 = stack[-9];
    v_177 = basic_elt(env, 1); // equal
    if (v_178 == v_177) goto v_165;
    else goto v_166;
v_165:
    v_177 = basic_elt(env, 3); // and
    stack[0] = v_177;
    goto v_164;
v_166:
    v_177 = basic_elt(env, 4); // or
    stack[0] = v_177;
    goto v_164;
    stack[0] = nil;
v_164:
    v_177 = stack[-6];
    v_178 = v_179;
    v_177 = cons(v_177, v_178);
    env = stack[-10];
    {
        LispObject v_190 = stack[0];
        LispObject fn = basic_elt(env, 17); // talp_mkn
        return (*qfn2(fn))(fn, v_190, v_177);
    }
    return onevalue(v_177);
}



setup_type const u55_setup[] =
{
    {"partitindexvar",          G0W1,     CC_partitindexvar,G2W1,G3W1,  G4W1},
    {"mk-coeff1",               G0W2,     G1W2,     CC_mkKcoeff1,G3W2,  G4W2},
    {"modroots1",               G0W2,     G1W2,     CC_modroots1,G3W2,  G4W2},
    {"mkg1",                    G0W2,     G1W2,     CC_mkg1,  G3W2,     G4W2},
    {"gd_newtype",              G0W2,     G1W2,     CC_gd_newtype,G3W2, G4W2},
    {"dfmax",                   G0W3,     G1W3,     G2W3,     CC_dfmax, G4W3},
    {"uterm",                   G0W2,     G1W2,     CC_uterm, G3W2,     G4W2},
    {"talp_try3",               G0W2,     G1W2,     CC_talp_try3,G3W2,  G4W2},
    {"simpsqrt3",               G0W1,     CC_simpsqrt3,G2W1,  G3W1,     G4W1},
    {"ps:value",                G0W1,     CC_psTvalue,G2W1,   G3W1,     G4W1},
    {"setprev",                 G0W2,     G1W2,     CC_setprev,G3W2,    G4W2},
    {"gvarlis",                 G0W1,     CC_gvarlis,G2W1,    G3W1,     G4W1},
    {"xreduce1",                G0W3,     G1W3,     G2W3,     CC_xreduce1,G4W3},
    {"calc_map_tar",            G0W2,     G1W2,     CC_calc_map_tar,G3W2,G4W2},
    {"*ex2sf",                  G0W1,     CC_Hex2sf,G2W1,     G3W1,     G4W1},
    {"red_extract",             G0W1,     CC_red_extract,G2W1,G3W1,     G4W1},
    {"*hfac",                   G0W1,     CC_Hhfac, G2W1,     G3W1,     G4W1},
    {"sep_tens_from_other",     G0W1,     CC_sep_tens_from_other,G2W1,G3W1,G4W1},
    {"sqlessp",                 G0W2,     G1W2,     CC_sqlessp,G3W2,    G4W2},
    {"generate_multiindex",     G0W1,     CC_generate_multiindex,G2W1,G3W1,G4W1},
    {"sfto_mindeg1",            G0W2,     G1W2,     CC_sfto_mindeg1,G3W2,G4W2},
    {"cl_ex",                   G0W2,     G1W2,     CC_cl_ex, G3W2,     G4W2},
    {"ofsf_canegrel",           G0W2,     G1W2,     CC_ofsf_canegrel,G3W2,G4W2},
    {"get_rep_of_generator",    G0W2,     G1W2,     CC_get_rep_of_generator,G3W2,G4W2},
    {"rl_reval",                G0W2,     G1W2,     CC_rl_reval,G3W2,   G4W2},
    {"pasf_univnlp",            G0W2,     G1W2,     CC_pasf_univnlp,G3W2,G4W2},
    {"remk",                    G0W2,     G1W2,     CC_remk,  G3W2,     G4W2},
    {"irp_aex",                 G0W1,     CC_irp_aex,G2W1,    G3W1,     G4W1},
    {"mod-domainvalchk",        G0W2,     G1W2,     CC_modKdomainvalchk,G3W2,G4W2},
    {"remove_root_item",        G0W1,     CC_remove_root_item,G2W1,G3W1,G4W1},
    {"calc_map_2d",             G0W4up,   G1W4up,   G2W4up,   G3W4up,   CC_calc_map_2d},
    {"depend1",                 G0W3,     G1W3,     G2W3,     CC_depend1,G4W3},
    {"zfactor",                 G0W1,     CC_zfactor,G2W1,    G3W1,     G4W1},
    {"simprad",                 G0W2,     G1W2,     CC_simprad,G3W2,    G4W2},
    {"crn:zerop",               G0W1,     CC_crnTzerop,G2W1,  G3W1,     G4W1},
    {"imports",                 G0W1,     CC_imports,G2W1,    G3W1,     G4W1},
    {"monomispommaretdivisibleby",G0W2,   G1W2,     CC_monomispommaretdivisibleby,G3W2,G4W2},
    {"talp_raf",                G0W1,     CC_talp_raf,G2W1,   G3W1,     G4W1},
    {nullptr, 
        reinterpret_cast<no_args *>(
            reinterpret_cast<uintptr_t>("u55")),
        reinterpret_cast<one_arg *>(
            reinterpret_cast<uintptr_t>("84207 3657721 4602479")),
        nullptr, nullptr, nullptr}
};

// end of generated code
