#pragma once

#include "type.hpp"

class IntType : public Type
{
public:
    int get_len();
    void parse();
};
