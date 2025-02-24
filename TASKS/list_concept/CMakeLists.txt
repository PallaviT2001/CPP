cmake_minimum_required(VERSION 3.16)

project(list_concept LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(list_concept main.cpp)

include(GNUInstallDirs)
install(TARGETS list_concept
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
