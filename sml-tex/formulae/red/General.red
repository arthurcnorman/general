
%  fun round r  =  trunc (r + 0.5)         (* "truncate" in other versions *)



%  val sum     =  fold (op +) 0

symbolic inline procedure list_sum l;
  begin
    scalar r;
    r := car l;
    for each v in cdr l do r := r + v;
    return r
  end;

% val Max     =  fold Int.max 0

symbolic inline procedure list_max l;
  begin
    scalar r;
    r := car l;
    for each v in cdr l do r := max(r, v);
    return r
  end;


%  (* This cannot be partially applied as otherwise we will have free type
%     variables *)
%  fun concat l =  fold (op @) [] l

symbolic procedure list_concat l;
  if null l then nil
  else append(car l, list_concat cdr l);

%  fun contains list x  =  let fun f    []     =  false
%                              |   f (h :: t)  =  (h = x)  orelse  f t
%                          in  f list  end

symbolic inline procedure contains(l, x); memq(x, l);

%  fun revAppend    []     yl  =  yl
%  |   revAppend (x :: xl) yl  =  revAppend xl (x :: yl)

symbolic procedure revAppend(x, y);
  if null x then y
  else revAppend(cdr x, car x . y);

%  fun optMap f  =  fn NONE    =>  NONE
%                   |  SOME x  =>  SOME (f x)

% I will represent the SOME/NONE type with NONE represented by nil
% and SOME(x) by (x).

symbolic inline procedure optMap(f, arg);
  if null arg then nil
  else list apply(f, arg);

%  fun optFold y f  =  fn NONE    =>  y
%                      |  SOME x  =>  f x

symbolic inline procedure optFold(y, f, arg);
  if null arg then y
  else apply(f, arg);

%  fun optVal y  =  optFold y (fn x => x)

symbolic inline procedure optVal(y, arg);
  if null arg then y else car arg;

%  fun lookUp x  =
%  let fun searchx          []        =  NONE
%      |   searchx ((x', y) :: rest)  =  if  x = x'  then  SOME y
%                                        else  searchx rest
%  in  searchx  end

symbolic procedure lookUp(x, alist);
  if null alist then nil
  else if x = caar alist then list cdar alist
  else lookUp(x, cdr alist);

end;
