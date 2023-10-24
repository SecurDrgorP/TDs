#include <iostream>

int main() {
  int* tableau = new int[10];
  int* plus_grand = tableau;
  int* plus_petit = tableau;

  // Saisie des nombres entiers
  for (int i = 0; i < 10; i++) {
    std::cout << "Donnez un nombre entier : ";
    std::cin >> tableau[i];

    // Mise à jour du plus grand
    if (*plus_grand < tableau[i]) {
      plus_grand = tableau + i;
    }

    // Mise à jour du plus petit
    if (*plus_petit > tableau[i]) {
      plus_petit = tableau + i;
    }
  }

  // Affichage du plus grand et du plus petit
  std::cout << "Le plus grand nombre est " << *plus_grand << std::endl;
  std::cout << "Le plus petit nombre est " << *plus_petit << std::endl;

  delete[] tableau;

  return 0;
}

