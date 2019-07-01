#pragma once

#include <iostream>

class StringField
{
private:
    // TODO how to serialize 
    static const long serialVersionID = 1l;
    std::string val;
    const int maxSize;

public:
    StringField(std::string s, int maxSize);
    // TODO impl type
    void getType();
    std::string getValue();
    std::string toString();
    int hashCode();
    bool equals(StringField field);
    // TODO how to serialize
    void serialize();
    // TODO operator 
    bool compare();
};
