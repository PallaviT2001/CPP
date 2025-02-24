cmake_minimum_required(VERSION 3.16)

project(wire_connection_updatedcode1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(wire_connection_updatedcode1 main.cpp
    ac.h ac.cpp
    switch.h switch.cpp
    wire.h wire.cpp
    polycab.h polycab.cpp
    finolex.h finolex.cpp
    havels.h havels.cpp)

include(GNUInstallDirs)
install(TARGETS wire_connection_updatedcode1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
