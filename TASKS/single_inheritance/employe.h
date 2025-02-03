#ifndef EMPLOYE_H
#define EMPLOYE_H
#include "person.h"

class employe:public person
{
private:
    int employeid;
    float salary;
public:
    employe();
    ~employe();
    employe(string name, int age, int contactnumber, float height, int employeid, float salary);
};

#endif
