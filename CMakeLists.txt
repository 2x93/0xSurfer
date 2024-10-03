cmake_minimum_required(VERSION 3.29)
project(0xSurfer)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        WebEngineWidgets
        REQUIRED)

add_executable(0xSurfer src/main.cpp
        src/browser.cpp
        include/browser.h
        include/browser.ui
)
target_link_libraries(0xSurfer
        Qt::Core
        Qt::Gui
        Qt::Widgets
        Qt::WebEngineWidgets
)

