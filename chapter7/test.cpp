#include <iostream>

using namespace std;

double func(const double arr[], int m);


int main()
{
    const double arr[20] = {9,1,2,3,4,5,6,4,3,2,8};
    int n = sizeof(arr)/sizeof(double); 
    int max = func(arr, n);
    cout << "Max: " << max;
}

double func(const double arr[], int m)
{
    int i = 0;
    double max = arr[0];
    for(i = 0; i < m; i++)
    {
        if(max < arr[i])
            max = arr[i];
    }
    return max;
}