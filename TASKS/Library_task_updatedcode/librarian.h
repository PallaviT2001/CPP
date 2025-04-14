#ifndef LIBRARIAN_H
#define LIBRARIAN_H
#include <vector>
#include <iostream>
using namespace std;
#include "book.h"
#include "library.h"

class Librarian:public Library
{
public:
    Librarian();
    ~Librarian();
    void addBook(const std::string& title);
    bool hasBook(string &title);
    bool issueBook(const std::string& title);
    void showAvailableBooks();
};
#endif





