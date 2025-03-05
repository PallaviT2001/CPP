cmake_minimum_required(VERSION 3.16)

project(Likhitha_Task_on_Plugin LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Likhitha_Task_on_Plugin main.cpp
    student.h student.cpp
    studentmanagement.h studentmanagement.cpp
    fileoperations.h fileoperations.cpp
    csv.h csv.cpp
    xml.h xml.cpp)

include(GNUInstallDirs)
install(TARGETS Likhitha_Task_on_Plugin
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
