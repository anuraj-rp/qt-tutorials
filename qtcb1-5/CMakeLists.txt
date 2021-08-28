cmake_minimum_required(VERSION 3.5)

project(qtcb1-5 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6Core)

add_executable(qtcb1-5
  main.cpp
)
target_link_libraries(qtcb1-5 Qt6::Core)
