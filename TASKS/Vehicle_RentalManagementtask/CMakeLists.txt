cmake_minimum_required(VERSION 3.16)

project(Vehicle_RentalManagementtask LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Vehicle_RentalManagementtask main.cpp
    rentalvehicledetails.h rentalvehicledetails.cpp
    rentalcar.h rentalcar.cpp
    rentalbike.h rentalbike.cpp
    fileoperation.h fileoperation.cpp
    vehiclemanager.h vehiclemanager.cpp
    customer.h customer.cpp

)

include(GNUInstallDirs)
install(TARGETS Vehicle_RentalManagementtask
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
