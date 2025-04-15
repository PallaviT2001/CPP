#include "Library.h"
#include <iostream>

Library::Library()
{
    cout<<"Library constructor called"<<endl;
}

Library::~Library()
{
    cout<<"Library destructor called"<<endl;
}

void Library::addBookToLibrary(Librarian& librarian, Book* book)
{
    librarian.addBook(book);
}

