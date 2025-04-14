#include "librarian.h"
#include "student.h"
#include <iostream>

int main()
{
    Librarian lib;

    lib.addBook("C Programming");
    lib.addBook("C++ Fundamentals");
    lib.addBook("Database Systems");

    lib.showAvailableBooks();

    Student student1("Pallavi");
    Student student2("Darshini");

    student1.requestBook("C++ Fundamentals", lib);
    student2.requestBook("Python Programming", lib);

    lib.showAvailableBooks();

    return 0;
}
