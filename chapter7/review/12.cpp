#include <iostream>
#include <cstring>
using namespace std;
void show_struct(struct applicant);
void show_struct1(struct applicant *pr);

struct applicant
{
    char name[30];
    int credit_rating[3];
};

int main()
{
    // int max = 0;
    struct applicant app1 = {"Yin p", {99,98}};
    struct applicant * pt = new struct applicant;
    // struct applicant * pt;

    strcpy(pt->name, "Yin peng");
    pt->credit_rating[0] = 100;
    show_struct(app1);
    show_struct1(pt);
    
    delete pt;
    return 0;

}

void show_struct(struct applicant app2)
{
    cout << app2.name << endl;
    cout << app2.credit_rating[2] << endl;
}

void show_struct1(struct applicant *pr)
{
    cout << pr->name << endl;
    cout << pr->credit_rating[0] << endl;
}