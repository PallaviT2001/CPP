#include "college.h"

using namespace std;

// Student Constructor
Student::Student(int id, string name, string branch) : m_id(id), m_name(name), m_branch(branch) {}

// Get Student ID
int Student::getId() const {
    return m_id;
}

// Set Student Details
void Student::setDetails(string name, string branch) {
    m_name = name;
    m_branch = branch;
}

// Display Student
void Student::display() const {
    cout << "ID: " << m_id << ", Name: " << m_name << ", Branch: " << m_branch << endl;
}

// Add Student
void College::addStudent(int id, string name, string branch) {
    m_students.emplace_back(id, name, branch);
}

// Delete Student by ID
void College::deleteStudent(int id) {
    for (auto it = m_students.begin(); it != m_students.end(); ++it) {
        if (it->getId() == id) {
            m_students.erase(it);
            cout << "Student with ID " << id << " has been removed.\n";
            return;
        }
    }
    cout << "Student with ID " << id << " not found!\n";
}

// Update Student by ID
void College::updateStudent(int id, string name, string branch) {
    for (auto &student : m_students) {
        if (student.getId() == id) {
            student.setDetails(name, branch);
            cout << "Student details updated.\n";
            return;
        }
    }
    cout << "Student with ID " << id << " not found!\n";
}

// Display all Students
void College::displayStudents() const {
    for (const auto &student : m_students) {
        student.display();
    }
}
