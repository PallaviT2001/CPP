#ifndef XML_H
#define XML_H
#include <iostream>
using namespace std;
#include "fileoperations.h"

class XML:public FileOperations
{
public:
    XML();
    ~XML();
    list<Student> readData();
};

#endif
