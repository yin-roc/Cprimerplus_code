#include <iostream>
long double probability_filed_number(unsigned numbers, unsigned picks);

using namespace std;

int main()
{
    double total, choices;
    cout << "Enter the total number of choices on the game card and\n"
            "the number of picks allowed:\n";
    while((cin >> total >> choices) && choices <= total )
    {
        cout << "You have one chance in ";
        cout << probability_filed_number(total, choices);
        cout << " of winning.\n";
        cout << "Next two numbers (q to quit): ";
    }
    cout << "bye\n";

    return 0;
}

long double probability_filed_number(unsigned numbers, unsigned picks)
{
    long double result = 1.0;
    long double n;
    unsigned p;

    for(n = numbers, p = picks; p > 0; n--, p--)
        result = result * n / p;
    return result;
}