#ifndef CSV_H
#define CSV_H
#include <iostream>
using namespace std;
#include "fileoperation.h"
#include "student.h"
#include "list"
class CSV:public Fileoperation
{
private:
    Student *m_student;
public:
    CSV();
    ~CSV();
    void studentinit(Student *s);
    list<Student> readData()override;
};

#endif
