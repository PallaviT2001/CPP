cmake_minimum_required(VERSION 3.16)

project(Vehicle_RentalManagementtask LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Vehicle_RentalManagementtask main.cpp
    admins.h admins.cpp
    RentalDetails.h RentalDetails.cpp
    RentalFileOperation.h RentalFileOperation.cpp
    loginmanagementsystem.h loginmanagementsystem.cpp
    RentalBikeDetails.h RentalBikeDetails.cpp
    RentalCarDetails.h RentalCarDetails.cpp
    rentalvehicaldetails.h rentalvehicaldetails.cpp
    users.h users.cpp
    RentalVehicalManagement.h RentalVehicalManagement.cpp
    paymentmode.h paymentmode.cpp
    cashpayment.h cashpayment.cpp
    onlinepayment.h onlinepayment.cpp

)

include(GNUInstallDirs)
install(TARGETS Vehicle_RentalManagementtask
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
