ADD_DEFINITIONS(-std=c++14)

file(GLOB test_src "" "*.cpp")
add_executable(test_main ${test_src})
target_link_libraries(test_main gtest gtest_main)

# enable_testing()
# add_test(NAME add_test_test_main COMMAND test_main)
