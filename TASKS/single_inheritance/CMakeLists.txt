cmake_minimum_required(VERSION 3.16)

project(single_inheritance LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(single_inheritance main.cpp
    person.h person.cpp
    employe.h employe.cpp
    senioremploye.h senioremploye.cpp)

include(GNUInstallDirs)
install(TARGETS single_inheritance
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
