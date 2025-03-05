#ifndef CSV_H
#define CSV_H
//#include <vector>
#include "fileoperation.h"

class CSV:public Fileoperation
{
public:
    CSV();
    ~CSV();
    list<Student>readData();
};

#endif
