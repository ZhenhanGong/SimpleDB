#include "int_type.hpp"

IntType::IntType() {
}

int IntType::get_len() const {
    return 4;
}

std::string IntType::to_string() const {
    return "int type";
}

bool IntType::equals(Type *other) const {
    if (other->to_string() == this->to_string())
        return true;
    return false;
}

// TODO IntType:: parse()
/* Field IntType::parse() { */
/* } */
