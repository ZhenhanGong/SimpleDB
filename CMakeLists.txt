cmake_minimum_required(VERSION 3.2)
project(SimpleDb)

ADD_DEFINITIONS(-std=c++14)
include_directories("include")
include_directories("googletest/googletest/include")

add_executable(HelloWorld src/HelloWorld.cc)
