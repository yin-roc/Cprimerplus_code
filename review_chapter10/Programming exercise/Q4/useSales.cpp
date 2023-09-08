#include <iostream>
#include "Sales.h"

using namespace std;

int main(void)
{
        
    double ar[Sales::QUARTERS] = {11.1, 22.2, 33.3, 44.4};
    Sales s1(ar, Sales::QUARTERS);
    Sales s2;
    s1.showSales();
    s2.showSales();

    return 0;
}
