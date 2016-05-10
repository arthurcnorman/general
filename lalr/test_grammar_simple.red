on echo;
lisp;

in "lalr.red"$ in "yylex.red"$ in "yyparse.red"$ 
in "genparser.red"$ in "genparserprint.red"$

on lalr_verbose;

lisp; 

simple_grammar := '(
	(s  ((cc cc)  (difference !$1 !$2))) 
	(cc (("c" cc) (add1 !$2)) 
	    (("d")    0)));

simple_parser := lalr_create_parser(nil, simple_grammar);

yyparse(simple_parser);
c c d c c d
% ^ should be 0


yyparse(simple_parser);
c c d c c 
c
c
d
% ^ should be -2



end;
