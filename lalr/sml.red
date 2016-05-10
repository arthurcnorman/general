load_package lalr;

lisp;

lalr_precedence ();

lalr_create_parser '(

% Constants for SML should be
%     int      [~]<digits>
%              [~]0x<hexdigits>
%     float    [~]<digits>.<digits>[e[~]<digits>]
%     word     0w<digits>
%              0wx<hexdigits>
%     string   "<chars>"        may use "\" based escape sequence
%     char     #"<1-char>"

 (con    ((!:number))      % Needs int vs. float, also hex input
         (("~" !:number))  % and needs 'char' too.
         ((!:string)))

 (id     ((!:symbol))

 (var    (("'" !:symbol))
         (("''" !:symbol)))

 (longid ((id))
         ((longid "." id)))

 (lab    ((id))
         ((num)))

 (tupletail
         ((")"))
         (("," exp tupletail)))

 (listail
         (("]"))
         (("," exp listail)))

 (seqtail
         ((")"))
         ((";" exp seqtail)))

 (seqexps
         (())
         ((";" exp seqexps)))

 (exp    ((con))
         ((longid))
         (("op" longid))
         ((exp exp))
         ((exp id exp))
         (("(" exp tupletail))
         (("{" "}"))
         (("{" exprow "}"))
         (("#" lab))
         (("[" "]"))
         (("[" exp listail))
         (("(" exp ";" exp seqtail))
         (("let" dec "in" exp seqexps "end"))
         ((exp ":" type))
         (("raise" exp))
         ((exp "handle" match))
         ((exp "andalso" exp))
         ((exp "orelse" exp))
         (("if" exp "then" exp "else" exp))
         (("while" exp "do" exp))
         (("case" exp "of" match))
         (("fn" match)))

 (exprow ((lab "=" exp))
         ((lab "=" exp "," exprow)))

 (match  ((pat "=>" exp))
         ((pat "=>" exp "|" match)))

 (pat
 (patrow
 (typ
 (typrow
 (dec
 (valbind
 (funbind
 (funmatch
 (typbind
 (datbind
 (conbind
 (exnbind
 (str
 (strbind
 (sig
 (typrefin
 (spec
 (valdesc
 (typdesc
 (detdesc
 (condest
 (exndesc
 (strdesc
 (prog
 (fctbind
 (sigbind

  );


 
