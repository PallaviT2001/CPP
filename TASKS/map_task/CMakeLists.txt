cmake_minimum_required(VERSION 3.16)

project(map_task LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(map_task main.cpp
    capital.h capital.cpp
    state.h state.cpp)

include(GNUInstallDirs)
install(TARGETS map_task
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
