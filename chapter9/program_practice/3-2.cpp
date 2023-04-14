#include <iostream>
#include <new>
#include <cstring>

using namespace std;

const int BUF = 512;
char buffer[BUF];
const int ArSize = 20;

struct chaff
{
    char dross[ArSize];
    int slag;
};

void SetValue(chaff *);
void showchaff(chaff *);

int main()
{
    chaff * pt1 = new (buffer) chaff;
    SetValue(pt1);
    showchaff(pt1);

    chaff * pt2 = new (buffer + ArSize * sizeof(char) + sizeof(int)) chaff;
    SetValue(pt2);
    showchaff(pt2);

    // delete [] pt;
    return 0;
}

void SetValue(chaff * pt)
{
    char input[ArSize];
    static int num = 1;
    // int num;
    cout << "Enter the " << num << "f irst value of dross: ";
    cin.get(input, ArSize).get();    
    strcpy(pt->dross, input); 
    cout << "Enter the " << num << " value of slag: ";
    cin >> pt->slag;
    cin.get();
}


void showchaff(chaff *pt)
{
    static int num = 1;
    cout << "The " << num <<" value of dross: ";
    for(int i = 0; i < ArSize; i++)
        cout << pt->dross[i];
    cout << endl; 
    cout <<"The " << num << " value of slag: " << pt->slag << endl;
}