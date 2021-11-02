//
// Created by huber on 30.10.2021.
//

#ifndef JIPP2_LIB_H
#define JIPP2_LIB_H

#include <iostream>

using namespace std;

void zwalnianie_pamieci_int (int **tab, int ilosc_wierszy);
void zwalnianie_pamieci_double (double **tab, int ilosc_wierszy);
/*
 * Funkcja addMatrix przyjmuje jako argument tablice dwuwymiarowe mac_a oraz mac_b przekazywane jako podwojny wskaznik oraz ilosc wierszy oraz kolumn.
 * Zwraca ona tablice dwuwymiarową mac_wynik, przekazywanej jako podwojny wskaźnik, która jest wynikiem dodawania tablic mac_a oraz mac_b
 * Poprzez zastosowanie przeciążenia funkcji, funkcja addMatrix obsługuje zarówno wartości int, jak i double
 */
int **addMatrix(int **mac_a, int **mac_b, int ilosc_wierszy, int ilosc_kolumn);
double **addMatrix (double **mac_a, double **mac_b, int ilosc_wierszy, int ilosc_kolumn);
/*
 * Funkcja subtractMatrix przyjmuje jako argument tablice dwuwymiarowe mac_a oraz mac_b przekazywane jako podwojny wskaznik oraz ilosc wierszy oraz kolumn.
 * Zwraca ona tablice dwuwymiarową mac_wynik, przekazywanej jako podwojny wskaźnik, która jest wynikiem odejmowania tablic mac_a oraz mac_b
 * Poprzez zastosowanie przeciążenia funkcji, funkcja subtractMatrix obsługuje zarówno wartości int, jak i double
 */
int **subtractMatrix(int **mac_a, int **mac_b, int ilosc_wierszy, int ilosc_kolumn);
double **subtractMatrix (double **mac_a, double **mac_b, int ilosc_wierszy, int ilosc_kolumn);
/*
 * Funkcja multiplyMatrix przyjmuje jako argument tablice dwuwymiarowe mac_a oraz mac_b przekazywane jako podwojny wskaznik oraz ilosc wierszy oraz kolumn mac_a oraz kolumn mac_b.
 * Zwraca ona tablice dwuwymiarową mac_wynik, przekazywanej jako podwojny wskaźnik, która jest wynikiem mnożenia tablic mac_a oraz mac_b
 * Poprzez zastosowanie przeciążenia funkcji, funkcja multiplyMatrix obsługuje zarówno wartości int, jak i double
 */
int **multiplyMatrix (int **mac_a, int **mac_b, int ilosc_wierszy_mac_a, int ilosc_kolumn_mac_a, int ilosc_kolumn_mac_b);
double **multiplyMatrix (double **mac_a, double **mac_b, int ilosc_wierszy_mac_a, int ilosc_kolumn_mac_a, int ilosc_kolumn_mac_b);
/*
 * Funkcja multiplyByScalar przyjmuje jako argument tablicę dwuwymiarową mac przekazywaną jako podwójny wskaznik, ilosc wierszy oraz kolumn mac oraz wartosc skalaru.
 * Zwraca ona tablice dwuwymiarową macierz, przekazywanej jako podwojny wskaźnik, która jest wynikiem mnożenia tablic mac przez skalar.
 * Poprzez zastosowanie przeciążenia funkcji, funkcja multiplyByScalar obsługuje zarówno wartości int, jak i double
 */
int **multiplyByScalar (int **mac, int ilosc_wierszy, int ilosc_kolumn, int skalar);
double **multiplyByScalar (double **mac, int ilosc_wierszy, int ilosc_kolumn, double skalar);
/*
 * Funkcja transpozeMatrix przyjmuje jako argument tablicę dwuwymiarową mac przekazywaną jako podwójny wskaznik oraz ilosc wierszy oraz kolumn mac.
 * Zwraca ona tablice dwuwymiarową macierz, przekazywanej jako podwojny wskaźnik, która jest wynikiem transponowania tablicy mac.
 * Poprzez zastosowanie przeciążenia funkcji, funkcja transpozeMatrix obsługuje zarówno wartości int, jak i double
 */
int **transpozeMatrix (int **mac, int ilosc_wierszy, int ilosc_kolumn);
double **transpozeMatrix (double **mac, int ilosc_wierszy, int ilosc_kolumn);
/*
 * Funkcja powerMatrix przyjmuje jako argument tablicę dwuwymiarową mac przekazywaną jako podwójny wskaznik, ilosc wierszy oraz kolumn mac oraz stopien potegi.
 * Stopien potegi jest przekazywany jako drugi parametr podczas wywoływania programu.
 * Zwraca ona tablice dwuwymiarową macierz, przekazywanej jako podwojny wskaźnik, która jest wynikiem potęgowania tablicy mac.
 * Poprzez zastosowanie przeciążenia funkcji, funkcja powerMatrix obsługuje zarówno wartości int, jak i double
 */
int **powerMatrix (int **mac, int ilosc_wierszy, int ilosc_kolumn, unsigned int stopien_potegi);
double **powerMatrix (double **mac, int ilosc_wierszy, int ilosc_kolumn, unsigned int stopien_potegi);
/*
 * Funkcja determinantMatrixRec jest funkcją rekurencyjną, która wylicza wyznacznik macierzy A poprzez zastsowania rozwinięcia Laplace'a
 * Przyjmuje ona jako argumenty n- stopień podmacierzy, w - bieżący wiersz macierzy głównej, *WK - wektor kolumn o n elementach oraz **A - macierz podstawowa.
 * Poprzez zastosowanie przeciążenia funkcji, funkcja determinantMatrixRec obsługuje zarówno wartości int, jak i double
 */
int determinantMatrixRec (int n, int w, int *WK, int ** A);
double determinantMatrixRec (int n, int w, int *WK, double ** A);
/*
 * Funkcja determinantMatrix przyjmuje jako argumenty tablicę dwuwymiarową mac przekazywaną jako podwójny wskaznik oraz ilosc wierszy oraz kolumn mac.
 * Zwraca ona wyznacznik det, który wyliczany jest poprzez funkcję rekurencyjną determinantMatrixRec
 * Poprzez zastosowanie przeciążenia funkcji, funkcja determinantMatrix obsługuje zarówno wartości int, jak i double
 */
int determinantMatrix (int **mac, int ilosc_wierszy, int ilosc_kolumn);
double determinantMatrix (double **mac, int ilosc_wierszy, int ilosc_kolumn);
/*
 * Funkcja matrixIsDiagonal przyjmuje jako argumenty tablicę dwuwymiarową mac przekazywaną jako podwójny wskaznik oraz ilosc wierszy oraz kolumn mac.
 * Zwraca ona wartość TRUE albo FALSE (bool, podczas wywolywania funkcji main 0= FALSE, 1 = TRUE) operacji badania, czy macierz mac jest diagonalna
 * Poprzez zastosowanie przeciążenia funkcji, funkcja matrixIsDiagonal obsługuje zarówno wartości int, jak i double
 */
bool matrixIsDiagonal(int **mac, int ilosc_wierszy, int ilosc_kolumn);
bool matrixIsDiagonal(double **mac, int ilosc_wierszy, int ilosc_kolumn);
/*
 * Funkcja swap przyjmuje jako argumenty wskaznik na zmienną a oraz b
 * W jej wyniku następuje zamiana tych elementów.
 * Poprzez zastosowanie przeciążenia funkcji, funkcja swap obsługuje zarówno wartości int, jak i double
 */
void swap (int *a, int *b);
void swap (double *a, double *b);
/*
 * Funkcja sortRow przyjmuje jako argumenty tablicę tab oraz ilosc kolumn tej tablicy (jej dlugosc).
 * W jej wyniku następuje sortowanie elementów tej tablicy rosnaco, przy użyciu sortowania bąbelkowego, gdzie użyto też poprzedniej funkcji swap.
 * Poprzez zastosowanie przeciążenia funkcji, funkcja sortRow obsługuje zarówno wartości int, jak i double
 */
void sortRow (int *tab, int ilosc_kolumn);
void sortRow (double *tab, int ilosc_kolumn);
/*
 * Funkcja sortRowsInMatrix przyjmuje jako argumenty tablicę tab oraz ilosc kolumn tej tablicy (jej dlugosc).
 * W jej wyniku następuje sortowanie elementów każdego wiersza tej macierzy rosnąco, przy użyciu sortowania bąbelkowego poprzez wywołanie poprzedniej funkcji sortRow.
 * Poprzez zastosowanie przeciążenia funkcji, funkcja sortRowsInMatrix obsługuje zarówno wartości int, jak i double
 */
int **sortRowsInMatrix (int **mac, int ilosc_wierszy, int ilosc_kolumn);
double **sortRowsInMatrix (double **mac, int ilosc_wierszy, int ilosc_kolumn);
/*
 * Funkcja help wypisuje dokumentacje.
 */
void help();
#endif //JIPP2_LIB_H
