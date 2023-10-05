//
// Created by yin on 2023-09-30.
//

#ifndef __CLASSIC_H__
#define __CLASSIC_H__
#include "Cd.h"
#include <iostream>

class Classic : public Cd
{
private:
    char *Major_work;
public:
    Classic(const char* str, const char* sl, const char* s2, int n, double x);
    Classic(const Classic & cla);
    Classic();
    ~Classic();
    virtual void Report() const;
};

#endif


