cmake_minimum_required(VERSION 3.16)

project(Vehicle_Rental_updatedcode LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Vehicle_Rental_updatedcode main.cpp
    customer.h customer.cpp
    fileoperation.h fileoperation.cpp
    rentalbike.h rentalbike.cpp
    rentalcar.h rentalcar.cpp
    rentalvehicledetails.h rentalvehicledetails.cpp
    vehiclemanager.h vehiclemanager.cpp
    admins.h admins.cpp
    users.h users.cpp
    loginmanagementsystem.h loginmanagementsystem.cpp)

include(GNUInstallDirs)
install(TARGETS Vehicle_Rental_updatedcode
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
