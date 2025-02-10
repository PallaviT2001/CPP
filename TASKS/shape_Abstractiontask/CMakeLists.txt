cmake_minimum_required(VERSION 3.16)

project(shape_Abstractiontask LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(shape_Abstractiontask main.cpp
    shape.h shape.cpp
    rectangle.h rectangle.cpp
    circle.h circle.cpp)

include(GNUInstallDirs)
install(TARGETS shape_Abstractiontask
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
