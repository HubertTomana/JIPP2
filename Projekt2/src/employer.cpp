//
// Created by huber on 25.12.2021.
//

#include "employer.h"

Employer::Employer(const string &name, const string &surname, int age) : Person(name, surname, age, 5000, "Employer") {}

void Employer::printAll() {
    cout << "Imie : " << name << endl << "Nazwisko : " << surname  << endl << "Wiek : " << age << endl;
    cout << "Zarobki : " << salary << endl << "Rola : " << role << endl;
    cout << "Head of team : " << head_of_team << endl;
}

string Employer::tofile() {
    return ( "Imie : " + name + "\nNazwisko : " + surname + "\nWiek : " + to_string(age) +
            "\nZarobki : " + to_string(salary) + "\nRola : " + role +
         "\nHead of team : " + head_of_team + "\n\n");
    }

void Employer::set_head_of_team(const string head_of_team) {
    this->head_of_team=head_of_team;
}

string Employer::get_team() {
    return head_of_team;
}

int Employer::operator+(const Employer &rhs) {
    return salary + rhs.salary;
}

void Employer::payment(int months) {
    cout << "Po " << months << " miesiacach, szef " << name << " " << surname <<  " otrzyma " << salary*months << " wyplaty" << endl;
}

void Employer::payment(double bonus) {
    cout << "Przy podwyzce rownej " << bonus << " szef " << name << " " << surname << " otrzyma " << salary+salary*bonus << " wyplaty" << endl;
}

Employer::~Employer() {
    delete tmp;
}