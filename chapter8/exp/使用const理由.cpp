//理由2：使用const使函数能够处理const和非const实参，否则将只能接受非const数据 

#include <iostream>

using namespace std;

double cube(double);
double refcube(const double &ra);

int main()
{
    double x = 3.0;
    const double y = 5.0;
    cout << cube(x);
    cout << " = cube of " << x << endl;
    cout << refcube(y);//变化点，传入了const参数
    cout << " = cube of " << y << endl;
    return 0;
}

double cube(double a)
{
    a *= a * a;
    return a;
}

double refcube(const double &ra)
{
    return ra * ra * ra;
}