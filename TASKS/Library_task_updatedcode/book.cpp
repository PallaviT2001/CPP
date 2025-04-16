#include "Book.h"
#include <iostream>

Book::Book()
{
    cout<<"Book constructor called"<<endl;
}

Book::~Book()
{
    cout<<"Book Destructor called"<<endl;
}

Book::Book(string title, string author):m_title(title),m_author(author),isBorrowed(false)
{
    cout<<"Book parameterized constructor called"<<endl;
}

void Book::display()
{
    cout<<"Book title: "<<m_title<<endl;
    if(isBorrowed)
    {
        cout<<"[Borrowed]"<<endl;
    }
}

string Book::gettitle()
{
    return m_title;
}

