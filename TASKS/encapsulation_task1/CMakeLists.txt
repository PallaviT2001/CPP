cmake_minimum_required(VERSION 3.16)

project(encapsulation_task1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(encapsulation_task1 main.cpp
    person.h person.cpp
    student.h student.cpp)

include(GNUInstallDirs)
install(TARGETS encapsulation_task1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
