//
// Created by yin on 2023-09-29.
//

#ifndef __CLASSIC_H__
#define __CLASSIC_H__
#include "Cd.h"
#include <iostream>

class Classic : public Cd
{
private:
    static const int Len = 50;
    char Major_work[Len];
public:
    Classic(const char* str, char* sl, char* s2, int n, double x);
    Classic(const Classic & cla);
    Classic();
    ~Classic();
    virtual void Report() const;
    Classic& operator=(const Classic& c);
};

#endif

