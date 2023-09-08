#include <iostream>
#include "golf.h"
#include <cstring>

using namespace std;

Golf::Golf(const char * m_fullname, int m_handicap)
{
    strcpy(fullname, m_fullname);
    handicap = m_handicap;
}

Golf::Golf()
{
    char name[Len] = {'\0'};
    int hc;
    cout << "Please enter your name:";
    cin.getline(name, Len);

    cout << "Please enter the handicap: ";
    while(!(cin>>hc))
    {
        cin.clear();
        while(cin.get() != '\n')
            continue;
        cout << "Please enter the golf's handicap: ";
    }
    cout << name << "::" << hc << endl;
    strcpy(fullname, name);
    handicap = hc;

}

Golf::~Golf(){}

void Golf::set_handicap(int hc)
{
    handicap = hc;
}

void Golf::showGolf() const
{
    cout << "Name: " << fullname << ", Handicap is " << handicap << endl;
}
