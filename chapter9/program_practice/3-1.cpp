#include <iostream>
#include <new>
#include <cstring>

using namespace std;

struct chaff
{
    char dross[20];
    int slag;
};

const int BUF = 512;
char buffer[BUF];
const int ArSize = 20;


void SetValue(chaff *);
void showchaff(chaff *);

int main()
{
    chaff * pt = new chaff[2];
    SetValue(pt);
    showchaff(pt);


    delete [] pt;
    return 0;
}

void SetValue(chaff * pt)
{
    char input[ArSize];
    // int num;
    cout << "Enter the first value of dross: ";
    cin.get(input, ArSize).get();    
    strcpy(pt->dross, input);
    cout << "Enter the first value of slag: ";
    cin >> pt->slag;
    cin.get();

    cout << "Enter the second value of dross: ";
    cin.get(input, ArSize).get();    
    strcpy(pt[1].dross, input);
    cout << "Enter the second value of slag: ";
    cin >> pt[1].slag;
    cin.get();
}

void showchaff(chaff *pt)
{
    cout << "The first value of dross: ";
    for(int i = 0; i < ArSize; i++)
        cout << pt->dross[i];
    cout << endl; 
    cout <<"The first value of slag: " << pt->slag << endl;

    cout << "The second value of dross: ";
    for(int i = 0; i < ArSize; i++)
        cout << (pt+1)->dross[i];
    cout << endl; 
    cout <<"The second value of slag: " << (pt+1)->slag << endl;
}
