#include <iostream>

using namespace std;

class Num
{
    private:
        int n;
    public:
        Num();
        Num(int m);
        void operator=(int l);

};

Num::Num()
{
    n = 0;
    cout << "Hello world" << endl;
}

Num::Num(int m)
{
    n = m;
    cout << "Good morning" << endl;
}

void Num::operator=(int l)
{
    n = l;
    cout << "I love you, Rick" << endl;
}


int main()
{
    Num a;
    a = 10; // 默认调用了自定义构造函数
    // 当类中并没有定义赋值运算符重载功能时，代码中出现类似于赋值操作（例如上面语句）时，程序便会调用与赋值语句中右侧的值的类型相匹配的构造函数。
    
    return 0;
}