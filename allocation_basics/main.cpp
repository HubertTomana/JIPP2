#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    cout << argv[1] << endl;
    if (argv[1]=="add") {
        cout << "nice" <<endl;
    }
    /*

    for (int i=0; i<argc; ++i) {
        cout << argv[i] << endl; //pierwszy argument ktory wpiszemy wchodzi na argv[1], poniewaz argv[0] to cała scieżka do .exe :)
    }

    int *n = new int;
    int k;

    cout << n << endl << *n << endl << &n << endl << &k << endl;
    //n wskazuje na int,  *n wartosc int, &n wartosc wskaznika, &k adres int k;
    //zeby przepisac wartosc k do n  :  int*n=&k

    delete n;

    int *tab = new int[5];
    delete[] tab;

    int **tab2 = new int *[5]; //deklaracja tablicy dwuwymiarowej
    for (int i = 0; i < 5; ++i) { //ctrl+alt+L -> czyszczenie kodu
        tab2[i] = new int[5];
    }

    for (int i = 0; i < 5; ++i) {
        delete[] tab2[i];
    }
    delete[] tab2;

    int tab3[3] = {3, 2, 1};
    // potem juz nie mozna tab3[3] = {3, 2, 1};, bo to sie odnosi juz do czwartego miejsca w tablicy, ktory nawet nie istnieje

    */


    return 0;
}