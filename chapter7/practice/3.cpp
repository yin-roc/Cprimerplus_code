#include <iostream>
#include <cstring>
using namespace std;

struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};
void pass_by_value(box);
void pass_by_address(box *);

int main()
{
    box box1 = {"Jiangsu", 1.76, 1.2, 15, 80};
    box * pt = new box;
    //值传递
    pass_by_value(box1);
    
    //地址传递
    pass_by_address(pt);
    delete pt;
    return 0;
}

void pass_by_value(box box_copy)
{
    cout << "pass by value:----------------------->\n";
    cout << box_copy.maker << endl;
    cout << box_copy.height << endl;
    cout << box_copy.length << endl;
    cout << box_copy.volume << endl;
    cout << box_copy.width << endl;
}

void pass_by_address(box *pr)
{
    strcpy(pr->maker, "Shanghai");
    pr->length = 3;
    pr->width = 4;
    pr->height = 5;
    pr->volume = pr->length * pr->width * pr->height;
    cout << "pass by address:----------------------->\n";
    cout << pr->maker << endl;
    cout << pr->height << endl;
    cout << pr->length << endl;
    cout << pr->width << endl;
    cout << pr->volume << endl;
}