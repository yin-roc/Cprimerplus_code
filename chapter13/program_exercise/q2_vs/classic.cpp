#define _CRT_SECURE_NO_WARNINGS 1


#include "Cd.h"
#include "classic.h"
#include <iostream>
#include <cstring>

using namespace std;


Classic::Classic(const char* str, const char* sl, const char* s2, int n, double x) : Cd(sl, s2, n, x)
{
    Major_work = new char[strlen(str) + 1];
    strcpy(Major_work, str);
}


Classic::Classic(const Classic& cla) : Cd(cla)
{
    Major_work = new char[strlen(cla.Major_work) + 1];
    strcpy(Major_work, cla.Major_work);
}


Classic::Classic() : Cd()
{
    Major_work = nullptr;
}


Classic::~Classic()
{
    cout << Major_work << " is destroyed.\n";
    delete[] Major_work;
}


void Classic::Report() const
{
    Cd::Report();
    cout << "Major work: " << Major_work;
}


Classic& Classic::operator=(const Classic& cla)
{
    if (this == &cla)
        return *this;
    Cd::operator=(cla);
    delete [] Major_work;
    Major_work = new char[strlen(cla.Major_work) + 1];
    strcpy(Major_work, cla.Major_work);

    return *this;
}