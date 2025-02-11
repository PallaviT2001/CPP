#ifndef LIKITHA_H
#define LIKITHA_H
#include "person.h"
#include <iostream>
using namespace std;

class Likitha
{
public:
    Likitha();
    ~Likitha();
    void display();

    Person *p=new Person;
    int a=p->m_age=25;
    string b=p->m_name="likitha";
    string c=p->m_cno="123654";
};

#endif
