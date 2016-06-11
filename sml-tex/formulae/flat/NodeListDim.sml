(*
 * fun compute f g nl  =  f (map g nl)
 * val hlistWidth   =  compute sum width
 * val hlistHeight  =  compute Max height
 * val hlistDepth   =  compute Max depth
 * val vlistWidth   =  compute Max vwidth
 * val vlistVsize   =  compute sum vsize
 *)

fun hlistWidth [] = 0
  | hlistWidth (a :: b) = width a + hlistWidth b;

fun hlistHeight [] = 0
  | hlistHeight (a :: b) = Int.max(height a, hlistHeight b);

fun hlistDepth [] = 0
  | hlistDepth (a :: b) = Int.max(depth a, hlistDepth b);

fun vlistWidth [] = 0
  | vlistWidth (a :: b) = Int.max(vwidth a, vlistWidth b);

fun vlistVsize [] = 0
  | vlistVsize (a :: b) = vsize a + vlistVsize b;

