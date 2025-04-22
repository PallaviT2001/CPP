#ifndef LIBRARY_H
#define LIBRARY_H
#include<list>
#include "book.h"
#include "librarian.h"
using namespace std;

class Library
{
private:
    Librarian* m_librarian;
    list<Book*> m_bookList;
    list<StudentRecord*> m_studentRecord;
public:
    Library(Librarian* librarian);
    ~Library();
    void studentBookBorrowfunction(Student& student);
    void displayStudentHistory();
    void addBooktolist(string bookName,string bookStatus);
    void displayBooks();

};

#endif
