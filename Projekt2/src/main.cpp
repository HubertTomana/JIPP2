//
// Created by huber on 25.12.2021.
//

#include "../include/person.h"
#include "../include/employee.h"
#include "../include/employer.h"

#include <vector>
#include <fstream>
#include <string>

/**
 * Szablon T, ktory zawiera funkcje new_function, wypisujaca sume parametrow wywolywania programu
 * @tparam T typename, ustalony przy wywolywaniu funkcji
 * @param x pierwszy parametr wywolywania programu
 * @param y drugi parametr wywolywania programu
 * @return suma parametrow wywolywania programu typu T
 */
template<typename T>
T new_function(T x, T y) {
    return x + y;
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        cout << "Podano niewlasciwa ilosc argumentow" << endl;
        return 0;
    }
    /**
     * Wektor dla obiektow klas Employer
     */
    vector<Employer> employerVector;
    /**
     * Wektor dla obiektow klas Employee
     */
    vector<Employee> employeeVector;
    /**
     * Wskaznik na obiekt klasy Person, umozliwiajacy polimorfizm
     */
    Person *wsk;
    int choice;
    int in_choice;
    int in_in_choice;
    int employer_number = 0;
    int employee_number = 0;
    int employer_limit;
    int employee_limit;
    try {
        employer_limit = stoi(argv[1]);
        employee_limit = stoi(argv[2]);
    }
    catch (...) {
        cout << "Niewlasciwe parametry wywolania programu, powinny byc dwie liczby calkowite!" << endl;
        return 0;
    }
    if (employee_limit <= 0 || employer_limit <= 0) {
        cout << "Nalezy podac dwie liczby dodatnie" << endl;
        return 0;
    }
    cout << "Suma parametrow wywolywania programu wynosi : " << new_function(employee_limit, employer_limit) << endl;
    string tmp_name;
    string tmp_surname;
    string tmp_team;
    string tmp_string;
    string name;
    string surname;
    int age;


    while (1) {
        cout << "Wpisz 1, jesli chcesz dodac osobe" << endl;
        cout << "Wpisz 2, jesli chcesz pokazac dana osobe" << endl;
        cout << "Wpisz 3, jesli chcesz zapisac dane do bazy danych" << endl;
        cout << "Wpisz 4, jesli chcesz usunac dana osobe lub zespol" << endl;
        cout << "Wpisz 5, jesli chcesz obliczyc, ile trzeba przeznaczyc na wyplaty dwoch najnowszych osob dla danego stanowiska" << endl;
        cout << "Wpisz 6, jesli chcesz obliczyc wyplate po dodaniu % bonusu" << endl;
        cout << "Wpisz 7, jesli chcesz obliczyc wyplate z n miesiecy" << endl;
        cout << "Wpisz 8, jesli chcesz zakonczyc program" << endl;
        try {
            cin >> choice;
            if (cin.fail()) throw 1;
        }
        catch (...) {
            cout << "Nie wpisales int!" << endl;
            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        }
        if (choice == 1) {
            cout << "Jesli chcesz dodac szefa, wpisz 1, jesli pracownika, wpisz 2" << endl;
            try {
                cin >> in_choice;
                if (cin.fail()) throw 1;
            }
            catch (...) {
                cout << "Nie wpisales int!" << endl;
                cin.clear();
                cin.ignore(1000, '\n');
                continue;
            }
            if (in_choice == 1) {
                if (employer_number == employer_limit) {
                    cout << "Osiagnieto limit szefow" << endl;
                    continue;
                }
                try {
                    cout << "Podaj imie : ";
                    cin >> name;
                    cout << "Podaj nazwisko : ";
                    cin >> surname;
                    cout << "Podaj wiek : ";
                    cin >> age;
                    if (cin.fail()) throw 1;
                }
                catch (...) {
                    cout << "Nie wpisales odpowiednich danych!" << endl;
                    cin.clear();
                    cin.ignore(1000, '\n');
                    continue;
                }

                employerVector.push_back(Employer(name, surname, age));
                cout << "Podaj, do ktorego zespolu chcesz przypisac dana osobe : ";
                try {
                    cin >> tmp_string;
                    if (cin.fail()) throw 1;
                }
                catch (...) {
                    cout << "Bledne dane!" << endl;
                    cin.clear();
                    cin.ignore(1000, '\n');
                    continue;
                }
                employerVector.at(employer_number).set_head_of_team(tmp_string);
                //employerVector.at(employer_number).printAll();
                wsk = &employerVector.at(employer_number);
                wsk->printAll();
                employer_number++;
            } else if (in_choice == 2) {
                if (employee_number == employee_limit) {
                    cout << "Osiagnieto limit pracownikow" << endl;
                    continue;
                }
                try {
                    cout << "Podaj imie : ";
                    cin >> name;
                    cout << "Podaj nazwisko : ";
                    cin >> surname;
                    cout << "Podaj wiek : ";
                    cin >> age;
                    if (cin.fail()) throw 1;
                }
                catch (...) {
                    cout << "Niewlasciwe dane!" << endl;
                    cin.clear();
                    cin.ignore(1000, '\n');
                    continue;
                }
                employeeVector.push_back(Employee(name, surname, age));
                cout << "Podaj, do ktorego zespolu chcesz przypisac dana osobe : ";
                try {
                    cin >> tmp_string;
                    if (cin.fail()) throw 1;
                }
                catch (...) {
                    cout << "Niewlasciwe dane!" << endl;
                    cin.clear();
                    cin.ignore(1000, '\n');
                    continue;
                }
                employeeVector.at(employee_number).set_team(tmp_string);
                //employeeVector.at(employee_number).printAll();
                wsk = &employeeVector.at(employee_number);
                wsk->printAll();
                employee_number++;
            } else {
                cout << "Wybrano niewlasciwa opcje" << endl;
            }
        }
        if (choice == 2) {
            cout << "Wpisz 1, jesli chcesz wybrac Szefa, a 2, jesli pracownika" << endl;
            try {
                cin >> in_choice;
                if (cin.fail()) throw 1;
            }
            catch (...) {
                cout << "Nie wpisales int!" << endl;
                cin.clear();
                cin.ignore(1000, '\n');
                continue;
            }
            if (in_choice == 1) {
                cout << "Ktora pozycje chcesz pokazac?" << endl;
                int which;
                try {
                    cin >> which;
                    if (cin.fail()) throw 1;
                }
                catch (...) {
                    cout << "Nie wpisales int!" << endl;
                    cin.clear();
                    cin.ignore(1000, '\n');
                    continue;
                }
                if (which < employerVector.size()) {
                    //employerVector.at(which).printAll();
                    wsk = &employerVector.at(which);
                    wsk->printAll();
                } else {
                    cout << "Niewlasciwy element" << endl;
                }
            } else if (in_choice == 2) {
                cout << "Ktora pozycje chcesz pokazac?" << endl;
                int which;
                try {
                    cin >> which;
                    if (cin.fail()) throw 1;
                }
                catch (...) {
                    cout << "Nie wpisales int!" << endl;
                    cin.clear();
                    cin.ignore(1000, '\n');
                    continue;
                }
                if (which < employeeVector.size()) {
                    //employeeVector.at(which).printAll();
                    wsk = &employeeVector.at(which);
                    wsk->printAll();
                } else {
                    cout << "Niewlasciwy element" << endl;
                }
            }
        } else if (choice == 3) {
            ofstream output("employers.txt");
            if (output.is_open()) {
                for (vector<Employer>::iterator i = employerVector.begin(); i < employerVector.end(); i++) {
                    output << i->tofile();
                }
                output.close();
            } else {
                cout << "Error on opening file" << endl;
                exit(1);
            }

            ofstream output2("employees.txt");
            if (output2.is_open()) {
                for (vector<Employee>::iterator i = employeeVector.begin(); i < employeeVector.end(); i++) {
                    output2 << i->tofile();
                }
                output2.close();
            } else {
                cout << "Error on opening file" << endl;
                exit(1);
            }

        } else if (choice == 4) {
            cout << "Wpisz 1, jesli chcesz usunac Szefa, 2 jesli pracownika, 3 jesli caly zespol" << endl;
            try {
                cin >> in_choice;
                if (cin.fail()) throw 1;
            }
            catch (...) {
                cout << "Nie wpisales int!" << endl;
                cin.clear();
                cin.ignore(1000, '\n');
                continue;
            }
            if (in_choice == 1) {
                cout << "Podaj, czy chcesz usunac szefa o podanym :" << endl << "1. Imieniu" << endl << "2. Nazwisku" << endl;
                try {
                    cin >> in_in_choice;
                    if (cin.fail()) throw 1;
                }
                catch (...) {
                    cout << "Nie wpisales int!" << endl;
                    cin.clear();
                    cin.ignore(1000, '\n');
                    continue;
                }
                if (in_in_choice == 1) {
                    cout << "Podaj imie szefa, ktorego chcesz usunac : ";
                    try {
                        cin >> tmp_name;
                        if (cin.fail()) throw 1;
                    }
                    catch (...) {
                        cout << "Niewlasciwe dane!" << endl;
                        cin.clear();
                        cin.ignore(1000, '\n');
                        continue;
                    }
                    for (vector<Employer>::iterator i = employerVector.begin(); i < employerVector.end(); i++) {
                        if (tmp_name == i->get_name()) {
                            employerVector.erase(i);
                            employer_number--;
                            cout << "Usunieto szefa o imieniu " << tmp_name << endl;
                            break;
                        }
                    }
                } else if (in_in_choice == 2) {
                    cout << "Podaj nazwisko szefa, ktorego chcesz usunac : ";
                    try {
                        cin >> tmp_surname;
                        if (cin.fail()) throw 1;
                    }
                    catch (...) {
                        cout << "Niewlasciwe dane!" << endl;
                        cin.clear();
                        cin.ignore(1000, '\n');
                        continue;
                    }
                    for (vector<Employer>::iterator i = employerVector.begin(); i < employerVector.end(); i++) {
                        if (tmp_surname == i->get_surname()) {
                            employerVector.erase(i);
                            employer_number--;
                            cout << "Usunieto szefa o nazwisku " << tmp_surname << endl;
                            break;
                        }
                    }
                }
            } else if (in_choice == 2) {
                cout << "Podaj, czy chcesz usunac pracownika o podanym :" << endl << "1. Imieniu" << endl << "2. Nazwisku" << endl;
                try {
                    cin >> in_in_choice;
                    if (cin.fail()) throw 1;
                }
                catch (...) {
                    cout << "Nie wpisales int!" << endl;
                    cin.clear();
                    cin.ignore(1000, '\n');
                    continue;
                }
                if (in_in_choice == 1) {
                    cout << "Podaj imie pracownika, ktorego chcesz usunac : ";
                    try {
                        cin >> tmp_name;
                        if (cin.fail()) throw 1;
                    }
                    catch (...) {
                        cout << "Niewlasciwe dane!" << endl;
                        cin.clear();
                        cin.ignore(1000, '\n');
                        continue;
                    }
                    for (vector<Employee>::iterator i = employeeVector.begin(); i < employeeVector.end(); i++) {
                        if (tmp_name == i->get_name()) {
                            employeeVector.erase(i);
                            employee_number--;
                            cout << "Usunieto pracownika o imieniu " << tmp_name << endl;
                            break;
                        }
                    }
                } else if (in_in_choice == 2) {
                    cout << "Podaj nazwisko pracownika, ktorego chcesz usunac : ";
                    try {
                        cin >> tmp_surname;
                        if (cin.fail()) throw 1;
                    }
                    catch (...) {
                        cout << "Niewlasciwe dane!" << endl;
                        cin.clear();
                        cin.ignore(1000, '\n');
                        continue;
                    }
                    for (vector<Employee>::iterator i = employeeVector.begin(); i < employeeVector.end(); i++) {
                        if (tmp_surname == i->get_surname()) {
                            employeeVector.erase(i);
                            employee_number--;
                            cout << "Usunieto pracownika o nazwisku " << tmp_surname << endl;
                            break;
                        }
                    }
                }
            } else if (in_choice == 3) {
                cout << "Podaj, ktory zespol chcesz usunac : ";
                try {
                    cin >> tmp_team;
                    if (cin.fail()) throw 1;
                }
                catch (...) {
                    cout << "Niewlasciwe dane!" << endl;
                    cin.clear();
                    cin.ignore(1000, '\n');
                    continue;
                }
                for (vector<Employer>::iterator i = employerVector.begin(); i < employerVector.end(); i++) {
                    if (tmp_team == i->get_head_of_team()) {
                        cout << "Usunieto szefa " << i->get_name() << " " << i->get_surname() << " zespolu " << tmp_team << endl;
                        employerVector.erase(i);
                        employer_number--;
                        i--;
                    }
                }
                for (vector<Employee>::iterator i = employeeVector.begin(); i < employeeVector.end(); i++) {
                    if (tmp_team == i->get_team()) {
                        cout << "Usunieto pracownika " << i->get_name() << " " << i->get_surname() << " zespolu " << tmp_team << endl;
                        employeeVector.erase(i);
                        employee_number--;
                        i--;
                    }
                }
            }
        } else if (choice == 5) {
            int suma = 0;
            cout << "Wpisz 1, jesli chcesz wybrac Szefow, a 2, jesli pracownikow" << endl;
            try {
                cin >> in_choice;
                if (cin.fail()) throw 1;
            }
            catch (...) {
                cout << "Nie wpisales int!" << endl;
                cin.clear();
                cin.ignore(1000, '\n');
                continue;
            }
            if (in_choice == 1) {
                if (employer_number < 2) {
                    cout << "Potrzeba przynajmniej dwoch szefow" << endl;
                    continue;
                }
                suma = employerVector.at(employer_number - 1) + employerVector.at(employer_number - 2);
                cout << "Suma wyplat dwoch najnowszych szefow jest rowna = " << suma << endl;
            }
            if (in_choice == 2) {
                if (employee_number < 2) {
                    cout << "Potrzeba przynajmniej dwoch pracownikow" << endl;
                    continue;
                }
                suma = employeeVector.at(employee_number - 1) + employeeVector.at(employee_number - 2);
                cout << "Suma wyplat dwoch najnowszych pracownikow jest rowna = " << suma << endl;
            }
        } else if (choice == 6) {
            cout << "Wpisz 1, jesli chcesz wybrac Szefa, a 2, jesli pracownika" << endl;
            try {
                cin >> in_choice;
                if (cin.fail()) throw 1;
            }
            catch (...) {
                cout << "Nie wpisales int!" << endl;
                cin.clear();
                cin.ignore(1000, '\n');
                continue;
            }
            if (in_choice == 1) {
                double bonus;
                cout << "Podaj wspolczynnik bonusu : ";
                try {
                    cin >> bonus;
                    if (cin.fail()) throw 1;
                }
                catch (...) {
                    cout << "Nie wpisales double!" << endl;
                    cin.clear();
                    cin.ignore(1000, '\n');
                    continue;
                }
                cout << "Podaj nazwisko osoby, dla ktorej chcesz policzyc wyplate po bonusie" << endl;
                try {
                    cin >> tmp_surname;
                }
                catch (...) {
                    cout << "Niepoprawne dane!" << endl;
                    cin.clear();
                    cin.ignore(1000, '\n');
                    continue;
                }
                for (vector<Employer>::iterator i = employerVector.begin(); i < employerVector.end(); i++) {
                    if (tmp_surname == i->get_surname()) {
                        i->payment(bonus);
                    }
                }
            }
            if (in_choice == 2) {
                double bonus;
                cout << "Podaj wspolczynnik bonusu : ";
                try {
                    cin >> bonus;
                    if (cin.fail()) throw 1;
                }
                catch (...) {
                    cout << "Nie wpisales double!" << endl;
                    cin.clear();
                    cin.ignore(1000, '\n');
                    continue;
                }
                cout << "Podaj nazwisko osoby, dla ktorej chcesz policzyc wyplate po bonusie" << endl;
                try {
                    cin >> tmp_surname;
                }
                catch (...) {
                    cout << "Niepoprawne dane!" << endl;
                    cin.clear();
                    cin.ignore(1000, '\n');
                    continue;
                }
                for (vector<Employee>::iterator i = employeeVector.begin(); i < employeeVector.end(); i++) {
                    if (tmp_surname == i->get_surname()) {
                        i->payment(bonus);
                    }
                }
            }
        } else if (choice == 7) {
            cout << "Wpisz 1, jesli chcesz wybrac Szefa, a 2, jesli pracownika" << endl;
            try {
                cin >> in_choice;
                if (cin.fail()) throw 1;
            }
            catch (...) {
                cout << "Nie wpisales int!" << endl;
                cin.clear();
                cin.ignore(1000, '\n');
                continue;
            }
            if (in_choice == 1) {
                int months;
                cout << "Podaj ilosc miesiecy : ";
                try {
                    cin >> months;
                    if (cin.fail()) throw 1;
                }
                catch (...) {
                    cout << "Nie wpisales int!" << endl;
                    cin.clear();
                    cin.ignore(1000, '\n');
                    continue;
                }
                cout << "Podaj nazwisko osoby, dla ktorej chcesz policzyc wyplate po n miesiacach" << endl;
                try {
                    cin >> tmp_surname;
                }
                catch (...) {
                    cout << "Niepoprawne dane!" << endl;
                    cin.clear();
                    cin.ignore(1000, '\n');
                    continue;
                }
                for (vector<Employer>::iterator i = employerVector.begin(); i < employerVector.end(); i++) {
                    if (tmp_surname == i->get_surname()) {
                        i->payment(months);
                    }
                }
            }
            if (in_choice == 2) {
                int months;
                cout << "Podaj ilosc miesiecy : ";
                try {
                    cin >> months;
                    if (cin.fail()) throw 1;
                }
                catch (...) {
                    cout << "Nie wpisales int!" << endl;
                    cin.clear();
                    cin.ignore(1000, '\n');
                    continue;
                }
                cout << "Podaj nazwisko osoby, dla ktorej chcesz policzyc wyplate po n miesiacach" << endl;
                try {
                    cin >> tmp_surname;
                }
                catch (...) {
                    cout << "Niepoprawne dane!" << endl;
                    cin.clear();
                    cin.ignore(1000, '\n');
                    continue;
                }
                for (vector<Employee>::iterator i = employeeVector.begin(); i < employeeVector.end(); i++) {
                    if (tmp_surname == i->get_surname()) {
                        i->payment(months);
                    }
                }
            }
        } else if (choice == 8) {
            cout << "Koniec dzialania programu" << endl;
            break;
        }
    }
    delete wsk;
    return 0;
}