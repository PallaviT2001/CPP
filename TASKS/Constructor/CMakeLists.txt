cmake_minimum_required(VERSION 3.16)

project(Constructor LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Constructor main.cpp
    switch.h switch.cpp
    wire.h wire.cpp
    ac.h ac.cpp)

include(GNUInstallDirs)
install(TARGETS Constructor
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
