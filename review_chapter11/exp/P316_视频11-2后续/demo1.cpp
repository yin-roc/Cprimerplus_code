#include <iostream>

using namespace std;

class Num
{
    public:
        int n;
    public:
        Num();
        Num(int m);
        void Show() const;
};

Num::Num()
{
    n = 0;
}

Num::Num(int m)
{
    n = m;
}

void Num::Show() const
{
    cout << "n = " << n << endl;
}

// 非成员函数实现函数重载
Num operator+(const Num &m, const Num &l)
{
    Num temp;
    temp.n = m.n + l.n; //非成员函数不能使用类的隐藏数据，因此需要将n改为public类型
    return temp;
}

int main(void) 
{
    Num a(10);
    a.Show();
    
    Num b(20);
    b.Show();

    Num c;
    c = a + b;
    c.Show();
    

    return 0;
}