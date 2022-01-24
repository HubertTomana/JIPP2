//
// Created by huber on 24.01.2022.
//

#ifndef JIPP2_REGISTER_H
#define JIPP2_REGISTER_H
#include "person.h"
#include "employer.h"
#include "employee.h"
#include <vector>

class Register {
private:
    vector<Person> peopleList;
    int n=0;
    int limit=0;
public:
    Register();
    int set_limit(int limit);
    int get_n();
    void add_employer();
    void add_employee();
    void delete_employer();
    void new_salary();
    double all_salary();


};


#endif //JIPP2_REGISTER_H
