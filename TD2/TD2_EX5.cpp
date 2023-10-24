#include <iostream>

int main() {
  // Déclaration d'un entier
  int a = 10;

  // Déclaration d'une référence vers cet entier
  int& ref_a = a;

  // Déclaration d'un pointeur vers cet entier
  int* p_a = &a;

  // Affichage des variables, leurs adresses, la valeur pointée
  std::cout << "a : " << a << ", adresse de a : " << &a << std::endl;
  std::cout << "ref_a : " << ref_a << ", adresse de ref_a : " << &ref_a << std::endl;
  std::cout << "p_a : " << *p_a << ", adresse de p_a : " << p_a << std::endl;

  return 0;
}

