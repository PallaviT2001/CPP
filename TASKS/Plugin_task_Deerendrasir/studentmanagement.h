#ifndef STUDENTMANAGEMENT_H
#define STUDENTMANAGEMENT_H
#include <iostream>
using namespace std;
#include "student.h"
#include "fileoperations.h"
#include "studentmanagement.h"
#include <list>

class StudentManagement
{
public:

    StudentManagement();
    ~StudentManagement();

    list<Student>m_list;

    FileOperations *m_fileoperations;

    void display();



};

#endif
