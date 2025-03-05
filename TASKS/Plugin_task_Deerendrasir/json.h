#ifndef JSON_H
#define JSON_H
#include "fileoperations.h"
#include "student.h"
#include <list>

class JSON:public FileOperations
{
public:
    JSON();
    ~JSON();
    list<Student> readData()override;
};

#endif
