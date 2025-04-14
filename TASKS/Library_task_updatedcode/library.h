#ifndef LIBRARY_H
#define LIBRARY_H
#include <vector>
#include "book.h"
//#include "student.h"
class student;
class Library
{
private:
    student *s;
public:
    Library();
    ~Library();
    vector<Book>books;
};

#endif
