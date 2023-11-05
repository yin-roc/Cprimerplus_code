//
// Created by yin on 2023-11-04.
//

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

typedef std::valarray<int> ArrayInt;
typedef Pair<ArrayInt, ArrayInt> PairArray;

class Wine : private string, private PairArray
{
private:
    int years;
    std::ostream & arrayint_out(std::ostream & os) const;
public:
    Wine() : string("NULL"), years(0), PairArray(ArrayInt (0), ArrayInt(0)) {}
    Wine(const char * l, int y, const int yr[], const int bot[])
            : string(l), years(y), PairArray(ArrayInt (yr, y), ArrayInt (bot, y)) {}
    Wine(const char * l, int y) : string(l), years(y) {}
    void GetBottles();
    void Show() const;
    const string & Label();
    int sum();
    Wine & operator=(PairArray p1);
    friend std::ostream & operator<<(std::ostream &os, const Wine & p1);
};

#endif