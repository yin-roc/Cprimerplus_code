#include <iostream>
#include <string>
#include "BankAccount.h"

using std::cout;
using std::endl;

BankAccount::BankAccount(const string m_name, const string m_accountnumber, const long double m_savings)
{
    name = m_name;
    accountnumber = m_accountnumber;
    savings = m_savings;
}

BankAccount::BankAccount()
{
    name = "";
    accountnumber = "";
    savings = 0;
}

BankAccount::~BankAccount()
{
    cout << "Bye~" << name << endl;
}

void BankAccount::show() const
{
    cout << "Now: " << endl;
    cout << "The name of the bank account is: " << name << endl;
    cout << "The account number of the bank account is: " << accountnumber << endl;
    cout << "The savings of the bank account is: " << savings << endl;
}

void BankAccount::push(long double number)
{
    savings += number;
}

void BankAccount::pop(long double number)
{
    if(number > savings)
    {
        cout << "You just have " << savings << ", not " << number << endl;
    }
    else
        savings -= number;
}