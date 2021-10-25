//
// Created by huber on 25.10.2021.
//

#include "class1.h"
#include <iostream>

using namespace std;

int main() {
    class1 samochod[]{
            {"BMW",        "Szybki",     2020, "czerwony"},
            {"Mishimishi", "Tez szybki", 2019, "ofc ze czerwony"},
            {"Audi",       "Polo",       1999, "bialy"},
            {"Polonez",    "i20",        1980, "szary"}
    };
    for (int i = 0; i < 4; i++)
        samochod[i].printalldata();
    return 0;
}