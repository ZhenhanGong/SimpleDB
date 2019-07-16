#pragma once

#include <iostream>

static const std::string INT_TYPE_STR = "int type";
static const std::string STRING_TYPE_STR = "string type";

// abstract class can not be instantiated
class Type
{
public:
    static const int STRING_LEN = 128;
    // pure virtual function make a class abstract class
    virtual int get_len() const = 0;
    virtual std::string to_string() const = 0;
    // TODO Type:: parse()
    /* virtual Field parse() = 0; */
};
