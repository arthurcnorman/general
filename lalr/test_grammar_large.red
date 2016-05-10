lisp;

in "lalr.red"$ in "yylex.red"$ in "yyparse.red"$ 
in "genparser.red"$ in "genparserprint.red"$

on lalr_verbose;

large_precedence := '(!:left ("*" "/")
                             ("+" "-")
                      !:none ("<" "<=" "==" "neq" "=>" ">")
                      !:right ":=" "="
                      !:left ("then" "else" "return"));

large_grammar := '(
  (program
          ((expression program1 "eof")))
  (program1
          (())
          ((":::" expression program1)))
  (expression
          ((funcall))
          ((expression "*" expression))
          ((expression "/" expression))
          ((expression "+" expression))
          ((expression "-" expression))
          ((expression "<" expression))
          ((expression "<=" expression))
          ((expression "==" expression))
          ((expression "neq" expression))
          ((expression "=>" expression))
          ((expression ">" expression))
          ((expression ":=" expression))
          (("fun" funcall "=" expression))
          (("if" sequence "then" expression))
          (("if" sequence "then" sequence "else" expression))
          (("go" !:symbol))
          (("go" "to" !:symbol))
          (("goto" !:symbol))
          (("return" expression)))

  (funcall
          ((closedexpression))
          ((funcall closedexpression)))

  (closedexpression
          ((!:symbol))
          ((!:number))
          ((strings))
          (("let" sequence "in" sequence "end"))
          (("(" exprlist ")"))
          (("(" sequence ")"))
          (("[" exprlist "]")))
  (strings
          ((!:string strings))
          ((!:string)))

  (exprlist ((expression exprlist1)))
  (exprlist1 
          (())
          (("," expression exprlist1)))

  (sequence ((expression sequence1)))
  (sequence1 
          (())
          ((":::" expression sequence1)))
);

large_parser := lalr_create_parser(large_precedence, large_grammar);

end;