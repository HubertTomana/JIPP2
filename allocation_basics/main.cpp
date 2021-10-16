#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int add (int x, int y);
int sub (int x, int y);
double vol (int a, int b, int h, int H);
void help ();

int main(int argc, char *argv[]) {
    //cout << argv[1] << endl;
    if (strcmp(argv[1],"add")==0) {
        //cout << argv[2] << argv[3] << endl;
        int x = stoi(argv[2]);
        int y = stoi (argv[3]);
        int wynik = add(x, y);
        cout << "wynik to : " << wynik << endl;
    }
    else if (strcmp(argv[1],"subtract")==0) {
        int x = stoi(argv[2]);
        int y = stoi (argv[3]);
        int wynik = sub(x,y);
        cout << "wynik to : " << wynik << endl;
    }

    else if (strcmp(argv[1],"volume")==0) {
        int a = stoi(argv[2]);
        int b = stoi (argv[3]);
        int h = stoi (argv[4]);
        int H = stoi (argv[5]);
        double wynik = vol(a,b,h, H);
        cout << "wynik to  : " << wynik << endl;
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

int add (int x, int y) {
    return x+y;
}

int sub (int x, int y) {
    return x-y;
}

double vol (int a, int b, int h, int H) {
    return ((a+b)*h)/2*H;
}

void help () {
    cout << "ogarnij sie" << endl;
}