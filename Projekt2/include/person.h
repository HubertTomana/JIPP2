//
// Created by huber on 25.12.2021.
//

#ifndef JIPP2_PERSON_H
#define JIPP2_PERSON_H

#include <iostream>

using namespace std;

class Person {
protected:
    /**
     * Pole typu string przechowujace imie osoby
     */
    string name;
    /**
     * Pole typu string przechowujace nazwisko osoby
     */
    string surname;
    /**
     * Pole typu int przecchowujace wiek osoby
     */
    int age;
    /**
     * Pole typu int przechowujace wyplate danej osoby
     */
    int salary = 0;
    /**
     * Pole typu string przechowujace role danej osoby
     */
    string role = "Brak";
public:
    /**
     * Funkcja umozliwiajaca polimorfizm
     */
    virtual void printAll() = 0;

    /**
     * Getter dla pola name
     * @return pole name typu string
     */
    string get_name();

    /**
     * Getter dla pola surname
     * @return pole surname typu string
     */
    string get_surname();

    /**
     * Konstruktor dla klasy Person
     * @param name imie danej osoby
     * @param surname nazwisko danej osoby
     * @param age wiek danej osoby
     * @param salary wyplata miesieczna danej osoby
     * @param role rola danej osoby
     */
    Person(const string &name, const string &surname, int age, int salary, const string &role);
};


#endif //JIPP2_PERSON_H
