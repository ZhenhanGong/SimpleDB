#pragma once

class Type
{
public:
    static const int STRING_LEN = 128;
    virtual int get_len();
    // TODO Field parse()
    virtual void parse();
};
