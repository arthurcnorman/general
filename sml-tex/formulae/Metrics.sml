(* charmetrics1.sml *)

(* This decodes stuff from the "charmetrics.sml" hash tables to give
 * information about characters in the SYTIX (and cmuntt and odokai)
 * fonts.
 *)

(* To perform boolean operations on 32-bit integers I need to turn things
   into LargeWord items. This looks clumsy and maybe something simpler
   would be OK (eg maybe I do not need to go via LargeInt) but of this
   works I will feel OK. At least this seems to work on Poly/ML - but
   in general SML may not provide very good guarantees about the width
   of integers that it supports.
 *)

fun andb(a, b) =
   Int.fromLarge (
      LargeWord.toLargeInt (
         LargeWord.andb (
            LargeWord.fromLargeInt (
               LargeInt.toLarge a),
            LargeWord.fromLargeInt (
               LargeInt.toLarge b))));

fun orb(a, b) =
   Int.fromLarge (
      LargeWord.toLargeInt (
         LargeWord.orb (
            LargeWord.fromLargeInt (
               LargeInt.toLarge a),
            LargeWord.fromLargeInt (
               LargeInt.toLarge b))));

fun notb a =
   Int.fromLarge (
      LargeWord.toLargeInt (
         LargeWord.notb (
            LargeWord.fromLargeInt (
               LargeInt.toLarge a))))

fun <<(a, n) =
   Int.fromLarge (
      LargeWord.toLargeInt (
         LargeWord.<< (
            LargeWord.fromLargeInt (
               LargeInt.toLarge a),
               Word.fromInt n)));

fun >>(a, n) =
   Int.fromLarge (
      LargeWord.toLargeInt (
         LargeWord.>> (
            LargeWord.fromLargeInt (
               LargeInt.toLarge a),
               Word.fromInt n)));

fun getv v n = Vector.sub(v, n);



fun lookupchar fontnum codepoint =
  let
    val cp1 =
(* I first map the font code and (21-bit) codepoint so that codepoints use
   only 16 bits, with certain invalid or unused ranges mapped onto the
   value 0xffff (which does not represent a valid character). The messy
   set of tests here are mostly present because in a hash table I need to
   store keys (as well as values) and if I did not compress the keys
   somewhat I would be very tight on bits when fitting my table into
   a collection of 32-bit words.
 *)
      if fontnum < 2 then
        if andb(codepoint, 0xd800) = 0xd800 then 0xffff
        else if codepoint >= 0x10000 then
          if codepoint < 0x10800 then 0xd800 + andb(codepoint, 0xfff)
          else 0xffff
        else codepoint
      else if codepoint >= 0x4000 andalso codepoint < 0x8000 then 0xffff
      else if codepoint >= 0x1d8000 andalso codepoint < 0x1d9000 then
        0x5000 + andb(codepoint, 0xfff)
      else if codepoint >= 0x10000 then 0xffff
      else codepoint
(* I combine the (reduced) codempoint with the font number to get a key *)
    val fullkey = <<(fontnum, 16) + cp1
    val key = >>(fullkey, 2)
(* My first hash location is merely the key reduced modulo the hash table
   size. This is clearly rather cheap and simplistic, but turns out to
   be good enough.
 *)
    val h1 = key mod hashsize
    val w = getv metrics_hash h1;
    val v = andb((getv w 0), 0x7ffff)
  in
(* If I find my character at its first choice location can unpick information
   and the sub-function lookupchar1 does that.
 *)
    if v = key then lookupchar1 fullkey w fontnum
    else let
(* A second hash function is an offset version of the key modulo a different
   number. These two numbers were chosen following an exhausive search to
   find values that led to high hash table occupancy.
 *)
      val h2 = (key mod CHAR_METRICS_MODULUS) + CHAR_METRICS_OFFSET;
      val w = getv metrics_hash h2;
      val v = andb((getv w 0), 0x7ffff)
    in
      if v = key then lookupchar1 fullkey w fontnum
      else let
(* A third (and final) hash function is simply the sum of the previous two,
   obviously reduced modulo the table size.
 *)
        val h3 = (h1 + h2) mod hashsize;
        val w = getv metrics_hash h3;
        val v = andb((getv w 0), 0x7ffff)
      in
        if v = key then lookupchar1 fullkey w fontnum
(* If the character was not present I will return NONE *)
        else NONE
      end
    end
  end

and lookupchar1 fullkey row fontnum =
  let
    val v = 2*andb(fullkey, 3)
    val wlo = getv row (v+2)
  in
    if wlo = 0 then NONE
    else
      let
        val whi = getv row (v+3)
        val width = andb(>>(whi, 19), 0x1fff)
        val llx   = andb(>>(whi, 6),  0x1fff) - 3000
        val lly   = andb(>>(wlo, 26), 0x3f) +
                    andb(<<(whi, 6),  0xfc0) - 1000
        val urx   = andb(>>(wlo, 13), 0x1fff) - 500
        val ury   = andb(wlo, 0x1fff) - 1000
        val ki =
          if v = 0      then andb(>>(getv row 0, 19), 0x7ff)
          else if v = 2 then andb(>>(getv row 0, 30), 0x3) +
                             andb(<<(getv row 1, 2), 0x7fc)
          else if v = 4 then andb(>>(getv row 1, 9), 0x7ff)
          else (* v = 6 *)   andb(>>(getv row 1, 20), 0x7ff);
        val kerninfo =
          if ki = 0 then 0
          else ki + (getv fontkern fontnum)
      in 
        SOME (width, llx, lly, urx, ury, kerninfo)
      end
  end;



(* #"f" *)
lookupchar F_Math 0x66; 

(* The old Reduce code...


symbolic procedure lookupkernadjustment codepoint;
  begin
    scalar i, w;
    if zerop (i := c_kerninfo) then return 0;
 a: w := getv32(kerntable!*, i);
    if land(w, 0x001fffff) = codepoint and
      zerop land(w, 0x00200000) then <<
        w := land(lshift(w, -23), 0x1ff);
        if not zerop land(w, 0x100) then w := w - 0x200;
        return w >>
    else if not zerop land(w, 0x00400000) then return 0;
    i := add1 i;
    go to a
  end;

symbolic procedure lookupligature codepoint;
  begin
    scalar i, w;
    if zerop (i := c_kerninfo) then return nil;
 a: w := getv32(kerntable!*, i);
    if land(w, 0x001fffff) = codepoint and
      not zerop land(w, 0x00200000) then
        return getv32(ligaturetable!*, land(lshift(w, -23), 0x1ff))
    else if not zerop land(w, 0x00400000) then return nil;
    i := add1 i;
    go to a
  end;

symbolic procedure accentposition codepoint;
  begin
    scalar h1, h2, v, w;
    h1 := remainder(codepoint, 153);
    % Hash table probe 1.
    v := land(w := getv32(topcentre_hash!*, h1), 0x1fffff);
    if not (v = key) then <<
      h2 := remainder(key, 88) + 64;
      % Hash table probe 2.
      v := land(w := getv32(topcentre_hash!*, h2), 0x1fffff);
      if not (v = key) then return 0 >>;
    return lshift(w, -21)
  end;

end;

% Note that variants must be passed a codepoint and direction flag
symbolic procedure variants key;
  begin
    scalar h1, h2, h3, v, w;
    h1 := remainder(key, 104);
    % Hash table probe 1.
    v := getv32(w := getv(variant_hash!*, h1), 0);
    if not (v = key) then <<
      h2 := remainder(key, 51) + 53;
      % Hash table probe 2.
      v := getv32(w := getv(variant_hash!*, h2), 0);
      if not (v = key) then <<
         h3 := remainder(h1 + h2, 104);
         % Hash table probe 3.
         v := getv32(w := getv(variant_hash!*, h3), 0);
         if not (v = key) then return nil >> >>;
    return w
  end;

symbolic procedure extension key;
  begin
    scalar h1, h2, h3, v, w;
    h1 := remainder(key, 142);
    % Hash table probe 1.
    v := getv32(w := getv(extension_hash!*, h1), 0);
    if not (v = key) then <<
      h2 := remainder(key, 101) + 3;
      % Hash table probe 2.
      v := getv32(w := getv(extension_hash!*, h2), 0);
      if not (v = key) then <<
         h3 := remainder(h1 + h2, 142);
         % Hash table probe 3.
         v := getv32(w := getv(extension_hash!*, h3), 0);
         if not (v = key) then return nil >> >>;
    return w
  end;

end;

*)


(* end of Metrics.sml *)


