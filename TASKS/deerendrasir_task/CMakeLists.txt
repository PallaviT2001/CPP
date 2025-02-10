cmake_minimum_required(VERSION 3.16)

project(deerendrasir_task LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(deerendrasir_task main.cpp
    ac.h ac.cpp
    switch.h switch.cpp
    wire.h wire.cpp)

include(GNUInstallDirs)
install(TARGETS deerendrasir_task
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
