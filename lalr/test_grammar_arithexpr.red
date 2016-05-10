on echo;
lisp;

in "lalr.red"$ in "yylex.red"$ in "yyparse.red"$ 
in "genparser.red"$ in "genparserprint.red"$

on lalr_verbose;

inline procedure id x; x;

arith_grammar := '(
  (s    ((expr "eof")    id !$1))
  (expr ((expr "+" expr) plus !$1 !$3)
        ((expr "*" expr) times !$1 !$3)
        ((expr "/" expr) quotient !$1 !$3)
        ((expr "-" expr) difference !$1 !$3)
        ((expr "^" expr) expt !$1 !$3)
        ((expr "=" expr) cond ((eq !$1 !$3) "true") (t "false"))
        (("(" expr ")")  id !$2)
        ((!:number    )))
);

arith_precedence := '(!:right "^" !:left ("*" "/") ("+" "-") !:none "=");

arith_parser := lalr_create_parser (arith_precedence, arith_grammar);



yyparse(arith_parser);
2+5*7 eof
% ^ should be 37


yyparse(arith_parser);
(2+5)*7 eof
% ^ should be 49


yyparse(arith_parser);
2+(7-4)*3^2 eof
% ^ should be 29


end;

