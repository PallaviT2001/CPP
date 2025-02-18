cmake_minimum_required(VERSION 3.16)

project(inlinefunction LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(inlinefunction main.cpp
    operations.h operations.cpp)

include(GNUInstallDirs)
install(TARGETS inlinefunction
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
