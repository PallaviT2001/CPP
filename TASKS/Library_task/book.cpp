#include "book.h"
#include <iostream>

Book::Book(string bookName, string bookStatus)
{
    cout<<"Book Constructor called"<<endl;
    m_bookName = bookName;
    m_bookStatus = bookStatus;
}

Book::~Book()
{
    cout<<"Book Destructor called"<<endl;
}

void Book::display()
{
    cout<<m_bookName<<" "<<m_bookStatus<<endl;
}

string Book::getName()
{
    return m_bookName;
}

string Book::getStatus()
{
    return m_bookStatus;
}

void Book::setStatus(string bookStatus)
{
    m_bookStatus = bookStatus;
}
