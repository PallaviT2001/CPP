#ifndef PARROT_H
#define PARROT_H
#include "bird.h"
#include <iostream>
using namespace std;

class Parrot:public Bird
{
public:
    Parrot();
    ~Parrot();
    void display(Bird &b);
};

#endif
