#include <iostream>
#include <string>
#include <fstream>
using namespace std;

const int ArSize = 5;

const double Donation = 10000;
struct fund
{
    // char name[ArSize];
    string str1;
    double donation;
};

int main()
{
    int number = 0;
    // string str1, str2, str3, str4;
    // int donation1, donation2, donation3, donation4;
    //1、创建输出流
    ofstream outFile;
    char filename1[20];
    char filename2[20];
    char ch;
    int count = 0;


    cout << "Enter the name of file: ";
    cin.get(filename1,ArSize).get();
    
    //2、关联文件
    outFile.open(filename1);

    cout << "Enter how many people donate: ";
    cin >> number;
    cin.get();
    fund *pt = new fund [number];
    outFile << number << endl;
    for(int i = 0; i < number; i++)
    {
        cout << "Enter the name of " << i + 1 << " donators: " << endl;
        getline(cin, pt[i].str1);
        cout << "Enter the number of " << i + 1 << " donations : " << endl;
        cin >> pt[i].donation;
        cin.get();
    }
    for(int i = 0; i < number; i++)
    {
        outFile << pt[i].str1;
        outFile << endl;
        outFile << pt[i].donation;
        outFile << endl;
    }


    //对应关闭文件
    outFile.close();

    
    //1、创建输入流对象
    ifstream inFile;

    //2、关联文件
    cout << "Enter the name of file: ";
    cin.get(filename2,ArSize).get();
    inFile.open(filename2);

    //3、判断是否正常打开文件
    if(!inFile.is_open())
    {
        cout << "Could not open the " << filename2 << endl;
        cout << "Program terminating. " << endl;
        exit(EXIT_FAILURE);
    }

    //4、开始读取
    inFile.get(ch);
    
    //5、读取正常
    while (inFile.good())
    {
        count++;
        inFile.get(ch);
    }
    

    if(inFile.eof())
        cout << "End of the file.\n";
    else if(inFile.fail())
        cout << "Input terminated by data mismatch.\n";
    else
        cout << "Input terminated by unkown reason.\n";

    if(0 == count)
        cout << "No data processed.\n"; 
    

    inFile.close();
    return 0;

}