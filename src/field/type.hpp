#pragma once

#include <iostream>

// abstract class can not be instantiated
class Type
{
public:
    static const int STRING_LEN = 128;
    // pure virtual function make a class abstract class
    virtual int get_len() = 0;
    virtual std::string to_string() = 0;
    // TODO Type:: parse()
    /* virtual Field parse() = 0; */
};
