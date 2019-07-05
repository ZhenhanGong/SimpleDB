#include "string_field.hpp"
#include "string_type.hpp"

StringField::StringField(std::string s, int max_size)
    : max_size(max_size) {

    type = new StringType();
    if (s.length() > max_size)
        val = s.substr(0, max_size);
    else 
        val = s;
}

Type* StringField::get_type() {
    return type;
}

std::string StringField::get_value() {
    return val;
}

std::string StringField::to_string() {
    return val;
}

int StringField::hash_code() {
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
