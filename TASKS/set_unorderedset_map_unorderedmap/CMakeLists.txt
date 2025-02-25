cmake_minimum_required(VERSION 3.16)

project(set_unorderedset_map_unorderedmap LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(set_unorderedset_map_unorderedmap main.cpp)

include(GNUInstallDirs)
install(TARGETS set_unorderedset_map_unorderedmap
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
