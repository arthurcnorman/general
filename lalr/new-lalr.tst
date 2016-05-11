lisp;

on lalr_verbose, tracelex;


% Now illustration and testing of cases where precedence rules
% need to be applied.

% First give an ambiguous grammar and observe the warning message that
% the parser-generator issues. The resulting parser will prefer SHIFT to
% REDUCE and so ends up with "+" associating to the right.

g := lalr_create_parser(nil, '(
  (s ((!:number))
     ((s "+" s)))));

printc yyparse g$

1 + 2 + 3;



p := '(!:right "^" !:left ("*" "/") ("+" "-") !:none "=");

% In my first case the only issue is whether "+" will associate to the
% left or the right. If no explicit precedence had been set I would
% generate a warning and then prefer a SHIFT to a REDUCE operation and that
% would correspond to right associativity with a+b+c parsing as (a+(b+c)).
% If use lalr_precedence its default will be to indicate left associativity.
% The precedence list above declared several symbols not used in the
% first test grammar and uses all the complicted options. It makes it
% explicit that "+" is to associate to the left. You pass the precedence
% information to lalr_create_parser.

g := lalr_create_parser(p, '(
  (s ((!:number))
     ((s "+" s)))));

printc yyparse g$

1;

printc yyparse g$

1 + 2 + 3;

g := lalr_create_parser(nil, '(
  (s ((!:number))
     ((s op s) (list !$2 !$1 !$3)))
  (op (("+"))
      (("*")))));

printc yyparse g$

1;

printc yyparse g$

1 + 2 * 3;

printc yyparse g$

1 * 2 + 3;

end;

