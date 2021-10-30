//
// Created by huber on 30.10.2021.
//

#include "../matrixLib//include/lib.h"

using namespace std;

int main (int argc, char* argv[]) {
    int ilosc_wierszy;
    int ilosc_kolumn;

    cout << "Podaj liczbe wierszy i kolumn" << endl;
    cin >> ilosc_wierszy >> ilosc_kolumn;
    int ** mac_a = new int *[ilosc_wierszy];
    int ** mac_b = new int *[ilosc_wierszy];

    for (int i=0; i<ilosc_wierszy; ++i) {
        mac_a[i] = new int [ilosc_kolumn];
        mac_b[i] = new int [ilosc_kolumn];
    }
    cout << "Bedziemy podawac teraz wartosci do macierzy a" << endl;
    for (int i=0; i<ilosc_wierszy; ++i) {
        for (int j=0; j<ilosc_kolumn; ++j) {
            cin >> mac_a[i][j];
        }
        cout << "Nastepna linia" << endl;
    }

    cout << "Bedziemy podawac teraz wartosci do macierzy b" << endl;
    for (int i=0; i<ilosc_wierszy; ++i) {
        for (int j=0; j<ilosc_kolumn; ++j) {
            cin >> mac_b[i][j];
        }
        cout << "Nastepna linia" << endl;
    }

    int ** macierz = addMatrix(mac_a, mac_b, ilosc_wierszy, ilosc_kolumn);

    return 0;
}
