cmake_minimum_required(VERSION 3.0)

project(adventofcode2024)

add_executable(day01-puzzle01 day01/puzzle01.cpp)
add_executable(day01-puzzle02 day01/puzzle02.cpp)

install(TARGETS day01-puzzle01 RUNTIME DESTINATION bin)
install(TARGETS day01-puzzle02 RUNTIME DESTINATION bin)
