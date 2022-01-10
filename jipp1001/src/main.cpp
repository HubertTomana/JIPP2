//
// Created by huber on 10.01.2022.
//
#include <iostream>
using namespace std;
template <typename T>
class myUnique {
private:
    T*ptr;

public:
    //konstruktor tworzacy

    myUnique(const myUnique &) = delete; //const moze byc, nie musi, roznie jest xd

    myUnique operator=(const myUnique &) = delete;

    //destruktor
};

template <typename T>

class myShared { // wspoldzieony
private:
    T*ptr;
    int *references;

public:
    //konstruktor tworzacy
    myShared(T *ptr) {
        references = new int;
        *references = 1;
    }

    myShared(const myShared &myShared) {
        references = myShared.references;
        ++(*references);
        //jeszcze kopia wskaznika na dane
    }

    myShared operator=(const myShared &) = delete;

    ~myShared() {
        --(* references);
        if (*references < 1) {
            delete ptr;
        }
    }

};

int main () {

}
