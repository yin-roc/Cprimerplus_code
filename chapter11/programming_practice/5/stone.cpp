#include <iostream>
using std::cout;
#include "stonewt.h"

void display(const Stonewt & st, int n);

int main()
{
    Stonewt incognito = 275;
    Stonewt wolfe(285.7);
    Stonewt taft(21, 8);
    
    incognito.Set_Type(Stonewt::POUNDS);
    cout << incognito;
    wolfe.Set_Type(Stonewt::FLOATPOUNDS);
    cout << wolfe;
    taft.Set_Type(Stonewt::STONE);
    cout << taft;

    taft = incognito + wolfe;
    taft.Set_Type(Stonewt::STONE);
    cout << "taft = " << taft << std::endl;

    taft = wolfe - incognito;
    taft.Set_Type(Stonewt::FLOATPOUNDS);
    cout << "taft = " << taft << std::endl;

    incognito = incognito * 2;
    incognito.Set_Type(Stonewt::POUNDS);
    cout << "incognito = " << incognito << std::endl;



    return 0;
}
 