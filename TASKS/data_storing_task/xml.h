#ifndef XML_H
#define XML_H
#include <iostream>
using namespace std;
#include "fileoperation.h"
#include "student.h"

class XML
{
private:
    Student *m_student;
public:
    XML();
    ~XML();
    // void studentinit(Student *s);
    // void readData()override;
};

#endif



