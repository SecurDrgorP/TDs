#include <iostream>

// Fonction qui retourne un entier représentant le statut du nombre
int statut_nombre(int n) {
  int statut = 0;

  if (est_multiple_de_2(n)) {
    statut |= 1;
  }

  if (est_multiple_de_3(n)) {
    statut |= 2;
  }

  return statut;
}

int main() {
  int n;

  // Saisie d'un nombre entier
  std::cout << "Donnez un entier : ";
  std::cin >> n;

  // Affichage du statut du nombre
  switch (statut_nombre(n)) {
    case 0:
      std::cout << "Le nombre n'est ni pair, ni multiple de 3, ni divisible par 6" << std::endl;
      break;
    case 1:
      std::cout << "Le nombre est pair" << std::endl;
      break;
    case 2:
      std::cout << "Le nombre est multiple de 3" << std::endl;
      break;
    case 3:
      std::cout << "Le nombre est pair et multiple de 3" << std::endl;
      break;
    case 6:
      std::cout << "Le nombre est divisible par 6" << std::endl;
      break;
    case 7:
      std::cout << "Le nombre est pair, multiple de 3 et divisible par 6" << std::endl;
      break;
  }

  return 0;
}

