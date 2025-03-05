#ifndef CSV_H
#define CSV_H
#include "fileoperations.h"
#include "student.h"
#include <list>

class CSV:public FileOperations
{
public:
    CSV();
    ~CSV();
    list<Student> readData()override;
};

#endif
