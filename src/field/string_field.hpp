#pragma once

#include <iostream>
#include "field.hpp"

class StringField : public Field
{
private:
    // TODO how to serialize 
    static const long serial_version_UID = 1l;
    std::string val;
    const int max_size;

public:
    StringField(std::string s, int max_size);
    // TODO impl type
    Type* get_type();
    std::string get_value();
    std::string to_string();
    int hash_code();
    bool equals(StringField field);
    // TODO how to serialize
    void serialize();
    // TODO operator 
    bool compare();
};
