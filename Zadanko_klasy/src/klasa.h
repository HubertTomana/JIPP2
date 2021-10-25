//
// Created by huber on 25.10.2021.
//

#ifndef JIPP2_KLASA_H
#define JIPP2_KLASA_H

using namespace std;

class Prostopadloscian {
private:
    double bok_a;
    double bok_b;
    double wysokosc;
public:
    double pole1(double a, double b);
    double pole2(double a, double h);
    double pole3(double b, double h);
    void wynik(double a, double b, double h);
};


#endif //JIPP2_KLASA_H
