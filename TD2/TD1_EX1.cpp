#include <iostream>

int nb_appels = 0;

void afficher_appel() {
  // Affichage du nombre total d'appels
  std::cout << "Appel numéro " << ++nb_appels << std::endl;
}

int main() {
  // Appel de la fonction
  afficher_appel();
  afficher_appel();
  afficher_appel();

  return 0;
}

