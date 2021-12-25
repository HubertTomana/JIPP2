//
// Created by huber on 25.12.2021.
//

#include "person.h"

void Person::print() {
    cout << "Imie : " << name << endl << "Nazwisko : " << surname  << endl << "Wiek : " << age << endl << "Zarobki : " << payment << endl << "Rola : " << rola << endl;
}

Person::Person(const string &name, const string &surname, int age) : name(name), surname(surname), age(age) {}