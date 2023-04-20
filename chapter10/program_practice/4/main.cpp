#include <iostream>
#include "sales.h"

using namespace std;

int main()
    {
        using namespace SALES;
        double ar[4] = {11.1, 22.2, 33.3, 44.4};
        Sales s1 = Sales(ar, 4);
        s1.showSales();

        Sales s2;
        s2.showSales();

        return 0;
    }
