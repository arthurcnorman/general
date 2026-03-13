// float128_t: math library code for CSL

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

#include <cstdint>
#include <cinttypes>
#include <iostream>
#include <cctype>
#include <cstring>
#include <bit>

#include "int128_t.h"
#include "float128_t.h"

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

bool working_float::zerop() const
{   return (mantissa==0);
}

uint128_t working_float::integerPart() const
{   if (x < 0) return 0;
    else if (x >= 128) return (uint128_t)(-1); // too big
    else return mantissa>>(127-x);
}

bool working_float::equal(working_float a) const
{   return mantissa==a.mantissa && x==a.x;
}

bool working_float::lessp(working_float a) const
{   if (x < a.x) return true;
    else if (x > a.x) return false;
    else return mantissa < a.mantissa;
}

bool working_float::leqp(working_float a) const
{   if (x < a.x) return true;
    else if (x > a.x) return false;
    else return mantissa <= a.mantissa;
}

working_float working_float::operator+() const
{   return *this;
}

// THIS IS RESTRICTED to the case where the value being subtracted is
// at most equal to the number you start with, so that the result
// will be greater than or equal to zero.

    working_float working_float::operator-(const working_float a) const
    {   if (a.zerop()) return *this;
        working_float u = *this;
        working_float v = a;
// If the two exponents match I do not need to do any shifing to line things
// up, and so there is no issue of guard digits. Phew! But in this case
// leading bits can cancel (including the case of the result ending up
// as zero) so in general I will need to re-normalize. The code I will
// put in to start with will be a bit slow!
        if (u.x == v.x)
        {   u.mantissa -= a.mantissa;
            if (u.mantissa == 0)
            {   u.x = 0;
                return u;
            }
            while ((u.mantissa>>127) == 0)
            {   u.mantissa = u.mantissa<<1;
                u.x--;
            }
            return u; 
        }
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
// Now when I do the above subtraction u had its top bit set but v did not
// so the worst than can happen is that I have a single leading zero left
// in u.
        if ((u.mantissa>>127) == 0)
        {   u.mantissa = (u.mantissa<<1) | (guard>>127);
            guard = guard<<1;
            u.x -= 1;
        }
// Now mess with the guard bits in case rounding is called for.
        if ((guard == ((uint128_t)1)<<127 && u.mantissa&1 != 0) ||
            guard > ((uint128_t)1)<<127)
        {   u.mantissa--;
        }
        if (u.mantissa == 0) u.x = 0;
        return u;
    }

// Note that "-1.23_F128" will return a float128_t not a working_float because
// it needs to be a signed type.

float128_t working_float::operator-() const
{   return -(float128_t)(*this);
}

working_float working_float::reciprocal() const
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
working_float working_float::operator/(const working_float a) const
{   return (*this) * a.reciprocal();
}

// Use the multiplication code to raise a working_float to an integer
// power. I will only need to deal with positive powers.
// Note that I will have a special cersion for powers of 10.

working_float working_float::power(int n) const
{   working_float me(*this);
    if (n == 0) return working_float(1);
    else if (n == 1) return me;
    working_float w = me.power(n/2);
    w = w*w;
    if (n%2 != 0) w = w * me;
    return w;
}

// print the working float a into the buffer b, which must be long enough.
// I think that "long enough" may be 50.

// For a working_float I may want to generate 38 digits, while for
// a float128_t 34 will be sufficient.

void roundTo(char* b, int digits, int& decx)
{   if (b[digits] >= '5')
    {   int i = digits+1;
// The mess here tries to arrange that if I have a part that is to be
// discarded that is exactly (1/2)ULP that I round up only if things start
// off with the final digit odd.
        while (b[i]=='0') i++;
        if (b[digits]>'5' ||
            std::isdigit(b[i]) ||
            (b[digits-1] & 1) != 0)
        {   int i = digits-1;
            if (b[i]!='9') b[i]++;
            else
            {   while (i >= 0 && b[i]=='9')
                {   b[i] = '0';
                    i--;
                }
                if (i < 0)
                {   b[0] = '1';
                    decx--;
                }
            }
        }
    }
}

void sprint(char* b, const working_float& aa, int digits)
{   working_float a(aa);
// I start by finding a decent approximation to the decimal exponent
// of this number by multiplying the binary exponent by log10(2) which is
// approximated to here by 444/13301.
    int decx = (4004*a.x)/13301;
    working_float scale(1);
    a = a*working_float::power_of_ten(-decx);
// Now the value to be converted to decimal should be rather close to 1.
// Finish that reduction off.
    while (a.mantissa!=0 && a.lessp(working_float(1)))
    {   a = a * working_float(10);
        decx--;
    }
    while (!a.lessp(working_float(10)))
    {   a = a * working_float(0xcccccccccccccccc,
                              0xcccccccccccccccc,
                              0xcccccccccccccccc,
                              -4);
        decx++;
    }
// Now the number should be in the range [1, 10.0)
    char* p = b;
    for (int i=0; i<39; i++) // enough digits to cope with 128-bits
    {                        // of mantissa.
        int digit = a.integerPart();
        a = a - working_float(digit);
        a = a*working_float(10);
        *p++ = '0' + digit;
    }
// Well I have converted an extra digit so that now I can round things
    p = &b[digits];
    roundTo(b, digits, decx);
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
    snprintf(p, 11, "%u", decx);
}

// Convert a float128_t to a working_float. This does not handle infinities
// or NaNs and it ignores the sign bit.

working_float::working_float(const float128_t& f) :
    mantissa(0), x(0)
{   uint128_t rep = f2u(f);
    if (rep == 0) return;
    int xx = ((rep >> 112) & 0x7fff) - 0x3fff;
    uint128_t m = (rep << 16)>>16 | ((uint128_t)1)<<112;
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

// When the C++ compiler does not support float128_t I need soft
// implementations of all the arithmetic operations as applied to my
// class of that name. Here are the ones I provide, with some utility
// methods as well.

float128_t::operator int()
{   return working_float(*this).integerPart();
}

bool float128_t::isNaN() const
{   if (((v>>112) & 0x7fff) != 0x7fff) return false;
    return ((v << 16) != 0);
}

bool float128_t::isInfinite() const
{   if (((v>>112) & 0x7fff) != 0x7fff) return false;
    return ((v << 16) == 0);
}

bool float128_t::isZero() const
{   return ((v<<1) == 0);
}

bool float128_t::isNegative() const
{   return ((v>>127) != 0);
}

float128_t float128_t::NaN() const
{   return u2f(((uint128_t)0x7fff8000) << 96);
}

float128_t float128_t::infinity() const
{   return u2f(((uint128_t)0x7fff) << 112);
}

float128_t float128_t::minusinfinity() const
{   return u2f(((uint128_t)0xffff) << 112);
}

float128_t float128_t::operator+(const float128_t a) const
{   if (isNaN() || a.isNaN()) return float128_t::NaN();
    if (isInfinite())
    {   if (a.isInfinite())
        {   if (isNegative() == a.isNegative()) return *this;
            else return float128_t::NaN();
        }
        else return *this;
    }
    if (a.isInfinite()) return a;
    working_float u(*this);   // Absolute value of inputs...
    working_float v(a);
// Cases I need to cover
//     u   v
//     >=0 >=0              |u| + |v|             (A)
//     <0  <0               -(|u| + |v|)          (B)
//     >=0 <0     |u|<|v|   -(|v| - |u|)          (C.1)
//                |u|=|v|   0                     (C.2)
//                |u|>|v|   |u| - |v|             (C.3)
//     <0  >=0    |u|<|v|   |v| - |u|             (D.1)
//                |u|=|v|   0                     (D.2)
//                |u|>|v|   -(|u| - |v|)       (D.3)

    if (isNegative())
    {   if (a.isNegative())
        {   // (B)
            return -(float128_t)(u + v);
        }
        else
        {   // (D)
            if (u.lessp(v)) return (float128_t)(v - u);
            else if (u.equal(v)) return 0.0_f128;
            else return -(float128_t)(u - v);
        }
    }
    else if (a.isNegative())
    {   // (C)
        if (u.lessp(v)) return -(float128_t)(v - u);
        else if (u.equal(v)) return 0.0_f128;
        else return (float128_t)(u - v);
    }
    else
    {   // (A)
        return (float128_t)(u + v);
    }
}

float128_t float128_t::operator+=(float128_t a)
{   v = f2u(*this + a);
    return *this;
}

float128_t float128_t::operator+() const
{   return *this;
}

float128_t float128_t::operator-(const float128_t a) const
{   return *this + (-a);
}

float128_t float128_t::operator-() const
{   return u2f(f2u(*this) ^ (((uint128_t)1)<<127));
}

float128_t float128_t::operator*(const float128_t a) const
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

float128_t float128_t::operator/(const float128_t a) const
{   float128_t r = (float128_t)(working_float(*this) / working_float(a));
    if (isNegative() != a.isNegative()) return -r;
    else return r;
}

bool float128_t::operator==(const float128_t a) const
{   if (isNaN() || a.isNaN()) return false;
    else if (isZero() && a.isZero()) return true;
    else return f2i(*this) == f2i(a);
}

bool float128_t::operator!=(const float128_t a) const
{   return !(*this == a);
}

bool float128_t::operator>(const float128_t a) const
{   if (isNaN() || a.isNaN()) return false;
// An amazing feature of IEEE floating point formats is that apart from
// the NaN case you can order values by compatring the (signed) integer
// representation as bits.
    else return f2i(*this) > f2i(a);
}

bool float128_t::operator>=(const float128_t a) const
{   if (isNaN() || a.isNaN()) return false;
    else return f2i(*this) >= f2i(a);
}

bool float128_t::operator<(const float128_t a) const
{   if (isNaN() || a.isNaN()) return false;
    else return f2i(*this) < f2i(a);
}

bool float128_t::operator<=(const float128_t a) const
{   if (isNaN() || a.isNaN()) return false;
    else return f2i(*this) <= f2i(a);
}

// My implmentation here does not (yet?) handle denormalised numbers
// either when f starts off as one and so for small x the mantissa
// me need to be shifted  or for larger x where the denorm must be promoted
// into a norm. Or for negative x where an initially normalised number may
// need to be turneed into a denorm. It is actually pretty messy!

extern "C"
{

float128_t ldexp128(float128_t d, int x)
{   uint128_t n = f2i(x);
    x = ((n>>112) & 0x7fff) + x;
    if (x >= 0x7fff)
    {   x = 0x7fff;   // Turn into infinity
        n = 0;
    }
    else if (x < 0) x = 0;
    n = (n & ~(((uint128_t)0x7fff)<<112)) | (((uint128_t)x)<<112);
    return u2f(n);
}

float128_t floor128(float128_t d)
{   uint128_t rep = f2u(d);
    int x = ((rep>>112) & 0x7fff) - 0x3fff;
    if (x < 0)    // abs(d) < 1.0;
    {   if ((int128_t)rep < 0) return -1.0_F128;
        else return 0.0_F128;
    }
// Big enough numbers are exactly integers.
    if (x >= 112) return d;
    int sh = x + 17;
    uint128_t frac = (rep<<sh)>>sh;
    if ((int128_t)rep < 0 && frac!=0) return u2f(rep-frac) - 1.0_F128;
    else return u2f(rep-frac);
}

}

#else  // NativeFloat128Available

extern "C"
{

float128_t ldexp128(float128_t d, int x)
{   return ldexp(d, x); // C++23 asks for a suitable overload here.
}

float128_t floor128(float128_t d)
{   return floor(d);
}

}

#endif // NativeFloat128Available

// For debugging these displays the value both in hex and as a floating
// point value.

void show128(const char* s, const working_float& a, bool showf)
{   std::cout << s << ":  ";
    hexprint(a.mantissa);
    if (showf)
    {   char b[64];
        sprint(b, a);
        std::cout << "(" << a.x << ")\n= " << b << "\n\n";
    }
    else std::cout << "(" << a.x << ")\n\n";
}

void show128(const char* s, const float128_t a, bool showf)
{   std::cout << s << ":  ";
    hexprint(f2i(a));
    if (showf)
    {   char b[64];
        char* bb = &b[0];
        if (a.isNegative()) *bb++ = '-'; 
// Beware - conversion to working_fload discards any sign!
        sprint(bb, working_float(a), 34);
        std::cout << "\n= " << b << "\n\n";
    }
    else std::cout << "\n\n";
}

// end of float128_t_cpp
