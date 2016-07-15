(* charmetrics1.sml *)

(* Load this file into Poly/SML once to dump a data file that will
 * contain all the font metrics. I do things this way because Poly/ML
 * took a VERY long time (well perhaps 10 minutes) to read in the
 * font table when it was all presented as single list. I now split
 * it into multiple parts and then concatenate them and the file only
 * takes around 20 seconds to process, but this is still somewhat
 * tedious.
 *)

(* To perform boolean operations on 32-bit integers I need to turn things
   into LargeWord items. This looks clumsy and maybe something simpler
   would be OK (eg maybe I do not need to go via LargeInt) but of this
   works I will feel OK.
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


val c_kerninfo = ref 0;

fun lookupchar1 fullkey row =
   SOME row;

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
    val fullkey = <<(fontnum, 16) + cp1
    val key = >>(fullkey, 2)
    val h1 = key mod 10057
    val w = getv metrics_hash h1;
    val v = andb((getv w 0), 0x7ffff)
  in
    if v = key then lookupchar1 fullkey w
    else let
      val h2 = (key mod 4955) + 5000;
      val w = getv metrics_hash h2;
      val v = andb((getv w 0), 0x7ffff)
    in
      if v = key then lookupchar1 fullkey w
      else let
        val h3 = (h1 + h2) mod 10057;
        val w = getv metrics_hash h3;
        val v = andb((getv w 0), 0x7ffff)
      in
        if v = key then lookupchar1 fullkey w
        else NONE
      end
    end
  end;

(* #"f" *)
lookupchar F_Math 0x66; 

(* The old Reduce code...

symbolic procedure lookupchar(fontnum, codepoint);
  begin
    scalar v, h1, h2, w, whi, wlo, fullkey, key;
% pack codes into fewer bits
    if fontnum < 2 then <<
      if land(codepoint, 0xd800) = 0xd800 then codepoint := 0xffff
      else if codepoint >= 0x10000 then <<
        if codepoint < 0x10800 then codepoint := 0xd800 + land(codepoint, 0xfff)
        else codepoint := 0xffff >> >>
    else if codepoint >= 0x4000 and codepoint < 0x8000 then codepoint := 0xffff
    else if codepoint >= 0x1d000 and codepoint < 0x1e000 then
      codepoint = 0x4000 + land(codepoint, 0xfff)
    else if codepoint >= 0x108000 and codepoint < 0x109000 then
      codepoint = 0x5000 + land(codepoint, 0xfff)
    else if codepoint >= 0x10000 then codepoint := 0xffff;
    fullkey := lshift(fontnum, 16) + codepoint
    key := lshift(fullkey, -2);
    h1 := remainder(key, 10057);
    % Hash table probe 1.
    v := land(getv32(w := getv(metrics_hash!*, h1), 0), 0x7ffff);
    if not (v = key) then <<
      h2 := remainder(key, 4955) + 5000;
      % Hash table probe 2.
      v := land(getv32(w := getv(metrics_hash!*, h2), 0), 0x7ffff);
      if not (v = key) then <<
        h1 := h1 + h2;
        if h1 >= 10057 then h1 := h1 - 10057;
        % Hash table probe 3.
        v := land(getv32(w := getv(metrics_hash!*, h1), 0), 0x7ffff);
        if not (v = key) then return nil >> >>;
    v := 2*land(fullkey, 3);
    wlo := getv32(w, v+2);
    if wlo = 0 then return nil; % in hash table but no character here.
    whi := getv32(w, v+3);
    c_width := land(lshift(whi, -19), 0x1fff);
    c_llx := land(lshift(whi, -6), 0x1fff) - 3000;
    c_lly := land(lshift(wlo, -26), 0x3f) +
             land(lshift(whi, 6), 0xfc0) - 1000;
    c_urx := land(lshift(wlo, -13), 0x1fff) - 500;
    c_ury := land(wlo, 0x1fff) - 1000;
    if v = 0 then c_kerninfo := land(lshift(getv32(w, 0), -19), 0x7ff)
    else if v = 2 then c_kerninfo := land(lshift(getv32(w, 0), -30), 0x3) +
                                     land(lshift(getv32(w, 1), 2), 0x7fc)
    else if v = 4 then c_kerninfo := land(lshift(getv32(w, 1), -9), 0x7ff)
    else c_kerninfo := land(lshift(getv32(w, 1), -20), 0x7ff);
    if not zerop c_kerninfo then
      c_kerninfo := c_kerninfo + getv16(fontkern!*, fontnum);
    return t
  end;

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


