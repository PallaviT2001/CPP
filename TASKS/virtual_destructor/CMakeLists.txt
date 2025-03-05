cmake_minimum_required(VERSION 3.16)

project(virtual_destructor LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(virtual_destructor main.cpp
    wire.h wire.cpp
    polycab.h polycab.cpp)

include(GNUInstallDirs)
install(TARGETS virtual_destructor
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
