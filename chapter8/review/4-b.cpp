#include <iostream>

using namespace std;

struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void display(box & box1);
void V_counter(box & box1);

int main()
{
    box box1 = {"DaJia", 3, 4, 5};
    V_counter(box1);
    display(box1);

    return 0;
}

void display(box & box1)
{
    cout << box1.maker << endl;
    cout << box1.height << endl;
    cout << box1.width << endl;
    cout << box1.length << endl;
    cout << box1.volume << endl;
}

void V_counter(box & box1)
{
    box1.volume = box1.height * box1.length * box1.width;
}
