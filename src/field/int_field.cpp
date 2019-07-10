#include "int_type.hpp"
#include "int_field.hpp"

IntField::IntField(int i) : value(i) {
    type = new IntType();
}

int IntField::get_value() {
    return value;
}

// TODO impl
Type* IntField::get_type() {
    return type;
}

std::string IntField::to_string() {
    return std::to_string(value);
}

// TODO impl
int IntField::hash_code() {
    return 1;
}

// TODO impl
bool IntField::compare() {
    return true;
}

// TODO impl
bool IntField::equals(IntField field) {
    return true;
}

// TODO impl
void IntField::serialize() {
}
