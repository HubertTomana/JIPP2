#include <iostream>
#include <cstring>

int add (string x, string y) {
    int a = stoi (x);
    int b = stoi (y);
    return a+b;
}

int sub (string x, string y) {
    int a = stoi(x);
    int b = stoi (y);
    return a-b;
}

double vol (string x, string y, string z, string q) {
    int a = stoi (x);
    int b = stoi (y);
    int h = stoi (z);
    int H = stoi (q);
    if (a<0 || b<0 || h<0 || H<0) {
        cout << "Jedna z dlugosci bokow jest ujemna" << endl;
        help();
        return 0;
    }
    return ((a+b)*h)/2.*H;
}

void help () {
    cout << "Simple calculatur\n"
            "simpleCalc [nazwa dzialania]\n"
            "\n"
            "Dzialania:\n"
            "add [a] [b]\n"
            "    Dodawanie dwoch liczb ([a] i [b]) calkowitych. "
            "\n"
            "substract [a] [b]\n"
            "   Odejmowanie dwoch liczb ([a] i [b]) calkowitych. "
            "\n"
            "volume [a] [b] [h] [H]\n"
            "   Obliczanie objetosci graniastoslupa prostego o wysokosci H oraz o podstawie trapezu o bokach a i b oraz wysokosci h"
            "\n"
            "help\n"
            "   Wyswietlanie dokumentacji"<< endl;
}