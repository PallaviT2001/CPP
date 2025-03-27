cmake_minimum_required(VERSION 3.16)

project(Vehicle LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Vehicle main.cpp
    cashpayment.h cashpayment.cpp
    onlinepayment.h onlinepayment.cpp
    rentalbikedetails.h rentalbikedetails.cpp
    rentalcardetails.h rentalcardetails.cpp
    rentalfileoperation.h rentalfileoperation.cpp
    rentalvehicaldetails.h rentalvehicaldetails.cpp
    rentalvehicalmanagement.h rentalvehicalmanagement.cpp
    admindetails.h admindetails.cpp
    logindetails.h logindetails.cpp
    loginmanagementuser.h loginmanagementuser.cpp
    paymentmode.h paymentmode.cpp
    rentaldetails.h rentaldetails.cpp
    userdetails.h userdetails.cpp)

include(GNUInstallDirs)
install(TARGETS Vehicle
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
