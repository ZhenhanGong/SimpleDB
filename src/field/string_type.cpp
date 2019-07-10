#include "string_type.hpp"

StringType::StringType() {
}

int StringType::get_len() const {
    return Type::STRING_LEN + 4;
}

std::string StringType::to_string() const {
    return "string type";
}

bool StringType::equals(Type *other) const {
    if (other->to_string() == this->to_string())
        return true;
    return false;
}

// TODO StringType parse()
/* Field StringType::parse() { */
/* } */
