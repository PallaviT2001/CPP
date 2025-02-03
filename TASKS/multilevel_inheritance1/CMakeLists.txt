cmake_minimum_required(VERSION 3.16)

project(multilevel_inheritance1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(multilevel_inheritance1 main.cpp
    gamingphone.h gamingphone.cpp
    mobilephone.h mobilephone.cpp
    smartphone.h smartphone.cpp)

include(GNUInstallDirs)
install(TARGETS multilevel_inheritance1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
