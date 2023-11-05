#include <iostream>
#include "Person.h"


using namespace  std;

int main() {
    Person p1;
    Person p2("yin", "peng");
    p1.Show();
    p2.Show();

    Gunslinger gun1;
    Gunslinger gun2("Jack", "Jeston", 12.138, 5);
    gun1.Show();
    int d1 = gun1.Draw();
    gun2.Show();
    int d2 = gun2.Draw();
    cout << "d1: " << d1 << ", d2: " << d2 << endl;

    PokerPlayer pp1;
    int d3 = pp1.Draw();
    cout << "d3: " << d3 << endl;
    pp1.Show();

    BadDude b1;
    double d4 = b1.Gdraw();
    int d5 = b1.Cdraw();
    cout << "d4: " << d4 << ", d5: " << d5 << endl;
    b1.Show();

    return 0;
}
