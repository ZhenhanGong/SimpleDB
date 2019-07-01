#pragma once

#include "type.hpp"

class StringType : public Type {
public:
    int getLen();
    void parse();
};
