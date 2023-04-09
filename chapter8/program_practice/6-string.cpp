#include <iostream>
#include <string>

using namespace std;

template <typename T>
T maxn(T * arr, int num)
{
    T temp = 0;
    for(int i = 0; i < num; i++)
    {
        if(arr[i] > temp)
            temp = arr[i];
    }
    return temp;
}

template <> string maxn(string str[], int n);

int main()
{
    int arr1[] = {5, 8 , 3, -1, 7, 12};
    double arr2[] = {5.2, 6.9, 1.25, -2.36};
    string arr3[] = {"yin peng", "hu an yang", "luo shun yuan", "liu zhi yuan"};
    int num = 4;
    int max1 = maxn(arr1, 6);
    double max2 = maxn(arr2, 4);
    cout << "The maximum int is " << max1 << endl;
    cout << "The maximum double is " << max2 << endl;
    cout << maxn(arr3, num) << endl;

    return 0;
}

template <> string maxn(string str[], int n)
{
    int pos = 0;
    for(int i = 0; i < n; i++)
    {
        if(str[i].size() > str[pos].size())
            pos = i;
    }
    return str[pos];
}


