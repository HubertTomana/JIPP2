//
// Created by huber on 25.12.2021.
//

#ifndef JIPP2_EMPLOYER_H
#define JIPP2_EMPLOYER_H

#include "person.h"

class Employer : public Person {
private:
    string head_of_team;

public:
    Employer (const string &name, const string &surname, int age);
    void printAll();
    string tofile();
    void set_head_of_team(const string head_of_team);
    string get_team();
    int operator+(const Employer &rhs);
    void payment (int months);
    void payment (double bonus);
};


#endif //JIPP2_EMPLOYER_H
