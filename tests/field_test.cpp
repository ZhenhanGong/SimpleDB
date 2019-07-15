#include <gtest/gtest.h>
#include "field/int_type.hpp"
#include "field/string_type.hpp"
#include "field/int_field.hpp"
#include "field/string_field.hpp"

TEST(test_Type, IntType) {
    Type *type = new IntType();
    int val = type->get_len();
    EXPECT_EQ(val, 4);
    EXPECT_EQ(type->to_string(), "int type");
}

TEST(test_Type, StringType) {
    Type *type = new StringType();
    int val = type->get_len();
    EXPECT_EQ(val, 132);
    EXPECT_EQ(type->to_string(), "string type");
}

TEST(test_Type, equals) {
    Type *int_type1 = new IntType();
    Type *int_type2 = new IntType();
    Type *str_type1 = new StringType();
    Type *str_type2 = new StringType();
    EXPECT_EQ(int_type1->equals(int_type1), true);
    EXPECT_EQ(int_type1->equals(int_type2), true);
    EXPECT_EQ(int_type2->equals(int_type1), true);
    EXPECT_EQ(int_type1->equals(str_type1), false);
    EXPECT_EQ(str_type1->equals(str_type1), true);
    EXPECT_EQ(str_type1->equals(str_type2), true);
    EXPECT_EQ(str_type2->equals(str_type1), true);
    EXPECT_EQ(str_type2->equals(int_type1), false);
}

TEST(test_Field, IntField) {
    Field *field = new IntField(1);
    Field *field2 = new IntField(1);
    Field *field3 = new IntField(2);
    EXPECT_EQ(((IntField *)field)->get_value(), 1);
    EXPECT_EQ(field->get_type()->to_string(), "int type");
    EXPECT_EQ(field->to_string(), "1");
    EXPECT_EQ(((IntField *)field)->equals((IntField *)field2), true);
    EXPECT_EQ(((IntField *)field)->equals((IntField *)field3), false);
}

TEST(test_Field, StringType) {
    Field *field = new StringField("abc", 5);
    EXPECT_EQ(((StringField *)field)->get_value(), "abc");
    EXPECT_EQ(field->get_type()->to_string(), "string type");
    EXPECT_EQ(field->to_string(), "abc");
}
