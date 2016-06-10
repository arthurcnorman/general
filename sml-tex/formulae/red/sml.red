% The start of an SML parser in Reduce...


symbolic;

load_package lalr;

% Lexical analyser to suit SML...

% Rules:
%    (* ... *)                  comment
%    alpha alphanumeric* '*     symbol (or reserved word)
%       (underscore counts as alpha)
%    word.word                  qualified name
%    #name                      selector
%    opchar+                    operator
%    [, ], (, ), ,, ;           non-operator punctuation
%    " ... "                    string
%    #" ... "                   character literal
%    digit+                     integer
%    digit+ . digit+            floating point
%       (I do not see any exponent markers in the code I have to hand)

symbolic procedure yylex();
  begin
    scalar w, done;
% I take a rather robust view here - words that are intended to be used as
% keywords may not be written with included escape characters. Thus for
% instance this lexer will view "be!gin" or "!begin" as being a simple
% symbol and NOT being the keyword "begin".
    w := lex_basic_token();
% The "while not done" loop is so that I can restart the scan after seeing
% a pre-processor directive such as #if.
    while not done do <<
% The word "COMMENT" introduces a comment that terminates at the next ";"
% or "$". But note that "co!mment" (for instance) would not since that will
% be classifed as a symbol not as a keyword because of the embedded escape.
% So if you REALLY want to have a symbol with name "comment" in your input
% you can write it as (again for instance) "!comment" so it is not processed
% here. Ha ha ha "comment" is now a keyword in that it will never generate
% a lexer-code to pass back as a result. But it is recognised in the same
% sort of circumstances that keywords are.
    while w = lex_symbol_code and yylval = 'COMMENT and
          not lex_escaped do <<
      while not (lex_char = '!; or lex_char = '!$) do yyreadch();
      yyreadch();
      w := lex_basic_token() >>;
% If a word was spelt out directly (without any escape characters in it) it
% may be a keyword - if it is, then deal with it it here.
    if w = lex_symbol_code and not lex_escaped then <<
% #define provides a simple (very simple) macro substitution scheme that is
% probably too limited to be really useful.
      if done := get(yylval, '!#define) then <<
        yylval := done;
        if numberp done then w := lex_number_code
        else if stringp done then w := lex_string_code;
        done := t >> 
      else done := t >>
% A word with escapes in might be a pre-processor directive because I will
% allow "!#if" as well as "#if" to be used. That is going to require
% lex_basic_token() to accept #if (and other cases) directly.
    else if w = lex_symbol_code then <<
% Note that the conditional compilation keywords are not recognised within
% quoted expressions, so "'!#if" is safe here.
      if yylval eq '!#if then <<
        read_s_expression();
        w := lex_conditional yylval >>
      else if yylval eq '!#else or
              yylval eq '!#elif then <<
        if if_depth = 0 then yyerror "Unexpected #else of #elif"
        else if_depth := if_depth-1;
        yylval := nil;
        w := lex_skipping(w, nil) >>
      else if yylval eq '!#endif then <<
        if if_depth = 0 then yyerror "Unexpected #endif"
        else if_depth := if_depth-1;
        w := lex_basic_token() >>
      else if yylval eq '!#eval then << 
        read_s_expression();
        errorset(yylval, nil, nil);
        w := lex_basic_token() >>
      else if yylval eq '!#define then <<
        read_s_expression();
        w := yylval;    % Ought to be a symbol, number of string
        done := read_s_expression();
        if idp w or numberp w or stringp w then
          put(w, '!#define, done);
        w := lex_basic_token();
        done := nil >>
      else if not lex_escaped then <<
        if done := get(yylval, '!#define) then <<
          yylval := done;
          if numberp done then w := lex_number_code
          else if stringp done then w := lex_string_code;
          done := t >>
        else done := t >>
      else done := t >>
    else done := t >>;
    if !*tracelex then <<
      if posn() neq 0 then terpri();
      prin2 "yylex = "; prin1 yylval; prin2 " type "; print w >>;
    return w;
  end;



% If, when reading ordinary text, I come across the token #if I read
% the expression following. If that evaluates to TRUE I just keep on
% on reading. So the sequence "#if t" is in effect ignored. Then
% if later on I just ignore an "#endif" all will be well.  If on the other
% hand the expression evaluates to NIL (or if evaluation fails), I will
% call lex_skipping() to discard more tokens (up to and including
% the next "#else", "#elif t" or "#endif"). I keep a count of how many
% "#if t" equivalents I have passed so that I can match them with their
% corresponding "#endif" statements and moan if an "#else" or "#endif"
% occurs out of place.

symbolic procedure lex_conditional x;
  begin
    scalar w;
    w := lex_basic_token();
    x := errorset(x, nil, nil);
    if errorp x or null car x then return lex_skipping(w, nil);
    if_depth := if_depth+1;
    return w
  end;

% I call lex_skipping when I find "#if nil" or "#else" or "#elif"
% that is processed. When a top-level "#else" or "#elif" is found it
% is discarded before calling lex_skipping, since it must follow a
% successful "#if" and hence introduce material to be thrown away.

symbolic procedure lex_skipping(w, x);
  begin
    scalar done;
% In this code x keep track of the depth of testing of "#if" constructions
    while not done do <<
      if w = lex_eof_code then done := t   % End of file
      else <<
        if w = '!:symbol then <<
          if yylval = '!#endif then <<
            if null x then done := t
            else x := cdr x >>
          else if yylval = '!#if then x := nil . x
          else if yylval = '!#else and null x then done := t
          else if yylval = '!#elif and null x then <<
            read_s_expression();
            done := errorset(yylval, nil, nil);
            if errorp done or null car done then done := nil >> >>;
      w := lex_basic_token() >> >>;
    return w
  end;


% lex_basic_token() will read the next token from the current input stream
% and leave a value in yylval to show what was found.
% It recognize the quote prefix, as in '(lisp expression) and
% `(backquoted thing).  The return value is a numeric code.
% It leaves a variable lex_escaped true if the "word" that was
% read had any "!" characers used to escape parts of it.

global '(lex_peeked lex_peeked_yylval lex_peeked_escaped);

symbolic procedure lex_basic_token();
  begin
    scalar r, w;
% The item I peeked ahead and read will have started with a letter or an
% exclamation mark so should be a :symbol or some keyword, and not either
% a number or a string. And one further key fact is that it can not have
% started with a "#".
% Oh dear, what about the input
%     #!#if
% well that will return # and then #if, and because the inner "#if" is
%  introduced with an exclamation mark it can not cause nested attempts at
% look-ahead. Whew.
    if lex_peeked then <<
      r := lex_peeked;
      yylval := lex_peeked_yylval;
      lex_escaped := lex_peeked_escaped;
      lex_peeked := lex_peeked_yylval := lex_peeked_escaped := nil;
      return r >>;
    lex_escaped := nil;
% First skip over whitespace. Note that at some stage in the future RLISP
% may want to make newlines significant and partially equivalent to
% semicolons, but that is not supported at present.
    while lex_char = '!  or lex_char = !$eol!$ or
% I treat from "%" to the en dof a line as being comment.
          (lex_char = '!% and <<
            while not (lex_char = !$eol!$ or lex_char = !$eof!$) do yyreadch();
            t >>) do yyreadch();
% Symbols start with a letter or an escaped character and continue with
% letters, digits, underscores and escapes.
    if liter lex_char or
       (lex_char = '!! and <<
          yyreadch() where !*raise = nil, !*lower = nil;
          lex_escaped := t >>) then <<
      r := lex_char. r;
      while yyreadch() = '!_ or
            liter lex_char or
            digit lex_char or
            (lex_char = '!! and <<
               yyreadch() where !*raise = nil, !*lower = nil;
               lex_escaped := t >>) do r := lex_char . r;
% If there was a '!' in the word I will never treat it as a keyword.
% That situation is spottable by virtue of the variable lex_escaped.
% Note that list2widestring is passed a list of symbols here not integers,
% bur recent implementations of it support that case.
      yylval := intern list2widestring reversip r;
%     if !*tracelex then <<
%       princ "symbol is '"; prin yylval;
%       princ "' lex_escaped="; prin lex_escaped;
%       princ " lex_code="; print get(yylval, 'lex_code) >>;
      if not lex_escaped and (w := get(yylval, 'lex_code)) then return w
      else return lex_symbol_code >>
% Numbers are either integers or floats. A floating point number is
% indicated by either a point "." or an exponent marker "e". In the code
% here I keep a flag (in w) to indicate if I had a floating or integer
% value, but in the end I ignore this and hand back the lexical category
% for :number in both cases. At present I will not handle radix specifiers.
    else if digit lex_char then <<
      r := list lex_char;
      while << yyreadch(); digit lex_char >> do r := lex_char . r;
      if lex_char = '!. then <<
        w := t;       % Flag to indicate floating point
        r := lex_char . r;
        while << yyreadch(); digit lex_char >> do r := lex_char . r >>;
% I permit the user to write the exponent marker in either case.
      if lex_char = '!e or lex_char = '!E then <<
% If the input as 1234E56 I expand it as 1234.0E56
        if not w then r := '!0 . '!. . r;
        w := t;
        r := '!e . r;
        yyreadch();
        if lex_char = '!+ or lex_char = '!- then <<
          r := lex_char . r;
          yyreadch() >>;
% If there is no digit written after "E" I insert a zero. Thus overall the
% input 17E gets treated as 17.0E0
        if not digit lex_char then r := '!0 . r
        else <<
          r := lex_char . r;
          while << yyreadch(); digit lex_char >> do r := lex_char . r >> >>;
% Here I have a number, so I can use compress to parse it.
      yylval := compress reversip r;
      return lex_number_code >>
% Strings are enclosed in double-quotes, and "abc""def" is a string with
% a double-quote mark within it. Note no case folding on characters in a
% string.
    else if lex_char = '!" then <<
      begin
        scalar !*raise, !*lower;      % Make !*raise & !*lower both nil.
        repeat <<
          while not (yyreadch() = '!") do r := lex_char . r;
          r := lex_char . r;
          yyreadch() >> until not (lex_char = '!");
      end;
      yylval := list2widestring reversip cdr r;
      return lex_string_code >>
% "'" and "`"(backquote) introduce Lisp syntax S-expressions
    else if lex_char = '!' then <<
      yyreadch();
      read_s_expression();
      yylval := list('quote, yylval);
      return lex_list_code >>
    else if lex_char = '!` then <<
      yyreadch();
      read_s_expression();
      yylval := list('backquote, yylval);
      return lex_list_code >>
    else <<
      yylval := lex_char;
% I take special notice of end of file, since it is fairly drastic.
% In particular I do not attempt to advance lex_char beyond it. So I do
% TWO things here: I avoid advancing the input, and I return the lex_eof_code
% as an end-of-file indication.
      if yylval = !$eof!$ then return lex_eof_code;
      if yylval = '!# or get(yylval, 'lex_dipthong) then yyreadch()
      else lex_char := '! ;  % Try to avoid reading beyond where I HAVE to.
% There is a bit of horribly magic needed here. I want
%  #if #else #elif #endif #eval and #define
% to be accepted without needing an initial exclamation mark.
% The spelling "!#if" (etc) will already have been coped with,
% it is the case with no escape character I am concered
% about here, and that requires a 1-symbol look-ahead. Well even there
% the look ahead only has to consider a whole symbol if the character after
% the "#" is a letter (or an "!").
      if yylval = '!# and liter lex_char or lex_char = '!! then <<
        r := lex_basic_token();
% Observe that I only check yylval here not the type of token returned.
% That is because words like "if" and "define" stand a real chance of being
% keywords! For this to be safe it is important that lex_basic_token
% always updates yylval whatever it returns.
        if memq(yylval,'(if else elif endif define eval)) then <<
          yylval := intern list2widestring(
                      '!# . widestring2list symbol!-name yylval) >>
        else <<   % set up the peeked token for later processing.
          lex_peeked := r;
          lex_peeked_yylval := yylval;
          lex_peeked_escaped := lex_escaped;
          yylval := '!#;
          lex_escaped := nil >> >>;
        while w := atsoc(lex_char, get(yylval, 'lex_dipthong)) do <<
          yylval := cdr w;
          yyreadch() >>;
      if w := get(yylval, 'lex_code) then return w
      else return lex_symbol_code >>
  end;

%
% I use a hand-written recursive descent parser for Lisp S-expressions
% mainly because the syntax involved is so VERY simple. A rough sketch of
% the syntax required is given here, but in reality (in part because I do
% not want to have to report syntax errors) I implement a more liberal
% syntax, especially as it relates to dotted-pair notation. This of course
% is one of the natural dangers in using recursive descent... the syntax
% actually parsed is only properly defined by direct reference to the code.
%

% s_tail      =   ")" |
%                 "." s_expr ")" |
%                 s_expr s_tail;
% 
% s_vectail   =   "]" |
%                 s_expr s_vectail;
% 
% s_expr      =   symbol |
%                 number |
%                 string |
%                 "(" s_tail |
%                 "[" s_vectail |
%                 "'" s_expr |
%                 "`" s_expr |
%                 "," s_expr |
%                 ",@" s_expr;

dot_char     := char!-code '!.;
rpar_char    := char!-code '!);
rsquare_char := char!-code '!];

symbolic procedure read_s_expression();
 <<
% At the start of an S-expression I want to check for the characters
% "(", "[" and ",". Thus I need to skip whitespace.
    while lex_char = '!  or lex_char = '!$eol!$ do yyreadch();
    if lex_char = '!( then begin
      scalar r, w, w1;
      yyreadch();
      w := read_s_expression();
      while not (w = rpar_char or w = dot_char or w = 0) do <<
        r := yylval . r;
% Note that at the end of the list read_s_expression() will read the ")"
% as a token.
        w := read_s_expression() >>;
      if not (w = dot_char) then yylval := reversip r
      else <<
        read_s_expression();  % Thing after the "."
        w := yylval;
% Reverse the list putting a dotted item on the end.
        while r do <<
          w1 := cdr r;
          rplacd(r, w);
          w := r;
          r := w1 >>;
        yylval := w;
        while lex_char = '!  or lex_char = '!$eol!$ do
            yyreadch();
% When I find a ")" I do not read beyond it immediately, but reset lex_char
% to whitespace. This may help prevent unwanted hangups in interactive use.
        if lex_char = '!) then lex_char := '!   % turn ')' into a blank.
        else yyerror "Syntax error with '.' notation in a list" >>;
      return '!:list end
% "[" introduces a simple vector.
    else if lex_char = '![ then begin
      scalar r, w, w1;
      yyreadch();
      w := read_s_expression();
      w1 := -1;
      while not (w = rsquare_char or w = 0) do <<
        r := yylval . r;
        w1 := w1 + 1;
        w := read_s_expression() >>;
% Create a vector of the correct size and copy information into it.
      w := mkvect w1;
      r := reversip r;
      w1 := 0;
      while r do <<
        putv(w, w1, car r);
        w1 := w1 + 1;
        r := cdr r >>;
      yylval := w;
      return '!:list end
% I spot "," and ",@" here, and should wonder if I should (a) police that
% they are only expected to make sense within the scope of a "`" and (b)
% whether I ought to expand them in terms of LIST, CONS, APPEND etc here.
% For now I just hand back markers that show where they occured.
    else if lex_char = '!, then <<
      yyreadch();
      if lex_char = '!@ then <<
        yyreadch();
        read_s_expression();
        yylval := list('!,!@, yylval) >>
      else <<
        read_s_expression();
        yylval := list('!,, yylval) >>;
      'list >>
% Care with ")" and "]" not to read ahead further than is essential.
    else if lex_char = '!) or lex_char = '!] or lex_char = '!. then <<
      yylval := lex_char;
      lex_char := '! ;
      char!-code yylval >>      
% In most cases (including "'" and "`") I just hand down to read a token.
% This covers the cases of symbols, numbers and strings.
    else lex_basic_token() >>;




sml_precedence := '(!:left ("*" "/")
              ("+" "-")
       !:none ("<" "<=" "==" "neq" ">=" ">")
       !:right ":=" "="
       !:left ("then" "else" "return"))$

sml_grammar := '(
 (program
          (((listplus ";" expression) "eof") !$1))

 (expression
          ((funcall))
          ((expression "*" expression) (list 'times !$1 !$3))
          ((expression "/" expression) (list 'quotient !$1 !$3))
          ((expression "+" expression) (list 'plus !$1 !$3))
          ((expression "-" expression) (list 'difference !$1 !$3))
          ((expression "<" expression) (list 'lessp !$1 !$3))
          ((expression "<=" expression) (list 'lesseq !$1 !$3))
          ((expression "==" expression) (list 'equals !$1 !$3))
          ((expression "neq" expression) (list 'neq !$1 !$3))
          ((expression "=>" expression) (list 'geq !$1 !$3))
          ((expression ">" expression) (list 'greaterp !$1 !$3))
          ((expression ":=" expression) (list 'setq !$1 !$3))
          (("fun" funcall "=" expression) (list 'fun !$2 !$4))
          (("if" sequence "then" expression)
             (list 'cond (list !$2 !$4)))
          (("if" sequence "then" sequence "else" expression)
             (list 'cond (list !$2 !$4) (list t !$6)))
          (("go" (opt "to") !:symbol) (list 'go !$3))
          (("goto" !:symbol) (list 'go !$2))
          (("return" expression)))

(funcall
          ((closedexpression))
          ((funcall closedexpression)))

(closedexpression
          ((!:symbol))
          ((!:number))
          (((plus !:string))) % Several strings in a row just concatenate
          (("let" sequence "in" sequence "end") (list 'letstat !$2 !$4))
          (("(" exprlist ")") (cons 'paren !$2))
          (("(" sequence ")") (cons 'paren !$2))
          (("[" exprlist "]") (cons 'bracket !$2)))

(exprlist (((list "," expression))))

(sequence
          (((list ";" expression)))))$


g := lalr_create_parser(sml_precedence, sml_grammar)$

% I will now test things a bit. I will start with really trivial statements,
% move on to simple function declarations and then look at a fragment of code
% from the sml-tex project...

pparse g$
(* Maybe the first thing is that SML comments are written this way *)

val x = 3;
x + x;

fun f(a,b) = a + b;
f(22,33)

fun fact n =
  if n = 0 then 1 else n * fact(n-1);

fact 7;

fun rev2 [] b = b
  | rev2 (a :: ax) b = rev2 ax (a :: b);

rev2 [1 2 3 4 5] [];

(* Now the start of the TeX-in-SML material *)


signature GENERAL  =
sig
  val sum: int list -> int
  val Max: int list -> int
  val concat: 'a list list -> 'a list
  val contains:  ''a list -> ''a -> bool
  val revAppend:  'a list -> 'a list -> 'a list      (* rev a @ b *)
  val optVal:     'a -> 'a option -> 'a
  val optMap:     ('a -> 'b) -> 'a option -> 'b option
  val optFold:    'b -> ('a -> 'b) -> 'a option -> 'b
  val lookUp:       ''a -> (''a * 'b) list -> 'b option
end  (* signature GENERAL *)
(*----------*)

structure General: GENERAL  =
struct
(* Since functions such as `fold' and `exists' depend on the version,
   I program everything from the basic constructors. *)

  fun round r  =  trunc (r + 0.5)         (* "truncate" in other versions *)

  fun fold g c  =  let fun f    []     =  c
                       |   f (h :: t)  =  g (h, f t)
                   in  f  end

  val sum     =  fold (op +) 0
  val Max     =  fold Int.max 0

  (* This cannot be partially applied as otherwise we will have free type
     variables *)
  fun concat l =  fold (op @) [] l

  fun contains list x  =  let fun f    []     =  false
                              |   f (h :: t)  =  (h = x)  orelse  f t
                          in  f list  end

  fun revAppend    []     yl  =  yl
  |   revAppend (x :: xl) yl  =  revAppend xl (x :: yl)

  fun optMap f  =  fn NONE    =>  NONE
                   |  SOME x  =>  SOME (f x)

  fun optFold y f  =  fn NONE    =>  y
                      |  SOME x  =>  f x
 
  fun optVal y  =  optFold y (fn x => x)

  fun lookUp x  =
  let fun searchx          []        =  NONE
      |   searchx ((x', y) :: rest)  =  if  x = x'  then  SOME y
                                        else  searchx rest
  in  searchx  end

end  (* structure General *)


eof

end;

