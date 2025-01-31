cmake_minimum_required(VERSION 3.16)

project(memory_allocation_in_heap LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(memory_allocation_in_heap main.cpp
    student.h student.cpp

)

include(GNUInstallDirs)
install(TARGETS memory_allocation_in_heap
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
