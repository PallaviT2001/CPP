cmake_minimum_required(VERSION 3.16)

project(Vehicle_task LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Vehicle_task main.cpp
    cashpayment.h cashpayment.cpp
    onlinepayment.h onlinepayment.cpp
    paymentmode.h paymentmode.cpp
    rentalbikedetails.h rentalbikedetails.cpp
    rentalcardetails.h rentalcardetails.cpp
    rentaldetails.h rentaldetails.cpp
    rentalfileoperation.h rentalfileoperation.cpp
    rentalvehicalmanagement.h rentalvehicalmanagement.cpp
    rentalvehicaldetails.h rentalvehicaldetails.cpp
)

include(GNUInstallDirs)
install(TARGETS Vehicle_task
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
