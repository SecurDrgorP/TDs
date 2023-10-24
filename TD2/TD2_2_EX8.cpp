#include <iostream>

class Complexe {
 public:
  // Constructeur
  Complexe(double re, double im) : re_(re), im_(im) {}

  // Accesseurs
  double re() const { return re_; }
  double im() const { return im_; }

  // Opérateurs
  Complexe operator+(const Complexe& c) const {
    return Complexe(re_ + c.re(), im_ + c.im());
  }

  Complexe operator-(const Complexe& c) const {
    return Complexe(re_ - c.re(), im_ - c.im());
  }

  Complexe operator*(const Complexe& c) const {
    return Complexe(re_ * c.re() - im_ * c.im(),
                    re_ * c.im() + im_ * c.re());
  }

  Complexe operator/(const Complexe& c) const {
    return Complexe((re_ * c.re() + im_ * c.im()) / (c.re() * c.re() + c.im() * c.im()),
                    (im_ * c.re() - re_ * c.im()) / (c.re() * c.re() + c.im() * c.im()));
  }

  // Opérateur d'égalité
  bool operator==(const Complexe& c) const { return re_ == c.re() && im_ == c.im(); }

 private:
  // Parties réelle et imaginaire
  double re_;
  double im_;
};

int main() {
  // Déclaration des variables
  Complexe a, b;

  // Saisie des parties réelle et imaginaire de a
  std::cout << "Entrez la partie réelle de a : ";
  std::cin >> a.re();
  std::cout << "Entrez la partie imaginaire de a : ";
  std::cin >> a.im();

  // Saisie des parties réelle et imaginaire de b
  std::cout << "Entrez la partie réelle de b : ";
  std::cin >> b.re();
  std::cout << "Entrez la partie imaginaire de b : ";
  std::cin >> b.im();

  // Affichage du menu
  std::cout << "1. Addition" << std::endl;
  std::cout << "2. Soustraction" << std::endl;
  std::cout << "3. Multiplication" << std::endl;
  std::cout << "4. Division" << std::endl;
  std::cout << "5. Egalité" << std::endl;
  int choix;
  std::cout << "Votre choix : ";
  std::cin >> choix;

  // Choix de l'opération
  switch (choix) {
    case 1:
      // Addition
      std::cout << "a + b = " << a + b << std::endl;
      break;
    case 2:
      // Soustraction
      std::cout << "a - b = " << a - b << std::endl;
      break;
    case 3:
      // Multiplication
      std::cout << "a * b = " << a * b << std::endl;
      break;
    case 4:
      // Division
      std::cout << "a / b = " << a / b << std::endl;
      break;
    case 5:
      // Egalité
      std::cout << "a == b = " << (a == b) << std::endl;
      break;
    default:
      std::cout << "Choix invalide" << std::endl;
      break;
  }

  return 0;
}

