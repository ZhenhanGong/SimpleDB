#pragma once

#include <iostream>
#include "type.hpp"

// abstract class can not be instantiated
class Field
{
public:
    Type *type;
    // pure virtual function make a class abstract class
    virtual Type* get_type() const = 0;
    virtual std::string to_string() const = 0;
    virtual int hash_code() const = 0;
    virtual bool compare() const = 0;
    virtual void serialize() const = 0;
};
