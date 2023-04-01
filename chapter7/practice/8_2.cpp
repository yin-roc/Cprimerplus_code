#include <iostream>
// #include <array>
#include <string>

using namespace std;

const int Seasons = 4;
const char * Snames[4] = {"Spring", "Summer", "Fall", "Winter"};
struct expenses
{
    double expenses[Seasons];
};
void fill(const char * [], expenses *);
void show(const char * [], expenses *);



int main()
{
    // double expenses[4];
    expenses *pt = new expenses;
    fill(Snames, pt);
    show(Snames, pt);

    return 0;
}

void fill(const char * pt [], expenses * pr)
{
    for(int i = 0; i < Seasons; i++)
    {
        cout << "Enter " << pt[i] << " expenses: ";
        cin >> pr->expenses[i];
    }
}

void show(const char * pt[], expenses * pa)
{
    double total = 0;
    cout << "\nEXPENSES\n";
    for(int i = 0; i < Seasons; i++)
    {
        cout << pt[i] << ": $" << pa->expenses[i] << endl;
        total += pa->expenses[i];
    }
    cout << "Total Expenses: $" << total << endl;
}