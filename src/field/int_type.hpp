#pragma once

#include "type.hpp"

class IntType : public Type
{
public:
    IntType();
    int get_len() const;
    std::string to_string() const;
    bool equals(Type *) const;
    // TODO IntType:: parse
    /* void parse(); */
};
