#ifndef FILEOPERATIONS_H
#define FILEOPERATIONS_H
#include <list>
#include "student.h"

class FileOperations
{
public:
    FileOperations();
    virtual ~FileOperations();
    virtual list<Student> readData() =0;

};

#endif // FILEOPERATIONS_H
