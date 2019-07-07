ADD_DEFINITIONS(-std=c++14)

add_executable(coretest main.cpp)
target_link_libraries(coretest gtest gtest_main)
