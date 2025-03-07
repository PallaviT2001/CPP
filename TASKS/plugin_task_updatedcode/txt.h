#ifndef TXT_H
#define TXT_H

#include "fileoperations.h"
#include <fstream>

class TXT : public FileOperations {
public:
    void writeData(const list<Student>& students) override;
    list<Student> readData() override;
};

#endif // TXT_H
