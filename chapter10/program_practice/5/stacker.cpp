#include <iostream>
#include "stack.h"
#include "cctype"

int main()
{
    using namespace std;
    Stack st;
    customer cust;
    char ch;
    // unsigned long po;
    double total = 0.0;
    cout << "Please enter A to add a purchase order,\n"
         << "P to process a PO, or Q to quit.\n";
    while(cin >> ch && toupper(ch) != 'Q')
    {
        while(cin.get() != '\n')
            continue;
        if(!isalpha(ch))
        {
            cout << '\a';
            continue;
        }
        switch(ch)
        {
            case 'A':
            case 'a':   cout << "Enter the fullname of customer you want push to stack: ";
                        cin.getline(cust.fullname, 35);
                        cout << "Enter the payment of customer you want push to stack: ";
                        cin >> cust.payment;
                        cin.get();
                        if(st.isfull())
                            cout << "stack already full\n";
                        else    
                            st.push(cust);
                        break;
            case 'p':
            case 'P':   if (st.isempty())
                            cout << "stack already empty\n";
                        else
                        {
                            st.pop(cust);
                            total += cust.payment;
                            cout << "fullname: " << cust.fullname << " is popped\n";
                            cout << "payment: " << cust.payment << " is popped\n";
                            cout << "total: " << total << endl;
                        }
                        break;
        }
        cout << "Please enter A to add a purchase order,\n"
             << "P to process a customer, or Q to quit.\n";
    }
    cout << "Bye\n";
    return 0;
}