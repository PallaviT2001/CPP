#ifndef STUDENT_H
#define STUDENT_H
#include "book.h"
#include <list>
class Library;

class Student
{
public:
    Student(string studentName,int  m_studentID);
    ~Student();
    void borrowBook(Book* book);
    void displayBorrowedBooks();
    string getName();
    int getID();
    string getRequestedBook();

private:
    string m_studentName;
    int m_studentID;
    list<Book*> m_borrowedBooks;

};

#endif
