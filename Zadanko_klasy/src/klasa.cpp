//
// Created by huber on 25.10.2021.
//

#include "klasa.h"
#include <iostream>

using namespace std;

double Prostopadloscian::pole1(double a, double b) {
    return a*b;
}

double Prostopadloscian::pole2(double a, double h) {
    return a*h;
}

double Prostopadloscian::pole3(double b, double h) {
    return b*h;
}

void Prostopadloscian::wynik (double a, double b, double h) {
    double suma = Prostopadloscian::pole1(a, b) + Prostopadloscian::pole2(a, h) + Prostopadloscian::pole3(b, h);
    cout << "Wynik to" << suma << endl;
}
