#include <iostream>
#include <climits>

using namespace std;
bool is_int(double);
int main()
{
    double num;
    cout << "Yo, dude! Enter an inter value: ";
    cin >> num;
    while(!is_int(num))
    {
        cout << "Out of range -- please try again: ";
        cin >> num;
    }
    int val = int (num);
    cout << "You've entered the integer " << val << "\nBye\n";
    
    return 0;
}

bool is_int(double x)
{
    if(x <= INT16_MAX && x >= INT16_MIN)
        return true;
    else
        return false;
}