cmake_minimum_required(VERSION 3.16)

project(task_all_concepts LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(task_all_concepts main.cpp
    task1.h task1.cpp
    task2.h
    task2.cpp)

include(GNUInstallDirs)
install(TARGETS task_all_concepts
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
