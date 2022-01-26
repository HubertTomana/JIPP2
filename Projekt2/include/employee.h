//
// Created by huber on 25.12.2021.
//

#ifndef JIPP2_EMPLOYEE_H
#define JIPP2_EMPLOYEE_H

#include "person.h"

class Employee : public Person {
private :
    /**
     * Dodatkowy wskaznik, ktory bedziemy dodatkowo zwalniac w destruktorze
     */
    int *tmp = new int;
    /**
     * pole typu string, ktore przechowuje informacje, do jakiego teamu dany obiekt klasy Employee nalezy
     */
    string team = "Brak";
public:
    /**
     * Konstruktor dla klasy Employee, gdzie rowniez pole rola jest zmieniana na Employee
     * @param name imie danego pracownika
     * @param surname nazwisko danego pracownika
     * @param age wiek danego pracownika
     */
    Employee(const string &name, const string &surname, int age);

    /**
    * Destruktor dla klasy Employer
    */
    ~Employee();

    /**
     * Funkcja wykorzystujaca polimorfizm, wypisujaca wszystkie pola klasy
     */
    void printAll();

    /**
    * Funkcja pomagajaca przy zapisie do bazy danych
    * @return wypisane wszystkie pola klasy w zmiennej string
    */
    string tofile();

    /**
     * Setter dla pola team
     * @param team nowy team, ktorym zostanie zamieniony obecny
     */
    void set_team(const string team);

    /**
     * Getter dla pola team
     * @return pole team typu string
     */
    string get_team();

    /**
     * Funkcja wykorzystujaca przeciazenie operatorów, sumujaca pola salary dwoch najnowszych obiektow klasy Employee
     * @param rhs prawa strona operacji dodawania, drugi obiekt klasy Employee
     * @return suma pól salary dwoch obiektow klasy Employee
     */
    int operator+(const Employee &rhs);

    /**
     * Funkcja wykorzystujaca przeciazanie metod, sluzaca do policzenia, ile dany obiekt klasy Employee zarobi przez months miesiecy, wypisujaca na ekran dana kwote
     * @param months ilosc miesiecy, dla ktorych chcemy policzyc wyplate
     */
    void payment(int months);

    /**
     * Funkcja wykorzystujaca przeciazanie metod, sluzaca do policzenia, ile dany obiekt klasy Employee zarobi przy dodatkowym bonusie
     * @param bonus wysokosc bonusu, dla ktorego chcemy policzyc wyplate
     */
    void payment(double bonus);
};


#endif //JIPP2_EMPLOYEE_H
