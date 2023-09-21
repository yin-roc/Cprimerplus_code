#ifndef STOCK20_H__
#define STOCK20_H__

#include <string>
#include <iostream>
using namespace std;

class Stock
{
    private:
        char *str;
        long shares;
        double share_val;
        double total_val;
        void set_tot()
        {
            total_val = shares * share_val;
        }
    public:
        Stock();
        Stock(const std::string & co, long n = 0, double pr = 0.0);
        ~Stock();
        void buy(long num, double price);
        void sell(long num, double price);
        void update(double price);
        friend ostream & operator<<(ostream & os, const Stock &st);
        const Stock & topval(const Stock & s) const;
};

#endif