//
// Created by huber on 25.12.2021.
//

#ifndef JIPP2_PERSON_H
#define JIPP2_PERSON_H

#include <iostream>

using namespace std;

class Person {
protected:
    string name;
    string surname;
    int age;
    int salary = 0;
    string role = "Brak";
public:
    //virtual void printAll();
    //virtual void print_all();
    Person (const string &name, const string &salary, int age, int payment, const string &role);
};


#endif //JIPP2_PERSON_H
