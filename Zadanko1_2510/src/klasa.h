//
// Created by huber on 25.10.2021.
//

#ifndef JIPP2_KLASA_H
#define JIPP2_KLASA_H
#include <iostream>

using namespace std;

class FirstClass {
private:
    string firstName;
    string lastName;
    unsigned short footSize = 0;
    unsigned short tall = 0;

    void printSizeData();

public:
    FirstClass(string firstName, string lastName, unsigned short footSize, unsigned short tall);
    void printName();
    void printAllData();

    void setTall(unsigned short tall);

    unsigned short getFootSize();

};

#endif //JIPP2_KLASA_H
