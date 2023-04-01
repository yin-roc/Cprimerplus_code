#include <iostream>

using namespace std;

int main()
{
    cout << "Enter your input: " << endl;

    char ch = 0;

    do
    {
        cin.get(ch);
        if(ch >= 48 && ch <= 57)
            continue;
        else if(ch >= 65 && ch <= 90)
            ch += 32;
        else if(ch >= 97 && ch <= 122)
            ch -= 32;
        cout << ch;
    }while(ch != '@');
    
    // cin.get(ch);
    // while(ch != '@')
    // {
    //     if(ch >= 48 && ch <= 57)
    //         continue;
    //     else if(ch >= 65 && ch <= 90)
    //         ch += 32;
    //     else if(ch >= 97 && ch <= 122)
    //         ch -= 32;
    //     cout << ch ;
    //     cin.get(ch);  
    // }

    return 0;
}