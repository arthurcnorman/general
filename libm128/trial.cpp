
#include "float128_t.h"

#include <iostream>
#include <iomanip>

#include "my_openlibm_math.h"

int main()
{
    show128("2.0",         (float128_t)2.0_F128);
    show128("exp128(2.0)", exp128((float128_t)2.0_F128));
    return 0;
}
