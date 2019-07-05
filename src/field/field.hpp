#pragma once

#include <iostream>
#include "type.hpp"

class Field {
public:
    Type* type;
    virtual void serialze();
    virtual bool compare();
    virtual Type* get_type();
    virtual int hash_code();
    virtual bool equals(Field field);
    virtual std::string to_string();
};
