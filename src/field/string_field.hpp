#pragma once

#include <iostream>
#include "field.hpp"

class StringField : public Field
{
private:
    // TODO how to serialize 
    static const long serial_version_UID = 1l;
    std::string value;
    const int max_size;

public:
    StringField(std::string s, int max_size);
    std::string get_value() const;
    Type* get_type() const;
    std::string to_string() const;
    int hash_code() const;
    bool compare() const;
    bool equals(Field *other_field) const;
    void serialize() const;
};
