on echo;
load_package lalr;

lisp;

enable!-errorset(3,3);

prec := nil;

% The grammar used here is derived from one found at
%    https://www.mpi-sws.org/~rossberg/sml.html

grammar := '(

 (toplevel ((prog ";" "eof") (progn (terpri) (print !$1))))

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

 (longid ((id) (progn (princ "Id found ") (print !$1) !$1))
         ((longid "." id)))

 (lab    ((id))
         ((!:number)))

 (tupletail
         ((")"))
         (("," exp tupletail)))

 (listail
         (("]"))
         (("," exp listail)))

 (seqtail
         ((")"))
         ((";" exp seqtail)))

 (seqexps
         (())
         ((";" exp seqexps)))

 (exp    ((con)    (progn (princ "Parsed constant") (print !$1)))
         ((longid))
         (("op" longid))
         ((exp exp))
         (("!" exp) (list 'pling !$2))
         (("+" exp) !$2)
         (("~" exp) (list 'minus !$2))
         ((exp id exp) (list !$2 !$1 !$3))
         ((exp "+" exp) (progn (printc "sum spotted") (list 'plus !$1 !$3)))
         ((exp "-" exp) (progn (printc "difference spotted") (list 'difference !$1 !$3)))
         ((exp "*" exp) (progn (printc "product spotted") (list 'times !$1 !$3)))
         ((exp "/" exp) (progn (printc "quotient spotted") (list 'quotient !$1 !$3)))
         ((exp "%" exp) (progn (printc "remainder spotted") (list 'remainder !$1 !$3)))
         ((exp "^" exp) (list 'stringconcat !$1 !$3))
         ((exp "div" exp) (progn (printc "quotient spotted") (list 'quotient !$1 !$3)))
         ((exp "mod" exp) (progn (printc "remainder spotted") (list 'remainder !$1 !$3)))
         ((exp ">" exp) (list 'greaterp !$1 !$3))
         ((exp ">=" exp) (list 'geq !$1 !$3))
         ((exp "<" exp) (list 'lessp !$1 !$3))
         ((exp "<=" exp) (list 'leq !$1 !$3))
         ((exp "=" exp) (list 'equal !$1 !$3))
         ((exp "<>" exp) (list 'neq !$1 !$3))
         ((exp ":=" exp) (list 'setq !$1 !$3))
         (("(" exp tupletail))
         (("{" "}"))
         (("{" exprow "}"))
         (("#" lab))
         (("[" "]"))
         (("[" exp listail))
         (("(" exp ";" exp seqtail))
         (("let" dec "in" exp seqexps "end"))
         ((exp ":" type))
         (("raise" exp))
         ((exp "handle" match))
         ((exp "andalso" exp))
         ((exp "orelse" exp))
         (("if" exp "then" exp "else" exp))
         (("while" exp "do" exp))
         (("case" exp "of" match))
         (("fn" match)))

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
         ((pat id pat))
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

 (starstuff (())
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

 (funbind ((funmatch))
          ((funmatch "and" funbind)))

 (funmatch ((id patterns "=" exp) (progn (print !$1) (print !$2) (print !$4)
             (list 'de !$1 !$2 !$4)))
           (("op" id patterns "=" exp))
           ((id patterns ":" typ "=" exp))
           (("op" id patterns ":" typ "=" exp))
           ((id patterns "=" exp "|" funmatch))
           (("op" id patterns "=" exp "|" funmatch))
           ((id patterns ":" typ "=" exp "|" funmatch))
           (("op" id patterns ":" typ "=" exp "|" funmatch)))

 (patterns ((pat))
           ((patterns pat)))

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

<< terpri(); prettyprint grammar; nil >>;

pp := lalr_create_parser(prec, grammar)$

tr yylex;

<< lex_init(); yyparse pp >>;

1+2;
eof


;;;;;

<< lex_init(); yyparse pp >>;

fun fact n =
  if n = 1 then 1
  else n * fact (n-1);

eof

;

end;

 
