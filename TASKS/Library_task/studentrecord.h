#ifndef STUDENTRECORD_H
#define STUDENTRECORD_H
#include "student.h"
#include <list>
using namespace std;

class StudentRecord
{
public:
    StudentRecord(Student &student);
    ~StudentRecord();
    void displaystudents();

private:
    list<Student*> m_studentList;
};

#endif
