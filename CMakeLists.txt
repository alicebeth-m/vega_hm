cmake_minimum_required(VERSION 3.10)
project(MathLib)

set(CMAKE_CXX_STANDARD 17)

add_library(mathlib src/mathlib.cpp)
target_include_directories(mathlib PUBLIC include)

add_executable(mathlib_app main.cpp)
target_link_libraries(mathlib_app mathlib)

enable_testing()
add_subdirectory(tests)
add_subdirectory(benchmarks)
