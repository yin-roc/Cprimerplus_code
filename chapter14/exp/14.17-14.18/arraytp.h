//
// Created by yin on 2023-10-16.
//

#ifndef __ARRAYTP_H__
#define __ARRAYTP_H__

#include <iostream>
#include <cstdlib>

template <class T, int n>
class ArrayTP {
private:
    T ar[n];
public:
    ArrayTP(){};
    explicit ArrayTP(const T & v);
    virtual T & operator[](int i);
    virtual T operator[](int i) const;
};

//
template<class T, int n>
ArrayTP<T, n>::ArrayTP(const T & v)
{
    for(int i = 0; i < n; i++)
        ar[i] = v;
}
//
template <class T, int n>
T & ArrayTP<T, n>::operator[](int i)
{
    if(i < 0 || i >= n)
    {
        std::cout << "error.\n";
    }
    return ar[i];
}
//
template <class T, int n>
T ArrayTP<T, n>::operator[](int i) const
{
    if(i < 0 || i >= n)
    {
        std::cout << "error.\n";
    }
    return ar[i];
}

#endif //INC_14_17_14_18_ARRAYTP_H
