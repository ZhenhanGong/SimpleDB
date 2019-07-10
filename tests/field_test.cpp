#include <iostream>
#include <gtest/gtest.h>
#include "field/int_type.hpp"
#include "field/string_type.hpp"

TEST(test_Type, IntType) {
    IntType* type = new IntType();
    int val = type->get_len();
    EXPECT_EQ(val, 4);
}

TEST(test_Type, StringType) {
    StringType* type = new StringType();
    int val = type->get_len();
    EXPECT_EQ(val, 132);
}
