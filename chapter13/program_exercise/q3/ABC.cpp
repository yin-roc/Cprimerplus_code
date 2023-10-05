#define _CRT_SECURE_NO_WARNINGS 1

#include "ABC.h"
#include <cstring>
#include <iostream>
using std::cout;
using std::endl;

ABC::ABC(const char* l, int r)
{
    label = new char[std::strlen(l) + 1];
    std::strcpy(label, l);
    rating = r;
}


ABC::ABC(const ABC& rs)
{
    label = new char[std::strlen(rs.label) + 1];
    std::strcpy(label, rs.label);
    rating = rs.rating;
}


ABC::~ABC()
{
    delete[] label;
}


ABC& ABC::operator=(const ABC& rs)
{
    if (this == &rs)
        return *this;
    delete[] label;
    label = new char[std::strlen(rs.label) + 1];
    std::strcpy(label, rs.label);
    rating = rs.rating;
    return *this;
}


std::ostream& operator<<(std::ostream& os, const ABC& rs)
{
    os << "Label: " << rs.label << std::endl;
    os << "Rating: " << rs.rating << std::endl;
    return os;
}


void ABC::View() const
{
    cout << "Label: " << label << endl;
    cout << "Rating: " << rating << endl;
}


baseDMA::baseDMA(const char* l, int r) : ABC(l, r)
{
}


baseDMA::baseDMA(const baseDMA& rs) : ABC(rs)
{
}


void baseDMA::View() const
{
    ABC::View();
}


lacksDMA::lacksDMA(const char* c, const char* l, int r) : ABC(l, r)
{
    std::strncpy(color, c, 39);
    color[39] = '\0';
}


lacksDMA::lacksDMA(const char* c, const ABC& rs) : ABC(rs)
{
    std::strncpy(color, c, COL_LEN - 1);
    color[COL_LEN - 1] = '\0';
}


std::ostream& operator<<(std::ostream& os, const lacksDMA& ls)
{
    os << (const ABC&)ls;
    os << "Color: " << ls.color << std::endl;
    return os;
}


void lacksDMA::View() const
{
    ABC::View();
    cout << color << endl;
}


hasDMA::hasDMA(const char* s, const char* l, int r) : ABC(l, r)
{
    style = new char[std::strlen(s) + 1];
    std::strcpy(style, s);
}


hasDMA::hasDMA(const char* s, const ABC& rs) : ABC(rs)
{
    style = new char[std::strlen(s) + 1];
    std::strcpy(style, s);
}


hasDMA::hasDMA(const hasDMA& hs) : ABC(hs)
{
    style = new char[std::strlen(hs.style) + 1];
    std::strcpy(style, hs.style);
}


hasDMA::~hasDMA()
{
    delete[] style;
}


hasDMA& hasDMA::operator=(const hasDMA& hs)
{
    if (this == &hs)
        return *this;
    ABC::operator=(hs);
    delete[] style;
    style = new char[std::strlen(hs.style) + 1];
    std::strcpy(style, hs.style);
    return *this;
}


std::ostream& operator<<(std::ostream& os, const hasDMA& hs)
{
    os << (const ABC&)hs;
    os << "Style: " << hs.style << std::endl;
    return os;
}


void hasDMA::View() const
{
    ABC::View();
    cout << "Stytle: " << style << endl;
}