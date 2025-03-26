#ifndef BOOK_H
#define BOOK_H
#include <iostream>
using namespace std;
#include "string"

class Book
{
    private:
    float m_length;
    void display();

    public:
    float m_width;
    string m_name;
    Book();
    Book(float m_length,int m_numofpages,float m_width);

    protected:
    int m_numofpages;
    string m_color;
};

#endif
