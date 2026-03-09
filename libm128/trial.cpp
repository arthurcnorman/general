
#include "prelude.h"
#include "my_e_expl.cpp"

#include <iostream>
#include <iomanip>

int main()
{
    show("2.0", 2.0_F128);
    show("expl(2.0)", expl(2.0_F128));
// Ha ha this will tape a time before it works!
    return 0;
}
