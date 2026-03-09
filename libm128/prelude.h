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

#ifndef _prelude_h
#define _prelude_h

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
//!!! #pragma message "This commpiler says it supports float128_t directly"
using std::float128_t;
using namespace std::literals;
#define NativeFloat128Available 1

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
// I will need assignment operators too. And things like frexp and ldexp.
    constexpr bool isNaN() const;
    constexpr bool isInfinite() const;
    constexpr bool isZero() const;
    constexpr bool isNegative() const;
    constexpr float128_t NaN() const;
    constexpr float128_t infinity() const;
    constexpr float128_t minusinfinity() const;
    constexpr float128_t operator+(const float128_t a) const;
    constexpr float128_t operator+() const;
    constexpr float128_t operator-(const float128_t a) const;
    constexpr float128_t operator-() const;
    constexpr float128_t operator*(const float128_t a) const;
    constexpr float128_t operator/(const float128_t a) const;
    constexpr bool operator==(const float128_t a) const;
    constexpr bool operator!=(const float128_t a) const;
    constexpr bool operator>(const float128_t a) const;
    constexpr bool operator>=(const float128_t a) const;
    constexpr bool operator<(const float128_t a) const;
    constexpr bool operator<=(const float128_t a) const;
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

inline void hexprint(uint128_t a, int n)
{   if (n == 0) return;
    hexprint(a>>4, n-1);
    std::cout << std::hex << (int)(a&15) << std::dec;
}

inline void show(const char* s, const working_float& a)
{   std::cout << s << ":  ";
    for (int i=0; i<20; i++)
    {   hexprint(((const char *)&a)[19-i], 2);
        if (i == 3) std::cout << ":";
    }
    std::cout << "\n";
    char b[64];
    sprint(b, a);
    std::cout << "= " << b << "\n";
}


class working_float
{
public:
    uint128_t mantissa;
    int x;
// The number 0.0 is held with an exponent shown as 0. This is a bit strange
// and means that zero cases have to be handled specially in a bunch of
// situations.
    constexpr working_float(uint8_t n):  // make an integer value 0 - 255
        mantissa(((uint128_t)n)<<120),
        x(7)
    {   while (mantissa != 0 && mantissa>>127 == 0)
        {   mantissa = mantissa<<1;
            x--;
        }
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

    constexpr working_float(const float128_t& f);

    static constexpr working_float tenth()  // make 0.1
    {   return working_float(
            ((uint128_t)0xcccccccccccccccc)<<64 | 0xcccccccccccccccd,
            -4);
    }

    static constexpr working_float tenth_ten()  // make 0.1^10
    {   return working_float(
            ((uint128_t)0xdbe6fecebdedd5be)<<64 | 0xb573440e5a884d1b,
            -34);
    }

    static constexpr working_float ten()  // make 10.0
    {   return working_float(10);
    }

    constexpr bool zerop() const
    {   return (mantissa==0);
    }

    uint128_t integerPart() const
    {   if (x < 0) return 0;
        else if (x >= 128) return (uint128_t)(-1); // too big
        else return mantissa>>(127-x);
    }

    constexpr bool equal(working_float a) const
    {   return mantissa==a.mantissa && x==a.x;
    }

    constexpr bool lessp(working_float a) const
    {   if (x < a.x) return true;
        else if (x > a.x) return false;
        else return mantissa < a.mantissa;
    }

    constexpr bool leqp(working_float a) const
    {   if (x < a.x) return true;
        else if (x > a.x) return false;
        else return mantissa <= a.mantissa;
    }

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

// Add this number to another working_float.
    constexpr working_float operator+(const working_float a) const
    {   if (zerop()) return a;
        else if (a.zerop()) return *this;
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

    constexpr working_float operator+() const
    {   return *this;
    }

// THIS IS RESTRICTED to the case where the value being subtracted is
// at most equal to the number you start with, so that the result
// will be greater than or equal to zero.

    constexpr working_float operator-(const working_float a) const
    {   if (a.zerop()) return *this;
        working_float u = *this;
        working_float v = a;
        uint128_t guard = 0;
        int shift = u.x - v.x;
// Shift the smaller number right (incrementing its exponent) until the
// two exponents match. Note that v must be the smaller number.
        if (shift > 0)
        {   if (shift > 128) return u;
            else if (shift == 128)
            {   guard = v.mantissa;
                v.mantissa = 0;
            }
            else
            {   guard = v.mantissa<<(128-shift);
                v.mantissa = v.mantissa>>shift;
            } 
        }
        else if (shift < 0) abort();
// Now the two numbers are aligned, so I can just subtract the mantissas
        u.mantissa = u.mantissa - v.mantissa;
// The result being zero is a special case.
        if (u.mantissa == 0)
        {   u.x = 0;
            return u;
        }
// Now mess with the guard bits.
        if ((guard == ((uint128_t)1)<<127 && u.mantissa&1 != 0) ||
            guard > ((uint128_t)1)<<127)
        {   u.mantissa--;
        }
        if (u.mantissa == 0) u.x = 0;
        return u;
    }

// Note that "-1.23_F128" will return a float128_t not a working_float because
// it needs to be a signed type.
    constexpr float128_t operator-() const
    {   return -(float128_t)(*this);
    }

// Multiply this number by another working_float.

    constexpr working_float operator*(const working_float a) const
    {   if (zerop()) return *this;
        if (a.zerop()) return a;
        uint128_t p = mantissa, q = a.mantissa;
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



    constexpr working_float reciprocal() const
    {
// As a first estimate when I start with a value got by dividing 2^128-1
// by the top 64 bits of my number (and negating the exponent).
       working_float r((((uint128_t)(-1))/(mantissa>>64))<<63, -x-1);
// A Newton-Raphson step is
// OR  r = r + r*(1 - A*r)
       working_float w = (*this)*r;
// Note that working_float subtraction  only copes with the case where
// you are subtracting a smaller value from a larger one (because I am
// doing unsigned arithmetic) so I need a test to handle signs here.
       if (w.lessp(working_float(1))) r = r + r*(working_float(1) - w);
       else r = r - r*(w - working_float(1));
       return r;
    }

// Division will not get all 128 bits of the quitient correct, but it
// will get well over 113.
    constexpr working_float operator/(const working_float a) const
    {   return (*this) * a.reciprocal();
    }

// Use the multiplication code to raise a working_float to an integer
// power. I will only need to deal with positive powers.
    constexpr working_float power(int n) const
    {   working_float me(*this);
        if (n == 0) return working_float(1);
        else if (n == 1) return me;
        working_float w = me.power(n/2);
        w = w*w;
        if (n%2 != 0) w = w * me;
        return w;
    }

    constexpr operator float128_t() const; 
};

static constexpr int digitVal(unsigned char ch)
{   case (ch)
    {   default:  return -1;
        case '0': return 0x0;
        case '1': return 0x1;
        case '2': return 0x2;
        case '3': return 0x3;
        case '4': return 0x4;
        case '5': return 0x5;
        case '6': return 0x6;
        case '7': return 0x7;
        case '8': return 0x8;
        case '9': return 0x9;
        case 'a': return 0xa;
        case 'b': return 0xb;
        case 'c': return 0xc;
        case 'd': return 0xd;
        case 'e': return 0xe;
        case 'f': return 0xf;
        case 'A': return 0xA;
        case 'B': return 0xB;
        case 'C': return 0xC;
        case 'D': return 0xD;
        case 'E': return 0xE;
        case 'F': return 0xF;
    }
}

// Convert a string to a working_float.
inline constexpr working_float operator "" _F128(const unsigned char* s)
{   working_float r(0);
// C++ supports hex floats which are written rather in the style
//     0xABC.DEFpXXX
// where A,B,C,D and E are hex digits and xxx is an (optionally signed)
// power of two (exponent) to be used. So some examples are
//    0x1.0P0     1
//    0x1.8P1     3
//    0x8.0P-3    1 again
    if (s[0]=='0' && (s[1]=='x' || s[1]=='X')
    {   s += 2;
        working_float sixteen(16);
        int x = 0;
        while (std::isxdigit(*s))
        {   working_float d(digitVal(*s));
            r = sixteen*r + d;
            s++;
        }
        if (*s == '.')
        {   s++;
            while (std::isxdigit(*s))
            {   working_float d(digitVal(*s));
                r = sixteen*r + d;
                s++;
                x-=4;
            }
        }
// Now look for an explicit exponent
        if (*s == 'p' || *s == 'P')
        {   int xval = 0;
            bool xsign = false;
            s++;
            if (*s == '+') s++;
            else if (*s == '-')
            {   s++;
                xsign = true;
            }
            while (std::isdigit(*s))
            {   xval = 10*xval + digitVal(*s++);
            }
            if (xsign) xval = -xval;
            x += xval;
        }
        r.x += x;
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
        if (*s == 'e' || *s == 'E')
        {   int xval = 0;
            bool xsign = false;
            s++;
            if (*s == '+') s++;
            else if (*s == '-')
            {   s++;
                xsign = true;
            }
            while (std::isdigit(*s))
            {   xval = 10*xval + digitVal(*s++);
            }
            if (xsign) xval = -xval;
            x += xval;
        }
        if (x < 0)
        {   x = -x;
// The idea here is that power() will build up rounding error each
// time it does a multiplication, and so doing it in
// bigger hops may be good. Possibly I should have a table
// of powers of 0.1 from 1 to 10 (Or 16) with each correctly
// rounded...
            if (x >= 10)
            {   r = r*working_float::tenth_ten().power(x/10);
                x = x%10;
            }
            r = r*working_float::tenth().power(x);
        }
        else if (x > 0) r = r*working_float::ten().power(x);
        return r;
    }
}



// print the working float a into the buffer b, which must be long enough.

inline void sprint(char* b, const working_float& aa)
{   working_float a(aa);
// I start by finding a decent approximation to the decimal exponent
// of this number by multiplying the binary exponent by log10(2) which is
// approximated to here by 444/13301.
    int decx = (4004*a.x)/13301;
    working_float scale(1);
    if (decx < 0) a = a*working_float::ten().power(-decx);
    else if (decx > 0) a = a*working_float::tenth().power(decx);
// Now the value to be converted to decimal should be rather close to 1.
// Finish that reduction off.
    while (a.lessp(working_float(1)))
    {   a = a * working_float::ten();
        decx--;
    }
    while (!a.lessp(working_float::ten()))
    {   a = a * working_float::tenth();
        decx++;
    }
// Now the number should be in the range [1, 10.0)
    char* p = b;
    for (int i=0; i<39; i++) // enough digits to cope with 128-bits
    {                        // of mantissa.
        int digit = a.integerPart();
        a = a - working_float(digit);
        a = a*working_float::ten();
        *p++ = '0' + digit;
    }
// Well I have converted an extra digit so that now I can round things
    if (b[38] >= '5')
    {   int i = 37;
        while (i >= 0 && b[i]=='9')
        {   b[i] = '0';
            i--;
        }
        if (i < 0)
        {   b[0] = '1';
            decx--;
        }
    }
// I now want to insert a decimal point after the first digit...
    std::memmove(b+2, b+1, 38);
    b[1] = '.';
    p++;
// Now attach an exponent
    *p++ = 'E';
    if (decx < 0)
    {   *p++ = '-';
        decx = -decx;
    }
    snprintf(p, 5, "%d", decx);
}

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
    m = ((uint128_t)(xx+0x3fff)) | (m & ~(((uint128_t)1)<<113));
    return i2f(m);
}

// Convert a float128_t to a working_float. This does not handle infinities
// or NaNs and it ignores the sign bit.

constexpr working_float::working_float(const float128_t& f) :
    mantissa(0), x(0)
{   uint128_t rep = f2i(f);
    int xx = ((rep >> 112) & 0x7fff) - 0x3fff;
    uint128_t m = (rep << 16)>>16 | ((uint128_t)1)<<113;
    m = m<<15;
// Deal with zero and denormals.
    if (xx == -0x4000)
    {   if (m == 0) xx = 0;
        else
        {   while ((m>>127) == 0)
            {   m = m << 1;
                xx--;
            }
        }
    }
    mantissa = m;
    x = xx;
}

#ifndef NativeFloat128Available

constexpr bool float128_t::isNaN() const
{   if (((v>>112) & 0x7fff) != 0x7fff) return false;
    return ((v << 16) != 0);
}

constexpr bool float128_t::isInfinite() const
{   if (((v>>112) & 0x7fff) != 0x7fff) return false;
    return ((v << 16) == 0);
}

constexpr bool float128_t::isZero() const
{   return ((v<<1) == 0);
}

constexpr bool float128_t::isNegative() const
{   return ((v>>127) != 0);
}

constexpr float128_t float128_t::NaN() const
{   return i2f(((uint128_t)0x7fffffff) << 96);
}

constexpr float128_t float128_t::infinity() const
{   return i2f(((uint128_t)0x7fff) << 112);
}

constexpr float128_t float128_t::minusinfinity() const
{   return i2f(((uint128_t)0xffff) << 112);
}

constexpr float128_t float128_t::operator+(const float128_t a) const
{   if (isNaN() || a.isNaN()) return float128_t::NaN();
    if (isInfinite())
    {   if (a.isInfinite())
        {   if (isNegative() == a.isNegative()) return *this;
            else return float128_t::NaN();
        }
        else return *this;
    }
    if (a.isInfinite()) return a;
    working_float u(*this);
    working_float v(a);
    if (isNegative())
    {   if (a.isNegative()) return -(float128_t)(u + v);
        else if (u.leqp(v)) return (float128_t)(v - u);
        else return -(float128_t)(u - v);
    }
    if (a.isNegative())
    {   if (u.lessp(v)) return -(float128_t)(v - u);
        else return (float128_t)(u - v);
    }
    else return (float128_t)(u + v);
}

constexpr float128_t float128_t::operator+() const
{   return *this;
}

constexpr float128_t float128_t::operator-(const float128_t a) const
{   return *this + (-a);
}

constexpr float128_t float128_t::operator-() const
{   return i2f(f2i(*this) ^ (((uint128_t)1)<<127));
}

constexpr float128_t float128_t::operator*(const float128_t a) const
{   if (isNaN() || a.isNaN()) return float128_t::NaN();
    if (isInfinite())
    {   if (a.isZero()) return float128_t::NaN();
        else if (isNegative() == a.isNegative()) return float128_t::infinity();
        else return float128_t::minusinfinity();
    }
    else if (a.isInfinite())
    {   if (isZero()) return float128_t::NaN();
        else if (isNegative() == a.isNegative()) return float128_t::infinity();
        else return float128_t::minusinfinity();
    }
    float128_t r = (float128_t)(working_float(*this) * working_float(a));
    if (isNegative() != a.isNegative()) return -r;
    else return r;
}

constexpr float128_t float128_t::operator/(const float128_t a) const
{   return (float128_t)(working_float(*this) / working_float(a));
}

constexpr bool float128_t::operator==(const float128_t a) const
{   if (isNaN() || a.isNaN()) return false;
    else if (isZero() && a.isZero()) return true;
    else return f2i(*this) == f2i(a);
}

constexpr bool float128_t::operator!=(const float128_t a) const
{   return !(*this == a);
}

constexpr bool float128_t::operator>(const float128_t a) const
{   if (isNaN() || a.isNaN()) return false;
    else return f2i(*this) > f2i(a);
}

constexpr bool float128_t::operator>=(const float128_t a) const
{   if (isNaN() || a.isNaN()) return false;
    else return f2i(*this) >= f2i(a);
}

constexpr bool float128_t::operator<(const float128_t a) const
{   if (isNaN() || a.isNaN()) return false;
    else return f2i(*this) < f2i(a);
}

constexpr bool float128_t::operator<=(const float128_t a) const
{   if (isNaN() || a.isNaN()) return false;
    else return f2i(*this) <= f2i(a);
}

#endif // NativeFloat128Available

#endif // _prelude_h

// end of prelude.h
