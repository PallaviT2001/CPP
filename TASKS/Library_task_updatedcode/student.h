#ifndef STUDENT_H
#define STUDENT_H
#include "librarian.h"
#include <iostream>
using namespace std;

class Student
{
private:
    string name;
public:
    Student();
    ~Student();
    Student(const string &name);
    string getName()const;
    void requestBook(const string& bookTitle, class Librarian& library);
};

#endif
