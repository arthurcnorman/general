// headers.h                                                A C Norman 2016

// Used to allow me to build and test lisphash.cpp as a freestanding
// package even though eventually it will want to live within the
// full CSL sources;


/**************************************************************************
 * Copyright (C) 2016, Codemist.                         A C Norman       *
 *                                                                        *
 * Redistribution and use in source and binary forms, with or without     *
 * modification, are permitted provided that the following conditions are *
 * met:                                                                   *
 *                                                                        *
 *     * Redistributions of source code must retain the relevant          *
 *       copyright notice, this list of conditions and the following      *
 *       disclaimer.                                                      *
 *     * Redistributions in binary form must reproduce the above          *
 *       copyright notice, this list of conditions and the following      *
 *       disclaimer in the documentation and/or other materials provided  *
 *       with the distribution.                                           *
 *                                                                        *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS    *
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT      *
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS      *
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE         *
 * COPYRIGHT OWNERS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,   *
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,   *
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS  *
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND *
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR  *
 * TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF     *
 * THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH   *
 * DAMAGE.                                                                *
 *************************************************************************/

#ifndef __HEADERS_H
#define __HEADERS_H 1

#ifndef __STDC_CONSTANT_MACROS
#define __STDC_CONSTANT_MACROS 1
#endif
#ifndef __STDC_LIMIT_MACROS
#define __STDC_LIMIT_MACROS 1
#endif
#ifndef __STDC_FORMAT_MACROS
#define __STDC_FORMAT_MACROS   1
#endif

#include <stdio.h>
#include <ctype.h>
#include <stdarg.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

// I put in a copy of "tags.h" because it is easier to copy the lot than to
// work out just which bits I need. 

//
//   Data-structure and tag bit definitions, also common C macros
//   for Lisp implementation.
//
//

#define SIXTY_FOUR_BIT (sizeof(intptr_t) == 8)

#define CSL_IGNORE(x)       ((void)(x))

//
// I allocate memory (using malloc()) in CSL_PAGE_SIZE chunks.
// This was first implemented for the benefit of 16-bit machines
// (in particular MSDOS/286) but now seems generally reasonable.  The biggest
// menace about it is that it limits the size of the largest vector I can ever
// allocate - and this (as of the time of this comment) limits the size of
// the symbol table (object list).
//
// My default at present is to use PAGE_BITS=22, which leads to 4 Mbyte pages.
// I use that size on both 32 and 64-bit machines, which will mean that
// 32 bit systems can support vectors that are longer than will fit into
// a 64-bit system.
//
// Once upon a time I used 16-bit pages. For small hardware (such as a PDA)
// I sometimes make my Makefile downgrade this to use 18-bit (256Kbyte)
// pages to save some waste.
//

#ifndef PAGE_BITS
#  define PAGE_BITS             22
#endif // PAGE_BITS

#define PAGE_POWER_OF_TWO       (((intptr_t)1) << PAGE_BITS)
//
// When I come to allocate memory I do so in chunks that are a little less
// than the power of two suggested here, to allow for malloc() header
// blocks etc.
//
#define CSL_PAGE_SIZE           (PAGE_POWER_OF_TWO - 256)

//
// On 64-bit systems I will limit myself to 512 Gbyte, while on 32-bit
// ones the limit is around 2 Gbyte and in reality will usually be
// rather less than that.
//
#ifndef MAX_HEAPSIZE
#  define MAX_HEAPSIZE       (SIXTY_FOUR_BIT ? (512*1024) : 2048)
#endif // MAX_HEAPSIZE

#ifndef MAX_BPSSIZE
//
// Note once again that 64 (megabytes) is the largest valid value that can be
// used here.  But also note that 64 Mbytes of bytecodes would be a pretty
// large program!
//
#  define MAX_BPSSIZE           64
#endif // MAX_BPSSIZE

#define MEGABYTE                ((intptr_t)0x100000U)

#if PAGE_BITS >= 20
#define MAX_PAGES               (MAX_HEAPSIZE >> (PAGE_BITS-20))
#define MAX_BPS_PAGES           (MAX_BPSSIZE >> (PAGE_BITS-20))
#else
#define MAX_PAGES               (MAX_HEAPSIZE << (20-PAGE_BITS))
#define MAX_BPS_PAGES           (MAX_BPSSIZE << (20-PAGE_BITS))
#endif

#define MAX_NATIVE_PAGES        MAX_BPS_PAGES

//
// Windows seems to say it can use file names up to 260 chars, Unix and
// the like may not even have that limit, but I will assume something here.
// There must be a number of cases of potential buffer overflow throughout
// my code caused by this fixed limit.
//
#define LONGEST_LEGAL_FILENAME 1024

//
// The following values relate to the identification of floating
// point representations.  Note that they all fit in a byte. Actually these
// days I think I will INSIST that the basic representation is as per IEEE,
// but there can still be word and byte-order issues.
// I am going to assume that if the byte order if "flipped" in a double
// then it will be in a float too. And I will not support any really
// odd cases where bits are messed around with halfword by halfword!
//

#define FP_WORD_ORDER 0x01
#define FP_BYTE_ORDER 0x02
#define FP_MASK       0xff


//
// General objects in Lisp are represented as pointer-sized integers
// and the type LispObject reflects this representation and
// not the elaborate tagged union that at some other level exists.
// If I could use "void *" for this type that might give me a bit more
// security since not much can be done with a "void *" object - in particular
// it can not participate in arithmetic.  But when I do that I run into
// trouble in protected mode on a PC if I have items of type LispObject
// that are not valid pointers. I suspect that the same used to be
// the case on a Motorola 68000 with address and data registers.
//
//
// Sometimes the pointer-sized integer will be 64-bits wide, and will be the
// data type for the type LispObject. A result will be that anywhere in
// the code where I am sloppy about putting such an object into an int32_t
// I will have trouble, and anywhere that I use absolute numeric offsets
// instead of multiples of sizeof(LispObject) there can be pain.
// Coping with this means I have to be careful about integer constants that
// could fit into 64 but not 32-bits. Note the C/C++ construction like
// INTPTR_C(nnn) where you need __STDC_CONSTANT_MACROS defined before including
// stdint.h and inttypes.c to get that defined.
//

typedef intptr_t LispObject;


//
// The macro CELL had better have either the value 4 or 8. It is the
// size of the basic unit of memory within which CSL works.
//

#define CELL ((intptr_t)sizeof(LispObject))

//
// LispObject is a datatype where the low 3 bits are used as tags -
// this idea works provided all memory addresses needed can be kept
// doubleword aligned.  The main tag allocation is documented here.
//

// The old garbage collector, in the mark part of the sliding variant,
// uses back-pointers that can point at any cell, and so are just aligned
// as multiplus of 4 (on a 32-bit machine). Furthermore the code requires
// that an object header be distinguishable from any such back-pointer.
// to satisfy that the tag for a header must not be 0, 1, 4 or 5, and the
// cheapskate coding in the garbage collector means that 3 and 7 must also
// be avoided (there is a test for an odd number). So TAG_HDR_IMMED is
// forced to be 2 or 6 at least during a transition period until the
// garbage collector is reworked.

#define TAG_BITS        7
#define XTAG_BITS       15

#define TAG_CONS        0   // Cons cells                                01
#define TAG_VECTOR      1   // Regular Lisp vectors (except BPS maybe?)  02
#define TAG_HDR_IMMED   2   // Char constants, BPS addresses, vechdrs etc04
#define TAG_FORWARD     3   // For the Garbage Collector                 08
// There are special constraints that mean I want symbols to have
// tag code 4. These apply in the old garbage collector and the way I
// deal with some back-pointers there.
#define TAG_SYMBOL      4   // Symbols                                   10
// Note that tags from 5 up are all for numeric date
#define TAG_NUMBERS     5   // Bignum, Rational, Complex                 20
#define TAG_BOXFLOAT    6   // Boxed floats                              40
#define TAG_FIXNUM      7   // 28-bit integers                           80
#define XTAG_SFLOAT     15  // Short float, 28 bits of immediate data    80

#define is_number(p)               ((((int)(p)) & TAG_BITS) >= TAG_NUMBERS)

#define is_float(p)       (((0xc040 >> (((int)(p)) & XTAG_BITS)) & 1) != 0)

#define is_immed_or_cons(p)  (((0x85 >> (((int)(p)) & TAG_BITS)) & 1) != 0)

#define is_immed_cons_sym(p) (((0x95 >> (((int)(p)) & TAG_BITS)) & 1) != 0)

#define need_more_than_eq(p) (((0x63 >> (((int)(p)) & TAG_BITS)) & 1) != 0)

//
// For each of the above tag classes I have a bunch of low-level
// operations that need support - including type identification
// predicates and conversions to and from native C formats.
//
// In the future I want to make a fixnum an intptr_t value not an int32.
// A major reason for not doing that now is the pain of making dumped images
// re-loadable across word-widths.

#define fixnum_of_int(x)    ((LispObject)(TAG_FIXNUM + (((int32_t)(x))*16)))

// The code here manages to get compiled as a simple arithmetic right shift
// on enough architectures that I will not worry about writing it as a 
// division.

#define int_of_fixnum(x) (((int32_t)(x) & ~(int32_t)15)/16)

#define sixty_four_bits(a) ((int64_t)int_of_fixnum(a)) // Ugh!

//
// The garbage collector needs a spare bit in EVERY word at present. I hope
// to remove that need soon.
//

#define GC_BIT_I        8               // Used with FIXNUM, CHAR, SFLOAT
#define GC_BIT_H        8               // Used in Header words

#define GC_BIT_P        ((intptr_t)~((~(uintptr_t)0) >> 1))
//
// The above curious definition of GC_BIT_P is intended to ensure that
// it looks like a negative value. This matters a lot if there is some
// 64-bit arithmetic lurking somewhere, because then what goes on in the
// upper 32 bits can come and bite me.  I will try to avoid trouble by
// having all constants in this code written in a way that avoids any
// need for explicit 'L' suffices. So this one goes
//      00000000      0000000000000000   zero, cast to uintptr_t
//      ffffffff      ffffffffffffffff   complement
//      7fffffff      7fffffffffffffff   shift right one, NB unsigned
//      80000000      8000000000000000   complement again, and cast to signed!
// I really hope that the compiler processes this constant expression at
// compile time, and that it gets the calculation right!
//

//
// Here I assume that all valid pointers EITHER have top bit zero OR have
// top bit one.  If this is so I can flip the top bit in a pointer to mark
// things for the garbage collector.  Beware, I suppose, stack-allocated
// objects on a VAX.  But note that garbage collection is only really
// interested in the heap, which can probably be kept within one half of
// the address space.  The nastiest case I have come across so far is
// the Intel 80x86 where addresses spread over all 32 bits of a long int,
// in a rather wasteful way.  For that very special machine I have to
// invent specialist storage management schemes!
//
// [November 2003] Note well that many Linux systems are configured with
// 3G of user space and 1G of systerm space within the 4G address map of a
// 32-bit architecture. This can cause it to seem as if over 2G of memory
// can be issued to the user. It also means that when amounts of memory
// around a Gbyte are being allocated just where in the memory map things
// are gets jolly uncertain and delicate. Specifically it may depend on the
// excat version of Linux that you run. It all feels a big misery to me.
// using that top bit could be held to be a mistake! However once one moves
// to having 64-bit machines as standard it becomes possible to relax again.
//

#define is_marked_i(w)      (((int)(w) & GC_BIT_I) != 0)

//
// I assume that in any one run of CSL either all (malloc)
// addresses have their top bit set OR all have their top bit clear, but
// I can not predict in advance which case will apply.  This miserable
// state arises with Win32 - under Windows-NT addresses are in the range
// 0 to 0x7fffffff, while the same binary executing under Win32s has
// addresses in the range 0x80000000 to 0xffffffff.
// Note that many Linux (and maybe other) systems use the top 1G of a
// 4G space for system, with the lower 3G for user space. Some will let
// malloc return space above or below the 2G mark in a way that the user can
// not easily control. Those worried need to move to 64 bit machines soon.
// There the mark bit ix 0x8000000000000000.
//

extern LispObject address_sign;  // 0, 0x80000000 or 0x8000000000000000
#define is_marked_p(w)      (((LispObject)(w) - address_sign) < 0)
#define clear_mark_bit_p(w) (((LispObject)(w) & ~GC_BIT_P) + \
                              address_sign)

#define flip_mark_bit_i(w)  ((LispObject)(w) ^ GC_BIT_I)
#define flip_mark_bit_h(w)  ((Header)(w) ^ GC_BIT_H)
#define flip_mark_bit_p(w)  ((LispObject)(w) ^ GC_BIT_P)
#define is_marked_h(w)      (((int)(w) & GC_BIT_H) != 0)

//
// Exceptions are marked by setting a bit in NIL.  The following macros
// provide an abstraction of this interface.  At one stage I used the
// most significant bit in nil, but now for various reasons I have concluded
// that it is nicer to use the least significant bit. Note that this scheme
// means that TAG_SYMBOL must be even!
//
#define exception_pending() (((int)nil & 1) != 0)
#define flip_exception()    (nil = C_nil = (nil ^ 1))

#define ignore_exception() \
   do { nil = C_nil; if (exception_pending()) flip_exception(); } while (0)

#define set_mark_bit_h(h)   ((Header)(h) | GC_BIT_H)
#define clear_mark_bit_h(h) ((Header)(h) & ~GC_BIT_H)
#define set_mark_bit_i(h)   ((LispObject)(h) | GC_BIT_I)
#define clear_mark_bit_i(h) ((LispObject)(h) & ~GC_BIT_I)

#define is_cons(p)   ((((int)(p)) & TAG_BITS) == TAG_CONS)
#define is_fixnum(p) ((((int)(p)) & TAG_BITS) == TAG_FIXNUM)
#define is_odds(p)   ((((int)(p)) & TAG_BITS) == TAG_HDR_IMMED) // many subcases
#define is_sfloat(p) ((((int)(p)) & XTAG_BITS) == XTAG_SFLOAT)
#define is_symbol(p) ((((int)(p)) & TAG_BITS) == TAG_SYMBOL)
#define is_numbers(p)((((int)(p)) & TAG_BITS) == TAG_NUMBERS)
#define is_vector(p) ((((int)(p)) & TAG_BITS) == TAG_VECTOR)
#define is_bfloat(p) ((((int)(p)) & TAG_BITS) == TAG_BOXFLOAT)

#define consp(p)     is_cons(p)
#define symbolp(p)   is_symbol(p)

// For Common Lisp it would ne necessary to detect and trap any attempt
// to take CAR or CDR of NIL and do something special.
#define car_legal(p) is_cons(p)

typedef struct Cons_Cell
{   LispObject car;
    LispObject cdr;
} Cons_Cell;

#ifdef MEMORY_TRACE

//
// The IDEAL here would be that every time I reference memory I would
// call memory_reference() to record this fact. In fact I have changed
// the most important Lisp data-structure access macros to do this, but
// not all of them. For instance in a first pass I did not consider it
// worth altering the code that inspects rational and complex numbers!
// Any code that at the C level uses "*" directly will also not get
// reported.
//

extern Cons_Cell *memory_reference(intptr_t p);
extern char *cmemory_reference(intptr_t p);
extern void identify_page_types();
extern long int car_counter;
extern unsigned long int car_low, car_high;

#define qcar(p) (memory_reference((intptr_t)p)->car)
#define qcdr(p) (memory_reference((intptr_t)p)->cdr)

#else // MEMORY_TRACE

#define qcar(p) (((Cons_Cell *) (p))->car)
#define qcdr(p) (((Cons_Cell *) (p))->cdr)

#endif // MEMORY_TRACE

//
// car32(p) refers to the 32-bit integer pointed at by p. It is
// used to cope with various bits of junk at the start and end of
// "pages" of memory where (eg) the amount of the page that is in
// use needs to be recorded.
//

#define car32(p) (*(int32_t *)(p))

//
// cdr32(p) reads the next 32-bit word after that used by car32(p), and
// is used in related circumstances where I explicitly wish to work using
// just 32-bit values..
//

#define cdr32(p) (*(int32_t *)(p))[1])

typedef LispObject Special_Form(LispObject, LispObject);

// The original CSL uses entries for 1, 2 and n arguments, where the general
// case has an argument count and uses va_args.
// A newer scheme will have entries for 0, 1, 2, 3 and more than that. For
// 4 or more arguments a count is passed. For exactly four arguments the
// final argument is passed directly.
//   (F 4 a1 a2 a3 a4)
// For the 5 up case arguments 4, 5, ...
// are passed as a list much as if the call had been
//   (F n a1 a2 a3 (list a4 a5 a6 ... an))

typedef LispObject no_args(LispObject);
typedef LispObject one_args(LispObject, LispObject);
typedef LispObject two_args(LispObject, LispObject, LispObject);
typedef LispObject three_args(LispObject, LispObject, LispObject, LispObject);
typedef LispObject n_args(LispObject, int, ...);
typedef LispObject four_args(LispObject, size_t, LispObject, LispObject,
                                                 LispObject, LispObject);

//
// Headers are also LispObjects, but I give them a separate typedef
// name to help me keep their identity separate.  There is only any
// chance of headers and other objects getting confused during
// garbage collection, and the code there has to be rather on the
// careful side.  By making Headers unsigned I help the length
// calculation on them.
//

typedef uintptr_t Header;

//
// For a first version here objects will have a header word with the following
// format:
//    xxxx:xxxx:xxxx:xxxx:xxxx:x  yyy:yy zz g010
//             21-bits            5-bits  2   4
// The low 3 bits are always TAG_HDR_IMMED, and at present g is reserved
// for use by the garbage collector.
//
// I will use a shift by Tw to cope with the width of g010 with
// Tw=4 for now but potentially Tw=3 in the future

#define Tw (4)

//
// The zz bits are
//        00    symbol header, character literal, special identifier (Spid)
//        01    vector containing Lisp pointers
//        10    bit-vectors
//        11    vector containing binary data
//
// The bits yyyyy are used to indicate which case within each above category
// applies. For class "00" only the two low bits are used, so there are then
// 24 bits of payload available.
// For the other cases the field xx(21)xx gives the number of (4-byte) words
// of data used in the object. Note that this count does not include the
// size of the header itself. Because this is in 32-bit words rather than bytes
// this allows the largest object to be 8 Mbytes if your word length is 32
// bits. That limit larger than the previous CSL tagging scheme permitted. If
// at a future stage I can avoid need for the garbage collector bit g I can
// shift everything right one and support 16 Mbyte objects.
//
// For vectors of bits, bytes and halfwords the high bits of yyyyy indicate the
// number of bits used in the final 32-bit word that is indicated by xxx.
// Consider the case for bytes (as used for strings). If there are n characters
// in a string then xxx must show ((n + 3) & ~3) [suitably shifted]. The two
// bits in yy will be ((n + 3) & 3) so that 0 indicates just one character in
// the final word and 3 denotes the final word being full.
// Now given w = xxxxxyy (the packed length) just subtracting 3 should
// recover the length n.

// It took me some while to get my head around the full consequences here!
// because the lenth code is the length of active data (from 0 upwards)
// lengths can be from 0 to 0x7fffff. A byte-vector can then have a length
// stored as up to 0x7fffff:3 which stands for a length 0x1ffffc. This is a
// string that fills all the words of the vector. [these are described as for
// a 32-bit machine]. Note that if one includes the header word the total size
// of the object becomes 0x800000.

// WELL during a transition period the length code stored will be for the
// full object, including the length of its header word... So BEWARE.

#define header_mask                (0x7f<<Tw)
#define type_of_header(h)          (((unsigned int)(h)) & header_mask)
// length_of_header returns the length of a word or doubleword oriented
// object in bytes. NOT in words.
#define length_of_header(h)        ((((size_t)(h)) >> (Tw+7)) << 2)
// length_of_bitheader returns a length in bits.
#define length_of_bitheader(h)     ((((size_t)(h)) >> (Tw+2)) - 31)
// length_of_byteheader returns a length in bytes, and so compatible with what
// length_of_header used to do on byte arrays (and hence strings)
#define length_of_byteheader(h)    ((((size_t)(h)) >> (Tw+5))  - 3)
// length_of_hwordheader gives the number of halfwords used.
#define length_of_hwordheader(h)   ((((size_t)(h)) >> (Tw+6)) - 1)

#define bitvechdr_(n) (TYPE_BITVEC_1 + ((((n)+31)&31)<<(Tw+2)))

// Values for the type field in a header

//
// Symbols are so important that they have 24 bits used to sub-classify them.
// These are used by the interpreter to identify special variables, special
// forms, and those symbols which are defined as macros.  The bits live where
// other items would store a length, but since all symbol headers are the
// same size an explicit length field is not necessary - but missing one out
// means that I have to do a special check for the SYMBOL case whenever I
// scan the vector heap, which is a bit messy.
//

#define TYPE_SYMBOL         (0x0000000<<Tw)
#define  SYM_SPECIAL_VAR    (0x0000010<<Tw)  // (fluid '(xxx))
#define  SYM_GLOBAL_VAR     (0x0000020<<Tw)  // (global '(xxx))
#define  SYM_SPECIAL_FORM   (0x0000040<<Tw)  // eg. COND, QUOTE
#define  SYM_MACRO          (0x0000080<<Tw)  // (putd 'xxx 'macro ...)
#define  SYM_C_DEF          (0x0000100<<Tw)  // has definition from C kernel
#define  SYM_CODEPTR        (0x0000200<<Tw)  // just carries code pointer
#define  SYM_ANY_GENSYM     (0x0000400<<Tw)  // gensym, printed or not
#define  SYM_TRACED         (0x0000800<<Tw)
#define  SYM_FASTGET_MASK   (0x003f000<<Tw)  // used to support "fast" gets
#define  SYM_FASTGET_SHIFT  (12+Tw)
//
// In Common Lisp mode I use the rest of the header to help speed up
// test for the availability of a symbol in a package (while I am printing).
// In Standard Lisp mode I only allocate a print-name to a gensym when I
// first print it, so I have a bit that tells me when a gensym is still
// not printed.
//
#ifdef COMMON
#define  SYM_EXTERN_IN_HOME (0x0040000<<Tw)  // external in its home package
#define  SYM_IN_PACKAGE     (((int)0xff800000)/(1<<(4-Tw)))
                                            // availability in 9/10 packages
#define  SYM_IN_PKG_SHIFT   (19+Tw)
#define  SYM_IN_PKG_COUNT   (13-Tw)
#else // COMMON
#define  SYM_UNPRINTED_GENSYM (0x0040000<<Tw)// not-yet-printed gensym
#endif // COMMON

#define symhdr_length       (doubleword_align_up(sizeof(Symbol_Head)))
#define is_symbol_header(h) (((int)h & (0xf<<Tw)) == TYPE_SYMBOL)
#define is_symbol_header_full_test(h) \
    (((int)h & ((0xf<<Tw) + TAG_BITS)) == (TYPE_SYMBOL + TAG_HDR_IMMED))
#define header_fastget(h)   (((h) >> SYM_FASTGET_SHIFT) & 0x3f)
#define is_number_header_full_test(h) \
    (((int)h & ((0x1d<<Tw) + TAG_BITS)) == ((0x1d<<Tw) + TAG_HDR_IMMED))
// The "vector" case here includes vector-like number cases
#define is_vector_header_full_test(h) \
    (is_odds(h) && (((int)h & (0x3<<Tw)) != 0))

// The codes for yyyyy are as follows:

//   xxx:00 00 g010  symbol header
//   xxx:01 00 g010  character
//   xxx:10 00 g010  handle for bytecode. Why do I do it this way?
//   xxx:11 00 g010  special marker identifier (Spid) for internal use

//   000:00 01 g010  simple vector
//   000:01 01 g010  array
//   000:10 01 g010  structure
//   000:11 01 g010  object
//   001:00 01 g010  index for huge vector
//   001:01 01 g010  hash table
//   001:10 01 g010  hash table with rehash pending
//   001:11 01 g010  rational number  *
//   010:xx 01 g010  (spare: 4 codes, one a "number")
//   011:11 01 g010  complex number   *
//   100:xx 01 g010  stream and mixed1, 2 and 3
//   1x1:11 01 g010  (spare, but classifies as a number: 2 codes)
//   1xx:xx 01 g010  (spare: 14 codes)

//   yyy:yy 10 g010  bit-vector with yyyyy (1 to 32) bits in final word.

// The final column here explains what size units of storage fit within
// the object. For (eg) "encapsulated general pointer" I have made it
// 64 and I should pad 32-bit cases to that width - but I do not expect
// those sorts of data to survice serialization, so I annotate them here
// as "64?".

//   000:00 11 g010  vec8-1                         8
//   000:01 11 g010  string-1                       8
//   000:10 11 g010  bytecode-1                     8
//   000:11 11 g010  vec16-1                        16
//   001:00 11 g010  vec32                          32
//   001:01 11 g010  vec64                          64
//   001:10 11 g010  vec128                         128
//   001:11 11 g010  bignum            *            32
//   010:00 11 g010  vec8-2                         8
//   010:01 11 g010  string-2                       8
//   010:10 11 g010  bytecode-2                     8
//   010:11 11 g010  maple-ref                      64?
//   011:00 11 g010  foreign                        64?
//   011:01 11 g010  encapsulated-sp                64?
//   011:10 11 g010  encapsulated general pointer   64?
//   011:11 11 g010  float32           *            F32
//   100:00 11 g010  vec8-2                         8
//   100:01 11 g010  string-3                       8
//   100:10 11 g010  bytecode-3                     8
//   100:11 11 g010  vec16-2                        16
//   101:00 11 g010  vecflt32                       F32
//   101:01 11 g010  vecflt64                       F64
//   101:10 11 g010  vecflt128                      F128
//   101:11 11 g010  float64           *            F64
//   110:00 11 g010  vec8-3                         8
//   110:01 11 g010  string-4                       8
//   110:10 11 g010  bytecode-4                     8
//   110:11 11 g010  nativecode                     8
//   111:00 11 g010  (spare: 1 code)                X
//   111:01 11 g010  (spare: 1 code)                X
//   111:10 11 g010  (spare: 1 code)                X
//   111:11 11 g010  float128          *            F128

// I have tests that let me discern the size of storage units within a
// vector. This matters for serialisation and deserialisation because the
// source and target machines may use different ordering for bytes within
// words etc.

// I use a bitmap scheme for all of these because that gives me uniformity
// and because I do not believe that special treatment of any of the
// case would do much better. I expect that strings and bignums will be
// the most common cases.

#define vector_i8(h)   (((0x7f070707u >> ((h >> (Tw+2)) & 0x1f)) & 1) != 0)
#define vector_i16(h)  (((0x00080008u >> ((h >> (Tw+2)) & 0x1f)) & 1) != 0)
#define vector_i32(h)  (((0x00000090u >> ((h >> (Tw+2)) & 0x1f)) & 1) != 0)
#define vector_i64(h)  (((0x00007820u >> ((h >> (Tw+2)) & 0x1f)) & 1) != 0)
#define vector_i128(h) (((0x00000040u >> ((h >> (Tw+2)) & 0x1f)) & 1) != 0)
#define vector_f32(h)  (((0x00108000u >> ((h >> (Tw+2)) & 0x1f)) & 1) != 0)
#define vector_f64(h)  (((0x00a00000u >> ((h >> (Tw+2)) & 0x1f)) & 1) != 0)
#define vector_f128(h) (((0x80400000u >> ((h >> (Tw+2)) & 0x1f)) & 1) != 0)

// I have made the allocation so that any header of the form xx1:11x1:g010
// is the header of a number.


#define TYPE_BIGNUM         ( 0x1f <<Tw)
#define TYPE_RATNUM         ( 0x1d <<Tw)
#define TYPE_COMPLEX_NUM    ( 0x3d <<Tw)
#define TYPE_SINGLE_FLOAT   ( 0x3f <<Tw)
#define TYPE_DOUBLE_FLOAT   ( 0x5f <<Tw)
#define TYPE_LONG_FLOAT     ( 0x7f <<Tw)

#ifdef MEMORY_TRACE
#define numhdr(v) (*(Header *)memory_reference((intptr_t)((char *)(v) - \
                                               TAG_NUMBERS)))
#define flthdr(v) (*(Header *)memory_reference((intptr_t)((char *)(v) - \
                                               TAG_BOXFLOAT)))
#else
#define numhdr(v) (*(Header *)((char *)(v) - TAG_NUMBERS))
#define flthdr(v) (*(Header *)((char *)(v) - TAG_BOXFLOAT))
#endif

// Here I have a header and I want to know if the pointer to the
// object concerned ought to be marked with TAG_NUMBERS. This should apply
// at present to BIGNUM, COMPLEX and RATNUM  . In the future I may move
// FLOAT36 and FLOAT128 here and FLOAT64 might sort of vanish.
// This is only used in the garbage collector and I am not going to
// expect it to be seriously performance critical, so I will code it in a
// naive but clear manner.

#define is_numbers_header(h) \
  (type_of_header(h) == TYPE_BIGNUM || \
   type_of_header(h) == TYPE_COMPLEX_NUM || \
   type_of_header(h) == TYPE_RATNUM)

// Here I have a header and I want to know if the pointer to this
// object should be marked with TAG_BOXFLOAT. At present that applies
// as shown. In the future it may never apply at all!

#define is_boxfloat_header(h) \
  (type_of_header(h) == TYPE_SINGLE_FLOAT || \
   type_of_header(h) == TYPE_DOUBLE_FLOAT || \
   type_of_header(h) == TYPE_LONG_FLOAT)

//
// The following tests are valid provided that n is already known to
// have tag TAG_NUMBERS, i.e. it is a bignum, ratio or complex.
//
#define is_ratio(n) \
    (type_of_header(numhdr(n)) == TYPE_RATNUM)

#define is_complex(n) \
    (type_of_header(numhdr(n)) == TYPE_COMPLEX_NUM)

#define is_bignum_header(h) (type_of_header(h) == TYPE_BIGNUM)
#define is_bignum(n) is_bignum_header(numhdr(n))

#define is_string_header(h) ((type_of_header(h) & (0x1f<<Tw)) == TYPE_STRING_1)
#define is_string(n) is_string_header(vechdr(n))

#define is_vec8_header(h) ((type_of_header(h) & (0x1f<<Tw)) == TYPE_VEC8_1)
#define is_vec8(n) is_vec8_header(vechdr(n))

#define is_bpsvec_header(h) ((type_of_header(h) & (0x1f<<Tw)) == TYPE_BPS_1)
#define is_bpsvec(n) is_bpsvec_header(vechdr(n))

#define is_vec16_header(h) ((type_of_header(h) & (0x3f<<Tw)) == TYPE_VEC16_1)
#define is_vec16(n) is_vec16_header(vechdr(n))

#define is_bitvec_header(h) ((type_of_header(h) & (0x03<<Tw)) == TYPE_BITVEC_1)
#define is_bitvec(n) is_bitvec_header(vechdr(n))

#ifdef MEMORY_TRACE
#define vechdr(v)  (*(Header *)memory_reference((intptr_t)((char *)(v) - \
                               TAG_VECTOR)))
#define elt(v, n)  (*(LispObject *)memory_reference((intptr_t)((char *)(v) + \
                               (CELL-TAG_VECTOR) + \
                               (((intptr_t)(n))*sizeof(LispObject)))))
#define celt(v, n) (*cmemory_reference((intptr_t)((char *)(v) + \
                               (CELL-TAG_VECTOR)+((intptr_t)(n)))))
#define ucelt(v, n) (*(unsigned char *)cmemory_reference( \
                               (intptr_t)((char *)(v) + \
                               (CELL-TAG_VECTOR)+((intptr_t)(n)))))
#define scelt(v, n) (*(signed char *)cmemory_reference( \
                               (intptr_t)((char *)(v) + \
                               (CELL-TAG_VECTOR)+((intptr_t)(n)))))
#else // MEMORY_TRACE

#define vechdr(v)  (*(Header *)((char *)(v) - TAG_VECTOR))
#define elt(v, n)  (*(LispObject *)((char *)(v) + \
                               (CELL-TAG_VECTOR) + \
                               (((intptr_t)(n))*sizeof(LispObject))))
#define celt(v, n) (*((char *)(v) + (CELL-TAG_VECTOR)+((intptr_t)(n))))
#define ucelt(v, n) (*((unsigned char *)(v) + (CELL-TAG_VECTOR)+((intptr_t)(n))))
#define scelt(v, n) (*((signed char *)(v) + (CELL-TAG_VECTOR)+((intptr_t)(n))))

#endif // MEMORY_TRACE

//
// The next are for 16-bit & 32 bit values and single-float & double-float
// access. Note that halfwords are signed.
//
//
// In days of ancient history some systems did not support 16-bit values.
// Specifically the DEC Alpha compilers did not have a 16-bit data type and
// ARM did not support 16-bit usage at all well. However these days I intend
// to expect that int16_t will exist and will be something I can rely on.
//
#define helt(v, n) (*(int16_t *)((char *)(v) + \
    (CELL-TAG_VECTOR) + ((intptr_t)(n))*sizeof(int16_t)))
#define sethelt(v, n, x) (*(int16_t *)((char *)(v) + \
    (CELL-TAG_VECTOR) + ((intptr_t)(n))*sizeof(int16_t)) = (x))
#define ielt(v, n)  (*(intptr_t *)((char *)(v) + \
    (CELL-TAG_VECTOR)+(((intptr_t)(n))*sizeof(intptr_t))))
//
// Even on a 64-bit machine I will support packed arrays of 32-bit
// ints or short-floats.
//
#define ielt32(v, n)  (*(int32_t *)((char *)(v) + \
    (CELL-TAG_VECTOR)+(((intptr_t)(n))*sizeof(int32_t))))
#define felt(v, n)  (*(float *)((char *)(v) + \
    (CELL-TAG_VECTOR)+(((intptr_t)(n))*sizeof(float))))
#define delt(v, n)  (*(double *)((char *)(v) + \
    (2*CELL-TAG_VECTOR)+(((intptr_t)(n))*sizeof(double))))

//
// Bit, byte and halfword-vectors need extra information held here so that
// their exact can be determined.  Generally headers hold length information
// measured in words, so a few more bits are required here.
// Bitvectors will now supported even in Standard Lisp mode.
//

#define TYPE_BITVEC_1     ( 0x02 <<Tw)  // subtypes encode length mod 32
#define TYPE_BITVEC_2     ( 0x06 <<Tw)  // BITVEC_n has n bits in use in its...
#define TYPE_BITVEC_3     ( 0x0a <<Tw)  // ... final 32-bit word.
#define TYPE_BITVEC_4     ( 0x0c <<Tw)  //
#define TYPE_BITVEC_5     ( 0x12 <<Tw)  //
#define TYPE_BITVEC_6     ( 0x16 <<Tw)  //
#define TYPE_BITVEC_7     ( 0x1a <<Tw)  //
#define TYPE_BITVEC_8     ( 0x1c <<Tw)  //
#define TYPE_BITVEC_9     ( 0x22 <<Tw)  //
#define TYPE_BITVEC_10    ( 0x26 <<Tw)  //
#define TYPE_BITVEC_11    ( 0x2a <<Tw)  //
#define TYPE_BITVEC_12    ( 0x2c <<Tw)  //
#define TYPE_BITVEC_13    ( 0x32 <<Tw)  //
#define TYPE_BITVEC_14    ( 0x36 <<Tw)  //
#define TYPE_BITVEC_15    ( 0x3a <<Tw)  //
#define TYPE_BITVEC_16    ( 0x3c <<Tw)  //
#define TYPE_BITVEC_17    ( 0x42 <<Tw)  //
#define TYPE_BITVEC_18    ( 0x46 <<Tw)  //
#define TYPE_BITVEC_19    ( 0x4a <<Tw)  //
#define TYPE_BITVEC_20    ( 0x4c <<Tw)  //
#define TYPE_BITVEC_21    ( 0x52 <<Tw)  //
#define TYPE_BITVEC_22    ( 0x56 <<Tw)  //
#define TYPE_BITVEC_23    ( 0x5a <<Tw)  //
#define TYPE_BITVEC_24    ( 0x5c <<Tw)  //
#define TYPE_BITVEC_25    ( 0x62 <<Tw)  //
#define TYPE_BITVEC_26    ( 0x66 <<Tw)  //
#define TYPE_BITVEC_27    ( 0x6a <<Tw)  //
#define TYPE_BITVEC_28    ( 0x6c <<Tw)  //
#define TYPE_BITVEC_29    ( 0x72 <<Tw)  //
#define TYPE_BITVEC_30    ( 0x76 <<Tw)  //
#define TYPE_BITVEC_31    ( 0x7a <<Tw)  //
#define TYPE_BITVEC_32    ( 0x7c <<Tw)  //

// A string is not really a vector of characters since it is in utf-8 so
// access to the nth characters or updating characters within it is
// hard. You should use a vector of 32-bit codepoints if you want
// a genuine vector of characters, but then you will not have a string!

#define TYPE_STRING_1    ( 0x07 <<Tw) // simple (narrow) character vector
#define TYPE_STRING_2    ( 0x27 <<Tw) // Strings are in UTF8
#define TYPE_STRING_3    ( 0x47 <<Tw) //
#define TYPE_STRING_4    ( 0x67 <<Tw) //

#define TYPE_VEC8_1      ( 0x03 <<Tw) // vector of 8 bit values
#define TYPE_VEC8_2      ( 0x23 <<Tw) //
#define TYPE_VEC8_3      ( 0x43 <<Tw) //
#define TYPE_VEC8_4      ( 0x63 <<Tw) //

#define TYPE_BPS_1       ( 0x0b <<Tw) // Bytecodes
#define TYPE_BPS_2       ( 0x2b <<Tw) //
#define TYPE_BPS_3       ( 0x4b <<Tw) //
#define TYPE_BPS_4       ( 0x6b <<Tw) //

#define TYPE_NATIVECODE  ( 0x6f <<Tw) //

#define TYPE_VEC16_1     ( 0x0f <<Tw) // vector of 16 bit values
#define TYPE_VEC16_2     ( 0x4f <<Tw) //

#define TYPE_MAPLEREF    ( 0x2f <<Tw) // hook for interface to Maple ...
                                      // ... note this was an EXPERIMENT
#define TYPE_FOREIGN     ( 0x33 <<Tw) // entrypoint to foreign function
#define TYPE_SP          ( 0x37 <<Tw) // Encapsulated stack ptr
#define TYPE_ENCAPSULATE ( 0x3b <<Tw) // SAME TAG AS SP AT PRESENT@@@

#define vector_holds_binary(h) (((h) & (0x2<<Tw)) != 0)

#define TYPE_SIMPLE_VEC   ( 0x01 <<Tw) // simple general vector
#define TYPE_INDEXVEC     ( 0x11 <<Tw) // use for huge vectors
#define TYPE_HASH         ( 0x15 <<Tw) // hash table
#define TYPE_HASHX        ( 0x19 <<Tw) // hash table in need of re-hashing
#define TYPE_ARRAY        ( 0x05 <<Tw) // header record for general array
#define TYPE_STRUCTURE    ( 0x09 <<Tw) // includes packages etc possibly
#define TYPE_OBJECT       ( 0x0d <<Tw) // and "object"

#define TYPE_VEC32        ( 0x13 <<Tw) // contains 32-bit integers
#define TYPE_VEC64        ( 0x17 <<Tw) // contains 32-bit integers
#define TYPE_VEC128       ( 0x1b <<Tw) // contains 32-bit integers
#define TYPE_VECFLOAT32   ( 0x53 <<Tw) // contains single-precision floats
#define TYPE_VECFLOAT64   ( 0x57 <<Tw) // contains double-precision floats
#define TYPE_VECFLOAT128  ( 0x5b <<Tw) // contains long double floats

// The next items live amongst the vectors that hold LIsp pointers, but only
// the first three items are pointers - the rest of the stuff is binary
// data. This arrangements was required for streams, and the three other
// "mixed" cases are just in case anybody finds them useful.
#define is_mixed_header(h) (((h) & (0x73<<Tw)) == TYPE_MIXED1)

#define TYPE_MIXED1       ( 0x41 <<Tw) // general, but limited to 3 pointers
#define TYPE_MIXED2       ( 0x45 <<Tw) // general, but limited to 3 pointers
#define TYPE_MIXED3       ( 0x49 <<Tw) // only 3 pointers
#define TYPE_STREAM       ( 0x4d <<Tw) // 3 pointers then binary data

#define HDR_IMMED_MASK    (( 0xf <<Tw) | TAG_BITS)
#define TAG_CHAR          (( 0x4 <<Tw) | TAG_HDR_IMMED) // 24 bits payload
#define TAG_BPS           (( 0x8 <<Tw) | TAG_HDR_IMMED) // I rather forget..
      // why BPS is referred to using a weird handle like this!
#define TAG_SPID          (( 0xc <<Tw) | TAG_HDR_IMMED) // Internal flag values

#define SPID_NIL            (TAG_SPID+0x0000)  // NIL in checkpoint file
#define SPID_FBIND          (TAG_SPID+0x0100)  // Fluid binding on stack
#define SPID_CATCH          (TAG_SPID+0x0200)  // CATCH frame on stack
#define SPID_PROTECT        (TAG_SPID+0x0300)  // UNWIND_PROTECT on stack
#define SPID_HASHEMPTY      (TAG_SPID+0x0400)  // Empty hash slot
#define SPID_HASHTOMB       (TAG_SPID+0x0500)  // Deleted hash slot
#define SPID_GCMARK         (TAG_SPID+0x0600)  // Used by GC as sentinel
#define SPID_NOINPUT        (TAG_SPID+0x0700)  // Used by (read) in #X()
#define SPID_ERROR          (TAG_SPID+0x0800)  // Used to indicate error
#define SPID_PVBIND         (TAG_SPID+0x0900)  // PROGV binding on stack
#define SPID_NOARG          (TAG_SPID+0x0a00)  // Missing &OPTIONAL arg
#define SPID_NOPROP         (TAG_SPID+0x0b00)  // fastget entry is empty
#define SPID_LIBRARY        (TAG_SPID+0x0c00)  // + 0xnnn00000 offset

#define is_header(x) (((int)(x) & (0x3<<Tw)) != 0) // valid if TAG_HDR_IMMED
#define is_char(x)   (((int)(x) & HDR_IMMED_MASK) == TAG_CHAR)
#define is_bps(x)    (((int)(x) & HDR_IMMED_MASK) == TAG_BPS)
#define is_spid(x)   (((int)(x) & HDR_IMMED_MASK) == TAG_SPID)
#define is_library(x)(((int)(x) & 0xfffff)        == SPID_LIBRARY)
#define library_number(x) (((x) >> 20) & 0xfff)

//
// I will now try to support the full range of Unicode from
// U+0000 to U+10FFFF.
//
// Note that pack_char now takes a 21-bit code but only values up to
// 0x0010ffff are valid for Unicode. Internally I will often pack
// things using utf-8 encoded strings.
//

// The absolute shift values here reflect the fact that I have (at least)
// 24 bits of payload in a CHAR object. It is not at all obvious to me that
// the Common Lisp "font" component of characters was a good idea to start
// with or that it has any respectable purpose today, and I only support
// 8 distinct "Font" codes when I am on 32-bit hardware.

#define font_of_char(n)  (((int32_t)(n) >> 29) & 0x7)
#define bits_of_char(n)  (0)
#define code_of_char(n)  (((int32_t)(n) >>  8) & 0x001fffff)

#define pack_char(font, code)                                      \
    ((LispObject)((((uint32_t)(font)) << 29) |                    \
                   (((uint32_t)(code)) << 8) | TAG_CHAR))

//
// For internal purposes here I will use a pseudo-character with code
// 0x0010ffff to stand for an end of file marker. This can be packed as
// 4 bytes in utf-8 (f4/8f/bf/bf) and it is the last codepoint in the
// Unicode range and is reserved in Unicode as not baing a valid
// character.
//
#define CHAR_EOF pack_char(0, 0x0010ffff)


//
// The following shows that a BPS entrypoint is represented with
// 8 bits of tag at the bottom of the word.  There follow (PAGE_BITS-2)
// bits of word-offset within the page.  Finally the rest of the word is
// a page number.  This allows for up to 64 Mbytes of code space if I
// am on a 32-bit machine. If PAGE_BITS is 22 (my current default on
// most systems) this will be up to 16 pages each holding 4 Mbytes.
// Given the compactness of the bytecode format the limit seems generous
// enough at present! One thing to note here is that the packed address
// in a BPS reference goes to the data not to the header that preceeds it.
// If I am on a 64-bit machine I may need to have a way to refer to an
// address in the top half of an oversized page. But I only ever need to do
// that if I am on a 64-bit system and in that case I have all the top
// 32-bits of the word available. There is a slight initial cause for
// concern because when things are initially expanded to 64 bits it is
// using sign-extension, so the top half of the item could be either
// all zeros or all ones. But if I am careful when I create all BPS
// pointers and when I adjust them after loading an image I can set a
// bit in the top half of the word if necessary. I very much hope that
// good optimising compilers will note whether SIXTY_FOUR_BIT is true
// or false and optimise what is written here as a dynamic test into
// reasonable code.
//

// Right now I am not sure that I remember why I handle BPS using these
// rather peculiar packed handles rather than using a more straightforward
// direct reference to a vector of bytes. I MAY look into that again and
// try to rationalise things! But meanwhile the code here still ought to
// work since I think I still have the same number of low bits used for
// tagging in my handle.

#define data_of_bps(v)                                        \
  ((char *)(doubleword_align_up((intptr_t)                    \
               bps_pages[((uint32_t)(v))>>(PAGE_BITS+6)]) +   \
            (SIXTY_FOUR_BIT ?                                 \
               (intptr_t)((((uint64_t)(v))>>(32-PAGE_BITS)) & \
                          PAGE_POWER_OF_TWO) :                \
               0) +                                           \
            (((v) >> 6) & (PAGE_POWER_OF_TWO-4))))


typedef int32_t junk;      // Unused 4-byte field for structures (for padding)
typedef intptr_t junkxx;   // Unused cell-sized field for structures

typedef struct Symbol_Head
{
//
// TAG_SYMBOL has the value 4, so on a 32-bit system a pointer
// to a symbol points at the second word of it, ie the value cell. The
// effect in that case is that the selector CAR would access the value
// cell. For 64-bit addresses this pun will not work so easily.
//
// The fields marked with a "*" are pending a re-work.
    Header header;       // Standard format header for vector types
    LispObject value;    // Global or special value cell

    LispObject env;      // Extra stuff to help function cell
    LispObject pname;    // A string (always)

    LispObject plist;    // A list
    LispObject fastgets; // to speed up flagp and get

    LispObject package;  // Home package - a package object                  *
    intptr_t function0;  // Executable code always (no arguments)            *

    intptr_t function1;  // Executable code always (just 1 arg)
    intptr_t function2;  // Executable code always (just 2 args)

    intptr_t function3;  // Executable code always (just 3 args)             *
    union {
    intptr_t functionn;  // Executable code always (0, or >= 3 args)
    intptr_t function4;  // Executable code always (just 4 args)             *
    intptr_t function5up;// Executable code always (3 args + vector for rest)*
          };

    uint64_t count;      // for statistics
} Symbol_Head;


#define MAX_FASTGET_SIZE  63
// I have up to 63 "fast" tags for PUT/GET/FLAG/FLAGP

//
// The access macros are coded this way rather than using -> and
// a structure since this reveals directly what offsets are involved
// in the addressing, and so gives the C compiler an easier job!
// There are so many casts anyway that this is not so very bad really!
// I also use absolute numeric offsets (and do not use the offsetof
// macro) to stress that I view the store layout as fixed, and because
// offsetof is badly supported by some C compilers I have come across.
//
#define qheader(p)     (*(Header      *)((char *)(p) + (0*CELL-TAG_SYMBOL)))
#define qvalue(p)      (*(LispObject  *)((char *)(p) + (1*CELL-TAG_SYMBOL)))
#define qenv(p)        (*(LispObject  *)((char *)(p) + (2*CELL-TAG_SYMBOL)))
#define qpname(p)      (*(LispObject  *)((char *)(p) + (3*CELL-TAG_SYMBOL)))
#define qplist(p)      (*(LispObject  *)((char *)(p) + (4*CELL-TAG_SYMBOL)))
#define qfastgets(p)   (*(LispObject  *)((char *)(p) + (5*CELL-TAG_SYMBOL)))
#define qpackage(p)    (*(LispObject  *)((char *)(p) + (6*CELL-TAG_SYMBOL)))

// The ifn() selector gives access to the qfn() cell, but treating its
// contents as (intptr_t).
//
#define ifn0(p)        (*(intptr_t    *)((char *)(p) + (7*CELL-TAG_SYMBOL)))
#define ifn1(p)        (*(intptr_t    *)((char *)(p) + (8*CELL-TAG_SYMBOL)))
#define ifn2(p)        (*(intptr_t    *)((char *)(p) + (9*CELL-TAG_SYMBOL)))
#define ifn3(p)        (*(intptr_t    *)((char *)(p) + (10*CELL-TAG_SYMBOL)))
#define ifnn(p)        (*(intptr_t    *)((char *)(p) + (11*CELL-TAG_SYMBOL)))
#define ifn4(p)        (*(intptr_t    *)((char *)(p) + (11*CELL-TAG_SYMBOL)))


#define qfn0(p)        (*(no_args    **)((char *)(p) + (7*CELL-TAG_SYMBOL)))
#define qfn1(p)        (*(one_args   **)((char *)(p) + (8*CELL-TAG_SYMBOL)))
#define qfn2(p)        (*(two_args   **)((char *)(p) + (9*CELL-TAG_SYMBOL)))
#define qfn3(p)        (*(three_args **)((char *)(p) + (10*CELL-TAG_SYMBOL)))
#define qfnn(p)        (*(n_args     **)((char *)(p) + (11*CELL-TAG_SYMBOL)))
#define qfn4(p)        (*(four_args  **)((char *)(p) + (11*CELL-TAG_SYMBOL)))

#define qcount(p)      (*(uint64_t    *)((char *)(p) + (12*CELL-TAG_SYMBOL)))

typedef union Float_union
{   float f;
    int32_t i;
} Float_union;

typedef struct Big_Number
{
// see "arith.h" for a description of bignum formats
    Header h;
//
// EVEN when I have 64-bit addresses I will represent
// big-numbers as arrays of 32-bit values.  So I will still have to
// ensure that I end up with a rounded number of digits - but in the
// 64-bit case it will need to be an even number because the
// header word at the front of a bignum becomes 64-bits long.
//
    uint32_t d[1];  // generally more digits than this
} Big_Number;

#define bignum_length(b)  length_of_header(numhdr(b))
#ifdef MEMORY_TRACE
#define bignum_digits(b)  ((uint32_t *)memory_reference((intptr_t)((char *)b + \
                                         (CELL-TAG_NUMBERS))))
#else
#define bignum_digits(b)  ((uint32_t *)((char *)b  + (CELL-TAG_NUMBERS)))
#endif

// make_bighdr takes an argument measured in 32-bit units, including space
// for the header word. This is the natural space unit used in the tagging
// scheme so I just need to shift the count to where it has to live.
#define make_bighdr(n)    (TAG_HDR_IMMED+TYPE_BIGNUM+(((intptr_t)(n))<<(Tw+7)))
// pack_hdrlength takes a length in bytes (including the size of the header)
// but it OUGHT always to be a multiple of 4. I will for now not check
// that, but if anybody gets in wrong the effect will be to confuse the
// tagging system potentially badly. NOTE VERY WELL that although the other
// header length packers take a count of items this one takes a length in
// bytes!
#define pack_hdrlength(n) (((intptr_t)(n))<<(Tw+7))
// pack_hdrlengthbytes takes a number of 32-bit words as an argument and
// adjusts it to go in a header.
//@#define pack_hdrlengthbits(n) ((31+(intptr_t)(n))<<(Tw+2))
//@#define pack_hdrlengthbytes(n) ((3+(intptr_t)(n))<<(Tw+5))
//@#define pack_hdrlengthhwords(n) ((1+(intptr_t)(n))<<(Tw+4))
#define make_padder(n) (pack_hdrlength((n)/4) + TYPE_VEC8_1 + TAG_HDR_IMMED)

typedef struct Rational_Number
{   Header header;
    LispObject num;
    LispObject den;
} Rational_Number;

#define numerator(r)    (((Rational_Number *)((char *)(r)-TAG_NUMBERS))->num)
#define denominator(r)  (((Rational_Number *)((char *)(r)-TAG_NUMBERS))->den)

typedef struct Complex_Number
{   Header header;
    LispObject real;
    LispObject imag;
} Complex_Number;

#define real_part(r)    (((Complex_Number *)((char *)(r)-TAG_NUMBERS))->real)
#define imag_part(r)    (((Complex_Number *)((char *)(r)-TAG_NUMBERS))->imag)

typedef struct Single_Float
{   Header header;
    union float_or_int
    {   float f;
//      float32_t f32;
        int32_t i;
    } f;
} Single_Float;

#define single_float_val(v) \
    (((Single_Float *)((char *)(v)-TAG_BOXFLOAT))->f.f)
#define float32_t_val(v) \
    (((Single_Float *)((char *)(v)-TAG_BOXFLOAT))->f.f32)
#define intfloat32_t_val(v) \
    (((Single_Float *)((char *)(v)-TAG_BOXFLOAT))->f.i)

//
// The structures here are not actually used - because I can not get
// as strong control of alignment as I would like. So I use macros that
// do address arithmetic explicitly for me...
//
//  typedef struct Double_Float
//  {
//      Header header;
//                            // SIXTY_FOUR_BIT is not a compile-time constant
//  #ifndef SIXTY_FOUR_BIT    // Can not do this #ifdef!!
//      junk padding;         // for 64-bit the header was 64 bits wide
//  #endif
//      union double_or_ints {
//          double f;         // padded to doubleword align the data.
//          float64_t f64;
//          int32_t i[2];
//          int64_t ii;
//      } f;
//  } Double_Float;
//

#define SIZEOF_DOUBLE_FLOAT     16
#define double_float_addr(v)    ((double *)((char *)(v) + \
                                   (8-TAG_BOXFLOAT)))
// on 32-bit machines there has to be a padding work in a double_float,
// and this lets me clear it out.
#define double_float_pad(v)     (*(int32_t *)((char *)(v) + \
                                   (4-TAG_BOXFLOAT)))
#define double_float_val(v)     (*(double *)((char *)(v) + \
                                   (8-TAG_BOXFLOAT)))
#define float64_t_val(v)        (*(float64_t *)((char *)(v) + \
                                   (8-TAG_BOXFLOAT)))
#define intfloat64_t_val(v)     (*(int64_t *)((char *)(v) + \
                                   (8-TAG_BOXFLOAT)))

//
// Again I do not actually introduce the struct...
//
// For "long double" I use float128_t as implemented in the SoftFloat_3a
// library. This represents each float with 16-bits of exponent and 113
// bits of mantissa (including the hidden bit). Basic arithmetic is
// supported, but not the elemantary functions. I am going to ASSUME that
// everything can be aligned at 8-byte boundaries.
//
//  typedef struct Long_Float
//  {
//      Header header;
//  #ifndef SIXTY_FOUR_BIT  // Illegal #ifdef here!
//      junk padding;
//  #endif
//      union long_or_ints {
//          float128_t f128;
//          int32_t i[4];
//          int64_t ii[2];
//      } f;
//  } Long_Float;
//

#define SIZEOF_LONG_FLOAT       24
#define long_float_addr(v)      ((float128_t *)((char *)(v) + \
                                   (8-TAG_BOXFLOAT)))
#define long_float_pad(v)       (*(int32_t *)((char *)(v) + \
                                   (4-TAG_BOXFLOAT)))
#define long_float_val(v)       (*(float128_t *)((char *)(v) + \
                                   (8-TAG_BOXFLOAT)))
#define float128_t_val(v)       (*(float128_t *)((char *)(v) + \
                                   (8-TAG_BOXFLOAT)))
#define intfloat128_t_val0(v)   (*(int64_t *)((char *)(v) + \
                                   (8-TAG_BOXFLOAT)))
#define intfloat128_t_val1(v)   (*(int64_t *)((char *)(v) + \
                                   (16-TAG_BOXFLOAT)))

#define word_align_up(n) ((LispObject)(((intptr_t)(n) + 3) & (-4)))

#define doubleword_align_up(n) ((LispObject)(((intptr_t)(n) + 7) & (-8)))
#define doubleword_align_down(n) ((LispObject)((intptr_t)(n) & (-8)))

#define object_align_up(n) ((LispObject)(((intptr_t)(n) + \
                            sizeof(LispObject) - 1) & (-sizeof(LispObject))))

//
// For the benefit of 64-bit architectures I will make the big blocks
// of memory that I use 128-bit aligned. This may help me at
// one delicate place in the garbage collector! But I really rather hope
// I do not rely on this at all much.
//
#define quadword_align_up(n) ((LispObject)(((intptr_t)(n) + 15) & (-16)))
#define quadword_align_down(n) ((LispObject)((intptr_t)(n) & (-16)))

//
// values to go in exit_reason at times when exception_pending() is true.
//

#define UNWIND_NULL       0x0         // no error or action at all
#define UNWIND_GO         0x1         // GO, to support non-local case
#define UNWIND_RETURN     0x2         // RETURN, to support non-local
#define UNWIND_THROW      0x3         // THROW is obvious
#define UNWIND_RESTART    0x4         // (restart!-csl ...)
#define UNWIND_RESOURCE   0x5         // used with (resource!-limit ...)

#define UNWIND_FNAME      0x100       // at least short backtrace is needed
#define UNWIND_ARGS       0x200       // produce long form backtrace
#define UNWIND_ERROR      (UNWIND_FNAME|UNWIND_ARGS)
#define UNWIND_UNWIND     0x400       // no backtrace, still an error

#if 0 && defined DEBUG
//
// When I have built the system with debugging options enabled I will display
// a backtrace when performing THROW as well as after errors. This is so
// I can really see what is going on! Well that now feels like a nuisance so I
// will back off from it, but leave this here so it would be easy to
// reinstate if needed later on.
//
#define SHOW_FNAME  (exit_reason == UNWIND_THROW || \
                     (exit_reason & UNWIND_FNAME) != 0)
#define SHOW_ARGS   (exit_reason == UNWIND_THROW || \
                     (exit_reason & UNWIND_ARGS) != 0)
#else
#define SHOW_FNAME  ((exit_reason & UNWIND_FNAME) != 0)
#define SHOW_ARGS   ((exit_reason & UNWIND_ARGS) != 0)
#endif

// The C and C++ refuse to define the behaviour of right shifts
// on signed types. The underlying reason may relate to the possibility that
// numbers might be stored in sign-and-magnitude notation or some other
// scheme other than the 2s complement that is in practice universal these
// days. The macro here assumes 2s complement arithmetic, but first tests
// for that and if so just does the shift. Otherwise it arranges to extend
// the sign bit manually, using division by powers of 2 on unsigned values
// to do the main shift operation. I believe that even though this looks
// rather messy here it will lead to simple compiled code with modern C++
// compilers. Note that what I provide here is ONLY for 32-bit values.
// I would need something similar for 64-bit ones!

// Maybe it will be more sense if I just insist that CSL will only run on
// systems where right shifts on signed values are arithmetic!

#define ASR(v, n) \
  (((-1) >> 1) == -1 ? ((int32_t)(v)) >> (n) : \
   (int32_t)(v) >= 0 ? (int32_t)((uint32_t)(v) / (uint32_t)(1 << (n))) : \
   (int32_t)(((uint32_t)(v) / (uint32_t)(1 << (n))) | \
             (- (1 << (32 - (n))))))


extern LispObject getvector(int tag, int type, size_t length);
extern LispObject getvector_init(size_t n, LispObject v);
extern LispObject getcodevector(int type, size_t size);
extern uint32_t  hash_lisp_string(LispObject s);

extern LispObject intern(int len, bool escaped);
extern LispObject iintern(LispObject str, int32_t h, LispObject p,
                          int str_is_ok /* NOT a bool */);


// Now some ad hoc patch-ups

#define onevalue(x) (x)
#define nvalues(x, n) (x)
#define errexit()
#define errexitn(n)
#define errexitv()
#define argcheck(a, b, c);
static LispObject sys_hash_table;
#define lisp_true 1
static LispObject nil = 0;
#define C_nil 0
static LispObject mystack[30];
static LispObject *mystackp = &mystack[0];
#define push(x) *mystackp++ = (x);
#define push2(x, y) { *mystackp++ = (x); *mystackp++ = (y); }
#define push3(x, y, z) { *mystackp++ = (x); *mystackp++ = (y); *mystackp++ = (z); }
#define push4(x, y, z, w) { *mystackp++ = (x); *mystackp++ = (y); *mystackp++ = (z); *mystackp++ = (w); }
#define pop(x) (x) = *--mystackp;
#define pop2(x, y) { (x) = *--mystackp; (y) = *--mystackp; }
#define pop3(x, y, z) { (x) = *--mystackp; (y) = *--mystackp; (z) = *--mystackp; }
#define pop4(x, y, z, w) { (x) = *--mystackp; (y) = *--mystackp; (z) = *--mystackp; (w) = *--mystackp; }
extern void simple_msg(const char *s, LispObject x);
static LispObject mv_2;
static LispObject work_0;
static LispObject vfringe;
static LispObject *vheaplimit;
#define GC_VEC 1
static LispObject reclaim(LispObject a, const char *s, int code, int size) { return a; }

static LispObject rational(LispObject a) { return 0; }
static LispObject ncons(LispObject a) { return 0; }
static LispObject cons(LispObject a, LispObject b) { return 0; }
static LispObject acons(LispObject a, LispObject b, LispObject c) { return 0; }
static LispObject Lapply2(LispObject a, int n, LispObject b, LispObject c, LispObject d) { return 0; }

static LispObject eq_hash_tables = 0;
static LispObject string_char_sym = 3;
static LispObject bit_symbol = 4;
static LispObject pathname_symbol = 5;
static int gc_number = 0;
static double float_of_number(LispObject a) { return 0.0; }
static char *bps_pages[10];


typedef struct setup_type
{   const char *name;
    one_args *one;
    two_args *two;
    n_args *n;
} setup_type;

typedef struct setup_type_1
{   const char *name;
    one_args *one;
    two_args *two;
    n_args *n;
    uint32_t c1;
    uint32_t c2;
} setup_type_1;

extern "C" LispObject interrupted(LispObject p);
extern "C" LispObject error(int nargs, int code, ...);
extern "C" LispObject cerror(int nargs, int code1, int code2, ...);
extern "C" LispObject too_few_2(LispObject env, LispObject a1);
extern "C" LispObject too_many_1(LispObject env, LispObject a1, LispObject a2);
extern "C" LispObject wrong_no_0a(LispObject env, LispObject a1);
extern "C" LispObject wrong_no_0b(LispObject env, LispObject a1, LispObject a2);
extern "C" LispObject wrong_no_3a(LispObject env, LispObject a1);
extern "C" LispObject wrong_no_3b(LispObject env, LispObject a1, LispObject a2);
extern "C" LispObject wrong_no_na(LispObject env, LispObject a1);
extern "C" LispObject wrong_no_nb(LispObject env, LispObject a1, LispObject a2);
extern "C" LispObject wrong_no_1(LispObject env, int nargs, ...);
extern "C" LispObject wrong_no_2(LispObject env, int nargs, ...);
extern "C" LispObject bad_specialn(LispObject env, int nargs, ...);

extern "C" LispObject aerror(const char *s);         // Called from C not Lisp
extern "C" LispObject aerror0(const char *s);
extern "C" LispObject aerror1(const char *s, LispObject a);
extern "C" LispObject aerror2(const char *s, LispObject a, LispObject b);
extern "C" void fatal_error(int code, ...);

extern void checktable(LispObject table);
extern void simple_msg(const char *s, LispObject x);
extern LispObject Lmkhash2(LispObject nil, LispObject a, LispObject b);
extern LispObject Lmkhash(LispObject nil, int nargs, ...);
extern LispObject Lget_hash(LispObject nil, int nargs, ...);
extern void rehash_this_table(LispObject v);
extern LispObject Lmaphash(LispObject nil, LispObject fn, LispObject tab);
extern LispObject Lhashcontents(LispObject nil, LispObject tab);
extern LispObject Lget_hash_1(LispObject nil, LispObject key);
extern LispObject Lget_hash_2(LispObject nil, LispObject key, LispObject tab);
extern LispObject Lput_hash(LispObject nil, int nargs, ...);
extern LispObject Lput_hash_2(LispObject nil, LispObject a, LispObject b);
extern LispObject Lrem_hash(LispObject nil, LispObject key, LispObject tab);
extern LispObject Lrem_hash_1(LispObject nil, LispObject a);
extern LispObject Lclr_hash(LispObject, LispObject tab);
extern LispObject Lclr_hash_0(LispObject nil, int nargs, ...);
extern LispObject Lsxhash(LispObject nil, LispObject key);
extern LispObject Leqlhash(LispObject nil, LispObject key);
extern LispObject Lequalhash(LispObject nil, LispObject key);
extern LispObject Lhash_flavour(LispObject nil, LispObject tab);

// Internal for new hash model...

// Temporary just while I need to gather p1;5rerformance data...
extern uint64_t found_n, found_h, found_c;
extern uint64_t notfound_n, notfound_h, notfound_c;

extern uint64_t already_n, already_h, already_c;
extern uint64_t inserted_n, inserted_h, inserted_c;

#define NOT_PRESENT ((size_t)(-1))

extern void checktable();
extern void showstats(size_t n);
extern size_t instrumented_lookup(LispObject key);
extern size_t instrumented_insert(LispObject key);
extern void dumptable(LispObject table, const char *s, bool checkdups);

#endif // __HEADERS_H

// end of headers.h
