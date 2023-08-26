#include <iostream>
#include "Person.h"
#include <cstring>

using std::cout;
using std::endl;

Person::Person()
{
    lname = "";
    fname[0] = '\0';
}

Person::Person(const string & ln, const char * fn)
{
    lname = ln;
    strcpy(fname, fn);
}

void Person::show() const
{
    cout << "The name is " << fname << " " << lname << endl;
} 

void Person::FormalShow() const
{
    cout << "The name is " << lname << " " << fname << endl;
}