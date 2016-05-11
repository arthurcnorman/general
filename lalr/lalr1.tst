lisp;
load_package lalr;
on comp;
in "lalr.red";
in "yylex.red";
in "yyparse.red";
in "genparser.red";
in "genparserprint.red";

lisp enable!-errorset(3,3);

in "lalr.tst";
end;
