cmake_minimum_required(VERSION 3.7)
project(ctest)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_definitions ("-Wall -Wextra -Wpedantic -Weffc++ -Wconversion -Wunreachable-code -Wold-style-cast")

set(SOURCES
        main.cpp
        )

set(HEADERS
        solve_quadratic.hpp
        )

add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})
