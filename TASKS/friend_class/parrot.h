#ifndef PARROT_H
#define PARROT_H
#include "bird.h"

class Parrot:public Bird
{
public:
    Parrot();
    ~Parrot();
    Parrot(int age,string name,float height);
    void display();
};

#endif // PARROT_H
