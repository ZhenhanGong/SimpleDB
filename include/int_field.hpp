#pragma once
#include <iostream>

class IntField
{
private:
    // TODO how does c++ serialize object
    static const long serialVersionUID = 1;
    const int value;

public:
    IntField(int i);
    int getValue();
    void getType();
    bool compare();
    std::string toString();
    int hashCode();
    bool equals(IntField field);
    void serialize();
};
