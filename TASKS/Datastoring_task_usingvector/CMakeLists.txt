cmake_minimum_required(VERSION 3.16)

project(Datastoring_task_usingvector LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Datastoring_task_usingvector main.cpp
    student.h student.cpp
    fileoperation.h fileoperation.cpp
    xml.h xml.cpp
    csv.h csv.cpp
    json.h json.cpp)

include(GNUInstallDirs)
install(TARGETS Datastoring_task_usingvector
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
