#include "string_type.hpp"
#include "string_field.hpp"

StringField::StringField(std::string s, int max_size)
    : max_size(max_size) {

    type = new StringType();
    if (s.length() > max_size)
        value = s.substr(0, max_size);
    else 
        value = s;
}

std::string StringField::get_value() const {
    return value;
}

Type* StringField::get_type() const {
    return type;
}

std::string StringField::to_string() const {
    return value;
}

// TODO impl
int StringField::hash_code() const {
    std::hash<std::string> str_hasher;
    return str_hasher(value);
}

// TODO impl
bool StringField::compare() const {
    return true;
}

// TODO impl
bool StringField::equals(Field *other_field) const {
    Type *other_type = other_field->get_type();
    if (other_type->to_string() != STRING_TYPE_STR)
        return false;
    return get_value() == ((StringField *)other_field)->get_value();
}

// TODO impl
void StringField::serialize() const {
}
