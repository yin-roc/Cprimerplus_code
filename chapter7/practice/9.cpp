#include <iostream>

using namespace std;

const int SLEN = 30;
struct student 
{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};

int getinfo(student pa[], int n);
void display1(student st);
void display2(const student * ps);
void display3(const student pa[], int n);

int main()
{
    cout << "Enter class size: ";
    int class_size;
    cin >> class_size;
    while(cin.get() != '\n')
        continue;
    
    student * ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for(int i = 0; i < entered; i++)
    {
        display1(ptr_stu[i]);
        cout << endl;
        display2(&ptr_stu[i]);
        cout << endl;
    }
    display3(ptr_stu, entered);
    delete [] ptr_stu;
    cout << "Done\n";
    return 0;
}

int getinfo(student pa[], int n)
{
    int i = 0;
    while(i < n)
    {
        cout << "Enter the "<< i+1 << " full name: " << endl;
        cin.get(pa[i].fullname, SLEN).get();
        if(pa[i].fullname == "\n")
            break;
        
        cout << "Enter the " << i+1 << " hobby: " << endl;
        cin.get(pa[i].hobby, SLEN).get();

        cout << "Enter the " << i+1 << " ooplevel: " << endl;
        cin >> pa[i].ooplevel;
        cin.get();
        i++;
    }
    return i;
}


void display1(student st)
{
    cout << "Full name: " << st.fullname << endl;
    cout << "Hobby: " << st.hobby << endl;
    cout << "Ooplevel: " << st.ooplevel << endl;
}


void display2(const student * ps)
{
    cout << "Full name: " << ps->fullname << endl;
    cout << "Hobby: " << ps->hobby << endl;
    cout << "Ooplevel: " << ps->ooplevel << endl;
}


void display3(const student pa[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << "Full name: " << (pa + i)->fullname << endl;
        cout << "Hobby: " << (pa + i)->hobby << endl;
        cout << "Ooplevel: " << (pa + i)->ooplevel << endl;
    }
}

