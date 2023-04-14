#include <iostream>
#include "golf.h"
#include <cstring>

using namespace std;

void setgolf(golf & g, const char * name, int hc)
{
    strcpy(g.fullname, name);
    g.handicap = hc;
}

int setgolf(golf & g)
{
    char name[Len];
    int tmp = 1;
    int hc;
    cout << "The fullname of golf: ";
    cin.getline(g.fullname, Len);
    if(strcmp(g.fullname, "") == 0)
    {
        tmp = 0;
        return tmp;
    }
    else
    {
        cout << "The handicap of golf: ";
        cin >> g.handicap;
        cin.get();
        return tmp;
    }
    
}

void handicap(golf & g, int hc)
{
    g.handicap = hc;
}

void showgolf(const golf & g)
{
    cout << "The fullname of golf: " << g.fullname << endl;
    cout << "The handicap of golf: " << g.handicap << endl;
}