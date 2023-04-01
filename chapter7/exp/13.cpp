#include <iostream>
#include <cmath>
using namespace std;

struct polar
{
    double distance;
    double angle;
};
struct rect
{
    double x;
    double y;
};
void rect_to_polar(const rect * pxy, polar * pda);
void show_polar (const polar * pda);
int main()
{
    rect rpalce;
    polar pplace;

    cout << "Enter the x and y values: ";
    while(cin >> rpalce.x >> rpalce.y)
    {
        rect_to_polar(&rpalce, &pplace);
        show_polar(&pplace);
        cout << "Next two numbers (q to quit): ";
    }
    cout << "Done.\n";
    return 0;
}

void show_polar(const polar * pda)
{
    const double Rad_to_deg = 57.29577951;

    cout << "distance = " << pda->distance;
    cout << ", angle = " << pda->angle * Rad_to_deg;
    cout << " degrees\n";
}

void rect_to_polar(const rect * pxy, polar * pda)
{
    pda->distance = sqrt(pxy->x * pxy->x + pxy->y * pxy->y);
    pda->angle = atan2(pxy->y, pxy->x);
}