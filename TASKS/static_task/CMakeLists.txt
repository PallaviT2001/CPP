cmake_minimum_required(VERSION 3.16)

project(static_task LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(static_task main.cpp
    mystatic.h mystatic.cpp)

include(GNUInstallDirs)
install(TARGETS static_task
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
