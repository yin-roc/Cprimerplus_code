#include <iostream>

using namespace std;

double add(double , double );
double Minus(double , double );
double calculate(double ,double, double (*)(double, double));

int main()
{
    double x, y;
    cout << "Enter two number: " << endl;
    while(cin >> x >> y)
    {
        double sum = calculate(x, y, add);
        double difference = calculate(x, y, Minus);
        cout << "Sum  is " << sum << endl;
        cout << "Difference  is " << difference << endl;

        cout << endl << "Next two numbers(q to quit): " << endl;
    }

    return 0;
}

double add(double x, double y)
{
    return x + y;
}

double Minus(double x, double y)
{
    return x - y;
}

double calculate(double x, double y, double (*pt)(double, double))
{
    return (*pt)(x, y);
}
