#include <iostream>
#include "bank.h"

int main()
{
    Bank_account user1 = Bank_account("yin peng", "1234567890", 1000);
    user1.show();
    user1.push(500.0);
    user1.show();
    user1.pull(300);
    user1.show();

    return 0;
}