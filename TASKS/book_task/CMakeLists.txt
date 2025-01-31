cmake_minimum_required(VERSION 3.16)

project(book_task LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(book_task main.cpp
    book.h book.cpp)

include(GNUInstallDirs)
install(TARGETS book_task
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
