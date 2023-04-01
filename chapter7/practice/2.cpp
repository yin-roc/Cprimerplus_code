#include <iostream>

using namespace std;

const int ArSize = 10;

int input_grade();
void show_grade(int);
void mean_grade(int);
int arr[ArSize] = {0};


int main()
{

    // cout << "Enter your number:\n";
    int size = input_grade();
    show_grade(size);

    mean_grade(size);
    return 0;
}

int input_grade()
{
    cout << "Enter your number:\n";
    int n = 0;
    double number;
    // if(!cin.get())
    // {
    //     cin.clear();
    //     while(cin.get()!= '\0')
    //         continue;
    //     cout << "error";
    // }

    while(n < ArSize)
    {
        cin >> number;
        if(!cin)
        {
            cin.clear();
            while(cin.get() != '\n')
                continue;
            cout << "Invalid input, terminate.\n";
        }
        // if(number == '\n')
        //     break;
        else if (number < 0)
            break;
        else
        {
            arr[n] = number;
            n++;
        }
    }
    return n;
}

void show_grade(int n)
{
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void mean_grade(int n)
{
    double mean, sum;
    for(int i = 0; i < n; i++)
        sum += arr[i];
    mean = sum / n;
    cout << "The mean of golf grade is " << mean << endl;
}

