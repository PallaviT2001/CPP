cmake_minimum_required(VERSION 3.16)

project(Plugin_task_Deerendrasir LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Plugin_task_Deerendrasir main.cpp
    student.h student.cpp
    studentmanagement.h studentmanagement.cpp
    fileoperations.h fileoperations.cpp
    csv.h csv.cpp
    xml.h xml.cpp
    json.h json.cpp)

include(GNUInstallDirs)
install(TARGETS Plugin_task_Deerendrasir
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
