#pragma once

#include "type.hpp"

class StringType : public Type
{
public:
    StringType();
    int get_len() const;
    std::string to_string() const;
    bool equals(Type *) const;
    // TODO StringType:: parse()
    /* void parse(); */
};
