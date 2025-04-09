#include "owner.h"
#include "drivers.h"
#include <iostream>

using namespace std;

int main()
{
    Owner* owner = new Owner();
    Drivers* driver = new Drivers;

    driver->setName("Pallavi");
    owner->assignDriver(driver);

    delete driver;
    delete owner;

    return 0;
}
