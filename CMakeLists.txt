cmake_minimum_required(VERSION 3.16)
project(Enlil)

set(CMAKE_CXX_STANDARD 17)

file(GLOB_RECURSE SOURCES "src/*.cpp" "main.cpp")
add_executable(enlil ${SOURCES})