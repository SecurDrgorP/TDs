#include <iostream>
#include "vect.h"

using namespace std;

int main() {
    Vectok v1(5);
    v1[0] = 10;
    v1[1] = 20;
    v1[2] = 30;
    
    Vectok v2 = v1; // Appel au constructeur par copie
    v2[0] = 42;
    
    Vectok v3(3);
    v3 = v2; // Appel à l'opérateur d'affectation

    for (int i = 0; i < v3.taille(); i++) {
        cout << v3[i] << " ";
    }

    return 0;
}

