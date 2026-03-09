#include "prelude.h"

#include <iostream>
#include <iomanip>

// void hexprint(uint128_t a, int n)
// {   if (n == 0) return;
//     hexprint(a>>4, n-1);
//     std::cout << std::hex << (int)(a&15) << std::dec;
// }

// void show(const char* s, const working_float& a)
// {   std::cout << s << ":  ";
//     int x = a.x;
//     uint128_t m = a.mantissa;
//     std::cout << "(" << x << ") :";
//     hexprint(m, 32);
//     std::cout << "\n";
//     char b[64];
//     sprint(b, a);
//     std::cout << "@@ " << b << "@@\n";
// }

void show(const char* s, const float128_t a)
{   std::cout << s << ":  " << std::hex;
    const void* v = (void*)&a;
    const uint8_t* c = (const uint8_t*)v;
    for (int i=15; i>=0; i--)
        std::cout << (int)c[i] << " ";
    std::cout << "\n" << std::dec;
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


    return 0;    
}

// end of prelude.cpp
