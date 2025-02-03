#ifndef SENIOREMPLOYE_H
#define SENIOREMPLOYE_H
#include "person.h"

class senioremploye:public person
{
private:
    int employeid;
    float salary;
public:
    senioremploye();
    ~senioremploye();
    senioremploye(string name, int age, int contactnumber, float height, int employeid, float salary);
};

#endif
