//
// Created by yin on 2023-11-02.
//
#include "emp.h"
#include "string"
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

//-------------abstr_emp-------------------------------------------

void abstr_emp::Data() const {
    cout << "fname: " << fname << endl;
    cout << "lname: " << lname << endl;
    cout << "job: " << job << endl;
}

void abstr_emp::Get() {
    cout << "Enter your fname: ";
    std::getline(cin, fname);
    cout << "Enter your lname: ";
    std::getline(cin, lname);
    cout << "Enter your job: ";
    std::getline(cin, job);
}

abstr_emp::abstr_emp() : fname("NULL"), lname("NULL"), job("NULL") {}

abstr_emp::abstr_emp(const std::string &fn, const std::string &ln, const std::string &j)
        : fname(fn), lname(ln), job(j) {}

void abstr_emp::ShowAll() const {
    Data();
}

void abstr_emp::SetAll() {
    cout << "Enter your personal information (include first name, last name and job): " << endl;
    Get();
    while (cin.get() != '\n')
        continue;
}

abstr_emp::~abstr_emp() {}

std::ostream & operator<<(std::ostream & os, const abstr_emp & e)
{
    os << "first name: " << e.fname << ", last name: " << e.lname << ", job: " << e.job;
    return os;
}


//-------------employee-------------------------------------------

void employee::Data() const {

}

void employee::Get() {

}
employee::employee() : abstr_emp() {}

employee::employee(const std::string &fn, const std::string &ln, const std::string &j)
        : abstr_emp(fn, ln, j) {}

void employee::ShowAll() const {
    abstr_emp::Data();
    Data();
}

void employee::SetAll() {
    cout << "Enter your personal information (include first name, last name and job): " << endl;
    abstr_emp::Get();
    Get();
    while (cin.get() != '\n')
        continue;
}


//-------------manager-------------------------------------------

void manager::Data() const {
    cout << "Inchargeof: " << inchargeof << endl;
}

void manager::Get() {
    cout << "Enter your inchargeof: ";
    cin >> inchargeof;
}

manager::manager() : abstr_emp(), inchargeof(0) {}

manager::manager(const std::string &fn, const std::string &ln, const std::string &j, int ico)
        : abstr_emp(fn, ln, j), inchargeof(ico) {}

manager::manager(const abstr_emp &e, int ico)
        : abstr_emp(e), inchargeof(ico) {}

manager::manager(const manager &m) : abstr_emp(m){
    inchargeof = m.inchargeof;
}

void manager::ShowAll() const {
    abstr_emp::Data();
    Data();
}

void manager::SetAll() {
    cout << "Enter your personal information (include first name, last name, job and inchargeof): " << endl;
    abstr_emp::Get();
    Get();
    while (cin.get() != '\n')
        continue;
}


//-------------fink-------------------------------------------

void fink::Data() const {
    cout << "reportsto: " << reportsto << endl;
}

void fink::Get() {
    cout << "Enter your reportsto: " << endl;
    std::getline(cin, reportsto);
}

fink::fink() : abstr_emp(), reportsto("NULL") {}

fink::fink(const std::string &fn, const std::string &ln, const std::string &j, const std::string &rpo)
        : abstr_emp(fn, ln, j), reportsto(rpo){}

fink::fink(const abstr_emp &e, const std::string &rpo)
        : abstr_emp(e), reportsto(rpo){}

fink::fink(const fink & e) : abstr_emp(e){
    reportsto = e.reportsto;
}

void fink::ShowAll() const {
    abstr_emp::Data();
    fink::Data();
}

void fink::SetAll() {
    cout << "Enter your personal information (include first name, last name, job and reportsto): " << endl;
    abstr_emp::Get();
    Get();
}


//-------------highfink-------------------------------------------
void highfink::Data() const {

}

void highfink::Get() {

}

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
    abstr_emp::Data();
    manager::Data();
    fink::Data();
}

void highfink::SetAll() {
    cout << "Enter your personal information (include first name, last name, job, inchargeof and reportsto): " << endl;
    abstr_emp::Get();
    manager::Get();
    fink::Get();
    Get();
}
