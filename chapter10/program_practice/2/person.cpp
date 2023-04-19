#include <iostream>
#include "person.h"
#include <cstring>

// Person::Person()
// {
//     lname = "";
//     fname[0] = '\0';
// }

Person::Person(const std::string &n, const char *fn)
{
    lname = n;
    strcpy(fname, fn);
}

void Person::Show() const
{
    std::cout << fname << " " << lname << std::endl;
}

void Person::FormalShow() const
{
    std::cout << lname << ", " << fname << std::endl;
}

