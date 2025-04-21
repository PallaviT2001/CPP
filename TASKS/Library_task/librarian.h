#ifndef LIBRARIAN_H
#define LIBRARIAN_H
#include "book.h"
#include "studentRecord.h"
#include<string>
using namespace std;

class Librarian
{
public:
    Librarian(string name);
    ~Librarian();

    Book* searchBook(list<Book*> &bookList, string bookName);
    void issueBook(Student &student, Book* book);
    void studenthistory(Student &student, list<StudentRecord *>& studentRecord);

private:
    string m_name;
};

#endif // LIBRARIAN_H
