#include <iostream>
// #include <array>
#include <string>

using namespace std;

const int Seasons = 4;
const char * Snames[4] = {"Spring", "Summer", "Fall", "Winter"};

void fill(const char * [], double *);
void show(const char * [], double *);

int main()
{
    double expenses[4];
    fill(Snames, expenses);
    show(Snames, expenses);

    return 0;
}

void fill(const char * pt [], double * pr)
{
    for(int i = 0; i < Seasons; i++)
    {
        cout << "Enter " << pt[i] << " expenses: ";
        cin >> pr[i];
    }
}

void show(const char * pt[], double * pa)
{
    double total = 0;
    cout << "\nEXPENSES\n";
    for(int i = 0; i < Seasons; i++)
    {
        cout << pt[i] << ": $" << pa[i] << endl;
        total += pa[i];
    }
    cout << "Total Expenses: $" << total << endl;
}