#ifndef __PERSON_H__
#define __PERSON_H__
#include <iostream>
#include <string>

using std::string;

class Person
{
    private:
        static const int LIMIT = 25;
        string lname;
        char fname[LIMIT];

    public:
        Person();
        Person(const string & ln, const char * fn = "Heyyou");
        void show() const;
        void FormalShow() const;
};

#endif // !__PERSON_H__
