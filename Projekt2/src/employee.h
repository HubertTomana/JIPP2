//
// Created by huber on 25.12.2021.
//

#ifndef JIPP2_EMPLOYEE_H
#define JIPP2_EMPLOYEE_H

#include "person.h"

class Employee : public Person {
private :
    string team = "Brak";
    int room_number = 0;
public:
    Employee(const string &name, const string &surname, int age);
    void printAll();
    string tofile();
    void setTeam(const string team);

};


#endif //JIPP2_EMPLOYEE_H
