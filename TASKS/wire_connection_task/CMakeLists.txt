cmake_minimum_required(VERSION 3.16)

project(wire_connection_task LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(wire_connection_task main.cpp
    ac.h ac.cpp
    wire.h wire.cpp
    switch.h switch.cpp)

include(GNUInstallDirs)
install(TARGETS wire_connection_task
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
