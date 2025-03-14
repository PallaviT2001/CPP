cmake_minimum_required(VERSION 3.16)

project(vehicle_rental_managementtask LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(vehicle_rental_managementtask main.cpp
    vehicle.h vehicle.cpp
    vehiclemanager.h vehiclemanager.cpp
    bike.h bike.cpp
    car.h car.cpp
    customer.h customer.cpp)

include(GNUInstallDirs)
install(TARGETS vehicle_rental_managementtask
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
