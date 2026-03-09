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
// I will need assignment operators too.
    bool isNaN();
    bool isInfinite();
    bool isZero();
    bool isNegative();
    float128_t NaN();
    float128_t infinity();
    float128_t minusinfinity();
    float128_t operator+(float128_t a);
    float128_t operator+();
    float128_t operator-(float128_t a);
    float128_t operator-();
    float128_t operator*(float128_t a);
    float128_t operator/(float128_t a);
    bool operator==(float128_t a);
    bool operator!=(float128_t a);
    bool operator>(float128_t a);
    bool operator>=(float128_t a);
    bool operator<(float128_t a);
    bool operator<=(float128_t a);
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

    working_float(const float128_t& f);

    constexpr bool zerop()
    {   return mantissa==0;
    }

    uint128_t integerPart()
    {   if (x < 0) return 0;
        else if (x >= 128) return (uint128_t)(-1); // too big
        else return mantissa>>(127-x);
    }

    constexpr bool equal(working_float a)
    {   return mantissa=a.mantissa && x==a.x;
    }

    constexpr bool lessp(working_float a)
    {   if (x < a.x) return true;
        else if (x > a.x) return false;
        else return mantissa < a.mantissa;
    }

    constexpr bool leqp(working_float a)
    {   if (x < a.x) return true;
        else if (x > a.x) return false;
        else return mantissa <= a.mantissa;
    }

    constexpr unsigned int add_with_carry(uint128_t& a, uint128_t b)
    {   a = a + b;
        return (a < b);
    }

    constexpr unsigned int add_with_carry(uint128_t& a, uint128_t b,
                                          unsigned int cin)
    {   a = a + b;
        unsigned int c = (a < b);
        a = a + cin;
        return c + (a < cin);
    }

// Add this number to another working_float.
    constexpr working_float operator+(working_float a)
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

// THIS IS RESTRICTED to the case where the value being subtracted is
// at most equal to the number you start with, so that the result
// will be greater than or equal toi zero.

    constexpr working_float operator-(working_float a)
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

// Multiply this number by another working_float.

    constexpr working_float operator*(working_float a)
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

// If I am to use these to implement float128+t in software I will need
// this...
// I am thinking of implementing division here by using 128/64 bit integer
// division to get a reciprocal of a that is about 64-bits accurate and
// then use one step of Newton Raphson to get that correct to (almost?)
// the full precision I need. I can then multiply by *this to get a
// quotient that is rather close to accurate. Then I either view
// that as good enough if its sole purpose is to deliver a 113-bit
// quotient -- or if I feel fussy I can multiply back and check/
//
// Anyway none of that is coded just yet!
    constexpr working_float operator/(working_float a)
    {   return *this;
    }

// Use the multiplication code to raise a working_float to an integer
// power. I will only need to deal with positive powers.
    constexpr working_float power(int n)
    {   working_float me(*this);
        if (n == 0) return working_float(1);
        else if (n == 1) return me;
        working_float w = me.power(n/2);
        w = w*w;
        if (n%2 != 0) w = w * me;
        return w;
    }

    constexpr operator float128_t(); 
};

// Convert a string to a working_float.
inline constexpr working_float operator "" _F128(const char* s)
{   working_float r(0);
    working_float ten(10);
    int x = 0;
    while (std::isdigit(*s))
    {   working_float d(*s - '0');
        r = ten*r + d;
        s++;
    }
    if (*s == '.')
    {   s++;
        while (std::isdigit(*s))
        {   working_float d(*s - '0');
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
        {   xval = 10*xval + *s++ - '0';
        }
        if (xsign) xval = -xval;
        x += xval;
    }
    if (x < 0)
    {   x = -x;
        if (x >= 10)
        {   r = r*working_float::tenth_ten().power(x/10);
            x = x%10;
        }
        r = r*working_float::tenth().power(x);
    }
    else if (x > 0) r = r*working_float::ten().power(x);
    return r;
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

constexpr working_float::operator float128_t()
{   uint128_t m = (mantissa >> (128-113));
    int xx = x;
    uint128_t guard = mantissa << (128-113);
    if ((guard == ((uint128_t)1)<<127 && mantissa&1 != 0) |
        guard > ((uint128_t)1)<<127)
    {   mantissa++;
        if (mantissa == ((uint128_t)1)<<114)
        {   mantissa = mantissa >> 1;
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

working_float::working_float(const float128_t& f)
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

bool float128_t::isNaN()
{   if (((v>>112) & 0x7fff) != 0x7fff) return false;
    return ((v << 16) != 0);
}

bool float128_t::isInfinite()
{   if (((v>>112) & 0x7fff) != 0x7fff) return false;
    return ((v << 16) == 0);
}

bool float128_t::isZero()
{   return ((v<<1) == 0);
}

bool float128_t::isNegative()
{   return ((v>>127) != 0);
}

float128_t float128_t::NaN()
{   return i2f(((uint128_t)0x7fffffff) << 96);
}

float128_t float128_t::infinity()
{   return i2f(((uint128_t)0x7fff) << 112);
}

float128_t float128_t::minusinfinity()
{   return i2f(((uint128_t)0xffff) << 112);
}

float128_t float128_t::operator+(float128_t a)
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

float128_t float128_t::operator+()
{   return *this;
}

float128_t float128_t::operator-(float128_t a)
{   return *this + (-a);
}

float128_t float128_t::operator-()
{   return i2f(f2i(*this) ^ (((uint128_t)1)<<127));
}

float128_t float128_t::operator*(float128_t a)
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

float128_t float128_t::operator/(float128_t a)
{   return (float128_t)(working_float(*this) / working_float(a));
}

bool float128_t::operator==(float128_t a)
{   if (isNaN() || a.isNaN()) return false;
    else if (isZero() && a.isZero()) return true;
    else return f2i(*this) == f2i(a);
}

bool float128_t::operator!=(float128_t a)
{   return !(*this == a);
}

bool float128_t::operator>(float128_t a)
{   if (isNaN() || a.isNaN()) return false;
    else return f2i(*this) > f2i(a);
}

bool float128_t::operator>=(float128_t a)
{   if (isNaN() || a.isNaN()) return false;
    else return f2i(*this) >= f2i(a);
}

bool float128_t::operator<(float128_t a)
{   if (isNaN() || a.isNaN()) return false;
    else return f2i(*this) < f2i(a);
}

bool float128_t::operator<=(float128_t a)
{   if (isNaN() || a.isNaN()) return false;
    else return f2i(*this) <= f2i(a);
}

#endif // NativeFloat128Available

// end of prelude.h
