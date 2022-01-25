//
// Created by huber on 25.12.2021.
//

#include "person.h"

Person::Person(const string &name, const string &surname, int age, int salary, const string &role) : name(name), surname(surname), age(age), salary(salary), role(role) {}

string Person::get_surname() {
    return surname;
}

string Person::get_name() {
    return name;
}