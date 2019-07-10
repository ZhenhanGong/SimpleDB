#include "string_type.hpp"

StringType::StringType() {
}

int StringType::get_len() {
    return Type::STRING_LEN + 4;
}

std::string StringType::to_string() {
    return "string type";
}

// TODO StringType parse()
/* Field StringType::parse() { */
/* } */
