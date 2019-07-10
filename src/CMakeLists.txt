ADD_DEFINITIONS(-std=c++14)

# check all src code can pass compilation
file(GLOB_RECURSE ALL_SRC "" "*.cpp")
add_executable(simple_db_all ${ALL_SRC})
