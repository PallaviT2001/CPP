cmake_minimum_required(VERSION 3.16)

project(shallowcopy_deepcopy LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(shallowcopy_deepcopy main.cpp
    shallowcopy.h shallowcopy.cpp
    deepcopy.h deepcopy.cpp)

include(GNUInstallDirs)
install(TARGETS shallowcopy_deepcopy
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
