#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

int main() {
    using namespace std;
    ifstream fin;
//    fin.open("E:\\3code\\C++\\Cprimerplus_code\\chapter16\\exp\\例程16.2\\tobuy.txt"); // 中文路径识别不了
    fin.open("E:\\3code\\C++\\tobuy.txt");

    if(fin.is_open() == false)
    {
        cerr << "Can't open file. Bye.\n";
        exit(EXIT_FAILURE);
    }
    string item;
    int count = 0;
    getline(fin, item, ':');
    while(fin)
    {
        ++count;
        cout << count << ": " << item << endl;
        getline(fin, item, ':');
    }
    cout << "Done.\n";
    fin.close();

    return 0;
}
