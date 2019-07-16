#include <gtest/gtest.h>
#include "field/int_type.hpp"
#include "field/string_type.hpp"
#include "field/int_field.hpp"
#include "field/string_field.hpp"

TEST(test_Type, IntType) {
    Type *type = new IntType();
    int val = type->get_len();
    EXPECT_EQ(val, 4);
    EXPECT_EQ(type->to_string(), INT_TYPE_STR);
}

TEST(test_Type, StringType) {
    Type *type = new StringType();
    int val = type->get_len();
    EXPECT_EQ(val, 132);
    EXPECT_EQ(type->to_string(), STRING_TYPE_STR);
}

TEST(test_Field, IntField) {
    Field *field = new IntField(1);
    Field *field2 = new IntField(1);
    Field *field3 = new IntField(2);
    Field *str_field = new StringField("abc", 5);
    EXPECT_EQ(((IntField *)field)->get_value(), 1);
    EXPECT_EQ(field->get_type()->to_string(), INT_TYPE_STR);
    EXPECT_EQ(field->to_string(), "1");
    EXPECT_EQ(field->hash_code(), 1);
    EXPECT_EQ(field->equals(field2), true);
    EXPECT_EQ(field->equals(field3), false);
    EXPECT_EQ(field->equals(field3), false);
}

TEST(test_Field, StringType) {
    Field *field = new StringField("abc", 5);
    Field *field2 = new StringField("abc", 1);
    Field *field3 = new StringField("abc", 5);
    Field *int_field = new IntField(1);
    EXPECT_EQ(((StringField *)field)->get_value(), "abc");
    EXPECT_EQ(((StringField *)field2)->get_value(), "a");
    EXPECT_EQ(field->get_type()->to_string(), STRING_TYPE_STR);
    EXPECT_EQ(field->to_string(), "abc");
    std::hash<std::string> str_hasher;
    EXPECT_EQ(field->hash_code(), (int)(str_hasher("abc")));
    EXPECT_EQ(field->equals(field2), false);
    EXPECT_EQ(field->equals(field3), true);
    EXPECT_EQ(field->equals(int_field), false);
}
