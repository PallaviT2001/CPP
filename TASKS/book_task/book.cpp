#include "book.h"
#include<iostream>
using namespace std;
#include "string"
#include "book.h"


Book::Book() {
    cout<<"Default constructor\n";
    m_length=10;
    m_width=20;
    m_name="c++";
    m_numofpages=200;
    m_color="white";
    display();
}

Book::Book(float length,int numofpages,float width)
{
    cout<<"parameterized\n";
    m_length=length;
    m_numofpages=numofpages;
    m_width=width;
    display();
}

void Book::display()
{
    cout<<"length"<<m_length<<endl;
    cout<<"width:"<<m_width<<endl;
    cout<<"name:"<<m_name<<endl;
    cout<<"noofpages:"<<m_numofpages<<endl;
    cout<<"colour:"<<m_color<<endl;
    cout<<"c++"<<endl;

}
