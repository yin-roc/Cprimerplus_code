#ifndef __BANKACCOUNT_H__
#define __BANKACCOUNT_H__
#include <iostream>
#include <string>

using std::string;

class BankAccount
{
    private:
        string name; 
        string accountnumber;
        long double savings;
        
    public:
        BankAccount(const string m_name, const string m_accountnumber, const long double m_savings);
        BankAccount();
        ~BankAccount();
        void show() const;
        void push(long double number);
        void pop(long double number);
};

#endif  



