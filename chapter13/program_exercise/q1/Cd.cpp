//
// Created by yin on 2023-09-29.
//
#include "Cd.h"
#include <iostream>
#include <cstring>

using namespace std;

Cd::Cd(char * sl, char * s2, int n, double x)
{
    strncpy_s(performers, sl, 50);
    if (strlen(sl) >= 50)
        performers[49] = '\0';
    else
        performers[strlen(sl)] = '\0';

    strncpy_s(label, s2, 20);
    if (strlen(s2) >= 20)
        performers[19] = '\0';
    else
        performers[strlen(s2)] = '\0';
    selections = n;
    playtime = x;
}


Cd::Cd(const Cd & d)
{
    strncpy_s(performers, d.performers, 50);
    strncpy_s(label, d.label, 20);
    selections = d.selections;
    playtime = d.playtime;
}


Cd::Cd()
{
    performers[0] = '\0';
    label[0] = '\0';
    selections = 0;
    playtime = 0;
}


Cd::~Cd()
{
}


void Cd::Report() const
{
    cout << "performers: " << performers << ", label: " << label
         << ", selections: " << selections << ", playtime: " << playtime << endl;
}


Cd & Cd::operator=(const Cd & d)
{
    if (this == &d)
        return *this;
    strncpy_s(performers, d.performers, 50);
    strncpy_s(label, d.label, 20);
    selections = d.selections;
    playtime = d.playtime;
    return *this;
}
