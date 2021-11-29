//
// Created by huber on 29.11.2021.
//

#include "class.h"

int main () {
    Note notatka1;
    cout << notatka1.getTitle() << endl;
    notatka1.setTitle("Notatka 1");
    string wynik = notatka1.getTitle();
    cout << wynik << endl;
    return 0;
}
