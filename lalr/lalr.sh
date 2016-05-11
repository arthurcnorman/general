#! /bin/bash -v
# Script to help me test lalr parser

file=${1:-lalr}

redcsl -w -l $file.log <<XXX
on echo;
lisp;
enable!-errorset(3,3); % CSL speciality to get diagnostics on error
remprop('yyparse, 'number!-of!-args); % Get rid of historical info.
on comp;
in "lalr.red"$ in "yylex.red"$ in "yyparse.red"$ 
in "genparser.red"$ in "genparserprint.red"$

on lalr_verbose;

in "$file.tst";

end;
XXX
