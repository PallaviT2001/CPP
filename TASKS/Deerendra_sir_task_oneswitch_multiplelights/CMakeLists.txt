cmake_minimum_required(VERSION 3.16)

project(Deerendra_sir_task_oneswitch_multiplelights LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Deerendra_sir_task_oneswitch_multiplelights main.cpp
    wire.h wire.cpp
    switch.h switch.cpp
    light.h light.cpp




)

include(GNUInstallDirs)
install(TARGETS Deerendra_sir_task_oneswitch_multiplelights
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
