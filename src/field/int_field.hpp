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
    int get_value() const;
    Type* get_type() const;
    std::string to_string() const;
    int hash_code() const;
    bool compare() const;
    bool equals(IntField *field) const;
    void serialize() const;
};
