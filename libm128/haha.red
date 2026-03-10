
on rounded;
precision 60;

share www;

algebraic procedure hex128 n;
  begin
    scalar x := -1;
    while n >= 1 do <<
      n := n/2.0;
      x := x+1 >>;
    while n < 0.5 do <<
      n := 2.0*n;
      x := x-1 >>;
    symbolic princ "0x";
    for i := 1:16 do <<
      n := 16.0*n;
      d := fix n;
      n := n - d;
      www := d;
      symbolic prinhex www >>;
    symbolic princ ",0x";
    for i := 1:16 do <<
      n := 16.0*n;
      d := fix n;
      n := n - d;
      www := d;
      symbolic prinhex www >>;
    symbolic princ ",0x";
    for i := 1:16 do <<
      n := 16.0*n;
      d := fix n;
      n := n - d;
      www := d;
      symbolic prinhex www >>;
    symbolic princ ",";
    symbolic prin x;
    symbolic printc "),"
  end;

for i := -15:15 do <<
  symbolic princ "working_float(";
  hex128 (10.0^i) >>;

for i := -15:15 do <<
  symbolic princ "working_float(";
  hex128 (10.0^(16*i)) >>;

for i := -19:19 do <<
  symbolic princ "working_float(";
  hex128 (10.0^(16*16*i)) >>;

for i := -1:1 do <<
  symbolic princ "working_float(";
  hex128 (10.0^(20*16*16*i)) >>;

quit;


