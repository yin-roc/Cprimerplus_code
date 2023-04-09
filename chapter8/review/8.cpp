#include <iostream>
#include <string>

using namespace std;

const int ArSize = 40;
struct box
{
    char maker[ArSize];
    float height;
    float width;
    float length;
    float volume;
};


//模板具体化
template <> box & max(box & box1, box & box2);

void display(box & box1);
float V_counter(box & box1);

template <class AnyType>
float Max(const AnyType & a, const AnyType & b)
{
    if(a > b)
        return a;
    else 
        return b;
}

void fill(box & a);


int main()
{
    float max;

    // box box1 = {"hello", 3, 4, 5};
    // box box2 = {"world", 8, 10, 12};
    box box1, box2;
    fill(box1);
    fill(box2);
    max = Max(V_counter(box1), V_counter(box2));
    cout << "The larger is: ";
    cout << max << endl;
    return 0;
}

void display(box & box1)
{
    cout << box1.maker << endl;
    cout << box1.height << endl;
    cout << box1.width << endl;
    cout << box1.length << endl;
    cout << box1.volume << endl;
};

float V_counter(box & box1)
{
    return box1.volume = box1.height * box1.length * box1.width;
}

void fill(box & a)
{
    string Maker; 

    cout << "Please input the maker: ";
    cin.get(a.maker, ArSize);

    cout << "Please input the height: ";
    cin >> a.height;
    
    cout << "Please input the width: ";
    cin >> a.width;

    cout << "Please input the length: ";
    cin >> a.length;

    cin.get();
}
