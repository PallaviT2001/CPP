#ifndef LIBRARY_H
#define LIBRARY_H
#include <list>
#include "Book.h"
#include "librarian.h"

class Library
{
private:
    list<Book*> books;
public:
    Library();
    ~Library();
    void addBookToLibrary(Librarian &librarian,Book *book);
};

#endif
