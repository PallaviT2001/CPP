cmake_minimum_required(VERSION 3.16)

project(student_map_task LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(student_map_task main.cpp
    student.h student.cpp)

include(GNUInstallDirs)
install(TARGETS student_map_task
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
