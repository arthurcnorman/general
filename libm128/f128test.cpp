// I can use float128_t.h as a header and link with a compiled float128_t.cpp,
// or use float128_t.cpp directly as a header-only library.

#include "float128_t.h"

#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdlib>

int main()
{   std::cout << "Starting\n";

    show128("0.1", working_float::power_of_ten(-1));
    show128("0.1^10", working_float::power_of_ten(-10));
    working_float one(1);
    working_float two(2);
    working_float ten(10);


    show128("1*10+2", ten + two);

    show128("twelve", working_float(12));
    show128("twelve", 12.0_F128);
    show128("half", 0.5_F128);
    show128("half", 0.500_F128);

    show128("third", 0.3333333333333333333333333333333333333333_F128);
    show128("one", 3.0000_F128 * 0.3333333333333333333333333333333333333333_F128);

    working_float(3).reciprocal();;
    working_float::power_of_ten(-1).reciprocal();

    show128("hex", 0x0.aaaaaaaaaaaaP0_F128);
    show128("hex", 0x0.aaaaaaaaaaaaP10_F128);

    show128("1.0e100", 1.0e100_F128);

    return 0;    
}

// end of prelude.cpp
