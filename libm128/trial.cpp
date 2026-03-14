
#include "float128_t.h"

#include <iostream>
#include <iomanip>

#include "my_openlibm_math.h"

int main()
{   for (int x=-5; x<=5; x++)
    {   char c[40];
        snprintf(c, 40, "exp128(%d.0)", x);
        show128(c, exp128((float128_t)x));
    }
    return 0;
}
