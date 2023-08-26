#include <iostream>
#include "BankAccount.h"

int main(void)
{
    BankAccount account1;
    BankAccount account2("iron man", "1542368795223", 50000);

    account1.show();
    account2.show();

    account2.pop(6000);
    account2.show();

    account2.push(8000);
    account2.show();
    return 0;
}
