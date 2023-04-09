#include <iostream>

using namespace std;

const int ArSize = 20;
void print(char *, int n = 0);
int main()
{
    char word[ArSize] = "hello world.";
    print(word);
    print("Shanghai",10);
    print("Jiangsu", 5);


    return 0;
}

void print(char *pa, int a)
{
    static int num = 0;
    num ++;
    if(a == 0)
    {
        cout << pa << endl;
    }
    else
    {
        for(int i = 0; i < num; i++)
        {
            cout << pa << endl;
        }
    }
}