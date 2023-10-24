#include <iostream>
using namespace std;

struct El {
  int valeur_;
  Element* suivant_;
};

class Liste {

 private:
   Element* list_;

 public:
  //constructeur
  Liste() : list_(nullptr) {}

  //destructeur
  ~Liste() {
    for (El* el = list_; el != nullptr;) {
      El* suivant = el->suivant_;
      delete el;
      el = suivant;
    }
  }

  // Ajout d'un élément au début de la liste
  void Ajouter(int valeur) {
    // Allocation d'un nouvel élément
    El* el = new El;
    el->valeur_ = valeur;
    el->suivant_ = list_;

    // Mise à jour du premier élément de la liste
    list_ = el;
  }

  // Suppression d'un élément au début de la liste
  void Supprimer() {
    // Si la liste est vide, ne rien faire
    if (list_ == nullptr) {
      return;
    }

    // Sauvegarde du premier élément
    El* el = list_;

    // Mise à jour du premier élément de la liste
    list_ = el->suivant_;

    // Libération de la mémoire de l'élément supprimé
    delete el;
  }

  // Affichage de la liste en entier
  void Afficher() const {
    // Parcours de la liste
    for (El* el = list_; el != nullptr; el = el->suivant_) {
      // Affichage de la valeur de l'élément
      cout << el->valeur_ << " ";
    }
    cout << endl;
  }

};

int main() {
  Liste liste;

  liste.Ajouter(1);
  liste.Ajouter(2);
  liste.Ajouter(3);

  liste.Afficher();

  liste.Supprimer();

  liste.Afficher();

  return 0;
}

