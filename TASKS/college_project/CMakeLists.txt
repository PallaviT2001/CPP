cmake_minimum_required(VERSION 3.16)

project(college_project LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(college_project main.cpp
    college.h college.cpp
    student.h student.cpp
    faculty.h faculty.cpp)

include(GNUInstallDirs)
install(TARGETS college_project
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
