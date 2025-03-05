#ifndef PERSONALDETAILS_H
#define PERSONALDETAILS_H

#include <iostream>
using namespace std;

class Personaldetails {
protected:
    int m_id;
    string m_name;
    int m_age;

public:
    Personaldetails();
    Personaldetails(int id, string name, int age);

    int getId() const;
    string getName() const;
    int getAge() const;
    void setDetails(string name, int age);
};

#endif
