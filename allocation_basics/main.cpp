#include <iostream>
#include <cstring>
#include <string>

using namespace std;

double add (int x, int y);
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

    }

    else if (strcmp(argv[1],"volume")==0) {

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

double add (int x, int y) {
    return x+y;
}

void help () {
    cout << "ogarnij sie" << endl;
}