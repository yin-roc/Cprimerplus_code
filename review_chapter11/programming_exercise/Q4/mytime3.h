#ifndef __MYTIME3_H__
#define __MYTIME3_H__
#include <iostream>

class Time
{
    private:
        int hours;
        int minutes;
    public:
        Time();
        Time(int h, int m = 0);
        void AddMin(int m);
        void AddHr(int h);
        void Reset(int h = 0, int m = 0);
        friend Time operator+(const Time & a, const Time & b);
        friend Time operator-(const Time & a, const Time & b);
        friend Time operator*(const Time & a, double n);
        
        friend Time operator*(double m, const Time & t){return t * m;};
        friend std::ostream & operator<<(std::ostream & os, const Time & t);

        void Show() const;
};

#endif // !