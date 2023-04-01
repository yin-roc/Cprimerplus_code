#include <iostream>
#include <string>
using namespace std;

const int ArSize = 5;
const double Donation = 10000;
struct fund
{
    // char name[ArSize];
    string str1;
    double donation;
};

int main()
{
    fund *pt = new fund [ArSize];
    int i = 0;
    int count1 = 0;
    int count2 = 0;
    while(i < ArSize)
    {
        cout << "Enter the " << i+1 << " donators' name: " << endl;
        getline(cin, pt[i].str1);
        
        cout << "Enter the " << i+1 << " donators' donation: " << endl;
        cin >> pt[i].donation;
        i++;
        cin.get();
    }
    
    cout << "The following are Grand Patrons: " << endl;
    for(int j = 0; j < ArSize; j++)
    {
        if(pt[j].donation > Donation)
        {
            cout << pt[j].str1 << ", " << pt[j].donation << endl;
            count1++;
        }    
    }
    if(0 == count1)
    cout << "none" << endl;

    cout << "The following are Patrons: " << endl;
    for(int j = 0; j < ArSize; j++)
    {
        if(pt[j].donation <= Donation)
        {
            cout << pt[j].str1 << ", " << pt[j].donation << endl;
            count2++;
        }    
    }
    if(0 == count2)
    cout << "none" << endl;

    delete [] pt;
    return 0;

}