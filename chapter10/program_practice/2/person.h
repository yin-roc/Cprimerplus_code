#ifndef __PERSON_H__
#define __PERSON_H__

#include "string"

class Person
{
    private:
        static const int LIMIT = 25;
        std::string lname;
        char fname[LIMIT];
    public:
        Person() {lname = ""; fname[0] = '\0';}
        Person(const std::string & ln, const char *fn = "Heyyou");
        void Show() const;
        void FormalShow() const;

};

#endif