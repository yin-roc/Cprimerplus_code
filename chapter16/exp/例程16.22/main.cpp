#include <iostream>
#include <initializer_list>

double sum(std::initializer_list<double> il);
double average(const std::initializer_list<double> & ril);

int main() {
    using std::cout;

    cout << "List: 1: sum = " << sum({2, 3, 4})
         << ", ave = " << average({2, 3, 4}) << '\n';
    std::initializer_list<double> d1 = {1.1, 2.2, 3.3, 4.4, 5.5};
    cout << "List: 2: sum = " << sum(d1)
         << ", ave = " << average(d1) << '\n';

    return 0;
}

double sum(std::initializer_list<double> il)
{
    double tot = 0;
    for(auto p = il.begin(); p != il.end(); p++)
        tot += *p;
    return tot;
}

double average(const std::initializer_list<double> & ril)
{
    double tot = 0;
    int n = ril.size();
    double ave = 0.0;
    if(n > 0)
    {
        for(auto p = ril.begin(); p != ril.end(); p++)
            tot += *p;
        ave = tot / n;
    }
    return ave;
}
