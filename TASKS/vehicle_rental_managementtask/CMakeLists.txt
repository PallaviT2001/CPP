cmake_minimum_required(VERSION 3.16)

project(vehicle_rental_managementtask LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(vehicle_rental_managementtask main.cpp

    vehiclemanager.h vehiclemanager.cpp
    customer.h customer.cpp
    fileoperation.h fileoperation.cpp
    rentalbike.h rentalbike.cpp
    rentalcar.h rentalcar.cpp
    rentalvehicledetails.h rentalvehicledetails.cpp






)

include(GNUInstallDirs)
install(TARGETS vehicle_rental_managementtask
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
