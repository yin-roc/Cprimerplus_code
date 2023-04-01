#include <iostream>
#include <string>

using namespace std;

struct free_throws
{
    string name;
    int made;
    int attempts;
    float percent;    
};

void set_pc(free_throws & ft);

int main()
{
    free_throws one = {"Ifelsa Branch", 13, 14};
    
    set_pc(one);

    cout << one.percent << endl;


    return 0;
}

void set_pc(free_throws & ft)
{
    if(ft.attempts != 0)
        ft.percent = 100 * float(ft.made) / float(ft.attempts);
    else
        ft.percent = 0;

}


free_throws & accumulate(free_throws & target, const free_throws & source)
{
    return target;
}
const free_throws & clone2(free_throws & ft)
{
    free_throws newguy;
    newguy = ft;
    return newguy;
}