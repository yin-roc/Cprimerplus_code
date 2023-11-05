//
// Created by yin on 2023-11-02.
//
#include "emp.h"
#include "string"

using std::cout;
using std::endl;
using std::cin;

//-------------abstr_emp-------------------------------------------

abstr_emp::abstr_emp() : fname("NULL"), lname("NULL"), job("NULL") {}

abstr_emp::abstr_emp(const std::string &fn, const std::string &ln, const std::string &j)
                        : fname(fn), lname(ln), job(j) {}

void abstr_emp::ShowAll() const {
    cout << "fname: " << fname << endl;
    cout << "lname: " << lname << endl;
    cout << "job: " << job << endl;
}

void abstr_emp::SetAll() {
    cout << "Enter your personal information (include first name, last name and job): " << endl;
    string m_fname;
    string m_lname;
    string m_job;
    std::getline(cin, m_fname);
    while(cin.get() != '\n')
        continue;
    std::getline(cin, m_lname);
    while(cin.get() != '\n')
        continue;
    std::getline(cin, m_job);
    while(cin.get() != '\n')
        continue;
    fname = m_fname;
    lname = m_lname;
    job = m_job;
}

std::ostream & operator<<(std::ostream & os, const abstr_emp & e)
{
    os << "first name: " << e.fname << ", last name: " << e.lname << ", job: " << e.job << endl;
}


//-------------employee-------------------------------------------

employee::employee() : abstr_emp() {}

employee::employee(const std::string &fn, const std::string &ln, const std::string &j)
                    : abstr_emp(fn, ln, j) {}

void employee::ShowAll() const {
    abstr_emp::ShowAll();
}

void employee::SetAll() {
    abstr_emp::SetAll();
}


//-------------manager-------------------------------------------

manager::manager() : abstr_emp(), inchargeof(0) {}

manager::manager(const std::string &fn, const std::string &ln, const std::string &j, int ico)
                    : abstr_emp(fn, ln, j), inchargeof(ico) {}

manager::manager(const abstr_emp &e, int ico)
                    : abstr_emp(e), inchargeof(ico) {}

void manager::ShowAll() const {
    abstr_emp::ShowAll();
    cout << "inchargeof: " << inchargeof << endl;
}

void manager::SetAll() {
    abstr_emp::SetAll();
    cout << "In addition, enter your inchargeof: " << endl;
    int m_inchargeof;
    cin >> m_inchargeof;
    cin.get();
    inchargeof = m_inchargeof;
}


//-------------fink-------------------------------------------

fink::fink() : abstr_emp(), reportsto("NULL") {}

fink::fink(const std::string &fn, const std::string &ln, const std::string &j, const std::string &rpo)
            : abstr_emp(fn, ln, j), reportsto(rpo){}

fink::fink(const abstr_emp &e, const std::string &rpo)
            : abstr_emp(e), reportsto(rpo){}

void fink::ShowAll() const {
    abstr_emp::ShowAll();
    cout << "reportsto: " << reportsto << endl;
}

void fink::SetAll() {
    abstr_emp::SetAll();
    cout << "In addtion, enter your reportsto: " << endl;
    std::getline(cin, reportsto);
}


//-------------highfink-------------------------------------------
highfink::highfink() : abstr_emp(), manager(), fink() {}

highfink::highfink(const std::string &fn, const std::string &ln, const std::string &j, const std::string &rpo, int ico)
                    : abstr_emp(fn, ln, j), manager(fn, ln, j, ico), fink(fn, ln, j, rpo) {}

highfink::highfink(const abstr_emp &e, const std::string &rpo, int ico)
                    : abstr_emp(e), fink(e, rpo), manager(e, ico){}

highfink::highfink(const fink &f, int ico)
                    : abstr_emp(f), manager(f, ico), fink(f){}

highfink::highfink(const manager &m, const std::string &rpo)
                    : abstr_emp(m), fink(m, rpo), manager(m){}

highfink::highfink(const highfink &h)
                    : abstr_emp(h), manager(h), fink(h){}

void highfink::ShowAll() const {
    fink::ShowAll();
    manager::ShowAll();
}

void highfink::SetAll() {
    fink::SetAll();
    manager::SetAll();
}
