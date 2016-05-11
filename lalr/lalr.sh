#! /bin/bash -v
# Script to help me test lalr parser

file=${1:-lalr}

redcsl -w -l $1.log <<XXX
on echo;
lisp;

in "lalr.red"$ in "yylex.red"$ in "yyparse.red"$ 
in "genparser.red"$ in "genparserprint.red"$

on lalr_verbose;

in "$file.tst";

end;
XXX
