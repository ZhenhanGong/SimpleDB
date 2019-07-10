#pragma once

#include "type.hpp"

class StringType : public Type
{
public:
    StringType();
    int get_len();
    // TODO StringType:: parse()
    /* void parse(); */
};
