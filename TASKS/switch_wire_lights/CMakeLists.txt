cmake_minimum_required(VERSION 3.16)

project(switch_wire_lights LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(switch_wire_lights main.cpp
    light.h light.cpp
    switch.h switch.cpp
    wire.h wire.cpp)

include(GNUInstallDirs)
install(TARGETS switch_wire_lights
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
