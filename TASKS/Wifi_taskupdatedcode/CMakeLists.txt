cmake_minimum_required(VERSION 3.16)

project(Wifi_taskupdatedcode LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Wifi_taskupdatedcode main.cpp
    fileoperation.h fileoperation.cpp
    wifi.h wifi.cpp
    wifimanager.h wifimanager.cpp)

include(GNUInstallDirs)
install(TARGETS Wifi_taskupdatedcode
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
