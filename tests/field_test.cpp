#include <iostream>
#include <gtest/gtest.h>

TEST(test_hello, hello) {
    int val = 1;
    EXPECT_EQ(val, 1);
}

TEST(test_hello, hello2) {
    int val = 2;
    EXPECT_EQ(val, 2);
}
