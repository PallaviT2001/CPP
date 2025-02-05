cmake_minimum_required(VERSION 3.16)

project(polymorphism_overiding LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(polymorphism_overiding main.cpp
    vehicle.h vehicle.cpp
    bike.h bike.cpp
    car.h car.cpp)

include(GNUInstallDirs)
install(TARGETS polymorphism_overiding
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
