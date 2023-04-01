#include <iostream>

using namespace std;

double Harmonic_mean(double , double );

int main()
{
    double x, y;
    cout << "Please enter two number: \n";

    while(cin >> x >> y)
    {    
        if(x == 0 || y == 0)
            break;
        double mean = Harmonic_mean(x, y);
        cout << "The Harmonic mean of " << x << " and " << y << " is " << mean << endl;
        cout << "Enter again\n";
    }
    return 0;
}

double Harmonic_mean(double m, double n)
{
    return (2.0 * m * n / (m + n));
}