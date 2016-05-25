% This is not Rubi and Garnet is not as valuable as Ruby... but at least
% both are basically red...


lisp;
on backtrace, echo, comp; % set some useful (I hope) options

% The existing "rubi_red" package provides a way to access all the
% Rubi rules... But in fact I will set up my own short list...

% load_package rubi_red;

fluid '(rubi_rules);

% To start with I will have just ONE rule!

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
% The arguments arrive here are totally unprocessed, and so for instance
% if you write "w := <something>; var := x; garnet(w, var);" what you
% receive will be "w" and "var" not sensible values. I have special code
% to deal with this!
    a := garnet!-simp a;
    x := garnet!-simp x;
    r := garnet_integrate(a, x);
% I hand back a list of length 2 - the first item is the result that
% garnet generates, the second is what the existing old Reduce integrator
% makes of the example.
    return simp list('list, r, list('int, a, x));
  end;

put('garnet, 'simpfn, 'simpgarnet);

% This takes a formula and "evaluates" it by evaluating all the variables
% present in it while trying to preserve the structure around the, So if you
% hand it (x-1)^10 where x has some messy value it will return the expression
% (<messy-value> - 1)^10 rather than multiplying things out. Just in case
% the varibles used had previously been simplified in a way that expanded
% them this does some factorization to try to return things to a "neat"
% form. If substituting values for variables would introduce cases of
% (expression + 0) or (expression^1) it does some minor tidying up to
% make things seem nicer.

symbolic procedure garnet!-simp u;
  if numberp u then u
  else if atom u then garnet!-simpatom u
  else begin
    scalar w;
    w := for each v in cdr u collect garnet!-simp v;
    if car u = 'plus then return garnet!-simp!-plus w
    else if car u = 'difference then return garnet!-simp!-difference w
    else if car u = 'times then return garnet!-simp!-times w
    else if car u = 'quotient then return garnet!-simp!-quotient w
    else if car u = 'expt then return garnet!-simp!-expt w
    else if car u = 'minus then return garnet!-simp!-minus w
    else return car u . w
  end;

% Following might be redundant - commented out for the moment

%symbolic procedure garnet!-simp!-plus l;
%  begin
%    scalar r;
%    for each x in l do if not zerop x then r := x . r;
%    if null r then return 0
%    else if nuill cdr r then return car r
%    else return 'plus . reverse r
%  end;

% The next few reconstruct prefix forms performing only the very simplest
% transformations such as (x + 0) => x and (x * 1) => x. They may even
% go as far as (2 + 2) => 4, but do not guarantee even that! Note that
% "simplifications" along the lines illustrated here are naive and not
% in general an effective way to tidy things up.
 
symbolic procedure garnet!-simp!-plus l;
  begin
    scalar r, n;
    n := 0;
    for each x in l do
       if numberp x then n := n + x
       else r := x . r;
    if not zerop n then r := n . reverse r
% Sean-To-do: figure out why reverse
    else r := reverse r;
    if null cdr r then return car r
    else return 'plus . r
  end;

symbolic procedure garnet!-simp!-times l;
  begin
    scalar r, n;
    n := 1;
    for each x in l do
       if numberp x then n := n * x
       else r := x . r;
    if zerop n then return 0
    else if not onep n then r := n . reverse r
    else r := reverse r;
    if null cdr r then return car r
    else return 'times . r
  end;

symbolic procedure garnet!-simp!-difference l;
  begin
    scalar a, b;
    a := car l;
    b := cadr l;
    if numberp a and numberp b then return a-b
    else if zerop a then return garnet!-simp!-minus list b
    else if zerop b then return a
    else return list('difference, a, b)
  end;

symbolic procedure garnet!-simp!-quotient l;
  begin
    scalar a, b;
    a := car l;
    b := cadr l;
    if zerop a then return 0
    else if onep b then return a
    else return list('quotient, a, b)
  end;

% Adding garnet!-simp!-expt l
% Sean-To-do: seems that we cannot just simplify expt component
symbolic procedure garnet!-simp!-expt l;
  begin
    scalar a, b;
    a := car l;
    b := cadr l;
    return list('expt, a, b)
%    if zerop b then return 1
%    else if onep b then return a
%    else if zerop a then return 0
%    else if onep a then return a
%    else return list('expt, a, b)
  end;

symbolic procedure garnet!-simp!-minus l;
  begin
    scalar a;
    a := car l;
    if numberp a then return -a
    else if eqcar(a, 'minus) then return cadr a
    else return list('minus, a)
  end;

symbolic procedure garnet!-simpatom x;
  begin
    scalar w, n, d;
% Start by "simplifying" to get a Standard Quotient
    w := simp x;
% Factorize the polynomials in numerator and denominator;
    n := prepfctr fctrf numr w;
    d := prepfctr fctrf denr w;
    if d = 1 then return n
    else return list('quotient, n, d)
  end;

% fctrf returns a numerical content on the front of a list of
% factors and multiplicities. If it is (c . (f1 . n1) (f2 . n2)) I will
% return (times c (expt f1 n1) (expt f2 n2)). But can omit bits if any
% multiplicity is 1, or if c=1, or if there is only one factor shown at
% all.

symbolic procedure prepfctr u;
  begin
    scalar r;
    r := for each f in cdr u collect
      if cdr f = 1 then prepf car f
      else list('expt, prepf car f, cdr f);
    if null r then return car u
    else if car u = 1 then <<
      if null cdr r then return car r
      else return 'times . r >>
    else return 'times . car u . r
  end;

tr garnet!-simpatom, fctrf, prepfctr;


% going through all the rules one by one for pattern matching

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

% The high-level pattern matcher, match a rule against an expression
% calls trymatch to create bindings
% returns nil if fail to match
%
symbolic procedure apply_rule(rule, a, x);
  begin
    scalar lhs, rhs, conditions, w, bindings;
    if (trace_counter := trace_counter+1) < 5 then <<
        %Sean-To-do: look up posn()
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
    if bindings = 'fail then return nil;
% Here I need to check conditions
    if conditions_fail(conditions, bindings) then return nil;
    return subla(bindings, rhs);
  end;

% ===================== Conditions Section ======================
symbolic procedure conditions_fail(c, b);
% Question from Sean: is this begin-end necessary?
  begin
    princ "Conditions are: "; print c; 
    princ "Bindings are: "; print b;
    if not eqcar(c, 'and) then << 
      printc "Expecting and at the top of conditions"; return 'fail; 
      >>;
    return check_condition_list(cdr c, b);
  end;

symbolic procedure check_condition_list(c, b);
  begin
    if null c then return nil;
    if fail_single_condition(car c, b) then return 'fail
    else return check_condition_list(cdr c, b);
  end;


symbolic procedure fail_single_condition(c, b);
  begin
    if eqcar(c, '!Free!Q) then return fail_free_q(cdr c, b)
    else if eqcar(c, '!Zero!Q) then return fail_zero_q(cdr c, b);
    return nil;
  end;

symbolic procedure fail_free_q(c, b);
  nil;

symbolic procedure fail_zero_q(c, b);
  begin
    d := subla(b, c);
    if zerop reval(car d) then return nil
    else return 'fail;
  end;

% ===================== Conditions Section End ======================


% the low-level recursive pattern matcher that generates bindings
% returns binding if succeed, 'fail otherwise
% bindings in the following format:
% (( rule_variable_name . expression_variable_name) (...) ...)
symbolic procedure trymatch(u, pattern, env);
  begin
%    princ "u = "; print u;
%    princ "pattern = "; print pattern;
%    princ "env = "; print env;
% Sean-To-do: what happens when there is '!_ or '!_!.??
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

% A possibly useful function for noting constants. NOT TESTED AT ALL YET.

%Sean-To-do: will try to incorporate this at later stage

fluid '(garnet_hash);
garnet_hash := mkhash(15, 0, 2.0);

symbolic procedure mark_constants(u, x);
  begin
    clrhash garnet_hash;
    mark_constants_1(u, x)
  end;

symbolic procedure mark_constants_1(u, x);
  if u = x then nil
  else if atom u then << puthash(garnet_hash, u, t); t >>
  else begin
    scalar w;
    w := cdr u;
    while w and mark_constants_1(car w, x) do w := cdr w;
    if null w then << puthash(garnet_hash, u, t); return t >>
    else return nil
  end;

% check by using "gethash(garnet_hash, u)"

algebraic;

% I now have some cases - where SOME of them should match the rule that
% I have got.

tr trymatch, trymatchlist;

garnet((u + v*z^1)^(-2), z);
% garnet((u + z^1)^(-2), z);
% garnet((u + v*z)^(-2), z);
% garnet((u + z)^(-2), z);

% Now the same four but with a level of indirection...
%w := (u + v*z^1)^(-2); garnet(w, z);
%w := (u + z^1)^(-2); garnet(w, z);
%w := (u + v*z)^(-2); garnet(w, z);
%w := (u + z)^(-2); garnet(w, z);


end;

