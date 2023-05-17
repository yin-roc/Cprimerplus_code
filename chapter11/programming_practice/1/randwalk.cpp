#include <iostream>
#include <cstdlib>
#include <ctime>
#include "vector.h"
#include <fstream>

// using namespace std;

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
    cout << "Target Distance: ";
    while(cin >> target)
    {
        cout << ", Step Size: ";
        if(!(cin >> dstep))
            break;
        
        fout << "Target Distance: " << target << ", Step Size: " << dstep << std::endl;

        while(result.magval() < target)
        {
            fout << steps << ": (x, y) = " << result << endl;
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            cout << steps << ": "<< result << endl; 
            steps++;
        }
        cout << "After " << steps << " steps, the subject has the following location:\n";
        cout << result << endl;

        fout << "After " << steps << " steps, the subject has the following location:\n";
        fout << result << endl;

        result.polar_mode();
        fout << result << endl;
        cout << " or\n" << result << endl;
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