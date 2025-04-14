#include "books.h"

Books::Books()
{
    cout<<"Books constructor called"<<endl;
}

Books::~Books()
{
    cout<<"Books destructor called"<<endl;
}

Books::Books(int bookid, string bookname)
{
    this->bookid=bookid;
    this->bookname=bookname;
}

int Books::getbookid()
{
    return bookid;
}

string Books::getbookname()
{
    return bookname;
}
