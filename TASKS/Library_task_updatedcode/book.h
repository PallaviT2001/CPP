#ifndef BOOK_H
#define BOOK_H
#include <iostream>
using namespace std;

class Book
{
private:
    string title;
public:
    Book();
    ~Book();
    Book(const string &title);
    string gettitle();
};

#endif
