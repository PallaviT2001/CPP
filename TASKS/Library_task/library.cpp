#include "library.h"
#include <iostream>

Library::Library(Librarian *librarian)
{
    cout<<"librarian constructor called"<<endl;
}

Library::~Library()
{
    cout<<"Library Destructor called"<<endl;
    for(auto book:m_bookList)
    {
        delete book;
    }
    for(auto student:m_studentRecord)
    {
        delete student;
    }
}

void Library:: studentBookBorrowfunction(Student& student)
{
    string bookName =  student.getRequestedBook();

    Book* book = m_librarian->searchBook(m_bookList, bookName);
    if(book != NULL)
    {
        if(book->getStatus() == "Available")
        {
            m_librarian->issueBook(student, book);
            m_librarian->studenthistory(student, m_studentRecord);
            book->setStatus("Issued");
        }
    }
    else
    {
        cout<<"Book with "<<bookName<<" is not available"<<endl;
    }
}

void Library::addBook(string bookName,string bookStatus)
{
    m_bookList.push_back(new Book(bookName,bookStatus));
}

void Library::displayBooks()
{
    for(auto Book: m_bookList)
    {
        Book->display();
    }
}

void Library::displayStudentRecord()
{
    for(auto StudentRecord: m_studentRecord)
    {
        StudentRecord->display();
    }
}






