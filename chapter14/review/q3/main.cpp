#include <iostream>
#include <cstring>
using namespace std;

class Frabjous{
private:
    char fab[20];
public:
    Frabjous(const char * s = "C++") {
        strcpy(fab, s);
    }
    virtual void tell() { cout << fab << endl;}
};

class Gloam : private Frabjous{
private:
    int glip;
public:
    Gloam(int g = 0, const char * s = "C++");
    Gloam(int g, const Frabjous & f);
    void tell();
};

Gloam::Gloam(int g, const char * s) : glip(g), Frabjous(s) {}

Gloam::Gloam(int g, const Frabjous &f) : glip(g), Frabjous(f) {}

void Gloam::tell() {
    cout << "glip: " << glip << endl;
    Frabjous::tell();
}

int main()
{
    Frabjous frab1("hello world");
    frab1.tell();

    Gloam glo1(10, "good morning");
    Gloam glo2(20, frab1);
    glo1.tell();
    glo2.tell();
    return 0;
}