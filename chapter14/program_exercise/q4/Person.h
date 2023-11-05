//
// Created by yin on 2023-11-01.
//

#ifndef Q4_PERSON_H
#define Q4_PERSON_H
#include <string>
#include <iostream>
#include <ctime>

using std::string;
using std::cout;
using std::endl;

class Person {
private:
    string firstname;
    string lastname;
public:
    Person() : firstname("No"), lastname("body") {}
    Person(const string m_firstname, const string m_lastname) : firstname(m_firstname), lastname(m_lastname) {}
    ~Person(){}
    void Show() const {cout << "name: " << firstname << " " << lastname << endl;}
};

class Gunslinger : virtual public Person{
private:
    double draw;
    int nickings;
public:
    Gunslinger() : Person("No", "No"), draw(0.0), nickings(0){}
    Gunslinger(double m_draw, int m_nickings)
            : Person(), draw(m_draw), nickings(m_nickings) {}
    Gunslinger(string m_first_name, string m_last_name, double m_draw, int m_nickings)
                : Person(m_first_name, m_last_name), draw(m_draw), nickings(m_nickings) {}
    ~Gunslinger(){}
    double Draw() {return draw;}
    void Show() const { cout << "draw: " << draw << ", Nickings: " << nickings << endl;}
};

class PokerPlayer : virtual public Person{
public:
    PokerPlayer() : Person() {}
    PokerPlayer(string s1, string s2) : Person(s1, s2) {}
    ~PokerPlayer() {}
    int Draw() {
        std::srand(static_cast<unsigned int>(std::time(nullptr)));
        int randomValue = std::rand() % 52 + 1;
        return randomValue;
    }
    void Show() {Person::Show();}
};

class BadDude : public Gunslinger, public PokerPlayer
{
public:
    BadDude() : Person(), Gunslinger(), PokerPlayer(){}
    BadDude(string m_firstname, string m_lastname, double m_draw, int m_nickings) : Person(m_firstname, m_lastname), Gunslinger(m_firstname, m_lastname,m_draw, m_nickings), PokerPlayer(m_firstname, m_lastname){}

    ~BadDude(){}
    double Gdraw() { return Gunslinger::Draw(); }
    int Cdraw() { return PokerPlayer::Draw();}
    void Show() { cout << "坏蛋拔枪的时间：" << Gdraw() << endl;
                    cout << "下一张扑克牌: " << Cdraw() << endl;
    }
};

#endif //Q4_PERSON_H
