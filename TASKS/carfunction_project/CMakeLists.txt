cmake_minimum_required(VERSION 3.16)

project(carfunction_project LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(carfunction_project main.cpp
    key.h key.cpp
    engine.h engine.cpp
    accelerator.h accelerator.cpp
    brake.h brake.cpp
    car.h car.cpp)

include(GNUInstallDirs)
install(TARGETS carfunction_project
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
