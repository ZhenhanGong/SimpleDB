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
    std::string get_value();
    Type* get_type();
    std::string to_string();
    int hash_code();
    bool compare();
    bool equals(StringField field);
    void serialize();
};
