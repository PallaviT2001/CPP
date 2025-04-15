#ifndef LIBRARIAN_H
#define LIBRARIAN_H
#include "Book.h"
#include <list>

class Librarian
{
private:
    string m_name;
    list<Book*> books;
public:
    Librarian();
    ~Librarian();
    Librarian(string name);
    void addBook(Book* book);
    void displayBooks();
};

#endif


