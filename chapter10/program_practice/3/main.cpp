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
    Golf players[SIZE];
    int count = 0;
    cout << "Enter the information of golf player: \n";
    while((count < SIZE) && (players[count].setgolf()))
    {
        cout << "Enter the next golf player: \n";
        count++;
    }
    cout << "Show all golf players' information.\n";
    for(int i = 0; i < SIZE; i++)
    {
        players[i].showgolf();
    }

    return 0;
}