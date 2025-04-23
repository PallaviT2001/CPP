#include "year.h"
#include <iostream>
using namespace std;

Year::Year(int year) : m_year(year), april(4, year)
{
    cout << "Year default constructor called" << endl;
}

Year::~Year()
{
    cout << "Year destructor called" << endl;
}

Month &Year::getApril()
{
    return april;
}
