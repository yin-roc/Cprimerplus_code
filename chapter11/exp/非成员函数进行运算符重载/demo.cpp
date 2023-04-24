#include <iostream>

using namespace std;

class Num
{
    public: //变化处
        int n;
    public:
        Num();
        Num(int m);
        // Num operator+(const Num & t) const;
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

Num operator+(const Num &m, const Num &l)
{
    Num temp;
    temp.n = m.n + l.n;
    return temp;
}

void Num::Show() const
{
    cout << "n = " << n << endl;
}

int main()
{
    Num a(10);
    a.Show();
    
    Num b(20);
    b.Show();

    Num c;
    c = a + b;
    c.Show();

    Num d = operator+(c, a);
    d.Show();
    


}