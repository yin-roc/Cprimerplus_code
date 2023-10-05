#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include "Port.h"

using namespace std;

int main()
{
	Port p1("nike", "fashion", 20);
	p1.Show();
	VintagePort vp1("Nike", "commom", 30, "Noble", 1988);
	vp1.Show();
	cout << vp1 << endl;

	VintagePort vp2 = VintagePort("addias", "cheap", 25 , "Old Velvet", 1990);
	cout << vp2 << endl;
	VintagePort vp3 = vp1;
	cout << vp3 << endl;

	return 0;
}