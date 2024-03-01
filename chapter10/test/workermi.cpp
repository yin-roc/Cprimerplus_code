
#include "workermi.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

//----------------------- Worker-------------------------//
//Worker::~Worker() {}

void Worker::Get()
{
	cout << "Enter worker's name: ";
	getline(cin, fullname);
	cout << "Enter worker's ID: ";
	cin >> id;
	while (cin.get() != '\n')
		continue;
}


void Worker::Data() const
{
	cout << "Name: " << fullname << "\n";
	cout << "Employee ID: " << id << "\n";
}


//------------------- Waiter -------------------------------//
void Waiter::Get()
{
	cout << "Enter waiter's panache rating: ";
	cin >> panache;
	while (cin.get() != '\n')
		continue;
}


void Waiter::Data() const
{
	cout << "Panache rating: " << panache << endl;
}

void Waiter::Set()
{
	cout << "Enter waiter's name: ";
	Worker::Get();
	Get();
}


void Waiter::Show() const
{
	cout << "Category: waiter\n";
	Worker::Data();
	Data();
}

//------------------------ Singer ----------------------------------------------------------//
const char* Singer::pv[] = { "other", "alto", "contralto", "soprano", "bass", "baritone", "tenor" };

void Singer::Get()
{
	int i;
	for (i = 0; i < Vtypes; i++)
	{
		cout << i << ": " << pv[i] << " ";
		if (i % 4 == 3)
			cout << endl;
	}
	if (i % 4 != 0)
		cout << endl;
	/*while (cin >> voice && (voice < 0 || voice >= Vtypes))*/
		cout << "Please enter a value >= 0 and < " << Vtypes << endl;
		cin >> voice;

	while (cin.get() != '\n')
		continue;
}


void Singer::Data() const
{
	cout << "Voice range: " << pv[voice] << endl;
}


void Singer::Set()
{
	cout << "Enter singer's name: ";
	Worker::Set();
	Get();
}


void Singer::Show() const 
{
	cout << "Category: singer\n";
	Worker::Data();
	Data();
}


//--------------------SingingWaiter----------------------------//
void SingingWaiter::Data() const
{
	Singer::Data();
	Waiter::Data();
}


void SingingWaiter::Get()
{
	Waiter::Get();
	Singer::Get();
}


void SingingWaiter::Set()
{
	cout << "Enter singing waiter's name: ";
	Worker::Get();
	Get();
}


void SingingWaiter::Show() const
{
	cout << "Category: singing waiter\n";
	Worker::Data();
	Data();
}