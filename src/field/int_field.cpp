#include "int_type.hpp"
#include "int_field.hpp"

IntField::IntField(int i) : value(i) {
    type = new IntType();
}

int IntField::get_value() const {
    return value;
}

Type* IntField::get_type() const {
    return type;
}

std::string IntField::to_string() const {
    return std::to_string(value);
}

// TODO impl
int IntField::hash_code() const {
    return value;
}

// TODO impl
bool IntField::compare() const {
    return true;
}

// TODO impl
bool IntField::equals(Field *other_field) const {
    /* Type *other_type = other_field->get_type(); */
    /* return this->get_value() == other_field->get_value(); */
    return true;
}

// TODO impl
void IntField::serialize() const {
}
