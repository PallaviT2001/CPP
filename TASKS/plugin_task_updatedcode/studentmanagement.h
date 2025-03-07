#ifndef STUDENTMANAGEMENT_H
#define STUDENTMANAGEMENT_H

#include <iostream>
#include "student.h"
#include "fileoperations.h"
#include "txt.h"
#include "csv.h"
#include <list>

class StudentManagement {
private:
    list<Student> students;
    FileOperations* fileHandler;

public:
    StudentManagement();
    ~StudentManagement();
    void addStudent();
    void saveData(int choice);
    void loadData(int choice);
    void display();
};

#endif // STUDENTMANAGEMENT_H
