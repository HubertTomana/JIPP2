//
// Created by huber on 30.10.2021.
//

#include "../matrixLib//include/lib.h"
#include <cstring>

using namespace std;

int main (int argc, char* argv[]) {
    if (strcmp(argv[1], "addMatrix") == 0) {
        int ilosc_wierszy;
        int ilosc_kolumn;
        cout << "Podaj liczbe wierszy i kolumn" << endl;
        cin >> ilosc_wierszy >> ilosc_kolumn;
        int **mac_a = new int *[ilosc_wierszy];
        int **mac_b = new int *[ilosc_wierszy];

        for (int i = 0; i < ilosc_wierszy; ++i) {
            mac_a[i] = new int[ilosc_kolumn];
            mac_b[i] = new int[ilosc_kolumn];
        }
        cout << "Bedziemy podawac teraz wartosci do macierzy a" << endl;
        for (int i = 0; i < ilosc_wierszy; ++i) {
            for (int j = 0; j < ilosc_kolumn; ++j) {
                cin >> mac_a[i][j];
            }
            cout << "Nastepna linia" << endl;
        }

        cout << "Bedziemy podawac teraz wartosci do macierzy b" << endl;
        for (int i = 0; i < ilosc_wierszy; ++i) {
            for (int j = 0; j < ilosc_kolumn; ++j) {
                cin >> mac_b[i][j];
            }
            cout << "Nastepna linia" << endl;
        }

        int **macierz = addMatrix(mac_a, mac_b, ilosc_wierszy, ilosc_kolumn);

        for (int i=0; i<ilosc_wierszy; ++i) {
            for (int j=0; j<ilosc_kolumn; ++j) {
                cout << macierz[i][j] << " ";
            }
            cout << endl;
        }
    }

    if (strcmp(argv[1], "subtractMatrix") == 0) {
        int ilosc_wierszy;
        int ilosc_kolumn;
        cout << "Podaj liczbe wierszy i kolumn" << endl;
        cin >> ilosc_wierszy >> ilosc_kolumn;
        int **mac_a = new int *[ilosc_wierszy];
        int **mac_b = new int *[ilosc_wierszy];

        for (int i = 0; i < ilosc_wierszy; ++i) {
            mac_a[i] = new int[ilosc_kolumn];
            mac_b[i] = new int[ilosc_kolumn];
        }
        cout << "Bedziemy podawac teraz wartosci do macierzy a" << endl;
        for (int i = 0; i < ilosc_wierszy; ++i) {
            for (int j = 0; j < ilosc_kolumn; ++j) {
                cin >> mac_a[i][j];
            }
            cout << "Nastepna linia" << endl;
        }

        cout << "Bedziemy podawac teraz wartosci do macierzy b" << endl;
        for (int i = 0; i < ilosc_wierszy; ++i) {
            for (int j = 0; j < ilosc_kolumn; ++j) {
                cin >> mac_b[i][j];
            }
            cout << "Nastepna linia" << endl;
        }

        int **macierz = subtractMatrix(mac_a, mac_b, ilosc_wierszy, ilosc_kolumn);

        for (int i=0; i<ilosc_wierszy; ++i) {
            for (int j=0; j<ilosc_kolumn; ++j) {
                cout << macierz[i][j] << " ";
            }
            cout << endl;
        }
    }

    if (strcmp(argv[1], "multiplyMatrix") == 0) {
        int ilosc_wierszy_mac_a;
        int ilosc_kolumn_mac_a; //co stanowi tez ilosc wierszy macierzy B
        int ilosc_kolumn_mac_b;
        cout << "Podaj liczbe wierszy i kolumn macierzy A i liczbe kolumn macierzy B" << endl;
        cin >> ilosc_wierszy_mac_a >> ilosc_kolumn_mac_a >> ilosc_kolumn_mac_b;
        int **mac_a = new int *[ilosc_wierszy_mac_a];
        for (int i = 0; i < ilosc_wierszy_mac_a; ++i) {
            mac_a[i] = new int[ilosc_kolumn_mac_b];
        }
        int **mac_b = new int *[ilosc_kolumn_mac_a];
        for (int i=0; i<ilosc_kolumn_mac_a; ++i) {
            mac_b[i] = new int[ilosc_kolumn_mac_b];
        }

        cout << "Bedziemy podawac teraz wartosci do macierzy a" << endl;
        for (int i = 0; i < ilosc_wierszy_mac_a; ++i) {
            for (int j = 0; j < ilosc_kolumn_mac_a; ++j) {
                cin >> mac_a[i][j];
            }
            cout << "Nastepna linia" << endl;
        }

        cout << "Bedziemy podawac teraz wartosci do macierzy b" << endl;
        for (int i = 0; i < ilosc_kolumn_mac_a; ++i) {
            for (int j = 0; j < ilosc_kolumn_mac_b; ++j) {
                cin >> mac_b[i][j];
            }
            cout << "Nastepna linia" << endl;
        }

        int **macierz = multiplyMatrix(mac_a, mac_b, ilosc_wierszy_mac_a, ilosc_kolumn_mac_a, ilosc_kolumn_mac_b);

        for (int i=0; i<ilosc_wierszy_mac_a; ++i) {
            for (int j=0; j<ilosc_kolumn_mac_b; ++j) {
                cout << macierz[i][j] << " ";
            }
            cout << endl;
        }
    }

    if (strcmp(argv[1], "multiplyByScalar") == 0 ) {
        int ilosc_wierszy;
        int ilosc_kolumn;
        int skalar;
        cout << "Podaj liczbe wierszy i kolumn" << endl;
        cin >> ilosc_wierszy >> ilosc_kolumn;
        int **mac = new int *[ilosc_wierszy];

        for (int i = 0; i < ilosc_wierszy; ++i) {
            mac[i] = new int[ilosc_kolumn];
        }
        cout << "Bedziemy podawac teraz wartosci do macierzy" << endl;
        for (int i = 0; i < ilosc_wierszy; ++i) {
            for (int j = 0; j < ilosc_kolumn; ++j) {
                cin >> mac[i][j];
            }
            cout << "Nastepna linia" << endl;
        }
        cout << "Podaj skalar" << endl;
        cin >> skalar;
        int **macierz = multiplyByScalar(mac, ilosc_wierszy, ilosc_kolumn, skalar);

        for (int i=0; i<ilosc_wierszy; ++i) {
            for (int j=0; j<ilosc_kolumn; ++j) {
                cout << macierz[i][j] << " ";
            }
            cout << endl;
        }
    }

    if (strcmp(argv[1], "transpozeMatrix") == 0 ) {
        int ilosc_wierszy;
        int ilosc_kolumn;
        cout << "Podaj liczbe wierszy i kolumn" << endl;
        cin >> ilosc_wierszy >> ilosc_kolumn;
        int **mac = new int *[ilosc_wierszy];

        for (int i = 0; i < ilosc_wierszy; ++i) {
            mac[i] = new int[ilosc_kolumn];
        }
        cout << "Bedziemy podawac teraz wartosci do macierzy" << endl;
        for (int i = 0; i < ilosc_wierszy; ++i) {
            for (int j = 0; j < ilosc_kolumn; ++j) {
                cin >> mac[i][j];
            }
            cout << "Nastepna linia" << endl;
        }
        int **macierz = transpozeMatrix(mac,ilosc_wierszy,ilosc_kolumn);

        for (int i=0; i<ilosc_kolumn; ++i) {
            for (int j=0; j<ilosc_wierszy; ++j) {
                cout << macierz[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
