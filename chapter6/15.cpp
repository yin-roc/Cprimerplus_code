#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    char automobile[50];
    int year;
    double a_price;
    double d_price;

    ofstream outFile;    
    outFile.open("carinfo.txt");

    cout << "Enter the make and model of automobile: ";
    cin.getline(automobile, 50);
    cout << "Enter the model year: ";
    cin >> year;
    cout << "Enter the original asking price: ";
    cin >> a_price;
    d_price = 0.913 * a_price;

    cout << fixed;//以小数形式显示，不使用科学计数法；
    cout.precision(2);//精度，小数点后两位
    cout.setf(ios_base::showpoint);//一定要显示小数点后两位，即0 -> 0.00
    cout << "Make and model: " << automobile << endl;
    cout << "Year: " << year << endl;
    cout << "Was asking $" << a_price << endl;
    cout << "Now asking $" << d_price << endl;

    outFile << fixed;//以小数形式显示，不使用科学计数法；
    outFile.precision(2);//精度，小数点后两位
    outFile.setf(ios_base::showpoint);//一定要显示小数点后两位，即0 -> 0.00
    outFile << "Make and model: " << automobile << endl;
    outFile << "Year: " << year << endl;
    outFile << "Was asking $" << a_price << endl;
    outFile << "Now asking $" << d_price << endl;

    outFile.close();

    return 0;
}