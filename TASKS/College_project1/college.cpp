#include "college.h"

College::College() {
    cout << "College constructor called" << endl;
}

College::~College() {
    cout << "College destructor called" << endl;
}

void College::addStudent(int id, string name, int age) {
    m_students.emplace_back(id, name, age);
}

void College::deleteStudent(int id) {
    for (auto it = m_students.begin(); it != m_students.end(); ++it) {
        if (it->getId() == id) {
            m_students.erase(it);
            cout << "Student with ID " << id << " removed." << endl;
            return;
        }
    }
    cout << "Student not found!" << endl;
}

void College::updateStudent(int id) {
    for (auto &student : m_students) {
        if (student.getId() == id) {
            string name;
            int age;
            cout << "Enter new name: ";
            cin >> name;
            cout << "Enter new age: ";
            cin >> age;
            student.setDetails(name, age);
            cout << "Student updated." << endl;
            return;
        }
    }
    cout << "Student not found!" << endl;
}

void College::displayStudents() {
    for (const auto &student : m_students) student.display();
}

void College::addFaculty(int id, string name, int age) {
    m_faculties.emplace_back(id, name, age);
}

void College::deleteFaculty(int id) {
    for (auto it = m_faculties.begin(); it != m_faculties.end(); ++it) {
        if (it->getId() == id) {
            m_faculties.erase(it);
            cout << "Faculty with ID " << id << " removed." << endl;
            return;
        }
    }
    cout << "Faculty not found!" << endl;
}

void College::updateFaculty(int id) {
    for (auto &faculty : m_faculties) {
        if (faculty.getId() == id) {
            string name;
            int age;
            cout << "Enter new name: ";
            cin >> name;
            cout << "Enter new age: ";
            cin >> age;
            faculty.setDetails(name, age);
            cout << "Faculty updated." << endl;
            return;
        }
    }
    cout << "Faculty not found!" << endl;
}

void College::displayFaculties() {
    for (const auto &faculty : m_faculties) faculty.display();
}
