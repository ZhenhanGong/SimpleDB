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

std::string StringField::get_value() const {
    return val;
}

Type* StringField::get_type() const {
    return type;
}

std::string StringField::to_string() const {
    return val;
}

int StringField::hash_code() const {
    return 0;
}

bool StringField::compare() const {
    return true;
}

bool StringField::equals(StringField field) const {
    return true;
}

void StringField::serialize() const {
}
