#include <iostream>
#include <list>
#include <string>
using namespace std;

struct Person {
    string nom;
    string prenom;
    int age;
};

// Fonction pour comparer deux personnes en fonction de leur nom et prénom
bool comparerPersonnes(const Person& personne1, const Person& personne2) {
    if (personne1.nom == personne2.nom) {
        return personne1.prenom < personne2.prenom;
    }
    return personne1.nom < personne2.nom;
}

int main() {
    list<Person> listePersonnes;

    char nextOne;
    do {
        Person personne;
        cout << "Entrez le nom : ";
        cin >> personne.nom;
        cout << "Entrez le prénom : ";
        cin >> personne.prenom;
        cout << "Entrez l'âge : ";
        cin >> personne.age;

        listePersonnes.push_back(personne);

        cout << "Voulez-vous ajouter une autre personne ? (O/N) : ";
        cin >> nextOne;
    } while (nextOne == 'O' || nextOne == 'o');
   
    listePersonnes.sort(comparerPersonnes);

    cout << "Liste triée des personnes :\n";
    for (const Person& personne : listePersonnes) {
        cout << "nom : " 
	     << personne.nom 
	     << ", prénom : " 
	     << personne.prenom
	     << ", age : " 
	     << personne.age
	     << endl;
    }

    return 0;
}

