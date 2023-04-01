#include <iostream>
#include <climits>
using namespace std;

const int ArSize = 10;
int main()
{
    double donation[10] = {0};
    double num;
    int i = 0;
    double average = 0;
    double sum = 0;
    int count = 0;
    cout << "Enter your number: " << endl;
    
    do
    {
        
        cin >> num;
        if(num > __DBL_MAX__ || num < __DBL_MIN__)
            break;
        donation[i] = num;
        sum += donation[i];
        i++;
        if(i < 10)
        cout << "Enter another number:" << endl;
    } while (i < ArSize);
    
    if(i == 0)
    cout << "No number enter." << endl;

    average = sum / i;
    cout << "Average: " << average << endl;
    for (int j = 0; j < i; j++)
    {
        if(donation[j] > average)
            count++;
    }
    cout << "There are " << count << " numbers larger than average!" << endl; 




    return 0;
}