cmake_minimum_required(VERSION 3.16)

project(Vehicle LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Vehicle main.cpp
    bike_fileoperation.h bike_fileoperation.cpp
    car_fileoperation.h car_fileoperation.cpp
    cash.h cash.cpp
    customer_fileoperation.h customer_fileoperation.cpp
    file_operations.h file_operations.cpp
    loginmanagement.h loginmanagement.cpp
    paymentmode.h paymentmode.cpp
    rental_bike_details.h rental_bike_details.cpp
    rental_car_details.h rental_car_details.cpp
    rental_customer_details.h rental_customer_details.cpp
    rental_vehicle_details.h rental_vehicle_details.cpp
    upi.h upi.cpp
    user.h user.cpp
    user_fileoperation.h user_fileoperation.cpp
    vehicle_manager.h vehicle_manager.cpp



















)

include(GNUInstallDirs)
install(TARGETS Vehicle
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
