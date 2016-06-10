
%signature INPUT  =
%sig
%  val trans      : string -> MathTypes.mlist
%  val overline   : MathTypes.mlist -> MathTypes.noad
%  val underline  : MathTypes.mlist -> MathTypes.noad
%  val fraction   : MathTypes.mlist -> MathTypes.mlist -> MathTypes.noad
%  val atop       : MathTypes.mlist -> MathTypes.mlist -> MathTypes.noad
%  val sup        : MathTypes.mlist -> MathTypes.mlist -> MathTypes.noad
%  val sub        : MathTypes.mlist -> MathTypes.mlist -> MathTypes.noad
%  val supsub     : MathTypes.mlist -> MathTypes.mlist -> MathTypes.mlist -> MathTypes.noad
%  val sum        : MathTypes.mlist option -> MathTypes.mlist option -> MathTypes.noad
%  val int        : MathTypes.mlist option -> MathTypes.mlist option -> MathTypes.noad
%  val math       : MathTypes.kind -> MathTypes.mlist -> MathTypes.noad
%  val style      : BasicTypes.style -> MathTypes.noad
%  val choice     : MathTypes.mlist -> MathTypes.mlist -> MathTypes.mlist -> MathTypes.mlist -> MathTypes.noad
%  val accent     : string -> MathTypes.mlist -> MathTypes.noad
%  val sqrt       : MathTypes.mlist -> MathTypes.noad
%  val delim      : string -> BasicTypes.delim
%end
%(*----------*)
%
%structure Input: INPUT  =
%struct
%  open BasicTypes;  open MathTypes
%  open Char
%
%  val sumsym    =  MathChar (Op,    EX,  80)
%  val intsym    =  MathChar (Op,    EX,  82)
%

% This file sets up numeric character codes and maps things onto one of
% the fonts RM, MI, SY or EX. This is all delicate and will need serious
% review to cope with Unicode input and output using Unicode fonts...

fluid '(sumsym intsym);
sumsym := MathChar('Op, 'EX, 80);
intsym := MathChar('Op, 'EX, 82);


%  fun sym ch  =
%  if  isAlpha ch                      then  (Ord,   MI, ord ch)  else
%  if  isDigit ch  orelse  ch = #"@"   then  (Ord,   RM, ord ch)  else
%  if  ch = #"("   orelse  ch = #"["   then  (Open,  RM, ord ch)  else
%  if  ch = #")"   orelse  ch = #"]"   then  (Close, RM, ord ch)  else
%  if  ch = #"="   orelse  ch = #":"   then  (Rel,   RM, ord ch)  else
%  if  ch = #"<"   orelse  ch = #">"   then  (Rel,   MI, ord ch)  else
%  if  contains  "!?;"  ch             then  (Punct, RM, ord ch)  else
%  case  ch  of
%    #","  =>  (Punct, MI, 59)
%  | #"+"  =>  (Bin,   RM, 43)
%  | #"-"  =>  (Bin,   SY,  0)
%  | #"*"  =>  (Bin,   SY,  3)
%  | #"."  =>  (Bin,   SY,  1)
%  | _     =>  raise (NotImplemented ("Character " ^ toString ch))
%

% Note that in CSL the char-code function copes with Unicode stuff..

symbolic procedure sym ch;
  if liter ch then                  list('Ord, 'MI, char!-code ch)
  else if digit ch or ch = '!@ then list('Ord, 'RM, char!-code ch)
  else if ch = '!( or ch = '![ then list('Open, 'RM, char!-code ch)
  else if ch = '!) or ch = '!] then list('Close, 'RM, char!-code ch)
  else if ch = '!= or ch = '!: then list('Rel, 'RM, char!-code ch)
  else if ch = '!< or ch = '!> then list('Rel, 'MI, char!-code ch)
  else if ch = '!! or ch = '!? or vh = '!;
                               then list('Punct, 'RM, char!-code ch)
  else if ch = '!,             then list('Punct, 'MI, 59)
  else if ch = '!+             then list('Bin,   'RM, 43)
% Observe weird TeX character codes here...
  else if ch = '!-             then list('Bin,   'SY,  0)
  else if ch = '!*             then list('Bin,   'SY,  3)
  else if ch = '!.             then list('Bin,   'SY,  1)
  else error(1, list("character not implemented", ch, char!-code ch));


%  fun trans str  =  map (MathChar o sym) (String.explode str)

% Tricky replacement of MathChar constructor here!
symbolic procedure trans s;
  for each c in explodec s collect 'MathChar . (sym c);

%  val overline   =  Overline
%  val underline  =  Underline
%
%  fun fraction num den  =
%  GenFraction {num = num, den = den, thickness = NONE,   left = NONE, right = NONE}
%
%  fun atop top bot  =
%  GenFraction {num = top, den = bot, thickness = SOME 0, left = NONE, right = NONE}
%
%  fun sup    a b    =  Script {nucleus = a, supOpt = SOME b, subOpt = NONE}
%  fun sub    a b    =  Script {nucleus = a, supOpt = NONE,   subOpt = SOME b}
%  fun supsub a b c  =  Script {nucleus = a, supOpt = SOME b, subOpt = SOME c}
%
%  fun bigop_ sym subopt supopt  =
%  BigOp (default, {nucleus = [sym], supOpt = supopt, subOpt = subopt})
%

% A screipt is {nucleus, supopt, subopt}
symbolic procedure bigop_(sym, subopt, supopt);
  BigOp('default, list(list sym, supopt, subopt));

%  val sum  =  bigop_ sumsym
%  val int  =  bigop_ intsym
%
symbolic procedure sum(u, v);
  bigop_(sumsym, u, v);
symbolic procedure int(u, v);
  bigop_(intsym, u, v);
  

%  fun math kind ml  =  Kind (kind, ml)
%
%  val style = Style
%
%  fun choice d t s ss  =  Choice (fn D => d | T => t | S => s | SS => ss)
%
%  fun accent "hat"     base = Accent (RM, 94,  base)
%    | accent "check"   base = Accent (RM, 20,  base)
%    | accent "tilde"   base = Accent (RM, 126, base)
%    | accent "widehat" base = Accent (EX, 98,  base)
%    | accent _         _    = raise (BasicTypes.NotImplemented "math accent")
%
%  fun sqrt ml = Radical (SOME (SY, 112, EX, 112), ml)
%
%  fun delim "lparen"   = SOME (RM, 40, EX, 0)
%    | delim "rparen"   = SOME (RM, 41, EX, 1)
%    | delim "lbracket" = SOME (RM, 91, EX, 2)
%    | delim "rbracket" = SOME (RM, 93, EX, 3)
%    | delim "langle"   = SOME (SY, 104, EX, 10)
%    | delim "rangle"   = SOME (SY, 105, EX, 11)
%    | delim "null"     = NONE
%
%end
%
end;
