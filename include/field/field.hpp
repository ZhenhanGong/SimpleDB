#pragma once

#include <iostream>
#include "type.hpp"

class Field {
public:
    Type* type;
    virtual void serialze();
    virtual bool compare();
    virtual Type* getType();
    virtual int hashCode();
    virtual bool equals(Field field);
    virtual std::string toString();
};
