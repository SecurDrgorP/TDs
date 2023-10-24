#include <iostream>
using namespace std;

class Test {
 private:
  static int nombre;

 public:
  //methdes

  static void call() {
    ++nombre;
  }

  static int get() { return nombre; }
};

int Test::nombre = 0;

int main() {

    Test::call();
    Test::call();

  //l'affichage du nombre d'appels
  cout << "Nombre d'appels à la fonction call() est : " << Test::get() << endl;

  return 0;
}

