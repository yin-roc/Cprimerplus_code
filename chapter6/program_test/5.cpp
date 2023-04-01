#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

const int num_5000 = 5000;
const int num_15000 = 15000;
const int num_35000 = 35000;
const float tax_low = 0.1;
const float tax_medium = 0.15;
const float tax_high = 0.2;

int main()
{
    double income; 
    double tax;
    // char earn[20];
    cout << "Enter your income: " << endl;

    
    // strcpy(earn, income);
    while(cin >> income && income >= 0)//没有加非数字！
    {
        if(income <=5000)
            cout << "No Tax!" << endl;
        else if(income > 5000 && income <=15000)
            tax = (income - num_5000) * tax_low;
        else if(income > 15000 && income <= 35000) 
            tax = (num_15000 - num_5000) * tax_low + (income - num_15000) * tax_medium;
        else
            tax = (num_15000 - num_5000) * tax_low + (num_35000 - num_15000) * tax_medium + (income - num_35000) * tax_high;
        if(income > 5000)
            cout << "Tax is " << tax << endl;
        cout << "Enter your income again: " << endl;
        // cin >> income;  
    }


    return 0;
}