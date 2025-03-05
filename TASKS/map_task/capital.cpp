#include "capital.h"
#include <iostream>
using namespace std;

Capital::Capital()
{
    cout<<"capital constructor called"<<endl;
}

Capital::~Capital()
{
    cout<<"capital destructor called"<<endl;
}

Capital::Capital(string capital)
{
    m_capital=capital;
    //cout<<"capital name is"<<m_capital<<endl;
}
