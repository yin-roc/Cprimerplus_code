//
// Created by yin on 2023-09-30.
//
#include "Cd.h"
#include <iostream>
#include <cstring>

using namespace std;

Cd::Cd(const char * s1, const char * s2, int n, double x)
{
    performers = new char[sizeof(s1) + 1];
    label = new char[sizeof(s2) + 1];
    strcpy(performers, s1);
    strcpy(label, s2);
    selections = n;
    playtime = x;
}


Cd::Cd(const Cd & d)
{
    performers = new char[sizeof(d.performers) + 1];
    label = new char[sizeof(d.label) + 1];
    strcpy(performers, d.performers);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}


Cd::Cd()
{
    performers = new char [1];
    label = new char [1];
    performers[0] = '\0';
    label[0] = '\0';
    selections = 0;
    playtime = 0;
}


Cd::~Cd()
{
    cout << performers << " is destroyed.\n";
    delete [] performers;
    cout << label << " is destroyed.\n";
    delete [] label;
}


void Cd::Report() const
{
    cout << "performers: " << performers << ", label: " << label
         << ", selections: " << selections << ", playtime: " << playtime << endl;
}


Cd & Cd::operator=(const Cd & d)
{
    if ((strcmp(this->performers, d.performers) == 0) && (strcmp(this->label, d.label) == 0))
        return *this;
    delete [] performers;
    delete [] label;
    performers = new char[sizeof(performers) + 1];
    label = new char [sizeof(label) + 1];
    strcpy(performers, d.performers);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
    return *this;
}
