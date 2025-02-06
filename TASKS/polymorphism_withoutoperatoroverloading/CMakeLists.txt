cmake_minimum_required(VERSION 3.16)

project(polymorphism_withoutoperatoroverloading LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(polymorphism_withoutoperatoroverloading main.cpp
    distance.h distance.cpp
    base.h base.cpp)

include(GNUInstallDirs)
install(TARGETS polymorphism_withoutoperatoroverloading
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
