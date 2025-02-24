cmake_minimum_required(VERSION 3.16)

project(staff_vector_student_list_task LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(staff_vector_student_list_task main.cpp
    college.h college.cpp)

include(GNUInstallDirs)
install(TARGETS staff_vector_student_list_task
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
