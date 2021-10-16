#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int add (string x, string y);
int sub (string x, string y);
double vol (string x, string y, string z, string q);
void help ();

int main(int argc, char *argv[]) {
    if (strcmp(argv[1],"add")==0) {
        int wynik = add(argv[2], argv[3]);
        cout << "wynik to : " << wynik << endl;
    }
    else if (strcmp(argv[1],"subtract")==0) {
        int wynik = sub(argv[2],argv[3]);
        cout << "wynik to : " << wynik << endl;
    }

    else if (strcmp(argv[1],"volume")==0) {
        double wynik = vol(argv[2],argv[3],argv[4], argv[5]);
        cout << "wynik to : " << wynik << endl;
    }
    else if (strcmp(argv[1],"help")==0) {
        help ();

    }
    else {
        cout << "Niepoprawny wybor operacji" << endl;
        help();
    }
    return 0;
}

int add (string x, string y) {
    int a = stoi (x);
    int b = stoi (y);
    return a+b;
}

int sub (string x, string y) {
    int a = stoi(x);
    int b = stoi (y);
    return a-b;
}

double vol (string x, string y, string z, string q) {
    int a = stoi (x);
    int b = stoi (y);
    int h = stoi (z);
    int H = stoi (q);
    return ((a+b)*h)/2*H;
}

void help () {
    cout << "ogarnij sie" << endl;
}