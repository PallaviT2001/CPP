#ifndef FILEOPERATIONS_H
#define FILEOPERATIONS_H
#include <list>
#include "student.h"
#include <iostream>

using namespace std;

class FileOperations {
public:
    virtual ~FileOperations();
    virtual void writeData(const list<Student> &students) = 0;
    virtual list<Student> readData() = 0;
};

#endif


