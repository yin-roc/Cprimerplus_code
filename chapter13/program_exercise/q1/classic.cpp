//
// Created by yin on 2023-09-29.
//

#include "Cd.h"
#include "classic.h"
#include <iostream>
#include <cstring>

using namespace std;
const int ArSize = 50;

Classic::Classic(const char* str, char* sl, char* s2, int n, double x) : Cd(sl, s2, n, x)
{
    strncpy_s(Major_work, str, ArSize);
    if (strlen(str) >= 50)
        Major_work[49] = '\0';
    else
        Major_work[strlen(str)] = '\0';
}


Classic::Classic(const Classic& cla) : Cd(cla) //将派生类对象传递给基类引用const Cd &,是允许的
{
    strncpy_s(Major_work, cla.Major_work, ArSize);
}


Classic::Classic() : Cd()
{
    Major_work[0] = '\0';
}


Classic::~Classic()
{
}


void Classic::Report() const
{
    Cd::Report();
    cout << "Major work: " << Major_work << endl;
}


Classic& Classic::operator=(const Classic& c)
{
    if (this == &c)
        return *this;
    Cd::operator=(c);
    strcpy(Major_work, c.Major_work);
    return *this;
}
