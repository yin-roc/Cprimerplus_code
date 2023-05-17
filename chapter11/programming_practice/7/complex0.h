#ifndef __COMPLEX0_H__
#define __COMPLEX0_H__

#include <iostream>

class Complex0
{
    public:
        double real;  
        double imaginary;
    public:
        Complex0(double m_real, double m_imaginary);
        Complex0();
        ~Complex0();
        Complex0 operator+(const Complex0 & add) const;
        Complex0 operator-(const Complex0 & min) const;
        Complex0 operator*(const Complex0 & mult) const;
        // Complex0 operator*(const double val) const;
        Complex0 operator~()const;

        friend Complex0 operator*(const double val, const Complex0 & mult);
        friend std::istream & operator>>(std::istream & is, Complex0 & com);
        friend std::ostream & operator<<(std::ostream & os, const Complex0 & com);

};


#endif