#include "field/int_type.hpp"
#include "field/int_field.hpp"

IntField::IntField(int i) : value(i) {
    type = new IntType();
}

int IntField::getValue() {
    return value;
}

// TODO impl
Type* IntField::getType() {
    return type;
}

// TODO impl
bool IntField::compare() {
    return true;
}

std::string IntField::toString() {
    return std::to_string(value);
}

// TODO impl
int IntField::hashCode() {
    return 1;
}

// TODO impl
bool IntField::equals(IntField field) {
    return true;
}

// TODO impl
void IntField::serialize() {
}
