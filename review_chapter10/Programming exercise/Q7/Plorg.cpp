#include "Plorg.h"
#include <cstring>
#include <iostream>

using std::cout;
using std::endl;

Plorg::Plorg(const char m_p_name[], int m_CI)
{
    strcpy(p_name, m_p_name);
    CI = m_CI;
}

Plorg::Plorg(const char* m_p_name)
{
    strcpy(p_name, m_p_name);
}

void Plorg::setCI(int m_CI)
{
    CI = m_CI;
}

void Plorg::plorgshow() const
{
    cout << "The name of the plorg is: " << p_name << endl;
    cout << "The CI of the plorg is: " << CI << endl;
}