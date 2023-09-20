#include <iostream>
#include "stonewt.h"
using std::cout;

Stonewt::Stonewt(double lbs)
{
    stone = int(lbs) / Lbs_per_stn;
    pds_left = int (lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
}


Stonewt::Stonewt(int stn, double lbs)
{
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn + lbs;
}


Stonewt::Stonewt()
{
    stone = pounds = pds_left = 0;
}


Stonewt::~Stonewt()
{
}


void Stonewt::Set_Type(Type m)
{
    type = m;
}


Stonewt Stonewt::operator+(const Stonewt & st) const
{
    return Stonewt(pounds + st.pounds);
}


Stonewt Stonewt::operator-(const Stonewt & st) const
{
    return Stonewt(pounds - st.pounds);
}


Stonewt Stonewt::operator*(double mult) const
{
    return Stonewt(pounds * mult);
}


std::ostream & operator<<(std::ostream & os, Stonewt & st)
{
    if(st.type == Stonewt::STONE)
        os << st.stone << " stone, " << st.pds_left << " pounds.\n ";
    else if(st.type = Stonewt::POUNDS)
        os << int(st.pounds) << " pounds.\n";
    else if(st.type == Stonewt::FLOATPOUNDS)
        os << st.pounds << " pounds\n";
    else
        os << "Invalid type.\n";
    return os;
}
