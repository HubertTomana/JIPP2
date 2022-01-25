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
    int choice=0;
    int in_choice;
    int employer_number = 0;
    int employee_number = 0;
    string tmp_string;
    string name;
    string surname;
    int age;

    while (choice != 5) {
        cout << "Wpisz 1, jesli chcesz dodac osobe" << endl;
        cout << "Wpisz 2, jesli chcesz pokazac dana osobe" << endl;
        cout << "Wpisz 3, jesli chcesz zapisac dane do bazy danych" << endl;
        cout << "Wpisz 4, jesli chcesz usunac dana osobe" << endl;
        cout << "Wpisz 5, jesli chcesz zakonczyc program" << endl;
        cin >> choice;
        if (choice == 1) {
            cout << "Jesli chcesz dodac szefa, wpisz 1, jesli pracownika, wpisz 2" << endl;
            cin >> in_choice;
            if (in_choice == 1) {
                cout << "Podaj imie : ";
                cin >> name;
                cout << "Podaj nazwisko : ";
                cin >> surname;
                cout << "Podaj wiek : ";
                cin >> age;
                employerVector.push_back(Employer(name, surname, age));
                cout << "Podaj, do ktorego zespolu chcesz przypisac dana osobe : ";
                cin >> tmp_string;
                employerVector.at(employer_number).set_head_of_team(tmp_string);
                //employerVector.at(employer_number).printAll();
                wsk = &employerVector.at(employer_number);
                wsk->printAll();
                employer_number++;
            } else if (in_choice == 2) {
                cout << "Podaj imie : ";
                cin >> name;
                cout << "Podaj nazwisko : ";
                cin >> surname;
                cout << "Podaj wiek : ";
                cin >> age;
                employeeVector.push_back(Employee(name, surname, age));
                cout << "Podaj, do ktorego zespolu chcesz przypisac dana osobe : ";
                cin >> tmp_string;
                employeeVector.at(employee_number).setTeam(tmp_string);
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
            cin >> in_choice;
            if (in_choice == 1) {
                cout << "Ktora pozycje chcesz pokazac?" << endl;
                int which;
                cin >> which;
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
                cin >> which;
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
            cout << "Wpisz 1, jesli chcesz wybrac Szefa, a 2, jesli pracownika" << endl;
            cin >> in_choice;
            if (in_choice == 1) {
                string tmp_surname;
                cout << "Podaj nazwisko osoby, ktora chcesz usunac : ";
                cin >> tmp_surname;
                for (vector<Employer>::iterator i = employerVector.begin(); i < employerVector.end(); i++) {
                    if (tmp_surname == i->getSurname()) {
                        employerVector.erase(i);
                        employer_number--;
                        cout << "Usunieto pracownika o tym nazwisku" << endl;
                        break;
                    }

                }
            }
            if (in_choice == 2) {
                string tmp_surname;
                cout << "Podaj nazwisko osoby, ktora chcesz usunac : ";
                cin >> tmp_surname;
                for (vector<Employee>::iterator i = employeeVector.begin(); i < employeeVector.end(); i++) {
                    if (tmp_surname == i->getSurname()) {
                        employeeVector.erase(i);
                        break;
                    }

                }
            }
        }
    }
    return 0;
}