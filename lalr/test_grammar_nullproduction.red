lisp;

in "lalr.red"$ in "yylex.red"$ in "yyparse.red"$ in "genparser.red"$
in "genparserprint.red"$

nil_grammar := '(
  (s  (("a" bb "c")))
  (bb (())
      (("b")))
);

parser := lalr_create_parser (nil, nil_grammar);

end;

