#include "mytime3.h"

Time::Time()
{
    hours = minutes = 0;
}

Time::Time(int h, int m)
{
    hours = h;
    minutes = m;
}

void Time::AddMin(int m)
{
    minutes += m;
    hours += minutes / 60;
    minutes %= 60;
}

void Time::Reset(int h, int m)
{
    hours = h;
    minutes = m;
}

Time operator+(const Time & val1, const Time & val2)
{
    Time sum;
    sum.minutes = val1.minutes + val2.minutes;
    sum.hours = val1.hours + val2.hours + sum.minutes / 60;
    sum.minutes %= 60;
    return sum;
}

Time operator-(const Time & val1, const Time & val2)
{
    Time diff;
    int tot1, tot2;
    tot1 = val1.minutes + 60 * val1.hours;
    tot2 = val2.minutes + 60 * val2.hours;
    diff.minutes = (tot2 - tot1) % 60;
    diff.hours = (tot2 - tot1) / 60;
    return diff;
}

Time operator*(const Time & val, double mult)
{
    Time result;
    long totalminutes = val.hours * mult * 60 + val.minutes * mult;
    result.hours = totalminutes / 60;
    result.minutes = totalminutes % 60;
    return result;
}

std::ostream & operator<<(std::ostream & os, const Time & t)
{
    os << t.hours << " hours, " << t.minutes << " minutes";
    return os;
}
