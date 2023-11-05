//
// Created by yin on 2023-11-04.
//

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
    (PairArray &) *this = Pair(ArrayInt (Year, years), ArrayInt (Bottles, years));
}

void Wine::Show() const {
    cout << "Wine: " << (const string &) *this << endl;
    cout << "\t" << "Year" << "\t\t" << "Bottles" << endl;
    for(int i = 0; i < years; i++)
    {
        cout << "\t" << (*this).first()[i] << "\t\t" << (*this).second()[i] << endl;
    }
}

const string & Wine::Label()
{
    return (const string &) *this;
}

int Wine::sum() {
    int SUM = 0;
    for(int i = 0; i < years; i++)
    {
        SUM += this->second()[i];
    }
    return SUM;
}

Wine & Wine::operator=(PairArray p1) {

    for(int i = 0; i < years; i++)
    {
        this->first()[i] = p1.first()[i];
        this->second()[i] = p1.second()[i];
    }
    return *this;
}

std::ostream & operator<<(std::ostream & os, const Wine & p1)
{
    os << (const string &) p1 << endl;
    p1.arrayint_out(os);
    return os;
}

std::ostream & Wine::arrayint_out(std::ostream & os) const
{
    os << "\t" << "Year" << "\t\t" << "Bottles" << endl;
    for(int i = 0; i < years; i++)
    {
        os << "\t" << (*this).first()[i] << "\t\t" << this->second()[i] << endl;
    }
    return os;
}




