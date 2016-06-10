
%structure MathTypes  =
%struct
%  open BasicTypes
%  open BoxTypes
%  datatype kind = Ord | Op | Bin | Rel | Open | Close | Punct | Inner | None
%  datatype limits  =  default | yes | no
%  datatype space   =  SKern of dist  |  SGlue of glueSpec
%  type mathSpace   =  {isMu: bool, always: bool, entry: space}
%  datatype noad  =
%    MathChar  of  kind * family * charCode
symbolic inline procedure MathChar(kind, family, charCode);
  list('MathChar, kind, family, charCode);

%  | Radical   of  delim * mlist
symbolic inline procedure Redical(delim, mlist);
  list('Radical, delim, mlist);

%  | Accent    of  family * charCode * mlist
symbolic inline procedure Accent(family, charCode, mlist);
  list(@Accent, family, charCode, mlist);

%  | VCenter   of  mlist
symbolic inline procedure VCenter mlist;
  list('VCenter, mlist);

%  | Overline  of  mlist
symbolic inline procedure overline mlist;
  list('Overline, mlist);

%  | Underline of  mlist
symbolic inline procedure underline mlist;
  list('Underline, mlist);

%  | GenFraction  of  genfraction

symbolic inline procedure GenFraction u;
  list('Genfraction, u);

%  | LeftRight    of  delim * mlist * delim
symbolic inline procedure LeftRight(d1, mlist, d2);
  list('LeftRight, d1, mlist, d2);

%  | Script of  script
symbolic inline procedure Script u;
  list('Script, u);

%  | BigOp  of  limits * script
symbolic inline procedure BigOp(limits, script);
  list('BigOp, limits, script);

%  | SubBox of  box
symbolic inline procedure SubBox u;
  list('SubBox, u);

%  | MList  of  mlist
symbolic inline procedure MList u;
  list('MList, u);

%  | Kind   of  kind * mlist
symbolic inline procedure Kind(k, m);
  list('Kind, k, m);

%  (* `MRule' and some other guys omitted *)
%  | MPen   of  penalty
symbolic inline procedure MPen u;
  list('MPen, u);

%  | MSpace of  mathSpace
symbolic inline procedure MSpace u;
  list('MSpace, u);

%  | Style  of  style
symbolic inline procedure Style u;
  list('Style, u);

%  | Choice of  style -> mlist
symbolic inline procedure Choice u;
  list('Choice, u);

%  withtype mlist  =  noad list
%  (* Unfortunately mlist cannot be used here (although it works with some
%     implementations), so we have to use `noad list' everywhere instead. *)
%  and genfraction = {num: noad list, den: noad list, thickness: dist option,
%                                           (* no thickness -> default value *)
%                      left: delim, right: delim}
%  and script = {nucleus: noad list, supOpt: noad list option, subOpt: noad list option}
%end  (* structure MathTypes *)
%
end;
