#include <iostream>
#include <cstdlib>
#include <ctime>
#include "vector.h"

int main()
{
    using namespace std;
    using std::cout;
    using VECTOR::Vector;
    srand(time(0));
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    int N;
    int num = 0; 
    unsigned long max = 0;
    unsigned long min = 0;
    unsigned long sum = 0;

    cout << "Enter the times of attempts: ";
    cin >> N;
    cin.get();
    unsigned long *pt = new unsigned long[N];
    while(num < N)
    {
        cout << "Enter " << num + 1 << " time target distance(q to quit): ";
        while((num < N) && (cin >> target))
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
            pt[num] = steps;
            cout << result << endl;
            result.polar_mode();
            cout << " or\n" << result << endl; 
            cout << "Average outward distance per step = "
                << result.magval() / steps << endl;
            steps = 0;
            result.reset(0.0, 0.0);
            num++;
            cout << "Enter " << num + 1 << " target distance (q to quit): ";
        }
        cout << "Bye!\n";
        cin.clear();
        while(cin.get() != '\n')
            continue;
    }
    for(int i = 0; i < N; i++)
    {
        if(pt[i] > max)
            max = pt[i];
        min = pt[0];
        if(pt[i] < min)
            min = pt[i];  
        sum = sum + pt[i];       
    }
    cout << "The maximum steps is " << max << endl;
    cout << "The minimum steps is " << min << endl;
    cout << "The average steps is " << sum / N << endl;

    
    return 0;
}