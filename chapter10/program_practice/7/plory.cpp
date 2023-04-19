#include <iostream>
#include "plory.h"
#include <cstring>

Plory::Plory(const char ar[], int m_CI)
{
    strcpy(name, ar);
    CI = m_CI;
}

void Plory::set_CI(int m_CI)
{
    CI = m_CI;
}

void Plory::showplory() const
{
    std::cout << "name: " << name << std::endl;
    std::cout << "CI: " << CI << std::endl;
}

Plory::Plory()
{
    strcpy(name, "Plorga");
}

