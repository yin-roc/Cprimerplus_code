#include <iostream>

using namespace std;

int factorial(unsigned i);
int main()
{
    unsigned int number;
    cout << "Enter the number: ";

    while (cin >> number)
    {
        unsigned result = factorial(number);
        cout << "The factorial of " << number << " is " << result << endl;
        cout << "Enter next number(q to quit): ";
    }
    // cin.clear();
    // while()
    return 0;
}

int factorial(unsigned i)
{
    if(i == 0)
        return 1;
    else
        return i * factorial(i - 1);
}
