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
    if(lname == "" && fname[0] == '\0')
    {
        std::cout << "No name." << std::endl;
    }
    else
    {
        std::cout << fname << " " << lname << std::endl;
    }
}

void Person::FormalShow() const
{
    if(lname == "" && fname[0] == '\0')
    {
        std::cout << "No name." << std::endl;
    }
    else
    {
        std::cout << lname << ", " << fname << std::endl;
    }
}

