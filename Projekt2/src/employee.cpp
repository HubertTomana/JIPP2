//
// Created by huber on 25.12.2021.
//

#include "employee.h"

Employee::Employee(const string &name, const string &surname, int age) : Person(name, surname, age) {}

void Employee::printAll() {
    cout << "Imie : " << name << endl << "Nazwisko : " << surname  << endl << "Wiek : " << age << endl << "Zarobki : " << payment << endl << "Rola : " << rola << endl;
}
