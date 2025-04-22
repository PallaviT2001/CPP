#include "library.h"
#include <iostream>

Library::Library(Librarian *librarian)
{
    cout<<"library default constructor called"<<endl;
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
    string bookName =  student.StudentRequestedBook();

    Book* book = m_librarian->searchBook(m_bookList, bookName);
    if(book != NULL)
    {
        if(book->getStatus() == "Available")
        {
            m_librarian->issueBooktostudent(student, book);
            m_librarian->studenthistory(student, m_studentRecord);
            book->setStatus("Issued");
        }
    }
    else
    {
        cout<<"Book with "<<bookName<<" is not available"<<endl;
    }
}

void Library::addBooktolist(string bookName,string bookStatus)
{
    m_bookList.push_back(new Book(bookName,bookStatus));
}

void Library::displayBooks()
{
    for(auto Book: m_bookList)
    {
        Book->displaybooks();
    }
}

void Library::displayStudentHistory()
{
    for(auto StudentRecord: m_studentRecord)
    {
        StudentRecord->displaystudents();
    }
}






