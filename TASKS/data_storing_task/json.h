#ifndef JSON_H
#define JSON_H
#include <iostream>
using namespace std;
#include "fileoperation.h"
#include "student.h"

class JSON
{
private:
    Student *m_student;
public:
    JSON();
    ~JSON();
    // void studentinit(Student *s);
    // void readData()override;
};
#endif
