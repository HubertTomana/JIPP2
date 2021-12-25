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
    int payment = 0;
    string rola = "Brak";
public:
    void print();
    //virtual void print_all();
    Person (const string &name, const string &surname, int age);
};


#endif //JIPP2_PERSON_H
