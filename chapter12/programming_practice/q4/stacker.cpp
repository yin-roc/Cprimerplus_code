#include <iostream>
#include <cctype>
#include "stack.h"

const int MAX = 5;

int main()
{
    using namespace std;
    Item item;
    Stack st(MAX);
    for(int i = 0; i < MAX; i++)
    {
        cout << "Enter a number you want to push to stack:" << endl;
        cin >> item;
        while(cin.get() != '\n');
        st.push(item);
    }

    Stack st_new(st);
    for(int i = 0; i < MAX; i++)
    {
        st_new.pop(item);
        cout << item << " is popped." << endl;
    }

    return 0;
}