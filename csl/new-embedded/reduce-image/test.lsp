(setq !*echo t)
(enable!-errorset 3 3)
(de fact (n)
  (if (zerop n)
      1
      (times n (fact (sub1 n)))))
(fact 9)
(stop 0)
