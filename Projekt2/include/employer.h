//
// Created by huber on 25.12.2021.
//

#ifndef JIPP2_EMPLOYER_H
#define JIPP2_EMPLOYER_H

#include "person.h"

class Employer : public Person {
private:
    /**
     * Dodatkowy wskaznik, ktory bedziemy dodatkowo zwalniac w destruktorze
     */
    int *tmp = new int;
    /**
     * pole typu string, ktore przechowuje informacje, do jakiego teamu dany obiekt klasy Employer nalezy
     */
    string head_of_team;

public:
    /**
     * Konstruktor dla klasy Employer, gdzie rowniez jego rola jest zmieniana na Employer
     * @param name imie danego pracownika
     * @param surname nazwisko danego pracownika
     * @param age wiek danego pracownika
     */
    Employer(const string &name, const string &surname, int age);

    /**
     * Destruktor dla klasy Employer
     */
    ~Employer();

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
     * Setter dla pola head_of_team
     * @param head_of_team nowy head_of_team, ktorym zostanie zamieniony obecny
     */
    void set_head_of_team(const string head_of_team);

    /**
     * Getter dla pola head_of_team
     * @return pole head_of_team typu string
     */
    string get_head_of_team();

    /**
     * Funkcja wykorzystujaca przeciazenie operatorów, sumujaca pola salary dwoch najnowszych obiektow klasy Employer
     * @param rhs prawa strona operacji dodawania, drugi obiekt klasy Employer
     * @return suma pól salary dwoch obiektow klasy Employer
     */
    int operator+(const Employer &rhs);

    /**
     * Funkcja wykorzystujaca przeciazanie metod, sluzaca do policzenia, ile dany obiekt klasy Employer zarobi przez months miesiecy, wypisujaca na ekran dana kwote
     * @param months ilosc miesiecy, dla ktorych chcemy policzyc wyplate
     */
    void payment(int months);

    /**
     * Funkcja wykorzystujaca przeciazanie metod, sluzaca do policzenia, ile dany obiekt klasy Employer zarobi przy dodatkowym bonusie
     * @param bonus wysokosc bonusu, dla ktorego chcemy policzyc wyplate
     */
    void payment(double bonus);
};


#endif //JIPP2_EMPLOYER_H
