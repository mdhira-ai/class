cmake_minimum_required(VERSION 3.10.0)
project(mytest VERSION 0.1.0 LANGUAGES C CXX)

include_directories(include)

file(GLOB LIB_SOURCES "lib/*.cpp")
add_library(GameLib ${LIB_SOURCES})


add_executable(mytest main.cpp)

target_link_libraries(mytest GameLib)