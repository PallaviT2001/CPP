#ifndef COLLEGE_H
#define COLLEGE_H
#include <iostream>
#include <vector>
#include <list>
#include <string>
#include "student.h"
#include "faculty.h"
#include "college_management.h"
using namespace std;

class College
{
protected:

    list<Student> m_students;
    vector<Faculty> m_faculties;
public:
    College();
    ~College();
};

#endif
