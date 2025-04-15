#include "Student.h"
#include <iostream>
using namespace std;

Student::Student()
{
    cout<<"student constructor called"<<endl;
}

Student::~Student()
{
    cout<<"student destructor called"<<endl;
}

Student::Student(string studentname, int studentid)
{
    m_studentname=studentname;
    m_studentid=studentid;
}

void Student::borrowBook(Book* book)
{
    if (!book->isBorrowed)
    {
        borrowedBooks.push_back(book);
        book->isBorrowed = true;
        cout<<m_studentname<<" is requesting "<<book->gettitle()<<" Book to librarian"<<endl;
        cout<<"Book borrowed successfully"<<endl;
    }
    else
    {
        cout<<"Book not found in the library"<<endl;
    }
}





























