cmake_minimum_required(VERSION 3.16)

project(plugin_task_updatedcode LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(plugin_task_updatedcode main.cpp
    fileoperations.h fileoperations.cpp
    student.h student.cpp
    studentmanagement.h studentmanagement.cpp
    csv.h csv.cpp
    txt.h txt.cpp)

include(GNUInstallDirs)
install(TARGETS plugin_task_updatedcode
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
