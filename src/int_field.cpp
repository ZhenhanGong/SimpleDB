#include "IntField.hpp"

IntField::IntField(int i) : value(i) {
}

int IntField::getValue() {
    return value;
}

// TODO impl
void IntField::getType() {
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
