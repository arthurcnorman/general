% sml.red                                    Copyright A C Norman, June 2016

% **************************************************************************
% * Copyright (C) 2016, Codemist.                         A C Norman       *
% *                                                                        *
% * Redistribution and use in source and binary forms, with or without     *
% * modification, are permitted provided that the following conditions are *
% * met:                                                                   *
% *                                                                        *
% *     * Redistributions of source code must retain the relevant          *
% *       copyright notice, this list of conditions and the following      *
% *       disclaimer.                                                      *
% *     * Redistributions in binary form must reproduce the above          *
% *       copyright notice, this list of conditions and the following      *
% *       disclaimer in the documentation and/or other materials provided  *
% *       with the distribution.                                           *
% *                                                                        *
% * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS    *
% * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT      *
% * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS      *
% * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE         *
% * COPYRIGHT OWNERS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,   *
% * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,   *
% * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS  *
% * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND *
% * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR  *
% * TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF     *
% * THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE * POSSIBILITY OF SUCH *
% * DAMAGE.                                                                *
% **************************************************************************

% $Id: $

% The code here parses (a subset of) SML and generates a Lisp
% tre efrom it. If the SML code is sufficiently simple this Lisp can
% be output as Rlisp code. It may be in more restricted cases, but
% sometimes it may be feasible to generate C or C++ code instead. The
% idea for this is that SML can be used as a prototyping language where its
% flexibility and strong type-checking keep eveything safe, and via
% this code it can ba mapped onto something that will run in more restricted
% contexts.

% This is also a first serious use of the Reduce LALR parser-generator.


on echo;
load_package lalr;


lisp;

if memq('csl, lispsystem!*) then enable!-errorset(3,3);

% Some symbols must be recognized by SML as names of types... Note that
% the lexer will classify any name starting with a quote mark as stanidng
% for a type.

for each x in '(unit bool int real char string list option) do
  put(x, 'lex_is_typename, t);

prec := '(
  !:left  (!:infix9)
  !:right (!:infixr9)
  !:left  (!:infix8)
  !:right (!:infixr8)
  !:left  (!:infix7)
  !:right (!:infixr7)
  !:left  (!:infix6)
  !:right (!:infixr6)
  !:left  (!:infix5)
  !:right (!:infixr5)
  !:left  (!:infix4)
  !:right (!:infixr4)
  !:left  (!:infix3)
  !:right (!:infixr3)
  !:left  (!:infix2)
  !:right (!:infixr2)
  !:left  (!:infix1)
  !:right (!:infixr1)
  !:left  (!:infix0)
  !:right (!:infixr0)
  )$

lex_keywords '(
  "*"   "/"   "%"   "div" "mod" "+"   "-"   "::"  
  ">"   "<"   ">="  "<="  "="   "<>"  ":=");

put('!*,   'lex_code, get('!:infix7, 'lex_fixed_code))$
put('!/,   'lex_code, get('!:infix7, 'lex_fixed_code))$
put('!%,   'lex_code, get('!:infix7, 'lex_fixed_code))$
put('div,  'lex_code, get('!:infix7, 'lex_fixed_code))$
put('mod,  'lex_code, get('!:infix7, 'lex_fixed_code))$

put('!+,   'lex_code, get('!:infix6, 'lex_fixed_code))$
put('!-,   'lex_code, get('!:infix6, 'lex_fixed_code))$

put('!:!:, 'lex_code, get('!:infixr5, 'lex_fixed_code))$

put('!>,   'lex_code, get('!:infix4, 'lex_fixed_code))$
put('!<,   'lex_code, get('!:infix4, 'lex_fixed_code))$
put('!>!=, 'lex_code, get('!:infix4, 'lex_fixed_code))$
put('!<!=, 'lex_code, get('!:infix4, 'lex_fixed_code))$
put('!=,   'lex_code, get('!:infix4, 'lex_fixed_code))$
put('!<!>, 'lex_code, get('!:infix4, 'lex_fixed_code))$

put('!:!=, 'lex_code, get('!:infix3, 'lex_fixed_code))$

put('!*,   'lisp_name, 'times);
put('!/,   'lisp_name, 'quotient);
put('!%,   'lisp_name, 'remainder);
put('div,  'lisp_name, 'quotient);
put('mod,  'lisp_name, 'remainder);

put('!+,   'lisp_name, 'plus);
put('!-,   'lisp_name, 'difference);

put('!:!:, 'lisp_name, 'cons);

put('!>,   'lisp_name, 'greaterp);
put('!<,   'lisp_name, 'lessp);
put('!>!=, 'lisp_name, 'geq);
put('!<!=, 'lisp_name, 'leq);
put('!=,   'lisp_name, 'equal);
put('!<!>, 'lisp_name, 'neq);

put('!:!=, 'lisp_name, 'set);


% The grammar used here is derived from one found at
%    https://www.mpi-sws.org/~rossberg/sml.html
% A naive transliteration from there yields a grammar that has a huge
% number of ambiguities/conflicts. For instance an expression like
%        a b : 'c
% could potentially be treated either as (a (b : 'c) or ((a b) : 'c).
% Some of the issue can be sorted out by precedence rules, but to end up
% with as clear-cut behaviour as I can I am expanding the grammar rules
% somewhat.

grammar := '(

 (toplevel ((prog) !$1))

% Constants for SML should be
%     int      [~]<digits>
%              [~]0x<hexdigits>
%     float    [~]<digits>.<digits>[e[~]<digits>]
%     word     0w<digits>
%              0wx<hexdigits>
%     string   "<chars>"        may use "\" based escape sequence
%     char     #"<1-char>"

 (con    ((!:number))      % Needs int vs. float, also hex input
         (("~" !:number))
         (("#" !:string))
         ((!:string)))

 (digit  ((!:number)))

 (id     ((!:symbol)))

 (var    ((!:typename))
         ((!:typename)))

 (longid ((id) !$1)
         ((longid "." id)))

 (longvar((var) !$1)
         ((longid "." var)))

 (lab    ((id))
         ((!:number)))

 (tupletail
         ((exp ")") nil)
         ((exp "," tupletail) (cons !$1 !$3)))

 (listtail
         ((exp "]") nil)
         ((exp "," listtail) (cons !$1 !$3)))

 (seqtail
         ((exp ")") nil)
         ((exp ";" seqtail) (cons !$1 !$3)))

% Here I can have
%     x : 'a something
%     x : int * something
% and if the name something is the name of a type it is liable to form
% part of the type, while if it is not then it will be a name of a variable.
% This is an ambiguity that I believe has to be resolved by considering that
% status of the name. Consider cases
%      datatype 'a tree = ...
%      x : int tree;   (* case 1 *)
%      val x = 3;
%      val y = 8;
%      x : int * y;    (* case 2 *)
% so I do not believe that any decision that allows both "exp ::= id" and
% "typ ::= id" can be unambiguous. Oh dear.
 (exp    ((basicexp))
         ((basicexp ":" typ))
         ((exp basicexp))
% The following rule should only apply if "id" has infix status...
%        ((exp id exp) (list !$2 !$1 !$3))
% I will rely on precedence to sort out the mess of grouping within
% infix expressions.
         ((exp !:infix0 exp) (list (get !$2 'lisp_name) !$1 !$3))
         ((exp !:infix1 exp) (list (get !$2 'lisp_name) !$1 !$3))
         ((exp !:infix2 exp) (list (get !$2 'lisp_name) !$1 !$3))
         ((exp !:infix3 exp) (list (get !$2 'lisp_name) !$1 !$3))
         ((exp !:infix4 exp) (list (get !$2 'lisp_name) !$1 !$3))
         ((exp !:infix5 exp) (list (get !$2 'lisp_name) !$1 !$3))
         ((exp !:infix6 exp) (list (get !$2 'lisp_name) !$1 !$3))
         ((exp !:infix7 exp) (list (get !$2 'lisp_name) !$1 !$3))
         ((exp !:infix8 exp) (list (get !$2 'lisp_name) !$1 !$3))
         ((exp !:infix9 exp) (list (get !$2 'lisp_name) !$1 !$3))
         ((exp !:infixr0 exp) (list (get !$2 'lisp_name) !$1 !$3))
         ((exp !:infixr1 exp) (list (get !$2 'lisp_name) !$1 !$3))
         ((exp !:infixr2 exp) (list (get !$2 'lisp_name) !$1 !$3))
         ((exp !:infixr3 exp) (list (get !$2 'lisp_name) !$1 !$3))
         ((exp !:infixr4 exp) (list (get !$2 'lisp_name) !$1 !$3))
         ((exp !:infixr5 exp) (list (get !$2 'lisp_name) !$1 !$3))
         ((exp !:infixr6 exp) (list (get !$2 'lisp_name) !$1 !$3))
         ((exp !:infixr7 exp) (list (get !$2 'lisp_name) !$1 !$3))
         ((exp !:infixr8 exp) (list (get !$2 'lisp_name) !$1 !$3))
         ((exp !:infixr9 exp) (list (get !$2 'lisp_name) !$1 !$3))
         ((exp "handle" match))
         ((exp "andalso" exp) (list 'and !$1 !$3))
         ((exp "orelse" exp) (list 'or !$1 !$3))
         (("!" exp) (list 'pling !$2))
         (("~" exp) (list 'minus !$2))
         (("raise" exp))
         (("if" exp "then" exp "else" exp)
             (list 'cond
                (list !$2 !$4)
                (list t !$6)))
         (("while" exp "do" exp)) 
         (("case" exp "of" match))
         (("fn" match)))

% A basicexp will be an expression that self-terminates

 (basicexp ((con))
         ((longid))
         (("op" longid))
%        ((exp ":" typ))
         (("(" exp ")") !$2)
         (("(" exp "," tupletail))
         (("{" "}"))
         (("{" exprow "}"))
         (("#" lab))
         (("[" "]") 'empty_list)
         (("[" exp "]") (list 'list !$2))
         (("[" exp "," listtail))
         (("(" exp ";" seqtail))
         ((letid dec "in" exp endid))
         ((letid dec "in" exp seqexps)))

 (localid
         (("local") (startcontext)))
 (letid  (("let") (startcontext)))
 (endid  (("end") (endcontext)))

 (seqexps
         ((endid) nil)
         ((";" exp seqexps) (cons !$2 !$3)))

 (exprow ((lab "=" exp))
         ((lab "=" exp "," exprow)))

 (match  ((pat "=>" exp))
         ((pat "=>" exp "|" match)))

 (pat    ((pat1))
         ((pat1 ":" typ))
         ((!:symbol "as" pat1 ":" typ))
         (("op" !:symbol "as" pat1 ":" typ))
         ((!:symbol ":" typ "as" pat1 ":" typ))
         (("op" !:symbol ":" typ "as" pat1 ":" typ)))
 
 (pat1   ((con))
         (("_"))
         ((id))
         (("op" id))
         ((longid))
         (("op" longid))
         ((longid pat1))
         (("op" longid pat1))
%        ((pat id pat))
% The above line supports patterns that involve an arbitrary infix
% operator. I will only allow known ones. Well right now the only infix
% constructor I can think of is "::". I believe that to make this work
% fully I would want to let the lexer offer a different token class for
% infix operators. I also refuse to support type qualifiers without
% parens here, so if you want to specify types explicitly you must
% parenthesis as in
%                      (a : 'a) :: (b : 'a list)
% rather than just      a : a' :: b : 'a list
%
         ((pat1 "::" pat1))
         (("(" patseq ")"))
         (("(" ")") nil)
         (("{" patrow "}"))
         (("[" patseq "]"))
         (("[" "]") nil))

 (patseq ((pat))
         ((patseq "," pat)))

 (patrow (("..."))
         ((lab "=" pat))
         ((lab "=" pat "," patrow))
         ((id))
         ((id ":" typ))
         ((id "as" pat))
         ((id ":" typ "as" pat))
         ((id "," patrow))
         ((id ":" typ "," patrow))
         ((id "as" pat "," patrow))
         ((id ":" typ "as" pat "," patrow)))

 (typ    ((var))
         ((longvar))
         ((typ longvar))
         (("(" typ "," ttail ")" longid))
         (("(" typ ")"))
         ((typ "->" typ))
         ((typ starstuff))
         (("{" typrow "}")))

 (ttail  ((typ))
         ((typ "," ttail)))

 (starstuff (("*" typ))
            (("*" typ starstuff)))

 (typrow ((lab ":" typ))
         ((lab ":" typ "," typrow)))

 (varcomma (())
         ((var))
         (("(" var varcommatail ")")))

 (varcommatail (("," var))
         (("," var varcommatail)))

 (dec    (("val" varcomma valbind))
         (("fun" varcomma funbind))
         (("type" typbind))
         (("datatype" datbind))
         (("datatype" datbind "withtype" typbind))
         (("datatype" id "=" "datatype" longid))
         (("abstype" datbind "with" dec "end"))
         (("abstype" datbind "withtype" typbind "with" dec "end"))
         (("exception" exnbind))
%        (("structure" strbind))
%@@      ((dec ";" dec))
         ((localid dec "in" dec endid))
%        (("open" longid))   % Could have multiple longids here
         (("nonfix" id) (makeinfix !$2 0 'none))     % multiple ids
         (("infix" id) (makeinfix !$2 0 'left))
         (("infix" digit id) (makeinfix !$2 !$3 'left))
         (("infixr" id) (makeinfix !$2 0 'right))
         (("infixr" digit id) (makeinfix !$3 !$3 'right))
         )

 (valbind ((pat "=" exp))
          ((pat "=" exp "and" valbind))
          (("rec" valbind)))

 (funbind ((funmatch) (list !$1))
          ((funmatch "and" funbind) (cons !$1 !$3)))

% The explicit type ": typ" qualification here qualifies the return
% type of the whole expression. It seems that the patterns used here must
% not be ones that end in their own ": typ".

 (funmatch ((id patterns "=" exp) (list 'de !$1 !$2 !$4))
           (("op" id patterns "=" exp))
           ((id patterns ":" typ "=" exp))
           (("op" id patterns ":" typ "=" exp))
           ((id patterns "=" exp "|" funmatch))
           (("op" id patterns "=" exp "|" funmatch))
           ((id patterns ":" typ "=" exp "|" funmatch))
           (("op" id patterns ":" typ "=" exp "|" funmatch)))

 (patterns ((pat1) (list !$1))
           ((patterns pat1) (append !$1 (list !$2))))

 (maketyname
           ((id) (maketyname !$1) !$1))

 (typbind  ((varcomma maketyname "=" typ))
           ((varcomma maketyname "=" typ "and" typbind)))

 (datbind  ((varcomma id "=" conbind))
           ((varcomma id "=" conbind "and" datbind)))

 (conbind  ((id))
           ((id "of" typ))
           ((id "|" conbind))
           ((id "of" typ "|" conbind)))

 (exnbind  ((id))
           ((id "of" typ))
           ((id "|" exnbind))
           ((id "of" typ "|" exnbind))
           ((id "=" longid))
           ((id "=" longid "|" exnbind)))

% (str)
% (strbind)
% (sig)
% (typrefin)
% (spec)
% (valdesc)
% (typdesc)
% (detdesc)
% (condest)
% (exndesc)
% (strdesc)

(prog     ((dec))
          ((exp))
%         (("functor" fctbind))
%         (("signature" sigbind))
%         ((prog ";" prog))       % For now I will only allow one clause
          )

% (fctbind)
% (sigbind)
%
  )$

fluid '(lexer_context context_stack);

symbolic procedure maketyname id;
  begin
    if not zerop posn() then terpri();
    princ "@@@ Identifier "; princ id; printc " is now a type name";
    lexer_context := ('type, id, get(id, 'lex_is_typename)) . lexer_context;
    put(id, 'smltypename, t);
    return id
  end;

global '(infix_lookup);
infix_lookup := mkhash(30, 2, 1.5);

<< puthash('(0 . none), infix_lookup, get('!:symbol, 'lex_fixed_code));
   puthash('(1 . none), infix_lookup, get('!:symbol, 'lex_fixed_code));
   puthash('(2 . none), infix_lookup, get('!:symbol, 'lex_fixed_code));
   puthash('(3 . none), infix_lookup, get('!:symbol, 'lex_fixed_code));
   puthash('(4 . none), infix_lookup, get('!:symbol, 'lex_fixed_code));
   puthash('(5 . none), infix_lookup, get('!:symbol, 'lex_fixed_code));
   puthash('(6 . none), infix_lookup, get('!:symbol, 'lex_fixed_code));
   puthash('(7 . none), infix_lookup, get('!:symbol, 'lex_fixed_code));
   puthash('(8 . none), infix_lookup, get('!:symbol, 'lex_fixed_code));
   puthash('(9 . none), infix_lookup, get('!:symbol, 'lex_fixed_code));
   puthash('(0 . left), infix_lookup, get('!:infix0, 'lex_fixed_code));
   puthash('(1 . left), infix_lookup, get('!:infix1, 'lex_fixed_code));
   puthash('(2 . left), infix_lookup, get('!:infix2, 'lex_fixed_code));
   puthash('(3 . left), infix_lookup, get('!:infix3, 'lex_fixed_code));
   puthash('(4 . left), infix_lookup, get('!:infix4, 'lex_fixed_code));
   puthash('(5 . left), infix_lookup, get('!:infix5, 'lex_fixed_code));
   puthash('(6 . left), infix_lookup, get('!:infix6, 'lex_fixed_code));
   puthash('(7 . left), infix_lookup, get('!:infix7, 'lex_fixed_code));
   puthash('(8 . left), infix_lookup, get('!:infix8, 'lex_fixed_code));
   puthash('(9 . left), infix_lookup, get('!:infix9, 'lex_fixed_code));
   puthash('(0 . right), infix_lookup, get('!:infixr0, 'lex_fixed_code));
   puthash('(1 . right), infix_lookup, get('!:infixr1, 'lex_fixed_code));
   puthash('(2 . right), infix_lookup, get('!:infixr2, 'lex_fixed_code));
   puthash('(3 . right), infix_lookup, get('!:infixr3, 'lex_fixed_code));
   puthash('(4 . right), infix_lookup, get('!:infixr4, 'lex_fixed_code));
   puthash('(5 . right), infix_lookup, get('!:infixr5, 'lex_fixed_code));
   puthash('(6 . right), infix_lookup, get('!:infixr6, 'lex_fixed_code));
   puthash('(7 . right), infix_lookup, get('!:infixr7, 'lex_fixed_code));
   puthash('(8 . right), infix_lookup, get('!:infixr8, 'lex_fixed_code));
   puthash('(9 . right), infix_lookup, get('!:infixr9, 'lex_fixed_code));
   nil >>;

symbolic procedure makeinfix(id, prec, dirn);
  begin
    if not zerop posn() then terpri();
    princ "@@@ Identifier "; princ id; printc " is now an operator";
    princ prec; princ "  "; printc dirn;
    lexer_context := ('type, id, get(id, 'lex_code)) . lexer_context;
    put(id, 'lex_code, gethash(prec . dirn, infix_lookup));
    return id
  end;

symbolic procedure startcontext();
  begin
    context_stack := lexer_context . context_stack;
    lexer_context := nil;
    if not zerop posn() then terpri();
    printc "Starting a nested context";
  end;

symbolic procedure endcontext();
  begin
    if not zerop posn() then terpri();
    printc "Ending a nested context";
% I now need to unwind any local type and infix declarations...
    for each p in lexer_context do
      if eqcar(p, 'infix) then put(cadr p, 'lex_code, cddr p)
      else put(cadr p, 'lex_is_typename, cddr p);
    lexer_context := car context_stack;
    context_stack := cdr context_stack;
  end;

% While debugging it may be helpful to see the grammar diplayed with
% indentation normalised...
%
<< terpri(); prettyprint grammar; nil >>;

pp := lalr_create_parser(prec, grammar)$

lexer_style!* := lexer_style_sml;

%tr yylex, lex_basic_token, lex_token, readch, yypeek, yyreadch;
%on tracelex;

% This example is to test or illustrate support for SML comments.
<< lex_init(); yyparse pp >>;
(111 (* comment *)+(* comment (* nest *) demo *) 222);



;;

begin
   scalar r, savefile;
   lex_init();
   while (r := yyparse pp) neq 'eof do <<
     if eqcar(r, 'use) then begin
       scalar ff, a;
       ff := cadr r;
       a := open(ff, 'input);
       if null a then error(1, list("Unable to open file", ff));
       savefile := rds a;
     end
     else if lex_char = !$eof!$ then <<
       printc "End of file detected";
       rds savefile;
       lex_char := !$eol!$ >>
     else <<
       terpri();
       printc "@@@@@@@@@@@@@@@@@@";
       princ "LISP: "; prettyprint r;
       printc "##################";
       terpri() >> >>
end;

fun fact n =
  if n = 1 then 1
  else n * fact (n-1)

and g x y z = [x,y,z]

val pi = 3.14159;


(*
 This is the Dutch version of TeX Maths Layout coded in SML, adjusted so
 it only uses a subset of SML. It also has some extensions that add support
 for accents and delimiters, and the aim is that eventually it should
 cover all maths. The stuff here reads in all the source files in an order
 which is safe.
*)

use "General.sml";
use "Powers2.sml";
use "BasicTypes.sml";
use "Distance.sml";
use "Size.sml";
use "FontTypes.sml";
use "LoadFont.sml";
use "FontVector.sml";
use "CharInfo.sml";
use "CharFunctions.sml";
use "Const.sml";
use "FontParams.sml";
use "StyleParams.sml";
use "BoxTypes.sml";
use "BasicBox.sml";
use "NodeDim.sml";
use "NodeListDim.sml";
use "GlueCalculation.sml";
use "HListGlue.sml";
use "BoxPack.sml";
use "MakeVBox.sml";
use "AxisCenter.sml";
use "ChangeStyle.sml";
use "Radical.sml";
use "BasicChar.sml";
use "MakeChar.sml";
use "Accent.sml";
use "MakeLine.sml";
use "MakeAtop.sml";
use "MakeFract.sml";
use "Delimiter.sml";
use "GenFraction.sml";
use "MakeLimOp.sml";
use "MakeScripts.sml";
use "MathTypes.sml";
use "Kind.sml";
use "MathSpace.sml";
use "MathGlue.sml";
use "Spacing.sml";
use "IListTypes.sml";
use "IListDim.sml";
use "ChangeKind.sml";
use "MathPenalty.sml";
use "Boundaries.sml";
use "IListTranslate.sml";
use "MathTranslate.sml";
use "Formula.sml";
use "Out.sml";
use "OutHigh.sml";
use "OutDvi.sml";
use "DviState.sml";
use "DviCmd.sml";
use "SetNode.sml";
use "SetBox.sml";
use "ShipOut.sml";
use "Input.sml";
use "test.sml";

(* End of everything *)



eof

;

end;

 
