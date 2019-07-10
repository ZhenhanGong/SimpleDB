ADD_DEFINITIONS(-std=c++14)

include_directories("${PROJECT_SOURCE_DIR}/src")

file(GLOB TEST_SRC "" "*.cpp")
file(GLOB_RECURSE SRC "" "${PROJECT_SOURCE_DIR}/src/field/*.cpp")
add_executable(test_main ${TEST_SRC} ${SRC})
target_link_libraries(test_main gtest gtest_main)

# enable_testing()
# add_test(NAME add_test_test_main COMMAND test_main)
