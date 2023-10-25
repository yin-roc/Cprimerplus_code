#include <iostream>
#include <cstring>
using namespace std;

class Frabjous{
private:
    char fab[20];
public:
    Frabjous(const char * s = "C++")  {
        strcpy(fab, s);
    }
    virtual void tell() {cout << fab << endl;}
};

class Gloam{
private:
    int glip;
    Frabjous fb;
public:
    Gloam(int g = 0, const char * s = "C++");
    Gloam(int g, const Frabjous & f);
    void tell();
};

Gloam::Gloam(int g, const char * s) : glip(g), fb(s) {}

Gloam::Gloam(int g, const Frabjous &f) : glip(g), fb(f) {}

void Gloam::tell() {
    cout << "glip: " << glip << endl;
    fb.tell();
}

int main(void)
{
    Frabjous s1 = "i like C++";
    s1.tell();

    Gloam g1(10);
    Gloam g2(20, s1);
    g1.tell();
    g2.tell();

    return 0;
}





