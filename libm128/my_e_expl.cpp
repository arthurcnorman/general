/*	$OpenBSD: e_expl.c,v 1.3 2013/11/12 20:35:18 martynas Exp $	*/

/*
 * Copyright (c) 2008 Stephen L. Moshier <steve@moshier.net>
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

/*							expl.c
 *
 *	Exponential function, 128-bit float128_t precision
 *
 *
 *
 * SYNOPSIS:
 *
 * float128_t x, y, expl();
 *
 * y = expl( x );
 *
 *
 *
 * DESCRIPTION:
 *
 * Returns e (2.71828...) raised to the x power.
 *
 * Range reduction is accomplished by separating the argument
 * into an integer k and fraction f such that
 *
 *     x    k  f
 *    e  = 2  e.
 *
 * A Pade' form of degree 2/3 is used to approximate exp(f) - 1
 * in the basic range [-0.5 ln 2, 0.5 ln 2].
 *
 *
 * ACCURACY:
 *
 *                      Relative error:
 * arithmetic   domain     # trials      peak         rms
 *    IEEE      +-MAXLOG    100,000     2.6e-34     8.6e-35
 *
 *
 * Error amplification in the exponential function can be
 * a serious matter.  The error propagation involves
 * exp( X(1+delta) ) = exp(X) ( 1 + X*delta + ... ),
 * which shows that a 1 lsb error in representing X produces
 * a relative error of X times 1 lsb in the function.
 * While the routine gives an accurate result for arguments
 * that are exactly represented by a float128_t precision
 * computer number, the result contains amplified roundoff
 * error for large arguments not exactly represented.
 *
 *
 * ERROR MESSAGES:
 *
 *   message         condition      value returned
 * exp underflow    x < MINLOG         0.0
 * exp overflow     x > MAXLOG         MAXNUM
 *
 */

/*	Exponential function	*/

#include <float.h>
#include "prelude.h"
#include "my_openlibm_math.h"

#include "my_math_private.h"

/* Pade' coefficients for exp(x) - 1
   Theoretical peak relative error = 2.2e-37,
   relative peak error spread = 9.2e-38
 */
static float128_t P[5] = {
 3.279723985560247033712687707263393506266E-10_F128,
 6.141506007208645008909088812338454698548E-7_F128,
 2.708775201978218837374512615596512792224E-4_F128,
 3.508710990737834361215404761139478627390E-2_F128,
 9.999999999999999999999999999999999998502E-1_F128
};
static float128_t Q[6] = {
 2.980756652081995192255342779918052538681E-12_F128,
 1.771372078166251484503904874657985291164E-8_F128,
 1.504792651814944826817779302637284053660E-5_F128,
 3.611828913847589925056132680618007270344E-3_F128,
 2.368408864814233538909747618894558968880E-1_F128,
 2.000000000000000000000000000000000000150E0_F128
};
/* C1 + C2 = ln 2 */
static const float128_t C1 = -6.93145751953125E-1_F128;
static const float128_t C2 = -1.428606820309417232121458176568075500134E-6_F128;

static const float128_t LOG2EL = 1.442695040888963407359924681001892137426646_F128;
static const float128_t MAXLOGL = 1.1356523406294143949491931077970764891253E4_F128;
static const float128_t MINLOGL = -1.143276959615573793352782661133116431383730e4_F128;
static const float128_t huge = 0x1p10000_F128;
// Use of "volatile" upsets some C++ type checking for me. I somewhat suspect
// that the idea behind its use here was to ensure that when twom10000 is
// multiplied by itself (which will underflow) that it does so and
// the system can notice and set a flag to say that the calculation was
// inexact, or possibly even raise an exception. If the multiplication
// gets done at compile time and underflows then its exact behaviour will
// not be defined by floating point status that can trap those sorts of
// thing - you will just see zero. For my purposes I am not supporting
// inexact detection (or directed rounding, or any other status settings)
// and so I do not mind if the multiplication is done early. ACN Feb 2026.
#if 1 /* XXX Prevent gcc from erroneously constant folding this. */
static const float128_t twom10000 = 0x1p-10000_F128;
#else
static volatile float128_t twom10000 = 0x1p-10000_F128;
#endif

float128_t
expl(float128_t x)
{
float128_t px, xx;
int n;

if( x > MAXLOGL)
	return (huge*huge);		/* overflow */

if( x < MINLOGL )
	return (twom10000*twom10000);	/* underflow */

/* Express e**x = e**g 2**n
 *   = e**g e**( n loge(2) )
 *   = e**( g + n loge(2) )
 */
px = floorl( LOG2EL * x + 0.5_F128 ); /* floor() truncates toward -infinity. */
n = px;
x += px * C1;
x += px * C2;
/* rational approximation for exponential
 * of the fractional part:
 * e**x =  1 + 2x P(x**2)/( Q(x**2) - P(x**2) )
 */
xx = x * x;
px = x * __polevll( xx, P, 4 );
xx = __polevll( xx, Q, 5 );
x =  px/( xx - px );
x = 1.0_F128 + x + x;

x = ldexpl( x, n );
return(x);
}
