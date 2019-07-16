#include "int_type.hpp"

IntType::IntType() {
}

int IntType::get_len() const {
    return 4;
}

std::string IntType::to_string() const {
    return INT_TYPE_STR;
}

// TODO IntType:: parse()
/* Field IntType::parse() { */
/* } */
