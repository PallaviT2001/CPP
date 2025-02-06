cmake_minimum_required(VERSION 3.16)

project(ATM_abstraction_task LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ATM_abstraction_task main.cpp
    atm.h atm.cpp
    bankaccount.h bankaccount.cpp)

include(GNUInstallDirs)
install(TARGETS ATM_abstraction_task
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
