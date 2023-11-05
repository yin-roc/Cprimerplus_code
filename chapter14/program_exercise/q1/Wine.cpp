#include <iostream>
#include "Wine.h"

using namespace std;

void Wine::GetBottles() {
    cout << "Enter Gully Wash data for " << years << " year(s): " << endl;
    int Year[years];
    int Bottles[years];
    for(int i = 0; i < years; i++)
    {

        cout << "Enter year: ";
        cin >> Year[i];
        cout << "Enter bottles for that year: ";
        cin >> Bottles[i];
    }
    info = Pair(valarray<int> (Year, years), valarray<int> (Bottles, years));
}

void Wine::Show() const {
    cout << "Wine: " << name << endl;
    cout << "\t" << "Year" << "\t\t" << "Bottles" << endl;
    for(int i = 0; i < years; i++)
    {
        cout << "\t" << info.first()[i] << "\t\t" << info.second()[i] << endl;
    }
}

string & Wine::Label()
{
    return name;
}

int Wine::sum() {
    int SUM = 0;
    for(int i = 0; i < years; i++)
    {
        SUM += info.second()[i];
    }
    return SUM;
}


