cmake_minimum_required(VERSION 3.16)

project(callbyvalue_callbyreference LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(callbyvalue_callbyreference main.cpp)

include(GNUInstallDirs)
install(TARGETS callbyvalue_callbyreference
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
