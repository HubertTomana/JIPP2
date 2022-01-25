//
// Created by huber on 25.12.2021.
//

#include "person.h"
#include "employee.h"
#include "employer.h"
#include "Register.h"

#include <fstream>
#include <string>

int main() {
    vector<Employer> employerVector;
    vector<Employee> employeeVector;
    Person* wsk;
    int choice;
    int in_choice;
    int in_in_choice;
    int employer_number = 0;
    int employee_number = 0;
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
        cout << "Wpisz 5, jesli chcesz zakonczyc program" << endl;
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
                }
                else {
                    cout << "Niewlasciwy element" << endl;
                }
            }
            else if (in_choice == 2) {
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
                }
                else {
                    cout << "Niewlasciwy element" << endl;
                }
            }
        }
        else if (choice == 3) {
            ofstream output("employers.txt");
            if(output.is_open()) {
                for(vector<Employer>::iterator i = employerVector.begin(); i<employerVector.end(); i++) {
                    output << i->tofile();
                }
                output.close();
            } else {
                cout << "Error on opening file" << endl;
                exit(1);
            }

            ofstream output2("employees.txt");
            if(output2.is_open()) {
                for(vector<Employee>::iterator i = employeeVector.begin(); i<employeeVector.end(); i++) {
                    output2 << i->tofile();
                }
                output2.close();
            } else {
                cout << "Error on opening file" << endl;
                exit(1);
            }

        }
        else if (choice==4) {
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
                }
                else if (in_in_choice == 2) {
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
                            cout << "Usunieto szefa o nazwisku" << tmp_surname << endl;
                            break;
                        }
                    }
                }
            }
            else if (in_choice == 2) {
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
                }
                else if (in_in_choice == 2) {
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
                            cout << "Usunieto pracownika o nazwisku" << tmp_surname << endl;
                            break;
                        }
                    }
                }
            }
            else if (in_choice == 3) {
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
                    if (tmp_team == i->get_team()) {
                        employerVector.erase(i);
                        employer_number--;
                        cout << "Usunieto szefa" << i->get_name() << " " << i->get_surname()  << "zespolu " << tmp_team << endl;
                    }
                }
                for (vector<Employee>::iterator i = employeeVector.begin(); i < employeeVector.end(); i++) {
                    if (tmp_team == i->get_team()) {
                        employeeVector.erase(i);
                        employee_number--;
                        cout << "Usunieto pracownika" << i->get_name() << " " << i->get_surname() <<  "zespolu " << tmp_team << endl;
                    }
                }
            }
        }
        else if (choice == 5) {
            cout << "Koniec dzialania programu" << endl;
            break;
        }
    }
    return 0;
}