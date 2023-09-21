#include <iostream>
#include "stock20.h"
#include <cstring>
#include <string>
using namespace std;

Stock::Stock()
{
    std::cout << "Default constructor called\n";
    int len = strlen("no name");
    str = new char[len + 1];
    strcpy(str, "no name");
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}

Stock::Stock(const std::string & co, long n, double pr)
{
    // std::cout << "Constructor using " << co << " called\n";

    str = new char[co.size()+ 1];
    strcpy(str, co.c_str());
    if(n < 0)
    {
        std::cout << "Number of shares can't be negative;" 
                  << str << " shares set to 0.\n";
        shares = 0;
    }
    else
        shares = n;
    share_val = pr;
    set_tot();
}

Stock::~Stock()
{
    // std::cout << "Bye, " << company << "!\n";
    delete [] str;
}

void Stock::buy(long num, double price)
{
    if(num < 0)
    {
        std::cout << "Number of shares purchased can't be negative. "
                  << "Transaction is aborted.\n";
    }
    else
    {
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock::sell(long num, double price)
{
    using std::cout;
    if(num < 0)
    {
        cout << "Number of shares sold can't be negative. "
             << "Transaction is aborted.\n";
    }
    else if (num > shares)
    {
        cout << "You can't sell more than you have! "
             << "Transaction is aborted.\n";
    }
    else
    {
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price)
{
    share_val = price;
    set_tot();
}


ostream & operator<<(ostream & os, const Stock &st)
{
    os << "Company: " << st.str
        << " Shares: " << st.shares << '\n'
        << " Shares Price: $" << st.share_val
        << " Total worth: $" << st.total_val << '\n'; 
    return os;
}


const Stock & Stock::topval(const Stock & s) const
{
    if(s.total_val > total_val)
        return s;
    else
        return *this;
}