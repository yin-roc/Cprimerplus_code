#include "sales.h"

using namespace std;

namespace SALES
{
    Sales::Sales(const double ar[], int n)
    {
        double total = 0.0;
        int i;
        for(i = 0; i < n && i < 4; i++)
        {
            sales[i] = ar[i];
            total += sales[i];
        }

        average = total / i;
        max = sales[0];
        min = sales[0];

        for(int k = 1; k < i; k++)
        {
            max = (max > sales[k]) ? max : sales[k];
            min = (min < sales[k]) ? min : sales[k];
        }

        if(n < 4)
        {
            for(int k = n; k < 4; k++)
                sales[k] = 0;
        }

    }

    Sales::Sales()
    {
        double total = 0.0;

        cout << "Enter 4 sales quarters: " << endl;
        for(int i = 0; i < QUARTERS; i++)
        {
            cout << "#" << i+1 << ": ";
            cin >> sales[i];
            total += sales[i];

            if(i == 0)
            {
                max = sales[i];
                min = sales[i];
            }
            else 
            {
                max = (max > sales[i]) ? max : sales[i];
                min = (min < sales[i]) ? min : sales[i];
            }
        }
        average = total / QUARTERS;
    }

    void Sales::showSales() const
    {
        cout << "Sales of 4 quarters: " << endl;

        for(int i = 0; i < QUARTERS; i++)
            cout << sales[i] << " ";
        cout << endl << "Average = " << average << endl;
        cout << "Max = " << max << endl;
        cout << "Min = " << min << endl;
    }
}
