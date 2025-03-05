#include "faculty.h"

Faculty::Faculty() : Personaldetails() {}

Faculty::Faculty(int id, string name, int age) : Personaldetails(id, name, age) {}

void Faculty::display() const {
    cout << "Faculty: " << m_name << ", Age: " << m_age << endl;
}
