//
// Created by huber on 25.12.2021.
//

#include "employee.h"

Employee::Employee(const string &name, const string &surname, int age) : Person(name, surname, age, 2000, "Employee") {}

void Employee::printAll() {
    cout << "Imie : " << name << endl << "Nazwisko : " << surname  << endl << "Wiek : " << age << endl;
    cout << "Zarobki : " << salary << endl << "Rola : " << role << endl;
    cout << "Team : " << team << endl;
}
string Employee::tofile() {
    return ( "Imie : " + name + "\nNazwisko : " + surname + "\nWiek : " + to_string(age) +
             "\nZarobki : " + to_string(salary) + "\nRola : " + role +
             "\nTeam : " + team + "\n\n" );
}

void Employee::set_team(const string team) {
    this->team = team;
}

string Employee::get_team() {
    return team;
}

int Employee::operator+(const Employee &rhs) {
    return salary + rhs.salary;
}

void Employee::payment(int months) {
    cout << "Po " << months << " miesiacach, pracownik " << name << " " << surname << " otrzyma " << salary*months << " wyplaty" << endl;
}

void Employee::payment(double bonus) {
    cout << "Przy podwyzce rownej " << bonus << " pracownik " << name << " " << surname << " otrzyma " << salary+salary*bonus << " wyplaty" << endl;
}