// I can use float128_t.h as a header and link with a compiled float128_t.cpp,
// or use float128_t.cpp directly as a header-only library.

#include "float128_t.h"

#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdlib>

void show(const char* s, const float128_t a)
{   std::cout << s << ":  " << std::hex;
    unsigned char c[16];
    std::memcpy(&c[0], &a, 16);
    for (int i=0; i<16; i++)
    {   std::cout << (int)c[15-i] << " ";
        if (i == 2) std::cout << ": ";
    }
    std::cout << " (float128_t)\n" << std::dec;
}

int main()
{   std::cout << "Starting\n";

    show("0.1", working_float::tenth());
    show("0.1^10", working_float::tenth_ten());
    working_float one(1);
    working_float two(2);
    working_float ten(10);


    show("1*10+2", ten + two);

    show("twelve", working_float(12));
    show("twelve", 12.0_F128);
    show("half", 0.5_F128);
    show("half", 0.500_F128);

    show("third", 0.3333333333333333333333333333333333333333_F128);
    show("one", 3.0000_F128 * 0.3333333333333333333333333333333333333333_F128);

    working_float(3).reciprocal();;
    working_float::tenth().reciprocal();

    show("hex", 0x0.aaaaaaaaaaaaP0_F128);
    show("hex", 0x0.aaaaaaaaaaaaP10_F128);

    return 0;    
}

// end of prelude.cpp
