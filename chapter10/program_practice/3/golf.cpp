#include <iostream>
#include "golf.h"
#include <cstring>

using namespace std;

Golf::Golf(const char * name, int hc)
{
    strcpy(fullname, name);
    handicap = hc;
}


Golf::Golf()
{
    cout << "The fullname of golf: ";
    cin.getline(fullname, ArSize);
    cout << "The handicap of golf: ";
    cin >> handicap;
    cin.get();  
}

void Golf::Handicap(int hc)
{
    handicap = hc;
}

void Golf::showgolf() const
{
    cout << "The fullname of golf: " << fullname << endl;
    cout << "The handicap of golf: " << handicap << endl;
}