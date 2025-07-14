cmake_minimum_required(VERSION 3.16)

project(qml_Rectangle_circle_task VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOMOC ON)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 6.2 COMPONENTS Quick REQUIRED)

qt_add_executable(appqml_Rectangle_circle_task
    main.cpp
)

qt_add_qml_module(appqml_Rectangle_circle_task
    URI qml_Rectangle_circle_task
    VERSION 1.0
    QML_FILES main.qml 
)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
set_target_properties(appqml_Rectangle_circle_task PROPERTIES
#    MACOSX_BUNDLE_GUI_IDENTIFIER com.example.appqml_Rectangle_circle_task
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

target_link_libraries(appqml_Rectangle_circle_task
    PRIVATE Qt6::Quick)

include(GNUInstallDirs)
install(TARGETS appqml_Rectangle_circle_task
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
