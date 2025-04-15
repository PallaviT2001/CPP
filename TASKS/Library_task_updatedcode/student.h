#ifndef STUDENT_H
#define STUDENT_H
#include <vector>
#include "Book.h"

class Student
{
private:
    string m_studentname;
    int m_studentid;
public:
    vector<Book*> borrowedBooks;
    Student();
    ~Student();
    Student(string studentname, int studentid);
    void borrowBook(Book* book);
};

#endif
