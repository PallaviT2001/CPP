cmake_minimum_required(VERSION 3.16)

project(friend_class LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(friend_class main.cpp
    likitha.h likitha.cpp
    person.h person.cpp
    animal.h animal.cpp
    elephant.h elephant.cpp)

include(GNUInstallDirs)
install(TARGETS friend_class
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
