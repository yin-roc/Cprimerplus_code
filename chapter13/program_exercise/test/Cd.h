#ifndef __CD_H__
#define __CD_H__

class Cd
{
private:
    char performers[50];
    char label[20];
    int selections;
    double playtime;
public:
    Cd(char * sl, char * s2, int n, double x);
    Cd(const Cd & d);
    Cd();
    ~Cd();
    virtual void Report() const;
    Cd & operator=(const Cd & d);
};

#endif
