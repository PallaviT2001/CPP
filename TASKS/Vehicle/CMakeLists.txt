cmake_minimum_required(VERSION 3.16)

project(Vehicle LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Vehicle main.cpp
    bike.h bike.cpp
    car.h car.cpp
    fileoperation.h fileoperation.cpp
    vehicle.h vehicle.cpp
    vehiclemanagement.h vehiclemanagement.cpp
    rentaldetails.h rentaldetails.cpp)

include(GNUInstallDirs)
install(TARGETS Vehicle
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
