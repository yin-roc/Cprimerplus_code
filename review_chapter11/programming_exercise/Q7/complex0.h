#pragma once
#ifndef __COMPLEX0_H__
#define __COMPLEX0_H__
#include <iostream>

class Complex0
{
	private:
		double Re;
		double Im;
	public:
		Complex0(double m_Re, double m_Im);
		Complex0();
		~Complex0();
		Complex0 operator+(const Complex0 & add);
		Complex0 operator-(const Complex0 & min);
		Complex0 operator*(const Complex0 & n);
		Complex0 operator*(double n);
		Complex0 operator~();

		friend Complex0 operator*(double n, Complex0& complex);
		friend std::ostream & operator<<(std::ostream& os, const Complex0& complex);
		friend std::istream & operator>>(std::istream & is, Complex0 & in);
};

#endif // !__COMPLEX0_H__

