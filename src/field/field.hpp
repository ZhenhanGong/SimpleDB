#pragma once

#include <iostream>
#include "type.hpp"

// abstract class can not be instantiated
class Field
{
public:
    Type *type;
    // pure virtual function make a class abstract class
    virtual Type* get_type() = 0;
    virtual std::string to_string() = 0;
    virtual int hash_code() = 0;
    virtual bool compare() = 0;
    virtual void serialize() = 0;
};
