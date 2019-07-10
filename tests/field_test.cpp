#include <iostream>
#include <gtest/gtest.h>
#include "field/int_type.hpp"
#include "field/string_type.hpp"
#include "field/int_field.hpp"
#include "field/string_field.hpp"

TEST(test_Type, IntType) {
    Type *type = new IntType();
    int val = type->get_len();
    EXPECT_EQ(val, 4);
}

TEST(test_Type, StringType) {
    Type *type = new StringType();
    int val = type->get_len();
    EXPECT_EQ(val, 132);
}

TEST(test_Field, IntField) {
    Field *field = new IntField(1);
    EXPECT_EQ(((IntField *)field)->get_value(), 1);
    EXPECT_EQ(field->get_type()->to_string(), "int type");
}

TEST(test_Field, StringType) {
    Field *field = new StringField("abc", 5);
    EXPECT_EQ(((StringField *)field)->get_value(), "abc");
    EXPECT_EQ(field->get_type()->to_string(), "string type");
}
