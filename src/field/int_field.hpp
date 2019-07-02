#pragma once

#include "field.hpp"

class IntField : public Field
{
private:
    // TODO how does c++ serialize object
    static const long serialVersionUID = 1l;
    const int value;

public:
    IntField(int i);
    int getValue();
    Type* getType();
    bool compare();
    std::string toString();
    int hashCode();
    bool equals(IntField field);
    void serialize();
};
