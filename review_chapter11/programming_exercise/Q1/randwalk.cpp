#include <iostream>
#include <cstdlib>
#include <ctime>
#include "vector.h"
#include <fstream>

int main()
{
    using namespace std;
    using VECTOR::Vector;
    srand(time(0));
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    
    ofstream fout;
    fout.open("randwalk.txt");

    double target;
    double dstep;
    cout << "Enter target distance(q to quit): ";
    while(cin >> target)
    {
        cout << "Enter step length: ";
        if(!(cin >> dstep))
            break;

        fout << "Target distance: " << target << ", step size: " << dstep << endl;

        while(result.magval() < target)
        {
            fout << steps << ": (x, y) = " << result << endl; 
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            steps++;
        }
        cout << "After " << steps << " steps, the subject has the following location:\n";
        cout << result << endl;
        
        fout << "After " << steps << " steps, the subject has the following location:\n";
        fout << result;

        result.polar_mode();
        cout << " or\n" << result << endl;
        fout << result;
        cout << endl;

        cout << "Average outward distance per step = "
            << result.magval() / steps << endl;

        fout << "Average outward distance per step = "
            << result.magval() / steps << endl; 
            
        steps = 0;
        result.reset(0.0, 0.0);
        cout << "Enter target distance (q to quit): ";
    }
    cout << "Bye!\n";
    cin.clear();
    while(cin.get() != '\n')
        continue;
    return 0;
}