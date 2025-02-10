#ifndef BASE_H
#define BASE_H
#include <iostream>
using namespace std;

class base
{
private:
    int m_a;
    string m_name;

public:
    base();
    ~base();

    base(int a);
    int getnum();
    void setnum(int a);

    base(string b);
    string getname();
    void setname(string name);
};

#endif
