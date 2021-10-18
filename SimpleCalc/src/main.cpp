#include <iostream>
#include "calc.h"

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
