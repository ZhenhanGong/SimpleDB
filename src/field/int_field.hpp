#pragma once

#include "field.hpp"

class IntField : public Field
{
private:
    // TODO how does c++ serialize object
    static const long serial_version_UID = 1l;
    const int value;

public:
    IntField(int i);
    int get_value();
    Type* get_type();
    std::string to_string();
    int hash_code();
    bool compare();
    bool equals(IntField field);
    void serialize();
};
