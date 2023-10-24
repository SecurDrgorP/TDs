#include <iostream>

int main() {
  // Saisie de la taille du tableau
  int taille;
  std::cout << "Taille du tableau : ";
  std::cin >> taille;

  // Allocation dynamique du premier tableau
  int* tableau1 = new int[taille];

  // Saisie des valeurs du premier tableau
  for (int i = 0; i < taille; i++) {
    std::cout << "Valeur " << i + 1 << " : ";
    std::cin >> tableau1[i];
  }

  // Allocation dynamique du second tableau
  int* tableau2 = new int[taille];

  // Calcul des carrés des valeurs du premier tableau
  for (int i = 0; i < taille; i++) {
    tableau2[i] = tableau1[i] * tableau1[i];
  }

  // Affichage des valeurs du second tableau
  for (int i = 0; i < taille; i++) {
    std::cout << "Carré de " << tableau1[i] << " = " << tableau2[i] << std::endl;
  }

  // Libération de la mémoire allouée au premier tableau
  delete[] tableau1;

  // Libération de la mémoire allouée au second tableau
  delete[] tableau2;

  return 0;
}

