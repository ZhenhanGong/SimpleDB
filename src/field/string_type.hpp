#pragma once

#include "type.hpp"

class StringType : public Type
{
public:
    StringType();
    int get_len();
    std::string to_string();
    // TODO StringType:: parse()
    /* void parse(); */
};
