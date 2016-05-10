on echo;            % See all input
lisp;               % implementation mode not user mode
spool "try.log";    % keep transcript
on backtrace, comp; % useful options!

in "lalr.red"$      % The "$" supresses echo
in "genparser.red"; % The ";" enables echo
in "yylex.red"$
in "yyparse.red"$

% Just to illustrate, I now define a new version of lalr_calculate_first
% that just puts in a extra print statement or so...

symbolic procedure lalr_calculate_first g;
% The "first" set associated with a non-terminal is a collection of all
% the terminals that could possibly be the first symbol of a string
% derived from it. Thus if there is any chain
%    S :   P Q R
%    P :   X Y Z
%    X :   a ...
% then a is in the first set of S.
%
% As an added complication if it is necessary to allow for cases such as
%    S :   P Q R  note that because P may be empty the first symbol of
%                 S may come from Q not P.
%    P :   X Y    note that there is a derivation from P to empty.
%    X :          note empty right hand size here.
%    Y :
%    Q :   a ...
% however "empty" should only go into the first set of a symbol if ALL
% the items on the RHs can generate empty.
  begin
    scalar w, y, z, more_added;
% In the "official" version the print statement on the next line was commented
% out.
    princ "lalr_calculate_first "; print g;
% Any symbol that can directly reduce to empty has empty in its FIRST set.
    for each x in g do
      if assoc(nil, lalr_productions x) then put(x, 'lalr_first, '(nil));
    repeat <<
      more_added := nil;
      for each x in g do <<
        z := get(x, 'lalr_first);
% I have3 re-instated the extra verbose output here, so that one gers more
% debugging output. I had this in while first writing this part of the code
% but commented it out when I felt I had this segment stable.
        if !*lalr_verbose then <<
          princ "[calculate_first] Scan "; prin x; princ " : "; prin z;
          princ " / "; print lalr_productions x >>;
        for each y1 in lalr_productions x do <<
          y := car y1;
          while y and
                not numberp car y
                and member(nil, (w := get(car y, 'lalr_first))) do <<
            z := union(delete(nil, w), z);
            y := cdr y >>;
          if null y then z := union('(nil), z)
          else if numberp car y then z := union(list car y, z)
          else z := union(get(car y, 'lalr_first), z) >>;
        if z neq get(x, 'lalr_first) then more_added := t;
        put(x, 'lalr_first, z) >>
    >> until not more_added;
    if !*lalr_verbose then lalr_print_firsts g;
    return nil
  end;



% Test cases for the parser generator. I have removed a load of comments that
% where in lalr.tst from here as not needed in thsi test script!



on lalr_verbose;

% Here I set up a sample grammar
%    S' -> S
%    S  -> C C        { }
%    C  -> "c" C      { }
%        | "d"        { }
% This is example 4.42 from Aho, Sethi and Ullman's Red Dragon book.
% It is example 4.54 in the more recent Purple book.

% Note that this grammar will introduce "c" and "d" as keywords rather than
% being general symbols. When I construct a subsequent grammar that will
% undo that setting. I will omit semantic actions here so that the default
% action of building a form of tree is used.



grammar := '(
  (s  ((c c)    )   % One production for S, no semantic actions
  )
  (c  (("c" c)  )   % First production for C
      (("d")    )   % Second production for C
  ));

lalr_construct_parser grammar;

symbolic procedure pparse();
  begin
    scalar r;
    r := yyparse();
    terpri();
    princ "= ";
    print r
  end;

pparse()$

c c c d c d ;

pparse()$

d d ;


% Just do the one test for now!

end;

