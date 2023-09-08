#include <iostream>
#include "Plorg.h"

int main(void)
{
    Plorg p1("shanghai", 310);
    Plorg p2;
    p1.plorgshow();
    p2.plorgshow();
    p1.setCI(50);
    p1.plorgshow();


    return 0;
}