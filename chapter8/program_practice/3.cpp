#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void up(string &);

int main()
{
    string input;
    cout << "Enter a string (q to quit): ";
    getline(cin, input);
    // cin.getline(input, 20);
    while(input != "q")
    {
        up(input);
        cout << "Next string (q to quit): ";
        getline(cin, input);
    }
    cout << "Bye" << endl;
    return 0;
}

void up(string & a)
{
    int i = 0;
    while(a[i] != '\0')
    {
        if(a[i] >= 'a' && a[i] <= 'z')
        {
            a[i] = toupper(a[i]);
        }
        i++;
    }
    cout << a << endl;
}