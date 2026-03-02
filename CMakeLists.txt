cmake_minimum_required(VERSION 3.16)
project(Enlil)

set(CMAKE_CXX_STANDARD 17)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

# Collect all .cpp files in src/
file(GLOB_RECURSE SOURCES
    "src/*.cpp"
)

add_executable(enlil
    main.cpp
    ${SOURCES}
)

# Include headers (if you use include/)
target_include_directories(enlil PRIVATE
    ${CMAKE_SOURCE_DIR}/include
)

target_link_libraries(enlil PRIVATE Qt6::Widgets)