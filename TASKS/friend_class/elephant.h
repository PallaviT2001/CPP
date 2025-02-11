#ifndef ELEPHANT_H
#define ELEPHANT_H
#include "animal.h"

class Elephant:public Animal
{
public:
    Elephant(int age,string colour,float height);
    ~Elephant();

    void display();
};

#endif
