#include <iostream>
using namespace std;
#include "stonewt.h"

const int SIZE = 6;
int main()
{
    Stonewt Stone_arr[SIZE] = {275, Stonewt(285.7), Stonewt(21, 8)};
    double input;
    Stonewt max = Stone_arr[0];
    Stonewt min = Stone_arr[0];
    Stonewt eleven = Stonewt(11, 0.0);
    unsigned int count  = 0;

    for(int i = 3; i < SIZE; i++)
    {
        cout << "Enter number " << i + 1 << " element.(in pounds)" << endl;
        cin >> input;
        Stone_arr[i] = Stonewt(input);
    }

    for(int i = 0; i < SIZE; i++)
    {
        max = max > Stone_arr[i] ? max : Stone_arr[i];
        min = min < Stone_arr[i] ? min : Stone_arr[i];
        if(Stone_arr[i] > eleven)
            count++;
    }

    cout << "The max weigh: ";
    max.show_lbs();
    cout << "The min weigh: ";
    min.show_lbs();
    cout << count << " objects are heavier than eleven" << endl; 

    Stonewt incognito = 275;
    Stonewt wolfe(285.7);
    Stonewt taft(21, 8);
    
    
    return 0;
}
