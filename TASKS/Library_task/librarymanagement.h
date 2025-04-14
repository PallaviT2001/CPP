#ifndef LIBRARYMANAGEMENT_H
#define LIBRARYMANAGEMENT_H
#include <list>
#include "books.h"
#include "student.h"
#include <iostream>
using namespace std;

class Librarymanagement
{
private:
    list<Books>books;
    list<Student>student;
public:
    Librarymanagement();
    ~Librarymanagement();
    void addBook(int bookid, string bookname);
    void displayBooks();
    void borrowBook(string bookName);

    void studentlistmaintain(int studentid, string studentname);
    void displaystudent();
};

#endif
