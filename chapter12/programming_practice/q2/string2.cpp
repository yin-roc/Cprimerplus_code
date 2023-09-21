#define _CRT_SECURE_NO_WARNINGS 1

#include <cstring>
#include "string2.h"
#include <iostream>
using std::cin;
using std::cout;

int String::num_strings = 0;

int String::HowMany()
{
    return num_strings;
}


String::String(const char* s)
{
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    //str[len] = '\0';
    num_strings++;
}


String::String()
{
    len = 4;
    str = new char[1];
    str[0] = '\0';
    num_strings++;
}


String::String(const String& st)
{
    num_strings++;
    len = st.len;
    str = new char[len + 1];
    std::strcpy(str, st.str);
    //str[len] = '\0';

}


String::~String()
{
    --num_strings;
    delete[] str;
}


String& String::operator=(const String& st)
{
    if (this == &st)
        return *this;
    delete[] str;
    len = st.len;
    str = new char[len + 1];
    std::strcpy(str, st.str);
    //str[len] = '\0';
    return *this;
}


String& String::operator=(const char* s)
{
    delete[] str;
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    //str[len] = '\0';
    return *this;
}


char& String::operator[](int i)
{
    return str[i];
}


const char& String::operator[](int i) const
{
    return str[i];
}


String String::operator+(const String& st)
{
    String mergedString;
    mergedString.len = len + st.len;
    mergedString.str = new char[mergedString.len + 1];
    strcpy(mergedString.str, str);
    strcat(mergedString.str, st.str);
    //str[mergedString.len] = '\0';
    return mergedString;
}


String operator+(const char* s, const String& st)
{
    String mergedString;
    mergedString.len = strlen(s) + st.len;
    mergedString.str = new char[mergedString.len + 1];
    strcpy(mergedString.str, s);
    strcat(mergedString.str, st.str);
    //mergedString.str[mergedString.len] = '\0';
    return mergedString;
}


void String::stringlow()
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (isupper(str[i]))
            str[i] = tolower(str[i]);
        i++;
    }
}


void String::stringup()
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (islower(str[i]))
            str[i] = toupper(str[i]);
        i++;
    }

}


int String::has(char ch)
{
    int i = 0;
    int count = 0;
    while (str[i] != '\0')
    {
        if (str[i] == ch)
            count++;
        i++;
    }
    return count;
}



bool operator<(const String& st1, const String& st2)
{
    return (std::strcmp(st1.str, st2.str) < 0);
}

bool operator>(const String& st1, const String& st2)
{
    return st2 < st1;
}

bool operator==(const String& st1, const String& st2)
{
    return (std::strcmp(st1.str, st2.str) == 0);
}

ostream& operator<<(ostream& os, const String& st)
{
    os << st.str;
    return os;
}

istream& operator>>(istream& is, String& st)
{
    char temp[String::CINLIM];
    is.get(temp, String::CINLIM);
    if (is)
        st = temp;
    while (is && is.get() != '\n')
        continue;
    return is;
}