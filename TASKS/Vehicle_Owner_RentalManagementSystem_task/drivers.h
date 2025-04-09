#ifndef DRIVERS_H
#define DRIVERS_H
#include <string>

class Drivers
{
public:
    Drivers();
    ~Drivers();

    void setName(std::string newName);
    std::string getName();
private:
    std::string m_name;
};

#endif // DRIVER_H
