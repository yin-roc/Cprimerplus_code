#include <iostream>
#include "List.h"

using namespace std;

int main(void)
{
    List list;
    Item num;

    for(int i = 0; i < 5; i++)
    {
        cout << "Please enter a number: " << endl;
        cin >> num;
        list.add(num);
    }
    
    list.visit(visit_item);


    return 0;
}