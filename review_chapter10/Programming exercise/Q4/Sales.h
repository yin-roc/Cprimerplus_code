#ifndef __SALES_H__
#define __SALES_H__

#include <iostream>

class Sales
{
    public:
        static const int QUARTERS = 4;

    private:
        double sales[QUARTERS];
        double average;
        double max;
        double min;
    public:
        Sales();
        Sales(const double ar[], const int n);
        ~Sales();
        void showSales() const;
};

#endif