#ifndef DRIVERS_H
#define DRIVERS_H
#include <string>

class Drivers
{
private:
    std::string m_name;
public:
    Drivers();
    ~Drivers();

    void setName(std::string newName);
    std::string getName();
};

#endif
