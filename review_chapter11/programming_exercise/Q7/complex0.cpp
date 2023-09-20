#define _CRT_SECURE_NO_WARNINGS 1

#include "complex0.h"
#include <iostream>

using std::cout;

Complex0::Complex0(double m_Re, double m_Im)
{
	Re = m_Re;
	Im = m_Im;
}


Complex0::Complex0()
{
	Re = Im = 0;
}


Complex0::~Complex0()
{
}


Complex0 Complex0::operator+(const Complex0 & add)
{
	Complex0 sum;
	sum.Re = Re + add.Re;
	sum.Im = Im + add.Im;
	return sum;
}


Complex0 Complex0::operator-(const Complex0 & min)
{
	Complex0 diff;
	diff.Re = Re - min.Re;
	diff.Im = Im - min.Im;
	return diff;
}


Complex0 Complex0::operator*(const Complex0 & n)
{
	Complex0 mult;
	mult.Re = Re * n.Re - Im * n.Im;
	mult.Im = Re * n.Im + Im * n.Re;
	return mult;
}


Complex0 Complex0::operator*(double n)
{
	Complex0 mult;
	mult.Re = Re * n;
	mult.Im = Im * n;
	return mult;
}


Complex0 Complex0::operator~()
{
	return Complex0(Re, -Im);
}


Complex0 operator*(double n, Complex0& complex)
{
	return complex * n;
}


std::ostream & operator<<(std::ostream & os, const Complex0 & com)
{
	os << "(" << com.Re << ", " << com.Im << "i)";
	return os;
}


std::istream & operator>>(std::istream & is, Complex0 & in)
{
	cout << "Enter the real part of complex number: ";
	is >> in.Re;
	cout << "Enter the imagination part of complex number: ";
	is >> in.Im;
	return is;
}
