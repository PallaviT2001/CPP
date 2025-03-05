#ifndef JSON_H
#define JSON_H
#include "fileoperation.h"


class JSON:public Fileoperation
{
public:
    JSON();
    ~JSON();
    list<Student>readData();
};

#endif
