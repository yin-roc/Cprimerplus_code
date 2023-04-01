#include <iostream>
#include <cstring>
using namespace std;
const int strsize = 20;
const int ArSize = 5;

struct bop
{
    char fullname[strsize];
    char title[strsize];
    char bopname[strsize];
    int preference;
};


int main()
{
    char ch;
    bop *pt = new bop [ArSize];
    strcpy(pt[0].fullname, "Wimp Macho");
    strcpy(pt[1].fullname, "Raki Rhodes");
    strcpy(pt[2].fullname, "Celia Laiter");
    strcpy(pt[3].fullname, "Hoppy Hipman");
    strcpy(pt[4].fullname, "Pat Hand");
    // strcpy(pt[5].fullname, "Junior Programmer");
    // strcpy(pt[6].fullname, "MIPS");
    // strcpy(pt[7].fullname, "Analyst Trainee");
    // strcpy(pt[8].fullname, "LOOPY");
    strcpy(pt[0].title, "Wimp Macho");
    strcpy(pt[1].title, "Junior Programmer");
    strcpy(pt[2].title, "MIPS");
    strcpy(pt[3].title, "Analyst Trainee");
    strcpy(pt[4].title, "LOOPY");
    


    cout << "Benevolent Order of Programmers Report\n"
            "a. display by name     b. display by title\n"
            "c. display by bopname  d. display by perference\n"\
            "q. quit\n";

    cout << "Enter your choice: " << endl;
    
    // cin.get(ch).get();
    while(cin.get(ch))
    {
        cin.get();
        if(ch == 'q')
            break;
        switch(ch)
        {
            case 'a':   
                for(int i = 0; i < ArSize; i++)
                    cout << pt[i].fullname << endl;
                break;
            case 'b':break;
            case 'c':break;
            case 'd': 
                for(int i = 0; i < ArSize; i++)
                    cout << pt[i].title << endl;
                break;
                
        }
        cout << "Next choice: " << endl;
         
    }
    cout << "Bye!" << endl;

    return 0;
}