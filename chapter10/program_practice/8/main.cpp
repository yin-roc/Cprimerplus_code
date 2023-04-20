#include <iostream>
// #include <cctype>
#include "list.h"

int main()
{
    using namespace std;
    List list;
    Item num;

    for(int i = 0; i < 10; i++)
    {
        cout << "Please enter a number: " << endl;
        cin >> num;
        list.add(num);
    }
    list.visit(visit_item);

    return 0;
}