//
// Created by huber on 25.10.2021.
//

#ifndef JIPP2_CLASS_H
#define JIPP2_CLASS_H

#include <iostream>

using namespace std;

class class1 {
private:
    string marka;
    string model;
    int rok_produkcji;
    string kolor;

public:
    class1(string marka, string model, int rok_produkcji, string kolor);

    void printalldata();
};



#endif //JIPP2_CLASS_H
