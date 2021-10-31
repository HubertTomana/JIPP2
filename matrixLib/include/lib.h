//
// Created by huber on 30.10.2021.
//

#ifndef JIPP2_LIB_H
#define JIPP2_LIB_H

#include <iostream>

using namespace std;

int **addMatrix(int **mac_a, int **mac_b, int ilosc_wierszy, int ilosc_kolumn);
int **subtractMatrix(int **mac_a, int **mac_b, int ilosc_wierszy, int ilosc_kolumn);
int **multiplyMatrix (int **mac_a, int **mac_b, int ilosc_wierszy_mac_a, int ilosc_kolumn_mac_a, int ilosc_kolumn_mac_b);
int **multiplyByScalar (int **mac, int ilosc_wierszy, int ilosc_kolumn, int skalar);
int **transpozeMatrix (int **mac, int ilosc_wierszy, int ilosc_kolumn);
int **powerMatrix (int **mac, int ilosc_wierszy, int ilosc_kolumn, unsigned int stopien_potegi);
int determinantMatrix (int **mac, int ilosc_wierszy, int ilosc_kolumn);
bool matrixIsDiagonal(int **mac, int ilosc_wierszy, int ilosc_kolumn);
void swap (int *a, int *b);
void sortRow (int *tab, int ilosc_kolumn);
int **sortRowsInMatrix (int **mac, int ilosc_wierszy, int ilosc_kolumn);
#endif //JIPP2_LIB_H
