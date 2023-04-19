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
    strcpy(fullname, "NULL");
    handicap = 0;
}

int Golf::setgolf()
{
    int tmp = 1;
    
    cout << "The fullname of golf: ";
    cin.getline(fullname, ArSize);
    if(strcmp(fullname, "") == 0)
    {
        tmp = 0;
        return tmp;
    }
    else
    {
        cout << "The handicap of golf: ";
        cin >> handicap;
        cin.get();
        return tmp;
    }
    
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