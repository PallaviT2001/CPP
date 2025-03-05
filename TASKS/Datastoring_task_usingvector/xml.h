#ifndef XML_H
#define XML_H
#include "fileoperation.h"

class XML:public Fileoperation
{
public:
    XML();
    ~XML();
    list<Student>readData();
};

#endif
