#include "string_type.hpp"

StringType::StringType() {
}

int StringType::get_len() const {
    return Type::STRING_LEN + 4;
}

std::string StringType::to_string() const {
    return STRING_TYPE_STR;
}

// TODO StringType parse()
/* Field StringType::parse() { */
/* } */
