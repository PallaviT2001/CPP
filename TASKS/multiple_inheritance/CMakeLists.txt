cmake_minimum_required(VERSION 3.16)

project(multiple_inheritance LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(multiple_inheritance main.cpp
    phone.h phone.cpp
    camera.h camera.cpp
    music.h music.cpp
    smartphone.h smartphone.cpp)

include(GNUInstallDirs)
install(TARGETS multiple_inheritance
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
