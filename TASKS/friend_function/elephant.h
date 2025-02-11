#ifndef ELEPHANT_H
#define ELEPHANT_H
#include <iostream>
using namespace std;

#include"animal.h"

class Animal;

class Elephant:public Animal
{
public:
    Elephant();
    ~Elephant();
    void display(Animal &a);
};

#endif
