#include "library.h"
#include "student.h"
using namespace std;

int main()
{
    Librarian librarian("Vidya");

    Library library(&librarian);

    library.addBook("Java","Available");
    library.addBook("Python","Available");

    Student student("Pallavi",01);

    library.studentBookBorrowfunction(student);
    return 0;
}
