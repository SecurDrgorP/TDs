#include <iostream>
#include <set>
#include <vector>
#include <list>
using namespace std;

// 2
template <typename T>
bool recherche(const std::set<T>& set, T val) {
    return s.count(valeur) > 0;
}

// 3
template <typename I, typename T>
bool recherche(I debut, I fin, T val) {
    while (debut != fin) {
        if (*debut == val) {
            return true;
        }
        debut++;
    }
    return false;
}

int main() {
    // 1
    set<int> set;
    for (int i = 1; i <= 100; i++) {
        set.insert(i);
    }
    
    // 4
    vector<double> vect = {11, 7, 27};
    list<string> list = {"charraj", "zakariaa", "IDAI"};
    char arr[] = {'a', 'b', 'c'};

    cout << "est-ce-que 7 dans le set : " << recherche(set, 7) << endl;
    cout << "est-ce-que 11 dans l'ensemble vecteur : " << recherche(vect.begin(), vect.end(), 11) << endl;
    cout << "est-ce-que la filiere IDAI dans la liste : " << recherche(list.begin(), list.end(), "IDAI") << endl;
    cout << "Trouvé dans le tableau : " << recherche(begin(arr), end(arr), 'd') << endl;

    return 0;
}

