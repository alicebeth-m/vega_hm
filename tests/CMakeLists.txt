find_package(Threads REQUIRED)

add_executable(test_mathlib test_mathlib.cpp)
target_link_libraries(test_mathlib mathlib gtest gtest_main Threads::Threads)
add_test(NAME MathLibTests COMMAND test_mathlib)
