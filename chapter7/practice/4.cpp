#include <iostream>

using namespace std;

long double probability_filed_number(unsigned, unsigned);
long double probability_lucky_number(unsigned, unsigned);

int main()
{
    unsigned int filed_number, lucky_number, choices1, choices2;
    cout << "Enter the filed number and choices1:\n";
    while((cin >> filed_number >> choices1) && (choices1 <= filed_number))
    {
        long double chance_of_field, chance_of_lucky;
        chance_of_field = probability_filed_number(filed_number, choices1);
        cout << "one chance in filed number is " 
             <<  chance_of_field << endl;

        cout << "Enter the lucky number and choices2:\n";
        while((cin >> lucky_number >> choices2) && (choices2 <= lucky_number))
        {
            chance_of_lucky = probability_lucky_number(lucky_number, choices2);
            cout << "one chance in filed number is " 
                <<  chance_of_lucky << endl;
            cout << "You have one chance in " << chance_of_field * chance_of_lucky << "of winning." << endl;
            break;
        }
        // cout << q to quit." << endl;
        break;
    }

    return 0;
}

long double probability_filed_number(unsigned number, unsigned choices)
{
    long double result = 1.0;
    // unsigned count;
    for(unsigned count = choices; count > 0; count--, number--)
    {
        result = result * number / count; 
    }
    return result;
}

long double probability_lucky_number(unsigned number, unsigned choices)
{
    long double result = 1.0;
    // unsigned count;
    for(unsigned count = choices; count > 0; count--, number--)
    {
        result = result * number / count; 
    }
    return result;
}