#include <iostream>

using namespace std;

int replace(char *str, char c1, char c2);

int main()
{
    char str1[20] = "hello world";
    char c1 = 'l';
    char c2 = '!';
    int n = replace(str1, c1, c2);
    cout << str1 << endl;
    cout << c1  << " has " << n << " numbers\n";

    return 0;
}

int replace(char * str, char c1, char c2)
{
    int n = 0;
    while( *str != '\0')
    {
        if(*str == c1)
        {
            *str = c2;
            n++;
        }  
        str++;
    }
    return n;
}