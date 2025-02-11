#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
using namespace std;

class Animal
{
private:
    int m_age;
    string m_colour;
    float m_height;
public:
    Animal();
    ~Animal();
    Animal(int age,string color,float height);
    friend class Elephant;
};

#endif
