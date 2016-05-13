lisp;
on echo;

% Here is one of the constrainsts from test case #1:

constraint := '(!Zero!Q (plus (times n (plus p 1)) 1));

% Here are the bindings that emerge from pattern-patching:

bindings := '((x . z) (p . -2) (n . 1) (x . z) (b . v) (a . u));

% Substitute in...

form := subla(bindings, cadr constraint);

% Get Reduce to simplify the expression, returning a "standrad quotient"
% which has the numerator as its car and denominator as its cdr. A
% numerator that is nil will denote a polynomial with no terms in it, ie
% the value zero...

sq := simp form;

% The proper way to check for zero...

null numr sq;

% ... and just to confirm, here is a conversion from the SQ back into
% prefix notation.

prepsq sq;

end;
