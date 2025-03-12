cmake_minimum_required(VERSION 3.16)

project(Wifi_task LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Wifi_task main.cpp
    wifi.h wifi.cpp
    fileoperation.h fileoperation.cpp
    wifimanager.h wifimanager.cpp)

include(GNUInstallDirs)
install(TARGETS Wifi_task
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
