
%structure BasicTypes  =
%struct
%  type charCode =  int
%  type penalty  =  int
%  type dist     =  int
%  type size     =  int
%
%  datatype family  =  RM | MI | SY | EX


%  fun famNr RM = 0  |  famNr MI = 1  |  famNr SY = 2  |  famNr EX = 3

symbolic inline procedure famNr n;
  if n = 'RM then 0
  else if n = 'MI then 1
  else if n = 'SY then 2
  else if n = 'EX then 3
  else error(1, "bad arg for famNr");

%
%  type delim    =  (family * int * family * int) option
%
%  datatype style   =  D | T | S | SS
%  fun styleNr D = 0  |  styleNr T = 1  |  styleNr S = 2  |  styleNr SS = 3
%

symbolic inline procedure styleNr n;
  if n = 'D then 0
  else if n = 'T then 1
  else if n = 'S then 2
  else if n = 'SS then 3
  else error(1, "bad arg for styleNr");

%  (* These numbers are only needed for vector indexing. *)
%
%  exception NotImplemented of string
%  exception CannotHappen
%end  (* structure BasicTypes *)
%

end;
