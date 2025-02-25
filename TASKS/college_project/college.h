#ifndef COLLEGE_H
#define COLLEGE_H
#include <list>
#include <iostream>
using namespace std;
#include "student.h"

class College
{
private:
    list <Student> studentlist;
    public:
    College();
    ~College();
};

#endif
