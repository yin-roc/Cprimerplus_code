#include <iostream>

using namespace std;
int main()
{
    int a = 1;
    double b = 3.7;

    cout << a << " " << b << endl;

    return 0;
}


const double * f1(const double ar[], int n);
const double * f2(const double [], int);
const double * f3(const double *, int);
const double *(*pa[3])(const double *, int) = {f1, f2, f3};

const double *(*pa[3])(const double *, int) = {f1, f2, f3};
const double *(**pb)(const double *,int) = pa;