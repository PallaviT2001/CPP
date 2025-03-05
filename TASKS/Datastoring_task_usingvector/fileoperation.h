#ifndef FILEOPERATION_H
#define FILEOPERATION_H
#include "student.h"

class Fileoperation
{
public:
    Fileoperation();
    virtual ~Fileoperation();
    virtual list<Student>readData() = 0;

};
#endif
