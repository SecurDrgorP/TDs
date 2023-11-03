#ifndef VECT_H
#define VECT_H


#include <iostream>
using namespace std;

class vect
{
        protected :
                // en prévision d'une éventuelle classe dérivée
                int nelem ; // nombre d'éléments
                int * adr ; // adresse zone dynamique contenant les éléments

        public :
                 vect (int) ; // constructeur
                 ~vect () ; // destructeur
                 int& operator[](int) ; // accès à un élément par son "indice"

};

int& vect::operator[](int n) {
        if (n < 0 || n >= nelem) {
            cout << "Indice hors limites" << endl;
        }
        return adr[n];
}


class Vectok : public vect {
public:
    Vectok(int n) : vect(n) {} // Constructeur par copie

    // Surcharge de l'opérateur d'affectation pour une copie profonde
    Vectok& operator=(const Vectok& other) {
        if (this != &other) { // Vérifier que ce n'est pas la même instance
            delete[] adr; // Libérer la mémoire précédente
            nelem = other.nelem; // Copier la taille
            adr = new int[nelem]; // Allouer une nouvelle mémoire
            for (int i = 0; i < nelem; i++) {
                adr[i] = other.adr[i]; // Copier les éléments
            }
        }
        return *this;
    }

    // Fonction pour obtenir la taille du vecteur
    int taille() const {
        return nelem;
    }

    // Constructeur par recopie
    Vectok(const Vectok& other) : vect(other.nelem) {
        for (int i = 0; i < nelem; i++) {
            adr[i] = other.adr[i];
        }
    }
};


#endif
