#include <iostream>
#include <cstring>

using namespace std;

struct stringy
{
    char *str;
    int ct;
};

void set(stringy &, char *);
void show(stringy & a, int num = 1);
void show(const char * pt, int n = 1);

int main(void)
{
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";

    set(beany, testing);
    show(beany);
    show(beany, 2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show("Done!");
    return 0;
}

// void set(stringy & a, char *pt)
// {
//     int i = 0;
//     while(pt[i] != '\0')
//     {
//         a.str[i] = pt[i];
//         i++;
//     }
//     a.str[i] = '\0';
// }

void set(stringy & sty, char *st)
{
    sty.ct = strlen(st);
    sty.str = new char[sty.ct];
    strcpy(sty.str, st);
}


void show(stringy & a, int num)
{
    for(int i = 0; i < num; i++)
    {
        //引用了beany
        cout << a.str << endl;
    }
    a.ct = 5;
}

void show(const char * pt, int n)
{
    // pt = new char;
    for(int i = 0; i < n; i++)
    {
        cout << pt << endl;
    } 
    // delete pt;
}

