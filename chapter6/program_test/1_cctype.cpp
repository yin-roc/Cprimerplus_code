#include <iostream>
#include <cctype>
using namespace std;

int main()
{

    char ch;
    do
    {
        cout << "Enter the alphabet: " << endl;
        cin.get(ch).get();
        if(isdigit(ch) != 0)
            continue;
        else if(islower(ch) != 0)
            ch -= 32;
        else if(isupper(ch) != 0)
            ch += 32;
        cout << ch << endl;

    }while(ch != '@');

    return 0;
}