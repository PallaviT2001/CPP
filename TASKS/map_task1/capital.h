#ifndef CAPITAL_H
#define CAPITAL_H
#include <iostream>
using namespace std;

class Capital
{
private:
    string m_capital;

public:
    Capital();
    ~Capital();
    Capital(string capital);

    bool operator<(const Capital &c)const
    {
        return m_capital<c.m_capital;
    }

    friend ostream& operator <<(ostream& cout,const Capital &c)
    {
        cout<<c.m_capital;
        return cout;
    }

};

#endif



