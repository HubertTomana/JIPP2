//
// Created by huber on 25.12.2021.
//

#include "person.h"
#include "employee.h"

int main () {
    Person person1("Ada", "Nowak", 21);
    person1.print();
    Employee employee1 ("Hubert", "Tomana", 21);
    employee1.printAll();
    return 0;
}