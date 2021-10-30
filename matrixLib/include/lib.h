//
// Created by huber on 30.10.2021.
//

#ifndef JIPP2_LIB_H
#define JIPP2_LIB_H

#include <iostream>

using namespace std;

int **addMatrix(int **mac_a, int **mac_b, int ilosc_wierszy, int ilosc_kolumn);
int **subractMatrix(int **mac_a, int **mac_b, int ilosc_wierszy, int ilosc_kolumn);
int **multiplyMatrix (int **mac_a, int **mac_b, int ilosc_wierszy_mac_a, int ilosc_kolumn_mac_a, int ilosc_kolumn_mac_b);

#endif //JIPP2_LIB_H
