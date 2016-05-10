lisp;

on lalr_verbose, tracelex;


% Now illustration and testing of cases where precedence rules
% need to be applied.

% First give an ambiguous grammar and observe the wanring message that
% the parser-generator issues. The resulting parser will prefer SHIFT to
% REDUCE and so ends up with "+" associating to the right.

lalr_construct_parser '(
  (s ((!:number))
     ((s "+" s))));

printc yyparse()$

1 + 2 + 3;



lalr_precedence '(!:right "^" !:left ("*" "/") ("+" "-") !:none "=");

% In my first case the only issue is whether "+" will associate to the
% left or the right. If no explicit precedence had been set I would
% generate a warning and then prefer a SHIFT to a REDUCE operation and that
% would correspond to right associativity with a+b+c parsing as (a+(b+c)).
% If use lalr_precedence its default will be to indicate left associativity.
% The precedence statement above declared several symbols not used in the
% first test grammar and uses all the complicted options. It makes it
% explicit that "+" is to associate to the left.

lalr_construct_parser '(
  (s ((!:number))
     ((s "+" s))));

printc yyparse()$

1;

printc yyparse()$

1 + 2 + 3;

lalr_construct_parser '(
  (s ((!:number))
     ((s op s) (list !$2 !$1 !$3)))
  (op (("+"))
      (("*"))));

printc yyparse()$

1;

printc yyparse()$

1 + 2 * 3;

printc yyparse()$

1 * 2 + 3;

end;


