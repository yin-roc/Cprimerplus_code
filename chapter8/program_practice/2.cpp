#include <iostream>
#include <cstring>
using namespace std;

const int ArSize = 20;

struct CandyBar
{
    char name[ArSize];
    double weight;
    int calories;
};

void func(CandyBar &, const char * str = "Millennium Munch", const double weight = 4.85, const int calories = 350);
void display(CandyBar & );

int main()
{
    CandyBar candybar;
    func(candybar);
    return 0;
}

void func(CandyBar & a, const char * maker, const double weight, const int calories)
{
    strcpy(a.name, maker);
    a.weight = weight;
    a.calories = calories;
    display(a);
}

void display(CandyBar & b)
{
    cout << b.name << endl;
    cout << b.weight << endl;
    cout << b.calories << endl;
}
