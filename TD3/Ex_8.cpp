#include<iostream>
using namespace std;

template<class T> T Carre(T c) {
	return c*c;
}

int main() {

	cout << "Le carre de 2 est " << Carre(2) << endl;

	return 0;
}
