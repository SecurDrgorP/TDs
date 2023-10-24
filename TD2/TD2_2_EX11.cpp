#include <iostream>
#include <cmath>

using namespace std;

class vecteur3d {

 private:
	 //les attributs
	 float x_;
	 float y_;
	 float z_;

 public:
  // Constructeur par défaut
  vecteur3d() {
    x_ = 0.0;
    y_ = 0.0;
    z_ = 0.0;
  }

  // Constructeur par paramètres
  vecteur3d(float x, float y, float z) {
    x_ = x;
    y_ = y;
    z_ = z;
  }

  //Methdes.

  void afficher() const {
    cout << "{" << x_ << ", " << y_ << ", " << z_ << "}" << endl;
  }

  vecteur3d somme(const vecteur3d& v) const {
    return vecteur3d(x_ + v.x_, y_ + v.y_, z_ + v.z_);
  }

  float produit(const vecteur3d& v) const {
    return x_ * v.x_ + y_ * v.y_ + z_ * v.z_;
  }

  bool coincide(const vecteur3d& v) const {
    return x_ == v.x_ && y_ == v.y_ && z_ == v.z_;
  }

  float norme() const {
    return sqrt(x_ * x_ + y_ * y_ + z_ * z_);
  }

  friend vecteur3d normax(const vecteur3d& v1, const vecteur3d& v2) {
    return (v1.norme() > v2.norme()) ? v1 : v2;
  }

};

int main() {
  //la création de deux vecteurs.
  vecteur3d v1(1.0, 2.0, 3.0);
  vecteur3d v2(4.0, 5.0, 6.0);

  //l'affichage des vecteurs v1 et v2.
  v1.afficher();
  v2.afficher();

  //la Somme de deux vecteurs.
  vecteur3d v3 = v1.somme(v2);
  v3.afficher();

  //produit scalaire de deux vecteurs.
  float pro_sca = v1.produit(v2);
  cout << "Produit scalaire : " << pro_sca << endl;

  //test d'égalité de deux vecteurs.
  bool test = v1.coincide(v2);
  cout << "Les deux vecteurs sont-ils égaux ? " << test << endl;

  //le norme de deux vecteur.
  float norme_v1 = v1.norme();
  cout << "Norme du v1 : " << norme_v1 << endl;
  float norme_v2 = v2.norme();
  cout << "Norme du v2 : " << norme_v2 << endl;

  //le plus grand vecteur.
  vecteur3d v_max = normax(v1, v2);
  cout << "Le plus grand vecteur est : ";
  v_max.afficher();

  return 0;
}

