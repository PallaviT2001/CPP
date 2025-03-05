#ifndef COLLEGE_H
#define COLLEGE_H
#include "student.h"
#include "staff.h"
#include <vector>
#include <list>
#include <iostream>
#include "collegemanagement.h"
using namespace std;

class College
{
private:
    list<Student>m_studentlist;
    vector<Staff>m_stafflist;
    Student *m_student;
    Staff *m_staff;
    CollegeManagement *m_management;
public:
    College();
    ~College();

    void operations();
};

#endif // COLLEGE_H


