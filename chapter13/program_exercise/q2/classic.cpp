//
// Created by yin on 2023-09-30.
//

#include "Cd.h"
#include "classic.h"
#include <iostream>
#include <cstring>

using namespace std;


Classic::Classic(const char* str, const char* sl, const char* s2, int n, double x) : Cd(sl, s2, n, x)
{
    Major_work = new char [sizeof(str) + 1];
    strcpy(Major_work, str);
}


Classic::Classic(const Classic& cla)
{
    Major_work = new char [sizeof(cla.Major_work) + 1];
    strcpy(Major_work, cla.Major_work);
}


Classic::Classic()
{
    Major_work = new char [1];
    Major_work[0] = '\0';
}


Classic::~Classic()
{
    cout << Major_work << " is destroyed.\n";
    delete [] Major_work;
}


void Classic::Report() const
{
    cout << "Major work: " << Major_work << endl;
    Cd::Report();
}

