#include <iostream>

using namespace std;
template <typename T>
T max5(T * arr)
{
    T temp = 0;
    for(int i = 0; i < 5; i++)
    {
        if(arr[i] > temp)
            temp = arr[i];
    }
    return temp;
}

int main()
{
    int arr1[] = {5, 8 , 3, -1, 7};
    double arr2[] = {5.2, 6.9, 1.25, -2.36, 7.77};
    int max1 = max5(arr1);
    double max2 = max5(arr2);
    cout << "The maximum int is " << max1 << endl;
    cout << "The maximum double is " << max2 << endl;

    return 0;
}