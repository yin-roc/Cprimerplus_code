#include <iostream>
#include "plory.h"

int main()
{
    Plory p1;
    p1.showplory();

    Plory p2 = Plory("yinpeng", 23);
    p2.showplory();
    p2.set_CI(24);
    p2.showplory();

    return 0;
}