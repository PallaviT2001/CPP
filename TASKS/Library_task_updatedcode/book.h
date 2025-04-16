#ifndef BOOK_H
#define BOOK_H
#include <iostream>
using namespace std;

class Book
{
private:
    string m_title;
    string m_author;
public:
    Book();
    ~Book();
    Book(string title,string author);
    bool isBorrowed;
    void display();
    string gettitle();
};

#endif

