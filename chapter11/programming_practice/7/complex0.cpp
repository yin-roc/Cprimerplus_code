#include <iostream>
#include "complex0.h"

Complex0::Complex0(double m_real, double m_imaginary)
{
    real = m_real;
    imaginary = m_imaginary;
}


Complex0::Complex0()
{
    real = imaginary = 0;
}


Complex0::~Complex0()
{

}


Complex0 Complex0::operator+(const Complex0 & add) const
{
    return Complex0(real + add.real, imaginary + add.imaginary);
}


Complex0 Complex0::operator-(const Complex0 & min) const
{
    return Complex0(real - min.real, imaginary - min.imaginary);
}


Complex0 Complex0::operator*(const Complex0 & mult) const
{
    return Complex0(real * mult.real - imaginary * mult.imaginary, real * mult.imaginary + imaginary * mult.real);
}


Complex0 Complex0::operator~() const
{
    return Complex0(real, -imaginary);
}


Complex0 operator*(const double val, const Complex0 & mult)
{
    return Complex0(val * mult.real, val * mult.imaginary);
}


std::istream & operator>>(std::istream & is, Complex0 & com)
{
    // std::cout << "Enter a complex number (q to quit): " << std::endl;
    // std::cout << "real: ";
    is >> com.real >> com.imaginary;
    // std::cout << "imaginary: ";
    // is >> com.imaginary;
    return is;
}


std::ostream & operator<<(std::ostream & os, const Complex0 & com)
{
    // os << "( " << com.real << ", " << com.imaginary << ")" << std::endl;
    // return os;
    os << "real = " << com.real << ", imaginary = " << com.imaginary << std::endl;
    return os;
}





