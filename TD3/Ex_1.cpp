#include<iostream>
//using namespace std;


class Complex {
	private:
		int im_;
	        int re_;
		//pour les methodes
		//double reel, imag;
	
	public: 
		Complex(const int& im, const int& re) {
			im_ = im;
			re_ = re;
		}
		//get.
		int re() {
			return re_;
		}

		int im() {
			return im_;
		}

		//saisir.
		Complex Saisir() {
			int im, re;
			std::cout << "Entrez le nombre reelle: ";
			std::cin >> im;
			
			std::cout << "Entrez le nombre imaginaire: ";
			std::cin >> re;
	
			return Complex(re, im);
		}
		//les operations.
		Complex operator+(const Complex& other) const {
    return Complex(re_ + other.re_, im_ + other.im_);
  }
  Complex operator-(const Complex& other) const {
    return Complex(re_ - other.re_, im_ - other.im_);
  }
  Complex operator*(const Complex& other) const {
    double reel = re_ * other.re_ - im_ * other.im_;
    double imag z = re_ * other.im_ + other.re_ * im_;
    return Complex(reel, imag);
  }
  Complex operator/(const Complex& other) const {
    double reel = (other.re_ * re_ + other.im_ * im_) / (other.re_ * other.re_ - other.im_ * other.im_);
    double imag = (other.re_ * im_ - other.im_ * re_) / (other.re_ * other.re_ - other.im_ * other.im_);
    return Complex(reel, imag);
  }
		/*
		Complex Add(const Complex& add) const {
			return Complex(re_+add.re(), im_+add.im());
		}

		Complex Sub(const Complex& sub) const {
                        return Complex(re_-sub.re(), im_-sub.im());
                }

		Complex Mult(const Complex& mul) const {
			double reel = re_ * mul.re() - im_ * mul.im();
			double imag = re_ * mul.im() + mul.re() * im_;
                        return Complex(reel, imag);
                }

		Complex Div(const Complex& div) const {
			double reel = (div.re()*re_+div.im()*im_) / (div.re()*div.re()-div.im() * div.im());
			double imag = (div.re() * im_ - div.im() * re_) / (div.re() * div.re() - div.im() * div.im());
                        return Complex(reel, imag);
                }
*/		
};


int main() {

	char choix;
	Complex a = a.Saisir();
        Complex b = b.Saisir();
	
	std::cout << "Entrez l'operation: ";
	std::cin >> choix;

	switch(choix) {
		case '+': 
			std::cout << "Le resultat est: " << a+b << std::endl; break;
	        case '-': 
			std::cout << "Le resultat est: " << a-b << std::endl; break;
		case '*': 
			std::cout << "Le resultat est: " << a*b << std::endl; break;
		case '/': 
			std::cout << "Le resultat est: " << a/b << std::endl; break;
		default: 
			std::cout << "Error." << std::endl; break;
	};

	return 0;
}


