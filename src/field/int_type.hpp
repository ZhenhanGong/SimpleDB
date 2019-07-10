#pragma once

#include "type.hpp"

class IntType : public Type
{
public:
    IntType();
    int get_len();
    std::string to_string();
    // TODO IntType:: parse
    /* void parse(); */
};
