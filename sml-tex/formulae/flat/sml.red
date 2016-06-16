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

prec := '(
  !:left  ("*" "/" "%" "div" "mod")
          ("+" "-")
  !:none  (">" "<" ">=" "<=" "=" "<>")
  !:right ("::")
  )$

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

 (id     ((!:symbol)))

 (var    (("'" !:symbol))
         (("''" !:symbol)))

 (longid ((id) !$1)
         ((longid "." id)))

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

 (exp    ((basicexp))
         ((basicexp ":" typ))
         ((exp basicexp))
% The following rule should only apply if "id" has infix status...
%        ((exp id exp) (list !$2 !$1 !$3))
% I will rely on precedence to sort out the mess of grouping within
% infix expressions.
         ((exp "+" exp) (list 'plus !$1 !$3))
         ((exp "-" exp) (list 'difference !$1 !$3))
         ((exp "*" exp) (list 'times !$1 !$3))
         ((exp "/" exp) (list 'quotient !$1 !$3))
         ((exp "%" exp) (list 'remainder !$1 !$3))
         ((exp "^" exp) (list 'stringconcat !$1 !$3))
         ((exp "div" exp) (list 'quotient !$1 !$3))
         ((exp "mod" exp) (list 'remainder !$1 !$3))
         ((exp ">" exp) (list 'greaterp !$1 !$3))
         ((exp ">=" exp) (list 'geq !$1 !$3))
         ((exp "<" exp) (list 'lessp !$1 !$3))
         ((exp "<=" exp) (list 'leq !$1 !$3))
         ((exp "=" exp) (list 'equal !$1 !$3))
         ((exp "<>" exp) (list 'neq !$1 !$3))
         ((exp ":=" exp) (list 'setq !$1 !$3))
         ((exp "::" exp) (list 'cons !$1 !$3))
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
         ((exp ":" typ))
         (("(" exp ")") !$2)
         (("(" exp "," tupletail))
         (("{" "}"))
         (("{" exprow "}"))
         (("#" lab))
         (("[" "]") 'empty_list)
         (("[" exp "]") (list 'list !$2))
         (("[" exp "," listtail))
         (("(" exp ";" seqtail))
         (("let" dec "in" exp "end"))
         (("let" dec "in" exp seqexps)))

 (seqexps
         (("end") nil)
         ((";" exp seqexps) (cons !$2 !$3)))

 (exprow ((lab "=" exp))
         ((lab "=" exp "," exprow)))

 (match  ((pat "=>" exp))
         ((pat "=>" exp "|" match)))

 (pat    ((con))
         (("_"))
         ((id))
         (("op" id))
         ((longid))
         (("op" longid))
         ((longid pat))
         (("op" longid pat))
% The next line supports patterns that involve an arbitrary infix
% operator. I will only allow known ones. Well right now the only infix
% constructor I can think of is "::". I think that this grammar has
% real problems not knowing what names are tagged as "infix".
%        ((pat id pat))
         ((pat "::" pat))
         (("(" patseq ")"))
         (("(" ")"))
         (("{" patrow "}"))
         (("[" patseq "]"))
         (("[" "]"))
         ((pat ":" typ))
         ((!:symbol "as" pat))
         (("op" !:symbol "as" pat))
         ((!:symbol ":" typ "as" pat))
         (("op" !:symbol ":" typ "as" pat)))

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
         ((longid))
         ((typ longid))
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
         (("local" dec "in" dec "end"))
%        (("open" longid))   % Could have multiple longids here
%        (("nonfix" id))     % multiple ids
%        (("infix" id))
%        (("infix" digit id))
%        (("infixr" id))
%        (("infixr" digit id))
         )

 (valbind ((pat "=" exp))
          ((pat "=" exp "and" valbind))
          (("rec" valbind)))

 (funbind ((funmatch) (list !$1))
          ((funmatch "and" funbind) (cons !$1 !$3)))

 (funmatch ((id patterns "=" exp) (list 'de !$1 !$2 !$4))
           (("op" id patterns "=" exp))
           ((id patterns ":" typ "=" exp))
           (("op" id patterns ":" typ "=" exp))
           ((id patterns "=" exp "|" funmatch))
           (("op" id patterns "=" exp "|" funmatch))
           ((id patterns ":" typ "=" exp "|" funmatch))
           (("op" id patterns ":" typ "=" exp "|" funmatch)))

 (patterns ((pat) (list !$1))
           ((pat patterns) (cons !$1 !$2)))

 (typbind  ((varcomma id "=" typ))
           ((varcomma id "=" typ "and" typbind)))

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

% While debugging it may be helpful to see the grammar displayed with
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

 
