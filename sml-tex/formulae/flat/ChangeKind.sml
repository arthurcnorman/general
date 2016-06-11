
  val rec listKind  =
  fn  []                  =>   None
  |   INoad (k, _) :: _   =>   k
  |   _            :: t   =>   listKind t

  val checkPrev  =  contains [Bin, Op, Rel, Open, Punct, None]
  val checkNext  =  contains [Rel, Close, Punct, None]

  fun changeKind  prevKind  Bin  rest  =
        if  checkPrev prevKind  orelse  checkNext (listKind rest)
        then  Ord  else  Bin
  |   changeKind  _  k  _   =   k
