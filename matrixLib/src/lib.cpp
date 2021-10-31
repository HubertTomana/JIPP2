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
/*
    for (int i=0; i<ilosc_wierszy; ++i) {
        for (int j=0; j<ilosc_kolumn; ++j) {
            cout << mac_wynik[i][j] << " ";
        }
        cout << endl;
    }
*/


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

int **multiplyByScalar (int **mac, int ilosc_wierszy, int ilosc_kolumn, int skalar) {
    int **mac_wynik = new int *[ilosc_wierszy];
    for (int i=0; i<ilosc_wierszy; ++i) {
        mac_wynik[i] = new int [ilosc_kolumn];
    }

    for (int i=0; i<ilosc_wierszy; ++i) {
        for (int j=0; j<ilosc_kolumn; ++j) {
            mac_wynik[i][j]=mac[i][j]*skalar;
        }
    }
    return mac_wynik;
}

int **transpozeMatrix (int **mac, int ilosc_wierszy, int ilosc_kolumn) {
    int **mac_wynik = new int *[ilosc_kolumn];
    for (int i=0; i<ilosc_kolumn; ++i) {
        mac_wynik[i] = new int [ilosc_wierszy];
    }

    for (int i=0; i<ilosc_kolumn; ++i) {
        for (int j=0; j<ilosc_wierszy; ++j) {
            mac_wynik[i][j]=mac[j][i];
        }
    }
    return mac_wynik;
}

int **powerMatrix (int **mac, int ilosc_wierszy, int ilosc_kolumn, unsigned int stopien_potegi) {
    int **mac_wynik = new int *[ilosc_wierszy];
    for (int i=0; i<ilosc_wierszy; ++i) {
        mac_wynik[i] = new int [ilosc_kolumn];
    }
    mac_wynik=mac;
    for (int i=1; i<stopien_potegi; ++i) {
         mac_wynik=multiplyMatrix(mac_wynik, mac, ilosc_wierszy, ilosc_kolumn, ilosc_kolumn);
    }
    return mac_wynik;
}

int determinantMatrix (int **mac, int ilosc_wierszy, int ilosc_kolumn) {
    for (int i=1; i<ilosc_wierszy-1; ++i) {
        for (int j=i+1; j<ilosc_wierszy; ++j) {
            for (int k=i+1; k<ilosc_wierszy; ++k) {
                mac[j][k] = mac[j][k] - mac[j][i]/mac[i][i]*mac[i][k];
            }
        }
    }
    int det=1;
    for (int i=1; i<ilosc_wierszy; ++i) {
        det=det*mac[i][i];
    }
    return det;
}

bool matrixIsDiagonal(int **mac, int ilosc_wierszy, int ilosc_kolumn) {
    for (int i=0; i<ilosc_wierszy; ++i) {
        for (int j=0; j<ilosc_kolumn; ++j) {
            if (i!=j && mac[i][j]==0)
                return false;
        }
    }
    return true;
}

void swap (int *a, int *b) {
    int *pom = a;
    a=b;
    b=pom;
}

void sortRow (int *tab, int ilosc_kolumn) {
    for (int i=0; i<ilosc_kolumn; ++i) {
        for (int j=0; j<ilosc_kolumn-i; ++j) {
            if (tab[j]>tab[j+1])
                swap(tab[j], tab[j+1]);
        }
    }
}

int **sortRowsInMatrix (int **mac, int ilosc_wierszy, int ilosc_kolumn) {
    for (int i=0; i<ilosc_wierszy; ++i) {
        sortRow(mac[i], ilosc_kolumn);
    }
    return mac;
}