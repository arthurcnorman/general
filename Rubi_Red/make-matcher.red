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

% Sean: here are some of my thoughts to begin our discussion next week:
% 1. The general and easiest algorithm seems to a recursive bucket sort,
%    as we put rules into buckets based on the top-most pattern, and 
%    recursively do so for each bucket until we hit a sequential cutoff
%    (or until we hit a set of rules with same patterns but different
%    conditions), such that we have a tree-like structure with several 
%    patterns on each node. In an ideal world where all integration we 
%    have to do has a corresponding rule without transformation, this 
%    will do a good job in terms of both efficiency and correctness.
%    It's a reduction from O(~2000c) to O(nlogn) for n being the number
%    of patterns in each tree nodes, and c is amount of work to match
%    a rule with an expression (ideally once we traverse down the decision
%    tree, the we already find a matching rule). The current problem, 
%    however, is the _. (option value) in the rules. Because of this,
%    a rule such as simple as a_. + b_.*x can be matched to 1+2x, 2x, or x,
%    which means the top-most pattern can be 'plus, 'times, or an atom.
%    In the current implementation, an expression is beefed-up when it sees
%    a possible _ or _. option in a rule to try to match the patterns (eg.
%    (x) becomes ('times 1 x)). But in a decision tree, we can easily go
%    to the wrong branch before we beef up the expression we want to 
%    integrate. Backtracking seems difficult because we do not know what to
%    add to the expression (eg. should (x) become (expt x 0), (times x 1),
%    (plus 0 x), or (quotient x 1), etc.) once we realize we got to the 
%    wrong branch. It is, of course, can be done, but the worst case 
%    scenario is that we traverse through all rules in the tree (or a bit
%    fewer than that, because we only backtrack when we see the possibilty
%    of beefing up the expression), which is the same as the original
%    approach.
%    A possible solution is to expand the rule set, so that for each _. we
%    create two (or more) new rules that correspond to the situations when
%    either the pattern is present or not. This has to be carefully done,
%    however, because we also have to insert default values to the right
%    hand side (the integrated expression) and the conditions. For each
%    rule there is also possibility of new 2^n rules that comes out from it
%    (I have seen expression with 8 variables, that is 256 new rules from
%    a single rule). Doing so requires a clear mind and a lot of ice packs, 
%    but it seems a plausible option to me.
%    Another option is to ask Al Rich how he does it.
% 2. coming soon... going to sleep now.
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

