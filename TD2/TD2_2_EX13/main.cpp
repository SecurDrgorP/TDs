#include "classP.h"

int main() {
  Point p(1.0, 2.0);

  p.affiche();

  p.deplace(3.0, 4.0);

  p.affiche();

  return 0;
}

