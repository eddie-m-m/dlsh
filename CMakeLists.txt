cmake_minimum_required(VERSION 3.10)

project(dlsh VERSION 1.0)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

configure_file(src/dlshConfig.h.in dlshConfig.h)

add_executable(dlsh src/main.cpp)

target_include_directories(dlsh PUBLIC "${PROJECT_BINARY_DIR}")
