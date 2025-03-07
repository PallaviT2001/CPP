cmake_minimum_required(VERSION 3.16)

project(Plugin_task_using_fileoperations LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Plugin_task_using_fileoperations main.cpp
    csv.h csv.cpp


    student.h student.cpp

    txt.h txt.cpp
)

include(GNUInstallDirs)
install(TARGETS Plugin_task_using_fileoperations
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
