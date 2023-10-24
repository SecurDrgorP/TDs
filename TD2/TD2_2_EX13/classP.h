#ifndef CLASSP_H
#define CLASSP_H

#include <iostream>
using namespace std;

class Point {

 private:
  float x_, y_;

 public:
  // Constructeur
  Point(float x, float y) : x_(x), y_(y) {}

  //methodes
  
  void deplace(float dx, float dy) {
    x_ += dx;
    y_ += dy;
  }

  void affiche() const {
    cout << "(" << x_ << ", " << y_ << ")" << endl;
  }

};

#endif

