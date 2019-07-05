#pragma once

#include "type.hpp"

class StringType : public Type {
public:
    int get_len();
    void parse();
};
