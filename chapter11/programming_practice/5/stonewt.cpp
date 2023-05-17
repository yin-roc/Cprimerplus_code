#include <iostream>
using std::cout;
#include "stonewt.h"

Stonewt::Stonewt(double lbs)
{
    stone = int(lbs) / Lbs_per_stn;
    pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;   
}

Stonewt::Stonewt(int stn, double lbs)
{
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn;
}

Stonewt::Stonewt()
{
    stone = pounds = pds_left = 0;
}

Stonewt::~Stonewt()
{
}

// void Stonewt::show_stn() const
// {
//     cout << stone << " stone, " << pds_left << " pounds\n";
// }

// void Stonewt::show_lbs() const
// {
//     cout << pounds << " pounds\n";
// }

void Stonewt::Set_Type(Type m)
{
    type = m;

}


Stonewt Stonewt::operator+(const Stonewt & add) const
{
    return Stonewt(add.pounds + pounds);
}

Stonewt Stonewt::operator-(const Stonewt & min) const
{
    return Stonewt(pounds - min.pounds);
}

Stonewt Stonewt::operator*(const double n) const
{
    return Stonewt(pounds * n);
}

// Stonewt operator*(const double n, const Stonewt & mult)
// {
//     return mult * n;
// }


std::ostream & operator<<(std::ostream & os, const Stonewt & s)
{
    if(s.type == Stonewt::STONE)
        os << s.stone << " stones " << s.pds_left << " pounds.\n";
    else if(s.type == Stonewt::POUNDS)
        os << int(s.pounds) << " pounds\n";
    else if(s.type == Stonewt::FLOATPOUNDS)
        os << s.pounds << " pounds\n";
    else
        os << "Invalid type.\n";
    return os;
    
}