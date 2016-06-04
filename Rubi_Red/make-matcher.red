%
% This is a start of a sketch of code to generate stuff that does
% bulk pattern matching.


% pl will be a list of rules ane here I will make the format
%   ((pattern1 replacement1) (pattern2 replacement2) ...)
% with no side-conditions. I am going to try a pretty simplistic
% scheme first. One serious issue is that if I followed this and
% applied it to a set of 2000 rewrites it would create a totally
% HUGE procedure that would be unmanagable. My idea for coping with that
% will be to use the unwinding into code for just the top few layers
% of the matching and when it has reduced things to at most a dozen (?)
% cases I will drop back to something that is in effet interpreted.

symbolic procedure compile_patterns pl;
  begin
% I will first dispatch on whether the pattern is atomic or not. 
    scalar atomics, nonatomic;
    for each p in pl do
      if atom car p then atomics := p . atomics
      else nonatomics := p . nonatomics;
    atomics := reverse atomics;
    nonatomics := reverse nonatomics;
    if null atomics then return compile_nonatomics nonatomics
    else if null nonatomics then return compile_atomics atomics;
    return list('cond,
      list(list('atom, '!*arg!*), compile_atomics atomics, depth),
      list(t, compile_nonatomics nonatomics))
  end;

symbolic procedure compile_atomics pl;
  'cond . append(
     for each p in pl collect
       list(list('eq, !*arg!*, mkquote car p), cadr p),
     '(t 'failed));

symbolic procedure ordercar(a, b);
  orderp(car a, car b);

symbolic procedure compile_nonatomics pl;
% If I only have a "few" patterns left I will use a general purpose
% matching function that will look at each one at a time sequentially. I do
% this so I do not generate bulky in-line code for matching all the way down.
  if length pl < 7 list('matchfunction, mkquote p, '!*arg!*)
  else begin
    scalar u, v, w;
% I want to dispatch on all the various leading operators that are
% present in the list of patterns. I sort the list to bring equal operators
% together. Well this may be bad if the sort method used is not stable
% and if the order of rules matters.
    pl := sort(pl, function ordercar);
    u := caaar pl; % leading operator of first rule.
    while pl do <<
      while pl and u = caaar pl do <<
        v := car pl . v;
        pl := cdr pl >>;
      w := reverse v . w;
      v := nil;
      if pl then u := caaar pl >>;
% w should now be a list that separates out the cases according to their
% leading operators...
    return 'something
  end;

% Well this is where I will stop just now!

