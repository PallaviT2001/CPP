#include "Library.h"
#include "Student.h"
using namespace std;

int main()
{
    Librarian librarian("Vidya",1);

    Library library(&librarian);

    library.addBook("Java", "Javaauthor", 01,"Available");
    library.addBook("Python", "Pythonauthor", 02, "Available");

    Student student("Pallavi", "Computer science", 1);

    library.studentBookBorrowfunction(student);
    return 0;
}
