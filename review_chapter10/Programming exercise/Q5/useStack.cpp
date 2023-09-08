#include <iostream>
#include "Stack.h"

using namespace std;

int main(void)
{
    Stack st;
    customer cust;
    char ch;
    double sum = 0.0;
    // unsigned long po;
    cout  << "Please enter A to add a purchase order,\n"
            << "P to process a PO, or Q to quit.\n";
    while (cin >> ch && toupper(ch)!= 'Q')
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
            case 'a': 
                cout << "Enter the fullname of customer: ";
                cin.getline(cust.fullname, 35);

                cout << "Enter the payment of customer: ";
                cin >> cust.payment;

                if(st.isfull())
                    cout << "stack already full\n";
                else
                {
                    st.push(cust);
                }
                break;

            case 'P':
            case 'p':
                if(st.isEmpty())
                    cout << "stack already empty\n";
                else
                {
                    st.pop(cust);
                    cout << "Customer's fullname: " << cust.fullname << " is popped\n";
                    cout << "Customer's payment: " << cust.payment << " is popped\n";
                    sum += cust.payment;
                }
                break;
        }
        cout << "Sum is " << sum << endl;

        cout << "Please enter A to add a purchase order,\n"
            << "P to process a PO, or Q to quit.\n";
    }
    cout << "Bye\n";
    return 0;
}