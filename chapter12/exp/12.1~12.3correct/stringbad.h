#ifndef STRINGBAD_H__
#define STRINGBAD_H__
#include <iostream>

class StringBad
{
    private:
        char *str;
        int len;
        static int num_strings;
    public:
        StringBad(const char *s);
        StringBad();
        ~StringBad();
        StringBad(const StringBad &st);
        int length() const {return len;}
        StringBad & operator=(const StringBad &st);
        friend std::ostream & operator<<(std::ostream & os, const StringBad & st);
};


#endif