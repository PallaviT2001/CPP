cmake_minimum_required(VERSION 3.16)

project(Abstraction_task LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Abstraction_task main.cpp
    car.h car.cpp
    engine.h engine.cpp
    key.h key.cpp
    accelerator.h accelerator.cpp
    break.h break.cpp
)

include(GNUInstallDirs)
install(TARGETS Abstraction_task
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
