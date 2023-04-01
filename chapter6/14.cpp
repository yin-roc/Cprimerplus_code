#include <iostream>

using namespace std;
const int Max = 5;

int main()
{
    int golf[Max];
    cout << "Please enter your golf scores.\n";
    cout << "You must enter " << Max << " rounds.\n";
    int i;
    for (i = 0; i < Max; i++)
    {
        cout << "round #" << i+1 << ": ";
        //1、判断输入是否正确，输入类型不匹配则进入循环
        while(!(cin >> golf[i]))
        {
            //2、重置cin以接受新的输入
            cin.clear();
            //3、删除错误输入，使其不影响后面输入
            while(cin.get() != '\n')
                continue;
            //4、提示用户再输入
            cout << "Please enter a number: ";

        }
    }

    double total = 0;
    for(i = 0; i < Max; i++)
        total += golf[i];
    cout << total / Max << " = average score " << Max << " rounds\n";

    return 0;
}