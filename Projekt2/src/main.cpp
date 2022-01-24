//
// Created by huber on 25.12.2021.
//

#include "person.h"
#include "employee.h"
#include "employer.h"
#include "Register.h"

int main() {
    vector<Employer> employerVector;
    vector<Employee> employeeVector;
    int wybor;
    int employer_number = 0;
    int employee_number = 0;
    string tmp_string;
    string name;
    string surname;
    int age;

    while (wybor!=5) {
        cout << "Wpisz 1, jesli chcesz dodac osobe" << endl;
        cout << "Wpisz 5, jesli chcesz zakonczyc program" << endl;
        cin >> wybor;
        if (wybor == 1) {
            cout << "Jesli chcesz dodac szefa, wpisz 1, jesli pracownika, wpisz 2" << endl;
            cin >> wybor;
            if (wybor == 1) {
                cout << "Podaj imie : ";
                cin >> name;
                cout << "Podaj nazwisko : ";
                cin >> surname;
                cout << "Podaj wiek : ";
                cin >> age;
                employerVector.push_back(Employer(name, surname, age));
                cout << "Do ktorego zespolu chcesz przypisac dana osobe?" << endl;
                cin >> tmp_string;
                employerVector.at(employer_number).set_head_of_team(tmp_string);
                employerVector.at(employer_number).printAll();
                employer_number++;
                cout << "Ktora pozycje chcesz pokazac?" << endl;
                int ktory;
                cin >> ktory;
                if (ktory<employerVector.size()) {
                    employerVector.at(ktory).printAll();
                }
                else {
                    cout << "Niewlasciwy element" << endl;
                }

            } else if (wybor == 2) {
                cout << "Podaj imie : ";
                cin >> name;
                cout << "Podaj nazwisko : ";
                cin >> surname;
                cout << "Podaj wiek : ";
                cin >> age;
                employeeVector.push_back(Employee(name, surname, age));
                cout << "Do ktorego zespolu chcesz przypisac dana osobe?" << endl;
                cin >> tmp_string;
                employerVector.at(employee_number).set_head_of_team(tmp_string);
                employerVector.at(employee_number).printAll();
                employee_number++;
                cout << "Ktora pozycje chcesz pokazac?" << endl;
                int ktory;
                cin >> ktory;
                if (ktory<employeeVector.size()) {
                    employeeVector.at(ktory).printAll();
                }
                else {
                    cout << "Niewlasciwy element" << endl;
                }
            } else {
                cout << "Wybrano niewlasciwa opcje" << endl;
            }
        }
    }
    return 0;
}