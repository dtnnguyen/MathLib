
# Now simply link against gtest or gtest_main as needed. Eg
add_executable(testapp test.cpp)
target_link_libraries(testapp gtest_main MathLib)


gtest_discover_tests(testapp)
add_test(NAME testapp COMMAND testapp)