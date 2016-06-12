// This only needs to cope with a subset of full SML sinceit will only be
// used on the TeX-in-SML code...


%{

//
// This is a "yacc" specification of the syntax of enough of SML to
// cope with the SML-TeX code...
//
// Usage:
//      sml2l source1.sml ... sourcen.sml dest.lsp
//



/**************************************************************************
 * Copyright (C) 2016, Codemist.                         A C Norman       *
 *                                                                        *
 * Redistribution and use in source and binary forms, with or without     *
 * modification, are permitted provided that the following conditions are *
 * met:                                                                   *
 *                                                                        *
 *     * Redistributions of source code must retain the relevant          *
 *       copyright notice, this list of conditions and the following      *
 *       disclaimer.                                                      *
 *     * Redistributions in binary form must reproduce the above          *
 *       copyright notice, this list of conditions and the following      *
 *       disclaimer in the documentation and/or other materials provided  *
 *       with the distribution.                                           *
 *                                                                        *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS    *
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT      *
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS      *
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE         *
 * COPYRIGHT OWNERS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,   *
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,   *
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS  *
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND *
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR  *
 * TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF     *
 * THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH   *
 * DAMAGE.                                                                *
 *************************************************************************/


#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#include <stdint.h>

intptr_t *heap;
int heapfringe = 0;

int yyparse();

FILE *inputfile, *outputfile;
FILE *filestack[30];
int filestackp = 0;


char *defined_names[20];
int n_defined_names;

static char *rights_message[] =
{
"%",
"% Copyright (C) 2016, following the original SML source files.           *",
"%                                                                        *",
"% Redistribution and use in source and binary forms, with or without     *",
"% modification, are permitted provided that the following conditions are *",
"% met:                                                                   *",
"%                                                                        *",
"%     * Redistributions of source code must retain the relevant          *",
"%       copyright notice, this list of conditions and the following      *",
"%       disclaimer.                                                      *",
"%     * Redistributions in binary form must reproduce the above          *",
"%       copyright notice, this list of conditions and the following      *",
"%       disclaimer in the documentation and/or other materials provided  *",
"%       with the distribution.                                           *",
"%                                                                        *",
"% THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS    *",
"% \"AS IS\" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT      *",
"% LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS      *",
"% FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE         *",
"% COPYRIGHT OWNERS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,   *",
"% INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,   *",
"% BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS  *",
"% OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND *",
"% ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR  *",
"% TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF     *",
"% THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH   *",
"% DAMAGE.                                                                *",
"%",
    NULL
};

int main(int argc, char *argv[])
{
    int rights = 0;
    inputfile = NULL;
    outputfile = NULL;
/*
 * If > 1 arg then final arg is destination. If only one arg then arg is
 * a source!
 */
    if (argc > 2)
    {   if (strcmp(argv[--argc], "-") == 0) outputfile = stdout;
        else outputfile = fopen(argv[argc], "w");
    }
    if (outputfile == NULL) outputfile = stdout;

    fprintf(outputfile, "\n%% SML to LISP converter. A C Norman 2016\n");
    fprintf(outputfile, "\n\n");
    heap = (intptr_t *)malloc(2000000); /* Rather arbitrary size! */
    if (argc == 1) filestack[filestackp++] = stdin;
    else while (--argc != 0)
    {   if ((inputfile = fopen(argv[argc], "r")) == NULL)
            printf("File %s not readable\n", argv[argc]);
        else filestack[filestackp++] = inputfile;
    }
    inputfile = filestack[--filestackp];
    yyparse();
    fclose(outputfile);
    printf("Finished...\n");
    return 0;
}

char *lookup_name(char *s)
{
    int i, n = strlen(s);
    for (i=0; i<n_defined_names; i++)
    {   char *w = defined_names[i];  /* name or name=value */
        if (strncmp(s, w, n) == 0 &&
            w[n] == 0 ||
            w[n] == '=') return (w[n]==0 ? "" : &w[n+1]);
    }
    return NULL;
}

char linebuffer[128];
int linep = 0;

int ch = '\n';
int linecount = 1;
int pushed_ch = -2;

int nextch()
{
    if (pushed_ch != -2)
    {   ch = pushed_ch;
        pushed_ch = -2;
        return ch;
    }
    if (ch == -1) return ch; /* end of file sticks */
    for (;;)
    {   ch = getc(inputfile);
        if (ch == -1 && filestackp != 0)
        {   inputfile = filestack[--filestackp];
            continue;
        }
        else break;
    }
    if (ch == '\n') linecount++;
    linebuffer[127 & linep++] = ch;
    return ch;
}

int peekch()
{   int save = ch;
    if (pushed_ch != -2) return pushed_ch;
    nextch();
    pushed_ch = ch;
    ch = save;
    return pushed_ch;
}

void yyerror(char *m)
{
    int q = 0;
    fprintf(stderr, "\nSyntax error (%s) around line %d\n", m, linecount);
    if (linep >= 128) q = linep-128;
    while (q != linep) fprintf(stderr, "%c", linebuffer[127 & q++]);
    fprintf(stderr, "$$$");
    while ((q = nextch()) != -1 && q != '\n') fprintf(stderr, "%c", q);
    fprintf(stderr, "\n");
    fflush(stderr);
    exit(0);
}

typedef struct keyword_code
{
    char *name;
    intptr_t code;
} keyword_code;

static keyword_code operators[];

intptr_t find_symbol(char *s)
{
    char *r = (char *)&heap[heapfringe];
    int len = strlen(s);
    strcpy(r, s);
    heapfringe += (len+4)/4;
    return (intptr_t)(r+1);
}

static int gennum = 1000;

intptr_t genlabel()
{
    char name[32];
    sprintf(name, "lab%d", gennum++);
    return find_symbol(name);
}

intptr_t genvar()
{
    char name[32];
    sprintf(name, "var%d", gennum++);
    return find_symbol(name);
}


static intptr_t yylex();

#define C_nil ((intptr_t)0)
#define qcar(x) (((intptr_t *)(x))[0])
#define qcdr(x) (((intptr_t *)(x))[1])

intptr_t cons(intptr_t a, intptr_t b)
{
    intptr_t *r = &heap[heapfringe];
    heapfringe += 2;
    qcar(r) = a;
    qcdr(r) = b;
    return (intptr_t)r;
}

intptr_t ncons(intptr_t a)
{
    intptr_t *r = &heap[heapfringe];
    heapfringe += 2;
    qcar(r) = a;
    qcdr(r) = C_nil;
    return (intptr_t)r;
}

intptr_t list1(intptr_t a)
{
    return cons(a, C_nil);
}

intptr_t list2(intptr_t a, intptr_t b)
{
    return cons(a, cons(b, C_nil));
}

intptr_t list3(intptr_t a, intptr_t b, intptr_t c)
{
    return cons(a, cons(b, cons(c, C_nil)));
}

intptr_t list4(intptr_t a, intptr_t b, intptr_t c, intptr_t d)
{
    return cons(a, cons(b, cons(c, cons(d, C_nil))));
}

intptr_t list5(intptr_t a, intptr_t b, intptr_t c, intptr_t d, intptr_t e)
{
    return cons(a, cons(b, cons(c, cons(d, cons(e, C_nil)))));
}

intptr_t list6(intptr_t a, intptr_t b, intptr_t c, intptr_t d, intptr_t e, intptr_t f)
{
    return cons(a, cons(b, cons(c, cons(d, cons(e, cons(f, C_nil))))));
}

intptr_t list7(intptr_t a, intptr_t b, intptr_t c, intptr_t d, intptr_t e, intptr_t f, intptr_t g)
{
    return cons(a, cons(b, cons(c, cons(d,
                cons(e, cons(f, cons(g, C_nil)))))));
}

intptr_t list8(intptr_t a, intptr_t b, intptr_t c, intptr_t d, intptr_t e, intptr_t f, intptr_t g, intptr_t h)
{
    return cons(a, cons(b, cons(c, cons(d,
                cons(e, cons(f, cons(g, cons(h, C_nil))))))));
}

intptr_t list9(intptr_t a, intptr_t b, intptr_t c, intptr_t d, intptr_t e, intptr_t f, intptr_t g, intptr_t h, intptr_t i)
{
    return cons(a, cons(b, cons(c, cons(d,
                cons(e, cons(f, cons(g, cons(h, cons(i, C_nil)))))))));
}

intptr_t append(intptr_t a, intptr_t b)
{
    if (a == C_nil || ((a & 1) != 0)) return b;
    else return cons(qcar(a), append(qcdr(a), b));
}

#define atom(x) ((intptr_t)(x)==0 || (((intptr_t)(x)) & 1) != 0)

int otlpos = 0;

int checkspace(int n)
{
    if (otlpos + n < 78)
    {   otlpos += n;
        return 1;
    }
    fprintf(outputfile, "\n");
    otlpos = n;
    return 0;
}

void print(intptr_t a)
{
    if (a == C_nil)
    {   checkspace(3);
        fprintf(outputfile, "nil");
        return;
    }
    else if (atom(a))
    {   char *s = ((char *)a) - 1;
        checkspace(strlen(s));
        fprintf(outputfile, "%s", s);
        return;
    }
    checkspace(1);
    fprintf(outputfile, "(");
    print(qcar(a));
    a = qcdr(a);
    while (!atom(a))
    {   if (checkspace(1)) fprintf(outputfile, " ");
        print(qcar(a));
        a = qcdr(a);
    }
    if ((intptr_t)a != 0)
    {   checkspace(2);
        fprintf(outputfile, " .");
        if (checkspace(1)) fprintf(outputfile, " ");
        print(a);
    }
    checkspace(1);
    fprintf(outputfile, ")");
}

// This was for RLISP where I wanted 'in "xxx.red";' to be spotted and
// obeyed at parse-time. In the conversion of SML I will not need to worry
// about that issue.

static void evalorprint(intptr_t a)
{
    print(a);
}


#define sym_0                                find_symbol("0")
#define sym_car                              find_symbol("car")
#define sym_cdr                              find_symbol("cdr")
#define sym_reversip                         find_symbol("reversip")
#define sym_plus                             find_symbol("plus")
#define sym_minus                            find_symbol("minus")
#define sym_minusp                           find_symbol("minusp")
#define sym_getv                             find_symbol("getv")
#define sym_difference                       find_symbol("difference")
#define sym_times                            find_symbol("times")
#define sym_quotient                         find_symbol("quotient")
#define sym_expt                             find_symbol("expt")
#define sym_cons                             find_symbol("cons")
#define sym_list                             find_symbol("list")
#define sym_progn                            find_symbol("progn")
#define sym_prog                             find_symbol("prog")
#define sym_de                               find_symbol("de")
#define sym_dm                               find_symbol("dm")
#define sym_ds                               find_symbol("ds")
#define sym_greaterp                         find_symbol("greaterp")
#define sym_lessp                            find_symbol("lessp")
#define sym_equal                            find_symbol("equal")
#define sym_setq                             find_symbol("setq")
#define sym_and                              find_symbol("and")
#define sym_or                               find_symbol("or")
#define sym_not                              find_symbol("not")
#define sym_member                           find_symbol("member")
#define sym_memq                             find_symbol("memq")
#define sym_neq                              find_symbol("neq")
#define sym_eq                               find_symbol("eq")
#define sym_geq                              find_symbol("geq")
#define sym_leq                              find_symbol("leq")
#define sym_freeof                           find_symbol("freeof")
#define sym_symbolic                         find_symbol("symbolic")
#define sym_algebraic                        find_symbol("algebraic")
#define sym_expr                             find_symbol("expr")
#define sym_macro                            find_symbol("macro")
#define sym_smacro                           find_symbol("smacro")
#define sym_procedure                        find_symbol("procedure")
#define sym_for                              find_symbol("for")
#define sym_step                             find_symbol("step")
#define sym_until                            find_symbol("until")
#define sym_each                             find_symbol("each")
#define sym_foreach                          find_symbol("foreach")
#define sym_in                               find_symbol("in")
#define sym_on                               find_symbol("on")
#define sym_do                               find_symbol("do")
#define sym_collect                          find_symbol("collect")
#define sym_sum                              find_symbol("sum")
#define sym_if                               find_symbol("if")
#define sym_then                             find_symbol("then")
#define sym_else                             find_symbol("else")
#define sym_cond                             find_symbol("cond")
#define sym_repeat                           find_symbol("repeat")
#define sym_while                            find_symbol("while")
#define sym_begin                            find_symbol("begin")
#define sym_end                              find_symbol("end")
#define sym_lsect                            find_symbol("<<")
#define sym_rsect                            find_symbol(">>")
#define sym_go                               find_symbol("go")
#define sym_to                               find_symbol("to")
#define sym_t                                find_symbol("t")
#define sym_goto                             find_symbol("goto")
#define sym_scalar                           find_symbol("scalar")
#define sym_integer                          find_symbol("integer")
#define sym_lambda                           find_symbol("lambda")
#define sym_symbol                           find_symbol("symbol")
#define sym_number                           find_symbol("number")
#define sym_string                           find_symbol("string")
#define sym_quoted                           find_symbol("quoted")
#define sym_return                           find_symbol("return")
#define sym_where                            find_symbol("where")
#define sym_rlistat                          find_symbol("rlistat")
#define sym_endstat                          find_symbol("endstat")
#define sym_null                             find_symbol("null")

intptr_t make_where(intptr_t body, intptr_t var, intptr_t val)
{
    return list2(
       list3(sym_lambda, list1(var), body),
       val);
}

intptr_t make_in_do(intptr_t var, intptr_t input, intptr_t body)
{
    intptr_t lab1 = genlabel();
    intptr_t var1 = genvar();
    return list8(sym_prog, list1(var1),
        list3(sym_setq, var1, input),
    lab1,
        list2(sym_cond,
            list2(list2(sym_null, var1),
                  list2(sym_return, C_nil))),
        list4(sym_prog, list1(var), list3(sym_setq, var, list2(sym_car, var1)), body),
        list3(sym_setq, var1, list2(sym_cdr, var1)),
        list2(sym_go, lab1));
}

intptr_t make_on_do(intptr_t var, intptr_t input, intptr_t body)
{
    intptr_t lab1 = genlabel();
    return list8(sym_prog, list1(var),
        list3(sym_setq, var, input),
    lab1,
        list2(sym_cond, 
            list2(list2(sym_null, var),
                  list2(sym_return, C_nil))),
        body,
        list3(sym_setq, var, list2(sym_cdr, var)),
        list2(sym_go, lab1));
}

intptr_t make_in_collect(intptr_t var, intptr_t input, intptr_t body)
{
    intptr_t lab1 = genlabel();
    intptr_t var1 = genvar();
    intptr_t var2 = genvar();
    return list8(sym_prog, list2(var1, var2),
        list3(sym_setq, var1, input),
    lab1,
        list2(sym_cond,
            list2(list2(sym_null, var1), 
                  list2(sym_return, list2(sym_reversip, var2)))),
        list4(sym_prog, list1(var),
            list3(sym_setq, var, list2(sym_car, var1)),
            list3(sym_setq, var2, list3(sym_cons, body, var2))),
        list3(sym_setq, var1, list2(sym_cdr, var1)),
        list2(sym_go, lab1));
}

intptr_t make_on_collect(intptr_t var, intptr_t input, intptr_t body)
{
    intptr_t lab1 = genlabel();
    intptr_t var2 = genvar();
    return list8(sym_prog, list1(var),
        list3(sym_setq, var, input),
    lab1,
        list2(sym_cond,
            list2(list2(sym_null, var), 
                  list2(sym_return, list2(sym_reversip, var2)))),
        list3(sym_setq, var2, list3(sym_cons, body, var2)),
        list3(sym_setq, var, list2(sym_cdr, var)),
        list2(sym_go, lab1));
}

intptr_t make_in_sum(intptr_t var, intptr_t input, intptr_t body)
{
    intptr_t lab1 = genlabel();
    intptr_t var1 = genvar();
    intptr_t var2 = genvar();
    return list9(sym_prog, list2(var1, var2),
        list3(sym_setq, var1, input),
        list3(sym_setq, var2, sym_0),
    lab1,
        list2(sym_cond,
            list2(list2(sym_null, var1), 
                  list2(sym_return, var2))),
        list4(sym_prog, list1(var),
            list3(sym_setq, var, list2(sym_car, var1)),
            list3(sym_setq, var2, list3(sym_plus, body, var2))),
        list3(sym_setq, var1, list2(sym_cdr, var1)),
        list2(sym_go, lab1));
}

intptr_t make_foreach(intptr_t var, intptr_t type, intptr_t input, intptr_t action, intptr_t body)
{
    intptr_t inon = 0, docollect = 0;
    if (strcmp((char *)type-1, "on") == 0) inon = 1;
    if (strcmp((char *)action-1, "collect") == 0) docollect = 1;
    else if (strcmp((char *)action-1, "sum") == 0) docollect = 2;
    switch (inon+2*docollect)
    {
case 0: /* in/do */
        return make_in_do(var, input, body);
case 1: /* on/do */
        return make_on_do(var, input, body);
case 2: /* in/collect */
        return make_in_collect(var, input, body);
case 3: /* on/collect */
        return make_on_collect(var, input, body);
case 4: /* in/sum */
        return make_in_sum(var, input, body);
case 5: /* on/sum WHICH CAN NOT MAKE SENSE */
default:
        return C_nil;
   }
}

intptr_t for_do(intptr_t var, intptr_t init, intptr_t step, intptr_t end, intptr_t body)
{
    intptr_t lab1 = genlabel();
    return list8(sym_prog, list1(var),
        list3(sym_setq, var, init),
    lab1,
        list2(sym_cond,
            list2(list2(sym_minusp,
                        list3(sym_times, step,
                        list3(sym_difference, end, var))),
                  list2(sym_return, C_nil))),
        body,
        list3(sym_setq, var, list3(sym_plus, var, step)),
        list2(sym_go, lab1));
}

intptr_t for_collect(intptr_t var, intptr_t init, intptr_t step, intptr_t end, intptr_t body)
{
    intptr_t lab1 = genlabel();
    intptr_t var1 = genvar();
    return list8(sym_prog, list2(var, var1),
        list3(sym_setq, var, init),
    lab1,
        list2(sym_cond,
            list2(list2(sym_minusp,
                        list3(sym_times, step,
                        list3(sym_difference, end, var))),
                  list2(sym_return, list2(sym_reversip, var1)))),
        list3(sym_setq, var1, list3(sym_cons, body, var1)),
        list3(sym_setq, var, list3(sym_plus, var, step)),
        list2(sym_go, lab1));
}

intptr_t for_sum(intptr_t var, intptr_t init, intptr_t step, intptr_t end, intptr_t body)
{
    intptr_t lab1 = genlabel();
    intptr_t var1 = genvar();
    return list9(sym_prog, list2(var, var1),
        list3(sym_setq, var, init),
        list3(sym_setq, var1, sym_0),
    lab1,
        list2(sym_cond,
            list2(list2(sym_minusp,
                        list3(sym_times, step,
                              list3(sym_difference, end, var))),
                  list2(sym_return, var1))),
        list3(sym_setq, var1, list3(sym_plus, body, var1)),
        list3(sym_setq, var, list3(sym_plus, var, step)),
        list2(sym_go, lab1));
}

intptr_t make_for(intptr_t var, intptr_t init, intptr_t step, intptr_t end, intptr_t action, intptr_t body)
{
    intptr_t docollect = 0;
    if (strcmp((char *)action-1, "collect") == 0) docollect = 1;
    else if (strcmp((char *)action-1, "sum") == 0) docollect = 2;
    switch (docollect)
    {
case 0: /* do */
        return for_do(var, init, step, end, body);
case 1: /* collect */
        return for_collect(var, init, step, end, body);
case 2: /* sum */
        return for_sum(var, init, step, end, body);
default:
        return C_nil;
    }
}

intptr_t lex_eof = 0;

%}

%union
{
    intptr_t LO;
}

%token <LO>     ENDFILE
%token <LO>     ANDALSO
%token <LO>     ORELSE
%token <LO>     AND
%token <LO>     NEGATE
%token <LO>     PLING
%token <LO>     ASSIGN
%token <LO>     NOT
%token <LO>     NEQ
%token <LO>     EQ
%token <LO>     GEQ
%token <LO>     LEQ
%token <LO>     LET
%token <LO>     IN
%token <LO>     END
%token <LO>     FN
%token <LO>     FUN
%token <LO>     VAL
%token <LO>     GOESTO
%token <LO>     IF
%token <LO>     THEN
%token <LO>     ELSE
%token <LO>     SYMBOL
%token <LO>     NUMBER
%token <LO>     STRING
%%

/*
 * The grammar here is ambiguous or delicate in several areas:
 * (a) It has the standard "dangling else" problem.
 */

wholefile       :  ENDFILE              {  
    fprintf(outputfile, "\n%% end of file\n");
    exit(0);
                                        }
                |  command wholefile

command                :  cmnd                        { evalorprint($<LO>1); 
                                          fprintf(outputfile, "\n\n");
                                          otlpos = 0;
                                          heapfringe = 0;
                                        }
                |  expr
                |  ';'
                ;

sep                :  ';'
                |
                ;


sym_list        :  ')'                        { $<LO>$ = C_nil; }
                |  ',' SYMBOL sym_list        { $<LO>$ = cons($<LO>2, $<LO>3); }
                ;
infix                :  ASSIGN                        { $<LO>$ = sym_setq; }
                |  ORELSE                        { $<LO>$ = sym_or; }
                |  ANDALSO                        { $<LO>$ = sym_and; }
                |  '='                        { $<LO>$ = sym_equal; }
                |  NEQ                        { $<LO>$ = sym_neq; }
                |  EQ                        { $<LO>$ = sym_eq; }
                |  GEQ                        { $<LO>$ = sym_geq; }
                |  '>'                        { $<LO>$ = sym_greaterp; }
                |  LEQ                        { $<LO>$ = sym_leq; }
                |  '<'                        { $<LO>$ = sym_lessp; }
                |  '+'                        { $<LO>$ = sym_plus; }
                |  '-'                        { $<LO>$ = sym_difference; }
                |  '*'                        { $<LO>$ = sym_times; }
                |  '/'                        { $<LO>$ = sym_quotient; }
                |  '^'                        { $<LO>$ = sym_expt; }
                |  '.'                        { $<LO>$ = sym_cons; }
                ;

prefix                :  NOT                        { $<LO>$ = sym_not; }
                |  '+'                        { $<LO>$ = sym_plus; }
                |  '~'                        { $<LO>$ = sym_minus; }
                ;

proc_head        :  SYMBOL                { $<LO>$ = cons($<LO>1, C_nil); }
                |  SYMBOL SYMBOL        { $<LO>$ = list2($<LO>1, $<LO>2); }
                |  SYMBOL '(' ')'        { $<LO>$ = cons($<LO>1, C_nil); }
                |  SYMBOL '(' SYMBOL sym_list
                                        { $<LO>$ = cons($<LO>1, cons($<LO>3, $<LO>4)); }
                ;

proc_def        :  FUN proc_head '=' cmnd
                                        { $<LO>$ = list4(sym_de, qcar($<LO>2), qcdr($<LO>2), $<LO>4); }
                ;

cmnd                :  expr
                ;

/*
 * As written here the grammar exhibits the traditional "dangling else"
 * ambiguity.  This must be resolved as SHIFT rather than REDUCE for
 * the proper results to emerge.
 */

if_stmt                :  IF expr THEN cmnd ELSE cmnd
                                        { $<LO>$ = list3(sym_cond, 
                                                       list2($<LO>2, $<LO>4),
                                                       list2(sym_t, $<LO>6)); }
                ;

/*
 * In what follows rx0 is an expression which MUST end if a key-command,
 * while lx0 is an expression which MUST NOT.
 */

expr                :  rx0
                |  lx0
                ;

rx0                :  rx1
                ;

lx0                :  lx1
                ;

rx1                :  lx2 ASSIGN rx1                { $<LO>$ = list3(sym_setq, $<LO>1, $<LO>3); }
                |  rx2
                ;

lx1                :  lx2 ASSIGN lx1                { $<LO>$ = list3(sym_setq, $<LO>1, $<LO>3); }
                |  lx2
                ;

rx2tail                :  rx3                        { $<LO>$ = ncons($<LO>1); }
                |  lx3 ORELSE rx2tail        { $<LO>$ = cons($<LO>1, $<LO>3); }

rx2                :  lx3 ORELSE rx2tail        { $<LO>$ = cons(sym_or, cons($<LO>1, $<LO>3)); }
                |  rx3
                ;

lx2tail                :  lx3                        { $<LO>$ = ncons($<LO>1); }
                |  lx3 ORELSE lx2tail        { $<LO>$ = cons($<LO>1, $<LO>3); }

lx2                :  lx3 ORELSE lx2tail        { $<LO>$ = cons(sym_or, cons($<LO>1, $<LO>3)); }
                |  lx3
                ;

rx3tail                :  rx4                        { $<LO>$ = ncons($<LO>1); }
                |  lx4 ANDALSO rx3tail        { $<LO>$ = cons($<LO>1, $<LO>3); }

rx3                :  lx4 ANDALSO rx3tail        { $<LO>$ = cons(sym_and, cons($<LO>1, $<LO>3)); }
                |  rx4
                ;

lx3tail                :  lx4                        { $<LO>$ = ncons($<LO>1); }
                |  lx4 AND lx3tail        { $<LO>$ = cons($<LO>1, $<LO>3); }

lx3                :  lx4 AND lx3tail        { $<LO>$ = cons(sym_and, cons($<LO>1, $<LO>3)); }
                |  lx4
                ;

rx4                :  NOT rx4                { $<LO>$ = list2(sym_not, $<LO>2); }
                |  rx5
                ;

lx4                :  NOT lx4                { $<LO>$ = list2(sym_not, $<LO>2); }
                |  lx5
                ;

rx5                :  lx6 '=' ry6                { $<LO>$ = list3(sym_equal, $<LO>1, $<LO>3); }
                |  lx6 NEQ ry6                { $<LO>$ = list3(sym_neq, $<LO>1, $<LO>3); }
                |  lx6 EQ ry6                { $<LO>$ = list3(sym_eq, $<LO>1, $<LO>3); }
                |  lx6 GEQ ry6                { $<LO>$ = list3(sym_geq, $<LO>1, $<LO>3); }
                |  lx6 '>' ry6                { $<LO>$ = list3(sym_greaterp, $<LO>1, $<LO>3); }
                |  lx6 LEQ ry6                { $<LO>$ = list3(sym_leq, $<LO>1, $<LO>3); }
                |  lx6 '<' ry6                { $<LO>$ = list3(sym_lessp, $<LO>1, $<LO>3); }
                |  rx6
                ;

lx5                :  lx6 '=' ly6                { $<LO>$ = list3(sym_equal, $<LO>1, $<LO>3); }
                |  lx6 NEQ ly6                { $<LO>$ = list3(sym_neq, $<LO>1, $<LO>3); }
                |  lx6 EQ ly6                { $<LO>$ = list3(sym_eq, $<LO>1, $<LO>3); }
                |  lx6 GEQ ly6                { $<LO>$ = list3(sym_geq, $<LO>1, $<LO>3); }
                |  lx6 '>' ly6                { $<LO>$ = list3(sym_greaterp, $<LO>1, $<LO>3); }
                |  lx6 LEQ ly6                { $<LO>$ = list3(sym_leq, $<LO>1, $<LO>3); }
                |  lx6 '<' ly6                { $<LO>$ = list3(sym_lessp, $<LO>1, $<LO>3); }
                |  lx6
                ;

ry6                :  NOT ry6                { $<LO>$ = list2(sym_not, $<LO>2); }
                |  rx6
                ;

ly6                :  NOT ly6                { $<LO>$ = list2(sym_not, $<LO>2); }
                |  lx6
                ;

rx6tail                :  ry6a                        { $<LO>$ = ncons($<LO>1); }
                |  ly6a '+' rx6tail        { $<LO>$ = cons($<LO>1, $<LO>3); }

rx6                :  lx6a '+' rx6tail        { $<LO>$ = cons(sym_plus, cons($<LO>1, $<LO>3)); }
                |  rx6a
                ;

lx6tail                :  ly6a                        { $<LO>$ = ncons($<LO>1); }
                |  ly6a '+' lx6tail        { $<LO>$ = cons($<LO>1, $<LO>3); }

lx6                :  lx6a '+' lx6tail        { $<LO>$ = cons(sym_plus, cons($<LO>1, $<LO>3)); }
                |  lx6a
                ;

ry6a                :  NOT ry6a                { $<LO>$ = list2(sym_not, $<LO>2); }
                |  rx6a
                ;

rx6a                :  lx6a '-' ry7                { $<LO>$ = list3(sym_difference, $<LO>1, $<LO>3); }
                |  rx7
                ;

ly6a                :  NOT ly6a                { $<LO>$ = list2(sym_not, $<LO>2); }
                |  lx6a
                ;

lx6a                :  lx6a '-' ly7                { $<LO>$ = list3(sym_difference, $<LO>1, $<LO>3); }
                |  lx7
                ;

ry7                :  NOT ry7                { $<LO>$ = list2(sym_not, $<LO>2); }
                |  rx7
                ;

rx7                :  '+' ry7                { $<LO>$ = $<LO>2; }
                |  '-' ry7                { $<LO>$ = list2(sym_minus, $<LO>2); }
                |  rx8
                ;

ly7                :  NOT ly7                { $<LO>$ = list2(sym_not, $<LO>2); }
                |  lx7
                ;

lx7                :  '+' ly7                { $<LO>$ = $<LO>2; }
                |  '-' ly7                { $<LO>$ = list2(sym_minus, $<LO>2); }
                |  lx8
                ;

rx8tail                :  ry9                        { $<LO>$ = ncons($<LO>1); }
                |  ly9 '*' rx8tail        { $<LO>$ = cons($<LO>1, $<LO>3); }

rx8                :  lx9 '*' rx8tail        { $<LO>$ = cons(sym_times, cons($<LO>1, $<LO>3)); }
                |  rx9
                ;

lx8tail                :  ly9                        { $<LO>$ = ncons($<LO>1); }
                |  ly9 '*' lx8tail        { $<LO>$ = cons($<LO>1, $<LO>3); }

lx8                :  lx9 '*' lx8tail        { $<LO>$ = cons(sym_times, cons($<LO>1, $<LO>3)); }
                |  lx9
                ;

ry9                :  NOT ry9                { $<LO>$ = list2(sym_not, $<LO>2); }
                |  '+' ry9              { $<LO>$ = $<LO>2; }
                |  '-' ry9              { $<LO>$ = list2(sym_minus, $<LO>2); }
                |  rx9
                ;

rx9                :  lx9 '/' ry10                { $<LO>$ = list3(sym_quotient, $<LO>1, $<LO>3); }
                |  rx10
                ;

ly9                :  NOT ly9                { $<LO>$ = list2(sym_not, $<LO>2); }
                |  '+' ly9              { $<LO>$ = $<LO>2; }
                |  '-' ly9              { $<LO>$ = list2(sym_minus, $<LO>2); }
                |  lx9
                ;

lx9                :  lx9 '/' ly10                { $<LO>$ = list3(sym_quotient, $<LO>1, $<LO>3); }
                |  lx10
                ;

ly10                :  NOT ly10                { $<LO>$ = list2(sym_not, $<LO>2); }
                |  '+' ly10                { $<LO>$ = $<LO>2; }
                |  '-' ly10                { $<LO>$ = list2(sym_minus, $<LO>2); }
                |  lx10
                ;

lx10                :  lx11 '^' ly10        { $<LO>$ = list3(sym_expt, $<LO>1, $<LO>3); }
                |  lx11
                ;

ry10                :  NOT ry10                { $<LO>$ = list2(sym_not, $<LO>2); }
                |  '+' ry10                { $<LO>$ = $<LO>2; }
                |  '-' ry10                { $<LO>$ = list2(sym_minus, $<LO>2); }
                |  rx10
                ;

rx10                :  lx11 '^' ry10        { $<LO>$ = list3(sym_expt, $<LO>1, $<LO>3); }
                |  rx11
                ;

ry11                :  NOT ry11                { $<LO>$ = list2(sym_not, $<LO>2); }
                |  '+' ry11                { $<LO>$ = $<LO>2; }
                |  '-' ry11                { $<LO>$ = list2(sym_minus, $<LO>2); }
                |  rx11
                ;

rx11                :  x12 '.' ry11                { $<LO>$ = list3(sym_cons, $<LO>1, $<LO>3); }
                |  if_stmt
                |  proc_def
                ;

ly11                :  NOT ly11                { $<LO>$ = list2(sym_not, $<LO>2); }
                |  '+' ly11                { $<LO>$ = $<LO>2; }
                |  '-' ly11                { $<LO>$ = list2(sym_minus, $<LO>2); }
                |  lx11
                ;

lx11                :  x12 '.' ly11                { $<LO>$ = list3(sym_cons, $<LO>1, $<LO>3); }
                |  x12
                ;

arg_list        :  ')'                        { $<LO>$ = C_nil; }
                |  '}'                        { $<LO>$ = C_nil; }
                |  ',' expr arg_list        { $<LO>$ = cons($<LO>2, $<LO>3); }
                ;

parened         :  '(' expr ')'                { $<LO>$ = $<LO>2; }
                ;

commaparened    :  '(' expr ',' expr arg_list { $<LO>$ = cons($<LO>2, cons($<LO>4,$<LO>5)); }
                ;

x12notparened        :  x13b '[' expr ']'        { $<LO>$ = list3(sym_getv, $<LO>1, $<LO>3); }
                |  x13b '(' ')'         { $<LO>$ = cons($<LO>1, C_nil); }
                |  x13b parened            { $<LO>$ = cons($<LO>1, cons($<LO>2, C_nil)); }
                |  x13b commaparened           { $<LO>$ = cons($<LO>1, $<LO>2); }
                |  x13b x12notparened        { $<LO>$ = list2($<LO>1, $<LO>2); }
                |  x13b
                ;

x12             :  x12notparened        { $<LO>$ = $<LO>1; }
                |  parened                { $<LO>$ = $<LO>1; }
                |  '{' '}'                { $<LO>$ = C_nil; }
                |  '{' expr arg_list        { $<LO>$ = cons(sym_list, cons($<LO>2, $<LO>3)); }
                |  ORELSE commaparened        { $<LO>$ = cons(sym_or, $<LO>2); }
                |  ANDALSO commaparened        { $<LO>$ = cons(sym_and, $<LO>2); }
                |  NEQ commaparened        { $<LO>$ = cons(sym_neq, $<LO>2); }
                |  EQ commaparened        { $<LO>$ = cons(sym_eq, $<LO>2); }
                |  GEQ commaparened        { $<LO>$ = cons(sym_geq, $<LO>2); }
                |  LEQ commaparened        { $<LO>$ = cons(sym_leq, $<LO>2); }
                ;

x13b            :  SYMBOL
                |  NUMBER
                |  STRING
                |  '#' STRING
                ;



%%


static keyword_code operators[] =
    {
       {"plus",                -1},
       {"minus",               -1},
       {"getv",                -1},
       {"difference",          -1},
       {"times",               -1},
       {"quotient",            -1},
       {"expt",                -1},
       {"cons",                -1},
       {"list",                -1},
       {"progn",               -1},
       {"prog",                -1},
       {"de",                  -1},
       {"dm",                  -1},
       {"ds",                  -1},
       {"greaterp",            -1},
       {"lessp",               -1},
       {"equal",               -1},
       {"andalso",             ANDALSO},
       {"orelse",              ORELSE},
       {"and",                 AND},
       {"!",                   PLING},
       {":=",                  ASSIGN},
       {"!=",                  NEQ},
       {">=",                  GEQ},
       {"<=",                  LEQ},
       {"let",                 LET},
       {"in",                  IN},
       {"end",                 END},
       {"fn",                  FN},
       {"=>",                  GOESTO},
       {"fun",                 FUN},
       {"val",                 VAL},
       {"if",                  IF},
       {"then",                THEN},
       {"else",                ELSE},
       {":symbol",             SYMBOL},
       {":string",             STRING},
       {NULL,                  0}
    };

int skipcomment()
{
    if (ch == '(' && peekch() == '*')
    {   nextch(); // gets the "*"
        nextch();
        while (ch != '*' && ch != -1 && peekch() != ')') nextch();
        nextch();  // gets the ')'
        return 1;
    }
    else return 0;
}

static int opchar(int ch)
{
    if (ch < 0 || ch >= 128) return 0;
    char *p = "#?+*/\\=<>&%@!,:;_|~-";
    while (*p != 0)
    {   if (ch == *p) return 1;
        p++;
    }
    return 0;
} 

static intptr_t yylex()
{
    char buffer[1000];
    int bp, num;
    intptr_t r;
restart_lex:
    bp = 0;
    num = 0;
    while (isspace(ch) || skipcomment()) nextch();
    if (ch == -1) return ENDFILE;
    num = isdigit(ch);
// For SML I take the view that tokens consist of some of
//    letters
//    digits
//    _
//    .
///   '
// So this counts things like TextIO.close, 'a, name',  _ and so on as
// single tokens. I will labale the item as a number if it starts with a
// digit, and that means that various silly strings like 1_.''3 would be
// lexed as a single item. But I rather expect not to encounter silly
// cases. I will not deal with floating point values in scientific form
// if they have embedded signs, as in 1.0e-3.
    while (isalpha(ch) || isdigit(ch) || ch == '_' ||
           ch == '\'' || ch == '.')
    {   buffer[bp++] = ch;
        nextch();
    }
    buffer[bp] = 0;
    if (bp != 0)
    {   int k;
        for (k=0;;k++)
        {   char *n = operators[k].name;
            int v = operators[k].code;
            if (n == NULL) break;
            if (v < 0) continue;
// I have a list of known keywords and will treat each of those specially...
            if (strcmp(n, buffer) == 0) return v;
        }
        yylval.LO = find_symbol((char *)buffer);
        return num ? NUMBER : SYMBOL;
    }
// The treatment of strings here probably implements the RLISP convention
// that a doubled (") within a string stands for a single instance of that
// character, while SML used (\) for escaping there. But the code I need to
// process does not have any complicated strings in it so I do not need to
// worry.
    if (ch == '"')
    {   for (;;)
        {   buffer[bp++] = ch;
            while (nextch() != '"' && ch != EOF && ch != '\n')
                buffer[bp++] = ch;
            buffer[bp++] = ch;
            if (nextch() != '"') break;
        }
        buffer[bp] = 0;
        yylval.LO = find_symbol((char *)buffer);
        return STRING;
    }
// Here I have somethng that is not starting with a letter. There are
// a few characters that must be treated as singletons. Other things end up
// as "operator-like words"... and need looking up rather as if they have been
// ordinary symbols.
// Here are the "operator" characters:  #?+*/\\=<>&%@!,:;_|~-
    r = ch;
    nextch();
    if (!opchar(r)) return r;  // E.g. "("
    buffer[bp++] = r;
    while (opchar(ch))
    {   buffer[bp++] = ch;
        nextch();
    }
    buffer[bp] = 0;
    {   int k;
        for (k=0;;k++)
        {   char *n = operators[k].name;
            int v = operators[k].code;
            if (n == NULL) break;
            if (v < 0) continue;
// I have a list of known keywords and will treat each of those specially...
            if (strcmp(n, buffer) == 0) return v;
        }
        yylval.LO = find_symbol((char *)buffer);
        return SYMBOL;
    }
}


/* end of file */
