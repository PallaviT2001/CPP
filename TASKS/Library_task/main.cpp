#include <iostream>
using namespace std;
#include "librarymanagement.h"

int main()
{
    Librarymanagement lib;

    lib.addBook(101,"C");
    lib.addBook(102,"C++");
    lib.addBook(103,"QT");
    lib.addBook(104, "Java");
    lib.addBook(105, "Corejava");
    lib.addBook(106, "Advancedjava");
    lib.addBook(107, "Python");
    lib.addBook(108, "corepython");
    lib.addBook(109, "Advancepython");
    lib.addBook(110, "HTML");

    int choice;
    while(true)
    {
        cout<<endl;
        cout<<"select the choice\n"<<endl;
        cout<<"1.Add books to library"<<endl;
        cout<<"2.Display available books in the library"<<endl;
        cout<<"3.Borrow book"<<endl;
        cout<<"4.student display"<<endl;
        cin>>choice;
        switch(choice)
        {
        case 1:
        {
            int bookid;
            string bookname;
            cout<<"Enter book id"<<endl;
            cin>>bookid;
            cout<<"enter book name"<<endl;
            cin>>bookname;
            lib.addBook(bookid,bookname);
            break;

        }
        case 2:
        {
            lib.displayBooks();
            break;
        }
        case 3:
        {
            string bookName;
            cout<<"Enter the student asked book name"<<endl;
            cin>>bookName;
            lib.borrowBook(bookName);
            lib.displayBooks();
            break;
        }
        case 4:
        {
            lib.displaystudent();
            break;
        }
        default:
        {
            cout<<"invalid choice"<<endl;
        }
        }
    }

    return 0;
}
