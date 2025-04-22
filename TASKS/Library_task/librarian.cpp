#include "librarian.h"
#include <iostream>

Librarian::Librarian(string name)
{
    cout<<"Librarian default Constructor called"<<endl;
    m_name = name;
}

Librarian::~Librarian()
{
    cout<<"Librarian Destructor called"<<endl;
}

void Librarian::issueBooktostudent(Student& student, Book* book)
{

    cout<<"Book is issued to "<<student.getName()<<" successfully ,Book name: "<<book->getName()<<endl;
    student.borrowBookfunction(book);
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
