#include "Cow.h"
#include <iostream>
#include <cstring>

using namespace std;

Cow::Cow()
{
    strcpy(name, "\0");
    hobby = new char[1];
    strcpy(hobby, "\0");
    weight = 0;
}


Cow::Cow(const char* m_nm, const char* m_ho, double m_wt)
{
    strncpy(name, m_nm, 20);
    if(strlen(m_nm) >= 20)
        name[19] = '\0';
    int len = strlen(m_ho);
    hobby = new char[len + 1];
    strcpy(hobby, m_ho);
    weight = m_wt;
}


Cow::Cow(const Cow & c)
{
    strcpy(name, c.name);
    hobby = new char[strlen(c.hobby) + 1];
    strcpy(hobby, c.hobby);
    weight = c.weight;
}


Cow::~Cow()
{
    cout << name << " deleted!" << endl;
    delete [] hobby;
}


Cow & Cow::operator=(const Cow & c)
{
    if(this == &c)
        return *this;
    delete [] hobby;
    strcpy(name, c.name);
    hobby = new char[strlen(c.hobby) + 1];
    strcpy(hobby, c.hobby);
    weight = c.weight;
    return *this;
}


void Cow::ShowCow() const
{
    cout << "name: " << name << endl;
    cout << "hobby: " << hobby << endl;
    cout << "weight: " << weight << endl;
}