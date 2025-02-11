#ifndef PERSON_H
#define PERSON_H
#include "likitha.h"
#include <iostream>
using namespace std;

class Person
{
private:
    int m_age;
    string m_name;
    string m_cno;
public:
    Person();
    ~Person();
    Person(int a,string b,string c);
    friend void Likitha::display(Person &p);
};

#endif
