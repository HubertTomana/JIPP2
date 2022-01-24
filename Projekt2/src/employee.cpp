//
// Created by huber on 25.12.2021.
//

#include "employee.h"

Employee::Employee(const string &name, const string &surname, int age) : Person(name, surname, age, 2000, "Employee") {}

void Employee::printAll() {
    cout << "Imie : " << name << endl << "Nazwisko : " << surname  << endl << "Wiek : " << age << endl;
    cout << "Zarobki : " << salary << endl << "Rola : " << role << endl;
    cout << "Team : " << team << endl << "Pokoj : " << room_number << endl;
}

void Employee::setTeam(const string team) {
    this->team = team;
}
