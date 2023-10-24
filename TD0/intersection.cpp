#include <iostream>
using namespace std;

//function prototype.
void inter(int, int, int, int);
int min(int, int);
int max(int, int);

int main() {
    int a, b, c, d;
    cout << "Input a: ";
    cin >> a;

    cout << "Input b: ";
    cin >> b;

    cout << "Input c: ";
    cin >> c;

    cout << "Input d: ";
    cin >> d; 

    //the 4 cases
    if(a<=b && c<=d) {
       inter(a, b, c, d);
    } else if(a>=b && c>=d) {
       inter(b, a, d, c);
    }else if(a>=b && c<=d) {
       inter(b, a, c, d);
    }else if(a<=b && c>=d) {
       inter(a, b, d, c);
    }

    return 0;
}

void inter(int a, int b, int c, int d) {
   if(b < c){
      cout << "[" << a << ", " << b << "]" 
           << " ^ " 
           << "[" << c << ", " << d << "]" 
           << " = " 
           << "0/"
           << endl ;
   } else {
      cout << "[" << a << ", " << b << "]" 
           << " ^ " 
           << "[" << c << ", " << d << "]" 
           << " = " 
           << "[" << max(a, c) << "," << min(b, d) << "]" 
           << endl ;
   }
}

int min(int i, int n) {
   if(i > n) {
      return n;
   } else if(i < n) {
      return i;
   } else if(i == n) {
      return i;
   } else {
      return 0;
   }
}

int max(int i, int n) {
   if(i > n) {
      return i;
   } else if(i < n) {
      return n;
   } else if(i == n) {
      return i;
   } else { 
      return 0;
   }
}
