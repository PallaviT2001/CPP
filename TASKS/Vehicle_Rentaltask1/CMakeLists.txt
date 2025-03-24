cmake_minimum_required(VERSION 3.16)

project(Vehicle_Rentaltask1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Vehicle_Rentaltask1 main.cpp
    customer.h customer.cpp
    fileoperation.h fileoperation.cpp
    rentalbike.h rentalbike.cpp
    rentalcar.h rentalcar.cpp
    rentalvehicledetails.h rentalvehicledetails.cpp
    vehiclemanager.h vehiclemanager.cpp
    loginmanagement.h loginmanagement.cpp
    user.h user.cpp
    userfileoperation.h userfileoperation.cpp)

include(GNUInstallDirs)
install(TARGETS Vehicle_Rentaltask1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
