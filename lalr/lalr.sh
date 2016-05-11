#! /bin/bash -v
# Script to help me test lalr parser

# By default I compile, but I can interpret if that helps debugging.
case "${1:-nothing}" in
--interpret)
  comp=false
  shift
  ;;
*)
  comp=true;
  ;;
esac
file=${1:-lalr}
if test "$comp" = "true"
then
  cc="on comp;"
else
  cc="off comp;"
fi

redcsl -w -l $file.log <<XXX
on echo;
lisp;
enable!-errorset(3,3); % CSL speciality to get diagnostics on error
remprop('yyparse, 'number!-of!-args); % Get rid of historical info.
$cc
in "lalr.red"$ in "yylex.red"$ in "yyparse.red"$ 
in "genparser.red"$ in "genparserprint.red"$

on lalr_verbose;

in "$file.tst";

end;
XXX
