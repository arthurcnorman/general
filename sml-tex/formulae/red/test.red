
%(*
%*)
%open Input
%
%fun test f x  =  (f x) handle (ex as BasicTypes.NotImplemented s)
%              => (print "        ---> "; print s; print " <---"; raise ex)
%

symbolic procedure test(f, x); apply(f, list x);

%val disp = test Formula.displayFormula
%val line = test Formula.inlineFormula

symbolic procedure disp u; displayFormula u;
symbolic procedure line u; inlineFormula u;

%
%fun form_ formula  =  ShipOut.shipOut [disp formula, line formula]

symbolic procedure form_ formula;
  shipOut list(disp formula, line formula);

%
%val bigop  =  sum (SOME (trans "i=1")) (SOME (trans "n"))
%
fluid '(bigop);

bigop := sum(SOME trans "i=1", SOME trans "n");

%val mlar = trans "1+2=3"
fluid '(mlar);
mlar := trans "1+2=3";

%val mlop = [bigop]
fluid '(mlop);
mlip := list bigop;

%val mleq = bigop :: trans "i=" @ [fraction (trans "n.(n+1)") (trans "2")]
fluid '(mleq);
mleq := bigop . append(trans "i=", list(fraction(trans "n.(n+1)", trans "2")));

%val one  = trans "1"
fluid '(one);
one := trans "1";

%fun scr s  =  let val nuc = trans s
%              in  [sub nuc one, sup nuc one, supsub nuc one one]  end

symbolic procedure scr s;
  begin
    scalar nuc;
    nuc := trans s;
    return list(sub(nuc, one), sup(nuc, one), subsup(nuc, one, one))
  end;

%val mlss  =  scr "M" @ scr "P" @ scr "g" @ scr "f" @ scr "ac" @ scr "ab"

fluid '(mlss);
mlss := append(scr "M", append(scp "P", append(scr "g", append(src "f",
    append(scr "ac", scr "ab")))));

%
%fun fss f  =  let val One = SOME one
%              in  [f One NONE, f NONE One, f One One]  end
%
symbolic procedure fss f;
  begin
    scalar One_;
    One_ := SOME one;  % I use an underscore to avoid case clash!
    return list(apply(f, list(One, nil)),
                apply(f, list(nil. One)),
                apply(f, list(One, One)));
  end;

%val mlss'  =  fss sum @ fss int @ scr "a" @ scr "b" @ scr "aa" @ scr "ab"
%
fluid '(mlss_);

mlss_ := append(fss 'sum, append(fss 'int, append(scr "a",
  append(scr "b", append(scr "aa", scr "ab")))));

%val overmlss'  =  [overline mlss']
%
fluid '(overmlss_);
overmlss_ := list overline mlss_;

%val out = ShipOut.shipOut


%fun test1 ()  =  out [disp mlar, line mlar, disp mleq, line mleq]

symbolic procedure test1();
  shipOut list(disp mlar, line mlar, disp mleq, line mleq);

%fun test2 ()  =  out [disp mlss', disp overmlss', line mlss', line overmlss']
%
symbolic procedure test2();
  shipOut list(disp mlss_, disp overmlss_, line mlss_, line overmlss_);

%

% I will convert the tests for accents and delimiters etc later on. It I
% can get test1 and test2 working at all I will start to feel amazed!


%
%val mlaccents = accent "check" (trans "a") :: trans "+" @
%                accent "check" (trans "T") :: trans "+" @
%                accent "hat" (trans "a")   :: trans "+" @
%                [accent "tilde" (trans  "g")]
%val mlwidehat = accent "widehat" (trans "a")   :: trans "+" @
%                accent "widehat" (trans "aa")  :: trans "+" @
%                [accent "widehat" (trans "aaa")]
%val two = trans "2";
%val mlaccentscripts = accent "check" (trans "a")           :: trans "+" @
%                      trans "a+" @
%                      sup [accent "check" (trans "a")] two :: trans "+" @
%                      sup (trans "a") two :: trans "+" @
%                      sub [accent "check" (trans "a")] two :: trans "+" @
%                      sub (trans "a") two :: trans "+" @
%                      supsub [accent "check" (trans  "a")] two two :: trans "+" @
%                      [supsub (trans "a") two two]
%
%fun testaccents () = out [line mlwidehat, line mlaccents, line mlaccentscripts]
%
%val mlradical = sqrt (trans "a") :: trans "=" @
%                sqrt (trans "2x-3") :: trans "." @
%                [sqrt [(supsub (trans "y") one one)]]
%fun testradical () = out [disp mlradical]
%
%val mltall' = [atop [atop mlar mlar] [atop mlar mlar]]
%val mltall = [atop mltall' mltall']
%val mldelims = MathTypes.LeftRight (delim "lparen", mlar, delim "rparen") :: trans "+" @
%               MathTypes.LeftRight (delim "langle", mleq, delim "rangle") :: trans "+" @
%               [MathTypes.LeftRight (delim "lbracket", mltall, delim "rbracket")]
%fun testdelims () = out [line mldelims, disp mldelims]

end;
