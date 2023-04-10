#include <iostream>
#include "extral.h"

using namespace std;

double warming = 0.3;

int main()
{
    cout << "Global warming is " << warming << " degrees.\n";
    update(0.2);
    cout << "Global warming is " << warming << " degrees.\n";
    local();
    cout << "Global warming is " << warming << " degrees.\n";

    return 0;
}