#pragma once

#ifndef __ABC_H__
#define __ABC_H__
#include <iostream>

class ABC
{
private:
    char* label;
    int rating;
public:
    ABC(const char* l = "null", int r = 0);
    ABC(const ABC& rs);
    virtual ~ABC();
    ABC& operator=(const ABC& rs);
    friend std::ostream& operator<<(std::ostream& os, const ABC& rs);
    virtual void View() const;
};


class baseDMA : public ABC
{
public:
    baseDMA(const char* l = "null", int r = 0);
    baseDMA(const baseDMA& rs);
    virtual void View() const;

    //virtual ~baseDMA(); //没有new动态开辟内存空间
    //baseDMA& operator=(const baseDMA& rs); // 没有自己的数据部分，不需要自己定义赋值运算符
    //friend std::ostream& operator<<(std::ostream& os, const baseDMA& rs);
};


class lacksDMA : public ABC
{
private:
    enum { COL_LEN = 40 };
    char color[COL_LEN];
public:
    lacksDMA(const char* c = "blank", const char* l = "null", int r = 0);
    lacksDMA(const char* c, const ABC& rs);
    friend std::ostream& operator<<(std::ostream& os, const lacksDMA& rs);
    virtual void View() const;
};


class hasDMA : public ABC
{
private:
    char* style;
public:
    hasDMA(const char* s = "none", const char* l = "null", int r = 0);
    hasDMA(const char* s, const ABC& rs);
    hasDMA(const hasDMA& hs);
    ~hasDMA();
    hasDMA& operator=(const hasDMA& rs);
    friend std::ostream& operator<<(std::ostream& os, const hasDMA& rs);
    virtual void View() const;

};



#endif // !__ABC_H__

