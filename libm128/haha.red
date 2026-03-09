lisp;

for i := 1:16 do <<
  p := 128+8;
  x := 0;
  while (w := 2^p/10^i) < 2^(127+8) do << p := p+1; x := x-1 >>;
  prin i; princ ") "; prin x; princ " "; printhex divide(w, 2^(64+8)) >>;

end;

