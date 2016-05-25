signature ACCENT  =
sig
  val makeAccent: BasicTypes.style -> BasicTypes.family -> BasicTypes.charCode
  -> BoxTypes.box -> BoxTypes.box
end  (* signature ACCENT *)
(*----------*)

structure Accent: ACCENT  =
struct
  open BasicTypes;  open BoxTypes
  fun makeAccent  st fam ch box  =  
  let fun min a b = if a < b then a else b
      fun max a b = if a > b then a else b
      val x     = box
      val u     = #width box
      val s     = 0 (* or kern for nuc followed by \skewchar *)
      val ch'   = ch (* or successor w/width <= u *)
      val chi   = StyleParams.xHeight st
      val delta = min (#height x) chi
      val y     = BoxPack.boxList (MakeChar.makeChar st fam ch)
      val y'    = Box (s + Distance.half (u - (#width y)), y)
      val vl    = [y', Kern (~delta), Box0 x]
      val w = #width x and h = #height x and d = #depth x
  in { kind=VBox, width=w, depth=d, height=h, content=vl, glueParam=natural } end
end  (* structure Accent *)

(*
let val accent = BoxPack.boxList (MakeChar.makeChar st fam ch)
      val (Box (0, boxx)) = MakeAtop.makeAtop st accent box
  in boxx end
*)