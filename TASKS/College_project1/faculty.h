#ifndef FACULTY_H
#define FACULTY_H
#include "personaldetails.h"

class Faculty : public Personaldetails
{
public:
    Faculty();
    ~Faculty();
    Faculty(int id, string name, int age);
    void display() const;
};

#endif
