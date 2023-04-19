#include <iostream>
#include "move.h"

int main()
{
    Move num1 = Move(1, 2);
    Move num2(1, 2);
    num1.add(num2);
    num1.showmove();
    num1.reset(0, 0);
    num1.showmove();

    return 0;
}