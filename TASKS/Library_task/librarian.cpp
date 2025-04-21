#include "librarian.h"
#include <iostream>

Librarian::Librarian(string name)
{
    cout<<"Librarian Constructor called"<<endl;
    m_name = name;
}

Librarian::~Librarian()
{
    cout<<"Librarian Destructor called"<<endl;
}

void Librarian::issueBook(Student& student, Book* book)
{
    cout<<book->getName()<<" book is issued to "<<student.getName()<<endl;
    student.borrowBook(book);
}

void Librarian::studenthistory(Student &student, list<StudentRecord*>& studentRecord)
{
    studentRecord.push_back(new StudentRecord(student));
}

Book* Librarian::searchBook(list<Book*>& bookList, string bookName)
{
    for(auto Book:bookList)
    {
        if(Book->getName() == bookName)
        {
            return Book;
        }
    }
    return NULL;
}
