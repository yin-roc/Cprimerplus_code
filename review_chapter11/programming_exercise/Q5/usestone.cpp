#include <iostream>
#include "stonewt.h"

using std::cout;

int main()
{
    Stonewt incognito = 275;
    Stonewt wolfe(287.5);
    Stonewt taft(21, 8);

    incognito.Set_Type(Stonewt::POUNDS);
    cout << incognito;

    wolfe.Set_Type(Stonewt::FLOATPOUNDS);
    cout << wolfe;

    taft.Set_Type(Stonewt::STONE);
    cout << taft;

    taft = incognito + wolfe;
    taft.Set_Type(Stonewt::STONE);
    cout << "taft = " << taft;

    taft = wolfe - incognito;
    taft.Set_Type(Stonewt::FLOATPOUNDS);
    cout << "taft = " << taft;

    incognito = incognito * 2;
    incognito.Set_Type(Stonewt::POUNDS);
    cout << "incognito = " << incognito;

    return 0;
}

