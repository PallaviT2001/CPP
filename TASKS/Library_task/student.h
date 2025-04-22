#ifndef STUDENT_H
#define STUDENT_H
#include "book.h"
#include <list>
class Library;

class Student
{
public:
    Student(string m_studentName,int m_studentID);
    ~Student();

    string getName();
    int getID();

    void borrowBookfunction(Book* book);
    void displayBorrowedBooks();
    string StudentRequestedBook();

private:
    string m_studentName;
    int m_studentID;
    list<Book*> m_borrowedBooks;
};

#endif
