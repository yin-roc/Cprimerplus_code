#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include "workermi.h"
#include <cstring>
const int SIZE = 3;

int main()
{
	using std::cin;
	using std::cout;
	using std::endl;
	using std::strchr;

	Worker * lolas[SIZE];

	int ct;
	for (ct = 0; ct < SIZE; ct++)
	{
		char choice;
		cout << "Enter the employee category:\n"
		<< "w: waiter, s:singer, t:singing waiter, q:quit\n";
		cin >> choice;
		while (strchr("wstq", choice) == NULL)
		{
			cout << "Please enter a w, s, t or q: ";
			cin >> choice;
		}
		if (choice == 'q')
			break;
		switch (choice)
		{
		case 'w': 
			lolas[ct] = new Waiter;
			break;
		case 's': 
			lolas[ct] = new Singer;
			break;
		case 't': 
			lolas[ct] = new SingingWaiter;
			break;
		}
		while (cin.get() != '\n')
			continue;
		lolas[ct]->Set();
	}
	cout << "\nHere is your staff:\n";
	int i;
	for (i = 0; i < ct; i++)
	{
		cout << endl;
		lolas[i]->Show();
	}
	for (i = 0; i < ct; i++)
		delete lolas[i];
	cout << "Bye.\n";

	return 0;
}