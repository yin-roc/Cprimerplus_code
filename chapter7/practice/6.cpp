#include <iostream>

using namespace std;

int Fill_array(double *, int);
void Show_array(double *, int);
void Reverse_array(double *, int);

const int ArSize = 10;

int main()
{
    double arr[ArSize];
    int length = sizeof(arr) / sizeof(double);
    int input_num = Fill_array(arr, length);
    cout << "Now, the array is:\n";
    Show_array(arr, input_num);

    Reverse_array(arr, input_num);
    cout << "Now, the array is:\n";
    Show_array(arr, input_num);

    Reverse_array(arr + 1, input_num - 2);
    cout << "Now, the array is:\n";
    Show_array(arr, input_num);

    return 0;
}

int Fill_array(double *pt, int sz)
{
    cout << "Enter your number: ";
    double input;
    int count = 0;

    while((cin >> input) && (count < sz))
    {
        pt[count] = input;
        count++;

        //cin输入错误，都不会进来，所以可以把输入放在里面，不放在判断条件里
        if(cin.fail())
        {
            cout << "Input failure, please enter a double!" << endl;
            cin.clear();
            while(cin.get() != '\n')
                continue;
        }
        cout << "Enter another number: ";
    }
    return count;
}

void Show_array(double * pr, int sz)
{
    for(int i = 0; i < sz; i++)
        cout << pr[i] << " ";
    cout << endl;
}

void Reverse_array(double *pa, int sz)
{
    double temp;
    // int start = 0;
    
    for(int start = 0, end = sz - 1; start < (sz / 2); start++, end--)
    {
        temp = pa[end];
        pa[end] = pa[start];
        pa[start] = temp; 
    }
}


