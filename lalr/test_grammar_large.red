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
          ((expression "*" expression)  (list 'times !$1 !$3))
          ((expression "/" expression)  (list 'quotient !$1 !$3))
          ((expression "+" expression)  (list 'plus !$1 !$3))
          ((expression "-" expression)  (list 'difference !$1 !$3))
          ((expression "<" expression)  (list 'lessp !$1 !$3))
          ((expression "<=" expression) (list 'leq !$1 !$3))
          ((expression "==" expression) (list 'equal !$1 !$3))
          ((expression "neq" expression)(list 'neq !$1 !$3))
          ((expression "=>" expression) (list 'geq !$1 !$3))
          ((expression ">" expression)  (list 'greaterp !$1 !$3))
          ((expression ":=" expression) (list 'setq !$1 !$3))
          (("fun" funcall "=" expression) (list 'fundef !$2 !$4))
          (("if" sequence "then" expression) (list 'if !$2 !$4 nil))
          (("if" sequence "then" sequence "else" expression)
                                             (list 'if !$2 !$4 !$6))
          (("go" !:symbol)              (list 'go !$2))
          (("go" "to" !:symbol)         (list 'go !$3))
          (("goto" !:symbol)            (list 'go !$2))
          (("return" expression)        (list 'return !$2)))

  (funcall
          ((closedexpression))
          ((funcall closedexpression) (list !$1 !$2)))

  (closedexpression
          ((!:symbol))
          ((!:number))
          ((strings))
          (("let" sequence "in" sequence "end"))
          (("(" exprlist ")")  !$2)
          (("(" sequence ")")  !$2)
          (("[" exprlist "]")  (cons 'bracketed !$2)))
  (strings
          ((!:string strings))
          ((!:string)))

  (exprlist ((expression exprlist1)))
  (exprlist1 
          (())
          (("," expression exprlist1) (cons !$2 !$3)))

  (sequence ((expression sequence1)))
  (sequence1 
          (())
          ((":::" expression sequence1)))
);

large_parser := lalr_create_parser(large_precedence, large_grammar);

yyparse large_parser;
if x == 3 then 1 else "not-three" eof

end;
