#include <iostream>

// Fonction incrementer()
void incrementer(int* x) {
  *x++;
}

// Fonction permuter()
void permuter(int* x, int* y) {
  int temp = *x;
  *x = *y;
  *y = temp;
}

int main() {
  // Déclaration des variables
  int a = 10;
  int b = 20;

  // Appel de la fonction incrementer()
  incrementer(&a);

  // Affichage de la valeur de a
  std::cout << "a = " << a << std::endl;

  // Appel de la fonction permuter()
  permuter(&a, &b);

  // Affichage des valeurs de a et b
  std::cout << "a = " << a << std::endl;
  std::cout << "b = " << b << std::endl;

  return 0;
}

