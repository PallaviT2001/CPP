#include "personaldetails.h"

Personaldetails::Personaldetails() : m_id(0), m_name(""), m_age(0) {}

Personaldetails::Personaldetails(int id, string name, int age) : m_id(id), m_name(name), m_age(age) {}

int Personaldetails::getId() const { return m_id; }
string Personaldetails::getName() const { return m_name; }
int Personaldetails::getAge() const { return m_age; }

void Personaldetails::setDetails(string name, int age) {
    m_name = name;
    m_age = age;
}
