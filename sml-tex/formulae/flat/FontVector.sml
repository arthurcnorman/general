(* Idea: famFont will compute a font number from family and style.
   This number is used to look up the font in fontVector.
   Vector fontVector is built from the repetition free list famSizePairs
   which enumerates all possibly needed pairs (family, size in pt).
   Function number computes this repetition free list,
   and the font numbers to index it.
*)

  ;"Start of FontVector.sml";

  fun prod (xl, yl)  =  List.concat (map (fn x => map (fn y => (x, y)) yl) xl)

  ;"Line 13 of FontVector.sml";

  fun getNum x xl  =	(* index in list, starting with 1 *)
  let fun getNum' _    []     =  NONE
      |   getNum' n (h :: t)  =  if  x = h  then  SOME n
                                            else  getNum' (n + 1) t
  in  getNum' 1 xl  end

  ;"Line 21 of FontVector.sml";

  (* compiles list into list of indexes and repetition free list *)
  fun number xl  =
  let fun number' _ _        []     =  ([], [])
      |   number' n found (h :: t)  =
          case  getNum h found  of
            SOME nr  =>  let val (nums, elems)  =  number' n found t
                         in  ((n - nr) :: nums, elems)  end
          | NONE     =>  let val (nums, elems)  =  number' (n+1) (h :: found) t
                         in  (n :: nums, h :: elems)  end
  in  number' 0 [] xl  end


  ;"Line 35 of FontVector.sml";
  val (fontNumbers, famSizePairs)  =
  let val famStyleList  =  prod ([RM, MI, SY, EX], [D, T, S, SS])
      val famSizeList   =  map (fn (fam, st) => (fam, size fam st)) famStyleList
  in  number famSizeList  end

  ;"Line 41 of FontVector.sml";

  val fontNumberVector  =  vector fontNumbers
  val famSizeVector     =  vector famSizePairs
  val fontVector        =  vector (map loadFont famSizePairs)

  ;"Line 47 of FontVector.sml";
