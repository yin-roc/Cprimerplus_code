#ifndef __WINE_H__
#define __WINE_H__

#include <iostream>
#include <string>
#include "valarray"

using std::string;

template<class T1, class T2>
class Pair{
private:
    T1 a;
    T2 b;
public:
    T1 & first();
    T2 & second();
    T1 first() const {return a;}
    T2 second() const {return b;}
    Pair(const T1 & aval, const T2 & bval) : a(aval), b(bval){}
    Pair() {}
};

template<class T1, class T2>
T1 & Pair<T1, T2>::first()
{
    return a;
}

template<class T1, class T2>
T2 & Pair<T1, T2>::second()
{
    return b;
}


class Wine{
private:
    string name;
    Pair<std::valarray<int>, std::valarray<int>> info;
    int years;
public:
    Wine() : name("NULL"), years(0), info(std::valarray<int> (0), std::valarray<int> (0)) {}
    Wine(const char * l, int y, const int yr[], const int bot[])
            : name(l), years(y), info(std::valarray<int> (yr, y), std::valarray<int> (bot, y)) {}
    Wine(const char * l, int y) : name(l), years(y) {}
    void GetBottles();
    void Show() const;
    string & Label();
    int sum();
};




#endif