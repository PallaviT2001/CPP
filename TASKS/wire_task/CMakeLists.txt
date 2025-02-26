cmake_minimum_required(VERSION 3.16)

project(wire_task LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(wire_task main.cpp
    wire.h wire.cpp
    finolex.h finolex.cpp
    polycab.h polycab.cpp
    havels.h havels.cpp)

include(GNUInstallDirs)
install(TARGETS wire_task
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
