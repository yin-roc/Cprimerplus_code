#define _CRT_SECURE_NO_WARNINGS 1

#include "Cd.h"
#include <iostream>
#include <cstring>

using namespace std;

Cd::Cd(const char* s1, const char* s2, int n, double x)
{
    performers = new char[strlen(s1) + 1];
    label = new char[strlen(s2) + 1];
    strcpy(performers, s1);
    strcpy(label, s2);
    selections = n;
    playtime = x;
}


Cd::Cd(const Cd& d)
{
    performers = new char[strlen(d.performers) + 1];
    label = new char[strlen(d.label) + 1];
    strcpy(performers, d.performers);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}


Cd::Cd()
{
    performers = nullptr;
    label = nullptr;
    selections = 0;
    playtime = 0;
}


Cd::~Cd()
{
    cout << performers << " is destroyed.\n";
    delete[] performers;
    cout << label << " is destroyed.\n";
    delete[] label;
}


void Cd::Report() const
{
    cout << "performers: " << performers << ", label: " << label << ", selections: " << selections << ", playtime: " << playtime << endl;
}


Cd& Cd::operator=(const Cd& d)
{
    if (this == &d)
        return *this;
    delete[] performers;
    delete[] label;
    performers = new char[strlen(d.performers) + 1];
    label = new char[strlen(d.label) + 1];
    strcpy(performers, d.performers);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;

    return *this;
}
