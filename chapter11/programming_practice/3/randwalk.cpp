#include <iostream>
#include <cstdlib>
#include <ctime>
#include "vector.h"
#include "climits"

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
    double target;
    double dstep;
    double times;
    double now_times = 0;
    double step_max = 0;
    double step_min = LONG_MAX;
    double step_average = 0;
    cout << "Enter the times of test: " << endl;
    cin >> times;
    cout << "Enter target distance (q to quit): ";
    while(cin >> target && now_times < times)
    {
        cout << "Enter step length: ";
        if(!(cin >> dstep))
            break;
        
        while(result.magval() < target)
        {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            steps++;
        }
        cout << "After " << steps << " steps, the subject has the following location:\n";
        cout << result << endl;
        result.polar_mode();
        cout << " or\n" << result << endl;
        cout << "Average outward distance per step = " 
             << result.magval() / steps << endl;
        step_max = (step_max > steps) ? step_max : steps;
        step_min = (step_min < steps) ? step_min : steps;
        step_average = step_average + result.magval() / steps;
        steps = 0;
        result.reset(0.0, 0.0);
        cout << "Enter target distance (q to quit): ";
        now_times++;
    }
    cout << "The max steps of several times is " << step_max << endl;
    cout << "The min steps of several times is " << step_min << endl;
    cout << "The average steps of several times is " << step_average << endl;

    cout << "Bye!\n";
    cin.clear();
    while(cin.get() != '\n')
        continue;

    return 0;
}