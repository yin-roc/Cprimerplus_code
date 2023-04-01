#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;
const int SIZE = 60;
int main()
{
    char filename[SIZE];
    //1、输入文件，读取内容
    ifstream inFile;
    cout << "Enter name of data file: ";
    cin.getline(filename, SIZE);
    
    //2、打开一个名为filename的文件，并建立其与输入流对象之间的关系
    inFile.open(filename);

    //3、判断是否成功打开
    //如果成功打开返回true；否则返回false
    if(!inFile.is_open())
    {
        cout << "Could not open the file " << filename << endl;
        cout << "Program terminating.\n";
        
        //"exit(EXIT_FAILURE);" 则是一个代码行，它通常出现在程序中表示程序出现错误时需要结束运行并返回错误代码。
        //在这里，"EXIT_FAILURE" 是一个预定义的宏，它表示程序的退出状态，
        // 用于表明程序在运行过程中遇到了错误或异常情况，退出时返回一个非零值。
        exit(EXIT_FAILURE);
    }
    double value;
    double sum = 0;
    int count = 0;

    //4、输入一个值，类比于cin>>value
    inFile >> value;
    
    //5、表示在 inFile 流对象读取数据的过程中，只要流对象没有遇到任何错误，就会继续循环。
    //这个循环可以用来读取文件中的所有数据，直到文件结束或者出现错误为止。
    //所以，在读取文件时，通常需要在循环内部加入读取数据的语句，并在读取完成后检查是否已经到达文件结尾。
    while(inFile.good())
    {
        ++count;
        sum += value;
        inFile >> value;
    }

    //6、
    //在C++中，eof()是一个istream类的成员函数，用于检测流的结束标志。
    // 当文件读取到末尾时，文件指针会指向文件结束符，eof()函数会返回true，表示已经到达了文件的末尾。
    // 因此，当出现 if(inFile.eof()) 时，表示程序读取文件时已经到达文件末尾。
    // 这通常被用于文件读取循环中的判断条件，以确保在读取完整个文件后退出循环。但需要注意的是，eof()函数的返回值并不一定可靠，因为有时候文件结束符可能会被错误地处理或忽略掉。因此，有些情况下可能需要采用其他的方法来判断文件是否已经结束
    if(inFile.eof())
        cout << "End of file reached.\n";
    else if(inFile.fail())
        cout << "Input terminated by data mismatch.\n";
    else 
        cout << "Input terminated for unknown reason.\n";
    if(0 == count)
        cout << "No data processed.\n";
    else
    {
        cout << "Items read: " << count << endl;
        cout << "Sum: " << sum << endl;
        cout << "Average: " << sum / count << endl;
    }
    
    //关闭文件
    inFile.close();
    return 0;
}