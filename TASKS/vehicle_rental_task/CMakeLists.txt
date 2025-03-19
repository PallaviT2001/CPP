cmake_minimum_required(VERSION 3.16)

project(vehicle_rental_task LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(vehicle_rental_task main.cpp
    bike.h bike.cpp
    car.h car.cpp
    customerdetails.h customerdetails.cpp
    fileoperation.h fileoperation.cpp
    vehicle.h vehicle.cpp
    vehiclemanager.h vehiclemanager.cpp)

include(GNUInstallDirs)
install(TARGETS vehicle_rental_task
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
