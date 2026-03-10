
#include "float128_t.h"

#include "my_e_expl.cpp"

#include <iostream>
#include <iomanip>

int main()
{
    show128("2.0", 2.0_F128);
    show128("exp128(2.0)", exp128(2.0_F128));
    return 0;
}
