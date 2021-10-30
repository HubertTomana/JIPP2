//
// Created by huber on 30.10.2021.
//
#include "lib.h"

int **addMatrix (int **mac_a, int **mac_b, int ilosc_wierszy, int ilosc_kolumn) {
    int **mac_wynik = new int *[ilosc_wierszy];
    for (int i=0; i<ilosc_wierszy; ++i) {
        mac_wynik[i] = new int [ilosc_kolumn];
    }
    for (int i=0; i<ilosc_wierszy; ++i) {
        for (int j=0; j<ilosc_kolumn; ++j) {
            mac_wynik[i][j] = mac_a[i][j] + mac_b[i][j];
        }
    }

    for (int i=0; i<ilosc_wierszy; ++i) {
        for (int j=0; j<ilosc_kolumn; ++j) {
            cout << mac_wynik[i][j] << " ";
        }
        cout << endl;
    }



    return mac_wynik;
}

int **subtractMatrix (int **mac_a, int **mac_b, int ilosc_wierszy, int ilosc_kolumn) {
    int **mac_wynik = new int *[ilosc_wierszy];
    for (int i=0; i<ilosc_wierszy; ++i) {
        mac_wynik[i] = new int [ilosc_kolumn];
    }
    for (int i=0; i<ilosc_wierszy; ++i) {
        for (int j=0; j<ilosc_kolumn; ++j) {
            mac_wynik[i][j] = mac_a[i][j] - mac_b[i][j];
        }
    }
    return mac_wynik;
}
//przy mnozeniu moze wystapic przejscie poza zakres int!!
int **multiplyMatrix (int **mac_a, int **mac_b, int ilosc_wierszy_mac_a, int ilosc_kolumn_mac_a, int ilosc_kolumn_mac_b) {
    int **mac_wynik = new int *[ilosc_wierszy_mac_a];
    for (int i=0; i<ilosc_wierszy_mac_a; ++i) {
        mac_wynik[i] = new int [ilosc_kolumn_mac_b];
    }
    int suma = 0;
    for (int i =0; i<ilosc_wierszy_mac_a; ++i) {
        for (int j=0; j<ilosc_kolumn_mac_b; ++j) {
            suma = 0;
            for (int k=0; k<ilosc_kolumn_mac_a; ++k) {
                suma+= mac_a[i][k] * mac_b [k][j];
                mac_wynik[i][j] = suma;
            }

        }
    }

    return mac_wynik;
}

