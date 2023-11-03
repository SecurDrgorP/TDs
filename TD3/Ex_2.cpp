#include <iostream>
#include <list>

void printList(const list<int>& myList) {
    for (const int& num : myList) {
        cout << num << " ";
    }
    cout << endl;
}

void bubbleSort(list<int>& myList) {
    bool swapped;
    do {
        swapped = false;
        for (auto it = myList.begin(); it != prev(myList.end()); ++it) {
            auto next = next(it);
            if (*it > *next) {
                std::swap(*it, *next);
                swapped = true;
            }
        }
    } while (swapped);
}

void selectionSort(list<int>& myList) {
    for (auto it = myList.begin(); it != prev(myList.end()); ++it) {
        auto min = it;
        for (auto jt = next(it); jt != myList.end(); ++jt) {
            if (*jt < *min) {
                min = jt;
            }
        }
        if (min != it) {
            std::swap(*it, *min);
        }
    }
}

void insertionSort(list<int>& myList) {
    for (auto it = next(myList.begin()); it != myList.end(); ++it) {
        int key = *it;
        auto jt = prev(it);
        while (jt != myList.begin() && key < *jt) {
            std::next(jt) = *jt;
            --jt;
        }
        next(jt) = key;
    }
}

int main() {
    list<int> myList;
    int num, n;

    cout << "Entrez le nombre d'entiers à trier : ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cout << "Entrez " << i << " : ";
        cin >> num;
        myList.push_back(num);
    }

    cout << "Liste non triée : ";
    printList(myList);

    // Tri à bulles
    list<int> bubbleSorted = myList;
    bubbleSort(bubbleSorted);
    cout << "Tri à bulles : ";
    printList(bubbleSorted);

    // Tri par sélection
    list<int> selectionSorted = myList;
    selectionSort(selectionSorted);
    cout << "Tri par sélection : ";
    printList(selectionSorted);

    // Tri par insertion
    list<int> insertionSorted = myList;
    insertionSort(insertionSorted);
    cout << "Tri par insertion : ";
    printList(insertionSorted);

    return 0;
}

