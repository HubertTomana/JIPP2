//
// Created by huber on 30.10.2021.
//

#ifndef JIPP2_LIB_H
#define JIPP2_LIB_H

#include <iostream>

using namespace std;

void zwalnianie_pamieci_int (int **tab, int ilosc_wierszy);
void zwalnianie_pamieci_double (double **tab, int ilosc_wierszy);
int **addMatrix(int **mac_a, int **mac_b, int ilosc_wierszy, int ilosc_kolumn);
double **addMatrix (double **mac_a, double **mac_b, int ilosc_wierszy, int ilosc_kolumn);
int **subtractMatrix(int **mac_a, int **mac_b, int ilosc_wierszy, int ilosc_kolumn);
double **subtractMatrix (double **mac_a, double **mac_b, int ilosc_wierszy, int ilosc_kolumn);
int **multiplyMatrix (int **mac_a, int **mac_b, int ilosc_wierszy_mac_a, int ilosc_kolumn_mac_a, int ilosc_kolumn_mac_b);
double **multiplyMatrix (double **mac_a, double **mac_b, int ilosc_wierszy_mac_a, int ilosc_kolumn_mac_a, int ilosc_kolumn_mac_b);
int **multiplyByScalar (int **mac, int ilosc_wierszy, int ilosc_kolumn, int skalar);
double **multiplyByScalar (double **mac, int ilosc_wierszy, int ilosc_kolumn, double skalar);
int **transpozeMatrix (int **mac, int ilosc_wierszy, int ilosc_kolumn);
double **transpozeMatrix (double **mac, int ilosc_wierszy, int ilosc_kolumn);
int **powerMatrix (int **mac, int ilosc_wierszy, int ilosc_kolumn, unsigned int stopien_potegi);
double **powerMatrix (double **mac, int ilosc_wierszy, int ilosc_kolumn, unsigned int stopien_potegi);
int determinantMatrixRec (int n, int w, int *WK, int ** A);
double determinantMatrixRec (int n, int w, int *WK, double ** A);
int determinantMatrix (int **mac, int ilosc_wierszy, int ilosc_kolumn);
double determinantMatrix (double **mac, int ilosc_wierszy, int ilosc_kolumn);
bool matrixIsDiagonal(int **mac, int ilosc_wierszy, int ilosc_kolumn);
bool matrixIsDiagonal(double **mac, int ilosc_wierszy, int ilosc_kolumn);
void swap (int *a, int *b);
void swap (double *a, double *b);
void sortRow (int *tab, int ilosc_kolumn);
void sortRow (double *tab, int ilosc_kolumn);
int **sortRowsInMatrix (int **mac, int ilosc_wierszy, int ilosc_kolumn);
double **sortRowsInMatrix (double **mac, int ilosc_wierszy, int ilosc_kolumn);
void help();
#endif //JIPP2_LIB_H
