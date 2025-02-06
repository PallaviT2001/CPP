cmake_minimum_required(VERSION 3.16)

project(polymorphism_operatoroverloading LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(polymorphism_operatoroverloading main.cpp

    add.h add.cpp
)

include(GNUInstallDirs)
install(TARGETS polymorphism_operatoroverloading
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
