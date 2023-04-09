#include <iostream>

using namespace std;

template <class AnyType>
float Max(AnyType & a, AnyType &b)
{
    if(a > b)
        return a;
    else 
        return b;
}

int main()
{
    float a, b, max;
    cout << "Please input two numbers:";
    cin >> a >> b;
    max = Max(a, b);
    cout << "The larger is: ";
    cout << max << endl;
    return 0;
}

