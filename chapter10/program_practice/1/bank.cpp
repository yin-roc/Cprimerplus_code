#include <iostream>
#include "bank.h"

    Bank_account::Bank_account()
    {
        name = "NULL";
        account = "0000";
        deposit = 0;
    }

    Bank_account::Bank_account(const std::string & m_name, const std::string m_account, double m_deposit)
    {
        name = m_name;
        account = m_account;
        deposit = m_deposit;
    }

    void Bank_account::show() const
    {
        std::cout << "The name is " << name << std::endl;
        std::cout << "The account is " << account << std::endl;
        std::cout << "The deposit is " << deposit << std::endl;
    }

    void Bank_account::push(double money)
    {
        std::cout << "Now, you deposit " << money << " money.\n";
        deposit += money;
        std::cout << "So, you have " << deposit << " in all.\n"; 
    }

    void Bank_account::pull(double money)
    {
        std::cout << "Now, you take out " << money << " money.\n";
        deposit -= money;
        std::cout << "So, you have " << deposit << " in all.\n"; 
    }



