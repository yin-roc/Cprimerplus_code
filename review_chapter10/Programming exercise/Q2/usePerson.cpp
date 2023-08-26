#include <iostream>
#include "person.h"

using std::cout;
using std::endl;

int main(void) 
{
    Person one;
    Person two("Smythecraft");
    Person three("Dimwiddy", "Sam");
    
    one.show();
    one.FormalShow();
    cout << endl;

    two.show();
    two.FormalShow();
    cout << endl;
    
    three.show();
    three.FormalShow();
    cout << endl;

    return 0;
}