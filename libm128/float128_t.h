// Setup for float128_t math library code for CSL

// The purpose of this header is to arrange that on all targets one
// can use a type "float128_t". With C++23 that is an optionally provided
// extended floating point type, so on some platforms it will be supported
// by the system. But in other cases it will not and so I will provide
// my own soft version as a class with a bunch of overloads of the
// arithmetic operators.
//
// One of the bigger pains is that in the C++23 literals can be written
// as e.g. 1.2345e6F128 but when things are to be represented as classes
// the user-defined suffix has to start with "_". So I will introduce
// syntax 1.2345e6_F128 using my own suffix and when native long floating
// point is present I will need to map it down.
// It may also be good to have 0x12.345P6_F128 for hex literals.

#ifndef _float128_t_h
#define _float128_t_h

#include <cstdint>
#include <cinttypes>
#include <iostream>
#include <cctype>
#include <cstring>
#include <bit>

#include "int128_t.h"

#if __has_include(<stdfloat>)
#include <stdfloat>
#if __STDCPP_FLOAT128_T__
using std::float128_t;
using namespace std::literals;

#define NativeFloat128Available 1
//!!! #pragma message "This commpiler says it supports float128_t directly"
#endif
#endif

#ifndef NativeFloat128Available
//!!!  #pragma message "Using a software implementation of float128_t"

class float128_t
{
public:
    uint128_t v;
    float128_t() =  default;
    constexpr float128_t(int n): v(0)
    {
    }
    constexpr float128_t(const float128_t& a) : v(0)
    {   std::memcpy(this, &a, 16);
    }
    operator int();
// I will need assignment operators too. And things like frexp and ldexp.
    bool isNaN() const;
    bool isInfinite() const;
    bool isZero() const;
    bool isNegative() const;
    float128_t NaN() const;
    float128_t infinity() const;
    float128_t minusinfinity() const;
    float128_t operator+(const float128_t a) const;
    float128_t operator+() const;
    float128_t operator-(const float128_t a) const;
    float128_t operator-() const;
    float128_t operator*(const float128_t a) const;
    float128_t operator/(const float128_t a) const;
    float128_t operator+=(float128_t a);
    bool operator==(const float128_t a) const;
    bool operator!=(const float128_t a) const;
    bool operator>(const float128_t a) const;
    bool operator>=(const float128_t a) const;
    bool operator<(const float128_t a) const;
    bool operator<=(const float128_t a) const;
};

#endif // NativeFloat128Available

// I will need code to turn a textual representation into a float128_t.
// I CERTAINLY need that if the underlying C++ does not support a 128-bit
// floating point type and because C++ only lets me introduce user-defined
// suffixes that have an underscore I am going to use a notation like
//                 123.456e78_F128
//   OR            0x9ab.cdefP12_F128
// that starts by parsing and returning an object that holds two 64-bit
// integers that contain between them the bit pattern that a 120-bit IEEE
// float would use. If everything was little endian.

// For this I will do intermediate calculations using a sort of software
// float with an int as the exponent and 128 bits for the mantissa. I am
// only going to need to handle positive values and I will need to build
// things up from literals for 0.0, 1.0, ... 9.0, 10.0 and 0.1 together
// with the operations of addition and multiplication.

class working_float;
extern void sprint(char* b, const working_float& aa);
extern unsigned int add_with_carry(uint128_t& a, uint128_t b);
extern unsigned int add_with_carry(uint128_t& a, uint128_t b,
                                             unsigned int cin);

class working_float
{
public:
    uint128_t mantissa;
    int x;
// The number 0.0 is held with an exponent 0. This is a bit strange
// and means that zero cases have to be handled specially in a bunch of
// situations.

    constexpr working_float(uint128_t n):
        mantissa(n),
        x(127)
    {   if (n==0) x = 0;
        else
        {
// Here I shift up one bit at time. That seems OK to me if this is just
// used in mode at compile time. If I used it much dynamically
// I would want to find the number of leading zeros in n and shift by
// that amount all at once.
            while (mantissa>>127 == 0)
            {   mantissa = mantissa<<1;
                x--;
            }
        }
    }

    constexpr working_float(uint64_t hi, uint64_t lo,
                            uint64_t g, int xx):
        mantissa((((uint128_t)hi)<<64 | lo) +
                 ((g>>63) != 0)),
        x(xx)
    {
    }

    constexpr working_float(uint128_t mm, int xx):
        mantissa(mm),
        x(xx)
    {
    }

    constexpr working_float(const working_float& a):
        mantissa(a.mantissa),
        x(a.x)
    {
    }

    working_float(const float128_t& f);
    bool zerop() const;
    uint128_t integerPart() const;
    bool equal(working_float a) const;
    bool lessp(working_float a) const;
    bool leqp(working_float a) const;

    static constexpr unsigned int add_with_carry(uint128_t& a, uint128_t b)
    {   a = a + b;
        return (a < b);
    }

    static constexpr unsigned int add_with_carry(uint128_t& a, uint128_t b,
                                                 unsigned int cin)
    {   a = a + b;
        unsigned int c = (a < b);
        a = a + cin;
        return c + (a < cin);
    }

// The working_float type only supports positive values. It would not
// be especially hard to add a sign bit to the representation but then
// all arithmetic would need to take account of it, and for something that
// is just intended for internal use that would be more effort that it was
// worth and would tend to slow things down. The type float128_t does all
// the sign handling and can then call working_float to handle the magnitudes.
// If I wanted I over-precision floats I would make a further wrapper rather
// like float128_t but maybe called float166_t that used 128 bits of mantissa,
// 32 bits of exponent and 1 byte of sign. That might in fact be handy for
// implementing some further functions, and would be very easy to arrange!

// Add this number to another working_float.

    constexpr working_float operator+(const working_float a) const
    {   if (mantissa == 0) return a;
        else if (a.mantissa == 0) return *this;
        working_float u = *this;
        working_float v = a;
        uint128_t guard = 0;
        int shift = u.x - v.x;
// Shift the smaller number right (incrementing its exponent) until the
// two exponents match.
        if (shift > 0)
        {   if (shift > 128) return u;
            else if (shift == 128)
            {   guard = v.mantissa;
                v.mantissa = 0;
                v.x += 128;
            }
            else
            {   guard = v.mantissa<<(128-shift);
                v.mantissa = v.mantissa>>shift;
                v.x += shift;
            }
        }
        else if (shift < 0)
        {   shift = -shift;
            if (shift > 128) return v;
            else if (shift == 128)
            {   guard = u.mantissa;
                u.mantissa = 0;
            }
            else
            {   guard = u.mantissa<<(128-shift);
                u.mantissa = u.mantissa>>shift;
            }
        }
// Now the two numbers are aligned, so I can just add the mantissas
        unsigned int carry = add_with_carry(v.mantissa, u.mantissa);
// Now mess with the guard bits.
        if ((guard == ((uint128_t)1)<<127 && v.mantissa&1 != 0) ||
            guard > ((uint128_t)1)<<127)
        {   v.mantissa++;
            if (v.mantissa == 0) carry=1;
        }
        if (carry != 0)
        {   v.mantissa = v.mantissa>>1 | ((uint128_t)1)<<127;
            v.x++;
        }
        return v;
    }

// Multiply this number by another working_float.

    constexpr working_float operator*(const working_float a) const
    {   if (mantissa == 0) return *this;
        if (a.mantissa == 0) return a;
        uint128_t p = mantissa, q = a.mantissa;
// I am going to take special action on multiplication by powers of 2
// since in those cases there should not be any rounding at all and
// the path can be fast.
        if (p==((uint128_t)1)<<127) return working_float(q, x+a.x);
        if (q==((uint128_t)1)<<127) return working_float(p, x+a.x);
        uint64_t phi = p>>64;
        uint64_t plo = p;
        uint64_t qhi = q>>64;
        uint64_t qlo = q;
        uint128_t rlo   = plo*(uint128_t)qlo;
        uint128_t rmid1 = plo*(uint128_t)qhi;
        uint128_t rmid2 = phi*(uint128_t)qlo;
        uint128_t rhi   = phi*(uint128_t)qhi;
        uint128_t r = rhi + (rmid1>>64) + (rmid2>>64);
// I am now going to get the next 64-bits down of the product. I need these
// for two reasons:
// (1) The top half of the 256-bit product might have a zero top bit, so
//     to normalise it I would then shift it left by one. Note I only ever
//     need one bit of shift. But that brings in a bit from the low 128 bits
//     of the product.
// (2) When I truncate the 256-bit product to 128 bits I want to round up
//     if the low half is >= 0.5ULP. And if the low half is exactly 0.5ULP
//     I will round up if doing so gives an even result.
//
        uint128_t rguard = (rmid1 & 0xffffffffffffffff) +
                           (rmid2 & 0xffffffffffffffff) +
                           (rlo>>64);
        rlo = rlo & 0xffffffffffffffff;
        r += rguard>>64;
        rlo &= 0xffffffffffffffff;
        int rx = x + a.x + 1;
// See if the top bit of the raw product is zero and shift left if so.
        if ((r >> 127) == 0)
        {   r = r<<1 | rlo>>127;
            rlo = rlo<<1;
            rx--;
        }
        if (rguard == 0x8000000000000000 && rlo==0)
        {   if (r & 1 != 0) r++;
        }
        else if (rguard >= 0x8000000000000000) r++;
        if (r == 0)
        {   r = ((uint128_t)1)<<127;
            rx++;
        }
        working_float res(0);
        res.mantissa = r;
        res.x = rx;
        return res;
    }

    working_float operator+() const;
// BEWARE: the class working_float represents unsigned numbers and so
// the subtraction operation is only supported when you subtract a smaller
// number from a larger one.
    working_float operator-(const working_float a) const;
// Note that "-1.23_F128" will return a float128_t not a working_float because
// it needs to be a signed type.
    float128_t operator-() const;
    working_float reciprocal() const;
    working_float operator/(const working_float a) const;
    working_float power(int n) const;
    static constexpr working_float power_of_ten(int n);
    constexpr operator float128_t() const; 
};

inline constexpr int digitVal(char ch)
{   switch (ch)
    {   default:  return -1;
        case '0': return 0x0; case '1': return 0x1;
        case '2': return 0x2; case '3': return 0x3;
        case '4': return 0x4; case '5': return 0x5;
        case '6': return 0x6; case '7': return 0x7;
        case '8': return 0x8; case '9': return 0x9;
        case 'a': return 0xa; case 'b': return 0xb;
        case 'c': return 0xc; case 'd': return 0xd;
        case 'e': return 0xe; case 'f': return 0xf;
        case 'A': return 0xA; case 'B': return 0xB;
        case 'C': return 0xC; case 'D': return 0xD;
        case 'E': return 0xE; case 'F': return 0xF;
    }
}

// While converting between internal and character representations I need to
// multiply and divide by various powers of 10. If I just get that power
// using working_float(10).power(N) there will be rounding during the
// execution of the power function. To avoid that I have here tables
// giving powers of 10 - first in the range -15 to 15, then then 10^16
// to those powers and finally 10^256 to those powers. To get any power
// of 10 in the range -5000 < N < 5000 I just need to multiply one entry
// from each of these tables, ie do just two multiplications. This will,
// I hope, keep accuracy good.

inline working_float powers10[31] = {
working_float(0x901d7cf73ab0acd9,0x0f9d37014bf60a10,0x57a6e390ca38f653,-50),
working_float(0xb424dc35095cd80f,0x538484c19ef38c94,0x6d909c74fcc733e8,-47),
working_float(0xe12e13424bb40e13,0x2865a5f206b06fb9,0x88f4c3923bf900e2,-44),
working_float(0x8cbccc096f5088cb,0xf93f87b7442e45d3,0xf598fa3b657ba08d,-40),
working_float(0xafebff0bcb24aafe,0xf78f69a51539d748,0xf2ff38ca3eda88b0,-37),
working_float(0xdbe6fecebdedd5be,0xb573440e5a884d1b,0x2fbf06fcce912adc,-34),
working_float(0x89705f4136b4a597,0x31680a88f8953030,0xfdd7645e011abac9,-30),
working_float(0xabcc77118461cefc,0xfdc20d2b36ba7c3d,0x3d4d3d758161697c,-27),
working_float(0xd6bf94d5e57a42bc,0x3d32907604691b4c,0x8ca08cd2e1b9c3db,-24),
working_float(0x8637bd05af6c69b5,0xa63f9a49c2c1b10f,0xd7e45803cd141a69,-20),
working_float(0xa7c5ac471b478423,0x0fcf80dc33721d53,0xcddd6e04c0592103,-17),
working_float(0xd1b71758e219652b,0xd3c36113404ea4a8,0xc154c985f06f6944,-14),
working_float(0x83126e978d4fdf3b,0x645a1cac083126e9,0x78d4fdf3b645a1ca,-10),
working_float(0xa3d70a3d70a3d70a,0x3d70a3d70a3d70a3,0xd70a3d70a3d70a3d,-7),
working_float(0xcccccccccccccccc,0xcccccccccccccccc,0xcccccccccccccccc,-4),
working_float(0x8000000000000000,0x0000000000000000,0x0000000000000000,0),
working_float(0xa000000000000000,0x0000000000000000,0x0000000000000000,3),
working_float(0xc800000000000000,0x0000000000000000,0x0000000000000000,6),
working_float(0xfa00000000000000,0x0000000000000000,0x0000000000000000,9),
working_float(0x9c40000000000000,0x0000000000000000,0x0000000000000000,13),
working_float(0xc350000000000000,0x0000000000000000,0x0000000000000000,16),
working_float(0xf424000000000000,0x0000000000000000,0x0000000000000000,19),
working_float(0x9896800000000000,0x0000000000000000,0x0000000000000000,23),
working_float(0xbebc200000000000,0x0000000000000000,0x0000000000000000,26),
working_float(0xee6b280000000000,0x0000000000000000,0x0000000000000000,29),
working_float(0x9502f90000000000,0x0000000000000000,0x0000000000000000,33),
working_float(0xba43b74000000000,0x0000000000000000,0x0000000000000000,36),
working_float(0xe8d4a51000000000,0x0000000000000000,0x0000000000000000,39),
working_float(0x9184e72a00000000,0x0000000000000000,0x0000000000000000,43),
working_float(0xb5e620f480000000,0x0000000000000000,0x0000000000000000,46),
working_float(0xe35fa931a0000000,0x0000000000000000,0x0000000000000000,49)
};

inline working_float powers10P16[31] = {
working_float(0xd5605fcdcf32e1d6,0xfb1e4a9a90880a64,0xeb30854f603da8fc,-798),
working_float(0xece53cec4a314ebd,0xa4f8bf5635246428,0x4609ac5c7899ca36,-745),
working_float(0x8380dea93da4bc60,0x4247cb9e59f71e6d,0x78b7ab3af34a60c2,-691),
working_float(0x91ff83775423cc06,0x7b6306a34627ddcf,0x1c5a40917d0fa664,-638),
working_float(0xa21727db38cb002f,0xb8ada00e5a506a7c,0xf1218f2b86615f63,-585),
working_float(0xb3f4e093db73a093,0x59ed216765690f56,0x8fe5b452e6b166cd,-532),
working_float(0xc7caba6e7c5382c8,0xfe64a52ee96b8fc0,0xcbeb481c23d5e711,-479),
working_float(0xddd0467c64bce4a0,0xac7cb3f6d05ddbde,0xe26ca6063461fffa,-426),
working_float(0xf64335bcf065d37d,0x4d4617b5ff4a16d5,0xaa09501d5954a559,-373),
working_float(0x88b402f7fd75539b,0x11dbcb0218ebb414,0x690c0db23e2755ee,-319),
working_float(0x97c560ba6b0919a5,0xdccd879fc967d41a,0x021da8c6f15375a1,-266),
working_float(0xa87fea27a539e9a5,0x3f2398d747b36224,0x2a1fee40d90aab31,-213),
working_float(0xbb127c53b17ec159,0x5560c018580d5d52,0x3a63263a538df733,-160),
working_float(0xcfb11ead453994ba,0x67de18eda5814af2,0x0b5b1aa028ccd99e,-107),
working_float(0xe69594bec44de15b,0x4c2ebe687989a9b3,0xbf716c1add27f085,-54),
working_float(0x8000000000000000,0x0000000000000000,0x0000000000000000,0),
working_float(0x8e1bc9bf04000000,0x0000000000000000,0x0000000000000000,53),
working_float(0x9dc5ada82b70b59d,0xf020000000000000,0x0000000000000000,106),
working_float(0xaf298d050e4395d6,0x9670b12b7f410000,0x0000000000000000,159),
working_float(0xc2781f49ffcfa6d5,0x3cbf6b71c76b25fb,0x50f8080000000000,212),
working_float(0xd7e77a8f87daf7fb,0xdc33745ec97be906,0x3298e889d933b040,265),
working_float(0xefb3ab16c59b14a2,0xc5cfe94ef3ea101e,0x388da035c8f16477,318),
working_float(0x850fadc09923329e,0x03e2cf6bc604ddb0,0x74a7ef0198791097,372),
working_float(0x93ba47c980e98cdf,0xc66f336c36b10137,0x0234f3fd7b08dd39,425),
working_float(0xa402b9c5a8d3a6e7,0x5f16206c9c6209a6,0x39caef6ed62f905b,478),
working_float(0xb616a12b7fe617aa,0x577b986b314d6009,0x2381cf8591999d63,531),
working_float(0xca28a291859bbf93,0x7d7b8f7503cfdcfe,0xd11f91ff10629770,584),
working_float(0xe070f78d3927556a,0x85bbe253f47b1417,0x0f118a2758e233b1,637),
working_float(0xf92e0c3537826145,0xa7709a56ccdf8a82,0x866caba98a7e2dab,690),
working_float(0x8a5296ffe33cc92f,0x82bd6b70d99aaa6f,0xbc10c5c5cda97c8d,744),
working_float(0x9991a6f3d6bf1765,0xacca6da1e0a8ef29,0x036ee4519d59a838,797)
};
inline working_float powers10P256[39] = {
working_float(0x8d36f6971766349c,0xac63454249b771c8,0x2bfb20990dedb270,-16158),
working_float(0xbc1905f3e898cca2,0x41a8bcd577f7a7d8,0x4a0ad081b987938a,-15308),
working_float(0xfa8bbf517f29408a,0x31c0368ccb2c5757,0x842dc41b89ca32c7,-14458),
working_float(0xa6dd04c8d2ce9fde,0x2de38123a1c3cffc,0x20305d0244e091ba,-13607),
working_float(0xde42ff8d37cad87f,0x1463ef488d5226cb,0xb171e37a76c65371,-12757),
working_float(0x9406af8f83fd6265,0x4b4de34e0ebc3e06,0x45efb05f20cf48b3,-11906),
working_float(0xc52ba8a6aeb15d92,0x9e98cb984f0d3050,0xa42303e570b87e7f,-11056),
working_float(0x8350bf3c91575a87,0xe79e236bf8bf47a8,0xe8a94db92ca5841f,-10205),
working_float(0xaee973911228abca,0xe3187c34500d9ab3,0xb7d1f78b317fae11,-9355),
working_float(0xe8fb7dc2dec0a404,0x598eec7d41754c09,0x5ad05b84c7c4be7d,-8505),
working_float(0x9b2a840f28a1638f,0xe393a9c032fb0c34,0x660bdfd108ba7989,-7654),
working_float(0xceae534f34362de4,0x492512d4f2ead2cb,0x8263ca5cbc774bd9,-6804),
working_float(0x89a63ba4c497b50e,0x6c83ad1260ff20f4,0xc098e6ed0bfbd6f6,-5953),
working_float(0xb759449f52a711b2,0x68e1eb75340122d4,0x0fd924be26af7592,-5103),
working_float(0xf4385d0975edbabe,0x1f4bf6653cd3b977,0xddee7f83569c8b33,-4253),
working_float(0xa2a682a5da57c0bd,0x87a601586bd3f698,0xf53e94d1b2357c32,-3402),
working_float(0xd8a66d4a505de96b,0x5ae1b25946117390,0x4d0525af79e132c3,-2552),
working_float(0x9049ee32db23d21c,0x7132d332e3f204d4,0xe7317d62209b6a93,-1701),
working_float(0xc0314325637a1939,0xfa911155fefb5308,0xa23e2ed27766e8cc,-851),
working_float(0x8000000000000000,0x0000000000000000,0x0000000000000000,0),
working_float(0xaa7eebfb9df9de8d,0xddbb901b98feeab7,0x851e4cbf3de2f98a,850),
working_float(0xe319a0aea60e91c6,0xcc655c54bc5058f8,0x9c6583981d134cba,1700),
working_float(0x973f9ca8cd00a68c,0x6c8d3fca02ca6de6,0xb0d7ba426777344d,2551),
working_float(0xc976758681750c17,0x650d3d28f18b50ce,0x526b988275249b0f,3401),
working_float(0x862c8c0eeb856ecb,0x085bccd5c05ee9f9,0xecff2e2c1eae9db9,4252),
working_float(0xb2b8353b3993a7e4,0x4257ac3b4c1d7794,0x7704bd1bb5a5802f,5102),
working_float(0xee0ddd84924ab88c,0x2d4070f33b21ab7b,0xc20578fa3851488b,5952),
working_float(0x9e8b3b5dc53d5de4,0xa74d28ce329ace52,0x6a3197bbebe3034f,6803),
working_float(0xd32e203241f4806f,0x3f50c802040f4ccc,0x03baa2f38e35464f,7653),
working_float(0x8ca554c020a1f0a6,0x5dfed09922680a06,0xaef839a8a7f6a14c,8504),
working_float(0xbb570a9a9bd977cc,0x4c808753bb22fef8,0x6fc5802cde0b3272,9354),
working_float(0xf9895d25d88b5a8a,0xfdd08c4da13655ec,0xf02c90b784b4227a,10204),
working_float(0xa630ef7d5699fe45,0x50e3660235410f98,0xfca81f202c5d111a,11055),
working_float(0xdd5dc8a2bf27f3f7,0x95aa118ec1d08317,0x8909e424a112a3cd,11905),
working_float(0x936e07737dc64f6d,0x8c474bb609f40287,0xd2fea4fd957ea18e,12756),
working_float(0xc46052028a20979a,0xc94c153f804a4a92,0x65761fb2444e2267,13606),
working_float(0x82c952e37be11cb4,0x6e6c12aa02b9a1ec,0x538567bfbe0b117a,14457),
working_float(0xae3511626ed559f0,0x7ef5f8c1b3a0771c,0x5a43d43795f92ea2,15307),
working_float(0xe80b387fb9146d6c,0xa6a99ee15afede53,0xe72af3faf80453ce,16157)
};

inline working_float powers10Pminus5120 =
working_float(0xd408cb010da5d8e8,0x00d22e620ec380f5,0xd5304b26272e0447,-17009);
inline working_float powers10P5120 =
working_float(0x9a8a7ef0fed3ab22,0xd485d0ed8a3fa8c1,0x2fe1131ff8085857,17008);

constexpr working_float working_float::power_of_ten(int n)
{   if (n == 0) return working_float(1);
    int n1 = n%16;
    n = n/16;
    if (n == 0) return powers10[n1+15];
    int n2 = n%16;
    n = n/16;
    int n3 = n%20;
    n = n/20;
    working_float r(1);
    if (n1 != 0) r = r * powers10[n1+15];
    if (n2 != 0) r = r * powers10P16[n2+15];
    if (n3 != 0) r = r * powers10P256[n3+19];
    if (n > 0)   r = r * powers10P5120.power(n);
    else if (n < 0)   r = r * powers10Pminus5120.power(n);
    return r;
}

inline constexpr int read_integer(const char* s)
{   int x = 0;
    bool sign = false;
    if (*s == '+') s++;
    else if (*s == '-')
    {   s++;
        sign = true;
    }
    while (std::isdigit(*s))
    {   x = 10*x + digitVal(*s++);
    }
    if (sign) return -x;
    else return x;
}


// Convert a string to a working_float.

inline constexpr working_float operator "" _F128(const char* s)
{   working_float r(0);
// C++ supports hex floats which are written rather in the style
//     0xABC.DEFpXXX
// where A,B,C,D and E are hex digits and xxx is an (optionally signed)
// power of two (exponent) to be used. So some examples are
//    0x1.0P0     1
//    0x1.8P1     3
//    0x8.0P-3    1 again
    if (s[0]=='0' && (s[1]=='x' || s[1]=='X'))
    {   s += 2;
        int x = -1;
        while (std::isxdigit(*s))
        {   working_float d(digitVal(*s));
            r.x += 4;   // multiply by 16
            r = r + d;
            s++;
        }
        if (*s == '.')
        {   s++;
            while (std::isxdigit(*s))
            {   working_float d(digitVal(*s));
                r.x += 4;
                r = r + d;
                s++;
                x-=4;
            }
        }
// Now look for an explicit exponent
        if (*s == 'p' || *s == 'P') x += read_integer(s+1);
        r.x += x;    // adjust binary exponent
        return r;
    }
    else
    {   working_float ten(10);
        int x = 0;
        while (std::isdigit(*s))
        {   working_float d(digitVal(*s));
            r = ten*r + d;
            s++;
        }
        if (*s == '.')
        {   s++;
            while (std::isdigit(*s))
            {   working_float d(digitVal(*s));
                r = ten*r + d;
                s++;
                x--;
            }
        }
// Now look for an explicit exponent
        if (*s == 'e' || *s == 'E') x += read_integer(s+1);
        return r*working_float::power_of_ten(x);
    }
}

extern void sprint(char* b, const working_float& aa);

inline constexpr float128_t i2f(uint128_t i)
{   float128_t f = 0.0F128;
    memcpy(&f, &i, 16);
    return f;
}

inline constexpr uint128_t f2i(float128_t f)
{   uint128_t i = 0;
    memcpy(&i, &f, 16);
    return i;
}

// Here I take a working_float and convert it to a float128_t, putting in
// denormalised numbers and infinities and rounding rather than merely
// truncating.

constexpr working_float::operator float128_t() const
{   uint128_t m = (mantissa >> (128-113));
    int xx = x;
    uint128_t guard = mantissa << (128-113);
    if ((guard == ((uint128_t)1)<<127 && m&1 != 0) |
        guard > ((uint128_t)1)<<127)
    {   m++;
        if (m == ((uint128_t)1)<<114)
        {   m = m >> 1;
            xx++;
        }
    }
    if (xx > 0x3fff) return i2f(((uint128_t)0x7fff)<<112); // infinity
    if (xx < -0x4000)
    {   int sh = -(xx + 0x4000);
        if (xx > 112) return 0;
        m = m >> sh;
        xx = -0x4000;
    }
    m = ((uint128_t)(xx+0x3fff)) | (m & ((((uint128_t)1)<<113)-1));
    return i2f(m);
}

extern void show128(const char* s, const working_float& a, bool showf=true);
extern void show128(const char* s, const float128_t a, bool showf=true);

#endif // _float128_t_h

// end of float128_t.h

