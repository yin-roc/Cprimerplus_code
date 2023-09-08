#include <iostream>
#include "Move.h"

int main(void)
{
    Move m1(2.5, 6);
    m1.showmove();
    Move m2(2.5, 6);
    m2.add(m1);
    m2.showmove();
    m2.reset();
    m2.showmove();

    return 0;
}