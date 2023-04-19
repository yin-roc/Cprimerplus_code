#ifndef __BANK_H__
#define __BANK_H__

#include <string>
class Bank_account
{
    private:
        std::string name;
        std::string account;
        double deposit;
    public:
        Bank_account();
        Bank_account(const std::string & m_name, const std::string m_account, double m_deposit);
        void show() const;
        void push(double);
        void pull(double);
};

#endif