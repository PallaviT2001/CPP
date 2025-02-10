cmake_minimum_required(VERSION 3.16)

project(diamond_problem LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(diamond_problem main.cpp
    engine.h engine.cpp
    petrolengine.h petrolengine.cpp
    cngengine.h cngengine.cpp
    hybridcar.h hybridcar.cpp)

include(GNUInstallDirs)
install(TARGETS diamond_problem
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
