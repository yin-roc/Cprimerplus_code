#include <iostream>

using namespace std;

int main(void)
{
    char ch;
    int spaces = 0;
    int total = 0;
    cin.get(ch);
    while(ch != '.')
    {
        if(ch == ' ')
            ++spaces;
        ++total;
        cin.get(ch);
    }

    cout << spaces << " spaces, " << total;
    cout << " cahracters total in seconds\n";
    return 0;
}