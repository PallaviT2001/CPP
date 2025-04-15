#include <iostream>
#include "Library.h"
#include "Librarian.h"
#include "Student.h"
#include "Book.h"

int main()
{
    Library lib;
    Librarian librarian("Pallavi");

    Book* b1 = new Book("C++","Dennis Rechie");
    Book* b2 = new Book("Java","Java author");
    Book* b3 = new Book("Python","pythonauthor");

    lib.addBookToLibrary(librarian, b1);
    lib.addBookToLibrary(librarian, b2);
    lib.addBookToLibrary(librarian, b3);

    Student s1("Darshini", 101);

    librarian.displayBooks();

    s1.borrowBook(b1);
    librarian.displayBooks();

    delete b1;
    delete b2;
    delete b3;
    return 0;
}
