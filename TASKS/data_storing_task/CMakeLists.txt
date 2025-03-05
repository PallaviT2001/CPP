cmake_minimum_required(VERSION 3.16)

project(data_storing_task LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(data_storing_task main.cpp
    student.h student.cpp
    csv.h csv.cpp
    xml.h xml.cpp
    json.h json.cpp
    fileoperation.h fileoperation.cpp)

include(GNUInstallDirs)
install(TARGETS data_storing_task
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
