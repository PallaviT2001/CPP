#ifndef CSV_H
#define CSV_H

#include "fileoperations.h"
#include <fstream>

class CSV : public FileOperations {
public:
    void writeData(const list<Student>& students) override;
    list<Student> readData() override;
};

#endif // CSV_H
