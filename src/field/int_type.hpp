#pragma once

#include "type.hpp"

class IntType : public Type
{
public:
    int getLen();
    void parse();
};
