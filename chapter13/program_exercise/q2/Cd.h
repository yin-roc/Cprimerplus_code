//
// Created by yin on 2023-09-30.
//
#ifndef __CD_H__
#define __CD_H__

class Cd
{
private:
    char *performers;
    char *label;
    int selections;
    double playtime;
public:
    Cd(const char * s1, const char * s2, int n, double x);
    Cd(const Cd & d);
    Cd();
    ~Cd();
    virtual void Report() const;
    Cd & operator=(const Cd & d);
};

#endif
