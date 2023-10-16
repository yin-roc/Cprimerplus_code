#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <cctype>
#include "stack.h"

using namespace std;
const int Num = 10;

int main()
{
	int nextin = 0;
	int processed = 0;
    const char* in[Num] = {
		"1: Hank Gilgamesh", "2: Kiki Ishtar",
		"3: Betty Rocker", "4: Ian Flagranti",
		"5: Wolfgang Kibble", "6: Portia Koop",
		"7: Joy Almondo", "8: Xaverie Paprika",
		"9: Juan Moore", "10: Misha Mache"
    };

	Stack<const char*> st;
	while (!st.isfull())
	{
		st.push(in[nextin++]);
	}

	const char* out[Num];
	while (!st.isempty())
	{
		st.pop(out[processed++]);
	}
	for (int i = 0; i < Num; i++)
		cout << out[i] << endl;

    return 0;
}
