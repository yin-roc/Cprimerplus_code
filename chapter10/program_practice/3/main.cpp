#include <iostream>
#include "golf.h"

using namespace std;

const int SIZE = 2;

int main()
{
    //引用如何使用new类似于指针一样，动态分配内存
    // golf ann;
    // setgolf(ann, "Ann birdfree", 24);

    // golf andy;
    // setgolf(andy);
    Golf player1 = Golf("hello", 23);
    player1.showgolf();
    Golf player2;
    player2.showgolf();

    return 0;
}