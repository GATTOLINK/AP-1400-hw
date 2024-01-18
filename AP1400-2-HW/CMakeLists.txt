cmake_minimum_required(VERSION 3.13)
project(AP)

set(CMAKE_CXX_STANDARD 14)

#set(CMAKE_CXX_FLAGS_RELEASE “-Wall -g”)
set(CMAKE_BUILD_TYPE Debug)
add_compile_options(-g -Wall -ggdb)

find_package(GTest REQUIRED)

include_directories(include/)

add_executable(main
        src/main.cpp
        src/hw1.cpp
        src/unit_test.cpp
)
target_link_libraries(main
        GTest::GTest
        GTest::Main
)

