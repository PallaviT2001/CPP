cmake_minimum_required(VERSION 3.16)

project(College_project1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(College_project1 main.cpp
    college.h college.cpp
    college_management.h college_management.cpp
    student.h student.cpp
    faculty.h faculty.cpp
    personaldetails.h personaldetails.cpp)

include(GNUInstallDirs)
install(TARGETS College_project1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
