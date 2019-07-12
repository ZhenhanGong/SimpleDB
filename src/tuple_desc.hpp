#pragma once

#include "field/type.hpp"

class TupleDesc
{
public:
    void iterator();

// TODO serializable
class TDItem
{
public:
    static const long serial_version_uid = 1L;
    const Type *field_type;
    const std::string field_name;

    TDItem(Type *t, std::string n) : field_type(t), field_name(n) {
    };

    std::string toString() {
        return field_name + "(" + field_type->to_string() + ")";
    }

    bool equals(TDItem *other) {
        return other->field_type == this->field_type;
    }

private:

};

private:

};
