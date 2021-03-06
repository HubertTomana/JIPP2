#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int add (string x, string y);
int sub (string x, string y);
double vol (string x, string y, string z, string q);
void help ();

int main(int argc, char *argv[]) {
    if (strcmp(argv[1],"add")==0) {
        int wynik = add(argv[2], argv[3]);
        cout << "wynik to : " << wynik << endl;
    }
    else if (strcmp(argv[1],"subtract")==0) {
        int wynik = sub(argv[2],argv[3]);
        cout << "wynik to : " << wynik << endl;
    }

    else if (strcmp(argv[1],"volume")==0) {
        double wynik = vol(argv[2],argv[3],argv[4], argv[5]);
        cout << "wynik to : " << wynik << endl;
    }
    else if (strcmp(argv[1],"help")==0) {
        help ();

    }
    else {
        cout << "Niepoprawny wybor operacji" << endl;
        help();
    }
    return 0;
}

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