#include "string_field.hpp"

StringField::StringField(std::string s, int maxSize)
    : maxSize(maxSize) {

    if (s.length() > maxSize)
        val = s.substr(0, maxSize);
    else 
        val = s;
}

void StringField::getType() {
}

std::string StringField::getValue() {
    return val;
}

std::string StringField::toString() {
    return val;
}

int StringField::hashCode() {
    return 0;
}

bool StringField::equals(StringField field) {
    return true;
}

void StringField::serialize() {
}

bool StringField::compare() {
    return true;
}
