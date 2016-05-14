// fakecsl.cpp                                  Copyright (C) 2016 Codemist    

// test harness for lisphash.cpp

// $Id$


#include "fakecsl.h"

///////////////////////////////////////////////////////////////////////////////
LispObject getvector(int tag, int type, size_t size)
{
    char *r = (char *)malloc(doubleword_align_up(size));
    *((Header *)r) = type + (size << (Tw+5)) + TAG_HDR_IMMED;
    return (LispObject)(r + tag);
}

LispObject getvector_init(size_t n, LispObject k)
{   LispObject p, nil;
    push(k);
    p = getvector(TAG_VECTOR, TYPE_SIMPLE_VEC, n);
    pop(k);
    errexit();
    if (!SIXTY_FOUR_BIT && ((n & 4) != 0))
        n += 4;   // Ensure last doubleword is tidy
    while (n > CELL)
    {   n -= CELL;
        *(LispObject *)((char *)p - TAG_VECTOR + n) = k;
    }
    return p;
}
///////////////////////////////////////////////////////////////////////////////

static LispObject get_hash_vector(size_t n)
{   LispObject v, nil = C_nil;
// If my tavle is going to have over 256K slots (ie if it will have 512K
// slots or more) I will arrange it as an index vector with each sub-vector
// being of size 2^17 (=131072) slots. The idea here is to keep the
// individual sub-vectors a size that will not cause complete chaos by
// way of fragmentation for the storage allocator. I rather hope that hash
// tables that are this size will be very rare and that they will only get
// used on machines that have vast amounts of memory and so that I will
// never have trouble! On a 32-bit machine each chunk will be 512KB while
// on a 64-bit one they will be megabyte sized.
#define HASH_CHUNK_SIZE 0x20000
    if (n > 2*HASH_CHUNK_SIZE)
    {   size chunks = n/HASH_CHUNK_SIZE; // Will be at least 4.
        size_t i;
        v = getvector_init(CELL*(chunks+1), nil);
        vechdr(v) ^= (TYPE_SIMPLE_VECTOR ^ TYPE_OBJECT); // mark as index
        errexit();
        for (i=0; i<chunks; i++)
        {   LispObject v1;
            push(v);
            v1 = getvector_init(CELL*(HASH_CHUNK_SIZE+1), SPID_HASH0);
            pop(v);
            errexit();
            elt(v, i) = v1;
        }
    }
    else return getvector_init(CELL*(n+1), SPID_HASH0);
    return v;
}

static inline LispObject hashelt(LispObject v, size_t n)
{
    if (type_of_header(vechdr(v)) == TYPE_SIMPLE_VECT) return elt(v, n);

}

LispObject Lmkhash(LispObject nil, int nargs, ...)
//
// (mkhash size flavour growth)
//
// size suggests how many items can be inserted before re-hashing
// occurs. flavour is 0, 1, 2, 3 or 4 corresponding to hash tables
// that use EQ, EQL, EQUAL, EQUALS or EQUALP. The value 5 is special
// and is for use by the package system (oblist, symbol table) where
// the key will be "boffo" and an insert operation must create a new
// symbol.
// "growth" is ignored. In Common Lisp it was intended to suggest how
// much to expand the table by on overflow, but for practical reasons
// I will always double it. So I view it as (yet another) place where the
// Common Lisp design was not quite sensible.
//
// If flavour is not a number it might be a dotted pair (hashfn . eqfn)
// where hashfn is a user-provided function to compute hash values (which
// will actually be permitted to be anything at all, since I will then
// hash the output again as if hashing under EQL - but I expect that really
// I expect numeric hash values), and eqfn is a function used to compare
// items. [this facility may not be implemented at first]
//
{   va_list a;
    size_t size1, size2;
    LispObject v, v1, v2, size, flavour, growth;
    argcheck(nargs, 3, "mkhash");
    va_start(a, nargs);
    size = va_arg(a, LispObject);
    flavour = va_arg(a, LispObject);
    growth = va_arg(a, LispObject);
    va_end(a);
    simple_msg("mkhash: type=", flavour);
// I allow fixnums or bignums as size spacifiers.
    if (is_fixnum(size)) size1 = int_of_fixnum(size);
    else if (is_numbers(size) && is_bignum(size)) size1 = 1000000;
    else  return aerror1("mkhash", size);
// I treat clip the size range to [4 .. 1000000]. Table that end up larger
// can grow on need.
    if (size1 > 1000000) size = 1000000;
    else if (size1 < 4) size1 = 4;
    if (!is_fixnum(flavour) && !consp(flavour))
        return aerror1("mkhash", flavour);
// I will make the initial size a power of 2 such that wiith "size"
// entries present the table will be about between 30% and 60% full.
    size1 = 5*((size1+1)/3);
// The smallest hash table I will ever create will have 8 slots in the
// table. The space saving for anything smaller will be rather modest,
// especially given that there is a hash table header record. You will
// only get this tiny table if you indicate an target size of 4 or less.
    size2 := 8;
    while size2 < size1 do size2 := 2*size2;
// Huge hash tables will be stored (internally) in chunks.
// get_hash_vector will allocate either a single vector of the
// indicated size or an index vector with a number of subsidiary data ones.
// The size is passed as a cell-count.
    v1 = get_hash_vector(size2);
    errexit();
    push(v1);
    v2 = get_hash_vector(size2);
    errexitn(1);
    push(v2);
    v = getvector_init(7*CELL, nil);
    pop2(v1, v2);
    errexit();
    elt(v, 0) = flavour;             // comparison method for hash operations.
    elt(v, 1) = fixnum_of_int(0);    // current number of items stored.
    elt(v, 2) = fixnum_of_int(size2);// current size of table countin in items.
    elt(v, 3) = v1;                  // key table.
    elt(v, 4) = v2;                  // value table.
    elt(v, 5) = nil;                 // current multiplier
// If the "multiplier" is stored as NIL then a default value will be used.
// Otherwise there will be a 64-bit integer stored in this location, and
// extracting it for use will be an unwelcome extra cost.
    vechdr(v1) ^= (TYPE_SIMPLE_VEC ^ TYPE_HASH);
    return onevalue(v1);
}

//
// I use the following while combining parts of a structure to compute a
// hash value. It may not be totally wonderful (I would need to soak my mind
// in pseudo-random numbers to do a really good job) but it will probably
// serve for now.
//

static uint64_t update_hash(uint64_t prev, uint64_t data)
{   prev = prev ^ data;
    prev = prev ^ (prev >> 11);
    prev = prev ^ ((prev & 0xffffff) * 169);
    return prev & 0x7fffffff;
}

static uint64_t hash_eql(LispObject key)
//
// Must return same code for two eql numbers.  This is remarkably
// painful! I would like the value to be insensitive to fine details
// of the machine I am running on.
//
{   simple_msg("hash_eql: ", key);
    if (is_bfloat(key))
    {   int32_t h = type_of_header(flthdr(key));
//
// For floating point values I look at the binary representation of
// the number.
//
        union nasty
        {   double fp;
            uint32_t i[2];
        } nasty_union;
//        union nasty2
//        {   float128_t fp;
//            uint32_t i[sizeof(float128_t)/4];
//        } nasty2_union;
        nasty_union.i[0] = nasty_union.i[1] = 0;
        switch (h)
        {   case TYPE_SINGLE_FLOAT:
                nasty_union.fp = (double)single_float_val(key);
//
// A *horrid* issue arises here in that (EQL 0.0 -0.0) will be true
// hence 0.0 and -0.0 must hash to the same value. Hence the following
// line even if at first sight it looks ridiculous!
//
                if (nasty_union.fp == -0.0) nasty_union.fp = 0.0;
                break;
            case TYPE_DOUBLE_FLOAT:
                nasty_union.fp = double_float_val(key);
                if (nasty_union.fp == -0.0) nasty_union.fp = 0.0;
                break;
//@             case TYPE_LONG_FLOAT:
//@                 {   nasty2_union.fp = long_float_val(key);
//@ // Here I will leave +0.0 and -0.0 hashing differently!
//@                     uint32_t h128 = 0;
//@                     for (unsigned int i=0; i<sizeof(float128_t)/4; i++)
//@                         h128 = update_hash(h128, nasty2_union.i[i]);
//@                     return h128;
//@                 }
            default:
                nasty_union.fp = 0.0;
        }
//
// The following line is OK on any one computer, but will generate values
// that are not portable across machines with different floating point
// representation. This is not too important when the hash value is only
// used with my built-in implementation of hash tables, since I arrange
// to re-hash everything when an image file is re-loaded (as well as on
// any garbage collection), so non-portable calculation here is corrected
// for automatically.
//
        return update_hash(nasty_union.i[0], nasty_union.i[1]);
    }
    else if (is_numbers(key))
    {   Header h = numhdr(key);
        uint64_t r = 9876543;
        size_t n;
        switch (type_of_header(h))
        {   case TYPE_BIGNUM:
                n = length_of_header(h);
                n = (n-CELL-4)/4;  // last index into the data
//
// This may be overkill - for very long bignums it is possibly a waste to
// walk over ALL the digits when computing a hash value - I could do well
// enough just looking at a few. But I still feel safer using all of them.
// Note that all bignums have at least one word of data.
                for (;;)
                {   r = update_hash(r, bignum_digits(key)[n]);
                    if (n == 0) break;
                    n--;
                }
                return r;
            case TYPE_RATNUM:
            case TYPE_COMPLEX_NUM:
                return update_hash(hash_eql(numerator(key)),
                                   hash_eql(denominator(key)));
            default:
                return 0x12345678;  // unknown type of number?
        }
    }
//
// For all things OTHER than messy numbers I just hand back the
// representation of the object as a C pointer. Well, I scramble it a bit
// because otherwise too often Lisp objects only differ in their low order
// bits.
//
    else return update_hash(1, (uint64_t)key);
}

static uint64_t hash_cl_equal(LispObject key, bool descend)
//
// This function is the one used hashing things under EQUAL, and note
// that Common Lisp expects that EQUAL will NOT descend vectors or
// structures, so this code had better not. But it is supposed to
// descend path-names and it must treat non-simple strings and bitvectors
// as if they were like ordinary strings and bitvectors.  If descend is
// false this will not descend through lists.
//
{   uint64_t r = 1, c;
    LispObject nil = C_nil, w;
    int32_t len;
    int32_t bitoff;
    unsigned char *data;
    Header ha;
    simple_msg("hash_cl_equal: ", key);
    for (;;)
    {   switch (TAG_BITS & (int32_t)key)
        {   case TAG_CONS:
                if (key == C_nil || !descend) return r;
                r = update_hash(r, hash_cl_equal(qcar(key), true));
                nil = C_nil;
                if (exception_pending()) return 0;
                key = qcdr(key);
                continue;
            case TAG_SYMBOL:
                if (key == C_nil) return r;
                return update_hash(1, (uint64_t)key);
            case TAG_VECTOR:
            {   ha = vechdr(key);
                len = type_of_header(ha);
//
// I need to treat strings and bitvectors here specially since in those
// cases (and for pathnames) I must inspect the vector contents, while
// in other cases I must not.
//
                if (is_string_header(ha))
                {   len = length_of_byteheader(ha) - CELL;
                    data = &ucelt(key, 0);
                    goto hash_as_string;
                }
//
// I might need to re-check that Common Lisp EQUAL and hence this
// version of hashing inspects the bits in a bit-vector.
//
                else if (is_bitvec_header(ha))
                {   len = length_of_bitheader(ha) - 8*CELL;
                    bitoff = 0;
                    data = &ucelt(key, 0);
                    goto hash_as_bitvector;
                }
                else if (len == TYPE_ARRAY)
                {
//
// Arrays are fun here! I need to pick up the special case of character
// vectors and bit vectors and make them compute the same hash value as the
// simple case of the same thing.
//
                    w = elt(key, 0);
                    if (w == string_char_sym) ha = 0;
                    else if (w == bit_symbol) ha = 1;
                    else return update_hash(r, (uint64_t)key);
//
// The stuff here is just for "non-simple" strings and bit-vectors. This
// code will not have been tested much - if at all.
//
                    w = elt(key, 1);                 // List of dimensions
                    if (!consp(w) || consp(qcdr(w))) // 1 dim or more?
                        return update_hash(r, (uint64_t)key);
                    len = int_of_fixnum(qcar(w));    // This is the length
                    w = elt(key, 5);                 // Fill pointer
                    if (is_fixnum(w)) len = int_of_fixnum(w);
                    w = elt(key, 3);       // displace adjustment
                    key = elt(key, 2);     // vector holding the actual data
                    data = &ucelt(key, 0);
                    if (ha)
                    {   bitoff = int_of_fixnum(w);
                        goto hash_as_bitvector;
                    }
                    data += int_of_fixnum(w);
                    goto hash_as_string;
                }
//
// Common Lisp demands that pathname structures be compared and hashed in
// a way that is expected to look at their contents. Here I just descend
// all components of the pathname.
//
                else if (len == TYPE_STRUCTURE &&
                         elt(key, 0) == pathname_symbol &&
                         descend)
                {   len = doubleword_align_up(length_of_header(ha));
                    while ((len -= CELL) != 0)
                    {   LispObject ea =
                            *((LispObject *)((char *)key + len - TAG_VECTOR));
                        r = update_hash(r, hash_cl_equal(ea, true));
                        nil = C_nil;
                        if (exception_pending()) return 0;
                    }
                    return r;
                }
                else return update_hash(r, (uint64_t)key);
            }
            case TAG_HDR_IMMED:
                if (is_bps(key))
                {   data = (unsigned char *)data_of_bps(key);
                    // I treat bytecode things as strings here
                    len = length_of_byteheader(*(Header *)(data - CELL)) - CELL;
                    goto hash_as_string;
                }
                else return update_hash(r, (uint64_t)key);
            case TAG_BOXFLOAT:
//
// The "case TAG_BOXFLOAT:" above is not logically necessary, but at least
// one release of a Silicon Graphics C compiler seems to miscompile this
// function without it (when optimised). It is as if it seems the masking
// with TAG_BITS in the switch() and therefore knows that there is just a
// limited range of possibilities, so it omits the normal range-check one
// would use before a table-branch. But it then leaves the branch table
// that it generates NOT padded with the final case (TAG_BOXFLOAT) that is
// needed, so when a floating point values does arise the code goes into the
// yonder and usually crashes.
//
            default:
                return update_hash(r, hash_eql(key));
        }

    hash_as_string:
//
// Here len is the length of the string data structure, excluding header.
// I work character by character here both because the final word of a
// string will usually not be full and to avoid sensitivity to byte order.
// but that may be adding to by costs in an unhelpful way, so maybe
// I should work harder to do this word at a time?
//
        while (len > 0)
        {   c = data[--len];
            r = update_hash(r, c);
        }
        return r;
    hash_as_bitvector:
//
// here len is the number of bits to scan, and bitoff is a BIT offset.
// This really is clumsily inefficient but it is never used in Standard
// Lisp mode anyway, so I can test and enhance it if anybody not only
// uses Common Lisp but then relies on hashing bit-vectors.
//
        len += bitoff;
        while (len > bitoff)
        {   len--;
            c = data[len >> 5] & (1u << (len & 31));
            if (c != 0) c = 1;
            r = update_hash(r, c);
        }
        return r;
    }
}

uint64_t hash_equal(LispObject key)
//
// This function is the one used hashing things under the Standard Lisp
// version of EQUAL, which descends vectors but is still sensitive to
// case and which views different types of numbers as different. I will
// make it view displaced or fill-pointered vectors as equivalent to the
// corresponding simple vectors: I am pretty well obliged to do that for
// strings and bitvectors so it seems polite to do the same for general
// vectors (which are the only other ones I support!).
//
{   uint64_t r = 1, c;
    LispObject nil = C_nil, w;
    int32_t type;
    intptr_t len, offset = 0;
    unsigned char *data;
    Header ha;
    simple_msg("hash_equal: ", key);
    for (;;)
    {   switch (TAG_BITS & (int32_t)key)
        {   case TAG_CONS:
                if (key == C_nil) return r;
                r = update_hash(r, hash_equal(qcar(key)));
                nil = C_nil;
                if (exception_pending()) return 0;
                key = qcdr(key);
                continue;
            case TAG_SYMBOL:
                if (key == C_nil) return r;
                return update_hash(1, (uint64_t)key);
            case TAG_VECTOR:
            {   ha = vechdr(key);
                type = type_of_header(ha);
                len = length_of_header(ha) - CELL; // counts in bytes here
//
// First I will separate off the two important cases of strings
// and bitvectors.
//
                if (is_string_header(ha))
                {   data = &ucelt(key, 0);
                    len = length_of_byteheader(ha) - CELL;
                    // and len is the length of the data in use
                    goto hash_as_string;
                }
                else if (is_bitvec_header(ha))
                {   len = (len - 1)*8 + ((ha & 0x380) >> 7) + 1;
                    offset = 0;
                    data = &ucelt(key, 0);
                    goto hash_as_bitvector;
                }
//
// Common Lisp demands that pathname structures be compared and hashed in
// a way that is expected to look at their contents. Here I just descend
// all components of the pathname. All other structures are hashed on
// the basis of EQ.
//
                if (type == TYPE_STRUCTURE &&
                    elt(key, 0) != pathname_symbol)
                    return update_hash(r, (uint64_t)key);
//
// Now I will look for an array that is in fact just a vector.
//
                if (type == TYPE_ARRAY)
                {   w = elt(key, 0);
                    if (w == string_char_sym) ha = 0;
                    else if (w == bit_symbol) ha = 1;
                    else ha = 2;
//
// All this mess really needs careful review and testing!
//
                    w = elt(key, 1);        // List of dimensions
                    if (consp(w) && !consp(qcdr(w)))   // 1 dim or not?
                    {   len = int_of_fixnum(qcar(w));  // This is the length
                        w = elt(key, 5);               // Fill pointer
                        if (is_fixnum(w)) len = int_of_fixnum(w);
                        w = elt(key, 3);       // displace adjustment
                        key = elt(key, 2);     // vector holding the data
                        switch (ha)
                        {   case 0: data = &ucelt(key, int_of_fixnum(w));
                                goto hash_as_string;
                            case 1:
                                data = &ucelt(key, 0);
                                offset = int_of_fixnum(w);
                                goto hash_as_bitvector;
                            default:
// /* The code here can CRASH if asked to hash a general array that
// has been represented in chunks because it has over 32K elements.
//
                                ha = vechdr(key);
                                offset = int_of_fixnum(w);
                                break;
                        }
                    }
                }
//
// Now in the case that I had a non-simple vector I have reset key to point
// to the vector containing the true data, ha to the header of same and
// len is the length that I want to use. offset is an offset into the vector.
// For simple vectors all the same variables are set up (and offset will be
// zero). All cases of strings and bitvectors should have been dealt with
// so the only vectors containing binary are things like "file" structures,
// and I do not expect them to hash portably: so I hash them in the basis of
// EQ.  Hmm did I implement vectors of unboxed 8, 16 and 32-bit ints and of
// floats? If so they might need to be treated above in the sort of way that
// strings are.
//
                if (vector_holds_binary(ha))
                    return update_hash(r, (uint64_t)key);
                offset = CELL*offset;
//
// A "mixed" vector is something I use within CSL for various system
// purposes, and it has three list items at the front and then a load of
// binary data. I hash the binary data as raw 32-bit data.
//
                if (is_mixed_header(ha))
                {   while (len > 3*CELL)
                    {   uint64_t ea;
                        len -= 4;
                        ea = *(uint32_t *)((char *)key + CELL +
                                           offset + len - TAG_VECTOR);
//@@printf("Hashing binary item at offset %d in vector (o=%d)\n", offset+len, offset);
                        r = update_hash(r, ea);
                    }
                }
                while ((len -= CELL) >= 0)
                {   LispObject ea =
                        *((LispObject *)((char *)key + CELL +
                                         offset + len - TAG_VECTOR));
//@@printf("Hashing item at offset %d in vector (o=%d)\n", offset+len, offset);
                    r = update_hash(r, hash_equal(ea));
                    nil = C_nil;
                    if (exception_pending()) return 0;
                }
//@@printf("Hash = %.8x\n", r);
                return r;
            }
            case TAG_HDR_IMMED:
                if (is_bps(key))
                {   data = (unsigned char *)data_of_bps(key);
                    // I treat bytecode things as strings here
                    len = length_of_byteheader(*(Header *)(data - CELL)) - CELL;
                    goto hash_as_string;
                }
                else return update_hash(r, (uint64_t)key);
            case TAG_BOXFLOAT:
            default:// The default case here mainly covers numbers
                return update_hash(r, hash_eql(key));
        }

    hash_as_string:
// Here len is the length of the string data structure, excluding header
        {   int32_t w = 0;
            while (len > 0)
            {   c = data[--len];
                w = (w << 8) | c;
                if (w & 0xff000000)
                {   r = update_hash(r, w);
                    w = 0;
                }
            }
            if (w != 0) r = update_hash(r, w);
        }
        return r;
    hash_as_bitvector:
// here len is the number of bits to scan, and offset is a BIT offset
        len += offset;
        while (len > offset)
        {   len--;
            c = data[len >> 3] & (1 << (len & 7));
            if (c != 0) c = 1;
            r = update_hash(r, c);
        }
        return r;
    }
}

static uint64_t hash_equalp(LispObject key)
//
// This function is the one used hashing things under the Common Lisp
// version of EQUALP, which descends vectors but not structs (except
// pathnames), which is case-insensitive and which views numbers of
// different types but similar values (eg 1 and 1.0) as EQUALP).
//
{   uint64_t r = 1, c;
    LispObject nil=C_nil, w;
    int32_t type;
    intptr_t len, offset = 0;
    unsigned char *data;
    Header ha;
    simple_msg("hash_equalp: ", key);
    for (;;)
    {   switch (TAG_BITS & (int32_t)key)
        {   case TAG_CONS:
                if (key == C_nil) return r;
                r = update_hash(r, hash_equalp(qcar(key)));
                nil = C_nil;
                if (exception_pending()) return 0;
                key = qcdr(key);
                continue;
            case TAG_SYMBOL:
                if (key == C_nil) return r;
                return update_hash(1, (uint64_t)key);
            case TAG_VECTOR:
            {   ha = vechdr(key);
                type = type_of_header(ha);
                len = length_of_header(ha) - CELL;  // counts in bytes here
//
// First I will separate off the two important cases of strings and bitvectors
//
                if (is_string_header(ha))
                {   data = &ucelt(key, 0);
                    len = length_of_byteheader(ha) - CELL;
                    goto hash_as_string;
                }
                else if (is_bitvec_header(ha))
                {   len = (len - 1)*8 + ((ha & 0x380) >> 7) + 1;
                    offset = 0;
                    data = &ucelt(key, 0);
                    goto hash_as_bitvector;
                }
//
// Common Lisp demands that pathname structures be compared and hashed in
// a way that is expected to look at their contents. Here I just descend
// all components of the pathname. Other structs are not descended.
//
                if (len == TYPE_STRUCTURE &&
                    elt(key, 0) != pathname_symbol)
                    return update_hash(r, (uint64_t)key);
//
// Now I will look for an array that is in fact just a vector.
//
                if (type == TYPE_ARRAY)
                {   w = elt(key, 0);
                    if (w == string_char_sym) ha = 0;
                    else if (w == bit_symbol) ha = 1;
                    else ha = 2;
                    w = elt(key, 1);        // List of dimensions
                    if (consp(w) && !consp(qcdr(w)))   // 1 dim or not?
                    {   len = int_of_fixnum(qcar(w));  // This is the length
                        w = elt(key, 5);               // Fill pointer
                        if (is_fixnum(w)) len = int_of_fixnum(w);
                        w = elt(key, 3);       // displace adjustment
                        key = elt(key, 2);     // vector holding the data
                        switch (ha)
                        {   case 0: data = &ucelt(key, int_of_fixnum(w));
                                goto hash_nearly_as_string;
                            case 1:
                                data = &ucelt(key, 0);
                                offset = int_of_fixnum(w);
                                goto hash_as_bitvector;
                            default:
// /* Trouble if a general array with over 32K elements gets to here
                                ha = vechdr(key);
                                offset = int_of_fixnum(w);
                                break;
                        }
                    }
                }
//
// Now in the case that I had a non-simple vector I have reset key to point
// to the vector containing the true data, ha to the header of same and
// len is the length that I want to use. offset is an offset into the vector.
// For simple vectors all the same variables are set up (and offset will be
// zero). All cases of strings and bitvectors should have been dealt with
// so the only vectors containing binary are things like "file" structures,
// and I do not expect them to hash portably.
//
                if (vector_holds_binary(ha))
                    return update_hash(r, (uint64_t)key);
                offset = 8*offset;
                if (is_mixed_header(ha))
                {   while (len > 4*CELL)
                    {   uint32_t ea;
                        len -= 4;
                        ea = *(uint32_t *)((char *)key +
                                           offset + len - TAG_VECTOR);
                        r = update_hash(r, ea);
                    }
                }
                while ((len -= CELL) != 0)
                {   LispObject ea =
                        *((LispObject *)((char *)key +
                                         offset + len - TAG_VECTOR));
                    r = update_hash(r, hash_equalp(ea));
                    nil = C_nil;
                    if (exception_pending()) return 0;
                }
                return r;
            }
            case TAG_HDR_IMMED:
                if (is_bps(key))
                {   data = (unsigned char *)data_of_bps(key);
                    // I treat bytecode things as strings here
                    // Oops - what about the fact that strings get case-folded?
                    len = length_of_header(*(Header *)(data - CELL)) - CELL;
                    goto hash_nearly_as_string;
                }
                else if (is_char(key))
                    key = pack_char(0, tolower(code_of_char(key)));
                return update_hash(r, (uint64_t)key);
            case TAG_BOXFLOAT:
            default:// The default case here mainly covers numbers
                if (is_float(key))
                {   key = rational(key);  // painful expense
                    nil = C_nil;
                    if (exception_pending()) return 0;
                }
                if (is_numbers(key))
                {   switch (type_of_header(numhdr(key)))
                    {   case TYPE_RATNUM:
                        case TYPE_COMPLEX_NUM:
                            return update_hash(r,
                                               update_hash(hash_equalp(numerator(key)),
                                                           hash_equalp(denominator(key))));
                        default:
                            break;
                    }
                }
                return update_hash(r, hash_eql(key));
        }
//
// Note that I scan the elements of a string or bitvector in the same order
// that I would process a general vector of the same length, and I adjust the
// vector contents to its generic representation before updating the hash
// value. For strings I fold to lower case.
//
    hash_as_string:
// Here len is the length of the string data structure, excluding header
        {   int32_t w = 0;
            while (len > 0)
            {   c = data[--len];
                c = tolower(c);
                w = (w << 8) | c;
                if (w & 0xff000000)
                {   r = update_hash(r, w);
                    w = 0;
                }
            }
            if (w != 0) r = update_hash(r, w);
        }
        return r;
    hash_nearly_as_string:
// Here len is the length of the string data structure, excluding header
        {   int32_t w = 0;
            while (len > 0)
            {   c = data[--len];
                w = (w << 8) | c;
                if (w & 0xff000000)
                {   r = update_hash(r, w);
                    w = 0;
                }
            }
            if (w != 0) r = update_hash(r, w);
        }
        return r;
    hash_as_bitvector:
// here len is the number of bits to scan, and offset is a BIT offset
        len += offset;
        while (len > offset)
        {   len--;
            c = data[len >> 3] & (1 << (len & 7));
            if (c != 0) c = 1;
            r = update_hash(r, update_hash(1, fixnum_of_int(c)));
        }
        return r;
    }
}

static uint64_t hashcode;
static int hashsize, hashoffset, hashgap;

static bool large_hash_table;

#define words_in_hash_table(v)                        \
    (((large_hash_table ? int_of_fixnum(elt(v, 1)) :  \
       length_of_header(vechdr(v))) - 2*CELL)/CELL)

#define ht_elt(v, n)                                                 \
    (*(large_hash_table ?                                            \
      &elt(elt((v), 2+(n)/HASH_CHUNK_WORDS), (n)%HASH_CHUNK_WORDS) : \
      &elt((v), (n))))

LispObject Lget_hash(LispObject nil, int nargs, ...)
{   int32_t size, p, flavour = -1, hashstride, nprobes;
    va_list a;
    LispObject v, key, tab, dflt;
    argcheck(nargs, 3, "gethash");
    va_start(a, nargs);
    key = va_arg(a, LispObject);
    tab = va_arg(a, LispObject);
    dflt = va_arg(a, LispObject);
    va_end(a);
    if (!is_vector(tab) || type_of_header(vechdr(tab)) != TYPE_HASH)
        return aerror1("gethash", tab);
    v = elt(tab, 0);
    simple_msg("get_hash: ", key);
// /* The code here needs to allow for user-specified hash functions
    if (is_fixnum(v)) flavour = int_of_fixnum(v);
    switch (flavour)
{       default:
            return aerror1("gethash", cons(v, tab));
        case 0:
            hashcode = update_hash(1, (uint64_t)key);
            break;
        case 1:
            hashcode = hash_eql(key);  // can never fail
            break;
        case 2:
            push3(key, tab, dflt);
            hashcode = hash_cl_equal(key, true);
            pop3(dflt, tab, key);
            errexit();
            break;
        case 3:
            push3(key, tab, dflt);
            hashcode = hash_equal(key);
            pop3(dflt, tab, key);
            errexit();
            break;
        case 4:
            push3(key, tab, dflt);
            hashcode = hash_equalp(key);
            pop3(dflt, tab, key);
            errexit();
            break;
    }
    v = elt(tab, 4);
    large_hash_table = type_of_header(vechdr(v)) == TYPE_STRUCTURE;
    hashsize = size = words_in_hash_table(v);
    p = (hashcode % (uint64_t)(size >> 1))*2;
//
// I want to take my single 32-bit hash value and produce a secondary
// hash value that is a stride for the search. I can just take the
// remainder by 1 less than the hash table size (and add 1 so I get
// a non-zero stride).
//
    hashstride = (1 + (hashcode % (uint64_t)((size >> 1)-1)))*2;
    hashgap = -1;
//
// I now know how to do better than this!
//
    for (nprobes=0; nprobes<size; nprobes++)
    {   LispObject q = ht_elt(v, p+1);
        bool cf;
        if (q == SPID_HASH0)
        {   mv_2 = nil;
            work_0 = v;
            hashoffset = p;
            return nvalues(dflt, 2);
        }
        if (q == SPID_HASH1)
        {   hashgap = p;
            cf = false;  // vacated slot
        }
        else switch (flavour)
        {       default: // case 0:
                    cf = (q == key);
                    break;
                case 1: cf = eql(q, key);
                    break;
                case 2: push4(key, tab, dflt, v);
                    if (q == key) cf = true;
                    else cf = cl_equal(q, key);
                    pop4(v, dflt, tab, key);
                    errexit();
                    break;
                case 3: push4(key, tab, dflt, v);
                    if (q == key) cf = true;
                    else cf = equal(q, key);
                    pop4(v, dflt, tab, key);
                    errexit();
                    break;
                case 4: push4(key, tab, dflt, v);
                    if (q == key) cf = true;
                    else cf = equalp(q, key);
                    pop4(v, dflt, tab, key);
                    errexit();
                    break;
            }
        if (cf)
        {   mv_2 = lisp_true;
            work_0 = v;
            hashoffset = p;
            return nvalues(ht_elt(v, p+2), 2);
        }
        p = p + hashstride;
        if (p >= size) p = p - size;
    }
    return aerror("too many probes in hash look-up");
}

static void reinsert_hash(LispObject v, int32_t size, int32_t flavour,
                          LispObject key, LispObject val)
{   int32_t p;
    uint64_t hcode, hstride;
    LispObject nil = C_nil;
    switch (flavour)
{       default: // case 0:
            hcode = update_hash(1, (uint64_t)key);
            break;
        case 1:
            hcode = hash_eql(key);  // can never fail
            break;
        case 2:
            push3(key, v, val);
            hcode = hash_cl_equal(key, true);
            pop3(val, v, key);
            errexitv();
            break;
        case 3:
            push3(key, v, val);
            hcode = hash_equal(key);
            pop3(val, v, key);
            errexitv();
            break;
        case 4:
            push3(key, v, val);
            hcode = hash_equalp(key);
            pop3(val, v, key);
            errexitv();
            break;
    }
    p = (hcode % (uint64_t)(size >> 1))*2;
    hstride = (1 + (hcode % (uint64_t)((size >> 1)-1)))*2;
//
// When I re-insert the item into the table life is especially easy -
// I know it is not there already and I know I will be able to find a
// gap to put it in!  So I just have to look for a gap - no comparisons
// are needed.
//
    large_hash_table = type_of_header(vechdr(v)) == TYPE_STRUCTURE;
    for (;;)
    {   LispObject q = ht_elt(v, p+1);
        if (q == SPID_HASH0 || q == SPID_HASH1)
        {   ht_elt(v, p+1) = key;
            ht_elt(v, p+2) = val;
            return;
        }
        p = p + hstride;
        if (p >= size) p = p - size;
    }
}

#define REHASH_CYCLES    2
#define REHASH_AT_ONE_GO 64

void rehash_this_table(LispObject v)
//
// Hash tables where the hash function depends on absolute memory addresses
// will sometimes need rehashing - I do this by removing items from the
// table one at a time and re-inserting them. This does not guarantee that
// the table is left in a perfect state, but for modest loading will be
// adequate.  I reason that if I extract 64 (say) items at a time and
// then re-insert them then (especially for smallish tables) I have a
// better chance of things ending up in the ideal place. The problem is that
// items that have not yet been moved may be sitting in places where a
// re-hashed item ought to go. The effect will be that the newly re-inserted
// item sees a clash and moves to a second-choice position. When the other
// item is (later on) processed it will then vacate the place I would have
// liked to use, leaving a "tombstone" marker behind.  If at the end of all
// re-hashing there are too many tombstones left around lookup performance
// in the table will degrade. I attempt to counter this effect by performing
// the whole re-hashing procedure several times. But I have neither analysed
// nore measured what happens! I will do so if practical applications show
// up serious trouble here.
//
{   int32_t size, i, j, flavour, many;
    bool old_large = large_hash_table;
    LispObject pendkey[REHASH_AT_ONE_GO], pendval[REHASH_AT_ONE_GO];
    flavour = int_of_fixnum(elt(v, 0)); // Done this way always

    large_hash_table = type_of_header(vechdr(v)) == TYPE_STRUCTURE;
    size = words_in_hash_table(v);
//
// The cycle count here is something I may want to experiment with.
//
    for (i=0; i<REHASH_CYCLES; i++)
    {
//
// Change all slots in the table that are empty just because something has
// been deleted to indicate that they are truly not in use. This makes some
// items inaccessible by normal hash searches (because a void will be placed
// earlier than them on a search trajectory) but this does not matter because
// everything is about to be taken out of the table and reinserted properly.
//

        for (j=0; j<size; j+=2)
            if (ht_elt(v, j+1) == SPID_HASH1) ht_elt(v, j+1) = SPID_HASH0;
        many = 0;
        for (j=0; j<size; j+=2)
        {   LispObject key = ht_elt(v, j+1), val = ht_elt(v, j+2);
            if (key == SPID_HASH0 || key == SPID_HASH1) continue;
            pendkey[many] = key;      pendval[many++] = val;
            ht_elt(v, j+1) = SPID_HASH1; ht_elt(v, j+2) = SPID_HASH0;
            if (many >= REHASH_AT_ONE_GO)
            {   while (many > 0)
                {   many--;
                    reinsert_hash(v, size, flavour,
                                  pendkey[many], pendval[many]);
                }
            }
        }
        while (--many >= 0)
            reinsert_hash(v, size, flavour, pendkey[many], pendval[many]);
    }
    large_hash_table = old_large;
}

LispObject Lmaphash(LispObject nil, LispObject fn, LispObject tab)
//
// There is a big worry here if the table is re-hashed because of
// a garbage collection while I am in the middle of things. To
// avoid utter shambles I will make a copy of the vector early
// on and work from that.
//
{   int32_t size, i;
    LispObject v, v1;
    if (!is_vector(tab) || type_of_header(vechdr(tab)) != TYPE_HASH)
        return aerror1("maphash", tab);
    v = elt(tab, 4);
    large_hash_table = type_of_header(vechdr(v)) == TYPE_STRUCTURE;
    size = words_in_hash_table(v)*CELL+2*CELL;
    push2(fn, tab);
    v1 = get_hash_vector(size);
    pop2(tab, fn);
    v = elt(tab, 4);
    size = (size - CELL)/CELL;
    for (i=0; i<size; i++) ht_elt(v1, i) = ht_elt(v, i);
    for (i=1; i<size; i+=2)
    {   LispObject key = ht_elt(v1, i), val = ht_elt(v1, i+1);
        int save = large_hash_table;
        if (key == SPID_HASH0 || key == SPID_HASH1) continue;
        push2(v1, fn);
        Lapply2(nil, 3, fn, key, val);
        pop2(fn, v1);
        large_hash_table = save;
        errexit();
    }
    return onevalue(nil);
}

LispObject Lhashcontents(LispObject nil, LispObject tab)
//
// There is a big worry here if the table is re-hashed because of
// a garbage collection while I am in the middle of things. To
// avoid utter shambles I will restart if a GC happens while I
// am unfolding the hash table. And fail if that happens twice
// in a row.
//
{   int32_t size, i, ogcnum;
    int n_gc = 0;
    LispObject v, r;
    if (!is_vector(tab) || type_of_header(vechdr(tab)) != TYPE_HASH)
        return aerror1("hashcontents", tab);
    v = elt(tab, 4);
    large_hash_table = type_of_header(vechdr(v)) == TYPE_STRUCTURE;
    size = words_in_hash_table(v)*CELL+2*CELL;
    size = (size - CELL)/CELL;
restart:
    r = nil;
    if (++n_gc > 2) return aerror("hashcontents");
    ogcnum = gc_number;
    for (i=1; i<size; i+=2)
    {   LispObject k1 = ht_elt(v, i), v1 = ht_elt(v, i+1);
        if (k1 == SPID_HASH0 || k1 == SPID_HASH1) continue;
        push(v);
        r = acons(k1, v1, r);
        pop(v);
        errexit();
        if (gc_number != ogcnum) goto restart;
    }
    return onevalue(r);
}

LispObject Lget_hash_1(LispObject nil, LispObject key)
{
#ifdef COMMON
    return Lget_hash(nil, 3, key, sys_hash_table, nil);
#else
//
// The definition implemented here is as required by Reduce in
// the file matrix.red...  In the long term this is unsatisfactory.
//
    LispObject r;
    push(key);
    r = Lget_hash(nil, 3, key, sys_hash_table, nil);
    pop(key);
    errexit();
    if (mv_2 != nil)
    {   r = cons(key, r);
        errexit();
    }
    return onevalue(r);
#endif
}

LispObject Lget_hash_2(LispObject nil, LispObject key, LispObject tab)
{   return Lget_hash(nil, 3, key, tab, nil);
}

LispObject Lput_hash(LispObject nil, int nargs, ...)
{   va_list a;
    LispObject key, tab, val;
    va_start(a, nargs);
    key = va_arg(a, LispObject);
    tab = va_arg(a, LispObject);
    val = va_arg(a, LispObject);
    va_end(a);
    argcheck(nargs, 3, "puthash");
    simple_msg("put_hash: ", key);
    if (!is_vector(tab) || type_of_header(vechdr(tab)) != TYPE_HASH)
        return aerror1("puthash", tab);
    push3(key, tab, val);
// I call Lget_hash here and that updates the GET statistics. So I fiddle
// things a bit to arrange that the GET numbers do not end up changed after
// and and that I know how many probes were performed.
    Lget_hash(nil, 3, key, tab, nil);
    pop3(val, tab, key);
    errexit();
    if (mv_2 == nil)    // Not found, thus I point at an empty slot
    {   //@@printf("Item not already present %d %d\n", hashgap, hashoffset);
        if (hashgap >= 0) hashoffset = hashgap;
        ht_elt(work_0, hashoffset+1) = key;
        ht_elt(work_0, hashoffset+2) = val;
        elt(tab, 1) += 0x10;    // increment count of used entries
        if (elt(tab, 1) > elt(tab, 2))
        {   LispObject size = elt(tab, 2),
                           growth = elt(tab, 3),
                           newhash, v;
            int32_t isize = int_of_fixnum(size), i;
            push2(tab, val);
            if (is_fixnum(growth))
            {   int32_t w1 = int_of_fixnum(growth);
                if (w1 > 0) isize = isize + w1;
                else isize = isize + (isize/2);
            }
            else if (is_float(growth))
            {   double w2 = float_of_number(growth);
                int32_t newsize = isize;
                if (1.0 < w2 && w2 < 10.0)
                    newsize = (int32_t)(w2 * (double)isize + 2.0);
                if (newsize > isize) isize = newsize;
                else isize = isize + (isize/2) + 2;
            }
            else isize = isize + (isize/2) + 2;
//
// NB - Lmkhash() does not disturb large_hash_table, so I can still
// access the old table happily even after this call...
//
            newhash = Lmkhash(nil, 3, fixnum_of_int(isize),
                              elt(tab, 0), growth);
            pop2(val, tab);
            errexit();
            v = elt(tab, 4);
            for (i=0; i<=4; i++) elt(tab, i) = elt(newhash, i);
            large_hash_table = type_of_header(vechdr(v)) == TYPE_STRUCTURE;
            isize = words_in_hash_table(v);
            for (i=0; i<isize; i+=2)
            {   LispObject key1 = ht_elt(v, i+1), val1 = ht_elt(v, i+2);
                bool large = large_hash_table;
                if (key1 == SPID_HASH0 || key1 == SPID_HASH1) continue;
//
// NB the new hash table is big enough to hold all the data that was in the
// old one, so inserting stuff into it can not cause a (recursive)
// enlargement here....
//
                push3(v, tab, val);
// Re-inserting will add to the counts for hash PUT operations.
                Lput_hash(nil, 3, key1, tab, val1);
                pop3(val, tab, v);
                large_hash_table = large; // Maybe scrabled by put_hash
            }
        }
        return onevalue(val);
    }
    else
    {
        ht_elt(work_0, hashoffset+2) = val;
        return onevalue(val);
    }
}


LispObject Lput_hash_2(LispObject nil, LispObject a, LispObject b)
{   return Lput_hash(nil, 3, a, sys_hash_table, b);
}

LispObject Lrem_hash(LispObject nil, LispObject key, LispObject tab)
{   simple_msg("rem_hash: ", key);
    push2(key, tab);
    Lget_hash(nil, 3, key, tab, nil);
    pop2(tab, key);
    errexit();
    if (mv_2 == nil) return onevalue(nil);
    else
    {   ht_elt(work_0, hashoffset+1) = SPID_HASH1;
        ht_elt(work_0, hashoffset+2) = SPID_HASH0;
        elt(tab, 1) -= 0x10;
//
// Some folk would believe that if the table shrank too much I should
// shrink it, or at the very least re-hash it.
//
        return onevalue(lisp_true);
    }
}

LispObject Lrem_hash_1(LispObject nil, LispObject a)
{   return Lrem_hash(nil, a, sys_hash_table);
}

LispObject Lclr_hash(LispObject, LispObject tab)
{   LispObject v;
    int32_t size, i;
    if (!is_vector(tab) ||
        type_of_header(vechdr(tab)) != TYPE_HASH)
        return aerror1("clrhash", tab);
    elt(tab, 1) = fixnum_of_int(0);
    v = elt(tab, 4);
    large_hash_table = type_of_header(vechdr(v)) == TYPE_STRUCTURE;
    size = words_in_hash_table(v);
    for (i=1; i<size; i++) ht_elt(v, i) = SPID_HASH0;
    return tab;
}

LispObject Lclr_hash_0(LispObject nil, int nargs, ...)
{   argcheck(nargs, 0, "clrhash");
    return Lclr_hash(nil, sys_hash_table);
}

LispObject Lsxhash(LispObject nil, LispObject key)
{
//
// Does not descend vectors
//
    uint64_t h = hash_cl_equal(key, true);
    errexit();
    h = (h ^ (h >> 16)) & 0x03ffffff; // ensure it will be a positive fixnum
    return onevalue(fixnum_of_int(h));
}

LispObject Leqlhash(LispObject nil, LispObject key)
{
//
// Only handles atoms
//
    uint64_t h = hash_cl_equal(key, false);
    errexit();
    h = (h ^ (h >> 16)) & 0x03ffffff; // ensure it will be a positive fixnum
    return onevalue(fixnum_of_int(h));
}

LispObject Lequalhash(LispObject nil, LispObject key)
{
//
// Descends vectors as the Standard Lisp EQUAL function does.
//
    uint64_t h = hash_equal(key);
    errexit();
    h = (h ^ (h >> 16)) & 0x03ffffff; // ensure it will be a positive fixnum
    return onevalue(fixnum_of_int(h));
}

LispObject Lhash_flavour(LispObject nil, LispObject tab)
{   LispObject v,flavour = fixnum_of_int(-1);

    if (!is_vector(tab) || type_of_header(vechdr(tab)) != TYPE_HASH)
        return aerror1("hash_flavour", tab);
    v = elt(tab, 0);
//  The code here needs to allow for user-specified hash functions
    if (is_fixnum(v)) flavour = v;
    return onevalue(flavour);
}


// end of fakecsl.cpp
