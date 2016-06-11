(* Since functions such as `fold' and `exists' depend on the version,
   I program everything from the basic constructors. *)

  fun round r  =  trunc (r + 0.5)         (* "truncate" in other versions *)

  fun sum [] = 0
    | sum (a :: b) = a + sum b

  fun Max [] = 0
    | Max (a :: b) = Int.max(a, Max b)

  fun concat [] = []
    | concat (a :: b) = a @ concat b

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

