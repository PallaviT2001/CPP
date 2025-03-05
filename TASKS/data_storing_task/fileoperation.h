#ifndef FILEOPERATIONS_H
#define FILEOPERATIONS_H
#include <iostream>
#include "student.h"
#include <list>

using namespace std;

class Fileoperation
{
public:
    Student *m_student;
    Fileoperation();
    ~Fileoperation();
    virtual list<Student> readData()=0;

};
#endif
