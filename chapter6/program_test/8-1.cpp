#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    //1、创建一个输出流对象
    ofstream outFile;

    //2、与文件关联
    outFile.open("yinpeng.txt");

    outFile << "hello world.\n" << "Yin peng!" << endl;

    //关闭文件
    outFile.close();


    return 0;
}