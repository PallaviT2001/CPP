cmake_minimum_required(VERSION 3.16)

project(map_task1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(map_task1 main.cpp
    capital.h capital.cpp
    state.h state.cpp)

include(GNUInstallDirs)
install(TARGETS map_task1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
