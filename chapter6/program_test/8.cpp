#include <iostream>
#include <fstream>

using namespace std;
const int ArSize = 20;

int main()
{
    char filename[ArSize];
    char ch;
    int count = 0;
    // int ch_num = 0;
    //1、创建输入流对象
    ifstream inFile;

    //2、与某文件建立联系
    cout << "Enter the name of data file: \n";
    cin.getline(filename, ArSize);
    inFile.open(filename);

    //3、判断是否成功打开
    if(!inFile.is_open())
    {
        cout << "Could not open the file " << filename << endl;
        cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }

    //4、开始读取
    inFile.get(ch);

    //5、判断是否读取成功
    while(inFile.good())
    {
        count++;
        inFile.get(ch);
    }

    //6、判断是否到达文件末尾;检查最近一次文件操作是否成功（有多个文件需要多次操作）;
    if(inFile.eof())
        cout << "End of file reached.\n";
    else if(inFile.fail())
        cout << "Input terminated by data mismatch.\n";
    else
        cout << "Input terminated for unkown reason.\n";
    
    //判断是否有数据读出
    if(0 == count)
        cout << "No data processed.\n";
    else
        cout << "There is " << count <<" characters.\n";

    inFile.close();

    return 0;
}