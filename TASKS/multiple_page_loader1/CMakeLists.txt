cmake_minimum_required(VERSION 3.16)

project(multiple_page_loader1 VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOMOC ON)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 6.2 COMPONENTS Quick REQUIRED)

qt_add_executable(appmultiple_page_loader1
    main.cpp
)

qt_add_qml_module(appmultiple_page_loader1
    URI multiple_page_loader1
    VERSION 1.0
    QML_FILES main.qml
    QML_FILES page1.qml
    QML_FILES page2.qml
    QML_FILES page3.qml
    QML_FILES page4.qml
    QML_FILES page5.qml
)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
set_target_properties(appmultiple_page_loader1 PROPERTIES
#    MACOSX_BUNDLE_GUI_IDENTIFIER com.example.appmultiple_page_loader1
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

target_link_libraries(appmultiple_page_loader1
    PRIVATE Qt6::Quick)

include(GNUInstallDirs)
install(TARGETS appmultiple_page_loader1
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
