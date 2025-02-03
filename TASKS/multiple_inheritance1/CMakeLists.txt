cmake_minimum_required(VERSION 3.16)

project(multiple_inheritance1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(multiple_inheritance1 main.cpp
    camera.h camera.cpp
    phone.h phone.cpp
    music.h music.cpp
    smartphone.h smartphone.cpp)

include(GNUInstallDirs)
install(TARGETS multiple_inheritance1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
