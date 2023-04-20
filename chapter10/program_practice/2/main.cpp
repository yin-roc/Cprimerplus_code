#include <iostream>
#include "person.h"

int main()
{
    Person one;
    one.Show();
    Person two("Smythecraft");
    Person three("Dimwiddy", "Sam");
    two.Show();
    std::cout << std::endl;
    three.FormalShow();

    return 0;
}