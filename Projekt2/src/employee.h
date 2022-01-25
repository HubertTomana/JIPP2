//
// Created by huber on 25.12.2021.
//

#ifndef JIPP2_EMPLOYEE_H
#define JIPP2_EMPLOYEE_H

#include "person.h"

class Employee : public Person {
private :
    string team = "Brak";
public:
    Employee(const string &name, const string &surname, int age);
    ~Employee();
    void printAll();
    string tofile();
    void set_team(const string team);
    string get_team();
    int operator+(const Employee &rhs);
    void payment (int months);
    void payment (double bonus);
};


#endif //JIPP2_EMPLOYEE_H
