#ifndef STUDENT_H
#define STUDENT_H

#include "personaldetails.h"

class Student : public Personaldetails {
public:
    Student();
    Student(int id, string name, int age);
    void display() const;
};

#endif
