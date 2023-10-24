#include <iostream>
using namespace std;

class Animal {
 public:
  //les attributs
  string nom_;
  int age_;

  //Methode
  void set_value(string nom, int age) {
    nom_ = nom;
    age_ = age;
  }
};

class Zebra : public Animal {
 public:
  //les attributs
  string lieu_origine_;

  //Méthodes
  void afficher() {
    cout << "Nom : " << nom_ << endl
         << "Age : " << age_ << endl
         << "Lieu d'origine : " << lieu_origine_ << endl;
  }
};

class Dolphin : public Animal {
 public:
  //les attribut
  int taille_dolphin_;

  //Methodes
  void afficher() {
    cout << "Nom : " << nom_ << endl;
    cout << "Age : " << age_ << endl;
    cout << "Taille : " << taille_dolphin_ << endl;
  }
};

int main() {
  //objet Zebra
  Zebra zebra;
  zebra.set_value("Zebra", 5);
  zebra.lieu_origine_ = "Afrique";

  //objet Dolphin
  Dolphin dolphin;
  dolphin.set_value("Dolphin", 10);
  dolphin.taille_dolphin_ = 2;

  //Affichage
  zebra.afficher();
  dolphin.afficher();

  return 0;
}

