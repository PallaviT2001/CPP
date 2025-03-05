cmake_minimum_required(VERSION 3.16)

project(college_studentlist_facultyvector LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(college_studentlist_facultyvector main.cpp
    college.h college.cpp

    faculty.h faculty.cpp
    student.h student.cpp
    college_management.h college_management.cpp
    personaldetails.h personaldetails.cpp)

include(GNUInstallDirs)
install(TARGETS college_studentlist_facultyvector
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
