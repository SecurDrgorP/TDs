#include <iostream>
using namespace std;

class error_div {
public:
    error_div() {}
    const char* what(){
        return "Erreur de division : diviser par zéro est interdit.";
    }
};

class error_ind {
public:
    error_ind() {}
    const char* what() {
        return "Erreur d'indice : l'indice est incorrect.";
    }
};


class Test {
public:
    static int tableau[];
public:
    static int division(int indice, int diviseur) {
        if (diviseur == 0) {
            throw error_div();
        }
        if (indice < 0 || indice >= 10) {
            throw error_ind();
        }
        return tableau[indice]/diviseur;
    }
};

int Test::tableau[] = {17, 12, 15, 38, 29, 157, 89, -22, 0, 5};

int main() {
    int x, y;
    cout << "Entrez l’indice de l’entier à diviser: " << endl;
    cin >> x;
    cout << "Entrez le diviseur: " << endl;
    cin >> y;

    try {

        cout << "Le résultat de la division est : " << Test::division(x, y) << endl;

    } catch (error_ind& e) {
        cout << e.what() << endl;
    }catch (error_div& e) {
        cout << e.what() << endl;
    }

    return 0;
}

