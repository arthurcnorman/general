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
% tree from it. If the SML code is sufficiently simple this Lisp can
% be output as Rlisp code. It may be in more restricted cases, but
% sometimes it may be feasible to generate C or C++ code instead. The
% idea for this is that SML can be used as a prototyping language where its
% flexibility and strong type-checking keep eveything safe, and via
% this code it can ba mapped onto something that will run in more restricted
% contexts.

% This is also a first serious use of the Reduce LALR parser-generator.


on echo;
lisp;
load_package lalr;

% When running using CSL arrange that errorset can never hide backtraces.
if getd 'enable!-errorset then enable!-errorset(3,3);

%@@ % Some symbols must be recognized by SML as names of types... Note that
%@@ % the lexer will classify any name starting with a quote mark as stanidng
%@@ % for a type.
%@@ [I now believe that this will not be the case...]
%@@ for each x in '(unit bool int real char string list option) do
%@@   put(x, 'lex_is_typename, t);

prec := '(
  !:left  !:op
  !:left  (!:infix9)
  !:right (!:infixr9)
  !:left  (!:infix8)
  !:right (!:infixr8)
  !:left  (!:infix7)
  !:left  ("*")       % because * is used in types too
  !:right (!:infixr7)
  !:left  (!:infix6)
  !:right (!:infixr6)
  !:left  (!:infix5)
  !:right (!:infixr5)
  !:right ("::")
  !:left  ("=")       % because = used in many places as well as infix
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
  !:left  ":"
          "->"
          "andalso"
          "orelse"
          "handle"
          "raise"
          "else"
          "do"
          "of"
          "fn"
  )$

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
%put('!=,   'lisp_name, 'equal);
put('!<!>, 'lisp_name, 'neq);

put('!:!=, 'lisp_name, 'set);

fluid '(filestack);

symbolic procedure process u;
  begin
    scalar v;
    terpri();
    princ "Input: ";
    prettyprint u;
    if u = !$eof!$ then <<
      if null filestack then error(1, "Unexpected end of file");
      close rds car filestack;
      printc "End of file - returning to previous file";
      filestack := cdr filestack;
      lex_char := !$eol!$;
      lex_peek_char := nil >>
    else if eqcar(u, 'use) then <<
      u := cadr u;
      v := open(u, 'input);
      if null v then error(1, list("file", u, "could not be opened"));
      princ "+++ Reading from file "; print u;
      filestack := rds v . filestack >>
  end;


% The grammar used here is derived from one found at
%    https://www.mpi-sws.org/~rossberg/sml.html
% A naive transliteration from there yields a grammar that has a huge
% number of ambiguities/conflicts. For instance an expression like
%        a b : 'c
% could potentially be treated either as (a (b : 'c) or ((a b) : 'c).
% Some of the issue can be sorted out by precedence rules, but to end up
% with as clear-cut behaviour as I can I am expanding the grammar rules
% somewhat. A perhaps nastier case is
%   fun f x : a b = ...
% where consider
%   fun f1 x : (int list) = ...
%   fun f2 (x : int) y    = ...
% which are two interpretations you could imagine if the symbol b was
% the name of a (parameterised) type. ML wishes to insist that "a b" be
% type and so if the second interpretation is required then the parentheses
% are needed. But a simple way of writhing the grammar here fails to
% capture that and declares ambiguity.


% I am re-working the original grammar that I had here using information
% fron "The Definition of Standard ML (Revised)", 1997. At least that will
% be definitive! I hope it will let me get rid of syntactic ambiguity.

grammar := '(

 (toplevel ((progs "eof")))

 (progs    ((prog) (process !$1))
           ((exp) (process !$1))
           ((progs prog) (process !$2))
           ((progs !:eof) (process !$eof!$)))

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

% I have changed the lexer so that aaa.bbb.ccc lexes as a single symbol.
% that means that I do not have any concept of "long id" here. That
% may simplify some matters, but if I implemented a full module system I
% would then need to dive inside ids that happened to be long to extract
% information about them.

 (id     ((!:symbol)))

 (var    ((!:typename)))

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
% "typ ::= id" can be unambiguous. Oh dear. So to cope with this I have to
% allow the lexer to separate names that are names of types from names
% that are not.
%
% Another general source of pain. Some productions here end in exp.
% That leads to ambiguity as between for instance
%        while E do E      E
% and    while E do      E E
% where I have used spacing above to suggest the grouping. I want the
% second to apply, ie as if it has been while E do (E E). To achieve
% that I will have one rule for all the cases of E that end with another
% E.
%
%

 (atexp  ((con))
         (((opt "op") id) !$2)
% I have to do special things to cope with infix operators - and they of
% course are exactly the items most liable to be seen after the word "op".
         (("op" (or !:infix0 !:infix1 !:infix2 !:infix3 !:infix4
                    !:infix5 !:infix6 !:infix7 !:infix8 !:infix9)) !$2)
         (("op" (or !:infixr0 !:infixr1 !:infixr2 !:infixr3 !:infixr4
                    !:infixr5 !:infixr6 !:infixr7 !:infixr8 !:infixr9)) !$2)
% A very few symbols are even more special as infix operators.
         (("op" (or "*" "=" "::")) !$2)
         (("{" exprow "}"))
         (("#" lab))
         (("(" ")"))                         % Unit
         (("(" exp "," tupletail))           % A tuple
         (("[" "]") 'empty_list)             % Empty list
         (("[" exp "]") (list 'list !$2))    % List of length 1
         (("[" exp "," listtail))            % Longer list
         (("(" exp ";" seqtail))             % Sequence
         ((letid dec "in" seqexps))
         (("(" exp ")") !$2))                % Mere parentheses

(appexp  ((atexp))
         ((appexp atexp)))

 (infexp ((appexp))
         ((infexp !:infix0 infexp) (list (get !$2 'lisp_name) !$1 !$3))
         ((infexp !:infix1 infexp) (list (get !$2 'lisp_name) !$1 !$3))
         ((infexp !:infix2 infexp) (list (get !$2 'lisp_name) !$1 !$3))
         ((infexp !:infix3 infexp) (list (get !$2 'lisp_name) !$1 !$3))
         ((infexp !:infix4 infexp) (list (get !$2 'lisp_name) !$1 !$3))
         ((infexp "=" infexp) (list 'equal !$1 !$3))
         ((infexp !:infix5 infexp) (list (get !$2 'lisp_name) !$1 !$3))
         ((infexp !:infix6 infexp) (list (get !$2 'lisp_name) !$1 !$3))
         ((infexp !:infix7 infexp) (list (get !$2 'lisp_name) !$1 !$3))
         ((infexp "*" infexp) (list 'equal !$1 !$3))
         ((infexp !:infix8 infexp) (list (get !$2 'lisp_name) !$1 !$3))
         ((infexp !:infix9 infexp) (list (get !$2 'lisp_name) !$1 !$3))
         ((infexp !:infixr0 infexp) (list (get !$2 'lisp_name) !$1 !$3))
         ((infexp !:infixr1 infexp) (list (get !$2 'lisp_name) !$1 !$3))
         ((infexp !:infixr2 infexp) (list (get !$2 'lisp_name) !$1 !$3))
         ((infexp !:infixr3 infexp) (list (get !$2 'lisp_name) !$1 !$3))
         ((infexp !:infixr4 infexp) (list (get !$2 'lisp_name) !$1 !$3))
         ((infexp !:infixr5 infexp) (list (get !$2 'lisp_name) !$1 !$3))
         ((infexp "::" infexp) (list 'cons !$1 !$3))
         ((infexp !:infixr6 infexp) (list (get !$2 'lisp_name) !$1 !$3))
         ((infexp !:infixr7 infexp) (list (get !$2 'lisp_name) !$1 !$3))
         ((infexp !:infixr8 infexp) (list (get !$2 'lisp_name) !$1 !$3))
         ((infexp !:infixr9 infexp) (list (get !$2 'lisp_name) !$1 !$3))
         )


% I first look at the grammar as given in the specification, and note
% two particular messy cases which have to be reolved by a from of
% precedence.
%     if A then B else C handle ...
% must lead to a shift rather than a reduce. This case can be covered to
% giving HANDLE and ELSE precedence settings. Indeed I hope that by
% giving most of the keywords used here precedence values the apparent
% ambiguities can all be resolved.

 (exp    ((infexp))
         ((exp ":" typ))
         ((exp "andalso" exp) (list 'and !$1 !$3))
         ((exp "orelse" exp) (list 'or !$1 !$3))
         ((exp "handle" match))
         (("raise" exp))
         (("if" exp "then" exp "else" exp)
             (list 'cond
                (list !$2 !$4)
                (list t !$6)))
         (("while" exp "do" exp)) 
         (("case" exp "of" match))
         (("fn" match)))

 (localid
         (("local") (startcontext)))
 (letid  (("let") (startcontext)))
 (endid  (("end") (endcontext)))

 (seqexps
         ((exp endid) nil)
         ((exp ";" seqexps) (cons !$2 !$3)))

 (exprow ((lab "=" exp))
         ((lab "=" exp "," exprow)))

% exp ::= "fn" match
% so what about
%      fn a => fn b => c    E

 (match  ((pat "=>" exp))
         ((pat "=>" exp "|" match)))

 (pat    ((pat0))
         ((pat0 ":" typ))
         ((!:symbol "as" pat0 ":" typ))
         (("op" !:symbol "as" pat0 ":" typ))
         ((!:symbol ":" typ "as" pat0 ":" typ))
         (("op" !:symbol ":" typ "as" pat0 ":" typ)))
 
 (pat0   ((pat1))
% For now I will only use :: as an infix constructor in patterns.
% in principle any infix item might be used as a contructor and so could
% arise here, with all the joys of precedence to make life fun.
         ((pat1 "::" pat0)))

 (pat1   ((con))
         (("_"))
         ((id))
         (("op" id))
         ((id pat1))
         (("op" id pat1))
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
         ((typ var))
         (("(" typ "," ttail ")" id))
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
         (("datatype" id "=" "datatype" id))
         (("abstype" datbind "with" dec "end"))
         (("abstype" datbind "withtype" typbind "with" dec "end"))
         (("exception" exnbind))
%        (("structure" strbind))
%@@      ((dec ";" dec))
         ((localid dec "in" dec endid))
%        (("open" id))   % Could have multiple ids here
% The full syntax here would allow a sequence of opnames here. Just for now
% I will be lazy and only support one.
         (("nonfix" opname) (makeinfix !$2 0 'none))
         (("infix" opname) (makeinfix !$2 0 'left))
         (("infix" digit opname) (makeinfix !$3 !$2 'left))
         (("infixr" opname) (makeinfix !$2 0 'right))
         (("infixr" digit opname) (makeinfix !$3 !$2 'right))
         )


% The words accepted in INFIX and INFIXR directives  should probably include
% things that have already been declared with an infix property. I want
% the identifier itself as my result...
% Also all sorts of other tokens will have been given special lexer codes but
% they should still be things that COULD be made infix... So I list the ones
% that I can think of here! This is really odd in that if (say) "->" is
% a single token then in the process of that case being notes as a dipthong
% the initial "-" will also be given its own lexer code... so I need to
% list initial substrings of any multi-character dipthong here.
%
 (opname  ((id) (princ "opname: ") (print yylval))
          (("*") (princ "opname: ") (print yylval))
          (("/") (princ "opname: ") (print yylval))
          (("%") (princ "opname: ") (print yylval))
          (("+") (princ "opname: ") (print yylval))
          (("-") (princ "opname: ") (print yylval))
          (("::") (princ "opname: ") (print yylval))
          ((":") (princ "opname: ") (print yylval))
          (("=") (princ "opname: ") (print yylval))
          (("<") (princ "opname: ") (print yylval))
          (("<=") (princ "opname: ") (print yylval))
          ((">") (princ "opname: ") (print yylval))
          ((">=") (princ "opname: ") (print yylval))
          (("<>") (princ "opname: ") (print yylval))
          ((":=") (princ "opname: ") (print yylval))
          ((!:infix0) (princ "opname: ") (print yylval))
          ((!:infix1) (princ "opname: ") (print yylval))
          ((!:infix2) (princ "opname: ") (print yylval))
          ((!:infix3) (princ "opname: ") (print yylval))
          ((!:infix4) (princ "opname: ") (print yylval))
          ((!:infix5) (princ "opname: ") (print yylval))
          ((!:infix6) (princ "opname: ") (print yylval))
          ((!:infix7) (princ "opname: ") (print yylval))
          ((!:infix8) (princ "opname: ") (print yylval))
          ((!:infix9) (princ "opname: ") (print yylval))
          ((!:infixr0) (princ "opname: ") (print yylval))
          ((!:infixr1) (princ "opname: ") (print yylval))
          ((!:infixr2) (princ "opname: ") (print yylval))
          ((!:infixr3) (princ "opname: ") (print yylval))
          ((!:infixr4) (princ "opname: ") (print yylval))
          ((!:infixr5) (princ "opname: ") (print yylval))
          ((!:infixr6) (princ "opname: ") (print yylval))
          ((!:infixr7) (princ "opname: ") (print yylval))
          ((!:infixr8) (princ "opname: ") (print yylval))
          ((!:infixr9) (princ "opname: ") (print yylval)))

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
           ((id "=" id))
           ((id "=" id "|" exnbind)))

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

% The syntax that I started from did not include the possibility of an
% expression here. That sort of makes sense because consider
%   fun foo f = f
%   22;
% which could (potentially) either parse as a function definition followed
% by an expression or as a function definition with RHS "f 22". To try to
% avoid this ambiguity I am going to insist that there be (at least one)
% semicolon ahead of any expression to separate it from the previous
% input.
% This is much like the need for a semicolon if one wrote
%   1+2
%   3+4;
% to avoid that being parse as something that wanted to use 2 as a function
% applied to the argument 3. I rather hope that all declarations start with
% keywords and so the issue of where one endsd and the next starts will
% not be a severe problem.

(prog     ((dec))
          ((";" exp) !$2)
          ((";") nil)
%         (("functor" fctbind))
%         (("signature" sigbind))
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
infix_lookup := mkhash(30, 2, 1.5)$

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
    princ "@@@ Identifier "; princ id; princ " is now an operator: ";
    princ prec; princ "  "; printc dirn;
    lexer_context := list('type, id, get(id, 'lex_code)) . lexer_context;
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
% << terpri(); prettyprint grammar; nil >>;

pp := lalr_create_parser(prec, grammar)$

lexer_style!* := lexer_style_sml + 0x40; % Support #if and #eval too!

% If parsing the SML code fails I will just exit from Reduce. Otherwise
% it is likely that I will be faced with a mess of further silly messages
% as Reduce tries to make sense if SML input itself.
% I think I may need an option within lalr for parsing from a file, such
% that errors merely close that file and return to using Reduce on
% an outer file... ie so that parsed and regular Reduce stuff are kept
% more separate.

on parse_errors_fatal;

begin
   scalar !*raise, !*lower;
   lex_init();
   yyparse pp
end;

1;

use "Library_Reduce.sml";

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

if getd 'enable!-errorset then enable!-errorset(0,3);

end;

 
