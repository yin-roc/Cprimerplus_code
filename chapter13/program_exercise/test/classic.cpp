#include "Cd.h"
#include "classic.h"
#include <iostream>
#include <cstring>

using namespace std;
const int ArSize = 50;

Classic::Classic(const char* str, char* sl, char* s2, int n, double x) : Cd(char* sl, char* s2, int n, double x)
{
	strncpy_s(Major_work, str, ArSize);
}


Classic(const Classic& cla);
Classic();
~Classic();
virtual void Report() const;
