#include <iostream>
#include "stock20.h"

int main()
{
    Stock stock1 = Stock("hello", 10, 10);
    stock1.show();

    Stock stock2("world", 20, 3);
    stock2.show();

    Stock lagger = stock1.topval(stock2);
    std::cout << "Now, bigger is "<< std::endl;
    lagger.show();

    return 0;
}