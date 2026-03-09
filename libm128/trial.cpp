
#include "prelude.h"
#include "my_e_expl.cpp"

#include <iostream>
#include <iomanip>

void hexprint(uint128_t a, int n)
{   if (n == 0) return;
    hexprint(a>>4, n-1);
    std::cout << std::hex << (int)(a&15) << std::dec;
}

void show(const char* s, const working_float& a)
{   std::cout << s << ":  ";
    int x = a.x;
    uint128_t m = a.mantissa;
    std::cout << "(" << x << ") :";
    hexprint(m, 32);
    std::cout << "\n";
    char b[64];
    sprint(b, a);
    std::cout << "@@ " << b << "@@\n";
}

void show(const char* s, const float128_t a)
{   std::cout << s << ":  " << std::hex;
    const void* v = (void*)&a;
    const uint8_t* c = (const uint8_t*)v;
    for (int i=15; i>=0; i--)
        std::cout << (int)c[i] << " ";
    std::cout << "\n" << std::dec;
}



int main()
{
    show("2.0", 2.0_F128);
    show("expl(2.0)", expl(2.0_F128));
// Ha ha this will tape a time before it works!
    return 0;
}
