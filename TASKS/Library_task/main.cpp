#include "library.h"
#include "student.h"
using namespace std;

int main()
{
    Librarian librarian("PallaviTGowda");
    Library library(&librarian);

    library.addBooktolist("Java","Available");
    library.addBooktolist("Python","Available");
    library.addBooktolist("C","Available");
    library.addBooktolist("C++","Available");
    library.addBooktolist("Core Java","Available");
    library.addBooktolist("Advance Java","Available");
    library.addBooktolist("C#","Available");
    library.addBooktolist("Javascript","Available");
    Student student("Pallavi",01);
    library.studentBookBorrowfunction(student);
    return 0;
}
