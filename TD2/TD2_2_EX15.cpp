#include <iostream>
using namespace std;

class Fichier {

 private:
  char* add_ = nullptr;
  size_t space_;
	
 public:
  // Constructeur
  Fichier(size_t taille) : space_(taille) {}

  // Destructeur
  ~Fichier() {
    if (add_ != nullptr) {
      delete[] add_;
    }
  }

  //methodes

  void Creation() {
    add_ = new char[space_];
  }

  //Remplissage de l'espace mémoire
  void Remplit() {
    for (size_t i = 0; i < space_; ++i) {
      add_[i] = 'a' + rand() % 255;
    }
  }

  //Affichage de l'espace mémoire
  void Affiche() const {
    for (size_t i = 0; i < space_; ++i) {
      cout << add_[i];
    }
    cout << endl;
  }

};

int main() {
  // Création d'un objet Fichier
  Fichier fichier(100);

  // Création de l'espace mémoire
  fichier.Creation();

  // Remplissage de l'espace mémoire
  fichier.Remplit();

  // Affichage de l'espace mémoire
  fichier.Affiche();

  // Destruction de l'objet par delete
  delete &fichier;

  // Destruction de l'objet par destructeur
  fichier.~Fichier();

  return 0;
}

