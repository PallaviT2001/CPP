cmake_minimum_required(VERSION 3.16)

project(template_task LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(template_task main.cpp
    temp.h temp.cpp
    tempclass.h tempclass.cpp
    tempcar.h tempcar.cpp
    cartemplate.h cartemplate.cpp
    mobiletemplate.h mobiletemplate.cpp
    bottletemplate.h bottletemplate.cpp
    laptoptemplate.h laptoptemplate.cpp)

include(GNUInstallDirs)
install(TARGETS template_task
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
