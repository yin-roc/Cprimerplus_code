#include <iostream>

using namespace std;

class Num
{
    private:
        int n;
    public:
        Num();
        Num(int m);
        Num operator+(const Num &t) const; // 成员函数实现重载
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

Num Num::operator+(const Num &t) const
{
    Num temp;
    temp.n = n + t.n;
    return temp;
}

void Num::Show() const
{
    cout << "n = " << n << endl;
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