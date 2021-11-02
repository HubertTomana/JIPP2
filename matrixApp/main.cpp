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
        double wybor=0;
        cout << "Podaj liczbe wierszy i kolumn" << endl;
        cin >> ilosc_wierszy >> ilosc_kolumn;
        cout << "Wpisz 1, jesli wpisujesz liczby calkowite, a 2, gdy zmiennoprzecinkowe" << endl;
        cin >> wybor;
        if (wybor == 1) {
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
            for (int i = 0; i < ilosc_wierszy; ++i) {
                for (int j = 0; j < ilosc_kolumn; ++j) {
                    cout << macierz[i][j] << " ";
                }
                cout << endl;
            }
        }
        else if (wybor == 2) {
            double **mac_a = new double *[ilosc_wierszy];
            double **mac_b = new double *[ilosc_wierszy];

            for (int i = 0; i < ilosc_wierszy; ++i) {
                mac_a[i] = new double[ilosc_kolumn];
                mac_b[i] = new double[ilosc_kolumn];
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

            double **macierz = addMatrix(mac_a, mac_b, ilosc_wierszy, ilosc_kolumn);
            for (int i = 0; i < ilosc_wierszy; ++i) {
                for (int j = 0; j < ilosc_kolumn; ++j) {
                    cout << macierz[i][j] << " ";
                }
                cout << endl;
            }
        }
        else {
            cout << "Podano niewlasciwa liczbe" << endl;
            return 0;
        }
    }

    if (strcmp(argv[1], "subtractMatrix") == 0) {
        int ilosc_wierszy;
        int ilosc_kolumn;
        double wybor=0;
        cout << "Podaj liczbe wierszy i kolumn" << endl;
        cin >> ilosc_wierszy >> ilosc_kolumn;
        cout << "Wpisz 1, jesli wpisujesz liczby calkowite, a 2, gdy zmiennoprzecinkowe" << endl;
        cin >> wybor;
        if (wybor == 1) {
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

            for (int i = 0; i < ilosc_wierszy; ++i) {
                for (int j = 0; j < ilosc_kolumn; ++j) {
                    cout << macierz[i][j] << " ";
                }
                cout << endl;
            }
        }
        else if (wybor == 2) {
            double **mac_a = new double *[ilosc_wierszy];
            double **mac_b = new double *[ilosc_wierszy];

            for (int i = 0; i < ilosc_wierszy; ++i) {
                mac_a[i] = new double[ilosc_kolumn];
                mac_b[i] = new double[ilosc_kolumn];
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

            double **macierz = subtractMatrix(mac_a, mac_b, ilosc_wierszy, ilosc_kolumn);

            for (int i = 0; i < ilosc_wierszy; ++i) {
                for (int j = 0; j < ilosc_kolumn; ++j) {
                    cout << macierz[i][j] << " ";
                }
                cout << endl;
            }
        }
        else {
            cout << "Podano niewlasciwa liczbe" << endl;
            return 0;
        }
    }

    if (strcmp(argv[1], "multiplyMatrix") == 0) {
        int ilosc_wierszy_mac_a;
        int ilosc_kolumn_mac_a; //co stanowi tez ilosc wierszy macierzy B
        int ilosc_kolumn_mac_b;
        double wybor=0;
        cout << "Podaj liczbe wierszy i kolumn macierzy A i liczbe kolumn macierzy B" << endl;
        cin >> ilosc_wierszy_mac_a >> ilosc_kolumn_mac_a >> ilosc_kolumn_mac_b;
        cout << "Wpisz 1, jesli wpisujesz liczby calkowite, a 2, gdy zmiennoprzecinkowe" << endl;
        cin >> wybor;
        if (wybor == 1) {
            int **mac_a = new int *[ilosc_wierszy_mac_a];
            for (int i = 0; i < ilosc_wierszy_mac_a; ++i) {
                mac_a[i] = new int[ilosc_kolumn_mac_b];
            }
            int **mac_b = new int *[ilosc_kolumn_mac_a];
            for (int i = 0; i < ilosc_kolumn_mac_a; ++i) {
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

            for (int i = 0; i < ilosc_wierszy_mac_a; ++i) {
                for (int j = 0; j < ilosc_kolumn_mac_b; ++j) {
                    cout << macierz[i][j] << " ";
                }
                cout << endl;
            }
        }
        else if (wybor == 2) {
            double **mac_a = new double *[ilosc_wierszy_mac_a];
            for (int i = 0; i < ilosc_wierszy_mac_a; ++i) {
                mac_a[i] = new double[ilosc_kolumn_mac_b];
            }
            double **mac_b = new double *[ilosc_kolumn_mac_a];
            for (int i = 0; i < ilosc_kolumn_mac_a; ++i) {
                mac_b[i] = new double[ilosc_kolumn_mac_b];
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

            double **macierz = multiplyMatrix(mac_a, mac_b, ilosc_wierszy_mac_a, ilosc_kolumn_mac_a, ilosc_kolumn_mac_b);

            for (int i = 0; i < ilosc_wierszy_mac_a; ++i) {
                for (int j = 0; j < ilosc_kolumn_mac_b; ++j) {
                    cout << macierz[i][j] << " ";
                }
                cout << endl;
            }
        }
        else {
            cout << "Podano niewlasciwa liczbe" << endl;
            return 0;
        }
    }

    if (strcmp(argv[1], "multiplyByScalar") == 0 ) {
        int ilosc_wierszy;
        int ilosc_kolumn;
        double wybor=0;
        cout << "Podaj liczbe wierszy i kolumn" << endl;
        cin >> ilosc_wierszy >> ilosc_kolumn;
        cout << "Wpisz 1, jesli wpisujesz liczby calkowite, a 2, gdy zmiennoprzecinkowe" << endl;
        cin >> wybor;
        if (wybor == 1) {
            int skalar;
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

            for (int i = 0; i < ilosc_wierszy; ++i) {
                for (int j = 0; j < ilosc_kolumn; ++j) {
                    cout << macierz[i][j] << " ";
                }
                cout << endl;
            }
        }
        else if (wybor == 2) {
            double skalar;
            double **mac = new double *[ilosc_wierszy];

            for (int i = 0; i < ilosc_wierszy; ++i) {
                mac[i] = new double[ilosc_kolumn];
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
            double **macierz = multiplyByScalar(mac, ilosc_wierszy, ilosc_kolumn, skalar);

            for (int i = 0; i < ilosc_wierszy; ++i) {
                for (int j = 0; j < ilosc_kolumn; ++j) {
                    cout << macierz[i][j] << " ";
                }
                cout << endl;
            }
        }
        else {
            cout << "Podano niewlasciwa liczbe" << endl;
            return 0;
        }
    }

    if (strcmp(argv[1], "transpozeMatrix") == 0 ) {
        int ilosc_wierszy;
        int ilosc_kolumn;
        double wybor=0;
        cout << "Podaj liczbe wierszy i kolumn" << endl;
        cin >> ilosc_wierszy >> ilosc_kolumn;
        cout << "Wpisz 1, jesli wpisujesz liczby calkowite, a 2, gdy zmiennoprzecinkowe" << endl;
        cin >> wybor;
        if (wybor == 1) {
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
            int **macierz = transpozeMatrix(mac, ilosc_wierszy, ilosc_kolumn);

            for (int i = 0; i < ilosc_kolumn; ++i) {
                for (int j = 0; j < ilosc_wierszy; ++j) {
                    cout << macierz[i][j] << " ";
                }
                cout << endl;
            }
        }
        else if (wybor == 2) {
            double **mac = new double *[ilosc_wierszy];

            for (int i = 0; i < ilosc_wierszy; ++i) {
                mac[i] = new double[ilosc_kolumn];
            }
            cout << "Bedziemy podawac teraz wartosci do macierzy" << endl;
            for (int i = 0; i < ilosc_wierszy; ++i) {
                for (int j = 0; j < ilosc_kolumn; ++j) {
                    cin >> mac[i][j];
                }
                cout << "Nastepna linia" << endl;
            }
            double **macierz = transpozeMatrix(mac, ilosc_wierszy, ilosc_kolumn);

            for (int i = 0; i < ilosc_kolumn; ++i) {
                for (int j = 0; j < ilosc_wierszy; ++j) {
                    cout << macierz[i][j] << " ";
                }
                cout << endl;
            }
        }
        else {
            cout << "Podano niewlasciwa liczbe" << endl;
            return 0;
        }
    }

    if (strcmp(argv[1], "powerMatrix") == 0 ) {
        int ilosc_wierszy;
        int ilosc_kolumn;
        double wybor=0;
        unsigned int potega = atoi(argv[2]);
        cout << "Podaj liczbe wierszy i kolumn" << endl;
        cin >> ilosc_wierszy >> ilosc_kolumn;
        cout << "Wpisz 1, jesli wpisujesz liczby calkowite, a 2, gdy zmiennoprzecinkowe" << endl;
        cin >> wybor;
        if (wybor == 1) {
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
            int **macierz = powerMatrix(mac, ilosc_wierszy, ilosc_kolumn, potega);

            for (int i = 0; i < ilosc_wierszy; ++i) {
                for (int j = 0; j < ilosc_kolumn; ++j) {
                    cout << macierz[i][j] << " ";
                }
                cout << endl;
            }
        }
        else if (wybor == 2) {
            double **mac = new double *[ilosc_wierszy];

            for (int i = 0; i < ilosc_wierszy; ++i) {
                mac[i] = new double[ilosc_kolumn];
            }
            cout << "Bedziemy podawac teraz wartosci do macierzy" << endl;
            for (int i = 0; i < ilosc_wierszy; ++i) {
                for (int j = 0; j < ilosc_kolumn; ++j) {
                    cin >> mac[i][j];
                }
                cout << "Nastepna linia" << endl;
            }
            double **macierz = powerMatrix(mac, ilosc_wierszy, ilosc_kolumn, potega);

            for (int i = 0; i < ilosc_wierszy; ++i) {
                for (int j = 0; j < ilosc_kolumn; ++j) {
                    cout << macierz[i][j] << " ";
                }
                cout << endl;
            }
        }
        else {
            cout << "Podano niewlasciwa liczbe" << endl;
            return 0;
        }
    }

    if (strcmp(argv[1], "determinantMatrix") == 0 ) {
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

        cout << determinantMatrix(mac, ilosc_wierszy, ilosc_kolumn);
    }

    if (strcmp(argv[1], "matrixIsDiagonal") == 0 ) {
        int ilosc_wierszy;
        int ilosc_kolumn;
        double wybor=0;
        cout << "Podaj liczbe wierszy i kolumn" << endl;
        cin >> ilosc_wierszy >> ilosc_kolumn;
        cout << "Wpisz 1, jesli wpisujesz liczby calkowite, a 2, gdy zmiennoprzecinkowe" << endl;
        cin >> wybor;
        if (wybor == 1) {
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

            cout << matrixIsDiagonal(mac, ilosc_wierszy, ilosc_kolumn) << endl;
        }
        else if (wybor == 2) {
            double **mac = new double *[ilosc_wierszy];

            for (int i = 0; i < ilosc_wierszy; ++i) {
                mac[i] = new double[ilosc_kolumn];
            }
            cout << "Bedziemy podawac teraz wartosci do macierzy" << endl;
            for (int i = 0; i < ilosc_wierszy; ++i) {
                for (int j = 0; j < ilosc_kolumn; ++j) {
                    cin >> mac[i][j];
                }
                cout << "Nastepna linia" << endl;
            }

            cout << matrixIsDiagonal(mac, ilosc_wierszy, ilosc_kolumn) << endl;
        }
        else {
            cout << "Podano niewlasciwa liczbe" << endl;
            return 0;
        }
    }

    if (strcmp(argv[1], "swap") == 0 ) {
        double wybor=0;
        cout << "Wpisz 1, jesli wpisujesz liczby calkowite, a 2, gdy zmiennoprzecinkowe" << endl;
        cin >> wybor;
        if (wybor == 1) {
            int a,b;
            cout << "Podaj wartosci a i b" << endl;
            cin >> a >> b;
            swap(a, b);
            cout << a << " " << b << endl;
        }
        else if (wybor == 2) {
            double a, b;
            cout << "Podaj wartosci a i b" << endl;
            cin >> a >> b;
            swap(a, b);
            cout << a << " " << b << endl;
        }
        else {
            cout << "Podano niewlasciwa liczbe" << endl;
            return 0;
        }
    }

    if (strcmp(argv[1], "sortRow") == 0 ) {
        double wybor = 0;
        int dlugosc_tablicy;
        cout << "Podaj dlugosc tablicy" << endl;
        cin >> dlugosc_tablicy;
        cout << "Wpisz 1, jesli wpisujesz liczby calkowite, a 2, gdy zmiennoprzecinkowe" << endl;
        cin >> wybor;
        if (wybor == 1) {
            int *tab = new int (dlugosc_tablicy);
            sortRow(tab, dlugosc_tablicy);
            for (int i = 0; i < dlugosc_tablicy; ++i)
                cout << tab[i] << " ";
        }
        else if (wybor == 2) {
            double *tab = new double (dlugosc_tablicy);
            sortRow(tab, dlugosc_tablicy);
            for (int i = 0; i < dlugosc_tablicy; ++i)
                cout << tab[i] << " ";
        }
        else {
            cout << "Podano niewlasciwa liczbe" << endl;
            return 0;
        }
    }

    if (strcmp(argv[1], "sortRowsInMatrix") == 0 ) {
        int ilosc_wierszy;
        int ilosc_kolumn;
        double wybor = 0;
        cout << "Podaj liczbe wierszy i kolumn" << endl;
        cin >> ilosc_wierszy >> ilosc_kolumn;
        cout << "Wpisz 1, jesli wpisujesz liczby calkowite, a 2, gdy zmiennoprzecinkowe" << endl;
        cin >> wybor;
        if (wybor == 1) {
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

            int **macierz = sortRowsInMatrix(mac, ilosc_wierszy, ilosc_kolumn);

            for (int i = 0; i < ilosc_wierszy; i++) {
                for (int j = 0; j < ilosc_kolumn; j++) {
                    cout << macierz[i][j] << " ";
                }
                cout << endl;
            }
        }
        else if (wybor == 2) {
            double **mac = new double *[ilosc_wierszy];
            for (int i = 0; i < ilosc_wierszy; ++i) {
                mac[i] = new double[ilosc_kolumn];
            }
            cout << "Bedziemy podawac teraz wartosci do macierzy" << endl;
            for (int i = 0; i < ilosc_wierszy; ++i) {
                for (int j = 0; j < ilosc_kolumn; ++j) {
                    cin >> mac[i][j];
                }
                cout << "Nastepna linia" << endl;
            }

            double **macierz = sortRowsInMatrix(mac, ilosc_wierszy, ilosc_kolumn);

            for (int i = 0; i < ilosc_wierszy; i++) {
                for (int j = 0; j < ilosc_kolumn; j++) {
                    cout << macierz[i][j] << " ";
                }
                cout << endl;
            }
        }
        else {
            cout << "Podano niewlasciwa liczbe" << endl;
            return 0;
        }
    }

    return 0;
}
