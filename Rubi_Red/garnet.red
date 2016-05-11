% This is not Rubi and Garnet is not as valuable as Ruby... but at least
% both are basically red...


lisp;
on backtrace, echo, comp; % set some useful (I hope) options

% The existing "rubi_red" package provides a way to access all the
% Rubi rules... But in fact I will set up my own short list...

% load_package rubi_red;

fluid '(rubi_rules);

% To stat with I will have just ONE rule!

% (a + b*x^n)^p
% where n*(p+1)=-1
% eg let me try n=1, p=-2, so I get
% (a + b*x^1)^(-2)

rubi_rules := '(

(!/!;
   (!:!=
      (!Int
         (expt (plus (!_ a) (times (!_!. b) (expt (!_ x) (!_ n)))) (!_ p))
         (!_ x !Symbol))
      (quotient (times x (expt (plus a (times b (expt x n))) (plus p 1))) a))
   (and
      (!Free!Q (bracelist a b n p) x)
      (!Zero!Q (plus (times n (plus p 1)) 1))))


)$


algebraic operator unsimplified_int;

symbolic procedure simpgarnet u;
  begin
    scalar a, x, r;
    if length u neq 2 then rederr "garnet requires two arguments";
    a := car u;
    x := cadr u;
    if posn() neq 0 then terpri();
    princ "Integrate "; prin a; princ " wrt "; print x;
    r := garnet_integrate(a, x);
% I hand back a list of length 2 - the first item is the result that
% garney generates, the secondis what the existing old Reduce integrator
% makes of the example.
    return simp list('list, r, list('int, a, x));
  end;

put('garnet, 'simpfn, 'simpgarnet);

symbolic procedure garnet_integrate(a, x);
  begin
    scalar rules, w;
    rules := rubi_rules;
top:
    if null rules then return list('unsimplified_int, a, x);
    if w := apply_rule(car rules, a, x) then
       return garnet_check_inside w;
    rules := cdr rules;
    go to top;
  end;

global '(trace_counter);
trace_counter := 0;

symbolic procedure apply_rule(rule, a, x);
  begin
    scalar lhs, rhs, conditions, w, bindings;
    if (trace_counter := trace_counter+1) < 5 then <<
       if posn() neq 0 then terpri();
       prin trace_counter; princ ": ";
       princ "looking at "; prin a; princ " wrt "; print x;
       princ "Try rule "; prettyprint rule; terpri() >>;
    if not eqcar(rule, '!/!;) then <<
       printc "Expecting /; at top of rule";
       return nil >>;
    w := cadr rule;
    conditions := caddr rule;    
    if not eqcar(w, '!:!=) then <<
       printc "Expecting := at top of rewrite";
       return nil >>;
    lhs := cadr w;
    rhs := caddr w;
    bindings := trymatch(list('!Int, a, x), lhs, nil);
    princ "Bindings = "; print bindings;
% Right now I just bail out and do not even try pattern matching!
    return nil;
  end;

symbolic procedure trymatch(u, pattern, env);
  begin
    princ "u = "; print u;
    princ "pattern = "; print pattern;
    princ "env = "; print env;
    if eqcar(pattern, '!_) then
       return (cadr pattern . u) . env
    else if eqcar(pattern, '!_!.) then
       return (cadr pattern . u) . env
    else if u = pattern then return env
    else if atom pattern or atom u then return 'fail
    else if not (car u = car pattern) then return 'fail
    else return trymatchlist(cdr u, cdr pattern, env)    
  end;

symbolic procedure trymatchlist(lu, lpattern, env);
  if null lu and null lpattern then env
  else if null lu or null lpattern then 'fail
  else begin
    scalar w;
    w := trymatch(car lu, car lpattern, env);
    if w = 'fail then return 'fail
    else return trymatchlist(cdr lu, cdr lpattern, w)
  end;

% A rule may transform an integral into something where there is an
% integral sign left within what is generated. Scan to spot such cases and
% call garnet again to process that.

symbolic procedure garnet_check_inside u;
  if atom u then u
  else if eqcar(u, 'int) then garnet_integrate(cadr u, caddr u)
  else car u . for each a in cdr u collect garnet_check_inside a;

algebraic;

% I now have some cases - where SOME of them should match the rule that
% I have got.

tr trymatch, trymatchlist;

garnet((u + v*z^1)^(-2), z);
garnet((u + z^1)^(-2), z);
garnet((u + v*z)^(-2), z);
garnet((u + z)^(-2), z);


quit;

