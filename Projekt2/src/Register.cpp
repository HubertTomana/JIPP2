//
//

#include "Register.h"

int Register::set_limit(int limit) {
    this->limit = limit;
}

void Register::add_employer() {
    if (n==limit) {
        cout << "Osiagnieto ustalony limit pracownikow" << endl;
        return;
    }
    string name, surname;
    int age;
    cout << "Podaj imie : ";
    cin >> name;
    cout << "Podaj nazwisko : ";
    cin >> surname;
    cout << "Podaj wiek : ";
    cin >> age;
    peopleList[n] = Employer(name, surname, age);
    n++;
}

void Register::add_employee() {
    if (n==limit) {
        cout << "Osiagnieto ustalony limit pracownikow" << endl;
        return;
    }
    string name, surname;
    int age;
    cout << "Podaj imie : ";
    cin >> name;
    cout << "Podaj nazwisko : ";
    cin >> surname;
    cout << "Podaj wiek : ";
    cin >> age;
    peopleList[n] = Employee(name, surname, age);
    n++;
}
void delete_employer();
void new_salary();
double all_salary();